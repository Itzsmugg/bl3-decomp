// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143b06c10 FUN_143b06c10 body=188 status=ok
// SIG undefined FUN_143b06c10(void)

longlong FUN_143b06c10(undefined8 param_1,longlong param_2,char param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    if (param_3 == '\0') {
      uVar2 = (**(code **)(**(longlong **)(param_2 + 0x48) + 0x38))(*(longlong **)(param_2 + 0x48));
      lVar3 = FUN_143b07a80(param_1,uVar2,param_4);
      uVar4 = FUN_143b07740(param_2);
      FUN_143b08380(lVar3,uVar4);
      *(undefined8 *)(lVar3 + 0x60) = uVar2;
    }
    else {
      *param_4 = 0x10;
      lVar3 = 0;
    }
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 143b06cd0 FUN_143b06cd0 body=573 status=ok
// SIG undefined FUN_143b06cd0(void)

int FUN_143b06cd0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
                 undefined4 *param_6)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  int local_38;
  ushort local_34;
  int local_30;
  int local_24;
  int local_18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  cVar2 = FUN_143a8b0e0(*param_6);
  if (cVar2 == '\0') {
    if ((param_5 < 0) || (((local_res20 == 0 && (0 < param_5)) || (local_res18 < local_res10)))) {
      *param_6 = 1;
      local_38 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x70);
      uVar3 = FUN_143b06fd0(&local_res10,(longlong)iVar4);
      iVar4 = FUN_143b06fd0(&local_res18,(longlong)iVar4);
      local_38 = 0;
      plVar1 = *(longlong **)(param_1 + 0x48);
      (**(code **)(*plVar1 + 0x78))(plVar1,uVar3);
      local_30 = FUN_143a93e60(plVar1);
      local_24 = local_30;
      for (; local_30 < iVar4; local_30 = local_30 + local_18) {
        uVar5 = (**(code **)(*plVar1 + 0x28))(plVar1);
        if (uVar5 < 0x10000) {
          local_18 = 1;
        }
        else {
          local_18 = 2;
        }
        if (param_5 < local_38 + local_18) {
          local_38 = local_38 + local_18;
          *param_6 = 0xf;
        }
        else {
          local_34 = (ushort)uVar5;
          if (uVar5 < 0x10000) {
            *(ushort *)(local_res20 + (longlong)local_38 * 2) = local_34;
            local_38 = local_38 + 1;
          }
          else {
            *(short *)(local_res20 + (longlong)local_38 * 2) = (short)((int)uVar5 >> 10) + -0x2840;
            *(ushort *)(local_res20 + (longlong)(local_38 + 1) * 2) = local_34 & 0x3ff | 0xdc00;
            local_38 = local_38 + 2;
          }
          local_24 = local_30 + local_18;
        }
      }
      FUN_143b06920(param_1,(longlong)local_24,1);
      FUN_143ab4a70(local_res20,param_5,local_38,param_6);
    }
  }
  else {
    local_38 = 0;
  }
  return local_38;
}



// FUNCTION 143b06f10 FUN_143b06f10 body=38 status=ok
// SIG undefined FUN_143b06f10(void)

void FUN_143b06f10(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x48))(param_1,param_2);
  return;
}



// FUNCTION 143b06f40 FUN_143b06f40 body=60 status=ok
// SIG undefined FUN_143b06f40(void)

void FUN_143b06f40(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  FUN_143a8ee20(param_1,param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 143b06f80 FUN_143b06f80 body=68 status=ok
// SIG undefined FUN_143b06f80(void)

void FUN_143b06f80(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



// FUNCTION 143b06fd0 FUN_143b06fd0 body=71 status=ok
// SIG undefined FUN_143b06fd0(void)

undefined4 FUN_143b06fd0(longlong *param_1,longlong param_2)

{
  if (*param_1 < 0) {
    *param_1 = 0;
  }
  else if (param_2 < *param_1) {
    *param_1 = param_2;
  }
  return (int)*param_1;
}



// FUNCTION 143b07020 FUN_143b07020 body=68 status=ok
// SIG undefined FUN_143b07020(void)

void FUN_143b07020(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  FUN_143a8f0d0(param_1,param_2,param_3,param_4,0,param_5);
  return;
}



// FUNCTION 143b07070 FUN_143b07070 body=52 status=ok
// SIG undefined FUN_143b07070(void)

void FUN_143b07070(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))(param_1,param_2,param_3);
  return;
}



// FUNCTION 143b070b0 FUN_143b070b0 body=204 status=ok
// SIG undefined FUN_143b070b0(void)

void FUN_143b070b0(longlong param_1,ulonglong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  uVar1 = *param_2;
  if ((uVar1 < *(ulonglong *)(param_3 + 0x40)) ||
     ((ulonglong)((longlong)*(int *)(param_3 + 0x18) + *(longlong *)(param_3 + 0x40)) <= uVar1)) {
    if ((param_3 <= uVar1) && (uVar1 < param_3 + (longlong)*(int *)(param_3 + 0xc))) {
      *param_2 = param_1 + (uVar1 - param_3);
    }
  }
  else {
    *param_2 = (uVar1 - *(longlong *)(param_3 + 0x40)) + *(longlong *)(param_1 + 0x40);
  }
  return;
}



// FUNCTION 143b07180 FUN_143b07180 body=425 status=ok
// SIG undefined FUN_143b07180(void)

void * FUN_143b07180(undefined8 param_1,void *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  void *_Dst;
  undefined4 local_28;
  
  cVar4 = FUN_143a8b0e0(*param_3);
  if (cVar4 == '\0') {
    iVar1 = *(int *)((longlong)param_2 + 0x18);
    _Dst = (void *)FUN_143b084e0(param_1,iVar1,param_3);
    cVar4 = FUN_143a8b0e0(*param_3);
    if (cVar4 == '\0') {
      uVar3 = *(undefined8 *)((longlong)_Dst + 0x40);
      uVar2 = *(undefined4 *)((longlong)_Dst + 4);
      local_28 = *(int *)((longlong)param_2 + 0xc);
      if (*(int *)((longlong)_Dst + 0xc) < local_28) {
        local_28 = *(int *)((longlong)_Dst + 0xc);
      }
      _guard_xfg_dispatch_icall_nop(_Dst,param_2,(longlong)local_28);
      *(undefined8 *)((longlong)_Dst + 0x40) = uVar3;
      *(undefined4 *)((longlong)_Dst + 4) = uVar2;
      if (0 < iVar1) {
        _guard_xfg_dispatch_icall_nop
                  (*(void **)((longlong)_Dst + 0x40),*(void **)((longlong)param_2 + 0x40),
                   (longlong)iVar1);
      }
      FUN_143b070b0(_Dst,(longlong)_Dst + 0x48,param_2);
      FUN_143b070b0(_Dst,(longlong)_Dst + 0x50,param_2);
      FUN_143b070b0(_Dst,(longlong)_Dst + 0x58,param_2);
      FUN_143b070b0(_Dst,(longlong)_Dst + 0x60,param_2);
      FUN_143b070b0(_Dst,(longlong)_Dst + 0x30,param_2);
      *(uint *)((longlong)_Dst + 8) = *(uint *)((longlong)_Dst + 8) & 0xffffffdf;
    }
  }
  else {
    _Dst = (void *)0x0;
  }
  return _Dst;
}



// FUNCTION 143b07330 FUN_143b07330 body=91 status=ok
// SIG undefined FUN_143b07330(void)

undefined8
FUN_143b07330(undefined8 param_1,longlong param_2,undefined1 param_3,char param_4,undefined8 param_5
             )

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)(param_2 + 0x38) + 0x10))(param_1,param_2,param_3,param_5);
  if (param_4 != '\0') {
    FUN_143b07720(uVar1);
  }
  return uVar1;
}



// FUNCTION 143b07390 FUN_143b07390 body=248 status=ok
// SIG undefined FUN_143b07390(void)

int * FUN_143b07390(int *param_1)

{
  int *local_res8;
  
  if (((param_1 != (int *)0x0) && (*param_1 == 0x345ad82c)) && ((param_1[1] & 4U) != 0)) {
    if (*(longlong *)(*(longlong *)(param_1 + 0xe) + 0x50) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0xe) + 0x50))(param_1);
    }
    param_1[1] = param_1[1] & 0xfffffffb;
    if ((param_1[1] & 2U) != 0) {
      FUN_143aa79f0(*(undefined8 *)(param_1 + 0x10));
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[1] = param_1[1] & 0xfffffffd;
      param_1[6] = 0;
    }
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    if ((param_1[1] & 1U) != 0) {
      *param_1 = 0;
      FUN_143aa79f0(param_1);
      local_res8 = (int *)0x0;
      param_1 = local_res8;
    }
  }
  return param_1;
}



// FUNCTION 143b07490 FUN_143b07490 body=407 status=ok
// SIG undefined FUN_143b07490(void)

uint FUN_143b07490(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  uint local_20;
  
  if ((*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x2c)) &&
     (cVar3 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))
                        (param_1,*(undefined8 *)(param_1 + 0x10),1), cVar3 == '\0')) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (uint)*(ushort *)
                   (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x28) * 2);
    if ((uVar4 & 0xfffffc00) == 0xd800) {
      local_20 = 0;
      if (*(int *)(param_1 + 0x28) + 1 < *(int *)(param_1 + 0x2c)) {
        local_20 = (uint)*(ushort *)
                          (*(longlong *)(param_1 + 0x30) +
                          (longlong)(*(int *)(param_1 + 0x28) + 1) * 2);
      }
      else {
        uVar2 = *(undefined8 *)(param_1 + 0x10);
        uVar1 = *(undefined4 *)(param_1 + 0x28);
        cVar3 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))(param_1,uVar2,1);
        if (cVar3 != '\0') {
          local_20 = (uint)*(ushort *)
                            (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x28) * 2)
          ;
        }
        cVar3 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))(param_1,uVar2,0);
        *(undefined4 *)(param_1 + 0x28) = uVar1;
        if (cVar3 == '\0') {
          return 0xffffffff;
        }
      }
      if ((local_20 & 0xfffffc00) == 0xdc00) {
        uVar4 = uVar4 * 0x400 + -0x35fdc00 + local_20;
      }
    }
  }
  return uVar4;
}



// FUNCTION 143b07630 FUN_143b07630 body=154 status=ok
// SIG undefined FUN_143b07630(void)

undefined8 FUN_143b07630(int *param_1,int *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (*param_1 != 0x345ad82c)) ||
     (*param_2 != 0x345ad82c)) {
    uVar1 = 0;
  }
  else if (*(longlong *)(param_1 + 0xe) == *(longlong *)(param_2 + 0xe)) {
    if (*(longlong *)(param_1 + 0x12) == *(longlong *)(param_2 + 0x12)) {
      lVar2 = FUN_143b07740(param_1);
      lVar3 = FUN_143b07740(param_2);
      if (lVar2 == lVar3) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 143b076d0 FUN_143b076d0 body=79 status=ok
// SIG undefined FUN_143b076d0(void)

void FUN_143b076d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  (**(code **)(*(longlong *)(param_1 + 0x38) + 0x28))
            (param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 143b07720 FUN_143b07720 body=25 status=ok
// SIG undefined FUN_143b07720(void)

void FUN_143b07720(longlong param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffff7;
  return;
}



// FUNCTION 143b07740 FUN_143b07740 body=69 status=ok
// SIG undefined FUN_143b07740(void)

longlong FUN_143b07740(longlong param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x28)) {
    lVar1 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x40))(param_1);
  }
  else {
    lVar1 = (longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x20);
  }
  return lVar1;
}



// FUNCTION 143b07790 FUN_143b07790 body=367 status=ok
// SIG undefined FUN_143b07790(void)

undefined8 FUN_143b07790(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int local_res10;
  
  local_res10 = param_2;
  if (param_2 < 1) {
    for (; param_2 < 0; param_2 = param_2 + 1) {
      if ((*(int *)(param_1 + 0x28) < 1) &&
         (cVar1 = FUN_143b07070(param_1,*(undefined8 *)(param_1 + 0x20),0), cVar1 == '\0')) {
        return 0;
      }
      if ((*(ushort *)
            (*(longlong *)(param_1 + 0x30) + (longlong)(*(int *)(param_1 + 0x28) + -1) * 2) & 0xf800
          ) == 0xd800) {
        iVar2 = FUN_143b08190(param_1);
        if (iVar2 == -1) {
          return 0;
        }
      }
      else {
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      }
    }
  }
  else {
    do {
      if ((*(int *)(param_1 + 0x2c) <= *(int *)(param_1 + 0x28)) &&
         (cVar1 = FUN_143b07070(param_1,*(undefined8 *)(param_1 + 0x10),1), cVar1 == '\0')) {
        return 0;
      }
      if ((*(ushort *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x28) * 2) &
          0xf800) == 0xd800) {
        iVar2 = FUN_143b07920(param_1);
        if (iVar2 == -1) {
          return 0;
        }
      }
      else {
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      }
      local_res10 = local_res10 + -1;
    } while (0 < local_res10);
  }
  return 1;
}



// FUNCTION 143b07900 FUN_143b07900 body=31 status=ok
// SIG undefined FUN_143b07900(void)

void FUN_143b07900(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x38) + 0x18))(param_1);
  return;
}



// FUNCTION 143b07920 FUN_143b07920 body=349 status=ok
// SIG undefined FUN_143b07920(void)

uint FUN_143b07920(longlong param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x2c)) ||
     (cVar1 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))
                        (param_1,*(undefined8 *)(param_1 + 0x10),1), cVar1 != '\0')) {
    uVar2 = (uint)*(ushort *)
                   (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x28) * 2);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    if (((uVar2 & 0xfffffc00) == 0xd800) &&
       (((*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x2c) ||
         (cVar1 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))
                            (param_1,*(undefined8 *)(param_1 + 0x10),1), cVar1 != '\0')) &&
        (uVar3 = (uint)*(ushort *)
                        (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x28) * 2),
        (uVar3 & 0xfffffc00) == 0xdc00)))) {
      uVar2 = uVar2 * 0x400 + -0x35fdc00 + uVar3;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 143b07a80 FUN_143b07a80 body=353 status=ok
// SIG undefined FUN_143b07a80(void)

longlong FUN_143b07a80(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    iVar2 = FUN_143a91e00(param_2);
    if (iVar2 < 1) {
      lVar3 = FUN_143b084e0(param_1,0x40,param_3);
      cVar1 = FUN_143a8b110(*param_3);
      if (cVar1 != '\0') {
        *(undefined **)(lVar3 + 0x38) = &DAT_145d01ea0;
        *(undefined8 *)(lVar3 + 0x48) = param_2;
        *(undefined4 *)(lVar3 + 8) = 0;
        iVar2 = FUN_143a93e50(param_2);
        *(longlong *)(lVar3 + 0x70) = (longlong)iVar2;
        *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(lVar3 + 0x40);
        *(undefined4 *)(lVar3 + 0x78) = 0xffffffff;
        *(longlong *)(lVar3 + 0x58) = *(longlong *)(lVar3 + 0x40) + 0x20;
        *(undefined4 *)(lVar3 + 0x7c) = 0xffffffff;
        *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(lVar3 + 0x50);
        *(undefined8 *)(lVar3 + 0x20) = 0xffffffffffffffff;
        *(undefined4 *)(lVar3 + 0x28) = 1;
        *(undefined8 *)(lVar3 + 0x10) = 0;
        *(undefined4 *)(lVar3 + 0x2c) = 0;
        *(undefined4 *)(lVar3 + 0x1c) = *(undefined4 *)(lVar3 + 0x28);
      }
    }
    else {
      *param_3 = 0x10;
      lVar3 = 0;
    }
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 143b07bf0 FUN_143b07bf0 body=273 status=ok
// SIG undefined FUN_143b07bf0(void)

longlong FUN_143b07bf0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_143a8b110(*param_3);
  if ((cVar1 == '\0') || (cVar1 = FUN_143a90330(param_2), cVar1 == '\0')) {
    param_1 = FUN_143b084e0(param_1,0,param_3);
    cVar1 = FUN_143a8b110(*param_3);
    if (cVar1 != '\0') {
      *(undefined **)(param_1 + 0x38) = &DAT_145d01db0;
      *(undefined8 *)(param_1 + 0x48) = param_2;
      *(undefined4 *)(param_1 + 8) = 4;
      uVar3 = FUN_143a8fe10(param_2);
      *(undefined8 *)(param_1 + 0x30) = uVar3;
      uVar2 = FUN_143a904f0(param_2);
      *(undefined4 *)(param_1 + 0x2c) = uVar2;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(longlong *)(param_1 + 0x10) = (longlong)*(int *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x2c);
    }
  }
  else {
    FUN_143b07d10(param_1,0,0,param_3);
    *param_3 = 1;
  }
  return param_1;
}



// FUNCTION 143b07d10 FUN_143b07d10 body=375 status=ok
// SIG undefined FUN_143b07d10(void)

longlong FUN_143b07d10(undefined8 param_1,undefined *param_2,longlong param_3,undefined4 *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined *local_res10;
  longlong local_18;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    local_res10 = param_2;
    if ((param_2 == (undefined *)0x0) && (param_3 == 0)) {
      local_res10 = &DAT_145d01e90;
    }
    if (((local_res10 == (undefined *)0x0) || (param_3 < -1)) || (0x7fffffff < param_3)) {
      *param_4 = 1;
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_143b084e0(param_1,0,param_4);
      cVar1 = FUN_143a8b110(*param_4);
      if (cVar1 != '\0') {
        *(undefined **)(lVar2 + 0x38) = &DAT_145d01e20;
        *(undefined **)(lVar2 + 0x48) = local_res10;
        *(undefined4 *)(lVar2 + 8) = 4;
        if (param_3 == -1) {
          *(uint *)(lVar2 + 8) = *(uint *)(lVar2 + 8) | 2;
        }
        *(longlong *)(lVar2 + 0x70) = param_3;
        *(undefined **)(lVar2 + 0x30) = local_res10;
        *(undefined8 *)(lVar2 + 0x20) = 0;
        local_18 = param_3;
        if (param_3 < 0) {
          local_18 = 0;
        }
        *(longlong *)(lVar2 + 0x10) = local_18;
        *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)(lVar2 + 0x10);
        *(undefined4 *)(lVar2 + 0x28) = 0;
        *(undefined4 *)(lVar2 + 0x1c) = *(undefined4 *)(lVar2 + 0x2c);
      }
    }
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 143b07e90 FUN_143b07e90 body=325 status=ok
// SIG undefined FUN_143b07e90(void)

longlong FUN_143b07e90(undefined8 param_1,undefined *param_2,longlong param_3,undefined4 *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined *local_res10;
  undefined4 local_res18;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    local_res10 = param_2;
    if ((param_2 == (undefined *)0x0) && (param_3 == 0)) {
      local_res10 = &DAT_145d01d30;
    }
    if (((local_res10 == (undefined *)0x0) || (param_3 < -1)) || (0x7fffffff < param_3)) {
      *param_4 = 1;
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_143b084e0(param_1,0x1e0,param_4);
      cVar1 = FUN_143a8b0e0(*param_4);
      if (cVar1 == '\0') {
        *(undefined **)(lVar2 + 0x38) = &DAT_145d01cc0;
        *(undefined **)(lVar2 + 0x48) = local_res10;
        local_res18 = (undefined4)param_3;
        *(undefined4 *)(lVar2 + 0x78) = local_res18;
        *(undefined4 *)(lVar2 + 0x7c) = local_res18;
        if (*(int *)(lVar2 + 0x7c) < 0) {
          *(undefined4 *)(lVar2 + 0x7c) = 0;
          *(uint *)(lVar2 + 8) = *(uint *)(lVar2 + 8) | 2;
        }
        *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(lVar2 + 0x40);
        *(longlong *)(lVar2 + 0x58) = *(longlong *)(lVar2 + 0x40) + 0xf0;
      }
    }
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 143b07fe0 FUN_143b07fe0 body=92 status=ok
// SIG undefined FUN_143b07fe0(void)

longlong FUN_143b07fe0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_143b07bf0(param_1,param_2,param_3);
  cVar1 = FUN_143a8b110(*param_3);
  if (cVar1 != '\0') {
    *(uint *)(lVar2 + 8) = *(uint *)(lVar2 + 8) | 8;
  }
  return lVar2;
}



// FUNCTION 143b08040 FUN_143b08040 body=335 status=ok
// SIG undefined FUN_143b08040(void)

uint FUN_143b08040(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((*(longlong *)(param_1 + 0x20) < param_2) && (param_2 <= *(longlong *)(param_1 + 0x10))) {
    if ((longlong)*(int *)(param_1 + 0x1c) < param_2 - *(longlong *)(param_1 + 0x20)) {
      uVar2 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x48))(param_1,param_2);
      *(undefined4 *)(param_1 + 0x28) = uVar2;
      if ((*(int *)(param_1 + 0x28) == 0) &&
         (cVar1 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))(param_1,param_2,0),
         cVar1 == '\0')) {
        return 0xffffffff;
      }
    }
    else {
      *(int *)(param_1 + 0x28) = (int)param_2 - (int)*(undefined8 *)(param_1 + 0x20);
    }
  }
  else {
    cVar1 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))(param_1,param_2,0);
    if (cVar1 == '\0') {
      return 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
  uVar3 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x28) * 2);
  if ((uVar3 & 0xfffff800) == 0xd800) {
    FUN_143b08380(param_1,param_2);
    uVar3 = FUN_143b08190(param_1);
  }
  return uVar3;
}



// FUNCTION 143b08190 FUN_143b08190 body=338 status=ok
// SIG undefined FUN_143b08190(void)

uint FUN_143b08190(longlong param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*(int *)(param_1 + 0x28) < 1) &&
     (cVar1 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))
                        (param_1,*(undefined8 *)(param_1 + 0x20),0), cVar1 == '\0')) {
    uVar2 = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    uVar2 = (uint)*(ushort *)
                   (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x28) * 2);
    if (((uVar2 & 0xfffffc00) == 0xdc00) &&
       (((0 < *(int *)(param_1 + 0x28) ||
         (cVar1 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))
                            (param_1,*(undefined8 *)(param_1 + 0x20),0), cVar1 != '\0')) &&
        (uVar3 = (uint)*(ushort *)
                        (*(longlong *)(param_1 + 0x30) +
                        (longlong)(*(int *)(param_1 + 0x28) + -1) * 2),
        (uVar3 & 0xfffffc00) == 0xd800)))) {
      uVar2 = uVar3 * 0x400 + -0x35fdc00 + uVar2;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    }
  }
  return uVar2;
}



