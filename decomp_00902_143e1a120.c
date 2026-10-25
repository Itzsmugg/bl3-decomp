// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143e1a120 FUN_143e1a120 body=31 status=ok
// SIG undefined FUN_143e1a120(void)

void FUN_143e1a120(longlong param_1)

{
  FUN_143a910b0(param_1 + 8);
  return;
}



// FUNCTION 143e1a140 FUN_143e1a140 body=92 status=ok
// SIG undefined FUN_143e1a140(void)

void FUN_143e1a140(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_143e1a1a0(param_1);
  if ((iVar1 == 0) && (param_1 != (undefined8 *)0x0)) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}



// FUNCTION 143e1a1a0 FUN_143e1a1a0 body=31 status=ok
// SIG undefined FUN_143e1a1a0(void)

void FUN_143e1a1a0(longlong param_1)

{
  FUN_143a910d0(param_1 + 8);
  return;
}



// FUNCTION 143e1a1c0 FUN_143e1a1c0 body=99 status=ok
// SIG undefined FUN_143e1a1c0(void)

void FUN_143e1a1c0(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_143a91090(param_1 + 1);
  if ((iVar1 == 0) && (param_1 != (undefined8 *)0x0)) {
    (**(code **)*param_1)(param_1,1);
  }
  return;
}



// FUNCTION 143e1a230 FUN_143e1a230 body=74 status=ok
// SIG undefined FUN_143e1a230(void)

undefined8 * FUN_143e1a230(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 143e1a280 FUN_143e1a280 body=747 status=ok
// SIG undefined FUN_143e1a280(void)

undefined8 * FUN_143e1a280(undefined8 *param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_70;
  undefined8 local_68;
  
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::LRUCache::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = param_2;
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    lVar2 = FUN_143a8d310(0x28);
    if (lVar2 == 0) {
      local_68 = 0;
    }
    else {
      local_68 = FUN_143e1a230(lVar2);
    }
    param_1[1] = local_68;
    lVar2 = FUN_143a8d310(0x28);
    if (lVar2 == 0) {
      local_70 = 0;
    }
    else {
      local_70 = FUN_143e1a230(lVar2);
    }
    param_1[2] = local_70;
    if ((param_1[1] == 0) || (param_1[2] == 0)) {
      if (param_1[1] != 0) {
        FUN_143e1a670(param_1[1],1);
      }
      if (param_1[2] != 0) {
        FUN_143e1a670(param_1[2],1);
      }
      param_1[2] = 0;
      param_1[1] = 0;
      *param_3 = 7;
    }
    else {
      *(undefined8 *)param_1[1] = 0;
      *(undefined8 *)(param_1[1] + 8) = param_1[2];
      *(undefined8 *)param_1[2] = param_1[1];
      *(undefined8 *)(param_1[2] + 8) = 0;
      uVar3 = FUN_143ab3600(FUN_143ab3350,FUN_143ab2f70,0,
                            *(int *)(param_1 + 4) / 5 + *(int *)(param_1 + 4),param_3);
      param_1[3] = uVar3;
      FUN_143a8b0e0(*param_3);
    }
  }
  return param_1;
}



// FUNCTION 143e1a570 FUN_143e1a570 body=34 status=ok
// SIG undefined FUN_143e1a570(void)

void FUN_143e1a570(undefined8 param_1)

{
  FUN_143e1aad0(param_1);
  return;
}



// FUNCTION 143e1a5a0 FUN_143e1a5a0 body=160 status=ok
// SIG undefined FUN_143e1a5a0(void)

void FUN_143e1a5a0(undefined8 *param_1)

{
  longlong lVar1;
  longlong local_38;
  
  *param_1 = icu_53::LRUCache::vftable;
  FUN_143ab2e80(param_1[3]);
  lVar1 = param_1[1];
  while (local_38 = lVar1, local_38 != 0) {
    lVar1 = *(longlong *)(local_38 + 8);
    if (local_38 != 0) {
      FUN_143e1a670(local_38,1);
    }
  }
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143e1a640 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::SimpleLRUCache::vftable;
  FUN_143e1a5a0(param_1);
  return;
}



// FUNCTION 143e1a670 FUN_143e1a670 body=54 status=ok
// SIG undefined FUN_143e1a670(void)

undefined8 FUN_143e1a670(undefined8 param_1,uint param_2)

{
  FUN_143e1a570(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143e1a6b0 FUN_143e1a6b0 body=54 status=ok
// SIG undefined FUN_143e1a6b0(void)

undefined8 FUN_143e1a6b0(undefined8 param_1,uint param_2)

{
  FUN_143e1a5a0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143e1a6f0 FUN_143e1a6f0 body=628 status=ok
// SIG undefined FUN_143e1a6f0(void)

undefined8 FUN_143e1a6f0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_68;
  longlong local_48;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 != '\0') {
    return 0;
  }
  local_68 = FUN_143ab32d0(*(undefined8 *)(param_1 + 0x18),param_2);
  if (local_68 == 0) {
    iVar2 = FUN_143ab3100(*(undefined8 *)(param_1 + 0x18));
    if (iVar2 < *(int *)(param_1 + 0x20)) {
      lVar3 = FUN_143a8d310(0x28);
      if (lVar3 == 0) {
        local_48 = 0;
      }
      else {
        local_48 = FUN_143e1a230(lVar3);
      }
      local_68 = local_48;
      if (local_48 == 0) {
        *param_3 = 7;
        return 0;
      }
    }
    else {
      local_68 = **(longlong **)(param_1 + 0x10);
      FUN_143ab3830(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(local_68 + 0x10));
      FUN_143e1ab20(local_68);
      FUN_143e1aad0(local_68);
    }
    lVar3 = FUN_143ab8360(param_2);
    if (lVar3 == 0) {
      if (local_68 != 0) {
        FUN_143e1a670(local_68,1);
      }
      *param_3 = 7;
      return 0;
    }
    FUN_143e1a9f0(param_1,lVar3,local_68);
    FUN_143ab36d0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(local_68 + 0x10),local_68,param_3)
    ;
    cVar1 = FUN_143a8b0e0(*param_3);
    if (cVar1 != '\0') {
      if (local_68 != 0) {
        FUN_143e1a670(local_68,1);
      }
      return 0;
    }
  }
  FUN_143e1aa50(param_1,local_68);
  cVar1 = FUN_143a8b0e0(*(undefined4 *)(local_68 + 0x20));
  if (cVar1 == '\0') {
    uVar4 = *(undefined8 *)(local_68 + 0x18);
  }
  else {
    *param_3 = *(undefined4 *)(local_68 + 0x20);
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 143e1a970 FUN_143e1a970 body=42 status=ok
// SIG undefined FUN_143e1a970(void)

void FUN_143e1a970(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x28))(param_2,param_3);
  return;
}



// FUNCTION 143e1a9a0 FUN_143e1a9a0 body=77 status=ok
// SIG undefined FUN_143e1a9a0(void)

void FUN_143e1a9a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  FUN_143b36640(param_3,param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = param_4;
  return;
}



// FUNCTION 143e1a9f0 FUN_143e1a9f0 body=88 status=ok
// SIG undefined FUN_143e1a9f0(void)

void FUN_143e1a9f0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_18 [2];
  undefined8 local_10;
  
  local_18[0] = 0;
  local_10 = (**(code **)(*param_1 + 0x10))(param_1,param_2,local_18);
  FUN_143e1a9a0(param_3,param_2,local_10,local_18[0]);
  return;
}



// FUNCTION 143e1aa50 FUN_143e1aa50 body=128 status=ok
// SIG undefined FUN_143e1aa50(void)

void FUN_143e1aa50(longlong param_1,longlong *param_2)

{
  if (*param_2 != *(longlong *)(param_1 + 8)) {
    FUN_143e1ab20(param_2);
    *param_2 = *(longlong *)(param_1 + 8);
    param_2[1] = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
    **(undefined8 **)(*(longlong *)(param_1 + 8) + 8) = param_2;
    *(longlong **)(*(longlong *)(param_1 + 8) + 8) = param_2;
  }
  return;
}



// FUNCTION 143e1aad0 FUN_143e1aad0 body=70 status=ok
// SIG undefined FUN_143e1aad0(void)

void FUN_143e1aad0(longlong param_1)

{
  FUN_143b60500(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_143aa79f0(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 143e1ab20 FUN_143e1ab20 body=95 status=ok
// SIG undefined FUN_143e1ab20(void)

void FUN_143e1ab20(longlong *param_1)

{
  if (*param_1 != 0) {
    *(longlong *)(*param_1 + 8) = param_1[1];
  }
  if (param_1[1] != 0) {
    *(longlong *)param_1[1] = *param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 143e1ab80 FUN_143e1ab80 body=888 status=ok
// SIG undefined FUN_143e1ab80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143e1ad8f) */

int FUN_143e1ab80(char *param_1,void *param_2,int param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  undefined1 *local_a0;
  char *local_98;
  int *local_90;
  void *local_88;
  int local_80;
  int *local_78;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  char *local_50;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [4];
  undefined1 local_34 [12];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_3c = 0xc;
  local_40 = 6;
  local_48 = 4;
  local_50 = "";
  local_54 = 0;
  local_64 = 0;
  local_5c = 0;
  cVar1 = FUN_143a8b0e0(*param_4);
  if ((((cVar1 == '\0') && (param_1 != (char *)0x0)) && (param_2 != (void *)0x0)) && (0 < param_3))
  {
    local_98 = (char *)&local_48;
    local_a0 = local_38;
    local_a8 = &local_40;
    local_90 = param_4;
    local_64 = FUN_143e1c430(param_1,local_28,&local_3c,local_34);
    cVar1 = FUN_143a8b0e0(*param_4);
    if (cVar1 == '\0') {
      for (; (param_1[local_64] == '_' || (param_1[local_64] == '-')); local_64 = local_64 + 1) {
      }
      local_50 = param_1 + local_64;
      sVar3 = _guard_xfg_dispatch_icall_nop(local_50);
      local_54 = (int)sVar3;
      local_60 = 0;
      for (local_68 = 0; local_68 < local_54; local_68 = local_68 + 1) {
        if ((local_50[local_68] == '-') || (local_50[local_68] == '_')) {
          local_60 = 0;
        }
        else {
          if (local_50[local_68] == '@') break;
          if (8 < local_60) goto LAB_143e1aed6;
          local_60 = local_60 + 1;
        }
      }
      local_90 = (int *)CONCAT44(local_90._4_4_,local_54);
      local_98 = local_50;
      local_a0 = (undefined1 *)CONCAT44(local_a0._4_4_,local_48);
      local_a8 = (undefined4 *)local_38;
      local_88 = param_2;
      local_80 = param_3;
      local_78 = param_4;
      local_5c = FUN_143e1b700(local_28,local_3c,local_34,local_40);
      if (local_5c != 0) {
        return local_5c;
      }
      sVar3 = _guard_xfg_dispatch_icall_nop(param_1);
      local_58 = (int)sVar3;
      local_44 = param_3;
      if (local_58 <= param_3) {
        local_44 = local_58;
      }
      _guard_xfg_dispatch_icall_nop(param_2,param_1,(longlong)local_44);
      iVar2 = FUN_143ab4930(param_2,param_3,local_58,param_4);
      return iVar2;
    }
    if (*param_4 == 0xf) {
      *param_4 = 1;
    }
  }
LAB_143e1aed6:
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    *param_4 = 1;
  }
  return -1;
}



// FUNCTION 143e1af20 FUN_143e1af20 body=1814 status=ok
// SIG undefined FUN_143e1af20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143e1b133) */

undefined8 FUN_143e1af20(char *param_1,void *param_2,int param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined1 auStack_358 [32];
  int *local_338;
  undefined8 local_330;
  int *local_328;
  undefined8 local_320;
  undefined1 *local_318;
  int local_310;
  int *local_308;
  undefined4 local_2f8;
  int local_2f4;
  int local_2f0;
  int local_2ec;
  int local_2e8;
  int local_2e4;
  int local_2e0;
  char *local_2d8;
  undefined4 local_2d0;
  int local_2cc;
  int local_2c8;
  int local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined1 local_2b0 [16];
  undefined1 local_2a0 [8];
  undefined1 local_298 [160];
  undefined1 local_1f8 [160];
  undefined1 local_158 [160];
  undefined1 local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_358;
  local_2d0 = 0x9d;
  local_2f8 = 0xc;
  local_2e4 = 6;
  local_2ec = 4;
  local_2d8 = "";
  local_2e8 = 0;
  local_2f4 = 0;
  cVar1 = FUN_143a8b0e0(*param_4);
  if ((((cVar1 == '\0') && (param_1 != (char *)0x0)) && (param_2 != (void *)0x0)) && (0 < param_3))
  {
    local_328 = &local_2ec;
    local_330 = &local_2c8;
    local_338 = &local_2e4;
    local_320 = param_4;
    local_2f4 = FUN_143e1c430(param_1,local_2b0,&local_2f8,local_2a0);
    cVar1 = FUN_143a8b0e0(*param_4);
    if (cVar1 == '\0') {
      for (; (param_1[local_2f4] == '_' || (param_1[local_2f4] == '-')); local_2f4 = local_2f4 + 1)
      {
      }
      local_2d8 = param_1 + local_2f4;
      sVar3 = _guard_xfg_dispatch_icall_nop(local_2d8);
      local_2e8 = (int)sVar3;
      local_2e0 = 0;
      for (local_2f0 = 0; local_2f0 < local_2e8; local_2f0 = local_2f0 + 1) {
        if ((local_2d8[local_2f0] == '-') || (local_2d8[local_2f0] == '_')) {
          local_2e0 = 0;
        }
        else {
          if (local_2d8[local_2f0] == '@') break;
          if (8 < local_2e0) goto LAB_143e1b63c;
          local_2e0 = local_2e0 + 1;
        }
      }
      local_310 = local_2d0;
      local_318 = local_298;
      local_320 = (int *)((ulonglong)local_320 & 0xffffffff00000000);
      local_328 = (int *)0x0;
      local_330 = (int *)CONCAT44(local_330._4_4_,local_2ec);
      local_338 = &local_2c8;
      local_308 = param_4;
      FUN_143e1bd40(local_2b0,local_2f8,local_2a0,local_2e4);
      cVar1 = FUN_143a8b0e0(*param_4);
      if (cVar1 == '\0') {
        local_2d0 = FUN_143e1c720(local_298,local_298,local_2d0,param_4);
        cVar1 = FUN_143a8b0e0(*param_4);
        if (cVar1 == '\0') {
          local_310 = 0x9d;
          local_318 = local_1f8;
          local_320 = (int *)((ulonglong)local_320 & 0xffffffff00000000);
          local_328 = (int *)0x0;
          local_330 = (int *)((ulonglong)local_330 & 0xffffffff00000000);
          local_338 = (int *)0x0;
          local_308 = param_4;
          local_2b8 = FUN_143e1b700(local_2b0,local_2f8,0,0);
          cVar1 = FUN_143a8b0e0(*param_4);
          if (cVar1 == '\0') {
            iVar2 = FUN_143ab84b0(local_298,local_1f8,local_2b8);
            if (iVar2 == 0) {
              local_320 = (int *)CONCAT44(local_320._4_4_,local_2e8);
              local_328 = (int *)local_2d8;
              local_330 = (int *)((ulonglong)local_330._4_4_ << 0x20);
              local_338 = (int *)0x0;
              local_318 = param_2;
              local_310 = param_3;
              local_308 = param_4;
              uVar4 = FUN_143e1bd40(local_2b0,local_2f8,0,0);
              return uVar4;
            }
            if (0 < local_2ec) {
              local_310 = 0x9d;
              local_318 = local_158;
              local_320 = (int *)((ulonglong)local_320._4_4_ << 0x20);
              local_328 = (int *)0x0;
              local_330 = (int *)CONCAT44(local_330._4_4_,local_2ec);
              local_338 = &local_2c8;
              local_308 = param_4;
              local_2bc = FUN_143e1b700(local_2b0,local_2f8,0,0);
              cVar1 = FUN_143a8b0e0(*param_4);
              if (cVar1 != '\0') goto LAB_143e1b63c;
              iVar2 = FUN_143ab84b0(local_298,local_158,local_2bc);
              if (iVar2 == 0) {
                local_320 = (int *)CONCAT44(local_320._4_4_,local_2e8);
                local_328 = (int *)local_2d8;
                local_330 = (int *)CONCAT44(local_330._4_4_,local_2ec);
                local_338 = &local_2c8;
                local_318 = param_2;
                local_310 = param_3;
                local_308 = param_4;
                uVar4 = FUN_143e1bd40(local_2b0,local_2f8,0,0);
                return uVar4;
              }
            }
            if ((0 < local_2e4) && (0 < local_2ec)) {
              local_310 = 0x9d;
              local_318 = local_b8;
              local_320 = (int *)((ulonglong)local_320 & 0xffffffff00000000);
              local_328 = (int *)0x0;
              local_330 = (int *)((ulonglong)local_330 & 0xffffffff00000000);
              local_338 = (int *)0x0;
              local_308 = param_4;
              local_2c0 = FUN_143e1b700(local_2b0,local_2f8,local_2a0,local_2e4);
              cVar1 = FUN_143a8b0e0(*param_4);
              if (cVar1 != '\0') goto LAB_143e1b63c;
              iVar2 = FUN_143ab84b0(local_298,local_b8,local_2c0);
              if (iVar2 == 0) {
                local_320 = (int *)CONCAT44(local_320._4_4_,local_2e8);
                local_328 = (int *)local_2d8;
                local_330 = (int *)((ulonglong)local_330 & 0xffffffff00000000);
                local_338 = (int *)0x0;
                local_318 = param_2;
                local_310 = param_3;
                local_308 = param_4;
                uVar4 = FUN_143e1bd40(local_2b0,local_2f8,local_2a0,local_2e4);
                return uVar4;
              }
            }
            sVar3 = _guard_xfg_dispatch_icall_nop(param_1);
            local_2cc = (int)sVar3;
            local_2c4 = param_3;
            if (local_2cc <= param_3) {
              local_2c4 = local_2cc;
            }
            _guard_xfg_dispatch_icall_nop(param_2,param_1,(longlong)local_2c4);
            uVar4 = FUN_143ab4930(param_2,param_3,local_2cc,param_4);
            return uVar4;
          }
        }
      }
    }
    else if (*param_4 == 0xf) {
      *param_4 = 1;
    }
  }
LAB_143e1b63c:
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    *param_4 = 1;
  }
  return 0xffffffff;
}



// FUNCTION 143e1b680 FUN_143e1b680 body=127 status=ok
// SIG undefined FUN_143e1b680(void)

void FUN_143e1b680(void *param_1,int param_2,longlong param_3,int *param_4)

{
  if (0 < *param_4) {
    *(undefined1 *)(param_3 + *param_4) = 0x5f;
    *param_4 = *param_4 + 1;
  }
  memmove((void *)(param_3 + *param_4),param_1,(longlong)param_2);
  *param_4 = *param_4 + param_2;
  return;
}



// FUNCTION 143e1b700 FUN_143e1b700 body=1542 status=ok
// SIG undefined FUN_143e1b700(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143e1b700(undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4,
             undefined8 param_5,int param_6,undefined8 param_7,undefined4 param_8,undefined8 param_9
             ,undefined4 param_10,undefined4 *param_11)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  int local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined1 *local_198;
  undefined8 local_190;
  undefined4 *local_188;
  undefined4 *local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  undefined1 local_158 [160];
  undefined1 local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  cVar1 = FUN_143a8b0e0(*param_11);
  if (cVar1 != '\0') goto LAB_143e1bcf2;
  if ((0 < param_4) && (0 < param_6)) {
    local_160 = 0;
    local_188 = param_11;
    local_190 = CONCAT44(local_190._4_4_,0x9d);
    local_198 = local_158;
    local_1a0 = 0;
    local_1a8 = 0;
    local_1b0 = param_6;
    local_1b8 = param_5;
    FUN_143e1bd40(param_1,param_2,param_3,param_4);
    cVar1 = FUN_143a8b0e0(*param_11);
    if (cVar1 != '\0') goto LAB_143e1bcf2;
    local_160 = FUN_143e1c310(local_158,local_b8,0x9d,param_11);
    cVar1 = FUN_143a8b0e0(*param_11);
    if (cVar1 != '\0') goto LAB_143e1bcf2;
    if (local_160 != 0) {
      local_180 = param_11;
      local_188 = (undefined4 *)CONCAT44(local_188._4_4_,param_10);
      local_190 = param_9;
      local_198 = (undefined1 *)local_160;
      local_1a0 = param_8;
      local_1a8 = param_7;
      local_1b0 = 0;
      local_1b8 = 0;
      uVar2 = FUN_143e1bde0(0,0,0,0);
      return uVar2;
    }
  }
  if (0 < param_4) {
    local_168 = 0;
    local_188 = param_11;
    local_190 = CONCAT44(local_190._4_4_,0x9d);
    local_198 = local_158;
    local_1a0 = 0;
    local_1a8 = 0;
    local_1b0 = 0;
    local_1b8 = 0;
    FUN_143e1bd40(param_1,param_2,param_3,param_4);
    cVar1 = FUN_143a8b0e0(*param_11);
    if (cVar1 != '\0') goto LAB_143e1bcf2;
    local_168 = FUN_143e1c310(local_158,local_b8,0x9d,param_11);
    cVar1 = FUN_143a8b0e0(*param_11);
    if (cVar1 != '\0') goto LAB_143e1bcf2;
    if (local_168 != 0) {
      local_180 = param_11;
      local_188 = (undefined4 *)CONCAT44(local_188._4_4_,param_10);
      local_190 = param_9;
      local_198 = (undefined1 *)local_168;
      local_1a0 = param_8;
      local_1a8 = param_7;
      local_1b0 = param_6;
      local_1b8 = param_5;
      uVar2 = FUN_143e1bde0(0,0,0,0);
      return uVar2;
    }
  }
  if (0 < param_6) {
    local_178 = 0;
    local_188 = param_11;
    local_190 = CONCAT44(local_190._4_4_,0x9d);
    local_198 = local_158;
    local_1a0 = 0;
    local_1a8 = 0;
    local_1b0 = param_6;
    local_1b8 = param_5;
    FUN_143e1bd40(param_1,param_2,0,0);
    cVar1 = FUN_143a8b0e0(*param_11);
    if (cVar1 != '\0') goto LAB_143e1bcf2;
    local_178 = FUN_143e1c310(local_158,local_b8,0x9d,param_11);
    cVar1 = FUN_143a8b0e0(*param_11);
    if (cVar1 != '\0') goto LAB_143e1bcf2;
    if (local_178 != 0) {
      local_180 = param_11;
      local_188 = (undefined4 *)CONCAT44(local_188._4_4_,param_10);
      local_190 = param_9;
      local_198 = (undefined1 *)local_178;
      local_1a0 = param_8;
      local_1a8 = param_7;
      local_1b0 = 0;
      local_1b8 = 0;
      uVar2 = FUN_143e1bde0(0,0,param_3,param_4);
      return uVar2;
    }
  }
  local_170 = 0;
  local_188 = param_11;
  local_190 = CONCAT44(local_190._4_4_,0x9d);
  local_198 = local_158;
  local_1a0 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  FUN_143e1bd40(param_1,param_2,0,0);
  cVar1 = FUN_143a8b0e0(*param_11);
  if (cVar1 == '\0') {
    local_170 = FUN_143e1c310(local_158,local_b8,0x9d,param_11);
    cVar1 = FUN_143a8b0e0(*param_11);
    if (cVar1 == '\0') {
      if (local_170 != 0) {
        local_180 = param_11;
        local_188 = (undefined4 *)CONCAT44(local_188._4_4_,param_10);
        local_190 = param_9;
        local_198 = (undefined1 *)local_170;
        local_1a0 = param_8;
        local_1a8 = param_7;
        local_1b0 = param_6;
        local_1b8 = param_5;
        uVar2 = FUN_143e1bde0(0,0,param_3,param_4);
        return uVar2;
      }
      uVar2 = FUN_143ab4930(param_9,param_10,0,param_11);
      return uVar2;
    }
  }
LAB_143e1bcf2:
  cVar1 = FUN_143a8b0e0(*param_11);
  if (cVar1 == '\0') {
    *param_11 = 1;
  }
  return 0xffffffff;
}



// FUNCTION 143e1bd40 FUN_143e1bd40 body=152 status=ok
// SIG undefined FUN_143e1bd40(void)

void FUN_143e1bd40(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined4 param_10,undefined8 param_11)

{
  FUN_143e1bde0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,param_9,param_10,
                param_11);
  return;
}



// FUNCTION 143e1bde0 FUN_143e1bde0 body=1145 status=ok
// SIG undefined FUN_143e1bde0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143e1bde0(undefined8 param_1,int param_2,undefined8 param_3,int param_4,undefined8 param_5,
             int param_6,char *param_7,int param_8,longlong param_9,void *param_10,int param_11,
             int *param_12)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_128 [32];
  int local_108;
  char local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  undefined1 local_e0 [4];
  undefined1 local_dc [12];
  undefined1 local_d0 [24];
  undefined1 local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  cVar1 = FUN_143a8b0e0(*param_12);
  if (((((cVar1 == '\0') && (param_10 != (void *)0x0)) && (0 < param_11)) &&
      ((param_2 < 0xc && (param_4 < 6)))) && (param_6 < 4)) {
    local_108 = 0;
    local_100 = param_11;
    local_104 = '\0';
    if (param_2 < 1) {
      if (param_9 == 0) {
        sVar3 = _guard_xfg_dispatch_icall_nop("und");
        FUN_143e1b680(&DAT_145cd0e88,sVar3 & 0xffffffff,local_b8,&local_108);
      }
      else {
        local_fc = 0xc;
        local_fc = FUN_143a971b0(param_9,local_d0,0xc,param_12);
        cVar1 = FUN_143a8b0e0(*param_12);
        if ((cVar1 != '\0') || (0xb < local_fc)) goto LAB_143e1c234;
        if (local_fc == 0) {
          sVar3 = _guard_xfg_dispatch_icall_nop("und");
          FUN_143e1b680(&DAT_145cd0e88,sVar3 & 0xffffffff,local_b8,&local_108);
        }
        else {
          FUN_143e1b680(local_d0,local_fc,local_b8,&local_108);
        }
      }
    }
    else {
      FUN_143e1b680(param_1,param_2,local_b8,&local_108);
    }
    if (param_4 < 1) {
      if (param_9 != 0) {
        local_f8 = FUN_143a97390(param_9,local_dc,6,param_12);
        cVar1 = FUN_143a8b0e0(*param_12);
        if ((cVar1 != '\0') || (5 < local_f8)) goto LAB_143e1c234;
        if (0 < local_f8) {
          FUN_143e1b680(local_dc,local_f8,local_b8,&local_108);
        }
      }
    }
    else {
      FUN_143e1b680(param_3,param_4,local_b8,&local_108);
    }
    if (param_6 < 1) {
      if (param_9 != 0) {
        local_f4 = FUN_143a96880(param_9,local_e0,4,param_12);
        cVar1 = FUN_143a8b0e0(*param_12);
        if ((cVar1 != '\0') || (3 < local_f4)) goto LAB_143e1c234;
        if (0 < local_f4) {
          FUN_143e1b680(local_e0,local_f4,local_b8,&local_108);
          local_104 = '\x01';
        }
      }
    }
    else {
      FUN_143e1b680(param_5,param_6,local_b8,&local_108);
      local_104 = '\x01';
    }
    if (local_108 < param_11) {
      local_f0 = local_108;
    }
    else {
      local_f0 = param_11;
    }
    local_ec = local_f0;
    _guard_xfg_dispatch_icall_nop(param_10,local_b8,(longlong)local_f0);
    iVar5 = local_100 - local_ec;
    local_100 = iVar5;
    if (0 < param_8) {
      iVar2 = local_108;
      if ((*param_7 != '@') && (0 < iVar5)) {
        *(undefined1 *)((longlong)param_10 + (longlong)local_108) = 0x5f;
        iVar2 = local_108 + 1;
        local_100 = iVar5 + -1;
        if ((0 < local_100) && (local_104 == '\0')) {
          *(undefined1 *)((longlong)param_10 + (longlong)iVar2) = 0x5f;
          local_100 = iVar5 + -2;
          iVar2 = local_108 + 2;
        }
      }
      local_108 = iVar2;
      if (0 < local_100) {
        if (param_8 < local_100) {
          local_e8 = param_8;
        }
        else {
          local_e8 = local_100;
        }
        local_e4 = local_e8;
        memmove((void *)((longlong)param_10 + (longlong)local_108),param_7,(longlong)local_e8);
      }
    }
    local_108 = local_108 + param_8;
    uVar4 = FUN_143ab4930(param_10,param_11,local_108,param_12);
  }
  else {
LAB_143e1c234:
    if ((*param_12 == 0xf) || (cVar1 = FUN_143a8b110(*param_12), cVar1 != '\0')) {
      *param_12 = 1;
    }
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 143e1c290 FUN_143e1c290 body=114 status=ok
// SIG undefined FUN_143e1c290(void)

ulonglong FUN_143e1c290(undefined8 param_1,undefined8 param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  ulonglong uVar2;
  
  FUN_143a967e0(param_1,param_2,param_3,param_4);
  if ((*param_4 == -0x7c) || (*param_4 == 0xf)) {
    *param_4 = 1;
    uVar2 = (ulonglong)param_4 & 0xffffffffffffff00;
  }
  else {
    cVar1 = FUN_143a8b0e0(*param_4);
    if (cVar1 == '\0') {
      uVar2 = 1;
    }
    else {
      uVar2 = (ulonglong)(uint3)(cVar1 >> 7) << 8;
    }
  }
  return uVar2;
}



// FUNCTION 143e1c310 FUN_143e1c310 body=281 status=ok
// SIG undefined FUN_143e1c310(void)

undefined8 FUN_143e1c310(undefined8 param_1,undefined8 param_2,int param_3,int *param_4)

{
  char cVar1;
  int local_28;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    local_24 = 0;
    local_20 = 0;
    local_28 = 0;
    local_18 = FUN_143aa56e0(0,"likelySubtags",&local_28);
    cVar1 = FUN_143a8b110(local_28);
    if (cVar1 == '\0') {
      *param_4 = local_28;
    }
    else {
      local_20 = FUN_143aa5130(local_18,param_1,&local_24,&local_28);
      cVar1 = FUN_143a8b0e0(local_28);
      if (cVar1 == '\0') {
        if (local_24 < param_3) {
          FUN_143ab5770(local_20,param_2,local_24 + 1);
          local_10 = param_2;
        }
        else {
          *param_4 = 5;
        }
      }
      else if (local_28 != 2) {
        *param_4 = local_28;
      }
      FUN_143aa2ef0(local_18);
    }
  }
  return local_10;
}



