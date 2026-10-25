// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143b71a70 FUN_143b71a70 body=63 status=ok
// SIG undefined FUN_143b71a70(void)

undefined8 FUN_143b71a70(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x328) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x328) + 0x20))(*(undefined8 *)(param_1 + 0x328))
    ;
  }
  return uVar1;
}



// FUNCTION 143b71ab0 FUN_143b71ab0 body=168 status=ok
// SIG undefined FUN_143b71ab0(void)

int FUN_143b71ab0(longlong param_1)

{
  char cVar1;
  int local_18;
  longlong *local_10;
  
  local_18 = 0;
  if (*(longlong *)(param_1 + 0x328) == 0) {
    if (*(longlong *)(param_1 + 0x170) != 0) {
      for (local_10 = *(longlong **)(param_1 + 0x170); *local_10 != 0; local_10 = local_10 + 1) {
        cVar1 = FUN_143b73380(*local_10);
        if (cVar1 != '\0') {
          local_18 = local_18 + 1;
        }
      }
    }
  }
  else {
    local_18 = (**(code **)(**(longlong **)(param_1 + 0x328) + 0x10))
                         (*(undefined8 *)(param_1 + 0x328));
  }
  return local_18;
}



// FUNCTION 143b71b60 FUN_143b71b60 body=348 status=ok
// SIG undefined FUN_143b71b60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b71b60(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined4 local_84;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_70 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  if (param_1[0x65] == 0) {
    FUN_143a8ac30(local_68);
    FUN_143a90e90(local_68);
    FUN_143a8d3a0(param_2,local_68);
    local_88 = local_88 | 1;
    FUN_143a8dc60(local_68);
  }
  else {
    FUN_143a8d3a0(local_40,param_3);
    uVar1 = FUN_143a8ffc0(local_40);
    local_78 = param_1[0x65];
    local_80 = *(longlong *)param_1[0x65];
    local_84 = (**(code **)(local_80 + 0x40))(local_78,uVar1);
    (**(code **)(*param_1 + 0x140))(param_1,param_2,local_84,param_4);
    local_88 = local_88 | 1;
    FUN_143a8dc60(local_40);
  }
  return param_2;
}



// FUNCTION 143b71cc0 FUN_143b71cc0 body=753 status=ok
// SIG undefined FUN_143b71cc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b71cc0(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_f8 [32];
  int local_d8;
  uint local_d4;
  int local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [40];
  undefined1 local_90 [40];
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_c0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_d4 = 0;
  if (((*(longlong *)(param_1 + 0x328) == 0) || (param_3 < 0)) ||
     (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x328) + 0x10))
                        (*(undefined8 *)(param_1 + 0x328)), iVar1 <= param_3)) {
    FUN_143a8ac30(local_90);
    FUN_143a90e90(local_90);
    FUN_143a8d3a0(param_2,local_90);
    local_d4 = local_d4 | 1;
    FUN_143a8dc60(local_90);
  }
  else {
    uVar2 = FUN_143a8b520(param_4);
    FUN_143a8d9f0(local_b8,uVar2,0xffffffff,0);
    local_d8 = FUN_143a904f0(local_b8);
    local_c8 = FUN_143a8fd90(local_b8,local_d8 + 1);
    while (-1 < local_d8) {
      *(undefined2 *)(local_c8 + (longlong)local_d8 * 2) = 0;
      local_d0 = (**(code **)(**(longlong **)(param_1 + 0x328) + 0x38))
                           (*(undefined8 *)(param_1 + 0x328),local_c8);
      if (-1 < local_d0) {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x328) + 0x30))
                          (*(undefined8 *)(param_1 + 0x328),local_d0,param_3);
        FUN_143a8d4f0(local_68,1,uVar2,0xffffffff);
        FUN_143a8d3a0(param_2,local_68);
        local_d4 = local_d4 | 1;
        FUN_143a8dc60(local_68);
        FUN_143a8dc60(local_b8);
        return param_2;
      }
      do {
        local_d8 = local_d8 + -1;
        if (local_d8 < 1) break;
      } while (*(short *)(local_c8 + (longlong)local_d8 * 2) != 0x5f);
      while ((0 < local_d8 && (*(short *)(local_c8 + (longlong)(local_d8 + -1) * 2) == 0x5f))) {
        local_d8 = local_d8 + -1;
      }
    }
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x328) + 0x18))
                      (*(undefined8 *)(param_1 + 0x328),param_3);
    FUN_143a8d4f0(local_40,1,uVar2,0xffffffff);
    FUN_143a8d3a0(param_2,local_40);
    local_d4 = local_d4 | 1;
    FUN_143a8dc60(local_40);
    FUN_143a8dc60(local_b8);
  }
  return param_2;
}



// FUNCTION 143b71fc0 FUN_143b71fc0 body=705 status=ok
// SIG undefined FUN_143b71fc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b71fc0(longlong param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_3c8 [32];
  undefined8 local_3a8;
  undefined4 local_3a0;
  uint local_398;
  int local_394;
  undefined1 *local_390;
  undefined8 local_388;
  undefined1 local_380 [40];
  undefined1 local_358 [384];
  undefined1 local_1d8 [384];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_388 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
  local_398 = 0;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    if (((*(longlong *)(param_1 + 0x328) != 0) && (-1 < param_3)) &&
       (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x328) + 0x20))
                          (*(undefined8 *)(param_1 + 0x328)), param_3 < iVar2)) {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x328) + 0x28))
                        (*(undefined8 *)(param_1 + 0x328),param_3);
      FUN_143a8d4f0(local_380,1,uVar4,0xffffffff);
      local_394 = FUN_143a904f0(local_380);
      local_394 = local_394 + 1;
      local_390 = local_58;
      if ((0x40 < local_394) &&
         (local_390 = (undefined1 *)FUN_143aa7a40((longlong)local_394),
         local_390 == (undefined1 *)0x0)) {
        *param_4 = 7;
        local_3a8 = 0;
        FUN_143a8a690(param_2,&DAT_145af3922,0,0);
        local_398 = local_398 | 1;
        FUN_143a8dc60(local_380);
        return param_2;
      }
      uVar3 = FUN_143a904f0(local_380);
      local_3a0 = 0;
      local_3a8 = CONCAT44(local_3a8._4_4_,local_394);
      FUN_143a8f880(local_380,0,uVar3,local_390);
      local_3a8 = 0;
      FUN_143a8a690(local_1d8,local_390,0,0);
      if (local_390 != local_58) {
        FUN_143aa79f0(local_390);
      }
      FUN_143a8a610(param_2,local_1d8);
      local_398 = local_398 | 1;
      FUN_143a8acf0(local_1d8);
      FUN_143a8dc60(local_380);
      return param_2;
    }
    *param_4 = 1;
    FUN_143a8aad0(local_358);
    FUN_143a8a610(param_2,local_358);
    local_398 = local_398 | 1;
    FUN_143a8acf0(local_358);
  }
  else {
    local_3a8 = 0;
    FUN_143a8a690(param_2,&DAT_145af3922,0,0);
  }
  return param_2;
}



// FUNCTION 143b72290 FUN_143b72290 body=498 status=ok
// SIG undefined FUN_143b72290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b72290(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  int local_res18;
  undefined1 auStack_c8 [32];
  uint local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_90 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  if (*(longlong *)(param_1 + 0x328) == 0) {
    if (*(longlong *)(param_1 + 0x170) != 0) {
      FUN_143a8ac30(local_88);
      local_res18 = param_3;
      for (local_a0 = *(longlong **)(param_1 + 0x170); *local_a0 != 0; local_a0 = local_a0 + 1) {
        local_98 = *local_a0;
        cVar1 = FUN_143b73380(local_98);
        if ((cVar1 != '\0') && (local_res18 = local_res18 + -1, local_res18 == -1)) {
          FUN_143b71a40(local_98,local_88);
          FUN_143a8d3a0(param_2,local_88);
          local_a8 = local_a8 | 1;
          FUN_143a8dc60(local_88);
          return param_2;
        }
      }
      FUN_143a8dc60(local_88);
    }
    FUN_143a8ac30(local_38);
    FUN_143a8d3a0(param_2,local_38);
    local_a8 = local_a8 | 1;
    FUN_143a8dc60(local_38);
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x328) + 0x18))
                      (*(undefined8 *)(param_1 + 0x328),param_3);
    FUN_143a8d4f0(local_60,1,uVar2,0xffffffff);
    FUN_143a8d3a0(param_2,local_60);
    local_a8 = local_a8 | 1;
    FUN_143a8dc60(local_60);
  }
  return param_2;
}



// FUNCTION 143b72490 FUN_143b72490 body=207 status=ok
// SIG undefined FUN_143b72490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b72490(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_78 [32];
  uint local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_143a8ac30(local_40);
  if (*(longlong *)(param_1 + 0x170) != 0) {
    for (local_50 = *(longlong **)(param_1 + 0x170); *local_50 != 0; local_50 = local_50 + 1) {
      FUN_143bea580(*local_50,local_40);
    }
  }
  FUN_143a8d3a0(param_2,local_40);
  local_58 = local_58 | 1;
  FUN_143a8dc60(local_40);
  return param_2;
}



// FUNCTION 143b72560 FUN_143b72560 body=8 status=ok
// SIG undefined FUN_143b72560(void)

undefined * FUN_143b72560(void)

{
  return &DAT_146bc81a1;
}



// FUNCTION 143b72570 FUN_143b72570 body=2473 status=ok
// SIG undefined FUN_143b72570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b72570(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4,
                  undefined4 *param_5)

{
  undefined1 auVar1 [16];
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_148 [32];
  code *local_128;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  ulonglong local_f0;
  ulonglong *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  ulonglong *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  ulonglong *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  ulonglong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_68 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  _guard_xfg_dispatch_icall_nop(param_4,0,0x48);
  cVar2 = FUN_143a8b0e0(*param_5);
  if (cVar2 == '\0') {
    if (param_3 == (longlong *)0x0) {
      local_98 = 0;
    }
    else {
      local_98 = FUN_143b73700(param_3);
    }
    *(undefined8 *)(param_1 + 0x328) = local_98;
    FUN_143a8d3a0(local_60,param_2);
    iVar5 = FUN_143a904f0(local_60);
    if (iVar5 == 0) {
      *param_5 = 7;
      FUN_143a8dc60(local_60);
    }
    else {
      FUN_143b73be0(param_1,local_60);
      local_114 = FUN_143b19dc0(local_60,L"%%lenient-parse:",0xffffffff,0);
      if ((local_114 != -1) &&
         ((local_114 == 0 || (sVar3 = FUN_143a8e4f0(local_60,local_114 + -1), sVar3 == 0x3b)))) {
        local_fc = FUN_143b19dc0(local_60,&DAT_145d12d04,2,local_114);
        if (local_fc == -1) {
          local_fc = FUN_143a904f0(local_60);
          local_fc = local_fc + -1;
        }
        local_108 = FreeLib(L"%%lenient-parse:");
        local_108 = local_114 + local_108;
        while( true ) {
          uVar4 = FUN_143a8e4f0(local_60,local_108);
          cVar2 = FUN_143b28380(uVar4);
          if (cVar2 == '\0') break;
          local_108 = local_108 + 1;
        }
        local_d0 = FUN_143a8d310(0x28);
        if (local_d0 == 0) {
          local_e0 = 0;
        }
        else {
          local_e0 = FUN_143a8ac30(local_d0);
        }
        local_90 = local_e0;
        *(undefined8 *)(param_1 + 800) = local_e0;
        if (*(longlong *)(param_1 + 800) == 0) {
          *param_5 = 7;
          FUN_143a8dc60(local_60);
          return;
        }
        FUN_143a90d20(*(undefined8 *)(param_1 + 800),local_60,local_108,local_fc - local_108);
        FUN_143ace4e0(local_60,local_114,(local_fc + 1) - local_114);
      }
      *(undefined4 *)(param_1 + 0x180) = 0;
      for (local_104 = FUN_143b19dc0(local_60,&DAT_145d12d04,2,0); local_104 != -1;
          local_104 = FUN_143b19dc0(local_60,&DAT_145d12d04,2,local_104)) {
        *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
        local_104 = local_104 + 1;
      }
      *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
      uVar6 = FUN_143aa7a40((longlong)(*(int *)(param_1 + 0x180) + 1) << 3);
      *(undefined8 *)(param_1 + 0x170) = uVar6;
      if (*(longlong *)(param_1 + 0x170) == 0) {
        *param_5 = 7;
        FUN_143a8dc60(local_60);
      }
      else {
        for (local_f4 = 0; local_f4 <= *(int *)(param_1 + 0x180); local_f4 = local_f4 + 1) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x170) + (longlong)local_f4 * 8) = 0;
        }
        if (*(int *)(param_1 + 0x180) == 0) {
          *param_5 = 1;
          FUN_143a8dc60(local_60);
        }
        else {
          local_f0 = (ulonglong)*(int *)(param_1 + 0x180);
          if (local_f0 == 0) {
            local_c0 = (ulonglong *)operator_new(8);
          }
          else {
            auVar1._8_8_ = 0;
            auVar1._0_8_ = local_f0;
            uVar7 = SUB168(ZEXT816(0x28) * auVar1,0);
            if (SUB168(ZEXT816(0x28) * auVar1,8) != 0) {
              uVar7 = 0xffffffffffffffff;
            }
            lVar8 = uVar7 + 8;
            if (0xfffffffffffffff7 < uVar7) {
              lVar8 = -1;
            }
            local_c0 = (ulonglong *)FUN_143a8d310(lVar8);
          }
          local_e8 = local_c0;
          if (local_c0 == (ulonglong *)0x0) {
            local_a0 = (ulonglong *)0x0;
          }
          else {
            *local_c0 = local_f0;
            local_128 = FUN_143a8dc60;
            _eh_vector_constructor_iterator_(local_c0 + 1,0x28,local_f0,FUN_143a8ac30);
            local_a0 = local_e8 + 1;
          }
          local_80 = local_a0;
          *(ulonglong **)(param_1 + 0x178) = local_a0;
          if (*(longlong *)(param_1 + 0x178) == 0) {
            *param_5 = 7;
            FUN_143a8dc60(local_60);
          }
          else {
            local_118 = 0;
            local_110 = 0;
            local_f8 = FUN_143b19dc0(local_60,&DAT_145d12d04,2,0);
            while (local_f8 != -1) {
              FUN_143a90d20((longlong)local_118 * 0x28 + *(longlong *)(param_1 + 0x178),local_60,
                            local_110,(local_f8 + 1) - local_110);
              local_b0 = FUN_143a8d310(0x60);
              if (local_b0 == 0) {
                local_c8 = 0;
              }
              else {
                local_c8 = FUN_143be9d70(local_b0,*(undefined8 *)(param_1 + 0x178),local_118,param_5
                                        );
              }
              local_70 = local_c8;
              *(undefined8 *)(*(longlong *)(param_1 + 0x170) + (longlong)local_118 * 8) = local_c8;
              if (*(longlong *)(*(longlong *)(param_1 + 0x170) + (longlong)local_118 * 8) == 0) {
                *param_5 = 7;
                FUN_143a8dc60(local_60);
                return;
              }
              local_118 = local_118 + 1;
              local_110 = local_f8 + 1;
              local_f8 = FUN_143b19dc0(local_60,&DAT_145d12d04,2,local_110);
            }
            iVar5 = FUN_143a904f0(local_60);
            FUN_143a90d20((longlong)local_118 * 0x28 + *(longlong *)(param_1 + 0x178),local_60,
                          local_110,iVar5 - local_110);
            local_b8 = FUN_143a8d310(0x60);
            if (local_b8 == 0) {
              local_a8 = 0;
            }
            else {
              local_a8 = FUN_143be9d70(local_b8,*(undefined8 *)(param_1 + 0x178),local_118,param_5);
            }
            local_78 = local_a8;
            *(undefined8 *)(*(longlong *)(param_1 + 0x170) + (longlong)local_118 * 8) = local_a8;
            if (*(longlong *)(*(longlong *)(param_1 + 0x170) + (longlong)local_118 * 8) == 0) {
              *param_5 = 7;
              FUN_143a8dc60(local_60);
            }
            else {
              FUN_143b730e0(param_1);
              for (local_10c = 0; local_10c < *(int *)(param_1 + 0x180); local_10c = local_10c + 1)
              {
                local_88 = *(longlong *)(param_1 + 0x170);
                FUN_143beb3d0(*(undefined8 *)(local_88 + (longlong)local_10c * 8),
                              (longlong)local_10c * 0x28 + *(longlong *)(param_1 + 0x178),param_1,
                              param_5);
              }
              if (param_3 == (longlong *)0x0) {
                uVar6 = FUN_143b71940(param_1);
                *(undefined8 *)(param_1 + 0x188) = uVar6;
              }
              else {
                local_100 = 0;
                while (iVar5 = (**(code **)(*param_3 + 0x10))(param_3), local_100 < iVar5) {
                  uVar6 = (**(code **)(*param_3 + 0x18))(param_3,local_100);
                  FUN_143a8d4f0(local_38,1,uVar6,0xffffffff);
                  local_d8 = FUN_143b710a0(param_1,local_38,param_5);
                  if (local_d8 == 0) {
                    FUN_143a8dc60(local_38);
                    break;
                  }
                  if (local_100 == 0) {
                    *(longlong *)(param_1 + 0x188) = local_d8;
                  }
                  FUN_143a8dc60(local_38);
                  local_100 = local_100 + 1;
                }
              }
              FUN_143a8dcd0(param_1 + 0x330,param_2);
              FUN_143a8dc60(local_60);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 143b72f20 FUN_143b72f20 body=434 status=ok
// SIG undefined FUN_143b72f20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b72f20(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined4 local_1d8 [2];
  longlong local_1d0;
  int local_1c8 [2];
  undefined1 *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_1a8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  local_1e8 = 0;
  FUN_143a8a690(local_198,0,0,0);
  cVar1 = FUN_143acc2f0(param_2,local_198);
  if (cVar1 == '\0') {
    local_1b8 = 0;
  }
  else {
    local_1b8 = FUN_143a8b520(param_2);
  }
  local_1b0 = local_1b8;
  FUN_143a8acf0(local_198);
  local_1d8[0] = 0;
  local_1d0 = FUN_143aa5b10(0,local_1b0,local_1d8);
  local_1d0 = FUN_143aa3350(local_1d0,"contextTransforms",local_1d0,local_1d8);
  local_1d0 = FUN_143aa3350(local_1d0,"number-spellout",local_1d0,local_1d8);
  cVar1 = FUN_143a8b110(local_1d8[0]);
  if ((cVar1 != '\0') && (local_1d0 != 0)) {
    local_1c8[0] = 0;
    local_1c0 = (undefined1 *)FUN_143aa4640(local_1d0,local_1c8,local_1d8);
    cVar1 = FUN_143a8b110(local_1d8[0]);
    if ((cVar1 != '\0') && ((local_1c0 != (undefined1 *)0x0 && (1 < local_1c8[0])))) {
      *(undefined1 *)(param_1 + 0x359) = *local_1c0;
      *(undefined1 *)(param_1 + 0x35a) = local_1c0[4];
    }
  }
  FUN_143aa2ef0(local_1d0);
  return;
}



// FUNCTION 143b730e0 FUN_143b730e0 body=572 status=ok
// SIG undefined FUN_143b730e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b730e0(longlong param_1)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined8 local_90;
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_90 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_1 + 0x188) = 0;
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_143a8d4f0(local_38,1,L"%spellout-numbering",0xffffffff);
    FUN_143a8d4f0(local_60,1,L"%digits-ordinal",0xffffffff);
    FUN_143a8d4f0(local_88,1,L"%duration",0xffffffff);
    for (local_98 = *(longlong **)(param_1 + 0x170); *local_98 != 0; local_98 = local_98 + 1) {
      cVar1 = FUN_143b73340(*local_98,local_38);
      if (((cVar1 != '\0') || (cVar1 = FUN_143b73340(*local_98,local_60), cVar1 != '\0')) ||
         (cVar1 = FUN_143b73340(*local_98,local_88), cVar1 != '\0')) {
        *(longlong *)(param_1 + 0x188) = *local_98;
        FUN_143a8dc60(local_88);
        FUN_143a8dc60(local_60);
        FUN_143a8dc60(local_38);
        return;
      }
    }
    local_98 = local_98 + -1;
    *(longlong *)(param_1 + 0x188) = *local_98;
    cVar1 = FUN_143b73380(*(undefined8 *)(param_1 + 0x188));
    if (cVar1 == '\0') {
      do {
        if (local_98 == *(longlong **)(param_1 + 0x170)) goto LAB_143b732e3;
        local_98 = local_98 + -1;
        cVar1 = FUN_143b73380(*local_98);
      } while (cVar1 == '\0');
      *(longlong *)(param_1 + 0x188) = *local_98;
    }
LAB_143b732e3:
    FUN_143a8dc60(local_88);
    FUN_143a8dc60(local_60);
    FUN_143a8dc60(local_38);
  }
  return;
}



// FUNCTION 143b73320 FUN_143b73320 body=18 status=ok
// SIG undefined FUN_143b73320(void)

undefined1 FUN_143b73320(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x318);
}



// FUNCTION 143b73340 FUN_143b73340 body=37 status=ok
// SIG undefined FUN_143b73340(void)

void FUN_143b73340(undefined8 param_1,undefined8 param_2)

{
  FUN_143a8dd00(param_1,param_2);
  return;
}



// FUNCTION 143b73370 FUN_143b73370 body=15 status=ok
// SIG undefined FUN_143b73370(void)

undefined1 FUN_143b73370(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x5a);
}



// FUNCTION 143b73380 FUN_143b73380 body=15 status=ok
// SIG undefined FUN_143b73380(void)

undefined1 FUN_143b73380(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x59);
}



// FUNCTION 143b73390 FUN_143b73390 body=867 status=ok
// SIG undefined FUN_143b73390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b73390(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  double dVar4;
  undefined1 auStack_2a8 [32];
  call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
  *local_288;
  int local_278;
  int local_274;
  int local_270;
  longlong *local_268;
  undefined1 local_260 [16];
  longlong local_250;
  int local_248;
  int local_244;
  int local_240;
  undefined1 local_238 [16];
  double local_228;
  undefined1 local_220 [16];
  undefined8 local_210;
  undefined1 local_208 [48];
  call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
  local_1d8 [224];
  call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
  local_f8 [224];
  ulonglong local_18;
  
  local_210 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  if (*(longlong *)(param_1 + 0x170) == 0) {
    FUN_143b44cd0(param_4,0);
  }
  else {
    uVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_4);
    FUN_143a8d400(local_208,param_2,uVar2);
    FUN_143b16ce0(local_220,0);
    FUN_143b16ce0(local_260,0);
    FUN_143b686d0(local_f8);
    for (local_268 = *(longlong **)(param_1 + 0x170); *local_268 != 0; local_268 = local_268 + 1) {
      local_250 = *local_268;
      cVar1 = FUN_143b73380(local_250);
      if ((cVar1 != '\0') && (cVar1 = FUN_143b73370(local_250), cVar1 != '\0')) {
        FUN_143b16ce0(local_238,0);
        FUN_143b686d0(local_1d8);
        local_288 = local_1d8;
        FUN_143beafc0(local_250,local_208,local_238,0x42b0000000000000);
        local_240 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                    ::GetIndex(local_238);
        iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_260);
        if (iVar3 < local_240) {
          FUN_143b70590(local_260,local_238);
          FUN_143b687b0(local_f8);
          local_244 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                      ::GetIndex(local_260);
          iVar3 = FUN_143a904f0(local_208);
          if (local_244 == iVar3) {
            Concurrency::
            call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
            ::
            ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                      (local_1d8);
            UCameraModifier_Climbing::~UCameraModifier_Climbing(local_238);
            break;
          }
        }
        Concurrency::
        call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
        ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                  (local_1d8);
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_238);
      }
    }
    local_274 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(param_4);
    iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(local_260);
    FUN_143b0fce0(param_4,local_274 + iVar3);
    iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(local_260);
    if (iVar3 < 1) {
      iVar3 = FUN_143a93e60(local_260);
      if (iVar3 < 1) {
        local_270 = 0;
      }
      else {
        local_270 = FUN_143a93e60(local_260);
      }
      local_248 = local_270;
      FUN_143b44cd0(param_4,local_274 + local_270);
    }
    else {
      FUN_143b44cd0(param_4,0xffffffff);
    }
    FUN_143b687b0(param_3,local_f8);
    iVar3 = FUN_143b695b0(param_3);
    if (iVar3 == 1) {
      dVar4 = (double)FUN_143b381e0(param_3);
      local_278 = (int)dVar4;
      local_228 = (double)local_278;
      dVar4 = (double)FUN_143b381e0(param_3);
      if (local_228 == dVar4) {
        FUN_143b69930(param_3,local_278);
      }
    }
    Concurrency::
    call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
    ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              (local_f8);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_260);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_220);
    FUN_143a8dc60(local_208);
  }
  return;
}



// FUNCTION 143b73700 FUN_143b73700 body=29 status=ok
// SIG undefined FUN_143b73700(void)

longlong FUN_143b73700(longlong param_1)

{
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return param_1;
}



// FUNCTION 143b73720 FUN_143b73720 body=373 status=ok
// SIG undefined FUN_143b73720(void)

void FUN_143b73720(longlong param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_28 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  
  FUN_143b39bb0(param_1,param_2,param_3);
  cVar1 = FUN_143a8b110(*param_3);
  if (cVar1 != '\0') {
    if ((*(char *)(param_1 + 0x358) == '\0') && ((param_2 == 0x103 || (param_2 == 0x104)))) {
      FUN_143b72f20(param_1,param_1 + 400);
      *(undefined1 *)(param_1 + 0x358) = 1;
    }
    if ((*(longlong *)(param_1 + 0x360) == 0) &&
       (((param_2 == 0x102 || ((param_2 == 0x103 && (*(char *)(param_1 + 0x359) != '\0')))) ||
        ((param_2 == 0x104 && (*(char *)(param_1 + 0x35a) != '\0')))))) {
      local_28[0] = 0;
      uVar2 = FUN_143a9fd60(param_1 + 400,local_28);
      *(undefined8 *)(param_1 + 0x360) = uVar2;
      cVar1 = FUN_143a8b0e0(local_28[0]);
      if (cVar1 != '\0') {
        local_20 = *(undefined8 **)(param_1 + 0x360);
        if (local_20 != (undefined8 *)0x0) {
          local_18 = local_20;
          (**(code **)*local_20)(local_20,1);
        }
        *(undefined8 *)(param_1 + 0x360) = 0;
      }
    }
  }
  return;
}



// FUNCTION 143b738a0 FUN_143b738a0 body=116 status=ok
// SIG undefined FUN_143b738a0(void)

void FUN_143b738a0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_20;
  
  lVar1 = FUN_143a8d310(0x818);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b6a050(lVar1,param_2);
  }
  (**(code **)(*param_1 + 0x170))(param_1,local_20);
  return;
}



// FUNCTION 143b73920 FUN_143b73920 body=431 status=ok
// SIG undefined FUN_143b73920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b73920(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  char local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_68 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  cVar1 = FUN_143a8b110(*param_3);
  if (cVar1 != '\0') {
    cVar1 = FUN_143a903a0(param_2);
    if (cVar1 == '\0') {
      local_78 = FUN_143a8d4f0(local_38,1,&DAT_145d13220,0xffffffff);
      local_70 = local_78;
      local_88 = FUN_143b73b70(param_2,local_78);
      FUN_143a8dc60(local_38);
      if (local_88 == '\0') {
        lVar3 = FUN_143b710a0(param_1,param_2,param_3);
        if (lVar3 != 0) {
          *(longlong *)(param_1 + 0x188) = lVar3;
        }
      }
      else {
        *param_3 = 1;
      }
    }
    else if (*(longlong *)(param_1 + 0x328) == 0) {
      FUN_143b730e0(param_1);
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x328) + 0x18))
                        (*(undefined8 *)(param_1 + 0x328),0);
      FUN_143a8d4f0(local_60,1,uVar2,0xffffffff);
      uVar2 = FUN_143b710a0(param_1,local_60,param_3);
      *(undefined8 *)(param_1 + 0x188) = uVar2;
      FUN_143a8dc60(local_60);
    }
  }
  return;
}



// FUNCTION 143b73ad0 FUN_143b73ad0 body=145 status=ok
// SIG undefined FUN_143b73ad0(void)

void FUN_143b73ad0(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  
  *(char *)(param_1 + 0x318) = param_2;
  if ((param_2 == '\0') && (*(longlong *)(param_1 + 0x308) != 0)) {
    puVar1 = *(undefined8 **)(param_1 + 0x308);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x308) = 0;
  }
  return;
}



// FUNCTION 143b73b70 FUN_143b73b70 body=103 status=ok
// SIG undefined FUN_143b73b70(void)

bool FUN_143b73b70(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = FUN_143a904f0(param_2);
  uVar3 = FUN_143a904f0(param_2);
  cVar1 = FUN_143b3e630(param_1,0,uVar3,param_2,0,uVar2);
  return cVar1 == '\0';
}



// FUNCTION 143b73be0 FUN_143b73be0 body=342 status=ok
// SIG undefined FUN_143b73be0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b73be0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  FUN_143a8ac30(local_38);
  local_48 = 0;
  do {
    if ((local_48 == -1) || (iVar3 = FUN_143a904f0(param_2), iVar3 <= local_48)) {
      FUN_143a8dcd0(param_2,local_38);
      FUN_143a8dc60(local_38);
      return;
    }
    while (iVar3 = FUN_143a904f0(param_2), local_48 < iVar3) {
      uVar2 = FUN_143a8e4f0(param_2,local_48);
      cVar1 = FUN_143b28380(uVar2);
      if (cVar1 == '\0') break;
      local_48 = local_48 + 1;
    }
    local_44 = FUN_143b0bae0(param_2,0x3b,local_48);
    if (local_44 == -1) {
      iVar3 = FUN_143a904f0(param_2);
      FUN_143acc540(local_38,param_2,local_48,iVar3 - local_48);
      local_48 = -1;
    }
    else {
      iVar3 = FUN_143a904f0(param_2);
      if (local_44 < iVar3) {
        FUN_143acc540(local_38,param_2,local_48,(local_44 + 1) - local_48);
        local_48 = local_44 + 1;
      }
      else {
        local_48 = -1;
      }
    }
  } while( true );
}



// FUNCTION 143b73d40 FUN_143b73d40 body=124 status=ok
// SIG undefined FUN_143b73d40(void)

undefined8 FUN_143b73d40(undefined8 *param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 1) != 0) &&
      (iVar1 = *(int *)(param_1 + 1), *(int *)(param_1 + 1) = iVar1 + -1, iVar1 + -1 == 0)) &&
     (param_1 != (undefined8 *)0x0)) {
    (**(code **)*param_1)(param_1,1);
  }
  return 0;
}



// FUNCTION 143b73dc0 FUN_143b73dc0 body=1 status=ok
// SIG undefined FUN_143b73dc0(void)

void FUN_143b73dc0(void)

{
  return;
}



// FUNCTION 143b73dd0 FUN_143b73dd0 body=162 status=ok
// SIG undefined FUN_143b73dd0(void)

undefined8 * FUN_143b73dd0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_143b369c0(param_1);
  *param_1 = icu_53::Win32NumberFormat::vftable;
  FUN_143a8aad0(param_1 + 0x2f);
  uVar1 = FUN_143aa7a40(0x30);
  param_1[0x5f] = uVar1;
  if (param_1[0x5f] != 0) {
    _guard_xfg_dispatch_icall_nop((void *)param_1[0x5f],0,0x30);
  }
  FUN_143b74170(param_1,param_2);
  return param_1;
}



// FUNCTION 143b73e80 FUN_143b73e80 body=564 status=ok
// SIG undefined FUN_143b73e80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_143b73e80(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  undefined4 local_268;
  int local_264;
  ulonglong local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined1 local_238 [384];
  undefined1 local_b8 [160];
  ulonglong local_18;
  
  local_248 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  FUN_143b36a10(param_1);
  *param_1 = icu_53::Win32NumberFormat::vftable;
  *(undefined1 *)(param_1 + 0x2e) = param_3;
  FUN_143a8aad0(param_1 + 0x2f);
  param_1[0x5f] = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    uVar2 = FUN_143a8b780(param_2);
    *(undefined4 *)(param_1 + 0x5e) = uVar2;
    local_268 = 0;
    local_264 = FUN_143a97240(*(undefined4 *)(param_1 + 0x5e),local_b8,0x9c,&local_268);
    cVar1 = FUN_143a8b110(local_268);
    if (cVar1 != '\0') {
      local_260 = (ulonglong)local_264;
      if (0x9c < local_260) {
                    /* WARNING: Subroutine does not return */
        __report_rangecheckfailure();
      }
      local_b8[local_260] = 0;
      local_278 = 0;
      local_258 = FUN_143a8a690(local_238,local_b8,0,0);
      local_250 = local_258;
      FUN_143a8adb0(param_1 + 0x2f,local_258);
      FUN_143a8acf0(local_238);
    }
    uVar3 = FUN_143aa7a40(0x30);
    param_1[0x5f] = uVar3;
    if (*(char *)(param_1 + 0x2e) == '\0') {
      FUN_143b74ac0(param_1[0x5f],*(undefined4 *)(param_1 + 0x5e));
    }
    else {
      FUN_143b74890(param_1[0x5f],*(undefined4 *)(param_1 + 0x5e));
    }
  }
  return param_1;
}



// FUNCTION 143b740c0 FUN_143b740c0 body=162 status=ok
// SIG undefined FUN_143b740c0(void)

void FUN_143b740c0(undefined8 *param_1)

{
  *param_1 = icu_53::Win32NumberFormat::vftable;
  if (param_1[0x5f] != 0) {
    if (*(char *)(param_1 + 0x2e) == '\0') {
      FUN_143b74850(param_1[0x5f]);
    }
    else {
      FUN_143b74810(param_1[0x5f]);
    }
    FUN_143aa79f0(param_1[0x5f]);
  }
  FUN_143a8acf0(param_1 + 0x2f);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143b74170 FUN_143b74170 body=258 status=ok
// SIG undefined FUN_143b74170(void)

longlong FUN_143b74170(longlong param_1,longlong param_2)

{
  FUN_143b36d60(param_1,param_2);
  *(undefined1 *)(param_1 + 0x170) = *(undefined1 *)(param_2 + 0x170);
  FUN_143a8adb0(param_1 + 0x178,param_2 + 0x178);
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_2 + 0x2f0);
  *(undefined1 *)(param_1 + 0x300) = *(undefined1 *)(param_2 + 0x300);
  if (*(char *)(param_1 + 0x170) == '\0') {
    FUN_143b74850(*(undefined8 *)(param_1 + 0x2f8));
    FUN_143b74ac0(*(undefined8 *)(param_1 + 0x2f8),*(undefined4 *)(param_1 + 0x2f0));
  }
  else {
    FUN_143b74810(*(undefined8 *)(param_1 + 0x2f8));
    FUN_143b74890(*(undefined8 *)(param_1 + 0x2f8),*(undefined4 *)(param_1 + 0x2f0));
  }
  return param_1;
}



// FUNCTION 143b74280 FUN_143b74280 body=54 status=ok
// SIG undefined FUN_143b74280(void)

undefined8 FUN_143b74280(undefined8 param_1,uint param_2)

{
  FUN_143b740c0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b742c0 CreateInternalContext body=92 status=ok
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
  
  lVar1 = FUN_143a8d310(0x308);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b73dd0(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143b74320 FUN_143b74320 body=1024 status=ok
// SIG undefined FUN_143b74320(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b74320(longlong param_1,UINT param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  size_t sVar4;
  longlong lVar5;
  undefined1 *puVar6;
  CURRENCYFMTW *pCVar7;
  undefined1 auStackY_148 [32];
  wchar_t *local_118;
  LPCWSTR local_100;
  uint local_f8;
  CURRENCYFMTW local_e0;
  WCHAR local_a8 [32];
  WCHAR local_68 [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStackY_148;
  local_68[0] = L'\0';
  FUN_143b73dc0();
  _vsnprintf((char *)local_68,0x20,param_4,&stack0x00000028);
  local_f8 = (uint)(local_68[0] == L'-');
  local_100 = local_68 + (int)local_f8;
  do {
    if (*local_100 == L'\0') {
LAB_143b7442d:
      local_118 = local_a8;
      puVar6 = *(undefined1 **)(param_1 + 0x2f8);
      pCVar7 = &local_e0;
      for (lVar5 = 0x30; lVar5 != 0; lVar5 = lVar5 + -1) {
        *(undefined1 *)&pCVar7->NumDigits = *puVar6;
        puVar6 = puVar6 + 1;
        pCVar7 = (CURRENCYFMTW *)((longlong)&pCVar7->NumDigits + 1);
      }
      local_a8[0] = L'\0';
      if (*(char *)(param_1 + 0x170) == '\0') {
        if (*(char *)(param_1 + 0x300) != '\0') {
          local_e0.NumDigits = param_2;
        }
        cVar1 = FUN_143b38630(param_1);
        if (cVar1 == '\0') {
          local_e0.Grouping = 0;
        }
        iVar2 = GetNumberFormatW(*(LCID *)(param_1 + 0x2f0),0,local_68,(NUMBERFMTW *)&local_e0,
                                 local_118,0x20);
        if ((iVar2 == 0) && (DVar3 = GetLastError(), DVar3 == 0x7a)) {
          iVar2 = GetNumberFormatW(*(LCID *)(param_1 + 0x2f0),0,local_68,(NUMBERFMTW *)&local_e0,
                                   (LPWSTR)0x0,0);
          local_118 = (wchar_t *)FUN_143aa7a40();
          *local_118 = L'\0';
          GetNumberFormatW(*(LCID *)(param_1 + 0x2f0),0,local_68,(NUMBERFMTW *)&local_e0,local_118,
                           iVar2);
        }
      }
      else {
        if (*(char *)(param_1 + 0x300) != '\0') {
          local_e0.NumDigits = param_2;
        }
        cVar1 = FUN_143b38630(param_1);
        if (cVar1 == '\0') {
          local_e0.Grouping = 0;
        }
        iVar2 = GetCurrencyFormatW(*(LCID *)(param_1 + 0x2f0),0,local_68,&local_e0,local_118,0x20);
        if ((iVar2 == 0) && (DVar3 = GetLastError(), DVar3 == 0x7a)) {
          iVar2 = GetCurrencyFormatW(*(LCID *)(param_1 + 0x2f0),0,local_68,&local_e0,(LPWSTR)0x0,0);
          local_118 = (wchar_t *)FUN_143aa7a40();
          *local_118 = L'\0';
          GetCurrencyFormatW(*(LCID *)(param_1 + 0x2f0),0,local_68,&local_e0,local_118,iVar2);
        }
      }
      sVar4 = wcslen(local_118);
      FUN_143b17350(param_3,local_118,sVar4 & 0xffffffff);
      if (local_118 != local_a8) {
        FUN_143aa79f0(local_118);
      }
      return param_3;
    }
    if (((ushort)*local_100 < 0x30) || (0x39 < (ushort)*local_100)) {
      *local_100 = L'.';
      goto LAB_143b7442d;
    }
    local_100 = local_100 + 1;
  } while( true );
}



// FUNCTION 143b74720 FUN_143b74720 body=70 status=ok
// SIG undefined FUN_143b74720(void)

void FUN_143b74720(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143b38310(param_1);
  FUN_143b74320(param_1,uVar1,param_3,L"%I32d",param_2);
  return;
}



// FUNCTION 143b74770 FUN_143b74770 body=76 status=ok
// SIG undefined FUN_143b74770(void)

void FUN_143b74770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143b382d0(param_1);
  FUN_143b74320(param_1,uVar1,param_3,L"%.16f",param_2);
  return;
}



// FUNCTION 143b747c0 FUN_143b747c0 body=73 status=ok
// SIG undefined FUN_143b747c0(void)

void FUN_143b747c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143b38310(param_1);
  FUN_143b74320(param_1,uVar1,param_3,L"%I64d",param_2);
  return;
}



// FUNCTION 143b74810 FUN_143b74810 body=64 status=ok
// SIG undefined FUN_143b74810(void)

void FUN_143b74810(longlong param_1)

{
  if (param_1 != 0) {
    FUN_143aa79f0(*(undefined8 *)(param_1 + 0x28));
    FUN_143aa79f0(*(undefined8 *)(param_1 + 0x18));
    FUN_143aa79f0(*(undefined8 *)(param_1 + 0x10));
  }
  return;
}



// FUNCTION 143b74850 FUN_143b74850 body=50 status=ok
// SIG undefined FUN_143b74850(void)

void FUN_143b74850(longlong param_1)

{
  if (param_1 != 0) {
    FUN_143aa79f0(*(undefined8 *)(param_1 + 0x18));
    FUN_143aa79f0(*(undefined8 *)(param_1 + 0x10));
  }
  return;
}



// FUNCTION 143b74890 FUN_143b74890 body=365 status=ok
// SIG undefined FUN_143b74890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b74890(LPWSTR param_1,LCID param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  CHAR local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  GetLocaleInfoW(param_2,0x20000019,param_1,4);
  GetLocaleInfoW(param_2,0x20000012,param_1 + 2,4);
  GetLocaleInfoA(param_2,0x18,local_28,10);
  uVar1 = FUN_143b74a20(local_28);
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar2 = FUN_143aa7a40(0xc);
  *(undefined8 *)(param_1 + 8) = uVar2;
  GetLocaleInfoW(param_2,0x16,*(LPWSTR *)(param_1 + 8),6);
  uVar2 = FUN_143aa7a40(0xc);
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  GetLocaleInfoW(param_2,0x17,*(LPWSTR *)(param_1 + 0xc),6);
  GetLocaleInfoW(param_2,0x2000001c,param_1 + 0x10,4);
  GetLocaleInfoW(param_2,0x2000001b,param_1 + 0x12,4);
  uVar2 = FUN_143aa7a40(0x10);
  *(undefined8 *)(param_1 + 0x14) = uVar2;
  GetLocaleInfoW(param_2,0x14,*(LPWSTR *)(param_1 + 0x14),8);
  return;
}



// FUNCTION 143b74a00 FUN_143b74a00 body=19 status=ok
// SIG undefined FUN_143b74a00(void)

void FUN_143b74a00(void)

{
  FUN_143b74be0();
  return;
}



// FUNCTION 143b74a20 FUN_143b74a20 body=145 status=ok
// SIG undefined FUN_143b74a20(void)

int FUN_143b74a20(char *param_1)

{
  int local_18;
  char *local_10;
  
  local_18 = 0;
  for (local_10 = param_1; *local_10 != '\0'; local_10 = local_10 + 1) {
    if ((*local_10 < '1') || ('8' < *local_10)) {
      if (*local_10 != ';') break;
    }
    else {
      local_18 = local_18 * 10 + -0x30 + (int)*local_10;
    }
  }
  if (*local_10 != '0') {
    local_18 = local_18 * 10;
  }
  return local_18;
}



// FUNCTION 143b74ac0 FUN_143b74ac0 body=283 status=ok
// SIG undefined FUN_143b74ac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b74ac0(LPWSTR param_1,LCID param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  CHAR local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  GetLocaleInfoW(param_2,0x20000011,param_1,4);
  GetLocaleInfoW(param_2,0x20000012,param_1 + 2,4);
  GetLocaleInfoA(param_2,0x10,local_28,10);
  uVar1 = FUN_143b74a20(local_28);
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar2 = FUN_143aa7a40(0xc);
  *(undefined8 *)(param_1 + 8) = uVar2;
  GetLocaleInfoW(param_2,0xe,*(LPWSTR *)(param_1 + 8),6);
  uVar2 = FUN_143aa7a40(0xc);
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  GetLocaleInfoW(param_2,0xf,*(LPWSTR *)(param_1 + 0xc),6);
  GetLocaleInfoW(param_2,0x20001010,param_1 + 0x10,4);
  return;
}



// FUNCTION 143b74be0 FUN_143b74be0 body=8 status=ok
// SIG undefined FUN_143b74be0(void)

undefined * FUN_143b74be0(void)

{
  return &DAT_146bc81a2;
}



// FUNCTION 143b74bf0 FUN_143b74bf0 body=221 status=ok
// SIG undefined FUN_143b74bf0(void)

void FUN_143b74bf0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_38 [2];
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  longlong *local_18;
  
  local_38[0] = 0;
  if (*(char *)(param_1 + 0x170) == '\0') {
    local_20 = (longlong *)FUN_143b37290(param_1 + 0x178,local_38);
  }
  else {
    local_20 = (longlong *)FUN_143b37230(param_1 + 0x178,local_38);
  }
  local_30 = local_20;
  (**(code **)(*local_20 + 0xa0))(local_20,param_2,param_3,param_4);
  local_18 = local_30;
  local_28 = local_30;
  if (local_30 != (longlong *)0x0) {
    (**(code **)*local_30)(local_30,1);
  }
  return;
}



// FUNCTION 143b74cd0 FUN_143b74cd0 body=44 status=ok
// SIG undefined FUN_143b74cd0(void)

void FUN_143b74cd0(longlong param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0x300) = 1;
  FUN_143b39ce0(param_1,param_2);
  return;
}



// FUNCTION 143b74d00 FUN_143b74d00 body=44 status=ok
// SIG undefined FUN_143b74d00(void)

void FUN_143b74d00(longlong param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0x300) = 1;
  FUN_143b39dc0(param_1,param_2);
  return;
}



// FUNCTION 143b74d30 _vsnprintf body=62 status=ok
// SIG int _vsnprintf(char * _Dest, size_t _Count, char * _Format, va_list _Args)

/* Library Function - Single Match
    _vsnprintf
   
   Library: Visual Studio 2019 Release */

int __cdecl _vsnprintf(char *_Dest,size_t _Count,char *_Format,va_list _Args)

{
  int iVar1;
  
  iVar1 = _vsnprintf_l(_Dest,_Count,_Format,(_locale_t)0x0,_Args);
  return iVar1;
}



// FUNCTION 143b74d70 _vsnprintf_l body=118 status=ok
// SIG int _vsnprintf_l(char * _DstBuf, size_t _MaxCount, char * _Format, _locale_t _Locale, va_list _ArgList)

/* Library Function - Single Match
    _vsnprintf_l
   
   Library: Visual Studio 2019 Release */

int __cdecl
_vsnprintf_l(char *_DstBuf,size_t _MaxCount,char *_Format,_locale_t _Locale,va_list _ArgList)

{
  ulonglong *puVar1;
  int local_14;
  
  puVar1 = (ulonglong *)__local_stdio_printf_options();
  local_14 = __stdio_common_vswprintf(*puVar1 | 1,_DstBuf,_MaxCount,_Format,_Locale,_ArgList);
  if (local_14 < 0) {
    local_14 = -1;
  }
  return local_14;
}



// FUNCTION 143b74df0 FUN_143b74df0 body=49 status=ok
// SIG undefined FUN_143b74df0(void)

longlong * FUN_143b74df0(longlong *param_1)

{
  *param_1 = (longlong)param_1 + 0xd;
  *(undefined4 *)(param_1 + 1) = 0x21;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 143b74e30 FUN_143b74e30 body=93 status=ok
// SIG undefined FUN_143b74e30(void)

longlong FUN_143b74e30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_143b36700(param_1 + 0x28);
  uVar1 = FUN_143a8b510(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_143b74f60(param_1,param_2,param_3,param_4,uVar2);
  return param_1;
}



// FUNCTION 143b74e90 FUN_143b74e90 body=169 status=ok
// SIG undefined FUN_143b74e90(void)

undefined4 *
FUN_143b74e90(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_143b36700(param_1 + 10,param_2,param_3,param_4,0xfffffffffffffffe);
  FUN_143bebf00(param_1,0);
  param_1[4] = 0;
  FUN_143bec080(param_1,3);
  uVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_1 + 10);
  *param_1 = uVar1;
  uVar2 = FUN_143a8b510(param_1 + 10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  FUN_143b81a50(*(undefined8 *)(param_1 + 8));
  FUN_143b76260(param_1,0);
  return param_1;
}



// FUNCTION 143b74f40 IsStreamOpen body=31 status=ok
// SIG undefined IsStreamOpen(void)

void Audio::FAudioCaptureSynth::IsStreamOpen(longlong param_1)

{
  FUN_143a8ac70(param_1 + 0x28);
  return;
}



// FUNCTION 143b74f60 FUN_143b74f60 body=299 status=ok
// SIG undefined FUN_143b74f60(void)

undefined4 * FUN_143b74f60(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 local_10 [16];
  
  if (param_1 != param_2) {
    _guard_xfg_dispatch_icall_nop(param_1,param_2,0x1c);
    iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_2 + 10);
    iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1 + 10);
    if (iVar2 < iVar1) {
      uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(param_2 + 10);
      uVar4 = FUN_143b39ad0(param_1 + 10,uVar3,0);
      *(undefined8 *)(param_1 + 8) = uVar4;
    }
    uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1 + 10);
    *param_1 = uVar3;
    FUN_143b80a00(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 8));
    FUN_143a8ab50(local_10,0);
    if (param_2[0x1e] == 1) {
      *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
    }
    else if (param_2[0x1e] == 2) {
      *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
    }
    param_1[0x1e] = param_2[0x1e];
    FUN_143a8ad90(local_10);
  }
  return param_1;
}



// FUNCTION 143b75090 FUN_143b75090 body=187 status=ok
// SIG undefined FUN_143b75090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_143b75090(longlong param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_40 [2];
  byte local_38;
  char cStack_37;
  undefined4 local_30 [4];
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if (param_1 == param_2) {
    local_48 = 1;
  }
  else {
    FUN_143bebf00(local_30,0);
    local_30[0] = 1;
    local_20 = 0;
    FUN_143b80990(local_40,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20),local_30)
    ;
    if (((cStack_37 == '\0') && (local_40[0] == 1)) && ((local_38 & 0x70) == 0)) {
      local_48 = 1;
    }
    else {
      local_48 = 0;
    }
  }
  return local_48;
}



// FUNCTION 143b75150 FUN_143b75150 body=348 status=ok
// SIG undefined FUN_143b75150(void)

void FUN_143b75150(int *param_1,byte param_2)

{
  int local_18;
  
  if (((*(char *)(*(longlong *)(param_1 + 8) + 9) == '\0') && (**(int **)(param_1 + 8) == 1)) &&
     ((*(byte *)(*(longlong *)(param_1 + 8) + 8) & 0x70) == 0)) {
    *(byte *)(*(longlong *)(param_1 + 8) + 9) = param_2 & 0xf;
    **(undefined4 **)(param_1 + 8) = 1;
    *(int *)(*(longlong *)(param_1 + 8) + 4) = *(int *)(*(longlong *)(param_1 + 8) + 4) + -1;
  }
  else {
    local_18 = **(int **)(param_1 + 8);
    if (local_18 < *param_1) {
      for (; 0 < local_18; local_18 = local_18 + -1) {
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 9 + (longlong)local_18) =
             *(undefined1 *)(*(longlong *)(param_1 + 8) + 9 + (longlong)(local_18 + -1));
      }
      *(byte *)(*(longlong *)(param_1 + 8) + 9) = param_2 & 0xf;
      **(int **)(param_1 + 8) = **(int **)(param_1 + 8) + 1;
      *(int *)(*(longlong *)(param_1 + 8) + 4) = *(int *)(*(longlong *)(param_1 + 8) + 4) + -1;
    }
  }
  FUN_143b76240(param_1);
  return;
}



// FUNCTION 143b752b0 FUN_143b752b0 body=59 status=ok
// SIG undefined FUN_143b752b0(void)

void FUN_143b752b0(longlong param_1)

{
  FUN_143b81a50(*(undefined8 *)(param_1 + 0x20));
  FUN_143bec080(param_1,3);
  FUN_143b76260(param_1,0);
  return;
}



// FUNCTION 143b752f0 FUN_143b752f0 body=202 status=ok
// SIG undefined FUN_143b752f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b752f0(undefined4 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  int local_20 [2];
  byte local_18;
  char cStack_17;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  local_28 = *param_1;
  *param_1 = 1;
  FUN_143b80990(local_20,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 0x20),param_1);
  *param_1 = local_28;
  if (((cStack_17 == '\0') && (local_20[0] == 1)) && ((local_18 & 0x70) == 0)) {
    uVar1 = 0;
  }
  else if ((local_18 & 0x70) == 0) {
    if ((local_18 & 0x80) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}



// FUNCTION 143b753c0 FUN_143b753c0 body=17 status=ok
// SIG undefined FUN_143b753c0(void)

undefined4 FUN_143b753c0(longlong param_1)

{
  return **(undefined4 **)(param_1 + 0x20);
}



// FUNCTION 143b753e0 FUN_143b753e0 body=95 status=ok
// SIG undefined FUN_143b753e0(void)

void FUN_143b753e0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    FUN_143b80b30(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x20),
                  *(undefined8 *)(param_2 + 0x20),param_1);
    FUN_143b76240(param_1);
  }
  return;
}



// FUNCTION 143b75440 FUN_143b75440 body=187 status=ok
// SIG undefined FUN_143b75440(void)

void FUN_143b75440(int *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  int local_res10;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    if (param_2 < 1) {
      *param_3 = 1;
    }
    else {
      local_res10 = param_2;
      if (999999999 < param_2) {
        local_res10 = 999999999;
      }
      if (*param_1 < local_res10) {
        uVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(param_1 + 10);
        lVar3 = FUN_143b39ad0(param_1 + 10,local_res10,uVar2);
        if (lVar3 == 0) {
          *param_3 = 7;
        }
        else {
          *param_1 = local_res10;
          *(longlong *)(param_1 + 8) = lVar3;
        }
      }
    }
  }
  return;
}



// FUNCTION 143b75500 FUN_143b75500 body=604 status=ok
// SIG undefined FUN_143b75500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143b75500(longlong param_1,char param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_168 [32];
  byte local_148;
  byte local_147;
  byte local_146;
  byte local_145;
  undefined4 local_144;
  undefined1 local_140 [16];
  undefined8 local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [128];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_130 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if ((*(byte *)(*(longlong *)(param_1 + 0x20) + 8) & 0x70) == 0) {
    FUN_143b819f0(*(undefined8 *)(param_1 + 0x20));
    if (*(int *)(*(ulonglong *)(param_1 + 0x20) + 4) < 0) {
      uVar3 = *(ulonglong *)(param_1 + 0x20) & 0xffffffffffffff00;
    }
    else if ((((*(char *)(*(longlong *)(param_1 + 0x20) + 9) == '\0') &&
              (**(int **)(param_1 + 0x20) == 1)) &&
             ((*(byte *)(*(longlong *)(param_1 + 0x20) + 8) & 0x70) == 0)) &&
            ((param_2 == '\0' && ((*(byte *)(*(longlong *)(param_1 + 0x20) + 8) & 0x80) != 0)))) {
      uVar3 = 0;
    }
    else {
      iVar2 = **(int **)(param_1 + 0x20) + *(int *)(*(longlong *)(param_1 + 0x20) + 4);
      if (iVar2 < 0x13) {
        uVar3 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
      }
      else {
        local_144 = 0;
        FUN_143b74e90(local_118);
        FUN_143acfdd0(local_128,"-9223372036854775808");
        FUN_143b76520(local_118,local_128,&local_144,0);
        iVar2 = FUN_143b752f0(param_1,local_118);
        if (iVar2 < 0) {
          local_146 = 0;
          Audio::FAudioCaptureSynth::IsStreamOpen(local_118);
          uVar3 = (ulonglong)local_146;
        }
        else {
          FUN_143b74e90(local_98);
          FUN_143acfdd0(local_140,"9223372036854775807");
          FUN_143b76520(local_98,local_140,&local_144,0);
          iVar2 = FUN_143b752f0(param_1,local_98);
          if (iVar2 < 1) {
            cVar1 = FUN_143a8b0e0(local_144);
            if (cVar1 == '\0') {
              local_145 = 1;
              Audio::FAudioCaptureSynth::IsStreamOpen(local_98);
              Audio::FAudioCaptureSynth::IsStreamOpen(local_118);
              uVar3 = (ulonglong)local_145;
            }
            else {
              local_147 = 0;
              Audio::FAudioCaptureSynth::IsStreamOpen(local_98);
              Audio::FAudioCaptureSynth::IsStreamOpen(local_118);
              uVar3 = (ulonglong)local_147;
            }
          }
          else {
            local_148 = 0;
            Audio::FAudioCaptureSynth::IsStreamOpen(local_98);
            Audio::FAudioCaptureSynth::IsStreamOpen(local_118);
            uVar3 = (ulonglong)local_148;
          }
        }
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143b75760 FUN_143b75760 body=604 status=ok
// SIG undefined FUN_143b75760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143b75760(longlong param_1,char param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_168 [32];
  byte local_148;
  byte local_147;
  byte local_146;
  byte local_145;
  undefined4 local_144;
  undefined1 local_140 [16];
  undefined8 local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [128];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_130 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if ((*(byte *)(*(longlong *)(param_1 + 0x20) + 8) & 0x70) == 0) {
    FUN_143b819f0(*(undefined8 *)(param_1 + 0x20));
    if (*(int *)(*(ulonglong *)(param_1 + 0x20) + 4) < 0) {
      uVar3 = *(ulonglong *)(param_1 + 0x20) & 0xffffffffffffff00;
    }
    else if ((((*(char *)(*(longlong *)(param_1 + 0x20) + 9) == '\0') &&
              (**(int **)(param_1 + 0x20) == 1)) &&
             ((*(byte *)(*(longlong *)(param_1 + 0x20) + 8) & 0x70) == 0)) &&
            ((param_2 == '\0' && ((*(byte *)(*(longlong *)(param_1 + 0x20) + 8) & 0x80) != 0)))) {
      uVar3 = 0;
    }
    else {
      iVar2 = **(int **)(param_1 + 0x20) + *(int *)(*(longlong *)(param_1 + 0x20) + 4);
      if (iVar2 < 10) {
        uVar3 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
      }
      else {
        local_144 = 0;
        FUN_143b74e90(local_118);
        FUN_143acfdd0(local_128,"-2147483648");
        FUN_143b76520(local_118,local_128,&local_144,0);
        iVar2 = FUN_143b752f0(param_1,local_118);
        if (iVar2 < 0) {
          local_146 = 0;
          Audio::FAudioCaptureSynth::IsStreamOpen(local_118);
          uVar3 = (ulonglong)local_146;
        }
        else {
          FUN_143b74e90(local_98);
          FUN_143acfdd0(local_140,"2147483647");
          FUN_143b76520(local_98,local_140,&local_144,0);
          iVar2 = FUN_143b752f0(param_1,local_98);
          if (iVar2 < 1) {
            cVar1 = FUN_143a8b0e0(local_144);
            if (cVar1 == '\0') {
              local_145 = 1;
              Audio::FAudioCaptureSynth::IsStreamOpen(local_98);
              Audio::FAudioCaptureSynth::IsStreamOpen(local_118);
              uVar3 = (ulonglong)local_145;
            }
            else {
              local_147 = 0;
              Audio::FAudioCaptureSynth::IsStreamOpen(local_98);
              Audio::FAudioCaptureSynth::IsStreamOpen(local_118);
              uVar3 = (ulonglong)local_147;
            }
          }
          else {
            local_148 = 0;
            Audio::FAudioCaptureSynth::IsStreamOpen(local_98);
            Audio::FAudioCaptureSynth::IsStreamOpen(local_118);
            uVar3 = (ulonglong)local_148;
          }
        }
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143b759c0 FUN_143b759c0 body=308 status=ok
// SIG undefined FUN_143b759c0(void)

int FUN_143b759c0(longlong param_1,void *param_2)

{
  int iVar1;
  int local_28;
  longlong local_18;
  
  *(undefined1 *)((longlong)param_2 + 0x14) = 0;
  iVar1 = 0x14;
  local_18 = param_1;
  if (param_1 < 0) {
    *(char *)((longlong)param_2 + 0x13) = '0' - (char)(param_1 % 10);
    local_18 = param_1 / -10;
    iVar1 = 0x13;
  }
  do {
    local_28 = iVar1;
    iVar1 = local_28 + -1;
    *(char *)((longlong)param_2 + (longlong)iVar1) = (char)(local_18 % 10) + '0';
    local_18 = local_18 / 10;
  } while (0 < local_18);
  if (param_1 < 0) {
    *(undefined1 *)((longlong)param_2 + (longlong)(local_28 + -2)) = 0x2d;
    iVar1 = local_28 + -2;
  }
  local_28 = iVar1;
  local_28 = 0x15 - local_28;
  memmove(param_2,(void *)((longlong)param_2 + (0x15 - (longlong)local_28)),(longlong)local_28);
  return local_28;
}



// FUNCTION 143b75b00 FUN_143b75b00 body=97 status=ok
// SIG undefined FUN_143b75b00(void)

undefined4 FUN_143b75b00(longlong param_1)

{
  undefined4 uVar1;
  
  if ((((*(char *)(*(longlong *)(param_1 + 0x20) + 9) == '\0') && (**(int **)(param_1 + 0x20) == 1))
      && ((*(byte *)(*(longlong *)(param_1 + 0x20) + 8) & 0x70) == 0)) &&
     (*(int *)(*(longlong *)(param_1 + 0x20) + 4) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(undefined4 **)(param_1 + 0x20);
  }
  return uVar1;
}



// FUNCTION 143b75b70 FUN_143b75b70 body=124 status=ok
// SIG undefined FUN_143b75b70(void)

int FUN_143b75b70(longlong param_1)

{
  int iVar1;
  
  if ((((*(char *)(*(longlong *)(param_1 + 0x20) + 9) == '\0') && (**(int **)(param_1 + 0x20) == 1))
      && ((*(byte *)(*(longlong *)(param_1 + 0x20) + 8) & 0x70) == 0)) ||
     ((*(byte *)(*(longlong *)(param_1 + 0x20) + 8) & 0x70) != 0)) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + 4);
  }
  else {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + 4) + **(int **)(param_1 + 0x20);
  }
  return iVar1;
}



// FUNCTION 143b75bf0 FUN_143b75bf0 body=65 status=ok
// SIG undefined FUN_143b75bf0(void)

int FUN_143b75bf0(longlong param_1,int param_2)

{
  return *(byte *)(*(longlong *)(param_1 + 0x20) + 9 +
                  (longlong)((**(int **)(param_1 + 0x20) - param_2) + -1)) + 0x30;
}



// FUNCTION 143b75c40 FUN_143b75c40 body=62 status=ok
// SIG undefined FUN_143b75c40(void)

undefined1 FUN_143b75c40(longlong param_1,int param_2)

{
  return *(undefined1 *)
          (*(longlong *)(param_1 + 0x20) + 9 +
          (longlong)((**(int **)(param_1 + 0x20) - param_2) + -1));
}



// FUNCTION 143b75c80 FUN_143b75c80 body=787 status=ok
// SIG undefined FUN_143b75c80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143b75df6) */

double FUN_143b75c80(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *_Str;
  undefined1 auStack_148 [32];
  char local_128;
  double local_120;
  undefined1 local_118 [8];
  char *local_110;
  char *local_108;
  undefined1 local_100 [8];
  longlong local_f8;
  double local_f0;
  double local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [32];
  undefined8 local_b8;
  undefined1 local_58 [48];
  char local_28 [2];
  char cStack_26;
  ulonglong local_10;
  
  local_e0 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  FUN_143a8ab50(local_118,0);
  if (*(int *)(param_1 + 0x78) == 1) {
    local_f0 = *(double *)(param_1 + 0x70);
    FUN_143a8ad90(local_118);
  }
  else if (*(int *)(param_1 + 0x78) == 2) {
    local_e8 = (double)*(longlong *)(param_1 + 0x70);
    FUN_143a8ad90(local_118);
    local_f0 = local_e8;
  }
  else {
    local_128 = DAT_146bc81a3;
    FUN_143a8ad90(local_118);
    if (local_128 == '\0') {
      sprintf(local_28,"%+1.1f",0x3ff0000000000000);
      local_128 = cStack_26;
    }
    local_120 = 0.0;
    cVar1 = FUN_143b76290(param_1);
    if (cVar1 == '\0') {
      cVar1 = FUN_143b43020(param_1);
      if (cVar1 == '\0') {
        FUN_143b74df0(local_58);
        iVar2 = FUN_143b75b00(param_1);
        if (iVar2 < 0x13) {
          uVar3 = FUN_143a8b510(local_58);
          FUN_143b819c0(*(undefined8 *)(param_1 + 0x20),uVar3);
        }
        else {
          FUN_143b74e30(local_d8,param_1);
          FUN_143b763d0(local_d8);
          FUN_143b76400(local_d8,0x12);
          uVar3 = FUN_143a8b510(local_58);
          FUN_143b819c0(local_b8,uVar3);
          Audio::FAudioCaptureSynth::IsStreamOpen(local_d8);
        }
        if (local_128 != '.') {
          uVar3 = FUN_143a8b510(local_58);
          local_110 = (char *)FUN_143a8d150(uVar3,0x2e);
          if (local_110 != (char *)0x0) {
            *local_110 = local_128;
          }
        }
        local_108 = (char *)0x0;
        _Str = (char *)FUN_143a8b510(local_58);
        local_120 = strtod(_Str,&local_108);
        FUN_143a8ac70(local_58);
      }
      else {
        local_120 = (double)std::numeric_limits<double>::infinity();
        cVar1 = FUN_143b430a0(param_1);
        if (cVar1 == '\0') {
          local_120 = -local_120;
        }
      }
    }
    else {
      local_120 = 0.0;
      if ((*(byte *)(*(longlong *)(param_1 + 0x20) + 8) & 0x80) != 0) {
        local_120 = -0.0;
      }
    }
    FUN_143a8ab50(local_100,0);
    local_f8 = param_1;
    FUN_143b76260(param_1,local_120);
    DAT_146bc81a3 = local_128;
    FUN_143a8ad90(local_100);
    local_f0 = local_120;
  }
  return local_f0;
}



// FUNCTION 143b75fa0 FUN_143b75fa0 body=366 status=ok
// SIG undefined FUN_143b75fa0(void)

ulonglong FUN_143b75fa0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int local_38;
  uint local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  if (*(int *)(param_1 + 0x78) == 2) {
    local_20 = *(ulonglong *)(param_1 + 0x70);
  }
  else if (**(int **)(param_1 + 0x20) + *(int *)(*(longlong *)(param_1 + 0x20) + 4) < 0x14) {
    iVar1 = **(int **)(param_1 + 0x20) + *(int *)(*(longlong *)(param_1 + 0x20) + 4);
    local_20 = 0;
    for (local_38 = 0; local_38 < iVar1; local_38 = local_38 + 1) {
      iVar2 = (**(int **)(param_1 + 0x20) - local_38) + -1;
      if (iVar2 < 0) {
        local_30 = 0;
      }
      else {
        local_30 = (uint)*(byte *)(*(longlong *)(param_1 + 0x20) + 9 + (longlong)iVar2);
      }
      local_20 = local_20 * 10 + (longlong)(int)local_30;
    }
    if ((*(byte *)(*(longlong *)(param_1 + 0x20) + 8) & 0x80) != 0) {
      local_20 = ~local_20 + 1;
    }
    if ((iVar1 == 0x13) &&
       ((((*(byte *)(*(longlong *)(param_1 + 0x20) + 8) & 0x80) != 0 && (0 < (longlong)local_20)) ||
        (((*(byte *)(*(longlong *)(param_1 + 0x20) + 8) & 0x80) == 0 && ((longlong)local_20 < 0)))))
       ) {
      local_18 = 0;
      local_20 = local_18;
    }
  }
  else {
    local_20 = 0;
  }
  return local_20;
}



// FUNCTION 143b76110 FUN_143b76110 body=285 status=ok
// SIG undefined FUN_143b76110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_143b76110(longlong param_1)

{
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined8 local_120;
  undefined1 local_118 [32];
  undefined8 local_f8;
  undefined1 local_98 [32];
  undefined8 local_78;
  ulonglong local_18;
  
  local_120 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_128 = 0;
  if (**(int **)(param_1 + 0x20) + *(int *)(*(longlong *)(param_1 + 0x20) + 4) < 0xb) {
    if (*(int *)(*(longlong *)(param_1 + 0x20) + 4) == 0) {
      local_128 = FUN_143b81650(*(undefined8 *)(param_1 + 0x20),param_1);
    }
    else {
      FUN_143b74e30(local_118,param_1);
      FUN_143b74e90(local_98);
      FUN_143b81500(local_f8,local_f8,local_78,param_1);
      local_128 = FUN_143b81650(local_f8,param_1);
      Audio::FAudioCaptureSynth::IsStreamOpen(local_98);
      Audio::FAudioCaptureSynth::IsStreamOpen(local_118);
    }
  }
  else {
    local_128 = 0;
  }
  return local_128;
}



// FUNCTION 143b76230 infinity body=12 status=ok
// SIG undefined infinity(void)

undefined8 std::numeric_limits<double>::infinity(void)

{
  return *(undefined8 *)_Inf_exref;
}



// FUNCTION 143b76240 FUN_143b76240 body=18 status=ok
// SIG undefined FUN_143b76240(void)

void FUN_143b76240(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}



// FUNCTION 143b76260 FUN_143b76260 body=40 status=ok
// SIG undefined FUN_143b76260(void)

void FUN_143b76260(longlong param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 0x78) = 1;
  *(undefined8 *)(param_1 + 0x70) = param_2;
  return;
}



// FUNCTION 143b76290 FUN_143b76290 body=89 status=ok
// SIG undefined FUN_143b76290(void)

undefined1 FUN_143b76290(longlong param_1)

{
  undefined1 local_18;
  
  if (((*(char *)(*(longlong *)(param_1 + 0x20) + 9) == '\0') && (**(int **)(param_1 + 0x20) == 1))
     && ((*(byte *)(*(longlong *)(param_1 + 0x20) + 8) & 0x70) == 0)) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143b762f0 FUN_143b762f0 body=9 status=ok
// SIG undefined FUN_143b762f0(void)

undefined8 FUN_143b762f0(void)

{
  return 0x7fefffffffffffff;
}



// FUNCTION 143b76300 FUN_143b76300 body=200 status=ok
// SIG undefined FUN_143b76300(void)

void FUN_143b76300(int *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  
  param_1[5] = 0;
  iVar1 = FUN_143b753c0(param_1);
  iVar2 = FUN_143b753c0(param_2);
  if (*param_1 < iVar1 + iVar2) {
    FUN_143b763d0(param_1);
    iVar1 = FUN_143b753c0(param_1);
    iVar2 = FUN_143b753c0(param_2);
    FUN_143b75440(param_1,iVar1 + iVar2,param_3);
  }
  FUN_143b813f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 8),
                *(undefined8 *)(param_2 + 0x20),param_1);
  FUN_143b76240(param_1);
  return;
}



// FUNCTION 143b763d0 FUN_143b763d0 body=45 status=ok
// SIG undefined FUN_143b763d0(void)

void FUN_143b763d0(longlong param_1)

{
  FUN_143b81570(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x20),param_1);
  return;
}



// FUNCTION 143b76400 FUN_143b76400 body=106 status=ok
// SIG undefined FUN_143b76400(void)

void FUN_143b76400(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_2;
  FUN_143b81460(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 8),param_1);
  *param_1 = uVar1;
  FUN_143b819f0(*(undefined8 *)(param_1 + 8));
  FUN_143b76240(param_1);
  return;
}



// FUNCTION 143b76470 FUN_143b76470 body=168 status=ok
// SIG undefined FUN_143b76470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b76470(longlong param_1,int param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  int local_24;
  undefined1 uStack_1f;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  FUN_143b769e0(param_1);
  if (*(int *)(*(longlong *)(param_1 + 0x20) + 4) < -param_2) {
    FUN_143b81a50(local_28);
    local_24 = -param_2;
    uStack_1f = 1;
    FUN_143b81500(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x20),local_28,param_1);
    FUN_143b769e0(param_1);
    FUN_143b76240(param_1);
  }
  return;
}



// FUNCTION 143b76520 FUN_143b76520 body=262 status=ok
// SIG undefined FUN_143b76520(void)

void FUN_143b76520(int *param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_2);
    if (*param_1 < iVar2) {
      uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(param_1 + 10);
      lVar4 = FUN_143b39ad0(param_1 + 10,iVar2,uVar3);
      if (lVar4 == 0) {
        *param_3 = 7;
        return;
      }
      *(longlong *)(param_1 + 8) = lVar4;
      *param_1 = iVar2;
    }
    param_1[5] = 0;
    uVar5 = FUN_143a8b510(param_2);
    FUN_143b80ba0(*(undefined8 *)(param_1 + 8),uVar5,param_1);
    if ((param_1[5] & 1U) != 0) {
      *param_3 = 0x10110;
    }
    FUN_143b76240(param_1);
  }
  return;
}



// FUNCTION 143b76630 FUN_143b76630 body=55 status=ok
// SIG undefined FUN_143b76630(void)

void FUN_143b76630(undefined8 param_1,int param_2)

{
  FUN_143b76770(param_1,(longlong)param_2);
  FUN_143b76260(param_1,SUB84((double)param_2,0));
  return;
}



// FUNCTION 143b76670 FUN_143b76670 body=249 status=ok
// SIG undefined FUN_143b76670(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b76670(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  char local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  cVar1 = FUN_143a91980(param_2);
  if (cVar1 == '\0') {
    sprintf(local_30,"%+1.*e",0xe,param_2);
  }
  else {
    cVar1 = FUN_143a91a20(param_2);
    if (cVar1 == '\0') {
      _guard_xfg_dispatch_icall_nop(local_30,"inf");
    }
    else {
      _guard_xfg_dispatch_icall_nop(local_30,"-inf");
    }
  }
  local_38 = (undefined1 *)FUN_143a8d150(local_30,0x2c);
  if (local_38 != (undefined1 *)0x0) {
    *local_38 = 0x2e;
  }
  FUN_143b80ba0(*(undefined8 *)(param_1 + 0x20),local_30,param_1);
  FUN_143b819f0(*(undefined8 *)(param_1 + 0x20));
  FUN_143b76260(param_1,param_2);
  return;
}



// FUNCTION 143b76770 FUN_143b76770 body=109 status=ok
// SIG undefined FUN_143b76770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b76770(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  FUN_143b759c0(param_2,local_28);
  FUN_143b80ba0(*(undefined8 *)(param_1 + 0x20),local_28,param_1);
  FUN_143b76260(param_1,SUB84((double)param_2,0));
  return;
}



// FUNCTION 143b767e0 FUN_143b767e0 body=136 status=ok
// SIG undefined FUN_143b767e0(void)

void FUN_143b767e0(longlong param_1,int param_2)

{
  undefined4 local_18;
  
  local_18 = **(int **)(param_1 + 0x20);
  if (((*(char *)(*(longlong *)(param_1 + 0x20) + 9) == '\0') && (**(int **)(param_1 + 0x20) == 1))
     && ((*(byte *)(*(longlong *)(param_1 + 0x20) + 8) & 0x70) == 0)) {
    local_18 = 0;
  }
  *(int *)(*(longlong *)(param_1 + 0x20) + 4) = param_2 - local_18;
  FUN_143b76240(param_1);
  return;
}



// FUNCTION 143b76870 FUN_143b76870 body=97 status=ok
// SIG undefined FUN_143b76870(void)

void FUN_143b76870(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    *(byte *)(*(longlong *)(param_1 + 0x20) + 8) =
         *(byte *)(*(longlong *)(param_1 + 0x20) + 8) | 0x80;
  }
  else {
    *(byte *)(*(longlong *)(param_1 + 0x20) + 8) =
         *(byte *)(*(longlong *)(param_1 + 0x20) + 8) & 0x7f;
  }
  FUN_143b76240(param_1);
  return;
}



// FUNCTION 143b768e0 FUN_143b768e0 body=171 status=ok
// SIG undefined FUN_143b768e0(void)

void FUN_143b768e0(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_18;
  
  switch(param_2) {
  case 0:
    local_18 = 0;
    break;
  case 1:
    local_18 = 6;
    break;
  case 2:
    local_18 = 5;
    break;
  case 3:
    local_18 = 1;
    break;
  case 4:
    local_18 = 3;
    break;
  case 5:
    local_18 = 4;
    break;
  case 6:
    local_18 = 2;
    break;
  case 7:
    local_18 = 3;
    break;
  default:
    local_18 = FUN_143a93e60(param_1);
  }
  FUN_143bec080(param_1,local_18);
  return;
}



// FUNCTION 143b769b0 FUN_143b769b0 body=45 status=ok
// SIG undefined FUN_143b769b0(void)

void FUN_143b769b0(longlong param_1)

{
  FUN_143b81920(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x20),param_1);
  return;
}



// FUNCTION 143b769e0 FUN_143b769e0 body=28 status=ok
// SIG undefined FUN_143b769e0(void)

void FUN_143b769e0(longlong param_1)

{
  FUN_143b819f0(*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 143b76a00 FUN_143b76a00 body=223 status=ok
// SIG undefined FUN_143b76a00(void)

undefined8 * FUN_143b76a00(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_20;
  
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::FieldPositionIteratorHandler::vftable;
  param_1[1] = param_2;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = *param_3;
  if (param_1[1] != 0) {
    cVar1 = FUN_143a8b110(*(undefined4 *)(param_1 + 3));
    if (cVar1 != '\0') {
      lVar2 = FUN_143a8d310(0x20);
      if (lVar2 == 0) {
        local_20 = 0;
      }
      else {
        local_20 = FUN_143e1c860(lVar2,param_1 + 3);
      }
      param_1[2] = local_20;
    }
  }
  return param_1;
}



// FUNCTION 143b76ae0 TopologyObject body=63 status=ok
// SIG undefined TopologyObject(void)

/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl Concurrency::details::GlobalCore::TopologyObject::TopologyObject(struct
   Concurrency::details::GlobalCore * __ptr64) __ptr64
    public: __cdecl Concurrency::details::GlobalNode::TopologyObject::TopologyObject(struct
   Concurrency::details::GlobalNode * __ptr64) __ptr64
   
   Libraries: Visual Studio 2012, Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

undefined8 * TopologyObject(undefined8 *param_1,undefined8 param_2)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::FieldPositionOnlyHandler::vftable;
  param_1[1] = param_2;
  return param_1;
}



// FUNCTION 143b76b20 ~RtAudioError body=21 status=ok
// SIG undefined ~RtAudioError(void)

void RtAudioError::~RtAudioError(undefined8 *param_1)

{
  *param_1 = icu_53::FieldPositionHandler::vftable;
  return;
}



// FUNCTION 143b76b40 FUN_143b76b40 body=110 status=ok
// SIG undefined FUN_143b76b40(void)

void FUN_143b76b40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = icu_53::FieldPositionIteratorHandler::vftable;
  if (param_1[1] != 0) {
    FUN_143bec0d0(param_1[1],param_1[2],param_1 + 3,param_4,0xfffffffffffffffe);
  }
  param_1[2] = 0;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143b76bb0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::FieldPositionOnlyHandler::vftable;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143b76be0 FUN_143b76be0 body=54 status=ok
// SIG undefined FUN_143b76be0(void)

undefined8 FUN_143b76be0(undefined8 param_1,uint param_2)

{
  FUN_143b76b40(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b76c20 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b76c60 FUN_143b76c60 body=20 status=ok
// SIG undefined FUN_143b76c60(void)

void FUN_143b76c60(void)

{
  return;
}



// FUNCTION 143b76c80 FUN_143b76c80 body=228 status=ok
// SIG undefined FUN_143b76c80(void)

void FUN_143b76c80(longlong param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    cVar1 = FUN_143a8b110(*(undefined4 *)(param_1 + 0x18));
    if ((cVar1 != '\0') && (param_3 < param_4)) {
      uVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(*(undefined8 *)(param_1 + 0x10));
      FUN_143b58ed0(*(undefined8 *)(param_1 + 0x10),param_2,param_1 + 0x18);
      FUN_143b58ed0(*(undefined8 *)(param_1 + 0x10),param_3,param_1 + 0x18);
      FUN_143b58ed0(*(undefined8 *)(param_1 + 0x10),param_4,param_1 + 0x18);
      cVar1 = FUN_143a8b110(*(undefined4 *)(param_1 + 0x18));
      if (cVar1 == '\0') {
        FUN_143e1cdd0(*(undefined8 *)(param_1 + 0x10),uVar2);
      }
    }
  }
  return;
}



// FUNCTION 143b76d70 FUN_143b76d70 body=84 status=ok
// SIG undefined FUN_143b76d70(void)

void FUN_143b76d70(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(*(undefined8 *)(param_1 + 8));
  if (iVar1 == param_2) {
    FUN_143b44cd0(*(undefined8 *)(param_1 + 8),param_3);
    FUN_143b76e30(*(undefined8 *)(param_1 + 8),param_4);
  }
  return;
}



// FUNCTION 143b76dd0 FUN_143b76dd0 body=27 status=ok
// SIG undefined FUN_143b76dd0(void)

void FUN_143b76dd0(longlong param_1)

{
  FUN_143a8b110(*(undefined4 *)(param_1 + 0x18));
  return;
}



// FUNCTION 143b76df0 FUN_143b76df0 body=50 status=ok
// SIG undefined FUN_143b76df0(void)

bool FUN_143b76df0(longlong param_1)

{
  int iVar1;
  
  iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(*(undefined8 *)(param_1 + 8));
  return iVar1 != -1;
}



// FUNCTION 143b76e30 FUN_143b76e30 body=22 status=ok
// SIG undefined FUN_143b76e30(void)

void FUN_143b76e30(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// FUNCTION 143b76e50 FUN_143b76e50 body=192 status=ok
// SIG undefined FUN_143b76e50(void)

void FUN_143b76e50(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = FUN_143a8b110(*(undefined4 *)(param_1 + 0x18));
  if ((cVar1 != '\0') && (param_2 != 0)) {
    iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(param_1 + 0x10));
    if (0 < iVar2) {
      iVar3 = FUN_143b59890(*(undefined8 *)(param_1 + 0x10),iVar2 + -1);
      FUN_143e1cd90(*(undefined8 *)(param_1 + 0x10),param_2 + iVar3,iVar2 + -1);
      iVar3 = FUN_143b59890(*(undefined8 *)(param_1 + 0x10),iVar2 + -2);
      FUN_143e1cd90(*(undefined8 *)(param_1 + 0x10),param_2 + iVar3,iVar2 + -2);
    }
  }
  return;
}



// FUNCTION 143b76f10 FUN_143b76f10 body=139 status=ok
// SIG undefined FUN_143b76f10(void)

void FUN_143b76f10(longlong param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(param_1 + 8));
    if (iVar1 != -1) {
      iVar1 = FUN_143a93e60(*(undefined8 *)(param_1 + 8));
      if (iVar1 != -1) {
        iVar1 = FUN_143a93e60(*(undefined8 *)(param_1 + 8));
        FUN_143b44cd0(*(undefined8 *)(param_1 + 8),param_2 + iVar1);
        iVar1 = FUN_143a91e00(*(undefined8 *)(param_1 + 8));
        FUN_143b76e30(*(undefined8 *)(param_1 + 8),param_2 + iVar1);
      }
    }
  }
  return;
}



// FUNCTION 143b76fa0 FUN_143b76fa0 body=118 status=ok
// SIG undefined FUN_143b76fa0(void)

undefined8 *
FUN_143b76fa0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143b369c0(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::ChoiceFormat::vftable;
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x170);
  FUN_143e1e010(param_1 + 0x2f,param_2 + 0x178);
  return param_1;
}



// FUNCTION 143b77020 FUN_143b77020 body=128 status=ok
// SIG undefined FUN_143b77020(void)

undefined8 *
FUN_143b77020(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_143b36a10(param_1);
  *param_1 = icu_53::ChoiceFormat::vftable;
  *(undefined4 *)(param_1 + 0x2e) = *param_3;
  FUN_143e1df40(param_1 + 0x2f,param_3);
  FUN_143b771f0(param_1,param_2,param_3,param_4,uVar1);
  return param_1;
}



// FUNCTION 143b770a0 ~COleUpdateDialog body=58 status=ok
// SIG void ~COleUpdateDialog(COleUpdateDialog * this)

/* Library Function - Single Match
    public: virtual __cdecl COleUpdateDialog::~COleUpdateDialog(void) __ptr64
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2010 Debug */

void __thiscall COleUpdateDialog::~COleUpdateDialog(COleUpdateDialog *this)

{
  *(undefined ***)this = icu_53::ChoiceFormat::vftable;
  FUN_143e1e170(this + 0x178);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(this);
  return;
}



// FUNCTION 143b770e0 FUN_143b770e0 body=102 status=ok
// SIG undefined FUN_143b770e0(void)

undefined8 FUN_143b770e0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == param_2) {
    uVar2 = 1;
  }
  else {
    cVar1 = FUN_143b36e70(param_1,param_2);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_143e1e250(param_1 + 0x178,param_2 + 0x178);
    }
  }
  return uVar2;
}



// FUNCTION 143b77150 FUN_143b77150 body=54 status=ok
// SIG undefined FUN_143b77150(void)

COleUpdateDialog * FUN_143b77150(COleUpdateDialog *param_1,uint param_2)

{
  COleUpdateDialog::~COleUpdateDialog(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b77190 FUN_143b77190 body=81 status=ok
// SIG undefined FUN_143b77190(void)

void FUN_143b77190(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  FUN_143e20590(param_1 + 0x178,param_2,param_3,param_4);
  *(undefined4 *)(param_1 + 0x170) = *param_4;
  return;
}



// FUNCTION 143b771f0 FUN_143b771f0 body=74 status=ok
// SIG undefined FUN_143b771f0(void)

void FUN_143b771f0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  FUN_143e20590(param_1 + 0x178,param_2,0,param_3);
  *(undefined4 *)(param_1 + 0x170) = *param_3;
  return;
}



// FUNCTION 143b77240 FUN_143b77240 body=102 status=ok
// SIG undefined FUN_143b77240(void)

undefined8 FUN_143b77240(undefined8 param_1)

{
  longlong lVar1;
  undefined8 local_30;
  
  lVar1 = FUN_143a8d310(0x1e0);
  if (lVar1 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = FUN_143b76fa0(lVar1,param_1);
  }
  return local_30;
}



// FUNCTION 143b772b0 FUN_143b772b0 body=14 status=ok
// SIG undefined FUN_143b772b0(void)

undefined4 FUN_143b772b0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// FUNCTION 143b772c0 FUN_143b772c0 body=532 status=ok
// SIG undefined FUN_143b772c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b772c0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined1 auStack_a8 [32];
  char *local_88;
  char *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [40];
  char local_38 [32];
  ulonglong local_18;
  
  local_68 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = local_38;
  sprintf(local_38,"%.*g",0xf,param_1);
  for (; *local_88 != '\0'; local_88 = local_88 + 1) {
    if (*local_88 != '-') {
      iVar1 = isdigit((int)*local_88);
      if (iVar1 == 0) break;
    }
  }
  if ((*local_88 != '\0') && (*local_88 != 'e')) {
    *local_88 = '.';
    local_88 = local_88 + 1;
  }
  for (; (*local_88 != '\0' && (*local_88 != 'e')); local_88 = local_88 + 1) {
  }
  if (*local_88 == 'e') {
    pcVar2 = local_88 + 1;
    if ((*pcVar2 == '+') || (*pcVar2 == '-')) {
      pcVar2 = local_88 + 2;
    }
    local_88 = pcVar2;
    pcVar2 = local_88;
    local_80 = local_88;
    for (; *local_88 == '0'; local_88 = local_88 + 1) {
    }
    if ((*local_88 != '\0') && (pcVar2 != local_88)) {
      for (; *local_88 != '\0'; local_88 = local_88 + 1) {
        *local_80 = *local_88;
        local_80 = local_80 + 1;
      }
      *local_80 = '\0';
    }
  }
  local_78 = FUN_143a8d9f0(local_60,local_38,0xffffffff,0);
  local_70 = local_78;
  FUN_143a8dcd0(param_2,local_78);
  FUN_143a8dc60(local_60);
  return param_2;
}



// FUNCTION 143b774e0 FUN_143b774e0 body=363 status=ok
// SIG undefined FUN_143b774e0(void)

int FUN_143b774e0(undefined8 param_1,int param_2,double param_3)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  double dVar8;
  int local_res10;
  
  iVar3 = FUN_143b772b0(param_1);
  iVar4 = param_2 + 2;
  while( true ) {
    local_res10 = iVar4;
    iVar4 = FUN_143b77980(param_1,local_res10);
    if (iVar3 <= iVar4 + 1) {
      return local_res10;
    }
    uVar7 = FUN_143b779c0(param_1,iVar4 + 1);
    iVar5 = FStoredID::GetData<unsigned_int>(uVar7);
    if (iVar5 == 6) break;
    dVar8 = (double)FUN_143e1ef80(param_1,uVar7);
    uVar6 = FUN_143b77a10(param_1,iVar4 + 2);
    uVar7 = RtAudioError::getType(param_1);
    sVar2 = FUN_143a8e4f0(uVar7,uVar6);
    if (sVar2 == 0x3c) {
      bVar1 = param_3 <= dVar8;
    }
    else {
      bVar1 = param_3 < dVar8;
    }
    iVar4 = iVar4 + 3;
    if (bVar1) {
      return local_res10;
    }
  }
  return local_res10;
}



// FUNCTION 143b77650 FUN_143b77650 body=66 status=ok
// SIG undefined FUN_143b77650(void)

void FUN_143b77650(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*param_1 + 0x90))(param_1,SUB84((double)param_2,0),param_3,param_4);
  return;
}



// FUNCTION 143b776a0 FUN_143b776a0 body=294 status=ok
// SIG undefined FUN_143b776a0(void)

undefined8 FUN_143b776a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar2 = FUN_143b772b0(param_1 + 0x178);
  if (iVar2 != 0) {
    uVar3 = FUN_143b774e0(param_1 + 0x178,0,param_2);
    cVar1 = FUN_143b77a70(param_1 + 0x178);
    if (cVar1 == '\0') {
      uVar5 = FUN_143b779c0(param_1 + 0x178,uVar3);
      iVar2 = FUN_143b77960(uVar5);
      uVar3 = FUN_143b77980(param_1 + 0x178,uVar3);
      iVar4 = FUN_143b77a10(param_1 + 0x178,uVar3);
      uVar5 = RtAudioError::getType(param_1 + 0x178);
      FUN_143acc540(param_3,uVar5,iVar2,iVar4 - iVar2);
    }
    else {
      param_3 = FUN_143e1e820(param_1 + 0x178,uVar3,param_3);
    }
  }
  return param_3;
}



// FUNCTION 143b777d0 FUN_143b777d0 body=234 status=ok
// SIG undefined FUN_143b777d0(void)

undefined8
FUN_143b777d0(longlong *param_1,longlong param_2,int param_3,undefined8 param_4,undefined8 param_5,
             undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int local_18;
  
  if (param_3 < 0) {
    *param_6 = 1;
  }
  else {
    iVar2 = FUN_143b772b0(param_1 + 0x2f);
    if (iVar2 == 0) {
      *param_6 = 0x1b;
    }
    else {
      for (local_18 = 0; local_18 < param_3; local_18 = local_18 + 1) {
        uVar3 = FUN_143b69180(param_2 + (longlong)local_18 * 0xd8,param_6);
        cVar1 = FUN_143a8b110(*param_6);
        if (cVar1 != '\0') {
          (**(code **)(*param_1 + 0x90))(param_1,uVar3,param_4,param_5);
        }
      }
    }
  }
  return param_4;
}



// FUNCTION 143b778c0 FUN_143b778c0 body=68 status=ok
// SIG undefined FUN_143b778c0(void)

void FUN_143b778c0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*param_1 + 0x90))(param_1,SUB84((double)param_2,0),param_3,param_4);
  return;
}



// FUNCTION 143b77910 ue4sCheckReservedLock body=24 status=ok
// SIG undefined ue4sCheckReservedLock(void)

undefined8 MUTKSQLiteDBInner::ue4sCheckReservedLock(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 0;
}



// FUNCTION 143b77930 FUN_143b77930 body=19 status=ok
// SIG undefined FUN_143b77930(void)

void FUN_143b77930(void)

{
  FUN_143b77a50();
  return;
}



// FUNCTION 143b77950 FUN_143b77950 body=14 status=ok
// SIG undefined FUN_143b77950(void)

undefined4 FUN_143b77950(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



// FUNCTION 143b77960 FUN_143b77960 body=23 status=ok
// SIG undefined FUN_143b77960(void)

int FUN_143b77960(longlong param_1)

{
  return (uint)*(ushort *)(param_1 + 8) + *(int *)(param_1 + 4);
}



// FUNCTION 143b77980 FUN_143b77980 body=59 status=ok
// SIG undefined FUN_143b77980(void)

int FUN_143b77980(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_143b779c0(param_1,param_2);
  iVar1 = *(int *)(lVar2 + 0xc);
  if (iVar1 < param_2) {
    iVar1 = param_2;
  }
  return iVar1;
}



// FUNCTION 143b779c0 FUN_143b779c0 body=28 status=ok
// SIG undefined FUN_143b779c0(void)

longlong FUN_143b779c0(longlong param_1,int param_2)

{
  return (longlong)param_2 * 0x10 + *(longlong *)(param_1 + 0x40);
}



// FUNCTION 143b779e0 FUN_143b779e0 body=34 status=ok
// SIG undefined FUN_143b779e0(void)

undefined4 FUN_143b779e0(undefined8 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_143b779c0(param_1,param_2);
  return *puVar1;
}



// FUNCTION 143b77a10 FUN_143b77a10 body=35 status=ok
// SIG undefined FUN_143b77a10(void)

undefined4 FUN_143b77a10(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_143b779c0(param_1,param_2);
  return *(undefined4 *)(lVar1 + 4);
}



// FUNCTION 143b77a40 getType body=15 status=ok
// SIG undefined getType(void)

longlong RtAudioError::getType(longlong param_1)

{
  return param_1 + 0x10;
}



// FUNCTION 143b77a50 FUN_143b77a50 body=8 status=ok
// SIG undefined FUN_143b77a50(void)

undefined * FUN_143b77a50(void)

{
  return &DAT_146bc81a4;
}



// FUNCTION 143b77a60 GetData<unsigned_int> body=13 status=ok
// SIG undefined GetData<unsigned_int>(void)

undefined4 FStoredID::GetData<unsigned_int>(undefined4 *param_1)

{
  return *param_1;
}



// FUNCTION 143b77a70 FUN_143b77a70 body=46 status=ok
// SIG undefined FUN_143b77a70(void)

bool FUN_143b77a70(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_1);
  return iVar1 == 1;
}



// FUNCTION 143b77aa0 FUN_143b77aa0 body=280 status=ok
// SIG undefined FUN_143b77aa0(void)

int FUN_143b77aa0(undefined8 param_1,int param_2,int param_3,undefined8 param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int local_res10;
  int local_24;
  int local_20;
  
  local_24 = 0;
  uVar3 = RtAudioError::getType(param_1);
  uVar4 = FUN_143b779c0(param_1,param_2);
  local_20 = FUN_143b77960(uVar4);
  local_res10 = param_2;
LAB_143b77ae8:
  local_res10 = local_res10 + 1;
  uVar4 = FUN_143b779c0(param_1,local_res10);
  if (local_res10 != param_3) goto code_r0x000143b77b0f;
  goto LAB_143b77b22;
code_r0x000143b77b0f:
  iVar2 = FStoredID::GetData<unsigned_int>(uVar4);
  if (iVar2 == 2) {
LAB_143b77b22:
    iVar2 = FUN_143b77950(uVar4);
    iVar2 = iVar2 - local_20;
    if ((iVar2 != 0) &&
       (cVar1 = FUN_143b3e630(param_4,param_5,iVar2,uVar3,local_20,iVar2), cVar1 != '\0')) {
      return -1;
    }
    local_24 = local_24 + iVar2;
    if (local_res10 == param_3) {
      return local_24;
    }
    local_20 = FUN_143b77960(uVar4);
  }
  goto LAB_143b77ae8;
}



// FUNCTION 143b77bc0 FUN_143b77bc0 body=73 status=ok
// SIG undefined FUN_143b77bc0(void)

void FUN_143b77bc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143b77c10(param_1 + 0x178,0,param_2,param_4);
  FUN_143b698c0(param_3,uVar1);
  return;
}



// FUNCTION 143b77c10 FUN_143b77c10 body=366 status=ok
// SIG undefined FUN_143b77c10(void)

undefined8 FUN_143b77c10(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int local_res10;
  int local_34;
  undefined8 local_18;
  
  iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_4);
  local_18 = FUN_143a91920();
  iVar2 = FUN_143b772b0(param_1);
  local_res10 = param_2;
  local_34 = iVar1;
  while ((local_res10 < iVar2 && (iVar3 = FUN_143b779e0(param_1,local_res10), iVar3 != 6))) {
    uVar6 = FUN_143b779c0(param_1,local_res10);
    uVar6 = FUN_143e1ef80(param_1,uVar6);
    iVar3 = FUN_143b77980(param_1,local_res10 + 2);
    iVar4 = FUN_143b77aa0(param_1,local_res10 + 2,iVar3,param_3,iVar1);
    if ((-1 < iVar4) &&
       ((iVar4 = iVar1 + iVar4, local_34 < iVar4 &&
        (iVar5 = FUN_143a904f0(param_3), local_34 = iVar4, local_18 = uVar6, iVar4 == iVar5))))
    break;
    local_res10 = iVar3 + 1;
  }
  if (local_34 == iVar1) {
    FUN_143b44cd0(param_4,iVar1);
  }
  else {
    FUN_143b0fce0(param_4,local_34);
  }
  return local_18;
}



// FUNCTION 143b77d80 FUN_143b77d80 body=766 status=ok
// SIG undefined FUN_143b77d80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b77d80(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
                  undefined4 *param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  short local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_68 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  cVar1 = FUN_143a8b0e0(*param_6);
  if (cVar1 == '\0') {
    if ((param_2 == 0) || (param_4 == 0)) {
      *param_6 = 1;
    }
    else {
      FUN_143a8ac30(local_60);
      for (local_84 = 0; local_84 < param_5; local_84 = local_84 + 1) {
        if (local_84 != 0) {
          FUN_143acc590(local_60,0x7c);
        }
        FUN_143a8ac30(local_38);
        cVar1 = FUN_143a91a60(*(undefined8 *)(param_2 + (longlong)local_84 * 8));
        if (cVar1 == '\0') {
          cVar1 = FUN_143a91a20(*(undefined8 *)(param_2 + (longlong)local_84 * 8));
          if (cVar1 == '\0') {
            uVar2 = FUN_143b772c0(*(undefined8 *)(param_2 + (longlong)local_84 * 8),local_38);
            FUN_143a8e070(local_60,uVar2);
          }
          else {
            FUN_143acc590(local_60,0x2d);
            FUN_143acc590(local_60,0x221e);
          }
        }
        else {
          FUN_143acc590(local_60,0x221e);
        }
        if ((param_3 == 0) || (*(char *)(param_3 + local_84) == '\0')) {
          FUN_143acc590(local_60,0x23);
        }
        else {
          FUN_143acc590(local_60,0x3c);
        }
        local_70 = param_4 + (longlong)local_84 * 0x28;
        local_78 = FUN_143a904f0(local_70);
        local_80 = 0;
        for (local_7c = 0; local_7c < local_78; local_7c = local_7c + 1) {
          local_88 = FUN_143a8e4f0(local_70,local_7c);
          if ((local_88 == 0x27) && (local_80 == 0)) {
            FUN_143acc590(local_60,0x27);
LAB_143b78014:
            FUN_143acc590(local_60,local_88);
          }
          else {
            if ((local_88 != 0x7c) || (local_80 != 0)) {
              if (local_88 == 0x7b) {
                local_80 = local_80 + 1;
              }
              else if ((local_88 == 0x7d) && (0 < local_80)) {
                local_80 = local_80 + -1;
              }
              goto LAB_143b78014;
            }
            uVar2 = FUN_143acc590(local_60,0x27);
            uVar2 = FUN_143acc590(uVar2,local_88);
            FUN_143acc590(uVar2,0x27);
          }
        }
        FUN_143a8dc60(local_38);
      }
      (**(code **)(*param_1 + 0x118))(param_1,local_60,param_6);
      FUN_143a8dc60(local_60);
    }
  }
  return;
}



// FUNCTION 143b78080 FUN_143b78080 body=89 status=ok
// SIG undefined FUN_143b78080(void)

void FUN_143b78080(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined4 local_18 [6];
  
  local_18[0] = 0;
  (**(code **)(*param_1 + 0x128))(param_1,param_2,param_3,param_4,param_5,local_18);
  return;
}



// FUNCTION 143b780e0 FUN_143b780e0 body=87 status=ok
// SIG undefined FUN_143b780e0(void)

void FUN_143b780e0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 local_18 [6];
  
  local_18[0] = 0;
  (**(code **)(*param_1 + 0x128))(param_1,param_2,0,param_3,param_4,local_18);
  return;
}



// FUNCTION 143b78140 FUN_143b78140 body=51 status=ok
// SIG undefined FUN_143b78140(void)

void FUN_143b78140(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = RtAudioError::getType(param_1 + 0x178);
  FUN_143a8dcd0(param_2,uVar1);
  return;
}



// FUNCTION 143b78180 FUN_143b78180 body=119 status=ok
// SIG undefined FUN_143b78180(void)

undefined8 *
FUN_143b78180(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143a8abc0(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::CurrencyPluralInfo::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_143b78380(param_1,param_2);
  return param_1;
}



// FUNCTION 143b78200 FUN_143b78200 body=124 status=ok
// SIG undefined FUN_143b78200(void)

undefined8 *
FUN_143b78200(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::CurrencyPluralInfo::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_143b78b80(param_1,param_2,param_3,param_4,uVar1);
  return param_1;
}



// FUNCTION 143b78280 FUN_143b78280 body=246 status=ok
// SIG undefined FUN_143b78280(void)

void FUN_143b78280(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::CurrencyPluralInfo::vftable;
  FUN_143b787e0(param_1,param_1[1]);
  param_1[1] = 0;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143b78380 FUN_143b78380 body=392 status=ok
// SIG undefined FUN_143b78380(void)

longlong FUN_143b78380(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_48 [2];
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  
  if (param_1 != param_2) {
    FUN_143b787e0(param_1,*(undefined8 *)(param_1 + 8));
    local_48[0] = 0;
    uVar2 = FUN_143b78a70(param_1,local_48);
    *(undefined8 *)(param_1 + 8) = uVar2;
    FUN_143b78640(param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_1 + 8),local_48);
    cVar1 = FUN_143a8b0e0(local_48[0]);
    if (cVar1 == '\0') {
      local_40 = *(undefined8 **)(param_1 + 0x10);
      local_30 = local_40;
      if (local_40 == (undefined8 *)0x0) {
        local_28 = 0;
      }
      else {
        local_28 = (**(code **)*local_40)(local_40,1);
      }
      local_38 = *(undefined8 **)(param_1 + 0x18);
      local_20 = local_38;
      if (local_38 == (undefined8 *)0x0) {
        local_18 = 0;
      }
      else {
        local_18 = (**(code **)*local_38)(local_38,1);
      }
      if (*(longlong *)(param_2 + 0x10) == 0) {
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
      else {
        uVar2 = CreateInternalContext(*(undefined8 *)(param_2 + 0x10));
        *(undefined8 *)(param_1 + 0x10) = uVar2;
      }
      if (*(longlong *)(param_2 + 0x18) == 0) {
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      else {
        uVar2 = CreateInternalContext(*(undefined8 *)(param_2 + 0x18));
        *(undefined8 *)(param_1 + 0x18) = uVar2;
      }
    }
  }
  return param_1;
}



// FUNCTION 143b78510 FUN_143b78510 body=136 status=ok
// SIG undefined FUN_143b78510(void)

undefined1 FUN_143b78510(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
                    (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
  if (((cVar1 != '\0') &&
      (cVar1 = FUN_143a8afa0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18)),
      cVar1 != '\0')) &&
     (cVar1 = FUN_143b40580(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 8)),
     cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 143b785a0 FUN_143b785a0 body=54 status=ok
// SIG undefined FUN_143b785a0(void)

undefined8 FUN_143b785a0(undefined8 param_1,uint param_2)

{
  FUN_143b78280(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b785e0 CreateInternalContext body=92 status=ok
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
    local_20 = FUN_143b78180(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143b78640 FUN_143b78640 body=404 status=ok
// SIG undefined FUN_143b78640(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b78640(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 local_a0 [2];
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    local_a0[0] = 0xffffffff;
    local_a8 = 0;
    if (param_2 != 0) {
      do {
        local_a8 = <lambda_04c79fd4136733a528ca0b360569665b>::operator()(param_2,local_a0);
        if (local_a8 == 0) {
          return;
        }
        local_58 = *(undefined8 *)(local_a8 + 0x10);
        local_88 = *(undefined8 *)(local_a8 + 8);
        local_78 = local_88;
        local_50 = local_58;
        local_98 = FUN_143a8d310(0x28);
        if (local_98 == 0) {
          local_90 = 0;
        }
        else {
          local_90 = FUN_143a8d3a0(local_98,local_88);
        }
        local_68 = local_90;
        local_70 = local_90;
        local_80 = FUN_143a8d3a0(local_40,local_50);
        local_60 = local_80;
        FUN_143acdfd0(param_3,local_80,local_70,param_4);
        FUN_143a8dc60(local_40);
        cVar1 = FUN_143a8b0e0(*param_4);
      } while (cVar1 == '\0');
    }
  }
  return;
}



// FUNCTION 143b787e0 FUN_143b787e0 body=247 status=ok
// SIG undefined FUN_143b787e0(void)

void FUN_143b787e0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 local_48 [2];
  longlong local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 *local_28;
  longlong local_20;
  undefined8 *local_18;
  
  if (param_2 != 0) {
    local_48[0] = 0xffffffff;
    lVar1 = 0;
    while (lVar1 = <lambda_04c79fd4136733a528ca0b360569665b>::operator()
                             (param_2,local_48,param_3,param_4,lVar1), lVar1 != 0) {
      local_38 = *(undefined8 **)(lVar1 + 8);
      local_28 = local_38;
      local_18 = local_38;
      if (local_38 == (undefined8 *)0x0) {
        local_30 = 0;
      }
      else {
        local_30 = (**(code **)*local_38)(local_38,1);
      }
    }
    if (param_2 != 0) {
      local_40 = param_2;
      local_20 = param_2;
      FID_conflict__scalar_deleting_destructor_(param_2,1);
    }
  }
  return;
}



// FUNCTION 143b788e0 FUN_143b788e0 body=330 status=ok
// SIG undefined FUN_143b788e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b788e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_70 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_98 = <lambda_04c79fd4136733a528ca0b360569665b>::operator()
                       (*(undefined8 *)(param_1 + 8),param_2);
  if (local_98 == 0) {
    cVar1 = FUN_143b0fc90(param_2,L"other",5);
    if (cVar1 != '\0') {
      local_80 = FUN_143a8d4f0(local_68,1,L"other",5);
      local_78 = local_80;
      local_98 = <lambda_04c79fd4136733a528ca0b360569665b>::operator()
                           (*(undefined8 *)(param_1 + 8),local_80);
      FUN_143a8dc60(local_68);
    }
    if (local_98 == 0) {
      local_90 = FUN_143a8dad0(local_40,&DAT_145d138c8);
      local_88 = local_90;
      FUN_143a8dcd0(param_3,local_90);
      FUN_143a8dc60(local_40);
      return param_3;
    }
  }
  FUN_143a8dcd0(param_3,local_98);
  return param_3;
}



// FUNCTION 143b78a30 FUN_143b78a30 body=19 status=ok
// SIG undefined FUN_143b78a30(void)

void FUN_143b78a30(void)

{
  FUN_143b78a60();
  return;
}



// FUNCTION 143b78a50 GetObjectForTimerManager body=15 status=ok
// SIG undefined GetObjectForTimerManager(void)

undefined8
TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 143b78a60 FUN_143b78a60 body=8 status=ok
// SIG undefined FUN_143b78a60(void)

undefined * FUN_143b78a60(void)

{
  return &DAT_146bc81a5;
}



// FUNCTION 143b78a70 FUN_143b78a70 body=257 status=ok
// SIG undefined FUN_143b78a70(void)

longlong FUN_143b78a70(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong local_38;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    lVar2 = FUN_143a8d310(0x58);
    if (lVar2 == 0) {
      local_38 = 0;
    }
    else {
      local_38 = FUN_143b3a850(lVar2,1,param_2);
    }
    if (local_38 == 0) {
      *param_2 = 7;
      local_38 = 0;
    }
    else {
      cVar1 = FUN_143a8b0e0(*param_2);
      if (cVar1 == '\0') {
        <lambda_04c79fd4136733a528ca0b360569665b>::operator()(local_38,FUN_143b794f0);
      }
      else {
        if (local_38 != 0) {
          FID_conflict__scalar_deleting_destructor_(local_38,1);
        }
        local_38 = 0;
      }
    }
  }
  else {
    local_38 = 0;
  }
  return local_38;
}



// FUNCTION 143b78b80 FUN_143b78b80 body=259 status=ok
// SIG undefined FUN_143b78b80(void)

void FUN_143b78b80(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_143a8b0e0(*param_3);
  if (cVar2 == '\0') {
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    uVar3 = CreateInternalContext(param_2);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    if ((*(longlong *)(param_1 + 0x10) != 0) &&
       (puVar1 = *(undefined8 **)(param_1 + 0x10), puVar1 != (undefined8 *)0x0)) {
      (**(code **)*puVar1)(puVar1,1);
    }
    uVar3 = FUN_143b59940(param_2,param_3);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    FUN_143b78c90(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 143b78c90 FUN_143b78c90 body=2133 status=ok
// SIG undefined FUN_143b78c90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b78c90(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *_Str1;
  undefined1 auStack_328 [32];
  int local_308;
  char local_304;
  int local_300;
  undefined8 local_2f8;
  int local_2f0;
  int local_2ec;
  undefined4 local_2e8;
  int local_2e4;
  undefined8 local_2e0;
  int local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  longlong local_2c0;
  undefined8 *local_2b8;
  longlong *local_2b0;
  undefined8 *local_2a8;
  longlong *local_2a0;
  longlong local_298;
  longlong local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 *local_238;
  undefined8 local_230;
  undefined8 local_228;
  longlong *local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [40];
  undefined1 local_180 [40];
  undefined1 local_158 [40];
  undefined1 local_130 [40];
  undefined1 local_108 [40];
  undefined1 local_e0 [40];
  undefined1 local_b8 [40];
  undefined1 local_90 [40];
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_1b0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_143b787e0(param_1,*(undefined8 *)(param_1 + 8));
    }
    uVar3 = FUN_143b78a70(param_1,param_3);
    *(undefined8 *)(param_1 + 8) = uVar3;
    cVar1 = FUN_143a8b0e0(*param_3);
    if (cVar1 == '\0') {
      local_2b8 = (undefined8 *)FUN_143b6f670(param_2,param_3);
      local_308 = 0;
      uVar3 = FUN_143a8c200(param_2);
      local_2f8 = FUN_143aa5b10(0,uVar3,&local_308);
      local_2c8 = FUN_143aa3350(local_2f8,"NumberElements",0,&local_308);
      uVar3 = FUN_143b6fdc0(local_2b8);
      local_2f8 = FUN_143aa3350(local_2c8,uVar3,local_2f8,&local_308);
      local_2f8 = FUN_143aa3350(local_2f8,"patterns",local_2f8,&local_308);
      local_2d0 = FUN_143aa4fe0(local_2f8,"decimalFormat",&local_2f0,&local_308);
      if (local_308 == 2) {
        _Str1 = (char *)FUN_143b6fdc0(local_2b8);
        iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"latn");
        if (iVar2 != 0) {
          local_308 = 0;
          local_2f8 = FUN_143aa3350(local_2c8,&DAT_145d13918,local_2f8,&local_308);
          local_2f8 = FUN_143aa3350(local_2f8,"patterns",local_2f8,&local_308);
          local_2d0 = FUN_143aa4fe0(local_2f8,"decimalFormat",&local_2f0,&local_308);
        }
      }
      local_2e4 = local_2f0;
      local_290 = 0;
      local_2d8 = 0;
      local_304 = '\0';
      cVar1 = FUN_143a8b110(local_308);
      if (cVar1 != '\0') {
        for (local_300 = 0; local_300 < local_2f0; local_300 = local_300 + 1) {
          if (*(short *)(local_2d0 + (longlong)local_300 * 2) == 0x3b) {
            local_304 = '\x01';
            local_290 = local_2d0 + 2 + (longlong)local_300 * 2;
            local_2d8 = (local_2f0 - local_300) + -1;
            local_2e4 = local_300;
          }
        }
      }
      FUN_143aa2ef0(local_2c8);
      FUN_143aa2ef0(local_2f8);
      local_238 = local_2b8;
      local_2a8 = local_2b8;
      if (local_2b8 == (undefined8 *)0x0) {
        local_258 = 0;
      }
      else {
        local_258 = (**(code **)*local_2b8)(local_2b8,1);
      }
      cVar1 = FUN_143a8b0e0(local_308);
      if (cVar1 == '\0') {
        uVar3 = FUN_143a8c200(param_2);
        local_270 = FUN_143aa5b10("icudt53l-curr",uVar3,&local_308);
        local_280 = FUN_143aa3350(local_270,"CurrencyUnitPatterns",0,&local_308);
        local_2b0 = (longlong *)FUN_143b59ec0(*(undefined8 *)(param_1 + 0x10),&local_308);
        cVar1 = FUN_143a8b110(local_308);
        if (cVar1 != '\0') {
          while (local_2c0 = (**(code **)(*local_2b0 + 0x20))(local_2b0,0,&local_308),
                local_2c0 != 0) {
            cVar1 = FUN_143a8b110(local_308);
            if (cVar1 != '\0') {
              local_2e8 = 0;
              local_278 = FUN_143aa4fe0(local_280,local_2c0,&local_2ec,&local_2e8);
              cVar1 = FUN_143a8b110(local_2e8);
              if ((cVar1 != '\0') && (0 < local_2ec)) {
                local_298 = FUN_143a8d310(0x28);
                if (local_298 == 0) {
                  local_288 = 0;
                }
                else {
                  local_288 = FUN_143a8db50(local_298,local_278,local_2ec);
                }
                local_200 = local_288;
                local_2e0 = local_288;
                local_268 = FUN_143a8db50(local_b8,local_2d0,local_2e4);
                local_248 = local_268;
                local_1f8 = FUN_143a8d4f0(local_68,1,&DAT_145d138f8,3);
                local_1e8 = local_1f8;
                FUN_143b37590(local_2e0,local_1f8,local_268);
                FUN_143a8dc60(local_68);
                FUN_143a8dc60(local_b8);
                local_228 = FUN_143a8d4f0(local_180,1,&DAT_145d138e0,3);
                local_218 = local_228;
                local_1d8 = FUN_143a8d4f0(local_108,1,&DAT_145d13900,3);
                local_1c8 = local_1d8;
                FUN_143b37590(local_2e0,local_1d8,local_218);
                FUN_143a8dc60(local_108);
                FUN_143a8dc60(local_180);
                if (local_304 != '\0') {
                  FUN_143a8db50(local_1a8,local_278,local_2ec);
                  local_208 = FUN_143a8db50(local_130,local_290,local_2d8);
                  local_1c0 = local_208;
                  local_1f0 = FUN_143a8d4f0(local_158,1,&DAT_145d138f8,3);
                  local_1b8 = local_1f0;
                  FUN_143b37590(local_1a8,local_1f0,local_1c0);
                  FUN_143a8dc60(local_158);
                  FUN_143a8dc60(local_130);
                  local_260 = FUN_143a8d4f0(local_90,1,&DAT_145d138e0,3);
                  local_1d0 = local_260;
                  local_250 = FUN_143a8d4f0(local_e0,1,&DAT_145d13900,3);
                  local_1e0 = local_250;
                  FUN_143b37590(local_1a8,local_250,local_260);
                  FUN_143a8dc60(local_e0);
                  FUN_143a8dc60(local_90);
                  FUN_143acc590(local_2e0,0x3b);
                  FUN_143a8e070(local_2e0,local_1a8);
                  FUN_143a8dc60(local_1a8);
                }
                local_240 = FUN_143a8d9f0(local_40,local_2c0,0xffffffff,0);
                local_230 = local_240;
                FUN_143acdfd0(*(undefined8 *)(param_1 + 8),local_240,local_2e0,param_3);
                FUN_143a8dc60(local_40);
              }
            }
          }
        }
        local_220 = local_2b0;
        local_2a0 = local_2b0;
        if (local_2b0 == (longlong *)0x0) {
          local_210 = 0;
        }
        else {
          local_210 = (**(code **)*local_2b0)(local_2b0,1);
        }
        FUN_143aa2ef0(local_280);
        FUN_143aa2ef0(local_270);
      }
    }
  }
  return;
}



// FUNCTION 143b794f0 FUN_143b794f0 body=54 status=ok
// SIG undefined FUN_143b794f0(void)

void FUN_143b794f0(undefined8 param_1,undefined8 param_2)

{
  FUN_143a8dd00(param_1,param_2);
  return;
}



// FUNCTION 143b79530 FUN_143b79530 body=3604 status=ok
// SIG undefined FUN_143b79530(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint * FUN_143b79530(uint *param_1,uint *param_2,uint *param_3,int *param_4,byte param_5,
                    uint *param_6)

{
  uint *puVar1;
  uint uVar2;
  uint *local_res10;
  uint *local_res18;
  undefined1 auStack_128 [32];
  uint *local_108;
  uint *local_100;
  int local_f8;
  byte local_e8;
  byte local_e7;
  uint local_e4;
  char local_e0;
  int local_dc;
  uint local_d8;
  int local_d4;
  int local_d0;
  uint local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  uint *local_b8;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint *local_90;
  uint local_88;
  uint local_84;
  uint *local_80;
  uint local_78 [24];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_90 = (uint *)0x0;
  local_d0 = *param_4;
  local_e7 = ((byte)param_2[2] ^ (byte)param_3[2] ^ param_5) & 0x80;
  if ((((byte)param_2[2] | (byte)param_3[2]) & 0x70) == 0) {
    if (((*(char *)((longlong)param_2 + 9) == '\0') && (*param_2 == 1)) &&
       ((param_2[2] & 0x70) == 0)) {
      local_b0 = param_2[1];
      local_e8 = (byte)param_2[2];
      local_e4 = 0;
      local_108 = param_6;
      FUN_143b7b200(param_1,param_3,param_4,&local_e4);
      *(byte *)(param_1 + 2) = (byte)param_1[2] ^ param_5;
      local_d4 = local_b0 - param_1[1];
      if (((*(char *)((longlong)param_1 + 9) == '\0') && (*param_1 == 1)) &&
         ((param_1[2] & 0x70) == 0)) {
        if (local_d4 < 0) {
          param_1[1] = local_b0;
        }
        if (local_e7 != 0) {
          if (param_4[3] == 6) {
            *(undefined1 *)(param_1 + 2) = 0x80;
          }
          else {
            *(undefined1 *)(param_1 + 2) = 0;
          }
        }
      }
      else if (local_d4 < 0) {
        if (*param_4 < (int)(*param_1 - local_d4)) {
          local_d4 = *param_1 - *param_4;
          *param_6 = *param_6 | 0x800;
        }
        uVar2 = FUN_143b7f070((longlong)param_1 + 9,*param_1,-local_d4);
        *param_1 = uVar2;
        param_1[1] = param_1[1] + local_d4;
      }
      FUN_143b7c9f0(param_1,param_4,&local_e4,param_6);
    }
    else if (((*(char *)((longlong)param_3 + 9) == '\0') && (*param_3 == 1)) &&
            ((param_3[2] & 0x70) == 0)) {
      local_84 = param_3[1];
      local_e8 = (byte)param_3[2];
      local_e4 = 0;
      local_108 = param_6;
      FUN_143b7b200(param_1,param_2,param_4,&local_e4);
      local_c8 = local_84 - param_1[1];
      if (local_c8 < 0) {
        if (*param_4 < (int)(*param_1 - local_c8)) {
          local_c8 = *param_1 - *param_4;
          *param_6 = *param_6 | 0x800;
        }
        uVar2 = FUN_143b7f070((longlong)param_1 + 9,*param_1,-local_c8);
        *param_1 = uVar2;
        param_1[1] = param_1[1] + local_c8;
      }
      FUN_143b7c9f0(param_1,param_4,&local_e4,param_6);
    }
    else {
      local_dc = param_3[1] - param_2[1];
      if (((local_dc == 0) && ((int)*param_3 < 2)) &&
         ((param_4[2] <= (int)param_3[1] &&
          ((((int)param_3[1] <= (param_4[1] - *param_4) + 1 && ((int)*param_3 <= local_d0)) &&
           ((int)*param_2 <= local_d0)))))) {
        if (local_e7 == 0) {
          local_d8 = (uint)*(byte *)((longlong)param_2 + 9) + (uint)*(byte *)((longlong)param_3 + 9)
          ;
          if ((local_d8 < 10) &&
             ((0 < (int)*param_2 || ((int)local_d8 < (int)(&DAT_145d13af8)[(int)*param_2])))) {
            if (param_1 != param_2) {
              FUN_143b80a00(param_1,param_2);
            }
            *(undefined1 *)((longlong)param_1 + 9) = (undefined1)local_d8;
            goto LAB_143b7a30c;
          }
        }
        else {
          local_d8 = (uint)*(byte *)((longlong)param_2 + 9) - (uint)*(byte *)((longlong)param_3 + 9)
          ;
          if (0 < (int)local_d8) {
            if (param_1 != param_2) {
              FUN_143b80a00(param_1,param_2);
            }
            *(undefined1 *)((longlong)param_1 + 9) = (undefined1)local_d8;
            if ((int)*param_1 < 0x32) {
              local_88 = (uint)(byte)(&DAT_145d13ac0)[(int)*param_1];
            }
            else {
              local_88 = *param_1;
            }
            uVar2 = FUN_143b7cc60((longlong)param_1 + 9,local_88);
            *param_1 = uVar2;
            goto LAB_143b7a30c;
          }
        }
      }
      local_c0 = 0;
      local_e8 = (byte)param_2[2];
      local_c4 = 1;
      local_res10 = param_2;
      local_res18 = param_3;
      if (local_dc != 0) {
        local_e0 = local_dc < 0;
        if ((bool)local_e0) {
          local_dc = -local_dc;
          local_e8 = (byte)param_3[2] ^ param_5;
          local_res10 = param_3;
          local_res18 = param_2;
          local_80 = param_2;
        }
        if ((int)(*local_res10 + 1 + local_d0) < (int)(*local_res18 + local_dc)) {
          local_bc = local_d0 - *local_res18;
          local_e4 = 1;
          if (local_e7 != 0) {
            local_e4 = 0xffffffff;
          }
          local_108 = param_6;
          FUN_143b7b200(param_1,local_res18,param_4,&local_e4);
          if (0 < local_bc) {
            uVar2 = FUN_143b7f070((longlong)param_1 + 9,*param_1,local_bc);
            *param_1 = uVar2;
            param_1[1] = param_1[1] - local_bc;
          }
          if (local_e0 == '\0') {
            *(byte *)(param_1 + 2) = (byte)param_1[2] ^ param_5;
          }
          FUN_143b7c9f0(param_1,param_4,&local_e4,param_6);
          goto LAB_143b7a30c;
        }
        if (local_dc + 1 < 0x32) {
          local_a0 = (uint)(byte)(&DAT_145d13ac0)[local_dc + 1];
        }
        else {
          local_a0 = local_dc + 1;
        }
        local_c0 = local_a0 - 1;
        local_c4 = (&DAT_145d13af8)[local_dc - local_c0];
      }
      if (local_e7 != 0) {
        local_c4 = -local_c4;
      }
      local_cc = *local_res18 + local_dc;
      if ((int)local_cc < (int)*local_res10) {
        local_cc = *local_res10;
      }
      if ((local_d0 <= (int)local_cc) ||
         ((puVar1 = (uint *)((longlong)param_1 + 9), param_1 == local_res18 && (0 < local_c0)))) {
        if ((int)local_cc < 0x32) {
          local_a4 = (uint)(byte)(&DAT_145d13ac0)[(int)local_cc];
        }
        else {
          local_a4 = local_cc;
        }
        local_9c = local_a4 + 1;
        local_b8 = local_78;
        puVar1 = local_b8;
        if ((0x5c < local_9c) &&
           (local_90 = (uint *)FUN_143aa7a40((longlong)(int)local_9c), puVar1 = local_90,
           local_90 == (uint *)0x0)) {
          *param_6 = *param_6 | 0x10;
          goto LAB_143b7a30c;
        }
      }
      local_b8 = puVar1;
      *(byte *)(param_1 + 2) = local_e8 & 0x80;
      param_1[1] = local_res10[1];
      if ((int)*local_res18 < 0x32) {
        local_94 = (uint)(byte)(&DAT_145d13ac0)[(int)*local_res18];
      }
      else {
        local_94 = *local_res18;
      }
      if ((int)*local_res10 < 0x32) {
        local_98 = (uint)(byte)(&DAT_145d13ac0)[(int)*local_res10];
      }
      else {
        local_98 = *local_res10;
      }
      local_f8 = local_c4;
      local_100 = local_b8;
      local_108 = (uint *)CONCAT44(local_108._4_4_,local_c0);
      uVar2 = FUN_143b80160((longlong)local_res10 + 9,local_98,(longlong)local_res18 + 9,local_94);
      *param_1 = uVar2;
      if ((int)*param_1 < 0) {
        *param_1 = -*param_1;
        *(byte *)(param_1 + 2) = (byte)param_1[2] ^ 0x80;
      }
      local_e4 = 0;
      if (local_b8 != (uint *)((longlong)param_1 + 9)) {
        if (local_d0 < (int)*param_1) {
          if ((int)*param_1 < 0x32) {
            local_ac = (uint)(byte)(&DAT_145d13ac0)[(int)*param_1];
          }
          else {
            local_ac = *param_1;
          }
          uVar2 = FUN_143b7cc60(local_b8,local_ac);
          *param_1 = uVar2;
        }
        local_100 = param_6;
        local_108 = &local_e4;
        FUN_143b7e3c0(param_1,param_4,local_b8,*param_1);
      }
      if ((int)*param_1 < 0x32) {
        local_a8 = (uint)(byte)(&DAT_145d13ac0)[(int)*param_1];
      }
      else {
        local_a8 = *param_1;
      }
      uVar2 = FUN_143b7cc60((longlong)param_1 + 9,local_a8);
      *param_1 = uVar2;
      FUN_143b7c9f0(param_1,param_4,&local_e4,param_6);
      if ((((*(char *)((longlong)param_1 + 9) == '\0') && (*param_1 == 1)) &&
          ((param_1[2] & 0x70) == 0)) && ((local_e7 != 0 && ((*param_6 & 0x20) == 0)))) {
        if (param_4[3] == 6) {
          *(byte *)(param_1 + 2) = (byte)param_1[2] | 0x80;
        }
        else {
          *(byte *)(param_1 + 2) = (byte)param_1[2] & 0x7f;
        }
      }
    }
  }
  else if ((((byte)param_2[2] | (byte)param_3[2]) & 0x30) == 0) {
    if ((param_2[2] & 0x40) == 0) {
      param_5 = (byte)param_3[2] ^ param_5;
    }
    else {
      if (((param_3[2] & 0x40) != 0) && (local_e7 != 0)) {
        *param_6 = *param_6 | 0x80;
        goto LAB_143b7a30c;
      }
      param_5 = (byte)param_2[2];
    }
    local_e8 = param_5 & 0x80;
    local_e8 = local_e8 | 0x40;
    FUN_143b81a50(param_1);
    *(byte *)(param_1 + 2) = local_e8;
  }
  else {
    local_108 = param_6;
    FUN_143b7dd10(param_1,param_2,param_3,param_4);
  }
LAB_143b7a30c:
  if (local_90 != (uint *)0x0) {
    FUN_143aa79f0(local_90);
  }
  return param_1;
}



// FUNCTION 143b7a350 FUN_143b7a350 body=1394 status=ok
// SIG undefined FUN_143b7a350(void)

void FUN_143b7a350(uint *param_1,int *param_2,int param_3,uint *param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint local_48;
  uint local_44;
  byte *local_40;
  uint local_38;
  byte *local_30;
  uint local_24;
  
  if (param_3 != 0) {
    local_48 = 0;
    switch(param_2[3]) {
    case 0:
      if ((param_1[2] & 0x80) == 0) {
        if (0 < param_3) {
          local_48 = 1;
        }
      }
      else if (param_3 < 0) {
        local_48 = 0xffffffff;
      }
      break;
    case 1:
      local_48 = (uint)(0 < param_3);
      break;
    case 2:
      local_48 = (uint)(4 < param_3);
      break;
    case 3:
      if (param_3 < 6) {
        if ((param_3 == 5) && ((*(byte *)((longlong)param_1 + 9) & 1) != 0)) {
          local_48 = 1;
        }
      }
      else {
        local_48 = 1;
      }
      break;
    case 4:
      local_48 = (uint)(5 < param_3);
      break;
    case 5:
      if (param_3 < 0) {
        local_48 = 0xffffffff;
      }
      break;
    case 6:
      if ((param_1[2] & 0x80) == 0) {
        if (param_3 < 0) {
          local_48 = 0xffffffff;
        }
      }
      else if (0 < param_3) {
        local_48 = 1;
      }
      break;
    case 7:
      uVar2 = (uint)*(byte *)((longlong)param_1 + 9) % 5;
      if ((param_3 < 0) && (uVar2 != 1)) {
        local_48 = 0xffffffff;
      }
      else if ((0 < param_3) && (uVar2 == 0)) {
        local_48 = 1;
      }
      break;
    default:
      *param_4 = *param_4 | 0x40;
    }
    if (local_48 != 0) {
      if ((int)local_48 < 1) {
        local_40 = (byte *)((longlong)param_1 + 9);
        for (local_44 = *param_1; pbVar1 = local_40, 1 < local_44; local_44 = local_44 - 1) {
          if (*local_40 != 0) goto LAB_143b7a840;
          local_40 = local_40 + 1;
        }
        if ((uint)*local_40 == (&DAT_145d13af8)[local_44 - 1]) {
          *local_40 = *(char *)(&DAT_145d13af8 + local_44) - 1;
          while (local_40 = local_40 + -1, (byte *)((longlong)param_1 + 9) <= local_40) {
            *local_40 = 9;
          }
          param_1[1] = param_1[1] - 1;
          if (param_1[1] + 1 != (param_2[2] - *param_2) + 1) {
            return;
          }
          if ((local_44 == 1) && (*param_1 == 1)) {
            *pbVar1 = 0;
          }
          else {
            *pbVar1 = *(char *)(&DAT_145d13af8 + (local_44 - 1)) - 1;
            *param_1 = *param_1 - 1;
          }
          param_1[1] = param_1[1] + 1;
          *param_4 = *param_4 | 0x3820;
          return;
        }
      }
      else {
        local_30 = (byte *)((longlong)param_1 + 9);
        for (local_38 = *param_1; 1 < local_38; local_38 = local_38 - 1) {
          if (*local_30 != 9) goto LAB_143b7a840;
          local_30 = local_30 + 1;
        }
        if ((uint)*local_30 == (&DAT_145d13af8)[local_38] - 1) {
          *local_30 = *(byte *)(&DAT_145d13af8 + (local_38 - 1));
          while (local_30 = local_30 + -1, (byte *)((longlong)param_1 + 9) <= local_30) {
            *local_30 = 0;
          }
          param_1[1] = param_1[1] + 1;
          if ((int)(param_1[1] + *param_1) <= param_2[1] + 1) {
            return;
          }
          FUN_143b7e9a0(param_1,param_2,param_4);
          return;
        }
      }
LAB_143b7a840:
      if ((int)*param_1 < 0x32) {
        local_24 = (uint)(byte)(&DAT_145d13ac0)[(int)*param_1];
      }
      else {
        local_24 = *param_1;
      }
      FUN_143b80160((longlong)param_1 + 9,local_24,&DAT_145d13aba,1,0,(longlong)param_1 + 9,local_48
                   );
    }
  }
  return;
}



// FUNCTION 143b7a8f0 FUN_143b7a8f0 body=119 status=ok
// SIG undefined FUN_143b7a8f0(void)

longlong FUN_143b7a8f0(char *param_1,char *param_2,char *param_3)

{
  char *local_res8;
  char *local_res10;
  char *local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  for (local_res8 = param_1; (*local_res8 == *local_res10 || (*local_res8 == *local_res18));
      local_res8 = local_res8 + 1) {
    if (*local_res8 == '\0') {
      return 1;
    }
    local_res10 = local_res10 + 1;
    local_res18 = local_res18 + 1;
  }
  return (ulonglong)(uint3)(*local_res8 >> 7) << 8;
}



// FUNCTION 143b7a970 FUN_143b7a970 body=700 status=ok
// SIG undefined FUN_143b7a970(void)

int FUN_143b7a970(uint *param_1,uint *param_2,char param_3)

{
  int iVar1;
  uint *local_res8;
  uint *local_res10;
  int local_38;
  int local_34;
  uint local_2c;
  uint local_28;
  
  local_38 = 1;
  if (((*(char *)((longlong)param_1 + 9) == '\0') && (*param_1 == 1)) && ((param_1[2] & 0x70) == 0))
  {
    local_38 = 0;
  }
  if (param_3 == '\0') {
    if ((local_38 != 0) && ((param_1[2] & 0x80) != 0)) {
      local_38 = -1;
    }
    local_34 = 1;
    if (((*(char *)((longlong)param_2 + 9) == '\0') && (*param_2 == 1)) &&
       ((param_2[2] & 0x70) == 0)) {
      local_34 = 0;
    }
    else if ((param_2[2] & 0x80) != 0) {
      local_34 = -1;
    }
    if (local_34 < local_38) {
      return 1;
    }
    if (local_38 < local_34) {
      return -1;
    }
    if (local_38 == 0) {
      return 0;
    }
  }
  else {
    if (((*(char *)((longlong)param_2 + 9) == '\0') && (*param_2 == 1)) &&
       ((param_2[2] & 0x70) == 0)) {
      return local_38;
    }
    if (local_38 == 0) {
      return -1;
    }
  }
  if ((((byte)param_1[2] | (byte)param_2[2]) & 0x40) == 0) {
    local_res8 = param_1;
    local_res10 = param_2;
    if ((int)param_2[1] < (int)param_1[1]) {
      local_38 = -local_38;
      local_res8 = param_2;
      local_res10 = param_1;
    }
    if ((int)*local_res10 < 0x32) {
      local_2c = (uint)(byte)(&DAT_145d13ac0)[(int)*local_res10];
    }
    else {
      local_2c = *local_res10;
    }
    if ((int)*local_res8 < 0x32) {
      local_28 = (uint)(byte)(&DAT_145d13ac0)[(int)*local_res8];
    }
    else {
      local_28 = *local_res8;
    }
    iVar1 = FUN_143b80600((longlong)local_res8 + 9,local_28,(longlong)local_res10 + 9,local_2c,
                          local_res10[1] - local_res8[1]);
    if (iVar1 != -0x80000000) {
      iVar1 = iVar1 * local_38;
    }
  }
  else {
    iVar1 = local_38;
    if ((param_2[2] & 0x40) != 0) {
      if ((param_1[2] & 0x40) == 0) {
        iVar1 = -local_38;
      }
      else {
        local_38 = 0;
        iVar1 = local_38;
      }
    }
  }
  return iVar1;
}



// FUNCTION 143b7ac30 FUN_143b7ac30 body=1472 status=ok
// SIG undefined FUN_143b7ac30(void)

longlong FUN_143b7ac30(longlong param_1,uint *param_2,uint *param_3,undefined8 param_4,char param_5,
                      uint *param_6)

{
  byte bVar1;
  byte bVar2;
  ulonglong in_stack_ffffffffffffffb8;
  int local_38;
  uint local_30;
  undefined4 local_2c;
  uint local_28;
  uint *local_20;
  uint *local_18;
  
  local_38 = 0;
  if (param_5 == '\x04') {
    if (((param_2[2] & 0x80) != 0) && ((param_3[2] & 0x80) == 0)) {
      local_38 = -1;
      goto LAB_143b7af83;
    }
    if (((param_2[2] & 0x80) == 0) && ((param_3[2] & 0x80) != 0)) {
      local_38 = 1;
      goto LAB_143b7af83;
    }
  }
  bVar1 = (byte)param_2[2] | (byte)param_3[2];
  if ((bVar1 & 0x30) == 0) {
    if ((param_5 == '\a') || (param_5 == '\b')) {
      local_38 = FUN_143b7a970(param_2,param_3,1);
    }
    else {
      local_38 = FUN_143b7a970(param_2,param_3,0);
    }
    goto LAB_143b7af83;
  }
  if (param_5 != '\x01') {
    if (param_5 == '\x06') {
      *param_6 = *param_6 | 0x40000080;
    }
    else {
      if (param_5 == '\x04') {
        if ((param_2[2] & 0x30) == 0) {
          local_38 = -1;
        }
        else if ((param_3[2] & 0x30) == 0) {
          local_38 = 1;
        }
        else if (((param_2[2] & 0x10) == 0) || ((param_3[2] & 0x20) == 0)) {
          if (((param_2[2] & 0x20) == 0) || ((param_3[2] & 0x10) == 0)) {
            if ((int)*param_3 < 0x32) {
              local_30 = (uint)(byte)(&DAT_145d13ac0)[(int)*param_3];
            }
            else {
              local_30 = *param_3;
            }
            if ((int)*param_2 < 0x32) {
              local_28 = (uint)(byte)(&DAT_145d13ac0)[(int)*param_2];
            }
            else {
              local_28 = *param_2;
            }
            local_38 = FUN_143b80600((longlong)param_2 + 9,local_28,(longlong)param_3 + 9,local_30,
                                     in_stack_ffffffffffffffb8 & 0xffffffff00000000);
          }
          else {
            local_38 = 1;
          }
        }
        else {
          local_38 = -1;
        }
        if ((param_2[2] & 0x80) != 0) {
          local_38 = -local_38;
        }
        goto LAB_143b7af83;
      }
      if (((bVar1 & 0x10) == 0) && (((param_2[2] & 0x30) == 0 || ((param_3[2] & 0x30) == 0)))) {
        param_5 = '\x02';
        if ((param_2[2] & 0x20) == 0) {
          local_38 = 1;
        }
        else {
          local_38 = -1;
        }
        goto LAB_143b7af83;
      }
    }
  }
  param_5 = '\x05';
  FUN_143b7dd10(param_1,param_2,param_3,param_4,param_6);
LAB_143b7af83:
  if (local_38 == -0x80000000) {
    *param_6 = *param_6 | 0x10;
  }
  else if (((param_5 == '\x01') || (param_5 == '\x06')) || (param_5 == '\x04')) {
    if (((param_5 == '\x04') && (local_38 == 0)) && (param_2[1] != param_3[1])) {
      if ((int)param_2[1] < (int)param_3[1]) {
        local_38 = -1;
      }
      else {
        local_38 = 1;
      }
      if ((param_2[2] & 0x80) != 0) {
        local_38 = -local_38;
      }
    }
    FUN_143b81a50(param_1);
    if ((local_38 != 0) && (*(undefined1 *)(param_1 + 9) = 1, local_38 < 0)) {
      *(undefined1 *)(param_1 + 8) = 0x80;
    }
  }
  else if (param_5 != '\x05') {
    local_2c = 0;
    if (local_38 == 0) {
      bVar1 = (byte)param_2[2] & 0x80;
      bVar2 = (byte)param_3[2] & 0x80;
      if (bVar1 == bVar2) {
        if ((bVar1 == 0) || (bVar2 == 0)) {
          if ((int)param_3[1] < (int)param_2[1]) {
            local_38 = 1;
          }
          else {
            local_38 = -1;
          }
        }
        else if ((int)param_2[1] < (int)param_3[1]) {
          local_38 = 1;
        }
        else {
          local_38 = -1;
        }
      }
      else if (bVar1 == 0) {
        local_38 = 1;
      }
      else {
        local_38 = -1;
      }
    }
    if ((param_5 == '\x03') || (param_5 == '\b')) {
      local_38 = -local_38;
    }
    local_20 = param_3;
    if (0 < local_38) {
      local_20 = param_2;
    }
    local_18 = local_20;
    FUN_143b7b200(param_1,local_20,param_4,&local_2c,param_6);
    FUN_143b7c9f0(param_1,param_4,&local_2c,param_6);
  }
  return param_1;
}



// FUNCTION 143b7b200 FUN_143b7b200 body=117 status=ok
// SIG undefined FUN_143b7b200(void)

void FUN_143b7b200(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 4) = param_2[1];
  FUN_143b7e3c0(param_1,param_3,(longlong)param_2 + 9,*param_2,param_4,param_5);
  return;
}



// FUNCTION 143b7b280 FUN_143b7b280 body=365 status=ok
// SIG undefined FUN_143b7b280(void)

int * FUN_143b7b280(int *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  uint local_28;
  uint local_24;
  
  if (param_2 < *param_1) {
    if (*param_1 - param_2 < 0x32) {
      local_28 = (uint)(byte)(&DAT_145d13ac0)[*param_1 - param_2];
    }
    else {
      local_28 = *param_1 - param_2;
    }
    pbVar1 = (byte *)((longlong)param_1 + (longlong)(int)local_28 + 8);
    if (*param_1 - param_2 < 0x32) {
      local_24 = (uint)(byte)(&DAT_145d13ac0)[*param_1 - param_2];
    }
    else {
      local_24 = *param_1 - param_2;
    }
    iVar2 = (*param_1 - param_2) - (local_24 - 1);
    if (iVar2 != 1) {
      *pbVar1 = (byte)((uint)*pbVar1 % (uint)(&DAT_145d13af8)[iVar2]);
    }
    iVar2 = FUN_143b7cc60((longlong)param_1 + 9,((int)pbVar1 - ((int)param_1 + 9)) + 1);
    *param_1 = iVar2;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 9) = 0;
    *param_1 = 1;
  }
  return param_1;
}



// FUNCTION 143b7b3f0 FUN_143b7b3f0 body=5627 status=ok
// SIG undefined FUN_143b7b3f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143b7b3f0(longlong param_1,uint *param_2,uint *param_3,uint *param_4,byte param_5,
                      uint *param_6)

{
  uint uVar1;
  uint *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 auStack_218 [32];
  uint *local_1f8;
  uint *local_1f0;
  int local_1e8;
  byte local_1d8;
  byte local_1d7;
  uint local_1d4;
  int local_1d0;
  uint local_1cc;
  byte local_1c8;
  uint local_1c4;
  uint local_1c0;
  bool local_1bc;
  char local_1bb;
  uint *local_1b8;
  uint local_1b0;
  int local_1ac;
  int local_1a8;
  uint *local_1a0;
  uint local_198;
  uint *local_190;
  int local_188;
  uint *local_180;
  int local_178;
  uint local_174;
  int local_170;
  uint *local_168;
  uint local_160;
  uint *local_158;
  uint local_150;
  int local_14c;
  uint local_148;
  uint local_144;
  int local_140;
  int local_13c;
  uint *local_138;
  byte *local_130;
  uint local_128;
  uint local_124;
  uint local_120;
  int local_11c;
  int local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  undefined1 *local_100;
  uint local_f8;
  uint local_f4;
  uint *local_f0;
  byte *local_e8;
  byte *local_e0;
  uint local_d8;
  byte *local_d0;
  int local_c8;
  uint *local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined1 *local_b0;
  uint *local_a8;
  byte *local_a0;
  undefined1 local_98 [48];
  uint local_68 [20];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  local_b0 = local_98;
  local_100 = (undefined1 *)0x0;
  local_1a0 = local_68;
  local_f0 = (uint *)0x0;
  local_188 = 0;
  local_1b0 = *param_4;
  local_118 = 0;
  local_1d8 = ((byte)param_2[2] ^ (byte)param_3[2]) & 0x80;
  if ((((byte)param_2[2] | (byte)param_3[2]) & 0x70) == 0) {
    if (((*(char *)((longlong)param_3 + 9) == '\0') && (*param_3 == 1)) &&
       ((param_3[2] & 0x70) == 0)) {
      if (((*(char *)((longlong)param_2 + 9) == '\0') && (*param_2 == 1)) &&
         ((param_2[2] & 0x70) == 0)) {
        FUN_143b81a50(param_1);
        *param_6 = *param_6 | 8;
      }
      else {
        FUN_143b81a50(param_1);
        if ((param_5 & 0x50) == 0) {
          *param_6 = *param_6 | 2;
          *(byte *)(param_1 + 8) = local_1d8 | 0x40;
        }
        else {
          *param_6 = *param_6 | 0x80;
        }
      }
    }
    else if (((*(char *)((longlong)param_2 + 9) == '\0') && (*param_2 == 1)) &&
            ((param_2[2] & 0x70) == 0)) {
      if ((param_5 & 0x80) == 0) {
        if ((param_5 & 0x20) == 0) {
          local_1d4 = param_3[1];
          FUN_143b80a00(param_1,param_2);
          if ((int)local_1d4 < *(int *)(param_1 + 4)) {
            *(uint *)(param_1 + 4) = local_1d4;
          }
        }
        else {
          FUN_143b81a50(param_1);
          *(byte *)(param_1 + 8) = local_1d8;
        }
      }
      else {
        local_1c0 = 0;
        local_1d4 = param_2[1] - param_3[1];
        FUN_143b80a00(param_1,param_2);
        *(byte *)(param_1 + 8) = local_1d8;
        *(uint *)(param_1 + 4) = local_1d4;
        FUN_143b7c9f0(param_1,param_4,&local_1c0,param_6);
      }
    }
    else {
      local_1d4 = (param_2[1] + *param_2) - (param_3[1] + *param_3);
      if (((int)local_1d4 < 0) && (param_5 != 0x80)) {
        if ((param_5 & 0x20) != 0) {
          FUN_143b81a50(param_1);
          *(byte *)(param_1 + 8) = local_1d8;
          goto LAB_143b7c9a0;
        }
        if (((int)param_2[1] <= (int)param_3[1]) &&
           (((param_5 & 0x40) != 0 || ((int)local_1d4 < -1)))) {
          local_1c0 = 0;
          local_1f8 = param_6;
          FUN_143b7b200(param_1,param_2,param_4,&local_1c0);
          FUN_143b7c9f0(param_1,param_4,&local_1c0,param_6);
          goto LAB_143b7c9a0;
        }
      }
      if ((int)(local_1b0 + 1) < 0x32) {
        local_114 = (uint)(byte)(&DAT_145d13ac0)[(int)(local_1b0 + 1)];
      }
      else {
        local_114 = local_1b0 + 1;
      }
      local_144 = local_114;
      puVar3 = local_b0;
      if ((local_114 < 0x30) ||
         (local_100 = (undefined1 *)FUN_143aa7a40((longlong)(int)local_114), puVar3 = local_100,
         local_100 != (undefined1 *)0x0)) {
        local_b0 = puVar3;
        local_174 = (*param_3 - 1) + local_1b0;
        if ((int)local_174 < (int)*param_2) {
          local_174 = *param_2;
        }
        if ((int)local_174 < 0x32) {
          local_110 = (uint)(byte)(&DAT_145d13ac0)[(int)local_174];
        }
        else {
          local_110 = local_174;
        }
        local_1d0 = local_110 + 2;
        if ((param_5 & 0x80) == 0) {
          local_1d0 = local_110 + 3;
        }
        puVar2 = local_1a0;
        if ((local_1d0 + 1U < 0x4a) ||
           (local_f0 = (uint *)FUN_143aa7a40((longlong)(local_1d0 + 1)), puVar2 = local_f0,
           local_f0 != (uint *)0x0)) {
          local_1a0 = puVar2;
          local_180 = (uint *)((longlong)local_1a0 + (longlong)local_1d0 + -1);
          if ((int)*param_2 < 0x32) {
            local_10c = (uint)(byte)(&DAT_145d13ac0)[(int)*param_2];
          }
          else {
            local_10c = *param_2;
          }
          local_158 = local_180;
          for (local_e0 = (byte *)((longlong)param_2 + (longlong)(int)local_10c + 8);
              (byte *)((longlong)param_2 + 9) <= local_e0; local_e0 = local_e0 + -1) {
            *(byte *)local_158 = *local_e0;
            local_158 = (uint *)((longlong)local_158 + -1);
          }
          for (; local_1a0 <= local_158; local_158 = (uint *)((longlong)local_158 + -1)) {
            *(byte *)local_158 = 0;
          }
          local_1ac = local_1d0;
          if ((int)*param_3 < 0x32) {
            local_f4 = (uint)(byte)(&DAT_145d13ac0)[(int)*param_3];
          }
          else {
            local_f4 = *param_3;
          }
          local_198 = local_f4;
          local_d0 = (byte *)((longlong)param_3 + 9);
          local_130 = (byte *)((longlong)param_3 + (longlong)(int)local_f4 + 8);
          local_148 = (uint)*local_130;
          if (1 < (int)local_f4) {
            local_148 = local_148 + 1;
          }
          local_178 = (uint)*local_130 * 10;
          if ((1 < (int)local_f4) &&
             (local_178 = local_178 + (uint)local_130[-1], 2 < (int)local_f4)) {
            local_178 = local_178 + 1;
          }
          for (local_168 = &DAT_145d13afc; *local_168 <= (uint)(byte)*local_180;
              local_168 = local_168 + 1) {
            local_1d4 = local_1d4 - 1;
          }
          for (local_168 = &DAT_145d13afc; *local_168 <= (uint)*local_130; local_168 = local_168 + 1
              ) {
            local_1d4 = local_1d4 + 1;
          }
          if ((param_5 & 0x80) == 0) {
            if ((int)*param_2 < 0x32) {
              local_128 = (uint)(byte)(&DAT_145d13ac0)[(int)*param_2];
            }
            else {
              local_128 = *param_2;
            }
            local_188 = local_1d0 - local_128;
            if ((int)local_1d4 < 0) {
              local_1a8 = -local_1d4;
            }
            else {
              local_1a8 = 1;
            }
            FUN_143b7edc0(local_1a0,local_1d0,local_1a8);
            local_1d4 = local_1d4 + local_1a8;
            local_188 = local_188 - local_1a8;
            local_c0 = local_180;
            for (; 0 < local_1a8; local_1a8 = local_1a8 + -1) {
              *(byte *)local_c0 = 0;
              local_c0 = (uint *)((longlong)local_c0 + -1);
            }
          }
          else {
            local_118 = param_2[1] - param_3[1];
            if ((byte)*local_180 < *local_130) {
              local_1ac = local_1d0 + -1;
              local_1d4 = local_1d4 - 1;
            }
          }
          local_1c4 = 0;
          local_1cc = 0;
          local_1b8 = (uint *)(local_b0 + (longlong)(int)local_144 + -1);
LAB_143b7bf9c:
          local_1d7 = 0;
LAB_143b7bfb6:
          for (; ((byte)*local_180 == 0 && (local_1a0 < local_180));
              local_180 = (uint *)((longlong)local_180 + -1)) {
            local_1d0 = local_1d0 + -1;
          }
          if (local_1d0 < local_1ac) goto LAB_143b7c1f3;
          if (local_1d0 == local_1ac) {
            local_e8 = local_130;
            local_138 = local_180;
            while( true ) {
              local_1c8 = 0;
              if (local_d0 <= local_e8) {
                local_1c8 = *local_e8;
              }
              if (((byte)*local_138 != local_1c8) || (local_138 == local_1a0)) break;
              local_138 = (uint *)((longlong)local_138 + -1);
              local_e8 = local_e8 + -1;
            }
            if ((byte)*local_138 < local_1c8) goto LAB_143b7c1f3;
            if ((byte)*local_138 == local_1c8) goto code_r0x000143b7c0c1;
            local_170 = (int)((longlong)
                              (ulonglong)
                              ((uint)(byte)*local_180 * 10 +
                              (uint)*(byte *)((longlong)local_180 + -1)) / (longlong)local_178);
          }
          else {
            local_170 = (int)((longlong)
                              (ulonglong)
                              ((uint)(byte)*local_180 * 10 +
                              (uint)*(byte *)((longlong)local_180 + -1)) / (longlong)(int)local_148)
            ;
          }
          if (local_170 == 0) {
            local_170 = 1;
          }
          local_1d7 = local_1d7 + (char)local_170;
          local_140 = local_1ac - local_198;
          local_1e8 = -local_170;
          local_1f0 = (uint *)((longlong)local_1a0 + (longlong)local_140);
          local_a0 = (byte *)((longlong)local_1a0 + (longlong)local_140);
          local_1f8 = (uint *)((ulonglong)local_1f8 & 0xffffffff00000000);
          FUN_143b80160(local_a0,local_1d0 - local_140,local_d0,local_198);
          goto LAB_143b7bfb6;
        }
        *param_6 = *param_6 | 0x10;
      }
      else {
        *param_6 = *param_6 | 0x10;
      }
    }
  }
  else if ((((byte)param_2[2] | (byte)param_3[2]) & 0x30) == 0) {
    if ((param_2[2] & 0x40) == 0) {
      local_1c0 = 0;
      if ((param_5 & 0x50) == 0) {
        FUN_143b81a50(param_1);
        *(byte *)(param_1 + 8) = local_1d8;
        if ((param_5 & 0x80) != 0) {
          *(uint *)(param_1 + 4) = (param_4[2] - *param_4) + 1;
          *param_6 = *param_6 | 0x400;
        }
      }
      else {
        local_1f8 = param_6;
        FUN_143b7b200(param_1,param_2,param_4,&local_1c0);
      }
      FUN_143b7c9f0(param_1,param_4,&local_1c0,param_6);
    }
    else if (((param_3[2] & 0x40) == 0) && ((param_5 & 0x50) == 0)) {
      FUN_143b81a50(param_1);
      *(byte *)(param_1 + 8) = local_1d8 | 0x40;
    }
    else {
      *param_6 = *param_6 | 0x80;
    }
  }
  else {
    local_1f8 = param_6;
    FUN_143b7dd10(param_1,param_2,param_3,param_4);
  }
  goto LAB_143b7c9a0;
code_r0x000143b7c0c1:
  local_1d7 = local_1d7 + 1;
  *(byte *)local_1a0 = 0;
  local_1d0 = 1;
LAB_143b7c1f3:
  if ((local_1c4 != 0) || (local_1d7 != 0)) {
    *(byte *)local_1b8 = local_1d7;
    if (local_1c4 == 0) {
      for (local_168 = &DAT_145d13afc; local_1cc = local_1cc + 1, *local_168 <= (uint)local_1d7;
          local_168 = local_168 + 1) {
      }
    }
    else {
      local_1cc = local_1cc + 1;
    }
    local_1c4 = local_1c4 + 1;
    local_1b8 = (uint *)((longlong)local_1b8 + -1);
    if ((int)local_1b0 < (int)local_1cc) goto LAB_143b7c31b;
  }
  if (((((byte)*local_1a0 == 0) && (local_1d0 == 1)) &&
      (((param_5 & 0x50) != 0 || (((param_5 & 0x80) != 0 && ((int)local_1d4 <= local_118)))))) ||
     ((local_1d4 == 0 && ((param_5 & 0x80) == 0)))) goto LAB_143b7c31b;
  local_1ac = local_1ac + -1;
  local_1d4 = local_1d4 - 1;
  goto LAB_143b7bf9c;
LAB_143b7c31b:
  if (local_1c4 == 0) {
    local_1c4 = 1;
    local_1cc = 1;
    *(byte *)local_1b8 = 0;
  }
  else {
    local_1b8 = (uint *)((longlong)local_1b8 + 1);
  }
  local_1c0 = 0;
  if ((param_5 & 0x80) == 0) {
    if ((int)local_1b0 < (int)(local_1cc + local_1d4)) {
      *param_6 = *param_6 | 4;
      goto LAB_143b7c9a0;
    }
    if ((param_5 & 0x50) != 0) {
      local_1bb = '\0';
      local_1d8 = (byte)param_2[2];
      if (((byte)*local_1a0 == 0) && (local_1d0 == 1)) {
        local_150 = param_2[1];
        if ((int)param_3[1] < (int)local_150) {
          local_150 = param_3[1];
        }
        FUN_143b81a50(param_1);
        *(uint *)(param_1 + 4) = local_150;
        *(byte *)(param_1 + 8) = local_1d8 & 0x80;
        FUN_143b7c9f0(param_1,param_4,&local_1c0,param_6);
        goto LAB_143b7c9a0;
      }
      local_1bb = (*local_1b8 & 1) != 0;
      local_a8 = local_1b8;
      local_160 = local_1cc;
      local_14c = ((local_188 + local_1d4) - param_2[1]) + param_3[1];
      if (local_188 < local_14c) {
        local_14c = local_188;
      }
      local_1d0 = FUN_143b7edc0(local_1a0,local_1d0,local_14c);
      local_1b8 = local_1a0;
      local_1cc = FUN_143b7cc60(local_1a0,local_1d0);
      local_108 = local_1cc;
      if ((int)local_1cc < 0x32) {
        local_108 = (uint)(byte)(&DAT_145d13ac0)[(int)local_1cc];
      }
      local_1c4 = local_108;
      local_1d4 = param_2[1];
      if ((int)param_3[1] < (int)local_1d4) {
        local_1d4 = param_3[1];
      }
      if ((param_5 & 0x10) != 0) {
        local_1e8 = 1;
        local_1f0 = local_1b8;
        local_1f8 = (uint *)((ulonglong)local_1f8 & 0xffffffff00000000);
        local_11c = FUN_143b80160(local_1b8,local_108,local_1b8,local_108);
        if ((int)*param_3 < 0x32) {
          local_124 = (uint)(byte)(&DAT_145d13ac0)[(int)*param_3];
        }
        else {
          local_124 = *param_3;
        }
        local_1f8 = (uint *)CONCAT44(local_1f8._4_4_,param_3[1] - local_1d4);
        local_13c = FUN_143b80600(local_1b8,local_11c,(longlong)param_3 + 9,local_124);
        if (local_13c == -0x80000000) {
          *param_6 = *param_6 | 0x10;
          goto LAB_143b7c9a0;
        }
        for (local_190 = local_1b8; local_190 < (uint *)((longlong)local_1b8 + (longlong)local_11c);
            local_190 = (uint *)((longlong)local_190 + 1)) {
          uVar1 = *local_190;
          local_d8 = (byte)uVar1 & 1;
          *(byte *)local_190 = 0;
          if (((byte)uVar1 & 1) != 0) {
            *(byte *)((longlong)local_190 + -1) = *(byte *)((longlong)local_190 + -1) + 5;
          }
        }
        if ((0 < local_13c) || ((local_13c == 0 && (local_1bb != '\0')))) {
          local_1bc = false;
          if (local_160 == local_1b0) {
            local_190 = local_a8;
            for (; 1 < (int)local_160; local_160 = local_160 - 1) {
              if ((byte)*local_190 != 9) goto LAB_143b7c7dc;
              local_190 = (uint *)((longlong)local_190 + 1);
            }
            local_1bc = (uint)(byte)*local_190 == (&DAT_145d13af8)[(int)local_160] - 1;
          }
LAB_143b7c7dc:
          if (local_1bc != false) {
            *param_6 = *param_6 | 4;
            goto LAB_143b7c9a0;
          }
          local_c8 = param_3[1] - local_1d4;
          local_b4 = 0;
          if ((int)*param_3 < 0x32) {
            local_120 = (uint)(byte)(&DAT_145d13ac0)[(int)*param_3];
          }
          else {
            local_120 = *param_3;
          }
          local_1e8 = -1;
          local_1f0 = local_1b8;
          local_1f8 = (uint *)CONCAT44(local_1f8._4_4_,local_c8);
          local_b8 = local_c8;
          iVar4 = FUN_143b80160(local_1b8,local_1c4,(longlong)param_3 + 9,local_120);
          local_1c4 = -iVar4;
          local_1cc = FUN_143b7cc60(local_1b8,local_1c4);
          local_f8 = local_1cc;
          if ((int)local_1cc < 0x32) {
            local_f8 = (uint)(byte)(&DAT_145d13ac0)[(int)local_1cc];
          }
          local_1c4 = local_f8;
          local_1d8 = local_1d8 ^ 0x80;
        }
      }
    }
  }
  else if (((byte)*local_1a0 != 0) || (1 < local_1d0)) {
    local_1c0 = 1;
  }
  *(uint *)(param_1 + 4) = local_1d4;
  *(byte *)(param_1 + 8) = local_1d8 & 0x80;
  local_1f0 = param_6;
  local_1f8 = &local_1c0;
  FUN_143b7e3c0(param_1,param_4,local_1b8,local_1cc);
  FUN_143b7c9f0(param_1,param_4,&local_1c0,param_6);
LAB_143b7c9a0:
  if (local_f0 != (uint *)0x0) {
    FUN_143aa79f0(local_f0);
  }
  if (local_100 != (undefined1 *)0x0) {
    FUN_143aa79f0(local_100);
  }
  return param_1;
}



// FUNCTION 143b7c9f0 FUN_143b7c9f0 body=611 status=ok
// SIG undefined FUN_143b7c9f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b7c9f0(int *param_1,int *param_2,int *param_3,uint *param_4)

{
  int iVar1;
  undefined1 auStack_58 [32];
  int local_38;
  int local_34;
  int local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined1 uStack_1f;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_30 = (param_2[2] - *param_1) + 1;
  if (param_1[1] <= local_30) {
    if (param_1[1] < local_30) {
      FUN_143b7eb10(param_1,param_2,param_3,param_4);
      return;
    }
    FUN_143b81a50(local_28);
    uStack_1f = 1;
    local_24 = param_2[2];
    local_38 = FUN_143b7a970(param_1,local_28,1);
    if (local_38 == -0x80000000) {
      *param_4 = *param_4 | 0x10;
      return;
    }
    if ((*param_3 < 0) && (local_38 == 0)) {
      FUN_143b7a350(param_1,param_2,*param_3,param_4);
      FUN_143b7eb10(param_1,param_2,param_3,param_4);
      return;
    }
  }
  if (*param_3 != 0) {
    FUN_143b7a350(param_1,param_2,*param_3,param_4);
  }
  if ((param_2[1] - *param_2) + 1 < param_1[1]) {
    if ((param_2[1] - *param_1) + 1 < param_1[1]) {
      FUN_143b7e9a0(param_1,param_2,param_4);
    }
    else if ((char)param_2[6] != '\0') {
      local_34 = param_1[1] - ((param_2[1] - *param_2) + 1);
      if (((*(char *)((longlong)param_1 + 9) != '\0') || (*param_1 != 1)) ||
         ((*(byte *)(param_1 + 2) & 0x70) != 0)) {
        iVar1 = FUN_143b7f070((longlong)param_1 + 9,*param_1,local_34);
        *param_1 = iVar1;
      }
      param_1[1] = param_1[1] - local_34;
      *param_4 = *param_4 | 0x400;
    }
  }
  return;
}



// FUNCTION 143b7cc60 FUN_143b7cc60 body=111 status=ok
// SIG undefined FUN_143b7cc60(void)

int FUN_143b7cc60(char *param_1,int param_2)

{
  int local_18;
  char *local_10;
  
  local_10 = param_1 + (param_2 + -1);
  for (local_18 = param_2; ((param_1 <= local_10 && (*local_10 == '\0')) && (local_18 != 1));
      local_18 = local_18 + -1) {
    local_10 = local_10 + -1;
  }
  return local_18;
}



// FUNCTION 143b7cce0 FUN_143b7cce0 body=710 status=ok
// SIG undefined FUN_143b7cce0(void)

uint FUN_143b7cce0(int *param_1)

{
  uint uVar1;
  bool bVar2;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  byte *local_30;
  
  local_3c = *param_1 + param_1[1];
  bVar2 = (*(byte *)(param_1 + 2) & 0x80) != 0;
  if (((*(char *)((longlong)param_1 + 9) == '\0') && (*param_1 == 1)) &&
     ((*(byte *)(param_1 + 2) & 0x70) == 0)) {
    local_44 = 0;
  }
  else {
    local_30 = (byte *)((longlong)param_1 + 9);
    local_44 = 0;
    if (param_1[1] < 0) {
      for (local_38 = -param_1[1]; 0 < local_38; local_38 = local_38 + -1) {
        if (*local_30 != 0) {
          return 0x80000000;
        }
        local_30 = local_30 + 1;
      }
      if (local_38 == 0) {
        local_40 = 0;
      }
      else {
        local_44 = (uint)(*local_30 >> ((byte)local_38 & 0x1f)) *
                   *(int *)(&DAT_145d13b20 + (longlong)local_38 * 4) >> 0x11;
        if ((uint)*local_30 != local_44 * (&DAT_145d13af8)[local_38]) {
          return 0x80000000;
        }
        local_40 = 1 - local_38;
        local_30 = local_30 + 1;
      }
    }
    else {
      local_40 = param_1[1];
    }
    if (local_40 == 0) {
      local_44 = (uint)*local_30;
      local_40 = 1;
      local_30 = local_30 + 1;
    }
    uVar1 = local_44;
    local_44 = uVar1;
    if (local_3c < 0xb) {
      for (; local_40 < local_3c; local_40 = local_40 + 1) {
        local_44 = local_44 + (uint)*local_30 * (&DAT_145d13af8)[local_40];
        local_30 = local_30 + 1;
      }
      if (local_3c == 10) {
        if ((int)local_44 / (int)(&DAT_145d13af8)[local_40 + -1] == (uint)local_30[-1]) {
          if ((bVar2) && (0x773593fd < (int)local_44)) {
            local_3c = 0xb;
          }
          else if ((!bVar2) && (999999999 < (int)local_44)) {
            local_3c = 0xb;
          }
        }
        else {
          local_3c = 0xb;
        }
        if (local_3c == 0xb) {
          local_44 = uVar1;
        }
      }
    }
    if (local_3c < 0xb) {
      if (bVar2) {
        local_44 = -local_44;
      }
    }
    else if ((local_44 & 1) == 0) {
      local_44 = 0x80000002;
    }
    else {
      local_44 = 0x80000003;
    }
  }
  return local_44;
}



// FUNCTION 143b7cfb0 FUN_143b7cfb0 body=3413 status=ok
// SIG undefined FUN_143b7cfb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
FUN_143b7cfb0(undefined4 *param_1,uint *param_2,uint *param_3,undefined8 param_4,uint *param_5)

{
  undefined1 auVar1 [16];
  ulonglong *puVar2;
  undefined4 uVar3;
  uint *local_res10;
  uint *local_res18;
  undefined1 auStack_2e8 [32];
  uint *local_2c8;
  uint *local_2c0;
  uint local_2b8;
  ulonglong *local_2a8;
  int local_2a0;
  int local_29c;
  byte local_298;
  uint local_294;
  int local_290;
  int local_28c;
  uint *local_288;
  ulonglong *local_280;
  int local_278;
  uint *local_270;
  ulonglong *local_268;
  uint local_260;
  int local_25c;
  uint local_258;
  int local_254;
  ulonglong *local_250;
  byte *local_248;
  uint local_240;
  ulonglong *local_238;
  uint local_230;
  uint local_22c;
  uint local_228;
  int local_224;
  undefined4 local_220;
  uint local_21c;
  uint *local_218;
  int local_210;
  uint local_20c;
  byte *local_208;
  int local_200;
  uint *local_1f8;
  ulonglong local_1f0;
  uint *local_1e8;
  uint *local_1e0;
  int local_1d8;
  uint local_1d4;
  uint *local_1d0;
  byte *local_1c8;
  uint *local_1c0;
  uint *local_1b8;
  undefined1 *local_1b0;
  uint local_1a8 [10];
  uint local_180 [10];
  ulonglong local_158 [20];
  ulonglong local_b8 [20];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  local_220 = 0;
  local_250 = (ulonglong *)0x0;
  local_1e8 = local_1a8;
  local_1f8 = (uint *)0x0;
  local_218 = local_180;
  local_1e0 = (uint *)0x0;
  local_280 = local_158;
  local_298 = ((byte)param_2[2] ^ (byte)param_3[2]) & 0x80;
  if ((((byte)param_2[2] | (byte)param_3[2]) & 0x70) != 0) {
    if ((((byte)param_2[2] | (byte)param_3[2]) & 0x30) != 0) {
      local_2c8 = param_5;
      FUN_143b7dd10(param_1,param_2,param_3,param_4);
      return param_1;
    }
    if ((((((param_2[2] & 0x40) != 0) || (*(char *)((longlong)param_2 + 9) != '\0')) ||
         (*param_2 != 1)) || ((param_2[2] & 0x70) != 0)) &&
       ((((param_3[2] & 0x40) != 0 || (*(char *)((longlong)param_3 + 9) != '\0')) ||
        ((*param_3 != 1 || ((param_3[2] & 0x70) != 0)))))) {
      FUN_143b81a50(param_1);
      *(byte *)(param_1 + 2) = local_298 | 0x40;
      return param_1;
    }
    *param_5 = *param_5 | 0x80;
    return param_1;
  }
  local_res10 = param_2;
  local_res18 = param_3;
  if ((int)*param_2 < (int)*param_3) {
    local_res10 = param_3;
    local_res18 = param_2;
    local_1c0 = param_2;
  }
  if ((int)*local_res18 < 3) {
    local_268 = local_b8;
    if ((int)*local_res10 < 0x32) {
      local_230 = (uint)(byte)(&DAT_145d13ac0)[(int)*local_res10];
    }
    else {
      local_230 = *local_res10;
    }
    if ((int)*local_res18 < 0x32) {
      local_20c = (uint)(byte)(&DAT_145d13ac0)[(int)*local_res18];
    }
    else {
      local_20c = *local_res18;
    }
    local_2a0 = local_230 + local_20c;
    puVar2 = local_268;
    if ((0x91 < local_2a0) &&
       (local_250 = (ulonglong *)FUN_143aa7a40((longlong)local_2a0), puVar2 = local_250,
       local_250 == (ulonglong *)0x0)) {
      *param_5 = *param_5 | 0x10;
      goto LAB_143b7dc9d;
    }
    local_268 = puVar2;
    local_290 = 1;
    *(undefined1 *)local_268 = 0;
    local_28c = 0;
    if ((int)*local_res10 < 0x32) {
      local_22c = (uint)(byte)(&DAT_145d13ac0)[(int)*local_res10];
    }
    else {
      local_22c = *local_res10;
    }
    local_1d4 = local_22c;
    if ((int)*local_res18 < 0x32) {
      local_228 = (uint)(byte)(&DAT_145d13ac0)[(int)*local_res18];
    }
    else {
      local_228 = *local_res18;
    }
    local_1c8 = (byte *)((longlong)local_res18 + (longlong)(int)local_228 + 9);
    for (local_208 = (byte *)((longlong)local_res18 + 9); local_208 < local_1c8;
        local_208 = local_208 + 1) {
      if (*local_208 == 0) {
        *(undefined1 *)((longlong)local_268 + (longlong)local_290) = 0;
        local_290 = local_290 + 1;
      }
      else {
        local_2c0 = (uint *)((longlong)local_268 + (longlong)local_28c);
        local_1d8 = local_290 - local_28c;
        local_1b0 = (undefined1 *)((longlong)local_268 + (longlong)local_28c);
        local_2b8 = (uint)*local_208;
        local_2c8 = (uint *)((ulonglong)local_2c8 & 0xffffffff00000000);
        local_290 = FUN_143b80160(local_1b0,local_1d8,(longlong)local_res10 + 9,local_1d4);
        local_290 = local_290 + local_28c;
      }
      local_28c = local_28c + 1;
    }
  }
  else {
    local_200 = (int)(*local_res10 + 8) / 9;
    local_224 = (int)(*local_res18 + 8) / 9;
    local_278 = local_200 + local_224;
    local_2a0 = local_200 << 2;
    if (0x28 < local_2a0) {
      local_1f8 = (uint *)FUN_143aa7a40((longlong)local_2a0,
                                        (longlong)(int)(*local_res18 + 8) % 9 & 0xffffffff);
      local_1e8 = local_1f8;
    }
    local_2a0 = local_224 << 2;
    if (0x28 < local_2a0) {
      local_218 = (uint *)FUN_143aa7a40((longlong)local_2a0);
      local_1e0 = local_218;
    }
    local_210 = (int)(local_278 + 7 + (local_278 + 7 >> 0x1f & 7U)) >> 3;
    local_2a0 = local_278 * 8 + local_210 * 8;
    if (0xa0 < local_2a0) {
      local_280 = (ulonglong *)FUN_143aa7a40((longlong)local_2a0);
      local_250 = local_280;
    }
    if (((local_1e8 == (uint *)0x0) || (local_218 == (uint *)0x0)) ||
       (local_280 == (ulonglong *)0x0)) {
      *param_5 = *param_5 | 0x10;
      goto LAB_143b7dc9d;
    }
    local_268 = local_280;
    puVar2 = local_280 + local_210;
    local_294 = *local_res10;
    local_248 = (byte *)((longlong)local_res10 + 9);
    local_270 = local_1e8;
    while (0 < (int)local_294) {
      local_29c = 0;
      *local_270 = 0;
      for (; (local_29c < 9 && (0 < (int)local_294)); local_294 = local_294 - 1) {
        *local_270 = (uint)*local_248 * (&DAT_145d13af8)[local_29c] + *local_270;
        local_29c = local_29c + 1;
        local_248 = local_248 + 1;
      }
      local_270 = local_270 + 1;
    }
    local_1b8 = local_270 + -1;
    local_294 = *local_res18;
    local_248 = (byte *)((longlong)local_res18 + 9);
    local_288 = local_218;
    while (0 < (int)local_294) {
      local_29c = 0;
      *local_288 = 0;
      for (; (local_29c < 9 && (0 < (int)local_294)); local_294 = local_294 - 1) {
        *local_288 = (uint)*local_248 * (&DAT_145d13af8)[local_29c] + *local_288;
        local_29c = local_29c + 1;
        local_248 = local_248 + 1;
      }
      local_288 = local_288 + 1;
    }
    local_1d0 = local_288 + -1;
    for (local_2a8 = puVar2; local_2a8 < puVar2 + local_278; local_2a8 = local_2a8 + 1) {
      *local_2a8 = 0;
    }
    local_25c = 0x12;
    for (local_288 = local_218; local_288 <= local_1d0; local_288 = local_288 + 1) {
      local_2a8 = puVar2 + ((longlong)local_288 - (longlong)local_218 >> 2);
      for (local_270 = local_1e8; local_270 <= local_1b8; local_270 = local_270 + 1) {
        *local_2a8 = (ulonglong)*local_270 * (ulonglong)*local_288 + *local_2a8;
        local_2a8 = local_2a8 + 1;
      }
      local_25c = local_25c + -1;
      if ((local_25c < 1) || (local_288 == local_1d0)) {
        local_25c = 0x12;
        for (local_2a8 = puVar2; local_2a8 < puVar2 + local_278; local_2a8 = local_2a8 + 1) {
          if (999999999 < *local_2a8) {
            local_1f0 = *local_2a8 / 1000000000;
            if (local_1f0 < 1000000000) {
              local_240 = (uint)local_1f0;
            }
            else {
              auVar1._8_8_ = 0;
              auVar1._0_8_ = local_1f0;
              local_258 = SUB164(auVar1 / ZEXT816(1000000000),0);
              local_2a8[2] = (ulonglong)local_258 + local_2a8[2];
              *local_2a8 = *local_2a8 + (ulonglong)local_258 * -1000000000000000000;
              local_240 = (uint)local_1f0 + local_258 * -1000000000;
            }
            local_2a8[1] = (ulonglong)local_240 + local_2a8[1];
            *local_2a8 = *local_2a8 + (ulonglong)local_240 * -1000000000;
          }
        }
      }
    }
    local_238 = local_280;
    for (local_2a8 = puVar2; local_2a8 < puVar2 + local_278; local_2a8 = local_2a8 + 1) {
      local_260 = (uint)*local_2a8;
      for (local_29c = 0; local_29c < 8; local_29c = local_29c + 1) {
        local_21c = local_260 / 10;
        *(char *)local_238 = (char)local_260 + (char)local_21c * -10;
        local_238 = (ulonglong *)((longlong)local_238 + 1);
        local_260 = local_21c;
      }
      *(char *)local_238 = (char)local_260;
      local_238 = (ulonglong *)((longlong)local_238 + 1);
    }
    local_290 = (int)local_238 - (int)local_280;
    local_280 = puVar2;
  }
  *(byte *)(param_1 + 2) = local_298;
  uVar3 = FUN_143b7cc60(local_268,local_290);
  *param_1 = uVar3;
  local_254 = local_res10[1] + local_res18[1];
  if ((((int)local_res10[1] < 0) && ((int)local_res18[1] < 0)) && (0 < local_254)) {
    local_254 = -0x773593fe;
  }
  param_1[1] = local_254;
  local_2c0 = param_5;
  local_2c8 = &local_220;
  FUN_143b7e3c0(param_1,param_4,local_268,*param_1);
  FUN_143b7c9f0(param_1,param_4,&local_220,param_5);
LAB_143b7dc9d:
  if (local_250 != (ulonglong *)0x0) {
    FUN_143aa79f0(local_250);
  }
  if (local_1e0 != (uint *)0x0) {
    FUN_143aa79f0(local_1e0);
  }
  if (local_1f8 != (uint *)0x0) {
    FUN_143aa79f0(local_1f8);
  }
  return param_1;
}



// FUNCTION 143b7dd10 FUN_143b7dd10 body=513 status=ok
// SIG undefined FUN_143b7dd10(void)

uint * FUN_143b7dd10(uint *param_1,int *param_2,int *param_3,uint *param_4,uint *param_5)

{
  int *local_res10;
  uint local_28;
  uint local_24;
  undefined1 *local_20;
  undefined1 *local_18;
  
  local_res10 = param_2;
  if ((*(byte *)(param_2 + 2) & 0x10) == 0) {
    if (param_3 != (int *)0x0) {
      local_res10 = param_3;
      if ((*(byte *)(param_3 + 2) & 0x10) == 0) {
        if ((*(byte *)(param_2 + 2) & 0x20) != 0) {
          local_res10 = param_2;
        }
      }
      else {
        *param_5 = *param_5 | 0x40000080;
      }
    }
  }
  else {
    *param_5 = *param_5 | 0x40000080;
  }
  if ((int)*param_4 < *local_res10) {
    *(char *)(param_1 + 2) = (char)local_res10[2];
    if ((int)*param_4 < 0x32) {
      local_28 = (uint)(byte)(&DAT_145d13ac0)[(int)*param_4];
    }
    else {
      local_28 = *param_4;
    }
    local_18 = (undefined1 *)((longlong)local_res10 + 9);
    for (local_20 = (undefined1 *)((longlong)param_1 + 9);
        local_20 < (undefined1 *)((longlong)param_1 + (longlong)(int)local_28 + 9);
        local_20 = local_20 + 1) {
      *local_20 = *local_18;
      local_18 = local_18 + 1;
    }
    if ((int)*param_4 < 0x32) {
      local_24 = (uint)(byte)(&DAT_145d13ac0)[(int)*param_4];
    }
    else {
      local_24 = *param_4;
    }
    *param_1 = local_24;
    if ((int)*param_4 < (int)*param_1) {
      FUN_143b7b280(param_1,*param_1 - *param_4);
    }
  }
  else {
    FUN_143b80a00(param_1,local_res10);
  }
  *(byte *)(param_1 + 2) = (byte)param_1[2] & 0xef;
  *(byte *)(param_1 + 2) = (byte)param_1[2] | 0x20;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 143b7df20 FUN_143b7df20 body=1176 status=ok
// SIG undefined FUN_143b7df20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_143b7df20(int *param_1,int *param_2,longlong param_3,int *param_4,char param_5,
                   uint *param_6)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  undefined1 auStack_98 [32];
  uint *local_78;
  int local_68;
  int local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  longlong local_50;
  int local_48 [8];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_5c = *param_4;
  local_60 = 0;
  local_58 = param_4[2] - (local_5c + -1);
  local_50 = param_3;
  if (((*(byte *)(param_2 + 2) | *(byte *)(param_3 + 8)) & 0x70) == 0) {
    if (param_5 == '\0') {
      local_68 = FUN_143b7cce0(param_3);
    }
    else {
      local_68 = *(int *)(param_3 + 4);
    }
    if ((((local_68 == -0x80000000) || (local_68 == -0x7ffffffd)) || (local_68 == -0x7ffffffe)) ||
       ((local_68 < local_58 || (param_4[1] < local_68)))) {
      *param_6 = *param_6 | 0x80;
    }
    else {
      if (((*(char *)((longlong)param_2 + 9) == '\0') && (*param_2 == 1)) &&
         ((*(byte *)(param_2 + 2) & 0x70) == 0)) {
        FUN_143b80a00(param_1,param_2);
        param_1[1] = local_68;
      }
      else {
        local_64 = local_68 - param_2[1];
        if (local_5c < *param_2 - local_64) {
          *param_6 = *param_6 | 0x80;
          return param_1;
        }
        if (local_64 < 1) {
          FUN_143b80a00(param_1,param_2);
          if (local_64 < 0) {
            iVar1 = FUN_143b7f070((longlong)param_1 + 9,*param_1,-local_64);
            *param_1 = iVar1;
            param_1[1] = param_1[1] + local_64;
          }
        }
        else {
          piVar3 = param_4;
          piVar4 = local_48;
          for (lVar2 = 0x1c; lVar2 != 0; lVar2 = lVar2 + -1) {
            *(char *)piVar4 = (char)*piVar3;
            piVar3 = (int *)((longlong)piVar3 + 1);
            piVar4 = (int *)((longlong)piVar4 + 1);
          }
          local_48[0] = *param_2 - local_64;
          local_78 = param_6;
          FUN_143b7b200(param_1,param_2,local_48,&local_60);
          FUN_143b7a350(param_1,local_48,local_60,param_6);
          local_60 = 0;
          if (local_68 < param_1[1]) {
            if (*param_1 == local_5c) {
              *param_6 = *param_6 & 0xfffff7df;
              *param_6 = *param_6 | 0x80;
              return param_1;
            }
            iVar1 = FUN_143b7f070((longlong)param_1 + 9,*param_1,1);
            *param_1 = iVar1;
            param_1[1] = param_1[1] + -1;
          }
        }
      }
      if ((param_4[1] - *param_1) + 1 < param_1[1]) {
        *param_6 = *param_6 | 0x80;
      }
      else {
        FUN_143b7c9f0(param_1,param_4,&local_60,param_6);
        *param_6 = *param_6 & 0xffffdfff;
      }
    }
  }
  else if (((*(byte *)(param_2 + 2) | *(byte *)(param_3 + 8)) & 0x30) == 0) {
    if (((*(byte *)(param_2 + 2) ^ *(byte *)(param_3 + 8)) & 0x40) == 0) {
      FUN_143b80a00(param_1,param_2);
    }
    else {
      *param_6 = *param_6 | 0x80;
    }
  }
  else {
    local_78 = param_6;
    FUN_143b7dd10(param_1,param_2,param_3,param_4);
  }
  return param_1;
}



// FUNCTION 143b7e3c0 FUN_143b7e3c0 body=1339 status=ok
// SIG undefined FUN_143b7e3c0(void)

void FUN_143b7e3c0(int *param_1,int *param_2,byte *param_3,int param_4,int *param_5,uint *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int local_38;
  byte *local_30;
  uint local_24;
  byte *local_20;
  
  iVar2 = param_4 - *param_2;
  local_38 = param_4;
  local_30 = param_3;
  if (iVar2 < 1) {
    if ((byte *)((longlong)param_1 + 9) != param_3) {
      local_20 = (byte *)((longlong)param_1 + 9);
      for (; 0 < local_38; local_38 = local_38 + -1) {
        *local_20 = *local_30;
        local_20 = local_20 + 1;
        local_30 = local_30 + 1;
      }
      *param_1 = param_4;
    }
    if (*param_5 != 0) {
      *param_6 = *param_6 | 0x820;
    }
  }
  else {
    param_1[1] = param_1[1] + iVar2;
    *param_6 = *param_6 | 0x800;
    if (1 < *param_5) {
      *param_5 = 1;
    }
    if (param_4 < iVar2) {
      if (*param_5 < 1) {
        for (; 0 < local_38; local_38 = local_38 + -1) {
          if (*local_30 != 0) {
            *param_5 = 1;
            break;
          }
          local_30 = local_30 + 1;
        }
      }
      if (*param_5 != 0) {
        *param_6 = *param_6 | 0x20;
      }
      *(undefined1 *)((longlong)param_1 + 9) = 0;
      *param_1 = 1;
    }
    else {
      local_38 = 0;
      while (local_38 + 1 < iVar2) {
        if (*local_30 != 0) {
          *param_5 = 1;
        }
        local_30 = local_30 + 1;
        local_38 = local_38 + 1;
      }
      uVar3 = iVar2 - local_38;
      uVar1 = uVar3 - 1;
      if (uVar1 == 0) {
        if (*local_30 < 5) {
          if (*local_30 != 0) {
            *param_5 = 3;
          }
        }
        else if (*local_30 < 6) {
          *param_5 = *param_5 + 5;
        }
        else {
          *param_5 = 7;
        }
        if (*param_2 < 1) {
          *(undefined1 *)((longlong)param_1 + 9) = 0;
          *param_1 = 1;
        }
        else {
          local_38 = *param_2;
          *param_1 = local_38;
          local_20 = (byte *)((longlong)param_1 + 9);
          for (; local_30 = local_30 + 1, 0 < local_38; local_38 = local_38 + -1) {
            *local_20 = *local_30;
            local_20 = local_20 + 1;
          }
        }
      }
      else {
        if (uVar1 == 0) {
          local_24 = (uint)*local_30;
        }
        else {
          local_24 = (uint)(*local_30 >> ((byte)uVar1 & 0x1f)) *
                     *(int *)(&DAT_145d13b20 + (ulonglong)uVar1 * 4) >> 0x11;
          if ((uint)*local_30 != local_24 * (&DAT_145d13af8)[uVar1]) {
            *param_5 = 1;
          }
        }
        uVar1 = local_24 * 0x199a >> 0x10;
        *param_5 = (uint)(byte)(&DAT_145d13ab0)[local_24 + uVar1 * -10] + *param_5;
        if (*param_2 < 1) {
          *(undefined1 *)((longlong)param_1 + 9) = 0;
          *param_1 = 1;
        }
        else {
          local_38 = *param_2;
          *param_1 = local_38;
          local_20 = (byte *)((longlong)param_1 + 9);
          local_24 = uVar1;
          while( true ) {
            *local_20 = (char)local_24;
            local_38 = local_38 - (1 - uVar3);
            if (local_38 < 1) break;
            local_30 = local_30 + 1;
            local_24 = (uint)(*local_30 >> ((byte)uVar3 & 0x1f)) *
                       *(int *)(&DAT_145d13b20 + (ulonglong)uVar3 * 4) >> 0x11;
            *local_20 = *local_20 +
                        (*local_30 - (char)local_24 * (char)(&DAT_145d13af8)[uVar3]) *
                        (char)(&DAT_145d13af8)[1 - uVar3];
            local_38 = local_38 - uVar3;
            if (local_38 < 1) break;
            local_20 = local_20 + 1;
          }
        }
      }
      if (*param_5 != 0) {
        *param_6 = *param_6 | 0x20;
      }
    }
  }
  return;
}



// FUNCTION 143b7e900 FUN_143b7e900 body=155 status=ok
// SIG undefined FUN_143b7e900(void)

void FUN_143b7e900(int *param_1,int *param_2)

{
  int local_18;
  char *local_10;
  
  local_18 = *param_2;
  *param_1 = local_18;
  local_10 = (char *)((longlong)param_1 + 9);
  for (; 1 < local_18; local_18 = local_18 + -1) {
    *local_10 = '\t';
    local_10 = local_10 + 1;
  }
  *local_10 = (char)(&DAT_145d13af8)[local_18] + -1;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[1] = (param_2[1] - *param_2) + 1;
  return;
}



// FUNCTION 143b7e9a0 FUN_143b7e9a0 body=361 status=ok
// SIG undefined FUN_143b7e9a0(void)

void FUN_143b7e9a0(int *param_1,int *param_2,uint *param_3)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  int local_14;
  
  bVar3 = false;
  bVar2 = *(byte *)(param_1 + 2) & 0x80;
  if (((*(char *)((longlong)param_1 + 9) == '\0') && (*param_1 == 1)) &&
     ((*(byte *)(param_1 + 2) & 0x70) == 0)) {
    local_14 = param_2[1];
    if ((char)param_2[6] != '\0') {
      local_14 = local_14 - (*param_2 + -1);
    }
    if (local_14 < param_1[1]) {
      param_1[1] = local_14;
      *param_3 = *param_3 | 0x400;
    }
  }
  else {
    FUN_143b81a50(param_1);
    iVar1 = param_2[3];
    if (iVar1 == 0) {
      bVar3 = bVar2 != 0;
    }
    else if (iVar1 == 5) {
      bVar3 = true;
    }
    else if (iVar1 == 6) {
      if (bVar2 == 0) {
        bVar3 = true;
      }
    }
    else if (iVar1 == 7) {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_143b7e900(param_1,param_2);
      *(byte *)(param_1 + 2) = bVar2;
    }
    else {
      *(byte *)(param_1 + 2) = bVar2 | 0x40;
    }
    *param_3 = *param_3 | 0xa20;
  }
  return;
}



// FUNCTION 143b7eb10 FUN_143b7eb10 body=687 status=ok
// SIG undefined FUN_143b7eb10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b7eb10(int *param_1,int *param_2,undefined4 *param_3,uint *param_4)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  uint *local_50;
  int local_48;
  int local_44;
  int local_40 [2];
  int local_38;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_48 = param_2[2] - (*param_2 + -1);
  if (((*(char *)((longlong)param_1 + 9) == '\0') && (*param_1 == 1)) &&
     ((*(byte *)(param_1 + 2) & 0x70) == 0)) {
    if (param_1[1] < local_48) {
      param_1[1] = local_48;
      *param_4 = *param_4 | 0x400;
    }
  }
  else {
    *param_4 = *param_4 | 0x1000;
    local_44 = local_48 - param_1[1];
    if (local_44 < 1) {
      if ((*param_4 & 0x20) != 0) {
        *param_4 = *param_4 | 0x2000;
      }
    }
    else {
      piVar3 = local_40;
      for (lVar2 = 0x1c; lVar2 != 0; lVar2 = lVar2 + -1) {
        *(char *)piVar3 = (char)*param_2;
        param_2 = (int *)((longlong)param_2 + 1);
        piVar3 = (int *)((longlong)piVar3 + 1);
      }
      local_40[0] = *param_1 - local_44;
      local_38 = local_38 - local_44;
      local_58 = param_3;
      local_50 = param_4;
      FUN_143b7e3c0(param_1,local_40,(longlong)param_1 + 9,*param_1);
      FUN_143b7a350(param_1,local_40,*param_3,param_4);
      if ((*param_4 & 0x20) != 0) {
        *param_4 = *param_4 | 0x2000;
      }
      if (local_48 < param_1[1]) {
        iVar1 = FUN_143b7f070((longlong)param_1 + 9,*param_1,1);
        *param_1 = iVar1;
        param_1[1] = param_1[1] + -1;
      }
      if (((*(char *)((longlong)param_1 + 9) == '\0') && (*param_1 == 1)) &&
         ((*(byte *)(param_1 + 2) & 0x70) == 0)) {
        *param_4 = *param_4 | 0x400;
      }
    }
  }
  return;
}



// FUNCTION 143b7edc0 FUN_143b7edc0 body=673 status=ok
// SIG undefined FUN_143b7edc0(void)

char * FUN_143b7edc0(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  int local_34;
  uint local_30;
  char *local_28;
  byte *local_20;
  uint local_18;
  uint local_14;
  uint local_10;
  
  if (param_3 == 0) {
    local_28 = (char *)(ulonglong)param_2;
  }
  else if (param_3 == param_2) {
    *param_1 = '\0';
    local_28 = (char *)0x1;
  }
  else {
    local_14 = param_3;
    if ((int)param_3 < 0x32) {
      local_14 = (uint)(byte)(&DAT_145d13ac0)[(int)param_3];
    }
    iVar1 = param_3 - (local_14 - 1);
    local_28 = param_1;
    if (iVar1 == 1) {
      local_18 = param_3;
      if ((int)param_3 < 0x32) {
        local_18 = (uint)(byte)(&DAT_145d13ac0)[(int)param_3];
      }
      for (local_20 = (byte *)(param_1 + (int)local_18); local_20 < param_1 + (int)param_2;
          local_20 = local_20 + 1) {
        *local_28 = *local_20;
        local_28 = local_28 + 1;
      }
      local_28 = local_28 + -(longlong)param_1;
    }
    else {
      if ((int)(param_3 - iVar1) < 0x32) {
        local_10 = (uint)(byte)(&DAT_145d13ac0)[(int)(param_3 - iVar1)];
      }
      else {
        local_10 = param_3 - iVar1;
      }
      local_20 = (byte *)(param_1 + (int)local_10);
      local_34 = param_2 - param_3;
      local_30 = (uint)(*local_20 >> ((byte)iVar1 & 0x1f)) *
                 *(int *)(&DAT_145d13b20 + (longlong)iVar1 * 4) >> 0x11;
      while( true ) {
        *local_28 = (char)local_30;
        local_34 = local_34 - (1 - iVar1);
        if (local_34 < 1) break;
        local_20 = local_20 + 1;
        local_30 = (uint)(*local_20 >> ((byte)iVar1 & 0x1f)) *
                   *(int *)(&DAT_145d13b20 + (longlong)iVar1 * 4) >> 0x11;
        *local_28 = *local_28 +
                    (*local_20 - (char)local_30 * (char)(&DAT_145d13af8)[iVar1]) *
                    (char)(&DAT_145d13af8)[1 - iVar1];
        local_34 = local_34 - iVar1;
        if (local_34 < 1) break;
        local_28 = local_28 + 1;
      }
      local_28 = local_28 + (1 - (longlong)param_1);
    }
  }
  return local_28;
}



// FUNCTION 143b7f070 FUN_143b7f070 body=695 status=ok
// SIG undefined FUN_143b7f070(void)

uint FUN_143b7f070(byte *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_48;
  byte *local_40;
  byte *local_38;
  uint local_30;
  uint local_28;
  uint local_24;
  uint local_20;
  
  if (param_3 != 0) {
    if ((int)(param_2 + param_3) < 2) {
      *param_1 = *param_1 * (char)(&DAT_145d13af8)[(int)param_3];
      param_2 = param_2 + param_3;
    }
    else {
      local_48 = 0;
      local_28 = param_2;
      if ((int)param_2 < 0x32) {
        local_28 = (uint)(byte)(&DAT_145d13ac0)[(int)param_2];
      }
      local_38 = param_1 + (longlong)(int)local_28 + -1;
      local_20 = param_3;
      if ((int)param_3 < 0x32) {
        local_20 = (uint)(byte)(&DAT_145d13ac0)[(int)param_3];
      }
      local_40 = local_38 + (int)local_20;
      local_24 = param_3;
      if ((int)param_3 < 0x32) {
        local_24 = (uint)(byte)(&DAT_145d13ac0)[(int)param_3];
      }
      iVar4 = 1 - (param_3 - (local_24 - 1));
      if (iVar4 == 0) {
        for (; param_1 <= local_38; local_38 = local_38 + -1) {
          *local_40 = *local_38;
          local_40 = local_40 + -1;
        }
      }
      else {
        if ((int)(param_2 + param_3) < 0x32) {
          local_30 = (uint)(byte)(&DAT_145d13ac0)[(int)(param_2 + param_3)];
        }
        else {
          local_30 = param_2 + param_3;
        }
        for (; param_1 <= local_38; local_38 = local_38 + -1) {
          uVar3 = (uint)(*local_38 >> ((byte)iVar4 & 0x1f)) *
                  *(int *)(&DAT_145d13b20 + (longlong)iVar4 * 4) >> 0x11;
          bVar1 = *local_38;
          iVar2 = (&DAT_145d13af8)[iVar4];
          local_48._0_1_ = (char)local_48 + (char)uVar3;
          if (local_40 <= param_1 + (longlong)(int)local_30 + -1) {
            *local_40 = (byte)local_48;
          }
          local_48 = ((uint)bVar1 - uVar3 * iVar2) * (&DAT_145d13af8)[1 - iVar4];
          local_40 = local_40 + -1;
        }
      }
      for (; param_1 <= local_40; local_40 = local_40 + -1) {
        *local_40 = (byte)local_48;
        local_48 = 0;
      }
      param_2 = param_2 + param_3;
    }
  }
  return param_2;
}



// FUNCTION 143b7f330 FUN_143b7f330 body=96 status=ok
// SIG undefined FUN_143b7f330(void)

void FUN_143b7f330(longlong param_1,uint param_2,undefined8 param_3)

{
  undefined4 local_res10;
  
  local_res10 = param_2;
  if ((param_2 & 0xdd) != 0) {
    if ((param_2 & 0x40000000) == 0) {
      FUN_143b81a50(param_1);
      *(undefined1 *)(param_1 + 8) = 0x20;
    }
    else {
      local_res10 = param_2 & 0xbfffffff;
    }
  }
  FUN_143bec0a0(param_3,local_res10);
  return;
}



// FUNCTION 143b7f390 FUN_143b7f390 body=2903 status=ok
// SIG undefined FUN_143b7f390(void)

void FUN_143b7f390(uint *param_1,char *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint local_48;
  uint local_44;
  char *local_40;
  int local_38;
  int local_34;
  uint local_30;
  int local_28;
  byte *local_20;
  uint local_14;
  uint local_10;
  
  uVar1 = param_1[1];
  if ((int)*param_1 < 0x32) {
    local_10 = (uint)(byte)(&DAT_145d13ac0)[(int)*param_1];
  }
  else {
    local_10 = *param_1;
  }
  local_20 = (byte *)((longlong)param_1 + (longlong)(int)local_10 + 8);
  local_40 = param_2;
  if ((param_1[2] & 0x80) != 0) {
    *param_2 = '-';
    local_40 = param_2 + 1;
  }
  if ((param_1[2] & 0x70) != 0) {
    if ((param_1[2] & 0x40) != 0) {
      _guard_xfg_dispatch_icall_nop(local_40,"Inf");
      _guard_xfg_dispatch_icall_nop(local_40 + 3,"inity");
      return;
    }
    if ((param_1[2] & 0x10) != 0) {
      *local_40 = 's';
      local_40 = local_40 + 1;
    }
    _guard_xfg_dispatch_icall_nop(local_40,"NaN");
    local_40 = local_40 + 3;
    if (uVar1 != 0) {
      return;
    }
    if ((*(char *)((longlong)param_1 + 9) == '\0') && (*param_1 == 1)) {
      return;
    }
  }
  if ((int)*param_1 < 0x32) {
    local_14 = (uint)(byte)(&DAT_145d13ac0)[(int)*param_1];
  }
  else {
    local_14 = *param_1;
  }
  local_38 = (*param_1 - (local_14 - 1)) + -1;
  if (uVar1 == 0) {
    for (; (byte *)((longlong)param_1 + 9) <= local_20; local_20 = local_20 + -1) {
      local_44 = (uint)*local_20;
      for (; -1 < local_38; local_38 = local_38 + -1) {
        *local_40 = '0';
        iVar2 = (&DAT_145d13af8)[local_38];
        local_48 = iVar2 << 1;
        if (local_48 < local_44) {
          if ((uint)(iVar2 * 8) <= local_44) {
            local_44 = local_44 + iVar2 * -8;
            *local_40 = *local_40 + '\b';
          }
          local_48 = (uint)(iVar2 * 8) / 2;
          if (local_48 <= local_44) {
            local_44 = local_44 - local_48;
            *local_40 = *local_40 + '\x04';
          }
          local_48 = local_48 / 2;
        }
        if (local_48 <= local_44) {
          local_44 = local_44 - local_48;
          *local_40 = *local_40 + '\x02';
        }
        if (local_48 / 2 <= local_44) {
          local_44 = local_44 - local_48 / 2;
          *local_40 = *local_40 + '\x01';
        }
        local_40 = local_40 + 1;
      }
      local_38 = 0;
    }
    *local_40 = '\0';
  }
  else {
    local_34 = *param_1 + uVar1;
    local_30 = 0;
    if ((0 < (int)uVar1) || (local_34 < -5)) {
      local_30 = (uVar1 - 1) + *param_1;
      local_34 = 1;
      if ((param_3 != '\0') && (local_30 != 0)) {
        if ((int)local_30 < 0) {
          local_28 = (int)-local_30 % 3;
          if (local_28 != 0) {
            local_28 = 3 - local_28;
          }
        }
        else {
          local_28 = (int)local_30 % 3;
        }
        local_30 = local_30 - local_28;
        if (((*(char *)((longlong)param_1 + 9) == '\0') && (*param_1 == 1)) &&
           ((param_1[2] & 0x70) == 0)) {
          if (local_28 != 0) {
            local_30 = local_30 + 3;
            local_34 = -(2 - local_28);
          }
        }
        else {
          local_34 = local_28 + 1;
        }
      }
    }
    iVar2 = local_34;
    local_44 = (uint)*local_20;
    if (local_34 < 1) {
      *local_40 = '0';
      local_40[1] = '.';
      local_40 = local_40 + 2;
      for (; local_34 < 0; local_34 = local_34 + 1) {
        *local_40 = '0';
        local_40 = local_40 + 1;
      }
      do {
        if (local_38 < 0) {
          if (local_20 == (byte *)((longlong)param_1 + 9)) goto LAB_143b7fd15;
          local_20 = local_20 + -1;
          local_38 = 0;
          local_44 = (uint)*local_20;
        }
        *local_40 = '0';
        iVar2 = (&DAT_145d13af8)[local_38];
        local_48 = iVar2 << 1;
        if (local_48 < local_44) {
          if ((uint)(iVar2 * 8) <= local_44) {
            local_44 = local_44 + iVar2 * -8;
            *local_40 = *local_40 + '\b';
          }
          local_48 = (uint)(iVar2 * 8) / 2;
          if (local_48 <= local_44) {
            local_44 = local_44 - local_48;
            *local_40 = *local_40 + '\x04';
          }
          local_48 = local_48 / 2;
        }
        if (local_48 <= local_44) {
          local_44 = local_44 - local_48;
          *local_40 = *local_40 + '\x02';
        }
        if (local_48 / 2 <= local_44) {
          local_44 = local_44 - local_48 / 2;
          *local_40 = *local_40 + '\x01';
        }
        local_40 = local_40 + 1;
        local_38 = local_38 + -1;
      } while( true );
    }
    for (; 0 < local_34; local_34 = local_34 + -1) {
      if (local_38 < 0) {
        if (local_20 == (byte *)((longlong)param_1 + 9)) break;
        local_20 = local_20 + -1;
        local_38 = 0;
        local_44 = (uint)*local_20;
      }
      *local_40 = '0';
      iVar3 = (&DAT_145d13af8)[local_38];
      local_48 = iVar3 << 1;
      if (local_48 < local_44) {
        if ((uint)(iVar3 * 8) <= local_44) {
          local_44 = local_44 + iVar3 * -8;
          *local_40 = *local_40 + '\b';
        }
        local_48 = (uint)(iVar3 * 8) / 2;
        if (local_48 <= local_44) {
          local_44 = local_44 - local_48;
          *local_40 = *local_40 + '\x04';
        }
        local_48 = local_48 / 2;
      }
      if (local_48 <= local_44) {
        local_44 = local_44 - local_48;
        *local_40 = *local_40 + '\x02';
      }
      if (local_48 / 2 <= local_44) {
        local_44 = local_44 - local_48 / 2;
        *local_40 = *local_40 + '\x01';
      }
      local_40 = local_40 + 1;
      local_38 = local_38 + -1;
    }
    if (iVar2 < (int)*param_1) {
      *local_40 = '.';
      do {
        local_40 = local_40 + 1;
        if (local_38 < 0) {
          if (local_20 == (byte *)((longlong)param_1 + 9)) goto LAB_143b7fd15;
          local_20 = local_20 + -1;
          local_38 = 0;
          local_44 = (uint)*local_20;
        }
        *local_40 = '0';
        iVar2 = (&DAT_145d13af8)[local_38];
        local_48 = iVar2 << 1;
        if (local_48 < local_44) {
          if ((uint)(iVar2 * 8) <= local_44) {
            local_44 = local_44 + iVar2 * -8;
            *local_40 = *local_40 + '\b';
          }
          local_48 = (uint)(iVar2 * 8) / 2;
          if (local_48 <= local_44) {
            local_44 = local_44 - local_48;
            *local_40 = *local_40 + '\x04';
          }
          local_48 = local_48 / 2;
        }
        if (local_48 <= local_44) {
          local_44 = local_44 - local_48;
          *local_40 = *local_40 + '\x02';
        }
        if (local_48 / 2 <= local_44) {
          local_44 = local_44 - local_48 / 2;
          *local_40 = *local_40 + '\x01';
        }
        local_38 = local_38 + -1;
      } while( true );
    }
    for (; 0 < local_34; local_34 = local_34 + -1) {
      *local_40 = '0';
      local_40 = local_40 + 1;
    }
LAB_143b7fd15:
    if (local_30 != 0) {
      bVar4 = false;
      *local_40 = 'E';
      local_40[1] = '+';
      local_44 = local_30;
      if ((int)local_30 < 0) {
        local_40[1] = '-';
        local_44 = -local_30;
      }
      local_40 = local_40 + 2;
      for (local_38 = 9; -1 < local_38; local_38 = local_38 + -1) {
        *local_40 = '0';
        iVar2 = (&DAT_145d13af8)[local_38];
        local_48 = iVar2 << 1;
        if (local_48 < local_44) {
          if ((uint)(iVar2 * 8) <= local_44) {
            local_44 = local_44 + iVar2 * -8;
            *local_40 = *local_40 + '\b';
          }
          local_48 = (uint)(iVar2 * 8) / 2;
          if (local_48 <= local_44) {
            local_44 = local_44 - local_48;
            *local_40 = *local_40 + '\x04';
          }
          local_48 = local_48 / 2;
        }
        if (local_48 <= local_44) {
          local_44 = local_44 - local_48;
          *local_40 = *local_40 + '\x02';
        }
        if (local_48 / 2 <= local_44) {
          local_44 = local_44 - local_48 / 2;
          *local_40 = *local_40 + '\x01';
        }
        if ((*local_40 != '0') || (bVar4)) {
          bVar4 = true;
          local_40 = local_40 + 1;
        }
      }
    }
    *local_40 = '\0';
  }
  return;
}



// FUNCTION 143b7fef0 FUN_143b7fef0 body=623 status=ok
// SIG undefined FUN_143b7fef0(void)

uint * FUN_143b7fef0(uint *param_1,int *param_2,char param_3,char param_4,int *param_5)

{
  int iVar1;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_18;
  byte *local_10;
  
  *param_5 = 0;
  if (((param_1[2] & 0x70) == 0) && ((*(byte *)((longlong)param_1 + 9) & 1) == 0)) {
    if ((*(char *)((longlong)param_1 + 9) != '\0') ||
       ((*param_1 != 1 || ((param_1[2] & 0x70) != 0)))) {
      local_20 = param_1[1];
      local_24 = 1;
      local_10 = (byte *)((longlong)param_1 + 9);
      local_28 = 0;
      do {
        if (((int)(*param_1 - 1) <= local_28) ||
           ((uint)*local_10 !=
            ((uint)(*local_10 >> ((byte)local_24 & 0x1f)) *
             *(int *)(&DAT_145d13b20 + (ulonglong)local_24 * 4) >> 0x11) *
            (&DAT_145d13af8)[local_24])) goto LAB_143b80071;
        if ((param_3 == '\0') && ((int)local_20 < 1)) {
          if (local_20 == 0) {
LAB_143b80071:
            if (local_28 == 0) {
              return param_1;
            }
            if (((char)param_2[6] != '\0') && (param_4 == '\0')) {
              iVar1 = ((param_2[1] - *param_2) + 1) - param_1[1];
              if (iVar1 < 1) {
                return param_1;
              }
              if (iVar1 < local_28) {
                local_28 = iVar1;
              }
            }
            if ((int)*param_1 < 0x32) {
              local_18 = (uint)(byte)(&DAT_145d13ac0)[(int)*param_1];
            }
            else {
              local_18 = *param_1;
            }
            FUN_143b7edc0((longlong)param_1 + 9,local_18,local_28);
            param_1[1] = param_1[1] + local_28;
            *param_1 = *param_1 - local_28;
            *param_5 = local_28;
            return param_1;
          }
          local_20 = local_20 + 1;
        }
        local_24 = local_24 + 1;
        if (1 < local_24) {
          local_10 = local_10 + 1;
          local_24 = 1;
        }
        local_28 = local_28 + 1;
      } while( true );
    }
    param_1[1] = 0;
  }
  return param_1;
}



// FUNCTION 143b80160 FUN_143b80160 body=1181 status=ok
// SIG undefined FUN_143b80160(void)

byte * FUN_143b80160(byte *param_1,int param_2,byte *param_3,int param_4,int param_5,byte *param_6,
                    int param_7)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *local_res8;
  byte *local_res18;
  uint local_48;
  uint local_40;
  byte *local_38;
  byte *local_30;
  
  pbVar2 = param_6;
  local_48 = 0;
  pbVar5 = param_6 + param_2;
  local_38 = param_6 + param_4;
  local_res8 = param_1;
  if (param_5 != 0) {
    local_38 = local_38 + param_5;
    if ((param_1 == param_6) && (param_5 <= param_2)) {
      param_6 = param_6 + param_5;
      local_res8 = param_1 + param_5;
    }
    else {
      for (; param_6 < pbVar2 + param_5; param_6 = param_6 + 1) {
        if (local_res8 < param_1 + param_2) {
          *param_6 = *local_res8;
        }
        else {
          *param_6 = 0;
        }
        local_res8 = local_res8 + 1;
      }
    }
  }
  local_res18 = param_3;
  local_30 = pbVar5;
  if (pbVar5 < local_38) {
    local_30 = local_38;
    local_38 = pbVar5;
  }
  for (; param_6 < local_38; param_6 = param_6 + 1) {
    bVar1 = *local_res8;
    local_res8 = local_res8 + 1;
    uVar4 = local_48 + bVar1 + (uint)*local_res18 * param_7;
    local_res18 = local_res18 + 1;
    local_48._0_1_ = (byte)uVar4;
    if (uVar4 < 10) {
      *param_6 = (byte)local_48;
      local_48 = 0;
    }
    else if ((int)uVar4 < 0) {
      local_48 = (uVar4 + 100 >> 1) * 0x6667 >> 0x11;
      *param_6 = (char)(uVar4 + 100) + (char)local_48 * -10;
      local_48 = local_48 - 10;
    }
    else {
      uVar4 = (uVar4 >> 1) * 0x6667 >> 0x11;
      *param_6 = (byte)local_48 + (char)uVar4 * -10;
      local_48 = uVar4;
    }
  }
  if (param_6 < local_30) {
    for (; param_6 < local_30; param_6 = param_6 + 1) {
      if (local_res8 < param_1 + param_2) {
        uVar4 = (uint)*local_res8;
        local_res8 = local_res8 + 1;
      }
      else {
        uVar4 = (uint)*local_res18 * param_7;
        local_res18 = local_res18 + 1;
      }
      local_48 = local_48 + uVar4;
      if (local_48 < 10) {
        *param_6 = (byte)local_48;
        local_48 = 0;
      }
      else if ((int)local_48 < 0) {
        uVar4 = (local_48 + 100 >> 1) * 0x6667 >> 0x11;
        *param_6 = (char)(local_48 + 100) + (char)uVar4 * -10;
        local_48 = uVar4 - 10;
      }
      else {
        uVar4 = (local_48 >> 1) * 0x6667 >> 0x11;
        *param_6 = (byte)local_48 + (char)uVar4 * -10;
        local_48 = uVar4;
      }
    }
  }
  if (local_48 == 0) {
    param_6 = param_6 + -(longlong)pbVar2;
  }
  else if ((int)local_48 < 1) {
    local_40 = 1;
    for (param_6 = pbVar2; param_6 < local_30; param_6 = param_6 + 1) {
      iVar3 = (local_40 + 9) - (uint)*param_6;
      if (9 < iVar3) {
        *param_6 = 0;
      }
      else {
        local_40._0_1_ = (byte)iVar3;
        *param_6 = (byte)local_40;
      }
      local_40 = (uint)(9 < iVar3);
    }
    if (local_40 - local_48 != 1) {
      *param_6 = ((char)local_40 - (byte)local_48) - 1;
      param_6 = param_6 + 1;
    }
    param_6 = pbVar2 + -(longlong)param_6;
  }
  else {
    *param_6 = (byte)local_48;
    param_6 = param_6 + (1 - (longlong)pbVar2);
  }
  return param_6;
}



// FUNCTION 143b80600 FUN_143b80600 body=900 status=ok
// SIG undefined FUN_143b80600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_143b80600(byte *param_1,int param_2,longlong param_3,int param_4,uint param_5)

{
  undefined1 auStack_f8 [32];
  uint local_d8;
  char *local_d0;
  undefined4 local_c8;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  byte *local_a0;
  int local_98;
  uint local_94;
  char *local_90;
  char *local_88;
  char *local_80;
  byte *local_78;
  undefined4 local_70;
  uint local_6c;
  char local_68 [80];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_90 = (char *)0x0;
  if (param_5 == 0) {
    if (param_4 < param_2) {
      local_b0 = 1;
    }
    else if (param_2 < param_4) {
      local_b0 = 0xffffffff;
    }
    else {
      local_78 = (byte *)(param_3 + -1 + (longlong)param_2);
      for (local_a0 = param_1 + (longlong)param_2 + -1; param_1 <= local_a0;
          local_a0 = local_a0 + -1) {
        if (*local_78 < *local_a0) {
          return 1;
        }
        if (*local_a0 < *local_78) {
          return 0xffffffff;
        }
        local_78 = local_78 + -1;
      }
      local_b0 = 0;
    }
  }
  else {
    if ((int)param_5 < 0x32) {
      local_ac = (uint)(byte)(&DAT_145d13ac0)[(int)param_5];
    }
    else {
      local_ac = param_5;
    }
    if ((int)(param_4 + local_ac) < param_2) {
      local_b0 = 1;
    }
    else {
      if ((int)param_5 < 0x32) {
        local_94 = (uint)(byte)(&DAT_145d13ac0)[(int)param_5];
      }
      else {
        local_94 = param_5;
      }
      if (param_2 + 1 < (int)(param_4 + local_94)) {
        local_b0 = 0xffffffff;
      }
      else {
        if ((int)param_5 < 0x32) {
          local_a8 = (uint)(byte)(&DAT_145d13ac0)[(int)param_5];
        }
        else {
          local_a8 = param_5;
        }
        local_b8 = param_4 + local_a8;
        if ((int)local_b8 < param_2) {
          local_b8 = param_2;
        }
        local_b8 = local_b8 + 2;
        local_80 = local_68;
        if ((local_b8 < 0x4a) ||
           (local_90 = (char *)FUN_143aa7a40((longlong)(int)local_b8), local_80 = local_90,
           local_90 != (char *)0x0)) {
          local_6c = param_5;
          local_70 = 0;
          local_c8 = 0xffffffff;
          local_d0 = local_80;
          local_d8 = param_5;
          local_98 = FUN_143b80160(param_1,param_2,param_3,param_4);
          if (local_98 < 0) {
            local_b0 = 0xffffffff;
          }
          else {
            for (local_88 = local_80;
                (local_88 < local_80 + (longlong)local_98 + -1 && (*local_88 == '\0'));
                local_88 = local_88 + 1) {
            }
            local_b4 = (uint)(*local_88 != '\0');
            local_b0 = local_b4;
          }
          if (local_90 != (char *)0x0) {
            FUN_143aa79f0(local_90);
          }
        }
        else {
          local_b0 = 0x80000000;
        }
      }
    }
  }
  return local_b0;
}



// FUNCTION 143b80990 FUN_143b80990 body=108 status=ok
// SIG undefined FUN_143b80990(void)

undefined8
FUN_143b80990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int local_18 [6];
  
  local_18[0] = 0;
  FUN_143b7ac30(param_1,param_2,param_3,param_4,1,local_18);
  if (local_18[0] != 0) {
    FUN_143b7f330(param_1,local_18[0],param_4);
  }
  return param_1;
}



// FUNCTION 143b80a00 FUN_143b80a00 body=293 status=ok
// SIG undefined FUN_143b80a00(void)

uint * FUN_143b80a00(uint *param_1,uint *param_2)

{
  uint local_28;
  undefined1 *local_20;
  undefined1 *local_18;
  
  if (param_1 != param_2) {
    *(char *)(param_1 + 2) = (char)param_2[2];
    param_1[1] = param_2[1];
    *param_1 = *param_2;
    *(undefined1 *)((longlong)param_1 + 9) = *(undefined1 *)((longlong)param_2 + 9);
    if (1 < (int)*param_2) {
      local_18 = (undefined1 *)((longlong)param_1 + 10);
      if ((int)*param_2 < 0x32) {
        local_28 = (uint)(byte)(&DAT_145d13ac0)[(int)*param_2];
      }
      else {
        local_28 = *param_2;
      }
      for (local_20 = (undefined1 *)((longlong)param_2 + 10);
          local_20 < (undefined1 *)((longlong)param_2 + (longlong)(int)local_28 + 9);
          local_20 = local_20 + 1) {
        *local_18 = *local_20;
        local_18 = local_18 + 1;
      }
    }
  }
  return param_1;
}



// FUNCTION 143b80b30 FUN_143b80b30 body=108 status=ok
// SIG undefined FUN_143b80b30(void)

undefined8
FUN_143b80b30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int local_18 [6];
  
  local_18[0] = 0;
  FUN_143b7b3f0(param_1,param_2,param_3,param_4,0x80,local_18);
  if (local_18[0] != 0) {
    FUN_143b7f330(param_1,local_18[0],param_4);
  }
  return param_1;
}



// FUNCTION 143b80ba0 FUN_143b80ba0 body=2115 status=ok
// SIG undefined FUN_143b80ba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint * FUN_143b80ba0(uint *param_1,char *param_2,int *param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  uint *local_b0;
  char *local_a8;
  byte local_a0;
  uint local_9c;
  uint local_98;
  char local_94;
  uint local_90;
  char *local_88;
  undefined4 local_80 [2];
  char *local_78;
  char *local_70;
  uint local_68;
  uint local_64;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  char local_40 [48];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_90 = 0;
  local_a0 = 0;
  local_60 = (char *)0x0;
  local_9c = 0;
  local_70 = (char *)0x0;
  local_78 = (char *)0x0;
  local_a8 = param_2;
  local_88 = param_2;
  do {
    if ((*local_a8 < '0') || ('9' < *local_a8)) {
      if ((*local_a8 == '.') && (local_70 == (char *)0x0)) {
        local_70 = local_a8;
        if (local_a8 == local_88) {
          local_88 = local_88 + 1;
        }
      }
      else {
        if (local_a8 != param_2) break;
        if (*local_a8 == '-') {
          local_88 = local_88 + 1;
          local_a0 = 0x80;
        }
        else {
          if (*local_a8 != '+') break;
          local_88 = local_88 + 1;
        }
      }
    }
    else {
      local_78 = local_a8;
      local_9c = local_9c + 1;
    }
    local_a8 = local_a8 + 1;
  } while( true );
  pcVar3 = local_a8;
  if (local_78 == (char *)0x0) {
    local_98 = 1;
    if ((*local_a8 == '\0') || (local_70 != (char *)0x0)) goto LAB_143b81396;
    FUN_143b81a50(param_1);
    cVar2 = FUN_143b7a8f0(local_a8,"infinity","INFINITY");
    if ((cVar2 != '\0') ||
       (cVar2 = FUN_143b7a8f0(local_a8,&DAT_145d135e4,&DAT_145d13c04), cVar2 != '\0')) {
      *(byte *)(param_1 + 2) = local_a0 | 0x40;
      local_98 = 0;
      pcVar3 = local_a8;
      goto LAB_143b81396;
    }
    *(byte *)(param_1 + 2) = local_a0 | 0x20;
    if ((*local_a8 == 's') || (*local_a8 == 'S')) {
      local_a8 = local_a8 + 1;
      *(byte *)(param_1 + 2) = local_a0 | 0x10;
    }
    if ((((*local_a8 != 'n') && (pcVar3 = local_a8, *local_a8 != 'N')) ||
        ((pcVar3 = local_a8 + 1, *pcVar3 != 'a' && (*pcVar3 != 'A')))) ||
       ((pcVar3 = local_a8 + 2, *pcVar3 != 'n' && (*pcVar3 != 'N')))) goto LAB_143b81396;
    for (local_88 = local_a8 + 3; *local_88 == '0'; local_88 = local_88 + 1) {
    }
    if (*local_88 == '\0') {
      local_98 = 0;
      pcVar3 = local_a8 + 3;
      goto LAB_143b81396;
    }
    for (local_a8 = local_88; ('/' < *local_a8 && (*local_a8 < ':')); local_a8 = local_a8 + 1) {
      local_78 = local_a8;
      local_9c = local_9c + 1;
    }
    pcVar3 = local_a8;
    if ((*local_a8 != '\0') ||
       ((*param_3 + -1 < (int)local_9c && (((char)param_3[6] != '\0' || (*param_3 < (int)local_9c)))
        ))) goto LAB_143b81396;
    local_a0 = (byte)param_1[2];
  }
  else if (*local_a8 != '\0') {
    local_98 = 1;
    if ((*local_a8 != 'e') && (*local_a8 != 'E')) goto LAB_143b81396;
    local_94 = '\0';
    pcVar3 = local_a8 + 1;
    if (*pcVar3 == '-') {
      local_94 = '\x01';
      pcVar3 = local_a8 + 2;
    }
    else if (*pcVar3 == '+') {
      pcVar3 = local_a8 + 2;
    }
    local_a8 = pcVar3;
    pcVar3 = local_a8;
    if (*local_a8 == '\0') goto LAB_143b81396;
    for (; (pcVar1 = local_a8, *local_a8 == '0' && (local_a8[1] != '\0')); local_a8 = local_a8 + 1)
    {
    }
    local_48 = local_a8;
    for (; ('/' < *local_a8 && (*local_a8 < ':')); local_a8 = local_a8 + 1) {
      local_90 = local_90 * 10 + -0x30 + (int)*local_a8;
    }
    pcVar3 = local_a8;
    if (*local_a8 != '\0') goto LAB_143b81396;
    if ((pcVar1 + 10 <= local_a8) && ((pcVar1 + 10 < local_a8 || ('1' < *pcVar1)))) {
      local_90 = 0x773593fe;
    }
    if (local_94 != '\0') {
      local_90 = -local_90;
    }
  }
  local_98 = 0;
  if (*local_88 == '0') {
    for (local_a8 = local_88; local_a8 < local_78; local_a8 = local_a8 + 1) {
      if (*local_a8 != '.') {
        if (*local_a8 != '0') break;
        local_9c = local_9c - 1;
      }
      local_88 = local_88 + 1;
    }
  }
  if ((local_70 != (char *)0x0) && (local_70 < local_78)) {
    local_90 = local_90 - ((int)local_78 - (int)local_70);
  }
  if (*param_3 < (int)local_9c) {
    if ((int)local_9c < 0x32) {
      local_64 = (uint)(byte)(&DAT_145d13ac0)[(int)local_9c];
    }
    else {
      local_64 = local_9c;
    }
    local_68 = local_64;
    local_58 = local_40;
    pcVar3 = local_58;
    if ((0x2d < (int)local_64) &&
       (local_60 = (char *)FUN_143aa7a40((longlong)(int)local_64), pcVar3 = local_60,
       local_60 == (char *)0x0)) {
      local_98 = local_98 | 0x10;
      pcVar3 = local_a8;
      goto LAB_143b81396;
    }
  }
  else {
    pcVar3 = (char *)((longlong)param_1 + 9);
  }
  local_58 = pcVar3;
  local_50 = local_58;
  for (local_a8 = local_78; local_88 <= local_a8; local_a8 = local_a8 + -1) {
    if (*local_a8 != '.') {
      *local_50 = *local_a8 + -0x30;
      local_50 = local_50 + 1;
    }
  }
  *(byte *)(param_1 + 2) = local_a0;
  param_1[1] = local_90;
  *param_1 = local_9c;
  if (*param_3 < (int)local_9c) {
    local_80[0] = 0;
    local_b0 = &local_98;
    local_b8 = local_80;
    FUN_143b7e3c0(param_1,param_3,local_58,local_9c);
    FUN_143b7c9f0(param_1,param_3,local_80,&local_98);
    pcVar3 = local_a8;
  }
  else if (((int)(param_1[1] - 1) < (int)(param_3[2] - *param_1)) ||
          (pcVar3 = local_a8, param_3[1] - *param_3 < (int)(param_1[1] - 1))) {
    local_80[0] = 0;
    FUN_143b7c9f0(param_1,param_3,local_80,&local_98);
    pcVar3 = local_a8;
  }
LAB_143b81396:
  local_a8 = pcVar3;
  if (local_60 != (char *)0x0) {
    FUN_143aa79f0(local_60);
  }
  if (local_98 != 0) {
    FUN_143b7f330(param_1,local_98,param_3);
  }
  return param_1;
}



// FUNCTION 143b813f0 FUN_143b813f0 body=103 status=ok
// SIG undefined FUN_143b813f0(void)

undefined8
FUN_143b813f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int local_18 [6];
  
  local_18[0] = 0;
  FUN_143b7cfb0(param_1,param_2,param_3,param_4,local_18);
  if (local_18[0] != 0) {
    FUN_143b7f330(param_1,local_18[0],param_4);
  }
  return param_1;
}



// FUNCTION 143b81460 FUN_143b81460 body=153 status=ok
// SIG undefined FUN_143b81460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b81460(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  int *local_30;
  int local_28 [2];
  undefined1 local_20 [4];
  undefined4 local_1c;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  FUN_143b81a50(local_20);
  local_1c = *(undefined4 *)(param_2 + 4);
  local_30 = local_28;
  local_38 = 0;
  FUN_143b79530(param_1,local_20,param_2,param_3);
  if (local_28[0] != 0) {
    FUN_143b7f330(param_1,local_28[0],param_3);
  }
  return param_1;
}



// FUNCTION 143b81500 FUN_143b81500 body=108 status=ok
// SIG undefined FUN_143b81500(void)

undefined8
FUN_143b81500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int local_18 [6];
  
  local_18[0] = 0;
  FUN_143b7df20(param_1,param_2,param_3,param_4,1,local_18);
  if (local_18[0] != 0) {
    FUN_143b7f330(param_1,local_18[0],param_4);
  }
  return param_1;
}



// FUNCTION 143b81570 FUN_143b81570 body=223 status=ok
// SIG undefined FUN_143b81570(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_143b81570(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int local_18 [2];
  undefined1 local_10 [16];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if ((*(byte *)(param_2 + 8) & 0x30) == 0) {
    FUN_143b7b200(param_1,param_2,param_3,local_18 + 1,local_18);
    FUN_143b7c9f0(param_1,param_3,local_18 + 1,local_18);
    FUN_143b7fef0(param_1,param_3,1,0,local_10);
  }
  else {
    FUN_143b7dd10(param_1,param_2,0,param_3,local_18);
  }
  if (local_18[0] != 0) {
    FUN_143b7f330(param_1,local_18[0],param_3);
  }
  return param_1;
}



// FUNCTION 143b81650 FUN_143b81650 body=338 status=ok
// SIG undefined FUN_143b81650(void)

int FUN_143b81650(int *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  uint local_28;
  int local_24;
  byte *local_18;
  
  if ((((*(byte *)(param_1 + 2) & 0x70) == 0) && (*param_1 < 0xb)) && (param_1[1] == 0)) {
    local_28 = 0;
    uVar2 = (uint)*(byte *)((longlong)param_1 + 9);
    local_18 = (byte *)((longlong)param_1 + 10);
    for (local_24 = 1; local_24 < *param_1; local_24 = local_24 + 1) {
      local_28 = local_28 + (uint)*local_18 * (&DAT_145d13af8)[local_24 + -1];
      local_18 = local_18 + 1;
    }
    if ((local_28 < 0xccccccd) && ((local_28 != 0xccccccc || (uVar2 < 8)))) {
      iVar1 = uVar2 + local_28 * 10;
      if ((*(byte *)(param_1 + 2) & 0x80) == 0) {
        return iVar1;
      }
      return -iVar1;
    }
    if ((((*(byte *)(param_1 + 2) & 0x80) != 0) && (local_28 == 0xccccccc)) && (uVar2 == 8)) {
      return -0x80000000;
    }
  }
  FUN_143bec0a0(param_2,0x80);
  return 0;
}



// FUNCTION 143b817b0 FUN_143b817b0 body=354 status=ok
// SIG undefined FUN_143b817b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b817b0(undefined8 param_1,undefined4 *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_88 [32];
  uint *local_68;
  uint local_58 [2];
  undefined4 local_50 [4];
  undefined4 local_40;
  uint local_3c;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_58[0] = 0;
  if ((*(byte *)(param_2 + 2) & 0x70) == 0) {
    if (-1 < (int)param_2[1]) {
      uVar1 = FUN_143b80a00(param_1,param_2);
      return uVar1;
    }
    puVar3 = param_3;
    puVar4 = local_50;
    for (lVar2 = 0x1c; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = (undefined4 *)((longlong)puVar4 + 1);
    }
    local_50[0] = *param_2;
    local_40 = 0;
    FUN_143b81a50(local_30);
    FUN_143b81500(param_1,param_2,local_30,local_50);
    local_58[0] = local_58[0] | local_3c;
  }
  else if ((*(byte *)(param_2 + 2) & 0x40) == 0) {
    local_68 = local_58;
    FUN_143b7dd10(param_1,param_2,0,param_3);
  }
  else {
    FUN_143b80a00(param_1,param_2);
  }
  if (local_58[0] != 0) {
    FUN_143b7f330(param_1,local_58[0],param_3);
  }
  return param_1;
}



// FUNCTION 143b81920 FUN_143b81920 body=147 status=ok
// SIG undefined FUN_143b81920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b81920(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined4 local_38;
  uint local_34;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  puVar2 = param_3;
  puVar3 = local_48;
  for (lVar1 = 0x1c; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_38 = 0;
  FUN_143b817b0(param_1,param_2,local_48);
  *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | local_34 & 0x80;
  return param_1;
}



// FUNCTION 143b819c0 FUN_143b819c0 body=42 status=ok
// SIG undefined FUN_143b819c0(void)

undefined8 FUN_143b819c0(undefined8 param_1,undefined8 param_2)

{
  FUN_143b7f390(param_1,param_2,0);
  return param_2;
}



// FUNCTION 143b819f0 FUN_143b819f0 body=85 status=ok
// SIG undefined FUN_143b819f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b819f0(undefined8 param_1)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 local_38 [8];
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  FUN_143bebf00(local_30,0);
  local_48 = local_38;
  FUN_143b7fef0(param_1,local_30,0,1);
  return;
}



// FUNCTION 143b81a50 FUN_143b81a50 body=62 status=ok
// SIG undefined FUN_143b81a50(void)

undefined4 * FUN_143b81a50(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[1] = 0;
  *param_1 = 1;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 143b81a90 FUN_143b81a90 body=2923 status=ok
// SIG undefined FUN_143b81a90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_143b81a90(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_328 [32];
  uint local_308;
  longlong local_300;
  longlong local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  undefined8 local_238;
  undefined8 local_230;
  longlong local_228;
  longlong local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158 [40];
  undefined1 local_130 [40];
  undefined1 local_108 [40];
  undefined1 local_e0 [40];
  undefined1 local_b8 [40];
  undefined1 local_90 [40];
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_160 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  local_308 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_2a0 = FUN_143a8d310(0x58);
  if (local_2a0 == 0) {
    local_2f0 = 0;
  }
  else {
    local_1a8 = FUN_143a8d4f0(local_b8,1,&DAT_145d13c18,0xffffffff);
    local_308 = local_308 | 1;
    local_180 = local_1a8;
    local_2f0 = FUN_143b16d40(local_2a0,local_1a8,param_2);
  }
  local_228 = local_2f0;
  *param_1 = local_2f0;
  if ((local_308 & 1) != 0) {
    local_308 = local_308 & 0xfffffffe;
    FUN_143a8dc60(local_b8);
  }
  local_270 = FUN_143a8d310(0x58);
  if (local_270 == 0) {
    local_2e0 = 0;
  }
  else {
    local_218 = FUN_143a8d4f0(local_108,1,&DAT_145d13c30,0xffffffff);
    local_308 = local_308 | 2;
    local_168 = local_218;
    local_2e0 = FUN_143b16d40(local_270,local_218,param_2);
  }
  local_240 = local_2e0;
  param_1[1] = local_2e0;
  if ((local_308 & 2) != 0) {
    local_308 = local_308 & 0xfffffffd;
    FUN_143a8dc60(local_108);
  }
  local_290 = FUN_143a8d310(0x58);
  if (local_290 == 0) {
    local_2d0 = 0;
  }
  else {
    local_208 = FUN_143a8d4f0(local_68,1,&DAT_145d13c50,0xffffffff);
    local_308 = local_308 | 4;
    local_190 = local_208;
    local_2d0 = FUN_143b16d40(local_290,local_208,param_2);
  }
  local_1f8 = local_2d0;
  param_1[2] = local_2d0;
  if ((local_308 & 4) != 0) {
    local_308 = local_308 & 0xfffffffb;
    FUN_143a8dc60(local_68);
  }
  local_250 = FUN_143a8d310(0x58);
  if (local_250 == 0) {
    local_2c0 = 0;
  }
  else {
    local_1e8 = FUN_143a8d4f0(local_158,1,&DAT_145d13c78,0xffffffff);
    local_308 = local_308 | 8;
    local_170 = local_1e8;
    local_2c0 = FUN_143b16d40(local_250,local_1e8,param_2);
  }
  local_1a0 = local_2c0;
  param_1[3] = local_2c0;
  if ((local_308 & 8) != 0) {
    local_308 = local_308 & 0xfffffff7;
    FUN_143a8dc60(local_158);
  }
  local_280 = FUN_143a8d310(0x58);
  if (local_280 == 0) {
    local_2b0 = 0;
  }
  else {
    local_1d8 = FUN_143a8d4f0(local_130,1,&DAT_145d13c90,0xffffffff);
    local_308 = local_308 | 0x10;
    local_198 = local_1d8;
    local_2b0 = FUN_143b16d40(local_280,local_1d8,param_2);
  }
  local_1c8 = local_2b0;
  param_1[4] = local_2b0;
  if ((local_308 & 0x10) != 0) {
    local_308 = local_308 & 0xffffffef;
    FUN_143a8dc60(local_130);
  }
  local_260 = FUN_143a8d310(0x58);
  if (local_260 == 0) {
    local_300 = 0;
  }
  else {
    local_1b8 = FUN_143a8d4f0(local_e0,1,&DAT_145d13ca0,0xffffffff);
    local_308 = local_308 | 0x20;
    local_188 = local_1b8;
    local_300 = FUN_143b16d40(local_260,local_1b8,param_2);
  }
  local_178 = local_300;
  param_1[5] = local_300;
  if ((local_308 & 0x20) != 0) {
    local_308 = local_308 & 0xffffffdf;
    FUN_143a8dc60(local_e0);
  }
  local_2f8 = FUN_143a8d310(0x58);
  if (local_2f8 == 0) {
    local_2e8 = 0;
  }
  else {
    local_238 = FUN_143a8d4f0(local_90,1,&DAT_145d13cb0,0xffffffff);
    local_308 = local_308 | 0x40;
    local_230 = local_238;
    local_2e8 = FUN_143b16d40(local_2f8,local_238,param_2);
  }
  local_220 = local_2e8;
  param_1[6] = local_2e8;
  if ((local_308 & 0x40) != 0) {
    local_308 = local_308 & 0xffffffbf;
    FUN_143a8dc60(local_90);
  }
  local_2d8 = FUN_143a8d310(0x58);
  if (local_2d8 == 0) {
    local_2c8 = 0;
  }
  else {
    local_210 = FUN_143a8d4f0(local_40,1,&DAT_145d13cd8,0xffffffff);
    local_308 = local_308 | 0x80;
    local_200 = local_210;
    local_2c8 = FUN_143b16d40(local_2d8,local_210,param_2);
  }
  local_1f0 = local_2c8;
  param_1[7] = local_2c8;
  if ((local_308 & 0x80) != 0) {
    local_308 = local_308 & 0xffffff7f;
    FUN_143a8dc60(local_40);
  }
  local_2b8 = FUN_143a8d310(0x58);
  if (local_2b8 == 0) {
    local_2a8 = 0;
  }
  else {
    local_2a8 = FUN_143b11bb0(local_2b8,*param_1);
  }
  local_1e0 = local_2a8;
  param_1[8] = local_2a8;
  (**(code **)(*(longlong *)param_1[8] + 0x70))(param_1[8],param_1[1]);
  (**(code **)(*(longlong *)param_1[8] + 0x70))(param_1[8],param_1[2]);
  local_298 = FUN_143a8d310(0x58);
  if (local_298 == 0) {
    local_288 = 0;
  }
  else {
    local_288 = FUN_143b11bb0(local_298,param_1[4]);
  }
  local_1d0 = local_288;
  param_1[9] = local_288;
  (**(code **)(*(longlong *)param_1[9] + 0x70))(param_1[9],param_1[5]);
  (**(code **)(*(longlong *)param_1[9] + 0x70))(param_1[9],param_1[6]);
  local_278 = FUN_143a8d310(0x58);
  if (local_278 == 0) {
    local_268 = 0;
  }
  else {
    local_268 = FUN_143b11ea0(local_278);
  }
  local_1c0 = local_268;
  param_1[10] = local_268;
  local_258 = FUN_143a8d310(0x58);
  if (local_258 == 0) {
    local_248 = 0;
  }
  else {
    local_248 = FUN_143b11ea0(local_258);
  }
  local_1b0 = local_248;
  param_1[0xb] = local_248;
  if (((((*param_1 == 0) || (param_1[1] == 0)) || (param_1[2] == 0)) ||
      ((((param_1[3] == 0 || (param_1[4] == 0)) ||
        ((param_1[5] == 0 || ((param_1[6] == 0 || (param_1[7] == 0)))))) || (param_1[8] == 0)))) ||
     (((param_1[6] == 0 || (param_1[10] == 0)) || (param_1[0xb] == 0)))) {
    FUN_143b82670(param_1);
    *param_2 = 7;
  }
  else {
    FUN_143b82cd0(&DAT_146832aa0,7,param_1[10]);
    FUN_143b82cd0(&DAT_146832ac0,7,param_1[0xb]);
    FUN_143b149a0(*param_1);
    FUN_143b149a0(param_1[1]);
    FUN_143b149a0(param_1[2]);
    FUN_143b149a0(param_1[3]);
    FUN_143b149a0(param_1[4]);
    FUN_143b149a0(param_1[5]);
    FUN_143b149a0(param_1[6]);
    FUN_143b149a0(param_1[7]);
    FUN_143b149a0(param_1[8]);
    FUN_143b149a0(param_1[9]);
    FUN_143b149a0(param_1[10]);
    FUN_143b149a0(param_1[0xb]);
  }
  return param_1;
}



// FUNCTION 143b82600 FUN_143b82600 body=34 status=ok
// SIG undefined FUN_143b82600(void)

void FUN_143b82600(undefined8 param_1)

{
  FUN_143b82670(param_1);
  return;
}



// FUNCTION 143b82630 FUN_143b82630 body=54 status=ok
// SIG undefined FUN_143b82630(void)

undefined8 FUN_143b82630(undefined8 param_1,uint param_2)

{
  FUN_143b82600(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b82670 FUN_143b82670 body=1317 status=ok
// SIG undefined FUN_143b82670(void)

void FUN_143b82670(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *param_1 = 0;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[1] = 0;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[2] = 0;
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[3] = 0;
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[4] = 0;
  puVar1 = (undefined8 *)param_1[5];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[5] = 0;
  puVar1 = (undefined8 *)param_1[6];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[6] = 0;
  puVar1 = (undefined8 *)param_1[7];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[7] = 0;
  puVar1 = (undefined8 *)param_1[8];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[8] = 0;
  puVar1 = (undefined8 *)param_1[9];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[9] = 0;
  puVar1 = (undefined8 *)param_1[6];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[6] = 0;
  puVar1 = (undefined8 *)param_1[10];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[10] = 0;
  puVar1 = (undefined8 *)param_1[0xb];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0xb] = 0;
  return;
}



// FUNCTION 143b82ba0 FUN_143b82ba0 body=249 status=ok
// SIG undefined FUN_143b82ba0(void)

undefined8 FUN_143b82ba0(undefined4 param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_28 [10];
  
  local_28[0] = 0;
  FUN_143aa29a0(&DAT_146bc81a8,FUN_143b82d80,local_28);
  cVar1 = FUN_143a8b0e0(local_28[0]);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*(longlong *)*DAT_146bc81b0 + 0x30))(*DAT_146bc81b0,param_1);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*(longlong *)DAT_146bc81b0[1] + 0x30))(DAT_146bc81b0[1],param_1);
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      else if (param_2 == '\0') {
        uVar2 = DAT_146bc81b0[1];
      }
      else {
        uVar2 = DAT_146bc81b0[5];
      }
    }
    else if (param_2 == '\0') {
      uVar2 = *DAT_146bc81b0;
    }
    else {
      uVar2 = DAT_146bc81b0[4];
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143b82ca0 FUN_143b82ca0 body=45 status=ok
// SIG undefined FUN_143b82ca0(void)

undefined8 FUN_143b82ca0(undefined8 param_1)

{
  FUN_143aa29a0(&DAT_146bc81a8,FUN_143b82d80,param_1);
  return DAT_146bc81b0;
}



// FUNCTION 143b82cd0 FUN_143b82cd0 body=78 status=ok
// SIG undefined FUN_143b82cd0(void)

void FUN_143b82cd0(longlong param_1,int param_2,undefined8 param_3)

{
  undefined4 local_18;
  
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    FUN_143b13590(param_3,*(undefined4 *)(param_1 + (longlong)local_18 * 4));
  }
  return;
}



// FUNCTION 143b82d20 FUN_143b82d20 body=95 status=ok
// SIG undefined FUN_143b82d20(void)

undefined8 FUN_143b82d20(void)

{
  if (DAT_146bc81b0 != 0) {
    FUN_143b82630(DAT_146bc81b0,1);
  }
  DAT_146bc81b0 = 0;
  FUN_143a9a9f0(&DAT_146bc81a8);
  return 1;
}



// FUNCTION 143b82d80 FUN_143b82d80 body=221 status=ok
// SIG undefined FUN_143b82d80(void)

void FUN_143b82d80(undefined4 *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong local_30;
  
  FUN_143b68380(0x11,FUN_143b82d20);
  lVar2 = FUN_143a8d310(0x60);
  if (lVar2 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = FUN_143b81a90(lVar2,param_1);
  }
  DAT_146bc81b0 = local_30;
  cVar1 = FUN_143a8b0e0(*param_1);
  if (cVar1 == '\0') {
    if (DAT_146bc81b0 == 0) {
      *param_1 = 7;
    }
  }
  else {
    if (DAT_146bc81b0 != 0) {
      FUN_143b82630(DAT_146bc81b0,1);
    }
    DAT_146bc81b0 = 0;
  }
  return;
}



// FUNCTION 143b82e60 FUN_143b82e60 body=378 status=ok
// SIG undefined FUN_143b82e60(void)

undefined4 * FUN_143b82e60(undefined4 *param_1)

{
  *param_1 = 1;
  param_1[1] = DAT_146832ae4;
  param_1[2] = 0;
  param_1[3] = 3;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 1;
  param_1[6] = 6;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 1;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  FUN_143b74e90(param_1 + 0x12);
  param_1[0x32] = 0x2a;
  *(undefined1 *)(param_1 + 0x33) = 1;
  *(undefined1 *)((longlong)param_1 + 0xcd) = 1;
  FUN_143a8ac30(param_1 + 0x34);
  FUN_143a8ac30(param_1 + 0x3e);
  FUN_143a8ac30(param_1 + 0x48);
  FUN_143a8ac30(param_1 + 0x52);
  param_1[0x5c] = 0;
  return param_1;
}



// FUNCTION 143b82fe0 FUN_143b82fe0 body=285 status=ok
// SIG undefined FUN_143b82fe0(void)

undefined4 *
FUN_143b82fe0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0x30;
  param_1[1] = 0x40;
  FUN_143a8dbd0(param_1 + 2,0x2c,param_3,param_4,0xfffffffffffffffe);
  FUN_143a8dbd0(param_1 + 0xc,0x2e);
  FUN_143a8dbd0(param_1 + 0x16,0x25);
  FUN_143a8dbd0(param_1 + 0x20,0x2030);
  FUN_143a8dbd0(param_1 + 0x2a,0x23);
  FUN_143a8dbd0(param_1 + 0x34,0x3b);
  FUN_143a8dbd0(param_1 + 0x3e,0x45);
  FUN_143a8dbd0(param_1 + 0x48,0x2b);
  FUN_143a8dbd0(param_1 + 0x52,0x2d);
  FUN_143a8dbd0(param_1 + 0x5c,0x2a);
  return param_1;
}



// FUNCTION 143b83100 FUN_143b83100 body=556 status=ok
// SIG undefined FUN_143b83100(void)

undefined4 * FUN_143b83100(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[10] = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  param_1[0x10] = param_2[0x10];
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  FUN_143b74f60(param_1 + 0x12,param_2 + 0x12);
  param_1[0x32] = param_2[0x32];
  *(undefined1 *)(param_1 + 0x33) = *(undefined1 *)(param_2 + 0x33);
  *(undefined1 *)((longlong)param_1 + 0xcd) = *(undefined1 *)((longlong)param_2 + 0xcd);
  FUN_143a8dcd0(param_1 + 0x34,param_2 + 0x34);
  FUN_143a8dcd0(param_1 + 0x3e,param_2 + 0x3e);
  FUN_143a8dcd0(param_1 + 0x48,param_2 + 0x48);
  FUN_143a8dcd0(param_1 + 0x52,param_2 + 0x52);
  param_1[0x5c] = param_2[0x5c];
  return param_1;
}



// FUNCTION 143b83330 FUN_143b83330 body=6830 status=ok
// SIG undefined FUN_143b83330(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b83330(uint *param_1,undefined8 param_2,int *param_3,longlong param_4,
                  undefined4 *param_5)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_3a8 [32];
  int local_388;
  char local_384;
  char local_383;
  char local_382;
  int local_380;
  uint local_37c;
  int local_378;
  int local_374;
  int local_370;
  int local_36c;
  undefined1 local_368;
  undefined1 local_367;
  char local_366;
  undefined1 local_365;
  undefined1 local_364;
  undefined1 local_363;
  undefined1 local_362;
  int local_360;
  int local_35c;
  undefined1 *local_358;
  int local_350;
  int local_34c;
  int local_348;
  int local_344;
  int local_340;
  ushort local_33c;
  int local_338;
  int local_334;
  int local_330;
  uint local_32c;
  int local_328;
  int local_324;
  int local_320;
  int local_31c;
  int local_318;
  int local_314;
  int local_310;
  int local_30c;
  int local_308;
  int local_304;
  int local_300;
  int local_2fc;
  int local_2f8;
  int local_2f4;
  int local_2f0;
  int local_2ec;
  int local_2e8;
  int local_2e4;
  int local_2e0;
  int local_2dc;
  int local_2d8;
  int local_2d4;
  uint *local_2d0;
  uint *local_2c8;
  undefined8 local_2c0;
  uint *local_2b8;
  uint *local_2b0;
  int *local_2a8;
  undefined8 local_2a0;
  uint *local_298;
  uint *local_290;
  uint *local_288;
  uint *local_280;
  undefined8 local_278;
  undefined1 local_270 [40];
  undefined1 local_248 [48];
  undefined1 local_218 [128];
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_278 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_3a8;
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 != '\0') {
    return;
  }
  local_2c0 = FUN_143b82e60(local_198);
  local_2a0 = local_2c0;
  FUN_143b83100(param_3,local_2c0);
  FUN_143b3ad40();
  *(undefined4 *)(param_4 + 4) = 0xffffffff;
  *(undefined2 *)(param_4 + 0x28) = 0;
  *(undefined2 *)(param_4 + 8) = 0;
  local_33c = (short)*param_1 + 9;
  local_320 = FUN_143a904f0(param_1 + 0x2a);
  local_318 = FUN_143a904f0(param_1 + 2);
  local_324 = FUN_143a904f0(param_1 + 0xc);
  local_388 = 0;
  local_334 = FUN_143a904f0(param_2);
  local_344 = 0;
LAB_143b8349d:
  if ((1 < local_344) || (local_334 <= local_388)) {
    iVar5 = FUN_143a904f0(param_2);
    if (iVar5 == 0) {
      *(undefined1 *)(param_3 + 0x33) = 1;
      FUN_143a90910(param_3 + 0x34);
      FUN_143a90910(param_3 + 0x3e);
      *(undefined1 *)((longlong)param_3 + 0xcd) = 0;
      FUN_143a90910(param_3 + 0x48);
      FUN_143a90910(param_3 + 0x52);
      *param_3 = 0;
      param_3[1] = DAT_146832adc;
      param_3[2] = 0;
      param_3[3] = DAT_146832ae0;
      *(undefined1 *)(param_3 + 7) = 0;
      param_3[10] = 0;
      *(undefined1 *)(param_3 + 0xb) = 0;
      param_3[0xc] = 0;
      param_3[0xd] = 0;
      param_3[0xe] = 1;
      *(undefined1 *)(param_3 + 0xf) = 0;
      param_3[0x10] = 0;
      *(undefined1 *)(param_3 + 0x11) = 0;
    }
    if ((char)param_3[0x33] == '\0') {
      cVar1 = FUN_143a8dd00(param_3 + 0x34,param_3 + 0x48);
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = FUN_143a8dd00(param_3 + 0x3e,param_3 + 0x52);
      if (cVar1 == '\0') {
        return;
      }
    }
    *(undefined1 *)(param_3 + 0x33) = 0;
    FUN_143a8dcd0(param_3 + 0x3e,param_3 + 0x52);
    local_2a8 = param_3 + 0x48;
    uVar6 = FUN_143acc590(param_3 + 0x34,0x27);
    uVar6 = FUN_143acc590(uVar6,0x2d);
    FUN_143a8e070(uVar6,local_2a8);
    return;
  }
  local_360 = 1;
  local_328 = 0;
  local_34c = 0;
  local_330 = 0;
  FUN_143a8ac30(local_270);
  FUN_143a8ac30(local_248);
  local_380 = -1;
  local_350 = 1;
  local_378 = 0;
  local_370 = 0;
  local_35c = 0;
  local_36c = 0;
  local_384 = -1;
  local_382 = -1;
  local_374 = -1;
  local_32c = 0;
  local_348 = -1;
  FUN_143b74e90(local_218);
  local_383 = -1;
  local_368 = 0;
  local_358 = local_270;
  local_2e0 = local_388;
  local_366 = '\0';
LAB_143b8357c:
  do {
    do {
      while( true ) {
        if ((local_366 != '\0') || (local_334 <= local_388)) goto LAB_143b84529;
        local_37c = FUN_143a8e3e0(param_2,local_388);
        local_340 = local_360;
        if (local_360 != 0) break;
        cVar1 = FUN_143b3e5e0(param_2,local_388,local_320,param_1 + 0x2a);
        if (cVar1 == '\0') {
          if ((local_370 < 1) && (local_36c < 1)) {
            local_378 = local_378 + 1;
          }
          else {
            local_35c = local_35c + 1;
          }
          if ((-1 < local_384) && (local_380 < 0)) {
            local_384 = local_384 + '\x01';
          }
          local_388 = local_388 + local_320;
        }
        else if ((((int)local_37c < (int)*param_1) || ((int)(uint)local_33c < (int)local_37c)) &&
                (local_37c != param_1[1])) {
          cVar1 = FUN_143b3e5e0(param_2,local_388,local_318,param_1 + 2);
          if (cVar1 == '\0') {
            if (-1 < local_380) {
              *param_5 = 0x10100;
              FUN_143b84e00(param_2,local_388,param_4);
              Audio::FAudioCaptureSynth::IsStreamOpen(local_218);
              FUN_143a8dc60(local_248);
              FUN_143a8dc60(local_270);
              return;
            }
            local_382 = local_384;
            local_384 = '\0';
            local_388 = local_388 + local_318;
          }
          else {
            cVar1 = FUN_143b3e5e0(param_2,local_388,local_324,param_1 + 0xc);
            if (cVar1 == '\0') {
              if (-1 < local_380) {
                *param_5 = 0x10101;
                FUN_143b84e00(param_2,local_388,param_4);
                Audio::FAudioCaptureSynth::IsStreamOpen(local_218);
                FUN_143a8dc60(local_248);
                FUN_143a8dc60(local_270);
                return;
              }
              local_380 = local_378 + local_370 + local_35c;
              local_388 = local_388 + local_324;
            }
            else {
              local_298 = param_1 + 0x3e;
              uVar4 = FUN_143a904f0(param_1 + 0x3e);
              cVar1 = FUN_143b3e5e0(param_2,local_388,uVar4,local_298);
              if (cVar1 == '\0') {
                if (-1 < local_383) {
                  *param_5 = 0x10102;
                  FUN_143b84e00(param_2,local_388,param_4);
                  Audio::FAudioCaptureSynth::IsStreamOpen(local_218);
                  FUN_143a8dc60(local_248);
                  FUN_143a8dc60(local_270);
                  return;
                }
                if (-1 < local_384) {
                  *param_5 = 0x10103;
                  FUN_143b84e00(param_2,local_388,param_4);
                  Audio::FAudioCaptureSynth::IsStreamOpen(local_218);
                  FUN_143a8dc60(local_248);
                  FUN_143a8dc60(local_270);
                  return;
                }
                iVar5 = FUN_143a904f0(param_1 + 0x3e);
                local_388 = local_388 + iVar5;
                if (local_388 < local_334) {
                  local_2b0 = param_1 + 0x48;
                  uVar4 = FUN_143a904f0(param_1 + 0x48);
                  cVar1 = FUN_143b3e5e0(param_2,local_388,uVar4,local_2b0);
                  if (cVar1 == '\0') {
                    local_368 = 1;
                    iVar5 = FUN_143a904f0(param_1 + 0x48);
                    local_388 = local_388 + iVar5;
                  }
                }
                local_383 = '\0';
                while ((local_388 < local_334 &&
                       (uVar3 = FUN_143a8e3e0(param_2,local_388), uVar3 == *param_1))) {
                  local_383 = local_383 + '\x01';
                  if (*param_1 < 0x10000) {
                    local_2e8 = 1;
                  }
                  else {
                    local_2e8 = 2;
                  }
                  local_388 = local_388 + local_2e8;
                }
                if ((((local_378 + local_370 < 1) && (local_36c + local_35c < 1)) ||
                    ((0 < local_36c && (0 < local_378)))) || (local_383 < '\x01')) {
                  *param_5 = 0x10103;
                  FUN_143b84e00(param_2,local_388,param_4);
                  Audio::FAudioCaptureSynth::IsStreamOpen(local_218);
                  FUN_143a8dc60(local_248);
                  FUN_143a8dc60(local_270);
                  return;
                }
              }
              local_360 = 2;
              local_358 = local_248;
              local_34c = local_388;
            }
          }
        }
        else {
          if (0 < local_35c) {
            *param_5 = 0x10100;
            FUN_143b84e00(param_2,local_388,param_4);
            Audio::FAudioCaptureSynth::IsStreamOpen(local_218);
            FUN_143a8dc60(local_248);
            FUN_143a8dc60(local_270);
            return;
          }
          if (local_37c == param_1[1]) {
            local_36c = local_36c + 1;
          }
          else {
            if ((local_37c != *param_1) && (local_348 < 0)) {
              local_348 = local_378 + local_370;
            }
            if (-1 < local_348) {
              FUN_143b75150(local_218,(local_37c - *param_1) + 0x30 & 0xff);
            }
            local_370 = local_370 + 1;
          }
          if ((-1 < local_384) && (local_380 < 0)) {
            local_384 = local_384 + '\x01';
          }
          if (local_37c < 0x10000) {
            local_304 = 1;
          }
          else {
            local_304 = 2;
          }
          local_388 = local_388 + local_304;
        }
      }
    } while (local_360 < 1);
    if (local_360 < 3) {
      cVar1 = FUN_143b3e5e0(param_2,local_388,local_320,param_1 + 0x2a);
      if ((((cVar1 != '\0') &&
           (cVar1 = FUN_143b3e5e0(param_2,local_388,local_318,param_1 + 2), cVar1 != '\0')) &&
          (cVar1 = FUN_143b3e5e0(param_2,local_388,local_324,param_1 + 0xc), cVar1 != '\0')) &&
         ((((int)local_37c < (int)*param_1 || ((int)(uint)local_33c < (int)local_37c)) &&
          (local_37c != param_1[1])))) {
        if (local_37c == 0xa4) {
          FUN_143acc590(local_358,0x27);
          local_2d8 = local_388 + 1;
          iVar5 = FUN_143a904f0(param_2);
          if ((local_2d8 < iVar5) && (sVar2 = FUN_143a8e4f0(param_2,local_388 + 1), sVar2 == 0xa4))
          {
            FUN_143acc590(local_358,0xa4);
            local_2d4 = local_388 + 2;
            local_388 = local_388 + 1;
            iVar5 = FUN_143a904f0(param_2);
            if ((local_2d4 < iVar5) && (sVar2 = FUN_143a8e4f0(param_2,local_388 + 1), sVar2 == 0xa4)
               ) {
              FUN_143acc590(local_358,0xa4);
              local_388 = local_388 + 1;
              param_3[10] = 3;
            }
            else {
              param_3[10] = 2;
            }
          }
          else {
            param_3[10] = 1;
          }
        }
        else if (local_37c == 0x27) {
          local_388 = local_388 + 1;
          iVar5 = FUN_143a904f0(param_2);
          if ((iVar5 <= local_388) || (sVar2 = FUN_143a8e4f0(param_2,local_388), sVar2 != 0x27)) {
            local_360 = local_360 + 2;
            goto LAB_143b8357c;
          }
          FUN_143acc590(local_358,0x27);
        }
        else {
          local_290 = param_1 + 0x34;
          uVar4 = FUN_143a904f0(param_1 + 0x34);
          cVar1 = FUN_143b3e5e0(param_2,local_388,uVar4,local_290);
          if (cVar1 == '\0') {
            if ((local_360 == 1) || (local_344 == 1)) {
              *param_5 = 0x10100;
              FUN_143b84e00(param_2,local_388,param_4);
              Audio::FAudioCaptureSynth::IsStreamOpen(local_218);
              FUN_143a8dc60(local_248);
              FUN_143a8dc60(local_270);
              return;
            }
            local_330 = local_388;
            local_366 = '\x01';
            iVar5 = FUN_143a904f0(param_1 + 0x34);
            local_388 = local_388 + iVar5;
            goto LAB_143b8357c;
          }
          local_2d0 = param_1 + 0x16;
          uVar4 = FUN_143a904f0(param_1 + 0x16);
          cVar1 = FUN_143b3e5e0(param_2,local_388,uVar4,local_2d0);
          if (cVar1 == '\0') {
            if (local_350 != 1) {
              *param_5 = 0x10104;
              FUN_143b84e00(param_2,local_388,param_4);
              Audio::FAudioCaptureSynth::IsStreamOpen(local_218);
              FUN_143a8dc60(local_248);
              FUN_143a8dc60(local_270);
              return;
            }
            FUN_143acc590(local_358,0x27);
            FUN_143acc590(local_358,0x25);
            local_350 = 100;
            iVar5 = FUN_143a904f0(param_1 + 0x16);
            local_388 = local_388 + iVar5;
            goto LAB_143b8357c;
          }
          local_280 = param_1 + 0x20;
          uVar4 = FUN_143a904f0(param_1 + 0x20);
          cVar1 = FUN_143b3e5e0(param_2,local_388,uVar4,local_280);
          if (cVar1 == '\0') {
            if (local_350 != 1) {
              *param_5 = 0x10105;
              FUN_143b84e00(param_2,local_388,param_4);
              Audio::FAudioCaptureSynth::IsStreamOpen(local_218);
              FUN_143a8dc60(local_248);
              FUN_143a8dc60(local_270);
              return;
            }
            FUN_143acc590(local_358,0x27);
            FUN_143acc590(local_358,0x2030);
            local_350 = 1000;
            iVar5 = FUN_143a904f0(param_1 + 0x20);
            local_388 = local_388 + iVar5;
            goto LAB_143b8357c;
          }
          local_288 = param_1 + 0x5c;
          uVar4 = FUN_143a904f0(param_1 + 0x5c);
          cVar1 = FUN_143b3e5e0(param_2,local_388,uVar4,local_288);
          if (cVar1 == '\0') {
            if (local_374 < 0) {
              local_2e4 = local_388 + 1;
              iVar5 = FUN_143a904f0(param_2);
              if (local_2e4 != iVar5) {
                local_374 = local_388;
                iVar5 = FUN_143a904f0(param_1 + 0x5c);
                local_388 = local_388 + iVar5;
                local_32c = FUN_143a8e3e0(param_2,local_388);
                if (local_32c < 0x10000) {
                  local_30c = 1;
                }
                else {
                  local_30c = 2;
                }
                local_388 = local_388 + local_30c;
                goto LAB_143b8357c;
              }
            }
            *param_5 = 0x10106;
            FUN_143b84e00(param_2,local_388,param_4);
            Audio::FAudioCaptureSynth::IsStreamOpen(local_218);
            FUN_143a8dc60(local_248);
            FUN_143a8dc60(local_270);
            return;
          }
          local_2c8 = param_1 + 0x52;
          uVar4 = FUN_143a904f0(param_1 + 0x52);
          cVar1 = FUN_143b3e5e0(param_2,local_388,uVar4,local_2c8);
          if (cVar1 == '\0') {
            FUN_143acc590(local_358,0x27);
            FUN_143acc590(local_358,0x2d);
            iVar5 = FUN_143a904f0(param_1 + 0x52);
            local_388 = local_388 + iVar5;
            goto LAB_143b8357c;
          }
          local_2b8 = param_1 + 0x48;
          uVar4 = FUN_143a904f0(param_1 + 0x48);
          cVar1 = FUN_143b3e5e0(param_2,local_388,uVar4,local_2b8);
          if (cVar1 == '\0') {
            FUN_143acc590(local_358,0x27);
            FUN_143acc590(local_358,0x2b);
            iVar5 = FUN_143a904f0(param_1 + 0x48);
            local_388 = local_388 + iVar5;
            goto LAB_143b8357c;
          }
        }
        FUN_143a8e0c0(local_358,local_37c);
        if (local_37c < 0x10000) {
          local_2ec = 1;
        }
        else {
          local_2ec = 2;
        }
        local_388 = local_388 + local_2ec;
        goto LAB_143b8357c;
      }
      if (local_360 != 1) {
        *param_5 = 0x10013;
        FUN_143b84e00(param_2,local_388,param_4);
        Audio::FAudioCaptureSynth::IsStreamOpen(local_218);
        FUN_143a8dc60(local_248);
        FUN_143a8dc60(local_270);
        return;
      }
      local_360 = 0;
      local_328 = local_388;
      goto LAB_143b8357c;
    }
  } while ((local_360 < 3) || (4 < local_360));
  if (local_37c == 0x27) {
    local_388 = local_388 + 1;
    iVar5 = FUN_143a904f0(param_2);
    if ((iVar5 <= local_388) || (sVar2 = FUN_143a8e4f0(param_2,local_388), sVar2 != 0x27)) {
      local_360 = local_360 + -2;
      goto LAB_143b8357c;
    }
    FUN_143acc590(local_358,0x27);
  }
  FUN_143a8e0c0(local_358,local_37c);
  if (local_37c < 0x10000) {
    local_314 = 1;
  }
  else {
    local_314 = 2;
  }
  local_388 = local_388 + local_314;
  goto LAB_143b8357c;
LAB_143b84529:
  if (local_34c == 0) {
    local_34c = FUN_143a904f0(param_2);
  }
  if (local_330 == 0) {
    local_330 = FUN_143a904f0(param_2);
  }
  if ((((local_370 == 0) && (local_36c == 0)) && (0 < local_378)) && (-1 < local_380)) {
    local_338 = local_380;
    if (local_380 == 0) {
      local_338 = 1;
    }
    local_35c = local_378 - local_338;
    local_378 = local_338 + -1;
    local_370 = 1;
  }
  if (((((local_380 < 0) && (0 < local_35c)) && (local_36c == 0)) ||
      ((-1 < local_380 &&
       (((0 < local_36c || (local_380 < local_378)) || (local_378 + local_370 < local_380)))))) ||
     (((local_384 == '\0' || (local_382 == '\0')) ||
      (((0 < local_36c && (0 < local_370)) || (2 < local_360)))))) {
    *param_5 = 0x10107;
    FUN_143b84e00(param_2,local_388,param_4);
    Audio::FAudioCaptureSynth::IsStreamOpen(local_218);
    FUN_143a8dc60(local_248);
    FUN_143a8dc60(local_270);
    return;
  }
  if (-1 < local_374) {
    if (local_374 == local_2e0) {
      local_374 = 0;
    }
    else if (local_374 + 2 == local_328) {
      local_374 = 1;
    }
    else if (local_374 == local_34c) {
      local_374 = 2;
    }
    else {
      if (local_374 + 2 != local_330) {
        *param_5 = 0x10108;
        FUN_143b84e00(param_2,local_388,param_4);
        Audio::FAudioCaptureSynth::IsStreamOpen(local_218);
        FUN_143a8dc60(local_248);
        FUN_143a8dc60(local_270);
        return;
      }
      local_374 = 3;
    }
  }
  if (local_344 == 0) {
    *(undefined1 *)((longlong)param_3 + 0xcd) = 0;
    FUN_143a8dcd0(param_3 + 0x48,local_270);
    FUN_143a8dcd0(param_3 + 0x52,local_248);
    *(undefined1 *)(param_3 + 0x33) = 1;
    FUN_143a90910(param_3 + 0x34);
    FUN_143a90910(param_3 + 0x3e);
    local_363 = -1 < local_383;
    *(undefined1 *)(param_3 + 7) = local_363;
    if ((char)param_3[7] != '\0') {
      param_3[8] = (int)local_383;
    }
    *(undefined1 *)(param_3 + 9) = local_368;
    local_31c = local_378 + local_370 + local_35c;
    local_2f4 = local_31c;
    if (-1 < local_380) {
      local_2f4 = local_380;
    }
    local_2f0 = local_2f4;
    local_365 = 0 < local_36c;
    *(undefined1 *)(param_3 + 4) = local_365;
    if ((bool)local_365) {
      param_3[5] = local_36c;
      param_3[6] = local_36c + local_35c;
    }
    else {
      local_2dc = local_2f4 - local_378;
      *param_3 = local_2dc;
      if ((char)param_3[7] == '\0') {
        local_2fc = DAT_146832ae4;
      }
      else {
        local_2fc = local_378 + *param_3;
      }
      param_3[1] = local_2fc;
      if (local_380 < 0) {
        local_310 = 0;
      }
      else {
        local_310 = local_31c - local_380;
      }
      param_3[3] = local_310;
      if (local_380 < 0) {
        local_308 = 0;
      }
      else {
        local_308 = (local_378 + local_370) - local_380;
      }
      param_3[2] = local_308;
    }
    local_367 = '\0' < local_384;
    *(undefined1 *)(param_3 + 0xb) = local_367;
    if (local_384 < '\x01') {
      local_300 = 0;
    }
    else {
      local_300 = (int)local_384;
    }
    param_3[0xc] = local_300;
    if ((local_382 < '\x01') || (local_382 == local_384)) {
      local_2f8 = 0;
    }
    else {
      local_2f8 = (int)local_382;
    }
    param_3[0xd] = local_2f8;
    param_3[0xe] = local_350;
    if ((local_380 == 0) || (local_380 == local_31c)) {
      local_362 = 1;
    }
    else {
      local_362 = 0;
    }
    *(undefined1 *)(param_3 + 0xf) = local_362;
    if (local_374 < 0) {
      param_3[0x10] = 0;
    }
    else {
      param_3[0x5c] = local_374;
      param_3[0x10] = local_34c - local_328;
      param_3[0x32] = local_32c;
    }
    local_364 = local_365;
    if (local_348 < 0) {
      *(undefined1 *)(param_3 + 0x11) = 0;
    }
    else {
      *(undefined1 *)(param_3 + 0x11) = 1;
      FUN_143b767e0(local_218,local_2f4 - local_348);
      FUN_143b74f60(param_3 + 0x12,local_218);
    }
  }
  else {
    *(undefined1 *)(param_3 + 0x33) = 0;
    FUN_143a8dcd0(param_3 + 0x34,local_270);
    FUN_143a8dcd0(param_3 + 0x3e,local_248);
  }
  Audio::FAudioCaptureSynth::IsStreamOpen(local_218);
  FUN_143a8dc60(local_248);
  FUN_143a8dc60(local_270);
  local_344 = local_344 + 1;
  goto LAB_143b8349d;
}



// FUNCTION 143b84e00 FUN_143b84e00 body=314 status=ok
// SIG undefined FUN_143b84e00(void)

void FUN_143b84e00(undefined8 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int local_20;
  int local_1c;
  
  param_3[1] = param_2;
  *param_3 = 0;
  if (param_2 < 0x10) {
    local_20 = 0;
  }
  else {
    local_20 = param_2 + -0xf;
  }
  FUN_143b06f40(param_1,local_20,param_2 - local_20,param_3 + 2,0);
  *(undefined2 *)((longlong)param_3 + (longlong)(param_2 - local_20) * 2 + 8) = 0;
  iVar1 = param_2 + 1;
  iVar2 = FUN_143a904f0(param_1);
  if (iVar2 < param_2 + 0x10) {
    local_1c = FUN_143a904f0(param_1);
  }
  else {
    local_1c = param_2 + 0xf;
  }
  FUN_143b06f40(param_1,iVar1,local_1c - iVar1,param_3 + 10,0);
  *(undefined2 *)((longlong)param_3 + (longlong)(local_1c - iVar1) * 2 + 0x28) = 0;
  return;
}



// FUNCTION 143b84f40 FUN_143b84f40 body=422 status=ok
// SIG undefined FUN_143b84f40(void)

void FUN_143b84f40(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_143b41cc0(param_2,4);
  uVar2 = FUN_143a8e3e0(uVar1,0);
  *param_1 = uVar2;
  uVar1 = FUN_143b41cc0(param_2,0x10);
  uVar2 = FUN_143a8e3e0(uVar1,0);
  param_1[1] = uVar2;
  uVar1 = FUN_143b41cc0(param_2,1);
  FUN_143a8dcd0(param_1 + 2,uVar1);
  uVar1 = FUN_143b41cc0(param_2,0);
  FUN_143a8dcd0(param_1 + 0xc,uVar1);
  uVar1 = FUN_143b41cc0(param_2,3);
  FUN_143a8dcd0(param_1 + 0x16,uVar1);
  uVar1 = FUN_143b41cc0(param_2,0xc);
  FUN_143a8dcd0(param_1 + 0x20,uVar1);
  uVar1 = FUN_143b41cc0(param_2,5);
  FUN_143a8dcd0(param_1 + 0x2a,uVar1);
  uVar1 = FUN_143b41cc0(param_2,2);
  FUN_143a8dcd0(param_1 + 0x34,uVar1);
  uVar1 = FUN_143b41cc0(param_2,0xb);
  FUN_143a8dcd0(param_1 + 0x3e,uVar1);
  uVar1 = FUN_143b41cc0(param_2,7);
  FUN_143a8dcd0(param_1 + 0x48,uVar1);
  uVar1 = FUN_143b41cc0(param_2,6);
  FUN_143a8dcd0(param_1 + 0x52,uVar1);
  uVar1 = FUN_143b41cc0(param_2,0xd);
  FUN_143a8dcd0(param_1 + 0x5c,uVar1);
  return;
}



// FUNCTION 143b850f0 FUN_143b850f0 body=80 status=ok
// SIG undefined FUN_143b850f0(void)

undefined8 *
FUN_143b850f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FID_conflict_length_error(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::SimpleTimeZone::vftable;
  FUN_143b85390(param_1,param_2);
  return param_1;
}



// FUNCTION 143b85140 FUN_143b85140 body=250 status=ok
// SIG undefined FUN_143b85140(void)

undefined8 *
FUN_143b85140(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143bee090(param_1,param_3,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::SimpleTimeZone::vftable;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((longlong)param_1 + 0x31) = 0;
  *(undefined1 *)((longlong)param_1 + 0x32) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x41) = 0;
  *(undefined1 *)((longlong)param_1 + 0x42) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = param_2;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 1;
  *(undefined4 *)(param_1 + 0xb) = 1;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 3600000;
  FUN_143b85630(param_1);
  return param_1;
}



// FUNCTION 143b85240 FUN_143b85240 body=259 status=ok
// SIG undefined FUN_143b85240(void)

undefined8 *
FUN_143b85240(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
             undefined1 param_9,undefined1 param_10,undefined1 param_11,undefined4 param_12,
             undefined4 param_13,undefined4 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_143bee090(param_1,param_3);
  *param_1 = icu_53::SimpleTimeZone::vftable;
  FUN_143b85630(param_1);
  FUN_143b859e0(param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                param_12,param_13,param_14,param_15,uVar1);
  return param_1;
}



// FUNCTION 143b85350 FUN_143b85350 body=60 status=ok
// SIG undefined FUN_143b85350(void)

void FUN_143b85350(undefined8 *param_1)

{
  *param_1 = icu_53::SimpleTimeZone::vftable;
  FUN_143b85fb0(param_1);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143b85390 FUN_143b85390 body=328 status=ok
// SIG undefined FUN_143b85390(void)

longlong FUN_143b85390(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_143b4a270(param_1,param_2);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
    *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x31);
    *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_2 + 0x32);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
    *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)(param_2 + 0x41);
    *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)(param_2 + 0x42);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
    *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
    FUN_143b85630(param_1);
  }
  return param_1;
}



// FUNCTION 143b854e0 FUN_143b854e0 body=146 status=ok
// SIG undefined FUN_143b854e0(void)

undefined1 FUN_143b854e0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18;
  
  if (param_1 == param_2) {
LAB_143b85563:
    local_18 = 1;
  }
  else {
    uVar2 = _guard_xfg_dispatch_icall_nop(param_2);
    uVar3 = _guard_xfg_dispatch_icall_nop(param_1);
    cVar1 = FUN_143ab1e10(uVar3,uVar2);
    if (cVar1 != '\0') {
      cVar1 = FUN_143b4a2b0(param_1,param_2);
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*param_1 + 0x50))(param_1,param_2);
        if (cVar1 != '\0') goto LAB_143b85563;
      }
    }
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143b85580 FUN_143b85580 body=54 status=ok
// SIG undefined FUN_143b85580(void)

undefined8 FUN_143b85580(undefined8 param_1,uint param_2)

{
  FUN_143b85350(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b855c0 FUN_143b855c0 body=102 status=ok
// SIG undefined FUN_143b855c0(void)

void FUN_143b855c0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    FUN_143ab2410(&DAT_146bc81b8);
    if (*(char *)(param_1 + 0x60) == '\0') {
      FUN_143b873e0(param_1,param_2);
    }
    FUN_143ab2470(&DAT_146bc81b8);
  }
  return;
}



// FUNCTION 143b85630 FUN_143b85630 body=70 status=ok
// SIG undefined FUN_143b85630(void)

void FUN_143b85630(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 143b85680 CreateInternalContext body=92 status=ok
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
  
  lVar1 = FUN_143a8d310(0x88);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b850f0(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143b856e0 FUN_143b856e0 body=745 status=ok
// SIG undefined FUN_143b856e0(void)

undefined8
FUN_143b856e0(char param_1,char param_2,char param_3,char param_4,char param_5,int param_6,
             int param_7,int param_8,char param_9,char param_10,char param_11,int param_12)

{
  undefined8 uVar1;
  undefined1 local_res8;
  undefined1 local_res20;
  undefined4 local_28;
  
  param_6 = param_6 + param_7;
  local_res8 = param_1;
  local_res20 = param_4;
  while (86399999 < param_6) {
    param_6 = param_6 + -86400000;
    local_res20 = local_res20 + '\x01';
    param_5 = (char)((longlong)(int)param_5 % 7) + '\x01';
    if (param_2 < local_res20) {
      local_res20 = '\x01';
      local_res8 = local_res8 + '\x01';
    }
  }
  while (param_6 < 0) {
    param_6 = param_6 + 86400000;
    local_res20 = local_res20 + -1;
    param_5 = (char)((longlong)(param_5 + 5) % 7) + '\x01';
    if (local_res20 < '\x01') {
      local_res8 = local_res8 + -1;
      local_res20 = param_3;
    }
  }
  if (local_res8 < param_9) {
    uVar1 = 0xffffffff;
  }
  else if (param_9 < local_res8) {
    uVar1 = 1;
  }
  else {
    local_28 = 0;
    if (param_2 < param_11) {
      param_11 = param_2;
    }
    if (param_8 == 1) {
      local_28 = (int)param_11;
    }
    else if (param_8 == 2) {
      if (param_11 < '\x01') {
        local_28 = ((int)param_2 + (param_11 + 1) * 7) -
                   (((((int)param_5 + (int)param_2) - (int)local_res20) + 7) - (int)param_10) % 7;
      }
      else {
        local_28 = (param_11 + -1) * 7 + 1 +
                   ((param_10 + 7) - (((int)param_5 - (int)local_res20) + 1)) % 7;
      }
    }
    else if (param_8 == 3) {
      local_28 = (int)param_11 +
                 ((((param_10 + 0x31) - (int)param_11) - (int)param_5) + (int)local_res20) % 7;
    }
    else if (param_8 == 4) {
      local_28 = (int)param_11 -
                 (((0x31 - param_10) + (int)param_11 + (int)param_5) - (int)local_res20) % 7;
    }
    if (local_res20 < local_28) {
      uVar1 = 0xffffffff;
    }
    else if (local_28 < local_res20) {
      uVar1 = 1;
    }
    else if (param_6 < param_12) {
      uVar1 = 0xffffffff;
    }
    else if (param_12 < param_6) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



// FUNCTION 143b859e0 FUN_143b859e0 body=265 status=ok
// SIG undefined FUN_143b859e0(void)

void FUN_143b859e0(longlong param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8,
                  undefined1 param_9,undefined1 param_10,undefined4 param_11,undefined4 param_12,
                  int param_13,undefined4 *param_14)

{
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  *(undefined1 *)(param_1 + 0x30) = param_3;
  *(undefined1 *)(param_1 + 0x31) = param_4;
  *(undefined1 *)(param_1 + 0x32) = param_5;
  *(undefined4 *)(param_1 + 0x34) = param_6;
  *(undefined4 *)(param_1 + 0x38) = param_7;
  *(undefined1 *)(param_1 + 0x40) = param_8;
  *(undefined1 *)(param_1 + 0x41) = param_9;
  *(undefined1 *)(param_1 + 0x42) = param_10;
  *(undefined4 *)(param_1 + 0x44) = param_11;
  *(undefined4 *)(param_1 + 0x3c) = param_12;
  *(int *)(param_1 + 0x5c) = param_13;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 1;
  *(undefined4 *)(param_1 + 0x58) = 1;
  FUN_143b85d50(param_1,param_14);
  if (param_13 < 1) {
    *param_14 = 1;
  }
  return;
}



// FUNCTION 143b85af0 FUN_143b85af0 body=51 status=ok
// SIG undefined FUN_143b85af0(void)

undefined4 FUN_143b85af0(longlong param_1)

{
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    local_18 = 0;
  }
  else {
    local_18 = 2;
  }
  return local_18;
}



// FUNCTION 143b85b30 FUN_143b85b30 body=533 status=ok
// SIG undefined FUN_143b85b30(void)

void FUN_143b85b30(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 local_18;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    if ((*(char *)(param_1 + 0x31) == '\0') || (*(char *)(param_1 + 0x41) == '\0')) {
      local_18 = 0;
    }
    else {
      local_18 = 1;
    }
    *(undefined1 *)(param_1 + 0x50) = local_18;
    if ((*(char *)(param_1 + 0x50) != '\0') && (*(int *)(param_1 + 0x5c) == 0)) {
      *(undefined4 *)(param_1 + 0x5c) = 3600000;
    }
    if (*(char *)(param_1 + 0x41) != '\0') {
      if ((*(char *)(param_1 + 0x40) < '\0') || ('\v' < *(char *)(param_1 + 0x40))) {
        *param_2 = 1;
      }
      else if ((((*(int *)(param_1 + 0x44) < 0) || (86400000 < *(int *)(param_1 + 0x44))) ||
               (*(int *)(param_1 + 0x3c) < 0)) || (2 < *(int *)(param_1 + 0x3c))) {
        *param_2 = 1;
      }
      else {
        if (*(char *)(param_1 + 0x42) == '\0') {
          *(undefined4 *)(param_1 + 0x58) = 1;
        }
        else {
          if (*(char *)(param_1 + 0x42) < '\x01') {
            *(char *)(param_1 + 0x42) = -*(char *)(param_1 + 0x42);
            if (*(char *)(param_1 + 0x41) < '\x01') {
              *(char *)(param_1 + 0x41) = -*(char *)(param_1 + 0x41);
              *(undefined4 *)(param_1 + 0x58) = 4;
            }
            else {
              *(undefined4 *)(param_1 + 0x58) = 3;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x58) = 2;
          }
          if ('\a' < *(char *)(param_1 + 0x42)) {
            *param_2 = 1;
            return;
          }
        }
        if (*(int *)(param_1 + 0x58) == 2) {
          if ((*(char *)(param_1 + 0x41) < -5) || ('\x05' < *(char *)(param_1 + 0x41))) {
            *param_2 = 1;
          }
        }
        else if ((*(char *)(param_1 + 0x41) < '\x01') ||
                ((char)(&DAT_145d13db0)[*(char *)(param_1 + 0x40)] < *(char *)(param_1 + 0x41))) {
          *param_2 = 1;
        }
      }
    }
  }
  return;
}



// FUNCTION 143b85d50 FUN_143b85d50 body=49 status=ok
// SIG undefined FUN_143b85d50(void)

void FUN_143b85d50(undefined8 param_1,undefined8 param_2)

{
  FUN_143b85d90(param_1,param_2);
  FUN_143b85b30(param_1,param_2);
  return;
}



// FUNCTION 143b85d90 FUN_143b85d90 body=533 status=ok
// SIG undefined FUN_143b85d90(void)

void FUN_143b85d90(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 local_18;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    if ((*(char *)(param_1 + 0x31) == '\0') || (*(char *)(param_1 + 0x41) == '\0')) {
      local_18 = 0;
    }
    else {
      local_18 = 1;
    }
    *(undefined1 *)(param_1 + 0x50) = local_18;
    if ((*(char *)(param_1 + 0x50) != '\0') && (*(int *)(param_1 + 0x5c) == 0)) {
      *(undefined4 *)(param_1 + 0x5c) = 3600000;
    }
    if (*(char *)(param_1 + 0x31) != '\0') {
      if ((*(char *)(param_1 + 0x30) < '\0') || ('\v' < *(char *)(param_1 + 0x30))) {
        *param_2 = 1;
      }
      else if ((((*(int *)(param_1 + 0x34) < 0) || (86400000 < *(int *)(param_1 + 0x34))) ||
               (*(int *)(param_1 + 0x38) < 0)) || (2 < *(int *)(param_1 + 0x38))) {
        *param_2 = 1;
      }
      else {
        if (*(char *)(param_1 + 0x32) == '\0') {
          *(undefined4 *)(param_1 + 0x54) = 1;
        }
        else {
          if (*(char *)(param_1 + 0x32) < '\x01') {
            *(char *)(param_1 + 0x32) = -*(char *)(param_1 + 0x32);
            if (*(char *)(param_1 + 0x31) < '\x01') {
              *(char *)(param_1 + 0x31) = -*(char *)(param_1 + 0x31);
              *(undefined4 *)(param_1 + 0x54) = 4;
            }
            else {
              *(undefined4 *)(param_1 + 0x54) = 3;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x54) = 2;
          }
          if ('\a' < *(char *)(param_1 + 0x32)) {
            *param_2 = 1;
            return;
          }
        }
        if (*(int *)(param_1 + 0x54) == 2) {
          if ((*(char *)(param_1 + 0x31) < -5) || ('\x05' < *(char *)(param_1 + 0x31))) {
            *param_2 = 1;
          }
        }
        else if ((*(char *)(param_1 + 0x31) < '\x01') ||
                ((char)(&DAT_145d13db0)[*(char *)(param_1 + 0x30)] < *(char *)(param_1 + 0x31))) {
          *param_2 = 1;
        }
      }
    }
  }
  return;
}



// FUNCTION 143b85fb0 FUN_143b85fb0 body=383 status=ok
// SIG undefined FUN_143b85fb0(void)

void FUN_143b85fb0(longlong param_1)

{
  undefined8 *puVar1;
  
  if ((*(longlong *)(param_1 + 0x68) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x68), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((*(longlong *)(param_1 + 0x70) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x70), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x78), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((*(longlong *)(param_1 + 0x80) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x80), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143b85630(param_1);
  return;
}



// FUNCTION 143b86130 FUN_143b86130 body=14 status=ok
// SIG undefined FUN_143b86130(void)

undefined4 FUN_143b86130(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}



// FUNCTION 143b86140 FUN_143b86140 body=19 status=ok
// SIG undefined FUN_143b86140(void)

void FUN_143b86140(void)

{
  FUN_143b86fc0();
  return;
}



// FUNCTION 143b86160 FUN_143b86160 body=46 status=ok
// SIG undefined FUN_143b86160(void)

undefined8 FUN_143b86160(longlong param_1,undefined8 param_2)

{
  FUN_143a8dcd0(param_2,param_1 + 8);
  return param_2;
}



// FUNCTION 143b86190 FUN_143b86190 body=686 status=ok
// SIG undefined FUN_143b86190(void)

undefined8 FUN_143b86190(longlong param_1,double param_2,char param_3,undefined8 param_4)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_44;
  undefined4 local_40;
  double local_38;
  double local_30;
  undefined4 local_28;
  double local_20;
  longlong local_18;
  longlong local_10;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    uVar4 = 0;
  }
  else {
    local_44 = 0;
    FUN_143b855c0(param_1,&local_44);
    cVar1 = FUN_143a8b0e0(local_44);
    if (cVar1 == '\0') {
      local_20 = (double)FUN_143b381e0(*(undefined8 *)(param_1 + 0x70));
      if ((param_2 < local_20) || ((param_3 != '\0' && (param_2 == local_20)))) {
        FUN_143b98a80(param_4,*(undefined8 *)(param_1 + 0x70));
      }
      local_28 = FAnalyticsSpan::GetStackDepth(*(undefined8 *)(param_1 + 0x80));
      uVar3 = FUN_143ab3100(*(undefined8 *)(param_1 + 0x80));
      local_18 = **(longlong **)(param_1 + 0x78);
      cVar1 = (**(code **)(local_18 + 0x40))
                        (*(undefined8 *)(param_1 + 0x78),param_2,uVar3,local_28,param_3,&local_30);
      local_40 = FAnalyticsSpan::GetStackDepth(*(undefined8 *)(param_1 + 0x78));
      uVar3 = FUN_143ab3100(*(undefined8 *)(param_1 + 0x78));
      local_10 = **(longlong **)(param_1 + 0x80);
      cVar2 = (**(code **)(local_10 + 0x40))
                        (*(undefined8 *)(param_1 + 0x80),param_2,uVar3,local_40,param_3,&local_38);
      if ((cVar1 == '\0') || ((cVar2 != '\0' && (local_38 <= local_30)))) {
        if ((cVar2 == '\0') || ((cVar1 != '\0' && (local_30 <= local_38)))) {
          uVar4 = 0;
        }
        else {
          FUN_143b98cd0(param_4,local_38);
          FUN_143b98c50(param_4,*(undefined8 *)(param_1 + 0x78));
          FUN_143b98cf0(param_4,*(undefined8 *)(param_1 + 0x80));
          uVar4 = 1;
        }
      }
      else {
        FUN_143b98cd0(param_4,local_30);
        FUN_143b98c50(param_4,*(undefined8 *)(param_1 + 0x80));
        FUN_143b98cf0(param_4,*(undefined8 *)(param_1 + 0x78));
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}



// FUNCTION 143b86440 FUN_143b86440 body=186 status=ok
// SIG undefined FUN_143b86440(void)

undefined8
FUN_143b86440(longlong *param_1,undefined1 param_2,undefined4 param_3,int param_4,undefined4 param_5
             ,undefined1 param_6,undefined4 param_7,undefined4 *param_8)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_4 < 0) || (0xb < param_4)) {
    *param_8 = 1;
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_143b4c990(param_3,param_4);
    uVar2 = (**(code **)(*param_1 + 0x20))
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,(int)cVar1,param_8);
  }
  return uVar2;
}



// FUNCTION 143b86500 FUN_143b86500 body=229 status=ok
// SIG undefined FUN_143b86500(void)

undefined8
FUN_143b86500(longlong *param_1,undefined1 param_2,undefined4 param_3,int param_4,undefined4 param_5
             ,undefined1 param_6,undefined4 param_7,undefined8 param_8,undefined4 *param_9)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  
  if ((param_4 < 0) || (0xb < param_4)) {
    *param_9 = 1;
    uVar3 = 0xffffffff;
  }
  else {
    cVar1 = FUN_143b884e0(param_3,param_4);
    cVar2 = FUN_143b4c990(param_3,param_4);
    uVar3 = (**(code **)(*param_1 + 0xa0))
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,(int)cVar2,(int)cVar1
                       ,param_9);
  }
  return uVar3;
}



// FUNCTION 143b865f0 FUN_143b865f0 body=919 status=ok
// SIG undefined FUN_143b865f0(void)

int FUN_143b865f0(longlong param_1,char param_2,int param_3,int param_4,int param_5,byte param_6,
                 int param_7,int param_8,int param_9,undefined4 *param_10)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 local_res20;
  int local_20;
  int local_14;
  int local_10;
  int local_c;
  
  cVar2 = FUN_143a8b0e0(*param_10);
  if (cVar2 == '\0') {
    if ((((((param_2 == '\x01') || (param_2 == '\0')) && (-1 < param_4)) &&
         (((param_4 < 0xc && (0 < param_5)) &&
          ((param_5 <= param_8 && ((param_6 != 0 && (param_6 < 8)))))))) && (-1 < param_7)) &&
       ((((param_7 < 86400000 && (0x1b < param_8)) && (param_8 < 0x20)) &&
        ((0x1b < param_9 && (param_9 < 0x20)))))) {
      iVar4 = *(int *)(param_1 + 0x4c);
      if (((*(char *)(param_1 + 0x50) != '\0') && (*(int *)(param_1 + 0x48) <= param_3)) &&
         (param_2 == '\x01')) {
        bVar1 = *(char *)(param_1 + 0x40) < *(char *)(param_1 + 0x30);
        if (*(int *)(param_1 + 0x38) == 2) {
          local_10 = -*(int *)(param_1 + 0x4c);
        }
        else {
          local_10 = 0;
        }
        local_res20 = (undefined1)param_4;
        iVar3 = FUN_143b856e0(local_res20,(undefined1)param_8,(undefined1)param_9,
                              (undefined1)param_5,param_6,param_7,local_10,
                              *(undefined4 *)(param_1 + 0x54),*(undefined1 *)(param_1 + 0x30),
                              *(undefined1 *)(param_1 + 0x32),*(undefined1 *)(param_1 + 0x31),
                              *(undefined4 *)(param_1 + 0x34));
        local_20 = 0;
        if (bVar1 != -1 < iVar3) {
          if (*(int *)(param_1 + 0x3c) == 0) {
            local_c = *(int *)(param_1 + 0x5c);
          }
          else {
            if (*(int *)(param_1 + 0x3c) == 2) {
              local_14 = -*(int *)(param_1 + 0x4c);
            }
            else {
              local_14 = 0;
            }
            local_c = local_14;
          }
          local_20 = FUN_143b856e0(local_res20,(undefined1)param_8,(undefined1)param_9,
                                   (undefined1)param_5,param_6,param_7,local_c,
                                   *(undefined4 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x40),
                                   *(undefined1 *)(param_1 + 0x42),*(undefined1 *)(param_1 + 0x41),
                                   *(undefined4 *)(param_1 + 0x44));
        }
        if ((((!bVar1) && (-1 < iVar3)) && (local_20 < 0)) ||
           ((bVar1 && ((-1 < iVar3 || (local_20 < 0)))))) {
          iVar4 = iVar4 + *(int *)(param_1 + 0x5c);
        }
      }
    }
    else {
      *param_10 = 1;
      iVar4 = -1;
    }
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}



// FUNCTION 143b86990 FUN_143b86990 body=77 status=ok
// SIG undefined FUN_143b86990(void)

void FUN_143b86990(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_143b4bb90(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 143b869e0 FUN_143b869e0 body=805 status=ok
// SIG undefined FUN_143b869e0(void)

void FUN_143b869e0(longlong *param_1,double param_2,uint param_3,uint param_4,int *param_5,
                  int *param_6,undefined4 *param_7)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  double local_res10;
  undefined1 *puVar4;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  double local_20;
  longlong local_18;
  longlong local_10;
  undefined4 uVar5;
  
  cVar2 = FUN_143a8b0e0(*param_7);
  if (cVar2 == '\0') {
    iVar3 = (**(code **)(*param_1 + 0x38))(param_1);
    *param_5 = iVar3;
    local_20 = (double)FUN_143a917b0(param_2 / 86400000.0);
    local_28 = (int)(param_2 - local_20 * 86400000.0);
    puVar4 = local_2c;
    FUN_143b4af00(local_20,&local_30,&local_34,&local_24,puVar4);
    uVar5 = (undefined4)((ulonglong)puVar4 >> 0x20);
    cVar2 = FUN_143b4c990(local_30,local_34);
    local_18 = *param_1;
    iVar3 = (**(code **)(local_18 + 0x20))
                      (param_1,1,local_30,local_34,CONCAT44(uVar5,local_24),local_2c[0],local_28,
                       (int)cVar2,param_7);
    *param_6 = iVar3 - *param_5;
    cVar2 = FUN_143a8b0e0(*param_7);
    if (cVar2 == '\0') {
      bVar1 = false;
      local_res10 = param_2;
      if (*param_6 < 1) {
        if (((param_4 & 3) == 3) || (((param_4 & 3) != 1 && ((param_4 & 0xc) == 4)))) {
          iVar3 = (**(code **)(*param_1 + 0x60))(param_1);
          local_res10 = param_2 - (double)iVar3;
          bVar1 = true;
        }
      }
      else if (((param_3 & 3) == 1) || (((param_3 & 3) != 3 && ((param_3 & 0xc) != 0xc)))) {
        iVar3 = (**(code **)(*param_1 + 0x60))(param_1);
        local_res10 = param_2 - (double)iVar3;
        bVar1 = true;
      }
      if (bVar1) {
        local_20 = (double)FUN_143a917b0(local_res10 / 86400000.0);
        local_28 = (int)(local_res10 - local_20 * 86400000.0);
        puVar4 = local_2c;
        FUN_143b4af00(local_20,&local_30,&local_34,&local_24,puVar4);
        uVar5 = (undefined4)((ulonglong)puVar4 >> 0x20);
        cVar2 = FUN_143b4c990(local_30,local_34);
        local_10 = *param_1;
        iVar3 = (**(code **)(local_10 + 0x20))
                          (param_1,1,local_30,local_34,CONCAT44(uVar5,local_24),local_2c[0],local_28
                           ,(int)cVar2,param_7);
        *param_6 = iVar3 - *param_5;
      }
    }
  }
  return;
}



// FUNCTION 143b86d10 FUN_143b86d10 body=668 status=ok
// SIG undefined FUN_143b86d10(void)

undefined8 FUN_143b86d10(longlong param_1,double param_2,char param_3,undefined8 param_4)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  double extraout_XMM0_Qa;
  undefined4 local_44;
  undefined4 local_40;
  double local_38;
  double local_30;
  undefined4 local_28;
  double local_20;
  longlong local_18;
  longlong local_10;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    uVar4 = 0;
  }
  else {
    local_44 = 0;
    FUN_143b855c0(param_1,&local_44);
    cVar1 = FUN_143a8b0e0(local_44);
    if (cVar1 == '\0') {
      FUN_143b381e0(*(undefined8 *)(param_1 + 0x70));
      if ((param_2 < extraout_XMM0_Qa) || ((param_3 == '\0' && (param_2 == extraout_XMM0_Qa)))) {
        uVar4 = 0;
      }
      else {
        local_20 = extraout_XMM0_Qa;
        local_28 = FAnalyticsSpan::GetStackDepth(*(undefined8 *)(param_1 + 0x80));
        uVar3 = FUN_143ab3100(*(undefined8 *)(param_1 + 0x80));
        local_18 = **(longlong **)(param_1 + 0x78);
        cVar1 = (**(code **)(local_18 + 0x48))
                          (*(undefined8 *)(param_1 + 0x78),param_2,uVar3,local_28,param_3,&local_30)
        ;
        local_40 = FAnalyticsSpan::GetStackDepth(*(undefined8 *)(param_1 + 0x78));
        uVar3 = FUN_143ab3100(*(undefined8 *)(param_1 + 0x78));
        local_10 = **(longlong **)(param_1 + 0x80);
        cVar2 = (**(code **)(local_10 + 0x48))
                          (*(undefined8 *)(param_1 + 0x80),param_2,uVar3,local_40,param_3,&local_38)
        ;
        if ((cVar1 == '\0') || ((cVar2 != '\0' && (local_30 <= local_38)))) {
          if ((cVar2 == '\0') || ((cVar1 != '\0' && (local_38 <= local_30)))) {
            uVar4 = 0;
          }
          else {
            FUN_143b98cd0(param_4,local_38);
            FUN_143b98c50(param_4,*(undefined8 *)(param_1 + 0x78));
            FUN_143b98cf0(param_4,*(undefined8 *)(param_1 + 0x80));
            uVar4 = 1;
          }
        }
        else {
          FUN_143b98cd0(param_4,local_30);
          FUN_143b98c50(param_4,*(undefined8 *)(param_1 + 0x80));
          FUN_143b98cf0(param_4,*(undefined8 *)(param_1 + 0x78));
          uVar4 = 1;
        }
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}



// FUNCTION 143b86fb0 FUN_143b86fb0 body=14 status=ok
// SIG undefined FUN_143b86fb0(void)

undefined4 FUN_143b86fb0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



// FUNCTION 143b86fc0 FUN_143b86fc0 body=8 status=ok
// SIG undefined FUN_143b86fc0(void)

undefined * FUN_143b86fc0(void)

{
  return &DAT_146bc81e8;
}



// FUNCTION 143b86fd0 FUN_143b86fd0 body=235 status=ok
// SIG undefined FUN_143b86fd0(void)

void FUN_143b86fd0(longlong param_1,undefined8 *param_2,undefined8 *param_3,uint *param_4,
                  undefined4 *param_5)

{
  uint uVar1;
  char cVar2;
  uint local_18;
  
  cVar2 = FUN_143a8b0e0(*param_5);
  if (cVar2 == '\0') {
    FUN_143b855c0(param_1,param_5);
    cVar2 = FUN_143a8b0e0(*param_5);
    if (cVar2 == '\0') {
      *param_2 = *(undefined8 *)(param_1 + 0x68);
      local_18 = 0;
      if (*(longlong *)(param_1 + 0x78) != 0) {
        uVar1 = *param_4;
        if (0 < (int)uVar1) {
          *param_3 = *(undefined8 *)(param_1 + 0x78);
        }
        local_18 = (uint)(0 < (int)uVar1);
        if ((int)local_18 < (int)*param_4) {
          param_3[(int)local_18] = *(undefined8 *)(param_1 + 0x80);
          local_18 = local_18 + 1;
        }
      }
      *param_4 = local_18;
    }
  }
  return;
}



// FUNCTION 143b870c0 FUN_143b870c0 body=489 status=ok
// SIG undefined FUN_143b870c0(void)

undefined1 FUN_143b870c0(longlong param_1,longlong param_2)

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
      if (((*(int *)(param_1 + 0x4c) == *(int *)(param_2 + 0x4c)) &&
          (*(char *)(param_1 + 0x50) == *(char *)(param_2 + 0x50))) &&
         ((*(char *)(param_1 + 0x50) == '\0' ||
          (((((*(int *)(param_1 + 0x5c) == *(int *)(param_2 + 0x5c) &&
              (*(int *)(param_1 + 0x54) == *(int *)(param_2 + 0x54))) &&
             (*(char *)(param_1 + 0x30) == *(char *)(param_2 + 0x30))) &&
            ((((*(char *)(param_1 + 0x31) == *(char *)(param_2 + 0x31) &&
               (*(char *)(param_1 + 0x32) == *(char *)(param_2 + 0x32))) &&
              ((*(int *)(param_1 + 0x34) == *(int *)(param_2 + 0x34) &&
               ((*(int *)(param_1 + 0x38) == *(int *)(param_2 + 0x38) &&
                (*(int *)(param_1 + 0x58) == *(int *)(param_2 + 0x58))))))) &&
             (*(char *)(param_1 + 0x40) == *(char *)(param_2 + 0x40))))) &&
           ((((*(char *)(param_1 + 0x41) == *(char *)(param_2 + 0x41) &&
              (*(char *)(param_1 + 0x42) == *(char *)(param_2 + 0x42))) &&
             (*(int *)(param_1 + 0x44) == *(int *)(param_2 + 0x44))) &&
            ((*(int *)(param_1 + 0x3c) == *(int *)(param_2 + 0x3c) &&
             (*(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48))))))))))) {
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



// FUNCTION 143b872b0 FUN_143b872b0 body=298 status=ok
// SIG undefined FUN_143b872b0(void)

ulonglong FUN_143b872b0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *local_40;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    lVar4 = FUN_143a8d310(0x290);
    if (lVar4 == 0) {
      local_40 = (longlong *)0x0;
    }
    else {
      local_40 = (longlong *)FUN_143b5c3a0(lVar4,param_1,param_3);
    }
    if (local_40 == (longlong *)0x0) {
      *param_3 = 7;
      uVar3 = (ulonglong)param_3 & 0xffffffffffffff00;
    }
    else {
      FUN_143b55550(local_40,param_2,param_3);
      bVar2 = (**(code **)(*local_40 + 0x58))(local_40,param_3);
      if (local_40 != (longlong *)0x0) {
        (**(code **)*local_40)(local_40,1);
      }
      uVar3 = (ulonglong)bVar2;
    }
  }
  else {
    uVar3 = (ulonglong)(uint3)(cVar1 >> 7) << 8;
  }
  return uVar3;
}



// FUNCTION 143b873e0 FUN_143b873e0 body=4343 status=ok
// SIG undefined FUN_143b873e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b873e0(longlong *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_438 [32];
  ulonglong local_418;
  undefined4 local_410;
  undefined4 local_408;
  uint local_3f8;
  undefined4 local_3f4;
  ulonglong local_3f0;
  int local_3e8;
  int local_3e4;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  longlong local_3b0;
  longlong local_3a8;
  ulonglong local_3a0;
  ulonglong local_398;
  ulonglong local_390;
  longlong local_388;
  ulonglong local_380;
  longlong local_378;
  ulonglong local_370;
  longlong local_368;
  longlong local_360;
  longlong local_358;
  ulonglong local_350;
  double local_348;
  ulonglong local_340;
  longlong local_338;
  ulonglong local_330;
  longlong local_328;
  longlong local_320;
  longlong local_318;
  longlong local_310;
  longlong local_308;
  longlong local_300;
  double local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  longlong local_2b8;
  undefined8 local_2b0;
  longlong local_2a8;
  ulonglong local_2a0;
  undefined8 local_298;
  ulonglong local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  ulonglong local_240;
  undefined8 local_238;
  ulonglong local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  ulonglong local_1d0;
  longlong local_1c8;
  ulonglong local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  undefined1 local_178 [40];
  undefined1 local_150 [40];
  undefined1 local_128 [40];
  undefined1 local_100 [40];
  undefined1 local_d8 [40];
  undefined1 local_b0 [40];
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_180 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_438;
  local_3f8 = 0;
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 != '\0') {
    return;
  }
  if ((char)param_1[0xc] != '\0') {
    return;
  }
  FUN_143b85fb0(param_1);
  FUN_143a8ac30(local_178);
  FUN_143b86160(param_1,local_178);
  if ((char)param_1[10] == '\0') {
    local_2c8 = FUN_143a8d310(0x38);
    if (local_2c8 == 0) {
      local_3b0 = 0;
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x38))(param_1);
      local_3b0 = FUN_143bec820(local_2c8,local_178,uVar2,0);
    }
    local_1d8 = local_3b0;
    param_1[0xd] = local_3b0;
    if (param_1[0xd] == 0) {
      *param_2 = 7;
      FUN_143b85fb0(param_1);
      FUN_143a8dc60(local_178);
      return;
    }
  }
  else {
    if ((int)param_1[7] == 1) {
      local_3d8 = 1;
    }
    else {
      if ((int)param_1[7] == 2) {
        local_3dc = 2;
      }
      else {
        local_3dc = 0;
      }
      local_3d8 = local_3dc;
    }
    local_3f4 = local_3d8;
    local_3e8 = *(int *)((longlong)param_1 + 0x54);
    if (local_3e8 == 1) {
      local_2b8 = FUN_143a8d310(0x28);
      if (local_2b8 == 0) {
        local_3a0 = 0;
      }
      else {
        local_418 = CONCAT44(local_418._4_4_,local_3f4);
        local_3a0 = FUN_143bec470(local_2b8,(int)(char)param_1[6],
                                  (int)*(char *)((longlong)param_1 + 0x31),
                                  *(undefined4 *)((longlong)param_1 + 0x34));
      }
      local_1d0 = local_3a0;
      local_3f0 = local_3a0;
    }
    else if (local_3e8 == 2) {
      local_2f0 = FUN_143a8d310(0x28);
      if (local_2f0 == 0) {
        local_390 = 0;
      }
      else {
        local_410 = local_3f4;
        local_418 = CONCAT44(local_418._4_4_,*(undefined4 *)((longlong)param_1 + 0x34));
        local_390 = FUN_143bec3e0(local_2f0,(int)(char)param_1[6],
                                  (int)*(char *)((longlong)param_1 + 0x31),
                                  (int)*(char *)((longlong)param_1 + 0x32));
      }
      local_2a0 = local_390;
      local_3f0 = local_390;
    }
    else if (local_3e8 == 3) {
      local_320 = FUN_143a8d310(0x28);
      if (local_320 == 0) {
        local_380 = 0;
      }
      else {
        local_408 = local_3f4;
        local_410 = *(undefined4 *)((longlong)param_1 + 0x34);
        local_418 = CONCAT71(local_418._1_7_,1);
        local_380 = FUN_143bec320(local_320,(int)(char)param_1[6],
                                  (int)*(char *)((longlong)param_1 + 0x31),
                                  (int)*(char *)((longlong)param_1 + 0x32));
      }
      local_1a8 = local_380;
      local_3f0 = local_380;
    }
    else {
      if (local_3e8 != 4) {
        *param_2 = 0x1b;
        FUN_143a8dc60(local_178);
        return;
      }
      local_2d0 = FUN_143a8d310(0x28);
      if (local_2d0 == 0) {
        local_370 = 0;
      }
      else {
        local_408 = local_3f4;
        local_410 = *(undefined4 *)((longlong)param_1 + 0x34);
        local_418 = local_418 & 0xffffffffffffff00;
        local_370 = FUN_143bec320(local_2d0,(int)(char)param_1[6],
                                  (int)*(char *)((longlong)param_1 + 0x31),
                                  (int)*(char *)((longlong)param_1 + 0x32));
      }
      local_290 = local_370;
      local_3f0 = local_370;
    }
    if (local_3f0 == 0) {
      *param_2 = 7;
      FUN_143a8dc60(local_178);
      return;
    }
    local_310 = FUN_143a8d310(0x48);
    if (local_310 == 0) {
      local_360 = 0;
    }
    else {
      local_3bc = (**(code **)(*param_1 + 0x60))(param_1);
      local_1e0 = *param_1;
      local_3b8 = (**(code **)(local_1e0 + 0x38))(param_1);
      local_280 = FUN_143a8dad0(local_100,L"(DST)");
      local_3f8 = local_3f8 | 1;
      local_198 = local_280;
      local_2b0 = FUN_143a8dda0(local_b0,local_178,local_280);
      local_3f8 = local_3f8 | 2;
      local_408 = 0x7fffffff;
      local_410 = (undefined4)param_1[9];
      local_418 = local_3f0;
      local_270 = local_2b0;
      local_360 = FUN_143bec770(local_310,local_2b0,local_3b8,local_3bc);
    }
    local_260 = local_360;
    param_1[0x10] = local_360;
    if ((local_3f8 & 2) != 0) {
      local_3f8 = local_3f8 & 0xfffffffd;
      FUN_143a8dc60(local_b0);
    }
    if ((local_3f8 & 1) != 0) {
      local_3f8 = local_3f8 & 0xfffffffe;
      FUN_143a8dc60(local_100);
    }
    if (param_1[0x10] == 0) {
      *param_2 = 7;
      FUN_143b85fb0(param_1);
      FUN_143a8dc60(local_178);
      return;
    }
    uVar2 = (**(code **)(*param_1 + 0x38))(param_1);
    local_188 = param_1[0x10];
    local_250 = *(longlong *)param_1[0x10];
    (**(code **)(local_250 + 0x30))(local_188,uVar2,0,&local_2f8);
    if (*(int *)((longlong)param_1 + 0x3c) == 1) {
      local_3e0 = 1;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x3c) == 2) {
        local_3d4 = 2;
      }
      else {
        local_3d4 = 0;
      }
      local_3e0 = local_3d4;
    }
    local_3f4 = local_3e0;
    local_3e4 = (int)param_1[0xb];
    if (local_3e4 == 1) {
      local_2e0 = FUN_143a8d310(0x28);
      if (local_2e0 == 0) {
        local_350 = 0;
      }
      else {
        local_418 = CONCAT44(local_418._4_4_,local_3f4);
        local_350 = FUN_143bec470(local_2e0,(int)(char)param_1[8],
                                  (int)*(char *)((longlong)param_1 + 0x41),
                                  *(undefined4 *)((longlong)param_1 + 0x44));
      }
      local_1c0 = local_350;
      local_3f0 = local_350;
    }
    else if (local_3e4 == 2) {
      local_300 = FUN_143a8d310(0x28);
      if (local_300 == 0) {
        local_340 = 0;
      }
      else {
        local_410 = local_3f4;
        local_418 = CONCAT44(local_418._4_4_,*(undefined4 *)((longlong)param_1 + 0x44));
        local_340 = FUN_143bec3e0(local_300,(int)(char)param_1[8],
                                  (int)*(char *)((longlong)param_1 + 0x41),
                                  (int)*(char *)((longlong)param_1 + 0x42));
      }
      local_240 = local_340;
      local_3f0 = local_340;
    }
    else if (local_3e4 == 3) {
      local_2c0 = FUN_143a8d310(0x28);
      if (local_2c0 == 0) {
        local_330 = 0;
      }
      else {
        local_408 = local_3f4;
        local_410 = *(undefined4 *)((longlong)param_1 + 0x44);
        local_418 = CONCAT71(local_418._1_7_,1);
        local_330 = FUN_143bec320(local_2c0,(int)(char)param_1[8],
                                  (int)*(char *)((longlong)param_1 + 0x41),
                                  (int)*(char *)((longlong)param_1 + 0x42));
      }
      local_1a0 = local_330;
      local_3f0 = local_330;
    }
    else if (local_3e4 == 4) {
      local_3a8 = FUN_143a8d310(0x28);
      if (local_3a8 == 0) {
        local_398 = 0;
      }
      else {
        local_408 = local_3f4;
        local_410 = *(undefined4 *)((longlong)param_1 + 0x44);
        local_418 = local_418 & 0xffffffffffffff00;
        local_398 = FUN_143bec320(local_3a8,(int)(char)param_1[8],
                                  (int)*(char *)((longlong)param_1 + 0x41),
                                  (int)*(char *)((longlong)param_1 + 0x42));
      }
      local_230 = local_398;
      local_3f0 = local_398;
    }
    if (local_3f0 == 0) {
      *param_2 = 7;
      FUN_143b85fb0(param_1);
      FUN_143a8dc60(local_178);
      return;
    }
    local_388 = FUN_143a8d310(0x48);
    if (local_388 == 0) {
      local_378 = 0;
    }
    else {
      local_3d0 = (**(code **)(*param_1 + 0x38))(param_1);
      local_220 = FUN_143a8dad0(local_150,L"(STD)");
      local_3f8 = local_3f8 | 4;
      local_1b0 = local_220;
      local_210 = FUN_143a8dda0(local_60,local_178,local_220);
      local_3f8 = local_3f8 | 8;
      local_408 = 0x7fffffff;
      local_410 = (undefined4)param_1[9];
      local_418 = local_3f0;
      local_190 = local_210;
      local_378 = FUN_143bec770(local_388,local_210,local_3d0,0);
    }
    local_1c8 = local_378;
    param_1[0xf] = local_378;
    if ((local_3f8 & 8) != 0) {
      local_3f8 = local_3f8 & 0xfffffff7;
      FUN_143a8dc60(local_60);
    }
    if ((local_3f8 & 4) != 0) {
      local_3f8 = local_3f8 & 0xfffffffb;
      FUN_143a8dc60(local_150);
    }
    if (param_1[0xf] == 0) {
      *param_2 = 7;
      FUN_143b85fb0(param_1);
      FUN_143a8dc60(local_178);
      return;
    }
    local_3c4 = FAnalyticsSpan::GetStackDepth(param_1[0x10]);
    local_200 = *param_1;
    uVar2 = (**(code **)(local_200 + 0x38))(param_1);
    local_1b8 = param_1[0xf];
    local_1f0 = *(longlong *)param_1[0xf];
    (**(code **)(local_1f0 + 0x30))(local_1b8,uVar2,local_3c4,&local_348);
    if (local_2f8 <= local_348) {
      local_318 = FUN_143a8d310(0x38);
      if (local_318 == 0) {
        local_308 = 0;
      }
      else {
        local_3c0 = (**(code **)(*param_1 + 0x38))(param_1);
        local_238 = FUN_143a8dad0(local_38,L"(STD)");
        local_3f8 = local_3f8 | 0x40;
        local_228 = local_238;
        local_218 = FUN_143a8dda0(local_88,local_178,local_238);
        local_3f8 = local_3f8 | 0x80;
        local_208 = local_218;
        local_308 = FUN_143bec820(local_318,local_218,local_3c0,0);
      }
      local_1f8 = local_308;
      param_1[0xd] = local_308;
      if ((local_3f8 & 0x80) != 0) {
        local_3f8 = local_3f8 & 0xffffff7f;
        FUN_143a8dc60(local_88);
      }
      if ((local_3f8 & 0x40) != 0) {
        local_3f8 = local_3f8 & 0xffffffbf;
        FUN_143a8dc60(local_38);
      }
      local_2e8 = FUN_143a8d310(0x20);
      if (local_2e8 == 0) {
        local_2d8 = 0;
      }
      else {
        local_2d8 = FUN_143b98890(local_2e8,local_2f8,param_1[0xd],param_1[0x10]);
      }
      local_1e8 = local_2d8;
      param_1[0xe] = local_2d8;
    }
    else {
      local_368 = FUN_143a8d310(0x38);
      if (local_368 == 0) {
        local_358 = 0;
      }
      else {
        local_3cc = FAnalyticsSpan::GetStackDepth(param_1[0x10]);
        local_2a8 = *param_1;
        local_3c8 = (**(code **)(local_2a8 + 0x38))(param_1);
        local_298 = FUN_143a8dad0(local_d8,L"(DST)");
        local_3f8 = local_3f8 | 0x10;
        local_288 = local_298;
        local_278 = FUN_143a8dda0(local_128,local_178,local_298);
        local_3f8 = local_3f8 | 0x20;
        local_268 = local_278;
        local_358 = FUN_143bec820(local_368,local_278,local_3c8,local_3cc);
      }
      local_258 = local_358;
      param_1[0xd] = local_358;
      if ((local_3f8 & 0x20) != 0) {
        local_3f8 = local_3f8 & 0xffffffdf;
        FUN_143a8dc60(local_128);
      }
      if ((local_3f8 & 0x10) != 0) {
        local_3f8 = local_3f8 & 0xffffffef;
        FUN_143a8dc60(local_d8);
      }
      local_338 = FUN_143a8d310(0x20);
      if (local_338 == 0) {
        local_328 = 0;
      }
      else {
        local_328 = FUN_143b98890(local_338,local_348,param_1[0xd],param_1[0xf]);
      }
      local_248 = local_328;
      param_1[0xe] = local_328;
    }
    if ((param_1[0xd] == 0) || (param_1[0xe] == 0)) {
      *param_2 = 7;
      FUN_143b85fb0(param_1);
      FUN_143a8dc60(local_178);
      return;
    }
  }
  *(undefined1 *)(param_1 + 0xc) = 1;
  FUN_143a8dc60(local_178);
  return;
}



// FUNCTION 143b884e0 FUN_143b884e0 body=63 status=ok
// SIG undefined FUN_143b884e0(void)

undefined1 FUN_143b884e0(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  
  if (param_2 < 1) {
    uVar1 = 0x1f;
  }
  else {
    uVar1 = FUN_143b4c990(param_1,param_2 + -1);
  }
  return uVar1;
}



// FUNCTION 143b88520 FUN_143b88520 body=31 status=ok
// SIG undefined FUN_143b88520(void)

void FUN_143b88520(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  *(undefined1 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 143b88540 FUN_143b88540 body=31 status=ok
// SIG undefined FUN_143b88540(void)

void FUN_143b88540(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  *(undefined1 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 143b88560 FUN_143b88560 body=15 status=ok
// SIG undefined FUN_143b88560(void)

undefined1 FUN_143b88560(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



// FUNCTION 143b88570 FUN_143b88570 body=155 status=ok
// SIG undefined FUN_143b88570(void)

undefined4 *
FUN_143b88570(undefined4 *param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
             undefined8 param_5)

{
  FUN_143a8ac30(param_1 + 2);
  *param_1 = param_2;
  param_1[0xc] = param_3;
  if (param_4 == 0) {
    FUN_143a8dcd0(param_1 + 2,param_5);
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  else {
    FUN_143a8dcd0(param_1 + 2,param_4);
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  return param_1;
}



// FUNCTION 143b88610 FUN_143b88610 body=39 status=ok
// SIG undefined FUN_143b88610(void)

undefined8 * FUN_143b88610(undefined8 *param_1)

{
  *param_1 = icu_53::TimeZoneNames::MatchInfoCollection::vftable;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 143b88640 FUN_143b88640 body=44 status=ok
// SIG undefined FUN_143b88640(void)

undefined8 * FUN_143b88640(undefined8 *param_1)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::TimeZoneNames::vftable;
  return param_1;
}



// FUNCTION 143b88670 FUN_143b88670 body=57 status=ok
// SIG undefined FUN_143b88670(void)

undefined8 * FUN_143b88670(undefined8 *param_1)

{
  FUN_143b88640(param_1);
  *param_1 = icu_53::TimeZoneNamesDelegate::vftable;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 143b886b0 FUN_143b886b0 body=910 status=ok
// SIG undefined FUN_143b886b0(void)

undefined8 * FUN_143b886b0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  char *_Str;
  longlong lVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined8 *local_68;
  char *local_60;
  undefined8 *local_38;
  undefined1 local_30 [8];
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_143b88640(param_1);
  *param_1 = icu_53::TimeZoneNamesDelegate::vftable;
  FUN_143a8ab50(local_30,&DAT_146bc81f0);
  if (DAT_146bc8228 == '\0') {
    DAT_146bc8220 = (ios_base *)FUN_143ab3680(FUN_143ab3350,FUN_143ab2f70,0,param_3);
    cVar1 = FUN_143a8b110(*param_3);
    if (cVar1 != '\0') {
      std::ios_base::precision(DAT_146bc8220,0x143aa79f0);
      std::ios_base::width(DAT_146bc8220,0x143b897b0);
      DAT_146bc8228 = '\x01';
      FUN_143b68380(0xc,FUN_143b89820);
    }
  }
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    _Str = (char *)FUN_143a8c200(param_2);
    local_68 = (undefined8 *)FUN_143ab32d0(DAT_146bc8220,_Str);
    if (local_68 == (undefined8 *)0x0) {
      local_60 = (char *)0x0;
      lVar2 = FUN_143a8d310(0x1d8);
      if (lVar2 == 0) {
        local_38 = (undefined8 *)0x0;
      }
      else {
        local_38 = (undefined8 *)FUN_143bef960(lVar2,param_2,param_3);
      }
      local_28 = local_38;
      if (local_38 == (undefined8 *)0x0) {
        *param_3 = 7;
      }
      cVar1 = FUN_143a8b110(*param_3);
      if (cVar1 != '\0') {
        sVar3 = _guard_xfg_dispatch_icall_nop(_Str);
        local_60 = (char *)FUN_143aa7a40(sVar3 + 1);
        if (local_60 == (char *)0x0) {
          *param_3 = 7;
        }
        else {
          _guard_xfg_dispatch_icall_nop(local_60,_Str);
        }
      }
      cVar1 = FUN_143a8b110(*param_3);
      if (cVar1 != '\0') {
        local_68 = (undefined8 *)FUN_143aa7a40(0x18);
        if (local_68 == (undefined8 *)0x0) {
          *param_3 = 7;
        }
        else {
          *local_68 = local_38;
          *(undefined4 *)(local_68 + 1) = 1;
          uVar4 = FUN_143a91970();
          local_68[2] = uVar4;
          FUN_143ab36d0(DAT_146bc8220,local_60,local_68,param_3);
        }
      }
      cVar1 = FUN_143a8b0e0(*param_3);
      if (cVar1 != '\0') {
        if (local_38 != (undefined8 *)0x0) {
          local_18 = local_38;
          if (local_38 == (undefined8 *)0x0) {
            local_20 = 0;
          }
          else {
            local_20 = (**(code **)*local_38)(local_38,1);
          }
        }
        if (local_60 != (char *)0x0) {
          FUN_143aa79f0(local_60);
        }
        if (local_68 != (undefined8 *)0x0) {
          FUN_143aa79f0(local_68);
        }
        local_68 = (undefined8 *)0x0;
      }
    }
    else {
      *(int *)(local_68 + 1) = *(int *)(local_68 + 1) + 1;
      uVar4 = FUN_143a91970();
      local_68[2] = uVar4;
    }
    DAT_146bc822c = DAT_146bc822c + 1;
    if (99 < DAT_146bc822c) {
      FUN_143b896e0();
      DAT_146bc822c = 0;
    }
    param_1[1] = local_68;
    FUN_143a8ad90(local_30);
  }
  else {
    FUN_143a8ad90(local_30);
  }
  return param_1;
}



// FUNCTION 143b88a40 FUN_143b88a40 body=31 status=ok
// SIG undefined FUN_143b88a40(void)

void FUN_143b88a40(longlong param_1)

{
  FUN_143a8dc60(param_1 + 8);
  return;
}


