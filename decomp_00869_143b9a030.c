// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143b9a030 FUN_143b9a030 body=41 status=ok
// SIG undefined FUN_143b9a030(void)

undefined8 FUN_143b9a030(void)

{
  FUN_143a9aa60(&DAT_146bc8368,FUN_143b9aab0);
  return DAT_146832b10;
}



// FUNCTION 143b9a060 FUN_143b9a060 body=39 status=ok
// SIG undefined FUN_143b9a060(void)

undefined4 FUN_143b9a060(void)

{
  FUN_143a9aa60(&DAT_146bc8368,FUN_143b9aab0);
  return DAT_146832b18;
}



// FUNCTION 143b9a090 FUN_143b9a090 body=19 status=ok
// SIG undefined FUN_143b9a090(void)

void FUN_143b9a090(void)

{
  FUN_143b9a0b0();
  return;
}



// FUNCTION 143b9a0b0 FUN_143b9a0b0 body=8 status=ok
// SIG undefined FUN_143b9a0b0(void)

undefined * FUN_143b9a0b0(void)

{
  return &DAT_146bc8370;
}



// FUNCTION 143b9a0c0 FUN_143b9a0c0 body=136 status=ok
// SIG undefined FUN_143b9a0c0(void)

char * FUN_143b9a0c0(longlong param_1)

{
  int iVar1;
  char *local_10;
  
  iVar1 = *(int *)(param_1 + 0x268);
  if (iVar1 == 0) {
    local_10 = "islamic";
  }
  else if (iVar1 == 1) {
    local_10 = "islamic-civil";
  }
  else if (iVar1 == 2) {
    local_10 = "islamic-umalqura";
  }
  else if (iVar1 == 3) {
    local_10 = "islamic-tbla";
  }
  else {
    local_10 = "islamic";
  }
  return local_10;
}



// FUNCTION 143b9a150 FUN_143b9a150 body=83 status=ok
// SIG undefined FUN_143b9a150(void)

undefined8 FUN_143b9a150(int param_1,char param_2)

{
  undefined8 uVar1;
  
  if ((*(uint *)(&DAT_145d15810 + (longlong)param_1 * 4) & 1 << (0xbU - param_2 & 0x1f)) == 0) {
    uVar1 = 0x1d;
  }
  else {
    uVar1 = 0x1e;
  }
  return uVar1;
}



// FUNCTION 143b9a1b0 FUN_143b9a1b0 body=1316 status=ok
// SIG undefined FUN_143b9a1b0(void)

void FUN_143b9a1b0(longlong *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
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
  
  local_54 = param_2 + -0x1dbb18;
  if (((int)param_1[0x4d] == 1) || ((int)param_1[0x4d] == 3)) {
    if ((int)param_1[0x4d] == 3) {
      local_54 = param_2 + -0x1dbb17;
    }
    dVar4 = (double)FUN_143b512a0((double)(local_54 * 0x1e + 0x2996),0x40c4c38000000000);
    local_50 = (int)dVar4;
    iVar2 = FUN_143b9afc0(param_1,local_50);
    dVar4 = (double)FUN_143a916b0((double)((local_54 + -0x1d) - iVar2) / 29.5);
    local_38 = (int)dVar4;
    if (10 < local_38) {
      local_38 = 0xb;
    }
    local_58 = local_38;
    FUN_143b9abd0(param_1,local_50,local_38);
  }
  else if ((int)param_1[0x4d] == 0) {
    dVar4 = (double)FUN_143a917b0((double)local_54 / 29.530588853);
    local_4c = (int)dVar4;
    dVar4 = (double)FUN_143a917b0((double)local_4c * 29.530588853);
    uVar5 = FUN_143b53730(param_1);
    dVar6 = (double)FUN_143b9ace0(uVar5,param_3);
    cVar1 = FUN_143a8b0e0(*param_3);
    if (cVar1 != '\0') {
      *param_3 = 7;
      return;
    }
    if ((25.0 <= (double)local_54 - dVar4) && (0.0 < dVar6)) {
      local_4c = local_4c + 1;
    }
    while (iVar2 = FUN_143b9ae10(param_1,local_4c), (double)local_54 < (double)iVar2) {
      local_4c = local_4c + -1;
    }
    local_50 = local_4c / 0xc + 1;
    local_58 = local_4c % 0xc;
  }
  else if ((int)param_1[0x4d] == 2) {
    iVar2 = FUN_143b9afc0(param_1,0x526);
    if (local_54 < iVar2) {
      dVar4 = (double)FUN_143b512a0((double)(local_54 * 0x1e + 0x2996),0x40c4c38000000000);
      local_50 = (int)dVar4;
      iVar2 = FUN_143b9afc0(param_1,local_50);
      dVar4 = (double)FUN_143a916b0((double)((param_2 + -0x1dbb35) - iVar2) / 29.5);
      local_28 = (int)dVar4;
      if (10 < local_28) {
        local_28 = 0xb;
      }
      local_58 = local_28;
      FUN_143b9abd0(param_1,local_50,local_28);
    }
    else {
      local_48 = 0x525;
      local_40 = 0;
      local_44 = 1;
      do {
        if (local_44 < 1) goto LAB_143b9a5e7;
        local_48 = local_48 + 1;
        iVar2 = FUN_143b9afc0(param_1,local_48);
        local_44 = (local_54 - iVar2) + 1;
        iVar2 = (**(code **)(*param_1 + 0x110))(param_1,local_48);
        if (local_44 == iVar2) {
          local_40 = 0xb;
          goto LAB_143b9a5e7;
        }
        iVar2 = (**(code **)(*param_1 + 0x110))(param_1,local_48);
      } while (iVar2 <= local_44);
      local_3c = (**(code **)(*param_1 + 0x108))(param_1,local_48,0);
      local_40 = 0;
      while (local_3c < local_44) {
        local_44 = local_44 - local_3c;
        local_40 = local_40 + 1;
        local_3c = (**(code **)(*param_1 + 0x108))(param_1,local_48,local_40);
      }
LAB_143b9a5e7:
      local_50 = local_48;
      local_58 = local_40;
    }
  }
  else {
    local_58 = 0;
    local_50 = 0;
  }
  iVar2 = FUN_143b9abd0(param_1,local_50,local_58);
  iVar3 = FUN_143b9abd0(param_1,local_50,0);
  FUN_143b53750(param_1,0,0);
  FUN_143b53750(param_1,1,local_50);
  FUN_143b53750(param_1,0x13,local_50);
  FUN_143b53750(param_1,2,local_58);
  FUN_143b53750(param_1,5,(local_54 - iVar2) + 1);
  FUN_143b53750(param_1,6,(local_54 - iVar3) + 1);
  return;
}



// FUNCTION 143b9a6e0 FUN_143b9a6e0 body=52 status=ok
// SIG undefined FUN_143b9a6e0(void)

int FUN_143b9a6e0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_143b9abd0(param_1,param_2,param_3);
  return iVar1 + 0x1dbb17;
}



// FUNCTION 143b9a720 FUN_143b9a720 body=96 status=ok
// SIG undefined FUN_143b9a720(void)

undefined4 FUN_143b9a720(undefined8 param_1)

{
  int iVar1;
  undefined4 local_18;
  
  iVar1 = FUN_143b53cf0(param_1,0x13,1);
  if (iVar1 == 0x13) {
    local_18 = FUN_143b536e0(param_1,0x13,1);
  }
  else {
    local_18 = FUN_143b536e0(param_1,1,1);
  }
  return local_18;
}



// FUNCTION 143b9a780 FUN_143b9a780 body=45 status=ok
// SIG undefined FUN_143b9a780(void)

undefined4 FUN_143b9a780(undefined8 param_1,int param_2,int param_3)

{
  return *(undefined4 *)(&DAT_145d15aa0 + (longlong)param_3 * 4 + (longlong)param_2 * 0x10);
}



// FUNCTION 143b9a7b0 FUN_143b9a7b0 body=258 status=ok
// SIG undefined FUN_143b9a7b0(void)

int FUN_143b9a7b0(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (((*(int *)(param_1 + 0x268) == 1) || (*(int *)(param_1 + 0x268) == 3)) ||
     ((*(int *)(param_1 + 0x268) == 2 && ((param_2 < 0x526 || (0x5c8 < param_2)))))) {
    uVar4 = (int)(param_3 + 1U) >> 0x1f;
    iVar2 = ((param_3 + 1U & 1 ^ uVar4) - uVar4) + 0x1d;
    if ((param_3 == 0xb) && (cVar1 = FUN_143b99f90(param_2), cVar1 != '\0')) {
      iVar2 = iVar2 + 1;
    }
  }
  else if (*(int *)(param_1 + 0x268) == 0) {
    param_3 = (param_2 + -1) * 0xc + param_3;
    iVar2 = FUN_143b9ae10(param_1,param_3 + 1);
    iVar3 = FUN_143b9ae10(param_1,param_3);
    iVar2 = iVar2 - iVar3;
  }
  else {
    iVar2 = FUN_143b9a150(param_2 + -0x526,param_3,param_3,param_4,0);
  }
  return iVar2;
}



// FUNCTION 143b9a8c0 FUN_143b9a8c0 body=283 status=ok
// SIG undefined FUN_143b9a8c0(void)

int FUN_143b9a8c0(longlong *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int local_28;
  int local_24;
  uint local_20;
  
  if ((((int)param_1[0x4d] == 1) || ((int)param_1[0x4d] == 3)) ||
     (((int)param_1[0x4d] == 2 && ((param_2 < 0x526 || (0x5c8 < param_2)))))) {
    cVar1 = FUN_143b99f90(param_2);
    local_20 = (uint)(cVar1 != '\0');
    local_24 = local_20 + 0x162;
  }
  else if ((int)param_1[0x4d] == 0) {
    iVar2 = (param_2 + -1) * 0xc;
    local_24 = FUN_143b9ae10(param_1,iVar2 + 0xc);
    iVar2 = FUN_143b9ae10(param_1,iVar2);
    local_24 = local_24 - iVar2;
  }
  else {
    local_24 = 0;
    for (local_28 = 0; local_28 < 0xc; local_28 = local_28 + 1) {
      iVar2 = (**(code **)(*param_1 + 0x108))(param_1,param_2,local_28);
      local_24 = local_24 + iVar2;
    }
  }
  return local_24;
}



// FUNCTION 143b9a9f0 FUN_143b9a9f0 body=189 status=ok
// SIG undefined FUN_143b9a9f0(void)

uint FUN_143b9a9f0(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  uint local_18;
  uint local_14;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  local_18 = (uint)cVar1;
  if (local_18 == 0) {
    lVar3 = FUN_143b528b0(param_1);
    if (lVar3 == 0) {
      plVar4 = (longlong *)FUN_143b528b0(param_1);
      cVar1 = (**(code **)(*plVar4 + 0x40))(plVar4);
      local_18 = 0;
      if (cVar1 == '\0') goto LAB_143b9aa46;
    }
    FUN_143b4eb20(param_1,param_2);
    cVar1 = FUN_143a8b110(*param_2);
    if (cVar1 == '\0') {
      local_14 = 0;
      local_18 = local_14;
    }
    else {
      iVar2 = FUN_143b536c0(param_1,0x10);
      local_18 = (uint)(iVar2 != 0);
    }
  }
  else {
LAB_143b9aa46:
    local_18 = local_18 & 0xffffff00;
  }
  return local_18;
}



// FUNCTION 143b9aab0 FUN_143b9aab0 body=280 status=ok
// SIG undefined FUN_143b9aab0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b9aab0(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_458 [32];
  undefined8 local_438;
  undefined4 local_428 [2];
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined1 local_408 [624];
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_410 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_458;
  local_428[0] = 0;
  local_438 = 0;
  local_420 = FUN_143a8a690(local_198,"@calendar=islamic-civil",0,0);
  local_418 = local_420;
  FUN_143b99e60(local_408,local_420,local_428,1);
  FUN_143a8acf0(local_198);
  cVar1 = FUN_143a8b110(local_428[0]);
  if (cVar1 != '\0') {
    uVar2 = FUN_143b52670();
    FUN_143b55550(local_408,uVar2,local_428);
    FUN_143b4e270(local_408,1,0xffffffb0,local_428);
    DAT_146832b10 = FUN_143b52810(local_408,local_428);
    DAT_146832b18 = FUN_143b512d0(local_408,1,local_428);
  }
  UCameraModifier_Climbing::~UCameraModifier_Climbing(local_408);
  return;
}



// FUNCTION 143b9abd0 FUN_143b9abd0 body=265 status=ok
// SIG undefined FUN_143b9abd0(void)

ulonglong FUN_143b9abd0(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  double dVar3;
  int local_18;
  uint local_14;
  
  if (((int)param_1[0x4d] == 1) || ((int)param_1[0x4d] == 3)) {
    dVar3 = (double)FUN_143a916b0((double)param_3 * 29.5);
    iVar1 = FUN_143b91df0(param_2 * 0xb + 3,0x1e);
    uVar2 = (ulonglong)(uint)((int)dVar3 + (param_2 + -1) * 0x162 + iVar1);
  }
  else if ((int)param_1[0x4d] == 0) {
    uVar2 = FUN_143b9ae10(param_1,(param_2 + -1) * 0xc + param_3);
  }
  else {
    local_14 = FUN_143b9afc0(param_1,param_2);
    for (local_18 = 0; local_18 < param_3; local_18 = local_18 + 1) {
      iVar1 = (**(code **)(*param_1 + 0x108))(param_1,param_2,local_18);
      local_14 = local_14 + iVar1;
    }
    uVar2 = (ulonglong)local_14;
  }
  return uVar2;
}



// FUNCTION 143b9ace0 FUN_143b9ace0 body=298 status=ok
// SIG undefined FUN_143b9ace0(void)

double FUN_143b9ace0(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  double dVar2;
  longlong local_28;
  
  FUN_143ab2410(&DAT_146bc8328);
  if (DAT_146bc8360 == 0) {
    lVar1 = FUN_143a8d310(0x88);
    if (lVar1 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_143bf71b0(lVar1);
    }
    DAT_146bc8360 = local_28;
    if (local_28 == 0) {
      *param_2 = 7;
      return 0.0;
    }
    FUN_143b68380(4,FUN_143b9b0f0);
  }
  FUN_143bf8270(DAT_146bc8360,param_1);
  dVar2 = (double)FUN_143bf7a70(DAT_146bc8360);
  FUN_143ab2470(&DAT_146bc8328);
  dVar2 = (dVar2 * 180.0) / 3.141592653589793;
  if (180.0 < dVar2) {
    dVar2 = dVar2 - 360.0;
  }
  return dVar2;
}



// FUNCTION 143b9ae10 FUN_143b9ae10 body=412 status=ok
// SIG undefined FUN_143b9ae10(void)

int FUN_143b9ae10(undefined8 param_1,int param_2)

{
  char cVar1;
  double dVar2;
  undefined4 local_28;
  int local_24;
  double local_20;
  double local_18;
  
  local_28 = 0;
  local_24 = FUN_143bf7970(&DAT_146bc8358,param_2,&local_28);
  if (local_24 == 0) {
    dVar2 = (double)FUN_143a917b0((double)param_2 * 29.530588853);
    local_20 = dVar2 * 86400000.0 + -42521587200000.0;
    local_18 = (double)FUN_143b9ace0(local_20,&local_28);
    cVar1 = FUN_143a8b0e0(local_28);
    if (cVar1 == '\0') {
      if (local_18 < 0.0) {
        do {
          local_20 = local_20 + 86400000.0;
          local_18 = (double)FUN_143b9ace0(local_20,&local_28);
          cVar1 = FUN_143a8b0e0(local_28);
          if (cVar1 != '\0') goto LAB_143b9af97;
        } while (local_18 < 0.0);
      }
      else {
        do {
          local_20 = local_20 - 86400000.0;
          local_18 = (double)FUN_143b9ace0(local_20,&local_28);
          cVar1 = FUN_143a8b0e0(local_28);
          if (cVar1 != '\0') goto LAB_143b9af97;
        } while (0.0 <= local_18);
      }
      dVar2 = (double)FUN_143b512a0(local_20 - -42521587200000.0,0x4194997000000000);
      local_24 = (int)dVar2 + 1;
      FUN_143bf8180(&DAT_146bc8358,param_2,local_24,&local_28);
    }
  }
LAB_143b9af97:
  cVar1 = FUN_143a8b0e0(local_28);
  if (cVar1 != '\0') {
    local_24 = 0;
  }
  return local_24;
}



// FUNCTION 143b9afc0 FUN_143b9afc0 body=283 status=ok
// SIG undefined FUN_143b9afc0(void)

ulonglong FUN_143b9afc0(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  uint local_18;
  int local_14;
  
  if ((((int)param_1[0x4d] == 1) || ((int)param_1[0x4d] == 3)) ||
     (((int)param_1[0x4d] == 2 && (param_2 < 0x526)))) {
    iVar1 = FUN_143b91df0(param_2 * 0xb + 3,0x1e);
    uVar3 = (ulonglong)(uint)((param_2 + -1) * 0x162 + iVar1);
  }
  else if ((int)param_1[0x4d] == 0) {
    uVar3 = FUN_143b9ae10(param_1,(param_2 + -1) * 0xc);
  }
  else {
    iVar1 = FUN_143b9afc0(param_1,0x525);
    iVar2 = (**(code **)(*param_1 + 0x110))(param_1,0x525);
    local_18 = iVar1 + iVar2;
    for (local_14 = 0x526; local_14 < param_2; local_14 = local_14 + 1) {
      iVar1 = (**(code **)(*param_1 + 0x110))(param_1,local_14);
      local_18 = local_18 + iVar1;
    }
    uVar3 = (ulonglong)local_18;
  }
  return uVar3;
}



// FUNCTION 143b9b0f0 FUN_143b9b0f0 body=180 status=ok
// SIG undefined FUN_143b9b0f0(void)

undefined8 FUN_143b9b0f0(void)

{
  if (DAT_146bc8358 != (undefined8 *)0x0) {
    if (DAT_146bc8358 != (undefined8 *)0x0) {
      (**(code **)*DAT_146bc8358)(DAT_146bc8358,1);
    }
    DAT_146bc8358 = (undefined8 *)0x0;
  }
  if (DAT_146bc8360 != 0) {
    if (DAT_146bc8360 != 0) {
      FUN_143b99f10(DAT_146bc8360,1);
    }
    DAT_146bc8360 = 0;
  }
  return 1;
}



// FUNCTION 143b9b1b0 FUN_143b9b1b0 body=54 status=ok
// SIG undefined FUN_143b9b1b0(void)

undefined8 * FUN_143b9b1b0(undefined8 *param_1,undefined8 param_2)

{
  FUN_143b4d910(param_1,param_2);
  *param_1 = icu_53::HebrewCalendar::vftable;
  return param_1;
}



// FUNCTION 143b9b1f0 FUN_143b9b1f0 body=106 status=ok
// SIG undefined FUN_143b9b1f0(void)

undefined8 *
FUN_143b9b1f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_143b4ac10(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  FUN_143b4daa0(param_1,uVar1,param_2,param_3);
  *param_1 = icu_53::HebrewCalendar::vftable;
  uVar2 = FUN_143b52670();
  FUN_143b55580(param_1,uVar2,param_3);
  return param_1;
}



// FUNCTION 143b9b260 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::HebrewCalendar::vftable;
  FUN_143b4dd20(param_1);
  return;
}



// FUNCTION 143b9b290 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b9b2d0 FUN_143b9b2d0 body=58 status=ok
// SIG undefined FUN_143b9b2d0(void)

void FUN_143b9b2d0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143b9b310 FUN_143b9b310 body=470 status=ok
// SIG undefined FUN_143b9b310(void)

void FUN_143b9b310(longlong *param_1,int param_2,int param_3,undefined4 *param_4)

{
  bool bVar1;
  char cVar2;
  int local_14;
  int local_10;
  
  cVar2 = FUN_143a8b0e0(*param_4);
  if (cVar2 == '\0') {
    if (param_2 == 2) {
      local_14 = FUN_143b512d0(param_1,2,param_4);
      local_10 = FUN_143b512d0(param_1,1,param_4);
      if (param_3 < 1) {
        bVar1 = 5 < local_14;
        local_14 = local_14 + param_3;
        while( true ) {
          if (((bVar1) && (local_14 < 6)) && (cVar2 = FUN_143b9bc30(local_10), cVar2 == '\0')) {
            local_14 = local_14 + -1;
          }
          if (-1 < local_14) break;
          local_14 = local_14 + 0xd;
          local_10 = local_10 + -1;
          bVar1 = true;
        }
      }
      else {
        bVar1 = local_14 < 5;
        local_14 = local_14 + param_3;
        while( true ) {
          if (((bVar1) && (4 < local_14)) && (cVar2 = FUN_143b9bc30(local_10), cVar2 == '\0')) {
            local_14 = local_14 + 1;
          }
          if (local_14 < 0xd) break;
          local_14 = local_14 + -0xd;
          local_10 = local_10 + 1;
          bVar1 = true;
        }
      }
      FUN_143b55270(param_1,2,local_14);
      FUN_143b55270(param_1,1,local_10);
      (**(code **)(*param_1 + 0x158))(param_1,5,param_4);
    }
    else {
      FUN_143b4e270(param_1,param_2,param_3,param_4);
    }
  }
  return;
}



// FUNCTION 143b9b4f0 CreateInternalContext body=92 status=ok
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
  
  lVar1 = FUN_143a8d310(0x268);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b9b1b0(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143b9b550 FUN_143b9b550 body=41 status=ok
// SIG undefined FUN_143b9b550(void)

undefined8 FUN_143b9b550(void)

{
  FUN_143a9aa60(&DAT_146bc8378,FUN_143b9bb10);
  return DAT_146832b20;
}



// FUNCTION 143b9b580 FUN_143b9b580 body=39 status=ok
// SIG undefined FUN_143b9b580(void)

undefined4 FUN_143b9b580(void)

{
  FUN_143a9aa60(&DAT_146bc8378,FUN_143b9bb10);
  return DAT_146832b28;
}



// FUNCTION 143b9b5b0 FUN_143b9b5b0 body=19 status=ok
// SIG undefined FUN_143b9b5b0(void)

void FUN_143b9b5b0(void)

{
  FUN_143b9b5d0();
  return;
}



// FUNCTION 143b9b5d0 FUN_143b9b5d0 body=8 status=ok
// SIG undefined FUN_143b9b5d0(void)

undefined * FUN_143b9b5d0(void)

{
  return &DAT_146bc8388;
}



// FUNCTION 143b9b5e0 FUN_143b9b5e0 body=13 status=ok
// SIG undefined FUN_143b9b5e0(void)

char * FUN_143b9b5e0(void)

{
  return "hebrew";
}



// FUNCTION 143b9b5f0 FUN_143b9b5f0 body=618 status=ok
// SIG undefined FUN_143b9b5f0(void)

void FUN_143b9b5f0(undefined8 param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int local_38;
  int local_30;
  int local_2c;
  short local_28;
  short local_26;
  
  local_30 = (int)(((((double)(param_2 + -0x54f5d) * 25920.0) / 765433.0) * 19.0 + 234.0) / 235.0 +
                  1.0);
  local_2c = FUN_143b9be20(local_30,param_3);
  while (local_2c = (param_2 + -0x54f5d) - local_2c, local_2c < 1) {
    local_30 = local_30 + -1;
    local_2c = FUN_143b9be20(local_30,param_3);
  }
  iVar2 = FUN_143b9c020(param_1,local_30);
  cVar1 = FUN_143b9bc30(local_30);
  for (local_38 = 0; local_38 < 0xe; local_38 = local_38 + 1) {
    if (cVar1 == '\0') {
      local_28 = *(short *)(&DAT_145d16010 + (longlong)iVar2 * 2 + (longlong)local_38 * 6);
    }
    else {
      local_28 = *(short *)(&DAT_145d16070 + (longlong)iVar2 * 2 + (longlong)local_38 * 6);
    }
    if (local_2c <= local_28) break;
  }
  if ((local_38 < 0xe) && (0 < local_38)) {
    local_38 = local_38 + -1;
    if (cVar1 == '\0') {
      local_26 = *(short *)(&DAT_145d16010 + (longlong)iVar2 * 2 + (longlong)local_38 * 6);
    }
    else {
      local_26 = *(short *)(&DAT_145d16070 + (longlong)iVar2 * 2 + (longlong)local_38 * 6);
    }
    FUN_143b53750(param_1,0,0);
    FUN_143b53750(param_1,1,local_30);
    FUN_143b53750(param_1,0x13,local_30);
    FUN_143b53750(param_1,2,local_38);
    FUN_143b53750(param_1,5,local_2c - local_26);
    FUN_143b53750(param_1,6,local_2c);
  }
  else {
    *param_3 = 1;
  }
  return;
}



// FUNCTION 143b9b860 FUN_143b9b860 body=331 status=ok
// SIG undefined FUN_143b9b860(void)

int FUN_143b9b860(undefined8 param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int local_res10;
  int local_res18;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined *local_18;
  undefined *local_10;
  
  local_24 = 0;
  local_res10 = param_2;
  for (local_res18 = param_3; local_res18 < 0; local_res18 = local_res18 + iVar2) {
    local_res10 = local_res10 + -1;
    iVar2 = FUN_143b9bc90(local_res10);
  }
  for (; 0xc < local_res18; local_res18 = local_res18 - iVar2) {
    local_20 = local_res10;
    iVar2 = FUN_143b9bc90(local_res10);
    local_res10 = local_res10 + 1;
  }
  local_28 = FUN_143b9be20(local_res10,&local_24);
  cVar1 = FUN_143a8b0e0(local_24);
  if (cVar1 == '\0') {
    if (local_res18 != 0) {
      cVar1 = FUN_143b9bc30(local_res10);
      if (cVar1 == '\0') {
        local_10 = &DAT_145d16010 + (longlong)local_res18 * 6;
        iVar2 = FUN_143b9c020(param_1,local_res10);
        local_28 = local_28 + *(short *)(local_10 + (longlong)iVar2 * 2);
      }
      else {
        local_18 = &DAT_145d16070 + (longlong)local_res18 * 6;
        iVar2 = FUN_143b9c020(param_1,local_res10);
        local_28 = local_28 + *(short *)(local_18 + (longlong)iVar2 * 2);
      }
    }
    local_28 = local_28 + 0x54f5d;
  }
  else {
    local_28 = 0;
  }
  return local_28;
}



// FUNCTION 143b9b9b0 FUN_143b9b9b0 body=45 status=ok
// SIG undefined FUN_143b9b9b0(void)

undefined4 FUN_143b9b9b0(undefined8 param_1,int param_2,int param_3)

{
  return *(undefined4 *)(&DAT_145d15e70 + (longlong)param_3 * 4 + (longlong)param_2 * 0x10);
}



// FUNCTION 143b9b9e0 FUN_143b9b9e0 body=224 status=ok
// SIG undefined FUN_143b9b9e0(void)

int FUN_143b9b9e0(undefined8 param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int local_res10;
  int local_res18;
  
  local_res10 = param_2;
  for (local_res18 = param_3; local_res18 < 0; local_res18 = local_res18 + iVar2) {
    local_res10 = local_res10 + -1;
    iVar2 = FUN_143b9bc90(local_res10);
  }
  for (; 0xc < local_res18; local_res18 = local_res18 - iVar2) {
    iVar2 = FUN_143b9bc90(local_res10);
    local_res10 = local_res10 + 1;
  }
  if ((local_res18 < 1) || (2 < local_res18)) {
    cVar1 = (&DAT_145d15fe0)[(longlong)local_res18 * 3];
  }
  else {
    iVar2 = FUN_143b9c020(param_1,local_res10);
    cVar1 = (&DAT_145d15fe0)[(longlong)iVar2 + (longlong)local_res18 * 3];
  }
  return (int)cVar1;
}



// FUNCTION 143b9bac0 FUN_143b9bac0 body=70 status=ok
// SIG undefined FUN_143b9bac0(void)

int FUN_143b9bac0(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 local_18;
  int local_14;
  
  local_18 = 0;
  local_14 = FUN_143b9be20(param_2 + 1,&local_18);
  iVar1 = FUN_143b9be20(param_2,&local_18);
  return local_14 - iVar1;
}



// FUNCTION 143b9bb10 FUN_143b9bb10 body=274 status=ok
// SIG undefined FUN_143b9bb10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b9bb10(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_458 [32];
  undefined8 local_438;
  undefined4 local_428 [2];
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined1 local_408 [624];
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_410 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_458;
  local_428[0] = 0;
  local_438 = 0;
  local_420 = FUN_143a8a690(local_198,"@calendar=hebrew",0,0);
  local_418 = local_420;
  FUN_143b9b1f0(local_408,local_420,local_428);
  FUN_143a8acf0(local_198);
  cVar1 = FUN_143a8b110(local_428[0]);
  if (cVar1 != '\0') {
    uVar2 = FUN_143b52670();
    FUN_143b55550(local_408,uVar2,local_428);
    FUN_143b9b310(local_408,1,0xffffffb0,local_428);
    DAT_146832b20 = FUN_143b52810(local_408,local_428);
    DAT_146832b28 = FUN_143b512d0(local_408,1,local_428);
  }
  UCameraModifier_Climbing::~UCameraModifier_Climbing(local_408);
  return;
}



// FUNCTION 143b9bc30 FUN_143b9bc30 body=84 status=ok
// SIG undefined FUN_143b9bc30(void)

bool FUN_143b9bc30(int param_1)

{
  int iVar1;
  int local_14;
  
  iVar1 = (param_1 * 0xc + 0x11) % 0x13;
  if (iVar1 < 0) {
    local_14 = -7;
  }
  else {
    local_14 = 0xc;
  }
  return local_14 <= iVar1;
}



// FUNCTION 143b9bc90 FUN_143b9bc90 body=51 status=ok
// SIG undefined FUN_143b9bc90(void)

undefined4 FUN_143b9bc90(undefined4 param_1)

{
  char cVar1;
  undefined4 local_18;
  
  cVar1 = FUN_143b9bc30(param_1);
  if (cVar1 == '\0') {
    local_18 = 0xc;
  }
  else {
    local_18 = 0xd;
  }
  return local_18;
}



// FUNCTION 143b9bcd0 FUN_143b9bcd0 body=332 status=ok
// SIG undefined FUN_143b9bcd0(void)

void FUN_143b9bcd0(longlong *param_1,int param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_24;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    if (param_2 == 2) {
      iVar2 = FUN_143b512d0(param_1,2,param_4);
      uVar3 = FUN_143b512d0(param_1,1,param_4);
      cVar1 = FUN_143b9bc30(uVar3);
      iVar4 = FUN_143b9bc90(uVar3);
      local_24 = iVar2 + param_3 % iVar4;
      if (cVar1 == '\0') {
        if (((param_3 < 1) || (4 < iVar2)) || (local_24 < 5)) {
          if (((param_3 < 0) && (5 < iVar2)) && (local_24 < 6)) {
            local_24 = local_24 + -1;
          }
        }
        else {
          local_24 = local_24 + 1;
        }
      }
      FUN_143b55270(param_1,2,(longlong)(local_24 + 0xd) % 0xd & 0xffffffff);
      (**(code **)(*param_1 + 0x158))(param_1,5,param_4);
    }
    else {
      FUN_143b54400(param_1,param_2,param_3,param_4);
    }
  }
  return;
}



// FUNCTION 143b9be20 FUN_143b9be20 body=370 status=ok
// SIG undefined FUN_143b9be20(void)

int FUN_143b9be20(int param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int local_28;
  int local_24;
  
  FUN_143b68380(6,FUN_143b9c0c0);
  iVar2 = FUN_143bf7970(&DAT_146bc8380,param_1,param_2);
  if (iVar2 == 0) {
    iVar2 = (param_1 * 0xeb + -0xea) / 0x13;
    lVar3 = (longlong)iVar2 * 0x35b9 + 0x2f34;
    local_28 = iVar2 * 0x1d + (int)(lVar3 / 0x6540);
    lVar3 = lVar3 % 0x6540;
    local_24 = local_28 % 7;
    if (((local_24 == 2) || (local_24 == 4)) || (local_24 == 6)) {
      local_28 = local_28 + 1;
      local_24 = local_28 % 7;
    }
    if (((local_24 == 1) && (0x4014 < lVar3)) && (cVar1 = FUN_143b9bc30(param_1), cVar1 == '\0')) {
      local_28 = local_28 + 2;
    }
    else if (((local_24 == 0) && (0x5ae5 < lVar3)) &&
            (cVar1 = FUN_143b9bc30(param_1 + -1), cVar1 != '\0')) {
      local_28 = local_28 + 1;
    }
    FUN_143bf8180(&DAT_146bc8380,param_1,local_28,param_2);
    return local_28;
  }
  return iVar2;
}



// FUNCTION 143b9bfa0 FUN_143b9bfa0 body=115 status=ok
// SIG undefined FUN_143b9bfa0(void)

void FUN_143b9bfa0(longlong *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 2) {
    uVar2 = (**(code **)(*param_1 + 0x118))(param_1);
    cVar1 = FUN_143b9bc30(uVar2);
    if ((cVar1 == '\0') && (iVar3 = FUN_143b536c0(param_1,2), iVar3 == 5)) {
      *param_3 = 1;
      return;
    }
  }
  FUN_143b56070(param_1,param_2,param_3);
  return;
}



// FUNCTION 143b9c020 FUN_143b9c020 body=156 status=ok
// SIG undefined FUN_143b9c020(void)