// FUNCTION 143b082f0 FUN_143b082f0 body=140 status=ok
// SIG undefined FUN_143b082f0(void)

undefined4
FUN_143b082f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 *param_6)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_143a8b0e0(*param_6);
  if (cVar1 == '\0') {
    if ((*(uint *)(param_1 + 8) & 8) == 0) {
      *param_6 = 0x1e;
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x30))
                        (param_1,param_2,param_3,param_4,param_5,param_6);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143b08380 FUN_143b08380 body=350 status=ok
// SIG undefined FUN_143b08380(void)

void FUN_143b08380(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < *(longlong *)(param_1 + 0x20)) || (*(longlong *)(param_1 + 0x10) <= param_2)) {
    (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))(param_1,param_2,1);
  }
  else if (*(int *)(param_1 + 0x1c) < (int)param_2 - (int)*(undefined8 *)(param_1 + 0x20)) {
    uVar1 = (**(code **)(*(longlong *)(param_1 + 0x38) + 0x48))(param_1,param_2);
    *(undefined4 *)(param_1 + 0x28) = uVar1;
  }
  else {
    *(int *)(param_1 + 0x28) = (int)param_2 - (int)*(undefined8 *)(param_1 + 0x20);
  }
  if ((*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x2c)) &&
     ((*(ushort *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x28) * 2) & 0xfc00)
      == 0xdc00)) {
    if (*(int *)(param_1 + 0x28) == 0) {
      (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))(param_1,*(undefined8 *)(param_1 + 0x20),0)
      ;
    }
    if ((0 < *(int *)(param_1 + 0x28)) &&
       ((*(ushort *)(*(longlong *)(param_1 + 0x30) + (longlong)(*(int *)(param_1 + 0x28) + -1) * 2)
        & 0xfc00) == 0xd800)) {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    }
  }
  return;
}



// FUNCTION 143b084e0 FUN_143b084e0 body=794 status=ok
// SIG undefined FUN_143b084e0(void)

int * FUN_143b084e0(int *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int *piVar5;
  int *local_res8;
  int local_28;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  local_res8 = param_1;
  if (cVar1 == '\0') {
    if (param_1 == (int *)0x0) {
      local_28 = 0x90;
      if (0 < param_2) {
        local_28 = param_2 + 0x90;
      }
      local_res8 = (int *)FUN_143aa7a40((longlong)local_28);
      if (local_res8 == (int *)0x0) {
        *param_3 = 7;
        return (int *)0x0;
      }
      puVar4 = &DAT_145d01f10;
      piVar5 = local_res8;
      for (lVar3 = 0x90; lVar3 != 0; lVar3 = lVar3 + -1) {
        *(undefined1 *)piVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        piVar5 = (int *)((longlong)piVar5 + 1);
      }
      local_res8[1] = local_res8[1] | 1;
      if (0 < local_28) {
        local_res8[6] = param_2;
        *(int **)(local_res8 + 0x10) = local_res8 + 0x24;
      }
    }
    else {
      if (*param_1 != 0x345ad82c) {
        *param_3 = 1;
        return param_1;
      }
      if (((param_1[1] & 4U) != 0) && (*(longlong *)(*(longlong *)(param_1 + 0xe) + 0x50) != 0)) {
        (**(code **)(*(longlong *)(param_1 + 0xe) + 0x50))(param_1);
      }
      param_1[1] = param_1[1] & 0xfffffffb;
      if (param_1[6] < param_2) {
        if ((param_1[1] & 2U) != 0) {
          FUN_143aa79f0(*(undefined8 *)(param_1 + 0x10));
          param_1[6] = 0;
        }
        uVar2 = FUN_143aa7a40((longlong)param_2);
        *(undefined8 *)(param_1 + 0x10) = uVar2;
        if (*(longlong *)(param_1 + 0x10) == 0) {
          *param_3 = 7;
        }
        else {
          param_1[6] = param_2;
          param_1[1] = param_1[1] | 2;
        }
      }
    }
    cVar1 = FUN_143a8b110(*param_3);
    if (cVar1 != '\0') {
      local_res8[1] = local_res8[1] | 4;
      local_res8[0x12] = 0;
      local_res8[0x13] = 0;
      local_res8[0xc] = 0;
      local_res8[0xd] = 0;
      local_res8[0x14] = 0;
      local_res8[0x15] = 0;
      local_res8[0x16] = 0;
      local_res8[0x17] = 0;
      local_res8[0x18] = 0;
      local_res8[0x19] = 0;
      local_res8[0x1c] = 0;
      local_res8[0x1d] = 0;
      local_res8[0x1e] = 0;
      local_res8[0x1f] = 0;
      local_res8[10] = 0;
      local_res8[0xb] = 0;
      local_res8[8] = 0;
      local_res8[9] = 0;
      local_res8[4] = 0;
      local_res8[5] = 0;
      local_res8[7] = 0;
      local_res8[2] = 0;
      local_res8[0x20] = 0;
      local_res8[0x21] = 0;
      local_res8[0x22] = 0;
      local_res8[0x23] = 0;
      local_res8[0x1a] = 0;
      local_res8[0x1b] = 0;
      if ((*(longlong *)(local_res8 + 0x10) != 0) && (0 < local_res8[6])) {
        _guard_xfg_dispatch_icall_nop(*(void **)(local_res8 + 0x10),0,(longlong)local_res8[6]);
      }
    }
  }
  return local_res8;
}



// FUNCTION 143b08800 FUN_143b08800 body=638 status=ok
// SIG undefined FUN_143b08800(void)

ushort * FUN_143b08800(ushort *param_1,int param_2,int *param_3,longlong param_4,int param_5,
                      undefined8 param_6)

{
  byte bVar1;
  uint uVar2;
  ushort *puVar3;
  longlong lVar4;
  ushort local_38;
  int local_34;
  int local_30;
  int local_2c;
  ushort *local_28;
  longlong local_20;
  ushort *local_18;
  ushort *local_10;
  
  if (param_1 == (ushort *)0x0) {
    local_18 = (ushort *)0x0;
  }
  else {
    local_18 = param_1 + param_2;
  }
  local_10 = local_18;
  local_34 = 0;
  local_30 = 0;
  local_28 = param_1;
  local_20 = param_4;
  while( true ) {
    while( true ) {
      while( true ) {
        if ((param_5 <= local_34) || (local_10 <= local_28)) goto LAB_143b0898b;
        bVar1 = *(byte *)(local_20 + local_34);
        local_34 = local_34 + 1;
        if (0x7f < bVar1) break;
        local_38 = (ushort)bVar1;
        *local_28 = local_38;
        local_28 = local_28 + 1;
      }
      uVar2 = FUN_143ab96e0(local_20,&local_34,param_5,bVar1,0xfd);
      local_38 = (ushort)uVar2;
      if (0xffff < uVar2) break;
      *local_28 = local_38;
      local_28 = local_28 + 1;
    }
    *local_28 = (short)((int)uVar2 >> 10) + 0xd7c0;
    puVar3 = local_28 + 1;
    if (local_10 <= puVar3) break;
    *puVar3 = local_38 & 0x3ff | 0xdc00;
    local_28 = local_28 + 2;
  }
  local_30 = local_30 + 1;
  local_28 = puVar3;
LAB_143b0898b:
  while (local_34 < param_5) {
    lVar4 = (longlong)local_34;
    local_34 = local_34 + 1;
    if (*(byte *)(local_20 + lVar4) < 0x80) {
      local_30 = local_30 + 1;
    }
    else {
      uVar2 = FUN_143ab96e0(local_20,&local_34,param_5,*(byte *)(local_20 + lVar4),0xfd);
      if (uVar2 < 0x10000) {
        local_2c = 1;
      }
      else {
        local_2c = 2;
      }
      local_30 = local_30 + local_2c;
    }
  }
  local_30 = local_30 + (int)((longlong)local_28 - (longlong)param_1 >> 1);
  if (param_3 != (int *)0x0) {
    *param_3 = local_30;
  }
  FUN_143ab4a70(param_1,param_2,local_30,param_6);
  return param_1;
}



// FUNCTION 143b08a80 FUN_143b08a80 body=116 status=ok
// SIG undefined FUN_143b08a80(void)

longlong FUN_143b08a80(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_143a8ac30(param_1 + 0x78);
  lVar1 = (ulonglong)**(ushort **)(param_2 + 8) + *(longlong *)(param_2 + 8);
  FUN_143b08c80(param_1,lVar1,param_3,param_4,lVar1,uVar2);
  *(longlong *)(param_1 + 0x70) = param_2;
  return param_1;
}



// FUNCTION 143b08b00 FUN_143b08b00 body=88 status=ok
// SIG undefined FUN_143b08b00(void)

void FUN_143b08b00(undefined8 *param_1)

{
  if (param_1[0xe] == 0) {
    if (*(char *)(param_1 + 0x14) == '\0') {
      FUN_143aa79f0(*param_1);
    }
  }
  else {
    FUN_143ac56d0(param_1[0xe]);
  }
  FUN_143a8dc60(param_1 + 0xf);
  return;
}



// FUNCTION 143b08b60 FUN_143b08b60 body=114 status=ok
// SIG undefined FUN_143b08b60(void)

undefined8 FUN_143b08b60(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*param_1 == *param_2) {
    uVar2 = 1;
  }
  else if (*(int *)(*param_1 + 8) == *(int *)(*param_2 + 8)) {
    iVar1 = _guard_xfg_dispatch_icall_nop
                      ((void *)*param_1,(void *)*param_2,(ulonglong)*(uint *)(*param_1 + 8));
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143b08be0 FUN_143b08be0 body=54 status=ok
// SIG undefined FUN_143b08be0(void)

undefined8 FUN_143b08be0(undefined8 param_1,uint param_2)

{
  FUN_143b08b00(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b08c20 FUN_143b08c20 body=36 status=ok
// SIG undefined FUN_143b08c20(void)

longlong FUN_143b08c20(longlong param_1)

{
  FUN_143a910b0(param_1 + 0x68);
  return param_1;
}



// FUNCTION 143b08c50 FUN_143b08c50 body=15 status=ok
// SIG undefined FUN_143b08c50(void)

longlong FUN_143b08c50(longlong param_1)

{
  return param_1 + 0x78;
}



// FUNCTION 143b08c60 FUN_143b08c60 body=17 status=ok
// SIG undefined FUN_143b08c60(void)

undefined4 FUN_143b08c60(longlong *param_1)

{
  return *(undefined4 *)(*param_1 + 0x14);
}



// FUNCTION 143b08c80 FUN_143b08c80 body=595 status=ok
// SIG undefined FUN_143b08c80(void)

void FUN_143b08c80(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    *param_1 = param_2;
    if ((*(int *)*param_1 == 0xb1a0) && (*(char *)(*param_1 + 4) == '\x03')) {
      *(undefined1 *)(param_1 + 0x14) = 0;
      param_1[0xe] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      if (*(int *)(param_2 + 0x14) != 0) {
        param_1[1] = param_2 + (ulonglong)*(uint *)(*param_1 + 0x10);
      }
      if (*(int *)(param_2 + 0x1c) != 0) {
        param_1[2] = param_2 + (ulonglong)*(uint *)(*param_1 + 0x18);
      }
      if (*(int *)(param_2 + 0x24) != 0) {
        param_1[3] = param_2 + (ulonglong)*(uint *)(*param_1 + 0x20);
      }
      if (*(int *)(param_2 + 0x2c) != 0) {
        param_1[4] = param_2 + (ulonglong)*(uint *)(*param_1 + 0x28);
      }
      FUN_143b0f970(param_1 + 8,param_2 + (ulonglong)*(uint *)(*param_1 + 0x30),
                    *(undefined4 *)(*param_1 + 0x34),param_3);
      cVar1 = FUN_143a8b0e0(*param_3);
      if (cVar1 == '\0') {
        param_1[10] = (longlong)&LAB_143b08f40;
        param_1[5] = param_2 + (ulonglong)*(uint *)(*param_1 + 0x38);
        FUN_143a90d80(param_1 + 0xf,1,param_1[5],0xffffffff);
        param_1[6] = param_2 + (ulonglong)*(uint *)(*param_1 + 0x40);
        *(int *)(param_1 + 7) = SUB164(ZEXT416(*(uint *)(param_2 + 0x44)) / ZEXT816(4),0);
        *(undefined4 *)(param_1 + 0xd) = 1;
      }
    }
    else {
      *param_3 = 3;
    }
  }
  return;
}



// FUNCTION 143b08ee0 FUN_143b08ee0 body=94 status=ok
// SIG undefined FUN_143b08ee0(void)

void FUN_143b08ee0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_143a91090(param_1 + 0x68);
  if ((iVar1 == 0) && (param_1 != 0)) {
    FUN_143b08be0(param_1,1);
  }
  return;
}



// FUNCTION 143b08f70 FUN_143b08f70 body=143 status=ok
// SIG undefined FUN_143b08f70(void)

undefined8 *
FUN_143b08f70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::UVector::vftable;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_143b09320(param_1,8,param_2,param_4,uVar1);
  return param_1;
}



// FUNCTION 143b09000 FUN_143b09000 body=146 status=ok
// SIG undefined FUN_143b09000(void)

undefined8 *
FUN_143b09000(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::UVector::vftable;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_143b09320(param_1,param_2,param_3,param_4,uVar1);
  return param_1;
}



// FUNCTION 143b090a0 FUN_143b090a0 body=155 status=ok
// SIG undefined FUN_143b090a0(void)

undefined8 *
FUN_143b090a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::UVector::vftable;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = param_3;
  FUN_143b09320(param_1,8,param_4);
  return param_1;
}



// FUNCTION 143b09140 FUN_143b09140 body=154 status=ok
// SIG undefined FUN_143b09140(void)

undefined8 *
FUN_143b09140(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::UVector::vftable;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = param_3;
  FUN_143b09320(param_1,param_4,param_5);
  return param_1;
}



// FUNCTION 143b091e0 FUN_143b091e0 body=88 status=ok
// SIG undefined FUN_143b091e0(void)

void FUN_143b091e0(undefined8 *param_1)

{
  *param_1 = icu_53::UVector::vftable;
  FUN_143b09b10(param_1);
  FUN_143aa79f0(param_1[2]);
  param_1[2] = 0;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143b09240 FUN_143b09240 body=156 status=ok
// SIG undefined FUN_143b09240(void)

undefined8 FUN_143b09240(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  int local_18;
  
  if (*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      for (local_18 = 0; local_18 < *(int *)(param_1 + 8); local_18 = local_18 + 1) {
        cVar1 = (**(code **)(param_1 + 0x20))
                          (*(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)local_18 * 8),
                           *(undefined8 *)(*(longlong *)(param_2 + 0x10) + (longlong)local_18 * 8));
        if (cVar1 == '\0') {
          return 0;
        }
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143b092e0 FUN_143b092e0 body=54 status=ok
// SIG undefined FUN_143b092e0(void)

undefined8 FUN_143b092e0(undefined8 param_1,uint param_2)

{
  FUN_143b091e0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b09320 FUN_143b09320 body=132 status=ok
// SIG undefined FUN_143b09320(void)

void FUN_143b09320(longlong param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_res10;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    if ((param_2 < 1) || (local_res10 = param_2, 0xfffffff < param_2)) {
      local_res10 = 8;
    }
    uVar2 = FUN_143aa7a40((longlong)local_res10 << 3);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      *param_3 = 7;
    }
    else {
      *(int *)(param_1 + 0xc) = local_res10;
    }
  }
  return;
}



// FUNCTION 143b093b0 FUN_143b093b0 body=126 status=ok
// SIG undefined FUN_143b093b0(void)

void FUN_143b093b0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_143b096b0(param_1,*(int *)(param_1 + 8) + 1,param_3);
  if (cVar1 != '\0') {
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 8) * 8) = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 8) * 8) = param_2;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}



// FUNCTION 143b09430 FUN_143b09430 body=103 status=ok
// SIG undefined FUN_143b09430(void)

void FUN_143b09430(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_143b096b0(param_1,*(int *)(param_1 + 8) + 1,param_3);
  if (cVar1 != '\0') {
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 8) * 8) = param_2;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}



// FUNCTION 143b094a0 FUN_143b094a0 body=247 status=ok
// SIG undefined FUN_143b094a0(void)

void FUN_143b094a0(longlong param_1,longlong param_2,code *param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 local_18;
  
  cVar1 = FUN_143b096b0(param_1,*(undefined4 *)(param_2 + 8),param_4);
  if (cVar1 != '\0') {
    FUN_143b09cc0(param_1,*(undefined4 *)(param_2 + 8),param_4);
    cVar1 = FUN_143a8b110(*param_4);
    if (cVar1 != '\0') {
      for (local_18 = 0; local_18 < *(int *)(param_2 + 8); local_18 = local_18 + 1) {
        if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)local_18 * 8) != 0) &&
           (*(longlong *)(param_1 + 0x18) != 0)) {
          (**(code **)(param_1 + 0x18))
                    (*(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)local_18 * 8));
        }
        (*param_3)(*(longlong *)(param_1 + 0x10) + (longlong)local_18 * 8,
                   *(longlong *)(param_2 + 0x10) + (longlong)local_18 * 8);
      }
    }
  }
  return;
}



// FUNCTION 143b095a0 FUN_143b095a0 body=101 status=ok
// SIG undefined FUN_143b095a0(void)

undefined8 FUN_143b095a0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int local_18;
  
  local_18 = 0;
  while( true ) {
    iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_2);
    if (iVar1 <= local_18) {
      return 1;
    }
    iVar1 = FUN_143b097d0(param_1,*(undefined8 *)
                                   (*(longlong *)(param_2 + 0x10) + (longlong)local_18 * 8),0,0);
    if (iVar1 < 0) break;
    local_18 = local_18 + 1;
  }
  return 0;
}



// FUNCTION 143b09610 FUN_143b09610 body=75 status=ok
// SIG undefined FUN_143b09610(void)

undefined8 FUN_143b09610(longlong param_1,int param_2)

{
  undefined8 local_18;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 8) <= param_2)) {
    local_18 = 0;
  }
  else {
    local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)param_2 * 8);
  }
  return local_18;
}



// FUNCTION 143b09660 FUN_143b09660 body=71 status=ok
// SIG undefined FUN_143b09660(void)

undefined4 FUN_143b09660(longlong param_1,int param_2)

{
  undefined4 local_18;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 8) <= param_2)) {
    local_18 = 0;
  }
  else {
    local_18 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)param_2 * 8);
  }
  return local_18;
}



// FUNCTION 143b096b0 FUN_143b096b0 body=237 status=ok
// SIG undefined FUN_143b096b0(void)

undefined8 FUN_143b096b0(longlong param_1,int param_2,undefined4 *param_3)

{
  longlong lVar1;
  int local_18;
  
  if (param_2 < 0) {
    *param_3 = 1;
    return 0;
  }
  if (*(int *)(param_1 + 0xc) < param_2) {
    if (0x3fffffff < *(int *)(param_1 + 0xc)) {
      *param_3 = 1;
      return 0;
    }
    local_18 = *(int *)(param_1 + 0xc) << 1;
    if (local_18 < param_2) {
      local_18 = param_2;
    }
    if (0xfffffff < local_18) {
      *param_3 = 1;
      return 0;
    }
    lVar1 = FUN_143aa7aa0(*(undefined8 *)(param_1 + 0x10),(longlong)local_18 << 3);
    if (lVar1 == 0) {
      *param_3 = 7;
      return 0;
    }
    *(longlong *)(param_1 + 0x10) = lVar1;
    *(int *)(param_1 + 0xc) = local_18;
  }
  return 1;
}



// FUNCTION 143b097a0 FUN_143b097a0 body=19 status=ok
// SIG undefined FUN_143b097a0(void)

void FUN_143b097a0(void)

{
  FUN_143b097c0();
  return;
}



// FUNCTION 143b097c0 FUN_143b097c0 body=8 status=ok
// SIG undefined FUN_143b097c0(void)

undefined * FUN_143b097c0(void)

{
  return &DAT_146bc7c24;
}



// FUNCTION 143b097d0 FUN_143b097d0 body=238 status=ok
// SIG undefined FUN_143b097d0(void)

int FUN_143b097d0(longlong param_1,longlong param_2,int param_3,byte param_4)

{
  char cVar1;
  int local_res10;
  int local_18;
  
  local_18 = param_3;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    for (; local_18 < *(int *)(param_1 + 8); local_18 = local_18 + 1) {
      if ((param_4 & 1) == 0) {
        local_res10 = (int)param_2;
        if (local_res10 == *(int *)(*(longlong *)(param_1 + 0x10) + (longlong)local_18 * 8)) {
          return local_18;
        }
      }
      else if (param_2 == *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)local_18 * 8)) {
        return local_18;
      }
    }
  }
  else {
    for (; local_18 < *(int *)(param_1 + 8); local_18 = local_18 + 1) {
      cVar1 = (**(code **)(param_1 + 0x20))
                        (param_2,*(undefined8 *)
                                  (*(longlong *)(param_1 + 0x10) + (longlong)local_18 * 8));
      if (cVar1 != '\0') {
        return local_18;
      }
    }
  }
  return -1;
}



// FUNCTION 143b098c0 FUN_143b098c0 body=57 status=ok
// SIG undefined FUN_143b098c0(void)

void FUN_143b098c0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_143b097d0(param_1,param_2,param_3,1);
  return;
}



// FUNCTION 143b09900 FUN_143b09900 body=208 status=ok
// SIG undefined FUN_143b09900(void)

void FUN_143b09900(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 local_18;
  
  if ((-1 < param_3) && (param_3 <= *(int *)(param_1 + 8))) {
    cVar1 = FUN_143b096b0(param_1,*(int *)(param_1 + 8) + 1,param_4);
    if (cVar1 != '\0') {
      for (local_18 = *(int *)(param_1 + 8); param_3 < local_18; local_18 = local_18 + -1) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)local_18 * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)(local_18 + -1) * 8);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)param_3 * 8) = param_2;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
  }
  return;
}



// FUNCTION 143b099d0 FUN_143b099d0 body=165 status=ok
// SIG undefined FUN_143b099d0(void)

undefined8 FUN_143b099d0(longlong param_1,int param_2)

{
  undefined4 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 8))) {
    local_10 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)param_2 * 8);
    for (local_18 = param_2; local_18 < *(int *)(param_1 + 8) + -1; local_18 = local_18 + 1) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)local_18 * 8) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)(local_18 + 1) * 8);
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  }
  return local_10;
}



