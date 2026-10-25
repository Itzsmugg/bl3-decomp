// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143a8e070 FUN_143a8e070 body=79 status=ok
// SIG undefined FUN_143a8e070(void)

void FUN_143a8e070(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_143a904f0(param_2);
  uVar2 = FUN_143a904f0(param_1);
  FUN_143a8f030(param_1,uVar2,0,param_2,0,uVar1);
  return;
}



// FUNCTION 143a8e0c0 FUN_143a8e0c0 body=249 status=ok
// SIG undefined FUN_143a8e0c0(void)

undefined8 FUN_143a8e0c0(undefined8 param_1,uint param_2)

{
  bool bVar1;
  undefined4 uVar2;
  ushort local_res10;
  undefined4 local_24;
  ushort local_20;
  ushort uStack_1e;
  undefined8 local_18;
  
  local_24 = 0;
  bVar1 = false;
  local_res10 = (ushort)param_2;
  if (param_2 < 0x10000) {
    local_20 = local_res10;
    local_24 = 1;
  }
  else if (param_2 < 0x110000) {
    local_20 = (short)((int)param_2 >> 10) + 0xd7c0;
    uStack_1e = local_res10 & 0x3ff | 0xdc00;
    local_24 = 2;
  }
  else {
    bVar1 = true;
  }
  local_18 = param_1;
  if (!bVar1) {
    uVar2 = FUN_143a904f0(param_1);
    local_18 = FUN_143a8f0d0(param_1,uVar2,0,&local_20,0,local_24);
  }
  return local_18;
}



// FUNCTION 143a8e1c0 FUN_143a8e1c0 body=75 status=ok
// SIG undefined FUN_143a8e1c0(void)

void FUN_143a8e1c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143a904f0(param_1);
  FUN_143a8f0d0(param_1,uVar1,0,param_2,param_3,param_4);
  return;
}



// FUNCTION 143a8e210 FUN_143a8e210 body=257 status=ok
// SIG undefined FUN_143a8e210(void)

undefined1 FUN_143a8e210(longlong param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ushort local_res10;
  undefined4 local_14;
  ushort local_10;
  ushort uStack_e;
  
  local_14 = 0;
  bVar1 = false;
  local_res10 = (ushort)param_2;
  if (param_2 < 0x10000) {
    local_10 = local_res10;
    local_14 = 1;
  }
  else if (param_2 < 0x110000) {
    local_10 = (short)((int)param_2 >> 10) + 0xd7c0;
    uStack_e = local_res10 & 0x3ff | 0xdc00;
    local_14 = 2;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    uVar3 = FUN_143a904f0(*(undefined8 *)(param_1 + 8));
    uVar4 = FUN_143a8f0d0(*(undefined8 *)(param_1 + 8),uVar3,0,&local_10,0,local_14);
    cVar2 = FUN_143a903d0(uVar4);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143a8e320 FUN_143a8e320 body=81 status=ok
// SIG undefined FUN_143a8e320(void)

void FUN_143a8e320(longlong param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined2 local_res10 [12];
  
  local_res10[0] = param_2;
  uVar1 = FUN_143a904f0(*(undefined8 *)(param_1 + 8));
  uVar2 = FUN_143a8f0d0(*(undefined8 *)(param_1 + 8),uVar1,0,local_res10,0,1);
  FUN_143a903d0(uVar2);
  return;
}



// FUNCTION 143a8e380 FUN_143a8e380 body=86 status=ok
// SIG undefined FUN_143a8e380(void)

void FUN_143a8e380(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_143a904f0(*(undefined8 *)(param_1 + 8));
  uVar2 = FUN_143a8f0d0(*(undefined8 *)(param_1 + 8),uVar1,0,param_2,0,param_3);
  FUN_143a903d0(uVar2);
  return;
}



// FUNCTION 143a8e3e0 FUN_143a8e3e0 body=268 status=ok
// SIG undefined FUN_143a8e3e0(void)

uint FUN_143a8e3e0(undefined8 param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar2 = FUN_143a904f0(param_1);
  if (param_2 < uVar2) {
    lVar4 = FUN_143a8fd50(param_1);
    uVar1 = *(ushort *)(lVar4 + (longlong)(int)param_2 * 2);
    uVar3 = (uint)uVar1;
    if ((uVar3 & 0xfffff800) == 0xd800) {
      if ((uVar1 & 0x400) == 0) {
        if ((param_2 + 1 != uVar2) &&
           (uVar1 = *(ushort *)(lVar4 + (longlong)(int)(param_2 + 1) * 2),
           (uVar1 & 0xfc00) == 0xdc00)) {
          uVar3 = uVar3 * 0x400 + -0x35fdc00 + (uint)uVar1;
        }
      }
      else if ((0 < (int)param_2) &&
              (uVar1 = *(ushort *)(lVar4 + (longlong)(int)(param_2 - 1) * 2),
              (uVar1 & 0xfc00) == 0xd800)) {
        uVar3 = (uint)uVar1 * 0x400 + -0x35fdc00 + uVar3;
      }
    }
  }
  else {
    uVar3 = 0xffff;
  }
  return uVar3;
}



// FUNCTION 143a8e4f0 FUN_143a8e4f0 body=32 status=ok
// SIG undefined FUN_143a8e4f0(void)

void FUN_143a8e4f0(undefined8 param_1,undefined4 param_2)

{
  FUN_143a8eba0(param_1,param_2);
  return;
}



// FUNCTION 143a8e510 CreateInternalContext body=92 status=ok
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
  
  lVar1 = FUN_143a8d310(0x28);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143a8d3a0(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143a8e570 FUN_143a8e570 body=771 status=ok
// SIG undefined FUN_143a8e570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143a8e570(longlong param_1,int param_2,int param_3,char param_4,longlong *param_5,char param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int local_res10;
  int local_res18;
  undefined1 auStack_78 [32];
  int local_58;
  byte local_48;
  int local_44;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_res10 = param_2;
  if (param_2 == -1) {
    local_res10 = FUN_143a8fe60(param_1);
  }
  cVar1 = FUN_143a903d0(param_1);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    if ((((param_6 != '\0') || ((*(byte *)(param_1 + 0x27) & 8) != 0)) ||
        (((*(byte *)(param_1 + 0x27) & 4) != 0 && (iVar2 = FUN_143a907a0(param_1), 1 < iVar2)))) ||
       (iVar2 = FUN_143a8fe60(param_1), iVar2 < local_res10)) {
      if (param_3 < 0) {
        local_res18 = local_res10;
      }
      else {
        local_res18 = param_3;
        if ((local_res10 < 0x10) && (0xf < param_3)) {
          local_res18 = 0xf;
        }
      }
      local_48 = *(byte *)(param_1 + 0x27);
      if ((local_48 & 2) == 0) {
        local_40 = *(undefined1 **)(param_1 + 8);
      }
      else if ((param_4 == '\0') || (local_res18 < 0x10)) {
        local_40 = (undefined1 *)0x0;
      }
      else {
        local_58 = (int)*(char *)(param_1 + 0x26);
        FUN_143a91300(param_1 + 8,0,local_30,0);
        local_40 = local_30;
      }
      cVar1 = FUN_143a8df90(param_1,local_res18);
      if ((cVar1 == '\0') &&
         ((local_res18 <= local_res10 || (cVar1 = FUN_143a8df90(param_1,local_res10), cVar1 == '\0')
          ))) {
        if ((local_48 & 2) == 0) {
          *(undefined1 **)(param_1 + 8) = local_40;
        }
        *(byte *)(param_1 + 0x27) = local_48;
        FUN_143a90e90(param_1);
        return 0;
      }
      if ((param_4 == '\0') || (local_40 == (undefined1 *)0x0)) {
        *(undefined1 *)(param_1 + 0x26) = 0;
      }
      else {
        local_44 = FUN_143a904f0(param_1);
        iVar2 = FUN_143a8fe60(param_1);
        if (iVar2 < local_44) {
          local_44 = iVar2;
          FUN_143a90c60(param_1,iVar2);
        }
        uVar3 = FUN_143a8fd50(param_1);
        local_58 = local_44;
        FUN_143a91300(local_40,0,uVar3,0);
      }
      if ((local_48 & 4) != 0) {
        local_38 = local_40 + -4;
        iVar2 = FUN_143a91090(local_38);
        if (iVar2 == 0) {
          if (param_5 == (longlong *)0x0) {
            FUN_143aa79f0(local_38);
          }
          else {
            *param_5 = (longlong)local_38;
          }
        }
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 143a8e880 FUN_143a8e880 body=158 status=ok
// SIG undefined FUN_143a8e880(void)

void FUN_143a8e880(undefined8 param_1,int param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  
  if ((param_2 < param_3) && (lVar1 = FUN_143aa7a40((longlong)(param_3 - param_2) << 1), lVar1 != 0)
     ) {
    FUN_143a8fa00(param_1,param_2,param_3,lVar1,0);
    FUN_143a902e0(param_1,param_4,lVar1,0,param_3 - param_2);
    FUN_143aa79f0(lVar1);
  }
  return;
}



// FUNCTION 143a8e920 FUN_143a8e920 body=556 status=ok
// SIG undefined FUN_143a8e920(void)

longlong FUN_143a8e920(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  int iVar2;
  void *_Src;
  void *_Dst;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_1 == param_2) {
    return param_1;
  }
  if ((param_2 == 0) || (cVar1 = FUN_143a90330(param_2), cVar1 != '\0')) {
    FUN_143a90e90(param_1);
    return param_1;
  }
  FUN_143a907d0(param_1);
  cVar1 = FUN_143a903a0(param_2);
  if (cVar1 != '\0') {
    FUN_143a90ee0(param_1);
    return param_1;
  }
  iVar2 = FUN_143a904f0(param_2);
  FUN_143a90c60(param_1,iVar2);
  cVar1 = *(char *)(param_2 + 0x27);
  if (cVar1 != '\0') {
    if (cVar1 == '\x02') {
      *(undefined1 *)(param_1 + 0x27) = 2;
      _guard_xfg_dispatch_icall_nop
                ((void *)(param_1 + 8),(void *)(param_2 + 8),(longlong)(iVar2 << 1));
      return param_1;
    }
    if (cVar1 == '\x04') {
      FUN_143a8df60(param_2);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_2 + 0x27);
      return param_1;
    }
    if (cVar1 != '\b') goto LAB_143a8eb17;
    if (param_3 != '\0') {
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_2 + 0x27);
      return param_1;
    }
  }
  cVar1 = FUN_143a8df90(param_1,iVar2);
  if (cVar1 != '\0') {
    _Src = (void *)FUN_143a8fd50(param_2);
    _Dst = (void *)FUN_143a8fd50(param_1);
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)(iVar2 << 1));
    return param_1;
  }
LAB_143a8eb17:
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x27) = 1;
  return param_1;
}



// FUNCTION 143a8eb50 FUN_143a8eb50 body=74 status=ok
// SIG undefined FUN_143a8eb50(void)

void FUN_143a8eb50(undefined8 param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  int local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  FUN_143a90700(param_1,local_res10,local_res18);
  lVar1 = FUN_143a8fd50(param_1);
  FUN_143ab3a60(lVar1 + (longlong)local_res10[0] * 2,local_res18[0]);
  return;
}



// FUNCTION 143a8eba0 FUN_143a8eba0 body=60 status=ok
// SIG undefined FUN_143a8eba0(void)

undefined2 FUN_143a8eba0(undefined8 param_1,uint param_2)

{
  undefined2 uVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = FUN_143a904f0(param_1);
  if (param_2 < uVar2) {
    lVar3 = FUN_143a8fd50(param_1);
    uVar1 = *(undefined2 *)(lVar3 + (longlong)(int)param_2 * 2);
  }
  else {
    uVar1 = 0xffff;
  }
  return uVar1;
}



// FUNCTION 143a8ebe0 FUN_143a8ebe0 body=374 status=ok
// SIG undefined FUN_143a8ebe0(void)

ulonglong FUN_143a8ebe0(undefined8 param_1,int param_2,int param_3,longlong param_4,int param_5,
                       int param_6)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  int local_res10 [2];
  int local_res18 [2];
  ushort *local_res20;
  byte local_28;
  int local_24;
  ushort *local_18;
  
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  local_res20 = (ushort *)param_4;
  cVar3 = FUN_143a90330(param_1);
  if (cVar3 == '\0') {
    FUN_143a90700(param_1,local_res10,local_res18);
    if (local_res20 == (ushort *)0x0) {
      uVar4 = (ulonglong)(local_res18[0] != 0);
    }
    else {
      lVar5 = FUN_143a8fd50(param_1);
      local_18 = (ushort *)(lVar5 + (longlong)local_res10[0] * 2);
      local_res20 = (ushort *)((longlong)local_res20 + (longlong)param_5 * 2);
      if (param_6 < 0) {
        param_6 = FreeLib(local_res20 + param_5);
      }
      if (local_res18[0] == param_6) {
        local_24 = local_res18[0];
        local_28 = 0;
      }
      else if (local_res18[0] < param_6) {
        local_24 = local_res18[0];
        local_28 = 0xff;
      }
      else {
        local_24 = param_6;
        local_28 = 1;
      }
      if ((0 < local_24) && (local_18 != local_res20)) {
        do {
          uVar1 = *local_18;
          uVar2 = *local_res20;
          local_res20 = local_res20 + 1;
          local_18 = local_18 + 1;
          if ((uint)uVar1 - (uint)uVar2 != 0) {
            return (ulonglong)((int)((uint)uVar1 - (uint)uVar2) >> 0xf | 1);
          }
          local_24 = local_24 + -1;
        } while (0 < local_24);
      }
      uVar4 = (ulonglong)local_28;
    }
  }
  else {
    uVar4 = CONCAT71((uint7)(uint3)(cVar3 >> 7),0xff);
  }
  return uVar4;
}



// FUNCTION 143a8ed60 FUN_143a8ed60 body=107 status=ok
// SIG undefined FUN_143a8ed60(void)

bool FUN_143a8ed60(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  void *_Buf2;
  void *_Buf1;
  
  _Buf2 = (void *)FUN_143a8fd50(param_2);
  _Buf1 = (void *)FUN_143a8fd50(param_1);
  iVar1 = _guard_xfg_dispatch_icall_nop(_Buf1,_Buf2,(longlong)(param_3 << 1));
  return iVar1 == 0;
}



// FUNCTION 143a8edd0 FUN_143a8edd0 body=74 status=ok
// SIG undefined FUN_143a8edd0(void)

void FUN_143a8edd0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143a904f0(param_4);
  FUN_143a90980(param_4,0,uVar1,param_1,param_2,param_3);
  return;
}



// FUNCTION 143a8ee20 FUN_143a8ee20 body=128 status=ok
// SIG undefined FUN_143a8ee20(void)

void FUN_143a8ee20(undefined8 param_1,int param_2,undefined4 param_3,longlong param_4,int param_5)

{
  longlong lVar1;
  int local_res10 [2];
  undefined4 local_res18 [2];
  longlong local_res20;
  
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  local_res20 = param_4;
  FUN_143a90700(param_1,local_res10,local_res18);
  lVar1 = FUN_143a8fd50(param_1);
  if (lVar1 + (longlong)local_res10[0] * 2 != local_res20 + (longlong)param_5 * 2) {
    FUN_143a91300(lVar1,local_res10[0],local_res20,param_5,local_res18[0]);
  }
  return;
}



// FUNCTION 143a8eea0 FUN_143a8eea0 body=75 status=ok
// SIG undefined FUN_143a8eea0(void)

int FUN_143a8eea0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 local_18;
  
  uVar1 = FUN_143a904f0(param_1);
  uVar2 = FUN_143a8fd50(param_1);
  local_18 = FUN_143ab5470(uVar2,uVar1);
  if (local_18 == 0) {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143a8eef0 FUN_143a8eef0 body=135 status=ok
// SIG undefined FUN_143a8eef0(void)

longlong FUN_143a8eef0(undefined8 param_1,undefined2 param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  int local_res18 [2];
  undefined4 local_res20 [2];
  
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  FUN_143a90700(param_1,local_res18,local_res20);
  lVar1 = FUN_143a8fd50(param_1);
  lVar2 = FUN_143ab3b80(lVar1 + (longlong)local_res18[0] * 2,param_2,local_res20[0]);
  if (lVar2 == 0) {
    lVar1 = 0xffffffff;
  }
  else {
    lVar1 = lVar2 - lVar1 >> 1;
  }
  return lVar1;
}



// FUNCTION 143a8ef80 FUN_143a8ef80 body=159 status=ok
// SIG undefined FUN_143a8ef80(void)

longlong FUN_143a8ef80(undefined8 param_1,undefined2 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int local_res18 [2];
  undefined4 local_res20 [2];
  
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  cVar1 = FUN_143a90330(param_1);
  if (cVar1 == '\0') {
    FUN_143a90700(param_1,local_res18,local_res20);
    lVar2 = FUN_143a8fd50(param_1);
    lVar3 = FUN_143ab3d20(lVar2 + (longlong)local_res18[0] * 2,param_2,local_res20[0]);
    if (lVar3 == 0) {
      lVar2 = 0xffffffff;
    }
    else {
      lVar2 = lVar3 - lVar2 >> 1;
    }
  }
  else {
    lVar2 = 0xffffffff;
  }
  return lVar2;
}



// FUNCTION 143a8f030 FUN_143a8f030 body=153 status=ok
// SIG undefined FUN_143a8f030(void)

void FUN_143a8f030(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_143a90330(param_4);
  if (cVar1 == '\0') {
    FUN_143a90700(param_4,&param_5,&param_6);
    uVar2 = FUN_143a8fd50(param_4);
    FUN_143a8f0d0(param_1,param_2,param_3,uVar2,param_5,param_6);
  }
  else {
    FUN_143a8f0d0(param_1,param_2,param_3,0,0,0);
  }
  return;
}



// FUNCTION 143a8f0d0 FUN_143a8f0d0 body=1313 status=ok
// SIG undefined FUN_143a8f0d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143a8f0d0(longlong param_1,int param_2,int param_3,longlong param_4,int param_5,
                      int param_6)

{
  char cVar1;
  int iVar2;
  int local_res10 [2];
  int local_res18 [2];
  longlong local_res20;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined1 local_60;
  int local_58;
  int local_54;
  undefined1 *local_50;
  undefined1 *local_48;
  longlong local_40;
  longlong local_38;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  local_res20 = param_4;
  cVar1 = FUN_143a903d0(param_1);
  if (cVar1 == '\0') {
    return param_1;
  }
  local_58 = FUN_143a904f0(param_1);
  if (((*(byte *)(param_1 + 0x27) & 8) != 0) && (param_6 == 0)) {
    if (local_res10[0] == 0) {
      FUN_143a906b0(param_1,local_res18);
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + (longlong)local_res18[0] * 2;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - local_res18[0];
      FUN_143a90c60(param_1,local_58 - local_res18[0]);
      return param_1;
    }
    FUN_143a906b0(param_1,local_res10);
    if (local_58 - local_res10[0] <= local_res18[0]) {
      FUN_143a90c60(param_1,local_res10[0]);
      *(int *)(param_1 + 0x10) = local_res10[0];
      return param_1;
    }
  }
  if (local_res20 == 0) {
    param_6 = 0;
    param_5 = 0;
  }
  else if (param_6 < 0) {
    param_6 = FreeLib(local_res20 + (longlong)param_5 * 2);
  }
  if (local_res10[0] < local_58) {
    FUN_143a90700(param_1,local_res10,local_res18);
    local_54 = (local_58 - local_res18[0]) + param_6;
  }
  else {
    if (param_6 == 0) {
      return param_1;
    }
    local_54 = local_58 + param_6;
    iVar2 = FUN_143a8fe60(param_1);
    if ((local_54 <= iVar2) && (cVar1 = FUN_143a90350(param_1), cVar1 != '\0')) {
      local_38 = FUN_143a8fd50(param_1);
      if ((local_res20 + (longlong)param_5 * 2 != local_38 + (longlong)local_res10[0] * 2) ||
         (local_58 < local_res10[0])) {
        local_68 = (longlong *)CONCAT44(local_68._4_4_,param_6);
        FUN_143a91300(local_res20,param_5,local_38,local_58);
      }
      FUN_143a90c60(param_1,local_54);
      return param_1;
    }
    local_res10[0] = local_58;
    local_res18[0] = 0;
  }
  if (((*(byte *)(param_1 + 0x27) & 2) == 0) || (local_54 < 0x10)) {
    local_48 = (undefined1 *)FUN_143a8fd50(param_1);
  }
  else {
    FUN_143ab3ca0(local_30,param_1 + 8,local_58);
    local_48 = local_30;
  }
  local_40 = 0;
  local_60 = 0;
  local_68 = &local_40;
  cVar1 = FUN_143a8e570(param_1,local_54,local_54 + 0x80 + (local_54 >> 2),0);
  if (cVar1 != '\0') {
    local_50 = (undefined1 *)FUN_143a8fd50(param_1);
    if (local_50 == local_48) {
      if (local_res18[0] != param_6) {
        local_68 = (longlong *)CONCAT44(local_68._4_4_,local_58 - (local_res10[0] + local_res18[0]))
        ;
        FUN_143a91300(local_48,local_res10[0] + local_res18[0],local_50,local_res10[0] + param_6);
      }
    }
    else {
      local_68._0_4_ = local_res10[0];
      FUN_143a91300(local_48,0,local_50,0);
      local_68 = (longlong *)CONCAT44(local_68._4_4_,local_58 - (local_res10[0] + local_res18[0]));
      FUN_143a91300(local_48,local_res10[0] + local_res18[0],local_50,local_res10[0] + param_6);
    }
    local_68 = (longlong *)CONCAT44(local_68._4_4_,param_6);
    FUN_143a91300(local_res20,param_5,local_50,local_res10[0]);
    FUN_143a90c60(param_1,local_54);
    if (local_40 != 0) {
      FUN_143aa79f0(local_40);
    }
  }
  return param_1;
}



// FUNCTION 143a8f600 FUN_143a8f600 body=640 status=ok
// SIG undefined FUN_143a8f600(void)