undefined4 FUN_143b9c020(longlong *param_1,undefined4 param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = (**(code **)(*param_1 + 0x110))(param_1,param_2);
  if (0x17c < local_14) {
    local_14 = local_14 + -0x1e;
  }
  if (local_14 == 0x161) {
    local_18 = 0;
  }
  else if (local_14 == 0x162) {
    local_18 = 1;
  }
  else if (local_14 == 0x163) {
    local_18 = 2;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143b9c0c0 FUN_143b9c0c0 body=88 status=ok
// SIG undefined FUN_143b9c0c0(void)

undefined8 FUN_143b9c0c0(void)

{
  if (DAT_146bc8380 != (undefined8 *)0x0) {
    (**(code **)*DAT_146bc8380)(DAT_146bc8380,1);
  }
  DAT_146bc8380 = (undefined8 *)0x0;
  return 1;
}



// FUNCTION 143b9c120 FUN_143b9c120 body=54 status=ok
// SIG undefined FUN_143b9c120(void)

undefined8 * FUN_143b9c120(undefined8 *param_1,undefined8 param_2)

{
  FUN_143b4d910(param_1,param_2);
  *param_1 = icu_53::PersianCalendar::vftable;
  return param_1;
}



// FUNCTION 143b9c160 FUN_143b9c160 body=106 status=ok
// SIG undefined FUN_143b9c160(void)

undefined8 *
FUN_143b9c160(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_143b4ac10(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  FUN_143b4daa0(param_1,uVar1,param_2,param_3);
  *param_1 = icu_53::PersianCalendar::vftable;
  uVar2 = FUN_143b52670();
  FUN_143b55580(param_1,uVar2,param_3);
  return param_1;
}



// FUNCTION 143b9c1d0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::PersianCalendar::vftable;
  FUN_143b4dd20(param_1);
  return;
}



// FUNCTION 143b9c200 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b9c240 CreateInternalContext body=92 status=ok
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
  
  lVar1 = FUN_143a8d310(0x268);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b9c120(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143b9c2a0 FUN_143b9c2a0 body=41 status=ok
// SIG undefined FUN_143b9c2a0(void)

undefined8 FUN_143b9c2a0(void)

{
  FUN_143a9aa60(&DAT_146bc8390,FUN_143b9c640);
  return DAT_146832b30;
}



// FUNCTION 143b9c2d0 FUN_143b9c2d0 body=39 status=ok
// SIG undefined FUN_143b9c2d0(void)

undefined4 FUN_143b9c2d0(void)

{
  FUN_143a9aa60(&DAT_146bc8390,FUN_143b9c640);
  return DAT_146832b38;
}



// FUNCTION 143b9c300 FUN_143b9c300 body=19 status=ok
// SIG undefined FUN_143b9c300(void)

void FUN_143b9c300(void)

{
  FUN_143b9c320();
  return;
}



// FUNCTION 143b9c320 FUN_143b9c320 body=8 status=ok
// SIG undefined FUN_143b9c320(void)

undefined * FUN_143b9c320(void)

{
  return &DAT_146bc8398;
}



// FUNCTION 143b9c330 FUN_143b9c330 body=13 status=ok
// SIG undefined FUN_143b9c330(void)

char * FUN_143b9c330(void)

{
  return "persian";
}



// FUNCTION 143b9c340 FUN_143b9c340 body=329 status=ok
// SIG undefined FUN_143b9c340(void)

void FUN_143b9c340(undefined8 param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_20;
  
  iVar2 = FUN_143b91df0((param_2 + -0x1dbaa0) * 0x21 + 3,0x2f15);
  iVar3 = iVar2 + 1;
  iVar4 = FUN_143b91df0(iVar3 * 8 + 0x15,0x21);
  iVar2 = (param_2 + -0x1dbaa0) - (iVar2 * 0x16d + iVar4);
  if (iVar2 < 0xd8) {
    local_20 = iVar2 / 0x1f;
  }
  else {
    local_20 = (iVar2 + -6) / 0x1e;
  }
  sVar1 = *(short *)(&DAT_145d16310 + (longlong)local_20 * 2);
  FUN_143b53750(param_1,0,0);
  FUN_143b53750(param_1,1,iVar3);
  FUN_143b53750(param_1,0x13,iVar3);
  FUN_143b53750(param_1,2,local_20);
  FUN_143b53750(param_1,5,(iVar2 - sVar1) + 1);
  FUN_143b53750(param_1,6,iVar2 + 1);
  return;
}



// FUNCTION 143b9c490 FUN_143b9c490 body=166 status=ok
// SIG undefined FUN_143b9c490(void)

int FUN_143b9c490(undefined8 param_1,int param_2,int param_3,undefined1 param_4)

{
  int local_res10;
  int local_res18 [2];
  undefined1 local_res20;
  int local_18;
  
  local_res18[0] = param_3;
  local_res20 = param_4;
  if ((param_3 < 0) || (local_res10 = param_2, 0xb < param_3)) {
    local_res10 = FUN_143b91e30((double)param_3,0xc,local_res18);
    local_res10 = param_2 + local_res10;
  }
  local_18 = FUN_143b91df0(local_res10 * 8 + 0x15,0x21);
  local_18 = (local_res10 + -1) * 0x16d + 0x1dba9f + local_18;
  if (local_res18[0] != 0) {
    local_18 = local_18 + *(short *)(&DAT_145d16310 + (longlong)local_res18[0] * 2);
  }
  return local_18;
}



// FUNCTION 143b9c540 FUN_143b9c540 body=45 status=ok
// SIG undefined FUN_143b9c540(void)

undefined4 FUN_143b9c540(undefined8 param_1,int param_2,int param_3)

{
  return *(undefined4 *)(&DAT_145d16350 + (longlong)param_3 * 4 + (longlong)param_2 * 0x10);
}



// FUNCTION 143b9c570 FUN_143b9c570 body=133 status=ok
// SIG undefined FUN_143b9c570(void)

int FUN_143b9c570(undefined8 param_1,int param_2,int param_3)

{
  char cVar1;
  int local_res10;
  int local_res18 [4];
  char local_18;
  
  local_res18[0] = param_3;
  if ((param_3 < 0) || (local_res10 = param_2, 0xb < param_3)) {
    local_res10 = FUN_143b91e30((double)param_3,0xc,local_res18);
    local_res10 = param_2 + local_res10;
  }
  cVar1 = FUN_143b9c760(local_res10);
  if (cVar1 == '\0') {
    local_18 = (&DAT_145d16328)[local_res18[0]];
  }
  else {
    local_18 = (&DAT_145d16338)[local_res18[0]];
  }
  return (int)local_18;
}



// FUNCTION 143b9c600 FUN_143b9c600 body=56 status=ok
// SIG undefined FUN_143b9c600(void)

undefined4 FUN_143b9c600(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 local_18;
  
  cVar1 = FUN_143b9c760(param_2);
  if (cVar1 == '\0') {
    local_18 = 0x16d;
  }
  else {
    local_18 = 0x16e;
  }
  return local_18;
}



// FUNCTION 143b9c640 FUN_143b9c640 body=274 status=ok
// SIG undefined FUN_143b9c640(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b9c640(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_458 [32];
  undefined8 local_438;
  undefined4 local_428 [2];
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined1 local_408 [624];
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_410 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_458;
  local_428[0] = 0;
  local_438 = 0;
  local_420 = FUN_143a8a690(local_198,"@calendar=persian",0,0);
  local_418 = local_420;
  FUN_143b9c160(local_408,local_420,local_428);
  FUN_143a8acf0(local_198);
  cVar1 = FUN_143a8b110(local_428[0]);
  if (cVar1 != '\0') {
    uVar2 = FUN_143b52670();
    FUN_143b55550(local_408,uVar2,local_428);
    FUN_143b4e270(local_408,1,0xffffffb0,local_428);
    DAT_146832b30 = FUN_143b52810(local_408,local_428);
    DAT_146832b38 = FUN_143b512d0(local_408,1,local_428);
  }
  UCameraModifier_Climbing::~UCameraModifier_Climbing(local_408);
  return;
}



// FUNCTION 143b9c760 FUN_143b9c760 body=64 status=ok
// SIG undefined FUN_143b9c760(void)

bool FUN_143b9c760(int param_1)

{
  int local_14 [5];
  
  FUN_143b91e30((double)(param_1 * 0x19 + 0xb),0x21,local_14);
  return local_14[0] < 8;
}



// FUNCTION 143b9c7a0 FUN_143b9c7a0 body=54 status=ok
// SIG undefined FUN_143b9c7a0(void)

undefined8 * FUN_143b9c7a0(undefined8 *param_1,undefined8 param_2)

{
  FUN_143b4d910(param_1,param_2);
  *param_1 = icu_53::IndianCalendar::vftable;
  return param_1;
}



// FUNCTION 143b9c7e0 FUN_143b9c7e0 body=106 status=ok
// SIG undefined FUN_143b9c7e0(void)

undefined8 *
FUN_143b9c7e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_143b4ac10(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  FUN_143b4daa0(param_1,uVar1,param_2,param_3);
  *param_1 = icu_53::IndianCalendar::vftable;
  uVar2 = FUN_143b52670();
  FUN_143b55580(param_1,uVar2,param_3);
  return param_1;
}



// FUNCTION 143b9c850 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::IndianCalendar::vftable;
  FUN_143b4dd20(param_1);
  return;
}



// FUNCTION 143b9c880 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b9c8c0 FUN_143b9c8c0 body=320 status=ok
// SIG undefined FUN_143b9c8c0(void)

double FUN_143b9c8c0(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  param_1 = param_1 + 0x4e;
  cVar1 = FUN_143b9d260(param_1);
  if (cVar1 == '\0') {
    local_20 = 0x1e;
    local_10 = (double)FUN_143b9cae0(param_1,3,0x16);
  }
  else {
    local_20 = 0x1f;
    local_10 = (double)FUN_143b9cae0(param_1,3,0x15);
  }
  if (param_2 == 1) {
    local_18 = local_10 + (double)(param_3 + -1);
  }
  else {
    local_28 = param_2 + -2;
    if (5 < local_28) {
      local_28 = 5;
    }
    local_18 = local_10 + (double)local_20 + (double)(local_28 * 0x1f);
    if (7 < param_2) {
      local_18 = local_18 + (double)((param_2 + -7) * 0x1e);
    }
    local_18 = local_18 + (double)(param_3 + -1);
  }
  return local_18;
}



// FUNCTION 143b9ca00 CreateInternalContext body=92 status=ok
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
  
  lVar1 = FUN_143a8d310(0x268);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b9c7a0(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143b9ca60 FUN_143b9ca60 body=24 status=ok
// SIG undefined FUN_143b9ca60(void)

void FUN_143b9ca60(undefined8 param_1)

{
  FUN_143b9d180(param_1);
  return;
}



// FUNCTION 143b9ca80 FUN_143b9ca80 body=24 status=ok
// SIG undefined FUN_143b9ca80(void)

void FUN_143b9ca80(undefined8 param_1)

{
  FUN_143b9d1f0(param_1);
  return;
}



// FUNCTION 143b9caa0 FUN_143b9caa0 body=19 status=ok
// SIG undefined FUN_143b9caa0(void)

void FUN_143b9caa0(void)

{
  FUN_143b9cac0();
  return;
}



// FUNCTION 143b9cac0 FUN_143b9cac0 body=8 status=ok
// SIG undefined FUN_143b9cac0(void)

undefined * FUN_143b9cac0(void)

{
  return &DAT_146bc8399;
}



// FUNCTION 143b9cad0 FUN_143b9cad0 body=13 status=ok
// SIG undefined FUN_143b9cad0(void)

char * FUN_143b9cad0(void)

{
  return "indian";
}



// FUNCTION 143b9cae0 FUN_143b9cae0 body=327 status=ok
// SIG undefined FUN_143b9cae0(void)

double FUN_143b9cae0(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 local_38;
  undefined4 local_34;
  
  if (param_2 < 3) {
    local_34 = 0;
  }
  else {
    cVar1 = FUN_143b9d260(param_1);
    if (cVar1 == '\0') {
      local_38 = -2;
    }
    else {
      local_38 = -1;
    }
    local_34 = local_38;
  }
  dVar3 = (double)FUN_143a917b0((double)((int)(param_1 + -1 + (param_1 + -1 >> 0x1f & 3U)) >> 2));
  dVar4 = (double)FUN_143a917b0((double)((param_1 + -1) / 100),
                                (longlong)(param_1 + -1) % 100 & 0xffffffff);
  dVar5 = (double)FUN_143a917b0((double)((param_1 + -1) / 400),
                                (longlong)(param_1 + -1) % 400 & 0xffffffff);
  iVar2 = param_2 * 0x16f + -0x16a;
  dVar6 = (double)FUN_143a917b0((double)(iVar2 / 0xc + local_34 + param_3),
                                (longlong)iVar2 % 0xc & 0xffffffff);
  return (double)((param_1 + -1) * 0x16d) + 1721424.5 + dVar3 + -dVar4 + dVar5 + dVar6;
}



// FUNCTION 143b9cc30 FUN_143b9cc30 body=597 status=ok
// SIG undefined FUN_143b9cc30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b9cc30(undefined8 param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  double dVar3;
  undefined1 auStack_78 [32];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  double local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  piVar2 = (int *)FUN_143b9d2c0((double)param_2,local_28);
  local_50 = *piVar2;
  local_48 = local_50 + -0x4e;
  local_30 = (double)FUN_143b9cae0(local_50,1,1);
  local_58 = (int)((double)param_2 - local_30);
  if (local_58 < 0x50) {
    local_48 = local_48 + -1;
    cVar1 = FUN_143b9d260(local_50 + -1);
    if (cVar1 == '\0') {
      local_38 = 0x1e;
    }
    else {
      local_38 = 0x1f;
    }
    local_4c = local_38;
    local_58 = local_58 + 0xff + local_38;
  }
  else {
    cVar1 = FUN_143b9d260(local_50);
    if (cVar1 == '\0') {
      local_3c = 0x1e;
    }
    else {
      local_3c = 0x1f;
    }
    local_4c = local_3c;
    local_58 = local_58 + -0x50;
  }
  if (local_58 < local_4c) {
    local_44 = 0;
    local_40 = local_58 + 1;
  }
  else {
    local_54 = local_58 - local_4c;
    if (local_54 < 0x9b) {
      dVar3 = (double)FUN_143a917b0((double)(local_54 / 0x1f),(longlong)local_54 % 0x1f & 0xffffffff
                                   );
      local_44 = (int)dVar3 + 1;
      local_40 = local_54 % 0x1f + 1;
    }
    else {
      local_54 = local_54 + -0x9b;
      dVar3 = (double)FUN_143a917b0((double)(local_54 / 0x1e),(longlong)local_54 % 0x1e & 0xffffffff
                                   );
      local_44 = (int)dVar3 + 6;
      local_40 = local_54 % 0x1e + 1;
    }
  }
  FUN_143b53750(param_1,0,0);
  FUN_143b53750(param_1,0x13,local_48);
  FUN_143b53750(param_1,1,local_48);
  FUN_143b53750(param_1,2,local_44);
  FUN_143b53750(param_1,5,local_40);
  FUN_143b53750(param_1,6,local_58 + 1);
  return;
}



// FUNCTION 143b9ce90 FUN_143b9ce90 body=133 status=ok
// SIG undefined FUN_143b9ce90(void)

int FUN_143b9ce90(undefined8 param_1,int param_2,int param_3,undefined1 param_4)

{
  double dVar1;
  int local_res10;
  int local_res18 [2];
  undefined1 local_res20;
  int local_18;
  
  local_res18[0] = param_3;
  local_res20 = param_4;
  if ((param_3 < 0) || (local_res10 = param_2, 0xb < param_3)) {
    local_res10 = FUN_143b91e30((double)param_3,0xc,local_res18);
    local_res10 = param_2 + local_res10;
  }
  if (local_res18[0] == 0xc) {
    local_18 = 1;
  }
  else {
    local_18 = local_res18[0] + 1;
  }
  dVar1 = (double)FUN_143b9c8c0(local_res10,local_18,1);
  return (int)dVar1;
}



// FUNCTION 143b9cf20 FUN_143b9cf20 body=45 status=ok
// SIG undefined FUN_143b9cf20(void)

undefined4 FUN_143b9cf20(undefined8 param_1,int param_2,int param_3)

{
  return *(undefined4 *)(&DAT_145d166f0 + (longlong)param_3 * 4 + (longlong)param_2 * 0x10);
}



// FUNCTION 143b9cf50 FUN_143b9cf50 body=131 status=ok
// SIG undefined FUN_143b9cf50(void)

undefined8 FUN_143b9cf50(undefined8 param_1,int param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  int local_res10;
  int local_res18 [4];
  
  local_res18[0] = param_3;
  if ((param_3 < 0) || (local_res10 = param_2, 0xb < param_3)) {
    local_res10 = FUN_143b91e30((double)param_3,0xc,local_res18);
    local_res10 = param_2 + local_res10;
  }
  cVar1 = FUN_143b9d260(local_res10 + 0x4e);
  if ((cVar1 == '\0') || (local_res18[0] != 0)) {
    if ((local_res18[0] < 1) || (5 < local_res18[0])) {
      uVar2 = 0x1e;
    }
    else {
      uVar2 = 0x1f;
    }
  }
  else {
    uVar2 = 0x1f;
  }
  return uVar2;
}



// FUNCTION 143b9cfe0 FUN_143b9cfe0 body=61 status=ok
// SIG undefined FUN_143b9cfe0(void)

undefined4 FUN_143b9cfe0(undefined8 param_1,int param_2)

{
  char cVar1;
  undefined4 local_18;
  
  cVar1 = FUN_143b9d260(param_2 + 0x4e);
  if (cVar1 == '\0') {
    local_18 = 0x16d;
  }
  else {
    local_18 = 0x16e;
  }
  return local_18;
}



// FUNCTION 143b9d020 FUN_143b9d020 body=349 status=ok
// SIG undefined FUN_143b9d020(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b9d020(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_468 [32];
  undefined8 local_448;
  undefined4 local_438;
  undefined4 local_434;
  double local_430;
  undefined1 local_428 [8];
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined1 local_408 [624];
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_410 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_468;
  if (DAT_146832b40 == 2.2250738585072014e-308) {
    local_438 = 0;
    local_448 = 0;
    local_420 = FUN_143a8a690(local_198,"@calendar=Indian",0,0);
    local_418 = local_420;
    FUN_143b9c7e0(local_408,local_420,&local_438);
    FUN_143a8acf0(local_198);
    cVar1 = FUN_143a8b110(local_438);
    if (cVar1 != '\0') {
      uVar2 = FUN_143b52670();
      FUN_143b55550(local_408,uVar2,&local_438);
      FUN_143b4e270(local_408,1,0xffffffb0,&local_438);
      local_430 = (double)FUN_143b52810(local_408,&local_438);
      local_434 = FUN_143b512d0(local_408,1,&local_438);
      FUN_143a8ab50(local_428,0);
      DAT_146832b40 = local_430;
      DAT_146832b48 = local_434;
      FUN_143a8ad90(local_428);
    }
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_408);
  }
  return;
}



// FUNCTION 143b9d180 FUN_143b9d180 body=99 status=ok
// SIG undefined FUN_143b9d180(void)

double FUN_143b9d180(void)

{
  bool bVar1;
  undefined1 local_10 [16];
  
  FUN_143a8ab50(local_10,0);
  bVar1 = DAT_146832b40 == 2.2250738585072014e-308;
  FUN_143a8ad90(local_10);
  if (bVar1) {
    FUN_143b9d020();
  }
  return DAT_146832b40;
}



// FUNCTION 143b9d1f0 FUN_143b9d1f0 body=97 status=ok
// SIG undefined FUN_143b9d1f0(void)

undefined4 FUN_143b9d1f0(void)

{
  bool bVar1;
  undefined1 local_10 [16];
  
  FUN_143a8ab50(local_10,0);
  bVar1 = DAT_146832b40 == 2.2250738585072014e-308;
  FUN_143a8ad90(local_10);
  if (bVar1) {
    FUN_143b9d020();
  }
  return DAT_146832b48;
}



// FUNCTION 143b9d260 FUN_143b9d260 body=82 status=ok
// SIG undefined FUN_143b9d260(void)

undefined1 FUN_143b9d260(int param_1)

{
  uint uVar1;
  undefined1 local_18;
  
  uVar1 = param_1 >> 0x1f & 3;
  if (((param_1 + uVar1 & 3) == uVar1) && ((param_1 % 100 != 0 || (param_1 % 400 == 0)))) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143b9d2c0 FUN_143b9d2c0 body=711 status=ok
// SIG undefined FUN_143b9d2c0(void)

int * FUN_143b9d2c0(double param_1,int *param_2)

{
  char cVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int local_78;
  int local_74;
  int local_6c;
  
  dVar2 = (double)FUN_143a917b0(param_1 - 0.5);
  dVar2 = dVar2 + 0.5;
  dVar3 = (double)FUN_143a917b0((dVar2 - 1721425.5) / 146097.0);
  dVar4 = (double)FUN_143a917b0(dVar2 - 1721425.5);
  dVar5 = (double)FUN_143a917b0((double)((int)dVar4 % 0x23ab1) / 36524.0);
  dVar4 = (double)FUN_143a917b0((double)((int)dVar4 % 0x23ab1));
  dVar6 = (double)FUN_143a917b0((double)((int)dVar4 % 0x8eac) / 1461.0);
  dVar4 = (double)FUN_143a917b0((double)((int)dVar4 % 0x8eac));
  dVar4 = (double)FUN_143a917b0((double)((int)dVar4 % 0x5b5) / 365.0);
  local_78 = (int)(dVar3 * 400.0 + dVar5 * 100.0 + dVar6 * 4.0 + dVar4);
  if ((dVar5 != 4.0) && (dVar4 != 4.0)) {
    local_78 = local_78 + 1;
  }
  dVar3 = (double)FUN_143b9cae0(local_78,1,1);
  dVar4 = (double)FUN_143b9cae0(local_78,3,1);
  if (dVar4 <= dVar2) {
    cVar1 = FUN_143b9d260(local_78);
    if (cVar1 == '\0') {
      local_6c = 2;
    }
    else {
      local_6c = 1;
    }
    local_74 = local_6c;
  }
  else {
    local_74 = 0;
  }
  dVar3 = (double)FUN_143a917b0((((dVar2 - dVar3) + (double)local_74) * 12.0 + 373.0) / 367.0);
  dVar4 = (double)FUN_143b9cae0(local_78,(int)dVar3,1);
  *param_2 = local_78;
  param_2[1] = (int)dVar3;
  param_2[2] = (int)(dVar2 - dVar4) + 1;
  return param_2;
}



// FUNCTION 143b9d590 FUN_143b9d590 body=155 status=ok
// SIG undefined FUN_143b9d590(void)

undefined8 *
FUN_143b9d590(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_143b4ac10(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  FUN_143b4daa0(param_1,uVar1,param_2,param_5);
  *param_1 = icu_53::ChineseCalendar::vftable;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(int *)((longlong)param_1 + 0x26c) = (int)param_3;
  param_1[0x4e] = param_4;
  uVar2 = FUN_143b52670();
  FUN_143b55580(param_1,uVar2,param_5);
  return param_1;
}



// FUNCTION 143b9d630 FUN_143b9d630 body=123 status=ok
// SIG undefined FUN_143b9d630(void)

undefined8 * FUN_143b9d630(undefined8 *param_1,longlong param_2)

{
  FUN_143b4d910(param_1,param_2);
  *param_1 = icu_53::ChineseCalendar::vftable;
  *(undefined1 *)(param_1 + 0x4d) = *(undefined1 *)(param_2 + 0x268);
  *(undefined4 *)((longlong)param_1 + 0x26c) = *(undefined4 *)(param_2 + 0x26c);
  param_1[0x4e] = *(undefined8 *)(param_2 + 0x270);
  return param_1;
}



// FUNCTION 143b9d6b0 FUN_143b9d6b0 body=155 status=ok
// SIG undefined FUN_143b9d6b0(void)

undefined8 *
FUN_143b9d6b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_143b4ac10(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  FUN_143b4daa0(param_1,uVar1,param_2,param_3);
  *param_1 = icu_53::ChineseCalendar::vftable;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0xfffff5b4;
  uVar1 = FUN_143b9dea0(param_1);
  param_1[0x4e] = uVar1;
  uVar2 = FUN_143b52670();
  FUN_143b55580(param_1,uVar2,param_3);
  return param_1;
}



// FUNCTION 143b9d750 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::ChineseCalendar::vftable;
  FUN_143b4dd20(param_1);
  return;
}



// FUNCTION 143b9d780 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b9d7c0 FUN_143b9d7c0 body=231 status=ok
// SIG undefined FUN_143b9d7c0(void)

void FUN_143b9d7c0(longlong *param_1,int param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 2) {
    if (param_3 != 0) {
      iVar2 = FUN_143b512d0(param_1,5,param_4);
      cVar1 = FUN_143a8b0e0(*param_4);
      if (cVar1 == '\0') {
        iVar3 = FUN_143b512d0(param_1,0x14,param_4);
        cVar1 = FUN_143a8b0e0(*param_4);
        if (cVar1 == '\0') {
          (**(code **)(*param_1 + 0x1c8))(param_1,(iVar3 - iVar2) + -0x253d8b,iVar2,param_3);
        }
      }
    }
  }
  else {
    FUN_143b4e270(param_1,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 143b9d8b0 CreateInternalContext body=92 status=ok
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
  
  lVar1 = FUN_143a8d310(0x278);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b9d630(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143b9d910 FUN_143b9d910 body=1157 status=ok
// SIG undefined FUN_143b9d910(void)

void FUN_143b9d910(longlong *param_1,int param_2,int param_3,int param_4,char param_5)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int local_64;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_38;
  undefined4 local_34;
  int local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  local_44 = (**(code **)(*param_1 + 0x188))(param_1,param_3);
  if (param_2 < local_44) {
    local_28 = *param_1;
    iVar3 = (**(code **)(local_28 + 0x188))(param_1,param_3 + -1);
    local_58 = local_44;
    local_44 = iVar3;
  }
  else {
    local_18 = *param_1;
    local_58 = (**(code **)(local_18 + 0x188))(param_1,param_3 + 1);
  }
  uVar4 = (**(code **)(*param_1 + 400))(param_1,SUB84((double)(local_44 + 1),0),1);
  local_34 = (**(code **)(*param_1 + 400))(param_1,SUB84((double)(local_58 + 1),0),0);
  iVar3 = (**(code **)(*param_1 + 400))(param_1,SUB84((double)(param_2 + 1),0),0);
  iVar5 = (**(code **)(*param_1 + 0x198))(param_1,uVar4,local_34);
  *(bool *)(param_1 + 0x4d) = iVar5 == 0xc;
  local_64 = (**(code **)(*param_1 + 0x198))(param_1,uVar4,iVar3);
  if (((char)param_1[0x4d] != '\0') &&
     (cVar2 = (**(code **)(*param_1 + 0x1b0))(param_1,uVar4,iVar3), cVar2 != '\0')) {
    local_64 = local_64 + -1;
  }
  if (local_64 < 1) {
    local_64 = local_64 + 0xc;
  }
  if (((char)param_1[0x4d] != '\0') &&
     (cVar2 = (**(code **)(*param_1 + 0x1a8))(param_1,iVar3), cVar2 != '\0')) {
    uVar6 = (**(code **)(*param_1 + 400))(param_1,SUB84((double)(iVar3 + -0x19),0),0);
    local_20 = *param_1;
    cVar2 = (**(code **)(local_20 + 0x1b0))(param_1,uVar4,uVar6);
    if (cVar2 == '\0') {
      uVar1 = 1;
      goto LAB_143b9dbb9;
    }
  }
  uVar1 = 0;
LAB_143b9dbb9:
  FUN_143b53750(param_1,2,local_64 + -1);
  FUN_143b53750(param_1,0x16,uVar1);
  if (param_5 != '\0') {
    local_4c = param_3 - *(int *)((longlong)param_1 + 0x26c);
    local_48 = param_3 + 0xa4c;
    if ((local_64 < 0xb) || (5 < param_4)) {
      local_4c = local_4c + 1;
      local_48 = param_3 + 0xa4d;
    }
    local_30 = (param_2 - iVar3) + 1;
    FUN_143b53750(param_1,0x13,local_4c);
    iVar3 = FUN_143b91e30((double)(local_48 + -1),0x3c,&local_38);
    FUN_143b53750(param_1,0,iVar3 + 1);
    FUN_143b53750(param_1,1,local_38 + 1);
    FUN_143b53750(param_1,5,local_30);
    local_50 = (**(code **)(*param_1 + 0x1c0))(param_1,param_3);
    if (param_2 < local_50) {
      local_10 = *param_1;
      local_50 = (**(code **)(local_10 + 0x1c0))(param_1,param_3 + -1);
    }
    FUN_143b53750(param_1,6,(param_2 - local_50) + 1);
  }
  return;
}



// FUNCTION 143b9dda0 FUN_143b9dda0 body=188 status=ok
// SIG undefined FUN_143b9dda0(void)

double FUN_143b9dda0(longlong param_1,double param_2)

{
  char cVar1;
  undefined4 local_28;
  int local_24;
  int local_20 [2];
  double local_18;
  
  local_18 = param_2 * 86400000.0;
  if (*(longlong *)(param_1 + 0x270) != 0) {
    local_28 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x270) + 0x18))
              (*(undefined8 *)(param_1 + 0x270),local_18,0,local_20,&local_24,&local_28);
    cVar1 = FUN_143a8b110(local_28);
    if (cVar1 != '\0') {
      return local_18 - (double)(local_20[0] + local_24);
    }
  }
  return local_18 - 28800000.0;
}



// FUNCTION 143b9de60 FUN_143b9de60 body=24 status=ok
// SIG undefined FUN_143b9de60(void)

void FUN_143b9de60(undefined8 param_1)

{
  FUN_143b9e630(param_1);
  return;
}



// FUNCTION 143b9de80 FUN_143b9de80 body=24 status=ok
// SIG undefined FUN_143b9de80(void)

void FUN_143b9de80(undefined8 param_1)

{
  FUN_143b9e660(param_1);
  return;
}



// FUNCTION 143b9dea0 FUN_143b9dea0 body=40 status=ok
// SIG undefined FUN_143b9dea0(void)

undefined8 FUN_143b9dea0(void)

{
  FUN_143a9aa60(&DAT_146bc83f0,FUN_143b9e410);
  return DAT_146bc83e8;
}



// FUNCTION 143b9ded0 FUN_143b9ded0 body=19 status=ok
// SIG undefined FUN_143b9ded0(void)

void FUN_143b9ded0(void)

{
  FUN_143b9df00();
  return;
}



// FUNCTION 143b9def0 FUN_143b9def0 body=13 status=ok
// SIG undefined FUN_143b9def0(void)

undefined * FUN_143b9def0(void)

{
  return &DAT_145d16ab0;
}



// FUNCTION 143b9df00 FUN_143b9df00 body=8 status=ok
// SIG undefined FUN_143b9df00(void)

undefined * FUN_143b9df00(void)

{
  return &DAT_146bc8400;
}



// FUNCTION 143b9df10 FUN_143b9df10 body=13 status=ok
// SIG undefined FUN_143b9df10(void)

char * FUN_143b9df10(void)

{
  return "chinese";
}



// FUNCTION 143b9df20 FUN_143b9df20 body=104 status=ok
// SIG undefined FUN_143b9df20(void)

void FUN_143b9df20(longlong *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_143b52290(param_1);
  uVar2 = FUN_143b522b0(param_1);
  (**(code **)(*param_1 + 0x1b8))(param_1,param_2 + -0x253d8c,uVar2,uVar1,1);
  return;
}



// FUNCTION 143b9df90 FUN_143b9df90 body=637 status=ok
// SIG undefined FUN_143b9df90(void)

int FUN_143b9df90(longlong *param_1,int param_2,int param_3,char param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  double dVar6;
  int local_res10;
  int local_res18;
  int local_54;
  int local_50;
  undefined4 local_48 [2];
  longlong *local_40;
  int local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  double local_28;
  undefined4 local_20;
  longlong local_18;
  
  local_40 = param_1;
  if ((param_3 < 0) || (local_res10 = param_2, local_res18 = param_3, 0xb < param_3)) {
    local_28 = (double)param_3;
    dVar6 = (double)FUN_143b91ea0(local_28,0x4028000000000000,&local_28);
    local_res10 = param_2 + (int)dVar6;
    local_res18 = (int)local_28;
  }
  local_30 = local_res10 + -1 + *(int *)((longlong)param_1 + 0x26c);
  local_38 = (**(code **)(*param_1 + 0x1c0))(param_1,local_30);
  iVar2 = (**(code **)(*param_1 + 400))(param_1,(double)(local_38 + local_res18 * 0x1d),1);
  local_54 = iVar2 + 0x253d8c;
  local_34 = FUN_143b536c0(param_1,2);
  iVar3 = FUN_143b536c0(param_1,0x16);
  local_50 = iVar3;
  if (param_4 == '\0') {
    local_50 = 0;
  }
  local_2c = local_50;
  local_48[0] = 0;
  FUN_143b4ef70(local_40,local_54,local_48);
  cVar1 = FUN_143a8b0e0(local_48[0]);
  if (cVar1 == '\0') {
    local_20 = FUN_143b52290(param_1);
    uVar4 = FUN_143b522b0(param_1);
    local_18 = *local_40;
    (**(code **)(local_18 + 0x1b8))(local_40,iVar2,uVar4,local_20,0);
    iVar5 = FUN_143b536c0(param_1,2);
    if ((local_res18 != iVar5) || (iVar5 = FUN_143b536c0(param_1,0x16), local_2c != iVar5)) {
      local_54 = (**(code **)(*param_1 + 400))(param_1,(double)(iVar2 + 0x19),1);
      local_54 = local_54 + 0x253d8c;
    }
    FUN_143b53750(local_40,2,local_34);
    FUN_143b53750(local_40,0x16,iVar3);
    local_54 = local_54 + -1;
  }
  else {
    local_54 = 0;
  }
  return local_54;
}



// FUNCTION 143b9e210 FUN_143b9e210 body=174 status=ok
// SIG undefined FUN_143b9e210(void)

int FUN_143b9e210(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  
  iVar1 = FUN_143b53d30(param_1,0,1,0);
  if (*(int *)(param_1 + 0xcc) < iVar1) {
    iVar1 = FUN_143b536e0(param_1,0,1);
    iVar2 = FUN_143b536e0(param_1,1,1);
    local_18 = ((iVar1 + -1) * 0x3c + iVar2) - (*(int *)(param_1 + 0x26c) + 0xa4c);
  }
  else {
    local_18 = FUN_143b536e0(param_1,0x13,1);
  }
  return local_18;
}



// FUNCTION 143b9e2c0 FUN_143b9e2c0 body=45 status=ok
// SIG undefined FUN_143b9e2c0(void)

undefined4 FUN_143b9e2c0(undefined8 param_1,int param_2,int param_3)

{
  return *(undefined4 *)(&DAT_145d16f30 + (longlong)param_3 * 4 + (longlong)param_2 * 0x10);
}



// FUNCTION 143b9e2f0 FUN_143b9e2f0 body=115 status=ok
// SIG undefined FUN_143b9e2f0(void)

int FUN_143b9e2f0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x100))(param_1,param_2,param_3,1);
  iVar2 = (**(code **)(*param_1 + 400))(param_1,SUB84((double)(iVar1 + -0x253d72),0),1);
  return iVar2 - (iVar1 + -0x253d8b);
}



// FUNCTION 143b9e370 FUN_143b9e370 body=147 status=ok
// SIG undefined FUN_143b9e370(void)

bool FUN_143b9e370(longlong *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x1a0))(param_1,param_2);
  uVar2 = (**(code **)(*param_1 + 400))(param_1,SUB84((double)(param_2 + 0x19),0),1);
  iVar3 = (**(code **)(*param_1 + 0x1a0))(param_1,uVar2);
  return iVar1 == iVar3;
}



// FUNCTION 143b9e410 FUN_143b9e410 body=241 status=ok
// SIG undefined FUN_143b9e410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b9e410(void)

{
  undefined1 auStack_98 [32];
  uint local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_78 = 0;
  local_70 = FUN_143a8d310(0x88);
  if (local_70 == 0) {
    local_68 = 0;
  }
  else {
    local_60 = FUN_143a8d4f0(local_40,1,L"CHINA_ZONE",0xffffffff);
    local_78 = local_78 | 1;
    local_50 = local_60;
    local_68 = FUN_143b85140(local_70,28800000,local_60);
  }
  local_58 = local_68;
  DAT_146bc83e8 = local_68;
  if ((local_78 & 1) != 0) {
    local_78 = local_78 & 0xfffffffe;
    FUN_143a8dc60(local_40);
  }
  FUN_143b68380(5,FUN_143b9f150);
  return;
}



// FUNCTION 143b9e510 FUN_143b9e510 body=274 status=ok
// SIG undefined FUN_143b9e510(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b9e510(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_468 [32];
  undefined8 local_448;
  undefined4 local_438 [2];
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined1 local_418 [640];
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_420 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_468;
  local_438[0] = 0;
  local_448 = 0;
  local_430 = FUN_143a8a690(local_198,"@calendar=chinese",0,0);
  local_428 = local_430;
  FUN_143b9d6b0(local_418,local_430,local_438);
  FUN_143a8acf0(local_198);
  cVar1 = FUN_143a8b110(local_438[0]);
  if (cVar1 != '\0') {
    uVar2 = FUN_143b52670();
    FUN_143b55550(local_418,uVar2,local_438);
    FUN_143b9d7c0(local_418,1,0xffffffb0,local_438);
    DAT_146832b50 = FUN_143b52810(local_418,local_438);
    DAT_146832b58 = FUN_143b512d0(local_418,1,local_438);
  }
  UCameraModifier_Climbing::~UCameraModifier_Climbing(local_418);
  return;
}



// FUNCTION 143b9e630 FUN_143b9e630 body=41 status=ok
// SIG undefined FUN_143b9e630(void)

undefined8 FUN_143b9e630(void)

{
  FUN_143a9aa60(&DAT_146bc83f8,FUN_143b9e510);
  return DAT_146832b50;
}



// FUNCTION 143b9e660 FUN_143b9e660 body=39 status=ok
// SIG undefined FUN_143b9e660(void)

undefined4 FUN_143b9e660(void)

{
  FUN_143a9aa60(&DAT_146bc83f8,FUN_143b9e510);
  return DAT_146832b58;
}



// FUNCTION 143b9e690 FUN_143b9e690 body=159 status=ok
// SIG undefined FUN_143b9e690(void)

undefined1 FUN_143b9e690(longlong *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_18;
  
  if (param_3 < param_2) {
LAB_143b9e720:
    local_18 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 400))(param_1,SUB84((double)(param_3 + -0x19),0),0);
    cVar1 = (**(code **)(*param_1 + 0x1b0))(param_1,param_2,uVar2);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0x1a8))(param_1,param_3);
      if (cVar1 == '\0') goto LAB_143b9e720;
    }
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143b9e730 FUN_143b9e730 body=266 status=ok
// SIG undefined FUN_143b9e730(void)

int FUN_143b9e730(undefined8 param_1,int param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  double dVar3;
  int local_38;
  longlong local_28;
  
  FUN_143ab2410(&DAT_146bc83a0);
  if (DAT_146bc83d0 == 0) {
    lVar1 = FUN_143a8d310(0x88);
    if (lVar1 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_143bf71b0(lVar1);
    }
    DAT_146bc83d0 = local_28;
    FUN_143b68380(5,FUN_143b9f150);
  }
  uVar2 = FUN_143b9dda0(param_1,SUB84((double)param_2,0));
  FUN_143bf8270(DAT_146bc83d0,uVar2);
  dVar3 = (double)FUN_143bf7f10(DAT_146bc83d0);
  FUN_143ab2470(&DAT_146bc83a0);
  local_38 = ((int)((dVar3 * 6.0) / 3.141592653589793) + 2) % 0xc;
  if (local_38 < 1) {
    local_38 = local_38 + 0xc;
  }
  return local_38;
}