// FUNCTION 143b09a80 FUN_143b09a80 body=131 status=ok
// SIG undefined FUN_143b09a80(void)

undefined1 FUN_143b09a80(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  while( true ) {
    iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_2);
    if (iVar1 <= local_14) break;
    iVar1 = FUN_143b097d0(param_1,*(undefined8 *)
                                   (*(longlong *)(param_2 + 0x10) + (longlong)local_14 * 8),0,0);
    if (-1 < iVar1) {
      FUN_143b09be0(param_1,iVar1);
      local_18 = 1;
    }
    local_14 = local_14 + 1;
  }
  return local_18;
}



// FUNCTION 143b09b10 FUN_143b09b10 body=121 status=ok
// SIG undefined FUN_143b09b10(void)

void FUN_143b09b10(longlong param_1)

{
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    for (local_18 = 0; local_18 < *(int *)(param_1 + 8); local_18 = local_18 + 1) {
      if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)local_18 * 8) != 0) {
        (**(code **)(param_1 + 0x18))
                  (*(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)local_18 * 8));
      }
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 143b09b90 FUN_143b09b90 body=68 status=ok
// SIG undefined FUN_143b09b90(void)

bool FUN_143b09b90(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_143b098c0(param_1,param_2,0);
  if (-1 < iVar1) {
    FUN_143b09be0(param_1,iVar1);
  }
  return -1 < iVar1;
}



// FUNCTION 143b09be0 FUN_143b09be0 body=70 status=ok
// SIG undefined FUN_143b09be0(void)

void FUN_143b09be0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_143b099d0(param_1,param_2);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    (**(code **)(param_1 + 0x18))(lVar1);
  }
  return;
}



// FUNCTION 143b09c30 FUN_143b09c30 body=130 status=ok
// SIG undefined FUN_143b09c30(void)

undefined1 FUN_143b09c30(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
             ::GetIndex(param_1);
  while (local_14 = local_14 + -1, -1 < local_14) {
    iVar1 = FUN_143b097d0(param_2,*(undefined8 *)
                                   (*(longlong *)(param_1 + 0x10) + (longlong)local_14 * 8),0,0);
    if (iVar1 < 0) {
      FUN_143b09be0(param_1,local_14);
      local_18 = 1;
    }
  }
  return local_18;
}



// FUNCTION 143b09cc0 FUN_143b09cc0 body=222 status=ok
// SIG undefined FUN_143b09cc0(void)

void FUN_143b09cc0(longlong param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  int local_18;
  
  if (-1 < param_2) {
    if (*(int *)(param_1 + 8) < param_2) {
      cVar1 = FUN_143b096b0(param_1,param_2,param_3);
      if (cVar1 == '\0') {
        return;
      }
      for (local_18 = *(int *)(param_1 + 8); local_18 < param_2; local_18 = local_18 + 1) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)local_18 * 8) = 0;
      }
    }
    else {
      local_18 = *(int *)(param_1 + 8);
      while (local_18 = local_18 + -1, param_2 <= local_18) {
        FUN_143b09be0(param_1,local_18);
      }
    }
    *(int *)(param_1 + 8) = param_2;
  }
  return;
}



// FUNCTION 143b09da0 FUN_143b09da0 body=292 status=ok
// SIG undefined FUN_143b09da0(void)

void FUN_143b09da0(longlong param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_20 = 0;
  iVar2 = *(int *)(param_1 + 8);
  while (local_1c = iVar2, local_20 != local_1c) {
    iVar2 = (local_20 + local_1c) / 2;
    cVar1 = (*param_3)(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 8),param_2)
    ;
    if (cVar1 < '\x01') {
      local_20 = iVar2 + 1;
      iVar2 = local_1c;
    }
  }
  cVar1 = FUN_143b096b0(param_1,*(int *)(param_1 + 8) + 1,param_4);
  if (cVar1 != '\0') {
    for (local_24 = *(int *)(param_1 + 8); local_20 < local_24; local_24 = local_24 + -1) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)local_24 * 8) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)(local_24 + -1) * 8);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)local_20 * 8) = param_2;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}



// FUNCTION 143b09ed0 FUN_143b09ed0 body=64 status=ok
// SIG undefined FUN_143b09ed0(void)

void FUN_143b09ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143b09da0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143b09f10 FUN_143b09f10 body=54 status=ok
// SIG undefined FUN_143b09f10(void)

undefined8 * FUN_143b09f10(undefined8 *param_1,undefined8 param_2)

{
  FUN_143b08f70(param_1,param_2);
  *param_1 = icu_53::UStack::vftable;
  return param_1;
}



// FUNCTION 143b09f50 FUN_143b09f50 body=74 status=ok
// SIG undefined FUN_143b09f50(void)

undefined8 *
FUN_143b09f50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143b090a0(param_1,param_2,param_3,param_4);
  *param_1 = icu_53::UStack::vftable;
  return param_1;
}



// FUNCTION 143b09fa0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::UStack::vftable;
  FUN_143b091e0(param_1);
  return;
}



// FUNCTION 143b09fd0 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b0a010 FUN_143b0a010 body=19 status=ok
// SIG undefined FUN_143b0a010(void)

void FUN_143b0a010(void)

{
  FUN_143b0a030();
  return;
}



// FUNCTION 143b0a030 FUN_143b0a030 body=8 status=ok
// SIG undefined FUN_143b0a030(void)

undefined * FUN_143b0a030(void)

{
  return &DAT_146bc7c25;
}



// FUNCTION 143b0a040 FUN_143b0a040 body=84 status=ok
// SIG undefined FUN_143b0a040(void)

undefined8 FUN_143b0a040(undefined8 param_1)

{
  int iVar1;
  undefined8 local_10;
  
  iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_1);
  iVar1 = iVar1 + -1;
  local_10 = 0;
  if (-1 < iVar1) {
    local_10 = FUN_143b09610(param_1,iVar1);
    FUN_143b09be0(param_1,iVar1);
  }
  return local_10;
}



// FUNCTION 143b0a0a0 FUN_143b0a0a0 body=81 status=ok
// SIG undefined FUN_143b0a0a0(void)

undefined4 FUN_143b0a0a0(undefined8 param_1)

{
  int iVar1;
  undefined4 local_14;
  
  iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_1);
  iVar1 = iVar1 + -1;
  local_14 = 0;
  if (-1 < iVar1) {
    local_14 = FUN_143b09660(param_1,iVar1);
    FUN_143b09be0(param_1,iVar1);
  }
  return local_14;
}



// FUNCTION 143b0a100 FUN_143b0a100 body=99 status=ok
// SIG undefined FUN_143b0a100(void)

undefined8 *
FUN_143b0a100(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::BytesDictionaryMatcher::vftable;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  param_1[3] = param_4;
  return param_1;
}



// FUNCTION 143b0a170 GetTestRenderTransformPivot body=26 status=ok
// SIG undefined GetTestRenderTransformPivot(void)

undefined8 * GetTestRenderTransformPivot(undefined8 *param_1)

{
  *param_1 = icu_53::DictionaryMatcher::vftable;
  return param_1;
}



// FUNCTION 143b0a190 FUN_143b0a190 body=62 status=ok
// SIG undefined FUN_143b0a190(void)

undefined8 * FUN_143b0a190(undefined8 *param_1)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::ICULanguageBreakFactory::vftable;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 143b0a1d0 GetTestRenderTransformPivot body=26 status=ok
// SIG undefined GetTestRenderTransformPivot(void)

undefined8 * GetTestRenderTransformPivot(undefined8 *param_1)

{
  *param_1 = icu_53::LanguageBreakEngine::vftable;
  return param_1;
}



// FUNCTION 143b0a1f0 GetTestRenderTransformPivot body=26 status=ok
// SIG undefined GetTestRenderTransformPivot(void)

undefined8 * GetTestRenderTransformPivot(undefined8 *param_1)

{
  *param_1 = icu_53::LanguageBreakFactory::vftable;
  return param_1;
}



// FUNCTION 143b0a210 FUN_143b0a210 body=82 status=ok
// SIG undefined FUN_143b0a210(void)

undefined8 * FUN_143b0a210(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::UCharsDictionaryMatcher::vftable;
  param_1[1] = param_2;
  param_1[2] = param_3;
  return param_1;
}



// FUNCTION 143b0a270 FUN_143b0a270 body=97 status=ok
// SIG undefined FUN_143b0a270(void)

undefined8 * FUN_143b0a270(undefined8 *param_1)

{
  int local_18;
  
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::UnhandledEngine::vftable;
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    param_1[(longlong)local_18 + 1] = 0;
  }
  return param_1;
}



// FUNCTION 143b0a2e0 FUN_143b0a2e0 body=130 status=ok
// SIG undefined FUN_143b0a2e0(void)

void FUN_143b0a2e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::ICULanguageBreakFactory::vftable;
  if ((param_1[1] != 0) && (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143b0a370 ~RtAudioError body=21 status=ok
// SIG undefined ~RtAudioError(void)

void RtAudioError::~RtAudioError(undefined8 *param_1)

{
  *param_1 = icu_53::LanguageBreakEngine::vftable;
  return;
}



// FUNCTION 143b0a390 ~RtAudioError body=21 status=ok
// SIG undefined ~RtAudioError(void)

void RtAudioError::~RtAudioError(undefined8 *param_1)

{
  *param_1 = icu_53::LanguageBreakFactory::vftable;
  return;
}



// FUNCTION 143b0a3b0 FUN_143b0a3b0 body=171 status=ok
// SIG undefined FUN_143b0a3b0(void)

void FUN_143b0a3b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int local_38;
  
  *param_1 = icu_53::UnhandledEngine::vftable;
  for (local_38 = 0; local_38 < 4; local_38 = local_38 + 1) {
    if ((param_1[(longlong)local_38 + 1] != 0) &&
       (puVar1 = (undefined8 *)param_1[(longlong)local_38 + 1], puVar1 != (undefined8 *)0x0)) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143b0a460 FUN_143b0a460 body=54 status=ok
// SIG undefined FUN_143b0a460(void)

undefined8 FUN_143b0a460(undefined8 param_1,uint param_2)

{
  ~collate<>(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b0a4a0 FUN_143b0a4a0 body=54 status=ok
// SIG undefined FUN_143b0a4a0(void)

undefined8 FUN_143b0a4a0(undefined8 param_1,uint param_2)

{
  RtAudioError::~RtAudioError(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b0a4e0 FUN_143b0a4e0 body=54 status=ok
// SIG undefined FUN_143b0a4e0(void)

undefined8 FUN_143b0a4e0(undefined8 param_1,uint param_2)

{
  FUN_143b0a2e0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b0a520 FUN_143b0a520 body=54 status=ok
// SIG undefined FUN_143b0a520(void)

undefined8 FUN_143b0a520(undefined8 param_1,uint param_2)

{
  RtAudioError::~RtAudioError(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b0a560 FUN_143b0a560 body=54 status=ok
// SIG undefined FUN_143b0a560(void)

undefined8 FUN_143b0a560(undefined8 param_1,uint param_2)

{
  RtAudioError::~RtAudioError(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b0a5a0 FUN_143b0a5a0 body=54 status=ok
// SIG undefined FUN_143b0a5a0(void)

undefined8 FUN_143b0a5a0(undefined8 param_1,uint param_2)

{
  ~collate<>(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b0a5e0 FUN_143b0a5e0 body=54 status=ok
// SIG undefined FUN_143b0a5e0(void)

undefined8 FUN_143b0a5e0(undefined8 param_1,uint param_2)

{
  FUN_143b0a3b0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b0a620 FUN_143b0a620 body=246 status=ok
// SIG undefined FUN_143b0a620(void)

undefined8
FUN_143b0a620(longlong param_1,undefined8 param_2,int param_3,int param_4,char param_5,int param_6)

{
  char cVar1;
  int iVar2;
  undefined4 local_18;
  
  if ((-1 < param_6) && (param_6 < 4)) {
    local_18 = FUN_143b07490(param_2);
    if (param_5 == '\0') {
      while ((iVar2 = FUN_143b07740(param_2), iVar2 < param_4 &&
             (cVar1 = (**(code **)(**(longlong **)(param_1 + 8 + (longlong)param_6 * 8) + 0x30))
                                (*(undefined8 *)(param_1 + 8 + (longlong)param_6 * 8),local_18),
             cVar1 != '\0'))) {
        FUN_143b07920(param_2);
        local_18 = FUN_143b07490(param_2);
      }
    }
    else {
      while ((iVar2 = FUN_143b07740(param_2), param_3 < iVar2 &&
             (cVar1 = (**(code **)(**(longlong **)(param_1 + 8 + (longlong)param_6 * 8) + 0x30))
                                (*(undefined8 *)(param_1 + 8 + (longlong)param_6 * 8),local_18),
             cVar1 != '\0'))) {
        local_18 = FUN_143b08190(param_2);
      }
    }
  }
  return 0;
}



// FUNCTION 143b0a720 FUN_143b0a720 body=964 status=ok
// SIG undefined FUN_143b0a720(void)

longlong * FUN_143b0a720(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  int local_94;
  longlong *local_90;
  undefined4 local_88 [2];
  undefined8 *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  longlong local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  longlong *local_30;
  undefined8 *local_28;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_90 = (longlong *)0x0;
  local_88[0] = 0;
  FUN_143ab2410(0);
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    local_94 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
               ::GetIndex(param_1[1]);
    do {
      local_90 = (longlong *)0x0;
      local_94 = local_94 + -1;
      if (local_94 < 0) break;
      local_90 = (longlong *)FUN_143b09610(param_1[1],local_94);
    } while ((local_90 == (longlong *)0x0) ||
            (cVar2 = (**(code **)(*local_90 + 8))(local_90,param_2,param_3), cVar2 == '\0'));
  }
  FUN_143ab2470(0);
  if (local_90 == (longlong *)0x0) {
    if (lVar1 == 0) {
      local_58 = FUN_143a8d310(0x28);
      if (local_58 == 0) {
        local_50 = (undefined8 *)0x0;
      }
      else {
        local_50 = (undefined8 *)FUN_143b09f50(local_58,FUN_143a8d180,0,local_88);
      }
      local_38 = local_50;
      local_80 = local_50;
      cVar2 = FUN_143a8b110(local_88[0]);
      if ((cVar2 == '\0') || (local_80 != (undefined8 *)0x0)) {
        cVar2 = FUN_143a8b0e0(local_88[0]);
        if (cVar2 == '\0') {
          FUN_143ab2410(0);
          if (param_1[1] == 0) {
            param_1[1] = (longlong)local_80;
            local_80 = (undefined8 *)0x0;
          }
          FUN_143ab2470(0);
          local_28 = local_80;
          local_60 = local_80;
          if (local_80 == (undefined8 *)0x0) {
            local_40 = 0;
          }
          else {
            local_40 = (**(code **)*local_80)(local_80,1);
          }
        }
        else {
          local_48 = local_80;
          local_68 = local_80;
          if (local_80 == (undefined8 *)0x0) {
            local_18 = 0;
          }
          else {
            local_18 = (**(code **)*local_80)(local_80,1);
          }
          local_80 = (undefined8 *)0x0;
        }
      }
      else {
        local_88[0] = 7;
      }
    }
    if (param_1[1] == 0) {
      local_90 = (longlong *)0x0;
    }
    else {
      local_78 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
      FUN_143ab2410(0);
      local_94 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                 ::GetIndex(param_1[1]);
      while ((local_94 = local_94 + -1, -1 < local_94 &&
             ((local_90 = (longlong *)FUN_143b09610(param_1[1],local_94),
              local_90 == (longlong *)0x0 ||
              (cVar2 = (**(code **)(*local_90 + 8))(local_90,param_2,param_3), cVar2 == '\0'))))) {
        local_90 = (longlong *)0x0;
      }
      if ((local_90 == (longlong *)0x0) && (local_78 != (longlong *)0x0)) {
        FUN_143acb220(param_1[1],local_78,local_88);
        local_90 = local_78;
        local_78 = (longlong *)0x0;
      }
      FUN_143ab2470(0);
      local_30 = local_78;
      local_70 = local_78;
      if (local_78 != (longlong *)0x0) {
        (**(code **)*local_78)(local_78,1);
      }
    }
  }
  return local_90;
}



// FUNCTION 143b0aaf0 FUN_143b0aaf0 body=279 status=ok
// SIG undefined FUN_143b0aaf0(void)

void FUN_143b0aaf0(longlong param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if ((-1 < param_3) && (param_3 < 4)) {
    if (*(longlong *)(param_1 + 8 + (longlong)param_3 * 8) == 0) {
      local_30 = FUN_143a8d310(0x58);
      if (local_30 == 0) {
        local_28 = 0;
      }
      else {
        local_28 = FUN_143b11ea0(local_30);
      }
      local_20 = local_28;
      *(undefined8 *)(param_1 + 8 + (longlong)param_3 * 8) = local_28;
      if (*(longlong *)(param_1 + 8 + (longlong)param_3 * 8) == 0) {
        return;
      }
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8 + (longlong)param_3 * 8) + 0x30))
                      (*(undefined8 *)(param_1 + 8 + (longlong)param_3 * 8),param_2);
    if (cVar1 == '\0') {
      local_38 = 0;
      local_34 = FUN_143b10c90(param_2,0x100a);
      FUN_143b17570(*(undefined8 *)(param_1 + 8 + (longlong)param_3 * 8),0x100a,local_34,&local_38);
    }
  }
  return;
}



// FUNCTION 143b0ac10 FUN_143b0ac10 body=119 status=ok
// SIG undefined FUN_143b0ac10(void)

undefined1 FUN_143b0ac10(longlong param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  
  if ((((-1 < param_3) && (param_3 < 4)) &&
      (*(longlong *)(param_1 + 8 + (longlong)param_3 * 8) != 0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 8 + (longlong)param_3 * 8) + 0x30))
                        (*(undefined8 *)(param_1 + 8 + (longlong)param_3 * 8),param_2),
     cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 143b0ac90 FUN_143b0ac90 body=1191 status=ok
// SIG undefined FUN_143b0ac90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143b0ac90(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  int local_1c4;
  undefined8 local_1c0;
  int local_1b8;
  uint local_1b4;
  int local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  int *local_188;
  int local_180;
  int *local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [64];
  undefined1 local_a8 [64];
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_f0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  local_1c8 = 0;
  local_1c0 = FUN_143aa5b10("icudt53l-brkitr",&DAT_145af3922,&local_1c8);
  local_1c0 = FUN_143aa3350(local_1c0,"dictionaries",local_1c0,&local_1c8);
  local_1c4 = 0;
  uVar2 = FUN_143b11760(param_2);
  local_1a0 = FUN_143aa4fe0(local_1c0,uVar2,&local_1c4,&local_1c8);
  cVar1 = FUN_143a8b0e0(local_1c8);
  if (cVar1 == '\0') {
    FUN_143aa03f0(local_e8);
    FUN_143aa03f0(local_a8);
    local_190 = FUN_143ab3d20(local_1a0,0x2e,local_1c4);
    if (local_190 != 0) {
      local_1b0 = (int)(local_190 - local_1a0 >> 1);
      local_118 = FUN_143a8d4f0(local_40,0,local_190 + 2,(local_1c4 - local_1b0) + -1);
      local_100 = local_118;
      FUN_143ad0270(local_a8,local_118,&local_1c8);
      FUN_143a8dc60(local_40);
      local_1c4 = local_1b0;
    }
    local_138 = FUN_143a8d4f0(local_68,0,local_1a0,local_1c4);
    local_110 = local_138;
    FUN_143ad0270(local_e8,local_138,&local_1c8);
    FUN_143a8dc60(local_68);
    FUN_143aa2ef0(local_1c0);
    local_128 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_e8);
    uVar2 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_a8);
    local_1a8 = FUN_143ac54b0("icudt53l-brkitr",uVar2,local_128,&local_1c8);
    cVar1 = FUN_143a8b110(local_1c8);
    if (cVar1 == '\0') {
      if (local_1a0 == 0) {
        local_120 = 0;
        TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
        ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_a8);
        TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
        ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_e8);
        local_140 = local_120;
      }
      else {
        local_1c8 = 0;
        local_130 = 0;
        TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
        ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_a8);
        TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
        ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_e8);
        local_140 = local_130;
      }
    }
    else {
      local_188 = (int *)FUN_143ac5780(local_1a8);
      local_1b8 = *local_188;
      local_1b4 = local_188[4] & 7;
      local_198 = 0;
      local_178 = local_188;
      if (local_1b4 == 0) {
        local_180 = local_188[5];
        local_108 = (longlong)local_188 + (longlong)local_1b8;
        local_158 = FUN_143a8d310(0x20);
        if (local_158 == 0) {
          local_160 = 0;
        }
        else {
          local_160 = FUN_143b0a100(local_158,local_108,local_180,local_1a8);
        }
        local_150 = local_160;
        local_198 = local_160;
      }
      else if (local_1b4 == 1) {
        local_f8 = (longlong)local_188 + (longlong)local_1b8;
        local_168 = FUN_143a8d310(0x18);
        if (local_168 == 0) {
          local_170 = 0;
        }
        else {
          local_170 = FUN_143b0a210(local_168,local_f8,local_1a8);
        }
        local_148 = local_170;
        local_198 = local_170;
      }
      if (local_198 == 0) {
        FUN_143ac56d0(local_1a8);
      }
      local_140 = local_198;
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_a8);
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_e8);
    }
  }
  else {
    FUN_143aa2ef0(local_1c0);
    local_140 = 0;
  }
  return local_140;
}



// FUNCTION 143b0b140 FUN_143b0b140 body=904 status=ok
// SIG undefined FUN_143b0b140(void)

undefined8 * FUN_143b0b140(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 local_e8 [2];
  undefined8 *local_e0;
  int local_d8;
  undefined8 *local_d0;
  int local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  longlong local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_e8[0] = 0;
  local_c8 = FUN_143a9f1a0(param_2,local_e8);
  cVar1 = FUN_143a8b110(local_e8[0]);
  if ((cVar1 == '\0') ||
     (local_d0 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,local_c8,param_3),
     local_d0 == (undefined8 *)0x0)) {
    local_e0 = (undefined8 *)0x0;
  }
  else {
    local_e0 = (undefined8 *)0x0;
    local_d8 = local_c8 + -0x11;
    switch(local_d8) {
    case 0:
    case 3:
    case 5:
      local_78 = FUN_143a8d310(0x1d0);
      if (local_78 == 0) {
        local_68 = (undefined8 *)0x0;
      }
      else {
        local_68 = (undefined8 *)FUN_143b1a600(local_78,local_d0,1,local_e8);
      }
      local_20 = local_68;
      local_e0 = local_68;
      break;
    case 1:
      local_b0 = FUN_143a8d310(0x1d0);
      if (local_b0 == 0) {
        local_88 = (undefined8 *)0x0;
      }
      else {
        local_88 = (undefined8 *)FUN_143b1a600(local_b0,local_d0,0,local_e8);
      }
      local_40 = local_88;
      local_e0 = local_88;
      break;
    case 6:
      local_70 = FUN_143a8d310(0x1d0);
      if (local_70 == 0) {
        local_a8 = (undefined8 *)0x0;
      }
      else {
        local_a8 = (undefined8 *)FUN_143b1a9a0(local_70,local_d0,local_e8);
      }
      local_30 = local_a8;
      local_e0 = local_a8;
      break;
    case 7:
      local_80 = FUN_143a8d310(0x1d0);
      if (local_80 == 0) {
        local_90 = (undefined8 *)0x0;
      }
      else {
        local_90 = (undefined8 *)FUN_143b1ac90(local_80,local_d0,local_e8);
      }
      local_50 = local_90;
      local_e0 = local_90;
      break;
    case 0x15:
      local_98 = FUN_143a8d310(0x228);
      if (local_98 == 0) {
        local_a0 = (undefined8 *)0x0;
      }
      else {
        local_a0 = (undefined8 *)FUN_143b1b040(local_98,local_d0,local_e8);
      }
      local_60 = local_a0;
      local_e0 = local_a0;
    }
    if (local_e0 == (undefined8 *)0x0) {
      local_58 = local_d0;
      local_c0 = local_d0;
      if (local_d0 != (undefined8 *)0x0) {
        (**(code **)*local_d0)(local_d0,1);
      }
    }
    else {
      cVar1 = FUN_143a8b0e0(local_e8[0]);
      if (cVar1 != '\0') {
        local_38 = local_e0;
        local_b8 = local_e0;
        if (local_e0 != (undefined8 *)0x0) {
          (**(code **)*local_e0)(local_e0,1);
        }
        local_e0 = (undefined8 *)0x0;
      }
    }
  }
  return local_e0;
}



// FUNCTION 143b0b500 FUN_143b0b500 body=385 status=ok
// SIG undefined FUN_143b0b500(void)

undefined8 FUN_143b0b500(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  int iVar2;
  int local_20;
  int local_1c;
  int local_18;
  
  if (param_1 == 0) {
    FUN_143a90e90(param_2);
  }
  else {
    FUN_143a8dcd0(param_2,param_1);
    local_20 = 0;
    local_18 = FUN_143acddd0(param_2,0x40);
    iVar2 = FUN_143acddd0(param_2,0x2e);
    if ((-1 < iVar2) && (iVar2 < local_18)) {
      local_18 = iVar2;
    }
    if (local_18 < 0) {
      local_18 = FUN_143a904f0(param_2);
    }
    local_1c = FUN_143acddd0(param_2,0x5f);
    if (local_1c < 0) {
      local_1c = local_18;
    }
    for (; local_20 < local_1c; local_20 = local_20 + 1) {
      uVar1 = FUN_143a8e4f0(param_2,local_20);
      if ((0x40 < uVar1) && (uVar1 < 0x5b)) {
        FUN_143a90bc0(param_2,local_20,uVar1 + 0x20);
      }
    }
    for (; local_20 < local_18; local_20 = local_20 + 1) {
      uVar1 = FUN_143a8e4f0(param_2,local_20);
      if ((0x60 < uVar1) && (uVar1 < 0x7b)) {
        FUN_143a90bc0(param_2,local_20,uVar1 - 0x20);
      }
    }
  }
  return param_2;
}



// FUNCTION 143b0b690 FUN_143b0b690 body=1017 status=ok
// SIG undefined FUN_143b0b690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143b0b690(undefined8 param_1)

{
  char cVar1;
  undefined1 auStack_158 [32];
  undefined4 local_138 [2];
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined1 local_78 [64];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_80 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_138[0] = 0;
  FUN_143ab2410(0);
  local_130 = DAT_146bc7c28;
  FUN_143ab2470(0);
  if (local_130 == 0) {
    local_d8 = FUN_143a8d310(0x58);
    if (local_d8 == 0) {
      local_f0 = 0;
    }
    else {
      local_f0 = FUN_143acbcf0(local_d8,local_138);
    }
    local_b8 = local_f0;
    local_130 = local_f0;
    if ((local_f0 == 0) || (cVar1 = FUN_143a8b0e0(local_138[0]), cVar1 != '\0')) {
      return 0;
    }
    <lambda_04c79fd4136733a528ca0b360569665b>::operator()
              (local_130,FID_conflict__InternalDeleteHelper<Concurrency::details::WorkQueue>);
    FUN_143ab2410(0);
    local_120 = DAT_146bc7c28;
    if (DAT_146bc7c28 == 0) {
      local_120 = local_130;
      DAT_146bc7c28 = local_130;
      local_130 = 0;
      FUN_143aa77b0(3,FUN_143b0bdb0);
    }
    FUN_143ab2470(0);
    if (local_130 != 0) {
      local_98 = local_130;
      local_100 = local_130;
      if (local_130 == 0) {
        local_d0 = 0;
      }
      else {
        local_d0 = FID_conflict__scalar_deleting_destructor_(local_130,1);
      }
    }
    local_130 = local_120;
  }
  FUN_143ab2410(0);
  local_128 = <lambda_04c79fd4136733a528ca0b360569665b>::operator()(local_130,param_1);
  FUN_143ab2470(0);
  local_a0 = local_128;
  if (local_128 == 0) {
    local_e0 = FUN_143a8d310(0x58);
    if (local_e0 == 0) {
      local_110 = 0;
    }
    else {
      local_110 = FUN_143acbcf0(local_e0,local_138);
    }
    local_88 = local_110;
    local_128 = local_110;
    local_a0 = local_110;
    if ((local_110 != 0) &&
       (cVar1 = FUN_143a8b110(local_138[0]), local_a0 = local_128, cVar1 != '\0')) {
      FUN_143aa03f0(local_78);
      FUN_143ad0270(local_78,param_1,local_138);
      cVar1 = FUN_143ac4710(local_78);
      if (cVar1 == '\0') {
        local_108 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                    ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_78);
      }
      else {
        local_108 = 0;
      }
      local_a8 = local_108;
      local_e8 = FUN_143aa5570(local_108,local_138);
      while (local_f8 = FUN_143abe040(local_e8,0,local_138), local_f8 != 0) {
        local_c8 = FUN_143a8dad0(local_38,local_f8);
        local_90 = local_c8;
        FUN_143acdfd0(local_128,local_c8,local_128,local_138);
        FUN_143a8dc60(local_38);
      }
      FUN_143abddd0(local_e8);
      cVar1 = FUN_143a8b0e0(local_138[0]);
      if (cVar1 == '\0') {
        FUN_143ab2410(0);
        FUN_143acdfd0(local_130,param_1,local_128,local_138);
        FUN_143ab2470(0);
        TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
        ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_78);
        local_a0 = local_128;
      }
      else {
        local_c0 = local_128;
        local_118 = local_128;
        if (local_128 == 0) {
          local_b0 = 0;
        }
        else {
          local_b0 = FID_conflict__scalar_deleting_destructor_(local_128,1);
        }
        local_a0 = 0;
        TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
        ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_78);
      }
    }
  }
  return local_a0;
}