// FUNCTION 143e1c430 FUN_143e1c430 body=720 status=ok
// SIG undefined FUN_143e1c430(void)

longlong FUN_143e1c430(char *param_1,char *param_2,int *param_3,longlong param_4,int *param_5,
                      longlong param_6,int *param_7,undefined4 *param_8)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  char *local_10 [2];
  
  uVar4 = 0;
  local_10[0] = param_1;
  cVar1 = FUN_143a8b0e0(*param_8);
  if (((((cVar1 == '\0') && (param_1 != (char *)0x0)) && (param_2 != (char *)0x0)) &&
      ((param_3 != (int *)0x0 && (param_4 != 0)))) &&
     ((param_5 != (int *)0x0 && ((param_6 != 0 && (param_7 != (int *)0x0)))))) {
    iVar2 = FUN_143a98520(local_10[0],param_2,*param_3,local_10,uVar4);
    FUN_143ab4930(param_2,*param_3,iVar2,param_8);
    cVar1 = FUN_143a8b0e0(*param_8);
    if (cVar1 == '\0') {
      *param_3 = iVar2;
      if (*param_3 == 0) {
        _guard_xfg_dispatch_icall_nop(param_2,"und");
        sVar3 = _guard_xfg_dispatch_icall_nop(param_2);
        *param_3 = (int)sVar3;
      }
      else if ((*local_10[0] == '_') || (*local_10[0] == '-')) {
        local_10[0] = local_10[0] + 1;
      }
      iVar2 = FUN_143a98750(local_10[0],param_4,*param_5,local_10);
      FUN_143ab4930(param_4,*param_5,iVar2,param_8);
      cVar1 = FUN_143a8b0e0(*param_8);
      if (cVar1 == '\0') {
        *param_5 = iVar2;
        if (0 < *param_5) {
          iVar2 = FUN_143ab84b0(param_4,&DAT_145e10da0,*param_5);
          if (iVar2 == 0) {
            *param_5 = 0;
          }
          if ((*local_10[0] == '_') || (*local_10[0] == '-')) {
            local_10[0] = local_10[0] + 1;
          }
        }
        iVar2 = FUN_143a98360(local_10[0],param_6,*param_7,local_10);
        FUN_143ab4930(param_6,*param_7,iVar2,param_8);
        cVar1 = FUN_143a8b0e0(*param_8);
        if (cVar1 == '\0') {
          *param_7 = iVar2;
          if (*param_7 < 1) {
            if ((*local_10[0] != '\0') && (*local_10[0] != '@')) {
              local_10[0] = local_10[0] + -1;
            }
          }
          else {
            iVar2 = FUN_143ab84b0(param_6,&DAT_145e10da8,*param_7);
            if (iVar2 == 0) {
              *param_7 = 0;
            }
          }
          goto LAB_143e1c6da;
        }
      }
    }
  }
  cVar1 = FUN_143a8b0e0(*param_8);
  if (cVar1 == '\0') {
    *param_8 = 1;
  }
LAB_143e1c6da:
  return (longlong)local_10[0] - (longlong)param_1;
}



// FUNCTION 143e1c720 FUN_143e1c720 body=149 status=ok
// SIG undefined FUN_143e1c720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143e1c720(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  cVar1 = FUN_143e1c290(param_1,local_b8,0x9d,param_4);
  if (cVar1 == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_143e1ab80(local_b8,param_2,param_3,param_4);
  }
  return uVar2;
}



// FUNCTION 143e1c7c0 FUN_143e1c7c0 body=149 status=ok
// SIG undefined FUN_143e1c7c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143e1c7c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  cVar1 = FUN_143e1c290(param_1,local_b8,0x9d,param_4);
  if (cVar1 == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_143e1af20(local_b8,param_2,param_3,param_4);
  }
  return uVar2;
}



// FUNCTION 143e1c860 FUN_143e1c860 body=129 status=ok
// SIG undefined FUN_143e1c860(void)

undefined8 *
FUN_143e1c860(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::UVector32::vftable;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  FUN_143e1ca10(param_1,8,param_2,param_4,uVar1);
  return param_1;
}



// FUNCTION 143e1c8f0 FUN_143e1c8f0 body=132 status=ok
// SIG undefined FUN_143e1c8f0(void)

undefined8 *
FUN_143e1c8f0(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::UVector32::vftable;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  FUN_143e1ca10(param_1,param_2,param_3,param_4,uVar1);
  return param_1;
}



// FUNCTION 143e1c980 FUN_143e1c980 body=66 status=ok
// SIG undefined FUN_143e1c980(void)

void FUN_143e1c980(undefined8 *param_1)

{
  *param_1 = icu_53::UVector32::vftable;
  FUN_143aa79f0(param_1[3]);
  param_1[3] = 0;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143e1c9d0 FUN_143e1c9d0 body=54 status=ok
// SIG undefined FUN_143e1c9d0(void)

undefined8 FUN_143e1c9d0(undefined8 param_1,uint param_2)

{
  FUN_143e1c980(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143e1ca10 FUN_143e1ca10 body=170 status=ok
// SIG undefined FUN_143e1ca10(void)

void FUN_143e1ca10(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 local_res10;
  
  local_res10 = param_2;
  if (param_2 < 1) {
    local_res10 = 8;
  }
  if ((0 < *(int *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x10) < local_res10)) {
    local_res10 = *(int *)(param_1 + 0x10);
  }
  if (0x1fffffff < local_res10) {
    local_res10 = FUN_143ac1240(8,*(undefined4 *)(param_1 + 0x10));
  }
  uVar1 = FUN_143aa7a40((longlong)local_res10 << 2);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    *param_3 = 7;
  }
  else {
    *(int *)(param_1 + 0xc) = local_res10;
  }
  return;
}



// FUNCTION 143e1cac0 FUN_143e1cac0 body=143 status=ok
// SIG undefined FUN_143e1cac0(void)

void FUN_143e1cac0(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 local_18;
  
  cVar1 = FUN_143b598f0(param_1,*(undefined4 *)(param_2 + 8),param_3);
  if (cVar1 != '\0') {
    FUN_143e1cdd0(param_1,*(undefined4 *)(param_2 + 8));
    for (local_18 = 0; local_18 < *(int *)(param_2 + 8); local_18 = local_18 + 1) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)local_18 * 4) =
           *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)local_18 * 4);
    }
  }
  return;
}



// FUNCTION 143e1cb50 FUN_143e1cb50 body=320 status=ok
// SIG undefined FUN_143e1cb50(void)

undefined8 FUN_143e1cb50(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 local_18;
  
  if (param_2 < 0) {
    *param_3 = 1;
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 0xc) < param_2) {
    if ((*(int *)(param_1 + 0x10) < 1) || (param_2 <= *(int *)(param_1 + 0x10))) {
      if (*(int *)(param_1 + 0xc) < 0x40000000) {
        local_18 = *(int *)(param_1 + 0xc) << 1;
        if (local_18 < param_2) {
          local_18 = param_2;
        }
        if ((0 < *(int *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x10) < local_18)) {
          local_18 = *(int *)(param_1 + 0x10);
        }
        if (local_18 < 0x20000000) {
          lVar2 = FUN_143aa7aa0(*(undefined8 *)(param_1 + 0x18),(longlong)local_18 << 2);
          if (lVar2 == 0) {
            *param_3 = 7;
            uVar1 = 0;
          }
          else {
            *(longlong *)(param_1 + 0x18) = lVar2;
            *(int *)(param_1 + 0xc) = local_18;
            uVar1 = 1;
          }
        }
        else {
          *param_3 = 1;
          uVar1 = 0;
        }
      }
      else {
        *param_3 = 1;
        uVar1 = 0;
      }
    }
    else {
      *param_3 = 0xf;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143e1cc90 FUN_143e1cc90 body=19 status=ok
// SIG undefined FUN_143e1cc90(void)

void FUN_143e1cc90(void)

{
  FUN_143e1ccb0();
  return;
}



// FUNCTION 143e1ccb0 FUN_143e1ccb0 body=8 status=ok
// SIG undefined FUN_143e1ccb0(void)

undefined * FUN_143e1ccb0(void)

{
  return &DAT_146bcd1e0;
}



// FUNCTION 143e1ccc0 FUN_143e1ccc0 body=204 status=ok
// SIG undefined FUN_143e1ccc0(void)

void FUN_143e1ccc0(longlong param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 local_18;
  
  if ((-1 < param_3) && (param_3 <= *(int *)(param_1 + 8))) {
    cVar1 = FUN_143b598f0(param_1,*(int *)(param_1 + 8) + 1,param_4);
    if (cVar1 != '\0') {
      for (local_18 = *(int *)(param_1 + 8); param_3 < local_18; local_18 = local_18 + -1) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)local_18 * 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)(local_18 + -1) * 4);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)param_3 * 4) = param_2;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
  }
  return;
}



// FUNCTION 143e1cd90 FUN_143e1cd90 body=57 status=ok
// SIG undefined FUN_143e1cd90(void)

void FUN_143e1cd90(longlong param_1,undefined4 param_2,int param_3)

{
  if ((-1 < param_3) && (param_3 < *(int *)(param_1 + 8))) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)param_3 * 4) = param_2;
  }
  return;
}



// FUNCTION 143e1cdd0 FUN_143e1cdd0 body=146 status=ok
// SIG undefined FUN_143e1cdd0(void)

void FUN_143e1cdd0(longlong param_1,int param_2)

{
  char cVar1;
  int local_18;
  undefined4 local_14 [5];
  
  if (-1 < param_2) {
    if (*(int *)(param_1 + 8) < param_2) {
      local_14[0] = 0;
      cVar1 = FUN_143b598f0(param_1,param_2,local_14);
      if (cVar1 == '\0') {
        return;
      }
      for (local_18 = *(int *)(param_1 + 8); local_18 < param_2; local_18 = local_18 + 1) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)local_18 * 4) = 0;
      }
    }
    *(int *)(param_1 + 8) = param_2;
  }
  return;
}



// FUNCTION 143e1ce70 FUN_143e1ce70 body=129 status=ok
// SIG undefined FUN_143e1ce70(void)

undefined8 *
FUN_143e1ce70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::UVector64::vftable;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  FUN_143e1cf90(param_1,8,param_2,param_4,uVar1);
  return param_1;
}



// FUNCTION 143e1cf00 FUN_143e1cf00 body=66 status=ok
// SIG undefined FUN_143e1cf00(void)

void FUN_143e1cf00(undefined8 *param_1)

{
  *param_1 = icu_53::UVector64::vftable;
  FUN_143aa79f0(param_1[3]);
  param_1[3] = 0;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143e1cf50 FUN_143e1cf50 body=54 status=ok
// SIG undefined FUN_143e1cf50(void)

undefined8 FUN_143e1cf50(undefined8 param_1,uint param_2)

{
  FUN_143e1cf00(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143e1cf90 FUN_143e1cf90 body=170 status=ok
// SIG undefined FUN_143e1cf90(void)

void FUN_143e1cf90(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 local_res10;
  
  local_res10 = param_2;
  if (param_2 < 1) {
    local_res10 = 8;
  }
  if ((0 < *(int *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x10) < local_res10)) {
    local_res10 = *(int *)(param_1 + 0x10);
  }
  if (0xfffffff < local_res10) {
    local_res10 = FUN_143ac1240(8,*(undefined4 *)(param_1 + 0x10));
  }
  uVar1 = FUN_143aa7a40((longlong)local_res10 << 3);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    *param_3 = 7;
  }
  else {
    *(int *)(param_1 + 0xc) = local_res10;
  }
  return;
}



// FUNCTION 143e1d040 FUN_143e1d040 body=144 status=ok
// SIG undefined FUN_143e1d040(void)

void FUN_143e1d040(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 local_18;
  
  cVar1 = FUN_143b64130(param_1,*(undefined4 *)(param_2 + 8),param_3);
  if (cVar1 != '\0') {
    FUN_143e1d440(param_1,*(undefined4 *)(param_2 + 8));
    for (local_18 = 0; local_18 < *(int *)(param_2 + 8); local_18 = local_18 + 1) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)local_18 * 8) =
           *(undefined8 *)(*(longlong *)(param_2 + 0x18) + (longlong)local_18 * 8);
    }
  }
  return;
}



// FUNCTION 143e1d0d0 FUN_143e1d0d0 body=320 status=ok
// SIG undefined FUN_143e1d0d0(void)

undefined8 FUN_143e1d0d0(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 local_18;
  
  if (param_2 < 0) {
    *param_3 = 1;
    uVar1 = 0;
  }
  else if (*(int *)(param_1 + 0xc) < param_2) {
    if ((*(int *)(param_1 + 0x10) < 1) || (param_2 <= *(int *)(param_1 + 0x10))) {
      if (*(int *)(param_1 + 0xc) < 0x40000000) {
        local_18 = *(int *)(param_1 + 0xc) << 1;
        if (local_18 < param_2) {
          local_18 = param_2;
        }
        if ((0 < *(int *)(param_1 + 0x10)) && (*(int *)(param_1 + 0x10) < local_18)) {
          local_18 = *(int *)(param_1 + 0x10);
        }
        if (local_18 < 0x10000000) {
          lVar2 = FUN_143aa7aa0(*(undefined8 *)(param_1 + 0x18),(longlong)local_18 << 3);
          if (lVar2 == 0) {
            *param_3 = 7;
            uVar1 = 0;
          }
          else {
            *(longlong *)(param_1 + 0x18) = lVar2;
            *(int *)(param_1 + 0xc) = local_18;
            uVar1 = 1;
          }
        }
        else {
          *param_3 = 1;
          uVar1 = 0;
        }
      }
      else {
        *param_3 = 1;
        uVar1 = 0;
      }
    }
    else {
      *param_3 = 0xf;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143e1d210 FUN_143e1d210 body=19 status=ok
// SIG undefined FUN_143e1d210(void)

void FUN_143e1d210(void)

{
  FUN_143e1d230();
  return;
}



// FUNCTION 143e1d230 FUN_143e1d230 body=8 status=ok
// SIG undefined FUN_143e1d230(void)

undefined * FUN_143e1d230(void)

{
  return &DAT_146bcd1e1;
}



// FUNCTION 143e1d240 FUN_143e1d240 body=208 status=ok
// SIG undefined FUN_143e1d240(void)

void FUN_143e1d240(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 local_18;
  
  if ((-1 < param_3) && (param_3 <= *(int *)(param_1 + 8))) {
    cVar1 = FUN_143b64130(param_1,*(int *)(param_1 + 8) + 1,param_4);
    if (cVar1 != '\0') {
      for (local_18 = *(int *)(param_1 + 8); param_3 < local_18; local_18 = local_18 + -1) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)local_18 * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)(local_18 + -1) * 8);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)param_3 * 8) = param_2;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
  }
  return;
}



// FUNCTION 143e1d310 FUN_143e1d310 body=18 status=ok
// SIG undefined FUN_143e1d310(void)

void FUN_143e1d310(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 143e1d330 FUN_143e1d330 body=60 status=ok
// SIG undefined FUN_143e1d330(void)

void FUN_143e1d330(longlong param_1,undefined8 param_2,int param_3)

{
  if ((-1 < param_3) && (param_3 < *(int *)(param_1 + 8))) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)param_3 * 8) = param_2;
  }
  return;
}



// FUNCTION 143e1d370 FUN_143e1d370 body=200 status=ok
// SIG undefined FUN_143e1d370(void)

void FUN_143e1d370(longlong param_1,int param_2)

{
  longlong lVar1;
  int local_res10;
  
  local_res10 = param_2;
  if (param_2 < 0) {
    local_res10 = 0;
  }
  if ((((local_res10 < 0x10000000) &&
       (*(int *)(param_1 + 0x10) = local_res10, *(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc)))
      && (*(int *)(param_1 + 0x10) != 0)) &&
     (lVar1 = FUN_143aa7aa0(*(undefined8 *)(param_1 + 0x18),(longlong)*(int *)(param_1 + 0x10) << 3)
     , lVar1 != 0)) {
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8)) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
    }
  }
  return;
}



// FUNCTION 143e1d440 FUN_143e1d440 body=147 status=ok
// SIG undefined FUN_143e1d440(void)

void FUN_143e1d440(longlong param_1,int param_2)

{
  char cVar1;
  int local_18;
  undefined4 local_14 [5];
  
  if (-1 < param_2) {
    if (*(int *)(param_1 + 8) < param_2) {
      local_14[0] = 0;
      cVar1 = FUN_143b64130(param_1,param_2,local_14);
      if (cVar1 == '\0') {
        return;
      }
      for (local_18 = *(int *)(param_1 + 8); local_18 < param_2; local_18 = local_18 + 1) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)local_18 * 8) = 0;
      }
    }
    *(int *)(param_1 + 8) = param_2;
  }
  return;
}



// FUNCTION 143e1d4e0 FUN_143e1d4e0 body=46 status=ok
// SIG undefined FUN_143e1d4e0(void)

void FUN_143e1d4e0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_143e1d550(*(undefined8 *)(param_1 + 8));
    FUN_143aa79f0(param_1);
  }
  return;
}



// FUNCTION 143e1d510 FUN_143e1d510 body=50 status=ok
// SIG undefined FUN_143e1d510(void)

undefined8 FUN_143e1d510(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 < 1) {
    uVar1 = FUN_143e1d5f0(*(undefined8 *)(param_1 + 8));
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 143e1d550 FUN_143e1d550 body=153 status=ok
// SIG undefined FUN_143e1d550(void)

void FUN_143e1d550(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *local_18;
  
  if (param_1 != 0) {
    local_18 = *(undefined8 **)(param_1 + 8);
    while (local_18 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)local_18[1];
      if (*(char *)(local_18 + 3) != '\0') {
        FUN_143aa79f0(*local_18);
      }
      FUN_143aa79f0(local_18);
      local_18 = puVar1;
    }
    FUN_143aa79f0(param_1);
  }
  return;
}



// FUNCTION 143e1d5f0 FUN_143e1d5f0 body=29 status=ok
// SIG undefined FUN_143e1d5f0(void)

undefined4 FUN_143e1d5f0(longlong param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
  }
  return uVar1;
}



// FUNCTION 143e1d610 FUN_143e1d610 body=98 status=ok
// SIG undefined FUN_143e1d610(void)

undefined8 FUN_143e1d610(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    *param_1 = puVar1[1];
    *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
    uVar2 = *puVar1;
  }
  return uVar2;
}



// FUNCTION 143e1d680 FUN_143e1d680 body=95 status=ok
// SIG undefined FUN_143e1d680(void)

char * FUN_143e1d680(longlong param_1,undefined4 *param_2,int *param_3)

{
  char *_Str;
  size_t sVar1;
  
  if (*param_3 < 1) {
    _Str = (char *)FUN_143e1d610(*(undefined8 *)(param_1 + 8));
    if ((_Str != (char *)0x0) && (param_2 != (undefined4 *)0x0)) {
      sVar1 = _guard_xfg_dispatch_icall_nop(_Str);
      *param_2 = (int)sVar1;
    }
  }
  else {
    _Str = (char *)0x0;
  }
  return _Str;
}



// FUNCTION 143e1d6e0 FUN_143e1d6e0 body=43 status=ok
// SIG undefined FUN_143e1d6e0(void)

void FUN_143e1d6e0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = param_1[1];
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  return;
}



// FUNCTION 143e1d710 FUN_143e1d710 body=45 status=ok
// SIG undefined FUN_143e1d710(void)

void FUN_143e1d710(longlong param_1,int *param_2)

{
  if (*param_2 < 1) {
    FUN_143e1d6e0(*(undefined8 *)(param_1 + 8));
  }
  return;
}



// FUNCTION 143e1d740 ~RtAudioError body=21 status=ok
// SIG undefined ~RtAudioError(void)

void RtAudioError::~RtAudioError(undefined8 *param_1)

{
  *param_1 = icu_53::ByteSink::vftable;
  return;
}



// FUNCTION 143e1d760 FUN_143e1d760 body=88 status=ok
// SIG undefined FUN_143e1d760(void)

undefined8 *
FUN_143e1d760(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::UnicodeSetIterator::vftable;
  param_1[7] = 0;
  FUN_143e1db30(param_1,param_2,param_3,param_4,uVar1);
  return param_1;
}



// FUNCTION 143e1d7c0 FUN_143e1d7c0 body=118 status=ok
// SIG undefined FUN_143e1d7c0(void)

void FUN_143e1d7c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::UnicodeSetIterator::vftable;
  puVar1 = (undefined8 *)param_1[7];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143e1d840 FUN_143e1d840 body=54 status=ok
// SIG undefined FUN_143e1d840(void)

undefined8 FUN_143e1d840(undefined8 param_1,uint param_2)

{
  FUN_143e1d7c0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143e1d880 FUN_143e1d880 body=19 status=ok
// SIG undefined FUN_143e1d880(void)

void FUN_143e1d880(void)

{
  FUN_143e1d8a0();
  return;
}



// FUNCTION 143e1d8a0 FUN_143e1d8a0 body=8 status=ok
// SIG undefined FUN_143e1d8a0(void)

undefined * FUN_143e1d8a0(void)

{
  return &DAT_146bcd1e2;
}



// FUNCTION 143e1d8b0 FUN_143e1d8b0 body=200 status=ok
// SIG undefined FUN_143e1d8b0(void)

undefined8 FUN_143e1d8b0(longlong param_1)

{
  longlong lVar1;
  undefined8 local_20;
  
  if ((*(longlong *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 8) != -1)) {
    if (*(longlong *)(param_1 + 0x38) == 0) {
      lVar1 = FUN_143a8d310(0x28);
      if (lVar1 == 0) {
        local_20 = 0;
      }
      else {
        local_20 = FUN_143a8ac30(lVar1);
      }
      *(undefined8 *)(param_1 + 0x38) = local_20;
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_143b10c50(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 8));
    }
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x38);
  }
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 143e1d980 FUN_143e1d980 body=96 status=ok
// SIG undefined FUN_143e1d980(void)

void FUN_143e1d980(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 200))
                    (*(undefined8 *)(param_1 + 0x18),param_2);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xd0))
                    (*(undefined8 *)(param_1 + 0x18),param_2);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return;
}



// FUNCTION 143e1d9e0 FUN_143e1d9e0 body=330 status=ok
// SIG undefined FUN_143e1d9e0(void)

undefined8 FUN_143e1d9e0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((int)param_1[5] < *(int *)((longlong)param_1 + 0x2c)) {
    if (*(int *)((longlong)param_1 + 0x24) < (int)param_1[4]) {
      iVar1 = *(int *)((longlong)param_1 + 0x24) + 1;
      *(int *)((longlong)param_1 + 0x24) = iVar1;
      (**(code **)(*param_1 + 0x10))(param_1,iVar1);
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + 0x2c);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)((longlong)param_1 + 0xc);
      *(int *)((longlong)param_1 + 0x2c) = *(int *)((longlong)param_1 + 0x2c) + 1;
      param_1[2] = 0;
      uVar2 = 1;
    }
    else if ((int)param_1[6] < *(int *)((longlong)param_1 + 0x34)) {
      *(undefined4 *)(param_1 + 1) = 0xffffffff;
      lVar3 = param_1[6];
      *(int *)(param_1 + 6) = (int)param_1[6] + 1;
      lVar3 = FUN_143b09610(*(undefined8 *)(param_1[3] + 0x40),(int)lVar3);
      param_1[2] = lVar3;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + 0x2c);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)((longlong)param_1 + 0xc);
    *(int *)((longlong)param_1 + 0x2c) = *(int *)((longlong)param_1 + 0x2c) + 1;
    param_1[2] = 0;
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143e1db30 FUN_143e1db30 body=43 status=ok
// SIG undefined FUN_143e1db30(void)

void FUN_143e1db30(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  FUN_143e1db60(param_1);
  return;
}



// FUNCTION 143e1db60 FUN_143e1db60 body=211 status=ok
// SIG undefined FUN_143e1db60(void)

void FUN_143e1db60(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[3] == 0) {
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    iVar1 = (**(code **)(*(longlong *)param_1[3] + 0xc0))(param_1[3]);
    *(int *)(param_1 + 4) = iVar1 + -1;
    uVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*(undefined8 *)(param_1[3] + 0x40));
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar2;
  }
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(*param_1 + 0x10))(param_1,*(undefined4 *)((longlong)param_1 + 0x24));
  }
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 143e1dc40 FUN_143e1dc40 body=47 status=ok
// SIG undefined FUN_143e1dc40(void)

void FUN_143e1dc40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143e1dc70(param_1,param_2,param_3,0);
  return;
}



// FUNCTION 143e1dc70 FUN_143e1dc70 body=373 status=ok
// SIG undefined FUN_143e1dc70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143e1dc70(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78 [2];
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined1 local_40;
  undefined1 local_3f [31];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_50 = 0;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  puVar4 = local_3f;
  for (lVar3 = 0x1f; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_20 = 0;
  local_1c = param_4;
  uVar2 = FUN_143a8c200(param_3);
  FUN_143a94130(&local_50,uVar2);
  local_70 = param_2;
  if (param_2 == (undefined8 *)0x0) {
    local_78[0] = 0;
    local_70 = (undefined8 *)FUN_143a9fdc0(param_3,local_78);
    cVar1 = FUN_143a8b0e0(local_78[0]);
    if (cVar1 != '\0') {
      FUN_143a90e90(param_1);
      return param_1;
    }
  }
  local_48 = local_70;
  FUN_143ab9df0(param_1,&local_50,FUN_143e1ddf0);
  if (param_2 == (undefined8 *)0x0) {
    local_58 = local_70;
    local_68 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      (**(code **)*local_70)(local_70,1);
    }
  }
  return param_1;
}



// FUNCTION 143e1ddf0 FUN_143e1ddf0 body=101 status=ok
// SIG undefined FUN_143e1ddf0(void)

