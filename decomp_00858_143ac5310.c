// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143ac5310 FUN_143ac5310 body=243 status=ok
// SIG undefined FUN_143ac5310(void)

void FUN_143ac5310(longlong param_1,ushort *param_2)

{
  longlong lVar1;
  ushort uVar2;
  
  if (param_2 != (ushort *)0x0) {
    if ((param_1 == 0) || (*(longlong *)(param_1 + 8) == 0)) {
      *param_2 = 0;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 8);
      uVar2 = FUN_143b03740(lVar1 + 4);
      if (uVar2 < *param_2) {
        *param_2 = uVar2;
      }
      _guard_xfg_dispatch_icall_nop(param_2 + 1,(void *)(lVar1 + 6),(longlong)(int)(*param_2 - 2));
      if (*(char *)(lVar1 + 8) != '\0') {
        param_2[1] = *(ushort *)(lVar1 + 6) << 8 | *(ushort *)(lVar1 + 6) >> 8;
      }
    }
  }
  return;
}



// FUNCTION 143ac5410 FUN_143ac5410 body=148 status=ok
// SIG undefined FUN_143ac5410(void)

undefined8
FUN_143ac5410(undefined8 param_1,undefined8 param_2,char *param_3,longlong param_4,
             undefined8 param_5,undefined4 *param_6)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_6 == (undefined4 *)0x0) || (cVar1 = FUN_143a8b0e0(*param_6), cVar1 != '\0')) {
    return 0;
  }
  if ((param_3 != (char *)0x0) && ((*param_3 != '\0' && (param_4 != 0)))) {
    uVar2 = FUN_143ac3970(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar2;
  }
  *param_6 = 1;
  return 0;
}



// FUNCTION 143ac54b0 FUN_143ac54b0 body=137 status=ok
// SIG undefined FUN_143ac54b0(void)

undefined8 FUN_143ac54b0(undefined8 param_1,undefined8 param_2,char *param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_4 == (undefined4 *)0x0) || (cVar1 = FUN_143a8b0e0(*param_4), cVar1 != '\0')) {
    return 0;
  }
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    uVar2 = FUN_143ac3970(param_1,param_2,param_3,0,0,param_4);
    return uVar2;
  }
  *param_4 = 1;
  return 0;
}



// FUNCTION 143ac5540 FUN_143ac5540 body=88 status=ok
// SIG undefined FUN_143ac5540(void)

longlong FUN_143ac5540(int *param_1)

{
  longlong lVar1;
  
  if (*param_1 < 1) {
    lVar1 = FUN_143aa7a40(0x38);
    if (lVar1 == 0) {
      *param_1 = 7;
    }
    else {
      FUN_143ac55a0(lVar1);
      *(undefined1 *)(lVar1 + 0x18) = 1;
    }
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 143ac55a0 FUN_143ac55a0 body=44 status=ok
// SIG undefined FUN_143ac55a0(void)

void FUN_143ac55a0(void *param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,0x38);
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  return;
}



// FUNCTION 143ac55d0 IsGISInventoryGlobalSettingsAvailable body=46 status=ok
// SIG undefined IsGISInventoryGlobalSettingsAvailable(void)

bool FGISInventoryModule::IsGISInventoryGlobalSettingsAvailable(longlong param_1)

{
  return *(longlong *)(param_1 + 8) != 0;
}



// FUNCTION 143ac5600 FUN_143ac5600 body=73 status=ok
// SIG undefined FUN_143ac5600(void)

longlong FUN_143ac5600(longlong param_1)

{
  if ((param_1 != 0) && ((*(char *)(param_1 + 2) != -0x26 || (*(char *)(param_1 + 3) != '\'')))) {
    param_1 = param_1 + 8;
  }
  return param_1;
}



// FUNCTION 143ac5650 FUN_143ac5650 body=38 status=ok
// SIG undefined FUN_143ac5650(void)

void FUN_143ac5650(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143ac5600(param_2);
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}



// FUNCTION 143ac5680 FUN_143ac5680 body=66 status=ok
// SIG undefined FUN_143ac5680(void)

void FUN_143ac5680(void *param_1,void *param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)((longlong)param_1 + 0x18);
  _guard_xfg_dispatch_icall_nop(param_1,param_2,0x38);
  *(undefined1 *)((longlong)param_1 + 0x18) = uVar1;
  return;
}



// FUNCTION 143ac56d0 FUN_143ac56d0 body=67 status=ok
// SIG undefined FUN_143ac56d0(void)

void FUN_143ac56d0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_143aa7e00(param_1);
    if (*(char *)(param_1 + 0x18) == '\0') {
      FUN_143ac55a0(param_1);
    }
    else {
      FUN_143aa79f0(param_1);
    }
  }
  return;
}



// FUNCTION 143ac5720 FUN_143ac5720 body=81 status=ok
// SIG undefined FUN_143ac5720(void)

int FUN_143ac5720(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  
  if (((param_1 == 0) || (*(longlong *)(param_1 + 8) == 0)) || (*(int *)(param_1 + 0x30) < 0)) {
    iVar2 = -1;
  }
  else {
    uVar1 = FUN_143b036e0(*(undefined8 *)(param_1 + 8));
    iVar2 = *(int *)(param_1 + 0x30) - (uint)uVar1;
  }
  return iVar2;
}



// FUNCTION 143ac5780 FUN_143ac5780 body=64 status=ok
// SIG undefined FUN_143ac5780(void)

longlong FUN_143ac5780(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 8) == 0)) {
    lVar2 = 0;
  }
  else {
    uVar1 = FUN_143b036e0(*(undefined8 *)(param_1 + 8));
    lVar2 = (ulonglong)uVar1 + *(longlong *)(param_1 + 8);
  }
  return lVar2;
}



// FUNCTION 143ac57d0 FUN_143ac57d0 body=54 status=ok
// SIG undefined FUN_143ac57d0(void)

undefined8 * FUN_143ac57d0(undefined8 *param_1,undefined8 param_2)

{
  FUN_143a8abc0(param_1,param_2);
  *param_1 = icu_53::BreakIterator::vftable;
  return param_1;
}



// FUNCTION 143ac5810 FUN_143ac5810 body=90 status=ok
// SIG undefined FUN_143ac5810(void)

undefined8 *
FUN_143ac5810(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143ac57d0(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::RuleBasedBreakIterator::vftable;
  FUN_143aca060(param_1);
  FUN_143ac5c60(param_1,param_2);
  return param_1;
}



// FUNCTION 143ac5870 FUN_143ac5870 body=207 status=ok
// SIG undefined FUN_143ac5870(void)

undefined8 * FUN_143ac5870(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_20;
  
  FUN_143a9f350(param_1);
  *param_1 = icu_53::RuleBasedBreakIterator::vftable;
  FUN_143aca060(param_1);
  lVar2 = FUN_143a8d310(0xa8);
  if (lVar2 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143b08a80(lVar2,param_2,param_3);
  }
  param_1[0x2d] = local_20;
  cVar1 = FUN_143a8b0e0(*param_3);
  if ((cVar1 == '\0') && (param_1[0x2d] == 0)) {
    *param_3 = 7;
  }
  return param_1;
}



// FUNCTION 143ac5940 FUN_143ac5940 body=789 status=ok
// SIG undefined FUN_143ac5940(void)

void FUN_143ac5940(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::RuleBasedBreakIterator::vftable;
  if (((param_1[0x2a] != param_1[0x2b]) && (param_1[0x2a] != param_1[0x2c])) &&
     (puVar1 = (undefined8 *)param_1[0x2a], puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0x2a] = 0;
  puVar1 = (undefined8 *)param_1[0x2b];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0x2a] = 0;
  puVar1 = (undefined8 *)param_1[0x2c];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0x2c] = 0;
  FUN_143b07390(param_1[0x29]);
  if (param_1[0x2d] != 0) {
    FUN_143b08ee0(param_1[0x2d]);
    param_1[0x2d] = 0;
  }
  if (param_1[0x30] != 0) {
    FUN_143aa79f0(param_1[0x30]);
    param_1[0x30] = 0;
  }
  if (param_1[0x32] != 0) {
    puVar1 = (undefined8 *)param_1[0x32];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    param_1[0x32] = 0;
  }
  if (param_1[0x33] != 0) {
    puVar1 = (undefined8 *)param_1[0x33];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    param_1[0x33] = 0;
  }
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143ac5c60 FUN_143ac5c60 body=632 status=ok
// SIG undefined FUN_143ac5c60(void)

longlong * FUN_143ac5c60(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 local_48 [2];
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  
  if (param_1 != param_2) {
    (**(code **)(*param_1 + 200))(param_1);
    *(int *)(param_1 + 0x34) = (int)param_2[0x34];
    if (param_1[0x32] != 0) {
      local_40 = (undefined8 *)param_1[0x32];
      local_30 = local_40;
      if (local_40 == (undefined8 *)0x0) {
        local_28 = 0;
      }
      else {
        local_28 = (**(code **)*local_40)(local_40,1);
      }
      param_1[0x32] = 0;
    }
    local_48[0] = 0;
    lVar1 = FUN_143b07330(param_1[0x29],param_2[0x29],0,1,local_48);
    param_1[0x29] = lVar1;
    if ((param_1[0x2a] != param_1[0x2b]) && (param_1[0x2a] != param_1[0x2c])) {
      local_38 = (undefined8 *)param_1[0x2a];
      local_20 = local_38;
      if (local_38 == (undefined8 *)0x0) {
        local_18 = 0;
      }
      else {
        local_18 = (**(code **)*local_38)(local_38,1);
      }
    }
    param_1[0x2a] = 0;
    if (param_2[0x2a] != 0) {
      lVar1 = (**(code **)(*(longlong *)param_2[0x2a] + 0x38))(param_2[0x2a]);
      param_1[0x2a] = lVar1;
    }
    if (param_1[0x2d] != 0) {
      FUN_143b08ee0(param_1[0x2d]);
      param_1[0x2d] = 0;
    }
    if (param_2[0x2d] != 0) {
      lVar1 = FUN_143b08c20(param_2[0x2d]);
      param_1[0x2d] = lVar1;
    }
  }
  return param_1;
}



// FUNCTION 143ac5ee0 FUN_143ac5ee0 body=222 status=ok
// SIG undefined FUN_143ac5ee0(void)

undefined8 FUN_143ac5ee0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = _guard_xfg_dispatch_icall_nop(param_2);
  uVar3 = _guard_xfg_dispatch_icall_nop(param_1);
  cVar1 = FUN_143aa5fe0(uVar3,uVar2);
  if (cVar1 != '\0') {
    return 0;
  }
  cVar1 = FUN_143b07630(*(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_2 + 0x148));
  if (cVar1 != '\0') {
    if ((*(longlong *)(param_2 + 0x168) == *(longlong *)(param_1 + 0x168)) ||
       (((*(longlong *)(param_1 + 0x168) != 0 && (*(longlong *)(param_2 + 0x168) != 0)) &&
        (cVar1 = FUN_143b08b60(*(undefined8 *)(param_2 + 0x168),*(undefined8 *)(param_1 + 0x168)),
        cVar1 != '\0')))) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0;
}



// FUNCTION 143ac5fc0 FUN_143ac5fc0 body=54 status=ok
// SIG undefined FUN_143ac5fc0(void)

undefined8 FUN_143ac5fc0(undefined8 param_1,uint param_2)

{
  FUN_143ac5940(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143ac6000 FUN_143ac6000 body=304 status=ok
// SIG undefined FUN_143ac6000(void)

void FUN_143ac6000(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_28 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  if ((param_1[0x2a] != param_1[0x2b]) && (param_1[0x2a] != param_1[0x2c])) {
    local_20 = (undefined8 *)param_1[0x2a];
    local_18 = local_20;
    if (local_20 == (undefined8 *)0x0) {
      local_10 = 0;
    }
    else {
      local_10 = (**(code **)*local_20)(local_20,1);
    }
  }
  param_1[0x2a] = param_2;
  local_28[0] = 0;
  (**(code **)(*param_1 + 200))(param_1);
  if (param_2 != 0) {
    iVar1 = FUN_143a91e00(param_2);
    if (iVar1 == 0) {
      lVar2 = FUN_143b07a80(param_1[0x29],param_2,local_28);
      param_1[0x29] = lVar2;
      goto LAB_143ac611b;
    }
  }
  lVar2 = FUN_143b07d10(param_1[0x29],0,0,local_28);
  param_1[0x29] = lVar2;
LAB_143ac611b:
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}



// FUNCTION 143ac6130 FUN_143ac6130 body=6528 status=ok
// SIG undefined FUN_143ac6130(void)

int FUN_143ac6130(longlong *param_1,int param_2,int param_3,char param_4)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  ushort local_1f8;
  uint local_1f4;
  uint local_1f0;
  int local_1ec;
  int local_1d8;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1b4;
  int local_1b0;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_194;
  uint local_18c;
  undefined4 local_188;
  uint local_184;
  int local_180;
  int local_178;
  int local_174;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  uint local_150;
  undefined4 local_14c;
  int local_148;
  longlong *local_140;
  int local_138;
  uint local_134;
  int local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined1 local_d8 [48];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  (**(code **)(*param_1 + 200))(param_1);
  local_148 = param_3;
  if (param_3 - param_2 < 2) {
    if (param_4 != '\0') {
      local_148 = param_2;
    }
  }
  else {
    if (DAT_146bc5a40 == 0) {
      local_14c = 0;
      local_a8 = 0x345ad82c;
      local_a4 = 0;
      local_a0 = 0;
      local_9c = 0x90;
      local_98 = 0;
      local_90 = 0;
      local_8c = 0;
      local_88 = 0;
      local_80 = 0;
      local_7c = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_20 = 0;
      local_1c = 0;
      FUN_143b07e90(&local_a8,0,0,&local_14c);
      DAT_146bc5a40 = local_70;
      FUN_143b07390(&local_a8);
    }
    if (*(longlong *)(param_1[0x29] + 0x38) == DAT_146bc5a40) {
      if (param_4 != '\0') {
        local_148 = param_2;
      }
    }
    else {
      local_1b0 = param_2;
      if (param_4 != '\0') {
        local_1b0 = param_3;
      }
      FUN_143b08380(param_1[0x29],(longlong)local_1b0);
      if (param_4 != '\0') {
        if ((*(int *)(param_1[0x29] + 0x28) < 1) ||
           (0xd7ff < *(ushort *)
                      (*(longlong *)(param_1[0x29] + 0x30) +
                      (longlong)(*(int *)(param_1[0x29] + 0x28) + -1) * 2))) {
          local_134 = FUN_143b08190(param_1[0x29]);
        }
        else {
          local_168 = *(int *)(param_1[0x29] + 0x28) + -1;
          *(int *)(param_1[0x29] + 0x28) = local_168;
          local_134 = (uint)*(ushort *)
                             (*(longlong *)(param_1[0x29] + 0x30) + (longlong)local_168 * 2);
        }
      }
      local_188 = 0;
      FUN_143b09f10(local_d8,&local_188);
      local_1d8 = 0;
      local_1f4 = FUN_143b07490(param_1[0x29]);
      if (local_1f4 < 0x10000) {
        if (((int)local_1f4 < 0xd800) || (0xdbff < (int)local_1f4)) {
          local_1a8 = 0;
        }
        else {
          local_1a8 = 0x140;
        }
        local_1f8 = *(ushort *)
                     (*(longlong *)(param_1[0x2d] + 0x40) +
                     (longlong)
                     (int)((local_1f4 & 0x1f) +
                          (uint)*(ushort *)
                                 (*(longlong *)(param_1[0x2d] + 0x40) +
                                 (longlong)(local_1a8 + ((int)local_1f4 >> 5)) * 2) * 4) * 2);
      }
      else if (local_1f4 < 0x110000) {
        uVar2 = (short)((int)local_1f4 >> 10) + 0xd7c0;
        local_110 = param_1[0x2d];
        local_160 = (**(code **)(local_110 + 0x50))
                              (*(undefined2 *)
                                (*(longlong *)(param_1[0x2d] + 0x40) +
                                (longlong)
                                (int)((uVar2 & 0x1f) +
                                     (uint)*(ushort *)
                                            (*(longlong *)(param_1[0x2d] + 0x40) +
                                            (longlong)((int)(uint)uVar2 >> 5) * 2) * 4) * 2));
        if (local_160 < 1) {
          local_1f8 = *(ushort *)(param_1[0x2d] + 0x60);
        }
        else {
          local_1f8 = *(ushort *)
                       (*(longlong *)(param_1[0x2d] + 0x40) +
                       (longlong)
                       (int)((local_1f4 & 0x1f) +
                            (uint)*(ushort *)
                                   (*(longlong *)(param_1[0x2d] + 0x40) +
                                   (longlong)(local_160 + ((int)(local_1f4 & 0x3ff) >> 5)) * 2) * 4)
                       * 2);
        }
      }
      else {
        local_1f8 = *(ushort *)(param_1[0x2d] + 0x60);
      }
      local_1c8 = param_3;
      local_1c0 = param_2;
      if ((local_1f8 & 0x4000) != 0) {
        if (param_4 == '\0') {
          do {
            if ((*(int *)(param_1[0x29] + 0x28) < 1) ||
               (0xd7ff < *(ushort *)
                          (*(longlong *)(param_1[0x29] + 0x30) +
                          (longlong)(*(int *)(param_1[0x29] + 0x28) + -1) * 2))) {
              local_184 = FUN_143b08190(param_1[0x29]);
            }
            else {
              local_16c = *(int *)(param_1[0x29] + 0x28) + -1;
              *(int *)(param_1[0x29] + 0x28) = local_16c;
              local_184 = (uint)*(ushort *)
                                 (*(longlong *)(param_1[0x29] + 0x30) + (longlong)local_16c * 2);
            }
            uVar3 = local_184;
            if (local_184 < 0x10000) {
              if (((int)local_184 < 0xd800) || (0xdbff < (int)local_184)) {
                local_15c = 0;
              }
              else {
                local_15c = 0x140;
              }
              local_1f8 = *(ushort *)
                           (*(longlong *)(param_1[0x2d] + 0x40) +
                           (longlong)
                           (int)((local_184 & 0x1f) +
                                (uint)*(ushort *)
                                       (*(longlong *)(param_1[0x2d] + 0x40) +
                                       (longlong)(local_15c + ((int)local_184 >> 5)) * 2) * 4) * 2);
            }
            else if (local_184 < 0x110000) {
              uVar2 = (short)((int)local_184 >> 10) + 0xd7c0;
              local_e0 = param_1[0x2d];
              iVar4 = (**(code **)(local_e0 + 0x50))
                                (*(undefined2 *)
                                  (*(longlong *)(param_1[0x2d] + 0x40) +
                                  (longlong)
                                  (int)((uVar2 & 0x1f) +
                                       (uint)*(ushort *)
                                              (*(longlong *)(param_1[0x2d] + 0x40) +
                                              (longlong)((int)(uint)uVar2 >> 5) * 2) * 4) * 2));
              if (iVar4 < 1) {
                local_1f8 = *(ushort *)(param_1[0x2d] + 0x60);
              }
              else {
                local_1f8 = *(ushort *)
                             (*(longlong *)(param_1[0x2d] + 0x40) +
                             (longlong)
                             (int)((uVar3 & 0x1f) +
                                  (uint)*(ushort *)
                                         (*(longlong *)(param_1[0x2d] + 0x40) +
                                         (longlong)(iVar4 + ((int)(uVar3 & 0x3ff) >> 5)) * 2) * 4) *
                             2);
              }
            }
            else {
              local_1f8 = *(ushort *)(param_1[0x2d] + 0x60);
            }
          } while ((uVar3 != 0xffffffff) && ((local_1f8 & 0x4000) != 0));
          if (uVar3 == 0xffffffff) {
            local_1f4 = FUN_143b07490(param_1[0x29]);
          }
          else {
            FUN_143b07920(param_1[0x29]);
            local_1f4 = FUN_143b07490(param_1[0x29]);
          }
          if (*(int *)(param_1[0x29] + 0x1c) < *(int *)(param_1[0x29] + 0x28)) {
            local_120 = (**(code **)(*(longlong *)(param_1[0x29] + 0x38) + 0x40))(param_1[0x29]);
          }
          else {
            local_120 = (longlong)*(int *)(param_1[0x29] + 0x28) +
                        *(longlong *)(param_1[0x29] + 0x20);
          }
          local_1c0 = (int)local_120;
        }
        else {
          do {
            FUN_143b07920(param_1[0x29]);
            uVar3 = FUN_143b07490(param_1[0x29]);
            if (uVar3 < 0x10000) {
              if (((int)uVar3 < 0xd800) || (0xdbff < (int)uVar3)) {
                local_1a0 = 0;
              }
              else {
                local_1a0 = 0x140;
              }
              local_1f8 = *(ushort *)
                           (*(longlong *)(param_1[0x2d] + 0x40) +
                           (longlong)
                           (int)((uVar3 & 0x1f) +
                                (uint)*(ushort *)
                                       (*(longlong *)(param_1[0x2d] + 0x40) +
                                       (longlong)(local_1a0 + ((int)uVar3 >> 5)) * 2) * 4) * 2);
            }
            else if (uVar3 < 0x110000) {
              uVar2 = (short)((int)uVar3 >> 10) + 0xd7c0;
              local_100 = param_1[0x2d];
              local_158 = (**(code **)(local_100 + 0x50))
                                    (*(undefined2 *)
                                      (*(longlong *)(param_1[0x2d] + 0x40) +
                                      (longlong)
                                      (int)((uVar2 & 0x1f) +
                                           (uint)*(ushort *)
                                                  (*(longlong *)(param_1[0x2d] + 0x40) +
                                                  (longlong)((int)(uint)uVar2 >> 5) * 2) * 4) * 2));
              if (local_158 < 1) {
                local_1f8 = *(ushort *)(param_1[0x2d] + 0x60);
              }
              else {
                local_1f8 = *(ushort *)
                             (*(longlong *)(param_1[0x2d] + 0x40) +
                             (longlong)
                             (int)((uVar3 & 0x1f) +
                                  (uint)*(ushort *)
                                         (*(longlong *)(param_1[0x2d] + 0x40) +
                                         (longlong)(local_158 + ((int)(uVar3 & 0x3ff) >> 5)) * 2) *
                                  4) * 2);
              }
            }
            else {
              local_1f8 = *(ushort *)(param_1[0x2d] + 0x60);
            }
          } while ((uVar3 != 0xffffffff) && ((local_1f8 & 0x4000) != 0));
          if (*(int *)(param_1[0x29] + 0x1c) < *(int *)(param_1[0x29] + 0x28)) {
            local_128 = (**(code **)(*(longlong *)(param_1[0x29] + 0x38) + 0x40))(param_1[0x29]);
          }
          else {
            local_128 = (longlong)*(int *)(param_1[0x29] + 0x28) +
                        *(longlong *)(param_1[0x29] + 0x20);
          }
          local_1c8 = (int)local_128;
          if (uVar3 == 0xffffffff) {
            if ((*(int *)(param_1[0x29] + 0x28) < 1) ||
               (0xd7ff < *(ushort *)
                          (*(longlong *)(param_1[0x29] + 0x30) +
                          (longlong)(*(int *)(param_1[0x29] + 0x28) + -1) * 2))) {
              local_150 = FUN_143b08190(param_1[0x29]);
            }
            else {
              iVar4 = *(int *)(param_1[0x29] + 0x28) + -1;
              *(int *)(param_1[0x29] + 0x28) = iVar4;
              local_150 = (uint)*(ushort *)
                                 (*(longlong *)(param_1[0x29] + 0x30) + (longlong)iVar4 * 2);
            }
            local_1f4 = local_150;
          }
          else {
            if ((*(int *)(param_1[0x29] + 0x28) < 1) ||
               (0xd7ff < *(ushort *)
                          (*(longlong *)(param_1[0x29] + 0x30) +
                          (longlong)(*(int *)(param_1[0x29] + 0x28) + -1) * 2))) {
              local_18c = FUN_143b08190(param_1[0x29]);
            }
            else {
              local_154 = *(int *)(param_1[0x29] + 0x28) + -1;
              *(int *)(param_1[0x29] + 0x28) = local_154;
              local_18c = (uint)*(ushort *)
                                 (*(longlong *)(param_1[0x29] + 0x30) + (longlong)local_154 * 2);
            }
            local_1f4 = local_18c;
          }
        }
        if (local_1f4 < 0x10000) {
          if (((int)local_1f4 < 0xd800) || (0xdbff < (int)local_1f4)) {
            local_164 = 0;
          }
          else {
            local_164 = 0x140;
          }
          local_1f8 = *(ushort *)
                       (*(longlong *)(param_1[0x2d] + 0x40) +
                       (longlong)
                       (int)((local_1f4 & 0x1f) +
                            (uint)*(ushort *)
                                   (*(longlong *)(param_1[0x2d] + 0x40) +
                                   (longlong)(local_164 + ((int)local_1f4 >> 5)) * 2) * 4) * 2);
        }
        else if (local_1f4 < 0x110000) {
          uVar2 = (short)((int)local_1f4 >> 10) + 0xd7c0;
          local_f0 = param_1[0x2d];
          local_174 = (**(code **)(local_f0 + 0x50))
                                (*(undefined2 *)
                                  (*(longlong *)(param_1[0x2d] + 0x40) +
                                  (longlong)
                                  (int)((uVar2 & 0x1f) +
                                       (uint)*(ushort *)
                                              (*(longlong *)(param_1[0x2d] + 0x40) +
                                              (longlong)((int)(uint)uVar2 >> 5) * 2) * 4) * 2));
          if (local_174 < 1) {
            local_1f8 = *(ushort *)(param_1[0x2d] + 0x60);
          }
          else {
            local_1f8 = *(ushort *)
                         (*(longlong *)(param_1[0x2d] + 0x40) +
                         (longlong)
                         (int)((local_1f4 & 0x1f) +
                              (uint)*(ushort *)
                                     (*(longlong *)(param_1[0x2d] + 0x40) +
                                     (longlong)(local_174 + ((int)(local_1f4 & 0x3ff) >> 5)) * 2) *
                              4) * 2);
          }
        }
        else {
          local_1f8 = *(ushort *)(param_1[0x2d] + 0x60);
        }
      }
      if (param_4 != '\0') {
        FUN_143b08380(param_1[0x29],(longlong)local_1c0);
        local_1f4 = FUN_143b07490(param_1[0x29]);
        if (local_1f4 < 0x10000) {
          if (((int)local_1f4 < 0xd800) || (0xdbff < (int)local_1f4)) {
            local_194 = 0;
          }
          else {
            local_194 = 0x140;
          }
          local_1f8 = *(ushort *)
                       (*(longlong *)(param_1[0x2d] + 0x40) +
                       (longlong)
                       (int)((local_1f4 & 0x1f) +
                            (uint)*(ushort *)
                                   (*(longlong *)(param_1[0x2d] + 0x40) +
                                   (longlong)(local_194 + ((int)local_1f4 >> 5)) * 2) * 4) * 2);
        }
        else if (local_1f4 < 0x110000) {
          uVar2 = (short)((int)local_1f4 >> 10) + 0xd7c0;
          local_e8 = param_1[0x2d];
          iVar4 = (**(code **)(local_e8 + 0x50))
                            (*(undefined2 *)
                              (*(longlong *)(param_1[0x2d] + 0x40) +
                              (longlong)
                              (int)((uVar2 & 0x1f) +
                                   (uint)*(ushort *)
                                          (*(longlong *)(param_1[0x2d] + 0x40) +
                                          (longlong)((int)(uint)uVar2 >> 5) * 2) * 4) * 2));
          if (iVar4 < 1) {
            local_1f8 = *(ushort *)(param_1[0x2d] + 0x60);
          }
          else {
            local_1f8 = *(ushort *)
                         (*(longlong *)(param_1[0x2d] + 0x40) +
                         (longlong)
                         (int)((local_1f4 & 0x1f) +
                              (uint)*(ushort *)
                                     (*(longlong *)(param_1[0x2d] + 0x40) +
                                     (longlong)(iVar4 + ((int)(local_1f4 & 0x3ff) >> 5)) * 2) * 4) *
                         2);
          }
        }
        else {
          local_1f8 = *(ushort *)(param_1[0x2d] + 0x60);
        }
      }
      while (cVar1 = FUN_143a8b110(local_188), cVar1 != '\0') {
        while( true ) {
          if (*(int *)(param_1[0x29] + 0x1c) < *(int *)(param_1[0x29] + 0x28)) {
            local_118 = (**(code **)(*(longlong *)(param_1[0x29] + 0x38) + 0x40))(param_1[0x29]);
          }
          else {
            local_118 = (longlong)*(int *)(param_1[0x29] + 0x28) +
                        *(longlong *)(param_1[0x29] + 0x20);
          }
          if ((local_1c8 <= (int)local_118) || ((local_1f8 & 0x4000) != 0)) break;
          FUN_143b07920(param_1[0x29]);
          local_1f4 = FUN_143b07490(param_1[0x29]);
          if (local_1f4 < 0x10000) {
            if (((int)local_1f4 < 0xd800) || (0xdbff < (int)local_1f4)) {
              local_180 = 0;
            }
            else {
              local_180 = 0x140;
            }
            local_1f8 = *(ushort *)
                         (*(longlong *)(param_1[0x2d] + 0x40) +
                         (longlong)
                         (int)((local_1f4 & 0x1f) +
                              (uint)*(ushort *)
                                     (*(longlong *)(param_1[0x2d] + 0x40) +
                                     (longlong)(local_180 + ((int)local_1f4 >> 5)) * 2) * 4) * 2);
          }
          else if (local_1f4 < 0x110000) {
            uVar2 = (short)((int)local_1f4 >> 10) + 0xd7c0;
            local_108 = param_1[0x2d];
            local_178 = (**(code **)(local_108 + 0x50))
                                  (*(undefined2 *)
                                    (*(longlong *)(param_1[0x2d] + 0x40) +
                                    (longlong)
                                    (int)((uVar2 & 0x1f) +
                                         (uint)*(ushort *)
                                                (*(longlong *)(param_1[0x2d] + 0x40) +
                                                (longlong)((int)(uint)uVar2 >> 5) * 2) * 4) * 2));
            if (local_178 < 1) {
              local_1f8 = *(ushort *)(param_1[0x2d] + 0x60);
            }
            else {
              local_1f8 = *(ushort *)
                           (*(longlong *)(param_1[0x2d] + 0x40) +
                           (longlong)
                           (int)((local_1f4 & 0x1f) +
                                (uint)*(ushort *)
                                       (*(longlong *)(param_1[0x2d] + 0x40) +
                                       (longlong)(local_178 + ((int)(local_1f4 & 0x3ff) >> 5)) * 2)
                                * 4) * 2);
            }
          }
          else {
            local_1f8 = *(ushort *)(param_1[0x2d] + 0x60);
          }
        }
        if (local_1c8 <= (int)local_118) break;
        local_140 = (longlong *)FUN_143ac8210(param_1,local_1f4);
        if (local_140 != (longlong *)0x0) {
          iVar4 = (**(code **)(*local_140 + 0x10))
                            (local_140,param_1[0x29],local_1c0,local_1c8,0,(int)param_1[0x34],
                             local_d8);
          local_1d8 = local_1d8 + iVar4;
        }
        local_1f4 = FUN_143b07490(param_1[0x29]);
        if (local_1f4 < 0x10000) {
          if (((int)local_1f4 < 0xd800) || (0xdbff < (int)local_1f4)) {
            local_1b4 = 0;
          }
          else {
            local_1b4 = 0x140;
          }
          local_1f8 = *(ushort *)
                       (*(longlong *)(param_1[0x2d] + 0x40) +
                       (longlong)
                       (int)((local_1f4 & 0x1f) +
                            (uint)*(ushort *)
                                   (*(longlong *)(param_1[0x2d] + 0x40) +
                                   (longlong)(local_1b4 + ((int)local_1f4 >> 5)) * 2) * 4) * 2);
        }
        else if (local_1f4 < 0x110000) {
          uVar2 = (short)((int)local_1f4 >> 10) + 0xd7c0;
          local_f8 = param_1[0x2d];
          iVar4 = (**(code **)(local_f8 + 0x50))
                            (*(undefined2 *)
                              (*(longlong *)(param_1[0x2d] + 0x40) +
                              (longlong)
                              (int)((uVar2 & 0x1f) +
                                   (uint)*(ushort *)
                                          (*(longlong *)(param_1[0x2d] + 0x40) +
                                          (longlong)((int)(uint)uVar2 >> 5) * 2) * 4) * 2));
          if (iVar4 < 1) {
            local_1f8 = *(ushort *)(param_1[0x2d] + 0x60);
          }
          else {
            local_1f8 = *(ushort *)
                         (*(longlong *)(param_1[0x2d] + 0x40) +
                         (longlong)
                         (int)((local_1f4 & 0x1f) +
                              (uint)*(ushort *)
                                     (*(longlong *)(param_1[0x2d] + 0x40) +
                                     (longlong)(iVar4 + ((int)(local_1f4 & 0x3ff) >> 5)) * 2) * 4) *
                         2);
          }
        }
        else {
          local_1f8 = *(ushort *)(param_1[0x2d] + 0x60);
        }
      }
      if (0 < local_1d8) {
        local_1ec = local_1d8;
        iVar4 = FUN_143b09660(local_d8,0);
        if (param_2 < iVar4) {
          local_1ec = local_1d8 + 1;
        }
        iVar4 = FUN_143aca700(local_d8);
        if (iVar4 < param_3) {
          local_1ec = local_1ec + 1;
        }
        lVar6 = FUN_143aa7a40((longlong)local_1ec << 2);
        param_1[0x30] = lVar6;
        if (param_1[0x30] != 0) {
          *(int *)(param_1 + 0x31) = local_1ec;
          iVar4 = FUN_143b09660(local_d8,0);
          if (param_2 < iVar4) {
            *(int *)param_1[0x30] = param_2;
          }
          local_1f0 = (uint)(param_2 < iVar4);
          for (local_1c4 = 0; local_1c4 < local_1d8; local_1c4 = local_1c4 + 1) {
            uVar5 = FUN_143b09660(local_d8,local_1c4);
            *(undefined4 *)(param_1[0x30] + (longlong)(int)local_1f0 * 4) = uVar5;
            local_1f0 = local_1f0 + 1;
          }
          if (*(int *)(param_1[0x30] + (longlong)(int)(local_1f0 - 1) * 4) < param_3) {
            *(int *)(param_1[0x30] + (longlong)(int)local_1f0 * 4) = param_3;
          }
          if (param_4 != '\0') {
            local_138 = (**(code **)(*param_1 + 0x80))(param_1,param_3);
            UCameraModifier_Climbing::~UCameraModifier_Climbing(local_d8);
            return local_138;
          }
          local_130 = (**(code **)(*param_1 + 0x78))(param_1,param_2);
          UCameraModifier_Climbing::~UCameraModifier_Climbing(local_d8);
          return local_130;
        }
      }
      local_1a4 = param_3;
      if (param_4 != '\0') {
        local_1a4 = param_2;
      }
      FUN_143b08380(param_1[0x29],(longlong)local_1a4);
      local_19c = param_3;
      if (param_4 != '\0') {
        local_19c = param_2;
      }
      local_148 = local_19c;
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_d8);
    }
  }
  return local_148;
}



// FUNCTION 143ac7ac0 CreateInternalContext body=92 status=ok
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
  
  lVar1 = FUN_143a8d310(0x1a8);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143ac5810(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143ac7b20 FUN_143ac7b20 body=135 status=ok
// SIG undefined FUN_143ac7b20(void)

longlong FUN_143ac7b20(longlong *param_1,undefined8 param_2,int *param_3,undefined4 *param_4)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    if (*param_3 == 0) {
      *param_3 = 1;
      lVar2 = 0;
    }
    else {
      lVar2 = (**(code **)(*param_1 + 0x18))(param_1);
      if (lVar2 == 0) {
        *param_4 = 7;
      }
      else {
        *param_4 = 0xffffff82;
      }
    }
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 143ac7bb0 FUN_143ac7bb0 body=136 status=ok
// SIG undefined FUN_143ac7bb0(void)

int FUN_143ac7bb0(longlong param_1)

{
  undefined4 local_10;
  
  if (*(int *)(*(longlong *)(param_1 + 0x148) + 0x1c) <
      *(int *)(*(longlong *)(param_1 + 0x148) + 0x28)) {
    local_10 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x38) + 0x40))
                         (*(undefined8 *)(param_1 + 0x148));
  }
  else {
    local_10 = *(int *)(*(longlong *)(param_1 + 0x148) + 0x28) +
               (int)*(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0x20);
  }
  return local_10;
}