undefined8 FUN_143a8f600(undefined8 param_1,int param_2,int param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  int local_res10 [2];
  int local_res18 [4];
  ushort *local_28;
  ushort *local_18;
  
  if (((1 < param_3) &&
      (local_res10[0] = param_2, local_res18[0] = param_3,
      cVar5 = FUN_143a8e570(param_1,0xffffffff,0xffffffff,1,0,0), cVar5 != '\0')) &&
     (FUN_143a90700(param_1,local_res10,local_res18), 1 < local_res18[0])) {
    lVar6 = FUN_143a8fd50(param_1);
    local_28 = (ushort *)(lVar6 + (longlong)local_res10[0] * 2);
    local_18 = local_28 + (longlong)local_res18[0] + -1;
    bVar4 = 0;
    do {
      uVar2 = *local_28;
      *local_28 = *local_18;
      uVar3 = *local_28;
      local_28 = local_28 + 1;
      bVar4 = bVar4 | (uVar2 & 0xfc00) == 0xd800 | (uVar3 & 0xfc00) == 0xd800;
      *local_18 = uVar2;
      local_18 = local_18 + -1;
    } while (local_28 < local_18);
    if ((bool)(bVar4 | (*local_28 & 0xfc00) == 0xd800)) {
      lVar6 = FUN_143a8fd50(param_1);
      local_28 = (ushort *)(lVar6 + (longlong)local_res10[0] * 2);
      puVar1 = local_28 + (longlong)local_res18[0] + -1;
      while (local_28 < puVar1) {
        uVar2 = *local_28;
        if (((uVar2 & 0xfc00) == 0xdc00) && ((local_28[1] & 0xfc00) == 0xd800)) {
          *local_28 = local_28[1];
          local_28[1] = uVar2;
          local_28 = local_28 + 2;
        }
        else {
          local_28 = local_28 + 1;
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 143a8f880 FUN_143a8f880 body=153 status=ok
// SIG undefined FUN_143a8f880(void)

undefined8 FUN_143a8f880(undefined8 param_1,int param_2,int param_3,longlong param_4,int param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  int local_res10 [2];
  int local_res18 [2];
  longlong local_res20;
  undefined4 local_18 [6];
  
  if ((param_5 < 0) || ((0 < param_5 && (param_4 == 0)))) {
    uVar2 = 0;
  }
  else {
    local_res10[0] = param_2;
    local_res18[0] = param_3;
    local_res20 = param_4;
    FUN_143a90700(param_1,local_res10,local_res18);
    if (local_res18[0] <= param_5) {
      lVar1 = FUN_143a8fd50(param_1);
      FUN_143ab5770(lVar1 + (longlong)local_res10[0] * 2,local_res20,local_res18[0]);
    }
    local_18[0] = 0;
    uVar2 = FUN_143ab4930(local_res20,param_5,local_res18[0],local_18);
  }
  return uVar2;
}



// FUNCTION 143a8f920 FUN_143a8f920 body=218 status=ok
// SIG undefined FUN_143a8f920(void)

ulonglong FUN_143a8f920(undefined8 param_1,void *param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  
  uVar2 = FUN_143a904f0(param_1);
  cVar1 = FUN_143a8b110(*param_4);
  if (cVar1 != '\0') {
    cVar1 = FUN_143a90330(param_1);
    if (((cVar1 == '\0') && (-1 < param_3)) && ((param_3 < 1 || (param_2 != (void *)0x0)))) {
      _Src = (void *)FUN_143a8fd50(param_1);
      if (((0 < (int)uVar2) && ((int)uVar2 <= param_3)) && (_Src != param_2)) {
        _guard_xfg_dispatch_icall_nop(param_2,_Src,(longlong)(int)(uVar2 << 1));
      }
      uVar3 = FUN_143ab4a70(param_2,param_3,uVar2,param_4);
      return uVar3;
    }
    *param_4 = 1;
  }
  return (ulonglong)uVar2;
}



// FUNCTION 143a8fa00 FUN_143a8fa00 body=100 status=ok
// SIG undefined FUN_143a8fa00(void)

void FUN_143a8fa00(undefined8 param_1,int param_2,int param_3,undefined8 param_4,undefined4 param_5)

{
  int local_res10 [2];
  int local_res18 [2];
  undefined8 local_res20;
  
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  local_res20 = param_4;
  FUN_143a906b0(param_1,local_res10);
  FUN_143a906b0(param_1,local_res18);
  FUN_143a8ee20(param_1,local_res10[0],local_res18[0] - local_res10[0],local_res20,param_5);
  return;
}



// FUNCTION 143a8fa70 FUN_143a8fa70 body=92 status=ok
// SIG undefined FUN_143a8fa70(void)

void FUN_143a8fa70(undefined8 param_1,int param_2,int param_3,undefined8 param_4)

{
  int local_res10 [2];
  int local_res18 [2];
  undefined8 local_res20;
  
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  local_res20 = param_4;
  FUN_143a906b0(param_1,local_res10);
  FUN_143a906b0(param_1,local_res18);
  FUN_143a8edd0(param_1,local_res10[0],local_res18[0] - local_res10[0],local_res20);
  return;
}



// FUNCTION 143a8fad0 GetInSameTeam body=37 status=ok
// SIG undefined GetInSameTeam(void)

void UDarwinGameplayFunctionLibrary::GetInSameTeam(undefined8 param_1,undefined8 param_2)

{
  FUN_143a8e920(param_1,param_2,1);
  return;
}



// FUNCTION 143a8fb00 FUN_143a8fb00 body=363 status=ok
// SIG undefined FUN_143a8fb00(void)

undefined8
FUN_143a8fb00(undefined8 param_1,int param_2,int param_3,undefined8 param_4,undefined4 param_5,
             int param_6,undefined8 param_7,undefined4 param_8,int param_9)

{
  char cVar1;
  int iVar2;
  int local_res10 [2];
  int local_res18 [2];
  undefined8 local_res20;
  
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  local_res20 = param_4;
  cVar1 = FUN_143a90330(param_1);
  if (((cVar1 == '\0') && (cVar1 = FUN_143a90330(local_res20), cVar1 == '\0')) &&
     (cVar1 = FUN_143a90330(param_7), cVar1 == '\0')) {
    FUN_143a90700(param_1,local_res10,local_res18);
    FUN_143a90700(local_res20,&param_5,&param_6);
    FUN_143a90700(param_7,&param_8,&param_9);
    if (param_6 != 0) {
      while (((0 < local_res18[0] && (param_6 <= local_res18[0])) &&
             (iVar2 = FUN_143a90160(param_1,local_res20,param_5,param_6,local_res10[0],
                                    local_res18[0]), -1 < iVar2))) {
        FUN_143a90980(param_1,iVar2,param_6,param_7,param_8,param_9);
        local_res18[0] = local_res18[0] - ((iVar2 + param_6) - local_res10[0]);
        local_res10[0] = iVar2 + param_9;
      }
    }
  }
  return param_1;
}



// FUNCTION 143a8fc70 FUN_143a8fc70 body=214 status=ok
// SIG undefined FUN_143a8fc70(void)

longlong FUN_143a8fc70(longlong param_1,int param_2,int param_3,longlong param_4,int param_5,
                      int *param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 < 1) || (param_5 < param_2)) {
    *param_6 = 0;
    param_4 = 0;
  }
  else {
    iVar2 = FUN_143a904f0(*(undefined8 *)(param_1 + 8));
    cVar1 = FUN_143a8e570(*(undefined8 *)(param_1 + 8),iVar2 + param_2,iVar2 + param_3,1,0,0);
    if (cVar1 == '\0') {
      *param_6 = param_5;
    }
    else {
      iVar3 = FUN_143a8fe60(*(undefined8 *)(param_1 + 8));
      *param_6 = iVar3 - iVar2;
      param_4 = FUN_143a8fd50(*(undefined8 *)(param_1 + 8));
      param_4 = param_4 + (longlong)iVar2 * 2;
    }
  }
  return param_4;
}



// FUNCTION 143a8fd50 FUN_143a8fd50 body=62 status=ok
// SIG undefined FUN_143a8fd50(void)

longlong FUN_143a8fd50(longlong param_1)

{
  undefined8 local_18;
  
  if ((*(byte *)(param_1 + 0x27) & 2) == 0) {
    local_18 = *(longlong *)(param_1 + 8);
  }
  else {
    local_18 = param_1 + 8;
  }
  return local_18;
}



// FUNCTION 143a8fd90 FUN_143a8fd90 body=112 status=ok
// SIG undefined FUN_143a8fd90(void)

undefined8 FUN_143a8fd90(longlong param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((-2 < param_2) && (cVar1 = FUN_143a8e570(param_1,param_2,0xffffffff,1,0,0), cVar1 != '\0')) {
    *(byte *)(param_1 + 0x27) = *(byte *)(param_1 + 0x27) | 0x10;
    *(undefined1 *)(param_1 + 0x26) = 0;
    uVar2 = FUN_143a8fd50(param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 143a8fe10 FUN_143a8fe10 body=62 status=ok
// SIG undefined FUN_143a8fe10(void)

longlong FUN_143a8fe10(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x27) & 0x11) == 0) {
    if ((*(byte *)(param_1 + 0x27) & 2) == 0) {
      param_1 = *(longlong *)(param_1 + 8);
    }
    else {
      param_1 = param_1 + 8;
    }
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



// FUNCTION 143a8fe60 FUN_143a8fe60 body=53 status=ok
// SIG undefined FUN_143a8fe60(void)

undefined4 FUN_143a8fe60(longlong param_1)

{
  undefined4 local_18;
  
  if ((*(byte *)(param_1 + 0x27) & 2) == 0) {
    local_18 = *(undefined4 *)(param_1 + 0x10);
  }
  else {
    local_18 = 0xf;
  }
  return local_18;
}



// FUNCTION 143a8fea0 FUN_143a8fea0 body=32 status=ok
// SIG undefined FUN_143a8fea0(void)

void FUN_143a8fea0(undefined8 param_1,undefined4 param_2)

{
  FUN_143a8e3e0(param_1,param_2);
  return;
}



// FUNCTION 143a8fec0 FUN_143a8fec0 body=129 status=ok
// SIG undefined FUN_143a8fec0(void)

uint FUN_143a8fec0(undefined8 param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = FUN_143a904f0(param_1);
  if (param_2 < uVar1) {
    lVar2 = FUN_143a8fd50(param_1);
    if ((((*(ushort *)(lVar2 + (longlong)(int)param_2 * 2) & 0xfc00) == 0xdc00) &&
        (0 < (int)param_2)) &&
       ((*(ushort *)(lVar2 + (longlong)(int)(param_2 - 1) * 2) & 0xfc00) == 0xd800)) {
      param_2 = param_2 - 1;
    }
  }
  else {
    param_2 = 0;
  }
  return param_2;
}



// FUNCTION 143a8ff50 FUN_143a8ff50 body=32 status=ok
// SIG undefined FUN_143a8ff50(void)

void FUN_143a8ff50(undefined8 param_1,undefined4 param_2)

{
  FUN_143a8e4f0(param_1,param_2);
  return;
}



// FUNCTION 143a8ff70 FUN_143a8ff70 body=19 status=ok
// SIG undefined FUN_143a8ff70(void)

void FUN_143a8ff70(void)

{
  FUN_143a8ffb0();
  return;
}



// FUNCTION 143a8ff90 FUN_143a8ff90 body=24 status=ok
// SIG undefined FUN_143a8ff90(void)

void FUN_143a8ff90(undefined8 param_1)

{
  FUN_143a904f0(param_1);
  return;
}



// FUNCTION 143a8ffb0 FUN_143a8ffb0 body=8 status=ok
// SIG undefined FUN_143a8ffb0(void)

undefined * FUN_143a8ffb0(void)

{
  return &DAT_146bc5499;
}



// FUNCTION 143a8ffc0 FUN_143a8ffc0 body=271 status=ok
// SIG undefined FUN_143a8ffc0(void)

longlong FUN_143a8ffc0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  cVar1 = FUN_143a903d0(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  lVar4 = FUN_143a8fd50(param_1);
  iVar2 = FUN_143a904f0(param_1);
  iVar3 = FUN_143a8fe60();
  if (iVar2 < iVar3) {
    if ((*(byte *)(param_1 + 0x27) & 8) == 0) {
      if (((*(byte *)(param_1 + 0x27) & 4) == 0) || (iVar3 = FUN_143a907a0(), iVar3 == 1)) {
        *(undefined2 *)(lVar4 + (longlong)iVar2 * 2) = 0;
        return lVar4;
      }
    }
    else if (*(short *)(lVar4 + (longlong)iVar2 * 2) == 0) {
      return lVar4;
    }
  }
  cVar1 = FUN_143a8e570(param_1,iVar2 + 1,0xffffffff,1,0,0);
  if (cVar1 == '\0') {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_143a8fd50();
    *(undefined2 *)(lVar4 + (longlong)iVar2 * 2) = 0;
  }
  return lVar4;
}



// FUNCTION 143a900e0 accHitTest body=52 status=ok
// SIG long accHitTest(CFormView * this, long param_1, long param_2, tagVARIANT * param_3)

/* Library Function - Single Match
    public: virtual long __cdecl CFormView::accHitTest(long,long,struct tagVARIANT * __ptr64)
   __ptr64
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug */

long __thiscall CFormView::accHitTest(CFormView *this,long param_1,long param_2,tagVARIANT *param_3)

{
  long lVar1;
  
  lVar1 = FUN_143a90ac0(this,param_1,param_2,param_3);
  return lVar1;
}



// FUNCTION 143a90120 FUN_143a90120 body=8 status=ok
// SIG undefined FUN_143a90120(void)

undefined1 FUN_143a90120(void)

{
  return 1;
}



// FUNCTION 143a90130 FUN_143a90130 body=8 status=ok
// SIG undefined FUN_143a90130(void)

undefined1 FUN_143a90130(void)

{
  return 0;
}



// FUNCTION 143a90140 FUN_143a90140 body=24 status=ok
// SIG undefined FUN_143a90140(void)

void FUN_143a90140(undefined8 param_1)

{
  FUN_143a8eea0(param_1);
  return;
}



// FUNCTION 143a90160 FUN_143a90160 body=129 status=ok
// SIG undefined FUN_143a90160(void)

undefined8
FUN_143a90160(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4,
             undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_res18 [2];
  int local_res20 [2];
  
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  cVar1 = FUN_143a90330(param_2);
  if ((cVar1 == '\0') && (FUN_143a90700(param_2,local_res18,local_res20), 0 < local_res20[0])) {
    uVar2 = FUN_143a8fd50(param_2);
    uVar2 = FUN_143a901f0(param_1,uVar2,local_res18[0],local_res20[0],param_5,param_6);
    return uVar2;
  }
  return 0xffffffff;
}



// FUNCTION 143a901f0 FUN_143a901f0 body=229 status=ok
// SIG undefined FUN_143a901f0(void)

longlong FUN_143a901f0(undefined8 param_1,longlong param_2,int param_3,int param_4,int param_5,
                      undefined4 param_6)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  cVar1 = FUN_143a90330(param_1);
  if ((((cVar1 == '\0') && (param_2 != 0)) && (-1 < param_3)) && (param_4 != 0)) {
    if ((param_4 < 0) && (*(short *)(param_2 + (longlong)param_3 * 2) == 0)) {
      lVar2 = 0xffffffff;
    }
    else {
      FUN_143a90700(param_1,&param_5,&param_6);
      lVar2 = FUN_143a8fd50(param_1);
      lVar3 = FUN_143ab3e30(lVar2 + (longlong)param_5 * 2,param_6,param_2 + (longlong)param_3 * 2,
                            param_4);
      if (lVar3 == 0) {
        lVar2 = 0xffffffff;
      }
      else {
        lVar2 = lVar3 - lVar2 >> 1;
      }
    }
  }
  else {
    lVar2 = 0xffffffff;
  }
  return lVar2;
}



// FUNCTION 143a902e0 FUN_143a902e0 body=66 status=ok
// SIG undefined FUN_143a902e0(void)

void FUN_143a902e0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  FUN_143a8f0d0(param_1,param_2,0,param_3,param_4,param_5);
  return;
}



// FUNCTION 143a90330 FUN_143a90330 body=18 status=ok
// SIG undefined FUN_143a90330(void)

byte FUN_143a90330(longlong param_1)

{
  return *(byte *)(param_1 + 0x27) & 1;
}



// FUNCTION 143a90350 FUN_143a90350 body=78 status=ok
// SIG undefined FUN_143a90350(void)

undefined1 FUN_143a90350(longlong param_1)

{
  int iVar1;
  undefined1 local_18;
  
  if ((*(byte *)(param_1 + 0x27) & 0x19) == 0) {
    if ((*(byte *)(param_1 + 0x27) & 4) != 0) {
      iVar1 = FUN_143a907a0(param_1);
      if (iVar1 != 1) goto LAB_143a9038f;
    }
    local_18 = 1;
  }
  else {
LAB_143a9038f:
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143a903a0 FUN_143a903a0 body=41 status=ok
// SIG undefined FUN_143a903a0(void)

bool FUN_143a903a0(longlong param_1)

{
  return *(char *)(param_1 + 0x26) == '\0';
}



// FUNCTION 143a903d0 FUN_143a903d0 body=44 status=ok
// SIG undefined FUN_143a903d0(void)

bool FUN_143a903d0(longlong param_1)

{
  return (*(byte *)(param_1 + 0x27) & 0x11) == 0;
}



// FUNCTION 143a90400 FUN_143a90400 body=229 status=ok
// SIG undefined FUN_143a90400(void)

longlong FUN_143a90400(undefined8 param_1,longlong param_2,int param_3,int param_4,int param_5,
                      undefined4 param_6)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  cVar1 = FUN_143a90330(param_1);
  if ((((cVar1 == '\0') && (param_2 != 0)) && (-1 < param_3)) && (param_4 != 0)) {
    if ((param_4 < 0) && (*(short *)(param_2 + (longlong)param_3 * 2) == 0)) {
      lVar2 = 0xffffffff;
    }
    else {
      FUN_143a90700(param_1,&param_5,&param_6);
      lVar2 = FUN_143a8fd50(param_1);
      lVar3 = FUN_143ab4380(lVar2 + (longlong)param_5 * 2,param_6,param_2 + (longlong)param_3 * 2,
                            param_4);
      if (lVar3 == 0) {
        lVar2 = 0xffffffff;
      }
      else {
        lVar2 = lVar3 - lVar2 >> 1;
      }
    }
  }
  else {
    lVar2 = 0xffffffff;
  }
  return lVar2;
}



// FUNCTION 143a904f0 FUN_143a904f0 body=55 status=ok
// SIG undefined FUN_143a904f0(void)

int FUN_143a904f0(longlong param_1)

{
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0x26) < '\0') {
    local_18 = *(int *)(param_1 + 0x14);
  }
  else {
    local_18 = (int)*(char *)(param_1 + 0x26);
  }
  return local_18;
}



// FUNCTION 143a90530 FUN_143a90530 body=380 status=ok
// SIG undefined FUN_143a90530(void)

int FUN_143a90530(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int local_res10;
  int local_24;
  int local_20;
  
  iVar1 = FUN_143a904f0(param_1);
  if (param_2 < 0) {
    local_res10 = 0;
  }
  else {
    local_res10 = param_2;
    if (iVar1 < param_2) {
      local_res10 = iVar1;
    }
  }
  lVar3 = FUN_143a8fd50(param_1);
  local_24 = param_3;
  if (param_3 < 1) {
    local_20 = -param_3;
    while ((0 < local_20 && (0 < local_res10))) {
      iVar1 = local_res10 + -1;
      if (((*(ushort *)(lVar3 + (longlong)iVar1 * 2) & 0xfc00) == 0xdc00) &&
         ((0 < iVar1 && ((*(ushort *)(lVar3 + (longlong)(local_res10 + -2) * 2) & 0xfc00) == 0xd800)
          ))) {
        iVar1 = local_res10 + -2;
      }
      local_res10 = iVar1;
      local_20 = local_20 + -1;
    }
  }
  else {
    while ((0 < local_24 &&
           ((local_res10 < iVar1 ||
            ((iVar1 < 0 && (*(short *)(lVar3 + (longlong)local_res10 * 2) != 0))))))) {
      iVar2 = local_res10 + 1;
      if (((*(ushort *)(lVar3 + (longlong)local_res10 * 2) & 0xfc00) == 0xd800) &&
         ((iVar2 != iVar1 && ((*(ushort *)(lVar3 + (longlong)iVar2 * 2) & 0xfc00) == 0xdc00)))) {
        iVar2 = local_res10 + 2;
      }
      local_res10 = iVar2;
      local_24 = local_24 + -1;
    }
  }
  return local_res10;
}



// FUNCTION 143a906b0 FUN_143a906b0 body=78 status=ok
// SIG undefined FUN_143a906b0(void)

void FUN_143a906b0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 < 0) {
    *param_2 = 0;
  }
  else {
    iVar1 = FUN_143a904f0(param_1);
    if (iVar1 < *param_2) {
      iVar1 = FUN_143a904f0(param_1);
      *param_2 = iVar1;
    }
  }
  return;
}



// FUNCTION 143a90700 FUN_143a90700 body=154 status=ok
// SIG undefined FUN_143a90700(void)

void FUN_143a90700(undefined8 param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = FUN_143a904f0(param_1);
  if (*param_2 < 0) {
    *param_2 = 0;
  }
  else if (iVar1 < *param_2) {
    *param_2 = iVar1;
  }
  if (*param_3 < 0) {
    *param_3 = 0;
  }
  else if (iVar1 - *param_2 < *param_3) {
    *param_3 = iVar1 - *param_2;
  }
  return;
}



// FUNCTION 143a907a0 FUN_143a907a0 body=35 status=ok
// SIG undefined FUN_143a907a0(void)

void FUN_143a907a0(longlong param_1)

{
  FUN_143a910d0(*(longlong *)(param_1 + 8) + -4);
  return;
}



// FUNCTION 143a907d0 FUN_143a907d0 body=65 status=ok
// SIG undefined FUN_143a907d0(void)

void FUN_143a907d0(longlong param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x27) & 4) != 0) {
    iVar1 = FUN_143a90950(param_1);
    if (iVar1 == 0) {
      FUN_143aa79f0(*(longlong *)(param_1 + 8) + -4);
    }
  }
  return;
}



// FUNCTION 143a90820 FUN_143a90820 body=231 status=ok
// SIG undefined FUN_143a90820(void)

void FUN_143a90820(longlong param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  int local_res10;
  short *local_20;
  
  if (((*(byte *)(param_1 + 0x27) & 0x10) != 0) && (-2 < param_2)) {
    iVar1 = FUN_143a8fe60(param_1);
    if (param_2 == -1) {
      psVar2 = (short *)FUN_143a8fd50(param_1);
      for (local_20 = psVar2; (local_20 < psVar2 + iVar1 && (*local_20 != 0));
          local_20 = local_20 + 1) {
      }
      local_res10 = (int)((longlong)local_20 - (longlong)psVar2 >> 1);
    }
    else {
      local_res10 = param_2;
      if (iVar1 < param_2) {
        local_res10 = iVar1;
      }
    }
    FUN_143a90c60(param_1,local_res10);
    *(byte *)(param_1 + 0x27) = *(byte *)(param_1 + 0x27) & 0xef;
  }
  return;
}



// FUNCTION 143a90910 FUN_143a90910 body=57 status=ok
// SIG undefined FUN_143a90910(void)

longlong FUN_143a90910(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_143a90330(param_1);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x26) = 0;
  }
  else {
    FUN_143a90ee0(param_1);
  }
  return param_1;
}



// FUNCTION 143a90950 FUN_143a90950 body=35 status=ok
// SIG undefined FUN_143a90950(void)

void FUN_143a90950(longlong param_1)

{
  FUN_143a91090(*(longlong *)(param_1 + 8) + -4);
  return;
}



// FUNCTION 143a90980 FUN_143a90980 body=68 status=ok
// SIG undefined FUN_143a90980(void)

void FUN_143a90980(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  FUN_143a8f030(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 143a909d0 FUN_143a909d0 body=239 status=ok
// SIG undefined FUN_143a909d0(void)

void FUN_143a909d0(undefined8 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  ushort local_res20;
  undefined4 local_14;
  ushort local_10;
  ushort uStack_e;
  undefined4 local_c;
  
  local_14 = 0;
  bVar1 = false;
  local_res20 = (ushort)param_4;
  if (param_4 < 0x10000) {
    local_10 = local_res20;
    local_14 = 1;
  }
  else if (param_4 < 0x110000) {
    local_10 = (short)((int)param_4 >> 10) + 0xd7c0;
    uStack_e = local_res20 & 0x3ff | 0xdc00;
    local_14 = 2;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    local_c = 0;
  }
  else {
    local_c = local_14;
  }
  FUN_143a8f0d0(param_1,param_2,param_3,&local_10,0,local_c);
  return;
}



// FUNCTION 143a90ac0 FUN_143a90ac0 body=84 status=ok
// SIG undefined FUN_143a90ac0(void)

void FUN_143a90ac0(undefined8 param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143a904f0(param_4);
  FUN_143a8f030(param_1,param_2,param_3 - param_2,param_4,0,uVar1);
  return;
}



// FUNCTION 143a90b20 FUN_143a90b20 body=75 status=ok
// SIG undefined FUN_143a90b20(void)

void FUN_143a90b20(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_143a904f0(*(undefined8 *)(param_1 + 8));
  FUN_143a8e570(*(undefined8 *)(param_1 + 8),iVar1 + param_2,0xffffffff,1,0,0);
  return;
}



// FUNCTION 143a90b70 FUN_143a90b70 body=69 status=ok
// SIG undefined FUN_143a90b70(void)

void FUN_143a90b70(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_143a90c60(param_1,param_3);
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  return;
}



// FUNCTION 143a90bc0 FUN_143a90bc0 body=156 status=ok
// SIG undefined FUN_143a90bc0(void)

undefined8 FUN_143a90bc0(undefined8 param_1,int param_2,undefined2 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined4 local_res10;
  
  iVar2 = FUN_143a904f0(param_1);
  cVar1 = FUN_143a8e570(param_1,0xffffffff,0xffffffff,1,0,0);
  if ((cVar1 != '\0') && (0 < iVar2)) {
    if (param_2 < 0) {
      local_res10 = 0;
    }
    else {
      local_res10 = param_2;
      if (iVar2 <= param_2) {
        local_res10 = iVar2 + -1;
      }
    }
    lVar3 = FUN_143a8fd50(param_1);
    *(undefined2 *)(lVar3 + (longlong)local_res10 * 2) = param_3;
  }
  return param_1;
}



// FUNCTION 143a90c60 FUN_143a90c60 body=53 status=ok
// SIG undefined FUN_143a90c60(void)

void FUN_143a90c60(longlong param_1,int param_2)

{
  undefined1 local_res10;
  
  if (param_2 < 0x80) {
    local_res10 = (undefined1)param_2;
    *(undefined1 *)(param_1 + 0x26) = local_res10;
  }
  else {
    *(undefined1 *)(param_1 + 0x26) = 0xff;
    *(int *)(param_1 + 0x14) = param_2;
  }
  return;
}



// FUNCTION 143a90ca0 FUN_143a90ca0 body=113 status=ok
// SIG undefined FUN_143a90ca0(void)

void FUN_143a90ca0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_res18 [4];
  
  local_res18[0] = param_3;
  FUN_143a91100(param_1);
  FUN_143a906b0(param_2,local_res18);
  iVar1 = FUN_143a904f0(param_2);
  iVar1 = iVar1 - local_res18[0];
  uVar2 = FUN_143a904f0(param_1);
  FUN_143a8f030(param_1,0,uVar2,param_2,local_res18[0],iVar1);
  return;
}



// FUNCTION 143a90d20 FUN_143a90d20 body=85 status=ok
// SIG undefined FUN_143a90d20(void)

void FUN_143a90d20(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  FUN_143a91100(param_1);
  uVar1 = FUN_143a904f0(param_1);
  FUN_143a8f030(param_1,0,uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143a90d80 FUN_143a90d80 body=265 status=ok
// SIG undefined FUN_143a90d80(void)

longlong FUN_143a90d80(longlong param_1,char param_2,longlong param_3,int param_4)

{
  int local_res20;
  int local_18;
  
  if ((*(byte *)(param_1 + 0x27) & 0x10) == 0) {
    if (param_3 == 0) {
      FUN_143a907d0(param_1);
      FUN_143a90ee0(param_1);
    }
    else if (((param_4 < -1) || ((param_4 == -1 && (param_2 == '\0')))) ||
            ((-1 < param_4 &&
             ((param_2 != '\0' && (*(short *)(param_3 + (longlong)param_4 * 2) != 0)))))) {
      FUN_143a90e90(param_1);
    }
    else {
      FUN_143a907d0(param_1);
      local_res20 = param_4;
      if (param_4 == -1) {
        local_res20 = FreeLib(param_3);
      }
      if (param_2 == '\0') {
        local_18 = local_res20;
      }
      else {
        local_18 = local_res20 + 1;
      }
      FUN_143a90b70(param_1,param_3,local_res20,local_18);
      *(undefined1 *)(param_1 + 0x27) = 8;
    }
  }
  return param_1;
}



// FUNCTION 143a90e90 FUN_143a90e90 body=67 status=ok
// SIG undefined FUN_143a90e90(void)

void FUN_143a90e90(longlong param_1)

{
  FUN_143a907d0(param_1);
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x27) = 1;
  return;
}



// FUNCTION 143a90ee0 FUN_143a90ee0 body=24 status=ok
// SIG undefined FUN_143a90ee0(void)

void FUN_143a90ee0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x27) = 2;
  return;
}



// FUNCTION 143a90f00 FUN_143a90f00 body=227 status=ok
// SIG undefined FUN_143a90f00(void)

undefined8 FUN_143a90f00(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_143a91100(param_1);
  iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_2);
  if (iVar2 < 0x10) {
    local_24 = 0xf;
  }
  else {
    local_24 = iVar2 + 1;
  }
  local_10 = FUN_143a8fd90(param_1,local_24);
  local_20 = 0;
  local_18 = FUN_143a8b510(param_2);
  uVar3 = FUN_143a8fe60(param_1);
  FUN_143ab60d0(local_10,uVar3,&local_1c,local_18,iVar2,0xfffd,0,&local_20);
  FUN_143a90820(param_1,local_1c);
  cVar1 = FUN_143a8b0e0(local_20);
  if (cVar1 != '\0') {
    FUN_143a90e90(param_1);
  }
  return param_1;
}



// FUNCTION 143a90ff0 FUN_143a90ff0 body=152 status=ok
// SIG undefined FUN_143a90ff0(void)

undefined8 FUN_143a90ff0(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int local_res18 [2];
  undefined4 local_res20 [2];
  longlong local_10;
  
  local_res20[0] = (undefined4)param_4;
  local_res18[0] = param_3;
  FUN_143a90700(param_1,local_res18,local_res20,param_4,0);
  local_10 = FUN_143a8fe10(param_1);
  if (local_10 == 0) {
    local_10 = param_1 + 8;
    local_res20[0] = 0xfffffffe;
  }
  FUN_143a8d4f0(param_2,0,local_10 + (longlong)local_res18[0] * 2,local_res20[0]);
  return param_2;
}



// FUNCTION 143a91090 FUN_143a91090 body=24 status=ok
// SIG undefined FUN_143a91090(void)

int FUN_143a91090(int *param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + -1;
  UNLOCK();
  return iVar1 + -1;
}



// FUNCTION 143a910b0 FUN_143a910b0 body=24 status=ok
// SIG undefined FUN_143a910b0(void)

int FUN_143a910b0(int *param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + 1;
  UNLOCK();
  return iVar1 + 1;
}



// FUNCTION 143a910d0 FUN_143a910d0 body=33 status=ok
// SIG undefined FUN_143a910d0(void)

int FUN_143a910d0(int *param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  if (iVar1 == 0) {
    *param_1 = 0;
    iVar1 = 0;
  }
  UNLOCK();
  return iVar1;
}



// FUNCTION 143a91100 FUN_143a91100 body=40 status=ok
// SIG undefined FUN_143a91100(void)

void FUN_143a91100(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x27) & 1) != 0) {
    FUN_143a90ee0(param_1);
  }
  return;
}



// FUNCTION 143a91130 FUN_143a91130 body=386 status=ok
// SIG undefined FUN_143a91130(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a91130(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  int local_68;
  int local_64;
  uint local_60;
  int local_5c;
  int local_58;
  uint local_54;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_60 = 0;
  uVar1 = FUN_143a904f0(param_1);
  FUN_143a8d6f0(local_40,uVar1,0,0);
  local_50 = FUN_143a8fe10(param_1);
  local_58 = FUN_143a904f0(param_1);
  local_64 = 0;
  local_68 = 0;
  iVar2 = local_68;
  do {
    do {
      local_68 = iVar2;
      if (local_68 == local_58) {
        FUN_143a8e1c0(local_40,local_50,local_64,local_58 - local_64);
LAB_143a9126e:
        FUN_143a8d3a0(param_2,local_40);
        local_60 = local_60 | 1;
        FUN_143a8dc60(local_40);
        return param_2;
      }
      local_54 = (uint)*(ushort *)(local_50 + (longlong)local_68 * 2);
      iVar2 = local_68 + 1;
    } while (local_54 != 0x5c);
    iVar2 = local_68 - local_64;
    local_68 = local_68 + 1;
    FUN_143a8e1c0(local_40,local_50,local_64,iVar2);
    local_5c = FUN_143a912c0(param_1,&local_68);
    if (local_5c < 0) {
      FUN_143a90910(local_40);
      goto LAB_143a9126e;
    }
    FUN_143a8e0c0(local_40,local_5c);
    local_64 = local_68;
    iVar2 = local_68;
  } while( true );
}



// FUNCTION 143a912c0 FUN_143a912c0 body=54 status=ok
// SIG undefined FUN_143a912c0(void)

void FUN_143a912c0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143a904f0(param_1);
  FUN_143ab4b10(FUN_143a91360,param_2,uVar1,param_1);
  return;
}



// FUNCTION 143a91300 FUN_143a91300 body=96 status=ok
// SIG undefined FUN_143a91300(void)

void FUN_143a91300(longlong param_1,int param_2,longlong param_3,int param_4,int param_5)

{
  if (0 < param_5) {
    memmove((void *)(param_3 + (longlong)param_4 * 2),(void *)(param_1 + (longlong)param_2 * 2),
            (longlong)param_5 << 1);
  }
  return;
}



// FUNCTION 143a91360 FUN_143a91360 body=32 status=ok
// SIG undefined FUN_143a91360(void)

void FUN_143a91360(undefined4 param_1,undefined8 param_2)

{
  FUN_143a8e4f0(param_2,param_1);
  return;
}



// FUNCTION 143a91380 FUN_143a91380 body=90 status=ok
// SIG undefined FUN_143a91380(void)

undefined8 FUN_143a91380(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_1 == param_2) {
    uVar1 = 1;
  }
  else if ((param_1 == 0) || (param_2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_143a8dd00(param_1,param_2);
  }
  return uVar1;
}



// FUNCTION 143a913e0 FUN_143a913e0 body=60 status=ok
// SIG undefined FUN_143a913e0(void)

undefined4 FUN_143a913e0(longlong param_1)

{
  undefined4 local_18;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = FUN_143a90140(param_1);
  }
  return local_18;
}



// FUNCTION 143a91420 FUN_143a91420 body=44 status=ok
// SIG undefined FUN_143a91420(void)

undefined * FUN_143a91420(void)

