// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143b126d0 FUN_143b126d0 body=54 status=ok
// SIG undefined FUN_143b126d0(void)

undefined8 FUN_143b126d0(undefined8 param_1,uint param_2)

{
  FUN_143b2b380(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b12710 FUN_143b12710 body=311 status=ok
// SIG undefined FUN_143b12710(void)

void FUN_143b12710(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 local_58 [2];
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  longlong local_38;
  undefined8 *local_30;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  cVar1 = FUN_143b14e80(param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_143b14df0(param_1), cVar1 == '\0')) {
    local_38 = FUN_143a8d310(0x28);
    if (local_38 == 0) {
      local_40 = (undefined8 *)0x0;
    }
    else {
      local_40 = (undefined8 *)FUN_143a8d3a0(local_38,param_2);
    }
    local_20 = local_40;
    local_50 = local_40;
    if (local_40 == (undefined8 *)0x0) {
      FUN_143b15ec0(param_1);
    }
    else {
      local_58[0] = 0;
      FUN_143b09ed0(*(undefined8 *)(param_1 + 0x40),local_40,FUN_143b13fb0,local_58);
      cVar1 = FUN_143a8b0e0(local_58[0]);
      if (cVar1 != '\0') {
        FUN_143b15ec0(param_1);
        local_30 = local_50;
        local_48 = local_50;
        if (local_50 != (undefined8 *)0x0) {
          (**(code **)*local_50)(local_50,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 143b12850 FUN_143b12850 body=134 status=ok
// SIG undefined FUN_143b12850(void)

void FUN_143b12850(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  while( true ) {
    iVar1 = FUN_143a904f0(param_2);
    if (iVar1 <= local_18) break;
    uVar2 = FUN_143a8e3e0(param_2,local_18);
    FUN_143b128e0(param_1,uVar2,param_3);
    if (uVar2 < 0x10000) {
      local_14 = 1;
    }
    else {
      local_14 = 2;
    }
    local_18 = local_18 + local_14;
  }
  return;
}



// FUNCTION 143b128e0 FUN_143b128e0 body=189 status=ok
// SIG undefined FUN_143b128e0(void)

void FUN_143b128e0(undefined8 param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  
  if (((param_3 == '\0') || (cVar1 = FUN_143b28720(param_2), cVar1 == '\0')) ||
     (cVar1 = FUN_143b285b0(param_1,param_2), cVar1 == '\0')) {
    switch(param_2) {
    case 0x24:
    case 0x26:
    case 0x2d:
    case 0x3a:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x5e:
    case 0x7b:
    case 0x7d:
      FUN_143acc590(param_1,0x5c);
      break;
    default:
      cVar1 = FUN_143b28380(param_2);
      if (cVar1 != '\0') {
        FUN_143acc590(param_1,0x5c);
      }
    }
    FUN_143a8e0c0(param_1,param_2);
  }
  return;
}



// FUNCTION 143b12a10 FUN_143b12a10 body=645 status=ok
// SIG undefined FUN_143b12a10(void)

void FUN_143b12a10(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int local_38;
  int local_34;
  int local_2c;
  
  FUN_143acc590(param_2,0x5b);
  iVar1 = (**(code **)(*param_1 + 0xc0))(param_1);
  if (1 < iVar1) {
    iVar2 = (**(code **)(*param_1 + 200))(param_1,0);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*param_1 + 0xd0))(param_1,iVar1 + -1);
      if (iVar2 == 0x10ffff) {
        FUN_143acc590(param_2,0x5e);
        for (local_34 = 1; local_34 < iVar1; local_34 = local_34 + 1) {
          iVar2 = (**(code **)(*param_1 + 0xd0))(param_1,local_34 + -1);
          iVar3 = (**(code **)(*param_1 + 200))(param_1,local_34);
          iVar3 = iVar3 + -1;
          FUN_143b128e0(param_2,iVar2 + 1,param_3);
          if (iVar2 + 1 != iVar3) {
            if (iVar2 + 2 != iVar3) {
              FUN_143acc590(param_2,0x2d);
            }
            FUN_143b128e0(param_2,iVar3,param_3);
          }
        }
        goto LAB_143b12c17;
      }
    }
  }
  for (local_38 = 0; local_38 < iVar1; local_38 = local_38 + 1) {
    iVar2 = (**(code **)(*param_1 + 200))(param_1,local_38);
    iVar3 = (**(code **)(*param_1 + 0xd0))(param_1,local_38);
    FUN_143b128e0(param_2,iVar2,param_3);
    if (iVar2 != iVar3) {
      if (iVar2 + 1 != iVar3) {
        FUN_143acc590(param_2,0x2d);
      }
      FUN_143b128e0(param_2,iVar3,param_3);
    }
  }
LAB_143b12c17:
  local_2c = 0;
  while( true ) {
    iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1[8]);
    if (iVar1 <= local_2c) break;
    FUN_143acc590(param_2,0x7b);
    uVar4 = FUN_143b09610(param_1[8],local_2c);
    FUN_143b12850(param_2,uVar4,param_3);
    FUN_143acc590(param_2,0x7d);
    local_2c = local_2c + 1;
  }
  FUN_143acc590(param_2,0x5d);
  return;
}



// FUNCTION 143b12ca0 FUN_143b12ca0 body=373 status=ok
// SIG undefined FUN_143b12ca0(void)

undefined8 FUN_143b12ca0(longlong param_1,undefined8 param_2,char param_3)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int local_14;
  uint local_10;
  uint local_c;
  
  if (*(longlong *)(param_1 + 0x38) == 0) {
    param_2 = FUN_143b12a10(param_1,param_2,param_3);
  }
  else {
    local_c = 0;
    local_14 = 0;
    while (local_14 < *(int *)(param_1 + 0x34)) {
      local_10 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x38) + (longlong)local_14 * 2);
      iVar3 = local_14 + 1;
      if ((((local_10 & 0xfffffc00) == 0xd800) && (iVar3 != *(int *)(param_1 + 0x34))) &&
         (uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar3 * 2),
         (uVar1 & 0xfc00) == 0xdc00)) {
        local_10 = local_10 * 0x400 + -0x35fdc00 + (uint)uVar1;
        iVar3 = local_14 + 2;
      }
      local_14 = iVar3;
      if ((param_3 == '\0') || (cVar2 = FUN_143b28720(local_10), cVar2 == '\0')) {
        FUN_143a8e0c0(param_2,local_10);
        if (local_10 == 0x5c) {
          local_c = local_c + 1;
        }
        else {
          local_c = 0;
        }
      }
      else {
        if ((local_c & 1 ^ (int)local_c >> 0x1f) - ((int)local_c >> 0x1f) == 1) {
          iVar3 = FUN_143a904f0(param_2);
          FUN_143a99400(param_2,iVar3 + -1);
        }
        FUN_143b285b0(param_2,local_10);
        local_c = 0;
      }
    }
  }
  return param_2;
}



// FUNCTION 143b12e20 FUN_143b12e20 body=1702 status=ok
// SIG undefined FUN_143b12e20(void)

void FUN_143b12e20(longlong param_1,int *param_2,int param_3,char param_4)

{
  char cVar1;
  char local_res20;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_30 [2];
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  cVar1 = FUN_143b14e80(param_1);
  if (((cVar1 == '\0') && (cVar1 = FUN_143b14df0(param_1), cVar1 == '\0')) &&
     (param_2 != (int *)0x0)) {
    local_30[0] = 0;
    FUN_143b14570(param_1,*(int *)(param_1 + 0x10) + param_3,local_30);
    cVar1 = FUN_143a8b0e0(local_30[0]);
    if (cVar1 == '\0') {
      local_48 = 0;
      local_44 = **(int **)(param_1 + 0x18);
      local_40 = 1;
      local_38 = *param_2;
      local_3c = 1;
      local_res20 = param_4;
      while( true ) {
        while( true ) {
          while( true ) {
            while (local_res20 != '\0') {
              if (local_res20 == '\x01') {
                if (local_44 < local_38) {
                  *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)local_48 * 4) = local_44;
                  local_48 = local_48 + 1;
                  local_44 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)local_40 * 4);
                  local_40 = local_40 + 1;
                  local_res20 = '\0';
                }
                else if (local_38 < local_44) {
                  local_38 = param_2[local_3c];
                  local_3c = local_3c + 1;
                  local_res20 = '\x03';
                }
                else {
                  if (local_44 == 0x110000) goto LAB_143b13498;
                  local_44 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)local_40 * 4);
                  local_40 = local_40 + 1;
                  local_38 = param_2[local_3c];
                  local_3c = local_3c + 1;
                  local_res20 = '\x02';
                }
              }
              else if (local_res20 == '\x02') {
                if (local_38 < local_44) {
                  *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)local_48 * 4) = local_38;
                  local_48 = local_48 + 1;
                  local_38 = param_2[local_3c];
                  local_3c = local_3c + 1;
                  local_res20 = '\0';
                }
                else if (local_44 < local_38) {
                  local_44 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)local_40 * 4);
                  local_40 = local_40 + 1;
                  local_res20 = '\x03';
                }
                else {
                  if (local_44 == 0x110000) goto LAB_143b13498;
                  local_44 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)local_40 * 4);
                  local_40 = local_40 + 1;
                  local_38 = param_2[local_3c];
                  local_3c = local_3c + 1;
                  local_res20 = '\x01';
                }
              }
              else if (local_res20 == '\x03') {
                if (local_44 < local_38) {
                  if (local_38 == 0x110000) goto LAB_143b13498;
                  *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)local_48 * 4) = local_38;
                }
                else {
                  if (local_44 == 0x110000) goto LAB_143b13498;
                  *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)local_48 * 4) = local_44;
                }
                local_48 = local_48 + 1;
                local_44 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)local_40 * 4);
                local_40 = local_40 + 1;
                local_38 = param_2[local_3c];
                local_3c = local_3c + 1;
                local_res20 = '\0';
              }
            }
            if (local_38 <= local_44) break;
            if ((local_48 < 1) ||
               (*(int *)(*(longlong *)(param_1 + 0x28) + (longlong)(local_48 + -1) * 4) < local_44))
            {
              *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)local_48 * 4) = local_44;
              local_48 = local_48 + 1;
              local_44 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)local_40 * 4);
            }
            else {
              local_48 = local_48 + -1;
              local_28 = (longlong)local_40;
              local_44 = FUN_143b154c0(*(undefined4 *)(*(longlong *)(param_1 + 0x18) + local_28 * 4)
                                       ,*(undefined4 *)
                                         (*(longlong *)(param_1 + 0x28) + (longlong)local_48 * 4));
            }
            local_40 = local_40 + 1;
            local_res20 = '\x01';
          }
          if (local_44 <= local_38) break;
          if ((local_48 < 1) ||
             (*(int *)(*(longlong *)(param_1 + 0x28) + (longlong)(local_48 + -1) * 4) < local_38)) {
            *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)local_48 * 4) = local_38;
            local_48 = local_48 + 1;
            local_38 = param_2[local_3c];
          }
          else {
            local_48 = local_48 + -1;
            local_20 = (longlong)local_3c;
            local_38 = FUN_143b154c0(param_2[local_20],
                                     *(undefined4 *)
                                      (*(longlong *)(param_1 + 0x28) + (longlong)local_48 * 4));
          }
          local_3c = local_3c + 1;
          local_res20 = '\x02';
        }
        if (local_44 == 0x110000) break;
        if ((local_48 < 1) ||
           (*(int *)(*(longlong *)(param_1 + 0x28) + (longlong)(local_48 + -1) * 4) < local_44)) {
          *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)local_48 * 4) = local_44;
          local_48 = local_48 + 1;
          local_44 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)local_40 * 4);
        }
        else {
          local_48 = local_48 + -1;
          local_18 = (longlong)local_40;
          local_44 = FUN_143b154c0(*(undefined4 *)(*(longlong *)(param_1 + 0x18) + local_18 * 4),
                                   *(undefined4 *)
                                    (*(longlong *)(param_1 + 0x28) + (longlong)local_48 * 4));
        }
        local_40 = local_40 + 1;
        local_38 = param_2[local_3c];
        local_3c = local_3c + 1;
        local_res20 = '\x03';
      }
LAB_143b13498:
      *(undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)local_48 * 4) = 0x110000;
      *(int *)(param_1 + 0x10) = local_48 + 1;
      FUN_143b16b90(param_1);
      FUN_143b15590(param_1);
    }
  }
  return;
}



// FUNCTION 143b134e0 FUN_143b134e0 body=167 status=ok
// SIG undefined FUN_143b134e0(void)

longlong FUN_143b134e0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_143a904f0(param_2);
  if (((iVar2 != 0) && (cVar1 = FUN_143b14e80(param_1), cVar1 == '\0')) &&
     (cVar1 = FUN_143b14df0(param_1), cVar1 == '\0')) {
    iVar2 = FUN_143b14d00(param_2);
    if (iVar2 < 0) {
      cVar1 = FUN_143b0fdf0(*(undefined8 *)(param_1 + 0x40),param_2);
      if (cVar1 == '\0') {
        FUN_143b12710(param_1,param_2);
        FUN_143b15590(param_1);
      }
    }
    else {
      FUN_143b13590(param_1,iVar2);
    }
  }
  return param_1;
}



// FUNCTION 143b13590 FUN_143b13590 body=794 status=ok
// SIG undefined FUN_143b13590(void)

longlong FUN_143b13590(longlong param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_res10 [6];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined4 *local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  undefined4 *local_20;
  undefined4 *local_18;
  undefined4 *local_10;
  
  local_res10[0] = param_2;
  uVar2 = FUN_143b15550(local_res10);
  uVar3 = FUN_143b148e0(param_1,uVar2);
  if ((((uVar3 & 1) == 0) && (cVar1 = FUN_143b14e80(param_1), cVar1 == '\0')) &&
     (cVar1 = FUN_143b14df0(param_1), cVar1 == '\0')) {
    if (local_res10[0] == *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)uVar3 * 4) + -1) {
      *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)uVar3 * 4) = local_res10[0];
      if (local_res10[0] == 0x10ffff) {
        local_44 = 0;
        FUN_143b14610(param_1,*(int *)(param_1 + 0x10) + 1,&local_44);
        cVar1 = FUN_143a8b0e0(local_44);
        if (cVar1 != '\0') {
          return param_1;
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x10) * 4) =
             0x110000;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      }
      if ((0 < (int)uVar3) &&
         (local_res10[0] == *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)(uVar3 - 1) * 4)
         )) {
        local_30 = (undefined4 *)(*(longlong *)(param_1 + 0x18) + -4 + (longlong)(int)uVar3 * 4);
        local_18 = (undefined4 *)
                   (*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x10) * 4);
        for (local_28 = local_30 + 2; local_28 < local_18; local_28 = local_28 + 1) {
          *local_30 = *local_28;
          local_30 = local_30 + 1;
        }
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -2;
      }
    }
    else if (((int)uVar3 < 1) ||
            (local_res10[0] !=
             *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)(uVar3 - 1) * 4))) {
      local_40[0] = 0;
      FUN_143b14610(param_1,*(int *)(param_1 + 0x10) + 2,local_40);
      cVar1 = FUN_143a8b0e0(local_40[0]);
      if (cVar1 != '\0') {
        return param_1;
      }
      local_38 = (undefined4 *)
                 (*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x10) * 4);
      local_20 = local_38 + 2;
      local_10 = (undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)uVar3 * 4);
      while (local_10 < local_38) {
        local_38 = local_38 + -1;
        local_20 = local_20 + -1;
        *local_20 = *local_38;
      }
      *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)uVar3 * 4) = local_res10[0];
      *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)(uVar3 + 1) * 4) = local_res10[0] + 1;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 2;
    }
    else {
      *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)(uVar3 - 1) * 4) =
           *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)(uVar3 - 1) * 4) + 1;
    }
    FUN_143b15590(param_1);
  }
  return param_1;
}



// FUNCTION 143b138b0 FUN_143b138b0 body=164 status=ok
// SIG undefined FUN_143b138b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b138b0(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  int local_res10 [2];
  int local_res18 [4];
  undefined1 auStack_48 [32];
  int local_28;
  int local_20;
  int local_1c;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  local_28 = FUN_143b15550(local_res10);
  iVar1 = FUN_143b15550(local_res18);
  if (local_28 < iVar1) {
    local_20 = local_res10[0];
    local_1c = local_res18[0] + 1;
    local_18 = 0x110000;
    FUN_143b12e20(param_1,&local_20,2,0);
  }
  else if (local_res10[0] == local_res18[0]) {
    FUN_143b13590(param_1,local_res10[0]);
  }
  return param_1;
}



// FUNCTION 143b13960 FUN_143b13960 body=128 status=ok
// SIG undefined FUN_143b13960(void)

undefined8 FUN_143b13960(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  while( true ) {
    iVar1 = FUN_143a904f0(param_2);
    if (iVar1 <= local_18) break;
    uVar2 = FUN_143a8e3e0(param_2,local_18);
    FUN_143b13590(param_1,uVar2);
    if (uVar2 < 0x10000) {
      local_14 = 1;
    }
    else {
      local_14 = 2;
    }
    local_18 = local_18 + local_14;
  }
  return param_1;
}



// FUNCTION 143b139e0 FUN_143b139e0 body=196 status=ok
// SIG undefined FUN_143b139e0(void)

longlong FUN_143b139e0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_18;
  
  if ((0 < *(int *)(param_2 + 0x10)) && (*(longlong *)(param_2 + 0x18) != 0)) {
    FUN_143b12e20(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x10),0);
  }
  if (*(longlong *)(param_2 + 0x40) != 0) {
    local_18 = 0;
    while( true ) {
      iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(*(undefined8 *)(param_2 + 0x40));
      if (iVar2 <= local_18) break;
      uVar3 = FUN_143b09610(*(undefined8 *)(param_2 + 0x40),local_18);
      cVar1 = FUN_143b0fdf0(*(undefined8 *)(param_1 + 0x40),uVar3);
      if (cVar1 == '\0') {
        FUN_143b12710(param_1,uVar3);
      }
      local_18 = local_18 + 1;
    }
  }
  return param_1;
}



// FUNCTION 143b13ab0 FUN_143b13ab0 body=57 status=ok
// SIG undefined FUN_143b13ab0(void)

void FUN_143b13ab0(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x70))(param_2,param_1 + -8);
  return;
}



// FUNCTION 143b13af0 FUN_143b13af0 body=314 status=ok
// SIG undefined FUN_143b13af0(void)

ulonglong FUN_143b13af0(ulonglong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 local_38;
  
  cVar2 = FUN_143a8b0e0(*param_2);
  if (cVar2 == '\0') {
    lVar3 = FUN_143a8d310(0x28);
    if (lVar3 == 0) {
      local_38 = 0;
    }
    else {
      local_38 = FUN_143b09140(lVar3,FUN_143a8d350,FUN_143a91380,1,param_2);
    }
    *(undefined8 *)(param_1 + 0x40) = local_38;
    if (*(longlong *)(param_1 + 0x40) == 0) {
      *param_2 = 7;
      param_1 = (ulonglong)param_2 & 0xffffffffffffff00;
    }
    else {
      cVar2 = FUN_143a8b0e0(*param_2);
      if (cVar2 == '\0') {
        param_1 = 1;
      }
      else {
        puVar1 = *(undefined8 **)(param_1 + 0x40);
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        *(undefined8 *)(param_1 + 0x40) = 0;
        param_1 = param_1 & 0xffffffffffffff00;
      }
    }
  }
  else {
    param_1 = (ulonglong)(uint3)(cVar2 >> 7) << 8;
  }
  return param_1;
}



// FUNCTION 143b13c30 FUN_143b13c30 body=169 status=ok
// SIG undefined FUN_143b13c30(void)

int FUN_143b13c30(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_res10;
  int local_18;
  
  if (-1 < param_2) {
    local_18 = 0;
    local_res10 = param_2;
    while (local_18 < (int)(*(uint *)(param_1 + 0x10) & 0xfffffffe)) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)local_18 * 4);
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(local_18 + 1) * 4) - iVar1;
      local_18 = local_18 + 2;
      if (local_res10 < iVar2) {
        return iVar1 + local_res10;
      }
      local_res10 = local_res10 - iVar2;
    }
  }
  return -1;
}



// FUNCTION 143b13ce0 FUN_143b13ce0 body=161 status=ok
// SIG undefined FUN_143b13ce0(void)

longlong FUN_143b13ce0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_143b14e80(param_1);
  if (cVar1 == '\0') {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      **(undefined4 **)(param_1 + 0x18) = 0x110000;
    }
    *(undefined4 *)(param_1 + 0x10) = 1;
    FUN_143b15590(param_1);
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_143b09b10(*(undefined8 *)(param_1 + 0x40));
    }
    if ((*(longlong *)(param_1 + 0x18) != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
      *(undefined1 *)(param_1 + 0x50) = 0;
    }
  }
  return param_1;
}



// FUNCTION 143b13d90 CreateInternalContext body=92 status=ok
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
  
  lVar1 = FUN_143a8d310(0x58);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b11bb0(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143b13df0 FUN_143b13df0 body=95 status=ok
// SIG undefined FUN_143b13df0(void)

undefined8 FUN_143b13df0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 local_20;
  
  lVar1 = FUN_143a8d310(0x58);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b11900(lVar1,param_1,1);
  }
  return local_20;
}



// FUNCTION 143b13e50 FUN_143b13e50 body=108 status=ok
// SIG undefined FUN_143b13e50(void)

void FUN_143b13e50(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 local_20;
  
  lVar1 = FUN_143a8d310(0x28);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143a8d3a0(lVar1,*param_2);
  }
  *param_1 = local_20;
  return;
}



// FUNCTION 143b13ec0 FUN_143b13ec0 body=230 status=ok
// SIG undefined FUN_143b13ec0(void)

longlong FUN_143b13ec0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  uint local_18;
  
  cVar1 = FUN_143b14e80(param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_143b14df0(param_1), cVar1 == '\0')) {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_143aa79f0(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
      local_18 = (uint)(*(int *)(param_1 + 0x10) == 0);
      iVar2 = *(int *)(param_1 + 0x10) + local_18;
      lVar3 = FUN_143aa7aa0(*(undefined8 *)(param_1 + 0x18),(longlong)iVar2 << 2);
      if (lVar3 != 0) {
        *(longlong *)(param_1 + 0x18) = lVar3;
        *(int *)(param_1 + 0x14) = iVar2;
      }
    }
  }
  return param_1;
}



// FUNCTION 143b13fb0 FUN_143b13fb0 body=54 status=ok
// SIG undefined FUN_143b13fb0(void)

void FUN_143b13fb0(undefined8 param_1,undefined8 param_2)

{
  FUN_143b0fd00(param_1,param_2);
  return;
}



// FUNCTION 143b13ff0 FUN_143b13ff0 body=189 status=ok
// SIG undefined FUN_143b13ff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b13ff0(undefined8 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 local_res10 [2];
  int local_res18 [4];
  undefined1 auStack_48 [32];
  int local_28;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  cVar1 = FUN_143b14e80(param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_143b14df0(param_1), cVar1 == '\0')) {
    local_28 = FUN_143b15550(local_res10);
    iVar2 = FUN_143b15550(local_res18);
    if (local_28 <= iVar2) {
      local_20 = local_res10[0];
      local_1c = local_res18[0] + 1;
      local_18 = 0x110000;
      FUN_143b146a0(param_1,&local_20,2,0);
    }
    FUN_143b15590(param_1);
  }
  return param_1;
}



// FUNCTION 143b140b0 FUN_143b140b0 body=376 status=ok
// SIG undefined FUN_143b140b0(void)

longlong FUN_143b140b0(longlong param_1)

{
  char cVar1;
  undefined4 local_18 [6];
  
  cVar1 = FUN_143b14e80(param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_143b14df0(param_1), cVar1 == '\0')) {
    local_18[0] = 0;
    if (**(int **)(param_1 + 0x18) == 0) {
      FUN_143b14570(param_1,*(int *)(param_1 + 0x10) + -1,local_18);
      cVar1 = FUN_143a8b0e0(local_18[0]);
      if (cVar1 != '\0') {
        return param_1;
      }
      _guard_xfg_dispatch_icall_nop
                (*(void **)(param_1 + 0x28),(void *)(*(longlong *)(param_1 + 0x18) + 4),
                 (longlong)(*(int *)(param_1 + 0x10) + -1) << 2);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    }
    else {
      FUN_143b14570(param_1,*(int *)(param_1 + 0x10) + 1,local_18);
      cVar1 = FUN_143a8b0e0(local_18[0]);
      if (cVar1 != '\0') {
        return param_1;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0x28) + 4),*(void **)(param_1 + 0x18),
                 (longlong)*(int *)(param_1 + 0x10) << 2);
      **(undefined4 **)(param_1 + 0x28) = 0;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    }
    FUN_143b16b90(param_1);
    FUN_143b15590(param_1);
  }
  return param_1;
}



// FUNCTION 143b14230 FUN_143b14230 body=205 status=ok
// SIG undefined FUN_143b14230(void)

longlong FUN_143b14230(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int local_18;
  
  cVar1 = FUN_143b14e80(param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_143b14df0(param_1), cVar1 == '\0')) {
    FUN_143b146a0(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x10),0);
    for (local_18 = 0;
        iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(*(undefined8 *)(param_2 + 0x40)), local_18 < iVar2;
        local_18 = local_18 + 1) {
      uVar3 = FUN_143b09610(*(undefined8 *)(param_2 + 0x40),local_18);
      cVar1 = FUN_143b09b90(*(undefined8 *)(param_1 + 0x40),uVar3);
      if (cVar1 == '\0') {
        FUN_143b12710(param_1,uVar3);
      }
    }
  }
  return param_1;
}



// FUNCTION 143b14300 FUN_143b14300 body=131 status=ok
// SIG undefined FUN_143b14300(void)

ulonglong FUN_143b14300(ulonglong param_1,int param_2)

