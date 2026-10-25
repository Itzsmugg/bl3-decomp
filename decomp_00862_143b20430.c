// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143b20430 FUN_143b20430 body=42 status=ok
// SIG undefined FUN_143b20430(void)

undefined8 FUN_143b20430(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  return uVar1;
}



// FUNCTION 143b20460 FUN_143b20460 body=166 status=ok
// SIG undefined FUN_143b20460(void)

undefined4 FUN_143b20460(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 local_18 [2];
  longlong local_10;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    local_10 = FUN_143a8fe10(param_2);
    if (local_10 == 0) {
      *param_3 = 1;
      local_18[0] = 2;
    }
    else {
      local_18[0] = 1;
      iVar2 = FUN_143a904f0(param_2);
      FUN_143b22bc0(*(undefined8 *)(param_1 + 8),local_10,local_10 + (longlong)iVar2 * 2,
                    *(undefined1 *)(param_1 + 0x10),local_18);
    }
  }
  else {
    local_18[0] = 2;
  }
  return local_18[0];
}



// FUNCTION 143b20510 FUN_143b20510 body=21 status=ok
// SIG undefined FUN_143b20510(void)

undefined8 FUN_143b20510(void)

{
  return 1;
}



// FUNCTION 143b20530 FUN_143b20530 body=73 status=ok
// SIG undefined FUN_143b20530(void)

bool FUN_143b20530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_143b1fce0(param_1,param_2,param_3);
  return cVar1 != '\0';
}



// FUNCTION 143b20580 FUN_143b20580 body=74 status=ok
// SIG undefined FUN_143b20580(void)

void FUN_143b20580(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143a904f0(param_4);
  FUN_143a8f030(param_1,param_2,param_3,param_4,0,uVar1);
  return;
}



// FUNCTION 143b205d0 FUN_143b205d0 body=74 status=ok
// SIG undefined FUN_143b205d0(void)

uint FUN_143b205d0(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x38) + (longlong)(param_2 >> 8));
  if (bVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(uint)bVar1 >> ((byte)(param_2 >> 5) & 7) & 1;
  }
  return uVar2;
}



// FUNCTION 143b20620 FUN_143b20620 body=72 status=ok
// SIG undefined FUN_143b20620(void)

void FUN_143b20620(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143b22bc0(*(undefined8 *)(param_1 + 8),param_2,param_3,*(undefined1 *)(param_1 + 0x10),0);
  return;
}



// FUNCTION 143b20670 FUN_143b20670 body=66 status=ok
// SIG undefined FUN_143b20670(void)

void FUN_143b20670(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143b23430(*(undefined8 *)(param_1 + 8),param_2,param_3,0,param_4);
  return;
}



// FUNCTION 143b206c0 FUN_143b206c0 body=66 status=ok
// SIG undefined FUN_143b206c0(void)

void FUN_143b206c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143b25b90(*(undefined8 *)(param_1 + 8),param_2,param_3,0,param_4);
  return;
}



// FUNCTION 143b20710 LogPathHelper body=34 status=ok
// SIG undefined LogPathHelper(void)

void UAdoPathFollowingComponent::LogPathHelper(undefined8 param_1,undefined8 param_2)

{
  FUN_143a904f0(param_2);
  return;
}



// FUNCTION 143b20740 FUN_143b20740 body=156 status=ok
// SIG undefined FUN_143b20740(void)

longlong FUN_143b20740(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    lVar3 = FUN_143a8fe10(param_2);
    if (lVar3 == 0) {
      *param_3 = 1;
      lVar3 = 0;
    }
    else {
      iVar2 = FUN_143a904f0(param_2);
      lVar4 = (**(code **)(*param_1 + 0x88))(param_1,lVar3,lVar3 + (longlong)iVar2 * 2,param_3);
      lVar3 = lVar4 - lVar3 >> 1;
    }
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 143b207e0 FUN_143b207e0 body=66 status=ok
// SIG undefined FUN_143b207e0(void)

void FUN_143b207e0(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_143a8b110(*param_2);
  if (cVar1 != '\0') {
    cVar1 = FUN_143a90330(param_1);
    if (cVar1 != '\0') {
      *param_2 = 1;
    }
  }
  return;
}



// FUNCTION 143b20830 FUN_143b20830 body=76 status=ok
// SIG undefined FUN_143b20830(void)

undefined8 FUN_143b20830(undefined4 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_18 [2];
  longlong *local_10;
  
  local_18[0] = 0;
  local_10 = (longlong *)FUN_143b1f2c0(local_18);
  cVar1 = FUN_143a8b110(local_18[0]);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*local_10 + 0x40))(local_10,param_1);
  }
  return uVar2;
}



// FUNCTION 143b20880 FUN_143b20880 body=48 status=ok
// SIG undefined FUN_143b20880(void)

void FUN_143b20880(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3);
  return;
}



// FUNCTION 143b208b0 FUN_143b208b0 body=24 status=ok
// SIG undefined FUN_143b208b0(void)

void FUN_143b208b0(undefined8 param_1)

{
  FUN_143b1f220(param_1);
  return;
}



// FUNCTION 143b208d0 FUN_143b208d0 body=346 status=ok
// SIG undefined FUN_143b208d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_143b208d0(longlong *param_1,undefined4 param_2,longlong param_3,int param_4,undefined4 *param_5)

{
  char cVar1;
  undefined1 auStack_78 [32];
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    if (param_3 == 0) {
      local_50 = (uint)(param_4 != 0);
      local_58 = local_50;
    }
    else {
      local_54 = (uint)(param_4 < 0);
      local_58 = local_54;
    }
    if (local_58 == 0) {
      FUN_143a8d8e0(local_40,param_3,0,param_4);
      cVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2,local_40);
      if (cVar1 == '\0') {
        local_48 = 0xffffffff;
        FUN_143a8dc60(local_40);
        local_4c = local_48;
      }
      else {
        local_4c = FUN_143a8f920(local_40,param_3,param_4,param_5);
        FUN_143a8dc60(local_40);
      }
    }
    else {
      *param_5 = 1;
      local_4c = 0;
    }
  }
  else {
    local_4c = 0;
  }
  return local_4c;
}



// FUNCTION 143b20a40 FUN_143b20a40 body=773 status=ok
// SIG undefined FUN_143b20a40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_143b20a40(longlong *param_1,longlong param_2,int param_3,longlong param_4,int param_5,
             undefined4 *param_6)

{
  char cVar1;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  undefined1 local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  longlong local_b0;
  undefined1 local_a8 [64];
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  cVar1 = FUN_143a8b0e0(*param_6);
  if (cVar1 == '\0') {
    if (param_2 == 0) {
      local_d4 = (uint)(param_3 != 0);
      local_d8 = local_d4;
    }
    else {
      local_d0 = (uint)(param_3 < -1);
      local_d8 = local_d0;
    }
    if (local_d8 == 0) {
      if (param_4 == 0) {
        local_e0 = (uint)(param_5 != 0);
        local_e4 = local_e0;
      }
      else {
        local_dc = (uint)(param_5 < 0);
        local_e4 = local_dc;
      }
      if ((local_e4 == 0) && ((param_2 != param_4 || (param_2 == 0)))) {
        FUN_143a8d8e0(local_68,param_4,0,param_5);
        if (param_3 != 0) {
          local_f8 = (undefined4 *)((ulonglong)local_f8 & 0xffffffff00000000);
          local_b8 = param_1;
          local_c8 = (longlong *)
                     _guard_xfg_dispatch_icall_nop
                               (param_1,0,&icu_53::Normalizer2::RTTI_Type_Descriptor,
                                &icu_53::Normalizer2WithImpl::RTTI_Type_Descriptor);
          if (local_c8 == (longlong *)0x0) {
            local_e8 = param_3 < 0;
            FUN_143a8d4f0(local_40,local_e8,param_2,param_3);
            (**(code **)(*local_b8 + 0x10))(local_b8,local_40,local_68,param_6);
            FUN_143a8dc60(local_40);
          }
          else {
            FUN_143b108e0(local_a8,local_c8[1],local_68);
            cVar1 = FUN_143b24df0(local_a8,param_3,param_6);
            if (cVar1 != '\0') {
              if (param_3 < 0) {
                local_b0 = 0;
              }
              else {
                local_b0 = param_2 + (longlong)param_3 * 2;
              }
              local_f8 = param_6;
              (**(code **)(*local_c8 + 0x78))(local_c8,param_2,local_b0,local_a8);
            }
            FUN_143b10950(local_a8);
          }
        }
        local_c0 = FUN_143a8f920(local_68,param_4,param_5,param_6);
        FUN_143a8dc60(local_68);
        return local_c0;
      }
    }
    *param_6 = 1;
  }
  return 0;
}



// FUNCTION 143b20d50 FUN_143b20d50 body=70 status=ok
// SIG undefined FUN_143b20d50(void)

undefined8 FUN_143b20d50(undefined4 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_18 [2];
  undefined8 local_10;
  
  local_18[0] = 0;
  local_10 = FUN_143b1f1c0(local_18);
  cVar1 = FUN_143a8b110(local_18[0]);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_143b1f030(local_10,param_1);
  }
  return uVar2;
}



// FUNCTION 143b20da0 FUN_143b20da0 body=111 status=ok
// SIG undefined FUN_143b20da0(void)

undefined8 FUN_143b20da0(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_18 [2];
  longlong *local_10;
  
  if ((param_2 < 2) || (5 < param_2)) {
    uVar2 = 1;
  }
  else {
    local_18[0] = 0;
    local_10 = (longlong *)FUN_143b1f100(param_2,local_18);
    cVar1 = FUN_143a8b110(local_18[0]);
    if (cVar1 == '\0') {
      uVar2 = 2;
    }
    else {
      uVar2 = (**(code **)(*local_10 + 0x90))(local_10,param_1);
    }
  }
  return uVar2;
}



// FUNCTION 143b20e20 FUN_143b20e20 body=381 status=ok
// SIG undefined FUN_143b20e20(void)

undefined8 FUN_143b20e20(void)

{
  if (DAT_146bc7d70 != 0) {
    FUN_143b1eb90(DAT_146bc7d70,1);
  }
  DAT_146bc7d70 = 0;
  if (DAT_146bc7d78 != 0) {
    FUN_143b1eb90(DAT_146bc7d78,1);
  }
  DAT_146bc7d78 = 0;
  if (DAT_146bc7d80 != 0) {
    FUN_143b1eb90(DAT_146bc7d80,1);
  }
  DAT_146bc7d80 = 0;
  if (DAT_146bc7d88 != (undefined8 *)0x0) {
    (**(code **)*DAT_146bc7d88)(DAT_146bc7d88,1);
  }
  DAT_146bc7d88 = (undefined8 *)0x0;
  FUN_143ab2e80(DAT_146bc7d48);
  DAT_146bc7d48 = 0;
  FUN_143a9a9f0(&DAT_146bc7d50);
  FUN_143a9a9f0(&DAT_146bc7d58);
  FUN_143a9a9f0(&DAT_146bc7d60);
  FUN_143a9a9f0(&DAT_146bc7d68);
  return 1;
}



// FUNCTION 143b20fa0 FUN_143b20fa0 body=68 status=ok
// SIG undefined FUN_143b20fa0(void)

longlong FUN_143b20fa0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143b21090(param_1,param_2,param_4);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return param_1;
}



// FUNCTION 143b20ff0 FUN_143b20ff0 body=78 status=ok
// SIG undefined FUN_143b20ff0(void)

undefined8 * FUN_143b20ff0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143b33bb0(0,0,param_2);
  *param_1 = uVar1;
  FUN_143b090a0(param_1 + 1,FUN_143a8d350,0,param_2);
  return param_1;
}



// FUNCTION 143b21040 FUN_143b21040 body=68 status=ok
// SIG undefined FUN_143b21040(void)

longlong FUN_143b21040(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143b21090(param_1,param_2,param_3);
  *(undefined8 *)(param_1 + 0x20) = param_4;
  return param_1;
}



// FUNCTION 143b21090 FUN_143b21090 body=74 status=ok
// SIG undefined FUN_143b21090(void)

undefined8 * FUN_143b21090(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  return param_1;
}



// FUNCTION 143b210e0 FUN_143b210e0 body=44 status=ok
// SIG undefined FUN_143b210e0(void)

void FUN_143b210e0(undefined8 *param_1)

{
  FUN_143ac2a70(*param_1);
  FUN_143b091e0(param_1 + 1);
  return;
}



// FUNCTION 143b21110 FUN_143b21110 body=107 status=ok
// SIG undefined FUN_143b21110(void)

void FUN_143b21110(undefined8 *param_1)

{
  FUN_143ac56d0(*param_1);
  FUN_143ac2a70(param_1[4]);
  if (param_1[0x39] != 0) {
    FUN_143b21180(param_1[0x39],1);
  }
  return;
}



// FUNCTION 143b21180 FUN_143b21180 body=54 status=ok
// SIG undefined FUN_143b21180(void)

undefined8 FUN_143b21180(undefined8 param_1,uint param_2)

{
  FUN_143b210e0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b211c0 FUN_143b211c0 body=85 status=ok
// SIG undefined FUN_143b211c0(void)

void FUN_143b211c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_143b23c50(param_1,param_3);
  if (cVar1 != '\0') {
    FUN_143ac2b60(**(undefined8 **)(param_1 + 0x1c8),&LAB_143b27560,FUN_143a9abd0,param_2);
  }
  return;
}



// FUNCTION 143b21220 FUN_143b21220 body=249 status=ok
// SIG undefined FUN_143b21220(void)

void FUN_143b21220(undefined8 param_1,ushort *param_2,undefined8 param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  ushort *local_res10;
  uint local_14;
  
  local_res10 = param_2;
  do {
    uVar1 = *local_res10;
    if ((uVar1 & 1) == 0) {
      local_14 = (uint)local_res10[1];
      local_res10 = local_res10 + 2;
    }
    else {
      local_14 = (local_res10[1] & 0xffff003f) << 0x10 | (uint)local_res10[2];
      local_res10 = local_res10 + 3;
    }
    if ((local_14 & 1) != 0) {
      uVar2 = FUN_143b109f0(param_1,(int)local_14 >> 1);
      uVar3 = FUN_143b240e0(param_1,uVar2);
      FUN_143b21220(param_1,uVar3,param_3);
    }
    FUN_143b13590(param_3,(int)local_14 >> 1);
  } while ((uVar1 & 0x8000) == 0);
  return;
}



// FUNCTION 143b21320 FUN_143b21320 body=67 status=ok
// SIG undefined FUN_143b21320(void)

void FUN_143b21320(longlong param_1,undefined8 param_2)

{
  undefined1 local_18 [24];
  
  FUN_143a9f4f0(local_18,param_1,param_2);
  FUN_143ac2b60(*(undefined8 *)(param_1 + 0x20),0,FUN_143b27300,local_18);
  return;
}



// FUNCTION 143b21370 FUN_143b21370 body=180 status=ok
// SIG undefined FUN_143b21370(void)

void FUN_143b21370(longlong param_1,undefined8 *param_2)

{
  ushort local_28;
  undefined1 local_20 [32];
  
  FUN_143a9f4f0(local_20,param_1,param_2);
  FUN_143ac2b60(*(undefined8 *)(param_1 + 0x20),0,FUN_143b27340,local_20);
  for (local_28 = 0xac00; local_28 < 0xd7a4; local_28 = local_28 + 0x1c) {
    (*(code *)param_2[1])(*param_2,local_28);
    (*(code *)param_2[1])(*param_2,local_28 + 1);
  }
  (*(code *)param_2[1])(*param_2,0xd7a4);
  return;
}



// FUNCTION 143b21430 FUN_143b21430 body=428 status=ok
// SIG undefined FUN_143b21430(void)

void FUN_143b21430(undefined8 *param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong local_38;
  longlong local_28;
  
  uVar1 = FUN_143ac2bb0(*param_1,param_3);
  if (((uVar1 & 0x3fffff) == 0) && (param_2 != 0)) {
    FUN_143b340b0(*param_1,param_3,uVar1 | param_2,param_4);
  }
  else {
    if ((uVar1 & 0x200000) == 0) {
      lVar3 = FUN_143a8d310(0x58);
      if (lVar3 == 0) {
        local_28 = 0;
      }
      else {
        local_28 = FUN_143b11ea0(lVar3);
      }
      local_38 = local_28;
      if (local_28 == 0) {
        *param_4 = 7;
        return;
      }
      uVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(param_1 + 1);
      FUN_143b340b0(*param_1,param_3,uVar1 & 0xffe00000 | 0x200000 | uVar2,param_4);
      FUN_143b09430(param_1 + 1,local_28,param_4);
      if ((uVar1 & 0x1fffff) != 0) {
        FUN_143b13590(local_28,uVar1 & 0x1fffff);
      }
    }
    else {
      local_38 = FUN_143acf270(param_1 + 1,uVar1 & 0x1fffff);
    }
    FUN_143b13590(local_38,param_2);
  }
  return;
}



// FUNCTION 143b215e0 FUN_143b215e0 body=104 status=ok
// SIG undefined FUN_143b215e0(void)

undefined1 FUN_143b215e0(undefined8 param_1,int param_2,undefined1 param_3,undefined8 param_4)

{
  undefined2 local_res10;
  undefined1 local_18;
  
  if (param_2 < 0x10000) {
    local_res10 = (undefined2)param_2;
    local_18 = FUN_143b21910(param_1,local_res10,param_3,param_4);
  }
  else {
    local_18 = FUN_143b21a00(param_1,param_2,param_3,param_4);
  }
  return local_18;
}



// FUNCTION 143b21650 FUN_143b21650 body=689 status=ok
// SIG undefined FUN_143b21650(void)

undefined8
FUN_143b21650(undefined8 *param_1,ushort *param_2,int param_3,byte param_4,byte param_5,
             undefined8 param_6)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  ushort *local_res10;
  byte local_res20;
  int local_20;
  uint local_1c;
  
  if (param_3 != 0) {
    if ((*(int *)(param_1 + 5) < param_3) &&
       (cVar1 = FUN_143b26f90(param_1,param_3,param_6), cVar1 == '\0')) {
      return 0;
    }
    *(int *)(param_1 + 5) = *(int *)(param_1 + 5) - param_3;
    if ((param_4 < *(byte *)((longlong)param_1 + 0x2c)) && (param_4 != 0)) {
      local_1c = (uint)*param_2;
      local_20 = 1;
      iVar3 = 1;
      if ((((local_1c & 0xfffffc00) == 0xd800) && (iVar3 = local_20, param_3 != 1)) &&
         ((param_2[1] & 0xfc00) == 0xdc00)) {
        local_1c = local_1c * 0x400 + -0x35fdc00 + (uint)param_2[1];
        iVar3 = 2;
      }
      local_20 = iVar3;
      FUN_143b24f10(param_1,local_1c,param_4);
      while (local_20 < param_3) {
        local_1c = (uint)param_2[local_20];
        iVar3 = local_20 + 1;
        if ((((local_1c & 0xfffffc00) == 0xd800) && (iVar3 != param_3)) &&
           ((param_2[iVar3] & 0xfc00) == 0xdc00)) {
          local_1c = local_1c * 0x400 + -0x35fdc00 + (uint)param_2[iVar3];
          iVar3 = local_20 + 2;
        }
        local_20 = iVar3;
        if (local_20 < param_3) {
          uVar2 = FUN_143b109f0(*param_1,local_1c);
          local_res20 = FUN_143b23eb0(uVar2);
        }
        else {
          local_res20 = param_5;
        }
        FUN_143b215e0(param_1,local_1c,local_res20,param_6);
      }
    }
    else {
      if (param_5 < 2) {
        param_1[3] = param_1[4] + (longlong)param_3 * 2;
      }
      else if (param_4 < 2) {
        param_1[3] = param_1[4] + 2;
      }
      local_res10 = param_2;
      do {
        *(ushort *)param_1[4] = *local_res10;
        param_1[4] = param_1[4] + 2;
        local_res10 = local_res10 + 1;
      } while (local_res10 != param_2 + param_3);
      *(byte *)((longlong)param_1 + 0x2c) = param_5;
    }
  }
  return 1;
}



// FUNCTION 143b21910 FUN_143b21910 body=226 status=ok
// SIG undefined FUN_143b21910(void)

undefined8 FUN_143b21910(longlong param_1,undefined2 param_2,byte param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((*(int *)(param_1 + 0x28) == 0) && (cVar1 = FUN_143b26f90(param_1,1,param_4), cVar1 == '\0'))
  {
    uVar3 = 0;
  }
  else {
    if ((param_3 < *(byte *)(param_1 + 0x2c)) && (param_3 != 0)) {
      FUN_143b24f10(param_1,param_2,param_3);
    }
    else {
      **(undefined2 **)(param_1 + 0x20) = param_2;
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 2;
      *(byte *)(param_1 + 0x2c) = param_3;
      if (param_3 < 2) {
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
      }
    }
    iVar2 = *(int *)(param_1 + 0x28) + -1;
    *(int *)(param_1 + 0x28) = iVar2;
    uVar3 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
  }
  return uVar3;
}



// FUNCTION 143b21a00 FUN_143b21a00 body=280 status=ok
// SIG undefined FUN_143b21a00(void)

undefined8 FUN_143b21a00(longlong param_1,int param_2,byte param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((*(int *)(param_1 + 0x28) < 2) && (cVar1 = FUN_143b26f90(param_1,2,param_4), cVar1 == '\0')) {
    uVar3 = 0;
  }
  else {
    if ((param_3 < *(byte *)(param_1 + 0x2c)) && (param_3 != 0)) {
      FUN_143b24f10(param_1,param_2,param_3);
    }
    else {
      **(short **)(param_1 + 0x20) = (short)(param_2 >> 10) + -0x2840;
      *(ushort *)(*(longlong *)(param_1 + 0x20) + 2) = (ushort)param_2 & 0x3ff | 0xdc00;
      *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 4;
      *(byte *)(param_1 + 0x2c) = param_3;
      if (param_3 < 2) {
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
      }
    }
    iVar2 = *(int *)(param_1 + 0x28) + -2;
    *(int *)(param_1 + 0x28) = iVar2;
    uVar3 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
  }
  return uVar3;
}



// FUNCTION 143b21b20 FUN_143b21b20 body=297 status=ok
// SIG undefined FUN_143b21b20(void)

undefined8 FUN_143b21b20(longlong param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  ushort local_res10;
  int local_14;
  
  if (param_2 < 0x10000) {
    local_14 = 1;
  }
  else {
    local_14 = 2;
  }
  if ((*(int *)(param_1 + 0x28) < local_14) &&
     (cVar1 = FUN_143b26f90(param_1,local_14,param_3), cVar1 == '\0')) {
    return 0;
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) - local_14;
  local_res10 = (ushort)param_2;
  if (local_14 == 1) {
    **(ushort **)(param_1 + 0x20) = local_res10;
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 2;
  }
  else {
    **(short **)(param_1 + 0x20) = (short)((int)param_2 >> 10) + -0x2840;
    *(ushort *)(*(longlong *)(param_1 + 0x20) + 2) = local_res10 & 0x3ff | 0xdc00;
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 4;
  }
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
  return 1;
}



// FUNCTION 143b21c50 FUN_143b21c50 body=217 status=ok
// SIG undefined FUN_143b21c50(void)

undefined8 FUN_143b21c50(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  
  if (param_2 != param_3) {
    uVar3 = param_3 - param_2 >> 1;
    iVar2 = (int)uVar3;
    if ((*(int *)(param_1 + 0x28) < iVar2) &&
       (cVar1 = FUN_143b26f90(param_1,uVar3 & 0xffffffff,param_4), cVar1 == '\0')) {
      return 0;
    }
    FUN_143ab3ca0(*(undefined8 *)(param_1 + 0x20),param_2,iVar2);
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 2;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) - iVar2;
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
  }
  return 1;
}



// FUNCTION 143b21d30 FUN_143b21d30 body=450 status=ok
// SIG undefined FUN_143b21d30(void)

uint FUN_143b21d30(ushort *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort *local_res8;
  
  local_res8 = param_1;
  if (param_2 < 0x3400) {
    uVar3 = (ushort)(param_2 << 1);
    for (; uVar4 = *local_res8, uVar4 < uVar3; local_res8 = local_res8 + (int)((uVar4 & 1) + 2)) {
    }
    if (uVar3 == (uVar4 & 0x7ffe)) {
      if ((uVar4 & 1) == 0) {
        return (uint)local_res8[1];
      }
      return CONCAT22(local_res8[1],local_res8[2]);
    }
  }
  else {
    uVar3 = ((ushort)(param_2 >> 9) & 0xfffe) + 0x3400;
    uVar4 = (ushort)(param_2 << 6);
    while( true ) {
      for (; uVar1 = *local_res8, uVar1 < uVar3; local_res8 = local_res8 + (int)((uVar1 & 1) + 2)) {
      }
      if (uVar3 != (uVar1 & 0x7ffe)) {
        return 0xffffffff;
      }
      uVar2 = local_res8[1];
      if (uVar4 <= uVar2) break;
      if ((uVar1 & 0x8000) != 0) {
        return 0xffffffff;
      }
      local_res8 = local_res8 + 3;
    }
    if (uVar4 == (uVar2 & 0xffc0)) {
      return (uVar2 & 0xffff003f) << 0x10 | (uint)local_res8[2];
    }
  }
  return 0xffffffff;
}



// FUNCTION 143b21f00 FUN_143b21f00 body=2109 status=ok
// SIG undefined FUN_143b21f00(void)

undefined8
FUN_143b21f00(longlong param_1,ushort *param_2,ushort *param_3,char param_4,char param_5,
             undefined8 param_6,undefined4 *param_7)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  short sVar5;
  bool bVar6;
  ushort *puVar7;
  char cVar8;
  byte bVar9;
  undefined4 uVar10;
  ushort *local_res10;
  ushort *local_res18;
  byte local_58;
  ushort local_54;
  uint local_50;
  byte local_3f;
  ushort *local_38;
  ushort *local_28;
  int local_20;
  int local_1c;
  undefined8 local_10;
  
  iVar4 = *(int *)(param_1 + 0x10);
  local_res10 = param_2;
  local_res18 = param_3;
  local_38 = param_2;
  if (param_3 == (ushort *)0x0) {
    if (param_5 == '\0') {
      local_10 = 0;
    }
    else {
      local_10 = param_6;
    }
    local_res10 = (ushort *)FUN_143b22fc0(param_1,param_2,iVar4,local_10,param_7);
    cVar8 = FUN_143a8b0e0(*param_7);
    if (cVar8 != '\0') {
      return 0;
    }
    if (param_2 < local_res10) {
      local_38 = local_res10 + -1;
    }
    local_res18 = (ushort *)FUN_143ab45e0(local_res10,0);
  }
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  puVar7 = local_38;
LAB_143b22006:
  do {
    local_38 = puVar7;
    puVar7 = local_res10;
    local_28 = local_res10;
    while (local_res10 != local_res18) {
      uVar2 = *local_res10;
      local_50 = (uint)uVar2;
      if ((int)local_50 < iVar4) {
LAB_143b2209d:
        local_res10 = local_res10 + 1;
      }
      else {
        local_54 = *(ushort *)
                    (**(longlong **)(param_1 + 0x20) +
                    (longlong)
                    (int)((local_50 & 0x1f) +
                         (uint)*(ushort *)
                                (**(longlong **)(param_1 + 0x20) +
                                (longlong)((int)local_50 >> 5) * 2) * 4) * 2);
        cVar8 = FUN_143b251a0(param_1,local_54);
        if (cVar8 != '\0') goto LAB_143b2209d;
        if ((local_50 & 0xfffff800) != 0xd800) break;
        if ((uVar2 & 0x400) == 0) {
          if ((local_res10 + 1 != local_res18) && ((local_res10[1] & 0xfc00) == 0xdc00)) {
            local_50 = local_50 * 0x400 + -0x35fdc00 + (uint)local_res10[1];
          }
        }
        else if ((puVar7 < local_res10) && (puVar1 = local_res10 + -1, (*puVar1 & 0xfc00) == 0xd800)
                ) {
          local_res10 = local_res10 + -1;
          local_50 = (uint)*puVar1 * 0x400 + -0x35fdc00 + local_50;
        }
        local_54 = FUN_143b109f0(param_1,local_50);
        cVar8 = FUN_143b251a0(param_1,local_54);
        if (cVar8 == '\0') break;
        if (local_50 < 0x10000) {
          local_1c = 1;
        }
        else {
          local_1c = 2;
        }
        local_res10 = local_res10 + local_1c;
      }
    }
    if (local_res10 == puVar7) {
      if (local_res10 == local_res18) {
        return 1;
      }
    }
    else {
      if (param_5 == '\0') {
        local_58 = 0;
      }
      else {
        cVar8 = FUN_143b21c50(param_6,puVar7,local_res10,param_7);
        if (cVar8 == '\0') {
          return 1;
        }
      }
      if (local_res10 == local_res18) {
        return 1;
      }
      local_38 = local_res10 + -1;
      if ((((*local_38 & 0xfc00) == 0xdc00) && (puVar7 < local_38)) &&
         ((local_res10[-2] & 0xfc00) == 0xd800)) {
        local_38 = local_res10 + -2;
      }
      local_28 = local_res10;
    }
    if (local_50 < 0x10000) {
      local_20 = 1;
    }
    else {
      local_20 = 2;
    }
    local_res10 = local_res10 + local_20;
    cVar8 = FUN_143b25340(local_54);
    puVar7 = local_38;
    if ((cVar8 == '\0') || (local_38 == local_28)) {
LAB_143b224d3:
      if (local_54 < 0xff01) {
        if ((param_5 == '\0') && (cVar8 = FUN_143b253b0(param_1,local_54), cVar8 == '\0')) {
          return 0;
        }
LAB_143b225fe:
        cVar8 = FUN_143b24b10(param_1,local_50,local_54);
        if (cVar8 == '\0') {
          if (param_5 != '\0') {
            FUN_143b26ee0(param_6,(longlong)local_28 - (longlong)local_38 >> 1 & 0xffffffff);
          }
        }
        else {
          local_38 = local_28;
        }
        local_res10 = (ushort *)FUN_143b23d20(param_1,local_res10,local_res18);
        uVar10 = FUN_143b25440(param_6);
        cVar8 = FUN_143b23a60(param_1,local_38,local_res10,param_6,param_7);
        if (cVar8 == '\0') {
          return 1;
        }
        FUN_143b26720(param_1,param_6,uVar10,param_4);
        puVar7 = local_res10;
        if (param_5 == '\0') {
          cVar8 = FUN_143b23ca0(param_6,local_38,local_res10);
          if (cVar8 == '\0') {
            return 0;
          }
          FUN_143b26e80(param_6);
          local_58 = 0;
          puVar7 = local_res10;
        }
        goto LAB_143b22006;
      }
      if (param_4 != '\0') {
        if (param_5 == '\0') {
          local_3f = local_58;
        }
        else {
          local_3f = FUN_143b24490(param_6);
        }
        if (((local_3f == 0) && (local_38 < local_28)) &&
           (bVar9 = FUN_143b24820(param_1,local_38,local_28), (byte)local_54 < bVar9)) {
          if (param_5 == '\0') {
            return 0;
          }
          goto LAB_143b225fe;
        }
      }
      if (param_5 == '\0') {
        if ((byte)local_54 < local_58) {
          return 0;
        }
        local_58 = (byte)local_54;
        goto LAB_143b22006;
      }
      cVar8 = FUN_143b215e0(param_6,local_50,(byte)local_54,param_7);
    }
    else {
      uVar2 = local_28[-1];
      bVar6 = false;
      sVar5 = (short)local_50;
      if ((int)local_50 < 0x11a7) {
        if ((ushort)(uVar2 + 0xef00) < 0x13) {
          if (param_5 == '\0') {
            return 0;
          }
          if ((local_res10 != local_res18) &&
             (uVar3 = *local_res10, (ushort)(uVar3 + 0xee59) < 0x1c)) {
            local_res10 = local_res10 + 1;
            FUN_143b270f0(param_6,((uVar2 + 0xef00) * 0x15 + -0x1161 + sVar5) * 0x1c + -0x5400 +
                                  uVar3 + 0xee59);
            puVar7 = local_res10;
            goto LAB_143b22006;
          }
          bVar6 = true;
        }
      }
      else {
        cVar8 = FUN_143b25290(uVar2);
        if (cVar8 != '\0') {
          if (param_5 == '\0') {
            return 0;
          }
          FUN_143b270f0(param_6,uVar2 + 0xee59 + sVar5);
          puVar7 = local_res10;
          goto LAB_143b22006;
        }
      }
      if (bVar6) goto LAB_143b224d3;
      if (param_5 == '\0') {
        local_58 = 0;
        goto LAB_143b22006;
      }
      cVar8 = FUN_143b21910(param_6,sVar5,0,param_7);
    }
    if (cVar8 == '\0') {
      return 1;
    }
  } while( true );
}



// FUNCTION 143b22750 FUN_143b22750 body=650 status=ok
// SIG undefined FUN_143b22750(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b22750(undefined8 param_1,longlong param_2,longlong param_3,char param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined4 *param_8)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong local_res10;
  longlong local_res18;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_80;
  undefined4 *local_78;
  undefined4 local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  cVar1 = FUN_143b25220(param_7);
  local_res10 = param_2;
  if ((cVar1 == '\0') && (local_60 = FUN_143b23d20(param_1,param_2,param_3), param_2 != local_60)) {
    local_48 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
               ::GetBoundProgramCounterForTimerManager(param_7);
    uVar3 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
            ::GetBoundProgramCounterForTimerManager(param_7);
    local_50 = FUN_143b23df0(param_1,uVar3,local_48);
    lVar4 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
            ::GetBoundProgramCounterForTimerManager(param_7);
    uVar5 = lVar4 - local_50 >> 1;
    local_68 = (undefined4)uVar5;
    FUN_143a8db50(local_38,local_50,uVar5 & 0xffffffff);
    FUN_143b26ee0(param_7,local_68);
    FUN_143a8dcd0(param_6,local_38);
    FUN_143b17350(local_38,param_2,local_60 - param_2 >> 1 & 0xffffffff);
    local_58 = FUN_143a8fe10(local_38);
    iVar2 = FUN_143a904f0(local_38);
    local_78 = param_8;
    local_80 = param_7;
    local_88 = 1;
    FUN_143b21f00(param_1,local_58,local_58 + (longlong)iVar2 * 2,param_5);
    cVar1 = FUN_143a8b0e0(*param_8);
    if (cVar1 != '\0') {
      FUN_143a8dc60(local_38);
      return;
    }
    local_res10 = local_60;
    FUN_143a8dc60(local_38);
  }
  if (param_4 == '\0') {
    local_res18 = param_3;
    if (param_3 == 0) {
      local_res18 = FUN_143ab45e0(local_res10,0);
    }
    FUN_143b21c50(param_7,local_res10,local_res18,param_8);
  }
  else {
    local_78 = param_8;
    local_80 = param_7;
    local_88 = 1;
    FUN_143b21f00(param_1,local_res10,param_3,param_5);
  }
  return;
}



// FUNCTION 143b229e0 FUN_143b229e0 body=454 status=ok
// SIG undefined FUN_143b229e0(void)

int FUN_143b229e0(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined2 local_res10;
  ushort *local_10;
  
  uVar2 = FUN_143b109f0(param_1,param_2);
  cVar1 = FUN_143b252e0(uVar2);
  if (cVar1 != '\0') {
    return -1;
  }
  if (uVar2 < *(ushort *)(param_1 + 0x16)) {
    cVar1 = FUN_143b25310(uVar2);
    if (cVar1 != '\0') {
      param_3 = param_3 + -0x1161;
      if ((-1 < param_3) && (param_3 < 0x15)) {
        return ((param_2 + -0x1100) * 0x15 + param_3) * 0x1c + 0xac00;
      }
      return -1;
    }
    cVar1 = FUN_143b25250(param_1,uVar2);
    if (cVar1 != '\0') {
      param_3 = param_3 + -0x11a7;
      local_res10 = (undefined2)param_2;
      cVar1 = FUN_143b25290(local_res10);
      if (((cVar1 != '\0') && (0 < param_3)) && (param_3 < 0x1c)) {
        return param_2 + param_3;
      }
      return -1;
    }
    local_10 = (ushort *)(*(longlong *)(param_1 + 0x30) + (ulonglong)uVar2 * 2);
    if (*(ushort *)(param_1 + 0x14) < uVar2) {
      local_10 = local_10 + (int)((*local_10 & 0x1f) + 1);
    }
  }
  else {
    if ((uVar2 < *(ushort *)(param_1 + 0x1c)) || (0xfdff < uVar2)) {
      return -1;
    }
    local_10 = (ushort *)
               (*(longlong *)(param_1 + 0x28) + (ulonglong)uVar2 * 2 +
               (ulonglong)*(ushort *)(param_1 + 0x1c) * -2);
  }
  if ((param_3 < 0) || (0x10ffff < param_3)) {
    iVar3 = -1;
  }
  else {
    iVar3 = FUN_143b21d30(local_10,param_3);
    iVar3 = iVar3 >> 1;
  }
  return iVar3;
}