{
  UINT UVar1;
  
  UVar1 = GetACP();
  sprintf(&DAT_146bc54b0,"windows-%d",(ulonglong)UVar1);
  return &DAT_146bc54b0;
}



// FUNCTION 143a91450 FUN_143a91450 body=91 status=ok
// SIG undefined FUN_143a91450(void)

undefined8 FUN_143a91450(void)

{
  if ((DAT_146bc54a0 != (char *)0x0) && (*DAT_146bc54a0 != '\0')) {
    FUN_143aa79f0(DAT_146bc54a0);
  }
  DAT_146bc54a0 = (char *)0x0;
  if (DAT_146bc54a8 != 0) {
    FUN_143aa79f0(DAT_146bc54a8);
    DAT_146bc54a8 = 0;
  }
  return 1;
}



// FUNCTION 143a914b0 FUN_143a914b0 body=92 status=ok
// SIG undefined FUN_143a914b0(void)

longlong FUN_143a914b0(void)

{
  char *local_18;
  
  if (DAT_146bc54a0 == 0) {
    local_18 = getenv("ICU_DATA");
    if (local_18 == (char *)0x0) {
      local_18 = "";
    }
    FUN_143a91510(local_18);
  }
  return DAT_146bc54a0;
}



// FUNCTION 143a91510 FUN_143a91510 body=212 status=ok
// SIG undefined FUN_143a91510(void)

void FUN_143a91510(char *param_1)

{
  size_t sVar1;
  undefined1 *puVar2;
  char *local_20;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    local_20 = "";
  }
  else {
    sVar1 = _guard_xfg_dispatch_icall_nop(param_1);
    local_20 = (char *)FUN_143aa7a40((longlong)((int)sVar1 + 2));
    if (local_20 == (char *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(local_20,param_1);
    while (puVar2 = (undefined1 *)FUN_143a8d150(local_20,0x2f), puVar2 != (undefined1 *)0x0) {
      *puVar2 = 0x5c;
    }
  }
  if ((DAT_146bc54a0 != (char *)0x0) && (*DAT_146bc54a0 != '\0')) {
    FUN_143aa79f0(DAT_146bc54a0);
  }
  DAT_146bc54a0 = local_20;
  FUN_143aa77b0(0xf,FUN_143a91450);
  return;
}



// FUNCTION 143a915f0 FUN_143a915f0 body=186 status=ok
// SIG undefined FUN_143a915f0(void)

void FUN_143a915f0(longlong param_1,char *param_2)

{
  ulong uVar1;
  char *local_res10;
  ushort local_18;
  char *local_10 [2];
  
  local_18 = 0;
  if (param_1 != 0) {
    local_res10 = param_2;
    if (param_2 != (char *)0x0) {
      while( true ) {
        uVar1 = strtoul(local_res10,local_10,10);
        *(char *)(param_1 + (ulonglong)local_18) = (char)uVar1;
        if (((local_10[0] == local_res10) || (local_18 = local_18 + 1, local_18 == 4)) ||
           (*local_10[0] != '.')) break;
        local_res10 = local_10[0] + 1;
      }
    }
    for (; local_18 < 4; local_18 = local_18 + 1) {
      *(undefined1 *)(param_1 + (ulonglong)local_18) = 0;
    }
  }
  return;
}



// FUNCTION 143a916b0 FUN_143a916b0 body=27 status=ok
// SIG undefined FUN_143a916b0(void)

void FUN_143a916b0(double param_1)

{
  ceil(param_1);
  return;
}



// FUNCTION 143a916d0 FUN_143a916d0 body=51 status=ok
// SIG undefined FUN_143a916d0(void)

void FUN_143a916d0(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    *param_2 = 0x10;
  }
  return;
}



// FUNCTION 143a91710 FUN_143a91710 body=55 status=ok
// SIG undefined FUN_143a91710(void)

undefined8 FUN_143a91710(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    *param_2 = 0x10;
  }
  return 0;
}



// FUNCTION 143a91750 FUN_143a91750 body=56 status=ok
// SIG undefined FUN_143a91750(void)

undefined8 FUN_143a91750(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  
  cVar1 = FUN_143a8b110(*param_3);
  if (cVar1 != '\0') {
    *param_3 = 0x10;
  }
  return 0;
}



// FUNCTION 143a91790 FUN_143a91790 body=26 status=ok
// SIG undefined FUN_143a91790(void)

void FUN_143a91790(double param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1);
  return;
}



// FUNCTION 143a917b0 FUN_143a917b0 body=27 status=ok
// SIG undefined FUN_143a917b0(void)

void FUN_143a917b0(double param_1)

{
  floor(param_1);
  return;
}



// FUNCTION 143a917d0 FUN_143a917d0 body=38 status=ok
// SIG undefined FUN_143a917d0(void)

void FUN_143a917d0(double param_1,double param_2)

{
  _guard_xfg_dispatch_icall_nop(param_1,param_2);
  return;
}



// FUNCTION 143a91800 FUN_143a91800 body=52 status=ok
// SIG undefined FUN_143a91800(void)

longlong FUN_143a91800(void)

{
  FUN_143ab2410(0);
  if (DAT_146bc54f0 == 0) {
    DAT_146bc54f0 = FUN_143a91420();
  }
  FUN_143ab2470(0);
  return DAT_146bc54f0;
}



// FUNCTION 143a91840 FUN_143a91840 body=207 status=ok
// SIG undefined FUN_143a91840(void)

char * FUN_143a91840(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 local_28;
  LCID local_24;
  int local_20;
  char *local_18;
  
  local_28 = 0;
  local_18 = (char *)0x0;
  pcVar2 = DAT_146bc54a8;
  if (DAT_146bc54a8 == (char *)0x0) {
    local_24 = GetThreadLocale();
    local_18 = (char *)FUN_143aa7a40(0x41);
    if (local_18 != (char *)0x0) {
      local_20 = FUN_143ab8a30(local_24,local_18,0x40,&local_28);
      cVar1 = FUN_143a8b110(local_28);
      if (cVar1 == '\0') {
        FUN_143aa79f0(local_18);
      }
      else {
        local_18[local_20] = '\0';
        DAT_146bc54a8 = local_18;
        FUN_143aa77b0(0xf,FUN_143a91450);
      }
    }
    pcVar2 = DAT_146bc54a8;
    if (DAT_146bc54a8 == (char *)0x0) {
      pcVar2 = "en_US";
    }
  }
  return pcVar2;
}



// FUNCTION 143a91910 FUN_143a91910 body=9 status=ok
// SIG undefined FUN_143a91910(void)

undefined8 FUN_143a91910(void)

{
  return 0x7ff0000000000000;
}



// FUNCTION 143a91920 FUN_143a91920 body=9 status=ok
// SIG undefined FUN_143a91920(void)

undefined8 FUN_143a91920(void)

{
  return 0x7ff8000000000000;
}



// FUNCTION 143a91930 FUN_143a91930 body=56 status=ok
// SIG undefined FUN_143a91930(void)

double FUN_143a91930(void)

{
  _FILETIME local_18 [3];
  
  GetSystemTimeAsFileTime(local_18);
  return (double)(((longlong)local_18[0] + -0x19db1ded53e8000) / 10000);
}



// FUNCTION 143a91970 FUN_143a91970 body=14 status=ok
// SIG undefined FUN_143a91970(void)

void FUN_143a91970(void)

{
  FUN_143a91930();
  return;
}



// FUNCTION 143a91980 FUN_143a91980 body=71 status=ok
// SIG undefined FUN_143a91980(void)

bool FUN_143a91980(ulonglong param_1)

{
  return (param_1 & 0x7fffffffffffffff) == 0x7ff0000000000000;
}



// FUNCTION 143a919d0 FUN_143a919d0 body=71 status=ok
// SIG undefined FUN_143a919d0(void)

bool FUN_143a919d0(ulonglong param_1)

{
  return 0x7ff0000000000000 < (param_1 & 0x7fffffffffffffff);
}



// FUNCTION 143a91a20 FUN_143a91a20 body=61 status=ok
// SIG undefined FUN_143a91a20(void)

undefined1 FUN_143a91a20(double param_1)

{
  char cVar1;
  
  if ((param_1 < 0.0) && (cVar1 = FUN_143a91980(param_1), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 143a91a60 FUN_143a91a60 body=66 status=ok
// SIG undefined FUN_143a91a60(void)

undefined1 FUN_143a91a60(double param_1)

{
  char cVar1;
  
  if ((0.0 < param_1) && (cVar1 = FUN_143a91980(param_1), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 143a91ab0 FUN_143a91ab0 body=26 status=ok
// SIG undefined FUN_143a91ab0(void)

void FUN_143a91ab0(double param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1);
  return;
}



// FUNCTION 143a91ad0 FUN_143a91ad0 body=38 status=ok
// SIG undefined FUN_143a91ad0(void)

double FUN_143a91ad0(void)

{
  double dVar1;
  
  dVar1 = _guard_xfg_dispatch_icall_nop(2.0,54.0);
  return dVar1 - 1.0;
}



// FUNCTION 143a91b00 FUN_143a91b00 body=191 status=ok
// SIG undefined FUN_143a91b00(void)

ulonglong FUN_143a91b00(char *param_1)

{
  char cVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  
  if ((param_1 == (char *)0x0) || (in_RAX = (ulonglong)(uint)(int)*param_1, (int)*param_1 == 0)) {
    uVar2 = in_RAX & 0xffffffffffffff00;
  }
  else if (*param_1 == '\\') {
    uVar2 = 1;
  }
  else if (*param_1 == '/') {
    uVar2 = 1;
  }
  else {
    if ((('@' < *param_1) && (*param_1 < '[')) ||
       ((uVar2 = (ulonglong)(uint)(int)*param_1, 0x60 < *param_1 &&
        (uVar2 = (ulonglong)(uint)(int)*param_1, *param_1 < 0x7b)))) {
      cVar1 = param_1[1];
      uVar2 = (ulonglong)(uint)(int)cVar1;
      if ((int)cVar1 == 0x3a) {
        return CONCAT71((uint7)(uint3)(cVar1 >> 7),1);
      }
    }
    uVar2 = uVar2 & 0xffffffffffffff00;
  }
  return uVar2;
}



// FUNCTION 143a91bc0 FUN_143a91bc0 body=38 status=ok
// SIG undefined FUN_143a91bc0(void)

void FUN_143a91bc0(double param_1,double param_2)

{
  _guard_xfg_dispatch_icall_nop(param_1,param_2);
  return;
}



// FUNCTION 143a91bf0 FUN_143a91bf0 body=34 status=ok
// SIG undefined FUN_143a91bf0(void)

void FUN_143a91bf0(double param_1)

{
  FUN_143a917b0(param_1 + 0.5);
  return;
}



// FUNCTION 143a91c20 FUN_143a91c20 body=17 status=ok
// SIG undefined FUN_143a91c20(void)

long FUN_143a91c20(void)

{
  long *plVar1;
  
  plVar1 = __timezone();
  return *plVar1;
}



// FUNCTION 143a91c40 FUN_143a91c40 body=67 status=ok
// SIG undefined FUN_143a91c40(void)

longlong FUN_143a91c40(int param_1)

{
  longlong lVar1;
  char **ppcVar2;
  
  lVar1 = FUN_143ab90d0();
  if (lVar1 == 0) {
    ppcVar2 = __tzname();
    lVar1 = FUN_143ab8360(ppcVar2[param_1]);
  }
  return lVar1;
}



// FUNCTION 143a91c90 FUN_143a91c90 body=15 status=ok
// SIG undefined FUN_143a91c90(void)

void FUN_143a91c90(void)

{
  _tzset();
  return;
}



// FUNCTION 143a91ca0 FUN_143a91ca0 body=46 status=ok
// SIG undefined FUN_143a91ca0(void)

bool FUN_143a91ca0(longlong param_1)

{
  return *(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14);
}



// FUNCTION 143a91cd0 FUN_143a91cd0 body=46 status=ok
// SIG undefined FUN_143a91cd0(void)

bool FUN_143a91cd0(longlong param_1)

{
  return *(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x10);
}



// FUNCTION 143a91d40 FUN_143a91d40 body=84 status=ok
// SIG undefined FUN_143a91d40(void)

uint FUN_143a91d40(longlong *param_1)

{
  uint uVar1;
  
  if ((int)param_1[2] < *(int *)((longlong)param_1 + 0x14)) {
    uVar1 = (uint)*(ushort *)(*param_1 + (longlong)(int)param_1[2] * 2);
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 143a91da0 FUN_143a91da0 body=79 status=ok
// SIG undefined FUN_143a91da0(void)

ulonglong FUN_143a91da0(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  if (*(int *)((longlong)param_1 + 0xc) < (int)param_1[2]) {
    iVar1 = (int)param_1[2] + -1;
    *(int *)(param_1 + 2) = iVar1;
    uVar2 = (ulonglong)*(ushort *)(*param_1 + (longlong)iVar1 * 2);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 143a91e00 FUN_143a91e00 body=14 status=ok
// SIG undefined FUN_143a91e00(void)

undefined4 FUN_143a91e00(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// FUNCTION 143a91e10 FUN_143a91e10 body=126 status=ok
// SIG undefined FUN_143a91e10(void)

void FUN_143a91e10(longlong param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  
  if ((param_3 != (undefined4 *)0x0) && (cVar1 = FUN_143a8b0e0(*param_3), cVar1 == '\0')) {
    if (param_1 == 0) {
      *param_3 = 1;
    }
    else if ((param_2 < *(int *)(param_1 + 0xc)) || (*(int *)(param_1 + 0x14) < param_2)) {
      *param_3 = 8;
    }
    else {
      *(int *)(param_1 + 0x10) = param_2;
    }
  }
  return;
}



// FUNCTION 143a91e90 FUN_143a91e90 body=61 status=ok
// SIG undefined FUN_143a91e90(void)

undefined8 FUN_143a91e90(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
    uVar1 = FUN_143a940e0(param_1,*(int *)(param_1 + 0x10));
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 143a91ed0 FUN_143a91ed0 body=75 status=ok
// SIG undefined FUN_143a91ed0(void)

undefined8 FUN_143a91ed0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x10) = iVar1 + 1;
    uVar2 = FUN_143a940e0(param_1,iVar1);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 143a91f20 FUN_143a91f20 body=83 status=ok
// SIG undefined FUN_143a91f20(void)

undefined8 FUN_143a91f20(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x10)) {
    iVar1 = *(int *)(param_1 + 0x10) + -1;
    *(int *)(param_1 + 0x10) = iVar1;
    uVar2 = FUN_143a940e0(param_1,iVar1);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 143a91f80 FUN_143a91f80 body=132 status=ok
// SIG undefined FUN_143a91f80(void)

undefined8 FUN_143a91f80(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = FUN_143a91e00(*param_1);
  }
  else if (param_2 == 1) {
    uVar1 = FUN_143a93e60(*param_1);
  }
  else if (param_2 == 2) {
    uVar1 = FUN_143a93e50(*param_1);
  }
  else if (param_2 == 3) {
    uVar1 = 0;
  }
  else if (param_2 == 4) {
    uVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*param_1);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 143a92010 FUN_143a92010 body=229 status=ok
// SIG undefined FUN_143a92010(void)

undefined8 FUN_143a92010(undefined8 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (-1 < param_3) {
    if (param_3 < 3) {
      uVar2 = (**(code **)(*(longlong *)*param_1 + 0xb8))(*param_1,param_2,param_3);
      return uVar2;
    }
    if (param_3 == 3) {
      (**(code **)(*(longlong *)*param_1 + 0x70))(*param_1,param_2);
      uVar2 = FUN_143a93e60(*param_1);
      return uVar2;
    }
    if (param_3 == 4) {
      iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(*param_1);
      (**(code **)(*(longlong *)*param_1 + 0x70))(*param_1,iVar1 + param_2);
      uVar2 = FUN_143a93e60(*param_1);
      return uVar2;
    }
  }
  return 0xffffffff;
}



// FUNCTION 143a92100 FUN_143a92100 body=36 status=ok
// SIG undefined FUN_143a92100(void)

void FUN_143a92100(undefined8 *param_1)

{
  (**(code **)(*(longlong *)*param_1 + 0x30))(*param_1);
  return;
}



// FUNCTION 143a92130 FUN_143a92130 body=39 status=ok
// SIG undefined FUN_143a92130(void)

void FUN_143a92130(undefined8 *param_1)

{
  (**(code **)(*(longlong *)*param_1 + 0xb0))(*param_1);
  return;
}



// FUNCTION 143a92160 FUN_143a92160 body=96 status=ok
// SIG undefined FUN_143a92160(void)

uint FUN_143a92160(undefined8 *param_1)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar2 = (**(code **)(*(longlong *)*param_1 + 0x80))(*param_1);
  uVar3 = (uint)uVar2;
  if ((uVar3 == 0xffff) &&
     (cVar1 = (**(code **)(*(longlong *)*param_1 + 0x30))(*param_1), cVar1 == '\0')) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 143a921d0 FUN_143a921d0 body=75 status=ok
// SIG undefined FUN_143a921d0(void)

ulonglong FUN_143a921d0(undefined8 *param_1)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  
  cVar1 = (**(code **)(*(longlong *)*param_1 + 0x30))(*param_1);
  if (cVar1 == '\0') {
    uVar3 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*(longlong *)*param_1 + 0x20))(*param_1);
    uVar3 = (ulonglong)uVar2;
  }
  return uVar3;
}



// FUNCTION 143a92220 FUN_143a92220 body=81 status=ok
// SIG undefined FUN_143a92220(void)

ulonglong FUN_143a92220(undefined8 *param_1)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  
  cVar1 = (**(code **)(*(longlong *)*param_1 + 0xb0))(*param_1);
  if (cVar1 == '\0') {
    uVar3 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*(longlong *)*param_1 + 0xa0))(*param_1);
    uVar3 = (ulonglong)uVar2;
  }
  return uVar3;
}



// FUNCTION 143a92280 FUN_143a92280 body=27 status=ok
// SIG undefined FUN_143a92280(void)

void FUN_143a92280(undefined8 *param_1)

{
  FUN_143a93e60(*param_1);
  return;
}



// FUNCTION 143a922a0 FUN_143a922a0 body=161 status=ok
// SIG undefined FUN_143a922a0(void)

void FUN_143a922a0(longlong *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  
  if ((param_3 != (undefined4 *)0x0) && (cVar1 = FUN_143a8b0e0(*param_3), cVar1 == '\0')) {
    if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
      *param_3 = 1;
    }
    else {
      iVar2 = FUN_143a91e00(*param_1);
      if ((param_2 < iVar2) || (iVar2 = FUN_143a93e50(*param_1), iVar2 < param_2)) {
        *param_3 = 8;
      }
      else {
        (**(code **)(*(longlong *)*param_1 + 0x70))(*param_1,param_2);
      }
    }
  }
  return;
}



// FUNCTION 143a92350 FUN_143a92350 body=63 status=ok
// SIG undefined FUN_143a92350(void)

ulonglong FUN_143a92350(undefined8 *param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 2) < *(int *)((longlong)param_1 + 0x14)) {
    uVar1 = FUN_143a93e20(*param_1,*(undefined4 *)(param_1 + 2));
    uVar2 = (ulonglong)uVar1;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 143a923a0 FUN_143a923a0 body=89 status=ok
// SIG undefined FUN_143a923a0(void)

ulonglong FUN_143a923a0(undefined8 *param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  ulonglong uVar3;
  
  if (*(int *)(param_1 + 2) < *(int *)((longlong)param_1 + 0x14)) {
    uVar1 = *(undefined4 *)(param_1 + 2);
    *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
    uVar2 = FUN_143a93e20(*param_1,uVar1);
    uVar3 = (ulonglong)uVar2;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 143a92400 FUN_143a92400 body=85 status=ok
// SIG undefined FUN_143a92400(void)

ulonglong FUN_143a92400(undefined8 *param_1)

{
  int iVar1;
  ushort uVar2;
  ulonglong uVar3;
  
  if (*(int *)((longlong)param_1 + 0xc) < *(int *)(param_1 + 2)) {
    iVar1 = *(int *)(param_1 + 2);
    *(int *)(param_1 + 2) = iVar1 + -1;
    uVar2 = FUN_143a93e20(*param_1,iVar1 + -1);
    uVar3 = (ulonglong)uVar2;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 143a92460 FUN_143a92460 body=1702 status=ok
// SIG undefined FUN_143a92460(void)

undefined4 FUN_143a92460(longlong *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_58;
  uint local_54;
  byte local_50;
  byte local_4f;
  byte local_4e;
  int local_4c;
  uint local_48;
  int local_44;
  byte local_40;
  byte local_3f;
  int local_3c;
  byte local_38;
  int local_34;
  int local_30;
  int local_2c;
  longlong local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  longlong local_10;
  
  if (param_2 == 0) {
LAB_143a924ab:
    uVar2 = 0;
  }
  else {
    if (param_2 == 1) {
      if ((int)param_1[2] < 0) {
        local_10 = *param_1;
        local_34 = 0;
        local_4c = 0;
        local_30 = *(int *)((longlong)param_1 + 0xc);
        local_2c = 1;
        while (local_4c < local_30) {
          local_48 = (uint)*(byte *)(local_10 + local_4c);
          iVar1 = local_4c + 1;
          if (0x7f < local_48) {
            if ((((local_48 < 0xe1) || (0xec < local_48)) ||
                ((local_30 <= local_4c + 2 && (-1 < local_30)))) ||
               ((local_50 = *(char *)(local_10 + iVar1) + 0x80, 0x3f < local_50 ||
                (local_38 = *(char *)(local_10 + (local_4c + 2)) + 0x80, 0x3f < local_38)))) {
              if ((local_48 < 0xe0) &&
                 (((0xc1 < local_48 && (iVar1 != local_30)) &&
                  (local_50 = *(char *)(local_10 + iVar1) + 0x80, local_50 < 0x40)))) {
                local_48 = (local_48 & 0x1f) << 6 | (uint)local_50;
                iVar1 = local_4c + 2;
              }
              else {
                local_4c = iVar1;
                local_48 = FUN_143ab96e0(local_10,&local_4c,local_30,local_48,0xfd);
                iVar1 = local_4c;
              }
            }
            else {
              local_48 = (local_48 & 0xf) << 0xc | (uint)local_50 << 6 | (uint)local_38;
              iVar1 = local_4c + 3;
            }
          }
          local_4c = iVar1;
          if (local_48 < 0x10000) {
            local_14 = 1;
          }
          else {
            local_14 = 2;
          }
          local_34 = local_34 + local_14;
        }
        *(int *)((longlong)param_1 + 0xc) = local_4c;
        if (local_4c == *(int *)((longlong)param_1 + 0x14)) {
          *(int *)(param_1 + 1) = local_34;
        }
        if ((int)param_1[3] != 0) {
          local_34 = local_34 + -1;
        }
        *(int *)(param_1 + 2) = local_34;
      }
      return (int)param_1[2];
    }
    if (param_2 != 2) {
      if (param_2 == 3) goto LAB_143a924ab;
      if (param_2 != 4) {
        return 0xffffffff;
      }
    }
    if ((int)param_1[1] < 0) {
      local_28 = *param_1;
      local_2c = param_2;
      if ((int)param_1[2] < 0) {
        local_3c = 0;
        local_58 = 0;
        local_44 = *(int *)((longlong)param_1 + 0xc);
        while (local_58 < local_44) {
          local_54 = (uint)*(byte *)(local_28 + local_58);
          iVar1 = local_58 + 1;
          if (0x7f < local_54) {
            if ((((local_54 < 0xe1) || (0xec < local_54)) ||
                ((local_44 <= local_58 + 2 && (-1 < local_44)))) ||
               ((local_4e = *(char *)(local_28 + iVar1) + 0x80, 0x3f < local_4e ||
                (local_40 = *(char *)(local_28 + (local_58 + 2)) + 0x80, 0x3f < local_40)))) {
              if ((local_54 < 0xe0) &&
                 (((0xc1 < local_54 && (iVar1 != local_44)) &&
                  (local_4e = *(char *)(local_28 + iVar1) + 0x80, local_4e < 0x40)))) {
                local_54 = (local_54 & 0x1f) << 6 | (uint)local_4e;
                iVar1 = local_58 + 2;
              }
              else {
                local_58 = iVar1;
                local_54 = FUN_143ab96e0(local_28,&local_58,local_44,local_54,0xfd);
                iVar1 = local_58;
              }
            }
            else {
              local_54 = (local_54 & 0xf) << 0xc | (uint)local_4e << 6 | (uint)local_40;
              iVar1 = local_58 + 3;
            }
          }
          local_58 = iVar1;
          if (local_54 < 0x10000) {
            local_18 = 1;
          }
          else {
            local_18 = 2;
          }
          local_3c = local_3c + local_18;
        }
        *(int *)((longlong)param_1 + 0xc) = local_58;
        if ((int)param_1[3] == 0) {
          local_20 = local_3c;
        }
        else {
          local_20 = local_3c + -1;
        }
        *(int *)(param_1 + 2) = local_20;
      }
      else {
        local_58 = *(int *)((longlong)param_1 + 0xc);
        local_3c = (int)param_1[2];
        if ((int)param_1[3] != 0) {
          local_3c = local_3c + 1;
        }
      }
      local_44 = *(int *)((longlong)param_1 + 0x14);
      while (local_58 < local_44) {
        local_54 = (uint)*(byte *)(local_28 + local_58);
        iVar1 = local_58 + 1;
        if (0x7f < local_54) {
          if ((((local_54 < 0xe1) || (0xec < local_54)) ||
              ((local_44 <= local_58 + 2 && (-1 < local_44)))) ||
             ((local_4f = *(char *)(local_28 + iVar1) + 0x80, 0x3f < local_4f ||
              (local_3f = *(char *)(local_28 + (local_58 + 2)) + 0x80, 0x3f < local_3f)))) {
            if ((local_54 < 0xe0) &&
               (((0xc1 < local_54 && (iVar1 != local_44)) &&
                (local_4f = *(char *)(local_28 + iVar1) + 0x80, local_4f < 0x40)))) {
              local_54 = (local_54 & 0x1f) << 6 | (uint)local_4f;
              iVar1 = local_58 + 2;
            }
            else {
              local_58 = iVar1;
              local_54 = FUN_143ab96e0(local_28,&local_58,local_44,local_54,0xfd);
              iVar1 = local_58;
            }
          }
          else {
            local_54 = (local_54 & 0xf) << 0xc | (uint)local_4f << 6 | (uint)local_3f;
            iVar1 = local_58 + 3;
          }
        }
        local_58 = iVar1;
        if (local_54 < 0x10000) {
          local_1c = 1;
        }
        else {
          local_1c = 2;
        }
        local_3c = local_3c + local_1c;
      }
      *(int *)(param_1 + 1) = local_3c;
    }
    uVar2 = (undefined4)param_1[1];
  }
  return uVar2;
}



// FUNCTION 143a92b10 FUN_143a92b10 body=2117 status=ok
// SIG undefined FUN_143a92b10(void)

int FUN_143a92b10(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int local_res10;
  int local_48;
  int local_44;
  byte local_40;
  bool local_3f;
  uint local_3c;
  byte local_38;
  int local_34;
  int local_30;
  longlong local_28;
  int local_1c;
  int local_18;
  
  if (param_3 == 0) {
LAB_143a92b55:
    local_3f = true;
    local_48 = param_2;
  }
  else {
    if (param_3 == 1) {
      local_3f = (int)param_1[2] < 0;
      if (local_3f) {
        local_48 = 0;
      }
      else {
        local_48 = (int)param_1[2] + param_2;
      }
      local_3f = !local_3f;
      goto LAB_143a92c35;
    }
    if (param_3 != 2) {
      if (param_3 == 3) goto LAB_143a92b55;
      if (param_3 != 4) {
        return -1;
      }
    }
    if ((int)param_1[1] < 0) {
      *(undefined4 *)(param_1 + 2) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + 0x14);
      *(undefined4 *)(param_1 + 3) = 0;
      if (-1 < param_2) {
        return -2;
      }
      local_48 = 0;
      local_3f = false;
    }
    else {
      local_48 = (int)param_1[1] + param_2;
      local_3f = true;
    }
  }
LAB_143a92c35:
  if (local_3f == false) {
    if (param_2 == 0) {
      return -2;
    }
    if (*(int *)((longlong)param_1 + 0xc) <= -param_2) {
      *(undefined4 *)(param_1 + 3) = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 2) = 0;
      return 0;
    }
    local_res10 = param_2;
    if (*(int *)((longlong)param_1 + 0x14) - *(int *)((longlong)param_1 + 0xc) <= param_2) {
      *(int *)(param_1 + 2) = (int)param_1[1];
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + 0x14);
      *(undefined4 *)(param_1 + 3) = 0;
      if (-1 < (int)param_1[2]) {
        return (int)param_1[2];
      }
      return -2;
    }
  }
  else {
    if (local_48 < 1) {
      *(undefined4 *)(param_1 + 3) = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 2) = 0;
      return 0;
    }
    if ((-1 < (int)param_1[1]) && ((int)param_1[1] <= local_48)) {
      *(int *)(param_1 + 2) = (int)param_1[1];
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + 0x14);
      *(undefined4 *)(param_1 + 3) = 0;
      return (int)param_1[2];
    }
    if (((int)param_1[2] < 0) || (local_48 < (int)param_1[2] / 2)) {
      *(undefined4 *)(param_1 + 3) = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 2) = 0;
    }
    else if ((-1 < (int)param_1[1]) && ((int)param_1[1] - local_48 < local_48 - (int)param_1[2])) {
      *(int *)(param_1 + 2) = (int)param_1[1];
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + 0x14);
      *(undefined4 *)(param_1 + 3) = 0;
    }
    local_res10 = local_48 - (int)param_1[2];
    if (local_res10 == 0) {
      return (int)param_1[2];
    }
  }
  local_28 = *param_1;
  local_48 = (int)param_1[2];
  local_44 = *(int *)((longlong)param_1 + 0xc);
  local_30 = param_3;
  if (local_res10 < 1) {
    if ((int)param_1[3] != 0) {
      *(undefined4 *)(param_1 + 3) = 0;
      local_44 = local_44 + -4;
      local_48 = local_48 + -1;
      local_res10 = local_res10 + 1;
    }
    while( true ) {
      while( true ) {
        if ((-1 < local_res10) || (local_44 < 1)) goto LAB_143a9330b;
        local_44 = local_44 + -1;
        local_3c = (uint)*(byte *)(local_28 + local_44);
        if (0x7f < local_3c) {
          local_3c = FUN_143ab9a30(local_28,0,&local_44,local_3c,0xfd);
        }
        if (0xffff < (int)local_3c) break;
        local_48 = local_48 + -1;
        local_res10 = local_res10 + 1;
      }
      if (-2 < local_res10) break;
      local_48 = local_48 + -2;
      local_res10 = local_res10 + 2;
    }
    local_44 = local_44 + 4;
    *(uint *)(param_1 + 3) = local_3c;
    local_48 = local_48 + -1;
  }
  else {
    local_34 = *(int *)((longlong)param_1 + 0x14);
    if ((int)param_1[3] != 0) {
      *(undefined4 *)(param_1 + 3) = 0;
      local_48 = local_48 + 1;
      local_res10 = local_res10 + -1;
    }
    while( true ) {
      while( true ) {
        if ((local_res10 < 1) || (local_34 <= local_44)) goto LAB_143a93135;
        local_3c = (uint)*(byte *)(local_28 + local_44);
        iVar1 = local_44 + 1;
        if (0x7f < local_3c) {
          if ((((local_3c < 0xe1) || (0xec < local_3c)) ||
              ((local_34 <= local_44 + 2 && (-1 < local_34)))) ||
             ((local_40 = *(char *)(local_28 + iVar1) + 0x80, 0x3f < local_40 ||
              (local_38 = *(char *)(local_28 + (local_44 + 2)) + 0x80, 0x3f < local_38)))) {
            if ((local_3c < 0xe0) &&
               (((0xc1 < local_3c && (iVar1 != local_34)) &&
                (local_40 = *(char *)(local_28 + iVar1) + 0x80, local_40 < 0x40)))) {
              local_3c = (local_3c & 0x1f) << 6 | (uint)local_40;
              iVar1 = local_44 + 2;
            }
            else {
              local_44 = iVar1;
              local_3c = FUN_143ab96e0(local_28,&local_44,local_34,local_3c,0xfd);
              iVar1 = local_44;
            }
          }
          else {
            local_3c = (local_3c & 0xf) << 0xc | (uint)local_40 << 6 | (uint)local_38;
            iVar1 = local_44 + 3;
          }
        }
        local_44 = iVar1;
        if (0xffff < (int)local_3c) break;
        local_48 = local_48 + 1;
        local_res10 = local_res10 + -1;
      }
      if (local_res10 < 2) break;
      local_48 = local_48 + 2;
      local_res10 = local_res10 + -2;
    }
    *(uint *)(param_1 + 3) = local_3c;
    local_48 = local_48 + 1;
LAB_143a93135:
    if (local_44 == local_34) {
      if (((int)param_1[1] < 0) && (-1 < (int)param_1[2])) {
        if ((int)param_1[3] == 0) {
          local_18 = local_48;
        }
        else {
          local_18 = local_48 + 1;
        }
        *(int *)(param_1 + 1) = local_18;
      }
      else if (((int)param_1[2] < 0) && (-1 < (int)param_1[1])) {
        if ((int)param_1[3] == 0) {
          local_1c = (int)param_1[1];
        }
        else {
          local_1c = (int)param_1[1] + -1;
        }
        *(int *)(param_1 + 2) = local_1c;
      }
    }
  }
LAB_143a9330b:
  *(int *)((longlong)param_1 + 0xc) = local_44;
  if ((int)param_1[2] < 0) {
    if (local_44 < 2) {
      *(int *)(param_1 + 2) = local_44;
      local_48 = local_44;
    }
    else {
      local_48 = -2;
    }
  }
  else {
    *(int *)(param_1 + 2) = local_48;
  }
  return local_48;
}