{
  uint uVar1;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    if (*(longlong *)(param_1 + 0x48) == 0) {
      if (param_2 < 0x110000) {
        uVar1 = FUN_143b148e0(param_1,param_2);
        param_1 = (ulonglong)(uVar1 & 1);
      }
      else {
        param_1 = param_1 & 0xffffffffffffff00;
      }
    }
    else {
      param_1 = FUN_143b143f0(*(undefined8 *)(param_1 + 0x48),param_2);
    }
  }
  else {
    param_1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 8))
                        (*(undefined8 *)(param_1 + 0x20),param_2);
  }
  return param_1;
}



// FUNCTION 143b14390 FUN_143b14390 body=92 status=ok
// SIG undefined FUN_143b14390(void)

undefined1 FUN_143b14390(longlong param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined1 local_18;
  
  uVar1 = FUN_143b148e0(param_1,param_2);
  if (((uVar1 & 1) == 0) ||
     (*(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)uVar1 * 4) <= param_3)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143b143f0 FUN_143b143f0 body=51 status=ok
// SIG undefined FUN_143b143f0(void)

void FUN_143b143f0(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x30))(param_1,param_2);
  return;
}



// FUNCTION 143b14430 FUN_143b14430 body=220 status=ok
// SIG undefined FUN_143b14430(void)

undefined8 FUN_143b14430(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int local_28;
  
  iVar2 = (**(code **)(*param_2 + 0xc0))(param_2);
  local_28 = 0;
  while( true ) {
    if (iVar2 <= local_28) {
      cVar1 = FUN_143b095a0(param_1[8],param_2[8]);
      if (cVar1 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = CONCAT71((uint7)(uint3)(cVar1 >> 7),1);
      }
      return uVar5;
    }
    uVar3 = (**(code **)(*param_2 + 0xd0))(param_2,local_28);
    uVar4 = (**(code **)(*param_2 + 200))(param_2,local_28);
    cVar1 = (**(code **)(*param_1 + 0x58))(param_1,uVar4,uVar3);
    if (cVar1 == '\0') break;
    local_28 = local_28 + 1;
  }
  return 0;
}



// FUNCTION 143b14510 FUN_143b14510 body=92 status=ok
// SIG undefined FUN_143b14510(void)

undefined1 FUN_143b14510(longlong param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined1 local_18;
  
  uVar1 = FUN_143b148e0(param_1,param_2);
  if (((uVar1 & 1) == 0) &&
     (param_3 < *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)uVar1 * 4))) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143b14570 FUN_143b14570 body=146 status=ok
// SIG undefined FUN_143b14570(void)

void FUN_143b14570(longlong param_1,int param_2,undefined4 *param_3)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x28) == 0) || (*(int *)(param_1 + 0x30) < param_2)) {
    lVar1 = FUN_143aa7aa0(*(undefined8 *)(param_1 + 0x28),(longlong)(param_2 + 0x10) << 2);
    if (lVar1 == 0) {
      *param_3 = 7;
      FUN_143b15ec0(param_1);
    }
    else {
      *(longlong *)(param_1 + 0x28) = lVar1;
      *(int *)(param_1 + 0x30) = param_2 + 0x10;
    }
  }
  return;
}



// FUNCTION 143b14610 FUN_143b14610 body=134 status=ok
// SIG undefined FUN_143b14610(void)

void FUN_143b14610(longlong param_1,int param_2,undefined4 *param_3)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x14) < param_2) {
    lVar1 = FUN_143aa7aa0(*(undefined8 *)(param_1 + 0x18),(longlong)(param_2 + 0x10) << 2);
    if (lVar1 == 0) {
      *param_3 = 7;
      FUN_143b15ec0(param_1);
    }
    else {
      *(longlong *)(param_1 + 0x18) = lVar1;
      *(int *)(param_1 + 0x14) = param_2 + 0x10;
    }
  }
  return;
}



// FUNCTION 143b146a0 FUN_143b146a0 body=568 status=ok
// SIG undefined FUN_143b146a0(void)

void FUN_143b146a0(longlong param_1,int *param_2,int param_3,char param_4)

{
  char cVar1;
  longlong lVar2;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14 [5];
  
  cVar1 = FUN_143b14e80(param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_143b14df0(param_1), cVar1 == '\0')) {
    local_14[0] = 0;
    FUN_143b14570(param_1,*(int *)(param_1 + 0x10) + param_3,local_14);
    cVar1 = FUN_143a8b0e0(local_14[0]);
    if (cVar1 == '\0') {
      local_24 = 0;
      local_18 = **(int **)(param_1 + 0x18);
      local_20 = 1;
      if ((param_4 == '\x01') || (param_4 == '\x02')) {
        local_1c = 0;
        if (*param_2 == 0) {
          local_1c = param_2[1];
        }
        local_28 = (uint)(*param_2 == 0);
        local_20 = 1;
      }
      else {
        local_1c = *param_2;
        local_28 = 1;
      }
      while( true ) {
        while( true ) {
          while (local_18 < local_1c) {
            *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)local_24 * 4) = local_18;
            local_24 = local_24 + 1;
            lVar2 = (longlong)local_20;
            local_20 = local_20 + 1;
            local_18 = *(int *)(*(longlong *)(param_1 + 0x18) + lVar2 * 4);
          }
          if (local_18 <= local_1c) break;
          *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)local_24 * 4) = local_1c;
          local_24 = local_24 + 1;
          local_1c = param_2[(int)local_28];
          local_28 = local_28 + 1;
        }
        if (local_18 == 0x110000) break;
        local_18 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)local_20 * 4);
        local_20 = local_20 + 1;
        local_1c = param_2[(int)local_28];
        local_28 = local_28 + 1;
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)local_24 * 4) = 0x110000;
      *(int *)(param_1 + 0x10) = local_24 + 1;
      FUN_143b16b90(param_1);
      FUN_143b15590(param_1);
    }
  }
  return;
}



// FUNCTION 143b148e0 FUN_143b148e0 body=186 status=ok
// SIG undefined FUN_143b148e0(void)

int FUN_143b148e0(longlong param_1,int param_2)

{
  int iVar1;
  int local_18;
  int local_10;
  
  if (param_2 < **(int **)(param_1 + 0x18)) {
    local_18 = 0;
  }
  else {
    local_10 = 0;
    local_18 = *(int *)(param_1 + 0x10) + -1;
    if ((0 < local_18) &&
       (iVar1 = local_10,
       param_2 < *(int *)(*(longlong *)(param_1 + 0x18) +
                         (longlong)(*(int *)(param_1 + 0x10) + -2) * 4))) {
      while (local_10 = iVar1, iVar1 = local_10 + local_18 >> 1, iVar1 != local_10) {
        if (param_2 < *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 4)) {
          local_18 = iVar1;
          iVar1 = local_10;
        }
      }
    }
  }
  return local_18;
}



// FUNCTION 143b149a0 FUN_143b149a0 body=709 status=ok
// SIG undefined FUN_143b149a0(void)

longlong FUN_143b149a0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint local_68;
  undefined8 local_60;
  undefined8 local_48;
  
  cVar1 = FUN_143b14e80(param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_143b14df0(param_1), cVar1 == '\0')) {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_143aa79f0(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    if (*(int *)(param_1 + 0x10) + 0x10 < *(int *)(param_1 + 0x14)) {
      local_68 = (uint)(*(int *)(param_1 + 0x10) == 0);
      *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + local_68;
      uVar2 = FUN_143aa7aa0(*(undefined8 *)(param_1 + 0x18),(longlong)*(int *)(param_1 + 0x14) << 2)
      ;
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      if (*(longlong *)(param_1 + 0x18) == 0) {
        FUN_143b15ec0(param_1);
        return param_1;
      }
    }
    cVar1 = FUN_143b14e10(*(undefined8 *)(param_1 + 0x40));
    if (cVar1 == '\0') {
      lVar3 = FUN_143a8d310(0x110);
      if (lVar3 == 0) {
        local_48 = 0;
      }
      else {
        local_48 = FUN_143b2a890(lVar3,param_1,*(undefined8 *)(param_1 + 0x40),0x3f);
      }
      *(undefined8 *)(param_1 + 0x48) = local_48;
      if ((*(longlong *)(param_1 + 0x48) != 0) &&
         (cVar1 = FUN_143b154f0(*(undefined8 *)(param_1 + 0x48)), cVar1 == '\0')) {
        if (*(longlong *)(param_1 + 0x48) != 0) {
          FUN_143b126d0(*(longlong *)(param_1 + 0x48),1);
        }
        *(undefined8 *)(param_1 + 0x48) = 0;
      }
    }
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar3 = FUN_143a8d310(800);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        local_60 = FUN_143b288b0(lVar3,*(undefined8 *)(param_1 + 0x18),
                                 *(undefined4 *)(param_1 + 0x10));
      }
      *(undefined8 *)(param_1 + 0x20) = local_60;
      if (*(longlong *)(param_1 + 0x20) == 0) {
        FUN_143b15ec0(param_1);
      }
    }
  }
  return param_1;
}



// FUNCTION 143b14c70 FUN_143b14c70 body=19 status=ok
// SIG undefined FUN_143b14c70(void)

void FUN_143b14c70(void)

{
  FUN_143b14d70();
  return;
}



// FUNCTION 143b14c90 FUN_143b14c90 body=19 status=ok
// SIG undefined FUN_143b14c90(void)

int FUN_143b14c90(longlong param_1)

{
  return *(int *)(param_1 + 0x10) / 2;
}



// FUNCTION 143b14cb0 FUN_143b14cb0 body=34 status=ok
// SIG undefined FUN_143b14cb0(void)

int FUN_143b14cb0(longlong param_1,int param_2)

{
  return *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(param_2 * 2 + 1) * 4) + -1;
}



// FUNCTION 143b14ce0 FUN_143b14ce0 body=30 status=ok
// SIG undefined FUN_143b14ce0(void)

undefined4 FUN_143b14ce0(longlong param_1,int param_2)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)(param_2 << 1) * 4);
}



// FUNCTION 143b14d00 FUN_143b14d00 body=105 status=ok
// SIG undefined FUN_143b14d00(void)

uint FUN_143b14d00(undefined8 param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_143a904f0(param_1);
  if (iVar2 < 3) {
    iVar2 = FUN_143a904f0(param_1);
    if (iVar2 == 1) {
      uVar1 = FUN_143a8e4f0(param_1,0);
      uVar3 = (uint)uVar1;
    }
    else {
      uVar3 = FUN_143a8e3e0(param_1,0);
      if ((int)uVar3 < 0x10000) {
        uVar3 = 0xffffffff;
      }
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 143b14d70 FUN_143b14d70 body=8 status=ok
// SIG undefined FUN_143b14d70(void)

undefined * FUN_143b14d70(void)

{
  return &DAT_146bc7c63;
}



// FUNCTION 143b14d80 FUN_143b14d80 body=101 status=ok
// SIG undefined FUN_143b14d80(void)

int FUN_143b14d80(longlong param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = *(int *)(param_1 + 0x10);
  for (local_14 = 0; local_14 < *(int *)(param_1 + 0x10); local_14 = local_14 + 1) {
    local_18 = local_18 * 0xf4243 + *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)local_14 * 4)
    ;
  }
  return local_18;
}



// FUNCTION 143b14df0 FUN_143b14df0 body=18 status=ok
// SIG undefined FUN_143b14df0(void)

byte FUN_143b14df0(longlong param_1)

{
  return *(byte *)(param_1 + 0x50) & 1;
}



// FUNCTION 143b14e10 FUN_143b14e10 body=39 status=ok
// SIG undefined FUN_143b14e10(void)

bool FUN_143b14e10(longlong param_1)

{
  return *(int *)(param_1 + 8) == 0;
}



// FUNCTION 143b14e40 FUN_143b14e40 body=60 status=ok
// SIG undefined FUN_143b14e40(void)

undefined1 FUN_143b14e40(longlong param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x10) == 1) &&
     (iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(*(undefined8 *)(param_1 + 0x40)), iVar1 == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143b14e80 FUN_143b14e80 body=52 status=ok
// SIG undefined FUN_143b14e80(void)

undefined1 FUN_143b14e80(longlong param_1)

{
  undefined1 local_18;
  
  if ((*(longlong *)(param_1 + 0x20) == 0) && (*(longlong *)(param_1 + 0x48) == 0)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143b14ec0 FUN_143b14ec0 body=340 status=ok
// SIG undefined FUN_143b14ec0(void)

int FUN_143b14ec0(undefined8 param_1,int param_2,int param_3,undefined8 param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int local_28;
  int local_24;
  
  iVar3 = FUN_143a904f0(param_4);
  if (param_2 < param_3) {
    local_24 = param_3 - param_2;
    if (iVar3 < param_3 - param_2) {
      local_24 = iVar3;
    }
    for (local_28 = 1; local_28 < local_24; local_28 = local_28 + 1) {
      sVar1 = FUN_143a93e20(param_1,param_2 + local_28);
      sVar2 = FUN_143a8e4f0(param_4,local_28);
      if (sVar1 != sVar2) {
        return 0;
      }
    }
  }
  else {
    local_24 = param_2 - param_3;
    if (iVar3 < param_2 - param_3) {
      local_24 = iVar3;
    }
    for (local_28 = 1; local_28 < local_24; local_28 = local_28 + 1) {
      sVar1 = FUN_143a93e20(param_1,param_2 - local_28);
      sVar2 = FUN_143a8e4f0(param_4,(iVar3 + -1) - local_28);
      if (sVar1 != sVar2) {
        return 0;
      }
    }
  }
  return local_24;
}



// FUNCTION 143b15020 FUN_143b15020 body=744 status=ok
// SIG undefined FUN_143b15020(void)

ulonglong FUN_143b15020(longlong param_1,undefined8 param_2,int *param_3,int param_4,char param_5)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int local_44;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  
  if (*param_3 == param_4) {
    cVar2 = (**(code **)(*(longlong *)(param_1 + -8) + 0x30))(param_1 + -8,0xffff);
    if (cVar2 == '\0') {
      uVar8 = 0;
    }
    else {
      if (param_5 == '\0') {
        local_2c = 2;
      }
      else {
        local_2c = 1;
      }
      uVar8 = (ulonglong)local_2c;
    }
  }
  else {
    iVar5 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(param_1 + 0x38));
    if (iVar5 != 0) {
      bVar1 = *param_3 < param_4;
      uVar3 = FUN_143a93e20(param_2,*param_3);
      local_44 = 0;
      for (local_34 = 0;
          iVar5 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(*(undefined8 *)(param_1 + 0x38)), local_34 < iVar5;
          local_34 = local_34 + 1) {
        uVar7 = FUN_143b09610(*(undefined8 *)(param_1 + 0x38),local_34);
        if (bVar1) {
          local_28 = 0;
        }
        else {
          local_28 = FUN_143a904f0(uVar7);
          local_28 = local_28 + -1;
        }
        uVar4 = FUN_143a8e4f0(uVar7,local_28);
        if ((bVar1) && (uVar3 < uVar4)) break;
        if (uVar4 == uVar3) {
          iVar5 = FUN_143b14ec0(param_2,*param_3,param_4,uVar7);
          if (param_5 != '\0') {
            if (bVar1) {
              local_24 = param_4 - *param_3;
            }
            else {
              local_24 = *param_3 - param_4;
            }
            if (iVar5 == local_24) {
              return 1;
            }
          }
          iVar6 = FUN_143a904f0(uVar7);
          if (iVar5 == iVar6) {
            if (local_44 < iVar5) {
              local_44 = iVar5;
            }
            if ((bVar1) && (iVar5 < local_44)) break;
          }
        }
      }
      if (local_44 != 0) {
        if (bVar1) {
          local_30 = local_44;
        }
        else {
          local_30 = -local_44;
        }
        *param_3 = *param_3 + local_30;
        return 2;
      }
    }
    uVar8 = FUN_143b28040(param_1,param_2,param_3,param_4,param_5);
  }
  return uVar8;
}



// FUNCTION 143b15310 FUN_143b15310 body=424 status=ok
// SIG undefined FUN_143b15310(void)

ulonglong FUN_143b15310(longlong param_1,byte param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  int local_48;
  
  iVar2 = (**(code **)(*(longlong *)(param_1 + -8) + 0xc0))(param_1 + -8);
  local_48 = 0;
  do {
    if (iVar2 <= local_48) {
      uVar5 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(*(undefined8 *)(param_1 + 0x38));
      if ((int)uVar5 != 0) {
        for (local_48 = 0;
            uVar5 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                    ::GetIndex(*(undefined8 *)(param_1 + 0x38)), local_48 < (int)uVar5;
            local_48 = local_48 + 1) {
          uVar6 = FUN_143b09610(*(undefined8 *)(param_1 + 0x38),local_48);
          bVar1 = FUN_143a8e3e0(uVar6,0);
          if (bVar1 == param_2) {
            return 1;
          }
        }
      }
      return uVar5 & 0xffffffffffffff00;
    }
    uVar3 = (**(code **)(*(longlong *)(param_1 + -8) + 200))(param_1 + -8,local_48);
    uVar4 = (**(code **)(*(longlong *)(param_1 + -8) + 0xd0))(param_1 + -8,local_48);
    if ((uVar3 & 0xffffff00) == (uVar4 & 0xffffff00)) {
      if (((uVar3 & 0xff) <= (uint)param_2) && ((uint)param_2 <= (uVar4 & 0xff))) {
        return 1;
      }
    }
    else if (((uVar3 & 0xff) <= (uint)param_2) || ((uint)param_2 <= (uVar4 & 0xff))) {
      return 1;
    }
    local_48 = local_48 + 1;
  } while( true );
}



// FUNCTION 143b154c0 FUN_143b154c0 body=46 status=ok
// SIG undefined FUN_143b154c0(void)

int FUN_143b154c0(int param_1,int param_2)

{
  int local_18;
  
  local_18 = param_2;
  if (param_2 < param_1) {
    local_18 = param_1;
  }
  return local_18;
}



// FUNCTION 143b154f0 FUN_143b154f0 body=42 status=ok
// SIG undefined FUN_143b154f0(void)

bool FUN_143b154f0(longlong param_1)

{
  return *(int *)(param_1 + 0x84) != 0;
}



// FUNCTION 143b15520 FUN_143b15520 body=42 status=ok
// SIG undefined FUN_143b15520(void)

bool FUN_143b15520(longlong param_1)

{
  return *(int *)(param_1 + 0x88) != 0;
}



// FUNCTION 143b15550 FUN_143b15550 body=60 status=ok
// SIG undefined FUN_143b15550(void)

int FUN_143b15550(int *param_1)

{
  if (*param_1 < 0) {
    *param_1 = 0;
  }
  else if (0x10ffff < *param_1) {
    *param_1 = 0x10ffff;
  }
  return *param_1;
}



// FUNCTION 143b15590 FUN_143b15590 body=65 status=ok
// SIG undefined FUN_143b15590(void)

void FUN_143b15590(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_143aa79f0(*(undefined8 *)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}



// FUNCTION 143b155e0 FUN_143b155e0 body=46 status=ok
// SIG undefined FUN_143b155e0(void)

void FUN_143b155e0(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x98))(param_1,param_2,param_2);
  return;
}



// FUNCTION 143b15610 FUN_143b15610 body=138 status=ok
// SIG undefined FUN_143b15610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b15610(undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 local_res10 [2];
  int local_res18 [4];
  undefined1 auStack_48 [32];
  int local_28;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  local_28 = FUN_143b15550(local_res10);
  iVar1 = FUN_143b15550(local_res18);
  if (local_28 <= iVar1) {
    local_20 = local_res10[0];
    local_1c = local_res18[0] + 1;
    local_18 = 0x110000;
    FUN_143b15750(param_1,&local_20,2,2);
  }
  return param_1;
}



// FUNCTION 143b156a0 FUN_143b156a0 body=119 status=ok
// SIG undefined FUN_143b156a0(void)

longlong FUN_143b156a0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_143b14e80(param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_143b14df0(param_1), cVar1 == '\0')) {
    FUN_143b15750(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x10),2);
    FUN_143b09a80(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x40));
  }
  return param_1;
}



// FUNCTION 143b15720 FUN_143b15720 body=33 status=ok
// SIG undefined FUN_143b15720(void)

longlong FUN_143b15720(longlong param_1)

{
  FUN_143b09b10(*(undefined8 *)(param_1 + 0x40));
  return param_1;
}



// FUNCTION 143b15750 FUN_143b15750 body=1358 status=ok
// SIG undefined FUN_143b15750(void)

void FUN_143b15750(longlong param_1,int *param_2,int param_3,char param_4)

{
  char cVar1;
  char local_res20;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_10 [4];
  
  cVar1 = FUN_143b14e80(param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_143b14df0(param_1), cVar1 == '\0')) {
    local_10[0] = 0;
    FUN_143b14570(param_1,*(int *)(param_1 + 0x10) + param_3,local_10);
    cVar1 = FUN_143a8b0e0(local_10[0]);
    if (cVar1 == '\0') {
      local_1c = 0;
      local_20 = **(int **)(param_1 + 0x18);
      local_28 = 1;
      local_18 = *param_2;
      local_24 = 1;
      local_res20 = param_4;
      do {
        do {
          while( true ) {
            while( true ) {
              while (local_res20 == '\0') {
                if (local_20 < local_18) {
                  local_20 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)local_28 * 4);
                  local_28 = local_28 + 1;
                  local_res20 = '\x01';
                }
                else if (local_18 < local_20) {
                  local_18 = param_2[local_24];
                  local_24 = local_24 + 1;
                  local_res20 = '\x02';
                }
                else {
                  if (local_20 == 0x110000) goto LAB_143b15c6b;
                  *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)local_1c * 4) = local_20;
                  local_1c = local_1c + 1;
                  local_20 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)local_28 * 4);
                  local_28 = local_28 + 1;
                  local_18 = param_2[local_24];
                  local_24 = local_24 + 1;
                  local_res20 = '\x03';
                }
              }
              if (local_res20 != '\x01') break;
              if (local_20 < local_18) {
                local_20 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)local_28 * 4);
                local_28 = local_28 + 1;
                local_res20 = '\0';
              }
              else if (local_18 < local_20) {
                *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)local_1c * 4) = local_18;
                local_1c = local_1c + 1;
                local_18 = param_2[local_24];
                local_24 = local_24 + 1;
                local_res20 = '\x03';
              }
              else {
                if (local_20 == 0x110000) goto LAB_143b15c6b;
                local_20 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)local_28 * 4);
                local_28 = local_28 + 1;
                local_18 = param_2[local_24];
                local_24 = local_24 + 1;
                local_res20 = '\x02';
              }
            }
            if (local_res20 != '\x02') break;
            if (local_18 < local_20) {
              local_18 = param_2[local_24];
              local_24 = local_24 + 1;
              local_res20 = '\0';
            }
            else if (local_20 < local_18) {
              *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)local_1c * 4) = local_20;
              local_1c = local_1c + 1;
              local_20 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)local_28 * 4);
              local_28 = local_28 + 1;
              local_res20 = '\x03';
            }
            else {
              if (local_20 == 0x110000) goto LAB_143b15c6b;
              local_20 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)local_28 * 4);
              local_28 = local_28 + 1;
              local_18 = param_2[local_24];
              local_24 = local_24 + 1;
              local_res20 = '\x01';
            }
          }
        } while (local_res20 != '\x03');
        if (local_20 < local_18) {
          *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)local_1c * 4) = local_20;
          local_20 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)local_28 * 4);
          local_28 = local_28 + 1;
          local_res20 = '\x02';
        }
        else if (local_18 < local_20) {
          *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)local_1c * 4) = local_18;
          local_18 = param_2[local_24];
          local_24 = local_24 + 1;
          local_res20 = '\x01';
        }
        else {
          if (local_20 == 0x110000) {
LAB_143b15c6b:
            *(undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)local_1c * 4) = 0x110000;
            *(int *)(param_1 + 0x10) = local_1c + 1;
            FUN_143b16b90(param_1);
            FUN_143b15590(param_1);
            return;
          }
          *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)local_1c * 4) = local_20;
          local_20 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)local_28 * 4);
          local_28 = local_28 + 1;
          local_18 = param_2[local_24];
          local_24 = local_24 + 1;
          local_res20 = '\0';
        }
        local_1c = local_1c + 1;
      } while( true );
    }
  }
  return;
}



// FUNCTION 143b15cb0 FUN_143b15cb0 body=159 status=ok
// SIG undefined FUN_143b15cb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_143b15cb0(longlong *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 local_res10 [2];
  int local_res18 [4];
  undefined1 auStack_48 [32];
  int local_28;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  local_28 = FUN_143b15550(local_res10);
  iVar1 = FUN_143b15550(local_res18);
  if (iVar1 < local_28) {
    (**(code **)(*param_1 + 0xb0))(param_1);
  }
  else {
    local_20 = local_res10[0];
    local_1c = local_res18[0] + 1;
    local_18 = 0x110000;
    FUN_143b15750(param_1,&local_20,2,0);
  }
  return param_1;
}



// FUNCTION 143b15d50 FUN_143b15d50 body=119 status=ok
// SIG undefined FUN_143b15d50(void)

longlong FUN_143b15d50(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_143b14e80(param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_143b14df0(param_1), cVar1 == '\0')) {
    FUN_143b15750(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x10),0);
    FUN_143b09c30(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x40));
  }
  return param_1;
}



// FUNCTION 143b15dd0 FUN_143b15dd0 body=75 status=ok
// SIG undefined FUN_143b15dd0(void)

longlong * FUN_143b15dd0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0xb0))(param_1);
  (**(code **)(*param_1 + 0xa0))(param_1,param_2,param_3);
  return param_1;
}



// FUNCTION 143b15e20 FUN_143b15e20 body=157 status=ok
// SIG undefined FUN_143b15e20(void)

void FUN_143b15e20(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_143b15590(param_1);
  iVar1 = FUN_143a904f0(param_2);
  uVar2 = FUN_143aa7a40((longlong)(iVar1 + 1) << 1);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    *(int *)(param_1 + 0x34) = iVar1;
    FUN_143a8fa00(param_2,0,*(undefined4 *)(param_1 + 0x34),*(undefined8 *)(param_1 + 0x38),0);
    *(undefined2 *)(*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(param_1 + 0x34) * 2) = 0;
  }
  return;
}