// FUNCTION 143b22bc0 FUN_143b22bc0 body=1013 status=ok
// SIG undefined FUN_143b22bc0(void)

ushort * FUN_143b22bc0(longlong param_1,ushort *param_2,ushort *param_3,char param_4,
                      undefined4 *param_5)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  ushort *local_res10;
  ushort *local_res18;
  byte local_37;
  ushort local_34;
  uint local_30;
  ushort *local_20;
  int local_14;
  int local_10;
  undefined4 local_c [3];
  
  iVar3 = *(int *)(param_1 + 0x10);
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_3 == (ushort *)0x0) {
    local_c[0] = 0;
    local_res10 = (ushort *)FUN_143b22fc0(param_1,param_2,iVar3,0,local_c);
    if (param_2 < local_res10) {
      param_2 = local_res10 + -1;
    }
    local_res18 = (ushort *)FUN_143ab45e0(local_res10,0);
  }
  local_37 = 0;
  do {
    puVar4 = local_res10;
    local_20 = local_res10;
LAB_143b22c73:
    if (local_res10 == local_res18) {
      return local_res10;
    }
    uVar2 = *local_res10;
    local_30 = (uint)uVar2;
    if ((int)local_30 < iVar3) {
LAB_143b22cf4:
      local_res10 = local_res10 + 1;
      goto LAB_143b22c73;
    }
    local_34 = *(ushort *)
                (**(longlong **)(param_1 + 0x20) +
                (longlong)
                (int)((local_30 & 0x1f) +
                     (uint)*(ushort *)
                            (**(longlong **)(param_1 + 0x20) + (longlong)((int)local_30 >> 5) * 2) *
                     4) * 2);
    cVar5 = FUN_143b251a0(param_1,local_34);
    if (cVar5 != '\0') goto LAB_143b22cf4;
    if ((local_30 & 0xfffff800) == 0xd800) {
      if ((uVar2 & 0x400) == 0) {
        if ((local_res10 + 1 != local_res18) && ((local_res10[1] & 0xfc00) == 0xdc00)) {
          local_30 = local_30 * 0x400 + -0x35fdc00 + (uint)local_res10[1];
        }
      }
      else if ((puVar4 < local_res10) && (puVar1 = local_res10 + -1, (*puVar1 & 0xfc00) == 0xd800))
      {
        local_res10 = local_res10 + -1;
        local_30 = (uint)*puVar1 * 0x400 + -0x35fdc00 + local_30;
      }
      local_34 = FUN_143b109f0(param_1,local_30);
      cVar5 = FUN_143b251a0(param_1,local_34);
      if (cVar5 == '\0') goto LAB_143b22e33;
      if (local_30 < 0x10000) {
        local_14 = 1;
      }
      else {
        local_14 = 2;
      }
      local_res10 = local_res10 + local_14;
      goto LAB_143b22c73;
    }
LAB_143b22e33:
    if (local_res10 != puVar4) {
      param_2 = local_res10 + -1;
      if ((((*param_2 & 0xfc00) == 0xdc00) && (puVar4 < param_2)) &&
         ((local_res10[-2] & 0xfc00) == 0xd800)) {
        param_2 = local_res10 + -2;
      }
      local_37 = 0;
      local_20 = local_res10;
    }
    if (local_30 < 0x10000) {
      local_10 = 1;
    }
    else {
      local_10 = 2;
    }
    local_res10 = local_res10 + local_10;
    cVar5 = FUN_143b253b0(param_1,local_34);
    if (((cVar5 == '\0') ||
        (((bVar6 = FUN_143b23eb0(local_34), param_4 != '\0' && (bVar6 != 0)) &&
         ((local_37 == 0 &&
          ((param_2 < local_20 && (bVar7 = FUN_143b24820(param_1,param_2,local_20), bVar6 < bVar7)))
          ))))) || ((bVar6 < local_37 && (bVar6 != 0)))) {
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = 0;
      }
      return param_2;
    }
    local_37 = bVar6;
    if (local_34 < 0xff01) {
      if (param_5 == (undefined4 *)0x0) {
        return param_2;
      }
      *param_5 = 2;
    }
  } while( true );
}



// FUNCTION 143b22fc0 FUN_143b22fc0 body=168 status=ok
// SIG undefined FUN_143b22fc0(void)

ushort * FUN_143b22fc0(undefined8 param_1,ushort *param_2,int param_3,longlong param_4,
                      undefined8 param_5)

{
  ushort *puVar1;
  ushort *local_res10;
  
  puVar1 = param_2;
  do {
    local_res10 = puVar1;
    if (param_3 <= (int)(uint)*local_res10) break;
    puVar1 = local_res10 + 1;
  } while (*local_res10 != 0);
  if ((local_res10 != param_2) && (param_4 != 0)) {
    FUN_143b21c50(param_4,param_2,local_res10,param_5);
  }
  return local_res10;
}



// FUNCTION 143b23070 FUN_143b23070 body=65 status=ok
// SIG undefined FUN_143b23070(void)

void FUN_143b23070(longlong param_1,undefined8 param_2)

{
  FUN_143ab21b0(param_2,*(undefined8 *)(param_1 + 0x18),
                *(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 1 & 0xffffffff);
  return;
}



// FUNCTION 143b230c0 FUN_143b230c0 body=180 status=ok
// SIG undefined FUN_143b230c0(void)

undefined8 FUN_143b230c0(int param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = (param_1 + -0xac00) % 0x1c;
  iVar2 = (param_1 + -0xac00) / 0x1c;
  *param_2 = (short)(iVar2 / 0x15) + 0x1100;
  param_2[1] = (short)((longlong)iVar2 % 0x15) + 0x1161;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  else {
    param_2[2] = (short)iVar1 + 0x11a7;
    uVar3 = 3;
  }
  return uVar3;
}



// FUNCTION 143b23180 FUN_143b23180 body=450 status=ok
// SIG undefined FUN_143b23180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b23180(undefined8 param_1,undefined4 param_2,undefined2 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 local_res10;
  undefined2 local_res18;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  undefined1 local_38;
  ushort local_34;
  undefined1 local_30;
  uint local_2c;
  ushort *local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_res10 = param_2;
  local_res18 = param_3;
  while( true ) {
    cVar1 = FUN_143b1f9b0(param_1,local_res18);
    if (cVar1 != '\0') {
      uVar2 = FUN_143b23eb0(local_res18);
      FUN_143b215e0(param_4,local_res10,uVar2,param_5);
      return;
    }
    cVar1 = FUN_143b25250(param_1,local_res18);
    if (cVar1 != '\0') break;
    cVar1 = FUN_143b251e0(param_1,local_res18);
    if (cVar1 == '\0') {
      local_28 = (ushort *)FUN_143b1f1a0(param_1,local_res18);
      local_34 = *local_28;
      local_2c = local_34 & 0x1f;
      local_48 = (undefined1)(local_34 >> 8);
      if ((local_34 & 0x80) == 0) {
        local_38 = 0;
      }
      else {
        local_38 = (undefined1)(local_28[-1] >> 8);
      }
      local_40 = param_5;
      local_30 = local_48;
      FUN_143b21650(param_4,local_28 + 1,local_2c,local_38);
      return;
    }
    local_res10 = FUN_143b26400(param_1,local_res10,local_res18);
    local_res18 = FUN_143b109f0(param_1,local_res10);
  }
  iVar3 = FUN_143b230c0(local_res10,local_20);
  FUN_143b21c50(param_4,local_20,local_20 + (longlong)iVar3 * 2,param_5);
  return;
}



// FUNCTION 143b23350 FUN_143b23350 body=212 status=ok
// SIG undefined FUN_143b23350(void)

longlong FUN_143b23350(undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    lVar4 = FUN_143a8fe10(param_2);
    if ((param_3 == param_2) || (lVar4 == 0)) {
      *param_4 = 1;
      FUN_143a90e90(param_3);
    }
    else {
      uVar2 = FUN_143a904f0(param_2);
      iVar3 = FUN_143a904f0(param_2);
      FUN_143b237f0(param_1,lVar4,lVar4 + (longlong)iVar3 * 2,param_3,uVar2,param_4);
    }
  }
  else {
    FUN_143a90e90(param_3);
  }
  return param_3;
}



// FUNCTION 143b23430 FUN_143b23430 body=950 status=ok
// SIG undefined FUN_143b23430(void)

ushort * FUN_143b23430(longlong param_1,ushort *param_2,ushort *param_3,longlong param_4,
                      undefined4 *param_5)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  char cVar5;
  byte bVar6;
  ushort *local_res10;
  ushort *local_res18;
  byte local_37;
  undefined2 local_34;
  uint local_30;
  int local_28;
  int local_24;
  ushort *local_10;
  
  iVar3 = *(int *)(param_1 + 0xc);
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_3 == (ushort *)0x0) {
    local_res10 = (ushort *)FUN_143b22fc0(param_1,param_2,iVar3,param_4,param_5);
    cVar5 = FUN_143a8b0e0(*param_5);
    if (cVar5 != '\0') {
      return local_res10;
    }
    local_res18 = (ushort *)FUN_143ab45e0(local_res10,0);
  }
  local_30 = 0;
  local_34 = 0;
  local_10 = local_res10;
  local_37 = 0;
  puVar4 = local_res10;
LAB_143b234e9:
  if (local_res10 != local_res18) {
    uVar2 = *local_res10;
    local_30 = (uint)uVar2;
    if (iVar3 <= (int)local_30) {
      local_34 = *(undefined2 *)
                  (**(longlong **)(param_1 + 0x20) +
                  (longlong)
                  (int)((local_30 & 0x1f) +
                       (uint)*(ushort *)
                              (**(longlong **)(param_1 + 0x20) + (longlong)((int)local_30 >> 5) * 2)
                       * 4) * 2);
      cVar5 = FUN_143b253f0(param_1,local_34);
      if (cVar5 == '\0') {
        if ((local_30 & 0xfffff800) != 0xd800) goto LAB_143b236a3;
        if ((uVar2 & 0x400) == 0) {
          if ((local_res10 + 1 != local_res18) && ((local_res10[1] & 0xfc00) == 0xdc00)) {
            local_30 = local_30 * 0x400 + -0x35fdc00 + (uint)local_res10[1];
          }
        }
        else if ((puVar4 < local_res10) && (puVar1 = local_res10 + -1, (*puVar1 & 0xfc00) == 0xd800)
                ) {
          local_res10 = local_res10 + -1;
          local_30 = (uint)*puVar1 * 0x400 + -0x35fdc00 + local_30;
        }
        local_34 = FUN_143b109f0(param_1,local_30);
        cVar5 = FUN_143b253f0(param_1,local_34);
        if (cVar5 != '\0') {
          if (local_30 < 0x10000) {
            local_28 = 1;
          }
          else {
            local_28 = 2;
          }
          local_res10 = local_res10 + local_28;
          goto LAB_143b234e9;
        }
        goto LAB_143b236a3;
      }
    }
    local_res10 = local_res10 + 1;
    goto LAB_143b234e9;
  }
LAB_143b236a3:
  if (local_res10 != puVar4) {
    if (param_4 == 0) {
      local_37 = 0;
      local_10 = local_res10;
    }
    else {
      cVar5 = FUN_143b21c50(param_4,puVar4,local_res10,param_5);
      if (cVar5 == '\0') {
        return local_res10;
      }
    }
  }
  if (local_res10 == local_res18) {
    return local_res10;
  }
  if (local_30 < 0x10000) {
    local_24 = 1;
  }
  else {
    local_24 = 2;
  }
  local_res10 = local_res10 + local_24;
  puVar4 = local_res10;
  if (param_4 == 0) {
    cVar5 = FUN_143b1f9b0(param_1,local_34);
    if (cVar5 == '\0') {
      return local_10;
    }
    bVar6 = FUN_143b23eb0(local_34);
    if ((bVar6 < local_37) && (bVar6 != 0)) {
      return local_10;
    }
    local_37 = bVar6;
    if (bVar6 < 2) {
      local_10 = local_res10;
    }
  }
  else {
    cVar5 = FUN_143b23180(param_1,local_30,local_34,param_4,param_5);
    if (cVar5 == '\0') {
      return local_res10;
    }
  }
  goto LAB_143b234e9;
}



// FUNCTION 143b237f0 FUN_143b237f0 body=227 status=ok
// SIG undefined FUN_143b237f0(void)

void FUN_143b237f0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  int param_5,undefined8 param_6)

{
  char cVar1;
  undefined1 local_48 [72];
  
  if ((param_5 < 0) && (param_3 != 0)) {
    param_5 = (int)(param_3 - param_2 >> 1);
  }
  FUN_143a90910(param_4);
  FUN_143b108e0(local_48,param_1,param_4);
  cVar1 = FUN_143b24df0(local_48,param_5,param_6);
  if (cVar1 != '\0') {
    FUN_143b23430(param_1,param_2,param_3,local_48,param_6);
  }
  FUN_143b10950(local_48);
  return;
}



// FUNCTION 143b238e0 FUN_143b238e0 body=375 status=ok
// SIG undefined FUN_143b238e0(void)

void FUN_143b238e0(longlong param_1,longlong param_2,longlong param_3,char param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  undefined2 uVar2;
  longlong local_res18;
  char local_38;
  char local_37;
  undefined1 local_30 [8];
  longlong local_28;
  
  FUN_143b23070(param_6,param_5);
  if (param_4 == '\0') {
    FUN_143b21040(local_30,*(undefined8 *)(param_1 + 0x20),param_2,param_3);
    uVar2 = FUN_143ac2640(local_30);
    cVar1 = FUN_143b1ee70(param_1,uVar2);
    local_38 = cVar1;
    local_37 = cVar1;
    while (local_38 != '\0') {
      local_37 = local_38;
      FUN_143ac2640(local_30);
      local_38 = FUN_143b1ee70(param_1);
    }
    local_res18 = param_3;
    if (param_3 == 0) {
      local_res18 = FUN_143ab45e0(local_28,0);
    }
    cVar1 = FUN_143b21650(param_6,param_2,local_28 - param_2 >> 1 & 0xffffffff,cVar1,local_37,
                          param_7);
    if (cVar1 != '\0') {
      FUN_143b21c50(param_6,local_28,local_res18,param_7);
    }
  }
  else {
    FUN_143b23430(param_1,param_2,param_3,param_6,param_7);
  }
  return;
}



// FUNCTION 143b23a60 FUN_143b23a60 body=494 status=ok
// SIG undefined FUN_143b23a60(void)

undefined8
FUN_143b23a60(longlong param_1,ushort *param_2,ushort *param_3,undefined8 param_4,undefined8 param_5
             )

{
  char cVar1;
  ushort *puVar2;
  ushort *local_res10;
  undefined2 local_18;
  uint local_10;
  int local_c;
  
  local_res10 = param_2;
  do {
    if (param_3 <= local_res10) {
      return 1;
    }
    local_10 = (uint)*local_res10;
    puVar2 = local_res10 + 1;
    if ((local_10 & 0xfffffc00) == 0xd800) {
      if ((puVar2 == param_3) || ((*puVar2 & 0xfc00) != 0xdc00)) {
        local_18 = *(undefined2 *)
                    (**(longlong **)(param_1 + 0x20) +
                    (longlong)
                    (int)((local_10 & 0x1f) +
                         (uint)*(ushort *)
                                (**(longlong **)(param_1 + 0x20) +
                                (longlong)(((int)local_10 >> 5) + 0x140) * 2) * 4) * 2);
        local_res10 = puVar2;
      }
      else {
        local_res10 = local_res10 + 2;
        local_10 = local_10 * 0x400 + -0x35fdc00 + (uint)*puVar2;
        if ((int)local_10 < *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) {
          local_c = (local_10 & 0x1f) +
                    (uint)*(ushort *)
                           (**(longlong **)(param_1 + 0x20) +
                           (longlong)
                           (int)((uint)*(ushort *)
                                        (**(longlong **)(param_1 + 0x20) +
                                        (longlong)(((int)local_10 >> 0xb) + 0x820) * 2) +
                                ((int)local_10 >> 5 & 0x3fU)) * 2) * 4;
        }
        else {
          local_c = *(int *)(*(longlong *)(param_1 + 0x20) + 0x30);
        }
        local_18 = *(undefined2 *)(**(longlong **)(param_1 + 0x20) + (longlong)local_c * 2);
      }
    }
    else {
      local_18 = *(undefined2 *)
                  (**(longlong **)(param_1 + 0x20) +
                  (longlong)
                  (int)((local_10 & 0x1f) +
                       (uint)*(ushort *)
                              (**(longlong **)(param_1 + 0x20) + (longlong)((int)local_10 >> 5) * 2)
                       * 4) * 2);
      local_res10 = puVar2;
    }
    cVar1 = FUN_143b23180(param_1,local_10,local_18,param_4,param_5);
  } while (cVar1 != '\0');
  return 0;
}



// FUNCTION 143b23c50 FUN_143b23c50 body=77 status=ok
// SIG undefined FUN_143b23c50(void)

void FUN_143b23c50(longlong param_1,undefined4 *param_2)

{
  FUN_143b1e530(param_1 + 0x1c0,FUN_143b27420,param_1,param_2);
  FUN_143a8b110(*param_2);
  return;
}



// FUNCTION 143b23ca0 FUN_143b23ca0 body=122 status=ok
// SIG undefined FUN_143b23ca0(void)

undefined1 FUN_143b23ca0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = *(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x10) >> 1;
  if (((int)uVar2 == (int)(param_3 - param_2 >> 1)) &&
     (iVar1 = FUN_143ab3c20(*(undefined8 *)(param_1 + 0x10),param_2,uVar2 & 0xffffffff), iVar1 == 0)
     ) {
    return 1;
  }
  return 0;
}



// FUNCTION 143b23d20 FUN_143b23d20 body=100 status=ok
// SIG undefined FUN_143b23d20(void)

undefined8 FUN_143b23d20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined4 local_18;
  
  FUN_143b21040(local_30,*(undefined8 *)(param_1 + 0x20),param_2,param_3);
  do {
    uVar2 = FUN_143ac2640(local_30);
    cVar1 = FUN_143b24b10(param_1,local_18,uVar2);
  } while (cVar1 == '\0');
  return local_28;
}



// FUNCTION 143b23d90 FUN_143b23d90 body=90 status=ok
// SIG undefined FUN_143b23d90(void)

ulonglong FUN_143b23d90(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ushort uVar2;
  ulonglong local_res10;
  ulonglong local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  do {
    uVar1 = local_res10;
    if (local_res18 <= local_res10) {
      return local_res10;
    }
    uVar2 = FUN_143b26430(param_1,&local_res10,local_res18);
  } while (0xff < uVar2);
  return uVar1;
}



// FUNCTION 143b23df0 FUN_143b23df0 body=100 status=ok
// SIG undefined FUN_143b23df0(void)

undefined8 FUN_143b23df0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined4 local_18;
  
  FUN_143b20fa0(local_30,*(undefined8 *)(param_1 + 0x20),param_2,param_3);
  do {
    uVar2 = FUN_143ac2860(local_30);
    cVar1 = FUN_143b24b10(param_1,local_18,uVar2);
  } while (cVar1 == '\0');
  return local_28;
}



// FUNCTION 143b23e60 FUN_143b23e60 body=73 status=ok
// SIG undefined FUN_143b23e60(void)

ulonglong FUN_143b23e60(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ushort uVar1;
  ulonglong local_res18 [2];
  
  local_res18[0] = param_3;
  do {
    if (local_res18[0] <= param_2) {
      return local_res18[0];
    }
    uVar1 = FUN_143b26630(param_1,param_2,local_res18);
  } while (0xff < uVar1);
  return local_res18[0];
}



// FUNCTION 143b23eb0 FUN_143b23eb0 body=47 status=ok
// SIG undefined FUN_143b23eb0(void)

undefined1 FUN_143b23eb0(ushort param_1)

{
  undefined1 local_res8;
  
  if (param_1 < 0xfe00) {
    local_res8 = 0;
  }
  else {
    local_res8 = (undefined1)param_1;
  }
  return local_res8;
}



// FUNCTION 143b23ee0 FUN_143b23ee0 body=46 status=ok
// SIG undefined FUN_143b23ee0(void)

void FUN_143b23ee0(longlong param_1,undefined4 param_2)

{
  FUN_143acf270(*(longlong *)(param_1 + 0x1c8) + 8,param_2);
  return;
}



// FUNCTION 143b23f10 FUN_143b23f10 body=319 status=ok
// SIG undefined FUN_143b23f10(void)

undefined8 FUN_143b23f10(undefined8 param_1,int param_2,longlong *param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_143b24050(param_1,param_2);
  if ((uVar2 & 0x7fffffff) == 0) {
    uVar5 = 0;
  }
  else {
    (**(code **)(*param_3 + 0xb0))(param_3);
    uVar3 = uVar2 & 0x1fffff;
    if ((uVar2 & 0x200000) == 0) {
      if (uVar3 != 0) {
        FUN_143b13590(param_3,uVar3);
      }
    }
    else {
      uVar5 = FUN_143b23ee0(param_1,uVar3);
      (**(code **)(*param_3 + 0x70))(param_3,uVar5);
    }
    if ((uVar2 & 0x40000000) != 0) {
      sVar1 = FUN_143b109f0(param_1,param_2);
      if (sVar1 == 1) {
        iVar4 = (param_2 + -0x1100) * 0x24c;
        (**(code **)(*param_3 + 0x68))(param_3,iVar4 + 0xac00,iVar4 + 0xae4b);
      }
      else {
        uVar5 = FUN_143b24080(param_1,sVar1);
        FUN_143b21220(param_1,uVar5,param_3);
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 143b24050 FUN_143b24050 body=42 status=ok
// SIG undefined FUN_143b24050(void)

void FUN_143b24050(longlong param_1,undefined4 param_2)

{
  FUN_143ac2bb0(**(undefined8 **)(param_1 + 0x1c8),param_2);
  return;
}



// FUNCTION 143b24080 FUN_143b24080 body=88 status=ok
// SIG undefined FUN_143b24080(void)

undefined8 FUN_143b24080(undefined8 param_1,undefined2 param_2)

{
  char cVar1;
  undefined8 local_18;
  
  cVar1 = FUN_143b1f9b0(param_1,param_2);
  if (cVar1 == '\0') {
    local_18 = FUN_143b240e0(param_1,param_2);
  }
  else {
    local_18 = FUN_143b24120(param_1,param_2);
  }
  return local_18;
}



// FUNCTION 143b240e0 FUN_143b240e0 body=62 status=ok
// SIG undefined FUN_143b240e0(void)

ushort * FUN_143b240e0(longlong param_1,ushort param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)(*(longlong *)(param_1 + 0x30) + (ulonglong)param_2 * 2);
  return puVar1 + (longlong)(int)(*puVar1 & 0x1f) + 1;
}



// FUNCTION 143b24120 FUN_143b24120 body=107 status=ok
// SIG undefined FUN_143b24120(void)

longlong FUN_143b24120(longlong param_1,ushort param_2)

{
  longlong lVar1;
  
  if ((param_2 == 0) || (0xfdff < param_2)) {
    lVar1 = 0;
  }
  else if (param_2 < *(ushort *)(param_1 + 0x1c)) {
    lVar1 = *(longlong *)(param_1 + 0x30) + (ulonglong)param_2 * 2;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x28) + (ulonglong)param_2 * 2 +
            (ulonglong)*(ushort *)(param_1 + 0x1c) * -2;
  }
  return lVar1;
}



// FUNCTION 143b24190 FUN_143b24190 body=424 status=ok
// SIG undefined FUN_143b24190(void)

ushort * FUN_143b24190(longlong param_1,uint param_2,ushort *param_3,uint *param_4)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  ushort *puVar4;
  uint local_res10;
  ushort *local_20;
  
  local_20 = (ushort *)0x0;
  local_res10 = param_2;
  while( true ) {
    if ((int)local_res10 < *(int *)(param_1 + 0xc)) {
      return local_20;
    }
    uVar2 = FUN_143b109f0(param_1,local_res10);
    cVar1 = FUN_143b1f9b0(param_1,uVar2);
    if (cVar1 != '\0') {
      return local_20;
    }
    cVar1 = FUN_143b25250(param_1,uVar2);
    if (cVar1 != '\0') {
      uVar3 = FUN_143b230c0(local_res10,param_3);
      *param_4 = uVar3;
      return param_3;
    }
    cVar1 = FUN_143b251e0(param_1,uVar2);
    if (cVar1 == '\0') break;
    local_res10 = FUN_143b26400(param_1,local_res10,uVar2);
    *param_4 = 0;
    local_20 = param_3;
    if (local_res10 < 0x10000) {
      param_3[(int)*param_4] = (ushort)local_res10;
      *param_4 = *param_4 + 1;
    }
    else {
      param_3[(int)*param_4] = (short)((int)local_res10 >> 10) + 0xd7c0;
      *param_4 = *param_4 + 1;
      param_3[(int)*param_4] = (ushort)local_res10 & 0x3ff | 0xdc00;
      *param_4 = *param_4 + 1;
    }
  }
  puVar4 = (ushort *)FUN_143b1f1a0(param_1,uVar2);
  *param_4 = *puVar4 & 0x1f;
  return puVar4 + 1;
}



// FUNCTION 143b24350 FUN_143b24350 body=301 status=ok
// SIG undefined FUN_143b24350(void)

ushort FUN_143b24350(longlong param_1,undefined4 param_2)

{
  char cVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined4 local_res10;
  ushort local_18;
  
  local_res10 = param_2;
  while( true ) {
    uVar2 = FUN_143b109f0(param_1,local_res10);
    if (uVar2 <= *(ushort *)(param_1 + 0x14)) {
      return 0;
    }
    if (0xfdff < uVar2) {
      return uVar2 & 0xff | uVar2 << 8;
    }
    if (*(ushort *)(param_1 + 0x1c) <= uVar2) {
      return 0;
    }
    cVar1 = FUN_143b251e0(param_1,uVar2);
    if (cVar1 == '\0') break;
    local_res10 = FUN_143b26400(param_1,local_res10,uVar2);
  }
  puVar3 = (ushort *)FUN_143b1f1a0(param_1,uVar2);
  uVar2 = *puVar3;
  if ((uVar2 & 0x1f) == 0) {
    return 0x1ff;
  }
  local_18 = uVar2 >> 8;
  if ((uVar2 & 0x80) != 0) {
    local_18 = local_18 | puVar3[-1] & 0xff00;
  }
  return local_18;
}



// FUNCTION 143b24490 FUN_143b24490 body=15 status=ok
// SIG undefined FUN_143b24490(void)

undefined1 FUN_143b24490(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x2c);
}



// FUNCTION 143b244a0 GetBoundProgramCounterForTimerManager body=15 status=ok
// SIG undefined GetBoundProgramCounterForTimerManager(void)

undefined8
TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 143b244b0 FUN_143b244b0 body=207 status=ok
// SIG undefined FUN_143b244b0(void)

void FUN_143b244b0(int param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  
  iVar2 = (param_1 + -0xac00) % 0x1c;
  if (iVar2 == 0) {
    iVar2 = (param_1 + -0xac00) / 0x1c;
    *param_2 = (short)(iVar2 / 0x15) + 0x1100;
    param_2[1] = (short)((longlong)iVar2 % 0x15) + 0x1161;
  }
  else {
    sVar1 = (short)iVar2;
    *param_2 = (short)param_1 - sVar1;
    param_2[1] = sVar1 + 0x11a7;
  }
  return;
}



// FUNCTION 143b24580 FUN_143b24580 body=625 status=ok
// SIG undefined FUN_143b24580(void)

ushort * FUN_143b24580(longlong param_1,int param_2,ushort *param_3,uint *param_4)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  ushort *puVar6;
  ushort local_res10;
  
  if (*(int *)(param_1 + 0xc) <= param_2) {
    uVar4 = FUN_143b109f0(param_1,param_2);
    cVar3 = FUN_143b1f9b0(param_1,uVar4);
    if (cVar3 == '\0') {
      cVar3 = FUN_143b25250(param_1,uVar4);
      if (cVar3 != '\0') {
        FUN_143b244b0(param_2,param_3);
        *param_4 = 2;
        return param_3;
      }
      cVar3 = FUN_143b251e0(param_1,uVar4);
      if (cVar3 != '\0') {
        uVar5 = FUN_143b26400(param_1,param_2,uVar4);
        *param_4 = 0;
        local_res10 = (ushort)uVar5;
        if (uVar5 < 0x10000) {
          param_3[(int)*param_4] = local_res10;
          *param_4 = *param_4 + 1;
          return param_3;
        }
        param_3[(int)*param_4] = (short)((int)uVar5 >> 10) + 0xd7c0;
        *param_4 = *param_4 + 1;
        param_3[(int)*param_4] = local_res10 & 0x3ff | 0xdc00;
        *param_4 = *param_4 + 1;
        return param_3;
      }
      puVar6 = (ushort *)FUN_143b1f1a0(param_1,uVar4);
      uVar1 = *puVar6;
      uVar5 = uVar1 & 0x1f;
      if ((uVar1 & 0x40) == 0) {
        *param_4 = uVar5;
        return puVar6 + 1;
      }
      uVar2 = puVar6[-1 - (longlong)(int)((int)(uint)uVar1 >> 7 & 1)];
      if (uVar2 < 0x20) {
        *param_4 = (uint)uVar2;
        return puVar6 + (-1 - (longlong)(int)((int)(uint)uVar1 >> 7 & 1)) + -(ulonglong)uVar2;
      }
      *param_3 = uVar2;
      FUN_143ab3ca0(param_3 + 1,puVar6 + 3,uVar5 - 2);
      *param_4 = uVar5 - 1;
      return param_3;
    }
  }
  return (ushort *)0x0;
}



// FUNCTION 143b24810 GetBoundProgramCounterForTimerManager body=15 status=ok
// SIG undefined GetBoundProgramCounterForTimerManager(void)

undefined8
TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
::GetBoundProgramCounterForTimerManager(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 143b24820 FUN_143b24820 body=166 status=ok
// SIG undefined FUN_143b24820(void)

int FUN_143b24820(longlong param_1,ushort *param_2,longlong param_3)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint local_14;
  
  if (param_2 == (ushort *)(param_3 + -2)) {
    local_14 = (uint)*param_2;
  }
  else {
    local_14 = (uint)*param_2 * 0x400 + -0x35fdc00 + (uint)param_2[1];
  }
  uVar1 = FUN_143b109f0(param_1,local_14);
  if (*(ushort *)(param_1 + 0x14) < uVar1) {
    puVar3 = (ushort *)FUN_143b1f1a0(param_1,uVar1);
    iVar2 = (int)(uint)*puVar3 >> 8;
  }
  else {
    iVar2 = (uint)(byte)(uVar1 >> 8) << 8;
  }
  return iVar2;
}



// FUNCTION 143b248d0 FUN_143b248d0 body=195 status=ok
// SIG undefined FUN_143b248d0(void)

void FUN_143b248d0(undefined8 *param_1,int param_2,int param_3,undefined2 param_4)

{
  char cVar1;
  ushort uVar2;
  int local_res10;
  
  cVar1 = FUN_143b25110(*param_1,param_4);
  local_res10 = param_2;
  if (cVar1 == '\0') {
    uVar2 = FUN_143b1f030(*param_1,param_2);
    if (0xff < uVar2) {
      (**(code **)(*(longlong *)param_1[1] + 0x68))(param_1[1],param_2,param_3);
    }
  }
  else {
    do {
      uVar2 = FUN_143b1f030(*param_1,local_res10);
      if (0xff < uVar2) {
        FUN_143b13590(param_1[1],local_res10);
      }
      local_res10 = local_res10 + 1;
    } while (local_res10 <= param_3);
  }
  return;
}



// FUNCTION 143b249a0 FUN_143b249a0 body=348 status=ok
// SIG undefined FUN_143b249a0(void)

ulonglong FUN_143b249a0(longlong param_1,undefined4 param_2,char param_3,char param_4)

{
  char cVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined4 local_res10;
  byte local_28;
  byte local_27;
  ushort local_20;
  
  local_res10 = param_2;
  while( true ) {
    uVar2 = FUN_143b109f0(param_1,local_res10);
    cVar1 = FUN_143b252e0(uVar2);
    if (cVar1 != '\0') {
      return CONCAT71((uint7)(uint3)(cVar1 >> 7),1);
    }
    if (uVar2 <= *(ushort *)(param_1 + 0x14)) break;
    if (param_4 == '\0') {
      local_20 = *(ushort *)(param_1 + 0x1c);
    }
    else {
      local_20 = *(ushort *)(param_1 + 0x18);
    }
    if (local_20 <= uVar2) {
      return (ulonglong)(byte)(uVar2 >> 8) << 8;
    }
    cVar1 = FUN_143b251e0(param_1,uVar2);
    if (cVar1 == '\0') {
      puVar3 = (ushort *)FUN_143b1f1a0(param_1,uVar2);
      if (((*puVar3 & 0x20) == 0) && ((param_3 == '\0' || (*puVar3 < 0x200)))) {
        local_27 = 1;
      }
      else {
        local_27 = 0;
      }
      return (ulonglong)local_27;
    }
    local_res10 = FUN_143b26400(param_1,local_res10,uVar2);
  }
  cVar1 = FUN_143b25250(param_1,uVar2);
  if (cVar1 != '\0') {
    cVar1 = FUN_143b25290((undefined2)local_res10);
    if (cVar1 == '\0') {
      local_28 = 1;
      goto LAB_143b24a2c;
    }
  }
  local_28 = 0;
LAB_143b24a2c:
  return (ulonglong)local_28;
}



// FUNCTION 143b24b10 FUN_143b24b10 body=371 status=ok
// SIG undefined FUN_143b24b10(void)

longlong FUN_143b24b10(undefined8 param_1,undefined4 param_2,undefined2 param_3)

{
  char cVar1;
  undefined2 uVar2;
  ushort *puVar3;
  longlong lVar4;
  undefined4 local_res10;
  undefined2 local_res18;
  uint local_20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  while( true ) {
    cVar1 = FUN_143b251a0(param_1,local_res18);
    if (cVar1 != '\0') {
      return CONCAT71((uint7)(uint3)(cVar1 >> 7),1);
    }
    cVar1 = FUN_143b253b0(param_1,local_res18);
    if (cVar1 != '\0') {
      return (ulonglong)(uint3)(cVar1 >> 7) << 8;
    }
    cVar1 = FUN_143b251e0(param_1,local_res18);
    if (cVar1 == '\0') break;
    local_res10 = FUN_143b26400(param_1,local_res10,local_res18);
    local_res18 = FUN_143b109f0(param_1,local_res10);
  }
  puVar3 = (ushort *)FUN_143b1f1a0(param_1,local_res18);
  if ((*puVar3 & 0x1f) == 0) {
    return 0;
  }
  if (((*puVar3 & 0x80) != 0) && ((puVar3[-1] & 0xff00) != 0)) {
    return (ulonglong)(byte)(puVar3[-1] >> 8) << 8;
  }
  local_20 = (uint)puVar3[1];
  if ((local_20 & 0xfffffc00) == 0xd800) {
    local_20 = local_20 * 0x400 + -0x35fdc00 + (uint)puVar3[2];
  }
  uVar2 = FUN_143b109f0(param_1,local_20);
  lVar4 = FUN_143b251a0(param_1,uVar2);
  return lVar4;
}



// FUNCTION 143b24c90 FUN_143b24c90 body=330 status=ok
// SIG undefined FUN_143b24c90(void)

ulonglong FUN_143b24c90(longlong param_1,int param_2,char param_3)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  int local_res10;
  byte local_28;
  
  local_res10 = param_2;
  while( true ) {
    if (local_res10 < *(int *)(param_1 + 0xc)) {
      return CONCAT71((uint7)(uint3)((uint)*(int *)(param_1 + 0xc) >> 8),1);
    }
    uVar3 = FUN_143b109f0(param_1,local_res10);
    cVar2 = FUN_143b25250(param_1,uVar3);
    iVar4 = (int)cVar2;
    if (iVar4 != 0) break;
    cVar2 = FUN_143b1fa00(param_1,uVar3);
    iVar4 = (int)cVar2;
    if (iVar4 != 0) break;
    if (0xfe00 < uVar3) {
      return (ulonglong)(byte)(uVar3 >> 8) << 8;
    }
    cVar2 = FUN_143b251e0(param_1,uVar3);
    if (cVar2 == '\0') {
      puVar5 = (ushort *)FUN_143b1f1a0(param_1,uVar3);
      uVar3 = *puVar5;
      if ((uVar3 & 0x1f) == 0) {
        return 0;
      }
      if (param_3 == '\0') {
        bVar1 = (byte)(uVar3 >> 8);
        if (0x1ff < uVar3) {
          return (ulonglong)bVar1 << 8;
        }
        if (uVar3 < 0x100) {
          return CONCAT71((uint7)bVar1,1);
        }
      }
      if (((uVar3 & 0x80) == 0) || ((puVar5[-1] & 0xff00) == 0)) {
        local_28 = 1;
      }
      else {
        local_28 = 0;
      }
      return (ulonglong)local_28;
    }
    local_res10 = FUN_143b26400(param_1,local_res10,uVar3);
  }
  return CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1);
}