// FUNCTION 143b9e840 FUN_143b9e840 body=198 status=ok
// SIG undefined FUN_143b9e840(void)

void FUN_143b9e840(longlong param_1,double param_2)

{
  char cVar1;
  undefined4 local_18;
  int local_14;
  int local_10 [4];
  
  if (*(longlong *)(param_1 + 0x270) != 0) {
    local_18 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x270) + 0x18))
              (*(undefined8 *)(param_1 + 0x270),param_2,0,local_10,&local_14,&local_18);
    cVar1 = FUN_143a8b110(local_18);
    if (cVar1 != '\0') {
      FUN_143b512a0(param_2 + (double)(local_10[0] + local_14),0x4194997000000000);
      return;
    }
  }
  FUN_143b512a0(param_2 + 28800000.0,0x4194997000000000);
  return;
}



// FUNCTION 143b9e910 FUN_143b9e910 body=244 status=ok
// SIG undefined FUN_143b9e910(void)

int FUN_143b9e910(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  double dVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_30;
  undefined1 local_10 [16];
  
  FUN_143ab2410(&DAT_146bc83a0);
  if (DAT_146bc83d0 == 0) {
    lVar2 = FUN_143a8d310(0x88);
    if (lVar2 == 0) {
      local_30 = 0;
    }
    else {
      local_30 = FUN_143bf71b0(lVar2);
    }
    DAT_146bc83d0 = local_30;
    FUN_143b68380(5,FUN_143b9f150);
  }
  uVar3 = FUN_143b9dda0(param_1,param_2);
  FUN_143bf8270(DAT_146bc83d0,uVar3);
  uVar3 = FUN_143bf7510(local_10);
  uVar3 = FUN_143bf7e50(DAT_146bc83d0,uVar3,param_3);
  FUN_143ab2470(&DAT_146bc83a0);
  dVar1 = (double)FUN_143b9e840(param_1,uVar3);
  return (int)dVar1;
}



// FUNCTION 143b9ea10 FUN_143b9ea10 body=445 status=ok
// SIG undefined FUN_143b9ea10(void)

int FUN_143b9ea10(longlong *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_38;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  longlong local_18;
  
  local_2c = 0;
  local_38 = FUN_143bf7970(&DAT_146bc83e0,param_2,&local_2c);
  if (local_38 == 0) {
    local_18 = *param_1;
    local_28 = (**(code **)(local_18 + 0x188))(param_1,param_2 + -1);
    local_24 = (**(code **)(*param_1 + 0x188))(param_1,param_2);
    iVar2 = (**(code **)(*param_1 + 400))(param_1,SUB84((double)(local_28 + 1),0),1);
    local_38 = (**(code **)(*param_1 + 400))(param_1,SUB84((double)(iVar2 + 0x19),0),1);
    local_20 = (**(code **)(*param_1 + 400))(param_1,SUB84((double)(local_24 + 1),0),0);
    iVar3 = (**(code **)(*param_1 + 0x198))(param_1,iVar2,local_20);
    if ((iVar3 == 0xc) &&
       ((cVar1 = (**(code **)(*param_1 + 0x1a8))(param_1,iVar2), cVar1 != '\0' ||
        (cVar1 = (**(code **)(*param_1 + 0x1a8))(param_1,local_38), cVar1 != '\0')))) {
      local_38 = (**(code **)(*param_1 + 400))(param_1,SUB84((double)(local_38 + 0x19),0),1);
    }
    FUN_143bf8180(&DAT_146bc83e0,param_2,local_38,&local_2c);
  }
  cVar1 = FUN_143a8b0e0(local_2c);
  if (cVar1 != '\0') {
    local_38 = 0;
  }
  return local_38;
}



// FUNCTION 143b9ebd0 FUN_143b9ebd0 body=298 status=ok
// SIG undefined FUN_143b9ebd0(void)

void FUN_143b9ebd0(longlong *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 local_18;
  int local_14;
  
  local_18 = 0;
  iVar2 = (**(code **)(*param_1 + 400))
                    (param_1,(double)(param_2 + (int)(((double)param_4 - 0.5) * 29.530588853)),1);
  local_14 = iVar2 + 0x253d8b + param_3;
  if (param_3 < 0x1e) {
    FUN_143b55270(param_1,0x14,local_14);
  }
  else {
    FUN_143b55270(param_1,0x14,local_14 + -1);
    FUN_143b4eb20(param_1,&local_18);
    cVar1 = FUN_143a8b0e0(local_18);
    if (((cVar1 == '\0') &&
        (iVar2 = (**(code **)(*param_1 + 0xa8))(param_1,5,&local_18), param_3 <= iVar2)) &&
       (cVar1 = FUN_143a8b0e0(local_18), cVar1 == '\0')) {
      FUN_143b55270(param_1,0x14,local_14);
    }
  }
  return;
}



// FUNCTION 143b9ed00 FUN_143b9ed00 body=609 status=ok
// SIG undefined FUN_143b9ed00(void)

void FUN_143b9ed00(longlong *param_1,int param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int local_38;
  int local_34;
  int local_28;
  
  if (param_2 == 2) {
    if (param_3 != 0) {
      iVar2 = FUN_143b512d0(param_1,5,param_4);
      cVar1 = FUN_143a8b0e0(*param_4);
      if (cVar1 == '\0') {
        iVar3 = FUN_143b512d0(param_1,0x14,param_4);
        cVar1 = FUN_143a8b0e0(*param_4);
        if (cVar1 == '\0') {
          iVar3 = (iVar3 - iVar2) + -0x253d8b;
          local_38 = FUN_143b512d0(param_1,2,param_4);
          cVar1 = FUN_143a8b0e0(*param_4);
          if (cVar1 == '\0') {
            if ((char)param_1[0x4d] != '\0') {
              iVar4 = FUN_143b512d0(param_1,0x16,param_4);
              if (iVar4 == 1) {
                local_38 = local_38 + 1;
              }
              else {
                uVar5 = (**(code **)(*param_1 + 400))
                                  (param_1,(double)(iVar3 - (int)(((double)local_38 - 0.5) *
                                                                 29.530588853)),1);
                cVar1 = (**(code **)(*param_1 + 0x1b0))(param_1,uVar5,iVar3);
                if (cVar1 != '\0') {
                  local_38 = local_38 + 1;
                }
              }
              cVar1 = FUN_143a8b0e0(*param_4);
              if (cVar1 != '\0') {
                return;
              }
            }
            if ((char)param_1[0x4d] == '\0') {
              local_28 = 0xc;
            }
            else {
              local_28 = 0xd;
            }
            local_34 = (local_38 + param_3) % local_28;
            if (local_34 < 0) {
              local_34 = local_34 + local_28;
            }
            if (local_34 != local_38) {
              (**(code **)(*param_1 + 0x1c8))(param_1,iVar3,iVar2,local_34 - local_38);
            }
          }
        }
      }
    }
  }
  else {
    FUN_143b54400(param_1,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 143b9ef70 FUN_143b9ef70 body=112 status=ok
// SIG undefined FUN_143b9ef70(void)

int FUN_143b9ef70(undefined8 param_1,int param_2,int param_3)

{
  double dVar1;
  undefined8 local_10;
  
  dVar1 = (double)(param_3 - param_2) / 29.530588853;
  if (dVar1 < 0.0) {
    local_10 = -0.5;
  }
  else {
    local_10 = 0.5;
  }
  return (int)(dVar1 + local_10);
}



// FUNCTION 143b9efe0 FUN_143b9efe0 body=357 status=ok
// SIG undefined FUN_143b9efe0(void)

int FUN_143b9efe0(undefined8 param_1,undefined4 param_2)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  int local_48;
  undefined4 local_44;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_44 = 0;
  local_48 = FUN_143bf7970(&DAT_146bc83d8,param_2,&local_44);
  if (local_48 == 0) {
    uVar3 = FUN_143b91d10(param_2,0xb,1);
    local_28 = FUN_143b9dda0(param_1,uVar3);
    FUN_143ab2410(&DAT_146bc83a0);
    if (DAT_146bc83d0 == 0) {
      local_40 = FUN_143a8d310(0x88);
      if (local_40 == 0) {
        local_38 = 0;
      }
      else {
        local_38 = FUN_143bf71b0(local_40);
      }
      local_30 = local_38;
      DAT_146bc83d0 = local_38;
      FUN_143b68380(5,FUN_143b9f150);
    }
    FUN_143bf8270(DAT_146bc83d0,local_28);
    uVar3 = FUN_143bf7530();
    local_20 = FUN_143bf8030(DAT_146bc83d0,uVar3,1);
    FUN_143ab2470(&DAT_146bc83a0);
    dVar1 = (double)FUN_143b9e840(param_1,local_20);
    local_48 = (int)dVar1;
    FUN_143bf8180(&DAT_146bc83d8,param_2,local_48,&local_44);
  }
  cVar2 = FUN_143a8b0e0(local_44);
  if (cVar2 != '\0') {
    local_48 = 0;
  }
  return local_48;
}



// FUNCTION 143b9f150 FUN_143b9f150 body=372 status=ok
// SIG undefined FUN_143b9f150(void)

undefined8 FUN_143b9f150(void)

{
  if (DAT_146bc83d0 != 0) {
    if (DAT_146bc83d0 != 0) {
      FUN_143b99f10(DAT_146bc83d0,1);
    }
    DAT_146bc83d0 = 0;
  }
  if (DAT_146bc83d8 != (undefined8 *)0x0) {
    if (DAT_146bc83d8 != (undefined8 *)0x0) {
      (**(code **)*DAT_146bc83d8)(DAT_146bc83d8,1);
    }
    DAT_146bc83d8 = (undefined8 *)0x0;
  }
  if (DAT_146bc83e0 != (undefined8 *)0x0) {
    if (DAT_146bc83e0 != (undefined8 *)0x0) {
      (**(code **)*DAT_146bc83e0)(DAT_146bc83e0,1);
    }
    DAT_146bc83e0 = (undefined8 *)0x0;
  }
  if (DAT_146bc83e8 != (undefined8 *)0x0) {
    if (DAT_146bc83e8 != (undefined8 *)0x0) {
      (**(code **)*DAT_146bc83e8)(DAT_146bc83e8,1);
    }
    DAT_146bc83e8 = (undefined8 *)0x0;
  }
  FUN_143a9a9f0(&DAT_146bc83f0);
  return 1;
}



// FUNCTION 143b9f2d0 FUN_143b9f2d0 body=54 status=ok
// SIG undefined FUN_143b9f2d0(void)

undefined8 * FUN_143b9f2d0(undefined8 *param_1,undefined8 param_2)

{
  FUN_143bf8680(param_1,param_2);
  *param_1 = icu_53::CopticCalendar::vftable;
  return param_1;
}



// FUNCTION 143b9f310 FUN_143b9f310 body=64 status=ok
// SIG undefined FUN_143b9f310(void)

undefined8 * FUN_143b9f310(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143bf86c0(param_1,param_2,param_3);
  *param_1 = icu_53::CopticCalendar::vftable;
  return param_1;
}



// FUNCTION 143b9f350 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::CopticCalendar::vftable;
  ~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143b9f380 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b9f3c0 CreateInternalContext body=92 status=ok
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
  
  lVar1 = FUN_143a8d310(0x268);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b9f2d0(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143b9f420 FUN_143b9f420 body=41 status=ok
// SIG undefined FUN_143b9f420(void)

undefined8 FUN_143b9f420(void)

{
  FUN_143a9aa60(&DAT_146bc8408,FUN_143b9f680);
  return DAT_146832b60;
}



// FUNCTION 143b9f450 FUN_143b9f450 body=39 status=ok
// SIG undefined FUN_143b9f450(void)

undefined4 FUN_143b9f450(void)

{
  FUN_143a9aa60(&DAT_146bc8408,FUN_143b9f680);
  return DAT_146832b68;
}



// FUNCTION 143b9f480 FUN_143b9f480 body=19 status=ok
// SIG undefined FUN_143b9f480(void)

void FUN_143b9f480(void)

{
  FUN_143b9f4b0();
  return;
}



// FUNCTION 143b9f4a0 FUN_143b9f4a0 body=11 status=ok
// SIG undefined FUN_143b9f4a0(void)

undefined8 FUN_143b9f4a0(void)

{
  return 0x1bd799;
}



// FUNCTION 143b9f4b0 FUN_143b9f4b0 body=8 status=ok
// SIG undefined FUN_143b9f4b0(void)

undefined * FUN_143b9f4b0(void)

{
  return &DAT_146bc8410;
}



// FUNCTION 143b9f4c0 FUN_143b9f4c0 body=13 status=ok
// SIG undefined FUN_143b9f4c0(void)

char * FUN_143b9f4c0(void)

{
  return "coptic";
}



// FUNCTION 143b9f4d0 FUN_143b9f4d0 body=243 status=ok
// SIG undefined FUN_143b9f4d0(void)

void FUN_143b9f4d0(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18 [6];
  
  uVar1 = (**(code **)(*param_1 + 0x188))(param_1);
  FUN_143bf88e0(param_2,uVar1,&local_28,&local_1c,local_18);
  if (0 < local_28) {
    local_20 = local_28;
  }
  else {
    local_20 = 1 - local_28;
  }
  local_24 = (uint)(0 < local_28);
  FUN_143b53750(param_1,0x13,local_28);
  FUN_143b53750(param_1,0,local_24);
  FUN_143b53750(param_1,1,local_20);
  FUN_143b53750(param_1,2,local_1c);
  FUN_143b53750(param_1,5,local_18[0]);
  FUN_143b53750(param_1,6,local_1c * 0x1e + local_18[0]);
  return;
}



// FUNCTION 143b9f5d0 FUN_143b9f5d0 body=161 status=ok
// SIG undefined FUN_143b9f5d0(void)

int FUN_143b9f5d0(undefined8 param_1)

{
  int iVar1;
  undefined4 local_18;
  
  iVar1 = FUN_143b53cf0(param_1,0x13,1);
  if (iVar1 == 0x13) {
    local_18 = FUN_143b536e0(param_1,0x13,1);
  }
  else {
    iVar1 = FUN_143b536e0(param_1,0,1);
    if (iVar1 == 0) {
      local_18 = FUN_143b536e0(param_1,1,1);
      local_18 = 1 - local_18;
    }
    else {
      local_18 = FUN_143b536e0(param_1,1,1);
    }
  }
  return local_18;
}



// FUNCTION 143b9f680 FUN_143b9f680 body=274 status=ok
// SIG undefined FUN_143b9f680(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b9f680(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_458 [32];
  undefined8 local_438;
  undefined4 local_428 [2];
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined1 local_408 [624];
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_410 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_458;
  local_428[0] = 0;
  local_438 = 0;
  local_420 = FUN_143a8a690(local_198,"@calendar=coptic",0,0);
  local_418 = local_420;
  FUN_143b9f310(local_408,local_420,local_428);
  FUN_143a8acf0(local_198);
  cVar1 = FUN_143a8b110(local_428[0]);
  if (cVar1 != '\0') {
    uVar2 = FUN_143b52670();
    FUN_143b55550(local_408,uVar2,local_428);
    FUN_143b4e270(local_408,1,0xffffffb0,local_428);
    DAT_146832b60 = FUN_143b52810(local_408,local_428);
    DAT_146832b68 = FUN_143b512d0(local_408,1,local_428);
  }
  UCameraModifier_Climbing::~UCameraModifier_Climbing(local_408);
  return;
}



// FUNCTION 143b9f7a0 FUN_143b9f7a0 body=54 status=ok
// SIG undefined FUN_143b9f7a0(void)

undefined8 * FUN_143b9f7a0(undefined8 *param_1,undefined8 param_2)

{
  FUN_143b9d630(param_1,param_2);
  *param_1 = icu_53::DangiCalendar::vftable;
  return param_1;
}



// FUNCTION 143b9f7e0 FUN_143b9f7e0 body=88 status=ok
// SIG undefined FUN_143b9f7e0(void)

undefined8 * FUN_143b9f7e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143b9f910(param_1);
  FUN_143b9d590(param_1,param_2,0xfffff6e4,uVar1,param_3);
  *param_1 = icu_53::DangiCalendar::vftable;
  return param_1;
}



// FUNCTION 143b9f840 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::DangiCalendar::vftable;
  ~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143b9f870 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b9f8b0 CreateInternalContext body=92 status=ok
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
  
  lVar1 = FUN_143a8d310(0x278);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b9f7a0(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143b9f910 FUN_143b9f910 body=40 status=ok
// SIG undefined FUN_143b9f910(void)

undefined8 FUN_143b9f910(void)

{
  FUN_143a9aa60(&DAT_146bc8420,FUN_143b9f980);
  return DAT_146bc8418;
}



// FUNCTION 143b9f940 FUN_143b9f940 body=19 status=ok
// SIG undefined FUN_143b9f940(void)

void FUN_143b9f940(void)

{
  FUN_143b9f960();
  return;
}



// FUNCTION 143b9f960 FUN_143b9f960 body=8 status=ok
// SIG undefined FUN_143b9f960(void)

undefined * FUN_143b9f960(void)

{
  return &DAT_146bc8428;
}



// FUNCTION 143b9f970 FUN_143b9f970 body=13 status=ok
// SIG undefined FUN_143b9f970(void)

char * FUN_143b9f970(void)

{
  return "dangi";
}



// FUNCTION 143b9f980 FUN_143b9f980 body=1417 status=ok
// SIG undefined FUN_143b9f980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b9f980(void)

{
  char cVar1;
  undefined1 auStack_248 [32];
  undefined8 *local_228;
  undefined4 local_220;
  undefined4 local_218;
  uint local_208;
  undefined4 local_204;
  undefined8 *local_200;
  undefined8 *local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  undefined8 *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [40];
  undefined1 local_b0 [40];
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_e0 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  local_208 = 0;
  local_f8 = 0xc280c00c2c600000;
  local_e8 = 0xc280854ea3000000;
  local_f0 = 0xc27a9de23f800000;
  local_1c0 = FUN_143a8d310(0x38);
  if (local_1c0 == 0) {
    local_1e0 = 0;
  }
  else {
    local_190 = FUN_143a8d4f0(local_b0,1,L"GMT+8",0xffffffff);
    local_208 = local_208 | 1;
    local_160 = local_190;
    local_1e0 = FUN_143bec820(local_1c0,local_190,28800000,0);
  }
  local_120 = local_1e0;
  local_188 = local_1e0;
  if ((local_208 & 1) != 0) {
    local_208 = local_208 & 0xfffffffe;
    FUN_143a8dc60(local_b0);
  }
  local_1f0 = FUN_143a8d310(0x148);
  if (local_1f0 == 0) {
    local_1d0 = 0;
  }
  else {
    local_180 = FUN_143a8d4f0(local_60,1,L"Korean 1897",0xffffffff);
    local_208 = local_208 | 2;
    local_218 = 1;
    local_220 = 1;
    local_228 = &local_f8;
    local_170 = local_180;
    local_1d0 = FUN_143bec900(local_1f0,local_180,25200000,0);
  }
  local_110 = local_1d0;
  local_158 = local_1d0;
  if ((local_208 & 2) != 0) {
    local_208 = local_208 & 0xfffffffd;
    FUN_143a8dc60(local_60);
  }
  local_1b0 = FUN_143a8d310(0x148);
  if (local_1b0 == 0) {
    local_1e8 = 0;
  }
  else {
    local_1a0 = FUN_143a8d4f0(local_d8,1,L"Korean 1898-1911",0xffffffff);
    local_208 = local_208 | 4;
    local_218 = 1;
    local_220 = 1;
    local_228 = &local_e8;
    local_150 = local_1a0;
    local_1e8 = FUN_143bec900(local_1b0,local_1a0,28800000,0);
  }
  local_100 = local_1e8;
  local_148 = local_1e8;
  if ((local_208 & 4) != 0) {
    local_208 = local_208 & 0xfffffffb;
    FUN_143a8dc60(local_d8);
  }
  local_1d8 = FUN_143a8d310(0x148);
  if (local_1d8 == 0) {
    local_1c8 = 0;
  }
  else {
    local_140 = FUN_143a8d4f0(local_88,1,L"Korean 1912-",0xffffffff);
    local_208 = local_208 | 8;
    local_218 = 1;
    local_220 = 1;
    local_228 = &local_f0;
    local_130 = local_140;
    local_1c8 = FUN_143bec900(local_1d8,local_140,32400000,0);
  }
  local_108 = local_1c8;
  local_138 = local_1c8;
  if ((local_208 & 8) != 0) {
    local_208 = local_208 & 0xfffffff7;
    FUN_143a8dc60(local_88);
  }
  local_204 = 0;
  local_1b8 = FUN_143a8d310(0x58);
  if (local_1b8 == 0) {
    local_1a8 = (undefined8 *)0x0;
  }
  else {
    local_198 = FUN_143a8d4f0(local_38,1,L"KOREA_ZONE",0xffffffff);
    local_208 = local_208 | 0x10;
    local_178 = local_198;
    local_1a8 = (undefined8 *)FUN_143bf8a90(local_1b8,local_198,local_188);
  }
  local_168 = local_1a8;
  local_200 = local_1a8;
  if ((local_208 & 0x10) != 0) {
    local_208 = local_208 & 0xffffffef;
    FUN_143a8dc60(local_38);
  }
  FUN_143bf8c90(local_200,local_158,&local_204);
  FUN_143bf8c90(local_200,local_148,&local_204);
  FUN_143bf8c90(local_200,local_138,&local_204);
  FUN_143bf8fc0(local_200,&local_204);
  cVar1 = FUN_143a8b110(local_204);
  if (cVar1 == '\0') {
    local_128 = local_200;
    local_1f8 = local_200;
    if (local_200 == (undefined8 *)0x0) {
      local_118 = 0;
    }
    else {
      local_118 = (**(code **)*local_200)(local_200,1);
    }
    DAT_146bc8418 = (undefined8 *)0x0;
  }
  else {
    DAT_146bc8418 = local_200;
  }
  FUN_143b68380(8,FUN_143b9ff10);
  return;
}



// FUNCTION 143b9ff10 FUN_143b9ff10 body=110 status=ok
// SIG undefined FUN_143b9ff10(void)

undefined8 FUN_143b9ff10(void)

{
  if (DAT_146bc8418 != (undefined8 *)0x0) {
    if (DAT_146bc8418 != (undefined8 *)0x0) {
      (**(code **)*DAT_146bc8418)(DAT_146bc8418,1);
    }
    DAT_146bc8418 = (undefined8 *)0x0;
  }
  FUN_143a9a9f0(&DAT_146bc8420);
  return 1;
}



// FUNCTION 143b9ff80 FUN_143b9ff80 body=76 status=ok
// SIG undefined FUN_143b9ff80(void)

undefined8 * FUN_143b9ff80(undefined8 *param_1,longlong param_2)

{
  FUN_143bf8680(param_1,param_2);
  *param_1 = icu_53::EthiopicCalendar::vftable;
  *(undefined4 *)(param_1 + 0x4d) = *(undefined4 *)(param_2 + 0x268);
  return param_1;
}



// FUNCTION 143b9ffd0 FUN_143b9ffd0 body=84 status=ok
// SIG undefined FUN_143b9ffd0(void)

undefined8 *
FUN_143b9ffd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_143bf86c0(param_1,param_2,param_3);
  *param_1 = icu_53::EthiopicCalendar::vftable;
  *(undefined4 *)(param_1 + 0x4d) = param_4;
  return param_1;
}



// FUNCTION 143ba0030 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::EthiopicCalendar::vftable;
  ~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143ba0060 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143ba00a0 CreateInternalContext body=92 status=ok
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
  
  lVar1 = FUN_143a8d310(0x270);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b9ff80(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143ba0100 FUN_143ba0100 body=41 status=ok
// SIG undefined FUN_143ba0100(void)

undefined8 FUN_143ba0100(void)

{
  FUN_143a9aa60(&DAT_146bc8430,FUN_143ba0440);
  return DAT_146832b70;
}



// FUNCTION 143ba0130 FUN_143ba0130 body=69 status=ok
// SIG undefined FUN_143ba0130(void)

int FUN_143ba0130(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  
  FUN_143a9aa60(&DAT_146bc8430,FUN_143ba0440);
  cVar1 = FUN_143ba0560(param_1);
  iVar2 = DAT_146832b78;
  if (cVar1 != '\0') {
    iVar2 = DAT_146832b78 + 0x157c;
  }
  return iVar2;
}



// FUNCTION 143ba0180 FUN_143ba0180 body=19 status=ok
// SIG undefined FUN_143ba0180(void)

void FUN_143ba0180(void)

{
  FUN_143ba01b0();
  return;
}



// FUNCTION 143ba01a0 FUN_143ba01a0 body=11 status=ok
// SIG undefined FUN_143ba01a0(void)

undefined8 FUN_143ba01a0(void)

{
  return 0x1a4dd0;
}



// FUNCTION 143ba01b0 FUN_143ba01b0 body=8 status=ok
// SIG undefined FUN_143ba01b0(void)

undefined * FUN_143ba01b0(void)

{
  return &DAT_146bc8438;
}



// FUNCTION 143ba01c0 FUN_143ba01c0 body=47 status=ok
// SIG undefined FUN_143ba01c0(void)

char * FUN_143ba01c0(undefined8 param_1)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = FUN_143ba0560(param_1);
  if (cVar1 == '\0') {
    pcVar2 = "ethiopic";
  }
  else {
    pcVar2 = "ethiopic-amete-alem";
  }
  return pcVar2;
}



// FUNCTION 143ba01f0 FUN_143ba01f0 body=283 status=ok
// SIG undefined FUN_143ba01f0(void)

void FUN_143ba01f0(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18 [6];
  
  uVar2 = (**(code **)(*param_1 + 0x188))(param_1);
  FUN_143bf88e0(param_2,uVar2,&local_28,&local_1c,local_18);
  cVar1 = FUN_143ba0560(param_1);
  if (cVar1 == '\0') {
    if (local_28 < 1) {
      local_24 = 0;
      local_20 = local_28 + 0x157c;
    }
    else {
      local_24 = 1;
      local_20 = local_28;
    }
  }
  else {
    local_24 = 0;
    local_20 = local_28 + 0x157c;
  }
  FUN_143b53750(param_1,0x13,local_28);
  FUN_143b53750(param_1,0,local_24);
  FUN_143b53750(param_1,1,local_20);
  FUN_143b53750(param_1,2,local_1c);
  FUN_143b53750(param_1,5,local_18[0]);
  FUN_143b53750(param_1,6,local_1c * 0x1e + local_18[0]);
  return;
}



// FUNCTION 143ba0310 FUN_143ba0310 body=209 status=ok
// SIG undefined FUN_143ba0310(void)

int FUN_143ba0310(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 local_18;
  
  iVar2 = FUN_143b53cf0(param_1,0x13,1);
  if (iVar2 == 0x13) {
    local_18 = FUN_143b536e0(param_1,0x13,1);
  }
  else {
    cVar1 = FUN_143ba0560(param_1);
    if (cVar1 == '\0') {
      iVar2 = FUN_143b536e0(param_1,0,1);
      if (iVar2 == 1) {
        local_18 = FUN_143b536e0(param_1,1,1);
      }
      else {
        local_18 = FUN_143b536e0(param_1,1,1);
        local_18 = local_18 + -0x157c;
      }
    }
    else {
      local_18 = FUN_143b536e0(param_1,1,0x157d);
      local_18 = local_18 + -0x157c;
    }
  }
  return local_18;
}



// FUNCTION 143ba03f0 FUN_143ba03f0 body=70 status=ok
// SIG undefined FUN_143ba03f0(void)

undefined8 FUN_143ba03f0(undefined8 param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_143ba0560(param_1);
  if ((cVar1 == '\0') || (param_2 != 0)) {
    uVar2 = FUN_143bf88b0(param_1,param_2,param_3);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143ba0440 FUN_143ba0440 body=277 status=ok
// SIG undefined FUN_143ba0440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143ba0440(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_458 [32];
  undefined8 local_438;
  undefined4 local_428 [2];
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined1 local_408 [624];
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_410 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_458;
  local_428[0] = 0;
  local_438 = 0;
  local_420 = FUN_143a8a690(local_198,"@calendar=ethiopic",0,0);
  local_418 = local_420;
  FUN_143b9ffd0(local_408,local_420,local_428,0);
  FUN_143a8acf0(local_198);
  cVar1 = FUN_143a8b110(local_428[0]);
  if (cVar1 != '\0') {
    uVar2 = FUN_143b52670();
    FUN_143b55550(local_408,uVar2,local_428);
    FUN_143b4e270(local_408,1,0xffffffb0,local_428);
    DAT_146832b70 = FUN_143b52810(local_408,local_428);
    DAT_146832b78 = FUN_143b512d0(local_408,1,local_428);
  }
  UCameraModifier_Climbing::~UCameraModifier_Climbing(local_408);
  return;
}



// FUNCTION 143ba0560 FUN_143ba0560 body=42 status=ok
// SIG undefined FUN_143ba0560(void)

bool FUN_143ba0560(longlong param_1)

{
  return *(int *)(param_1 + 0x268) == 1;
}



// FUNCTION 143ba0590 FUN_143ba0590 body=672 status=ok
// SIG undefined FUN_143ba0590(void)

undefined8 * FUN_143ba0590(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_38;
  
  FUN_143b564c0(param_1);
  *param_1 = icu_53::SimpleDateFormat::vftable;
  FUN_143a8dad0(param_1 + 0x2c,L"yyyyMMdd hh:mm a");
  FUN_143a8ac30(param_1 + 0x31);
  FUN_143a8ac30(param_1 + 0x36);
  FUN_143a8a610(param_1 + 0x3b,param_2);
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x71] = 0;
  cVar2 = FUN_143a8b0e0(*param_3);
  if (cVar2 == '\0') {
    FUN_143ba2e50(param_1);
    uVar3 = FUN_143ba2ef0(param_1,0,param_1 + 0x3b,param_3);
    FUN_143ba3080(param_1,param_1 + 0x3b,uVar3,param_3);
    cVar2 = FUN_143a8b0e0(*param_3);
    if (cVar2 != '\0') {
      *param_3 = 0;
      puVar1 = (undefined8 *)param_1[0x6a];
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar4 = FUN_143a8d310(0x498);
      if (lVar4 == 0) {
        local_38 = 0;
      }
      else {
        local_38 = FUN_143bfb9e0(lVar4,param_3);
      }
      param_1[0x6a] = local_38;
      if (param_1[0x6a] == 0) {
        *param_3 = 7;
        return param_1;
      }
    }
    FUN_143a90e90(param_1 + 0x31);
    FUN_143a90e90(param_1 + 0x36);
    FUN_143ba2cf0(param_1,param_1 + 0x3b,param_3);
    cVar2 = FUN_143a8b110(*param_3);
    if (cVar2 != '\0') {
      FUN_143ba2fa0(param_1);
    }
  }
  return param_1;
}



// FUNCTION 143ba0830 FUN_143ba0830 body=316 status=ok
// SIG undefined FUN_143ba0830(void)

undefined8 *
FUN_143ba0830(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  char cVar1;
  
  FUN_143b564c0(param_1);
  *param_1 = icu_53::SimpleDateFormat::vftable;
  FUN_143a8ac30(param_1 + 0x2c);
  FUN_143a8ac30(param_1 + 0x31);
  FUN_143a8ac30(param_1 + 0x36);
  FUN_143a8a610(param_1 + 0x3b,param_4);
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x71] = 0;
  FUN_143ba2e50(param_1);
  FUN_143ba1e60(param_1,param_2,param_3,param_1 + 0x3b,param_5);
  cVar1 = FUN_143a8b110(*param_5);
  if (cVar1 != '\0') {
    FUN_143ba2fa0(param_1);
  }
  return param_1;
}



// FUNCTION 143ba0970 FUN_143ba0970 body=262 status=ok
// SIG undefined FUN_143ba0970(void)

undefined8 *
FUN_143ba0970(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143b56420(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::SimpleDateFormat::vftable;
  FUN_143a8ac30(param_1 + 0x2c);
  FUN_143a8ac30(param_1 + 0x31);
  FUN_143a8ac30(param_1 + 0x36);
  FUN_143a8a610(param_1 + 0x3b,param_2 + 0x1d8);
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x71] = 0;
  FUN_143ba2e50(param_1);
  FUN_143ba0ce0(param_1,param_2);
  return param_1;
}



// FUNCTION 143ba0a80 FUN_143ba0a80 body=594 status=ok
// SIG undefined FUN_143ba0a80(void)

void FUN_143ba0a80(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = icu_53::SimpleDateFormat::vftable;
  puVar1 = (undefined8 *)param_1[0x6a];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[0x6e] != 0) {
    FUN_143aa79f0(param_1[0x6e]);
  }
  if ((param_1[0x6b] != 0) && (puVar1 = (undefined8 *)param_1[0x6b], puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  while (param_1[0x6f] != 0) {
    plVar2 = (longlong *)param_1[0x6f];
    param_1[0x6f] = plVar2[2];
    puVar1 = (undefined8 *)*plVar2;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    FUN_143aa79f0(plVar2);
  }
  puVar1 = (undefined8 *)param_1[0x71];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143a8acf0(param_1 + 0x3b);
  FUN_143a8dc60(param_1 + 0x36);
  FUN_143a8dc60(param_1 + 0x31);
  FUN_143a8dc60(param_1 + 0x2c);
  FUN_143b56540(param_1);
  return;
}



// FUNCTION 143ba0ce0 FUN_143ba0ce0 body=666 status=ok
// SIG undefined FUN_143ba0ce0(void)

longlong FUN_143ba0ce0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_40;
  
  if (param_1 != param_2) {
    FUN_143b56620(param_1,param_2);
    puVar1 = *(undefined8 **)(param_1 + 0x350);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x350) = 0;
    if (*(longlong *)(param_2 + 0x350) != 0) {
      lVar3 = FUN_143a8d310(0x498);
      if (lVar3 == 0) {
        local_40 = 0;
      }
      else {
        local_40 = FUN_143bfba80(lVar3,*(undefined8 *)(param_2 + 0x350));
      }
      *(undefined8 *)(param_1 + 0x350) = local_40;
    }
    *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(param_2 + 0x360);
    *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_2 + 0x368);
    *(undefined1 *)(param_1 + 0x380) = *(undefined1 *)(param_2 + 0x380);
    FUN_143a8dcd0(param_1 + 0x160,param_2 + 0x160);
    cVar2 = FUN_143acc2f0(param_1 + 0x1d8,param_2 + 0x1d8);
    if (cVar2 != '\0') {
      puVar1 = *(undefined8 **)(param_1 + 0x358);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      *(undefined8 *)(param_1 + 0x358) = 0;
      FUN_143a8adb0(param_1 + 0x1d8,param_2 + 0x1d8);
    }
    if (*(longlong *)(param_2 + 0x388) != 0) {
      uVar4 = (**(code **)(**(longlong **)(param_2 + 0x388) + 0x18))
                        (*(undefined8 *)(param_2 + 0x388));
      *(undefined8 *)(param_1 + 0x388) = uVar4;
    }
  }
  return param_1;
}



// FUNCTION 143ba0f80 FUN_143ba0f80 body=242 status=ok
// SIG undefined FUN_143ba0f80(void)

undefined1 FUN_143ba0f80(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_18;
  
  cVar1 = FUN_143b567b0(param_1,param_2);
  if (cVar1 == '\0') {
    local_18 = 0;
  }
  else {
    cVar1 = FUN_143a8dd00(param_1 + 0x160,param_2 + 0x160);
    if ((((cVar1 == '\0') || (*(longlong *)(param_1 + 0x350) == 0)) ||
        (*(longlong *)(param_2 + 0x350) == 0)) ||
       (((cVar1 = FUN_143bfbc10(*(undefined8 *)(param_1 + 0x350),*(undefined8 *)(param_2 + 0x350)),
         cVar1 == '\0' || (*(char *)(param_1 + 0x380) != *(char *)(param_2 + 0x380))) ||
        (*(double *)(param_1 + 0x360) != *(double *)(param_2 + 0x360))))) {
      local_18 = 0;
    }
    else {
      local_18 = 1;
    }
  }
  return local_18;
}



// FUNCTION 143ba1080 FUN_143ba1080 body=54 status=ok
// SIG undefined FUN_143ba1080(void)