// FUNCTION 143b15ec0 FUN_143b15ec0 body=42 status=ok
// SIG undefined FUN_143b15ec0(void)

void FUN_143b15ec0(longlong *param_1)

{
  (**(code **)(*param_1 + 0xb0))(param_1);
  *(undefined1 *)(param_1 + 10) = 1;
  return;
}



// FUNCTION 143b15ef0 FUN_143b15ef0 body=180 status=ok
// SIG undefined FUN_143b15ef0(void)

int FUN_143b15ef0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_28;
  int local_24;
  
  local_24 = 0;
  iVar1 = (**(code **)(*param_1 + 0xc0))(param_1);
  for (local_28 = 0; local_28 < iVar1; local_28 = local_28 + 1) {
    iVar2 = (**(code **)(*param_1 + 0xd0))(param_1,local_28);
    iVar3 = (**(code **)(*param_1 + 200))(param_1,local_28);
    local_24 = local_24 + 1 + (iVar2 - iVar3);
  }
  iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_1[8]);
  return local_24 + iVar1;
}



// FUNCTION 143b15fb0 FUN_143b15fb0 body=705 status=ok
// SIG undefined FUN_143b15fb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143b15fb0(longlong *param_1,longlong param_2,uint param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint local_res18;
  int local_res20;
  undefined1 auStack_178 [32];
  uint local_158;
  ushort local_154;
  uint local_150;
  uint local_14c;
  undefined4 local_148;
  uint local_144;
  undefined4 local_140;
  undefined8 local_138;
  undefined1 local_128 [272];
  ulonglong local_18;
  
  local_138 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  if (((int)param_3 < 1) || (param_1[4] == 0)) {
    local_res18 = param_3;
    if ((int)param_3 < 0) {
      local_res18 = FreeLib(param_2);
    }
    if (local_res18 == 0) {
      uVar3 = 0;
    }
    else if (param_1[9] == 0) {
      cVar1 = FUN_143b14e10(param_1[8]);
      if (cVar1 == '\0') {
        if (param_4 == 0) {
          local_148 = 0x29;
        }
        else {
          local_148 = 0x2a;
        }
        local_140 = local_148;
        FUN_143b2a890(local_128,param_1,param_1[8],local_148);
        cVar1 = FUN_143b154f0(local_128);
        if (cVar1 != '\0') {
          local_144 = FUN_143b2bae0(local_128,param_2,local_res18,param_4);
          FUN_143b2b380(local_128);
          return (ulonglong)local_144;
        }
        FUN_143b2b380(local_128);
      }
      local_res20 = param_4;
      if (param_4 != 0) {
        local_res20 = 1;
      }
      local_14c = 0;
      do {
        local_150 = (uint)*(ushort *)(param_2 + (longlong)(int)local_14c * 2);
        local_158 = local_14c + 1;
        if ((((local_150 & 0xfffffc00) == 0xd800) && (local_158 != local_res18)) &&
           (local_154 = *(ushort *)(param_2 + (longlong)(int)local_158 * 2),
           (local_154 & 0xfc00) == 0xdc00)) {
          local_158 = local_14c + 2;
          local_150 = local_150 * 0x400 + -0x35fdc00 + (uint)local_154;
        }
        cVar1 = (**(code **)(*param_1 + 0x30))(param_1,local_150);
        if (local_res20 != cVar1) break;
        local_14c = local_158;
      } while ((int)local_158 < (int)local_res18);
      uVar3 = (ulonglong)local_14c;
    }
    else {
      uVar3 = FUN_143b2bae0(param_1[9],param_2,local_res18,param_4);
    }
  }
  else {
    lVar2 = FUN_143b29420(param_1[4],param_2,param_2 + (longlong)(int)param_3 * 2,param_4);
    uVar3 = lVar2 - param_2 >> 1;
  }
  return uVar3;
}



// FUNCTION 143b16280 FUN_143b16280 body=715 status=ok
// SIG undefined FUN_143b16280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143b16280(longlong *param_1,longlong param_2,uint param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint local_res18;
  int local_res20;
  undefined1 auStack_168 [32];
  ushort local_148;
  uint local_144;
  uint local_140;
  undefined4 local_13c;
  uint local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined1 local_128 [272];
  ulonglong local_18;
  
  local_130 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if (((int)param_3 < 1) || (param_1[4] == 0)) {
    local_res18 = param_3;
    if ((int)param_3 < 0) {
      local_res18 = FreeLib(param_2);
    }
    if (local_res18 == 0) {
      uVar4 = 0;
    }
    else if (param_1[9] == 0) {
      cVar1 = FUN_143b14e10(param_1[8]);
      if (cVar1 == '\0') {
        if (param_4 == 0) {
          local_13c = 0x19;
        }
        else {
          local_13c = 0x1a;
        }
        local_134 = local_13c;
        FUN_143b2a890(local_128,param_1,param_1[8],local_13c);
        cVar1 = FUN_143b154f0(local_128);
        if (cVar1 != '\0') {
          local_138 = FUN_143b2c180(local_128,param_2,local_res18,param_4);
          FUN_143b2b380(local_128);
          return (ulonglong)local_138;
        }
        FUN_143b2b380(local_128);
      }
      local_res20 = param_4;
      if (param_4 != 0) {
        local_res20 = 1;
      }
      do {
        local_140 = local_res18;
        uVar2 = local_res18 - 1;
        local_144 = (uint)*(ushort *)(param_2 + (longlong)(int)uVar2 * 2);
        if ((((local_144 & 0xfffffc00) == 0xdc00) && (0 < (int)uVar2)) &&
           (local_148 = *(ushort *)(param_2 + (longlong)(int)(local_res18 - 2) * 2),
           (local_148 & 0xfc00) == 0xd800)) {
          local_144 = (uint)local_148 * 0x400 + -0x35fdc00 + local_144;
          uVar2 = local_res18 - 2;
        }
        local_res18 = uVar2;
        cVar1 = (**(code **)(*param_1 + 0x30))(param_1,local_144);
      } while ((local_res20 == cVar1) && (local_140 = local_res18, 0 < (int)local_res18));
      uVar4 = (ulonglong)local_140;
    }
    else {
      uVar4 = FUN_143b2c180(param_1[9],param_2,local_res18,param_4);
    }
  }
  else {
    lVar3 = FUN_143b298d0(param_1[4],param_2,param_2 + (longlong)(int)param_3 * 2,param_4);
    uVar4 = lVar3 - param_2 >> 1;
  }
  return uVar4;
}



// FUNCTION 143b16550 FUN_143b16550 body=636 status=ok
// SIG undefined FUN_143b16550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143b16550(longlong *param_1,char *param_2,uint param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  size_t sVar4;
  uint local_res18 [2];
  int local_res20;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  uint local_158;
  uint local_154;
  undefined4 local_150;
  undefined4 local_14c;
  uint local_148;
  char *local_140;
  undefined8 local_138;
  undefined1 local_128 [272];
  ulonglong local_18;
  
  local_138 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_res18[0] = param_3;
  local_res20 = param_4;
  if (((int)param_3 < 1) || (param_1[4] == 0)) {
    if ((int)param_3 < 0) {
      sVar4 = _guard_xfg_dispatch_icall_nop(param_2);
      local_res18[0] = (uint)sVar4;
    }
    if (local_res18[0] == 0) {
      uVar3 = 0;
    }
    else if (param_1[9] == 0) {
      cVar1 = FUN_143b14e10(param_1[8]);
      if (cVar1 == '\0') {
        if (local_res20 == 0) {
          local_150 = 0x15;
        }
        else {
          local_150 = 0x16;
        }
        local_14c = local_150;
        FUN_143b2a890(local_128,param_1,param_1[8],local_150);
        cVar1 = FUN_143b15520(local_128);
        if (cVar1 != '\0') {
          local_148 = FUN_143b2c800(local_128,param_2,local_res18[0],local_res20);
          FUN_143b2b380(local_128);
          return (ulonglong)local_148;
        }
        FUN_143b2b380(local_128);
      }
      if (local_res20 != 0) {
        local_res20 = 1;
      }
      do {
        uVar2 = local_res18[0] - 1;
        local_158 = (uint)(byte)param_2[(int)uVar2];
        local_154 = local_res18[0];
        if (0x7f < local_158) {
          local_168 = 0xfd;
          local_res18[0] = uVar2;
          local_158 = FUN_143ab9a30(param_2,0,local_res18,local_158);
          uVar2 = local_res18[0];
        }
        local_res18[0] = uVar2;
        cVar1 = (**(code **)(*param_1 + 0x30))(param_1);
      } while ((local_res20 == cVar1) && (local_154 = local_res18[0], 0 < (int)local_res18[0]));
      uVar3 = (ulonglong)local_154;
    }
    else {
      uVar3 = FUN_143b2c800(param_1[9],param_2,local_res18[0],local_res20);
    }
  }
  else {
    local_140 = param_2;
    uVar3 = FUN_143b29d70(param_1[4],param_2,param_3,param_4);
  }
  return uVar3;
}



// FUNCTION 143b167e0 FUN_143b167e0 body=924 status=ok
// SIG undefined FUN_143b167e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143b167e0(longlong *param_1,char *param_2,uint param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  size_t sVar4;
  uint local_res18;
  int local_res20;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  byte local_158;
  uint local_154;
  uint local_150;
  byte local_14c;
  uint local_148;
  undefined4 local_144;
  undefined4 local_140;
  uint local_13c;
  char *local_138;
  undefined8 local_130;
  undefined1 local_128 [272];
  ulonglong local_18;
  
  local_130 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  if (((int)param_3 < 1) || (param_1[4] == 0)) {
    local_res18 = param_3;
    if ((int)param_3 < 0) {
      sVar4 = _guard_xfg_dispatch_icall_nop(param_2);
      local_res18 = (uint)sVar4;
    }
    if (local_res18 == 0) {
      uVar3 = 0;
    }
    else if (param_1[9] == 0) {
      cVar1 = FUN_143b14e10(param_1[8]);
      if (cVar1 == '\0') {
        if (param_4 == 0) {
          local_144 = 0x25;
        }
        else {
          local_144 = 0x26;
        }
        local_140 = local_144;
        FUN_143b2a890(local_128,param_1,param_1[8],local_144);
        cVar1 = FUN_143b15520(local_128);
        if (cVar1 != '\0') {
          local_13c = FUN_143b2dba0(local_128,param_2,local_res18,param_4);
          FUN_143b2b380(local_128);
          return (ulonglong)local_13c;
        }
        FUN_143b2b380(local_128);
      }
      local_res20 = param_4;
      if (param_4 != 0) {
        local_res20 = 1;
      }
      local_148 = 0;
      do {
        local_150 = (uint)(byte)param_2[(int)local_148];
        local_154 = local_148 + 1;
        if (0x7f < local_150) {
          if ((((local_150 < 0xe1) || (0xec < local_150)) ||
              (((int)local_res18 <= (int)(local_148 + 2) && (-1 < (int)local_res18)))) ||
             ((local_158 = param_2[(int)local_154] + 0x80, 0x3f < local_158 ||
              (local_14c = param_2[(int)(local_148 + 2)] + 0x80, 0x3f < local_14c)))) {
            if ((local_150 < 0xe0) &&
               (((0xc1 < local_150 && (local_154 != local_res18)) &&
                (local_158 = param_2[(int)local_154] + 0x80, local_158 < 0x40)))) {
              local_150 = (local_150 & 0x1f) << 6 | (uint)local_158;
              local_154 = local_148 + 2;
            }
            else {
              local_168 = 0xfd;
              local_150 = FUN_143ab96e0(param_2,&local_154,local_res18,local_150);
            }
          }
          else {
            local_150 = (local_150 & 0xf) << 0xc | (uint)local_158 << 6 | (uint)local_14c;
            local_154 = local_148 + 3;
          }
        }
        cVar1 = (**(code **)(*param_1 + 0x30))(param_1,local_150);
        if (local_res20 != cVar1) break;
        local_148 = local_154;
      } while ((int)local_154 < (int)local_res18);
      uVar3 = (ulonglong)local_148;
    }
    else {
      uVar3 = FUN_143b2dba0(param_1[9],param_2,local_res18,param_4);
    }
  }
  else {
    local_138 = param_2;
    lVar2 = FUN_143b2a000(param_1[4],param_2,param_3,param_4);
    uVar3 = lVar2 - (longlong)local_138;
  }
  return uVar3;
}



// FUNCTION 143b16b90 FUN_143b16b90 body=98 status=ok
// SIG undefined FUN_143b16b90(void)

void FUN_143b16b90(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  return;
}



// FUNCTION 143b16c00 FUN_143b16c00 body=64 status=ok
// SIG undefined FUN_143b16c00(void)

void FUN_143b16c00(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  FUN_143a99400(param_2,0);
  FUN_143b12ca0(param_1 + -8,param_2,param_3);
  return;
}



// FUNCTION 143b16c40 FUN_143b16c40 body=160 status=ok
// SIG undefined FUN_143b16c40(void)

void FUN_143b16c40(longlong param_1,code *param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    iVar2 = FUN_143a910d0(param_1);
    if ((iVar2 == 2) || (cVar1 = FUN_143ab2360(param_1), cVar1 == '\0')) {
      cVar1 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 4));
      if (cVar1 != '\0') {
        *param_4 = *(undefined4 *)(param_1 + 4);
      }
    }
    else {
      (*param_2)(param_3,param_4);
      *(undefined4 *)(param_1 + 4) = *param_4;
      FUN_143ab2340(param_1);
    }
  }
  return;
}



// FUNCTION 143b16ce0 FUN_143b16ce0 body=88 status=ok
// SIG undefined FUN_143b16ce0(void)

undefined8 * FUN_143b16ce0(undefined8 *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined8 *)((longlong)puVar2 + 1);
  }
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::ParsePosition::vftable;
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  return param_1;
}



// FUNCTION 143b16d40 FUN_143b16d40 body=325 status=ok
// SIG undefined FUN_143b16d40(void)

undefined8 *
FUN_143b16d40(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  FUN_143b11800(param_1);
  *param_1 = icu_53::UnicodeSet::vftable;
  param_1[1] = icu_53::UnicodeSet::vftable;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x10;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  cVar1 = FUN_143a8b110(*param_3);
  if (cVar1 != '\0') {
    uVar2 = FUN_143aa7a40((longlong)*(int *)((longlong)param_1 + 0x14) << 2);
    param_1[3] = uVar2;
    if (param_1[3] == 0) {
      *param_3 = 7;
    }
    else {
      FUN_143b13af0(param_1,param_3);
      FUN_143b18800(param_1,param_2,param_3,param_4,uVar3);
    }
  }
  return param_1;
}



// FUNCTION 143b16e90 FUN_143b16e90 body=1024 status=ok
// SIG undefined FUN_143b16e90(void)

void FUN_143b16e90(int param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong local_90;
  longlong local_80;
  code *local_78;
  code *local_70;
  code *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  plVar4 = (longlong *)(&DAT_146bc7c80 + (longlong)param_1 * 0x10);
  lVar2 = FUN_143a8d310(0x58);
  if (lVar2 == 0) {
    local_90 = 0;
  }
  else {
    local_90 = FUN_143b11ea0(lVar2);
  }
  local_28 = local_90;
  *plVar4 = local_90;
  if (*plVar4 == 0) {
    *param_2 = 7;
  }
  else {
    local_80 = *plVar4;
    local_78 = FUN_143b1a2a0;
    local_70 = FUN_143b1a2c0;
    local_68 = FUN_143b1a2f0;
    local_60 = 0;
    local_58 = 0;
    FUN_143b14610(*plVar4,0xc00,param_2);
    switch(param_1) {
    case 1:
      FUN_143a9ed90(&local_80,param_2);
      break;
    case 2:
      FUN_143a9f100(&local_80,param_2);
      break;
    default:
      *param_2 = 5;
      break;
    case 4:
      uVar3 = FUN_143a9c510();
      FUN_143a9bcb0(uVar3,&local_80,param_2);
      break;
    case 5:
      uVar3 = FUN_143ad49f0();
      FUN_143ad4060(uVar3,&local_80,param_2);
      break;
    case 6:
      FUN_143a9ed90(&local_80,param_2);
      FUN_143a9f100(&local_80,param_2);
      break;
    case 7:
      local_20 = FUN_143b1f1c0(param_2);
      cVar1 = FUN_143a8b110(*param_2);
      if (cVar1 != '\0') {
        FUN_143b21370(local_20,&local_80,param_2);
      }
      uVar3 = FUN_143a9c510();
      FUN_143a9bcb0(uVar3,&local_80,param_2);
      break;
    case 8:
      local_50 = FUN_143b1f1c0(param_2);
      cVar1 = FUN_143a8b110(*param_2);
      if (cVar1 != '\0') {
        FUN_143b21370(local_50,&local_80,param_2);
      }
      break;
    case 9:
      local_38 = FUN_143b1f320(param_2);
      cVar1 = FUN_143a8b110(*param_2);
      if (cVar1 != '\0') {
        FUN_143b21370(local_38,&local_80,param_2);
      }
      break;
    case 10:
      local_18 = FUN_143b1f3e0(param_2);
      cVar1 = FUN_143a8b110(*param_2);
      if (cVar1 != '\0') {
        FUN_143b21370(local_18,&local_80,param_2);
      }
      break;
    case 0xb:
      local_48 = FUN_143b1f1c0(param_2);
      cVar1 = FUN_143a8b110(*param_2);
      if (cVar1 != '\0') {
        FUN_143b211c0(local_48,&local_80,param_2);
      }
    }
    cVar1 = FUN_143a8b0e0(*param_2);
    if (cVar1 == '\0') {
      (**(code **)(*(longlong *)*plVar4 + 0xd8))(*plVar4);
      FUN_143aa77b0(9,FUN_143b1a3a0);
    }
    else {
      local_40 = (undefined8 *)*plVar4;
      if (local_40 != (undefined8 *)0x0) {
        (**(code **)*local_40)(local_40,1);
      }
      *plVar4 = 0;
    }
  }
  return;
}



// FUNCTION 143b172c0 FUN_143b172c0 body=134 status=ok
// SIG undefined FUN_143b172c0(void)

bool FUN_143b172c0(longlong *param_1)

{
  longlong lVar1;
  longlong local_28;
  
  if (*param_1 == 0) {
    lVar1 = FUN_143a8d310(0x58);
    if (lVar1 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_143b11ea0(lVar1);
    }
    *param_1 = local_28;
  }
  return *param_1 != 0;
}



// FUNCTION 143b17350 FUN_143b17350 body=70 status=ok
// SIG undefined FUN_143b17350(void)

void FUN_143b17350(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143a904f0(param_1);
  FUN_143a8f0d0(param_1,uVar1,0,param_2,0,param_3);
  return;
}



// FUNCTION 143b173a0 FUN_143b173a0 body=457 status=ok
// SIG undefined FUN_143b173a0(void)

void FUN_143b173a0(longlong *param_1,code *param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int local_38;
  int local_34;
  int local_30;
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    plVar4 = (longlong *)FUN_143b19d30(param_4,param_5);
    cVar1 = FUN_143a8b0e0(*param_5);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0xb0))(param_1);
      local_38 = -1;
      iVar2 = (**(code **)(*plVar4 + 0xc0))(plVar4);
      for (local_30 = 0; local_30 < iVar2; local_30 = local_30 + 1) {
        local_34 = (**(code **)(*plVar4 + 200))(plVar4,local_30);
        iVar3 = (**(code **)(*plVar4 + 0xd0))(plVar4,local_30);
        for (; local_34 <= iVar3; local_34 = local_34 + 1) {
          cVar1 = (*param_2)(local_34,param_3);
          if (cVar1 == '\0') {
            if (-1 < local_38) {
              (**(code **)(*param_1 + 0x68))(param_1,local_38,local_34 + -1);
              local_38 = -1;
            }
          }
          else if (local_38 < 0) {
            local_38 = local_34;
          }
        }
      }
      if (-1 < local_38) {
        (**(code **)(*param_1 + 0x68))(param_1,local_38,0x10ffff);
      }
      cVar1 = FUN_143b14df0(param_1);
      if ((cVar1 != '\0') && (cVar1 = FUN_143a8b110(*param_5), cVar1 != '\0')) {
        *param_5 = 7;
      }
    }
  }
  return;
}



// FUNCTION 143b17570 FUN_143b17570 body=247 status=ok
// SIG undefined FUN_143b17570(void)

undefined8 FUN_143b17570(undefined8 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_res18 [2];
  undefined4 *local_res20;
  undefined4 local_18 [2];
  int local_10;
  undefined4 local_c;
  
  local_res18[0] = param_3;
  local_res20 = param_4;
  cVar1 = FUN_143a8b0e0(*param_4);
  if ((cVar1 == '\0') && (cVar1 = FUN_143b14e80(param_1), cVar1 == '\0')) {
    if (param_2 == 0x2000) {
      FUN_143b173a0(param_1,FUN_143b19cd0,local_res18,1,local_res20);
    }
    else if (param_2 == 0x7000) {
      local_18[0] = local_res18[0];
      FUN_143b173a0(param_1,FUN_143b1a200,local_18,2,local_res20);
    }
    else {
      local_c = local_res18[0];
      local_10 = param_2;
      uVar2 = FUN_143b10dd0(param_2);
      FUN_143b173a0(param_1,FUN_143b19e20,&local_10,uVar2,local_res20);
    }
  }
  return param_1;
}



