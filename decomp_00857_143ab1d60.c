// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143ab1d60 FUN_143ab1d60 body=102 status=ok
// SIG undefined FUN_143ab1d60(void)

void FUN_143ab1d60(undefined8 *param_1)

{
  *param_1 = icu_53::StringEnumeration::vftable;
  if ((param_1[10] != 0) && ((undefined8 *)param_1[10] != param_1 + 6)) {
    FUN_143aa79f0(param_1[10]);
  }
  FUN_143a8dc60(param_1 + 1);
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143ab1dd0 FUN_143ab1dd0 body=60 status=ok
// SIG undefined FUN_143ab1dd0(void)

void FUN_143ab1dd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _guard_xfg_dispatch_icall_nop(param_2);
  uVar2 = _guard_xfg_dispatch_icall_nop(param_1);
  FUN_143ab1e10(uVar2,uVar1);
  return;
}



// FUNCTION 143ab1e10 FUN_143ab1e10 body=73 status=ok
// SIG undefined FUN_143ab1e10(void)

bool FUN_143ab1e10(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = __std_type_info_compare(param_1 + 8,param_2 + 8);
  return iVar1 == 0;
}



// FUNCTION 143ab1e60 FUN_143ab1e60 body=64 status=ok
// SIG undefined FUN_143ab1e60(void)

bool FUN_143ab1e60(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x40))(param_1,param_2);
  return cVar1 == '\0';
}



// FUNCTION 143ab1ea0 FUN_143ab1ea0 body=54 status=ok
// SIG undefined FUN_143ab1ea0(void)

undefined8 FUN_143ab1ea0(undefined8 param_1,uint param_2)

{
  FUN_143ab1d60(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143ab1ee0 FUN_143ab1ee0 body=239 status=ok
// SIG undefined FUN_143ab1ee0(void)

void FUN_143ab1ee0(longlong param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_res10;
  
  cVar1 = FUN_143a8b110(*param_3);
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0x58) < param_2)) {
    local_res10 = param_2;
    if (param_2 < *(int *)(param_1 + 0x58) / 2 + *(int *)(param_1 + 0x58)) {
      local_res10 = *(int *)(param_1 + 0x58) / 2 + *(int *)(param_1 + 0x58);
    }
    if (*(longlong *)(param_1 + 0x50) != param_1 + 0x30) {
      FUN_143aa79f0(*(undefined8 *)(param_1 + 0x50));
    }
    uVar2 = FUN_143aa7a40((longlong)local_res10);
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    if (*(longlong *)(param_1 + 0x50) == 0) {
      *(longlong *)(param_1 + 0x50) = param_1 + 0x30;
      *(undefined4 *)(param_1 + 0x58) = 0x20;
      *param_3 = 7;
    }
    else {
      *(int *)(param_1 + 0x58) = local_res10;
    }
  }
  return;
}



// FUNCTION 143ab1fd0 FUN_143ab1fd0 body=261 status=ok
// SIG undefined FUN_143ab1fd0(void)

longlong FUN_143ab1fd0(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  lVar4 = (**(code **)(*param_1 + 0x30))(param_1,param_3);
  cVar1 = FUN_143a8b110(*param_3);
  if ((cVar1 != '\0') && (lVar4 != 0)) {
    FUN_143a8dcd0(param_1 + 1,lVar4);
    iVar2 = FUN_143a904f0(param_1 + 1);
    FUN_143ab1ee0(param_1,iVar2 + 1,param_3);
    cVar1 = FUN_143a8b110(*param_3);
    if (cVar1 != '\0') {
      if (param_2 != (undefined4 *)0x0) {
        uVar3 = FUN_143a904f0(param_1 + 1);
        *param_2 = uVar3;
      }
      FUN_143a8f880(param_1 + 1,0,0x7fffffff,param_1[10],(int)param_1[0xb],0);
      return param_1[10];
    }
  }
  return 0;
}



// FUNCTION 143ab20e0 FUN_143ab20e0 body=201 status=ok
// SIG undefined FUN_143ab20e0(void)

longlong FUN_143ab20e0(longlong param_1,char *param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  size_t sVar2;
  longlong lVar3;
  int local_res18;
  
  cVar1 = FUN_143a8b110(*param_4);
  if ((cVar1 != '\0') && (param_2 != (char *)0x0)) {
    local_res18 = param_3;
    if (param_3 < 0) {
      sVar2 = _guard_xfg_dispatch_icall_nop(param_2);
      local_res18 = (int)sVar2;
    }
    lVar3 = FUN_143a8fd90(param_1 + 8,local_res18 + 1);
    if (lVar3 != 0) {
      FUN_143ab5820(param_2,lVar3,local_res18);
      *(undefined2 *)(lVar3 + (longlong)local_res18 * 2) = 0;
      FUN_143a90820(param_1 + 8,local_res18);
      return param_1 + 8;
    }
    *param_4 = 7;
  }
  return 0;
}



// FUNCTION 143ab21b0 FUN_143ab21b0 body=80 status=ok
// SIG undefined FUN_143ab21b0(void)

void FUN_143ab21b0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_143a91100(param_1);
  uVar1 = FUN_143a904f0(param_1);
  FUN_143a8f0d0(param_1,0,uVar1,param_2,0,param_3);
  return;
}



// FUNCTION 143ab2200 FUN_143ab2200 body=75 status=ok
// SIG undefined FUN_143ab2200(void)

void FUN_143ab2200(longlong *param_1,undefined8 param_2)

{
  undefined4 local_18 [2];
  undefined8 local_10;
  
  local_10 = (**(code **)(*param_1 + 0x20))(param_1,local_18,param_2);
  FUN_143ab20e0(param_1,local_10,local_18[0],param_2);
  return;
}



// FUNCTION 143ab2250 FUN_143ab2250 body=152 status=ok
// SIG undefined FUN_143ab2250(void)

undefined8 FUN_143ab2250(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = (**(code **)(*param_1 + 0x30))(param_1,param_3);
  cVar1 = FUN_143a8b110(*param_3);
  if ((cVar1 == '\0') || (lVar3 == 0)) {
    uVar4 = 0;
  }
  else {
    FUN_143a8dcd0(param_1 + 1,lVar3);
    if (param_2 != (undefined4 *)0x0) {
      uVar2 = FUN_143a904f0(param_1 + 1);
      *param_2 = uVar2;
    }
    uVar4 = FUN_143a8ffc0(param_1 + 1);
  }
  return uVar4;
}



// FUNCTION 143ab22f0 FUN_143ab22f0 body=80 status=ok
// SIG undefined FUN_143ab22f0(void)

void FUN_143ab22f0(undefined8 param_1,code *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_143a910d0(param_1);
  if ((iVar2 != 2) && (cVar1 = FUN_143ab2360(param_1), cVar1 != '\0')) {
    (*param_2)(param_3);
    FUN_143ab2340(param_1);
  }
  return;
}



// FUNCTION 143ab2340 FUN_143ab2340 body=32 status=ok
// SIG undefined FUN_143ab2340(void)

void FUN_143ab2340(undefined8 param_1)

{
  FUN_143ab23d0(param_1,2);
  return;
}



// FUNCTION 143ab2360 FUN_143ab2360 body=108 status=ok
// SIG undefined FUN_143ab2360(void)

longlong FUN_143ab2360(uint *param_1)

{
  int iVar1;
  ulonglong uVar2;
  uint7 uVar3;
  
  while( true ) {
    uVar2 = 0;
    LOCK();
    if (*param_1 == 0) {
      *param_1 = 1;
    }
    else {
      uVar2 = (ulonglong)*param_1;
    }
    UNLOCK();
    uVar3 = (uint7)(uVar2 >> 8);
    if ((int)uVar2 == 0) break;
    if ((int)uVar2 == 2) {
      return (ulonglong)uVar3 << 8;
    }
    do {
      Sleep(1);
      iVar1 = FUN_143a910d0(param_1);
    } while (iVar1 == 1);
  }
  return CONCAT71(uVar3,1);
}



// FUNCTION 143ab23d0 FUN_143ab23d0 body=21 status=ok
// SIG undefined FUN_143ab23d0(void)

undefined4 FUN_143ab23d0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  LOCK();
  uVar1 = *param_1;
  *param_1 = param_2;
  UNLOCK();
  return uVar1;
}



// FUNCTION 143ab23f0 FreeLib body=25 status=ok
// SIG undefined FreeLib(void)

void FreeLib(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  return;
}



// FUNCTION 143ab2410 FUN_143ab2410 body=84 status=ok
// SIG undefined FUN_143ab2410(void)

void FUN_143ab2410(undefined *param_1)

{
  undefined *local_res8;
  
  local_res8 = param_1;
  if (param_1 == (undefined *)0x0) {
    local_res8 = &DAT_146bc56a0;
  }
  FUN_143ab22f0(local_res8,FreeLib,(LPCRITICAL_SECTION)(local_res8 + 8));
  EnterCriticalSection((LPCRITICAL_SECTION)(local_res8 + 8));
  return;
}



// FUNCTION 143ab2470 FUN_143ab2470 body=52 status=ok
// SIG undefined FUN_143ab2470(void)

void FUN_143ab2470(undefined *param_1)

{
  undefined *local_res8;
  
  local_res8 = param_1;
  if (param_1 == (undefined *)0x0) {
    local_res8 = &DAT_146bc56a0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(local_res8 + 8));
  return;
}



// FUNCTION 143ab24b0 FUN_143ab24b0 body=339 status=ok
// SIG undefined FUN_143ab24b0(void)

void FUN_143ab24b0(longlong *param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined1 local_res10;
  undefined4 *local_28;
  
  if (*param_3 < 1) {
    local_res10 = (undefined1)param_2;
    *(undefined1 *)(param_1 + 9) = local_res10;
    *(undefined4 *)((longlong)param_1 + 0x34) =
         *(undefined4 *)(&DAT_145cf0f10 + (longlong)param_2 * 4);
    local_28 = (undefined4 *)FUN_143aa7a40((longlong)*(int *)((longlong)param_1 + 0x34) * 0x18);
    *param_1 = (longlong)local_28;
    if (*param_1 == 0) {
      *param_3 = 7;
    }
    else {
      puVar1 = local_28 + (longlong)*(int *)((longlong)param_1 + 0x34) * 6;
      for (; local_28 < puVar1; local_28 = local_28 + 6) {
        *(undefined8 *)(local_28 + 4) = 0;
        *(undefined8 *)(local_28 + 2) = 0;
        *local_28 = 0x80000001;
      }
      *(undefined4 *)(param_1 + 6) = 0;
      *(int *)((longlong)param_1 + 0x3c) =
           (int)((float)*(int *)((longlong)param_1 + 0x34) * *(float *)((longlong)param_1 + 0x44));
      *(int *)(param_1 + 7) =
           (int)((float)*(int *)((longlong)param_1 + 0x34) * *(float *)(param_1 + 8));
    }
  }
  return;
}



// FUNCTION 143ab2610 FUN_143ab2610 body=162 status=ok
// SIG undefined FUN_143ab2610(void)

longlong FUN_143ab2610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      int *param_5)

{
  longlong lVar1;
  
  if (*param_5 < 1) {
    lVar1 = FUN_143aa7a40(0x50);
    if (lVar1 == 0) {
      *param_5 = 7;
      lVar1 = 0;
    }
    else {
      FUN_143ab2830(lVar1,param_1,param_2,param_3,param_4,param_5);
      *(undefined1 *)(lVar1 + 0x49) = 1;
      if (0 < *param_5) {
        FUN_143aa79f0(lVar1);
        lVar1 = 0;
      }
    }
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 143ab26c0 FUN_143ab26c0 body=361 status=ok
// SIG undefined FUN_143ab26c0(void)

longlong FUN_143ab26c0(longlong *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int local_28;
  int local_24;
  int local_1c;
  
  local_24 = -1;
  local_1c = 0;
  lVar2 = *param_1;
  param_3 = param_3 & 0x7fffffff;
  iVar4 = (int)(param_3 ^ 0x4000000) % *(int *)((longlong)param_1 + 0x34);
  local_28 = iVar4;
  do {
    uVar1 = *(uint *)(lVar2 + (longlong)local_28 * 0x18);
    if (uVar1 == param_3) {
      cVar3 = (*(code *)param_1[2])
                        (param_2,*(undefined8 *)(lVar2 + 0x10 + (longlong)local_28 * 0x18));
      if (cVar3 != '\0') {
        return lVar2 + (longlong)local_28 * 0x18;
      }
    }
    else if ((int)uVar1 < 0) {
      if (uVar1 == 0x80000001) break;
      if (local_24 < 0) {
        local_24 = local_28;
      }
    }
    if (local_1c == 0) {
      local_1c = (int)param_3 % (*(int *)((longlong)param_1 + 0x34) + -1) + 1;
    }
    local_28 = (local_28 + local_1c) % *(int *)((longlong)param_1 + 0x34);
  } while (local_28 != iVar4);
  if (local_24 < 0) {
    if (uVar1 != 0x80000001) {
      return 0;
    }
  }
  else {
    local_28 = local_24;
  }
  return lVar2 + (longlong)local_28 * 0x18;
}



// FUNCTION 143ab2830 FUN_143ab2830 body=170 status=ok
// SIG undefined FUN_143ab2830(void)

longlong FUN_143ab2830(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined4 param_5,int *param_6)

{
  if (*param_6 < 1) {
    *(undefined8 *)(param_1 + 8) = param_2;
    *(undefined8 *)(param_1 + 0x10) = param_3;
    *(undefined8 *)(param_1 + 0x18) = param_4;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x49) = 0;
    FUN_143ab2940(param_1,0);
    FUN_143ab24b0(param_1,param_5,param_6);
    if (0 < *param_6) {
      param_1 = 0;
    }
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



// FUNCTION 143ab28e0 FUN_143ab28e0 body=95 status=ok
// SIG undefined FUN_143ab28e0(void)

void FUN_143ab28e0(longlong param_1,undefined8 param_2)

{
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  FUN_143ab2d80(param_1,param_2,0x80000000,0,0,0);
  return;
}



// FUNCTION 143ab2940 FUN_143ab2940 body=72 status=ok
// SIG undefined FUN_143ab2940(void)

void FUN_143ab2940(longlong param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(&DAT_145cf0f80 + (longlong)(param_2 * 2) * 4);
  *(undefined4 *)(param_1 + 0x40) =
       *(undefined4 *)(&DAT_145cf0f80 + (longlong)(param_2 * 2 + 1) * 4);
  return;
}



// FUNCTION 143ab2990 FUN_143ab2990 body=403 status=ok
// SIG undefined FUN_143ab2990(void)

undefined8
FUN_143ab2990(longlong param_1,longlong param_2,longlong param_3,byte param_4,int *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar3;
  
  if (*param_5 < 1) {
    if (((param_4 & 2) != 0) && (param_3 == 0)) {
      uVar2 = FUN_143ab2ce0(param_1,param_2);
      return uVar2;
    }
    if ((*(int *)(param_1 + 0x30) <= *(int *)(param_1 + 0x38)) ||
       (FUN_143ab2b30(param_1,param_5), *param_5 < 1)) {
      uVar1 = (**(code **)(param_1 + 8))(param_2);
      piVar3 = (int *)FUN_143ab26c0(param_1,param_2,uVar1);
      if ((-1 < *piVar3) ||
         (*(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1,
         *(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x34))) {
        uVar2 = FUN_143ab2d80(param_1,piVar3,uVar1 & 0x7fffffff,param_2,param_3,param_4);
        return uVar2;
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
      *param_5 = 7;
    }
  }
  if ((*(longlong *)(param_1 + 0x20) != 0) && (param_2 != 0)) {
    (**(code **)(param_1 + 0x20))(param_2);
  }
  if ((*(longlong *)(param_1 + 0x28) != 0) && (param_3 != 0)) {
    (**(code **)(param_1 + 0x28))(param_3);
  }
  return 0;
}



// FUNCTION 143ab2b30 FUN_143ab2b30 body=431 status=ok
// SIG undefined FUN_143ab2b30(void)

void FUN_143ab2b30(longlong *param_1,int *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int local_28;
  uint local_24;
  
  lVar1 = *param_1;
  local_28 = *(int *)((longlong)param_1 + 0x34);
  if ((int)param_1[7] < (int)param_1[6]) {
    local_24 = (int)(char)param_1[9] + 1;
    if (0x1b < local_24) {
      return;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x3c) <= (int)param_1[6]) {
      return;
    }
    local_24 = (int)(char)param_1[9] - 1;
    if ((int)local_24 < 0) {
      return;
    }
  }
  FUN_143ab24b0(param_1,local_24,param_2);
  if (*param_2 < 1) {
    while (local_28 = local_28 + -1, -1 < local_28) {
      if (-1 < *(int *)(lVar1 + (longlong)local_28 * 0x18)) {
        puVar2 = (undefined4 *)
                 FUN_143ab26c0(param_1,*(undefined8 *)(lVar1 + 0x10 + (longlong)local_28 * 0x18),
                               *(undefined4 *)(lVar1 + (longlong)local_28 * 0x18));
        *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(lVar1 + 0x10 + (longlong)local_28 * 0x18);
        *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(lVar1 + 8 + (longlong)local_28 * 0x18);
        *puVar2 = *(undefined4 *)(lVar1 + (longlong)local_28 * 0x18);
        *(int *)(param_1 + 6) = (int)param_1[6] + 1;
      }
    }
    FUN_143aa79f0(lVar1);
  }
  else {
    *param_1 = lVar1;
    *(int *)((longlong)param_1 + 0x34) = local_28;
  }
  return;
}



// FUNCTION 143ab2ce0 FUN_143ab2ce0 body=148 status=ok
// SIG undefined FUN_143ab2ce0(void)

undefined8 FUN_143ab2ce0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 local_28 [2];
  undefined8 local_20;
  int *local_18;
  
  uVar1 = (**(code **)(param_1 + 8))(param_2);
  local_18 = (int *)FUN_143ab26c0(param_1,param_2,uVar1);
  local_20 = 0;
  if (-1 < *local_18) {
    local_20 = FUN_143ab28e0(param_1,local_18);
    if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x3c)) {
      local_28[0] = 0;
      FUN_143ab2b30(param_1,local_28);
    }
  }
  return local_20;
}



// FUNCTION 143ab2d80 FUN_143ab2d80 body=254 status=ok
// SIG undefined FUN_143ab2d80(void)

longlong FUN_143ab2d80(longlong param_1,undefined4 *param_2,undefined4 param_3,longlong param_4,
                      longlong param_5,byte param_6)

{
  longlong local_18;
  
  local_18 = *(longlong *)(param_2 + 2);
  if (((*(longlong *)(param_1 + 0x20) != 0) && (*(longlong *)(param_2 + 4) != 0)) &&
     (*(longlong *)(param_2 + 4) != param_4)) {
    (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_2 + 4));
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    if ((local_18 != 0) && (local_18 != param_5)) {
      (**(code **)(param_1 + 0x28))(local_18);
    }
    local_18 = 0;
  }
  if ((param_6 & 1) == 0) {
    *(longlong *)(param_2 + 4) = param_4;
  }
  else {
    *(longlong *)(param_2 + 4) = param_4;
  }
  if ((param_6 & 2) == 0) {
    *(longlong *)(param_2 + 2) = param_5;
  }
  else {
    *(longlong *)(param_2 + 2) = param_5;
  }
  *param_2 = param_3;
  return local_18;
}



// FUNCTION 143ab2e80 FUN_143ab2e80 body=234 status=ok
// SIG undefined FUN_143ab2e80(void)

void FUN_143ab2e80(longlong *param_1)

{
  undefined4 local_18 [2];
  longlong local_10;
  
  if (param_1 != (longlong *)0x0) {
    if (*param_1 != 0) {
      if ((param_1[4] != 0) || (param_1[5] != 0)) {
        local_18[0] = 0xffffffff;
        while (local_10 = FUN_143ab3590(param_1,local_18), local_10 != 0) {
          if ((param_1[4] != 0) && (*(longlong *)(local_10 + 0x10) != 0)) {
            (*(code *)param_1[4])(*(undefined8 *)(local_10 + 0x10));
          }
          if ((param_1[5] != 0) && (*(longlong *)(local_10 + 8) != 0)) {
            (*(code *)param_1[5])(*(undefined8 *)(local_10 + 8));
          }
        }
      }
      FUN_143aa79f0(*param_1);
      *param_1 = 0;
    }
    if (*(char *)((longlong)param_1 + 0x49) != '\0') {
      FUN_143aa79f0(param_1);
    }
  }
  return;
}



// FUNCTION 143ab2f70 FUN_143ab2f70 body=169 status=ok
// SIG undefined FUN_143ab2f70(void)

bool FUN_143ab2f70(char *param_1,char *param_2)

{
  bool bVar1;
  char *local_20;
  char *local_18;
  
  if (param_1 == param_2) {
    bVar1 = true;
  }
  else if ((param_1 == (char *)0x0) ||
          (local_20 = param_1, local_18 = param_2, param_2 == (char *)0x0)) {
    bVar1 = false;
  }
  else {
    for (; (*local_20 != '\0' && (*local_20 == *local_18)); local_20 = local_20 + 1) {
      local_18 = local_18 + 1;
    }
    bVar1 = *local_20 == *local_18;
  }
  return bVar1;
}



// FUNCTION 143ab3020 FUN_143ab3020 body=43 status=ok
// SIG undefined FUN_143ab3020(void)

bool FUN_143ab3020(int param_1,int param_2)

{
  return param_1 == param_2;
}



// FUNCTION 143ab3050 FUN_143ab3050 body=171 status=ok
// SIG undefined FUN_143ab3050(void)

bool FUN_143ab3050(short *param_1,short *param_2)

{
  bool bVar1;
  short *local_20;
  short *local_18;
  
  if (param_1 == param_2) {
    bVar1 = true;
  }
  else if ((param_1 == (short *)0x0) ||
          (local_20 = param_1, local_18 = param_2, param_2 == (short *)0x0)) {
    bVar1 = false;
  }
  else {
    for (; (*local_20 != 0 && (*local_20 == *local_18)); local_20 = local_20 + 1) {
      local_18 = local_18 + 1;
    }
    bVar1 = *local_20 == *local_18;
  }
  return bVar1;
}



// FUNCTION 143ab3100 FUN_143ab3100 body=14 status=ok
// SIG undefined FUN_143ab3100(void)

undefined4 FUN_143ab3100(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// FUNCTION 143ab3110 FUN_143ab3110 body=334 status=ok
// SIG undefined FUN_143ab3110(void)

undefined8 FUN_143ab3110(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int local_48;
  undefined4 local_3c;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_1 == param_2) {
    uVar5 = 1;
  }
  else if ((((param_1 == 0) || (param_2 == 0)) ||
           (*(longlong *)(param_1 + 0x10) != *(longlong *)(param_2 + 0x10))) ||
          ((*(longlong *)(param_1 + 0x18) != *(longlong *)(param_2 + 0x18) ||
           (*(longlong *)(param_1 + 0x18) == 0)))) {
    uVar5 = 0;
  }
  else {
    iVar2 = FUN_143ab3100(param_1);
    iVar3 = FUN_143ab3100(param_2);
    if (iVar2 == iVar3) {
      local_3c = 0xffffffff;
      for (local_48 = 0; local_48 < iVar2; local_48 = local_48 + 1) {
        local_38 = FUN_143ab3590(param_1,&local_3c);
        local_30 = *(undefined8 *)(local_38 + 0x10);
        local_18 = *(undefined8 *)(local_38 + 8);
        uVar4 = (**(code **)(param_2 + 8))(local_30);
        local_28 = FUN_143ab26c0(param_2,local_30,uVar4);
        local_20 = *(undefined8 *)(local_28 + 8);
        cVar1 = (**(code **)(param_1 + 0x18))(local_18,local_20);
        if (cVar1 == '\0') {
          return 0;
        }
      }
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}



// FUNCTION 143ab3260 FUN_143ab3260 body=101 status=ok
// SIG undefined FUN_143ab3260(void)

int * FUN_143ab3260(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int *local_18;
  
  uVar1 = (**(code **)(param_1 + 8))(param_2);
  local_18 = (int *)FUN_143ab26c0(param_1,param_2,uVar1);
  if (*local_18 < 0) {
    local_18 = (int *)0x0;
  }
  return local_18;
}



// FUNCTION 143ab32d0 FUN_143ab32d0 body=64 status=ok
// SIG undefined FUN_143ab32d0(void)

undefined8 FUN_143ab32d0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(param_1 + 8))(param_2);
  lVar2 = FUN_143ab26c0(param_1,param_2,uVar1);
  return *(undefined8 *)(lVar2 + 8);
}



// FUNCTION 143ab3310 FUN_143ab3310 body=63 status=ok
// SIG undefined FUN_143ab3310(void)

undefined4 FUN_143ab3310(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(param_1 + 8))(param_2);
  lVar2 = FUN_143ab26c0(param_1,param_2,uVar1);
  return *(undefined4 *)(lVar2 + 8);
}



// FUNCTION 143ab3350 FUN_143ab3350 body=72 status=ok
// SIG undefined FUN_143ab3350(void)

undefined4 FUN_143ab3350(char *param_1)

{
  size_t sVar1;
  undefined4 local_18;
  
  if (param_1 == (char *)0x0) {
    local_18 = 0;
  }
  else {
    sVar1 = _guard_xfg_dispatch_icall_nop(param_1);
    local_18 = FUN_143ab53d0(param_1,sVar1 & 0xffffffff);
  }
  return local_18;
}



// FUNCTION 143ab33a0 FUN_143ab33a0 body=10 status=ok
// SIG undefined FUN_143ab33a0(void)

undefined4 FUN_143ab33a0(undefined4 param_1)

{
  return param_1;
}



// FUNCTION 143ab33b0 FUN_143ab33b0 body=72 status=ok
// SIG undefined FUN_143ab33b0(void)

undefined4 FUN_143ab33b0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 local_18;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else {
    uVar1 = FreeLib(param_1);
    local_18 = FUN_143ab5470(param_1,uVar1);
  }
  return local_18;
}



// FUNCTION 143ab3400 FUN_143ab3400 body=61 status=ok
// SIG undefined FUN_143ab3400(void)

undefined8 FUN_143ab3400(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uStack_14;
  
  uVar1 = (**(code **)(param_1 + 8))(CONCAT44(uStack_14,param_2));
  lVar2 = FUN_143ab26c0(param_1,CONCAT44(uStack_14,param_2),uVar1);
  return *(undefined8 *)(lVar2 + 8);
}



// FUNCTION 143ab3440 FUN_143ab3440 body=60 status=ok
// SIG undefined FUN_143ab3440(void)

undefined4 FUN_143ab3440(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uStack_14;
  
  uVar1 = (**(code **)(param_1 + 8))(CONCAT44(uStack_14,param_2));
  lVar2 = FUN_143ab26c0(param_1,CONCAT44(uStack_14,param_2),uVar1);
  return *(undefined4 *)(lVar2 + 8);
}



// FUNCTION 143ab3480 FUN_143ab3480 body=72 status=ok
// SIG undefined FUN_143ab3480(void)

void FUN_143ab3480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_143ab2830(param_1,param_2,param_3,param_4,3,param_5);
  return;
}



// FUNCTION 143ab34d0 FUN_143ab34d0 body=89 status=ok
// SIG undefined FUN_143ab34d0(void)

undefined8
FUN_143ab34d0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uStack_1c;
  
  uVar1 = FUN_143ab2990(param_1,CONCAT44(uStack_1c,param_2),param_3,2,param_4);
  return uVar1;
}



// FUNCTION 143ab3530 FUN_143ab3530 body=86 status=ok
// SIG undefined FUN_143ab3530(void)

undefined4
FUN_143ab3530(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  
  uVar1 = FUN_143ab2990(param_1,CONCAT44(uStack_1c,param_2),CONCAT44(uStack_24,param_3),0,param_4);
  return uVar1;
}



// FUNCTION 143ab3590 FUN_143ab3590 body=108 status=ok
// SIG undefined FUN_143ab3590(void)

longlong FUN_143ab3590(longlong *param_1,int *param_2)

{
  int local_18;
  
  local_18 = *param_2;
  do {
    local_18 = local_18 + 1;
    if (*(int *)((longlong)param_1 + 0x34) <= local_18) {
      return 0;
    }
  } while (*(int *)(*param_1 + (longlong)local_18 * 0x18) < 0);
  *param_2 = local_18;
  return (longlong)local_18 * 0x18 + *param_1;
}



// FUNCTION 143ab3600 FUN_143ab3600 body=116 status=ok
// SIG undefined FUN_143ab3600(void)

void FUN_143ab3600(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5)

{
  uint local_18;
  
  local_18 = 0;
  while ((local_18 < 0x1b && (*(int *)(&DAT_145cf0f10 + (longlong)(int)local_18 * 4) < param_4))) {
    local_18 = local_18 + 1;
  }
  FUN_143ab2610(param_1,param_2,param_3,local_18,param_5);
  return;
}



// FUNCTION 143ab3680 FUN_143ab3680 body=65 status=ok
// SIG undefined FUN_143ab3680(void)

void FUN_143ab3680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143ab2610(param_1,param_2,param_3,3,param_4);
  return;
}



// FUNCTION 143ab36d0 FUN_143ab36d0 body=92 status=ok
// SIG undefined FUN_143ab36d0(void)

undefined8
FUN_143ab36d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143ab2990(param_1,param_2,param_3,3,param_4);
  return uVar1;
}



// FUNCTION 143ab3730 FUN_143ab3730 body=89 status=ok
// SIG undefined FUN_143ab3730(void)

undefined4
FUN_143ab3730(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uStack_24;
  
  uVar1 = FUN_143ab2990(param_1,param_2,CONCAT44(uStack_24,param_3),1,param_4);
  return uVar1;
}



// FUNCTION 143ab3790 FUN_143ab3790 body=78 status=ok
// SIG undefined FUN_143ab3790(void)

void FUN_143ab3790(longlong param_1)

{
  undefined4 local_18 [2];
  longlong local_10;
  
  local_18[0] = 0xffffffff;
  if (*(int *)(param_1 + 0x30) != 0) {
    while( true ) {
      local_10 = FUN_143ab3590(param_1,local_18);
      if (local_10 == 0) break;
      FUN_143ab37e0(param_1,local_10);
    }
  }
  return;
}



// FUNCTION 143ab37e0 FUN_143ab37e0 body=68 status=ok
// SIG undefined FUN_143ab37e0(void)

undefined8 FUN_143ab37e0(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_143ab28e0(param_1,param_2);
  }
  return uVar1;
}



// FUNCTION 143ab3830 FUN_143ab3830 body=54 status=ok
// SIG undefined FUN_143ab3830(void)

undefined8 FUN_143ab3830(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143ab2ce0(param_1,param_2);
  return uVar1;
}



// FUNCTION 143ab3870 precision body=50 status=ok
// SIG __int64 precision(ios_base * this, __int64 param_1)

/* Library Function - Single Match
    public: __int64 __cdecl std::ios_base::precision(__int64) __ptr64
   
   Library: Visual Studio */

__int64 __thiscall std::ios_base::precision(ios_base *this,__int64 param_1)

{
  __int64 _Var1;
  
  _Var1 = *(__int64 *)(this + 0x20);
  *(__int64 *)(this + 0x20) = param_1;
  return _Var1;
}



// FUNCTION 143ab38b0 FUN_143ab38b0 body=50 status=ok
// SIG undefined FUN_143ab38b0(void)

undefined8 FUN_143ab38b0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return uVar1;
}



// FUNCTION 143ab38f0 width body=50 status=ok
// SIG __int64 width(ios_base * this, __int64 param_1)

/* Library Function - Single Match
    public: __int64 __cdecl std::ios_base::width(__int64) __ptr64
   
   Library: Visual Studio */

__int64 __thiscall std::ios_base::width(ios_base *this,__int64 param_1)

{
  __int64 _Var1;
  
  _Var1 = *(__int64 *)(this + 0x28);
  *(__int64 *)(this + 0x28) = param_1;
  return _Var1;
}



// FUNCTION 143ab3930 FUN_143ab3930 body=98 status=ok
// SIG undefined FUN_143ab3930(void)

ulonglong FUN_143ab3930(ushort param_1)

{
  ulonglong uVar1;
  
  if ((param_1 < 0x30) || (0x39 < param_1)) {
    if ((param_1 < 0x41) || (0x46 < param_1)) {
      if ((param_1 < 0x61) || (0x66 < param_1)) {
        uVar1 = CONCAT71((uint7)(byte)(param_1 >> 8),0xff);
      }
      else {
        uVar1 = (ulonglong)(param_1 - 0x57);
      }
    }
    else {
      uVar1 = (ulonglong)(param_1 - 0x37);
    }
  }
  else {
    uVar1 = (ulonglong)(param_1 - 0x30);
  }
  return uVar1;
}



// FUNCTION 143ab39a0 FUN_143ab39a0 body=38 status=ok
// SIG undefined FUN_143ab39a0(void)

ulonglong FUN_143ab39a0(ushort param_1)

{
  ulonglong uVar1;
  
  if ((param_1 < 0x30) || (0x37 < param_1)) {
    uVar1 = CONCAT71((uint7)(byte)(param_1 >> 8),0xff);
  }
  else {
    uVar1 = (ulonglong)(param_1 - 0x30);
  }
  return uVar1;
}



// FUNCTION 143ab39d0 FUN_143ab39d0 body=137 status=ok
// SIG undefined FUN_143ab39d0(void)

undefined8 FUN_143ab39d0(ushort *param_1,ushort *param_2,ushort *param_3,ushort *param_4)