void FUN_143e1ddf0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  FUN_143e273e0(*(undefined8 *)(param_1 + 8),param_4,param_5,param_6);
  FUN_143abb8a0(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 143e1de60 FUN_143e1de60 body=49 status=ok
// SIG undefined FUN_143e1de60(void)

longlong * FUN_143e1de60(longlong *param_1)

{
  *param_1 = (longlong)(param_1 + 2);
  *(undefined4 *)(param_1 + 1) = 8;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 143e1dea0 FUN_143e1dea0 body=92 status=ok
// SIG undefined FUN_143e1dea0(void)

longlong * FUN_143e1dea0(longlong *param_1)

{
  *param_1 = (longlong)(param_1 + 2);
  *(undefined4 *)(param_1 + 1) = 0x20;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  _vector_constructor_iterator_(param_1 + 2,0x10,0x20,FUN_143b42ef0);
  return param_1;
}



// FUNCTION 143e1df00 FLevelExperienceRamp body=32 status=ok
// SIG undefined FLevelExperienceRamp(void)

undefined8 FLevelExperienceRamp::FLevelExperienceRamp(undefined8 param_1)

{
  FUN_143e1de60(param_1);
  return param_1;
}



// FUNCTION 143e1df20 FLevelExperienceRamp body=32 status=ok
// SIG undefined FLevelExperienceRamp(void)

undefined8 FLevelExperienceRamp::FLevelExperienceRamp(undefined8 param_1)

{
  FUN_143e1dea0(param_1);
  return param_1;
}



// FUNCTION 143e1df40 FUN_143e1df40 body=208 status=ok
// SIG undefined FUN_143e1df40(void)

undefined8 *
FUN_143e1df40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::MessagePattern::vftable;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_143a8ac30(param_1 + 2);
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  *(undefined1 *)((longlong)param_1 + 0x65) = 0;
  *(undefined1 *)((longlong)param_1 + 0x66) = 0;
  FUN_143e1f0c0(param_1,param_2,param_3,param_4,uVar1);
  return param_1;
}



// FUNCTION 143e1e010 FUN_143e1e010 body=280 status=ok
// SIG undefined FUN_143e1e010(void)

undefined8 * FUN_143e1e010(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_18 [2];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_143a8abc0(param_1,param_2);
  *param_1 = icu_53::MessagePattern::vftable;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  FUN_143a8d3a0(param_1 + 2,param_2 + 0x10);
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((longlong)param_1 + 100) = *(undefined1 *)(param_2 + 100);
  *(undefined1 *)((longlong)param_1 + 0x65) = *(undefined1 *)(param_2 + 0x65);
  *(undefined1 *)((longlong)param_1 + 0x66) = *(undefined1 *)(param_2 + 0x66);
  local_18[0] = 0;
  cVar1 = FUN_143e1eb60(param_1,param_2,local_18);
  if (cVar1 == '\0') {
    FUN_143e1e9a0(param_1);
  }
  return param_1;
}



// FUNCTION 143e1e130 FArguments body=29 status=ok
// SIG undefined FArguments(void)

undefined8 SAnimTest::FArguments::FArguments(undefined8 param_1)

{
  FLevelExperienceRamp::FLevelExperienceRamp(param_1);
  return param_1;
}



// FUNCTION 143e1e150 FArguments body=29 status=ok
// SIG undefined FArguments(void)

undefined8 SAnimTest::FArguments::FArguments(undefined8 param_1)

{
  FLevelExperienceRamp::FLevelExperienceRamp(param_1);
  return param_1;
}



// FUNCTION 143e1e170 FUN_143e1e170 body=182 status=ok
// SIG undefined FUN_143e1e170(void)

void FUN_143e1e170(undefined8 *param_1)

{
  *param_1 = icu_53::MessagePattern::vftable;
  if (param_1[7] != 0) {
    FUN_143e1e440(param_1[7],1);
  }
  if (param_1[10] != 0) {
    FUN_143e1e440(param_1[10],1);
  }
  FUN_143a8dc60(param_1 + 2);
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143e1e230 operator_delete body=24 status=ok
// SIG undefined operator_delete(void)

void operator_delete(undefined8 param_1)

{
  TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
  ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(param_1);
  return;
}



// FUNCTION 143e1e250 FUN_143e1e250 body=174 status=ok
// SIG undefined FUN_143e1e250(void)

undefined1 FUN_143e1e250(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_18;
  
  if (param_1 == param_2) {
    local_18 = 1;
  }
  else if ((((*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) &&
            (cVar1 = FUN_143a8dd00(param_1 + 0x10,param_2 + 0x10), cVar1 != '\0')) &&
           (*(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48))) &&
          ((*(int *)(param_1 + 0x48) == 0 ||
           (cVar1 = FUN_143e1eef0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x38),
                                  *(undefined4 *)(param_1 + 0x48)), cVar1 != '\0')))) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143e1e300 FUN_143e1e300 body=145 status=ok
// SIG undefined FUN_143e1e300(void)

undefined1 FUN_143e1e300(int *param_1,int *param_2)

{
  undefined1 local_18;
  
  if (param_1 == param_2) {
    local_18 = 1;
  }
  else if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) &&
           ((short)param_1[2] == (short)param_2[2])) &&
          ((*(short *)((longlong)param_1 + 10) == *(short *)((longlong)param_2 + 10) &&
           (param_1[3] == param_2[3])))) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143e1e3a0 FUN_143e1e3a0 body=58 status=ok
// SIG undefined FUN_143e1e3a0(void)

bool FUN_143e1e3a0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_143e1e300(param_1,param_2);
  return cVar1 == '\0';
}



// FUNCTION 143e1e3e0 FUN_143e1e3e0 body=25 status=ok
// SIG undefined FUN_143e1e3e0(void)

longlong FUN_143e1e3e0(longlong *param_1,longlong param_2)

{
  return param_2 * 0x10 + *param_1;
}



// FUNCTION 143e1e400 FUN_143e1e400 body=54 status=ok
// SIG undefined FUN_143e1e400(void)

undefined8 FUN_143e1e400(undefined8 param_1,uint param_2)

{
  FUN_143e1e170(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143e1e440 FUN_143e1e440 body=54 status=ok
// SIG undefined FUN_143e1e440(void)

undefined8 FUN_143e1e440(undefined8 param_1,uint param_2)

{
  operator_delete(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143e1e480 FUN_143e1e480 body=393 status=ok
// SIG undefined FUN_143e1e480(void)

void FUN_143e1e480(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined8 local_28;
  
  cVar3 = FUN_143a8b0e0(*param_5);
  if (cVar3 != '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x50) == 0) {
    puVar4 = (undefined1 *)FUN_143a8d310(0x50);
    if (puVar4 == (undefined1 *)0x0) {
      local_28 = 0;
    }
    else {
      puVar7 = puVar4;
      for (lVar6 = 0x50; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      local_28 = SAnimTest::FArguments::FArguments(puVar4);
    }
    *(undefined8 *)(param_1 + 0x50) = local_28;
    if (*(longlong *)(param_1 + 0x50) == 0) {
      *param_5 = 7;
      return;
    }
  }
  else {
    cVar3 = FUN_143e1ee10(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x60),param_5);
    if (cVar3 == '\0') {
      return;
    }
    if (0x7fff < iVar1) {
      *param_5 = 8;
      return;
    }
  }
  iVar2 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  puVar5 = (undefined8 *)FUN_143b618b0(*(undefined8 *)(param_1 + 0x50),(longlong)iVar2);
  *puVar5 = param_2;
  FUN_143e1e680(param_1,0xd,param_3,param_4,iVar1,param_5);
  return;
}



// FUNCTION 143e1e610 FUN_143e1e610 body=103 status=ok
// SIG undefined FUN_143e1e610(void)

void FUN_143e1e610(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  longlong lVar1;
  
  lVar1 = FUN_143e1e3e0(*(undefined8 *)(param_1 + 0x38),(longlong)param_2);
  *(undefined4 *)(lVar1 + 0xc) = *(undefined4 *)(param_1 + 0x48);
  FUN_143e1e680(param_1,param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 143e1e680 FUN_143e1e680 body=181 status=ok
// SIG undefined FUN_143e1e680(void)

void FUN_143e1e680(longlong param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                  undefined2 param_5,undefined8 param_6)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  
  cVar2 = FUN_143e1ee80(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x48),param_6);
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x48);
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    puVar3 = (undefined4 *)FUN_143e1e3e0(*(undefined8 *)(param_1 + 0x38),(longlong)iVar1);
    *puVar3 = param_2;
    puVar3[1] = param_3;
    *(undefined2 *)(puVar3 + 2) = param_4;
    *(undefined2 *)((longlong)puVar3 + 10) = param_5;
    puVar3[3] = 0;
  }
  return;
}



// FUNCTION 143e1e740 FUN_143e1e740 body=215 status=ok
// SIG undefined FUN_143e1e740(void)

void FUN_143e1e740(undefined8 param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int local_res10;
  int local_14;
  
  local_14 = -1;
  local_res10 = param_2;
  while( true ) {
    iVar1 = FUN_143b0bae0(param_1,0x60,local_res10);
    if ((iVar1 < 0) || (param_3 <= iVar1)) break;
    if (iVar1 == local_14) {
      FUN_143acc590(param_4,0x60);
      local_res10 = local_res10 + 1;
      local_14 = -1;
    }
    else {
      FUN_143acc540(param_4,param_1,local_res10,iVar1 - local_res10);
      local_res10 = iVar1 + 1;
      local_14 = local_res10;
    }
  }
  FUN_143acc540(param_4,param_1,local_res10,param_3 - local_res10);
  return;
}



// FUNCTION 143e1e820 FUN_143e1e820 body=365 status=ok
// SIG undefined FUN_143e1e820(void)

void FUN_143e1e820(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_28;
  undefined4 local_20;
  
  uVar3 = RtAudioError::getType(param_1);
  uVar4 = FUN_143b779c0(param_1,param_2);
  local_28 = FUN_143b77960(uVar4);
  local_20 = param_2;
  while( true ) {
    local_20 = local_20 + 1;
    uVar4 = FUN_143b779c0(param_1,local_20);
    iVar1 = FStoredID::GetData<unsigned_int>(uVar4);
    iVar2 = FUN_143b77950(uVar4);
    if (iVar1 == 1) break;
    if (iVar1 == 2) {
      FUN_143acc540(param_3,uVar3,local_28,iVar2 - local_28);
      local_28 = FUN_143b77960(uVar4);
    }
    else if (iVar1 == 5) {
      FUN_143acc540(param_3,uVar3,local_28,iVar2 - local_28);
      local_20 = FUN_143b77980(param_1,local_20);
      uVar4 = FUN_143b779c0(param_1,local_20);
      local_28 = FUN_143b77960(uVar4);
      FUN_143e1e740(uVar3,iVar2,local_28,param_3);
    }
  }
  FUN_143acc540(param_3,uVar3,local_28,iVar2 - local_28);
  return;
}



// FUNCTION 143e1e9a0 FUN_143e1e9a0 body=82 status=ok
// SIG undefined FUN_143e1e9a0(void)

void FUN_143e1e9a0(longlong param_1)

{
  FUN_143a90910(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x65) = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 143e1ea00 FUN_143e1ea00 body=175 status=ok
// SIG undefined FUN_143e1ea00(void)

void FUN_143e1ea00(undefined8 param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  void *_Dst;
  
  cVar1 = FUN_143a8b110(*param_4);
  if ((cVar1 != '\0') && (0 < param_3)) {
    iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1);
    if ((iVar2 < param_3) && (lVar3 = FUN_143bd9190(param_1,param_3,0), lVar3 == 0)) {
      *param_4 = 7;
      return;
    }
    _Src = (void *)FUN_143a8b510(param_2);
    _Dst = (void *)FUN_143a8b510(param_1);
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)param_3 << 3);
  }
  return;
}



// FUNCTION 143e1eab0 FUN_143e1eab0 body=175 status=ok
// SIG undefined FUN_143e1eab0(void)

void FUN_143e1eab0(undefined8 param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  void *_Dst;
  
  cVar1 = FUN_143a8b110(*param_4);
  if ((cVar1 != '\0') && (0 < param_3)) {
    iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1);
    if ((iVar2 < param_3) && (lVar3 = FUN_143e218f0(param_1,param_3,0), lVar3 == 0)) {
      *param_4 = 7;
      return;
    }
    _Src = (void *)FUN_143a8b510(param_2);
    _Dst = (void *)FUN_143a8b510(param_1);
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)param_3 * 0x10);
  }
  return;
}



// FUNCTION 143e1eb60 FUN_143e1eb60 body=673 status=ok
// SIG undefined FUN_143e1eb60(void)

undefined8 FUN_143e1eb60(longlong param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined8 local_38;
  undefined8 local_30;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (*(longlong *)(param_1 + 0x38) == 0) {
      puVar2 = (undefined1 *)FUN_143a8d310(0x210);
      if (puVar2 == (undefined1 *)0x0) {
        local_38 = 0;
      }
      else {
        puVar5 = puVar2;
        for (lVar4 = 0x210; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        local_38 = SAnimTest::FArguments::FArguments(puVar2);
      }
      *(undefined8 *)(param_1 + 0x38) = local_38;
      if (*(longlong *)(param_1 + 0x38) == 0) {
        *param_3 = 7;
        return 0;
      }
      uVar3 = FUN_143a8b510(*(undefined8 *)(param_1 + 0x38));
      *(undefined8 *)(param_1 + 0x40) = uVar3;
    }
    if (0 < *(int *)(param_2 + 0x48)) {
      FUN_143e1eab0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x38),
                    *(undefined4 *)(param_2 + 0x48),param_3);
      cVar1 = FUN_143a8b0e0(*param_3);
      if (cVar1 != '\0') {
        return 0;
      }
      uVar3 = FUN_143a8b510(*(undefined8 *)(param_1 + 0x38));
      *(undefined8 *)(param_1 + 0x40) = uVar3;
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    }
    if (0 < *(int *)(param_2 + 0x60)) {
      if (*(longlong *)(param_1 + 0x50) == 0) {
        puVar2 = (undefined1 *)FUN_143a8d310(0x50);
        if (puVar2 == (undefined1 *)0x0) {
          local_30 = 0;
        }
        else {
          puVar5 = puVar2;
          for (lVar4 = 0x50; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          local_30 = SAnimTest::FArguments::FArguments(puVar2);
        }
        *(undefined8 *)(param_1 + 0x50) = local_30;
        if (*(longlong *)(param_1 + 0x50) == 0) {
          *param_3 = 7;
          return 0;
        }
        uVar3 = FUN_143a8b510(*(undefined8 *)(param_1 + 0x50));
        *(undefined8 *)(param_1 + 0x58) = uVar3;
      }
      FUN_143e1ea00(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_2 + 0x50),
                    *(undefined4 *)(param_2 + 0x60),param_3);
      cVar1 = FUN_143a8b0e0(*param_3);
      if (cVar1 != '\0') {
        return 0;
      }
      uVar3 = FUN_143a8b510(*(undefined8 *)(param_1 + 0x50));
      *(undefined8 *)(param_1 + 0x58) = uVar3;
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143e1ee10 FUN_143e1ee10 body=110 status=ok
// SIG undefined FUN_143e1ee10(void)

undefined8 FUN_143e1ee10(undefined8 param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1);
    if ((iVar2 <= param_2) && (lVar4 = FUN_143bd9190(param_1,param_2 << 1,param_2), lVar4 == 0)) {
      *param_3 = 7;
      return 0;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143e1ee80 FUN_143e1ee80 body=110 status=ok
// SIG undefined FUN_143e1ee80(void)

undefined8 FUN_143e1ee80(undefined8 param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1);
    if ((iVar2 <= param_2) && (lVar4 = FUN_143e218f0(param_1,param_2 << 1,param_2), lVar4 == 0)) {
      *param_3 = 7;
      return 0;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143e1eef0 FUN_143e1eef0 body=136 status=ok
// SIG undefined FUN_143e1eef0(void)

longlong FUN_143e1eef0(undefined8 param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int local_28;
  
  local_28 = 0;
  while( true ) {
    if (param_3 <= local_28) {
      return CONCAT71((uint7)(uint3)((uint)param_3 >> 8),1);
    }
    uVar2 = FUN_143e1e3e0(param_2,(longlong)local_28);
    uVar3 = FUN_143e1e3e0(param_1,(longlong)local_28);
    cVar1 = FUN_143e1e3a0(uVar3,uVar2);
    if (cVar1 != '\0') break;
    local_28 = local_28 + 1;
  }
  return (ulonglong)(uint3)(cVar1 >> 7) << 8;
}



// FUNCTION 143e1ef80 FUN_143e1ef80 body=90 status=ok
// SIG undefined FUN_143e1ef80(void)

double FUN_143e1ef80(longlong param_1,int *param_2)

{
  double dVar1;
  
  if (*param_2 == 0xc) {
    dVar1 = (double)(int)*(short *)((longlong)param_2 + 10);
  }
  else if (*param_2 == 0xd) {
    dVar1 = *(double *)
             (*(longlong *)(param_1 + 0x58) + (longlong)*(short *)((longlong)param_2 + 10) * 8);
  }
  else {
    dVar1 = -123456789.0;
  }
  return dVar1;
}



// FUNCTION 143e1efe0 FUN_143e1efe0 body=76 status=ok
// SIG undefined FUN_143e1efe0(void)

undefined8 FUN_143e1efe0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined4 *)FUN_143b779c0(param_1,param_2);
  cVar1 = FUN_143c06020(*puVar2);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_143e1ef80(param_1,puVar2);
  }
  return uVar3;
}



// FUNCTION 143e1f030 FUN_143e1f030 body=63 status=ok
// SIG undefined FUN_143e1f030(void)

undefined1 FUN_143e1f030(longlong param_1,int param_2)