// FUNCTION 143b17670 FUN_143b17670 body=4362 status=ok
// SIG undefined FUN_143b17670(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b17670(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  uint param_5,undefined8 *param_6,undefined4 *param_7)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_148 [32];
  uint local_128;
  undefined1 *local_120;
  undefined4 *local_118;
  char local_108;
  char local_107 [3];
  ushort local_104;
  char local_100;
  int local_fc;
  char local_f8;
  int local_f4;
  char local_f0;
  undefined1 local_e8 [8];
  char local_e0;
  undefined4 local_dc;
  char local_d8;
  char local_d7;
  char local_d6;
  longlong local_d0;
  int local_c8;
  uint local_c4;
  char local_c0;
  char local_bc;
  undefined1 local_b8 [16];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined1 local_70 [40];
  undefined1 local_48 [40];
  ulonglong local_20;
  
  local_78 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  cVar1 = FUN_143a8b0e0(*param_7);
  if (cVar1 == '\0') {
    local_dc = 3;
    if ((param_5 & 1) != 0) {
      local_dc = 7;
    }
    FUN_143a8ac30(local_70);
    FUN_143a8ac30(local_48);
    local_f0 = '\0';
    FUN_143acbf40(local_e8);
    local_108 = '\0';
    local_100 = '\0';
    local_f4 = 0;
    local_104 = 0;
    local_d7 = '\0';
    (**(code **)(*param_1 + 0xb0))(param_1);
LAB_143b1774a:
    while( true ) {
      if ((local_100 == '\x02') || (cVar1 = FUN_143b308a0(param_2), cVar1 != '\0'))
      goto LAB_143b185e3;
      local_fc = 0;
      local_107[0] = '\0';
      local_d0 = 0;
      local_f8 = '\0';
      cVar1 = FUN_143b1a0d0(param_2,local_dc);
      if (cVar1 != '\0') break;
      FUN_143b30940(param_2,local_b8);
      local_fc = FUN_143b30a40(param_2,local_dc,local_107,param_7);
      cVar1 = FUN_143a8b0e0(*param_7);
      if (cVar1 != '\0') {
        FUN_143acc260(local_e8);
        FUN_143a8dc60(local_48);
        FUN_143a8dc60(local_70);
        return;
      }
      if ((local_fc != 0x5b) || (local_107[0] != '\0')) {
        if ((param_3 != (longlong *)0x0) &&
           (local_a8 = (**(code **)(*param_3 + 0x10))(param_3,local_fc), local_a8 != 0)) {
          local_128 = 0;
          local_a0 = _guard_xfg_dispatch_icall_nop
                               (local_a8,0,&icu_53::UnicodeFunctor::RTTI_Type_Descriptor,
                                &icu_53::UnicodeSet::RTTI_Type_Descriptor);
          if (local_a0 == 0) {
            *param_7 = 0x10002;
            FUN_143acc260(local_e8);
            FUN_143a8dc60(local_48);
            FUN_143a8dc60(local_70);
            return;
          }
          local_f8 = '\x03';
          local_d0 = local_a0;
        }
        goto LAB_143b17a8a;
      }
      if (local_100 == '\x01') {
        FUN_143b30d60(param_2,local_b8);
        local_f8 = '\x01';
        goto LAB_143b17a8a;
      }
      local_100 = '\x01';
      FUN_143acc590(local_70,0x5b);
      FUN_143b30940(param_2,local_b8);
      local_fc = FUN_143b30a40(param_2,local_dc,local_107,param_7);
      cVar1 = FUN_143a8b0e0(*param_7);
      if (cVar1 != '\0') {
        FUN_143acc260(local_e8);
        FUN_143a8dc60(local_48);
        FUN_143a8dc60(local_70);
        return;
      }
      if ((local_fc == 0x5e) && (local_107[0] == '\0')) {
        local_d7 = '\x01';
        FUN_143acc590(local_70,0x5e);
        FUN_143b30940(param_2,local_b8);
        local_fc = FUN_143b30a40(param_2,local_dc,local_107,param_7);
        cVar1 = FUN_143a8b0e0(*param_7);
        if (cVar1 != '\0') {
          FUN_143acc260(local_e8);
          FUN_143a8dc60(local_48);
          FUN_143a8dc60(local_70);
          return;
        }
      }
      if (local_fc == 0x2d) {
        local_107[0] = '\x01';
        goto LAB_143b17a8a;
      }
      FUN_143b30d60(param_2,local_b8);
    }
    local_f8 = '\x02';
LAB_143b17a8a:
    if (local_f8 == '\0') {
      if (local_100 == '\0') {
        *param_7 = 0x10002;
        FUN_143acc260(local_e8);
        FUN_143a8dc60(local_48);
        FUN_143a8dc60(local_70);
        return;
      }
      if (local_107[0] == '\0') {
        local_c8 = local_fc + -0x24;
        switch(local_c8) {
        case 0:
          FUN_143b30940(param_2,local_b8);
          local_fc = FUN_143b30a40(param_2,local_dc,local_107,param_7);
          cVar1 = FUN_143a8b0e0(*param_7);
          if (cVar1 != '\0') {
            FUN_143acc260(local_e8);
            FUN_143a8dc60(local_48);
            FUN_143a8dc60(local_70);
            return;
          }
          if ((local_fc == 0x5d) && (local_107[0] == '\0')) {
            local_d8 = '\x01';
          }
          else {
            local_d8 = '\0';
          }
          local_e0 = local_d8;
          if ((param_3 != (longlong *)0x0) || (local_d8 != '\0')) {
            if ((local_d8 == '\0') || (local_104 != 0)) {
              *param_7 = 0x10002;
              FUN_143acc260(local_e8);
              FUN_143a8dc60(local_48);
              FUN_143a8dc60(local_70);
              return;
            }
            if (local_108 == '\x01') {
              (**(code **)(*param_1 + 0x68))(param_1,local_f4);
              FUN_143b128e0(local_70,local_f4);
            }
            FUN_143b13590(param_1,0xffff);
            local_f0 = '\x01';
            FUN_143acc590(local_70,0x24);
            FUN_143acc590(local_70,0x5d);
            local_100 = '\x02';
            goto LAB_143b1774a;
          }
          local_fc = 0x24;
          FUN_143b30d60(param_2,local_b8);
          break;
        case 2:
          if ((local_108 != '\x02') || (local_104 != 0)) {
            *param_7 = 0x10002;
            FUN_143acc260(local_e8);
            FUN_143a8dc60(local_48);
            FUN_143a8dc60(local_70);
            return;
          }
          local_104 = (ushort)local_fc;
          goto LAB_143b1774a;
        case 9:
          if (local_104 == 0) {
            if (local_108 != '\0') {
              local_104 = (ushort)local_fc;
              goto LAB_143b1774a;
            }
            (**(code **)(*param_1 + 0x68))(param_1,local_fc,local_fc);
            local_fc = FUN_143b30a40(param_2,local_dc,local_107,param_7);
            cVar1 = FUN_143a8b0e0(*param_7);
            if (cVar1 != '\0') {
              FUN_143acc260(local_e8);
              FUN_143a8dc60(local_48);
              FUN_143a8dc60(local_70);
              return;
            }
            if ((local_fc == 0x5d) && (local_107[0] == '\0')) {
              FUN_143b17350(local_70,&DAT_145d0af90);
              local_100 = '\x02';
              goto LAB_143b1774a;
            }
          }
          *param_7 = 0x10002;
          FUN_143acc260(local_e8);
          FUN_143a8dc60(local_48);
          FUN_143a8dc60(local_70);
          return;
        case 0x39:
          if (local_108 == '\x01') {
            (**(code **)(*param_1 + 0x68))(param_1,local_f4);
            FUN_143b128e0(local_70,local_f4);
          }
          if (local_104 == 0x2d) {
            local_98 = *param_1;
            (**(code **)(local_98 + 0x68))(param_1,0x2d);
            FUN_143acc590(local_70,local_104);
          }
          else if (local_104 == 0x26) {
            *param_7 = 0x10002;
            FUN_143acc260(local_e8);
            FUN_143a8dc60(local_48);
            FUN_143a8dc60(local_70);
            return;
          }
          FUN_143acc590(local_70,0x5d);
          local_100 = '\x02';
          goto LAB_143b1774a;
        case 0x3a:
          *param_7 = 0x10002;
          FUN_143acc260(local_e8);
          FUN_143a8dc60(local_48);
          FUN_143a8dc60(local_70);
          return;
        case 0x57:
          if (local_104 != 0) {
            *param_7 = 0x10002;
            FUN_143acc260(local_e8);
            FUN_143a8dc60(local_48);
            FUN_143a8dc60(local_70);
            return;
          }
          if (local_108 == '\x01') {
            (**(code **)(*param_1 + 0x68))(param_1,local_f4,local_f4);
            FUN_143b128e0(local_70,local_f4,0);
          }
          local_108 = '\0';
          FUN_143a99400(local_48,0);
          local_d6 = '\0';
          while (cVar1 = FUN_143b308a0(param_2), cVar1 == '\0') {
            local_fc = FUN_143b30a40(param_2,local_dc,local_107,param_7);
            cVar1 = FUN_143a8b0e0(*param_7);
            if (cVar1 != '\0') {
              FUN_143acc260(local_e8);
              FUN_143a8dc60(local_48);
              FUN_143a8dc60(local_70);
              return;
            }
            if ((local_fc == 0x7d) && (local_107[0] == '\0')) {
              local_d6 = '\x01';
              break;
            }
            FUN_143a8e0c0(local_48,local_fc);
          }
          iVar2 = FUN_143a904f0(local_48);
          if ((iVar2 < 1) || (local_d6 == '\0')) {
            *param_7 = 0x10002;
            FUN_143acc260(local_e8);
            FUN_143a8dc60(local_48);
            FUN_143a8dc60(local_70);
            return;
          }
          FUN_143b134e0(param_1,local_48);
          FUN_143acc590(local_70,0x7b);
          FUN_143b12850(local_70,local_48,0);
          FUN_143acc590(local_70,0x7d);
          goto LAB_143b1774a;
        }
      }
      local_bc = local_108;
      if (local_108 == '\0') {
        local_108 = '\x01';
        local_f4 = local_fc;
      }
      else if (local_108 == '\x01') {
        if (local_104 == 0x2d) {
          if (local_fc <= local_f4) {
            *param_7 = 0x10002;
            FUN_143acc260(local_e8);
            FUN_143a8dc60(local_48);
            FUN_143a8dc60(local_70);
            return;
          }
          (**(code **)(*param_1 + 0x68))(param_1,local_f4);
          FUN_143b128e0(local_70,local_f4);
          FUN_143acc590(local_70,local_104);
          FUN_143b128e0(local_70,local_fc);
          local_108 = '\0';
          local_104 = 0;
        }
        else {
          (**(code **)(*param_1 + 0x68))(param_1,local_f4);
          FUN_143b128e0(local_70,local_f4);
          local_f4 = local_fc;
        }
      }
      else if (local_108 == '\x02') {
        if (local_104 != 0) {
          *param_7 = 0x10002;
          FUN_143acc260(local_e8);
          FUN_143a8dc60(local_48);
          FUN_143a8dc60(local_70);
          return;
        }
        local_f4 = local_fc;
        local_108 = '\x01';
      }
      goto LAB_143b1774a;
    }
    if (local_108 == '\x01') {
      if (local_104 != 0) {
        *param_7 = 0x10002;
        FUN_143acc260(local_e8);
        FUN_143a8dc60(local_48);
        FUN_143a8dc60(local_70);
        return;
      }
      (**(code **)(*param_1 + 0x68))(param_1,local_f4);
      FUN_143b128e0(local_70,local_f4);
      local_108 = '\0';
      local_104 = 0;
    }
    if ((local_104 == 0x2d) || (local_104 == 0x26)) {
      FUN_143acc590(local_70,local_104);
    }
    if (local_d0 == 0) {
      cVar1 = FUN_143b172c0(local_e8);
      if (cVar1 == '\0') {
        *param_7 = 7;
        FUN_143acc260(local_e8);
        FUN_143a8dc60(local_48);
        FUN_143a8dc60(local_70);
        return;
      }
      local_d0 = FUN_143a8b510(local_e8);
    }
    local_c0 = local_f8;
    if (local_f8 == '\x01') {
      puVar4 = param_6;
      puVar5 = local_88;
      for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined8 *)((longlong)puVar4 + 1);
        puVar5 = puVar5 + 1;
      }
      local_118 = param_7;
      local_120 = local_88;
      local_128 = param_5;
      FUN_143b17670(local_d0,param_2,param_3,local_70);
    }
    else if (local_f8 == '\x02') {
      FUN_143b30db0(param_2,local_dc);
      FUN_143b19a50(local_d0,param_2,local_70,param_7);
      cVar1 = FUN_143a8b0e0(*param_7);
      if (cVar1 != '\0') {
        FUN_143acc260(local_e8);
        FUN_143a8dc60(local_48);
        FUN_143a8dc60(local_70);
        return;
      }
    }
    else if (local_f8 == '\x03') {
      FUN_143b12ca0(local_d0,local_70);
    }
    local_f0 = '\x01';
    if (local_100 != '\0') {
      local_c4 = (uint)local_104;
      if (local_c4 == 0) {
        (**(code **)(*param_1 + 0x70))(param_1,local_d0);
      }
      else if (local_c4 == 0x26) {
        (**(code **)(*param_1 + 0x78))(param_1,local_d0);
      }
      else if (local_c4 == 0x2d) {
        (**(code **)(*param_1 + 0x88))(param_1,local_d0);
      }
      local_104 = 0;
      local_108 = '\x02';
      goto LAB_143b1774a;
    }
    FUN_143b12150(param_1,local_d0);
    local_100 = '\x02';
LAB_143b185e3:
    if (local_100 == '\x02') {
      FUN_143b30db0(param_2,local_dc);
      if ((param_5 & 2) == 0) {
        if ((param_5 & 4) != 0) {
          (*(code *)*param_6)((longlong)param_1 + (longlong)*(int *)(param_6 + 1),4);
        }
      }
      else {
        (*(code *)*param_6)((longlong)param_1 + (longlong)*(int *)(param_6 + 1),2);
      }
      if (local_d7 != '\0') {
        (**(code **)(*param_1 + 0xa8))(param_1);
      }
      if (local_f0 == '\0') {
        FUN_143b12a10(param_1,param_4,0);
      }
      else {
        FUN_143a8e070(param_4,local_70);
      }
      cVar1 = FUN_143b14df0(param_1);
      if ((cVar1 != '\0') && (cVar1 = FUN_143a8b110(*param_7), cVar1 != '\0')) {
        *param_7 = 7;
      }
      FUN_143acc260(local_e8);
      FUN_143a8dc60(local_48);
      FUN_143a8dc60(local_70);
    }
    else {
      *param_7 = 0x10002;
      FUN_143acc260(local_e8);
      FUN_143a8dc60(local_48);
      FUN_143a8dc60(local_70);
    }
  }
  return;
}



// FUNCTION 143b18800 FUN_143b18800 body=218 status=ok
// SIG undefined FUN_143b18800(void)

undefined8 FUN_143b18800(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18 [24];
  
  local_20 = 0xfffffffffffffffe;
  FUN_143b16ce0(local_18,0);
  FUN_143b188e0(param_1,param_2,local_18,0,param_3);
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    local_38[0] = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_18);
    FUN_143b28750(param_2,local_38,1);
    iVar2 = FUN_143a904f0(param_2);
    if (local_38[0] != iVar2) {
      *param_3 = 1;
    }
    local_28 = param_1;
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_18);
    local_30 = local_28;
  }
  else {
    local_30 = param_1;
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_18);
  }
  return local_30;
}



// FUNCTION 143b188e0 FUN_143b188e0 body=419 status=ok
// SIG undefined FUN_143b188e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b188e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined1 *local_b0;
  undefined4 *local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined1 local_70 [40];
  undefined1 local_48 [40];
  ulonglong local_20;
  
  local_78 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    cVar1 = FUN_143b14e80(param_1);
    if (cVar1 == '\0') {
      FUN_143a8ac30(local_48);
      FUN_143b30700(local_70,param_2,param_4,param_3);
      local_98 = 0;
      local_90 = 0;
      puVar3 = &local_98;
      puVar4 = local_88;
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *(undefined1 *)puVar3;
        puVar3 = (undefined8 *)((longlong)puVar3 + 1);
        puVar4 = puVar4 + 1;
      }
      local_a8 = param_5;
      local_b0 = local_88;
      local_b8 = 1;
      FUN_143b17670(param_1,local_70,param_4,local_48);
      cVar1 = FUN_143a8b0e0(*param_5);
      if (cVar1 == '\0') {
        cVar1 = FUN_143b19d90(local_70);
        if (cVar1 == '\0') {
          FUN_143b15e20(param_1,local_48);
          FUN_143a8dc60(local_48);
        }
        else {
          *param_5 = 0x10002;
          FUN_143a8dc60(local_48);
        }
      }
      else {
        FUN_143a8dc60(local_48);
      }
    }
    else {
      *param_5 = 0x1e;
    }
  }
  return;
}



// FUNCTION 143b18a90 FUN_143b18a90 body=2780 status=ok
// SIG undefined FUN_143b18a90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_143b18a90(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 auStack_2a8 [32];
  undefined4 *local_288;
  int local_278;
  int local_274;
  char local_270;
  char local_26f;
  int local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined1 local_260 [4];
  undefined4 local_25c;
  double local_258;
  double local_250;
  longlong *local_248;
  longlong *local_240;
  longlong *local_238;
  longlong *local_230;
  longlong *local_228;
  char *local_220;
  longlong *local_218;
  longlong *local_210;
  longlong *local_208;
  longlong *local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  char *local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  undefined1 local_198 [64];
  undefined1 local_158 [64];
  undefined1 local_118 [128];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_1a8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 != '\0') {
    return param_1;
  }
  cVar1 = FUN_143b14e80(param_1);
  if (cVar1 != '\0') {
    return param_1;
  }
  local_264 = FUN_143a904f0(param_2);
  uVar3 = FUN_143a8fe10(param_2);
  cVar1 = FUN_143ab5890(uVar3,local_264);
  if (cVar1 != '\0') {
    local_25c = FUN_143a904f0(param_3);
    uVar3 = FUN_143a8fe10(param_3);
    cVar1 = FUN_143ab5890(uVar3,local_25c);
    if (cVar1 != '\0') {
      FUN_143aa03f0(local_198);
      FUN_143aa03f0(local_158);
      FUN_143ad0270(local_198,param_2,param_4);
      FUN_143ad0270(local_158,param_3,param_4);
      cVar1 = FUN_143a8b0e0(*param_4);
      if (cVar1 != '\0') {
        local_210 = param_1;
        TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
        ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
        TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
        ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_198);
        return local_210;
      }
      local_270 = '\0';
      local_26f = '\0';
      iVar2 = FUN_143a904f0(param_3);
      if (iVar2 < 1) {
        local_278 = 0x2000;
        uVar3 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_198);
        local_274 = FClearIrradianceSamplesCS::ModifyCompilationEnvironment(local_278,uVar3);
        if (local_274 == -1) {
          local_278 = 0x100a;
          uVar3 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                  ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_198);
          local_274 = FClearIrradianceSamplesCS::ModifyCompilationEnvironment(local_278,uVar3);
          if (local_274 == -1) {
            uVar3 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                    ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_198);
            local_278 = FUN_143b11610(uVar3);
            if ((local_278 < 0) || (0x38 < local_278)) {
              uVar3 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_198);
              iVar2 = FUN_143b11680(&DAT_145d0af98,uVar3);
              if (iVar2 == 0) {
                FUN_143b15dd0(param_1,0,0x10ffff);
                local_208 = param_1;
                TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
                TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_198);
                return local_208;
              }
              uVar3 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_198);
              iVar2 = FUN_143b11680("ASCII",uVar3);
              if (iVar2 == 0) {
                FUN_143b15dd0(param_1,0,0x7f);
                local_1f8 = param_1;
                TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
                TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_198);
                return local_1f8;
              }
              uVar3 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_198);
              iVar2 = FUN_143b11680("Assigned",uVar3);
              if (iVar2 != 0) {
                *param_4 = 1;
                local_1e8 = param_1;
                TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
                TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_198);
                return local_1e8;
              }
              local_278 = 0x2000;
              local_274 = 1;
              local_26f = '\x01';
            }
            else {
              local_274 = 1;
            }
          }
        }
      }
      else {
        uVar3 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_198);
        local_278 = FUN_143b11610(uVar3);
        if (local_278 == -1) {
          *param_4 = 1;
          local_240 = param_1;
          TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
          ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
          TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
          ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_198);
          return local_240;
        }
        if (local_278 == 0x1005) {
          local_278 = 0x2000;
        }
        if ((((local_278 < 0) || (0x38 < local_278)) &&
            ((local_278 < 0x1000 || (0x1015 < local_278)))) &&
           ((local_278 < 0x2000 || (0x2000 < local_278)))) {
          local_26c = local_278;
          local_288 = param_4;
          if (local_278 == 0x3000) {
            pcVar4 = (char *)TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                             ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
            local_250 = strtod(pcVar4,&local_220);
            if (*local_220 != '\0') {
              *param_4 = 1;
              local_1d0 = param_1;
              TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
              ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
              TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
              ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_198);
              return local_1d0;
            }
            FUN_143b173a0(param_1,FUN_143b1a090,&local_250,1);
            local_1b0 = param_1;
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_198);
            return local_1b0;
          }
          if (local_278 == 0x4000) {
            uVar3 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                    ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
            cVar1 = FUN_143b19fa0(local_98,uVar3,0x80);
            if (cVar1 == '\0') {
              *param_4 = 1;
              local_248 = param_1;
              TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
              ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
              TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
              ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_198);
              return local_248;
            }
            FUN_143a915f0(local_260,local_98);
            FUN_143b173a0(param_1,FUN_143b1a230,local_260,2);
            local_238 = param_1;
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_198);
            return local_238;
          }
          if (local_278 == 0x4005) {
            uVar3 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                    ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
            cVar1 = FUN_143b19fa0(local_118,uVar3,0x80);
            if (cVar1 == '\0') {
              *param_4 = 1;
              local_200 = param_1;
              TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
              ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
              TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
              ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_198);
              return local_200;
            }
            local_268 = FUN_143b30230(2,local_118,param_4);
            cVar1 = FUN_143a8b110(*param_4);
            if (cVar1 != '\0') {
              (**(code **)(*param_1 + 0xb0))(param_1);
              FUN_143b13590(param_1,local_268);
              local_1b8 = param_1;
              TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
              ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
              TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
              ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_198);
              return local_1b8;
            }
            *param_4 = 1;
            local_1f0 = param_1;
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_198);
            return local_1f0;
          }
          if (local_278 == 0x400b) {
            *param_4 = 1;
            local_1c8 = param_1;
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_198);
            return local_1c8;
          }
          if (local_278 != 0x7000) {
            *param_4 = 1;
            local_218 = param_1;
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_198);
            return local_218;
          }
          uVar3 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                  ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
          local_274 = FClearIrradianceSamplesCS::ModifyCompilationEnvironment(0x100a,uVar3);
          if (local_274 == -1) {
            *param_4 = 1;
            local_228 = param_1;
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_198);
            return local_228;
          }
        }
        else {
          uVar3 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                  ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
          local_274 = FClearIrradianceSamplesCS::ModifyCompilationEnvironment(local_278,uVar3);
          if (local_274 == -1) {
            if (((local_278 != 0x1002) && (local_278 != 0x1011)) && (local_278 != 0x1010)) {
              *param_4 = 1;
              local_1c0 = param_1;
              TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
              ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
              TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
              ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_198);
              return local_1c0;
            }
            pcVar4 = (char *)TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                             ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
            local_258 = strtod(pcVar4,&local_1e0);
            local_274 = (int)local_258;
            if ((((double)local_274 != local_258) || (local_274 < 0)) || (*local_1e0 != '\0')) {
              *param_4 = 1;
              local_230 = param_1;
              TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
              ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
              TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
              ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_198);
              return local_230;
            }
            local_270 = '\x01';
          }
        }
      }
      FUN_143b17570(param_1,local_278,local_274,param_4);
      if (local_26f != '\0') {
        (**(code **)(*param_1 + 0xa8))(param_1);
      }
      cVar1 = FUN_143a8b110(*param_4);
      if (((cVar1 != '\0') && (local_270 != '\0')) &&
         (cVar1 = (**(code **)(*param_1 + 0x50))(param_1), cVar1 != '\0')) {
        *param_4 = 1;
      }
      cVar1 = FUN_143b14df0(param_1);
      if ((cVar1 != '\0') && (cVar1 = FUN_143a8b110(*param_4), cVar1 != '\0')) {
        *param_4 = 7;
      }
      local_1d8 = param_1;
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_198);
      return local_1d8;
    }
  }
  *param_4 = 1;
  return param_1;
}



// FUNCTION 143b19580 FUN_143b19580 body=1226 status=ok
// SIG undefined FUN_143b19580(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_143b19580(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4)

{
  uint uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_f8 [32];
  uint local_d8;
  char local_d4;
  char local_d3;
  char local_d2;
  undefined1 local_d1;
  undefined1 local_d0;
  int local_cc;
  short local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  uint local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_90 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_d8 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
             ::GetIndex(param_3);
  local_d3 = '\0';
  local_d2 = '\0';
  local_d4 = '\0';
  cVar2 = FUN_143a8b0e0(*param_4);
  if (cVar2 != '\0') {
    return param_1;
  }
  local_bc = local_d8 + 5;
  iVar4 = FUN_143a904f0(param_2);
  if (iVar4 < local_bc) {
    *param_4 = 1;
    return param_1;
  }
  cVar2 = FUN_143b19ed0(param_2,local_d8);
  if (cVar2 == '\0') {
    cVar2 = FUN_143b19f30(param_2,local_d8);
    if ((cVar2 == '\0') && (cVar2 = FUN_143b19e70(param_2,local_d8), cVar2 == '\0')) {
      *param_4 = 1;
      return param_1;
    }
    local_c8 = FUN_143a8e4f0(param_2,local_d8 + 1);
    local_d4 = local_c8 == 0x50;
    local_d2 = local_c8 == 0x4e;
    local_d8 = local_d8 + 2;
    local_d1 = local_d2;
    local_d0 = local_d4;
    local_d8 = FUN_143b28750(param_2,&local_d8,0);
    uVar5 = FUN_143a904f0(param_2);
    uVar1 = local_d8;
    if (local_d8 != uVar5) {
      local_b8 = local_d8;
      local_d8 = local_d8 + 1;
      sVar3 = FUN_143a8e4f0(param_2,uVar1);
      if (sVar3 == 0x7b) goto LAB_143b197db;
    }
    *param_4 = 1;
  }
  else {
    local_d3 = '\x01';
    local_d8 = local_d8 + 2;
    local_d8 = FUN_143b28750(param_2,&local_d8,0);
    iVar4 = FUN_143a904f0(param_2);
    if (((int)local_d8 < iVar4) && (sVar3 = FUN_143a8e4f0(param_2,local_d8), sVar3 == 0x5e)) {
      local_d8 = local_d8 + 1;
      local_d4 = '\x01';
    }
LAB_143b197db:
    if (local_d3 == '\0') {
      local_cc = FUN_143b0bae0(param_2,0x7d,local_d8);
    }
    else {
      local_cc = FUN_143b19dc0(param_2,&DAT_145d0af88,2,local_d8);
    }
    if (local_cc < 0) {
      *param_4 = 1;
    }
    else {
      local_c4 = FUN_143b0bae0(param_2,0x3d,local_d8);
      FUN_143a8ac30(local_88);
      FUN_143a8ac30(local_60);
      if (((local_c4 < 0) || (local_cc <= local_c4)) || (local_d2 != '\0')) {
        (**(code **)(*param_2 + 0x10))(param_2,local_d8,local_cc,local_88);
        if (local_d2 != '\0') {
          FUN_143a8dcd0(local_60,local_88);
          local_b0 = FUN_143a8d9f0(local_38,&DAT_145cd0a8c,2,0);
          local_a0 = local_b0;
          FUN_143a8dcd0(local_88,local_b0);
          FUN_143a8dc60(local_38);
        }
      }
      else {
        (**(code **)(*param_2 + 0x10))(param_2,local_d8,local_c4,local_88);
        local_a8 = *param_2;
        (**(code **)(local_a8 + 0x10))(param_2,local_c4 + 1,local_cc,local_60);
      }
      FUN_143b18a90(param_1,local_88,local_60,param_4);
      cVar2 = FUN_143a8b110(*param_4);
      if (cVar2 != '\0') {
        if (local_d4 != '\0') {
          (**(code **)(*param_1 + 0xa8))(param_1);
        }
        if (local_d3 == '\0') {
          local_c0 = 1;
        }
        else {
          local_c0 = 2;
        }
        FUN_143b0fce0(param_3,local_cc + local_c0);
      }
      local_98 = param_1;
      FUN_143a8dc60(local_60);
      FUN_143a8dc60(local_88);
      param_1 = local_98;
    }
  }
  return param_1;
}



// FUNCTION 143b19a50 FUN_143b19a50 body=352 status=ok
// SIG undefined FUN_143b19a50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b19a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    FUN_143a8ac30(local_40);
    FUN_143b309b0(param_2,local_40,0xffffffff);
    FUN_143b16ce0(local_58,0);
    FUN_143b19580(param_1,local_40,local_58,param_4);
    cVar1 = FUN_143a8b0e0(*param_4);
    if (cVar1 == '\0') {
      iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(local_58);
      if (iVar2 == 0) {
        *param_4 = 0x10002;
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_58);
        FUN_143a8dc60(local_40);
      }
      else {
        uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_58);
        FUN_143b30990(param_2,uVar3);
        uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_58);
        FUN_143acc540(param_3,local_40,0,uVar3);
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_58);
        FUN_143a8dc60(local_40);
      }
    }
    else {
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_58);
      FUN_143a8dc60(local_40);
    }
  }
  return;
}



// FUNCTION 143b19bb0 FUN_143b19bb0 body=287 status=ok
// SIG undefined FUN_143b19bb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b19bb0(undefined4 *param_1)

{
  undefined1 auStack_98 [32];
  uint local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_78 = 0;
  local_70 = FUN_143a8d310(0x58);
  if (local_70 == 0) {
    local_68 = 0;
  }
  else {
    local_60 = FUN_143a8d4f0(local_40,1,L"[:age=3.2:]",0xffffffff);
    local_78 = local_78 | 1;
    local_50 = local_60;
    local_68 = FUN_143b16d40(local_70,local_60,param_1);
  }
  local_58 = local_68;
  DAT_146bc7c78 = local_68;
  if ((local_78 & 1) != 0) {
    local_78 = local_78 & 0xfffffffe;
    FUN_143a8dc60(local_40);
  }
  if (DAT_146bc7c78 == 0) {
    *param_1 = 7;
  }
  else {
    FUN_143b149a0(DAT_146bc7c78);
  }
  FUN_143aa77b0(9,FUN_143b1a3a0);
  return;
}