// FUNCTION 143ac7c40 FUN_143ac7c40 body=81 status=ok
// SIG undefined FUN_143ac7c40(void)

undefined8 FUN_143ac7c40(longlong *param_1)

{
  (**(code **)(*param_1 + 200))(param_1);
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x174) = 1;
  FUN_143b08380(param_1[0x29],0);
  return 0;
}



// FUNCTION 143ac7ca0 FUN_143ac7ca0 body=1238 status=ok
// SIG undefined FUN_143ac7ca0(void)

ulonglong FUN_143ac7ca0(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint local_34;
  uint local_30;
  
  if (param_1[0x30] != 0) {
    if ((*(int *)param_1[0x30] <= param_2) &&
       (param_2 < *(int *)(param_1[0x30] + (longlong)((int)param_1[0x31] + -1) * 4))) {
      *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
      while (*(int *)(param_1[0x30] + (longlong)*(int *)((longlong)param_1 + 0x18c) * 4) <= param_2)
      {
        *(int *)((longlong)param_1 + 0x18c) = *(int *)((longlong)param_1 + 0x18c) + 1;
      }
      uVar1 = *(uint *)(param_1[0x30] + (longlong)*(int *)((longlong)param_1 + 0x18c) * 4);
      FUN_143b08380(param_1[0x29],(longlong)(int)uVar1);
      return (ulonglong)uVar1;
    }
    (**(code **)(*param_1 + 200))(param_1);
  }
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x174) = 1;
  if ((param_1[0x29] == 0) || (lVar2 = FUN_143b07900(param_1[0x29]), lVar2 <= param_2)) {
    (**(code **)(*param_1 + 0x50))(param_1);
    uVar3 = (**(code **)(*param_1 + 0x68))(param_1);
  }
  else if (param_2 < 0) {
    uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
  }
  else if (*(longlong *)(param_1[0x2d] + 0x20) == 0) {
    if (*(longlong *)(param_1[0x2d] + 0x18) == 0) {
      FUN_143b08380(param_1[0x29],(longlong)param_2,param_3,param_4,0);
      if ((param_2 == 0) || ((param_2 == 1 && (lVar2 = FUN_143b07740(param_1[0x29]), lVar2 == 0))))
      {
        uVar3 = (**(code **)(*param_1 + 0x68))(param_1);
      }
      else {
        uVar1 = (**(code **)(*param_1 + 0x58))(param_1);
        while ((uVar1 != 0xffffffff && ((int)uVar1 <= param_2))) {
          uVar1 = (**(code **)(*param_1 + 0x68))(param_1);
        }
        uVar3 = (ulonglong)uVar1;
      }
    }
    else {
      FUN_143b08380(param_1[0x29],(longlong)param_2,param_3,param_4,0);
      if ((*(int *)(param_1[0x29] + 0x28) < 1) ||
         (0xd7ff < *(ushort *)
                    (*(longlong *)(param_1[0x29] + 0x30) +
                    (longlong)(*(int *)(param_1[0x29] + 0x28) + -1) * 2))) {
        FUN_143b08190(param_1[0x29]);
      }
      else {
        *(int *)(param_1[0x29] + 0x28) = *(int *)(param_1[0x29] + 0x28) + -1;
      }
      FUN_143ac88c0(param_1,*(undefined8 *)(param_1[0x2d] + 0x18));
      uVar1 = (**(code **)(*param_1 + 0x58))(param_1);
      do {
        local_30 = uVar1;
        if ((int)local_30 <= param_2) {
          uVar1 = (**(code **)(*param_1 + 0x68))(param_1);
          if ((int)uVar1 <= param_2) {
            uVar3 = (**(code **)(*param_1 + 0x68))(param_1);
            return uVar3;
          }
          return (ulonglong)uVar1;
        }
        uVar1 = (**(code **)(*param_1 + 0x58))(param_1);
      } while (param_2 < (int)uVar1);
      uVar3 = (ulonglong)local_30;
    }
  }
  else {
    FUN_143b08380(param_1[0x29],(longlong)param_2,param_3,param_4,0);
    if ((*(int *)(param_1[0x29] + 0x28) < *(int *)(param_1[0x29] + 0x2c)) &&
       (*(ushort *)
         (*(longlong *)(param_1[0x29] + 0x30) + (longlong)*(int *)(param_1[0x29] + 0x28) * 2) <
        0xd800)) {
      *(int *)(param_1[0x29] + 0x28) = *(int *)(param_1[0x29] + 0x28) + 1;
    }
    else {
      FUN_143b07920(param_1[0x29]);
    }
    FUN_143ac93c0(param_1,*(undefined8 *)(param_1[0x2d] + 0x20));
    local_34 = (**(code **)(*param_1 + 0x68))(param_1);
    while ((int)local_34 <= param_2) {
      local_34 = (**(code **)(*param_1 + 0x68))(param_1);
    }
    uVar3 = (ulonglong)local_34;
  }
  return uVar3;
}



// FUNCTION 143ac8180 FUN_143ac8180 body=101 status=ok
// SIG undefined FUN_143ac8180(void)

undefined8 FUN_143ac8180(longlong param_1,undefined4 *param_2)

{
  undefined8 local_18;
  
  local_18 = 0;
  *param_2 = 0;
  if (*(longlong *)(param_1 + 0x168) != 0) {
    local_18 = **(undefined8 **)(param_1 + 0x168);
    *param_2 = *(undefined4 *)(**(longlong **)(param_1 + 0x168) + 8);
  }
  return local_18;
}



// FUNCTION 143ac81f0 FUN_143ac81f0 body=19 status=ok
// SIG undefined FUN_143ac81f0(void)

void FUN_143ac81f0(void)

{
  FUN_143ac8840();
  return;
}



// FUNCTION 143ac8210 FUN_143ac8210 body=888 status=ok
// SIG undefined FUN_143ac8210(void)

longlong * FUN_143ac8210(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 local_88;
  int local_84;
  longlong *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_80 = (longlong *)0x0;
  local_88 = 0;
  if (*(longlong *)(param_1 + 400) == 0) {
    local_60 = FUN_143a8d310(0x28);
    if (local_60 == 0) {
      local_58 = 0;
    }
    else {
      local_58 = FUN_143b09f10(local_60,&local_88);
    }
    local_20 = local_58;
    *(undefined8 *)(param_1 + 400) = local_58;
    if ((*(longlong *)(param_1 + 400) == 0) || (cVar1 = FUN_143a8b0e0(local_88), cVar1 != '\0')) {
      local_78 = *(undefined8 **)(param_1 + 400);
      if (local_78 != (undefined8 *)0x0) {
        local_48 = local_78;
        (**(code **)*local_78)(local_78,1);
      }
      *(undefined8 *)(param_1 + 400) = 0;
      return (longlong *)0x0;
    }
  }
  local_84 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
             ::GetIndex(*(undefined8 *)(param_1 + 400));
  while (local_84 = local_84 + -1, -1 < local_84) {
    local_80 = (longlong *)FUN_143b09610(*(undefined8 *)(param_1 + 400),local_84);
    cVar1 = (**(code **)(*local_80 + 8))(local_80,param_2);
    if (cVar1 != '\0') {
      return local_80;
    }
  }
  local_80 = (longlong *)FUN_143ac8590(param_2,*(undefined4 *)(param_1 + 0x1a0));
  if (local_80 != (longlong *)0x0) {
    FUN_143acb220(*(undefined8 *)(param_1 + 400),local_80,&local_88);
    return local_80;
  }
  if (*(longlong *)(param_1 + 0x198) == 0) {
    local_68 = FUN_143a8d310(0x28);
    if (local_68 == 0) {
      local_50 = 0;
    }
    else {
      local_50 = FUN_143b0a270(local_68,&local_88);
    }
    local_40 = local_50;
    *(undefined8 *)(param_1 + 0x198) = local_50;
    cVar1 = FUN_143a8b110(local_88);
    if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x198) == 0)) {
      local_88 = 7;
    }
    FUN_143b09900(*(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x198),0,&local_88);
    cVar1 = FUN_143a8b0e0(local_88);
    if (cVar1 != '\0') {
      local_70 = *(undefined8 **)(param_1 + 0x198);
      if (local_70 != (undefined8 *)0x0) {
        local_38 = local_70;
        (**(code **)*local_70)(local_70,1);
      }
      *(undefined8 *)(param_1 + 0x198) = 0;
      return (longlong *)0x0;
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x198) + 0x18))
            (*(undefined8 *)(param_1 + 0x198),param_2,*(undefined4 *)(param_1 + 0x1a0));
  return *(longlong **)(param_1 + 0x198);
}



// FUNCTION 143ac8590 FUN_143ac8590 body=160 status=ok
// SIG undefined FUN_143ac8590(void)

longlong FUN_143ac8590(undefined4 param_1,undefined4 param_2)

{
  longlong *plVar1;
  int local_28;
  longlong local_20;
  
  FUN_143a9aa60(&DAT_146bc5a28,FUN_143aca160);
  if (DAT_146bc5a20 == 0) {
    local_20 = 0;
  }
  else {
    local_28 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
               ::GetIndex(DAT_146bc5a20);
    local_20 = 0;
    do {
      local_28 = local_28 + -1;
      if (local_28 < 0) {
        return local_20;
      }
      plVar1 = (longlong *)FUN_143b09610(DAT_146bc5a20,local_28);
      local_20 = (**(code **)(*plVar1 + 8))(plVar1,param_1,param_2);
    } while (local_20 == 0);
  }
  return local_20;
}



// FUNCTION 143ac8630 FUN_143ac8630 body=114 status=ok
// SIG undefined FUN_143ac8630(void)

undefined4 FUN_143ac8630(longlong param_1)

{
  FUN_143aca4a0(param_1);
  return *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x30) +
          (longlong)
          (*(int *)(param_1 + 0x170) +
          *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x30) +
                  (longlong)*(int *)(param_1 + 0x170) * 4)) * 4);
}



// FUNCTION 143ac86b0 FUN_143ac86b0 body=238 status=ok
// SIG undefined FUN_143ac86b0(void)

int FUN_143ac86b0(longlong param_1,longlong param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 local_20;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    FUN_143aca4a0(param_1);
    iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x30) +
                    (longlong)*(int *)(param_1 + 0x170) * 4);
    local_20 = iVar2;
    if (param_3 < iVar2) {
      *param_4 = 0xf;
      local_20 = param_3;
    }
    for (local_28 = 0; local_28 < local_20; local_28 = local_28 + 1) {
      *(undefined4 *)(param_2 + (longlong)local_28 * 4) =
           *(undefined4 *)
            (*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x30) +
            (longlong)(*(int *)(param_1 + 0x170) + 1 + local_28) * 4);
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



// FUNCTION 143ac87a0 FUN_143ac87a0 body=145 status=ok
// SIG undefined FUN_143ac87a0(void)

longlong FUN_143ac87a0(longlong param_1)

{
  longlong lVar1;
  longlong local_20;
  
  if (*(longlong *)(param_1 + 0x168) == 0) {
    local_20 = DAT_146bc5a38;
    if (DAT_146bc5a38 == 0) {
      lVar1 = FUN_143a8d310(0x28);
      if (lVar1 == 0) {
        local_20 = 0;
      }
      else {
        local_20 = FUN_143a8ac30(lVar1);
      }
      DAT_146bc5a38 = local_20;
    }
  }
  else {
    local_20 = FUN_143b08c50(*(undefined8 *)(param_1 + 0x168));
  }
  return local_20;
}



// FUNCTION 143ac8840 FUN_143ac8840 body=8 status=ok
// SIG undefined FUN_143ac8840(void)

undefined * FUN_143ac8840(void)

{
  return &DAT_146bc5a30;
}



// FUNCTION 143ac8850 FUN_143ac8850 body=18 status=ok
// SIG undefined FUN_143ac8850(void)

undefined8 FUN_143ac8850(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



// FUNCTION 143ac8870 FUN_143ac8870 body=72 status=ok
// SIG undefined FUN_143ac8870(void)

undefined8 FUN_143ac8870(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143b07330(param_2,*(undefined8 *)(param_1 + 0x148),0,1,param_3);
  return uVar1;
}



// FUNCTION 143ac88c0 FUN_143ac88c0 body=2794 status=ok
// SIG undefined FUN_143ac88c0(void)

int FUN_143ac88c0(longlong param_1,longlong param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  ushort local_a8;
  int local_a4;
  uint local_a0;
  int local_98;
  short *local_80;
  int local_78;
  int local_74;
  uint local_68;
  uint local_64;
  int local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_40;
  int local_38;
  int local_30;
  int local_20;
  int local_18;
  
  local_a8 = 0;
  sVar1 = 0;
  local_74 = 0;
  local_78 = 0;
  uVar2 = *(uint *)(param_2 + 8);
  uVar3 = *(uint *)(param_2 + 4);
  *(undefined1 *)(param_1 + 0x174) = 1;
  *(undefined4 *)(param_1 + 0x170) = 0;
  if (*(int *)(*(longlong *)(param_1 + 0x148) + 0x1c) <
      *(int *)(*(longlong *)(param_1 + 0x148) + 0x28)) {
    local_38 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x38) + 0x40))
                         (*(undefined8 *)(param_1 + 0x148));
  }
  else {
    local_38 = *(int *)(*(longlong *)(param_1 + 0x148) + 0x28) +
               (int)*(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0x20);
  }
  local_a4 = local_38;
  if ((*(int *)(*(longlong *)(param_1 + 0x148) + 0x28) <
       *(int *)(*(longlong *)(param_1 + 0x148) + 0x2c)) &&
     (*(ushort *)
       (*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x30) +
       (longlong)*(int *)(*(longlong *)(param_1 + 0x148) + 0x28) * 2) < 0xd800)) {
    local_64 = (uint)*(ushort *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x30) +
                      (longlong)*(int *)(*(longlong *)(param_1 + 0x148) + 0x28) * 2);
    *(int *)(*(longlong *)(param_1 + 0x148) + 0x28) =
         *(int *)(*(longlong *)(param_1 + 0x148) + 0x28) + 1;
  }
  else {
    local_64 = FUN_143b07920(*(undefined8 *)(param_1 + 0x148));
  }
  local_a0 = local_64;
  if ((*(longlong *)(param_1 + 0x168) == 0) || (local_64 == 0xffffffff)) {
    return -1;
  }
  local_80 = (short *)(param_2 + 0x10 + (ulonglong)uVar3);
  local_98 = 1;
  if ((*(uint *)(param_2 + 8) & 2) != 0) {
    local_a8 = 2;
    local_98 = 0;
  }
  do {
    if (local_a0 == 0xffffffff) {
      if (local_98 == 2) {
        if (local_a4 < local_78) {
          local_a4 = local_78;
          *(int *)(param_1 + 0x170) = local_74;
        }
LAB_143ac9145:
        if (local_a4 == local_38) {
          lVar6 = (longlong)local_38 - *(longlong *)(*(longlong *)(param_1 + 0x148) + 0x20);
          if ((lVar6 < 0) || (*(int *)(*(longlong *)(param_1 + 0x148) + 0x1c) < lVar6)) {
            FUN_143b08380(*(undefined8 *)(param_1 + 0x148),(longlong)local_38);
          }
          else {
            local_58 = (undefined4)lVar6;
            *(undefined4 *)(*(longlong *)(param_1 + 0x148) + 0x28) = local_58;
          }
          if ((*(int *)(*(longlong *)(param_1 + 0x148) + 0x28) <
               *(int *)(*(longlong *)(param_1 + 0x148) + 0x2c)) &&
             (*(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x30) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x148) + 0x28) * 2) < 0xd800)) {
            *(int *)(*(longlong *)(param_1 + 0x148) + 0x28) =
                 *(int *)(*(longlong *)(param_1 + 0x148) + 0x28) + 1;
          }
          else {
            FUN_143b07920(*(undefined8 *)(param_1 + 0x148));
          }
          if (*(int *)(*(longlong *)(param_1 + 0x148) + 0x1c) <
              *(int *)(*(longlong *)(param_1 + 0x148) + 0x28)) {
            local_20 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x38) + 0x40))
                                 (*(undefined8 *)(param_1 + 0x148));
          }
          else {
            local_20 = *(int *)(*(longlong *)(param_1 + 0x148) + 0x28) +
                       (int)*(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0x20);
          }
          local_a4 = local_20;
        }
        lVar6 = (longlong)local_a4 - *(longlong *)(*(longlong *)(param_1 + 0x148) + 0x20);
        if ((-1 < lVar6) && (lVar6 <= *(int *)(*(longlong *)(param_1 + 0x148) + 0x1c))) {
          local_40 = (undefined4)lVar6;
          *(undefined4 *)(*(longlong *)(param_1 + 0x148) + 0x28) = local_40;
          return local_a4;
        }
        FUN_143b08380(*(undefined8 *)(param_1 + 0x148),(longlong)local_a4);
        return local_a4;
      }
      local_98 = 2;
      local_a8 = 1;
    }
    if (local_98 == 1) {
      if (local_a0 < 0x10000) {
        if (((int)local_a0 < 0xd800) || (0xdbff < (int)local_a0)) {
          local_60 = 0;
        }
        else {
          local_60 = 0x140;
        }
        local_a8 = *(ushort *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x40) +
                    (longlong)
                    (int)((local_a0 & 0x1f) +
                         (uint)*(ushort *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x40) +
                                (longlong)(local_60 + ((int)local_a0 >> 5)) * 2) * 4) * 2);
      }
      else if (local_a0 < 0x110000) {
        uVar4 = (short)((int)local_a0 >> 10) + 0xd7c0;
        iVar5 = (**(code **)(*(longlong *)(param_1 + 0x168) + 0x50))
                          (*(undefined2 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x40) +
                            (longlong)
                            (int)((uVar4 & 0x1f) +
                                 (uint)*(ushort *)
                                        (*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x40) +
                                        (longlong)((int)(uint)uVar4 >> 5) * 2) * 4) * 2));
        if (iVar5 < 1) {
          local_a8 = *(ushort *)(*(longlong *)(param_1 + 0x168) + 0x60);
        }
        else {
          local_a8 = *(ushort *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x40) +
                      (longlong)
                      (int)((local_a0 & 0x1f) +
                           (uint)*(ushort *)
                                  (*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x40) +
                                  (longlong)(iVar5 + ((int)(local_a0 & 0x3ff) >> 5)) * 2) * 4) * 2);
        }
      }
      else {
        local_a8 = *(ushort *)(*(longlong *)(param_1 + 0x168) + 0x60);
      }
      if ((local_a8 & 0x4000) != 0) {
        *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
        local_a8 = local_a8 & 0xbfff;
      }
    }
    uVar4 = local_80[(ulonglong)local_a8 + 4];
    local_80 = (short *)(param_2 + 0x10 + (ulonglong)(uVar3 * uVar4));
    if (*local_80 == -1) {
      if (local_98 != 0) {
        if (*(int *)(*(longlong *)(param_1 + 0x148) + 0x1c) <
            *(int *)(*(longlong *)(param_1 + 0x148) + 0x28)) {
          local_18 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x38) + 0x40))
                               (*(undefined8 *)(param_1 + 0x148));
        }
        else {
          local_18 = *(int *)(*(longlong *)(param_1 + 0x148) + 0x28) +
                     (int)*(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0x20);
        }
        local_a4 = local_18;
      }
      *(int *)(param_1 + 0x170) = (int)local_80[2];
    }
    if (local_80[1] == 0) {
      if (*local_80 != 0) {
        sVar1 = 0;
      }
    }
    else if ((sVar1 == 0) || (*local_80 != sVar1)) {
      if (*(int *)(*(longlong *)(param_1 + 0x148) + 0x1c) <
          *(int *)(*(longlong *)(param_1 + 0x148) + 0x28)) {
        local_30 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x38) + 0x40))
                             (*(undefined8 *)(param_1 + 0x148));
      }
      else {
        local_30 = *(int *)(*(longlong *)(param_1 + 0x148) + 0x28) +
                   (int)*(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0x20);
      }
      local_78 = local_30;
      sVar1 = local_80[1];
      local_74 = (int)local_80[2];
    }
    else {
      local_a4 = local_78;
      *(int *)(param_1 + 0x170) = local_74;
      sVar1 = 0;
      if ((uVar2 & 1) != 0) {
        lVar6 = (longlong)local_78 - *(longlong *)(*(longlong *)(param_1 + 0x148) + 0x20);
        if ((-1 < lVar6) && (lVar6 <= *(int *)(*(longlong *)(param_1 + 0x148) + 0x1c))) {
          local_50 = (undefined4)lVar6;
          *(undefined4 *)(*(longlong *)(param_1 + 0x148) + 0x28) = local_50;
          return local_78;
        }
        FUN_143b08380(*(undefined8 *)(param_1 + 0x148),(longlong)local_78);
        return local_78;
      }
    }
    if (uVar4 == 0) goto LAB_143ac9145;
    if (local_98 == 1) {
      if ((*(int *)(*(longlong *)(param_1 + 0x148) + 0x28) <
           *(int *)(*(longlong *)(param_1 + 0x148) + 0x2c)) &&
         (*(ushort *)
           (*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x30) +
           (longlong)*(int *)(*(longlong *)(param_1 + 0x148) + 0x28) * 2) < 0xd800)) {
        local_68 = (uint)*(ushort *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x30) +
                          (longlong)*(int *)(*(longlong *)(param_1 + 0x148) + 0x28) * 2);
        *(int *)(*(longlong *)(param_1 + 0x148) + 0x28) =
             *(int *)(*(longlong *)(param_1 + 0x148) + 0x28) + 1;
      }
      else {
        local_68 = FUN_143b07920(*(undefined8 *)(param_1 + 0x148));
      }
      local_a0 = local_68;
    }
    else if (local_98 == 0) {
      local_98 = 1;
    }
  } while( true );
}