{
  int *piVar1;
  
  if ((param_2 < 1) &&
     (piVar1 = (int *)FUN_143e1e3e0(*(undefined8 *)(param_1 + 0x38),0), *piVar1 != 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 143e1f070 FUN_143e1f070 body=75 status=ok
// SIG undefined FUN_143e1f070(void)

undefined1 FUN_143e1f070(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if (((param_2 == 1) && (param_3 == 2)) &&
     (piVar1 = (int *)FUN_143e1e3e0(*(undefined8 *)(param_1 + 0x38),0), *piVar1 != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143e1f0c0 FUN_143e1f0c0 body=195 status=ok
// SIG undefined FUN_143e1f0c0(void)

undefined8 FUN_143e1f0c0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined8 local_20;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    puVar2 = (undefined1 *)FUN_143a8d310(0x210);
    if (puVar2 == (undefined1 *)0x0) {
      local_20 = 0;
    }
    else {
      puVar5 = puVar2;
      for (lVar4 = 0x210; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      local_20 = SAnimTest::FArguments::FArguments(puVar2);
    }
    *(undefined8 *)(param_1 + 0x38) = local_20;
    if (*(longlong *)(param_1 + 0x38) == 0) {
      *param_2 = 7;
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_143a8b510(*(undefined8 *)(param_1 + 0x38));
      *(undefined8 *)(param_1 + 0x40) = uVar3;
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143e1f190 FUN_143e1f190 body=55 status=ok
// SIG undefined FUN_143e1f190(void)

undefined1 FUN_143e1f190(int param_1)

{
  undefined1 local_18;
  
  if (((param_1 < 0x61) || (0x7a < param_1)) && ((param_1 < 0x41 || (0x5a < param_1)))) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143e1f1d0 FUN_143e1f1d0 body=413 status=ok
// SIG undefined FUN_143e1f1d0(void)

undefined1 FUN_143e1f1d0(longlong param_1,int param_2)

{
  short sVar1;
  
  sVar1 = FUN_143a8e4f0(param_1 + 0x10,param_2);
  if ((sVar1 == 99) || (sVar1 == 0x43)) {
    sVar1 = FUN_143a8e4f0(param_1 + 0x10,param_2 + 1);
    if ((sVar1 == 0x68) || (sVar1 == 0x48)) {
      sVar1 = FUN_143a8e4f0(param_1 + 0x10,param_2 + 2);
      if ((sVar1 == 0x6f) || (sVar1 == 0x4f)) {
        sVar1 = FUN_143a8e4f0(param_1 + 0x10,param_2 + 3);
        if ((sVar1 == 0x69) || (sVar1 == 0x49)) {
          sVar1 = FUN_143a8e4f0(param_1 + 0x10,param_2 + 4);
          if (((sVar1 == 99) || (sVar1 == 0x43)) &&
             ((sVar1 = FUN_143a8e4f0(param_1 + 0x10,param_2 + 5), sVar1 == 0x65 || (sVar1 == 0x45)))
             ) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143e1f370 FUN_143e1f370 body=481 status=ok
// SIG undefined FUN_143e1f370(void)

undefined1 FUN_143e1f370(longlong param_1,int param_2)

{
  short sVar1;
  
  sVar1 = FUN_143a8e4f0(param_1 + 0x10,param_2);
  if ((sVar1 == 0x6f) || (sVar1 == 0x4f)) {
    sVar1 = FUN_143a8e4f0(param_1 + 0x10,param_2 + 1);
    if ((sVar1 == 0x72) || (sVar1 == 0x52)) {
      sVar1 = FUN_143a8e4f0(param_1 + 0x10,param_2 + 2);
      if ((sVar1 == 100) || (sVar1 == 0x44)) {
        sVar1 = FUN_143a8e4f0(param_1 + 0x10,param_2 + 3);
        if ((sVar1 == 0x69) || (sVar1 == 0x49)) {
          sVar1 = FUN_143a8e4f0(param_1 + 0x10,param_2 + 4);
          if ((sVar1 == 0x6e) || (sVar1 == 0x4e)) {
            sVar1 = FUN_143a8e4f0(param_1 + 0x10,param_2 + 5);
            if (((sVar1 == 0x61) || (sVar1 == 0x41)) &&
               ((sVar1 = FUN_143a8e4f0(param_1 + 0x10,param_2 + 6), sVar1 == 0x6c || (sVar1 == 0x4c)
                ))) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143e1f560 FUN_143e1f560 body=413 status=ok
// SIG undefined FUN_143e1f560(void)

undefined1 FUN_143e1f560(longlong param_1,int param_2)

{
  short sVar1;
  
  sVar1 = FUN_143a8e4f0(param_1 + 0x10,param_2);
  if ((sVar1 == 0x70) || (sVar1 == 0x50)) {
    sVar1 = FUN_143a8e4f0(param_1 + 0x10,param_2 + 1);
    if ((sVar1 == 0x6c) || (sVar1 == 0x4c)) {
      sVar1 = FUN_143a8e4f0(param_1 + 0x10,param_2 + 2);
      if ((sVar1 == 0x75) || (sVar1 == 0x55)) {
        sVar1 = FUN_143a8e4f0(param_1 + 0x10,param_2 + 3);
        if ((sVar1 == 0x72) || (sVar1 == 0x52)) {
          sVar1 = FUN_143a8e4f0(param_1 + 0x10,param_2 + 4);
          if (((sVar1 == 0x61) || (sVar1 == 0x41)) &&
             ((sVar1 = FUN_143a8e4f0(param_1 + 0x10,param_2 + 5), sVar1 == 0x6c || (sVar1 == 0x4c)))
             ) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143e1f700 FUN_143e1f700 body=413 status=ok
// SIG undefined FUN_143e1f700(void)

undefined1 FUN_143e1f700(longlong param_1,int param_2)

{
  short sVar1;
  
  sVar1 = FUN_143a8e4f0(param_1 + 0x10,param_2);
  if ((sVar1 == 0x73) || (sVar1 == 0x53)) {
    sVar1 = FUN_143a8e4f0(param_1 + 0x10,param_2 + 1);
    if ((sVar1 == 0x65) || (sVar1 == 0x45)) {
      sVar1 = FUN_143a8e4f0(param_1 + 0x10,param_2 + 2);
      if ((sVar1 == 0x6c) || (sVar1 == 0x4c)) {
        sVar1 = FUN_143a8e4f0(param_1 + 0x10,param_2 + 3);
        if ((sVar1 == 0x65) || (sVar1 == 0x45)) {
          sVar1 = FUN_143a8e4f0(param_1 + 0x10,param_2 + 4);
          if (((sVar1 == 99) || (sVar1 == 0x43)) &&
             ((sVar1 = FUN_143a8e4f0(param_1 + 0x10,param_2 + 5), sVar1 == 0x74 || (sVar1 == 0x54)))
             ) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143e1f8a0 FUN_143e1f8a0 body=115 status=ok
// SIG undefined FUN_143e1f8a0(void)

undefined8
FUN_143e1f8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143e21820(param_1,param_2,param_3,param_4);
  FUN_143e209f0(param_1,0,0,0,0,param_3,param_4);
  FUN_143e217c0(param_1);
  return param_1;
}



// FUNCTION 143e1f920 FUN_143e1f920 body=1912 status=ok
// SIG undefined FUN_143e1f920(void)

int FUN_143e1f920(longlong param_1,int param_2,int param_3,undefined4 param_4,undefined8 param_5,
                 undefined4 *param_6)

{
  int iVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int local_res10;
  ulonglong in_stack_ffffffffffffffa8;
  ulonglong uVar10;
  uint uVar12;
  undefined4 uVar13;
  undefined4 *puVar11;
  undefined4 uVar14;
  int local_38;
  
  iVar1 = *(int *)(param_1 + 0x48);
  local_38 = 0;
  uVar10 = in_stack_ffffffffffffffa8 & 0xffffffff00000000;
  FUN_143e1e680(param_1,5,param_2,param_3,uVar10,param_6);
  uVar12 = (uint)(uVar10 >> 0x20);
  cVar2 = FUN_143a8b0e0(*param_6);
  if (cVar2 == '\0') {
    iVar5 = FUN_143e21c80(param_1,param_2 + param_3);
    iVar6 = FUN_143a904f0(param_1 + 0x10);
    if (iVar5 == iVar6) {
      FUN_143e219c0(param_1,param_5,0);
      *param_6 = 0x10109;
      local_res10 = 0;
    }
    else {
      iVar6 = FUN_143e21c00(param_1,iVar5);
      iVar7 = FUN_143e200a0(param_1,iVar5,iVar6);
      puVar11 = param_6;
      if (iVar7 < 0) {
        if (iVar7 != -1) {
          FUN_143e219c0(param_1,param_5,iVar5);
          *param_6 = 0x10107;
          return 0;
        }
        if (0xffff < iVar6 - iVar5) {
          FUN_143e219c0(param_1,param_5,iVar5);
          *param_6 = 8;
          return 0;
        }
        *(undefined1 *)(param_1 + 100) = 1;
        uVar10 = (ulonglong)uVar12 << 0x20;
        FUN_143e1e680(param_1,8,iVar5,iVar6 - iVar5,uVar10,param_6);
      }
      else {
        if ((0xffff < iVar6 - iVar5) || (0x7fff < iVar7)) {
          FUN_143e219c0(param_1,param_5,iVar5);
          *param_6 = 8;
          return 0;
        }
        *(undefined1 *)(param_1 + 0x65) = 1;
        uVar10 = CONCAT44(uVar12,iVar7);
        FUN_143e1e680(param_1,7,iVar5,iVar6 - iVar5,uVar10,param_6);
      }
      local_res10 = FUN_143e21c80(param_1,iVar6);
      iVar6 = FUN_143a904f0(param_1 + 0x10);
      if (local_res10 == iVar6) {
        FUN_143e219c0(param_1,param_5,0);
        *param_6 = 0x10109;
        local_res10 = 0;
      }
      else {
        sVar3 = FUN_143a8e4f0(param_1 + 0x10,local_res10);
        uVar13 = (undefined4)(uVar10 >> 0x20);
        uVar14 = (undefined4)((ulonglong)puVar11 >> 0x20);
        if (sVar3 != 0x7d) {
          if (sVar3 != 0x2c) {
            FUN_143e219c0(param_1,param_5,iVar5);
            *param_6 = 0x10107;
            return 0;
          }
          iVar6 = FUN_143e21c80(param_1,local_res10 + 1);
          local_res10 = iVar6;
          while( true ) {
            iVar7 = FUN_143a904f0(param_1 + 0x10);
            uVar14 = (undefined4)((ulonglong)puVar11 >> 0x20);
            if (iVar7 <= local_res10) break;
            uVar4 = FUN_143a8e4f0(param_1 + 0x10,local_res10);
            cVar2 = FUN_143e1f190(uVar4);
            uVar14 = (undefined4)((ulonglong)puVar11 >> 0x20);
            if (cVar2 == '\0') break;
            local_res10 = local_res10 + 1;
          }
          iVar9 = local_res10 - iVar6;
          local_res10 = FUN_143e21c80(param_1,local_res10);
          iVar7 = FUN_143a904f0(param_1 + 0x10);
          if (local_res10 == iVar7) {
            FUN_143e219c0(param_1,param_5,0);
            *param_6 = 0x10109;
            return 0;
          }
          if ((iVar9 == 0) ||
             ((sVar3 = FUN_143a8e4f0(param_1 + 0x10,local_res10), sVar3 != 0x2c && (sVar3 != 0x7d)))
             ) {
            FUN_143e219c0(param_1,param_5,iVar5);
            *param_6 = 0x10107;
            return 0;
          }
          if (0xffff < iVar9) {
            FUN_143e219c0(param_1,param_5,iVar5);
            *param_6 = 8;
            return 0;
          }
          local_38 = 1;
          if (iVar9 == 6) {
            cVar2 = FUN_143e1f1d0(param_1,iVar6);
            if (cVar2 == '\0') {
              cVar2 = FUN_143e1f560(param_1,iVar6);
              if (cVar2 == '\0') {
                cVar2 = FUN_143e1f700(param_1,iVar6);
                if (cVar2 != '\0') {
                  local_38 = 4;
                }
              }
              else {
                local_38 = 3;
              }
            }
            else {
              local_38 = 2;
            }
          }
          else if (((iVar9 == 0xd) && (cVar2 = FUN_143e1f700(param_1,iVar6), cVar2 != '\0')) &&
                  (cVar2 = FUN_143e1f370(param_1,iVar6 + 6), cVar2 != '\0')) {
            local_38 = 5;
          }
          lVar8 = FUN_143e1e3e0(*(undefined8 *)(param_1 + 0x38),(longlong)iVar1);
          uVar13 = (undefined4)(uVar10 >> 0x20);
          *(undefined2 *)(lVar8 + 10) = (undefined2)local_38;
          if (local_38 == 1) {
            uVar10 = uVar10 & 0xffffffff00000000;
            puVar11 = param_6;
            FUN_143e1e680(param_1,9,iVar6,iVar9,uVar10,param_6);
            uVar13 = (undefined4)(uVar10 >> 0x20);
            uVar14 = (undefined4)((ulonglong)puVar11 >> 0x20);
          }
          if (sVar3 == 0x7d) {
            if (local_38 != 1) {
              FUN_143e219c0(param_1,param_5,iVar5);
              *param_6 = 0x10107;
              return 0;
            }
          }
          else {
            local_res10 = local_res10 + 1;
            if (local_38 == 1) {
              local_res10 = FUN_143e215f0(param_1,local_res10,param_5,param_6);
            }
            else if (local_38 == 2) {
              puVar11 = param_6;
              local_res10 = FUN_143e20220(param_1,local_res10,param_4,param_5,param_6);
              uVar13 = (undefined4)((ulonglong)puVar11 >> 0x20);
            }
            else {
              puVar11 = param_6;
              local_res10 = FUN_143e20fa0(param_1,local_38,local_res10,param_4,param_5,param_6);
              uVar13 = (undefined4)((ulonglong)param_5 >> 0x20);
              uVar14 = (undefined4)((ulonglong)puVar11 >> 0x20);
            }
          }
        }
        FUN_143e1e610(param_1,iVar1,6,local_res10,CONCAT44(uVar13,1),CONCAT44(uVar14,local_38),
                      param_6);
        local_res10 = local_res10 + 1;
      }
    }
  }
  else {
    local_res10 = 0;
  }
  return local_res10;
}



// FUNCTION 143e200a0 FUN_143e200a0 body=49 status=ok
// SIG undefined FUN_143e200a0(void)

void FUN_143e200a0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_143e200e0(param_1 + 0x10,param_2,param_3);
  return;
}



// FUNCTION 143e200e0 FUN_143e200e0 body=302 status=ok
// SIG undefined FUN_143e200e0(void)

int FUN_143e200e0(undefined8 param_1,int param_2,int param_3)

{
  bool bVar1;
  ushort uVar2;
  int local_res10;
  int local_20;
  
  if (param_2 < param_3) {
    uVar2 = FUN_143a8e4f0(param_1,param_2);
    local_res10 = param_2 + 1;
    if (uVar2 == 0x30) {
      if (local_res10 == param_3) {
        return 0;
      }
      local_20 = 0;
      bVar1 = true;
    }
    else {
      if ((uVar2 < 0x31) || (0x39 < uVar2)) {
        return -1;
      }
      local_20 = uVar2 - 0x30;
      bVar1 = false;
    }
    while (local_res10 < param_3) {
      uVar2 = FUN_143a8e4f0(param_1,local_res10);
      local_res10 = local_res10 + 1;
      if ((uVar2 < 0x30) || (0x39 < uVar2)) {
        return -1;
      }
      if (0xccccccb < local_20) {
        bVar1 = true;
      }
      local_20 = local_20 * 10 + -0x30 + (uint)uVar2;
    }
    if (bVar1) {
      local_20 = -2;
    }
  }
  else {
    local_20 = -2;
  }
  return local_20;
}



// FUNCTION 143e20220 FUN_143e20220 body=867 status=ok
// SIG undefined FUN_143e20220(void)

int FUN_143e20220(longlong param_1,undefined4 param_2,int param_3,ulonglong param_4,
                 undefined4 *param_5)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int local_res10;
  ulonglong uVar5;
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    local_res10 = FUN_143e21c80(param_1,param_2);
    iVar3 = FUN_143a904f0(param_1 + 0x10);
    if ((local_res10 == iVar3) || (sVar2 = FUN_143a8e4f0(param_1 + 0x10,local_res10), sVar2 == 0x7d)
       ) {
      FUN_143e219c0(param_1,param_4,0);
      *param_5 = 0x10107;
    }
    else {
      while( true ) {
        iVar3 = FUN_143e21b40(param_1,local_res10);
        if (iVar3 == local_res10) break;
        if (0xffff < iVar3 - local_res10) {
          FUN_143e219c0(param_1,param_4,local_res10);
          *param_5 = 8;
          return 0;
        }
        uVar5 = param_4;
        FUN_143e20600(param_1,local_res10,iVar3,1,param_4,param_5);
        cVar1 = FUN_143a8b0e0(*param_5);
        if (cVar1 != '\0') {
          return 0;
        }
        iVar3 = FUN_143e21c80(param_1,iVar3);
        iVar4 = FUN_143a904f0(param_1 + 0x10);
        if (iVar3 == iVar4) {
          FUN_143e219c0(param_1,param_4,param_2);
          *param_5 = 0x10107;
          return 0;
        }
        sVar2 = FUN_143a8e4f0(param_1 + 0x10,iVar3);
        if (((sVar2 != 0x23) && (sVar2 != 0x3c)) && (sVar2 != 0x2264)) {
          FUN_143e219c0(param_1,param_4,param_2);
          *param_5 = 0x10107;
          return 0;
        }
        FUN_143e1e680(param_1,0xb,iVar3,1,uVar5 & 0xffffffff00000000,param_5);
        iVar3 = FUN_143e209f0(param_1,iVar3 + 1,0,param_3 + 1,2,param_4,param_5);
        cVar1 = FUN_143a8b0e0(*param_5);
        if (cVar1 != '\0') {
          return 0;
        }
        iVar4 = FUN_143a904f0(param_1 + 0x10);
        if (iVar3 == iVar4) {
          return iVar3;
        }
        sVar2 = FUN_143a8e4f0(param_1 + 0x10,iVar3);
        if (sVar2 == 0x7d) {
          cVar1 = FUN_143e1f030(param_1,param_3);
          if (cVar1 == '\0') {
            FUN_143e219c0(param_1,param_4,param_2);
            *param_5 = 0x10107;
            return 0;
          }
          return iVar3;
        }
        local_res10 = FUN_143e21c80(param_1,iVar3 + 1);
      }
      FUN_143e219c0(param_1,param_4,param_2);
      *param_5 = 0x10107;
    }
  }
  return 0;
}



// FUNCTION 143e20590 FUN_143e20590 body=99 status=ok
// SIG undefined FUN_143e20590(void)

undefined8
FUN_143e20590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143e21820(param_1,param_2,param_3,param_4);
  FUN_143e20220(param_1,0,0,param_3,param_4);
  FUN_143e217c0(param_1);
  return param_1;
}



// FUNCTION 143e20600 FUN_143e20600 body=986 status=ok
// SIG undefined FUN_143e20600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143e20600(longlong param_1,int param_2,int param_3,char param_4,undefined8 param_5,
                  undefined4 *param_6)

{
  char cVar1;
  size_t sVar2;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  undefined4 *local_f0;
  ushort local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  undefined4 local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  char *local_a8;
  double local_a0;
  char local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  cVar1 = FUN_143a8b0e0(*param_6);
  if (cVar1 != '\0') {
    return;
  }
  local_dc = 0;
  local_d8 = 0;
  local_e4 = param_2;
  local_cc = param_2;
  local_e8 = FUN_143a8e4f0(param_1 + 0x10,param_2);
  local_e4 = local_e4 + 1;
  if (local_e8 == 0x2d) {
    local_d8 = 1;
    if (local_e4 == param_3) goto LAB_143e2099e;
    local_c4 = local_e4;
    local_e8 = FUN_143a8e4f0(param_1 + 0x10,local_e4);
    local_e4 = local_e4 + 1;
  }
  else if (local_e8 == 0x2b) {
    if (local_e4 == param_3) goto LAB_143e2099e;
    local_c8 = local_e4;
    local_e8 = FUN_143a8e4f0(param_1 + 0x10,local_e4);
    local_e4 = local_e4 + 1;
  }
  if (local_e8 == 0x221e) {
    if ((param_4 != '\0') && (local_e4 == param_3)) {
      local_b8 = FUN_143a91910();
      local_b0 = local_b8;
      if (local_d8 != 0) {
        local_b0 = local_b8 ^ 0x8000000000000000;
      }
      local_f8 = param_6;
      FUN_143e1e480(param_1,local_b0,param_2,param_3 - param_2);
      return;
    }
  }
  else {
    while (((0x2f < local_e8 && (local_e8 < 0x3a)) &&
           (local_dc = local_dc * 10 + -0x30 + (uint)local_e8, local_dc <= local_d8 + 0x7fff))) {
      if (local_e4 == param_3) {
        local_d4 = local_dc;
        if (local_d8 != 0) {
          local_d4 = -local_dc;
        }
        local_f0 = param_6;
        local_f8 = (undefined4 *)CONCAT44(local_f8._4_4_,local_d4);
        FUN_143e1e680(param_1,0xc,param_2,param_3 - param_2);
        return;
      }
      local_c0 = local_e4;
      local_e8 = FUN_143a8e4f0(param_1 + 0x10,local_e4);
      local_e4 = local_e4 + 1;
    }
    local_d0 = 0x80;
    local_e0 = param_3 - param_2;
    if (local_e0 < 0x80) {
      local_f0 = (undefined4 *)((ulonglong)local_f0 & 0xffffffff00000000);
      local_f8 = (undefined4 *)CONCAT44(local_f8._4_4_,0x80);
      FUN_143a8f880(param_1 + 0x10,param_2,local_e0,local_98);
      sVar2 = _guard_xfg_dispatch_icall_nop(local_98);
      if ((local_e0 <= (int)sVar2) &&
         (local_a0 = strtod(local_98,&local_a8), local_a8 == local_98 + local_e0)) {
        local_f8 = param_6;
        FUN_143e1e480(param_1,local_a0,param_2,local_e0);
        return;
      }
    }
  }
LAB_143e2099e:
  FUN_143e219c0(param_1,param_5,param_2);
  *param_6 = 0x10107;
  return;
}



// FUNCTION 143e209f0 FUN_143e209f0 body=1449 status=ok
// SIG undefined FUN_143e209f0(void)

int FUN_143e209f0(longlong param_1,int param_2,int param_3,int param_4,int param_5,ulonglong param_6
                 ,undefined4 *param_7)

{
  undefined4 uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int local_res10;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar8;
  ulonglong uVar6;
  uint uVar9;
  longlong lVar7;
  undefined4 *puVar10;
  undefined4 local_24;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  cVar2 = FUN_143a8b0e0(*param_7);
  if (cVar2 == '\0') {
    if (param_4 < 0x8000) {
      uVar1 = *(undefined4 *)(param_1 + 0x48);
      uVar6 = CONCAT44(uVar8,param_4);
      puVar10 = param_7;
      FUN_143e1e680(param_1,0,param_2,param_3,uVar6,param_7);
      iVar4 = param_2 + param_3;
LAB_143e20a96:
      do {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                local_res10 = iVar4;
                cVar2 = FUN_143a8b0e0(*param_7);
                if (cVar2 != '\0') {
                  return 0;
                }
                iVar4 = FUN_143a904f0(param_1 + 0x10);
                uVar8 = (undefined4)((ulonglong)puVar10 >> 0x20);
                if (iVar4 <= local_res10) {
                  if ((0 < param_4) &&
                     (cVar2 = FUN_143e1f070(param_1,param_4,param_5), cVar2 == '\0')) {
                    FUN_143e219c0(param_1,param_6,0);
                    *param_7 = 0x10109;
                    return 0;
                  }
                  FUN_143e1e610(param_1,uVar1,1,local_res10,uVar6 & 0xffffffff00000000,
                                CONCAT44(uVar8,param_4),param_7);
                  return local_res10;
                }
                sVar3 = FUN_143a8e4f0(param_1 + 0x10,local_res10);
                iVar4 = local_res10 + 1;
                if (sVar3 == 0x60) break;
                uVar9 = (uint)(uVar6 >> 0x20);
                if (((param_5 == 3) || (param_5 == 5)) && (sVar3 == 0x23)) {
                  uVar6 = (ulonglong)uVar9 << 0x20;
                  puVar10 = param_7;
                  FUN_143e1e680(param_1,4,local_res10,1,uVar6,param_7);
                }
                else if (sVar3 == 0x7b) {
                  uVar6 = param_6;
                  puVar10 = param_7;
                  iVar4 = FUN_143e1f920(param_1,local_res10,1,param_4,param_6,param_7);
                }
                else if (((0 < param_4) && (sVar3 == 0x7d)) || ((param_5 == 2 && (sVar3 == 0x7c))))
                {
                  if ((param_5 == 2) && (sVar3 == 0x7d)) {
                    local_24 = 0;
                  }
                  else {
                    local_24 = 1;
                  }
                  FUN_143e1e610(param_1,uVar1,1,local_res10,CONCAT44(uVar9,local_24),param_4,param_7
                               );
                  if (param_5 == 2) {
                    return local_res10;
                  }
                  return iVar4;
                }
              }
              iVar5 = FUN_143a904f0(param_1 + 0x10);
              if (iVar4 != iVar5) break;
              uVar6 = CONCAT44((int)(uVar6 >> 0x20),0x60);
              puVar10 = param_7;
              FUN_143e1e680(param_1,3,iVar4,0,uVar6,param_7);
              *(undefined1 *)(param_1 + 0x66) = 1;
            }
            sVar3 = FUN_143a8e4f0(param_1 + 0x10,iVar4);
            if (sVar3 != 0x60) break;
            uVar6 = uVar6 & 0xffffffff00000000;
            puVar10 = param_7;
            FUN_143e1e680(param_1,2,iVar4,1,uVar6,param_7);
            iVar4 = local_res10 + 2;
          }
          uVar9 = (uint)(uVar6 >> 0x20);
          if (((((*(int *)(param_1 + 8) == 1) || (sVar3 == 0x7b)) || (sVar3 == 0x7d)) ||
              ((param_5 == 2 && (sVar3 == 0x7c)))) ||
             (((param_5 == 3 || (param_5 == 5)) && (sVar3 == 0x23)))) break;
          uVar6 = CONCAT44(uVar9,0x60);
          puVar10 = param_7;
          FUN_143e1e680(param_1,3,iVar4,0,uVar6,param_7);
          *(undefined1 *)(param_1 + 0x66) = 1;
        }
        lVar7 = (ulonglong)uVar9 << 0x20;
        FUN_143e1e680(param_1,2,local_res10,1,lVar7,param_7);
        local_res10 = iVar4;
        while( true ) {
          uVar9 = (uint)((ulonglong)lVar7 >> 0x20);
          local_res10 = FUN_143b0bae0(param_1 + 0x10,0x60,local_res10 + 1);
          if (local_res10 < 0) break;
          sVar3 = FUN_143a8e4f0(param_1 + 0x10,local_res10 + 1);
          if (sVar3 != 0x60) {
            uVar6 = (ulonglong)uVar9 << 0x20;
            puVar10 = param_7;
            FUN_143e1e680(param_1,2,local_res10,1,uVar6,param_7);
            iVar4 = local_res10 + 1;
            goto LAB_143e20a96;
          }
          local_res10 = local_res10 + 1;
          lVar7 = (ulonglong)uVar9 << 0x20;
          FUN_143e1e680(param_1,2,local_res10,1,lVar7,param_7);
        }
        iVar4 = FUN_143a904f0(param_1 + 0x10);
        uVar6 = CONCAT44(uVar9,0x60);
        puVar10 = param_7;
        FUN_143e1e680(param_1,3,iVar4,0,uVar6,param_7);
        *(undefined1 *)(param_1 + 0x66) = 1;
      } while( true );
    }
    *param_7 = 8;
  }
  return 0;
}



// FUNCTION 143e20fa0 FUN_143e20fa0 body=1609 status=ok
// SIG undefined FUN_143e20fa0(void)

int FUN_143e20fa0(longlong param_1,int param_2,int param_3,int param_4,undefined4 *param_5,
                 undefined4 *param_6)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_res18;
  undefined4 *in_stack_ffffffffffffffb8;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined4 *in_stack_ffffffffffffffc0;
  undefined4 uVar10;
  
  cVar3 = FUN_143a8b0e0(*param_6);
  if (cVar3 == '\0') {
    bVar1 = true;
    bVar2 = false;
    local_res18 = param_3;
    while( true ) {
      uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
      iVar5 = FUN_143e21c80(param_1,local_res18);
      iVar6 = FUN_143a904f0(param_1 + 0x10);
      if ((iVar5 == iVar6) || (sVar4 = FUN_143a8e4f0(param_1 + 0x10,iVar5), sVar4 == 0x7d)) break;
      if (((param_2 == 3) || (param_2 == 5)) &&
         (sVar4 = FUN_143a8e4f0(param_1 + 0x10,iVar5), sVar4 == 0x3d)) {
        local_res18 = FUN_143e21b40(param_1,iVar5 + 1);
        iVar6 = local_res18 - iVar5;
        if (iVar6 == 1) {
          FUN_143e219c0(param_1,param_5,param_3);
          *param_6 = 0x10107;
          return 0;
        }
        if (0xffff < iVar6) {
          FUN_143e219c0(param_1,param_5,iVar5);
          *param_6 = 8;
          return 0;
        }
        FUN_143e1e680(param_1,0xb,iVar5,iVar6,
                      (ulonglong)in_stack_ffffffffffffffb8 & 0xffffffff00000000,param_6);
        puVar8 = param_5;
        FUN_143e20600(param_1,iVar5 + 1,local_res18,0,param_5,param_6);
        uVar10 = (undefined4)((ulonglong)puVar8 >> 0x20);
LAB_143e214e1:
        cVar3 = FUN_143a8b0e0(*param_6);
        if (cVar3 != '\0') {
          return 0;
        }
        iVar6 = FUN_143e21c80(param_1,local_res18);
        iVar7 = FUN_143a904f0(param_1 + 0x10);
        if ((iVar6 == iVar7) || (sVar4 = FUN_143a8e4f0(param_1 + 0x10,iVar6), sVar4 != 0x7b)) {
          FUN_143e219c0(param_1,param_5,iVar5);
          *param_6 = 0x10107;
          return 0;
        }
        in_stack_ffffffffffffffb8 = (undefined4 *)CONCAT44(uVar10,param_2);
        in_stack_ffffffffffffffc0 = param_5;
        local_res18 = FUN_143e209f0(param_1,iVar6,1,param_4 + 1,in_stack_ffffffffffffffb8,param_5,
                                    param_6);
        cVar3 = FUN_143a8b0e0(*param_6);
        if (cVar3 != '\0') {
          return 0;
        }
        bVar1 = false;
      }
      else {
        local_res18 = FUN_143e21c00(param_1,iVar5);
        iVar6 = local_res18 - iVar5;
        if (iVar6 == 0) {
          FUN_143e219c0(param_1,param_5,param_3);
          *param_6 = 0x10107;
          return 0;
        }
        if (((param_2 != 3) && (param_2 != 5)) ||
           ((iVar6 != 6 || (iVar7 = FUN_143a904f0(param_1 + 0x10), iVar7 <= local_res18)))) {
LAB_143e21440:
          if (0xffff < iVar6) {
            FUN_143e219c0(param_1,param_5,iVar5);
            *param_6 = 8;
            return 0;
          }
          uVar9 = (ulonglong)in_stack_ffffffffffffffb8 & 0xffffffff00000000;
          FUN_143e1e680(param_1,0xb,iVar5,iVar6,uVar9,param_6);
          uVar9 = uVar9 & 0xffffffff00000000;
          cVar3 = FUN_143c0ab60(param_1 + 0x10,iVar5,iVar6,L"other",uVar9,5);
          uVar10 = (undefined4)(uVar9 >> 0x20);
          if (cVar3 == '\0') {
            bVar2 = true;
          }
          goto LAB_143e214e1;
        }
        in_stack_ffffffffffffffb8 =
             (undefined4 *)((ulonglong)in_stack_ffffffffffffffb8 & 0xffffffff00000000);
        cVar3 = FUN_143c0ab60(param_1 + 0x10,iVar5,7,L"offset:",in_stack_ffffffffffffffb8,
                              CONCAT44(uVar10,7));
        if (cVar3 != '\0') goto LAB_143e21440;
        if (!bVar1) {
          FUN_143e219c0(param_1,param_5,param_3);
          *param_6 = 0x10107;
          return 0;
        }
        iVar6 = FUN_143e21c80(param_1,local_res18 + 1);
        local_res18 = FUN_143e21b40(param_1,iVar6);
        if (local_res18 == iVar6) {
          FUN_143e219c0(param_1,param_5,param_3);
          *param_6 = 0x10107;
          return 0;
        }
        if (0xffff < local_res18 - iVar6) {
          FUN_143e219c0(param_1,param_5,iVar6);
          *param_6 = 8;
          return 0;
        }
        in_stack_ffffffffffffffb8 = param_5;
        in_stack_ffffffffffffffc0 = param_6;
        FUN_143e20600(param_1,iVar6,local_res18,0,param_5,param_6);
        cVar3 = FUN_143a8b0e0(*param_6);
        if (cVar3 != '\0') {
          return 0;
        }
        bVar1 = false;
      }
    }
    cVar3 = FUN_143e1f030(param_1,param_4);
    if ((iVar5 == iVar6) == (bool)cVar3) {
      FUN_143e219c0(param_1,param_5,param_3);
      *param_6 = 0x10107;
      iVar5 = 0;
    }
    else if (!bVar2) {
      FUN_143e219c0(param_1,param_5,0);
      *param_6 = 0x1010f;
      iVar5 = 0;
    }
  }
  else {
    iVar5 = 0;
  }
  return iVar5;
}



// FUNCTION 143e215f0 FUN_143e215f0 body=455 status=ok
// SIG undefined FUN_143e215f0(void)

int FUN_143e215f0(longlong param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int local_res10;
  int local_24;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    local_24 = 0;
    iVar3 = param_2;
    while (local_res10 = iVar3, iVar3 = FUN_143a904f0(param_1 + 0x10), local_res10 < iVar3) {
      sVar2 = FUN_143a8e4f0(param_1 + 0x10,local_res10);
      iVar3 = local_res10 + 1;
      if (sVar2 == 0x60) {
        iVar3 = FUN_143b0bae0(param_1 + 0x10,0x60);
        if (iVar3 < 0) {
          FUN_143e219c0(param_1,param_3,param_2);
          *param_4 = 0x10107;
          return 0;
        }
        iVar3 = iVar3 + 1;
      }
      else if (sVar2 == 0x7b) {
        local_24 = local_24 + 1;
      }
      else if (sVar2 == 0x7d) {
        if (local_24 < 1) {
          if (local_res10 - param_2 < 0x10000) {
            FUN_143e1e680(param_1,10,param_2,local_res10 - param_2,0,param_4);
            return local_res10;
          }
          FUN_143e219c0(param_1,param_3,param_2);
          *param_4 = 8;
          return 0;
        }
        local_24 = local_24 + -1;
      }
    }
    FUN_143e219c0(param_1,param_3,0);
    *param_4 = 0x10109;
  }
  return 0;
}



// FUNCTION 143e217c0 FUN_143e217c0 body=84 status=ok
// SIG undefined FUN_143e217c0(void)

void FUN_143e217c0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    uVar1 = FUN_143a8b510(*(undefined8 *)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x40) = uVar1;
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    uVar1 = FUN_143a8b510(*(undefined8 *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x58) = uVar1;
  }
  return;
}



// FUNCTION 143e21820 FUN_143e21820 body=199 status=ok
// SIG undefined FUN_143e21820(void)

void FUN_143e21820(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0();
  if (cVar1 == '\0') {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
      param_3[1] = 0;
      *(undefined2 *)(param_3 + 2) = 0;
      *(undefined2 *)(param_3 + 10) = 0;
    }
    FUN_143a8dcd0(param_1 + 0x10,param_2);
    *(undefined1 *)(param_1 + 0x65) = 0;
    *(undefined1 *)(param_1 + 100) = 0;
    *(undefined1 *)(param_1 + 0x66) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return;
}



// FUNCTION 143e218f0 FUN_143e218f0 body=198 status=ok
// SIG undefined FUN_143e218f0(void)

void * FUN_143e218f0(undefined8 *param_1,int param_2,int param_3)

{
  void *_Dst;
  int local_res18;
  
  if (param_2 < 1) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)FUN_143aa7a40((longlong)param_2 * 0x10);
    if (_Dst != (void *)0x0) {
      if (0 < param_3) {
        local_res18 = param_3;
        if (*(int *)(param_1 + 1) < param_3) {
          local_res18 = *(int *)(param_1 + 1);
        }
        if (param_2 < local_res18) {
          local_res18 = param_2;
        }
        _guard_xfg_dispatch_icall_nop(_Dst,(void *)*param_1,(longlong)local_res18 * 0x10);
      }
      FUN_143a8ce70(param_1);
      *param_1 = _Dst;
      *(int *)(param_1 + 1) = param_2;
      *(undefined1 *)((longlong)param_1 + 0xc) = 1;
    }
  }
  return _Dst;
}



// FUNCTION 143e219c0 FUN_143e219c0 body=375 status=ok
// SIG undefined FUN_143e219c0(void)

void FUN_143e219c0(longlong param_1,longlong param_2,int param_3)

{
  ushort uVar1;
  undefined4 local_18;
  
  if (param_2 != 0) {
    *(int *)(param_2 + 4) = param_3;
    local_18 = param_3;
    if (0xf < param_3) {
      local_18 = 0xf;
      uVar1 = FUN_143a8e4f0(param_1 + 0x10,param_3 + -0xf);
      if ((uVar1 & 0xfc00) == 0xdc00) {
        local_18 = 0xe;
      }
    }
    FUN_143b06f40(param_1 + 0x10,param_3 - local_18,local_18,param_2 + 8,0);
    *(undefined2 *)(param_2 + 8 + (longlong)local_18 * 2) = 0;
    local_18 = FUN_143a904f0(param_1 + 0x10);
    local_18 = local_18 - param_3;
    if (0xf < local_18) {
      local_18 = 0xf;
      uVar1 = FUN_143a8e4f0(param_1 + 0x10,param_3 + 0xe);
      if ((uVar1 & 0xfc00) == 0xd800) {
        local_18 = 0xe;
      }
    }
    FUN_143b06f40(param_1 + 0x10,param_3,local_18,param_2 + 0x28,0);
    *(undefined2 *)(param_2 + 0x28 + (longlong)local_18 * 2) = 0;
  }
  return;
}



// FUNCTION 143e21b40 FUN_143e21b40 body=178 status=ok
// SIG undefined FUN_143e21b40(void)

int FUN_143e21b40(longlong param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int local_res10;
  
  iVar2 = FUN_143a904f0(param_1 + 0x10);
  local_res10 = param_2;
  while (((local_res10 < iVar2 &&
          ((((uVar1 = FUN_143a8e4f0(param_1 + 0x10,local_res10), 0x2f < uVar1 || (uVar1 == 0x2b)) ||
            (uVar1 == 0x2d)) || (uVar1 == 0x2e)))) &&
         (((uVar1 < 0x3a || (uVar1 == 0x65)) || ((uVar1 == 0x45 || (uVar1 == 0x221e))))))) {
    local_res10 = local_res10 + 1;
  }
  return local_res10;
}



// FUNCTION 143e21c00 FUN_143e21c00 body=118 status=ok
// SIG undefined FUN_143e21c00(void)

longlong FUN_143e21c00(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_143a8fe10(param_1 + 0x10);
  iVar1 = FUN_143a904f0(param_1 + 0x10);
  lVar3 = FUN_143b28400(lVar2 + (longlong)param_2 * 2,iVar1 - param_2);
  return lVar3 - lVar2 >> 1;
}



// FUNCTION 143e21c80 FUN_143e21c80 body=118 status=ok
// SIG undefined FUN_143e21c80(void)

longlong FUN_143e21c80(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_143a8fe10(param_1 + 0x10);
  iVar1 = FUN_143a904f0(param_1 + 0x10);
  lVar3 = FUN_143b28450(lVar2 + (longlong)param_2 * 2,iVar1 - param_2);
  return lVar3 - lVar2 >> 1;
}



// FUNCTION 143e21d00 FUN_143e21d00 body=91 status=ok
// SIG undefined FUN_143e21d00(void)

undefined8 FUN_143e21d00(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_143a904f0(param_1);
  uVar3 = FUN_143a8fe10(param_1);
  cVar1 = FUN_143b28210(uVar3,uVar2);
  if (cVar1 == '\0') {
    uVar3 = 0xfffffffe;
  }
  else {
    uVar2 = FUN_143a904f0(param_1);
    uVar3 = FUN_143e200e0(param_1,0,uVar2);
  }
  return uVar3;
}



// FUNCTION 143e21d60 FUN_143e21d60 body=507 status=ok
// SIG undefined FUN_143e21d60(void)

undefined8 FUN_143e21d60(undefined8 param_1)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int local_30;
  uint local_2c;
  
  cVar3 = FUN_143a90330(param_1);
  if (cVar3 == '\0') {
    lVar6 = FUN_143a8fd50(param_1);
    iVar4 = FUN_143a904f0(param_1);
    local_30 = iVar4;
    do {
      iVar2 = local_30;
      if (local_30 < 1) break;
      iVar5 = local_30 + -1;
      local_2c = (uint)*(ushort *)(lVar6 + (longlong)iVar5 * 2);
      if ((((local_2c & 0xfffffc00) == 0xdc00) && (0 < iVar5)) &&
         (uVar1 = *(ushort *)(lVar6 + (longlong)(local_30 + -2) * 2), (uVar1 & 0xfc00) == 0xd800)) {
        local_2c = (uint)uVar1 * 0x400 + -0x35fdc00 + local_2c;
        iVar5 = local_30 + -2;
      }
      local_30 = iVar5;
    } while ((local_2c == 0x20) || (cVar3 = FUN_143a9e310(local_2c), cVar3 != '\0'));
    if (iVar2 < iVar4) {
      FUN_143a90c60(param_1,iVar2);
    }
    local_30 = 0;
    do {
      iVar4 = local_30;
      if (iVar2 <= local_30) break;
      local_2c = (uint)*(ushort *)(lVar6 + (longlong)local_30 * 2);
      iVar5 = local_30 + 1;
      if ((((local_2c & 0xfffffc00) == 0xd800) && (iVar5 != iVar2)) &&
         (uVar1 = *(ushort *)(lVar6 + (longlong)iVar5 * 2), (uVar1 & 0xfc00) == 0xdc00)) {
        local_2c = local_2c * 0x400 + -0x35fdc00 + (uint)uVar1;
        iVar5 = local_30 + 2;
      }
      local_30 = iVar5;
    } while ((local_2c == 0x20) || (cVar3 = FUN_143a9e310(local_2c), cVar3 != '\0'));
    if (0 < iVar4) {
      FUN_143a8f0d0(param_1,0,iVar4,0,0,0);
    }
  }
  return param_1;
}



// FUNCTION 143e21f60 FUN_143e21f60 body=345 status=ok
// SIG undefined FUN_143e21f60(void)

undefined8 *
FUN_143e21f60(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  
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
  cVar1 = FUN_143a8b110(*param_5);
  if (cVar1 != '\0') {
    uVar2 = FUN_143aa7a40((longlong)*(int *)((longlong)param_1 + 0x14) << 2);
    param_1[3] = uVar2;
    if (param_1[3] == 0) {
      *param_5 = 7;
    }
    else {
      FUN_143b13af0(param_1,param_5);
      FUN_143e223c0(param_1,param_2,param_3,param_4,param_5);
    }
  }
  return param_1;
}



// FUNCTION 143e220c0 FUN_143e220c0 body=158 status=ok
// SIG undefined FUN_143e220c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143e220c0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_58 = param_3 < 0;
  local_50 = FUN_143a8d4f0(local_38,local_58,param_2,param_3);
  local_48 = local_50;
  FUN_143b134e0(param_1,local_50);
  FUN_143a8dc60(local_38);
  return;
}



// FUNCTION 143e22160 FUN_143e22160 body=95 status=ok
// SIG undefined FUN_143e22160(void)

void FUN_143e22160(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  if (-1 < param_2) {
    if (param_2 < 0x20) {
      FUN_143a90d80(param_4,0,param_3,param_2);
      FUN_143b134e0(param_1,param_4);
    }
    else {
      FUN_143b13590(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 143e221c0 FUN_143e221c0 body=503 status=ok
// SIG undefined FUN_143e221c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143e221c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined4 *param_6)

{
  char cVar1;
  longlong lVar2;
  code **ppcVar3;
  undefined1 *puVar4;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined1 *local_d0;
  undefined4 *local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [40];
  undefined1 local_50 [40];
  ulonglong local_28;
  
  local_90 = 0xfffffffffffffffe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  cVar1 = FUN_143a8b0e0(*param_6);
  if (cVar1 == '\0') {
    cVar1 = FUN_143b14e80(param_1);
    if (cVar1 == '\0') {
      FUN_143a8ac30(local_50);
      FUN_143b30700(local_78,param_2,param_5,param_3);
      local_a0 = FUN_143e224c0;
      local_98 = 0;
      ppcVar3 = &local_a0;
      puVar4 = local_88;
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *(undefined1 *)ppcVar3;
        ppcVar3 = (code **)((longlong)ppcVar3 + 1);
        puVar4 = puVar4 + 1;
      }
      local_c8 = param_6;
      local_d0 = local_88;
      local_d8 = param_4;
      FUN_143b17670(param_1,local_78,param_5,local_50);
      cVar1 = FUN_143a8b0e0(*param_6);
      if (cVar1 == '\0') {
        cVar1 = FUN_143b19d90(local_78);
        if (cVar1 == '\0') {
          FUN_143b15e20(param_1,local_50);
          local_b0 = param_1;
          FUN_143a8dc60(local_50);
          param_1 = local_b0;
        }
        else {
          *param_6 = 0x10002;
          local_b8 = param_1;
          FUN_143a8dc60(local_50);
          param_1 = local_b8;
        }
      }
      else {
        local_a8 = param_1;
        FUN_143a8dc60(local_50);
        param_1 = local_a8;
      }
    }
    else {
      *param_6 = 0x1e;
    }
  }
  return param_1;
}



// FUNCTION 143e223c0 FUN_143e223c0 body=255 status=ok
// SIG undefined FUN_143e223c0(void)

undefined8
FUN_143e223c0(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
             undefined4 *param_5)

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
  FUN_143e221c0(param_1,param_2,local_18,param_3,param_4,param_5);
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    local_38[0] = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_18);
    if ((param_3 & 1) != 0) {
      FUN_143b28750(param_2,local_38,1);
    }
    iVar2 = FUN_143a904f0(param_2);
    if (local_38[0] != iVar2) {
      *param_5 = 1;
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



// FUNCTION 143e224c0 FUN_143e224c0 body=1707 status=ok
// SIG undefined FUN_143e224c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_143e224c0(longlong *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_318 [32];
  undefined8 *local_2f8;
  undefined1 *local_2f0;
  undefined4 *local_2e8;
  int local_2d8;
  undefined4 local_2d4;
  int local_2d0;
  int local_2cc;
  int local_2c8;
  int local_2c4;
  undefined4 local_2c0 [2];
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  int local_2a4;
  int local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined8 *local_288;
  int local_280;
  undefined8 *local_278;
  undefined8 local_270;
  undefined8 *local_268;
  undefined8 local_260;
  code *local_258;
  code *local_250;
  code *local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined1 local_228 [64];
  undefined8 local_1e8;
  undefined8 local_1c8;
  undefined1 local_1c0 [40];
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_1c8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  cVar1 = FUN_143b14e80(param_1);
  if (((cVar1 == '\0') && (cVar1 = FUN_143b14df0(param_1), cVar1 == '\0')) && ((param_2 & 6) != 0))
  {
    local_2b0 = FUN_143a9c510();
    FUN_143b11bb0(local_228,param_1);
    FUN_143a8ac30(local_1c0);
    local_260 = FUN_143b42ef0(local_228);
    local_258 = FUN_143b1a2a0;
    local_250 = FUN_143b1a2c0;
    local_248 = FUN_143e220c0;
    local_240 = 0;
    local_238 = 0;
    if ((param_2 & 2) != 0) {
      FUN_143b09b10(local_1e8);
    }
    local_280 = (**(code **)(*param_1 + 0xc0))(param_1);
    local_2c0[0] = 0;
    for (local_2d0 = 0; local_2d0 < local_280; local_2d0 = local_2d0 + 1) {
      local_2a0 = (**(code **)(*param_1 + 200))(param_1,local_2d0);
      local_2a4 = (**(code **)(*param_1 + 0xd0))(param_1,local_2d0);
      if ((param_2 & 2) == 0) {
        for (local_2d8 = local_2a0; local_2d8 <= local_2a4; local_2d8 = local_2d8 + 1) {
          local_2e8 = local_2c0;
          local_2f0 = &DAT_145af3922;
          local_2f8 = &local_2b8;
          local_2d4 = FUN_143a9d130(local_2b0,local_2d8,0,0);
          FUN_143e22160(local_228,local_2d4,local_2b8,local_1c0);
          local_2e8 = local_2c0;
          local_2f0 = &DAT_145af3922;
          local_2f8 = &local_2b8;
          local_2d4 = FUN_143a9d8d0(local_2b0,local_2d8,0,0);
          FUN_143e22160(local_228,local_2d4,local_2b8,local_1c0);
          local_2e8 = local_2c0;
          local_2f0 = &DAT_145af3922;
          local_2f8 = &local_2b8;
          local_2d4 = FUN_143a9d930(local_2b0,local_2d8,0,0);
          FUN_143e22160(local_228,local_2d4,local_2b8,local_1c0);
          local_2d4 = FUN_143a9cce0(local_2b0,local_2d8,&local_2b8,0);
          FUN_143e22160(local_228,local_2d4);
        }
      }
      else {
        for (local_2c8 = local_2a0; local_2c8 <= local_2a4; local_2c8 = local_2c8 + 1) {
          FUN_143a9b5d0(local_2b0,local_2c8);
        }
      }
    }
    if ((param_1[8] != 0) &&
       (iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(param_1[8]), 0 < iVar2)) {
      if ((param_2 & 2) == 0) {
        local_2f8 = (undefined8 *)0x0;
        FUN_143a8a690(local_198,&DAT_145af3922,0,0);
        local_2a8 = 0;
        local_278 = (undefined8 *)FUN_143a9fdc0(local_198,&local_2a8);
        cVar1 = FUN_143a8b110(local_2a8);
        if (cVar1 != '\0') {
          local_2c4 = 0;
          while (iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                         ::GetIndex(param_1[8]), local_2c4 < iVar2) {
            local_298 = FUN_143b09610(param_1[8],local_2c4);
            uVar3 = FUN_143a8dcd0(local_1c0,local_298);
            FUN_143a941a0(uVar3,local_198);
            FUN_143b134e0(local_228,local_1c0);
            uVar3 = FUN_143a8dcd0(local_1c0,local_298);
            FUN_143e1dc40(uVar3,local_278,local_198);
            FUN_143b134e0(local_228,local_1c0);
            uVar3 = FUN_143a8dcd0(local_1c0,local_298);
            FUN_143a94260(uVar3,local_198);
            FUN_143b134e0(local_228,local_1c0);
            uVar3 = FUN_143a8dcd0(local_1c0,local_298);
            FUN_143aba210(uVar3,0);
            FUN_143b134e0(local_228,local_1c0);
            local_2c4 = local_2c4 + 1;
          }
        }
        local_268 = local_278;
        local_288 = local_278;
        if (local_278 == (undefined8 *)0x0) {
          local_270 = 0;
        }
        else {
          local_270 = (**(code **)*local_278)(local_278,1);
        }
        FUN_143a8acf0(local_198);
      }
      else {
        local_2cc = 0;
        while (iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                       ::GetIndex(param_1[8]), local_2cc < iVar2) {
          uVar3 = FUN_143b09610(param_1[8],local_2cc);
          FUN_143a8dcd0(local_1c0,uVar3);
          FUN_143aba210(local_1c0,0);
          local_290 = FUN_143a904f0(local_1c0);
          uVar3 = FUN_143a8fe10(local_1c0);
          cVar1 = FUN_143a9bd00(local_2b0,uVar3,local_290,&local_260);
          if (cVar1 == '\0') {
            FUN_143b134e0(local_228,local_1c0);
          }
          local_2cc = local_2cc + 1;
        }
      }
    }
    FUN_143b12150(param_1,local_228);
    FUN_143a8dc60(local_1c0);
    FUN_143b11ff0(local_228);
  }
  return param_1;
}



// FUNCTION 143e22b70 FUN_143e22b70 body=58 status=ok
// SIG undefined FUN_143e22b70(void)

int FUN_143e22b70(longlong param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(param_1 + 8) + 1 + (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 2) / 2;
  }
  return iVar1;
}



// FUNCTION 143e22bb0 FUN_143e22bb0 body=468 status=ok
// SIG undefined FUN_143e22bb0(void)

undefined8 FUN_143e22bb0(longlong *param_1,int param_2,uint *param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  if ((((param_1 == (longlong *)0x0) || (param_2 < 0)) || (param_3 == (uint *)0x0)) ||
     (param_4 == (int *)0x0)) {
    uVar4 = 0;
  }
  else {
    lVar2 = *param_1;
    iVar5 = *(int *)((longlong)param_1 + 0xc);
    iVar1 = (int)param_1[1];
    param_2 = param_2 * 2;
    if (param_2 < iVar1) {
      *param_3 = (uint)*(ushort *)(lVar2 + (longlong)param_2 * 2);
      iVar3 = param_2 + 1;
      if (iVar3 < iVar1) {
        *param_4 = *(ushort *)(lVar2 + (longlong)iVar3 * 2) - 1;
      }
      else if (iVar3 < iVar5) {
        *param_4 = CONCAT22(*(undefined2 *)(lVar2 + (longlong)iVar3 * 2),
                            *(undefined2 *)(lVar2 + (longlong)(param_2 + 2) * 2)) + -1;
      }
      else {
        *param_4 = 0x10ffff;
      }
      uVar4 = 1;
    }
    else {
      iVar3 = (param_2 - iVar1) * 2;
      iVar5 = iVar5 - iVar1;
      if (iVar3 < iVar5) {
        lVar2 = lVar2 + (longlong)iVar1 * 2;
        *param_3 = CONCAT22(*(undefined2 *)(lVar2 + (longlong)iVar3 * 2),
                            *(undefined2 *)(lVar2 + (longlong)(iVar3 + 1) * 2));
        if (iVar3 + 2 < iVar5) {
          *param_4 = CONCAT22(*(undefined2 *)(lVar2 + (longlong)(iVar3 + 2) * 2),
                              *(undefined2 *)(lVar2 + (longlong)(iVar3 + 3) * 2)) + -1;
        }
        else {
          *param_4 = 0x10ffff;
        }
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}



// FUNCTION 143e22d90 FUN_143e22d90 body=281 status=ok
// SIG undefined FUN_143e22d90(void)

undefined8 FUN_143e22d90(undefined8 *param_1,ushort *param_2,int param_3)

{
  undefined8 uVar1;
  ushort *local_res10;
  uint local_18;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else if ((param_2 == (ushort *)0x0) || (param_3 < 1)) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    uVar1 = 0;
  }
  else {
    local_18 = (uint)*param_2;
    local_res10 = param_2 + 1;
    if ((*param_2 & 0x8000) == 0) {
      if (param_3 < (int)(local_18 + 1)) {
        *(undefined4 *)(param_1 + 1) = 0;
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
        return 0;
      }
      *(uint *)(param_1 + 1) = local_18;
    }
    else {
      local_18 = local_18 & 0x7fff;
      if (param_3 < (int)(local_18 + 2)) {
        *(undefined4 *)(param_1 + 1) = 0;
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
        return 0;
      }
      *(uint *)(param_1 + 1) = (uint)*local_res10;
      local_res10 = param_2 + 2;
    }
    *param_1 = local_res10;
    *(uint *)((longlong)param_1 + 0xc) = local_18;
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143e22eb0 FUN_143e22eb0 body=300 status=ok
// SIG undefined FUN_143e22eb0(void)

undefined8 *
FUN_143e22eb0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_20;
  
  *param_1 = param_2;
  param_1[1] = *param_1;
  param_1[2] = *param_1;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_143a8ac30(param_1 + 5);
  *(undefined4 *)(param_1 + 10) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    lVar2 = FUN_143a8d310(0x20);
    if (lVar2 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_143e1c860(lVar2,param_4);
    }
    param_1[0xb] = local_20;
    if (param_1[0xb] == 0) {
      *param_4 = 7;
    }
  }
  return param_1;
}



// FUNCTION 143e22fe0 FUN_143e22fe0 body=110 status=ok
// SIG undefined FUN_143e22fe0(void)

void FUN_143e22fe0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x58);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143a8dc60(param_1 + 0x28);
  return;
}



// FUNCTION 143e23050 FUN_143e23050 body=477 status=ok
// SIG undefined FUN_143e23050(void)

longlong FUN_143e23050(longlong *param_1,undefined2 *param_2,int param_3,undefined8 param_4)

{
  undefined2 uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *local_res10;
  int local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  while (5 < local_res18) {
    lVar5 = FUN_143b32090(local_res10 + 1);
    FUN_143b58ed0(param_1[0xb],lVar5 - *param_1 >> 1 & 0xffffffff,param_4);
    uVar3 = FUN_143a904f0(param_1 + 5);
    FUN_143b58ed0(param_1[0xb],(local_res18 - (local_res18 >> 1)) * 0x10000 | uVar3,param_4);
    local_res10 = (undefined2 *)FUN_143b31d10(local_res10 + 1);
    local_res18 = local_res18 >> 1;
  }
  uVar1 = *local_res10;
  uVar2 = local_res10[1];
  uVar3 = uVar2 & 0x7fff;
  iVar4 = FUN_143b1e310(local_res10 + 2,uVar3);
  lVar5 = FUN_143b32180(local_res10 + 2,uVar3);
  FUN_143b58ed0(param_1[0xb],lVar5 - *param_1 >> 1 & 0xffffffff,param_4);
  uVar3 = FUN_143a904f0(param_1 + 5);
  FUN_143b58ed0(param_1[0xb],(local_res18 + -1) * 0x10000 | uVar3,param_4);
  FUN_143acc590(param_1 + 5,uVar1);
  if ((char)((int)(uint)uVar2 >> 0xf) == '\0') {
    lVar5 = lVar5 + (longlong)iVar4 * 2;
  }
  else {
    param_1[1] = 0;
    *(int *)((longlong)param_1 + 0x54) = iVar4;
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 143e23230 FUN_143e23230 body=950 status=ok
// SIG undefined FUN_143e23230(void)

undefined8 FUN_143e23230(longlong *param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ushort *puVar8;
  uint local_24;
  ushort *local_10;
  
  cVar2 = FUN_143a8b0e0(*param_2);
  if (cVar2 == '\0') {
    local_10 = (ushort *)param_1[1];
    if (local_10 == (ushort *)0x0) {
      cVar2 = FUN_143b14e10(param_1[0xb]);
      if (cVar2 != '\0') {
        return 0;
      }
      iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(param_1[0xb]);
      uVar4 = FUN_143b59890(param_1[0xb],iVar3 + -1);
      iVar5 = FUN_143b59890(param_1[0xb],iVar3 + -2);
      puVar1 = (undefined2 *)(*param_1 + (longlong)iVar5 * 2);
      FUN_143e1cdd0(param_1[0xb],iVar3 + -2);
      FUN_143a99400(param_1 + 5,uVar4 & 0xffff);
      if (uVar4 >> 0x10 < 2) {
        FUN_143acc590(param_1 + 5,*puVar1);
        local_10 = puVar1 + 1;
      }
      else {
        local_10 = (ushort *)FUN_143e23050(param_1,puVar1,uVar4 >> 0x10,param_2);
        if (local_10 == (ushort *)0x0) {
          return 1;
        }
      }
    }
    if ((int)param_1[3] < 0) {
      do {
        while( true ) {
          local_24 = (uint)*local_10;
          puVar8 = local_10 + 1;
          if (0x3f < local_24) {
            if ((char)param_1[4] == '\0') {
              if ((char)((int)local_24 >> 0xf) == '\0') {
                uVar6 = FUN_143b1e280(puVar8,local_24);
                *(undefined4 *)((longlong)param_1 + 0x54) = uVar6;
                if (((int)param_1[10] < 1) ||
                   (iVar3 = FUN_143a904f0(param_1 + 5), iVar3 != (int)param_1[10])) {
                  param_1[1] = (longlong)local_10;
                  *(undefined1 *)(param_1 + 4) = 1;
                  return 1;
                }
              }
              else {
                uVar6 = FUN_143b1e310(puVar8,local_24 & 0x7fff);
                *(undefined4 *)((longlong)param_1 + 0x54) = uVar6;
              }
              param_1[1] = 0;
              return 1;
            }
            puVar8 = (ushort *)FUN_143b320f0(puVar8,local_24);
            local_24 = local_24 & 0x3f;
            *(undefined1 *)(param_1 + 4) = 0;
          }
          local_10 = puVar8;
          if ((0 < (int)param_1[10]) &&
             (iVar3 = FUN_143a904f0(param_1 + 5), iVar3 == (int)param_1[10])) {
            uVar7 = FUN_143e235f0(param_1);
            return uVar7;
          }
          if (local_24 < 0x30) break;
          iVar3 = local_24 - 0x2f;
          if ((0 < (int)param_1[10]) &&
             (iVar5 = FUN_143a904f0(param_1 + 5), (int)param_1[10] < iVar5 + iVar3)) {
            iVar3 = FUN_143a904f0(param_1 + 5);
            FUN_143b17350(param_1 + 5,local_10,(int)param_1[10] - iVar3);
            uVar7 = FUN_143e235f0(param_1);
            return uVar7;
          }
          FUN_143b17350(param_1 + 5,local_10,iVar3);
          local_10 = local_10 + iVar3;
        }
        if (local_24 == 0) {
          local_24 = (uint)*local_10;
          local_10 = local_10 + 1;
        }
        local_10 = (ushort *)FUN_143e23050(param_1,local_10,local_24 + 1,param_2);
      } while (local_10 != (ushort *)0x0);
      uVar7 = 1;
    }
    else {
      uVar7 = FUN_143e235f0(param_1);
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 143e235f0 FUN_143e235f0 body=33 status=ok
// SIG undefined FUN_143e235f0(void)

undefined8 FUN_143e235f0(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  return 1;
}



// FUNCTION 143e23620 FUN_143e23620 body=276 status=ok
// SIG undefined FUN_143e23620(void)

undefined8 * FUN_143e23620(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::CanonicalIterator::vftable;
  FUN_143a8ac30(param_1 + 1);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_143a8ac30(param_1 + 0xc);
  uVar2 = FUN_143b1f2c0(param_3);
  param_1[0x11] = uVar2;
  uVar2 = FUN_143b1f1c0(param_3);
  param_1[0x12] = uVar2;
  cVar1 = FUN_143a8b110(*param_3);
  if (cVar1 != '\0') {
    cVar1 = FUN_143b23c50(param_1[0x12],param_3);
    if (cVar1 != '\0') {
      FUN_143e25130(param_1,param_2,param_3);
    }
  }
  return param_1;
}



// FUNCTION 143e23740 ~CSettingsStore body=96 status=ok
// SIG void ~CSettingsStore(CSettingsStore * this)

/* Library Function - Single Match
    public: virtual __cdecl CSettingsStore::~CSettingsStore(void) __ptr64
   
   Library: Visual Studio 2010 Debug */

void __thiscall CSettingsStore::~CSettingsStore(CSettingsStore *this)

{
  *(undefined ***)this = icu_53::CanonicalIterator::vftable;
  FUN_143e237e0(this);
  FUN_143a8dc60(this + 0x60);
  FUN_143a8dc60(this + 8);
  RtAudioError::~RtAudioError(this);
  return;
}



// FUNCTION 143e237a0 `scalar_deleting_destructor' body=54 status=ok
// SIG void * `scalar_deleting_destructor'(CSettingsStore * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl CSettingsStore::`scalar deleting destructor'(unsigned
   int) __ptr64
   
   Library: Visual Studio 2010 Debug */

void * __thiscall CSettingsStore::_scalar_deleting_destructor_(CSettingsStore *this,uint param_1)

{
  ~CSettingsStore(this);
  if ((param_1 & 1) != 0) {
    FUN_143a8d330(this);
  }
  return this;
}



// FUNCTION 143e237e0 FUN_143e237e0 body=372 status=ok
// SIG undefined FUN_143e237e0(void)

void FUN_143e237e0(longlong param_1)

{
  undefined8 *puVar1;
  int local_38;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    for (local_38 = 0; local_38 < *(int *)(param_1 + 0x40); local_38 = local_38 + 1) {
      if ((*(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)local_38 * 8) != 0) &&
         (puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x38) + (longlong)local_38 * 8),
         puVar1 != (undefined8 *)0x0)) {
        if (puVar1[-1] == 0) {
          FMemory::operator_delete(puVar1 + -1);
        }
        else {
          (**(code **)*puVar1)(puVar1,3);
        }
      }
    }
    FUN_143aa79f0(*(undefined8 *)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_143aa79f0(*(undefined8 *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_143aa79f0(*(undefined8 *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}



// FUNCTION 143e23960 FUN_143e23960 body=27 status=ok
// SIG undefined FUN_143e23960(void)

void FUN_143e23960(undefined8 *param_1)

{
  FUN_143ab3100(*param_1);
  return;
}



// FUNCTION 143e23980 FUN_143e23980 body=1439 status=ok
// SIG undefined FUN_143e23980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143e23980(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4,int param_5,
             int param_6,undefined4 *param_7)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_168 [32];
  undefined4 *local_148;
  int local_138;
  char local_134;
  int local_130;
  uint local_12c;
  uint local_128;
  ushort local_124;
  ushort local_120;
  ushort local_11c;
  int local_118;
  int local_114;
  ushort *local_110;
  int local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [40];
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_b8 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  cVar1 = FUN_143a8b0e0(*param_7);
  if (cVar1 == '\0') {
    FUN_143a8d5f0(local_b0,param_3);
    local_114 = FUN_143a904f0(local_b0);
    FUN_143a8ac30(local_88);
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))
              (*(undefined8 *)(param_1 + 0x88),local_b0,local_88,param_7);
    local_110 = (ushort *)FUN_143a8fe10(local_88);
    local_118 = FUN_143a904f0(local_88);
    local_134 = '\0';
    local_12c = (uint)*local_110;
    local_138 = 1;
    iVar2 = 1;
    if ((((local_12c & 0xfffffc00) == 0xd800) && (iVar2 = local_138, local_118 != 1)) &&
       (local_124 = local_110[1], (local_124 & 0xfc00) == 0xdc00)) {
      local_12c = local_12c * 0x400 + -0x35fdc00 + (uint)local_124;
      iVar2 = 2;
    }
    local_138 = iVar2;
    local_130 = param_6;
    iVar2 = local_138;
    while (local_138 = iVar2, local_130 < param_5) {
      local_128 = (uint)*(ushort *)(param_4 + (longlong)local_130 * 2);
      iVar2 = local_130 + 1;
      if ((((local_128 & 0xfffffc00) == 0xd800) && (iVar2 != param_5)) &&
         (local_120 = *(ushort *)(param_4 + (longlong)iVar2 * 2), (local_120 & 0xfc00) == 0xdc00)) {
        local_128 = local_128 * 0x400 + -0x35fdc00 + (uint)local_120;
        iVar2 = local_130 + 2;
      }
      local_130 = iVar2;
      if (local_128 == local_12c) {
        if (local_138 == local_118) {
          FUN_143b17350(local_b0,param_4 + (longlong)local_130 * 2,param_5 - local_130);
          local_134 = '\x01';
          break;
        }
        local_12c = (uint)local_110[local_138];
        iVar2 = local_138 + 1;
        if ((((local_12c & 0xfffffc00) == 0xd800) && (iVar2 != local_118)) &&
           (local_11c = local_110[iVar2], (local_11c & 0xfc00) == 0xdc00)) {
          local_12c = local_12c * 0x400 + -0x35fdc00 + (uint)local_11c;
          iVar2 = local_138 + 2;
        }
      }
      else {
        FUN_143a8e0c0(local_b0,local_128);
        iVar2 = local_138;
      }
    }
    if (local_134 == '\0') {
      local_d0 = 0;
      FUN_143a8dc60(local_88);
      FUN_143a8dc60(local_b0);
    }
    else {
      iVar2 = FUN_143a904f0(local_b0);
      if (local_114 == iVar2) {
        local_100 = FUN_143a8d310(0x28);
        if (local_100 == 0) {
          local_f8 = 0;
        }
        else {
          local_f8 = FUN_143a8ac30(local_100);
        }
        local_c0 = local_f8;
        local_e0 = FUN_143a8ac30(local_38);
        local_c8 = local_e0;
        FUN_143acdfd0(param_2,local_e0,local_c0,param_7);
        FUN_143a8dc60(local_38);
        local_d8 = param_2;
        FUN_143a8dc60(local_88);
        FUN_143a8dc60(local_b0);
        local_d0 = local_d8;
      }
      else {
        FUN_143a8ac30(local_60);
        (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))
                  (*(undefined8 *)(param_1 + 0x88),local_b0,local_60,param_7);
        cVar1 = FUN_143a8b0e0(*param_7);
        if ((cVar1 == '\0') &&
           (cVar1 = FUN_143b0fc90(local_60,param_4 + (longlong)param_6 * 2,param_5 - param_6),
           cVar1 == '\0')) {
          local_108 = FUN_143a904f0(local_b0);
          local_108 = local_108 - local_114;
          lVar3 = FUN_143a8fe10(local_b0);
          local_148 = param_7;
          local_e8 = FUN_143e23f40(param_1,param_2,lVar3 + (longlong)local_114 * 2,local_108);
          FUN_143a8dc60(local_60);
          FUN_143a8dc60(local_88);
          FUN_143a8dc60(local_b0);
          local_d0 = local_e8;
        }
        else {
          local_f0 = 0;
          FUN_143a8dc60(local_60);
          FUN_143a8dc60(local_88);
          FUN_143a8dc60(local_b0);
          local_d0 = local_f0;
        }
      }
    }
  }
  else {
    local_d0 = 0;
  }
  return local_d0;
}



// FUNCTION 143e23f20 FUN_143e23f20 body=19 status=ok
// SIG undefined FUN_143e23f20(void)

void FUN_143e23f20(void)

{
  FUN_143e24b00();
  return;
}



// FUNCTION 143e23f40 FUN_143e23f40 body=1372 status=ok
// SIG undefined FUN_143e23f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143e23f40(longlong param_1,undefined8 param_2,longlong param_3,int param_4,undefined4 *param_5)

{
  ushort uVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_248 [32];
  int local_228;
  int local_220;
  undefined4 *local_218;
  ushort local_208;
  int local_204;
  uint local_200;
  int local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_188 [96];
  undefined1 local_128 [64];
  undefined1 local_e8 [96];
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_198 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  cVar2 = FUN_143a8b0e0(*param_5);
  if (cVar2 == '\0') {
    FUN_143a8db50(local_88,param_3,param_4);
    local_1c8 = FUN_143a8d310(0x28);
    if (local_1c8 == 0) {
      local_1d0 = 0;
    }
    else {
      local_1d0 = FUN_143a8d3a0(local_1c8,local_88);
    }
    local_1b8 = local_1d0;
    FUN_143acdfd0(param_2,local_88,local_1d0,param_5);
    FUN_143b11ea0(local_e8);
    for (local_204 = 0; local_204 < param_4; local_204 = local_204 + local_1fc) {
      uVar1 = *(ushort *)(param_3 + (longlong)local_204 * 2);
      local_200 = (uint)uVar1;
      if ((local_200 & 0xfffff800) == 0xd800) {
        if ((uVar1 & 0x400) == 0) {
          if ((local_204 + 1 != param_4) &&
             (local_208 = *(ushort *)(param_3 + (longlong)(local_204 + 1) * 2),
             (local_208 & 0xfc00) == 0xdc00)) {
            local_200 = local_200 * 0x400 + -0x35fdc00 + (uint)local_208;
          }
        }
        else if ((0 < local_204) &&
                (local_208 = *(ushort *)(param_3 + (longlong)(local_204 + -1) * 2),
                (local_208 & 0xfc00) == 0xd800)) {
          local_200 = (uint)local_208 * 0x400 + -0x35fdc00 + local_200;
        }
      }
      cVar2 = FUN_143b23f10(*(undefined8 *)(param_1 + 0x90),local_200,local_e8);
      if (cVar2 != '\0') {
        FUN_143e1d760(local_128,local_e8);
        while (cVar2 = FUN_143e1d9e0(local_128), cVar2 != '\0') {
          local_1f4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                      ::GetIndex(local_128);
          FUN_143acbcf0(local_188,param_5);
          <lambda_04c79fd4136733a528ca0b360569665b>::operator()(local_188,FUN_143a8d350);
          local_218 = param_5;
          local_220 = local_204;
          local_228 = param_4;
          lVar3 = FUN_143e23980(param_1,local_188,local_1f4,param_3);
          if (lVar3 == 0) {
            FUN_143acc070(local_188);
          }
          else {
            FUN_143a8db50(local_60,param_3,local_204);
            FUN_143b3ba10(local_60,local_1f4);
            local_1f8 = 0xffffffff;
            local_1e8 = <lambda_04c79fd4136733a528ca0b360569665b>::operator()(local_188,&local_1f8);
            while (local_1e8 != 0) {
              FUN_143a8d3a0(local_38,*(undefined8 *)(local_1e8 + 8));
              local_1d8 = FUN_143a8d310(0x28);
              if (local_1d8 == 0) {
                local_1e0 = 0;
              }
              else {
                local_1e0 = FUN_143a8d3a0(local_1d8,local_60);
              }
              local_1a8 = local_1e0;
              local_1f0 = local_1e0;
              if (local_1e0 == 0) {
                *param_5 = 7;
                local_1a0 = 0;
                FUN_143a8dc60(local_38);
                FUN_143a8dc60(local_60);
                FUN_143acc070(local_188);
                FUN_143e1d7c0(local_128);
                FUN_143b11ff0(local_e8);
                FUN_143a8dc60(local_88);
                return local_1a0;
              }
              FUN_143a8e070(local_1e0,local_38);
              FUN_143acdfd0(param_2,local_1f0,local_1f0,param_5);
              local_1e8 = <lambda_04c79fd4136733a528ca0b360569665b>::operator()
                                    (local_188,&local_1f8);
              FUN_143a8dc60(local_38);
            }
            FUN_143a8dc60(local_60);
            FUN_143acc070(local_188);
          }
        }
        FUN_143e1d7c0(local_128);
      }
      if (local_200 < 0x10000) {
        local_1fc = 1;
      }
      else {
        local_1fc = 2;
      }
    }
    cVar2 = FUN_143a8b0e0(*param_5);
    if (cVar2 == '\0') {
      local_1c0 = param_2;
      FUN_143b11ff0(local_e8);
      FUN_143a8dc60(local_88);
      local_1b0 = local_1c0;
    }
    else {
      local_1b0 = 0;
      FUN_143b11ff0(local_e8);
      FUN_143a8dc60(local_88);
    }
  }
  else {
    local_1b0 = 0;
  }
  return local_1b0;
}



// FUNCTION 143e244a0 FUN_143e244a0 body=1623 status=ok
// SIG undefined FUN_143e244a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong * FUN_143e244a0(longlong param_1,undefined8 param_2,int *param_3,code *param_4)

{
  undefined1 auVar1 [16];
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_498 [32];
  code *local_478;
  undefined4 local_468 [2];
  longlong local_460;
  undefined4 local_458;
  int local_454;
  ulonglong local_450;
  ulonglong *local_448;
  ulonglong *local_440;
  longlong local_438;
  undefined4 local_430;
  longlong local_428;
  ulonglong *local_420;
  undefined8 local_418;
  ulonglong *local_410;
  undefined8 local_408;
  ulonglong *local_400;
  ulonglong *local_3f8;
  ulonglong *local_3f0;
  ulonglong *local_3e8;
  ulonglong *local_3e0;
  ulonglong *local_3d8;
  ulonglong *local_3d0;
  undefined8 local_3c8;
  undefined1 local_3b8 [96];
  undefined1 local_358 [96];
  undefined1 local_2f8 [96];
  undefined1 local_298 [40];
  undefined1 local_270 [40];
  undefined1 local_248 [48];
  undefined1 local_218 [512];
  ulonglong local_18;
  
  local_3c8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_498;
  FUN_143acbcf0(local_358,param_4);
  FUN_143acbcf0(local_3b8,param_4);
  FUN_143acbcf0(local_2f8,param_4);
  cVar2 = FUN_143a8b0e0(*(undefined4 *)param_4);
  if (cVar2 == '\0') {
    <lambda_04c79fd4136733a528ca0b360569665b>::operator()(local_358,FUN_143a8d350);
    <lambda_04c79fd4136733a528ca0b360569665b>::operator()(local_3b8,FUN_143a8d350);
    <lambda_04c79fd4136733a528ca0b360569665b>::operator()(local_2f8,FUN_143a8d350);
    local_430 = FUN_143a8f920(param_2,local_218,0x100,param_4);
    local_478 = param_4;
    FUN_143e23f40(param_1,local_2f8,local_218,local_430);
    local_460 = 0;
    local_468[0] = 0xffffffff;
    local_460 = <lambda_04c79fd4136733a528ca0b360569665b>::operator()(local_2f8,local_468);
    while (local_460 != 0) {
      FUN_143a8d3a0(local_248,*(undefined8 *)(local_460 + 8));
      FUN_143e250c0(local_3b8);
      FUN_143e24cb0(local_248,1,local_3b8,param_4);
      local_438 = 0;
      local_458 = 0xffffffff;
      local_438 = <lambda_04c79fd4136733a528ca0b360569665b>::operator()(local_3b8,&local_458);
      while (local_438 != 0) {
        FUN_143a8d3a0(local_298,*(undefined8 *)(local_438 + 8));
        FUN_143a8ac30(local_270);
        (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))
                  (*(undefined8 *)(param_1 + 0x88),local_298,local_270,param_4);
        cVar2 = FUN_143a8dd00(local_270,param_2);
        if (cVar2 != '\0') {
          local_428 = FUN_143a8d310(0x28);
          if (local_428 == 0) {
            local_418 = 0;
          }
          else {
            local_418 = FUN_143a8d3a0(local_428,local_298);
          }
          local_408 = local_418;
          FUN_143acdfd0(local_358,local_298,local_418,param_4);
        }
        local_438 = <lambda_04c79fd4136733a528ca0b360569665b>::operator()(local_3b8,&local_458);
        FUN_143a8dc60(local_270);
        FUN_143a8dc60(local_298);
      }
      local_460 = <lambda_04c79fd4136733a528ca0b360569665b>::operator()(local_2f8,local_468);
      FUN_143a8dc60(local_248);
    }
    cVar2 = FUN_143a8b0e0(*(undefined4 *)param_4);
    if (cVar2 == '\0') {
      local_448 = (ulonglong *)0x0;
      local_454 = FUN_143e23960(local_358);
      if (local_454 == 0) {
        *(undefined4 *)param_4 = 1;
        local_3f0 = (ulonglong *)0x0;
        FUN_143acc070(local_2f8);
        FUN_143acc070(local_3b8);
        FUN_143acc070(local_358);
        local_3f8 = local_3f0;
      }
      else {
        local_450 = (ulonglong)local_454;
        if (local_450 == 0) {
          local_420 = (ulonglong *)operator_new(8);
        }
        else {
          auVar1._8_8_ = 0;
          auVar1._0_8_ = local_450;
          uVar3 = SUB168(ZEXT816(0x28) * auVar1,0);
          if (SUB168(ZEXT816(0x28) * auVar1,8) != 0) {
            uVar3 = 0xffffffffffffffff;
          }
          lVar4 = uVar3 + 8;
          if (0xfffffffffffffff7 < uVar3) {
            lVar4 = -1;
          }
          local_420 = (ulonglong *)FUN_143a8d310(lVar4);
        }
        local_440 = local_420;
        if (local_420 == (ulonglong *)0x0) {
          local_410 = (ulonglong *)0x0;
        }
        else {
          *local_420 = local_450;
          local_478 = FUN_143a8dc60;
          _eh_vector_constructor_iterator_(local_420 + 1,0x28,local_450,FUN_143a8ac30);
          local_410 = local_440 + 1;
        }
        local_3e8 = local_410;
        local_448 = local_410;
        if (local_410 == (ulonglong *)0x0) {
          *(undefined4 *)param_4 = 7;
          local_400 = (ulonglong *)0x0;
          FUN_143acc070(local_2f8);
          FUN_143acc070(local_3b8);
          FUN_143acc070(local_358);
          local_3f8 = local_400;
        }
        else {
          *param_3 = 0;
          local_468[0] = 0xffffffff;
          local_460 = <lambda_04c79fd4136733a528ca0b360569665b>::operator()(local_358,local_468);
          while (local_460 != 0) {
            local_3e0 = local_448 + (longlong)*param_3 * 5;
            *param_3 = *param_3 + 1;
            FUN_143a8dcd0(local_3e0,*(undefined8 *)(local_460 + 8));
            local_460 = <lambda_04c79fd4136733a528ca0b360569665b>::operator()(local_358,local_468);
          }
          local_3d0 = local_448;
          FUN_143acc070(local_2f8);
          FUN_143acc070(local_3b8);
          FUN_143acc070(local_358);
          local_3f8 = local_3d0;
        }
      }
    }
    else {
      local_3d8 = (ulonglong *)0x0;
      FUN_143acc070(local_2f8);
      FUN_143acc070(local_3b8);
      FUN_143acc070(local_358);
      local_3f8 = local_3d8;
    }
  }
  else {
    local_3f8 = (ulonglong *)0x0;
    FUN_143acc070(local_2f8);
    FUN_143acc070(local_3b8);
    FUN_143acc070(local_358);
  }
  return local_3f8;
}



// FUNCTION 143e24b00 FUN_143e24b00 body=8 status=ok
// SIG undefined FUN_143e24b00(void)

undefined * FUN_143e24b00(void)

{
  return &DAT_146bcd1e3;
}



// FUNCTION 143e24b10 FUN_143e24b10 body=401 status=ok
// SIG undefined FUN_143e24b10(void)

undefined8 FUN_143e24b10(longlong param_1,undefined8 param_2)

{
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    FUN_143a90910(param_1 + 0x60);
    for (local_18 = 0; local_18 < *(int *)(param_1 + 0x40); local_18 = local_18 + 1) {
      FUN_143a8e070(param_1 + 0x60,
                    (longlong)*(int *)(*(longlong *)(param_1 + 0x50) + (longlong)local_18 * 4) *
                    0x28 + *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)local_18 * 8));
    }
    local_18 = *(int *)(param_1 + 0x58);
    while (local_18 = local_18 + -1, -1 < local_18) {
      *(int *)(*(longlong *)(param_1 + 0x50) + (longlong)local_18 * 4) =
           *(int *)(*(longlong *)(param_1 + 0x50) + (longlong)local_18 * 4) + 1;
      if (*(int *)(*(longlong *)(param_1 + 0x50) + (longlong)local_18 * 4) <
          *(int *)(*(longlong *)(param_1 + 0x48) + (longlong)local_18 * 4)) goto LAB_143e24c76;
      *(undefined4 *)(*(longlong *)(param_1 + 0x50) + (longlong)local_18 * 4) = 0;
    }
    *(undefined1 *)(param_1 + 0x30) = 1;
LAB_143e24c76:
    FUN_143a8d3a0(param_2,param_1 + 0x60);
  }
  else {
    FUN_143a90e90(param_1 + 0x60);
    FUN_143a8d3a0(param_2,param_1 + 0x60);
  }
  return param_2;
}



// FUNCTION 143e24cb0 FUN_143e24cb0 body=1038 status=ok
// SIG undefined FUN_143e24cb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143e24cb0(undefined8 param_1,char param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  int local_108;
  uint local_104;
  undefined4 local_100;
  undefined4 local_fc;
  int local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [96];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_a0 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    local_108 = 0;
    iVar2 = FUN_143a904f0(param_1);
    if ((iVar2 < 3) && (iVar2 = FUN_143a8eb50(param_1,0,0x7fffffff), iVar2 < 2)) {
      local_c8 = FUN_143a8d310(0x28);
      if (local_c8 == 0) {
        local_e0 = 0;
      }
      else {
        local_e0 = FUN_143a8d3a0(local_c8,param_1);
      }
      local_b8 = local_e0;
      local_d8 = local_e0;
      if (local_e0 == 0) {
        *param_4 = 7;
      }
      else {
        FUN_143acdfd0(param_3,param_1,local_e0,param_4);
      }
    }
    else {
      FUN_143acbcf0(local_98,param_4);
      cVar1 = FUN_143a8b0e0(*param_4);
      if (cVar1 == '\0') {
        <lambda_04c79fd4136733a528ca0b360569665b>::operator()(local_98,FUN_143a8d350);
        local_108 = 0;
        while (iVar2 = FUN_143a904f0(param_1), local_108 < iVar2) {
          local_104 = FUN_143a8e3e0(param_1,local_108);
          local_e8 = 0;
          local_fc = 0xffffffff;
          FUN_143a8d3a0(local_38,param_1);
          if (((param_2 == '\0') || (local_108 == 0)) ||
             (cVar1 = FUN_143b20830(local_104), cVar1 != '\0')) {
            FUN_143e250c0(local_98);
            if (local_104 < 0x10000) {
              local_100 = 1;
            }
            else {
              local_100 = 2;
            }
            local_118 = 0;
            uVar3 = FUN_143b07020(local_38,local_108,local_100,0);
            FUN_143e24cb0(uVar3,param_2,local_98);
            cVar1 = FUN_143a8b0e0(*param_4);
            if (cVar1 != '\0') {
              FUN_143a8dc60(local_38);
              FUN_143acc070(local_98);
              return;
            }
            local_e8 = <lambda_04c79fd4136733a528ca0b360569665b>::operator()(local_98,&local_fc);
            while (local_e8 != 0) {
              local_a8 = *(undefined8 *)(local_e8 + 8);
              local_d0 = FUN_143a8d310(0x28);
              if (local_d0 == 0) {
                local_c0 = 0;
              }
              else {
                local_c0 = FUN_143a8d5f0(local_d0,local_104);
              }
              local_b0 = local_c0;
              local_f0 = local_c0;
              if (local_c0 == 0) {
                *param_4 = 7;
                FUN_143a8dc60(local_38);
                FUN_143acc070(local_98);
                return;
              }
              FUN_143a8e070(local_c0,local_a8);
              FUN_143acdfd0(param_3,local_f0,local_f0);
              local_e8 = <lambda_04c79fd4136733a528ca0b360569665b>::operator()(local_98,&local_fc);
            }
            FUN_143a8dc60(local_38);
          }
          else {
            FUN_143a8dc60(local_38);
          }
          if (local_104 < 0x10000) {
            local_f8 = 1;
          }
          else {
            local_f8 = 2;
          }
          local_108 = local_108 + local_f8;
        }
        FUN_143acc070(local_98);
      }
      else {
        FUN_143acc070(local_98);
      }
    }
  }
  return;
}



// FUNCTION 143e250c0 FUN_143e250c0 body=27 status=ok
// SIG undefined FUN_143e250c0(void)

void FUN_143e250c0(undefined8 *param_1)

{
  FUN_143ab3790(*param_1);
  return;
}



// FUNCTION 143e250e0 FUN_143e250e0 body=75 status=ok
// SIG undefined FUN_143e250e0(void)

void FUN_143e250e0(longlong param_1)

{
  undefined4 local_18;
  
  *(undefined1 *)(param_1 + 0x30) = 0;
  for (local_18 = 0; local_18 < *(int *)(param_1 + 0x58); local_18 = local_18 + 1) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x50) + (longlong)local_18 * 4) = 0;
  }
  return;
}



// FUNCTION 143e25130 FUN_143e25130 body=2039 status=ok
// SIG undefined FUN_143e25130(void)

void FUN_143e25130(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int local_e8;
  int local_e4;
  int local_e0;
  ulonglong *local_d8;
  int local_cc;
  int local_c8;
  undefined8 *local_88;
  ulonglong *local_80;
  ulonglong *local_70;
  
  local_e4 = 0;
  local_e0 = 0;
  local_d8 = (ulonglong *)0x0;
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))
            (*(undefined8 *)(param_1 + 0x88),param_2,param_1 + 8,param_3);
  cVar2 = FUN_143a8b0e0(*param_3);
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x30) = 0;
    FUN_143e237e0(param_1);
    iVar3 = FUN_143a904f0(param_2);
    if (iVar3 == 0) {
      uVar5 = FUN_143aa7a40(8);
      *(undefined8 *)(param_1 + 0x38) = uVar5;
      uVar5 = FUN_143aa7a40(4);
      *(undefined8 *)(param_1 + 0x48) = uVar5;
      *(undefined4 *)(param_1 + 0x40) = 1;
      uVar5 = FUN_143aa7a40(4);
      *(undefined8 *)(param_1 + 0x50) = uVar5;
      *(undefined4 *)(param_1 + 0x58) = 1;
      if (((*(longlong *)(param_1 + 0x38) == 0) || (*(longlong *)(param_1 + 0x48) == 0)) ||
         (*(longlong *)(param_1 + 0x50) == 0)) {
        *param_3 = 7;
      }
      else {
        **(undefined4 **)(param_1 + 0x50) = 0;
        local_88 = (undefined8 *)FUN_143a8d310(0x30);
        if (local_88 == (undefined8 *)0x0) {
          local_88 = (undefined8 *)0x0;
        }
        else {
          *local_88 = 1;
          _eh_vector_constructor_iterator_(local_88 + 1,0x28,1,FUN_143a8ac30,FUN_143a8dc60);
          local_88 = local_88 + 1;
        }
        **(undefined8 **)(param_1 + 0x38) = local_88;
        **(undefined4 **)(param_1 + 0x48) = 1;
        if (**(longlong **)(param_1 + 0x38) != 0) {
          return;
        }
        *param_3 = 7;
      }
    }
    else {
      iVar3 = FUN_143a904f0(param_1 + 8);
      uVar6 = (ulonglong)iVar3;
      if (uVar6 == 0) {
        local_70 = (ulonglong *)operator_new(8);
      }
      else {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar6;
        uVar7 = SUB168(ZEXT816(0x28) * auVar1,0);
        if (SUB168(ZEXT816(0x28) * auVar1,8) != 0) {
          uVar7 = 0xffffffffffffffff;
        }
        lVar8 = uVar7 + 8;
        if (0xfffffffffffffff7 < uVar7) {
          lVar8 = -1;
        }
        local_70 = (ulonglong *)FUN_143a8d310(lVar8);
      }
      if (local_70 == (ulonglong *)0x0) {
        local_80 = (ulonglong *)0x0;
      }
      else {
        *local_70 = uVar6;
        _eh_vector_constructor_iterator_(local_70 + 1,0x28,uVar6,FUN_143a8ac30,FUN_143a8dc60);
        local_80 = local_70 + 1;
      }
      local_d8 = local_80;
      if (local_80 == (ulonglong *)0x0) {
        *param_3 = 7;
      }
      else {
        uVar4 = FUN_143a8e3e0(param_1 + 8,0);
        if (uVar4 < 0x10000) {
          local_c8 = 1;
        }
        else {
          local_c8 = 2;
        }
        for (local_e8 = local_c8; iVar3 = FUN_143a904f0(param_1 + 8), local_e8 < iVar3;
            local_e8 = local_e8 + local_cc) {
          uVar4 = FUN_143a8e3e0(param_1 + 8,local_e8);
          cVar2 = FUN_143b25160(*(undefined8 *)(param_1 + 0x90),uVar4);
          if (cVar2 != '\0') {
            CFormView::accHitTest
                      ((CFormView *)(param_1 + 8),local_e0,local_e8 - local_e0,
                       (tagVARIANT *)(local_80 + (longlong)local_e4 * 5));
            local_e4 = local_e4 + 1;
            local_e0 = local_e8;
          }
          if (uVar4 < 0x10000) {
            local_cc = 1;
          }
          else {
            local_cc = 2;
          }
        }
        CFormView::accHitTest
                  ((CFormView *)(param_1 + 8),local_e0,local_e8 - local_e0,
                   (tagVARIANT *)(local_80 + (longlong)local_e4 * 5));
        local_e4 = local_e4 + 1;
        uVar5 = FUN_143aa7a40((longlong)local_e4 << 3);
        *(undefined8 *)(param_1 + 0x38) = uVar5;
        *(int *)(param_1 + 0x40) = local_e4;
        uVar5 = FUN_143aa7a40((longlong)local_e4 << 2);
        *(undefined8 *)(param_1 + 0x48) = uVar5;
        uVar5 = FUN_143aa7a40((longlong)local_e4 << 2);
        *(undefined8 *)(param_1 + 0x50) = uVar5;
        *(int *)(param_1 + 0x58) = local_e4;
        if (((*(longlong *)(param_1 + 0x38) != 0) && (*(longlong *)(param_1 + 0x48) != 0)) &&
           (*(longlong *)(param_1 + 0x50) != 0)) {
          for (local_e8 = 0; local_e8 < *(int *)(param_1 + 0x58); local_e8 = local_e8 + 1) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x50) + (longlong)local_e8 * 4) = 0;
          }
          for (local_e8 = 0; local_e8 < *(int *)(param_1 + 0x40); local_e8 = local_e8 + 1) {
            uVar5 = FUN_143e244a0(param_1,local_80 + (longlong)local_e8 * 5,
                                  *(longlong *)(param_1 + 0x48) + (longlong)local_e8 * 4,param_3);
            *(undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)local_e8 * 8) = uVar5;
          }
          if (local_80 == (ulonglong *)0x0) {
            return;
          }
          if (local_80[-1] != 0) {
            (**(code **)*local_80)(local_80,3);
            return;
          }
          FMemory::operator_delete(local_80 + -1);
          return;
        }
        *param_3 = 7;
      }
    }
    if ((local_d8 != (ulonglong *)0x0) && (local_d8 != (ulonglong *)0x0)) {
      if (local_d8[-1] == 0) {
        FMemory::operator_delete(local_d8 + -1);
      }
      else {
        (**(code **)*local_d8)(local_d8,3);
      }
    }
    FUN_143e237e0(param_1);
  }
  return;
}