undefined8 FUN_143ba1080(undefined8 param_1,uint param_2)

{
  FUN_143ba0a80(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143ba10c0 FUN_143ba10c0 body=78 status=ok
// SIG undefined FUN_143ba10c0(void)

void FUN_143ba10c0(undefined8 param_1,int param_2,longlong param_3,int param_4)

{
  if ((-1 < param_2) && (param_2 < param_4)) {
    FUN_143a8e070(param_1,param_3 + (longlong)param_2 * 0x28);
  }
  return;
}



// FUNCTION 143ba1110 FUN_143ba1110 body=262 status=ok
// SIG undefined FUN_143ba1110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143ba1110(undefined8 param_1,int param_2,longlong param_3,int param_4,longlong param_5,
                  undefined8 param_6)

{
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_108;
  call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
  local_f8 [224];
  ulonglong local_18;
  
  local_108 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if ((-1 < param_2) && (param_2 < param_4)) {
    if (param_5 == 0) {
      FUN_143a8e070(param_1,param_3 + (longlong)param_2 * 0x28);
    }
    else {
      FUN_143b68520(local_f8,param_3 + (longlong)param_2 * 0x28);
      local_118 = param_6;
      FUN_143c04f50(param_5,local_f8,1,param_1);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
    }
  }
  return;
}



// FUNCTION 143ba1220 FUN_143ba1220 body=1191 status=ok
// SIG undefined FUN_143ba1220(void)

undefined8
FUN_143ba1220(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  char *_Str2;
  char *_Str1;
  undefined8 uVar6;
  bool local_73;
  ushort local_70;
  int local_6c;
  int local_68;
  int local_64;
  longlong *local_60;
  longlong *local_48;
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    local_60 = (longlong *)0x0;
    local_48 = param_2;
    if (param_2 != (longlong *)param_1[0x29]) {
      _Str2 = (char *)(**(code **)(*(longlong *)param_1[0x29] + 0xb0))(param_1[0x29]);
      _Str1 = (char *)(**(code **)(*param_2 + 0xb0))(param_2);
      iVar4 = _guard_xfg_dispatch_icall_nop(_Str1,_Str2);
      if (iVar4 != 0) {
        local_60 = (longlong *)(**(code **)(*(longlong *)param_1[0x29] + 0x10))(param_1[0x29]);
        if (local_60 == (longlong *)0x0) {
          *param_5 = 7;
          return param_3;
        }
        uVar6 = FUN_143b52810(param_2,param_5);
        FUN_143b55550(local_60,uVar6,param_5);
        uVar6 = FUN_143b528b0(param_2);
        FUN_143b556c0(local_60,uVar6);
        local_48 = local_60;
      }
    }
    local_73 = false;
    local_70 = 0;
    local_68 = 0;
    local_64 = 0;
    uVar5 = (**(code **)(*param_1 + 200))(param_1,1,param_5);
    local_6c = 0;
    while ((iVar4 = FUN_143a904f0(param_1 + 0x2c), local_6c < iVar4 &&
           (cVar1 = FUN_143a8b110(*param_5), cVar1 != '\0'))) {
      uVar2 = FUN_143a8e4f0(param_1 + 0x2c,local_6c);
      if ((uVar2 != local_70) && (0 < local_68)) {
        FUN_143ba5e10(param_1,param_3,local_70,local_68,uVar5,local_64,param_4,local_48,param_5);
        local_64 = local_64 + 1;
        local_68 = 0;
      }
      if (uVar2 == 0x27) {
        iVar4 = FUN_143a904f0(param_1 + 0x2c);
        if ((local_6c + 1 < iVar4) &&
           (sVar3 = FUN_143a8e4f0(param_1 + 0x2c,local_6c + 1), sVar3 == 0x27)) {
          FUN_143acc590(param_3,0x27);
          local_6c = local_6c + 1;
        }
        else {
          local_73 = !local_73;
        }
      }
      else if ((local_73) ||
              (((uVar2 < 0x61 || (0x7a < uVar2)) && ((uVar2 < 0x41 || (0x5a < uVar2)))))) {
        FUN_143acc590(param_3,uVar2);
      }
      else {
        local_68 = local_68 + 1;
        local_70 = uVar2;
      }
      local_6c = local_6c + 1;
    }
    if (0 < local_68) {
      FUN_143ba5e10(param_1,param_3,local_70,local_68,uVar5,local_64,param_4,local_48,param_5);
    }
    if ((local_60 != (longlong *)0x0) && (local_60 != (longlong *)0x0)) {
      (**(code **)*local_60)(local_60,1);
    }
  }
  return param_3;
}



// FUNCTION 143ba16d0 FUN_143ba16d0 body=180 status=ok
// SIG undefined FUN_143ba16d0(void)

void FUN_143ba16d0(longlong param_1,undefined8 param_2)

{
  undefined4 local_28 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_28[0] = 0;
  FUN_143b568f0(param_1,param_2);
  local_20 = *(undefined8 **)(param_1 + 0x350);
  local_18 = local_20;
  if (local_20 == (undefined8 *)0x0) {
    local_10 = 0;
  }
  else {
    local_10 = (**(code **)*local_20)(local_20,1);
  }
  *(undefined8 *)(param_1 + 0x350) = 0;
  FUN_143ba3080(param_1,param_1 + 0x1d8,*(undefined8 *)(param_1 + 0x148),local_28);
  FUN_143ba2fa0(param_1);
  return;
}



// FUNCTION 143ba1790 FUN_143ba1790 body=107 status=ok
// SIG undefined FUN_143ba1790(void)

void FUN_143ba1790(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x350);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x350) = param_2;
  return;
}



// FUNCTION 143ba1800 FUN_143ba1800 body=107 status=ok
// SIG undefined FUN_143ba1800(void)

void FUN_143ba1800(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x358);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x358) = param_2;
  return;
}



// FUNCTION 143ba1870 FUN_143ba1870 body=184 status=ok
// SIG undefined FUN_143ba1870(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143ba1870(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  uVar1 = FUN_143bfe360();
  local_58 = FUN_143a8dad0(local_40,uVar1);
  local_68 = param_3;
  local_50 = local_58;
  FUN_143bab7d0(param_2,param_1 + 0x160,*(longlong *)(param_1 + 0x350) + 0x318,local_58);
  FUN_143a8dc60(local_40);
  return;
}



// FUNCTION 143ba1930 FUN_143ba1930 body=43 status=ok
// SIG undefined FUN_143ba1930(void)

void FUN_143ba1930(longlong param_1,undefined8 param_2)

{
  FUN_143a8dcd0(param_1 + 0x160,param_2);
  return;
}



// FUNCTION 143ba1960 FUN_143ba1960 body=643 status=ok
// SIG undefined FUN_143ba1960(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143ba1960(longlong param_1,undefined8 param_2,int param_3,int param_4,char param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  longlong local_50;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FUN_143a8ac30(local_38);
  iVar1 = FUN_143a904f0(param_2);
  if ((((iVar1 < param_3) || (param_3 < 0)) || (param_4 < 0)) ||
     (iVar1 = FUN_143a904f0(param_1 + 0x160), iVar1 < param_4)) {
    local_44 = param_3;
    FUN_143a8dc60(local_38);
    return local_44;
  }
  local_78 = 0;
  local_50 = _guard_xfg_dispatch_icall_nop
                       (*(undefined8 *)(param_1 + 0x150),0,
                        &icu_53::NumberFormat::RTTI_Type_Descriptor,
                        &icu_53::DecimalFormat::RTTI_Type_Descriptor);
  if (local_50 != 0) {
    if (param_5 == '\0') {
      uVar2 = FUN_143b42740(local_50,local_38);
      FUN_143a8dcd0(local_38,uVar2);
    }
    else {
      uVar2 = FUN_143b42680(local_50,local_38);
      FUN_143a8dcd0(local_38,uVar2);
    }
  }
  iVar1 = FUN_143a904f0(local_38);
  if (iVar1 < 1) {
    local_54 = param_3;
    FUN_143a8dc60(local_38);
    return local_54;
  }
  local_68 = FUN_143ba1c50(param_1,local_38,param_1 + 0x160,param_4);
  local_64 = FUN_143ba1c50(param_1,local_38,param_2,param_3);
  iVar1 = FUN_143a904f0(local_38);
  local_60 = FUN_143ba1c50(param_1,local_38,param_2,param_3 - iVar1);
  if (((-1 < local_64) && (-1 < local_68)) && (local_64 == local_68)) {
    local_5c = param_3;
    FUN_143a8dc60(local_38);
    return local_5c;
  }
  if (((-1 < local_60) && (-1 < local_68)) && (local_60 == local_68)) {
    local_48 = FUN_143a904f0(local_38);
    local_48 = param_3 - local_48;
    FUN_143a8dc60(local_38);
    return local_48;
  }
  local_58 = param_3;
  FUN_143a8dc60(local_38);
  return local_58;
}



// FUNCTION 143ba1bf0 CreateInternalContext body=92 status=ok
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
  
  lVar1 = FUN_143a8d310(0x390);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143ba0970(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143ba1c50 FUN_143ba1c50 body=522 status=ok
// SIG undefined FUN_143ba1c50(void)

int FUN_143ba1c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int local_res20;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_24 = 0;
  local_res20 = param_4;
  do {
    while( true ) {
      iVar3 = FUN_143a904f0(param_2);
      if (iVar3 <= local_24) {
        return local_res20 - param_4;
      }
      local_20 = FUN_143a8e3e0(param_2,local_24);
      if (local_20 < 0x10000) {
        local_18 = 1;
      }
      else {
        local_18 = 2;
      }
      local_1c = local_18;
      cVar2 = FUN_143b28380(local_20);
      if (cVar2 != '\0') break;
      iVar3 = FUN_143a904f0(param_3);
      if ((iVar3 <= local_res20) || (uVar4 = FUN_143a8e3e0(param_3,local_res20), uVar4 != local_20))
      {
        return -1;
      }
      local_24 = local_24 + local_18;
      local_res20 = local_res20 + local_18;
    }
    bVar1 = false;
    do {
      iVar3 = FUN_143a904f0(param_3);
      if ((iVar3 <= local_res20) || (uVar4 = FUN_143a8e3e0(param_3,local_res20), uVar4 != local_20))
      break;
      bVar1 = true;
      local_24 = local_24 + local_1c;
      local_res20 = local_res20 + local_1c;
      iVar3 = FUN_143a904f0(param_2);
      if (local_24 == iVar3) break;
      local_20 = FUN_143a8e3e0(param_2,local_24);
      if (local_20 < 0x10000) {
        local_14 = 1;
      }
      else {
        local_14 = 2;
      }
      local_1c = local_14;
      cVar2 = FUN_143b28380(local_20);
    } while (cVar2 != '\0');
    uVar5 = FUN_143ba5d30(param_1,param_2,local_24);
    iVar3 = FUN_143ba5d90(param_1,param_3,local_res20);
    if ((iVar3 == local_res20) && (!bVar1)) {
      return -1;
    }
    local_24 = FUN_143ba5d90(param_1,param_2,uVar5);
    local_res20 = iVar3;
  } while( true );
}



// FUNCTION 143ba1e60 FUN_143ba1e60 body=2878 status=ok
// SIG undefined FUN_143ba1e60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143ba1e60(longlong param_1,int param_2,int param_3,undefined8 param_4,undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_2f8 [32];
  code *local_2d8;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  int local_2a0;
  int local_29c;
  int local_298;
  int local_294;
  int local_290;
  undefined1 local_288 [32];
  int local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  undefined8 local_230;
  longlong local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 local_210;
  longlong local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined1 local_1f0 [40];
  undefined1 local_1c8 [216];
  undefined1 local_f0 [216];
  ulonglong local_18;
  
  local_1f8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    FUN_143ba2ef0(param_1,0,param_4,param_5);
    cVar1 = FUN_143a8b0e0(*param_5);
    if (cVar1 == '\0') {
      if (*(longlong *)(param_1 + 0x148) == 0) {
        local_230 = 0;
      }
      else {
        local_230 = (**(code **)(**(longlong **)(param_1 + 0x148) + 0xb0))
                              (*(undefined8 *)(param_1 + 0x148));
      }
      FUN_143b91920(local_288,param_4,local_230,param_5);
      local_2b0 = FUN_143b92290(local_288,"DateTimePatterns",param_5);
      cVar1 = FUN_143a8b0e0(*param_5);
      if (cVar1 == '\0') {
        iVar2 = FUN_143aa4d80(local_2b0);
        if (iVar2 < 9) {
          *param_5 = 3;
          FUN_143b919a0(local_288);
        }
        else {
          local_210 = FUN_143aa4780(local_2b0,0,param_5);
          uVar3 = FUN_143aa4780(local_2b0,1,param_5);
          FUN_143b69ce0(param_1,uVar3,local_210);
          FUN_143ba3080(param_1,param_4,*(undefined8 *)(param_1 + 0x148),param_5);
          cVar1 = FUN_143a8b0e0(*param_5);
          if (cVar1 == '\0') {
            if (*(longlong *)(param_1 + 0x350) == 0) {
              *param_5 = 7;
              FUN_143b919a0(local_288);
            }
            else {
              local_2bc = 0;
              FUN_143a90e90(param_1 + 0x188);
              FUN_143a90e90(param_1 + 0x1b0);
              if ((param_2 == -1) || (param_3 == -1)) {
                if (param_2 == -1) {
                  if (param_3 == -1) {
                    *param_5 = 3;
                  }
                  else {
                    local_2c8 = FUN_143aa30d0(local_2b0,param_3,0,param_5);
                    cVar1 = FUN_143a8b0e0(*param_5);
                    if (cVar1 != '\0') {
                      *param_5 = 3;
                      FUN_143b919a0(local_288);
                      return;
                    }
                    local_2a0 = FUN_143aa54c0(local_2c8);
                    if (local_2a0 == 0) {
                      local_2b8 = FUN_143aa5430(local_2c8,&local_2c0,param_5);
                    }
                    else {
                      if (local_2a0 != 8) {
                        *param_5 = 3;
                        FUN_143aa2ef0(local_2c8);
                        FUN_143b919a0(local_288);
                        return;
                      }
                      local_2b8 = FUN_143aa4da0(local_2c8,0,&local_2c0,param_5);
                      local_2a8 = FUN_143aa4da0(local_2c8,1,&local_2bc,param_5);
                      FUN_143a90d80(param_1 + 0x188,1,local_2a8,local_2bc);
                    }
                    FUN_143a90d80(param_1 + 0x160,1,local_2b8,local_2c0);
                    FUN_143aa2ef0(local_2c8);
                  }
                }
                else {
                  local_2c8 = FUN_143aa30d0(local_2b0,param_2,0,param_5);
                  cVar1 = FUN_143a8b0e0(*param_5);
                  if (cVar1 != '\0') {
                    *param_5 = 3;
                    FUN_143b919a0(local_288);
                    return;
                  }
                  local_290 = FUN_143aa54c0(local_2c8);
                  if (local_290 == 0) {
                    local_2b8 = FUN_143aa5430(local_2c8,&local_2c0,param_5);
                  }
                  else {
                    if (local_290 != 8) {
                      *param_5 = 3;
                      FUN_143aa2ef0(local_2c8);
                      FUN_143b919a0(local_288);
                      return;
                    }
                    local_2b8 = FUN_143aa4da0(local_2c8,0,&local_2c0,param_5);
                    local_2a8 = FUN_143aa4da0(local_2c8,1,&local_2bc,param_5);
                    FUN_143a90d80(param_1 + 0x188,1,local_2a8,local_2bc);
                  }
                  FUN_143a90d80(param_1 + 0x160,1,local_2b8,local_2c0);
                  FUN_143aa2ef0(local_2c8);
                }
              }
              else {
                local_2d8 = Concurrency::
                            call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                            ::
                            ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                ;
                _eh_vector_constructor_iterator_(local_1c8,0xd8,2,FUN_143b686d0);
                local_2c8 = FUN_143aa30d0(local_2b0,param_2,0,param_5);
                cVar1 = FUN_143a8b0e0(*param_5);
                if (cVar1 != '\0') {
                  *param_5 = 3;
                  _eh_vector_destructor_iterator_
                            (local_1c8,0xd8,2,
                             Concurrency::
                             call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                             ::
                             ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                            );
                  FUN_143b919a0(local_288);
                  return;
                }
                local_294 = FUN_143aa54c0(local_2c8);
                if (local_294 == 0) {
                  local_2b8 = FUN_143aa5430(local_2c8,&local_2c0,param_5);
                }
                else {
                  if (local_294 != 8) {
                    *param_5 = 3;
                    FUN_143aa2ef0(local_2c8);
                    _eh_vector_destructor_iterator_
                              (local_1c8,0xd8,2,
                               Concurrency::
                               call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                               ::
                               ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                              );
                    FUN_143b919a0(local_288);
                    return;
                  }
                  local_2b8 = FUN_143aa4da0(local_2c8,0,&local_2c0,param_5);
                  local_2a8 = FUN_143aa4da0(local_2c8,1,&local_2bc,param_5);
                  FUN_143a90d80(param_1 + 0x1b0,1,local_2a8,local_2bc);
                }
                FUN_143aa2ef0(local_2c8);
                local_238 = FUN_143a8d310(0x28);
                if (local_238 == 0) {
                  local_260 = 0;
                }
                else {
                  local_260 = FUN_143a8d4f0(local_238,1,local_2b8,local_2c0);
                }
                local_208 = local_260;
                local_248 = local_260;
                if (local_260 == 0) {
                  *param_5 = 7;
                  _eh_vector_destructor_iterator_
                            (local_1c8,0xd8,2,
                             Concurrency::
                             call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                             ::
                             ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                            );
                  FUN_143b919a0(local_288);
                  return;
                }
                FUN_143b68d30(local_1c8,local_260);
                local_2c8 = FUN_143aa30d0(local_2b0,param_3,0,param_5);
                cVar1 = FUN_143a8b0e0(*param_5);
                if (cVar1 != '\0') {
                  *param_5 = 3;
                  _eh_vector_destructor_iterator_
                            (local_1c8,0xd8,2,
                             Concurrency::
                             call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                             ::
                             ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                            );
                  FUN_143b919a0(local_288);
                  return;
                }
                local_29c = FUN_143aa54c0(local_2c8);
                if (local_29c == 0) {
                  local_2b8 = FUN_143aa5430(local_2c8,&local_2c0,param_5);
                }
                else {
                  if (local_29c != 8) {
                    *param_5 = 3;
                    FUN_143aa2ef0(local_2c8);
                    _eh_vector_destructor_iterator_
                              (local_1c8,0xd8,2,
                               Concurrency::
                               call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                               ::
                               ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                              );
                    FUN_143b919a0(local_288);
                    return;
                  }
                  local_2b8 = FUN_143aa4da0(local_2c8,0,&local_2c0,param_5);
                  local_2a8 = FUN_143aa4da0(local_2c8,1,&local_2bc,param_5);
                  FUN_143a90d80(param_1 + 0x188,1,local_2a8,local_2bc);
                }
                FUN_143aa2ef0(local_2c8);
                local_258 = FUN_143a8d310(0x28);
                if (local_258 == 0) {
                  local_250 = 0;
                }
                else {
                  local_250 = FUN_143a8d4f0(local_258,1,local_2b8,local_2c0);
                }
                local_228 = local_250;
                local_240 = local_250;
                if (local_250 == 0) {
                  *param_5 = 7;
                  _eh_vector_destructor_iterator_
                            (local_1c8,0xd8,2,
                             Concurrency::
                             call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                             ::
                             ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                            );
                  FUN_143b919a0(local_288);
                  return;
                }
                FUN_143b68d30(local_f0,local_250);
                local_298 = 8;
                local_268 = FUN_143aa4d80(local_2b0);
                if (0xc < local_268) {
                  local_298 = param_3 + 5;
                }
                local_2b8 = FUN_143aa4da0(local_2b0,local_298,&local_2c0,param_5);
                local_218 = param_1 + 0x160;
                local_220 = FUN_143a8d4f0(local_1f0,1,local_2b8,local_2c0);
                local_2d8 = (code *)param_5;
                local_200 = local_220;
                FUN_143c04f50(local_220,local_1c8,2,local_218);
                FUN_143a8dc60(local_1f0);
                _eh_vector_destructor_iterator_
                          (local_1c8,0xd8,2,
                           Concurrency::
                           call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                           ::
                           ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                          );
              }
              FUN_143ba2cf0(param_1,param_4,param_5);
              FUN_143b919a0(local_288);
            }
          }
          else {
            FUN_143b919a0(local_288);
          }
        }
      }
      else {
        FUN_143b919a0(local_288);
      }
    }
  }
  return;
}



// FUNCTION 143ba29a0 FUN_143ba29a0 body=123 status=ok
// SIG undefined FUN_143ba29a0(void)

undefined8
FUN_143ba29a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20 [32];
  
  local_28 = 0xfffffffffffffffe;
  local_38[0] = 0;
  TopologyObject(local_20,param_4);
  local_30 = FUN_143ba1220(param_1,param_2,param_3,local_20,local_38);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(local_20);
  return local_30;
}



// FUNCTION 143ba2a20 FUN_143ba2a20 body=126 status=ok
// SIG undefined FUN_143ba2a20(void)

undefined8
FUN_143ba2a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 local_28 [40];
  
  FUN_143b76a00(local_28,param_4,param_5);
  uVar1 = FUN_143ba1220(param_1,param_2,param_3,local_28,param_5);
  FUN_143b76b40(local_28);
  return uVar1;
}



// FUNCTION 143ba2aa0 FUN_143ba2aa0 body=18 status=ok
// SIG undefined FUN_143ba2aa0(void)

undefined8 FUN_143ba2aa0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x350);
}



// FUNCTION 143ba2ac0 FUN_143ba2ac0 body=19 status=ok
// SIG undefined FUN_143ba2ac0(void)

void FUN_143ba2ac0(void)

{
  FUN_143ba2b20();
  return;
}



// FUNCTION 143ba2ae0 FUN_143ba2ae0 body=60 status=ok
// SIG undefined FUN_143ba2ae0(void)

undefined8 FUN_143ba2ae0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x370) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x150);
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x370) + (longlong)param_2 * 8);
  }
  return uVar1;
}



// FUNCTION 143ba2b20 FUN_143ba2b20 body=8 status=ok
// SIG undefined FUN_143ba2b20(void)

undefined * FUN_143ba2b20(void)

{
  return &DAT_146bc8470;
}



// FUNCTION 143ba2b30 FUN_143ba2b30 body=24 status=ok
// SIG undefined FUN_143ba2b30(void)

void FUN_143ba2b30(undefined8 param_1)

{
  FUN_143bab910(param_1);
  return;
}



// FUNCTION 143ba2b50 FUN_143ba2b50 body=51 status=ok
// SIG undefined FUN_143ba2b50(void)

longlong FUN_143ba2b50(longlong param_1)

{
  FUN_143a8b520(param_1);
  return *(longlong *)(param_1 + 0xd0) + (longlong)*(int *)(param_1 + 0x20);
}



// FUNCTION 143ba2b90 FUN_143ba2b90 body=340 status=ok
// SIG undefined FUN_143ba2b90(void)

void FUN_143ba2b90(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  int local_18;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if ((cVar1 == '\0') &&
     ((cVar1 = FUN_143a90330(param_1 + 0x188), cVar1 == '\0' ||
      (cVar1 = FUN_143a90330(param_1 + 0x1b0), cVar1 == '\0')))) {
    FUN_143ab2410(&DAT_146bc8440);
    if (*(longlong *)(param_1 + 0x370) == 0) {
      uVar2 = FUN_143aa7a40(0x118);
      *(undefined8 *)(param_1 + 0x370) = uVar2;
      if (*(longlong *)(param_1 + 0x370) == 0) {
        *param_3 = 7;
      }
      else {
        for (local_18 = 0; local_18 < 0x23; local_18 = local_18 + 1) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x370) + (longlong)local_18 * 8) =
               *(undefined8 *)(param_1 + 0x150);
        }
      }
    }
    FUN_143ab2470(&DAT_146bc8440);
    FUN_143ba5480(param_1,param_2,param_1 + 0x188,0,param_3);
    FUN_143ba5480(param_1,param_2,param_1 + 0x1b0,1,param_3);
  }
  return;
}



// FUNCTION 143ba2cf0 FUN_143ba2cf0 body=349 status=ok
// SIG undefined FUN_143ba2cf0(void)

void FUN_143ba2cf0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    uVar2 = FUN_143b37290(param_2,param_3);
    *(undefined8 *)(param_1 + 0x150) = uVar2;
    if ((*(longlong *)(param_1 + 0x150) == 0) || (cVar1 = FUN_143a8b110(*param_3), cVar1 == '\0')) {
      cVar1 = FUN_143a8b110(*param_3);
      if (cVar1 != '\0') {
        *param_3 = 2;
      }
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x150) + 200))(*(undefined8 *)(param_1 + 0x150),0);
      plVar3 = (longlong *)
               _guard_xfg_dispatch_icall_nop
                         (*(undefined8 *)(param_1 + 0x150),0,
                          &icu_53::NumberFormat::RTTI_Type_Descriptor,
                          &icu_53::DecimalFormat::RTTI_Type_Descriptor,0);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x208))(plVar3,0);
      }
      (**(code **)(**(longlong **)(param_1 + 0x150) + 0xb0))(*(undefined8 *)(param_1 + 0x150),1);
      (**(code **)(**(longlong **)(param_1 + 0x150) + 0xe8))(*(undefined8 *)(param_1 + 0x150),0);
      FUN_143ba2b90(param_1,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 143ba2e50 FUN_143ba2e50 body=147 status=ok
// SIG undefined FUN_143ba2e50(void)

void FUN_143ba2e50(longlong *param_1)

{
  undefined4 local_18 [6];
  
  local_18[0] = 0;
  (**(code **)(*param_1 + 0xd0))(param_1,0,1,local_18);
  (**(code **)(*param_1 + 0xd0))(param_1,1,1,local_18);
  (**(code **)(*param_1 + 0xd0))(param_1,2,1,local_18);
  (**(code **)(*param_1 + 0xd0))(param_1,3,1,local_18);
  return;
}



// FUNCTION 143ba2ef0 FUN_143ba2ef0 body=167 status=ok
// SIG undefined FUN_143ba2ef0(void)

undefined8 FUN_143ba2ef0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong local_18;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    local_18 = param_2;
    if (param_2 == 0) {
      local_18 = FUN_143b4ac10();
    }
    uVar2 = FUN_143b4ff20(local_18,param_3,param_4);
    *(undefined8 *)(param_1 + 0x148) = uVar2;
  }
  cVar1 = FUN_143a8b110(*param_4);
  if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x148) == 0)) {
    *param_4 = 7;
  }
  return *(undefined8 *)(param_1 + 0x148);
}



// FUNCTION 143ba2fa0 FUN_143ba2fa0 body=221 status=ok
// SIG undefined FUN_143ba2fa0(void)

void FUN_143ba2fa0(longlong param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x148) != 0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x148) + 0x160))
                      (*(undefined8 *)(param_1 + 0x148));
    *(undefined1 *)(param_1 + 0x380) = uVar1;
    if (*(char *)(param_1 + 0x380) == '\0') {
      *(undefined8 *)(param_1 + 0x360) = 0x10000000000000;
      *(undefined4 *)(param_1 + 0x368) = 0xffffffff;
    }
    else {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x148) + 0x168))
                        (*(undefined8 *)(param_1 + 0x148));
      *(undefined8 *)(param_1 + 0x360) = uVar3;
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x148) + 0x170))
                        (*(undefined8 *)(param_1 + 0x148));
      *(undefined4 *)(param_1 + 0x368) = uVar2;
    }
  }
  return;
}



// FUNCTION 143ba3080 FUN_143ba3080 body=238 status=ok
// SIG undefined FUN_143ba3080(void)

void FUN_143ba3080(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_38;
  undefined8 local_28;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    lVar2 = FUN_143a8d310(0x498);
    if (lVar2 == 0) {
      local_28 = 0;
    }
    else {
      if (param_3 == (longlong *)0x0) {
        local_38 = 0;
      }
      else {
        local_38 = (**(code **)(*param_3 + 0xb0))(param_3);
      }
      local_28 = FUN_143bfbb00(lVar2,param_2,local_38,param_4);
    }
    *(undefined8 *)(param_1 + 0x350) = local_28;
    if (*(longlong *)(param_1 + 0x350) == 0) {
      *param_4 = 7;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x350) = 0;
  }
  return;
}



// FUNCTION 143ba3170 FUN_143ba3170 body=179 status=ok
// SIG undefined FUN_143ba3170(void)

ulonglong FUN_143ba3170(undefined8 param_1,int param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  int local_10;
  
  if (param_2 < 1) {
    uVar4 = in_RAX & 0xffffffffffffff00;
  }
  else {
    param_2 = param_2 + -1;
    sVar2 = FUN_143a8e4f0(param_1,param_2);
    uVar4 = FUN_143bfe310(sVar2);
    local_10 = param_2;
    if ((int)uVar4 == 0x23) {
      uVar4 = uVar4 & 0xffffffffffffff00;
    }
    else {
      do {
        local_10 = local_10 + -1;
        sVar3 = FUN_143a8e4f0(param_1,local_10);
      } while (sVar3 == sVar2);
      cVar1 = FUN_143c015e0((int)uVar4,param_2 - local_10);
      uVar4 = (ulonglong)(cVar1 == '\0');
    }
  }
  return uVar4;
}



// FUNCTION 143ba3230 FUN_143ba3230 body=151 status=ok
// SIG undefined FUN_143ba3230(void)

ulonglong FUN_143ba3230(undefined8 param_1,int param_2)

{
  short sVar1;
  short sVar2;
  ulonglong uVar3;
  int local_14;
  
  uVar3 = FUN_143a904f0(param_1);
  if (param_2 < (int)uVar3) {
    sVar1 = FUN_143a8e4f0(param_1,param_2);
    uVar3 = FUN_143bfe310(sVar1);
    local_14 = param_2;
    if ((int)uVar3 == 0x23) {
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
      do {
        local_14 = local_14 + 1;
        sVar2 = FUN_143a8e4f0(param_1,local_14);
      } while (sVar2 == sVar1);
      uVar3 = FUN_143c015e0((int)uVar3,local_14 - param_2);
    }
  }
  else {
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  return uVar3;
}



// FUNCTION 143ba32d0 FUN_143ba32d0 body=32 status=ok
// SIG undefined FUN_143ba32d0(void)

void FUN_143ba32d0(undefined2 param_1,undefined4 param_2)

{
  FUN_143c01660(param_1,param_2);
  return;
}



// FUNCTION 143ba32f0 FUN_143ba32f0 body=1279 status=ok
// SIG undefined FUN_143ba32f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_143ba32f0(undefined8 param_1,int *param_2,undefined8 param_3,int *param_4,char param_5,
             char param_6)

{
  char cVar1;
  undefined2 uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  undefined1 auStack_b8 [32];
  int local_98;
  char local_94;
  ushort local_90;
  char local_8c;
  undefined1 local_8b;
  int local_88;
  int local_84;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined2 local_7c;
  undefined2 local_78;
  undefined2 local_74;
  int local_70;
  longlong *local_68;
  int local_60;
  uint local_5c;
  int local_58;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_94 = '\0';
  FUN_143a8ac30(local_40);
  local_84 = *param_2;
  while ((iVar5 = FUN_143a904f0(param_1), local_84 < iVar5 &&
         ((local_90 = FUN_143a8e4f0(param_1,local_84), local_94 != '\0' ||
          (((local_90 < 0x41 || (0x5a < local_90)) && ((local_90 < 0x61 || (0x7a < local_90)))))))))
  {
    if (local_90 == 0x27) {
      local_60 = local_84 + 1;
      iVar5 = FUN_143a904f0(param_1);
      if ((local_60 < iVar5) && (sVar4 = FUN_143a8e4f0(param_1,local_84 + 1), sVar4 == 0x27)) {
        local_84 = local_84 + 1;
        goto LAB_143ba3428;
      }
      local_94 = local_94 == '\0';
      local_8b = local_94;
    }
    else {
LAB_143ba3428:
      FUN_143acc590(local_40,local_90);
    }
    local_84 = local_84 + 1;
  }
  local_98 = *param_4;
  if (param_5 != '\0') {
    FUN_143e21d60(local_40);
    while (iVar5 = FUN_143a904f0(param_3), local_98 < iVar5) {
      uVar2 = FUN_143a8e4f0(param_3,local_98);
      cVar1 = FUN_143a9e310(uVar2);
      if (cVar1 == '\0') break;
      local_98 = local_98 + 1;
    }
  }
  local_88 = 0;
LAB_143ba34a9:
  do {
    iVar5 = FUN_143a904f0(local_40);
    if ((iVar5 <= local_88) || (iVar5 = FUN_143a904f0(param_3), iVar5 <= local_98))
    goto LAB_143ba36e8;
    local_8c = '\0';
    while (iVar5 = FUN_143a904f0(local_40), local_88 < iVar5) {
      uVar2 = FUN_143a8e4f0(local_40,local_88);
      cVar1 = FUN_143b28380(uVar2);
      if (cVar1 == '\0') break;
      local_8c = '\x01';
      local_88 = local_88 + 1;
    }
    if (local_8c != '\0') {
      local_58 = local_98;
      while (iVar5 = FUN_143a904f0(param_3), local_98 < iVar5) {
        local_7c = FUN_143a8e4f0(param_3,local_98);
        cVar1 = FUN_143a9e2d0(local_7c);
        if ((cVar1 == '\0') && (cVar1 = FUN_143b28380(local_7c), cVar1 == '\0')) break;
        local_98 = local_98 + 1;
      }
      if ((param_5 == '\0') && (local_98 == local_58)) {
        local_80 = 0;
        FUN_143a8dc60(local_40);
        return local_80;
      }
      iVar5 = FUN_143a904f0(local_40);
      if (iVar5 <= local_88) goto LAB_143ba36e8;
    }
    iVar5 = FUN_143a904f0(param_3);
    if (local_98 < iVar5) {
      uVar3 = FUN_143a8e4f0(local_40,local_88);
      local_5c = (uint)uVar3;
      uVar3 = FUN_143a8e4f0(param_3,local_98);
      if (local_5c == uVar3) {
        local_88 = local_88 + 1;
        local_98 = local_98 + 1;
        goto LAB_143ba34a9;
      }
    }
    if (param_5 == '\0') break;
    if (((local_98 != *param_4) || (sVar4 = FUN_143a8e4f0(param_3,local_98), sVar4 != 0x2e)) ||
       (cVar1 = FUN_143ba3170(param_1,*param_2), cVar1 == '\0')) {
      local_74 = FUN_143a8e4f0(param_3,local_98);
      cVar1 = FUN_143b28380(local_74);
      if (cVar1 == '\0') break;
      goto LAB_143ba36e8;
    }
    local_98 = local_98 + 1;
  } while( true );
  if (param_6 == '\0') {
    local_7f = 0;
    FUN_143a8dc60(local_40);
    return local_7f;
  }
LAB_143ba36e8:
  if (local_88 < 1) {
    local_68 = (longlong *)0x0;
    uVar2 = FUN_143a8e4f0(param_1,local_84);
    local_70 = FUN_143bfe310(uVar2);
    if (local_70 != 0x23) {
      local_68 = (longlong *)FUN_143c080a0(local_70);
    }
    local_98 = *param_4;
    while ((iVar5 = FUN_143a904f0(param_3), local_98 < iVar5 &&
           (local_78 = FUN_143a8e4f0(param_3,local_98), local_68 != (longlong *)0x0))) {
      local_50 = *local_68;
      cVar1 = (**(code **)(local_50 + 0x30))(local_68,local_78);
      if (cVar1 == '\0') break;
      local_98 = local_98 + 1;
    }
  }
  *param_2 = local_84 + -1;
  *param_4 = local_98;
  local_7e = 1;
  FUN_143a8dc60(local_40);
  return local_7e;
}