{
  undefined8 uVar1;
  
  if ((((*param_2 & 0xfc00) == 0xdc00) && (param_1 != param_2)) &&
     ((param_2[-1] & 0xfc00) == 0xd800)) {
    uVar1 = 0;
  }
  else {
    if ((((param_3[-1] & 0xfc00) == 0xd800) && (param_2 != param_4)) &&
       ((*param_3 & 0xfc00) == 0xdc00)) {
      return 0;
    }
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143ab3a60 FUN_143ab3a60 body=284 status=ok
// SIG undefined FUN_143ab3a60(void)

int FUN_143ab3a60(ushort *param_1,int param_2)

{
  ushort *puVar1;
  ushort *local_res8;
  int local_res10;
  int local_14;
  
  if ((param_1 == (ushort *)0x0) || (param_2 < -1)) {
    local_14 = 0;
  }
  else {
    local_14 = 0;
    puVar1 = param_1;
    local_res8 = param_1;
    local_res10 = param_2;
    if (param_2 < 0) {
      while( true ) {
        local_res8 = puVar1;
        puVar1 = local_res8 + 1;
        if (*local_res8 == 0) break;
        local_14 = local_14 + 1;
        if (((*local_res8 & 0xfc00) == 0xd800) && ((*puVar1 & 0xfc00) == 0xdc00)) {
          puVar1 = local_res8 + 2;
        }
      }
    }
    else {
      while (0 < local_res10) {
        local_14 = local_14 + 1;
        if ((((*local_res8 & 0xfc00) == 0xd800) && (1 < local_res10)) &&
           ((local_res8[1] & 0xfc00) == 0xdc00)) {
          local_res8 = local_res8 + 2;
          local_res10 = local_res10 + -2;
        }
        else {
          local_res8 = local_res8 + 1;
          local_res10 = local_res10 + -1;
        }
      }
    }
  }
  return local_14;
}



// FUNCTION 143ab3b80 FUN_143ab3b80 body=150 status=ok
// SIG undefined FUN_143ab3b80(void)

ushort * FUN_143ab3b80(ushort *param_1,ushort param_2,int param_3)

{
  ushort *puVar1;
  ushort *local_res8;
  ushort local_res10 [4];
  int local_res18;
  
  if (param_3 < 1) {
    puVar1 = (ushort *)0x0;
  }
  else if ((param_2 & 0xf800) == 0xd800) {
    local_res10[0] = param_2;
    local_res18 = param_3;
    puVar1 = (ushort *)FUN_143ab3e30(param_1,param_3,local_res10,1);
  }
  else {
    local_res8 = param_1;
    do {
      if (*local_res8 == param_2) {
        return local_res8;
      }
      local_res8 = local_res8 + 1;
    } while (local_res8 != param_1 + param_3);
    puVar1 = (ushort *)0x0;
  }
  return puVar1;
}



// FUNCTION 143ab3c20 FUN_143ab3c20 body=126 status=ok
// SIG undefined FUN_143ab3c20(void)

int FUN_143ab3c20(ushort *param_1,ushort *param_2,int param_3)

{
  ushort *local_res8;
  ushort *local_res10;
  
  if (0 < param_3) {
    local_res10 = param_2;
    for (local_res8 = param_1; local_res8 < param_1 + param_3; local_res8 = local_res8 + 1) {
      if ((uint)*local_res8 - (uint)*local_res10 != 0) {
        return (uint)*local_res8 - (uint)*local_res10;
      }
      local_res10 = local_res10 + 1;
    }
  }
  return 0;
}



// FUNCTION 143ab3ca0 FUN_143ab3ca0 body=62 status=ok
// SIG undefined FUN_143ab3ca0(void)

void * FUN_143ab3ca0(void *param_1,void *param_2,int param_3)

{
  if (0 < param_3) {
    _guard_xfg_dispatch_icall_nop(param_1,param_2,(longlong)(param_3 << 1));
  }
  return param_1;
}



// FUNCTION 143ab3ce0 FUN_143ab3ce0 body=63 status=ok
// SIG undefined FUN_143ab3ce0(void)

void * FUN_143ab3ce0(void *param_1,void *param_2,int param_3)

{
  if (0 < param_3) {
    memmove(param_1,param_2,(longlong)(param_3 << 1));
  }
  return param_1;
}



// FUNCTION 143ab3d20 FUN_143ab3d20 body=150 status=ok
// SIG undefined FUN_143ab3d20(void)

ushort * FUN_143ab3d20(ushort *param_1,ushort param_2,int param_3)

{
  ushort *puVar1;
  ushort local_res10 [4];
  int local_res18;
  ushort *local_18;
  
  if (param_3 < 1) {
    puVar1 = (ushort *)0x0;
  }
  else if ((param_2 & 0xf800) == 0xd800) {
    local_res10[0] = param_2;
    local_res18 = param_3;
    puVar1 = (ushort *)FUN_143ab4380(param_1,param_3,local_res10,1);
  }
  else {
    local_18 = param_1 + param_3;
    do {
      local_18 = local_18 + -1;
      if (*local_18 == param_2) {
        return local_18;
      }
    } while (param_1 != local_18);
    puVar1 = (ushort *)0x0;
  }
  return puVar1;
}



// FUNCTION 143ab3dc0 FUN_143ab3dc0 body=100 status=ok
// SIG undefined FUN_143ab3dc0(void)

undefined8
FUN_143ab3dc0(longlong param_1,int param_2,longlong param_3,int param_4,undefined1 param_5)

{
  undefined8 uVar1;
  
  if ((((param_1 == 0) || (param_2 < -1)) || (param_3 == 0)) || (param_4 < -1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_143ab4ff0(param_1,param_2,param_3,param_4,0,param_5);
  }
  return uVar1;
}



// FUNCTION 143ab3e30 FUN_143ab3e30 body=1340 status=ok
// SIG undefined FUN_143ab3e30(void)

ushort * FUN_143ab3e30(ushort *param_1,int param_2,ushort *param_3,int param_4)

{
  ushort uVar1;
  char cVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *local_res8;
  int local_res20;
  ushort *local_60;
  ushort *local_58;
  
  puVar3 = param_1;
  if ((param_3 != (ushort *)0x0) && (-2 < param_4)) {
    if ((param_1 == (ushort *)0x0) || (param_2 < -1)) {
      puVar3 = (ushort *)0x0;
    }
    else if ((param_2 < 0) && (param_4 < 0)) {
      uVar1 = *param_3;
      if (uVar1 != 0) {
        puVar4 = param_1;
        if ((param_3[1] == 0) && (puVar4 = param_1, (uVar1 & 0xf800) != 0xd800)) {
          puVar3 = (ushort *)FUN_143ab45e0(param_1,uVar1);
        }
        else {
LAB_143ab3f29:
          do {
            do {
              local_res8 = puVar4;
              puVar4 = local_res8 + 1;
              if (*local_res8 == 0) {
                return (ushort *)0x0;
              }
              local_60 = puVar4;
              local_58 = param_3 + 1;
            } while (*local_res8 != uVar1);
            for (; *local_58 != 0; local_58 = local_58 + 1) {
              if (*local_60 == 0) {
                return (ushort *)0x0;
              }
              if (*local_60 != *local_58) goto LAB_143ab3f29;
              local_60 = local_60 + 1;
            }
            cVar2 = FUN_143ab39d0(param_1,local_res8,local_60,0);
            puVar3 = local_res8;
          } while (cVar2 == '\0');
        }
      }
    }
    else {
      local_res20 = param_4;
      if (param_4 < 0) {
        local_res20 = FreeLib(param_3);
      }
      if (local_res20 != 0) {
        uVar1 = *param_3;
        param_3 = param_3 + 1;
        local_res20 = local_res20 + -1;
        if ((local_res20 == 0) && ((uVar1 & 0xf800) != 0xd800)) {
          if (param_2 < 0) {
            puVar3 = (ushort *)FUN_143ab45e0(param_1,uVar1);
          }
          else {
            puVar3 = (ushort *)FUN_143ab3b80(param_1,uVar1,param_2);
          }
        }
        else {
          puVar4 = param_1;
          if (param_2 < 0) {
LAB_143ab4131:
            do {
              do {
                local_res8 = puVar4;
                puVar4 = local_res8 + 1;
                if (*local_res8 == 0) {
                  return (ushort *)0x0;
                }
                local_60 = puVar4;
                local_58 = param_3;
              } while (*local_res8 != uVar1);
              for (; local_58 != param_3 + local_res20; local_58 = local_58 + 1) {
                if (*local_60 == 0) {
                  return (ushort *)0x0;
                }
                if (*local_60 != *local_58) goto LAB_143ab4131;
                local_60 = local_60 + 1;
              }
              cVar2 = FUN_143ab39d0(param_1,local_res8,local_60,0);
              puVar3 = local_res8;
            } while (cVar2 == '\0');
          }
          else if (local_res20 < param_2) {
            puVar4 = param_1;
LAB_143ab4284:
            do {
              do {
                local_res8 = puVar4;
                if (local_res8 == param_1 + param_2 + -(longlong)local_res20) {
                  return (ushort *)0x0;
                }
                puVar4 = local_res8 + 1;
                local_60 = puVar4;
                local_58 = param_3;
              } while (*local_res8 != uVar1);
              for (; local_58 != param_3 + local_res20; local_58 = local_58 + 1) {
                if (*local_60 != *local_58) goto LAB_143ab4284;
                local_60 = local_60 + 1;
              }
              cVar2 = FUN_143ab39d0(param_1,local_res8,local_60,param_1 + param_2);
              puVar3 = local_res8;
            } while (cVar2 == '\0');
          }
          else {
            puVar3 = (ushort *)0x0;
          }
        }
      }
    }
  }
  return puVar3;
}



// FUNCTION 143ab4380 FUN_143ab4380 body=600 status=ok
// SIG undefined FUN_143ab4380(void)

ushort * FUN_143ab4380(ushort *param_1,int param_2,ushort *param_3,int param_4)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  ushort *puVar4;
  int local_res10;
  int local_res20;
  ushort *local_40;
  ushort *local_38;
  ushort *local_28;
  
  if ((param_3 != (ushort *)0x0) && (-2 < param_4)) {
    if ((param_1 == (ushort *)0x0) || (param_2 < -1)) {
      param_1 = (ushort *)0x0;
    }
    else {
      local_res20 = param_4;
      if (param_4 < 0) {
        local_res20 = FreeLib(param_3);
      }
      if (local_res20 != 0) {
        uVar1 = param_3[(longlong)local_res20 + -1];
        iVar3 = local_res20 + -1;
        if ((iVar3 == 0) && ((uVar1 & 0xf800) != 0xd800)) {
          if (param_2 < 0) {
            param_1 = (ushort *)FUN_143ab4870(param_1,uVar1);
          }
          else {
            param_1 = (ushort *)FUN_143ab3d20(param_1,uVar1,param_2);
          }
        }
        else {
          local_res10 = param_2;
          if (param_2 < 0) {
            local_res10 = FreeLib(param_1);
          }
          if (iVar3 < local_res10) {
            puVar4 = param_1 + local_res10;
            do {
              do {
                local_40 = puVar4;
                if (param_1 + iVar3 == local_40) {
                  return (ushort *)0x0;
                }
                puVar4 = local_40 + -1;
                local_38 = puVar4;
                local_28 = param_3 + (longlong)local_res20 + -1;
              } while (*puVar4 != uVar1);
              do {
                if (local_28 == param_3) {
                  cVar2 = FUN_143ab39d0(param_1,local_38,local_40,param_1 + local_res10);
                  if (cVar2 != '\0') {
                    return local_38;
                  }
                  break;
                }
                local_38 = local_38 + -1;
                local_28 = local_28 + -1;
              } while (*local_38 == *local_28);
            } while( true );
          }
          param_1 = (ushort *)0x0;
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 143ab45e0 FUN_143ab45e0 body=127 status=ok
// SIG undefined FUN_143ab45e0(void)

ushort * FUN_143ab45e0(ushort *param_1,ushort param_2)

{
  ushort *local_res8;
  ushort local_res10 [12];
  
  local_res8 = param_1;
  if ((param_2 & 0xf800) == 0xd800) {
    local_res10[0] = param_2;
    local_res8 = (ushort *)FUN_143ab3e30(param_1,0xffffffff,local_res10,1);
  }
  else {
    for (; *local_res8 != param_2; local_res8 = local_res8 + 1) {
      if (*local_res8 == 0) {
        return (ushort *)0x0;
      }
    }
  }
  return local_res8;
}



// FUNCTION 143ab4670 FUN_143ab4670 body=108 status=ok
// SIG undefined FUN_143ab4670(void)

int FUN_143ab4670(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort *local_res8;
  ushort *local_res10;
  
  local_res8 = param_1;
  local_res10 = param_2;
  do {
    uVar1 = *local_res8;
    local_res8 = local_res8 + 1;
    uVar2 = *local_res10;
    local_res10 = local_res10 + 1;
    if (uVar1 != uVar2) break;
  } while (uVar1 != 0);
  return (uint)uVar1 - (uint)uVar2;
}



// FUNCTION 143ab46e0 wcscpy body=97 status=ok
// SIG wchar_t * wcscpy(wchar_t * _Dest, wchar_t * _Source)

/* Library Function - Single Match
    wcscpy
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2015 Debug, Visual Studio 2017 Debug, Visual
   Studio 2019 Debug */

wchar_t * __cdecl wcscpy(wchar_t *_Dest,wchar_t *_Source)

{
  wchar_t wVar1;
  wchar_t *local_res8;
  wchar_t *local_res10;
  
  local_res8 = _Dest;
  local_res10 = _Source;
  do {
    *local_res8 = *local_res10;
    wVar1 = *local_res8;
    local_res8 = local_res8 + 1;
    local_res10 = local_res10 + 1;
  } while (wVar1 != L'\0');
  return _Dest;
}



// FUNCTION 143ab4750 FreeLib body=25 status=ok
// SIG undefined FreeLib(void)

void FreeLib(wchar_t *param_1)

{
  wcslen(param_1);
  return;
}



// FUNCTION 143ab4770 FUN_143ab4770 body=124 status=ok
// SIG undefined FUN_143ab4770(void)

int FUN_143ab4770(ushort *param_1,ushort *param_2,int param_3)

{
  int iVar1;
  ushort *local_res8;
  ushort *local_res10;
  int local_res18;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_3 < 1) {
    iVar1 = 0;
  }
  else {
    while (((iVar1 = (uint)*local_res8 - (uint)*local_res10, iVar1 == 0 && (*local_res8 != 0)) &&
           (local_res18 = local_res18 + -1, local_res18 != 0))) {
      local_res8 = local_res8 + 1;
      local_res10 = local_res10 + 1;
    }
  }
  return iVar1;
}



// FUNCTION 143ab47f0 FUN_143ab47f0 body=119 status=ok
// SIG undefined FUN_143ab47f0(void)

short * FUN_143ab47f0(short *param_1,short *param_2,int param_3)

{
  short sVar1;
  short *local_res8;
  short *local_res10;
  int local_res18;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  while( true ) {
    if (local_res18 < 1) {
      return param_1;
    }
    *local_res8 = *local_res10;
    sVar1 = *local_res8;
    local_res8 = local_res8 + 1;
    local_res10 = local_res10 + 1;
    if (sVar1 == 0) break;
    local_res18 = local_res18 + -1;
  }
  return param_1;
}



// FUNCTION 143ab4870 FUN_143ab4870 body=142 status=ok
// SIG undefined FUN_143ab4870(void)

ushort * FUN_143ab4870(ushort *param_1,ushort param_2)

{
  ushort *local_res8;
  ushort local_res10 [12];
  ushort *local_10;
  
  if ((param_2 & 0xf800) == 0xd800) {
    local_res10[0] = param_2;
    local_10 = (ushort *)FUN_143ab4380(param_1,0xffffffff,local_res10,1);
  }
  else {
    local_10 = (ushort *)0x0;
    local_res8 = param_1;
    while( true ) {
      if (*local_res8 == param_2) {
        local_10 = local_res8;
      }
      if (*local_res8 == 0) break;
      local_res8 = local_res8 + 1;
    }
  }
  return local_10;
}



// FUNCTION 143ab4900 FUN_143ab4900 body=45 status=ok
// SIG undefined FUN_143ab4900(void)

void FUN_143ab4900(undefined8 param_1,undefined8 param_2)

{
  FUN_143ab3e30(param_1,0xffffffff,param_2,0xffffffff);
  return;
}



// FUNCTION 143ab4930 FUN_143ab4930 body=149 status=ok
// SIG undefined FUN_143ab4930(void)

int FUN_143ab4930(longlong param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  
  if (((param_4 != (int *)0x0) && (cVar1 = FUN_143a8b110(*param_4), cVar1 != '\0')) &&
     (-1 < param_3)) {
    if (param_3 < param_2) {
      *(undefined1 *)(param_1 + param_3) = 0;
      if (*param_4 == -0x7c) {
        *param_4 = 0;
      }
    }
    else if (param_3 == param_2) {
      *param_4 = -0x7c;
    }
    else {
      *param_4 = 0xf;
    }
  }
  return param_3;
}



// FUNCTION 143ab49d0 FUN_143ab49d0 body=152 status=ok
// SIG undefined FUN_143ab49d0(void)

int FUN_143ab49d0(longlong param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  
  if (((param_4 != (int *)0x0) && (cVar1 = FUN_143a8b110(*param_4), cVar1 != '\0')) &&
     (-1 < param_3)) {
    if (param_3 < param_2) {
      *(undefined4 *)(param_1 + (longlong)param_3 * 4) = 0;
      if (*param_4 == -0x7c) {
        *param_4 = 0;
      }
    }
    else if (param_3 == param_2) {
      *param_4 = -0x7c;
    }
    else {
      *param_4 = 0xf;
    }
  }
  return param_3;
}



// FUNCTION 143ab4a70 FUN_143ab4a70 body=151 status=ok
// SIG undefined FUN_143ab4a70(void)

int FUN_143ab4a70(longlong param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  
  if (((param_4 != (int *)0x0) && (cVar1 = FUN_143a8b110(), cVar1 != '\0')) && (-1 < param_3)) {
    if (param_3 < param_2) {
      *(undefined2 *)(param_1 + (longlong)param_3 * 2) = 0;
      if (*param_4 == -0x7c) {
        *param_4 = 0;
      }
    }
    else if (param_3 == param_2) {
      *param_4 = -0x7c;
    }
    else {
      *param_4 = 0xf;
    }
  }
  return param_3;
}



// FUNCTION 143ab4b10 FUN_143ab4b10 body=1226 status=ok
// SIG undefined FUN_143ab4b10(void)

uint FUN_143ab4b10(code *param_1,int *param_2,int param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  ushort local_38;
  char local_34;
  char local_33;
  char local_31;
  sbyte local_30;
  char local_2e;
  uint local_2c;
  int local_28;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = *param_2;
  local_2c = 0;
  local_31 = '\0';
  local_33 = '\0';
  local_34 = '\0';
  local_30 = 4;
  bVar1 = false;
  if ((-1 < *param_2) && (*param_2 < param_3)) {
    local_14 = *param_2;
    *param_2 = *param_2 + 1;
    local_38 = (*param_1)(local_14,param_4);
    local_18 = (uint)local_38;
    if (local_18 == 0x55) {
      local_34 = '\b';
      local_33 = '\b';
    }
    else if (local_18 == 0x75) {
      local_34 = '\x04';
      local_33 = '\x04';
    }
    else if (local_18 == 0x78) {
      local_33 = '\x01';
      if ((*param_2 < param_3) && (sVar3 = (*param_1)(*param_2,param_4), sVar3 == 0x7b)) {
        *param_2 = *param_2 + 1;
        bVar1 = true;
        local_34 = '\b';
      }
      else {
        local_34 = '\x02';
      }
    }
    else {
      cVar2 = FUN_143ab39a0(local_38);
      if (-1 < cVar2) {
        local_33 = '\x01';
        local_34 = '\x03';
        local_31 = '\x01';
        local_30 = 3;
        local_2c = (uint)cVar2;
      }
    }
    if (local_33 == '\0') {
      for (local_28 = 0; local_28 < 0x10; local_28 = local_28 + 2) {
        if (local_38 == *(ushort *)(&DAT_145cf0f98 + (longlong)local_28 * 2)) {
          return (uint)*(ushort *)(&DAT_145cf0f98 + (longlong)(local_28 + 1) * 2);
        }
        if (local_38 < *(ushort *)(&DAT_145cf0f98 + (longlong)local_28 * 2)) break;
      }
      if ((local_38 == 99) && (*param_2 < param_3)) {
        local_10 = *param_2;
        *param_2 = *param_2 + 1;
        local_38 = (*param_1)(local_10,param_4);
        if ((((local_38 & 0xfc00) == 0xd800) && (*param_2 < param_3)) &&
           (uVar4 = (*param_1)(*param_2,param_4), (uVar4 & 0xfc00) == 0xdc00)) {
          *param_2 = *param_2 + 1;
          local_38 = uVar4;
        }
        return local_38 & 0x1f;
      }
      if (((local_38 & 0xfc00) == 0xd800) &&
         ((*param_2 < param_3 && (uVar4 = (*param_1)(*param_2,param_4), (uVar4 & 0xfc00) == 0xdc00))
         )) {
        *param_2 = *param_2 + 1;
        return (uint)local_38 * 0x400 + -0x35fdc00 + (uint)uVar4;
      }
      return (uint)local_38;
    }
    for (; (*param_2 < param_3 && (local_31 < local_34)); local_31 = local_31 + '\x01') {
      local_38 = (*param_1)(*param_2,param_4);
      if (local_30 == 3) {
        local_2e = FUN_143ab39a0(local_38);
      }
      else {
        local_2e = FUN_143ab3930(local_38);
      }
      if (local_2e < '\0') break;
      local_2c = local_2c << local_30 | (int)local_2e;
      *param_2 = *param_2 + 1;
    }
    if (local_33 <= local_31) {
      if (bVar1) {
        if (local_38 != 0x7d) goto LAB_143ab4fdb;
        *param_2 = *param_2 + 1;
      }
      if ((-1 < (int)local_2c) && ((int)local_2c < 0x110000)) {
        if (param_3 <= *param_2) {
          return local_2c;
        }
        if ((local_2c & 0xfffffc00) != 0xd800) {
          return local_2c;
        }
        local_1c = *param_2 + 1;
        local_38 = (*param_1)(*param_2,param_4);
        if ((local_38 == 0x5c) && (local_1c < param_3)) {
          local_38 = FUN_143ab4b10(param_1,&local_1c,param_3,param_4);
        }
        if ((local_38 & 0xfc00) != 0xdc00) {
          return local_2c;
        }
        *param_2 = local_1c;
        return local_2c * 0x400 + -0x35fdc00 + (uint)local_38;
      }
    }
  }
LAB_143ab4fdb:
  *param_2 = local_c;
  return 0xffffffff;
}



// FUNCTION 143ab4ff0 FUN_143ab4ff0 body=977 status=ok
// SIG undefined FUN_143ab4ff0(void)

int FUN_143ab4ff0(ushort *param_1,int param_2,ushort *param_3,int param_4,char param_5,char param_6)

{
  ushort *local_res8;
  int local_res10;
  ushort *local_res18;
  int local_res20;
  ushort local_38;
  ushort local_34;
  int local_30;
  ushort *local_28;
  ushort *local_18;
  
  local_res8 = param_1;
  local_res18 = param_3;
  if ((param_2 < 0) && (param_4 < 0)) {
    if (param_1 == param_3) {
      local_30 = 0;
    }
    else {
      while( true ) {
        local_38 = *local_res8;
        local_34 = *local_res18;
        if (local_38 != local_34) break;
        if (local_38 == 0) {
          return 0;
        }
        local_res8 = local_res8 + 1;
        local_res18 = local_res18 + 1;
      }
      local_18 = (ushort *)0x0;
      local_28 = (ushort *)0x0;
LAB_143ab5298:
      if (((0xd7ff < local_38) && (0xd7ff < local_34)) && (param_6 != '\0')) {
        if ((((0xdbff < local_38) || (local_res8 + 1 == local_28)) ||
            ((local_res8[1] & 0xfc00) != 0xdc00)) &&
           ((((local_38 & 0xfc00) != 0xdc00 || (param_1 == local_res8)) ||
            ((local_res8[-1] & 0xfc00) != 0xd800)))) {
          local_38 = local_38 + 0xd800;
        }
        if ((((0xdbff < local_34) || (local_res18 + 1 == local_18)) ||
            ((local_res18[1] & 0xfc00) != 0xdc00)) &&
           ((((local_34 & 0xfc00) != 0xdc00 || (param_3 == local_res18)) ||
            ((local_res18[-1] & 0xfc00) != 0xd800)))) {
          local_34 = local_34 + 0xd800;
        }
      }
      local_30 = (uint)local_38 - (uint)local_34;
    }
  }
  else if (param_5 == '\0') {
    local_res10 = param_2;
    if (param_2 < 0) {
      local_res10 = FreeLib(param_1);
    }
    local_res20 = param_4;
    if (param_4 < 0) {
      local_res20 = FreeLib(param_3);
    }
    if (local_res10 < local_res20) {
      local_30 = -1;
      local_28 = param_1 + local_res10;
    }
    else if (local_res10 == local_res20) {
      local_30 = 0;
      local_28 = param_1 + local_res10;
    }
    else {
      local_30 = 1;
      local_28 = param_1 + local_res20;
    }
    if (param_1 != param_3) {
      for (; local_res8 != local_28; local_res8 = local_res8 + 1) {
        local_38 = *local_res8;
        local_34 = *local_res18;
        if (local_38 != local_34) {
          local_28 = param_1 + local_res10;
          local_18 = param_3 + local_res20;
          goto LAB_143ab5298;
        }
        local_res18 = local_res18 + 1;
      }
    }
  }
  else if (param_1 == param_3) {
    local_30 = 0;
  }
  else {
    local_28 = param_1 + param_2;
    for (; local_res8 != local_28; local_res8 = local_res8 + 1) {
      local_38 = *local_res8;
      local_34 = *local_res18;
      if (local_38 != local_34) {
        local_18 = param_3 + param_2;
        goto LAB_143ab5298;
      }
      if (local_38 == 0) {
        return 0;
      }
      local_res18 = local_res18 + 1;
    }
    local_30 = 0;
  }
  return local_30;
}



// FUNCTION 143ab53d0 FUN_143ab53d0 body=149 status=ok
// SIG undefined FUN_143ab53d0(void)

int FUN_143ab53d0(byte *param_1,int param_2)

{
  int local_28;
  byte *local_18;
  
  local_28 = 0;
  if (param_1 != (byte *)0x0) {
    for (local_18 = param_1; local_18 < param_1 + param_2;
        local_18 = local_18 +
                   (((int)(param_2 + -0x20 + (param_2 + -0x20 >> 0x1f & 0x1fU)) >> 5) + 1)) {
      local_28 = local_28 * 0x25 + (uint)*local_18;
    }
  }
  return local_28;
}



// FUNCTION 143ab5470 FUN_143ab5470 body=145 status=ok
// SIG undefined FUN_143ab5470(void)

int FUN_143ab5470(ushort *param_1,int param_2)

{
  int local_28;
  ushort *local_18;
  
  local_28 = 0;
  if (param_1 != (ushort *)0x0) {
    for (local_18 = param_1; local_18 < param_1 + param_2;
        local_18 = local_18 +
                   (((int)(param_2 + -0x20 + (param_2 + -0x20 >> 0x1f & 0x1fU)) >> 5) + 1)) {
      local_28 = local_28 * 0x25 + (uint)*local_18;
    }
  }
  return local_28;
}



// FUNCTION 143ab5510 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::Appendable::vftable;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143ab5540 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143ab5580 FUN_143ab5580 body=166 status=ok
// SIG undefined FUN_143ab5580(void)

ulonglong FUN_143ab5580(longlong *param_1,uint param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined2 local_res10;
  byte local_28;
  
  if (0xffff < (int)param_2) {
    cVar1 = (**(code **)(*param_1 + 0x10))(param_1,((int)param_2 >> 10) + 0xd7c0U & 0xffff);
    if ((cVar1 == '\0') ||
       (cVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2 & 0x3ff | 0xdc00), cVar1 == '\0')) {
      local_28 = 0;
    }
    else {
      local_28 = 1;
    }
    return (ulonglong)local_28;
  }
  local_res10 = (undefined2)param_2;
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_res10);
  return uVar2;
}



// FUNCTION 143ab5630 FUN_143ab5630 body=216 status=ok
// SIG undefined FUN_143ab5630(void)

undefined8 FUN_143ab5630(longlong *param_1,short *param_2,int param_3)

{
  short sVar1;
  char cVar2;
  undefined8 uVar3;
  short *local_res10;
  
  local_res10 = param_2;
  if (param_3 < 0) {
    do {
      sVar1 = *local_res10;
      local_res10 = local_res10 + 1;
      if (sVar1 == 0) goto LAB_143ab5701;
      cVar2 = (**(code **)(*param_1 + 0x10))(param_1,sVar1);
    } while (cVar2 != '\0');
    uVar3 = 0;
  }
  else {
    if (0 < param_3) {
      do {
        cVar2 = (**(code **)(*param_1 + 0x10))(param_1,*local_res10);
        local_res10 = local_res10 + 1;
        if (cVar2 == '\0') {
          return 0;
        }
      } while (local_res10 < param_2 + param_3);
    }
LAB_143ab5701:
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 143ab5710 FUN_143ab5710 body=68 status=ok
// SIG undefined FUN_143ab5710(void)

undefined8
FUN_143ab5710(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5,
             int *param_6)

{
  if ((param_2 < 1) || (param_5 < param_2)) {
    *param_6 = 0;
    param_4 = 0;
  }
  else {
    *param_6 = param_5;
  }
  return param_4;
}



// FUNCTION 143ab5760 FUN_143ab5760 body=12 status=ok
// SIG undefined FUN_143ab5760(void)

undefined1 FUN_143ab5760(void)

{
  return 1;
}



// FUNCTION 143ab5770 FUN_143ab5770 body=173 status=ok
// SIG undefined FUN_143ab5770(void)

void FUN_143ab5770(ushort *param_1,undefined1 *param_2,int param_3)

{
  ushort *local_res8;
  undefined1 *local_res10;
  int local_res18;
  ushort local_18;
  
  local_res8 = param_1;
  local_res10 = param_2;
  for (local_res18 = param_3; 0 < local_res18; local_res18 = local_res18 + -1) {
    local_18 = *local_res8;
    local_res8 = local_res8 + 1;
    if ((0x7f < local_18) ||
       ((*(uint *)(&DAT_145cf1300 + (longlong)((int)(uint)local_18 >> 5) * 4) &
        1 << ((byte)local_18 & 0x1f)) == 0)) {
      local_18 = 0;
    }
    *local_res10 = (undefined1)local_18;
    local_res10 = local_res10 + 1;
  }
  return;
}



// FUNCTION 143ab5820 FUN_143ab5820 body=103 status=ok
// SIG undefined FUN_143ab5820(void)

void FUN_143ab5820(byte *param_1,ushort *param_2,int param_3)

{
  byte bVar1;
  byte *local_res8;
  ushort *local_res10;
  int local_res18;
  
  local_res8 = param_1;
  local_res10 = param_2;
  for (local_res18 = param_3; 0 < local_res18; local_res18 = local_res18 + -1) {
    bVar1 = *local_res8;
    local_res8 = local_res8 + 1;
    *local_res10 = (ushort)bVar1;
    local_res10 = local_res10 + 1;
  }
  return;
}



// FUNCTION 143ab5890 FUN_143ab5890 body=186 status=ok
// SIG undefined FUN_143ab5890(void)

undefined8 FUN_143ab5890(ushort *param_1,int param_2)

{
  ushort *local_res8;
  int local_res10;
  ushort local_18;
  
  local_res8 = param_1;
  local_res10 = param_2;
  do {
    if (local_res10 < 0) {
      local_18 = *local_res8;
      if (local_18 == 0) {
        return 1;
      }
    }
    else {
      if (local_res10 == 0) {
        return 1;
      }
      local_res10 = local_res10 + -1;
      local_18 = *local_res8;
    }
    local_res8 = local_res8 + 1;
  } while ((local_18 < 0x80) &&
          ((*(uint *)(&DAT_145cf1300 + (longlong)((int)(uint)local_18 >> 5) * 4) &
           1 << ((byte)local_18 & 0x1f)) != 0));
  return 0;
}



// FUNCTION 143ab5950 FUN_143ab5950 body=373 status=ok
// SIG undefined FUN_143ab5950(void)

byte * FUN_143ab5950(byte *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte *local_res8;
  byte local_res10;
  
  local_res10 = (byte)param_2;
  if (param_2 < 0x80) {
    *param_1 = local_res10;
    local_res8 = param_1 + 1;
  }
  else {
    bVar1 = (byte)(param_2 >> 6);
    if (param_2 < 0x800) {
      *param_1 = bVar1 | 0xc0;
      param_1[1] = local_res10 & 0x3f | 0x80;
      local_res8 = param_1 + 2;
    }
    else {
      bVar2 = (byte)(param_2 >> 0xc);
      if (param_2 < 0x10000) {
        *param_1 = bVar2 | 0xe0;
        param_1[1] = bVar1 & 0x3f | 0x80;
        param_1[2] = local_res10 & 0x3f | 0x80;
        local_res8 = param_1 + 3;
      }
      else {
        *param_1 = (byte)(param_2 >> 0x12) | 0xf0;
        param_1[1] = bVar2 & 0x3f | 0x80;
        param_1[2] = bVar1 & 0x3f | 0x80;
        param_1[3] = local_res10 & 0x3f | 0x80;
        local_res8 = param_1 + 4;
      }
    }
  }
  return local_res8;
}



// FUNCTION 143ab5ad0 FUN_143ab5ad0 body=777 status=ok
// SIG undefined FUN_143ab5ad0(void)

uint FUN_143ab5ad0(undefined8 *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  uint local_res18;
  byte local_38;
  byte local_36;
  byte *local_30;
  byte local_24;
  byte local_18;
  
  local_30 = (byte *)*param_1;
  local_38 = 0;
  local_res18._0_1_ = (byte)param_3;
  if ((byte)local_res18 < 0xf0) {
    local_24 = (0xbf < (byte)local_res18) + (0xdf < (byte)local_res18);
  }
  else {
    if ((byte)local_res18 < 0xfe) {
      local_18 = (0xf7 < (byte)local_res18) + '\x03' + (0xfb < (byte)local_res18);
    }
    else {
      local_18 = 0;
    }
    local_24 = local_18;
  }
  local_36 = local_24;
  if ((longlong)param_2 - (longlong)local_30 < (longlong)(ulonglong)local_24) {
    local_38 = 1;
    local_res18 = param_3;
  }
  else {
    local_res18 = param_3 & (1 << (6 - local_24 & 0x1f)) - 1U;
    switch(local_24) {
    case 0:
      return 0xffffffff;
    case 3:
      bVar1 = *local_30;
      local_30 = local_30 + 1;
      local_res18 = local_res18 << 6 | bVar1 & 0x3f;
      if (0x10f < (int)local_res18) {
        local_38 = 1;
        break;
      }
      local_38 = bVar1 & 0xc0 ^ 0x80;
    case 2:
      bVar1 = *local_30;
      local_30 = local_30 + 1;
      local_res18 = local_res18 << 6 | bVar1 & 0x3f;
      local_38 = local_38 | bVar1 & 0xc0 ^ 0x80;
    case 1:
      bVar1 = *local_30;
      local_30 = local_30 + 1;
      local_res18 = local_res18 << 6 | bVar1 & 0x3f;
      local_38 = local_38 | bVar1 & 0xc0 ^ 0x80;
      break;
    case 4:
    case 5:
      local_38 = 1;
    }
  }
  if (((local_38 != 0) || ((int)local_res18 < *(int *)(&DAT_145cf1310 + (ulonglong)local_24 * 4)))
     || ((local_res18 & 0xfffff800) == 0xd800)) {
    for (local_30 = (byte *)*param_1;
        ((local_36 != 0 && (local_30 < param_2)) && ((*local_30 & 0xc0) == 0x80));
        local_30 = local_30 + 1) {
      local_36 = local_36 - 1;
    }
    local_res18 = 0xffffffff;
  }
  *param_1 = local_30;
  return local_res18;
}



// FUNCTION 143ab5e00 FUN_143ab5e00 body=689 status=ok
// SIG undefined FUN_143ab5e00(void)

uint FUN_143ab5e00(undefined8 *param_1,uint param_2)

{
  byte bVar1;
  bool bVar2;
  uint local_res10;
  byte local_37;
  byte *local_30;
  byte local_24;
  byte local_18;
  
  local_30 = (byte *)*param_1;
  bVar2 = false;
  local_res10._0_1_ = (byte)param_2;
  if ((byte)local_res10 < 0xf0) {
    local_24 = (0xbf < (byte)local_res10) + (0xdf < (byte)local_res10);
  }
  else {
    if ((byte)local_res10 < 0xfe) {
      local_18 = (0xf7 < (byte)local_res10) + '\x03' + (0xfb < (byte)local_res10);
    }
    else {
      local_18 = 0;
    }
    local_24 = local_18;
  }
  local_37 = local_24;
  local_res10 = param_2 & (1 << (6 - local_24 & 0x1f)) - 1U;
  switch(local_24) {
  case 0:
    return 0xffffffff;
  case 1:
    goto switchD_143ab5f44_caseD_1;
  case 3:
    bVar1 = *local_30;
    local_30 = local_30 + 1;
    local_res10 = local_res10 << 6 | (uint)(byte)(bVar1 + 0x80);
    if ((0x3f < (byte)(bVar1 + 0x80)) || (0x10f < (int)local_res10)) {
      bVar2 = true;
      break;
    }
  case 2:
    bVar1 = *local_30;
    local_30 = local_30 + 1;
    if ((byte)(bVar1 + 0x80) < 0x40) {
      local_res10 = local_res10 << 6 | (uint)(byte)(bVar1 + 0x80);
switchD_143ab5f44_caseD_1:
      bVar1 = *local_30;
      local_30 = local_30 + 1;
      bVar2 = 0x3f < (byte)(bVar1 + 0x80);
      local_res10 = local_res10 << 6 | (uint)(byte)(bVar1 + 0x80);
    }
    else {
      bVar2 = true;
    }
    break;
  case 4:
  case 5:
    bVar2 = true;
  }
  if (((bVar2) || ((int)local_res10 < *(int *)(&DAT_145cf1310 + (ulonglong)local_24 * 4))) ||
     ((local_res10 & 0xfffff800) == 0xd800)) {
    for (local_30 = (byte *)*param_1; (local_37 != 0 && ((*local_30 & 0xc0) == 0x80));
        local_30 = local_30 + 1) {
      local_37 = local_37 - 1;
    }
    local_res10 = 0xffffffff;
  }
  *param_1 = local_30;
  return local_res10;
}



// FUNCTION 143ab60d0 FUN_143ab60d0 body=3251 status=ok
// SIG undefined FUN_143ab60d0(void)

ushort * FUN_143ab60d0(ushort *param_1,int param_2,int *param_3,byte *param_4,int param_5,
                      uint param_6,int *param_7,undefined4 *param_8)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  uint local_58;
  byte *local_50;
  byte local_48;
  ushort *local_40;
  int local_38;
  int local_34;
  int local_30;
  byte *local_28;
  int local_20;
  int local_1c;
  ushort *local_18;
  
  local_18 = param_1 + param_2;
  local_38 = 0;
  if ((param_8 == (undefined4 *)0x0) ||
     (local_50 = param_4, local_40 = param_1, cVar2 = FUN_143a8b0e0(*param_8), cVar2 != '\0')) {
    return (ushort *)0x0;
  }
  if (((((param_4 == (byte *)0x0) && (param_5 != 0)) || (param_5 < -1)) || (param_2 < 0)) ||
     (((param_1 == (ushort *)0x0 && (0 < param_2)) ||
      ((0x10ffff < (int)param_6 || ((param_6 & 0xfffff800) == 0xd800)))))) {
    *param_8 = 1;
    return (ushort *)0x0;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = 0;
  }
  local_34 = 0;
  if (-1 < param_5) {
    local_28 = local_50 + param_5;
LAB_143ab65eb:
    local_30 = (int)((longlong)local_18 - (longlong)local_40 >> 1);
    iVar4 = (int)(((longlong)local_28 - (longlong)local_50) / 3);
    if (iVar4 < local_30) {
      local_30 = iVar4;
    }
    if (2 < local_30) {
      do {
        bVar1 = *local_50;
        uVar3 = (ushort)bVar1;
        if (uVar3 < 0x80) {
          local_58._0_2_ = (ushort)bVar1;
          *local_40 = (ushort)local_58;
          local_40 = local_40 + 1;
          local_50 = local_50 + 1;
        }
        else if (uVar3 < 0xe1) {
          if (((0xdf < uVar3) || (uVar3 < 0xc2)) || (0x3f < (byte)(local_50[1] + 0x80)))
          goto LAB_143ab67a3;
          *local_40 = (uVar3 & 0x1f) << 6 | (ushort)(byte)(local_50[1] + 0x80);
          local_40 = local_40 + 1;
          local_50 = local_50 + 2;
        }
        else if (((uVar3 < 0xed) && ((byte)(local_50[1] + 0x80) < 0x40)) &&
                (local_48 = local_50[2] + 0x80, local_48 < 0x40)) {
          *local_40 = (ushort)bVar1 << 0xc | (ushort)(byte)(local_50[1] + 0x80) << 6 |
                      (ushort)local_48;
          local_40 = local_40 + 1;
          local_50 = local_50 + 3;
        }
        else {
LAB_143ab67a3:
          if (((0xef < uVar3) || (0xffff < (int)param_6)) &&
             (local_30 = local_30 + -1, local_30 == 0)) break;
          local_50 = local_50 + 1;
          local_58 = FUN_143ab5ad0(&local_50,local_28,uVar3);
          if ((int)local_58 < 0) {
            local_34 = local_34 + 1;
            local_58 = param_6;
            if ((int)param_6 < 0) {
              *param_8 = 10;
              return (ushort *)0x0;
            }
          }
          if ((int)local_58 < 0x10000) {
            *local_40 = (ushort)local_58;
            local_40 = local_40 + 1;
          }
          else {
            *local_40 = (short)((int)local_58 >> 10) + 0xd7c0;
            local_40[1] = (ushort)local_58 & 0x3ff | 0xdc00;
            local_40 = local_40 + 2;
          }
        }
        local_30 = local_30 + -1;
      } while (0 < local_30);
      goto LAB_143ab65eb;
    }
LAB_143ab68b6:
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            if ((local_28 <= local_50) || (local_18 <= local_40)) goto LAB_143ab6b53;
            bVar1 = *local_50;
            uVar3 = (ushort)bVar1;
            if (0x7f < uVar3) break;
            local_58._0_2_ = (ushort)bVar1;
            *local_40 = (ushort)local_58;
            local_40 = local_40 + 1;
            local_50 = local_50 + 1;
          }
          if (uVar3 < 0xe1) break;
          if ((((0xec < uVar3) || ((longlong)local_28 - (longlong)local_50 < 3)) ||
              (0x3f < (byte)(local_50[1] + 0x80))) ||
             (local_48 = local_50[2] + 0x80, 0x3f < local_48)) goto LAB_143ab6a65;
          *local_40 = (ushort)bVar1 << 0xc | (ushort)(byte)(local_50[1] + 0x80) << 6 |
                      (ushort)local_48;
          local_40 = local_40 + 1;
          local_50 = local_50 + 3;
        }
        if (((0xdf < uVar3) || (uVar3 < 0xc2)) ||
           (((longlong)local_28 - (longlong)local_50 < 2 || (0x3f < (byte)(local_50[1] + 0x80)))))
        break;
        *local_40 = (uVar3 & 0x1f) << 6 | (ushort)(byte)(local_50[1] + 0x80);
        local_40 = local_40 + 1;
        local_50 = local_50 + 2;
      }
LAB_143ab6a65:
      local_50 = local_50 + 1;
      local_58 = FUN_143ab5ad0(&local_50,local_28,uVar3);
      if ((int)local_58 < 0) {
        local_34 = local_34 + 1;
        local_58 = param_6;
        if ((int)param_6 < 0) {
          *param_8 = 10;
          return (ushort *)0x0;
        }
      }
      if ((int)local_58 < 0x10000) {
        *local_40 = (ushort)local_58;
        local_40 = local_40 + 1;
        goto LAB_143ab68b6;
      }
      *local_40 = (short)((int)local_58 >> 10) + 0xd7c0;
      puVar5 = local_40 + 1;
      if (local_18 <= puVar5) {
        local_38 = local_38 + 1;
        local_40 = puVar5;
        goto LAB_143ab6b53;
      }
      *puVar5 = (ushort)local_58 & 0x3ff | 0xdc00;
      local_40 = local_40 + 2;
    } while( true );
  }
LAB_143ab61ec:
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          bVar1 = *local_50;
          uVar3 = (ushort)bVar1;
          if ((uVar3 == 0) || (local_18 <= local_40)) goto LAB_143ab644b;
          if (0x7f < uVar3) break;
          local_58._0_2_ = (ushort)bVar1;
          *local_40 = (ushort)local_58;
          local_40 = local_40 + 1;
          local_50 = local_50 + 1;
        }
        if (uVar3 < 0xe1) break;
        if (((0xec < uVar3) || (0x3f < (byte)(local_50[1] + 0x80))) ||
           (local_48 = local_50[2] + 0x80, 0x3f < local_48)) goto LAB_143ab6363;
        *local_40 = (ushort)bVar1 << 0xc | (ushort)(byte)(local_50[1] + 0x80) << 6 |
                    (ushort)local_48;
        local_40 = local_40 + 1;
        local_50 = local_50 + 3;
      }
      if (((0xdf < uVar3) || (uVar3 < 0xc2)) || (0x3f < (byte)(local_50[1] + 0x80))) break;
      *local_40 = (uVar3 & 0x1f) << 6 | (ushort)(byte)(local_50[1] + 0x80);
      local_40 = local_40 + 1;
      local_50 = local_50 + 2;
    }