// FUNCTION 143e25930 FUN_143e25930 body=115 status=ok
// SIG undefined FUN_143e25930(void)

undefined8 * FUN_143e25930(undefined8 *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_143e26a80(param_3);
  FUN_143e25b20(param_1,(param_2 + 0x766665f) * 0x25 + iVar1);
  *param_1 = icu_53::StringTrieBuilder::LinearMatchNode::vftable;
  *(int *)(param_1 + 3) = param_2;
  param_1[4] = param_3;
  return param_1;
}



// FUNCTION 143e259b0 CException body=72 status=ok
// SIG undefined CException(CException * this, int param_1)

/* Library Function - Single Match
    public: __cdecl CException::CException(int) __ptr64
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2010 Debug */

CException * __thiscall CException::CException(CException *this,int param_1)

{
  GetTestRenderTransformPivot(this);
  *(undefined ***)this = icu_53::StringTrieBuilder::Node::vftable;
  *(int *)(this + 8) = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  return this;
}



// FUNCTION 143e25a00 FUN_143e25a00 body=125 status=ok
// SIG undefined FUN_143e25a00(void)

undefined8 *
FUN_143e25a00(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  
  FUN_143e25930(param_1,param_3,param_4);
  *param_1 = icu_53::UCharsTrieBuilder::UCTLinearMatchNode::vftable;
  param_1[5] = param_2;
  iVar1 = *(int *)(param_1 + 1);
  iVar2 = FUN_143ab5470(param_2,param_3);
  *(int *)(param_1 + 1) = iVar1 * 0x25 + iVar2;
  return param_1;
}