// FUNCTION 143b24df0 FUN_143b24df0 body=282 status=ok
// SIG undefined FUN_143b24df0(void)

undefined8 FUN_143b24df0(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar3 = FUN_143a904f0(*(undefined8 *)(param_1 + 8));
  uVar5 = FUN_143a8fd90(*(undefined8 *)(param_1 + 8),param_2);
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *param_3 = 7;
    uVar5 = 0;
  }
  else {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 2;
    iVar4 = FUN_143a8fe60(*(undefined8 *)(param_1 + 8));
    *(int *)(param_1 + 0x28) = iVar4 - iVar3;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == *(longlong *)(param_1 + 0x20)) {
      *(undefined1 *)(param_1 + 0x2c) = 0;
    }
    else {
      FUN_143b270d0(param_1);
      uVar1 = FUN_143b26520(param_1);
      *(undefined1 *)(param_1 + 0x2c) = uVar1;
      bVar2 = *(byte *)(param_1 + 0x2c);
      while (1 < bVar2) {
        bVar2 = FUN_143b26520(param_1);
      }
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x38);
    }
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 143b24f10 FUN_143b24f10 body=256 status=ok
// SIG undefined FUN_143b24f10(void)

void FUN_143b24f10(longlong param_1,uint param_2,byte param_3)

{
  byte bVar1;
  int local_28;
  undefined2 *local_20;
  undefined2 *local_18;
  
  FUN_143b270d0(param_1);
  FUN_143b27170(param_1);
  do {
    bVar1 = FUN_143b26520(param_1);
  } while (param_3 < bVar1);
  local_20 = *(undefined2 **)(param_1 + 0x20);
  if (param_2 < 0x10000) {
    local_28 = 1;
  }
  else {
    local_28 = 2;
  }
  local_18 = (undefined2 *)(*(longlong *)(param_1 + 0x20) + (longlong)local_28 * 2);
  *(undefined2 **)(param_1 + 0x20) = local_18;
  do {
    local_20 = local_20 + -1;
    local_18 = local_18 + -1;
    *local_18 = *local_20;
  } while (*(undefined2 **)(param_1 + 0x38) != local_20);
  FUN_143b27210(local_20,param_2);
  if (param_3 < 2) {
    *(undefined2 **)(param_1 + 0x18) = local_18;
  }
  return;
}



// FUNCTION 143b25010 FUN_143b25010 body=252 status=ok
// SIG undefined FUN_143b25010(void)

undefined8 FUN_143b25010(longlong param_1,undefined8 param_2,undefined8 param_3,ushort *param_4)