// FUNCTION 143ac93c0 FUN_143ac93c0 body=3155 status=ok
// SIG undefined FUN_143ac93c0(void)

int FUN_143ac93c0(longlong param_1,longlong param_2)

{
  short sVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  ushort local_c8;
  int local_c4;
  uint local_c0;
  int local_b4;
  int local_a4;
  short *local_98;
  uint local_8c;
  uint local_84;
  int local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_50;
  longlong local_40;
  int local_38;
  int local_30;
  int local_28;
  int local_20;
  
  sVar1 = 0;
  local_a4 = 0;
  uVar2 = *(uint *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  if ((*(longlong *)(param_1 + 0x148) != 0) && (*(longlong *)(param_1 + 0x168) != 0)) {
    if (*(int *)(*(longlong *)(param_1 + 0x148) + 0x1c) <
        *(int *)(*(longlong *)(param_1 + 0x148) + 0x28)) {
      local_40 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x38) + 0x40))
                           (*(undefined8 *)(param_1 + 0x148));
    }
    else {
      local_40 = (longlong)*(int *)(*(longlong *)(param_1 + 0x148) + 0x28) +
                 *(longlong *)(*(longlong *)(param_1 + 0x148) + 0x20);
    }
    if (local_40 != 0) {
      if (*(int *)(*(longlong *)(param_1 + 0x148) + 0x1c) <
          *(int *)(*(longlong *)(param_1 + 0x148) + 0x28)) {
        local_30 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x38) + 0x40))
                             (*(undefined8 *)(param_1 + 0x148));
      }
      else {
        local_30 = *(int *)(*(longlong *)(param_1 + 0x148) + 0x28) +
                   (int)*(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0x20);
      }
      local_c4 = local_30;
      if ((*(int *)(*(longlong *)(param_1 + 0x148) + 0x28) < 1) ||
         (0xd7ff < *(ushort *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x30) +
                    (longlong)(*(int *)(*(longlong *)(param_1 + 0x148) + 0x28) + -1) * 2))) {
        local_8c = FUN_143b08190(*(undefined8 *)(param_1 + 0x148));
      }
      else {
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x148) + 0x28) + -1;
        *(int *)(*(longlong *)(param_1 + 0x148) + 0x28) = iVar4;
        local_8c = (uint)*(ushort *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x30) +
                          (longlong)iVar4 * 2);
      }
      local_c0 = local_8c;
      local_98 = (short *)(param_2 + 0x10 + (ulonglong)*(uint *)(param_2 + 4));
      local_c8 = 3;
      local_b4 = 1;
      if ((*(uint *)(param_2 + 8) & 2) != 0) {
        local_c8 = 2;
        local_b4 = 0;
      }
      do {
        if (local_c0 == 0xffffffff) {
          if (local_b4 == 2) {
            if (local_a4 < local_c4) {
              local_c4 = local_a4;
            }
            else if (local_c4 == local_30) {
              lVar5 = (longlong)local_30 - *(longlong *)(*(longlong *)(param_1 + 0x148) + 0x20);
              if ((lVar5 < 0) || (*(int *)(*(longlong *)(param_1 + 0x148) + 0x1c) < lVar5)) {
                FUN_143b08380(*(undefined8 *)(param_1 + 0x148),(longlong)local_30);
              }
              else {
                local_70 = (undefined4)lVar5;
                *(undefined4 *)(*(longlong *)(param_1 + 0x148) + 0x28) = local_70;
              }
              if ((*(int *)(*(longlong *)(param_1 + 0x148) + 0x28) < 1) ||
                 (0xd7ff < *(ushort *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x30) +
                            (longlong)(*(int *)(*(longlong *)(param_1 + 0x148) + 0x28) + -1) * 2)))
              {
                FUN_143b08190(*(undefined8 *)(param_1 + 0x148));
              }
              else {
                *(int *)(*(longlong *)(param_1 + 0x148) + 0x28) =
                     *(int *)(*(longlong *)(param_1 + 0x148) + 0x28) + -1;
              }
            }
LAB_143ac9db5:
            if (local_c4 == local_30) {
              lVar5 = (longlong)local_30 - *(longlong *)(*(longlong *)(param_1 + 0x148) + 0x20);
              if ((lVar5 < 0) || (*(int *)(*(longlong *)(param_1 + 0x148) + 0x1c) < lVar5)) {
                FUN_143b08380(*(undefined8 *)(param_1 + 0x148),(longlong)local_30);
              }
              else {
                local_50 = (undefined4)lVar5;
                *(undefined4 *)(*(longlong *)(param_1 + 0x148) + 0x28) = local_50;
              }
              if ((*(int *)(*(longlong *)(param_1 + 0x148) + 0x28) < 1) ||
                 (0xd7ff < *(ushort *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x30) +
                            (longlong)(*(int *)(*(longlong *)(param_1 + 0x148) + 0x28) + -1) * 2)))
              {
                FUN_143b08190(*(undefined8 *)(param_1 + 0x148));
              }
              else {
                *(int *)(*(longlong *)(param_1 + 0x148) + 0x28) =
                     *(int *)(*(longlong *)(param_1 + 0x148) + 0x28) + -1;
              }
              if (*(int *)(*(longlong *)(param_1 + 0x148) + 0x1c) <
                  *(int *)(*(longlong *)(param_1 + 0x148) + 0x28)) {
                local_28 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x38) + 0x40)
                           )(*(undefined8 *)(param_1 + 0x148));
              }
              else {
                local_28 = *(int *)(*(longlong *)(param_1 + 0x148) + 0x28) +
                           (int)*(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0x20);
              }
              local_c4 = local_28;
            }
            lVar5 = (longlong)local_c4 - *(longlong *)(*(longlong *)(param_1 + 0x148) + 0x20);
            if ((-1 < lVar5) && (lVar5 <= *(int *)(*(longlong *)(param_1 + 0x148) + 0x1c))) {
              local_68 = (undefined4)lVar5;
              *(undefined4 *)(*(longlong *)(param_1 + 0x148) + 0x28) = local_68;
              return local_c4;
            }
            FUN_143b08380(*(undefined8 *)(param_1 + 0x148),(longlong)local_c4);
            return local_c4;
          }
          local_b4 = 2;
          local_c8 = 1;
        }
        if (local_b4 == 1) {
          if (local_c0 < 0x10000) {
            if (((int)local_c0 < 0xd800) || (0xdbff < (int)local_c0)) {
              local_78 = 0;
            }
            else {
              local_78 = 0x140;
            }
            local_c8 = *(ushort *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x40) +
                        (longlong)
                        (int)((local_c0 & 0x1f) +
                             (uint)*(ushort *)
                                    (*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x40) +
                                    (longlong)(local_78 + ((int)local_c0 >> 5)) * 2) * 4) * 2);
          }
          else if (local_c0 < 0x110000) {
            uVar3 = (short)((int)local_c0 >> 10) + 0xd7c0;
            iVar4 = (**(code **)(*(longlong *)(param_1 + 0x168) + 0x50))
                              (*(undefined2 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x40) +
                                (longlong)
                                (int)((uVar3 & 0x1f) +
                                     (uint)*(ushort *)
                                            (*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x40) +
                                            (longlong)((int)(uint)uVar3 >> 5) * 2) * 4) * 2));
            if (iVar4 < 1) {
              local_c8 = *(ushort *)(*(longlong *)(param_1 + 0x168) + 0x60);
            }
            else {
              local_c8 = *(ushort *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x40) +
                          (longlong)
                          (int)((local_c0 & 0x1f) +
                               (uint)*(ushort *)
                                      (*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x40) +
                                      (longlong)(iVar4 + ((int)(local_c0 & 0x3ff) >> 5)) * 2) * 4) *
                          2);
            }
          }
          else {
            local_c8 = *(ushort *)(*(longlong *)(param_1 + 0x168) + 0x60);
          }
          if ((local_c8 & 0x4000) != 0) {
            *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
            local_c8 = local_c8 & 0xbfff;
          }
        }
        uVar3 = local_98[(ulonglong)local_c8 + 4];
        local_98 = (short *)(param_2 + 0x10 + (ulonglong)(*(int *)(param_2 + 4) * (uint)uVar3));
        if (*local_98 == -1) {
          if (*(int *)(*(longlong *)(param_1 + 0x148) + 0x1c) <
              *(int *)(*(longlong *)(param_1 + 0x148) + 0x28)) {
            local_20 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x38) + 0x40))
                                 (*(undefined8 *)(param_1 + 0x148));
          }
          else {
            local_20 = *(int *)(*(longlong *)(param_1 + 0x148) + 0x28) +
                       (int)*(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0x20);
          }
          local_c4 = local_20;
        }
        if (local_98[1] == 0) {
          if (*local_98 != 0) {
            sVar1 = 0;
          }
        }
        else if ((sVar1 == 0) || (*local_98 != sVar1)) {
          if (*(int *)(*(longlong *)(param_1 + 0x148) + 0x1c) <
              *(int *)(*(longlong *)(param_1 + 0x148) + 0x28)) {
            local_38 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x38) + 0x40))
                                 (*(undefined8 *)(param_1 + 0x148));
          }
          else {
            local_38 = *(int *)(*(longlong *)(param_1 + 0x148) + 0x28) +
                       (int)*(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0x20);
          }
          local_a4 = local_38;
          sVar1 = local_98[1];
        }
        else {
          local_c4 = local_a4;
          sVar1 = 0;
          if ((uVar2 & 1) != 0) {
            lVar5 = (longlong)local_a4 - *(longlong *)(*(longlong *)(param_1 + 0x148) + 0x20);
            if ((-1 < lVar5) && (lVar5 <= *(int *)(*(longlong *)(param_1 + 0x148) + 0x1c))) {
              local_60 = (undefined4)lVar5;
              *(undefined4 *)(*(longlong *)(param_1 + 0x148) + 0x28) = local_60;
              return local_a4;
            }
            FUN_143b08380(*(undefined8 *)(param_1 + 0x148),(longlong)local_a4);
            return local_a4;
          }
        }
        if (uVar3 == 0) goto LAB_143ac9db5;
        if (local_b4 == 1) {
          if ((*(int *)(*(longlong *)(param_1 + 0x148) + 0x28) < 1) ||
             (0xd7ff < *(ushort *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x30) +
                        (longlong)(*(int *)(*(longlong *)(param_1 + 0x148) + 0x28) + -1) * 2))) {
            local_84 = FUN_143b08190(*(undefined8 *)(param_1 + 0x148));
          }
          else {
            iVar4 = *(int *)(*(longlong *)(param_1 + 0x148) + 0x28) + -1;
            *(int *)(*(longlong *)(param_1 + 0x148) + 0x28) = iVar4;
            local_84 = (uint)*(ushort *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x30) +
                              (longlong)iVar4 * 2);
          }
          local_c0 = local_84;
        }
        else if (local_b4 == 0) {
          local_b4 = 1;
        }
      } while( true );
    }
  }
  return -1;
}



// FUNCTION 143aca020 FUN_143aca020 body=62 status=ok
// SIG undefined FUN_143aca020(void)

undefined4 FUN_143aca020(longlong param_1)

{
  undefined4 local_18;
  
  local_18 = 0;
  if (*(longlong *)(param_1 + 0x168) != 0) {
    local_18 = FUN_143b08c60(*(undefined8 *)(param_1 + 0x168));
  }
  return local_18;
}



// FUNCTION 143aca060 FUN_143aca060 body=250 status=ok
// SIG undefined FUN_143aca060(void)

void FUN_143aca060(longlong param_1)

{
  undefined8 uVar1;
  undefined4 local_18 [6];
  
  local_18[0] = 0;
  uVar1 = FUN_143b07d10(0,0,0,local_18);
  *(undefined8 *)(param_1 + 0x148) = uVar1;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined1 *)(param_1 + 0x174) = 1;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 1;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  return;
}



// FUNCTION 143aca160 FUN_143aca160 body=251 status=ok
// SIG undefined FUN_143aca160(void)

void FUN_143aca160(void)

{
  char cVar1;
  undefined4 local_58 [2];
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_58[0] = 0;
  local_38 = FUN_143a8d310(0x28);
  if (local_38 == 0) {
    local_40 = 0;
  }
  else {
    local_40 = FUN_143b09f50(local_38,FUN_143a8d180,0,local_58);
  }
  local_30 = local_40;
  DAT_146bc5a20 = local_40;
  if (local_40 != 0) {
    cVar1 = FUN_143a8b110(local_58[0]);
    if (cVar1 != '\0') {
      local_48 = FUN_143a8d310(0x10);
      if (local_48 == 0) {
        local_50 = 0;
      }
      else {
        local_50 = FUN_143b0a190(local_48,local_58);
      }
      local_20 = local_50;
      local_28 = local_50;
      FUN_143acb220(DAT_146bc5a20,local_50,local_58);
    }
  }
  FUN_143aa77b0(2,FUN_143acb780);
  return;
}



// FUNCTION 143aca260 FUN_143aca260 body=379 status=ok
// SIG undefined FUN_143aca260(void)

bool FUN_143aca260(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong local_20;
  
  if (param_2 == 0) {
    (**(code **)(*param_1 + 0x48))(param_1);
    bVar3 = true;
  }
  else {
    iVar1 = FUN_143b07900(param_1[0x29]);
    if (param_2 == iVar1) {
      (**(code **)(*param_1 + 0x50))(param_1);
      bVar3 = true;
    }
    else if (param_2 < 0) {
      (**(code **)(*param_1 + 0x48))(param_1);
      bVar3 = false;
    }
    else {
      lVar2 = FUN_143b07900(param_1[0x29]);
      if (lVar2 < param_2) {
        (**(code **)(*param_1 + 0x50))(param_1);
        bVar3 = false;
      }
      else {
        FUN_143b08040(param_1[0x29],(longlong)param_2);
        if (*(int *)(param_1[0x29] + 0x1c) < *(int *)(param_1[0x29] + 0x28)) {
          local_20 = (**(code **)(*(longlong *)(param_1[0x29] + 0x38) + 0x40))(param_1[0x29]);
        }
        else {
          local_20 = (longlong)*(int *)(param_1[0x29] + 0x28) + *(longlong *)(param_1[0x29] + 0x20);
        }
        iVar1 = (**(code **)(*param_1 + 0x78))(param_1,local_20 & 0xffffffff);
        bVar3 = iVar1 == param_2;
      }
    }
  }
  return bVar3;
}



// FUNCTION 143aca3e0 FUN_143aca3e0 body=144 status=ok
// SIG undefined FUN_143aca3e0(void)

int FUN_143aca3e0(longlong *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 200))(param_1);
  if (param_1[0x29] == 0) {
    *(undefined4 *)(param_1 + 0x2e) = 0;
    *(undefined1 *)((longlong)param_1 + 0x174) = 1;
    iVar1 = -1;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x174) = 0;
    iVar1 = FUN_143b07900(param_1[0x29]);
    FUN_143b08380(param_1[0x29],(longlong)iVar1);
  }
  return iVar1;
}



// FUNCTION 143aca470 FUN_143aca470 body=36 status=ok
// SIG undefined FUN_143aca470(void)

void FUN_143aca470(longlong param_1)

{
  FUN_143b09660(param_1,*(int *)(param_1 + 8) + -1);
  return;
}



// FUNCTION 143aca4a0 FUN_143aca4a0 body=191 status=ok
// SIG undefined FUN_143aca4a0(void)

longlong * FUN_143aca4a0(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)(ulonglong)(uint)(int)*(char *)((longlong)param_1 + 0x174);
  if ((int)*(char *)((longlong)param_1 + 0x174) == 0) {
    if ((param_1[0x29] != 0) && (iVar1 = (**(code **)(*param_1 + 0x70))(param_1), iVar1 != 0)) {
      (**(code **)(*param_1 + 0x70))(param_1);
      (**(code **)(*param_1 + 0x58))(param_1);
      if (0 < (int)param_1[0x31]) {
        (**(code **)(*param_1 + 200))(param_1);
      }
      uVar2 = (**(code **)(*param_1 + 0x68))(param_1);
      return (longlong *)(ulonglong)uVar2;
    }
    *(undefined4 *)(param_1 + 0x2e) = 0;
    *(undefined1 *)((longlong)param_1 + 0x174) = 1;
    plVar3 = param_1;
  }
  return plVar3;
}



// FUNCTION 143aca560 FUN_143aca560 body=120 status=ok
// SIG undefined FUN_143aca560(void)

undefined4 FUN_143aca560(longlong *param_1,int param_2)

{
  undefined4 local_res10;
  undefined4 local_18;
  
  local_18 = (**(code **)(*param_1 + 0x70))(param_1);
  for (local_res10 = param_2; 0 < local_res10; local_res10 = local_res10 + -1) {
    local_18 = (**(code **)(*param_1 + 0x68))(param_1);
  }
  for (; local_res10 < 0; local_res10 = local_res10 + 1) {
    local_18 = (**(code **)(*param_1 + 0x58))(param_1);
  }
  return local_18;
}



// FUNCTION 143aca5e0 FUN_143aca5e0 body=276 status=ok
// SIG undefined FUN_143aca5e0(void)

int FUN_143aca5e0(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x30] != 0) {
    if (*(int *)((longlong)param_1 + 0x18c) < (int)param_1[0x31] + -1) {
      *(int *)((longlong)param_1 + 0x18c) = *(int *)((longlong)param_1 + 0x18c) + 1;
      iVar2 = *(int *)(param_1[0x30] + (longlong)*(int *)((longlong)param_1 + 0x18c) * 4);
      FUN_143b08380(param_1[0x29],(longlong)iVar2);
      return iVar2;
    }
    (**(code **)(*param_1 + 200))(param_1);
  }
  uVar1 = (**(code **)(*param_1 + 0x70))(param_1);
  *(undefined4 *)(param_1 + 0x2f) = 0;
  iVar2 = FUN_143ac88c0(param_1,*(undefined8 *)(param_1[0x2d] + 8));
  if ((int)param_1[0x2f] != 0) {
    iVar2 = FUN_143ac6130(param_1,uVar1,iVar2,0);
  }
  return iVar2;
}



// FUNCTION 143aca700 FUN_143aca700 body=24 status=ok
// SIG undefined FUN_143aca700(void)

void FUN_143aca700(undefined8 param_1)

{
  FUN_143aca470(param_1);
  return;
}



// FUNCTION 143aca720 FUN_143aca720 body=2017 status=ok
// SIG undefined FUN_143aca720(void)

ulonglong FUN_143aca720(longlong *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int local_res10;
  uint local_58;
  uint local_54;
  int local_30;
  uint local_28;
  int local_20;
  
  if (param_1[0x30] != 0) {
    if ((*(int *)param_1[0x30] < param_2) &&
       (param_2 <= *(int *)(param_1[0x30] + (longlong)((int)param_1[0x31] + -1) * 4))) {
      *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
      while ((*(int *)((longlong)param_1 + 0x18c) < (int)param_1[0x31] &&
             (*(int *)(param_1[0x30] + (longlong)*(int *)((longlong)param_1 + 0x18c) * 4) < param_2)
             )) {
        *(int *)((longlong)param_1 + 0x18c) = *(int *)((longlong)param_1 + 0x18c) + 1;
      }
      *(int *)((longlong)param_1 + 0x18c) = *(int *)((longlong)param_1 + 0x18c) + -1;
      if (*(int *)((longlong)param_1 + 0x18c) < 1) {
        *(undefined1 *)((longlong)param_1 + 0x174) = 0;
      }
      FUN_143b08380(param_1[0x29],
                    (longlong)
                    *(int *)(param_1[0x30] + (longlong)*(int *)((longlong)param_1 + 0x18c) * 4));
      return (ulonglong)*(uint *)(param_1[0x30] + (longlong)*(int *)((longlong)param_1 + 0x18c) * 4)
      ;
    }
    (**(code **)(*param_1 + 200))(param_1);
  }
  if ((param_1[0x29] == 0) || (lVar2 = FUN_143b07900(param_1[0x29]), lVar2 < param_2)) {
    uVar3 = (**(code **)(*param_1 + 0x50))(param_1);
  }
  else if (param_2 < 0) {
    uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
  }
  else if (*(longlong *)(param_1[0x2d] + 0x18) == 0) {
    if (*(longlong *)(param_1[0x2d] + 0x20) == 0) {
      FUN_143b08380(param_1[0x29],(longlong)param_2);
      uVar3 = (**(code **)(*param_1 + 0x58))(param_1);
    }
    else {
      FUN_143b08380(param_1[0x29],(longlong)param_2);
      if ((*(int *)(param_1[0x29] + 0x28) < *(int *)(param_1[0x29] + 0x2c)) &&
         (*(ushort *)
           (*(longlong *)(param_1[0x29] + 0x30) + (longlong)*(int *)(param_1[0x29] + 0x28) * 2) <
          0xd800)) {
        *(int *)(param_1[0x29] + 0x28) = *(int *)(param_1[0x29] + 0x28) + 1;
      }
      else {
        FUN_143b07920(param_1[0x29]);
      }
      FUN_143ac93c0(param_1,*(undefined8 *)(param_1[0x2d] + 0x20));
      uVar1 = (**(code **)(*param_1 + 0x68))(param_1);
      do {
        local_54 = uVar1;
        if (param_2 <= (int)local_54) {
          uVar1 = (**(code **)(*param_1 + 0x58))(param_1);
          if (param_2 <= (int)uVar1) {
            uVar3 = (**(code **)(*param_1 + 0x58))(param_1);
            return uVar3;
          }
          return (ulonglong)uVar1;
        }
        uVar1 = (**(code **)(*param_1 + 0x68))(param_1);
      } while ((int)uVar1 < param_2);
      uVar3 = (ulonglong)local_54;
    }
  }
  else {
    FUN_143b08380(param_1[0x29],(longlong)param_2);
    if (*(int *)(param_1[0x29] + 0x1c) < *(int *)(param_1[0x29] + 0x28)) {
      local_30 = (**(code **)(*(longlong *)(param_1[0x29] + 0x38) + 0x40))(param_1[0x29]);
    }
    else {
      local_30 = *(int *)(param_1[0x29] + 0x28) + (int)*(undefined8 *)(param_1[0x29] + 0x20);
    }
    local_res10 = param_2;
    if (local_30 != param_2) {
      if ((*(int *)(param_1[0x29] + 0x28) < *(int *)(param_1[0x29] + 0x2c)) &&
         (*(ushort *)
           (*(longlong *)(param_1[0x29] + 0x30) + (longlong)*(int *)(param_1[0x29] + 0x28) * 2) <
          0xd800)) {
        *(int *)(param_1[0x29] + 0x28) = *(int *)(param_1[0x29] + 0x28) + 1;
      }
      else {
        FUN_143b07920(param_1[0x29]);
      }
      if (*(int *)(param_1[0x29] + 0x1c) < *(int *)(param_1[0x29] + 0x28)) {
        local_20 = (**(code **)(*(longlong *)(param_1[0x29] + 0x38) + 0x40))(param_1[0x29]);
      }
      else {
        local_20 = *(int *)(param_1[0x29] + 0x28) + (int)*(undefined8 *)(param_1[0x29] + 0x20);
      }
      local_res10 = local_20;
    }
    if ((*(int *)(param_1[0x29] + 0x28) < 1) ||
       (0xd7ff < *(ushort *)
                  (*(longlong *)(param_1[0x29] + 0x30) +
                  (longlong)(*(int *)(param_1[0x29] + 0x28) + -1) * 2))) {
      FUN_143b08190(param_1[0x29]);
    }
    else {
      *(int *)(param_1[0x29] + 0x28) = *(int *)(param_1[0x29] + 0x28) + -1;
    }
    FUN_143ac88c0(param_1,*(undefined8 *)(param_1[0x2d] + 0x18));
    if (*(int *)(param_1[0x29] + 0x1c) < *(int *)(param_1[0x29] + 0x28)) {
      local_28 = (**(code **)(*(longlong *)(param_1[0x29] + 0x38) + 0x40))(param_1[0x29]);
    }
    else {
      local_28 = *(int *)(param_1[0x29] + 0x28) + (int)*(undefined8 *)(param_1[0x29] + 0x20);
    }
    local_58 = local_28;
    while (local_res10 <= (int)local_58) {
      local_58 = (**(code **)(*param_1 + 0x58))(param_1);
    }
    uVar3 = (ulonglong)local_58;
  }
  return uVar3;
}



