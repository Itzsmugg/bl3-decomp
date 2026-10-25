// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143b425f0 FUN_143b425f0 body=17 status=ok
// SIG undefined FUN_143b425f0(void)

undefined4 FUN_143b425f0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x264);
}



// FUNCTION 143b42610 FUN_143b42610 body=53 status=ok
// SIG undefined FUN_143b42610(void)

undefined8 FUN_143b42610(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x240) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_143b76110(*(undefined8 *)(param_1 + 0x240));
  }
  return uVar1;
}



// FUNCTION 143b42650 GetMultilineEditableText body=48 status=ok
// SIG undefined GetMultilineEditableText(void)

undefined8 SMultiLineEditingTest::GetMultilineEditableText(longlong param_1,undefined8 param_2)

{
  FUN_143a8dcd0(param_2,param_1 + 0x1c8);
  return param_2;
}



// FUNCTION 143b42680 FUN_143b42680 body=48 status=ok
// SIG undefined FUN_143b42680(void)

undefined8 FUN_143b42680(longlong param_1,undefined8 param_2)

{
  FUN_143a8dcd0(param_2,param_1 + 0x1f0);
  return param_2;
}



// FUNCTION 143b426b0 FUN_143b426b0 body=64 status=ok
// SIG undefined FUN_143b426b0(void)

undefined8 FUN_143b426b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143a8d5f0(param_2,*(undefined4 *)(param_1 + 0x284),param_3,param_4,0);
  return param_2;
}



// FUNCTION 143b426f0 FUN_143b426f0 body=17 status=ok
// SIG undefined FUN_143b426f0(void)

undefined4 FUN_143b426f0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x28c);
}



// FUNCTION 143b42710 FUN_143b42710 body=48 status=ok
// SIG undefined FUN_143b42710(void)

undefined8 FUN_143b42710(longlong param_1,undefined8 param_2)

{
  FUN_143a8dcd0(param_2,param_1 + 0x178);
  return param_2;
}



// FUNCTION 143b42740 FUN_143b42740 body=48 status=ok
// SIG undefined FUN_143b42740(void)

undefined8 FUN_143b42740(longlong param_1,undefined8 param_2)

{
  FUN_143a8dcd0(param_2,param_1 + 0x1a0);
  return param_2;
}



// FUNCTION 143b42770 FUN_143b42770 body=51 status=ok
// SIG undefined FUN_143b42770(void)

undefined8 FUN_143b42770(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x278) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_143b75c80(*(undefined8 *)(param_1 + 0x278));
  }
  return uVar1;
}



// FUNCTION 143b427b0 FUN_143b427b0 body=17 status=ok
// SIG undefined FUN_143b427b0(void)

undefined4 FUN_143b427b0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x280);
}



// FUNCTION 143b427d0 GetUseableHeroSoulInventorySize body=17 status=ok
// SIG undefined GetUseableHeroSoulInventorySize(void)

undefined4 UGISInventoryComponent::GetUseableHeroSoulInventorySize(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x250);
}



// FUNCTION 143b427f0 FUN_143b427f0 body=8 status=ok
// SIG undefined FUN_143b427f0(void)

undefined * FUN_143b427f0(void)

{
  return &DAT_146bc7e90;
}



// FUNCTION 143b42800 operator() body=37 status=ok
// SIG undefined operator()(void)

void <lambda_04c79fd4136733a528ca0b360569665b>::operator()(undefined8 *param_1,undefined8 param_2)

{
  FUN_143ab3310(*param_1,param_2);
  return;
}



// FUNCTION 143b42830 FUN_143b42830 body=562 status=ok
// SIG undefined FUN_143b42830(void)

void FUN_143b42830(longlong param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  pcVar4 = (char *)FUN_143b42ef0(param_1 + 0x2f0);
  if ((*pcVar4 != '\x02') && (pcVar4[1] != '\x02')) {
    *pcVar4 = '\0';
    pcVar4[1] = '\0';
    if (((*(int *)(param_1 + 0x2e0) != 0) &&
        ((((*(int *)(param_1 + 0x288) == 0 && (iVar3 = FUN_143a904f0(param_1 + 0x178), iVar3 < 1))
          && (iVar3 = FUN_143a904f0(param_1 + 0x1a0), iVar3 < 1)) &&
         (iVar3 = FUN_143a904f0(param_1 + 0x1c8), iVar3 < 2)))) &&
       (((iVar3 = FUN_143a904f0(param_1 + 0x1c8), iVar3 != 1 ||
         (sVar2 = FUN_143a8e4f0(param_1 + 0x1c8,0), sVar2 == 0x2d)) &&
        (iVar3 = FUN_143a904f0(param_1 + 0x1f0), iVar3 < 1)))) {
      pcVar4[1] = '\x01';
    }
    if ((((*(int *)(param_1 + 0x24c) == 0) || (cVar1 = FUN_143b38630(param_1), cVar1 == '\0')) &&
        ((*(int *)(param_1 + 0x250) == 0 || (cVar1 = FUN_143b38630(param_1), cVar1 == '\0')))) &&
       ((((*(char *)(param_1 + 0x26c) == '\0' && (*(int *)(param_1 + 0x288) == 0)) &&
         (*(int *)(param_1 + 0x264) == 1)) &&
        ((*(longlong *)(param_1 + 0x240) == 0 && (*(int *)(param_1 + 0x248) == 0)))))) {
      uVar5 = FUN_143b41c90(param_1,4);
      iVar3 = FUN_143a8e3e0(uVar5,0);
      if ((iVar3 == 0x30) &&
         (((*(char *)(param_1 + 0x254) == '\0' && (iVar3 = FUN_143b38310(param_1), iVar3 < 1)) &&
          ((*(int *)(param_1 + 700) == 0 && (*(longlong *)(param_1 + 0x278) == 0)))))) {
        *pcVar4 = '\x01';
      }
    }
  }
  return;
}



// FUNCTION 143b42a70 FUN_143b42a70 body=522 status=ok
// SIG undefined FUN_143b42a70(void)

void FUN_143b42a70(longlong param_1)

{
  undefined1 *puVar1;
  
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined1 *)(param_1 + 0x254) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined1 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x264) = 1;
  *(undefined4 *)(param_1 + 0x268) = 6;
  *(undefined1 *)(param_1 + 0x26c) = 0;
  *(undefined1 *)(param_1 + 0x26d) = 0;
  *(undefined1 *)(param_1 + 0x26e) = 0;
  icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::clear(param_1 + 0x270);
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined4 *)(param_1 + 0x280) = 4;
  *(undefined4 *)(param_1 + 0x284) = 0;
  *(undefined4 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x28c) = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 1;
  *(undefined4 *)(param_1 + 700) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 2;
  puVar1 = (undefined1 *)FUN_143b42ef0(param_1 + 0x2f0);
  *puVar1 = 2;
  puVar1[1] = 2;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  return;
}



// FUNCTION 143b42c80 FUN_143b42c80 body=257 status=ok
// SIG undefined FUN_143b42c80(void)

longlong FUN_143b42c80(undefined8 param_1,undefined4 *param_2)

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
        <lambda_04c79fd4136733a528ca0b360569665b>::operator()(local_38,FUN_143b49e60);
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



// FUNCTION 143b42d90 FUN_143b42d90 body=257 status=ok
// SIG undefined FUN_143b42d90(void)

longlong FUN_143b42d90(undefined8 param_1,undefined4 *param_2)

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
        <lambda_04c79fd4136733a528ca0b360569665b>::operator()(local_38,FUN_143b49d80);
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



// FUNCTION 143b42ea0 FUN_143b42ea0 body=67 status=ok
// SIG undefined FUN_143b42ea0(void)

void FUN_143b42ea0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143a904f0(param_3);
  FUN_143a8f030(param_1,param_2,0,param_3,0,uVar1);
  return;
}



// FUNCTION 143b42ef0 FUN_143b42ef0 body=11 status=ok
// SIG undefined FUN_143b42ef0(void)

undefined8 FUN_143b42ef0(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 143b42f00 FUN_143b42f00 body=18 status=ok
// SIG undefined FUN_143b42f00(void)

undefined1 FUN_143b42f00(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x254);
}



// FUNCTION 143b42f20 FUN_143b42f20 body=18 status=ok
// SIG undefined FUN_143b42f20(void)

undefined1 FUN_143b42f20(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x26e);
}



// FUNCTION 143b42f40 FUN_143b42f40 body=212 status=ok
// SIG undefined FUN_143b42f40(void)

bool FUN_143b42f40(longlong param_1,int param_2)

{
  char cVar1;
  bool local_18;
  
  local_18 = false;
  cVar1 = FUN_143b38630(param_1);
  if (((cVar1 != '\0') && (0 < param_2)) && (0 < *(int *)(param_1 + 0x24c))) {
    if ((*(int *)(param_1 + 0x250) < 1) || (param_2 <= *(int *)(param_1 + 0x24c))) {
      local_18 = param_2 % *(int *)(param_1 + 0x24c) == 0;
    }
    else {
      local_18 = (param_2 - *(int *)(param_1 + 0x24c)) % *(int *)(param_1 + 0x250) == 0;
    }
  }
  return local_18;
}



// FUNCTION 143b43020 FUN_143b43020 body=48 status=ok
// SIG undefined FUN_143b43020(void)

bool FUN_143b43020(longlong param_1)

{
  return (*(byte *)(*(longlong *)(param_1 + 0x20) + 8) & 0x40) != 0;
}



// FUNCTION 143b43050 FUN_143b43050 body=48 status=ok
// SIG undefined FUN_143b43050(void)

bool FUN_143b43050(longlong param_1)

{
  return (*(byte *)(*(longlong *)(param_1 + 0x20) + 8) & 0x30) != 0;
}



// FUNCTION 143b43080 FUN_143b43080 body=18 status=ok
// SIG undefined FUN_143b43080(void)

undefined1 FUN_143b43080(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x15c);
}



// FUNCTION 143b430a0 FUN_143b430a0 body=75 status=ok
// SIG undefined FUN_143b430a0(void)

bool FUN_143b430a0(longlong param_1)

{
  return (*(byte *)(*(longlong *)(param_1 + 0x20) + 8) & 0x80) == 0;
}



// FUNCTION 143b430f0 FUN_143b430f0 body=18 status=ok
// SIG undefined FUN_143b430f0(void)

undefined1 FUN_143b430f0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x26c);
}



// FUNCTION 143b43110 FUN_143b43110 body=186 status=ok
// SIG undefined FUN_143b43110(void)

int FUN_143b43110(undefined8 param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_res10;
  undefined4 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  local_res10 = param_2;
  while( true ) {
    iVar2 = FUN_143a904f0(param_3);
    if ((iVar2 <= local_18) || (local_res10 < 0)) break;
    uVar3 = FUN_143a8e3e0(param_3,local_18);
    if (uVar3 < 0x10000) {
      local_10 = 1;
    }
    else {
      local_10 = 2;
    }
    local_18 = local_18 + local_10;
    cVar1 = FUN_143b28380(uVar3);
    if (cVar1 != '\0') {
      local_18 = FUN_143b46390(param_3,local_18);
    }
    local_res10 = FUN_143b431d0(param_1,local_res10,uVar3);
  }
  return local_res10;
}



// FUNCTION 143b431d0 FUN_143b431d0 body=173 status=ok
// SIG undefined FUN_143b431d0(void)

int FUN_143b431d0(undefined8 param_1,int param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int local_18;
  int local_14;
  
  cVar1 = FUN_143b28380(param_3);
  if (cVar1 == '\0') {
    if ((param_2 < 0) || (uVar2 = FUN_143a8e3e0(param_1,param_2), uVar2 != param_3)) {
      local_14 = -1;
    }
    else {
      if (param_3 < 0x10000) {
        local_18 = 1;
      }
      else {
        local_18 = 2;
      }
      local_14 = param_2 + local_18;
    }
  }
  else {
    local_14 = FUN_143b46390(param_1,param_2);
    if (local_14 == param_2) {
      local_14 = -1;
    }
  }
  return local_14;
}



// FUNCTION 143b43280 FUN_143b43280 body=111 status=ok
// SIG undefined FUN_143b43280(void)

ulonglong FUN_143b43280(int param_1,char param_2,int param_3,longlong *param_4,int param_5)

{
  uint7 uVar2;
  ulonglong uVar1;
  
  if (param_2 == '\0') {
    uVar2 = (uint7)(uint3)((uint)param_1 >> 8);
    if (param_5 == param_1) {
      uVar1 = CONCAT71(uVar2,1);
    }
    else if (param_4 == (longlong *)0x0) {
      uVar1 = (ulonglong)uVar2 << 8;
    }
    else {
      uVar1 = (**(code **)(*param_4 + 0x30))(param_4,param_5);
    }
  }
  else {
    uVar1 = (ulonglong)(param_5 == param_3);
  }
  return uVar1;
}



// FUNCTION 143b43300 FUN_143b43300 body=170 status=ok
// SIG undefined FUN_143b43300(void)

ulonglong FUN_143b43300(int param_1,char param_2,int param_3,longlong *param_4,undefined8 param_5,
                       longlong *param_6,int param_7)

{
  char cVar1;
  uint7 uVar3;
  ulonglong uVar2;
  byte local_17;
  
  if (param_2 == '\0') {
    uVar3 = (uint7)(uint3)((uint)param_1 >> 8);
    if (param_7 == param_1) {
      uVar2 = CONCAT71(uVar3,1);
    }
    else if (param_4 == (longlong *)0x0) {
      uVar2 = (ulonglong)uVar3 << 8;
    }
    else {
      cVar1 = (**(code **)(*param_4 + 0x30))(param_4,param_7);
      if ((cVar1 == '\0') ||
         ((param_6 != (longlong *)0x0 &&
          (cVar1 = (**(code **)(*param_6 + 0x30))(param_6,param_7), cVar1 != '\0')))) {
        local_17 = 0;
      }
      else {
        local_17 = 1;
      }
      uVar2 = (ulonglong)local_17;
    }
  }
  else {
    uVar2 = (ulonglong)(param_7 == param_3);
  }
  return uVar2;
}



// FUNCTION 143b433b0 FUN_143b433b0 body=1444 status=ok
// SIG undefined FUN_143b433b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b433b0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_158 [32];
  char *local_138;
  longlong local_130;
  undefined1 local_128;
  undefined1 local_120;
  undefined8 local_118;
  longlong local_110;
  char *local_108;
  longlong local_100;
  int local_f8;
  char local_f4 [4];
  longlong local_f0;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8 [2];
  ulonglong local_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_a0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_f8 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
             ::GetIndex(param_4);
  local_e8 = local_f8;
  local_d8 = local_f8;
  FUN_143b69930(param_3,0);
  if (param_5 != 0) {
    for (local_e4 = 0; local_e4 < 4; local_e4 = local_e4 + 1) {
      *(undefined2 *)(param_5 + (longlong)local_e4 * 2) = 0;
    }
  }
  if ((0 < (int)param_1[0x51]) &&
     ((*(int *)((longlong)param_1 + 0x28c) == 0 || (*(int *)((longlong)param_1 + 0x28c) == 1)))) {
    local_f8 = FUN_143b46300(param_1,param_2,local_f8);
  }
  cVar1 = (**(code **)(*param_1 + 0xc0))(param_1);
  if (cVar1 != '\0') {
    local_f8 = FUN_143b463e0(param_2,local_f8);
    local_e8 = local_f8;
  }
  local_c8 = FUN_143b41c90(param_1,0xf);
  uVar2 = FUN_143a904f0(local_c8);
  cVar1 = FUN_143b3e5e0(param_2,local_f8,uVar2,local_c8);
  if (cVar1 == '\0') {
    local_d0 = FUN_143a904f0(local_c8);
  }
  else {
    local_d0 = 0;
  }
  local_d4 = local_d0;
  if (local_d0 == 0) {
    local_f8 = local_e8;
    FUN_143b0fce0(param_4,local_e8);
    local_f0 = FUN_143b69270(param_3);
    if (local_f0 != 0) {
      if (*(int *)((longlong)param_1 + 700) == 0) {
        local_100 = param_5;
        local_108 = local_f4;
        local_120 = 0;
        local_128 = 0;
        local_130 = param_1[0x44];
        local_138 = (char *)param_1[0x43];
        local_118 = param_4;
        local_110 = local_f0;
        cVar1 = FUN_143b47620(param_1,param_2,param_1[0x45],param_1[0x46]);
        if (cVar1 == '\0') {
          FUN_143b0fce0(param_4,local_d8);
          return;
        }
      }
      else {
        local_130 = param_5;
        local_138 = local_f4;
        cVar1 = FUN_143b43b40(param_1,param_2,param_4,local_f0);
        if (cVar1 == '\0') {
          return;
        }
      }
      if (local_f4[0] == '\0') {
        if (param_1[0x48] != 0) {
          local_b8[0] = 0;
          FUN_143b753e0(local_f0,param_1[0x48],local_b8);
        }
        if ((int)param_1[0x49] != 0) {
          FUN_143b74e90(local_98);
          FUN_143b76630(local_98,10);
          if ((int)param_1[0x49] < 1) {
            for (local_e0 = (int)param_1[0x49]; local_e0 < 0; local_e0 = local_e0 + 1) {
              local_bc = 0;
              FUN_143b76300(local_f0,local_98,&local_bc);
            }
          }
          else {
            for (local_dc = (int)param_1[0x49]; 0 < local_dc; local_dc = local_dc + -1) {
              local_c0 = 0;
              FUN_143b753e0(local_f0,local_98,&local_c0);
            }
          }
          Audio::FAudioCaptureSynth::IsStreamOpen(local_98);
        }
        cVar1 = FUN_143b76290(local_f0);
        if (((cVar1 != '\0') && (cVar1 = FUN_143b430a0(local_f0), cVar1 == '\0')) &&
           (cVar1 = FUN_143b43080(param_1), cVar1 != '\0')) {
          FUN_143b76870(local_f0,1);
        }
        FUN_143b68bf0(param_3,local_f0);
      }
      else {
        local_b0 = FUN_143a91910();
        cVar1 = FUN_143b430a0(local_f0);
        if (cVar1 == '\0') {
          local_a8 = local_b0 ^ 0x8000000000000000;
        }
        else {
          local_a8 = local_b0;
        }
        FUN_143b698c0(param_3,local_a8);
      }
    }
  }
  else {
    local_f8 = local_f8 + local_d0;
    if ((0 < (int)param_1[0x51]) &&
       ((*(int *)((longlong)param_1 + 0x28c) == 2 || (*(int *)((longlong)param_1 + 0x28c) == 3)))) {
      local_f8 = FUN_143b46300(param_1,param_2,local_f8);
    }
    FUN_143b0fce0(param_4,local_f8);
    uVar3 = FUN_143a91920();
    FUN_143b698c0(param_3,uVar3);
  }
  return;
}



// FUNCTION 143b43960 FUN_143b43960 body=63 status=ok
// SIG undefined FUN_143b43960(void)

void FUN_143b43960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143b433b0(param_1,param_2,param_3,param_4,0);
  return;
}



// FUNCTION 143b439a0 FUN_143b439a0 body=406 status=ok
// SIG undefined FUN_143b439a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b439a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  int local_138;
  undefined4 local_134;
  undefined1 local_130 [8];
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
  local_f8 [224];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_100 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  FUN_143b686d0(local_f8);
  local_138 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(param_3);
  puVar4 = local_18;
  for (lVar3 = 8; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_148 = local_18;
  FUN_143b433b0(param_1,param_2,local_f8,param_3);
  iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_3);
  if (iVar2 != local_138) {
    local_134 = 0;
    local_120 = FUN_143a8d310(0xe8);
    if (local_120 == 0) {
      local_128 = 0;
    }
    else {
      local_128 = FUN_143b69d80(local_120,local_f8,local_18,&local_134);
    }
    local_108 = local_128;
    UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
    ::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
              (local_130,local_128);
    cVar1 = FUN_143a8b0e0(local_134);
    if (cVar1 == '\0') {
      local_118 = FUN_143b20430(local_130);
      FUN_143b36bb0(local_130);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_f8);
      return local_118;
    }
    FUN_143b0fce0(param_3,local_138);
    FUN_143b36bb0(local_130);
  }
  local_110 = 0;
  Concurrency::
  call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
  ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
            (local_f8);
  return local_110;
}



// FUNCTION 143b43b40 FUN_143b43b40 body=1668 status=ok
// SIG undefined FUN_143b43b40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_143b43b40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6)

{
  int iVar1;
  undefined1 auStack_288 [32];
  longlong local_268;
  longlong local_260;
  undefined1 local_258;
  undefined1 local_250;
  undefined1 *local_248;
  undefined1 *local_240;
  undefined1 *local_238;
  undefined8 local_230;
  char local_228;
  undefined1 local_227 [3];
  int local_224;
  undefined1 local_220 [4];
  int local_21c;
  char local_218;
  char local_217;
  char local_216;
  int local_214;
  int local_210;
  int local_20c;
  int local_208;
  int local_204;
  int local_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined4 local_1e8 [2];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  longlong local_1b0;
  undefined8 local_1a8;
  undefined1 local_198 [128];
  undefined1 local_118 [128];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_1a8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  local_21c = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(param_3);
  local_224 = -1;
  local_208 = local_21c;
  FUN_143b16ce0(local_1e0,local_21c);
  FUN_143b74e90(local_198);
  if (*(int *)(param_1 + 0x2b8) == 0xb) {
    local_230 = param_6;
    local_238 = local_227;
    local_240 = local_198;
    local_248 = local_1e0;
    local_250 = 1;
    local_258 = 1;
    local_260 = *(longlong *)(param_1 + 0x220);
    local_268 = *(longlong *)(param_1 + 0x218);
    local_228 = FUN_143b47620(param_1,param_2,*(undefined8 *)(param_1 + 0x228),
                              *(undefined8 *)(param_1 + 0x230));
  }
  else {
    local_230 = param_6;
    local_238 = local_227;
    local_240 = local_198;
    local_248 = local_1e0;
    local_250 = 0;
    local_258 = 1;
    local_260 = *(longlong *)(param_1 + 0x220);
    local_268 = *(longlong *)(param_1 + 0x218);
    local_228 = FUN_143b47620(param_1,param_2,*(undefined8 *)(param_1 + 0x228),
                              *(undefined8 *)(param_1 + 0x230));
  }
  if (local_228 == '\0') {
    local_224 = FUN_143a93e60(local_1e0);
  }
  else {
    iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(local_1e0);
    if (local_21c < iVar1) {
      local_21c = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_1e0);
      for (local_214 = 0; local_214 < 1; local_214 = local_214 + 1) {
        *(undefined1 *)(param_5 + local_214) = local_227[local_214];
      }
      FUN_143b74f60(param_4,local_198);
    }
  }
  local_1e8[0] = 0xffffffff;
  local_1f0 = 0;
  while (local_1f0 = <lambda_04c79fd4136733a528ca0b360569665b>::operator()
                               (*(undefined8 *)(param_1 + 0x2c0),local_1e8), local_1f0 != 0) {
    local_1f8 = *(longlong *)(local_1f0 + 8);
    local_1b0 = local_1f8;
    FUN_143b16ce0(local_1d0,local_208);
    FUN_143b74e90(local_118);
    local_260 = local_1f8 + 0x78;
    local_268 = local_1f8 + 0x50;
    local_230 = param_6;
    local_238 = local_220 + 1;
    local_240 = local_118;
    local_248 = local_1d0;
    local_250 = *(undefined1 *)(local_1f8 + 0xa0);
    local_258 = 1;
    local_218 = FUN_143b47620(param_1,param_2,local_1f8,local_1f8 + 0x28);
    if (local_218 == '\0') {
      iVar1 = FUN_143a93e60(local_1d0);
      if (local_224 < iVar1) {
        local_200 = FUN_143a93e60(local_1d0);
      }
      else {
        local_200 = local_224;
      }
      local_224 = local_200;
    }
    else {
      local_228 = '\x01';
      iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(local_1d0);
      if (local_21c < iVar1) {
        local_21c = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                    ::GetIndex(local_1d0);
        for (local_210 = 0; local_210 < 1; local_210 = local_210 + 1) {
          *(undefined1 *)(param_5 + local_210) = local_220[(longlong)local_210 + 1];
        }
        FUN_143b74f60(param_4,local_118);
      }
    }
    Audio::FAudioCaptureSynth::IsStreamOpen(local_118);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_1d0);
  }
  FUN_143b16ce0(local_1c0,local_208);
  FUN_143b74e90(local_98);
  local_260 = param_1 + 0x1a0;
  local_268 = param_1 + 0x178;
  local_230 = param_6;
  local_238 = local_220;
  local_240 = local_98;
  local_248 = local_1c0;
  local_250 = 0;
  local_258 = 0;
  local_217 = FUN_143b47620(param_1,param_2,param_1 + 0x1c8,param_1 + 0x1f0);
  if (local_217 == '\0') {
    iVar1 = FUN_143a93e60(local_1c0);
    if (local_224 < iVar1) {
      local_204 = FUN_143a93e60(local_1c0);
    }
    else {
      local_204 = local_224;
    }
    local_224 = local_204;
  }
  else {
    iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(local_1c0);
    if (local_21c < iVar1) {
      local_21c = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_1c0);
      for (local_20c = 0; local_20c < 1; local_20c = local_20c + 1) {
        *(undefined1 *)(param_5 + local_20c) = local_220[local_20c];
      }
      FUN_143b74f60(param_4,local_98);
    }
    local_228 = '\x01';
  }
  if (local_228 == '\0') {
    FUN_143b44cd0(param_3,local_224);
  }
  else {
    FUN_143b0fce0(param_3,local_21c);
    FUN_143b44cd0(param_3,0xffffffff);
  }
  local_216 = local_228;
  Audio::FAudioCaptureSynth::IsStreamOpen(local_98);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(local_1c0);
  Audio::FAudioCaptureSynth::IsStreamOpen(local_198);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(local_1e0);
  return local_216;
}



// FUNCTION 143b441d0 FUN_143b441d0 body=103 status=ok
// SIG undefined FUN_143b441d0(void)

ulonglong FUN_143b441d0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  cVar1 = FUN_143b3e500(param_1);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x26c) == '\0') {
      uVar4 = FUN_143b382d0(param_1);
    }
    else {
      iVar2 = FUN_143b38330(param_1);
      iVar3 = FUN_143b382d0(param_1);
      uVar4 = (ulonglong)(uint)(iVar2 + iVar3);
    }
  }
  else {
    uVar4 = FUN_143b425b0(param_1);
  }
  return uVar4;
}



// FUNCTION 143b44240 FUN_143b44240 body=130 status=ok
// SIG undefined FUN_143b44240(void)

void FUN_143b44240(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_20;
  
  lVar1 = FUN_143a8d310(0x28);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143a8d3a0(lVar1,param_2);
  }
  FUN_143ab3730(*param_1,local_20,param_3,param_4);
  return;
}



// FUNCTION 143b442d0 FUN_143b442d0 body=899 status=ok
// SIG undefined FUN_143b442d0(void)

longlong * FUN_143b442d0(longlong *param_1,int param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 != '\0') {
    return param_1;
  }
  if (param_2 < 0x1002) {
    if (0xfff < param_2) {
      cVar1 = FUN_1415e7db0(param_1 + 0x4e,param_3);
      if (cVar1 == '\0') {
        *param_4 = 1;
        return param_1;
      }
      icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::set(param_1 + 0x4e,param_2,param_3);
      return param_1;
    }
    switch(param_2) {
    case 0:
      (**(code **)(*param_1 + 0xb0))(param_1,param_3 != 0);
      break;
    case 1:
      (**(code **)(*param_1 + 200))(param_1,param_3 != 0);
      break;
    case 2:
      (**(code **)(*param_1 + 0x208))(param_1,param_3 != 0);
      break;
    case 3:
      (**(code **)(*param_1 + 0xd0))(param_1,param_3);
      break;
    case 4:
      (**(code **)(*param_1 + 0xd8))(param_1,param_3);
      break;
    case 5:
      (**(code **)(*param_1 + 0xd8))(param_1,param_3);
      (**(code **)(*param_1 + 0xd0))(param_1,param_3);
      break;
    case 6:
      (**(code **)(*param_1 + 0xe0))(param_1,param_3);
      break;
    case 7:
      (**(code **)(*param_1 + 0xe8))(param_1,param_3);
      break;
    case 8:
      (**(code **)(*param_1 + 0xe8))(param_1,param_3);
      (**(code **)(*param_1 + 0xe0))(param_1,param_3);
      break;
    case 9:
      (**(code **)(*param_1 + 0x170))(param_1,param_3);
      break;
    case 10:
      (**(code **)(*param_1 + 0x1f8))(param_1,param_3);
      break;
    case 0xb:
      (**(code **)(*param_1 + 400))(param_1,param_3);
      break;
    default:
      goto switchD_143b44345_caseD_c;
    case 0xd:
      (**(code **)(*param_1 + 0x1a0))(param_1,param_3);
      break;
    case 0xe:
      (**(code **)(*param_1 + 0x1c0))(param_1,param_3);
      break;
    case 0xf:
      (**(code **)(*param_1 + 0x200))(param_1,param_3);
      break;
    case 0x10:
      FUN_143b455e0(param_1,param_3 != 0);
      break;
    case 0x11:
      FUN_143b44f90(param_1,param_3);
      break;
    case 0x12:
      FUN_143b44e50(param_1,param_3);
      break;
    case 0x13:
      (**(code **)(*param_1 + 0xb8))(param_1,param_3 != 0);
      break;
    case 0x14:
      FUN_143b452c0(param_1,param_3);
      break;
    case 0x15:
      *(int *)(param_1 + 0x49) = param_3;
    }
  }
  else {
switchD_143b44345_caseD_c:
    *param_4 = 0x10;
  }
  return param_1;
}



// FUNCTION 143b446b0 NotifyPlayerRemoved body=52 status=ok
// SIG undefined NotifyPlayerRemoved(void)