// FUNCTION 143a93370 FUN_143a93370 body=57 status=ok
// SIG undefined FUN_143a93370(void)

undefined1 FUN_143a93370(longlong param_1)

{
  undefined1 local_18;
  
  if ((*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x14)) || (*(int *)(param_1 + 0x18) != 0)) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143a933b0 FUN_143a933b0 body=39 status=ok
// SIG undefined FUN_143a933b0(void)

bool FUN_143a933b0(longlong param_1)

{
  return 0 < *(int *)(param_1 + 0xc);
}



// FUNCTION 143a933e0 FUN_143a933e0 body=487 status=ok
// SIG undefined FUN_143a933e0(void)

uint FUN_143a933e0(longlong *param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint local_24;
  int local_20 [2];
  longlong local_18;
  
  if ((int)param_1[3] == 0) {
    if (*(int *)((longlong)param_1 + 0xc) < *(int *)((longlong)param_1 + 0x14)) {
      local_18 = *param_1;
      iVar1 = *(int *)((longlong)param_1 + 0xc);
      local_24 = (uint)*(byte *)(local_18 + iVar1);
      local_20[0] = iVar1 + 1;
      if (0x7f < local_24) {
        if ((((local_24 < 0xe1) || (0xec < local_24)) ||
            ((*(int *)((longlong)param_1 + 0x14) <= iVar1 + 2 &&
             (-1 < *(int *)((longlong)param_1 + 0x14))))) ||
           ((bVar2 = *(char *)(local_18 + local_20[0]) + 0x80, 0x3f < bVar2 ||
            (bVar3 = *(char *)(local_18 + (iVar1 + 2)) + 0x80, 0x3f < bVar3)))) {
          if ((local_24 < 0xe0) &&
             (((0xc1 < local_24 && (local_20[0] != *(int *)((longlong)param_1 + 0x14))) &&
              (bVar2 = *(char *)(local_18 + local_20[0]) + 0x80, bVar2 < 0x40)))) {
            local_24 = (local_24 & 0x1f) << 6 | (uint)bVar2;
          }
          else {
            local_24 = FUN_143ab96e0(local_18,local_20,*(undefined4 *)((longlong)param_1 + 0x14),
                                     local_24,0xfd);
          }
        }
        else {
          local_24 = (local_24 & 0xf) << 0xc | (uint)bVar2 << 6 | (uint)bVar3;
        }
      }
      if (0xffff < (int)local_24) {
        local_24 = ((int)local_24 >> 10) + 0xd7c0U & 0xffff;
      }
    }
    else {
      local_24 = 0xffffffff;
    }
  }
  else {
    local_24 = *(uint *)(param_1 + 3) & 0x3ff | 0xdc00;
  }
  return local_24;
}



// FUNCTION 143a935d0 FUN_143a935d0 body=791 status=ok
// SIG undefined FUN_143a935d0(void)

uint FUN_143a935d0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  uint local_20;
  int local_18;
  int local_14;
  
  if ((int)param_1[3] == 0) {
    if (*(int *)((longlong)param_1 + 0xc) < *(int *)((longlong)param_1 + 0x14)) {
      lVar2 = *param_1;
      local_20 = (uint)*(byte *)(lVar2 + *(int *)((longlong)param_1 + 0xc));
      *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
      if (0x7f < local_20) {
        if ((((local_20 < 0xe1) || (0xec < local_20)) ||
            ((*(int *)((longlong)param_1 + 0x14) <= *(int *)((longlong)param_1 + 0xc) + 1 &&
             (-1 < *(int *)((longlong)param_1 + 0x14))))) ||
           ((bVar3 = *(char *)(lVar2 + *(int *)((longlong)param_1 + 0xc)) + 0x80, 0x3f < bVar3 ||
            (bVar4 = *(char *)(lVar2 + (*(int *)((longlong)param_1 + 0xc) + 1)) + 0x80, 0x3f < bVar4
            )))) {
          if ((local_20 < 0xe0) &&
             (((0xc1 < local_20 &&
               (*(int *)((longlong)param_1 + 0xc) != *(int *)((longlong)param_1 + 0x14))) &&
              (bVar3 = *(char *)(lVar2 + *(int *)((longlong)param_1 + 0xc)) + 0x80, bVar3 < 0x40))))
          {
            local_20 = (local_20 & 0x1f) << 6 | (uint)bVar3;
            *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
          }
          else {
            local_20 = FUN_143ab96e0(lVar2,(longlong)param_1 + 0xc,
                                     *(undefined4 *)((longlong)param_1 + 0x14),local_20,0xfd);
          }
        }
        else {
          local_20 = (local_20 & 0xf) << 0xc | (uint)bVar3 << 6 | (uint)bVar4;
          *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 2;
        }
      }
      iVar1 = (int)param_1[2];
      if (iVar1 < 0) {
        if ((*(int *)((longlong)param_1 + 0xc) == *(int *)((longlong)param_1 + 0x14)) &&
           (-1 < (int)param_1[1])) {
          if ((int)local_20 < 0x10000) {
            local_14 = (int)param_1[1];
          }
          else {
            local_14 = (int)param_1[1] + -1;
          }
          *(int *)(param_1 + 2) = local_14;
        }
      }
      else {
        local_18 = iVar1 + 1;
        *(int *)(param_1 + 2) = local_18;
        if (((int)param_1[1] < 0) &&
           (*(int *)((longlong)param_1 + 0xc) == *(int *)((longlong)param_1 + 0x14))) {
          if (0xffff < (int)local_20) {
            local_18 = iVar1 + 2;
          }
          *(int *)(param_1 + 1) = local_18;
        }
      }
      if (0xffff < (int)local_20) {
        *(uint *)(param_1 + 3) = local_20;
        local_20 = ((int)local_20 >> 10) + 0xd7c0U & 0xffff;
      }
    }
    else {
      local_20 = 0xffffffff;
    }
  }
  else {
    lVar2 = param_1[3];
    *(undefined4 *)(param_1 + 3) = 0;
    if (-1 < (int)param_1[2]) {
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    }
    local_20 = (uint)((ushort)(int)lVar2 & 0x3ff | 0xdc00);
  }
  return local_20;
}



// FUNCTION 143a938f0 FUN_143a938f0 body=407 status=ok
// SIG undefined FUN_143a938f0(void)

uint FUN_143a938f0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  uint local_24;
  int local_18;
  
  if ((int)param_1[3] == 0) {
    if (*(int *)((longlong)param_1 + 0xc) < 1) {
      local_24 = 0xffffffff;
    }
    else {
      iVar2 = *(int *)((longlong)param_1 + 0xc) + -1;
      *(int *)((longlong)param_1 + 0xc) = iVar2;
      local_24 = (uint)*(byte *)(*param_1 + (longlong)iVar2);
      if (0x7f < local_24) {
        local_24 = FUN_143ab9a30(*param_1,0,(longlong)param_1 + 0xc,local_24,0xfd);
      }
      if ((int)param_1[2] < 1) {
        if (*(int *)((longlong)param_1 + 0xc) < 2) {
          if ((int)local_24 < 0x10000) {
            local_18 = *(int *)((longlong)param_1 + 0xc);
          }
          else {
            local_18 = *(int *)((longlong)param_1 + 0xc) + 1;
          }
          *(int *)(param_1 + 2) = local_18;
        }
      }
      else {
        *(int *)(param_1 + 2) = (int)param_1[2] + -1;
      }
      if (0xffff < (int)local_24) {
        *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 4;
        *(uint *)(param_1 + 3) = local_24;
        local_24 = local_24 & 0x3ff | 0xdc00;
      }
    }
  }
  else {
    lVar1 = param_1[3];
    *(undefined4 *)(param_1 + 3) = 0;
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + -4;
    if (0 < (int)param_1[2]) {
      *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    }
    local_24 = (uint)(ushort)((short)((int)lVar1 >> 10) + 0xd7c0);
  }
  return local_24;
}



// FUNCTION 143a93a90 FUN_143a93a90 body=50 status=ok
// SIG undefined FUN_143a93a90(void)

uint FUN_143a93a90(longlong param_1)

{
  undefined4 local_18;
  
  local_18 = *(int *)(param_1 + 0xc) << 1;
  if (*(int *)(param_1 + 0x18) != 0) {
    local_18 = local_18 | 1;
  }
  return local_18;
}



// FUNCTION 143a93ad0 FUN_143a93ad0 body=409 status=ok
// SIG undefined FUN_143a93ad0(void)

void FUN_143a93ad0(longlong *param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  int local_28;
  uint local_24;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  
  if ((param_3 != (undefined4 *)0x0) && (cVar1 = FUN_143a8b0e0(*param_3), cVar1 == '\0')) {
    if (param_1 == (longlong *)0x0) {
      *param_3 = 1;
    }
    else {
      uVar2 = FUN_143a93a90(param_1);
      if (param_2 != uVar2) {
        uVar2 = param_2 >> 1;
        if ((param_2 & 1) == 0) {
          local_20 = 0;
          local_18 = 0;
        }
        else {
          local_1c = (uint)(uVar2 < 4);
          local_18 = local_1c;
        }
        if ((local_18 == 0) && ((int)uVar2 <= *(int *)((longlong)param_1 + 0x14))) {
          *(uint *)((longlong)param_1 + 0xc) = uVar2;
          if (uVar2 < 2) {
            *(uint *)(param_1 + 2) = uVar2;
          }
          else {
            *(undefined4 *)(param_1 + 2) = 0xffffffff;
          }
          if ((param_2 & 1) == 0) {
            *(undefined4 *)(param_1 + 3) = 0;
          }
          else {
            local_28 = uVar2 - 1;
            local_24 = (uint)*(byte *)(*param_1 + (longlong)local_28);
            if (0x7f < local_24) {
              local_24 = FUN_143ab9a30(*param_1,0,&local_28,local_24,0xfd);
            }
            if ((int)local_24 < 0x10000) {
              *param_3 = 8;
            }
            else {
              *(uint *)(param_1 + 3) = local_24;
            }
          }
        }
        else {
          *param_3 = 8;
        }
      }
    }
  }
  return;
}



// FUNCTION 143a93c70 FUN_143a93c70 body=12 status=ok
// SIG undefined FUN_143a93c70(void)

undefined8 FUN_143a93c70(void)

{
  return 0;
}



// FUNCTION 143a93ca0 FUN_143a93ca0 body=11 status=ok
// SIG undefined FUN_143a93ca0(void)

undefined8 FUN_143a93ca0(void)

{
  return 0xffffffff;
}



// FUNCTION 143a93cd0 FUN_143a93cd0 body=106 status=ok
// SIG undefined FUN_143a93cd0(void)

undefined4 FUN_143a93cd0(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
  }
  else if (param_2 == 1) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  else if (param_2 == 2) {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
  }
  else if (param_2 == 3) {
    uVar1 = 0;
  }
  else if (param_2 == 4) {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 143a93d40 FUN_143a93d40 body=216 status=ok
// SIG undefined FUN_143a93d40(void)

int FUN_143a93d40(longlong param_1,int param_2,int param_3)

{
  int local_18;
  
  if (param_3 == 0) {
    local_18 = *(int *)(param_1 + 0xc) + param_2;
  }
  else if (param_3 == 1) {
    local_18 = *(int *)(param_1 + 0x10) + param_2;
  }
  else if (param_3 == 2) {
    local_18 = *(int *)(param_1 + 0x14) + param_2;
  }
  else {
    local_18 = param_2;
    if (param_3 != 3) {
      if (param_3 != 4) {
        return -1;
      }
      local_18 = *(int *)(param_1 + 8) + param_2;
    }
  }
  if (local_18 < *(int *)(param_1 + 0xc)) {
    local_18 = *(int *)(param_1 + 0xc);
  }
  else if (*(int *)(param_1 + 0x14) < local_18) {
    local_18 = *(int *)(param_1 + 0x14);
  }
  *(int *)(param_1 + 0x10) = local_18;
  return local_18;
}



// FUNCTION 143a93e20 FUN_143a93e20 body=38 status=ok
// SIG undefined FUN_143a93e20(void)

void FUN_143a93e20(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x40))(param_1,param_2);
  return;
}



// FUNCTION 143a93e50 FUN_143a93e50 body=14 status=ok
// SIG undefined FUN_143a93e50(void)

undefined4 FUN_143a93e50(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// FUNCTION 143a93e60 FUN_143a93e60 body=14 status=ok
// SIG undefined FUN_143a93e60(void)

undefined4 FUN_143a93e60(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// FUNCTION 143a93e70 FUN_143a93e70 body=30 status=ok
// SIG undefined FUN_143a93e70(void)

void FUN_143a93e70(longlong *param_1)

{
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}



// FUNCTION 143a93e90 FUN_143a93e90 body=139 status=ok
// SIG undefined FUN_143a93e90(void)

uint FUN_143a93e90(longlong param_1)

{
  uint uVar1;
  undefined4 local_18;
  
  local_18 = (**(code **)(param_1 + 0x48))(param_1);
  if ((local_18 & 0xfffffc00) == 0xd800) {
    uVar1 = (**(code **)(param_1 + 0x48))(param_1);
    if ((uVar1 & 0xfffffc00) == 0xdc00) {
      local_18 = local_18 * 0x400 + -0x35fdc00 + uVar1;
    }
    else if (-1 < (int)uVar1) {
      (**(code **)(param_1 + 0x28))(param_1,0xffffffff,1);
    }
  }
  return local_18;
}



// FUNCTION 143a93f20 FUN_143a93f20 body=139 status=ok
// SIG undefined FUN_143a93f20(void)

uint FUN_143a93f20(longlong param_1)

{
  uint uVar1;
  undefined4 local_18;
  
  local_18 = (**(code **)(param_1 + 0x50))(param_1);
  if ((local_18 & 0xfffffc00) == 0xdc00) {
    uVar1 = (**(code **)(param_1 + 0x50))(param_1);
    if ((uVar1 & 0xfffffc00) == 0xd800) {
      local_18 = uVar1 * 0x400 + -0x35fdc00 + local_18;
    }
    else if (-1 < (int)uVar1) {
      (**(code **)(param_1 + 0x28))(param_1,1,1);
    }
  }
  return local_18;
}



// FUNCTION 143a93fb0 FUN_143a93fb0 body=90 status=ok
// SIG undefined FUN_143a93fb0(void)

void FUN_143a93fb0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    if (param_2 == 0) {
      puVar2 = &DAT_145ccbf10;
      for (lVar1 = 0x70; lVar1 != 0; lVar1 = lVar1 + -1) {
        *(undefined1 *)param_1 = *puVar2;
        puVar2 = puVar2 + 1;
        param_1 = (longlong *)((longlong)param_1 + 1);
      }
    }
    else {
      puVar2 = &DAT_145ccbdc0;
      plVar3 = param_1;
      for (lVar1 = 0x70; lVar1 != 0; lVar1 = lVar1 + -1) {
        *(undefined1 *)plVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        plVar3 = (longlong *)((longlong)plVar3 + 1);
      }
      *param_1 = param_2;
    }
  }
  return;
}



// FUNCTION 143a94010 FUN_143a94010 body=202 status=ok
// SIG undefined FUN_143a94010(void)

void FUN_143a94010(undefined8 *param_1,char *param_2,int param_3)

{
  size_t sVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined4 local_28;
  
  if (param_1 != (undefined8 *)0x0) {
    if ((param_2 == (char *)0x0) || (param_3 < -1)) {
      puVar3 = &DAT_145ccbf10;
      for (lVar2 = 0x70; lVar2 != 0; lVar2 = lVar2 + -1) {
        *(undefined1 *)param_1 = *puVar3;
        puVar3 = puVar3 + 1;
        param_1 = (undefined8 *)((longlong)param_1 + 1);
      }
    }
    else {
      puVar3 = &DAT_145ccbea0;
      puVar4 = param_1;
      for (lVar2 = 0x70; lVar2 != 0; lVar2 = lVar2 + -1) {
        *(undefined1 *)puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = (undefined8 *)((longlong)puVar4 + 1);
      }
      *param_1 = param_2;
      if (param_3 < 0) {
        sVar1 = _guard_xfg_dispatch_icall_nop(param_2);
        *(int *)((longlong)param_1 + 0x14) = (int)sVar1;
      }
      else {
        *(int *)((longlong)param_1 + 0x14) = param_3;
      }
      if (*(int *)((longlong)param_1 + 0x14) < 2) {
        local_28 = *(undefined4 *)((longlong)param_1 + 0x14);
      }
      else {
        local_28 = 0xffffffff;
      }
      *(undefined4 *)(param_1 + 1) = local_28;
    }
  }
  return;
}



// FUNCTION 143a940e0 FUN_143a940e0 body=70 status=ok
// SIG undefined FUN_143a940e0(void)

undefined2 FUN_143a940e0(longlong *param_1,int param_2)

{
  return CONCAT11(*(undefined1 *)(*param_1 + (longlong)(param_2 * 2)),
                  *(undefined1 *)(*param_1 + (longlong)(param_2 * 2 + 1)));
}



// FUNCTION 143a94130 FUN_143a94130 body=109 status=ok
// SIG undefined FUN_143a94130(void)

void FUN_143a94130(longlong *param_1,char *param_2)

{
  longlong lVar1;
  
  if (*param_1 == 0) {
    lVar1 = FUN_143a9c510();
    *param_1 = lVar1;
  }
  if ((param_2 == (char *)0x0) || (*param_2 != '\0')) {
    FUN_143aba470(param_1,param_2);
  }
  else {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 143a941a0 FUN_143a941a0 body=150 status=ok
// SIG undefined FUN_143a941a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a941a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 local_37 [31];
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  puVar3 = local_37;
  for (lVar2 = 0x1f; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_18 = 0;
  local_14 = 0;
  uVar1 = FUN_143a8c200(param_2);
  FUN_143a94130(&local_48,uVar1);
  FUN_143ab9df0(param_1,&local_48,FUN_143abb7c0);
  return;
}



// FUNCTION 143a94240 FUN_143a94240 body=32 status=ok
// SIG undefined FUN_143a94240(void)

void FUN_143a94240(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143a8b650();
  FUN_143a941a0(param_1,uVar1);
  return;
}



// FUNCTION 143a94260 FUN_143a94260 body=150 status=ok
// SIG undefined FUN_143a94260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a94260(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 local_37 [31];
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  puVar3 = local_37;
  for (lVar2 = 0x1f; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_18 = 0;
  local_14 = 0;
  uVar1 = FUN_143a8c200(param_2);
  FUN_143a94130(&local_48,uVar1);
  FUN_143ab9df0(param_1,&local_48,FUN_143abbee0);
  return;
}



// FUNCTION 143a94300 FUN_143a94300 body=32 status=ok
// SIG undefined FUN_143a94300(void)

void FUN_143a94300(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143a8b650();
  FUN_143a94260(param_1,uVar1);
  return;
}



// FUNCTION 143a94320 FUN_143a94320 body=46 status=ok
// SIG undefined FUN_143a94320(void)

undefined8 * FUN_143a94320(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  return param_1;
}



// FUNCTION 143a94350 FUN_143a94350 body=117 status=ok
// SIG undefined FUN_143a94350(void)

undefined8 * FUN_143a94350(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_143a8ab90(param_1);
  *param_1 = icu_53::UnicodeString::vftable;
  *(undefined1 *)((longlong)param_1 + 0x26) = 0;
  *(undefined1 *)((longlong)param_1 + 0x27) = 2;
  if (param_2 != (char *)0x0) {
    sVar1 = _guard_xfg_dispatch_icall_nop(param_2);
    FUN_143a943d0(param_1,param_2,sVar1 & 0xffffffff,0,uVar2);
  }
  return param_1;
}



// FUNCTION 143a943d0 FUN_143a943d0 body=880 status=ok
// SIG undefined FUN_143a943d0(void)

void FUN_143a943d0(undefined8 param_1,char *param_2,int param_3,char *param_4)

{
  char cVar1;
  size_t sVar2;
  char *pcVar3;
  undefined8 uVar4;
  int local_res18;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined8 local_20;
  undefined1 local_18 [24];
  
  if (((param_2 != (char *)0x0) && (param_3 != 0)) && (-2 < param_3)) {
    local_res18 = param_3;
    if (param_3 == -1) {
      sVar2 = _guard_xfg_dispatch_icall_nop(param_2);
      local_res18 = (int)sVar2;
    }
    local_40 = 0;
    if (param_4 == (char *)0x0) {
      pcVar3 = (char *)FUN_143abd360();
      if (*pcVar3 == 'U') {
        if ((pcVar3[1] == 'T') && (pcVar3[2] == 'F')) {
          local_28 = 1;
        }
        else {
          local_28 = 0;
        }
        local_34 = local_28;
      }
      else {
        if (((*pcVar3 == 'u') && (pcVar3[1] == 't')) && (pcVar3[2] == 'f')) {
          local_30 = 1;
        }
        else {
          local_30 = 0;
        }
        local_34 = local_30;
      }
      if (local_34 != 0) {
        if (pcVar3[3] == '-') {
          if ((pcVar3[4] == '8') && (pcVar3[5] == '\0')) {
            local_3c = 1;
          }
          else {
            local_3c = 0;
          }
          local_38 = local_3c;
        }
        else {
          if ((pcVar3[3] == '8') && (pcVar3[4] == '\0')) {
            local_2c = 1;
          }
          else {
            local_2c = 0;
          }
          local_38 = local_2c;
        }
        if (local_38 != 0) {
          uVar4 = FUN_143a94320(local_18,param_2,local_res18);
          FUN_143a90f00(param_1,uVar4);
          return;
        }
      }
      local_20 = FUN_143abdbf0(&local_40);
    }
    else {
      if (*param_4 == '\0') {
        cVar1 = FUN_143a8e570(param_1,local_res18,local_res18,0,0,0);
        if (cVar1 != '\0') {
          uVar4 = FUN_143a8fd50(param_1);
          FUN_143ab5820(param_2,uVar4,local_res18);
          FUN_143a90c60(param_1,local_res18);
          return;
        }
        FUN_143a90e90(param_1);
        return;
      }
      local_20 = FUN_143ab0f00(param_4,&local_40);
    }
    cVar1 = FUN_143a8b0e0(local_40);
    if (cVar1 == '\0') {
      FUN_143a94750(param_1,param_2,local_res18,local_20,&local_40);
      cVar1 = FUN_143a8b0e0(local_40);
      if (cVar1 != '\0') {
        FUN_143a90e90(param_1);
      }
      if (param_4 == (char *)0x0) {
        FUN_143abdc80(local_20);
      }
      else {
        FUN_143ab09a0(local_20);
      }
    }
    else {
      FUN_143a90e90(param_1);
    }
  }
  return;
}



// FUNCTION 143a94750 FUN_143a94750 body=458 status=ok
// SIG undefined FUN_143a94750(void)

void FUN_143a94750(undefined8 param_1,longlong param_2,int param_3,undefined8 param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong in_stack_ffffffffffffffb0;
  undefined1 local_38;
  int local_34;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    local_18 = param_2 + param_3;
    if (param_3 < 0x10) {
      local_34 = 0xf;
    }
    else {
      local_34 = param_3 + (param_3 >> 2);
    }
    local_38 = 0;
    local_28 = param_2;
    while (cVar1 = FUN_143a8e570(param_1,local_34,local_34,local_38,0,
                                 in_stack_ffffffffffffffb0 & 0xffffffffffffff00), cVar1 != '\0') {
      lVar3 = FUN_143a8fd50(param_1);
      iVar2 = FUN_143a904f0(param_1);
      local_20 = lVar3 + (longlong)iVar2 * 2;
      iVar2 = FUN_143a8fe60(param_1);
      in_stack_ffffffffffffffb0 = 0;
      FUN_143ab1780(param_4,&local_20,lVar3 + (longlong)iVar2 * 2,&local_28,local_18,0,1,param_5);
      FUN_143a90c60(param_1,local_20 - lVar3 >> 1 & 0xffffffff);
      if (*param_5 != 0xf) {
        return;
      }
      *param_5 = 0;
      local_38 = 1;
      local_34 = FUN_143a904f0(param_1);
      local_34 = local_34 + ((int)local_18 - (int)local_28) * 2;
    }
    FUN_143a90e90(param_1);
  }
  return;
}



// FUNCTION 143a94920 FUN_143a94920 body=55 status=ok
// SIG undefined FUN_143a94920(void)

void FUN_143a94920(longlong param_1)

{
  FUN_143aa79f0(**(undefined8 **)(param_1 + 8));
  FUN_143aa79f0(*(undefined8 *)(param_1 + 8));
  FUN_143aa79f0(param_1);
  return;
}



// FUNCTION 143a94960 FUN_143a94960 body=97 status=ok
// SIG undefined FUN_143a94960(void)

int FUN_143a94960(longlong param_1)

{
  size_t sVar1;
  int local_18;
  char *local_10;
  
  local_10 = (char *)**(undefined8 **)(param_1 + 8);
  local_18 = 0;
  for (; *local_10 != '\0'; local_10 = local_10 + sVar1 + 1) {
    local_18 = local_18 + 1;
    sVar1 = _guard_xfg_dispatch_icall_nop(local_10);
  }
  return local_18;
}



// FUNCTION 143a949d0 FUN_143a949d0 body=157 status=ok
// SIG undefined FUN_143a949d0(void)

char * FUN_143a949d0(longlong param_1,int *param_2)

{
  size_t sVar1;
  undefined4 local_18;
  undefined8 local_10;
  
  local_10 = *(char **)(*(longlong *)(param_1 + 8) + 8);
  local_18 = 0;
  if (*local_10 == '\0') {
    local_10 = (char *)0x0;
  }
  else {
    sVar1 = _guard_xfg_dispatch_icall_nop(*(char **)(*(longlong *)(param_1 + 8) + 8));
    local_18 = (int)sVar1;
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) =
         (longlong)(local_18 + 1) + *(longlong *)(*(longlong *)(param_1 + 8) + 8);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = local_18;
  }
  return local_10;
}