{
  undefined8 uVar1;
  
  if (((((*param_4 < 0x14) || ((char)param_4[2] != '\0')) ||
       (*(char *)((longlong)param_4 + 5) != '\0')) ||
      (((char)param_4[4] != 'N' || (*(char *)((longlong)param_4 + 9) != 'r')))) ||
     (((char)param_4[5] != 'm' ||
      ((*(char *)((longlong)param_4 + 0xb) != '2' || ((char)param_4[6] != '\x02')))))) {
    uVar1 = 0;
  }
  else {
    _guard_xfg_dispatch_icall_nop((void *)(param_1 + 8),param_4 + 8,4);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143b25110 FUN_143b25110 body=69 status=ok
// SIG undefined FUN_143b25110(void)

undefined1 FUN_143b25110(longlong param_1,ushort param_2)

{
  undefined1 local_18;
  
  if ((param_2 < *(ushort *)(param_1 + 0x1a)) || (*(ushort *)(param_1 + 0x1c) <= param_2)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143b25160 FUN_143b25160 body=53 status=ok
// SIG undefined FUN_143b25160(void)

bool FUN_143b25160(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_143b24050(param_1,param_2);
  return -1 < iVar1;
}



// FUNCTION 143b251a0 FUN_143b251a0 body=51 status=ok
// SIG undefined FUN_143b251a0(void)

bool FUN_143b251a0(longlong param_1,ushort param_2)

{
  return param_2 < *(ushort *)(param_1 + 0x18);
}



// FUNCTION 143b251e0 FUN_143b251e0 body=51 status=ok
// SIG undefined FUN_143b251e0(void)

bool FUN_143b251e0(longlong param_1,ushort param_2)

{
  return *(ushort *)(param_1 + 0x1a) <= param_2;
}



// FUNCTION 143b25220 FUN_143b25220 body=48 status=ok
// SIG undefined FUN_143b25220(void)

bool FUN_143b25220(longlong param_1)

{
  return *(longlong *)(param_1 + 0x10) == *(longlong *)(param_1 + 0x20);
}



// FUNCTION 143b25250 FUN_143b25250 body=51 status=ok
// SIG undefined FUN_143b25250(void)

bool FUN_143b25250(longlong param_1,short param_2)

{
  return param_2 == *(short *)(param_1 + 0x14);
}



// FUNCTION 143b25290 FUN_143b25290 body=74 status=ok
// SIG undefined FUN_143b25290(void)

undefined1 FUN_143b25290(short param_1)

{
  undefined1 local_18;
  
  if (((ushort)(param_1 + 0x5400U) < 0x2ba4) && ((uint)(ushort)(param_1 + 0x5400U) % 0x1c == 0)) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143b252e0 FUN_143b252e0 body=37 status=ok
// SIG undefined FUN_143b252e0(void)

bool FUN_143b252e0(short param_1)

{
  return param_1 == 0;
}



// FUNCTION 143b25310 FUN_143b25310 body=38 status=ok
// SIG undefined FUN_143b25310(void)

bool FUN_143b25310(short param_1)

{
  return param_1 == 1;
}



// FUNCTION 143b25340 FUN_143b25340 body=40 status=ok
// SIG undefined FUN_143b25340(void)

bool FUN_143b25340(short param_1)

{
  return param_1 == -0x100;
}



// FUNCTION 143b25370 FUN_143b25370 body=63 status=ok
// SIG undefined FUN_143b25370(void)

undefined1 FUN_143b25370(longlong param_1,ushort param_2)

{
  undefined1 local_18;
  
  if ((param_2 < *(ushort *)(param_1 + 0x1c)) || (0xff00 < param_2)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143b253b0 FUN_143b253b0 body=51 status=ok
// SIG undefined FUN_143b253b0(void)

bool FUN_143b253b0(longlong param_1,ushort param_2)

{
  return *(ushort *)(param_1 + 0x1c) <= param_2;
}



// FUNCTION 143b253f0 FUN_143b253f0 body=75 status=ok
// SIG undefined FUN_143b253f0(void)

undefined1 FUN_143b253f0(longlong param_1,ushort param_2)

{
  undefined1 local_18;
  
  if (((param_2 < *(ushort *)(param_1 + 0x14)) || (param_2 == 0xfe00)) || (param_2 == 0xff00)) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143b25440 FUN_143b25440 body=30 status=ok
// SIG undefined FUN_143b25440(void)

longlong FUN_143b25440(longlong param_1)

{
  return *(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x10) >> 1;
}



// FUNCTION 143b25460 FUN_143b25460 body=897 status=ok
// SIG undefined FUN_143b25460(void)

void FUN_143b25460(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  int *piVar6;
  byte local_38;
  ushort local_34;
  int local_28;
  
  cVar3 = FUN_143a8b0e0(*param_4);
  if (cVar3 == '\0') {
    uVar5 = FUN_143ac5410(param_2,&DAT_145d0bbe0,param_3,FUN_143b25010,param_1,param_4);
    *param_1 = uVar5;
    cVar3 = FUN_143a8b0e0(*param_4);
    if (cVar3 == '\0') {
      piVar6 = (int *)FUN_143ac5780(*param_1);
      if ((int)(*piVar6 + (*piVar6 >> 0x1f & 3U)) >> 2 < 0xe) {
        *param_4 = 3;
      }
      else {
        *(int *)((longlong)param_1 + 0xc) = piVar6[8];
        *(int *)(param_1 + 2) = piVar6[9];
        *(short *)((longlong)param_1 + 0x14) = (short)piVar6[10];
        *(short *)((longlong)param_1 + 0x16) = (short)piVar6[0xe];
        *(short *)(param_1 + 3) = (short)piVar6[0xb];
        *(short *)((longlong)param_1 + 0x1a) = (short)piVar6[0xc];
        *(short *)((longlong)param_1 + 0x1c) = (short)piVar6[0xd];
        iVar1 = piVar6[1];
        uVar5 = FUN_143ac2ea0(0,(longlong)piVar6 + (longlong)*piVar6,iVar1 - *piVar6,0,param_4);
        param_1[4] = uVar5;
        cVar3 = FUN_143a8b0e0(*param_4);
        if (cVar3 == '\0') {
          iVar2 = piVar6[2];
          param_1[5] = (longlong)piVar6 + (longlong)iVar1;
          param_1[6] = param_1[5] +
                       (longlong)(int)(0xfe00 - (uint)*(ushort *)((longlong)param_1 + 0x1c)) * 2;
          param_1[7] = (longlong)piVar6 + (longlong)iVar2;
          local_38 = 0;
          local_34 = 0;
          while (local_34 < 0x180) {
            if ((local_34 & 0xff) == 0) {
              local_38 = *(byte *)(param_1[7] + (longlong)((int)(uint)local_34 >> 8));
            }
            if ((local_38 & 1) == 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)param_1 + (ulonglong)local_34 + 0x40),0,0x20);
              local_34 = local_34 + 0x20;
            }
            else {
              for (local_28 = 0; local_28 < 0x20; local_28 = local_28 + 1) {
                uVar4 = FUN_143b24350(param_1,local_34);
                *(undefined1 *)((longlong)param_1 + (ulonglong)local_34 + 0x40) = uVar4;
                local_34 = local_34 + 1;
              }
            }
            local_38 = local_38 >> 1;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 143b257f0 FUN_143b257f0 body=913 status=ok
// SIG undefined FUN_143b257f0(void)

void FUN_143b257f0(longlong param_1,int param_2,int param_3,ushort param_4,undefined8 *param_5,
                  undefined8 param_6)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  int local_28;
  
  if ((param_4 != 0) &&
     ((local_28 = param_2, param_4 < *(ushort *)(param_1 + 0x14) ||
      (*(ushort *)(param_1 + 0x18) <= param_4)))) {
    for (; local_28 <= param_3; local_28 = local_28 + 1) {
      uVar3 = FUN_143ac2bb0(*param_5,local_28);
      if (param_4 < *(ushort *)(param_1 + 0x1c)) {
        if (param_4 < *(ushort *)(param_1 + 0x14)) {
          local_2c = uVar3 | 0x40000000;
        }
        else {
          local_34 = local_28;
          local_38 = param_4;
          while ((*(ushort *)(param_1 + 0x1a) <= local_38 &&
                 (local_38 < *(ushort *)(param_1 + 0x1c)))) {
            local_34 = FUN_143b26400(param_1,local_34,local_38);
            local_38 = FUN_143b109f0(param_1,local_34);
          }
          local_2c = uVar3;
          if ((local_38 < *(ushort *)(param_1 + 0x14)) || (*(ushort *)(param_1 + 0x1a) <= local_38))
          {
            FUN_143b21430(param_5,local_28,local_34,param_6);
          }
          else {
            puVar5 = (ushort *)FUN_143b1f1a0(param_1,local_38);
            uVar1 = *puVar5;
            if ((((uVar1 & 0x80) != 0) && (local_28 == local_34)) && ((puVar5[-1] & 0xff) != 0)) {
              local_2c = uVar3 | 0x80000000;
            }
            if ((uVar1 & 0x1f) != 0) {
              puVar6 = puVar5 + 1;
              local_34 = (uint)*puVar6;
              local_30 = 1;
              if ((local_34 & 0xfffffc00) == 0xd800) {
                local_34 = local_34 * 0x400 + -0x35fdc00 + (uint)puVar5[2];
                local_30 = 2;
              }
              FUN_143b21430(param_5,local_28,local_34,param_6);
              if (*(ushort *)(param_1 + 0x18) <= local_38) {
                while (local_30 < (int)(uVar1 & 0x1f)) {
                  local_34 = (uint)puVar6[local_30];
                  iVar2 = local_30 + 1;
                  if ((local_34 & 0xfffffc00) == 0xd800) {
                    local_34 = local_34 * 0x400 + -0x35fdc00 + (uint)puVar6[local_30 + 1];
                    iVar2 = local_30 + 2;
                  }
                  local_30 = iVar2;
                  uVar4 = FUN_143ac2bb0(*param_5,local_34);
                  if ((uVar4 & 0x80000000) == 0) {
                    FUN_143b340b0(*param_5,local_34,uVar4 | 0x80000000,param_6);
                  }
                }
              }
            }
          }
        }
      }
      else {
        local_2c = uVar3 | 0x80000000;
        if (param_4 < 0xfe00) {
          local_2c = uVar3 | 0xc0000000;
        }
      }
      if (local_2c != uVar3) {
        FUN_143b340b0(*param_5,local_28,local_2c,param_6);
      }
    }
  }
  return;
}



// FUNCTION 143b25b90 FUN_143b25b90 body=1523 status=ok
// SIG undefined FUN_143b25b90(void)

ushort * FUN_143b25b90(longlong param_1,ushort *param_2,ushort *param_3,longlong param_4,
                      undefined4 *param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  char cVar3;
  ushort uVar4;
  ushort *local_res10;
  ushort *local_res18;
  uint local_48;
  uint local_44;
  ushort local_40;
  ushort *local_38;
  ushort *local_30;
  ushort *local_20;
  int local_18;
  int local_14;
  uint local_10;
  
  local_48 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_38 = param_2;
  if (param_3 == (ushort *)0x0) {
    local_res10 = (ushort *)FUN_143b22fc0(param_1,param_2,0x300,param_4,param_5);
    cVar3 = FUN_143a8b0e0(*param_5);
    if (cVar3 != '\0') {
      return local_res10;
    }
    if (param_2 < local_res10) {
      uVar4 = FUN_143b1f030(param_1,local_res10[-1]);
      local_48 = (uint)uVar4;
      local_38 = local_res10;
      if (1 < local_48) {
        local_38 = local_res10 + -1;
      }
    }
    local_res18 = (ushort *)FUN_143ab45e0(local_res10,0);
  }
  local_44 = 0;
  local_40 = 0;
  do {
    puVar2 = local_res10;
    local_20 = local_res10;
    while (local_res10 != local_res18) {
      uVar4 = *local_res10;
      local_44 = (uint)uVar4;
      if (local_44 < 0x300) {
        local_48 = ~local_44;
        local_res10 = local_res10 + 1;
      }
      else {
        cVar3 = FUN_143b205d0(param_1,local_44);
        if (cVar3 == '\0') {
          local_48 = 0;
          local_res10 = local_res10 + 1;
        }
        else {
          if ((local_44 & 0xfffff800) == 0xd800) {
            if ((uVar4 & 0x400) == 0) {
              if ((local_res10 + 1 != local_res18) && ((local_res10[1] & 0xfc00) == 0xdc00)) {
                local_44 = local_44 * 0x400 + -0x35fdc00 + (uint)local_res10[1];
              }
            }
            else if ((puVar2 < local_res10) &&
                    (puVar1 = local_res10 + -1, (*puVar1 & 0xfc00) == 0xd800)) {
              local_res10 = local_res10 + -1;
              local_44 = (uint)*puVar1 * 0x400 + -0x35fdc00 + local_44;
            }
          }
          local_40 = FUN_143b24350(param_1,local_44);
          if (0xff < local_40) break;
          local_48 = (uint)local_40;
          if (local_44 < 0x10000) {
            local_18 = 1;
          }
          else {
            local_18 = 2;
          }
          local_res10 = local_res10 + local_18;
        }
      }
    }
    if (local_res10 == puVar2) {
      if (local_res10 == local_res18) {
        return local_res10;
      }
    }
    else {
      if ((param_4 != 0) &&
         (cVar3 = FUN_143b21c50(param_4,puVar2,local_res10,param_5), cVar3 == '\0')) {
        return local_res10;
      }
      if (local_res10 == local_res18) {
        return local_res10;
      }
      local_38 = local_res10;
      if ((int)local_48 < 0) {
        local_48 = ~local_48;
        if ((int)local_48 < 0x180) {
          local_10 = (uint)*(byte *)(param_1 + 0x40 + (longlong)(int)local_48);
        }
        else {
          uVar4 = FUN_143b24350(param_1,local_48);
          local_10 = (uint)uVar4;
        }
        local_48 = local_10;
        if (1 < local_10) {
          local_38 = local_res10 + -1;
        }
      }
      else {
        local_30 = local_res10 + -1;
        if ((((*local_30 & 0xfc00) == 0xdc00) && (puVar2 < local_30)) &&
           ((local_res10[-2] & 0xfc00) == 0xd800)) {
          local_30 = local_res10 + -2;
          uVar4 = FUN_143b24350(param_1,(uint)*local_30 * 0x400 + -0x35fdc00 + (uint)local_res10[-1]
                               );
          local_48 = (uint)uVar4;
        }
        if (1 < (int)local_48) {
          local_38 = local_30;
        }
      }
      local_20 = local_res10;
    }
    if (local_44 < 0x10000) {
      local_14 = 1;
    }
    else {
      local_14 = 2;
    }
    local_res10 = local_res10 + local_14;
    if ((uint)((int)(uint)local_40 >> 8) < (local_48 & 0xff)) {
      if (param_4 == 0) {
        return local_38;
      }
      FUN_143b26ee0(param_4,(longlong)local_20 - (longlong)local_38 >> 1 & 0xffffffff);
      local_res10 = (ushort *)FUN_143b23d90(param_1,local_res10,local_res18);
      cVar3 = FUN_143b23a60(param_1,local_38,local_res10,param_4,param_5);
      if (cVar3 == '\0') {
        return local_res10;
      }
      local_48 = 0;
      local_38 = local_res10;
    }
    else {
      if ((local_40 & 0xff) < 2) {
        local_38 = local_res10;
      }
      if ((param_4 != 0) && (cVar3 = FUN_143b21b20(param_4,local_44,param_5), cVar3 == '\0')) {
        return local_res10;
      }
      local_48 = (uint)local_40;
    }
  } while( true );
}



// FUNCTION 143b26190 FUN_143b26190 body=612 status=ok
// SIG undefined FUN_143b26190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b26190(undefined8 param_1,longlong param_2,longlong param_3,char param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 *param_7)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong local_res10;
  longlong local_res18;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined4 local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  cVar1 = FUN_143b25220(param_6);
  local_res10 = param_2;
  if ((cVar1 == '\0') && (local_60 = FUN_143b23d90(param_1,param_2,param_3), param_2 != local_60)) {
    local_48 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
               ::GetBoundProgramCounterForTimerManager(param_6);
    uVar3 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
            ::GetBoundProgramCounterForTimerManager(param_6);
    local_50 = FUN_143b23e60(param_1,uVar3,local_48);
    lVar4 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
            ::GetBoundProgramCounterForTimerManager(param_6);
    uVar5 = lVar4 - local_50 >> 1;
    local_68 = (undefined4)uVar5;
    FUN_143a8db50(local_38,local_50,uVar5 & 0xffffffff);
    FUN_143b26ee0(param_6,local_68);
    FUN_143a8dcd0(param_5,local_38);
    FUN_143b17350(local_38,param_2,local_60 - param_2 >> 1 & 0xffffffff);
    local_58 = FUN_143a8fe10(local_38);
    iVar2 = FUN_143a904f0(local_38);
    local_78 = param_7;
    FUN_143b25b90(param_1,local_58,local_58 + (longlong)iVar2 * 2,param_6);
    cVar1 = FUN_143a8b0e0(*param_7);
    if (cVar1 != '\0') {
      FUN_143a8dc60(local_38);
      return;
    }
    local_res10 = local_60;
    FUN_143a8dc60(local_38);
  }
  if (param_4 == '\0') {
    local_res18 = param_3;
    if (param_3 == 0) {
      local_res18 = FUN_143ab45e0(local_res10,0);
    }
    FUN_143b21c50(param_6,local_res10,local_res18,param_7);
  }
  else {
    local_78 = param_7;
    FUN_143b25b90(param_1,local_res10,param_3,param_6);
  }
  return;
}



// FUNCTION 143b26400 FUN_143b26400 body=43 status=ok
// SIG undefined FUN_143b26400(void)

int FUN_143b26400(longlong param_1,int param_2,ushort param_3)

{
  return (param_2 + (uint)param_3) - (*(ushort *)(param_1 + 0x1c) - 0x41);
}



// FUNCTION 143b26430 FUN_143b26430 body=235 status=ok
// SIG undefined FUN_143b26430(void)

ulonglong FUN_143b26430(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  ulonglong uVar2;
  undefined4 local_14;
  
  local_14 = (uint)*(ushort *)*param_2;
  *param_2 = *param_2 + 2;
  if (local_14 < 0x180) {
    uVar2 = (ulonglong)*(byte *)(param_1 + 0x40 + (longlong)(int)local_14);
  }
  else {
    cVar1 = FUN_143b205d0(param_1,local_14);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      if ((((local_14 & 0xfffffc00) == 0xd800) && (*param_2 != param_3)) &&
         ((*(ushort *)*param_2 & 0xfc00) == 0xdc00)) {
        local_14 = local_14 * 0x400 + -0x35fdc00 + (uint)*(ushort *)*param_2;
        *param_2 = *param_2 + 2;
      }
      uVar2 = FUN_143b24350(param_1,local_14);
    }
  }
  return uVar2;
}



// FUNCTION 143b26520 FUN_143b26520 body=261 status=ok
// SIG undefined FUN_143b26520(void)

ulonglong FUN_143b26520(undefined8 *param_1)

{
  ushort uVar1;
  longlong lVar2;
  undefined2 uVar3;
  ulonglong uVar4;
  uint local_14;
  
  param_1[7] = param_1[6];
  if ((ulonglong)param_1[3] < (ulonglong)param_1[6]) {
    lVar2 = param_1[6];
    param_1[6] = (ushort *)(lVar2 + -2);
    uVar1 = *(ushort *)(lVar2 + -2);
    local_14 = (uint)uVar1;
    if (local_14 < 0x300) {
      uVar4 = (ulonglong)(byte)(uVar1 >> 8) << 8;
    }
    else {
      if ((((local_14 & 0xfffffc00) == 0xdc00) && ((ulonglong)param_1[2] < (ulonglong)param_1[6]))
         && (uVar1 = *(ushort *)(param_1[6] + -2), (uVar1 & 0xfc00) == 0xd800)) {
        param_1[6] = param_1[6] + -2;
        local_14 = (uint)uVar1 * 0x400 + -0x35fdc00 + local_14;
      }
      uVar3 = FUN_143b109f0(*param_1,local_14);
      uVar4 = FUN_143b23eb0(uVar3);
    }
  }
  else {
    uVar4 = (ulonglong)param_1 & 0xffffffffffffff00;
  }
  return uVar4;
}



// FUNCTION 143b26630 FUN_143b26630 body=238 status=ok
// SIG undefined FUN_143b26630(void)

ulonglong FUN_143b26630(longlong param_1,ulonglong param_2,ulonglong *param_3)

{
  char cVar1;
  ulonglong uVar2;
  uint local_14;
  
  *param_3 = *param_3 - 2;
  local_14 = (uint)*(ushort *)*param_3;
  if (local_14 < 0x180) {
    uVar2 = (ulonglong)*(byte *)(param_1 + 0x40 + (longlong)(int)local_14);
  }
  else {
    if ((local_14 & 0xfffffc00) == 0xdc00) {
      if ((param_2 < *param_3) && ((*(ushort *)(*param_3 - 2) & 0xfc00) == 0xd800)) {
        local_14 = (uint)*(ushort *)(*param_3 - 2) * 0x400 + -0x35fdc00 + local_14;
        *param_3 = *param_3 - 2;
      }
    }
    else {
      cVar1 = FUN_143b205d0(param_1,local_14);
      if (cVar1 == '\0') {
        return 0;
      }
    }
    uVar2 = FUN_143b24350(param_1,local_14);
  }
  return uVar2;
}



// FUNCTION 143b26720 FUN_143b26720 body=1878 status=ok
// SIG undefined FUN_143b26720(void)

void FUN_143b26720(longlong param_1,undefined8 param_2,int param_3,char param_4)

{
  ushort uVar1;
  short sVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ushort *puVar10;
  uint local_84;
  byte local_7f;
  undefined2 local_7c;
  ushort *local_78;
  ushort local_70;
  ushort *local_68;
  ushort *local_60;
  ushort *local_58;
  ushort local_50;
  ushort *local_48;
  ushort *local_30;
  longlong local_28;
  int local_1c;
  int local_18;
  
  lVar9 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
          ::GetBoundProgramCounterForTimerManager(param_2);
  local_78 = (ushort *)(lVar9 + (longlong)param_3 * 2);
  local_30 = (ushort *)
             TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
             ::GetBoundProgramCounterForTimerManager(param_2);
  if (local_78 != local_30) {
    local_28 = 0;
    local_58 = (ushort *)0x0;
    bVar3 = false;
    local_7f = 0;
LAB_143b2679b:
    while( true ) {
      local_84 = (uint)*local_78;
      puVar10 = local_78 + 1;
      if ((local_84 & 0xfffffc00) == 0xd800) {
        if ((puVar10 == local_30) || ((*puVar10 & 0xfc00) != 0xdc00)) {
          local_7c = *(undefined2 *)
                      (**(longlong **)(param_1 + 0x20) +
                      (longlong)
                      (int)((local_84 & 0x1f) +
                           (uint)*(ushort *)
                                  (**(longlong **)(param_1 + 0x20) +
                                  (longlong)(((int)local_84 >> 5) + 0x140) * 2) * 4) * 2);
          local_78 = puVar10;
        }
        else {
          local_78 = local_78 + 2;
          local_84 = local_84 * 0x400 + -0x35fdc00 + (uint)*puVar10;
          if ((int)local_84 < *(int *)(*(longlong *)(param_1 + 0x20) + 0x2c)) {
            local_1c = (local_84 & 0x1f) +
                       (uint)*(ushort *)
                              (**(longlong **)(param_1 + 0x20) +
                              (longlong)
                              (int)((uint)*(ushort *)
                                           (**(longlong **)(param_1 + 0x20) +
                                           (longlong)(((int)local_84 >> 0xb) + 0x820) * 2) +
                                   ((int)local_84 >> 5 & 0x3fU)) * 2) * 4;
          }
          else {
            local_1c = *(int *)(*(longlong *)(param_1 + 0x20) + 0x30);
          }
          local_7c = *(undefined2 *)(**(longlong **)(param_1 + 0x20) + (longlong)local_1c * 2);
        }
      }
      else {
        local_7c = *(undefined2 *)
                    (**(longlong **)(param_1 + 0x20) +
                    (longlong)
                    (int)((local_84 & 0x1f) +
                         (uint)*(ushort *)
                                (**(longlong **)(param_1 + 0x20) +
                                (longlong)((int)local_84 >> 5) * 2) * 4) * 2);
        local_78 = puVar10;
      }
      bVar4 = FUN_143b23eb0(local_7c);
      cVar5 = FUN_143b25370(param_1,local_7c);
      if (((cVar5 == '\0') || (local_28 == 0)) || ((bVar4 <= local_7f && (local_7f != 0)))) break;
      cVar5 = FUN_143b25340(local_7c);
      if (cVar5 == '\0') {
        uVar7 = FUN_143b21d30(local_28,local_84);
        if ((int)uVar7 < 0) break;
        iVar8 = (int)uVar7 >> 1;
        if (local_84 < 0x10000) {
          local_18 = 1;
        }
        else {
          local_18 = 2;
        }
        local_48 = local_78 + -(longlong)local_18;
        local_70 = (ushort)iVar8;
        sVar2 = (short)((int)uVar7 >> 0xb);
        if (bVar3) {
          if (iVar8 - 0x10000U < 0x100000) {
            *local_58 = sVar2 + 0xd7c0;
            local_58[1] = local_70 & 0x3ff | 0xdc00;
          }
          else {
            *local_58 = local_70;
            bVar3 = false;
            local_68 = local_58;
            for (local_60 = local_58 + 2; local_68 = local_68 + 1, local_60 < local_48;
                local_60 = local_60 + 1) {
              *local_68 = *local_60;
            }
            local_48 = local_48 + -1;
          }
        }
        else if (iVar8 - 0x10000U < 0x100000) {
          bVar3 = true;
          local_68 = local_48;
          local_60 = local_48 + 1;
          while (local_58 + 1 < local_68) {
            local_68 = local_68 + -1;
            local_60 = local_60 + -1;
            *local_60 = *local_68;
          }
          local_58[1] = local_70 & 0x3ff | 0xdc00;
          *local_58 = sVar2 + 0xd7c0;
          local_48 = local_48 + 1;
        }
        else {
          *local_58 = local_70;
        }
        if (local_48 < local_78) {
          local_68 = local_48;
          for (local_60 = local_78; local_60 < local_30; local_60 = local_60 + 1) {
            *local_68 = *local_60;
            local_68 = local_68 + 1;
          }
          local_30 = local_68;
          local_78 = local_48;
        }
        if (local_78 == local_30) goto LAB_143b26e61;
        if ((uVar7 & 1) == 0) {
          local_28 = 0;
        }
        else {
          uVar6 = FUN_143b109f0(param_1,iVar8);
          local_28 = FUN_143b240e0(param_1,uVar6);
        }
      }
      else {
        if (((int)local_84 < 0x11a7) && ((ushort)(*local_58 + 0xef00) < 0x13)) {
          puVar10 = local_78 + -1;
          local_50 = ((*local_58 + 0xef00) * 0x15 + -0x1161 + (short)local_84) * 0x1c + 0xac00;
          if ((local_78 != local_30) && (uVar1 = *local_78, (ushort)(uVar1 + 0xee59) < 0x1c)) {
            local_78 = local_78 + 1;
            local_50 = local_50 + uVar1 + 0xee59;
          }
          *local_58 = local_50;
          local_68 = puVar10;
          for (local_60 = local_78; local_60 < local_30; local_60 = local_60 + 1) {
            *local_68 = *local_60;
            local_68 = local_68 + 1;
          }
          local_30 = local_68;
          local_78 = puVar10;
        }
        if (local_78 == local_30) goto LAB_143b26e61;
        local_28 = 0;
      }
    }
    if (local_78 != local_30) {
      local_7f = bVar4;
      if (bVar4 == 0) {
        local_28 = FUN_143b24120(param_1,local_7c);
        if (local_28 != 0) {
          if (local_84 < 0x10000) {
            bVar3 = false;
            local_58 = local_78 + -1;
          }
          else {
            bVar3 = true;
            local_58 = local_78 + -2;
          }
        }
      }
      else if (param_4 != '\0') {
        local_28 = 0;
      }
      goto LAB_143b2679b;
    }
LAB_143b26e61:
    FUN_143b27110(param_2,local_30);
  }
  return;
}



// FUNCTION 143b26e80 FUN_143b26e80 body=81 status=ok
// SIG undefined FUN_143b26e80(void)

void FUN_143b26e80(longlong param_1)

{
  undefined4 uVar1;
  
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
  uVar1 = FUN_143a8fe60(*(undefined8 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return;
}



// FUNCTION 143b26ee0 FUN_143b26ee0 body=173 status=ok
// SIG undefined FUN_143b26ee0(void)

void FUN_143b26ee0(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((longlong)param_2 < *(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x10) >> 1) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + (longlong)param_2 * -2;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + param_2;
  }
  else {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x10);
    uVar1 = FUN_143a8fe60(*(undefined8 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x28) = uVar1;
  }
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
  return;
}



// FUNCTION 143b26f90 FUN_143b26f90 body=305 status=ok
// SIG undefined FUN_143b26f90(void)

ulonglong FUN_143b26f90(longlong param_1,int param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined4 local_18;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar5 = *(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x10) >> 1;
  iVar3 = (int)uVar5;
  FUN_143a90820(*(undefined8 *)(param_1 + 8),uVar5 & 0xffffffff);
  iVar4 = FUN_143a8fe60(*(undefined8 *)(param_1 + 8));
  local_18 = iVar3 + param_2;
  if (iVar3 + param_2 < iVar4 << 1) {
    local_18 = iVar4 << 1;
  }
  if (local_18 < 0x100) {
    local_18 = 0x100;
  }
  uVar6 = FUN_143a8fd90(*(undefined8 *)(param_1 + 8),local_18);
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *param_3 = 7;
    uVar5 = (ulonglong)param_3 & 0xffffffffffffff00;
  }
  else {
    *(longlong *)(param_1 + 0x18) =
         *(longlong *)(param_1 + 0x10) + (longlong)(int)(lVar2 - lVar1 >> 1) * 2;
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 2;
    iVar4 = FUN_143a8fe60(*(undefined8 *)(param_1 + 8));
    *(int *)(param_1 + 0x28) = iVar4 - iVar3;
    uVar5 = CONCAT71((uint7)(uint3)((uint)(iVar4 - iVar3) >> 8),1);
  }
  return uVar5;
}



// FUNCTION 143b270d0 FUN_143b270d0 body=24 status=ok
// SIG undefined FUN_143b270d0(void)

void FUN_143b270d0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x20);
  return;
}



// FUNCTION 143b270f0 FUN_143b270f0 body=29 status=ok
// SIG undefined FUN_143b270f0(void)

void FUN_143b270f0(longlong param_1,undefined2 param_2)

{
  *(undefined2 *)(*(longlong *)(param_1 + 0x20) + -2) = param_2;
  return;
}



// FUNCTION 143b27110 FUN_143b27110 body=84 status=ok
// SIG undefined FUN_143b27110(void)

void FUN_143b27110(longlong param_1,longlong param_2)

{
  *(int *)(param_1 + 0x28) =
       (int)(*(longlong *)(param_1 + 0x20) - param_2 >> 1) + *(int *)(param_1 + 0x28);
  *(longlong *)(param_1 + 0x20) = param_2;
  *(longlong *)(param_1 + 0x18) = param_2;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return;
}



// FUNCTION 143b27170 FUN_143b27170 body=159 status=ok
// SIG undefined FUN_143b27170(void)

void FUN_143b27170(longlong param_1)

{
  ushort *puVar1;
  
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x30);
  puVar1 = (ushort *)(*(longlong *)(param_1 + 0x30) + -2);
  *(ushort **)(param_1 + 0x30) = puVar1;
  if ((((*puVar1 & 0xfc00) == 0xdc00) &&
      (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x30))) &&
     ((*(ushort *)(*(longlong *)(param_1 + 0x30) + -2) & 0xfc00) == 0xd800)) {
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + -2;
  }
  return;
}



// FUNCTION 143b27210 FUN_143b27210 body=97 status=ok
// SIG undefined FUN_143b27210(void)

void FUN_143b27210(ushort *param_1,int param_2)

{
  ushort local_res10;
  
  local_res10 = (ushort)param_2;
  if (param_2 < 0x10000) {
    *param_1 = local_res10;
  }
  else {
    *param_1 = (short)(param_2 >> 10) + 0xd7c0;
    param_1[1] = local_res10 & 0x3ff | 0xdc00;
  }
  return;
}



// FUNCTION 143b27280 FUN_143b27280 body=114 status=ok
// SIG undefined FUN_143b27280(void)

void FUN_143b27280(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined2 local_res20;
  undefined4 local_18 [2];
  longlong local_10;
  
  local_18[0] = 0;
  if (param_4 != 0) {
    local_res20 = (undefined2)param_4;
    local_10 = param_1;
    FUN_143b257f0(param_1,param_2,param_3,local_res20,*(undefined8 *)(param_1 + 0x1c8),local_18);
  }
  FUN_143a8b110(local_18[0]);
  return;
}



// FUNCTION 143b27300 FUN_143b27300 body=55 status=ok
// SIG undefined FUN_143b27300(void)

undefined1
FUN_143b27300(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  FUN_143b248d0(param_1,param_2,param_3,param_4);
  return 1;
}



// FUNCTION 143b27340 FUN_143b27340 body=223 status=ok
// SIG undefined FUN_143b27340(void)

undefined8 FUN_143b27340(undefined8 *param_1,uint param_2,uint param_3,undefined2 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  short sVar3;
  ulonglong uVar4;
  uint local_res10;
  short local_24;
  
  puVar1 = (undefined8 *)param_1[1];
  (*(code *)puVar1[1])(*puVar1,param_2);
  uVar4 = (ulonglong)param_3;
  if (param_2 != param_3) {
    cVar2 = FUN_143b25110(*param_1,param_4);
    uVar4 = (ulonglong)(uint)(int)cVar2;
    if ((int)cVar2 != 0) {
      local_24 = FUN_143b1f030(*param_1,param_2);
      local_res10 = param_2;
      while( true ) {
        local_res10 = local_res10 + 1;
        uVar4 = (ulonglong)param_3;
        if ((int)param_3 < (int)local_res10) break;
        sVar3 = FUN_143b1f030(*param_1,local_res10);
        if (sVar3 != local_24) {
          (*(code *)puVar1[1])(*puVar1,local_res10);
          local_24 = sVar3;
        }
      }
    }
  }
  return CONCAT71((int7)(uVar4 >> 8),1);
}



// FUNCTION 143b27420 FUN_143b27420 body=308 status=ok
// SIG undefined FUN_143b27420(void)

void FUN_143b27420(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_30;
  
  lVar2 = FUN_143a8d310(0x30);
  if (lVar2 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = FUN_143b20ff0(lVar2,param_2);
  }
  *(undefined8 *)(param_1 + 0x1c8) = local_30;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    *param_2 = 7;
  }
  cVar1 = FUN_143a8b110(*param_2);
  if (cVar1 != '\0') {
    uVar3 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
            ::GetBoundProgramCounterForTimerManager(param_1);
    FUN_143ac2b60(uVar3,0,FUN_143b27280,param_1);
    FUN_143b33500(**(undefined8 **)(param_1 + 0x1c8),1,param_2);
  }
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 != '\0') {
    if (*(longlong *)(param_1 + 0x1c8) != 0) {
      FUN_143b21180(*(longlong *)(param_1 + 0x1c8),1);
    }
    *(undefined8 *)(param_1 + 0x1c8) = 0;
  }
  return;
}



// FUNCTION 143b27580 FUN_143b27580 body=27 status=ok
// SIG undefined FUN_143b27580(void)

void FUN_143b27580(undefined8 *param_1)

{
  FUN_143aa79f0(*param_1);
  return;
}



// FUNCTION 143b275a0 FUN_143b275a0 body=887 status=ok
// SIG undefined FUN_143b275a0(void)

undefined4 FUN_143b275a0(longlong param_1,byte *param_2,uint param_3,uint param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *local_res10;
  uint local_res18;
  uint local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_3 == 0) {
    local_res18 = (uint)*param_2;
    local_res10 = param_2 + 1;
  }
  local_res18 = local_res18 + 1;
  while (5 < (int)local_res18) {
    if ((int)param_4 < (int)(uint)*local_res10) {
      local_res10 = (byte *)FUN_143b27920(local_res10 + 1);
      local_res18 = (int)local_res18 >> 1;
    }
    else {
      local_res18 = local_res18 - ((int)local_res18 >> 1);
      local_res10 = (byte *)FUN_143b27e30(local_res10 + 1);
    }
  }
  do {
    pbVar2 = local_res10 + 1;
    if (param_4 == *local_res10) {
      if ((*pbVar2 & 1) == 0) {
        pbVar3 = local_res10 + 2;
        local_34 = (int)(uint)*pbVar2 >> 1;
        if (local_34 < 0x51) {
          local_34 = local_34 - 0x10;
          local_res10 = pbVar3;
        }
        else if (local_34 < 0x6c) {
          local_34 = (local_34 - 0x51) * 0x100 | (uint)*pbVar3;
          local_res10 = local_res10 + 3;
        }
        else if (local_34 < 0x7e) {
          local_34 = (local_34 - 0x6c) * 0x10000 | (uint)*pbVar3 << 8 | (uint)local_res10[3];
          local_res10 = local_res10 + 4;
        }
        else if (local_34 == 0x7e) {
          local_34 = (uint)*pbVar3 << 0x10 | (uint)local_res10[3] << 8 | (uint)local_res10[4];
          local_res10 = local_res10 + 5;
        }
        else {
          local_34 = (uint)*pbVar3 << 0x18 | (uint)local_res10[3] << 0x10 |
                     (uint)local_res10[4] << 8 | (uint)local_res10[5];
          local_res10 = local_res10 + 6;
        }
        local_res10 = local_res10 + (int)local_34;
        if (*local_res10 < 0x20) {
          local_24 = 1;
        }
        else {
          local_24 = FUN_143b27f80(*local_res10);
        }
        local_28 = local_24;
      }
      else {
        local_28 = 2;
        local_res10 = pbVar2;
      }
      *(byte **)(param_1 + 0x10) = local_res10;
      return local_28;
    }
    local_res18 = local_res18 + -1;
    local_res10 = (byte *)FUN_143b27eb0(pbVar2);
  } while (1 < (int)local_res18);
  if (param_4 == *local_res10) {
    *(byte **)(param_1 + 0x10) = local_res10 + 1;
    bVar1 = local_res10[1];
    if (bVar1 < 0x20) {
      local_30 = 1;
    }
    else {
      local_30 = FUN_143b27f80(bVar1);
    }
  }
  else {
    FUN_143b27f60(param_1);
    local_30 = 0;
  }
  return local_30;
}



// FUNCTION 143b27920 FUN_143b27920 body=399 status=ok
// SIG undefined FUN_143b27920(void)

byte * FUN_143b27920(byte *param_1)

{
  byte *local_res8;
  uint local_18;
  
  local_18 = (uint)*param_1;
  local_res8 = param_1 + 1;
  if (0xbf < local_18) {
    if (local_18 < 0xf0) {
      local_18 = (local_18 - 0xc0) * 0x100 | (uint)*local_res8;
      local_res8 = param_1 + 2;
    }
    else if (local_18 < 0xfe) {
      local_18 = (local_18 - 0xf0) * 0x10000 | (uint)*local_res8 << 8 | (uint)param_1[2];
      local_res8 = param_1 + 3;
    }
    else if (local_18 == 0xfe) {
      local_18 = (uint)*local_res8 << 0x10 | (uint)param_1[2] << 8 | (uint)param_1[3];
      local_res8 = param_1 + 4;
    }
    else {
      local_18 = (uint)*local_res8 << 0x18 | (uint)param_1[2] << 0x10 | (uint)param_1[3] << 8 |
                 (uint)param_1[4];
      local_res8 = param_1 + 5;
    }
  }
  return local_res8 + (int)local_18;
}



// FUNCTION 143b27ab0 FUN_143b27ab0 body=258 status=ok
// SIG undefined FUN_143b27ab0(void)

ulonglong FUN_143b27ab0(longlong param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  ulonglong uVar4;
  uint local_res10;
  uint local_20;
  
  pbVar2 = *(byte **)(param_1 + 0x10);
  if (pbVar2 == (byte *)0x0) {
    uVar4 = 0;
  }
  else {
    local_res10 = param_2;
    if ((int)param_2 < 0) {
      local_res10 = param_2 + 0x100;
    }
    if (*(int *)(param_1 + 0x18) < 0) {
      uVar4 = FUN_143b27bc0(param_1,pbVar2,local_res10);
    }
    else if (local_res10 == *pbVar2) {
      iVar3 = *(int *)(param_1 + 0x18) + -1;
      *(int *)(param_1 + 0x18) = iVar3;
      *(byte **)(param_1 + 0x10) = pbVar2 + 1;
      if ((iVar3 < 0) && (bVar1 = pbVar2[1], 0x1f < bVar1)) {
        local_20 = FUN_143b27f80(bVar1);
      }
      else {
        local_20 = 1;
      }
      uVar4 = (ulonglong)local_20;
    }
    else {
      FUN_143b27f60(param_1);
      uVar4 = 0;
    }
  }
  return uVar4;
}



// FUNCTION 143b27bc0 FUN_143b27bc0 body=293 status=ok
// SIG undefined FUN_143b27bc0(void)

ulonglong FUN_143b27bc0(longlong param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  byte *local_res10;
  uint local_20;
  
  local_res10 = param_2;
  while( true ) {
    uVar2 = (uint)*local_res10;
    pbVar3 = local_res10 + 1;
    if (uVar2 < 0x10) {
      uVar4 = FUN_143b275a0(param_1,pbVar3,uVar2,param_3);
      return uVar4;
    }
    if (uVar2 < 0x20) break;
    if ((*local_res10 & 1) != 0) goto LAB_143b27cdf;
    local_res10 = (byte *)FUN_143b27ef0(pbVar3,uVar2);
  }
  if (param_3 == *pbVar3) {
    *(uint *)(param_1 + 0x18) = uVar2 - 0x11;
    *(byte **)(param_1 + 0x10) = local_res10 + 2;
    if (((int)(uVar2 - 0x11) < 0) && (bVar1 = local_res10[2], 0x1f < bVar1)) {
      local_20 = FUN_143b27f80(bVar1);
    }
    else {
      local_20 = 1;
    }
    return (ulonglong)local_20;
  }
LAB_143b27cdf:
  FUN_143b27f60(param_1);
  return 0;
}



// FUNCTION 143b27cf0 FUN_143b27cf0 body=312 status=ok
// SIG undefined FUN_143b27cf0(void)

uint FUN_143b27cf0(byte *param_1,int param_2)

{
  uint local_18;
  
  if (param_2 < 0x51) {
    local_18 = param_2 - 0x10;
  }
  else if (param_2 < 0x6c) {
    local_18 = (param_2 + -0x51) * 0x100 | (uint)*param_1;
  }
  else if (param_2 < 0x7e) {
    local_18 = (param_2 + -0x6c) * 0x10000 | (uint)*param_1 << 8 | (uint)param_1[1];
  }
  else if (param_2 == 0x7e) {
    local_18 = (uint)*param_1 << 0x10 | (uint)param_1[1] << 8 | (uint)param_1[2];
  }
  else {
    local_18 = (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[2] << 8 |
               (uint)param_1[3];
  }
  return local_18;
}



// FUNCTION 143b27e30 FUN_143b27e30 body=128 status=ok
// SIG undefined FUN_143b27e30(void)

byte * FUN_143b27e30(byte *param_1)

{
  uint uVar1;
  byte *local_res8;
  
  uVar1 = (uint)*param_1;
  local_res8 = param_1 + 1;
  if (0xbf < uVar1) {
    if (uVar1 < 0xf0) {
      local_res8 = param_1 + 2;
    }
    else if (uVar1 < 0xfe) {
      local_res8 = param_1 + 3;
    }
    else {
      local_res8 = local_res8 + (int)((uVar1 & 1) + 3);
    }
  }
  return local_res8;
}



// FUNCTION 143b27eb0 FUN_143b27eb0 body=53 status=ok
// SIG undefined FUN_143b27eb0(void)

void FUN_143b27eb0(undefined1 *param_1)

{
  FUN_143b27ef0(param_1 + 1,*param_1);
  return;
}



// FUNCTION 143b27ef0 FUN_143b27ef0 body=106 status=ok
// SIG undefined FUN_143b27ef0(void)

longlong FUN_143b27ef0(longlong param_1,int param_2)

{
  undefined8 local_res8;
  
  local_res8 = param_1;
  if (0xa1 < param_2) {
    if (param_2 < 0xd8) {
      local_res8 = param_1 + 1;
    }
    else if (param_2 < 0xfc) {
      local_res8 = param_1 + 2;
    }
    else {
      local_res8 = param_1 + (int)((param_2 >> 1 & 1U) + 3);
    }
  }
  return local_res8;
}



// FUNCTION 143b27f60 FUN_143b27f60 body=19 status=ok
// SIG undefined FUN_143b27f60(void)

void FUN_143b27f60(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 143b27f80 FUN_143b27f80 body=21 status=ok
// SIG undefined FUN_143b27f80(void)

int FUN_143b27f80(uint param_1)

{
  return 3 - (param_1 & 1);
}



// FUNCTION 143b27fa0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::UnicodeFunctor::vftable;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143b27fd0 FUN_143b27fd0 body=72 status=ok
// SIG undefined FUN_143b27fd0(void)

void FUN_143b27fd0(undefined8 *param_1)

{
  *param_1 = icu_53::UnicodeFilter::vftable;
  param_1[1] = icu_53::UnicodeFilter::vftable;
  RtAudioError::~RtAudioError(param_1 + 1);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143b28020 ~RtAudioError body=21 status=ok
// SIG undefined ~RtAudioError(void)

void RtAudioError::~RtAudioError(undefined8 *param_1)

{
  *param_1 = icu_53::UnicodeMatcher::vftable;
  return;
}



// FUNCTION 143b28040 FUN_143b28040 body=377 status=ok
// SIG undefined FUN_143b28040(void)

undefined8 FUN_143b28040(longlong param_1,undefined8 param_2,int *param_3,int param_4,char param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int local_24;
  int local_20;
  
  if (*param_3 < param_4) {
    uVar2 = FUN_143b06f10(param_2,*param_3);
    cVar1 = (**(code **)(*(longlong *)(param_1 + -8) + 0x30))(param_1 + -8,uVar2);
    if (cVar1 != '\0') {
      if (uVar2 < 0x10000) {
        local_24 = 1;
      }
      else {
        local_24 = 2;
      }
      *param_3 = *param_3 + local_24;
      return 2;
    }
  }
  if (param_4 < *param_3) {
    uVar3 = FUN_143b06f10(param_2,*param_3);
    cVar1 = (**(code **)(*(longlong *)(param_1 + -8) + 0x30))(param_1 + -8,uVar3);
    if (cVar1 != '\0') {
      *param_3 = *param_3 + -1;
      if (-1 < *param_3) {
        uVar2 = FUN_143b06f10(param_2,*param_3);
        if (uVar2 < 0x10000) {
          local_20 = 1;
        }
        else {
          local_20 = 2;
        }
        *param_3 = *param_3 - (local_20 + -1);
      }
      return 2;
    }
  }
  if ((param_5 == '\0') || (*param_3 != param_4)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 143b281c0 FUN_143b281c0 body=11 status=ok
// SIG undefined FUN_143b281c0(void)

void FUN_143b281c0(void)

{
  return;
}



// FUNCTION 143b281d0 FUN_143b281d0 body=49 status=ok
// SIG undefined FUN_143b281d0(void)

longlong FUN_143b281d0(longlong param_1)

{
  undefined8 local_18;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = param_1 + 8;
  }
  return local_18;
}



// FUNCTION 143b28210 FUN_143b28210 body=115 status=ok
// SIG undefined FUN_143b28210(void)

ulonglong FUN_143b28210(undefined2 *param_1,int param_2)

{
  char cVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  undefined2 *local_res8;
  
  if (param_2 < 1) {
    uVar2 = in_RAX & 0xffffffffffffff00;
  }
  else {
    local_res8 = param_1;
    do {
      cVar1 = FUN_143b28290(*local_res8);
      local_res8 = local_res8 + 1;
      if (cVar1 != '\0') {
        return (ulonglong)local_res8 & 0xffffffffffffff00;
      }
    } while (local_res8 < param_1 + param_2);
    uVar2 = CONCAT71((int7)((ulonglong)(param_1 + param_2) >> 8),1);
  }
  return uVar2;
}



// FUNCTION 143b28290 FUN_143b28290 body=206 status=ok
// SIG undefined FUN_143b28290(void)

ulonglong FUN_143b28290(int param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  uint7 uVar2;
  byte local_18;
  
  if (param_1 < 0) {
    uVar1 = in_RAX & 0xffffffffffffff00;
  }
  else if (param_1 < 0x100) {
    uVar1 = (ulonglong)((byte)(&DAT_145d0bbf0)[param_1] & 1);
  }
  else {
    uVar2 = (uint7)(in_RAX >> 8);
    if (param_1 < 0x200e) {
      uVar1 = (ulonglong)uVar2 << 8;
    }
    else if (param_1 < 0x3031) {
      uVar1 = (ulonglong)
              (*(uint *)(&DAT_145d0bda0 +
                        (ulonglong)(byte)(&DAT_145d0bcf0)[param_1 + -0x2000 >> 5] * 4) >>
               ((byte)param_1 & 0x1f) & 1);
    }
    else if ((param_1 < 0xfd3e) || (0xfe46 < param_1)) {
      uVar1 = (ulonglong)uVar2 << 8;
    }
    else {
      if ((param_1 < 0xfd40) || (0xfe44 < param_1)) {
        local_18 = 1;
      }
      else {
        local_18 = 0;
      }
      uVar1 = (ulonglong)local_18;
    }
  }
  return uVar1;
}



// FUNCTION 143b28380 FUN_143b28380 body=119 status=ok
// SIG undefined FUN_143b28380(void)

ulonglong FUN_143b28380(int param_1)

{
  undefined8 in_RAX;
  uint7 uVar2;
  ulonglong uVar1;
  byte local_18;
  
  uVar2 = (uint7)((ulonglong)in_RAX >> 8);
  if (param_1 < 0) {
    uVar1 = (ulonglong)uVar2 << 8;
  }
  else if (param_1 < 0x100) {
    uVar1 = (ulonglong)((int)(char)((int)(uint)(byte)(&DAT_145d0bbf0)[param_1] >> 2) & 1);
  }
  else if ((param_1 < 0x200e) || (0x2029 < param_1)) {
    uVar1 = (ulonglong)uVar2 << 8;
  }
  else {
    if ((param_1 < 0x2010) || (0x2027 < param_1)) {
      local_18 = 1;
    }
    else {
      local_18 = 0;
    }
    uVar1 = (ulonglong)local_18;
  }
  return uVar1;
}



// FUNCTION 143b28400 FUN_143b28400 body=78 status=ok
// SIG undefined FUN_143b28400(void)

undefined2 * FUN_143b28400(undefined2 *param_1,int param_2)

{
  char cVar1;
  undefined2 *local_res8;
  int local_res10;
  
  local_res8 = param_1;
  local_res10 = param_2;
  while( true ) {
    if (local_res10 < 1) {
      return local_res8;
    }
    cVar1 = FUN_143b28290(*local_res8);
    if (cVar1 != '\0') break;
    local_res8 = local_res8 + 1;
    local_res10 = local_res10 + -1;
  }
  return local_res8;
}



// FUNCTION 143b28450 FUN_143b28450 body=78 status=ok
// SIG undefined FUN_143b28450(void)

undefined2 * FUN_143b28450(undefined2 *param_1,int param_2)

{
  char cVar1;
  undefined2 *local_res8;
  int local_res10;
  
  local_res8 = param_1;
  local_res10 = param_2;
  while( true ) {
    if (local_res10 < 1) {
      return local_res8;
    }
    cVar1 = FUN_143b28380(*local_res8);
    if (cVar1 == '\0') break;
    local_res8 = local_res8 + 1;
    local_res10 = local_res10 + -1;
  }
  return local_res8;
}



// FUNCTION 143b284a0 FUN_143b284a0 body=260 status=ok
// SIG undefined FUN_143b284a0(void)

undefined2 * FUN_143b284a0(undefined2 *param_1,int *param_2)

{
  char cVar1;
  int local_18;
  int local_14;
  
  if ((0 < *param_2) &&
     ((cVar1 = FUN_143b28380(*param_1), cVar1 != '\0' ||
      (cVar1 = FUN_143b28380(param_1[*param_2 + -1]), cVar1 != '\0')))) {
    local_18 = 0;
    local_14 = *param_2;
    while ((local_18 < local_14 && (cVar1 = FUN_143b28380(param_1[local_18]), cVar1 != '\0'))) {
      local_18 = local_18 + 1;
    }
    if (local_18 < local_14) {
      while (cVar1 = FUN_143b28380(param_1[local_14 + -1]), cVar1 != '\0') {
        local_14 = local_14 + -1;
      }
    }
    *param_2 = local_14 - local_18;
    param_1 = param_1 + local_18;
  }
  return param_1;
}



// FUNCTION 143b285b0 FUN_143b285b0 body=366 status=ok
// SIG undefined FUN_143b285b0(void)

undefined8 FUN_143b285b0(undefined8 param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_143b28720(param_2);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    FUN_143acc590(param_1,0x5c);
    if ((param_2 & 0xffff0000) == 0) {
      FUN_143acc590(param_1,0x75);
    }
    else {
      FUN_143acc590(param_1,0x55);
      FUN_143acc590(param_1,*(undefined2 *)
                             (&DAT_145d0bdd0 + (longlong)(int)((int)param_2 >> 0x1c & 0xf) * 2));
      FUN_143acc590(param_1,*(undefined2 *)
                             (&DAT_145d0bdd0 + (longlong)(int)((int)param_2 >> 0x18 & 0xf) * 2));
      FUN_143acc590(param_1,*(undefined2 *)
                             (&DAT_145d0bdd0 + (longlong)(int)((int)param_2 >> 0x14 & 0xf) * 2));
      FUN_143acc590(param_1,*(undefined2 *)
                             (&DAT_145d0bdd0 + (longlong)(int)((int)param_2 >> 0x10 & 0xf) * 2));
    }
    FUN_143acc590(param_1,*(undefined2 *)
                           (&DAT_145d0bdd0 + (longlong)(int)((int)param_2 >> 0xc & 0xf) * 2));
    FUN_143acc590(param_1,*(undefined2 *)
                           (&DAT_145d0bdd0 + (longlong)(int)((int)param_2 >> 8 & 0xf) * 2));
    FUN_143acc590(param_1,*(undefined2 *)
                           (&DAT_145d0bdd0 + (longlong)(int)((int)param_2 >> 4 & 0xf) * 2));
    FUN_143acc590(param_1,*(undefined2 *)(&DAT_145d0bdd0 + (longlong)(int)(param_2 & 0xf) * 2));
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 143b28720 FUN_143b28720 body=41 status=ok
// SIG undefined FUN_143b28720(void)

undefined1 FUN_143b28720(int param_1)

{
  undefined1 local_18;
  
  if ((param_1 < 0x20) || (0x7e < param_1)) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143b28750 FUN_143b28750 body=121 status=ok
// SIG undefined FUN_143b28750(void)

ulonglong FUN_143b28750(undefined8 param_1,int *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  iVar1 = *param_2;
  lVar3 = FUN_143a8fe10(param_1);
  iVar2 = FUN_143a904f0(param_1);
  lVar4 = FUN_143b28450(lVar3 + (longlong)iVar1 * 2,iVar2 - iVar1);
  uVar5 = lVar4 - lVar3 >> 1;
  if (param_3 != '\0') {
    *param_2 = (int)uVar5;
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 143b287d0 FUN_143b287d0 body=224 status=ok
// SIG undefined FUN_143b287d0(void)

undefined8 *
FUN_143b287d0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  *param_1 = icu_53::BMPSet::vftable;
  param_1[0x62] = param_3;
  *(undefined4 *)(param_1 + 99) = param_4;
  _guard_xfg_dispatch_icall_nop(param_1 + 1,(void *)(param_2 + 8),0xc0);
  _guard_xfg_dispatch_icall_nop(param_1 + 0x19,(void *)(param_2 + 200),0x100);
  _guard_xfg_dispatch_icall_nop(param_1 + 0x39,(void *)(param_2 + 0x1c8),0x100);
  _guard_xfg_dispatch_icall_nop(param_1 + 0x59,(void *)(param_2 + 0x2c8),0x48);
  return param_1;
}



// FUNCTION 143b288b0 FUN_143b288b0 body=365 status=ok
// SIG undefined FUN_143b288b0(void)

undefined8 * FUN_143b288b0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int local_18;
  
  *param_1 = icu_53::BMPSet::vftable;
  param_1[0x62] = param_2;
  *(undefined4 *)(param_1 + 99) = param_3;
  _guard_xfg_dispatch_icall_nop(param_1 + 1,0,0xc0);
  _guard_xfg_dispatch_icall_nop(param_1 + 0x19,0,0x100);
  _guard_xfg_dispatch_icall_nop(param_1 + 0x39,0,0x100);
  uVar1 = FUN_143b28c30(param_1,0x800,0,*(int *)(param_1 + 99) + -1);
  *(undefined4 *)(param_1 + 0x59) = uVar1;
  for (local_18 = 1; local_18 < 0x11; local_18 = local_18 + 1) {
    uVar1 = FUN_143b28c30(param_1,local_18 << 0xc,
                          *(undefined4 *)((longlong)param_1 + (longlong)(local_18 + -1) * 4 + 0x2c8)
                          ,*(int *)(param_1 + 99) + -1);
    *(undefined4 *)((longlong)param_1 + (longlong)local_18 * 4 + 0x2c8) = uVar1;
  }
  *(int *)((longlong)param_1 + 0x30c) = *(int *)(param_1 + 99) + -1;
  FUN_143b28cf0(param_1);
  FUN_143b29040(param_1);
  return param_1;
}



// FUNCTION 143b28a20 ~RtAudioError body=21 status=ok
// SIG undefined ~RtAudioError(void)

void RtAudioError::~RtAudioError(undefined8 *param_1)

{
  *param_1 = icu_53::BMPSet::vftable;
  return;
}



// FUNCTION 143b28a40 FUN_143b28a40 body=54 status=ok
// SIG undefined FUN_143b28a40(void)

undefined8 FUN_143b28a40(undefined8 param_1,uint param_2)

{
  RtAudioError::~RtAudioError(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b28a80 FUN_143b28a80 body=348 status=ok
// SIG undefined FUN_143b28a80(void)

ulonglong FUN_143b28a80(longlong param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  byte local_10;
  
  if (param_2 < 0x80) {
    uVar3 = (ulonglong)*(byte *)(param_1 + 8 + (longlong)(int)param_2);
  }
  else if (param_2 < 0x800) {
    uVar3 = (ulonglong)
            ((*(uint *)(param_1 + 200 + (longlong)(int)(param_2 & 0x3f) * 4) &
             1 << ((byte)((int)param_2 >> 6) & 0x1f)) != 0);
  }
  else if ((param_2 < 0xd800) || ((0xdfff < (int)param_2 && ((int)param_2 < 0x10000)))) {
    iVar1 = (int)param_2 >> 0xc;
    uVar2 = *(uint *)(param_1 + 0x1c8 + (longlong)(int)((int)param_2 >> 6 & 0x3f) * 4) >>
            ((byte)iVar1 & 0x1f) & 0x10001;
    if (uVar2 < 2) {
      local_10 = (byte)uVar2;
      uVar3 = (ulonglong)local_10;
    }
    else {
      uVar3 = FUN_143b28bf0(param_1,param_2,*(undefined4 *)(param_1 + 0x2c8 + (longlong)iVar1 * 4),
                            *(undefined4 *)(param_1 + 0x2c8 + (longlong)(iVar1 + 1) * 4));
    }
  }
  else if (param_2 < 0x110000) {
    uVar3 = FUN_143b28bf0(param_1,param_2,*(undefined4 *)(param_1 + 0x2fc),
                          *(undefined4 *)(param_1 + 0x30c));
  }
  else {
    uVar3 = in_RAX & 0xffffffffffffff00;
  }
  return uVar3;
}



// FUNCTION 143b28bf0 FUN_143b28bf0 body=55 status=ok
// SIG undefined FUN_143b28bf0(void)

uint FUN_143b28bf0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = FUN_143b28c30(param_1,param_2,param_3,param_4);
  return uVar1 & 1;
}



// FUNCTION 143b28c30 FUN_143b28c30 body=180 status=ok
// SIG undefined FUN_143b28c30(void)

int FUN_143b28c30(longlong param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_res18;
  int local_res20;
  
  iVar3 = param_3;
  if (((*(int *)(*(longlong *)(param_1 + 0x310) + (longlong)param_3 * 4) <= param_2) &&
      (iVar3 = param_4, param_3 < param_4)) &&
     (iVar1 = param_3, local_res20 = param_4,
     param_2 < *(int *)(*(longlong *)(param_1 + 0x310) + (longlong)(param_4 + -1) * 4))) {
    while (local_res18 = iVar1, iVar2 = local_res18 + local_res20 >> 1, iVar3 = local_res20,
          iVar2 != local_res18) {
      iVar1 = iVar2;
      if (param_2 < *(int *)(*(longlong *)(param_1 + 0x310) + (longlong)iVar2 * 4)) {
        iVar1 = local_res18;
        local_res20 = iVar2;
      }
    }
  }
  return iVar3;
}



// FUNCTION 143b28cf0 FUN_143b28cf0 body=846 status=ok
// SIG undefined FUN_143b28cf0(void)

void FUN_143b28cf0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  
  local_20 = 0;
  do {
    local_28 = *(uint *)(*(longlong *)(param_1 + 0x310) + (longlong)local_20 * 4);
    iVar1 = local_20 + 1;
    if (iVar1 < *(int *)(param_1 + 0x318)) {
      local_24 = *(uint *)(*(longlong *)(param_1 + 0x310) + (longlong)iVar1 * 4);
      local_20 = local_20 + 2;
    }
    else {
      local_24 = 0x110000;
      local_20 = iVar1;
    }
    if (0x7f < (int)local_28) break;
    do {
      *(undefined1 *)(param_1 + 8 + (longlong)(int)local_28) = 1;
      local_28 = local_28 + 1;
      if ((int)local_24 <= (int)local_28) break;
    } while ((int)local_28 < 0x80);
  } while ((int)local_24 < 0x81);
  do {
    if (0x7ff < (int)local_28) {
LAB_143b28e65:
      local_1c = 0x800;
      while( true ) {
        if (0xffff < (int)local_28) {
          return;
        }
        if (0x10000 < (int)local_24) {
          local_24 = 0x10000;
        }
        if ((int)local_28 < (int)local_1c) {
          local_28 = local_1c;
        }
        if ((int)local_28 < (int)local_24) {
          if ((local_28 & 0x3f) != 0) {
            uVar2 = (int)local_28 >> 6;
            *(uint *)(param_1 + 0x1c8 + (longlong)(int)(uVar2 & 0x3f) * 4) =
                 *(uint *)(param_1 + 0x1c8 + (longlong)(int)(uVar2 & 0x3f) * 4) |
                 0x10001 << ((byte)((int)local_28 >> 0xc) & 0x1f);
            local_28 = (uVar2 + 1) * 0x40;
            local_1c = local_28;
          }
          if ((int)local_28 < (int)local_24) {
            uVar2 = (int)local_24 >> 6;
            if ((int)local_28 < (int)(local_24 & 0xffffffc0)) {
              FUN_143b29210(param_1 + 0x1c8,(int)local_28 >> 6,uVar2);
            }
            if ((local_24 & 0x3f) != 0) {
              *(uint *)(param_1 + 0x1c8 + (longlong)(int)(uVar2 & 0x3f) * 4) =
                   *(uint *)(param_1 + 0x1c8 + (longlong)(int)(uVar2 & 0x3f) * 4) |
                   0x10001 << ((byte)((int)local_24 >> 0xc) & 0x1f);
              local_24 = (uVar2 + 1) * 0x40;
              local_1c = local_24;
            }
          }
        }
        if (local_24 == 0x10000) break;
        local_28 = *(uint *)(*(longlong *)(param_1 + 0x310) + (longlong)local_20 * 4);
        iVar1 = local_20 + 1;
        if (iVar1 < *(int *)(param_1 + 0x318)) {
          local_24 = *(uint *)(*(longlong *)(param_1 + 0x310) + (longlong)iVar1 * 4);
          local_20 = local_20 + 2;
        }
        else {
          local_24 = 0x110000;
          local_20 = iVar1;
        }
      }
      return;
    }
    if ((int)local_24 < 0x801) {
      local_18 = local_24;
    }
    else {
      local_18 = 0x800;
    }
    FUN_143b29210(param_1 + 200,local_28,local_18);
    if (0x800 < (int)local_24) {
      local_28 = 0x800;
      goto LAB_143b28e65;
    }
    local_28 = *(uint *)(*(longlong *)(param_1 + 0x310) + (longlong)local_20 * 4);
    iVar1 = local_20 + 1;
    if (iVar1 < *(int *)(param_1 + 0x318)) {
      local_24 = *(uint *)(*(longlong *)(param_1 + 0x310) + (longlong)iVar1 * 4);
      local_20 = local_20 + 2;
    }
    else {
      local_24 = 0x110000;
      local_20 = iVar1;
    }
  } while( true );
}



// FUNCTION 143b29040 FUN_143b29040 body=453 status=ok
// SIG undefined FUN_143b29040(void)

void FUN_143b29040(longlong param_1)

{
  char cVar1;
  undefined4 local_18;
  
  cVar1 = FUN_143b28bf0(param_1,0xfffd,*(undefined4 *)(param_1 + 0x304),
                        *(undefined4 *)(param_1 + 0x308));
  if (cVar1 == '\0') {
    for (local_18 = 0x20; local_18 < 0x40; local_18 = local_18 + 1) {
      *(uint *)(param_1 + 0x1c8 + (longlong)local_18 * 4) =
           *(uint *)(param_1 + 0x1c8 + (longlong)local_18 * 4) & 0xdfffdfff;
    }
  }
  else {
    for (local_18 = 0x80; local_18 < 0xc0; local_18 = local_18 + 1) {
      *(undefined1 *)(param_1 + 8 + (longlong)local_18) = 1;
    }
    for (local_18 = 0; local_18 < 0x40; local_18 = local_18 + 1) {
      *(uint *)(param_1 + 200 + (longlong)local_18 * 4) =
           *(uint *)(param_1 + 200 + (longlong)local_18 * 4) | 3;
    }
    for (local_18 = 0; local_18 < 0x20; local_18 = local_18 + 1) {
      *(uint *)(param_1 + 0x1c8 + (longlong)local_18 * 4) =
           *(uint *)(param_1 + 0x1c8 + (longlong)local_18 * 4) | 1;
    }
    for (local_18 = 0x20; local_18 < 0x40; local_18 = local_18 + 1) {
      *(uint *)(param_1 + 0x1c8 + (longlong)local_18 * 4) =
           *(uint *)(param_1 + 0x1c8 + (longlong)local_18 * 4) & 0xdfffdfff | 0x2000;
    }
  }
  return;
}



// FUNCTION 143b29210 FUN_143b29210 body=516 status=ok
// SIG undefined FUN_143b29210(void)

void FUN_143b29210(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint local_38;
  uint local_34;
  int local_2c;
  int local_28;
  
  local_2c = (int)param_2 >> 6;
  local_38 = param_2 & 0x3f;
  uVar1 = 1 << ((byte)local_2c & 0x1f);
  if (param_2 + 1 == param_3) {
    *(uint *)(param_1 + (longlong)(int)local_38 * 4) =
         *(uint *)(param_1 + (longlong)(int)local_38 * 4) | uVar1;
  }
  else {
    local_28 = (int)param_3 >> 6;
    if (local_2c == local_28) {
      for (; (int)local_38 < (int)(param_3 & 0x3f); local_38 = local_38 + 1) {
        *(uint *)(param_1 + (longlong)(int)local_38 * 4) =
             *(uint *)(param_1 + (longlong)(int)local_38 * 4) | uVar1;
      }
    }
    else {
      if (local_38 != 0) {
        do {
          *(uint *)(param_1 + (longlong)(int)local_38 * 4) =
               *(uint *)(param_1 + (longlong)(int)local_38 * 4) | uVar1;
          local_38 = local_38 + 1;
        } while ((int)local_38 < 0x40);
        local_2c = local_2c + 1;
      }
      if (local_2c < local_28) {
        local_34 = ~((1 << ((byte)local_2c & 0x1f)) - 1U);
        if (local_28 < 0x20) {
          local_34 = local_34 & (1 << ((byte)local_28 & 0x1f)) - 1U;
        }
        for (local_38 = 0; (int)local_38 < 0x40; local_38 = local_38 + 1) {
          *(uint *)(param_1 + (longlong)(int)local_38 * 4) =
               *(uint *)(param_1 + (longlong)(int)local_38 * 4) | local_34;
        }
      }
      if (local_28 == 0x20) {
        local_28 = 0x1f;
      }
      for (local_38 = 0; (int)local_38 < (int)(param_3 & 0x3f); local_38 = local_38 + 1) {
        *(uint *)(param_1 + (longlong)(int)local_38 * 4) =
             *(uint *)(param_1 + (longlong)(int)local_38 * 4) | 1 << ((byte)local_28 & 0x1f);
      }
    }
  }
  return;
}



// FUNCTION 143b29420 FUN_143b29420 body=1186 status=ok
// SIG undefined FUN_143b29420(void)

ushort * FUN_143b29420(longlong param_1,ushort *param_2,ushort *param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ushort *local_res10;
  
  local_res10 = param_2;
  if (param_4 == 0) {
    do {
      uVar1 = *local_res10;
      if (uVar1 < 0x80) {
        cVar3 = *(char *)(param_1 + 8 + (ulonglong)uVar1);
        goto joined_r0x000143b29797;
      }
      if (uVar1 < 0x800) {
        uVar4 = *(uint *)(param_1 + 200 + (longlong)(int)(uVar1 & 0x3f) * 4) &
                1 << ((byte)((int)(uint)uVar1 >> 6) & 0x1f);
joined_r0x000143b29753:
        if (uVar4 != 0) {
          return local_res10;
        }
      }
      else {
        if ((uVar1 < 0xd800) || (0xdfff < uVar1)) {
          iVar5 = (int)(uint)uVar1 >> 0xc;
          uVar4 = *(uint *)(param_1 + 0x1c8 + (longlong)(int)((int)(uint)uVar1 >> 6 & 0x3f) * 4) >>
                  (sbyte)iVar5 & 0x10001;
          if (1 < uVar4) {
            cVar3 = FUN_143b28bf0(param_1,uVar1,
                                  *(undefined4 *)(param_1 + 0x2c8 + (longlong)iVar5 * 4),
                                  *(undefined4 *)(param_1 + 0x2c8 + (longlong)(iVar5 + 1) * 4));
            goto joined_r0x000143b29797;
          }
          goto joined_r0x000143b29753;
        }
        if ((((uVar1 < 0xdc00) && (local_res10 + 1 != param_3)) &&
            (uVar2 = local_res10[1], 0xdbff < uVar2)) && (uVar2 < 0xe000)) {
          cVar3 = FUN_143b28bf0(param_1,(uint)uVar1 * 0x400 + -0x35fdc00 + (uint)uVar2,
                                *(undefined4 *)(param_1 + 0x308),*(undefined4 *)(param_1 + 0x30c));
          if (cVar3 != '\0') {
            return local_res10;
          }
          local_res10 = local_res10 + 1;
        }
        else {
          cVar3 = FUN_143b28bf0(param_1,uVar1,*(undefined4 *)(param_1 + 0x2fc),
                                *(undefined4 *)(param_1 + 0x300));
joined_r0x000143b29797:
          if (cVar3 != '\0') {
            return local_res10;
          }
        }
      }
      local_res10 = local_res10 + 1;
    } while (local_res10 < param_3);
  }
  else {
    do {
      uVar1 = *local_res10;
      if (uVar1 < 0x80) {
        cVar3 = *(char *)(param_1 + 8 + (ulonglong)uVar1);
        goto joined_r0x000143b2955a;
      }
      if (uVar1 < 0x800) {
        uVar4 = *(uint *)(param_1 + 200 + (longlong)(int)(uVar1 & 0x3f) * 4) &
                1 << ((byte)((int)(uint)uVar1 >> 6) & 0x1f);
joined_r0x000143b29516:
        if (uVar4 == 0) {
          return local_res10;
        }
      }
      else {
        if ((uVar1 < 0xd800) || (0xdfff < uVar1)) {
          iVar5 = (int)(uint)uVar1 >> 0xc;
          uVar4 = *(uint *)(param_1 + 0x1c8 + (longlong)(int)((int)(uint)uVar1 >> 6 & 0x3f) * 4) >>
                  (sbyte)iVar5 & 0x10001;
          if (1 < uVar4) {
            cVar3 = FUN_143b28bf0(param_1,uVar1,
                                  *(undefined4 *)(param_1 + 0x2c8 + (longlong)iVar5 * 4),
                                  *(undefined4 *)(param_1 + 0x2c8 + (longlong)(iVar5 + 1) * 4));
            goto joined_r0x000143b2955a;
          }
          goto joined_r0x000143b29516;
        }
        if (((uVar1 < 0xdc00) && (local_res10 + 1 != param_3)) &&
           ((uVar2 = local_res10[1], 0xdbff < uVar2 && (uVar2 < 0xe000)))) {
          cVar3 = FUN_143b28bf0(param_1,(uint)uVar1 * 0x400 + -0x35fdc00 + (uint)uVar2,
                                *(undefined4 *)(param_1 + 0x308),*(undefined4 *)(param_1 + 0x30c));
          if (cVar3 == '\0') {
            return local_res10;
          }
          local_res10 = local_res10 + 1;
        }
        else {
          cVar3 = FUN_143b28bf0(param_1,uVar1,*(undefined4 *)(param_1 + 0x2fc),
                                *(undefined4 *)(param_1 + 0x300));
joined_r0x000143b2955a:
          if (cVar3 == '\0') {
            return local_res10;
          }
        }
      }
      local_res10 = local_res10 + 1;
    } while (local_res10 < param_3);
  }
  return local_res10;
}



// FUNCTION 143b298d0 FUN_143b298d0 body=1180 status=ok
// SIG undefined FUN_143b298d0(void)

ushort * FUN_143b298d0(longlong param_1,ushort *param_2,ushort *param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  ushort *local_res18;
  
  local_res18 = param_3;
  if (param_4 == 0) {
    do {
      puVar6 = local_res18 + -1;
      uVar1 = *puVar6;
      if (uVar1 < 0x80) {
        cVar3 = *(char *)(param_1 + 8 + (ulonglong)uVar1);
        goto joined_r0x000143b29c53;
      }
      if (uVar1 < 0x800) {
        uVar4 = *(uint *)(param_1 + 200 + (longlong)(int)(uVar1 & 0x3f) * 4) &
                1 << ((byte)((int)(uint)uVar1 >> 6) & 0x1f);
joined_r0x000143b29c0f:
        local_res18 = puVar6;
        if (uVar4 != 0) goto LAB_143b29d5e;
      }
      else {
        if ((uVar1 < 0xd800) || (0xdfff < uVar1)) {
          iVar5 = (int)(uint)uVar1 >> 0xc;
          uVar4 = *(uint *)(param_1 + 0x1c8 + (longlong)(int)((int)(uint)uVar1 >> 6 & 0x3f) * 4) >>
                  (sbyte)iVar5 & 0x10001;
          if (1 < uVar4) {
            cVar3 = FUN_143b28bf0(param_1,uVar1,
                                  *(undefined4 *)(param_1 + 0x2c8 + (longlong)iVar5 * 4),
                                  *(undefined4 *)(param_1 + 0x2c8 + (longlong)(iVar5 + 1) * 4));
            goto joined_r0x000143b29c53;
          }
          goto joined_r0x000143b29c0f;
        }
        if ((((uVar1 < 0xdc00) || (param_2 == puVar6)) || (uVar2 = local_res18[-2], uVar2 < 0xd800))
           || (0xdbff < uVar2)) {
          cVar3 = FUN_143b28bf0(param_1,uVar1,*(undefined4 *)(param_1 + 0x2fc),
                                *(undefined4 *)(param_1 + 0x300));
joined_r0x000143b29c53:
          local_res18 = puVar6;
          if (cVar3 != '\0') goto LAB_143b29d5e;
        }
        else {
          cVar3 = FUN_143b28bf0(param_1,(uint)uVar2 * 0x400 + -0x35fdc00 + (uint)uVar1,
                                *(undefined4 *)(param_1 + 0x308),*(undefined4 *)(param_1 + 0x30c));
          if (cVar3 != '\0') goto LAB_143b29d5e;
          local_res18 = local_res18 + -2;
        }
      }
    } while (param_2 != local_res18);
  }
  else {
    do {
      puVar6 = local_res18 + -1;
      uVar1 = *puVar6;
      if (uVar1 < 0x80) {
        cVar3 = *(char *)(param_1 + 8 + (ulonglong)uVar1);
        goto joined_r0x000143b29929;
      }
      if (uVar1 < 0x800) {
        uVar4 = *(uint *)(param_1 + 200 + (longlong)(int)(uVar1 & 0x3f) * 4) &
                1 << ((byte)((int)(uint)uVar1 >> 6) & 0x1f);
joined_r0x000143b2996c:
        local_res18 = puVar6;
        if (uVar4 == 0) goto LAB_143b29d5e;
      }
      else {
        if ((uVar1 < 0xd800) || (0xdfff < uVar1)) {
          iVar5 = (int)(uint)uVar1 >> 0xc;
          uVar4 = *(uint *)(param_1 + 0x1c8 + (longlong)(int)((int)(uint)uVar1 >> 6 & 0x3f) * 4) >>
                  (sbyte)iVar5 & 0x10001;
          if (uVar4 < 2) goto joined_r0x000143b2996c;
          cVar3 = FUN_143b28bf0(param_1,uVar1,*(undefined4 *)(param_1 + 0x2c8 + (longlong)iVar5 * 4)
                                ,*(undefined4 *)(param_1 + 0x2c8 + (longlong)(iVar5 + 1) * 4));
        }
        else {
          if (((0xdbff < uVar1) && (param_2 != puVar6)) &&
             ((uVar2 = local_res18[-2], 0xd7ff < uVar2 && (uVar2 < 0xdc00)))) {
            cVar3 = FUN_143b28bf0(param_1,(uint)uVar2 * 0x400 + -0x35fdc00 + (uint)uVar1,
                                  *(undefined4 *)(param_1 + 0x308),*(undefined4 *)(param_1 + 0x30c))
            ;
            if (cVar3 != '\0') {
              local_res18 = local_res18 + -2;
              goto LAB_143b29b0e;
            }
LAB_143b29d5e:
            local_res18 = puVar6;
            return local_res18 + 1;
          }
          cVar3 = FUN_143b28bf0(param_1,uVar1,*(undefined4 *)(param_1 + 0x2fc),
                                *(undefined4 *)(param_1 + 0x300));
        }
joined_r0x000143b29929:
        local_res18 = puVar6;
        if (cVar3 == '\0') goto LAB_143b29d5e;
      }
LAB_143b29b0e:
    } while (param_2 != local_res18);
  }
  return param_2;
}



// FUNCTION 143b29d70 FUN_143b29d70 body=649 status=ok
// SIG undefined FUN_143b29d70(void)

int FUN_143b29d70(longlong param_1,longlong param_2,int param_3,uint param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int local_res18 [2];
  uint local_res20;
  byte local_28;
  uint local_18;
  
  local_res18[0] = param_3;
  local_res20 = param_4;
  if (param_4 != 0) {
    local_res20 = 1;
  }
  do {
    local_res18[0] = local_res18[0] + -1;
    local_28 = *(byte *)(param_2 + local_res18[0]);
    if (-1 < (char)local_28) {
      if (local_res20 == 0) {
        do {
          if (*(char *)(param_1 + 8 + (ulonglong)local_28) != '\0') {
            return local_res18[0] + 1;
          }
          if (local_res18[0] == 0) {
            return 0;
          }
          local_res18[0] = local_res18[0] + -1;
          local_28 = *(byte *)(param_2 + local_res18[0]);
        } while (-1 < (char)local_28);
      }
      else {
        do {
          if (*(char *)(param_1 + 8 + (ulonglong)local_28) == '\0') {
            return local_res18[0] + 1;
          }
          if (local_res18[0] == 0) {
            return 0;
          }
          local_res18[0] = local_res18[0] + -1;
          local_28 = *(byte *)(param_2 + local_res18[0]);
        } while (-1 < (char)local_28);
      }
    }
    iVar1 = local_res18[0];
    uVar3 = FUN_143ab9a30(param_2,0,local_res18,local_28,0xfd);
    if ((int)uVar3 < 0x800) {
      local_18 = (uint)((*(uint *)(param_1 + 200 + (longlong)(int)(uVar3 & 0x3f) * 4) &
                        1 << ((byte)((int)uVar3 >> 6) & 0x1f)) != 0);
      if (local_18 != local_res20) {
        return iVar1 + 1;
      }
    }
    else if ((int)uVar3 < 0x10000) {
      iVar4 = (int)uVar3 >> 0xc;
      uVar5 = *(uint *)(param_1 + 0x1c8 + (longlong)(int)((int)uVar3 >> 6 & 0x3f) * 4) >>
              ((byte)iVar4 & 0x1f) & 0x10001;
      if (uVar5 < 2) {
        if (uVar5 != local_res20) {
          return iVar1 + 1;
        }
      }
      else {
        cVar2 = FUN_143b28bf0(param_1,uVar3,*(undefined4 *)(param_1 + 0x2c8 + (longlong)iVar4 * 4),
                              *(undefined4 *)(param_1 + 0x2c8 + (longlong)(iVar4 + 1) * 4));
        if ((int)cVar2 != local_res20) {
          return iVar1 + 1;
        }
      }
    }
    else {
      cVar2 = FUN_143b28bf0(param_1,uVar3,*(undefined4 *)(param_1 + 0x308),
                            *(undefined4 *)(param_1 + 0x30c));
      if ((int)cVar2 != local_res20) {
        return iVar1 + 1;
      }
    }
  } while (0 < local_res18[0]);
  return 0;
}



// FUNCTION 143b2a000 FUN_143b2a000 body=1623 status=ok
// SIG undefined FUN_143b2a000(void)

byte * FUN_143b2a000(longlong param_1,byte *param_2,int param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  byte *local_res10;
  int local_res18;
  uint local_res20;
  byte local_38;
  char local_35;
  byte *local_30;
  byte *local_20;
  uint local_18;
  
  local_20 = param_2 + param_3;
  local_38 = *param_2;
  local_res10 = param_2;
  local_res18 = param_3;
  if (-1 < (char)local_38) {
    if (param_4 == 0) {
      do {
        if (*(char *)(param_1 + 8 + (ulonglong)local_38) != '\0') {
          return local_res10;
        }
        local_res10 = local_res10 + 1;
        if (local_res10 == local_20) {
          return local_res10;
        }
        local_38 = *local_res10;
      } while (-1 < (char)local_38);
    }
    else {
      do {
        if (*(char *)(param_1 + 8 + (ulonglong)local_38) == '\0') {
          return local_res10;
        }
        local_res10 = local_res10 + 1;
        if (local_res10 == local_20) {
          return local_res10;
        }
        local_38 = *local_res10;
      } while (-1 < (char)local_38);
    }
    local_res18 = (int)local_20 - (int)local_res10;
  }
  local_res20 = param_4;
  if (param_4 != 0) {
    local_res20 = 1;
  }
  local_38 = local_20[-1];
  pbVar4 = local_res10;
  local_30 = local_20;
  if ((char)local_38 < '\0') {
    if (local_38 < 0xc0) {
      if ((local_res18 < 2) || (local_38 = local_20[-2], local_38 < 0xe0)) {
        if ((local_38 < 0xc0) &&
           ((((0x7f < local_38 && (2 < local_res18)) && (0xef < local_20[-3])) &&
            (local_30 = local_20 + -3, (int)*(char *)(param_1 + 0x88) != local_res20)))) {
          local_20 = local_30;
        }
      }
      else {
        local_30 = local_20 + -2;
        if ((int)*(char *)(param_1 + 0x88) != local_res20) {
          local_20 = local_30;
        }
      }
    }
    else {
      local_30 = local_20 + -1;
      if ((int)*(char *)(param_1 + 0x88) != local_res20) {
        local_20 = local_30;
      }
    }
  }
LAB_143b2a233:
  do {
    local_res10 = pbVar4;
    if (local_30 <= local_res10) {
      return local_20;
    }
    local_38 = *local_res10;
    if (local_38 < 0xc0) {
      if (local_res20 == 0) {
        do {
          if (*(char *)(param_1 + 8 + (ulonglong)local_38) != '\0') {
            return local_res10;
          }
          local_res10 = local_res10 + 1;
          if (local_res10 == local_30) {
            return local_20;
          }
          local_38 = *local_res10;
        } while (local_38 < 0xc0);
      }
      else {
        do {
          if (*(char *)(param_1 + 8 + (ulonglong)local_38) == '\0') {
            return local_res10;
          }
          local_res10 = local_res10 + 1;
          if (local_res10 == local_30) {
            return local_20;
          }
          local_38 = *local_res10;
        } while (local_38 < 0xc0);
      }
    }
    pbVar4 = local_res10 + 1;
    if (local_38 < 0xe0) {
      if ((byte)(*pbVar4 + 0x80) < 0x40) {
        local_18 = (uint)((*(uint *)(param_1 + 200 + (ulonglong)(byte)(*pbVar4 + 0x80) * 4) &
                          1 << (local_38 & 0x1f)) != 0);
        if (local_18 != local_res20) {
          return local_res10;
        }
        pbVar4 = local_res10 + 2;
        goto LAB_143b2a233;
      }
    }
    else if (local_38 < 0xf0) {
      bVar1 = *pbVar4 + 0x80;
      if ((bVar1 < 0x40) && ((byte)(local_res10[2] + 0x80) < 0x40)) {
        local_38 = local_38 & 0xf;
        uVar3 = *(uint *)(param_1 + 0x1c8 + (ulonglong)bVar1 * 4) >> local_38 & 0x10001;
        if (1 < uVar3) {
          cVar2 = FUN_143b28bf0(param_1,(uint)local_38 << 0xc | (uint)bVar1 << 6 |
                                        (uint)(byte)(local_res10[2] + 0x80),
                                *(undefined4 *)(param_1 + 0x2c8 + (ulonglong)local_38 * 4),
                                *(undefined4 *)(param_1 + 0x2c8 + (longlong)(int)(local_38 + 1) * 4)
                               );
          uVar3 = (uint)cVar2;
        }
        if (uVar3 != local_res20) {
          return local_res10;
        }
        pbVar4 = local_res10 + 3;
        goto LAB_143b2a233;
      }
    }
    else if ((((byte)(*pbVar4 + 0x80) < 0x40) && ((byte)(local_res10[2] + 0x80) < 0x40)) &&
            ((byte)(local_res10[3] + 0x80) < 0x40)) {
      uVar3 = (local_38 - 0xf0) * 0x40000 | (uint)(byte)(*pbVar4 + 0x80) << 0xc |
              (uint)(byte)(local_res10[2] + 0x80) << 6 | (uint)(byte)(local_res10[3] + 0x80);
      if (((int)uVar3 < 0x10000) || (0x10ffff < (int)uVar3)) {
        local_35 = *(char *)(param_1 + 0x88);
      }
      else {
        local_35 = FUN_143b28bf0(param_1,uVar3,*(undefined4 *)(param_1 + 0x308),
                                 *(undefined4 *)(param_1 + 0x30c));
      }
      if ((int)local_35 != local_res20) {
        return local_res10;
      }
      pbVar4 = local_res10 + 4;
      goto LAB_143b2a233;
    }
    if ((int)*(char *)(param_1 + 0x88) != local_res20) {
      return local_res10;
    }
  } while( true );
}



// FUNCTION 143b2a660 FUN_143b2a660 body=64 status=ok
// SIG undefined FUN_143b2a660(void)

longlong * FUN_143b2a660(longlong *param_1)

{
  *param_1 = (longlong)param_1 + 0x14;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 143b2a6a0 FUN_143b2a6a0 body=490 status=ok
// SIG undefined FUN_143b2a6a0(void)

longlong FUN_143b2a6a0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_143b11bb0(param_1,param_2);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = param_3;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined1 *)(param_1 + 0x8c) = 1;
  if (*(longlong *)(param_2 + 0x58) == param_2) {
    *(longlong *)(param_1 + 0x58) = param_1;
  }
  else {
    uVar3 = (**(code **)(**(longlong **)(param_2 + 0x58) + 0x10))(*(undefined8 *)(param_2 + 0x58));
    *(undefined8 *)(param_1 + 0x58) = uVar3;
  }
  iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(*(undefined8 *)(param_1 + 0x60));
  iVar1 = *(int *)(param_1 + 0x80) + iVar2 * 8;
  if (iVar1 < 0x81) {
    *(longlong *)(param_1 + 0x68) = param_1 + 0x90;
  }
  else {
    uVar3 = FUN_143aa7a40((longlong)iVar1);
    *(undefined8 *)(param_1 + 0x68) = uVar3;
    if (*(longlong *)(param_1 + 0x68) == 0) {
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x84) = 0;
      return param_1;
    }
  }
  *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x68) + (longlong)iVar2 * 4;
  *(longlong *)(param_1 + 0x78) = (longlong)(iVar2 << 2) + *(longlong *)(param_1 + 0x70);
  _guard_xfg_dispatch_icall_nop
            (*(void **)(param_1 + 0x68),*(void **)(param_2 + 0x68),(longlong)iVar1);
  return param_1;
}



// FUNCTION 143b2a890 FUN_143b2a890 body=2752 status=ok
// SIG undefined FUN_143b2a890(void)

longlong * FUN_143b2a890(longlong *param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ushort *puVar10;
  longlong lVar11;
  int local_b8;
  uint local_a4;
  int local_a0;
  int local_84;
  longlong local_70;
  longlong local_60;
  longlong local_50;
  
  FUN_143b11d30(param_1,0,0x10ffff);
  param_1[0xb] = 0;
  param_1[0xc] = param_3;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(bool *)((longlong)param_1 + 0x8c) = param_4 == 0x3f;
  (**(code **)(*param_1 + 0x78))(param_1,param_2);
  if ((param_4 & 1) != 0) {
    param_1[0xb] = (longlong)param_1;
  }
  iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_1[0xc]);
  bVar1 = false;
  for (local_b8 = 0; local_b8 < iVar3; local_b8 = local_b8 + 1) {
    uVar8 = FUN_143b09610(param_1[0xc],local_b8);
    uVar9 = FUN_143a8fe10(uVar8);
    iVar4 = FUN_143a904f0(uVar8);
    iVar5 = FUN_143b15fb0(param_1,uVar9,iVar4,1);
    if (iVar5 < iVar4) {
      bVar1 = true;
    }
    if (((param_4 & 8) != 0) && (*(int *)((longlong)param_1 + 0x84) < iVar4)) {
      *(int *)((longlong)param_1 + 0x84) = iVar4;
    }
    if (((param_4 & 4) != 0) && ((iVar5 < iVar4 || ((param_4 & 2) != 0)))) {
      iVar4 = FUN_143b2b610(uVar9,iVar4);
      *(int *)(param_1 + 0x10) = (int)param_1[0x10] + iVar4;
      if ((int)param_1[0x11] < iVar4) {
        *(int *)(param_1 + 0x11) = iVar4;
      }
    }
  }
  if (bVar1) {
    if (*(char *)((longlong)param_1 + 0x8c) != '\0') {
      FUN_143b149a0(param_1);
    }
    if (*(char *)((longlong)param_1 + 0x8c) == '\0') {
      local_84 = iVar3;
      if ((param_4 & 4) != 0) {
        local_84 = (int)param_1[0x10] + iVar3 * 5;
      }
    }
    else {
      local_84 = (int)param_1[0x10] + iVar3 * 8;
    }
    if (local_84 < 0x81) {
      param_1[0xd] = (longlong)(param_1 + 0x12);
    }
    else {
      lVar11 = FUN_143aa7a40((longlong)local_84);
      param_1[0xd] = lVar11;
      if (param_1[0xd] == 0) {
        *(undefined4 *)(param_1 + 0x11) = 0;
        *(undefined4 *)((longlong)param_1 + 0x84) = 0;
        return param_1;
      }
    }
    if (*(char *)((longlong)param_1 + 0x8c) == '\0') {
      if ((param_4 & 4) == 0) {
        param_1[0xe] = param_1[0xd];
      }
      else {
        param_1[0xe] = param_1[0xd] + (longlong)iVar3 * 4;
        param_1[0xf] = (longlong)iVar3 + param_1[0xe];
      }
      local_70 = param_1[0xe];
      local_60 = local_70;
      local_50 = local_70;
    }
    else {
      param_1[0xe] = param_1[0xd] + (longlong)iVar3 * 4;
      local_50 = (longlong)iVar3 + param_1[0xe];
      local_70 = local_50 + iVar3;
      local_60 = local_70 + iVar3;
      param_1[0xf] = local_60 + iVar3;
    }
    local_a0 = 0;
    for (local_b8 = 0; local_b8 < iVar3; local_b8 = local_b8 + 1) {
      uVar8 = FUN_143b09610(param_1[0xc],local_b8);
      puVar10 = (ushort *)FUN_143a8fe10(uVar8);
      iVar4 = FUN_143a904f0(uVar8);
      iVar5 = FUN_143b15fb0(param_1,puVar10,iVar4,1);
      if (iVar5 < iVar4) {
        if ((param_4 & 8) != 0) {
          if ((param_4 & 2) == 0) {
            *(undefined1 *)(local_50 + local_b8) = 0;
            *(undefined1 *)(param_1[0xe] + (longlong)local_b8) = 0;
          }
          else {
            if ((param_4 & 0x20) != 0) {
              uVar2 = FUN_143b2b6b0(iVar5);
              *(undefined1 *)(param_1[0xe] + (longlong)local_b8) = uVar2;
            }
            if ((param_4 & 0x10) != 0) {
              iVar5 = FUN_143b16280(param_1,puVar10,iVar4,1);
              uVar2 = FUN_143b2b6b0(iVar4 - iVar5);
              *(undefined1 *)(local_50 + local_b8) = uVar2;
            }
          }
        }
        if ((param_4 & 4) != 0) {
          lVar11 = (longlong)local_a0 + param_1[0xf];
          iVar5 = FUN_143b2b550(puVar10,iVar4,lVar11,(int)param_1[0x10] - local_a0);
          *(int *)(param_1[0xd] + (longlong)local_b8 * 4) = iVar5;
          local_a0 = local_a0 + iVar5;
          if (iVar5 == 0) {
            *(undefined1 *)(local_60 + local_b8) = 0xff;
            *(undefined1 *)(local_70 + local_b8) = 0xff;
          }
          else if ((param_4 & 2) == 0) {
            *(undefined1 *)(local_60 + local_b8) = 0;
            *(undefined1 *)(local_70 + local_b8) = 0;
          }
          else {
            if ((param_4 & 0x20) != 0) {
              uVar6 = FUN_143b167e0(param_1,lVar11,iVar5,1);
              uVar2 = FUN_143b2b6b0(uVar6);
              *(undefined1 *)(local_70 + local_b8) = uVar2;
            }
            if ((param_4 & 0x10) != 0) {
              iVar7 = FUN_143b16550(param_1,lVar11,iVar5,1);
              uVar2 = FUN_143b2b6b0(iVar5 - iVar7);
              *(undefined1 *)(local_60 + local_b8) = uVar2;
            }
          }
        }
        if ((param_4 & 1) != 0) {
          if ((param_4 & 0x20) != 0) {
            local_a4 = (uint)*puVar10;
            if ((((local_a4 & 0xfffffc00) == 0xd800) && (iVar4 != 1)) &&
               ((puVar10[1] & 0xfc00) == 0xdc00)) {
              local_a4 = local_a4 * 0x400 + -0x35fdc00 + (uint)puVar10[1];
            }
            FUN_143b2b4b0(param_1,local_a4);
          }
          if ((param_4 & 0x10) != 0) {
            local_a4 = (uint)puVar10[iVar4 + -1];
            if ((((local_a4 & 0xfffffc00) == 0xdc00) && (0 < iVar4 + -1)) &&
               ((puVar10[iVar4 + -2] & 0xfc00) == 0xd800)) {
              local_a4 = (uint)puVar10[iVar4 + -2] * 0x400 + -0x35fdc00 + local_a4;
            }
            FUN_143b2b4b0(param_1,local_a4);
          }
        }
      }
      else {
        if ((param_4 & 4) != 0) {
          if ((param_4 & 2) == 0) {
            *(undefined4 *)(param_1[0xd] + (longlong)local_b8 * 4) = 0;
          }
          else {
            iVar4 = FUN_143b2b550(puVar10,iVar4,(longlong)local_a0 + param_1[0xf],
                                  (int)param_1[0x10] - local_a0);
            *(int *)(param_1[0xd] + (longlong)local_b8 * 4) = iVar4;
            local_a0 = local_a0 + iVar4;
          }
        }
        if (*(char *)((longlong)param_1 + 0x8c) == '\0') {
          *(undefined1 *)(param_1[0xe] + (longlong)local_b8) = 0xff;
        }
        else {
          *(undefined1 *)(local_60 + local_b8) = 0xff;
          *(undefined1 *)(local_70 + local_b8) = 0xff;
          *(undefined1 *)(local_50 + local_b8) = 0xff;
          *(undefined1 *)(param_1[0xe] + (longlong)local_b8) = 0xff;
        }
      }
    }
    if (*(char *)((longlong)param_1 + 0x8c) != '\0') {
      FUN_143b149a0(param_1[0xb]);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x11) = 0;
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  return param_1;
}



// FUNCTION 143b2b350 FUN_143b2b350 body=46 status=ok
// SIG undefined FUN_143b2b350(void)

void FUN_143b2b350(longlong *param_1)

{
  if (*param_1 != (longlong)param_1 + 0x14) {
    FUN_143aa79f0(*param_1);
  }
  return;
}



// FUNCTION 143b2b380 FUN_143b2b380 body=183 status=ok
// SIG undefined FUN_143b2b380(void)

void FUN_143b2b380(longlong param_1)

{
  undefined8 *puVar1;
  
  if (((*(longlong *)(param_1 + 0x58) != 0) && (*(longlong *)(param_1 + 0x58) != param_1)) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x58), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((*(longlong *)(param_1 + 0x68) != 0) && (*(longlong *)(param_1 + 0x68) != param_1 + 0x90)) {
    FUN_143aa79f0(*(undefined8 *)(param_1 + 0x68));
  }
  FUN_143b11ff0(param_1);
  return;
}



// FUNCTION 143b2b440 FUN_143b2b440 body=98 status=ok
// SIG undefined FUN_143b2b440(void)

void FUN_143b2b440(longlong *param_1,int param_2)

{
  int local_18;
  
  local_18 = (int)param_1[2] + param_2;
  if ((int)param_1[1] <= local_18) {
    local_18 = local_18 - (int)param_1[1];
  }
  *(undefined1 *)(*param_1 + (longlong)local_18) = 1;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 143b2b4b0 FUN_143b2b4b0 body=148 status=ok
// SIG undefined FUN_143b2b4b0(void)

void FUN_143b2b4b0(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  
  if ((param_1[0xb] == 0) || ((longlong *)param_1[0xb] == param_1)) {
    cVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2);
    if (cVar1 != '\0') {
      return;
    }
    lVar2 = FUN_143b13df0(param_1);
    if (lVar2 == 0) {
      return;
    }
    param_1[0xb] = lVar2;
  }
  FUN_143b13590(param_1[0xb],param_2);
  return;
}



// FUNCTION 143b2b550 FUN_143b2b550 body=110 status=ok
// SIG undefined FUN_143b2b550(void)

undefined4
FUN_143b2b550(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 local_18;
  undefined4 local_14 [5];
  
  local_18 = 0;
  local_14[0] = 0;
  FUN_143ab8050(param_3,param_4,local_14,param_1,param_2,&local_18);
  cVar1 = FUN_143a8b110(local_18);
  if (cVar1 == '\0') {
    local_14[0] = 0;
  }
  return local_14[0];
}



// FUNCTION 143b2b5c0 FUN_143b2b5c0 body=80 status=ok
// SIG undefined FUN_143b2b5c0(void)

undefined1 FUN_143b2b5c0(longlong *param_1,int param_2)

{
  int local_18;
  
  local_18 = (int)param_1[2] + param_2;
  if ((int)param_1[1] <= local_18) {
    local_18 = local_18 - (int)param_1[1];
  }
  return *(undefined1 *)(*param_1 + (longlong)local_18);
}



// FUNCTION 143b2b610 FUN_143b2b610 body=102 status=ok
// SIG undefined FUN_143b2b610(void)

undefined4 FUN_143b2b610(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  int local_18;
  undefined4 local_14 [5];
  
  local_18 = 0;
  local_14[0] = 0;
  FUN_143ab8050(0,0,local_14,param_1,param_2,&local_18);
  cVar1 = FUN_143a8b110(local_18);
  if ((cVar1 == '\0') && (local_18 != 0xf)) {
    local_14[0] = 0;
  }
  return local_14[0];
}



// FUNCTION 143b2b680 FUN_143b2b680 body=39 status=ok
// SIG undefined FUN_143b2b680(void)

bool FUN_143b2b680(longlong param_1)

{
  return *(int *)(param_1 + 0xc) == 0;
}



// FUNCTION 143b2b6b0 FUN_143b2b6b0 body=41 status=ok
// SIG undefined FUN_143b2b6b0(void)

undefined1 FUN_143b2b6b0(int param_1)

{
  undefined1 local_res8;
  undefined1 local_18;
  
  if (param_1 < 0xfe) {
    local_res8 = (undefined1)param_1;
    local_18 = local_res8;
  }
  else {
    local_18 = 0xfe;
  }
  return local_18;
}



// FUNCTION 143b2b6e0 FUN_143b2b6e0 body=107 status=ok
// SIG undefined FUN_143b2b6e0(void)

longlong FUN_143b2b6e0(short *param_1,short *param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short *local_res8;
  short *local_res10;
  int local_res18;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  do {
    sVar1 = *local_res8;
    sVar2 = *local_res10;
    local_res10 = local_res10 + 1;
    local_res8 = local_res8 + 1;
    if (sVar1 != sVar2) {
      return (ulonglong)(byte)((ushort)sVar2 >> 8) << 8;
    }
    local_res18 = local_res18 + -1;
  } while (0 < local_res18);
  return CONCAT71((uint7)(uint3)((uint)local_res18 >> 8),1);
}



// FUNCTION 143b2b750 FUN_143b2b750 body=243 status=ok
// SIG undefined FUN_143b2b750(void)

undefined1 FUN_143b2b750(longlong param_1,int param_2,int param_3,undefined8 param_4,int param_5)

{
  ushort *puVar1;
  char cVar2;
  undefined1 local_18;
  
  puVar1 = (ushort *)(param_1 + (longlong)param_2 * 2);
  cVar2 = FUN_143b2b6e0(puVar1,param_4,param_5);
  if (((cVar2 == '\0') ||
      (((0 < param_2 && ((puVar1[-1] & 0xfc00) == 0xd800)) && ((*puVar1 & 0xfc00) == 0xdc00)))) ||
     (((param_5 < param_3 - param_2 && ((puVar1[param_5 + -1] & 0xfc00) == 0xd800)) &&
      ((puVar1[param_5] & 0xfc00) == 0xdc00)))) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143b2b850 FUN_143b2b850 body=105 status=ok
// SIG undefined FUN_143b2b850(void)

undefined8 FUN_143b2b850(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char *local_res8;
  char *local_res10;
  int local_res18;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  do {
    cVar1 = *local_res8;
    cVar2 = *local_res10;
    local_res10 = local_res10 + 1;
    local_res8 = local_res8 + 1;
    if (cVar1 != cVar2) {
      return 0;
    }
    local_res18 = local_res18 + -1;
  } while (0 < local_res18);
  return CONCAT71((uint7)(uint3)((uint)local_res18 >> 8),1);
}



// FUNCTION 143b2b8c0 FUN_143b2b8c0 body=261 status=ok
// SIG undefined FUN_143b2b8c0(void)

int FUN_143b2b8c0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int local_18;
  
  local_18 = (int)param_1[2];
  do {
    local_18 = local_18 + 1;
    if ((int)param_1[1] <= local_18) {
      lVar1 = param_1[2];
      lVar2 = param_1[1];
      for (local_18 = 0; *(char *)(*param_1 + (longlong)local_18) == '\0'; local_18 = local_18 + 1)
      {
      }
      *(undefined1 *)(*param_1 + (longlong)local_18) = 0;
      *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + -1;
      *(int *)(param_1 + 2) = local_18;
      return ((int)lVar2 - (int)lVar1) + local_18;
    }
  } while (*(char *)(*param_1 + (longlong)local_18) == '\0');
  *(undefined1 *)(*param_1 + (longlong)local_18) = 0;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + -1;
  lVar1 = param_1[2];
  *(int *)(param_1 + 2) = local_18;
  return local_18 - (int)lVar1;
}



// FUNCTION 143b2b9d0 FUN_143b2b9d0 body=117 status=ok
// SIG undefined FUN_143b2b9d0(void)

void FUN_143b2b9d0(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0x11) {
    *(undefined4 *)(param_1 + 1) = 0x10;
  }
  else {
    lVar1 = FUN_143aa7a40((longlong)param_2);
    if (lVar1 != 0) {
      *param_1 = lVar1;
      *(int *)(param_1 + 1) = param_2;
    }
  }
  _guard_xfg_dispatch_icall_nop((void *)*param_1,0,(longlong)(int)param_1[1]);
  return;
}



// FUNCTION 143b2ba50 FUN_143b2ba50 body=129 status=ok
// SIG undefined FUN_143b2ba50(void)

void FUN_143b2ba50(longlong *param_1,int param_2)

{
  int local_18;
  
  local_18 = (int)param_1[2] + param_2;
  if ((int)param_1[1] <= local_18) {
    local_18 = local_18 - (int)param_1[1];
  }
  if (*(char *)(*param_1 + (longlong)local_18) != '\0') {
    *(undefined1 *)(*param_1 + (longlong)local_18) = 0;
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + -1;
  }
  *(int *)(param_1 + 2) = local_18;
  return;
}



// FUNCTION 143b2bae0 FUN_143b2bae0 body=1674 status=ok
// SIG undefined FUN_143b2bae0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143b2bae0(longlong param_1,longlong param_2,uint param_3,int param_4)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_e8 [32];
  uint local_c8;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  int local_a4;
  uint local_a0;
  int local_9c;
  int local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  int local_88;
  int local_84;
  uint local_80;
  longlong local_78;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (param_4 == 0) {
    uVar2 = FUN_143b2d000(param_1,param_2,param_3);
  }
  else {
    local_b8 = FUN_143b15fb0(param_1,param_2,param_3,1);
    if (local_b8 != param_3) {
      FUN_143b2a660(local_40);
      if (param_4 == 1) {
        FUN_143b2b9d0(local_40,*(undefined4 *)(param_1 + 0x84));
      }
      local_b0 = local_b8;
      local_ac = param_3 - local_b8;
      local_88 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                 ::GetIndex(*(undefined8 *)(param_1 + 0x60));
LAB_143b2bbeb:
      while (param_4 != 1) {
        local_9c = 0;
        local_94 = 0;
        for (local_a4 = 0; local_a4 < local_88; local_a4 = local_a4 + 1) {
          local_a8 = (uint)*(byte *)(*(longlong *)(param_1 + 0x70) + (longlong)local_a4);
          local_58 = FUN_143b09610(*(undefined8 *)(param_1 + 0x60),local_a4);
          local_50 = FUN_143a8fe10(local_58);
          local_8c = FUN_143a904f0(local_58);
          if (0xfd < (int)local_a8) {
            local_a8 = local_8c;
          }
          if ((int)local_b8 < (int)local_a8) {
            local_a8 = local_b8;
          }
          local_98 = local_8c - local_a8;
LAB_143b2be8e:
          if (((int)local_ac < local_98) || ((int)local_a8 < (int)local_94)) goto LAB_143b2bde6;
          if (((int)local_a8 <= (int)local_94) && (local_98 <= local_9c)) {
LAB_143b2bf04:
            local_a8 = local_a8 - 1;
            local_98 = local_98 + 1;
            goto LAB_143b2be8e;
          }
          local_c8 = local_8c;
          cVar1 = FUN_143b2b750(param_2,local_b0 - local_a8,param_3,local_50);
          if (cVar1 == '\0') goto LAB_143b2bf04;
          local_9c = local_98;
          local_94 = local_a8;
LAB_143b2bde6:
        }
        if ((local_9c == 0) && (local_94 == 0)) goto LAB_143b2bf8b;
        local_b0 = local_b0 + local_9c;
        local_ac = local_ac - local_9c;
        if (local_ac == 0) {
          local_64 = param_3;
          FUN_143b2b350(local_40);
          return (ulonglong)local_64;
        }
        local_b8 = 0;
      }
      for (local_a4 = 0; local_a4 < local_88; local_a4 = local_a4 + 1) {
        local_b4 = (uint)*(byte *)(*(longlong *)(param_1 + 0x70) + (longlong)local_a4);
        if (local_b4 != 0xff) {
          local_60 = FUN_143b09610(*(undefined8 *)(param_1 + 0x60),local_a4);
          local_78 = FUN_143a8fe10(local_60);
          local_90 = FUN_143a904f0(local_60);
          if ((((0xfd < (int)local_b4) &&
               (local_b4 = local_90 - 1,
               (*(ushort *)(local_78 + (longlong)(int)local_b4 * 2) & 0xfc00) == 0xdc00)) &&
              (0 < (int)local_b4)) &&
             ((*(ushort *)(local_78 + (longlong)(int)(local_90 - 2) * 2) & 0xfc00) == 0xd800)) {
            local_b4 = local_90 - 2;
          }
          if ((int)local_b8 < (int)local_b4) {
            local_b4 = local_b8;
          }
          for (local_a0 = local_90 - local_b4; (int)local_a0 <= (int)local_ac;
              local_a0 = local_a0 + 1) {
            cVar1 = FUN_143b2b5c0(local_40,local_a0);
            if (cVar1 == '\0') {
              local_c8 = local_90;
              cVar1 = FUN_143b2b750(param_2,local_b0 - local_b4,param_3,local_78);
              if (cVar1 != '\0') {
                if (local_a0 == local_ac) {
                  local_6c = param_3;
                  FUN_143b2b350(local_40);
                  return (ulonglong)local_6c;
                }
                FUN_143b2b440(local_40,local_a0);
              }
            }
            if (local_b4 == 0) break;
            local_b4 = local_b4 - 1;
          }
        }
      }
LAB_143b2bf8b:
      if ((local_b8 == 0) && (local_b0 != 0)) {
        cVar1 = FUN_143b2b680(local_40);
        if (cVar1 != '\0') {
          local_b8 = FUN_143b15fb0(param_1,param_2 + (longlong)(int)local_b0 * 2,local_ac,1);
          if ((local_b8 == local_ac) || (local_b8 == 0)) {
            local_70 = local_b0 + local_b8;
            FUN_143b2b350(local_40);
            return (ulonglong)local_70;
          }
          local_b0 = local_b0 + local_b8;
          local_ac = local_ac - local_b8;
          goto LAB_143b2bbeb;
        }
        local_b8 = FUN_143b2d6c0(param_1,param_2 + (longlong)(int)local_b0 * 2,local_ac);
        if (0 < (int)local_b8) {
          if (local_b8 == local_ac) {
            local_80 = param_3;
            FUN_143b2b350(local_40);
            return (ulonglong)local_80;
          }
          local_b0 = local_b0 + local_b8;
          local_ac = local_ac - local_b8;
          FUN_143b2ba50(local_40,local_b8);
          local_b8 = 0;
          goto LAB_143b2bbeb;
        }
      }
      else {
        cVar1 = FUN_143b2b680(local_40);
        if (cVar1 != '\0') {
          local_68 = local_b0;
          FUN_143b2b350(local_40);
          return (ulonglong)local_68;
        }
      }
      local_84 = FUN_143b2b8c0(local_40);
      local_b0 = local_b0 + local_84;
      local_ac = local_ac - local_84;
      local_b8 = 0;
      goto LAB_143b2bbeb;
    }
    uVar2 = (ulonglong)param_3;
  }
  return uVar2;
}



// FUNCTION 143b2c180 FUN_143b2c180 body=1644 status=ok
// SIG undefined FUN_143b2c180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143b2c180(longlong param_1,undefined8 param_2,uint param_3,int param_4)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_f8 [32];
  uint local_d8;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  int local_bc;
  uint local_b8;
  int local_b4;
  uint local_b0;
  int local_ac;
  int local_a8;
  uint local_a4;
  uint local_a0;
  int local_9c;
  uint local_98;
  uint local_94;
  longlong local_90;
  uint local_88;
  ushort *local_80;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (param_4 == 0) {
    uVar3 = FUN_143b2d1c0(param_1,param_2,param_3);
  }
  else {
    local_c8 = FUN_143b16280(param_1,param_2,param_3,1);
    if (local_c8 != 0) {
      local_c4 = param_3 - local_c8;
      FUN_143b2a660(local_40);
      if (param_4 == 1) {
        FUN_143b2b9d0(local_40,*(undefined4 *)(param_1 + 0x84));
      }
      local_9c = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                 ::GetIndex(*(undefined8 *)(param_1 + 0x60));
      local_90 = *(longlong *)(param_1 + 0x70);
      if (*(char *)(param_1 + 0x8c) != '\0') {
        local_90 = local_90 + local_9c;
      }
LAB_143b2c2b1:
      if (param_4 == 1) {
        for (local_bc = 0; local_bc < local_9c; local_bc = local_bc + 1) {
          local_c0 = (uint)*(byte *)(local_90 + local_bc);
          if (local_c0 != 0xff) {
            local_60 = FUN_143b09610(*(undefined8 *)(param_1 + 0x60),local_bc);
            local_80 = (ushort *)FUN_143a8fe10(local_60);
            local_a0 = FUN_143a904f0(local_60);
            if (0xfd < (int)local_c0) {
              local_88 = *local_80 & 0xfffffc00;
              local_b4 = 1;
              iVar2 = 1;
              if (((local_88 == 0xd800) && (iVar2 = local_b4, local_a0 != 1)) &&
                 ((local_80[1] & 0xfc00) == 0xdc00)) {
                iVar2 = 2;
              }
              local_b4 = iVar2;
              local_c0 = local_a0 - local_b4;
            }
            if ((int)local_c4 < (int)local_c0) {
              local_c0 = local_c4;
            }
            for (local_b0 = local_a0 - local_c0; (int)local_b0 <= (int)local_c8;
                local_b0 = local_b0 + 1) {
              cVar1 = FUN_143b2b5c0(local_40,local_b0);
              if (cVar1 == '\0') {
                local_d8 = local_a0;
                cVar1 = FUN_143b2b750(param_2,local_c8 - local_b0,param_3,local_80);
                if (cVar1 != '\0') {
                  if (local_b0 == local_c8) {
                    local_70 = 0;
                    FUN_143b2b350(local_40);
                    return (ulonglong)local_70;
                  }
                  FUN_143b2b440(local_40,local_b0);
                }
              }
              if (local_c0 == 0) break;
              local_c0 = local_c0 - 1;
            }
          }
        }
      }
      else {
        local_a8 = 0;
        local_a4 = 0;
        for (local_bc = 0; local_bc < local_9c; local_bc = local_bc + 1) {
          local_b8 = (uint)*(byte *)(local_90 + local_bc);
          local_58 = FUN_143b09610(*(undefined8 *)(param_1 + 0x60),local_bc);
          local_50 = FUN_143a8fe10(local_58);
          local_98 = FUN_143a904f0(local_58);
          if (0xfd < (int)local_b8) {
            local_b8 = local_98;
          }
          if ((int)local_c4 < (int)local_b8) {
            local_b8 = local_c4;
          }
          local_ac = local_98 - local_b8;
LAB_143b2c568:
          if (((int)local_c8 < local_ac) || ((int)local_b8 < (int)local_a4)) goto LAB_143b2c4c7;
          if (((int)local_b8 <= (int)local_a4) && (local_ac <= local_a8)) {
LAB_143b2c5de:
            local_b8 = local_b8 - 1;
            local_ac = local_ac + 1;
            goto LAB_143b2c568;
          }
          local_d8 = local_98;
          cVar1 = FUN_143b2b750(param_2,local_c8 - local_ac,param_3,local_50);
          if (cVar1 == '\0') goto LAB_143b2c5de;
          local_a8 = local_ac;
          local_a4 = local_b8;
LAB_143b2c4c7:
        }
        if ((local_a8 != 0) || (local_a4 != 0)) {
          local_c8 = local_c8 - local_a8;
          if (local_c8 == 0) {
            local_78 = 0;
            FUN_143b2b350(local_40);
            return (ulonglong)local_78;
          }
          local_c4 = 0;
          goto LAB_143b2c2b1;
        }
      }
      if ((local_c4 == 0) && (local_c8 != param_3)) {
        cVar1 = FUN_143b2b680(local_40);
        if (cVar1 == '\0') {
          local_c4 = FUN_143b2d7c0(param_1,param_2,local_c8);
          if ((int)local_c4 < 1) goto LAB_143b2c7b3;
          if (local_c4 == local_c8) {
            local_74 = 0;
            FUN_143b2b350(local_40);
            return (ulonglong)local_74;
          }
          local_c8 = local_c8 - local_c4;
          FUN_143b2ba50(local_40,local_c4);
          local_c4 = 0;
        }
        else {
          local_94 = local_c8;
          local_c8 = FUN_143b16280(param_1,param_2,local_c8,1);
          local_c4 = local_94 - local_c8;
          if ((local_c8 == 0) || (local_c4 == 0)) {
            local_6c = local_c8;
            FUN_143b2b350(local_40);
            return (ulonglong)local_6c;
          }
        }
      }
      else {
        cVar1 = FUN_143b2b680(local_40);
        if (cVar1 != '\0') {
          local_68 = local_c8;
          FUN_143b2b350(local_40);
          return (ulonglong)local_68;
        }
LAB_143b2c7b3:
        iVar2 = FUN_143b2b8c0(local_40);
        local_c8 = local_c8 - iVar2;
        local_c4 = 0;
      }
      goto LAB_143b2c2b1;
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143b2c800 FUN_143b2c800 body=2020 status=ok
// SIG undefined FUN_143b2c800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143b2c800(longlong param_1,longlong param_2,uint param_3,int param_4)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_e8 [32];
  byte local_c8;
  uint local_c4;
  char local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  int local_b0;
  uint local_ac;
  int local_a8;
  uint local_a4;
  int local_a0;
  byte *local_98;
  uint local_90;
  int local_8c;
  int local_88;
  uint local_84;
  int local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  longlong local_68;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (param_4 == 0) {
    uVar3 = FUN_143b2d330(param_1,param_2,param_3);
  }
  else {
    local_c4 = FUN_143b16550(param_1,param_2,param_3,1);
    if (local_c4 != 0) {
      local_bc = param_3 - local_c4;
      FUN_143b2a660(local_40);
      if (param_4 == 1) {
        FUN_143b2b9d0(local_40,*(undefined4 *)(param_1 + 0x88));
      }
      local_88 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                 ::GetIndex(*(undefined8 *)(param_1 + 0x60));
      local_68 = *(longlong *)(param_1 + 0x70);
      if (*(char *)(param_1 + 0x8c) != '\0') {
        local_68 = local_68 + local_88 * 3;
      }
LAB_143b2c93c:
      local_98 = *(byte **)(param_1 + 0x78);
      if (param_4 == 1) {
        for (local_b0 = 0; local_b0 < local_88; local_b0 = local_b0 + 1) {
          local_b4 = *(uint *)(*(longlong *)(param_1 + 0x68) + (longlong)local_b0 * 4);
          if (local_b4 != 0) {
            local_b8 = (uint)*(byte *)(local_68 + local_b0);
            if (local_b8 == 0xff) {
              local_98 = local_98 + (int)local_b4;
            }
            else {
              if (0xfd < local_b8) {
                local_c8 = *local_98;
                local_a8 = 1;
                iVar2 = 1;
                if ((byte)(local_c8 + 0x40) < 0x3e) {
                  if (local_c8 < 0xf0) {
                    local_78 = (uint)(0xbf < local_c8);
                    local_84 = (uint)(0xdf < local_c8);
                    local_80 = local_78 + local_84;
                  }
                  else {
                    if (local_c8 < 0xfe) {
                      local_6c = (uint)(0xf7 < local_c8);
                      local_7c = (uint)(0xfb < local_c8);
                      local_70 = local_6c + 3 + local_7c;
                    }
                    else {
                      local_70 = 0;
                    }
                    local_80 = local_70;
                  }
                  local_c0 = (char)local_80;
                  if (((int)local_b4 < local_80 + 1) && (iVar2 = local_a8, -1 < (int)local_b4)) {
                    local_c0 = (char)local_b4 + -1;
                  }
                  while ((local_a8 = iVar2, iVar2 = local_a8, local_c0 != '\0' &&
                         ((local_98[local_a8] & 0xc0) == 0x80))) {
                    local_c0 = local_c0 + -1;
                    iVar2 = local_a8 + 1;
                  }
                }
                local_a8 = iVar2;
                local_b8 = local_b4 - local_a8;
              }
              if ((int)local_bc < (int)local_b8) {
                local_b8 = local_bc;
              }
              for (local_a4 = local_b4 - local_b8; (int)local_a4 <= (int)local_c4;
                  local_a4 = local_a4 + 1) {
                if ((((*(byte *)(param_2 + (int)(local_c4 - local_a4)) & 0xc0) != 0x80) &&
                    (cVar1 = FUN_143b2b5c0(local_40,local_a4), cVar1 == '\0')) &&
                   (cVar1 = FUN_143b2b850((param_2 + (int)local_c4) - (longlong)(int)local_a4,
                                          local_98,local_b4), cVar1 != '\0')) {
                  if (local_a4 == local_c4) {
                    local_5c = 0;
                    FUN_143b2b350(local_40);
                    return (ulonglong)local_5c;
                  }
                  FUN_143b2b440(local_40,local_a4);
                }
                if (local_b8 == 0) break;
                local_b8 = local_b8 - 1;
              }
              local_98 = local_98 + (int)local_b4;
            }
          }
        }
      }
      else {
        local_8c = 0;
        local_90 = 0;
        for (local_b0 = 0; local_b0 < local_88; local_b0 = local_b0 + 1) {
          local_b4 = *(uint *)(*(longlong *)(param_1 + 0x68) + (longlong)local_b0 * 4);
          if (local_b4 != 0) {
            local_ac = (uint)*(byte *)(local_68 + local_b0);
            if (0xfd < local_ac) {
              local_ac = local_b4;
            }
            if ((int)local_bc < (int)local_ac) {
              local_ac = local_bc;
            }
            local_a0 = local_b4 - local_ac;
            while( true ) {
              if (((int)local_c4 < local_a0) || ((int)local_ac < (int)local_90)) goto LAB_143b2cdda;
              if ((((*(byte *)(param_2 + (int)(local_c4 - local_a0)) & 0xc0) != 0x80) &&
                  (((int)local_90 < (int)local_ac || (local_8c < local_a0)))) &&
                 (cVar1 = FUN_143b2b850((param_2 + (int)local_c4) - (longlong)local_a0,local_98,
                                        local_b4), cVar1 != '\0')) break;
              local_ac = local_ac - 1;
              local_a0 = local_a0 + 1;
            }
            local_8c = local_a0;
            local_90 = local_ac;
LAB_143b2cdda:
            local_98 = local_98 + (int)local_b4;
          }
        }
        if ((local_8c != 0) || (local_90 != 0)) {
          local_c4 = local_c4 - local_8c;
          if (local_c4 == 0) {
            local_60 = 0;
            FUN_143b2b350(local_40);
            return (ulonglong)local_60;
          }
          local_bc = 0;
          goto LAB_143b2c93c;
        }
      }
      if ((local_bc == 0) && (local_c4 != param_3)) {
        cVar1 = FUN_143b2b680(local_40);
        if (cVar1 == '\0') {
          local_bc = FUN_143b2d8d0(param_1,param_2,local_c4);
          if ((int)local_bc < 1) goto LAB_143b2cfab;
          if (local_bc == local_c4) {
            local_54 = 0;
            FUN_143b2b350(local_40);
            return (ulonglong)local_54;
          }
          local_c4 = local_c4 - local_bc;
          FUN_143b2ba50(local_40,local_bc);
          local_bc = 0;
        }
        else {
          local_74 = local_c4;
          local_c4 = FUN_143b16550(param_1,param_2,local_c4,1);
          local_bc = local_74 - local_c4;
          if ((local_c4 == 0) || (local_bc == 0)) {
            local_50 = local_c4;
            FUN_143b2b350(local_40);
            return (ulonglong)local_50;
          }
        }
      }
      else {
        cVar1 = FUN_143b2b680(local_40);
        if (cVar1 != '\0') {
          local_58 = local_c4;
          FUN_143b2b350(local_40);
          return (ulonglong)local_58;
        }
LAB_143b2cfab:
        iVar2 = FUN_143b2b8c0(local_40);
        local_c4 = local_c4 - iVar2;
        local_bc = 0;
      }
      goto LAB_143b2c93c;
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143b2d000 FUN_143b2d000 body=436 status=ok
// SIG undefined FUN_143b2d000(void)

int FUN_143b2d000(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_38;
  int local_34;
  int local_30;
  
  local_34 = 0;
  iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(*(undefined8 *)(param_1 + 0x60));
  local_30 = param_3;
  while( true ) {
    iVar3 = FUN_143b15fb0(*(undefined8 *)(param_1 + 0x58),param_2 + (longlong)local_34 * 2,local_30,
                          0);
    if (iVar3 == local_30) {
      return param_3;
    }
    local_34 = local_34 + iVar3;
    local_30 = local_30 - iVar3;
    iVar3 = FUN_143b2d6c0(param_1,param_2 + (longlong)local_34 * 2,local_30);
    if (0 < iVar3) break;
    for (local_38 = 0; local_38 < iVar2; local_38 = local_38 + 1) {
      if (*(char *)(*(longlong *)(param_1 + 0x70) + (longlong)local_38) != -1) {
        uVar5 = FUN_143b09610(*(undefined8 *)(param_1 + 0x60),local_38);
        uVar6 = FUN_143a8fe10(uVar5);
        iVar4 = FUN_143a904f0(uVar5);
        if ((iVar4 <= local_30) &&
           (cVar1 = FUN_143b2b750(param_2,local_34,param_3,uVar6,iVar4), cVar1 != '\0')) {
          return local_34;
        }
      }
    }
    local_34 = local_34 - iVar3;
    local_30 = local_30 + iVar3;
    if (local_30 == 0) {
      return param_3;
    }
  }
  return local_34;
}



// FUNCTION 143b2d1c0 FUN_143b2d1c0 body=356 status=ok
// SIG undefined FUN_143b2d1c0(void)

int FUN_143b2d1c0(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_38;
  int local_34;
  
  iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(*(undefined8 *)(param_1 + 0x60));
  local_38 = param_3;
  while( true ) {
    local_38 = FUN_143b16280(*(undefined8 *)(param_1 + 0x58),param_2,local_38,0);
    if (local_38 == 0) {
      return 0;
    }
    iVar3 = FUN_143b2d7c0(param_1,param_2,local_38);
    if (0 < iVar3) break;
    for (local_34 = 0; local_34 < iVar2; local_34 = local_34 + 1) {
      if (*(char *)(*(longlong *)(param_1 + 0x70) + (longlong)local_34) != -1) {
        uVar5 = FUN_143b09610(*(undefined8 *)(param_1 + 0x60),local_34);
        uVar6 = FUN_143a8fe10(uVar5);
        iVar4 = FUN_143a904f0(uVar5);
        if ((iVar4 <= local_38) &&
           (cVar1 = FUN_143b2b750(param_2,local_38 - iVar4,param_3,uVar6,iVar4), cVar1 != '\0')) {
          return local_38;
        }
      }
    }
    local_38 = local_38 + iVar3;
    if (local_38 == 0) {
      return 0;
    }
  }
  return local_38;
}



// FUNCTION 143b2d330 FUN_143b2d330 body=408 status=ok
// SIG undefined FUN_143b2d330(void)

int FUN_143b2d330(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int local_38;
  int local_34;
  longlong local_20;
  longlong local_18;
  
  iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(*(undefined8 *)(param_1 + 0x60));
  local_20 = *(longlong *)(param_1 + 0x70);
  local_38 = param_3;
  if (*(char *)(param_1 + 0x8c) != '\0') {
    local_20 = local_20 + iVar3 * 3;
  }
  while( true ) {
    local_38 = FUN_143b16550(*(undefined8 *)(param_1 + 0x58),param_2,local_38,0);
    if (local_38 == 0) {
      return 0;
    }
    iVar4 = FUN_143b2d8d0(param_1,param_2,local_38);
    if (0 < iVar4) break;
    local_18 = *(longlong *)(param_1 + 0x78);
    for (local_34 = 0; local_34 < iVar3; local_34 = local_34 + 1) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x68) + (longlong)local_34 * 4);
      if ((((iVar1 != 0) && (*(char *)(local_20 + local_34) != -1)) && (iVar1 <= local_38)) &&
         (cVar2 = FUN_143b2b850((param_2 + local_38) - (longlong)iVar1,local_18,iVar1),
         cVar2 != '\0')) {
        return local_38;
      }
      local_18 = local_18 + iVar1;
    }
    local_38 = local_38 + iVar4;
    if (local_38 == 0) {
      return 0;
    }
  }
  return local_38;
}



// FUNCTION 143b2d4d0 FUN_143b2d4d0 body=489 status=ok
// SIG undefined FUN_143b2d4d0(void)

int FUN_143b2d4d0(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int local_38;
  int local_34;
  int local_30;
  longlong local_20;
  longlong local_18;
  
  local_34 = 0;
  iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(*(undefined8 *)(param_1 + 0x60));
  local_20 = *(longlong *)(param_1 + 0x70);
  local_30 = param_3;
  if (*(char *)(param_1 + 0x8c) != '\0') {
    local_20 = local_20 + (iVar3 << 1);
  }
  while( true ) {
    iVar4 = FUN_143b167e0(*(undefined8 *)(param_1 + 0x58),param_2 + local_34,local_30,0);
    if (iVar4 == local_30) {
      return param_3;
    }
    local_34 = local_34 + iVar4;
    local_30 = local_30 - iVar4;
    iVar4 = FUN_143b2d9b0(param_1,param_2 + local_34,local_30);
    if (0 < iVar4) break;
    local_18 = *(longlong *)(param_1 + 0x78);
    for (local_38 = 0; local_38 < iVar3; local_38 = local_38 + 1) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x68) + (longlong)local_38 * 4);
      if ((((iVar1 != 0) && (*(char *)(local_20 + local_38) != -1)) && (iVar1 <= local_30)) &&
         (cVar2 = FUN_143b2b850(param_2 + local_34,local_18,iVar1), cVar2 != '\0')) {
        return local_34;
      }
      local_18 = local_18 + iVar1;
    }
    local_34 = local_34 - iVar4;
    local_30 = local_30 + iVar4;
    if (local_30 == 0) {
      return param_3;
    }
  }
  return local_34;
}