void UShooterGameViewportClient::NotifyPlayerRemoved
               (undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_143b39bb0(param_1,param_2,param_3);
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b446f0 FUN_143b446f0 body=66 status=ok
// SIG undefined FUN_143b446f0(void)

void FUN_143b446f0(longlong *param_1,undefined8 param_2)

{
  undefined4 local_18 [6];
  
  local_18[0] = 0;
  (**(code **)(*param_1 + 0xf0))(param_1,param_2,local_18);
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b44740 FUN_143b44740 body=326 status=ok
// SIG undefined FUN_143b44740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b44740(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_98;
  undefined1 local_90 [40];
  undefined1 local_68 [80];
  ulonglong local_18;
  
  local_98 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  FUN_143b39c10(param_1,param_2,param_3);
  iVar1 = FUN_143b19dc0(param_1 + 0x52,&DAT_145d0d098,3,0);
  if (iVar1 != -1) {
    FUN_143a8d3a0(local_90,param_1 + 0x52);
    local_a8 = param_3;
    FUN_143b45cf0(param_1,param_1 + 0x52,1,1);
    local_a8 = param_3;
    FUN_143b3dcd0(param_1,local_90,0,local_68);
    FUN_143a8dc60(local_90);
  }
  (**(code **)(*param_1 + 0x248))(param_1,param_2,param_3);
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b44890 FUN_143b44890 body=515 status=ok
// SIG undefined FUN_143b44890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b44890(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_258 [32];
  char local_238;
  undefined4 local_234;
  uint local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined1 *local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined1 local_1f0 [40];
  undefined1 local_1c8 [48];
  undefined1 local_198 [384];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_1f8 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  local_230 = 0;
  local_234 = 0;
  local_220 = (undefined1 *)0x0;
  local_218 = FUN_143b42560(param_1[0x4b],local_198);
  local_208 = local_218;
  local_228 = FUN_143a8c200(local_218);
  FUN_143a8acf0(local_198);
  FUN_143b6e350(local_228,local_18,4,&local_234);
  FUN_143a8ac30(local_1f0);
  FUN_143b6ed70(local_18,local_228,local_1f0,&local_234);
  cVar1 = FUN_143a8b110(local_234);
  if (cVar1 != '\0') {
    uVar2 = FUN_143b41c90(param_1,8);
    cVar1 = FUN_143a8dd00(uVar2,local_1f0);
    if (cVar1 != '\0') {
      local_210 = FUN_143a8dad0(local_1c8,local_18);
      local_230 = local_230 | 1;
      local_200 = local_210;
      uVar2 = FUN_143b41c90(param_1,9);
      cVar1 = FUN_143a8dd00(uVar2,local_210);
      if (cVar1 != '\0') {
        local_22c = 1;
        goto LAB_143b449fc;
      }
    }
  }
  local_22c = 0;
LAB_143b449fc:
  local_238 = (char)local_22c;
  if ((local_230 & 1) != 0) {
    local_230 = local_230 & 0xfffffffe;
    FUN_143a8dc60(local_1c8);
  }
  if (local_238 != '\0') {
    local_220 = local_18;
  }
  local_234 = 0;
  (**(code **)(*param_1 + 0x248))(param_1,local_220,&local_234);
  FUN_143b42830(param_1);
  FUN_143a8dc60(local_1f0);
  return;
}



// FUNCTION 143b44aa0 FUN_143b44aa0 body=302 status=ok
// SIG undefined FUN_143b44aa0(void)

void FUN_143b44aa0(longlong *param_1,short *param_2,undefined4 *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 local_14;
  undefined8 local_10;
  
  if ((param_2 == (short *)0x0) || (*param_2 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  local_10 = 0;
  local_14 = 0;
  if ((*(int *)((longlong)param_1 + 700) != 0) && (bVar1)) {
    local_10 = FUN_143b6ecb0(param_2,param_3);
    local_14 = FUN_143b6e780(param_2,param_3);
  }
  FUN_143b39c10(param_1,param_2,param_3);
  cVar2 = FUN_143a8b0e0(*param_3);
  if (cVar2 == '\0') {
    if (*(int *)((longlong)param_1 + 700) != 0) {
      if (bVar1) {
        (**(code **)(*param_1 + 0x180))(param_1,local_10);
        (**(code **)(*param_1 + 0xe8))(param_1,local_14);
        (**(code **)(*param_1 + 0xe0))(param_1,local_14);
      }
      FUN_143b41110(param_1,0);
    }
    FUN_143b42830(param_1);
  }
  return;
}



// FUNCTION 143b44bd0 FUN_143b44bd0 body=71 status=ok
// SIG undefined FUN_143b44bd0(void)

void FUN_143b44bd0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = CreateInternalContext(param_2);
  (**(code **)(*param_1 + 0x140))(param_1,uVar1);
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b44c20 FUN_143b44c20 body=126 status=ok
// SIG undefined FUN_143b44c20(void)

void FUN_143b44c20(longlong *param_1,undefined8 param_2)

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
  (**(code **)(*param_1 + 0x128))(param_1,local_20);
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b44ca0 FUN_143b44ca0 body=44 status=ok
// SIG undefined FUN_143b44ca0(void)

void FUN_143b44ca0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x254) = param_2;
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b44cd0 FUN_143b44cd0 body=22 status=ok
// SIG undefined FUN_143b44cd0(void)

void FUN_143b44cd0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



// FUNCTION 143b44cf0 FUN_143b44cf0 body=44 status=ok
// SIG undefined FUN_143b44cf0(void)

void FUN_143b44cf0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x26e) = param_2;
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b44d20 FUN_143b44d20 body=68 status=ok
// SIG undefined FUN_143b44d20(void)

void FUN_143b44d20(longlong param_1,int param_2)

{
  undefined4 local_18;
  
  local_18 = param_2;
  if (param_2 < 1) {
    local_18 = 0;
  }
  *(int *)(param_1 + 0x288) = local_18;
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b44d70 FUN_143b44d70 body=43 status=ok
// SIG undefined FUN_143b44d70(void)

void FUN_143b44d70(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24c) = param_2;
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b44da0 OnStopTargeting body=43 status=ok
// SIG undefined OnStopTargeting(void)

void APrimalDinoCharacter::OnStopTargeting(undefined8 param_1,undefined1 param_2)

{
  FUN_143b39ca0(param_1,param_2);
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b44dd0 FUN_143b44dd0 body=54 status=ok
// SIG undefined FUN_143b44dd0(void)

void FUN_143b44dd0(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143b3c420(param_2,0x154);
  FUN_143b39ce0(param_1,uVar1);
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b44e10 FUN_143b44e10 body=55 status=ok
// SIG undefined FUN_143b44e10(void)

void FUN_143b44e10(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143b3c420(param_2,2000000000);
  FUN_143b39d50(param_1,uVar1);
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b44e50 FUN_143b44e50 body=109 status=ok
// SIG undefined FUN_143b44e50(void)

void FUN_143b44e50(longlong param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_res10;
  
  local_res10 = param_2;
  if (param_2 < 1) {
    local_res10 = 1;
  }
  uVar1 = FUN_143b3c420(*(undefined4 *)(param_1 + 0x264),local_res10);
  *(undefined4 *)(param_1 + 0x264) = uVar1;
  *(int *)(param_1 + 0x268) = local_res10;
  *(undefined1 *)(param_1 + 0x260) = 1;
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b44ec0 FUN_143b44ec0 body=72 status=ok
// SIG undefined FUN_143b44ec0(void)

void FUN_143b44ec0(longlong param_1,char param_2)

{
  if (param_2 < '\x01') {
    param_2 = '\x01';
  }
  *(char *)(param_1 + 0x26d) = param_2;
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b44f10 FUN_143b44f10 body=54 status=ok
// SIG undefined FUN_143b44f10(void)

void FUN_143b44f10(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143b3c420(param_2,0x154);
  FUN_143b39dc0(param_1,uVar1);
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b44f50 FUN_143b44f50 body=54 status=ok
// SIG undefined FUN_143b44f50(void)

void FUN_143b44f50(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143b3c420(param_2,0x135);
  FUN_143b39e30(param_1,uVar1);
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b44f90 FUN_143b44f90 body=109 status=ok
// SIG undefined FUN_143b44f90(void)

void FUN_143b44f90(longlong param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_res10;
  
  local_res10 = param_2;
  if (param_2 < 1) {
    local_res10 = 1;
  }
  uVar1 = FUN_143b3c3f0(*(undefined4 *)(param_1 + 0x268),local_res10);
  *(int *)(param_1 + 0x264) = local_res10;
  *(undefined4 *)(param_1 + 0x268) = uVar1;
  *(undefined1 *)(param_1 + 0x260) = 1;
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b45000 FUN_143b45000 body=270 status=ok
// SIG undefined FUN_143b45000(void)

void FUN_143b45000(longlong param_1,int param_2)

{
  longlong lVar1;
  int local_res10;
  undefined8 local_38;
  
  local_res10 = param_2;
  if (param_2 == 0) {
    local_res10 = 1;
  }
  if (local_res10 == 1) {
    if (*(longlong *)(param_1 + 0x240) != 0) {
      FUN_143b3bab0(*(longlong *)(param_1 + 0x240),1);
    }
    *(undefined8 *)(param_1 + 0x240) = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x240) == 0) {
      lVar1 = FUN_143a8d310(0x80);
      if (lVar1 == 0) {
        local_38 = 0;
      }
      else {
        local_38 = FUN_143b74e90(lVar1);
      }
      *(undefined8 *)(param_1 + 0x240) = local_38;
    }
    if (*(longlong *)(param_1 + 0x240) != 0) {
      FUN_143b76630(*(undefined8 *)(param_1 + 0x240),local_res10);
    }
  }
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b45110 FUN_143b45110 body=140 status=ok
// SIG undefined FUN_143b45110(void)

void FUN_143b45110(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  FUN_143a8dcd0(param_1 + 0x1c8,param_2);
  puVar1 = *(undefined8 **)(param_1 + 0x228);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x228) = 0;
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b451a0 FUN_143b451a0 body=140 status=ok
// SIG undefined FUN_143b451a0(void)

void FUN_143b451a0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  FUN_143a8dcd0(param_1 + 0x1f0,param_2);
  puVar1 = *(undefined8 **)(param_1 + 0x230);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x230) = 0;
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b45230 FUN_143b45230 body=83 status=ok
// SIG undefined FUN_143b45230(void)

void FUN_143b45230(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_143a904f0(param_2);
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 0x284) = 0x20;
  }
  else {
    uVar2 = FUN_143a8e3e0(param_2,0);
    *(undefined4 *)(param_1 + 0x284) = uVar2;
  }
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b45290 FUN_143b45290 body=43 status=ok
// SIG undefined FUN_143b45290(void)

void FUN_143b45290(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28c) = param_2;
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b452c0 FUN_143b452c0 body=43 status=ok
// SIG undefined FUN_143b452c0(void)

void FUN_143b452c0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2e0) = param_2;
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b452f0 OnStopTargeting body=43 status=ok
// SIG undefined OnStopTargeting(void)

void APrimalDinoCharacter::OnStopTargeting(undefined8 param_1,undefined1 param_2)

{
  FUN_143b39ea0(param_1,param_2);
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b45320 FUN_143b45320 body=140 status=ok
// SIG undefined FUN_143b45320(void)

void FUN_143b45320(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  FUN_143a8dcd0(param_1 + 0x178,param_2);
  puVar1 = *(undefined8 **)(param_1 + 0x218);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x218) = 0;
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b453b0 FUN_143b453b0 body=140 status=ok
// SIG undefined FUN_143b453b0(void)

void FUN_143b453b0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  FUN_143a8dcd0(param_1 + 0x1a0,param_2);
  puVar1 = *(undefined8 **)(param_1 + 0x220);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x220) = 0;
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b45440 FUN_143b45440 body=272 status=ok
// SIG undefined FUN_143b45440(void)

void FUN_143b45440(longlong param_1,double param_2)

{
  longlong lVar1;
  undefined8 local_40;
  
  if (0.0 < param_2) {
    if (*(longlong *)(param_1 + 0x278) == 0) {
      lVar1 = FUN_143a8d310(0x80);
      if (lVar1 == 0) {
        local_40 = 0;
      }
      else {
        local_40 = FUN_143b74e90(lVar1);
      }
      *(undefined8 *)(param_1 + 0x278) = local_40;
    }
    if (*(longlong *)(param_1 + 0x278) != 0) {
      FUN_143b76670(*(undefined8 *)(param_1 + 0x278),param_2);
      return;
    }
  }
  if (*(longlong *)(param_1 + 0x278) != 0) {
    FUN_143b3bab0(*(longlong *)(param_1 + 0x278),1);
  }
  *(undefined8 *)(param_1 + 0x278) = 0;
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b45550 FUN_143b45550 body=43 status=ok
// SIG undefined FUN_143b45550(void)

void FUN_143b45550(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x280) = param_2;
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b45580 FUN_143b45580 body=44 status=ok
// SIG undefined FUN_143b45580(void)

void FUN_143b45580(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x26c) = param_2;
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b455b0 FUN_143b455b0 body=43 status=ok
// SIG undefined FUN_143b455b0(void)

void FUN_143b455b0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x250) = param_2;
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b455e0 FUN_143b455e0 body=44 status=ok
// SIG undefined FUN_143b455e0(void)

void FUN_143b455e0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x260) = param_2;
  FUN_143b42830(param_1);
  return;
}



// FUNCTION 143b45610 FUN_143b45610 body=28 status=ok
// SIG undefined FUN_143b45610(void)

void FUN_143b45610(longlong param_1)

{
  FUN_143b81a50(*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 143b45630 operator() body=37 status=ok
// SIG undefined operator()(void)

void <lambda_04c79fd4136733a528ca0b360569665b>::operator()(undefined8 *param_1,undefined8 param_2)

{
  FUN_143ab38b0(*param_1,param_2);
  return;
}



// FUNCTION 143b45660 FUN_143b45660 body=1680 status=ok
// SIG undefined FUN_143b45660(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b45660(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *_Str1;
  undefined1 auStack_588 [32];
  undefined4 *local_568;
  undefined1 local_560;
  int local_558 [2];
  undefined8 local_550;
  undefined4 local_548 [2];
  longlong local_540;
  undefined8 *local_538;
  undefined4 local_530 [2];
  undefined8 *local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined8 local_508;
  longlong local_500;
  longlong local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 *local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined1 local_448 [96];
  undefined1 local_3e8 [40];
  undefined1 local_3c0 [40];
  undefined1 local_398 [48];
  undefined1 local_368 [80];
  undefined1 local_318 [384];
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_458 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_588;
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    uVar3 = FUN_143b42d90(param_1,param_2);
    *(undefined8 *)(param_1 + 0x2c0) = uVar3;
    cVar1 = FUN_143a8b0e0(*param_2);
    if (cVar1 == '\0') {
      local_4d8 = FUN_143b42560(*(undefined8 *)(param_1 + 600),local_318);
      local_4b8 = local_4d8;
      local_538 = (undefined8 *)FUN_143b6f670(local_4d8,param_2);
      FUN_143a8acf0(local_318);
      cVar1 = FUN_143a8b0e0(*param_2);
      if (cVar1 == '\0') {
        FUN_143a8ac30(local_3c0);
        local_558[0] = 0;
        local_4c8 = FUN_143b42560(*(undefined8 *)(param_1 + 600),local_198);
        local_478 = local_4c8;
        uVar3 = FUN_143a8c200(local_4c8);
        local_550 = FUN_143aa5b10(0,uVar3,local_558);
        FUN_143a8acf0(local_198);
        local_520 = FUN_143aa3350(local_550,"NumberElements",0,local_558);
        uVar3 = FUN_143b6fdc0(local_538);
        local_550 = FUN_143aa3350(local_520,uVar3,local_550,local_558);
        local_550 = FUN_143aa3350(local_550,"patterns",local_550,local_558);
        local_548[0] = 0;
        local_510 = FUN_143aa4fe0(local_550,"currencyFormat",local_548,local_558);
        if (local_558[0] == 2) {
          _Str1 = (char *)FUN_143b6fdc0(local_538);
          iVar2 = _guard_xfg_dispatch_icall_nop(_Str1,"latn");
          if (iVar2 != 0) {
            local_558[0] = 0;
            local_550 = FUN_143aa3350(local_520,&DAT_145d0d060,local_550,local_558);
            local_550 = FUN_143aa3350(local_550,"patterns",local_550,local_558);
            local_510 = FUN_143aa4fe0(local_550,"currencyFormat",local_548,local_558);
          }
        }
        FUN_143aa2ef0(local_520);
        FUN_143aa2ef0(local_550);
        local_490 = local_538;
        local_528 = local_538;
        if (local_538 == (undefined8 *)0x0) {
          local_4e8 = 0;
        }
        else {
          local_4e8 = (**(code **)*local_538)(local_538,1);
        }
        cVar1 = FUN_143a8b110(local_558[0]);
        if (cVar1 != '\0') {
          local_4a8 = FUN_143a8db50(local_398,local_510,local_548[0]);
          local_568 = param_2;
          local_480 = local_4a8;
          FUN_143b3dfd0(param_1,local_4a8,0,local_368);
          FUN_143a8dc60(local_398);
          local_4f8 = FUN_143a8d310(0xa8);
          if (local_4f8 == 0) {
            local_508 = 0;
          }
          else {
            local_560 = 0;
            local_568 = *(undefined4 **)(param_1 + 0x220);
            local_508 = FUN_143b3a2c0(local_4f8,*(undefined8 *)(param_1 + 0x228),
                                      *(undefined8 *)(param_1 + 0x230),
                                      *(undefined8 *)(param_1 + 0x218));
          }
          local_470 = local_508;
          local_460 = local_508;
          local_498 = FUN_143a8d4f0(local_3e8,1,L"default",7);
          local_488 = local_498;
          FUN_143acdfd0(*(undefined8 *)(param_1 + 0x2c0),local_498,local_460,param_2);
          FUN_143a8dc60(local_3e8);
        }
        local_468 = *(undefined8 *)(*(longlong *)(param_1 + 0x2d8) + 8);
        local_540 = 0;
        local_530[0] = 0xffffffff;
        FUN_143acbd40(local_448);
        while (local_540 = <lambda_04c79fd4136733a528ca0b360569665b>::operator()
                                     (local_468,local_530), local_540 != 0) {
          local_518 = *(undefined8 *)(local_540 + 8);
          local_4d0 = *(undefined8 *)(local_540 + 0x10);
          local_4e0 = local_518;
          local_4a0 = local_4d0;
          iVar2 = <lambda_04c79fd4136733a528ca0b360569665b>::operator()(local_448,local_518);
          if (iVar2 != 1) {
            FUN_143b44240(local_448,local_518,1,param_2);
            local_568 = param_2;
            FUN_143b3dfd0(param_1,local_518,0,local_368);
            local_500 = FUN_143a8d310(0xa8);
            if (local_500 == 0) {
              local_4f0 = 0;
            }
            else {
              local_560 = 1;
              local_568 = *(undefined4 **)(param_1 + 0x220);
              local_4f0 = FUN_143b3a2c0(local_500,*(undefined8 *)(param_1 + 0x228),
                                        *(undefined8 *)(param_1 + 0x230),
                                        *(undefined8 *)(param_1 + 0x218));
            }
            local_4c0 = local_4f0;
            local_4b0 = local_4f0;
            FUN_143acdfd0(*(undefined8 *)(param_1 + 0x2c0),local_4a0,local_4f0,param_2);
          }
        }
        FUN_143acc070(local_448);
        FUN_143a8dc60(local_3c0);
      }
    }
  }
  return;
}



// FUNCTION 143b45cf0 FUN_143b45cf0 body=1438 status=ok
// SIG undefined FUN_143b45cf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b45cf0(longlong param_1,undefined8 param_2,char param_3,char param_4,undefined4 *param_5
                  )

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_178 [32];
  undefined4 *local_158;
  undefined4 *local_150;
  longlong local_148;
  longlong *local_140;
  longlong *local_138;
  longlong local_130;
  longlong *local_128;
  longlong *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [40];
  undefined4 local_68 [20];
  ulonglong local_18;
  
  local_98 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    if (param_3 != '\0') {
      if (*(longlong *)(param_1 + 0x2c8) != 0) {
        FUN_143b402a0(param_1,param_1 + 0x2c8);
      }
      uVar2 = FUN_143b42c80(param_1,param_5);
      *(undefined8 *)(param_1 + 0x2c8) = uVar2;
      cVar1 = FUN_143a8b110(*param_5);
      if (cVar1 != '\0') {
        local_158 = param_5;
        FUN_143b3dfd0(param_1,param_2,0,local_68);
        local_e0 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
                   ::GetBoundProgramCounterForTimerManager(*(undefined8 *)(param_1 + 0x2d8));
        local_120 = (longlong *)FUN_143b59ec0(local_e0,param_5);
        cVar1 = FUN_143a8b110(*param_5);
        if (cVar1 != '\0') {
          while (local_130 = (**(code **)(*local_120 + 0x30))(local_120,param_5), local_130 != 0) {
            cVar1 = FUN_143a8b110(*param_5);
            if (cVar1 != '\0') {
              FUN_143b41090(param_1,local_130);
              local_118 = FUN_143a8d310(0xa8);
              if (local_118 == 0) {
                local_108 = 0;
              }
              else {
                local_158 = (undefined4 *)(param_1 + 0x1a0);
                local_a8 = param_1 + 0x1c8;
                local_108 = FUN_143b3a3a0(local_118,local_a8,param_1 + 0x1f0,param_1 + 0x178);
              }
              local_f8 = local_108;
              local_b0 = local_108;
              FUN_143acdfd0(*(undefined8 *)(param_1 + 0x2c8),local_130,local_108);
            }
          }
        }
        local_d0 = local_120;
        local_128 = local_120;
        if (local_120 == (longlong *)0x0) {
          local_a0 = 0;
        }
        else {
          local_a0 = (**(code **)*local_120)(local_120,1);
        }
      }
    }
    cVar1 = FUN_143a8b0e0(*param_5);
    if ((cVar1 == '\0') && (param_4 != '\0')) {
      if (*(longlong *)(param_1 + 0x2d0) != 0) {
        FUN_143b402a0(param_1,param_1 + 0x2d0);
      }
      uVar2 = FUN_143b42c80(param_1,param_5);
      *(undefined8 *)(param_1 + 0x2d0) = uVar2;
      cVar1 = FUN_143a8b110(*param_5);
      if (cVar1 != '\0') {
        local_c0 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
                   ::GetBoundProgramCounterForTimerManager(*(undefined8 *)(param_1 + 0x2d8));
        local_140 = (longlong *)FUN_143b59ec0(local_c0,param_5);
        cVar1 = FUN_143a8b110(*param_5);
        if (cVar1 != '\0') {
          while (local_148 = (**(code **)(*local_140 + 0x30))(local_140,param_5), local_148 != 0) {
            cVar1 = FUN_143a8b110(*param_5);
            if (cVar1 != '\0') {
              FUN_143a8ac30(local_90);
              FUN_143b788e0(*(undefined8 *)(param_1 + 0x2d8),local_148,local_90);
              local_150 = param_5;
              local_158 = local_68;
              FUN_143b3df70(param_1,local_148,local_90,0);
              local_110 = FUN_143a8d310(0xa8);
              if (local_110 == 0) {
                local_100 = 0;
              }
              else {
                local_158 = (undefined4 *)(param_1 + 0x1a0);
                local_f0 = param_1 + 0x1c8;
                local_100 = FUN_143b3a3a0(local_110,local_f0,param_1 + 0x1f0,param_1 + 0x178);
              }
              local_e8 = local_100;
              local_d8 = local_100;
              FUN_143acdfd0(*(undefined8 *)(param_1 + 0x2d0),local_148,local_100);
              FUN_143a8dc60(local_90);
            }
          }
        }
        local_c8 = local_140;
        local_138 = local_140;
        if (local_140 != (longlong *)0x0) {
          (**(code **)*local_140)(local_140,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 143b46290 FUN_143b46290 body=107 status=ok
// SIG undefined FUN_143b46290(void)

int FUN_143b46290(undefined8 param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int local_res10;
  
  local_res10 = param_2;
  while ((iVar2 = FUN_143a904f0(param_1), local_res10 < iVar2 &&
         (((sVar1 = FUN_143a8e4f0(param_1,local_res10), sVar1 == 0x200e || (sVar1 == 0x200f)) ||
          (sVar1 == 0x61c))))) {
    local_res10 = local_res10 + 1;
  }
  return local_res10;
}



// FUNCTION 143b46300 FUN_143b46300 body=132 status=ok
// SIG undefined FUN_143b46300(void)

int FUN_143b46300(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int local_res18;
  int local_18;
  
  local_res18 = param_3;
  if (*(uint *)(param_1 + 0x284) < 0x10000) {
    local_18 = 1;
  }
  else {
    local_18 = 2;
  }
  while ((iVar1 = FUN_143a904f0(param_2), local_res18 < iVar1 &&
         (iVar1 = FUN_143a8e3e0(param_2,local_res18), iVar1 == *(int *)(param_1 + 0x284)))) {
    local_res18 = local_res18 + local_18;
  }
  return local_res18;
}



// FUNCTION 143b46390 FUN_143b46390 body=76 status=ok
// SIG undefined FUN_143b46390(void)

longlong FUN_143b46390(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_143a8fe10(param_1);
  iVar1 = FUN_143a904f0(param_1);
  lVar3 = FUN_143b28450(lVar2 + (longlong)param_2 * 2,iVar1 - param_2);
  return lVar3 - lVar2 >> 1;
}



// FUNCTION 143b463e0 FUN_143b463e0 body=120 status=ok
// SIG undefined FUN_143b463e0(void)

int FUN_143b463e0(undefined8 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int local_res10;
  int local_14;
  
  local_res10 = param_2;
  while( true ) {
    iVar2 = FUN_143a904f0(param_1);
    if (iVar2 <= local_res10) {
      return local_res10;
    }
    uVar3 = FUN_143a8e3e0(param_1,local_res10);
    cVar1 = FUN_143a9e2d0(uVar3);
    if (cVar1 == '\0') break;
    if (uVar3 < 0x10000) {
      local_14 = 1;
    }
    else {
      local_14 = 2;
    }
    local_res10 = local_res10 + local_14;
  }
  return local_res10;
}



// FUNCTION 143b46460 FUN_143b46460 body=150 status=ok
// SIG undefined FUN_143b46460(void)

int FUN_143b46460(undefined8 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int local_res10;
  int local_14;
  
  local_res10 = param_2;
  while( true ) {
    iVar2 = FUN_143a904f0(param_1);
    if (iVar2 <= local_res10) {
      return local_res10;
    }
    uVar3 = FUN_143a8e3e0(param_1,local_res10);
    cVar1 = FUN_143a9e2d0(uVar3);
    if ((((cVar1 == '\0') && (uVar3 != 0x200e)) && (uVar3 != 0x200f)) && (uVar3 != 0x61c)) break;
    if (uVar3 < 0x10000) {
      local_14 = 1;
    }
    else {
      local_14 = 2;
    }
    local_res10 = local_res10 + local_14;
  }
  return local_res10;
}



// FUNCTION 143b46500 FUN_143b46500 body=4379 status=ok
// SIG undefined FUN_143b46500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143b46500(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,char param_5,
             undefined4 *param_6)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined1 local_1d0;
  char local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  char local_1a8;
  undefined1 local_1a7;
  char local_1a6;
  undefined1 local_1a5;
  undefined4 local_1a4;
  int local_1a0;
  undefined4 local_19c;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  undefined4 local_174;
  int local_170;
  int local_16c;
  int local_168;
  uint local_164;
  undefined4 local_160;
  uint local_15c;
  undefined4 local_158;
  uint local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  undefined4 local_140;
  int local_13c;
  undefined4 local_138;
  int local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  undefined4 auStack_38 [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  ulonglong local_10;
  
  local_c0 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  uVar5 = FUN_143b41c90(param_1,4);
  auStack_38[0] = FUN_143a8e3e0(uVar5,0);
  uVar5 = FUN_143b41c90(param_1,0x12);
  auStack_38[1] = FUN_143a8e3e0(uVar5,0);
  uVar5 = FUN_143b41c90(param_1,0x13);
  auStack_38[2] = FUN_143a8e3e0(uVar5,0);
  uVar5 = FUN_143b41c90(param_1,0x14);
  auStack_38[3] = FUN_143a8e3e0(uVar5,0);
  uVar5 = FUN_143b41c90(param_1,0x15);
  uStack_28 = FUN_143a8e3e0(uVar5,0);
  uVar5 = FUN_143b41c90(param_1,0x16);
  uStack_24 = FUN_143a8e3e0(uVar5,0);
  uVar5 = FUN_143b41c90(param_1,0x17);
  uStack_20 = FUN_143a8e3e0(uVar5,0);
  uVar5 = FUN_143b41c90(param_1,0x18);
  uStack_1c = FUN_143a8e3e0(uVar5,0);
  uVar5 = FUN_143b41c90(param_1,0x19);
  uStack_18 = FUN_143a8e3e0(uVar5,0);
  uVar5 = FUN_143b41c90(param_1,0x1a);
  uStack_14 = FUN_143a8e3e0(uVar5,0);
  if (*(int *)(param_1 + 700) == 0) {
    local_110 = FUN_143b41c90(param_1,1);
  }
  else {
    local_110 = FUN_143b41c90(param_1,0x11);
  }
  if (*(int *)(param_1 + 700) == 0) {
    local_118 = FUN_143b41c90(param_1,0);
  }
  else {
    local_118 = FUN_143b41c90(param_1,10);
  }
  local_1c8 = FUN_143b3e500(param_1);
  local_1bc = FUN_143b382f0(param_1);
  local_1b0 = FUN_143b38330(param_1);
  local_108 = FUN_143b75c80(param_4);
  cVar1 = FUN_143b430a0(param_4);
  local_1a5 = cVar1 == '\0';
  local_1d0 = 1;
  local_1d8 = CONCAT31(local_1d8._1_3_,local_1a5);
  local_120 = FUN_143b3cce0(param_1,param_2,local_108,param_3);
  if (*(char *)(param_1 + 0x26c) != '\0') {
    local_1a4 = FUN_143a904f0(param_2);
    local_180 = -1;
    local_194 = -1;
    local_188 = 0;
    local_160 = local_1a4;
    if (local_1c8 == '\0') {
      local_188 = FUN_143b38310(param_1);
      if ((8 < local_1bc) && (local_1bc = 1, 1 < local_1b0)) {
        local_1bc = local_1b0;
      }
      if (local_1b0 < local_1bc) {
        local_1b0 = 1;
      }
    }
    else {
      local_1b0 = 1;
      local_1bc = 1;
      local_188 = FUN_143b425f0(param_1);
      local_188 = local_188 + -1;
    }
    FUN_143b763d0(param_4);
    local_1b4 = FUN_143b75b70(param_4);
    if ((local_1bc < 2) || (local_1bc == local_1b0)) {
      if ((local_1b0 < 1) && (local_188 < 1)) {
        local_170 = 1;
      }
      else {
        local_170 = local_1b0;
      }
      local_1b4 = local_1b4 - local_170;
    }
    else {
      if (local_1b4 < 1) {
        local_16c = local_1b4 / local_1bc + -1;
      }
      else {
        local_16c = (local_1b4 + -1) / local_1bc;
      }
      local_1b4 = local_16c * local_1bc;
    }
    local_168 = local_1b0 + local_188;
    cVar1 = FUN_143b76290(param_4);
    if (cVar1 == '\0') {
      local_150 = FUN_143b75b70(param_4);
      local_150 = local_150 - local_1b4;
    }
    else {
      local_150 = local_1b0;
    }
    local_184 = local_150;
    local_198 = FUN_143b75b00(param_4);
    if (local_198 < local_168) {
      local_198 = local_168;
    }
    if (local_198 < local_184) {
      local_198 = local_184;
    }
    for (local_1c4 = 0; local_1c4 < local_198; local_1c4 = local_1c4 + 1) {
      if (local_1c4 == local_184) {
        local_180 = FUN_143a904f0(param_2);
        (**(code **)(*param_3 + 8))(param_3,0,local_160,local_180);
        FUN_143a8e070(param_2,local_118);
        local_194 = FUN_143a904f0(param_2);
        local_d8 = *param_3;
        (**(code **)(local_d8 + 8))(param_3,2,local_194 + -1,local_194);
      }
      iVar3 = FUN_143b75b00(param_4);
      if (local_1c4 < iVar3) {
        bVar2 = FUN_143b75c40(param_4,local_1c4);
        local_158 = auStack_38[bVar2];
      }
      else {
        local_158 = auStack_38[0];
      }
      local_140 = local_158;
      FUN_143b3ba10(param_2);
    }
    local_1a4 = FUN_143a904f0(param_2);
    if (local_180 < 0) {
      (**(code **)(*param_3 + 8))(param_3,0,local_160,local_1a4);
    }
    if (0 < local_194) {
      (**(code **)(*param_3 + 8))(param_3,1,local_194,local_1a4);
    }
    uVar5 = FUN_143b41c90(param_1,0xb);
    FUN_143a8e070(param_2,uVar5);
    uVar4 = FUN_143a904f0(param_2);
    local_c8 = *param_3;
    (**(code **)(local_c8 + 8))(param_3,3,local_1a4,uVar4);
    local_1a4 = FUN_143a904f0(param_2);
    cVar1 = FUN_143b76290(param_4);
    if (cVar1 != '\0') {
      local_1b4 = 0;
    }
    if (local_1b4 < 0) {
      uVar5 = FUN_143b41c90(param_1,6);
      FUN_143a8e070(param_2,uVar5);
      uVar4 = FUN_143a904f0(param_2);
      local_e8 = *param_3;
      (**(code **)(local_e8 + 8))(param_3,4,local_1a4,uVar4);
    }
    else if (*(char *)(param_1 + 0x26e) != '\0') {
      uVar5 = FUN_143b41c90(param_1,7);
      FUN_143a8e070(param_2,uVar5);
      uVar4 = FUN_143a904f0(param_2);
      local_d0 = *param_3;
      (**(code **)(local_d0 + 8))(param_3,4,local_1a4,uVar4);
    }
    local_1a4 = FUN_143a904f0(param_2);
    FUN_143b74e90(local_b8);
    FUN_143b76630(local_b8,local_1b4);
    local_17c = (int)*(char *)(param_1 + 0x26d);
    if ((*(char *)(param_1 + 0x26c) != '\0') && (local_17c < 1)) {
      local_17c = 1;
    }
    for (local_1c4 = FUN_143b75b70(local_b8); local_1c4 < local_17c; local_1c4 = local_1c4 + 1) {
      FUN_143b3ba10(param_2,auStack_38[0]);
    }
    local_1c4 = 0;
    while (iVar3 = FUN_143b75b70(local_b8), local_1c4 < iVar3) {
      iVar3 = FUN_143b75b00(local_b8);
      if (local_1c4 < iVar3) {
        bVar2 = FUN_143b75c40(local_b8,local_1c4);
        local_174 = auStack_38[bVar2];
      }
      else {
        local_174 = auStack_38[0];
      }
      local_12c = local_174;
      FUN_143b3ba10(param_2,local_174);
      local_1c4 = local_1c4 + 1;
    }
    uVar4 = FUN_143a904f0(param_2);
    local_100 = *param_3;
    (**(code **)(local_100 + 8))(param_3,5,local_1a4,uVar4);
    Audio::FAudioCaptureSynth::IsStreamOpen(local_b8);
    goto LAB_143b47570;
  }
  local_19c = FUN_143a904f0(param_2);
  local_1c0 = 0;
  local_124 = local_19c;
  local_190 = FUN_143b425f0(param_1);
  local_18c = FUN_143b425b0(param_1);
  if (local_1c8 == '\0') {
    local_190 = 0;
    local_18c = 0x7fffffff;
    local_178 = local_1b0;
  }
  else {
    uVar4 = FUN_143b75b70(param_4);
    local_178 = FUN_143b3c3f0(1,uVar4);
  }
  local_1a0 = local_178;
  iVar3 = FUN_143b75b70(param_4);
  if ((0 < iVar3) && (iVar3 = FUN_143b75b70(param_4), local_1a0 < iVar3)) {
    local_1a0 = FUN_143b75b70(param_4);
  }
  local_1b8 = 0;
  if ((local_1bc < local_1a0) && (-1 < local_1bc)) {
    local_1a0 = local_1bc;
    local_1b8 = FUN_143b75b70(param_4);
    local_1b8 = local_1b8 - local_1a0;
    iVar3 = icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::contains(param_1 + 0x270,0x1000)
    ;
    if (iVar3 != 0) {
      *param_6 = 1;
    }
  }
  local_134 = FUN_143a904f0(param_2);
  local_1ac = local_1a0;
  while (local_1ac = local_1ac + -1, -1 < local_1ac) {
    iVar3 = FUN_143b75b70(param_4);
    if (((local_1ac < iVar3) && (iVar3 = FUN_143b75b00(param_4), local_1b8 < iVar3)) &&
       (local_1c0 < local_18c)) {
      local_13c = local_1b8;
      bVar2 = FUN_143b75c40(param_4,local_1b8);
      local_11c = auStack_38[bVar2];
      FUN_143b3ba10(param_2,local_11c);
      local_1b8 = local_1b8 + 1;
      local_1c0 = local_1c0 + 1;
    }
    else {
      FUN_143b3ba10(param_2,auStack_38[0]);
      if (0 < local_1c0) {
        local_1c0 = local_1c0 + 1;
      }
    }
    cVar1 = FUN_143b42f40(param_1);
    if (cVar1 != '\0') {
      local_19c = FUN_143a904f0(param_2);
      FUN_143a8e070(param_2,local_110);
      uVar4 = FUN_143a904f0(param_2);
      local_f8 = *param_3;
      (**(code **)(local_f8 + 8))(param_3,6,local_19c,uVar4);
    }
  }
  if ((local_1c0 == 0) && (iVar3 = FUN_143b75b00(param_4), iVar3 == 0)) {
    local_1c0 = 1;
  }
  if ((param_5 == '\0') && (iVar3 = FUN_143b75b00(param_4), local_1b8 < iVar3)) {
LAB_143b47238:
    local_1a6 = '\x01';
  }
  else {
    if (local_1c8 == '\0') {
      iVar3 = FUN_143b38310(param_1);
      local_15c = (uint)(0 < iVar3);
      local_154 = local_15c;
    }
    else {
      local_164 = (uint)(local_1c0 < local_190);
      local_154 = local_164;
    }
    if (local_154 != 0) goto LAB_143b47238;
    local_1a6 = '\0';
  }
  local_1a8 = local_1a6;
  if ((local_1a6 == '\0') && (iVar3 = FUN_143a904f0(param_2), iVar3 == local_134)) {
    FUN_143b3ba10(param_2,auStack_38[0]);
  }
  local_19c = FUN_143a904f0(param_2);
  (**(code **)(*param_3 + 8))(param_3,0,local_124,local_19c);
  if ((*(char *)(param_1 + 0x254) != '\0') || (local_1a8 != '\0')) {
    FUN_143a8e070(param_2,local_118);
    uVar4 = FUN_143a904f0(param_2);
    local_f0 = *param_3;
    (**(code **)(local_f0 + 8))(param_3,2,local_19c,uVar4);
    local_19c = FUN_143a904f0(param_2);
  }
  local_130 = local_19c;
  if (local_1c8 == '\0') {
    local_14c = FUN_143b382d0(param_1);
  }
  else {
    local_14c = 0x7fffffff;
  }
  local_1a0 = local_14c;
  if ((local_1c8 != '\0') &&
     ((local_1c0 == local_18c ||
      ((local_190 <= local_1c0 && (iVar3 = FUN_143b75b00(param_4), local_1b8 == iVar3)))))) {
    local_1a0 = 0;
  }
  local_1ac = 0;
  while ((local_1ac < local_1a0 &&
         (((local_1c8 != '\0' || (iVar3 = FUN_143b38310(param_1), local_1ac < iVar3)) ||
          ((param_5 == '\0' && (iVar3 = FUN_143b75b00(param_4), local_1b8 < iVar3))))))) {
    local_144 = -1 - local_1ac;
    iVar3 = FUN_143b75b70(param_4);
    if (iVar3 + -1 < local_144) {
      FUN_143b3ba10(param_2,auStack_38[0]);
    }
    else {
      if ((param_5 == '\0') && (iVar3 = FUN_143b75b00(param_4), local_1b8 < iVar3)) {
        local_148 = local_1b8;
        bVar2 = FUN_143b75c40(param_4,local_1b8);
        local_138 = auStack_38[bVar2];
        FUN_143b3ba10(param_2,local_138);
        local_1b8 = local_1b8 + 1;
      }
      else {
        FUN_143b3ba10(param_2,auStack_38[0]);
      }
      local_1c0 = local_1c0 + 1;
      if ((local_1c8 != '\0') &&
         ((local_1c0 == local_18c ||
          ((iVar3 = FUN_143b75b00(param_4), local_1b8 == iVar3 && (local_190 <= local_1c0))))))
      break;
    }
    local_1ac = local_1ac + 1;
  }
  uVar4 = FUN_143a904f0(param_2);
  local_e0 = *param_3;
  (**(code **)(local_e0 + 8))(param_3,1,local_130,uVar4);
LAB_143b47570:
  cVar1 = FUN_143b430a0(param_4);
  local_1a7 = cVar1 == '\0';
  local_1d0 = 0;
  local_1d8 = CONCAT31(local_1d8._1_3_,local_1a7);
  local_1d8 = FUN_143b3cce0(param_1,param_2,local_108,param_3);
  local_128 = local_1d8;
  FUN_143b3c8e0(param_1,param_2,param_3,local_120);
  return param_2;
}



// FUNCTION 143b47620 FUN_143b47620 body=5746 status=ok
// SIG undefined FUN_143b47620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143b478f8) */
/* WARNING: Removing unreachable block (ram,0x000143b47901) */

undefined1
FUN_143b47620(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
             longlong param_5,longlong param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 *param_11,undefined8 param_12)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 auStack_1f8 [32];
  uint local_1d8;
  longlong local_1d0;
  uint local_1c8;
  undefined1 local_1c0;
  undefined8 local_1b8;
  char local_1a8;
  int local_1a4;
  char local_1a0;
  char local_19f;
  int local_19c;
  char local_198;
  char local_197;
  char local_196;
  undefined4 local_194;
  int local_190;
  uint local_18c;
  undefined1 local_188;
  undefined1 local_187;
  char local_186;
  char local_185;
  undefined1 local_184;
  undefined1 local_183;
  undefined1 local_182;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  uint local_16c;
  int local_168;
  undefined1 local_164;
  undefined1 local_163;
  undefined1 local_162;
  undefined1 local_161;
  int local_160;
  undefined1 local_15c;
  undefined1 local_15b;
  undefined1 local_15a;
  undefined1 local_159;
  int local_158;
  int local_154;
  uint local_150;
  undefined8 local_148;
  int local_140;
  int local_13c;
  int local_138;
  uint local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  uint local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  uint local_10c;
  int local_108;
  undefined4 local_104;
  int local_100;
  uint local_fc;
  int local_f8;
  uint local_f4;
  int local_f0;
  uint local_ec;
  int local_e8;
  undefined4 local_e4;
  int local_e0;
  uint local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  int local_b8;
  undefined8 local_b0;
  int local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_80 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  local_194 = 0;
  FUN_143aa03f0(local_58);
  FUN_143b45610(param_10);
  local_1a4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(param_9);
  local_138 = local_1a4;
  local_13c = FUN_143a904f0(param_2);
  cVar1 = (**(code **)(*param_1 + 0xc0))(param_1);
  local_1a8 = cVar1 == '\0';
  local_183 = local_1a8;
  uVar6 = FUN_143b41c90(param_1,4);
  local_140 = FUN_143a8e3e0(uVar6,0);
  if (*(int *)((longlong)param_1 + 700) == 0) {
    local_104 = 1;
  }
  else {
    local_104 = 0x11;
  }
  local_98 = FUN_143b41c90(param_1,local_104);
  local_120 = FUN_143a8e3e0(local_98,0);
  local_124 = FUN_143a904f0(local_98);
  if (local_120 < 0x10000) {
    local_108 = 1;
  }
  else {
    local_108 = 2;
  }
  local_b8 = local_108;
  local_186 = FUN_143b38630(param_1);
  local_185 = '\0';
  local_88 = FUN_143b42ef0(param_1 + 0x5e);
  if (((((*(char *)(local_88 + 1) == '\x01') && (*(int *)((longlong)param_1 + 700) == 0)) &&
       (iVar3 = FUN_143a904f0(param_2), 0 < iVar3)) &&
      ((iVar3 = FUN_143a904f0(param_2), iVar3 < 0x20 &&
       ((param_5 == 0 || (cVar1 = FUN_143a903a0(param_5), cVar1 != '\0')))))) &&
     ((param_6 == 0 || (cVar1 = FUN_143a903a0(param_6), cVar1 != '\0')))) {
    local_180 = local_1a4;
    local_154 = FUN_143a904f0(param_2);
    local_158 = 0;
    local_16c = FUN_143a8e3e0(param_2,local_180);
    local_90 = FUN_143b41c90(param_1,0);
    local_150 = 0;
    local_198 = '\0';
    local_e4 = 0;
    local_dc = 0;
    local_110 = FUN_143a8eb50(local_90,0,3);
    cVar1 = FUN_143b43080(param_1);
    if (cVar1 == '\0') {
      if (local_110 == 1) {
        local_150 = FUN_143a8e3e0(local_90,0);
      }
      else if (local_110 == 0) {
        local_150 = 0;
      }
      else {
        local_180 = local_154 + 1;
      }
    }
    else {
      local_150 = 0;
      local_198 = '\x01';
    }
    if (local_16c == 0x2d) {
      local_180 = local_154 + 1;
    }
    else {
      FUN_143acfeb0(local_58,0x2b,&local_194);
    }
    while (local_180 < local_154) {
      local_130 = local_16c - local_140;
      if ((local_130 < 0) || (9 < local_130)) {
        if (local_16c == 0) {
          local_158 = -1;
          break;
        }
        if (local_16c == local_150) {
          FUN_143acfeb0(local_58,0x2e,&local_194);
          local_150 = 0;
        }
        else if ((local_16c != local_dc) &&
                (((local_198 == '\0' || (local_dc == 0)) ||
                 (cVar1 = FUN_143a9e680(local_16c), cVar1 != '\0')))) {
          local_158 = -1;
          break;
        }
      }
      else {
        FUN_143acfeb0(local_58,local_130 + 0x30U & 0xff,&local_194);
        if (((0 < local_158) || (local_130 != 0)) || (local_180 == local_154 + -1)) {
          local_158 = local_158 + 1;
        }
      }
      if (local_16c < 0x10000) {
        local_d4 = 1;
      }
      else {
        local_d4 = 2;
      }
      local_180 = local_180 + local_d4;
      local_16c = FUN_143a8e3e0(param_2,local_180);
    }
    if (((local_180 == local_154) || (local_198 != '\0')) && (0 < local_158)) {
      local_185 = '\x01';
      local_1a4 = local_180;
      FUN_143b0fce0(param_9,local_180);
      *param_11 = 0;
    }
    else {
      FUN_143ac35b0(local_58);
    }
  }
  if ((local_185 != '\0') || ((int)param_1[0x5c] == 1)) goto LAB_143b48b55;
  if ((0 < (int)param_1[0x51]) && (*(int *)((longlong)param_1 + 0x28c) == 0)) {
    local_1a4 = FUN_143b46300(param_1,param_2,local_1a4);
  }
  local_1b8 = param_12;
  local_1c0 = param_8;
  local_1c8._0_1_ = param_7;
  local_1d0 = param_5;
  local_1d8._0_1_ = 1;
  local_160 = FUN_143b3e680(param_1,param_2,local_1a4,0);
  local_1b8 = param_12;
  local_1c0 = param_8;
  local_1c8 = CONCAT31(local_1c8._1_3_,param_7);
  local_1d8 = CONCAT31(local_1d8._1_3_,1);
  local_1d0 = param_3;
  local_17c = FUN_143b3e680(param_1,param_2,local_1a4,1);
  if ((-1 < local_160) && (-1 < local_17c)) {
    if (local_17c < local_160) {
      local_17c = -1;
    }
    else if (local_160 < local_17c) {
      local_160 = -1;
    }
  }
  if (local_160 < 0) {
    if (local_17c < 0) {
      if (local_1a8 != '\0') {
        FUN_143b44cd0(param_9,local_1a4);
        local_15c = 0;
        TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
        ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
        return local_15c;
      }
      FUN_143acfeb0(local_58,0x2b,&local_194);
    }
    else {
      local_1a4 = local_1a4 + local_17c;
      FUN_143acfeb0(local_58,0x2d,&local_194);
    }
  }
  else {
    local_1a4 = local_1a4 + local_160;
    FUN_143acfeb0(local_58,0x2b,&local_194);
  }
  if ((0 < (int)param_1[0x51]) && (*(int *)((longlong)param_1 + 0x28c) == 1)) {
    local_1a4 = FUN_143b46300(param_1,param_2,local_1a4);
  }
  if (local_1a8 == '\0') {
    local_1a4 = FUN_143b463e0(param_2,local_1a4);
  }
  local_c8 = FUN_143b41c90(param_1,0xe);
  uVar4 = FUN_143a904f0(local_c8);
  cVar1 = FUN_143b3e5e0(param_2,local_1a4,uVar4,local_c8);
  if (cVar1 == '\0') {
    local_e0 = FUN_143a904f0(local_c8);
  }
  else {
    local_e0 = 0;
  }
  local_128 = local_e0;
  local_1a4 = local_1a4 + local_e0;
  local_187 = local_e0 != 0;
  *param_11 = local_187;
  if (local_e0 == 0) {
    local_19f = '\0';
    local_168 = -1;
    if ((int)param_1[0x4a] == 0) {
      local_100 = *(int *)((longlong)param_1 + 0x24c);
    }
    else {
      local_100 = (int)param_1[0x4a];
    }
    local_f8 = local_100;
    local_a8 = local_1a4;
    if (*(int *)((longlong)param_1 + 700) == 0) {
      local_c0 = FUN_143b41c90(param_1,0);
    }
    else {
      local_c0 = FUN_143b41c90(param_1,10);
    }
    local_134 = FUN_143a8e3e0(local_c0,0);
    local_11c = FUN_143a904f0(local_c0);
    if (local_134 < 0x10000) {
      local_e8 = 1;
    }
    else {
      local_e8 = 2;
    }
    local_d0 = local_e8;
    local_1a0 = '\0';
    local_fc = 0xffff;
    local_184 = 0;
    local_10c = 0xffff;
    local_197 = '\0';
    local_170 = -1;
    local_a0 = 0;
    local_b0 = 0;
    if (local_e8 == local_11c) {
      local_a0 = FUN_143b82ba0(local_134,local_1a8);
    }
    if (local_b8 == local_124) {
      if (local_1a8 == '\0') {
        local_b0 = *(undefined8 *)(param_1[0x5d] + 0x40);
      }
      else {
        local_b0 = *(undefined8 *)(param_1[0x5d] + 0x48);
      }
    }
    local_12c = 0;
    local_d8 = 0;
    while (local_1a4 < local_13c) {
      local_18c = FUN_143a8e3e0(param_2,local_1a4);
      local_19c = local_18c - local_140;
      if ((local_19c < 0) || (9 < local_19c)) {
        local_19c = FUN_143a9da10(local_18c);
      }
      if (((local_19c < 0) || (9 < local_19c)) && (iVar3 = FUN_143a9da10(local_140), iVar3 != 0)) {
        local_19c = 0;
        uVar6 = FUN_143b41c90(param_1,4);
        uVar5 = FUN_143a8e3e0(uVar6,0);
        if (uVar5 == local_18c) break;
        for (local_19c = 1; local_19c < 10; local_19c = local_19c + 1) {
          uVar6 = FUN_143b41c90(param_1,local_19c + 0x11);
          uVar5 = FUN_143a8e3e0(uVar6,0);
          if (uVar5 == local_18c) break;
        }
      }
      if ((local_19c < 0) || (9 < local_19c)) {
        if (local_124 < 1) {
LAB_143b483e0:
          local_1d8 = local_18c;
          cVar1 = FUN_143b43280(local_134,local_1a0,local_fc,local_a0);
          if (cVar1 == '\0') {
            iVar3 = icu_53::EnumSet<enum_UNumberFormatAttribute,4096,4098>::contains
                              (param_1 + 0x4e,0x1001);
            if ((iVar3 == 0) || (cVar1 = (**(code **)(*param_1 + 0x1c8))(param_1), cVar1 != '\0')) {
              local_148 = FUN_143b41c90(param_1,0xb);
              uVar4 = FUN_143a904f0(local_148);
              local_1d8 = 0;
              cVar1 = FUN_143b3e520(param_2,local_1a4,uVar4,local_148);
              if (cVar1 == '\0') {
                local_190 = FUN_143a904f0(local_148);
                local_190 = local_1a4 + local_190;
                local_182 = 0x2b;
                if (local_190 < local_13c) {
                  local_148 = FUN_143b41c90(param_1,7);
                  uVar4 = FUN_143a904f0(local_148);
                  cVar1 = FUN_143b3e5e0(param_2,local_190,uVar4,local_148);
                  if (cVar1 == '\0') {
                    iVar3 = FUN_143a904f0(local_148);
                    local_190 = local_190 + iVar3;
                  }
                  else {
                    local_148 = FUN_143b41c90(param_1,6);
                    uVar4 = FUN_143a904f0(local_148);
                    cVar1 = FUN_143b3e5e0(param_2,local_190,uVar4,local_148);
                    if (cVar1 == '\0') {
                      local_182 = 0x2d;
                      iVar3 = FUN_143a904f0(local_148);
                      local_190 = local_190 + iVar3;
                    }
                  }
                }
                local_196 = '\0';
                goto LAB_143b48656;
              }
            }
            break;
          }
          if ((local_1a8 != '\0') &&
             ((local_170 != -1 ||
              ((local_168 != -1 &&
               (local_1a4 - local_168 != *(int *)((longlong)param_1 + 0x24c) + 1)))))) {
            local_19f = '\x01';
            break;
          }
          cVar1 = FUN_143b43080(param_1);
          if ((cVar1 != '\0') || (local_1a0 != '\0')) break;
          FUN_143acfeb0(local_58,0x2e,&local_194);
          local_1a4 = local_1a4 + local_11c;
          local_1a0 = '\x01';
          local_fc = local_18c;
        }
        else {
          local_1c8 = local_18c;
          local_1d0 = local_a0;
          local_1d8 = local_134;
          cVar1 = FUN_143b43300(local_120,local_184,local_10c,local_b0);
          if ((cVar1 == '\0') || (local_186 == '\0')) goto LAB_143b483e0;
          if (local_1a0 != '\0') break;
          if ((local_1a8 != '\0') && ((local_197 == '\0' || (local_170 != -1)))) {
            local_19f = '\x01';
            break;
          }
          local_170 = local_1a4;
          local_1a4 = local_1a4 + local_124;
          local_184 = 1;
          local_10c = local_18c;
        }
      }
      else {
        if ((local_1a8 != '\0') && (local_170 != -1)) {
          if (((local_168 != -1) && ((local_170 - local_168) + -1 != local_f8)) ||
             ((local_168 == -1 && (local_f8 < (local_1a4 - local_a8) + -1)))) {
            local_19f = '\x01';
            break;
          }
          local_168 = local_170;
        }
        local_170 = -1;
        local_197 = '\x01';
        FUN_143acfeb0(local_58,local_19c + 0x30U & 0xff,&local_194);
        if ((((0 < local_19c) || (0 < local_12c)) || (local_1a0 != '\0')) &&
           (local_12c = local_12c + 1, local_1a0 == '\0')) {
          local_d8 = local_d8 + 1;
        }
        if (local_18c < 0x10000) {
          local_f0 = 1;
        }
        else {
          local_f0 = 2;
        }
        local_1a4 = local_1a4 + local_f0;
      }
    }
    goto LAB_143b48743;
  }
  FUN_143acfdd0(local_78,"Infinity");
  FUN_143aa0460(local_58,local_78,&local_194);
LAB_143b48849:
  if ((0 < (int)param_1[0x51]) && (*(int *)((longlong)param_1 + 0x28c) == 2)) {
    local_1a4 = FUN_143b46300(param_1,param_2,local_1a4);
  }
  local_174 = -1;
  local_178 = -1;
  if ((-1 < local_160) || ((local_1a8 == '\0' && (local_17c < 0)))) {
    local_1b8 = param_12;
    local_1c0 = param_8;
    local_1c8 = CONCAT31(local_1c8._1_3_,param_7);
    local_1d0 = param_6;
    local_1d8 = local_1d8 & 0xffffff00;
    local_174 = FUN_143b3e680(param_1,param_2,local_1a4,0);
  }
  if (-1 < local_17c) {
    local_1b8 = param_12;
    local_1c0 = param_8;
    local_1c8 = CONCAT31(local_1c8._1_3_,param_7);
    local_1d8 = local_1d8 & 0xffffff00;
    local_1d0 = param_4;
    local_178 = FUN_143b3e680(param_1,param_2,local_1a4,1);
  }
  if ((-1 < local_174) && (-1 < local_178)) {
    if (local_178 < local_174) {
      local_178 = -1;
    }
    else if (local_174 < local_178) {
      local_174 = -1;
    }
  }
  if (local_1a8 != '\0') {
    local_ec = (uint)(-1 < local_174);
    local_f4 = (uint)(-1 < local_178);
    if (local_ec == local_f4) {
      FUN_143b44cd0(param_9,local_1a4);
      local_162 = 0;
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
      return local_162;
    }
  }
  if (local_174 < 0) {
    if (local_178 < 0) {
      local_118 = 0;
    }
    else {
      local_118 = local_178;
    }
    local_114 = local_118;
  }
  else {
    local_114 = local_174;
  }
  local_1a4 = local_1a4 + local_114;
  if ((0 < (int)param_1[0x51]) && (*(int *)((longlong)param_1 + 0x28c) == 3)) {
    local_1a4 = FUN_143b46300(param_1,param_2,local_1a4);
  }
  FUN_143b0fce0(param_9,local_1a4);
  if ((local_174 < 0) && (((local_1a8 != '\0' || (-1 < local_17c)) || (-1 < local_178)))) {
    local_188 = 0x2d;
  }
  else {
    local_188 = 0x2b;
  }
  puVar7 = (undefined1 *)
           TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
           ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
  *puVar7 = local_188;
LAB_143b48b55:
  iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_9);
  if (iVar3 == local_138) {
    FUN_143b44cd0(param_9,local_1a4);
    local_15a = 0;
    TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
    ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
  }
  else if (((int)param_1[0x5c] == 1) &&
          (iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                   ::GetIndex(param_9), iVar3 != local_13c)) {
    FUN_143b44cd0(param_9,local_1a4);
    local_164 = 0;
    TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
    ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
    local_15a = local_164;
  }
  else {
    uVar6 = FUN_143b49c10(local_58,local_68);
    FUN_143b76520(param_10,uVar6,&local_194,0);
    cVar1 = FUN_143a8b0e0(local_194);
    if (cVar1 == '\0') {
      local_15b = 1;
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
      local_15a = local_15b;
    }
    else {
      FUN_143b44cd0(param_9,local_1a4);
      local_161 = 0;
      TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
      local_15a = local_161;
    }
  }
  return local_15a;
LAB_143b48656:
  if (local_13c <= local_190) goto LAB_143b48723;
  uVar2 = FUN_143a8e4f0(param_2,local_190);
  local_18c = (uint)uVar2;
  local_19c = local_18c - local_140;
  if ((local_19c < 0) || (9 < local_19c)) {
    local_19c = FUN_143a9da10(local_18c);
  }
  if ((local_19c < 0) || (9 < local_19c)) goto LAB_143b48723;
  if (local_196 == '\0') {
    FUN_143acfeb0(local_58,0x45,&local_194);
    FUN_143acfeb0(local_58,local_182,&local_194);
    local_196 = '\x01';
  }
  local_190 = local_190 + 1;
  FUN_143acfeb0(local_58,local_19c + 0x30U & 0xff,&local_194);
  goto LAB_143b48656;
LAB_143b48723:
  if (local_196 != '\0') {
    local_1a4 = local_190;
  }
LAB_143b48743:
  if (local_170 != -1) {
    local_1a4 = local_170;
  }
  if (((local_1a8 != '\0') && (local_1a0 == '\0')) &&
     ((local_168 != -1 && (local_1a4 - local_168 != *(int *)((longlong)param_1 + 0x24c) + 1)))) {
    local_19f = '\x01';
  }
  if (local_19f != '\0') {
    FUN_143b0fce0(param_9,local_138);
    FUN_143b44cd0(param_9,local_1a4);
    local_159 = 0;
    TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
    ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
    return local_159;
  }
  if ((local_197 == '\0') && (local_12c == 0)) {
    FUN_143b0fce0(param_9,local_138);
    FUN_143b44cd0(param_9,local_138);
    local_163 = 0;
    TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
    ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
    return local_163;
  }
  goto LAB_143b48849;
}



// FUNCTION 143b48ca0 GetInSameTeam body=37 status=ok
// SIG undefined GetInSameTeam(void)

void UDarwinGameplayFunctionLibrary::GetInSameTeam(undefined8 param_1,undefined8 param_2)

{
  FUN_143b48cd0(param_1,param_2,1);
  return;
}



// FUNCTION 143b48cd0 FUN_143b48cd0 body=3846 status=ok
// SIG undefined FUN_143b48cd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b48cd0(longlong param_1,undefined8 param_2,char param_3)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  int local_140;
  int local_138;
  char local_134;
  char local_133;
  int local_130;
  char local_12c;
  char local_12b;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
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
  undefined4 local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [40];
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_b8 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if (*(int *)(param_1 + 0x2b8) == 0xb) {
    FUN_143a8dcd0(param_2,param_1 + 0x290);
  }
  else {
    FUN_143a90910(param_2);
    local_f0 = 0x40;
    FUN_143a8ac30(local_60);
    FUN_143a8ac30(local_38);
    local_10c = 0;
    FUN_143a8ac30(local_88);
    if (*(int *)(param_1 + 0x288) < 1) {
      local_f8 = -1;
    }
    else {
      local_f8 = *(int *)(param_1 + 0x28c);
    }
    local_ec = local_f8;
    FUN_143a8ac30(local_b0);
    local_134 = FUN_143b3e500(param_1);
    if (param_3 == '\0') {
      FUN_143acc590(local_60,0x23);
      FUN_143acc590(local_38,0x2c);
      local_128 = 0x30;
    }
    else {
      uVar6 = FUN_143b41c90(param_1,5);
      FUN_143a8e070(local_60,uVar6);
      uVar6 = FUN_143b41c90(param_1,1);
      FUN_143a8e070(local_38,uVar6);
      uVar6 = FUN_143b41c90(param_1,4);
      local_128 = FUN_143a8e3e0(uVar6,0);
      if (local_134 != '\0') {
        uVar6 = FUN_143b41c90(param_1,0x10);
        local_f0 = FUN_143a8e3e0(uVar6,0);
      }
    }
    if (0 < *(int *)(param_1 + 0x288)) {
      if (param_3 == '\0') {
        FUN_143acc590(local_b0,0x2a);
      }
      else {
        uVar6 = FUN_143b41c90(param_1,0xd);
        FUN_143a8e070(local_b0,uVar6);
      }
      FUN_143a8e0c0(local_b0,*(undefined4 *)(param_1 + 0x284));
    }
    if (*(longlong *)(param_1 + 0x278) != 0) {
      local_138 = 0;
      while (iVar4 = FUN_143b75b00(*(undefined8 *)(param_1 + 0x278)), local_138 < iVar4) {
        bVar1 = FUN_143b75c40(*(undefined8 *)(param_1 + 0x278),local_138);
        FUN_143a8e0c0(local_88,local_128 + (uint)bVar1);
        local_138 = local_138 + 1;
      }
      local_10c = FUN_143b75b70(*(undefined8 *)(param_1 + 0x278));
    }
    for (local_124 = 0; local_124 < 2; local_124 = local_124 + 1) {
      if (local_ec == 0) {
        FUN_143a8e070(param_2,local_b0);
      }
      if (local_124 == 0) {
        local_d8 = param_1 + 0x178;
      }
      else {
        local_d8 = param_1 + 0x1c8;
      }
      local_c0 = local_d8;
      if (local_124 == 0) {
        local_d0 = *(undefined8 *)(param_1 + 0x218);
      }
      else {
        local_d0 = *(undefined8 *)(param_1 + 0x228);
      }
      local_148 = CONCAT31(local_148._1_3_,param_3);
      FUN_143b3d8b0(param_1,param_2,local_d0,local_d8);
      if ((local_ec == 1) && (cVar2 = FUN_143a903a0(local_b0), cVar2 == '\0')) {
        FUN_143a8e070(param_2,local_b0);
      }
      local_100 = FUN_143a904f0(param_2);
      cVar2 = FUN_143b38630(param_1);
      if (cVar2 == '\0') {
        local_f4 = 0;
      }
      else {
        local_f4 = FUN_143b3c3f0(0,*(undefined4 *)(param_1 + 0x24c));
      }
      local_118 = local_f4;
      if (((0 < local_f4) && (0 < *(int *)(param_1 + 0x250))) &&
         (*(int *)(param_1 + 0x250) != *(int *)(param_1 + 0x24c))) {
        local_118 = local_f4 + *(int *)(param_1 + 0x250);
      }
      local_130 = 0;
      local_110 = 0;
      local_114 = 0;
      if (local_134 == '\0') {
        local_110 = FUN_143b38330(param_1);
        local_130 = FUN_143b382f0(param_1);
      }
      else {
        local_110 = FUN_143b425f0(param_1);
        local_130 = FUN_143b425b0(param_1);
        local_114 = local_130;
      }
      if (*(char *)(param_1 + 0x26c) == '\0') {
        if (local_134 == '\0') {
          uVar5 = FUN_143b38330(param_1);
          uVar5 = FUN_143b3c3f0(local_118,uVar5);
          local_130 = FUN_143b3c3f0(uVar5,local_10c);
          local_130 = local_130 + 1;
        }
        else {
          local_130 = FUN_143b3c3f0(local_130,local_118 + 1);
        }
      }
      else if (8 < local_130) {
        local_130 = 1;
      }
      for (local_138 = local_130; 0 < local_138; local_138 = local_138 + -1) {
        if (((*(char *)(param_1 + 0x26c) == '\0') && (local_138 < local_130)) &&
           (cVar2 = FUN_143b42f40(param_1,local_138), cVar2 != '\0')) {
          FUN_143a8e070(param_2,local_38);
        }
        if (local_134 == '\0') {
          cVar2 = FUN_143a903a0(local_88);
          if (((cVar2 == '\0') && (local_104 = local_10c - local_138, -1 < local_104)) &&
             (iVar4 = FUN_143a904f0(local_88), local_104 < iVar4)) {
            FUN_143a8e3e0(local_88,local_104);
            FUN_143acc590(param_2);
          }
          else if (local_110 < local_138) {
            FUN_143a8e070(param_2);
          }
          else {
            FUN_143a8e0c0(param_2);
          }
        }
        else if ((local_114 < local_138) || (local_138 <= local_114 - local_110)) {
          FUN_143a8e070(param_2);
        }
        else {
          FUN_143a8e0c0(param_2);
        }
      }
      if (local_134 == '\0') {
        iVar4 = FUN_143b382d0(param_1);
        if ((0 < iVar4) || (*(char *)(param_1 + 0x254) != '\0')) {
          if (param_3 == '\0') {
            FUN_143acc590(param_2,0x2e);
          }
          else {
            uVar6 = FUN_143b41c90(param_1,0);
            FUN_143a8e070(param_2,uVar6);
          }
        }
        local_11c = local_10c;
        local_138 = 0;
        while (iVar4 = FUN_143b382d0(param_1), local_138 < iVar4) {
          cVar2 = FUN_143a903a0(local_88);
          if ((cVar2 == '\0') && (iVar4 = FUN_143a904f0(local_88), local_11c < iVar4)) {
            if (local_11c < 0) {
              FUN_143a8e0c0(param_2,local_128);
            }
            else {
              iVar4 = FUN_143a8e3e0(local_88,local_11c);
              FUN_143acc590(param_2,iVar4 + -0x30 + local_128 & 0xffff);
            }
            local_11c = local_11c + 1;
          }
          else {
            iVar4 = FUN_143b38310(param_1);
            if (local_138 < iVar4) {
              FUN_143a8e0c0(param_2,local_128);
            }
            else {
              FUN_143a8e070(param_2,local_60);
            }
          }
          local_138 = local_138 + 1;
        }
      }
      if (*(char *)(param_1 + 0x26c) != '\0') {
        if (param_3 == '\0') {
          FUN_143acc590(param_2,0x45);
        }
        else {
          uVar6 = FUN_143b41c90(param_1,0xb);
          FUN_143a8e070(param_2,uVar6);
        }
        if (*(char *)(param_1 + 0x26e) != '\0') {
          if (param_3 == '\0') {
            FUN_143acc590(param_2,0x2b);
          }
          else {
            uVar6 = FUN_143b41c90(param_1,7);
            FUN_143a8e070(param_2,uVar6);
          }
        }
        for (local_138 = 0; local_138 < *(char *)(param_1 + 0x26d); local_138 = local_138 + 1) {
          FUN_143a8e0c0(param_2,local_128);
        }
      }
      cVar2 = FUN_143a903a0(local_b0);
      if ((cVar2 == '\0') && (*(char *)(param_1 + 0x26c) == '\0')) {
        if (local_124 == 0) {
          local_e0 = FUN_143a904f0(param_1 + 0x178);
          local_e8 = FUN_143a904f0(param_1 + 0x1a0);
          local_e8 = local_e0 + local_e8;
        }
        else {
          local_e4 = FUN_143a904f0(param_1 + 0x1c8);
          local_e8 = FUN_143a904f0(param_1 + 0x1f0);
          local_e8 = local_e4 + local_e8;
        }
        iVar4 = FUN_143a904f0(param_2);
        local_120 = ((*(int *)(param_1 + 0x288) - iVar4) + local_100) - local_e8;
        while (0 < local_120) {
          FUN_143b42ea0(param_2,local_100,local_60);
          local_130 = local_130 + 1;
          local_120 = local_120 + -1;
          if ((1 < local_120) && (cVar2 = FUN_143b42f40(param_1,local_130), cVar2 != '\0')) {
            FUN_143b42ea0(param_2,local_100,local_38);
            local_120 = local_120 + -1;
          }
        }
      }
      if ((*(int *)(param_1 + 0x28c) == 2) && (cVar2 = FUN_143a903a0(local_b0), cVar2 == '\0')) {
        FUN_143a8e070(param_2,local_b0);
      }
      if (local_124 == 0) {
        local_148 = CONCAT31(local_148._1_3_,param_3);
        FUN_143b3d8b0(param_1,param_2,*(undefined8 *)(param_1 + 0x220),param_1 + 0x1a0);
        if ((*(int *)(param_1 + 0x28c) == 3) && (cVar2 = FUN_143a903a0(local_b0), cVar2 == '\0')) {
          FUN_143a8e070(param_2,local_b0);
        }
        local_133 = '\0';
        if (*(longlong *)(param_1 + 0x230) == *(longlong *)(param_1 + 0x220)) {
          cVar2 = FUN_143a8dd00(param_1 + 0x1f0,param_1 + 0x1a0);
          if (cVar2 == '\0') goto LAB_143b49847;
LAB_143b498a1:
          if ((*(longlong *)(param_1 + 0x228) != 0) && (*(longlong *)(param_1 + 0x218) != 0)) {
            local_108 = FUN_143a904f0(*(undefined8 *)(param_1 + 0x218));
            iVar4 = FUN_143a904f0(*(undefined8 *)(param_1 + 0x228));
            if (iVar4 == local_108 + 2) {
              sVar3 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x228),0);
              if (sVar3 != 0x27) goto LAB_143b49992;
              sVar3 = FUN_143a8e4f0(*(undefined8 *)(param_1 + 0x228),1);
              if (sVar3 != 0x2d) goto LAB_143b49992;
              local_140 = local_108;
              local_148 = 0;
              cVar2 = FUN_143b3e630(*(undefined8 *)(param_1 + 0x228),2,local_108,
                                    *(undefined8 *)(param_1 + 0x218));
              if (cVar2 != '\0') goto LAB_143b49992;
              local_12c = '\x01';
            }
            else {
LAB_143b49992:
              local_12c = '\0';
            }
            local_133 = local_12c;
          }
          if (((local_133 == '\0') && (*(longlong *)(param_1 + 0x228) == 0)) &&
             (*(longlong *)(param_1 + 0x218) == 0)) {
            local_fc = FUN_143a904f0(param_1 + 0x178);
            iVar4 = FUN_143a904f0(param_1 + 0x1c8);
            if (iVar4 == local_fc + 1) {
              uVar6 = FUN_143b41c90(param_1,6);
              cVar2 = FUN_143b0fd00(param_1 + 0x1c8,uVar6);
              if (cVar2 != '\0') goto LAB_143b49a90;
              local_140 = local_fc;
              local_148 = 0;
              cVar2 = FUN_143b3e630(param_1 + 0x1c8,1,local_fc,param_1 + 0x178);
              if (cVar2 != '\0') goto LAB_143b49a90;
              local_12b = '\x01';
            }
            else {
LAB_143b49a90:
              local_12b = '\0';
            }
            local_133 = local_12b;
          }
        }
        else {
LAB_143b49847:
          if ((*(longlong *)(param_1 + 0x230) != 0) && (*(longlong *)(param_1 + 0x220) != 0)) {
            cVar2 = FUN_143a8dd00(*(undefined8 *)(param_1 + 0x230),*(undefined8 *)(param_1 + 0x220))
            ;
            if (cVar2 != '\0') goto LAB_143b498a1;
          }
        }
        if (local_133 != '\0') break;
        if (param_3 == '\0') {
          FUN_143acc590(param_2,0x3b);
        }
        else {
          uVar6 = FUN_143b41c90(param_1,2);
          FUN_143a8e070(param_2,uVar6);
        }
      }
      else {
        local_148 = CONCAT31(local_148._1_3_,param_3);
        FUN_143b3d8b0(param_1,param_2,*(undefined8 *)(param_1 + 0x230),param_1 + 0x1f0);
        if ((*(int *)(param_1 + 0x28c) == 3) && (cVar2 = FUN_143a903a0(local_b0), cVar2 == '\0')) {
          FUN_143a8e070(param_2,local_b0);
        }
      }
    }
    local_c8 = param_2;
    FUN_143a8dc60(local_b0);
    FUN_143a8dc60(local_88);
    FUN_143a8dc60(local_38);
    FUN_143a8dc60(local_60);
    param_2 = local_c8;
  }
  return param_2;
}



// FUNCTION 143b49be0 FUN_143b49be0 body=37 status=ok
// SIG undefined FUN_143b49be0(void)

void FUN_143b49be0(undefined8 param_1,undefined8 param_2)

{
  FUN_143b48cd0(param_1,param_2,0);
  return;
}



// FUNCTION 143b49c10 FUN_143b49c10 body=59 status=ok
// SIG undefined FUN_143b49c10(void)

undefined8 FUN_143b49c10(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143a8b510(param_1);
  FUN_143a94320(param_2,uVar1,*(undefined4 *)(param_1 + 0x38));
  return param_2;
}



// FUNCTION 143b49c50 FUN_143b49c50 body=296 status=ok
// SIG undefined FUN_143b49c50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b49c50(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_98 [32];
  short local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined8 local_68;
  short local_58 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_6c = FUN_143a904f0(param_1);
  local_74 = 0;
  local_70 = 0;
  do {
    if (local_6c <= local_70) {
LAB_143b49d12:
      if (local_74 < 1) {
        local_68 = FUN_143a8dcd0(param_2,param_1);
      }
      else {
        local_68 = FUN_143ab21b0(param_2,local_58,local_74);
      }
      return local_68;
    }
    local_78 = FUN_143a8e4f0(param_1,local_70);
    if (((local_78 != 0x200e) && (local_78 != 0x200f)) && (local_78 != 0x61c)) {
      if (0x1f < local_74) {
        local_74 = 0;
        goto LAB_143b49d12;
      }
      local_58[local_74] = local_78;
      local_74 = local_74 + 1;
    }
    local_70 = local_70 + 1;
  } while( true );
}