// FUNCTION 143acaf10 FUN_143acaf10 body=768 status=ok
// SIG undefined FUN_143acaf10(void)

int FUN_143acaf10(longlong *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_38;
  int local_30;
  undefined4 local_28;
  
  if (param_1[0x30] != 0) {
    if (0 < *(int *)((longlong)param_1 + 0x18c)) {
      *(int *)((longlong)param_1 + 0x18c) = *(int *)((longlong)param_1 + 0x18c) + -1;
      if (*(int *)((longlong)param_1 + 0x18c) < 1) {
        *(undefined1 *)((longlong)param_1 + 0x174) = 0;
      }
      iVar1 = *(int *)(param_1[0x30] + (longlong)*(int *)((longlong)param_1 + 0x18c) * 4);
      FUN_143b08380(param_1[0x29],(longlong)iVar1);
      return iVar1;
    }
    (**(code **)(*param_1 + 200))(param_1);
  }
  if ((param_1[0x29] == 0) || (iVar1 = (**(code **)(*param_1 + 0x70))(param_1), iVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x2e) = 0;
    *(undefined1 *)((longlong)param_1 + 0x174) = 1;
    local_30 = -1;
  }
  else if ((*(longlong *)(param_1[0x2d] + 0x20) == 0) && (*(longlong *)(param_1[0x2d] + 0x18) == 0))
  {
    iVar1 = (**(code **)(*param_1 + 0x70))(param_1);
    if ((*(int *)(param_1[0x29] + 0x28) < 1) ||
       (0xd7ff < *(ushort *)
                  (*(longlong *)(param_1[0x29] + 0x30) +
                  (longlong)(*(int *)(param_1[0x29] + 0x28) + -1) * 2))) {
      FUN_143b08190(param_1[0x29]);
    }
    else {
      *(int *)(param_1[0x29] + 0x28) = *(int *)(param_1[0x29] + 0x28) + -1;
    }
    local_30 = FUN_143ac93c0(param_1,*(undefined8 *)(param_1[0x2d] + 0x10));
    if (local_30 == -1) {
      local_30 = 0;
      FUN_143b08380(param_1[0x29],0);
    }
    local_28 = 0;
    local_38 = 0;
    while ((iVar2 = (**(code **)(*param_1 + 0x68))(param_1), iVar2 != -1 && (iVar2 < iVar1))) {
      local_28 = (undefined4)param_1[0x2e];
      local_38 = 1;
      local_30 = iVar2;
    }
    FUN_143b08380(param_1[0x29],(longlong)local_30);
    *(undefined4 *)(param_1 + 0x2e) = local_28;
    *(undefined1 *)((longlong)param_1 + 0x174) = local_38;
  }
  else {
    local_30 = FUN_143ac93c0(param_1,*(undefined8 *)(param_1[0x2d] + 0x10));
    if ((int)param_1[0x2f] != 0) {
      local_30 = FUN_143ac6130(param_1,local_30,iVar1,1);
    }
  }
  return local_30;
}



// FUNCTION 143acb220 FUN_143acb220 body=49 status=ok
// SIG undefined FUN_143acb220(void)

undefined8 FUN_143acb220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143b09430(param_1,param_2,param_3);
  return param_2;
}



// FUNCTION 143acb260 FUN_143acb260 body=242 status=ok
// SIG undefined FUN_143acb260(void)

longlong FUN_143acb260(longlong param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    if (param_2 == 0) {
      *param_3 = 1;
    }
    else {
      lVar2 = FUN_143b07740(*(undefined8 *)(param_1 + 0x148));
      uVar3 = FUN_143b07330(*(undefined8 *)(param_1 + 0x148),param_2,0,1,param_3);
      *(undefined8 *)(param_1 + 0x148) = uVar3;
      cVar1 = FUN_143a8b0e0(*param_3);
      if (cVar1 == '\0') {
        FUN_143b08380(*(undefined8 *)(param_1 + 0x148),lVar2);
        lVar4 = FUN_143b07740(*(undefined8 *)(param_1 + 0x148));
        if (lVar4 != lVar2) {
          *param_3 = 1;
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 143acb360 FUN_143acb360 body=107 status=ok
// SIG undefined FUN_143acb360(void)

void FUN_143acb360(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_143aa79f0(*(undefined8 *)(param_1 + 0x180));
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  return;
}



// FUNCTION 143acb3d0 FUN_143acb3d0 body=52 status=ok
// SIG undefined FUN_143acb3d0(void)

void FUN_143acb3d0(longlong *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x34) = param_2;
  (**(code **)(*param_1 + 200))(param_1);
  return;
}



// FUNCTION 143acb410 FUN_143acb410 body=377 status=ok
// SIG undefined FUN_143acb410(void)

void FUN_143acb410(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 local_48 [2];
  undefined8 *local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_48[0] = 0;
  (**(code **)(*param_1 + 200))(param_1);
  lVar1 = FUN_143b07bf0(param_1[0x29],param_2,local_48);
  param_1[0x29] = lVar1;
  if (param_1[0x2b] == 0) {
    local_38 = FUN_143a8d310(0x48);
    if (local_38 == 0) {
      local_30 = 0;
    }
    else {
      local_30 = FUN_143aa73a0(local_38,param_2);
    }
    local_28 = local_30;
    param_1[0x2b] = local_30;
  }
  else {
    FUN_143aa7640(param_1[0x2b],param_2);
  }
  if ((param_1[0x2a] != param_1[0x2b]) && (param_1[0x2a] != param_1[0x2c])) {
    local_40 = (undefined8 *)param_1[0x2a];
    local_20 = local_40;
    if (local_40 == (undefined8 *)0x0) {
      local_18 = 0;
    }
    else {
      local_18 = (**(code **)*local_40)(local_40,1);
    }
  }
  param_1[0x2a] = param_1[0x2b];
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}



// FUNCTION 143acb590 FUN_143acb590 body=481 status=ok
// SIG undefined FUN_143acb590(void)

void FUN_143acb590(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong local_38;
  
  cVar2 = FUN_143a8b0e0(*param_3);
  if (cVar2 == '\0') {
    (**(code **)(*param_1 + 200))(param_1);
    lVar3 = FUN_143b07330(param_1[0x29],param_2,0,1,param_3);
    param_1[0x29] = lVar3;
    if (param_1[0x2c] == 0) {
      lVar3 = FUN_143a8d310(0x20);
      if (lVar3 == 0) {
        local_38 = 0;
      }
      else {
        local_38 = FUN_143aa5e40(lVar3,&PTR_145cf51a0,0);
      }
      param_1[0x2c] = local_38;
      if (param_1[0x2c] == 0) {
        *param_3 = 7;
        return;
      }
    }
    if (((param_1[0x2a] != param_1[0x2b]) && (param_1[0x2a] != param_1[0x2c])) &&
       (puVar1 = (undefined8 *)param_1[0x2a], puVar1 != (undefined8 *)0x0)) {
      (**(code **)*puVar1)(puVar1,1);
    }
    param_1[0x2a] = param_1[0x2c];
    (**(code **)(*param_1 + 0x48))(param_1);
  }
  return;
}



// FUNCTION 143acb780 FUN_143acb780 body=110 status=ok
// SIG undefined FUN_143acb780(void)

undefined8 FUN_143acb780(void)

{
  if (DAT_146bc5a20 != (undefined8 *)0x0) {
    if (DAT_146bc5a20 != (undefined8 *)0x0) {
      (**(code **)*DAT_146bc5a20)(DAT_146bc5a20,1);
    }
    DAT_146bc5a20 = (undefined8 *)0x0;
  }
  FUN_143a9a9f0(&DAT_146bc5a28);
  return 1;
}



// FUNCTION 143acb7f0 FUN_143acb7f0 body=39 status=ok
// SIG undefined FUN_143acb7f0(void)

undefined8 * FUN_143acb7f0(undefined8 *param_1)

{
  *param_1 = icu_53::ICUNotifier::vftable;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 143acb820 FUN_143acb820 body=149 status=ok
// SIG undefined FUN_143acb820(void)

void FUN_143acb820(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_20 [8];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  *param_1 = icu_53::ICUNotifier::vftable;
  FUN_143a8ab50(local_20,&DAT_146bc5a48);
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[1] = 0;
  FUN_143a8ad90(local_20);
  return;
}



// FUNCTION 143acb8c0 FUN_143acb8c0 body=54 status=ok
// SIG undefined FUN_143acb8c0(void)

undefined8 FUN_143acb8c0(undefined8 param_1,uint param_2)

{
  FUN_143acb820(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143acb900 FUN_143acb900 body=371 status=ok
// SIG undefined FUN_143acb900(void)

void FUN_143acb900(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int local_48;
  longlong local_38;
  undefined1 local_30 [8];
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  cVar1 = FUN_143a8b110(*param_3);
  if (cVar1 != '\0') {
    if (param_2 == 0) {
      *param_3 = 1;
    }
    else {
      cVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
      if (cVar1 != '\0') {
        FUN_143a8ab50(local_30,&DAT_146bc5a48);
        if (param_1[1] == 0) {
          lVar3 = FUN_143a8d310(0x28);
          if (lVar3 == 0) {
            local_38 = 0;
          }
          else {
            local_38 = FUN_143b09000(lVar3,5,param_3);
          }
          local_28 = local_38;
          param_1[1] = local_38;
        }
        else {
          local_48 = 0;
          iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(param_1[1]);
          for (; local_48 < iVar2; local_48 = local_48 + 1) {
            local_20 = FUN_143b09610(param_1[1],local_48);
            if (param_2 == local_20) {
              FUN_143a8ad90(local_30);
              return;
            }
          }
        }
        FUN_143b09430(param_1[1],param_2,param_3);
        FUN_143a8ad90(local_30);
      }
    }
  }
  return;
}



// FUNCTION 143acba80 FUN_143acba80 body=173 status=ok
// SIG undefined FUN_143acba80(void)

void FUN_143acba80(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int local_28;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  if (param_1[1] != 0) {
    FUN_143a8ab50(local_18,&DAT_146bc5a48);
    if (param_1[1] != 0) {
      local_28 = 0;
      iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(param_1[1]);
      for (; local_28 < iVar1; local_28 = local_28 + 1) {
        uVar2 = FUN_143b09610(param_1[1],local_28);
        (**(code **)(*param_1 + 0x28))(param_1,uVar2);
      }
    }
    FUN_143a8ad90(local_18);
  }
  return;
}



// FUNCTION 143acbb30 FUN_143acbb30 body=355 status=ok
// SIG undefined FUN_143acbb30(void)

void FUN_143acbb30(longlong param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int local_48;
  undefined1 local_38 [8];
  longlong local_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  cVar1 = FUN_143a8b110(*param_3);
  if (cVar1 != '\0') {
    if (param_2 == 0) {
      *param_3 = 1;
    }
    else {
      FUN_143a8ab50(local_38,&DAT_146bc5a48);
      if (*(longlong *)(param_1 + 8) != 0) {
        local_48 = 0;
        iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(*(undefined8 *)(param_1 + 8));
        for (; local_48 < iVar2; local_48 = local_48 + 1) {
          local_30 = FUN_143b09610(*(undefined8 *)(param_1 + 8),local_48);
          if (param_2 == local_30) {
            FUN_143b09be0(*(undefined8 *)(param_1 + 8),local_48);
            iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                    ::GetIndex(*(undefined8 *)(param_1 + 8));
            if (iVar2 == 0) {
              local_28 = *(undefined8 **)(param_1 + 8);
              if (local_28 == (undefined8 *)0x0) {
                local_20 = 0;
              }
              else {
                local_20 = (**(code **)*local_28)(local_28,1);
              }
              *(undefined8 *)(param_1 + 8) = 0;
            }
            FUN_143a8ad90(local_38);
            return;
          }
        }
      }
      FUN_143a8ad90(local_38);
    }
  }
  return;
}



// FUNCTION 143acbca0 _ExceptionHolder body=76 status=ok
// SIG undefined _ExceptionHolder(_ExceptionHolder * this, exception_ptr * param_1, void * param_2)

/* Library Function - Single Match
    public: __cdecl Concurrency::details::_ExceptionHolder::_ExceptionHolder(class
   std::exception_ptr const & __ptr64,void * __ptr64) __ptr64
   
   Libraries: Visual Studio 2012 Debug, Visual Studio 2012 Release */

_ExceptionHolder * __thiscall
Concurrency::details::_ExceptionHolder::_ExceptionHolder
          (_ExceptionHolder *this,exception_ptr *param_1,void *param_2)

{
  *(undefined4 *)this = 1;
  FUN_143a8d3a0(this + 8,param_1);
  *(void **)(this + 0x30) = param_2;
  return this;
}



// FUNCTION 143acbcf0 FUN_143acbcf0 body=73 status=ok
// SIG undefined FUN_143acbcf0(void)

undefined8 * FUN_143acbcf0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  FUN_143acde10(param_1,FUN_143a913e0,FUN_143a91380,0,param_2);
  return param_1;
}



// FUNCTION 143acbd40 FUN_143acbd40 body=76 status=ok
// SIG undefined FUN_143acbd40(void)

undefined8 * FUN_143acbd40(undefined8 *param_1)

{
  undefined4 local_18 [6];
  
  *param_1 = 0;
  local_18[0] = 0;
  FUN_143acde10(param_1,FUN_143a913e0,FUN_143a91380,0,local_18);
  return param_1;
}



// FUNCTION 143acbd90 FUN_143acbd90 body=145 status=ok
// SIG undefined FUN_143acbd90(void)

undefined8 *
FUN_143acbd90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_143acb7f0(param_1);
  *param_1 = icu_53::ICUService::vftable;
  FUN_143a8d3a0(param_1 + 2,param_2,param_3,param_4,uVar1);
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 143acbe30 FUN_143acbe30 body=44 status=ok
// SIG undefined FUN_143acbe30(void)

undefined8 * FUN_143acbe30(undefined8 *param_1)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::ICUServiceFactory::vftable;
  return param_1;
}



// FUNCTION 143acbe60 CXMLParser body=82 status=ok
// SIG undefined CXMLParser(CXMLParser * this, IXMLDOMNode * param_1)

/* Library Function - Single Match
    protected: __cdecl CXMLParser::CXMLParser(struct IXMLDOMNode * __ptr64) __ptr64
   
   Library: Visual Studio 2010 Debug */

CXMLParser * __thiscall CXMLParser::CXMLParser(CXMLParser *this,IXMLDOMNode *param_1)

{
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  GetTestRenderTransformPivot(this);
  *(undefined ***)this = icu_53::ICUServiceKey::vftable;
  FUN_143a8d3a0(this + 8,param_1,in_R8,in_R9,uVar1);
  return this;
}



// FUNCTION 143acbec0 FUN_143acbec0 body=118 status=ok
// SIG undefined FUN_143acbec0(void)

undefined8 *
FUN_143acbec0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  FUN_143acbe30(param_1);
  *param_1 = icu_53::SimpleFactory::vftable;
  param_1[1] = param_2;
  FUN_143a8d3a0(param_1 + 2,param_3);
  *(undefined1 *)(param_1 + 7) = param_4;
  return param_1;
}



// FUNCTION 143acbf40 FUN_143acbf40 body=23 status=ok
// SIG undefined FUN_143acbf40(void)

undefined8 * FUN_143acbf40(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}



// FUNCTION 143acbf60 FUN_143acbf60 body=102 status=ok
// SIG undefined FUN_143acbf60(void)

undefined8 * FUN_143acbf60(undefined8 *param_1,undefined8 param_2,char param_3)

{
  *param_1 = param_2;
  *(bool *)(param_1 + 1) = param_3 == '\0';
  if (*(char *)(param_1 + 1) != '\0') {
    FUN_143ab2410(*param_1);
  }
  return param_1;
}



// FUNCTION 143acbfd0 FUN_143acbfd0 body=110 status=ok
// SIG undefined FUN_143acbfd0(void)

void FUN_143acbfd0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143a8dc60(param_1 + 8);
  return;
}



// FUNCTION 143acc040 FUN_143acc040 body=44 status=ok
// SIG undefined FUN_143acc040(void)

void FUN_143acc040(longlong param_1)

{
  FUN_143a8acf0(param_1 + 0x58);
  FUN_143acc070(param_1);
  return;
}



// FUNCTION 143acc070 FUN_143acc070 body=38 status=ok
// SIG undefined FUN_143acc070(void)

void FUN_143acc070(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_143ab2e80(*param_1);
  }
  return;
}



// FUNCTION 143acc0a0 FUN_143acc0a0 body=189 status=ok
// SIG undefined FUN_143acc0a0(void)

void FUN_143acc0a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_20 [8];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  *param_1 = icu_53::ICUService::vftable;
  FUN_143a8ab50(local_20,&DAT_146bc5a78);
  FUN_143acc610(param_1);
  puVar1 = (undefined8 *)param_1[8];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[8] = 0;
  FUN_143a8ad90(local_20);
  FUN_143a8dc60(param_1 + 2);
  FUN_143acb820(param_1);
  return;
}



// FUNCTION 143acc160 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::ICUServiceFactory::vftable;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143acc190 FUN_143acc190 body=56 status=ok
// SIG undefined FUN_143acc190(void)

void FUN_143acc190(undefined8 *param_1)

{
  *param_1 = icu_53::ICUServiceKey::vftable;
  FUN_143a8dc60(param_1 + 1);
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143acc1d0 FUN_143acc1d0 body=136 status=ok
// SIG undefined FUN_143acc1d0(void)

void FUN_143acc1d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::SimpleFactory::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143a8dc60(param_1 + 2);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143acc260 FUN_143acc260 body=91 status=ok
// SIG undefined FUN_143acc260(void)

void FUN_143acc260(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}



// FUNCTION 143acc2c0 FUN_143acc2c0 body=40 status=ok
// SIG undefined FUN_143acc2c0(void)

void FUN_143acc2c0(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    FUN_143ab2470(*param_1);
  }
  return;
}



// FUNCTION 143acc2f0 FUN_143acc2f0 body=58 status=ok
// SIG undefined FUN_143acc2f0(void)

bool FUN_143acc2f0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_143a8afa0(param_1,param_2);
  return cVar1 == '\0';
}



// FUNCTION 143acc330 FUN_143acc330 body=54 status=ok
// SIG undefined FUN_143acc330(void)

undefined8 FUN_143acc330(undefined8 param_1,uint param_2)

{
  FUN_143acbfd0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143acc370 FUN_143acc370 body=54 status=ok
// SIG undefined FUN_143acc370(void)

undefined8 FUN_143acc370(undefined8 param_1,uint param_2)

{
  FUN_143acc040(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143acc3b0 FID_conflict:`scalar_deleting_destructor' body=54 status=ok
// SIG undefined FID_conflict:`scalar_deleting_destructor'(void)

/* Library Function - Multiple Matches With Different Base Names
    protected: void * __ptr64 __cdecl Concurrency::details::SchedulerProxy::`scalar deleting
   destructor'(unsigned int) __ptr64
    public: void * __ptr64 __cdecl Concurrency::details::Mailbox<class
   Concurrency::details::InternalContextBase>::Segment::`scalar deleting destructor'(unsigned int)
   __ptr64
    public: void * __ptr64 __cdecl Concurrency::details::Mailbox<class
   Concurrency::details::_UnrealizedChore>::Segment::`scalar deleting destructor'(unsigned int)
   __ptr64
    public: void * __ptr64 __cdecl Concurrency::details::WorkQueue::`scalar deleting
   destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2010 Debug, Visual Studio 2012 Debug */

undefined8 FID_conflict__scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  FUN_143acc070(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143acc3f0 FUN_143acc3f0 body=54 status=ok
// SIG undefined FUN_143acc3f0(void)

undefined8 FUN_143acc3f0(undefined8 param_1,uint param_2)

{
  FUN_143acc0a0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143acc430 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143acc470 FUN_143acc470 body=54 status=ok
// SIG undefined FUN_143acc470(void)

undefined8 FUN_143acc470(undefined8 param_1,uint param_2)

{
  FUN_143acc190(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143acc4b0 FUN_143acc4b0 body=54 status=ok
// SIG undefined FUN_143acc4b0(void)

undefined8 FUN_143acc4b0(undefined8 param_1,uint param_2)

{
  FUN_143acc1d0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143acc4f0 FUN_143acc4f0 body=75 status=ok
// SIG undefined FUN_143acc4f0(void)

bool FUN_143acc4f0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = _guard_xfg_dispatch_icall_nop
                    (param_2,0,&icu_53::EventListener::RTTI_Type_Descriptor,
                     &icu_53::ServiceListener::RTTI_Type_Descriptor,0);
  return lVar1 != 0;
}



// FUNCTION 143acc540 FUN_143acc540 body=75 status=ok
// SIG undefined FUN_143acc540(void)

void FUN_143acc540(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143a904f0(param_1);
  FUN_143a8f030(param_1,uVar1,0,param_2,param_3,param_4);
  return;
}



// FUNCTION 143acc590 FUN_143acc590 body=65 status=ok
// SIG undefined FUN_143acc590(void)

void FUN_143acc590(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined2 local_res10 [12];
  
  local_res10[0] = param_2;
  uVar1 = FUN_143a904f0(param_1);
  FUN_143a8f0d0(param_1,uVar1,0,local_res10,0,1);
  return;
}



// FUNCTION 143acc5e0 FUN_143acc5e0 body=41 status=ok
// SIG undefined FUN_143acc5e0(void)

void FUN_143acc5e0(longlong param_1,undefined8 param_2)

{
  FUN_143a8e070(param_2,param_1 + 8);
  return;
}



// FUNCTION 143acc610 FUN_143acc610 body=284 status=ok
// SIG undefined FUN_143acc610(void)

void FUN_143acc610(longlong param_1)

{
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_143acc370(*(longlong *)(param_1 + 0x58),1);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FID_conflict__scalar_deleting_destructor_(*(longlong *)(param_1 + 0x50),1);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FID_conflict__scalar_deleting_destructor_(*(longlong *)(param_1 + 0x48),1);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 143acc730 FUN_143acc730 body=90 status=ok
// SIG undefined FUN_143acc730(void)

void FUN_143acc730(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FID_conflict__scalar_deleting_destructor_(*(longlong *)(param_1 + 0x48),1);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 143acc790 FUN_143acc790 body=58 status=ok
// SIG undefined FUN_143acc790(void)

undefined4 FUN_143acc790(longlong param_1)

{
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    local_18 = 0;
  }
  else {
    local_18 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
               ::GetIndex(*(undefined8 *)(param_1 + 0x40));
  }
  return local_18;
}



// FUNCTION 143acc7d0 FUN_143acc7d0 body=209 status=ok
// SIG undefined FUN_143acc7d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143acc7d0(longlong param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  cVar1 = FUN_143a8b110(*param_4);
  if (cVar1 != '\0') {
    FUN_143a8ac30(local_38);
    uVar2 = (**(code **)(*param_2 + 0x20))(param_2,local_38);
    cVar1 = FUN_143a8dd00(param_1 + 0x10,uVar2);
    if (cVar1 != '\0') {
      local_48 = (**(code **)(*param_3 + 0x68))(param_3,*(undefined8 *)(param_1 + 8));
      FUN_143a8dc60(local_38);
      return local_48;
    }
    FUN_143a8dc60(local_38);
  }
  return 0;
}



// FUNCTION 143acc8b0 FUN_143acc8b0 body=150 status=ok
// SIG undefined FUN_143acc8b0(void)

undefined8 FUN_143acc8b0(undefined8 param_1,IXMLDOMNode *param_2,undefined4 *param_3)

{
  char cVar1;
  CXMLParser *this;
  undefined8 local_30;
  undefined8 local_28;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if ((cVar1 == '\0') && (param_2 != (IXMLDOMNode *)0x0)) {
    this = (CXMLParser *)FUN_143a8d310(0x30);
    if (this == (CXMLParser *)0x0) {
      local_30 = 0;
    }
    else {
      local_30 = CXMLParser::CXMLParser(this,param_2);
    }
    local_28 = local_30;
  }
  else {
    local_28 = 0;
  }
  return local_28;
}



// FUNCTION 143acc950 FUN_143acc950 body=177 status=ok
// SIG undefined FUN_143acc950(void)

undefined8
FUN_143acc950(undefined8 param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
             undefined4 *param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_143a8b110(*param_5);
  if (cVar1 != '\0') {
    if ((param_2 != 0) && (cVar1 = FUN_143a90330(param_3), cVar1 == '\0')) {
      lVar2 = FUN_143a8d310(0x40);
      if (lVar2 != 0) {
        uVar3 = FUN_143acbec0(lVar2,param_2,param_3,param_4);
        return uVar3;
      }
      return 0;
    }
    *param_5 = 1;
  }
  return 0;
}



// FUNCTION 143acca10 FUN_143acca10 body=75 status=ok
// SIG undefined FUN_143acca10(void)

void FUN_143acca10(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x40))(param_1,param_2);
  FUN_143acc590(param_2,0x2f);
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
  return;
}



// FUNCTION 143acca60 GetGameplayTaskAvatar body=40 status=ok
// SIG undefined GetGameplayTaskAvatar(void)

void IGameplayTaskOwnerInterface::GetGameplayTaskAvatar(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  return;
}



// FUNCTION 143acca90 operator() body=37 status=ok
// SIG undefined operator()(void)

void <lambda_04c79fd4136733a528ca0b360569665b>::operator()(undefined8 *param_1,undefined8 param_2)

{
  FUN_143ab32d0(*param_1,param_2);
  return;
}



// FUNCTION 143accac0 FUN_143accac0 body=110 status=ok
// SIG undefined FUN_143accac0(void)

undefined8 FUN_143accac0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x38) != '\0') &&
     (cVar1 = FUN_143a8dd00(param_1 + 0x10,param_2), cVar1 != '\0')) {
    FUN_143a8dcd0(param_4,param_1 + 0x10);
    return param_4;
  }
  FUN_143a90e90(param_4);
  return param_4;
}



// FUNCTION 143accb30 FUN_143accb30 body=19 status=ok
// SIG undefined FUN_143accb30(void)

void FUN_143accb30(void)

{
  FUN_143acd8b0();
  return;
}



// FUNCTION 143accb50 FUN_143accb50 body=19 status=ok
// SIG undefined FUN_143accb50(void)

void FUN_143accb50(void)

{
  FUN_143acd8c0();
  return;
}



// FUNCTION 143accb70 FUN_143accb70 body=15 status=ok
// SIG undefined FUN_143accb70(void)

longlong FUN_143accb70(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143accb80 FUN_143accb80 body=53 status=ok
// SIG undefined FUN_143accb80(void)

void FUN_143accb80(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*param_1 + 0x30))(param_1,param_2,0,param_3);
  return;
}