// FUNCTION 143b0ba90 FUN_143b0ba90 body=80 status=ok
// SIG undefined FUN_143b0ba90(void)

void FUN_143b0ba90(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_143a904f0(param_1);
  uVar2 = FUN_143a904f0(param_2);
  FUN_143a90160(param_1,param_2,0,uVar2,0,uVar1);
  return;
}



// FUNCTION 143b0bae0 FUN_143b0bae0 body=76 status=ok
// SIG undefined FUN_143b0bae0(void)

void FUN_143b0bae0(undefined8 param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  int local_res18 [4];
  
  local_res18[0] = param_3;
  FUN_143a906b0(param_1,local_res18);
  iVar1 = FUN_143a904f0(param_1);
  FUN_143a8eef0(param_1,param_2,local_res18[0],iVar1 - local_res18[0]);
  return;
}



// FUNCTION 143b0bb30 FUN_143b0bb30 body=399 status=ok
// SIG undefined FUN_143b0bb30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b0bb30(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_268 [32];
  int local_248;
  undefined4 local_240;
  int local_238;
  int local_234;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined1 local_218 [384];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_220 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  cVar1 = FUN_143a90330(param_1);
  if ((cVar1 == '\0') && (iVar2 = FUN_143a904f0(param_1), iVar2 < 0x80)) {
    local_238 = 0;
    while (local_234 = FUN_143b0bae0(param_1,0x40,local_238), -1 < local_234) {
      local_248 = 0x80 - local_238;
      local_240 = 0;
      FUN_143a8f880(param_1,local_238,local_234 - local_238,local_98 + local_238);
      local_98[local_234] = 0x40;
      local_238 = local_234 + 1;
    }
    local_248 = 0x80 - local_238;
    local_240 = 0;
    FUN_143a8f880(param_1,local_238,0x7fffffff,local_98 + local_238);
    local_230 = FUN_143a8b2a0(local_218,local_98);
    local_228 = local_230;
    FUN_143a8adb0(param_2,local_230);
    FUN_143a8acf0(local_218);
    return param_2;
  }
  FUN_143a8d000(param_2);
  return param_2;
}



// FUNCTION 143b0bcd0 FUN_143b0bcd0 body=178 status=ok
// SIG undefined FUN_143b0bcd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b0bcd0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  cVar1 = FUN_143b0bd90(param_1);
  if (cVar1 == '\0') {
    uVar2 = FUN_143a8c200(param_1);
    local_58 = FUN_143a8d9f0(local_40,uVar2,0xffffffff,0);
    local_50 = local_58;
    FUN_143a8e070(param_2,local_58);
    FUN_143a8dc60(local_40);
  }
  else {
    FUN_143a90e90(param_2);
  }
  return param_2;
}



// FUNCTION 143b0bd90 FUN_143b0bd90 body=18 status=ok
// SIG undefined FUN_143b0bd90(void)

undefined1 FUN_143b0bd90(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x175);
}



// FUNCTION 143b0bdb0 FUN_143b0bdb0 body=93 status=ok
// SIG undefined FUN_143b0bdb0(void)

undefined8 FUN_143b0bdb0(void)

{
  if (DAT_146bc7c28 != 0) {
    if (DAT_146bc7c28 != 0) {
      FID_conflict__scalar_deleting_destructor_(DAT_146bc7c28,1);
    }
    DAT_146bc7c28 = 0;
  }
  return 1;
}



// FUNCTION 143b0be10 FUN_143b0be10 body=135 status=ok
// SIG undefined FUN_143b0be10(void)

undefined8 *
FUN_143b0be10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = param_1;
  for (lVar2 = 8; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
  }
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::ResourceBundle::vftable;
  param_1[2] = 0;
  uVar1 = FUN_143a8c200(param_3);
  uVar1 = FUN_143aa5b10(param_2,uVar1,param_4);
  param_1[1] = uVar1;
  return param_1;
}



// FUNCTION 143b0bea0 FUN_143b0bea0 body=157 status=ok
// SIG undefined FUN_143b0bea0(void)

void FUN_143b0bea0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::ResourceBundle::vftable;
  if (param_1[1] != 0) {
    FUN_143aa2ef0(param_1[1]);
  }
  if ((param_1[2] != 0) && (puVar1 = (undefined8 *)param_1[2], puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143b0bf40 FUN_143b0bf40 body=54 status=ok
// SIG undefined FUN_143b0bf40(void)

undefined8 FUN_143b0bf40(undefined8 param_1,uint param_2)

{
  FUN_143b0bea0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b0bf80 FUN_143b0bf80 body=19 status=ok
// SIG undefined FUN_143b0bf80(void)

void FUN_143b0bf80(void)

{
  FUN_143b0bfa0();
  return;
}



// FUNCTION 143b0bfa0 FUN_143b0bfa0 body=8 status=ok
// SIG undefined FUN_143b0bfa0(void)

undefined * FUN_143b0bfa0(void)

{
  return &DAT_146bc7c60;
}



// FUNCTION 143b0bfb0 FUN_143b0bfb0 body=274 status=ok
// SIG undefined FUN_143b0bfb0(void)

CXMLParser *
FUN_143b0bfb0(CXMLParser *param_1,IXMLDOMNode *param_2,undefined8 param_3,longlong param_4,
             undefined4 param_5)

{
  char cVar1;
  int iVar2;
  
  CXMLParser::CXMLParser(param_1,param_2);
  *(undefined ***)param_1 = icu_53::LocaleKey::vftable;
  *(undefined4 *)(param_1 + 0x30) = param_5;
  FUN_143a8d3a0(param_1 + 0x38,param_3);
  FUN_143a8ac30(param_1 + 0x60);
  FUN_143a8ac30(param_1 + 0x88);
  FUN_143a90e90(param_1 + 0x60);
  iVar2 = FUN_143a904f0(param_1 + 0x38);
  if ((iVar2 != 0) && (param_4 != 0)) {
    cVar1 = FUN_143b0c130(param_1 + 0x38,param_4);
    if (cVar1 != '\0') {
      FUN_143a8dcd0(param_1 + 0x60,param_4);
    }
  }
  FUN_143a8dcd0(param_1 + 0x88,param_1 + 0x38);
  return param_1;
}



// FUNCTION 143b0c0d0 FUN_143b0c0d0 body=92 status=ok
// SIG undefined FUN_143b0c0d0(void)

void FUN_143b0c0d0(undefined8 *param_1)

{
  *param_1 = icu_53::LocaleKey::vftable;
  FUN_143a8dc60(param_1 + 0x11);
  FUN_143a8dc60(param_1 + 0xc);
  FUN_143a8dc60(param_1 + 7);
  FUN_143acc190(param_1);
  return;
}



// FUNCTION 143b0c130 FUN_143b0c130 body=58 status=ok
// SIG undefined FUN_143b0c130(void)

bool FUN_143b0c130(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_143a8dd00(param_1,param_2);
  return cVar1 == '\0';
}



// FUNCTION 143b0c170 FUN_143b0c170 body=54 status=ok
// SIG undefined FUN_143b0c170(void)

undefined8 FUN_143b0c170(undefined8 param_1,uint param_2)

{
  FUN_143b0c0d0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b0c1b0 FUN_143b0c1b0 body=41 status=ok
// SIG undefined FUN_143b0c1b0(void)

void FUN_143b0c1b0(longlong param_1,undefined8 param_2)

{
  FUN_143a8e070(param_2,param_1 + 0x38);
  return;
}



// FUNCTION 143b0c1e0 SetQuests body=41 status=ok
// SIG undefined SetQuests(void)

void UDarwinQuestsManager::SetQuests(longlong param_1,undefined8 param_2)

{
  FUN_143b0bb30(param_1 + 0x38,param_2);
  return;
}



// FUNCTION 143b0c210 FUN_143b0c210 body=50 status=ok
// SIG undefined FUN_143b0c210(void)

void FUN_143b0c210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143b0c250(param_1,param_2,0xffffffff,param_3);
  return;
}



// FUNCTION 143b0c250 FUN_143b0c250 body=263 status=ok
// SIG undefined FUN_143b0c250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b0c250(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if ((param_1 != 0) && (cVar1 = FUN_143a8b0e0(*param_4), cVar1 == '\0')) {
    FUN_143a8ac30(local_40);
    FUN_143b0b500(param_1,local_40);
    local_68 = FUN_143a8d310(0xb0);
    if (local_68 == 0) {
      local_60 = 0;
    }
    else {
      local_78 = param_3;
      local_60 = FUN_143b0bfb0(local_68,param_1,local_40,param_2);
    }
    local_58 = local_60;
    local_50 = local_60;
    FUN_143a8dc60(local_40);
    return local_50;
  }
  return 0;
}



// FUNCTION 143b0c360 FUN_143b0c360 body=141 status=ok
// SIG undefined FUN_143b0c360(void)

undefined8 FUN_143b0c360(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_143a90330(param_1 + 0x11);
  if (cVar1 == '\0') {
    uVar2 = (**(code **)(*param_1 + 0x40))(param_1,param_2);
    uVar2 = FUN_143acc590(uVar2,0x2f);
    FUN_143a8e070(uVar2,param_1 + 0x11);
  }
  else {
    FUN_143a90e90(param_2);
  }
  return param_2;
}



// FUNCTION 143b0c3f0 FUN_143b0c3f0 body=74 status=ok
// SIG undefined FUN_143b0c3f0(void)

undefined8 FUN_143b0c3f0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_143a90330(param_1 + 0x88);
  if (cVar1 == '\0') {
    FUN_143a8e070(param_2,param_1 + 0x88);
  }
  return param_2;
}



// FUNCTION 143b0c440 FUN_143b0c440 body=43 status=ok
// SIG undefined FUN_143b0c440(void)

void FUN_143b0c440(longlong param_1,undefined8 param_2)

{
  FUN_143b0bb30(param_1 + 0x88,param_2);
  return;
}



// FUNCTION 143b0c470 FUN_143b0c470 body=263 status=ok
// SIG undefined FUN_143b0c470(void)

undefined8 FUN_143b0c470(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_143a90330(param_1 + 0x88);
  if (cVar1 == '\0') {
    iVar2 = FUN_143b0c690(param_1 + 0x88,0x5f);
    if (iVar2 != -1) {
      FUN_143ace4e0(param_1 + 0x88,iVar2,0x7fffffff);
      return 1;
    }
    cVar1 = FUN_143a90330(param_1 + 0x60);
    if (cVar1 == '\0') {
      FUN_143a8dcd0(param_1 + 0x88,param_1 + 0x60);
      FUN_143a90e90(param_1 + 0x60);
      return 1;
    }
    iVar2 = FUN_143a904f0(param_1 + 0x88);
    if (0 < iVar2) {
      FUN_143ace4e0(param_1 + 0x88,0,0x7fffffff);
      return 1;
    }
    FUN_143a90e90(param_1 + 0x88);
  }
  return 0;
}



// FUNCTION 143b0c580 FUN_143b0c580 body=19 status=ok
// SIG undefined FUN_143b0c580(void)

void FUN_143b0c580(void)

{
  FUN_143b0c5a0();
  return;
}



// FUNCTION 143b0c5a0 FUN_143b0c5a0 body=8 status=ok
// SIG undefined FUN_143b0c5a0(void)

undefined * FUN_143b0c5a0(void)

{
  return &DAT_146bc7c61;
}



// FUNCTION 143b0c5b0 FUN_143b0c5b0 body=217 status=ok
// SIG undefined FUN_143b0c5b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_143b0c5b0(longlong param_1,undefined8 param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_47;
  int local_44;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  FUN_143a8d3a0(local_38,param_2);
  FUN_143acdf70(local_38);
  iVar2 = FUN_143b0ba90(local_38,param_1 + 0x38);
  if (iVar2 == 0) {
    local_44 = FUN_143a904f0(local_38);
    iVar2 = FUN_143a904f0(param_1 + 0x38);
    if (local_44 != iVar2) {
      uVar3 = FUN_143a904f0(param_1 + 0x38);
      sVar1 = FUN_143a8e4f0(local_38,uVar3);
      if (sVar1 != 0x5f) goto LAB_143b0c65a;
    }
    local_48 = 1;
  }
  else {
LAB_143b0c65a:
    local_48 = 0;
  }
  local_47 = local_48;
  FUN_143a8dc60(local_38);
  return local_47;
}



// FUNCTION 143b0c690 FUN_143b0c690 body=50 status=ok
// SIG undefined FUN_143b0c690(void)

void FUN_143b0c690(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143a904f0(param_1);
  FUN_143a8ef80(param_1,param_2,0,uVar1);
  return;
}



// FUNCTION 143b0c6d0 FUN_143b0c6d0 body=176 status=ok
// SIG undefined FUN_143b0c6d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b0c6d0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined8 local_c8;
  undefined1 local_c0 [40];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_c8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x30) != -1) {
    local_d8 = 0;
    FUN_143b0cf90(local_98,0x40,*(undefined4 *)(param_1 + 0x30),10);
    FUN_143a8dad0(local_c0,local_98);
    FUN_143a8e070(param_2,local_c0);
    FUN_143a8dc60(local_c0);
  }
  return param_2;
}



// FUNCTION 143b0c780 FUN_143b0c780 body=140 status=ok
// SIG undefined FUN_143b0c780(void)