// FUNCTION 143b49d80 FUN_143b49d80 body=212 status=ok
// SIG undefined FUN_143b49d80(void)

undefined1 FUN_143b49d80(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_143a8dd00(param_1,param_2);
  if ((((cVar1 != '\0') && (cVar1 = FUN_143a8dd00(param_1 + 0x28,param_2 + 0x28), cVar1 != '\0')) &&
      (cVar1 = FUN_143a8dd00(param_1 + 0x50,param_2 + 0x50), cVar1 != '\0')) &&
     ((cVar1 = FUN_143a8dd00(param_1 + 0x78,param_2 + 0x78), cVar1 != '\0' &&
      (*(char *)(param_1 + 0xa0) == *(char *)(param_2 + 0xa0))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 143b49e60 FUN_143b49e60 body=180 status=ok
// SIG undefined FUN_143b49e60(void)

undefined1 FUN_143b49e60(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_143a8dd00(param_1,param_2);
  if ((((cVar1 != '\0') && (cVar1 = FUN_143a8dd00(param_1 + 0x28,param_2 + 0x28), cVar1 != '\0')) &&
      (cVar1 = FUN_143a8dd00(param_1 + 0x50,param_2 + 0x50), cVar1 != '\0')) &&
     (cVar1 = FUN_143a8dd00(param_1 + 0x78,param_2 + 0x78), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 143b49f20 FUN_143b49f20 body=141 status=ok
// SIG undefined FUN_143b49f20(void)

undefined8 * FUN_143b49f20(undefined8 *param_1,undefined8 param_2,undefined4 param_3,char param_4)

{
  undefined8 local_18;
  
  FUN_143ab1cf0(param_1);
  *param_1 = icu_53::TZEnumeration::vftable;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0xc] = param_2;
  local_18 = param_2;
  if (param_4 == '\0') {
    local_18 = 0;
  }
  param_1[0xd] = local_18;
  *(undefined4 *)(param_1 + 0xe) = param_3;
  return param_1;
}



// FUNCTION 143b49fb0 FUN_143b49fb0 body=350 status=ok
// SIG undefined FUN_143b49fb0(void)

undefined8 * FUN_143b49fb0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_143ab1cf0(param_1);
  *param_1 = icu_53::TZEnumeration::vftable;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  if (*(longlong *)(param_2 + 0x68) == 0) {
    param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
    param_1[0xd] = 0;
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x70);
    *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  }
  else {
    uVar1 = FUN_143aa7a40((longlong)*(int *)(param_2 + 0x70) << 2);
    param_1[0xd] = uVar1;
    if (param_1[0xd] == 0) {
      *(undefined4 *)(param_1 + 0xe) = 0;
      *(undefined4 *)((longlong)param_1 + 0x74) = 0;
      param_1[0xc] = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x70);
      _guard_xfg_dispatch_icall_nop
                ((void *)param_1[0xd],*(void **)(param_2 + 0x68),
                 (longlong)*(int *)(param_1 + 0xe) << 2);
      *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
      param_1[0xc] = param_1[0xd];
    }
  }
  return param_1;
}



// FUNCTION 143b4a110 FUN_143b4a110 body=91 status=ok
// SIG undefined FUN_143b4a110(void)

undefined8 *
FUN_143b4a110(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143a8abc0(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::TimeZone::vftable;
  FUN_143a8d3a0(param_1 + 1,param_2 + 8);
  return param_1;
}



// FUNCTION 143b4a170 FUN_143b4a170 body=98 status=ok
// SIG undefined FUN_143b4a170(void)

undefined8 *
FUN_143b4a170(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar2 = param_1;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined8 *)((longlong)puVar2 + 1);
  }
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::TimeZone::vftable;
  FUN_143a8d3a0(param_1 + 1,param_2,param_3,param_4,uVar3);
  return param_1;
}



// FUNCTION 143b4a1e0 FUN_143b4a1e0 body=65 status=ok
// SIG undefined FUN_143b4a1e0(void)

void FUN_143b4a1e0(undefined8 *param_1)

{
  *param_1 = icu_53::TZEnumeration::vftable;
  if (param_1[0xd] != 0) {
    FUN_143aa79f0(param_1[0xd]);
  }
  FUN_143ab1d60(param_1);
  return;
}



// FUNCTION 143b4a230 FUN_143b4a230 body=56 status=ok
// SIG undefined FUN_143b4a230(void)

void FUN_143b4a230(undefined8 *param_1)

{
  *param_1 = icu_53::TimeZone::vftable;
  FUN_143a8dc60(param_1 + 1);
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143b4a270 FUN_143b4a270 body=62 status=ok
// SIG undefined FUN_143b4a270(void)

longlong FUN_143b4a270(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_143a8dcd0(param_1 + 8,param_2 + 8);
  }
  return param_1;
}



// FUNCTION 143b4a2b0 FUN_143b4a2b0 body=117 status=ok
// SIG undefined FUN_143b4a2b0(void)

undefined1 FUN_143b4a2b0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = _guard_xfg_dispatch_icall_nop(param_2);
  uVar3 = _guard_xfg_dispatch_icall_nop(param_1);
  cVar1 = FUN_143ab1e10(uVar3,uVar2);
  if ((cVar1 != '\0') && (cVar1 = FUN_143a8dd00(param_1 + 8,param_2 + 8), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 143b4a330 FUN_143b4a330 body=54 status=ok
// SIG undefined FUN_143b4a330(void)

undefined8 FUN_143b4a330(undefined8 param_1,uint param_2)

{
  FUN_143b4a1e0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b4a370 FUN_143b4a370 body=54 status=ok
// SIG undefined FUN_143b4a370(void)

undefined8 FUN_143b4a370(undefined8 param_1,uint param_2)

{
  FUN_143b4a230(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b4a3b0 FUN_143b4a3b0 body=127 status=ok
// SIG undefined FUN_143b4a3b0(void)

void FUN_143b4a3b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_146bc7e98;
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = param_1;
    if (DAT_146bc7e98 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*DAT_146bc7e98;
      DAT_146bc7e98 = param_1;
      (*(code *)*puVar1)(puVar2,1);
      puVar1 = DAT_146bc7e98;
    }
    DAT_146bc7e98 = puVar1;
    FUN_143b68380(0xe,FUN_143b4d5f0);
  }
  return;
}



// FUNCTION 143b4a430 CreateInternalContext body=92 status=ok
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
  
  lVar1 = FUN_143a8d310(0x78);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b49fb0(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143b4a490 FUN_143b4a490 body=64 status=ok
// SIG undefined FUN_143b4a490(void)

undefined4 FUN_143b4a490(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 local_18;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    local_18 = *(undefined4 *)(param_1 + 0x70);
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143b4a4d0 FUN_143b4a4d0 body=227 status=ok
// SIG undefined FUN_143b4a4d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_143b4a4d0(undefined8 param_1)

{
  char cVar1;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined1 local_198 [192];
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_1a4 = 0;
  local_1a8 = 0;
  FUN_143aa5540(local_d8);
  local_1a0 = FUN_143b4c9e0(param_1,local_d8,&local_1a8);
  cVar1 = FUN_143a8b110(local_1a8);
  if (cVar1 != '\0') {
    FUN_143aa5540(local_198);
    FUN_143aa37c0(local_d8,"links",local_198,&local_1a8);
    FUN_143aa4640(local_198,&local_1a4,&local_1a8);
    FUN_143aa2ef0(local_198);
  }
  FUN_143aa2ef0(local_d8);
  FUN_143aa2ef0(local_1a0);
  return local_1a4;
}



// FUNCTION 143b4a5c0 FUN_143b4a5c0 body=1282 status=ok
// SIG undefined FUN_143b4a5c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143b4a5c0(undefined4 param_1,longlong param_2,int *param_3,undefined4 *param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  int local_b8 [2];
  longlong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined1 local_98 [4];
  int local_94;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  cVar2 = FUN_143a8b0e0(*param_4);
  if (cVar2 == '\0') {
    local_80 = FUN_143b4ba50(param_1,local_b8,param_4);
    cVar2 = FUN_143a8b0e0(*param_4);
    if (cVar2 == '\0') {
      local_d8 = 0;
      local_d0 = 0;
      if ((param_2 != 0) || (param_3 != (int *)0x0)) {
        local_cc = 8;
        local_d8 = FUN_143aa7a40(0x20);
        if (local_d8 == 0) {
          *param_4 = 7;
          return 0;
        }
        local_c0 = FUN_143aa56e0(0,"zoneinfo64",param_4);
        local_c0 = FUN_143aa37c0(local_c0,"Names",local_c0,param_4);
        for (local_c8 = 0; local_c8 < local_b8[0]; local_c8 = local_c8 + 1) {
          local_c4 = *(undefined4 *)(local_80 + (longlong)local_c8 * 4);
          FUN_143b4d580(local_38,local_c0,local_c4,param_4);
          cVar2 = FUN_143a8b0e0(*param_4);
          if (cVar2 != '\0') {
            FUN_143a8dc60(local_38);
            break;
          }
          if (param_2 == 0) {
LAB_143b4a7ea:
            if (param_3 != (int *)0x0) {
              local_a0 = (longlong *)FUN_143b4acc0(local_38,param_4);
              cVar2 = FUN_143a8b0e0(*param_4);
              if (cVar2 != '\0') {
                FUN_143a8dc60(local_38);
                break;
              }
              local_94 = (**(code **)(*local_a0 + 0x38))(local_a0);
              local_60 = local_a0;
              local_a8 = local_a0;
              if (local_a0 == (longlong *)0x0) {
                local_50 = 0;
              }
              else {
                local_50 = (**(code **)*local_a0)(local_a0,1);
              }
              if (local_94 != *param_3) {
                FUN_143a8dc60(local_38);
                goto LAB_143b4a6fe;
              }
            }
            lVar1 = local_d8;
            if (local_cc <= local_d0) {
              local_cc = local_cc + 8;
              local_78 = FUN_143aa7aa0(local_d8,(longlong)local_cc << 2);
              lVar1 = local_78;
              if (local_78 == 0) {
                *param_4 = 7;
                FUN_143a8dc60(local_38);
                break;
              }
            }
            local_d8 = lVar1;
            *(undefined4 *)(local_d8 + (longlong)local_d0 * 4) = local_c4;
            local_d0 = local_d0 + 1;
            FUN_143a8dc60(local_38);
          }
          else {
            FUN_143b4bd90(local_38,local_98,4,param_4);
            cVar2 = FUN_143a8b0e0(*param_4);
            if (cVar2 != '\0') {
              FUN_143a8dc60(local_38);
              break;
            }
            iVar3 = FUN_143ab83b0(local_98,param_2);
            if (iVar3 == 0) goto LAB_143b4a7ea;
            FUN_143a8dc60(local_38);
          }
LAB_143b4a6fe:
        }
        cVar2 = FUN_143a8b0e0(*param_4);
        if (cVar2 != '\0') {
          FUN_143aa79f0(local_d8);
          local_d8 = 0;
        }
        FUN_143aa2ef0(local_c0);
      }
      local_b0 = 0;
      cVar2 = FUN_143a8b110(*param_4);
      if (cVar2 != '\0') {
        if (local_d8 == 0) {
          local_70 = FUN_143a8d310(0x78);
          if (local_70 == 0) {
            local_88 = 0;
          }
          else {
            local_88 = FUN_143b49f20(local_70,local_80,local_b8[0],0);
          }
          local_48 = local_88;
          local_b0 = local_88;
        }
        else {
          local_90 = FUN_143a8d310(0x78);
          if (local_90 == 0) {
            local_68 = 0;
          }
          else {
            local_68 = FUN_143b49f20(local_90,local_d8,local_d0,1);
          }
          local_58 = local_68;
          local_b0 = local_68;
          local_d8 = 0;
        }
        if (local_b0 == 0) {
          *param_4 = 7;
        }
      }
      if (local_d8 != 0) {
        FUN_143aa79f0(local_d8);
      }
    }
    else {
      local_b0 = 0;
    }
  }
  else {
    local_b0 = 0;
  }
  return local_b0;
}



// FUNCTION 143b4aad0 FUN_143b4aad0 body=308 status=ok
// SIG undefined FUN_143b4aad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b4aad0(undefined8 param_1)

{
  char cVar1;
  undefined1 auStack_a8 [32];
  int *local_88;
  undefined1 local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = &local_70;
  cVar1 = FUN_143b4ca90(param_1,&local_68,&local_6c,&local_74);
  if (cVar1 == '\0') {
    local_48 = 0;
  }
  else {
    FUN_143a8ac30(local_38);
    local_78 = local_68 < 0;
    local_88 = (int *)local_38;
    FUN_143b4b2f0(local_6c,local_74,local_70,local_78);
    local_64 = local_68 * ((local_6c * 0x3c + local_74) * 0x3c + local_70) * 1000;
    local_60 = FUN_143a8d310(0x88);
    if (local_60 == 0) {
      local_58 = 0;
    }
    else {
      local_58 = FUN_143b85140(local_60,local_64,local_38);
    }
    local_50 = local_58;
    local_48 = local_58;
    FUN_143a8dc60(local_38);
  }
  return local_48;
}



// FUNCTION 143b4ac10 FUN_143b4ac10 body=79 status=ok
// SIG undefined FUN_143b4ac10(void)

undefined8 FUN_143b4ac10(void)

{
  undefined8 local_18;
  
  FUN_143a9aa60(&DAT_146bc7ea0,FUN_143b4c140);
  if (DAT_146bc7e98 == (longlong *)0x0) {
    local_18 = 0;
  }
  else {
    local_18 = (**(code **)(*DAT_146bc7e98 + 0x58))(DAT_146bc7e98);
  }
  return local_18;
}



// FUNCTION 143b4ac60 FUN_143b4ac60 body=34 status=ok
// SIG undefined FUN_143b4ac60(void)

void FUN_143b4ac60(void)

{
  undefined4 local_18 [6];
  
  local_18[0] = 0;
  FUN_143b4a5c0(0,0,0,local_18);
  return;
}



// FUNCTION 143b4ac90 FUN_143b4ac90 body=37 status=ok
// SIG undefined FUN_143b4ac90(void)

void FUN_143b4ac90(undefined8 param_1)

{
  undefined4 local_18 [6];
  
  local_18[0] = 0;
  FUN_143b4acc0(param_1,local_18);
  return;
}



// FUNCTION 143b4acc0 FUN_143b4acc0 body=401 status=ok
// SIG undefined FUN_143b4acc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143b4acc0(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined8 *local_110;
  longlong local_108;
  undefined8 *local_100;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_e8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    local_128 = (undefined8 *)0x0;
    FUN_143aa5540(local_d8);
    local_118 = FUN_143b4c9e0(param_1,local_d8,param_2);
    cVar1 = FUN_143a8b110(*param_2);
    if (cVar1 != '\0') {
      local_108 = FUN_143a8d310(200);
      if (local_108 == 0) {
        local_110 = (undefined8 *)0x0;
      }
      else {
        local_138 = param_2;
        local_110 = (undefined8 *)FUN_143b92540(local_108,local_118,local_d8,param_1);
      }
      local_f0 = local_110;
      local_128 = local_110;
    }
    FUN_143aa2ef0(local_d8);
    FUN_143aa2ef0(local_118);
    cVar1 = FUN_143a8b0e0(*param_2);
    if (cVar1 != '\0') {
      local_100 = local_128;
      local_120 = local_128;
      if (local_128 != (undefined8 *)0x0) {
        (**(code **)*local_128)(local_128,1);
      }
      local_128 = (undefined8 *)0x0;
    }
  }
  else {
    local_128 = (undefined8 *)0x0;
  }
  return local_128;
}



// FUNCTION 143b4ae60 FUN_143b4ae60 body=96 status=ok
// SIG undefined FUN_143b4ae60(void)

longlong FUN_143b4ae60(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 local_18;
  
  local_18 = FUN_143b4ac90(param_1);
  if (local_18 == 0) {
    local_18 = FUN_143b4aad0(param_1);
  }
  if (local_18 == 0) {
    plVar1 = (longlong *)
             `FGenericPlatformMisc::GetPlatformChunkInstall'::`2'::
             _dynamic_atexit_destructor_for__Singleton__();
    local_18 = (**(code **)(*plVar1 + 0x58))(plVar1);
  }
  return local_18;
}



// FUNCTION 143b4aec0 FUN_143b4aec0 body=52 status=ok
// SIG undefined FUN_143b4aec0(void)

void FUN_143b4aec0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143b4a5c0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143b4af00 FUN_143b4af00 body=76 status=ok
// SIG undefined FUN_143b4af00(void)

void FUN_143b4af00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 local_18 [24];
  
  FUN_143b91ab0(param_1,param_2,param_3,param_4,param_5,local_18);
  return;
}



// FUNCTION 143b4af50 FUN_143b4af50 body=315 status=ok
// SIG undefined FUN_143b4af50(void)

undefined8 FUN_143b4af50(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_38 = 0;
  local_28 = FUN_143aa56e0(0,"zoneinfo64",&local_38);
  local_20 = FUN_143aa37c0(local_28,"Names",0,&local_38);
  local_34 = FUN_143b4b150(local_20,param_1,&local_38);
  local_18 = FUN_143aa4da0(local_20,local_34,0,&local_38);
  FUN_143aa37c0(local_28,"Zones",local_28,&local_38);
  FUN_143aa30d0(local_28,local_34,local_28,&local_38);
  cVar1 = FUN_143a8b110(local_38);
  if (cVar1 != '\0') {
    iVar2 = FUN_143aa54c0(local_28);
    if (iVar2 == 7) {
      local_30 = FUN_143aa46d0(local_28,&local_38);
      local_10 = FUN_143aa4da0(local_20,local_30,0,&local_38);
      cVar1 = FUN_143a8b110(local_38);
      if (cVar1 != '\0') {
        local_18 = local_10;
      }
    }
  }
  FUN_143aa2ef0(local_20);
  FUN_143aa2ef0(local_28);
  return local_18;
}



// FUNCTION 143b4b090 FUN_143b4b090 body=186 status=ok
// SIG undefined FUN_143b4b090(void)

undefined8 FUN_143b4b090(undefined8 param_1)

{
  char cVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_28 = 0;
  local_10 = FUN_143aa56e0(0,"zoneinfo64",&local_28);
  local_20 = FUN_143aa37c0(local_10,"Names",0,&local_28);
  local_24 = FUN_143b4b150(local_20,param_1,&local_28);
  local_18 = FUN_143aa4da0(local_20,local_24,0,&local_28);
  cVar1 = FUN_143a8b0e0(local_28);
  if (cVar1 != '\0') {
    local_18 = 0;
  }
  FUN_143aa2ef0(local_20);
  FUN_143aa2ef0(local_10);
  return local_18;
}



// FUNCTION 143b4b150 FUN_143b4b150 body=406 status=ok
// SIG undefined FUN_143b4b150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143b4b150(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 auStack_98 [32];
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FUN_143a8ac30(local_40);
  local_68 = 0;
  local_74 = FUN_143aa4d80(param_1);
  local_70 = 0x7fffffff;
  cVar1 = FUN_143a8b0e0(*param_3);
  if ((cVar1 == '\0') && (0 < local_74)) {
    while (local_78 = (local_68 + local_74) / 2, local_70 != local_78) {
      local_70 = local_78;
      local_50 = FUN_143aa4da0(param_1,local_78,local_58,param_3);
      cVar1 = FUN_143a8b0e0(*param_3);
      if (cVar1 != '\0') break;
      FUN_143a90d80(local_40,1,local_50,local_58[0]);
      cVar1 = FUN_143b0fd00(param_2,local_40);
      local_6c = (int)cVar1;
      if (local_6c == 0) {
        local_5c = local_78;
        FUN_143a8dc60(local_40);
        return local_5c;
      }
      if (local_6c < 0) {
        local_74 = local_78;
      }
      else {
        local_68 = local_78;
      }
    }
    local_60 = -1;
    FUN_143a8dc60(local_40);
    local_64 = local_60;
  }
  else {
    local_64 = -1;
    FUN_143a8dc60(local_40);
  }
  return local_64;
}



// FUNCTION 143b4b2f0 FUN_143b4b2f0 body=396 status=ok
// SIG undefined FUN_143b4b2f0(void)

undefined8 FUN_143b4b2f0(int param_1,int param_2,int param_3,char param_4,undefined8 param_5)

{
  FUN_143ab21b0(param_5,&DAT_145d0db90,3);
  if ((param_1 != 0 || param_2 != 0) || param_3 != 0) {
    if (param_4 == '\0') {
      FUN_143acc590(param_5,0x2b);
    }
    else {
      FUN_143acc590(param_5,0x2d);
    }
    if (param_1 < 10) {
      FUN_143acc590(param_5,0x30);
    }
    else {
      FUN_143acc590(param_5,param_1 / 10 + 0x30U & 0xffff);
    }
    FUN_143acc590(param_5,param_1 % 10 + 0x30U & 0xffff);
    FUN_143acc590(param_5,0x3a);
    if (param_2 < 10) {
      FUN_143acc590(param_5,0x30);
    }
    else {
      FUN_143acc590(param_5,param_2 / 10 + 0x30U & 0xffff);
    }
    FUN_143acc590(param_5,param_2 % 10 + 0x30U & 0xffff);
    if (param_3 != 0) {
      FUN_143acc590(param_5,0x3a);
      if (param_3 < 10) {
        FUN_143acc590(param_5,0x30);
      }
      else {
        FUN_143acc590(param_5,param_3 / 10 + 0x30U & 0xffff);
      }
      FUN_143acc590(param_5,param_3 % 10 + 0x30U & 0xffff);
    }
  }
  return param_5;
}



// FUNCTION 143b4b480 FUN_143b4b480 body=216 status=ok
// SIG undefined FUN_143b4b480(void)

undefined8
FUN_143b4b480(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined4 *param_4)

{
  char cVar1;
  
  FUN_143a90910(param_2);
  *param_3 = 0;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    cVar1 = FUN_143b0fc90(param_1,L"Etc/Unknown",0xb);
    if (cVar1 == '\0') {
      UDarwinGameplayFunctionLibrary::GetInSameTeam(param_2,param_1);
      *param_3 = 0;
    }
    else {
      FUN_143b96aa0(param_1,param_2,param_4);
      cVar1 = FUN_143a8b110(*param_4);
      if (cVar1 == '\0') {
        *param_4 = 0;
        FUN_143b4b5a0(param_1,param_2,param_4);
      }
      else {
        *param_3 = 1;
      }
    }
  }
  return param_2;
}



// FUNCTION 143b4b560 FUN_143b4b560 body=54 status=ok
// SIG undefined FUN_143b4b560(void)

void FUN_143b4b560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_18 [24];
  
  local_18[0] = 0;
  FUN_143b4b480(param_1,param_2,local_18,param_3);
  return;
}