// FUNCTION 143a94a70 FUN_143a94a70 body=36 status=ok
// SIG undefined FUN_143a94a70(void)

void FUN_143a94a70(longlong param_1)

{
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = **(undefined8 **)(param_1 + 8);
  return;
}



// FUNCTION 143a94aa0 FUN_143a94aa0 body=3432 status=ok
// SIG undefined FUN_143a94aa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a94aa0(char *param_1,char *param_2,int param_3,uint param_4,undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  size_t sVar5;
  undefined8 uVar6;
  char *local_res8;
  undefined1 auStack_298 [32];
  undefined4 *local_278;
  undefined4 local_270;
  undefined8 local_268;
  undefined1 local_260;
  undefined *local_258;
  undefined *local_250;
  undefined4 *local_248;
  int local_238;
  int local_234;
  char *local_230;
  int local_228;
  char *local_220;
  int local_218;
  char local_214;
  undefined1 local_213;
  char local_212;
  undefined1 local_211;
  int local_210;
  int local_20c;
  int local_208;
  int local_204;
  int local_200;
  undefined *local_1f8;
  char *local_1f0;
  char *local_1e8;
  char local_1e0;
  int local_1dc;
  int local_1d8;
  undefined *local_1d0;
  undefined4 local_1c8;
  char *local_1c0;
  char *local_1b8;
  char *local_1b0;
  char *local_1a8;
  char *local_1a0;
  char *local_198;
  char *local_190;
  char *local_188;
  char *local_180;
  char *local_178;
  char *local_170;
  char *local_168;
  char *local_160;
  char local_158 [160];
  char local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  local_218 = 0;
  local_20c = 0;
  local_210 = 0;
  local_1e8 = (char *)0x0;
  local_1c0 = (char *)0x0;
  local_1f8 = (undefined *)0x0;
  local_1d0 = (undefined *)0x0;
  local_1f0 = (char *)0x0;
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    if (((param_1 == (char *)0x0) || (pcVar4 = strstr(param_1,"@"), pcVar4 != (char *)0x0)) ||
       (iVar2 = FUN_143a965c0(param_1), iVar2 != 1)) {
      local_res8 = param_1;
      if (param_1 == (char *)0x0) {
        local_res8 = (char *)FUN_143a96a30();
      }
      local_230 = local_res8;
    }
    else {
      local_278 = param_5;
      iVar2 = FUN_143abff90(param_1,local_b8,0x9d,0);
      local_230 = param_1;
      if ((0 < iVar2) && (cVar1 = FUN_143a8b0e0(*param_5), cVar1 == '\0')) {
        local_230 = local_b8;
      }
    }
    local_178 = local_230;
    if ((param_2 == (char *)0x0) || (local_234 = param_3, local_220 = param_2, param_3 < 0x9d)) {
      local_220 = local_158;
      local_234 = 0x9d;
    }
    local_238 = FUN_143a98520(local_230,local_220,local_234,&local_230);
    if ((local_238 == 9) && (iVar2 = strncmp(local_178,"i-default",9), iVar2 == 0)) {
      local_180 = (char *)FUN_143a96a30();
      sVar5 = _guard_xfg_dispatch_icall_nop(local_180);
      local_238 = (int)sVar5;
      if (local_220 != (char *)0x0) {
        strncpy(local_220,local_180,(longlong)local_238);
      }
    }
    else if ((*local_230 == '_') || (*local_230 == '-')) {
      local_218 = local_218 + 1;
      if (local_238 < local_234) {
        local_220[local_238] = '_';
      }
      local_238 = local_238 + 1;
      if (local_238 < local_234) {
        local_1a8 = local_220 + local_238;
      }
      else {
        local_1a8 = (char *)0x0;
      }
      local_20c = FUN_143a98750(local_230 + 1,local_1a8,local_234 - local_238,&local_168);
      if (0 < local_20c) {
        local_230 = local_168;
        local_218 = local_218 + 1;
        local_238 = local_238 + local_20c;
        if ((*local_168 == '_') || (*local_168 == '-')) {
          if (local_238 < local_234) {
            local_220[local_238] = '_';
          }
          local_238 = local_238 + 1;
        }
      }
      if ((*local_230 == '_') || (*local_230 == '-')) {
        if (local_238 < local_234) {
          local_1b8 = local_220 + local_238;
        }
        else {
          local_1b8 = (char *)0x0;
        }
        local_208 = FUN_143a98360(local_230 + 1,local_1b8,local_234 - local_238,&local_160);
        if (0 < local_208) {
          local_230 = local_160;
          local_238 = local_238 + local_208;
        }
        if ((*local_230 == '_') || (*local_230 == '-')) {
          if ((-1 < local_208) && ((local_230[1] != '_' && (local_230[1] != '-')))) {
            local_218 = local_218 + 1;
            if (local_238 < local_234) {
              local_220[local_238] = '_';
            }
            local_238 = local_238 + 1;
          }
          if (local_238 < local_234) {
            local_198 = local_220 + local_238;
          }
          else {
            local_198 = (char *)0x0;
          }
          local_210 = FUN_143a962b0(local_230 + 1,*local_230,local_198,local_234 - local_238);
          if (0 < local_210) {
            if (local_238 < local_234) {
              local_188 = local_220 + local_238;
            }
            else {
              local_188 = (char *)0x0;
            }
            local_1f0 = local_188;
            local_238 = local_238 + local_210;
            local_230 = local_230 + (local_210 + 1);
          }
        }
      }
    }
    if (((param_4 & 1) == 0) && (*local_230 == '.')) {
      local_212 = '\0';
      do {
        local_214 = *local_230;
        if ((local_214 == '\0') || (local_214 == '@')) {
          local_212 = '\x01';
        }
        else {
          if (local_238 < local_234) {
            local_220[local_238] = local_214;
          }
          local_238 = local_238 + 1;
          local_230 = local_230 + 1;
        }
        local_1e0 = local_214;
      } while (local_212 == '\0');
    }
    local_230 = (char *)FUN_143a96710(local_230);
    if (local_230 != (char *)0x0) {
      local_1e8 = strchr(local_230,0x3d);
      local_1c0 = strchr(local_230,0x3b);
    }
    if ((((param_4 & 1) == 0) && (local_230 != (char *)0x0)) && (local_1e8 == (char *)0x0)) {
      for (; *local_230 != '\0'; local_230 = local_230 + 1) {
        if (local_238 < local_234) {
          local_220[local_238] = *local_230;
        }
        local_238 = local_238 + 1;
      }
      local_211 = 0;
    }
    if ((param_4 & 1) != 0) {
      if ((local_230 != (char *)0x0) && (local_1e8 == (char *)0x0)) {
        if ((local_218 < 2) || ((local_218 < 3 && (0 < local_20c)))) {
          do {
            if (local_238 < local_234) {
              local_220[local_238] = '_';
            }
            local_238 = local_238 + 1;
            local_218 = local_218 + 1;
          } while (local_218 < 2);
        }
        local_213 = 0 < local_210;
        local_170 = local_230 + 1;
        local_278 = (undefined4 *)CONCAT71(local_278._1_7_,local_213);
        local_200 = FUN_143a962f0(local_170,CONCAT71((int7)((ulonglong)local_170 >> 8),0x40),
                                  local_220 + local_238,local_234 - local_238);
        if (0 < local_200) {
          if (local_1f0 == (char *)0x0) {
            local_1f0 = local_220 + local_238;
          }
          local_238 = local_238 + local_200;
          local_210 = local_210 + local_200;
        }
      }
      if (local_1f0 != (char *)0x0) {
        for (local_228 = 0; local_228 < 3; local_228 = local_228 + 1) {
          local_1a0 = (&PTR_DAT_145cce210)[(longlong)local_228 * 3];
          sVar5 = _guard_xfg_dispatch_icall_nop(local_1a0);
          local_1c8 = (undefined4)sVar5;
          uVar3 = FUN_143ac1240(local_210,local_234 - local_238);
          local_1d8 = FUN_143a958c0(local_1f0,uVar3,local_1a0,local_1c8);
          local_238 = local_238 - local_1d8;
          if (0 < local_1d8) {
            if ((0 < local_238) && (local_220[local_238 + -1] == '_')) {
              local_238 = local_238 + -1;
            }
            local_1f8 = (&PTR_s_currency_145cce218)[(longlong)local_228 * 3];
            local_1d0 = (&PTR_DAT_145cce220)[(longlong)local_228 * 3];
            break;
          }
        }
        if (((0 < local_238) && (local_238 <= local_234)) && (local_220[local_238 + -1] == '_')) {
          local_238 = local_238 + -1;
        }
      }
      for (local_228 = 0; local_228 < 0x2e; local_228 = local_228 + 1) {
        local_190 = (&PTR_DAT_145ccdc50)[(longlong)local_228 * 4];
        sVar5 = _guard_xfg_dispatch_icall_nop(local_190);
        local_204 = (int)sVar5;
        if ((local_238 == local_204) &&
           (iVar2 = strncmp(local_220,local_190,(longlong)local_204), iVar2 == 0)) {
          if (((local_204 != 0) || (local_230 == (char *)0x0)) &&
             (local_238 = FUN_143a95810(local_220,local_234,
                                        (&PTR_s_en_US_POSIX_145ccdc58)[(longlong)local_228 * 4]),
             *(longlong *)(&DAT_145ccdc60 + (longlong)local_228 * 0x20) != 0)) {
            local_1f8 = *(undefined **)(&DAT_145ccdc60 + (longlong)local_228 * 0x20);
            local_1d0 = *(undefined **)(&DAT_145ccdc68 + (longlong)local_228 * 0x20);
          }
          break;
        }
      }
    }
    if ((param_4 & 2) == 0) {
      if (((local_230 == (char *)0x0) || (local_1e8 == (char *)0x0)) ||
         ((local_1c0 != (char *)0x0 && (local_1c0 <= local_1e8)))) {
        if (local_1f8 != (undefined *)0x0) {
          iVar2 = FUN_143a95810(local_220 + local_238,local_234 - local_238,&DAT_145b9c370);
          local_238 = local_238 + iVar2;
          iVar2 = FUN_143a95810(local_220 + local_238,local_234 - local_238,local_1f8);
          local_238 = local_238 + iVar2;
          iVar2 = FUN_143a95810(local_220 + local_238,local_234 - local_238,&DAT_145b13200);
          local_238 = local_238 + iVar2;
          iVar2 = FUN_143a95810(local_220 + local_238,local_234 - local_238,local_1d0);
          local_238 = local_238 + iVar2;
        }
      }
      else {
        if (local_238 < local_234) {
          local_220[local_238] = '@';
        }
        local_238 = local_238 + 1;
        local_218 = local_218 + 1;
        if (local_238 < local_234) {
          local_1b0 = local_220 + local_238;
        }
        else {
          local_1b0 = (char *)0x0;
        }
        local_248 = param_5;
        local_250 = local_1d0;
        local_258 = local_1f8;
        local_260 = 1;
        local_268 = 0;
        local_270 = 0;
        local_278 = (undefined4 *)0x0;
        iVar2 = FUN_143a95ad0(local_230 + 1,0x40,local_1b0,local_234 - local_238);
        local_238 = local_238 + iVar2;
      }
    }
    cVar1 = FUN_143a8b110(*param_5);
    if (((cVar1 != '\0') && (param_2 != (char *)0x0)) && (local_220 == local_158)) {
      local_1dc = param_3;
      if (local_238 <= param_3) {
        local_1dc = local_238;
      }
      strncpy(param_2,local_158,(longlong)local_1dc);
    }
    uVar6 = FUN_143ab4930(param_2,param_3,local_238,param_5);
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 143a95810 FUN_143a95810 body=176 status=ok
// SIG undefined FUN_143a95810(void)

char * FUN_143a95810(char *param_1,int param_2,char *param_3)

{
  char cVar1;
  size_t sVar2;
  char *local_res8;
  int local_res10;
  char *local_res18;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  while( true ) {
    cVar1 = *local_res18;
    if (cVar1 == '\0') {
      return local_res18 + -(longlong)param_3;
    }
    if (local_res10 < 1) break;
    local_res18 = local_res18 + 1;
    *local_res8 = cVar1;
    local_res8 = local_res8 + 1;
    local_res10 = local_res10 + -1;
  }
  sVar2 = _guard_xfg_dispatch_icall_nop(local_res18);
  return local_res18 + (sVar2 - (longlong)param_3);
}



// FUNCTION 143a958c0 FUN_143a958c0 body=365 status=ok
// SIG undefined FUN_143a958c0(void)

int FUN_143a958c0(char *param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char *local_res8;
  int local_res10;
  int local_24;
  uint local_1c;
  
  local_24 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  while( true ) {
    while( true ) {
      bVar3 = false;
      if (local_res10 < param_4) {
        return local_24;
      }
      iVar1 = strncmp(local_res8,param_3,(longlong)param_4);
      if ((iVar1 != 0) || ((local_res10 != param_4 && (bVar3 = local_res8[param_4] == '_', !bVar3)))
         ) break;
      local_1c = (uint)bVar3;
      iVar1 = param_4 + local_1c;
      local_res10 = local_res10 - iVar1;
      local_24 = local_24 + iVar1;
      if (0 < local_res10) {
        memmove(local_res8,local_res8 + iVar1,(longlong)local_res10);
      }
    }
    lVar2 = FUN_143a96510(local_res8,local_res10,0x5f);
    if (lVar2 == 0) break;
    local_res10 = local_res10 - ((int)(char *)(lVar2 + 1) - (int)local_res8);
    local_res8 = (char *)(lVar2 + 1);
  }
  return local_24;
}



// FUNCTION 143a95a30 FUN_143a95a30 body=154 status=ok
// SIG undefined FUN_143a95a30(void)

longlong FUN_143a95a30(longlong *param_1,char *param_2)

{
  int iVar1;
  longlong *local_res8;
  int local_18;
  
  local_18 = 0;
  local_res8 = param_1;
  do {
    if (1 < local_18) {
      return 0xffffffff;
    }
    for (; *local_res8 != 0; local_res8 = local_res8 + 1) {
      iVar1 = _guard_xfg_dispatch_icall_nop(param_2,(char *)*local_res8);
      if (iVar1 == 0) {
        return (longlong)local_res8 - (longlong)param_1 >> 3;
      }
    }
    local_res8 = local_res8 + 1;
    local_18 = local_18 + 1;
  } while( true );
}



// FUNCTION 143a95ad0 FUN_143a95ad0 body=2003 status=ok
// SIG undefined FUN_143a95ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143a95ad0(char *param_1,char param_2,longlong param_3,int param_4,longlong param_5,int param_6,
             int *param_7,char param_8,char *param_9,char *param_10,undefined4 *param_11)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined1 auStack_558 [32];
  undefined8 local_538;
  undefined1 local_530;
  undefined4 *local_528;
  int local_518;
  int local_514;
  int local_510;
  char local_50c;
  char local_50b;
  int local_508;
  char *local_500;
  char *local_4f8;
  int local_4f0;
  int local_4ec;
  char *local_4e8;
  int local_4e0;
  char *local_4d8;
  char local_4c8 [28];
  int iStack_4ac;
  undefined8 uStack_4a8;
  int aiStack_4a0 [290];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_558;
  local_4e0 = 0x19;
  local_514 = 0;
  local_4f8 = (char *)0x0;
  local_4e8 = (char *)0x0;
  local_518 = 0;
  local_510 = 0;
  local_4f0 = 0;
  local_500 = param_1;
  if (param_2 == '@') {
    do {
      local_50c = '\0';
      for (; *local_500 == ' '; local_500 = local_500 + 1) {
      }
      if (*local_500 == '\0') break;
      if (local_514 == local_4e0) {
        *param_11 = 5;
        return 0;
      }
      local_4f8 = strchr(local_500,0x3d);
      local_4e8 = strchr(local_500,0x3b);
      if ((local_4f8 == (char *)0x0) || ((local_4e8 != (char *)0x0 && (local_4e8 < local_4f8)))) {
        *param_11 = 3;
        return 0;
      }
      if (0x18 < (longlong)local_4f8 - (longlong)local_500) {
        *param_11 = 5;
        return 0;
      }
      local_4ec = 0;
      for (local_518 = 0; (longlong)local_518 < (longlong)local_4f8 - (longlong)local_500;
          local_518 = local_518 + 1) {
        if (local_500[local_518] != ' ') {
          cVar1 = FUN_143ab82e0(local_500[local_518]);
          local_4c8[(longlong)local_4ec + (longlong)local_514 * 0x30] = cVar1;
          local_4ec = local_4ec + 1;
        }
      }
      if (local_4ec == 0) {
        *param_11 = 3;
        return 0;
      }
      local_4c8[(longlong)local_4ec + (longlong)local_514 * 0x30] = '\0';
      (&iStack_4ac)[(longlong)local_514 * 0xc] = local_4ec;
      do {
        local_4f8 = local_4f8 + 1;
      } while (*local_4f8 == ' ');
      if ((local_4f8 == (char *)0x0) || (local_4f8 == local_4e8)) {
        *param_11 = 3;
        return 0;
      }
      (&uStack_4a8)[(longlong)local_514 * 6] = local_4f8;
      local_500 = local_4e8;
      local_518 = 0;
      if (local_4e8 == (char *)0x0) {
        sVar3 = _guard_xfg_dispatch_icall_nop(local_4f8);
        local_518 = (int)sVar3;
        while ((local_518 != 0 && (local_4f8[local_518 + -1] == ' '))) {
          local_518 = local_518 + -1;
        }
        aiStack_4a0[(longlong)local_514 * 0xc] = local_518;
      }
      else {
        while (local_4e8[-1 - (longlong)local_518] == ' ') {
          local_518 = local_518 + 1;
        }
        aiStack_4a0[(longlong)local_514 * 0xc] = ((int)local_4e8 - (int)local_4f8) - local_518;
        local_500 = local_4e8 + 1;
      }
      for (local_508 = 0; local_508 < local_514; local_508 = local_508 + 1) {
        iVar2 = _guard_xfg_dispatch_icall_nop
                          (local_4c8 + (longlong)local_508 * 0x30,
                           local_4c8 + (longlong)local_514 * 0x30);
        if (iVar2 == 0) {
          local_50c = '\x01';
          break;
        }
      }
      if (local_50c == '\0') {
        local_514 = local_514 + 1;
      }
    } while (local_500 != (char *)0x0);
    if (param_9 != (char *)0x0) {
      local_50b = '\0';
      for (local_508 = 0; local_508 < local_514; local_508 = local_508 + 1) {
        iVar2 = _guard_xfg_dispatch_icall_nop(local_4c8 + (longlong)local_508 * 0x30,param_9);
        if (iVar2 == 0) {
          local_50b = '\x01';
          break;
        }
      }
      if (local_50b == '\0') {
        if (local_514 == local_4e0) {
          *param_11 = 5;
          return 0;
        }
        _guard_xfg_dispatch_icall_nop(local_4c8 + (longlong)local_514 * 0x30,param_9);
        sVar3 = _guard_xfg_dispatch_icall_nop(param_9);
        (&iStack_4ac)[(longlong)local_514 * 0xc] = (int)sVar3;
        (&uStack_4a8)[(longlong)local_514 * 6] = param_10;
        sVar3 = _guard_xfg_dispatch_icall_nop(param_10);
        aiStack_4a0[(longlong)local_514 * 0xc] = (int)sVar3;
        local_514 = local_514 + 1;
      }
    }
    local_528 = param_11;
    local_530 = 0;
    local_538 = 0;
    FUN_143ac1910(local_4c8,local_514,0x30,FUN_143a96580);
    for (local_518 = 0; local_518 < local_514; local_518 = local_518 + 1) {
      if (local_510 + 1 + (&iStack_4ac)[(longlong)local_518 * 0xc] < param_4) {
        _guard_xfg_dispatch_icall_nop
                  ((char *)(param_3 + local_510),local_4c8 + (longlong)local_518 * 0x30);
        if (param_8 == '\0') {
          *(undefined1 *)(param_3 + (local_510 + (&iStack_4ac)[(longlong)local_518 * 0xc])) = 0;
        }
        else {
          *(undefined1 *)(param_3 + (local_510 + (&iStack_4ac)[(longlong)local_518 * 0xc])) = 0x3d;
        }
      }
      local_510 = local_510 + 1 + (&iStack_4ac)[(longlong)local_518 * 0xc];
      if (param_8 != '\0') {
        if (local_510 + aiStack_4a0[(longlong)local_518 * 0xc] < param_4) {
          local_4d8 = (char *)(param_3 + local_510);
          strncpy(local_4d8,(char *)(&uStack_4a8)[(longlong)local_518 * 6],
                  (longlong)aiStack_4a0[(longlong)local_518 * 0xc]);
        }
        local_510 = local_510 + aiStack_4a0[(longlong)local_518 * 0xc];
        if (local_518 < local_514 + -1) {
          if (local_510 < param_4) {
            *(undefined1 *)(param_3 + local_510) = 0x3b;
          }
          local_510 = local_510 + 1;
        }
      }
      if (param_5 != 0) {
        if (local_4f0 + 1 + aiStack_4a0[(longlong)local_518 * 0xc] < param_6) {
          _guard_xfg_dispatch_icall_nop
                    ((char *)(param_5 + local_4f0),(char *)(&uStack_4a8)[(longlong)local_518 * 6]);
          *(undefined1 *)(param_5 + (local_4f0 + aiStack_4a0[(longlong)local_518 * 0xc])) = 0;
        }
        local_4f0 = local_4f0 + 1 + aiStack_4a0[(longlong)local_518 * 0xc];
      }
    }
    if ((param_5 != 0) && (*(undefined1 *)(param_5 + local_4f0) = 0, param_7 != (int *)0x0)) {
      *param_7 = local_4f0;
    }
    uVar4 = FUN_143ab4930(param_3,param_4,local_510,param_11);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 143a962b0 FUN_143a962b0 body=58 status=ok
// SIG undefined FUN_143a962b0(void)

void FUN_143a962b0(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_143a962f0(param_1,param_2,param_3,param_4,0);
  return;
}



// FUNCTION 143a962f0 FUN_143a962f0 body=541 status=ok
// SIG undefined FUN_143a962f0(void)

int FUN_143a962f0(char *param_1,char param_2,longlong param_3,int param_4,char param_5)

{
  undefined1 uVar1;
  longlong lVar2;
  char *local_res8;
  int local_18;
  
  local_18 = 0;
  local_res8 = param_1;
  if ((param_2 == '_') || (param_2 == '-')) {
    for (; (*local_res8 != '\0' && ((*local_res8 != '.' && (*local_res8 != '@'))));
        local_res8 = local_res8 + 1) {
      if (param_5 != '\0') {
        if (local_18 < param_4) {
          *(undefined1 *)(param_3 + local_18) = 0x5f;
        }
        local_18 = local_18 + 1;
        param_5 = '\0';
      }
      if (local_18 < param_4) {
        uVar1 = FUN_143ab85d0(*local_res8);
        *(undefined1 *)(param_3 + local_18) = uVar1;
        if (*(char *)(param_3 + local_18) == '-') {
          *(undefined1 *)(param_3 + local_18) = 0x5f;
        }
      }
      local_18 = local_18 + 1;
    }
  }
  if (local_18 == 0) {
    if (param_2 != '@') {
      lVar2 = FUN_143a96710(local_res8);
      if (lVar2 == 0) {
        return 0;
      }
      local_res8 = (char *)(lVar2 + 1);
    }
    for (; ((*local_res8 != '\0' && (*local_res8 != '.')) && (*local_res8 != '@'));
        local_res8 = local_res8 + 1) {
      if (param_5 != '\0') {
        if (local_18 < param_4) {
          *(undefined1 *)(param_3 + local_18) = 0x5f;
        }
        local_18 = local_18 + 1;
        param_5 = '\0';
      }
      if (local_18 < param_4) {
        uVar1 = FUN_143ab85d0(*local_res8);
        *(undefined1 *)(param_3 + local_18) = uVar1;
        if ((*(char *)(param_3 + local_18) == '-') || (*(char *)(param_3 + local_18) == ',')) {
          *(undefined1 *)(param_3 + local_18) = 0x5f;
        }
      }
      local_18 = local_18 + 1;
    }
  }
  return local_18;
}



// FUNCTION 143a96510 FUN_143a96510 body=106 status=ok
// SIG undefined FUN_143a96510(void)

char * FUN_143a96510(char *param_1,int param_2,char param_3)

{
  char *local_res8;
  int local_res10;
  
  local_res8 = param_1;
  local_res10 = param_2;
  while( true ) {
    if (local_res10 == 0) {
      return (char *)0x0;
    }
    if (*local_res8 == param_3) break;
    if (*local_res8 == '\0') {
      return (char *)0x0;
    }
    local_res8 = local_res8 + 1;
    local_res10 = local_res10 + -1;
  }
  return local_res8;
}



// FUNCTION 143a96580 FUN_143a96580 body=59 status=ok
// SIG undefined FUN_143a96580(void)

void FUN_143a96580(undefined8 param_1,char *param_2,char *param_3)

{
  _guard_xfg_dispatch_icall_nop(param_2,param_3);
  return;
}



// FUNCTION 143a965c0 FUN_143a965c0 body=187 status=ok
// SIG undefined FUN_143a965c0(void)

int FUN_143a965c0(char *param_1)

{
  bool bVar1;
  size_t sVar2;
  int local_24;
  int local_20;
  int local_1c;
  
  sVar2 = _guard_xfg_dispatch_icall_nop(param_1);
  local_24 = 0;
  bVar1 = true;
  local_1c = (int)sVar2;
  for (local_20 = 0; local_20 < (int)sVar2; local_20 = local_20 + 1) {
    if ((param_1[local_20] == '_') || (param_1[local_20] == '-')) {
      if ((local_24 != 0) && (local_24 < local_1c)) {
        local_1c = local_24;
      }
      bVar1 = true;
    }
    else {
      if (bVar1) {
        local_24 = 0;
        bVar1 = false;
      }
      local_24 = local_24 + 1;
    }
  }
  return local_1c;
}



// FUNCTION 143a96680 FUN_143a96680 body=142 status=ok
// SIG undefined FUN_143a96680(void)

int FUN_143a96680(longlong param_1,char *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  size_t sVar3;
  int local_18;
  
  sVar3 = _guard_xfg_dispatch_icall_nop(param_2);
  iVar2 = (int)sVar3;
  if (iVar2 < 0x19) {
    for (local_18 = 0; local_18 < iVar2; local_18 = local_18 + 1) {
      uVar1 = FUN_143ab82e0(param_2[local_18]);
      *(undefined1 *)(param_1 + local_18) = uVar1;
    }
    *(undefined1 *)(param_1 + local_18) = 0;
  }
  else {
    *param_3 = 5;
    iVar2 = 0;
  }
  return iVar2;
}



// FUNCTION 143a96710 FUN_143a96710 body=61 status=ok
// SIG undefined FUN_143a96710(void)

char * FUN_143a96710(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = strchr(param_1,0x40);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



// FUNCTION 143a96750 FUN_143a96750 body=139 status=ok
// SIG undefined FUN_143a96750(void)

void FUN_143a96750(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9)

{
  FUN_143a95ad0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,0,param_9);
  return;
}



// FUNCTION 143a967e0 FUN_143a967e0 body=65 status=ok
// SIG undefined FUN_143a967e0(void)

void FUN_143a967e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_143a94aa0(param_1,param_2,param_3,1,param_4);
  return;
}