LAB_143ab6363:
    local_50 = local_50 + 1;
    local_58 = FUN_143ab5e00(&local_50,uVar3);
    if ((int)local_58 < 0) {
      local_34 = local_34 + 1;
      local_58 = param_6;
      if ((int)param_6 < 0) {
        *param_8 = 10;
        return (ushort *)0x0;
      }
    }
    if ((int)local_58 < 0x10000) {
      *local_40 = (ushort)local_58;
      local_40 = local_40 + 1;
      goto LAB_143ab61ec;
    }
    *local_40 = (short)((int)local_58 >> 10) + 0xd7c0;
    puVar5 = local_40 + 1;
    if (local_18 <= puVar5) {
      local_38 = local_38 + 1;
      local_40 = puVar5;
      goto LAB_143ab644b;
    }
    *puVar5 = (ushort)local_58 & 0x3ff | 0xdc00;
    local_40 = local_40 + 2;
  } while( true );
LAB_143ab6b53:
  if (local_50 < local_28) {
    bVar1 = *local_50;
    if (bVar1 < 0x80) {
      local_38 = local_38 + 1;
      local_50 = local_50 + 1;
    }
    else if (bVar1 < 0xe1) {
      if (((0xdf < bVar1) || (bVar1 < 0xc2)) ||
         (((longlong)local_28 - (longlong)local_50 < 2 || (0x3f < (byte)(local_50[1] + 0x80)))))
      goto LAB_143ab6c7f;
      local_38 = local_38 + 1;
      local_50 = local_50 + 2;
    }
    else if ((((bVar1 < 0xed) && (2 < (longlong)local_28 - (longlong)local_50)) &&
             ((byte)(local_50[1] + 0x80) < 0x40)) && ((byte)(local_50[2] + 0x80) < 0x40)) {
      local_38 = local_38 + 1;
      local_50 = local_50 + 3;
    }
    else {
LAB_143ab6c7f:
      local_50 = local_50 + 1;
      local_58 = FUN_143ab5ad0(&local_50,local_28,bVar1);
      if ((int)local_58 < 0) {
        local_34 = local_34 + 1;
        local_58 = param_6;
        if ((int)param_6 < 0) {
          *param_8 = 10;
          return (ushort *)0x0;
        }
      }
      if (local_58 < 0x10000) {
        local_20 = 1;
      }
      else {
        local_20 = 2;
      }
      local_38 = local_38 + local_20;
    }
    goto LAB_143ab6b53;
  }
  goto LAB_143ab6d0d;
LAB_143ab644b:
  bVar1 = *local_50;
  if (bVar1 != 0) {
    if (bVar1 < 0x80) {
      local_38 = local_38 + 1;
      local_50 = local_50 + 1;
    }
    else if (bVar1 < 0xe1) {
      if (((0xdf < bVar1) || (bVar1 < 0xc2)) || (0x3f < (byte)(local_50[1] + 0x80)))
      goto LAB_143ab6546;
      local_38 = local_38 + 1;
      local_50 = local_50 + 2;
    }
    else if (((bVar1 < 0xed) && ((byte)(local_50[1] + 0x80) < 0x40)) &&
            ((byte)(local_50[2] + 0x80) < 0x40)) {
      local_38 = local_38 + 1;
      local_50 = local_50 + 3;
    }
    else {
LAB_143ab6546:
      local_50 = local_50 + 1;
      local_58 = FUN_143ab5e00(&local_50,bVar1);
      if ((int)local_58 < 0) {
        local_34 = local_34 + 1;
        local_58 = param_6;
        if ((int)param_6 < 0) {
          *param_8 = 10;
          return (ushort *)0x0;
        }
      }
      if (local_58 < 0x10000) {
        local_1c = 1;
      }
      else {
        local_1c = 2;
      }
      local_38 = local_38 + local_1c;
    }
    goto LAB_143ab644b;
  }
LAB_143ab6d0d:
  local_38 = local_38 + (int)((longlong)local_40 - (longlong)param_1 >> 1);
  if (param_7 != (int *)0x0) {
    *param_7 = local_34;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = local_38;
  }
  FUN_143ab4a70(param_1,param_2,local_38,param_8);
  return param_1;
}



// FUNCTION 143ab6d90 FUN_143ab6d90 body=890 status=ok
// SIG undefined FUN_143ab6d90(void)

uint * FUN_143ab6d90(uint *param_1,int param_2,int *param_3,ushort *param_4,int param_5,uint param_6
                    ,int *param_7,undefined4 *param_8)

{
  char cVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *local_res20;
  uint local_48;
  int local_44;
  uint *local_38;
  int local_30;
  ushort *local_28;
  uint *local_20;
  ushort *local_18;
  
  cVar1 = FUN_143a8b0e0(*param_8);
  if (cVar1 == '\0') {
    if ((((((param_4 == (ushort *)0x0) && (param_5 != 0)) || (param_5 < -1)) ||
         ((param_2 < 0 || ((param_1 == (uint *)0x0 && (0 < param_2)))))) ||
        (0x10ffff < (int)param_6)) || ((param_6 & 0xfffff800) == 0xd800)) {
      *param_8 = 1;
      param_1 = (uint *)0x0;
    }
    else {
      if (param_7 != (int *)0x0) {
        *param_7 = 0;
      }
      if (param_1 == (uint *)0x0) {
        local_20 = (uint *)0x0;
      }
      else {
        local_20 = param_1 + param_2;
      }
      local_44 = 0;
      local_30 = 0;
      local_res20 = param_4;
      local_38 = param_1;
      if (param_5 < 0) {
        while ((uVar2 = (uint)*local_res20, uVar2 != 0 && ((uVar2 & 0xfffff800) != 0xd800))) {
          local_res20 = local_res20 + 1;
          if (local_38 < local_20) {
            *local_38 = uVar2;
            local_38 = local_38 + 1;
          }
          else {
            local_44 = local_44 + 1;
          }
        }
        local_28 = local_res20;
        if (uVar2 != 0) {
          do {
            local_28 = local_28 + 1;
          } while (*local_28 != 0);
        }
      }
      else {
        if (param_4 == (ushort *)0x0) {
          local_18 = (ushort *)0x0;
        }
        else {
          local_18 = param_4 + param_5;
        }
        local_28 = local_18;
      }
      while (local_res20 < local_28) {
        local_48 = (uint)*local_res20;
        puVar3 = local_res20 + 1;
        if ((local_48 & 0xfffff800) == 0xd800) {
          if ((((*local_res20 & 0x400) == 0) && (puVar3 < local_28)) &&
             ((*puVar3 & 0xfc00) == 0xdc00)) {
            local_48 = local_48 * 0x400 + -0x35fdc00 + (uint)*puVar3;
            puVar3 = local_res20 + 2;
          }
          else {
            local_48 = param_6;
            if ((int)param_6 < 0) {
              *param_8 = 10;
              return (uint *)0x0;
            }
            local_30 = local_30 + 1;
          }
        }
        local_res20 = puVar3;
        if (local_38 < local_20) {
          *local_38 = local_48;
          local_38 = local_38 + 1;
        }
        else {
          local_44 = local_44 + 1;
        }
      }
      local_44 = local_44 + (int)((longlong)local_38 - (longlong)param_1 >> 2);
      if (param_3 != (int *)0x0) {
        *param_3 = local_44;
      }
      if (param_7 != (int *)0x0) {
        *param_7 = local_30;
      }
      FUN_143ab49d0(param_1,param_2,local_44,param_8);
    }
  }
  else {
    param_1 = (uint *)0x0;
  }
  return param_1;
}



// FUNCTION 143ab7110 FUN_143ab7110 body=87 status=ok
// SIG undefined FUN_143ab7110(void)

void FUN_143ab7110(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  FUN_143ab6d90(param_1,param_2,param_3,param_4,param_5,0xffffffff,0,param_6);
  return;
}



// FUNCTION 143ab7170 FUN_143ab7170 body=3797 status=ok
// SIG undefined FUN_143ab7170(void)

byte * FUN_143ab7170(byte *param_1,int param_2,int *param_3,ushort *param_4,int param_5,uint param_6
                    ,int *param_7,undefined4 *param_8)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  ushort *local_res20;
  uint local_a8;
  byte *local_a0;
  int local_98;
  int local_90;
  int local_8c;
  int local_80;
  int local_7c;
  int local_78;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_28;
  int local_24;
  int local_20;
  byte *local_18;
  ushort *local_10;
  
  local_98 = 0;
  if (param_1 == (byte *)0x0) {
    local_18 = (byte *)0x0;
  }
  else {
    local_18 = param_1 + param_2;
  }
  if ((param_8 == (undefined4 *)0x0) || (cVar2 = FUN_143a8b0e0(*param_8), cVar2 != '\0')) {
    return (byte *)0x0;
  }
  if (((((param_4 == (ushort *)0x0) && (param_5 != 0)) || (param_5 < -1)) || (param_2 < 0)) ||
     (((param_1 == (byte *)0x0 && (0 < param_2)) ||
      ((0x10ffff < (int)param_6 || ((param_6 & 0xfffff800) == 0xd800)))))) {
    *param_8 = 1;
    return (byte *)0x0;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = 0;
  }
  local_90 = 0;
  local_res20 = param_4;
  local_a0 = param_1;
  if (param_5 != -1) {
    local_res20 = param_4;
    if (param_4 == (ushort *)0x0) {
      local_10 = (ushort *)0x0;
    }
    else {
      local_10 = param_4 + param_5;
    }
    do {
      local_8c = (int)(((longlong)local_18 - (longlong)local_a0) / 3);
      iVar4 = (int)((longlong)local_10 - (longlong)local_res20 >> 1);
      if (iVar4 < local_8c) {
        local_8c = iVar4;
      }
      if (local_8c < 3) goto LAB_143ab7ad2;
      do {
        uVar1 = *local_res20;
        uVar3 = (uint)uVar1;
        puVar5 = local_res20 + 1;
        local_a8._0_1_ = (byte)uVar1;
        if (uVar3 < 0x80) {
          *local_a0 = (byte)local_a8;
          local_a0 = local_a0 + 1;
          local_res20 = puVar5;
        }
        else if (uVar3 < 0x800) {
          *local_a0 = (byte)(uVar1 >> 6) | 0xc0;
          local_a0[1] = (byte)local_a8 & 0x3f | 0x80;
          local_a0 = local_a0 + 2;
          local_res20 = puVar5;
        }
        else if ((uVar3 < 0xd800) || (0xdfff < uVar3)) {
          *local_a0 = (byte)(uVar1 >> 0xc) | 0xe0;
          local_a0[1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
          local_a0[2] = (byte)local_a8 & 0x3f | 0x80;
          local_a0 = local_a0 + 3;
          local_res20 = puVar5;
        }
        else {
          local_8c = local_8c + -1;
          if (local_8c == 0) break;
          if (((uVar1 & 0x400) == 0) && ((*puVar5 & 0xfffffc00) == 0xdc00)) {
            uVar3 = uVar3 * 0x400 + -0x35fdc00 + (uint)*puVar5;
            *local_a0 = (byte)(uVar3 >> 0x12) | 0xf0;
            local_a0[1] = (byte)(uVar3 >> 0xc) & 0x3f | 0x80;
            local_a0[2] = (byte)(uVar3 >> 6) & 0x3f | 0x80;
            local_a0[3] = (byte)uVar3 & 0x3f | 0x80;
            local_a0 = local_a0 + 4;
            local_res20 = local_res20 + 2;
          }
          else {
            if ((int)param_6 < 0) {
              *param_8 = 10;
              return (byte *)0x0;
            }
            local_90 = local_90 + 1;
            local_a0 = (byte *)FUN_143ab5950(local_a0,param_6);
            local_res20 = puVar5;
          }
        }
        local_8c = local_8c + -1;
      } while (0 < local_8c);
    } while( true );
  }
  while( true ) {
    uVar1 = *local_res20;
    uVar3 = (uint)uVar1;
    if (uVar3 == 0) break;
    puVar5 = local_res20 + 1;
    local_a8._0_1_ = (byte)uVar1;
    if (uVar3 < 0x80) {
      if (local_18 <= local_a0) {
        local_98 = 1;
        local_res20 = puVar5;
        break;
      }
      *local_a0 = (byte)local_a8;
      local_a0 = local_a0 + 1;
      local_res20 = puVar5;
    }
    else if (uVar3 < 0x800) {
      if ((longlong)local_18 - (longlong)local_a0 < 2) {
        local_98 = 2;
        local_res20 = puVar5;
        break;
      }
      *local_a0 = (byte)(uVar1 >> 6) | 0xc0;
      local_a0[1] = (byte)local_a8 & 0x3f | 0x80;
      local_a0 = local_a0 + 2;
      local_res20 = puVar5;
    }
    else if ((uVar3 < 0xd800) || (0xdfff < uVar3)) {
      if ((longlong)local_18 - (longlong)local_a0 < 3) {
        local_98 = 3;
        local_res20 = puVar5;
        break;
      }
      *local_a0 = (byte)(uVar1 >> 0xc) | 0xe0;
      local_a0[1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
      local_a0[2] = (byte)local_a8 & 0x3f | 0x80;
      local_a0 = local_a0 + 3;
      local_res20 = puVar5;
    }
    else {
      if (((uVar1 & 0x400) == 0) && ((*puVar5 & 0xfffffc00) == 0xdc00)) {
        local_a8 = uVar3 * 0x400 + -0x35fdc00 + (uint)*puVar5;
        local_res20 = local_res20 + 2;
      }
      else {
        if ((int)param_6 < 0) {
          *param_8 = 10;
          return (byte *)0x0;
        }
        local_a8 = param_6;
        local_90 = local_90 + 1;
        local_res20 = puVar5;
      }
      if (local_a8 < 0x80) {
        local_48 = 1;
      }
      else {
        if (local_a8 < 0x800) {
          local_78 = 2;
        }
        else {
          if (local_a8 < 0xd800) {
            local_20 = 3;
          }
          else {
            if ((local_a8 < 0xe000) || (0x10ffff < local_a8)) {
              local_28 = 0;
            }
            else {
              if (local_a8 < 0x10000) {
                local_58 = 3;
              }
              else {
                local_58 = 4;
              }
              local_28 = local_58;
            }
            local_20 = local_28;
          }
          local_78 = local_20;
        }
        local_48 = local_78;
      }
      if ((longlong)local_18 - (longlong)local_a0 < (longlong)local_48) {
        local_98 = local_48;
        break;
      }
      local_a0 = (byte *)FUN_143ab5950(local_a0,local_a8);
    }
  }
  while( true ) {
    uVar1 = *local_res20;
    puVar5 = local_res20 + 1;
    if (uVar1 == 0) break;
    if (uVar1 < 0x80) {
      local_98 = local_98 + 1;
      local_res20 = puVar5;
    }
    else if (uVar1 < 0x800) {
      local_98 = local_98 + 2;
      local_res20 = puVar5;
    }
    else if ((uVar1 & 0xf800) == 0xd800) {
      if (((uVar1 & 0x400) == 0) && ((*puVar5 & 0xfc00) == 0xdc00)) {
        local_98 = local_98 + 4;
        local_res20 = local_res20 + 2;
      }
      else {
        if ((int)param_6 < 0) {
          *param_8 = 10;
          return (byte *)0x0;
        }
        if (param_6 < 0x80) {
          local_3c = 1;
        }
        else {
          if (param_6 < 0x800) {
            local_60 = 2;
          }
          else {
            if (param_6 < 0xd800) {
              local_38 = 3;
            }
            else {
              if ((param_6 < 0xe000) || (0x10ffff < param_6)) {
                local_68 = 0;
              }
              else {
                if (param_6 < 0x10000) {
                  local_40 = 3;
                }
                else {
                  local_40 = 4;
                }
                local_68 = local_40;
              }
              local_38 = local_68;
            }
            local_60 = local_38;
          }
          local_3c = local_60;
        }
        local_98 = local_98 + local_3c;
        local_90 = local_90 + 1;
        local_res20 = puVar5;
      }
    }
    else {
      local_98 = local_98 + 3;
      local_res20 = puVar5;
    }
  }
LAB_143ab7fc3:
  local_98 = local_98 + ((int)local_a0 - (int)param_1);
  if (param_7 != (int *)0x0) {
    *param_7 = local_90;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = local_98;
  }
  FUN_143ab4930(param_1,param_2,local_98,param_8);
  return param_1;
LAB_143ab7ad2:
  if (local_res20 < local_10) {
    uVar1 = *local_res20;
    uVar3 = (uint)uVar1;
    puVar5 = local_res20 + 1;
    local_a8._0_1_ = (byte)uVar1;
    if (uVar3 < 0x80) {
      if (local_18 <= local_a0) {
        local_98 = 1;
        local_res20 = puVar5;
        goto LAB_143ab7def;
      }
      *local_a0 = (byte)local_a8;
      local_a0 = local_a0 + 1;
      local_res20 = puVar5;
    }
    else if (uVar3 < 0x800) {
      if ((longlong)local_18 - (longlong)local_a0 < 2) {
        local_98 = 2;
        local_res20 = puVar5;
        goto LAB_143ab7def;
      }
      *local_a0 = (byte)(uVar1 >> 6) | 0xc0;
      local_a0[1] = (byte)local_a8 & 0x3f | 0x80;
      local_a0 = local_a0 + 2;
      local_res20 = puVar5;
    }
    else if ((uVar3 < 0xd800) || (0xdfff < uVar3)) {
      if ((longlong)local_18 - (longlong)local_a0 < 3) {
        local_98 = 3;
        local_res20 = puVar5;
        goto LAB_143ab7def;
      }
      *local_a0 = (byte)(uVar1 >> 0xc) | 0xe0;
      local_a0[1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
      local_a0[2] = (byte)local_a8 & 0x3f | 0x80;
      local_a0 = local_a0 + 3;
      local_res20 = puVar5;
    }
    else {
      if ((((uVar1 & 0x400) == 0) && (puVar5 < local_10)) && ((*puVar5 & 0xfffffc00) == 0xdc00)) {
        local_a8 = uVar3 * 0x400 + -0x35fdc00 + (uint)*puVar5;
        local_res20 = local_res20 + 2;
      }
      else {
        if ((int)param_6 < 0) {
          *param_8 = 10;
          return (byte *)0x0;
        }
        local_a8 = param_6;
        local_90 = local_90 + 1;
        local_res20 = puVar5;
      }
      if (local_a8 < 0x80) {
        local_7c = 1;
      }
      else {
        if (local_a8 < 0x800) {
          local_44 = 2;
        }
        else {
          if (local_a8 < 0xd800) {
            local_50 = 3;
          }
          else {
            if ((local_a8 < 0xe000) || (0x10ffff < local_a8)) {
              local_24 = 0;
            }
            else {
              if (local_a8 < 0x10000) {
                local_80 = 3;
              }
              else {
                local_80 = 4;
              }
              local_24 = local_80;
            }
            local_50 = local_24;
          }
          local_44 = local_50;
        }
        local_7c = local_44;
      }
      if ((longlong)local_18 - (longlong)local_a0 < (longlong)local_7c) {
        local_98 = local_7c;
        goto LAB_143ab7def;
      }
      local_a0 = (byte *)FUN_143ab5950(local_a0,local_a8);
    }
    goto LAB_143ab7ad2;
  }
LAB_143ab7def:
  while (local_res20 < local_10) {
    uVar1 = *local_res20;
    puVar5 = local_res20 + 1;
    if (uVar1 < 0x80) {
      local_98 = local_98 + 1;
      local_res20 = puVar5;
    }
    else if (uVar1 < 0x800) {
      local_98 = local_98 + 2;
      local_res20 = puVar5;
    }
    else if ((uVar1 & 0xf800) == 0xd800) {
      if ((((uVar1 & 0x400) == 0) && (puVar5 < local_10)) && ((*puVar5 & 0xfc00) == 0xdc00)) {
        local_98 = local_98 + 4;
        local_res20 = local_res20 + 2;
      }
      else {
        if ((int)param_6 < 0) {
          *param_8 = 10;
          return (byte *)0x0;
        }
        if (param_6 < 0x80) {
          local_4c = 1;
        }
        else {
          if (param_6 < 0x800) {
            local_54 = 2;
          }
          else {
            if (param_6 < 0xd800) {
              local_5c = 3;
            }
            else {
              if ((param_6 < 0xe000) || (0x10ffff < param_6)) {
                local_64 = 0;
              }
              else {
                if (param_6 < 0x10000) {
                  local_6c = 3;
                }
                else {
                  local_6c = 4;
                }
                local_64 = local_6c;
              }
              local_5c = local_64;
            }
            local_54 = local_5c;
          }
          local_4c = local_54;
        }
        local_98 = local_98 + local_4c;
        local_90 = local_90 + 1;
        local_res20 = puVar5;
      }
    }
    else {
      local_98 = local_98 + 3;
      local_res20 = puVar5;
    }
  }
  goto LAB_143ab7fc3;
}



// FUNCTION 143ab8050 FUN_143ab8050 body=87 status=ok
// SIG undefined FUN_143ab8050(void)

void FUN_143ab8050(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  FUN_143ab7170(param_1,param_2,param_3,param_4,param_5,0xffffffff,0,param_6);
  return;
}



// FUNCTION 143ab80b0 FUN_143ab80b0 body=355 status=ok
// SIG undefined FUN_143ab80b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143ab8144) */

int FUN_143ab80b0(undefined1 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined1 auStack_78 [32];
  byte local_58;
  int local_54;
  int local_50;
  uint local_4c;
  int local_48;
  undefined8 local_40;
  char acStack_38 [29];
  undefined1 uStack_1b;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_50 = 0;
  local_4c = param_2;
  if (((int)param_2 < 0) && (param_3 == 10)) {
    local_4c = -param_2;
    *param_1 = 0x2d;
    local_50 = 1;
  }
  local_54 = 0x1d;
  local_40 = 0x1d;
  uStack_1b = 0;
  do {
    uVar1 = local_4c % param_3;
    local_58 = (byte)uVar1;
    if (local_58 < 10) {
      local_48 = (uVar1 & 0xff) + 0x30;
    }
    else {
      local_48 = (uVar1 & 0xff) + 0x37;
    }
    local_54 = local_54 + -1;
    acStack_38[local_54] = (char)local_48;
    local_4c = local_4c / param_3;
  } while (local_4c != 0);
  _guard_xfg_dispatch_icall_nop(param_1 + local_50,acStack_38 + local_54);
  return local_50 + (0x1d - local_54);
}



// FUNCTION 143ab8220 FUN_143ab8220 body=89 status=ok
// SIG undefined FUN_143ab8220(void)

char * FUN_143ab8220(char *param_1)

{
  char cVar1;
  char *local_res8;
  
  local_res8 = param_1;
  if (param_1 != (char *)0x0) {
    do {
      cVar1 = FUN_143ab82e0(*local_res8);
      *local_res8 = cVar1;
      cVar1 = *local_res8;
      local_res8 = local_res8 + 1;
    } while (cVar1 != '\0');
  }
  return param_1;
}



// FUNCTION 143ab8280 FUN_143ab8280 body=89 status=ok
// SIG undefined FUN_143ab8280(void)

char * FUN_143ab8280(char *param_1)

{
  char cVar1;
  char *local_res8;
  
  local_res8 = param_1;
  if (param_1 != (char *)0x0) {
    do {
      cVar1 = FUN_143ab85d0(*local_res8);
      *local_res8 = cVar1;
      cVar1 = *local_res8;
      local_res8 = local_res8 + 1;
    } while (cVar1 != '\0');
  }
  return param_1;
}



// FUNCTION 143ab82e0 FUN_143ab82e0 body=42 status=ok
// SIG undefined FUN_143ab82e0(void)

char FUN_143ab82e0(char param_1)

{
  undefined1 local_res8;
  
  local_res8 = param_1;
  if (('@' < param_1) && (param_1 < '[')) {
    local_res8 = param_1 + ' ';
  }
  return local_res8;
}



// FUNCTION 143ab8310 FUN_143ab8310 body=73 status=ok
// SIG undefined FUN_143ab8310(void)

undefined1 FUN_143ab8310(char param_1)

{
  undefined1 local_18;
  
  if (((param_1 < 'a') || ('z' < param_1)) && ((param_1 < 'A' || ('Z' < param_1)))) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143ab8360 FUN_143ab8360 body=80 status=ok
// SIG undefined FUN_143ab8360(void)

void * FUN_143ab8360(char *param_1)

{
  size_t sVar1;
  void *_Dst;
  
  sVar1 = _guard_xfg_dispatch_icall_nop(param_1);
  _Dst = (void *)FUN_143aa7a40(sVar1 + 1);
  if (_Dst != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop(_Dst,param_1,sVar1 + 1);
  }
  return _Dst;
}



// FUNCTION 143ab83b0 FUN_143ab83b0 body=225 status=ok
// SIG undefined FUN_143ab83b0(void)

int FUN_143ab83b0(char *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  char *local_res8;
  char *local_res10;
  
  if (param_1 == (char *)0x0) {
    if (param_2 == (char *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = -1;
    }
  }
  else {
    local_res8 = param_1;
    local_res10 = param_2;
    if (param_2 == (char *)0x0) {
      iVar4 = 1;
    }
    else {
      while( true ) {
        cVar1 = *local_res10;
        if (*local_res8 == '\0') break;
        if (cVar1 == '\0') {
          return 1;
        }
        bVar2 = FUN_143ab82e0(*local_res8);
        bVar3 = FUN_143ab82e0(cVar1);
        if ((uint)bVar2 - (uint)bVar3 != 0) {
          return (uint)bVar2 - (uint)bVar3;
        }
        local_res8 = local_res8 + 1;
        local_res10 = local_res10 + 1;
      }
      if (cVar1 == '\0') {
        iVar4 = 0;
      }
      else {
        iVar4 = -1;
      }
    }
  }
  return iVar4;
}



// FUNCTION 143ab84b0 FUN_143ab84b0 body=261 status=ok
// SIG undefined FUN_143ab84b0(void)

int FUN_143ab84b0(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  char *local_res8;
  char *local_res10;
  int local_res18;
  
  if (param_1 == (char *)0x0) {
    if (param_2 == (char *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = -1;
    }
  }
  else {
    local_res8 = param_1;
    local_res10 = param_2;
    local_res18 = param_3;
    if (param_2 == (char *)0x0) {
      iVar4 = 1;
    }
    else {
      while (local_res18 != 0) {
        cVar1 = *local_res10;
        if (*local_res8 == '\0') {
          if (cVar1 == '\0') {
            return 0;
          }
          return -1;
        }
        if (cVar1 == '\0') {
          return 1;
        }
        bVar2 = FUN_143ab82e0(*local_res8);
        bVar3 = FUN_143ab82e0(cVar1);
        if ((uint)bVar2 - (uint)bVar3 != 0) {
          return (uint)bVar2 - (uint)bVar3;
        }
        local_res8 = local_res8 + 1;
        local_res10 = local_res10 + 1;
        local_res18 = local_res18 + -1;
      }
      iVar4 = 0;
    }
  }
  return iVar4;
}



// FUNCTION 143ab85d0 FUN_143ab85d0 body=42 status=ok
// SIG undefined FUN_143ab85d0(void)

char FUN_143ab85d0(char param_1)

{
  undefined1 local_res8;
  
  local_res8 = param_1;
  if (('`' < param_1) && (param_1 < '{')) {
    local_res8 = param_1 + -0x20;
  }
  return local_res8;
}



// FUNCTION 143ab8600 FUN_143ab8600 body=358 status=ok
// SIG undefined FUN_143ab8600(void)

undefined4 FUN_143ab8600(uint *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  uint local_28;
  int local_24;
  uint local_1c;
  
  local_1c = 0;
  local_24 = 0;
  sVar3 = _guard_xfg_dispatch_icall_nop(param_2);
  local_28 = 0;
  do {
    if (*param_1 <= local_28) {
      if (((param_2[local_24] == '_') || (param_2[local_24] == '@')) &&
         (*(char *)(*(longlong *)(*(longlong *)(param_1 + 2) + 8 + (longlong)(int)local_1c * 0x10) +
                   (longlong)local_24) == '\0')) {
        *param_3 = 0xffffff80;
        uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 2) + (longlong)(int)local_1c * 0x10);
      }
      else {
        *param_3 = 1;
        uVar2 = **(undefined4 **)(param_1 + 2);
      }
      return uVar2;
    }
    iVar1 = FUN_143ab87f0(param_2,*(undefined8 *)
                                   (*(longlong *)(param_1 + 2) + 8 + (ulonglong)local_28 * 0x10));
    if ((local_24 < iVar1) &&
       (*(char *)(*(longlong *)(*(longlong *)(param_1 + 2) + 8 + (ulonglong)local_28 * 0x10) +
                 (longlong)iVar1) == '\0')) {
      if ((int)sVar3 == iVar1) {
        return *(undefined4 *)(*(longlong *)(param_1 + 2) + (ulonglong)local_28 * 0x10);
      }
      local_1c = local_28;
      local_24 = iVar1;
    }
    local_28 = local_28 + 1;
  } while( true );
}



// FUNCTION 143ab8770 FUN_143ab8770 body=120 status=ok
// SIG undefined FUN_143ab8770(void)

undefined8 FUN_143ab8770(uint *param_1,int param_2)

{
  uint local_18;
  
  local_18 = 0;
  while( true ) {
    if (*param_1 < local_18) {
      return *(undefined8 *)(*(longlong *)(param_1 + 2) + 8);
    }
    if (*(int *)(*(longlong *)(param_1 + 2) + (ulonglong)local_18 * 0x10) == param_2) break;
    local_18 = local_18 + 1;
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 2) + 8 + (ulonglong)local_18 * 0x10);
}



// FUNCTION 143ab87f0 FUN_143ab87f0 body=97 status=ok
// SIG undefined FUN_143ab87f0(void)

int FUN_143ab87f0(char *param_1,char *param_2)

{
  char *local_res8;
  char *local_res10;
  int local_18;
  
  local_18 = 0;
  local_res10 = param_2;
  for (local_res8 = param_1; (*local_res8 == *local_res10 && (*local_res8 != '\0'));
      local_res8 = local_res8 + 1) {
    local_18 = local_18 + 1;
    local_res10 = local_res10 + 1;
  }
  return local_18;
}



// FUNCTION 143ab8860 FUN_143ab8860 body=447 status=ok
// SIG undefined FUN_143ab8860(void)

ulonglong FUN_143ab8860(char *param_1,char *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  size_t sVar4;
  ulonglong uVar5;
  uint local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  
  local_20 = 0;
  local_24 = 0x8c;
  local_18 = 0;
  local_2c = 0;
  local_28 = 0xffffffff;
  if ((((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) ||
      (sVar4 = _guard_xfg_dispatch_icall_nop(param_1), sVar4 < 2)) ||
     (sVar4 = _guard_xfg_dispatch_icall_nop(param_2), uVar1 = local_24, uVar2 = local_20,
     uVar3 = local_18, sVar4 < 2)) {
    uVar5 = 0;
  }
  else {
    do {
      local_18 = uVar3;
      local_20 = uVar2;
      local_24 = uVar1;
      if ((local_24 <= local_20) || (uVar3 = local_24 + local_20 >> 1, uVar3 == local_18)) {
        local_34 = 0;
        while( true ) {
          if (0x8b < local_34) {
            if (local_28 != 0xffffffff) {
              *param_3 = 0xffffff80;
              return (ulonglong)local_28;
            }
            *param_3 = 1;
            return 0;
          }
          local_30 = 0;
          local_2c = FUN_143ab8600(&DAT_145cf3110 + (ulonglong)local_34 * 0x10,param_2,&local_30);
          if (local_30 == 0) break;
          if (local_30 == -0x80) {
            local_28 = local_2c;
          }
          local_34 = local_34 + 1;
        }
        return (ulonglong)local_2c;
      }
      local_1c = _guard_xfg_dispatch_icall_nop
                           (param_1,*(char **)((&PTR_DAT_145cf3118)[(ulonglong)uVar3 * 2] + 8));
      uVar1 = uVar3;
      uVar2 = local_20;
    } while ((local_1c < 0) || (uVar1 = local_24, uVar2 = uVar3, 0 < local_1c));
    uVar5 = FUN_143ab8600(&DAT_145cf3110 + (ulonglong)uVar3 * 0x10,param_2,param_3);
  }
  return uVar5;
}



// FUNCTION 143ab8a30 FUN_143ab8a30 body=1026 status=ok
// SIG undefined FUN_143ab8a30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143ab8b86) */
/* WARNING: Removing unreachable block (ram,0x000143ab8c38) */

int FUN_143ab8a30(LCID param_1,void *param_2,int param_3,int *param_4)

{
  size_t sVar1;
  undefined1 auStack_138 [32];
  char local_118;
  int local_114;
  uint local_110;
  int local_10c;
  char *local_108;
  ushort local_100;
  CHAR *local_f8;
  int local_f0;
  char *local_e8;
  int local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  CHAR local_b8;
  char local_b7;
  char cStack_b6;
  char local_b5 [157];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_118 = '\x01';
  local_f8 = (CHAR *)0x0;
  local_10c = 0;
  local_10c = GetLocaleInfoA(param_1,0x5c,&local_b8,0x9d);
  if (1 < local_10c) {
    local_108 = strchr(&local_b8,0x5f);
    if (local_108 == (char *)0x0) {
      local_118 = '\0';
    }
    else {
      *local_108 = '\0';
      sVar1 = _guard_xfg_dispatch_icall_nop(&local_b8);
      local_10c = (int)sVar1;
    }
    for (local_108 = &local_b8; *local_108 != '\0'; local_108 = local_108 + 1) {
      if (*local_108 == '-') {
        *local_108 = '_';
      }
    }
    if (2 < local_10c) {
      if (((local_b8 == 'q') && (local_b7 == 'u')) && (cStack_b6 == 'z')) {
        local_d0 = 2;
        _guard_xfg_dispatch_icall_nop(&local_b8,local_b5);
      }
      else if (((local_b8 == 'p') && (local_b7 == 'r')) && (cStack_b6 == 's')) {
        local_b8 = 'f';
        local_b7 = 'a';
        local_d8 = 2;
        _guard_xfg_dispatch_icall_nop(&local_b8,local_b5);
      }
    }
    local_f8 = &local_b8;
  }
  if (local_118 != '\0') {
    local_e8 = (char *)0x0;
    local_100 = (ushort)param_1 & 0x3ff;
    for (local_110 = 0; local_110 < 0x8c; local_110 = local_110 + 1) {
      if ((uint)local_100 == *(uint *)(&PTR_DAT_145cf3118)[(ulonglong)local_110 * 2]) {
        local_e8 = (char *)FUN_143ab8770(&DAT_145cf3110 + (ulonglong)local_110 * 0x10,param_1);
        break;
      }
    }
    if (local_e8 != (char *)0x0) {
      if (local_f8 != (CHAR *)0x0) {
        local_c8 = _guard_xfg_dispatch_icall_nop(local_e8);
        sVar1 = _guard_xfg_dispatch_icall_nop(local_f8);
        if (local_c8 <= sVar1) goto LAB_143ab8d3d;
      }
      local_f8 = local_e8;
    }
  }
LAB_143ab8d3d:
  if (local_f8 == (char *)0x0) {
    *param_4 = 1;
    local_114 = -1;
  }
  else {
    sVar1 = _guard_xfg_dispatch_icall_nop(local_f8);
    local_114 = (int)sVar1;
    local_f0 = param_3;
    if (local_114 <= param_3) {
      local_f0 = local_114;
    }
    local_e0 = local_f0;
    _guard_xfg_dispatch_icall_nop(param_2,local_f8,(longlong)local_f0);
    if (local_114 < param_3) {
      *(undefined1 *)((longlong)param_2 + (longlong)local_114) = 0;
      if (*param_4 == -0x7c) {
        *param_4 = 0;
      }
    }
    else if (local_114 == param_3) {
      *param_4 = -0x7c;
    }
    else {
      *param_4 = 0xf;
    }
  }
  return local_114;
}



// FUNCTION 143ab8e40 FUN_143ab8e40 body=116 status=ok
// SIG undefined FUN_143ab8e40(void)

int FUN_143ab8e40(void)

{
  LSTATUS LVar1;
  int local_18;
  HKEY local_10 [2];
  
  for (local_18 = 0; local_18 < 2; local_18 = local_18 + 1) {
    LVar1 = RegOpenKeyExA((HKEY)0xffffffff80000002,
                          (&PTR_s_SOFTWARE_Microsoft_Windows_Curre_145cf4538)[local_18],0,1,local_10
                         );
    RegCloseKey(local_10[0]);
    if (LVar1 == 0) break;
  }
  return local_18 + 1;
}



// FUNCTION 143ab8ec0 FUN_143ab8ec0 body=121 status=ok
// SIG undefined FUN_143ab8ec0(void)

int FUN_143ab8ec0(undefined8 param_1,LPBYTE param_2,DWORD param_3)

{
  int local_18;
  DWORD local_14;
  HKEY local_10 [2];
  
  local_14 = param_3;
  local_18 = FUN_143ab8fc0(local_10,param_1);
  if (local_18 == 0) {
    local_18 = RegQueryValueExA(local_10[0],"Std",(LPDWORD)0x0,(LPDWORD)0x0,param_2,&local_14);
  }
  RegCloseKey(local_10[0]);
  return local_18;
}



// FUNCTION 143ab8f40 FUN_143ab8f40 body=116 status=ok
// SIG undefined FUN_143ab8f40(void)

int FUN_143ab8f40(undefined8 param_1,LPBYTE param_2)

{
  int local_18;
  DWORD local_14;
  HKEY local_10 [2];
  
  local_14 = 0x2c;
  local_18 = FUN_143ab8fc0(local_10,param_1);
  if (local_18 == 0) {
    local_18 = RegQueryValueExA(local_10[0],"TZI",(LPDWORD)0x0,(LPDWORD)0x0,param_2,&local_14);
  }
  RegCloseKey(local_10[0]);
  return local_18;
}



// FUNCTION 143ab8fc0 FUN_143ab8fc0 body=268 status=ok
// SIG undefined FUN_143ab8fc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

LSTATUS FUN_143ab8fc0(PHKEY param_1,char *param_2)

{
  LSTATUS LVar1;
  char *pcVar2;
  undefined1 auStackY_d8 [32];
  ulonglong local_98;
  char local_88 [112];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStackY_d8;
  if (DAT_146bc56d0 < 1) {
    DAT_146bc56d0 = FUN_143ab8e40();
  }
  local_98 = (ulonglong)(DAT_146bc56d0 != 1);
  _guard_xfg_dispatch_icall_nop
            (local_88,(&PTR_s_SOFTWARE_Microsoft_Windows_Curre_145cf4548)[local_98]);
  _guard_xfg_dispatch_icall_nop(local_88);
  _guard_xfg_dispatch_icall_nop(local_88,param_2);
  if ((DAT_146bc56d0 == 1) && (pcVar2 = strstr(local_88," Standard Time"), pcVar2 != (char *)0x0)) {
    *pcVar2 = '\0';
  }
  LVar1 = RegOpenKeyExA((HKEY)0xffffffff80000002,local_88,0,1,param_1);
  return LVar1;
}



// FUNCTION 143ab90d0 FUN_143ab90d0 body=1090 status=ok
// SIG undefined FUN_143ab90d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143ab91e3) */

char * FUN_143ab90d0(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  undefined1 auStackY_228 [32];
  int local_1f4;
  int local_1f0;
  short *local_1e8;
  int local_1e0;
  int local_1dc;
  undefined8 local_1d8;
  int local_1d0;
  CHAR local_1cc [4];
  undefined8 local_1c8;
  char *local_1c0;
  GEOID local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  ulonglong local_1a0;
  LONG local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined1 local_18c [16];
  undefined1 local_17c [20];
  undefined1 local_168 [4];
  undefined4 local_164;
  undefined4 local_160;
  _TIME_ZONE_INFORMATION local_138;
  char local_88 [40];
  char local_60 [40];
  char local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStackY_228;
  local_1f4 = 0;
  local_1d8 = 0;
  local_1c0 = (char *)0x0;
  _guard_xfg_dispatch_icall_nop(&local_138,0,0xac);
  _guard_xfg_dispatch_icall_nop(&local_198,0,0x2c);
  _guard_xfg_dispatch_icall_nop(local_168,0,0x2c);
  GetTimeZoneInformation(&local_138);
  local_198 = local_138.Bias;
  _guard_xfg_dispatch_icall_nop(local_18c,&local_138.StandardDate,0x10);
  _guard_xfg_dispatch_icall_nop(local_17c,&local_138.DaylightDate,0x10);
  _guard_xfg_dispatch_icall_nop(local_60,0,0x28);
  wcstombs(local_60,local_138.StandardName,0x28);
  local_1a8 = 0;
  local_88[0] = '\0';
  local_1b8 = GetUserGeoID(0x10);
  local_1d0 = GetGeoInfoA(local_1b8,4,local_1cc,3,0);
  local_1d8 = FUN_143aa56e0(0,"windowsZones",&local_1f4);
  FUN_143aa37c0(local_1d8,"mapTimezones",local_1d8,&local_1f4);
  do {
    if ((0 < local_1f4) || (cVar2 = FUN_143aa54f0(local_1d8), cVar2 == '\0')) break;
    bVar1 = false;
    local_1c8 = FUN_143aa4880(local_1d8,0,&local_1f4);
    if (0 < local_1f4) break;
    local_1b0 = FUN_143aa4760(local_1c8);
    local_1e0 = FUN_143ab8f40(local_1b0);
    if (local_1e0 == 0) {
      local_194 = local_164;
      local_190 = local_160;
      iVar3 = _guard_xfg_dispatch_icall_nop(&local_198,local_168,0x2c);
      if (iVar3 == 0) {
        local_1e8 = (short *)0x0;
        if (local_1d0 != 0) {
          local_1e8 = (short *)FUN_143aa5130(local_1c8,local_1cc,&local_1dc,&local_1f4);
        }
        if ((local_1d0 == 0) || (local_1e8 == (short *)0x0)) {
          local_1f4 = 0;
          local_1e8 = (short *)FUN_143aa5130(local_1c8,&DAT_145cf4668,&local_1dc,&local_1f4);
        }
        if (local_1f4 < 1) {
          _guard_xfg_dispatch_icall_nop(local_38,0,0x28);
          local_1e0 = FUN_143ab8ec0(local_1b0,local_38,0x28);
          if ((local_1e0 == 0) &&
             (iVar3 = _guard_xfg_dispatch_icall_nop(local_60,local_38), iVar3 == 0)) {
            bVar1 = true;
          }
          if ((bVar1) || (local_88[0] == '\0')) {
            local_1f0 = 0;
            for (; (*local_1e8 != 0 && (*local_1e8 != 0x20)); local_1e8 = local_1e8 + 1) {
              local_88[local_1f0] = (char)*local_1e8;
              local_1f0 = local_1f0 + 1;
            }
            local_1a0 = (ulonglong)local_1f0;
            if (0x27 < local_1a0) {
                    /* WARNING: Subroutine does not return */
              __report_rangecheckfailure();
            }
            local_88[local_1a0] = '\0';
          }
        }
      }
    }
    FUN_143aa2ef0(local_1c8);
  } while (!bVar1);
  if (local_88[0] != '\0') {
    sVar4 = _guard_xfg_dispatch_icall_nop(local_88);
    local_1dc = (int)sVar4;
    local_1c0 = (char *)FUN_143aa7990((longlong)(local_1dc + 1),1);
    if (local_1c0 != (char *)0x0) {
      _guard_xfg_dispatch_icall_nop(local_1c0,local_88);
    }
  }
  FUN_143aa2ef0(local_1d8);
  return local_1c0;
}



// FUNCTION 143ab9520 FUN_143ab9520 body=57 status=ok
// SIG undefined FUN_143ab9520(void)

undefined4 FUN_143ab9520(int param_1,char param_2)

{
  undefined4 uVar1;
  
  if (param_2 < '\0') {
    if (param_2 == -3) {
      uVar1 = 0xfffd;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_145cf4780 + (longlong)param_1 * 4);
  }
  return uVar1;
}



// FUNCTION 143ab9560 FUN_143ab9560 body=363 status=ok
// SIG undefined FUN_143ab9560(void)

int FUN_143ab9560(longlong param_1,int param_2,int param_3)

{
  byte bVar1;
  int local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  
  local_34 = param_3;
  local_18 = param_2;
  if (param_2 < param_3 + -5) {
    local_18 = param_3 + -5;
  }
  while( true ) {
    bVar1 = *(byte *)(param_1 + local_34);
    if (0x7d < (byte)(bVar1 + 0x80)) {
      return param_3;
    }
    if (0xbf < bVar1) break;
    local_34 = local_34 + -1;
    if (local_34 < local_18) {
      return param_3;
    }
  }
  if (bVar1 < 0xf0) {
    local_1c = (uint)(0xbf < bVar1);
    local_24 = (uint)(0xdf < bVar1);
    local_20 = local_1c + local_24;
  }
  else {
    if (bVar1 < 0xfe) {
      local_30 = (uint)(0xf7 < bVar1);
      local_2c = (uint)(0xfb < bVar1);
      local_28 = local_30 + 3 + local_2c;
    }
    else {
      local_28 = 0;
    }
    local_20 = local_28;
  }
  if (local_20 < param_3 - local_34) {
    return param_3;
  }
  return local_34;
}



// FUNCTION 143ab96e0 FUN_143ab96e0 body=829 status=ok
// SIG undefined FUN_143ab96e0(void)

uint FUN_143ab96e0(longlong param_1,int *param_2,int param_3,uint param_4,char param_5)

{
  byte bVar1;
  uint uVar2;
  uint local_res20;
  byte local_38;
  int local_34;
  uint local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  
  local_34 = *param_2;
  local_res20._0_1_ = (byte)param_4;
  if ((byte)local_res20 < 0xf0) {
    local_2c = (uint)(0xbf < (byte)local_res20);
    local_18 = (uint)(0xdf < (byte)local_res20);
    local_1c = local_2c + local_18;
  }
  else {
    if ((byte)local_res20 < 0xfe) {
      local_20 = (uint)(0xf7 < (byte)local_res20);
      local_28 = (uint)(0xfb < (byte)local_res20);
      local_24 = local_20 + 3 + local_28;
    }
    else {
      local_24 = 0;
    }
    local_1c = local_24;
  }
  local_38 = (byte)local_1c;
  if ((param_3 < local_34 + local_1c) && (-1 < param_3)) {
    local_38 = (char)param_3 - (char)local_34;
    goto LAB_143ab99a7;
  }
  local_res20 = param_4 & (1 << (6 - (byte)local_1c & 0x1f)) - 1U;
  if ((byte)local_1c != 1) {
    if ((byte)local_1c != 2) {
      if ((byte)local_1c != 3) goto LAB_143ab99a7;
      bVar1 = *(char *)(param_1 + local_34) + 0x80;
      local_34 = local_34 + 1;
      local_res20 = local_res20 << 6 | (uint)bVar1;
      if ((0x10f < (int)local_res20) || (0x3f < bVar1)) goto LAB_143ab99a7;
    }
    bVar1 = *(char *)(param_1 + local_34) + 0x80;
    local_34 = local_34 + 1;
    local_res20 = local_res20 << 6 | (uint)bVar1;
    if ((((local_res20 & 0xffe0) == 0x360) && (param_5 != -2)) || (0x3f < bVar1))
    goto LAB_143ab99a7;
  }
  bVar1 = *(char *)(param_1 + local_34) + 0x80;
  uVar2 = local_res20 << 6 | (uint)bVar1;
  if (((bVar1 < 0x40) && (*(int *)(&DAT_145cf4770 + (ulonglong)(byte)local_1c * 4) <= (int)uVar2))
     && (((param_5 < '\x01' || ((int)uVar2 < 0xfdd0)) ||
         (((0xfdef < uVar2 && ((uVar2 & 0xfffe) != 0xfffe)) || (0x10ffff < uVar2)))))) {
    *param_2 = local_34 + 1;
    return uVar2;
  }
LAB_143ab99a7:
  local_34 = *param_2;
  while ((local_38 != 0 && ((*(byte *)(param_1 + local_34) & 0xc0) == 0x80))) {
    local_34 = local_34 + 1;
    local_38 = local_38 - 1;
  }
  uVar2 = FUN_143ab9520(local_34 - *param_2,param_5);
  *param_2 = local_34;
  return uVar2;
}



// FUNCTION 143ab9a30 FUN_143ab9a30 body=853 status=ok
// SIG undefined FUN_143ab9a30(void)

ulonglong FUN_143ab9a30(longlong param_1,int param_2,int *param_3,uint param_4,char param_5)

{
  byte bVar1;
  ulonglong uVar2;
  byte bVar3;
  uint local_res20;
  byte local_37;
  byte local_36;
  int local_34;
  
  local_34 = *param_3;
  local_37 = 1;
  local_36 = 6;
  if ((param_4 & 0xc0) == 0x80) {
    local_res20 = param_4 & 0x3f;
    while (param_2 < local_34) {
      local_34 = local_34 + -1;
      bVar1 = *(byte *)(param_1 + local_34);
      if (0x7d < (byte)(bVar1 + 0x80)) {
        local_res20 = FUN_143ab9520(0,param_5);
LAB_143ab9d7e:
        return (ulonglong)local_res20;
      }
      if ((bVar1 & 0x40) != 0) {
        if (bVar1 < 0xf0) {
          bVar3 = (0xbf < bVar1) + (0xdf < bVar1);
        }
        else if (bVar1 < 0xfe) {
          bVar3 = (0xf7 < bVar1) + '\x03' + (0xfb < bVar1);
        }
        else {
          bVar3 = 0;
        }
        if (local_37 == bVar3) {
          *param_3 = local_34;
          local_res20 = local_res20 |
                        (uint)(bVar1 & (char)(1 << (6 - local_37 & 0x1f)) - 1U) << (local_36 & 0x1f)
          ;
          if (((((3 < local_37) || (0x10ffff < (int)local_res20)) ||
               ((int)local_res20 < *(int *)(&DAT_145cf4770 + (ulonglong)local_37 * 4))) ||
              (((local_res20 & 0xfffff800) == 0xd800 && (param_5 != -2)))) ||
             ((('\0' < param_5 && (0xfdcf < (int)local_res20)) &&
              (((local_res20 < 0xfdf0 || ((local_res20 & 0xfffe) == 0xfffe)) &&
               (local_res20 < 0x110000)))))) {
            if (3 < local_37) {
              local_37 = 3;
            }
            local_res20 = FUN_143ab9520(local_37,param_5);
          }
        }
        else if (local_37 < bVar3) {
          *param_3 = local_34;
          local_res20 = FUN_143ab9520(local_37,param_5);
        }
        else {
          local_res20 = FUN_143ab9520(0,param_5);
        }
        goto LAB_143ab9d7e;
      }
      if (4 < local_37) {
        local_res20 = FUN_143ab9520(0,param_5);
        goto LAB_143ab9d7e;
      }
      local_res20 = local_res20 | (bVar1 & 0x3f) << (local_36 & 0x1f);
      local_37 = local_37 + 1;
      local_36 = local_36 + 6;
    }
    uVar2 = FUN_143ab9520(0,param_5);
  }
  else {
    uVar2 = FUN_143ab9520(0,param_5);
  }
  return uVar2;
}



// FUNCTION 143ab9d90 FUN_143ab9d90 body=92 status=ok
// SIG undefined FUN_143ab9d90(void)

void FUN_143ab9d90(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_143a904f0(param_2);
  uVar2 = FUN_143a904f0(param_1);
  FUN_143aba020(param_1,0,uVar2,param_2,0,uVar1,param_3);
  return;
}



// FUNCTION 143ab9df0 FUN_143ab9df0 body=549 status=ok
// SIG undefined FUN_143ab9df0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143ab9df0(longlong param_1,undefined8 param_2,code *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  int *local_60;
  int local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  longlong local_40;
  undefined1 *local_38;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  cVar1 = FUN_143a903a0(param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_143a903d0(param_1), cVar1 != '\0')) {
    if ((*(byte *)(param_1 + 0x27) & 2) == 0) {
      local_38 = (undefined1 *)FUN_143a8fd50(param_1);
      local_58 = FUN_143a904f0(param_1);
    }
    else {
      FUN_143ab3ca0(local_30,param_1 + 8,(int)*(char *)(param_1 + 0x26));
      local_38 = local_30;
      local_58 = (int)*(char *)(param_1 + 0x26);
    }
    if (local_58 < 0x10) {
      local_4c = 0xf;
    }
    else {
      local_4c = local_58 + 0x14;
    }
    local_40 = 0;
    local_60 = (int *)CONCAT71(local_60._1_7_,1);
    local_68 = &local_40;
    cVar1 = FUN_143a8e570(param_1,local_4c,local_4c,0);
    if (cVar1 != '\0') {
      do {
        local_54 = 0;
        local_48 = FUN_143a8fe60(param_1);
        uVar2 = FUN_143a8fd50(param_1);
        local_60 = &local_54;
        local_68 = (longlong *)CONCAT44(local_68._4_4_,local_58);
        local_50 = (*param_3)(param_2,uVar2,local_48,local_38);
        FUN_143a90c60(param_1,local_50);
        if (local_54 != 0xf) break;
        local_60 = (int *)((ulonglong)local_60 & 0xffffffffffffff00);
        local_68 = (longlong *)0x0;
        cVar1 = FUN_143a8e570(param_1,local_50,local_50,0);
      } while (cVar1 != '\0');
      if (local_40 != 0) {
        FUN_143aa79f0(local_40);
      }
      cVar1 = FUN_143a8b0e0(local_54);
      if (cVar1 != '\0') {
        FUN_143a90e90(param_1);
      }
    }
  }
  return param_1;
}



// FUNCTION 143aba020 FUN_143aba020 body=172 status=ok
// SIG undefined FUN_143aba020(void)

ulonglong FUN_143aba020(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  cVar1 = FUN_143a90330(param_4);
  if (cVar1 == '\0') {
    FUN_143a90700(param_4,&param_5,&param_6);
    uVar2 = FUN_143a8fd50(param_4);
    uVar3 = FUN_143aba0d0(param_1,param_2,param_3,uVar2,param_5,param_6,param_7);
  }
  else {
    cVar1 = FUN_143a90330(param_1);
    uVar3 = (ulonglong)(cVar1 == '\0');
  }
  return uVar3;
}



// FUNCTION 143aba0d0 FUN_143aba0d0 body=315 status=ok
// SIG undefined FUN_143aba0d0(void)

ulonglong FUN_143aba0d0(undefined8 param_1,int param_2,uint param_3,longlong param_4,int param_5,
                       uint param_6,uint param_7)

{
  char cVar1;
  ulonglong uVar2;
  int local_res10 [2];
  uint local_res18 [2];
  longlong local_res20;
  undefined4 local_14;
  longlong local_10;
  
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  local_res20 = param_4;
  cVar1 = FUN_143a90330(param_1);
  if (cVar1 == '\0') {
    FUN_143a90700(param_1,local_res10,local_res18);
    if (local_res20 == 0) {
      param_6 = 0;
      param_5 = 0;
    }
    local_10 = FUN_143a8fd50(param_1);
    local_10 = local_10 + (longlong)local_res10[0] * 2;
    if (param_5 != 0) {
      local_res20 = local_res20 + (longlong)param_5 * 2;
    }
    if (local_10 == local_res20) {
      if ((int)param_6 < 0) {
        param_6 = FreeLib(local_res20 + (longlong)param_5 * 2);
      }
      uVar2 = (ulonglong)param_6;
      if (local_res18[0] != param_6) {
        return (ulonglong)((int)(local_res18[0] - param_6) >> 0x18 | 1);
      }
    }
    else {
      local_14 = 0;
      uVar2 = FUN_143abae40(local_10,local_res18[0],local_res20,param_6,param_7 | 0x10000,&local_14)
      ;
      if ((int)uVar2 != 0) {
        return (ulonglong)((int)uVar2 >> 0x18 | 1);
      }
    }
    uVar2 = uVar2 & 0xffffffffffffff00;
  }
  else {
    uVar2 = CONCAT71((uint7)(uint3)(cVar1 >> 7),0xff);
  }
  return uVar2;
}



// FUNCTION 143aba210 FUN_143aba210 body=144 status=ok
// SIG undefined FUN_143aba210(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143aba210(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
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
  puVar2 = local_37;
  for (lVar1 = 0x1f; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_18 = 0;
  local_14 = 0;
  local_48 = FUN_143a9c510();
  local_14 = param_2;
  FUN_143ab9df0(param_1,&local_48,FUN_143abb760);
  return;
}



// FUNCTION 143aba2a0 FUN_143aba2a0 body=117 status=ok
// SIG undefined FUN_143aba2a0(void)

bool FUN_143aba2a0(longlong param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  
  if (param_1 == param_2) {
    bVar2 = true;
  }
  else if ((param_1 == 0) || (param_2 == 0)) {
    bVar2 = false;
  }
  else {
    cVar1 = FUN_143ab9d90(param_1,param_2,0);
    bVar2 = cVar1 == '\0';
  }
  return bVar2;
}



// FUNCTION 143aba320 FUN_143aba320 body=117 status=ok
// SIG undefined FUN_143aba320(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_143aba320(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if (param_1 == 0) {
    local_48 = 0;
  }
  else {
    local_40 = param_1;
    FUN_143a8d3a0(local_38,param_1);
    uVar1 = FUN_143aba210(local_38,0);
    local_48 = FUN_143a90140(uVar1);
    FUN_143a8dc60(local_38);
  }
  return local_48;
}