// FUNCTION 143b4b5a0 FUN_143b4b5a0 body=173 status=ok
// SIG undefined FUN_143b4b5a0(void)

undefined8 FUN_143b4b5a0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18 [6];
  
  FUN_143a90910(param_2);
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    cVar1 = FUN_143b4ca90(param_1,&local_24,local_18,&local_1c,&local_20);
    if (cVar1 == '\0') {
      *param_3 = 1;
    }
    else {
      FUN_143b4b2f0(local_18[0],local_1c,local_20,local_24 < 0,param_2);
    }
  }
  return param_2;
}



// FUNCTION 143b4b650 FUN_143b4b650 body=46 status=ok
// SIG undefined FUN_143b4b650(void)

undefined8 FUN_143b4b650(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 3600000;
  }
  return uVar2;
}



// FUNCTION 143b4b680 FUN_143b4b680 body=19 status=ok
// SIG undefined FUN_143b4b680(void)

void FUN_143b4b680(void)

{
  FUN_143b4bf80();
  return;
}



// FUNCTION 143b4b6a0 FUN_143b4b6a0 body=561 status=ok
// SIG undefined FUN_143b4b6a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b4b6a0(undefined8 param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  int local_234;
  uint local_230;
  undefined4 local_22c;
  int local_228 [2];
  undefined8 local_220;
  undefined8 local_218;
  longlong local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8 [40];
  undefined1 local_1c0 [40];
  undefined1 local_198 [192];
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_1f0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  local_230 = 0;
  FUN_143a8ac30(local_1e8);
  local_238 = 0;
  FUN_143aa5540(local_d8);
  local_218 = FUN_143b4c9e0(param_2,local_d8,&local_238);
  local_234 = -1;
  cVar1 = FUN_143a8b110(local_238);
  if (cVar1 != '\0') {
    FUN_143aa5540(local_198);
    FUN_143aa37c0(local_d8,"links",local_198,&local_238);
    local_210 = FUN_143aa4640(local_198,local_228,&local_238);
    cVar1 = FUN_143a8b110(local_238);
    if (((cVar1 != '\0') && (-1 < param_3)) && (param_3 < local_228[0])) {
      local_234 = *(int *)(local_210 + (longlong)param_3 * 4);
    }
    FUN_143aa2ef0(local_198);
  }
  FUN_143aa2ef0(local_d8);
  if (-1 < local_234) {
    local_220 = FUN_143aa37c0(local_218,"Names",0,&local_238);
    cVar1 = FUN_143a8b110(local_238);
    if (cVar1 != '\0') {
      local_22c = 0;
      local_200 = FUN_143aa4da0(local_220,local_234,&local_22c,&local_238);
      local_208 = FUN_143a8d4f0(local_1c0,1,local_200,local_22c);
      local_1f8 = local_208;
      UDarwinGameplayFunctionLibrary::GetInSameTeam(local_1e8,local_208);
      FUN_143a8dc60(local_1c0);
    }
    FUN_143aa2ef0(local_220);
  }
  FUN_143aa2ef0(local_218);
  FUN_143a8d3a0(param_1,local_1e8);
  local_230 = local_230 | 1;
  FUN_143a8dc60(local_1e8);
  return param_1;
}