undefined8 *
FUN_143b0c780(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  FUN_143ace7f0(param_1,param_5,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::SimpleLocaleKeyFactory::vftable;
  param_1[7] = param_2;
  FUN_143a8ac30(param_1 + 8);
  *(undefined4 *)(param_1 + 0xd) = param_4;
  FUN_143b0bcd0(param_3,param_1 + 8);
  return param_1;
}



// FUNCTION 143b0c810 FUN_143b0c810 body=149 status=ok
// SIG undefined FUN_143b0c810(void)

void FUN_143b0c810(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::SimpleLocaleKeyFactory::vftable;
  puVar1 = (undefined8 *)param_1[7];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[7] = 0;
  FUN_143a8dc60(param_1 + 8);
  FUN_143ace850(param_1);
  return;
}



// FUNCTION 143b0c8b0 FUN_143b0c8b0 body=54 status=ok
// SIG undefined FUN_143b0c8b0(void)

undefined8 FUN_143b0c8b0(undefined8 param_1,uint param_2)

{
  FUN_143b0c810(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b0c8f0 FUN_143b0c8f0 body=284 status=ok
// SIG undefined FUN_143b0c8f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b0c8f0(longlong param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  cVar1 = FUN_143a8b110(*param_4);
  if ((cVar1 != '\0') &&
     ((local_58 = param_2, *(int *)(param_1 + 0x68) == -1 ||
      (iVar2 = (**(code **)(*param_2 + 0x48))(param_2), *(int *)(param_1 + 0x68) == iVar2)))) {
    FUN_143a8ac30(local_40);
    (**(code **)(*local_58 + 0x20))(local_58,local_40);
    cVar1 = FUN_143a8dd00(param_1 + 0x40,local_40);
    if (cVar1 != '\0') {
      local_50 = (**(code **)(*param_3 + 0x68))(param_3,*(undefined8 *)(param_1 + 0x38));
      FUN_143a8dc60(local_40);
      return local_50;
    }
    FUN_143a8dc60(local_40);
  }
  return 0;
}



// FUNCTION 143b0ca10 FUN_143b0ca10 body=19 status=ok
// SIG undefined FUN_143b0ca10(void)

void FUN_143b0ca10(void)

{
  FUN_143b0ca30();
  return;
}



// FUNCTION 143b0ca30 FUN_143b0ca30 body=8 status=ok
// SIG undefined FUN_143b0ca30(void)

undefined * FUN_143b0ca30(void)

{
  return &DAT_146bc7c62;
}



// FUNCTION 143b0ca40 FUN_143b0ca40 body=114 status=ok
// SIG undefined FUN_143b0ca40(void)

void FUN_143b0ca40(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  
  cVar1 = FUN_143a8b110(*param_3);
  if (cVar1 != '\0') {
    if ((*(uint *)(param_1 + 0x30) & 1) == 0) {
      FUN_143acdfd0(param_2,param_1 + 0x40,param_1,param_3);
    }
    else {
      <lambda_04c79fd4136733a528ca0b360569665b>::operator()(param_2,param_1 + 0x40);
    }
  }
  return;
}



// FUNCTION 143b0cac0 FUN_143b0cac0 body=123 status=ok
// SIG undefined FUN_143b0cac0(void)

void FUN_143b0cac0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  int *param_5)

{
  if (*param_5 < 1) {
    FUN_143b0d0e0(*(undefined8 *)(param_1 + 8),param_2,param_3,param_1 + 0x20,
                  *(undefined8 *)(param_1 + 0x28),param_1 + 0x30,param_4,param_5);
  }
  return;
}



// FUNCTION 143b0cb40 FUN_143b0cb40 body=333 status=ok
// SIG undefined FUN_143b0cb40(void)

void FUN_143b0cb40(longlong param_1,undefined4 param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong local_18 [3];
  
  if (*param_3 < 1) {
    lVar1 = *(longlong *)(param_1 + 8);
    iVar2 = (int)*(char *)(lVar1 + 0x59);
    if (iVar2 != 0) {
      if (iVar2 < 0) {
        local_18[0] = *(longlong *)(lVar1 + 0x28);
        FUN_143b0cc90(param_1,local_18,local_18[0] + (longlong)iVar2 * -2,param_2,param_3);
      }
      else if (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x28) + 0x68) == 0) {
        if ((*(char *)(lVar1 + 0x5e) == '\0') || (0xff < *(ushort *)(lVar1 + 0x8c))) {
          FUN_143b0cac0(param_1,*(undefined8 *)(lVar1 + 0x28),iVar2,param_2,param_3);
        }
        else {
          FUN_143b0cac0(param_1,lVar1 + 0x5e,1,param_2,param_3);
        }
      }
      else {
        (**(code **)(*(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x28) + 0x68))
                  (param_1,param_2,param_3);
      }
    }
  }
  return;
}



// FUNCTION 143b0cc90 FUN_143b0cc90 body=490 status=ok
// SIG undefined FUN_143b0cc90(void)

void FUN_143b0cc90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  int *param_5)

{
  int local_24;
  ulonglong local_20;
  longlong local_18;
  ulonglong local_10;
  
  if (*param_5 < 1) {
    local_18 = *(longlong *)(param_1 + 0x20);
    FUN_143ab0be0(*(undefined8 *)(param_1 + 8),param_1 + 0x20,*(undefined8 *)(param_1 + 0x28),
                  param_2,param_3,0,0,param_5);
    if (*(longlong *)(param_1 + 0x30) != 0) {
      for (; *(longlong *)(param_1 + 0x20) != local_18; local_18 = local_18 + 1) {
        **(undefined4 **)(param_1 + 0x30) = param_4;
        *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 4;
      }
    }
    if (*param_5 == 0xf) {
      local_24 = 0;
      local_20 = *(longlong *)(param_1 + 8) + 0x68 +
                 (longlong)*(char *)(*(longlong *)(param_1 + 8) + 0x5b);
      local_10 = *(longlong *)(param_1 + 8) + 0x88;
      if (local_20 < local_10) {
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x5b) = 0;
        FUN_143ab0be0(*(undefined8 *)(param_1 + 8),&local_20,local_10,param_2,param_3,0,0,&local_24)
        ;
        *(char *)(*(longlong *)(param_1 + 8) + 0x5b) =
             (char)local_20 - ((char)*(undefined8 *)(param_1 + 8) + 'h');
        if ((local_10 <= local_20) || (local_24 == 0xf)) {
          *param_5 = 5;
        }
      }
      else {
        *param_5 = 5;
      }
    }
  }
  return;
}



// FUNCTION 143b0ce80 FUN_143b0ce80 body=136 status=ok
// SIG undefined FUN_143b0ce80(void)

void FUN_143b0ce80(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  if ((*(char *)(*(longlong *)(param_1 + 8) + 0x5a) == '\x01') &&
     (*(char *)(*(longlong *)(param_1 + 8) + 0x5e) != '\0')) {
    FUN_143b0cf10(param_1,&DAT_145d02550,1,param_2,param_3);
  }
  else {
    FUN_143b0cf10(param_1,&DAT_145d02554,1,param_2,param_3);
  }
  return;
}



// FUNCTION 143b0cf10 FUN_143b0cf10 body=123 status=ok
// SIG undefined FUN_143b0cf10(void)

void FUN_143b0cf10(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  int *param_5)

{
  if (*param_5 < 1) {
    FUN_143b0d4e0(*(undefined8 *)(param_1 + 8),param_2,param_3,param_1 + 0x20,
                  *(undefined8 *)(param_1 + 0x28),param_1 + 0x30,param_4,param_5);
  }
  return;
}



// FUNCTION 143b0cf90 FUN_143b0cf90 body=331 status=ok
// SIG undefined FUN_143b0cf90(void)

int FUN_143b0cf90(longlong param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  undefined2 uVar1;
  undefined4 local_res18;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_18;
  
  local_24 = 0;
  local_res18 = param_3;
  do {
    local_18 = (short)(local_res18 % param_4);
    if ((int)(local_res18 % param_4) < 10) {
      local_18 = local_18 + 0x30;
    }
    else {
      local_18 = local_18 + 0x37;
    }
    *(short *)(param_1 + (longlong)local_24 * 2) = local_18;
    local_24 = local_24 + 1;
    local_res18 = local_res18 / param_4;
  } while ((local_res18 != 0) && (local_24 < param_2));
  for (; local_24 < param_5; local_24 = local_24 + 1) {
    *(undefined2 *)(param_1 + (longlong)local_24 * 2) = 0x30;
  }
  if (local_24 < param_2) {
    *(undefined2 *)(param_1 + (longlong)local_24 * 2) = 0;
  }
  for (local_20 = 0; local_20 < local_24 / 2; local_20 = local_20 + 1) {
    uVar1 = *(undefined2 *)(param_1 + (longlong)((local_24 + -1) - local_20) * 2);
    *(undefined2 *)(param_1 + (longlong)((local_24 + -1) - local_20) * 2) =
         *(undefined2 *)(param_1 + (longlong)local_20 * 2);
    *(undefined2 *)(param_1 + (longlong)local_20 * 2) = uVar1;
  }
  return local_24;
}



// FUNCTION 143b0d0e0 FUN_143b0d0e0 body=365 status=ok
// SIG undefined FUN_143b0d0e0(void)

void FUN_143b0d0e0(longlong param_1,undefined1 *param_2,int param_3,undefined8 *param_4,
                  undefined1 *param_5,longlong *param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined1 *local_res10;
  int local_res18;
  undefined1 *local_18;
  undefined4 *local_10;
  
  local_18 = (undefined1 *)*param_4;
  local_res10 = param_2;
  local_res18 = param_3;
  if ((param_6 == (longlong *)0x0) ||
     (local_10 = (undefined4 *)*param_6, local_10 == (undefined4 *)0x0)) {
    for (; (0 < local_res18 && (local_18 < param_5)); local_18 = local_18 + 1) {
      *local_18 = *local_res10;
      local_res10 = local_res10 + 1;
      local_res18 = local_res18 + -1;
    }
  }
  else {
    while ((0 < local_res18 && (local_18 < param_5))) {
      *local_18 = *local_res10;
      local_18 = local_18 + 1;
      local_res10 = local_res10 + 1;
      *local_10 = param_7;
      local_10 = local_10 + 1;
      local_res18 = local_res18 + -1;
    }
    *param_6 = (longlong)local_10;
  }
  *param_4 = local_18;
  if (0 < local_res18) {
    if (param_1 != 0) {
      local_18 = (undefined1 *)(param_1 + 0x68);
      *(undefined1 *)(param_1 + 0x5b) = (undefined1)local_res18;
      do {
        *local_18 = *local_res10;
        local_18 = local_18 + 1;
        local_res10 = local_res10 + 1;
        local_res18 = local_res18 + -1;
      } while (0 < local_res18);
    }
    *param_8 = 0xf;
  }
  return;
}



// FUNCTION 143b0d250 FUN_143b0d250 body=53 status=ok
// SIG undefined FUN_143b0d250(void)

void FUN_143b0d250(undefined8 param_1,undefined8 *param_2)

{
  (*(code *)param_2[2])(*param_2,0,0x10ffff);
  return;
}



// FUNCTION 143b0d290 FUN_143b0d290 body=80 status=ok
// SIG undefined FUN_143b0d290(void)

void FUN_143b0d290(undefined8 param_1,undefined8 *param_2)

{
  (*(code *)param_2[2])(*param_2,0,0xd7ff);
  (*(code *)param_2[2])(*param_2,0xe000,0x10ffff);
  return;
}



// FUNCTION 143b0d2e0 FUN_143b0d2e0 body=504 status=ok
// SIG undefined FUN_143b0d2e0(void)

void FUN_143b0d2e0(longlong param_1,uint param_2,ulonglong *param_3,short *param_4,longlong *param_5
                  ,undefined4 param_6,undefined4 *param_7)

{
  short *psVar1;
  undefined4 *puVar2;
  uint local_res10;
  undefined1 local_28;
  short *local_20;
  undefined4 *local_18;
  
  psVar1 = (short *)*param_3;
  local_res10 = param_2;
  local_20 = psVar1;
  if (psVar1 < param_4) {
    if ((int)param_2 < 0x10000) {
      local_res10._0_2_ = (ushort)param_2;
      *psVar1 = (ushort)local_res10;
      local_20 = psVar1 + 1;
      local_res10 = 0xffffffff;
    }
    else {
      *psVar1 = (short)((int)param_2 >> 10) + -0x2840;
      local_20 = psVar1 + 1;
      local_res10 = param_2 & 0x3ff | 0xdc00;
      if (local_20 < param_4) {
        *local_20 = (ushort)local_res10;
        local_20 = psVar1 + 2;
        local_res10 = 0xffffffff;
      }
    }
    if ((param_5 != (longlong *)0x0) &&
       (puVar2 = (undefined4 *)*param_5, puVar2 != (undefined4 *)0x0)) {
      *puVar2 = param_6;
      local_18 = puVar2 + 1;
      if ((short *)(*param_3 + 2) < local_20) {
        *local_18 = param_6;
        local_18 = puVar2 + 2;
      }
      *param_5 = (longlong)local_18;
    }
  }
  *param_3 = (ulonglong)local_20;
  if (-1 < (int)local_res10) {
    if (param_1 != 0) {
      if (local_res10 < 0x10000) {
        *(ushort *)(param_1 + 0x90) = (ushort)local_res10;
        local_28 = 1;
      }
      else {
        *(short *)(param_1 + 0x90) = (short)((int)local_res10 >> 10) + -0x2840;
        *(ushort *)(param_1 + 0x92) = (ushort)local_res10 & 0x3ff | 0xdc00;
        local_28 = 2;
      }
      *(undefined1 *)(param_1 + 0x5d) = local_28;
    }
    *param_7 = 0xf;
  }
  return;
}



// FUNCTION 143b0d4e0 FUN_143b0d4e0 body=376 status=ok
// SIG undefined FUN_143b0d4e0(void)

void FUN_143b0d4e0(longlong param_1,undefined2 *param_2,int param_3,undefined8 *param_4,
                  undefined2 *param_5,longlong *param_6,undefined4 param_7,undefined4 *param_8)

{
  undefined2 *local_res10;
  int local_res18;
  undefined2 *local_18;
  undefined4 *local_10;
  
  local_18 = (undefined2 *)*param_4;
  local_res10 = param_2;
  local_res18 = param_3;
  if ((param_6 == (longlong *)0x0) ||
     (local_10 = (undefined4 *)*param_6, local_10 == (undefined4 *)0x0)) {
    for (; (0 < local_res18 && (local_18 < param_5)); local_18 = local_18 + 1) {
      *local_18 = *local_res10;
      local_res10 = local_res10 + 1;
      local_res18 = local_res18 + -1;
    }
  }
  else {
    while ((0 < local_res18 && (local_18 < param_5))) {
      *local_18 = *local_res10;
      local_18 = local_18 + 1;
      local_res10 = local_res10 + 1;
      *local_10 = param_7;
      local_10 = local_10 + 1;
      local_res18 = local_res18 + -1;
    }
    *param_6 = (longlong)local_10;
  }
  *param_4 = local_18;
  if (0 < local_res18) {
    if (param_1 != 0) {
      local_18 = (undefined2 *)(param_1 + 0x90);
      *(undefined1 *)(param_1 + 0x5d) = (undefined1)local_res18;
      do {
        *local_18 = *local_res10;
        local_18 = local_18 + 1;
        local_res10 = local_res10 + 1;
        local_res18 = local_res18 + -1;
      } while (0 < local_res18);
    }
    *param_8 = 0xf;
  }
  return;
}



// FUNCTION 143b0d660 FUN_143b0d660 body=103 status=ok
// SIG undefined FUN_143b0d660(void)

undefined1 FUN_143b0d660(char param_1,uint param_2,int param_3)

{
  undefined1 local_18;
  
  if ((((((param_2 & 0xc0000000) == 0) && (param_1 == '\0')) && (0x18ff < param_3 - 0xe000U)) &&
      (0x1ffff < param_3 - 0xf0000U)) || ((param_2 & 0x20000000) != 0)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143b0d6d0 FUN_143b0d6d0 body=98 status=ok
// SIG undefined FUN_143b0d6d0(void)

ulonglong FUN_143b0d6d0(int param_1,int param_2,uint param_3)

{
  if (param_1 == 0) {
    if ((param_3 & 0xa0000000) != 0x80000000) {
      return (ulonglong)(uint3)((param_3 & 0xa0000000) >> 8) << 8;
    }
  }
  else if ((param_3 & 0x20000000) != 0) {
    return (ulonglong)(uint3)((param_3 & 0x20000000) >> 8) << 8;
  }
  return (ulonglong)(param_2 <= (int)(param_3 >> 0x18 & 0x1f));
}



// FUNCTION 143b0d740 FUN_143b0d740 body=298 status=ok
// SIG undefined FUN_143b0d740(void)

int FUN_143b0d740(longlong param_1,int param_2,ushort param_3)

{
  int iVar1;
  int iVar2;
  int local_18;
  int local_10;
  
  local_18 = 0;
  iVar1 = local_18;
  local_10 = param_2;
  do {
    local_18 = iVar1;
    iVar1 = local_18;
    if (local_10 - local_18 < 2) {
LAB_143b0d83c:
      local_18 = iVar1;
      if ((local_10 <= local_18) || (param_3 != *(ushort *)(param_1 + (longlong)local_18 * 2))) {
        local_18 = -1;
      }
      return local_18;
    }
    if (local_10 - local_18 < 5) {
      if (((*(ushort *)(param_1 + (longlong)local_18 * 2) < param_3) &&
          ((iVar1 = local_18 + 1, local_10 <= iVar1 ||
           (*(ushort *)(param_1 + (longlong)iVar1 * 2) < param_3)))) &&
         ((iVar1 = local_18 + 2, local_10 <= iVar1 ||
          (*(ushort *)(param_1 + (longlong)iVar1 * 2) < param_3)))) {
        iVar1 = local_18 + 3;
      }
      goto LAB_143b0d83c;
    }
    iVar2 = (local_18 + local_10) / 2;
    iVar1 = iVar2;
    if (param_3 < *(ushort *)(param_1 + (longlong)iVar2 * 2)) {
      iVar1 = local_18;
      local_10 = iVar2;
    }
  } while( true );
}



// FUNCTION 143b0d870 FUN_143b0d870 body=440 status=ok
// SIG undefined FUN_143b0d870(void)

uint FUN_143b0d870(uint *param_1,int param_2,byte param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int local_28;
  int local_24;
  
  uVar1 = *param_1 >> 0x18;
  if ((param_3 < uVar1) || (param_1[param_2 + -1] >> 0x18 < (uint)param_3)) {
    uVar1 = 0;
  }
  else if (param_2 == ((param_1[param_2 + -1] >> 0x18) - uVar1) + 1) {
    uVar1 = param_1[(int)(param_3 - uVar1)] & 0xffffff;
  }
  else {
    uVar1 = (uint)param_3 << 0x18;
    local_28 = 0;
    iVar2 = local_28;
    local_24 = param_2;
    while (local_28 = iVar2, iVar2 = local_28, 1 < local_24 - local_28) {
      if (local_24 - local_28 < 5) {
        if (((param_1[local_28] < uVar1) &&
            ((iVar2 = local_28 + 1, local_24 <= iVar2 || (param_1[iVar2] < uVar1)))) &&
           ((iVar2 = local_28 + 2, local_24 <= iVar2 || (param_1[iVar2] < uVar1)))) {
          iVar2 = local_28 + 3;
        }
        break;
      }
      iVar3 = (local_28 + local_24) / 2;
      iVar2 = iVar3;
      if ((uVar1 | 0xffffff) < param_1[iVar3]) {
        iVar2 = local_28;
        local_24 = iVar3;
      }
    }
    local_28 = iVar2;
    if ((local_28 < local_24) && ((uint)param_3 == param_1[local_28] >> 0x18)) {
      uVar1 = param_1[local_28] & 0xffffff;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



// FUNCTION 143b0da30 FUN_143b0da30 body=623 status=ok
// SIG undefined FUN_143b0da30(void)

void FUN_143b0da30(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5,uint param_6,longlong param_7,int param_8,int param_9,
                  undefined8 param_10)

{
  ushort *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  uint uVar4;
  char cVar5;
  int local_24;
  int local_20;
  
  puVar1 = (ushort *)(param_2 + *(int *)(param_2 + 0x14) + (longlong)param_9 * 2);
  puVar2 = (undefined4 *)(param_2 + *(int *)(param_2 + 0x18) + (longlong)param_9 * 4);
  uVar3 = *puVar1;
  cVar5 = FUN_143b0d6d0(param_4,param_5,*puVar2);
  if (cVar5 != '\0') {
    if (param_6 < 0x10000) {
      local_20 = 1;
    }
    else {
      local_20 = 2;
    }
    if (param_8 == local_20) {
      (*(code *)param_3[1])(*param_3,param_6);
    }
    else {
      (*(code *)param_3[3])(*param_3,param_7,param_8);
    }
  }
  for (local_24 = 0; local_24 < (int)(uint)uVar3; local_24 = local_24 + 1) {
    *(ushort *)(param_7 + (longlong)param_8 * 2) = puVar1[(longlong)local_24 + 1];
    uVar4 = puVar2[(longlong)local_24 + 1];
    if (uVar4 != 0) {
      if (uVar4 >> 0x18 == 0) {
        FUN_143b0da30(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8 + 1,uVar4,
                      param_10);
      }
      else {
        cVar5 = FUN_143b0d6d0(param_4,param_5,uVar4);
        if (cVar5 != '\0') {
          (*(code *)param_3[3])(*param_3,param_7,param_8 + 1);
        }
      }
    }
  }
  return;
}



// FUNCTION 143b0dca0 FUN_143b0dca0 body=988 status=ok
// SIG undefined FUN_143b0dca0(void)

int FUN_143b0dca0(longlong param_1,uint param_2,longlong param_3,int param_4,longlong param_5,
                 int param_6,uint *param_7,undefined1 param_8,char param_9)

{
  undefined2 *puVar1;
  uint *puVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  uint local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined2 local_54;
  uint local_50;
  
  if (param_1 == 0) {
    local_58 = 0;
  }
  else if ((int)param_2 >> 10 < *(int *)(param_1 + 0x2c)) {
    lVar9 = param_1 + *(int *)(param_1 + 0x28);
    local_64 = *(uint *)(param_1 + *(int *)(param_1 + 0x3c) +
                        (longlong)
                        (int)(uint)*(ushort *)
                                    (param_1 + *(int *)(param_1 + 0x34) +
                                    (longlong)
                                    (int)((param_2 & 0xf) +
                                         (uint)*(ushort *)
                                                (lVar9 + (longlong)
                                                         (int)((uint)*(ushort *)
                                                                      (lVar9 + (longlong)
                                                                               ((int)param_2 >> 10)
                                                                               * 2) +
                                                              ((int)param_2 >> 4 & 0x3fU)) * 2) * 4)
                                    * 2) * 4);
    if (local_64 == 0) {
      local_58 = 0;
    }
    else {
      if (local_64 < 0x1f0000) {
        iVar4 = *(int *)(param_1 + 0x14);
        iVar5 = *(int *)(param_1 + 0x18);
        local_50 = 0;
        local_58 = 0;
        local_60 = 0;
        local_5c = 0;
        do {
          puVar1 = (undefined2 *)(param_1 + iVar4 + (longlong)(int)local_64 * 2);
          puVar2 = (uint *)(param_1 + iVar5 + (longlong)(int)local_64 * 4);
          uVar3 = *puVar1;
          uVar6 = *puVar2;
          if ((uVar6 != 0) && (cVar7 = FUN_143b0d660(param_8,uVar6,param_2), cVar7 != '\0')) {
            local_58 = local_5c + 2 + local_60;
            local_50 = uVar6;
          }
          if (local_5c < param_4) {
            local_54 = *(undefined2 *)(param_3 + (longlong)local_5c * 2);
            local_5c = local_5c + 1;
          }
          else {
            if (param_6 <= local_60) {
              if ((param_9 == '\0') && (local_5c + local_60 < 0x14)) {
                return -(local_5c + local_60 + 2);
              }
              goto LAB_143b0e012;
            }
            local_54 = *(undefined2 *)(param_5 + (longlong)local_60 * 2);
            local_60 = local_60 + 1;
          }
          iVar8 = FUN_143b0d740(puVar1 + 1,uVar3,local_54);
          if (iVar8 < 0) goto LAB_143b0e012;
          local_64 = puVar2[(longlong)iVar8 + 1];
        } while (local_64 >> 0x18 == 0);
        cVar7 = FUN_143b0d660(param_8,local_64,param_2);
        if (cVar7 != '\0') {
          local_58 = local_5c + 2 + local_60;
          local_50 = local_64;
        }
LAB_143b0e012:
        if (local_58 == 0) {
          return 0;
        }
      }
      else {
        cVar7 = FUN_143b0d660(param_8,local_64,param_2);
        if (cVar7 == '\0') {
          return 0;
        }
        local_58 = 2;
        local_50 = local_64;
      }
      if (local_50 == 0x80000001) {
        local_58 = 1;
      }
      else {
        *param_7 = local_50;
      }
    }
  }
  else {
    local_58 = 0;
  }
  return local_58;
}



// FUNCTION 143b0e080 FUN_143b0e080 body=779 status=ok
// SIG undefined FUN_143b0e080(void)

int FUN_143b0e080(longlong param_1,char param_2,longlong param_3,int param_4,longlong param_5,
                 int param_6,uint *param_7,undefined8 param_8,char param_9)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_30;
  uint local_20;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 8) < 1)) {
    local_38 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 4);
    local_20 = 0;
    local_30 = 0;
    local_38 = 0;
    local_40 = 0;
    local_3c = 0;
    if (param_2 == '\0') {
      if (1 < param_4) {
        return 0;
      }
      if (param_4 == 1) {
        param_6 = 0;
      }
      else if (1 < param_6) {
        param_6 = 1;
      }
      param_9 = '\x01';
    }
    do {
      puVar1 = (uint *)(param_1 + iVar2 + (longlong)(int)local_20 * 4);
      uVar3 = *puVar1;
      uVar4 = uVar3 & 0xffffff;
      if ((uVar4 != 0) && ((param_2 < '\0' || ((param_2 == '\0') == (local_3c + local_40 == 1))))) {
        local_38 = local_3c + local_40;
        local_30 = uVar4;
      }
      if (local_3c < param_4) {
        local_44 = *(undefined1 *)(param_3 + local_3c);
        local_3c = local_3c + 1;
      }
      else {
        if (param_6 <= local_40) {
          if ((param_9 == '\0') && (local_3c + local_40 < 0x20)) {
            return -(local_3c + local_40);
          }
          goto LAB_143b0e36e;
        }
        local_44 = *(undefined1 *)(param_5 + local_40);
        local_40 = local_40 + 1;
      }
      local_20 = FUN_143b0d870(puVar1 + 1,uVar3 >> 0x18,local_44);
      if (local_20 == 0) goto LAB_143b0e36e;
    } while (local_20 < 0x1f0000);
    if ((param_2 < '\0') || ((param_2 == '\0') == (local_3c + local_40 == 1))) {
      local_38 = local_3c + local_40;
      local_30 = local_20;
    }
LAB_143b0e36e:
    if (local_38 == 0) {
      local_38 = 0;
    }
    else {
      *param_7 = local_30 & 0xff7fffff;
    }
  }
  return local_38;
}