// FUNCTION 143aba3a0 FUN_143aba3a0 body=208 status=ok
// SIG undefined FUN_143aba3a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143aba3a0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 local_37 [31];
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  puVar2 = local_37;
  for (lVar1 = 0x1f; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_18 = 0;
  local_14 = 0;
  FUN_143a94130(&local_48,param_5);
  local_58 = param_6;
  local_60 = FUN_143abbee0;
  local_68 = param_4;
  FUN_143abbfc0(&local_48,param_1,param_2,param_3);
  return;
}



// FUNCTION 143aba470 FUN_143aba470 body=175 status=ok
// SIG undefined FUN_143aba470(void)

void FUN_143aba470(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 local_res10;
  undefined4 local_14;
  
  local_res10 = param_2;
  if (param_2 == 0) {
    local_res10 = FUN_143a96a30();
  }
  for (local_14 = 0;
      (((local_14 < 4 && (cVar1 = *(char *)(local_res10 + local_14), cVar1 != '\0')) &&
       (cVar1 != '-')) && (cVar1 != '_')); local_14 = local_14 + 1) {
    *(char *)(param_1 + 0x10 + (longlong)local_14) = cVar1;
  }
  if (local_14 < 4) {
    *(undefined1 *)(param_1 + 0x10 + (longlong)local_14) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 143aba520 FUN_143aba520 body=572 status=ok
// SIG undefined FUN_143aba520(void)

int FUN_143aba520(undefined8 *param_1,code *param_2,longlong param_3,int param_4,longlong param_5,
                 longlong param_6,int param_7,int param_8,undefined4 *param_9)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  undefined4 local_18 [2];
  undefined8 local_10 [2];
  
  local_2c = 0;
  local_18[0] = *(undefined4 *)(param_1 + 6);
  local_38 = param_7;
  local_30 = 0;
  do {
    while( true ) {
      if (param_8 <= local_38) {
        if (param_4 < local_30) {
          *param_9 = 0xf;
        }
        return local_30;
      }
      *(int *)(param_6 + 0x14) = local_38;
      local_34 = (uint)*(ushort *)(param_5 + (longlong)local_38 * 2);
      iVar3 = local_38 + 1;
      if ((((local_34 & 0xfffffc00) == 0xd800) && (iVar3 != param_8)) &&
         (uVar1 = *(ushort *)(param_5 + (longlong)iVar3 * 2), (uVar1 & 0xfc00) == 0xdc00)) {
        local_34 = local_34 * 0x400 + -0x35fdc00 + (uint)uVar1;
        iVar3 = local_38 + 2;
      }
      local_38 = iVar3;
      *(int *)(param_6 + 0x18) = local_38;
      uVar4 = (*param_2)(*param_1,local_34,FUN_143abab40,param_6,local_10,param_1 + 2,local_18);
      if (local_30 < param_4) break;
LAB_143aba707:
      local_30 = FUN_143aba760(param_3,local_30,param_4,uVar4,local_10[0]);
    }
    if ((int)uVar4 < 0) {
      bVar2 = (int)~uVar4 < 0x10000;
      local_2c = ~uVar4;
    }
    else if (((int)uVar4 < 0x20) || (local_2c = uVar4, 0xffff < (int)uVar4)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_143aba707;
    *(undefined2 *)(param_3 + (longlong)local_30 * 2) = (undefined2)local_2c;
    local_30 = local_30 + 1;
  } while( true );
}



// FUNCTION 143aba760 FUN_143aba760 body=498 status=ok
// SIG undefined FUN_143aba760(void)

int FUN_143aba760(longlong param_1,int param_2,int param_3,uint param_4,undefined2 *param_5)

{
  bool bVar1;
  int local_res10;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  
  if ((int)param_4 < 0) {
    local_20 = ~param_4;
    local_24 = 0xffffffff;
  }
  else if ((int)param_4 < 0x20) {
    local_20 = 0xffffffff;
    local_24 = param_4;
  }
  else {
    local_24 = 0xffffffff;
    local_20 = param_4;
  }
  if (param_2 < param_3) {
    local_res10 = param_2;
    if ((int)local_24 < 0) {
      bVar1 = false;
      if (local_20 < 0x10000) {
        *(ushort *)(param_1 + (longlong)param_2 * 2) = (ushort)local_20;
        local_res10 = param_2 + 1;
      }
      else if ((local_20 < 0x110000) && (param_2 + 1 < param_3)) {
        *(short *)(param_1 + (longlong)param_2 * 2) = (short)((int)local_20 >> 10) + -0x2840;
        *(ushort *)(param_1 + (longlong)(param_2 + 1) * 2) = (ushort)local_20 & 0x3ff | 0xdc00;
        local_res10 = param_2 + 2;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if (local_20 < 0x10000) {
          local_1c = 1;
        }
        else {
          local_1c = 2;
        }
        local_res10 = local_res10 + local_1c;
      }
    }
    else if (param_3 < (int)(param_2 + local_24)) {
      local_res10 = param_2 + local_24;
    }
    else {
      for (; 0 < (int)local_24; local_24 = local_24 - 1) {
        *(undefined2 *)(param_1 + (longlong)local_res10 * 2) = *param_5;
        local_res10 = local_res10 + 1;
        param_5 = param_5 + 1;
      }
    }
  }
  else if ((int)local_24 < 0) {
    if (local_20 < 0x10000) {
      local_18 = 1;
    }
    else {
      local_18 = 2;
    }
    local_res10 = param_2 + local_18;
  }
  else {
    local_res10 = param_2 + local_24;
  }
  return local_res10;
}



// FUNCTION 143aba960 FUN_143aba960 body=471 status=ok
// SIG undefined FUN_143aba960(void)

int FUN_143aba960(undefined8 param_1,longlong param_2,int param_3,longlong param_4,int param_5,
                 undefined4 param_6,undefined4 *param_7)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint local_38;
  int local_34;
  int local_30;
  uint local_2c;
  undefined8 local_18 [3];
  
  local_2c = 0;
  local_34 = 0;
  local_30 = 0;
  do {
    while( true ) {
      if (param_5 <= local_30) {
        if (param_3 < local_34) {
          *param_7 = 0xf;
        }
        return local_34;
      }
      local_38 = (uint)*(ushort *)(param_4 + (longlong)local_30 * 2);
      iVar3 = local_30 + 1;
      if ((((local_38 & 0xfffffc00) == 0xd800) && (iVar3 != param_5)) &&
         (uVar1 = *(ushort *)(param_4 + (longlong)iVar3 * 2), (uVar1 & 0xfc00) == 0xdc00)) {
        local_38 = local_38 * 0x400 + -0x35fdc00 + (uint)uVar1;
        iVar3 = local_30 + 2;
      }
      local_30 = iVar3;
      uVar4 = FUN_143a9cce0(param_1,local_38,local_18,param_6);
      if (local_34 < param_3) break;
LAB_143abaae5:
      local_34 = FUN_143aba760(param_2,local_34,param_3,uVar4,local_18[0]);
    }
    if ((int)uVar4 < 0) {
      bVar2 = (int)~uVar4 < 0x10000;
      local_2c = ~uVar4;
    }
    else if (((int)uVar4 < 0x20) || (local_2c = uVar4, 0xffff < (int)uVar4)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_143abaae5;
    *(undefined2 *)(param_2 + (longlong)local_34 * 2) = (undefined2)local_2c;
    local_34 = local_34 + 1;
  } while( true );
}



// FUNCTION 143abab40 FUN_143abab40 body=529 status=ok
// SIG undefined FUN_143abab40(void)

uint FUN_143abab40(longlong *param_1,char param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  char local_res10;
  
  local_res10 = param_2;
  if (param_2 < '\0') {
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + 0x14);
    *(char *)((longlong)param_1 + 0x1c) = param_2;
  }
  else if (param_2 < '\x01') {
    local_res10 = *(char *)((longlong)param_1 + 0x1c);
  }
  else {
    *(int *)((longlong)param_1 + 0xc) = (int)param_1[3];
    *(char *)((longlong)param_1 + 0x1c) = param_2;
  }
  if (local_res10 < '\0') {
    if ((int)param_1[1] < *(int *)((longlong)param_1 + 0xc)) {
      iVar2 = *(int *)((longlong)param_1 + 0xc) + -1;
      *(int *)((longlong)param_1 + 0xc) = iVar2;
      uVar3 = (uint)*(ushort *)(*param_1 + (longlong)iVar2 * 2);
      if ((uVar3 & 0xfffffc00) != 0xdc00) {
        return uVar3;
      }
      if (*(int *)((longlong)param_1 + 0xc) <= (int)param_1[1]) {
        return uVar3;
      }
      uVar1 = *(ushort *)(*param_1 + (longlong)(*(int *)((longlong)param_1 + 0xc) + -1) * 2);
      if ((uVar1 & 0xfc00) != 0xd800) {
        return uVar3;
      }
      *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + -1;
      return (uint)uVar1 * 0x400 + -0x35fdc00 + uVar3;
    }
  }
  else if (*(int *)((longlong)param_1 + 0xc) < (int)param_1[2]) {
    uVar3 = (uint)*(ushort *)(*param_1 + (longlong)*(int *)((longlong)param_1 + 0xc) * 2);
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
    if ((uVar3 & 0xfffffc00) != 0xd800) {
      return uVar3;
    }
    if (*(int *)((longlong)param_1 + 0xc) == (int)param_1[2]) {
      return uVar3;
    }
    uVar1 = *(ushort *)(*param_1 + (longlong)*(int *)((longlong)param_1 + 0xc) * 2);
    if ((uVar1 & 0xfc00) != 0xdc00) {
      return uVar3;
    }
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
    return uVar3 * 0x400 + -0x35fdc00 + (uint)uVar1;
  }
  return 0xffffffff;
}



// FUNCTION 143abad60 FUN_143abad60 body=211 status=ok
// SIG undefined FUN_143abad60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143abad60(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 local_37 [31];
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  puVar2 = local_37;
  for (lVar1 = 0x1f; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_18 = 0;
  local_14 = 0;
  local_48 = FUN_143a9c510();
  local_14 = param_5;
  local_58 = param_6;
  local_60 = FUN_143abb760;
  local_68 = param_4;
  FUN_143abbfc0(&local_48,param_1,param_2,param_3);
  return;
}



// FUNCTION 143abae40 FUN_143abae40 body=2316 status=ok
// SIG undefined FUN_143abae40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143abae40(ushort *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                 undefined4 *param_6)

{
  char cVar1;
  ushort *local_res8;
  ushort *local_res18;
  undefined1 auStack_178 [32];
  uint local_158;
  uint local_154;
  uint local_150;
  ushort local_14c;
  ushort local_148;
  uint local_144;
  int local_140;
  uint local_13c;
  int local_138;
  ushort *local_130;
  ushort *local_128;
  uint local_120;
  uint local_11c;
  ushort *local_118;
  ushort *local_110;
  undefined8 local_108;
  undefined8 local_100;
  ushort *apuStack_f8 [6];
  ushort *apuStack_c8 [6];
  ushort local_98 [32];
  ushort local_58 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_100 = FUN_143a9c510();
  cVar1 = FUN_143a8b0e0(*param_6);
  if (cVar1 == '\0') {
    if (param_2 == -1) {
      local_128 = (ushort *)0x0;
    }
    else {
      local_128 = param_1 + param_2;
    }
    if (param_4 == -1) {
      local_130 = (ushort *)0x0;
    }
    else {
      local_130 = param_3 + param_4;
    }
    local_140 = 0;
    local_138 = 0;
    local_158 = 0xffffffff;
    local_154 = 0xffffffff;
    local_res8 = param_1;
    local_res18 = param_3;
    local_118 = param_1;
    local_110 = param_3;
LAB_143abaf29:
    if ((int)local_154 < 0) {
      while( true ) {
        if ((local_res8 != local_128) &&
           ((local_154 = (uint)*local_res8, local_154 != 0 ||
            ((local_128 != (ushort *)0x0 && ((param_5 & 0x1000) == 0)))))) {
          local_res8 = local_res8 + 1;
          goto LAB_143abaff6;
        }
        if (local_138 == 0) break;
        do {
          local_138 = local_138 + -1;
          local_118 = apuStack_c8[(longlong)local_138 * 3];
        } while (local_118 == (ushort *)0x0);
        local_res8 = apuStack_c8[(longlong)local_138 * 3 + 1];
        local_128 = apuStack_c8[(longlong)local_138 * 3 + 2];
      }
      local_154 = 0xffffffff;
    }
LAB_143abaff6:
    if ((int)local_158 < 0) {
      while( true ) {
        if ((local_res18 != local_130) &&
           ((local_158 = (uint)*local_res18, local_158 != 0 ||
            ((local_130 != (ushort *)0x0 && ((param_5 & 0x1000) == 0)))))) {
          local_res18 = local_res18 + 1;
          goto LAB_143abb0c3;
        }
        if (local_140 == 0) break;
        do {
          local_140 = local_140 + -1;
          local_110 = apuStack_f8[(longlong)local_140 * 3];
        } while (local_110 == (ushort *)0x0);
        local_res18 = apuStack_f8[(longlong)local_140 * 3 + 1];
        local_130 = apuStack_f8[(longlong)local_140 * 3 + 2];
      }
      local_158 = 0xffffffff;
    }
LAB_143abb0c3:
    if (local_154 != local_158) {
      if ((int)local_154 < 0) {
        return -1;
      }
      if ((int)local_158 < 0) {
        return 1;
      }
      local_11c = local_154;
      if ((local_154 & 0xfffff800) == 0xd800) {
        if ((local_154 & 0x400) == 0) {
          if ((local_res8 != local_128) && (local_14c = *local_res8, (local_14c & 0xfc00) == 0xdc00)
             ) {
            local_11c = local_154 * 0x400 + -0x35fdc00 + (uint)local_14c;
          }
        }
        else if ((local_118 <= local_res8 + -2) &&
                (local_14c = local_res8[-2], (local_14c & 0xfc00) == 0xd800)) {
          local_11c = (uint)local_14c * 0x400 + -0x35fdc00 + local_154;
        }
      }
      local_120 = local_158;
      if ((local_158 & 0xfffff800) == 0xd800) {
        if ((local_158 & 0x400) == 0) {
          if ((local_res18 != local_130) &&
             (local_148 = *local_res18, (local_148 & 0xfc00) == 0xdc00)) {
            local_120 = local_158 * 0x400 + -0x35fdc00 + (uint)local_148;
          }
        }
        else if ((local_110 <= local_res18 + -2) &&
                (local_148 = local_res18[-2], (local_148 & 0xfc00) == 0xd800)) {
          local_120 = (uint)local_148 * 0x400 + -0x35fdc00 + local_158;
        }
      }
      if ((local_138 == 0) &&
         (local_150 = FUN_143a9cce0(local_100,local_11c,&local_108,param_5), -1 < (int)local_150)) {
        if ((local_154 & 0xfffff800) == 0xd800) {
          if ((local_154 & 0x400) == 0) {
            local_res8 = local_res8 + 1;
          }
          else {
            local_158 = (uint)local_res18[-2];
            local_res18 = local_res18 + -1;
          }
        }
        apuStack_c8[0] = local_118;
        apuStack_c8[1] = local_res8;
        apuStack_c8[2] = local_128;
        local_138 = local_138 + 1;
        if ((int)local_150 < 0x20) {
          FUN_143ab3ca0(local_98,local_108,local_150);
        }
        else {
          if (local_150 < 0x10000) {
            local_98[0] = (ushort)local_150;
            local_144 = 1;
          }
          else {
            local_98[0] = (short)((int)local_150 >> 10) + 0xd7c0;
            local_98[1] = (ushort)local_150 & 0x3ff | 0xdc00;
            local_144 = 2;
          }
          local_150 = local_144;
        }
        local_res8 = local_98;
        local_128 = local_98 + (int)local_150;
        local_154 = 0xffffffff;
        local_118 = local_res8;
      }
      else {
        if ((local_140 != 0) ||
           (local_150 = FUN_143a9cce0(local_100,local_120,&local_108,param_5), (int)local_150 < 0))
        {
          if (((0xd7ff < (int)local_154) && (0xd7ff < (int)local_158)) && ((param_5 & 0x8000) != 0))
          {
            if ((((0xdbff < (int)local_154) || (local_res8 == local_128)) ||
                ((*local_res8 & 0xfc00) != 0xdc00)) &&
               ((((local_154 & 0xfffffc00) != 0xdc00 || (local_118 == local_res8 + -1)) ||
                ((local_res8[-2] & 0xfc00) != 0xd800)))) {
              local_154 = local_154 - 0x2800;
            }
            if ((((0xdbff < (int)local_158) || (local_res18 == local_130)) ||
                ((*local_res18 & 0xfc00) != 0xdc00)) &&
               ((((local_158 & 0xfffffc00) != 0xdc00 || (local_110 == local_res18 + -1)) ||
                ((local_res18[-2] & 0xfc00) != 0xd800)))) {
              local_158 = local_158 - 0x2800;
            }
          }
          return local_154 - local_158;
        }
        if ((local_158 & 0xfffff800) == 0xd800) {
          if ((local_158 & 0x400) == 0) {
            local_res18 = local_res18 + 1;
          }
          else {
            local_154 = (uint)local_res8[-2];
            local_res8 = local_res8 + -1;
          }
        }
        apuStack_f8[0] = local_110;
        apuStack_f8[1] = local_res18;
        apuStack_f8[2] = local_130;
        local_140 = local_140 + 1;
        if ((int)local_150 < 0x20) {
          FUN_143ab3ca0(local_58,local_108,local_150);
        }
        else {
          if (local_150 < 0x10000) {
            local_58[0] = (ushort)local_150;
            local_13c = 1;
          }
          else {
            local_58[0] = (short)((int)local_150 >> 10) + 0xd7c0;
            local_58[1] = (ushort)local_150 & 0x3ff | 0xdc00;
            local_13c = 2;
          }
          local_150 = local_13c;
        }
        local_res18 = local_58;
        local_130 = local_58 + (int)local_150;
        local_158 = 0xffffffff;
        local_110 = local_res18;
      }
      goto LAB_143abaf29;
    }
    if (-1 < (int)local_154) {
      local_158 = 0xffffffff;
      local_154 = 0xffffffff;
      goto LAB_143abaf29;
    }
  }
  return 0;
}



// FUNCTION 143abb760 FUN_143abb760 body=87 status=ok
// SIG undefined FUN_143abb760(void)

void FUN_143abb760(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  FUN_143aba960(*param_1,param_2,param_3,param_4,param_5,*(undefined4 *)((longlong)param_1 + 0x34),
                param_6);
  return;
}



// FUNCTION 143abb7c0 FUN_143abb7c0 body=213 status=ok
// SIG undefined FUN_143abb7c0(void)

void FUN_143abb7c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  
  local_20 = 0;
  local_1c = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_b = 0;
  local_a = 0;
  local_9 = 0;
  local_18 = param_5;
  local_28 = param_4;
  FUN_143aba520(param_1,FUN_143a9d130,param_2,param_3,param_4,&local_28,0,param_5,param_6);
  return;
}



// FUNCTION 143abb8a0 FUN_143abb8a0 body=1592 status=ok
// SIG undefined FUN_143abb8a0(void)