// FUNCTION 143b4b8e0 `dynamic_atexit_destructor_for_'Singleton'' body=35 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'Singleton''(void)

undefined8
`FGenericPlatformMisc::GetPlatformChunkInstall'::`2'::_dynamic_atexit_destructor_for__Singleton__
          (void)

{
  FUN_143a9aa60(&DAT_146bc7eb8,FUN_143b4c6e0);
  return DAT_146bc7ea8;
}



// FUNCTION 143b4b910 FUN_143b4b910 body=306 status=ok
// SIG undefined FUN_143b4b910(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b4b910(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_68 = 0;
  local_64 = 0;
  local_58 = 0;
  local_60 = FUN_143aa56e0(0,"zoneinfo64",&local_68);
  local_60 = FUN_143aa37c0(local_60,"Names",local_60,&local_68);
  local_58 = FUN_143aa4da0(local_60,param_2,&local_64,&local_68);
  cVar1 = FUN_143a8b0e0(local_68);
  if (cVar1 == '\0') {
    local_50 = FUN_143a8d4f0(local_38,1,local_58,local_64);
    local_48 = local_50;
    UDarwinGameplayFunctionLibrary::GetInSameTeam(param_1 + 8,local_50);
    FUN_143a8dc60(local_38);
  }
  else {
    FUN_143a99400(param_1 + 8,0);
  }
  FUN_143aa2ef0(local_60);
  FUN_143a8b110(local_68);
  return;
}



// FUNCTION 143b4ba50 FUN_143b4ba50 body=310 status=ok
// SIG undefined FUN_143b4ba50(void)

undefined8 FUN_143b4ba50(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    if (param_1 == 0) {
      FUN_143b16c40(&DAT_146bc7ef0,FUN_143b4c350,0,param_3,0,0);
      uVar2 = DAT_146bc7ec8;
      *param_2 = DAT_146bc7ee0;
    }
    else if (param_1 == 1) {
      FUN_143b16c40(&DAT_146bc7ef8,FUN_143b4c350,1,param_3,1,0);
      uVar2 = DAT_146bc7ed0;
      *param_2 = DAT_146bc7ee4;
    }
    else if (param_1 == 2) {
      FUN_143b16c40(&DAT_146bc7f00,FUN_143b4c350,2,param_3,2,0);
      uVar2 = DAT_146bc7ed8;
      *param_2 = DAT_146bc7ee8;
    }
    else {
      *param_3 = 1;
      uVar2 = 0;
      *param_2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143b4bb90 FUN_143b4bb90 body=464 status=ok
// SIG undefined FUN_143b4bb90(void)

void FUN_143b4bb90(longlong *param_1,double param_2,char param_3,int *param_4,int *param_5,
                  undefined4 *param_6)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  double local_res10;
  undefined1 *puVar4;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined1 local_28 [4];
  undefined4 local_24;
  double local_20;
  longlong local_18;
  undefined4 uVar5;
  
  cVar2 = FUN_143a8b0e0(*param_6);
  if (cVar2 == '\0') {
    iVar3 = (**(code **)(*param_1 + 0x38))(param_1);
    *param_4 = iVar3;
    local_res10 = param_2;
    if (param_3 == '\0') {
      local_res10 = param_2 + (double)*param_4;
    }
    bVar1 = false;
    while( true ) {
      local_20 = (double)FUN_143a917b0(local_res10 / 86400000.0);
      local_2c = (int)(local_res10 - local_20 * 86400000.0);
      puVar4 = local_28;
      FUN_143b4af00(local_20,&local_30,&local_34,&local_24,puVar4);
      uVar5 = (undefined4)((ulonglong)puVar4 >> 0x20);
      cVar2 = FUN_143b4c990(local_30,local_34);
      local_18 = *param_1;
      iVar3 = (**(code **)(local_18 + 0x20))
                        (param_1,1,local_30,local_34,CONCAT44(uVar5,local_24),local_28[0],local_2c,
                         (int)cVar2,param_6);
      *param_5 = iVar3 - *param_4;
      if (((bVar1) || (param_3 == '\0')) || (*param_5 == 0)) break;
      local_res10 = local_res10 - (double)*param_5;
      bVar1 = true;
    }
  }
  return;
}



// FUNCTION 143b4bd60 FUN_143b4bd60 body=37 status=ok
// SIG undefined FUN_143b4bd60(void)

void FUN_143b4bd60(undefined8 param_1)

{
  undefined4 local_18 [6];
  
  local_18[0] = 0;
  FUN_143b4be90(param_1,local_18);
  return;
}



// FUNCTION 143b4bd90 FUN_143b4bd90 body=244 status=ok
// SIG undefined FUN_143b4bd90(void)

ulonglong FUN_143b4bd90(undefined8 param_1,undefined1 *param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong local_10;
  
  *param_2 = 0;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    local_10 = 0;
    cVar1 = FUN_143b0fc90(param_1,L"Etc/Unknown",0xb);
    if (cVar1 != '\0') {
      local_10 = FUN_143b4bd60(param_1);
    }
    if (local_10 == 0) {
      *param_4 = 1;
      uVar4 = 0;
    }
    else {
      uVar2 = FreeLib(local_10);
      uVar3 = FUN_143ac1240(uVar2,param_3);
      FUN_143ab5770(local_10,param_2,uVar3);
      if (param_3 < (int)uVar2) {
        *param_4 = 0xf;
        uVar4 = (ulonglong)uVar2;
      }
      else {
        uVar4 = FUN_143ab4930(param_2,param_3,uVar2,param_4);
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 143b4be90 FUN_143b4be90 body=240 status=ok
// SIG undefined FUN_143b4be90(void)

undefined8 FUN_143b4be90(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_20;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    local_20 = 0;
    uVar3 = FUN_143aa56e0(0,"zoneinfo64",param_2);
    uVar4 = FUN_143aa37c0(uVar3,"Names",0,param_2);
    uVar2 = FUN_143b4b150(uVar4,param_1,param_2);
    FUN_143aa37c0(uVar3,"Regions",uVar4,param_2);
    uVar5 = FUN_143aa4da0(uVar4,uVar2,0,param_2);
    cVar1 = FUN_143a8b110(*param_2);
    if (cVar1 != '\0') {
      local_20 = uVar5;
    }
    FUN_143aa2ef0(uVar4);
    FUN_143aa2ef0(uVar3);
  }
  else {
    local_20 = 0;
  }
  return local_20;
}



// FUNCTION 143b4bf80 FUN_143b4bf80 body=8 status=ok
// SIG undefined FUN_143b4bf80(void)

undefined * FUN_143b4bf80(void)

{
  return &DAT_146bc7f18;
}



// FUNCTION 143b4bf90 `dynamic_atexit_destructor_for_'Singleton'' body=35 status=ok
// SIG undefined `dynamic_atexit_destructor_for_'Singleton''(void)

undefined8
`FGenericPlatformMisc::GetPlatformChunkInstall'::`2'::_dynamic_atexit_destructor_for__Singleton__
          (void)

{
  FUN_143a9aa60(&DAT_146bc7eb8,FUN_143b4c6e0);
  return DAT_146bc7eb0;
}



// FUNCTION 143b4bfc0 FUN_143b4bfc0 body=221 status=ok
// SIG undefined FUN_143b4bfc0(void)

undefined8
FUN_143b4bfc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 local_res18;
  undefined8 local_10;
  
  local_10 = FUN_143aa37c0(param_1,"Names",0,param_4);
  iVar2 = FUN_143b4b150(local_10,param_2,param_4);
  if ((iVar2 == -1) && (cVar1 = FUN_143a8b110(*param_4), cVar1 != '\0')) {
    *param_4 = 2;
    local_res18 = param_3;
  }
  else {
    local_10 = FUN_143aa37c0(param_1,"Zones",local_10,param_4);
    local_res18 = FUN_143aa30d0(local_10,iVar2,param_3,param_4);
  }
  FUN_143aa2ef0(local_10);
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 != '\0') {
    local_res18 = 0;
  }
  return local_res18;
}



// FUNCTION 143b4c0a0 FUN_143b4c0a0 body=150 status=ok
// SIG undefined FUN_143b4c0a0(void)

undefined1 FUN_143b4c0a0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (**(code **)(*param_1 + 0x38))(param_1);
  iVar4 = (**(code **)(*param_2 + 0x38))(param_2);
  if (iVar3 == iVar4) {
    cVar1 = (**(code **)(*param_1 + 0x40))(param_1);
    cVar2 = (**(code **)(*param_2 + 0x40))(param_2);
    if (cVar1 == cVar2) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143b4c140 FUN_143b4c140 body=523 status=ok
// SIG undefined FUN_143b4c140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b4c140(void)

{
  int iVar1;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  int local_90;
  int local_8c;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  FUN_143b68380(0xe,FUN_143b4d5f0);
  if (DAT_146bc7e98 == (longlong *)0x0) {
    local_90 = 0;
    FUN_143a91c90();
    local_70 = FUN_143a91c40(0);
    local_90 = FUN_143a91c20();
    local_90 = local_90 * -1000;
    local_98 = (longlong *)0x0;
    FUN_143a8d9f0(local_40,local_70,0xffffffff,0);
    FUN_143acc590(local_40,0);
    iVar1 = FUN_143a904f0(local_40);
    FUN_143a99400(local_40,iVar1 + -1);
    local_98 = (longlong *)FUN_143b4ac90(local_40);
    FUN_143aa79f0(local_70);
    local_8c = FUN_143a904f0(local_40);
    if ((((local_98 != (longlong *)0x0) &&
         (iVar1 = (**(code **)(*local_98 + 0x38))(local_98), local_90 != iVar1)) && (2 < local_8c))
       && (local_8c < 5)) {
      local_50 = local_98;
      local_88 = local_98;
      if (local_98 == (longlong *)0x0) {
        local_60 = 0;
      }
      else {
        local_60 = (**(code **)*local_98)(local_98,1);
      }
      local_98 = (longlong *)0x0;
    }
    if (local_98 == (longlong *)0x0) {
      local_78 = FUN_143a8d310(0x88);
      if (local_78 == 0) {
        local_68 = (longlong *)0x0;
      }
      else {
        local_68 = (longlong *)FUN_143b85140(local_78,local_90,local_40);
      }
      local_58 = local_68;
      local_98 = local_68;
    }
    if (local_98 == (longlong *)0x0) {
      local_80 = (longlong *)
                 `FGenericPlatformMisc::GetPlatformChunkInstall'::`2'::
                 _dynamic_atexit_destructor_for__Singleton__();
      if (local_80 == (longlong *)0x0) {
        FUN_143a8dc60(local_40);
        return;
      }
      local_98 = (longlong *)(**(code **)(*local_80 + 0x58))(local_80);
    }
    DAT_146bc7e98 = local_98;
    FUN_143a8dc60(local_40);
  }
  return;
}



// FUNCTION 143b4c350 FUN_143b4c350 body=910 status=ok
// SIG undefined FUN_143b4c350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b4c350(int param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  int local_a8;
  int local_a4;
  longlong local_a0;
  int local_98;
  undefined8 local_90;
  int local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_70 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  FUN_143b68380(0xe,FUN_143b4d5f0);
  local_90 = FUN_143aa56e0(0,"zoneinfo64",param_2);
  local_90 = FUN_143aa37c0(local_90,"Names",local_90,param_2);
  cVar1 = FUN_143a8b110(*param_2);
  if (cVar1 != '\0') {
    local_88 = FUN_143aa4d80(local_90);
    local_a0 = FUN_143aa7a40((longlong)local_88 << 2);
    if (local_a0 == 0) {
      *param_2 = 7;
    }
    else {
      local_a8 = 0;
      for (local_a4 = 0; local_a4 < local_88; local_a4 = local_a4 + 1) {
        FUN_143b4d580(local_68,local_90,local_a4,param_2);
        cVar1 = FUN_143a8b0e0(*param_2);
        if (cVar1 != '\0') {
          FUN_143a8dc60(local_68);
          break;
        }
        cVar1 = FUN_143b0fc90(local_68,L"Etc/Unknown",0xb);
        if (cVar1 == '\0') {
          FUN_143a8dc60(local_68);
        }
        else {
          if ((param_1 == 1) || (param_1 == 2)) {
            FUN_143a8ac30(local_40);
            FUN_143b96aa0(local_68,local_40,param_2);
            cVar1 = FUN_143a8b0e0(*param_2);
            if (cVar1 != '\0') {
              FUN_143a8dc60(local_40);
              FUN_143a8dc60(local_68);
              break;
            }
            cVar1 = FUN_143b0c130(local_40,local_68);
            if (cVar1 != '\0') {
              FUN_143a8dc60(local_40);
              FUN_143a8dc60(local_68);
              goto LAB_143b4c435;
            }
            FUN_143a8dc60(local_40);
          }
          if (param_1 == 2) {
            local_78 = FUN_143b4be90(local_68,param_2);
            cVar1 = FUN_143a8b0e0(*param_2);
            if (cVar1 != '\0') {
              FUN_143a8dc60(local_68);
              break;
            }
            iVar2 = FUN_143ab4670(local_78,&DAT_145d0db88);
            if (iVar2 == 0) {
              FUN_143a8dc60(local_68);
              goto LAB_143b4c435;
            }
          }
          *(int *)(local_a0 + (longlong)local_a8 * 4) = local_a4;
          local_a8 = local_a8 + 1;
          FUN_143a8dc60(local_68);
        }
LAB_143b4c435:
      }
      cVar1 = FUN_143a8b110(*param_2);
      if (cVar1 != '\0') {
        local_80 = local_a0;
        local_a0 = FUN_143aa7aa0(local_a0,(longlong)local_a8 << 2);
        if (local_a0 == 0) {
          local_a0 = local_80;
        }
        local_98 = param_1;
        if (param_1 == 0) {
          DAT_146bc7ec8 = local_a0;
          DAT_146bc7ee0 = local_a8;
        }
        else if (param_1 == 1) {
          DAT_146bc7ed0 = local_a0;
          DAT_146bc7ee4 = local_a8;
        }
        else if (param_1 == 2) {
          DAT_146bc7ed8 = local_a0;
          DAT_146bc7ee8 = local_a8;
        }
      }
    }
  }
  FUN_143aa2ef0(local_90);
  return;
}



// FUNCTION 143b4c6e0 FUN_143b4c6e0 body=405 status=ok
// SIG undefined FUN_143b4c6e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b4c6e0(void)

{
  undefined1 auStack_e8 [32];
  uint local_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_70 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_c8 = 0;
  FUN_143b68380(0xe,FUN_143b4d5f0);
  local_b0 = FUN_143a8d310(0x88);
  if (local_b0 == 0) {
    local_c0 = 0;
  }
  else {
    local_a0 = FUN_143a8d4f0(local_68,1,L"Etc/Unknown",0xb);
    local_c8 = local_c8 | 1;
    local_80 = local_a0;
    local_c0 = FUN_143b85140(local_b0,0,local_a0);
  }
  local_88 = local_c0;
  DAT_146bc7eb0 = local_c0;
  if ((local_c8 & 1) != 0) {
    local_c8 = local_c8 & 0xfffffffe;
    FUN_143a8dc60(local_68);
  }
  local_b8 = FUN_143a8d310(0x88);
  if (local_b8 == 0) {
    local_a8 = 0;
  }
  else {
    local_98 = FUN_143a8d4f0(local_40,1,&DAT_145d0db90,3);
    local_c8 = local_c8 | 2;
    local_78 = local_98;
    local_a8 = FUN_143b85140(local_b8,0,local_98);
  }
  local_90 = local_a8;
  DAT_146bc7ea8 = local_a8;
  if ((local_c8 & 2) != 0) {
    local_c8 = local_c8 & 0xfffffffd;
    FUN_143a8dc60(local_40);
  }
  return;
}



// FUNCTION 143b4c880 FUN_143b4c880 body=74 status=ok
// SIG undefined FUN_143b4c880(void)

undefined1 FUN_143b4c880(uint param_1)

{
  undefined1 local_18;
  
  if (((param_1 & 3) == 0) && (((int)param_1 % 100 != 0 || ((int)param_1 % 400 == 0)))) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143b4c8d0 FUN_143b4c8d0 body=190 status=ok
// SIG undefined FUN_143b4c8d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143b4c8d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_70 = 0;
  local_78 = 0x3f;
  FUN_143a8f880(param_2,0,0x3f,local_58);
  local_68 = FUN_143aa37c0(param_1,"Rules",param_3,param_4);
  uVar1 = FUN_143aa37c0(local_68,local_58,local_68,param_4);
  return uVar1;
}



// FUNCTION 143b4c990 FUN_143b4c990 body=76 status=ok
// SIG undefined FUN_143b4c990(void)

undefined1 FUN_143b4c990(undefined4 param_1,int param_2)

{
  char cVar1;
  int local_18;
  
  cVar1 = FUN_143b4c880(param_1);
  if (cVar1 == '\0') {
    local_18 = 0;
  }
  else {
    local_18 = 0xc;
  }
  return (&DAT_145d14860)[param_2 + local_18];
}



// FUNCTION 143b4c9e0 FUN_143b4c9e0 body=176 status=ok
// SIG undefined FUN_143b4c9e0(void)

undefined8 FUN_143b4c9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_143aa56e0(0,"zoneinfo64",param_3);
  FUN_143b4bfc0(uVar3,param_1,param_2,param_3);
  iVar1 = FUN_143aa54c0(param_2);
  if (iVar1 == 7) {
    uVar2 = FUN_143aa46d0(param_2,param_3);
    uVar4 = FUN_143aa37c0(uVar3,"Zones",0,param_3);
    FUN_143aa30d0(uVar4,uVar2,param_2,param_3);
    FUN_143aa2ef0(uVar4);
  }
  return uVar3;
}



// FUNCTION 143b4ca90 FUN_143b4ca90 body=2494 status=ok
// SIG undefined FUN_143b4ca90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_143b4ca90(undefined8 param_1,undefined4 *param_2,int *param_3,int *param_4,int *param_5)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_3c8 [32];
  undefined8 local_3a8;
  undefined1 local_398 [16];
  longlong *local_388;
  undefined1 local_380;
  undefined1 local_37f;
  undefined1 local_37e;
  undefined1 local_37d;
  undefined1 local_37c;
  undefined1 local_37b;
  undefined1 local_37a;
  undefined1 local_379;
  undefined1 local_378;
  undefined1 local_377;
  undefined1 local_376;
  int local_374;
  int local_370;
  int local_36c;
  int local_368;
  undefined4 local_364;
  longlong *local_360;
  longlong *local_358;
  int local_350;
  longlong *local_348;
  longlong *local_340;
  longlong *local_338;
  longlong *local_330;
  longlong *local_328;
  int local_320;
  int local_31c;
  undefined8 local_318;
  longlong *local_310;
  longlong *local_308;
  undefined8 local_300;
  longlong *local_2f8;
  longlong *local_2f0;
  longlong *local_2e8;
  undefined8 local_2e0;
  longlong *local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  longlong *local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined1 local_2a0 [40];
  call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
  local_278 [224];
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_2a8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
  local_388 = (longlong *)0x0;
  FUN_143a8d3a0(local_2a0,param_1);
  local_3a8 = 0;
  FUN_143a8a690(local_198,&DAT_145af3922,0,0);
  FUN_143a94260(local_2a0,local_198);
  FUN_143a8acf0(local_198);
  iVar3 = FUN_143a904f0(param_1);
  if ((iVar3 < 4) || (cVar1 = FUN_143b4d510(local_2a0,&DAT_145d0db90,3), cVar1 == '\0')) {
    local_37f = 0;
    FUN_143a8dc60(local_2a0);
    return local_37f;
  }
  FUN_143b16ce0(local_398,3);
  *param_2 = 1;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  uVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(local_398);
  sVar2 = FUN_143a8e4f0(param_1,uVar4);
  if (sVar2 == 0x2d) {
    *param_2 = 0xffffffff;
  }
  else {
    uVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(local_398);
    sVar2 = FUN_143a8e4f0(param_1,uVar4);
    if (sVar2 != 0x2b) {
      local_379 = 0;
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_398);
      FUN_143a8dc60(local_2a0);
      return local_379;
    }
  }
  iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(local_398);
  FUN_143b0fce0(local_398,iVar3 + 1);
  local_364 = 0;
  local_388 = (longlong *)FUN_143b37260(&local_364);
  cVar1 = FUN_143a8b0e0(local_364);
  if (cVar1 != '\0') {
    local_37d = 0;
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_398);
    FUN_143a8dc60(local_2a0);
    return local_37d;
  }
  (**(code **)(*local_388 + 0xb0))(local_388,1);
  local_36c = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(local_398);
  FUN_143b685e0(local_278,0xfffe7961);
  (**(code **)(*local_388 + 0xa0))(local_388,param_1,local_278,local_398);
  iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(local_398);
  if (iVar3 == local_36c) {
    local_2b8 = local_388;
    local_330 = local_388;
    if (local_388 == (longlong *)0x0) {
      local_2c8 = 0;
    }
    else {
      local_2c8 = (**(code **)*local_388)(local_388,1);
    }
    local_376 = 0;
    Concurrency::
    call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
    ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              (local_278);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_398);
    FUN_143a8dc60(local_2a0);
    return local_376;
  }
  iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(local_278);
  *param_3 = iVar3;
  local_31c = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(local_398);
  iVar3 = FUN_143a904f0(param_1);
  if (local_31c < iVar3) {
    iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(local_398);
    if (iVar3 - local_36c < 3) {
      uVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(local_398);
      sVar2 = FUN_143a8e4f0(param_1,uVar4);
      if (sVar2 == 0x3a) {
        iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_398);
        FUN_143b0fce0(local_398,iVar3 + 1);
        local_368 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                    ::GetIndex(local_398);
        FUN_143b69930(local_278,0xfffe7961);
        (**(code **)(*local_388 + 0xa0))(local_388,param_1,local_278,local_398);
        iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_398);
        if (iVar3 - local_368 != 2) {
          local_2f8 = local_388;
          local_360 = local_388;
          if (local_388 == (longlong *)0x0) {
            local_318 = 0;
          }
          else {
            local_318 = (**(code **)*local_388)(local_388,1);
          }
          local_37a = 0;
          Concurrency::
          call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
          ::
          ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                    (local_278);
          UCameraModifier_Climbing::~UCameraModifier_Climbing(local_398);
          FUN_143a8dc60(local_2a0);
          return local_37a;
        }
        iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_278);
        *param_4 = iVar3;
        local_320 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                    ::GetIndex(local_398);
        iVar3 = FUN_143a904f0(param_1);
        if (local_320 < iVar3) {
          uVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_398);
          sVar2 = FUN_143a8e4f0(param_1,uVar4);
          if (sVar2 != 0x3a) {
            local_2e8 = local_388;
            local_358 = local_388;
            if (local_388 == (longlong *)0x0) {
              local_2d0 = 0;
            }
            else {
              local_2d0 = (**(code **)*local_388)(local_388,1);
            }
            local_378 = 0;
            Concurrency::
            call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
            ::
            ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                      (local_278);
            UCameraModifier_Climbing::~UCameraModifier_Climbing(local_398);
            FUN_143a8dc60(local_2a0);
            return local_378;
          }
          iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_398);
          FUN_143b0fce0(local_398,iVar3 + 1);
          local_368 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                      ::GetIndex(local_398);
          FUN_143b69930(local_278,0xfffe7961);
          (**(code **)(*local_388 + 0xa0))(local_388,param_1,local_278,local_398);
          local_350 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                      ::GetIndex(local_398);
          iVar3 = FUN_143a904f0(param_1);
          if ((local_350 != iVar3) ||
             (iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                      ::GetIndex(local_398), iVar3 - local_368 != 2)) {
            local_2d8 = local_388;
            local_348 = local_388;
            if (local_388 == (longlong *)0x0) {
              local_2c0 = 0;
            }
            else {
              local_2c0 = (**(code **)*local_388)(local_388,1);
            }
            local_37b = 0;
            Concurrency::
            call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
            ::
            ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                      (local_278);
            UCameraModifier_Climbing::~UCameraModifier_Climbing(local_398);
            FUN_143a8dc60(local_2a0);
            return local_37b;
          }
          iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_278);
          *param_5 = iVar3;
        }
        goto LAB_143b4d341;
      }
    }
    local_308 = local_388;
    local_340 = local_388;
    if (local_388 == (longlong *)0x0) {
      local_2b0 = 0;
    }
    else {
      local_2b0 = (**(code **)*local_388)(local_388,1);
    }
    local_37e = 0;
    Concurrency::
    call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
    ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              (local_278);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_398);
    FUN_143a8dc60(local_2a0);
  }
  else {
    local_374 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_398);
    local_374 = local_374 - local_36c;
    local_370 = local_374;
    if ((local_374 < 1) || (6 < local_374)) {
      local_310 = local_388;
      local_338 = local_388;
      if (local_388 == (longlong *)0x0) {
        local_300 = 0;
      }
      else {
        local_300 = (**(code **)*local_388)(local_388,1);
      }
      local_377 = 0;
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_278);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_398);
      FUN_143a8dc60(local_2a0);
      return local_377;
    }
    if (2 < local_374) {
      if (local_374 < 5) {
        *param_4 = *param_3 % 100;
        *param_3 = *param_3 / 100;
      }
      else if ((4 < local_374) && (local_374 < 7)) {
        *param_5 = *param_3 % 100;
        *param_4 = (int)((longlong)
                         ((ulonglong)(uint)((int)((longlong)*param_3 / 100) >> 0x1f) << 0x20 |
                         (longlong)*param_3 / 100 & 0xffffffffU) % 100);
        *param_3 = *param_3 / 10000;
      }
    }
LAB_143b4d341:
    local_2f0 = local_388;
    local_328 = local_388;
    if (local_388 == (longlong *)0x0) {
      local_2e0 = 0;
    }
    else {
      local_2e0 = (**(code **)*local_388)(local_388,1);
    }
    if (((*param_3 < 0x18) && (*param_4 < 0x3c)) && (*param_5 < 0x3c)) {
      local_37c = 1;
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_278);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_398);
      FUN_143a8dc60(local_2a0);
      local_37e = local_37c;
    }
    else {
      local_380 = 0;
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_278);
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_398);
      FUN_143a8dc60(local_2a0);
      local_37e = local_380;
    }
  }
  return local_37e;
}



// FUNCTION 143b4d460 FUN_143b4d460 body=23 status=ok
// SIG undefined FUN_143b4d460(void)

void FUN_143b4d460(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x74) = 0;
  return;
}



// FUNCTION 143b4d480 FUN_143b4d480 body=130 status=ok
// SIG undefined FUN_143b4d480(void)

longlong FUN_143b4d480(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_143a8b110(*param_2);
  if (((cVar1 == '\0') || (*(longlong *)(param_1 + 0x60) == 0)) ||
     (*(int *)(param_1 + 0x70) <= *(int *)(param_1 + 0x74))) {
    param_1 = 0;
  }
  else {
    FUN_143b4b910(param_1,*(undefined4 *)
                           (*(longlong *)(param_1 + 0x60) + (longlong)*(int *)(param_1 + 0x74) * 4))
    ;
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
    param_1 = param_1 + 8;
  }
  return param_1;
}



// FUNCTION 143b4d510 FUN_143b4d510 body=107 status=ok
// SIG undefined FUN_143b4d510(void)

bool FUN_143b4d510(undefined8 param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  int local_res18;
  
  local_res18 = param_3;
  if (param_3 < 0) {
    local_res18 = FreeLib(param_2);
  }
  cVar1 = FUN_143a8ebe0(param_1,0,local_res18,param_2,0,local_res18);
  return cVar1 == '\0';
}



// FUNCTION 143b4d580 FUN_143b4d580 body=112 status=ok
// SIG undefined FUN_143b4d580(void)

undefined8
FUN_143b4d580(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_14 = 0;
  local_18 = 0;
  local_10 = FUN_143aa4da0(param_2,param_3,&local_18,param_4);
  FUN_143a8d4f0(param_1,1,local_10,local_18);
  return param_1;
}



// FUNCTION 143b4d5f0 FUN_143b4d5f0 body=433 status=ok
// SIG undefined FUN_143b4d5f0(void)