// FUNCTION 143b0e3a0 FUN_143b0e3a0 body=573 status=ok
// SIG undefined FUN_143b0e3a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b0e3a0(longlong param_1,longlong param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  char local_res18;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  char local_58;
  uint local_54;
  char *local_50;
  int local_48;
  uint local_44;
  char *local_40;
  char local_38;
  char local_37 [31];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_54 = param_3 >> 0x18 & 0x1f;
  param_3 = param_3 & 0xffffff;
  if (3 < local_54) {
    local_40 = (char *)(param_2 + *(int *)(param_2 + 0x20) + (ulonglong)param_3);
    goto LAB_143b0e4bb;
  }
  local_50 = local_37;
  if (local_54 == 1) {
LAB_143b0e461:
    local_res18 = (char)param_3;
    *local_50 = local_res18;
    local_50 = local_50 + 1;
  }
  else {
    if (local_54 == 2) {
LAB_143b0e443:
      *local_50 = (char)(param_3 >> 8);
      local_50 = local_50 + 1;
      goto LAB_143b0e461;
    }
    if (local_54 == 3) {
      local_37[0] = (char)(param_3 >> 0x10);
      local_50 = local_37 + 1;
      goto LAB_143b0e443;
    }
  }
  local_40 = local_37;
  local_44 = local_54;
LAB_143b0e4bb:
  local_48 = *(int *)(param_1 + 0x50);
  if (local_48 != 0) {
    if ((local_48 < 2) || (local_54 != 1)) {
      if ((local_48 == 1) && (1 < local_54)) {
        local_58 = '\x0e';
        *(undefined4 *)(param_1 + 0x50) = 2;
      }
      else {
        local_58 = '\0';
      }
    }
    else {
      local_58 = '\x0f';
      *(undefined4 *)(param_1 + 0x50) = 1;
    }
    if (local_58 != '\0') {
      local_38 = local_58;
      if (local_40 != local_37) {
        _guard_xfg_dispatch_icall_nop(local_37,local_40,(longlong)(int)local_54);
      }
      local_40 = &local_38;
      local_54 = local_54 + 1;
    }
  }
  local_60 = param_8;
  local_68 = param_7;
  local_70 = param_6;
  local_78 = param_5;
  FUN_143b0d0e0(param_1,local_40,local_54,param_4);
  return;
}



// FUNCTION 143b0e5e0 FUN_143b0e5e0 body=226 status=ok
// SIG undefined FUN_143b0e5e0(void)

void FUN_143b0e5e0(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  if (param_3 < 0x300000) {
    FUN_143b0d2e0(param_1,param_3 - 0x1f0000,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    FUN_143b0d4e0(param_1,param_2 + *(int *)(param_2 + 0xc) + (ulonglong)(param_3 & 0x3ffff) * 2,
                  (param_3 >> 0x12) - 0xc,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}



// FUNCTION 143b0e6d0 FUN_143b0e6d0 body=860 status=ok
// SIG undefined FUN_143b0e6d0(void)

void FUN_143b0e6d0(longlong param_1,longlong param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined1 local_38;
  int local_34;
  undefined4 local_2c;
  undefined2 *local_28;
  longlong local_20;
  void *local_18;
  
  local_2c = 0;
  local_20 = *(longlong *)(param_1 + 0x30);
  iVar1 = FUN_143b0dca0(*(undefined8 *)(local_20 + 0x128),*(undefined4 *)(param_1 + 0xd0),
                        param_1 + 0xd4,(int)*(char *)(param_1 + 0x119),
                        *(undefined8 *)(param_2 + 0x10),
                        *(longlong *)(param_2 + 0x18) - *(longlong *)(param_2 + 0x10) >> 1 &
                        0xffffffff,&local_2c,*(undefined1 *)(param_1 + 0x3f),
                        *(undefined1 *)(param_2 + 2));
  if (iVar1 < 2) {
    if (iVar1 < 0) {
      local_28 = *(undefined2 **)(param_2 + 0x10);
      for (local_34 = (int)*(char *)(param_1 + 0x119); local_34 < -2 - iVar1;
          local_34 = local_34 + 1) {
        *(undefined2 *)(param_1 + 0xd4 + (longlong)local_34 * 2) = *local_28;
        local_28 = local_28 + 1;
      }
      *(undefined2 **)(param_2 + 0x10) = local_28;
      local_38 = (undefined1)(-2 - iVar1);
      *(undefined1 *)(param_1 + 0x119) = local_38;
    }
    else {
      if (iVar1 == 1) {
        *(undefined1 *)(param_1 + 0x5f) = 1;
      }
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xd0);
      *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
      *(char *)(param_1 + 0x119) = -*(char *)(param_1 + 0x119);
      *param_4 = 10;
    }
  }
  else {
    iVar1 = iVar1 + -2;
    if (iVar1 < *(char *)(param_1 + 0x119)) {
      iVar2 = *(char *)(param_1 + 0x119) - iVar1;
      local_18 = (void *)(param_1 + 0xd4);
      memmove(local_18,(void *)(param_1 + 0xd4 + (longlong)iVar1 * 2),(longlong)(iVar2 * 2));
      *(char *)(param_1 + 0x119) = -(char)iVar2;
    }
    else {
      *(longlong *)(param_2 + 0x10) =
           *(longlong *)(param_2 + 0x10) + (longlong)(iVar1 - *(char *)(param_1 + 0x119)) * 2;
      *(undefined1 *)(param_1 + 0x119) = 0;
    }
    *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
    FUN_143b0e3a0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x128),local_2c,
                  param_2 + 0x20,*(undefined8 *)(param_2 + 0x28),param_2 + 0x30,param_3,param_4);
  }
  return;
}



// FUNCTION 143b0ea30 FUN_143b0ea30 body=1056 status=ok
// SIG undefined FUN_143b0ea30(void)

void FUN_143b0ea30(longlong param_1,longlong param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined1 local_48;
  int local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined1 *local_30;
  longlong local_28;
  void *local_20;
  void *local_18;
  void *local_10;
  
  local_3c = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x30) + 0x104) == '\f') {
    local_34 = (int)*(char *)(param_1 + 0x4c);
  }
  else {
    if (*(char *)(*(longlong *)(param_1 + 0x30) + 0x104) == -0x25) {
      local_38 = 1;
    }
    else {
      local_38 = -1;
    }
    local_34 = local_38;
  }
  local_28 = *(longlong *)(param_1 + 0x30);
  iVar1 = FUN_143b0e080(*(undefined8 *)(local_28 + 0x128),(undefined1)local_34,param_1 + 0xfa,
                        (int)*(char *)(param_1 + 0x11a),*(undefined8 *)(param_2 + 0x10),
                        (int)*(undefined8 *)(param_2 + 0x18) - (int)*(undefined8 *)(param_2 + 0x10),
                        &local_3c,*(undefined1 *)(param_1 + 0x3f),*(undefined1 *)(param_2 + 2));
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      local_30 = *(undefined1 **)(param_2 + 0x10);
      for (local_40 = (int)*(char *)(param_1 + 0x11a); local_40 < -iVar1; local_40 = local_40 + 1) {
        *(undefined1 *)(param_1 + 0xfa + (longlong)local_40) = *local_30;
        local_30 = local_30 + 1;
      }
      *(undefined1 **)(param_2 + 0x10) = local_30;
      local_48 = (undefined1)-iVar1;
      *(undefined1 *)(param_1 + 0x11a) = local_48;
    }
    else {
      local_20 = (void *)(param_1 + 0x41);
      _guard_xfg_dispatch_icall_nop
                (local_20,(void *)(param_1 + 0xfa),(longlong)*(char *)(param_1 + 0x11b));
      *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_1 + 0x11b);
      iVar1 = (int)*(char *)(param_1 + 0x11a) - (int)*(char *)(param_1 + 0x11b);
      if (0 < iVar1) {
        local_10 = (void *)(param_1 + 0xfa);
        memmove(local_10,(void *)(param_1 + 0xfa + (longlong)*(char *)(param_1 + 0x11b)),
                (longlong)iVar1);
      }
      *(char *)(param_1 + 0x11a) = -(char)iVar1;
      *param_4 = 10;
    }
  }
  else {
    if (iVar1 < *(char *)(param_1 + 0x11a)) {
      iVar2 = *(char *)(param_1 + 0x11a) - iVar1;
      local_18 = (void *)(param_1 + 0xfa);
      memmove(local_18,(void *)(param_1 + 0xfa + (longlong)iVar1),(longlong)iVar2);
      *(char *)(param_1 + 0x11a) = -(char)iVar2;
    }
    else {
      *(longlong *)(param_2 + 0x10) =
           (longlong)(iVar1 - *(char *)(param_1 + 0x11a)) + *(longlong *)(param_2 + 0x10);
      *(undefined1 *)(param_1 + 0x11a) = 0;
    }
    FUN_143b0e5e0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x128),local_3c,
                  param_2 + 0x20,*(undefined8 *)(param_2 + 0x28),param_2 + 0x30,param_3,param_4);
  }
  return;
}



// FUNCTION 143b0ee50 FUN_143b0ee50 body=1189 status=ok
// SIG undefined FUN_143b0ee50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b0ee50(longlong param_1,undefined8 *param_2,undefined4 param_3,int param_4,
                  undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  uint local_c0;
  ushort *local_b8;
  undefined4 local_b0;
  uint local_a8;
  undefined8 local_a0;
  uint local_98;
  uint local_94;
  undefined4 local_90;
  int local_8c;
  undefined4 local_88;
  int local_84;
  int local_80;
  longlong local_78;
  int local_70;
  int local_6c;
  ushort *local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  ushort local_40;
  ushort uStack_3e;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_78 = *(longlong *)(param_1 + 0x128);
  if (local_78 != 0) {
    local_60 = local_78 + *(int *)(local_78 + 0x28);
    local_48 = local_78 + *(int *)(local_78 + 0x34);
    local_50 = local_78 + *(int *)(local_78 + 0x3c);
    local_70 = *(int *)(local_78 + 0x2c);
    local_94 = 0;
    if (param_4 == 2) {
      local_88 = 3;
    }
    else if ((*(char *)(param_1 + 0x104) == -0x25) || (param_4 != 0)) {
      local_88 = 2;
    }
    else {
      local_88 = 1;
    }
    for (local_80 = 0; local_80 < local_70; local_80 = local_80 + 1) {
      uVar2 = (uint)*(ushort *)(local_60 + (longlong)local_80 * 2);
      if (local_70 < (int)uVar2) {
        local_58 = local_60 + (longlong)(int)uVar2 * 2;
        for (local_8c = 0; local_8c < 0x40; local_8c = local_8c + 1) {
          uVar2 = (uint)*(ushort *)(local_58 + (longlong)local_8c * 2);
          local_6c = uVar2 << 2;
          if (uVar2 == 0) {
            local_94 = local_94 + 0x10;
          }
          else {
            local_68 = (ushort *)(local_48 + (longlong)local_6c * 2);
            do {
              local_98 = *(uint *)(local_50 + (ulonglong)*local_68 * 4);
              local_68 = local_68 + 1;
              if (local_98 != 0) {
                if (local_98 >> 0x18 == 0) {
                  if (local_94 < 0x10000) {
                    local_40 = (ushort)local_94;
                    local_90 = 1;
                  }
                  else {
                    local_40 = (short)((int)local_94 >> 10) + 0xd7c0;
                    uStack_3e = (ushort)local_94 & 0x3ff | 0xdc00;
                    local_90 = 2;
                  }
                  local_a0 = param_5;
                  local_b0 = local_90;
                  local_b8 = &local_40;
                  local_c0 = local_94;
                  local_c8 = local_88;
                  local_a8 = local_98;
                  FUN_143b0da30(param_1,local_78,param_2,param_3);
                }
                else {
                  cVar1 = FUN_143b0d6d0(param_3,local_88,local_98);
                  if (cVar1 != '\0') {
                    local_84 = param_4;
                    if (param_4 == 2) {
                      if (((local_98 >> 0x18 & 0x1f) == 3) && ((local_98 & 0xffffff) < 0x830000)) {
LAB_143b0f284:
                        (*(code *)param_2[1])(*param_2,local_94);
                      }
                    }
                    else if (param_4 == 3) {
                      if ((((local_98 >> 0x18 & 0x1f) == 2) &&
                          (local_98 = local_98 & 0xffffff, 0x813f < local_98)) &&
                         (local_98 < 0xeffd)) goto LAB_143b0f284;
                    }
                    else if (param_4 == 4) {
                      if (((local_98 >> 0x18 & 0x1f) == 2) &&
                         (((local_98 & 0xffffff) - 0xa1a1 & 0xffff) < 0x5d5e)) {
joined_r0x000143b0f23c:
                        uVar2 = local_98 & 0xffffff;
                        local_98 = local_98 & 0xffffff;
                        if ((uVar2 - 0xa1 & 0xff) < 0x5e) goto LAB_143b0f284;
                      }
                    }
                    else {
                      if (param_4 != 5) goto LAB_143b0f284;
                      if (((local_98 >> 0x18 & 0x1f) == 2) &&
                         (((local_98 & 0xffffff) - 0xa1a1 & 0xffff) < 0x5c5e))
                      goto joined_r0x000143b0f23c;
                    }
                  }
                }
              }
              local_94 = local_94 + 1;
            } while ((local_94 & 0xf) != 0);
          }
        }
      }
      else {
        local_94 = local_94 + 0x400;
      }
    }
  }
  return;
}



// FUNCTION 143b0f300 FUN_143b0f300 body=535 status=ok
// SIG undefined FUN_143b0f300(void)

undefined8
FUN_143b0f300(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
             longlong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined1 param_10,undefined8 param_11)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_28;
  int local_24;
  uint local_20 [2];
  undefined2 *local_18;
  
  local_20[0] = 0;
  iVar1 = FUN_143b0dca0(param_2,param_3,0,0,*param_4,param_5 - *param_4 >> 1 & 0xffffffff,local_20,
                        *(undefined1 *)(param_1 + 0x3f),param_10);
  if ((iVar1 < 2) ||
     (((local_20[0] >> 0x18 & 0x1f) == 1 &&
      (*(char *)(*(longlong *)(param_1 + 0x30) + 0x104) == -0x25)))) {
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0xd0) = param_3;
      local_18 = (undefined2 *)*param_4;
      for (local_24 = 0; local_24 < -2 - iVar1; local_24 = local_24 + 1) {
        *(undefined2 *)(param_1 + 0xd4 + (longlong)local_24 * 2) = *local_18;
        local_18 = local_18 + 1;
      }
      *param_4 = (longlong)local_18;
      local_28 = (undefined1)(-2 - iVar1);
      *(undefined1 *)(param_1 + 0x119) = local_28;
      uVar2 = 1;
    }
    else if (iVar1 == 1) {
      *(undefined1 *)(param_1 + 0x5f) = 1;
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    *param_4 = *param_4 + (longlong)(iVar1 + -2) * 2;
    FUN_143b0e3a0(param_1,param_2,local_20[0],param_6,param_7,param_8,param_9,param_11);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143b0f520 FUN_143b0f520 body=658 status=ok
// SIG undefined FUN_143b0f520(void)

undefined8
FUN_143b0f520(longlong param_1,undefined8 param_2,int param_3,longlong *param_4,int param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9,
             undefined1 param_10,undefined8 param_11)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_res18;
  int local_28;
  undefined1 local_24;
  undefined4 local_18 [2];
  undefined1 *local_10;
  
  local_18[0] = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x30) + 0x104) == '\f') {
    uVar1 = *(undefined1 *)(param_1 + 0x4c);
  }
  else if (*(char *)(*(longlong *)(param_1 + 0x30) + 0x104) == -0x25) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0xff;
  }
  iVar2 = FUN_143b0e080(param_2,uVar1,param_1 + 0x41,param_3,*param_4,param_5 - (int)*param_4,
                        local_18,*(undefined1 *)(param_1 + 0x3f),param_10);
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      local_10 = (undefined1 *)(param_1 + 0x41);
      local_res18 = (undefined1)param_3;
      *(undefined1 *)(param_1 + 0x11b) = local_res18;
      for (local_28 = 0; local_28 < param_3; local_28 = local_28 + 1) {
        *(undefined1 *)(param_1 + 0xfa + (longlong)local_28) = *local_10;
        local_10 = local_10 + 1;
      }
      local_10 = (undefined1 *)*param_4;
      for (; local_28 < -iVar2; local_28 = local_28 + 1) {
        *(undefined1 *)(param_1 + 0xfa + (longlong)local_28) = *local_10;
        local_10 = local_10 + 1;
      }
      *param_4 = (longlong)local_10;
      local_24 = (undefined1)-iVar2;
      *(undefined1 *)(param_1 + 0x11a) = local_24;
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    *param_4 = (longlong)(iVar2 - param_3) + *param_4;
    FUN_143b0e5e0(param_1,param_2,local_18[0],param_6,param_7,param_8,param_9,param_11);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 143b0f7c0 FUN_143b0f7c0 body=231 status=ok
// SIG undefined FUN_143b0f7c0(void)

uint FUN_143b0f7c0(undefined8 param_1,undefined4 param_2,uint *param_3,undefined1 param_4)

{
  int iVar1;
  uint uVar2;
  uint local_28 [10];
  
  iVar1 = FUN_143b0dca0(param_1,param_2,0,0,0,0,local_28,param_4,1);
  if (1 < iVar1) {
    uVar2 = local_28[0] >> 0x18 & 0x1f;
    if (uVar2 < 4) {
      *param_3 = local_28[0] & 0xffffff;
      if ((local_28[0] & 0x80000000) != 0) {
        return uVar2;
      }
      return -uVar2;
    }
  }
  return 0;
}



// FUNCTION 143b0f8b0 FUN_143b0f8b0 body=166 status=ok
// SIG undefined FUN_143b0f8b0(void)

int FUN_143b0f8b0(undefined8 param_1,undefined8 param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  uint local_18 [6];
  
  local_18[0] = 0;
  if (param_3 < 1) {
    iVar1 = 0xffff;
  }
  else {
    iVar1 = FUN_143b0e080(param_1,0xff,param_2,param_3,0,0,local_18,param_4,1);
    if ((iVar1 == param_3) && (local_18[0] < 0x300000)) {
      iVar1 = local_18[0] - 0x1f0000;
    }
    else {
      iVar1 = 0xfffe;
    }
  }
  return iVar1;
}



// FUNCTION 143b0f970 FUN_143b0f970 body=633 status=ok
// SIG undefined FUN_143b0f970(void)