int FUN_143abb8a0(undefined8 *param_1,longlong param_2,int param_3,longlong param_4,int param_5,
                 undefined4 *param_6)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int local_78;
  int local_74;
  uint local_70;
  int local_6c;
  int local_64;
  int local_5c;
  undefined4 local_50 [2];
  longlong *local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined8 local_20;
  void *local_18;
  void *local_10;
  
  cVar3 = FUN_143a8b0e0(*param_6);
  if (cVar3 == '\0') {
    local_48 = (longlong *)param_1[1];
    local_50[0] = *(undefined4 *)(param_1 + 6);
    local_38 = 0;
    local_34 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_23 = 0;
    local_22 = 0;
    local_21 = 0;
    local_30 = param_5;
    local_74 = 0;
    bVar2 = true;
    local_5c = 0;
    local_40 = param_4;
    while (local_5c < param_5) {
      if (bVar2) {
        bVar2 = false;
        local_6c = (**(code **)(*local_48 + 0x48))(local_48);
      }
      else {
        local_6c = (**(code **)(*local_48 + 0x68))(local_48);
      }
      if ((local_6c == -1) || (param_5 < local_6c)) {
        local_6c = param_5;
      }
      if (local_5c < local_6c) {
        local_64 = local_5c;
        local_70 = (uint)*(ushort *)(param_4 + (longlong)local_5c * 2);
        local_78 = local_5c + 1;
        if ((((local_70 & 0xfffffc00) == 0xd800) && (local_78 != local_6c)) &&
           (uVar1 = *(ushort *)(param_4 + (longlong)local_78 * 2), (uVar1 & 0xfc00) == 0xdc00)) {
          local_78 = local_5c + 2;
          local_70 = local_70 * 0x400 + -0x35fdc00 + (uint)uVar1;
        }
        if (((*(uint *)((longlong)param_1 + 0x34) & 0x200) == 0) &&
           (iVar4 = FUN_143a9c670(*param_1,local_70), iVar4 == 0)) {
          do {
            iVar4 = local_78;
            local_64 = local_78;
            if (local_78 == local_6c) break;
            local_70 = (uint)*(ushort *)(param_4 + (longlong)local_78 * 2);
            iVar5 = local_78 + 1;
            if ((((local_70 & 0xfffffc00) == 0xd800) && (iVar5 != local_6c)) &&
               (uVar1 = *(ushort *)(param_4 + (longlong)iVar5 * 2), (uVar1 & 0xfc00) == 0xdc00)) {
              local_70 = local_70 * 0x400 + -0x35fdc00 + (uint)uVar1;
              iVar5 = local_78 + 2;
            }
            local_78 = iVar5;
            iVar5 = FUN_143a9c670(*param_1,local_70);
          } while (iVar5 == 0);
          iVar4 = iVar4 - local_5c;
          if (0 < iVar4) {
            if (local_74 + iVar4 <= param_3) {
              local_18 = (void *)(param_2 + (longlong)local_74 * 2);
              _guard_xfg_dispatch_icall_nop
                        (local_18,(void *)(param_4 + (longlong)local_5c * 2),(longlong)(iVar4 * 2));
            }
            local_74 = local_74 + iVar4;
          }
        }
        if (local_64 < local_78) {
          local_2c = local_64;
          local_28 = local_78;
          puVar7 = local_50;
          uVar6 = FUN_143a9d8d0(*param_1,local_70,FUN_143abab40,&local_40,&local_20,param_1 + 2,
                                puVar7);
          uVar8 = (undefined4)((ulonglong)puVar7 >> 0x20);
          local_74 = FUN_143aba760(param_2,local_74,param_3,uVar6,local_20);
          if (((local_64 + 1 < local_6c) &&
              (iVar4 = FUN_143a9c230(param_1 + 2,local_50), iVar4 == 4)) &&
             (((*(short *)(param_4 + (longlong)local_64 * 2) == 0x49 ||
               (*(short *)(param_4 + (longlong)local_64 * 2) == 0x69)) &&
              ((*(short *)(param_4 + (longlong)(local_64 + 1) * 2) == 0x4a ||
               (*(short *)(param_4 + (longlong)(local_64 + 1) * 2) == 0x6a)))))) {
            local_74 = FUN_143aba760(param_2,local_74,param_3,0x4a,local_20);
            local_78 = local_78 + 1;
          }
          if (local_78 < local_6c) {
            if ((*(uint *)((longlong)param_1 + 0x34) & 0x100) == 0) {
              iVar4 = FUN_143aba520(param_1,FUN_143a9d130,param_2 + (longlong)local_74 * 2,
                                    param_3 - local_74,param_4,&local_40,CONCAT44(uVar8,local_78),
                                    local_6c,param_6);
              local_74 = local_74 + iVar4;
            }
            else {
              iVar4 = local_6c - local_78;
              if (local_74 + iVar4 <= param_3) {
                local_10 = (void *)(param_2 + (longlong)local_74 * 2);
                _guard_xfg_dispatch_icall_nop
                          (local_10,(void *)(param_4 + (longlong)local_78 * 2),(longlong)(iVar4 * 2)
                          );
              }
              local_74 = local_74 + iVar4;
            }
          }
        }
      }
      local_5c = local_6c;
    }
    if (param_3 < local_74) {
      *param_6 = 0xf;
    }
  }
  else {
    local_74 = 0;
  }
  return local_74;
}



// FUNCTION 143abbee0 FUN_143abbee0 body=213 status=ok
// SIG undefined FUN_143abbee0(void)

void FUN_143abbee0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  
  local_20 = 0;
  local_1c = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_b = 0;
  local_a = 0;
  local_9 = 0;
  local_18 = param_5;
  local_28 = param_4;
  FUN_143aba520(param_1,FUN_143a9d930,param_2,param_3,param_4,&local_28,0,param_5,param_6);
  return;
}



// FUNCTION 143abbfc0 FUN_143abbfc0 body=625 status=ok
// SIG undefined FUN_143abbfc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143abbfc0(undefined8 param_1,undefined1 *param_2,int param_3,undefined1 *param_4,int param_5,
             code *param_6,undefined4 *param_7)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_2c8 [32];
  int local_2a8;
  undefined4 *local_2a0;
  int local_298;
  undefined1 *local_290;
  int local_288;
  int local_284;
  undefined1 local_278 [608];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  cVar1 = FUN_143a8b0e0(*param_7);
  if (cVar1 == '\0') {
    if (((param_3 < 0) ||
        (((param_2 == (undefined1 *)0x0 && (0 < param_3)) || (param_4 == (undefined1 *)0x0)))) ||
       (param_5 < -1)) {
      *param_7 = 1;
      uVar2 = 0;
    }
    else {
      if (param_5 == -1) {
        param_5 = FreeLib(param_4);
      }
      local_290 = param_2;
      if ((param_2 != (undefined1 *)0x0) &&
         (((param_2 <= param_4 && (param_4 < param_2 + (longlong)param_3 * 2)) ||
          ((param_4 <= param_2 && (param_2 < param_4 + (longlong)param_5 * 2)))))) {
        if (param_3 < 0x12d) {
          local_290 = local_278;
        }
        else {
          local_290 = (undefined1 *)FUN_143aa7a40((longlong)(param_3 << 1));
          if (local_290 == (undefined1 *)0x0) {
            *param_7 = 7;
            return 0;
          }
        }
      }
      local_2a0 = param_7;
      local_2a8 = param_5;
      local_298 = (*param_6)(param_1,local_290,param_3,param_4);
      if (local_290 != param_2) {
        if (0 < local_298) {
          local_284 = param_3;
          if (local_298 <= param_3) {
            local_284 = local_298;
          }
          local_288 = local_284;
          if (0 < local_284) {
            memmove(param_2,local_290,(longlong)(local_284 << 1));
          }
        }
        if (local_290 != local_278) {
          FUN_143aa79f0(local_290);
        }
      }
      uVar2 = FUN_143ab4a70(param_2,param_3,local_298,param_7);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143abc240 FUN_143abc240 body=192 status=ok
// SIG undefined FUN_143abc240(void)

undefined8 FUN_143abc240(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    uVar2 = FUN_143ac5410(*(undefined8 *)(param_1 + 0x10),&DAT_145cf48b0,
                          *(undefined8 *)(param_1 + 0x18),FUN_143abc5e0,0,param_2);
    cVar1 = FUN_143a8b0e0(*param_2);
    if (cVar1 == '\0') {
      uVar3 = FUN_143abcae0(param_1,uVar2,param_2);
      cVar1 = FUN_143a8b0e0(*param_2);
      if (cVar1 != '\0') {
        FUN_143ac56d0(uVar2);
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143abc300 FUN_143abc300 body=250 status=ok
// SIG undefined FUN_143abc300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143abc300(void)

{
  undefined1 auStack_88 [32];
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  int local_58;
  char local_50 [64];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  FUN_143ad3da0(local_50);
  local_5c = 0;
  local_64 = 0x22;
  local_60 = 0xffffffff;
  while( true ) {
    while( true ) {
      local_68 = (local_5c + local_64) / 2;
      if (local_60 == local_68) {
        return 0;
      }
      local_60 = local_68;
      local_58 = _guard_xfg_dispatch_icall_nop
                           (local_50,*(char **)(&DAT_146bc5740 + (ulonglong)local_68 * 0x10));
      if (-1 < local_58) break;
      local_64 = local_68;
    }
    if (local_58 < 1) break;
    local_5c = local_68;
  }
  return *(undefined8 *)
          (&DAT_145cf47a0 + (longlong)*(int *)(&DAT_146bc5748 + (ulonglong)local_68 * 0x10) * 8);
}



// FUNCTION 143abc400 FUN_143abc400 body=473 status=ok
// SIG undefined FUN_143abc400(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143abc400(char *param_1,undefined4 *param_2)

{
  char cVar1;
  size_t sVar2;
  char *pcVar3;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined1 local_137;
  int local_134;
  ulonglong local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120;
  undefined1 local_11f;
  undefined2 local_11e;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8 [60];
  undefined1 uStack_bc;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_128 = 0x28;
  local_124 = 0;
  local_120 = 0;
  local_11f = 0;
  local_11e = 0;
  local_11c = 0;
  local_118 = 0;
  local_110 = (char *)0x0;
  local_108 = 0;
  sVar2 = _guard_xfg_dispatch_icall_nop(param_1);
  local_134 = (int)sVar2;
  pcVar3 = strchr(param_1,0x2c);
  local_138 = pcVar3 != (char *)0x0;
  local_137 = local_138;
  local_110 = param_1;
  if ((bool)local_138) {
    local_f8[0] = 0;
    uStack_bc = 0;
    local_1c = 0;
    FUN_143abc6d0(param_1,local_f8,&local_128,param_2);
    cVar1 = FUN_143a8b0e0(*param_2);
    if (cVar1 != '\0') {
      return;
    }
  }
  local_100 = FUN_143abc300(local_110);
  FUN_143ab2410(&DAT_146bc56e8);
  DAT_146bc5738 = local_100;
  DAT_146bc599d = local_138;
  _guard_xfg_dispatch_icall_nop(&DAT_146bc5960,param_1,(longlong)local_134);
  local_130 = (ulonglong)local_134;
  if (local_130 < 0x3d) {
    (&DAT_146bc5960)[local_130] = 0;
    DAT_146bc5730 = &DAT_146bc5960;
    FUN_143aa77b0(0xc,FUN_143abca30);
    FUN_143ab2470(&DAT_146bc56e8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_rangecheckfailure();
}



// FUNCTION 143abc5e0 FUN_143abc5e0 body=228 status=ok
// SIG undefined FUN_143abc5e0(void)

undefined1 FUN_143abc5e0(void)

{
  ushort *in_R9;
  undefined1 local_18;
  
  if ((((((*in_R9 < 0x14) || ((char)in_R9[2] != '\0')) || (*(char *)((longlong)in_R9 + 5) != '\0'))
       || (((char)in_R9[3] != '\x02' || ((char)in_R9[4] != 'c')))) ||
      ((*(char *)((longlong)in_R9 + 9) != 'n' ||
       (((char)in_R9[5] != 'v' || (*(char *)((longlong)in_R9 + 0xb) != 't')))))) ||
     ((char)in_R9[6] != '\x06')) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143abc6d0 FUN_143abc6d0 body=861 status=ok
// SIG undefined FUN_143abc6d0(void)

void FUN_143abc6d0(char *param_1,char *param_2,longlong param_3,undefined4 *param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *local_res8;
  int local_34;
  char *local_20;
  char *local_18;
  
  local_34 = 0;
  *(char **)(param_3 + 0x18) = param_1;
  *(char **)(param_3 + 0x20) = param_2 + 0x3c;
  *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_2 + 0xdc);
  local_20 = param_2;
  for (local_res8 = param_1; (cVar1 = *local_res8, cVar1 != '\0' && (cVar1 != ','));
      local_res8 = local_res8 + 1) {
    local_34 = local_34 + 1;
    if (0x3b < local_34) {
      *param_4 = 1;
      *param_2 = '\0';
      return;
    }
    *local_20 = cVar1;
    local_20 = local_20 + 1;
  }
  *local_20 = '\0';
  *(char **)(param_3 + 0x18) = param_2;
  pcVar2 = local_res8;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          local_res8 = pcVar2;
          if (*local_res8 == '\0') {
            return;
          }
          if (*local_res8 == ',') {
            local_res8 = local_res8 + 1;
          }
          iVar3 = strncmp(local_res8,"locale=",7);
          if (iVar3 != 0) break;
          local_18 = param_2 + 0x3c;
          local_res8 = local_res8 + 7;
          local_34 = 0;
          while ((cVar1 = *local_res8, cVar1 != '\0' && (cVar1 != ','))) {
            local_res8 = local_res8 + 1;
            local_34 = local_34 + 1;
            if (0x9c < local_34) {
              *param_4 = 1;
              param_2[0x3c] = '\0';
              return;
            }
            *local_18 = cVar1;
            local_18 = local_18 + 1;
          }
          *local_18 = '\0';
          pcVar2 = local_res8;
        }
        iVar3 = strncmp(local_res8,"version=",8);
        if (iVar3 != 0) break;
        cVar1 = local_res8[8];
        if (cVar1 == '\0') {
          uVar4 = *(uint *)(param_2 + 0xdc);
          *(uint *)(param_2 + 0xdc) = uVar4 & 0xfffffff0;
          *(uint *)(param_3 + 0xc) = uVar4 & 0xfffffff0;
          return;
        }
        pcVar2 = local_res8 + 8;
        if ((byte)(cVar1 - 0x30U) < 10) {
          uVar4 = *(uint *)(param_2 + 0xdc) & 0xfffffff0 | (int)cVar1 - 0x30U;
          *(uint *)(param_2 + 0xdc) = uVar4;
          *(uint *)(param_3 + 0xc) = uVar4;
          pcVar2 = local_res8 + 9;
        }
      }
      iVar3 = strncmp(local_res8,"swaplfnl",8);
      if (iVar3 != 0) break;
      uVar4 = *(uint *)(param_2 + 0xdc);
      *(uint *)(param_2 + 0xdc) = uVar4 | 0x10;
      *(uint *)(param_3 + 0xc) = uVar4 | 0x10;
      pcVar2 = local_res8 + 8;
    }
    do {
      cVar1 = *local_res8;
      local_res8 = local_res8 + 1;
      if (cVar1 == '\0') break;
    } while (cVar1 != ',');
    pcVar2 = local_res8;
    if (cVar1 == '\0') {
      return;
    }
  } while( true );
}



// FUNCTION 143abca30 FUN_143abca30 body=169 status=ok
// SIG undefined FUN_143abca30(void)

/* WARNING: Removing unreachable block (ram,0x000143abca92) */

bool FUN_143abca30(void)

{
  int iVar1;
  
  FUN_143abd260();
  if ((DAT_146bc56e0 != 0) && (iVar1 = FUN_143ab3100(DAT_146bc56e0), iVar1 == 0)) {
    FUN_143ab2e80(DAT_146bc56e0);
    DAT_146bc56e0 = 0;
  }
  FUN_143abcd10();
  DAT_146bc5730 = 0;
  DAT_146bc5960 = 0;
  DAT_146bc599d = 0;
  DAT_146bc5738 = 0;
  return DAT_146bc56e0 == 0;
}



// FUNCTION 143abcae0 FUN_143abcae0 body=406 status=ok
// SIG undefined FUN_143abcae0(void)

void * FUN_143abcae0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  void *_Dst;
  
  puVar4 = (uint *)FUN_143ac5780(param_2);
  bVar1 = *(byte *)((longlong)puVar4 + 0x45);
  iVar3 = (int)(char)bVar1;
  cVar2 = FUN_143a8b0e0(*param_3);
  if (cVar2 == '\0') {
    if ((((bVar1 < 0x22) && (*(longlong *)(&DAT_145cf47a0 + (longlong)iVar3 * 8) != 0)) &&
        (*(int *)(*(longlong *)(&DAT_145cf47a0 + (longlong)iVar3 * 8) + 4) == 1)) &&
       (*puVar4 == 100)) {
      _Dst = (void *)FUN_143aa7a40(0x130);
      if (_Dst == (void *)0x0) {
        *param_3 = 7;
        _Dst = (void *)0x0;
      }
      else {
        _guard_xfg_dispatch_icall_nop(_Dst,*(void **)(&DAT_145cf47a0 + (longlong)iVar3 * 8),0x130);
        *(uint **)((longlong)_Dst + 0x18) = puVar4;
        *(undefined1 *)((longlong)_Dst + 0x20) = 0;
        *(undefined8 *)((longlong)_Dst + 8) = param_2;
        if (*(longlong *)(*(longlong *)((longlong)_Dst + 0x28) + 8) != 0) {
          (**(code **)(*(longlong *)((longlong)_Dst + 0x28) + 8))
                    (_Dst,param_1,(longlong)puVar4 + (ulonglong)*puVar4,param_3);
          cVar2 = FUN_143a8b0e0(*param_3);
          if (cVar2 != '\0') {
            FUN_143aa79f0(*(undefined8 *)((longlong)_Dst + 0x10));
            FUN_143aa79f0(_Dst);
            _Dst = (void *)0x0;
          }
        }
      }
    }
    else {
      *param_3 = 0xd;
      _Dst = (void *)0x0;
    }
  }
  else {
    _Dst = (void *)0x0;
  }
  return _Dst;
}



// FUNCTION 143abcc80 FUN_143abcc80 body=136 status=ok
// SIG undefined FUN_143abcc80(void)

undefined8 FUN_143abcc80(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x28) + 0x10))(param_1);
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_143ac56d0(*(undefined8 *)(param_1 + 8));
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_143aa79f0(*(undefined8 *)(param_1 + 0x10));
    }
    FUN_143aa79f0(param_1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 143abcd10 FUN_143abcd10 body=63 status=ok
// SIG undefined FUN_143abcd10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143abcd10(void)

{
  _DAT_146bc5720 = 0;
  if (DAT_146bc5718 != 0) {
    FUN_143aa79f0(DAT_146bc5718);
    DAT_146bc5718 = 0;
  }
  FUN_143a9a9f0(&DAT_146bc5728);
  return;
}



// FUNCTION 143abcd50 FUN_143abcd50 body=55 status=ok
// SIG undefined FUN_143abcd50(void)

undefined8 FUN_143abcd50(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_146bc56e0 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_143ab32d0(DAT_146bc56e0,param_1);
  }
  return uVar1;
}



// FUNCTION 143abcd90 FUN_143abcd90 body=171 status=ok
// SIG undefined FUN_143abcd90(void)

void FUN_143abcd90(longlong param_1)

{
  char cVar1;
  ushort uVar2;
  undefined4 local_18 [6];
  
  local_18[0] = 0;
  if (DAT_146bc56e0 == 0) {
    uVar2 = FUN_143ad3c60(local_18);
    DAT_146bc56e0 = FUN_143ab3600(FUN_143ab3350,FUN_143ab2f70,0,(ulonglong)uVar2 << 1,local_18);
    FUN_143aa77b0(0xc,FUN_143abca30);
    cVar1 = FUN_143a8b0e0(local_18[0]);
    if (cVar1 != '\0') {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  FUN_143ab36d0(DAT_146bc56e0,*(longlong *)(param_1 + 0x18) + 4,param_1,local_18);
  return;
}



// FUNCTION 143abce40 FUN_143abce40 body=246 status=ok
// SIG undefined FUN_143abce40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143abce40(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined1 local_238;
  undefined1 local_237;
  undefined2 local_236;
  undefined4 local_234;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined1 local_218 [224];
  undefined1 local_138 [288];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_240 = 0x28;
  local_23c = 0;
  local_238 = 0;
  local_237 = 0;
  local_236 = 0;
  local_234 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  cVar1 = FUN_143a8b110(*param_2);
  if (cVar1 != '\0') {
    local_238 = 1;
    local_248 = FUN_143abd4c0(param_1,local_218,&local_240,param_2);
    FUN_143abcf40(local_138,local_248,&local_240,param_2);
    FUN_143abdae0(local_248);
  }
  FUN_143a8b110(*param_2);
  return;
}



// FUNCTION 143abcf40 FUN_143abcf40 body=514 status=ok
// SIG undefined FUN_143abcf40(void)

undefined8 *
FUN_143abcf40(undefined8 *param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 *local_res8;
  undefined1 local_18;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    if (param_1 == (undefined8 *)0x0) {
      local_res8 = (undefined8 *)FUN_143aa7a40(0x120);
      if (local_res8 == (undefined8 *)0x0) {
        *param_4 = 7;
        FUN_143abdae0(param_2);
        return (undefined8 *)0x0;
      }
      local_18 = 0;
    }
    else {
      local_18 = 1;
      local_res8 = param_1;
    }
    _guard_xfg_dispatch_icall_nop(local_res8,0,0x120);
    *(undefined1 *)((longlong)local_res8 + 0x3d) = local_18;
    local_res8[6] = param_2;
    *(undefined4 *)(local_res8 + 7) = *(undefined4 *)(param_3 + 0xc);
    if (*(char *)(param_3 + 8) == '\0') {
      *(undefined4 *)(local_res8 + 0x1a) = 0xffffffff;
      local_res8[1] = FUN_143ad6650;
      *local_res8 = FUN_143ad65f0;
      *(undefined4 *)(local_res8 + 9) = *(undefined4 *)(param_2 + 0x30);
      *(undefined1 *)(local_res8 + 0xb) = *(undefined1 *)(*(longlong *)(param_2 + 0x18) + 0x47);
      *(undefined1 *)((longlong)local_res8 + 0x5e) =
           *(undefined1 *)(*(longlong *)(param_2 + 0x18) + 0x50);
      *(undefined1 *)((longlong)local_res8 + 0x59) =
           *(undefined1 *)(*(longlong *)(param_2 + 0x18) + 0x4c);
      local_res8[5] = local_res8 + 0x11;
      _guard_xfg_dispatch_icall_nop
                ((void *)local_res8[5],(void *)(*(longlong *)(param_2 + 0x18) + 0x48),
                 (longlong)*(char *)((longlong)local_res8 + 0x59));
      *(undefined4 *)((longlong)local_res8 + 0x11c) = 1;
    }
    param_1 = local_res8;
    if (*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x18) != 0) {
      (**(code **)(*(longlong *)(param_2 + 0x28) + 0x18))(local_res8,param_3,param_4);
      cVar1 = FUN_143a8b0e0(*param_4);
      if ((cVar1 != '\0') && (*(char *)(param_3 + 8) == '\0')) {
        FUN_143ab09a0(local_res8);
        param_1 = (undefined8 *)0x0;
      }
    }
  }
  else {
    FUN_143abdae0(param_2);
  }
  return param_1;
}



// FUNCTION 143abd150 FUN_143abd150 body=263 status=ok
// SIG undefined FUN_143abd150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143abd150(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120;
  undefined1 local_11f;
  undefined2 local_11e;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8 [224];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_128 = 0x28;
  local_124 = 0;
  local_120 = 0;
  local_11f = 0;
  local_11e = 0;
  local_11c = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  cVar1 = FUN_143a8b110(*param_3);
  if (cVar1 != '\0') {
    local_100 = FUN_143abd4c0(param_2,local_f8,&local_128,param_3);
    uVar2 = FUN_143abcf40(param_1,local_100,&local_128,param_3);
    cVar1 = FUN_143a8b110(*param_3);
    if (cVar1 != '\0') {
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 143abd260 FUN_143abd260 body=243 status=ok
// SIG undefined FUN_143abd260(void)

int FUN_143abd260(void)

{
  bool bVar1;
  int local_24;
  int local_20;
  undefined4 local_1c;
  longlong local_18;
  longlong local_10;
  
  local_18 = 0;
  local_20 = 0;
  FUN_143abdb90();
  if (DAT_146bc56e0 == 0) {
    local_20 = 0;
  }
  else {
    FUN_143ab2410(&DAT_146bc56e8);
    bVar1 = false;
    do {
      local_24 = 0;
      local_1c = 0xffffffff;
      while (local_10 = FUN_143ab3590(DAT_146bc56e0,&local_1c), local_10 != 0) {
        local_18 = *(longlong *)(local_10 + 8);
        if (*(int *)(local_18 + 4) == 0) {
          local_20 = local_20 + 1;
          FUN_143ab37e0(DAT_146bc56e0,local_10);
          *(undefined1 *)(local_18 + 0x20) = 0;
          FUN_143abcc80(local_18);
        }
        else {
          local_24 = local_24 + 1;
        }
      }
    } while ((!bVar1) && (bVar1 = true, 0 < local_24));
    FUN_143ab2470(&DAT_146bc56e8);
  }
  return local_20;
}



// FUNCTION 143abd360 FUN_143abd360 body=271 status=ok
// SIG undefined FUN_143abd360(void)

char * FUN_143abd360(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 local_28 [2];
  char *local_20;
  longlong local_18;
  undefined1 local_10 [16];
  
  FUN_143a8ab50(local_10,&DAT_146bc56e8);
  local_20 = DAT_146bc5730;
  FUN_143a8ad90(local_10);
  if (local_20 == (char *)0x0) {
    local_28[0] = 0;
    local_18 = 0;
    local_20 = (char *)FUN_143a91800();
    if (local_20 != (char *)0x0) {
      local_18 = FUN_143ab0f00(local_20,local_28);
      cVar1 = FUN_143a8b110(local_28[0]);
      if ((cVar1 != '\0') && (local_18 != 0)) {
        local_20 = (char *)FUN_143ab0e90(local_18,local_28);
      }
    }
    if ((((local_20 == (char *)0x0) || (*local_20 == '\0')) ||
        (cVar1 = FUN_143a8b0e0(local_28[0]), cVar1 != '\0')) ||
       ((local_18 == 0 || (sVar2 = _guard_xfg_dispatch_icall_nop(local_20), 0x3c < sVar2)))) {
      local_20 = "US-ASCII";
    }
    FUN_143abc400(local_20,local_28);
    FUN_143ab09a0(local_18);
    return local_20;
  }
  return local_20;
}



// FUNCTION 143abd470 FUN_143abd470 body=75 status=ok
// SIG undefined FUN_143abd470(void)

void FUN_143abd470(longlong param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 4) != -1)) {
    FUN_143ab2410(&DAT_146bc56e8);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    FUN_143ab2470(&DAT_146bc56e8);
  }
  return;
}



// FUNCTION 143abd4c0 FUN_143abd4c0 body=1322 status=ok
// SIG undefined FUN_143abd4c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined * FUN_143abd4c0(char *param_1,undefined1 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 *local_res10;
  undefined4 *local_res18;
  undefined1 auStack_168 [32];
  char local_148;
  char local_147;
  int local_144;
  undefined *local_140;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  undefined4 local_120 [10];
  undefined1 local_f8 [224];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_140 = (undefined *)0x0;
  local_144 = 0;
  local_148 = '\x01';
  local_147 = '\x01';
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    local_res10 = param_2;
    if (param_2 == (undefined1 *)0x0) {
      if (param_3 != (undefined4 *)0x0) {
        *param_4 = 5;
        return (undefined *)0x0;
      }
      local_res10 = local_f8;
    }
    local_res18 = param_3;
    if (param_3 == (undefined4 *)0x0) {
      _guard_xfg_dispatch_icall_nop(local_120,0,0x28);
      local_120[0] = 0x28;
      local_res18 = local_120;
    }
    *local_res10 = 0;
    local_res10[0x3c] = 0;
    *(undefined4 *)(local_res10 + 0xdc) = 0;
    *(char **)(local_res18 + 6) = param_1;
    *(undefined1 **)(local_res18 + 8) = local_res10 + 0x3c;
    local_res18[3] = *(undefined4 *)(local_res10 + 0xdc);
    if (param_1 == (char *)0x0) {
      uVar2 = FUN_143abd360();
      *(undefined8 *)(local_res18 + 6) = uVar2;
      if (*(longlong *)(local_res18 + 6) == 0) {
        *param_4 = 2;
        return (undefined *)0x0;
      }
      local_140 = DAT_146bc5738;
      local_147 = '\0';
      local_148 = DAT_146bc599d;
    }
    else {
      if (*param_1 == 'U') {
        if ((param_1[1] == 'T') && (param_1[2] == 'F')) {
          local_130 = 1;
        }
        else {
          local_130 = 0;
        }
        local_138 = local_130;
      }
      else {
        if (((*param_1 == 'u') && (param_1[1] == 't')) && (param_1[2] == 'f')) {
          local_12c = 1;
        }
        else {
          local_12c = 0;
        }
        local_138 = local_12c;
      }
      if (local_138 != 0) {
        if (param_1[3] == '-') {
          if ((param_1[4] == '8') && (param_1[5] == '\0')) {
            local_124 = 1;
          }
          else {
            local_124 = 0;
          }
          local_134 = local_124;
        }
        else {
          if ((param_1[3] == '8') && (param_1[4] == '\0')) {
            local_128 = 1;
          }
          else {
            local_128 = 0;
          }
          local_134 = local_128;
        }
        if (local_134 != 0) {
          *(char **)(local_res18 + 6) = "UTF-8";
          return &DAT_145cfc200;
        }
      }
      FUN_143abc6d0(param_1,local_res10,local_res18,param_4);
      cVar1 = FUN_143a8b0e0(*param_4);
      if (cVar1 != '\0') {
        return (undefined *)0x0;
      }
      uVar2 = FUN_143ad3c90(*(undefined8 *)(local_res18 + 6),&local_148,&local_144);
      *(undefined8 *)(local_res18 + 6) = uVar2;
      cVar1 = FUN_143a8b0e0(local_144);
      if ((cVar1 == '\0') && (*(longlong *)(local_res18 + 6) != 0)) {
        if (local_144 == -0x7a) {
          *param_4 = 0xffffff86;
        }
      }
      else {
        *(undefined1 **)(local_res18 + 6) = local_res10;
      }
    }
    if ((local_148 != '\0') && (*(undefined1 **)(local_res18 + 6) != local_res10)) {
      FUN_143abc6d0(*(undefined8 *)(local_res18 + 6),local_res10,local_res18,param_4);
    }
    if (local_147 != '\0') {
      local_140 = (undefined *)FUN_143abc300(*(undefined8 *)(local_res18 + 6));
    }
    if (local_140 == (undefined *)0x0) {
      local_res18[1] = 1;
      *(undefined8 *)(local_res18 + 4) = 0;
      FUN_143ab2410(&DAT_146bc56e8);
      local_140 = (undefined *)FUN_143abd9f0(local_res18,param_4);
      FUN_143ab2470(&DAT_146bc56e8);
      cVar1 = FUN_143a8b0e0(*param_4);
      if ((cVar1 != '\0') || (local_140 == (undefined *)0x0)) {
        local_140 = (undefined *)0x0;
      }
    }
  }
  else {
    local_140 = (undefined *)0x0;
  }
  return local_140;
}



// FUNCTION 143abd9f0 FUN_143abd9f0 body=227 status=ok
// SIG undefined FUN_143abd9f0(void)

longlong FUN_143abd9f0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  
  if ((param_2 == (undefined4 *)0x0) || (cVar1 = FUN_143a8b0e0(*param_2), cVar1 != '\0')) {
    lVar2 = 0;
  }
  else if ((*(longlong *)(param_1 + 0x10) == 0) || (**(char **)(param_1 + 0x10) == '\0')) {
    lVar2 = FUN_143abcd50(*(undefined8 *)(param_1 + 0x18));
    if (lVar2 == 0) {
      lVar2 = FUN_143abc240(param_1,param_2);
      cVar1 = FUN_143a8b0e0(*param_2);
      if ((cVar1 == '\0') && (lVar2 != 0)) {
        if (*(char *)(param_1 + 8) == '\0') {
          FUN_143abcd90(lVar2);
        }
      }
      else {
        lVar2 = 0;
      }
    }
    else {
      *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
    }
  }
  else {
    lVar2 = FUN_143abc240(param_1,param_2);
  }
  return lVar2;
}



// FUNCTION 143abdae0 FUN_143abdae0 body=67 status=ok
// SIG undefined FUN_143abdae0(void)

void FUN_143abdae0(longlong param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 4) != -1)) {
    FUN_143ab2410(&DAT_146bc56e8);
    FUN_143abdb30(param_1);
    FUN_143ab2470(&DAT_146bc56e8);
  }
  return;
}



// FUNCTION 143abdb30 FUN_143abdb30 body=85 status=ok
// SIG undefined FUN_143abdb30(void)

void FUN_143abdb30(longlong param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
    }
    if ((*(int *)(param_1 + 4) == 0) && (*(char *)(param_1 + 0x20) == '\0')) {
      FUN_143abcc80(param_1);
    }
  }
  return;
}



// FUNCTION 143abdb90 FUN_143abdb90 body=93 status=ok
// SIG undefined FUN_143abdb90(void)

void FUN_143abdb90(void)

{
  undefined8 local_18;
  
  local_18 = 0;
  if (DAT_146bc59a0 != 0) {
    FUN_143ab2410(0);
    if (DAT_146bc59a0 != 0) {
      local_18 = DAT_146bc59a0;
      DAT_146bc59a0 = 0;
    }
    FUN_143ab2470(0);
  }
  if (local_18 != 0) {
    FUN_143ab09a0(local_18);
  }
  return;
}



// FUNCTION 143abdbf0 FUN_143abdbf0 body=139 status=ok
// SIG undefined FUN_143abdbf0(void)

longlong FUN_143abdbf0(int *param_1)

{
  undefined8 local_18;
  
  local_18 = 0;
  if (DAT_146bc59a0 != 0) {
    FUN_143ab2410(0);
    if (DAT_146bc59a0 != 0) {
      local_18 = DAT_146bc59a0;
      DAT_146bc59a0 = 0;
    }
    FUN_143ab2470(0);
  }
  if (local_18 == 0) {
    local_18 = FUN_143ab0f00(0,param_1);
    if (0 < *param_1) {
      FUN_143ab09a0(local_18);
      local_18 = 0;
    }
  }
  return local_18;
}



// FUNCTION 143abdc80 FUN_143abdc80 body=105 status=ok
// SIG undefined FUN_143abdc80(void)

void FUN_143abdc80(longlong param_1)

{
  undefined8 local_res8;
  
  local_res8 = param_1;
  if (DAT_146bc59a0 == 0) {
    if (param_1 != 0) {
      FUN_143ab1260(param_1);
    }
    FUN_143ab2410(0);
    if (DAT_146bc59a0 == 0) {
      local_res8 = 0;
      DAT_146bc59a0 = param_1;
    }
    FUN_143ab2470(0);
  }
  if (local_res8 != 0) {
    FUN_143ab09a0(local_res8);
  }
  return;
}



// FUNCTION 143abdcf0 FUN_143abdcf0 body=211 status=ok
// SIG undefined FUN_143abdcf0(void)

longlong FUN_143abdcf0(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  if (*param_1 == 0) {
    lVar1 = FUN_143aa7a40((longlong)(param_2 + 8) + 4);
    *param_1 = lVar1;
    if (*param_1 == 0) {
      return 0;
    }
    *(int *)*param_1 = param_2 + 8;
  }
  else if (*(int *)*param_1 < param_2) {
    lVar1 = FUN_143aa7aa0(*param_1,(longlong)(param_2 + 8) + 4);
    *param_1 = lVar1;
    if (*param_1 == 0) {
      return 0;
    }
    *(int *)*param_1 = param_2 + 8;
  }
  return *param_1 + 4;
}



// FUNCTION 143abddd0 FUN_143abddd0 body=83 status=ok
// SIG undefined FUN_143abddd0(void)

void FUN_143abddd0(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if (param_1[2] == 0) {
      FUN_143aa79f0(param_1);
    }
    else {
      if (*param_1 != 0) {
        FUN_143aa79f0(*param_1);
      }
      (*(code *)param_1[2])(param_1);
    }
  }
  return;
}



// FUNCTION 143abde30 FUN_143abde30 body=172 status=ok
// SIG undefined FUN_143abde30(void)

longlong FUN_143abde30(longlong param_1,int *param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    *param_3 = 0x10;
    lVar2 = 0;
  }
  else {
    lVar1 = (**(code **)(param_1 + 0x20))(param_1,param_2,param_3);
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_143abdcf0(param_1,*param_2 + 1);
      if (lVar2 == 0) {
        *param_3 = 7;
        lVar2 = 0;
      }
      else {
        FUN_143ab5770(lVar1,lVar2,*param_2 + 1);
      }
    }
  }
  return lVar2;
}



// FUNCTION 143abdee0 FUN_143abdee0 body=137 status=ok
// SIG undefined FUN_143abdee0(void)

undefined8 FUN_143abdee0(longlong param_1,longlong param_2,int *param_3)

{
  undefined8 uVar1;
  undefined4 local_18 [6];
  
  if ((param_1 == 0) || (0 < *param_3)) {
    uVar1 = 0;
  }
  else if (*(longlong *)(param_1 + 0x28) == 0) {
    *param_3 = 0x10;
    uVar1 = 0;
  }
  else if (param_2 == 0) {
    local_18[0] = 0;
    uVar1 = (**(code **)(param_1 + 0x28))(param_1,local_18,param_3);
  }
  else {
    uVar1 = (**(code **)(param_1 + 0x28))(param_1,param_2,param_3);
  }
  return uVar1;
}



// FUNCTION 143abdf70 FUN_143abdf70 body=199 status=ok
// SIG undefined FUN_143abdf70(void)

longlong FUN_143abdf70(longlong param_1,int *param_2,undefined4 *param_3)

{
  int local_28 [2];
  longlong local_20;
  longlong local_18;
  
  local_20 = 0;
  local_28[0] = 0;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    *param_3 = 0x10;
  }
  else {
    local_18 = (**(code **)(param_1 + 0x28))(param_1,local_28,param_3);
    if (local_18 != 0) {
      local_20 = FUN_143abdcf0(param_1,((longlong)(local_28[0] + 1) & 0x7fffffffU) << 1);
      if (local_20 == 0) {
        *param_3 = 7;
      }
      else {
        FUN_143ab5820(local_18,local_20,local_28[0] + 1);
      }
    }
  }
  if (param_2 != (int *)0x0) {
    *param_2 = local_28[0];
  }
  return local_20;
}



// FUNCTION 143abe040 FUN_143abe040 body=96 status=ok
// SIG undefined FUN_143abe040(void)

undefined8 FUN_143abe040(longlong param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  
  if ((param_1 == 0) || (0 < *param_3)) {
    uVar1 = 0;
  }
  else if (*(longlong *)(param_1 + 0x20) == 0) {
    *param_3 = 0x10;
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(param_1 + 0x20))(param_1,param_2,param_3);
  }
  return uVar1;
}



// FUNCTION 143abe0b0 FUN_143abe0b0 body=272 status=ok
// SIG undefined FUN_143abe0b0(void)

undefined1 FUN_143abe0b0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *local_20;
  undefined8 *local_18;
  
  if (*param_1 == 0) {
    param_2[1] = 0;
    *param_1 = (longlong)param_2;
  }
  else {
    local_18 = (undefined8 *)0x0;
    for (local_20 = (undefined8 *)*param_1; local_20 != (undefined8 *)0x0;
        local_20 = (undefined8 *)local_20[1]) {
      iVar1 = _guard_xfg_dispatch_icall_nop((char *)*param_2,(char *)*local_20);
      if (iVar1 < 0) {
        if (local_18 == (undefined8 *)0x0) {
          *param_1 = (longlong)param_2;
        }
        else {
          local_18[1] = param_2;
        }
        param_2[1] = local_20;
        return 1;
      }
      if (iVar1 == 0) {
        return 0;
      }
      local_18 = local_20;
    }
    local_18[1] = param_2;
    param_2[1] = 0;
  }
  return 1;
}



// FUNCTION 143abe1c0 FUN_143abe1c0 body=543 status=ok
// SIG undefined FUN_143abe1c0(void)

undefined1 FUN_143abe1c0(longlong *param_1,undefined8 *param_2,char param_3)