// FUNCTION 143b2d6c0 FUN_143b2d6c0 body=253 status=ok
// SIG undefined FUN_143b2d6c0(void)

undefined4 FUN_143b2d6c0(longlong *param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  char cVar2;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = *param_2;
  if ((((uVar1 < 0xd800) || (0xdbff < uVar1)) || (param_3 < 2)) || ((param_2[1] & 0xfc00) != 0xdc00)
     ) {
    cVar2 = (**(code **)(*param_1 + 0x30))(param_1,uVar1);
    if (cVar2 == '\0') {
      local_1c = 0xffffffff;
    }
    else {
      local_1c = 1;
    }
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x30))
                      (param_1,(uint)uVar1 * 0x400 + -0x35fdc00 + (uint)param_2[1]);
    if (cVar2 == '\0') {
      local_20 = 0xfffffffe;
      local_1c = local_20;
    }
    else {
      local_20 = 2;
      local_1c = local_20;
    }
  }
  return local_1c;
}



// FUNCTION 143b2d7c0 FUN_143b2d7c0 body=262 status=ok
// SIG undefined FUN_143b2d7c0(void)

undefined4 FUN_143b2d7c0(longlong *param_1,longlong param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = *(ushort *)(param_2 + (longlong)(param_3 + -1) * 2);
  if ((((uVar1 < 0xdc00) || (0xdfff < uVar1)) || (param_3 < 2)) ||
     (uVar2 = *(ushort *)(param_2 + (longlong)(param_3 + -2) * 2), (uVar2 & 0xfc00) != 0xd800)) {
    cVar3 = (**(code **)(*param_1 + 0x30))(param_1,uVar1);
    if (cVar3 == '\0') {
      local_1c = 0xffffffff;
    }
    else {
      local_1c = 1;
    }
  }
  else {
    cVar3 = (**(code **)(*param_1 + 0x30))(param_1,(uint)uVar2 * 0x400 + -0x35fdc00 + (uint)uVar1);
    if (cVar3 == '\0') {
      local_20 = 0xfffffffe;
      local_1c = local_20;
    }
    else {
      local_20 = 2;
      local_1c = local_20;
    }
  }
  return local_1c;
}