// FUNCTION 143a96830 FUN_143a96830 body=65 status=ok
// SIG undefined FUN_143a96830(void)

void FUN_143a96830(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_143a94aa0(param_1,param_2,param_3,2,param_4);
  return;
}



// FUNCTION 143a96880 FUN_143a96880 body=269 status=ok
// SIG undefined FUN_143a96880(void)

undefined8 FUN_143a96880(char *param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  char *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined4 *local_res20;
  undefined4 local_18;
  char *local_10 [2];
  
  local_18 = 0;
  if ((param_4 != (undefined4 *)0x0) &&
     (local_res8 = param_1, local_res10 = param_2, local_res18 = param_3, local_res20 = param_4,
     cVar1 = FUN_143a8b0e0(*param_4), cVar1 == '\0')) {
    if (local_res8 == (char *)0x0) {
      local_res8 = (char *)FUN_143a96a30();
    }
    FUN_143a98520(local_res8,0,0,&local_res8);
    if ((*local_res8 == '_') || (*local_res8 == '-')) {
      FUN_143a98750(local_res8 + 1,0,0,local_10);
      if (local_10[0] != local_res8 + 1) {
        local_res8 = local_10[0];
      }
      if ((*local_res8 == '_') || (*local_res8 == '-')) {
        local_18 = FUN_143a98360(local_res8 + 1,local_res10,local_res18,0);
      }
    }
    uVar2 = FUN_143ab4930(local_res10,local_res18,local_18,local_res20);
    return uVar2;
  }
  return 0;
}



// FUNCTION 143a96990 FUN_143a96990 body=66 status=ok
// SIG undefined FUN_143a96990(void)

undefined * FUN_143a96990(undefined *param_1)

{
  short sVar1;
  
  sVar1 = FUN_143a95a30(&PTR_DAT_145ccc140,param_1);
  if (-1 < sVar1) {
    param_1 = (&PTR_DAT_145ccc1d0)[(int)sVar1];
  }
  return param_1;
}



// FUNCTION 143a969e0 FUN_143a969e0 body=66 status=ok
// SIG undefined FUN_143a969e0(void)

undefined * FUN_143a969e0(undefined *param_1)

{
  short sVar1;
  
  sVar1 = FUN_143a95a30(&PTR_DAT_145cce258,param_1);
  if (-1 < sVar1) {
    param_1 = (&PTR_DAT_145cce288)[(int)sVar1];
  }
  return param_1;
}



// FUNCTION 143a96a30 FUN_143a96a30 body=14 status=ok
// SIG undefined FUN_143a96a30(void)

void FUN_143a96a30(void)

{
  FUN_143a8d2a0();
  return;
}



// FUNCTION 143a96a40 FUN_143a96a40 body=176 status=ok
// SIG undefined FUN_143a96a40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_143a96a40(longlong param_1)

{
  char cVar1;
  short sVar2;
  undefined1 *puVar3;
  longlong local_res8;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  local_24 = 0;
  local_res8 = param_1;
  if (param_1 == 0) {
    local_res8 = FUN_143a96a30();
  }
  FUN_143a971b0(local_res8,local_20,0xc,&local_24);
  cVar1 = FUN_143a8b0e0(local_24);
  if (cVar1 == '\0') {
    sVar2 = FUN_143a95a30(&PTR_DAT_145ccca90,local_20);
    if (sVar2 < 0) {
      puVar3 = &DAT_145af3922;
    }
    else {
      puVar3 = (&PTR_DAT_145cce2c0)[sVar2];
    }
  }
  else {
    puVar3 = &DAT_145af3922;
  }
  return puVar3;
}



// FUNCTION 143a96af0 FUN_143a96af0 body=8 status=ok
// SIG undefined FUN_143a96af0(void)

undefined ** FUN_143a96af0(void)

{
  return &PTR_DAT_145ccca90;
}



// FUNCTION 143a96b00 FUN_143a96b00 body=1167 status=ok
// SIG undefined FUN_143a96b00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143a96b00(char *param_1,undefined8 param_2,char *param_3,int param_4,undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  int local_128;
  char *local_120;
  char *local_118;
  undefined4 local_110;
  char *local_108;
  ulonglong local_100;
  char local_f8 [32];
  char local_d8 [32];
  char local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_120 = (char *)0x0;
  local_118 = (char *)0x0;
  local_128 = 0;
  local_110 = 0;
  if (((param_5 == (undefined4 *)0x0) || (cVar1 = FUN_143a8b110(*param_5), cVar1 == '\0')) ||
     (param_1 == (char *)0x0)) {
LAB_143a96f75:
    iVar2 = 0;
  }
  else {
    local_108 = param_1;
    if (((param_1 != (char *)0x0) && (pcVar3 = strstr(param_1,"@"), pcVar3 == (char *)0x0)) &&
       (iVar2 = FUN_143a965c0(param_1), iVar2 == 1)) {
      local_138 = param_5;
      iVar2 = FUN_143abff90(param_1,local_b8,0x9d,0);
      if ((0 < iVar2) && (cVar1 = FUN_143a8b0e0(*param_5), cVar1 == '\0')) {
        local_108 = local_b8;
      }
    }
    local_120 = strchr(local_108,0x40);
    if (local_120 == (char *)0x0) {
      iVar2 = 0;
    }
    else {
      FUN_143a96680(local_d8,param_2,param_5);
      cVar1 = FUN_143a8b0e0(*param_5);
      if (cVar1 == '\0') {
        do {
          if (local_120 == (char *)0x0) goto LAB_143a96f75;
          do {
            local_120 = local_120 + 1;
          } while (*local_120 == ' ');
          local_118 = strchr(local_120,0x3d);
          if (local_118 == (char *)0x0) goto LAB_143a96f75;
          if (0x18 < (longlong)local_118 - (longlong)local_120) {
            *param_5 = 5;
            return 0;
          }
          for (local_128 = 0; (longlong)local_128 < (longlong)local_118 - (longlong)local_120;
              local_128 = local_128 + 1) {
            cVar1 = FUN_143ab82e0(local_120[local_128]);
            local_f8[local_128] = cVar1;
          }
          while (local_120[local_128 + -1] == ' ') {
            local_128 = local_128 + -1;
          }
          local_100 = (ulonglong)local_128;
          if (0x18 < local_100) {
                    /* WARNING: Subroutine does not return */
            __report_rangecheckfailure();
          }
          local_f8[local_100] = '\0';
          local_120 = strchr(local_118,0x3b);
          iVar2 = _guard_xfg_dispatch_icall_nop(local_d8,local_f8);
        } while (iVar2 != 0);
        do {
          local_118 = local_118 + 1;
        } while (*local_118 == ' ');
        if ((local_120 == (char *)0x0) ||
           ((longlong)param_4 <= (longlong)local_120 - (longlong)local_118)) {
          if ((local_120 == (char *)0x0) &&
             (sVar4 = _guard_xfg_dispatch_icall_nop(local_118), (int)sVar4 < param_4)) {
            sVar4 = _guard_xfg_dispatch_icall_nop(local_118);
            local_128 = (int)sVar4;
            while (local_118[local_128 + -1] == ' ') {
              local_128 = local_128 + -1;
            }
            strncpy(param_3,local_118,(longlong)local_128);
            iVar2 = FUN_143ab4930(param_3,param_4,local_128,param_5);
          }
          else {
            *param_5 = 0xf;
            if (local_120 == (char *)0x0) {
              sVar4 = _guard_xfg_dispatch_icall_nop(local_118);
              iVar2 = (int)sVar4;
            }
            else {
              iVar2 = (int)local_120 - (int)local_118;
            }
          }
        }
        else {
          for (; local_120[-1] == ' '; local_120 = local_120 + -1) {
          }
          strncpy(param_3,local_118,(longlong)local_120 - (longlong)local_118);
          iVar2 = FUN_143ab4930(param_3,param_4,
                                (longlong)local_120 - (longlong)local_118 & 0xffffffff,param_5);
        }
      }
      else {
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}



// FUNCTION 143a96f90 FUN_143a96f90 body=533 status=ok
// SIG undefined FUN_143a96f90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a96f90(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_1e8 [32];
  undefined4 *local_1c8;
  undefined4 local_1b8;
  int local_1b4;
  ulonglong local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  undefined1 local_198 [64];
  undefined1 local_158 [160];
  undefined1 local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  local_1b8 = 0;
  FUN_143a971b0(param_1,local_b8,0x9d,&local_1b8);
  cVar1 = FUN_143a8b0e0(local_1b8);
  if (cVar1 == '\0') {
    pcVar2 = strchr(param_1,0x40);
    if (pcVar2 != (char *)0x0) {
      local_1c8 = &local_1b8;
      local_1b4 = FUN_143a96b00(param_1,"collation",local_198,0x31);
      cVar1 = FUN_143a8b110(local_1b8);
      if ((cVar1 != '\0') && (0 < local_1b4)) {
        local_1a8 = (ulonglong)local_1b4;
        if (0x31 < local_1a8) {
                    /* WARNING: Subroutine does not return */
          __report_rangecheckfailure();
        }
        local_198[local_1a8] = 0;
        local_1b4 = FUN_143a96830(param_1,local_158,0x9c,&local_1b8);
        cVar1 = FUN_143a8b110(local_1b8);
        if (cVar1 != '\0') {
          local_1b0 = (ulonglong)local_1b4;
          if (0x9c < local_1b0) {
                    /* WARNING: Subroutine does not return */
            __report_rangecheckfailure();
          }
          local_158[local_1b0] = 0;
          local_1c8 = &local_1b8;
          local_1b4 = FUN_143a97ae0("collation",local_198,local_158,0x9c - local_1b4);
          cVar1 = FUN_143a8b110(local_1b8);
          if (cVar1 != '\0') {
            local_1a0 = (ulonglong)local_1b4;
            if (local_1a0 < 0x9d) {
              local_158[local_1a0] = 0;
              uVar3 = FUN_143ab8860(local_b8,local_158,&local_1b8);
              return uVar3;
            }
                    /* WARNING: Subroutine does not return */
            __report_rangecheckfailure();
          }
        }
      }
      local_1b8 = 0;
    }
    uVar3 = FUN_143ab8860(local_b8,param_1,&local_1b8);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143a971b0 FUN_143a971b0 body=137 status=ok
// SIG undefined FUN_143a971b0(void)

undefined8 FUN_143a971b0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_4 != (undefined4 *)0x0) && (cVar1 = FUN_143a8b0e0(*param_4), cVar1 == '\0')) {
    local_res8 = param_1;
    if (param_1 == 0) {
      local_res8 = FUN_143a96a30();
    }
    uVar3 = FUN_143a98520(local_res8,param_2,param_3,0,uVar3);
    uVar2 = FUN_143ab4930(param_2,param_3,uVar3,param_4);
    return uVar2;
  }
  return 0;
}



// FUNCTION 143a97240 FUN_143a97240 body=52 status=ok
// SIG undefined FUN_143a97240(void)

void FUN_143a97240(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_143ab8a30(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143a97280 FUN_143a97280 body=62 status=ok
// SIG undefined FUN_143a97280(void)

void FUN_143a97280(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_143a94aa0(param_1,param_2,param_3,0,param_4);
  return;
}



// FUNCTION 143a972c0 FUN_143a972c0 body=208 status=ok
// SIG undefined FUN_143a972c0(void)

undefined8 FUN_143a972c0(char *param_1,char *param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  undefined4 local_18;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    local_res8 = param_1;
    if (param_1 == (char *)0x0) {
      local_res8 = (char *)FUN_143a96a30();
    }
    pcVar3 = strrchr(local_res8,0x5f);
    if (pcVar3 == (char *)0x0) {
      local_18 = 0;
    }
    else {
      local_18 = (int)pcVar3 - (int)local_res8;
    }
    if ((0 < local_18) && (param_2 != local_res8)) {
      iVar2 = FUN_143ac1240(local_18,param_3);
      _guard_xfg_dispatch_icall_nop(param_2,local_res8,(longlong)iVar2);
    }
    uVar4 = FUN_143ab4930(param_2,param_3,local_18,param_4);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 143a97390 FUN_143a97390 body=189 status=ok
// SIG undefined FUN_143a97390(void)

undefined8 FUN_143a97390(char *param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  char *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined4 *local_res20;
  undefined4 local_18;
  
  local_18 = 0;
  if ((param_4 != (undefined4 *)0x0) &&
     (local_res8 = param_1, local_res10 = param_2, local_res18 = param_3, local_res20 = param_4,
     cVar1 = FUN_143a8b0e0(*param_4), cVar1 == '\0')) {
    if (local_res8 == (char *)0x0) {
      local_res8 = (char *)FUN_143a96a30();
    }
    FUN_143a98520(local_res8,0,0,&local_res8);
    if ((*local_res8 == '_') || (*local_res8 == '-')) {
      local_18 = FUN_143a98750(local_res8 + 1,local_res10,local_res18,0);
    }
    uVar2 = FUN_143ab4930(local_res10,local_res18,local_18,local_res20);
    return uVar2;
  }
  return 0;
}



// FUNCTION 143a97450 FUN_143a97450 body=662 status=ok
// SIG undefined FUN_143a97450(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a97450(char *param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *local_res8;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  char *local_d8;
  undefined4 local_d0;
  char *local_c8;
  char *local_c0;
  char local_b8 [160];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_d0 = 0;
  if ((param_4 == (undefined4 *)0x0) || (cVar1 = FUN_143a8b0e0(*param_4), cVar1 != '\0')) {
    uVar4 = 0;
  }
  else {
    if ((param_1 == (char *)0x0) ||
       ((pcVar3 = strstr(param_1,"@"), pcVar3 != (char *)0x0 ||
        (iVar2 = FUN_143a965c0(param_1), iVar2 != 1)))) {
      local_res8 = param_1;
      if (param_1 == (char *)0x0) {
        local_res8 = (char *)FUN_143a96a30();
      }
      local_d8 = local_res8;
    }
    else {
      local_e8 = param_4;
      iVar2 = FUN_143abff90(param_1,local_b8,0x9d,0);
      local_d8 = param_1;
      if ((0 < iVar2) && (cVar1 = FUN_143a8b0e0(*param_4), cVar1 == '\0')) {
        local_d8 = local_b8;
      }
    }
    FUN_143a98520(local_d8,0,0,&local_d8);
    if ((*local_d8 == '_') || (*local_d8 == '-')) {
      FUN_143a98750(local_d8 + 1,0,0,&local_c0);
      if (local_c0 != local_d8 + 1) {
        local_d8 = local_c0;
      }
      if ((*local_d8 == '_') || (*local_d8 == '-')) {
        FUN_143a98360(local_d8 + 1,0,0,&local_c8);
        if (local_c8 != local_d8 + 1) {
          local_d8 = local_c8;
        }
        if ((*local_d8 == '_') || (*local_d8 == '-')) {
          if ((local_d8 != local_c8) && ((local_d8[1] == '_' || (local_d8[1] == '-')))) {
            local_d8 = local_d8 + 1;
          }
          local_d0 = FUN_143a962b0(local_d8 + 1,*local_d8,param_2,param_3);
        }
      }
    }
    uVar4 = FUN_143ab4930(param_2,param_3,local_d0,param_4);
  }
  return uVar4;
}



// FUNCTION 143a976f0 FUN_143a976f0 body=282 status=ok
// SIG undefined FUN_143a976f0(void)

void * FUN_143a976f0(void *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  void *_Dst;
  longlong *plVar2;
  longlong lVar3;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    _Dst = (void *)FUN_143aa7a40(0x38);
    if (_Dst == (void *)0x0) {
      *param_3 = 7;
      _Dst = (void *)0x0;
    }
    else {
      _guard_xfg_dispatch_icall_nop(_Dst,&DAT_145ccc0f0,0x38);
      plVar2 = (longlong *)FUN_143aa7a40(0x10);
      if (plVar2 == (longlong *)0x0) {
        *param_3 = 7;
        FUN_143aa79f0(_Dst);
        _Dst = (void *)0x0;
      }
      else {
        lVar3 = FUN_143aa7a40((longlong)(param_2 + 1));
        *plVar2 = lVar3;
        _guard_xfg_dispatch_icall_nop((void *)*plVar2,param_1,(longlong)param_2);
        *(undefined1 *)(*plVar2 + (longlong)param_2) = 0;
        plVar2[1] = *plVar2;
        *(longlong **)((longlong)_Dst + 8) = plVar2;
      }
    }
  }
  else {
    _Dst = (void *)0x0;
  }
  return _Dst;
}



// FUNCTION 143a97810 FUN_143a97810 body=651 status=ok
// SIG undefined FUN_143a97810(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143a97810(byte *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  byte *local_res8;
  undefined1 auStack_228 [32];
  undefined4 *local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined1 local_1f0;
  undefined4 *local_1e8;
  byte *local_1d8;
  int local_1d0;
  undefined4 local_1cc;
  byte *local_1c8 [2];
  byte local_1b8 [160];
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  local_1d0 = 0;
  local_1cc = 0x100;
  if ((param_2 == (undefined4 *)0x0) || (cVar1 = FUN_143a8b0e0(*param_2), cVar1 != '\0')) {
    uVar4 = 0;
  }
  else {
    if ((param_1 == (byte *)0x0) ||
       ((pcVar3 = strstr((char *)param_1,"@"), pcVar3 != (char *)0x0 ||
        (iVar2 = FUN_143a965c0(param_1), iVar2 != 1)))) {
      local_res8 = param_1;
      if (param_1 == (byte *)0x0) {
        local_res8 = (byte *)FUN_143a96a30();
      }
      local_1d8 = local_res8;
    }
    else {
      local_208 = param_2;
      iVar2 = FUN_143abff90(param_1,local_1b8,0x9d,0);
      local_1d8 = param_1;
      if ((0 < iVar2) && (cVar1 = FUN_143a8b0e0(*param_2), cVar1 == '\0')) {
        local_1d8 = local_1b8;
      }
    }
    FUN_143a98520(local_1d8,0,0,&local_1d8);
    if ((*local_1d8 == 0x5f) || (*local_1d8 == 0x2d)) {
      FUN_143a98750(local_1d8 + 1,0,0,local_1c8);
      if (local_1c8[0] != local_1d8 + 1) {
        local_1d8 = local_1c8[0];
      }
      if ((*local_1d8 == 0x5f) || (*local_1d8 == 0x2d)) {
        FUN_143a98360(local_1d8 + 1,0,0,&local_1d8);
        if ((*local_1d8 == 0x5f) || (*local_1d8 == 0x2d)) {
          FUN_143a962b0(local_1d8 + 1,*local_1d8,0,0);
        }
      }
    }
    local_1d8 = (byte *)FUN_143a96710(local_1d8);
    if (local_1d8 != (byte *)0x0) {
      local_1f0 = 0;
      local_1f8 = 0;
      local_200 = 0;
      local_208 = (undefined4 *)0x0;
      local_1e8 = param_2;
      local_1d0 = FUN_143a96750(local_1d8 + 1,0x40,local_118,local_1cc);
    }
    if (local_1d0 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_143a976f0(local_118,local_1d0,param_2);
    }
  }
  return uVar4;
}



// FUNCTION 143a97aa0 FUN_143a97aa0 body=50 status=ok
// SIG undefined FUN_143a97aa0(void)

void FUN_143a97aa0(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    FUN_143a8d2c0(param_1);
  }
  return;
}



// FUNCTION 143a97ae0 FUN_143a97ae0 body=2142 status=ok
// SIG undefined FUN_143a97ae0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_143a97ae0(undefined8 param_1,char *param_2,char *param_3,int param_4,undefined4 *param_5)

{
  char cVar1;
  char *pcVar2;
  size_t sVar3;
  char *local_res10;
  undefined1 auStack_d8 [32];
  uint local_b8;
  char *local_b0;
  int local_a8;
  uint local_a4;
  int local_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  char *local_70;
  int local_68;
  int local_64;
  ulonglong local_60;
  char local_58 [32];
  char local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_a4 = 0;
  local_74 = 0;
  local_a0 = 0;
  local_90 = (char *)0x0;
  local_88 = (char *)0x0;
  local_98 = (char *)0x0;
  local_b0 = (char *)0x0;
  local_70 = (char *)0x0;
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    if (param_4 < 2) {
      *param_5 = 1;
      pcVar2 = (char *)0x0;
    }
    else {
      sVar3 = _guard_xfg_dispatch_icall_nop(param_3);
      local_b8 = (uint)sVar3;
      if (param_4 < (int)local_b8) {
        *param_5 = 1;
        pcVar2 = (char *)0x0;
      }
      else {
        local_res10 = param_2;
        if ((param_2 != (char *)0x0) && (*param_2 == '\0')) {
          local_res10 = (char *)0x0;
        }
        if (local_res10 == (char *)0x0) {
          local_a8 = 0;
        }
        else {
          sVar3 = _guard_xfg_dispatch_icall_nop(local_res10);
          local_a8 = (int)sVar3;
        }
        local_80 = FUN_143a96680(local_58,param_1,param_5);
        cVar1 = FUN_143a8b0e0(*param_5);
        if (cVar1 == '\0') {
          local_98 = (char *)FUN_143a96710(param_3);
          if ((local_98 == (char *)0x0) || (pcVar2 = local_98, local_98[1] == '\0')) {
            if (local_res10 == (char *)0x0) {
              pcVar2 = (char *)(ulonglong)local_b8;
            }
            else {
              local_a4 = local_b8 + local_80 + 2 + local_a8;
              if (local_98 == (char *)0x0) {
                local_98 = param_3 + (int)local_b8;
              }
              else {
                local_a4 = local_a4 - 1;
              }
              if ((int)local_a4 < param_4) {
                *local_98 = '@';
                local_98 = local_98 + 1;
                _guard_xfg_dispatch_icall_nop(local_98,local_58);
                local_98[local_80] = '=';
                local_98 = local_98 + local_80 + 1;
                _guard_xfg_dispatch_icall_nop(local_98,local_res10);
                pcVar2 = (char *)(ulonglong)local_a4;
              }
              else {
                *param_5 = 0xf;
                pcVar2 = (char *)(ulonglong)local_a4;
              }
            }
          }
          else {
            while (local_b0 = pcVar2, local_b0 != (char *)0x0) {
              do {
                local_b0 = local_b0 + 1;
              } while (*local_b0 == ' ');
              local_88 = (char *)FUN_143a8d150(local_b0,0x3d);
              if (local_88 == (char *)0x0) break;
              if (0x18 < (longlong)local_88 - (longlong)local_b0) {
                *param_5 = 5;
                return (char *)0x0;
              }
              for (local_a0 = 0; (longlong)local_a0 < (longlong)local_88 - (longlong)local_b0;
                  local_a0 = local_a0 + 1) {
                cVar1 = FUN_143ab82e0(local_b0[local_a0]);
                local_38[local_a0] = cVar1;
              }
              while (local_b0[local_a0 + -1] == ' ') {
                local_a0 = local_a0 + -1;
              }
              local_60 = (ulonglong)local_a0;
              if (0x18 < local_60) {
                    /* WARNING: Subroutine does not return */
                __report_rangecheckfailure();
              }
              local_38[local_60] = '\0';
              local_90 = (char *)FUN_143a8d150(local_88,0x3b);
              local_64 = _guard_xfg_dispatch_icall_nop(local_58,local_38);
              if (local_64 == 0) {
                do {
                  local_88 = local_88 + 1;
                } while (*local_88 == ' ');
                if (local_90 == (char *)0x0) {
                  local_74 = 1;
                  sVar3 = _guard_xfg_dispatch_icall_nop(local_88);
                  local_7c = (int)sVar3;
                }
                else {
                  local_74 = 0;
                  local_7c = (int)local_90 - (int)local_88;
                }
                if (local_res10 == (char *)0x0) {
                  if (local_74 != 0) {
                    local_b0[-1] = '\0';
                    return local_b0 + (-1 - (longlong)param_3);
                  }
                  memmove(local_b0,local_90 + 1,
                          (longlong)(int)local_b8 - (longlong)(local_90 + (1 - (longlong)param_3)));
                  local_b0[(longlong)(int)local_b8 - (longlong)(local_90 + (1 - (longlong)param_3))]
                       = '\0';
                  return (char *)((longlong)(int)local_b8 -
                                 (longlong)(local_90 + (1 - (longlong)local_b0)));
                }
                if (local_7c == local_a8) {
                  strncpy(local_88,local_res10,(longlong)local_a8);
                  return (char *)(ulonglong)local_b8;
                }
                if (local_a8 < local_7c) {
                  local_68 = local_7c - local_a8;
                  if (local_90 != (char *)0x0) {
                    memmove(local_90 + -(longlong)local_68,local_90,
                            (longlong)(int)local_b8 - ((longlong)local_90 - (longlong)param_3));
                  }
                  strncpy(local_88,local_res10,(longlong)local_a8);
                  param_3[(int)(local_b8 - local_68)] = '\0';
                  return (char *)(ulonglong)(local_b8 - local_68);
                }
                local_78 = local_a8 - local_7c;
                if (param_4 <= (int)(local_b8 + local_78)) {
                  *param_5 = 0xf;
                  return (char *)(ulonglong)(local_b8 + local_78);
                }
                if (local_90 != (char *)0x0) {
                  memmove(local_90 + local_78,local_90,
                          (longlong)(int)local_b8 - ((longlong)local_90 - (longlong)param_3));
                }
                strncpy(local_88,local_res10,(longlong)local_a8);
                param_3[(int)(local_b8 + local_78)] = '\0';
                return (char *)(ulonglong)(local_b8 + local_78);
              }
              if (local_64 < 0) {
                local_70 = local_b0;
              }
              local_b0 = local_90;
              pcVar2 = local_b0;
            }
            if (local_res10 == (char *)0x0) {
              pcVar2 = (char *)(ulonglong)local_b8;
            }
            else {
              local_a4 = local_b8 + local_80 + 2 + local_a8;
              if ((int)local_a4 < param_4) {
                if (local_70 == (char *)0x0) {
                  param_3[(int)local_b8] = ';';
                  local_b0 = param_3 + (int)local_b8 + 1;
                }
                else {
                  memmove(local_70 + (local_80 + 2 + local_a8),local_70,
                          (longlong)(int)local_b8 - ((longlong)local_70 - (longlong)param_3));
                  local_b0 = local_70;
                }
                strncpy(local_b0,local_58,(longlong)local_80);
                local_b0[local_80] = '=';
                local_b0 = local_b0 + local_80 + 1;
                strncpy(local_b0,local_res10,(longlong)local_a8);
                if (local_70 != (char *)0x0) {
                  local_b0[local_a8] = ';';
                }
                param_3[(int)local_a4] = '\0';
                pcVar2 = (char *)(ulonglong)local_a4;
              }
              else {
                *param_5 = 0xf;
                pcVar2 = (char *)(ulonglong)local_a4;
              }
            }
          }
        }
        else {
          pcVar2 = (char *)0x0;
        }
      }
    }
  }
  else {
    pcVar2 = (char *)0xffffffff;
  }
  return pcVar2;
}



// FUNCTION 143a98360 FUN_143a98360 body=446 status=ok
// SIG undefined FUN_143a98360(void)

int FUN_143a98360(longlong param_1,longlong param_2,int param_3,longlong *param_4)

{
  bool bVar1;
  undefined1 uVar2;
  short sVar3;
  longlong local_res8;
  int local_24;
  int local_20;
  undefined1 local_1c [4];
  int local_18;
  
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  local_1c[3] = 0;
  for (local_24 = 0;
      (((*(char *)(param_1 + local_24) != '\0' && (*(char *)(param_1 + local_24) != '.')) &&
       (*(char *)(param_1 + local_24) != '@')) &&
      ((*(char *)(param_1 + local_24) != '_' && (*(char *)(param_1 + local_24) != '-'))));
      local_24 = local_24 + 1) {
    if (local_24 < 3) {
      uVar2 = FUN_143ab85d0(*(undefined1 *)(param_1 + local_24));
      local_1c[local_24] = uVar2;
    }
  }
  if ((local_24 == 2) || (local_24 == 3)) {
    bVar1 = false;
    if (local_24 == 3) {
      sVar3 = FUN_143a95a30(&PTR_DAT_145ccc260,local_1c);
      local_18 = (int)sVar3;
      if (-1 < local_18) {
        local_24 = FUN_143a95810(param_2,param_3,(&PTR_DAT_145ccf480)[local_18]);
        bVar1 = true;
      }
    }
    if (!bVar1) {
      for (local_20 = 0; local_20 < local_24; local_20 = local_20 + 1) {
        if (local_20 < param_3) {
          uVar2 = FUN_143ab85d0(*(undefined1 *)(param_1 + local_20));
          *(undefined1 *)(param_2 + local_20) = uVar2;
        }
      }
    }
    local_res8 = param_1 + local_24;
  }
  else {
    local_24 = 0;
    local_res8 = param_1;
  }
  if (param_4 != (longlong *)0x0) {
    *param_4 = local_res8;
  }
  return local_24;
}