// FUNCTION 143accbc0 FUN_143accbc0 body=3238 status=ok
// SIG undefined FUN_143accbc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143accbc0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,
             undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_258 [32];
  undefined4 *local_238;
  char local_228;
  char local_227;
  undefined1 local_226;
  longlong local_220;
  longlong local_218;
  int local_210;
  int local_20c;
  int local_208;
  int local_204;
  undefined1 local_200 [16];
  int local_1f0;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  longlong local_1d8;
  undefined8 *local_1d0;
  int local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  _ExceptionHolder *local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong *local_178;
  longlong local_170;
  longlong *local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  exception_ptr local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x58))(param_1);
    if (cVar1 == '\0') {
      local_218 = 0;
      local_226 = param_4 != 0;
      local_168 = param_1;
      FUN_143acbf60(local_200,&DAT_146bc5a78,local_226);
      if (param_1[9] == 0) {
        local_1c0 = FUN_143a8d310(0x58);
        if (local_1c0 == 0) {
          local_150 = 0;
        }
        else {
          local_150 = FUN_143acbcf0(local_1c0,param_5);
        }
        local_138 = local_150;
        local_168[9] = local_150;
        if (local_168[9] == 0) {
          local_58 = 0;
          FUN_143acc2c0(local_200);
          return local_58;
        }
        cVar1 = FUN_143a8b0e0(*param_5);
        if (cVar1 != '\0') {
          local_1a8 = param_1[9];
          local_148 = local_1a8;
          if (local_1a8 == 0) {
            local_b8 = 0;
          }
          else {
            local_b8 = FID_conflict__scalar_deleting_destructor_(local_1a8,1);
          }
          local_128 = 0;
          FUN_143acc2c0(local_200);
          return local_128;
        }
        <lambda_04c79fd4136733a528ca0b360569665b>::operator()(param_1[9],FUN_143ace7d0);
      }
      FUN_143a8ac30(local_40);
      FUN_143acbf40(&local_220);
      local_228 = '\0';
      local_204 = 0;
      local_1f0 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(param_1[8]);
      local_227 = '\x01';
      if (param_4 != 0) {
        for (local_20c = 0; local_20c < local_1f0; local_20c = local_20c + 1) {
          lVar3 = FUN_143b09610(param_1[8],local_20c);
          if (param_4 == lVar3) {
            local_204 = local_20c + 1;
            break;
          }
        }
        if (local_204 == 0) {
          *param_5 = 1;
          local_78 = 0;
          FUN_143acc260(&local_220);
          FUN_143a8dc60(local_40);
          FUN_143acc2c0(local_200);
          return local_78;
        }
        local_227 = '\0';
      }
      while( true ) {
        FUN_143a90910(local_40);
        (**(code **)(*param_2 + 0x28))(param_2,local_40);
        local_218 = <lambda_04c79fd4136733a528ca0b360569665b>::operator()(param_1[9],local_40);
        if (local_218 != 0) break;
        local_228 = '\x01';
        local_208 = local_204;
        while (local_208 < local_1f0) {
          local_1c8 = local_208;
          local_178 = (longlong *)FUN_143b09610(param_1[8],local_208);
          local_208 = local_208 + 1;
          local_1e8 = (undefined8 *)
                      (**(code **)(*local_178 + 0x10))(local_178,param_2,param_1,param_5);
          cVar1 = FUN_143a8b0e0(*param_5);
          if (cVar1 != '\0') {
            local_118 = local_1e8;
            local_1d0 = local_1e8;
            if (local_1e8 == (undefined8 *)0x0) {
              local_a8 = 0;
            }
            else {
              local_a8 = (**(code **)*local_1e8)(local_1e8,1);
            }
            local_108 = 0;
            FUN_143acc260(&local_220);
            FUN_143a8dc60(local_40);
            FUN_143acc2c0(local_200);
            return local_108;
          }
          if (local_1e8 != (undefined8 *)0x0) {
            local_198 = (_ExceptionHolder *)FUN_143a8d310(0x38);
            if (local_198 == (_ExceptionHolder *)0x0) {
              local_158 = 0;
            }
            else {
              local_158 = Concurrency::details::_ExceptionHolder::_ExceptionHolder
                                    (local_198,local_40,local_1e8);
            }
            local_50 = local_158;
            local_218 = local_158;
            if (local_158 == 0) {
              local_f8 = local_1e8;
              local_1e0 = local_1e8;
              if (local_1e8 == (undefined8 *)0x0) {
                local_98 = 0;
              }
              else {
                local_98 = (**(code **)*local_1e8)(local_1e8,1);
              }
              *param_5 = 7;
              local_e8 = 0;
              FUN_143acc260(&local_220);
              FUN_143a8dc60(local_40);
              FUN_143acc2c0(local_200);
              return local_e8;
            }
            goto LAB_143acd3d9;
          }
        }
        if (local_220 == 0) {
          local_188 = FUN_143a8d310(0x28);
          if (local_188 == 0) {
            local_1b8 = 0;
          }
          else {
            local_238 = param_5;
            local_1b8 = FUN_143b09140(local_188,FUN_143a8d350,0,5);
          }
          local_68 = local_1b8;
          local_220 = local_1b8;
          cVar1 = FUN_143a8b0e0(*param_5);
          if (cVar1 != '\0') {
            local_d8 = 0;
            FUN_143acc260(&local_220);
            FUN_143a8dc60(local_40);
            FUN_143acc2c0(local_200);
            return local_d8;
          }
        }
        local_1b0 = FUN_143a8d310(0x28);
        if (local_1b0 == 0) {
          local_1a0 = 0;
        }
        else {
          local_1a0 = FUN_143a8d3a0(local_1b0,local_40);
        }
        local_88 = local_1a0;
        local_1d8 = local_1a0;
        if ((local_1a0 == 0) || (cVar1 = FUN_143a90330(local_1a0), cVar1 != '\0')) {
          *param_5 = 7;
          local_c8 = 0;
          FUN_143acc260(&local_220);
          FUN_143a8dc60(local_40);
          FUN_143acc2c0(local_200);
          return local_c8;
        }
        FUN_143b09430(local_220,local_1d8);
        cVar1 = FUN_143a8b0e0(*param_5);
        if (cVar1 != '\0') {
          local_60 = 0;
          FUN_143acc260(&local_220);
          FUN_143a8dc60(local_40);
          FUN_143acc2c0(local_200);
          return local_60;
        }
        cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
        if (cVar1 == '\0') break;
      }
LAB_143acd3d9:
      if (local_218 == 0) {
        FUN_143acc260(&local_220);
        FUN_143a8dc60(local_40);
        FUN_143acc2c0(local_200);
        local_70 = (**(code **)(*param_1 + 0x80))(param_1,param_2,param_3,param_5);
      }
      else {
        if ((local_228 != '\0') && (local_227 != '\0')) {
          FUN_143acdfd0(param_1[9],local_218 + 8,local_218,param_5);
          cVar1 = FUN_143a8b0e0(*param_5);
          if (cVar1 != '\0') {
            local_140 = local_218;
            local_190 = local_218;
            if (local_218 == 0) {
              local_130 = 0;
            }
            else {
              local_130 = FUN_143acc330(local_218,1);
            }
            local_120 = 0;
            FUN_143acc260(&local_220);
            FUN_143a8dc60(local_40);
            FUN_143acc2c0(local_200);
            return local_120;
          }
          if (local_220 != 0) {
            local_210 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                        ::GetIndex(local_220);
            while (local_210 = local_210 + -1, -1 < local_210) {
              local_110 = FUN_143b09610(local_220,local_210);
              FUN_143acdfd0(param_1[9],local_110,local_218,param_5);
              cVar1 = FUN_143a8b0e0(*param_5);
              if (cVar1 != '\0') {
                local_100 = local_218;
                local_180 = local_218;
                if (local_218 == 0) {
                  local_f0 = 0;
                }
                else {
                  local_f0 = FUN_143acc330(local_218,1);
                }
                local_e0 = 0;
                FUN_143acc260(&local_220);
                FUN_143a8dc60(local_40);
                FUN_143acc2c0(local_200);
                return local_e0;
              }
              FUN_143ace090(local_218);
              FUN_143b09be0(local_220,local_210);
            }
          }
        }
        if (param_3 != 0) {
          iVar2 = FUN_143acddd0(local_218 + 8,0x2f);
          if (iVar2 == 0) {
            FUN_143a90910(param_3);
            iVar2 = FUN_143a904f0(local_218 + 8);
            FUN_143acc540(param_3,local_218 + 8,1,iVar2 + -1);
          }
          else {
            FUN_143a8dcd0(param_3,local_218 + 8);
          }
          cVar1 = FUN_143a90330(param_3);
          if (cVar1 != '\0') {
            *param_5 = 7;
            local_d0 = local_218;
            local_170 = local_218;
            if (local_218 == 0) {
              local_c0 = 0;
            }
            else {
              local_c0 = FUN_143acc330(local_218,1);
            }
            local_b0 = 0;
            FUN_143acc260(&local_220);
            FUN_143a8dc60(local_40);
            FUN_143acc2c0(local_200);
            return local_b0;
          }
        }
        local_80 = (**(code **)(*param_1 + 0x68))(param_1,*(undefined8 *)(local_218 + 0x30));
        if ((local_228 != '\0') && (local_227 == '\0')) {
          local_a0 = local_218;
          local_160 = local_218;
          if (local_218 == 0) {
            local_90 = 0;
          }
          else {
            local_90 = FUN_143acc330(local_218,1);
          }
        }
        local_70 = local_80;
        FUN_143acc260(&local_220);
        FUN_143a8dc60(local_40);
        FUN_143acc2c0(local_200);
      }
    }
    else {
      local_70 = (**(code **)(*param_1 + 0x80))(param_1,param_2,param_3,param_5);
    }
  }
  else {
    local_70 = 0;
  }
  return local_70;
}



// FUNCTION 143acd870 FUN_143acd870 body=62 status=ok
// SIG undefined FUN_143acd870(void)

void FUN_143acd870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143accbc0(param_1,param_2,param_3,0,param_4);
  return;
}



// FUNCTION 143acd8b0 FUN_143acd8b0 body=8 status=ok
// SIG undefined FUN_143acd8b0(void)

undefined * FUN_143acd8b0(void)

{
  return &DAT_146bc5aa8;
}



// FUNCTION 143acd8c0 FUN_143acd8c0 body=8 status=ok
// SIG undefined FUN_143acd8c0(void)

undefined * FUN_143acd8c0(void)

{
  return &DAT_146bc5aa9;
}



// FUNCTION 143acd8d0 FUN_143acd8d0 body=438 status=ok
// SIG undefined FUN_143acd8d0(void)

undefined8 FUN_143acd8d0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  int local_58;
  undefined8 local_30;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar3 = FUN_143a8d310(0x58);
      if (lVar3 == 0) {
        local_30 = 0;
      }
      else {
        local_30 = FUN_143acbcf0(lVar3,param_2);
      }
      *(undefined8 *)(param_1 + 0x50) = local_30;
      if (*(longlong *)(param_1 + 0x50) == 0) {
        *param_2 = 7;
      }
      else if (*(longlong *)(param_1 + 0x40) != 0) {
        local_58 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                   ::GetIndex(*(undefined8 *)(param_1 + 0x40));
        while (local_58 = local_58 + -1, -1 < local_58) {
          plVar4 = (longlong *)FUN_143b09610(*(undefined8 *)(param_1 + 0x40),local_58);
          (**(code **)(*plVar4 + 0x18))(plVar4,*(undefined8 *)(param_1 + 0x50),param_2);
        }
        cVar1 = FUN_143a8b0e0(*param_2);
        if (cVar1 != '\0') {
          if (*(longlong *)(param_1 + 0x50) != 0) {
            FID_conflict__scalar_deleting_destructor_(*(longlong *)(param_1 + 0x50),1);
          }
          *(undefined8 *)(param_1 + 0x50) = 0;
        }
      }
    }
    uVar2 = *(undefined8 *)(param_1 + 0x50);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143acda90 FUN_143acda90 body=47 status=ok
// SIG undefined FUN_143acda90(void)

void FUN_143acda90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143acdac0(param_1,param_2,0,param_3);
  return;
}



// FUNCTION 143acdac0 FUN_143acdac0 body=747 status=ok
// SIG undefined FUN_143acdac0(void)

undefined8
FUN_143acdac0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *plVar3;
  undefined4 local_88 [2];
  longlong *local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined1 local_20 [8];
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_143b09b10(param_2);
  cVar2 = FUN_143a8b0e0(*param_4);
  if (cVar2 == '\0') {
    FUN_143a8ab50(local_20,&DAT_146bc5a78);
    local_68 = FUN_143acd8d0(param_1,param_4);
    if (local_68 != 0) {
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x60))(param_1,param_3,param_4);
      local_88[0] = 0xffffffff;
      do {
        do {
          local_60 = <lambda_04c79fd4136733a528ca0b360569665b>::operator()(local_68,local_88);
          if (local_60 == 0) goto LAB_143acdd1f;
          local_70 = *(undefined8 *)(local_60 + 0x10);
        } while ((plVar3 != (longlong *)0x0) &&
                (cVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,local_70), cVar2 == '\0'));
        local_78 = FUN_143a8d310(0x28);
        if (local_78 == 0) {
          local_58 = (undefined8 *)0x0;
        }
        else {
          local_58 = (undefined8 *)FUN_143a8d3a0(local_78,local_70);
        }
        puVar1 = local_58;
        local_38 = local_58;
        if ((local_58 == (undefined8 *)0x0) || (cVar2 = FUN_143a90330(local_58), cVar2 != '\0')) {
          local_28 = puVar1;
          if (puVar1 == (undefined8 *)0x0) {
            local_50 = 0;
          }
          else {
            local_50 = (**(code **)*puVar1)(puVar1,1);
          }
          *param_4 = 7;
          goto LAB_143acdd1f;
        }
        FUN_143b09430(param_2,puVar1,param_4);
        cVar2 = FUN_143a8b0e0(*param_4);
      } while (cVar2 == '\0');
      local_18 = puVar1;
      if (puVar1 == (undefined8 *)0x0) {
        local_48 = 0;
      }
      else {
        local_48 = (**(code **)*puVar1)(puVar1,1);
      }
LAB_143acdd1f:
      local_80 = plVar3;
      local_40 = plVar3;
      if (plVar3 == (longlong *)0x0) {
        local_30 = 0;
      }
      else {
        local_30 = (**(code **)*plVar3)(plVar3,1);
      }
    }
    FUN_143a8ad90(local_20);
    cVar2 = FUN_143a8b0e0(*param_4);
    if (cVar2 != '\0') {
      FUN_143b09b10(param_2);
    }
  }
  return param_2;
}



// FUNCTION 143acddb0 FUN_143acddb0 body=23 status=ok
// SIG undefined FUN_143acddb0(void)

undefined8 FUN_143acddb0(void)

{
  return 0;
}



// FUNCTION 143acddd0 FUN_143acddd0 body=50 status=ok
// SIG undefined FUN_143acddd0(void)

void FUN_143acddd0(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143a904f0(param_1);
  FUN_143a8eef0(param_1,param_2,0,uVar1);
  return;
}



// FUNCTION 143acde10 FUN_143acde10 body=148 status=ok
// SIG undefined FUN_143acde10(void)

void FUN_143acde10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    FUN_143ab3480(param_1 + 1,param_2,param_3,param_4,param_5);
    cVar1 = FUN_143a8b110(*param_5);
    if (cVar1 != '\0') {
      *param_1 = param_1 + 1;
      std::ios_base::precision((ios_base *)*param_1,0x143a8d350);
    }
  }
  return;
}



// FUNCTION 143acdeb0 FUN_143acdeb0 body=45 status=ok
// SIG undefined FUN_143acdeb0(void)

bool FUN_143acdeb0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_143acc790(param_1);
  return iVar1 == 0;
}



// FUNCTION 143acdee0 FUN_143acdee0 body=41 status=ok
// SIG undefined FUN_143acdee0(void)

void FUN_143acdee0(longlong param_1,undefined8 param_2)

{
  FUN_143a8dd00(param_2,param_1 + 8);
  return;
}



// FUNCTION 143acdf10 operator() body=37 status=ok
// SIG undefined operator()(void)

void <lambda_04c79fd4136733a528ca0b360569665b>::operator()(undefined8 *param_1,undefined8 param_2)

{
  FUN_143ab3590(*param_1,param_2);
  return;
}



// FUNCTION 143acdf40 FUN_143acdf40 body=40 status=ok
// SIG undefined FUN_143acdf40(void)

void FUN_143acdf40(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return;
}



// FUNCTION 143acdf70 FUN_143acdf70 body=65 status=ok
// SIG undefined FUN_143acdf70(void)

undefined8 FUN_143acdf70(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_143acddd0(param_1,0x2f);
  if (-1 < iVar1) {
    FUN_143ace4e0(param_1,0,iVar1 + 1);
  }
  return param_1;
}



// FUNCTION 143acdfc0 FUN_143acdfc0 body=16 status=ok
// SIG undefined FUN_143acdfc0(void)

undefined8 FUN_143acdfc0(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



// FUNCTION 143acdfd0 FUN_143acdfd0 body=130 status=ok
// SIG undefined FUN_143acdfd0(void)

void FUN_143acdfd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_143ab36d0(*param_1,local_20,param_3,param_4);
  return;
}



// FUNCTION 143ace060 FUN_143ace060 body=40 status=ok
// SIG undefined FUN_143ace060(void)

void FUN_143ace060(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_143b09b10(*(undefined8 *)(param_1 + 0x40));
  }
  return;
}



// FUNCTION 143ace090 FUN_143ace090 body=27 status=ok
// SIG undefined FUN_143ace090(void)

int * FUN_143ace090(int *param_1)

{
  *param_1 = *param_1 + 1;
  return param_1;
}



// FUNCTION 143ace0b0 FUN_143ace0b0 body=548 status=ok
// SIG undefined FUN_143ace0b0(void)

undefined8 * FUN_143ace0b0(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong local_50;
  undefined1 local_48 [8];
  longlong local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  cVar1 = FUN_143a8b110(*param_3);
  if ((cVar1 != '\0') && (param_2 != (undefined8 *)0x0)) {
    FUN_143a8ab50(local_48,&DAT_146bc5a78);
    if (param_1[8] == 0) {
      lVar2 = FUN_143a8d310(0x28);
      if (lVar2 == 0) {
        local_50 = 0;
      }
      else {
        local_50 = FUN_143b090a0(lVar2,FUN_143a8d180,0,param_3);
      }
      local_40 = local_50;
      param_1[8] = local_50;
      cVar1 = FUN_143a8b0e0(*param_3);
      if (cVar1 != '\0') {
        local_18 = (undefined8 *)param_1[8];
        if (local_18 == (undefined8 *)0x0) {
          local_28 = 0;
        }
        else {
          local_28 = (**(code **)*local_18)(local_18,1);
        }
        local_38 = (undefined8 *)0x0;
        FUN_143a8ad90(local_48);
        return local_38;
      }
    }
    FUN_143b09900(param_1[8],param_2,0,param_3);
    cVar1 = FUN_143a8b110(*param_3);
    if (cVar1 == '\0') {
      local_30 = param_2;
      if (param_2 == (undefined8 *)0x0) {
        local_20 = 0;
      }
      else {
        local_20 = (**(code **)*param_2)(param_2,1);
      }
      param_2 = (undefined8 *)0x0;
    }
    else {
      (**(code **)(*param_1 + 0x88))(param_1);
    }
    FUN_143a8ad90(local_48);
  }
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return param_2;
}



// FUNCTION 143ace2e0 FUN_143ace2e0 body=450 status=ok
// SIG undefined FUN_143ace2e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143ace2e0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_88;
  longlong *local_80;
  undefined8 *local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_88 = (longlong *)(**(code **)(*param_1 + 0x60))(param_1,param_3,param_5);
  if (local_88 != (longlong *)0x0) {
    FUN_143a8ac30(local_38);
    (**(code **)(*local_88 + 0x18))(local_88,local_38);
    local_48 = local_88;
    local_80 = local_88;
    if (local_88 == (longlong *)0x0) {
      local_68 = 0;
    }
    else {
      local_68 = (**(code **)*local_88)(local_88,1);
    }
    local_98 = param_5;
    local_70 = (**(code **)(*param_1 + 0x70))(param_1,param_2,local_38,param_4);
    if (local_70 != 0) {
      local_50 = (**(code **)(*param_1 + 0x40))(param_1,local_70,param_5);
      FUN_143a8dc60(local_38);
      return local_50;
    }
    FUN_143a8dc60(local_38);
  }
  if (param_2 != (undefined8 *)0x0) {
    local_78 = param_2;
    local_60 = param_2;
    (**(code **)*param_2)(param_2,1);
  }
  return 0;
}



// FUNCTION 143ace4b0 operator() body=37 status=ok
// SIG undefined operator()(void)

void <lambda_04c79fd4136733a528ca0b360569665b>::operator()(undefined8 *param_1,undefined8 param_2)

{
  FUN_143ab3830(*param_1,param_2);
  return;
}



// FUNCTION 143ace4e0 FUN_143ace4e0 body=90 status=ok
// SIG undefined FUN_143ace4e0(void)

void FUN_143ace4e0(undefined8 param_1,int param_2,int param_3)

{
  if ((param_2 < 1) && (param_3 == 0x7fffffff)) {
    FUN_143a90910(param_1);
  }
  else {
    FUN_143a8f0d0(param_1,param_2,param_3,0,0,0);
  }
  return;
}



// FUNCTION 143ace540 FUN_143ace540 body=103 status=ok
// SIG undefined FUN_143ace540(void)

void FUN_143ace540(longlong *param_1)

{
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_143a8ab50(local_18,&DAT_146bc5a78);
  (**(code **)(*param_1 + 0x78))(param_1);
  (**(code **)(*param_1 + 0x88))(param_1);
  FUN_143a8ad90(local_18);
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}



// FUNCTION 143ace5b0 operator() body=37 status=ok
// SIG undefined operator()(void)

void <lambda_04c79fd4136733a528ca0b360569665b>::operator()(undefined8 *param_1,__int64 param_2)

{
  std::ios_base::width((ios_base *)*param_1,param_2);
  return;
}



// FUNCTION 143ace5e0 FUN_143ace5e0 body=113 status=ok
// SIG undefined FUN_143ace5e0(void)

int * FUN_143ace5e0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    if (param_1 != (int *)0x0) {
      FUN_143acc330(param_1,1);
    }
    param_1 = (int *)0x0;
  }
  return param_1;
}



// FUNCTION 143ace660 FUN_143ace660 body=264 status=ok
// SIG undefined FUN_143ace660(void)

char FUN_143ace660(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  char cVar1;
  char local_48;
  undefined1 local_20 [8];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_48 = '\0';
  if ((param_2 != (undefined8 *)0x0) && (param_1[8] != 0)) {
    FUN_143a8ab50(local_20,&DAT_146bc5a78);
    cVar1 = FUN_143b09b90(param_1[8],param_2);
    if (cVar1 == '\0') {
      *param_3 = 1;
      if (param_2 != (undefined8 *)0x0) {
        (**(code **)*param_2)(param_2,1);
      }
    }
    else {
      (**(code **)(*param_1 + 0x88))(param_1);
      local_48 = '\x01';
    }
    FUN_143a8ad90(local_20);
  }
  if (local_48 != '\0') {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return local_48;
}



// FUNCTION 143ace770 FUN_143ace770 body=93 status=ok
// SIG undefined FUN_143ace770(void)

void FUN_143ace770(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(char *)(param_1 + 0x38) == '\0') {
    <lambda_04c79fd4136733a528ca0b360569665b>::operator()(param_2,param_1 + 0x10);
  }
  else {
    FUN_143acdfd0(param_2,param_1 + 0x10,param_1,param_3);
  }
  return;
}



// FUNCTION 143ace7d0 FUN_143ace7d0 body=24 status=ok
// SIG undefined FUN_143ace7d0(void)

void FUN_143ace7d0(undefined8 param_1)

{
  FUN_143ace5e0(param_1);
  return;
}



// FUNCTION 143ace7f0 FUN_143ace7f0 body=87 status=ok
// SIG undefined FUN_143ace7f0(void)

undefined8 * FUN_143ace7f0(undefined8 *param_1,undefined4 param_2)

{
  FUN_143acbe30(param_1);
  *param_1 = icu_53::LocaleKeyFactory::vftable;
  FUN_143a8ac30(param_1 + 1);
  *(undefined4 *)(param_1 + 6) = param_2;
  return param_1;
}



// FUNCTION 143ace850 FUN_143ace850 body=56 status=ok
// SIG undefined FUN_143ace850(void)

void FUN_143ace850(undefined8 *param_1)