// FUNCTION 143ba37f0 FUN_143ba37f0 body=564 status=ok
// SIG undefined FUN_143ba37f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143ba37f0(undefined8 param_1,CFormView *param_2,long param_3,undefined4 param_4,
                 longlong param_5,int param_6,undefined8 param_7)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined4 local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  undefined8 local_70;
  tagVARIANT local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_70 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_98 = 0;
  local_80 = param_6;
  local_88 = 0;
  local_94 = -1;
  FUN_143a8ac30(local_40);
  FUN_143a8ac30(local_68);
  CFormView::accHitTest(param_2,param_3,0x7fffffff,local_68);
  FUN_143aba210(local_68,0);
  for (; local_98 < local_80; local_98 = local_98 + 1) {
    cVar1 = FUN_143ba3e10(local_68,param_5 + (longlong)local_98 * 0x28,local_40,&local_88);
    if (cVar1 != '\0') {
      local_94 = local_98;
    }
  }
  if (-1 < local_94) {
    FUN_143b55270(param_7,param_4,local_94 * 3);
    local_8c = FUN_143a904f0(local_40);
    local_78 = FUN_143a904f0(param_2);
    local_78 = local_78 - param_3;
    for (local_98 = 0; local_98 <= local_78; local_98 = local_98 + 1) {
      local_90 = local_98;
      if (local_98 == 0) {
        local_90 = local_8c;
LAB_143ba3973:
        CFormView::accHitTest(param_2,param_3,local_90,local_68);
        FUN_143aba210(local_68,0);
        cVar1 = FUN_143a8dd00(local_40,local_68);
        if (cVar1 != '\0') {
          local_7c = param_3 + local_90;
          FUN_143a8dc60(local_68);
          FUN_143a8dc60(local_40);
          return local_7c;
        }
      }
      else if (local_98 != local_8c) goto LAB_143ba3973;
    }
  }
  local_84 = -param_3;
  FUN_143a8dc60(local_68);
  FUN_143a8dc60(local_40);
  return local_84;
}



// FUNCTION 143ba3a30 FUN_143ba3a30 body=982 status=ok
// SIG undefined FUN_143ba3a30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143ba3a30(undefined8 param_1,CFormView *param_2,long param_3,int param_4,longlong param_5,
                 int param_6,longlong param_7,longlong *param_8)

{
  char cVar1;
  int iVar2;
  char *_Str1;
  undefined1 auStack_1d8 [32];
  undefined4 *local_1b8;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  uint local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  undefined8 local_178;
  tagVARIANT local_170 [40];
  undefined1 local_148 [40];
  undefined1 local_120 [40];
  call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
  local_f8 [224];
  ulonglong local_18;
  
  local_178 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_18c = param_6;
  local_1a8 = (uint)(param_4 == 7);
  local_194 = 0;
  local_1a4 = 0xffffffff;
  FUN_143a8ac30(local_148);
  local_19c = 0;
  FUN_143a8ac30(local_170);
  CFormView::accHitTest(param_2,param_3,0x7fffffff,local_170);
  FUN_143aba210(local_170,0);
  for (; (int)local_1a8 < local_18c; local_1a8 = local_1a8 + 1) {
    cVar1 = FUN_143ba3e10(local_170,param_5 + (longlong)(int)local_1a8 * 0x28,local_148,&local_194);
    if (cVar1 != '\0') {
      local_1a4 = local_1a8;
      local_19c = 0;
    }
    if (param_7 != 0) {
      local_198 = 0;
      FUN_143a8ac30(local_120);
      FUN_143b68520(local_f8,param_5 + (longlong)(int)local_1a8 * 0x28);
      local_1b8 = &local_198;
      FUN_143c04f50(param_7,local_f8,1,local_120);
      cVar1 = FUN_143a8b110(local_198);
      if ((cVar1 != '\0') &&
         (cVar1 = FUN_143ba3e10(local_170,local_120,local_148,&local_194), cVar1 != '\0')) {
        local_1a4 = local_1a8;
        local_19c = 1;
      }
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      FUN_143a8dc60(local_120);
    }
  }
  if (-1 < (int)local_1a4) {
    _Str1 = (char *)(**(code **)(*param_8 + 0xb0))(param_8);
    iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"hebrew");
    if (((iVar2 == 0) && (param_4 == 2)) && (local_1a4 == 0xd)) {
      FUN_143b55270(param_8,2,6);
    }
    else {
      if (param_4 == 1) {
        local_1a4 = local_1a4 + 1;
      }
      FUN_143b55270(param_8,param_4,local_1a4);
    }
    if (param_7 != 0) {
      FUN_143b55270(param_8,0x16,local_19c);
    }
    local_190 = FUN_143a904f0(local_148);
    local_184 = FUN_143a904f0(param_2);
    local_184 = local_184 - param_3;
    for (local_1a8 = 0; (int)local_1a8 <= local_184; local_1a8 = local_1a8 + 1) {
      local_1a0 = local_1a8;
      if (local_1a8 == 0) {
        local_1a0 = local_190;
LAB_143ba3d4c:
        CFormView::accHitTest(param_2,param_3,local_1a0,local_170);
        FUN_143aba210(local_170,0);
        cVar1 = FUN_143a8dd00(local_148,local_170);
        if (cVar1 != '\0') {
          local_188 = param_3 + local_1a0;
          FUN_143a8dc60(local_170);
          FUN_143a8dc60(local_148);
          return local_188;
        }
      }
      else if (local_1a8 != local_190) goto LAB_143ba3d4c;
    }
  }
  local_180 = -param_3;
  FUN_143a8dc60(local_170);
  FUN_143a8dc60(local_148);
  return local_180;
}



// FUNCTION 143ba3e10 FUN_143ba3e10 body=436 status=ok
// SIG undefined FUN_143ba3e10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_143ba3e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  int local_50;
  int local_48;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  FUN_143a8ac30(local_38);
  uVar3 = UDarwinGameplayFunctionLibrary::GetInSameTeam(local_38,param_2);
  FUN_143aba210(uVar3,0);
  local_50 = FUN_143a904f0(local_38);
  local_48 = local_50;
  if (*param_4 < local_50) {
    local_58 = 0;
    cVar1 = FUN_143b4eac0(param_1,0,local_50,local_38);
    if (cVar1 == '\0') {
      FUN_143a8dcd0(param_3,local_38);
      *param_4 = local_48;
      local_43 = 1;
      FUN_143a8dc60(local_38);
      local_41 = local_43;
    }
    else {
      local_48 = local_48 + -1;
      sVar2 = FUN_143a8e4f0(local_38,local_48);
      if (sVar2 == 0x2e) {
        local_50 = local_48;
        local_58 = 0;
        cVar1 = FUN_143b4eac0(param_1,0,local_48,local_38);
        if (cVar1 == '\0') {
          FUN_143a8dcd0(param_3,local_38);
          FUN_143a99400(param_3,local_48);
          *param_4 = local_48;
          local_42 = 1;
          FUN_143a8dc60(local_38);
          return local_42;
        }
      }
      local_44 = 0;
      FUN_143a8dc60(local_38);
      local_41 = local_44;
    }
  }
  else {
    local_41 = 0;
    FUN_143a8dc60(local_38);
  }
  return local_41;
}



// FUNCTION 143ba3fd0 FUN_143ba3fd0 body=4442 status=ok
// SIG undefined FUN_143ba3fd0(void)

void FUN_143ba3fd0(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  char *_Str1;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong in_stack_fffffffffffffdf8;
  longlong in_stack_fffffffffffffe00;
  uint7 uVar10;
  longlong in_stack_fffffffffffffe08;
  uint7 uVar11;
  undefined4 local_1b8;
  int local_1b4;
  ushort local_1b0;
  char local_1ac [4];
  int local_1a8;
  char local_1a4;
  char local_1a3;
  int local_1a0;
  int local_19c;
  undefined1 local_198;
  char local_197;
  int local_194;
  int local_190 [2];
  longlong *local_188;
  int local_180;
  int local_17c;
  int local_178 [2];
  undefined8 *local_170;
  longlong *local_168;
  int local_160;
  int local_15c;
  int local_158 [2];
  longlong *local_150;
  undefined2 local_148;
  undefined8 *local_140;
  longlong *local_138;
  int local_130;
  undefined4 local_12c;
  int local_128;
  double local_120;
  double local_118;
  undefined8 *local_110;
  double local_108;
  int local_100;
  int local_fc;
  int local_f8;
  undefined8 *local_f0;
  double local_e8;
  longlong *local_e0;
  undefined8 *local_d8;
  int local_d0;
  longlong local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 *local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 *local_88;
  longlong *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  double local_68;
  undefined8 local_60;
  longlong local_58;
  undefined1 local_50 [32];
  undefined1 local_30 [32];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_1b8 = 0;
  local_1a8 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(param_4);
  local_1ac[0] = '\0';
  local_12c = 0xffffffff;
  local_19c = 0;
  local_190[0] = 0;
  local_194 = -1;
  local_128 = 0;
  local_15c = 0;
  local_197 = '\0';
  local_140 = (undefined8 *)0x0;
  local_150 = (longlong *)0x0;
  local_138 = param_3;
  local_f8 = local_1a8;
  if (param_3 != (longlong *)param_1[0x29]) {
    local_a8 = (char *)(**(code **)(*(longlong *)param_1[0x29] + 0xb0))(param_1[0x29]);
    local_58 = *param_3;
    _Str1 = (char *)(**(code **)(local_58 + 0xb0))(param_3);
    iVar6 = _guard_xfg_dispatch_icall_nop(_Str1,local_a8);
    if (iVar6 != 0) {
      local_150 = (longlong *)(**(code **)(*(longlong *)param_1[0x29] + 0x10))(param_1[0x29]);
      if (local_150 == (longlong *)0x0) {
        local_1b8 = 7;
        goto LAB_143ba4fba;
      }
      uVar9 = FUN_143b52810(param_3,&local_1b8);
      FUN_143b55550(local_150,uVar9,&local_1b8);
      cVar1 = FUN_143a8b0e0(local_1b8);
      if (cVar1 != '\0') goto LAB_143ba4fba;
      uVar9 = FUN_143b528b0(param_3);
      FUN_143b556c0(local_150,uVar9);
      local_138 = local_150;
    }
  }
  if ((*(longlong *)(param_1[0x6a] + 0x168) != 0) && (6 < *(int *)(param_1[0x6a] + 0x170))) {
    local_c8 = FUN_143a8d310(0x3b0);
    if (local_c8 == 0) {
      local_c0 = (undefined8 *)0x0;
    }
    else {
      local_c0 = (undefined8 *)
                 FUN_143c01bc0(local_c8,*(longlong *)(param_1[0x6a] + 0x168) + 0xf0,param_1 + 0x3b,
                               &local_1b8);
    }
    local_b8 = local_c0;
    local_140 = local_c0;
    if (local_c0 == (undefined8 *)0x0) {
      local_1b8 = 7;
      goto LAB_143ba4fba;
    }
    cVar1 = FUN_143a8b0e0(local_1b8);
    if (cVar1 != '\0') goto LAB_143ba4fba;
  }
  local_1b4 = 0;
  while (iVar6 = FUN_143a904f0(param_1 + 0x2c), local_1b4 < iVar6) {
    local_1b0 = FUN_143a8e4f0(param_1 + 0x2c,local_1b4);
    if ((local_197 == '\0') &&
       (((0x40 < local_1b0 && (local_1b0 < 0x5b)) || ((0x60 < local_1b0 && (local_1b0 < 0x7b)))))) {
      local_130 = local_1b4;
      local_19c = 1;
      while( true ) {
        local_fc = local_1b4 + 1;
        iVar6 = FUN_143a904f0(param_1 + 0x2c);
        if ((iVar6 <= local_fc) ||
           (uVar3 = FUN_143a8e4f0(param_1 + 0x2c,local_1b4 + 1), uVar3 != local_1b0)) break;
        local_19c = local_19c + 1;
        local_1b4 = local_1b4 + 1;
      }
      cVar1 = FUN_143ba32d0(local_1b0,local_19c);
      if (cVar1 == '\0') {
        local_194 = -1;
      }
      else if ((local_194 < 0) &&
              (cVar1 = FUN_143ba3230(param_1 + 0x2c,local_1b4 + 1), cVar1 != '\0')) {
        local_194 = local_130;
        local_128 = local_1a8;
        local_15c = 0;
      }
      uVar11 = (uint7)((ulonglong)in_stack_fffffffffffffe08 >> 8);
      uVar10 = (uint7)((ulonglong)in_stack_fffffffffffffe00 >> 8);
      uVar7 = (undefined4)(in_stack_fffffffffffffdf8 >> 0x20);
      if (local_194 < 0) {
        if (local_1b0 != 0x6c) {
          in_stack_fffffffffffffe08 = CONCAT71(uVar11,1);
          in_stack_fffffffffffffe00 = (ulonglong)uVar10 << 8;
          in_stack_fffffffffffffdf8 = CONCAT44(uVar7,local_19c);
          local_160 = FUN_143ba7c80(param_1,param_2,&local_1a8,local_1b0,in_stack_fffffffffffffdf8,
                                    in_stack_fffffffffffffe00,in_stack_fffffffffffffe08,local_1ac,
                                    &local_12c,local_138,local_1b4,local_140,local_190);
          if (local_160 == -1 - local_1a8) {
            local_160 = local_1a8;
            local_100 = local_1b4 + 1;
            iVar6 = FUN_143a904f0(param_1 + 0x2c);
            if (local_100 < iVar6) {
              local_148 = FUN_143a8e4f0(param_1 + 0x2c,local_1b4 + 1);
              cVar1 = FUN_143b28380(local_148);
              iVar6 = local_1b4;
              while (local_1b4 = iVar6, cVar1 != '\0') {
                local_1b4 = iVar6 + 1;
                local_d0 = iVar6 + 2;
                iVar6 = FUN_143a904f0(param_1 + 0x2c);
                if (iVar6 <= local_d0) break;
                uVar4 = FUN_143a8e4f0(param_1 + 0x2c,local_1b4 + 1);
                cVar1 = FUN_143b28380(uVar4);
                iVar6 = local_1b4;
              }
            }
          }
          else if (local_160 < 1) {
            local_1b8 = 9;
            goto LAB_143ba4fba;
          }
          local_1a8 = local_160;
        }
      }
      else {
        if (local_130 == local_194) {
          local_19c = local_19c - local_15c;
          local_15c = local_15c + 1;
          if (local_19c == 0) {
            local_1b8 = 9;
            goto LAB_143ba4fba;
          }
        }
        in_stack_fffffffffffffe08 = (ulonglong)uVar11 << 8;
        in_stack_fffffffffffffe00 = CONCAT71(uVar10,1);
        in_stack_fffffffffffffdf8 = CONCAT44(uVar7,local_19c);
        local_1a8 = FUN_143ba7c80(param_1,param_2,&local_1a8,local_1b0,in_stack_fffffffffffffdf8,
                                  in_stack_fffffffffffffe00,in_stack_fffffffffffffe08,local_1ac,
                                  &local_12c,local_138,local_1b4,local_140,local_190);
        if (local_1a8 < 0) {
          local_1b4 = local_194 + -1;
          local_1a8 = local_128;
        }
      }
    }
    else {
      local_194 = -1;
      local_198 = (**(code **)(*param_1 + 0xd8))(param_1,2,&local_1b8);
      local_98 = *param_1;
      uVar2 = (**(code **)(local_98 + 0xd8))(param_1,0,&local_1b8);
      in_stack_fffffffffffffe00 =
           CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe00 >> 8),local_198);
      in_stack_fffffffffffffdf8 = CONCAT71((int7)(in_stack_fffffffffffffdf8 >> 8),uVar2);
      cVar1 = FUN_143ba32f0(param_1 + 0x2c,&local_1b4,param_2,&local_1a8,in_stack_fffffffffffffdf8,
                            in_stack_fffffffffffffe00);
      if (cVar1 == '\0') {
        local_1b8 = 9;
        goto LAB_143ba4fba;
      }
    }
    local_1b4 = local_1b4 + 1;
  }
  sVar5 = FUN_143a8e4f0(param_2,local_1a8);
  if ((sVar5 == 0x2e) &&
     (cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,0,&local_1b8), cVar1 != '\0')) {
    uVar7 = FUN_143a904f0(param_1 + 0x2c);
    cVar1 = FUN_143ba3170(param_1 + 0x2c,uVar7);
    if (cVar1 != '\0') {
      local_1a8 = local_1a8 + 1;
    }
  }
  FUN_143b0fce0(param_4,local_1a8);
  if ((local_1ac[0] == '\0') && (local_190[0] == 0)) goto LAB_143ba4fba;
  if (local_1ac[0] != '\0') {
    local_170 = (undefined8 *)(**(code **)(*param_3 + 0x10))(param_3);
    if (local_170 == (undefined8 *)0x0) {
      local_1b8 = 7;
      goto LAB_143ba4fba;
    }
    local_68 = (double)FUN_143b52810(local_170,&local_1b8);
    if (((char)param_1[0x70] != '\0') && (local_68 < (double)param_1[0x6c])) {
      FUN_143b55270(param_3,1,(int)param_1[0x6d] + 100);
    }
    local_88 = local_170;
    local_d8 = local_170;
    if (local_170 == (undefined8 *)0x0) {
      local_60 = 0;
    }
    else {
      local_60 = (**(code **)*local_170)(local_170,1);
    }
  }
  if (local_190[0] == 0) goto LAB_143ba4fba;
  local_170 = (undefined8 *)(**(code **)(*param_3 + 0x10))(param_3);
  if (local_170 == (undefined8 *)0x0) {
    local_1b8 = 7;
    goto LAB_143ba4fba;
  }
  local_168 = (longlong *)FUN_143b528b0(param_3);
  local_188 = (longlong *)0x0;
  in_stack_fffffffffffffdf8 = in_stack_fffffffffffffdf8 & 0xffffffff00000000;
  lVar8 = _guard_xfg_dispatch_icall_nop
                    (local_168,0,&icu_53::TimeZone::RTTI_Type_Descriptor,
                     &icu_53::OlsonTimeZone::RTTI_Type_Descriptor,in_stack_fffffffffffffdf8);
  if (lVar8 == 0) {
    in_stack_fffffffffffffdf8 = in_stack_fffffffffffffdf8 & 0xffffffff00000000;
    lVar8 = _guard_xfg_dispatch_icall_nop
                      (local_168,0,&icu_53::TimeZone::RTTI_Type_Descriptor,
                       &icu_53::SimpleTimeZone::RTTI_Type_Descriptor,in_stack_fffffffffffffdf8);
    if (lVar8 != 0) goto LAB_143ba4ad1;
    in_stack_fffffffffffffdf8 = in_stack_fffffffffffffdf8 & 0xffffffff00000000;
    lVar8 = _guard_xfg_dispatch_icall_nop
                      (local_168,0,&icu_53::TimeZone::RTTI_Type_Descriptor,
                       &icu_53::RuleBasedTimeZone::RTTI_Type_Descriptor,in_stack_fffffffffffffdf8);
    if ((lVar8 != 0) ||
       (lVar8 = _guard_xfg_dispatch_icall_nop
                          (local_168,0,&icu_53::TimeZone::RTTI_Type_Descriptor,
                           &icu_53::VTimeZone::RTTI_Type_Descriptor,
                           in_stack_fffffffffffffdf8 & 0xffffffff00000000), lVar8 != 0))
    goto LAB_143ba4ad1;
  }
  else {
LAB_143ba4ad1:
    local_188 = local_168;
  }
  FUN_143b55270(local_170,0xf,0);
  FUN_143b55270(local_170,0x10,0);
  local_120 = (double)FUN_143b52810(local_170,&local_1b8);
  if (local_188 == (longlong *)0x0) {
    (**(code **)(*local_168 + 0x18))(local_168,local_120,1,local_158,local_178,&local_1b8);
  }
  else if (local_190[0] == 1) {
    (**(code **)(*local_188 + 0x98))(local_188,local_120,1,1,local_158,local_178,&local_1b8);
  }
  else {
    (**(code **)(*local_188 + 0x98))(local_188,local_120,3,3,local_158,local_178,&local_1b8);
  }
  local_1a0 = local_178[0];
  if (local_190[0] == 1) {
    if (local_178[0] != 0) {
      local_1a0 = 0;
    }
  }
  else if (local_178[0] == 0) {
    if (local_188 == (longlong *)0x0) {
      local_1a0 = (**(code **)(*local_168 + 0x60))(local_168);
    }
    else {
      local_118 = local_120 + (double)local_158[0];
      FUN_143b98930(local_50);
      FUN_143b98930(local_30);
      local_e8 = local_118;
      local_108 = local_118;
      local_180 = 0;
      local_17c = 0;
      do {
        local_1a3 = (**(code **)(*local_188 + 0x70))(local_188,local_e8,1,local_50);
        if (local_1a3 == '\0') break;
        local_e8 = (double)FUN_143b381e0(local_50);
        local_e8 = local_e8 - 1.0;
        uVar9 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
                ::GetBoundProgramCounterForTimerManager(local_50);
        local_180 = FAnalyticsSpan::GetStackDepth(uVar9);
      } while (local_180 == 0);
      do {
        local_1a4 = (**(code **)(*local_188 + 0x68))(local_188,local_108,0,local_30);
        if (local_1a4 == '\0') break;
        local_108 = (double)FUN_143b381e0(local_30);
        uVar9 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                ::GetObjectForTimerManager(local_30);
        local_17c = FAnalyticsSpan::GetStackDepth(uVar9);
      } while (local_17c == 0);
      if ((local_1a3 == '\0') || (local_1a4 == '\0')) {
        if ((local_1a3 == '\0') || (local_180 == 0)) {
          if ((local_1a4 == '\0') || (local_17c == 0)) {
            local_1a0 = (**(code **)(*local_188 + 0x60))(local_188);
          }
          else {
            local_1a0 = local_17c;
          }
        }
        else {
          local_1a0 = local_180;
        }
      }
      else if (local_118 - local_e8 <= local_108 - local_118) {
        local_1a0 = local_180;
      }
      else {
        local_1a0 = local_17c;
      }
      FUN_143b989a0(local_30);
      FUN_143b989a0(local_50);
    }
    if (local_1a0 == 0) {
      local_1a0 = 3600000;
    }
  }
  FUN_143b55270(param_3,0xf,local_158[0]);
  FUN_143b55270(param_3,0x10,local_1a0);
  local_78 = local_170;
  local_110 = local_170;
  if (local_170 == (undefined8 *)0x0) {
    local_b0 = 0;
  }
  else {
    local_b0 = (**(code **)*local_170)(local_170,1);
  }
LAB_143ba4fba:
  cVar1 = FUN_143a8b110(local_1b8);
  if ((cVar1 != '\0') && (local_138 != param_3)) {
    uVar9 = FUN_143b528b0(local_138);
    FUN_143b556c0(param_3,uVar9);
    uVar9 = FUN_143b52810(local_138,&local_1b8);
    FUN_143b55550(param_3,uVar9,&local_1b8);
  }
  if (local_140 != (undefined8 *)0x0) {
    local_a0 = local_140;
    local_f0 = local_140;
    if (local_140 == (undefined8 *)0x0) {
      local_90 = 0;
    }
    else {
      local_90 = (**(code **)*local_140)(local_140,1);
    }
  }
  if (local_150 != (longlong *)0x0) {
    local_80 = local_150;
    local_e0 = local_150;
    if (local_150 == (longlong *)0x0) {
      local_70 = 0;
    }
    else {
      local_70 = (**(code **)*local_150)(local_150,1);
    }
  }
  cVar1 = FUN_143a8b0e0(local_1b8);
  if (cVar1 != '\0') {
    FUN_143b44cd0(param_4,local_1a8);
    FUN_143b0fce0(param_4,local_f8);
  }
  return;
}



// FUNCTION 143ba5130 FUN_143ba5130 body=193 status=ok
// SIG undefined FUN_143ba5130(void)

void FUN_143ba5130(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    if (*(longlong *)(param_1 + 0x148) == 0) {
      *param_3 = 1;
    }
    else {
      FUN_143b55550(*(undefined8 *)(param_1 + 0x148),param_2,param_3);
      cVar1 = FUN_143a8b110(*param_3);
      if (cVar1 != '\0') {
        *(undefined1 *)(param_1 + 0x380) = 1;
        *(undefined8 *)(param_1 + 0x360) = param_2;
        uVar2 = FUN_143b512d0(*(undefined8 *)(param_1 + 0x148),1,param_3);
        *(undefined4 *)(param_1 + 0x368) = uVar2;
      }
    }
  }
  return;
}



// FUNCTION 143ba5200 FUN_143ba5200 body=84 status=ok
// SIG undefined FUN_143ba5200(void)

void FUN_143ba5200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  FUN_143ba5260(param_1,param_2,param_3,0xffffffff,param_4,param_5,param_6);
  return;
}



// FUNCTION 143ba5260 FUN_143ba5260 body=535 status=ok
// SIG undefined FUN_143ba5260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143ba5260(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,char param_6,longlong *param_7)

{
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  int local_98;
  longlong *local_90;
  int local_88;
  int local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_70 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  FUN_143a8ac30(local_68);
  local_90 = (longlong *)0x0;
  if (param_6 == '\0') {
    local_a8 = 0;
    local_90 = (longlong *)
               _guard_xfg_dispatch_icall_nop
                         (param_7,0,&icu_53::NumberFormat::RTTI_Type_Descriptor,
                          &icu_53::DecimalFormat::RTTI_Type_Descriptor);
    if (local_90 != (longlong *)0x0) {
      SMultiLineEditingTest::GetMultilineEditableText(local_90,local_68);
      local_80 = FUN_143a8d4f0(local_40,1,&DAT_145d17b4c,0xffffffff);
      local_78 = local_80;
      (**(code **)(*local_90 + 0x158))(local_90,local_80);
      FUN_143a8dc60(local_40);
    }
  }
  local_84 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
             ::GetIndex(param_5);
  (**(code **)(*param_7 + 0xa0))(param_7,param_2,param_3,param_5);
  if (local_90 != (longlong *)0x0) {
    (**(code **)(*local_90 + 0x158))(local_90,local_68);
  }
  if (0 < param_4) {
    local_98 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
               ::GetIndex(param_5);
    local_98 = local_98 - local_84;
    if (param_4 < local_98) {
      local_88 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                 ::GetIndex(param_3);
      for (local_98 = local_98 - param_4; 0 < local_98; local_98 = local_98 + -1) {
        local_88 = local_88 / 10;
      }
      FUN_143b0fce0(param_5,local_84 + param_4);
      FUN_143b69930(param_3,local_88);
    }
  }
  FUN_143a8dc60(local_68);
  return;
}



// FUNCTION 143ba5480 FUN_143ba5480 body=1517 status=ok
// SIG undefined FUN_143ba5480(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143ba5480(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4,
                  undefined4 *param_5)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined1 auStack_308 [32];
  char *local_2e8;
  undefined4 local_2e0;
  char local_2d8;
  char local_2d7;
  char local_2d6;
  char local_2d5;
  longlong *local_2d0;
  undefined8 *local_2c8;
  int local_2c0;
  int local_2bc;
  int local_2b8;
  char local_2b4;
  int local_2b0;
  int local_2ac;
  int local_2a8;
  longlong *local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined1 local_280 [40];
  longlong local_258 [5];
  undefined1 local_230 [40];
  undefined1 local_208 [384];
  char local_88 [8];
  undefined1 local_80 [104];
  ulonglong local_18;
  
  local_288 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  cVar1 = FUN_143a90330(param_3);
  if (cVar1 == '\0') {
    local_2c0 = 0;
    FUN_143a8ac30(local_280);
    FUN_143a8ac30(local_230);
    local_2d5 = '\x01';
    while (local_2d5 != '\0') {
      local_2b8 = FUN_143b0bae0(param_3,0x3b,local_2c0);
      if (local_2b8 == -1) {
        local_2d5 = '\0';
        local_2bc = FUN_143a904f0(param_3);
        local_2bc = local_2bc - local_2c0;
      }
      else {
        local_2bc = local_2b8 - local_2c0;
      }
      FUN_143a8d470(local_258,param_3,local_2c0,local_2bc);
      local_2a8 = FUN_143b0bae0(local_258,0x3d,0);
      if (local_2a8 == -1) {
        FUN_143a8dcd0(local_280,local_258);
        FUN_143a90e90(local_230);
      }
      else {
        FUN_143a90ca0(local_280,local_258,local_2a8 + 1);
        FUN_143a90d20(local_230,local_258,0,1);
      }
      local_2ac = FUN_143a90140(local_280);
      local_2c8 = *(undefined8 **)(param_1 + 0x378);
      local_2d0 = (longlong *)0x0;
      local_2d6 = '\0';
      while ((local_2c8 != (undefined8 *)0x0 && (local_2d6 == '\0'))) {
        if (*(int *)(local_2c8 + 1) == local_2ac) {
          local_2d0 = (longlong *)*local_2c8;
          local_2d6 = '\x01';
        }
        local_2c8 = (undefined8 *)local_2c8[2];
      }
      if (local_2d6 == '\0') {
        local_2c8 = (undefined8 *)FUN_143aa7a40(0x18);
        if (local_2c8 == (undefined8 *)0x0) {
          *param_5 = 7;
          FUN_143a8dc60(local_258);
          FUN_143a8dc60(local_230);
          FUN_143a8dc60(local_280);
          return;
        }
        _guard_xfg_dispatch_icall_nop(local_88,"numbers=");
        local_2e0 = 0;
        local_2e8 = (char *)CONCAT44(local_2e8._4_4_,0x5c);
        FUN_143a8f880(local_280,0,local_2bc,local_80);
        local_298 = FUN_143ba2b50(param_2);
        local_290 = FUN_143b52030(param_2);
        uVar3 = FUN_143accb70(param_2);
        local_2e8 = local_88;
        FUN_143a8a690(local_208,uVar3,local_290,local_298);
        local_2d0 = (longlong *)FUN_143b37290(local_208,param_5);
        cVar1 = FUN_143a8b110(*param_5);
        if (cVar1 == '\0') {
          if (local_2c8 != (undefined8 *)0x0) {
            FUN_143aa79f0(local_2c8);
          }
          FUN_143a8acf0(local_208);
          FUN_143a8dc60(local_258);
          FUN_143a8dc60(local_230);
          FUN_143a8dc60(local_280);
          return;
        }
        (**(code **)(*local_2d0 + 200))(local_2d0,0);
        local_2e8 = (char *)((ulonglong)local_2e8 & 0xffffffff00000000);
        local_2a0 = (longlong *)
                    _guard_xfg_dispatch_icall_nop
                              (local_2d0,0,&icu_53::NumberFormat::RTTI_Type_Descriptor,
                               &icu_53::DecimalFormat::RTTI_Type_Descriptor);
        if (local_2a0 != (longlong *)0x0) {
          (**(code **)(*local_2a0 + 0x208))(local_2a0,0);
        }
        (**(code **)(*local_2d0 + 0xb0))(local_2d0,1);
        (**(code **)(*local_2d0 + 0xe8))(local_2d0,0);
        *local_2c8 = local_2d0;
        *(int *)(local_2c8 + 1) = local_2ac;
        local_2c8[2] = *(undefined8 *)(param_1 + 0x378);
        *(undefined8 **)(param_1 + 0x378) = local_2c8;
        FUN_143a8acf0(local_208);
      }
      cVar1 = FUN_143a90330(local_230);
      if (cVar1 == '\0') {
        uVar2 = FUN_143a8e4f0(local_230,0);
        local_2b0 = FUN_143bfe310(uVar2);
        if (local_2b0 == 0x23) {
          *param_5 = 3;
          FUN_143a8dc60(local_258);
          FUN_143a8dc60(local_230);
          FUN_143a8dc60(local_280);
          return;
        }
        *(longlong **)(*(longlong *)(param_1 + 0x370) + (longlong)local_2b0 * 8) = local_2d0;
      }
      else {
        local_2b4 = param_4;
        if (param_4 == '\0') {
LAB_143ba5908:
          for (local_2d8 = '\0'; local_2d8 < '\x10'; local_2d8 = local_2d8 + '\x01') {
            *(longlong **)
             (*(longlong *)(param_1 + 0x370) +
             (longlong)*(int *)(&DAT_145d17d40 + (longlong)local_2d8 * 4) * 8) = local_2d0;
          }
          if (param_4 == '\0') goto LAB_143ba5a1e;
        }
        else if (param_4 != '\x01') {
          if (param_4 != '\x02') goto LAB_143ba5a1e;
          goto LAB_143ba5908;
        }
        for (local_2d7 = '\0'; local_2d7 < '\n'; local_2d7 = local_2d7 + '\x01') {
          *(longlong **)
           (*(longlong *)(param_1 + 0x370) +
           (longlong)*(int *)(&DAT_145d17d80 + (longlong)local_2d7 * 4) * 8) = local_2d0;
        }
      }
LAB_143ba5a1e:
      local_2c0 = local_2b8 + 1;
      FUN_143a8dc60(local_258);
    }
    FUN_143a8dc60(local_230);
    FUN_143a8dc60(local_280);
  }
  return;
}



// FUNCTION 143ba5a70 FUN_143ba5a70 body=46 status=ok
// SIG undefined FUN_143ba5a70(void)

void FUN_143ba5a70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143ba5130(param_1,param_2,param_3);
  return;
}



// FUNCTION 143ba5aa0 FUN_143ba5aa0 body=265 status=ok
// SIG undefined FUN_143ba5aa0(void)

void FUN_143ba5aa0(longlong param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_28 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  
  FUN_143b57870(param_1,param_2,param_3);
  cVar1 = FUN_143a8b110(*param_3);
  if (((cVar1 != '\0') && (*(longlong *)(param_1 + 0x388) == 0)) &&
     ((param_2 == 0x102 || ((param_2 == 0x103 || (param_2 == 0x104)))))) {
    local_28[0] = 0;
    uVar2 = FUN_143a9fd60(param_1 + 0x1d8,local_28);
    *(undefined8 *)(param_1 + 0x388) = uVar2;
    cVar1 = FUN_143a8b0e0(local_28[0]);
    if (cVar1 != '\0') {
      local_20 = *(undefined8 **)(param_1 + 0x388);
      if (local_20 != (undefined8 *)0x0) {
        local_18 = local_20;
        (**(code **)*local_20)(local_20,1);
      }
      *(undefined8 *)(param_1 + 0x388) = 0;
    }
  }
  return;
}



// FUNCTION 143ba5bb0 FUN_143ba5bb0 body=180 status=ok
// SIG undefined FUN_143ba5bb0(void)

void FUN_143ba5bb0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 local_38;
  
  puVar1 = *(undefined8 **)(param_1 + 0x350);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  lVar2 = FUN_143a8d310(0x498);
  if (lVar2 == 0) {
    local_38 = 0;
  }
  else {
    local_38 = FUN_143bfba80(lVar2,param_2);
  }
  *(undefined8 *)(param_1 + 0x350) = local_38;
  return;
}



// FUNCTION 143ba5c70 FUN_143ba5c70 body=180 status=ok
// SIG undefined FUN_143ba5c70(void)

void FUN_143ba5c70(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 local_38;
  
  puVar1 = *(undefined8 **)(param_1 + 0x358);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  lVar2 = FUN_143a8d310(0x4d0);
  if (lVar2 == 0) {
    local_38 = 0;
  }
  else {
    local_38 = FUN_143b8a170(lVar2,param_2);
  }
  *(undefined8 *)(param_1 + 0x358) = local_38;
  return;
}



// FUNCTION 143ba5d30 FUN_143ba5d30 body=82 status=ok
// SIG undefined FUN_143ba5d30(void)

longlong FUN_143ba5d30(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_143a8fe10(param_2);
  iVar1 = FUN_143a904f0(param_2);
  lVar3 = FUN_143b28450(lVar2 + (longlong)param_3 * 2,iVar1 - param_3);
  return lVar3 - lVar2 >> 1;
}



// FUNCTION 143ba5d90 FUN_143ba5d90 body=126 status=ok
// SIG undefined FUN_143ba5d90(void)

int FUN_143ba5d90(undefined8 param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int local_res18;
  int local_14;
  
  local_res18 = param_3;
  while( true ) {
    iVar2 = FUN_143a904f0(param_2);
    if (iVar2 <= local_res18) {
      return local_res18;
    }
    uVar3 = FUN_143a8e3e0(param_2,local_res18);
    cVar1 = FUN_143a9e2d0(uVar3);
    if (cVar1 == '\0') break;
    if (uVar3 < 0x10000) {
      local_14 = 1;
    }
    else {
      local_14 = 2;
    }
    local_res18 = local_res18 + local_14;
  }
  return local_res18;
}