undefined8 FUN_143b4d5f0(void)

{
  if (DAT_146bc7e98 != (undefined8 *)0x0) {
    (**(code **)*DAT_146bc7e98)(DAT_146bc7e98);
  }
  DAT_146bc7e98 = (undefined8 *)0x0;
  FUN_143a9a9f0(&DAT_146bc7ea0);
  if (DAT_146bc7ea8 != (undefined8 *)0x0) {
    (**(code **)*DAT_146bc7ea8)(DAT_146bc7ea8);
  }
  DAT_146bc7ea8 = (undefined8 *)0x0;
  if (DAT_146bc7eb0 != (undefined8 *)0x0) {
    (**(code **)*DAT_146bc7eb0)(DAT_146bc7eb0);
  }
  DAT_146bc7eb0 = (undefined8 *)0x0;
  FUN_143a9a9f0(&DAT_146bc7eb8);
  _guard_xfg_dispatch_icall_nop(&DAT_146bc7f08,0,0x10);
  FUN_143a9a9f0(&DAT_146bc7ec0);
  DAT_146bc7ee0 = 0;
  FUN_143aa79f0(DAT_146bc7ec8);
  DAT_146bc7ec8 = 0;
  FUN_143a9a9f0(&DAT_146bc7ef0);
  DAT_146bc7ee4 = 0;
  FUN_143aa79f0(DAT_146bc7ed0);
  DAT_146bc7ed0 = 0;
  FUN_143a9a9f0(&DAT_146bc7ef8);
  DAT_146bc7ee8 = 0;
  FUN_143aa79f0(DAT_146bc7ed8);
  DAT_146bc7ed8 = 0;
  FUN_143a9a9f0(&DAT_146bc7f00);
  return 1;
}



// FUNCTION 143b4d7b0 FUN_143b4d7b0 body=49 status=ok
// SIG undefined FUN_143b4d7b0(void)

undefined8 * FUN_143b4d7b0(undefined8 *param_1)

{
  FUN_143ace7f0(param_1,1);
  *param_1 = icu_53::BasicCalendarFactory::vftable;
  return param_1;
}



// FUNCTION 143b4d7f0 FUN_143b4d7f0 body=280 status=ok
// SIG undefined FUN_143b4d7f0(void)

undefined8 * FUN_143b4d7f0(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  puVar3 = param_1;
  for (lVar2 = 8; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
  }
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::Calendar::vftable;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 2;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  FUN_143b4e9d0(param_1);
  uVar1 = FUN_143b4ac10();
  param_1[0x1e] = uVar1;
  if (param_1[0x1e] == 0) {
    *param_2 = 7;
  }
  uVar1 = FUN_143a8b650();
  FUN_143b556f0(param_1,uVar1,0,param_2,uVar4);
  return param_1;
}



// FUNCTION 143b4d910 FUN_143b4d910 body=96 status=ok
// SIG undefined FUN_143b4d910(void)

undefined8 *
FUN_143b4d910(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143a8abc0(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::Calendar::vftable;
  param_1[0x1e] = 0;
  FUN_143b4de00(param_1,param_2);
  return param_1;
}



// FUNCTION 143b4d970 FUN_143b4d970 body=298 status=ok
// SIG undefined FUN_143b4d970(void)

undefined8 *
FUN_143b4d970(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  puVar3 = param_1;
  for (lVar2 = 8; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined8 *)((longlong)puVar3 + 1);
  }
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::Calendar::vftable;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 2;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  FUN_143b4e9d0(param_1);
  uVar1 = (**(code **)(*param_2 + 0x58))(param_2);
  param_1[0x1e] = uVar1;
  if (param_1[0x1e] == 0) {
    *param_4 = 7;
  }
  FUN_143b556f0(param_1,param_3,0,param_4,uVar4);
  return param_1;
}



// FUNCTION 143b4daa0 FUN_143b4daa0 body=282 status=ok
// SIG undefined FUN_143b4daa0(void)

undefined8 *
FUN_143b4daa0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar2 = param_1;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined8 *)((longlong)puVar2 + 1);
  }
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::Calendar::vftable;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 2;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  if (param_2 == 0) {
    *param_4 = 1;
  }
  else {
    FUN_143b4e9d0(param_1);
    param_1[0x1e] = param_2;
    FUN_143b556f0(param_1,param_3,0,param_4,uVar3);
  }
  return param_1;
}



// FUNCTION 143b4dbc0 FUN_143b4dbc0 body=249 status=ok
// SIG undefined FUN_143b4dbc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143b4dbc0(undefined8 *param_1)

{
  undefined1 auStack_98 [32];
  undefined4 local_78 [2];
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
  local_60 = FUN_143a8d4f0(local_40,1,L"Calendar",0xffffffff);
  local_50 = local_60;
  FUN_143acef70(param_1,local_60);
  FUN_143a8dc60(local_40);
  *param_1 = icu_53::CalendarService::vftable;
  local_78[0] = 0;
  local_70 = FUN_143a8d310(0x60);
  if (local_70 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = FUN_143b4dcc0(local_70);
  }
  local_58 = local_68;
  FUN_143ace0b0(param_1,local_68,local_78);
  return param_1;
}



// FUNCTION 143b4dcc0 FUN_143b4dcc0 body=44 status=ok
// SIG undefined FUN_143b4dcc0(void)

CMonikerFile * FUN_143b4dcc0(CMonikerFile *param_1)

{
  CMonikerFile::CMonikerFile(param_1);
  *(undefined ***)param_1 = icu_53::DefaultCalendarFactory::vftable;
  return param_1;
}



// FUNCTION 143b4dcf0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::BasicCalendarFactory::vftable;
  FUN_143ace850(param_1);
  return;
}



// FUNCTION 143b4dd20 FUN_143b4dd20 body=121 status=ok
// SIG undefined FUN_143b4dd20(void)

void FUN_143b4dd20(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::Calendar::vftable;
  puVar1 = (undefined8 *)param_1[0x1e];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143b4dda0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(CHttpFile *param_1)

{
  *(undefined ***)param_1 = icu_53::CalendarService::vftable;
  CHttpFile::~CHttpFile(param_1);
  return;
}



// FUNCTION 143b4ddd0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::DefaultCalendarFactory::vftable;
  UPrimalCharacterSetting::~UPrimalCharacterSetting(param_1);
  return;
}



// FUNCTION 143b4de00 FUN_143b4de00 body=662 status=ok
// SIG undefined FUN_143b4de00(void)

longlong FUN_143b4de00(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_143b55fe0(param_2 + 0xc,param_1 + 0xc,0x17);
    FUN_143b55fb0(param_2 + 0x68,param_1 + 0x68,0x17);
    FUN_143b55fe0(param_2 + 0x80,param_1 + 0x80,0x17);
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(param_2 + 0xe8);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
    if ((*(longlong *)(param_1 + 0xf0) != 0) &&
       (puVar1 = *(undefined8 **)(param_1 + 0xf0), puVar1 != (undefined8 *)0x0)) {
      (**(code **)*puVar1)(puVar1,1);
    }
    if (*(longlong *)(param_2 + 0xf0) != 0) {
      uVar2 = (**(code **)(**(longlong **)(param_2 + 0xf0) + 0x58))(*(undefined8 *)(param_2 + 0xf0))
      ;
      *(undefined8 *)(param_1 + 0xf0) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
    *(undefined1 *)(param_1 + 0x104) = *(undefined1 *)(param_2 + 0x104);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_2 + 0x114);
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
    _guard_xfg_dispatch_icall_nop((char *)(param_1 + 0x128),(char *)(param_2 + 0x128));
    _guard_xfg_dispatch_icall_nop((char *)(param_1 + 0x1c5),(char *)(param_2 + 0x1c5));
  }
  return param_1;
}



// FUNCTION 143b4e0a0 FUN_143b4e0a0 body=138 status=ok
// SIG undefined FUN_143b4e0a0(void)

undefined1 FUN_143b4e0a0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  double dVar2;
  undefined4 local_14;
  double local_10;
  
  local_14 = 0;
  cVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
  if (cVar1 != '\0') {
    local_10 = (double)FUN_143b52840(param_1,&local_14);
    dVar2 = (double)FUN_143b52840(param_2,&local_14);
    if ((local_10 == dVar2) && (cVar1 = FUN_143a8b110(local_14), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143b4e130 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b4e170 FUN_143b4e170 body=54 status=ok
// SIG undefined FUN_143b4e170(void)

undefined8 FUN_143b4e170(undefined8 param_1,uint param_2)

{
  FUN_143b4dd20(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b4e1b0 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b4e1f0 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b4e230 accHitTest body=52 status=ok
// SIG long accHitTest(CFormView * this, long param_1, long param_2, tagVARIANT * param_3)

/* Library Function - Single Match
    public: virtual long __cdecl CFormView::accHitTest(long,long,struct tagVARIANT * __ptr64)
   __ptr64
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug */

long __thiscall CFormView::accHitTest(CFormView *this,long param_1,long param_2,tagVARIANT *param_3)

{
  long lVar1;
  
  lVar1 = FUN_143b4e270(this,param_1,param_2,param_3);
  return lVar1;
}



// FUNCTION 143b4e270 FUN_143b4e270 body=1495 status=ok
// SIG undefined FUN_143b4e270(void)

void FUN_143b4e270(longlong *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *_Str1;
  double dVar6;
  int local_res18;
  double local_68;
  int local_60;
  int local_58;
  int local_54;
  int local_48;
  double local_20;
  undefined8 local_10 [2];
  
  if (param_3 == 0) {
    return;
  }
  local_68 = (double)param_3;
  bVar1 = true;
  local_res18 = param_3;
  switch(param_2) {
  case 0:
    iVar4 = FUN_143b512d0(param_1,param_2,param_4);
    FUN_143b55270(param_1,param_2,iVar4 + param_3);
    (**(code **)(*param_1 + 0x158))(param_1,0,param_4);
    return;
  case 1:
  case 0x11:
    iVar4 = FUN_143b512d0(param_1,0,param_4);
    if (iVar4 == 0) {
      _Str1 = (char *)(**(code **)(*param_1 + 0xb0))(param_1);
      iVar4 = _guard_xfg_dispatch_icall_nop(_Str1,"gregorian");
      if (((iVar4 == 0) || (iVar4 = _guard_xfg_dispatch_icall_nop(_Str1,"roc"), iVar4 == 0)) ||
         (iVar4 = _guard_xfg_dispatch_icall_nop(_Str1,"coptic"), iVar4 == 0)) {
        local_res18 = -param_3;
      }
    }
  case 2:
  case 0x13:
    cVar2 = FUN_143b53980(param_1);
    FUN_143b55390(param_1,1);
    iVar4 = FUN_143b512d0(param_1,param_2,param_4);
    FUN_143b55270(param_1,param_2,iVar4 + local_res18);
    (**(code **)(*param_1 + 0x158))(param_1,5,param_4);
    if (cVar2 != '\0') {
      return;
    }
    FUN_143b4eb20(param_1,param_4);
    FUN_143b55390(param_1,0);
    return;
  case 3:
  case 4:
  case 8:
    local_68 = local_68 * 604800000.0;
    break;
  case 5:
  case 6:
  case 7:
  case 0x12:
  case 0x14:
    local_68 = local_68 * 86400000.0;
    break;
  case 9:
    local_68 = local_68 * 43200000.0;
    break;
  case 10:
  case 0xb:
    local_68 = local_68 * 3600000.0;
    bVar1 = false;
    break;
  case 0xc:
    local_68 = local_68 * 60000.0;
    bVar1 = false;
    break;
  case 0xd:
    local_68 = local_68 * 1000.0;
    bVar1 = false;
    break;
  case 0xe:
  case 0x15:
    bVar1 = false;
    break;
  default:
    *param_4 = 1;
    return;
  }
  local_60 = 0;
  local_54 = 0;
  if (bVar1) {
    local_60 = FUN_143b512d0(param_1,0x10,param_4);
    iVar4 = FUN_143b512d0(param_1,0xf,param_4);
    local_60 = local_60 + iVar4;
    local_54 = FUN_143b512d0(param_1,0x15,param_4);
  }
  dVar6 = (double)FUN_143b52840(param_1,param_4);
  FUN_143b55580(param_1,dVar6 + local_68,param_4);
  if ((bVar1) && (local_58 = FUN_143b512d0(param_1,0x15,param_4), local_58 != local_54)) {
    local_20 = (double)FUN_143b53730(param_1);
    iVar4 = FUN_143b512d0(param_1,0x10,param_4);
    iVar5 = FUN_143b512d0(param_1,0xf,param_4);
    if (iVar4 + iVar5 != local_60) {
      local_60 = local_60 - (iVar4 + iVar5);
      if (local_60 < 0) {
        local_48 = -(-local_60 % 86400000);
      }
      else {
        local_48 = local_60 % 86400000;
      }
      if (local_48 != 0) {
        FUN_143b55580(param_1,local_20 + (double)local_48,param_4);
        local_58 = FUN_143b512d0(param_1,0x15,param_4);
      }
      if (local_58 != local_54) {
        iVar4 = *(int *)((longlong)param_1 + 0xfc);
        if (iVar4 == 0) {
          if (local_48 < 0) {
            FUN_143b55580(param_1,local_20,param_4);
          }
        }
        else if (iVar4 == 1) {
          if (0 < local_48) {
            FUN_143b55580(param_1,local_20,param_4);
          }
        }
        else if (iVar4 == 2) {
          if (0 < local_48) {
            local_20 = (double)FUN_143b53730(param_1);
          }
          cVar2 = FUN_143b522d0(param_1,local_20,local_10,param_4);
          cVar3 = FUN_143a8b110(*param_4);
          if ((cVar3 != '\0') && (cVar2 != '\0')) {
            FUN_143b55580(param_1,local_10[0],param_4);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 143b4e8a0 FUN_143b4e8a0 body=141 status=ok
// SIG undefined FUN_143b4e8a0(void)

void FUN_143b4e8a0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    if ((*(longlong *)(param_1 + 0xf0) != 0) &&
       (puVar1 = *(undefined8 **)(param_1 + 0xf0), puVar1 != (undefined8 *)0x0)) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(longlong *)(param_1 + 0xf0) = param_2;
    *(undefined1 *)(param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 143b4e930 FUN_143b4e930 body=153 status=ok
// SIG undefined FUN_143b4e930(void)

void FUN_143b4e930(longlong *param_1,int param_2)

{
  undefined4 local_18 [6];
  
  if (*(char *)((longlong)param_1 + 0xb) != '\0') {
    local_18[0] = 0;
    (**(code **)(*param_1 + 0xe0))(param_1,local_18);
  }
  *(undefined4 *)((longlong)param_1 + (longlong)param_2 * 4 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + (longlong)param_2 * 4 + 0x80) = 0;
  *(undefined1 *)((longlong)param_1 + (longlong)param_2 + 0x68) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 143b4e9d0 FUN_143b4e9d0 body=126 status=ok
// SIG undefined FUN_143b4e9d0(void)

void FUN_143b4e9d0(longlong param_1)

{
  undefined4 local_18;
  
  for (local_18 = 0; local_18 < 0x17; local_18 = local_18 + 1) {
    *(undefined4 *)(param_1 + 0xc + (longlong)local_18 * 4) = 0;
    *(undefined4 *)(param_1 + 0x80 + (longlong)local_18 * 4) = 0;
    *(undefined1 *)(param_1 + 0x68 + (longlong)local_18) = 0;
  }
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 143b4ea50 FUN_143b4ea50 body=100 status=ok
// SIG undefined FUN_143b4ea50(void)

void FUN_143b4ea50(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           _guard_xfg_dispatch_icall_nop
                     (param_2,0,&icu_53::UObject::RTTI_Type_Descriptor,
                      &icu_53::UnicodeString::RTTI_Type_Descriptor,0);
  if (plVar1 == (longlong *)0x0) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  else {
    (**(code **)(*plVar1 + 0x30))(plVar1);
  }
  return;
}



// FUNCTION 143b4eac0 FUN_143b4eac0 body=86 status=ok
// SIG undefined FUN_143b4eac0(void)

void FUN_143b4eac0(undefined8 param_1,int param_2,int param_3,undefined8 param_4,int param_5,
                  int param_6)

{
  FUN_143b0fd50(param_1,param_2,param_3 - param_2,param_4,param_5,param_6 - param_5);
  return;
}



// FUNCTION 143b4eb20 FUN_143b4eb20 body=144 status=ok
// SIG undefined FUN_143b4eb20(void)

void FUN_143b4eb20(longlong *param_1,undefined4 *param_2)

{
  char cVar1;
  
  if ((char)param_1[1] == '\0') {
    FUN_143b55dc0(param_1,param_2);
    cVar1 = FUN_143a8b0e0(*param_2);
    if (cVar1 != '\0') {
      return;
    }
  }
  if (*(char *)((longlong)param_1 + 9) == '\0') {
    (**(code **)(*param_1 + 0xe0))(param_1,param_2);
    cVar1 = FUN_143a8b0e0(*param_2);
    if (cVar1 == '\0') {
      *(undefined1 *)((longlong)param_1 + 9) = 1;
      *(undefined1 *)((longlong)param_1 + 10) = 1;
    }
  }
  return;
}



// FUNCTION 143b4ebb0 FUN_143b4ebb0 body=774 status=ok
// SIG undefined FUN_143b4ebb0(void)

void FUN_143b4ebb0(longlong *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  double dVar3;
  int local_34;
  uint local_30;
  int local_2c;
  double local_28;
  int local_20;
  int local_1c;
  longlong *local_18;
  longlong local_10;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    local_28 = (double)FUN_143b53730(param_1);
    local_18 = (longlong *)FUN_143b528b0(param_1);
    (**(code **)(*local_18 + 0x18))(local_18,local_28,0,&local_2c,&local_1c,param_2);
    local_28 = local_28 + (double)(local_2c + local_1c);
    local_30 = 0x80067;
    for (local_34 = 0; local_34 < 0x17; local_34 = local_34 + 1) {
      if ((local_30 & 1) == 0) {
        *(undefined4 *)((longlong)param_1 + (longlong)local_34 * 4 + 0x80) = 1;
        *(undefined1 *)((longlong)param_1 + (longlong)local_34 + 0x68) = 1;
      }
      else {
        *(undefined4 *)((longlong)param_1 + (longlong)local_34 * 4 + 0x80) = 0;
        *(undefined1 *)((longlong)param_1 + (longlong)local_34 + 0x68) = 0;
      }
      local_30 = local_30 >> 1;
    }
    dVar3 = (double)FUN_143b512a0(local_28,0x4194997000000000);
    local_20 = (int)dVar3;
    FUN_143b53750(param_1,0x14,local_20 + 0x253d8c);
    FUN_143b4eec0(param_1,*(undefined4 *)((longlong)param_1 + 0x5c),param_2);
    local_10 = *param_1;
    (**(code **)(local_10 + 0x140))(param_1,*(undefined4 *)((longlong)param_1 + 0x5c),param_2);
    FUN_143b4f600(param_1,param_2);
    iVar2 = (int)(local_28 - (double)local_20 * 86400000.0);
    *(int *)(param_1 + 0xc) = iVar2;
    *(int *)((longlong)param_1 + 0x44) = iVar2 % 1000;
    *(int *)(param_1 + 8) = (iVar2 / 1000) % 0x3c;
    iVar2 = (iVar2 / 1000) / 0x3c;
    *(int *)((longlong)param_1 + 0x3c) = iVar2 % 0x3c;
    iVar2 = iVar2 / 0x3c;
    *(int *)(param_1 + 7) = iVar2;
    *(int *)(param_1 + 6) = iVar2 / 0xc;
    *(int *)((longlong)param_1 + 0x34) = iVar2 % 0xc;
    *(int *)(param_1 + 9) = local_2c;
    *(int *)((longlong)param_1 + 0x4c) = local_1c;
  }
  return;
}



// FUNCTION 143b4eec0 FUN_143b4eec0 body=164 status=ok
// SIG undefined FUN_143b4eec0(void)

void FUN_143b4eec0(longlong param_1,int param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 local_18;
  
  FUN_143b4ef70(param_1,param_2,param_3);
  bVar1 = FUN_143b53c70((double)param_2);
  FUN_143b53750(param_1,7,(uint)bVar1);
  iVar2 = FUN_143b52200(param_1);
  iVar2 = (uint)bVar1 - iVar2;
  local_18 = iVar2 + 1;
  if (local_18 < 1) {
    local_18 = iVar2 + 8;
  }
  FUN_143b53750(param_1,0x12,local_18);
  *(int *)(param_1 + 0x54) = local_18;
  return;
}



// FUNCTION 143b4ef70 FUN_143b4ef70 body=126 status=ok
// SIG undefined FUN_143b4ef70(void)

void FUN_143b4ef70(longlong param_1,int param_2)

{
  undefined1 local_18 [8];
  longlong local_10;
  
  local_10 = param_1 + 0x118;
  FUN_143b91ab0((double)(param_2 + -0x253d8c),local_10,param_1 + 0x11c,param_1 + 0x124,local_18,
                param_1 + 0x120);
  return;
}



// FUNCTION 143b4eff0 FUN_143b4eff0 body=211 status=ok
// SIG undefined FUN_143b4eff0(void)

void FUN_143b4eff0(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  int local_14;
  
  if (1 < (int)param_1[0x1a]) {
    uVar1 = FUN_143b53d30(param_1,0,8,0);
    iVar2 = FUN_143b53d30(param_1,0x11,0x13,uVar1);
    if (iVar2 <= (int)param_1[0x1a]) {
      FUN_143b536c0(param_1,0x14);
      return;
    }
  }
  uVar3 = (**(code **)(*param_1 + 0x138))(param_1);
  local_14 = FUN_143b54150(param_1,uVar3);
  if (local_14 == 0x17) {
    local_14 = 5;
  }
  (**(code **)(*param_1 + 0x120))(param_1,local_14);
  return;
}



// FUNCTION 143b4f0d0 FUN_143b4f0d0 body=406 status=ok
// SIG undefined FUN_143b4f0d0(void)

int FUN_143b4f0d0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_28;
  int local_20;
  int local_18;
  
  local_28 = 0;
  iVar1 = *(int *)(param_1 + 0xac);
  if (*(int *)(param_1 + 0xa4) < *(int *)(param_1 + 0xa8)) {
    local_20 = *(int *)(param_1 + 0xa8);
  }
  else {
    local_20 = *(int *)(param_1 + 0xa4);
  }
  local_18 = iVar1;
  if (iVar1 < local_20) {
    local_18 = local_20;
  }
  if (local_18 != 0) {
    if (local_18 == iVar1) {
      local_28 = FUN_143b536c0(param_1,0xb);
    }
    else {
      local_28 = FUN_143b536c0(param_1,10);
      iVar1 = FUN_143b536c0(param_1,9);
      local_28 = local_28 + iVar1 * 0xc;
    }
  }
  iVar1 = FUN_143b536c0(param_1,0xc);
  iVar2 = FUN_143b536c0(param_1,0xd);
  iVar3 = FUN_143b536c0(param_1,0xe);
  return ((local_28 * 0x3c + iVar1) * 0x3c + iVar2) * 1000 + iVar3;
}



// FUNCTION 143b4f270 FUN_143b4f270 body=897 status=ok
// SIG undefined FUN_143b4f270(void)

void FUN_143b4f270(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  double dVar4;
  int local_64;
  double local_58;
  int local_48 [2];
  double local_40;
  undefined4 local_38;
  int local_34;
  int local_30;
  double local_28;
  double local_20;
  double local_18;
  
  cVar1 = FUN_143b53980(param_1);
  if (cVar1 == '\0') {
    FUN_143b56260(param_1,param_2);
    cVar1 = FUN_143a8b0e0(*param_2);
    if (cVar1 != '\0') {
      return;
    }
  }
  local_38 = FUN_143b4eff0(param_1);
  dVar4 = (double)FUN_143b53cd0(local_38);
  if ((*(int *)(param_1 + 0xd4) < 2) ||
     (iVar3 = FUN_143b53d30(param_1,9,0xe,0), *(int *)(param_1 + 0xd4) < iVar3)) {
    local_64 = FUN_143b4f0d0(param_1);
  }
  else {
    local_64 = FUN_143b536c0(param_1,0x15);
  }
  local_58 = 0.0;
  if ((*(int *)(param_1 + 0xbc) < 2) && (*(int *)(param_1 + 0xc0) < 2)) {
    cVar1 = FUN_143b53980(param_1);
    if ((cVar1 == '\0') || (*(int *)(param_1 + 0xfc) == 2)) {
      iVar3 = FUN_143b4f8e0(param_1,dVar4,local_64,param_2);
      local_40 = (dVar4 + (double)local_64) - (double)iVar3;
      (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x18))
                (*(undefined8 *)(param_1 + 0xf0),local_40,0,local_48,&local_34,param_2);
      cVar1 = FUN_143a8b110(*param_2);
      if (cVar1 != '\0') {
        if (iVar3 == local_48[0] + local_34) {
          local_58 = local_40;
        }
        else {
          cVar1 = FUN_143b53980(param_1);
          if (cVar1 == '\0') {
            *param_2 = 1;
          }
          else {
            cVar1 = FUN_143b522d0(param_1,local_40,&local_20,param_2);
            cVar2 = FUN_143a8b110(*param_2);
            if ((cVar2 != '\0') && (cVar1 != '\0')) {
              local_58 = local_20;
            }
          }
        }
      }
    }
    else {
      local_18 = dVar4 + (double)local_64;
      iVar3 = FUN_143b4f8e0(param_1,dVar4,local_64,param_2);
      local_58 = local_18 - (double)iVar3;
    }
  }
  else {
    local_28 = dVar4 + (double)local_64;
    local_30 = FUN_143b536c0(param_1,0xf);
    iVar3 = FUN_143b536c0(param_1,0x10);
    local_58 = local_28 - (double)(local_30 + iVar3);
  }
  cVar1 = FUN_143a8b110(*param_2);
  if (cVar1 != '\0') {
    FUN_143b537a0(param_1,local_58);
  }
  return;
}



// FUNCTION 143b4f600 FUN_143b4f600 body=726 status=ok
// SIG undefined FUN_143b4f600(void)

void FUN_143b4f600(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int local_58;
  int local_50;
  int local_4c;
  
  cVar4 = FUN_143a8b0e0(*param_2);
  if (cVar4 == '\0') {
    local_50 = (int)param_1[0xb];
    iVar1 = (int)param_1[5];
    iVar2 = *(int *)((longlong)param_1 + 0x24);
    iVar6 = FUN_143b52200(param_1);
    iVar7 = ((iVar1 + 7) - iVar6) % 7;
    iVar6 = FUN_143b52200(param_1);
    iVar8 = (((iVar1 - iVar2) + 0x1b59) - iVar6) % 7;
    iVar6 = iVar2 + -1 + iVar8;
    local_58 = iVar6 / 7;
    bVar5 = FUN_143b52620(param_1,(longlong)iVar6 % 7 & 0xffffffff);
    if ((int)(uint)bVar5 <= 7 - iVar8) {
      local_58 = local_58 + 1;
    }
    if (local_58 == 0) {
      iVar6 = (**(code **)(*param_1 + 0x110))(param_1,local_50 + -1);
      local_58 = FUN_143b562e0(param_1,iVar2 + iVar6,iVar1);
      local_50 = local_50 + -1;
    }
    else {
      iVar6 = (**(code **)(*param_1 + 0x110))(param_1,local_50);
      if (iVar6 + -5 <= iVar2) {
        local_4c = ((iVar7 + iVar6) - iVar2) % 7;
        if (local_4c < 0) {
          local_4c = local_4c + 7;
        }
        bVar5 = FUN_143b52620(param_1);
        if (((int)(uint)bVar5 <= 6 - local_4c) && (iVar6 < (iVar2 + 7) - iVar7)) {
          local_58 = 1;
          local_50 = local_50 + 1;
        }
      }
    }
    *(int *)(param_1 + 3) = local_58;
    *(int *)(param_1 + 10) = local_50;
    lVar3 = param_1[4];
    uVar9 = FUN_143b562e0(param_1,(int)lVar3,iVar1);
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar9;
    *(int *)((longlong)param_1 + 0x2c) = ((int)lVar3 + -1) / 7 + 1;
  }
  return;
}



// FUNCTION 143b4f8e0 FUN_143b4f8e0 body=713 status=ok
// SIG undefined FUN_143b4f8e0(void)

int FUN_143b4f8e0(longlong param_1,double param_2,int param_3,undefined8 param_4)

{
  bool bVar1;
  int local_64;
  int local_60 [2];
  longlong *local_58;
  undefined4 local_50;
  double local_48;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  longlong *local_30;
  undefined4 local_28;
  int local_24;
  double local_20;
  double local_18;
  
  local_48 = param_2 + (double)param_3;
  local_30 = (longlong *)FUN_143b51a40(param_1);
  if (local_30 == (longlong *)0x0) {
    local_58 = (longlong *)FUN_143b528b0(param_1);
    (**(code **)(*local_58 + 0x18))(local_58,local_48,1,local_60,&local_64,param_4);
    bVar1 = false;
    if (*(int *)(param_1 + 0xf8) == 1) {
      local_20 = local_48 - (double)(local_60[0] + local_64);
      (**(code **)(*local_58 + 0x18))(local_58,local_20 - 21600000.0,0,&local_24,&local_34,param_4);
      local_40 = (local_60[0] + local_64) - (local_24 + local_34);
      if (local_40 < 0) {
        bVar1 = true;
        (**(code **)(*local_58 + 0x18))
                  (local_58,local_48 + (double)local_40,1,local_60,&local_64,param_4);
      }
    }
    if ((!bVar1) && (*(int *)(param_1 + 0xfc) == 1)) {
      local_18 = local_48 - (double)(local_60[0] + local_64);
      (**(code **)(*local_58 + 0x18))(local_58,local_18,0,local_60,&local_64,param_4);
    }
  }
  else {
    if (*(int *)(param_1 + 0xf8) == 1) {
      local_50 = 4;
    }
    else {
      local_50 = 0xc;
    }
    local_28 = local_50;
    if (*(int *)(param_1 + 0xfc) == 1) {
      local_3c = 0xc;
    }
    else {
      local_3c = 4;
    }
    local_38 = local_3c;
    (**(code **)(*local_30 + 0x98))(local_30,local_48,local_3c,local_50,local_60,&local_64,param_4);
  }
  return local_60[0] + local_64;
}



// FUNCTION 143b4fbb0 FUN_143b4fbb0 body=380 status=ok
// SIG undefined FUN_143b4fbb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b4fbb0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_428 [32];
  longlong *local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined1 local_3e8 [48];
  undefined1 local_3b8 [384];
  undefined1 local_238 [384];
  undefined1 local_b8 [160];
  ulonglong local_18;
  
  local_3f0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_428;
  local_408 = param_2;
  FUN_143a8aad0(local_238);
  FUN_143a8aad0(local_3b8);
  (**(code **)(*local_408 + 0x58))(local_408,local_238);
  (**(code **)(*local_408 + 0x50))(local_408,local_3b8);
  FUN_143a8ac30(local_3e8);
  (**(code **)(*param_2 + 0x20))(param_2,local_3e8);
  FUN_143b51b20(local_3e8,local_b8,0x9d);
  cVar1 = FUN_143b539f0(local_b8,param_4);
  if (cVar1 == '\0') {
    local_400 = 0;
    FUN_143a8dc60(local_3e8);
    FUN_143a8acf0(local_3b8);
    FUN_143a8acf0(local_238);
  }
  else {
    uVar2 = FUN_143b51c90(local_b8);
    local_3f8 = FUN_143b50500(uVar2,local_3b8,param_4);
    FUN_143a8dc60(local_3e8);
    FUN_143a8acf0(local_3b8);
    FUN_143a8acf0(local_238);
    local_400 = local_3f8;
  }
  return local_400;
}



// FUNCTION 143b4fd30 FUN_143b4fd30 body=433 status=ok
// SIG undefined FUN_143b4fd30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143b4fd30(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_268 [32];
  longlong local_248;
  longlong *local_240;
  longlong local_238;
  longlong local_230;
  undefined8 local_228;
  longlong local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  longlong local_200;
  undefined8 local_1f8;
  undefined1 local_1f0 [40];
  undefined1 local_1c8 [48];
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_1f8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_240 = param_2;
  FUN_143a8aad0(local_198);
  (**(code **)(*local_240 + 0x58))(local_240,local_198);
  local_238 = FUN_143a8d310(0x28);
  if (local_238 == 0) {
    local_230 = 0;
  }
  else {
    local_230 = FUN_143a8ac30(local_238);
  }
  local_200 = local_230;
  local_248 = local_230;
  if (local_230 == 0) {
    *param_4 = 7;
  }
  else {
    FUN_143acc590(local_230,0x40);
    local_228 = FUN_143a8d4f0(local_1c8,1,L"calendar=",9);
    local_218 = local_228;
    FUN_143a8e070(local_248,local_228);
    FUN_143a8dc60(local_1c8);
    uVar2 = FUN_143a8c200(local_198);
    iVar1 = FUN_143b51cf0(uVar2);
    local_210 = FUN_143a8d9f0(local_1f0,(&PTR_s_gregorian_145d0deb0)[iVar1],0xffffffff,0);
    local_208 = local_210;
    FUN_143a8e070(local_248,local_210);
    FUN_143a8dc60(local_1f0);
  }
  local_220 = local_248;
  FUN_143a8acf0(local_198);
  return local_220;
}



// FUNCTION 143b4fef0 FUN_143b4fef0 body=42 status=ok
// SIG undefined FUN_143b4fef0(void)

void FUN_143b4fef0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143b4ac10();
  FUN_143b4ff20(uVar1,param_1,param_2);
  return;
}



// FUNCTION 143b4ff20 FUN_143b4ff20 body=1493 status=ok
// SIG undefined FUN_143b4ff20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_143b4ff20(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_628 [32];
  undefined4 *local_608;
  longlong *local_5f8;
  longlong *local_5f0;
  undefined4 local_5e8 [2];
  longlong local_5e0;
  undefined8 *local_5d8;
  undefined8 *local_5d0;
  longlong *local_5c8;
  longlong *local_5c0;
  undefined8 *local_5b8;
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined8 *local_5a0;
  longlong *local_598;
  undefined8 local_590;
  undefined8 *local_588;
  longlong *local_580;
  undefined8 local_578;
  longlong *local_570;
  longlong *local_568;
  undefined8 *local_560;
  longlong *local_558;
  longlong *local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined1 local_538 [384];
  undefined1 local_3b8 [384];
  undefined1 local_238 [384];
  char local_b8 [160];
  ulonglong local_18;
  
  local_540 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_628;
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    FUN_143a8aad0(local_3b8);
    local_5f0 = (longlong *)0x0;
    cVar1 = FUN_143b537c0();
    if (cVar1 == '\0') {
      uVar3 = FUN_143a8c200(param_2);
      uVar4 = FUN_143b51cf0(uVar3);
      local_5f0 = (longlong *)FUN_143b50500(uVar4,param_2,param_3);
    }
    else {
      uVar3 = FUN_143b51c60(param_3);
      local_608 = param_3;
      local_5f0 = (longlong *)FUN_143acf5c0(uVar3,param_2,0xffffffff,local_3b8);
    }
    local_5f8 = (longlong *)0x0;
    cVar1 = FUN_143a8b0e0(*param_3);
    if ((cVar1 == '\0') && (local_5f0 != (longlong *)0x0)) {
      local_608 = (undefined4 *)((ulonglong)local_608 & 0xffffffff00000000);
      local_5e0 = _guard_xfg_dispatch_icall_nop
                            (local_5f0,0,&icu_53::UObject::RTTI_Type_Descriptor,
                             &icu_53::UnicodeString::RTTI_Type_Descriptor);
      if (local_5e0 == 0) {
        local_5f8 = local_5f0;
        local_5e0 = 0;
      }
      else {
        local_608 = (undefined4 *)0x0;
        FUN_143a8a690(local_538,&DAT_145af3922,0,0);
        FUN_143b0bb30(local_5e0,local_538);
        FUN_143a8aad0(local_238);
        local_550 = local_5f0;
        local_5c0 = local_5f0;
        if (local_5f0 == (longlong *)0x0) {
          local_5b0 = 0;
        }
        else {
          local_5b0 = (**(code **)*local_5f0)(local_5f0,1);
        }
        local_5f0 = (longlong *)0x0;
        uVar3 = FUN_143b51c60(param_3);
        local_608 = param_3;
        local_5f8 = (longlong *)FUN_143acf5c0(uVar3,local_538,0xffffffff,local_238);
        cVar1 = FUN_143a8b0e0(*param_3);
        if ((cVar1 != '\0') || (local_5f8 == (longlong *)0x0)) {
          local_5d0 = param_1;
          local_560 = param_1;
          if (param_1 == (undefined8 *)0x0) {
            local_578 = 0;
          }
          else {
            local_578 = (**(code **)*param_1)(param_1,1);
          }
          cVar1 = FUN_143a8b110(*param_3);
          if (cVar1 != '\0') {
            *param_3 = 5;
          }
          local_558 = (longlong *)0x0;
          FUN_143a8acf0(local_238);
          FUN_143a8acf0(local_538);
          FUN_143a8acf0(local_3b8);
          return local_558;
        }
        local_608 = (undefined4 *)((ulonglong)local_608 & 0xffffffff00000000);
        local_5e0 = _guard_xfg_dispatch_icall_nop
                              (local_5f8,0,&icu_53::Calendar::RTTI_Type_Descriptor,
                               &icu_53::UnicodeString::RTTI_Type_Descriptor);
        if (local_5e0 != 0) {
          *param_3 = 2;
          local_568 = local_5f8;
          local_5c8 = local_5f8;
          if (local_5f8 == (longlong *)0x0) {
            local_5a8 = 0;
          }
          else {
            local_5a8 = (**(code **)*local_5f8)(local_5f8,1);
          }
          local_5b8 = param_1;
          local_5a0 = param_1;
          if (param_1 == (undefined8 *)0x0) {
            local_590 = 0;
          }
          else {
            local_590 = (**(code **)*param_1)(param_1,1);
          }
          local_580 = (longlong *)0x0;
          FUN_143a8acf0(local_238);
          FUN_143a8acf0(local_538);
          FUN_143a8acf0(local_3b8);
          return local_580;
        }
        uVar3 = (**(code **)(*local_5f8 + 0xb0))(local_5f8);
        FUN_143b556f0(local_5f8,param_2,uVar3,param_3);
        local_5e8[0] = 0;
        local_608 = local_5e8;
        FUN_143a8b730(local_538,"calendar",local_b8,0x9d);
        cVar1 = FUN_143a8b110(local_5e8[0]);
        if ((cVar1 != '\0') &&
           (iVar2 = _guard_xfg_dispatch_icall_nop(local_b8,"iso8601"), iVar2 == 0)) {
          FUN_143b55340(local_5f8,2);
          FUN_143b553b0(local_5f8,4);
        }
        FUN_143a8acf0(local_238);
        FUN_143a8acf0(local_538);
      }
      FUN_143b4e8a0(local_5f8,param_1);
      uVar4 = FUN_143b52670();
      FUN_143b55580(local_5f8,uVar4,param_3);
      local_570 = local_5f8;
      FUN_143a8acf0(local_3b8);
      local_598 = local_570;
    }
    else {
      local_5d8 = param_1;
      local_588 = param_1;
      if (param_1 == (undefined8 *)0x0) {
        local_548 = 0;
      }
      else {
        local_548 = (**(code **)*param_1)(param_1,1);
      }
      cVar1 = FUN_143a8b110(*param_3);
      if (cVar1 != '\0') {
        *param_3 = 5;
      }
      local_598 = (longlong *)0x0;
      FUN_143a8acf0(local_3b8);
    }
  }
  else {
    local_598 = (longlong *)0x0;
  }
  return local_598;
}



// FUNCTION 143b50500 FUN_143b50500 body=2014 status=ok
// SIG undefined FUN_143b50500(void)

undefined8 FUN_143b50500(undefined4 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 local_1b8;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_e8;
  
  local_1b8 = 0;
  switch(param_1) {
  case 0:
    lVar1 = FUN_143a8d310(0x290);
    if (lVar1 == 0) {
      local_198 = 0;
    }
    else {
      local_198 = FUN_143b5c2d0(lVar1,param_2,param_3);
    }
    local_1b8 = local_198;
    break;
  case 1:
    lVar1 = FUN_143a8d310(0x290);
    if (lVar1 == 0) {
      local_188 = 0;
    }
    else {
      local_188 = FUN_143b99770(lVar1,param_2,param_3);
    }
    local_1b8 = local_188;
    break;
  case 2:
    lVar1 = FUN_143a8d310(0x290);
    if (lVar1 == 0) {
      local_178 = 0;
    }
    else {
      local_178 = FUN_143b98db0(lVar1,param_2,param_3);
    }
    local_1b8 = local_178;
    break;
  case 3:
    lVar1 = FUN_143a8d310(0x290);
    if (lVar1 == 0) {
      local_168 = 0;
    }
    else {
      local_168 = FUN_143b99260(lVar1,param_2,param_3);
    }
    local_1b8 = local_168;
    break;
  case 4:
    lVar1 = FUN_143a8d310(0x268);
    if (lVar1 == 0) {
      local_158 = 0;
    }
    else {
      local_158 = FUN_143b9c160(lVar1,param_2,param_3);
    }
    local_1b8 = local_158;
    break;
  case 5:
    lVar1 = FUN_143a8d310(0x270);
    if (lVar1 == 0) {
      local_138 = 0;
    }
    else {
      local_138 = FUN_143b99e60(lVar1,param_2,param_3,1);
    }
    local_1b8 = local_138;
    break;
  case 6:
  case 0x11:
    lVar1 = FUN_143a8d310(0x270);
    if (lVar1 == 0) {
      local_128 = 0;
    }
    else {
      local_128 = FUN_143b99e60(lVar1,param_2,param_3,0);
    }
    local_1b8 = local_128;
    break;
  case 7:
    lVar1 = FUN_143a8d310(0x268);
    if (lVar1 == 0) {
      local_108 = 0;
    }
    else {
      local_108 = FUN_143b9b1f0(lVar1,param_2,param_3);
    }
    local_1b8 = local_108;
    break;
  case 8:
    lVar1 = FUN_143a8d310(0x278);
    if (lVar1 == 0) {
      local_f8 = 0;
    }
    else {
      local_f8 = FUN_143b9d6b0(lVar1,param_2,param_3);
    }
    local_1b8 = local_f8;
    break;
  case 9:
    lVar1 = FUN_143a8d310(0x268);
    if (lVar1 == 0) {
      local_e8 = 0;
    }
    else {
      local_e8 = FUN_143b9c7e0(lVar1,param_2,param_3);
    }
    local_1b8 = local_e8;
    break;
  case 10:
    lVar1 = FUN_143a8d310(0x268);
    if (lVar1 == 0) {
      local_120 = 0;
    }
    else {
      local_120 = FUN_143b9f310(lVar1,param_2,param_3);
    }
    local_1b8 = local_120;
    break;
  case 0xb:
    lVar1 = FUN_143a8d310(0x270);
    if (lVar1 == 0) {
      local_190 = 0;
    }
    else {
      local_190 = FUN_143b9ffd0(lVar1,param_2,param_3,0);
    }
    local_1b8 = local_190;
    break;
  case 0xc:
    lVar1 = FUN_143a8d310(0x270);
    if (lVar1 == 0) {
      local_170 = 0;
    }
    else {
      local_170 = FUN_143b9ffd0(lVar1,param_2,param_3,1);
    }
    local_1b8 = local_170;
    break;
  case 0xd:
    lVar1 = FUN_143a8d310(0x290);
    if (lVar1 == 0) {
      local_150 = 0;
    }
    else {
      local_150 = FUN_143b5c2d0(lVar1,param_2,param_3);
    }
    local_1b8 = local_150;
    FUN_143b55340(local_150,2);
    FUN_143b553b0(local_150,4);
    break;
  case 0xe:
    lVar1 = FUN_143a8d310(0x278);
    if (lVar1 == 0) {
      local_130 = 0;
    }
    else {
      local_130 = FUN_143b9f7e0(lVar1,param_2,param_3);
    }
    local_1b8 = local_130;
    break;
  case 0xf:
    lVar1 = FUN_143a8d310(0x270);
    if (lVar1 == 0) {
      local_118 = 0;
    }
    else {
      local_118 = FUN_143b99e60(lVar1,param_2,param_3,2);
    }
    local_1b8 = local_118;
    break;
  case 0x10:
    lVar1 = FUN_143a8d310(0x270);
    if (lVar1 == 0) {
      local_148 = 0;
    }
    else {
      local_148 = FUN_143b99e60(lVar1,param_2,param_3,3);
    }
    local_1b8 = local_148;
    break;
  default:
    *param_3 = 0x10;
  }
  return local_1b8;
}



// FUNCTION 143b50d30 FUN_143b50d30 body=62 status=ok
// SIG undefined FUN_143b50d30(void)

void FUN_143b50d30(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143b50d70 FUN_143b50d70 body=1092 status=ok
// SIG undefined FUN_143b50d70(void)

int FUN_143b50d70(longlong *param_1,double param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  int local_48;
  int local_44;
  int local_40;
  
  cVar2 = FUN_143a8b0e0(*param_4);
  if (cVar2 == '\0') {
    local_48 = 0;
    dVar4 = (double)FUN_143b52840(param_1,param_4);
    if (dVar4 < param_2) {
      local_44 = 1;
      while (cVar2 = FUN_143a8b110(*param_4), iVar1 = local_48, cVar2 != '\0') {
        FUN_143b55580(param_1,dVar4,param_4);
        (**(code **)(*param_1 + 0x28))(param_1,param_3,local_44,param_4);
        dVar5 = (double)FUN_143b52840(param_1,param_4);
        if (dVar5 == param_2) {
          return local_44;
        }
        if (param_2 < dVar5) break;
        if (local_44 < 0x7fffffff) {
          local_48 = local_44;
          local_44 = local_44 << 1;
          if (local_44 < 0) {
            local_44 = 0x7fffffff;
          }
        }
        else {
          *param_4 = 1;
        }
      }
      while ((local_48 = iVar1, 1 < local_44 - local_48 &&
             (cVar2 = FUN_143a8b110(*param_4), cVar2 != '\0'))) {
        iVar3 = local_48 + (local_44 - local_48) / 2;
        FUN_143b55580(param_1,dVar4,param_4);
        (**(code **)(*param_1 + 0x28))(param_1,param_3,iVar3,param_4);
        dVar5 = (double)FUN_143b52840(param_1,param_4);
        if (dVar5 == param_2) {
          return iVar3;
        }
        iVar1 = iVar3;
        if (param_2 < dVar5) {
          iVar1 = local_48;
          local_44 = iVar3;
        }
      }
    }
    else if (param_2 < dVar4) {
      local_40 = -1;
      while (cVar2 = FUN_143a8b110(*param_4), iVar1 = local_48, cVar2 != '\0') {
        FUN_143b55580(param_1,dVar4,param_4);
        (**(code **)(*param_1 + 0x28))(param_1,param_3,local_40,param_4);
        dVar5 = (double)FUN_143b52840(param_1,param_4);
        if (dVar5 == param_2) {
          return local_40;
        }
        if (dVar5 < param_2) break;
        local_48 = local_40;
        local_40 = local_40 << 1;
        if (local_40 == 0) {
          *param_4 = 1;
        }
      }
      while ((local_48 = iVar1, 1 < local_48 - local_40 &&
             (cVar2 = FUN_143a8b110(*param_4), cVar2 != '\0'))) {
        iVar3 = local_48 + (local_40 - local_48) / 2;
        FUN_143b55580(param_1,dVar4,param_4);
        (**(code **)(*param_1 + 0x28))(param_1,param_3,iVar3,param_4);
        dVar5 = (double)FUN_143b52840(param_1,param_4);
        if (dVar5 == param_2) {
          return iVar3;
        }
        iVar1 = iVar3;
        if (dVar5 < param_2) {
          iVar1 = local_48;
          local_40 = iVar3;
        }
      }
    }
    FUN_143b55580(param_1,dVar4,param_4);
    (**(code **)(*param_1 + 0x28))(param_1,param_3,local_48,param_4);
    cVar2 = FUN_143a8b0e0(*param_4);
    if (cVar2 != '\0') {
      local_48 = 0;
    }
  }
  else {
    local_48 = 0;
  }
  return local_48;
}



// FUNCTION 143b511c0 FUN_143b511c0 body=216 status=ok
// SIG undefined FUN_143b511c0(void)

int FUN_143b511c0(int param_1)

{
  int local_20;
  uint local_1c;
  uint local_18;
  
  if (param_1 < 0x7b9) {
    local_18 = (uint)(-(param_1 + -0x7b8) % 0x41 < 0x21);
    local_20 = local_18 + ((param_1 + -0x7b8) / 0x41 + -1) * 2;
  }
  else {
    local_1c = (uint)(0x1f < (param_1 + -0x7b9) % 0x41);
    local_20 = local_1c + ((param_1 + -0x7b9) / 0x41) * 2;
  }
  return param_1 + -0x243 + local_20;
}



// FUNCTION 143b512a0 FUN_143b512a0 body=38 status=ok
// SIG undefined FUN_143b512a0(void)

void FUN_143b512a0(double param_1,double param_2)

{
  FUN_143a917b0(param_1 / param_2);
  return;
}



// FUNCTION 143b512d0 FUN_143b512d0 body=108 status=ok
// SIG undefined FUN_143b512d0(void)

undefined4 FUN_143b512d0(longlong param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 local_18;
  
  cVar1 = FUN_143a8b110(*param_3);
  if (cVar1 != '\0') {
    FUN_143b4eb20(param_1,param_3);
  }
  cVar1 = FUN_143a8b110(*param_3);
  if (cVar1 == '\0') {
    local_18 = 0;
  }
  else {
    local_18 = *(undefined4 *)(param_1 + 0xc + (longlong)param_2 * 4);
  }
  return local_18;
}



// FUNCTION 143b51340 FUN_143b51340 body=532 status=ok
// SIG undefined FUN_143b51340(void)

int FUN_143b51340(longlong *param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_30;
  int local_2c;
  
  if (param_3 != param_4) {
    if (param_3 < param_4) {
      local_30 = 1;
    }
    else {
      local_30 = -1;
    }
    cVar1 = FUN_143a8b0e0(*param_5);
    if (cVar1 == '\0') {
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1);
      if (plVar3 == (longlong *)0x0) {
        *param_5 = 7;
      }
      else {
        FUN_143b4eb20(plVar3,param_5);
        FUN_143b55390(plVar3,1);
        (**(code **)(*plVar3 + 0xe8))(plVar3,param_2,local_30 < 0,param_5);
        FUN_143b55270(plVar3,param_2,param_3);
        iVar2 = FUN_143b512d0(plVar3,param_2,param_5);
        local_2c = param_3;
        if ((((iVar2 == param_3) || (param_2 == 4)) || (local_30 < 1)) &&
           (cVar1 = FUN_143a8b0e0(*param_5), cVar1 == '\0')) {
          do {
            iVar4 = local_2c + local_30;
            (**(code **)(*plVar3 + 0x28))(plVar3,param_2,local_30,param_5);
            iVar2 = FUN_143b512d0(plVar3,param_2,param_5);
            if ((iVar2 != iVar4) || (cVar1 = FUN_143a8b0e0(*param_5), cVar1 != '\0')) break;
            local_2c = iVar4;
          } while (iVar4 != param_4);
        }
        param_3 = local_2c;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)*plVar3)(plVar3,1);
        }
      }
    }
  }
  return param_3;
}



// FUNCTION 143b51560 FUN_143b51560 body=837 status=ok
// SIG undefined FUN_143b51560(void)

undefined4 FUN_143b51560(longlong *param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  switch(param_2) {
  case 5:
    cVar1 = FUN_143a8b0e0(*param_3);
    if (cVar1 == '\0') {
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1);
      if (plVar4 == (longlong *)0x0) {
        *param_3 = 7;
        uVar2 = 0;
      }
      else {
        FUN_143b55390(plVar4,1);
        (**(code **)(*plVar4 + 0xe8))(plVar4,param_2,0,param_3);
        uVar2 = FUN_143b512d0(plVar4,2,param_3);
        uVar3 = FUN_143b512d0(plVar4,0x13,param_3);
        uVar2 = (**(code **)(*param_1 + 0x108))(param_1,uVar3,uVar2);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)*plVar4)(plVar4,1);
        }
      }
    }
    else {
      uVar2 = 0;
    }
    break;
  case 6:
    cVar1 = FUN_143a8b0e0(*param_3);
    if (cVar1 == '\0') {
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1);
      if (plVar4 == (longlong *)0x0) {
        *param_3 = 7;
        uVar2 = 0;
      }
      else {
        FUN_143b55390(plVar4,1);
        (**(code **)(*plVar4 + 0xe8))(plVar4,param_2,0,param_3);
        uVar2 = FUN_143b512d0(plVar4,0x13,param_3);
        uVar2 = (**(code **)(*param_1 + 0x110))(param_1,uVar2);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)*plVar4)(plVar4,1);
        }
      }
    }
    else {
      uVar2 = 0;
    }
    break;
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x12:
  case 0x14:
  case 0x15:
    uVar2 = (**(code **)(*param_1 + 0x70))(param_1,param_2);
    break;
  default:
    uVar2 = (**(code **)(*param_1 + 0x70))(param_1,param_2);
    uVar3 = (**(code **)(*param_1 + 0x90))(param_1,param_2);
    uVar2 = FUN_143b51340(param_1,param_2,uVar3,uVar2,param_3);
  }
  return uVar2;
}