{
  *param_1 = icu_53::LocaleKeyFactory::vftable;
  FUN_143a8dc60(param_1 + 1);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143ace890 FUN_143ace890 body=54 status=ok
// SIG undefined FUN_143ace890(void)

undefined8 FUN_143ace890(undefined8 param_1,uint param_2)

{
  FUN_143ace850(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143ace8d0 FUN_143ace8d0 body=269 status=ok
// SIG undefined FUN_143ace8d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143ace8d0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  longlong *local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_1a0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  cVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_4);
  if (cVar1 == '\0') {
    local_1a8 = 0;
  }
  else {
    local_1b8 = param_2;
    local_1b0 = (**(code **)(*param_2 + 0x48))(param_2);
    FUN_143a8aad0(local_198);
    (**(code **)(*local_1b8 + 0x58))(local_1b8,local_198);
    local_1c8 = param_4;
    local_1a8 = (**(code **)(*param_1 + 0x30))(param_1,local_198,local_1b0,param_3);
    FUN_143a8acf0(local_198);
  }
  return local_1a8;
}



// FUNCTION 143ace9e0 FUN_143ace9e0 body=194 status=ok
// SIG undefined FUN_143ace9e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143ace9e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_1a0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  if ((*(uint *)(param_1 + 0x30) & 1) == 0) {
    FUN_143a8aad0(local_198);
    FUN_143b0bb30(param_2,local_198);
    local_1a8 = FUN_143a98fb0(local_198,param_3,param_4);
    FUN_143a8acf0(local_198);
  }
  else {
    FUN_143a90e90(param_4);
    local_1a8 = param_4;
  }
  return local_1a8;
}



// FUNCTION 143aceab0 FUN_143aceab0 body=19 status=ok
// SIG undefined FUN_143aceab0(void)

void FUN_143aceab0(void)

{
  FUN_143acead0();
  return;
}



// FUNCTION 143acead0 FUN_143acead0 body=8 status=ok
// SIG undefined FUN_143acead0(void)

undefined * FUN_143acead0(void)

{
  return &DAT_146bc5aaa;
}



// FUNCTION 143aceae0 FUN_143aceae0 body=13 status=ok
// SIG undefined FUN_143aceae0(void)

undefined8 FUN_143aceae0(void)

{
  return 0;
}



// FUNCTION 143aceaf0 ue4sFetch body=23 status=ok
// SIG undefined ue4sFetch(void)

undefined8 MUTKSQLiteDBInner::ue4sFetch(void)

{
  return 0;
}



// FUNCTION 143aceb10 FUN_143aceb10 body=202 status=ok
// SIG undefined FUN_143aceb10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_143aceb10(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_57;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_50 = (**(code **)(*param_1 + 0x38))(param_1,param_3);
  if (local_50 == 0) {
    local_57 = 0;
  }
  else {
    FUN_143a8ac30(local_40);
    (**(code **)(*param_2 + 0x20))(param_2,local_40);
    lVar1 = <lambda_04c79fd4136733a528ca0b360569665b>::operator()(local_50,local_40);
    local_58 = lVar1 != 0;
    local_57 = local_58;
    FUN_143a8dc60(local_40);
  }
  return local_57;
}



// FUNCTION 143acebe0 FUN_143acebe0 body=231 status=ok
// SIG undefined FUN_143acebe0(void)

void FUN_143acebe0(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 local_24;
  longlong local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_18 = (**(code **)(*param_1 + 0x38))(param_1,param_3);
  if (local_18 != 0) {
    uVar1 = *(uint *)(param_1 + 6);
    local_20 = 0;
    local_24 = 0;
    do {
      while( true ) {
        local_20 = <lambda_04c79fd4136733a528ca0b360569665b>::operator()(local_18,&local_24);
        if (local_20 == 0) {
          return;
        }
        local_10 = *(undefined8 *)(local_20 + 0x10);
        if ((uVar1 & 1) == 0) break;
        <lambda_04c79fd4136733a528ca0b360569665b>::operator()(param_2,local_10);
      }
      FUN_143acdfd0(param_2,local_10,param_1,param_3);
      cVar2 = FUN_143a8b0e0(*param_3);
    } while (cVar2 == '\0');
  }
  return;
}



// FUNCTION 143acecd0 FUN_143acecd0 body=84 status=ok
// SIG undefined FUN_143acecd0(void)

undefined8 *
FUN_143acecd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143ace7f0(param_1,0,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::ICUResourceBundleFactory::vftable;
  FUN_143a8d3a0(param_1 + 7,param_2);
  return param_1;
}



// FUNCTION 143aced30 CMonikerFile body=74 status=ok
// SIG undefined CMonikerFile(CMonikerFile * this)

/* Library Function - Single Match
    public: __cdecl CMonikerFile::CMonikerFile(void) __ptr64
   
   Library: Visual Studio 2010 Debug */

CMonikerFile * __thiscall CMonikerFile::CMonikerFile(CMonikerFile *this)

{
  undefined8 in_R8;
  undefined8 in_R9;
  
  FUN_143ace7f0(this,0,in_R8,in_R9,0xfffffffffffffffe);
  *(undefined ***)this = icu_53::ICUResourceBundleFactory::vftable;
  FUN_143a8ac30(this + 0x38);
  return this;
}



// FUNCTION 143aced80 ~UPrimalCharacterSetting body=56 status=ok
// SIG undefined ~UPrimalCharacterSetting(void)

void UPrimalCharacterSetting::~UPrimalCharacterSetting(undefined8 *param_1)

{
  *param_1 = icu_53::ICUResourceBundleFactory::vftable;
  FUN_143a8dc60(param_1 + 7);
  FUN_143ace850(param_1);
  return;
}



// FUNCTION 143acedc0 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UPrimalCharacterSetting::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UPrimalCharacterSetting(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143acee00 FUN_143acee00 body=19 status=ok
// SIG undefined FUN_143acee00(void)

void FUN_143acee00(void)

{
  FUN_143acee20();
  return;
}



// FUNCTION 143acee20 FUN_143acee20 body=8 status=ok
// SIG undefined FUN_143acee20(void)

undefined * FUN_143acee20(void)

{
  return &DAT_146bc5aab;
}



// FUNCTION 143acee30 FUN_143acee30 body=59 status=ok
// SIG undefined FUN_143acee30(void)

undefined8 FUN_143acee30(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_143a8b110(*param_2);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_143b0b690(param_1 + 0x38);
  }
  return uVar2;
}



// FUNCTION 143acee70 FUN_143acee70 body=251 status=ok
// SIG undefined FUN_143acee70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143acee70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  int local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_38;
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_38 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  cVar1 = FUN_143a8b110(*param_5);
  if (cVar1 == '\0') {
    local_50 = 0;
  }
  else {
    local_60 = 0;
    local_68 = 0x14;
    local_58 = FUN_143a8f880(param_1 + 0x38,0,0x7fffffff,local_30);
    if (local_58 < 0x14) {
      local_48 = FUN_143a8d310(0x18);
      if (local_48 == 0) {
        local_50 = 0;
      }
      else {
        local_50 = FUN_143b0be10(local_48,local_30,param_2,param_5);
      }
    }
    else {
      local_50 = 0;
    }
  }
  return local_50;
}



// FUNCTION 143acef70 FUN_143acef70 body=107 status=ok
// SIG undefined FUN_143acef70(void)

undefined8 *
FUN_143acef70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  FUN_143acbd90(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::ICULocaleService::vftable;
  uVar1 = FUN_143a8b650();
  FUN_143a8a610(param_1 + 0xc,uVar1);
  FUN_143a8ac30(param_1 + 0x3b);
  return param_1;
}



// FUNCTION 143acefe0 FUN_143acefe0 body=327 status=ok
// SIG undefined FUN_143acefe0(void)

undefined8 * FUN_143acefe0(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int local_28;
  
  FUN_143ab1cf0(param_1);
  *param_1 = icu_53::ServiceEnumeration::vftable;
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  FUN_143b090a0(param_1 + 0xe,FUN_143a8d350,0,param_3);
  *(undefined4 *)(param_1 + 0x13) = 0;
  cVar1 = FUN_143a8b110(*param_3);
  if (cVar1 != '\0') {
    iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_2 + 0x70);
    for (local_28 = 0; local_28 < iVar2; local_28 = local_28 + 1) {
      plVar3 = (longlong *)FUN_143b09610(param_2 + 0x70,local_28);
      uVar4 = (**(code **)(*plVar3 + 0x30))(plVar3);
      FUN_143b09430(param_1 + 0xe,uVar4,param_3);
    }
    cVar1 = FUN_143a8b110(*param_3);
    if (cVar1 != '\0') {
      *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x98);
    }
  }
  return param_1;
}



// FUNCTION 143acf130 FUN_143acf130 body=176 status=ok
// SIG undefined FUN_143acf130(void)

undefined8 * FUN_143acf130(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_143ab1cf0(param_1);
  *param_1 = icu_53::ServiceEnumeration::vftable;
  param_1[0xc] = param_2;
  uVar1 = FUN_143ac4740(param_2);
  *(undefined4 *)(param_1 + 0xd) = uVar1;
  FUN_143b090a0(param_1 + 0xe,FUN_143a8d350,0,param_3,uVar2);
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_143acda90(param_1[0xc],param_1 + 0xe,param_3);
  return param_1;
}



// FUNCTION 143acf1e0 ~CHttpFile body=75 status=ok
// SIG void ~CHttpFile(CHttpFile * this)

/* Library Function - Single Match
    public: virtual __cdecl CHttpFile::~CHttpFile(void) __ptr64
   
   Library: Visual Studio 2005 Debug */

void __thiscall CHttpFile::~CHttpFile(CHttpFile *this)

{
  *(undefined ***)this = icu_53::ICULocaleService::vftable;
  FUN_143a8dc60(this + 0x1d8);
  FUN_143a8acf0(this + 0x60);
  FUN_143acc0a0(this);
  return;
}



// FUNCTION 143acf230 FUN_143acf230 body=56 status=ok
// SIG undefined FUN_143acf230(void)

void FUN_143acf230(undefined8 *param_1)

{
  *param_1 = icu_53::ServiceEnumeration::vftable;
  FUN_143b091e0(param_1 + 0xe);
  FUN_143ab1d60(param_1);
  return;
}



// FUNCTION 143acf270 FUN_143acf270 body=32 status=ok
// SIG undefined FUN_143acf270(void)

void FUN_143acf270(undefined8 param_1,undefined4 param_2)

{
  FUN_143b09610(param_1,param_2);
  return;
}



// FUNCTION 143acf290 `scalar_deleting_destructor' body=54 status=ok
// SIG void * `scalar_deleting_destructor'(CHttpFile * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl CHttpFile::`scalar deleting destructor'(unsigned int)
   __ptr64
   
   Library: Visual Studio 2005 Debug */

void * __thiscall CHttpFile::_scalar_deleting_destructor_(CHttpFile *this,uint param_1)

{
  ~CHttpFile(this);
  if ((param_1 & 1) != 0) {
    FUN_143a8d330(this);
  }
  return this;
}



// FUNCTION 143acf2d0 FUN_143acf2d0 body=54 status=ok
// SIG undefined FUN_143acf2d0(void)

undefined8 FUN_143acf2d0(undefined8 param_1,uint param_2)

{
  FUN_143acf230(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143acf310 FUN_143acf310 body=207 status=ok
// SIG undefined FUN_143acf310(void)

undefined8 * FUN_143acf310(undefined8 param_1)

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
  local_58[0] = 0;
  local_38 = FUN_143a8d310(0xa0);
  if (local_38 == 0) {
    local_40 = (undefined8 *)0x0;
  }
  else {
    local_40 = (undefined8 *)FUN_143acefe0(local_38,param_1,local_58);
  }
  local_20 = local_40;
  local_48 = local_40;
  cVar1 = FUN_143a8b0e0(local_58[0]);
  if (cVar1 != '\0') {
    local_30 = local_48;
    local_50 = local_48;
    if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,1);
    }
    local_48 = (undefined8 *)0x0;
  }
  return local_48;
}



// FUNCTION 143acf3e0 FUN_143acf3e0 body=76 status=ok
// SIG undefined FUN_143acf3e0(void)

undefined4 FUN_143acf3e0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 local_18;
  
  cVar1 = FUN_143acfc10(param_1,param_2);
  if (cVar1 == '\0') {
    local_18 = 0;
  }
  else {
    local_18 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
               ::GetIndex(param_1 + 0x70);
  }
  return local_18;
}



// FUNCTION 143acf430 FUN_143acf430 body=202 status=ok
// SIG undefined FUN_143acf430(void)

undefined8 * FUN_143acf430(undefined8 param_1)

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
  local_58[0] = 0;
  local_38 = FUN_143a8d310(0xa0);
  if (local_38 == 0) {
    local_40 = (undefined8 *)0x0;
  }
  else {
    local_40 = (undefined8 *)FUN_143acf130(local_38,param_1,local_58);
  }
  local_30 = local_40;
  local_48 = local_40;
  cVar1 = FUN_143a8b110(local_58[0]);
  if (cVar1 == '\0') {
    local_20 = local_48;
    local_50 = local_48;
    if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,1);
    }
    local_48 = (undefined8 *)0x0;
  }
  return local_48;
}



// FUNCTION 143acf500 FUN_143acf500 body=52 status=ok
// SIG undefined FUN_143acf500(void)

void FUN_143acf500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143acfc60(param_1);
  FUN_143b0c210(param_2,uVar1,param_3);
  return;
}



// FUNCTION 143acf540 FUN_143acf540 body=62 status=ok
// SIG undefined FUN_143acf540(void)

void FUN_143acf540(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143acfc60(param_1);
  FUN_143b0c250(param_2,uVar1,param_3,param_4);
  return;
}



// FUNCTION 143acf580 FUN_143acf580 body=62 status=ok
// SIG undefined FUN_143acf580(void)

void FUN_143acf580(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_143acf5c0(param_1,param_2,param_3,0,param_4);
  return;
}



// FUNCTION 143acf5c0 FUN_143acf5c0 body=502 status=ok
// SIG undefined FUN_143acf5c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143acf5c0(longlong *param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                      undefined4 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_68 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_98 = 0;
  cVar1 = FUN_143a8b0e0(*param_5);
  local_70 = local_98;
  if (cVar1 == '\0') {
    uVar2 = FUN_143a8c200(param_2);
    FUN_143a8d9f0(local_38,uVar2,0xffffffff,0);
    cVar1 = FUN_143a90330(local_38);
    if (cVar1 == '\0') {
      local_90 = (undefined8 *)(**(code **)(*param_1 + 0xb0))(param_1,local_38,param_3,param_5);
      if (local_90 != (undefined8 *)0x0) {
        if (param_4 == 0) {
          local_98 = FUN_143accb80(param_1,local_90,param_5);
        }
        else {
          FUN_143a8ac30(local_60);
          local_98 = (**(code **)(*param_1 + 0x30))(param_1,local_90,local_60,param_5);
          if (local_98 != 0) {
            FUN_143acdf70(local_60);
            FUN_143b0bb30(local_60,param_4);
          }
          FUN_143a8dc60(local_60);
        }
        local_78 = local_90;
        local_88 = local_90;
        if (local_90 == (undefined8 *)0x0) {
          local_80 = 0;
        }
        else {
          local_80 = (**(code **)*local_90)(local_90,1);
        }
      }
    }
    else {
      *param_5 = 7;
    }
    local_70 = local_98;
    FUN_143a8dc60(local_38);
  }
  return local_70;
}



// FUNCTION 143acf7c0 FUN_143acf7c0 body=65 status=ok
// SIG undefined FUN_143acf7c0(void)

void FUN_143acf7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143acf5c0(param_1,param_2,0xffffffff,param_3,param_4);
  return;
}



// FUNCTION 143acf810 FUN_143acf810 body=24 status=ok
// SIG undefined FUN_143acf810(void)

void FUN_143acf810(undefined8 param_1)

{
  FUN_143acf430(param_1);
  return;
}



// FUNCTION 143acf830 FUN_143acf830 body=19 status=ok
// SIG undefined FUN_143acf830(void)

void FUN_143acf830(void)

{
  FUN_143acf850();
  return;
}



// FUNCTION 143acf850 FUN_143acf850 body=8 status=ok
// SIG undefined FUN_143acf850(void)

undefined * FUN_143acf850(void)

{
  return &DAT_146bc5ae0;
}



// FUNCTION 143acf860 FUN_143acf860 body=82 status=ok
// SIG undefined FUN_143acf860(void)

void FUN_143acf860(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*param_1 + 0x90))(param_1,param_2,param_3,0xffffffff,0,param_4);
  return;
}



// FUNCTION 143acf8c0 FUN_143acf8c0 body=81 status=ok
// SIG undefined FUN_143acf8c0(void)

void FUN_143acf8c0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  (**(code **)(*param_1 + 0x90))(param_1,param_2,param_3,param_4,0,param_5);
  return;
}



// FUNCTION 143acf920 FUN_143acf920 body=256 status=ok
// SIG undefined FUN_143acf920(void)

undefined8
FUN_143acf920(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_38;
  
  lVar1 = FUN_143a8d310(0x70);
  if (lVar1 == 0) {
    local_38 = 0;
  }
  else {
    local_38 = FUN_143b0c780(lVar1,param_2,param_3,param_4,param_5);
  }
  if (local_38 == 0) {
    if (param_2 != (undefined8 *)0x0) {
      (**(code **)*param_2)(param_2,1);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x40))(param_1,local_38,param_6);
  }
  return uVar2;
}



// FUNCTION 143acfa20 FUN_143acfa20 body=222 status=ok
// SIG undefined FUN_143acfa20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143acfa20(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4,
             undefined8 param_5)

{
  undefined1 auStack_1e8 [32];
  uint local_1c8;
  undefined8 local_1c0;
  uint local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_198 [384];
  ulonglong local_18;
  
  local_1a8 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_143a8aad0(local_198);
  FUN_143b0bb30(param_3,local_198);
  local_1b8 = (uint)(param_4 == '\0');
  local_1c0 = param_5;
  local_1c8 = local_1b8;
  local_1b0 = (**(code **)(*param_1 + 0x90))(param_1,param_2,local_198,0xffffffff);
  FUN_143a8acf0(local_198);
  return local_1b0;
}



// FUNCTION 143acfb00 FUN_143acfb00 body=127 status=ok
// SIG undefined FUN_143acfb00(void)

void FUN_143acfb00(longlong param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*param_2 == 0x19) {
    *param_2 = 0;
  }
  cVar1 = FUN_143a8b110(*param_2);
  if (cVar1 != '\0') {
    uVar2 = FUN_143ac4740(*(undefined8 *)(param_1 + 0x60));
    *(undefined4 *)(param_1 + 0x68) = uVar2;
    *(undefined4 *)(param_1 + 0x98) = 0;
    FUN_143acda90(*(undefined8 *)(param_1 + 0x60),param_1 + 0x70,param_2);
  }
  return;
}



// FUNCTION 143acfb80 FUN_143acfb80 body=135 status=ok
// SIG undefined FUN_143acfb80(void)

undefined8 FUN_143acfb80(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  cVar2 = FUN_143acfc10(param_1,param_2);
  if ((cVar2 != '\0') &&
     (iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(param_1 + 0x70), *(int *)(param_1 + 0x98) < iVar3)) {
    uVar1 = *(undefined4 *)(param_1 + 0x98);
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
    uVar4 = FUN_143acf270(param_1 + 0x70,uVar1);
    return uVar4;
  }
  return 0;
}



// FUNCTION 143acfc10 FUN_143acfc10 body=79 status=ok
// SIG undefined FUN_143acfc10(void)

undefined8 FUN_143acfc10(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_143a8b110(*param_2);
  if (cVar1 != '\0') {
    iVar2 = FUN_143ac4740(*(undefined8 *)(param_1 + 0x60));
    if (*(int *)(param_1 + 0x68) == iVar2) {
      return 1;
    }
    *param_2 = 0x19;
  }
  return 0;
}



// FUNCTION 143acfc60 FUN_143acfc60 body=168 status=ok
// SIG undefined FUN_143acfc60(void)

longlong FUN_143acfc60(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  uVar2 = FUN_143a8b650();
  FUN_143a8ab50(local_18,&DAT_146bc5ab0);
  cVar1 = FUN_143acc2f0(uVar2,param_1 + 0x60);
  if (cVar1 != '\0') {
    FUN_143a8adb0(param_1 + 0x60,uVar2);
    FUN_143b0bcd0(uVar2,param_1 + 0x1d8);
    FUN_143acc730(param_1);
  }
  FUN_143a8ad90(local_18);
  return param_1 + 0x1d8;
}



// FUNCTION 143acfd10 FUN_143acfd10 body=104 status=ok
// SIG undefined FUN_143acfd10(void)