// FUNCTION 143e25a80 FUN_143e25a80 body=150 status=ok
// SIG undefined FUN_143e25a80(void)

undefined8 * FUN_143e25a80(undefined8 *param_1)

{
  FUN_143e277b0(param_1);
  *param_1 = icu_53::UCharsTrieBuilder::vftable;
  FUN_143a8ac30(param_1 + 2);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  return param_1;
}



// FUNCTION 143e25b20 FUN_143e25b20 body=73 status=ok
// SIG undefined FUN_143e25b20(void)

CException * FUN_143e25b20(CException *param_1,int param_2)

{
  CException::CException(param_1,param_2);
  *(undefined ***)param_1 = icu_53::StringTrieBuilder::ValueNode::vftable;
  param_1[0x10] = (CException)0x0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 143e25b70 operator_delete body=24 status=ok
// SIG undefined operator_delete(void)

void operator_delete(undefined8 param_1)

{
  UGameplayTask::~UGameplayTask(param_1);
  return;
}



// FUNCTION 143e25b90 operator_delete body=24 status=ok
// SIG undefined operator_delete(void)

void operator_delete(undefined8 param_1)

{
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143e25bb0 FUN_143e25bb0 body=24 status=ok
// SIG undefined FUN_143e25bb0(void)

void FUN_143e25bb0(undefined8 param_1)

{
  operator_delete(param_1);
  return;
}



// FUNCTION 143e25bd0 FUN_143e25bd0 body=94 status=ok
// SIG undefined FUN_143e25bd0(void)

void FUN_143e25bd0(undefined8 *param_1)

{
  *param_1 = icu_53::UCharsTrieBuilder::vftable;
  FUN_143a8d330(param_1[7]);
  FUN_143aa79f0(param_1[9]);
  FUN_143a8dc60(param_1 + 2);
  FUN_143e277f0(param_1);
  return;
}



// FUNCTION 143e25c30 ~UGameplayTask body=24 status=ok
// SIG undefined ~UGameplayTask(void)

void UGameplayTask::~UGameplayTask(undefined8 param_1)

{
  operator_delete(param_1);
  return;
}



// FUNCTION 143e25c50 FUN_143e25c50 body=124 status=ok
// SIG undefined FUN_143e25c50(void)

bool FUN_143e25c50(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  if (param_1 == param_2) {
    bVar3 = true;
  }
  else {
    cVar1 = FUN_143e27830(param_1,param_2);
    if (cVar1 == '\0') {
      bVar3 = false;
    }
    else {
      iVar2 = FUN_143ab3c20(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28),
                            *(undefined4 *)(param_1 + 0x18));
      bVar3 = iVar2 == 0;
    }
  }
  return bVar3;
}



// FUNCTION 143e25cd0 FUN_143e25cd0 body=54 status=ok
// SIG undefined FUN_143e25cd0(void)

undefined8 FUN_143e25cd0(undefined8 param_1,uint param_2)

{
  operator_delete(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143e25d10 FUN_143e25d10 body=54 status=ok
// SIG undefined FUN_143e25d10(void)

undefined8 FUN_143e25d10(undefined8 param_1,uint param_2)

{
  operator_delete(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143e25d50 FUN_143e25d50 body=54 status=ok
// SIG undefined FUN_143e25d50(void)

undefined8 FUN_143e25d50(undefined8 param_1,uint param_2)

{
  FUN_143e25bb0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143e25d90 FUN_143e25d90 body=54 status=ok
// SIG undefined FUN_143e25d90(void)

undefined8 FUN_143e25d90(undefined8 param_1,uint param_2)

{
  FUN_143e25bd0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143e25dd0 FUN_143e25dd0 body=54 status=ok
// SIG undefined FUN_143e25dd0(void)

undefined8 FUN_143e25dd0(undefined8 param_1,uint param_2)

{
  UGameplayTask::~UGameplayTask(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143e25e10 FUN_143e25e10 body=497 status=ok
// SIG undefined FUN_143e25e10(void)

longlong FUN_143e25e10(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  char cVar3;
  undefined8 uVar4;
  void *_Dst;
  int local_38;
  
  cVar3 = FUN_143a8b0e0(*param_4);
  if (cVar3 == '\0') {
    if (*(int *)(param_1 + 0x54) < 1) {
      if (*(int *)(param_1 + 0x44) == *(int *)(param_1 + 0x40)) {
        if (*(int *)(param_1 + 0x40) == 0) {
          local_38 = 0x400;
        }
        else {
          local_38 = *(int *)(param_1 + 0x40) << 2;
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = (longlong)local_38;
        uVar4 = SUB168(ZEXT816(8) * auVar2,0);
        if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
          uVar4 = 0xffffffffffffffff;
        }
        _Dst = (void *)FUN_143a8d310(uVar4);
        if (_Dst == (void *)0x0) {
          *param_4 = 7;
          return param_1;
        }
        if (0 < *(int *)(param_1 + 0x44)) {
          _guard_xfg_dispatch_icall_nop
                    (_Dst,*(void **)(param_1 + 0x38),(longlong)*(int *)(param_1 + 0x44) << 3);
        }
        FUN_143a8d330(*(undefined8 *)(param_1 + 0x38));
        *(void **)(param_1 + 0x38) = _Dst;
        *(int *)(param_1 + 0x40) = local_38;
      }
      iVar1 = *(int *)(param_1 + 0x44);
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
      FUN_143e26b40(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 8,param_2,param_3,
                    param_1 + 0x10,param_4);
      cVar3 = FUN_143a8b110(*param_4);
      if ((cVar3 != '\0') && (cVar3 = FUN_143a90330(param_1 + 0x10), cVar3 != '\0')) {
        *param_4 = 7;
      }
    }
    else {
      *param_4 = 0x1e;
    }
  }
  return param_1;
}



// FUNCTION 143e26010 FUN_143e26010 body=820 status=ok
// SIG undefined FUN_143e26010(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143e26010(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined1 local_90;
  undefined4 *local_88;
  int local_78;
  int local_74;
  undefined8 local_70;
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_70 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 != '\0') {
    return;
  }
  if ((*(longlong *)(param_1 + 0x48) != 0) && (0 < *(int *)(param_1 + 0x54))) {
    return;
  }
  if (*(int *)(param_1 + 0x54) == 0) {
    if (*(int *)(param_1 + 0x44) == 0) {
      *param_3 = 8;
      return;
    }
    cVar1 = FUN_143a90330(param_1 + 0x10);
    if (cVar1 != '\0') {
      *param_3 = 7;
      return;
    }
    local_98 = param_1 + 0x10;
    local_90 = 0;
    local_88 = param_3;
    FUN_143ac1910(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x44),8,FUN_143e272b0);
    cVar1 = FUN_143a8b0e0(*param_3);
    if (cVar1 != '\0') {
      return;
    }
    FUN_143e269e0(*(undefined8 *)(param_1 + 0x38),local_40,param_1 + 0x10);
    for (local_74 = 1; local_74 < *(int *)(param_1 + 0x44); local_74 = local_74 + 1) {
      FUN_143e269e0(*(longlong *)(param_1 + 0x38) + (longlong)local_74 * 8,local_68,param_1 + 0x10);
      cVar1 = FUN_143a8dd00(local_40,local_68);
      if (cVar1 != '\0') {
        *param_3 = 1;
        FUN_143a8dc60(local_68);
        FUN_143a8dc60(local_40);
        return;
      }
      UDarwinGameplayFunctionLibrary::GetInSameTeam(local_40,local_68);
      FUN_143a8dc60(local_68);
    }
    FUN_143a8dc60(local_40);
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  local_78 = FUN_143a904f0(param_1 + 0x10);
  if (local_78 < 0x400) {
    local_78 = 0x400;
  }
  if (*(int *)(param_1 + 0x50) < local_78) {
    FUN_143aa79f0(*(undefined8 *)(param_1 + 0x48));
    uVar2 = FUN_143aa7a40((longlong)(local_78 << 1));
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    if (*(longlong *)(param_1 + 0x48) == 0) {
      *param_3 = 7;
      *(undefined4 *)(param_1 + 0x50) = 0;
      return;
    }
    *(int *)(param_1 + 0x50) = local_78;
  }
  FUN_143e27d90(param_1,param_2,*(undefined4 *)(param_1 + 0x44),param_3);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    *param_3 = 7;
  }
  return;
}



// FUNCTION 143e26350 FUN_143e26350 body=128 status=ok
// SIG undefined FUN_143e26350(void)

undefined8 FUN_143e26350(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  
  FUN_143e26010(param_1,param_2,param_4);
  cVar1 = FUN_143a8b110(*param_4);
  if (cVar1 != '\0') {
    FUN_143a90d80(param_3,0,
                  *(longlong *)(param_1 + 0x48) +
                  (longlong)(*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x54)) * 2,
                  *(undefined4 *)(param_1 + 0x54));
  }
  return param_3;
}



// FUNCTION 143e263d0 FUN_143e263d0 body=50 status=ok
// SIG undefined FUN_143e263d0(void)

void FUN_143e263d0(int *param_1,int param_2,undefined8 param_3)

{
  FUN_143a8e4f0(param_3,*param_1 + 1 + param_2);
  return;
}



// FUNCTION 143e26410 FUN_143e26410 body=202 status=ok
// SIG undefined FUN_143e26410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143e26410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  int local_98;
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
  local_90 = FUN_143e269e0(param_2,local_40,param_3);
  local_80 = local_90;
  local_88 = FUN_143e269e0(param_1,local_68,param_3);
  local_78 = local_88;
  cVar1 = FUN_143b0fd00(local_88,local_90);
  local_98 = (int)cVar1;
  FUN_143a8dc60(local_68);
  FUN_143a8dc60(local_40);
  return local_98;
}



// FUNCTION 143e264e0 FUN_143e264e0 body=227 status=ok
// SIG undefined FUN_143e264e0(void)

int FUN_143e264e0(longlong param_1,int param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  int local_24;
  int local_20;
  
  local_20 = 0;
  local_24 = param_2;
  do {
    sVar1 = FUN_143e263d0(*(longlong *)(param_1 + 0x38) + (longlong)local_24 * 8,param_4,
                          param_1 + 0x10);
    do {
      local_24 = local_24 + 1;
      if (param_3 <= local_24) break;
      sVar2 = FUN_143e263d0(*(longlong *)(param_1 + 0x38) + (longlong)local_24 * 8,param_4,
                            param_1 + 0x10);
    } while (sVar1 == sVar2);
    local_20 = local_20 + 1;
    if (param_3 <= local_24) {
      return local_20;
    }
  } while( true );
}



// FUNCTION 143e265d0 FUN_143e265d0 body=305 status=ok
// SIG undefined FUN_143e265d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143e265d0(longlong param_1,int param_2,int param_3,undefined4 param_4,undefined8 param_5)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  uint local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_78 = 0;
  local_70 = FUN_143a8d310(0x30);
  if (local_70 == 0) {
    local_68 = 0;
  }
  else {
    local_60 = FUN_143e269e0(*(longlong *)(param_1 + 0x38) + (longlong)param_2 * 8,local_38,
                             param_1 + 0x10);
    local_78 = local_78 | 1;
    local_50 = local_60;
    lVar1 = FUN_143a8fe10(local_60);
    local_68 = FUN_143e25a00(local_70,lVar1 + (longlong)param_3 * 2,param_4,param_5);
  }
  local_48 = local_68;
  local_58 = local_68;
  if ((local_78 & 1) != 0) {
    local_78 = local_78 & 0xfffffffe;
    FUN_143a8dc60(local_38);
  }
  return local_58;
}



// FUNCTION 143e26710 FUN_143e26710 body=279 status=ok
// SIG undefined FUN_143e26710(void)

undefined8 FUN_143e26710(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int local_18;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x50) < param_2) {
      iVar1 = *(int *)(param_1 + 0x50);
      do {
        local_18 = iVar1;
        iVar1 = local_18 * 2;
      } while (iVar1 <= param_2);
      lVar3 = FUN_143aa7a40((longlong)(local_18 << 2));
      if (lVar3 == 0) {
        FUN_143aa79f0(*(undefined8 *)(param_1 + 0x48));
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x50) = 0;
        return 0;
      }
      FUN_143ab3ca0(lVar3 + (longlong)(iVar1 - *(int *)(param_1 + 0x54)) * 2,
                    *(longlong *)(param_1 + 0x48) +
                    (longlong)(*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x54)) * 2,
                    *(undefined4 *)(param_1 + 0x54));
      FUN_143aa79f0(*(undefined8 *)(param_1 + 0x48));
      *(longlong *)(param_1 + 0x48) = lVar3;
      *(int *)(param_1 + 0x50) = iVar1;
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143e26830 FUN_143e26830 body=53 status=ok
// SIG undefined FUN_143e26830(void)

void FUN_143e26830(longlong param_1,int param_2)

{
  FUN_143e26a50(*(longlong *)(param_1 + 0x38) + (longlong)param_2 * 8,param_1 + 0x10);
  return;
}



// FUNCTION 143e26870 FUN_143e26870 body=62 status=ok
// SIG undefined FUN_143e26870(void)

void FUN_143e26870(longlong param_1,int param_2,undefined4 param_3)

{
  FUN_143e263d0(*(longlong *)(param_1 + 0x38) + (longlong)param_2 * 8,param_3,param_1 + 0x10);
  return;
}



// FUNCTION 143e268b0 FUN_143e268b0 body=44 status=ok
// SIG undefined FUN_143e268b0(void)

void FUN_143e268b0(longlong param_1,int param_2)

{
  FUN_143b77950(*(longlong *)(param_1 + 0x38) + (longlong)param_2 * 8);
  return;
}



// FUNCTION 143e268e0 FUN_143e268e0 body=196 status=ok
// SIG undefined FUN_143e268e0(void)

int FUN_143e268e0(longlong param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int local_res20;
  
  lVar1 = *(longlong *)(param_1 + 0x38) + (longlong)param_2 * 8;
  lVar2 = *(longlong *)(param_1 + 0x38);
  iVar5 = FUN_143e26a50(lVar1,param_1 + 0x10);
  local_res20 = param_4;
  do {
    local_res20 = local_res20 + 1;
    if (iVar5 <= local_res20) {
      return local_res20;
    }
    sVar3 = FUN_143e263d0(lVar1,local_res20,param_1 + 0x10);
    sVar4 = FUN_143e263d0(lVar2 + (longlong)param_3 * 8,local_res20,param_1 + 0x10);
  } while (sVar3 == sVar4);
  return local_res20;
}



// FUNCTION 143e269b0 FUN_143e269b0 body=11 status=ok
// SIG undefined FUN_143e269b0(void)

undefined8 FUN_143e269b0(void)

{
  return 5;
}



// FUNCTION 143e269c0 FUN_143e269c0 body=11 status=ok
// SIG undefined FUN_143e269c0(void)

undefined8 FUN_143e269c0(void)

{
  return 0x10;
}



// FUNCTION 143e269d0 FUN_143e269d0 body=11 status=ok
// SIG undefined FUN_143e269d0(void)

undefined8 FUN_143e269d0(void)

{
  return 0x30;
}



// FUNCTION 143e269e0 FUN_143e269e0 body=104 status=ok
// SIG undefined FUN_143e269e0(void)

undefined8 FUN_143e269e0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 uVar1;
  
  uVar1 = FUN_143a8e4f0(param_3,*param_1,param_3,param_4,0);
  FUN_143a90ff0(param_3,param_2,*param_1 + 1,uVar1);
  return param_2;
}