// FUNCTION 143b2d8d0 FUN_143b2d8d0 body=213 status=ok
// SIG undefined FUN_143b2d8d0(void)

int FUN_143b2d8d0(longlong *param_1,longlong param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int local_14;
  int local_10 [4];
  
  cVar1 = *(char *)(param_2 + (param_3 + -1));
  if (cVar1 < '\0') {
    local_10[0] = param_3 + -1;
    uVar2 = FUN_143ab9a30(param_2,0,local_10,cVar1,0xfd);
    local_14 = param_3 - local_10[0];
    cVar1 = (**(code **)(*param_1 + 0x30))(param_1,uVar2);
    if (cVar1 == '\0') {
      local_14 = -local_14;
    }
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x30))(param_1,cVar1);
    if (cVar1 == '\0') {
      local_14 = -1;
    }
    else {
      local_14 = 1;
    }
  }
  return local_14;
}



// FUNCTION 143b2d9b0 FUN_143b2d9b0 body=493 status=ok
// SIG undefined FUN_143b2d9b0(void)

int FUN_143b2d9b0(longlong *param_1,byte *param_2,int param_3)

{
  char cVar1;
  uint local_24;
  int local_20 [8];
  
  if ((char)*param_2 < '\0') {
    local_24 = (uint)*param_2;
    local_20[0] = 1;
    if (0x7f < local_24) {
      if ((((local_24 < 0xe1) || (0xec < local_24)) || ((param_3 < 3 && (-1 < param_3)))) ||
         ((0x3f < (byte)(param_2[1] + 0x80) || (0x3f < (byte)(param_2[2] + 0x80))))) {
        if ((local_24 < 0xe0) &&
           (((0xc1 < local_24 && (param_3 != 1)) && ((byte)(param_2[1] + 0x80) < 0x40)))) {
          local_24 = (local_24 & 0x1f) << 6 | (uint)(byte)(param_2[1] + 0x80);
          local_20[0] = 2;
        }
        else {
          local_24 = FUN_143ab96e0(param_2,local_20,param_3,local_24,0xfd);
        }
      }
      else {
        local_24 = (local_24 & 0xf) << 0xc | (uint)(byte)(param_2[1] + 0x80) << 6 |
                   (uint)(byte)(param_2[2] + 0x80);
        local_20[0] = 3;
      }
    }
    cVar1 = (**(code **)(*param_1 + 0x30))(param_1,local_24);
    local_20[1] = local_20[0];
    if (cVar1 == '\0') {
      local_20[1] = -local_20[0];
    }
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x30))(param_1,*param_2);
    if (cVar1 == '\0') {
      local_20[1] = -1;
    }
    else {
      local_20[1] = 1;
    }
  }
  return local_20[1];
}



// FUNCTION 143b2dba0 FUN_143b2dba0 body=1776 status=ok
// SIG undefined FUN_143b2dba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143b2dba0(longlong param_1,longlong param_2,uint param_3,int param_4)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_c8 [32];
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  uint local_8c;
  int local_88;
  int local_84;
  longlong local_80;
  uint local_78;
  int local_74;
  int local_70;
  longlong local_68;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if (param_4 == 0) {
    uVar2 = FUN_143b2d4d0(param_1,param_2,param_3);
  }
  else {
    local_a8 = FUN_143b167e0(param_1,param_2,param_3,1);
    if (local_a8 != param_3) {
      FUN_143b2a660(local_40);
      if (param_4 == 1) {
        FUN_143b2b9d0(local_40,*(undefined4 *)(param_1 + 0x88));
      }
      local_a4 = local_a8;
      local_9c = param_3 - local_a8;
      local_74 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                 ::GetIndex(*(undefined8 *)(param_1 + 0x60));
      local_68 = *(longlong *)(param_1 + 0x70);
      if (*(char *)(param_1 + 0x8c) != '\0') {
        local_68 = local_68 + (local_74 << 1);
      }
LAB_143b2dce7:
      while (local_80 = *(longlong *)(param_1 + 0x78), param_4 != 1) {
        local_88 = 0;
        local_78 = 0;
        for (local_90 = 0; local_90 < local_74; local_90 = local_90 + 1) {
          local_98 = *(uint *)(*(longlong *)(param_1 + 0x68) + (longlong)local_90 * 4);
          if (local_98 != 0) {
            local_94 = (uint)*(byte *)(local_68 + local_90);
            if (0xfd < local_94) {
              local_94 = local_98;
            }
            if ((int)local_a8 < (int)local_94) {
              local_94 = local_a8;
            }
            local_84 = local_98 - local_94;
            while( true ) {
              if (((int)local_9c < local_84) || ((int)local_94 < (int)local_78)) goto LAB_143b2e036;
              if ((((*(byte *)(param_2 + (int)(local_a4 - local_94)) & 0xc0) != 0x80) &&
                  (((int)local_78 < (int)local_94 || (local_88 < local_84)))) &&
                 (cVar1 = FUN_143b2b850((param_2 + (int)local_a4) - (longlong)(int)local_94,local_80
                                        ,local_98), cVar1 != '\0')) break;
              local_94 = local_94 - 1;
              local_84 = local_84 + 1;
            }
            local_88 = local_84;
            local_78 = local_94;
LAB_143b2e036:
            local_80 = local_80 + (int)local_98;
          }
        }
        if ((local_88 == 0) && (local_78 == 0)) goto LAB_143b2e0b3;
        local_a4 = local_a4 + local_88;
        local_9c = local_9c - local_88;
        if (local_9c == 0) {
          local_5c = param_3;
          FUN_143b2b350(local_40);
          return (ulonglong)local_5c;
        }
        local_a8 = 0;
      }
      for (local_90 = 0; local_90 < local_74; local_90 = local_90 + 1) {
        local_98 = *(uint *)(*(longlong *)(param_1 + 0x68) + (longlong)local_90 * 4);
        if (local_98 != 0) {
          local_a0 = (uint)*(byte *)(local_68 + local_90);
          if (local_a0 == 0xff) {
            local_80 = local_80 + (int)local_98;
          }
          else {
            if ((0xfd < local_a0) &&
               (local_a0 = local_98 - 1, (*(byte *)(local_80 + (int)local_a0) & 0xc0) == 0x80)) {
              local_a0 = FUN_143ab9560(local_80,0,local_a0);
            }
            if ((int)local_a8 < (int)local_a0) {
              local_a0 = local_a8;
            }
            for (local_8c = local_98 - local_a0; (int)local_8c <= (int)local_9c;
                local_8c = local_8c + 1) {
              if ((((*(byte *)(param_2 + (int)(local_a4 - local_a0)) & 0xc0) != 0x80) &&
                  (cVar1 = FUN_143b2b5c0(local_40), cVar1 == '\0')) &&
                 (cVar1 = FUN_143b2b850((param_2 + (int)local_a4) - (longlong)(int)local_a0,local_80
                                        ,local_98), cVar1 != '\0')) {
                if (local_8c == local_9c) {
                  local_50 = param_3;
                  FUN_143b2b350(local_40);
                  return (ulonglong)local_50;
                }
                FUN_143b2b440(local_40);
              }
              if (local_a0 == 0) break;
              local_a0 = local_a0 - 1;
            }
            local_80 = local_80 + (int)local_98;
          }
        }
      }
LAB_143b2e0b3:
      if ((local_a8 == 0) && (local_a4 != 0)) {
        cVar1 = FUN_143b2b680(local_40);
        if (cVar1 != '\0') {
          local_a8 = FUN_143b167e0(param_1,param_2 + (int)local_a4,local_9c,1);
          if ((local_a8 == local_9c) || (local_a8 == 0)) {
            local_60 = local_a4 + local_a8;
            FUN_143b2b350(local_40);
            return (ulonglong)local_60;
          }
          local_a4 = local_a4 + local_a8;
          local_9c = local_9c - local_a8;
          goto LAB_143b2dce7;
        }
        local_a8 = FUN_143b2d9b0(param_1,param_2 + (int)local_a4,local_9c);
        if (0 < (int)local_a8) {
          if (local_a8 == local_9c) {
            local_54 = param_3;
            FUN_143b2b350(local_40);
            return (ulonglong)local_54;
          }
          local_a4 = local_a4 + local_a8;
          local_9c = local_9c - local_a8;
          FUN_143b2ba50(local_40,local_a8);
          local_a8 = 0;
          goto LAB_143b2dce7;
        }
      }
      else {
        cVar1 = FUN_143b2b680(local_40);
        if (cVar1 != '\0') {
          local_58 = local_a4;
          FUN_143b2b350(local_40);
          return (ulonglong)local_58;
        }
      }
      local_70 = FUN_143b2b8c0(local_40);
      local_a4 = local_a4 + local_70;
      local_9c = local_9c - local_70;
      local_a8 = 0;
      goto LAB_143b2dce7;
    }
    uVar2 = (ulonglong)param_3;
  }
  return uVar2;
}



// FUNCTION 143b2e2b0 FUN_143b2e2b0 body=862 status=ok
// SIG undefined FUN_143b2e2b0(void)

ulonglong FUN_143b2e2b0(uint *param_1,byte *param_2,short param_3,int param_4,byte *param_5)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  byte *pbVar4;
  short sVar5;
  byte *pbVar6;
  byte *local_res10;
  short local_res18;
  ushort local_64;
  int local_50;
  int local_4c;
  byte *local_30;
  
  pbVar4 = param_5;
  uVar3 = (ushort)param_1[4];
  local_res10 = param_2;
  local_res18 = param_3;
  if ((param_4 != 0) && (local_res10 = param_2, local_res18 = param_3, param_4 != 2)) {
    if ((uVar3 < 0x3c) || ((short)param_1[0x22] == -1)) {
      local_4c = param_4;
      if (param_4 == 4) {
        local_4c = 2;
      }
      local_50 = local_4c;
      local_res10 = param_2;
      local_res18 = param_3;
LAB_143b2e37c:
      do {
        if (local_res18 != 0) {
          local_res18 = local_res18 + -1;
          bVar1 = *local_res10;
          local_res10 = local_res10 + 1;
          if (bVar1 != 0x3b) goto LAB_143b2e37c;
        }
        local_50 = local_50 + -1;
      } while (0 < local_50);
    }
    else {
      local_res18 = 0;
      local_res10 = param_2;
    }
  }
  while (local_res18 != 0) {
    bVar1 = *local_res10;
    pbVar6 = local_res10 + 1;
    if (bVar1 < uVar3) {
      local_64 = *(ushort *)((longlong)param_1 + (ulonglong)bVar1 * 2 + 0x12);
      sVar5 = local_res18 + -1;
      if (local_64 == 0xfffe) {
        local_64 = *(ushort *)
                    ((longlong)param_1 + (longlong)(int)(uint)CONCAT11(bVar1,*pbVar6) * 2 + 0x12);
        pbVar6 = local_res10 + 2;
        sVar5 = local_res18 + -2;
      }
      local_res18 = sVar5;
      local_res10 = pbVar6;
      if (local_64 == 0xffff) {
        if (bVar1 == 0x3b) {
          if (((param_5 != pbVar4) || (param_4 != 2)) ||
             ((0x3b < uVar3 && ((short)param_1[0x22] != -1)))) break;
        }
        else {
          bVar2 = *param_5;
          param_5 = param_5 + 1;
          if (bVar1 != bVar2) {
            return (ulonglong)(uint3)((char)bVar2 >> 7) << 8;
          }
        }
      }
      else {
        local_30 = (byte *)((longlong)param_1 + (ulonglong)local_64 + (ulonglong)*param_1);
        while( true ) {
          bVar1 = *local_30;
          local_30 = local_30 + 1;
          if (bVar1 == 0) break;
          bVar2 = *param_5;
          param_5 = param_5 + 1;
          if (bVar1 != bVar2) {
            return (ulonglong)(uint3)((char)bVar2 >> 7) << 8;
          }
        }
      }
    }
    else {
      if (bVar1 == 0x3b) break;
      bVar2 = *param_5;
      param_5 = param_5 + 1;
      local_res10 = pbVar6;
      local_res18 = local_res18 + -1;
      if (bVar1 != bVar2) {
        return (ulonglong)(uint3)((char)bVar2 >> 7) << 8;
      }
    }
  }
  return (ulonglong)(*param_5 == 0);
}