// FUNCTION 143a98520 FUN_143a98520 body=547 status=ok
// SIG undefined FUN_143a98520(void)

int FUN_143a98520(char *param_1,undefined1 *param_2,int param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  short sVar2;
  char *local_res8;
  int local_18;
  undefined1 local_14 [4];
  int local_10;
  
  local_18 = 0;
  local_14[0] = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  local_res8 = param_1;
  if (((((*param_1 == 'x') || (*param_1 == 'X')) || (*param_1 == 'i')) || (*param_1 == 'I')) &&
     ((param_1[1] == '_' || (param_1[1] == '-')))) {
    if (0 < param_3) {
      uVar1 = FUN_143ab82e0(*param_1);
      *param_2 = uVar1;
      param_2[1] = 0x2d;
    }
    local_18 = 2;
    local_res8 = param_1 + 2;
  }
  for (; ((*local_res8 != '\0' && (*local_res8 != '.')) &&
         ((*local_res8 != '@' && ((*local_res8 != '_' && (*local_res8 != '-'))))));
      local_res8 = local_res8 + 1) {
    if (local_18 < param_3) {
      uVar1 = FUN_143ab82e0(*local_res8);
      param_2[local_18] = uVar1;
    }
    if (local_18 < 3) {
      uVar1 = FUN_143ab82e0(*local_res8);
      local_14[local_18] = uVar1;
    }
    local_18 = local_18 + 1;
  }
  if (local_18 == 3) {
    sVar2 = FUN_143a95a30(&PTR_DAT_145cce2c0,local_14);
    local_10 = (int)sVar2;
    if (-1 < local_10) {
      local_18 = FUN_143a95810(param_2,param_3,(&PTR_DAT_145ccca90)[local_10]);
    }
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = local_res8;
  }
  return local_18;
}



// FUNCTION 143a98750 FUN_143a98750 body=407 status=ok
// SIG undefined FUN_143a98750(void)

int FUN_143a98750(undefined1 *param_1,undefined1 *param_2,int param_3,undefined8 *param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 *local_res8;
  int local_14;
  int local_10;
  
  local_14 = 0;
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = param_1;
  }
  while ((((param_1[local_14] != '\0' && (param_1[local_14] != '.')) && (param_1[local_14] != '@'))
         && (((param_1[local_14] != '_' && (param_1[local_14] != '-')) &&
             (cVar1 = FUN_143ab8310(param_1[local_14]), cVar1 != '\0'))))) {
    local_14 = local_14 + 1;
  }
  if (local_14 == 4) {
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = param_1 + 4;
    }
    if (param_3 < 4) {
      local_14 = param_3;
    }
    local_res8 = param_1;
    if (0 < local_14) {
      uVar2 = FUN_143ab85d0(*param_1);
      *param_2 = uVar2;
      local_res8 = param_1 + 1;
    }
    for (local_10 = 1; local_10 < local_14; local_10 = local_10 + 1) {
      uVar2 = FUN_143ab82e0(*local_res8);
      param_2[local_10] = uVar2;
      local_res8 = local_res8 + 1;
    }
  }
  else {
    local_14 = 0;
  }
  return local_14;
}



// FUNCTION 143a988f0 FUN_143a988f0 body=439 status=ok
// SIG undefined FUN_143a988f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143a988f0(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,code *param_5,
             char *param_6,undefined4 *param_7)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_308 [32];
  undefined1 *local_2e8;
  undefined1 *local_2e0;
  longlong local_2d8;
  int local_2d0;
  undefined4 *local_2c8;
  int local_2b8;
  int local_2b4;
  char *local_2b0;
  char *local_2a8;
  undefined1 local_298 [640];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  local_2a8 = (char *)0x0;
  if ((param_7 == (undefined4 *)0x0) || (cVar1 = FUN_143a8b0e0(*param_7), cVar1 != '\0')) {
    return 0;
  }
  if ((-1 < param_4) && ((param_4 < 1 || (param_3 != 0)))) {
    local_2b8 = 0;
    local_2b4 = (*param_5)(param_1,local_298,0x274,&local_2b8);
    cVar1 = FUN_143a8b0e0(local_2b8);
    if ((cVar1 == '\0') && (local_2b8 != -0x7c)) {
      if (local_2b4 == 0) {
        uVar2 = FUN_143ab4a70(param_3,param_4,0,param_7);
        return uVar2;
      }
      if (param_6 == "Countries") {
        local_2b0 = "icudt53l-region";
      }
      else {
        local_2b0 = "icudt53l-lang";
      }
      local_2a8 = local_2b0;
      local_2c8 = param_7;
      local_2e0 = local_298;
      local_2e8 = local_298;
      local_2d8 = param_3;
      local_2d0 = param_4;
      uVar2 = FUN_143a98ab0(local_2b0,param_2,param_6,0);
      return uVar2;
    }
    *param_7 = 1;
    return 0;
  }
  *param_7 = 1;
  return 0;
}



// FUNCTION 143a98ab0 FUN_143a98ab0 body=489 status=ok
// SIG undefined FUN_143a98ab0(void)

void FUN_143a98ab0(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                  char *param_5,char *param_6,undefined8 param_7,undefined4 param_8,
                  undefined4 *param_9)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  size_t sVar5;
  undefined4 local_28;
  int local_24;
  longlong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_28 = 0;
  if (param_5 == (char *)0x0) {
    local_18 = FUN_143aa5b10(param_1,param_2,param_9);
    cVar1 = FUN_143a8b110(*param_9);
    if (cVar1 != '\0') {
      local_20 = FUN_143aa5130(local_18,param_3,&local_28,param_9);
      FUN_143aa2ef0(local_18);
    }
  }
  else {
    iVar2 = strncmp(param_3,"Languages",9);
    if ((iVar2 == 0) && (lVar3 = strtol(param_5,(char **)0x0,10), lVar3 != 0)) {
      *param_9 = 2;
    }
    else {
      local_20 = FUN_143ac1b20(param_1,param_2,param_3,param_4,param_5,&local_28,param_9);
    }
  }
  cVar1 = FUN_143a8b110(*param_9);
  if (cVar1 == '\0') {
    sVar5 = _guard_xfg_dispatch_icall_nop(param_6);
    local_28 = (undefined4)sVar5;
    uVar4 = FUN_143ac1240(sVar5 & 0xffffffff,param_8);
    FUN_143ab5820(param_6,param_7,uVar4);
    *param_9 = 0xffffff81;
  }
  else {
    local_24 = FUN_143ac1240(local_28,param_8);
    if ((0 < local_24) && (local_20 != 0)) {
      FUN_143ab3ca0(param_7,local_20,local_24);
    }
  }
  FUN_143ab4a70(param_7,param_8,local_28,param_9);
  return;
}



// FUNCTION 143a98ca0 FUN_143a98ca0 body=358 status=ok
// SIG undefined FUN_143a98ca0(void)

undefined8 FUN_143a98ca0(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  longlong local_18;
  
  local_28 = 0;
  local_18 = FUN_143a8fd90(param_3,0x9d);
  if (local_18 == 0) {
    FUN_143a99400(param_3,0);
  }
  else {
    uVar2 = FUN_143a8fe60(param_3);
    local_24 = FUN_143a99460(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28),
                             local_18,uVar2,&local_28);
    cVar1 = FUN_143a8b110(local_28);
    if (cVar1 == '\0') {
      local_20 = 0;
    }
    else {
      local_20 = local_24;
    }
    FUN_143a90820(param_3,local_20);
    if (local_28 == 0xf) {
      local_18 = FUN_143a8fd90(param_3,local_24);
      if (local_18 == 0) {
        FUN_143a99400(param_3,0);
      }
      else {
        local_28 = 0;
        uVar2 = FUN_143a8fe60(param_3);
        local_24 = FUN_143a99460(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28),
                                 local_18,uVar2,&local_28);
        cVar1 = FUN_143a8b110(local_28);
        if (cVar1 == '\0') {
          local_1c = 0;
        }
        else {
          local_1c = local_24;
        }
        FUN_143a90820(param_3,local_1c);
      }
    }
  }
  return param_3;
}



// FUNCTION 143a98e10 FUN_143a98e10 body=358 status=ok
// SIG undefined FUN_143a98e10(void)

undefined8 FUN_143a98e10(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  longlong local_18;
  
  local_28 = 0;
  local_18 = FUN_143a8fd90(param_3,0x9d);
  if (local_18 == 0) {
    FUN_143a99400(param_3,0);
  }
  else {
    uVar2 = FUN_143a8fe60(param_3);
    local_24 = FUN_143a998e0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28),
                             local_18,uVar2,&local_28);
    cVar1 = FUN_143a8b110(local_28);
    if (cVar1 == '\0') {
      local_20 = 0;
    }
    else {
      local_20 = local_24;
    }
    FUN_143a90820(param_3,local_20);
    if (local_28 == 0xf) {
      local_18 = FUN_143a8fd90(param_3,local_24);
      if (local_18 == 0) {
        FUN_143a99400(param_3,0);
      }
      else {
        local_28 = 0;
        uVar2 = FUN_143a8fe60(param_3);
        local_24 = FUN_143a998e0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28),
                                 local_18,uVar2,&local_28);
        cVar1 = FUN_143a8b110(local_28);
        if (cVar1 == '\0') {
          local_1c = 0;
        }
        else {
          local_1c = local_24;
        }
        FUN_143a90820(param_3,local_1c);
      }
    }
  }
  return param_3;
}



// FUNCTION 143a98f80 FUN_143a98f80 body=42 status=ok
// SIG undefined FUN_143a98f80(void)

void FUN_143a98f80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143a8b650();
  FUN_143a98fb0(param_1,uVar1,param_2);
  return;
}



// FUNCTION 143a98fb0 FUN_143a98fb0 body=358 status=ok
// SIG undefined FUN_143a98fb0(void)

undefined8 FUN_143a98fb0(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  longlong local_18;
  
  local_28 = 0;
  local_18 = FUN_143a8fd90(param_3,0x9d);
  if (local_18 == 0) {
    FUN_143a99400(param_3,0);
  }
  else {
    uVar2 = FUN_143a8fe60(param_3);
    local_24 = FUN_143a99940(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28),
                             local_18,uVar2,&local_28);
    cVar1 = FUN_143a8b110(local_28);
    if (cVar1 == '\0') {
      local_20 = 0;
    }
    else {
      local_20 = local_24;
    }
    FUN_143a90820(param_3,local_20);
    if (local_28 == 0xf) {
      local_18 = FUN_143a8fd90(param_3,local_24);
      if (local_18 == 0) {
        FUN_143a99400(param_3,0);
      }
      else {
        local_28 = 0;
        uVar2 = FUN_143a8fe60(param_3);
        local_24 = FUN_143a99940(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28),
                                 local_18,uVar2,&local_28);
        cVar1 = FUN_143a8b110(local_28);
        if (cVar1 == '\0') {
          local_1c = 0;
        }
        else {
          local_1c = local_24;
        }
        FUN_143a90820(param_3,local_1c);
      }
    }
  }
  return param_3;
}



// FUNCTION 143a99120 FUN_143a99120 body=358 status=ok
// SIG undefined FUN_143a99120(void)

undefined8 FUN_143a99120(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  longlong local_18;
  
  local_28 = 0;
  local_18 = FUN_143a8fd90(param_3,0x9d);
  if (local_18 == 0) {
    FUN_143a99400(param_3,0);
  }
  else {
    uVar2 = FUN_143a8fe60(param_3);
    local_24 = FUN_143a9a580(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28),
                             local_18,uVar2,&local_28);
    cVar1 = FUN_143a8b110(local_28);
    if (cVar1 == '\0') {
      local_20 = 0;
    }
    else {
      local_20 = local_24;
    }
    FUN_143a90820(param_3,local_20);
    if (local_28 == 0xf) {
      local_18 = FUN_143a8fd90(param_3,local_24);
      if (local_18 == 0) {
        FUN_143a99400(param_3,0);
      }
      else {
        local_28 = 0;
        uVar2 = FUN_143a8fe60(param_3);
        local_24 = FUN_143a9a580(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28),
                                 local_18,uVar2,&local_28);
        cVar1 = FUN_143a8b110(local_28);
        if (cVar1 == '\0') {
          local_1c = 0;
        }
        else {
          local_1c = local_24;
        }
        FUN_143a90820(param_3,local_1c);
      }
    }
  }
  return param_3;
}



// FUNCTION 143a99290 FUN_143a99290 body=358 status=ok
// SIG undefined FUN_143a99290(void)

undefined8 FUN_143a99290(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  longlong local_18;
  
  local_28 = 0;
  local_18 = FUN_143a8fd90(param_3,0x9d);
  if (local_18 == 0) {
    FUN_143a99400(param_3,0);
  }
  else {
    uVar2 = FUN_143a8fe60(param_3);
    local_24 = FUN_143a9a640(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28),
                             local_18,uVar2,&local_28);
    cVar1 = FUN_143a8b110(local_28);
    if (cVar1 == '\0') {
      local_20 = 0;
    }
    else {
      local_20 = local_24;
    }
    FUN_143a90820(param_3,local_20);
    if (local_28 == 0xf) {
      local_18 = FUN_143a8fd90(param_3,local_24);
      if (local_18 == 0) {
        FUN_143a99400(param_3,0);
      }
      else {
        local_28 = 0;
        uVar2 = FUN_143a8fe60(param_3);
        local_24 = FUN_143a9a640(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28),
                                 local_18,uVar2,&local_28);
        cVar1 = FUN_143a8b110(local_28);
        if (cVar1 == '\0') {
          local_1c = 0;
        }
        else {
          local_1c = local_24;
        }
        FUN_143a90820(param_3,local_1c);
      }
    }
  }
  return param_3;
}



// FUNCTION 143a99400 FUN_143a99400 body=92 status=ok
// SIG undefined FUN_143a99400(void)

undefined8 FUN_143a99400(undefined8 param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_143a90330(param_1);
  if ((cVar1 == '\0') || (param_2 != 0)) {
    uVar2 = FUN_143a904f0(param_1);
    if (param_2 < uVar2) {
      FUN_143a90c60(param_1,param_2);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    FUN_143a91100(param_1);
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143a99460 FUN_143a99460 body=88 status=ok
// SIG undefined FUN_143a99460(void)

void FUN_143a99460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  FUN_143a988f0(param_1,param_2,param_3,param_4,FUN_143a96880,"Countries",param_5);
  return;
}



// FUNCTION 143a994c0 FUN_143a994c0 body=851 status=ok
// SIG undefined FUN_143a994c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143a99574) */

ulonglong FUN_143a994c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
                       int param_5,int *param_6)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_328 [32];
  int *local_308;
  undefined1 *local_300;
  void *local_2f8;
  int local_2f0;
  int *local_2e8;
  uint local_2d8;
  uint local_2d4;
  undefined4 local_2d0;
  void *local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined1 local_298 [640];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  local_2d0 = 0x274;
  local_2d8 = 0;
  if ((param_6 == (int *)0x0) || (cVar1 = FUN_143a8b0e0(*param_6), cVar1 != '\0')) {
    uVar3 = 0;
  }
  else if ((param_5 < 0) || ((0 < param_5 && (param_4 == (void *)0x0)))) {
    *param_6 = 1;
    uVar3 = 0;
  }
  else {
    local_2c0 = 0;
    local_298[0] = 0;
    local_308 = param_6;
    local_2d8 = FUN_143a96b00(param_1,param_2,local_298,local_2d0);
    iVar2 = FUN_143ab83b0(param_2,"currency");
    if (iVar2 == 0) {
      local_2d4 = 0;
      local_2c8 = (void *)0x0;
      local_2b0 = FUN_143aa5b10("icudt53l-curr",param_3,param_6);
      local_2b8 = FUN_143aa37c0(local_2b0,"Currencies",0,param_6);
      local_2a8 = FUN_143aa3350(local_2b8,local_298,0,param_6);
      local_2c8 = (void *)FUN_143aa4da0(local_2a8,1,&local_2d4,param_6);
      FUN_143aa2ef0(local_2a8);
      FUN_143aa2ef0(local_2b8);
      FUN_143aa2ef0(local_2b0);
      cVar1 = FUN_143a8b0e0(*param_6);
      if (cVar1 != '\0') {
        if (*param_6 != 2) {
          return 0;
        }
        *param_6 = -0x7f;
      }
      if (local_2c8 == (void *)0x0) {
        if (param_5 < (int)local_2d8) {
          *param_6 = 0xf;
          uVar3 = (ulonglong)local_2d8;
        }
        else {
          FUN_143ab5820(local_298,param_4,local_2d8);
          uVar3 = FUN_143ab4a70(param_4,param_5,local_2d8,param_6);
        }
      }
      else if (param_5 < (int)local_2d4) {
        *param_6 = 0xf;
        uVar3 = (ulonglong)local_2d4;
      }
      else {
        _guard_xfg_dispatch_icall_nop(param_4,local_2c8,(longlong)(int)(local_2d4 << 1));
        uVar3 = FUN_143ab4a70(param_4,param_5,local_2d4,param_6);
      }
    }
    else {
      local_2e8 = param_6;
      local_2f0 = param_5;
      local_300 = local_298;
      local_308 = (int *)local_298;
      local_2f8 = param_4;
      uVar3 = FUN_143a98ab0("icudt53l-lang",param_3,"Types",param_2);
    }
  }
  return uVar3;
}



// FUNCTION 143a99820 FUN_143a99820 body=184 status=ok
// SIG undefined FUN_143a99820(void)

undefined8
FUN_143a99820(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,undefined4 *param_5
             )

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_5 == (undefined4 *)0x0) || (cVar1 = FUN_143a8b0e0(*param_5), cVar1 != '\0')) {
    return 0;
  }
  if ((-1 < param_4) && ((param_4 < 1 || (param_3 != 0)))) {
    uVar2 = FUN_143a98ab0("icudt53l-lang",param_2,&DAT_145cd1324,0,param_1,param_1,param_3,param_4,
                          param_5);
    return uVar2;
  }
  *param_5 = 1;
  return 0;
}



// FUNCTION 143a998e0 FUN_143a998e0 body=88 status=ok
// SIG undefined FUN_143a998e0(void)

void FUN_143a998e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  FUN_143a988f0(param_1,param_2,param_3,param_4,FUN_143a971b0,"Languages",param_5);
  return;
}



// FUNCTION 143a99940 FUN_143a99940 body=3040 status=ok
// SIG undefined FUN_143a99940(void)

undefined8
FUN_143a99940(undefined8 param_1,undefined8 param_2,wchar_t *param_3,int param_4,int *param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  int local_108;
  int local_100;
  int local_fc;
  char local_f8;
  wchar_t *local_f0;
  int local_e8;
  int local_e4;
  undefined1 local_e0;
  undefined1 local_df;
  char local_de;
  int local_dc;
  int local_d8;
  int local_d4;
  wchar_t local_d0;
  wchar_t local_cc;
  int local_c8;
  wchar_t local_c4;
  wchar_t local_c0;
  int local_bc;
  undefined4 local_b8;
  int local_b4;
  int local_b0;
  wchar_t *local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  wchar_t *local_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  ulonglong local_38;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  wchar_t *local_18;
  
  local_dc = 0;
  local_d8 = 0;
  local_c0 = L'(';
  local_c4 = L'[';
  local_cc = L')';
  local_d0 = L']';
  bVar1 = true;
  local_f8 = '\x01';
  local_de = '\0';
  local_80 = 0;
  if ((param_5 == (int *)0x0) || (cVar3 = FUN_143a8b0e0(*param_5), cVar3 != '\0')) {
    uVar6 = 0;
  }
  else if ((param_4 < 0) || ((0 < param_4 && (param_3 == (wchar_t *)0x0)))) {
    *param_5 = 1;
    uVar6 = 0;
  }
  else {
    local_b8 = 0;
    local_30 = FUN_143aa5b10("icudt53l-lang",param_2,&local_b8);
    local_50 = FUN_143aa3350(local_30,"localeDisplayPattern",0,&local_b8);
    local_88 = (wchar_t *)FUN_143aa4fe0(local_50,"separator",&local_dc,&local_b8);
    local_a8 = (wchar_t *)FUN_143aa4fe0(local_50,"pattern",&local_d8,&local_b8);
    FUN_143aa2ef0(local_50);
    FUN_143aa2ef0(local_30);
    if (local_dc == 0) {
      local_88 = L"{0}, {1}";
    }
    local_38 = FUN_143ab4900(local_88,&DAT_145cd13d0);
    local_40 = FUN_143ab4900(local_88,&DAT_145cd13d8);
    if (((local_38 == 0) || (local_40 == 0)) || (local_40 < local_38)) {
      *param_5 = 1;
      uVar6 = 0;
    }
    else {
      local_88 = (wchar_t *)(local_38 + 6);
      local_dc = (int)((longlong)(local_40 - (longlong)local_88) >> 1);
      if ((local_d8 == 0) ||
         ((local_d8 == 9 && (iVar4 = FUN_143ab4770(local_a8,L"{0} ({1})",9), iVar4 == 0)))) {
        local_a8 = L"{0} ({1})";
        local_d8 = 9;
        local_e8 = 0;
        local_c8 = 5;
      }
      else {
        local_20 = FUN_143ab4900(local_a8,&DAT_145cd13d0);
        local_28 = FUN_143ab4900(local_a8,&DAT_145cd13d8);
        if ((local_20 == 0) || (local_28 == 0)) {
          *param_5 = 1;
          return 0;
        }
        iVar4 = (int)(local_20 - (longlong)local_a8 >> 1);
        local_c8 = (int)(local_28 - (longlong)local_a8 >> 1);
        local_e8 = iVar4;
        if (local_c8 < iVar4) {
          local_80 = 1;
          local_e8 = local_c8;
          local_c8 = iVar4;
          local_68 = iVar4;
        }
        lVar5 = FUN_143ab45e0(local_a8,0xff08);
        if (lVar5 != 0) {
          local_c0 = L'（';
          local_c4 = L'［';
          local_cc = L'）';
          local_d0 = L'］';
        }
      }
      do {
        local_e4 = 0;
        local_bc = 0;
        local_78 = 0;
        local_90 = 0;
        local_b4 = 0;
        local_60 = 0;
        local_f0 = param_3;
        if (local_e8 == 0) {
          local_108 = 0;
        }
        else {
          if (param_4 < local_e8) {
            local_e4 = local_e8;
          }
          else {
            for (; local_e4 < local_e8; local_e4 = local_e4 + 1) {
              *local_f0 = local_a8[local_e4];
              local_f0 = local_f0 + 1;
            }
          }
          local_108 = local_e8;
        }
        local_d4 = 0;
        local_98 = 0;
        while (local_d4 < 2) {
          bVar2 = false;
          local_fc = param_4 - local_108;
          if (local_fc < 1) {
            local_fc = 0;
          }
          else {
            local_f0 = param_3 + local_108;
          }
          if (local_d4 == local_80) {
            if (bVar1) {
              local_78 = local_108;
              local_bc = FUN_143a998e0(param_1,param_2,local_f0,local_fc,param_5);
              local_108 = local_108 + local_bc;
              local_df = 0 < local_bc;
              bVar1 = (bool)local_df;
            }
            bVar2 = true;
          }
          else if (local_f8 == '\0') {
            bVar2 = true;
          }
          else {
            local_48 = local_98;
            iVar4 = local_98 + 1;
            local_a0 = local_98;
            if (local_98 == 0) {
              local_b4 = local_108;
              local_98 = iVar4;
              local_100 = FUN_143a9a520(param_1,param_2,local_f0,local_fc,param_5);
            }
            else if (local_98 == 1) {
              local_98 = iVar4;
              local_100 = FUN_143a99460(param_1,param_2,local_f0,local_fc,param_5);
            }
            else if (local_98 == 2) {
              local_98 = iVar4;
              local_100 = FUN_143a9a640(param_1,param_2,local_f0,local_fc,param_5);
            }
            else {
              bVar7 = local_98 == 3;
              local_98 = iVar4;
              if (bVar7) {
                local_60 = FUN_143a97810(param_1,param_5);
              }
              local_58 = FUN_143abdee0(local_60,&local_100,param_5);
              if (local_58 == 0) {
                FUN_143abddd0(local_60);
                local_100 = 0;
                bVar2 = true;
              }
              else {
                local_100 = FUN_143a99820(local_58,param_2,local_f0,local_fc,param_5);
                if (local_100 != 0) {
                  if (local_100 < local_fc) {
                    local_f0[local_100] = L'=';
                  }
                  local_100 = local_100 + 1;
                  local_fc = local_fc - local_100;
                  if (local_fc < 1) {
                    local_fc = 0;
                  }
                  else {
                    local_f0 = local_f0 + local_100;
                  }
                }
                if (*param_5 == 0xf) {
                  *param_5 = 0;
                }
                local_7c = FUN_143a994c0(param_1,local_58,param_2,local_f0,local_fc,param_5);
                if (local_100 != 0) {
                  if (local_7c == 0) {
                    local_100 = local_100 + -1;
                  }
                  local_fc = param_4 - local_108;
                  if (local_fc < 1) {
                    local_fc = 0;
                  }
                  else {
                    local_f0 = param_3 + local_108;
                  }
                }
                local_100 = local_100 + local_7c;
              }
            }
            if (local_100 < 1) {
              if (bVar2) {
                if (local_108 != local_b4) {
                  local_108 = local_108 - local_dc;
                }
                local_90 = local_108 - local_b4;
                local_f8 = 0 < local_90;
                local_e0 = local_f8;
              }
            }
            else {
              if (local_100 + local_dc <= local_fc) {
                local_18 = local_f0 + local_100;
                for (; local_f0 < local_18; local_f0 = local_f0 + 1) {
                  if (*local_f0 == local_c0) {
                    *local_f0 = local_c4;
                  }
                  else if (*local_f0 == local_cc) {
                    *local_f0 = local_d0;
                  }
                }
                for (local_9c = 0; local_9c < local_dc; local_9c = local_9c + 1) {
                  *local_f0 = *(wchar_t *)((longlong)local_88 + (longlong)local_9c * 2);
                  local_f0 = local_f0 + 1;
                }
              }
              local_108 = local_108 + local_100 + local_dc;
            }
          }
          if (*param_5 == 0xf) {
            *param_5 = 0;
          }
          if (bVar2) {
            if ((bVar1) && (local_f8 != '\0')) {
              local_e4 = local_e4 + 3;
              if (local_d4 == 0) {
                local_74 = local_c8;
              }
              else {
                local_74 = local_d8;
              }
              local_b0 = local_74 - local_e4;
              if (local_108 + local_b0 < param_4) {
                local_f0 = param_3 + local_108;
                for (local_94 = 0; local_94 < local_b0; local_94 = local_94 + 1) {
                  *local_f0 = local_a8[local_e4];
                  local_f0 = local_f0 + 1;
                  local_e4 = local_e4 + 1;
                }
              }
              else {
                local_e4 = local_e4 + local_b0;
              }
              local_108 = local_108 + local_b0;
            }
            else if (local_d4 == 0) {
              local_e8 = 0;
              local_108 = 0;
            }
            else if (0 < local_108) {
              if (bVar1) {
                local_6c = local_bc;
              }
              else {
                local_6c = local_90;
              }
              local_108 = local_6c;
              if ((param_3 != (wchar_t *)0x0) && (local_e8 != 0)) {
                if (param_4 < local_e8 + local_6c) {
                  local_e8 = 0;
                  local_de = '\x01';
                }
                else {
                  if (bVar1) {
                    local_70 = local_78;
                  }
                  else {
                    local_70 = local_b4;
                  }
                  FUN_143ab3ce0(param_3,param_3 + local_70,local_6c);
                }
              }
            }
            local_d4 = local_d4 + 1;
          }
        }
      } while (local_de != '\0');
      uVar6 = FUN_143ab4a70(param_3,param_4,local_108,param_5);
    }
  }
  return uVar6;
}



// FUNCTION 143a9a520 FUN_143a9a520 body=88 status=ok
// SIG undefined FUN_143a9a520(void)

void FUN_143a9a520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  FUN_143a988f0(param_1,param_2,param_3,param_4,FUN_143a97390,"Scripts",param_5);
  return;
}