// FUNCTION 143e26a50 FUN_143e26a50 body=39 status=ok
// SIG undefined FUN_143e26a50(void)

undefined2 FUN_143e26a50(undefined4 *param_1,undefined8 param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_143a8e4f0(param_2,*param_1);
  return uVar1;
}



// FUNCTION 143e26a80 FUN_143e26a80 body=50 status=ok
// SIG undefined FUN_143e26a80(void)

undefined4 FUN_143e26a80(longlong param_1)

{
  undefined4 local_18;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
               ::GetIndex(param_1);
  }
  return local_18;
}



// FUNCTION 143e26ac0 FUN_143e26ac0 body=114 status=ok
// SIG undefined FUN_143e26ac0(void)

int FUN_143e26ac0(longlong param_1,int param_2,undefined4 param_3,short param_4)

{
  short sVar1;
  undefined4 local_res10;
  
  local_res10 = param_2;
  while( true ) {
    sVar1 = FUN_143e263d0(*(longlong *)(param_1 + 0x38) + (longlong)local_res10 * 8,param_3,
                          param_1 + 0x10);
    if (param_4 != sVar1) break;
    local_res10 = local_res10 + 1;
  }
  return local_res10;
}



// FUNCTION 143e26b40 FUN_143e26b40 body=146 status=ok
// SIG undefined FUN_143e26b40(void)

void FUN_143e26b40(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 local_18;
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    iVar2 = FUN_143a904f0(param_2);
    if (iVar2 < 0x10000) {
      uVar3 = FUN_143a904f0(param_4);
      *param_1 = uVar3;
      local_18 = (undefined2)iVar2;
      FUN_143acc590(param_4,local_18);
      param_1[1] = param_3;
      FUN_143a8e070(param_4,param_2);
    }
    else {
      *param_5 = 8;
    }
  }
  return;
}



// FUNCTION 143e26be0 FUN_143e26be0 body=198 status=ok
// SIG undefined FUN_143e26be0(void)

int FUN_143e26be0(longlong param_1,int param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  short sVar2;
  int local_res10;
  int local_res20;
  
  local_res10 = param_2;
  local_res20 = param_4;
  do {
    sVar1 = FUN_143e263d0(*(longlong *)(param_1 + 0x38) + (longlong)local_res10 * 8,param_3,
                          param_1 + 0x10);
    do {
      local_res10 = local_res10 + 1;
      sVar2 = FUN_143e263d0(*(longlong *)(param_1 + 0x38) + (longlong)local_res10 * 8,param_3,
                            param_1 + 0x10);
    } while (sVar1 == sVar2);
    local_res20 = local_res20 + -1;
  } while (0 < local_res20);
  return local_res10;
}



// FUNCTION 143e26cb0 FUN_143e26cb0 body=172 status=ok
// SIG undefined FUN_143e26cb0(void)

void FUN_143e26cb0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))(*(undefined8 *)(param_1 + 0x20),param_2);
  FUN_143e26d60(param_2,*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x18));
  iVar1 = (**(code **)(*param_2 + 0x58))(param_2);
  uVar2 = (**(code **)(*param_2 + 0x88))
                    (param_2,*(undefined1 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
                     iVar1 + -1 + *(int *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  return;
}



// FUNCTION 143e26d60 FUN_143e26d60 body=132 status=ok
// SIG undefined FUN_143e26d60(void)

undefined4 FUN_143e26d60(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x54) + param_3;
  cVar1 = FUN_143e26710(param_1,iVar2);
  if (cVar1 != '\0') {
    *(int *)(param_1 + 0x54) = iVar2;
    FUN_143ab3ca0(*(longlong *)(param_1 + 0x48) +
                  (longlong)(*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x54)) * 2,param_2,
                  param_3);
  }
  return *(undefined4 *)(param_1 + 0x54);
}



// FUNCTION 143e26df0 FUN_143e26df0 body=111 status=ok
// SIG undefined FUN_143e26df0(void)

undefined4 FUN_143e26df0(longlong param_1,undefined2 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x54) + 1;
  cVar1 = FUN_143e26710(param_1,iVar2);
  if (cVar1 != '\0') {
    *(int *)(param_1 + 0x54) = iVar2;
    *(undefined2 *)
     (*(longlong *)(param_1 + 0x48) +
     (longlong)(*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x54)) * 2) = param_2;
  }
  return *(undefined4 *)(param_1 + 0x54);
}



// FUNCTION 143e26e60 FUN_143e26e60 body=238 status=ok
// SIG undefined FUN_143e26e60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143e26e60(longlong *param_1,int param_2)

{
  short sVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  short local_20 [4];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  local_28 = *(int *)((longlong)param_1 + 0x54) - param_2;
  if (local_28 < 0xfc00) {
    (**(code **)(*param_1 + 0x70))(param_1,local_28);
  }
  else {
    sVar1 = (short)((uint)local_28 >> 0x10);
    if (local_28 < 0x3ff0000) {
      local_20[0] = sVar1 + -0x400;
      local_24 = 1;
    }
    else {
      local_20[0] = -1;
      local_24 = 2;
      local_20[1] = sVar1;
    }
    local_20[local_24] = (short)local_28;
    local_24 = local_24 + 1;
    FUN_143e26d60(param_1,local_20,local_24);
  }
  return;
}



// FUNCTION 143e26f50 FUN_143e26f50 body=193 status=ok
// SIG undefined FUN_143e26f50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_143e26f50(longlong param_1,int param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_50 = FUN_143e269e0(*(longlong *)(param_1 + 0x38) + (longlong)param_2 * 8,local_38,
                           param_1 + 0x10);
  local_48 = local_50;
  lVar1 = FUN_143a8fe10(local_50);
  local_58 = FUN_143e26d60(param_1,lVar1 + (longlong)param_3 * 2,param_4);
  FUN_143a8dc60(local_38);
  return local_58;
}



// FUNCTION 143e27020 FUN_143e27020 body=314 status=ok
// SIG undefined FUN_143e27020(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143e27020(longlong *param_1,uint param_2,char param_3)

{
  short local_res10;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  longlong local_20;
  ushort local_18;
  short sStack_16;
  short sStack_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (((int)param_2 < 0) || (0x3fff < (int)param_2)) {
    local_res10 = (short)param_2;
    sStack_16 = (short)(param_2 >> 0x10);
    if (((int)param_2 < 0) || (0x3ffeffff < (int)param_2)) {
      local_18 = 0x7fff;
      sStack_14 = local_res10;
      local_28 = 3;
    }
    else {
      local_18 = sStack_16 + 0x4000;
      sStack_16 = local_res10;
      local_28 = 2;
    }
    local_18 = local_18 | (short)param_3 << 0xf;
    FUN_143e26d60(param_1,&local_18,local_28);
  }
  else {
    local_20 = *param_1;
    (**(code **)(local_20 + 0x70))(param_1,param_2 | (int)param_3 << 0xf);
  }
  return;
}



// FUNCTION 143e27160 FUN_143e27160 body=332 status=ok
// SIG undefined FUN_143e27160(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143e27160(longlong *param_1,char param_2,int param_3,undefined4 param_4)

{
  short local_res18;
  ushort local_res20;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  ushort local_24;
  short sStack_22;
  short sStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (param_2 == '\0') {
    (**(code **)(*param_1 + 0x70))(param_1,param_4);
  }
  else {
    local_res18 = (short)param_3;
    if ((param_3 < 0) || (0xfdffff < param_3)) {
      local_24 = 0x7fc0;
      sStack_22 = (short)((uint)param_3 >> 0x10);
      sStack_20 = local_res18;
      local_28 = 3;
    }
    else if (param_3 < 0x100) {
      local_24 = (local_res18 + 1) * 0x40;
      local_28 = 1;
    }
    else {
      local_24 = ((ushort)(param_3 >> 10) & 0x7fc0) + 0x4040;
      sStack_22 = local_res18;
      local_28 = 2;
    }
    local_res20 = (ushort)param_4;
    local_24 = local_24 | local_res20;
    FUN_143e26d60(param_1,&local_24,local_28);
  }
  return;
}



// FUNCTION 143e272b0 FUN_143e272b0 body=74 status=ok
// SIG undefined FUN_143e272b0(void)

void FUN_143e272b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143e26410(param_2,param_3,param_1);
  return;
}



// FUNCTION 143e27300 FUN_143e27300 body=222 status=ok
// SIG undefined FUN_143e27300(void)

ulonglong FUN_143e27300(undefined8 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                       undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 local_28 [40];
  
  uVar2 = FUN_143b1f100(param_3,param_7);
  if ((param_4 & 0x20) == 0) {
    uVar4 = FUN_143b20a40(uVar2,param_1,param_2,param_5,param_6,param_7);
  }
  else {
    uVar3 = FUN_143b1a370(param_7);
    FUN_143b30e20(local_28,uVar2,uVar3);
    uVar1 = FUN_143b20a40(local_28,param_1,param_2,param_5,param_6,param_7);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_28);
    uVar4 = (ulonglong)uVar1;
  }
  return uVar4;
}



// FUNCTION 143e273e0 FUN_143e273e0 body=348 status=ok
// SIG undefined FUN_143e273e0(void)

void FUN_143e273e0(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_98 = 0x345ad82c;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0x90;
  local_88 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  FUN_143b07d10(&local_98,param_2,(longlong)param_3,param_4);
  (**(code **)(*param_1 + 0x30))(param_1,&local_98,param_4);
  return;
}



// FUNCTION 143e27540 FUN_143e27540 body=115 status=ok
// SIG undefined FUN_143e27540(void)

undefined8 * FUN_143e27540(undefined8 *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_143e26a80(param_3);
  FUN_143e25b20(param_1,(param_2 + 0xeccccbe) * 0x25 + iVar1);
  *param_1 = icu_53::StringTrieBuilder::BranchHeadNode::vftable;
  *(int *)(param_1 + 3) = param_2;
  param_1[4] = param_3;
  return param_1;
}



// FUNCTION 143e275c0 FUN_143e275c0 body=52 status=ok
// SIG undefined FUN_143e275c0(void)

CException * FUN_143e275c0(CException *param_1,int param_2)

{
  CException::CException(param_1,param_2);
  *(undefined ***)param_1 = icu_53::StringTrieBuilder::BranchNode::vftable;
  return param_1;
}



// FUNCTION 143e27600 FUN_143e27600 body=71 status=ok
// SIG undefined FUN_143e27600(void)

CException * FUN_143e27600(CException *param_1,int param_2)

{
  CException::CException(param_1,param_2 + 0x2777775);
  *(undefined ***)param_1 = icu_53::StringTrieBuilder::FinalValueNode::vftable;
  *(int *)(param_1 + 0x10) = param_2;
  return param_1;
}



// FUNCTION 143e27650 FUN_143e27650 body=109 status=ok
// SIG undefined FUN_143e27650(void)

undefined8 * FUN_143e27650(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_143e26a80(param_3);
  FUN_143e25b20(param_1,iVar1 + 0x4eeeeea);
  *param_1 = icu_53::StringTrieBuilder::IntermediateValueNode::vftable;
  param_1[3] = param_3;
  FUN_143e28eb0(param_1,param_2);
  return param_1;
}



// FUNCTION 143e276c0 FUN_143e276c0 body=61 status=ok
// SIG undefined FUN_143e276c0(void)

undefined8 * FUN_143e276c0(undefined8 *param_1)