int FUN_143b0f970(longlong *param_1,int *param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int local_res18;
  
  if ((param_4 == (undefined4 *)0x0) || (cVar2 = FUN_143a8b0e0(*param_4), cVar2 != '\0')) {
    local_res18 = -1;
  }
  else if (param_3 < 0x10) {
    *param_4 = 3;
    local_res18 = -1;
  }
  else if (*param_2 == 0x54726965) {
    uVar1 = param_2[1];
    if (((uVar1 & 0xf) == 5) && ((uVar1 >> 4 & 0xf) == 2)) {
      *(bool *)((longlong)param_1 + 0x24) = (uVar1 & 0x200) != 0;
      *(int *)(param_1 + 3) = param_2[2];
      *(int *)((longlong)param_1 + 0x1c) = param_2[3];
      if (param_3 + -0x10 < (int)param_1[3] * 2) {
        *param_4 = 3;
        local_res18 = -1;
      }
      else {
        *param_1 = (longlong)(param_2 + 4);
        iVar3 = param_3 + -0x10 + (int)param_1[3] * -2;
        if ((uVar1 & 0x100) == 0) {
          if (iVar3 < *(int *)((longlong)param_1 + 0x1c) * 2) {
            *param_4 = 3;
            return -1;
          }
          param_1[1] = 0;
          *(uint *)(param_1 + 4) = (uint)*(ushort *)(*param_1 + (longlong)(int)param_1[3] * 2);
          local_res18 = *(int *)((longlong)param_1 + 0x1c) * 2 + 0x10 + (int)param_1[3] * 2;
        }
        else {
          if (iVar3 < *(int *)((longlong)param_1 + 0x1c) * 4) {
            *param_4 = 3;
            return -1;
          }
          param_1[1] = (longlong)(param_2 + 4) + (longlong)(int)param_1[3] * 2;
          *(undefined4 *)(param_1 + 4) = *(undefined4 *)param_1[1];
          local_res18 = *(int *)((longlong)param_1 + 0x1c) * 4 + 0x10 + (int)param_1[3] * 2;
        }
        param_1[2] = (longlong)&LAB_143b0f960;
      }
    }
    else {
      *param_4 = 3;
      local_res18 = -1;
    }
  }
  else {
    *param_4 = 3;
    local_res18 = -1;
  }
  return local_res18;
}



// FUNCTION 143b0fbf0 FUN_143b0fbf0 body=84 status=ok
// SIG undefined FUN_143b0fbf0(void)

undefined8 * FUN_143b0fbf0(undefined8 *param_1)

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
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  return param_1;
}



// FUNCTION 143b0fc50 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b0fc90 FUN_143b0fc90 body=70 status=ok
// SIG undefined FUN_143b0fc90(void)

void FUN_143b0fc90(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143a904f0(param_1);
  FUN_143a8ebe0(param_1,0,uVar1,param_2,0,param_3);
  return;
}



// FUNCTION 143b0fce0 FUN_143b0fce0 body=22 status=ok
// SIG undefined FUN_143b0fce0(void)

void FUN_143b0fce0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 143b0fd00 FUN_143b0fd00 body=79 status=ok
// SIG undefined FUN_143b0fd00(void)

void FUN_143b0fd00(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_143a904f0(param_2);
  uVar2 = FUN_143a904f0(param_1);
  FUN_143b0fd50(param_1,0,uVar2,param_2,0,uVar1);
  return;
}



// FUNCTION 143b0fd50 FUN_143b0fd50 body=149 status=ok
// SIG undefined FUN_143b0fd50(void)

ulonglong FUN_143b0fd50(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                       undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  cVar1 = FUN_143a90330(param_4);
  if (cVar1 == '\0') {
    FUN_143a90700(param_4,&param_5,&param_6);
    uVar2 = FUN_143a8fd50(param_4);
    uVar3 = FUN_143a8ebe0(param_1,param_2,param_3,uVar2,param_5,param_6);
  }
  else {
    cVar1 = FUN_143a90330(param_1);
    uVar3 = (ulonglong)(cVar1 == '\0');
  }
  return uVar3;
}



// FUNCTION 143b0fdf0 FUN_143b0fdf0 body=58 status=ok
// SIG undefined FUN_143b0fdf0(void)

bool FUN_143b0fdf0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_143b098c0(param_1,param_2,0);
  return -1 < iVar1;
}



// FUNCTION 143b0fe30 FUN_143b0fe30 body=68 status=ok
// SIG undefined FUN_143b0fe30(void)

bool FUN_143b0fe30(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_143a9e120(param_2,*param_1);
  return (uVar1 & param_1[1]) != 0;
}



// FUNCTION 143b0fe80 FUN_143b0fe80 body=36 status=ok
// SIG undefined FUN_143b0fe80(void)

void FUN_143b0fe80(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_143a9c7c0(param_2,param_3);
  return;
}



// FUNCTION 143b0feb0 FUN_143b0feb0 body=40 status=ok
// SIG undefined FUN_143b0feb0(void)

void FUN_143b0feb0(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143ad49f0();
  FUN_143ad4a00(uVar1,param_2);
  return;
}



// FUNCTION 143b0fee0 FUN_143b0fee0 body=40 status=ok
// SIG undefined FUN_143b0fee0(void)

void FUN_143b0fee0(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143ad49f0();
  FUN_143ad4cc0(uVar1,param_2);
  return;
}



// FUNCTION 143b0ff10 FUN_143b0ff10 body=40 status=ok
// SIG undefined FUN_143b0ff10(void)

void FUN_143b0ff10(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143ad49f0();
  FUN_143ad4b60(uVar1,param_2);
  return;
}



// FUNCTION 143b0ff40 FUN_143b0ff40 body=113 status=ok
// SIG undefined FUN_143b0ff40(void)

undefined1 FUN_143b0ff40(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 local_14;
  undefined8 local_10;
  
  local_14 = 0;
  local_10 = FUN_143b1f1c0(&local_14);
  cVar1 = FUN_143a8b110(local_14);
  if (cVar1 != '\0') {
    uVar2 = FUN_143b109f0(local_10,param_2);
    cVar1 = FUN_143b10b50(local_10,uVar2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143b0ffc0 FUN_143b0ffc0 body=115 status=ok
// SIG undefined FUN_143b0ffc0(void)

undefined1 FUN_143b0ffc0(undefined8 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 local_14;
  longlong *local_10;
  
  local_14 = 0;
  local_10 = (longlong *)FUN_143b1f100(param_3 + -0x23,&local_14);
  cVar1 = FUN_143a8b110(local_14);
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*local_10 + 0x70))(local_10,param_2), cVar1 != '\0'))
  {
    return 1;
  }
  return 0;
}



// FUNCTION 143b10040 FUN_143b10040 body=634 status=ok
// SIG undefined FUN_143b10040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_143b10040(undefined8 param_1,uint param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  uint local_res10;
  undefined1 auStack_138 [32];
  uint local_118;
  undefined4 *local_110;
  undefined1 local_108;
  undefined1 local_107;
  undefined1 local_106;
  undefined1 local_105;
  undefined1 local_104;
  undefined1 local_103;
  undefined4 local_100;
  int local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [8];
  undefined8 local_d0;
  undefined1 local_c8 [48];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_d0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  FUN_143a8ac30(local_c8);
  local_100 = 0;
  local_e8 = (longlong *)FUN_143b1f240(&local_100);
  cVar1 = FUN_143a8b0e0(local_100);
  if (cVar1 != '\0') {
    local_104 = 0;
    FUN_143a8dc60(local_c8);
    return local_104;
  }
  cVar1 = (**(code **)(*local_e8 + 0x28))(local_e8,param_2,local_c8);
  if (cVar1 == '\0') {
    local_res10 = param_2;
    if ((int)param_2 < 0) {
      local_106 = 0;
      FUN_143a8dc60(local_c8);
      return local_106;
    }
  }
  else {
    iVar3 = FUN_143a904f0(local_c8);
    if (iVar3 == 1) {
      uVar2 = FUN_143a8e4f0(local_c8,0);
      local_res10 = (uint)uVar2;
    }
    else {
      iVar3 = FUN_143a904f0(local_c8);
      if (iVar3 < 3) {
        local_res10 = FUN_143a8e3e0(local_c8,0);
        if (local_res10 < 0x10000) {
          local_fc = 1;
        }
        else {
          local_fc = 2;
        }
        iVar3 = FUN_143a904f0(local_c8);
        if (iVar3 == local_fc) goto LAB_143b1018c;
      }
      local_res10 = 0xffffffff;
    }
  }
LAB_143b1018c:
  if (-1 < (int)local_res10) {
    local_e0 = FUN_143a9c510();
    iVar3 = FUN_143a9cce0(local_e0,local_res10,local_d8,0);
    local_108 = -1 < iVar3;
    local_103 = local_108;
    FUN_143a8dc60(local_c8);
    return local_103;
  }
  local_f8 = FUN_143a904f0(local_c8);
  uVar4 = FUN_143a8fe10(local_c8);
  local_110 = &local_100;
  local_118 = 0;
  local_f0 = FUN_143abad60(local_98,0x3e,uVar4,local_f8);
  cVar1 = FUN_143a8b110(local_100);
  if (cVar1 != '\0') {
    local_f4 = FUN_143a904f0(local_c8);
    uVar4 = FUN_143a8fe10(local_c8);
    local_118 = local_118 & 0xffffff00;
    iVar3 = FUN_143ab3dc0(uVar4,local_f4,local_98,local_f0);
    if (iVar3 != 0) {
      local_107 = 1;
      goto LAB_143b1028d;
    }
  }
  local_107 = 0;
LAB_143b1028d:
  local_105 = local_107;
  FUN_143a8dc60(local_c8);
  return local_105;
}



// FUNCTION 143b102d0 FUN_143b102d0 body=400 status=ok
// SIG undefined FUN_143b102d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143b102d0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 *local_e0;
  undefined4 *local_d8;
  byte local_c8;
  byte local_c7;
  undefined4 local_c4;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [64];
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_b0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_c4 = 0;
  local_c0 = FUN_143b1f3e0(&local_c4);
  cVar1 = FUN_143a8b0e0(local_c4);
  if (cVar1 == '\0') {
    FUN_143a8d5f0(local_68,param_2);
    FUN_143a8ac30(local_40);
    FUN_143b108e0(local_a8,local_c0,local_40);
    cVar1 = FUN_143b24df0(local_a8,5,&local_c4);
    if (cVar1 != '\0') {
      local_b8 = FUN_143a8fe10(local_68);
      iVar2 = FUN_143a904f0(local_68);
      local_d8 = &local_c4;
      local_e0 = local_a8;
      local_e8 = 1;
      FUN_143b21f00(local_c0,local_b8,local_b8 + (longlong)iVar2 * 2,0);
    }
    FUN_143b10950(local_a8);
    cVar1 = FUN_143a8b110(local_c4);
    if ((cVar1 == '\0') || (cVar1 = FUN_143b0c130(local_40,local_68), cVar1 == '\0')) {
      local_c8 = 0;
    }
    else {
      local_c8 = 1;
    }
    local_c7 = local_c8;
    FUN_143a8dc60(local_40);
    FUN_143a8dc60(local_68);
    return (ulonglong)local_c7;
  }
  return (ulonglong)(uint3)(cVar1 >> 7) << 8;
}



// FUNCTION 143b10460 FUN_143b10460 body=122 status=ok
// SIG undefined FUN_143b10460(void)