// FUNCTION 143b19cd0 FUN_143b19cd0 body=84 status=ok
// SIG undefined FUN_143b19cd0(void)

bool FUN_143b19cd0(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = *param_2;
  bVar2 = FUN_143a9db60(param_1);
  return (1 << (bVar2 & 0x1f) & uVar1) != 0;
}



// FUNCTION 143b19d30 FUN_143b19d30 body=87 status=ok
// SIG undefined FUN_143b19d30(void)

undefined8 FUN_143b19d30(int param_1,undefined8 param_2)

{
  FUN_143b16c40((longlong)param_1 * 0x10 + 0x146bc7c88,FUN_143b16e90,param_1,param_2);
  return *(undefined8 *)(&DAT_146bc7c80 + (longlong)param_1 * 0x10);
}



// FUNCTION 143b19d90 FUN_143b19d90 body=40 status=ok
// SIG undefined FUN_143b19d90(void)

bool FUN_143b19d90(longlong param_1)

{
  return *(longlong *)(param_1 + 0x18) != 0;
}



// FUNCTION 143b19dc0 FUN_143b19dc0 body=93 status=ok
// SIG undefined FUN_143b19dc0(void)

void FUN_143b19dc0(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int local_res20 [2];
  
  local_res20[0] = param_4;
  FUN_143a906b0(param_1,local_res20);
  iVar1 = FUN_143a904f0(param_1);
  FUN_143a901f0(param_1,param_2,0,param_3,local_res20[0],iVar1 - local_res20[0]);
  return;
}



// FUNCTION 143b19e20 FUN_143b19e20 body=71 status=ok
// SIG undefined FUN_143b19e20(void)

bool FUN_143b19e20(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_143b10c90(param_1,*param_2);
  return iVar1 == param_2[1];
}



// FUNCTION 143b19e70 FUN_143b19e70 body=83 status=ok
// SIG undefined FUN_143b19e70(void)

undefined1 FUN_143b19e70(undefined8 param_1,int param_2)

{
  short sVar1;
  
  sVar1 = FUN_143a8e4f0(param_1,param_2);
  if ((sVar1 == 0x5c) && (sVar1 = FUN_143a8e4f0(param_1,param_2 + 1), sVar1 == 0x4e)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143b19ed0 FUN_143b19ed0 body=83 status=ok
// SIG undefined FUN_143b19ed0(void)

undefined1 FUN_143b19ed0(undefined8 param_1,int param_2)

{
  short sVar1;
  
  sVar1 = FUN_143a8e4f0(param_1,param_2);
  if ((sVar1 == 0x5b) && (sVar1 = FUN_143a8e4f0(param_1,param_2 + 1), sVar1 == 0x3a)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143b19f30 FUN_143b19f30 body=100 status=ok
// SIG undefined FUN_143b19f30(void)

undefined1 FUN_143b19f30(undefined8 param_1,int param_2)

{
  short sVar1;
  
  sVar1 = FUN_143a8e4f0(param_1,param_2);
  if ((sVar1 == 0x5c) &&
     ((sVar1 = FUN_143a8e4f0(param_1,param_2 + 1), sVar1 == 0x70 || (sVar1 == 0x50)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 143b19fa0 FUN_143b19fa0 body=229 status=ok
// SIG undefined FUN_143b19fa0(void)

longlong FUN_143b19fa0(longlong param_1,char *param_2,int param_3)

{
  char cVar1;
  char *local_res10;
  int local_14;
  
  local_14 = 0;
  local_res10 = param_2;
  while( true ) {
    do {
      cVar1 = *local_res10;
      local_res10 = local_res10 + 1;
      if (cVar1 == '\0') {
        if ((0 < local_14) && (*(char *)(param_1 + (local_14 + -1)) == ' ')) {
          local_14 = local_14 + -1;
        }
        *(undefined1 *)(param_1 + local_14) = 0;
        return CONCAT71((int7)(int3)((uint)local_14 >> 8),1);
      }
    } while ((cVar1 == ' ') &&
            ((local_14 == 0 || ((0 < local_14 && (*(char *)(param_1 + (local_14 + -1)) == ' '))))));
    if (param_3 + -1 <= local_14) break;
    *(char *)(param_1 + local_14) = cVar1;
    local_14 = local_14 + 1;
  }
  return (ulonglong)(uint3)((uint)(param_3 + -1) >> 8) << 8;
}



// FUNCTION 143b1a090 FUN_143b1a090 body=57 status=ok
// SIG undefined FUN_143b1a090(void)

bool FUN_143b1a090(undefined4 param_1,double *param_2)

{
  double dVar1;
  
  dVar1 = (double)FUN_143a9dde0(param_1);
  return dVar1 == *param_2;
}



// FUNCTION 143b1a0d0 FUN_143b1a0d0 body=291 status=ok
// SIG undefined FUN_143b1a0d0(void)

undefined1 FUN_143b1a0d0(undefined8 param_1,uint param_2)

{
  char cVar1;
  undefined1 local_38;
  char local_37;
  undefined1 local_36 [2];
  int local_34;
  int local_30;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  undefined1 local_18 [24];
  
  local_37 = '\0';
  local_2c = 0;
  FUN_143b30940(param_1,local_18);
  local_30 = FUN_143b30a40(param_1,param_2 & 0xfffffffd,local_36,&local_2c);
  if ((local_30 == 0x5b) || (local_30 == 0x5c)) {
    local_34 = FUN_143b30a40(param_1,param_2 & 0xfffffff9,local_36,&local_2c);
    if (local_30 == 0x5b) {
      local_20 = (uint)(local_34 == 0x3a);
      local_24 = local_20;
    }
    else {
      if (((local_34 == 0x4e) || (local_34 == 0x70)) || (local_34 == 0x50)) {
        local_28 = 1;
      }
      else {
        local_28 = 0;
      }
      local_24 = local_28;
    }
    local_37 = (char)local_24;
  }
  FUN_143b30d60(param_1,local_18);
  if ((local_37 == '\0') || (cVar1 = FUN_143a8b110(local_2c), cVar1 == '\0')) {
    local_38 = 0;
  }
  else {
    local_38 = 1;
  }
  return local_38;
}



// FUNCTION 143b1a200 FUN_143b1a200 body=34 status=ok
// SIG undefined FUN_143b1a200(void)

void FUN_143b1a200(undefined4 param_1,undefined4 *param_2)

{
  FUN_143a9f250(param_1,*param_2);
  return;
}



// FUNCTION 143b1a230 FUN_143b1a230 body=111 status=ok
// SIG undefined FUN_143b1a230(void)

undefined1 FUN_143b1a230(undefined4 param_1,void *param_2)

{
  int iVar1;
  undefined1 local_14 [4];
  void *local_10;
  
  FUN_143a9d990(param_1,local_14);
  local_10 = param_2;
  iVar1 = _guard_xfg_dispatch_icall_nop(local_14,&DAT_145d0b160,4);
  if ((0 < iVar1) && (iVar1 = _guard_xfg_dispatch_icall_nop(local_14,local_10,4), iVar1 < 1)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143b1a2a0 FUN_143b1a2a0 body=32 status=ok
// SIG undefined FUN_143b1a2a0(void)

void FUN_143b1a2a0(undefined8 param_1,undefined4 param_2)

{
  FUN_143b13590(param_1,param_2);
  return;
}



// FUNCTION 143b1a2c0 FUN_143b1a2c0 body=48 status=ok
// SIG undefined FUN_143b1a2c0(void)

void FUN_143b1a2c0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x68))(param_1,param_2,param_3);
  return;
}



// FUNCTION 143b1a2f0 FUN_143b1a2f0 body=125 status=ok
// SIG undefined FUN_143b1a2f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b1a2f0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_48 = param_3 < 0;
  uVar1 = FUN_143a8d4f0(local_40,local_48,param_2,param_3);
  FUN_143b134e0(param_1,uVar1);
  FUN_143a8dc60(local_40);
  return;
}



// FUNCTION 143b1a370 FUN_143b1a370 body=45 status=ok
// SIG undefined FUN_143b1a370(void)

undefined8 FUN_143b1a370(undefined8 param_1)

{
  FUN_143aa29a0(&DAT_146bc7c70,FUN_143b19bb0,param_1);
  return DAT_146bc7c78;
}



// FUNCTION 143b1a3a0 FUN_143b1a3a0 body=259 status=ok
// SIG undefined FUN_143b1a3a0(void)

undefined8 FUN_143b1a3a0(void)

{
  undefined8 *puVar1;
  int local_48;
  
  for (local_48 = 0; local_48 < 0xc; local_48 = local_48 + 1) {
    puVar1 = *(undefined8 **)(&DAT_146bc7c80 + (longlong)local_48 * 0x10);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(longlong *)(&DAT_146bc7c80 + (longlong)local_48 * 0x10) = 0;
    FUN_143a9a9f0((longlong)local_48 * 0x10 + 0x146bc7c88);
  }
  if (DAT_146bc7c78 != (undefined8 *)0x0) {
    (**(code **)*DAT_146bc7c78)(DAT_146bc7c78,1);
  }
  DAT_146bc7c78 = (undefined8 *)0x0;
  FUN_143a9a9f0(&DAT_146bc7c70);
  return 1;
}



// FUNCTION 143b1a4b0 FUN_143b1a4b0 body=99 status=ok
// SIG undefined FUN_143b1a4b0(void)

longlong FUN_143b1a4b0(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  *(longlong *)(param_1 + 0x50) = param_1;
  *(undefined8 *)(param_1 + 0x58) = 0x14;
  if (0x14 < param_2) {
    uVar1 = FUN_143aa7a40(param_2 << 2);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
    *(ulonglong *)(param_1 + 0x58) = param_2;
  }
  return param_1;
}



// FUNCTION 143b1a520 FUN_143b1a520 body=111 status=ok
// SIG undefined FUN_143b1a520(void)

longlong FUN_143b1a520(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  *(longlong *)(param_1 + 0x140) = param_1;
  *(undefined8 *)(param_1 + 0x148) = 0x50;
  if (0x50 < param_2) {
    uVar1 = FUN_143aa7a40(param_2 << 2);
    *(undefined8 *)(param_1 + 0x140) = uVar1;
    *(ulonglong *)(param_1 + 0x148) = param_2;
  }
  return param_1;
}



// FUNCTION 143b1a590 FUN_143b1a590 body=110 status=ok
// SIG undefined FUN_143b1a590(void)

longlong FUN_143b1a590(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  *(longlong *)(param_1 + 0xa0) = param_1;
  *(undefined8 *)(param_1 + 0xa8) = 0x50;
  if (0x50 < param_2) {
    uVar1 = FUN_143aa7a40(param_2 << 1);
    *(undefined8 *)(param_1 + 0xa0) = uVar1;
    *(ulonglong *)(param_1 + 0xa8) = param_2;
  }
  return param_1;
}



// FUNCTION 143b1a600 FUN_143b1a600 body=823 status=ok
// SIG undefined FUN_143b1a600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143b1a600(undefined8 *param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_118 [96];
  undefined1 local_b8 [40];
  undefined1 local_90 [40];
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_128 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  FUN_143b1a940(param_1,2);
  *param_1 = icu_53::CjkBreakEngine::vftable;
  FUN_143b11ea0(param_1 + 0xd);
  FUN_143b11ea0(param_1 + 0x18);
  FUN_143b11ea0(param_1 + 0x23);
  FUN_143b11ea0(param_1 + 0x2e);
  param_1[0x39] = param_2;
  local_158 = FUN_143a8d4f0(local_68,1,L"[\\uac00-\\ud7a3]",0xffffffff);
  local_140 = local_158;
  FUN_143b18800(param_1 + 0xd,local_158,param_4);
  FUN_143a8dc60(local_68);
  local_148 = FUN_143a8d4f0(local_40,1,L"[:Han:]",0xffffffff);
  local_130 = local_148;
  FUN_143b18800(param_1 + 0x18,local_148,param_4);
  FUN_143a8dc60(local_40);
  local_150 = FUN_143a8d4f0(local_b8,1,L"[[:Katakana:]\\uff9e\\uff9f]",0xffffffff);
  local_138 = local_150;
  FUN_143b18800(param_1 + 0x23,local_150,param_4);
  FUN_143a8dc60(local_b8);
  local_168 = FUN_143a8d4f0(local_90,1,L"[:Hiragana:]",0xffffffff);
  local_160 = local_168;
  FUN_143b18800(param_1 + 0x2e,local_168,param_4);
  FUN_143a8dc60(local_90);
  cVar1 = FUN_143a8b110(*param_4);
  if (cVar1 != '\0') {
    if (param_3 == 0) {
      FUN_143b1dd60(param_1,param_1 + 0xd);
    }
    else {
      FUN_143b11ea0(local_118);
      FUN_143b139e0(local_118,param_1 + 0x18);
      FUN_143b139e0(local_118,param_1 + 0x23);
      FUN_143b139e0(local_118,param_1 + 0x2e);
      FUN_143b13590(local_118,0xff70);
      FUN_143b13590(local_118,0x30fc);
      FUN_143b1dd60(param_1,local_118);
      FUN_143b11ff0(local_118);
    }
  }
  return param_1;
}



// FUNCTION 143b1a940 FUN_143b1a940 body=87 status=ok
// SIG undefined FUN_143b1a940(void)

undefined8 * FUN_143b1a940(undefined8 *param_1,undefined4 param_2)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::DictionaryBreakEngine::vftable;
  FUN_143b11ea0(param_1 + 1);
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return param_1;
}



// FUNCTION 143b1a9a0 FUN_143b1a9a0 body=747 status=ok
// SIG undefined FUN_143b1a9a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143b1a9a0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_68 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  FUN_143b1a940(param_1,6);
  *param_1 = icu_53::KhmerBreakEngine::vftable;
  FUN_143b11ea0(param_1 + 0xd);
  FUN_143b11ea0(param_1 + 0x18);
  FUN_143b11ea0(param_1 + 0x23);
  FUN_143b11ea0(param_1 + 0x2e);
  param_1[0x39] = param_2;
  local_a0 = FUN_143a8d4f0(local_60,1,L"[[:Khmr:]&[:LineBreak=SA:]]",0xffffffff);
  local_70 = local_a0;
  FUN_143b18800(param_1 + 0xd,local_a0,param_3);
  FUN_143a8dc60(local_60);
  cVar1 = FUN_143a8b110(*param_3);
  if (cVar1 != '\0') {
    FUN_143b1dd60(param_1,param_1 + 0xd);
  }
  local_90 = FUN_143a8d4f0(local_38,1,L"[[:Khmr:]&[:LineBreak=SA:]&[:M:]]",0xffffffff);
  local_78 = local_90;
  FUN_143b18800(param_1 + 0x2e,local_90,param_3);
  FUN_143a8dc60(local_38);
  FUN_143b13590(param_1 + 0x2e,0x20);
  FUN_143b12150(param_1 + 0x18,param_1 + 0xd);
  local_80 = param_1[0x23];
  (**(code **)(local_80 + 0x68))(param_1 + 0x23,0x1780,0x17b3);
  FUN_143b155e0(param_1 + 0x18,0x17d2);
  local_a8 = param_1[0x2e];
  (**(code **)(local_a8 + 0xd8))(param_1 + 0x2e);
  local_98 = param_1[0x18];
  (**(code **)(local_98 + 0xd8))(param_1 + 0x18);
  local_88 = param_1[0x23];
  (**(code **)(local_88 + 0xd8))(param_1 + 0x23);
  return param_1;
}



// FUNCTION 143b1ac90 FUN_143b1ac90 body=897 status=ok
// SIG undefined FUN_143b1ac90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143b1ac90(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_70 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FUN_143b1a940(param_1,6);
  *param_1 = icu_53::LaoBreakEngine::vftable;
  FUN_143b11ea0(param_1 + 0xd);
  FUN_143b11ea0(param_1 + 0x18);
  FUN_143b11ea0(param_1 + 0x23);
  FUN_143b11ea0(param_1 + 0x2e);
  param_1[0x39] = param_2;
  local_b8 = FUN_143a8d4f0(local_68,1,L"[[:Laoo:]&[:LineBreak=SA:]]",0xffffffff);
  local_80 = local_b8;
  FUN_143b18800(param_1 + 0xd,local_b8,param_3);
  FUN_143a8dc60(local_68);
  cVar1 = FUN_143a8b110(*param_3);
  if (cVar1 != '\0') {
    FUN_143b1dd60(param_1,param_1 + 0xd);
  }
  local_a8 = FUN_143a8d4f0(local_40,1,L"[[:Laoo:]&[:LineBreak=SA:]&[:M:]]",0xffffffff);
  local_88 = local_a8;
  FUN_143b18800(param_1 + 0x2e,local_a8,param_3);
  FUN_143a8dc60(local_40);
  FUN_143b13590(param_1 + 0x2e,0x20);
  FUN_143b12150(param_1 + 0x18,param_1 + 0xd);
  local_78 = param_1[0x18];
  (**(code **)(local_78 + 0x98))(param_1 + 0x18,0xec0,0xec4);
  local_98 = param_1[0x23];
  (**(code **)(local_98 + 0x68))(param_1 + 0x23,0xe81,0xeae);
  local_c8 = param_1[0x23];
  (**(code **)(local_c8 + 0x68))(param_1 + 0x23,0xedc,0xedd);
  local_c0 = param_1[0x23];
  (**(code **)(local_c0 + 0x68))(param_1 + 0x23,0xec0,0xec4);
  local_b0 = param_1[0x2e];
  (**(code **)(local_b0 + 0xd8))(param_1 + 0x2e);
  local_a0 = param_1[0x18];
  (**(code **)(local_a0 + 0xd8))(param_1 + 0x18);
  local_90 = param_1[0x23];
  (**(code **)(local_90 + 0xd8))(param_1 + 0x23);
  return param_1;
}



// FUNCTION 143b1b020 FUN_143b1b020 body=23 status=ok
// SIG undefined FUN_143b1b020(void)

longlong FUN_143b1b020(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  return param_1;
}



// FUNCTION 143b1b040 FUN_143b1b040 body=993 status=ok
// SIG undefined FUN_143b1b040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143b1b040(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_70 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FUN_143b1a940(param_1,6);
  *param_1 = icu_53::ThaiBreakEngine::vftable;
  FUN_143b11ea0(param_1 + 0xd);
  FUN_143b11ea0(param_1 + 0x18);
  FUN_143b11ea0(param_1 + 0x23);
  FUN_143b11ea0(param_1 + 0x2e);
  FUN_143b11ea0(param_1 + 0x39);
  param_1[0x44] = param_2;
  local_b8 = FUN_143a8d4f0(local_68,1,L"[[:Thai:]&[:LineBreak=SA:]]",0xffffffff);
  local_80 = local_b8;
  FUN_143b18800(param_1 + 0xd,local_b8,param_3);
  FUN_143a8dc60(local_68);
  cVar1 = FUN_143a8b110(*param_3);
  if (cVar1 != '\0') {
    FUN_143b1dd60(param_1,param_1 + 0xd);
  }
  local_a8 = FUN_143a8d4f0(local_40,1,L"[[:Thai:]&[:LineBreak=SA:]&[:M:]]",0xffffffff);
  local_88 = local_a8;
  FUN_143b18800(param_1 + 0x39,local_a8,param_3);
  FUN_143a8dc60(local_40);
  FUN_143b13590(param_1 + 0x39,0x20);
  FUN_143b12150(param_1 + 0x18,param_1 + 0xd);
  FUN_143b155e0(param_1 + 0x18,0xe31);
  local_78 = param_1[0x18];
  (**(code **)(local_78 + 0x98))(param_1 + 0x18,0xe40,0xe44);
  local_98 = param_1[0x23];
  (**(code **)(local_98 + 0x68))(param_1 + 0x23,0xe01,0xe2e);
  local_c8 = param_1[0x23];
  (**(code **)(local_c8 + 0x68))(param_1 + 0x23,0xe40,0xe44);
  FUN_143b13590(param_1 + 0x2e,0xe2f);
  FUN_143b13590(param_1 + 0x2e,0xe46);
  local_c0 = param_1[0x39];
  (**(code **)(local_c0 + 0xd8))(param_1 + 0x39);
  local_b0 = param_1[0x18];
  (**(code **)(local_b0 + 0xd8))(param_1 + 0x18);
  local_a0 = param_1[0x23];
  (**(code **)(local_a0 + 0xd8))(param_1 + 0x23);
  local_90 = param_1[0x2e];
  (**(code **)(local_90 + 0xd8))(param_1 + 0x2e);
  return param_1;
}



// FUNCTION 143b1b430 FUN_143b1b430 body=44 status=ok
// SIG undefined FUN_143b1b430(void)

void FUN_143b1b430(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != param_1) {
    FUN_143aa79f0(*(undefined8 *)(param_1 + 0x50));
  }
  return;
}



// FUNCTION 143b1b460 FUN_143b1b460 body=50 status=ok
// SIG undefined FUN_143b1b460(void)

void FUN_143b1b460(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x140) != param_1) {
    FUN_143aa79f0(*(undefined8 *)(param_1 + 0x140));
  }
  return;
}



// FUNCTION 143b1b4a0 FUN_143b1b4a0 body=50 status=ok
// SIG undefined FUN_143b1b4a0(void)

void FUN_143b1b4a0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa0) != param_1) {
    FUN_143aa79f0(*(undefined8 *)(param_1 + 0xa0));
  }
  return;
}



// FUNCTION 143b1b4e0 FUN_143b1b4e0 body=199 status=ok
// SIG undefined FUN_143b1b4e0(void)

void FUN_143b1b4e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::CjkBreakEngine::vftable;
  puVar1 = (undefined8 *)param_1[0x39];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143b11ff0(param_1 + 0x2e);
  FUN_143b11ff0(param_1 + 0x23);
  FUN_143b11ff0(param_1 + 0x18);
  FUN_143b11ff0(param_1 + 0xd);
  FUN_143b1b5b0(param_1);
  return;
}



// FUNCTION 143b1b5b0 FUN_143b1b5b0 body=56 status=ok
// SIG undefined FUN_143b1b5b0(void)

void FUN_143b1b5b0(undefined8 *param_1)

{
  *param_1 = icu_53::DictionaryBreakEngine::vftable;
  FUN_143b11ff0(param_1 + 1);
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143b1b5f0 FUN_143b1b5f0 body=199 status=ok
// SIG undefined FUN_143b1b5f0(void)

void FUN_143b1b5f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::KhmerBreakEngine::vftable;
  puVar1 = (undefined8 *)param_1[0x39];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143b11ff0(param_1 + 0x2e);
  FUN_143b11ff0(param_1 + 0x23);
  FUN_143b11ff0(param_1 + 0x18);
  FUN_143b11ff0(param_1 + 0xd);
  FUN_143b1b5b0(param_1);
  return;
}



// FUNCTION 143b1b6c0 FUN_143b1b6c0 body=199 status=ok
// SIG undefined FUN_143b1b6c0(void)

void FUN_143b1b6c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::LaoBreakEngine::vftable;
  puVar1 = (undefined8 *)param_1[0x39];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143b11ff0(param_1 + 0x2e);
  FUN_143b11ff0(param_1 + 0x23);
  FUN_143b11ff0(param_1 + 0x18);
  FUN_143b11ff0(param_1 + 0xd);
  FUN_143b1b5b0(param_1);
  return;
}



// FUNCTION 143b1b790 FUN_143b1b790 body=6 status=ok
// SIG undefined FUN_143b1b790(void)

void FUN_143b1b790(void)

{
  return;
}



// FUNCTION 143b1b7a0 FUN_143b1b7a0 body=219 status=ok
// SIG undefined FUN_143b1b7a0(void)

void FUN_143b1b7a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::ThaiBreakEngine::vftable;
  puVar1 = (undefined8 *)param_1[0x44];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143b11ff0(param_1 + 0x39);
  FUN_143b11ff0(param_1 + 0x2e);
  FUN_143b11ff0(param_1 + 0x23);
  FUN_143b11ff0(param_1 + 0x18);
  FUN_143b11ff0(param_1 + 0xd);
  FUN_143b1b5b0(param_1);
  return;
}



// FUNCTION 143b1b880 FUN_143b1b880 body=29 status=ok
// SIG undefined FUN_143b1b880(void)

longlong FUN_143b1b880(longlong param_1,longlong param_2)

{
  return *(longlong *)(param_1 + 0x50) + param_2 * 4;
}



// FUNCTION 143b1b8a0 FUN_143b1b8a0 body=32 status=ok
// SIG undefined FUN_143b1b8a0(void)

longlong FUN_143b1b8a0(longlong param_1,longlong param_2)

{
  return *(longlong *)(param_1 + 0x140) + param_2 * 4;
}



// FUNCTION 143b1b8c0 FUN_143b1b8c0 body=54 status=ok
// SIG undefined FUN_143b1b8c0(void)

undefined8 FUN_143b1b8c0(undefined8 param_1,uint param_2)