// FUNCTION 143b2e610 FUN_143b2e610 body=252 status=ok
// SIG undefined FUN_143b2e610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143b2e610(int param_1,uint param_2,code *param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  int local_res8;
  undefined1 auStack_128 [32];
  uint local_108;
  ushort local_f8;
  ulonglong local_f0;
  undefined1 local_e8 [208];
  ulonglong local_18;
  
  uVar2 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_res8 = param_1;
  local_18 = uVar2;
  if (param_3 != (code *)0x0) {
    for (; uVar2 = (ulonglong)param_2, local_res8 <= (int)param_2; local_res8 = local_res8 + 1) {
      local_f8 = FUN_143b2fad0(local_res8,local_e8,200);
      local_f0 = (ulonglong)local_f8;
      if (199 < local_f0) {
                    /* WARNING: Subroutine does not return */
        __report_rangecheckfailure();
      }
      local_e8[local_f0] = 0;
      if (local_f8 != 0) {
        local_108 = (uint)local_f8;
        cVar1 = (*param_3)(param_4,local_res8,2,local_e8);
        if (cVar1 == '\0') {
          return 0;
        }
      }
    }
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// FUNCTION 143b2e710 FUN_143b2e710 body=673 status=ok
// SIG undefined FUN_143b2e710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143b2e710(longlong param_1,longlong param_2,uint param_3,int param_4,code *param_5,
                       undefined8 *param_6,int param_7)

{
  char cVar1;
  uint local_res18;
  undefined1 auStack_1d8 [32];
  undefined1 *local_1b8;
  undefined2 local_1b0;
  ushort local_1a8;
  longlong local_1a0;
  ulonglong local_198;
  undefined8 local_190;
  ushort local_188 [40];
  ushort local_138 [40];
  undefined1 local_e8 [208];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_1a0 = param_1 + (ulonglong)*(uint *)(param_1 + 8) +
              (longlong)CONCAT22(*(undefined2 *)(param_2 + 2),*(undefined2 *)(param_2 + 4));
  local_1a0 = FUN_143b2efa0(local_1a0,local_138,local_188);
  local_res18 = param_3;
  if (param_5 == (code *)0x0) {
    local_190 = *param_6;
    for (; (int)local_res18 <= param_4; local_res18 = local_res18 + 1) {
      local_1b8 = (undefined1 *)local_190;
      cVar1 = FUN_143b2e2b0(param_1,local_1a0 + (ulonglong)local_138[(int)(local_res18 & 0x1f)],
                            local_188[(int)(local_res18 & 0x1f)],param_7);
      if (cVar1 != '\0') {
        *(uint *)(param_6 + 1) = local_res18;
        return (ulonglong)param_6 & 0xffffffffffffff00;
      }
    }
  }
  else {
    for (; (int)local_res18 <= param_4; local_res18 = local_res18 + 1) {
      local_1b0 = 200;
      local_1b8 = local_e8;
      local_1a8 = FUN_143b2f140(param_1,local_1a0 + (ulonglong)local_138[(int)(local_res18 & 0x1f)],
                                local_188[(int)(local_res18 & 0x1f)],param_7);
      if ((local_1a8 == 0) && (param_7 == 2)) {
        local_1a8 = FUN_143b2fad0(local_res18,local_e8,200);
        local_198 = (ulonglong)local_1a8;
        if (199 < local_198) {
                    /* WARNING: Subroutine does not return */
          __report_rangecheckfailure();
        }
        local_e8[local_198] = 0;
      }
      if (local_1a8 != 0) {
        local_1b8 = (undefined1 *)CONCAT44(local_1b8._4_4_,(uint)local_1a8);
        cVar1 = (*param_5)(param_6,local_res18,param_7,local_e8);
        if (cVar1 == '\0') {
          return 0;
        }
      }
    }
  }
  return CONCAT71((uint7)(uint3)((uint)param_4 >> 8),1);
}



// FUNCTION 143b2e9c0 FUN_143b2e9c0 body=1497 status=ok
// SIG undefined FUN_143b2e9c0(void)

undefined8
FUN_143b2e9c0(longlong param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 param_5,
             int param_6)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ushort *puVar8;
  uint local_res10;
  uint local_res18;
  ushort *local_50;
  uint local_44;
  uint local_40;
  uint local_38;
  
  uVar4 = (int)param_2 >> 5;
  uVar2 = (ushort)uVar4;
  uVar3 = (ushort)((int)(param_3 - 1) >> 5);
  puVar5 = (ushort *)FUN_143b2fd00(param_1,param_2);
  local_res10 = param_2;
  if (((uVar4 & 0xffff) < (uint)*puVar5) && (param_6 == 2)) {
    local_44 = (uint)*puVar5 << 5;
    if ((int)param_3 < (int)local_44) {
      local_44 = param_3;
    }
    cVar1 = FUN_143b2e610(param_2,local_44 - 1,param_4,param_5);
    if (cVar1 == '\0') {
      return 0;
    }
    local_res10 = local_44;
  }
  if (uVar2 == uVar3) {
    uVar6 = (ulonglong)uVar2;
    if ((uVar4 & 0xffff) == (uint)*puVar5) {
      uVar7 = FUN_143b2e710(param_1,puVar5,local_res10,param_3 - 1,param_4,param_5,param_6);
    }
    else {
LAB_143b2ef46:
      if (param_6 == 2) {
        local_res18 = param_3;
        if (0x110000 < (int)param_3) {
          local_res18 = 0x110000;
        }
        uVar7 = FUN_143b2e610(local_res10,local_res18 - 1,param_4,param_5);
      }
      else {
        uVar7 = CONCAT71((int7)(uVar6 >> 8),1);
      }
    }
  }
  else {
    puVar8 = (ushort *)(param_1 + (ulonglong)*(uint *)(param_1 + 4));
    puVar8 = puVar8 + (longlong)(int)((uint)*puVar8 * 3) + 1;
    if ((uVar4 & 0xffff) == (uint)*puVar5) {
      if ((local_res10 & 0x1f) != 0) {
        cVar1 = FUN_143b2e710(param_1,puVar5,local_res10,(uVar4 & 0xffff) * 0x20 + 0x1f,param_4,
                              param_5,param_6);
        if (cVar1 == '\0') {
          return 0;
        }
        puVar5 = puVar5 + 3;
      }
    }
    else if (((((uint)*puVar5 < (uVar4 & 0xffff)) && (puVar5 = puVar5 + 3, puVar5 < puVar8)) &&
             (uVar2 < *puVar5)) && (param_6 == 2)) {
      local_38 = (uint)*puVar5 << 5;
      if ((int)param_3 < (int)local_38) {
        local_38 = param_3;
      }
      cVar1 = FUN_143b2e610(local_res10,local_38 - 1,param_4,param_5);
      if (cVar1 == '\0') {
        return 0;
      }
    }
    do {
      do {
        local_50 = puVar5;
        if ((puVar8 <= local_50) || (uVar3 <= *local_50)) {
          puVar5 = puVar8;
          if ((local_50 < puVar8) && (puVar5 = (ushort *)(ulonglong)*local_50, *local_50 == uVar3))
          {
            uVar7 = FUN_143b2e710(param_1,local_50,param_3 - 1 & 0xffffffe0,param_3 - 1,param_4,
                                  param_5,param_6);
            return uVar7;
          }
          if ((param_6 != 2) || (puVar5 = puVar8, local_50 != puVar8)) {
            return CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
          }
          uVar4 = (local_50[-3] + 1) * 0x20;
          if ((int)local_res10 < (int)uVar4) {
            local_res10 = uVar4;
          }
          uVar6 = (ulonglong)local_res10;
          goto LAB_143b2ef46;
        }
        local_res10 = (uint)*local_50 * 0x20;
        cVar1 = FUN_143b2e710(param_1,local_50,(ulonglong)*local_50 << 5,local_res10 + 0x1f,param_4,
                              param_5,param_6);
        if (cVar1 == '\0') {
          return 0;
        }
        puVar5 = local_50 + 3;
      } while (((puVar8 <= puVar5) || ((uint)*puVar5 <= *local_50 + 1)) || (param_6 != 2));
      local_40 = (uint)*puVar5 << 5;
      if ((int)param_3 < (int)local_40) {
        local_40 = param_3;
      }
      cVar1 = FUN_143b2e610((*local_50 + 1) * 0x20,local_40 - 1,param_4,param_5);
    } while (cVar1 != '\0');
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 143b2efa0 FUN_143b2efa0 body=406 status=ok
// SIG undefined FUN_143b2efa0(void)

byte * FUN_143b2efa0(byte *param_1,short *param_2,ushort *param_3)

{
  ushort uVar1;
  short *psVar2;
  ushort *puVar3;
  byte *local_res8;
  short *local_res10;
  ushort *local_res18;
  byte local_18;
  ushort local_14;
  short local_10;
  ushort local_c;
  
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_res8 = param_1;
  psVar2 = param_2;
  puVar3 = param_3;
  uVar1 = local_c;
  while (local_c = uVar1, local_res18 = puVar3, local_res10 = psVar2, local_c < 0x20) {
    local_18 = *local_res8;
    local_res8 = local_res8 + 1;
    if (local_14 < 0xc) {
      if (local_18 < 0xc0) {
        local_14 = (ushort)((int)(uint)local_18 >> 4);
        local_18 = local_18 & 0xf;
      }
      else {
        local_14 = (local_18 & 0x3f) + 0xc;
      }
    }
    else {
      local_14 = ((local_14 & 3) << 4 | (ushort)((int)(uint)local_18 >> 4)) + 0xc;
      local_18 = local_18 & 0xf;
    }
    *local_res10 = local_10;
    psVar2 = local_res10 + 1;
    *local_res18 = local_14;
    puVar3 = local_res18 + 1;
    local_10 = local_10 + local_14;
    uVar1 = local_c + 1;
    if ((local_18 & 0xf0) == 0) {
      local_14 = (ushort)local_18;
      if (local_14 < 0xc) {
        *psVar2 = local_10;
        *puVar3 = local_14;
        local_10 = local_10 + local_14;
        psVar2 = local_res10 + 2;
        puVar3 = local_res18 + 2;
        uVar1 = local_c + 2;
      }
    }
    else {
      local_14 = 0;
    }
  }
  return local_res8;
}



// FUNCTION 143b2f140 FUN_143b2f140 body=804 status=ok
// SIG undefined FUN_143b2f140(void)

short FUN_143b2f140(uint *param_1,byte *param_2,short param_3,int param_4,byte *param_5,
                   short param_6)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  short sVar4;
  byte *pbVar5;
  byte *local_res10;
  short local_res18;
  short local_44;
  ushort local_40;
  int local_38;
  int local_28;
  byte *local_20;
  
  uVar2 = (ushort)param_1[4];
  local_44 = 0;
  uVar3 = *param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  if ((param_4 != 0) && (local_res10 = param_2, local_res18 = param_3, param_4 != 2)) {
    if ((uVar2 < 0x3c) || ((short)param_1[0x22] == -1)) {
      local_28 = param_4;
      if (param_4 == 4) {
        local_28 = 2;
      }
      local_38 = local_28;
      local_res10 = param_2;
      local_res18 = param_3;
LAB_143b2f1fa:
      do {
        if (local_res18 != 0) {
          local_res18 = local_res18 + -1;
          bVar1 = *local_res10;
          local_res10 = local_res10 + 1;
          if (bVar1 != 0x3b) goto LAB_143b2f1fa;
        }
        local_38 = local_38 + -1;
      } while (0 < local_38);
    }
    else {
      local_res18 = 0;
      local_res10 = param_2;
    }
  }
  while (local_res18 != 0) {
    bVar1 = *local_res10;
    pbVar5 = local_res10 + 1;
    if (bVar1 < uVar2) {
      local_40 = *(ushort *)((longlong)param_1 + (ulonglong)bVar1 * 2 + 0x12);
      sVar4 = local_res18 + -1;
      if (local_40 == 0xfffe) {
        local_40 = *(ushort *)
                    ((longlong)param_1 + (longlong)(int)(uint)CONCAT11(bVar1,*pbVar5) * 2 + 0x12);
        pbVar5 = local_res10 + 2;
        sVar4 = local_res18 + -2;
      }
      local_res18 = sVar4;
      local_res10 = pbVar5;
      if (local_40 == 0xffff) {
        if (bVar1 == 0x3b) {
          if (((local_44 != 0) || (param_4 != 2)) ||
             ((0x3b < uVar2 && ((short)param_1[0x22] != -1)))) break;
        }
        else {
          if (param_6 != 0) {
            *param_5 = bVar1;
            param_5 = param_5 + 1;
            param_6 = param_6 + -1;
          }
          local_44 = local_44 + 1;
        }
      }
      else {
        local_20 = (byte *)((longlong)param_1 + (ulonglong)local_40 + (ulonglong)uVar3);
        while( true ) {
          bVar1 = *local_20;
          local_20 = local_20 + 1;
          if (bVar1 == 0) break;
          if (param_6 != 0) {
            *param_5 = bVar1;
            param_5 = param_5 + 1;
            param_6 = param_6 + -1;
          }
          local_44 = local_44 + 1;
        }
      }
    }
    else {
      if (bVar1 == 0x3b) break;
      if (param_6 != 0) {
        *param_5 = bVar1;
        param_5 = param_5 + 1;
        param_6 = param_6 + -1;
      }
      local_44 = local_44 + 1;
      local_res10 = pbVar5;
      local_res18 = local_res18 + -1;
    }
  }
  if (param_6 != 0) {
    *param_5 = 0;
  }
  return local_44;
}



// FUNCTION 143b2f470 FUN_143b2f470 body=1420 status=ok
// SIG undefined FUN_143b2f470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_143b2f470(uint *param_1,int param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *local_res18;
  undefined1 auStack_1c8 [32];
  ushort *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  char *local_190;
  undefined2 local_188;
  ushort local_174;
  char local_170;
  ushort local_16c;
  uint local_168;
  ushort local_164;
  char *local_160;
  ushort local_158;
  uint local_154;
  char local_14c;
  char *local_148;
  int local_140;
  int local_138;
  int local_130;
  uint *local_128;
  undefined4 local_120;
  uint *local_118;
  int local_110;
  int local_10c;
  undefined4 local_108;
  int local_100;
  ulonglong local_f8;
  undefined8 local_e8 [8];
  undefined8 local_a8 [8];
  ushort local_68 [8];
  char local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  if ((param_2 != 0) && (param_2 != 2)) {
    return 0xffff;
  }
  local_14c = (char)param_1[2];
  local_res18 = param_3;
  if (local_14c == '\0') {
    local_128 = param_1 + 3;
    while( true ) {
      uVar2 = *local_128;
      local_128 = (uint *)((longlong)local_128 + 1);
      if ((char)uVar2 == '\0') break;
      cVar1 = *local_res18;
      local_res18 = local_res18 + 1;
      if ((char)uVar2 != cVar1) {
        return 0xffff;
      }
    }
    local_168 = 0;
    for (local_164 = 0; local_164 < *(byte *)((longlong)param_1 + 9); local_164 = local_164 + 1) {
      cVar1 = *local_res18;
      local_res18 = local_res18 + 1;
      if ((cVar1 < '0') || ('9' < cVar1)) {
        if ((cVar1 < 'A') || ('F' < cVar1)) {
          return 0xffff;
        }
        local_168 = local_168 << 4 | (int)cVar1 - 0x37U;
      }
      else {
        local_168 = local_168 << 4 | (int)cVar1 - 0x30U;
      }
    }
    if (((*local_res18 == '\0') && (*param_1 <= local_168)) && (local_168 <= param_1[1])) {
      return local_168;
    }
  }
  else if (local_14c == '\x01') {
    local_118 = param_1 + 3;
    local_16c = (ushort)*(byte *)((longlong)param_1 + 9);
    local_160 = (char *)((longlong)local_118 + (ulonglong)local_16c * 2);
    while( true ) {
      local_170 = *local_160;
      local_138 = (int)local_170;
      local_160 = local_160 + 1;
      if (local_138 == 0) break;
      local_130 = (int)local_170;
      local_140 = (int)*local_res18;
      local_res18 = local_res18 + 1;
      if (local_130 != local_140) {
        return 0xffff;
      }
    }
    local_154 = *param_1;
    local_10c = param_1[1] + 1;
    local_188 = 0x40;
    local_190 = local_58;
    local_198 = local_e8;
    local_1a0 = local_a8;
    local_1a8 = local_68;
    FUN_143b2ffe0(local_118,local_16c,local_160,0);
    iVar3 = _guard_xfg_dispatch_icall_nop(local_res18,local_58);
    if (iVar3 == 0) {
      return local_154;
    }
    while (local_154 = local_154 + 1, (int)local_154 < local_10c) {
      local_174 = local_16c;
      while( true ) {
        local_174 = local_174 - 1;
        local_158 = local_68[local_174] + 1;
        if (local_158 < *(ushort *)((longlong)local_118 + (ulonglong)local_174 * 2)) break;
        local_f8 = (ulonglong)local_174 * 2;
        if (0xf < local_f8) {
                    /* WARNING: Subroutine does not return */
          __report_rangecheckfailure();
        }
        local_68[local_174] = 0;
        local_e8[local_174] = local_a8[local_174];
      }
      local_68[local_174] = local_158;
      local_160 = (char *)local_e8[local_174];
      do {
        cVar1 = *local_160;
        local_160 = local_160 + 1;
      } while (cVar1 != '\0');
      local_e8[local_174] = local_160;
      local_148 = local_res18;
      for (local_174 = 0; local_174 < local_16c; local_174 = local_174 + 1) {
        local_160 = (char *)local_e8[local_174];
        while( true ) {
          cVar1 = *local_160;
          local_160 = local_160 + 1;
          if (cVar1 == '\0') break;
          local_100 = (int)cVar1;
          local_110 = (int)*local_148;
          local_148 = local_148 + 1;
          if (local_100 != local_110) {
            local_160 = "";
            local_174 = 99;
          }
        }
        local_108 = 0;
        local_170 = '\0';
      }
      if ((local_174 < 99) && (*local_148 == '\0')) {
        return local_154;
      }
      local_120 = 0;
    }
  }
  return 0xffff;
}



// FUNCTION 143b2fa00 FUN_143b2fa00 body=134 status=ok
// SIG undefined FUN_143b2fa00(void)

char FUN_143b2fa00(uint param_1)

{
  char local_14;
  
  if (((int)param_1 < 0xfdd0) ||
     (((0xfdef < param_1 && ((param_1 & 0xfffe) != 0xfffe)) || (0x10ffff < param_1)))) {
    local_14 = FUN_143a9db60(param_1);
    if (local_14 == '\x12') {
      if ((param_1 & 0xfffffc00) == 0xd800) {
        local_14 = '\x1f';
      }
      else {
        local_14 = ' ';
      }
    }
  }
  else {
    local_14 = '\x1e';
  }
  return local_14;
}



// FUNCTION 143b2fa90 FUN_143b2fa90 body=61 status=ok
// SIG undefined FUN_143b2fa90(void)

char * FUN_143b2fa90(undefined4 param_1)

{
  byte bVar1;
  char *pcVar2;
  
  bVar1 = FUN_143b2fa00(param_1);
  if (bVar1 < 0x21) {
    pcVar2 = (&PTR_s_unassigned_145d0bf60)[bVar1];
  }
  else {
    pcVar2 = "unknown";
  }
  return pcVar2;
}



// FUNCTION 143b2fad0 FUN_143b2fad0 body=555 status=ok
// SIG undefined FUN_143b2fad0(void)

short FUN_143b2fad0(int param_1,undefined1 *param_2,short param_3)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined1 *local_res10;
  short local_res18;
  ushort local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  lVar3 = FUN_143b2fa90(param_1);
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_3 != 0) {
    *param_2 = 0x3c;
    local_res10 = param_2 + 1;
    local_res18 = param_3 + -1;
  }
  local_24 = 1;
  while (*(char *)(lVar3 + (int)(local_24 - 1)) != '\0') {
    if (local_res18 != 0) {
      *local_res10 = *(undefined1 *)(lVar3 + (int)(local_24 - 1));
      local_res10 = local_res10 + 1;
      local_res18 = local_res18 + -1;
    }
    local_24 = local_24 + 1;
  }
  if (local_res18 != 0) {
    *local_res10 = 0x2d;
    local_res10 = local_res10 + 1;
    local_res18 = local_res18 + -1;
  }
  local_1c = 0;
  for (local_20 = param_1; local_20 != 0; local_20 = local_20 >> 4) {
    local_1c = local_1c + 1;
  }
  if (local_1c < 4) {
    local_1c = 4;
  }
  local_18 = local_1c;
  local_20 = param_1;
  for (; ((local_20 != 0 || (0 < local_18)) && (local_res18 != 0)); local_res18 = local_res18 + -1)
  {
    bVar1 = (byte)local_20 & 0xf;
    if (bVar1 < 10) {
      cVar2 = bVar1 + 0x30;
    }
    else {
      cVar2 = bVar1 + 0x37;
    }
    local_18 = local_18 + -1;
    local_res10[local_18] = cVar2;
    local_20 = local_20 >> 4;
  }
  if (local_res18 != 0) {
    local_res10[local_1c] = 0x3e;
  }
  return local_24 + (short)local_1c + 2;
}



// FUNCTION 143b2fd00 FUN_143b2fd00 body=193 status=ok
// SIG undefined FUN_143b2fd00(void)

ushort * FUN_143b2fd00(longlong param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  ushort local_28;
  ushort local_24;
  
  puVar4 = (ushort *)(param_1 + (ulonglong)*(uint *)(param_1 + 4));
  local_28 = 0;
  uVar1 = local_28;
  local_24 = *puVar4;
  while (local_28 = uVar1, (int)(uint)local_28 < (int)(local_24 - 1)) {
    iVar3 = (int)((uint)local_28 + (uint)local_24) >> 1;
    uVar2 = (ushort)iVar3;
    uVar1 = uVar2;
    if ((param_2 >> 5 & 0xffff) < (uint)puVar4[(longlong)(iVar3 * 3) + 1]) {
      uVar1 = local_28;
      local_24 = uVar2;
    }
  }
  return puVar4 + (longlong)(int)((uint)local_28 * 3) + 1;
}



// FUNCTION 143b2fdd0 FUN_143b2fdd0 body=210 status=ok
// SIG undefined FUN_143b2fdd0(void)

undefined1 FUN_143b2fdd0(void)

{
  ushort *in_R9;
  undefined1 local_18;
  
  if (((((*in_R9 < 0x14) || ((char)in_R9[2] != '\0')) || (*(char *)((longlong)in_R9 + 5) != '\0'))
      || (((char)in_R9[4] != 'u' || (*(char *)((longlong)in_R9 + 9) != 'n')))) ||
     (((char)in_R9[5] != 'a' ||
      ((*(char *)((longlong)in_R9 + 0xb) != 'm' || ((char)in_R9[6] != '\x01')))))) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143b2feb0 FUN_143b2feb0 body=50 status=ok
// SIG undefined FUN_143b2feb0(void)

void FUN_143b2feb0(undefined4 *param_1)

{
  FUN_143aa29a0(&DAT_146bc7da0,FUN_143b2fef0,param_1);
  FUN_143a8b110(*param_1);
  return;
}



// FUNCTION 143b2fef0 FUN_143b2fef0 body=136 status=ok
// SIG undefined FUN_143b2fef0(void)

void FUN_143b2fef0(undefined4 *param_1)

{
  char cVar1;
  
  DAT_146bc7d90 = FUN_143ac5410(0,&DAT_145d0bf58,"unames",FUN_143b2fdd0,0,param_1);
  cVar1 = FUN_143a8b0e0(*param_1);
  if (cVar1 == '\0') {
    DAT_146bc7d98 = FUN_143ac5780(DAT_146bc7d90);
  }
  else {
    DAT_146bc7d90 = 0;
  }
  FUN_143aa77b0(10,FUN_143b2ff80);
  return;
}



// FUNCTION 143b2ff80 FUN_143b2ff80 body=87 status=ok
// SIG undefined FUN_143b2ff80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_143b2ff80(void)

{
  if (DAT_146bc7d90 != 0) {
    FUN_143ac56d0(DAT_146bc7d90);
    DAT_146bc7d90 = 0;
  }
  if (DAT_146bc7d98 != 0) {
    DAT_146bc7d98 = 0;
  }
  FUN_143a9a9f0(&DAT_146bc7da0);
  _DAT_146bc7da8 = 0;
  return 1;
}



// FUNCTION 143b2ffe0 FUN_143b2ffe0 body=590 status=ok
// SIG undefined FUN_143b2ffe0(void)

short FUN_143b2ffe0(longlong param_1,short param_2,char *param_3,uint param_4,undefined2 *param_5,
                   undefined8 *param_6,undefined8 *param_7,char *param_8,short param_9)

{
  char cVar1;
  ushort uVar2;
  char *local_res18;
  uint local_res20;
  ushort local_38;
  short local_34;
  short local_2c;
  
  local_2c = 0;
  local_res20 = param_4;
  for (local_38 = param_2 - 1U; local_38 != 0; local_38 = local_38 - 1) {
    uVar2 = *(ushort *)(param_1 + (ulonglong)local_38 * 2);
    param_5[local_38] = (short)(local_res20 % (uint)uVar2);
    local_res20 = local_res20 / uVar2;
  }
  *param_5 = (undefined2)local_res20;
  local_res18 = param_3;
  while( true ) {
    if (param_6 != (undefined8 *)0x0) {
      *param_6 = local_res18;
      param_6 = param_6 + 1;
    }
    for (local_34 = param_5[local_38]; local_34 != 0; local_34 = local_34 + -1) {
      do {
        cVar1 = *local_res18;
        local_res18 = local_res18 + 1;
      } while (cVar1 != '\0');
    }
    if (param_7 != (undefined8 *)0x0) {
      *param_7 = local_res18;
      param_7 = param_7 + 1;
    }
    while( true ) {
      cVar1 = *local_res18;
      local_res18 = local_res18 + 1;
      if (cVar1 == '\0') break;
      if (param_9 != 0) {
        *param_8 = cVar1;
        param_8 = param_8 + 1;
        param_9 = param_9 + -1;
      }
      local_2c = local_2c + 1;
    }
    if ((ushort)(param_2 - 1U) <= local_38) break;
    local_34 = *(short *)(param_1 + (ulonglong)local_38 * 2) - param_5[local_38];
    while (local_34 = local_34 + -1, local_34 != 0) {
      do {
        cVar1 = *local_res18;
        local_res18 = local_res18 + 1;
      } while (cVar1 != '\0');
    }
    local_38 = local_38 + 1;
  }
  if (param_9 != 0) {
    *param_8 = '\0';
  }
  return local_2c;
}



// FUNCTION 143b30230 FUN_143b30230 body=1225 status=ok
// SIG undefined FUN_143b30230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143b30230(int param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  char *local_res10;
  undefined1 auStack_1a8 [32];
  undefined1 **local_188;
  int local_180;
  uint local_178;
  char local_174;
  int local_170;
  int local_16c;
  uint local_168;
  int *local_160;
  int local_158;
  ulonglong local_150;
  ulonglong local_148;
  int *local_140;
  ulonglong local_138;
  undefined1 *local_130;
  int local_128;
  char *local_120;
  char acStack_118 [128];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_170 = 0;
  local_16c = 0xffff;
  if ((param_3 != (undefined4 *)0x0) && (cVar1 = FUN_143a8b0e0(*param_3), cVar1 == '\0')) {
    if ((param_1 < 4) && ((param_2 != (char *)0x0 && (*param_2 != '\0')))) {
      cVar1 = FUN_143b2feb0(param_3);
      if (cVar1 != '\0') {
        local_res10 = param_2;
        for (local_178 = 0; local_178 < 0x78; local_178 = local_178 + 1) {
          local_174 = *local_res10;
          local_158 = (int)local_174;
          local_res10 = local_res10 + 1;
          if (local_158 == 0) {
            local_150 = (ulonglong)local_178;
            if (0x77 < local_150) {
                    /* WARNING: Subroutine does not return */
              __report_rangecheckfailure();
            }
            acStack_118[local_150] = '\0';
            local_98[local_178] = 0;
            break;
          }
          uVar2 = FUN_143ab85d0(local_174);
          local_98[local_178] = uVar2;
          cVar1 = FUN_143ab82e0(local_174);
          acStack_118[local_178] = cVar1;
        }
        if (local_178 == 0x78) {
          *param_3 = 0xc;
        }
        else if (acStack_118[0] == '<') {
          if ((param_1 == 2) && (acStack_118[local_178 - 1] == '>')) {
            for (local_178 = local_178 - 2;
                (acStack_118[local_178] != '\0' && (acStack_118[local_178] != '-'));
                local_178 = local_178 - 1) {
            }
            if (acStack_118[local_178] == '-') {
              local_138 = (ulonglong)local_178;
              if (0x77 < local_138) {
                    /* WARNING: Subroutine does not return */
                __report_rangecheckfailure();
              }
              acStack_118[local_138] = '\0';
              while (local_178 = local_178 + 1, acStack_118[local_178] != '>') {
                if ((acStack_118[local_178] < '0') || ('9' < acStack_118[local_178])) {
                  if ((acStack_118[local_178] < 'a') || ('f' < acStack_118[local_178])) {
                    *param_3 = 0xc;
                    return local_16c;
                  }
                  local_170 = local_170 * 0x10 + -0x57 + (int)acStack_118[local_178];
                }
                else {
                  local_170 = local_170 * 0x10 + -0x30 + (int)acStack_118[local_178];
                }
              }
              local_148 = (ulonglong)local_178;
              if (0x77 < local_148) {
                    /* WARNING: Subroutine does not return */
                __report_rangecheckfailure();
              }
              acStack_118[local_148] = '\0';
              for (local_168 = 0; local_168 < 0x21; local_168 = local_168 + 1) {
                local_120 = acStack_118 + 1;
                iVar4 = _guard_xfg_dispatch_icall_nop
                                  (local_120,(&PTR_s_unassigned_145d0bf60)[local_168]);
                if (iVar4 == 0) {
                  bVar3 = FUN_143b2fa00(local_170);
                  if (bVar3 == local_168) {
                    return local_170;
                  }
                  break;
                }
              }
            }
          }
          *param_3 = 0xc;
        }
        else {
          local_140 = (int *)(DAT_146bc7d98 + (ulonglong)*(uint *)(DAT_146bc7d98 + 0xc));
          local_160 = local_140 + 1;
          for (local_178 = *local_140; local_178 != 0; local_178 = local_178 + -1) {
            iVar4 = FUN_143b2f470(local_160,param_1,local_98);
            if (iVar4 != 0xffff) {
              return iVar4;
            }
            local_160 = (int *)((longlong)local_160 +
                               (ulonglong)*(ushort *)((longlong)local_160 + 10));
            local_170 = 0xffff;
          }
          local_130 = local_98;
          local_128 = local_16c;
          local_188 = &local_130;
          local_180 = param_1;
          FUN_143b2e9c0(DAT_146bc7d98,0,0x110000,0);
          bVar5 = local_128 == local_16c;
          local_16c = local_128;
          if (bVar5) {
            *param_3 = 0xc;
          }
        }
      }
    }
    else {
      *param_3 = 1;
    }
  }
  return local_16c;
}



// FUNCTION 143b30700 FUN_143b30700 body=92 status=ok
// SIG undefined FUN_143b30700(void)

undefined8 *
FUN_143b30700(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_4;
  param_1[2] = param_3;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 143b30760 FUN_143b30760 body=191 status=ok
// SIG undefined FUN_143b30760(void)

void FUN_143b30760(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1[3] == 0) {
    iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1[1]);
    FUN_143b0fce0(param_1[1],iVar1 + param_2);
    iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1[1]);
    iVar2 = FUN_143a904f0(*param_1);
    if (iVar2 < iVar1) {
      uVar3 = FUN_143a904f0(*param_1);
      FUN_143b0fce0(param_1[1],uVar3);
    }
  }
  else {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_2;
    iVar1 = FUN_143a904f0(param_1[3]);
    if (*(int *)(param_1 + 4) == iVar1) {
      param_1[3] = 0;
    }
  }
  return;
}



// FUNCTION 143b30820 FUN_143b30820 body=122 status=ok
// SIG undefined FUN_143b30820(void)

ulonglong FUN_143b30820(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  uint local_14;
  
  if (param_1[3] == 0) {
    iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1[1]);
    iVar2 = FUN_143a904f0(*param_1);
    if (iVar1 < iVar2) {
      local_14 = FUN_143a8e3e0(*param_1,iVar1);
    }
    else {
      local_14 = 0xffffffff;
    }
    uVar3 = (ulonglong)local_14;
  }
  else {
    uVar3 = FUN_143a8e3e0(param_1[3],*(undefined4 *)(param_1 + 4));
  }
  return uVar3;
}



// FUNCTION 143b308a0 FUN_143b308a0 body=82 status=ok
// SIG undefined FUN_143b308a0(void)

undefined1 FUN_143b308a0(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[3] == 0) {
    iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1[1]);
    iVar2 = FUN_143a904f0(*param_1);
    if (iVar1 == iVar2) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143b30900 accHitTest body=52 status=ok
// SIG long accHitTest(CFormView * this, long param_1, long param_2, tagVARIANT * param_3)

/* Library Function - Single Match
    public: virtual long __cdecl CFormView::accHitTest(long,long,struct tagVARIANT * __ptr64)
   __ptr64
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug, Visual Studio 2010 Debug */

long __thiscall CFormView::accHitTest(CFormView *this,long param_1,long param_2,tagVARIANT *param_3)

{
  long lVar1;
  
  lVar1 = FUN_143a8edd0(this,param_1,param_2,param_3);
  return lVar1;
}



// FUNCTION 143b30940 FUN_143b30940 body=74 status=ok
// SIG undefined FUN_143b30940(void)

void FUN_143b30940(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(*(undefined8 *)(param_1 + 8));
  *(undefined4 *)(param_2 + 1) = uVar1;
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(param_1 + 0x20);
  return;
}



// FUNCTION 143b30990 FUN_143b30990 body=32 status=ok
// SIG undefined FUN_143b30990(void)

void FUN_143b30990(undefined8 param_1,undefined4 param_2)

{
  FUN_143b30760(param_1,param_2);
  return;
}



// FUNCTION 143b309b0 FUN_143b309b0 body=129 status=ok
// SIG undefined FUN_143b309b0(void)

tagVARIANT * FUN_143b309b0(undefined8 *param_1,tagVARIANT *param_2,int param_3)

{
  long lVar1;
  long local_res18;
  
  local_res18 = param_3;
  if (param_3 < 0) {
    local_res18 = 0x7fffffff;
  }
  if (param_1[3] == 0) {
    lVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1[1]);
    CFormView::accHitTest((CFormView *)*param_1,lVar1,local_res18,param_2);
  }
  else {
    CFormView::accHitTest((CFormView *)param_1[3],*(long *)(param_1 + 4),local_res18,param_2);
  }
  return param_2;
}