// FUNCTION 143b518f0 FUN_143b518f0 body=325 status=ok
// SIG undefined FUN_143b518f0(void)

int FUN_143b518f0(longlong *param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int local_38;
  int local_30;
  
  local_38 = (**(code **)(*param_1 + 0x80))(param_1,param_2);
  iVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_2);
  local_30 = local_38;
  if (local_38 != iVar2) {
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
    if (puVar4 == (undefined8 *)0x0) {
      *param_3 = 7;
      local_30 = 0;
    }
    else {
      FUN_143b55390(puVar4,1);
      do {
        FUN_143b55270(puVar4,param_2,local_38);
        iVar3 = FUN_143b512d0(puVar4,param_2,param_3);
        if (iVar3 != local_38) break;
        local_30 = local_38;
        local_38 = local_38 + -1;
      } while (iVar2 <= local_38);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      cVar1 = FUN_143a8b0e0(*param_3);
      if (cVar1 != '\0') {
        local_30 = 0;
      }
    }
  }
  return local_30;
}



// FUNCTION 143b51a40 FUN_143b51a40 body=218 status=ok
// SIG undefined FUN_143b51a40(void)

undefined8 FUN_143b51a40(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (*(undefined8 *)(param_1 + 0xf0),0,&icu_53::TimeZone::RTTI_Type_Descriptor,
                     &icu_53::OlsonTimeZone::RTTI_Type_Descriptor,0);
  if ((((lVar1 == 0) &&
       (lVar1 = _guard_xfg_dispatch_icall_nop
                          (*(undefined8 *)(param_1 + 0xf0),0,&icu_53::TimeZone::RTTI_Type_Descriptor
                           ,&icu_53::SimpleTimeZone::RTTI_Type_Descriptor,0), lVar1 == 0)) &&
      (lVar1 = _guard_xfg_dispatch_icall_nop
                         (*(undefined8 *)(param_1 + 0xf0),0,&icu_53::TimeZone::RTTI_Type_Descriptor,
                          &icu_53::RuleBasedTimeZone::RTTI_Type_Descriptor,0), lVar1 == 0)) &&
     (lVar1 = _guard_xfg_dispatch_icall_nop
                        (*(undefined8 *)(param_1 + 0xf0),0,&icu_53::TimeZone::RTTI_Type_Descriptor,
                         &icu_53::VTimeZone::RTTI_Type_Descriptor,0), lVar1 == 0)) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0xf0);
}



// FUNCTION 143b51b20 FUN_143b51b20 body=309 status=ok
// SIG undefined FUN_143b51b20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b51b20(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  FUN_143a8d4f0(local_40,1,L"calendar=",0xffffffff);
  local_50 = FUN_143a904f0(local_40);
  local_54 = 0;
  local_58 = FUN_143acddd0(param_1,0x3d);
  sVar2 = FUN_143a8e4f0(param_1,0);
  if (sVar2 == 0x40) {
    local_60 = local_50;
    local_68 = 0;
    cVar1 = FUN_143b4eac0(param_1,1,local_58 + 1,local_40);
    if (cVar1 == '\0') {
      uVar3 = FUN_143a904f0(param_1);
      local_60 = 0;
      local_68 = param_3;
      local_54 = FUN_143a8f880(param_1,local_58 + 1,uVar3,param_2);
    }
  }
  *(undefined1 *)(param_2 + local_54) = 0;
  FUN_143a8dc60(local_40);
  return;
}



// FUNCTION 143b51c60 FUN_143b51c60 body=45 status=ok
// SIG undefined FUN_143b51c60(void)

undefined8 FUN_143b51c60(undefined8 param_1)

{
  FUN_143aa29a0(&DAT_146bc7f28,FUN_143b53570,param_1);
  return DAT_146bc7f20;
}



// FUNCTION 143b51c90 FUN_143b51c90 body=96 status=ok
// SIG undefined FUN_143b51c90(void)

int FUN_143b51c90(undefined8 param_1)

{
  int iVar1;
  int local_18;
  
  local_18 = 0;
  while( true ) {
    if ((&PTR_s_gregorian_145d0deb0)[local_18] == (undefined *)0x0) {
      return -1;
    }
    iVar1 = FUN_143ab83b0(param_1,(&PTR_s_gregorian_145d0deb0)[local_18]);
    if (iVar1 == 0) break;
    local_18 = local_18 + 1;
  }
  return local_18;
}



// FUNCTION 143b51cf0 FUN_143b51cf0 body=822 status=ok
// SIG undefined FUN_143b51cf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143b51f58) */

int FUN_143b51cf0(undefined8 param_1)

{
  char cVar1;
  undefined1 auStack_2c8 [32];
  int *local_2a8;
  int local_298;
  int local_294;
  int local_290;
  int local_28c;
  undefined1 local_288 [8];
  longlong local_280;
  longlong local_278;
  int local_270;
  int local_26c;
  ulonglong local_268;
  ulonglong local_260;
  ulonglong local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined1 local_240 [40];
  undefined1 local_218 [256];
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  local_298 = 0;
  local_294 = -1;
  local_270 = FUN_143a967e0(param_1,local_218,0xff,&local_298);
  cVar1 = FUN_143a8b0e0(local_298);
  if (cVar1 == '\0') {
    local_260 = (ulonglong)local_270;
    if (0xff < local_260) {
                    /* WARNING: Subroutine does not return */
      __report_rangecheckfailure();
    }
    local_218[local_260] = 0;
    local_2a8 = &local_298;
    local_26c = FUN_143a96b00(local_218,"calendar",local_240,0x1f);
    cVar1 = FUN_143a8b110(local_298);
    if (cVar1 != '\0') {
      local_258 = (ulonglong)local_26c;
      if (0x1f < local_258) {
                    /* WARNING: Subroutine does not return */
        __report_rangecheckfailure();
      }
      local_240[local_258] = 0;
      local_294 = FUN_143b51c90(local_240);
      if (local_294 != -1) {
        return local_294;
      }
    }
    local_298 = 0;
    local_290 = 0;
    local_290 = FUN_143a96880(local_218,local_288,3,&local_298);
    if (local_290 == 0) {
      FUN_143e1c720(param_1,local_118,0xff,&local_298);
      local_290 = FUN_143a96880(local_118,local_288,3,&local_298);
    }
    cVar1 = FUN_143a8b0e0(local_298);
    if (cVar1 == '\0') {
      local_268 = (ulonglong)local_290;
      if (3 < local_268) {
                    /* WARNING: Subroutine does not return */
        __report_rangecheckfailure();
      }
      local_288[local_268] = 0;
      local_280 = FUN_143aa56e0(0,"supplementalData",&local_298);
      FUN_143aa37c0(local_280,"calendarPreferenceData",local_280,&local_298);
      local_278 = FUN_143aa37c0(local_280,local_288,0,&local_298);
      if ((local_298 == 2) && (local_280 != 0)) {
        local_298 = 0;
        local_278 = FUN_143aa37c0(local_280,&DAT_145cf4668,0,&local_298);
      }
      local_250 = 0;
      local_240[0] = 0;
      cVar1 = FUN_143a8b110(local_298);
      if ((cVar1 != '\0') && (local_278 != 0)) {
        local_28c = 0;
        local_248 = FUN_143aa4da0(local_278,0,&local_28c,&local_298);
        if (local_28c < 0x20) {
          FUN_143ab5770(local_248,local_240,local_28c);
          local_240[local_28c] = 0;
          local_294 = FUN_143b51c90(local_240);
        }
      }
      FUN_143aa2ef0(local_278);
      FUN_143aa2ef0(local_280);
      if (local_294 == -1) {
        local_294 = 0;
      }
    }
    else {
      local_294 = 0;
    }
  }
  else {
    local_294 = 0;
  }
  return local_294;
}



// FUNCTION 143b52030 FUN_143b52030 body=15 status=ok
// SIG undefined FUN_143b52030(void)

longlong FUN_143b52030(longlong param_1)

{
  return param_1 + 0x1a;
}



// FUNCTION 143b52040 FUN_143b52040 body=393 status=ok
// SIG undefined FUN_143b52040(void)

undefined4 FUN_143b52040(longlong param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    if ((param_2 < 1) || (7 < param_2)) {
      *param_3 = 1;
      local_10 = 0;
    }
    else if (*(int *)(param_1 + 0x108) == *(int *)(param_1 + 0x110)) {
      if (param_2 == *(int *)(param_1 + 0x108)) {
        if (*(int *)(param_1 + 0x10c) == 0) {
          local_18 = 1;
          local_10 = local_18;
        }
        else {
          local_18 = 2;
          local_10 = local_18;
        }
      }
      else {
        local_10 = 0;
      }
    }
    else {
      if (*(int *)(param_1 + 0x108) < *(int *)(param_1 + 0x110)) {
        if ((param_2 < *(int *)(param_1 + 0x108)) || (*(int *)(param_1 + 0x110) < param_2)) {
          return 0;
        }
      }
      else if ((*(int *)(param_1 + 0x110) < param_2) && (param_2 < *(int *)(param_1 + 0x108))) {
        return 0;
      }
      if (param_2 == *(int *)(param_1 + 0x108)) {
        if (*(int *)(param_1 + 0x10c) == 0) {
          local_14 = 1;
          local_10 = local_14;
        }
        else {
          local_14 = 2;
          local_10 = local_14;
        }
      }
      else if (param_2 == *(int *)(param_1 + 0x110)) {
        if (*(int *)(param_1 + 0x114) < 86400000) {
          local_10 = 3;
        }
        else {
          local_10 = 1;
        }
      }
      else {
        local_10 = 1;
      }
    }
  }
  else {
    local_10 = 0;
  }
  return local_10;
}



// FUNCTION 143b521d0 FUN_143b521d0 body=20 status=ok
// SIG undefined FUN_143b521d0(void)

undefined8 FUN_143b521d0(void)

{
  return 1;
}



// FUNCTION 143b521f0 FUN_143b521f0 body=13 status=ok
// SIG undefined FUN_143b521f0(void)

undefined * FUN_143b521f0(void)

{
  return &DAT_145d0df50;
}



// FUNCTION 143b52200 FUN_143b52200 body=17 status=ok
// SIG undefined FUN_143b52200(void)

undefined4 FUN_143b52200(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x100);
}



// FUNCTION 143b52220 FUN_143b52220 body=47 status=ok
// SIG undefined FUN_143b52220(void)

void FUN_143b52220(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0xf8))(param_1,param_2,1);
  return;
}



// FUNCTION 143b52250 FUN_143b52250 body=17 status=ok
// SIG undefined FUN_143b52250(void)

undefined4 FUN_143b52250(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x124);
}