// FUNCTION 143ba5e10 FUN_143ba5e10 body=7682 status=ok
// SIG undefined FUN_143ba5e10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143ba5e10(longlong param_1,undefined8 param_2,short param_3,int param_4,int param_5,
                  int param_6,longlong *param_7,longlong *param_8,undefined4 *param_9)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 auStack_288 [32];
  undefined1 *local_268;
  undefined4 *local_260;
  int local_258;
  int local_254;
  char local_250;
  int local_24c;
  undefined1 local_248;
  char local_247;
  longlong *local_240;
  undefined8 local_238;
  undefined8 local_230;
  int local_228;
  char local_224;
  char local_223;
  undefined4 local_220;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  int local_20c;
  undefined4 local_208;
  longlong *local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  undefined1 *local_1e0;
  longlong *local_1d8;
  undefined1 *local_1d0;
  longlong *local_1c8;
  undefined1 *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong *local_190;
  longlong *local_188;
  longlong *local_180;
  longlong *local_178;
  longlong *local_170;
  longlong *local_168;
  longlong *local_160;
  undefined1 *local_158;
  longlong *local_150;
  undefined1 *local_148;
  longlong *local_140;
  undefined1 *local_138;
  longlong *local_130;
  undefined1 *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined1 local_d0 [24];
  undefined8 local_b8;
  undefined1 local_b0 [40];
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_b8 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  cVar1 = FUN_143a8b0e0(*param_9);
  if (cVar1 != '\0') {
    return;
  }
  local_24c = FUN_143bfe310(param_3);
  local_e0 = 10;
  local_220 = FUN_143a904f0(param_2);
  local_254 = 0;
  pcVar4 = (char *)(**(code **)(*param_8 + 0xb0))(param_8);
  iVar2 = _guard_xfg_dispatch_icall_nop(pcVar4,"hebrew");
  local_248 = iVar2 == 0;
  local_223 = local_248;
  pcVar4 = (char *)(**(code **)(*param_8 + 0xb0))(param_8);
  iVar2 = _guard_xfg_dispatch_icall_nop(pcVar4,"chinese");
  if (iVar2 == 0) {
LAB_143ba5f3a:
    local_247 = '\x01';
  }
  else {
    pcVar4 = (char *)(**(code **)(*param_8 + 0xb0))(param_8);
    iVar2 = _guard_xfg_dispatch_icall_nop(pcVar4,"dangi");
    if (iVar2 == 0) goto LAB_143ba5f3a;
    local_247 = '\0';
  }
  local_224 = local_247;
  if (local_24c == 0x23) {
    if (param_3 == 0x6c) {
      return;
    }
    *param_9 = 3;
    return;
  }
  local_208 = *(undefined4 *)(&DAT_145d17ac0 + (longlong)local_24c * 4);
  if (local_24c == 0x22) {
    local_20c = (**(code **)(*param_8 + 0x178))(param_8,param_9);
  }
  else {
    local_20c = FUN_143b512d0(param_8,local_208,param_9);
  }
  local_258 = local_20c;
  cVar1 = FUN_143a8b0e0(*param_9);
  if (cVar1 != '\0') {
    return;
  }
  local_240 = (longlong *)FUN_143ba2ae0(param_1,local_24c);
  FUN_143a8d9f0(local_88,&DAT_145d183dc,4,0);
  local_210 = local_24c;
  switch(local_24c) {
  case 0:
    if (local_224 == '\0') {
      if (param_4 == 5) {
        FUN_143ba10c0(param_2,local_258,*(undefined8 *)(*(longlong *)(param_1 + 0x350) + 0x28),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x350) + 0x30));
        local_254 = 9;
      }
      else if (param_4 == 4) {
        FUN_143ba10c0(param_2,local_258,*(undefined8 *)(*(longlong *)(param_1 + 0x350) + 0x18),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x350) + 0x20));
        local_254 = 7;
      }
      else {
        FUN_143ba10c0(param_2,local_258,*(undefined8 *)(*(longlong *)(param_1 + 0x350) + 8),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x350) + 0x10));
        local_254 = 8;
      }
    }
    else {
      local_260 = (undefined4 *)CONCAT44(local_260._4_4_,9);
      local_268 = (undefined1 *)CONCAT44(local_268._4_4_,1);
      FUN_143bab9b0(param_1,local_240,param_2,local_258);
    }
    break;
  case 2:
  case 0x1a:
    if (local_223 != '\0') {
      local_1f0 = param_8;
      uVar3 = FUN_143b512d0(param_8,1,param_9);
      cVar1 = FUN_143b9bc30(uVar3);
      if (((cVar1 != '\0') && (local_258 == 6)) && (2 < param_4)) {
        local_258 = 0xd;
      }
      uVar3 = FUN_143b512d0(local_1f0,1,param_9);
      cVar1 = FUN_143b9bc30(uVar3);
      if (((cVar1 == '\0') && (5 < local_258)) && (param_4 < 3)) {
        local_258 = local_258 + -1;
      }
    }
    if ((*(longlong *)(*(longlong *)(param_1 + 0x350) + 0x168) == 0) ||
       (*(int *)(*(longlong *)(param_1 + 0x350) + 0x170) < 7)) {
      local_218 = 0;
    }
    else {
      local_218 = FUN_143b512d0(param_8,0x16,param_9);
    }
    local_228 = local_218;
    if (param_4 == 5) {
      if (local_24c == 2) {
        if (local_218 == 0) {
          local_148 = (undefined1 *)0x0;
        }
        else {
          local_148 = (undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x350) + 0x168) + 0x50);
        }
        local_260 = param_9;
        local_268 = local_148;
        FUN_143ba1110(param_2,local_258,*(undefined8 *)(*(longlong *)(param_1 + 0x350) + 0x58),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x350) + 0x60));
      }
      else {
        if (local_218 == 0) {
          local_1e0 = (undefined1 *)0x0;
        }
        else {
          local_1e0 = (undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x350) + 0x168) + 200);
        }
        local_260 = param_9;
        local_268 = local_1e0;
        FUN_143ba1110(param_2,local_258,*(undefined8 *)(*(longlong *)(param_1 + 0x350) + 0x88),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x350) + 0x90));
      }
      local_254 = 3;
    }
    else if (param_4 == 4) {
      if (local_24c == 2) {
        if (local_218 == 0) {
          local_128 = (undefined1 *)0x0;
        }
        else {
          local_128 = *(undefined1 **)(*(longlong *)(param_1 + 0x350) + 0x168);
        }
        local_260 = param_9;
        local_268 = local_128;
        FUN_143ba1110(param_2,local_258,*(undefined8 *)(*(longlong *)(param_1 + 0x350) + 0x38),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x350) + 0x40));
        local_254 = 1;
      }
      else {
        if (local_218 == 0) {
          local_1d0 = (undefined1 *)0x0;
        }
        else {
          local_1d0 = (undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x350) + 0x168) + 0x78);
        }
        local_260 = param_9;
        local_268 = local_1d0;
        FUN_143ba1110(param_2,local_258,*(undefined8 *)(*(longlong *)(param_1 + 0x350) + 0x68),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x350) + 0x70));
        local_254 = 2;
      }
    }
    else if (param_4 == 3) {
      if (local_24c == 2) {
        if (local_218 == 0) {
          local_138 = (undefined1 *)0x0;
        }
        else {
          local_138 = (undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x350) + 0x168) + 0x28);
        }
        local_260 = param_9;
        local_268 = local_138;
        FUN_143ba1110(param_2,local_258,*(undefined8 *)(*(longlong *)(param_1 + 0x350) + 0x48),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x350) + 0x50));
        local_254 = 1;
      }
      else {
        if (local_218 == 0) {
          local_1c0 = (undefined1 *)0x0;
        }
        else {
          local_1c0 = (undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x350) + 0x168) + 0xa0);
        }
        local_260 = param_9;
        local_268 = local_1c0;
        FUN_143ba1110(param_2,local_258,*(undefined8 *)(*(longlong *)(param_1 + 0x350) + 0x78),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x350) + 0x80));
        local_254 = 2;
      }
    }
    else {
      FUN_143a8ac30(local_60);
      local_260 = (undefined4 *)CONCAT44(local_260._4_4_,10);
      local_268 = (undefined1 *)CONCAT44(local_268._4_4_,param_4);
      FUN_143bab9b0(param_1,local_240,local_60,local_258 + 1);
      if (local_228 == 0) {
        local_158 = (undefined1 *)0x0;
      }
      else {
        local_158 = (undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x350) + 0x168) + 0xf0);
      }
      local_260 = param_9;
      local_268 = local_158;
      FUN_143ba1110(param_2,0,local_60,1);
      FUN_143a8dc60(local_60);
    }
    break;
  default:
    local_260 = (undefined4 *)CONCAT44(local_260._4_4_,10);
    local_268 = (undefined1 *)CONCAT44(local_268._4_4_,param_4);
    FUN_143bab9b0(param_1,local_240,param_2,local_258);
    break;
  case 4:
    if (local_258 == 0) {
      iVar2 = (**(code **)(*param_8 + 0x70))(param_8,0xb);
      local_260 = (undefined4 *)CONCAT44(local_260._4_4_,10);
      local_268 = (undefined1 *)CONCAT44(local_268._4_4_,param_4);
      FUN_143bab9b0(param_1,local_240,param_2,iVar2 + 1);
    }
    else {
      local_260 = (undefined4 *)CONCAT44(local_260._4_4_,10);
      local_268 = (undefined1 *)CONCAT44(local_268._4_4_,param_4);
      FUN_143bab9b0(param_1,local_240,param_2,local_258);
    }
    break;
  case 8:
    local_214 = param_4;
    if (3 < param_4) {
      local_214 = 3;
    }
    (**(code **)(*local_240 + 0xd8))(local_240,local_214);
    (**(code **)(*local_240 + 0xd0))(local_240,10);
    if (param_4 == 1) {
      local_258 = local_258 / 100;
    }
    else if (param_4 == 2) {
      local_258 = local_258 / 10;
    }
    FUN_143b36810(local_d0,0);
    (**(code **)(*local_240 + 0x78))(local_240,local_258,param_2,local_d0);
    if (3 < param_4) {
      local_108 = *local_240;
      (**(code **)(local_108 + 0xd8))(local_240,param_4 + -3);
      (**(code **)(*local_240 + 0x78))(local_240,0,param_2,local_d0);
    }
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_d0);
    break;
  case 0xe:
    FUN_143ba10c0(param_2,local_258,*(undefined8 *)(*(longlong *)(param_1 + 0x350) + 0x118),
                  *(undefined4 *)(*(longlong *)(param_1 + 0x350) + 0x120));
    break;
  case 0xf:
    if (local_258 == 0) {
      iVar2 = (**(code **)(*param_8 + 0x90))(param_8,10);
      local_260 = (undefined4 *)CONCAT44(local_260._4_4_,10);
      local_268 = (undefined1 *)CONCAT44(local_268._4_4_,param_4);
      FUN_143bab9b0(param_1,local_240,param_2,iVar2 + 1);
    }
    else {
      local_260 = (undefined4 *)CONCAT44(local_260._4_4_,10);
      local_268 = (undefined1 *)CONCAT44(local_268._4_4_,param_4);
      FUN_143bab9b0(param_1,local_240,param_2,local_258);
    }
    break;
  case 0x11:
  case 0x17:
  case 0x18:
  case 0x1d:
  case 0x1f:
  case 0x20:
  case 0x21:
    FUN_143a8ac30(local_b0);
    local_238 = FUN_143b528b0(param_8);
    local_230 = FUN_143b52810(param_8,param_9);
    cVar1 = FUN_143a8b110(*param_9);
    if (cVar1 != '\0') {
      if (local_24c == 0x11) {
        if (param_4 < 4) {
          local_1b0 = (longlong *)FUN_143bab910(param_1);
          local_260 = (undefined4 *)0x0;
          local_268 = local_b0;
          (**(code **)(*local_1b0 + 0x38))(local_1b0,4,local_238,local_230);
          local_254 = 0xd;
        }
        else {
          local_150 = (longlong *)FUN_143bab910(param_1);
          local_260 = (undefined4 *)0x0;
          local_268 = local_b0;
          (**(code **)(*local_150 + 0x38))(local_150,3,local_238,local_230);
          local_254 = 0xc;
        }
      }
      else if (local_24c == 0x17) {
        if (param_4 < 4) {
          local_1a0 = (longlong *)FUN_143bab910(param_1);
          local_260 = (undefined4 *)0x0;
          local_268 = local_b0;
          (**(code **)(*local_1a0 + 0x38))(local_1a0,0xc,local_238,local_230);
        }
        else if (param_4 == 5) {
          local_200 = (longlong *)FUN_143bab910(param_1);
          local_260 = (undefined4 *)0x0;
          local_268 = local_b0;
          (**(code **)(*local_200 + 0x38))(local_200,0xf,local_238,local_230);
        }
        else {
          local_190 = (longlong *)FUN_143bab910(param_1);
          local_260 = (undefined4 *)0x0;
          local_268 = local_b0;
          (**(code **)(*local_190 + 0x38))(local_190,5,local_238,local_230);
        }
      }
      else if (local_24c == 0x18) {
        if (param_4 == 1) {
          local_140 = (longlong *)FUN_143bab910(param_1);
          local_260 = (undefined4 *)0x0;
          local_268 = local_b0;
          (**(code **)(*local_140 + 0x38))(local_140,2,local_238,local_230);
          local_254 = 0xd;
        }
        else if (param_4 == 4) {
          local_180 = (longlong *)FUN_143bab910(param_1);
          local_260 = (undefined4 *)0x0;
          local_268 = local_b0;
          (**(code **)(*local_180 + 0x38))(local_180,1,local_238,local_230);
          local_254 = 0xc;
        }
      }
      else if (local_24c == 0x1d) {
        if (param_4 == 1) {
          local_130 = (longlong *)FUN_143bab910(param_1);
          local_260 = (undefined4 *)0x0;
          local_268 = local_b0;
          (**(code **)(*local_130 + 0x38))(local_130,0x12,local_238,local_230);
        }
        else if (param_4 == 2) {
          local_170 = (longlong *)FUN_143bab910(param_1);
          local_260 = (undefined4 *)0x0;
          local_268 = local_b0;
          (**(code **)(*local_170 + 0x38))(local_170,0x11,local_238,local_230);
        }
        else if (param_4 == 3) {
          local_120 = (longlong *)FUN_143bab910(param_1);
          local_260 = (undefined4 *)0x0;
          local_268 = local_b0;
          (**(code **)(*local_120 + 0x38))(local_120,0x13,local_238,local_230);
        }
        else if (param_4 == 4) {
          local_160 = (longlong *)FUN_143bab910(param_1);
          local_260 = (undefined4 *)0x0;
          local_268 = local_b0;
          (**(code **)(*local_160 + 0x38))(local_160,0,local_238,local_230);
          local_254 = 10;
        }
      }
      else if (local_24c == 0x1f) {
        if (param_4 == 1) {
          local_110 = (longlong *)FUN_143bab910(param_1);
          local_260 = (undefined4 *)0x0;
          local_268 = local_b0;
          (**(code **)(*local_110 + 0x38))(local_110,6,local_238,local_230);
        }
        else if (param_4 == 4) {
          local_118 = (longlong *)FUN_143bab910(param_1);
          local_260 = (undefined4 *)0x0;
          local_268 = local_b0;
          (**(code **)(*local_118 + 0x38))(local_118,5,local_238,local_230);
        }
      }
      else if (local_24c == 0x20) {
        if (param_4 == 1) {
          local_1f8 = (longlong *)FUN_143bab910(param_1);
          local_260 = (undefined4 *)0x0;
          local_268 = local_b0;
          (**(code **)(*local_1f8 + 0x38))(local_1f8,7,local_238,local_230);
        }
        else if (param_4 == 2) {
          local_1e8 = (longlong *)FUN_143bab910(param_1);
          local_260 = (undefined4 *)0x0;
          local_268 = local_b0;
          (**(code **)(*local_1e8 + 0x38))(local_1e8,9,local_238,local_230);
        }
        else if (param_4 == 3) {
          local_1d8 = (longlong *)FUN_143bab910(param_1);
          local_260 = (undefined4 *)0x0;
          local_268 = local_b0;
          (**(code **)(*local_1d8 + 0x38))(local_1d8,0xd,local_238,local_230);
        }
        else if (param_4 == 4) {
          local_1c8 = (longlong *)FUN_143bab910(param_1);
          local_260 = (undefined4 *)0x0;
          local_268 = local_b0;
          (**(code **)(*local_1c8 + 0x38))(local_1c8,0xb,local_238,local_230);
        }
        else if (param_4 == 5) {
          local_1b8 = (longlong *)FUN_143bab910(param_1);
          local_260 = (undefined4 *)0x0;
          local_268 = local_b0;
          (**(code **)(*local_1b8 + 0x38))(local_1b8,0xf,local_238,local_230);
        }
      }
      else if (local_24c == 0x21) {
        if (param_4 == 1) {
          local_1a8 = (longlong *)FUN_143bab910(param_1);
          local_260 = (undefined4 *)0x0;
          local_268 = local_b0;
          (**(code **)(*local_1a8 + 0x38))(local_1a8,8,local_238,local_230);
        }
        else if (param_4 == 2) {
          local_198 = (longlong *)FUN_143bab910(param_1);
          local_260 = (undefined4 *)0x0;
          local_268 = local_b0;
          (**(code **)(*local_198 + 0x38))(local_198,10,local_238,local_230);
        }
        else if (param_4 == 3) {
          local_188 = (longlong *)FUN_143bab910(param_1);
          local_260 = (undefined4 *)0x0;
          local_268 = local_b0;
          (**(code **)(*local_188 + 0x38))(local_188,0xe,local_238,local_230);
        }
        else if (param_4 == 4) {
          local_178 = (longlong *)FUN_143bab910(param_1);
          local_260 = (undefined4 *)0x0;
          local_268 = local_b0;
          (**(code **)(*local_178 + 0x38))(local_178,0xc,local_238,local_230);
        }
        else if (param_4 == 5) {
          local_168 = (longlong *)FUN_143bab910(param_1);
          local_260 = (undefined4 *)0x0;
          local_268 = local_b0;
          (**(code **)(*local_168 + 0x38))(local_168,0x10,local_238,local_230);
        }
      }
    }
    FUN_143a8e070(param_2,local_b0);
    FUN_143a8dc60(local_b0);
    break;
  case 0x13:
    if (param_4 < 3) {
      local_260 = (undefined4 *)CONCAT44(local_260._4_4_,10);
      local_268 = (undefined1 *)CONCAT44(local_268._4_4_,param_4);
      FUN_143bab9b0(param_1,local_240,param_2,local_258);
      break;
    }
    local_258 = FUN_143b512d0(param_8,7,param_9);
    cVar1 = FUN_143a8b0e0(*param_9);
    if (cVar1 != '\0') {
      FUN_143a8dc60(local_88);
      return;
    }
  case 9:
    if (param_4 == 5) {
      FUN_143ba10c0(param_2,local_258,*(undefined8 *)(*(longlong *)(param_1 + 0x350) + 200),
                    *(undefined4 *)(*(longlong *)(param_1 + 0x350) + 0xd0));
      local_254 = 6;
    }
    else if (param_4 == 4) {
      FUN_143ba10c0(param_2,local_258,*(undefined8 *)(*(longlong *)(param_1 + 0x350) + 0x98),
                    *(undefined4 *)(*(longlong *)(param_1 + 0x350) + 0xa0));
      local_254 = 4;
    }
    else if (param_4 == 6) {
      FUN_143ba10c0(param_2,local_258,*(undefined8 *)(*(longlong *)(param_1 + 0x350) + 0xb8),
                    *(undefined4 *)(*(longlong *)(param_1 + 0x350) + 0xc0));
      local_254 = 4;
    }
    else {
      FUN_143ba10c0(param_2,local_258,*(undefined8 *)(*(longlong *)(param_1 + 0x350) + 0xa8),
                    *(undefined4 *)(*(longlong *)(param_1 + 0x350) + 0xb0));
      local_254 = 4;
    }
    break;
  case 0x19:
    if (param_4 < 3) {
      local_260 = (undefined4 *)CONCAT44(local_260._4_4_,10);
      local_268 = (undefined1 *)CONCAT44(local_268._4_4_,1);
      FUN_143bab9b0(param_1,local_240,param_2,local_258);
    }
    else {
      local_258 = FUN_143b512d0(param_8,7,param_9);
      cVar1 = FUN_143a8b0e0(*param_9);
      if (cVar1 != '\0') {
        FUN_143a8dc60(local_88);
        return;
      }
      if (param_4 == 5) {
        FUN_143ba10c0(param_2,local_258,*(undefined8 *)(*(longlong *)(param_1 + 0x350) + 0x108),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x350) + 0x110));
        local_254 = 6;
      }
      else if (param_4 == 4) {
        FUN_143ba10c0(param_2,local_258,*(undefined8 *)(*(longlong *)(param_1 + 0x350) + 0xd8),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x350) + 0xe0));
        local_254 = 5;
      }
      else if (param_4 == 6) {
        FUN_143ba10c0(param_2,local_258,*(undefined8 *)(*(longlong *)(param_1 + 0x350) + 0xf8),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x350) + 0x100));
        local_254 = 5;
      }
      else {
        FUN_143ba10c0(param_2,local_258,*(undefined8 *)(*(longlong *)(param_1 + 0x350) + 0xe8),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x350) + 0xf0));
        local_254 = 5;
      }
    }
    break;
  case 0x1b:
    if (param_4 < 4) {
      if (param_4 == 3) {
        local_e8 = *(longlong *)(param_1 + 0x350);
        FUN_143ba10c0(param_2,(longlong)local_258 / 3 & 0xffffffff,
                      *(undefined8 *)(*(longlong *)(param_1 + 0x350) + 0x138),
                      *(undefined4 *)(local_e8 + 0x140));
      }
      else {
        local_260 = (undefined4 *)CONCAT44(local_260._4_4_,10);
        local_268 = (undefined1 *)CONCAT44(local_268._4_4_,param_4);
        FUN_143bab9b0(param_1,local_240,param_2,local_258 / 3 + 1);
      }
    }
    else {
      local_d8 = *(longlong *)(param_1 + 0x350);
      FUN_143ba10c0(param_2,(longlong)local_258 / 3 & 0xffffffff,
                    *(undefined8 *)(*(longlong *)(param_1 + 0x350) + 0x128),
                    *(undefined4 *)(local_d8 + 0x130));
    }
    break;
  case 0x1c:
    if (param_4 < 4) {
      if (param_4 == 3) {
        local_f0 = *(longlong *)(param_1 + 0x350);
        FUN_143ba10c0(param_2,(longlong)local_258 / 3 & 0xffffffff,
                      *(undefined8 *)(*(longlong *)(param_1 + 0x350) + 0x158),
                      *(undefined4 *)(local_f0 + 0x160));
      }
      else {
        local_260 = (undefined4 *)CONCAT44(local_260._4_4_,10);
        local_268 = (undefined1 *)CONCAT44(local_268._4_4_,param_4);
        FUN_143bab9b0(param_1,local_240,param_2,local_258 / 3 + 1);
      }
    }
    else {
      local_f8 = *(longlong *)(param_1 + 0x350);
      FUN_143ba10c0(param_2,(longlong)local_258 / 3 & 0xffffffff,
                    *(undefined8 *)(*(longlong *)(param_1 + 0x350) + 0x148),
                    *(undefined4 *)(local_f8 + 0x150));
    }
    break;
  case 0x1e:
    if ((*(longlong *)(*(longlong *)(param_1 + 0x350) + 0x178) != 0) &&
       (local_258 <= *(int *)(*(longlong *)(param_1 + 0x350) + 0x180))) {
      FUN_143ba10c0(param_2,local_258 + -1,*(undefined8 *)(*(longlong *)(param_1 + 0x350) + 0x178),
                    *(undefined4 *)(*(longlong *)(param_1 + 0x350) + 0x180));
      break;
    }
  case 1:
  case 0x12:
    cVar1 = FUN_143b0fd00(param_1 + 0x188,local_88);
    if (((cVar1 == '\0') && (5000 < local_258)) && (local_258 < 6000)) {
      local_258 = local_258 + -5000;
    }
    if (param_4 == 2) {
      local_260 = (undefined4 *)CONCAT44(local_260._4_4_,2);
      local_268 = (undefined1 *)CONCAT44(local_268._4_4_,2);
      FUN_143bab9b0(param_1,local_240,param_2,local_258);
    }
    else {
      local_260 = (undefined4 *)CONCAT44(local_260._4_4_,10);
      local_268 = (undefined1 *)CONCAT44(local_268._4_4_,param_4);
      FUN_143bab9b0(param_1,local_240,param_2,local_258);
    }
  }
  if (param_6 == 0) {
    uVar3 = FUN_143a8e3e0(param_2,local_220);
    cVar1 = FUN_143a9e940(uVar3);
    if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x388) != 0)) {
      local_250 = '\0';
      local_21c = param_5;
      if (param_5 == 0x102) {
        local_250 = '\x01';
      }
      else if (param_5 == 0x103) {
        local_250 = *(char *)(*(longlong *)(param_1 + 0x350) + 0x340 + (longlong)local_254 * 2);
      }
      else if (param_5 == 0x104) {
        local_250 = *(char *)(*(longlong *)(param_1 + 0x350) + (longlong)local_254 * 2 + 0x341);
      }
      if (local_250 != '\0') {
        FUN_143a8d400(local_38,param_2,local_220);
        FUN_143e1dc70(local_38,*(undefined8 *)(param_1 + 0x388),param_1 + 0x1d8,0x300);
        uVar3 = FUN_143a904f0(param_2);
        FUN_143a90ac0(param_2,local_220,uVar3,local_38);
        FUN_143a8dc60(local_38);
      }
    }
  }
  uVar3 = FUN_143a904f0(param_2);
  local_100 = *param_7;
  (**(code **)(local_100 + 8))
            (param_7,*(undefined4 *)(&DAT_145d17b50 + (longlong)local_24c * 4),local_220,uVar3);
  FUN_143a8dc60(local_88);
  return;
}



// FUNCTION 143ba7c80 FUN_143ba7c80 body=14683 status=ok
// SIG undefined FUN_143ba7c80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143ba7c80(longlong *param_1,longlong *param_2,int *param_3,undefined2 param_4,int param_5,
                 char param_6,undefined1 param_7,undefined8 param_8,int *param_9,longlong *param_10,
                 int param_11,longlong *param_12,longlong param_13)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined1 auStack_428 [32];
  longlong local_408;
  undefined8 local_400;
  longlong *local_3f8;
  longlong *local_3f0;
  int local_3e8;
  char local_3e4;
  int local_3e0;
  undefined4 local_3dc;
  undefined1 local_3d8 [16];
  char local_3c8;
  int local_3c4;
  int local_3c0;
  char local_3bc;
  char local_3bb;
  undefined1 local_3ba;
  undefined1 local_3b9;
  int local_3b8;
  int local_3b4;
  int local_3b0;
  int local_3ac;
  int local_3a8;
  int local_3a4;
  int local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  int local_390;
  int local_38c;
  int local_388;
  int local_384;
  undefined4 local_380;
  int local_37c;
  int local_378;
  int local_374;
  int local_370;
  int local_36c;
  uint local_368;
  int local_364;
  undefined4 local_360;
  undefined4 local_35c;
  int local_358;
  undefined4 local_354;
  int local_350;
  undefined4 local_34c;
  undefined4 local_348;
  int local_344;
  int local_340;
  int local_33c;
  int local_338;
  undefined8 *local_330;
  longlong *local_328;
  longlong *local_320;
  int local_318;
  undefined4 local_314;
  int local_310;
  int local_30c;
  int local_308;
  int local_304;
  int local_300;
  int local_2fc;
  int local_2f8;
  int local_2f4;
  int local_2f0;
  undefined4 local_2ec;
  int local_2e8;
  int local_2e4;
  int local_2e0;
  int local_2dc;
  int local_2d8;
  int local_2d4;
  int local_2d0;
  int local_2cc;
  int local_2c8;
  int local_2c4;
  int local_2c0;
  int local_2bc;
  int local_2b8;
  int local_2b4;
  int local_2b0;
  int local_2ac;
  int local_2a8;
  int local_2a4;
  int local_2a0;
  int local_29c;
  int local_298;
  undefined4 local_294;
  int local_290;
  int local_28c;
  int local_288;
  int local_284;
  int local_280;
  int local_27c;
  int local_278;
  int local_274;
  int local_270;
  int local_26c;
  int local_268;
  undefined8 *local_260;
  int local_258;
  undefined8 *local_250;
  int local_248;
  undefined8 local_240;
  int local_238;
  int local_234;
  int local_230;
  undefined4 local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  int local_20c;
  undefined4 local_208;
  int local_204;
  undefined4 local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  longlong *local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  longlong local_198;
  longlong local_190;
  undefined8 local_188;
  longlong local_180;
  undefined8 *local_178;
  longlong *local_170;
  longlong *local_168;
  longlong local_160;
  undefined8 local_158;
  longlong *local_150;
  longlong local_148 [5];
  undefined1 local_120 [40];
  call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
  local_f8 [224];
  ulonglong local_18;
  
  local_158 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_428;
  FUN_143b686d0(local_f8);
  local_3e8 = 0;
  local_3b0 = 0;
  local_3dc = 0;
  FUN_143b16ce0(local_3d8,0);
  local_3e0 = FUN_143bfe310(param_4);
  FUN_143a8ac30(local_148);
  local_3e4 = '\0';
  if (local_3e0 == 0x23) {
    local_1fc = -*param_3;
    FUN_143a8dc60(local_148);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
    Concurrency::
    call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
    ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              (local_f8);
    return local_1fc;
  }
  local_240 = FUN_143ba2ae0(param_1,local_3e0);
  local_398 = *(undefined4 *)(&DAT_145d17ac0 + (longlong)local_3e0 * 4);
  FUN_143a8d9f0(local_120,&DAT_145d183dc,4,0);
  if (param_12 != (longlong *)0x0) {
    (**(code **)(*param_12 + 0x70))(param_12,&local_240,1);
  }
  pcVar5 = (char *)(**(code **)(*param_10 + 0xb0))(param_10);
  iVar3 = _guard_xfg_dispatch_icall_nop(pcVar5,"chinese");
  if (iVar3 != 0) {
    pcVar5 = (char *)(**(code **)(*param_10 + 0xb0))(param_10);
    iVar3 = _guard_xfg_dispatch_icall_nop(pcVar5,"dangi");
    if (iVar3 != 0) {
      local_3bc = '\0';
      goto LAB_143ba7e3d;
    }
  }
  local_3bc = '\x01';