// FUNCTION 143b30a40 FUN_143b30a40 body=783 status=ok
// SIG undefined FUN_143b30a40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_143b30a40(undefined8 *param_1,uint param_2,undefined1 *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  uint local_98;
  undefined4 local_94;
  undefined4 local_90;
  uint local_8c;
  uint local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_70 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    local_98 = 0xffffffff;
    *param_3 = 0;
    do {
      while( true ) {
        local_98 = FUN_143b30820(param_1);
        if (local_98 < 0x10000) {
          local_94 = 1;
        }
        else {
          local_94 = 2;
        }
        FUN_143b30760(param_1,local_94);
        if ((((local_98 != 0x24) || (param_1[3] != 0)) || ((param_2 & 1) == 0)) || (param_1[2] == 0)
           ) break;
        local_a8 = FUN_143a904f0(*param_1);
        local_78 = param_1[2];
        local_80 = *(longlong *)param_1[2];
        (**(code **)(local_80 + 0x18))(local_78,local_68,*param_1,param_1[1]);
        iVar2 = FUN_143a904f0(local_68);
        if (iVar2 == 0) {
          FUN_143a8dc60(local_68);
          return local_98;
        }
        *(undefined4 *)(param_1 + 4) = 0;
        uVar3 = (**(code **)(*(longlong *)param_1[2] + 8))(param_1[2],local_68);
        param_1[3] = uVar3;
        if (param_1[3] == 0) {
          *param_4 = 0x10012;
          local_88 = 0xffffffff;
          FUN_143a8dc60(local_68);
          return local_88;
        }
        iVar2 = FUN_143a904f0(param_1[3]);
        if (iVar2 == 0) {
          param_1[3] = 0;
        }
        FUN_143a8dc60(local_68);
      }
    } while (((param_2 & 4) != 0) && (cVar1 = FUN_143b28380(local_98), cVar1 != '\0'));
    local_8c = local_98;
    if ((local_98 == 0x5c) && ((param_2 & 2) != 0)) {
      FUN_143a8ac30(local_40);
      local_90 = 0;
      uVar3 = FUN_143b309b0(param_1,local_40,0xc);
      local_98 = FUN_143a912c0(uVar3,&local_90);
      FUN_143b30990(param_1,local_90);
      *param_3 = 1;
      if ((int)local_98 < 0) {
        *param_4 = 0x10004;
        local_8c = 0xffffffff;
        FUN_143a8dc60(local_40);
      }
      else {
        FUN_143a8dc60(local_40);
        local_8c = local_98;
      }
    }
  }
  else {
    local_8c = 0xffffffff;
  }
  return local_8c;
}



// FUNCTION 143b30d60 FUN_143b30d60 body=74 status=ok
// SIG undefined FUN_143b30d60(void)

void FUN_143b30d60(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x18) = *param_2;
  FUN_143b0fce0(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_2 + 1));
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((longlong)param_2 + 0xc);
  return;
}



// FUNCTION 143b30db0 FUN_143b30db0 body=105 status=ok
// SIG undefined FUN_143b30db0(void)

void FUN_143b30db0(undefined8 param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 local_14;
  
  if ((param_2 & 4) != 0) {
    while( true ) {
      uVar2 = FUN_143b30820(param_1);
      cVar1 = FUN_143b28380(uVar2);
      if (cVar1 == '\0') break;
      if (uVar2 < 0x10000) {
        local_14 = 1;
      }
      else {
        local_14 = 2;
      }
      FUN_143b30760(param_1,local_14);
    }
  }
  return;
}



// FUNCTION 143b30e20 FUN_143b30e20 body=82 status=ok
// SIG undefined FUN_143b30e20(void)

undefined8 * FUN_143b30e20(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143b1e7d0(param_1);
  *param_1 = icu_53::FilteredNormalizer2::vftable;
  param_1[1] = param_2;
  param_1[2] = param_3;
  return param_1;
}



// FUNCTION 143b30e80 FUN_143b30e80 body=283 status=ok
// SIG undefined FUN_143b30e80(void)

undefined8 *
FUN_143b30e80(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_20;
  
  puVar2 = param_1;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined8 *)((longlong)puVar2 + 1);
  }
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::Normalizer::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  lVar1 = FUN_143a8d310(0x20);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143aa5e40(lVar1,param_2,param_3);
  }
  param_1[4] = local_20;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  FUN_143a8ac30(param_1 + 6);
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_143b311b0(param_1);
  return param_1;
}



// FUNCTION 143b30fa0 FUN_143b30fa0 body=205 status=ok
// SIG undefined FUN_143b30fa0(void)

void FUN_143b30fa0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::Normalizer::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143a8dc60(param_1 + 6);
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143b31070 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b310b0 FUN_143b310b0 body=54 status=ok
// SIG undefined FUN_143b310b0(void)

undefined8 FUN_143b310b0(undefined8 param_1,uint param_2)

{
  FUN_143b30fa0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143b310f0 FUN_143b310f0 body=43 status=ok
// SIG undefined FUN_143b310f0(void)

void FUN_143b310f0(longlong param_1)

{
  FUN_143a90910(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}



// FUNCTION 143b31120 FUN_143b31120 body=28 status=ok
// SIG undefined FUN_143b31120(void)

void FUN_143b31120(longlong param_1)

{
  FUN_143a93e50(*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 143b31140 FUN_143b31140 body=19 status=ok
// SIG undefined FUN_143b31140(void)

void FUN_143b31140(void)

{
  FUN_143b311a0();
  return;
}



// FUNCTION 143b31160 FUN_143b31160 body=59 status=ok
// SIG undefined FUN_143b31160(void)

undefined4 FUN_143b31160(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_143a904f0(param_1 + 0x30);
  if (*(int *)(param_1 + 0x58) < iVar2) {
    uVar1 = *(undefined4 *)(param_1 + 0x28);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
  }
  return uVar1;
}



// FUNCTION 143b311a0 FUN_143b311a0 body=8 status=ok
// SIG undefined FUN_143b311a0(void)

undefined * FUN_143b311a0(void)

{
  return &DAT_146bc7dd0;
}



// FUNCTION 143b311b0 FUN_143b311b0 body=297 status=ok
// SIG undefined FUN_143b311b0(void)

void FUN_143b311b0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_48 [2];
  undefined8 *local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_48[0] = 0;
  uVar2 = FUN_143b1f100(*(undefined4 *)(param_1 + 0x18),local_48);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  if ((*(uint *)(param_1 + 0x1c) & 0x20) != 0) {
    local_40 = *(undefined8 **)(param_1 + 8);
    local_20 = local_40;
    if (local_40 == (undefined8 *)0x0) {
      local_18 = 0;
    }
    else {
      local_18 = (**(code **)*local_40)(local_40,1);
    }
    local_38 = FUN_143a8d310(0x18);
    if (local_38 == 0) {
      local_30 = 0;
    }
    else {
      uVar2 = FUN_143b1a370(local_48);
      local_30 = FUN_143b30e20(local_38,*(undefined8 *)(param_1 + 0x10),uVar2);
    }
    local_28 = local_30;
    *(undefined8 *)(param_1 + 8) = local_30;
    *(undefined8 *)(param_1 + 0x10) = local_30;
  }
  cVar1 = FUN_143a8b0e0(local_48[0]);
  if (cVar1 != '\0') {
    local_48[0] = 0;
    uVar2 = FUN_143b1f4a0(local_48);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
  }
  return;
}



// FUNCTION 143b312e0 FUN_143b312e0 body=247 status=ok
// SIG undefined FUN_143b312e0(void)

ulonglong FUN_143b312e0(undefined8 param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 local_28 [40];
  
  plVar3 = (longlong *)FUN_143b1f100(param_2,param_4);
  cVar1 = FUN_143a8b110(*param_4);
  if (cVar1 == '\0') {
    uVar5 = 0;
  }
  else if ((param_3 & 0x20) == 0) {
    uVar5 = (**(code **)(*plVar3 + 0x48))(plVar3,param_1,param_4);
  }
  else {
    uVar4 = FUN_143b1a370(param_4);
    plVar3 = (longlong *)FUN_143b30e20(local_28,plVar3,uVar4);
    bVar2 = (**(code **)(*plVar3 + 0x48))(plVar3,param_1,param_4);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_28);
    uVar5 = (ulonglong)bVar2;
  }
  return uVar5;
}



// FUNCTION 143b313e0 FUN_143b313e0 body=146 status=ok
// SIG undefined FUN_143b313e0(void)

uint FUN_143b313e0(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int local_18;
  
  iVar2 = FUN_143a904f0(param_1 + 0x30);
  if ((iVar2 <= *(int *)(param_1 + 0x58)) && (cVar1 = FUN_143b31480(param_1), cVar1 == '\0')) {
    return 0xffff;
  }
  uVar3 = FUN_143a8e3e0(param_1 + 0x30,*(undefined4 *)(param_1 + 0x58));
  if (uVar3 < 0x10000) {
    local_18 = 1;
  }
  else {
    local_18 = 2;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_18;
  return uVar3;
}



// FUNCTION 143b31480 FUN_143b31480 body=594 status=ok
// SIG undefined FUN_143b31480(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_143b31480(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_67;
  undefined4 local_64;
  undefined4 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  FUN_143b310f0(param_1);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x2c);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x70))
            (*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x2c));
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))(*(undefined8 *)(param_1 + 0x20));
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(undefined8 *)(param_1 + 0x20));
  FUN_143a8d5f0(local_40,uVar2);
  do {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))(*(undefined8 *)(param_1 + 0x20));
    if (cVar1 == '\0') {
LAB_143b315fc:
      uVar2 = FUN_143a93e60(*(undefined8 *)(param_1 + 0x20));
      *(undefined4 *)(param_1 + 0x2c) = uVar2;
      local_64 = 0;
      local_50 = *(undefined8 *)(param_1 + 0x10);
      local_58 = **(longlong **)(param_1 + 0x10);
      (**(code **)(local_58 + 0x10))(local_50,local_40,param_1 + 0x30,&local_64);
      cVar1 = FUN_143a8b110(local_64);
      if ((cVar1 == '\0') || (cVar1 = FUN_143a903a0(param_1 + 0x30), cVar1 != '\0')) {
        local_68 = 0;
      }
      else {
        local_68 = 1;
      }
      local_67 = local_68;
      FUN_143a8dc60(local_40);
      return local_67;
    }
    local_60 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))
                         (*(undefined8 *)(param_1 + 0x20));
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))
                      (*(undefined8 *)(param_1 + 0x10),local_60);
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0xc0))
                (*(undefined8 *)(param_1 + 0x20),0xffffffff,1);
      goto LAB_143b315fc;
    }
    FUN_143a8e0c0(local_40,local_60);
  } while( true );
}



// FUNCTION 143b316e0 FUN_143b316e0 body=498 status=ok
// SIG undefined FUN_143b316e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143b316e0(undefined1 *param_1,undefined4 param_2,uint param_3,undefined1 *param_4,
                  undefined4 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined1 local_58 [24];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_60 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  cVar1 = FUN_143a90330(param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_143a8b0e0(*param_5), cVar1 == '\0')) {
    FUN_143a8ac30(local_40);
    local_88 = param_4;
    if (param_1 == param_4) {
      local_88 = local_40;
    }
    local_80 = (longlong *)FUN_143b1f100(param_2,param_5);
    cVar1 = FUN_143a8b110(*param_5);
    if (cVar1 != '\0') {
      if ((param_3 & 0x20) == 0) {
        (**(code **)(*local_80 + 0x10))(local_80,param_1,local_88,param_5);
      }
      else {
        uVar2 = FUN_143b1a370(param_5);
        local_78 = (longlong *)FUN_143b30e20(local_58,local_80,uVar2);
        local_70 = local_78;
        local_68 = local_78;
        (**(code **)(*local_78 + 0x10))(local_78,param_1,local_88,param_5);
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_58);
      }
    }
    if ((local_88 == local_40) && (cVar1 = FUN_143a8b110(*param_5), cVar1 != '\0')) {
      FUN_143a8dcd0(param_4,local_88);
    }
    FUN_143a8dc60(local_40);
  }
  else {
    FUN_143a90e90(param_4);
    cVar1 = FUN_143a8b110(*param_5);
    if (cVar1 != '\0') {
      *param_5 = 1;
    }
  }
  return;
}



// FUNCTION 143b318e0 FUN_143b318e0 body=249 status=ok
// SIG undefined FUN_143b318e0(void)

ulonglong FUN_143b318e0(undefined8 param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 local_28 [40];
  
  plVar3 = (longlong *)FUN_143b1f100(param_2,param_4);
  cVar1 = FUN_143a8b110(*param_4);
  if (cVar1 == '\0') {
    uVar5 = 2;
  }
  else if ((param_3 & 0x20) == 0) {
    uVar5 = (**(code **)(*plVar3 + 0x50))(plVar3,param_1,param_4);
  }
  else {
    uVar4 = FUN_143b1a370(param_4);
    plVar3 = (longlong *)FUN_143b30e20(local_28,plVar3,uVar4);
    uVar2 = (**(code **)(*plVar3 + 0x50))(plVar3,param_1,param_4);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_28);
    uVar5 = (ulonglong)uVar2;
  }
  return uVar5;
}



// FUNCTION 143b319e0 FUN_143b319e0 body=662 status=ok
// SIG undefined FUN_143b319e0(void)

undefined4 FUN_143b319e0(longlong param_1,ushort *param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *local_res10;
  uint local_res18;
  uint local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  local_res10 = param_2;
  local_res18 = param_3;
  if (param_3 == 0) {
    local_res18 = (uint)*param_2;
    local_res10 = param_2 + 1;
  }
  local_res18 = local_res18 + 1;
  while (5 < (int)local_res18) {
    if ((int)param_4 < (int)(uint)*local_res10) {
      local_res10 = (ushort *)FUN_143b31d10(local_res10 + 1);
      local_res18 = (int)local_res18 >> 1;
    }
    else {
      local_res18 = local_res18 - ((int)local_res18 >> 1);
      local_res10 = (ushort *)FUN_143b32090(local_res10 + 1);
    }
  }
  do {
    puVar2 = local_res10 + 1;
    if (param_4 == *local_res10) {
      local_34 = (uint)*puVar2;
      if ((*puVar2 & 0x8000) == 0) {
        puVar2 = local_res10 + 2;
        if (0x3fff < local_34) {
          if (local_34 < 0x7fff) {
            local_34 = (local_34 - 0x4000) * 0x10000 | (uint)*puVar2;
            puVar2 = local_res10 + 3;
          }
          else {
            local_34 = CONCAT22(*puVar2,local_res10[3]);
            puVar2 = local_res10 + 4;
          }
        }
        local_res10 = puVar2;
        local_res10 = local_res10 + (int)local_34;
        if (*local_res10 < 0x40) {
          local_24 = 1;
        }
        else {
          local_24 = FUN_143b321d0(*local_res10);
        }
        local_28 = local_24;
      }
      else {
        local_28 = 2;
        local_res10 = puVar2;
      }
      *(ushort **)(param_1 + 0x10) = local_res10;
      return local_28;
    }
    local_res18 = local_res18 + -1;
    local_res10 = (ushort *)FUN_143b32140(puVar2);
  } while (1 < (int)local_res18);
  if (param_4 == *local_res10) {
    *(ushort **)(param_1 + 0x10) = local_res10 + 1;
    uVar1 = local_res10[1];
    if (uVar1 < 0x40) {
      local_30 = 1;
    }
    else {
      local_30 = FUN_143b321d0(uVar1);
    }
  }
  else {
    FUN_143b27f60(param_1);
    local_30 = 0;
  }
  return local_30;
}



// FUNCTION 143b31c80 FUN_143b31c80 body=137 status=ok
// SIG undefined FUN_143b31c80(void)

undefined4 FUN_143b31c80(undefined8 param_1,uint param_2)

{
  uint uVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((int)param_2 < 0x10000) {
    local_14 = FUN_143b1dea0(param_1,param_2);
  }
  else {
    uVar1 = FUN_143b1dea0(param_1,((int)param_2 >> 10) + 0xd7c0U & 0xffff);
    if ((uVar1 & 1) == 0) {
      local_18 = 0;
    }
    else {
      local_18 = FUN_143b31dc0(param_1,param_2 & 0x3ff | 0xdc00);
    }
    local_14 = local_18;
  }
  return local_14;
}



// FUNCTION 143b31d10 FUN_143b31d10 body=168 status=ok
// SIG undefined FUN_143b31d10(void)

ushort * FUN_143b31d10(ushort *param_1)

{
  ushort *local_res8;
  uint local_18;
  
  local_18 = (uint)*param_1;
  local_res8 = param_1 + 1;
  if (0xfbff < local_18) {
    if (local_18 == 0xffff) {
      local_18 = CONCAT22(*local_res8,param_1[2]);
      local_res8 = param_1 + 3;
    }
    else {
      local_18 = (local_18 - 0xfc00) * 0x10000 | (uint)*local_res8;
      local_res8 = param_1 + 2;
    }
  }
  return local_res8 + (int)local_18;
}



// FUNCTION 143b31dc0 FUN_143b31dc0 body=239 status=ok
// SIG undefined FUN_143b31dc0(void)

ulonglong FUN_143b31dc0(longlong param_1,uint param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  ulonglong uVar4;
  uint local_20;
  
  puVar2 = *(ushort **)(param_1 + 0x10);
  if (puVar2 == (ushort *)0x0) {
    uVar4 = 0;
  }
  else if (*(int *)(param_1 + 0x18) < 0) {
    uVar4 = FUN_143b31f50(param_1,puVar2,param_2);
  }
  else if (param_2 == *puVar2) {
    iVar3 = *(int *)(param_1 + 0x18) + -1;
    *(int *)(param_1 + 0x18) = iVar3;
    *(ushort **)(param_1 + 0x10) = puVar2 + 1;
    if ((iVar3 < 0) && (uVar1 = puVar2[1], 0x3f < uVar1)) {
      local_20 = FUN_143b321d0(uVar1);
    }
    else {
      local_20 = 1;
    }
    uVar4 = (ulonglong)local_20;
  }
  else {
    FUN_143b27f60(param_1);
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 143b31ec0 FUN_143b31ec0 body=137 status=ok
// SIG undefined FUN_143b31ec0(void)

undefined4 FUN_143b31ec0(undefined8 param_1,uint param_2)

{
  uint uVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((int)param_2 < 0x10000) {
    local_14 = FUN_143b31dc0(param_1,param_2);
  }
  else {
    uVar1 = FUN_143b31dc0(param_1,((int)param_2 >> 10) + 0xd7c0U & 0xffff);
    if ((uVar1 & 1) == 0) {
      local_18 = 0;
    }
    else {
      local_18 = FUN_143b31dc0(param_1,param_2 & 0x3ff | 0xdc00);
    }
    local_14 = local_18;
  }
  return local_14;
}



// FUNCTION 143b31f50 FUN_143b31f50 body=308 status=ok
// SIG undefined FUN_143b31f50(void)

ulonglong FUN_143b31f50(longlong param_1,ushort *param_2,uint param_3)

{
  ushort uVar1;
  ulonglong uVar2;
  ushort *local_res10;
  uint local_28;
  uint local_20;
  
  local_28 = (uint)*param_2;
  local_res10 = param_2 + 1;
  while( true ) {
    if (local_28 < 0x30) {
      uVar2 = FUN_143b319e0(param_1,local_res10,local_28,param_3);
      return uVar2;
    }
    if (local_28 < 0x40) break;
    if ((local_28 & 0x8000) != 0) goto LAB_143b3207e;
    local_res10 = (ushort *)FUN_143b320f0(local_res10,local_28);
    local_28 = local_28 & 0x3f;
  }
  if (param_3 == *local_res10) {
    *(uint *)(param_1 + 0x18) = local_28 - 0x31;
    *(ushort **)(param_1 + 0x10) = local_res10 + 1;
    if (((int)(local_28 - 0x31) < 0) && (uVar1 = local_res10[1], 0x3f < uVar1)) {
      local_20 = FUN_143b321d0(uVar1);
    }
    else {
      local_20 = 1;
    }
    return (ulonglong)local_20;
  }
LAB_143b3207e:
  FUN_143b27f60(param_1);
  return 0;
}



// FUNCTION 143b32090 FUN_143b32090 body=92 status=ok
// SIG undefined FUN_143b32090(void)

ushort * FUN_143b32090(ushort *param_1)

{
  ushort *local_res8;
  
  local_res8 = param_1 + 1;
  if (0xfbff < *param_1) {
    if (*param_1 == 0xffff) {
      local_res8 = param_1 + 3;
    }
    else {
      local_res8 = param_1 + 2;
    }
  }
  return local_res8;
}



// FUNCTION 143b320f0 FUN_143b320f0 body=65 status=ok
// SIG undefined FUN_143b320f0(void)

longlong FUN_143b320f0(longlong param_1,int param_2)

{
  undefined8 local_res8;
  
  local_res8 = param_1;
  if (0x403f < param_2) {
    if (param_2 < 0x7fc0) {
      local_res8 = param_1 + 2;
    }
    else {
      local_res8 = param_1 + 4;
    }
  }
  return local_res8;
}



// FUNCTION 143b32140 FUN_143b32140 body=61 status=ok
// SIG undefined FUN_143b32140(void)

void FUN_143b32140(ushort *param_1)

{
  FUN_143b32180(param_1 + 1,*param_1 & 0x7fff);
  return;
}



// FUNCTION 143b32180 FUN_143b32180 body=65 status=ok
// SIG undefined FUN_143b32180(void)

longlong FUN_143b32180(longlong param_1,int param_2)

{
  undefined8 local_res8;
  
  local_res8 = param_1;
  if (0x3fff < param_2) {
    if (param_2 < 0x7fff) {
      local_res8 = param_1 + 2;
    }
    else {
      local_res8 = param_1 + 4;
    }
  }
  return local_res8;
}



// FUNCTION 143b321d0 FUN_143b321d0 body=21 status=ok
// SIG undefined FUN_143b321d0(void)

int FUN_143b321d0(int param_1)

{
  return 3 - (param_1 >> 0xf);
}



// FUNCTION 143b321f0 FUN_143b321f0 body=427 status=ok
// SIG undefined FUN_143b321f0(void)

int FUN_143b321f0(longlong param_1,int param_2)

{
  void *_Dst;
  int local_28;
  int local_24;
  
  if (*(int *)(param_1 + 0x2331c) == 0) {
    local_28 = *(int *)(param_1 + 0x23318);
    if (*(int *)(param_1 + 0x23314) < local_28 + 0x20) {
      if (*(int *)(param_1 + 0x23314) < 0x20000) {
        local_24 = 0x20000;
      }
      else {
        if (0x11047f < *(int *)(param_1 + 0x23314)) {
          return -1;
        }
        local_24 = 0x110480;
      }
      _Dst = (void *)FUN_143aa7a40(local_24 << 2);
      if (_Dst == (void *)0x0) {
        return -1;
      }
      _guard_xfg_dispatch_icall_nop
                (_Dst,*(void **)(param_1 + 0x23300),(longlong)(*(int *)(param_1 + 0x23318) << 2));
      FUN_143aa79f0(*(undefined8 *)(param_1 + 0x23300));
      *(void **)(param_1 + 0x23300) = _Dst;
      *(int *)(param_1 + 0x23314) = local_24;
    }
    *(int *)(param_1 + 0x23318) = local_28 + 0x20;
  }
  else {
    local_28 = *(int *)(param_1 + 0x2331c);
    *(int *)(param_1 + 0x2331c) = -*(int *)(param_1 + 0x23330 + (longlong)(local_28 >> 5) * 4);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*(longlong *)(param_1 + 0x23300) + (longlong)local_28 * 4),
             (void *)(*(longlong *)(param_1 + 0x23300) + (longlong)param_2 * 4),0x80);
  *(undefined4 *)(param_1 + 0x23330 + (longlong)(local_28 >> 5) * 4) = 0;
  return local_28;
}



// FUNCTION 143b323a0 FUN_143b323a0 body=133 status=ok
// SIG undefined FUN_143b323a0(void)

int FUN_143b323a0(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x23310);
  if (iVar1 + 0x40 < 0x8aa1) {
    *(int *)(param_1 + 0x23310) = iVar1 + 0x40;
    _guard_xfg_dispatch_icall_nop
              ((void *)(param_1 + 0x880 + (longlong)iVar1 * 4),
               (void *)(param_1 + 0x880 + (longlong)*(int *)(param_1 + 0x23320) * 4),0x100);
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



// FUNCTION 143b32430 FUN_143b32430 body=1012 status=ok
// SIG undefined FUN_143b32430(void)

void FUN_143b32430(longlong param_1)

{
  char cVar1;
  int local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_20 = 0xc0;
  local_28 = 0;
  for (local_24 = 0; (int)local_24 < 0xc0; local_24 = local_24 + 0x20) {
    *(uint *)(param_1 + 0x23330 + (longlong)local_28 * 4) = local_24;
    local_28 = local_28 + 1;
  }
  local_10 = 0x40;
  local_c = 2;
  local_24 = 0xc0;
  do {
    while( true ) {
      while( true ) {
        if (*(int *)(param_1 + 0x23318) <= (int)local_24) {
          for (local_28 = 0; local_28 < *(int *)(param_1 + 0x23310); local_28 = local_28 + 1) {
            if (local_28 == 0x820) {
              local_28 = 0xa60;
            }
            *(undefined4 *)(param_1 + 0x880 + (longlong)local_28 * 4) =
                 *(undefined4 *)
                  (param_1 + 0x23330 +
                  (longlong)(*(int *)(param_1 + 0x880 + (longlong)local_28 * 4) >> 5) * 4);
          }
          *(undefined4 *)(param_1 + 0x23324) =
               *(undefined4 *)(param_1 + 0x23330 + (longlong)(*(int *)(param_1 + 0x23324) >> 5) * 4)
          ;
          for (; (local_20 & 3) != 0; local_20 = local_20 + 1) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x23300) + (longlong)(int)local_20 * 4) =
                 *(undefined4 *)(param_1 + 0x23308);
          }
          *(uint *)(param_1 + 0x23318) = local_20;
          return;
        }
        if (local_24 == 0x880) {
          local_10 = 0x20;
          local_c = 1;
        }
        local_1c = (int)local_24 >> 5;
        if (0 < *(int *)(param_1 + 0x23330 + (longlong)local_1c * 4)) break;
        local_24 = local_24 + local_10;
      }
      local_14 = FUN_143b32fb0(*(undefined8 *)(param_1 + 0x23300),local_20,local_24,local_10);
      local_18 = local_10;
      if (local_14 < 0) break;
      for (local_28 = local_c; 0 < local_28; local_28 = local_28 + -1) {
        *(int *)(param_1 + 0x23330 + (longlong)local_1c * 4) = local_14;
        local_1c = local_1c + 1;
        local_14 = local_14 + 0x20;
      }
      local_24 = local_24 + local_10;
    }
    do {
      local_18 = local_18 + -4;
      if (local_18 < 1) break;
      cVar1 = FUN_143b32cb0(*(longlong *)(param_1 + 0x23300) +
                            (longlong)(int)(local_20 - local_18) * 4,
                            *(longlong *)(param_1 + 0x23300) + (longlong)(int)local_24 * 4,local_18)
      ;
    } while (cVar1 == '\0');
    if ((local_18 < 1) && ((int)local_24 <= (int)local_20)) {
      for (local_28 = local_c; 0 < local_28; local_28 = local_28 + -1) {
        *(uint *)(param_1 + 0x23330 + (longlong)local_1c * 4) = local_24;
        local_1c = local_1c + 1;
        local_24 = local_24 + 0x20;
      }
      local_20 = local_24;
    }
    else {
      local_14 = local_20 - local_18;
      for (local_28 = local_c; 0 < local_28; local_28 = local_28 + -1) {
        *(int *)(param_1 + 0x23330 + (longlong)local_1c * 4) = local_14;
        local_1c = local_1c + 1;
        local_14 = local_14 + 0x20;
      }
      local_24 = local_24 + local_18;
      for (local_28 = local_10 - local_18; 0 < local_28; local_28 = local_28 + -1) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x23300) + (longlong)(int)local_20 * 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x23300) + (longlong)(int)local_24 * 4);
        local_20 = local_20 + 1;
        local_24 = local_24 + 1;
      }
    }
  } while( true );
}



// FUNCTION 143b32830 FUN_143b32830 body=711 status=ok
// SIG undefined FUN_143b32830(void)

void FUN_143b32830(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  
  local_20 = 0;
  for (local_28 = 0; (int)local_28 < 0x820; local_28 = local_28 + 0x40) {
    *(uint *)(param_1 + 0x23330 + (longlong)local_20 * 4) = local_28;
    local_20 = local_20 + 1;
  }
  local_24 = (*(int *)(param_1 + 0x23328) + -0x10000 >> 0xb) + 0x840;
  local_28 = 0xa60;
  while ((int)local_28 < *(int *)(param_1 + 0x23310)) {
    iVar2 = FUN_143b33040(param_1 + 0x880,local_24,local_28);
    iVar3 = (int)local_28 >> 6;
    if (iVar2 < 0) {
      local_1c = 0x3f;
      while ((0 < local_1c &&
             (cVar1 = FUN_143b32cb0(param_1 + 0x880 + (longlong)(int)(local_24 - local_1c) * 4,
                                    param_1 + 0x880 + (longlong)(int)local_28 * 4,local_1c),
             cVar1 == '\0'))) {
        local_1c = local_1c + -1;
      }
      if ((local_1c < 1) && ((int)local_28 <= (int)local_24)) {
        *(uint *)(param_1 + 0x23330 + (longlong)iVar3 * 4) = local_28;
        local_28 = local_28 + 0x40;
        local_24 = local_28;
      }
      else {
        *(uint *)(param_1 + 0x23330 + (longlong)iVar3 * 4) = local_24 - local_1c;
        local_28 = local_28 + local_1c;
        for (local_20 = 0x40 - local_1c; 0 < local_20; local_20 = local_20 + -1) {
          *(undefined4 *)(param_1 + 0x880 + (longlong)(int)local_24 * 4) =
               *(undefined4 *)(param_1 + 0x880 + (longlong)(int)local_28 * 4);
          local_24 = local_24 + 1;
          local_28 = local_28 + 1;
        }
      }
    }
    else {
      *(int *)(param_1 + 0x23330 + (longlong)iVar3 * 4) = iVar2;
      local_28 = local_28 + 0x40;
    }
  }
  for (local_20 = 0; local_20 < 0x220; local_20 = local_20 + 1) {
    *(undefined4 *)(param_1 + (longlong)local_20 * 4) =
         *(undefined4 *)
          (param_1 + 0x23330 + (longlong)(*(int *)(param_1 + (longlong)local_20 * 4) >> 6) * 4);
  }
  *(undefined4 *)(param_1 + 0x23320) =
       *(undefined4 *)(param_1 + 0x23330 + (longlong)(*(int *)(param_1 + 0x23320) >> 6) * 4);
  for (; (local_24 & 3) != 0; local_24 = local_24 + 1) {
    *(undefined4 *)(param_1 + 0x880 + (longlong)(int)local_24 * 4) = 0x3fffc;
  }
  *(uint *)(param_1 + 0x23310) = local_24;
  return;
}



// FUNCTION 143b32b00 FUN_143b32b00 body=427 status=ok
// SIG undefined FUN_143b32b00(void)

void FUN_143b32b00(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_24;
  uint local_20;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  local_24 = FUN_143ac2bb0(param_1,0x10ffff);
  iVar3 = FUN_143b32dd0(lVar1,local_24);
  uVar4 = iVar3 + 0x7ffU & 0xfffff800;
  if (uVar4 == 0x110000) {
    local_24 = *(undefined4 *)(param_1 + 0x28);
  }
  *(uint *)(lVar1 + 0x23328) = uVar4;
  *(uint *)(param_1 + 0x2c) = uVar4;
  if ((int)uVar4 < 0x110000) {
    local_20 = uVar4;
    if ((int)uVar4 < 0x10001) {
      local_20 = 0x10000;
    }
    FUN_143b34120(param_1,local_20,0x10ffff,*(undefined4 *)(param_1 + 0x24),1,param_2);
    cVar2 = FUN_143a8b0e0(*param_2);
    if (cVar2 != '\0') {
      return;
    }
  }
  FUN_143b32430(lVar1);
  if (0x10000 < (int)uVar4) {
    FUN_143b32830(lVar1);
  }
  *(undefined4 *)(*(longlong *)(lVar1 + 0x23300) + (longlong)*(int *)(lVar1 + 0x23318) * 4) =
       local_24;
  *(int *)(lVar1 + 0x23318) = *(int *)(lVar1 + 0x23318) + 1;
  while ((*(uint *)(lVar1 + 0x23318) & 3) != 0) {
    *(undefined4 *)(*(longlong *)(lVar1 + 0x23300) + (longlong)*(int *)(lVar1 + 0x23318) * 4) =
         *(undefined4 *)(param_1 + 0x24);
    *(int *)(lVar1 + 0x23318) = *(int *)(lVar1 + 0x23318) + 1;
  }
  *(undefined1 *)(lVar1 + 0x2332c) = 1;
  return;
}



// FUNCTION 143b32cb0 FUN_143b32cb0 body=108 status=ok
// SIG undefined FUN_143b32cb0(void)

bool FUN_143b32cb0(int *param_1,int *param_2,int param_3)

{
  int *local_res8;
  int *local_res10;
  int local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  for (local_res8 = param_1; (0 < local_res18 && (*local_res8 == *local_res10));
      local_res8 = local_res8 + 1) {
    local_res10 = local_res10 + 1;
    local_res18 = local_res18 + -1;
  }
  return local_res18 == 0;
}



// FUNCTION 143b32d20 FUN_143b32d20 body=165 status=ok
// SIG undefined FUN_143b32d20(void)

void FUN_143b32d20(longlong param_1,int param_2,int param_3,int param_4,int param_5,char param_6)

{
  int *piVar1;
  int *local_res8;
  
  piVar1 = (int *)(param_1 + (longlong)param_3 * 4);
  local_res8 = (int *)(param_1 + (longlong)param_2 * 4);
  if (param_6 == '\0') {
    for (; local_res8 < piVar1; local_res8 = local_res8 + 1) {
      if (*local_res8 == param_5) {
        *local_res8 = param_4;
      }
    }
  }
  else {
    for (; local_res8 < piVar1; local_res8 = local_res8 + 1) {
      *local_res8 = param_4;
    }
  }
  return;
}



// FUNCTION 143b32dd0 FUN_143b32dd0 body=471 status=ok
// SIG undefined FUN_143b32dd0(void)

int FUN_143b32dd0(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_48;
  int local_40;
  int local_3c;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar1 = *(int *)(param_1 + 0x23308);
  local_34 = *(int *)(param_1 + 0x23320);
  local_30 = *(int *)(param_1 + 0x23324);
  if (param_2 != iVar1) {
    local_34 = -1;
    local_30 = -1;
  }
  local_2c = 0x220;
  local_48 = 0x110000;
  while( true ) {
    while( true ) {
      while( true ) {
        if (local_48 < 1) {
          return 0;
        }
        local_2c = local_2c + -1;
        iVar2 = *(int *)(param_1 + (longlong)local_2c * 4);
        if (iVar2 != local_34) break;
        local_48 = local_48 + -0x800;
      }
      local_34 = iVar2;
      if (iVar2 == *(int *)(param_1 + 0x23320)) break;
      local_3c = 0x40;
      while (0 < local_3c) {
        local_3c = local_3c + -1;
        iVar3 = *(int *)(param_1 + 0x880 + (longlong)(iVar2 + local_3c) * 4);
        if (iVar3 == local_30) {
          local_48 = local_48 + -0x20;
        }
        else {
          local_30 = iVar3;
          if (iVar3 == *(int *)(param_1 + 0x23324)) {
            if (param_2 != iVar1) {
              return local_48;
            }
            local_48 = local_48 + -0x20;
          }
          else {
            local_40 = 0x20;
            while (0 < local_40) {
              local_40 = local_40 + -1;
              if (*(int *)(*(longlong *)(param_1 + 0x23300) + (longlong)(iVar3 + local_40) * 4) !=
                  param_2) {
                return local_48;
              }
              local_48 = local_48 + -1;
            }
          }
        }
      }
    }
    if (param_2 != iVar1) break;
    local_48 = local_48 + -0x800;
  }
  return local_48;
}



// FUNCTION 143b32fb0 FUN_143b32fb0 body=136 status=ok
// SIG undefined FUN_143b32fb0(void)

int FUN_143b32fb0(longlong param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int local_18;
  
  local_18 = 0;
  while( true ) {
    if (param_2 - param_4 < local_18) {
      return -1;
    }
    cVar1 = FUN_143b32cb0(param_1 + (longlong)local_18 * 4,param_1 + (longlong)param_3 * 4,param_4);
    if (cVar1 != '\0') break;
    local_18 = local_18 + 4;
  }
  return local_18;
}



// FUNCTION 143b33040 FUN_143b33040 body=126 status=ok
// SIG undefined FUN_143b33040(void)

int FUN_143b33040(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  int local_18;
  
  local_18 = 0;
  while( true ) {
    if (param_2 + -0x40 < local_18) {
      return -1;
    }
    cVar1 = FUN_143b32cb0(param_1 + (longlong)local_18 * 4,param_1 + (longlong)param_3 * 4,0x40);
    if (cVar1 != '\0') break;
    local_18 = local_18 + 1;
  }
  return local_18;
}