{
  FUN_143b1b4e0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b1b900 FUN_143b1b900 body=54 status=ok
// SIG undefined FUN_143b1b900(void)

undefined8 FUN_143b1b900(undefined8 param_1,uint param_2)

{
  FUN_143b1b5b0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b1b940 FUN_143b1b940 body=54 status=ok
// SIG undefined FUN_143b1b940(void)

undefined8 FUN_143b1b940(undefined8 param_1,uint param_2)

{
  FUN_143b1b5f0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b1b980 FUN_143b1b980 body=54 status=ok
// SIG undefined FUN_143b1b980(void)

undefined8 FUN_143b1b980(undefined8 param_1,uint param_2)

{
  FUN_143b1b6c0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b1b9c0 FUN_143b1b9c0 body=54 status=ok
// SIG undefined FUN_143b1b9c0(void)

undefined8 FUN_143b1b9c0(undefined8 param_1,uint param_2)

{
  FUN_143b1b7a0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b1ba00 FUN_143b1ba00 body=78 status=ok
// SIG undefined FUN_143b1ba00(void)

undefined4 FUN_143b1ba00(longlong param_1,undefined8 param_2)

{
  FUN_143b08380(param_2,(longlong)
                        (*(int *)(param_1 + 0x58) +
                        *(int *)(param_1 + (longlong)*(int *)(param_1 + 0x5c) * 4)));
  return *(undefined4 *)(param_1 + (longlong)*(int *)(param_1 + 0x5c) * 4);
}



// FUNCTION 143b1ba50 FUN_143b1ba50 body=100 status=ok
// SIG undefined FUN_143b1ba50(void)

bool FUN_143b1ba50(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = 0 < *(int *)(param_1 + 0x60);
  if (bVar1) {
    iVar2 = *(int *)(param_1 + 0x60) + -1;
    *(int *)(param_1 + 0x60) = iVar2;
    FUN_143b08380(param_2,(longlong)
                          (*(int *)(param_1 + 0x58) + *(int *)(param_1 + (longlong)iVar2 * 4)));
  }
  return bVar1;
}



// FUNCTION 143b1bac0 FUN_143b1bac0 body=294 status=ok
// SIG undefined FUN_143b1bac0(void)

undefined4 FUN_143b1bac0(longlong param_1,undefined8 param_2,longlong *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_143b07740(param_2);
  if (iVar1 != *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x58) = iVar1;
    uVar2 = (**(code **)(*param_3 + 8))
                      (param_3,param_2,param_4 - iVar1,param_1,param_1 + 0x50,0x14,0);
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    if (*(int *)(param_1 + 0x50) < 1) {
      FUN_143b08380(param_2,(longlong)iVar1);
    }
  }
  if (0 < *(int *)(param_1 + 0x50)) {
    FUN_143b08380(param_2,(longlong)
                          (iVar1 + *(int *)(param_1 + (longlong)(*(int *)(param_1 + 0x50) + -1) * 4)
                          ));
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x50) + -1;
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x60);
  return *(undefined4 *)(param_1 + 0x50);
}



// FUNCTION 143b1bbf0 FUN_143b1bbf0 body=3295 status=ok
// SIG undefined FUN_143b1bbf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143b1bbf0(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint *puVar8;
  undefined1 auStack_848 [32];
  int *local_828;
  int *local_820;
  undefined8 local_818;
  int local_808;
  int local_804;
  char local_800;
  char local_7ff;
  int local_7fc;
  char local_7f8;
  int local_7f4;
  int local_7f0;
  int local_7ec;
  char local_7e8;
  int local_7e4;
  undefined4 local_7e0;
  int local_7dc;
  int local_7d8;
  int local_7d4;
  int local_7d0;
  int local_7cc;
  int local_7c8;
  ulonglong local_7c0;
  uint local_7b8;
  undefined4 local_7b4;
  uint local_7b0;
  int local_7ac;
  int local_7a8;
  int local_7a4;
  int local_7a0;
  longlong local_798;
  longlong local_790;
  int *local_788;
  int *local_780;
  longlong local_778;
  undefined8 local_770;
  longlong local_768;
  longlong local_760;
  longlong local_758;
  longlong local_750;
  undefined8 local_748;
  undefined4 local_738;
  undefined4 local_734;
  undefined4 local_730;
  undefined4 local_72c;
  undefined8 local_728;
  undefined4 local_720;
  undefined4 local_71c;
  undefined8 local_718;
  undefined4 local_710;
  undefined4 local_70c;
  undefined8 local_708;
  undefined8 local_700;
  undefined8 local_6f8;
  undefined8 local_6f0;
  undefined8 local_6e8;
  undefined8 local_6e0;
  undefined8 local_6d8;
  undefined8 local_6d0;
  undefined8 local_6c8;
  undefined4 local_6c0;
  undefined4 local_6bc;
  undefined8 local_6b8;
  undefined4 local_6b0;
  undefined4 local_6ac;
  undefined8 local_6a8;
  undefined8 local_6a0;
  undefined8 local_698;
  undefined1 local_690 [40];
  undefined1 local_668 [48];
  undefined1 local_638 [96];
  undefined1 local_5d8 [96];
  undefined1 local_578 [96];
  undefined1 local_518 [96];
  undefined1 local_4b8 [176];
  undefined1 local_408 [336];
  undefined1 local_2b8 [336];
  undefined1 local_168 [336];
  ulonglong local_18;
  
  local_698 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_848;
  if (param_3 < param_4) {
    local_6a0 = 0x50;
    local_7c0 = (ulonglong)(param_4 - param_3);
    FUN_143b1a590(local_4b8,local_7c0);
    local_7f4 = 0;
    uVar5 = FBufferReaderBase::Tell(local_4b8);
    local_820 = &local_7f4;
    local_828 = (int *)CONCAT44(local_828._4_4_,(undefined4)local_7c0);
    FUN_143b076d0(param_2,(longlong)param_3,(longlong)param_4,uVar5);
    cVar1 = FUN_143a8b0e0(local_7f4);
    if (cVar1 == '\0') {
      uVar5 = FBufferReaderBase::Tell(local_4b8);
      FUN_143a8db50(local_690,uVar5,local_7c0 & 0xffffffff);
      local_7e0 = 5;
      iVar3 = FUN_143b1dcb0(local_690,5,&local_7f4);
      if ((iVar3 == 1) || (cVar1 = FUN_143b1dc20(local_690,local_7e0,&local_7f4), cVar1 != '\0')) {
        local_800 = '\x01';
      }
      else {
        local_800 = '\0';
      }
      local_7e8 = local_800;
      FUN_143b1a520(local_2b8,local_7c0 + 1);
      local_808 = 0;
      local_738 = 0x345ad82c;
      local_734 = 0;
      local_730 = 0;
      local_72c = 0x90;
      local_728 = 0;
      local_720 = 0;
      local_71c = 0;
      local_718 = 0;
      local_710 = 0;
      local_70c = 0;
      local_708 = 0;
      local_700 = 0;
      local_6f8 = 0;
      local_6f0 = 0;
      local_6e8 = 0;
      local_6e0 = 0;
      local_6d8 = 0;
      local_6d0 = 0;
      local_6c8 = 0;
      local_6c0 = 0;
      local_6bc = 0;
      local_6b8 = 0;
      local_6b0 = 0;
      local_6ac = 0;
      FUN_143a8ac30(local_668);
      if (local_7e8 == '\0') {
        local_828 = &local_7f4;
        FUN_143b316e0(local_690,local_7e0,0,local_668);
        cVar1 = FUN_143a8b0e0(local_7f4);
        if (cVar1 != '\0') {
          local_7ac = 0;
          FUN_143a8dc60(local_668);
          FUN_143b1b460(local_2b8);
          FUN_143a8dc60(local_690);
          FUN_143b1b4a0(local_4b8);
          return local_7ac;
        }
        iVar3 = FUN_143a904f0(local_668);
        FUN_143b1dce0(local_2b8,(longlong)(iVar3 + 1));
        uVar5 = FBufferReaderBase::Tell(local_4b8);
        FUN_143b30e80(local_578,uVar5,local_7c0 & 0xffffffff,local_7e0);
        local_7c8 = 0;
        puVar6 = (undefined4 *)FUN_143b1b8a0(local_2b8,0);
        *puVar6 = 0;
        while (iVar3 = FUN_143b31120(local_578), local_7c8 < iVar3) {
          FUN_143b313e0(local_578);
          local_7c8 = FUN_143b31160(local_578);
          local_808 = local_808 + 1;
          piVar7 = (int *)FUN_143b1b8a0(local_2b8,(longlong)local_808);
          *piVar7 = local_7c8;
        }
        FUN_143b07fe0(&local_738,local_668,&local_7f4);
        FUN_143b30fa0(local_578);
      }
      else {
        local_7cc = 0;
        puVar6 = (undefined4 *)FUN_143b1b8a0(local_2b8,0);
        *puVar6 = 0;
        while (iVar3 = FUN_143a904f0(local_690), local_7cc < iVar3) {
          local_7cc = FUN_143a90530(local_690,local_7cc,1);
          local_808 = local_808 + 1;
          piVar7 = (int *)FUN_143b1b8a0(local_2b8,(longlong)local_808);
          *piVar7 = local_7cc;
        }
        FUN_143b07fe0(&local_738,local_690,&local_7f4);
      }
      cVar1 = FUN_143a8b0e0(local_7f4);
      if (cVar1 == '\0') {
        FUN_143b1a520(local_408,(longlong)(local_808 + 1));
        puVar6 = (undefined4 *)FUN_143b1b8a0(local_408,0);
        *puVar6 = 0;
        for (local_7d4 = 1; local_7d4 <= local_808; local_7d4 = local_7d4 + 1) {
          puVar6 = (undefined4 *)FUN_143b1b8a0(local_408,(longlong)local_7d4);
          *puVar6 = 0xffffffff;
        }
        FUN_143b1a520(local_168,(longlong)(local_808 + 1));
        for (local_7dc = 0; local_7dc <= local_808; local_7dc = local_7dc + 1) {
          puVar6 = (undefined4 *)FUN_143b1b8a0(local_168,(longlong)local_7dc);
          *puVar6 = 0xffffffff;
        }
        local_6a8 = 0x14;
        FUN_143b1a4b0(local_518,(longlong)local_808);
        FUN_143b1a4b0(local_638,(longlong)local_808);
        local_7ff = '\0';
        for (local_804 = 0; local_804 < local_808; local_804 = local_804 + 1) {
          FUN_143b08380(&local_738,(longlong)local_804);
          piVar7 = (int *)FUN_143b1b8a0(local_408,(longlong)local_804);
          if (*piVar7 != -1) {
            if ((longlong)local_804 + 0x14U < (ulonglong)(longlong)local_808) {
              local_798 = 0x14;
            }
            else {
              local_798 = (longlong)(local_808 - local_804);
            }
            local_7b4 = (undefined4)local_798;
            local_770 = FUN_143b1d860(local_518);
            uVar5 = FUN_143b1d860(local_638);
            local_748 = *(undefined8 *)(param_1 + 0x1c8);
            local_778 = **(longlong **)(param_1 + 0x1c8);
            local_818 = local_770;
            local_820 = (int *)CONCAT44(local_820._4_4_,local_7b4);
            local_828 = &local_7e4;
            (**(code **)(local_778 + 8))(local_748,&local_738,local_7b4,uVar5);
            if ((local_7e4 == 0) || (piVar7 = (int *)FUN_143b1b880(local_638,0), *piVar7 != 1)) {
              uVar4 = FUN_143b07490(&local_738);
              local_758 = *(longlong *)(param_1 + 0x68);
              cVar1 = (**(code **)(local_758 + 0x30))(param_1 + 0x68,uVar4);
              if (cVar1 == '\0') {
                puVar6 = (undefined4 *)FUN_143b1b880(local_518,(longlong)local_7e4);
                *puVar6 = 0xff;
                local_768 = (longlong)local_7e4;
                local_7e4 = local_7e4 + 1;
                puVar6 = (undefined4 *)FUN_143b1b880(local_638,local_768);
                *puVar6 = 1;
              }
            }
            for (local_7ec = 0; local_7ec < local_7e4; local_7ec = local_7ec + 1) {
              local_788 = (int *)FUN_143b1b8a0(local_408,(longlong)local_804);
              piVar7 = (int *)FUN_143b1b880(local_518,(longlong)local_7ec);
              local_7b0 = *local_788 + *piVar7;
              piVar7 = (int *)FUN_143b1b880(local_638,(longlong)local_7ec);
              puVar8 = (uint *)FUN_143b1b8a0(local_408,(longlong)(*piVar7 + local_804));
              if (local_7b0 < *puVar8) {
                piVar7 = (int *)FUN_143b1b880(local_638,(longlong)local_7ec);
                puVar8 = (uint *)FUN_143b1b8a0(local_408,(longlong)(*piVar7 + local_804));
                *puVar8 = local_7b0;
                piVar7 = (int *)FUN_143b1b880(local_638,(longlong)local_7ec);
                piVar7 = (int *)FUN_143b1b8a0(local_168,(longlong)(*piVar7 + local_804));
                *piVar7 = local_804;
              }
            }
            FUN_143b08380(&local_738,(longlong)local_804);
            uVar2 = FUN_143b07490(&local_738);
            local_7f8 = FUN_143b1dbc0(uVar2);
            if ((local_7ff == '\0') && (local_7f8 != '\0')) {
              local_7f0 = local_804 + 1;
              FUN_143b07920(&local_738);
              for (; (local_7f0 < local_808 && (local_7f0 - local_804 < 0x14));
                  local_7f0 = local_7f0 + 1) {
                uVar2 = FUN_143b07490(&local_738);
                cVar1 = FUN_143b1dbc0(uVar2);
                if (cVar1 == '\0') break;
                FUN_143b07920(&local_738);
              }
              if (local_7f0 - local_804 < 0x14) {
                local_780 = (int *)FUN_143b1b8a0(local_408,(longlong)local_804);
                iVar3 = FUN_143b1daf0(local_7f0 - local_804);
                local_7b8 = iVar3 + *local_780;
                puVar8 = (uint *)FUN_143b1b8a0(local_408,(longlong)local_7f0);
                if (local_7b8 < *puVar8) {
                  puVar8 = (uint *)FUN_143b1b8a0(local_408,(longlong)local_7f0);
                  *puVar8 = local_7b8;
                  piVar7 = (int *)FUN_143b1b8a0(local_168,(longlong)local_7f0);
                  *piVar7 = local_804;
                }
              }
            }
            local_7ff = local_7f8;
          }
        }
        FUN_143b1a4b0(local_5d8,(longlong)(local_808 + 1));
        local_7fc = 0;
        piVar7 = (int *)FUN_143b1b8a0(local_408,(longlong)local_808);
        if (*piVar7 == -1) {
          local_790 = (longlong)local_7fc;
          piVar7 = (int *)FUN_143b1b880(local_5d8,local_790);
          *piVar7 = local_808;
          local_7fc = local_7fc + 1;
        }
        else {
          local_7d8 = local_808;
          while (0 < local_7d8) {
            local_760 = (longlong)local_7fc;
            piVar7 = (int *)FUN_143b1b880(local_5d8,local_760);
            *piVar7 = local_7d8;
            local_7fc = local_7fc + 1;
            piVar7 = (int *)FUN_143b1b8a0(local_168,(longlong)local_7d8);
            local_7d8 = *piVar7;
          }
        }
        iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(param_5);
        if ((iVar3 == 0) || (iVar3 = FUN_143aca700(param_5), local_7d0 = local_7fc, iVar3 < param_3)
           ) {
          local_750 = (longlong)local_7fc;
          puVar6 = (undefined4 *)FUN_143b1b880(local_5d8,local_750);
          *puVar6 = 0;
          local_7fc = local_7fc + 1;
          local_7d0 = local_7fc;
        }
        while (local_7d0 = local_7d0 + -1, -1 < local_7d0) {
          piVar7 = (int *)FUN_143b1b880(local_5d8,(longlong)local_7d0);
          piVar7 = (int *)FUN_143b1b8a0(local_2b8,(longlong)*piVar7);
          FUN_143b1dc80(param_5,*piVar7 + param_3,&local_7f4);
        }
        FUN_143b07390(&local_738);
        local_7a8 = local_7fc;
        FUN_143b1b430(local_5d8);
        FUN_143b1b430(local_638);
        FUN_143b1b430(local_518);
        FUN_143b1b460(local_168);
        FUN_143b1b460(local_408);
        FUN_143a8dc60(local_668);
        FUN_143b1b460(local_2b8);
        FUN_143a8dc60(local_690);
        FUN_143b1b4a0(local_4b8);
        local_7a4 = local_7a8;
      }
      else {
        local_7a0 = 0;
        FUN_143a8dc60(local_668);
        FUN_143b1b460(local_2b8);
        FUN_143a8dc60(local_690);
        FUN_143b1b4a0(local_4b8);
        local_7a4 = local_7a0;
      }
    }
    else {
      local_7a4 = 0;
      FUN_143b1b4a0(local_4b8);
    }
  }
  else {
    local_7a4 = 0;
  }
  return local_7a4;
}



// FUNCTION 143b1c8d0 FUN_143b1c8d0 body=1755 status=ok
// SIG undefined FUN_143b1c8d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_143b1c8d0(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_1d8 [32];
  code *local_1b8;
  uint local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  undefined4 local_194;
  int local_190;
  int local_18c;
  int local_188;
  undefined4 local_184;
  undefined4 local_180;
  int local_17c;
  uint local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  undefined1 local_148 [304];
  ulonglong local_18;
  
  local_158 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  if (param_4 - param_3 < 4) {
    local_178 = 0;
  }
  else {
    local_1a8 = 0;
    local_180 = 0;
    local_1b8 = FUN_143b1b790;
    _eh_vector_constructor_iterator_(local_148,100,3,FUN_143b1b020);
    FUN_143b08380(param_2,(longlong)param_3);
    while ((cVar1 = FUN_143a8b110(local_180), cVar1 != '\0' &&
           (local_1a0 = FUN_143b07740(param_2), local_1a0 < param_4))) {
      local_1a4 = 0;
      local_190 = FUN_143b1bac0(local_148 + ((ulonglong)local_1a8 % 3) * 100,param_2,
                                *(undefined8 *)(param_1 + 0x1c8),param_4);
      if (local_190 == 1) {
        local_1a4 = FUN_143b1ba00(local_148 + ((ulonglong)local_1a8 % 3) * 100);
        local_1a8 = local_1a8 + 1;
      }
      else if (1 < local_190) {
        iVar2 = FUN_143b07740(param_2);
        if (iVar2 < param_4) {
          do {
            local_18c = 1;
            iVar2 = FUN_143b1bac0(local_148 + ((ulonglong)(local_1a8 + 1) % 3) * 100,param_2,
                                  *(undefined8 *)(param_1 + 0x1c8),param_4);
            if (0 < iVar2) {
              if (local_18c < 2) {
                FUN_143b1dc60(local_148 + ((ulonglong)local_1a8 % 3) * 100);
                local_18c = 2;
              }
              iVar2 = FUN_143b07740(param_2);
              if (param_4 <= iVar2) break;
              do {
                iVar2 = FUN_143b1bac0(local_148 + ((ulonglong)(local_1a8 + 2) % 3) * 100,param_2,
                                      *(undefined8 *)(param_1 + 0x1c8),param_4);
                if (iVar2 != 0) {
                  FUN_143b1dc60(local_148 + ((ulonglong)local_1a8 % 3) * 100);
                  goto LAB_143b1cbf7;
                }
                cVar1 = FUN_143b1ba50(local_148 + ((ulonglong)(local_1a8 + 1) % 3) * 100);
              } while (cVar1 != '\0');
            }
            cVar1 = FUN_143b1ba50(local_148 + ((ulonglong)local_1a8 % 3) * 100);
          } while (cVar1 != '\0');
        }
LAB_143b1cbf7:
        local_1a4 = FUN_143b1ba00(local_148 + ((ulonglong)local_1a8 % 3) * 100);
        local_1a8 = local_1a8 + 1;
      }
      iVar2 = FUN_143b07740(param_2);
      if ((iVar2 < param_4) && (local_1a4 < 3)) {
        iVar2 = FUN_143b1bac0(local_148 + ((ulonglong)local_1a8 % 3) * 100,param_2,
                              *(undefined8 *)(param_1 + 0x1c8),param_4);
        if ((iVar2 < 1) &&
           ((local_1a4 == 0 ||
            (iVar2 = FUN_143b1dc50(local_148 + ((ulonglong)local_1a8 % 3) * 100), iVar2 < 3)))) {
          local_198 = param_4 - (local_1a0 + local_1a4);
          local_194 = FUN_143b07490(param_2);
          local_19c = 0;
          while( true ) {
            FUN_143b07920(param_2);
            local_184 = FUN_143b07490(param_2);
            local_19c = local_19c + 1;
            local_198 = local_198 + -1;
            if (local_198 < 1) break;
            local_160 = *(longlong *)(param_1 + 0xc0);
            cVar1 = (**(code **)(local_160 + 0x30))(param_1 + 0xc0);
            if (cVar1 != '\0') {
              local_170 = *(longlong *)(param_1 + 0x118);
              cVar1 = (**(code **)(local_170 + 0x30))(param_1 + 0x118);
              if (cVar1 != '\0') {
                local_17c = FUN_143b1bac0(local_148 + ((ulonglong)(local_1a8 + 1) % 3) * 100,param_2
                                          ,*(undefined8 *)(param_1 + 0x1c8),param_4);
                FUN_143b08380(param_2);
                if (0 < local_17c) break;
              }
            }
            local_194 = local_184;
          }
          if (local_1a4 < 1) {
            local_1a8 = local_1a8 + 1;
          }
          local_1a4 = local_1a4 + local_19c;
        }
        else {
          FUN_143b08380(param_2);
        }
      }
      while (local_188 = FUN_143b07740(param_2), local_188 < param_4) {
        FUN_143b07490(param_2);
        local_168 = *(longlong *)(param_1 + 0x170);
        cVar1 = (**(code **)(local_168 + 0x30))(param_1 + 0x170);
        if (cVar1 == '\0') break;
        FUN_143b07920(param_2);
        iVar2 = FUN_143b07740(param_2);
        local_1a4 = local_1a4 + (iVar2 - local_188);
      }
      if (0 < local_1a4) {
        FUN_143b1dc80(param_5,local_1a0 + local_1a4,&local_180);
      }
    }
    iVar2 = FUN_143aca700(param_5);
    if (param_4 <= iVar2) {
      FUN_143b0a0a0(param_5);
      local_1a8 = local_1a8 - 1;
    }
    local_178 = local_1a8;
    _eh_vector_destructor_iterator_(local_148,100,3,FUN_143b1b790);
  }
  return local_178;
}



// FUNCTION 143b1cfb0 FUN_143b1cfb0 body=2217 status=ok
// SIG undefined FUN_143b1cfb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_143b1cfb0(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_1e8 [32];
  code *local_1c8;
  uint local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  undefined4 local_198;
  int local_194;
  int local_190;
  int local_18c;
  uint local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  undefined1 local_148 [304];
  ulonglong local_18;
  
  local_158 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  if (param_4 - param_3 < 4) {
    local_188 = 0;
  }
  else {
    local_1b8 = 0;
    local_198 = 0;
    local_1c8 = FUN_143b1b790;
    _eh_vector_constructor_iterator_(local_148,100,3,FUN_143b1b020);
    FUN_143b08380(param_2,(longlong)param_3);
    while ((cVar1 = FUN_143a8b110(local_198), cVar1 != '\0' &&
           (local_1ac = FUN_143b07740(param_2), local_1ac < param_4))) {
      local_1b4 = 0;
      local_19c = FUN_143b1bac0(local_148 + ((ulonglong)local_1b8 % 3) * 100,param_2,
                                *(undefined8 *)(param_1 + 0x220),param_4);
      if (local_19c == 1) {
        local_1b4 = FUN_143b1ba00(local_148 + ((ulonglong)local_1b8 % 3) * 100);
        local_1b8 = local_1b8 + 1;
      }
      else if (1 < local_19c) {
        iVar2 = FUN_143b07740(param_2);
        if (iVar2 < param_4) {
          do {
            local_190 = 1;
            iVar2 = FUN_143b1bac0(local_148 + ((ulonglong)(local_1b8 + 1) % 3) * 100,param_2,
                                  *(undefined8 *)(param_1 + 0x220),param_4);
            if (0 < iVar2) {
              if (local_190 < 2) {
                FUN_143b1dc60(local_148 + ((ulonglong)local_1b8 % 3) * 100);
                local_190 = 2;
              }
              iVar2 = FUN_143b07740(param_2);
              if (param_4 <= iVar2) break;
              do {
                iVar2 = FUN_143b1bac0(local_148 + ((ulonglong)(local_1b8 + 2) % 3) * 100,param_2,
                                      *(undefined8 *)(param_1 + 0x220),param_4);
                if (iVar2 != 0) {
                  FUN_143b1dc60(local_148 + ((ulonglong)local_1b8 % 3) * 100);
                  goto LAB_143b1d2d7;
                }
                cVar1 = FUN_143b1ba50(local_148 + ((ulonglong)(local_1b8 + 1) % 3) * 100);
              } while (cVar1 != '\0');
            }
            cVar1 = FUN_143b1ba50(local_148 + ((ulonglong)local_1b8 % 3) * 100);
          } while (cVar1 != '\0');
        }
LAB_143b1d2d7:
        local_1b4 = FUN_143b1ba00(local_148 + ((ulonglong)local_1b8 % 3) * 100);
        local_1b8 = local_1b8 + 1;
      }
      iVar2 = FUN_143b07740(param_2);
      if ((iVar2 < param_4) && (local_1b4 < 3)) {
        iVar2 = FUN_143b1bac0(local_148 + ((ulonglong)local_1b8 % 3) * 100,param_2,
                              *(undefined8 *)(param_1 + 0x220),param_4);
        if ((iVar2 < 1) &&
           ((local_1b4 == 0 ||
            (iVar2 = FUN_143b1dc50(local_148 + ((ulonglong)local_1b8 % 3) * 100), iVar2 < 3)))) {
          local_1a4 = param_4 - (local_1ac + local_1b4);
          local_194 = FUN_143b07490(param_2);
          local_1a8 = 0;
          while( true ) {
            FUN_143b07920(param_2);
            local_1b0 = FUN_143b07490(param_2);
            local_1a8 = local_1a8 + 1;
            local_1a4 = local_1a4 + -1;
            if (local_1a4 < 1) break;
            local_180 = *(longlong *)(param_1 + 0xc0);
            cVar1 = (**(code **)(local_180 + 0x30))(param_1 + 0xc0);
            if (cVar1 != '\0') {
              local_160 = *(longlong *)(param_1 + 0x118);
              cVar1 = (**(code **)(local_160 + 0x30))(param_1 + 0x118);
              if (cVar1 != '\0') {
                local_18c = FUN_143b1bac0(local_148 + ((ulonglong)(local_1b8 + 1) % 3) * 100,param_2
                                          ,*(undefined8 *)(param_1 + 0x220),param_4);
                FUN_143b08380(param_2);
                if (0 < local_18c) break;
              }
            }
            local_194 = local_1b0;
          }
          if (local_1b4 < 1) {
            local_1b8 = local_1b8 + 1;
          }
          local_1b4 = local_1b4 + local_1a8;
        }
        else {
          FUN_143b08380(param_2);
        }
      }
      while (local_1a0 = FUN_143b07740(param_2), local_1a0 < param_4) {
        FUN_143b07490(param_2);
        local_168 = *(longlong *)(param_1 + 0x1c8);
        cVar1 = (**(code **)(local_168 + 0x30))(param_1 + 0x1c8);
        if (cVar1 == '\0') break;
        FUN_143b07920(param_2);
        iVar2 = FUN_143b07740(param_2);
        local_1b4 = local_1b4 + (iVar2 - local_1a0);
      }
      iVar2 = FUN_143b07740(param_2);
      if ((iVar2 < param_4) && (0 < local_1b4)) {
        iVar2 = FUN_143b1bac0(local_148 + ((ulonglong)local_1b8 % 3) * 100,param_2,
                              *(undefined8 *)(param_1 + 0x220),param_4);
        if (iVar2 < 1) {
          local_1b0 = FUN_143b07490(param_2);
          local_178 = *(longlong *)(param_1 + 0x170);
          cVar1 = (**(code **)(local_178 + 0x30))(param_1 + 0x170);
          if (cVar1 != '\0') {
            if (local_1b0 == 0xe2f) {
              FUN_143b08190(param_2);
              local_170 = *(longlong *)(param_1 + 0x170);
              cVar1 = (**(code **)(local_170 + 0x30))(param_1 + 0x170);
              if (cVar1 == '\0') {
                FUN_143b07920(param_2);
                FUN_143b07920(param_2);
                local_1b4 = local_1b4 + 1;
                local_1b0 = FUN_143b07490(param_2);
              }
              else {
                FUN_143b07920(param_2);
              }
            }
            if (local_1b0 == 0xe46) {
              iVar2 = FUN_143b08190(param_2);
              if (iVar2 == 0xe46) {
                FUN_143b07920(param_2);
              }
              else {
                FUN_143b07920(param_2);
                FUN_143b07920(param_2);
                local_1b4 = local_1b4 + 1;
              }
            }
            goto LAB_143b1d7bd;
          }
        }
        FUN_143b08380(param_2);
      }
LAB_143b1d7bd:
      if (0 < local_1b4) {
        FUN_143b1dc80(param_5,local_1ac + local_1b4,&local_198);
      }
    }
    iVar2 = FUN_143aca700(param_5);
    if (param_4 <= iVar2) {
      FUN_143b0a0a0(param_5);
      local_1b8 = local_1b8 - 1;
    }
    local_188 = local_1b8;
    _eh_vector_destructor_iterator_(local_148,100,3,FUN_143b1b790);
  }
  return local_188;
}