LAB_143ba7e3d:
  local_3c8 = local_3bc;
  while( true ) {
    iVar3 = FUN_143a904f0(param_2);
    if (iVar3 <= *param_3) {
      local_27c = -*param_3;
      FUN_143a8dc60(local_120);
      FUN_143a8dc60(local_148);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      return local_27c;
    }
    local_368 = FUN_143a8e3e0(param_2,*param_3);
    cVar1 = FUN_143a9e2d0(local_368);
    if ((cVar1 == '\0') && (cVar1 = FUN_143b28380(local_368), cVar1 == '\0')) break;
    if (local_368 < 0x10000) {
      local_358 = 1;
    }
    else {
      local_358 = 2;
    }
    *param_3 = *param_3 + local_358;
  }
  FUN_143b0fce0(local_3d8,*param_3);
  if ((((((((local_3e0 == 4) || (local_3e0 == 5)) || (local_3e0 == 0xf)) ||
         ((local_3e0 == 0x10 || ((local_3e0 == 0x13 && (param_5 < 3)))))) ||
        ((local_3e0 == 0x19 && (param_5 < 3)))) ||
       ((((local_3e0 == 2 && (param_5 < 3)) || ((local_3e0 == 0x1a && (param_5 < 3)))) ||
        ((local_3e0 == 0x1b && (param_5 < 3)))))) || ((local_3e0 == 0x1c && (param_5 < 3)))) ||
     (((((local_3e0 == 1 || (local_3e0 == 0x12)) || (local_3e0 == 0x1e)) ||
       ((local_3e0 == 0 && (local_3c8 != '\0')))) || (local_3e0 == 8)))) {
    local_37c = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_3d8);
    local_3bb = '\0';
    if ((param_12 != (longlong *)0x0) && ((local_3e0 == 2 || (local_3e0 == 0x1a)))) {
      local_330 = (undefined8 *)
                  (**(code **)(*param_12 + 0xb8))(param_12,param_2,local_3d8,&local_274);
      if ((local_330 == (undefined8 *)0x0) ||
         (((local_274 != 1 ||
           (iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                    ::GetIndex(local_3d8), iVar3 <= local_37c)) ||
          (cVar1 = FUN_143b69680(local_330), cVar1 == '\0')))) {
        FUN_143b0fce0(local_3d8,local_37c);
        FUN_143b55270(param_10,0x16,0);
      }
      else {
        local_3bb = '\x01';
        uVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_330);
        FUN_143b69930(local_f8,uVar4);
        FUN_143b55270(param_10,0x16,1);
        local_178 = local_330;
        local_260 = local_330;
        local_250 = local_330;
        if (local_330 == (undefined8 *)0x0) {
          local_188 = 0;
        }
        else {
          if (local_330[-1] == 0) {
            FMemory::operator_delete(local_330 + -1);
            local_1d8 = 0;
          }
          else {
            local_1d8 = (**(code **)*local_330)(local_330,3);
          }
          local_188 = local_1d8;
        }
      }
    }
    if (local_3bb == '\0') {
      local_1c8 = param_2;
      if (param_6 != '\0') {
        local_26c = *param_3 + param_5;
        iVar3 = FUN_143a904f0(param_2);
        if (iVar3 < local_26c) {
          local_1f4 = -*param_3;
          FUN_143a8dc60(local_120);
          FUN_143a8dc60(local_148);
          UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
          Concurrency::
          call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
          ::
          ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                    (local_f8);
          return local_1f4;
        }
        local_160 = *param_2;
        (**(code **)(local_160 + 0x10))(param_2,0,*param_3 + param_5,local_148);
        local_1c8 = local_148;
      }
      local_400 = local_240;
      local_408 = CONCAT71(local_408._1_7_,param_7);
      FUN_143ba5200(param_1,local_1c8,local_f8,local_3d8);
    }
    local_3a4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_3d8);
    if (local_37c < local_3a4) {
      local_3e8 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_f8);
      local_3e4 = '\x01';
      if (local_3e8 < 0) {
        local_408 = CONCAT71(local_408._1_7_,1);
        local_3a4 = FUN_143ba1960(param_1,param_2,local_3a4,param_11 + 1);
        iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_3d8);
        if (local_3a4 != iVar3) {
          local_3e8 = -local_3e8;
        }
      }
      else {
        local_408 = (ulonglong)local_408._1_7_ << 8;
        local_3a4 = FUN_143ba1960(param_1,param_2,local_3a4,param_11 + 1);
      }
      cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,0,&local_3dc);
      if (((cVar1 == '\0') &&
          (local_374 = *(int *)(&DAT_145d17df0 + (longlong)local_3e0 * 4), -1 < local_374)) &&
         ((iVar3 = (**(code **)(*param_10 + 0x70))(param_10,local_398),
          iVar3 + local_374 < local_3e8 ||
          (iVar3 = (**(code **)(*param_10 + 0x60))(param_10,local_398),
          local_3e8 < iVar3 + local_374)))) {
        local_310 = -*param_3;
        FUN_143a8dc60(local_120);
        FUN_143a8dc60(local_148);
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
        Concurrency::
        call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
        ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                  (local_f8);
        return local_310;
      }
      FUN_143b0fce0(local_3d8,local_3a4);
    }
  }
  local_384 = local_3e0 + -1;
  switch(local_384) {
  case 3:
  case 4:
  case 0xe:
  case 0xf:
    if ((local_3e8 < 0) || (0x18 < local_3e8)) {
      local_248 = -*param_3;
      FUN_143a8dc60(local_120);
      FUN_143a8dc60(local_148);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      return local_248;
    }
  case 0:
  case 7:
  case 0x11:
    if (local_3e4 == '\0') {
      local_308 = -*param_3;
      FUN_143a8dc60(local_120);
      FUN_143a8dc60(local_148);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      return local_308;
    }
  }
  local_344 = local_3e0;
  switch(local_3e0) {
  case 0:
    if (local_3c8 == '\0') {
      if (param_5 == 5) {
        local_3f0 = param_10;
        local_3f8 = (longlong *)0x0;
        local_400 = CONCAT44(local_400._4_4_,*(undefined4 *)(param_1[0x6a] + 0x30));
        local_408 = *(undefined8 *)(param_1[0x6a] + 0x28);
        local_3b0 = FUN_143ba3a30(param_1,param_2,*param_3,0);
      }
      else if (param_5 == 4) {
        local_3f0 = param_10;
        local_3f8 = (longlong *)0x0;
        local_400 = CONCAT44(local_400._4_4_,*(undefined4 *)(param_1[0x6a] + 0x20));
        local_408 = *(undefined8 *)(param_1[0x6a] + 0x18);
        local_3b0 = FUN_143ba3a30(param_1,param_2,*param_3,0);
      }
      else {
        local_3f0 = param_10;
        local_3f8 = (longlong *)0x0;
        local_400 = CONCAT44(local_400._4_4_,*(undefined4 *)(param_1[0x6a] + 0x10));
        local_408 = *(undefined8 *)(param_1[0x6a] + 8);
        local_3b0 = FUN_143ba3a30(param_1,param_2,*param_3,0);
      }
      if (local_3b0 == -*param_3) {
        local_3b0 = local_3b0 + -1;
      }
      local_238 = local_3b0;
      FUN_143a8dc60(local_120);
      FUN_143a8dc60(local_148);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      return local_238;
    }
    if (local_3e4 == '\0') {
      local_1f0 = -*param_3;
      FUN_143a8dc60(local_120);
      FUN_143a8dc60(local_148);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      return local_1f0;
    }
    FUN_143b55270(param_10,0,local_3e8);
    local_300 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_3d8);
    FUN_143a8dc60(local_120);
    FUN_143a8dc60(local_148);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
    Concurrency::
    call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
    ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              (local_f8);
    return local_300;
  case 1:
    cVar1 = FUN_143b0fd00(param_1 + 0x31,local_120);
    if ((cVar1 == '\0') && (local_3e8 < 1000)) {
      local_3e8 = local_3e8 + 5000;
    }
    else {
      iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(local_3d8);
      if ((iVar3 - *param_3 == 2) && (local_3c8 == '\0')) {
        uVar2 = FUN_143a8e4f0(param_2,*param_3);
        cVar1 = FUN_143a9e680(uVar2);
        if (cVar1 != '\0') {
          uVar2 = FUN_143a8e4f0(param_2,*param_3 + 1);
          cVar1 = FUN_143a9e680(uVar2);
          if (((cVar1 != '\0') && (param_5 < 3)) && ((char)param_1[0x70] != '\0')) {
            local_33c = (int)param_1[0x6d] % 100;
            local_3ba = local_3e8 == local_33c;
            *(undefined1 *)param_8 = local_3ba;
            if (local_3e8 < local_33c) {
              local_364 = 100;
            }
            else {
              local_364 = 0;
            }
            local_3e8 = local_3e8 + ((int)param_1[0x6d] / 100) * 100 + local_364;
          }
        }
      }
    }
    FUN_143b55270(param_10,1,local_3e8);
    if (-1 < *param_9) {
      local_150 = param_10;
      cVar1 = FUN_143b9bc30(local_3e8);
      if ((cVar1 == '\0') && (5 < *param_9)) {
        FUN_143b55270(param_10,2,*param_9);
      }
      else {
        FUN_143b55270(param_10,2,*param_9 + -1);
      }
      *param_9 = -1;
    }
    local_2f8 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_3d8);
    FUN_143a8dc60(local_120);
    FUN_143a8dc60(local_148);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
    Concurrency::
    call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
    ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              (local_f8);
    return local_2f8;
  case 2:
  case 0x1a:
    if (local_3e4 != '\0') {
      pcVar5 = (char *)(**(code **)(*param_10 + 0xb0))(param_10);
      iVar3 = _guard_xfg_dispatch_icall_nop(pcVar5,"hebrew");
      if (iVar3 == 0) {
        local_168 = param_10;
        cVar1 = FUN_143b539a0(param_10,1);
        if (cVar1 == '\0') {
          *param_9 = local_3e8;
        }
        else {
          local_22c = 0;
          uVar4 = FUN_143b512d0(local_168,1,&local_22c);
          cVar1 = FUN_143b9bc30(uVar4);
          if ((cVar1 == '\0') && (5 < local_3e8)) {
            FUN_143b55270(param_10,2,local_3e8);
          }
          else {
            FUN_143b55270(param_10,2,local_3e8 + -1);
          }
        }
      }
      else {
        FUN_143b55270(param_10,2,local_3e8 + -1);
      }
      local_2e0 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_3d8);
      FUN_143a8dc60(local_120);
      FUN_143a8dc60(local_148);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      return local_2e0;
    }
    local_328 = (longlong *)0x0;
    local_320 = (longlong *)0x0;
    if ((*(longlong *)(param_1[0x6a] + 0x168) != 0) && (6 < *(int *)(param_1[0x6a] + 0x170))) {
      if (local_3e0 == 2) {
        local_328 = *(longlong **)(param_1[0x6a] + 0x168);
        local_320 = (longlong *)(*(longlong *)(param_1[0x6a] + 0x168) + 0x28);
      }
      else {
        local_328 = (longlong *)(*(longlong *)(param_1[0x6a] + 0x168) + 0x78);
        local_320 = (longlong *)(*(longlong *)(param_1[0x6a] + 0x168) + 0xa0);
      }
    }
    local_3b8 = 0;
    if (local_3e0 == 2) {
      cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,3,&local_3dc);
      if ((cVar1 != '\0') || (param_5 == 4)) {
        local_3f0 = param_10;
        local_3f8 = local_328;
        local_400 = CONCAT44(local_400._4_4_,*(undefined4 *)(param_1[0x6a] + 0x40));
        local_408 = *(longlong *)(param_1[0x6a] + 0x38);
        local_3b8 = FUN_143ba3a30(param_1,param_2,*param_3,2);
        if (0 < local_3b8) {
          local_204 = local_3b8;
          FUN_143a8dc60(local_120);
          FUN_143a8dc60(local_148);
          UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
          Concurrency::
          call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
          ::
          ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                    (local_f8);
          return local_204;
        }
      }
      cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,3,&local_3dc);
      if ((cVar1 != '\0') || (param_5 == 3)) {
        local_3f0 = param_10;
        local_3f8 = local_320;
        local_400 = CONCAT44(local_400._4_4_,*(undefined4 *)(param_1[0x6a] + 0x50));
        local_408 = *(longlong *)(param_1[0x6a] + 0x48);
        local_3b8 = FUN_143ba3a30(param_1,param_2,*param_3,2);
      }
    }
    else {
      cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,3,&local_3dc);
      if ((cVar1 != '\0') || (param_5 == 4)) {
        local_3f0 = param_10;
        local_3f8 = local_328;
        local_400 = CONCAT44(local_400._4_4_,*(undefined4 *)(param_1[0x6a] + 0x70));
        local_408 = *(longlong *)(param_1[0x6a] + 0x68);
        local_3b8 = FUN_143ba3a30(param_1,param_2,*param_3,2);
        if (0 < local_3b8) {
          local_2d8 = local_3b8;
          FUN_143a8dc60(local_120);
          FUN_143a8dc60(local_148);
          UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
          Concurrency::
          call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
          ::
          ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                    (local_f8);
          return local_2d8;
        }
      }
      cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,3,&local_3dc);
      if ((cVar1 != '\0') || (param_5 == 3)) {
        local_3f0 = param_10;
        local_3f8 = local_320;
        local_400 = CONCAT44(local_400._4_4_,*(undefined4 *)(param_1[0x6a] + 0x80));
        local_408 = *(longlong *)(param_1[0x6a] + 0x78);
        local_3b8 = FUN_143ba3a30(param_1,param_2,*param_3,2);
      }
    }
    if ((0 < local_3b8) ||
       (cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,1,&local_3dc), cVar1 == '\0')) {
      local_224 = local_3b8;
      FUN_143a8dc60(local_120);
      FUN_143a8dc60(local_148);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      return local_224;
    }
    break;
  case 4:
    iVar3 = (**(code **)(*param_10 + 0x70))(param_10,0xb);
    if (local_3e8 == iVar3 + 1) {
      local_3e8 = 0;
    }
  case 5:
    FUN_143b55270(param_10,0xb,local_3e8);
    local_2d0 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_3d8);
    FUN_143a8dc60(local_120);
    FUN_143a8dc60(local_148);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
    Concurrency::
    call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
    ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              (local_f8);
    return local_2d0;
  case 8:
    local_3a0 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_3d8);
    local_3a0 = local_3a0 - *param_3;
    if (local_3a0 < 3) {
      for (; local_3a0 < 3; local_3a0 = local_3a0 + 1) {
        local_3e8 = local_3e8 * 10;
      }
    }
    else {
      local_36c = 1;
      for (; 3 < local_3a0; local_3a0 = local_3a0 + -1) {
        local_36c = local_36c * 10;
      }
      local_3e8 = local_3e8 / local_36c;
    }
    FUN_143b55270(param_10,0xe,local_3e8);
    local_1e4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_3d8);
    FUN_143a8dc60(local_120);
    FUN_143a8dc60(local_148);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
    Concurrency::
    call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
    ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              (local_f8);
    return local_1e4;
  case 0xe:
    local_3f0 = param_10;
    local_3f8 = (longlong *)0x0;
    local_400 = CONCAT44(local_400._4_4_,*(undefined4 *)(param_1[0x6a] + 0x120));
    local_408 = *(undefined8 *)(param_1[0x6a] + 0x118);
    local_234 = FUN_143ba3a30(param_1,param_2,*param_3,9);
    FUN_143a8dc60(local_120);
    FUN_143a8dc60(local_148);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
    Concurrency::
    call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
    ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              (local_f8);
    return local_234;
  case 0xf:
    iVar3 = (**(code **)(*param_10 + 0x90))(param_10,10);
    if (local_3e8 == iVar3 + 1) {
      local_3e8 = 0;
    }
  case 0x10:
    FUN_143b55270(param_10,10,local_3e8);
    local_298 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_3d8);
    FUN_143a8dc60(local_120);
    FUN_143a8dc60(local_148);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
    Concurrency::
    call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
    ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              (local_f8);
    return local_298;
  case 0x11:
    if (param_5 < 4) {
      local_348 = 4;
    }
    else {
      local_348 = 3;
    }
    local_208 = local_348;
    uVar6 = FUN_143bab910(param_1);
    local_408 = param_13;
    local_190 = FUN_143b8d380(uVar6,local_208,param_2,local_3d8);
    if (local_190 != 0) {
      FUN_143b4e8a0(param_10,local_190);
      local_268 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_3d8);
      FUN_143a8dc60(local_120);
      FUN_143a8dc60(local_148);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      return local_268;
    }
    local_190 = 0;
    break;
  case 0x12:
    cVar1 = FUN_143b0fd00(param_1 + 0x31,local_120);
    if ((cVar1 == '\0') && (local_3e8 < 1000)) {
      local_3e8 = local_3e8 + 5000;
    }
    else {
      iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(local_3d8);
      if (iVar3 - *param_3 == 2) {
        uVar2 = FUN_143a8e4f0(param_2,*param_3);
        cVar1 = FUN_143a9e680(uVar2);
        if (cVar1 != '\0') {
          uVar2 = FUN_143a8e4f0(param_2,*param_3 + 1);
          cVar1 = FUN_143a9e680(uVar2);
          if ((cVar1 != '\0') && ((char)param_1[0x70] != '\0')) {
            local_340 = (int)param_1[0x6d] % 100;
            local_3b9 = local_3e8 == local_340;
            *(undefined1 *)param_8 = local_3b9;
            if (local_3e8 < local_340) {
              local_350 = 100;
            }
            else {
              local_350 = 0;
            }
            local_3e8 = local_3e8 + ((int)param_1[0x6d] / 100) * 100 + local_350;
          }
        }
      }
    }
    FUN_143b55270(param_10,0x11,local_3e8);
    local_1e8 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_3d8);
    FUN_143a8dc60(local_120);
    FUN_143a8dc60(local_148);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
    Concurrency::
    call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
    ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              (local_f8);
    return local_1e8;
  case 0x13:
    if (local_3e4 != '\0') {
      FUN_143b55270(param_10,0x12,local_3e8);
      local_2c8 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_3d8);
      FUN_143a8dc60(local_120);
      FUN_143a8dc60(local_148);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      return local_2c8;
    }
  case 9:
    local_3c4 = 0;
    cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,3,&local_3dc);
    if ((cVar1 != '\0') || (param_5 == 4)) {
      local_3f0 = param_10;
      local_3f8 = (longlong *)0x0;
      local_400 = CONCAT44(local_400._4_4_,*(undefined4 *)(param_1[0x6a] + 0xa0));
      local_408 = *(longlong *)(param_1[0x6a] + 0x98);
      local_3c4 = FUN_143ba3a30(param_1,param_2,*param_3,7);
      if (0 < local_3c4) {
        local_21c = local_3c4;
        FUN_143a8dc60(local_120);
        FUN_143a8dc60(local_148);
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
        Concurrency::
        call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
        ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                  (local_f8);
        return local_21c;
      }
    }
    cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,3,&local_3dc);
    if ((cVar1 != '\0') || (param_5 == 3)) {
      local_3f0 = param_10;
      local_3f8 = (longlong *)0x0;
      local_400 = CONCAT44(local_400._4_4_,*(undefined4 *)(param_1[0x6a] + 0xb0));
      local_408 = *(longlong *)(param_1[0x6a] + 0xa8);
      local_3c4 = FUN_143ba3a30(param_1,param_2,*param_3,7);
      if (0 < local_3c4) {
        local_2c0 = local_3c4;
        FUN_143a8dc60(local_120);
        FUN_143a8dc60(local_148);
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
        Concurrency::
        call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
        ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                  (local_f8);
        return local_2c0;
      }
    }
    cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,3,&local_3dc);
    if ((cVar1 != '\0') || (param_5 == 6)) {
      local_3f0 = param_10;
      local_3f8 = (longlong *)0x0;
      local_400 = CONCAT44(local_400._4_4_,*(undefined4 *)(param_1[0x6a] + 0xc0));
      local_408 = *(longlong *)(param_1[0x6a] + 0xb8);
      local_3c4 = FUN_143ba3a30(param_1,param_2,*param_3,7);
      if (0 < local_3c4) {
        local_318 = local_3c4;
        FUN_143a8dc60(local_120);
        FUN_143a8dc60(local_148);
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
        Concurrency::
        call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
        ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                  (local_f8);
        return local_318;
      }
    }
    cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,3,&local_3dc);
    if ((cVar1 != '\0') || (param_5 == 5)) {
      local_3f0 = param_10;
      local_3f8 = (longlong *)0x0;
      local_400 = CONCAT44(local_400._4_4_,*(undefined4 *)(param_1[0x6a] + 0xd0));
      local_408 = *(longlong *)(param_1[0x6a] + 200);
      local_3c4 = FUN_143ba3a30(param_1,param_2,*param_3,7);
      if (0 < local_3c4) {
        local_2b8 = local_3c4;
        FUN_143a8dc60(local_120);
        FUN_143a8dc60(local_148);
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
        Concurrency::
        call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
        ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                  (local_f8);
        return local_2b8;
      }
    }
    cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,1,&local_3dc);
    if ((cVar1 == '\0') || (local_3e0 == 9)) {
      local_214 = local_3c4;
      FUN_143a8dc60(local_120);
      FUN_143a8dc60(local_148);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      return local_214;
    }
    break;
  case 0x17:
    if (param_5 < 4) {
      local_35c = 0xc;
    }
    else {
      if (param_5 == 5) {
        local_360 = 0xf;
      }
      else {
        local_360 = 5;
      }
      local_35c = local_360;
    }
    local_200 = local_35c;
    uVar6 = FUN_143bab910(param_1);
    local_408 = param_13;
    local_1a8 = FUN_143b8d380(uVar6,local_200,param_2,local_3d8);
    if (local_1a8 != 0) {
      FUN_143b4e8a0(param_10,local_1a8);
      local_258 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_3d8);
      FUN_143a8dc60(local_120);
      FUN_143a8dc60(local_148);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      return local_258;
    }
    local_1f8 = -*param_3;
    FUN_143a8dc60(local_120);
    FUN_143a8dc60(local_148);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
    Concurrency::
    call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
    ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              (local_f8);
    return local_1f8;
  case 0x18:
    if (param_5 < 4) {
      local_354 = 2;
    }
    else {
      local_354 = 1;
    }
    local_314 = local_354;
    uVar6 = FUN_143bab910(param_1);
    local_408 = param_13;
    local_1b8 = FUN_143b8d380(uVar6,local_314,param_2,local_3d8);
    if (local_1b8 != 0) {
      FUN_143b4e8a0(param_10,local_1b8);
      local_30c = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_3d8);
      FUN_143a8dc60(local_120);
      FUN_143a8dc60(local_148);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      return local_30c;
    }
    local_304 = -*param_3;
    FUN_143a8dc60(local_120);
    FUN_143a8dc60(local_148);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
    Concurrency::
    call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
    ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              (local_f8);
    return local_304;
  case 0x19:
    if (local_3e4 != '\0') {
      FUN_143b55270(param_10,0x12,local_3e8);
      local_2b0 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_3d8);
      FUN_143a8dc60(local_120);
      FUN_143a8dc60(local_148);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      return local_2b0;
    }
    local_3b4 = 0;
    cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,3,&local_3dc);
    if ((cVar1 != '\0') || (param_5 == 4)) {
      local_3f0 = param_10;
      local_3f8 = (longlong *)0x0;
      local_400 = CONCAT44(local_400._4_4_,*(undefined4 *)(param_1[0x6a] + 0xe0));
      local_408 = *(longlong *)(param_1[0x6a] + 0xd8);
      local_3b4 = FUN_143ba3a30(param_1,param_2,*param_3,7);
      if (0 < local_3b4) {
        local_1ec = local_3b4;
        FUN_143a8dc60(local_120);
        FUN_143a8dc60(local_148);
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
        Concurrency::
        call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
        ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                  (local_f8);
        return local_1ec;
      }
    }
    cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,3,&local_3dc);
    if ((cVar1 != '\0') || (param_5 == 3)) {
      local_3f0 = param_10;
      local_3f8 = (longlong *)0x0;
      local_400 = CONCAT44(local_400._4_4_,*(undefined4 *)(param_1[0x6a] + 0xf0));
      local_408 = *(longlong *)(param_1[0x6a] + 0xe8);
      local_3b4 = FUN_143ba3a30(param_1,param_2,*param_3,7);
      if (0 < local_3b4) {
        local_2a8 = local_3b4;
        FUN_143a8dc60(local_120);
        FUN_143a8dc60(local_148);
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
        Concurrency::
        call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
        ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                  (local_f8);
        return local_2a8;
      }
    }
    cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,3,&local_3dc);
    if ((cVar1 != '\0') || (param_5 == 6)) {
      local_3f0 = param_10;
      local_3f8 = (longlong *)0x0;
      local_400 = CONCAT44(local_400._4_4_,*(undefined4 *)(param_1[0x6a] + 0x100));
      local_408 = *(longlong *)(param_1[0x6a] + 0xf8);
      local_3b4 = FUN_143ba3a30(param_1,param_2,*param_3,7);
      if (0 < local_3b4) {
        local_20c = local_3b4;
        FUN_143a8dc60(local_120);
        FUN_143a8dc60(local_148);
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
        Concurrency::
        call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
        ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                  (local_f8);
        return local_20c;
      }
    }
    cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,1,&local_3dc);
    if (cVar1 == '\0') {
      local_2a0 = local_3b4;
      FUN_143a8dc60(local_120);
      FUN_143a8dc60(local_148);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      return local_2a0;
    }
    break;
  case 0x1b:
    if (local_3e4 != '\0') {
      FUN_143b55270(param_10,2,(local_3e8 + -1) * 3);
      local_230 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_3d8);
      FUN_143a8dc60(local_120);
      FUN_143a8dc60(local_148);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      return local_230;
    }
    local_3ac = 0;
    cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,3,&local_3dc);
    if ((cVar1 != '\0') || (param_5 == 4)) {
      local_3f8 = param_10;
      local_400 = CONCAT44(local_400._4_4_,*(undefined4 *)(param_1[0x6a] + 0x130));
      local_408 = *(longlong *)(param_1[0x6a] + 0x128);
      local_3ac = FUN_143ba37f0(param_1,param_2,*param_3,2);
      if (0 < local_3ac) {
        local_290 = local_3ac;
        FUN_143a8dc60(local_120);
        FUN_143a8dc60(local_148);
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
        Concurrency::
        call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
        ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                  (local_f8);
        return local_290;
      }
    }
    cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,3,&local_3dc);
    if ((cVar1 != '\0') || (param_5 == 3)) {
      local_3f8 = param_10;
      local_400 = CONCAT44(local_400._4_4_,*(undefined4 *)(param_1[0x6a] + 0x140));
      local_408 = *(longlong *)(param_1[0x6a] + 0x138);
      local_3ac = FUN_143ba37f0(param_1,param_2,*param_3,2);
      if (0 < local_3ac) {
        local_228 = local_3ac;
        FUN_143a8dc60(local_120);
        FUN_143a8dc60(local_148);
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
        Concurrency::
        call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
        ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                  (local_f8);
        return local_228;
      }
    }
    cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,1,&local_3dc);
    if (cVar1 == '\0') {
      local_288 = local_3ac;
      FUN_143a8dc60(local_120);
      FUN_143a8dc60(local_148);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      return local_288;
    }
    cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,3,&local_3dc);
    if (cVar1 == '\0') {
      local_220 = -*param_3;
      FUN_143a8dc60(local_120);
      FUN_143a8dc60(local_148);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      return local_220;
    }
    break;
  case 0x1c:
    if (local_3e4 != '\0') {
      FUN_143b55270(param_10,2,(local_3e8 + -1) * 3);
      local_280 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_3d8);
      FUN_143a8dc60(local_120);
      FUN_143a8dc60(local_148);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      return local_280;
    }
    local_3a8 = 0;
    cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,3,&local_3dc);
    if ((cVar1 != '\0') || (param_5 == 4)) {
      local_3f8 = param_10;
      local_400 = CONCAT44(local_400._4_4_,*(undefined4 *)(param_1[0x6a] + 0x150));
      local_408 = *(longlong *)(param_1[0x6a] + 0x148);
      local_3a8 = FUN_143ba37f0(param_1,param_2,*param_3,2);
      if (0 < local_3a8) {
        local_218 = local_3a8;
        FUN_143a8dc60(local_120);
        FUN_143a8dc60(local_148);
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
        Concurrency::
        call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
        ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                  (local_f8);
        return local_218;
      }
    }
    cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,3,&local_3dc);
    if ((cVar1 != '\0') || (param_5 == 3)) {
      local_3f8 = param_10;
      local_400 = CONCAT44(local_400._4_4_,*(undefined4 *)(param_1[0x6a] + 0x160));
      local_408 = *(longlong *)(param_1[0x6a] + 0x158);
      local_3a8 = FUN_143ba37f0(param_1,param_2,*param_3,2);
      if (0 < local_3a8) {
        local_278 = local_3a8;
        FUN_143a8dc60(local_120);
        FUN_143a8dc60(local_148);
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
        Concurrency::
        call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
        ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                  (local_f8);
        return local_278;
      }
    }
    cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,1,&local_3dc);
    if (cVar1 == '\0') {
      local_210 = local_3a8;
      FUN_143a8dc60(local_120);
      FUN_143a8dc60(local_148);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      return local_210;
    }
    cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,3,&local_3dc);
    if (cVar1 == '\0') {
      local_270 = -*param_3;
      FUN_143a8dc60(local_120);
      FUN_143a8dc60(local_148);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      return local_270;
    }
    break;
  case 0x1d:
    local_378 = param_5;
    if (param_5 == 1) {
      local_380 = 0x12;
    }
    else if (param_5 == 2) {
      local_380 = 0x11;
    }
    else if (param_5 == 3) {
      local_380 = 0x13;
    }
    else {
      local_380 = 0;
    }
    uVar6 = FUN_143bab910(param_1);
    local_408 = param_13;
    local_198 = FUN_143b8d380(uVar6,local_380,param_2,local_3d8);
    if (local_198 != 0) {
      FUN_143b4e8a0(param_10,local_198);
      local_2fc = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_3d8);
      FUN_143a8dc60(local_120);
      FUN_143a8dc60(local_148);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      return local_2fc;
    }
    local_2f4 = -*param_3;
    FUN_143a8dc60(local_120);
    FUN_143a8dc60(local_148);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
    Concurrency::
    call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
    ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              (local_f8);
    return local_2f4;
  case 0x1e:
    if (*(longlong *)(param_1[0x6a] + 0x178) != 0) {
      local_3f0 = param_10;
      local_3f8 = (longlong *)0x0;
      local_400 = CONCAT44(local_400._4_4_,*(undefined4 *)(param_1[0x6a] + 0x180));
      local_408 = *(longlong *)(param_1[0x6a] + 0x178);
      local_338 = FUN_143ba3a30(param_1,param_2,*param_3,1);
      if (0 < local_338) {
        local_2f0 = local_338;
        FUN_143a8dc60(local_120);
        FUN_143a8dc60(local_148);
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
        Concurrency::
        call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
        ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                  (local_f8);
        return local_2f0;
      }
    }
    if ((local_3e4 != '\0') &&
       ((cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,1,&local_3dc), cVar1 != '\0' ||
        (*(int *)(param_1[0x6a] + 0x180) < local_3e8)))) {
      FUN_143b55270(param_10,1,local_3e8);
      local_1e0 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_3d8);
      FUN_143a8dc60(local_120);
      FUN_143a8dc60(local_148);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      return local_1e0;
    }
    local_2e8 = -*param_3;
    FUN_143a8dc60(local_120);
    FUN_143a8dc60(local_148);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
    Concurrency::
    call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
    ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              (local_f8);
    return local_2e8;
  case 0x1f:
    if (param_5 < 4) {
      local_34c = 6;
    }
    else {
      local_34c = 5;
    }
    local_2ec = local_34c;
    uVar6 = FUN_143bab910(param_1);
    local_408 = param_13;
    local_1d0 = FUN_143b8d380(uVar6,local_2ec,param_2,local_3d8);
    if (local_1d0 != 0) {
      FUN_143b4e8a0(param_10,local_1d0);
      local_2e4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_3d8);
      FUN_143a8dc60(local_120);
      FUN_143a8dc60(local_148);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      return local_2e4;
    }
    local_2dc = -*param_3;
    FUN_143a8dc60(local_120);
    FUN_143a8dc60(local_148);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
    Concurrency::
    call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
    ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              (local_f8);
    return local_2dc;
  case 0x20:
    local_390 = param_5;
    if (param_5 == 1) {
      local_39c = 7;
    }
    else if (param_5 == 2) {
      local_39c = 9;
    }
    else if (param_5 == 3) {
      local_39c = 0xd;
    }
    else if (param_5 == 4) {
      local_39c = 0xb;
    }
    else {
      local_39c = 0xf;
    }
    uVar6 = FUN_143bab910(param_1);
    local_408 = param_13;
    local_1c0 = FUN_143b8d380(uVar6,local_39c,param_2,local_3d8);
    if (local_1c0 != 0) {
      FUN_143b4e8a0(param_10,local_1c0);
      local_2d4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_3d8);
      FUN_143a8dc60(local_120);
      FUN_143a8dc60(local_148);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      return local_2d4;
    }
    local_2cc = -*param_3;
    FUN_143a8dc60(local_120);
    FUN_143a8dc60(local_148);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
    Concurrency::
    call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
    ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              (local_f8);
    return local_2cc;
  case 0x21:
    local_38c = param_5;
    if (param_5 == 1) {
      local_394 = 8;
    }
    else if (param_5 == 2) {
      local_394 = 10;
    }
    else if (param_5 == 3) {
      local_394 = 0xe;
    }
    else if (param_5 == 4) {
      local_394 = 0xc;
    }
    else {
      local_394 = 0x10;
    }
    uVar6 = FUN_143bab910(param_1);
    local_408 = param_13;
    local_1b0 = FUN_143b8d380(uVar6,local_394,param_2,local_3d8);
    if (local_1b0 != 0) {
      FUN_143b4e8a0(param_10,local_1b0);
      local_2c4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_3d8);
      FUN_143a8dc60(local_120);
      FUN_143a8dc60(local_148);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      return local_2c4;
    }
    local_2bc = -*param_3;
    FUN_143a8dc60(local_120);
    FUN_143a8dc60(local_148);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
    Concurrency::
    call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
    ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              (local_f8);
    return local_2bc;
  }
  local_2a4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(local_3d8);
  local_1a0 = param_2;
  if (param_6 != '\0') {
    local_2b4 = *param_3 + param_5;
    iVar3 = FUN_143a904f0(param_2);
    if (iVar3 < local_2b4) {
      local_2ac = -*param_3;
      FUN_143a8dc60(local_120);
      FUN_143a8dc60(local_148);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      return local_2ac;
    }
    local_180 = *param_2;
    (**(code **)(local_180 + 0x10))(param_2,0,*param_3 + param_5,local_148);
    local_1a0 = local_148;
  }
  local_400 = local_240;
  local_408 = CONCAT71(local_408._1_7_,param_7);
  FUN_143ba5200(param_1,local_1a0,local_f8,local_3d8);
  iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(local_3d8);
  if (iVar3 != local_2a4) {
    local_3c0 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_f8);
    cVar1 = (**(code **)(*param_1 + 0xd8))(param_1,1,&local_3dc);
    if (((cVar1 == '\0') &&
        (local_370 = *(int *)(&DAT_145d17df0 + (longlong)local_3e0 * 4), -1 < local_370)) &&
       ((iVar3 = (**(code **)(*param_10 + 0x70))(param_10,local_398), iVar3 + local_370 < local_3c0
        || (iVar3 = (**(code **)(*param_10 + 0x60))(param_10,local_398),
           local_3c0 < iVar3 + local_370)))) {
      local_29c = -*param_3;
      FUN_143a8dc60(local_120);
      FUN_143a8dc60(local_148);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      return local_29c;
    }
    local_388 = local_3e0 + -2;
    switch(local_388) {
    case 0:
      pcVar5 = (char *)(**(code **)(*param_10 + 0xb0))(param_10);
      iVar3 = _guard_xfg_dispatch_icall_nop(pcVar5,"hebrew");
      if (iVar3 == 0) {
        local_170 = param_10;
        cVar1 = FUN_143b539a0(param_10,1);
        if (cVar1 == '\0') {
          *param_9 = local_3c0;
        }
        else {
          local_294 = 0;
          uVar4 = FUN_143b512d0(local_170,1,&local_294);
          cVar1 = FUN_143b9bc30(uVar4);
          if ((cVar1 == '\0') && (5 < local_3c0)) {
            FUN_143b55270(param_10,2,local_3c0);
          }
          else {
            FUN_143b55270(param_10,2,local_3c0 + -1);
          }
        }
      }
      else {
        FUN_143b55270(param_10,2,local_3c0 + -1);
      }
      break;
    default:
      FUN_143b55270(param_10,local_398,local_3c0);
      break;
    case 0x11:
    case 0x17:
      FUN_143b55270(param_10,0x12,local_3c0);
      break;
    case 0x18:
      FUN_143b55270(param_10,2,local_3c0 + -1);
      break;
    case 0x19:
    case 0x1a:
      FUN_143b55270(param_10,2,(local_3c0 + -1) * 3);
      break;
    case 0x20:
      (**(code **)(*param_10 + 0x180))(param_10,local_3c0);
    }
    local_28c = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_3d8);
    FUN_143a8dc60(local_120);
    FUN_143a8dc60(local_148);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
    Concurrency::
    call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
    ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              (local_f8);
    return local_28c;
  }
  local_284 = -*param_3;
  FUN_143a8dc60(local_120);
  FUN_143a8dc60(local_148);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3d8);
  Concurrency::
  call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
  ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
            (local_f8);
  return local_284;
}



// FUNCTION 143bab6d0 FUN_143bab6d0 body=201 status=ok
// SIG undefined FUN_143bab6d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143bab6d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_48 = *(longlong *)(param_1 + 0x350) + 0x318;
  uVar1 = FUN_143bfe360();
  local_58 = FUN_143a8dad0(local_38,uVar1);
  local_68 = param_3;
  local_50 = local_58;
  FUN_143bab7d0(param_1 + 0x160,param_2,local_58,local_48);
  FUN_143a8dc60(local_38);
  return param_2;
}



// FUNCTION 143bab7a0 FUN_143bab7a0 body=48 status=ok
// SIG undefined FUN_143bab7a0(void)

undefined8 FUN_143bab7a0(longlong param_1,undefined8 param_2)

{
  FUN_143a8dcd0(param_2,param_1 + 0x160);
  return param_2;
}



// FUNCTION 143bab7d0 FUN_143bab7d0 body=308 status=ok
// SIG undefined FUN_143bab7d0(void)

void FUN_143bab7d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ushort local_14;
  int local_10;
  
  cVar2 = FUN_143a8b0e0(*param_5);
  if (cVar2 == '\0') {
    FUN_143a90910(param_2);
    bVar1 = false;
    for (local_10 = 0; iVar3 = FUN_143a904f0(param_1), local_10 < iVar3; local_10 = local_10 + 1) {
      local_14 = FUN_143a8e4f0(param_1,local_10);
      if (bVar1) {
        if (local_14 == 0x27) {
          bVar1 = false;
        }
      }
      else if (local_14 == 0x27) {
        bVar1 = true;
      }
      else if (((0x60 < local_14) && (local_14 < 0x7b)) || ((0x40 < local_14 && (local_14 < 0x5b))))
      {
        iVar3 = FUN_143acddd0(param_3,local_14);
        if (iVar3 == -1) {
          *param_5 = 3;
          return;
        }
        local_14 = FUN_143a8e4f0(param_4,iVar3);
      }
      FUN_143acc590(param_2,local_14);
    }
    if (bVar1) {
      *param_5 = 3;
    }
  }
  return;
}



// FUNCTION 143bab910 FUN_143bab910 body=154 status=ok
// SIG undefined FUN_143bab910(void)

undefined8 FUN_143bab910(longlong param_1)

{
  char cVar1;
  undefined4 local_18 [2];
  undefined8 local_10;
  
  if (*(longlong *)(param_1 + 0x358) == 0) {
    FUN_143ab2410(&DAT_146bc8440);
    if (*(longlong *)(param_1 + 0x358) == 0) {
      local_18[0] = 0;
      local_10 = FUN_143b8ae40(param_1 + 0x1d8,local_18);
      cVar1 = FUN_143a8b0e0(local_18[0]);
      if (cVar1 != '\0') {
        return 0;
      }
      *(undefined8 *)(param_1 + 0x358) = local_10;
    }
    FUN_143ab2470(&DAT_146bc8440);
  }
  return *(undefined8 *)(param_1 + 0x358);
}



// FUNCTION 143bab9b0 FUN_143bab9b0 body=146 status=ok
// SIG undefined FUN_143bab9b0(void)

void FUN_143bab9b0(undefined8 param_1,longlong *param_2,undefined8 param_3,ulonglong param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined1 local_20 [32];
  
  if (param_2 != (longlong *)0x0) {
    FUN_143b36810(local_20,0,param_3,param_4,0xfffffffffffffffe);
    (**(code **)(*param_2 + 0xd8))(param_2,param_5);
    (**(code **)(*param_2 + 0xd0))(param_2,param_6);
    (**(code **)(*param_2 + 0x78))(param_2,param_4 & 0xffffffff,param_3,local_20);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_20);
  }
  return;
}



// FUNCTION 143baba50 FUN_143baba50 body=96 status=ok
// SIG undefined FUN_143baba50(void)

undefined8 * FUN_143baba50(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined8 *)((longlong)puVar2 + 1);
  }
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::FieldPosition::vftable;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 143babab0 FUN_143babab0 body=673 status=ok
// SIG undefined FUN_143babab0(void)

undefined8 *
FUN_143babab0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_143b56420(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::RelativeDateFormat::vftable;
  param_1[0x2c] = 0;
  FUN_143a8d3a0(param_1 + 0x2d,param_2 + 0x168);
  FUN_143a8d3a0(param_1 + 0x32,param_2 + 400);
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x1c0);
  FUN_143a8a610(param_1 + 0x39,param_2 + 0x1c8);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x340);
  *(undefined4 *)((longlong)param_1 + 0x344) = *(undefined4 *)(param_2 + 0x344);
  *(undefined4 *)(param_1 + 0x69) = *(undefined4 *)(param_2 + 0x348);
  param_1[0x6a] = 0;
  *(undefined1 *)(param_1 + 0x6b) = *(undefined1 *)(param_2 + 0x358);
  *(undefined1 *)((longlong)param_1 + 0x359) = *(undefined1 *)(param_2 + 0x359);
  *(undefined1 *)((longlong)param_1 + 0x35a) = *(undefined1 *)(param_2 + 0x35a);
  *(undefined1 *)((longlong)param_1 + 0x35b) = *(undefined1 *)(param_2 + 0x35b);
  param_1[0x6c] = 0;
  if (*(longlong *)(param_2 + 0x160) != 0) {
    uVar1 = (**(code **)(**(longlong **)(param_2 + 0x160) + 0x18))(*(undefined8 *)(param_2 + 0x160))
    ;
    param_1[0x2c] = uVar1;
  }
  if (*(longlong *)(param_2 + 0x1b8) != 0) {
    uVar1 = (**(code **)(**(longlong **)(param_2 + 0x1b8) + 0x18))(*(undefined8 *)(param_2 + 0x1b8))
    ;
    param_1[0x37] = uVar1;
  }
  if (0 < *(int *)(param_1 + 0x69)) {
    uVar1 = FUN_143aa7a40((longlong)*(int *)(param_1 + 0x69) * 0x10);
    param_1[0x6a] = uVar1;
    _guard_xfg_dispatch_icall_nop
              ((void *)param_1[0x6a],*(void **)(param_2 + 0x350),
               (longlong)*(int *)(param_1 + 0x69) * 0x10);
  }
  if (*(longlong *)(param_2 + 0x360) != 0) {
    uVar1 = (**(code **)(**(longlong **)(param_2 + 0x360) + 0x18))(*(undefined8 *)(param_2 + 0x360))
    ;
    param_1[0x6c] = uVar1;
  }
  return param_1;
}