{
  FUN_143e275c0(param_1,0x444444);
  *param_1 = icu_53::StringTrieBuilder::ListBranchNode::vftable;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 143e27700 FUN_143e27700 body=163 status=ok
// SIG undefined FUN_143e27700(void)

undefined8 * FUN_143e27700(undefined8 *param_1,ushort param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_143e26a80(param_3);
  iVar2 = FUN_143e26a80(param_4);
  FUN_143e275c0(param_1,((param_2 + 0xc555549) * 0x25 + iVar1) * 0x25 + iVar2);
  *param_1 = icu_53::StringTrieBuilder::SplitBranchNode::vftable;
  *(ushort *)(param_1 + 3) = param_2;
  param_1[4] = param_3;
  param_1[5] = param_4;
  return param_1;
}



// FUNCTION 143e277b0 FUN_143e277b0 body=57 status=ok
// SIG undefined FUN_143e277b0(void)

undefined8 * FUN_143e277b0(undefined8 *param_1)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::StringTrieBuilder::vftable;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 143e277f0 FUN_143e277f0 body=60 status=ok
// SIG undefined FUN_143e277f0(void)

void FUN_143e277f0(undefined8 *param_1)

{
  *param_1 = icu_53::StringTrieBuilder::vftable;
  FMediaPipeModule::ShutdownModule(param_1);
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143e27830 FUN_143e27830 body=126 status=ok
// SIG undefined FUN_143e27830(void)

undefined1 FUN_143e27830(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_18;
  
  if (param_1 == param_2) {
    local_18 = 1;
  }
  else {
    cVar1 = FUN_143e27b90(param_1,param_2);
    if (cVar1 == '\0') {
      local_18 = 0;
    }
    else if ((*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18)) &&
            (*(longlong *)(param_1 + 0x20) == *(longlong *)(param_2 + 0x20))) {
      local_18 = 1;
    }
    else {
      local_18 = 0;
    }
  }
  return local_18;
}



// FUNCTION 143e278b0 FUN_143e278b0 body=106 status=ok
// SIG undefined FUN_143e278b0(void)

bool FUN_143e278b0(longlong param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  
  if (param_1 == param_2) {
    bVar2 = true;
  }
  else {
    cVar1 = FUN_143e27a70(param_1,param_2);
    if (cVar1 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = *(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10);
    }
  }
  return bVar2;
}



// FUNCTION 143e27920 FUN_143e27920 body=108 status=ok
// SIG undefined FUN_143e27920(void)

bool FUN_143e27920(longlong param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  
  if (param_1 == param_2) {
    bVar2 = true;
  }
  else {
    cVar1 = FUN_143e27b90(param_1,param_2);
    if (cVar1 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = *(longlong *)(param_1 + 0x18) == *(longlong *)(param_2 + 0x18);
    }
  }
  return bVar2;
}



// FUNCTION 143e27990 FUN_143e27990 body=216 status=ok
// SIG undefined FUN_143e27990(void)

undefined8 FUN_143e27990(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  int local_18;
  
  if (param_1 == param_2) {
    uVar2 = 1;
  }
  else {
    cVar1 = FUN_143e27a70(param_1,param_2);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      for (local_18 = 0; local_18 < *(int *)(param_1 + 0x40); local_18 = local_18 + 1) {
        if (((*(short *)(param_1 + 0x58 + (longlong)local_18 * 2) !=
              *(short *)(param_2 + 0x58 + (longlong)local_18 * 2)) ||
            (*(int *)(param_1 + 0x44 + (longlong)local_18 * 4) !=
             *(int *)(param_2 + 0x44 + (longlong)local_18 * 4))) ||
           (*(longlong *)(param_1 + 0x18 + (longlong)local_18 * 8) !=
            *(longlong *)(param_2 + 0x18 + (longlong)local_18 * 8))) {
          return 0;
        }
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}



// FUNCTION 143e27a70 FUN_143e27a70 body=114 status=ok
// SIG undefined FUN_143e27a70(void)

undefined1 FUN_143e27a70(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    uVar2 = _guard_xfg_dispatch_icall_nop(param_2);
    uVar3 = _guard_xfg_dispatch_icall_nop(param_1);
    cVar1 = FUN_143ab1e10(uVar3,uVar2);
    if ((cVar1 == '\0') || (*(int *)(param_1 + 8) != *(int *)(param_2 + 8))) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143e27af0 FUN_143e27af0 body=150 status=ok
// SIG undefined FUN_143e27af0(void)

undefined1 FUN_143e27af0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_18;
  
  if (param_1 == param_2) {
    local_18 = 1;
  }
  else {
    cVar1 = FUN_143e27a70(param_1,param_2);
    if (cVar1 == '\0') {
      local_18 = 0;
    }
    else if (((*(short *)(param_1 + 0x18) == *(short *)(param_2 + 0x18)) &&
             (*(longlong *)(param_1 + 0x20) == *(longlong *)(param_2 + 0x20))) &&
            (*(longlong *)(param_1 + 0x28) == *(longlong *)(param_2 + 0x28))) {
      local_18 = 1;
    }
    else {
      local_18 = 0;
    }
  }
  return local_18;
}



// FUNCTION 143e27b90 FUN_143e27b90 body=141 status=ok
// SIG undefined FUN_143e27b90(void)

undefined1 FUN_143e27b90(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_18;
  
  if (param_1 == param_2) {
    local_18 = 1;
  }
  else {
    cVar1 = FUN_143e27a70(param_1,param_2);
    if (cVar1 == '\0') {
      local_18 = 0;
    }
    else if ((*(char *)(param_1 + 0x10) == *(char *)(param_2 + 0x10)) &&
            ((*(char *)(param_1 + 0x10) == '\0' ||
             (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14))))) {
      local_18 = 1;
    }
    else {
      local_18 = 0;
    }
  }
  return local_18;
}



// FUNCTION 143e27c20 FUN_143e27c20 body=54 status=ok
// SIG undefined FUN_143e27c20(void)

undefined8 FUN_143e27c20(undefined8 param_1,uint param_2)

{
  FUN_143e277f0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143e27c60 FUN_143e27c60 body=130 status=ok
// SIG undefined FUN_143e27c60(void)

void FUN_143e27c60(longlong param_1,int param_2,int param_3)

{
  undefined2 local_res10;
  
  local_res10 = (undefined2)param_2;
  *(undefined2 *)(param_1 + 0x58 + (longlong)*(int *)(param_1 + 0x40) * 2) = local_res10;
  *(undefined8 *)(param_1 + 0x18 + (longlong)*(int *)(param_1 + 0x40) * 8) = 0;
  *(int *)(param_1 + 0x44 + (longlong)*(int *)(param_1 + 0x40) * 4) = param_3;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  *(int *)(param_1 + 8) = (*(int *)(param_1 + 8) * 0x25 + param_2) * 0x25 + param_3;
  return;
}



// FUNCTION 143e27cf0 FUN_143e27cf0 body=157 status=ok
// SIG undefined FUN_143e27cf0(void)

void FUN_143e27cf0(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined2 local_res10;
  
  local_res10 = (undefined2)param_2;
  *(undefined2 *)(param_1 + 0x58 + (longlong)*(int *)(param_1 + 0x40) * 2) = local_res10;
  *(undefined8 *)(param_1 + 0x18 + (longlong)*(int *)(param_1 + 0x40) * 8) = param_3;
  *(undefined4 *)(param_1 + 0x44 + (longlong)*(int *)(param_1 + 0x40) * 4) = 0;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = FUN_143e26a80(param_3);
  *(int *)(param_1 + 8) = (iVar1 * 0x25 + param_2) * 0x25 + iVar2;
  return;
}



// FUNCTION 143e27d90 FUN_143e27d90 body=189 status=ok
// SIG undefined FUN_143e27d90(void)

void FUN_143e27d90(undefined8 param_1,int param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  longlong *plVar2;
  
  if (param_2 == 0) {
    FUN_143e29830(param_1,0,param_3,0);
  }
  else {
    FUN_143e27e50(param_1,param_3 << 1,param_4);
    plVar2 = (longlong *)FUN_143e28490(param_1,0,param_3,0,param_4);
    cVar1 = FUN_143a8b110(*param_4);
    if (cVar1 != '\0') {
      (**(code **)(*plVar2 + 0x18))(plVar2,0xffffffff);
      (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
    }
    FMediaPipeModule::ShutdownModule(param_1);
  }
  return;
}



// FUNCTION 143e27e50 FUN_143e27e50 body=155 status=ok
// SIG undefined FUN_143e27e50(void)

void FUN_143e27e50(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    uVar2 = FUN_143ab3600(FUN_143e29c20,FUN_143c07a60,0,param_2,param_3);
    *(undefined8 *)(param_1 + 8) = uVar2;
    cVar1 = FUN_143a8b110(*param_3);
    if (cVar1 != '\0') {
      if (*(longlong *)(param_1 + 8) == 0) {
        *param_3 = 7;
      }
      else {
        std::ios_base::precision(*(ios_base **)(param_1 + 8),0x143a8d350);
      }
    }
  }
  return;
}



// FUNCTION 143e27ef0 ShutdownModule body=41 status=ok
// SIG undefined ShutdownModule(void)

void FMediaPipeModule::ShutdownModule(longlong param_1)

{
  FUN_143ab2e80(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 143e27f20 FUN_143e27f20 body=24 status=ok
// SIG undefined FUN_143e27f20(void)

void FUN_143e27f20(undefined8 param_1)

{
  TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
  ::GetIndex(param_1);
  return;
}



// FUNCTION 143e27f40 FUN_143e27f40 body=1347 status=ok
// SIG undefined FUN_143e27f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143e27f40(longlong *param_1,int param_2,int param_3,int param_4,int param_5,undefined4 *param_6)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  int local_res10;
  undefined1 auStack_168 [32];
  undefined4 *local_148;
  undefined4 *local_140;
  int local_138;
  int local_134;
  undefined2 local_130;
  undefined2 local_12c;
  int local_128;
  int local_124;
  longlong local_120;
  int local_118;
  int local_114;
  int local_110;
  undefined8 local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 auStack_a8 [14];
  undefined2 auStack_38 [16];
  ulonglong local_18;
  
  local_b8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  cVar1 = FUN_143a8b0e0(*param_6);
  if (cVar1 != '\0') {
    return 0;
  }
  local_138 = 0;
  local_res10 = param_2;
  for (; iVar3 = (**(code **)(*param_1 + 0x50))(param_1), iVar3 < param_5;
      param_5 = param_5 - param_5 / 2) {
    local_c0 = *param_1;
    local_124 = (**(code **)(local_c0 + 0x38))(param_1,local_res10,param_4,param_5 / 2);
    uVar2 = (**(code **)(*param_1 + 0x18))(param_1,local_124,param_4);
    auStack_38[local_138] = uVar2;
    local_140 = param_6;
    local_148 = (undefined4 *)CONCAT44(local_148._4_4_,param_5 / 2);
    uVar6 = FUN_143e27f40(param_1,local_res10,local_124,param_4);
    auStack_a8[local_138] = uVar6;
    local_138 = local_138 + 1;
    local_res10 = local_124;
  }
  cVar1 = FUN_143a8b0e0(*param_6);
  if (cVar1 != '\0') {
    return 0;
  }
  local_100 = FUN_143a8d310(0x68);
  if (local_100 == 0) {
    local_f0 = 0;
  }
  else {
    local_f0 = FUN_143e276c0(local_100);
  }
  local_d0 = local_f0;
  local_120 = local_f0;
  if (local_f0 == 0) {
    *param_6 = 7;
    return 0;
  }
  local_128 = 0;
  do {
    local_134 = local_res10;
    local_114 = local_res10;
    local_130 = (**(code **)(*param_1 + 0x18))(param_1,local_res10,param_4);
    local_134 = local_134 + 1;
    local_134 = (**(code **)(*param_1 + 0x40))(param_1,local_134,param_4,local_130);
    if (local_res10 == local_134 + -1) {
      local_118 = param_4 + 1;
      local_e0 = *param_1;
      iVar3 = (**(code **)(local_e0 + 0x10))(param_1,local_res10);
      if (local_118 != iVar3) goto LAB_143e2823c;
      uVar4 = (**(code **)(*param_1 + 0x20))(param_1,local_res10);
      FUN_143e27c60(local_120,local_130,uVar4);
    }
    else {
LAB_143e2823c:
      local_148 = param_6;
      uVar6 = FUN_143e28490(param_1,local_res10,local_134,param_4 + 1);
      FUN_143e27cf0(local_120,local_130,uVar6);
    }
    iVar3 = local_134;
    local_res10 = local_134;
    local_128 = local_128 + 1;
  } while (local_128 < param_5 + -1);
  local_12c = (**(code **)(*param_1 + 0x18))(param_1,local_134,param_4);
  if (iVar3 == param_3 + -1) {
    local_110 = param_4 + 1;
    local_c8 = *param_1;
    iVar5 = (**(code **)(local_c8 + 0x10))(param_1,iVar3);
    if (local_110 == iVar5) {
      uVar4 = (**(code **)(*param_1 + 0x20))(param_1,iVar3);
      FUN_143e27c60(local_120,local_12c,uVar4);
      goto LAB_143e283a5;
    }
  }
  local_148 = param_6;
  uVar6 = FUN_143e28490(param_1,iVar3,param_3,param_4 + 1);
  FUN_143e27cf0(local_120,local_12c,uVar6);
LAB_143e283a5:
  local_108 = FUN_143e28d10(param_1,local_120,param_6);
  while (0 < local_138) {
    local_138 = local_138 + -1;
    local_f8 = FUN_143a8d310(0x30);
    if (local_f8 == 0) {
      local_e8 = 0;
    }
    else {
      local_e8 = FUN_143e27700(local_f8,auStack_38[local_138],auStack_a8[local_138],local_108);
    }
    local_d8 = local_e8;
    local_108 = FUN_143e28d10(param_1,local_e8,param_6);
  }
  return local_108;
}



// FUNCTION 143e28490 FUN_143e28490 body=1138 status=ok
// SIG undefined FUN_143e28490(void)

undefined8 FUN_143e28490(longlong *param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int local_res10;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar9;
  int local_94;
  int local_90;
  undefined4 local_8c;
  longlong local_80;
  undefined8 local_70;
  longlong local_58;
  longlong local_48;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  cVar2 = FUN_143a8b0e0(*param_5);
  if (cVar2 == '\0') {
    bVar1 = false;
    local_8c = 0;
    iVar5 = (**(code **)(*param_1 + 0x10))(param_1,param_2);
    local_res10 = param_2;
    if (param_4 == iVar5) {
      local_8c = (**(code **)(*param_1 + 0x20))(param_1,param_2);
      local_res10 = param_2 + 1;
      if (local_res10 == param_3) {
        uVar7 = FUN_143e28b40(param_1,local_8c,param_5);
        return uVar7;
      }
      bVar1 = true;
    }
    sVar3 = (**(code **)(*param_1 + 0x18))(param_1,local_res10,param_4);
    sVar4 = (**(code **)(*param_1 + 0x18))(param_1,param_3 + -1,param_4);
    if (sVar3 == sVar4) {
      local_94 = (**(code **)(*param_1 + 0x28))(param_1,local_res10,param_3 + -1,param_4);
      local_70 = FUN_143e28490(param_1,local_res10,param_3,local_94,param_5);
      local_90 = local_94 - param_4;
      iVar5 = (**(code **)(*param_1 + 0x60))(param_1);
      while (iVar5 < local_90) {
        local_94 = local_94 - iVar5;
        local_90 = local_90 - iVar5;
        uVar7 = (**(code **)(*param_1 + 0x68))(param_1,local_res10,local_94,iVar5,local_70);
        local_70 = FUN_143e28d10(param_1,uVar7,param_5);
      }
      local_80 = (**(code **)(*param_1 + 0x68))(param_1,local_res10,param_4,local_90,local_70);
    }
    else {
      uVar6 = (**(code **)(*param_1 + 0x30))(param_1,local_res10,param_3,param_4);
      uVar7 = FUN_143e27f40(param_1,local_res10,param_3,param_4,CONCAT44(uVar9,uVar6),param_5);
      lVar8 = FUN_143a8d310(0x28);
      if (lVar8 == 0) {
        local_48 = 0;
      }
      else {
        local_48 = FUN_143e27540(lVar8,uVar6,uVar7);
      }
      local_80 = local_48;
    }
    if ((bVar1) && (local_80 != 0)) {
      cVar2 = (**(code **)(*param_1 + 0x48))(param_1);
      if (cVar2 == '\0') {
        lVar8 = FUN_143a8d310(0x20);
        if (lVar8 == 0) {
          local_58 = 0;
        }
        else {
          uVar7 = FUN_143e28d10(param_1,local_80,param_5);
          local_58 = FUN_143e27650(lVar8,local_8c,uVar7);
        }
        local_80 = local_58;
      }
      else {
        FUN_143e28eb0(local_80,local_8c);
      }
    }
    uVar7 = FUN_143e28d10(param_1,local_80,param_5);
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 143e28910 FUN_143e28910 body=77 status=ok
// SIG undefined FUN_143e28910(void)

undefined4 FUN_143e28910(longlong param_1,undefined4 param_2)

{
  undefined4 local_res10;
  
  local_res10 = param_2;
  if (*(int *)(param_1 + 0xc) == 0) {
    local_res10 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))
                            (*(undefined8 *)(param_1 + 0x20),param_2);
    *(undefined4 *)(param_1 + 0xc) = local_res10;
  }
  return local_res10;
}



// FUNCTION 143e28960 FUN_143e28960 body=77 status=ok
// SIG undefined FUN_143e28960(void)

undefined4 FUN_143e28960(longlong param_1,undefined4 param_2)

{
  undefined4 local_res10;
  
  local_res10 = param_2;
  if (*(int *)(param_1 + 0xc) == 0) {
    local_res10 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                            (*(undefined8 *)(param_1 + 0x18),param_2);
    *(undefined4 *)(param_1 + 0xc) = local_res10;
  }
  return local_res10;
}



// FUNCTION 143e289b0 FUN_143e289b0 body=178 status=ok
// SIG undefined FUN_143e289b0(void)

int FUN_143e289b0(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined4 local_res10;
  undefined4 local_28;
  undefined4 local_24;
  
  local_res10 = param_2;
  if (*(int *)(param_1 + 0xc) == 0) {
    *(int *)(param_1 + 0x10) = param_2;
    local_24 = 0;
    local_28 = *(int *)(param_1 + 0x40);
    do {
      local_28 = local_28 + -1;
      plVar1 = *(longlong **)(param_1 + 0x18 + (longlong)local_28 * 8);
      if (plVar1 != (longlong *)0x0) {
        local_res10 = (**(code **)(*plVar1 + 0x18))(plVar1,local_res10 - local_24);
      }
      local_24 = 1;
    } while (0 < local_28);
    *(int *)(param_1 + 0xc) = local_res10;
  }
  return local_res10;
}



// FUNCTION 143e28a70 FUN_143e28a70 body=37 status=ok
// SIG undefined FUN_143e28a70(void)

undefined4 FUN_143e28a70(longlong param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xc) == 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
  }
  return param_2;
}



// FUNCTION 143e28aa0 FUN_143e28aa0 body=148 status=ok
// SIG undefined FUN_143e28aa0(void)

undefined4 FUN_143e28aa0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_res10;
  
  local_res10 = param_2;
  if (*(int *)(param_1 + 0xc) == 0) {
    *(undefined4 *)(param_1 + 0x10) = param_2;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))
                      (*(undefined8 *)(param_1 + 0x28),param_2);
    local_res10 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))
                            (*(undefined8 *)(param_1 + 0x20),iVar1 + -1);
    *(undefined4 *)(param_1 + 0xc) = local_res10;
  }
  return local_res10;
}



// FUNCTION 143e28b40 FUN_143e28b40 body=463 status=ok
// SIG undefined FUN_143e28b40(void)

undefined8 * FUN_143e28b40(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 *local_68;
  undefined1 local_30 [24];
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    FUN_143e27600(local_30,param_2);
    lVar2 = FUN_143ab3260(*(undefined8 *)(param_1 + 8),local_30);
    if (lVar2 == 0) {
      lVar2 = FUN_143a8d310(0x18);
      if (lVar2 == 0) {
        local_68 = (undefined8 *)0x0;
      }
      else {
        local_68 = (undefined8 *)FUN_143e27600(lVar2,param_2);
      }
      if (local_68 == (undefined8 *)0x0) {
        *param_3 = 7;
        UGameplayTask::~UGameplayTask(local_30);
        local_68 = (undefined8 *)0x0;
      }
      else {
        FUN_143ab3730(*(undefined8 *)(param_1 + 8),local_68,1,param_3);
        cVar1 = FUN_143a8b0e0(*param_3);
        if (cVar1 == '\0') {
          UGameplayTask::~UGameplayTask(local_30);
        }
        else {
          local_18 = local_68;
          if (local_68 != (undefined8 *)0x0) {
            (**(code **)*local_68)(local_68,1);
          }
          UGameplayTask::~UGameplayTask(local_30);
          local_68 = (undefined8 *)0x0;
        }
      }
    }
    else {
      local_68 = *(undefined8 **)(lVar2 + 0x10);
      UGameplayTask::~UGameplayTask(local_30);
    }
  }
  else {
    local_68 = (undefined8 *)0x0;
  }
  return local_68;
}



// FUNCTION 143e28d10 FUN_143e28d10 body=411 status=ok
// SIG undefined FUN_143e28d10(void)

undefined8 * FUN_143e28d10(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    if (param_2 == (undefined8 *)0x0) {
      *param_3 = 7;
      param_2 = (undefined8 *)0x0;
    }
    else {
      lVar2 = FUN_143ab3260(*(undefined8 *)(param_1 + 8),param_2);
      if (lVar2 == 0) {
        FUN_143ab3730(*(undefined8 *)(param_1 + 8),param_2,1,param_3);
        cVar1 = FUN_143a8b0e0(*param_3);
        if (cVar1 != '\0') {
          if (param_2 != (undefined8 *)0x0) {
            (**(code **)*param_2)(param_2,1);
          }
          param_2 = (undefined8 *)0x0;
        }
      }
      else {
        if (param_2 != (undefined8 *)0x0) {
          (**(code **)*param_2)(param_2,1);
        }
        param_2 = *(undefined8 **)(lVar2 + 0x10);
      }
    }
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      (**(code **)*param_2)(param_2,1);
    }
    param_2 = (undefined8 *)0x0;
  }
  return param_2;
}



// FUNCTION 143e28eb0 FUN_143e28eb0 body=52 status=ok
// SIG undefined FUN_143e28eb0(void)

void FUN_143e28eb0(longlong param_1,int param_2)

{
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(int *)(param_1 + 0x14) = param_2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) * 0x25 + param_2;
  return;
}



// FUNCTION 143e28ef0 FUN_143e28ef0 body=230 status=ok
// SIG undefined FUN_143e28ef0(void)

void FUN_143e28ef0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))(*(undefined8 *)(param_1 + 0x20),param_2);
  iVar1 = (**(code **)(*param_2 + 0x58))(param_2);
  if (iVar1 < *(int *)(param_1 + 0x18)) {
    (**(code **)(*param_2 + 0x70))(param_2,*(int *)(param_1 + 0x18) + -1);
    uVar2 = (**(code **)(*param_2 + 0x88))
                      (param_2,*(undefined1 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),0);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
  }
  else {
    uVar2 = (**(code **)(*param_2 + 0x88))
                      (param_2,*(undefined1 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
                       *(int *)(param_1 + 0x18) + -1);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
  }
  return;
}



// FUNCTION 143e28fe0 FUN_143e28fe0 body=57 status=ok
// SIG undefined FUN_143e28fe0(void)

void FUN_143e28fe0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x80))(param_2,*(undefined4 *)(param_1 + 0x10),1);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}



// FUNCTION 143e29020 FUN_143e29020 body=86 status=ok
// SIG undefined FUN_143e29020(void)

void FUN_143e29020(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))(*(undefined8 *)(param_1 + 0x18),param_2);
  uVar1 = (**(code **)(*param_2 + 0x80))(param_2,*(undefined4 *)(param_1 + 0x14),0);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}



// FUNCTION 143e29080 FUN_143e29080 body=502 status=ok
// SIG undefined FUN_143e29080(void)

void FUN_143e29080(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  local_48 = *(int *)(param_1 + 0x40) + -1;
  plVar1 = *(longlong **)(param_1 + 0x18 + (longlong)local_48 * 8);
  if (plVar1 == (longlong *)0x0) {
    local_40 = *(undefined4 *)(param_1 + 0x10);
  }
  else {
    local_40 = FUN_143a93e60(plVar1);
  }
  do {
    local_48 = local_48 + -1;
    if (*(longlong *)(param_1 + 0x18 + (longlong)local_48 * 8) != 0) {
      FUN_143e29bc0(*(undefined8 *)(param_1 + 0x18 + (longlong)local_48 * 8),
                    *(undefined4 *)(param_1 + 0x10),local_40,param_2);
    }
  } while (0 < local_48);
  local_48 = *(int *)(param_1 + 0x40) + -1;
  if (plVar1 == (longlong *)0x0) {
    (**(code **)(*param_2 + 0x80))
              (param_2,*(undefined4 *)(param_1 + 0x44 + (longlong)local_48 * 4),1);
  }
  else {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  }
  uVar2 = (**(code **)(*param_2 + 0x70))
                    (param_2,*(undefined2 *)(param_1 + 0x58 + (longlong)local_48 * 2));
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  while (local_48 = local_48 + -1, -1 < local_48) {
    local_44 = *(longlong *)(param_1 + 0x18 + (longlong)local_48 * 8) != 0;
    if (local_44) {
      local_3c = FUN_143a93e60(*(undefined8 *)(param_1 + 0x18 + (longlong)local_48 * 8));
      local_3c = *(int *)(param_1 + 0xc) - local_3c;
    }
    else {
      local_3c = *(int *)(param_1 + 0x44 + (longlong)local_48 * 4);
    }
    local_44 = !local_44;
    (**(code **)(*param_2 + 0x80))(param_2,local_3c,local_44);
    uVar2 = (**(code **)(*param_2 + 0x70))
                      (param_2,*(undefined2 *)(param_1 + 0x58 + (longlong)local_48 * 2));
    *(undefined4 *)(param_1 + 0xc) = uVar2;
  }
  return;
}



// FUNCTION 143e29280 FUN_143e29280 body=182 status=ok
// SIG undefined FUN_143e29280(void)

void FUN_143e29280(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143a93e60(*(undefined8 *)(param_1 + 0x28));
  FUN_143e29bc0(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x10),uVar1,param_2);
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x20))(*(undefined8 *)(param_1 + 0x28),param_2);
  uVar1 = FUN_143a93e60(*(undefined8 *)(param_1 + 0x20));
  (**(code **)(*param_2 + 0x90))(param_2,uVar1);
  uVar1 = (**(code **)(*param_2 + 0x70))(param_2,*(undefined2 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}



// FUNCTION 143e29340 FUN_143e29340 body=1254 status=ok
// SIG undefined FUN_143e29340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143e29340(longlong *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  int local_res10;
  undefined1 auStack_128 [32];
  int local_108;
  int local_f8;
  char local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  char acStack_e0 [4];
  undefined2 local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  int aiStack_90 [6];
  int aiStack_78 [4];
  undefined4 auStack_68 [14];
  undefined2 auStack_30 [16];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_f0 = 0;
  local_res10 = param_2;
  while( true ) {
    iVar2 = (**(code **)(*param_1 + 0x50))(param_1);
    if (param_5 <= iVar2) break;
    local_98 = *param_1;
    local_e4 = (**(code **)(local_98 + 0x38))(param_1,local_res10,param_4,param_5 / 2);
    uVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_e4,param_4);
    auStack_30[local_f0] = uVar1;
    local_108 = param_5 / 2;
    uVar3 = FUN_143e29340(param_1,local_res10,local_e4,param_4);
    auStack_68[local_f0] = uVar3;
    local_f0 = local_f0 + 1;
    local_res10 = local_e4;
    param_5 = param_5 - param_5 / 2;
  }
  local_f8 = 0;
  do {
    aiStack_90[local_f8] = local_res10;
    local_ec = local_res10;
    local_d0 = local_res10;
    local_dc = (**(code **)(*param_1 + 0x18))(param_1,local_res10,param_4);
    local_ec = local_ec + 1;
    local_ec = (**(code **)(*param_1 + 0x40))(param_1,local_ec,param_4,local_dc);
    if (local_res10 == local_ec + -1) {
      local_d4 = param_4 + 1;
      local_a8 = *param_1;
      iVar2 = (**(code **)(local_a8 + 0x10))(param_1,local_res10);
      if (local_d4 != iVar2) goto LAB_143e29567;
      local_f4 = '\x01';
    }
    else {
LAB_143e29567:
      local_f4 = '\0';
    }
    iVar2 = local_ec;
    acStack_e0[local_f8] = local_f4;
    local_res10 = local_ec;
    local_f8 = local_f8 + 1;
    if (param_5 + -1 <= local_f8) {
      aiStack_90[local_f8] = local_ec;
      do {
        iVar4 = local_f8 + -1;
        if (acStack_e0[iVar4] == '\0') {
          lVar5 = (longlong)local_f8;
          local_f8 = iVar4;
          iVar4 = FUN_143e29830(param_1,aiStack_90[iVar4],aiStack_90[lVar5],param_4 + 1);
          aiStack_78[local_f8] = iVar4;
          iVar4 = local_f8;
        }
        local_f8 = iVar4;
      } while (0 < local_f8);
      local_f8 = param_5 + -1;
      FUN_143e29830(param_1,iVar2,param_3,param_4 + 1);
      uVar1 = (**(code **)(*param_1 + 0x18))(param_1,iVar2,param_4);
      local_b0 = *param_1;
      local_e8 = (**(code **)(local_b0 + 0x70))(param_1,uVar1);
      while (local_f8 = local_f8 + -1, -1 < local_f8) {
        iVar2 = aiStack_90[local_f8];
        if (acStack_e0[local_f8] == '\0') {
          local_d8 = local_e8 - aiStack_78[local_f8];
        }
        else {
          local_d8 = (**(code **)(*param_1 + 0x20))(param_1,iVar2);
        }
        local_a0 = *param_1;
        (**(code **)(*param_1 + 0x80))(param_1,local_d8,acStack_e0[local_f8]);
        uVar1 = (**(code **)(*param_1 + 0x18))(param_1,iVar2,param_4);
        local_c8 = *param_1;
        local_e8 = (**(code **)(local_c8 + 0x70))(param_1,uVar1);
      }
      while (0 < local_f0) {
        local_f0 = local_f0 + -1;
        local_c0 = *param_1;
        (**(code **)(*param_1 + 0x90))(param_1,auStack_68[local_f0]);
        local_b8 = *param_1;
        local_e8 = (**(code **)(local_b8 + 0x70))(param_1,auStack_30[local_f0]);
      }
      return local_e8;
    }
  } while( true );
}



// FUNCTION 143e29830 FUN_143e29830 body=901 status=ok
// SIG undefined FUN_143e29830(void)

void FUN_143e29830(longlong *param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int local_res10;
  undefined1 local_48;
  int local_40;
  int local_38;
  undefined4 local_34;
  int local_30;
  
  local_48 = 0;
  local_34 = 0;
  iVar3 = (**(code **)(*param_1 + 0x10))(param_1,param_2);
  local_res10 = param_2;
  if (param_4 == iVar3) {
    local_34 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
    local_res10 = param_2 + 1;
    if (local_res10 == param_3) {
      (**(code **)(*param_1 + 0x80))(param_1,local_34,1);
      return;
    }
    local_48 = 1;
  }
  sVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_res10,param_4);
  sVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_3 + -1,param_4);
  if (sVar1 == sVar2) {
    local_40 = (**(code **)(*param_1 + 0x28))(param_1,local_res10,param_3 + -1,param_4);
    FUN_143e29830(param_1,local_res10,param_3,local_40);
    local_38 = local_40 - param_4;
    iVar3 = (**(code **)(*param_1 + 0x60))(param_1);
    while (iVar3 < local_38) {
      local_40 = local_40 - iVar3;
      local_38 = local_38 - iVar3;
      (**(code **)(*param_1 + 0x78))(param_1,local_res10,local_40,iVar3);
      iVar4 = (**(code **)(*param_1 + 0x58))(param_1);
      (**(code **)(*param_1 + 0x70))(param_1,iVar4 + -1 + iVar3);
    }
    (**(code **)(*param_1 + 0x78))(param_1,local_res10,param_4,local_38);
    iVar3 = (**(code **)(*param_1 + 0x58))(param_1);
    local_30 = iVar3 + -1 + local_38;
  }
  else {
    local_30 = (**(code **)(*param_1 + 0x30))(param_1,local_res10,param_3,param_4);
    FUN_143e29340(param_1,local_res10,param_3,param_4,local_30);
    local_30 = local_30 + -1;
    iVar3 = (**(code **)(*param_1 + 0x58))(param_1);
    if (iVar3 <= local_30) {
      (**(code **)(*param_1 + 0x70))(param_1,local_30);
      local_30 = 0;
    }
  }
  (**(code **)(*param_1 + 0x88))(param_1,local_48,local_34,local_30);
  return;
}



// FUNCTION 143e29bc0 FUN_143e29bc0 body=88 status=ok
// SIG undefined FUN_143e29bc0(void)

void FUN_143e29bc0(longlong *param_1,int param_2,int param_3,undefined8 param_4)

{
  if ((*(int *)((longlong)param_1 + 0xc) < 0) &&
     ((*(int *)((longlong)param_1 + 0xc) < param_3 || (param_2 < *(int *)((longlong)param_1 + 0xc)))
     )) {
    (**(code **)(*param_1 + 0x20))(param_1,param_4);
  }
  return;
}



// FUNCTION 143e29c20 FUN_143e29c20 body=27 status=ok
// SIG undefined FUN_143e29c20(void)

int FUN_143e29c20(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_143e27f20(param_1);
  return (int)cVar1;
}