// FUNCTION 143b1d860 FUN_143b1d860 body=15 status=ok
// SIG undefined FUN_143b1d860(void)

undefined8 FUN_143b1d860(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// FUNCTION 143b1d870 Tell body=18 status=ok
// SIG undefined Tell(void)

undefined8 FBufferReaderBase::Tell(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



// FUNCTION 143b1d890 FUN_143b1d890 body=608 status=ok
// SIG undefined FUN_143b1d890(void)

undefined4
FUN_143b1d890(longlong *param_1,undefined8 param_2,int param_3,int param_4,char param_5,int param_6,
             undefined8 param_7)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  uint local_2c;
  
  local_38 = 0;
  iVar2 = FUN_143b07740(param_2);
  local_40 = FUN_143b07490(param_2);
  if (param_5 == '\0') {
    while ((local_44 = FUN_143b07740(param_2), local_3c = local_44, local_30 = iVar2,
           local_44 < param_4 &&
           (cVar1 = (**(code **)(param_1[1] + 0x30))(param_1 + 1,local_40), cVar1 != '\0'))) {
      FUN_143b07920(param_2);
      local_40 = FUN_143b07490(param_2);
    }
  }
  else {
    local_48 = (**(code **)(param_1[1] + 0x30))(param_1 + 1,local_40);
    while ((local_44 = FUN_143b07740(param_2), param_3 < local_44 && (local_48 != '\0'))) {
      uVar3 = FUN_143b08190(param_2);
      local_48 = (**(code **)(param_1[1] + 0x30))(param_1 + 1,uVar3);
    }
    local_34 = param_3;
    if (param_3 <= local_44) {
      local_2c = (uint)(local_48 == '\0');
      local_34 = local_44 + local_2c;
    }
    local_30 = local_34;
    local_3c = iVar2 + 1;
  }
  if (((-1 < param_6) && (param_6 < 0x20)) &&
     ((1 << ((byte)param_6 & 0x1f) & *(uint *)(param_1 + 0xc)) != 0)) {
    local_38 = (**(code **)(*param_1 + 0x20))(param_1,param_2,local_30,local_3c,param_7);
    FUN_143b08380(param_2,(longlong)local_44);
  }
  return local_38;
}



// FUNCTION 143b1daf0 FUN_143b1daf0 body=50 status=ok
// SIG undefined FUN_143b1daf0(void)

undefined4 FUN_143b1daf0(int param_1)

{
  undefined4 local_18;
  
  if (param_1 < 9) {
    local_18 = *(undefined4 *)(&DAT_145d0b640 + (longlong)param_1 * 4);
  }
  else {
    local_18 = 0x2000;
  }
  return local_18;
}



// FUNCTION 143b1db30 FUN_143b1db30 body=133 status=ok
// SIG undefined FUN_143b1db30(void)

undefined1 FUN_143b1db30(longlong param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  
  if ((((-1 < param_3) && (param_3 < 0x20)) &&
      ((1 << ((byte)param_3 & 0x1f) & *(uint *)(param_1 + 0x60)) != 0)) &&
     (cVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x30))(param_1 + 8,param_2), cVar1 != '\0'))
  {
    return 1;
  }
  return 0;
}



// FUNCTION 143b1dbc0 FUN_143b1dbc0 body=94 status=ok
// SIG undefined FUN_143b1dbc0(void)

undefined1 FUN_143b1dbc0(ushort param_1)

{
  undefined1 local_18;
  
  if ((((param_1 < 0x30a1) || (0x30fe < param_1)) || (param_1 == 0x30fb)) &&
     ((param_1 < 0xff66 || (0xff9f < param_1)))) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143b1dc20 FUN_143b1dc20 body=45 status=ok
// SIG undefined FUN_143b1dc20(void)

void FUN_143b1dc20(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_143b312e0(param_1,param_2,0,param_3);
  return;
}



// FUNCTION 143b1dc50 FUN_143b1dc50 body=14 status=ok
// SIG undefined FUN_143b1dc50(void)

undefined4 FUN_143b1dc50(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x54);
}



// FUNCTION 143b1dc60 FUN_143b1dc60 body=22 status=ok
// SIG undefined FUN_143b1dc60(void)

void FUN_143b1dc60(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x60);
  return;
}



// FUNCTION 143b1dc80 FUN_143b1dc80 body=46 status=ok
// SIG undefined FUN_143b1dc80(void)

undefined4 FUN_143b1dc80(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_143b093b0(param_1,param_2,param_3);
  return param_2;
}



// FUNCTION 143b1dcb0 FUN_143b1dcb0 body=45 status=ok
// SIG undefined FUN_143b1dcb0(void)

void FUN_143b1dcb0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_143b318e0(param_1,param_2,0,param_3);
  return;
}



// FUNCTION 143b1dce0 FUN_143b1dce0 body=122 status=ok
// SIG undefined FUN_143b1dce0(void)

void FUN_143b1dce0(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if (*(ulonglong *)(param_1 + 0x148) < param_2) {
    if (*(longlong *)(param_1 + 0x140) != param_1) {
      FUN_143aa79f0(*(undefined8 *)(param_1 + 0x140));
    }
    uVar1 = FUN_143aa7a40(param_2 << 2);
    *(undefined8 *)(param_1 + 0x140) = uVar1;
    *(ulonglong *)(param_1 + 0x148) = param_2;
  }
  return;
}



// FUNCTION 143b1dd60 FUN_143b1dd60 body=78 status=ok
// SIG undefined FUN_143b1dd60(void)

void FUN_143b1dd60(longlong param_1,undefined8 param_2)

{
  FUN_143b12150(param_1 + 8,param_2);
  (**(code **)(*(longlong *)(param_1 + 8) + 0xd8))(param_1 + 8);
  return;
}



// FUNCTION 143b1ddb0 ~collate<> body=53 status=ok
// SIG undefined ~collate<>(void)

/* Library Function - Multiple Matches With Same Base Name
    protected: virtual __cdecl std::collate<char>::~collate<char>(void) __ptr64
    protected: virtual __cdecl std::collate<unsigned short>::~collate<unsigned short>(void) __ptr64
    protected: virtual __cdecl std::collate<wchar_t>::~collate<wchar_t>(void) __ptr64
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

void ~collate<>(undefined8 *param_1)

{
  *param_1 = icu_53::BytesDictionaryMatcher::vftable;
  FUN_143ac56d0(param_1[3]);
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143b1ddf0 ~RtAudioError body=21 status=ok
// SIG undefined ~RtAudioError(void)

void RtAudioError::~RtAudioError(undefined8 *param_1)

{
  *param_1 = icu_53::DictionaryMatcher::vftable;
  return;
}



// FUNCTION 143b1de10 ~collate<> body=53 status=ok
// SIG undefined ~collate<>(void)

/* Library Function - Multiple Matches With Same Base Name
    protected: virtual __cdecl std::collate<char>::~collate<char>(void) __ptr64
    protected: virtual __cdecl std::collate<unsigned short>::~collate<unsigned short>(void) __ptr64
    protected: virtual __cdecl std::collate<wchar_t>::~collate<wchar_t>(void) __ptr64
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

void ~collate<>(undefined8 *param_1)

{
  *param_1 = icu_53::UCharsDictionaryMatcher::vftable;
  FUN_143ac56d0(param_1[2]);
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143b1de50 FUN_143b1de50 body=74 status=ok
// SIG undefined FUN_143b1de50(void)

void FUN_143b1de50(longlong param_1,int param_2)

{
  undefined4 local_res10;
  
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  local_res10 = param_2;
  if (param_2 < 0) {
    local_res10 = param_2 + 0x100;
  }
  FUN_143b27bc0(param_1,*(undefined8 *)(param_1 + 8),local_res10);
  return;
}



// FUNCTION 143b1dea0 FUN_143b1dea0 body=54 status=ok
// SIG undefined FUN_143b1dea0(void)

void FUN_143b1dea0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  FUN_143b31f50(param_1,*(undefined8 *)(param_1 + 8),param_2);
  return;
}



// FUNCTION 143b1dee0 FUN_143b1dee0 body=11 status=ok
// SIG undefined FUN_143b1dee0(void)

undefined8 FUN_143b1dee0(void)

{
  return 1;
}



// FUNCTION 143b1def0 FUN_143b1def0 body=116 status=ok
// SIG undefined FUN_143b1def0(void)

undefined4 FUN_143b1def0(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  undefined4 local_14;
  
  uVar1 = **(ushort **)(param_1 + 0x10);
  puVar2 = *(ushort **)(param_1 + 0x10) + 1;
  if ((uVar1 & 0x8000) == 0) {
    local_14 = FUN_143b1e280(puVar2,uVar1);
  }
  else {
    local_14 = FUN_143b1e310(puVar2,uVar1 & 0x7fff);
  }
  return local_14;
}



// FUNCTION 143b1df70 FUN_143b1df70 body=400 status=ok
// SIG undefined FUN_143b1df70(void)

int FUN_143b1df70(longlong param_1,undefined8 param_2,int param_3,longlong param_4,int *param_5,
                 int param_6,longlong param_7)

{
  int iVar1;
  undefined4 uVar2;
  int local_44;
  int local_40;
  undefined1 local_28 [40];
  
  FUN_143b10f90(local_28,*(undefined8 *)(param_1 + 8));
  iVar1 = FUN_143b07920(param_2);
  if (iVar1 < 0) {
    FUN_143b27580(local_28);
    return 0;
  }
  uVar2 = FUN_143b1e390(param_1,iVar1);
  local_40 = FUN_143b1de50(local_28,uVar2);
  local_44 = 1;
  *param_5 = 0;
  do {
    if (local_40 < 2) {
      if (local_40 == 0) goto LAB_143b1e0e5;
    }
    else {
      if (*param_5 < param_6) {
        if (param_7 != 0) {
          uVar2 = FUN_143b11520(local_28);
          *(undefined4 *)(param_7 + (longlong)*param_5 * 4) = uVar2;
        }
        *(int *)(param_4 + (longlong)*param_5 * 4) = local_44;
        *param_5 = *param_5 + 1;
      }
      if (local_40 == 2) {
LAB_143b1e0e5:
        FUN_143b27580(local_28);
        return local_44;
      }
    }
    if ((param_3 <= local_44) || (iVar1 = FUN_143b07920(param_2), iVar1 < 0)) goto LAB_143b1e0e5;
    local_44 = local_44 + 1;
    uVar2 = FUN_143b1e390(param_1,iVar1);
    local_40 = FUN_143b27ab0(local_28,uVar2);
  } while( true );
}



// FUNCTION 143b1e100 FUN_143b1e100 body=376 status=ok
// SIG undefined FUN_143b1e100(void)

int FUN_143b1e100(longlong param_1,undefined8 param_2,int param_3,longlong param_4,int *param_5,
                 int param_6,longlong param_7)

{
  int iVar1;
  undefined4 uVar2;
  int local_44;
  int local_40;
  undefined1 local_28 [40];
  
  FUN_143b10f90(local_28,*(undefined8 *)(param_1 + 8));
  iVar1 = FUN_143b07920(param_2);
  if (iVar1 < 0) {
    FUN_143b27580(local_28);
    return 0;
  }
  local_40 = FUN_143b1dea0(local_28,iVar1);
  local_44 = 1;
  *param_5 = 0;
  do {
    if (local_40 < 2) {
      if (local_40 == 0) goto LAB_143b1e25d;
    }
    else {
      if (*param_5 < param_6) {
        if (param_7 != 0) {
          uVar2 = FUN_143b1def0(local_28);
          *(undefined4 *)(param_7 + (longlong)*param_5 * 4) = uVar2;
        }
        *(int *)(param_4 + (longlong)*param_5 * 4) = local_44;
        *param_5 = *param_5 + 1;
      }
      if (local_40 == 2) {
LAB_143b1e25d:
        FUN_143b27580(local_28);
        return local_44;
      }
    }
    if ((param_3 <= local_44) || (iVar1 = FUN_143b07920(param_2), iVar1 < 0)) goto LAB_143b1e25d;
    local_44 = local_44 + 1;
    local_40 = FUN_143b31dc0(local_28,iVar1);
  } while( true );
}



// FUNCTION 143b1e280 FUN_143b1e280 body=131 status=ok
// SIG undefined FUN_143b1e280(void)

uint FUN_143b1e280(ushort *param_1,uint param_2)

{
  uint local_18;
  
  if ((int)param_2 < 0x4040) {
    local_18 = ((int)param_2 >> 6) - 1;
  }
  else if ((int)param_2 < 0x7fc0) {
    local_18 = ((param_2 & 0x7fc0) - 0x4040) * 0x400 | (uint)*param_1;
  }
  else {
    local_18 = CONCAT22(*param_1,param_1[1]);
  }
  return local_18;
}



// FUNCTION 143b1e310 FUN_143b1e310 body=121 status=ok
// SIG undefined FUN_143b1e310(void)

uint FUN_143b1e310(ushort *param_1,uint param_2)

{
  uint local_18;
  
  local_18 = param_2;
  if (0x3fff < (int)param_2) {
    if ((int)param_2 < 0x7fff) {
      local_18 = (param_2 - 0x4000) * 0x10000 | (uint)*param_1;
    }
    else {
      local_18 = CONCAT22(*param_1,param_1[1]);
    }
  }
  return local_18;
}



// FUNCTION 143b1e390 FUN_143b1e390 body=127 status=ok
// SIG undefined FUN_143b1e390(void)

int FUN_143b1e390(longlong param_1,int param_2)

{
  if ((*(uint *)(param_1 + 0x10) & 0x7f000000) == 0x1000000) {
    if (param_2 == 0x200d) {
      param_2 = 0xff;
    }
    else if (param_2 == 0x200c) {
      param_2 = 0xfe;
    }
    else {
      param_2 = param_2 - (*(uint *)(param_1 + 0x10) & 0x1fffff);
      if ((param_2 < 0) || (0xfd < param_2)) {
        param_2 = -1;
      }
    }
  }
  return param_2;
}



// FUNCTION 143b1e420 FID_conflict:_InternalDeleteHelper<Concurrency::details::WorkQueue> body=73 status=ok
// SIG undefined FID_conflict:_InternalDeleteHelper<Concurrency::details::WorkQueue>(void)

/* Library Function - Multiple Matches With Different Base Names
    void __cdecl Concurrency::details::_InternalDeleteHelper<class
   Concurrency::details::WorkQueue>(class Concurrency::details::WorkQueue * __ptr64)
    protected: virtual void __cdecl Concurrency::details::SchedulerProxy::DeleteThis(void) __ptr64
    public: static void __cdecl Concurrency::details::Mailbox<class
   Concurrency::details::InternalContextBase>::Segment::StaticDelete(struct
   Concurrency::details::Mailbox<class Concurrency::details::InternalContextBase>::Segment *
   __ptr64)
    public: static void __cdecl Concurrency::details::Mailbox<class
   Concurrency::details::_UnrealizedChore>::Segment::StaticDelete(struct
   Concurrency::details::Mailbox<class Concurrency::details::_UnrealizedChore>::Segment * __ptr64)
   
   Libraries: Visual Studio 2010 Debug, Visual Studio 2012 Debug */

void FID_conflict__InternalDeleteHelper<Concurrency::details::WorkQueue>(longlong param_1)

{
  if (param_1 != 0) {
    FID_conflict__scalar_deleting_destructor_(param_1,1);
  }
  return;
}



// FUNCTION 143b1e470 FUN_143b1e470 body=86 status=ok
// SIG undefined FUN_143b1e470(void)

undefined8 * FUN_143b1e470(undefined8 *param_1,longlong param_2)

{
  FUN_143a8abc0(param_1,param_2);
  *param_1 = icu_53::ParsePosition::vftable;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  return param_1;
}



// FUNCTION 143b1e4d0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::ParsePosition::vftable;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143b1e500 FUN_143b1e500 body=19 status=ok
// SIG undefined FUN_143b1e500(void)

void FUN_143b1e500(void)

{
  FUN_143b1e520();
  return;
}



// FUNCTION 143b1e520 FUN_143b1e520 body=8 status=ok
// SIG undefined FUN_143b1e520(void)

undefined * FUN_143b1e520(void)

{
  return &DAT_146bc7d40;
}



// FUNCTION 143b1e530 FUN_143b1e530 body=161 status=ok
// SIG undefined FUN_143b1e530(void)

void FUN_143b1e530(longlong param_1,code *param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    iVar2 = FUN_143a910d0(param_1);
    if ((iVar2 == 2) || (cVar1 = FUN_143ab2360(param_1), cVar1 == '\0')) {
      cVar1 = FUN_143a8b0e0(*(undefined4 *)(param_1 + 4));
      if (cVar1 != '\0') {
        *param_4 = *(undefined4 *)(param_1 + 4);
      }
    }
    else {
      (*param_2)(param_3,param_4);
      *(undefined4 *)(param_1 + 4) = *param_4;
      FUN_143ab2340(param_1);
    }
  }
  return;
}



// FUNCTION 143b1e5e0 TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_> body=39 status=ok
// SIG undefined TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>(void)

undefined8
UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
          (undefined8 param_1,undefined8 param_2)

{
  FUN_143b1e610(param_1,param_2);
  return param_1;
}



// FUNCTION 143b1e610 FUN_143b1e610 body=29 status=ok
// SIG undefined FUN_143b1e610(void)

undefined8 * FUN_143b1e610(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 143b1e630 FUN_143b1e630 body=72 status=ok
// SIG undefined FUN_143b1e630(void)

SchedulerResourceManagement *
FUN_143b1e630(SchedulerResourceManagement *param_1,SchedulerBase *param_2,
             SchedulerResourceManagement param_3)

{
  Concurrency::details::SchedulerResourceManagement::SchedulerResourceManagement(param_1,param_2);
  *(undefined ***)param_1 = icu_53::ComposeNormalizer2::vftable;
  param_1[0x10] = param_3;
  return param_1;
}



// FUNCTION 143b1e680 FUN_143b1e680 body=54 status=ok
// SIG undefined FUN_143b1e680(void)

SchedulerResourceManagement *
FUN_143b1e680(SchedulerResourceManagement *param_1,SchedulerBase *param_2)

{
  Concurrency::details::SchedulerResourceManagement::SchedulerResourceManagement(param_1,param_2);
  *(undefined ***)param_1 = icu_53::DecomposeNormalizer2::vftable;
  return param_1;
}



// FUNCTION 143b1e6c0 FUN_143b1e6c0 body=54 status=ok
// SIG undefined FUN_143b1e6c0(void)

SchedulerResourceManagement *
FUN_143b1e6c0(SchedulerResourceManagement *param_1,SchedulerBase *param_2)

{
  Concurrency::details::SchedulerResourceManagement::SchedulerResourceManagement(param_1,param_2);
  *(undefined ***)param_1 = icu_53::FCDNormalizer2::vftable;
  return param_1;
}



// FUNCTION 143b1e700 FUN_143b1e700 body=44 status=ok
// SIG undefined FUN_143b1e700(void)

undefined8 * FUN_143b1e700(undefined8 *param_1)

{
  FUN_143b1e7d0(param_1);
  *param_1 = icu_53::NoopNormalizer2::vftable;
  return param_1;
}



// FUNCTION 143b1e730 FUN_143b1e730 body=152 status=ok
// SIG undefined FUN_143b1e730(void)

longlong FUN_143b1e730(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_143b1e800(param_1);
  FUN_143b1e630(param_1 + 0x1d0,param_1,0,param_4,uVar1);
  FUN_143b1e680(param_1 + 0x1e8,param_1);
  FUN_143b1e6c0(param_1 + 0x1f8,param_1);
  FUN_143b1e630(param_1 + 0x208,param_1,1);
  return param_1;
}



// FUNCTION 143b1e7d0 FUN_143b1e7d0 body=44 status=ok
// SIG undefined FUN_143b1e7d0(void)

undefined8 * FUN_143b1e7d0(undefined8 *param_1)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::Normalizer2::vftable;
  return param_1;
}



// FUNCTION 143b1e800 FUN_143b1e800 body=91 status=ok
// SIG undefined FUN_143b1e800(void)

undefined8 * FUN_143b1e800(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[4] = 0;
  param_1[0x39] = 0;
  FUN_143a9a9f0(param_1 + 0x38);
  return param_1;
}



// FUNCTION 143b1e860 SchedulerResourceManagement body=63 status=ok
// SIG undefined SchedulerResourceManagement(SchedulerResourceManagement * this, SchedulerBase * param_1)

/* Library Function - Single Match
    public: __cdecl
   Concurrency::details::SchedulerResourceManagement::SchedulerResourceManagement(class
   Concurrency::details::SchedulerBase * __ptr64) __ptr64
   
   Library: Visual Studio 2010 Debug */

SchedulerResourceManagement * __thiscall
Concurrency::details::SchedulerResourceManagement::SchedulerResourceManagement
          (SchedulerResourceManagement *this,SchedulerBase *param_1)

{
  FUN_143b1e7d0(this);
  *(undefined ***)this = icu_53::Normalizer2WithImpl::vftable;
  *(SchedulerBase **)(this + 8) = param_1;
  return this;
}



// FUNCTION 143b1e8a0 FUN_143b1e8a0 body=86 status=ok
// SIG undefined FUN_143b1e8a0(void)

void FUN_143b1e8a0(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_143b1eb90(*param_1,1);
  }
  FUN_143b1b790(param_1);
  return;
}



// FUNCTION 143b1e900 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::ComposeNormalizer2::vftable;
  ~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143b1e930 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::DecomposeNormalizer2::vftable;
  ~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143b1e960 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::FCDNormalizer2::vftable;
  ~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143b1e990 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::NoopNormalizer2::vftable;
  ~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143b1e9c0 FUN_143b1e9c0 body=103 status=ok
// SIG undefined FUN_143b1e9c0(void)

void FUN_143b1e9c0(longlong param_1)

{
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1 + 0x208);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1 + 0x1f8);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1 + 0x1e8);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1 + 0x1d0);
  FUN_143b21110(param_1);
  return;
}



// FUNCTION 143b1ea30 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::Normalizer2::vftable;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143b1ea60 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::Normalizer2WithImpl::vftable;
  ~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143b1ea90 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b1ead0 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b1eb10 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b1eb50 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b1eb90 FUN_143b1eb90 body=54 status=ok
// SIG undefined FUN_143b1eb90(void)

undefined8 FUN_143b1eb90(undefined8 param_1,uint param_2)

{
  FUN_143b1e9c0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b1ebd0 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b1ec10 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b1ec50 FUN_143b1ec50 body=93 status=ok
// SIG undefined FUN_143b1ec50(void)

longlong FUN_143b1ec50(undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  char cVar1;
  
  cVar1 = FUN_143a8b110(*param_4);
  if (cVar1 != '\0') {
    if (param_2 == param_3) {
      *param_4 = 1;
    }
    else {
      FUN_143a8e070(param_2,param_3);
    }
  }
  return param_2;
}



// FUNCTION 143b1ecb0 FUN_143b1ecb0 body=62 status=ok
// SIG undefined FUN_143b1ecb0(void)

void FUN_143b1ecb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143b201d0(param_1,param_2,param_3,0,param_4);
  return;
}



// FUNCTION 143b1ecf0 FUN_143b1ecf0 body=20 status=ok
// SIG undefined FUN_143b1ecf0(void)

undefined8 FUN_143b1ecf0(void)