// FUNCTION 143babd60 FUN_143babd60 body=1134 status=ok
// SIG undefined FUN_143babd60(void)

undefined8 *
FUN_143babd60(undefined8 *param_1,int param_2,uint param_3,undefined8 param_4,undefined4 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  uint local_60;
  
  FUN_143b564c0(param_1);
  *param_1 = icu_53::RelativeDateFormat::vftable;
  param_1[0x2c] = 0;
  FUN_143a8ac30(param_1 + 0x2d);
  FUN_143a8ac30(param_1 + 0x32);
  param_1[0x37] = 0;
  *(uint *)(param_1 + 0x38) = param_3;
  FUN_143a8a610(param_1 + 0x39,param_4);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x6a] = 0;
  *(undefined1 *)(param_1 + 0x6b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x359) = 0;
  *(undefined1 *)((longlong)param_1 + 0x35a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x35b) = 0;
  param_1[0x6c] = 0;
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    if ((param_2 < -1) || (3 < param_2)) {
      *param_5 = 1;
    }
    else {
      local_60 = param_3;
      if (3 < (int)param_3) {
        local_60 = param_3 & 0xffffff7f;
      }
      if (local_60 == 0xffffffff) {
        uVar2 = FUN_143b56f00(param_2,param_4);
        uVar2 = _guard_xfg_dispatch_icall_nop
                          (uVar2,0,&icu_53::DateFormat::RTTI_Type_Descriptor,
                           &icu_53::SimpleDateFormat::RTTI_Type_Descriptor,0);
        param_1[0x2c] = uVar2;
        if (param_1[0x2c] == 0) {
          *param_5 = 0x10;
          return param_1;
        }
        (**(code **)(*(longlong *)param_1[0x2c] + 0xe8))(param_1[0x2c],param_1 + 0x32);
      }
      else {
        uVar2 = FUN_143b56e80(local_60,param_4);
        uVar2 = _guard_xfg_dispatch_icall_nop
                          (uVar2,0,&icu_53::DateFormat::RTTI_Type_Descriptor,
                           &icu_53::SimpleDateFormat::RTTI_Type_Descriptor,0);
        param_1[0x2c] = uVar2;
        if (param_1[0x2c] == 0) {
          *param_5 = 0x10;
          return param_1;
        }
        (**(code **)(*(longlong *)param_1[0x2c] + 0xe8))(param_1[0x2c],param_1 + 0x2d);
        if (param_2 != -1) {
          uVar2 = FUN_143b56f00(param_2,param_4);
          plVar3 = (longlong *)
                   _guard_xfg_dispatch_icall_nop
                             (uVar2,0,&icu_53::DateFormat::RTTI_Type_Descriptor,
                              &icu_53::SimpleDateFormat::RTTI_Type_Descriptor,0);
          if ((plVar3 != (longlong *)0x0) &&
             ((**(code **)(*plVar3 + 0xe8))(plVar3,param_1 + 0x32), plVar3 != (longlong *)0x0)) {
            (**(code **)*plVar3)(plVar3,1);
          }
        }
      }
      FUN_143ba2ef0(param_1,0,param_4,param_5);
      FUN_143bad070(param_1,param_5);
    }
  }
  return param_1;
}



// FUNCTION 143bac1d0 FUN_143bac1d0 body=370 status=ok
// SIG undefined FUN_143bac1d0(void)

void FUN_143bac1d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::RelativeDateFormat::vftable;
  puVar1 = (undefined8 *)param_1[0x2c];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x37];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143aa79f0(param_1[0x6a]);
  puVar1 = (undefined8 *)param_1[0x6c];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143a8acf0(param_1 + 0x39);
  FUN_143a8dc60(param_1 + 0x32);
  FUN_143a8dc60(param_1 + 0x2d);
  FUN_143b56540(param_1);
  return;
}



// FUNCTION 143bac350 FUN_143bac350 body=214 status=ok
// SIG undefined FUN_143bac350(void)

undefined1 FUN_143bac350(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_18;
  
  cVar1 = FUN_143b567b0(param_1,param_2);
  if (cVar1 == '\0') {
    local_18 = 0;
  }
  else if ((((*(int *)(param_1 + 0x1c0) == *(int *)(param_2 + 0x1c0)) &&
            (cVar1 = FUN_143a8dd00(param_1 + 0x168,param_2 + 0x168), cVar1 != '\0')) &&
           (cVar1 = FUN_143a8dd00(param_1 + 400,param_2 + 400), cVar1 != '\0')) &&
          (cVar1 = FUN_143a8afa0(param_1 + 0x1c8,param_2 + 0x1c8), cVar1 != '\0')) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143bac430 FUN_143bac430 body=54 status=ok
// SIG undefined FUN_143bac430(void)

undefined8 FUN_143bac430(undefined8 param_1,uint param_2)

{
  FUN_143bac1d0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bac470 FUN_143bac470 body=96 status=ok
// SIG undefined FUN_143bac470(void)

void FUN_143bac470(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    FUN_143a8dcd0(param_1 + 0x168,param_2);
    FUN_143a8dcd0(param_1 + 400,param_3);
  }
  return;
}



// FUNCTION 143bac4d0 CreateInternalContext body=92 status=ok
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
  
  lVar1 = FUN_143a8d310(0x368);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143babab0(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143bac530 FUN_143bac530 body=68 status=ok
// SIG undefined FUN_143bac530(void)

void FUN_143bac530(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_143a8ebe0(param_1,param_2,param_3,param_4,0,param_3);
  return;
}



// FUNCTION 143bac580 FUN_143bac580 body=213 status=ok
// SIG undefined FUN_143bac580(void)

int FUN_143bac580(longlong *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
    uVar5 = FUN_143b52670();
    FUN_143b55550(puVar4,uVar5,param_2);
    iVar2 = FUN_143b512d0(param_1,0x14,param_2);
    iVar3 = FUN_143b512d0(puVar4,0x14,param_2);
    iVar2 = iVar2 - iVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



// FUNCTION 143bac660 FUN_143bac660 body=1663 status=ok
// SIG undefined FUN_143bac660(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143bac660(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_328 [32];
  undefined8 local_308;
  undefined4 *local_300;
  undefined4 local_2f8;
  int local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  longlong local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  undefined1 local_290 [40];
  undefined1 local_268 [40];
  undefined1 local_240 [40];
  undefined1 local_218 [40];
  undefined1 local_1f0 [40];
  undefined1 local_1c8 [216];
  undefined1 local_f0 [216];
  ulonglong local_18;
  
  local_298 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  local_2f8 = 0;
  FUN_143a8ac30(local_290);
  local_2f4 = (**(code **)(*param_1 + 200))(param_1,1,&local_2f8);
  local_2ec = FUN_143bac580(param_2,&local_2f8);
  local_2f0 = 0;
  local_2e8 = FUN_143bacd80(param_1,local_2ec,&local_2f0,&local_2f8);
  cVar1 = FUN_143a8b110(local_2f8);
  if ((cVar1 != '\0') && (local_2e8 != 0)) {
    FUN_143ab21b0(local_290,local_2e8,local_2f0);
  }
  iVar2 = FUN_143a904f0(local_290);
  if (((iVar2 < 1) || (cVar1 = FUN_143a903a0(param_1 + 0x2d), cVar1 != '\0')) ||
     ((cVar1 = FUN_143a903a0(param_1 + 0x32), cVar1 == '\0' &&
      ((param_1[0x37] != 0 && ((char)param_1[0x6b] == '\0')))))) {
    (**(code **)(*(longlong *)param_1[0x2c] + 0xc0))(param_1[0x2c],local_2f4,&local_2f8);
  }
  else {
    uVar3 = FUN_143a8e3e0(local_290,0);
    cVar1 = FUN_143a9e940(uVar3);
    if (((cVar1 != '\0') && (param_1[0x6c] != 0)) &&
       (((local_2f4 == 0x102 ||
         ((local_2f4 == 0x103 && (*(char *)((longlong)param_1 + 0x35a) != '\0')))) ||
        ((local_2f4 == 0x104 && (*(char *)((longlong)param_1 + 0x35b) != '\0')))))) {
      FUN_143e1dc70(local_290,param_1[0x6c],param_1 + 0x39,0x300);
    }
    (**(code **)(*(longlong *)param_1[0x2c] + 0xc0))(param_1[0x2c],0x100,&local_2f8);
  }
  cVar1 = FUN_143a903a0(param_1 + 0x2d);
  if (cVar1 == '\0') {
    cVar1 = FUN_143a903a0(param_1 + 0x32);
    if ((cVar1 == '\0') && (param_1[0x37] != 0)) {
      FUN_143a8ac30(local_268);
      iVar2 = FUN_143a904f0(local_290);
      if (iVar2 < 1) {
        FUN_143a8dcd0(local_268,param_1 + 0x2d);
      }
      else {
        local_2c0 = FUN_143a8d4f0(local_218,1,&DAT_145d18680,2);
        local_2b8 = local_2c0;
        local_2e0 = FUN_143a8d4f0(local_1f0,1,&DAT_145d18688,1);
        local_2b0 = local_2e0;
        FUN_143b37590(local_290,local_2e0,local_2c0);
        FUN_143a8dc60(local_1f0);
        FUN_143a8dc60(local_218);
        FUN_143bad030(local_290,0,0x60);
        FUN_143acc590(local_290,0x60);
        FUN_143a8dcd0(local_268,local_290);
      }
      FUN_143a8ac30(local_240);
      FUN_143b68520(local_1c8,param_1 + 0x32);
      FUN_143b68520(local_f0,local_268);
      local_300 = &local_2f8;
      local_308 = param_4;
      FUN_143c04ef0(param_1[0x37],local_1c8,2,local_240);
      (**(code **)(*(longlong *)param_1[0x2c] + 0xf8))(param_1[0x2c],local_240);
      (**(code **)(*(longlong *)param_1[0x2c] + 0x40))(param_1[0x2c],param_2,param_3,param_4);
      _eh_vector_destructor_iterator_
                (local_1c8,0xd8,2,
                 Concurrency::
                 call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                 ::
                 ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                );
      FUN_143a8dc60(local_240);
      FUN_143a8dc60(local_268);
    }
    else {
      iVar2 = FUN_143a904f0(local_290);
      if (iVar2 < 1) {
        local_2a0 = param_1[0x2c];
        local_2a8 = *(longlong *)param_1[0x2c];
        (**(code **)(local_2a8 + 0xf8))(local_2a0,param_1 + 0x2d);
        (**(code **)(*(longlong *)param_1[0x2c] + 0x40))(param_1[0x2c],param_2,param_3,param_4);
      }
      else {
        FUN_143a8e070(param_3,local_290);
      }
    }
  }
  else {
    local_2c8 = param_1[0x2c];
    local_2d0 = *(longlong *)param_1[0x2c];
    (**(code **)(local_2d0 + 0xf8))(local_2c8,param_1 + 0x32);
    (**(code **)(*(longlong *)param_1[0x2c] + 0x40))(param_1[0x2c],param_2,param_3,param_4);
  }
  local_2d8 = param_3;
  FUN_143a8dc60(local_290);
  return local_2d8;
}



// FUNCTION 143bacce0 FUN_143bacce0 body=64 status=ok
// SIG undefined FUN_143bacce0(void)

void FUN_143bacce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_143b571d0(param_1,param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 143bacd20 FUN_143bacd20 body=47 status=ok
// SIG undefined FUN_143bacd20(void)

void FUN_143bacd20(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x160) + 0x108))(*(undefined8 *)(param_1 + 0x160));
  return;
}



// FUNCTION 143bacd50 FUN_143bacd50 body=19 status=ok
// SIG undefined FUN_143bacd50(void)

void FUN_143bacd50(void)

{
  FUN_143bacd70();
  return;
}



// FUNCTION 143bacd70 FUN_143bacd70 body=8 status=ok
// SIG undefined FUN_143bacd70(void)

undefined * FUN_143bacd70(void)

{
  return &DAT_146bc8471;
}



// FUNCTION 143bacd80 FUN_143bacd80 body=226 status=ok
// SIG undefined FUN_143bacd80(void)

undefined8 FUN_143bacd80(longlong param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  int local_18;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (((cVar1 == '\0') && (*(int *)(param_1 + 0x340) <= param_2)) &&
     (param_2 <= *(int *)(param_1 + 0x344))) {
    for (local_18 = 0; local_18 < *(int *)(param_1 + 0x348); local_18 = local_18 + 1) {
      if (*(int *)(*(longlong *)(param_1 + 0x350) + (longlong)local_18 * 0x10) == param_2) {
        *param_3 = *(undefined4 *)(*(longlong *)(param_1 + 0x350) + 4 + (longlong)local_18 * 0x10);
        return *(undefined8 *)(*(longlong *)(param_1 + 0x350) + 8 + (longlong)local_18 * 0x10);
      }
    }
  }
  return 0;
}



// FUNCTION 143bace70 FUN_143bace70 body=434 status=ok
// SIG undefined FUN_143bace70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bace70(longlong param_1,undefined8 param_2)

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
  local_1d0 = FUN_143aa3350(local_1d0,"relative",local_1d0,local_1d8);
  cVar1 = FUN_143a8b110(local_1d8[0]);
  if ((cVar1 != '\0') && (local_1d0 != 0)) {
    local_1c8[0] = 0;
    local_1c0 = (undefined1 *)FUN_143aa4640(local_1d0,local_1c8,local_1d8);
    cVar1 = FUN_143a8b110(local_1d8[0]);
    if ((cVar1 != '\0') && ((local_1c0 != (undefined1 *)0x0 && (1 < local_1c8[0])))) {
      *(undefined1 *)(param_1 + 0x35a) = *local_1c0;
      *(undefined1 *)(param_1 + 0x35b) = local_1c0[4];
    }
  }
  FUN_143aa2ef0(local_1d0);
  return;
}



// FUNCTION 143bad030 FUN_143bad030 body=62 status=ok
// SIG undefined FUN_143bad030(void)

void FUN_143bad030(undefined8 param_1,undefined4 param_2,undefined2 param_3)

{
  undefined2 local_res18 [8];
  
  local_res18[0] = param_3;
  FUN_143a8f0d0(param_1,param_2,0,local_res18,0,1);
  return;
}



// FUNCTION 143bad070 FUN_143bad070 body=1418 status=ok
// SIG undefined FUN_143bad070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bad070(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  uint local_e0;
  int local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  int local_cc;
  longlong local_c8;
  undefined4 local_c0;
  int local_bc;
  undefined4 local_b8 [2];
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  longlong local_88;
  char *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [32];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_60 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_e0 = 0;
  FUN_143b91920(local_58,param_1 + 0x1c8,"gregorian",param_2);
  local_d4 = *param_2;
  local_b0 = FUN_143b92290(local_58,"DateTimePatterns",&local_d4);
  cVar1 = FUN_143a8b110(local_d4);
  if ((cVar1 != '\0') && (local_bc = FUN_143aa4d80(local_b0), 8 < local_bc)) {
    local_cc = 0;
    local_d0 = 8;
    if (0xc < local_bc) {
      local_c0 = *(undefined4 *)(param_1 + 0x1c0);
      switch(local_c0) {
      case 0:
      case 0x80:
        local_d0 = 9;
        break;
      case 1:
      case 0x81:
        local_d0 = 10;
        break;
      case 2:
      case 0x82:
        local_d0 = 0xb;
        break;
      case 3:
      case 0x83:
        local_d0 = 0xc;
      }
    }
    local_98 = FUN_143aa4da0(local_b0,local_d0,&local_cc,&local_d4);
    cVar1 = FUN_143a8b110(local_d4);
    if (((cVar1 != '\0') && (2 < local_cc)) &&
       (iVar2 = FUN_143ab4770(local_98,&DAT_145d183fc,3), iVar2 == 0)) {
      *(undefined1 *)(param_1 + 0x358) = 1;
    }
    local_a8 = FUN_143a8d310(0x3b0);
    if (local_a8 == 0) {
      local_a0 = 0;
    }
    else {
      local_88 = param_1 + 0x1c8;
      local_78 = FUN_143a8d4f0(local_38,1,local_98,local_cc);
      local_e0 = local_e0 | 1;
      local_68 = local_78;
      local_a0 = FUN_143c01bc0(local_a8,local_78,local_88,&local_d4);
    }
    local_70 = local_a0;
    *(undefined8 *)(param_1 + 0x1b8) = local_a0;
    if ((local_e0 & 1) != 0) {
      local_e0 = local_e0 & 0xfffffffe;
      FUN_143a8dc60(local_38);
    }
  }
  uVar4 = FUN_143a8b520(param_1 + 0x1c8);
  local_e8 = FUN_143aa5b10(0,uVar4,param_2);
  local_e8 = FUN_143aa3350(local_e8,"fields",local_e8,param_2);
  local_e8 = FUN_143aa3350(local_e8,&DAT_145b16fe0,local_e8,param_2);
  local_e8 = FUN_143aa3350(local_e8,"relative",local_e8,param_2);
  *(undefined4 *)(param_1 + 0x340) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x344) = 1;
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    uVar3 = FUN_143aa4d80(local_e8);
    *(undefined4 *)(param_1 + 0x348) = uVar3;
    uVar4 = FUN_143aa7a40((longlong)*(int *)(param_1 + 0x348) * 0x10);
    *(undefined8 *)(param_1 + 0x350) = uVar4;
    local_d8 = 0;
    local_c8 = 0;
    while ((cVar1 = FUN_143aa54f0(local_e8), cVar1 != '\0' &&
           (cVar1 = FUN_143a8b110(*param_2), cVar1 != '\0'))) {
      local_c8 = FUN_143aa4880(local_e8,local_c8,param_2);
      cVar1 = FUN_143a8b0e0(*param_2);
      if ((cVar1 != '\0') || (local_c8 == 0)) break;
      local_80 = (char *)FUN_143aa4760(local_c8);
      local_90 = FUN_143aa5430(local_c8,local_b8,param_2);
      cVar1 = FUN_143a8b0e0(*param_2);
      if ((cVar1 != '\0') || (local_90 == 0)) break;
      local_dc = atoi(local_80);
      if (local_dc < *(int *)(param_1 + 0x340)) {
        *(int *)(param_1 + 0x340) = local_dc;
      }
      if (*(int *)(param_1 + 0x344) < local_dc) {
        *(int *)(param_1 + 0x344) = local_dc;
      }
      *(int *)(*(longlong *)(param_1 + 0x350) + (longlong)local_d8 * 0x10) = local_dc;
      *(longlong *)(*(longlong *)(param_1 + 0x350) + 8 + (longlong)local_d8 * 0x10) = local_90;
      *(undefined4 *)(*(longlong *)(param_1 + 0x350) + 4 + (longlong)local_d8 * 0x10) = local_b8[0];
      local_d8 = local_d8 + 1;
    }
    FUN_143aa2ef0(local_c8);
    FUN_143aa2ef0(local_e8);
    FUN_143b919a0(local_58);
  }
  else {
    *(undefined4 *)(param_1 + 0x348) = 0;
    FUN_143aa2ef0(local_e8);
    FUN_143b919a0(local_58);
  }
  return;
}



// FUNCTION 143bad6a0 FUN_143bad6a0 body=44 status=ok
// SIG undefined FUN_143bad6a0(void)

void FUN_143bad6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143b57690(param_1,param_2,param_3);
  return;
}



// FUNCTION 143bad6d0 FUN_143bad6d0 body=2293 status=ok
// SIG undefined FUN_143bad6d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bad6d0(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_348 [32];
  undefined1 *local_328;
  undefined4 *local_320;
  char local_318;
  undefined1 local_317;
  char local_316;
  int local_314;
  int local_310;
  int local_30c;
  int local_308;
  int local_304;
  undefined4 local_300;
  int local_2fc;
  int local_2f8;
  undefined4 local_2f4;
  longlong *local_2f0;
  int local_2e8;
  int local_2e4;
  longlong *local_2e0;
  longlong *local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  longlong local_2c0;
  longlong local_2b8;
  longlong *local_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  longlong local_298;
  undefined8 local_290;
  longlong local_288;
  longlong local_280;
  longlong *local_278;
  undefined8 local_270;
  undefined1 local_268 [24];
  undefined8 local_250;
  undefined1 local_248 [40];
  undefined1 local_220 [40];
  undefined1 local_1f8 [48];
  undefined1 local_1c8 [216];
  undefined1 local_f0 [216];
  ulonglong local_18;
  
  local_250 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_348;
  local_308 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(param_4);
  cVar1 = FUN_143a903a0(param_1 + 0x168);
  if (cVar1 == '\0') {
    cVar1 = FUN_143a903a0(param_1 + 400);
    if ((cVar1 == '\0') && (*(longlong *)(param_1 + 0x1b8) != 0)) {
      FUN_143a8d3a0(local_220,param_2);
      FUN_143baba50(local_268);
      local_304 = 0;
      local_2fc = 0;
      local_2f8 = 0;
      local_300 = 0;
      for (local_310 = 0; local_310 < *(int *)(param_1 + 0x348); local_310 = local_310 + 1) {
        if (*(longlong *)(*(longlong *)(param_1 + 0x350) + 8 + (longlong)local_310 * 0x10) != 0) {
          local_288 = *(longlong *)(param_1 + 0x350);
          local_2e8 = FUN_143b19dc0(local_220,
                                    *(undefined8 *)(local_288 + 8 + (longlong)local_310 * 0x10),
                                    *(undefined4 *)
                                     (*(longlong *)(param_1 + 0x350) + 4 +
                                     (longlong)local_310 * 0x10),local_308);
          if (local_308 <= local_2e8) {
            FUN_143a8ac30(local_248);
            local_2f0 = (longlong *)(**(code **)(*param_3 + 0x10))(param_3);
            uVar3 = FUN_143b52670();
            FUN_143b55550(local_2f0,uVar3,&local_300);
            local_298 = *local_2f0;
            (**(code **)(local_298 + 0x28))
                      (local_2f0,5,
                       *(undefined4 *)(*(longlong *)(param_1 + 0x350) + (longlong)local_310 * 0x10),
                       &local_300);
            cVar1 = FUN_143a8b0e0(local_300);
            if (cVar1 != '\0') {
              FUN_143b44cd0(param_4,local_308);
              local_278 = local_2f0;
              local_2e0 = local_2f0;
              if (local_2f0 == (longlong *)0x0) {
                local_270 = 0;
              }
              else {
                local_270 = (**(code **)*local_2f0)(local_2f0,1);
              }
              FUN_143a8dc60(local_248);
              UCameraModifier_Climbing::~UCameraModifier_Climbing(local_268);
              FUN_143a8dc60(local_220);
              return;
            }
            local_2c8 = *(undefined8 *)(param_1 + 0x160);
            local_2c0 = **(longlong **)(param_1 + 0x160);
            (**(code **)(local_2c0 + 0xf8))(local_2c8,param_1 + 0x168);
            (**(code **)(**(longlong **)(param_1 + 0x160) + 0x40))
                      (*(undefined8 *)(param_1 + 0x160),local_2f0,local_248,local_268);
            local_304 = local_2e8;
            local_2fc = *(int *)(*(longlong *)(param_1 + 0x350) + 4 + (longlong)local_310 * 0x10);
            local_2f8 = FUN_143a904f0(local_248);
            FUN_143b20580(local_220,local_304,local_2fc,local_248);
            local_2b0 = local_2f0;
            local_2d8 = local_2f0;
            if (local_2f0 == (longlong *)0x0) {
              local_2a0 = 0;
            }
            else {
              local_2a0 = (**(code **)*local_2f0)(local_2f0,1);
            }
            FUN_143a8dc60(local_248);
            break;
          }
        }
      }
      FUN_143a8ac30(local_1f8);
      FUN_143b68520(local_1c8,param_1 + 400);
      FUN_143b68520(local_f0,param_1 + 0x168);
      local_320 = &local_300;
      local_328 = local_268;
      FUN_143c04ef0(*(undefined8 *)(param_1 + 0x1b8),local_1c8,2,local_1f8);
      (**(code **)(**(longlong **)(param_1 + 0x160) + 0xf8))
                (*(undefined8 *)(param_1 + 0x160),local_1f8);
      (**(code **)(**(longlong **)(param_1 + 0x160) + 0x48))
                (*(undefined8 *)(param_1 + 0x160),local_220,param_3,param_4);
      iVar2 = FUN_143a93e60(param_4);
      local_317 = iVar2 < 0;
      local_316 = local_317;
      if ((bool)local_317) {
        local_2e4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                    ::GetIndex(param_4);
      }
      else {
        local_2e4 = FUN_143a93e60(param_4);
      }
      local_30c = local_2e4;
      if (local_2e4 < local_304 + local_2f8) {
        if (local_304 <= local_2e4) {
          local_30c = local_304;
        }
      }
      else {
        local_30c = local_2e4 - (local_2f8 - local_2fc);
      }
      if (local_316 == '\0') {
        FUN_143b44cd0(param_4,local_30c);
      }
      else {
        FUN_143b0fce0(param_4,local_30c);
      }
      _eh_vector_destructor_iterator_
                (local_1c8,0xd8,2,
                 Concurrency::
                 call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                 ::
                 ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                );
      FUN_143a8dc60(local_1f8);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_268);
      FUN_143a8dc60(local_220);
    }
    else {
      local_318 = '\0';
      local_314 = 0;
      while ((local_314 < *(int *)(param_1 + 0x348) && (local_318 == '\0'))) {
        if ((*(longlong *)(*(longlong *)(param_1 + 0x350) + 8 + (longlong)local_314 * 0x10) != 0) &&
           (cVar1 = FUN_143bac530(param_2,local_308,
                                  *(undefined4 *)
                                   (*(longlong *)(param_1 + 0x350) + 4 + (longlong)local_314 * 0x10)
                                  ,*(undefined8 *)
                                    (*(longlong *)(param_1 + 0x350) + 8 + (longlong)local_314 * 0x10
                                    )), cVar1 == '\0')) {
          local_2f4 = 0;
          local_318 = '\x01';
          uVar3 = FUN_143b52670();
          FUN_143b55550(param_3,uVar3,&local_2f4);
          local_2b8 = *param_3;
          (**(code **)(local_2b8 + 0x28))
                    (param_3,5,
                     *(undefined4 *)(*(longlong *)(param_1 + 0x350) + (longlong)local_314 * 0x10),
                     &local_2f4);
          cVar1 = FUN_143a8b0e0(local_2f4);
          if (cVar1 == '\0') {
            FUN_143b0fce0(param_4,local_308 +
                                  *(int *)(*(longlong *)(param_1 + 0x350) + 4 +
                                          (longlong)local_314 * 0x10));
          }
          else {
            FUN_143b44cd0(param_4,local_308);
          }
        }
        local_314 = local_314 + 1;
      }
      if (local_318 == '\0') {
        local_290 = *(undefined8 *)(param_1 + 0x160);
        local_2a8 = **(longlong **)(param_1 + 0x160);
        (**(code **)(local_2a8 + 0xf8))(local_290,param_1 + 0x168);
        (**(code **)(**(longlong **)(param_1 + 0x160) + 0x48))
                  (*(undefined8 *)(param_1 + 0x160),param_2,param_3,param_4);
      }
    }
  }
  else {
    local_2d0 = *(undefined8 *)(param_1 + 0x160);
    local_280 = **(longlong **)(param_1 + 0x160);
    (**(code **)(local_280 + 0xf8))(local_2d0,param_1 + 400);
    (**(code **)(**(longlong **)(param_1 + 0x160) + 0x48))
              (*(undefined8 *)(param_1 + 0x160),param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 143badfe0 FUN_143badfe0 body=373 status=ok
// SIG undefined FUN_143badfe0(void)

void FUN_143badfe0(longlong param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_28 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  
  FUN_143b57870(param_1,param_2,param_3);
  cVar1 = FUN_143a8b110(*param_3);
  if (cVar1 != '\0') {
    if ((*(char *)(param_1 + 0x359) == '\0') && ((param_2 == 0x103 || (param_2 == 0x104)))) {
      FUN_143bace70(param_1,param_1 + 0x1c8);
      *(undefined1 *)(param_1 + 0x359) = 1;
    }
    if ((*(longlong *)(param_1 + 0x360) == 0) &&
       (((param_2 == 0x102 || ((param_2 == 0x103 && (*(char *)(param_1 + 0x35a) != '\0')))) ||
        ((param_2 == 0x104 && (*(char *)(param_1 + 0x35b) != '\0')))))) {
      local_28[0] = 0;
      uVar2 = FUN_143a9fd60(param_1 + 0x1c8,local_28);
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



// FUNCTION 143bae160 FUN_143bae160 body=438 status=ok
// SIG undefined FUN_143bae160(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143bae160(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 auStack_218 [32];
  undefined1 *local_1f8;
  undefined4 *local_1f0;
  undefined1 local_1e8 [24];
  undefined8 local_1d0;
  undefined1 local_1c8 [216];
  undefined1 local_f0 [216];
  ulonglong local_18;
  
  local_1d0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    FUN_143a90910(param_2);
    cVar1 = FUN_143a903a0(param_1 + 0x168);
    if (cVar1 == '\0') {
      cVar1 = FUN_143a903a0(param_1 + 400);
      if ((cVar1 == '\0') && (*(longlong *)(param_1 + 0x1b8) != 0)) {
        FUN_143b68520(local_1c8,param_1 + 400);
        FUN_143b68520(local_f0,param_1 + 0x168);
        FUN_143baba50(local_1e8);
        local_1f8 = local_1e8;
        local_1f0 = param_3;
        FUN_143c04ef0(*(undefined8 *)(param_1 + 0x1b8),local_1c8,2,param_2);
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_1e8);
        _eh_vector_destructor_iterator_
                  (local_1c8,0xd8,2,
                   Concurrency::
                   call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                   ::
                   ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                  );
      }
      else {
        FUN_143a8dcd0(param_2,param_1 + 0x168);
      }
    }
    else {
      FUN_143a8dcd0(param_2,param_1 + 400);
    }
  }
  return param_2;
}



// FUNCTION 143bae320 FUN_143bae320 body=82 status=ok
// SIG undefined FUN_143bae320(void)

undefined8 FUN_143bae320(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    FUN_143a90910(param_2);
    FUN_143a8dcd0(param_2,param_1 + 0x168);
  }
  return param_2;
}



// FUNCTION 143bae380 FUN_143bae380 body=82 status=ok
// SIG undefined FUN_143bae380(void)

undefined8 FUN_143bae380(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    FUN_143a90910(param_2);
    FUN_143a8dcd0(param_2,param_1 + 400);
  }
  return param_2;
}



// FUNCTION 143bae3e0 FUN_143bae3e0 body=120 status=ok
// SIG undefined FUN_143bae3e0(void)

undefined8 *
FUN_143bae3e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143b56420(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::Win32DateFormat::vftable;
  FUN_143a8aad0(param_1 + 0x2e);
  FUN_143a8ac30(param_1 + 0x5e);
  FUN_143bae640(param_1,param_2);
  return param_1;
}



// FUNCTION 143bae460 FUN_143bae460 body=275 status=ok
// SIG undefined FUN_143bae460(void)

undefined8 *
FUN_143bae460(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  FUN_143b564c0(param_1);
  *param_1 = icu_53::Win32DateFormat::vftable;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x16c) = param_3;
  FUN_143a8a610(param_1 + 0x2e);
  FUN_143a8ac30(param_1 + 0x5e);
  cVar1 = FUN_143a8b110(*param_5);
  if (cVar1 != '\0') {
    uVar2 = FUN_143a8b780(param_4);
    *(undefined4 *)(param_1 + 0x5d) = uVar2;
    uVar3 = FUN_143aa7a40(0xac);
    param_1[99] = uVar3;
    _guard_xfg_dispatch_icall_nop((void *)param_1[99],0,0xac);
    uVar3 = FUN_143b4fef0(param_4,param_5);
    FUN_143bae780(param_1,uVar3);
  }
  return param_1;
}



// FUNCTION 143bae580 FUN_143bae580 body=179 status=ok
// SIG undefined FUN_143bae580(void)

void FUN_143bae580(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::Win32DateFormat::vftable;
  FUN_143aa79f0(param_1[99]);
  puVar1 = (undefined8 *)param_1[0x2c];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143a8dc60(param_1 + 0x5e);
  FUN_143a8acf0(param_1 + 0x2e);
  FUN_143b56540(param_1);
  return;
}



// FUNCTION 143bae640 FUN_143bae640 body=254 status=ok
// SIG undefined FUN_143bae640(void)

longlong FUN_143bae640(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  FUN_143b56620(param_1,param_2);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_2 + 0x16c);
  FUN_143a8adb0(param_1 + 0x170,param_2 + 0x170);
  *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_2 + 0x2e8);
  FUN_143a8dcd0(param_1 + 0x2f0,param_2 + 0x2f0);
  uVar1 = FUN_143aa7a40(0xac);
  *(undefined8 *)(param_1 + 0x318) = uVar1;
  puVar3 = *(undefined1 **)(param_2 + 0x318);
  puVar4 = *(undefined1 **)(param_1 + 0x318);
  for (lVar2 = 0xac; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// FUNCTION 143bae740 FUN_143bae740 body=54 status=ok
// SIG undefined FUN_143bae740(void)

undefined8 FUN_143bae740(undefined8 param_1,uint param_2)

{
  FUN_143bae580(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bae780 FUN_143bae780 body=586 status=ok
// SIG undefined FUN_143bae780(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bae780(longlong param_1,longlong *param_2)

{
  int iVar1;
  char *_Str1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined4 local_90 [2];
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  char *local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x148) != 0) {
    local_70 = (char *)(**(code **)(*param_2 + 0xb0))(param_2);
    local_60 = **(longlong **)(param_1 + 0x148);
    _Str1 = (char *)(**(code **)(local_60 + 0xb0))(*(undefined8 *)(param_1 + 0x148));
    iVar1 = _guard_xfg_dispatch_icall_nop(_Str1,local_70);
    if (iVar1 == 0) goto LAB_143bae8de;
  }
  local_90[0] = 0;
  if ((*(int *)(param_1 + 0x16c) != -1) && (*(int *)(param_1 + 0x168) != -1)) {
    local_98 = *(undefined8 **)(param_1 + 0x160);
    local_50 = local_98;
    if (local_98 == (undefined8 *)0x0) {
      local_80 = 0;
    }
    else {
      local_80 = (**(code **)*local_98)(local_98,1);
    }
    uVar2 = FUN_143baf2a0(param_1,param_2,param_1 + 0x170,local_90);
    *(undefined8 *)(param_1 + 0x160) = uVar2;
  }
LAB_143bae8de:
  local_88 = *(undefined8 **)(param_1 + 0x148);
  local_48 = local_88;
  if (local_88 == (undefined8 *)0x0) {
    local_78 = 0;
  }
  else {
    local_78 = (**(code **)*local_88)(local_88,1);
  }
  *(longlong **)(param_1 + 0x148) = param_2;
  uVar2 = FUN_143b528b0(*(undefined8 *)(param_1 + 0x148));
  local_68 = FUN_143baf690(param_1,local_38,*(undefined8 *)(param_1 + 0x318),uVar2);
  local_58 = local_68;
  FUN_143a8dcd0(param_1 + 0x2f0,local_68);
  FUN_143a8dc60(local_38);
  return;
}



// FUNCTION 143bae9d0 FUN_143bae9d0 body=178 status=ok
// SIG undefined FUN_143bae9d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bae9d0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_58 = FUN_143baf690(param_1,local_40,*(undefined8 *)(param_1 + 0x318),param_2);
  local_50 = local_58;
  FUN_143a8dcd0(param_1 + 0x2f0,local_58);
  FUN_143a8dc60(local_40);
  FUN_143b4e8a0(*(undefined8 *)(param_1 + 0x148),param_2);
  return;
}