undefined8 FUN_143acfd10(undefined8 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    if (param_2 == 0) {
      uVar2 = param_1[1];
    }
    else if (param_2 == 1) {
      uVar2 = *param_1;
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



// FUNCTION 143acfd80 FUN_143acfd80 body=77 status=ok
// SIG undefined FUN_143acfd80(void)

void FUN_143acfd80(undefined8 *param_1,char *param_2,char *param_3)

{
  if (param_2 != (char *)0x0) {
    _guard_xfg_dispatch_icall_nop((char *)*param_1,param_2);
  }
  if (param_3 != (char *)0x0) {
    _guard_xfg_dispatch_icall_nop((char *)param_1[1],param_3);
  }
  return;
}



// FUNCTION 143acfdd0 FUN_143acfdd0 body=81 status=ok
// SIG undefined FUN_143acfdd0(void)

undefined8 * FUN_143acfdd0(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  undefined4 local_18;
  
  *param_1 = param_2;
  if (param_2 == (char *)0x0) {
    local_18 = 0;
  }
  else {
    sVar1 = _guard_xfg_dispatch_icall_nop(param_2);
    local_18 = (undefined4)sVar1;
  }
  *(undefined4 *)(param_1 + 1) = local_18;
  return param_1;
}



// FUNCTION 143acfe30 FUN_143acfe30 body=113 status=ok
// SIG undefined FUN_143acfe30(void)

longlong FUN_143acfe30(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_143aa03b0(param_1);
  *(undefined4 *)(param_1 + 0x38) = 0;
  puVar1 = (undefined1 *)FUN_143a8afe0(param_1,0);
  *puVar1 = 0;
  FUN_143acff50(param_1,param_2,param_3,param_4,uVar2);
  return param_1;
}



// FUNCTION 143acfeb0 FUN_143acfeb0 body=148 status=ok
// SIG undefined FUN_143acfeb0(void)

longlong FUN_143acfeb0(longlong param_1,undefined1 param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  undefined1 *puVar3;
  
  cVar2 = FUN_143ad0330(param_1,*(int *)(param_1 + 0x38) + 2,0,param_3);
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    puVar3 = (undefined1 *)FUN_143a8afe0(param_1,(longlong)iVar1);
    *puVar3 = param_2;
    puVar3 = (undefined1 *)FUN_143a8afe0(param_1,(longlong)*(int *)(param_1 + 0x38));
    *puVar3 = 0;
  }
  return param_1;
}



// FUNCTION 143acff50 FUN_143acff50 body=782 status=ok
// SIG undefined FUN_143acff50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143acff50(longlong param_1,char *param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  longlong lVar4;
  undefined1 *puVar5;
  char *pcVar6;
  int local_res18;
  undefined1 auStack_a8 [32];
  int local_88;
  int local_84;
  undefined8 local_80;
  size_t local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_60 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    if ((param_3 < -1) || ((param_2 == (char *)0x0 && (param_3 != 0)))) {
      *param_4 = 1;
    }
    else {
      local_res18 = param_3;
      if (param_3 < 0) {
        sVar3 = _guard_xfg_dispatch_icall_nop(param_2);
        local_res18 = (int)sVar3;
      }
      if (0 < local_res18) {
        lVar4 = FUN_143a8b510(param_1);
        if (param_2 == (char *)(lVar4 + *(int *)(param_1 + 0x38))) {
          iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(param_1);
          if (local_res18 < iVar2 - *(int *)(param_1 + 0x38)) {
            local_88 = *(int *)(param_1 + 0x38) + local_res18;
            *(int *)(param_1 + 0x38) = local_88;
            puVar5 = (undefined1 *)FUN_143a8afe0(param_1,(longlong)local_88);
            *puVar5 = 0;
          }
          else {
            *param_4 = 5;
          }
        }
        else {
          pcVar6 = (char *)FUN_143a8b510(param_1);
          if (((param_2 < pcVar6) ||
              (lVar4 = FUN_143a8b510(param_1), (char *)(lVar4 + *(int *)(param_1 + 0x38)) <= param_2
              )) || (iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                             ::GetIndex(param_1), local_res18 < iVar2 - *(int *)(param_1 + 0x38))) {
            cVar1 = FUN_143ad0330(param_1,*(int *)(param_1 + 0x38) + 1 + local_res18,0,param_4);
            if (cVar1 != '\0') {
              local_78 = (size_t)local_res18;
              lVar4 = FUN_143a8b510(param_1);
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar4 + *(int *)(param_1 + 0x38)),param_2,local_78);
              local_84 = *(int *)(param_1 + 0x38) + local_res18;
              *(int *)(param_1 + 0x38) = local_84;
              puVar5 = (undefined1 *)FUN_143a8afe0(param_1,(longlong)local_84);
              *puVar5 = 0;
            }
          }
          else {
            local_80 = FUN_143acfe30(local_58,param_2,local_res18,param_4);
            local_70 = local_80;
            local_68 = FUN_143ac3480(param_1,local_80,param_4);
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
            param_1 = local_68;
          }
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 143ad0270 FUN_143ad0270 body=178 status=ok
// SIG undefined FUN_143ad0270(void)

longlong FUN_143ad0270(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar2 = FUN_143a904f0(param_2);
  cVar1 = FUN_143ad0330(param_1,*(int *)(param_1 + 0x38) + 1 + iVar2,0,param_3);
  if (cVar1 != '\0') {
    iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1);
    iVar2 = *(int *)(param_1 + 0x38);
    lVar4 = FUN_143a8b510(param_1);
    iVar2 = FUN_143a8f880(param_2,0,0x7fffffff,lVar4 + *(int *)(param_1 + 0x38),iVar3 - iVar2,0);
    *(int *)(param_1 + 0x38) = iVar2 + *(int *)(param_1 + 0x38);
  }
  return param_1;
}



// FUNCTION 143ad0330 FUN_143ad0330 body=196 status=ok
// SIG undefined FUN_143ad0330(void)

undefined8 FUN_143ad0330(longlong param_1,int param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int local_res18;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 != '\0') {
    return 0;
  }
  iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_1);
  if (iVar2 < param_2) {
    local_res18 = param_3;
    if (param_3 == 0) {
      local_res18 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                    ::GetIndex(param_1);
      local_res18 = param_2 + local_res18;
    }
    if (((local_res18 <= param_2) ||
        (lVar3 = FUN_143a8cec0(param_1,local_res18,*(int *)(param_1 + 0x38) + 1), lVar3 == 0)) &&
       (lVar3 = FUN_143a8cec0(param_1,param_2,*(int *)(param_1 + 0x38) + 1), lVar3 == 0)) {
      *param_4 = 7;
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143ad0400 FUN_143ad0400 body=85 status=ok
// SIG undefined FUN_143ad0400(void)

longlong FUN_143ad0400(longlong param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 local_res10;
  
  local_res10 = param_2;
  if (param_2 < 0) {
    local_res10 = 0;
  }
  if (local_res10 < *(int *)(param_1 + 0x38)) {
    *(int *)(param_1 + 0x38) = local_res10;
    puVar1 = (undefined1 *)FUN_143a8afe0(param_1,(longlong)local_res10);
    *puVar1 = 0;
  }
  return param_1;
}



// FUNCTION 143ad0460 FUN_143ad0460 body=287 status=ok
// SIG undefined FUN_143ad0460(void)

int FUN_143ad0460(longlong param_1,longlong param_2,int param_3,char *param_4,undefined8 *param_5)

{
  int iVar1;
  int local_24;
  int local_20;
  int local_1c;
  char *local_10;
  
  local_1c = 0;
  iVar1 = param_3;
  while( true ) {
    do {
      local_24 = iVar1;
      if (local_24 <= local_1c) {
        return -1;
      }
      iVar1 = (local_1c + local_24) / 2;
      if (*(int *)(param_2 + (longlong)iVar1 * 4) < 0) {
        local_10 = (char *)((longlong)(int)(*(uint *)(param_2 + (longlong)iVar1 * 4) & 0x7fffffff) +
                           *(longlong *)(param_1 + 0x18));
      }
      else {
        local_10 = (char *)((longlong)*(int *)(param_2 + (longlong)iVar1 * 4) +
                           *(longlong *)(param_1 + 8));
      }
      if (*(char *)(param_1 + 0x2b) == '\0') {
        local_20 = _guard_xfg_dispatch_icall_nop(param_4,local_10);
      }
      else {
        local_20 = _guard_xfg_dispatch_icall_nop(param_4,local_10);
      }
    } while (local_20 < 0);
    if (local_20 < 1) break;
    local_1c = iVar1 + 1;
    iVar1 = local_24;
  }
  *param_5 = local_10;
  return iVar1;
}



// FUNCTION 143ad0580 FUN_143ad0580 body=308 status=ok
// SIG undefined FUN_143ad0580(void)

int FUN_143ad0580(longlong param_1,longlong param_2,int param_3,char *param_4,undefined8 *param_5)

{
  int iVar1;
  int local_24;
  int local_20;
  int local_1c;
  char *local_10;
  
  local_1c = 0;
  iVar1 = param_3;
  while( true ) {
    do {
      local_24 = iVar1;
      if (local_24 <= local_1c) {
        return -1;
      }
      iVar1 = (local_1c + local_24) / 2;
      if ((int)(uint)*(ushort *)(param_2 + (longlong)iVar1 * 2) < *(int *)(param_1 + 0x24)) {
        local_10 = (char *)((ulonglong)*(ushort *)(param_2 + (longlong)iVar1 * 2) +
                           *(longlong *)(param_1 + 8));
      }
      else {
        local_10 = (char *)((*(longlong *)(param_1 + 0x18) +
                            (ulonglong)*(ushort *)(param_2 + (longlong)iVar1 * 2)) -
                           (longlong)*(int *)(param_1 + 0x24));
      }
      if (*(char *)(param_1 + 0x2b) == '\0') {
        local_20 = _guard_xfg_dispatch_icall_nop(param_4,local_10);
      }
      else {
        local_20 = _guard_xfg_dispatch_icall_nop(param_4,local_10);
      }
    } while (local_20 < 0);
    if (local_20 < 1) break;
    local_1c = iVar1 + 1;
    iVar1 = local_24;
  }
  *param_5 = local_10;
  return iVar1;
}



// FUNCTION 143ad06c0 FUN_143ad06c0 body=287 status=ok
// SIG undefined FUN_143ad06c0(void)

undefined1 FUN_143ad06c0(void *param_1,undefined8 param_2,undefined8 param_3,ushort *param_4)

{
  undefined1 local_18;
  
  _guard_xfg_dispatch_icall_nop(param_1,param_4 + 6,4);
  if ((((((*param_4 < 0x14) || ((char)param_4[2] != '\0')) ||
        (*(char *)((longlong)param_4 + 5) != '\0')) ||
       (((char)param_4[3] != '\x02' || ((char)param_4[4] != 'R')))) ||
      ((*(char *)((longlong)param_4 + 9) != 'e' ||
       (((char)param_4[5] != 's' || (*(char *)((longlong)param_4 + 0xb) != 'B')))))) ||
     (((char)param_4[6] != '\x01' && ((char)param_4[6] != '\x02')))) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143ad07e0 FUN_143ad07e0 body=186 status=ok
// SIG undefined FUN_143ad07e0(void)

uint FUN_143ad07e0(longlong param_1,uint param_2)

{
  uint uVar1;
  uint local_10;
  uint local_c;
  
  uVar1 = param_2 & 0xfffffff;
  switch(param_2 >> 0x1c) {
  case 0:
  case 1:
  case 3:
  case 6:
  case 7:
  case 0xe:
    local_10 = 1;
    break;
  case 2:
    if (uVar1 == 0) {
      local_c = 0;
      local_10 = local_c;
    }
    else {
      local_10 = (uint)*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 4);
    }
    break;
  case 4:
  case 8:
    if (uVar1 == 0) {
      local_10 = 0;
    }
    else {
      local_10 = *(uint *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 4);
    }
    break;
  case 5:
  case 9:
    local_10 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar1 * 2);
    break;
  default:
    local_10 = 0;
  }
  return local_10;
}



// FUNCTION 143ad08e0 FUN_143ad08e0 body=598 status=ok
// SIG undefined FUN_143ad08e0(void)

uint FUN_143ad08e0(undefined8 param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  size_t sVar1;
  char *pcVar2;
  uint local_38;
  uint local_34;
  uint local_30;
  long local_2c;
  char *local_28;
  char *local_20;
  char *local_18 [3];
  
  local_28 = (char *)*param_3;
  local_20 = (char *)*param_3;
  local_18[0] = (char *)0x0;
  local_2c = 0;
  local_38 = param_2 >> 0x1c;
  sVar1 = _guard_xfg_dispatch_icall_nop(local_28);
  local_34 = param_2;
  if (sVar1 != 0) {
    if ((((local_38 == 2) || (local_38 == 5)) || (local_38 == 4)) ||
       ((local_38 == 8 || (local_38 == 9)))) {
      while (((local_20 != (char *)0x0 && ((*local_28 != '\0' && (local_34 != 0xffffffff)))) &&
             ((local_38 == 2 ||
              ((((local_38 == 5 || (local_38 == 4)) || (local_38 == 8)) || (local_38 == 9))))))) {
        local_20 = strchr(local_28,0x2f);
        if (local_20 == (char *)0x0) {
          pcVar2 = strchr(local_28,0);
          *param_3 = pcVar2;
        }
        else {
          *local_20 = '\0';
          *param_3 = local_20 + 1;
        }
        if (((local_38 == 2) || (local_38 == 5)) || (local_38 == 4)) {
          *param_4 = local_28;
          local_30 = FUN_143ad1310(param_1,local_34,&local_2c,param_4);
          if ((local_30 == 0xffffffff) &&
             (local_2c = strtol(local_28,local_18,10), local_18[0] != local_28)) {
            local_30 = FUN_143ad1020(param_1,local_34,local_2c,param_4);
          }
        }
        else if ((local_38 == 8) || (local_38 == 9)) {
          local_2c = strtol(local_28,local_18,10);
          if (local_18[0] == local_28) {
            local_30 = 0xffffffff;
          }
          else {
            local_30 = FUN_143ad0bf0(param_1,local_34,local_2c);
          }
          *param_4 = 0;
        }
        else {
          local_30 = 0xffffffff;
        }
        local_34 = local_30;
        local_28 = (char *)*param_3;
        local_38 = local_30 >> 0x1c;
      }
    }
    else {
      local_34 = 0xffffffff;
    }
  }
  return local_34;
}



// FUNCTION 143ad0b40 FUN_143ad0b40 body=176 status=ok
// SIG undefined FUN_143ad0b40(void)

undefined4 * FUN_143ad0b40(longlong param_1,uint param_2,undefined4 *param_3)

{
  undefined4 local_24;
  undefined4 *local_18;
  undefined4 *local_10;
  
  if (param_2 >> 0x1c == 3) {
    if ((param_2 & 0xfffffff) == 0) {
      local_18 = &DAT_145cf5b30;
    }
    else {
      local_18 = (undefined4 *)(*(longlong *)(param_1 + 8) + (ulonglong)(param_2 & 0xfffffff) * 4);
    }
    local_24 = *local_18;
    local_10 = local_18 + 1;
  }
  else {
    local_10 = (undefined4 *)0x0;
    local_24 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_24;
  }
  return local_10;
}



// FUNCTION 143ad0bf0 FUN_143ad0bf0 body=186 status=ok
// SIG undefined FUN_143ad0bf0(void)

uint FUN_143ad0bf0(longlong param_1,uint param_2,int param_3)

{
  int *piVar1;
  ushort *puVar2;
  uint uVar3;
  
  uVar3 = param_2 & 0xfffffff;
  if (param_2 >> 0x1c == 8) {
    if ((uVar3 != 0) &&
       (piVar1 = (int *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar3 * 4), param_3 < *piVar1)) {
      return piVar1[param_3 + 1];
    }
  }
  else if ((param_2 >> 0x1c == 9) &&
          (puVar2 = (ushort *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar3 * 2),
          param_3 < (int)(uint)*puVar2)) {
    return puVar2[param_3 + 1] | 0x60000000;
  }
  return 0xffffffff;
}



// FUNCTION 143ad0cb0 FUN_143ad0cb0 body=176 status=ok
// SIG undefined FUN_143ad0cb0(void)

undefined4 * FUN_143ad0cb0(longlong param_1,uint param_2,undefined4 *param_3)

{
  undefined4 local_24;
  undefined4 *local_18;
  undefined4 *local_10;
  
  if (param_2 >> 0x1c == 1) {
    if ((param_2 & 0xfffffff) == 0) {
      local_18 = &DAT_145cf5b28;
    }
    else {
      local_18 = (undefined4 *)(*(longlong *)(param_1 + 8) + (ulonglong)(param_2 & 0xfffffff) * 4);
    }
    local_24 = *local_18;
    local_10 = local_18 + 1;
  }
  else {
    local_10 = (undefined4 *)0x0;
    local_24 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_24;
  }
  return local_10;
}



// FUNCTION 143ad0d60 FUN_143ad0d60 body=166 status=ok
// SIG undefined FUN_143ad0d60(void)

undefined4 * FUN_143ad0d60(longlong param_1,uint param_2,undefined4 *param_3)

{
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_18;
  
  if (param_2 >> 0x1c == 0xe) {
    if ((param_2 & 0xfffffff) == 0) {
      local_18 = &DAT_145cf5b28;
    }
    else {
      local_18 = (undefined4 *)(*(longlong *)(param_1 + 8) + (ulonglong)(param_2 & 0xfffffff) * 4);
    }
    local_24 = *local_18;
    local_20 = local_18 + 1;
  }
  else {
    local_20 = (undefined4 *)0x0;
    local_24 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_24;
  }
  return local_20;
}



// FUNCTION 143ad0e10 FUN_143ad0e10 body=25 status=ok
// SIG undefined FUN_143ad0e10(void)

int FUN_143ad0e10(uint param_1)

{
  return (int)(char)(&DAT_145cf5b38)[(int)(param_1 >> 0x1c)];
}



// FUNCTION 143ad0e30 FUN_143ad0e30 body=57 status=ok
// SIG undefined FUN_143ad0e30(void)

void FUN_143ad0e30(longlong param_1,undefined8 param_2)

{
  undefined1 local_18 [8];
  undefined8 local_10 [2];
  
  local_10[0] = param_2;
  FUN_143ad1310(param_1,*(undefined4 *)(param_1 + 0x20),local_18,local_10);
  return;
}



// FUNCTION 143ad0e70 FUN_143ad0e70 body=424 status=ok
// SIG undefined FUN_143ad0e70(void)

uint * FUN_143ad0e70(longlong param_1,uint param_2,uint *param_3)

{
  uint local_38;
  uint *local_28;
  uint *local_18;
  
  if (param_2 >> 0x1c == 6) {
    local_28 = (uint *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(param_2 & 0xfffffff) * 2);
    local_38 = (uint)(ushort)*local_28;
    if ((local_38 & 0xfffffc00) == 0xdc00) {
      if (local_38 < 0xdfef) {
        local_38 = local_38 & 0x3ff;
        local_28 = (uint *)((longlong)local_28 + 2);
      }
      else if (local_38 < 0xdfff) {
        local_38 = (local_38 - 0xdfef) * 0x10000 | (uint)*(ushort *)((longlong)local_28 + 2);
        local_28 = local_28 + 1;
      }
      else {
        local_38 = CONCAT22(*(ushort *)((longlong)local_28 + 2),(ushort)local_28[1]);
        local_28 = (uint *)((longlong)local_28 + 6);
      }
    }
    else {
      local_38 = FreeLib(local_28);
    }
  }
  else if (param_2 == (param_2 & 0xfffffff)) {
    if (param_2 == 0) {
      local_18 = &DAT_145cf5b30;
    }
    else {
      local_18 = (uint *)(*(longlong *)(param_1 + 8) + (ulonglong)param_2 * 4);
    }
    local_38 = *local_18;
    local_28 = local_18 + 1;
  }
  else {
    local_28 = (uint *)0x0;
    local_38 = 0;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = local_38;
  }
  return local_28;
}



// FUNCTION 143ad1020 FUN_143ad1020 body=746 status=ok
// SIG undefined FUN_143ad1020(void)

uint FUN_143ad1020(longlong param_1,uint param_2,int param_3,longlong *param_4)

{
  ushort *puVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  uVar5 = param_2 & 0xfffffff;
  param_2 = param_2 >> 0x1c;
  if (param_2 == 2) {
    if (uVar5 != 0) {
      puVar1 = (ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar5 * 4);
      uVar5 = (uint)*puVar1;
      if (param_3 < (int)uVar5) {
        if (param_4 != (longlong *)0x0) {
          if ((int)(uint)puVar1[(longlong)param_3 + 1] < *(int *)(param_1 + 0x24)) {
            local_30 = (ulonglong)puVar1[(longlong)param_3 + 1] + *(longlong *)(param_1 + 8);
          }
          else {
            local_30 = (*(longlong *)(param_1 + 0x18) + (ulonglong)puVar1[(longlong)param_3 + 1]) -
                       (longlong)*(int *)(param_1 + 0x24);
          }
          *param_4 = local_30;
        }
        return *(uint *)(puVar1 + (longlong)(int)uVar5 +
                                  (longlong)(int)(~uVar5 & 1) + (longlong)param_3 * 2 + 1);
      }
    }
  }
  else if (param_2 == 4) {
    if (uVar5 != 0) {
      piVar2 = (int *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar5 * 4);
      iVar4 = *piVar2;
      if (param_3 < iVar4) {
        if (param_4 != (longlong *)0x0) {
          if (piVar2[(longlong)param_3 + 1] < 0) {
            local_28 = (longlong)(int)(piVar2[(longlong)param_3 + 1] & 0x7fffffff) +
                       *(longlong *)(param_1 + 0x18);
          }
          else {
            local_28 = (longlong)piVar2[(longlong)param_3 + 1] + *(longlong *)(param_1 + 8);
          }
          *param_4 = local_28;
        }
        return piVar2[(longlong)(iVar4 + param_3) + 1];
      }
    }
  }
  else if (param_2 == 5) {
    puVar1 = (ushort *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar5 * 2);
    uVar3 = *puVar1;
    if (param_3 < (int)(uint)uVar3) {
      if (param_4 != (longlong *)0x0) {
        if ((int)(uint)puVar1[(longlong)param_3 + 1] < *(int *)(param_1 + 0x24)) {
          local_20 = (ulonglong)puVar1[(longlong)param_3 + 1] + *(longlong *)(param_1 + 8);
        }
        else {
          local_20 = (*(longlong *)(param_1 + 0x18) + (ulonglong)puVar1[(longlong)param_3 + 1]) -
                     (longlong)*(int *)(param_1 + 0x24);
        }
        *param_4 = local_20;
      }
      return puVar1[(longlong)(int)((uint)uVar3 + param_3) + 1] | 0x60000000;
    }
  }
  return 0xffffffff;
}



// FUNCTION 143ad1310 FUN_143ad1310 body=618 status=ok
// SIG undefined FUN_143ad1310(void)

uint FUN_143ad1310(longlong param_1,uint param_2,int *param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  int *piVar5;
  
  uVar1 = param_2 & 0xfffffff;
  if ((param_4 != (longlong *)0x0) && (*param_4 != 0)) {
    param_2 = param_2 >> 0x1c;
    if (param_2 == 2) {
      if (uVar1 != 0) {
        puVar4 = (ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 4);
        uVar1 = (uint)*puVar4;
        puVar4 = puVar4 + 1;
        iVar2 = FUN_143ad0580(param_1,puVar4,uVar1,*param_4,param_4);
        *param_3 = iVar2;
        if (-1 < iVar2) {
          return *(uint *)(puVar4 + (longlong)(int)uVar1 +
                                    (longlong)(int)(~uVar1 & 1) + (longlong)iVar2 * 2);
        }
      }
    }
    else if (param_2 == 4) {
      if (uVar1 != 0) {
        piVar5 = (int *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 4);
        iVar2 = *piVar5;
        piVar5 = piVar5 + 1;
        iVar3 = FUN_143ad0460(param_1,piVar5,iVar2,*param_4,param_4);
        *param_3 = iVar3;
        if (-1 < iVar3) {
          return piVar5[iVar2 + iVar3];
        }
      }
    }
    else if (param_2 == 5) {
      puVar4 = (ushort *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar1 * 2);
      uVar1 = (uint)*puVar4;
      puVar4 = puVar4 + 1;
      iVar2 = FUN_143ad0580(param_1,puVar4,uVar1,*param_4,param_4);
      *param_3 = iVar2;
      if (-1 < iVar2) {
        return puVar4[(int)(uVar1 + iVar2)] | 0x60000000;
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 143ad1580 FUN_143ad1580 body=817 status=ok
// SIG undefined FUN_143ad1580(void)

void FUN_143ad1580(longlong param_1,char *param_2,undefined8 param_3,int param_4,undefined4 *param_5
                  )

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int local_18;
  
  *(undefined8 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0x20) = **(undefined4 **)(param_1 + 8);
  *(undefined **)(param_1 + 0x10) = &DAT_145cf5b20;
  if (-1 < param_4) {
    if ((*param_2 == '\x01') && (param_2[1] == '\0')) {
      local_18 = 1;
    }
    else {
      local_18 = 6;
    }
    if ((int)(param_4 + (param_4 >> 0x1f & 3U)) >> 2 < local_18) {
      *param_5 = 3;
      FUN_143ad1970(param_1);
      return;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x20) >> 0x1c;
  if (((uVar3 != 2) && (uVar3 != 5)) && (uVar3 != 4)) {
    *param_5 = 3;
    FUN_143ad1970(param_1);
    return;
  }
  if ((*param_2 == '\x01') && (param_2[1] == '\0')) {
    *(undefined4 *)(param_1 + 0x24) = 0x10000;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    uVar3 = *(uint *)(lVar2 + 4) & 0xff;
    if (uVar3 < 5) {
      *param_5 = 3;
      FUN_143ad1970(param_1);
      return;
    }
    if ((-1 < param_4) &&
       ((param_4 < (int)(uVar3 * 4 + 4) || (param_4 < *(int *)(lVar2 + 0x10) * 4)))) {
      *param_5 = 3;
      FUN_143ad1970(param_1);
      return;
    }
    if ((int)(uVar3 + 1) < *(int *)(lVar2 + 8)) {
      *(int *)(param_1 + 0x24) = *(int *)(lVar2 + 8) << 2;
    }
    if (5 < uVar3) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      *(byte *)(param_1 + 0x28) = (byte)uVar1 & 1;
      *(bool *)(param_1 + 0x29) = (uVar1 & 2) != 0;
      *(bool *)(param_1 + 0x2a) = (uVar1 & 4) != 0;
    }
    if (((*(char *)(param_1 + 0x29) != '\0') || (*(char *)(param_1 + 0x2a) != '\0')) && (uVar3 < 8))
    {
      *param_5 = 3;
      FUN_143ad1970(param_1);
      return;
    }
    if ((6 < uVar3) && (*(int *)(lVar2 + 8) < *(int *)(lVar2 + 0x1c))) {
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 8) + (longlong)*(int *)(lVar2 + 8) * 4
      ;
    }
  }
  *(undefined1 *)(param_1 + 0x2b) = 1;
  return;
}



// FUNCTION 143ad18c0 FUN_143ad18c0 body=163 status=ok
// SIG undefined FUN_143ad18c0(void)

void FUN_143ad18c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  undefined8 uVar1;
  undefined1 local_18 [24];
  
  _guard_xfg_dispatch_icall_nop(param_1,0,0x30);
  uVar1 = FUN_143ac5410(param_2,&DAT_145b96e2c,param_3,FUN_143ad06c0,local_18,param_4);
  *param_1 = uVar1;
  if (*param_4 < 1) {
    uVar1 = FUN_143ac5780(*param_1);
    FUN_143ad1580(param_1,local_18,uVar1,0xffffffff,param_4);
  }
  return;
}



// FUNCTION 143ad1970 FUN_143ad1970 body=50 status=ok
// SIG undefined FUN_143ad1970(void)

void FUN_143ad1970(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_143ac56d0(*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143ad19b0 FUN_143ad19b0 body=118 status=ok
// SIG undefined FUN_143ad19b0(void)

undefined8 * FUN_143ad19b0(undefined8 *param_1,longlong param_2)

{
  FUN_143ad1b20(param_1,param_2);
  *param_1 = icu_53::CharacterIterator::vftable;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  return param_1;
}



// FUNCTION 143ad1a30 FUN_143ad1a30 body=131 status=ok
// SIG undefined FUN_143ad1a30(void)

undefined8 * FUN_143ad1a30(undefined8 *param_1,undefined4 param_2)

{
  FUN_143ad1b60(param_1);
  *param_1 = icu_53::CharacterIterator::vftable;
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_2;
  if (*(int *)(param_1 + 1) < 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return param_1;
}



// FUNCTION 143ad1ac0 FUN_143ad1ac0 body=92 status=ok
// SIG undefined FUN_143ad1ac0(void)

undefined8 * FUN_143ad1ac0(undefined8 *param_1)

{
  FUN_143ad1b60(param_1);
  *param_1 = icu_53::CharacterIterator::vftable;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 143ad1b20 FUN_143ad1b20 body=54 status=ok
// SIG undefined FUN_143ad1b20(void)

undefined8 * FUN_143ad1b20(undefined8 *param_1,undefined8 param_2)

{
  FUN_143a8abc0(param_1,param_2);
  *param_1 = icu_53::ForwardCharacterIterator::vftable;
  return param_1;
}



// FUNCTION 143ad1b60 FUN_143ad1b60 body=60 status=ok
// SIG undefined FUN_143ad1b60(void)

undefined8 * FUN_143ad1b60(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined8 *)((longlong)puVar2 + 1);
  }
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::ForwardCharacterIterator::vftable;
  return param_1;
}



// FUNCTION 143ad1ba0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::CharacterIterator::vftable;
  ~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143ad1bd0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::ForwardCharacterIterator::vftable;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143ad1c00 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143ad1c40 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143ad1c80 FUN_143ad1c80 body=40 status=ok
// SIG undefined FUN_143ad1c80(void)

void FUN_143ad1c80(longlong *param_1)

{
  FUN_143ad1ce0(param_1);
  (**(code **)(*param_1 + 0x28))(param_1);
  return;
}



// FUNCTION 143ad1cb0 FUN_143ad1cb0 body=40 status=ok
// SIG undefined FUN_143ad1cb0(void)

void FUN_143ad1cb0(longlong *param_1)

{
  FUN_143ad1ce0(param_1);
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}



// FUNCTION 143ad1ce0 FUN_143ad1ce0 body=38 status=ok
// SIG undefined FUN_143ad1ce0(void)

void FUN_143ad1ce0(longlong *param_1)

{
  (**(code **)(*param_1 + 0xb8))(param_1,0,0);
  return;
}



// FUNCTION 143ad1d10 FUN_143ad1d10 body=97 status=ok
// SIG undefined FUN_143ad1d10(void)

int FUN_143ad1d10(char *param_1)

{
  int iVar1;
  int local_18;
  
  local_18 = 0;
  while( true ) {
    if (DAT_146bc5e70 <= local_18) {
      return -1;
    }
    iVar1 = _guard_xfg_dispatch_icall_nop(param_1,PTR_DAT_146832890 + (longlong)local_18 * 0x70 + 8)
    ;
    if (iVar1 == 0) break;
    local_18 = local_18 + 1;
  }
  return local_18;
}



// FUNCTION 143ad1d80 FUN_143ad1d80 body=288 status=ok
// SIG undefined FUN_143ad1d80(void)

undefined8 * FUN_143ad1d80(int *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*param_1 < 1) {
    if (DAT_146bc5e74 == 0xc) {
      *param_1 = 7;
      puVar2 = (undefined8 *)0x0;
    }
    else {
      lVar1 = (longlong)DAT_146bc5e74 * 0x1c0;
      puVar2 = (undefined8 *)(&DAT_146bc6680 + lVar1);
      DAT_146bc5e74 = DAT_146bc5e74 + 1;
      *(undefined4 *)(&DAT_146bc668c + lVar1) = 0x54762486;
      *(undefined4 *)(&DAT_146bc6688 + lVar1) = 0x1c0;
      (&DAT_146bc67d0)[lVar1] = 0;
      *(undefined4 *)(&DAT_146bc6834 + lVar1) = 1;
      (&DAT_146bc6838)[lVar1] = 1;
      (&DAT_146bc6839)[lVar1] = 0;
      *(undefined4 *)(&DAT_146bc683c + lVar1) = 0;
      (&DAT_146bc6698)[lVar1] = 0;
      (&DAT_146bc6760)[lVar1] = 0;
      (&DAT_146bc66fc)[lVar1] = 0;
      *(undefined8 *)(&DAT_146bc6690 + lVar1) = 0;
      *puVar2 = 0;
    }
  }
  else {
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}



// FUNCTION 143ad1ea0 FUN_143ad1ea0 body=229 status=ok
// SIG undefined FUN_143ad1ea0(void)

undefined8 *
FUN_143ad1ea0(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4,int *param_5)

{
  undefined8 *puVar1;
  
  if (*param_5 < 1) {
    puVar1 = (undefined8 *)FUN_143ad1d80(param_5);
    if (param_2 == (char *)0x0) {
      *(undefined1 *)(puVar1 + 0x1c) = 0;
    }
    else {
      strncpy((char *)(puVar1 + 0x1c),param_2,100);
    }
    if (param_4 == (char *)0x0) {
      *(undefined1 *)((longlong)puVar1 + 0x7c) = 0;
    }
    else {
      strncpy((char *)((longlong)puVar1 + 0x7c),param_4,100);
    }
    *puVar1 = param_1;
    puVar1[2] = param_3;
    FUN_143ad2ec0(puVar1,param_5);
  }
  else {
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}



// FUNCTION 143ad1f90 FUN_143ad1f90 body=89 status=ok
// SIG undefined FUN_143ad1f90(void)

void FUN_143ad1f90(undefined8 *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  if (((param_1 != (undefined8 *)0x0) && (*param_3 < 1)) &&
     (iVar1 = (*(code *)*param_1)(param_1,param_2,param_3), iVar1 != 0x54762486)) {
    *param_3 = 5;
  }
  return;
}



// FUNCTION 143ad1ff0 FUN_143ad1ff0 body=98 status=ok
// SIG undefined FUN_143ad1ff0(void)

undefined8 FUN_143ad1ff0(void)

{
  int local_18;
  undefined4 local_14;
  undefined *local_10;
  
  for (local_18 = 0; local_18 < DAT_146bc5e74; local_18 = local_18 + 1) {
    local_14 = 0;
    local_10 = &DAT_146bc6680 + (longlong)local_18 * 0x1c0;
    FUN_143ad2220(local_10,&local_14);
  }
  return CONCAT71((uint7)(uint3)((uint)DAT_146bc5e74 >> 8),1);
}



// FUNCTION 143ad2060 FUN_143ad2060 body=237 status=ok
// SIG undefined FUN_143ad2060(void)

void FUN_143ad2060(longlong param_1,int *param_2)

{
  int iVar1;
  int local_18;
  
  if (*param_2 < 1) {
    for (local_18 = 0; local_18 < DAT_146bc5e70; local_18 = local_18 + 1) {
      if (param_1 == *(longlong *)(PTR_DAT_146832890 + (longlong)local_18 * 0x70)) {
        iVar1 = *(int *)(PTR_DAT_146832890 + (longlong)local_18 * 0x70 + 0x6c);
        *(int *)(PTR_DAT_146832890 + (longlong)local_18 * 0x70 + 0x6c) = iVar1 + -1;
        if (iVar1 + -1 != 0) {
          return;
        }
        FUN_143a916d0(*(undefined8 *)(PTR_DAT_146832890 + (longlong)local_18 * 0x70),param_2);
        DAT_146bc5e70 = FUN_143ad2f70(PTR_DAT_146832890,DAT_146bc5e70,0x70,local_18);
        return;
      }
    }
    *param_2 = 5;
  }
  return;
}



// FUNCTION 143ad2150 FUN_143ad2150 body=194 status=ok
// SIG undefined FUN_143ad2150(void)

void FUN_143ad2150(undefined8 *param_1,int *param_2)

{
  undefined4 uVar1;
  int local_18 [6];
  
  local_18[0] = 0;
  if (*(char *)((longlong)param_1 + 0x1b9) == '\0') {
    FUN_143ad2060(param_1[2],local_18);
  }
  param_1[2] = 0;
  if ((*param_2 < 1) && (0 < local_18[0])) {
    *param_2 = local_18[0];
  }
  if (*param_2 < 1) {
    uVar1 = FUN_143ad2e40(param_1);
    DAT_146bc5e74 = FUN_143ad2f70(&DAT_146bc6680,DAT_146bc5e74,0x1c0,uVar1);
  }
  else {
    *(undefined1 *)(param_1 + 0x37) = 0;
    *param_1 = 0;
    *(undefined1 *)((longlong)param_1 + 0x1b9) = 1;
  }
  return;
}



// FUNCTION 143ad2220 FUN_143ad2220 body=57 status=ok
// SIG undefined FUN_143ad2220(void)

void FUN_143ad2220(longlong param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    FUN_143ad3010(param_1,param_2);
    FUN_143ad2150(param_1,param_2);
  }
  return;
}



// FUNCTION 143ad2260 FUN_143ad2260 body=33 status=ok
// SIG undefined FUN_143ad2260(void)

undefined8 FUN_143ad2260(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_143aa78f0();
  if (cVar1 == '\0') {
    uVar2 = 2;
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}



// FUNCTION 143ad2290 FUN_143ad2290 body=257 status=ok
// SIG undefined FUN_143ad2290(void)

longlong FUN_143ad2290(char *param_1,char *param_2,char *param_3,char *param_4,undefined4 param_5,
                      int *param_6)

{
  longlong lVar1;
  
  lVar1 = FUN_143ad1d80(param_6);
  if (*param_6 < 1) {
    *(undefined4 *)(lVar1 + 0x1bc) = param_5;
    *(undefined1 *)(lVar1 + 0x1b8) = 0;
    *(undefined1 *)(lVar1 + 0x1b9) = 1;
    if (param_2 != (char *)0x0) {
      strncpy((char *)(lVar1 + 0x7c),param_2,100);
    }
    if (param_1 != (char *)0x0) {
      strncpy((char *)(lVar1 + 0x18),param_1,100);
    }
    if (param_4 != (char *)0x0) {
      strncpy((char *)(lVar1 + 0x150),param_4,100);
    }
    if (param_3 != (char *)0x0) {
      strncpy((char *)(lVar1 + 0xe0),param_3,100);
    }
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 143ad23a0 FUN_143ad23a0 body=112 status=ok
// SIG undefined FUN_143ad23a0(void)

undefined8
FUN_143ad23a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int *param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143ad1ea0(param_1,param_2,param_3,param_4,param_5);
  if (0 < *param_5) {
    FUN_143ad2150(uVar1,param_5);
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 143ad2420 FUN_143ad2420 body=493 status=ok
// SIG undefined FUN_143ad2420(void)

longlong FUN_143ad2420(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar1;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [2];
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  local_20 = 0;
  local_18 = 0;
  if (*param_4 < 1) {
    local_20 = FUN_143ad2c80(param_1,param_4);
    if ((local_20 == 0) || (0 < *param_4)) {
      local_28[0] = 0;
      if (local_20 == 0) {
        local_34 = 2;
      }
      else {
        local_34 = *param_4;
      }
      local_18 = FUN_143ad2290(param_1,param_2,param_3,"ERROR: could not load library",
                               CONCAT44(uVar1,local_34),local_28);
    }
    else {
      local_10 = 0;
      local_10 = FUN_143a91750(local_20,param_2,param_4);
      if ((local_10 == 0) || (0 < *param_4)) {
        local_30 = 0;
        if (local_20 == 0) {
          local_38 = 2;
        }
        else {
          local_38 = *param_4;
        }
        local_18 = FUN_143ad2290(param_1,param_2,param_3,"ERROR: Could not load entrypoint",
                                 CONCAT44(uVar1,local_38),&local_30);
      }
      else {
        local_18 = FUN_143ad23a0(local_10,param_3,local_20,param_2,param_4);
        if ((local_18 != 0) && (*param_4 < 1)) {
          *(longlong *)(local_18 + 0x10) = local_20;
          local_20 = 0;
        }
      }
      if (local_20 != 0) {
        local_2c = 0;
        FUN_143ad2060(local_20,&local_2c);
      }
    }
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143ad2610 FUN_143ad2610 body=1076 status=ok
// SIG undefined FUN_143ad2610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143ad2610(int *param_1)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  undefined1 auStack_488 [32];
  char *local_468;
  int local_460 [2];
  char *local_458;
  char *local_450;
  int local_448;
  FILE *local_440;
  char *local_438;
  char *local_430;
  undefined8 local_428;
  char local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_488;
  if (*param_1 < 1) {
    local_450 = getenv("ICU_PLUGINS");
    if ((local_450 == (char *)0x0) || (*local_450 == '\0')) {
      local_450 = "/usr/local/lib/icu";
    }
    if ((local_450 != (char *)0x0) && (*local_450 != '\0')) {
      strncpy(&DAT_146bc5e80,local_450,0x7ff);
      strncat(&DAT_146bc5e80,"\\",0x7ff);
      strncat(&DAT_146bc5e80,"icuplugins",0x7ff);
      strncat(&DAT_146bc5e80,"53",0x7ff);
      strncat(&DAT_146bc5e80,".txt",0x7ff);
      local_440 = fopen(&DAT_146bc5e80,"r");
      if (local_440 != (FILE *)0x0) {
        local_430 = (char *)0x0;
        local_438 = (char *)0x0;
        local_458 = (char *)0x0;
        local_448 = 0;
        while (pcVar2 = fgets(local_418,0x3ff,local_440), pcVar2 != (char *)0x0) {
          local_448 = local_448 + 1;
          if ((local_418[0] != '\0') && (local_418[0] != '#')) {
            local_468 = local_418;
            while ((*local_468 != '\0' && (iVar1 = isspace((int)*local_468), iVar1 != 0))) {
              local_468 = local_468 + 1;
            }
            if ((*local_468 != '\0') && (*local_468 != '#')) {
              local_430 = local_468;
              while ((*local_468 != '\0' && (iVar1 = isspace((int)*local_468), iVar1 == 0))) {
                local_468 = local_468 + 1;
              }
              if ((*local_468 != '\0') && (*local_468 != '#')) {
                *local_468 = '\0';
                do {
                  local_468 = local_468 + 1;
                  if (*local_468 == '\0') break;
                  iVar1 = isspace((int)*local_468);
                } while (iVar1 != 0);
                if ((*local_468 != '\0') && (*local_468 != '#')) {
                  local_438 = local_468;
                  while ((*local_468 != '\0' && (iVar1 = isspace((int)*local_468), iVar1 == 0))) {
                    local_468 = local_468 + 1;
                  }
                  if (*local_468 != '\0') {
                    *local_468 = '\0';
                    do {
                      local_468 = local_468 + 1;
                      if (*local_468 == '\0') break;
                      iVar1 = isspace((int)*local_468);
                    } while (iVar1 != 0);
                    if (*local_468 != '\0') {
                      local_458 = local_468;
                    }
                  }
                  if ((local_458 != (char *)0x0) && (*local_458 != '\0')) {
                    sVar3 = _guard_xfg_dispatch_icall_nop(local_458);
                    local_468 = local_458 + sVar3;
                    while (local_458 < local_468) {
                      local_468 = local_468 + -1;
                      iVar1 = isspace((int)*local_468);
                      if (iVar1 == 0) break;
                      *local_468 = '\0';
                    }
                  }
                  local_460[0] = 0;
                  local_428 = FUN_143ad2420(local_430,local_438,local_458,local_460);
                  if ((0 < local_460[0]) && (*param_1 < 1)) {
                    *param_1 = local_460[0];
                  }
                }
              }
            }
          }
        }
        fclose(local_440);
      }
    }
    FUN_143ad2ad0(param_1);
    FUN_143aa7880(0,FUN_143ad1ff0);
  }
  return;
}



// FUNCTION 143ad2a50 FUN_143ad2a50 body=119 status=ok
// SIG undefined FUN_143ad2a50(void)

void FUN_143ad2a50(longlong param_1,int *param_2)

{
  if ((*(char *)(param_1 + 0x1b8) == '\0') || (*(int *)(param_1 + 0x1b4) < 2)) {
    *param_2 = 5;
  }
  else {
    FUN_143ad1f90(param_1,1,param_2);
    *(undefined1 *)(param_1 + 0x1b8) = 0;
    if (0 < *param_2) {
      *(undefined4 *)(param_1 + 0x1bc) = 5;
    }
  }
  return;
}



// FUNCTION 143ad2ad0 FUN_143ad2ad0 body=424 status=ok
// SIG undefined FUN_143ad2ad0(void)

void FUN_143ad2ad0(int *param_1)

{
  int iVar1;
  longlong lVar2;
  int local_38;
  int local_34;
  undefined4 local_2c;
  undefined4 local_28 [2];
  undefined *local_20;
  undefined *local_18;
  
  local_34 = FUN_143ad2260();
  if (*param_1 < 1) {
    for (local_38 = 0; local_38 < DAT_146bc5e74; local_38 = local_38 + 1) {
      local_2c = 0;
      lVar2 = (longlong)local_38 * 0x1c0;
      local_18 = &DAT_146bc6680 + lVar2;
      if (((&DAT_146bc6838)[lVar2] != '\0') && (*(int *)(&DAT_146bc6834 + lVar2) == 2)) {
        if (local_34 < 3) {
          FUN_143ad2a50(local_18,&local_2c);
          iVar1 = FUN_143ad2260();
          if (local_34 < iVar1) {
            *(undefined4 *)(local_18 + 0x1bc) = 0xffffff88;
            local_34 = iVar1;
          }
        }
        else {
          *(undefined4 *)(&DAT_146bc683c + lVar2) = 0x10500;
        }
        local_18[0x1b8] = 0;
      }
    }
    for (local_38 = 0; local_38 < DAT_146bc5e74; local_38 = local_38 + 1) {
      local_28[0] = 0;
      lVar2 = (longlong)local_38 * 0x1c0;
      local_20 = &DAT_146bc6680 + lVar2;
      if ((&DAT_146bc6838)[lVar2] != '\0') {
        if (*(int *)(&DAT_146bc6834 + lVar2) == 0) {
          *(undefined4 *)(&DAT_146bc683c + lVar2) = 0x10501;
        }
        else if (*(int *)(&DAT_146bc6834 + lVar2) == 1) {
          *(undefined4 *)(&DAT_146bc683c + lVar2) = 5;
        }
        else {
          FUN_143ad2a50(local_20,local_28);
        }
        local_20[0x1b8] = 0;
      }
    }
  }
  return;
}



// FUNCTION 143ad2c80 FUN_143ad2c80 body=442 status=ok
// SIG undefined FUN_143ad2c80(void)

undefined8 FUN_143ad2c80(char *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_10;
  
  local_10 = 0;
  if (*param_2 < 1) {
    iVar2 = FUN_143ad1d10(param_1);
    iVar1 = DAT_146bc5e70;
    if (iVar2 == -1) {
      DAT_146bc5e70 = DAT_146bc5e70 + 1;
      if (DAT_146bc5e70 < DAT_146832898) {
        uVar3 = FUN_143a91710(param_1,param_2);
        *(undefined8 *)(PTR_DAT_146832890 + (longlong)iVar1 * 0x70) = uVar3;
        if ((*(longlong *)(PTR_DAT_146832890 + (longlong)iVar1 * 0x70) == 0) || (0 < *param_2)) {
          *(undefined8 *)(PTR_DAT_146832890 + (longlong)iVar1 * 0x70) = 0;
          PTR_DAT_146832890[(longlong)iVar1 * 0x70 + 8] = 0;
          DAT_146bc5e70 = DAT_146bc5e70 + -1;
        }
        else {
          strncpy(PTR_DAT_146832890 + (longlong)iVar1 * 0x70 + 8,param_1,100);
          *(undefined4 *)(PTR_DAT_146832890 + (longlong)iVar1 * 0x70 + 0x6c) = 1;
          local_10 = *(undefined8 *)(PTR_DAT_146832890 + (longlong)iVar1 * 0x70);
        }
      }
      else {
        *param_2 = 7;
        local_10 = 0;
      }
    }
    else {
      local_10 = *(undefined8 *)(PTR_DAT_146832890 + (longlong)iVar2 * 0x70);
      *(int *)(PTR_DAT_146832890 + (longlong)iVar2 * 0x70 + 0x6c) =
           *(int *)(PTR_DAT_146832890 + (longlong)iVar2 * 0x70 + 0x6c) + 1;
    }
  }
  else {
    local_10 = 0;
  }
  return local_10;
}



// FUNCTION 143ad2e40 FUN_143ad2e40 body=120 status=ok
// SIG undefined FUN_143ad2e40(void)

ulonglong FUN_143ad2e40(undefined *param_1)

{
  ulonglong uVar1;
  
  if (&DAT_146bc6680 < param_1) {
    if (param_1 < &DAT_146bc6680 + (longlong)(int)DAT_146bc5e74 * 0x1c0) {
      uVar1 = (ulonglong)((longlong)(param_1 + -0x146bc6680) / 0x1c0) / 0x1c0;
    }
    else {
      uVar1 = (ulonglong)DAT_146bc5e74;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 143ad2ec0 FUN_143ad2ec0 body=174 status=ok
// SIG undefined FUN_143ad2ec0(void)

void FUN_143ad2ec0(longlong param_1,int *param_2)

{
  if ((*(char *)(param_1 + 0x1b8) == '\0') || (*(int *)(param_1 + 0x1b4) != 1)) {
    *param_2 = 5;
  }
  else {
    *(undefined4 *)(param_1 + 0x1b4) = 0;
    FUN_143ad1f90(param_1,0,param_2);
    if (*param_2 < 1) {
      if (*(int *)(param_1 + 0x1b4) == 0) {
        *(undefined4 *)(param_1 + 0x1bc) = 0x10501;
        *(undefined1 *)(param_1 + 0x1b8) = 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1bc) = 5;
      *(undefined1 *)(param_1 + 0x1b8) = 0;
    }
  }
  return;
}



// FUNCTION 143ad2f70 FUN_143ad2f70 body=147 status=ok
// SIG undefined FUN_143ad2f70(void)

int FUN_143ad2f70(longlong param_1,int param_2,int param_3,int param_4)

{
  if (0 < param_2) {
    if (param_4 + 1 < param_2) {
      memmove((void *)(param_1 + param_4 * param_3),(void *)(param_1 + (param_4 + 1) * param_3),
              (longlong)param_3);
    }
    param_2 = param_2 + -1;
  }
  return param_2;
}



// FUNCTION 143ad3010 FUN_143ad3010 body=82 status=ok
// SIG undefined FUN_143ad3010(void)

void FUN_143ad3010(longlong param_1,undefined4 *param_2)

{
  if (*(char *)(param_1 + 0x1b8) == '\0') {
    if (*(int *)(param_1 + 0x1bc) < 1) {
      FUN_143ad1f90(param_1,2,param_2);
    }
  }
  else {
    *param_2 = 5;
  }
  return;
}



// FUNCTION 143ad3070 FUN_143ad3070 body=79 status=ok
// SIG undefined FUN_143ad3070(void)

undefined2 FUN_143ad3070(longlong param_1)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if (**(uint **)(param_1 + 8) != 0) {
    uVar1 = *(undefined2 *)(DAT_146bc7bb8 + (ulonglong)**(uint **)(param_1 + 8) * 2);
  }
  return uVar1;
}



// FUNCTION 143ad30c0 FUN_143ad30c0 body=218 status=ok
// SIG undefined FUN_143ad30c0(void)

char * FUN_143ad30c0(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  uint *puVar2;
  size_t sVar3;
  char *_Str;
  
  puVar2 = *(uint **)(param_1 + 8);
  uVar1 = *puVar2;
  if ((uVar1 == 0) || ((uint)*(ushort *)(DAT_146bc7bb8 + (ulonglong)uVar1 * 2) <= puVar2[1])) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
    }
    _Str = (char *)0x0;
  }
  else {
    _Str = (char *)(DAT_146bc7bc8 +
                   (ulonglong)
                   *(ushort *)(DAT_146bc7bb8 + 2 + (ulonglong)uVar1 * 2 + (ulonglong)puVar2[1] * 2)
                   * 2);
    puVar2[1] = puVar2[1] + 1;
    if (param_2 != (undefined4 *)0x0) {
      sVar3 = _guard_xfg_dispatch_icall_nop(_Str);
      *param_2 = (int)sVar3;
    }
  }
  return _Str;
}



// FUNCTION 143ad31a0 FUN_143ad31a0 body=27 status=ok
// SIG undefined FUN_143ad31a0(void)

void FUN_143ad31a0(longlong param_1)

{
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 4) = 0;
  return;
}



// FUNCTION 143ad31c0 FUN_143ad31c0 body=38 status=ok
// SIG undefined FUN_143ad31c0(void)

void FUN_143ad31c0(longlong param_1)

{
  FUN_143aa79f0(*(undefined8 *)(param_1 + 8));
  FUN_143aa79f0(param_1);
  return;
}



// FUNCTION 143ad31f0 FUN_143ad31f0 body=17 status=ok
// SIG undefined FUN_143ad31f0(void)

undefined4 FUN_143ad31f0(void)

{
  return DAT_146bc7bd8;
}



// FUNCTION 143ad3210 FUN_143ad3210 body=161 status=ok
// SIG undefined FUN_143ad3210(void)

char * FUN_143ad3210(longlong param_1,undefined4 *param_2)

{
  ushort *puVar1;
  size_t sVar2;
  char *_Str;
  
  puVar1 = *(ushort **)(param_1 + 8);
  if (*puVar1 < DAT_146bc7bd8) {
    _Str = (char *)(DAT_146bc7bc8 +
                   (ulonglong)*(ushort *)(DAT_146bc7b90 + (ulonglong)*puVar1 * 2) * 2);
    *puVar1 = *puVar1 + 1;
    if (param_2 != (undefined4 *)0x0) {
      sVar2 = _guard_xfg_dispatch_icall_nop(_Str);
      *param_2 = (int)sVar2;
    }
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
    }
    _Str = (char *)0x0;
  }
  return _Str;
}



// FUNCTION 143ad32c0 FUN_143ad32c0 body=25 status=ok
// SIG undefined FUN_143ad32c0(void)

void FUN_143ad32c0(longlong param_1)

{
  **(undefined2 **)(param_1 + 8) = 0;
  return;
}



// FUNCTION 143ad32e0 FUN_143ad32e0 body=573 status=ok
// SIG undefined FUN_143ad32e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_143ad32e0(char *param_1,undefined1 *param_2,undefined4 *param_3)

{
  size_t sVar1;
  char *local_res8;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  char local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_5c = (uint)(*DAT_146bc7bc0 == 0);
  local_64 = local_5c;
  local_res8 = param_1;
  if (local_5c == 0) {
    sVar1 = _guard_xfg_dispatch_icall_nop(param_1);
    if (0x3b < sVar1) {
      *param_3 = 0xf;
      return 0xffffffff;
    }
    FUN_143ad3da0(local_58);
    local_res8 = local_58;
  }
  local_60 = 0;
  local_6c = DAT_146bc7be4;
  local_68 = 0xffffffff;
  while( true ) {
    while( true ) {
      local_74 = (local_60 + local_6c) / 2;
      if (local_68 == local_74) {
        return 0xffffffff;
      }
      local_68 = local_74;
      if (local_64 == 0) {
        local_70 = _guard_xfg_dispatch_icall_nop
                             (local_res8,
                              (char *)(DAT_146bc7bd0 +
                                      (ulonglong)
                                      *(ushort *)(DAT_146bc7ba0 + (ulonglong)local_74 * 2) * 2));
      }
      else {
        local_70 = FUN_143ad3a20(local_res8);
      }
      if (-1 < local_70) break;
      local_6c = local_74;
    }
    if (local_70 < 1) break;
    local_60 = local_74;
  }
  if ((*(ushort *)(DAT_146bc7ba8 + (ulonglong)local_74 * 2) & 0x8000) != 0) {
    *param_3 = 0xffffff86;
  }
  if (param_2 != (undefined1 *)0x0) {
    if ((((char)DAT_146bc7bc0[1] == '\0') ||
        ((*(ushort *)(DAT_146bc7ba8 + (ulonglong)local_74 * 2) & 0x4000) == 0)) &&
       ((char)DAT_146bc7bc0[1] != '\0')) {
      local_78 = 0;
    }
    else {
      local_78 = 1;
    }
    *param_2 = local_78;
  }
  return *(ushort *)(DAT_146bc7ba8 + (ulonglong)local_74 * 2) & 0xfff;
}



// FUNCTION 143ad3520 FUN_143ad3520 body=50 status=ok
// SIG undefined FUN_143ad3520(void)

void FUN_143ad3520(undefined4 *param_1)

{
  FUN_143aa29a0(&DAT_146bc7b88,FUN_143ad3560,param_1);
  FUN_143a8b110(*param_1);
  return;
}



// FUNCTION 143ad3560 FUN_143ad3560 body=830 status=ok
// SIG undefined FUN_143ad3560(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143ad3560(undefined4 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  uint *puVar3;
  uint uVar4;
  longlong local_18;
  
  FUN_143aa77b0(0xd,FUN_143ad39d0);
  uVar2 = FUN_143ac5410(0,&DAT_145cf5d1c,"cnvalias",FUN_143ad38a0,0,param_1);
  cVar1 = FUN_143a8b0e0(*param_1);
  if (cVar1 == '\0') {
    puVar3 = (uint *)FUN_143ac5780(uVar2);
    uVar4 = *puVar3;
    if (uVar4 < 8) {
      *param_1 = 3;
      FUN_143ac56d0(uVar2);
    }
    else {
      DAT_146bc7bd8 = puVar3[1];
      DAT_146bc7bdc = puVar3[2];
      DAT_146bc7be0 = puVar3[3];
      DAT_146bc7be4 = puVar3[4];
      DAT_146bc7be8 = puVar3[5];
      DAT_146bc7bec = puVar3[6];
      DAT_146bc7bf0 = puVar3[7];
      DAT_146bc7bf4 = puVar3[8];
      if (8 < uVar4) {
        _DAT_146bc7bf8 = puVar3[9];
      }
      uVar4 = uVar4 * 2 + 2;
      DAT_146bc7b90 = (longlong)puVar3 + (ulonglong)uVar4 * 2;
      uVar4 = uVar4 + DAT_146bc7bd8;
      _DAT_146bc7b98 = (longlong)puVar3 + (ulonglong)uVar4 * 2;
      uVar4 = uVar4 + DAT_146bc7bdc;
      DAT_146bc7ba0 = (longlong)puVar3 + (ulonglong)uVar4 * 2;
      uVar4 = uVar4 + DAT_146bc7be0;
      DAT_146bc7ba8 = (longlong)puVar3 + (ulonglong)uVar4 * 2;
      uVar4 = uVar4 + DAT_146bc7be4;
      _DAT_146bc7bb0 = (longlong)puVar3 + (ulonglong)uVar4 * 2;
      uVar4 = uVar4 + DAT_146bc7be8;
      DAT_146bc7bb8 = (longlong)puVar3 + (ulonglong)uVar4 * 2;
      uVar4 = uVar4 + DAT_146bc7bec;
      if ((DAT_146bc7bf0 == 0) || (1 < *(ushort *)((longlong)puVar3 + (ulonglong)uVar4 * 2))) {
        DAT_146bc7bc0 = &DAT_145cf5d20;
      }
      else {
        DAT_146bc7bc0 = (short *)((longlong)puVar3 + (ulonglong)uVar4 * 2);
      }
      DAT_146bc7bc8 = (longlong)puVar3 + (ulonglong)(uVar4 + DAT_146bc7bf0) * 2;
      local_18 = DAT_146bc7bc8;
      if (*DAT_146bc7bc0 != 0) {
        local_18 = (longlong)puVar3 + (ulonglong)(uVar4 + DAT_146bc7bf0 + DAT_146bc7bf4) * 2;
      }
      DAT_146bc7bd0 = local_18;
      DAT_146bc7b80 = uVar2;
    }
  }
  return;
}