{
  size_t sVar1;
  size_t sVar2;
  int local_24;
  undefined8 *local_18;
  undefined8 *local_10;
  
  if (*param_1 == 0) {
    param_2[2] = 0;
    *param_1 = (longlong)param_2;
  }
  else {
    local_10 = (undefined8 *)0x0;
    for (local_18 = (undefined8 *)*param_1; local_18 != (undefined8 *)0x0;
        local_18 = (undefined8 *)local_18[2]) {
      if (param_3 == '\0') {
        local_24 = _guard_xfg_dispatch_icall_nop((char *)*param_2,(char *)*local_18);
      }
      else {
        sVar1 = _guard_xfg_dispatch_icall_nop((char *)*param_2);
        sVar2 = _guard_xfg_dispatch_icall_nop((char *)*local_18);
        if (((int)sVar1 == 1) && ((int)sVar2 == 1)) {
          if (*(char *)*param_2 == *(char *)*local_18) {
            local_24 = 0;
          }
          else if (*(char *)*param_2 == 'x') {
            local_24 = 1;
          }
          else if (*(char *)*local_18 == 'x') {
            local_24 = -1;
          }
          else {
            local_24 = (int)*(char *)*param_2 - (int)*(char *)*local_18;
          }
        }
        else if ((int)sVar1 == 1) {
          local_24 = *(char *)*param_2 + -0x75;
        }
        else if ((int)sVar2 == 1) {
          local_24 = 0x75 - *(char *)*local_18;
        }
        else {
          local_24 = _guard_xfg_dispatch_icall_nop((char *)*param_2,(char *)*local_18);
        }
      }
      if (local_24 < 0) {
        if (local_10 == (undefined8 *)0x0) {
          *param_1 = (longlong)param_2;
        }
        else {
          local_10[2] = param_2;
        }
        param_2[2] = local_18;
        return 1;
      }
      if (local_24 == 0) {
        return 0;
      }
      local_10 = local_18;
    }
    local_10[2] = param_2;
    param_2[2] = 0;
  }
  return 1;
}



// FUNCTION 143abe3e0 FUN_143abe3e0 body=202 status=ok
// SIG undefined FUN_143abe3e0(void)

undefined1 FUN_143abe3e0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *local_20;
  undefined8 *local_18;
  
  if (*param_1 == 0) {
    param_2[1] = 0;
    *param_1 = (longlong)param_2;
  }
  else {
    local_18 = (undefined8 *)0x0;
    for (local_20 = (undefined8 *)*param_1; local_20 != (undefined8 *)0x0;
        local_20 = (undefined8 *)local_20[1]) {
      iVar1 = _guard_xfg_dispatch_icall_nop((char *)*param_2,(char *)*local_20);
      if (iVar1 == 0) {
        return 0;
      }
      local_18 = local_20;
    }
    local_18[1] = param_2;
    param_2[1] = 0;
  }
  return 1;
}



// FUNCTION 143abe4b0 FUN_143abe4b0 body=1279 status=ok
// SIG undefined FUN_143abe4b0(void)

undefined8 FUN_143abe4b0(undefined8 param_1,void *param_2,int param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  int local_68;
  char local_64 [4];
  undefined8 *local_60;
  char local_58;
  int local_54;
  int local_50;
  undefined8 *local_48;
  int local_40;
  char *local_38;
  longlong local_30;
  int local_28;
  char *local_20;
  undefined8 *local_18;
  
  local_68 = 0;
  local_48 = (undefined8 *)0x0;
  local_30 = 0;
  local_64[0] = '\0';
  if (*param_4 < 1) {
    local_40 = param_3;
    local_30 = FUN_143aa7a40((longlong)param_3);
    if (local_30 == 0) {
      *param_4 = 7;
      uVar4 = 0;
    }
    else {
      iVar2 = FUN_143ac0730(param_1);
      if (iVar2 != 0) {
        local_64[0] = '\x01';
      }
      local_28 = FUN_143ac05c0(param_1);
      for (local_50 = 0; local_50 < local_28; local_50 = local_50 + 1) {
        local_20 = (char *)FUN_143ac04e0(param_1,local_50);
        local_38 = (char *)FUN_143ac0550(param_1,local_50);
        if (*local_20 == 'u') {
          FUN_143abe9b0(local_38,&local_48,local_30,local_40,local_64,param_4);
          if (0 < *param_4) break;
        }
        else {
          local_60 = (undefined8 *)FUN_143aa7a40(0x18);
          if (local_60 == (undefined8 *)0x0) {
            *param_4 = 7;
            break;
          }
          *local_60 = local_20;
          local_60[1] = local_38;
          cVar1 = FUN_143abe1c0(&local_48,local_60,0);
          if (cVar1 == '\0') {
            FUN_143aa79f0(local_60);
            *param_4 = 1;
            break;
          }
        }
      }
      if (*param_4 < 1) {
        local_38 = (char *)FUN_143ac06a0(param_1);
        sVar3 = _guard_xfg_dispatch_icall_nop(local_38);
        if (0 < (int)sVar3) {
          local_60 = (undefined8 *)FUN_143aa7a40(0x18);
          if (local_60 == (undefined8 *)0x0) {
            *param_4 = 7;
          }
          else {
            *local_60 = &DAT_145cf4a58;
            local_60[1] = local_38;
            cVar1 = FUN_143abe1c0(&local_48,local_60,0);
            if (cVar1 == '\0') {
              FUN_143aa79f0(local_60);
              *param_4 = 1;
            }
          }
        }
      }
      if ((*param_4 < 1) && (local_64[0] != '\0')) {
        sVar3 = _guard_xfg_dispatch_icall_nop("_POSIX");
        local_54 = (int)sVar3;
        if (0 < param_3) {
          iVar2 = FUN_143ac1240(sVar3 & 0xffffffff,param_3);
          _guard_xfg_dispatch_icall_nop(param_2,"_POSIX",(longlong)iVar2);
        }
        local_68 = local_54;
      }
      if ((*param_4 < 1) && (local_48 != (undefined8 *)0x0)) {
        local_58 = '\x01';
        local_60 = local_48;
        do {
          if (local_68 < param_3) {
            if (local_58 == '\0') {
              *(undefined1 *)((longlong)param_2 + (longlong)local_68) = 0x3b;
            }
            else {
              *(undefined1 *)((longlong)param_2 + (longlong)local_68) = 0x40;
              local_58 = '\0';
            }
          }
          local_68 = local_68 + 1;
          sVar3 = _guard_xfg_dispatch_icall_nop((char *)*local_60);
          local_54 = (int)sVar3;
          if (local_68 < param_3) {
            iVar2 = FUN_143ac1240(sVar3 & 0xffffffff,param_3 - local_68);
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)param_2 + (longlong)local_68),(void *)*local_60,
                       (longlong)iVar2);
          }
          local_68 = local_68 + local_54;
          if (local_68 < param_3) {
            *(undefined1 *)((longlong)param_2 + (longlong)local_68) = 0x3d;
          }
          local_68 = local_68 + 1;
          sVar3 = _guard_xfg_dispatch_icall_nop((char *)local_60[1]);
          local_54 = (int)sVar3;
          if (local_68 < param_3) {
            iVar2 = FUN_143ac1240(sVar3 & 0xffffffff,param_3 - local_68);
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)param_2 + (longlong)local_68),(void *)local_60[1],
                       (longlong)iVar2);
          }
          local_68 = local_68 + local_54;
          local_60 = (undefined8 *)local_60[2];
        } while (local_60 != (undefined8 *)0x0);
      }
      local_60 = local_48;
      while (local_60 != (undefined8 *)0x0) {
        local_18 = (undefined8 *)local_60[2];
        FUN_143aa79f0(local_60);
        local_60 = local_18;
      }
      FUN_143aa79f0(local_30);
      if (*param_4 < 1) {
        uVar4 = FUN_143ab4930(param_2,param_3,local_68,param_4);
      }
      else {
        uVar4 = 0;
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 143abe9b0 FUN_143abe9b0 body=2319 status=ok
// SIG undefined FUN_143abe9b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143abe9b0(char *param_1,undefined8 param_2,longlong param_3,int param_4,char *param_5,
                  int *param_6)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  undefined1 auStack_178 [32];
  int *local_158;
  int local_150;
  int *local_148;
  int local_138;
  int local_134;
  char local_130;
  char *local_128;
  char local_120;
  longlong *local_118;
  longlong *local_110;
  char local_108;
  int local_104;
  int local_100;
  int local_fc;
  longlong *local_f8;
  longlong *local_f0;
  int local_e8;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  char *local_c8;
  longlong local_c0;
  char *local_b8;
  longlong local_b0;
  int local_a8;
  char *local_a0;
  ulonglong local_98;
  undefined1 auStack_88 [112];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_108 = *param_5;
  local_c0 = 0;
  local_f8 = (longlong *)0x0;
  local_134 = 0;
  local_104 = 0;
  *param_5 = '\0';
  local_b8 = (char *)0x0;
  local_128 = param_1;
  while (*local_128 != '\0') {
    for (local_138 = 0; (local_128[local_138] != '\0' && (local_128[local_138] != '-'));
        local_138 = local_138 + 1) {
    }
    cVar1 = FUN_143abfce0(local_128,local_138);
    if (cVar1 != '\0') {
      local_b8 = local_128;
      break;
    }
    local_110 = (longlong *)FUN_143aa7a40(0x10);
    if (local_110 == (longlong *)0x0) {
      *param_6 = 7;
      goto LAB_143abf229;
    }
    if (100 - local_104 <= local_138) {
      *param_6 = 1;
      goto LAB_143abf229;
    }
    _guard_xfg_dispatch_icall_nop(auStack_88 + local_104,local_128,(longlong)local_138);
    local_98 = (ulonglong)(local_104 + local_138);
    if (99 < local_98) {
                    /* WARNING: Subroutine does not return */
      __report_rangecheckfailure();
    }
    auStack_88[local_98] = 0;
    *local_110 = (longlong)(auStack_88 + local_104);
    local_104 = local_104 + 1 + local_138;
    cVar1 = FUN_143abe0b0(&local_f8,local_110);
    if (cVar1 == '\0') {
      *param_6 = 1;
      FUN_143aa79f0(local_110);
      goto LAB_143abf229;
    }
    local_128 = local_128 + local_138;
    if (*local_128 != '\0') {
      local_128 = local_128 + 1;
    }
  }
  if (local_f8 == (longlong *)0x0) {
LAB_143abeda4:
    if (local_b8 != (char *)0x0) {
      local_d8 = (char *)0x0;
      local_e0 = (char *)0x0;
      local_fc = 0;
      local_100 = 0;
      local_120 = '\0';
      local_128 = local_b8;
      while (local_120 == '\0') {
        local_a0 = (char *)0x0;
        local_130 = '\0';
        if (*local_128 == '\0') {
          local_130 = '\x01';
          local_120 = '\x01';
        }
        else {
          for (local_138 = 0; (local_128[local_138] != '\0' && (local_128[local_138] != '-'));
              local_138 = local_138 + 1) {
          }
          cVar1 = FUN_143abfce0(local_128,local_138);
          if (cVar1 == '\0') {
            if (local_e0 == (char *)0x0) {
              local_e0 = local_128;
              local_100 = local_138;
            }
            else {
              local_100 = local_100 + 1 + local_138;
            }
          }
          else if (local_d8 == (char *)0x0) {
            local_d8 = local_128;
            local_fc = local_138;
          }
          else {
            local_130 = '\x01';
            local_a0 = local_128;
            local_a8 = local_138;
          }
          local_128 = local_128 + local_138;
          if (*local_128 != '\0') {
            local_128 = local_128 + 1;
          }
        }
        if (local_130 != '\0') {
          local_c8 = (char *)0x0;
          local_d0 = (char *)0x0;
          local_158 = param_6;
          local_138 = FUN_143abf2c0(local_d8,local_fc,param_3 + local_134,(param_4 - local_134) + -1
                                   );
          if (0 < *param_6) goto LAB_143abf229;
          local_c8 = (char *)(param_3 + local_134);
          *(undefined1 *)(param_3 + (local_134 + local_138)) = 0;
          local_134 = local_134 + local_138 + 1;
          if (local_e0 == (char *)0x0) {
            local_d0 = "yes";
          }
          else {
            local_150 = (param_4 - local_134) + -1;
            local_158 = (int *)(param_3 + local_134);
            local_148 = param_6;
            local_138 = FUN_143abf5b0(local_c8,0xffffffff,local_e0,local_100);
            if (0 < *param_6) goto LAB_143abf229;
            local_d0 = (char *)(param_3 + local_134);
            *(undefined1 *)(param_3 + (local_134 + local_138)) = 0;
            local_134 = local_134 + local_138 + 1;
          }
          if (((local_108 == '\0') &&
              (iVar2 = _guard_xfg_dispatch_icall_nop(local_c8,"va"), iVar2 == 0)) &&
             (iVar2 = _guard_xfg_dispatch_icall_nop(local_d0,"posix"), iVar2 == 0)) {
            *param_5 = '\x01';
          }
          else {
            local_118 = (longlong *)FUN_143aa7a40(0x18);
            if (local_118 == (longlong *)0x0) {
              *param_6 = 7;
              goto LAB_143abf229;
            }
            *local_118 = (longlong)local_c8;
            local_118[1] = (longlong)local_d0;
            cVar1 = FUN_143abe1c0(&local_c0,local_118,0);
            if (cVar1 == '\0') {
              *param_6 = 1;
              FUN_143aa79f0(local_118);
              goto LAB_143abf229;
            }
          }
          local_d8 = local_a0;
          if (local_a0 == (char *)0x0) {
            local_e8 = 0;
          }
          else {
            local_e8 = local_a8;
          }
          local_fc = local_e8;
          local_e0 = (char *)0x0;
          local_100 = 0;
        }
      }
    }
    local_118 = (longlong *)local_c0;
    while (local_118 != (longlong *)0x0) {
      local_b0 = *(longlong *)((longlong)local_118 + 0x10);
      FUN_143abe1c0(param_2,local_118,0);
      local_118 = (longlong *)local_b0;
    }
  }
  else {
    if (param_4 < local_104) {
      *param_6 = 1;
    }
    else {
      local_118 = (longlong *)FUN_143aa7a40(0x18);
      if (local_118 == (longlong *)0x0) {
        *param_6 = 7;
      }
      else {
        *local_118 = (longlong)"attribute";
        local_118[1] = param_3;
        local_110 = local_f8;
        while (local_110 != (longlong *)0x0) {
          local_f0 = (longlong *)local_110[1];
          if (local_110 != local_f8) {
            *(undefined1 *)(param_3 + local_134) = 0x2d;
            local_134 = local_134 + 1;
          }
          sVar3 = _guard_xfg_dispatch_icall_nop((char *)*local_110);
          local_138 = (int)sVar3;
          _guard_xfg_dispatch_icall_nop
                    ((void *)(param_3 + local_134),(void *)*local_110,(longlong)local_138);
          local_134 = local_134 + local_138;
          local_110 = local_f0;
        }
        *(undefined1 *)(param_3 + local_134) = 0;
        local_134 = local_134 + 1;
        cVar1 = FUN_143abe1c0(&local_c0,local_118,0);
        if (cVar1 != '\0') {
          local_110 = local_f8;
          while (local_110 != (longlong *)0x0) {
            local_f0 = (longlong *)local_110[1];
            FUN_143aa79f0(local_110);
            local_110 = local_f0;
          }
          local_f8 = (longlong *)0x0;
          goto LAB_143abeda4;
        }
        *param_6 = 1;
        FUN_143aa79f0(local_118);
      }
    }
LAB_143abf229:
    local_110 = local_f8;
    while (local_110 != (longlong *)0x0) {
      local_f0 = (longlong *)local_110[1];
      FUN_143aa79f0(local_110);
      local_110 = local_f0;
    }
    local_118 = (longlong *)local_c0;
    while (local_118 != (longlong *)0x0) {
      local_b0 = *(longlong *)((longlong)local_118 + 0x10);
      FUN_143aa79f0(local_118);
      local_118 = (longlong *)local_b0;
    }
  }
  return;
}