// FUNCTION 143b52270 FUN_143b52270 body=17 status=ok
// SIG undefined FUN_143b52270(void)

undefined4 FUN_143b52270(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x120);
}



// FUNCTION 143b52290 FUN_143b52290 body=17 status=ok
// SIG undefined FUN_143b52290(void)

undefined4 FUN_143b52290(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x11c);
}



// FUNCTION 143b522b0 FUN_143b522b0 body=17 status=ok
// SIG undefined FUN_143b522b0(void)

undefined4 FUN_143b522b0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x118);
}



// FUNCTION 143b522d0 FUN_143b522d0 body=202 status=ok
// SIG undefined FUN_143b522d0(void)

ulonglong FUN_143b522d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,
                       undefined4 *param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_30 [48];
  
  plVar2 = (longlong *)FUN_143b51a40(param_1);
  if (plVar2 == (longlong *)0x0) {
    *param_4 = 0x10;
  }
  else {
    FUN_143b98930(local_30);
    cVar1 = (**(code **)(*plVar2 + 0x70))(plVar2,param_2,1,local_30);
    if (cVar1 != '\0') {
      uVar3 = FUN_143b381e0(local_30);
      *param_3 = uVar3;
      FUN_143b989a0(local_30);
      return 1;
    }
    *param_4 = 5;
    param_4 = (undefined4 *)FUN_143b989a0(local_30);
  }
  return (ulonglong)param_4 & 0xffffffffffffff00;
}



// FUNCTION 143b523a0 FUN_143b523a0 body=47 status=ok
// SIG undefined FUN_143b523a0(void)

void FUN_143b523a0(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0xf8))(param_1,param_2,2);
  return;
}



// FUNCTION 143b523d0 FUN_143b523d0 body=344 status=ok
// SIG undefined FUN_143b523d0(void)

ulonglong FUN_143b523d0(longlong *param_1,int param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  uint local_24;
  uint local_20;
  
  switch(param_2) {
  case 4:
    if (param_3 == 0) {
      cVar1 = FUN_143b52620(param_1);
      local_20 = (uint)(cVar1 == '\x01');
      local_24 = local_20;
    }
    else if (param_3 == 1) {
      local_24 = 1;
    }
    else {
      bVar2 = FUN_143b52620(param_1);
      iVar3 = (**(code **)(*param_1 + 0xf0))(param_1,5,param_3);
      if (param_3 == 2) {
        local_24 = (int)(iVar3 + (7 - (uint)bVar2)) / 7;
      }
      else {
        local_24 = (int)(iVar3 + (0xd - (uint)bVar2)) / 7;
      }
    }
    uVar4 = (ulonglong)local_24;
    break;
  default:
    uVar4 = (**(code **)(*param_1 + 0xf0))(param_1,param_2,param_3);
    break;
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x12:
  case 0x14:
  case 0x15:
  case 0x16:
    uVar4 = (ulonglong)*(uint *)(&DAT_145d0e9d0 + (longlong)param_3 * 4 + (longlong)param_2 * 0x10);
  }
  return uVar4;
}



// FUNCTION 143b52550 FUN_143b52550 body=152 status=ok
// SIG undefined FUN_143b52550(void)

int FUN_143b52550(longlong param_1)

{
  int iVar1;
  int local_18;
  
  local_18 = 0;
  iVar1 = FUN_143b54150(param_1,&DAT_145d0e6d0);
  if (iVar1 == 7) {
    local_18 = FUN_143b536c0(param_1,7);
    local_18 = local_18 - *(int *)(param_1 + 0x100);
  }
  else if (iVar1 == 0x12) {
    local_18 = FUN_143b536c0(param_1,0x12);
    local_18 = local_18 + -1;
  }
  local_18 = local_18 % 7;
  if (local_18 < 0) {
    local_18 = local_18 + 7;
  }
  return local_18;
}



// FUNCTION 143b525f0 FUN_143b525f0 body=47 status=ok
// SIG undefined FUN_143b525f0(void)

void FUN_143b525f0(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0xf8))(param_1,param_2,3);
  return;
}



// FUNCTION 143b52620 FUN_143b52620 body=18 status=ok
// SIG undefined FUN_143b52620(void)

undefined1 FUN_143b52620(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x104);
}



// FUNCTION 143b52640 FUN_143b52640 body=44 status=ok
// SIG undefined FUN_143b52640(void)

void FUN_143b52640(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0xf8))(param_1,param_2,0);
  return;
}



// FUNCTION 143b52670 FUN_143b52670 body=14 status=ok
// SIG undefined FUN_143b52670(void)

void FUN_143b52670(void)

{
  FUN_143a91970();
  return;
}



// FUNCTION 143b52680 FUN_143b52680 body=313 status=ok
// SIG undefined FUN_143b52680(void)

int FUN_143b52680(longlong *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int local_18;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    local_18 = FUN_143b512d0(param_1,0x13,param_2);
    cVar1 = FUN_143a8b0e0(*param_2);
    if (cVar1 == '\0') {
      uVar3 = (**(code **)(*param_1 + 0xb0))(param_1);
      uVar2 = FUN_143b51c90(uVar3);
      switch(uVar2) {
      case 4:
        local_18 = local_18 + 0x26e;
        break;
      case 5:
      case 6:
      case 0xf:
      case 0x10:
      case 0x11:
        local_18 = FUN_143b52950(local_18);
        break;
      case 7:
        local_18 = local_18 + -0xeb0;
        break;
      case 8:
        local_18 = local_18 + -0xa4d;
        break;
      case 9:
        local_18 = local_18 + 0x4f;
        break;
      case 10:
        local_18 = local_18 + 0x11c;
        break;
      case 0xb:
        local_18 = local_18 + 8;
        break;
      case 0xc:
        local_18 = local_18 + -0x1574;
        break;
      case 0xe:
        local_18 = local_18 + -0x91d;
      }
    }
    else {
      local_18 = 0;
    }
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143b52800 FUN_143b52800 body=15 status=ok
// SIG undefined FUN_143b52800(void)

longlong FUN_143b52800(longlong param_1)

{
  return param_1 + 0x14;
}



// FUNCTION 143b52810 FUN_143b52810 body=34 status=ok
// SIG undefined FUN_143b52810(void)

void FUN_143b52810(undefined8 param_1,undefined8 param_2)

{
  FUN_143b52840(param_1,param_2);
  return;
}



// FUNCTION 143b52840 FUN_143b52840 body=108 status=ok
// SIG undefined FUN_143b52840(void)

undefined8 FUN_143b52840(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 8) == '\0') {
      FUN_143b55dc0(param_1,param_2);
    }
    cVar1 = FUN_143a8b0e0(*param_2);
    if (cVar1 == '\0') {
      uVar2 = *(undefined8 *)(param_1 + 0xe0);
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



// FUNCTION 143b528b0 FUN_143b528b0 body=18 status=ok
// SIG undefined FUN_143b528b0(void)

undefined8 FUN_143b528b0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



// FUNCTION 143b528d0 FUN_143b528d0 body=119 status=ok
// SIG undefined FUN_143b528d0(void)

undefined4 FUN_143b528d0(longlong param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    if (param_2 == *(int *)(param_1 + 0x108)) {
      uVar2 = *(undefined4 *)(param_1 + 0x10c);
    }
    else if (param_2 == *(int *)(param_1 + 0x110)) {
      uVar2 = *(undefined4 *)(param_1 + 0x114);
    }
    else {
      *param_3 = 1;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143b52950 FUN_143b52950 body=214 status=ok
// SIG undefined FUN_143b52950(void)

int FUN_143b52950(int param_1)

{
  int local_20;
  uint local_1c;
  uint local_18;
  
  if (param_1 < 0x575) {
    local_18 = (uint)(-(param_1 + -0x574) % 0x43 < 0x22);
    local_20 = local_18 + ((param_1 + -0x574) / 0x43 + -1) * 2;
  }
  else {
    local_1c = (uint)(0x20 < (param_1 + -0x575) % 0x43);
    local_20 = local_1c + ((param_1 + -0x575) / 0x43) * 2;
  }
  return (param_1 + 0x243) - local_20;
}



// FUNCTION 143b52a30 FUN_143b52a30 body=214 status=ok
// SIG undefined FUN_143b52a30(void)

void FUN_143b52a30(undefined8 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 local_18;
  
  uVar2 = FUN_143b52290(param_1);
  FUN_143b53750(param_1,2,uVar2);
  uVar2 = FUN_143b52250(param_1);
  FUN_143b53750(param_1,5,uVar2);
  uVar2 = FUN_143b52270(param_1);
  FUN_143b53750(param_1,6,uVar2);
  local_18 = FUN_143b522b0(param_1);
  FUN_143b53750(param_1,0x13,local_18);
  bVar1 = local_18 < 1;
  if (bVar1) {
    local_18 = 1 - local_18;
  }
  FUN_143b53750(param_1,0,!bVar1);
  FUN_143b53750(param_1,1,local_18);
  return;
}



// FUNCTION 143b52b10 FUN_143b52b10 body=1515 status=ok
// SIG undefined FUN_143b52b10(void)

int FUN_143b52b10(longlong *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_68;
  int local_64;
  char local_5f;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_3c;
  undefined4 local_34;
  int local_30;
  
  if (((param_2 == 5) || (param_2 == 4)) || (param_2 == 8)) {
    local_5f = '\x01';
  }
  else {
    local_5f = '\0';
  }
  if (param_2 == 3) {
    uVar3 = (**(code **)(*param_1 + 0x118))(param_1);
    local_5c = FUN_143b536e0(param_1,0x11,uVar3);
    FUN_143b53750(param_1,0x13,local_5c);
  }
  else {
    local_5c = (**(code **)(*param_1 + 0x118))(param_1);
    FUN_143b53750(param_1,0x13,local_5c);
  }
  cVar1 = FUN_143b539a0(param_1,2);
  if (cVar1 == '\0') {
    local_3c = (**(code **)(*param_1 + 0x148))(param_1,local_5c);
  }
  else {
    local_3c = FUN_143b536c0(param_1,2);
  }
  if (local_5f == '\0') {
    local_34 = 0;
  }
  else {
    local_34 = local_3c;
  }
  local_58 = (**(code **)(*param_1 + 0x100))(param_1,local_5c,local_34,local_5f);
  if (param_2 == 5) {
    cVar1 = FUN_143b539a0(param_1,5);
    if (cVar1 == '\0') {
      local_30 = (**(code **)(*param_1 + 0x150))(param_1,local_5c,local_3c);
    }
    else {
      local_30 = FUN_143b536e0(param_1,5,1);
    }
    local_58 = local_58 + local_30;
  }
  else if (param_2 == 6) {
    iVar4 = FUN_143b536c0(param_1,6);
    local_58 = local_58 + iVar4;
  }
  else {
    iVar4 = FUN_143b52200(param_1);
    bVar2 = FUN_143b53c70((double)(local_58 + 1));
    local_64 = (uint)bVar2 - iVar4;
    if (local_64 < 0) {
      local_64 = local_64 + 7;
    }
    iVar5 = FUN_143b52550(param_1);
    local_68 = (1 - local_64) + iVar5;
    if (param_2 == 8) {
      if (local_68 < 1) {
        local_68 = local_68 + 7;
      }
      iVar4 = FUN_143b536e0(param_1,8,1);
      if (iVar4 < 0) {
        uVar3 = FUN_143b536e0(param_1,2,0);
        iVar5 = (**(code **)(*param_1 + 0x108))(param_1,local_5c,uVar3);
        iVar4 = (iVar5 - local_68) / 7 + 1 + iVar4;
      }
      else {
        iVar4 = iVar4 + -1;
      }
      local_68 = local_68 + iVar4 * 7;
    }
    else {
      if ((param_2 == 3) &&
         ((cVar1 = FUN_143b539a0(param_1,0x11), cVar1 == '\0' ||
          ((iVar6 = FUN_143b54150(param_1,&DAT_145d0e3d0), iVar6 != 0x11 &&
           (*(int *)((longlong)param_1 + 0xc4) != 1)))))) {
        iVar6 = FUN_143b536c0(param_1,3);
        iVar7 = (**(code **)(*param_1 + 0x100))(param_1,local_5c + 1,0,0);
        bVar2 = FUN_143b53c70((double)(iVar7 + 1));
        local_54 = (uint)bVar2 - iVar4;
        if (local_54 < 0) {
          local_54 = local_54 + 7;
        }
        if (iVar6 == 1) {
          if ((0 < local_54) && (bVar2 = FUN_143b52620(param_1), (int)(uint)bVar2 <= 7 - local_54))
          {
            bVar2 = FUN_143b53c70((double)(iVar7 + 1));
            local_64 = (uint)bVar2 - iVar4;
            if (local_64 < 0) {
              local_64 = local_64 + 7;
            }
            local_68 = (1 - local_64) + iVar5;
            local_58 = iVar7;
          }
        }
        else {
          iVar8 = (**(code **)(*param_1 + 0x90))(param_1,3);
          if (iVar8 <= iVar6) {
            bVar2 = FUN_143b52620(param_1);
            local_50 = local_68;
            if (7 - local_64 < (int)(uint)bVar2) {
              local_50 = local_68 + 7;
            }
            if (iVar7 < local_58 + local_50 + (iVar6 + -1) * 7) {
              local_58 = (**(code **)(*param_1 + 0x100))(param_1,local_5c + -1,0,0);
              bVar2 = FUN_143b53c70((double)(local_58 + 1));
              local_64 = (uint)bVar2 - iVar4;
              if (local_64 < 0) {
                local_64 = local_64 + 7;
              }
              local_68 = (1 - local_64) + iVar5;
            }
          }
        }
      }
      bVar2 = FUN_143b52620(param_1);
      if (7 - local_64 < (int)(uint)bVar2) {
        local_68 = local_68 + 7;
      }
      iVar4 = FUN_143b536c0(param_1,param_2);
      local_68 = local_68 + (iVar4 + -1) * 7;
    }
    local_58 = local_58 + local_68;
  }
  return local_58;
}



// FUNCTION 143b53100 FUN_143b53100 body=230 status=ok
// SIG undefined FUN_143b53100(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b53100(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  longlong *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_1a8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  local_1d0 = param_2;
  FUN_143a8aad0(local_198);
  (**(code **)(*local_1d0 + 0x50))(local_1d0,local_198);
  local_1d8 = FUN_143a8d310(0x290);
  if (local_1d8 == 0) {
    local_1c8 = 0;
  }
  else {
    local_1c8 = FUN_143b5c2d0(local_1d8,local_198,param_4);
  }
  local_1c0 = local_1c8;
  local_1b0 = local_1c8;
  local_1b8 = local_1c8;
  FUN_143a8acf0(local_198);
  return local_1b8;
}



// FUNCTION 143b531f0 FUN_143b531f0 body=617 status=ok
// SIG undefined FUN_143b531f0(void)

int FUN_143b531f0(longlong *param_1,int param_2,int param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_44;
  int local_3c;
  
  iVar3 = FUN_143b54150(param_1,&DAT_145d0df50);
  iVar4 = FUN_143b52550(param_1);
  local_44 = FUN_143b52200(param_1);
  iVar5 = (**(code **)(*param_1 + 0x100))(param_1,param_2,0,0);
  iVar6 = (**(code **)(*param_1 + 0x100))(param_1,param_2 + 1,0,0);
  bVar2 = FUN_143b53c70((double)(iVar5 + 1));
  local_44 = (uint)bVar2 - local_44;
  if (local_44 < 0) {
    local_44 = local_44 + 7;
  }
  FUN_143b53c70((double)(iVar6 + 1));
  bVar2 = FUN_143b52620(param_1);
  bVar1 = (int)(uint)bVar2 <= 7 - local_44;
  if (iVar3 == 3) {
    if (param_3 == 1) {
      if ((bVar1) && (iVar4 < local_44)) {
        param_2 = param_2 + -1;
      }
    }
    else {
      iVar3 = (**(code **)(*param_1 + 0x90))(param_1,3);
      if (iVar3 <= param_3) {
        local_3c = (param_3 + -1) * 7 + iVar4 + iVar5 + (7 - local_44);
        if (bVar1) {
          local_3c = local_3c + -7;
        }
        if (iVar6 <= local_3c + 1) {
          param_2 = param_2 + 1;
        }
      }
    }
  }
  else if (iVar3 == 5) {
    iVar3 = FUN_143b536c0(param_1,2);
    if ((iVar3 == 0) && (iVar3 = (**(code **)(*param_1 + 0x90))(param_1,3), iVar3 <= param_3)) {
      param_2 = param_2 + 1;
    }
    else if ((param_3 == 1) && (iVar3 = FUN_143b536c0(param_1,2), iVar3 != 0)) {
      param_2 = param_2 + -1;
    }
  }
  return param_2;
}



// FUNCTION 143b53470 FUN_143b53470 body=122 status=ok
// SIG undefined FUN_143b53470(void)

int FUN_143b53470(longlong *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x100))(param_1,param_2,param_3 + 1,1);
  iVar2 = (**(code **)(*param_1 + 0x100))(param_1,param_2,param_3,1);
  return iVar1 - iVar2;
}



// FUNCTION 143b534f0 FUN_143b534f0 body=113 status=ok
// SIG undefined FUN_143b534f0(void)

int FUN_143b534f0(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x100))(param_1,param_2 + 1,0,0);
  iVar2 = (**(code **)(*param_1 + 0x100))(param_1,param_2,0,0);
  return iVar1 - iVar2;
}



// FUNCTION 143b53570 FUN_143b53570 body=331 status=ok
// SIG undefined FUN_143b53570(void)

void FUN_143b53570(undefined4 *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_50;
  longlong *local_40;
  
  FUN_143b68380(9,FUN_143b563b0);
  lVar2 = FUN_143a8d310(0x200);
  if (lVar2 == 0) {
    local_40 = (longlong *)0x0;
  }
  else {
    local_40 = (longlong *)FUN_143b4dbc0(lVar2);
  }
  DAT_146bc7f20 = local_40;
  if (local_40 == (longlong *)0x0) {
    *param_1 = 7;
  }
  else {
    lVar2 = FUN_143a8d310(0x38);
    if (lVar2 == 0) {
      local_50 = 0;
    }
    else {
      local_50 = FUN_143b4d7b0(lVar2);
    }
    (**(code **)(*DAT_146bc7f20 + 0x40))(DAT_146bc7f20,local_50,param_1);
    cVar1 = FUN_143a8b0e0(*param_1);
    if (cVar1 != '\0') {
      if (DAT_146bc7f20 != (longlong *)0x0) {
        (**(code **)*DAT_146bc7f20)(DAT_146bc7f20,1);
      }
      DAT_146bc7f20 = (longlong *)0x0;
    }
  }
  return;
}



// FUNCTION 143b536c0 FUN_143b536c0 body=24 status=ok
// SIG undefined FUN_143b536c0(void)

undefined4 FUN_143b536c0(longlong param_1,int param_2)

{
  return *(undefined4 *)(param_1 + 0xc + (longlong)param_2 * 4);
}



// FUNCTION 143b536e0 FUN_143b536e0 body=72 status=ok
// SIG undefined FUN_143b536e0(void)

undefined4 FUN_143b536e0(longlong param_1,int param_2,undefined4 param_3)

{
  undefined4 local_18;
  
  local_18 = param_3;
  if (0 < *(int *)(param_1 + 0x80 + (longlong)param_2 * 4)) {
    local_18 = *(undefined4 *)(param_1 + 0xc + (longlong)param_2 * 4);
  }
  return local_18;
}



// FUNCTION 143b53730 FUN_143b53730 body=19 status=ok
// SIG undefined FUN_143b53730(void)

undefined8 FUN_143b53730(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



// FUNCTION 143b53750 FUN_143b53750 body=69 status=ok
// SIG undefined FUN_143b53750(void)

void FUN_143b53750(longlong param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc + (longlong)param_2 * 4) = param_3;
  *(undefined4 *)(param_1 + 0x80 + (longlong)param_2 * 4) = 1;
  *(undefined1 *)(param_1 + 0x68 + (longlong)param_2) = 1;
  return;
}



// FUNCTION 143b537a0 FUN_143b537a0 body=31 status=ok
// SIG undefined FUN_143b537a0(void)

void FUN_143b537a0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xe0) = param_2;
  return;
}



// FUNCTION 143b537c0 FUN_143b537c0 body=45 status=ok
// SIG undefined FUN_143b537c0(void)

bool FUN_143b537c0(void)

{
  char cVar1;
  
  cVar1 = FUN_143aa0050(&DAT_146bc7f28);
  return cVar1 == '\0';
}



// FUNCTION 143b537f0 FUN_143b537f0 body=385 status=ok
// SIG undefined FUN_143b537f0(void)

undefined1 FUN_143b537f0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = _guard_xfg_dispatch_icall_nop(param_2);
  uVar3 = _guard_xfg_dispatch_icall_nop(param_1);
  cVar1 = FUN_143ab1e10(uVar3,uVar2);
  if ((((((cVar1 != '\0') && (*(char *)(param_1 + 0xe8) == *(char *)(param_2 + 0xe8))) &&
        (*(int *)(param_1 + 0xf8) == *(int *)(param_2 + 0xf8))) &&
       ((*(int *)(param_1 + 0xfc) == *(int *)(param_2 + 0xfc) &&
        (*(int *)(param_1 + 0x100) == *(int *)(param_2 + 0x100))))) &&
      ((*(char *)(param_1 + 0x104) == *(char *)(param_2 + 0x104) &&
       ((*(int *)(param_1 + 0x108) == *(int *)(param_2 + 0x108) &&
        (*(int *)(param_1 + 0x10c) == *(int *)(param_2 + 0x10c))))))) &&
     ((*(int *)(param_1 + 0x110) == *(int *)(param_2 + 0x110) &&
      ((*(int *)(param_1 + 0x114) == *(int *)(param_2 + 0x114) &&
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x10))
                          (*(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_2 + 0xf0)),
       cVar1 != '\0')))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 143b53980 FUN_143b53980 body=18 status=ok
// SIG undefined FUN_143b53980(void)

undefined1 FUN_143b53980(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xe8);
}



// FUNCTION 143b539a0 FUN_143b539a0 body=65 status=ok
// SIG undefined FUN_143b539a0(void)

undefined1 FUN_143b539a0(longlong param_1,int param_2)

{
  undefined1 local_18;
  
  if ((*(char *)(param_1 + 0xb) == '\0') && (*(int *)(param_1 + 0x80 + (longlong)param_2 * 4) == 0))
  {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143b539f0 FUN_143b539f0 body=80 status=ok
// SIG undefined FUN_143b539f0(void)

ulonglong FUN_143b539f0(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    iVar2 = FUN_143b51c90(param_1);
    uVar3 = (ulonglong)(iVar2 != -1);
  }
  else {
    uVar3 = (ulonglong)(uint3)(cVar1 >> 7) << 8;
  }
  return uVar3;
}



// FUNCTION 143b53a40 FUN_143b53a40 body=235 status=ok
// SIG undefined FUN_143b53a40(void)

ulonglong FUN_143b53a40(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  byte local_38;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1);
    if (plVar3 == (longlong *)0x0) {
      *param_3 = 7;
      uVar2 = (ulonglong)param_3 & 0xffffffffffffff00;
    }
    else {
      local_38 = 0;
      FUN_143b55550(plVar3,param_2,param_3);
      cVar1 = FUN_143a8b110(*param_3);
      if (cVar1 != '\0') {
        local_38 = (**(code **)(*plVar3 + 200))(plVar3);
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)*plVar3)(plVar3,1);
      }
      uVar2 = (ulonglong)local_38;
    }
  }
  else {
    uVar2 = (ulonglong)(uint3)(cVar1 >> 7) << 8;
  }
  return uVar2;
}



// FUNCTION 143b53b30 FUN_143b53b30 body=314 status=ok
// SIG undefined FUN_143b53b30(void)

uint FUN_143b53b30(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 local_38;
  uint local_34;
  int local_2c;
  int local_28;
  undefined4 local_24;
  uint local_1c;
  bool local_18;
  
  local_38 = 0;
  local_24 = FUN_143b512d0(param_1,7,&local_38);
  local_1c = (**(code **)(*param_1 + 0xb8))(param_1,local_24,&local_38);
  cVar1 = FUN_143a8b110(local_38);
  uVar2 = 0;
  if (cVar1 != '\0') {
    local_34 = local_1c;
    if (local_1c == 0) {
      return 0;
    }
    if (local_1c == 1) {
      return 1;
    }
    uVar2 = local_1c;
    if ((1 < (int)local_1c) && ((int)local_1c < 4)) {
      local_28 = FUN_143b536c0(param_1,0x15);
      local_2c = (**(code **)(*param_1 + 0xc0))(param_1,local_24,&local_38);
      cVar1 = FUN_143a8b110(local_38);
      uVar2 = 0;
      if (cVar1 != '\0') {
        if (local_1c == 2) {
          local_18 = local_28 < local_2c;
        }
        else {
          local_18 = local_2c <= local_28;
        }
        local_18 = !local_18;
        return (uint)local_18;
      }
    }
  }
  return uVar2 & 0xffffff00;
}



// FUNCTION 143b53c70 FUN_143b53c70 body=95 status=ok
// SIG undefined FUN_143b53c70(void)

char FUN_143b53c70(double param_1)

{
  char cVar1;
  double dVar2;
  
  dVar2 = (double)FUN_143a917d0(param_1 + 1.0,0x401c000000000000);
  if ((char)(int)dVar2 < '\0') {
    cVar1 = '\b';
  }
  else {
    cVar1 = '\x01';
  }
  return (char)(int)dVar2 + cVar1;
}



// FUNCTION 143b53cd0 FUN_143b53cd0 body=26 status=ok
// SIG undefined FUN_143b53cd0(void)

double FUN_143b53cd0(int param_1)

{
  return (double)(param_1 + -0x253d8c) * 86400000.0;
}



// FUNCTION 143b53cf0 FUN_143b53cf0 body=62 status=ok
// SIG undefined FUN_143b53cf0(void)

int FUN_143b53cf0(longlong param_1,int param_2,int param_3)

{
  if (*(int *)(param_1 + 0x80 + (longlong)param_2 * 4) <
      *(int *)(param_1 + 0x80 + (longlong)param_3 * 4)) {
    param_2 = param_3;
  }
  return param_2;
}



// FUNCTION 143b53d30 FUN_143b53d30 body=110 status=ok
// SIG undefined FUN_143b53d30(void)

int FUN_143b53d30(longlong param_1,int param_2,int param_3,int param_4)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = param_4;
  for (local_18 = param_2; local_18 <= param_3; local_18 = local_18 + 1) {
    if (local_14 < *(int *)(param_1 + 0x80 + (longlong)local_18 * 4)) {
      local_14 = *(int *)(param_1 + 0x80 + (longlong)local_18 * 4);
    }
  }
  return local_14;
}



// FUNCTION 143b53da0 FUN_143b53da0 body=167 status=ok
// SIG undefined FUN_143b53da0(void)

void FUN_143b53da0(longlong *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0xa8))(param_1,param_2,param_3);
  iVar2 = (**(code **)(*param_1 + 0xa0))(param_1,param_2,param_3);
  if (iVar1 < *(int *)((longlong)param_1 + (longlong)param_2 * 4 + 0xc)) {
    FUN_143b55270(param_1,param_2,iVar1);
  }
  else if (*(int *)((longlong)param_1 + (longlong)param_2 * 4 + 0xc) < iVar2) {
    FUN_143b55270(param_1,param_2,iVar2);
  }
  return;
}



// FUNCTION 143b53e50 FUN_143b53e50 body=419 status=ok
// SIG undefined FUN_143b53e50(void)

void FUN_143b53e50(longlong *param_1,undefined4 param_2,char param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int local_18;
  
  FUN_143b55270(param_1,0x15,0);
  switch(param_2) {
  case 1:
  case 0x13:
    uVar1 = (**(code **)(*param_1 + 0x80))(param_1,6);
    FUN_143b55270(param_1,6,uVar1);
    break;
  case 3:
  case 4:
    local_18 = (int)param_1[0x20];
    if ((param_3 != '\0') && (local_18 = (local_18 + 6) % 7, local_18 < 1)) {
      local_18 = local_18 + 7;
    }
    FUN_143b55270(param_1,7,local_18);
    break;
  case 8:
    FUN_143b55270(param_1,5,1);
    uVar1 = FUN_143b512d0(param_1,7,param_4);
    FUN_143b55270(param_1,7,uVar1);
    break;
  case 0x11:
    uVar1 = (**(code **)(*param_1 + 0x80))(param_1,3);
    FUN_143b55270(param_1,3,uVar1);
  case 2:
    uVar1 = (**(code **)(*param_1 + 0x80))(param_1,5);
    FUN_143b55270(param_1,5,uVar1);
  }
  uVar1 = (**(code **)(*param_1 + 0x80))(param_1,param_2);
  FUN_143b55270(param_1,param_2,uVar1);
  return;
}



// FUNCTION 143b54040 FUN_143b54040 body=272 status=ok
// SIG undefined FUN_143b54040(void)

void FUN_143b54040(longlong param_1)

{
  int iVar1;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  *(undefined4 *)(param_1 + 0xdc) = 1;
  for (local_24 = 0; local_24 < 0x17; local_24 = local_24 + 1) {
    local_1c = 10000;
    local_20 = -1;
    for (local_28 = 0; local_28 < 0x17; local_28 = local_28 + 1) {
      if ((*(int *)(param_1 + 0xdc) < *(int *)(param_1 + 0x80 + (longlong)local_28 * 4)) &&
         (*(int *)(param_1 + 0x80 + (longlong)local_28 * 4) < local_1c)) {
        local_1c = *(int *)(param_1 + 0x80 + (longlong)local_28 * 4);
        local_20 = local_28;
      }
    }
    if (local_20 < 0) break;
    iVar1 = *(int *)(param_1 + 0xdc) + 1;
    *(int *)(param_1 + 0xdc) = iVar1;
    *(int *)(param_1 + 0x80 + (longlong)local_20 * 4) = iVar1;
  }
  *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
  return;
}



// FUNCTION 143b54150 FUN_143b54150 body=603 status=ok
// SIG undefined FUN_143b54150(void)

uint FUN_143b54150(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  uint local_38;
  int local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  uint local_1c;
  int local_18;
  
  local_2c = 0x17;
  local_34 = 0;
  do {
    if ((*(int *)(param_2 + (longlong)local_34 * 0x180) == -1) || (local_2c != 0x17)) {
      return local_2c;
    }
    local_18 = 0;
    local_30 = 0;
    while (*(int *)(param_2 + (longlong)local_34 * 0x180 + (longlong)local_30 * 0x20) != -1) {
      local_24 = 0;
      local_1c = (uint)(0x1f < *(int *)(param_2 + (longlong)local_34 * 0x180 +
                                       (longlong)local_30 * 0x20));
      local_28 = local_1c;
      while (*(int *)(param_2 + (longlong)local_34 * 0x180 + (longlong)local_30 * 0x20 +
                     (longlong)(int)local_28 * 4) != -1) {
        iVar1 = *(int *)(param_1 + 0x80 +
                        (longlong)
                        *(int *)(param_2 + (longlong)local_34 * 0x180 + (longlong)local_30 * 0x20 +
                                (longlong)(int)local_28 * 4) * 4);
        if (iVar1 == 0) goto LAB_143b541cd;
        if (local_24 < iVar1) {
          local_24 = iVar1;
        }
        local_28 = local_28 + 1;
      }
      if (local_18 < local_24) {
        local_38 = *(uint *)(param_2 + (longlong)local_34 * 0x180 + (longlong)local_30 * 0x20);
        uVar2 = local_38;
        if ((0x1f < (int)local_38) &&
           ((local_38 = local_38 & 0x1f, local_38 != 5 ||
            (uVar2 = local_2c, *(int *)(param_1 + 0x90) < *(int *)(param_1 + 0x94))))) {
          uVar2 = local_38;
        }
        local_2c = uVar2;
        if (local_2c == local_38) {
          local_18 = local_24;
        }
      }
LAB_143b541cd:
      local_30 = local_30 + 1;
    }
    local_34 = local_34 + 1;
  } while( true );
}