undefined1 FUN_143b10460(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 local_14;
  undefined8 local_10;
  
  local_14 = 0;
  local_10 = FUN_143b1f1c0(&local_14);
  cVar1 = FUN_143a8b110(local_14);
  if (((cVar1 != '\0') && (cVar1 = FUN_143b23c50(local_10,&local_14), cVar1 != '\0')) &&
     (cVar1 = FUN_143b25160(local_10,param_2), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 143b104e0 FUN_143b104e0 body=32 status=ok
// SIG undefined FUN_143b104e0(void)

void FUN_143b104e0(undefined8 param_1,undefined4 param_2)

{
  FUN_143a9e4b0(param_2);
  return;
}



// FUNCTION 143b10500 FUN_143b10500 body=32 status=ok
// SIG undefined FUN_143b10500(void)

void FUN_143b10500(undefined8 param_1,undefined4 param_2)

{
  FUN_143a9e4f0(param_2);
  return;
}



// FUNCTION 143b10520 FUN_143b10520 body=32 status=ok
// SIG undefined FUN_143b10520(void)

void FUN_143b10520(undefined8 param_1,undefined4 param_2)

{
  FUN_143a9e7d0(param_2);
  return;
}



// FUNCTION 143b10540 FUN_143b10540 body=32 status=ok
// SIG undefined FUN_143b10540(void)

void FUN_143b10540(undefined8 param_1,undefined4 param_2)

{
  FUN_143a9ea90(param_2);
  return;
}



// FUNCTION 143b10560 FUN_143b10560 body=32 status=ok
// SIG undefined FUN_143b10560(void)

void FUN_143b10560(undefined8 param_1,undefined4 param_2)

{
  FUN_143a9ebf0(param_2);
  return;
}



// FUNCTION 143b10580 FUN_143b10580 body=57 status=ok
// SIG undefined FUN_143b10580(void)

int FUN_143b10580(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_143a9e120(param_2,*param_1);
  return (int)(uVar1 & param_1[1]) >> ((byte)param_1[2] & 0x1f);
}



// FUNCTION 143b105c0 FUN_143b105c0 body=48 status=ok
// SIG undefined FUN_143b105c0(void)

uint FUN_143b105c0(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_143a9f150(*param_1);
  return (uVar1 & param_1[1]) >> ((byte)param_1[2] & 0x1f);
}



// FUNCTION 143b10610 FUN_143b10610 body=32 status=ok
// SIG undefined FUN_143b10610(void)

void FUN_143b10610(undefined8 param_1,undefined4 param_2)

{
  FUN_143ad4000(param_2);
  return;
}



// FUNCTION 143b10630 FUN_143b10630 body=40 status=ok
// SIG undefined FUN_143b10630(void)

void FUN_143b10630(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143ad49f0();
  FUN_143ad4710(uVar1,param_2);
  return;
}



// FUNCTION 143b10660 IsPrimaryShopPackageOwned body=35 status=ok
// SIG undefined IsPrimaryShopPackageOwned(void)

void UDarwinUserWidget::IsPrimaryShopPackageOwned(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143ad49f0();
  FUN_143ad4510(uVar1,param_2);
  return;
}



// FUNCTION 143b10690 FUN_143b10690 body=35 status=ok
// SIG undefined FUN_143b10690(void)

undefined1 FUN_143b10690(undefined8 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_143b20830(param_2);
  return uVar1;
}



// FUNCTION 143b106c0 FUN_143b106c0 body=35 status=ok
// SIG undefined FUN_143b106c0(void)

int FUN_143b106c0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_143a9db60(param_2);
  return (int)cVar1;
}



// FUNCTION 143b106f0 FUN_143b106f0 body=40 status=ok
// SIG undefined FUN_143b106f0(void)

void FUN_143b106f0(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143ad49f0();
  FUN_143ad4330(uVar1,param_2);
  return;
}



// FUNCTION 143b10720 FUN_143b10720 body=40 status=ok
// SIG undefined FUN_143b10720(void)

void FUN_143b10720(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143ad49f0();
  FUN_143ad43b0(uVar1,param_2);
  return;
}



// FUNCTION 143b10750 FUN_143b10750 body=118 status=ok
// SIG undefined FUN_143b10750(void)

undefined4 FUN_143b10750(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar1 = FUN_143a9dca0(param_2);
  uVar1 = uVar1 >> 6;
  if (uVar1 == 0) {
    local_c = 0;
  }
  else {
    if (uVar1 < 0xb) {
      local_10 = 1;
    }
    else {
      if (uVar1 < 0x15) {
        local_14 = 2;
      }
      else {
        local_14 = 3;
      }
      local_10 = local_14;
    }
    local_c = local_10;
  }
  return local_c;
}



// FUNCTION 143b107d0 FUN_143b107d0 body=45 status=ok
// SIG undefined FUN_143b107d0(void)

void FUN_143b107d0(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_18 [6];
  
  local_18[0] = 0;
  FUN_143a9f1a0(param_2,local_18);
  return;
}



// FUNCTION 143b10800 FUN_143b10800 body=75 status=ok
// SIG undefined FUN_143b10800(void)

undefined4 FUN_143b10800(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_143a9e120(param_2,2);
  uVar1 = (int)(uVar1 & 0x3e0) >> 5;
  if (uVar1 < 10) {
    uVar2 = *(undefined4 *)(&DAT_145d02cb0 + (longlong)(int)uVar1 * 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143b10850 FUN_143b10850 body=43 status=ok
// SIG undefined FUN_143b10850(void)

void FUN_143b10850(undefined8 param_1,undefined4 param_2,int param_3)

{
  FUN_143b20da0(param_2,param_3 + -0x100a);
  return;
}



// FUNCTION 143b10880 FUN_143b10880 body=38 status=ok
// SIG undefined FUN_143b10880(void)

int FUN_143b10880(undefined8 param_1,undefined4 param_2)

{
  ushort uVar1;
  
  uVar1 = FUN_143b20d50(param_2);
  return (int)(uint)uVar1 >> 8;
}



// FUNCTION 143b108b0 FUN_143b108b0 body=40 status=ok
// SIG undefined FUN_143b108b0(void)

undefined1 FUN_143b108b0(undefined8 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_143b20d50(param_2);
  return uVar1;
}



// FUNCTION 143b108e0 FUN_143b108e0 body=108 status=ok
// SIG undefined FUN_143b108e0(void)

undefined8 * FUN_143b108e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  return param_1;
}



// FUNCTION 143b10950 FUN_143b10950 body=76 status=ok
// SIG undefined FUN_143b10950(void)

void FUN_143b10950(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_143a90820(*(undefined8 *)(param_1 + 8),
                  *(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x10) >> 1 & 0xffffffff,
                  param_3,param_4,0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143b109a0 FUN_143b109a0 body=75 status=ok
// SIG undefined FUN_143b109a0(void)

undefined8 FUN_143b109a0(longlong param_1,ushort param_2)

{
  undefined8 uVar1;
  
  if ((param_2 < *(ushort *)(param_1 + 0x18)) || (0xff00 < param_2)) {
    uVar1 = 1;
  }
  else if (param_2 < *(ushort *)(param_1 + 0x1c)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}



// FUNCTION 143b109f0 FUN_143b109f0 body=352 status=ok
// SIG undefined FUN_143b109f0(void)

undefined2 FUN_143b109f0(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar1 = (int)param_2 >> 5;
  if (param_2 < 0xd800) {
    local_18 = (param_2 & 0x1f) +
               (uint)*(ushort *)(**(longlong **)(param_1 + 0x20) + (longlong)(int)uVar1 * 2) * 4;
  }
  else {
    if (param_2 < 0x10000) {
      if ((int)param_2 < 0xdc00) {
        local_28 = 0x140;
      }
      else {
        local_28 = 0;
      }
      local_1c = (param_2 & 0x1f) +
                 (uint)*(ushort *)
                        (**(longlong **)(param_1 + 0x20) + (longlong)(int)(local_28 + uVar1) * 2) *
                 4;
    }
    else {
      if (param_2 < 0x110000) {
        if ((int)param_2 < *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) {
          local_24 = (param_2 & 0x1f) +
                     (uint)*(ushort *)
                            (**(longlong **)(param_1 + 0x20) +
                            (longlong)
                            (int)((uint)*(ushort *)
                                         (**(longlong **)(param_1 + 0x20) +
                                         (longlong)(((int)param_2 >> 0xb) + 0x820) * 2) +
                                 (uVar1 & 0x3f)) * 2) * 4;
        }
        else {
          local_24 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x30);
        }
        local_20 = local_24;
      }
      else {
        local_20 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x18) + 0x80;
      }
      local_1c = local_20;
    }
    local_18 = local_1c;
  }
  return *(undefined2 *)(**(longlong **)(param_1 + 0x20) + (longlong)local_18 * 2);
}



// FUNCTION 143b10b50 FUN_143b10b50 body=69 status=ok
// SIG undefined FUN_143b10b50(void)

undefined1 FUN_143b10b50(longlong param_1,ushort param_2)

{
  undefined1 local_18;
  
  if ((param_2 < *(ushort *)(param_1 + 0x18)) || (*(ushort *)(param_1 + 0x1c) <= param_2)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143b10ba0 FUN_143b10ba0 body=163 status=ok
// SIG undefined FUN_143b10ba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b10ba0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [32];
  uint local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_143a8ac30(local_38);
  (**(code **)(*param_1 + 0x10))(param_1,param_3,local_38,param_4);
  FUN_143a8d3a0(param_2,local_38);
  local_48 = local_48 | 1;
  FUN_143a8dc60(local_38);
  return param_2;
}



// FUNCTION 143b10c50 FUN_143b10c50 body=58 status=ok
// SIG undefined FUN_143b10c50(void)

void FUN_143b10c50(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_143a91100(param_1);
  uVar1 = FUN_143a904f0(param_1);
  FUN_143a909d0(param_1,0,uVar1,param_2);
  return;
}



// FUNCTION 143b10c90 FUN_143b10c90 body=208 status=ok
// SIG undefined FUN_143b10c90(void)

ulonglong FUN_143b10c90(undefined4 param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if (param_2 < 0x1000) {
    if ((-1 < param_2) && (param_2 < 0x39)) {
      cVar1 = (**(code **)(&UNK_145d02928 + (longlong)param_2 * 0x10))
                        (&DAT_145d02920 + (longlong)param_2 * 0x10,param_1,param_2);
      return (ulonglong)(uint)(int)cVar1;
    }
  }
  else {
    if (param_2 < 0x1016) {
      uVar3 = (*(code *)(&PTR_FUN_145d02cf0)[(longlong)(param_2 + -0x1000) * 4])
                        (&DAT_145d02ce0 + (longlong)(param_2 + -0x1000) * 0x20,param_1,param_2);
      return uVar3;
    }
    if (param_2 == 0x2000) {
      bVar2 = FUN_143a9db60(param_1);
      return (ulonglong)(uint)(1 << (bVar2 & 0x1f));
    }
  }
  return 0;
}



// FUNCTION 143b10d70 FUN_143b10d70 body=84 status=ok
// SIG undefined FUN_143b10d70(void)

ulonglong FUN_143b10d70(undefined4 param_1,int param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if ((param_2 < 0) || (0x38 < param_2)) {
    uVar1 = in_RAX & 0xffffffffffffff00;
  }
  else {
    uVar1 = (**(code **)(&UNK_145d02928 + (longlong)param_2 * 0x10))
                      (&DAT_145d02920 + (longlong)param_2 * 0x10,param_1,param_2);
  }
  return uVar1;
}



// FUNCTION 143b10dd0 FUN_143b10dd0 body=356 status=ok
// SIG undefined FUN_143b10dd0(void)

undefined4 FUN_143b10dd0(int param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_1 < 0) {
    uVar1 = 0;
  }
  else if (param_1 < 0x39) {
    if (*(int *)(&DAT_145d02924 + (longlong)param_1 * 0x10) == 0) {
      uVar1 = *(undefined4 *)(&DAT_145d02920 + (longlong)param_1 * 0x10);
    }
    else {
      uVar1 = 2;
    }
  }
  else if (param_1 < 0x1000) {
    uVar1 = 0;
  }
  else if (param_1 < 0x1016) {
    lVar2 = (longlong)(param_1 + -0x1000) * 0x20;
    if (*(int *)(&DAT_145d02ce4 + lVar2) == 0) {
      uVar1 = *(undefined4 *)(&DAT_145d02ce0 + lVar2);
    }
    else {
      uVar1 = 2;
    }
  }
  else if (param_1 < 0x4000) {
    if ((param_1 == 0x2000) || (param_1 == 0x3000)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else if (param_1 < 0x400e) {
    switch(param_1) {
    case 0x4000:
      uVar1 = 2;
      break;
    case 0x4001:
      uVar1 = 5;
      break;
    case 0x4002:
    case 0x4004:
    case 0x4006:
    case 0x4007:
    case 0x4008:
    case 0x4009:
    case 0x400a:
    case 0x400c:
      uVar1 = 4;
      break;
    case 0x4003:
    case 0x4005:
    case 0x400b:
      uVar1 = 3;
      break;
    default:
      uVar1 = 0;
    }
  }
  else if (param_1 == 0x7000) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 143b10f90 FUN_143b10f90 body=72 status=ok
// SIG undefined FUN_143b10f90(void)

undefined8 * FUN_143b10f90(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = param_1[1];
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  return param_1;
}



// FUNCTION 143b10fe0 FUN_143b10fe0 body=214 status=ok
// SIG undefined FUN_143b10fe0(void)

ulonglong FUN_143b10fe0(undefined8 param_1,char *param_2)

{
  char cVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  char *local_res10;
  uint local_14;
  
  if (param_2 == (char *)0x0) {
    uVar2 = in_RAX & 0xffffffffffffff00;
  }
  else {
    local_14 = 1;
    local_res10 = param_2;
    while( true ) {
      cVar1 = *local_res10;
      local_res10 = local_res10 + 1;
      if (cVar1 == '\0') break;
      cVar1 = FUN_143ab82e0(cVar1);
      if ((((cVar1 != '-') && (cVar1 != '_')) && (cVar1 != ' ')) &&
         ((cVar1 < '\t' || ('\r' < cVar1)))) {
        if ((local_14 & 1) == 0) {
          return 0;
        }
        local_14 = FUN_143b27ab0(param_1,cVar1);
      }
    }
    uVar2 = (ulonglong)(1 < (int)local_14);
  }
  return uVar2;
}



// FUNCTION 143b110c0 FUN_143b110c0 body=180 status=ok
// SIG undefined FUN_143b110c0(void)

int FUN_143b110c0(int param_1)

{
  int iVar1;
  int local_18;
  int local_14;
  
  local_18 = 1;
  local_14 = 6;
  while( true ) {
    if (local_14 < 1) {
      return 0;
    }
    iVar1 = (&DAT_145d03060)[local_18];
    if (param_1 < iVar1) break;
    if (param_1 < (int)(&DAT_145d03060)[local_18 + 1]) {
      return local_18 + 2 + (param_1 - iVar1) * 2;
    }
    local_18 = local_18 + 2 + ((&DAT_145d03060)[local_18 + 1] - iVar1) * 2;
    local_14 = local_14 + -1;
  }
  return 0;
}



// FUNCTION 143b11180 FUN_143b11180 body=353 status=ok
// SIG undefined FUN_143b11180(void)

undefined4 FUN_143b11180(int param_1,int param_2)

{
  int iVar1;
  int local_res8;
  int local_28;
  
  if (param_1 != 0) {
    local_28 = (&DAT_145d03060)[param_1 + 1];
    iVar1 = param_1 + 2;
    local_res8 = iVar1;
    if (local_28 < 0x10) {
      for (; 0 < local_28; local_28 = local_28 + -1) {
        iVar1 = (&DAT_145d03060)[local_res8];
        if (param_2 < iVar1) {
          return 0;
        }
        if (param_2 < (int)(&DAT_145d03060)[local_res8 + 1]) {
          return (&DAT_145d03060)[(local_res8 + 2 + param_2) - iVar1];
        }
        local_res8 = local_res8 + 2 + ((&DAT_145d03060)[local_res8 + 1] - iVar1);
      }
    }
    else {
      local_28 = param_1 + -0xe + local_28;
      do {
        if (param_2 < (int)(&DAT_145d03060)[local_res8]) {
          return 0;
        }
        if (param_2 == (&DAT_145d03060)[local_res8]) {
          return (&DAT_145d03060)[(local_28 + local_res8) - iVar1];
        }
        local_res8 = local_res8 + 1;
      } while (local_res8 < local_28);
    }
  }
  return 0;
}



// FUNCTION 143b112f0 FUN_143b112f0 body=127 status=ok
// SIG undefined FUN_143b112f0(void)

char * FUN_143b112f0(char *param_1,int param_2)

{
  char *local_res8;
  int local_res10;
  
  if ((param_2 < 0) || (local_res10 = param_2, *param_1 <= param_2)) {
    local_res8 = (char *)0x0;
  }
  else {
    for (; local_res8 = param_1 + 1, 0 < local_res10; local_res10 = local_res10 + -1) {
      param_1 = strchr(local_res8,0);
    }
    if (*local_res8 == '\0') {
      local_res8 = (char *)0x0;
    }
  }
  return local_res8;
}



// FUNCTION 143b11370 FUN_143b11370 body=26 status=ok
// SIG undefined FUN_143b11370(void)

void FUN_143b11370(undefined8 param_1)

{
  FUN_143b11390(0,param_1);
  return;
}



// FUNCTION 143b11390 FUN_143b11390 body=135 status=ok
// SIG undefined FUN_143b11390(void)

undefined4 FUN_143b11390(int param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_28 [40];
  
  FUN_143b10f90(local_28,&DAT_145d041c0 + param_1);
  cVar1 = FUN_143b10fe0(local_28,param_2);
  if (cVar1 == '\0') {
    FUN_143b27580(local_28);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_143b11520(local_28);
    FUN_143b27580(local_28);
  }
  return uVar2;
}



// FUNCTION 143b11430 FUN_143b11430 body=106 status=ok
// SIG undefined FUN_143b11430(void)

undefined8 FUN_143b11430(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_143b110c0(param_1);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else if ((&DAT_145d03060)[iVar1 + 1] == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_143b11390((&DAT_145d03060)[(int)(&DAT_145d03060)[iVar1 + 1]],param_2);
  }
  return uVar2;
}



// FUNCTION 143b114a0 FUN_143b114a0 body=118 status=ok
// SIG undefined FUN_143b114a0(void)

undefined8 FUN_143b114a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_143b110c0(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_143b11180((&DAT_145d03060)[iVar1 + 1],param_2);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_143b112f0(&DAT_145d06ee0 + iVar1,param_3);
    }
  }
  return uVar2;
}



// FUNCTION 143b11520 FUN_143b11520 body=71 status=ok
// SIG undefined FUN_143b11520(void)

void FUN_143b11520(longlong param_1)

{
  FUN_143b27cf0(*(byte **)(param_1 + 0x10) + 1,(int)(uint)**(byte **)(param_1 + 0x10) >> 1);
  return;
}



// FUNCTION 143b11570 FUN_143b11570 body=158 status=ok
// SIG undefined FUN_143b11570(void)

uint FUN_143b11570(longlong param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int local_14;
  
  local_14 = 0;
  do {
    do {
      cVar1 = *(char *)(param_1 + local_14);
      local_14 = local_14 + 1;
    } while (cVar1 == '-');
  } while (((cVar1 == '_') || (cVar1 == ' ')) || (('\b' < cVar1 && (cVar1 < '\x0e'))));
  if (cVar1 == '\0') {
    uVar3 = local_14 * 0x100;
  }
  else {
    bVar2 = FUN_143ab82e0(cVar1);
    uVar3 = local_14 * 0x100 | (uint)bVar2;
  }
  return uVar3;
}



// FUNCTION 143b11610 FUN_143b11610 body=24 status=ok
// SIG undefined FUN_143b11610(void)

void FUN_143b11610(undefined8 param_1)

{
  FUN_143b11370(param_1);
  return;
}



// FUNCTION 143b11630 ModifyCompilationEnvironment body=32 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void FClearIrradianceSamplesCS::ModifyCompilationEnvironment(undefined4 param_1,undefined8 param_2)

{
  FUN_143b11430(param_1,param_2);
  return;
}



// FUNCTION 143b11650 FUN_143b11650 body=40 status=ok
// SIG undefined FUN_143b11650(void)

void FUN_143b11650(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_143b114a0(param_1,param_2,param_3);
  return;
}



// FUNCTION 143b11680 FUN_143b11680 body=175 status=ok
// SIG undefined FUN_143b11680(void)

int FUN_143b11680(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong local_res8;
  longlong local_res10;
  
  local_res8 = param_1;
  local_res10 = param_2;
  while( true ) {
    uVar1 = FUN_143b11570(local_res8);
    uVar2 = FUN_143b11570(local_res10);
    if (((uVar1 | uVar2) & 0xff) == 0) {
      return 0;
    }
    if ((uVar1 != uVar2) && (iVar3 = (uVar1 & 0xff) - (uVar2 & 0xff), iVar3 != 0)) break;
    local_res8 = local_res8 + ((int)uVar1 >> 8);
    local_res10 = local_res10 + ((int)uVar2 >> 8);
  }
  return iVar3;
}



// FUNCTION 143b11730 FUN_143b11730 body=33 status=ok
// SIG undefined FUN_143b11730(void)

void FUN_143b11730(undefined4 param_1)

{
  FUN_143b11650(0x100a,param_1,1);
  return;
}



// FUNCTION 143b11760 FUN_143b11760 body=30 status=ok
// SIG undefined FUN_143b11760(void)

void FUN_143b11760(undefined4 param_1)

{
  FUN_143b11650(0x100a,param_1,0);
  return;
}



// FUNCTION 143b11780 FUN_143b11780 body=125 status=ok
// SIG undefined FUN_143b11780(void)

undefined8 * FUN_143b11780(undefined8 *param_1,longlong param_2)

{
  longlong local_18;
  
  FUN_143b11850(param_1,param_2);
  if (param_2 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = param_2 + 8;
  }
  FSlateWidgetStyle::FSlateWidgetStyle(param_1 + 1,local_18);
  *param_1 = icu_53::UnicodeFilter::vftable;
  param_1[1] = icu_53::UnicodeFilter::vftable;
  return param_1;
}



// FUNCTION 143b11800 FUN_143b11800 body=77 status=ok
// SIG undefined FUN_143b11800(void)

undefined8 * FUN_143b11800(undefined8 *param_1)

{
  FUN_143b11890(param_1);
  GetTestRenderTransformPivot(param_1 + 1);
  *param_1 = icu_53::UnicodeFilter::vftable;
  param_1[1] = icu_53::UnicodeFilter::vftable;
  return param_1;
}



// FUNCTION 143b11850 FUN_143b11850 body=54 status=ok
// SIG undefined FUN_143b11850(void)

undefined8 * FUN_143b11850(undefined8 *param_1,undefined8 param_2)

{
  FUN_143a8abc0(param_1,param_2);
  *param_1 = icu_53::UnicodeFunctor::vftable;
  return param_1;
}



// FUNCTION 143b11890 FUN_143b11890 body=44 status=ok
// SIG undefined FUN_143b11890(void)

undefined8 * FUN_143b11890(undefined8 *param_1)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::UnicodeFunctor::vftable;
  return param_1;
}



// FUNCTION 143b118c0 FSlateWidgetStyle body=31 status=ok
// SIG undefined FSlateWidgetStyle(void)

undefined8 * FSlateWidgetStyle::FSlateWidgetStyle(undefined8 *param_1)

{
  *param_1 = icu_53::UnicodeMatcher::vftable;
  return param_1;
}



// FUNCTION 143b118e0 GetTestRenderTransformPivot body=26 status=ok
// SIG undefined GetTestRenderTransformPivot(void)

undefined8 * GetTestRenderTransformPivot(undefined8 *param_1)

{
  *param_1 = icu_53::UnicodeMatcher::vftable;
  return param_1;
}



// FUNCTION 143b11900 FUN_143b11900 body=675 status=ok
// SIG undefined FUN_143b11900(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143b11900(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  FUN_143b11780(param_1,param_2);
  *param_1 = icu_53::UnicodeSet::vftable;
  param_1[1] = icu_53::UnicodeSet::vftable;
  *(undefined4 *)(param_1 + 2) = 0;
  *(int *)((longlong)param_1 + 0x14) = *(int *)(param_2 + 0x10) + 0x10;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  local_58[0] = 0;
  FUN_143b13af0(param_1,local_58);
  cVar1 = FUN_143a8b0e0(local_58[0]);
  if (cVar1 == '\0') {
    uVar2 = FUN_143aa7a40((longlong)*(int *)((longlong)param_1 + 0x14) << 2);
    param_1[3] = uVar2;
    if (param_1[3] == 0) {
      FUN_143b15ec0(param_1);
    }
    else {
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
      _guard_xfg_dispatch_icall_nop
                ((void *)param_1[3],*(void **)(param_2 + 0x18),(longlong)*(int *)(param_1 + 2) << 2)
      ;
      if ((param_1[8] == 0) || (*(longlong *)(param_2 + 0x40) == 0)) {
        FUN_143b15ec0(param_1);
      }
      else {
        FUN_143b094a0(param_1[8],*(undefined8 *)(param_2 + 0x40),FUN_143b13e50,local_58);
        if (*(longlong *)(param_2 + 0x38) != 0) {
          local_50 = FUN_143a8db50(local_38,*(undefined8 *)(param_2 + 0x38),
                                   *(undefined4 *)(param_2 + 0x34));
          local_48 = local_50;
          FUN_143b15e20(param_1,local_50);
          FUN_143a8dc60(local_38);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 143b11bb0 FUN_143b11bb0 body=372 status=ok
// SIG undefined FUN_143b11bb0(void)

undefined8 * FUN_143b11bb0(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  int local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_143b11780(param_1,param_2);
  *param_1 = icu_53::UnicodeSet::vftable;
  param_1[1] = icu_53::UnicodeSet::vftable;
  *(undefined4 *)(param_1 + 2) = 0;
  cVar1 = FUN_143b14e80(param_2);
  if (cVar1 == '\0') {
    local_18 = *(int *)(param_2 + 0x10) + 0x10;
  }
  else {
    local_18 = *(int *)(param_2 + 0x10);
  }
  *(int *)((longlong)param_1 + 0x14) = local_18;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  local_14 = 0;
  FUN_143b13af0(param_1,&local_14);
  cVar1 = FUN_143a8b0e0(local_14);
  if (cVar1 == '\0') {
    uVar2 = FUN_143aa7a40((longlong)*(int *)((longlong)param_1 + 0x14) << 2);
    param_1[3] = uVar2;
    if (param_1[3] == 0) {
      FUN_143b15ec0(param_1);
    }
    else {
      FUN_143b12150(param_1,param_2);
    }
  }
  return param_1;
}



// FUNCTION 143b11d30 FUN_143b11d30 body=354 status=ok
// SIG undefined FUN_143b11d30(void)

undefined8 * FUN_143b11d30(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_18 [2];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_143b11800(param_1);
  *param_1 = icu_53::UnicodeSet::vftable;
  param_1[1] = icu_53::UnicodeSet::vftable;
  *(undefined4 *)(param_1 + 2) = 1;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x11;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  local_18[0] = 0;
  FUN_143b13af0(param_1,local_18);
  cVar1 = FUN_143a8b0e0(local_18[0]);
  if (cVar1 == '\0') {
    uVar2 = FUN_143aa7a40((longlong)*(int *)((longlong)param_1 + 0x14) << 2);
    param_1[3] = uVar2;
    if (param_1[3] == 0) {
      FUN_143b15ec0(param_1);
    }
    else {
      *(undefined4 *)param_1[3] = 0x110000;
      FUN_143b13ff0(param_1,param_2,param_3);
    }
  }
  return param_1;
}



// FUNCTION 143b11ea0 FUN_143b11ea0 body=326 status=ok
// SIG undefined FUN_143b11ea0(void)

undefined8 * FUN_143b11ea0(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_18 [2];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_143b11800(param_1);
  *param_1 = icu_53::UnicodeSet::vftable;
  param_1[1] = icu_53::UnicodeSet::vftable;
  *(undefined4 *)(param_1 + 2) = 1;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x11;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  local_18[0] = 0;
  FUN_143b13af0(param_1,local_18);
  cVar1 = FUN_143a8b0e0(local_18[0]);
  if (cVar1 == '\0') {
    uVar2 = FUN_143aa7a40((longlong)*(int *)((longlong)param_1 + 0x14) << 2);
    param_1[3] = uVar2;
    if (param_1[3] == 0) {
      FUN_143b15ec0(param_1);
    }
    else {
      *(undefined4 *)param_1[3] = 0x110000;
    }
  }
  return param_1;
}



// FUNCTION 143b11ff0 FUN_143b11ff0 body=350 status=ok
// SIG undefined FUN_143b11ff0(void)

void FUN_143b11ff0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::UnicodeSet::vftable;
  param_1[1] = icu_53::UnicodeSet::vftable;
  FUN_143aa79f0(param_1[3]);
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[5] != 0) {
    FUN_143aa79f0(param_1[5]);
  }
  puVar1 = (undefined8 *)param_1[8];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[9] != 0) {
    FUN_143b126d0(param_1[9],1);
  }
  FUN_143b15590(param_1);
  FUN_143b27fd0(param_1);
  return;
}



// FUNCTION 143b12150 FUN_143b12150 body=890 status=ok
// SIG undefined FUN_143b12150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143b12150(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88 [2];
  undefined8 local_80;
  longlong local_78;
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
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if ((param_1 != param_2) && (cVar1 = FUN_143b14e80(param_1), cVar1 == '\0')) {
    cVar1 = FUN_143b14df0(param_2);
    if (cVar1 == '\0') {
      local_88[0] = 0;
      FUN_143b14610(param_1,*(undefined4 *)(param_2 + 0x10),local_88);
      cVar1 = FUN_143a8b0e0(local_88[0]);
      if (cVar1 == '\0') {
        *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
        _guard_xfg_dispatch_icall_nop
                  (*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),
                   (longlong)*(int *)(param_1 + 0x10) << 2);
        if (*(longlong *)(param_2 + 0x20) == 0) {
          *(undefined8 *)(param_1 + 0x20) = 0;
        }
        else {
          local_70 = FUN_143a8d310(800);
          if (local_70 == 0) {
            local_80 = 0;
          }
          else {
            local_80 = FUN_143b287d0(local_70,*(undefined8 *)(param_2 + 0x20),
                                     *(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10)
                                    );
          }
          local_60 = local_80;
          *(undefined8 *)(param_1 + 0x20) = local_80;
          if (*(longlong *)(param_1 + 0x20) == 0) {
            FUN_143b15ec0(param_1);
            return param_1;
          }
        }
        if ((*(longlong *)(param_1 + 0x40) == 0) || (*(longlong *)(param_2 + 0x40) == 0)) {
          FUN_143b15ec0(param_1);
        }
        else {
          FUN_143b094a0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x40),
                        FUN_143b13e50,local_88);
          if (*(longlong *)(param_2 + 0x48) == 0) {
            *(undefined8 *)(param_1 + 0x48) = 0;
          }
          else {
            local_78 = FUN_143a8d310(0x110);
            if (local_78 == 0) {
              local_68 = 0;
            }
            else {
              local_68 = FUN_143b2a6a0(local_78,*(undefined8 *)(param_2 + 0x48),
                                       *(undefined8 *)(param_1 + 0x40));
            }
            local_50 = local_68;
            *(undefined8 *)(param_1 + 0x48) = local_68;
            if (*(longlong *)(param_1 + 0x48) == 0) {
              FUN_143b15ec0(param_1);
              return param_1;
            }
          }
          FUN_143b15590(param_1);
          if (*(longlong *)(param_2 + 0x38) != 0) {
            local_58 = FUN_143a8db50(local_38,*(undefined8 *)(param_2 + 0x38),
                                     *(undefined4 *)(param_2 + 0x34));
            local_48 = local_58;
            FUN_143b15e20(param_1,local_58);
            FUN_143a8dc60(local_38);
          }
        }
      }
    }
    else {
      FUN_143b15ec0(param_1);
    }
  }
  return param_1;
}



// FUNCTION 143b124d0 FUN_143b124d0 body=154 status=ok
// SIG undefined FUN_143b124d0(void)

ulonglong FUN_143b124d0(ulonglong param_1,longlong param_2)

{
  char cVar1;
  int local_18;
  
  if (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10)) {
    for (local_18 = 0; local_18 < *(int *)(param_1 + 0x10); local_18 = local_18 + 1) {
      if (*(int *)(*(longlong *)(param_1 + 0x18) + (longlong)local_18 * 4) !=
          *(int *)(*(longlong *)(param_2 + 0x18) + (longlong)local_18 * 4)) {
        return (ulonglong)(uint7)(int7)(int3)((uint)local_18 >> 8) << 8;
      }
    }
    cVar1 = FUN_143b12570(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x40));
    if (cVar1 == '\0') {
      param_1 = 1;
    }
    else {
      param_1 = (ulonglong)(uint3)(cVar1 >> 7) << 8;
    }
  }
  else {
    param_1 = param_1 & 0xffffffffffffff00;
  }
  return param_1;
}



// FUNCTION 143b12570 FUN_143b12570 body=58 status=ok
// SIG undefined FUN_143b12570(void)

bool FUN_143b12570(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_143b09240(param_1,param_2);
  return cVar1 == '\0';
}



// FUNCTION 143b125ac FUN_143b125ac body=9 status=ok
// SIG undefined FUN_143b125ac(void)

void FUN_143b125ac(longlong param_1)

{
  FUN_143b125d0(param_1 + -8);
  return;
}



// FUNCTION 143b125b8 FUN_143b125b8 body=9 status=ok
// SIG undefined FUN_143b125b8(void)

void FUN_143b125b8(longlong param_1)

{
  FUN_143b12690(param_1 + -8);
  return;
}



// FUNCTION 143b125d0 FUN_143b125d0 body=54 status=ok
// SIG undefined FUN_143b125d0(void)

undefined8 FUN_143b125d0(undefined8 param_1,uint param_2)

{
  FUN_143b27fd0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b12610 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b12650 FUN_143b12650 body=54 status=ok
// SIG undefined FUN_143b12650(void)

undefined8 FUN_143b12650(undefined8 param_1,uint param_2)

{
  RtAudioError::~RtAudioError(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 143b12690 FUN_143b12690 body=54 status=ok
// SIG undefined FUN_143b12690(void)

undefined8 FUN_143b12690(undefined8 param_1,uint param_2)

{
  FUN_143b11ff0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}