{
  return 0xffffffff;
}



// FUNCTION 143b1ed10 FUN_143b1ed10 body=46 status=ok
// SIG undefined FUN_143b1ed10(void)

void FUN_143b1ed10(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_143b229e0(*(undefined8 *)(param_1 + 8),param_2,param_3);
  return;
}



// FUNCTION 143b1ed40 FUN_143b1ed40 body=303 status=ok
// SIG undefined FUN_143b1ed40(void)

undefined8 FUN_143b1ed40(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_48 [8];
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    local_40 = FUN_143a8d310(0x220);
    if (local_40 == 0) {
      local_38 = 0;
    }
    else {
      local_38 = FUN_143b1e730(local_40);
    }
    local_28 = local_38;
    UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
    ::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
              (local_48,local_38);
    cVar1 = FUN_143b1fd90(local_48);
    if (cVar1 == '\0') {
      uVar2 = FUN_143a8b510(local_48);
      FUN_143b25460(uVar2,param_1,param_2,param_3);
      cVar1 = FUN_143a8b110(*param_3);
      if (cVar1 == '\0') {
        local_30 = 0;
      }
      else {
        local_30 = FUN_143b20430(local_48);
      }
      local_18 = local_30;
      FUN_143b1e8a0(local_48);
      local_20 = local_18;
    }
    else {
      *param_3 = 7;
      local_20 = 0;
      FUN_143b1e8a0(local_48);
    }
  }
  else {
    local_20 = 0;
  }
  return local_20;
}



// FUNCTION 143b1ee70 FUN_143b1ee70 body=93 status=ok
// SIG undefined FUN_143b1ee70(void)

ulonglong FUN_143b1ee70(longlong param_1,ushort param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined1 local_res10;
  
  if (param_2 < 0xfe00) {
    uVar1 = param_2;
    if ((param_2 < *(ushort *)(param_1 + 0x18)) ||
       (uVar1 = *(ushort *)(param_1 + 0x1a), uVar1 <= param_2)) {
      uVar2 = (ulonglong)uVar1 & 0xffffffffffffff00;
    }
    else {
      uVar2 = FUN_143b1eed0(param_1,param_2);
    }
  }
  else {
    local_res10 = (byte)param_2;
    uVar2 = (ulonglong)local_res10;
  }
  return uVar2;
}



// FUNCTION 143b1eed0 FUN_143b1eed0 body=69 status=ok
// SIG undefined FUN_143b1eed0(void)

undefined1 FUN_143b1eed0(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)FUN_143b1f1a0(param_1,param_2);
  if ((*puVar2 & 0x80) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (undefined1)puVar2[-1];
  }
  return uVar1;
}



// FUNCTION 143b1ef20 FUN_143b1ef20 body=12 status=ok
// SIG undefined FUN_143b1ef20(void)

undefined1 FUN_143b1ef20(void)

{
  return 0;
}



// FUNCTION 143b1ef30 FUN_143b1ef30 body=53 status=ok
// SIG undefined FUN_143b1ef30(void)

void FUN_143b1ef30(longlong param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_143b109f0(*(undefined8 *)(param_1 + 8),param_2);
  FUN_143b1ee70(*(undefined8 *)(param_1 + 8),uVar1);
  return;
}



// FUNCTION 143b1ef70 FUN_143b1ef70 body=17 status=ok
// SIG undefined FUN_143b1ef70(void)

undefined1 FUN_143b1ef70(void)

{
  return 0;
}



// FUNCTION 143b1ef90 FUN_143b1ef90 body=154 status=ok
// SIG undefined FUN_143b1ef90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b1ef90(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28 [2];
  undefined1 *local_20;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  local_20 = (undefined1 *)FUN_143b24190(*(undefined8 *)(param_1 + 8),param_2,local_18,local_28);
  if (local_20 == (undefined1 *)0x0) {
    uVar1 = 0;
  }
  else {
    if (local_20 == local_18) {
      FUN_143ab21b0(param_3,local_18,local_28[0]);
    }
    else {
      FUN_143a90d80(param_3,0,local_20,local_28[0]);
    }
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143b1f030 FUN_143b1f030 body=105 status=ok
// SIG undefined FUN_143b1f030(void)

ulonglong FUN_143b1f030(longlong param_1,int param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if (param_2 < 0) {
    uVar2 = 0;
  }
  else if (param_2 < 0x180) {
    uVar2 = (ulonglong)*(byte *)(param_1 + 0x40 + (longlong)param_2);
  }
  else {
    if ((param_2 < 0x10000) && (cVar1 = FUN_143b205d0(param_1,param_2), cVar1 == '\0')) {
      return 0;
    }
    uVar2 = FUN_143b24350(param_1,param_2);
  }
  return uVar2;
}



// FUNCTION 143b1f0a0 FUN_143b1f0a0 body=89 status=ok
// SIG undefined FUN_143b1f0a0(void)

longlong FUN_143b1f0a0(undefined8 param_1)

{
  longlong local_18;
  
  FUN_143b1e530(&DAT_146bc7d50,FUN_143b1f870,&DAT_145d0bb20,param_1);
  if (DAT_146bc7d70 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = DAT_146bc7d70 + 0x1f8;
  }
  return local_18;
}



// FUNCTION 143b1f100 FUN_143b1f100 body=156 status=ok
// SIG undefined FUN_143b1f100(void)

undefined8 FUN_143b1f100(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    if (param_1 == 2) {
      uVar2 = FUN_143b1f2c0(param_2);
    }
    else if (param_1 == 3) {
      uVar2 = FUN_143b1f440(param_2);
    }
    else if (param_1 == 4) {
      uVar2 = FUN_143b1f240(param_2);
    }
    else if (param_1 == 5) {
      uVar2 = FUN_143b1f380(param_2);
    }
    else if (param_1 == 6) {
      uVar2 = FUN_143b1f0a0(param_2);
    }
    else {
      uVar2 = FUN_143b1f4a0(param_2);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143b1f1a0 FUN_143b1f1a0 body=29 status=ok
// SIG undefined FUN_143b1f1a0(void)

longlong FUN_143b1f1a0(longlong param_1,ushort param_2)

{
  return *(longlong *)(param_1 + 0x30) + (ulonglong)param_2 * 2;
}



// FUNCTION 143b1f1c0 FUN_143b1f1c0 body=83 status=ok
// SIG undefined FUN_143b1f1c0(void)

longlong FUN_143b1f1c0(undefined8 param_1)

{
  longlong local_18;
  
  FUN_143b1e530(&DAT_146bc7d50,FUN_143b1f870,&DAT_145d0bb20,param_1);
  if (DAT_146bc7d70 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = DAT_146bc7d70;
  }
  return local_18;
}



// FUNCTION 143b1f220 FUN_143b1f220 body=24 status=ok
// SIG undefined FUN_143b1f220(void)

void FUN_143b1f220(undefined8 param_1)

{
  FUN_143b1f240(param_1);
  return;
}



// FUNCTION 143b1f240 FUN_143b1f240 body=89 status=ok
// SIG undefined FUN_143b1f240(void)

longlong FUN_143b1f240(undefined8 param_1)

{
  longlong local_18;
  
  FUN_143b1e530(&DAT_146bc7d50,FUN_143b1f870,&DAT_145d0bb20,param_1);
  if (DAT_146bc7d70 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = DAT_146bc7d70 + 0x1d0;
  }
  return local_18;
}



// FUNCTION 143b1f2a0 FUN_143b1f2a0 body=24 status=ok
// SIG undefined FUN_143b1f2a0(void)

void FUN_143b1f2a0(undefined8 param_1)

{
  FUN_143b1f2c0(param_1);
  return;
}



// FUNCTION 143b1f2c0 FUN_143b1f2c0 body=89 status=ok
// SIG undefined FUN_143b1f2c0(void)

longlong FUN_143b1f2c0(undefined8 param_1)

{
  longlong local_18;
  
  FUN_143b1e530(&DAT_146bc7d50,FUN_143b1f870,&DAT_145d0bb20,param_1);
  if (DAT_146bc7d70 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = DAT_146bc7d70 + 0x1e8;
  }
  return local_18;
}



// FUNCTION 143b1f320 FUN_143b1f320 body=83 status=ok
// SIG undefined FUN_143b1f320(void)

longlong FUN_143b1f320(undefined8 param_1)

{
  longlong local_18;
  
  FUN_143b1e530(&DAT_146bc7d58,FUN_143b1f870,&DAT_145d0bb24,param_1);
  if (DAT_146bc7d78 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = DAT_146bc7d78;
  }
  return local_18;
}



// FUNCTION 143b1f380 FUN_143b1f380 body=89 status=ok
// SIG undefined FUN_143b1f380(void)

longlong FUN_143b1f380(undefined8 param_1)

{
  longlong local_18;
  
  FUN_143b1e530(&DAT_146bc7d58,FUN_143b1f870,&DAT_145d0bb24,param_1);
  if (DAT_146bc7d78 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = DAT_146bc7d78 + 0x1d0;
  }
  return local_18;
}



// FUNCTION 143b1f3e0 FUN_143b1f3e0 body=83 status=ok
// SIG undefined FUN_143b1f3e0(void)

longlong FUN_143b1f3e0(undefined8 param_1)

{
  longlong local_18;
  
  FUN_143b1e530(&DAT_146bc7d60,FUN_143b1f870,"nfkc_cf",param_1);
  if (DAT_146bc7d80 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = DAT_146bc7d80;
  }
  return local_18;
}



// FUNCTION 143b1f440 FUN_143b1f440 body=89 status=ok
// SIG undefined FUN_143b1f440(void)

longlong FUN_143b1f440(undefined8 param_1)

{
  longlong local_18;
  
  FUN_143b1e530(&DAT_146bc7d58,FUN_143b1f870,&DAT_145d0bb24,param_1);
  if (DAT_146bc7d78 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = DAT_146bc7d78 + 0x1e8;
  }
  return local_18;
}



// FUNCTION 143b1f4a0 FUN_143b1f4a0 body=52 status=ok
// SIG undefined FUN_143b1f4a0(void)

undefined8 FUN_143b1f4a0(undefined8 param_1)

{
  FUN_143b1e530(&DAT_146bc7d68,FUN_143b1f870,&DAT_145d0bb38,param_1);
  return DAT_146bc7d88;
}



// FUNCTION 143b1f4e0 FUN_143b1f4e0 body=53 status=ok
// SIG undefined FUN_143b1f4e0(void)

void FUN_143b1f4e0(longlong param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_143b109f0(*(undefined8 *)(param_1 + 8),param_2);
  FUN_143b109a0(*(undefined8 *)(param_1 + 8),uVar1);
  return;
}



// FUNCTION 143b1f520 FUN_143b1f520 body=82 status=ok
// SIG undefined FUN_143b1f520(void)

bool FUN_143b1f520(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined2 uVar2;
  
  uVar2 = FUN_143b109f0(*(undefined8 *)(param_1 + 8),param_2);
  cVar1 = FUN_143b1f9b0(*(undefined8 *)(param_1 + 8),uVar2);
  return cVar1 != '\0';
}



// FUNCTION 143b1f580 FUN_143b1f580 body=15 status=ok
// SIG undefined FUN_143b1f580(void)

undefined8 FUN_143b1f580(void)

{
  return 1;
}



// FUNCTION 143b1f590 FUN_143b1f590 body=172 status=ok
// SIG undefined FUN_143b1f590(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b1f590(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68 [2];
  undefined1 *local_60;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_60 = (undefined1 *)FUN_143b24580(*(undefined8 *)(param_1 + 8),param_2,local_58,local_68);
  if (local_60 == (undefined1 *)0x0) {
    uVar1 = 0;
  }
  else {
    if (local_60 == local_58) {
      FUN_143ab21b0(param_3,local_58,local_68[0]);
    }
    else {
      FUN_143a90d80(param_3,0,local_60,local_68[0]);
    }
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143b1f640 FUN_143b1f640 body=49 status=ok
// SIG undefined FUN_143b1f640(void)

void FUN_143b1f640(longlong param_1,undefined4 param_2)

{
  FUN_143b249a0(*(undefined8 *)(param_1 + 8),param_2,*(undefined1 *)(param_1 + 0x10),0);
  return;
}



// FUNCTION 143b1f680 FUN_143b1f680 body=39 status=ok
// SIG undefined FUN_143b1f680(void)

void FUN_143b1f680(longlong param_1,undefined4 param_2)

{
  FUN_143b24c90(*(undefined8 *)(param_1 + 8),param_2,0);
  return;
}



// FUNCTION 143b1f6b0 FUN_143b1f6b0 body=36 status=ok
// SIG undefined FUN_143b1f6b0(void)

void FUN_143b1f6b0(longlong param_1,undefined4 param_2)

{
  FUN_143b1f7d0(*(undefined8 *)(param_1 + 8),param_2);
  return;
}



// FUNCTION 143b1f6e0 FUN_143b1f6e0 body=36 status=ok
// SIG undefined FUN_143b1f6e0(void)

void FUN_143b1f6e0(longlong param_1,undefined4 param_2)

{
  FUN_143b1f770(*(undefined8 *)(param_1 + 8),param_2);
  return;
}



// FUNCTION 143b1f710 FUN_143b1f710 body=39 status=ok
// SIG undefined FUN_143b1f710(void)

void FUN_143b1f710(longlong param_1,undefined4 param_2)

{
  FUN_143b24c90(*(undefined8 *)(param_1 + 8),param_2,1);
  return;
}



// FUNCTION 143b1f740 FUN_143b1f740 body=36 status=ok
// SIG undefined FUN_143b1f740(void)

void FUN_143b1f740(longlong param_1,undefined4 param_2)

{
  FUN_143b1f820(*(undefined8 *)(param_1 + 8),param_2);
  return;
}



// FUNCTION 143b1f770 FUN_143b1f770 body=88 status=ok
// SIG undefined FUN_143b1f770(void)

undefined1 FUN_143b1f770(longlong param_1,int param_2)

{
  char cVar1;
  undefined2 uVar2;
  
  if (*(int *)(param_1 + 0x10) <= param_2) {
    uVar2 = FUN_143b109f0(param_1,param_2);
    cVar1 = FUN_143b24b10(param_1,param_2,uVar2);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143b1f7d0 FUN_143b1f7d0 body=78 status=ok
// SIG undefined FUN_143b1f7d0(void)

undefined1 FUN_143b1f7d0(undefined8 param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined1 local_18;
  
  uVar1 = FUN_143b1f030(param_1,param_2);
  if ((uVar1 < 2) || ((uVar1 & 0xff) == 0)) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143b1f820 FUN_143b1f820 body=69 status=ok
// SIG undefined FUN_143b1f820(void)

undefined1 FUN_143b1f820(undefined8 param_1,int param_2)

{
  ushort uVar1;
  
  if ((0x2ff < param_2) && (uVar1 = FUN_143b1f030(param_1,param_2), 0xff < uVar1)) {
    return 0;
  }
  return 1;
}



// FUNCTION 143b1f870 FUN_143b1f870 body=271 status=ok
// SIG undefined FUN_143b1f870(void)

void FUN_143b1f870(char *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_10;
  
  iVar1 = _guard_xfg_dispatch_icall_nop(param_1,"nfc");
  if (iVar1 == 0) {
    DAT_146bc7d70 = FUN_143b1ed40(0,&DAT_145d0bb20,param_2);
  }
  else {
    iVar1 = _guard_xfg_dispatch_icall_nop(param_1,"nfkc");
    if (iVar1 == 0) {
      DAT_146bc7d78 = FUN_143b1ed40(0,&DAT_145d0bb24,param_2);
    }
    else {
      iVar1 = _guard_xfg_dispatch_icall_nop(param_1,"nfkc_cf");
      if (iVar1 == 0) {
        DAT_146bc7d80 = FUN_143b1ed40(0,"nfkc_cf",param_2);
      }
      else {
        iVar1 = _guard_xfg_dispatch_icall_nop(param_1,"noop");
        if (iVar1 == 0) {
          lVar2 = FUN_143a8d310(8);
          if (lVar2 == 0) {
            local_10 = 0;
          }
          else {
            local_10 = FUN_143b1e700(lVar2);
          }
          DAT_146bc7d88 = local_10;
        }
      }
    }
  }
  FUN_143aa77b0(8,FUN_143b20e20);
  return;
}



// FUNCTION 143b1f980 FUN_143b1f980 body=45 status=ok
// SIG undefined FUN_143b1f980(void)

void FUN_143b1f980(undefined8 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_143b109f0(param_1,param_2);
  FUN_143b1fa00(param_1,uVar1);
  return;
}



// FUNCTION 143b1f9b0 FUN_143b1f9b0 body=69 status=ok
// SIG undefined FUN_143b1f9b0(void)

undefined1 FUN_143b1f9b0(longlong param_1,ushort param_2)

{
  undefined1 local_18;
  
  if ((param_2 < *(ushort *)(param_1 + 0x14)) || (*(ushort *)(param_1 + 0x1c) <= param_2)) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143b1fa00 FUN_143b1fa00 body=93 status=ok
// SIG undefined FUN_143b1fa00(void)

undefined1 FUN_143b1fa00(longlong param_1,ushort param_2)

{
  undefined1 local_18;
  
  if (((param_2 < *(ushort *)(param_1 + 0x14)) || (param_2 == 0xff00)) ||
     ((*(ushort *)(param_1 + 0x1c) <= param_2 && (param_2 < 0xfe01)))) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143b1fa60 FUN_143b1fa60 body=57 status=ok
// SIG undefined FUN_143b1fa60(void)

bool FUN_143b1fa60(undefined8 param_1,undefined4 param_2)

{
  ushort uVar1;
  
  uVar1 = FUN_143b1f030(param_1,param_2);
  return uVar1 < 2;
}



// FUNCTION 143b1faa0 FUN_143b1faa0 body=49 status=ok
// SIG undefined FUN_143b1faa0(void)

void FUN_143b1faa0(longlong param_1,undefined4 param_2)

{
  FUN_143b249a0(*(undefined8 *)(param_1 + 8),param_2,*(undefined1 *)(param_1 + 0x10),1);
  return;
}



// FUNCTION 143b1fae0 FUN_143b1fae0 body=36 status=ok
// SIG undefined FUN_143b1fae0(void)

void FUN_143b1fae0(longlong param_1,undefined4 param_2)

{
  FUN_143b1f980(*(undefined8 *)(param_1 + 8),param_2);
  return;
}



// FUNCTION 143b1fb10 FUN_143b1fb10 body=36 status=ok
// SIG undefined FUN_143b1fb10(void)

void FUN_143b1fb10(longlong param_1,undefined4 param_2)

{
  FUN_143b1fa60(*(undefined8 *)(param_1 + 8),param_2);
  return;
}



// FUNCTION 143b1fb40 FUN_143b1fb40 body=383 status=ok
// SIG undefined FUN_143b1fb40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143b1fb40(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 *local_b0;
  undefined4 *local_a8;
  byte local_98;
  byte local_97;
  longlong local_90;
  undefined8 local_88;
  undefined1 local_78 [64];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_88 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    local_90 = FUN_143a8fe10(param_2);
    if (local_90 == 0) {
      *param_3 = 1;
      uVar3 = (ulonglong)param_3 & 0xffffffffffffff00;
    }
    else {
      FUN_143a8ac30(local_38);
      FUN_143b108e0(local_78,*(undefined8 *)(param_1 + 8),local_38);
      cVar1 = FUN_143b24df0(local_78,5,param_3);
      if (cVar1 == '\0') {
        local_98 = 0;
        FUN_143b10950(local_78);
        FUN_143a8dc60(local_38);
        uVar3 = (ulonglong)local_98;
      }
      else {
        iVar2 = FUN_143a904f0(param_2);
        local_b0 = local_78;
        local_b8 = 0;
        local_a8 = param_3;
        local_97 = FUN_143b21f00(*(undefined8 *)(param_1 + 8),local_90,
                                 local_90 + (longlong)iVar2 * 2,*(undefined1 *)(param_1 + 0x10));
        FUN_143b10950(local_78);
        FUN_143a8dc60(local_38);
        uVar3 = (ulonglong)local_97;
      }
    }
  }
  else {
    uVar3 = (ulonglong)(uint3)(cVar1 >> 7) << 8;
  }
  return uVar3;
}



// FUNCTION 143b1fcc0 FUN_143b1fcc0 body=18 status=ok
// SIG undefined FUN_143b1fcc0(void)

undefined1 FUN_143b1fcc0(void)

{
  return 1;
}



// FUNCTION 143b1fce0 FUN_143b1fce0 body=169 status=ok
// SIG undefined FUN_143b1fce0(void)

ulonglong FUN_143b1fce0(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  cVar2 = FUN_143a8b0e0(*param_3);
  if (cVar2 == '\0') {
    lVar5 = FUN_143a8fe10(param_2);
    if (lVar5 == 0) {
      *param_3 = 1;
      uVar4 = (ulonglong)param_3 & 0xffffffffffffff00;
    }
    else {
      iVar3 = FUN_143a904f0(param_2);
      lVar1 = lVar5 + (longlong)iVar3 * 2;
      lVar5 = (**(code **)(*param_1 + 0x88))(param_1,lVar5,lVar1,param_3);
      uVar4 = (ulonglong)(lVar1 == lVar5);
    }
  }
  else {
    uVar4 = (ulonglong)(uint3)(cVar2 >> 7) << 8;
  }
  return uVar4;
}



// FUNCTION 143b1fd90 FUN_143b1fd90 body=39 status=ok
// SIG undefined FUN_143b1fd90(void)

bool FUN_143b1fd90(longlong *param_1)

{
  return *param_1 == 0;
}



// FUNCTION 143b1fdc0 FUN_143b1fdc0 body=88 status=ok
// SIG undefined FUN_143b1fdc0(void)

void FUN_143b1fdc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_143b21f00(*(undefined8 *)(param_1 + 8),param_2,param_3,*(undefined1 *)(param_1 + 0x10),1,
                param_4,param_5);
  return;
}



// FUNCTION 143b1fe20 FUN_143b1fe20 body=68 status=ok
// SIG undefined FUN_143b1fe20(void)

void FUN_143b1fe20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_143b23430(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 143b1fe70 FUN_143b1fe70 body=68 status=ok
// SIG undefined FUN_143b1fe70(void)

void FUN_143b1fe70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_143b25b90(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 143b1fec0 FUN_143b1fec0 body=93 status=ok
// SIG undefined FUN_143b1fec0(void)

longlong FUN_143b1fec0(undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  char cVar1;
  
  cVar1 = FUN_143a8b110(*param_4);
  if (cVar1 != '\0') {
    if (param_3 == param_2) {
      *param_4 = 1;
    }
    else {
      FUN_143a8dcd0(param_3,param_2);
    }
  }
  return param_3;
}



// FUNCTION 143b1ff20 FUN_143b1ff20 body=370 status=ok
// SIG undefined FUN_143b1ff20(void)

longlong FUN_143b1ff20(longlong *param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_48 [72];
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    lVar4 = FUN_143a8fe10(param_2);
    if ((param_3 == param_2) || (lVar4 == 0)) {
      *param_4 = 1;
      FUN_143a90e90(param_3);
    }
    else {
      FUN_143a90910(param_3);
      FUN_143b108e0(local_48,param_1[1],param_3);
      uVar2 = FUN_143a904f0(param_2);
      cVar1 = FUN_143b24df0(local_48,uVar2,param_4);
      if (cVar1 != '\0') {
        iVar3 = FUN_143a904f0(param_2);
        (**(code **)(*param_1 + 0x78))(param_1,lVar4,lVar4 + (longlong)iVar3 * 2,local_48,param_4);
      }
      FUN_143b10950(local_48);
    }
  }
  else {
    FUN_143a90e90(param_3);
  }
  return param_3;
}



// FUNCTION 143b200a0 FUN_143b200a0 body=105 status=ok
// SIG undefined FUN_143b200a0(void)

void FUN_143b200a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_143b22750(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4,*(undefined1 *)(param_1 + 0x10)
                ,param_5,param_6,param_7);
  return;
}



// FUNCTION 143b20110 FUN_143b20110 body=92 status=ok
// SIG undefined FUN_143b20110(void)

void FUN_143b20110(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_143b238e0(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 143b20170 FUN_143b20170 body=92 status=ok
// SIG undefined FUN_143b20170(void)

void FUN_143b20170(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_143b26190(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 143b201d0 FUN_143b201d0 body=541 status=ok
// SIG undefined FUN_143b201d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143b201d0(longlong *param_1,longlong param_2,longlong param_3,undefined1 param_4,
                      undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined4 *local_b8;
  int local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 local_78 [64];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_88 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FUN_143b207e0(param_2,param_5);
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    local_a0 = FUN_143a8fe10(param_3);
    if ((param_2 == param_3) || (local_a0 == 0)) {
      *param_5 = 1;
    }
    else {
      local_a8 = FUN_143a904f0(param_2);
      FUN_143a8ac30(local_38);
      FUN_143b108e0(local_78,param_1[1],param_2);
      iVar2 = FUN_143a904f0(param_3);
      cVar1 = FUN_143b24df0(local_78,local_a8 + iVar2,param_5);
      if (cVar1 != '\0') {
        iVar2 = FUN_143a904f0(param_3);
        local_90 = *param_1;
        local_b8 = param_5;
        local_c0 = local_78;
        local_c8 = local_38;
        (**(code **)(local_90 + 0x80))(param_1,local_a0,local_a0 + (longlong)iVar2 * 2,param_4);
      }
      FUN_143b10950(local_78);
      cVar1 = FUN_143a8b0e0(*param_5);
      if (cVar1 != '\0') {
        iVar2 = FUN_143a904f0(local_38);
        FUN_143b20580(param_2,local_a8 - iVar2,0x7fffffff,local_38);
      }
      local_98 = param_2;
      FUN_143a8dc60(local_38);
      param_2 = local_98;
    }
  }
  return param_2;
}



// FUNCTION 143b203f0 FUN_143b203f0 body=62 status=ok
// SIG undefined FUN_143b203f0(void)

void FUN_143b203f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143b201d0(param_1,param_2,param_3,1,param_4);
  return;
}