// FUNCTION 143abf2c0 FUN_143abf2c0 body=741 status=ok
// SIG undefined FUN_143abf2c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143abf2c0(char *param_1,uint param_2,void *param_3,undefined4 param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  uint local_res10;
  undefined1 auStack_98 [32];
  int local_78;
  uint local_74;
  undefined8 local_70;
  int local_68 [2];
  char *local_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  undefined8 local_40;
  char local_38 [16];
  char local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_74 = 0;
  local_60 = (char *)0x0;
  local_res10 = param_2;
  if ((int)param_2 < 0) {
    sVar3 = _guard_xfg_dispatch_icall_nop(param_1);
    local_res10 = (uint)sVar3;
  }
  if (local_res10 < 9) {
    _guard_xfg_dispatch_icall_nop(local_38,param_1,(longlong)(int)local_res10);
    local_50 = (ulonglong)(int)local_res10;
    if (8 < local_50) {
                    /* WARNING: Subroutine does not return */
      __report_rangecheckfailure();
    }
    local_38[local_50] = '\0';
    for (local_78 = 0; local_78 < (int)local_res10; local_78 = local_78 + 1) {
      cVar1 = FUN_143ab82e0(local_38[local_78]);
      local_38[local_78] = cVar1;
    }
    local_70 = FUN_143aa56e0(0,"keyTypeData",param_5);
    FUN_143aa37c0(local_70,"keyMap",local_70,param_5);
    if (*param_5 < 1) {
      local_58 = FUN_143aa4880(local_70,0,param_5);
      while( true ) {
        if ((0 < *param_5) || (local_40 = FUN_143aa5430(local_58,local_68,param_5), 0 < *param_5))
        goto LAB_143abf503;
        FUN_143ab5770(local_40,local_28,local_68[0]);
        local_48 = (ulonglong)local_68[0];
        if (8 < local_48) {
                    /* WARNING: Subroutine does not return */
          __report_rangecheckfailure();
        }
        local_28[local_48] = '\0';
        iVar2 = _guard_xfg_dispatch_icall_nop(local_38,local_28);
        if (iVar2 == 0) break;
        cVar1 = FUN_143aa54f0(local_70);
        if (cVar1 == '\0') goto LAB_143abf503;
        FUN_143aa4880(local_70,local_58,param_5);
      }
      local_60 = (char *)FUN_143aa4760(local_58);
      sVar3 = _guard_xfg_dispatch_icall_nop(local_60);
      local_74 = (uint)sVar3;
LAB_143abf503:
      FUN_143aa2ef0(local_58);
      FUN_143aa2ef0(local_70);
      if (*param_5 < 1) {
        if (local_60 == (char *)0x0) {
          local_60 = local_38;
          local_74 = local_res10;
        }
        iVar2 = FUN_143ac1240(local_74,param_4);
        _guard_xfg_dispatch_icall_nop(param_3,local_60,(longlong)iVar2);
        uVar4 = FUN_143ab4930(param_3,param_4,local_74,param_5);
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      FUN_143aa2ef0(local_70);
      uVar4 = 0;
    }
  }
  else {
    *param_5 = 1;
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 143abf5b0 FUN_143abf5b0 body=1175 status=ok
// SIG undefined FUN_143abf5b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143abf5b0(char *param_1,uint param_2,char *param_3,int param_4,void *param_5,undefined4 param_6,
             int *param_7)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  uint local_res10;
  int local_res20;
  undefined1 auStack_e8 [32];
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  char *local_b0;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  undefined8 local_80;
  char local_78 [16];
  char local_68 [24];
  char local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_bc = 0;
  local_b0 = (char *)0x0;
  local_c4 = 0;
  local_res10 = param_2;
  if ((int)param_2 < 0) {
    sVar3 = _guard_xfg_dispatch_icall_nop(param_1);
    local_res10 = (uint)sVar3;
  }
  if (local_res10 < 0x16) {
    _guard_xfg_dispatch_icall_nop(local_68,param_1,(longlong)(int)local_res10);
    local_90 = (ulonglong)(int)local_res10;
    if (0x15 < local_90) {
                    /* WARNING: Subroutine does not return */
      __report_rangecheckfailure();
    }
    local_68[local_90] = '\0';
    for (local_c8 = 0; local_c8 < (int)local_res10; local_c8 = local_c8 + 1) {
      cVar1 = FUN_143ab82e0(local_68[local_c8]);
      local_68[local_c8] = cVar1;
    }
    local_res20 = param_4;
    if (param_4 < 0) {
      sVar3 = _guard_xfg_dispatch_icall_nop(param_3);
      local_res20 = (int)sVar3;
    }
    local_c0 = 0;
    for (local_c8 = 0; local_c8 < local_res20; local_c8 = local_c8 + 1) {
      if (param_3[local_c8] == '-') {
        if (8 < local_c0) {
          *param_7 = 1;
          return 0;
        }
        local_c0 = 0;
      }
      else {
        local_c0 = local_c0 + 1;
      }
    }
    _guard_xfg_dispatch_icall_nop(local_50,param_3,(longlong)local_res20);
    local_98 = (ulonglong)local_res20;
    if (0x31 < local_98) {
                    /* WARNING: Subroutine does not return */
      __report_rangecheckfailure();
    }
    local_50[local_98] = '\0';
    for (local_c8 = 0; local_c8 < local_res20; local_c8 = local_c8 + 1) {
      cVar1 = FUN_143ab82e0(local_50[local_c8]);
      local_50[local_c8] = cVar1;
    }
    local_b8 = FUN_143aa56e0(0,"keyTypeData",param_7);
    FUN_143aa37c0(local_b8,"typeMap",local_b8,param_7);
    if (*param_7 < 1) {
      FUN_143aa37c0(local_b8,local_68,local_b8,&local_c4);
      local_a0 = FUN_143aa4880(local_b8,0,&local_c4);
      while( true ) {
        if ((0 < local_c4) || (local_80 = FUN_143aa5430(local_a0,&local_a4,&local_c4), 0 < local_c4)
           ) goto LAB_143abf92a;
        FUN_143ab5770(local_80,local_78,local_a4);
        local_88 = (ulonglong)local_a4;
        if (8 < local_88) {
                    /* WARNING: Subroutine does not return */
          __report_rangecheckfailure();
        }
        local_78[local_88] = '\0';
        iVar2 = _guard_xfg_dispatch_icall_nop(local_50,local_78);
        if (iVar2 == 0) break;
        cVar1 = FUN_143aa54f0(local_b8);
        if (cVar1 == '\0') goto LAB_143abf92a;
        FUN_143aa4880(local_b8,local_a0,&local_c4);
      }
      local_b0 = (char *)FUN_143aa4760(local_a0);
      sVar3 = _guard_xfg_dispatch_icall_nop(local_b0);
      local_bc = (int)sVar3;
LAB_143abf92a:
      FUN_143aa2ef0(local_a0);
      FUN_143aa2ef0(local_b8);
      if ((local_c4 < 1) || (local_c4 == 2)) {
        if (local_b0 == (char *)0x0) {
          local_b0 = local_50;
          local_bc = local_res20;
        }
        local_a8 = FUN_143ac1240(local_bc,param_6);
        _guard_xfg_dispatch_icall_nop(param_5,local_b0,(longlong)local_a8);
        iVar2 = _guard_xfg_dispatch_icall_nop(local_68,"timezone");
        if (iVar2 == 0) {
          for (local_c8 = 0; local_c8 < local_a8; local_c8 = local_c8 + 1) {
            if (*(char *)((longlong)param_5 + (longlong)local_c8) == ':') {
              *(undefined1 *)((longlong)param_5 + (longlong)local_c8) = 0x2f;
            }
          }
        }
        uVar4 = FUN_143ab4930(param_5,param_6,local_bc,param_7);
      }
      else {
        *param_7 = local_c4;
        uVar4 = 0;
      }
    }
    else {
      FUN_143aa2ef0(local_b8);
      uVar4 = 0;
    }
  }
  else {
    *param_7 = 1;
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 143abfa50 FUN_143abfa50 body=175 status=ok
// SIG undefined FUN_143abfa50(void)

void FUN_143abfa50(undefined8 *param_1)

{
  int local_18;
  
  *param_1 = 0;
  param_1[1] = &DAT_145cf4a50;
  for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
    param_1[(longlong)local_18 + 2] = 0;
  }
  param_1[5] = &DAT_145cf4a50;
  param_1[6] = &DAT_145cf4a50;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = &DAT_145cf4a50;
  param_1[9] = &DAT_145cf4a50;
  return;
}



// FUNCTION 143abfb00 FUN_143abfb00 body=120 status=ok
// SIG undefined FUN_143abfb00(void)

ulonglong FUN_143abfb00(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int local_18;
  
  local_18 = 0;
  while( true ) {
    if (param_2 <= local_18) {
      return CONCAT71((uint7)(uint3)((uint)param_2 >> 8),1);
    }
    cVar1 = FUN_143ab8310(*(undefined1 *)(param_1 + local_18));
    if ((cVar1 == '\0') &&
       ((uVar2 = (uint)*(char *)(param_1 + local_18), (int)uVar2 < 0x30 ||
        (uVar2 = (uint)*(char *)(param_1 + local_18), 0x39 < (int)uVar2)))) break;
    local_18 = local_18 + 1;
  }
  return (ulonglong)uVar2 & 0xffffffffffffff00;
}



// FUNCTION 143abfb80 FUN_143abfb80 body=82 status=ok
// SIG undefined FUN_143abfb80(void)

undefined8 FUN_143abfb80(longlong param_1,int param_2)

{
  char cVar1;
  int local_18;
  
  local_18 = 0;
  while( true ) {
    if (param_2 <= local_18) {
      return CONCAT71((uint7)(uint3)((uint)param_2 >> 8),1);
    }
    cVar1 = FUN_143ab8310(*(undefined1 *)(param_1 + local_18));
    if (cVar1 == '\0') break;
    local_18 = local_18 + 1;
  }
  return 0;
}



// FUNCTION 143abfbe0 FUN_143abfbe0 body=93 status=ok
// SIG undefined FUN_143abfbe0(void)

ulonglong FUN_143abfbe0(char *param_1,int param_2)

{
  char cVar1;
  ulonglong in_RAX;
  int local_res10;
  
  local_res10 = param_2;
  if (param_2 < 0) {
    in_RAX = _guard_xfg_dispatch_icall_nop(param_1);
    local_res10 = (int)in_RAX;
  }
  if (local_res10 == 1) {
    cVar1 = FUN_143ab8310(*param_1);
    in_RAX = (ulonglong)(uint)(int)cVar1;
    if ((int)cVar1 != 0) {
      cVar1 = FUN_143ab82e0(*param_1);
      in_RAX = (ulonglong)(uint)(int)cVar1;
      if ((int)cVar1 != 0x78) {
        return CONCAT71((uint7)(uint3)(cVar1 >> 7),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143abfc40 FUN_143abfc40 body=80 status=ok
// SIG undefined FUN_143abfc40(void)

ulonglong FUN_143abfc40(char *param_1,int param_2)

{
  char cVar1;
  ulonglong in_RAX;
  int local_res10;
  
  local_res10 = param_2;
  if (param_2 < 0) {
    in_RAX = _guard_xfg_dispatch_icall_nop(param_1);
    local_res10 = (int)in_RAX;
  }
  if ((1 < local_res10) && (local_res10 < 9)) {
    cVar1 = FUN_143abfb00(param_1,local_res10);
    in_RAX = (ulonglong)(uint)(int)cVar1;
    if ((int)cVar1 != 0) {
      return CONCAT71((uint7)(uint3)(cVar1 >> 7),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143abfc90 FUN_143abfc90 body=73 status=ok
// SIG undefined FUN_143abfc90(void)

ulonglong FUN_143abfc90(char *param_1,int param_2)

{
  char cVar1;
  ulonglong in_RAX;
  int local_res10;
  
  local_res10 = param_2;
  if (param_2 < 0) {
    in_RAX = _guard_xfg_dispatch_icall_nop(param_1);
    local_res10 = (int)in_RAX;
  }
  if (local_res10 == 3) {
    cVar1 = FUN_143abfb80(param_1,3);
    in_RAX = (ulonglong)(uint)(int)cVar1;
    if ((int)cVar1 != 0) {
      return CONCAT71((uint7)(uint3)(cVar1 >> 7),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143abfce0 FUN_143abfce0 body=73 status=ok
// SIG undefined FUN_143abfce0(void)

ulonglong FUN_143abfce0(char *param_1,int param_2)

{
  char cVar1;
  ulonglong in_RAX;
  int local_res10;
  
  local_res10 = param_2;
  if (param_2 < 0) {
    in_RAX = _guard_xfg_dispatch_icall_nop(param_1);
    local_res10 = (int)in_RAX;
  }
  if (local_res10 == 2) {
    cVar1 = FUN_143abfb00(param_1,2);
    in_RAX = (ulonglong)(uint)(int)cVar1;
    if ((int)cVar1 != 0) {
      return CONCAT71((uint7)(uint3)(cVar1 >> 7),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143abfd30 FUN_143abfd30 body=80 status=ok
// SIG undefined FUN_143abfd30(void)

ulonglong FUN_143abfd30(char *param_1,int param_2)

{
  char cVar1;
  ulonglong in_RAX;
  int local_res10;
  
  local_res10 = param_2;
  if (param_2 < 0) {
    in_RAX = _guard_xfg_dispatch_icall_nop(param_1);
    local_res10 = (int)in_RAX;
  }
  if ((1 < local_res10) && (local_res10 < 9)) {
    cVar1 = FUN_143abfb80(param_1,local_res10);
    in_RAX = (ulonglong)(uint)(int)cVar1;
    if ((int)cVar1 != 0) {
      return CONCAT71((uint7)(uint3)(cVar1 >> 7),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143abfd80 FUN_143abfd80 body=88 status=ok
// SIG undefined FUN_143abfd80(void)

ulonglong FUN_143abfd80(longlong param_1,int param_2)

{
  uint uVar1;
  int local_18;
  
  local_18 = 0;
  while( true ) {
    if (param_2 <= local_18) {
      return CONCAT71((uint7)(uint3)((uint)param_2 >> 8),1);
    }
    uVar1 = (uint)*(char *)(param_1 + local_18);
    if (((int)uVar1 < 0x30) || (uVar1 = (uint)*(char *)(param_1 + local_18), 0x39 < (int)uVar1))
    break;
    local_18 = local_18 + 1;
  }
  return (ulonglong)uVar1 & 0xffffffffffffff00;
}



// FUNCTION 143abfde0 FUN_143abfde0 body=80 status=ok
// SIG undefined FUN_143abfde0(void)

ulonglong FUN_143abfde0(char *param_1,int param_2)

{
  char cVar1;
  ulonglong in_RAX;
  int local_res10;
  
  local_res10 = param_2;
  if (param_2 < 0) {
    in_RAX = _guard_xfg_dispatch_icall_nop(param_1);
    local_res10 = (int)in_RAX;
  }
  if ((0 < local_res10) && (local_res10 < 9)) {
    cVar1 = FUN_143abfb00(param_1,local_res10);
    in_RAX = (ulonglong)(uint)(int)cVar1;
    if ((int)cVar1 != 0) {
      return CONCAT71((uint7)(uint3)(cVar1 >> 7),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143abfe30 FUN_143abfe30 body=105 status=ok
// SIG undefined FUN_143abfe30(void)

ulonglong FUN_143abfe30(char *param_1,int param_2)

{
  char cVar1;
  ulonglong in_RAX;
  int local_res10;
  
  local_res10 = param_2;
  if (param_2 < 0) {
    in_RAX = _guard_xfg_dispatch_icall_nop(param_1);
    local_res10 = (int)in_RAX;
  }
  if (local_res10 == 2) {
    cVar1 = FUN_143abfb80(param_1,2);
    in_RAX = (ulonglong)(uint)(int)cVar1;
    if ((int)cVar1 != 0) {
      return CONCAT71((uint7)(uint3)(cVar1 >> 7),1);
    }
  }
  if (local_res10 == 3) {
    cVar1 = FUN_143abfd80(param_1,3);
    in_RAX = (ulonglong)(uint)(int)cVar1;
    if ((int)cVar1 != 0) {
      return CONCAT71((uint7)(uint3)(cVar1 >> 7),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143abfea0 FUN_143abfea0 body=73 status=ok
// SIG undefined FUN_143abfea0(void)

ulonglong FUN_143abfea0(char *param_1,int param_2)

{
  char cVar1;
  ulonglong in_RAX;
  int local_res10;
  
  local_res10 = param_2;
  if (param_2 < 0) {
    in_RAX = _guard_xfg_dispatch_icall_nop(param_1);
    local_res10 = (int)in_RAX;
  }
  if (local_res10 == 4) {
    cVar1 = FUN_143abfb80(param_1,4);
    in_RAX = (ulonglong)(uint)(int)cVar1;
    if ((int)cVar1 != 0) {
      return CONCAT71((uint7)(uint3)(cVar1 >> 7),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143abfef0 FUN_143abfef0 body=145 status=ok
// SIG undefined FUN_143abfef0(void)

ulonglong FUN_143abfef0(char *param_1,int param_2)

{
  char cVar1;
  ulonglong in_RAX;
  int local_res10;
  
  local_res10 = param_2;
  if (param_2 < 0) {
    in_RAX = _guard_xfg_dispatch_icall_nop(param_1);
    local_res10 = (int)in_RAX;
  }
  if ((4 < local_res10) && (local_res10 < 9)) {
    cVar1 = FUN_143abfb00(param_1,local_res10);
    in_RAX = (ulonglong)(uint)(int)cVar1;
    if ((int)cVar1 != 0) {
      return CONCAT71((uint7)(uint3)(cVar1 >> 7),1);
    }
  }
  if (((local_res10 == 4) && (in_RAX = (ulonglong)(uint)(int)*param_1, 0x2f < *param_1)) &&
     (in_RAX = (ulonglong)(uint)(int)*param_1, *param_1 < 0x3a)) {
    cVar1 = FUN_143abfb00(param_1 + 1,3);
    in_RAX = (ulonglong)(uint)(int)cVar1;
    if ((int)cVar1 != 0) {
      return CONCAT71((uint7)(uint3)(cVar1 >> 7),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143abff90 FUN_143abff90 body=1159 status=ok
// SIG undefined FUN_143abff90(void)

undefined8
FUN_143abff90(undefined8 param_1,void *param_2,int param_3,undefined8 param_4,int *param_5)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  size_t sVar5;
  char *pcVar6;
  int local_48;
  char *local_38;
  int local_18;
  char *local_10;
  
  local_48 = 0;
  bVar1 = true;
  uVar4 = FUN_143ac0780(param_1,0xffffffff,param_4,param_5);
  if (*param_5 < 1) {
    iVar3 = FUN_143ac0640(uVar4);
    if (iVar3 < 1) {
      local_10 = (char *)FUN_143ac0690(uVar4);
    }
    else {
      local_10 = (char *)FUN_143ac0610(uVar4,0);
    }
    iVar3 = _guard_xfg_dispatch_icall_nop(local_10,"und");
    if (iVar3 != 0) {
      sVar5 = _guard_xfg_dispatch_icall_nop(local_10);
      iVar3 = (int)sVar5;
      if ((0 < iVar3) && (local_48 = iVar3, 0 < param_3)) {
        iVar3 = FUN_143ac1240(sVar5 & 0xffffffff,param_3);
        _guard_xfg_dispatch_icall_nop(param_2,local_10,(longlong)iVar3);
      }
    }
    pcVar6 = (char *)FUN_143a8c200(uVar4);
    sVar5 = _guard_xfg_dispatch_icall_nop(pcVar6);
    if (0 < (int)sVar5) {
      local_38 = pcVar6;
      if (local_48 < param_3) {
        *(undefined1 *)((longlong)param_2 + (longlong)local_48) = 0x5f;
      }
      for (; local_48 = local_48 + 1, *local_38 != '\0'; local_38 = local_38 + 1) {
        if (local_48 < param_3) {
          if (local_38 == pcVar6) {
            uVar2 = FUN_143ab85d0(*local_38);
            *(undefined1 *)((longlong)param_2 + (longlong)local_48) = uVar2;
          }
          else {
            *(char *)((longlong)param_2 + (longlong)local_48) = *local_38;
          }
        }
      }
    }
    local_38 = (char *)FUN_143ac06b0(uVar4);
    sVar5 = _guard_xfg_dispatch_icall_nop(local_38);
    if (0 < (int)sVar5) {
      if (local_48 < param_3) {
        *(undefined1 *)((longlong)param_2 + (longlong)local_48) = 0x5f;
      }
      for (; local_48 = local_48 + 1, *local_38 != '\0'; local_38 = local_38 + 1) {
        if (local_48 < param_3) {
          uVar2 = FUN_143ab85d0(*local_38);
          *(undefined1 *)((longlong)param_2 + (longlong)local_48) = uVar2;
        }
      }
      bVar1 = false;
    }
    iVar3 = FUN_143ac0730(uVar4);
    if (0 < iVar3) {
      if (bVar1) {
        if (local_48 < param_3) {
          *(undefined1 *)((longlong)param_2 + (longlong)local_48) = 0x5f;
        }
        local_48 = local_48 + 1;
      }
      for (local_18 = 0; local_18 < iVar3; local_18 = local_18 + 1) {
        local_38 = (char *)FUN_143ac06c0(uVar4,local_18);
        if (local_48 < param_3) {
          *(undefined1 *)((longlong)param_2 + (longlong)local_48) = 0x5f;
        }
        for (; local_48 = local_48 + 1, *local_38 != '\0'; local_38 = local_38 + 1) {
          if (local_48 < param_3) {
            uVar2 = FUN_143ab85d0(*local_38);
            *(undefined1 *)((longlong)param_2 + (longlong)local_48) = uVar2;
          }
        }
      }
    }
    iVar3 = FUN_143ac05c0(uVar4);
    pcVar6 = (char *)FUN_143ac06a0(uVar4);
    if ((0 < iVar3) || (sVar5 = _guard_xfg_dispatch_icall_nop(pcVar6), sVar5 != 0)) {
      if ((local_48 == 0) && (0 < iVar3)) {
        if (0 < param_3) {
          iVar3 = FUN_143ac1240(3,param_3);
          _guard_xfg_dispatch_icall_nop(param_2,&DAT_145cf4a54,(longlong)iVar3);
        }
        local_48 = 3;
      }
      iVar3 = FUN_143abe4b0(uVar4,(longlong)param_2 + (longlong)local_48,param_3 - local_48,param_5)
      ;
      local_48 = local_48 + iVar3;
    }
    FUN_143ac0420(uVar4);
    uVar4 = FUN_143ab4930(param_2,param_3,local_48,param_5);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 143ac0420 FUN_143ac0420 body=190 status=ok
// SIG undefined FUN_143ac0420(void)

void FUN_143ac0420(undefined8 *param_1)

{
  longlong lVar1;
  longlong local_28;
  longlong local_20;
  
  if (param_1 != (undefined8 *)0x0) {
    FUN_143aa79f0(*param_1);
    if (param_1[7] != 0) {
      local_28 = param_1[7];
      while (local_28 != 0) {
        lVar1 = *(longlong *)(local_28 + 8);
        FUN_143aa79f0(local_28);
        local_28 = lVar1;
      }
    }
    if (param_1[8] != 0) {
      local_20 = param_1[8];
      while (local_20 != 0) {
        lVar1 = *(longlong *)(local_20 + 0x10);
        FUN_143aa79f0(local_20);
        local_20 = lVar1;
      }
    }
    FUN_143aa79f0(param_1);
  }
  return;
}



// FUNCTION 143ac04e0 FUN_143ac04e0 body=109 status=ok
// SIG undefined FUN_143ac04e0(void)

undefined8 FUN_143ac04e0(longlong param_1,int param_2)

{
  int local_28;
  undefined8 *local_20;
  
  local_20 = *(undefined8 **)(param_1 + 0x40);
  local_28 = 0;
  while( true ) {
    if (local_20 == (undefined8 *)0x0) {
      return 0;
    }
    if (local_28 == param_2) break;
    local_20 = (undefined8 *)local_20[2];
    local_28 = local_28 + 1;
  }
  return *local_20;
}



// FUNCTION 143ac0550 FUN_143ac0550 body=110 status=ok
// SIG undefined FUN_143ac0550(void)

undefined8 FUN_143ac0550(longlong param_1,int param_2)

{
  int local_28;
  longlong local_20;
  
  local_20 = *(longlong *)(param_1 + 0x40);
  local_28 = 0;
  while( true ) {
    if (local_20 == 0) {
      return 0;
    }
    if (local_28 == param_2) break;
    local_20 = *(longlong *)(local_20 + 0x10);
    local_28 = local_28 + 1;
  }
  return *(undefined8 *)(local_20 + 8);
}



// FUNCTION 143ac05c0 FUN_143ac05c0 body=79 status=ok
// SIG undefined FUN_143ac05c0(void)

int FUN_143ac05c0(longlong param_1)

{
  undefined4 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  for (local_10 = *(longlong *)(param_1 + 0x40); local_10 != 0;
      local_10 = *(longlong *)(local_10 + 0x10)) {
    local_18 = local_18 + 1;
  }
  return local_18;
}



// FUNCTION 143ac0610 FUN_143ac0610 body=43 status=ok
// SIG undefined FUN_143ac0610(void)

undefined8 FUN_143ac0610(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((param_2 < 0) || (2 < param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10 + (longlong)param_2 * 8);
  }
  return uVar1;
}



// FUNCTION 143ac0640 FUN_143ac0640 body=78 status=ok
// SIG undefined FUN_143ac0640(void)

int FUN_143ac0640(longlong param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
    if (*(longlong *)(param_1 + 0x10 + (longlong)local_18 * 8) != 0) {
      local_14 = local_14 + 1;
    }
  }
  return local_14;
}



// FUNCTION 143ac0690 FUN_143ac0690 body=15 status=ok
// SIG undefined FUN_143ac0690(void)

undefined8 FUN_143ac0690(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 143ac06a0 FUN_143ac06a0 body=15 status=ok
// SIG undefined FUN_143ac06a0(void)

undefined8 FUN_143ac06a0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// FUNCTION 143ac06b0 FUN_143ac06b0 body=15 status=ok
// SIG undefined FUN_143ac06b0(void)

undefined8 FUN_143ac06b0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// FUNCTION 143ac06c0 FUN_143ac06c0 body=109 status=ok
// SIG undefined FUN_143ac06c0(void)

undefined8 FUN_143ac06c0(longlong param_1,int param_2)

{
  int local_28;
  undefined8 *local_20;
  
  local_20 = *(undefined8 **)(param_1 + 0x38);
  local_28 = 0;
  while( true ) {
    if (local_20 == (undefined8 *)0x0) {
      return 0;
    }
    if (local_28 == param_2) break;
    local_20 = (undefined8 *)local_20[1];
    local_28 = local_28 + 1;
  }
  return *local_20;
}



// FUNCTION 143ac0730 FUN_143ac0730 body=79 status=ok
// SIG undefined FUN_143ac0730(void)

int FUN_143ac0730(longlong param_1)

{
  undefined4 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  for (local_10 = *(longlong *)(param_1 + 0x38); local_10 != 0;
      local_10 = *(longlong *)(local_10 + 8)) {
    local_18 = local_18 + 1;
  }
  return local_18;
}



// FUNCTION 143ac0780 FUN_143ac0780 body=2688 status=ok
// SIG undefined FUN_143ac0780(void)

undefined8 * FUN_143ac0780(char *param_1,int param_2,int *param_3,int *param_4)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  size_t sVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int local_res10;
  ushort local_a8;
  char *local_a0;
  undefined8 *local_90;
  char *local_70;
  int local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  int local_48;
  char *local_40;
  char *local_38;
  int local_30;
  int local_28;
  
  bVar1 = false;
  local_30 = 0;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (*param_4 < 1) {
    local_res10 = param_2;
    if (param_2 < 0) {
      sVar6 = _guard_xfg_dispatch_icall_nop(param_1);
      local_res10 = (int)sVar6;
    }
    local_60 = (char *)FUN_143aa7a40((longlong)(local_res10 + 1));
    if (local_60 == (char *)0x0) {
      *param_4 = 7;
      puVar7 = (undefined8 *)0x0;
    }
    else {
      _guard_xfg_dispatch_icall_nop(local_60,param_1,(longlong)local_res10);
      local_60[local_res10] = '\0';
      puVar7 = (undefined8 *)FUN_143aa7a40(0x58);
      if (puVar7 == (undefined8 *)0x0) {
        FUN_143aa79f0(local_60);
        *param_4 = 7;
        puVar7 = (undefined8 *)0x0;
      }
      else {
        FUN_143abfa50(puVar7);
        *puVar7 = local_60;
        if (1 < local_res10) {
          for (local_68 = 0; (&PTR_s_art_lojban_145cf4a90)[local_68] != (undefined *)0x0;
              local_68 = local_68 + 2) {
            iVar5 = FUN_143ab83b0((&PTR_s_art_lojban_145cf4a90)[local_68],local_60);
            if (iVar5 == 0) {
              local_30 = local_res10;
              sVar6 = _guard_xfg_dispatch_icall_nop((&PTR_s_art_lojban_145cf4a90)[local_68 + 1]);
              if (local_res10 < (int)sVar6) {
                FUN_143aa79f0(local_60);
                local_60 = (char *)FUN_143aa7a40((longlong)((int)sVar6 + 1));
                if (local_60 == (char *)0x0) {
                  *param_4 = 7;
                  return (undefined8 *)0x0;
                }
                *puVar7 = local_60;
              }
              _guard_xfg_dispatch_icall_nop
                        ((char *)*puVar7,(&PTR_s_art_lojban_145cf4a90)[local_68 + 1]);
              break;
            }
          }
          local_a8 = 0x81;
          local_70 = local_60;
          local_50 = local_60;
          local_48 = 0;
          local_90 = (undefined8 *)0x0;
          local_38 = (char *)0x0;
          local_58 = (char *)0x0;
LAB_143ac0a0c:
          do {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    while( true ) {
                      pcVar2 = local_50;
                      if (local_50 == (char *)0x0) goto LAB_143ac1123;
                      for (local_a0 = local_50; (*local_a0 != '\0' && (*local_a0 != '-'));
                          local_a0 = local_a0 + 1) {
                      }
                      if (*local_a0 == '\0') {
                        local_50 = (char *)0x0;
                      }
                      else {
                        local_50 = local_a0 + 1;
                      }
                      pcVar3 = local_50;
                      iVar5 = (int)local_a0 - (int)pcVar2;
                      if (((local_a8 & 1) == 0) ||
                         (cVar4 = FUN_143abfd30(pcVar2,iVar5), cVar4 == '\0')) break;
                      *local_a0 = '\0';
                      uVar8 = FUN_143ab8220(pcVar2);
                      puVar7[1] = uVar8;
                      local_70 = local_a0;
                      local_a8 = 0xbe;
                    }
                    if (((local_a8 & 2) == 0) ||
                       (cVar4 = FUN_143abfc90(pcVar2,iVar5), cVar4 == '\0')) break;
                    *local_a0 = '\0';
                    uVar8 = FUN_143ab8220(pcVar2);
                    puVar7[(longlong)local_48 + 2] = uVar8;
                    local_48 = local_48 + 1;
                    local_70 = local_a0;
                    if (local_48 < 3) {
                      local_a8 = 0xbe;
                    }
                    else {
                      local_a8 = 0xbc;
                    }
                  }
                  if (((local_a8 & 4) == 0) || (cVar4 = FUN_143abfea0(pcVar2,iVar5), cVar4 == '\0'))
                  break;
                  *local_a0 = '\0';
                  cVar4 = FUN_143ab85d0(*pcVar2);
                  *pcVar2 = cVar4;
                  local_40 = pcVar2;
                  while (local_40 = local_40 + 1, *local_40 != '\0') {
                    cVar4 = FUN_143ab82e0(*local_40);
                    *local_40 = cVar4;
                  }
                  puVar7[5] = pcVar2;
                  local_70 = local_a0;
                  local_a8 = 0xb8;
                }
                if (((local_a8 & 8) == 0) || (cVar4 = FUN_143abfe30(pcVar2,iVar5), cVar4 == '\0'))
                break;
                *local_a0 = '\0';
                uVar8 = FUN_143ab8280(pcVar2);
                puVar7[6] = uVar8;
                local_70 = local_a0;
                local_a8 = 0xb0;
              }
              if (((local_a8 & 0x10) == 0) ||
                 ((cVar4 = FUN_143abfef0(pcVar2,iVar5), cVar4 == '\0' &&
                  ((!bVar1 || (cVar4 = FUN_143abfde0(pcVar2,iVar5), cVar4 == '\0')))))) break;
              puVar9 = (undefined8 *)FUN_143aa7a40(0x10);
              if (puVar9 == (undefined8 *)0x0) {
                *param_4 = 7;
LAB_143ac11f5:
                FUN_143aa79f0(puVar7);
                return (undefined8 *)0x0;
              }
              *local_a0 = '\0';
              uVar8 = FUN_143ab8280(pcVar2);
              *puVar9 = uVar8;
              cVar4 = FUN_143abe3e0(puVar7 + 7,puVar9);
              if (cVar4 == '\0') {
                FUN_143aa79f0(puVar9);
                goto LAB_143ac1123;
              }
              local_70 = local_a0;
              local_a8 = 0xb0;
            }
            if (((local_a8 & 0x20) != 0) && (cVar4 = FUN_143abfbe0(pcVar2,iVar5), cVar4 != '\0')) {
              if (local_90 != (undefined8 *)0x0) {
                if ((local_38 == (char *)0x0) || (local_58 == (char *)0x0)) {
                  FUN_143aa79f0(local_90);
                  local_90 = (undefined8 *)0x0;
                  goto LAB_143ac1123;
                }
                *local_58 = '\0';
                uVar8 = FUN_143ab8220(local_38);
                local_90[1] = uVar8;
                cVar4 = FUN_143abe1c0(puVar7 + 8,local_90,0);
                if (cVar4 == '\0') {
                  FUN_143aa79f0(local_90);
                  local_90 = (undefined8 *)0x0;
                  goto LAB_143ac1123;
                }
                local_70 = local_58;
              }
              local_90 = (undefined8 *)FUN_143aa7a40(0x18);
              if (local_90 == (undefined8 *)0x0) {
                *param_4 = 7;
                goto LAB_143ac11f5;
              }
              *local_a0 = '\0';
              uVar8 = FUN_143ab8220(pcVar2);
              *local_90 = uVar8;
              local_90[1] = 0;
              local_38 = (char *)0x0;
              local_58 = (char *)0x0;
              local_a8 = 0x40;
              goto LAB_143ac0a0c;
            }
            if (((local_a8 & 0x40) != 0) && (cVar4 = FUN_143abfc40(pcVar2,iVar5), cVar4 != '\0')) {
              if (local_38 == (char *)0x0) {
                local_38 = pcVar2;
              }
              local_58 = local_a0;
              local_a8 = 0xe0;
              goto LAB_143ac0a0c;
            }
            if (((local_a8 & 0x80) == 0) || (cVar4 = FUN_143ab82e0(*pcVar2), cVar4 != 'x'))
            goto LAB_143ac1123;
            if (local_90 != (undefined8 *)0x0) {
              if ((local_38 == (char *)0x0) || (local_58 == (char *)0x0)) {
                FUN_143aa79f0(local_90);
                local_90 = (undefined8 *)0x0;
                goto LAB_143ac1123;
              }
              *local_58 = '\0';
              uVar8 = FUN_143ab8220(local_38);
              local_90[1] = uVar8;
              cVar4 = FUN_143abe1c0(puVar7 + 8,local_90,0);
              if (cVar4 == '\0') {
                FUN_143aa79f0(local_90);
                local_90 = (undefined8 *)0x0;
                goto LAB_143ac1123;
              }
              local_70 = local_58;
              local_90 = (undefined8 *)0x0;
            }
            if (local_50 == (char *)0x0) goto LAB_143ac1123;
            while (pcVar2 = local_50, local_50 != (char *)0x0) {
              for (local_a0 = local_50; (*local_a0 != '\0' && (*local_a0 != '-'));
                  local_a0 = local_a0 + 1) {
              }
              if (*local_a0 == '\0') {
                local_50 = (char *)0x0;
              }
              else {
                local_50 = local_a0 + 1;
              }
              sVar6 = _guard_xfg_dispatch_icall_nop("lvariant");
              iVar5 = strncmp(pcVar2,"lvariant",sVar6);
              if (iVar5 == 0) {
                *local_a0 = '\0';
                local_a8 = 0x10;
                bVar1 = true;
                break;
              }
              cVar4 = FUN_143abfde0(pcVar2,(int)local_a0 - (int)pcVar2);
              if (cVar4 == '\0') break;
              local_70 = local_a0;
            }
          } while (local_a8 == 0x10);
          if (local_70 != pcVar3 && -1 < (longlong)local_70 - (longlong)pcVar3) {
            *local_70 = '\0';
            uVar8 = FUN_143ab8220(pcVar3);
            puVar7[9] = uVar8;
          }
LAB_143ac1123:
          if (local_90 != (undefined8 *)0x0) {
            if ((local_38 == (char *)0x0) || (local_58 == (char *)0x0)) {
              FUN_143aa79f0(local_90);
            }
            else {
              *local_58 = '\0';
              uVar8 = FUN_143ab8220(local_38);
              local_90[1] = uVar8;
              cVar4 = FUN_143abe1c0(puVar7 + 8,local_90,0);
              if (cVar4 == '\0') {
                FUN_143aa79f0(local_90);
              }
              else {
                local_70._0_4_ = (int)local_58;
              }
            }
          }
          if (param_3 != (int *)0x0) {
            if (local_30 < 1) {
              local_28 = (int)local_70 - (int)*puVar7;
            }
            else {
              local_28 = local_30;
            }
            *param_3 = local_28;
          }
        }
      }
    }
  }
  else {
    puVar7 = (undefined8 *)0x0;
  }
  return puVar7;
}



// FUNCTION 143ac1210 FUN_143ac1210 body=46 status=ok
// SIG undefined FUN_143ac1210(void)

int FUN_143ac1210(int param_1,int param_2)

{
  int local_18;
  
  local_18 = param_2;
  if (param_2 < param_1) {
    local_18 = param_1;
  }
  return local_18;
}



// FUNCTION 143ac1240 FUN_143ac1240 body=46 status=ok
// SIG undefined FUN_143ac1240(void)

int FUN_143ac1240(int param_1,int param_2)

{
  int local_18;
  
  local_18 = param_1;
  if (param_2 < param_1) {
    local_18 = param_2;
  }
  return local_18;
}



// FUNCTION 143ac1270 FUN_143ac1270 body=316 status=ok
// SIG undefined FUN_143ac1270(void)

void FUN_143ac1270(longlong param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  void *param_6)

{
  void *_Src;
  void *_Src_00;
  undefined4 local_28;
  undefined4 local_24;
  
  for (local_24 = 1; local_24 < param_2; local_24 = local_24 + 1) {
    _Src = (void *)(param_1 + local_24 * param_3);
    local_28 = FUN_143ac19f0(param_1,local_24,_Src,param_3,param_4,param_5);
    if ((int)local_28 < 0) {
      local_28 = ~local_28;
    }
    else {
      local_28 = local_28 + 1;
    }
    if ((int)local_28 < local_24) {
      _Src_00 = (void *)(param_1 + (int)(local_28 * param_3));
      _guard_xfg_dispatch_icall_nop(param_6,_Src,(longlong)param_3);
      memmove((void *)((longlong)_Src_00 + (longlong)param_3),_Src_00,
              (longlong)(int)((local_24 - local_28) * param_3));
      _guard_xfg_dispatch_icall_nop(_Src_00,param_6,(longlong)param_3);
    }
  }
  return;
}



// FUNCTION 143ac13b0 FUN_143ac13b0 body=219 status=ok
// SIG undefined FUN_143ac13b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143ac13b0(undefined8 param_1,undefined4 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 local_e8 [208];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  if (param_3 < 0xc9) {
    local_f8 = local_e8;
  }
  else {
    local_f8 = (undefined1 *)FUN_143aa7a40((longlong)param_3);
    if (local_f8 == (undefined1 *)0x0) {
      *param_6 = 7;
      return;
    }
  }
  local_100 = local_f8;
  local_108 = param_5;
  FUN_143ac1270(param_1,param_2,param_3,param_4);
  if (local_f8 != local_e8) {
    FUN_143aa79f0(local_f8);
  }
  return;
}



// FUNCTION 143ac1490 FUN_143ac1490 body=254 status=ok
// SIG undefined FUN_143ac1490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143ac1490(undefined8 param_1,undefined4 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  undefined1 local_1b8 [416];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  if (param_3 < 0xc9) {
    local_1c8 = local_1b8;
  }
  else {
    local_1c8 = (undefined1 *)FUN_143aa7a40((longlong)(param_3 << 1));
    if (local_1c8 == (undefined1 *)0x0) {
      *param_6 = 7;
      return;
    }
  }
  local_1d0 = local_1c8 + param_3;
  local_1d8 = local_1c8;
  local_1e0 = param_5;
  local_1e8 = param_4;
  FUN_143ac1590(param_1,0,param_2,param_3);
  if (local_1c8 != local_1b8) {
    FUN_143aa79f0(local_1c8);
  }
  return;
}



// FUNCTION 143ac1590 FUN_143ac1590 body=882 status=ok
// SIG undefined FUN_143ac1590(void)

void FUN_143ac1590(longlong param_1,int param_2,int param_3,int param_4,code *param_5,
                  undefined8 param_6,void *param_7,void *param_8)

{
  int iVar1;
  int local_res10;
  int local_res18;
  int local_28;
  int local_24;
  
  local_res10 = param_2;
  local_res18 = param_3;
  do {
    if (local_res18 <= local_res10 + 9) {
      FUN_143ac1270(param_1 + local_res10 * param_4,local_res18 - local_res10,param_4,param_5,
                    param_6,param_7);
      return;
    }
    local_28 = local_res10;
    local_24 = local_res18;
    _guard_xfg_dispatch_icall_nop
              (param_7,(void *)(param_1 + ((local_res10 + local_res18) / 2) * param_4),
               (longlong)param_4);
    do {
      while (iVar1 = (*param_5)(param_6,param_1 + local_28 * param_4,param_7), iVar1 < 0) {
        local_28 = local_28 + 1;
      }
      while (iVar1 = (*param_5)(param_6,param_7,param_1 + (local_24 + -1) * param_4), iVar1 < 0) {
        local_24 = local_24 + -1;
      }
      if (local_28 < local_24) {
        local_24 = local_24 + -1;
        if (local_28 < local_24) {
          _guard_xfg_dispatch_icall_nop
                    (param_8,(void *)(param_1 + local_28 * param_4),(longlong)param_4);
          _guard_xfg_dispatch_icall_nop
                    ((void *)(param_1 + local_28 * param_4),(void *)(param_1 + local_24 * param_4),
                     (longlong)param_4);
          _guard_xfg_dispatch_icall_nop
                    ((void *)(param_1 + local_24 * param_4),param_8,(longlong)param_4);
        }
        local_28 = local_28 + 1;
      }
    } while (local_28 < local_24);
    if (local_24 - local_res10 < local_res18 - local_28) {
      if (local_res10 < local_24 + -1) {
        FUN_143ac1590(param_1,local_res10,local_24,param_4,param_5,param_6,param_7,param_8);
      }
      local_res10 = local_28;
    }
    else {
      if (local_28 < local_res18 + -1) {
        FUN_143ac1590(param_1,local_28,local_res18,param_4,param_5,param_6,param_7,param_8);
      }
      local_res18 = local_24;
    }
  } while (local_res10 < local_res18 + -1);
  return;
}



// FUNCTION 143ac1910 FUN_143ac1910 body=216 status=ok
// SIG undefined FUN_143ac1910(void)

void FUN_143ac1910(longlong param_1,int param_2,int param_3,longlong param_4,undefined8 param_5,
                  char param_6,int *param_7)

{
  if ((param_7 != (int *)0x0) && (*param_7 < 1)) {
    if (((param_2 < 1) || (param_1 != 0)) && (((-1 < param_2 && (0 < param_3)) && (param_4 != 0))))
    {
      if (1 < param_2) {
        if ((param_2 < 9) || (param_6 != '\0')) {
          FUN_143ac13b0(param_1,param_2,param_3,param_4,param_5,param_7);
        }
        else {
          FUN_143ac1490(param_1,param_2,param_3,param_4,param_5,param_7);
        }
      }
    }
    else {
      *param_7 = 1;
    }
  }
  return;
}



// FUNCTION 143ac19f0 FUN_143ac19f0 body=299 status=ok
// SIG undefined FUN_143ac19f0(void)

uint FUN_143ac19f0(longlong param_1,uint param_2,undefined8 param_3,int param_4,code *param_5,
                  undefined8 param_6)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint local_res10;
  uint local_24;
  uint local_14;
  
  local_24 = 0;
  bVar1 = false;
  local_res10 = param_2;
  uVar2 = local_24;
  while (local_24 = uVar2, 8 < (int)(local_res10 - local_24)) {
    uVar2 = (int)(local_24 + local_res10) / 2;
    iVar3 = (*param_5)(param_6,param_3,param_1 + (int)(uVar2 * param_4));
    if (iVar3 == 0) {
      bVar1 = true;
      uVar2 = uVar2 + 1;
    }
    else if (iVar3 < 0) {
      local_res10 = uVar2;
      uVar2 = local_24;
    }
  }
  for (; (int)local_24 < (int)local_res10; local_24 = local_24 + 1) {
    iVar3 = (*param_5)(param_6,param_3,param_1 + (int)(local_24 * param_4));
    if (iVar3 == 0) {
      bVar1 = true;
    }
    else if (iVar3 < 0) break;
  }
  if (bVar1) {
    local_14 = local_24 - 1;
  }
  else {
    local_14 = ~local_24;
  }
  return local_14;
}



// FUNCTION 143ac1b20 FUN_143ac1b20 body=925 status=ok
// SIG undefined FUN_143ac1b20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143ac1b20(undefined8 param_1,char *param_2,char *param_3,longlong param_4,longlong param_5,
             undefined8 param_6,int *param_7)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_288 [32];
  int local_268;
  undefined4 local_264;
  longlong local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined1 local_238 [192];
  undefined1 local_178 [192];
  char local_b8;
  undefined1 local_b7 [159];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  local_258 = 0;
  local_250 = 0;
  local_b8 = '\0';
  puVar4 = local_b7;
  for (lVar3 = 0x9c; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_268 = 0;
  local_258 = FUN_143aa5b10(param_1,param_2,&local_268);
  cVar1 = FUN_143a8b0e0(local_268);
  if (cVar1 == '\0') {
    if ((local_268 == -0x7f) || ((local_268 == -0x80 && (*param_7 != -0x7f)))) {
      *param_7 = local_268;
    }
    do {
      FUN_143aa5540(local_238);
      FUN_143aa5540(local_178);
      FUN_143aa3350(local_258,param_3,local_238,&local_268);
      if (param_4 != 0) {
        FUN_143aa3350(local_238,param_4,local_238,&local_268);
      }
      cVar1 = FUN_143a8b110(local_268);
      if (cVar1 != '\0') {
        local_250 = FUN_143aa4fe0(local_238,param_5,param_6,&local_268);
        cVar1 = FUN_143a8b0e0(local_268);
        if (cVar1 == '\0') goto LAB_143ac1e80;
        local_260 = 0;
        *param_7 = local_268;
        local_268 = 0;
        iVar2 = _guard_xfg_dispatch_icall_nop(param_3,"Countries");
        if (iVar2 == 0) {
          local_260 = FUN_143a96990(param_5);
        }
        else {
          iVar2 = _guard_xfg_dispatch_icall_nop(param_3,"Languages");
          if (iVar2 == 0) {
            local_260 = FUN_143a969e0(param_5);
          }
        }
        if ((local_260 != 0) && (param_5 != local_260)) {
          local_250 = FUN_143aa4fe0(local_238,local_260,param_6,&local_268);
          cVar1 = FUN_143a8b110(local_268);
          if (cVar1 != '\0') {
            *param_7 = local_268;
            goto LAB_143ac1e80;
          }
        }
      }
      cVar1 = FUN_143a8b0e0(local_268);
      if (cVar1 == '\0') goto LAB_143ac1e80;
      local_264 = 0;
      local_248 = 0;
      *param_7 = local_268;
      local_268 = 0;
      local_248 = FUN_143aa4fe0(local_238,"Fallback",&local_264,&local_268);
      cVar1 = FUN_143a8b0e0(local_268);
      if (cVar1 != '\0') {
        *param_7 = local_268;
        goto LAB_143ac1e80;
      }
      FUN_143ab5770(local_248,&local_b8,local_264);
      iVar2 = _guard_xfg_dispatch_icall_nop(&local_b8,param_2);
      if (iVar2 == 0) {
        *param_7 = 5;
        goto LAB_143ac1e80;
      }
      FUN_143aa2ef0(local_258);
      local_258 = FUN_143aa5b10(param_1,&local_b8,&local_268);
      cVar1 = FUN_143a8b0e0(local_268);
    } while (cVar1 == '\0');
    *param_7 = local_268;
LAB_143ac1e80:
    FUN_143aa2ef0(local_178);
    FUN_143aa2ef0(local_238);
    FUN_143aa2ef0(local_258);
  }
  else {
    *param_7 = local_268;
    local_250 = 0;
  }
  return local_250;
}



// FUNCTION 143ac1ec0 FUN_143ac1ec0 body=1666 status=ok
// SIG undefined FUN_143ac1ec0(void)

void FUN_143ac1ec0(longlong *param_1,uint param_2,uint param_3,code *param_4,code *param_5,
                  undefined8 param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *local_res20;
  uint local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  uint local_58;
  longlong local_50;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  longlong local_20;
  uint local_18;
  
  if (param_5 != (code *)0x0) {
    local_res20 = param_4;
    if (param_4 == (code *)0x0) {
      local_res20 = FUN_143ac2550;
    }
    if (param_1[9] == 0) {
      local_50 = *param_1;
      local_20 = param_1[2];
      local_28 = (uint)*(ushort *)(param_1 + 4);
      local_48 = (uint)*(ushort *)((longlong)param_1 + 0x22);
    }
    else {
      local_50 = 0;
      local_20 = *(longlong *)(param_1[9] + 0x23300);
      local_28 = *(uint *)(param_1[9] + 0x23320);
      local_48 = *(uint *)(param_1[9] + 0x23324);
    }
    iVar5 = *(int *)((longlong)param_1 + 0x2c);
    iVar3 = (*local_res20)(param_6,*(undefined4 *)((longlong)param_1 + 0x24));
    local_38 = 0xffffffff;
    local_44 = 0xffffffff;
    local_70 = 0;
    local_78 = param_2;
    local_74 = param_2;
    while (((int)local_78 < (int)param_3 && ((int)local_78 < iVar5))) {
      local_64 = local_78 + 0x800;
      if ((int)param_3 < (int)local_64) {
        local_64 = param_3;
      }
      iVar4 = (int)local_78 >> 0xb;
      if ((int)local_78 < 0x10000) {
        local_6c = (int)local_78 >> 5;
        if ((local_78 & 0xfffff800) == 0xd800) {
          if ((local_78 & 0x400) == 0) {
            local_6c = 0x800;
            local_2c = param_3;
            if (0xdc00 < (int)param_3) {
              local_2c = 0xdc00;
            }
            local_64 = local_2c;
          }
          else {
            local_6c = 0x6c0;
            local_18 = param_3;
            if (0xe000 < (int)param_3) {
              local_18 = 0xe000;
            }
            local_64 = local_18;
          }
        }
LAB_143ac2162:
        local_38 = local_6c;
        if (local_6c == local_28) {
          if (local_70 != iVar3) {
            if (((int)local_74 < (int)local_78) &&
               (cVar2 = (*param_5)(param_6,local_74,local_78 - 1,local_70), cVar2 == '\0')) {
              return;
            }
            local_44 = local_48;
            local_74 = local_78;
            local_70 = iVar3;
          }
          local_78 = local_78 + 0x800;
        }
        else {
          local_58 = (int)local_78 >> 5 & 0x3f;
          if (iVar4 == (int)local_64 >> 0xb) {
            local_30 = (int)local_64 >> 5 & 0x3f;
          }
          else {
            local_30 = 0x40;
          }
          for (; (int)local_58 < (int)local_30; local_58 = local_58 + 1) {
            if (local_50 == 0) {
              local_68 = *(uint *)(param_1[9] + 0x880 + (longlong)(int)(local_6c + local_58) * 4);
            }
            else {
              local_68 = (uint)*(ushort *)(local_50 + (longlong)(int)(local_6c + local_58) * 2) << 2
              ;
            }
            if ((local_68 == local_44) && (0x1f < (int)(local_78 - local_74))) {
              local_78 = local_78 + 0x20;
            }
            else {
              local_44 = local_68;
              if (local_68 == local_48) {
                if (local_70 != iVar3) {
                  if (((int)local_74 < (int)local_78) &&
                     (cVar2 = (*param_5)(param_6,local_74,local_78 - 1,local_70), cVar2 == '\0')) {
                    return;
                  }
                  local_74 = local_78;
                  local_70 = iVar3;
                }
                local_78 = local_78 + 0x20;
              }
              else {
                for (local_60 = 0; local_60 < 0x20; local_60 = local_60 + 1) {
                  if (local_20 == 0) {
                    local_40 = (uint)*(ushort *)
                                      (local_50 + (longlong)(int)(local_68 + local_60) * 2);
                  }
                  else {
                    local_40 = *(uint *)(local_20 + (longlong)(int)(local_68 + local_60) * 4);
                  }
                  iVar4 = (*local_res20)(param_6,local_40);
                  if (iVar4 != local_70) {
                    if (((int)local_74 < (int)local_78) &&
                       (cVar2 = (*param_5)(param_6,local_74,local_78 - 1,local_70), cVar2 == '\0'))
                    {
                      return;
                    }
                    local_74 = local_78;
                    local_70 = iVar4;
                  }
                  local_78 = local_78 + 1;
                }
              }
            }
          }
        }
      }
      else {
        if (local_50 == 0) {
          local_6c = *(uint *)(param_1[9] + (longlong)iVar4 * 4);
        }
        else {
          local_6c = (uint)*(ushort *)(local_50 + (longlong)(iVar4 + 0x820) * 2);
        }
        if ((local_6c != local_38) || ((int)(local_78 - local_74) < 0x800)) goto LAB_143ac2162;
        local_78 = local_78 + 0x800;
      }
    }
    uVar1 = param_3;
    if (((int)local_78 <= (int)param_3) && (uVar1 = local_78, (int)local_78 < (int)param_3)) {
      if (local_50 == 0) {
        local_34 = *(uint *)(*(longlong *)(param_1[9] + 0x23300) +
                            (longlong)(*(int *)(param_1[9] + 0x23318) + -4) * 4);
      }
      else {
        if (local_20 == 0) {
          local_3c = (uint)*(ushort *)(local_50 + (longlong)(int)param_1[6] * 2);
        }
        else {
          local_3c = *(uint *)(local_20 + (longlong)(int)param_1[6] * 4);
        }
        local_34 = local_3c;
      }
      iVar5 = (*local_res20)(param_6,local_34);
      uVar1 = param_3;
      if (iVar5 != local_70) {
        if (((int)local_74 < (int)local_78) &&
           (cVar2 = (*param_5)(param_6,local_74,local_78 - 1,local_70), cVar2 == '\0')) {
          return;
        }
        local_74 = local_78;
        uVar1 = param_3;
        local_70 = iVar5;
      }
    }
    local_78 = uVar1;
    (*param_5)(param_6,local_74,local_78 - 1,local_70);
  }
  return;
}



// FUNCTION 143ac2550 FUN_143ac2550 body=14 status=ok
// SIG undefined FUN_143ac2550(void)

undefined4 FUN_143ac2550(undefined8 param_1,undefined4 param_2)

{
  return param_2;
}



// FUNCTION 143ac2560 FUN_143ac2560 body=224 status=ok
// SIG undefined FUN_143ac2560(void)

undefined4 FUN_143ac2560(longlong param_1,uint param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 local_18;
  
  if (((int)param_2 < *(int *)(param_1 + 0x23328)) ||
     (((param_2 & 0xfffffc00) == 0xd800 && (param_3 == '\0')))) {
    if (((param_2 & 0xfffffc00) == 0xd800) && (param_3 != '\0')) {
      local_18 = ((int)param_2 >> 5) + 0x140;
    }
    else {
      local_18 = ((int)param_2 >> 5 & 0x3fU) +
                 *(int *)(param_1 + (longlong)((int)param_2 >> 0xb) * 4);
    }
    uVar1 = *(undefined4 *)
             (*(longlong *)(param_1 + 0x23300) +
             (longlong)(int)(*(int *)(param_1 + 0x880 + (longlong)local_18 * 4) + (param_2 & 0x1f))
             * 4);
  }
  else {
    uVar1 = *(undefined4 *)
             (*(longlong *)(param_1 + 0x23300) + (longlong)(*(int *)(param_1 + 0x23318) + -4) * 4);
  }
  return uVar1;
}



// FUNCTION 143ac2640 FUN_143ac2640 body=539 status=ok
// SIG undefined FUN_143ac2640(void)

undefined2 FUN_143ac2640(longlong *param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  int local_10;
  
  param_1[1] = param_1[2];
  if (param_1[2] == param_1[4]) {
    *(undefined4 *)(param_1 + 3) = 0xffffffff;
    uVar2 = 0;
  }
  else {
    *(uint *)(param_1 + 3) = (uint)*(ushort *)param_1[2];
    param_1[2] = param_1[2] + 2;
    if ((*(uint *)(param_1 + 3) & 0xfffffc00) == 0xd800) {
      if ((param_1[2] == param_1[4]) || (uVar1 = *(ushort *)param_1[2], (uVar1 & 0xfc00) != 0xdc00))
      {
        uVar2 = *(undefined2 *)
                 (*(longlong *)*param_1 +
                 (longlong)
                 (int)((*(uint *)(param_1 + 3) & 0x1f) +
                      (uint)*(ushort *)
                             (*(longlong *)*param_1 + (longlong)(((int)param_1[3] >> 5) + 0x140) * 2
                             ) * 4) * 2);
      }
      else {
        param_1[2] = param_1[2] + 2;
        *(uint *)(param_1 + 3) = (int)param_1[3] * 0x400 + -0x35fdc00 + (uint)uVar1;
        if ((int)param_1[3] < *(int *)(*param_1 + 0x2c)) {
          local_10 = (*(uint *)(param_1 + 3) & 0x1f) +
                     (uint)*(ushort *)
                            (*(longlong *)*param_1 +
                            (longlong)
                            (int)((uint)*(ushort *)
                                         (*(longlong *)*param_1 +
                                         (longlong)(((int)param_1[3] >> 0xb) + 0x820) * 2) +
                                 ((int)param_1[3] >> 5 & 0x3fU)) * 2) * 4;
        }
        else {
          local_10 = *(int *)(*param_1 + 0x30);
        }
        uVar2 = *(undefined2 *)(*(longlong *)*param_1 + (longlong)local_10 * 2);
      }
    }
    else {
      uVar2 = *(undefined2 *)
               (*(longlong *)*param_1 +
               (longlong)
               (int)((*(uint *)(param_1 + 3) & 0x1f) +
                    (uint)*(ushort *)(*(longlong *)*param_1 + (longlong)((int)param_1[3] >> 5) * 2)
                    * 4) * 2);
    }
  }
  return uVar2;
}



// FUNCTION 143ac2860 FUN_143ac2860 body=519 status=ok
// SIG undefined FUN_143ac2860(void)

undefined2 FUN_143ac2860(longlong *param_1)

{
  ushort uVar1;
  longlong lVar2;
  undefined2 uVar3;
  int local_20;
  int local_1c;
  
  param_1[2] = param_1[1];
  if ((ulonglong)param_1[4] < (ulonglong)param_1[1]) {
    lVar2 = param_1[1];
    param_1[1] = lVar2 + -2;
    *(uint *)(param_1 + 3) = (uint)*(ushort *)(lVar2 + -2);
    if ((((*(uint *)(param_1 + 3) & 0xfffffc00) == 0xdc00) && (param_1[1] != param_1[4])) &&
       (uVar1 = *(ushort *)(param_1[1] + -2), (uVar1 & 0xfc00) == 0xd800)) {
      param_1[1] = param_1[1] + -2;
      *(uint *)(param_1 + 3) = (uint)uVar1 * 0x400 + -0x35fdc00 + (int)param_1[3];
      if ((int)param_1[3] < *(int *)(*param_1 + 0x2c)) {
        local_1c = (*(uint *)(param_1 + 3) & 0x1f) +
                   (uint)*(ushort *)
                          (*(longlong *)*param_1 +
                          (longlong)
                          (int)((uint)*(ushort *)
                                       (*(longlong *)*param_1 +
                                       (longlong)(((int)param_1[3] >> 0xb) + 0x820) * 2) +
                               ((int)param_1[3] >> 5 & 0x3fU)) * 2) * 4;
      }
      else {
        local_1c = *(int *)(*param_1 + 0x30);
      }
      uVar3 = *(undefined2 *)(*(longlong *)*param_1 + (longlong)local_1c * 2);
    }
    else {
      if ((*(uint *)(param_1 + 3) & 0xfffffc00) == 0xd800) {
        local_20 = 0x140;
      }
      else {
        local_20 = 0;
      }
      uVar3 = *(undefined2 *)
               (*(longlong *)*param_1 +
               (longlong)
               (int)((*(uint *)(param_1 + 3) & 0x1f) +
                    (uint)*(ushort *)
                           (*(longlong *)*param_1 +
                           (longlong)(local_20 + ((int)param_1[3] >> 5)) * 2) * 4) * 2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 3) = 0xffffffff;
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143ac2a70 FUN_143ac2a70 body=106 status=ok
// SIG undefined FUN_143ac2a70(void)

void FUN_143ac2a70(longlong param_1)

{
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x44) != '\0') {
      FUN_143aa79f0(*(undefined8 *)(param_1 + 0x38));
    }
    if (*(longlong *)(param_1 + 0x48) != 0) {
      FUN_143aa79f0(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x23300));
      FUN_143aa79f0(*(undefined8 *)(param_1 + 0x48));
    }
    FUN_143aa79f0(param_1);
  }
  return;
}



// FUNCTION 143ac2ae0 FUN_143ac2ae0 body=113 status=ok
// SIG undefined FUN_143ac2ae0(void)

void FUN_143ac2ae0(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  
  if ((param_2 & 0xfffffc00) == 0xd800) {
    iVar1 = (param_2 - 0xd7c0) * 0x400;
    FUN_143ac1ec0(param_1,iVar1,iVar1 + 0x400,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 143ac2b60 FUN_143ac2b60 body=72 status=ok
// SIG undefined FUN_143ac2b60(void)

void FUN_143ac2b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143ac1ec0(param_1,0,0x110000,param_2,param_3,param_4);
  return;
}



// FUNCTION 143ac2bb0 FUN_143ac2bb0 body=689 status=ok
// SIG undefined FUN_143ac2bb0(void)

ulonglong FUN_143ac2bb0(longlong *param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  uVar2 = (int)param_2 >> 5;
  if (param_1[1] == 0) {
    if (param_1[2] == 0) {
      if (param_2 < 0x110000) {
        uVar1 = FUN_143ac2560(param_1[9],param_2,1);
      }
      else {
        uVar1 = (ulonglong)*(uint *)(param_1 + 5);
      }
    }
    else {
      if (param_2 < 0xd800) {
        local_14 = (param_2 & 0x1f) + (uint)*(ushort *)(*param_1 + (longlong)(int)uVar2 * 2) * 4;
      }
      else {
        if (param_2 < 0x10000) {
          if ((int)param_2 < 0xdc00) {
            local_34 = 0x140;
          }
          else {
            local_34 = 0;
          }
          local_1c = (param_2 & 0x1f) +
                     (uint)*(ushort *)(*param_1 + (longlong)(int)(local_34 + uVar2) * 2) * 4;
        }
        else {
          if (param_2 < 0x110000) {
            if ((int)param_2 < *(int *)((longlong)param_1 + 0x2c)) {
              local_2c = (param_2 & 0x1f) +
                         (uint)*(ushort *)
                                (*param_1 +
                                (longlong)
                                (int)((uint)*(ushort *)
                                             (*param_1 +
                                             (longlong)(((int)param_2 >> 0xb) + 0x820) * 2) +
                                     (uVar2 & 0x3f)) * 2) * 4;
            }
            else {
              local_2c = (int)param_1[6];
            }
            local_24 = local_2c;
          }
          else {
            local_24 = 0x80;
          }
          local_1c = local_24;
        }
        local_14 = local_1c;
      }
      uVar1 = (ulonglong)*(uint *)(param_1[2] + (longlong)local_14 * 4);
    }
  }
  else {
    if (param_2 < 0xd800) {
      local_38 = (param_2 & 0x1f) + (uint)*(ushort *)(*param_1 + (longlong)(int)uVar2 * 2) * 4;
    }
    else {
      if (param_2 < 0x10000) {
        if ((int)param_2 < 0xdc00) {
          local_18 = 0x140;
        }
        else {
          local_18 = 0;
        }
        local_28 = (param_2 & 0x1f) +
                   (uint)*(ushort *)(*param_1 + (longlong)(int)(local_18 + uVar2) * 2) * 4;
      }
      else {
        if (param_2 < 0x110000) {
          if ((int)param_2 < *(int *)((longlong)param_1 + 0x2c)) {
            local_30 = (param_2 & 0x1f) +
                       (uint)*(ushort *)
                              (*param_1 +
                              (longlong)
                              (int)((uint)*(ushort *)
                                           (*param_1 + (longlong)(((int)param_2 >> 0xb) + 0x820) * 2
                                           ) + (uVar2 & 0x3f)) * 2) * 4;
          }
          else {
            local_30 = (int)param_1[6];
          }
          local_20 = local_30;
        }
        else {
          local_20 = (int)param_1[3] + 0x80;
        }
        local_28 = local_20;
      }
      local_38 = local_28;
    }
    uVar1 = (ulonglong)*(ushort *)(*param_1 + (longlong)local_38 * 2);
  }
  return uVar1;
}



// FUNCTION 143ac2e70 FUN_143ac2e70 body=40 status=ok
// SIG undefined FUN_143ac2e70(void)

bool FUN_143ac2e70(longlong param_1)

{
  return *(longlong *)(param_1 + 0x48) == 0;
}



// FUNCTION 143ac2ea0 FUN_143ac2ea0 body=888 status=ok
// SIG undefined FUN_143ac2ea0(void)

longlong * FUN_143ac2ea0(uint param_1,int *param_2,int param_3,int *param_4,undefined4 *param_5)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  longlong *_Dst;
  int local_80;
  undefined1 local_58 [24];
  uint local_40;
  int local_3c;
  undefined2 local_38;
  undefined2 local_36;
  int local_2c;
  int local_28;
  
  cVar3 = FUN_143a8b0e0(*param_5);
  if (cVar3 == '\0') {
    if ((((param_3 < 1) || (((ulonglong)param_2 & 3) != 0)) || ((int)param_1 < 0)) ||
       (1 < (int)param_1)) {
      *param_5 = 1;
      _Dst = (longlong *)0x0;
    }
    else if (param_3 < 0x10) {
      *param_5 = 3;
      _Dst = (longlong *)0x0;
    }
    else if (*param_2 == 0x54726932) {
      if (param_1 == (*(ushort *)(param_2 + 1) & 0xf)) {
        _guard_xfg_dispatch_icall_nop(local_58,0,0x50);
        local_40 = (uint)*(ushort *)((longlong)param_2 + 6);
        uVar2 = (uint)*(ushort *)(param_2 + 2);
        local_3c = uVar2 * 4;
        local_38 = *(undefined2 *)((longlong)param_2 + 10);
        local_36 = (undefined2)param_2[3];
        local_2c = (uint)*(ushort *)((longlong)param_2 + 0xe) << 0xb;
        local_28 = local_3c + -4;
        if (param_1 == 0) {
          local_28 = local_28 + local_40;
        }
        if (param_1 == 0) {
          local_80 = uVar2 * 8;
        }
        else {
          local_80 = uVar2 * 0x10;
        }
        local_80 = local_40 * 2 + 0x10 + local_80;
        if (param_3 < local_80) {
          *param_5 = 3;
          _Dst = (longlong *)0x0;
        }
        else {
          _Dst = (longlong *)FUN_143aa7a40(0x50);
          if (_Dst == (longlong *)0x0) {
            *param_5 = 7;
            _Dst = (longlong *)0x0;
          }
          else {
            _guard_xfg_dispatch_icall_nop(_Dst,local_58,0x50);
            _Dst[7] = (longlong)param_2;
            *(int *)(_Dst + 8) = local_80;
            *(undefined1 *)((longlong)_Dst + 0x44) = 0;
            *_Dst = (longlong)(param_2 + 4);
            lVar1 = (longlong)(param_2 + 4) + (longlong)(int)_Dst[3] * 2;
            if (param_1 == 0) {
              _Dst[1] = lVar1;
              _Dst[2] = 0;
              *(uint *)((longlong)_Dst + 0x24) =
                   (uint)*(ushort *)(*_Dst + (ulonglong)*(ushort *)((longlong)_Dst + 0x22) * 2);
              *(uint *)(_Dst + 5) = (uint)*(ushort *)(_Dst[1] + 0x100);
            }
            else {
              if (param_1 != 1) {
                *param_5 = 3;
                return (longlong *)0x0;
              }
              _Dst[1] = 0;
              _Dst[2] = lVar1;
              *(undefined4 *)((longlong)_Dst + 0x24) =
                   *(undefined4 *)(_Dst[2] + (ulonglong)*(ushort *)((longlong)_Dst + 0x22) * 4);
              *(undefined4 *)(_Dst + 5) = *(undefined4 *)(_Dst[2] + 0x200);
            }
            if (param_4 != (int *)0x0) {
              *param_4 = local_80;
            }
          }
        }
      }
      else {
        *param_5 = 3;
        _Dst = (longlong *)0x0;
      }
    }
    else {
      *param_5 = 3;
      _Dst = (longlong *)0x0;
    }
  }
  else {
    _Dst = (longlong *)0x0;
  }
  return _Dst;
}



// FUNCTION 143ac3220 FUN_143ac3220 body=413 status=ok
// SIG undefined FUN_143ac3220(void)

longlong *
FUN_143ac3220(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             undefined1 param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  size_t sVar3;
  undefined1 local_20 [32];
  
  FUN_143aa03f0(param_1 + 5);
  FUN_143aa03f0(param_1 + 0xd);
  FUN_143aa03f0(param_1 + 0x15);
  if (param_2 == 0) {
    lVar1 = FUN_143a914b0();
    *param_1 = lVar1;
  }
  else {
    *param_1 = param_2;
  }
  if (param_3 != 0) {
    FUN_143acfdd0(local_20,param_3);
    uVar2 = FUN_143acfeb0(param_1 + 0x15,0x5c,param_7);
    FUN_143aa0460(uVar2,local_20,param_7);
  }
  lVar1 = FUN_143ac4640(param_4);
  param_1[2] = lVar1;
  sVar3 = _guard_xfg_dispatch_icall_nop((char *)param_1[2]);
  *(int *)(param_1 + 4) = (int)sVar3;
  if (param_1[2] == param_4) {
    param_1[1] = *param_1;
  }
  else {
    FUN_143acff50(param_1 + 5,param_4,(int)param_1[2] - (int)param_4,param_7);
    lVar1 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(param_1 + 5);
    param_1[1] = lVar1;
  }
  if (param_5 == 0) {
    param_1[3] = (longlong)&DAT_145af3922;
  }
  else {
    param_1[3] = param_5;
  }
  *(undefined1 *)(param_1 + 0x1d) = param_6;
  return param_1;
}



// FUNCTION 143ac33c0 FUN_143ac33c0 body=67 status=ok
// SIG undefined FUN_143ac33c0(void)

void FUN_143ac33c0(longlong param_1)

{
  TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
  ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(param_1 + 0xa8);
  TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
  ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(param_1 + 0x68);
  TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
  ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(param_1 + 0x28);
  return;
}



// FUNCTION 143ac3410 FUN_143ac3410 body=39 status=ok
// SIG undefined FUN_143ac3410(void)

undefined1 FUN_143ac3410(undefined8 param_1,int param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_143a8afe0(param_1,(longlong)param_2);
  return *puVar1;
}



// FUNCTION 143ac3440 FUN_143ac3440 body=61 status=ok
// SIG undefined FUN_143ac3440(void)

void FUN_143ac3440(undefined8 *param_1)

{
  FUN_143ac56d0(param_1[1]);
  FUN_143aa79f0(*param_1);
  FUN_143aa79f0(param_1);
  return;
}



// FUNCTION 143ac3480 FUN_143ac3480 body=73 status=ok
// SIG undefined FUN_143ac3480(void)

void FUN_143ac3480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_143ac4740(param_2);
  uVar1 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
          ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(param_2);
  FUN_143acff50(param_1,uVar1,uVar2,param_3);
  return;
}



// FUNCTION 143ac34d0 FUN_143ac34d0 body=210 status=ok
// SIG undefined FUN_143ac34d0(void)

longlong FUN_143ac34d0(longlong param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined4 *param_6,undefined4 *param_7)

{
  char cVar1;
  longlong local_18;
  
  local_18 = 0;
  cVar1 = FUN_143a8b0e0(*param_7);
  if (cVar1 == '\0') {
    if (((*(char *)(param_1 + 2) == -0x26) && (*(char *)(param_1 + 3) == '\'')) &&
       ((param_2 == (code *)0x0 ||
        (cVar1 = (*param_2)(param_3,param_4,param_5,param_1 + 4), cVar1 != '\0')))) {
      local_18 = FUN_143ac5540(param_7);
      cVar1 = FUN_143a8b0e0(*param_7);
      if (cVar1 == '\0') {
        *(longlong *)(local_18 + 8) = param_1;
      }
      else {
        local_18 = 0;
      }
    }
    else {
      *param_6 = 3;
    }
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143ac35b0 FUN_143ac35b0 body=49 status=ok
// SIG undefined FUN_143ac35b0(void)

longlong FUN_143ac35b0(longlong param_1)

{
  undefined1 *puVar1;
  
  *(undefined4 *)(param_1 + 0x38) = 0;
  puVar1 = (undefined1 *)FUN_143a8afe0(param_1,0);
  *puVar1 = 0;
  return param_1;
}



// FUNCTION 143ac35f0 FUN_143ac35f0 body=404 status=ok
// SIG undefined FUN_143ac35f0(void)

longlong FUN_143ac35f0(char param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 *in_stack_00000058;
  undefined4 *in_stack_00000060;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined8 *local_28;
  longlong local_20;
  longlong local_18;
  
  bVar1 = false;
  if (param_1 == '\0') {
    local_30 = -1;
  }
  else {
    local_30 = 0;
  }
  local_34 = local_30;
  do {
    local_28 = (undefined8 *)FUN_143ac4b50(in_stack_00000030,local_34,in_stack_00000058);
    cVar2 = FUN_143a8b110(*in_stack_00000058);
    if (((cVar2 != '\0') && (local_28 != (undefined8 *)0x0)) &&
       (local_18 = (**(code **)*local_28)(local_28,in_stack_00000028,&local_2c,in_stack_00000058),
       local_18 != 0)) {
      local_20 = FUN_143ac34d0(local_18,in_stack_00000048,in_stack_00000050,in_stack_00000038,
                               in_stack_00000040,in_stack_00000058,in_stack_00000060);
      cVar2 = FUN_143a8b0e0(*in_stack_00000060);
      if (cVar2 != '\0') {
        return 0;
      }
      if (local_20 != 0) {
        *(undefined4 *)(local_20 + 0x30) = local_2c;
        return local_20;
      }
    }
    if (param_1 == '\0') {
      return 0;
    }
    if (local_28 == (undefined8 *)0x0) {
      if ((bVar1) || (cVar2 = FUN_143ac4590(in_stack_00000058), cVar2 == '\0')) {
        return 0;
      }
      bVar1 = true;
    }
    else {
      local_34 = local_34 + 1;
    }
  } while( true );
}



// FUNCTION 143ac3790 FUN_143ac3790 body=468 status=ok
// SIG undefined FUN_143ac3790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143ac3790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      undefined4 *param_9,undefined4 *param_10)

{
  char cVar1;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined4 *local_190;
  undefined4 *local_188;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  undefined8 local_150;
  undefined1 local_148 [8];
  undefined8 local_140;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_108 [240];
  ulonglong local_18;
  
  local_150 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_188 = param_10;
  local_190 = (undefined4 *)((ulonglong)local_190 & 0xffffffffffffff00);
  local_198 = param_3;
  FUN_143ac3220(local_108,param_2,param_1,param_4);
  while( true ) {
    do {
      local_170 = FUN_143ac4750(local_108,param_10);
      if (local_170 == 0) {
        local_158 = 0;
        FUN_143ac33c0(local_108);
        return local_158;
      }
      cVar1 = FUN_143aa7c20(local_148,local_170);
    } while (cVar1 == '\0');
    local_188 = param_10;
    local_190 = param_9;
    local_198 = param_6;
    local_178 = FUN_143ac34d0(local_140,param_7,param_8,param_5);
    if (local_178 != 0) break;
    FUN_143ac56d0(local_148);
    cVar1 = FUN_143a8b0e0(*param_10);
    if (cVar1 != '\0') {
      local_168 = 0;
      FUN_143ac33c0(local_108);
      return local_168;
    }
    *param_9 = 3;
  }
  *(undefined8 *)(local_178 + 0x20) = local_128;
  *(undefined8 *)(local_178 + 0x28) = local_120;
  local_160 = local_178;
  FUN_143ac33c0(local_108);
  return local_160;
}



// FUNCTION 143ac3970 FUN_143ac3970 body=3103 status=ok
// SIG undefined FUN_143ac3970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143ac3970(char *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                      char *param_6)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *local_res8;
  undefined1 auStack_338 [32];
  char *local_318;
  char *local_310;
  char *local_308;
  char *local_300;
  char *local_2f8;
  char *local_2f0;
  undefined4 *local_2e8;
  char *local_2e0;
  char local_2d8;
  longlong local_2d0;
  undefined4 local_2c8 [2];
  char *local_2c0;
  longlong local_2b8;
  char *local_2b0;
  int local_2a8;
  char *local_2a0;
  undefined1 *local_298;
  char *local_290;
  char *local_288;
  longlong local_280;
  longlong local_278;
  char *local_270;
  char *local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  undefined8 local_248;
  undefined1 local_240 [16];
  undefined1 local_230 [16];
  undefined1 local_220 [16];
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined1 local_170 [24];
  undefined1 local_158 [64];
  undefined1 local_118 [64];
  undefined1 local_d8 [64];
  undefined1 local_98 [64];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_248 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  local_2d0 = 0;
  local_2c8[0] = 0;
  local_2d8 = '\0';
  if ((param_1 != (char *)0x0) &&
     (iVar2 = _guard_xfg_dispatch_icall_nop(param_1,"ICUDATA"), iVar2 != 0)) {
    sVar3 = _guard_xfg_dispatch_icall_nop("icudt53l-");
    iVar2 = strncmp(param_1,"icudt53l-",sVar3);
    if (iVar2 != 0) {
      sVar3 = _guard_xfg_dispatch_icall_nop("ICUDATA-");
      iVar2 = strncmp(param_1,"ICUDATA-",sVar3);
      if (iVar2 != 0) goto LAB_143ac3a37;
    }
  }
  local_2d8 = '\x01';
LAB_143ac3a37:
  FUN_143aa03f0(local_58);
  local_res8 = param_1;
  if ((param_1 != (char *)0x0) && (pcVar4 = strchr(param_1,0x2f), pcVar4 != (char *)0x0)) {
    FUN_143acfdd0(local_230,param_1);
    FUN_143aa0460(local_58,local_230,param_6);
    while( true ) {
      uVar5 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
              ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
      local_298 = (undefined1 *)FUN_143a8d150(uVar5,0x2f);
      if (local_298 == (undefined1 *)0x0) break;
      *local_298 = 0x5c;
    }
    local_res8 = (char *)TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                         ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
  }
  FUN_143aa03f0(local_118);
  FUN_143aa03f0(local_d8);
  FUN_143aa03f0(local_158);
  FUN_143aa03f0(local_98);
  if (local_res8 == (char *)0x0) {
    FUN_143acfdd0(local_170,"icudt53l");
    FUN_143aa0460(local_158,local_170,param_6);
  }
  else {
    local_2b0 = strrchr(local_res8,0x5c);
    local_290 = strchr(local_res8,0x5c);
    cVar1 = FUN_143a91b00(local_res8);
    if ((cVar1 == '\0') && (local_2b0 == local_290)) {
      local_2a0 = strchr(local_res8,0x2d);
      if (local_2a0 == (char *)0x0) {
        if (local_2d8 == '\0') {
          FUN_143acfdd0(local_190,local_res8);
          FUN_143aa0460(local_158,local_190,param_6);
        }
        else {
          FUN_143acfdd0(local_1d0,"icudt53l");
          FUN_143aa0460(local_158,local_1d0,param_6);
        }
      }
      else {
        FUN_143acfdd0(local_1f0,local_2a0 + 1);
        FUN_143aa0460(local_98,local_1f0,param_6);
        if (local_2d8 == '\0') {
          FUN_143acff50(local_158,local_res8,(longlong)local_2a0 - (longlong)local_res8 & 0xffffffff
                        ,param_6);
          if (local_290 == (char *)0x0) {
            local_res8 = (char *)TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                                 ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
          }
        }
        else {
          FUN_143acfdd0(local_1a0,"icudt53l");
          FUN_143aa0460(local_158,local_1a0,param_6);
        }
      }
    }
    else if (local_2b0 == (char *)0x0) {
      FUN_143acfdd0(local_180,local_res8);
      FUN_143aa0460(local_158,local_180,param_6);
    }
    else {
      FUN_143acfdd0(local_210,local_2b0 + 1);
      FUN_143aa0460(local_158,local_210,param_6);
    }
  }
  FUN_143ac3480(local_118,local_158,param_6);
  FUN_143ac3480(local_d8,local_158,param_6);
  local_2a8 = FUN_143ac4740(local_118);
  cVar1 = FUN_143ac4710(local_98);
  if (cVar1 == '\0') {
    uVar5 = FUN_143acfeb0(local_118,0x2f,param_6);
    FUN_143ac3480(uVar5,local_98,param_6);
    uVar5 = FUN_143acfeb0(local_d8,0x5c,param_6);
    FUN_143ac3480(uVar5,local_98,param_6);
  }
  FUN_143acfdd0(local_1b0,param_3);
  uVar5 = FUN_143acfeb0(local_118,0x2f,param_6);
  FUN_143aa0460(uVar5,local_1b0,param_6);
  FUN_143acfdd0(local_240,param_3);
  uVar5 = FUN_143acfeb0(local_d8,0x5c,param_6);
  FUN_143aa0460(uVar5,local_240,param_6);
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    FUN_143acfdd0(local_200,param_2);
    FUN_143acfdd0(local_220,&DAT_145af796c);
    uVar5 = FUN_143aa0460(local_118,local_220,param_6);
    FUN_143aa0460(uVar5,local_200,param_6);
    FUN_143acfdd0(local_1c0,param_2);
    FUN_143acfdd0(local_1e0,&DAT_145af796c);
    uVar5 = FUN_143aa0460(local_d8,local_1e0,param_6);
    FUN_143aa0460(uVar5,local_1c0,param_6);
  }
  local_2b8 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
              ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_d8);
  local_2b8 = local_2b8 + local_2a8;
  if (local_res8 == (char *)0x0) {
    local_res8 = "icudt53l";
  }
  local_2c0 = (char *)FUN_143a914b0();
  if (DAT_146bc5a18 == 2) {
    local_268 = (char *)TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                        ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_118);
    uVar5 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
    local_2e0 = param_6;
    local_2e8 = local_2c8;
    local_2f0 = param_5;
    local_310 = local_res8;
    local_318 = local_268;
    local_308 = param_2;
    local_300 = param_3;
    local_2f8 = param_4;
    local_2d0 = FUN_143ac35f0(local_2d8,uVar5,local_2c0,local_2b8);
    if ((local_2d0 != 0) || (cVar1 = FUN_143a8b0e0(*(undefined4 *)param_6), cVar1 != '\0')) {
      local_278 = local_2d0;
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_98);
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_d8);
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_118);
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
      return local_278;
    }
  }
  if (((DAT_146bc5a18 == 2) || (DAT_146bc5a18 == 0)) &&
     (((local_2c0 != (char *)0x0 && (*local_2c0 != '\0')) || (local_2d8 == '\0')))) {
    uVar5 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
    local_2f0 = param_6;
    local_2f8 = (char *)local_2c8;
    local_300 = param_5;
    local_318 = param_2;
    local_310 = param_3;
    local_308 = param_4;
    local_2d0 = FUN_143ac3790(uVar5,local_2c0,local_2b8,local_res8);
    if ((local_2d0 != 0) || (cVar1 = FUN_143a8b0e0(*(undefined4 *)param_6), cVar1 != '\0')) {
      local_258 = local_2d0;
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_98);
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_d8);
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_118);
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
      return local_258;
    }
  }
  if ((DAT_146bc5a18 == 1) || (DAT_146bc5a18 == 0)) {
    local_288 = (char *)TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                        ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_118);
    uVar5 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
    local_2e0 = param_6;
    local_2e8 = local_2c8;
    local_2f0 = param_5;
    local_310 = local_res8;
    local_318 = local_288;
    local_308 = param_2;
    local_300 = param_3;
    local_2f8 = param_4;
    local_2d0 = FUN_143ac35f0(local_2d8,uVar5,local_2c0,local_2b8);
    if ((local_2d0 != 0) || (cVar1 = FUN_143a8b0e0(*(undefined4 *)param_6), cVar1 != '\0')) {
      local_280 = local_2d0;
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_98);
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_d8);
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_118);
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
      return local_280;
    }
  }
  if (DAT_146bc5a18 == 3) {
    local_270 = (char *)TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                        ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_118);
    uVar5 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
    local_2e0 = param_6;
    local_2e8 = local_2c8;
    local_2f0 = param_5;
    local_310 = local_res8;
    local_318 = local_270;
    local_308 = param_2;
    local_300 = param_3;
    local_2f8 = param_4;
    local_2d0 = FUN_143ac35f0(local_2d8,uVar5,&DAT_145af3922,local_2b8);
    if ((local_2d0 != 0) || (cVar1 = FUN_143a8b0e0(*(undefined4 *)param_6), cVar1 != '\0')) {
      local_260 = local_2d0;
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_98);
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_d8);
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_118);
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
      return local_260;
    }
  }
  cVar1 = FUN_143a8b110(*(undefined4 *)param_6);
  if (cVar1 != '\0') {
    cVar1 = FUN_143a8b110(local_2c8[0]);
    if (cVar1 == '\0') {
      *(undefined4 *)param_6 = local_2c8[0];
    }
    else {
      param_6[0] = '\x04';
      param_6[1] = '\0';
      param_6[2] = '\0';
      param_6[3] = '\0';
    }
  }
  local_250 = local_2d0;
  TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
  ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_98);
  TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
  ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_158);
  TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
  ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_d8);
  TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
  ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_118);
  TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
  ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
  return local_250;
}



// FUNCTION 143ac4590 FUN_143ac4590 body=163 status=ok
// SIG undefined FUN_143ac4590(void)

undefined1
FUN_143ac4590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  
  if (DAT_146bc5a00 == '\0') {
    lVar2 = FUN_143ac4b50("icudt53l",0xffffffff,param_1,param_4,0);
    FUN_143ac55a0(local_48);
    if (lVar2 != 0) {
      FUN_143ac5680(local_48,lVar2);
      local_20 = 0;
      local_28 = 0;
      FUN_143ac4dc0(local_48,0,param_1);
    }
    DAT_146bc5a00 = '\x01';
  }
  uVar1 = FUN_143ac4680("icudt53l");
  return uVar1;
}



// FUNCTION 143ac4640 FUN_143ac4640 body=58 status=ok
// SIG undefined FUN_143ac4640(void)

char * FUN_143ac4640(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = strrchr(param_1,0x5c);
  if (pcVar1 != (char *)0x0) {
    param_1 = pcVar1 + 1;
  }
  return param_1;
}



// FUNCTION 143ac4680 FUN_143ac4680 body=137 status=ok
// SIG undefined FUN_143ac4680(void)

undefined1 FUN_143ac4680(undefined8 param_1)

{
  longlong lVar1;
  int local_14;
  
  lVar1 = FUN_143ac51f0(param_1);
  if (lVar1 != 0) {
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      if ((*(longlong *)(&DAT_146bc59b0 + (longlong)local_14 * 8) != 0) &&
         (*(longlong *)(*(longlong *)(&DAT_146bc59b0 + (longlong)local_14 * 8) + 8) ==
          *(longlong *)(lVar1 + 8))) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143ac4710 FUN_143ac4710 body=39 status=ok
// SIG undefined FUN_143ac4710(void)

bool FUN_143ac4710(longlong param_1)

{
  return *(int *)(param_1 + 0x38) == 0;
}



// FUNCTION 143ac4740 FUN_143ac4740 body=14 status=ok
// SIG undefined FUN_143ac4740(void)

undefined4 FUN_143ac4740(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



// FUNCTION 143ac4750 FUN_143ac4750 body=1020 status=ok
// SIG undefined FUN_143ac4750(void)

undefined8 FUN_143ac4750(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  size_t sVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  int local_48;
  undefined1 local_18 [24];
  
  cVar2 = FUN_143a8b0e0(*param_2);
  if (cVar2 == '\0') {
    do {
      if (param_1[1] == 0) {
        return 0;
      }
      pcVar7 = (char *)param_1[1];
      lVar4 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
              ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(param_1 + 5);
      if (param_1[1] == lVar4) {
        param_1[1] = *param_1;
        sVar5 = _guard_xfg_dispatch_icall_nop(pcVar7);
        local_48 = (int)sVar5;
      }
      else {
        pcVar8 = strchr(pcVar7,0x3b);
        param_1[1] = (longlong)pcVar8;
        if (param_1[1] == 0) {
          sVar5 = _guard_xfg_dispatch_icall_nop(pcVar7);
          local_48 = (int)sVar5;
        }
        else {
          local_48 = (int)param_1[1] - (int)pcVar7;
          param_1[1] = param_1[1] + 1;
        }
      }
      if (local_48 != 0) {
        uVar6 = FUN_143ac35b0(param_1 + 0xd);
        FUN_143acff50(uVar6,pcVar7,local_48,param_2);
        uVar6 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(param_1 + 0xd);
        pcVar7 = (char *)FUN_143ac4640(uVar6);
        if (((char)param_1[0x1d] == '\x01') && (3 < local_48)) {
          lVar4 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                  ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(param_1 + 0xd);
          iVar3 = strncmp((char *)(lVar4 + (local_48 + -4)),(char *)param_1[3],4);
          if (iVar3 == 0) {
            uVar1 = *(uint *)(param_1 + 4);
            uVar6 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                    ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(param_1 + 0xd);
            pcVar8 = (char *)FUN_143ac4640(uVar6);
            iVar3 = strncmp(pcVar8,(char *)param_1[2],(ulonglong)uVar1);
            if ((iVar3 == 0) &&
               (sVar5 = _guard_xfg_dispatch_icall_nop(pcVar7), sVar5 == (int)param_1[4] + 4))
            goto LAB_143ac4b23;
          }
        }
        cVar2 = FUN_143ac3410(param_1 + 0xd,local_48 + -1);
        if (cVar2 != '\\') {
          if (3 < local_48) {
            lVar4 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                    ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(param_1 + 0xd);
            iVar3 = strncmp((char *)(lVar4 + (local_48 + -4)),".dat",4);
            if (iVar3 == 0) goto LAB_143ac4b36;
          }
          cVar2 = FUN_143ac4710(param_1 + 0x15);
          if ((cVar2 == '\0') && (iVar3 = FUN_143ac4740(param_1 + 0x15), iVar3 < local_48)) {
            pcVar7 = (char *)TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                             ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(param_1 + 0x15);
            lVar4 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                    ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(param_1 + 0xd);
            iVar3 = FUN_143ac4740(param_1 + 0x15);
            iVar3 = _guard_xfg_dispatch_icall_nop
                              ((char *)((lVar4 + local_48) - (longlong)iVar3),pcVar7);
            if (iVar3 == 0) {
              iVar3 = FUN_143ac4740(param_1 + 0x15);
              FUN_143ad0400(param_1 + 0xd,local_48 - iVar3);
            }
          }
          FUN_143acfeb0(param_1 + 0xd,0x5c,param_2);
        }
        iVar3 = FUN_143ac4740(param_1 + 0x15);
        lVar4 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(param_1 + 0x15);
        FUN_143acff50(param_1 + 0xd,lVar4 + 1,iVar3 + -1,param_2);
        if (*(char *)param_1[3] != '\0') {
          FUN_143acfdd0(local_18,param_1[3]);
          FUN_143aa0460(param_1 + 0xd,local_18,param_2);
        }
LAB_143ac4b23:
        uVar6 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(param_1 + 0xd);
        return uVar6;
      }
LAB_143ac4b36:
    } while (*param_1 != 0);
  }
  return 0;
}



// FUNCTION 143ac4b50 FUN_143ac4b50 body=622 status=ok
// SIG undefined FUN_143ac4b50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143ac4b50(undefined8 param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_1b8 [32];
  undefined *local_198;
  undefined1 local_190;
  undefined4 *local_188;
  int local_178;
  char *local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  undefined8 local_148;
  undefined1 local_140 [56];
  undefined1 local_108 [240];
  ulonglong local_18;
  
  local_148 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    FUN_143ac55a0(local_140);
    if (param_2 < 0) {
      local_170 = (char *)FUN_143ac4640(param_1);
      if (*local_170 == '\0') {
        *param_3 = 4;
        local_158 = 0;
      }
      else {
        local_158 = FUN_143ac51f0(local_170);
        if (local_158 == 0) {
          local_168 = local_158;
          uVar2 = FUN_143a914b0();
          local_190 = 1;
          local_198 = &DAT_145cf4f08;
          local_188 = param_3;
          FUN_143ac3220(local_108,uVar2,local_170,param_1);
          while ((cVar1 = FGISInventoryModule::IsGISInventoryGlobalSettingsAvailable(local_140),
                 cVar1 == '\0' && (local_160 = FUN_143ac4750(local_108,param_3), local_160 != 0))) {
            FUN_143aa7c20(local_140,local_160);
          }
          cVar1 = FGISInventoryModule::IsGISInventoryGlobalSettingsAvailable(local_140);
          if (cVar1 == '\0') {
            *param_3 = 4;
            local_158 = 0;
            FUN_143ac33c0(local_108);
          }
          else {
            FUN_143b03490(local_140,param_3);
            local_150 = FUN_143ac4f40(local_170,local_140,param_3);
            FUN_143ac33c0(local_108);
            local_158 = local_150;
          }
        }
      }
    }
    else if (param_2 < 10) {
      if (*(longlong *)(&DAT_146bc59b0 + (longlong)param_2 * 8) == 0) {
        for (local_178 = 0; local_178 < param_2; local_178 = local_178 + 1) {
          if (*(undefined **)(*(longlong *)(&DAT_146bc59b0 + (longlong)local_178 * 8) + 8) ==
              &DAT_145e10cb8) {
            return 0;
          }
        }
        FUN_143ac4ee0(&DAT_145e10cb8,0,param_3);
      }
      local_158 = *(longlong *)(&DAT_146bc59b0 + (longlong)param_2 * 8);
    }
    else {
      local_158 = 0;
    }
  }
  else {
    local_158 = 0;
  }
  return local_158;
}



// FUNCTION 143ac4dc0 FUN_143ac4dc0 body=275 status=ok
// SIG undefined FUN_143ac4dc0(void)

ulonglong FUN_143ac4dc0(longlong param_1,char param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  byte local_18;
  int local_14;
  
  uVar2 = FUN_143ac5540(param_3);
  local_18 = 0;
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    FUN_143ac5680(uVar2,param_1);
    FUN_143ab2410(0);
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      if (*(longlong *)(&DAT_146bc59b0 + (longlong)local_14 * 8) == 0) {
        *(undefined8 *)(&DAT_146bc59b0 + (longlong)local_14 * 8) = uVar2;
        FUN_143aa77b0(0xe,FUN_143ac5150);
        local_18 = 1;
        break;
      }
      if (*(longlong *)(*(longlong *)(&DAT_146bc59b0 + (longlong)local_14 * 8) + 8) ==
          *(longlong *)(param_1 + 8)) break;
    }
    FUN_143ab2470(0);
    if ((local_14 == 10) && (param_2 != '\0')) {
      *param_3 = 0xffffff81;
    }
    if (local_18 == 0) {
      FUN_143aa79f0(uVar2);
    }
    uVar3 = (ulonglong)local_18;
  }
  else {
    uVar3 = (ulonglong)(uint3)(cVar1 >> 7) << 8;
  }
  return uVar3;
}



// FUNCTION 143ac4ee0 FUN_143ac4ee0 body=86 status=ok
// SIG undefined FUN_143ac4ee0(void)

void FUN_143ac4ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_48 [72];
  
  FUN_143ac55a0(local_48);
  FUN_143ac5650(local_48,param_1);
  FUN_143b03490(local_48,param_3);
  FUN_143ac4dc0(local_48,0,param_3);
  return;
}



// FUNCTION 143ac4f40 FUN_143ac4f40 body=516 status=ok
// SIG undefined FUN_143ac4f40(void)

longlong FUN_143ac4f40(undefined8 param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  longlong lVar2;
  size_t sVar3;
  int local_38;
  int local_34;
  longlong *local_30;
  longlong local_28;
  char *local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_28 = 0;
  local_38 = 0;
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    local_30 = (longlong *)FUN_143aa7a40(0x10);
    if (local_30 == (longlong *)0x0) {
      *param_3 = 7;
      local_10 = 0;
    }
    else {
      lVar2 = FUN_143ac5540(param_3);
      local_30[1] = lVar2;
      cVar1 = FUN_143a8b0e0(*param_3);
      if (cVar1 == '\0') {
        FUN_143ac5680(local_30[1],param_2);
        local_20 = (char *)FUN_143ac4640(param_1);
        sVar3 = _guard_xfg_dispatch_icall_nop(local_20);
        local_34 = (int)sVar3;
        lVar2 = FUN_143aa7a40((longlong)(local_34 + 1));
        *local_30 = lVar2;
        if (*local_30 == 0) {
          *param_3 = 7;
          FUN_143aa79f0(local_30[1]);
          FUN_143aa79f0(local_30);
          local_10 = 0;
        }
        else {
          _guard_xfg_dispatch_icall_nop((char *)*local_30,local_20);
          local_18 = `FGenericPlatformMisc::GetPlatformChunkInstall'::`2'::
                     _dynamic_atexit_destructor_for__Singleton__();
          FUN_143ab2410(0);
          local_28 = FUN_143ab32d0(local_18,param_1);
          if (local_28 == 0) {
            FUN_143ab36d0(local_18,*local_30,local_30,&local_38);
          }
          else {
            local_38 = -0x7f;
          }
          FUN_143ab2470(0);
          if ((local_38 == -0x7f) || (cVar1 = FUN_143a8b0e0(local_38), cVar1 != '\0')) {
            *param_3 = local_38;
            FUN_143aa79f0(*local_30);
            FUN_143aa79f0(local_30[1]);
            FUN_143aa79f0(local_30);
            if (local_28 == 0) {
              local_10 = 0;
            }
            else {
              local_10 = *(longlong *)(local_28 + 8);
            }
          }
          else {
            local_10 = local_30[1];
          }
        }
      }
      else {
        FUN_143aa79f0(local_30);
        local_10 = 0;
      }
    }
  }
  else {
    local_10 = 0;
  }
  return local_10;
}



// FUNCTION 143ac5150 FUN_143ac5150 body=152 status=ok
// SIG undefined FUN_143ac5150(void)

undefined8 FUN_143ac5150(void)

{
  int local_18;
  
  if (DAT_146bc5a08 != 0) {
    FUN_143ab2e80(DAT_146bc5a08);
    DAT_146bc5a08 = 0;
  }
  FUN_143a9a9f0(&DAT_146bc5a10);
  local_18 = 0;
  while ((local_18 < 10 && (*(longlong *)(&DAT_146bc59b0 + (longlong)local_18 * 8) != 0))) {
    FUN_143ac56d0(*(undefined8 *)(&DAT_146bc59b0 + (longlong)local_18 * 8));
    *(undefined8 *)(&DAT_146bc59b0 + (longlong)local_18 * 8) = 0;
    local_18 = local_18 + 1;
  }
  DAT_146bc5a00 = 0;
  return 1;
}



// FUNCTION 143ac51f0 FUN_143ac51f0 body=109 status=ok
// SIG undefined FUN_143ac51f0(void)

undefined8 FUN_143ac51f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_20;
  
  local_20 = 0;
  uVar1 = FUN_143ac4640(param_1);
  uVar2 = `FGenericPlatformMisc::GetPlatformChunkInstall'::`2'::
          _dynamic_atexit_destructor_for__Singleton__();
  FUN_143ab2410(0);
  lVar3 = FUN_143ab32d0(uVar2,uVar1);
  FUN_143ab2470(0);
  if (lVar3 != 0) {
    local_20 = *(undefined8 *)(lVar3 + 8);
  }
  return local_20;
}



// FUNCTION 143ac5260 `dynamic_atexit_destructor_for_'Singleton'' body=35 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'Singleton''(void)

undefined8
`FGenericPlatformMisc::GetPlatformChunkInstall'::`2'::_dynamic_atexit_destructor_for__Singleton__
          (void)

{
  FUN_143a9aa60(&DAT_146bc5a10,FUN_143ac5290);
  return DAT_146bc5a08;
}



// FUNCTION 143ac5290 FUN_143ac5290 body=124 status=ok
// SIG undefined FUN_143ac5290(void)

void FUN_143ac5290(void)

{
  char cVar1;
  undefined4 local_18 [6];
  
  local_18[0] = 0;
  DAT_146bc5a08 = (ios_base *)FUN_143ab3680(FUN_143ab3350,FUN_143ab2f70,0,local_18);
  cVar1 = FUN_143a8b0e0(local_18[0]);
  if (cVar1 != '\0') {
    DAT_146bc5a08 = (ios_base *)0x0;
  }
  if (DAT_146bc5a08 != (ios_base *)0x0) {
    std::ios_base::width(DAT_146bc5a08,0x143ac3440);
    FUN_143aa77b0(0xe,FUN_143ac5150);
  }
  return;
}