// FUNCTION 143a9a580 FUN_143a9a580 body=189 status=ok
// SIG undefined FUN_143a9a580(void)

ulonglong FUN_143a9a580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                       int *param_5)

{
  ulonglong uVar1;
  int local_18;
  uint local_14;
  
  local_18 = 0;
  local_14 = FUN_143a988f0(param_1,param_2,param_3,param_4,FUN_143a97390,"Scripts%stand-alone",
                           &local_18);
  if (local_18 == -0x7f) {
    uVar1 = FUN_143a988f0(param_1,param_2,param_3,param_4,FUN_143a97390,"Scripts",param_5);
  }
  else {
    *param_5 = local_18;
    uVar1 = (ulonglong)local_14;
  }
  return uVar1;
}



// FUNCTION 143a9a640 FUN_143a9a640 body=88 status=ok
// SIG undefined FUN_143a9a640(void)

void FUN_143a9a640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  FUN_143a988f0(param_1,param_2,param_3,param_4,FUN_143a97450,"Variants",param_5);
  return;
}



// FUNCTION 143a9a6a0 `dynamic_initializer_for_'ModuleRegistrantAudioCapture'' body=28 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantAudioCapture''(void)

void _dynamic_initializer_for__ModuleRegistrantAudioCapture__(void)

{
  FUN_143a9aa60(&DAT_146bc5520,FUN_143a9a700);
  return;
}



// FUNCTION 143a9a6c0 FUN_143a9a6c0 body=53 status=ok
// SIG undefined FUN_143a9a6c0(void)

undefined8 FUN_143a9a6c0(undefined4 *param_1)

{
  FUN_143a9aa60(&DAT_146bc5508,FUN_143a9a880);
  *param_1 = DAT_146bc551c;
  return DAT_146bc5500;
}



// FUNCTION 143a9a700 FUN_143a9a700 body=372 status=ok
// SIG undefined FUN_143a9a700(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143a9a700(void)

{
  char cVar1;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  int local_f4;
  int local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_e8 = 0;
  local_f8 = 0;
  local_f4 = 0;
  DAT_146bc5518 = 0;
  FUN_143aa5540(local_d8);
  local_e8 = FUN_143aa56e0(0,"res_index",&local_f8);
  FUN_143aa37c0(local_e8,"InstalledLocales",local_d8,&local_f8);
  cVar1 = FUN_143a8b110(local_f8);
  if (cVar1 != '\0') {
    local_f0 = FUN_143aa4d80(local_d8);
    DAT_146bc5510 = FUN_143aa7a40((longlong)(local_f0 + 1) << 3);
    if (DAT_146bc5510 != 0) {
      FUN_143aa5d90(local_d8);
      while( true ) {
        cVar1 = FUN_143aa54f0(local_d8);
        if (cVar1 == '\0') break;
        local_e0 = DAT_146bc5510 + (longlong)local_f4 * 8;
        FUN_143aa4b20(local_d8,0,local_e0,&local_f8);
        local_f4 = local_f4 + 1;
      }
      *(undefined8 *)(DAT_146bc5510 + (longlong)local_f4 * 8) = 0;
      DAT_146bc5518 = local_f0;
      FUN_143aa77b0(7,FUN_143a9aa10);
    }
  }
  FUN_143aa2ef0(local_d8);
  FUN_143aa2ef0(local_e8);
  return;
}



// FUNCTION 143a9a880 FUN_143a9a880 body=364 status=ok
// SIG undefined FUN_143a9a880(void)

void FUN_143a9a880(void)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int local_48;
  ulonglong *local_30;
  ulonglong *local_28;
  
  DAT_146bc551c = FUN_143a9ab70();
  if (DAT_146bc551c != 0) {
    uVar2 = (ulonglong)DAT_146bc551c;
    if (uVar2 == 0) {
      local_30 = (ulonglong *)operator_new(8);
    }
    else {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar2;
      uVar3 = SUB168(ZEXT816(0x178) * auVar1,0);
      if (SUB168(ZEXT816(0x178) * auVar1,8) != 0) {
        uVar3 = 0xffffffffffffffff;
      }
      lVar4 = uVar3 + 8;
      if (0xfffffffffffffff7 < uVar3) {
        lVar4 = -1;
      }
      local_30 = (ulonglong *)FUN_143a8d310(lVar4);
    }
    if (local_30 == (ulonglong *)0x0) {
      local_28 = (ulonglong *)0x0;
    }
    else {
      *local_30 = uVar2;
      _eh_vector_constructor_iterator_(local_30 + 1,0x178,uVar2,FUN_143a8aad0,FUN_143a8acf0);
      local_28 = local_30 + 1;
    }
    DAT_146bc5500 = local_28;
  }
  local_48 = DAT_146bc551c;
  if (DAT_146bc5500 == (ulonglong *)0x0) {
    DAT_146bc551c = 0;
    local_48 = DAT_146bc551c;
  }
  while (local_48 = local_48 + -1, -1 < local_48) {
    uVar5 = FUN_143a9ab90(local_48);
    UDarwinGameplayFunctionLibrary::GetInSameTeam(DAT_146bc5500 + (longlong)local_48 * 0x2f,uVar5);
  }
  FUN_143aa77b0(6,FUN_143a9aab0);
  return;
}



// FUNCTION 143a9a9f0 FUN_143a9a9f0 body=17 status=ok
// SIG undefined FUN_143a9a9f0(void)

void FUN_143a9a9f0(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}



// FUNCTION 143a9aa10 FUN_143a9aa10 body=76 status=ok
// SIG undefined FUN_143a9aa10(void)

undefined8 FUN_143a9aa10(void)

{
  longlong lVar1;
  
  lVar1 = DAT_146bc5510;
  if (DAT_146bc5510 != 0) {
    DAT_146bc5510 = 0;
    DAT_146bc5518 = 0;
    FUN_143a9a9f0(&DAT_146bc5520);
    FUN_143aa79f0(lVar1);
  }
  return 1;
}



// FUNCTION 143a9aa60 FUN_143a9aa60 body=70 status=ok
// SIG undefined FUN_143a9aa60(void)

void FUN_143a9aa60(undefined8 param_1,code *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_143a910d0(param_1);
  if ((iVar2 != 2) && (cVar1 = FUN_143ab2360(param_1), cVar1 != '\0')) {
    (*param_2)();
    FUN_143ab2340(param_1);
  }
  return;
}



// FUNCTION 143a9aab0 FUN_143a9aab0 body=184 status=ok
// SIG undefined FUN_143a9aab0(void)

undefined8 FUN_143a9aab0(void)

{
  if (DAT_146bc5500 != (undefined8 *)0x0) {
    if (DAT_146bc5500 != (undefined8 *)0x0) {
      if (DAT_146bc5500[-1] == 0) {
        FMemory::operator_delete(DAT_146bc5500 + -1);
      }
      else {
        (**(code **)*DAT_146bc5500)(DAT_146bc5500,3);
      }
    }
    DAT_146bc5500 = (undefined8 *)0x0;
  }
  DAT_146bc551c = 0;
  FUN_143a9a9f0(&DAT_146bc5508);
  return 1;
}



// FUNCTION 143a9ab70 FUN_143a9ab70 body=20 status=ok
// SIG undefined FUN_143a9ab70(void)

undefined4 FUN_143a9ab70(void)

{
  _dynamic_initializer_for__ModuleRegistrantAudioCapture__();
  return DAT_146bc5518;
}



// FUNCTION 143a9ab90 FUN_143a9ab90 body=50 status=ok
// SIG undefined FUN_143a9ab90(void)

undefined8 FUN_143a9ab90(int param_1)

{
  undefined8 uVar1;
  
  _dynamic_initializer_for__ModuleRegistrantAudioCapture__();
  if (DAT_146bc5518 < param_1) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(DAT_146bc5510 + (longlong)param_1 * 8);
  }
  return uVar1;
}



// FUNCTION 143a9abd0 FUN_143a9abd0 body=60 status=ok
// SIG undefined FUN_143a9abd0(void)

undefined8 FUN_143a9abd0(undefined8 *param_1,undefined4 param_2)

{
  (*(code *)param_1[1])(*param_1,param_2);
  return 1;
}



// FUNCTION 143a9ac10 FUN_143a9ac10 body=388 status=ok
// SIG undefined FUN_143a9ac10(void)

uint FUN_143a9ac10(longlong param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
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
  if ((uVar1 & 0x10) == 0) {
    uVar2 = (uint)uVar1;
  }
  else {
    uVar2 = (int)(uint)*(ushort *)
                        (*(longlong *)(param_1 + 0x10) + (longlong)((int)(uint)uVar1 >> 5) * 2) >> 7
    ;
  }
  return uVar2 & 0x60;
}



// FUNCTION 143a9ada0 FUN_143a9ada0 body=123 status=ok
// SIG undefined FUN_143a9ada0(void)

ulonglong FUN_143a9ada0(undefined8 param_1,code *param_2,undefined8 param_3,undefined1 param_4)

{
  uint uVar1;
  ulonglong in_RAX;
  undefined1 local_res20;
  
  local_res20 = param_4;
  if (param_2 != (code *)0x0) {
    while (in_RAX = (*param_2)(param_3,local_res20), -1 < (int)in_RAX) {
      uVar1 = FUN_143a9c520(param_1,in_RAX & 0xffffffff);
      if ((uVar1 & 4) == 0) {
        if (uVar1 == 0) {
          return 0;
        }
        return 1;
      }
      local_res20 = 0;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143a9ae20 FUN_143a9ae20 body=120 status=ok
// SIG undefined FUN_143a9ae20(void)

uint FUN_143a9ae20(undefined8 param_1,code *param_2,undefined8 param_3)

{
  uint in_EAX;
  uint uVar1;
  undefined1 local_18;
  
  if (param_2 != (code *)0x0) {
    local_18 = 1;
    while (in_EAX = (*param_2)(param_3,local_18), -1 < (int)in_EAX) {
      if (in_EAX == 0x307) {
        return 0x301;
      }
      uVar1 = FUN_143a9ac10(param_1,in_EAX);
      if (uVar1 != 0x60) {
        return uVar1 & 0xffffff00;
      }
      local_18 = 0;
    }
  }
  return in_EAX & 0xffffff00;
}



// FUNCTION 143a9aea0 FUN_143a9aea0 body=117 status=ok
// SIG undefined FUN_143a9aea0(void)

uint FUN_143a9aea0(undefined8 param_1,code *param_2,undefined8 param_3)

{
  uint in_EAX;
  uint uVar1;
  undefined1 local_18;
  
  if (param_2 != (code *)0x0) {
    local_18 = 1;
    while (in_EAX = (*param_2)(param_3,local_18), -1 < (int)in_EAX) {
      uVar1 = FUN_143a9ac10(param_1,in_EAX);
      if (uVar1 == 0x40) {
        return 1;
      }
      if (uVar1 != 0x60) {
        return uVar1 & 0xffffff00;
      }
      local_18 = 0;
    }
  }
  return in_EAX & 0xffffff00;
}



// FUNCTION 143a9af20 FUN_143a9af20 body=117 status=ok
// SIG undefined FUN_143a9af20(void)

uint FUN_143a9af20(undefined8 param_1,code *param_2,undefined8 param_3)

{
  uint in_EAX;
  uint uVar1;
  undefined1 local_18;
  
  if (param_2 != (code *)0x0) {
    local_18 = 0xff;
    while (in_EAX = (*param_2)(param_3,local_18), -1 < (int)in_EAX) {
      uVar1 = FUN_143a9ac10(param_1,in_EAX);
      if (uVar1 == 0x20) {
        return 1;
      }
      if (uVar1 != 0x60) {
        return uVar1 & 0xffffff00;
      }
      local_18 = 0;
    }
  }
  return in_EAX & 0xffffff00;
}



// FUNCTION 143a9afa0 FUN_143a9afa0 body=117 status=ok
// SIG undefined FUN_143a9afa0(void)

uint FUN_143a9afa0(undefined8 param_1,code *param_2,undefined8 param_3)

{
  uint in_EAX;
  uint uVar1;
  undefined1 local_18;
  
  if (param_2 != (code *)0x0) {
    local_18 = 0xff;
    while (in_EAX = (*param_2)(param_3,local_18), -1 < (int)in_EAX) {
      if (in_EAX == 0x49) {
        return 1;
      }
      uVar1 = FUN_143a9ac10(param_1,in_EAX);
      if (uVar1 != 0x60) {
        return uVar1 & 0xffffff00;
      }
      local_18 = 0;
    }
  }
  return in_EAX & 0xffffff00;
}



// FUNCTION 143a9b020 FUN_143a9b020 body=180 status=ok
// SIG undefined FUN_143a9b020(void)

int FUN_143a9b020(ushort *param_1,int param_2,ushort *param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort *local_res8;
  int local_res10;
  ushort *local_res18;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  while( true ) {
    uVar1 = *local_res8;
    local_res8 = local_res8 + 1;
    uVar2 = *local_res18;
    local_res18 = local_res18 + 1;
    if (uVar2 == 0) {
      return 1;
    }
    iVar3 = (uint)uVar1 - (uint)uVar2;
    if (iVar3 != 0) break;
    local_res10 = local_res10 + -1;
    if (local_res10 < 1) {
      if ((param_4 - param_2 == 0) || (*local_res18 == 0)) {
        iVar3 = 0;
      }
      else {
        iVar3 = -(param_4 - param_2);
      }
      return iVar3;
    }
  }
  return iVar3;
}



// FUNCTION 143a9b0e0 FUN_143a9b0e0 body=1207 status=ok
// SIG undefined FUN_143a9b0e0(void)

uint FUN_143a9b0e0(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5,undefined8 param_6,undefined8 param_7,char param_8)

{
  ushort *puVar1;
  ushort uVar2;
  sbyte sVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint local_44;
  ushort *local_40;
  uint local_34;
  int local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  uVar6 = (int)param_2 >> 5;
  if (param_2 < 0xd800) {
    local_18 = (param_2 & 0x1f) +
               (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)uVar6 * 2) * 4;
  }
  else {
    if (param_2 < 0x10000) {
      if ((int)param_2 < 0xdc00) {
        local_14 = 0x140;
      }
      else {
        local_14 = 0;
      }
      local_10 = (param_2 & 0x1f) +
                 (uint)*(ushort *)
                        (*(longlong *)(param_1 + 0x20) + (longlong)(int)(local_14 + uVar6) * 2) * 4;
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
                                 (uVar6 & 0x3f)) * 2) * 4;
        }
        else {
          local_24 = *(int *)(param_1 + 0x50);
        }
        local_c = local_24;
      }
      else {
        local_c = *(int *)(param_1 + 0x38) + 0x80;
      }
      local_10 = local_c;
    }
    local_18 = local_10;
  }
  uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)local_18 * 2);
  if ((uVar2 & 0x10) == 0) {
    local_34 = param_2;
    if ((uVar2 & 3) == 1) {
      local_34 = param_2 + ((int)(short)uVar2 >> 7);
    }
  }
  else {
    puVar1 = (ushort *)(*(longlong *)(param_1 + 0x10) + (longlong)((int)(uint)uVar2 >> 5) * 2);
    uVar2 = *puVar1;
    if ((uVar2 & 0x4000) == 0) {
      if ((uVar2 & 0x80) != 0) {
        if ((uVar2 & 0x100) == 0) {
          local_40 = puVar1 + (ulonglong)(byte)(&DAT_145cd6df0)[(int)(uVar2 & 0x7f)] + 1;
          local_44 = (uint)*local_40;
        }
        else {
          local_40 = puVar1 + (longlong)
                              (int)((uint)(byte)(&DAT_145cd6df0)[(int)(uVar2 & 0x7f)] << 1) + 1 + 1;
          local_44 = CONCAT22(puVar1[(longlong)
                                     (int)((uint)(byte)(&DAT_145cd6df0)[(int)(uVar2 & 0x7f)] << 1) +
                                     1],*local_40);
        }
        local_40 = local_40 +
                   (longlong)(int)(local_44 & 0xf) + (longlong)(int)((int)local_44 >> 4 & 0xf) + 1;
        uVar6 = (int)local_44 >> 8;
        if (param_8 == '\0') {
          local_40 = local_40 + (int)(uVar6 & 0xf);
          uVar6 = (int)local_44 >> 0xc;
        }
        local_44 = uVar6 & 0xf;
        if (local_44 != 0) {
          *param_5 = (longlong)local_40;
          return local_44;
        }
      }
    }
    else {
      iVar5 = FUN_143a9c230(param_6,param_7);
      if ((iVar5 == 2) && (param_2 == 0x69)) {
        return 0x130;
      }
      if (((iVar5 == 3) && (param_2 == 0x307)) &&
         (cVar4 = FUN_143a9af20(param_1,param_3,param_4), cVar4 != '\0')) {
        return 0;
      }
    }
    if ((param_8 == '\0') && ((uVar2 & 8) != 0)) {
      sVar3 = 3;
    }
    else {
      if ((uVar2 & 4) == 0) {
        return ~param_2;
      }
      sVar3 = 2;
    }
    if ((uVar2 & 0x100) == 0) {
      local_34 = (uint)puVar1[(ulonglong)
                              (byte)(&DAT_145cd6df0)[(int)((uint)uVar2 & (1 << sVar3) - 1U)] + 1];
    }
    else {
      local_34 = CONCAT22(puVar1[(longlong)
                                 (int)((uint)(byte)(&DAT_145cd6df0)
                                                   [(int)((uint)uVar2 & (1 << sVar3) - 1U)] << 1) +
                                 1],
                          (puVar1 + (longlong)
                                    (int)((uint)(byte)(&DAT_145cd6df0)
                                                      [(int)((uint)uVar2 & (1 << sVar3) - 1U)] << 1)
                                    + 1)[1]);
    }
  }
  if (local_34 == param_2) {
    local_34 = ~local_34;
  }
  return local_34;
}



// FUNCTION 143a9b5a0 FUN_143a9b5a0 body=38 status=ok
// SIG undefined FUN_143a9b5a0(void)

void FUN_143a9b5a0(undefined4 param_1,undefined4 param_2)

{
  FUN_143a9bf20(&DAT_145cd6d70,param_1,param_2);
  return;
}



// FUNCTION 143a9b5d0 FUN_143a9b5d0 body=1753 status=ok
// SIG undefined FUN_143a9b5d0(void)

void FUN_143a9b5d0(longlong param_1,uint param_2,undefined8 *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  uint local_res10;
  ushort *local_50;
  uint local_48;
  int local_44;
  uint local_3c;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  ushort *local_18;
  
  if (param_2 == 0x49) {
    (*(code *)param_3[1])(*param_3,0x69);
  }
  else if (param_2 == 0x69) {
    (*(code *)param_3[1])(*param_3,0x49);
  }
  else if (param_2 == 0x130) {
    (*(code *)param_3[3])(*param_3,&DAT_145cd6048,2);
  }
  else if (param_2 != 0x131) {
    uVar5 = (int)param_2 >> 5;
    if (param_2 < 0xd800) {
      local_20 = (param_2 & 0x1f) +
                 (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)uVar5 * 2) * 4;
    }
    else {
      if (param_2 < 0x10000) {
        if ((int)param_2 < 0xdc00) {
          local_30 = 0x140;
        }
        else {
          local_30 = 0;
        }
        local_1c = (param_2 & 0x1f) +
                   (uint)*(ushort *)
                          (*(longlong *)(param_1 + 0x20) + (longlong)(int)(local_30 + uVar5) * 2) *
                   4;
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
                                   (uVar5 & 0x3f)) * 2) * 4;
          }
          else {
            local_24 = *(int *)(param_1 + 0x50);
          }
          local_28 = local_24;
        }
        else {
          local_28 = *(int *)(param_1 + 0x38) + 0x80;
        }
        local_1c = local_28;
      }
      local_20 = local_1c;
    }
    uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)local_20 * 2);
    if ((uVar2 & 0x10) == 0) {
      if (((uVar2 & 3) != 0) && ((int)(short)uVar2 >> 7 != 0)) {
        (*(code *)param_3[1])(*param_3,param_2 + ((int)(short)uVar2 >> 7));
      }
    }
    else {
      puVar1 = (ushort *)(*(longlong *)(param_1 + 0x10) + (longlong)((int)(uint)uVar2 >> 5) * 2);
      uVar2 = *puVar1;
      for (local_44 = 0; local_44 < 4; local_44 = local_44 + 1) {
        bVar6 = (byte)local_44;
        if (((uint)uVar2 & 1 << (bVar6 & 0x1f)) != 0) {
          if ((uVar2 & 0x100) == 0) {
            local_res10 = (uint)puVar1[(ulonglong)
                                       (byte)(&DAT_145cd6df0)
                                             [(int)((uint)uVar2 & (1 << (bVar6 & 0x1f)) - 1U)] + 1];
          }
          else {
            local_res10 = CONCAT22(puVar1[(longlong)
                                          (int)((uint)(byte)(&DAT_145cd6df0)
                                                            [(int)((uint)uVar2 &
                                                                  (1 << (bVar6 & 0x1f)) - 1U)] << 1)
                                          + 1],
                                   (puVar1 + (longlong)
                                             (int)((uint)(byte)(&DAT_145cd6df0)
                                                               [(int)((uint)uVar2 &
                                                                     (1 << (bVar6 & 0x1f)) - 1U)] <<
                                                  1) + 1)[1]);
          }
          (*(code *)param_3[1])(*param_3,local_res10);
        }
      }
      if ((uVar2 & 0x40) == 0) {
        local_3c = 0;
        local_18 = (ushort *)0x0;
      }
      else {
        if ((uVar2 & 0x100) == 0) {
          local_50 = puVar1 + (ulonglong)(byte)(&DAT_145cd6df0)[(int)(uVar2 & 0x3f)] + 1;
          uVar3 = *local_50;
        }
        else {
          local_50 = puVar1 + (longlong)
                              (int)((uint)(byte)(&DAT_145cd6df0)[(int)(uVar2 & 0x3f)] << 1) + 2;
          uVar3 = *local_50;
        }
        local_3c = (uint)uVar3;
        local_3c = local_3c & 0xf;
        local_18 = local_50 + 1;
      }
      if ((uVar2 & 0x80) != 0) {
        if ((uVar2 & 0x100) == 0) {
          local_50 = puVar1 + (ulonglong)(byte)(&DAT_145cd6df0)[(int)(uVar2 & 0x7f)] + 1;
          uVar2 = *local_50;
        }
        else {
          local_50 = puVar1 + (longlong)
                              (int)((uint)(byte)(&DAT_145cd6df0)[(int)(uVar2 & 0x7f)] << 1) + 2;
          uVar2 = *local_50;
        }
        local_48 = (uint)uVar2;
        local_50 = local_50 + (longlong)(int)(local_48 & 0xf) + 1;
        uVar5 = (int)local_48 >> 4 & 0xf;
        if (uVar5 != 0) {
          (*(code *)param_3[3])(*param_3,local_50,uVar5);
          local_50 = local_50 + (int)uVar5;
        }
        local_18 = local_50 +
                   (longlong)(int)((int)local_48 >> 8 & 0xf) + (longlong)((int)local_48 >> 0xc);
      }
      local_44 = 0;
      while (local_44 < (int)local_3c) {
        local_res10 = (uint)local_18[local_44];
        iVar4 = local_44 + 1;
        if ((local_res10 & 0xfffffc00) == 0xd800) {
          local_res10 = local_res10 * 0x400 + -0x35fdc00 + (uint)local_18[local_44 + 1];
          iVar4 = local_44 + 2;
        }
        local_44 = iVar4;
        (*(code *)param_3[1])(*param_3,local_res10);
      }
    }
  }
  return;
}



// FUNCTION 143a9bcb0 FUN_143a9bcb0 body=76 status=ok
// SIG undefined FUN_143a9bcb0(void)

void FUN_143a9bcb0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    FUN_143ac2b60(param_1 + 0x20,0,FUN_143a9abd0,param_2);
  }
  return;
}



// FUNCTION 143a9bd00 FUN_143a9bd00 body=531 status=ok
// SIG undefined FUN_143a9bd00(void)

longlong FUN_143a9bd00(longlong param_1,longlong param_2,int param_3,undefined8 *param_4)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint7 uVar8;
  longlong lVar6;
  ulonglong uVar7;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_38;
  
  uVar8 = (uint7)((ulonglong)param_1 >> 8);
  if ((*(longlong *)(param_1 + 0x18) == 0) || (param_2 == 0)) {
    lVar6 = (ulonglong)uVar8 << 8;
  }
  else if (param_3 < 2) {
    lVar6 = (ulonglong)uVar8 << 8;
  }
  else {
    puVar2 = *(ushort **)(param_1 + 0x18);
    uVar3 = (uint)puVar2[1];
    local_48 = (uint)puVar2[2];
    if ((int)local_48 < param_3) {
      lVar6 = (ulonglong)(byte)(puVar2[2] >> 8) << 8;
    }
    else {
      local_38 = 0;
      uVar4 = (uint)*puVar2;
      while (local_40 = uVar4, local_38 < (int)local_40) {
        uVar4 = (int)(local_38 + local_40) / 2;
        puVar1 = puVar2 + (longlong)(int)uVar3 + (longlong)(int)(uVar4 * uVar3);
        iVar5 = FUN_143a9b020(param_2,param_3,puVar1,local_48);
        if (iVar5 == 0) {
          while ((uVar7 = (ulonglong)uVar3, (int)local_48 < (int)uVar3 &&
                 (uVar7 = (ulonglong)puVar1[(int)local_48], puVar1[(int)local_48] != 0))) {
            local_44 = (uint)puVar1[(int)local_48];
            uVar4 = local_48 + 1;
            if ((local_44 & 0xfffffc00) == 0xd800) {
              local_44 = local_44 * 0x400 + -0x35fdc00 + (uint)puVar1[(int)(local_48 + 1)];
              uVar4 = local_48 + 2;
            }
            local_48 = uVar4;
            (*(code *)param_4[1])(*param_4,local_44);
            FUN_143a9b5d0(param_1,local_44,param_4);
          }
          return CONCAT71((int7)(uVar7 >> 8),1);
        }
        if (-1 < iVar5) {
          local_38 = uVar4 + 1;
          uVar4 = local_40;
        }
      }
      lVar6 = (ulonglong)(uint3)(local_40 >> 8) << 8;
    }
  }
  return lVar6;
}



// FUNCTION 143a9bf20 FUN_143a9bf20 body=767 status=ok
// SIG undefined FUN_143a9bf20(void)

uint FUN_143a9bf20(longlong param_1,uint param_2,char param_3)

{
  ushort *puVar1;
  ushort uVar2;
  sbyte sVar3;
  uint uVar4;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  uVar4 = (int)param_2 >> 5;
  if (param_2 < 0xd800) {
    local_1c = (param_2 & 0x1f) +
               (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)uVar4 * 2) * 4;
  }
  else {
    if (param_2 < 0x10000) {
      if ((int)param_2 < 0xdc00) {
        local_14 = 0x140;
      }
      else {
        local_14 = 0;
      }
      local_20 = (param_2 & 0x1f) +
                 (uint)*(ushort *)
                        (*(longlong *)(param_1 + 0x20) + (longlong)(int)(local_14 + uVar4) * 2) * 4;
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
        local_18 = local_24;
      }
      else {
        local_18 = *(int *)(param_1 + 0x38) + 0x80;
      }
      local_20 = local_18;
    }
    local_1c = local_20;
  }
  uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)local_1c * 2);
  if ((uVar2 & 0x10) == 0) {
    if ((uVar2 & 3) < 2) {
      return param_2;
    }
    return param_2 + ((int)(short)uVar2 >> 7);
  }
  puVar1 = (ushort *)(*(longlong *)(param_1 + 0x10) + (longlong)((int)(uint)uVar2 >> 5) * 2);
  uVar2 = *puVar1;
  if ((uVar2 & 0x8000) != 0) {
    if (param_3 == '\0') {
      if (param_2 == 0x49) {
        return 0x69;
      }
      if (param_2 == 0x130) {
        return 0x130;
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
  }
  if ((uVar2 & 2) == 0) {
    if ((uVar2 & 1) == 0) {
      return param_2;
    }
    sVar3 = 0;
  }
  else {
    sVar3 = 1;
  }
  if ((uVar2 & 0x100) == 0) {
    uVar4 = (uint)puVar1[(ulonglong)(byte)(&DAT_145cd6df0)[(int)((uint)uVar2 & (1 << sVar3) - 1U)] +
                         1];
  }
  else {
    uVar4 = CONCAT22(puVar1[(longlong)
                            (int)((uint)(byte)(&DAT_145cd6df0)
                                              [(int)((uint)uVar2 & (1 << sVar3) - 1U)] << 1) + 1],
                     (puVar1 + (longlong)
                               (int)((uint)(byte)(&DAT_145cd6df0)
                                                 [(int)((uint)uVar2 & (1 << sVar3) - 1U)] << 1) + 1)
                     [1]);
  }
  return uVar4;
}


