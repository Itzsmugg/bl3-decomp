// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14307c280 GetCurrentAnimName body=14 status=ok
// SIG undefined GetCurrentAnimName(void)

undefined8 * UTBScriptedAnimInstance::GetCurrentAnimName(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x478);
  return param_2;
}



// FUNCTION 14307c290 FUN_14307c290 body=39 status=ok
// SIG undefined FUN_14307c290(void)

longlong FUN_14307c290(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x4f0);
  if (lVar1 == 0) {
    FUN_143095220();
    lVar1 = *(longlong *)(param_1 + 0x4f0);
  }
  return lVar1;
}



// FUNCTION 14307c2c0 FUN_14307c2c0 body=101 status=ok
// SIG undefined FUN_14307c2c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14307c2c0(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined1 local_18 [16];
  
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
  if (((int)(uint)*(byte *)(param_1 + 0x228) < *(int *)(param_1 + 0x238)) &&
     (plVar1 = *(longlong **)
                (*(longlong *)(param_1 + 0x230) + 8 + (ulonglong)*(byte *)(param_1 + 0x228) * 0x48),
     plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x440))(plVar1,param_3,param_2,local_18);
  }
  return param_2;
}



// FUNCTION 14307c350 FUN_14307c350 body=322 status=ok
// SIG undefined FUN_14307c350(void)

float FUN_14307c350(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  longlong local_res10;
  longlong local_res18 [2];
  undefined **local_158;
  longlong local_150;
  longlong local_88;
  undefined1 local_30 [8];
  undefined8 local_28;
  
  FUN_1430bf620(param_1,&local_res10);
  if (local_res10 != 0) {
    lVar2 = FUN_1430aef40();
    for (lVar3 = local_res10; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar2) {
        FUN_140a25850(&local_158);
        local_150 = local_res10;
        lVar3 = FUN_14304abf0(&local_158);
        fVar4 = (float)FUN_14306cf90(param_1);
        fVar1 = *(float *)(lVar3 + 0x144);
        local_158 = &PTR_FUN_1441f17f0;
        FWeakObjectPtr::operator=(local_30,0);
        local_res18[0] = 0;
        local_28 = 0;
        if (local_88 != 0) {
          FMemory::Free();
        }
        return fVar4 * fVar1;
      }
    }
  }
  FUN_1430bf680(param_1,local_res18);
  if (local_res18[0] != 0) {
    lVar3 = FUN_1428dfc70();
    for (; local_res18[0] != 0; local_res18[0] = *(longlong *)(local_res18[0] + 0x30)) {
      if (local_res18[0] == lVar3) {
        return *(float *)(param_1 + 0x950);
      }
    }
  }
  return 0.0;
}



// FUNCTION 14307c4a0 FUN_14307c4a0 body=70 status=ok
// SIG undefined FUN_14307c4a0(void)

float FUN_14307c4a0(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x668);
  if ((*(longlong *)(param_1 + 0x4a0) != 0) && (*(longlong *)(param_1 + 0x4a8) != 0)) {
    fVar1 = (float)(**(code **)(**(longlong **)(param_1 + 0x4a8) + 0x188))();
    fVar2 = fVar2 * fVar1;
  }
  return fVar2;
}



// FUNCTION 14307c4f0 FUN_14307c4f0 body=25 status=ok
// SIG undefined FUN_14307c4f0(void)

undefined8 * FUN_14307c4f0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1a4);
  *param_2 = *(undefined8 *)(param_1 + 0x19c);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 14307c550 FUN_14307c550 body=42 status=ok
// SIG undefined FUN_14307c550(void)

undefined8 FUN_14307c550(longlong param_1,byte param_2)

{
  if ((int)(uint)param_2 < *(int *)(param_1 + 0x6a0)) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)param_2 * 0x48) != 0) {
      return *(undefined8 *)(*(longlong *)(param_1 + 0x698) + 0x18 + (ulonglong)param_2 * 0x48);
    }
  }
  return 0;
}



// FUNCTION 14307c580 FUN_14307c580 body=65 status=ok
// SIG undefined FUN_14307c580(void)

undefined8 FUN_14307c580(longlong param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  
  fVar2 = *(float *)(param_1 + 0x1c4);
  uVar4 = 0;
  if ((0 < *(int *)(param_1 + 0x1ec)) &&
     ((int)(uint)*(byte *)(param_1 + 0x202) < *(int *)(param_1 + 0x1ec))) {
    fVar1 = *(float *)(param_1 + 0x1e0);
    uVar3 = FUN_143077310(fVar2);
    uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    fVar2 = (float)uVar3 * fVar1;
  }
  return CONCAT44(uVar4,fVar2);
}



// FUNCTION 14307c640 FUN_14307c640 body=309 status=ok
// SIG undefined FUN_14307c640(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_14307c640(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             char param_5,undefined4 param_6)

{
  bool bVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if ((param_2 == (longlong *)0x0) ||
     (plVar4 = (longlong *)(**(code **)(*param_2 + 0x678))(param_2), plVar4 == (longlong *)0x0)) {
    uVar2 = uRam00000001468b5b78;
    *param_1 = _DAT_1468b5b70;
    param_1[1] = uVar2;
    uVar2 = uRam00000001468b5b88;
    param_1[2] = _DAT_1468b5b80;
    param_1[3] = uVar2;
    uVar2 = uRam00000001468b5b98;
    param_1[4] = _DAT_1468b5b90;
    param_1[5] = uVar2;
    return param_1;
  }
  lVar7 = param_2[0x2d];
  if (param_5 != '\0') {
    lVar5 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar5 = (**(code **)(*plVar4 + 0xa58))(plVar4), lVar5 != 0)) {
      plVar6 = (longlong *)(**(code **)(*plVar4 + 0xa58))(plVar4);
      cVar3 = (**(code **)(*plVar6 + 0x440))(plVar6,param_3);
      if (cVar3 != '\0') {
        lVar7 = (**(code **)(*plVar4 + 0xa58))(plVar4);
        goto LAB_14307c719;
      }
    }
  }
  if (plVar4[0x98] != 0) {
    lVar7 = plVar4[0x98];
  }
LAB_14307c719:
  FUN_143095fe0(param_1,param_2,lVar7,param_3,param_4,param_6);
  return param_1;
}



// FUNCTION 14307c780 FUN_14307c780 body=58 status=ok
// SIG undefined FUN_14307c780(void)

undefined8
FUN_14307c780(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  if ((param_2 == 0) && (param_3 != 0)) {
    param_2 = *(longlong *)(param_3 + 0x118);
  }
  FUN_143095fe0(param_1,param_2,param_3,param_4,param_5,param_6);
  return param_1;
}



// FUNCTION 14307c7d0 GetPhase1CameraMomentTag body=14 status=ok
// SIG undefined GetPhase1CameraMomentTag(void)

undefined8 *
ACursedBehemoth_ArenaBoss::GetPhase1CameraMomentTag(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x938);
  return param_2;
}



// FUNCTION 14307c7e0 FUN_14307c7e0 body=14 status=ok
// SIG undefined FUN_14307c7e0(void)

undefined8 * FUN_14307c7e0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x920);
  return param_2;
}



// FUNCTION 14307c820 FUN_14307c820 body=198 status=ok
// SIG undefined FUN_14307c820(void)

undefined8 FUN_14307c820(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x720) != '\0') {
    plVar3 = *(longlong **)(param_1 + 0x700);
    plVar1 = plVar3 + *(int *)(param_1 + 0x708);
    for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      if (((longlong *)*plVar3 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*(longlong *)*plVar3 + 0x298))(), cVar2 != '\0')) {
        return 1;
      }
    }
    if ((*(longlong **)(param_1 + 0x150) != (longlong *)0x0) &&
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x778))(), cVar2 != '\0')) {
      plVar3 = *(longlong **)(param_1 + 0x710);
      plVar1 = plVar3 + *(int *)(param_1 + 0x718);
      for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
        if (((longlong *)*plVar3 != (longlong *)0x0) &&
           (cVar2 = (**(code **)(*(longlong *)*plVar3 + 0x298))(), cVar2 != '\0')) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14307c990 FUN_14307c990 body=143 status=ok
// SIG undefined FUN_14307c990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14307c990(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  
  *param_3 = _DAT_1468b5d90;
  *(undefined4 *)(param_3 + 1) = DAT_1468b5d98;
  *param_4 = DAT_1468b5da0;
  *(undefined4 *)(param_4 + 1) = DAT_1468b5da8;
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x440))();
    if (cVar1 == '\0') {
      param_2 = *(undefined8 *)(param_1 + 0x30);
    }
    FUN_14238d6f0(*(undefined8 *)(param_1 + 0x38),param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 14307ca20 FUN_14307ca20 body=257 status=ok
// SIG undefined FUN_14307ca20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_14307ca20(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_b8 [48];
  undefined1 local_88 [16];
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined1 local_58 [16];
  float local_48;
  float fStack_44;
  float fStack_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x440))(plVar1,param_3);
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x420))
                (*(longlong **)(param_1 + 0x38),local_58,param_3,2);
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x420))
                (*(longlong **)(param_1 + 0x38),local_88,param_4,2);
      *param_2 = CONCAT44(fStack_44 - fStack_74,local_48 - local_78);
      *(float *)(param_2 + 1) = fStack_40 - fStack_70;
    }
  }
  return param_2;
}



// FUNCTION 14307cb30 FUN_14307cb30 body=9 status=ok
// SIG undefined FUN_14307cb30(void)

undefined4 FUN_14307cb30(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x678);
}



// FUNCTION 14307cb40 FUN_14307cb40 body=104 status=ok
// SIG undefined FUN_14307cb40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14307cb40(longlong param_1,undefined8 *param_2,byte param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 local_18 [16];
  
  uVar1 = DAT_1468b5d98;
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = uVar1;
  if ((int)(uint)param_3 < *(int *)(param_1 + 0x248)) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x240) + 8 + (ulonglong)param_3 * 0x48);
    if (plVar2 != (longlong *)0x0) {
      puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x430))(plVar2,local_18);
      uVar1 = *(undefined4 *)(puVar3 + 1);
      *param_2 = *puVar3;
      *(undefined4 *)(param_2 + 1) = uVar1;
    }
  }
  return param_2;
}



// FUNCTION 14307cbb0 FUN_14307cbb0 body=214 status=ok
// SIG undefined FUN_14307cbb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14307cbb0(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38 [12];
  undefined8 local_2c;
  undefined4 local_24;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)FUN_14309ed70();
  plVar3 = (longlong *)(**(code **)(*plVar2 + 0x948))(plVar2);
  if (plVar3 == (longlong *)0x0) {
    *param_2 = _DAT_1468b5d90;
    *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
  }
  else {
    (**(code **)(*plVar3 + 0x1a0))(plVar3,&local_2c,plVar2);
    if ((local_20 == '\0') &&
       (puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x438))(param_1,local_38),
       puVar4 != &local_2c)) {
      uVar1 = *(undefined4 *)(puVar4 + 1);
      *param_2 = *puVar4;
      *(undefined4 *)(param_2 + 1) = uVar1;
      return param_2;
    }
    *param_2 = local_2c;
    *(undefined4 *)(param_2 + 1) = local_24;
  }
  return param_2;
}



// FUNCTION 14307cc90 FUN_14307cc90 body=479 status=ok
// SIG undefined FUN_14307cc90(void)

undefined8
FUN_14307cc90(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *local_res10;
  undefined1 local_38 [32];
  
  if (param_2 == (longlong *)0x0) {
LAB_14307cd87:
    plVar4 = (longlong *)0x0;
  }
  else {
    lVar3 = FUN_1430b3b80();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar3 = (**(code **)(*param_2 + 0x828))(param_2);
      plVar4 = (longlong *)FUN_140a63ba0(param_2);
      goto LAB_14307cd90;
    }
    lVar3 = FUN_14291fb80();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      plVar4 = (longlong *)param_2[0x91];
    }
    else {
      lVar3 = FUN_1428dfc70();
      if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      plVar4 = param_2;
      if (!bVar1) goto LAB_14307cd87;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0xb0);
LAB_14307cd90:
  if (lVar3 == 0) {
    return 0;
  }
  if (plVar4 == (longlong *)0x0) {
    if (param_2 == (longlong *)0x0) {
      return 0;
    }
    lVar6 = FUN_142e1a5a0();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return 0;
    }
  }
  else {
    uVar5 = FUN_142e1a5a0();
    param_2 = (longlong *)(**(code **)(*plVar4 + 0x628))(plVar4,uVar5);
  }
  if (param_2 != (longlong *)0x0) {
    local_res10 = param_2;
    FUN_142d61d40(local_38,&local_res10,param_2[0x23],lVar3);
    cVar2 = FUN_142d52a00(local_38);
    if (cVar2 != '\0') {
      uVar5 = FUN_142d62160(local_res10,local_38);
      uVar7 = FUN_142e1b780();
      *param_3 = uVar7;
      *param_4 = uVar5;
      *param_5 = local_res10;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14307ce80 FUN_14307ce80 body=58 status=ok
// SIG undefined FUN_14307ce80(void)

undefined8 FUN_14307ce80(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x158) != 0) {
    uVar1 = FUN_142df3580(param_2);
    uVar1 = FUN_142de8c20(*(undefined8 *)(param_1 + 0x158),uVar1);
    return uVar1;
  }
  return 1;
}



// FUNCTION 14307cec0 FUN_14307cec0 body=82 status=ok
// SIG undefined FUN_14307cec0(void)

undefined8 * FUN_14307cec0(longlong param_1,undefined8 *param_2,byte param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 local_res10 [24];
  
  *param_2 = 0;
  if ((int)(uint)param_3 < *(int *)(param_1 + 0x6a0)) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)param_3 * 0x48);
    if (plVar1 != (longlong *)0x0) {
      puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x4d0))(plVar1,local_res10);
      *param_2 = *puVar2;
    }
  }
  return param_2;
}



// FUNCTION 14307cf20 FUN_14307cf20 body=38 status=ok
// SIG undefined FUN_14307cf20(void)

longlong FUN_14307cf20(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  if ((*(int *)(param_1 + 0x6a0) <= (int)(uint)param_2) ||
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)param_2 * 0x48),
     lVar1 == 0)) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 14307cf50 FUN_14307cf50 body=28 status=ok
// SIG undefined FUN_14307cf50(void)

uint FUN_14307cf50(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x6a0);
  uVar1 = 0;
  if (0 < (int)*(uint *)(param_1 + 0x6a0)) {
    uVar2 = 1;
    do {
      uVar1 = uVar1 | uVar2;
      uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return uVar1;
}



// FUNCTION 14307cf70 FUN_14307cf70 body=252 status=ok
// SIG undefined FUN_14307cf70(void)

longlong FUN_14307cf70(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (((int)((uint)param_3 & 0xff) < *(int *)(param_1 + 0x6a0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + (param_3 & 0xff) * 0x48) != 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((bVar2) && (param_2 != 0)) {
    lVar3 = FUN_1428e7a40();
    lVar4 = param_2;
    do {
      if (lVar4 == lVar3) {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x698) + 0x38 + (param_3 & 0xff) * 0x48);
        plVar1 = plVar5 + *(int *)(*(longlong *)(param_1 + 0x698) + 0x40 + (param_3 & 0xff) * 0x48);
        if (plVar5 == plVar1) {
          return 0;
        }
        do {
          lVar4 = *plVar5;
          if (lVar4 != 0) {
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(param_2 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(param_2 + 0x90) * 8) != param_2 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              return lVar4;
            }
          }
          plVar5 = plVar5 + 1;
          if (plVar5 == plVar1) {
            return 0;
          }
        } while( true );
      }
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
  }
  return 0;
}



// FUNCTION 14307d070 FUN_14307d070 body=668 status=ok
// SIG undefined FUN_14307d070(void)

void FUN_14307d070(longlong param_1,byte param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  void *_Src;
  char cVar3;
  undefined *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  void *local_38;
  ulonglong local_30;
  
  if (((int)(uint)param_2 < *(int *)(param_1 + 0x6a0)) &&
     (lVar1 = (ulonglong)param_2 * 0x48,
     *(longlong *)(lVar1 + 8 + *(longlong *)(param_1 + 0x698)) != 0)) {
    cVar3 = UActorComponent::IsComponentTickEnabled();
    puVar4 = &DAT_145a5f85c;
    if (cVar3 == '\0') {
      puVar4 = &DAT_145a5f8ac;
    }
    puVar13 = &DAT_143f3eda8;
    if ((int)param_3[6] == 0) {
      puVar14 = &DAT_143f3eda8;
    }
    else {
      puVar14 = (undefined2 *)param_3[5];
    }
    if ((int)param_3[8] != 0) {
      puVar13 = (undefined2 *)param_3[7];
    }
    FString::PrintfImpl(&local_38,L"%sUse Mode: %s%d %s",puVar13,puVar14,param_2,puVar4);
    iVar11 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar11 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar11);
    }
    _Src = local_38;
    plVar16 = (longlong *)0x0;
    puVar12 = (undefined8 *)((longlong)iVar11 * 0x10 + *param_3);
    *puVar12 = 0;
    iVar11 = (int)local_30;
    *(int *)(puVar12 + 1) = iVar11;
    if (iVar11 == 0) {
      *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar12,local_30 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop((void *)*puVar12,_Src,(longlong)iVar11 * 2);
    }
    if (local_38 != (void *)0x0) {
      FMemory::Free();
    }
    lVar5 = *(longlong *)(param_1 + 0x698);
    lVar2 = *(longlong *)(lVar1 + 8 + lVar5);
    if (lVar2 != 0) {
      plVar10 = (longlong *)(lVar2 + 0x178);
      (**(code **)(*plVar10 + 0x10))(plVar10,param_3);
      lVar5 = *(longlong *)(param_1 + 0x698);
    }
    lVar2 = *(longlong *)(lVar1 + 0x10 + lVar5);
    if (lVar2 != 0) {
      plVar10 = (longlong *)(lVar2 + 0x178);
      (**(code **)(*plVar10 + 0x10))(plVar10,param_3);
      lVar5 = *(longlong *)(param_1 + 0x698);
    }
    lVar2 = *(longlong *)(lVar1 + 0x20 + lVar5);
    if (lVar2 != 0) {
      plVar10 = (longlong *)(lVar2 + 0x178);
      (**(code **)(*plVar10 + 0x10))(plVar10,param_3);
      lVar5 = *(longlong *)(param_1 + 0x698);
    }
    lVar2 = *(longlong *)(lVar1 + 0x18 + lVar5);
    if (lVar2 != 0) {
      plVar10 = (longlong *)(lVar2 + 0x178);
      (**(code **)(*plVar10 + 0x10))(plVar10,param_3);
      lVar5 = *(longlong *)(param_1 + 0x698);
    }
    plVar10 = *(longlong **)(lVar1 + 0x38 + lVar5);
    uVar6 = (ulonglong)*(int *)(lVar1 + 0x40 + lVar5);
    plVar15 = (longlong *)(uVar6 & 0x1fffffffffffffff);
    if (plVar10 + uVar6 < plVar10) {
      plVar15 = plVar16;
    }
    plVar17 = plVar16;
    if (plVar15 != (longlong *)0x0) {
      do {
        lVar2 = *plVar10;
        if (lVar2 != 0) {
          uVar7 = FUN_1430bb490();
          plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar7);
          if (plVar8 != (longlong *)0x0) {
            lVar2 = *(longlong *)(param_1 + 0x698);
            lVar5 = *(longlong *)(lVar1 + 8 + lVar2);
            plVar9 = (longlong *)(lVar5 + 0x178);
            if (lVar5 == 0) {
              plVar9 = plVar16;
            }
            if (plVar8 != plVar9) {
              lVar5 = *(longlong *)(lVar1 + 0x10 + lVar2);
              plVar9 = (longlong *)(lVar5 + 0x178);
              if (lVar5 == 0) {
                plVar9 = plVar16;
              }
              if (plVar8 != plVar9) {
                lVar5 = *(longlong *)(lVar1 + 0x20 + lVar2);
                plVar9 = (longlong *)(lVar5 + 0x178);
                if (lVar5 == 0) {
                  plVar9 = plVar16;
                }
                if (plVar8 != plVar9) {
                  lVar2 = *(longlong *)(lVar1 + 0x18 + lVar2);
                  plVar9 = (longlong *)(lVar2 + 0x178);
                  if (lVar2 == 0) {
                    plVar9 = plVar16;
                  }
                  if (plVar8 != plVar9) {
                    (**(code **)(*plVar8 + 0x10))(plVar8,param_3);
                  }
                }
              }
            }
          }
        }
        plVar10 = plVar10 + 1;
        plVar17 = (longlong *)((longlong)plVar17 + 1);
      } while (plVar17 != plVar15);
    }
  }
  return;
}



// FUNCTION 14307d310 FUN_14307d310 body=260 status=ok
// SIG undefined FUN_14307d310(void)

undefined8 * FUN_14307d310(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined1 local_res18 [16];
  undefined1 local_28 [32];
  
  if (param_3 == (longlong *)0x0) {
LAB_14307d3fa:
    *(undefined1 *)(param_2 + 1) = 0xff;
    FUN_140a393e0(param_2);
    return param_2;
  }
  lVar2 = FUN_1430bc880();
  if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) goto LAB_14307d3fa;
  (**(code **)(*param_3 + 0x458))(param_3,local_28);
  cVar1 = FUN_142d52a00(local_28);
  if (cVar1 == '\0') goto LAB_14307d3fa;
  uVar3 = FUN_142d52a20(local_28);
  lVar2 = FArchive::operator<<(uVar3);
  *(undefined1 *)(param_2 + 1) = 0xff;
  puVar4 = (undefined8 *)FUN_142cb2290(local_res18,lVar2 + 0x40);
  cVar1 = *(char *)(param_2 + 1);
  switch(cVar1) {
  case '\0':
    bVar5 = cVar1 == '\0';
    break;
  case '\x01':
    bVar5 = cVar1 == '\x01';
    break;
  case '\x02':
    bVar5 = cVar1 == '\x02';
    break;
  case '\x03':
  case '\x04':
  case '\x05':
    bVar5 = cVar1 == '\x03';
    break;
  default:
    goto switchD_14307d3c3_default;
  }
  if (bVar5) {
    *(undefined1 *)(param_2 + 1) = 0xff;
  }
switchD_14307d3c3_default:
  *param_2 = *puVar4;
  *(undefined1 *)(param_2 + 1) = 2;
  return param_2;
}



// FUNCTION 14307d430 FUN_14307d430 body=210 status=ok
// SIG undefined FUN_14307d430(void)

undefined4 * FUN_14307d430(undefined8 param_1,undefined4 *param_2,longlong *param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (param_3 != (longlong *)0x0) {
    lVar2 = UUGStartScreenUW::GetPrivateStaticClass();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
LAB_14307d4da:
      uVar4 = FUN_1430774d0(param_3);
      goto LAB_14307d4ec;
    }
    lVar2 = FUN_1430b3b80();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = UUGStartScreenUW::GetPrivateStaticClass();
      param_3 = (longlong *)(**(code **)(*param_3 + 0x7f8))(param_3,uVar3,(char)param_3[0xd2]);
      if (param_3 != (longlong *)0x0) goto LAB_14307d4da;
    }
  }
  uVar4 = 0x3f800000;
LAB_14307d4ec:
  *param_2 = uVar4;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 14307d510 FUN_14307d510 body=216 status=ok
// SIG undefined FUN_14307d510(void)

float * FUN_14307d510(undefined8 param_1,float *param_2,longlong *param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  float fVar5;
  
  if (param_3 != (longlong *)0x0) {
    lVar3 = FUN_1430bc880();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
LAB_14307d5ba:
      iVar2 = (**(code **)(*param_3 + 0x428))(param_3);
      fVar5 = (float)iVar2;
      goto LAB_14307d5d2;
    }
    lVar3 = FUN_1430b3b80();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = FUN_1430bc880();
      param_3 = (longlong *)(**(code **)(*param_3 + 0x7f8))(param_3,uVar4,(char)param_3[0xd2]);
      if (param_3 != (longlong *)0x0) goto LAB_14307d5ba;
    }
  }
  fVar5 = 0.0;
LAB_14307d5d2:
  *param_2 = fVar5;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 14307d5f0 FUN_14307d5f0 body=306 status=ok
// SIG undefined FUN_14307d5f0(void)

undefined4 * FUN_14307d5f0(undefined8 param_1,undefined4 *param_2,longlong *param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (param_3 == (longlong *)0x0) goto LAB_14307d707;
  lVar2 = FUN_1430bdfe0();
  if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    lVar2 = FUN_1430b3b80();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_14307d707;
    uVar3 = FUN_1430bdfe0();
    param_3 = (longlong *)(**(code **)(*param_3 + 0x7f8))(param_3,uVar3,(char)param_3[0xd2]);
    if (param_3 == (longlong *)0x0) goto LAB_14307d707;
  }
  if ((0.0 < *(float *)((longlong)param_3 + 0x264)) || (0.0 < *(float *)(param_3 + 0x4e))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    if ((0.0 < *(float *)((longlong)param_3 + 0x264)) || (0.0 < *(float *)(param_3 + 0x4e))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar4 = (undefined4)param_3[0xa4];
      if (param_3[0x50] != 0) {
        uVar4 = UCurveFloat::GetFloatValue(param_3[0x50],uVar4);
      }
    }
    else {
      uVar4 = 0x3f800000;
    }
  }
LAB_14307d707:
  *param_2 = uVar4;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 14307d730 FUN_14307d730 body=27 status=ok
// SIG undefined FUN_14307d730(void)

void FUN_14307d730(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1a8) == 0) {
    *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_1 + 0x118);
  }
  return;
}



// FUNCTION 14307d750 FUN_14307d750 body=180 status=ok
// SIG undefined FUN_14307d750(void)

longlong FUN_14307d750(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  lVar1 = *(longlong *)(param_2 + 0x118);
  if (lVar1 == 0) {
    return 0;
  }
  lVar4 = FUN_1430b3b80();
  if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    return lVar1;
  }
  lVar4 = 0;
  uVar5 = FUN_1430a8880();
  plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar5);
  if (plVar6 != (longlong *)0x0) {
    iVar3 = (**(code **)(*plVar6 + 0xe8))(plVar6);
    if (0 < iVar3) {
      lVar4 = (**(code **)(*plVar6 + 0xf0))(plVar6,0);
    }
  }
  return lVar4;
}



// FUNCTION 14307d810 FUN_14307d810 body=42 status=ok
// SIG undefined FUN_14307d810(void)

undefined8 FUN_14307d810(longlong param_1,byte param_2)

{
  if ((int)(uint)param_2 < *(int *)(param_1 + 0x6a0)) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)param_2 * 0x48) != 0) {
      return *(undefined8 *)(*(longlong *)(param_1 + 0x698) + 0x28 + (ulonglong)param_2 * 0x48);
    }
  }
  return 0;
}



// FUNCTION 14307d840 FUN_14307d840 body=81 status=ok
// SIG undefined FUN_14307d840(void)

undefined8 FUN_14307d840(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 local_18 [16];
  
  plVar1 = (longlong *)(param_1 + -0x458);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)(*plVar1 + 0x938))
              (plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x240),local_18,param_2);
    return param_2;
  }
  (**(code **)(*plVar1 + 0x928))(plVar1,local_18,param_2);
  return param_2;
}



// FUNCTION 14307d8a0 FUN_14307d8a0 body=14 status=ok
// SIG undefined FUN_14307d8a0(void)

undefined8 * FUN_14307d8a0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x7c0);
  return param_2;
}



// FUNCTION 14307d8d0 FUN_14307d8d0 body=42 status=ok
// SIG undefined FUN_14307d8d0(void)

undefined8 FUN_14307d8d0(longlong param_1,byte param_2)

{
  if ((int)(uint)param_2 < *(int *)(param_1 + 0x6a0)) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)param_2 * 0x48) != 0) {
      return *(undefined8 *)(*(longlong *)(param_1 + 0x698) + 0x20 + (ulonglong)param_2 * 0x48);
    }
  }
  return 0;
}



// FUNCTION 14307d900 FUN_14307d900 body=46 status=ok
// SIG undefined FUN_14307d900(void)

undefined8 FUN_14307d900(longlong param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x690);
  if (((int)(uint)bVar1 < *(int *)(param_1 + 0x6a0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)bVar1 * 0x48) != 0)) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x698) + 0x20 + (ulonglong)bVar1 * 0x48);
  }
  return 0;
}



// FUNCTION 14307d930 FUN_14307d930 body=296 status=ok
// SIG undefined FUN_14307d930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14307d930(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined1 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  bVar1 = *(byte *)(param_1 + 0xd2);
  local_38 = _DAT_146b47840 & _DAT_146b47850;
  uStack_34 = uRam0000000146b47844 & uRam0000000146b47854;
  uStack_30 = uRam0000000146b47848 & uRam0000000146b47858;
  uStack_2c = uRam0000000146b4784c & uRam0000000146b4785c;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = uRam0000000146b4784c;
  local_48 = 0;
  uStack_40 = 0;
  if (((int)(uint)bVar1 < (int)param_1[0xd4]) &&
     (*(longlong *)(param_1[0xd3] + 8 + (ulonglong)bVar1 * 0x48) != 0)) {
    uVar6 = *(undefined8 *)(param_1[0xd3] + 0x20 + (ulonglong)bVar1 * 0x48);
  }
  else {
    uVar6 = 0;
  }
  if ((longlong *)param_1[0x2a] != (longlong *)0x0) {
    lVar2 = *param_1;
    uVar3 = (**(code **)(*(longlong *)param_1[0x2a] + 0x818))();
    uVar5 = (**(code **)(lVar2 + 0x900))(param_1,uVar3,0);
    cVar4 = FUN_14309bf70(uVar6,uVar5,&local_58);
    if (cVar4 != '\0') {
      *(undefined4 *)param_2 = (undefined4)local_48;
      *(undefined4 *)(param_2 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)param_2 + 4) = local_48._4_4_;
      return param_2;
    }
  }
  (**(code **)(*param_1 + 0x928))(param_1,&local_78,local_68);
  *param_2 = local_78;
  *(undefined4 *)(param_2 + 1) = local_70;
  return param_2;
}



// FUNCTION 14307da60 GetDiffuseBoost body=9 status=ok
// SIG undefined GetDiffuseBoost(void)

undefined4 UStaticMeshComponent::GetDiffuseBoost(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x588);
}



// FUNCTION 14307da70 FUN_14307da70 body=55 status=ok
// SIG undefined FUN_14307da70(void)

float FUN_14307da70(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  float fVar3;
  
  bVar1 = *(byte *)(param_1 + 0x690);
  if ((((int)(uint)bVar1 < *(int *)(param_1 + 0x6a0)) &&
      (*(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)bVar1 * 0x48) != 0)) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x698) + 0x20 + (ulonglong)bVar1 * 0x48),
     lVar2 != 0)) {
    fVar3 = 0.2;
    if ((int)(uint)*(byte *)(lVar2 + 0x292) < *(int *)(lVar2 + 400)) {
      fVar3 = *(float *)(*(longlong *)(lVar2 + 0x188) + (ulonglong)*(byte *)(lVar2 + 0x292) * 0x10);
    }
    return fVar3 * *(float *)(lVar2 + 0x1e4);
  }
  return 0.0;
}



// FUNCTION 14307dab0 FUN_14307dab0 body=55 status=ok
// SIG undefined FUN_14307dab0(void)

float FUN_14307dab0(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  
  bVar1 = *(byte *)(param_1 + 0x690);
  if ((int)(uint)bVar1 < *(int *)(param_1 + 0x6a0)) {
    if ((*(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)bVar1 * 0x48) != 0) &&
       (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x698) + 0x20 + (ulonglong)bVar1 * 0x48),
       lVar2 != 0)) {
      cVar4 = *(char *)(lVar2 + 0x291);
      if (cVar4 == '\0') {
        return 0.0;
      }
      if ((cVar4 == '\x02') || (*(char *)(lVar2 + 0x292) != '\0')) {
        fVar5 = 1.0;
      }
      else {
        lVar3 = *(longlong *)(lVar2 + 0x120);
        if (lVar3 == 0) {
          lVar3 = FUN_1423407b0(lVar2);
          cVar4 = *(char *)(lVar2 + 0x291);
        }
        fVar5 = 0.2;
        if (0 < *(int *)(lVar2 + 400)) {
          fVar5 = **(float **)(lVar2 + 0x188);
        }
        fVar6 = (*(float *)(lVar3 + 0x790) - *(float *)(lVar2 + 0x29c)) /
                (fVar5 * *(float *)(lVar2 + 0x1e4));
        fVar5 = 0.0;
        if ((0.0 <= fVar6) && (fVar5 = fVar6, 1.0 <= fVar6)) {
          fVar5 = 1.0;
        }
        if (cVar4 == '\x03') {
          return 1.0 - fVar5;
        }
      }
      return fVar5;
    }
  }
  return 0.0;
}



// FUNCTION 14307daf0 FUN_14307daf0 body=60 status=ok
// SIG undefined FUN_14307daf0(void)

void FUN_14307daf0(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  float fVar3;
  
  bVar1 = *(byte *)(param_1 + 0x690);
  if ((((int)(uint)bVar1 < *(int *)(param_1 + 0x6a0)) &&
      (*(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)bVar1 * 0x48) != 0)) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x698) + 0x20 + (ulonglong)bVar1 * 0x48),
     lVar2 != 0)) {
    fVar3 = (float)FUN_14309ee20();
    if (0.0 < fVar3) {
      if (*(byte *)(lVar2 + 0x292) != 0) {
        FUN_14309eee0(lVar2,*(byte *)(lVar2 + 0x292) - 1);
      }
      FUN_14309ef40(lVar2);
    }
    if ((*(char *)(lVar2 + 0x2c4) != '\0') && (*(longlong *)(lVar2 + 0x120) == 0)) {
      FUN_1423407b0(lVar2);
    }
    return;
  }
  return;
}



// FUNCTION 14307db30 FUN_14307db30 body=102 status=ok
// SIG undefined FUN_14307db30(void)

void FUN_14307db30(longlong param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    plVar1 = (longlong *)
             (**(code **)(*(longlong *)(param_1 + 0x460) + 0x10))
                       ((longlong *)(param_1 + 0x460),*(undefined1 *)(param_1 + 0x690));
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x4b8))(plVar1,param_2,param_3,param_4);
    }
  }
  return;
}



// FUNCTION 14307dba0 FUN_14307dba0 body=383 status=ok
// SIG undefined FUN_14307dba0(void)

void FUN_14307dba0(longlong *param_1,int param_2,char param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  if (param_4 != '\0') {
    if ((param_3 == '\0') || (iVar1 = (**(code **)(*param_1 + 0x418))(), iVar1 < 1)) {
      iVar1 = (**(code **)(*param_1 + 0x440))(param_1);
    }
    else {
      iVar1 = (**(code **)(*param_1 + 0x418))(param_1);
    }
    fVar5 = (float)param_2 * 0.01;
    fVar6 = 0.0;
    if ((0.0 <= fVar5) && (fVar6 = fVar5, 1.0 <= fVar5)) {
      fVar6 = 1.0;
    }
    param_2 = -((int)ROUND(-0.5 - ((float)iVar1 * fVar6 + (float)iVar1 * fVar6)) >> 1);
  }
  if ((param_3 == '\0') || (iVar1 = (**(code **)(*param_1 + 0x418))(param_1), iVar1 < 1)) {
    (**(code **)(*param_1 + 0x4a0))(param_1,param_2,1);
    if (param_2 < 0) {
      iVar1 = (**(code **)(*param_1 + 0x448))(param_1);
      iVar2 = (**(code **)(*param_1 + 0x420))(param_1);
      if ((iVar1 < iVar2) && (iVar1 = (**(code **)(*param_1 + 0x418))(param_1), 0 < iVar1)) {
        uVar4 = (**(code **)(*param_1 + 0x448))(param_1);
        *(undefined4 *)(param_1 + 0x38) = uVar4;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x32,0);
        return;
      }
    }
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x440))(param_1);
    iVar2 = (**(code **)(*param_1 + 0x418))(param_1);
    iVar3 = (**(code **)(*param_1 + 0x420))(param_1);
    if (iVar2 <= iVar1) {
      iVar1 = iVar2;
    }
    iVar2 = iVar1 - iVar3;
    if (param_2 <= iVar1 - iVar3) {
      iVar2 = param_2;
    }
    if (0 < iVar2) {
      (**(code **)(*param_1 + 0x4a8))(param_1,-iVar2);
      FUN_1430bb8d0(param_1,-iVar2);
    }
  }
  return;
}



// FUNCTION 14307dd20 FUN_14307dd20 body=7 status=ok
// SIG undefined FUN_14307dd20(void)

void FUN_14307dd20(undefined8 param_1)

{
  FUN_14307deb0(param_1,0);
  return;
}



// FUNCTION 14307dd30 FUN_14307dd30 body=368 status=ok
// SIG undefined FUN_14307dd30(void)

void FUN_14307dd30(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float fVar6;
  undefined8 local_res18;
  undefined1 local_38 [48];
  
  iVar3 = FUN_14233f450();
  if (iVar3 != 3) {
    return;
  }
  cVar2 = (**(code **)(*param_1 + 0x518))(param_1,param_2);
  if (cVar2 != '\0') {
    fVar6 = (float)FUN_142c98860(param_1 + 0x3b,param_1[0x23]);
    iVar3 = -((int)ROUND(-0.5 - fVar6 * 2.0) >> 1);
    if (0 < iVar3) {
      if (param_1[0x3a] == 0) {
        (**(code **)(*param_1 + 0x4a0))(param_1,iVar3,1);
      }
      else {
        lVar1 = param_1[0x23];
        if (lVar1 == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          uVar4 = FUN_1430a7dc0();
          plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar4);
        }
        if ((param_2 != 0) ||
           ((plVar5 != (longlong *)0x0 && (param_2 = (**(code **)(*plVar5 + 0x18))(), param_2 != 0))
           )) {
          local_res18 = 0;
          FUN_142d61d40(local_38,&local_res18,param_2,param_1[0x3a]);
          cVar2 = FUN_142d52a00(local_38);
          if ((cVar2 != '\0') && (cVar2 = FUN_142d52a00(local_38), cVar2 != '\0')) {
            *(byte *)((longlong)param_1 + 0x254) = *(byte *)((longlong)param_1 + 0x254) | 2;
            uVar4 = FUN_142d52a20(local_38);
            uVar4 = FArchive::operator<<(uVar4);
            FUN_142d55510(uVar4,(float)iVar3);
            *(byte *)((longlong)param_1 + 0x254) = *(byte *)((longlong)param_1 + 0x254) & 0xfd;
          }
        }
      }
    }
    *(byte *)((longlong)param_1 + 0x1cc) = *(byte *)((longlong)param_1 + 0x1cc) & 0xf7;
    return;
  }
  return;
}



// FUNCTION 14307dea0 thunk_FUN_14307deb0 body=5 status=ok
// SIG undefined thunk_FUN_14307deb0(void)

void thunk_FUN_14307deb0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plStack_18;
  undefined8 uStack_10;
  
  uVar3 = 0;
  plStack_18 = (longlong *)0x0;
  uStack_10 = 0;
  FUN_143066820(param_1,&plStack_18,0);
  plVar2 = plStack_18;
  uVar4 = (ulonglong)((longlong)(plStack_18 + (int)uStack_10) + (7 - (longlong)plStack_18)) >> 3;
  if (plStack_18 + (int)uStack_10 < plStack_18) {
    uVar4 = uVar3;
  }
  plVar5 = plStack_18;
  if (uVar4 != 0) {
    do {
      plVar1 = (longlong *)*plVar5;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x4c0))(plVar1,param_2);
      }
      plVar5 = plVar5 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar4);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  return;
}



// FUNCTION 14307deb0 FUN_14307deb0 body=168 status=ok
// SIG undefined FUN_14307deb0(void)

void FUN_14307deb0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *local_18;
  undefined8 local_10;
  
  uVar3 = 0;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_143066820(param_1,&local_18,0);
  plVar2 = local_18;
  uVar4 = (ulonglong)((longlong)(local_18 + (int)local_10) + (7 - (longlong)local_18)) >> 3;
  if (local_18 + (int)local_10 < local_18) {
    uVar4 = uVar3;
  }
  plVar5 = local_18;
  if (uVar4 != 0) {
    do {
      plVar1 = (longlong *)*plVar5;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x4c0))(plVar1,param_2);
      }
      plVar5 = plVar5 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar4);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  return;
}



// FUNCTION 14307df60 FUN_14307df60 body=438 status=ok
// SIG undefined FUN_14307df60(void)

void FUN_14307df60(longlong *param_1,longlong param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  (**(code **)(*param_1 + 0x600))();
  if (((((char)param_1[0x25] != '\x03') && (*(char *)((longlong)param_1 + 0x62c) != -1)) &&
      (lVar5 = param_1[0xc6], lVar5 != 0)) &&
     ((cVar2 = FUN_1407cd900(lVar5), cVar2 == '\0' && (lVar5 != param_2)))) {
    uVar1 = *(undefined1 *)((longlong)param_1 + 0x621);
    *(undefined1 *)((longlong)param_1 + 0x621) = 1;
    uVar3 = FUN_1430a8880();
    plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar3);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x1b8))(plVar4,param_1,*(undefined1 *)((longlong)param_1 + 0x62c));
    }
    *(undefined1 *)((longlong)param_1 + 0x621) = uVar1;
    FUN_1430712b0(param_1);
  }
  (**(code **)(*param_1 + 0x448))(param_1,param_2);
  param_1[0x2a] = param_2;
  if ((((char)param_1[0x25] == '\x03') && (param_1[0xff] == DAT_146b47938)) && (param_1[0xc3] == 0))
  {
    *(undefined4 *)(param_1 + 0xc2) = 0;
    *(undefined4 *)((longlong)param_1 + 0x614) = 0xff;
    *(undefined4 *)(param_1 + 0xc3) = 0;
    *(undefined4 *)((longlong)param_1 + 0x61c) = 0;
    param_1[0xc4] = 0;
  }
  if (param_2 != 0) {
    if ((char)param_1[0xe4] == '\0') {
      (**(code **)(*param_1 + 0x9a8))(param_1,0);
      FUN_14308b8d0(param_1,0);
      param_2 = param_1[0x2a];
    }
    if (param_2 != 0) {
      uVar3 = FUN_1430a8880();
      lVar5 = UObjectBaseUtility::GetInterfaceAddress(param_2,uVar3);
      if (lVar5 != 0) {
        lVar5 = param_1[0x2a];
        if (lVar5 == 0) {
          lVar6 = 0;
          lVar5 = 0;
        }
        else {
          uVar3 = FUN_1430a8880();
          lVar6 = UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar3);
          lVar5 = param_1[0x2a];
        }
        param_1[0x95] = lVar6;
        param_1[0x94] = lVar5;
        if (lVar5 == 0) {
          param_1[0x95] = 0;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014307e10f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa20))(param_1);
  return;
}



// FUNCTION 14307e120 FUN_14307e120 body=116 status=ok
// SIG undefined FUN_14307e120(void)

void FUN_14307e120(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong local_res8;
  
  lVar1 = param_1[0xff];
  if (*param_2 != lVar1) {
    *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) | 1;
    (**(code **)(*param_1 + 0xac8))();
    local_res8 = param_1[0xff];
    *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) & 0xfe;
    if (local_res8 == lVar1) {
      param_1[0xff] = *param_2;
      (**(code **)(*param_1 + 0xac0))(param_1,&local_res8);
    }
  }
  return;
}



// FUNCTION 14307e1a0 FUN_14307e1a0 body=767 status=ok
// SIG undefined FUN_14307e1a0(void)

undefined8
FUN_14307e1a0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             float *param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float local_78;
  float local_74;
  float local_70;
  undefined8 local_68;
  float local_60;
  
  local_60 = *(float *)(param_2 + 0x34);
  local_68 = *(undefined8 *)(param_2 + 0x2c);
  (**(code **)(*param_1 + 0x500))(local_68,&local_78,&local_68);
  if ((1.0 < *(float *)((longlong)param_1 + 0x1cc) || *(float *)((longlong)param_1 + 0x1cc) == 1.0)
     || (0.0001 < *(float *)(param_2 + 0xc))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (*(char *)((longlong)param_1 + 0x314) == '\0') {
    if ((!bVar5) ||
       (local_74 * *(float *)((longlong)param_1 + 0x1d4) + local_78 * *(float *)(param_1 + 0x3a) +
        local_70 * *(float *)(param_1 + 0x3b) < 0.999845)) {
      fVar2 = *(float *)((longlong)param_1 + 0x18c);
      fVar3 = *(float *)((longlong)param_1 + 0x194);
      fVar4 = *(float *)(param_1 + 0x32);
      fVar11 = fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3;
      if (fVar11 == 1.0) {
        local_68 = *(undefined8 *)((longlong)param_1 + 0x18c);
        local_60 = *(float *)((longlong)param_1 + 0x194);
        fVar10 = (float)((ulonglong)local_68 >> 0x20);
        fVar14 = (float)local_68;
        fVar12 = local_60;
      }
      else {
        fVar10 = DAT_1468b5d94;
        fVar14 = DAT_1468b5d90;
        fVar12 = DAT_1468b5d98;
        if (1e-08 <= fVar11) {
          auVar13 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
          fVar12 = auVar13._0_4_;
          fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
          fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
          fVar14 = fVar2 * fVar12;
          fVar10 = fVar4 * fVar12;
          fVar12 = fVar3 * fVar12;
        }
      }
      if (0.01 < fVar14 * local_78 + fVar10 * local_74 + fVar12 * local_70) goto LAB_14307e3ab;
    }
    uVar9 = 0x40;
  }
  else {
LAB_14307e3ab:
    uVar9 = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x314) = 0;
  *(uint *)(param_1 + 0x39) = *(uint *)(param_1 + 0x39) & 0xffffffbf | uVar9;
  if (uVar9 == 0) {
LAB_14307e480:
    uVar8 = 1;
  }
  else {
    pfVar1 = (float *)((longlong)param_1 + 0x18c);
    puVar7 = (undefined8 *)
             (**(code **)(*param_1 + 0x4a0))(param_1,&local_68,pfVar1,0x3f800000,&local_78,param_2);
    *(undefined8 *)pfVar1 = *puVar7;
    *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)(puVar7 + 1);
    if (*pfVar1 * *pfVar1 + *(float *)(param_1 + 0x32) * *(float *)(param_1 + 0x32) +
        *(float *)((longlong)param_1 + 0x194) * *(float *)((longlong)param_1 + 0x194) <
        *(float *)((longlong)param_1 + 0x1ec) * *(float *)((longlong)param_1 + 0x1ec)) {
      (**(code **)(*param_1 + 0x530))(param_1,param_2);
    }
    else if ((*param_5 <= 0.0001) ||
            (cVar6 = (**(code **)(*param_1 + 0x550))(param_1,param_2), cVar6 != '\0'))
    goto LAB_14307e480;
    uVar8 = 0;
  }
  return uVar8;
}



// FUNCTION 14307e4c0 FUN_14307e4c0 body=55 status=ok
// SIG undefined FUN_14307e4c0(void)

undefined8 FUN_14307e4c0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)
           (**(code **)(*(longlong *)(param_1 + 0x460) + 0x10))
                     ((longlong *)(param_1 + 0x460),*(undefined1 *)(param_1 + 0x690));
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014307e4e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x498))(plVar1,0);
    return uVar2;
  }
  return 1;
}



// FUNCTION 14307e500 FUN_14307e500 body=102 status=ok
// SIG undefined FUN_14307e500(void)

undefined8 FUN_14307e500(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x460))();
  if (plVar1 == (longlong *)0x0) {
    return 1;
  }
  if (*(char *)((longlong)param_1 + 0x2dd) != '\0') {
    iVar3 = *(int *)((longlong)param_1 + 0x2ec);
    if (*(int *)((longlong)param_1 + 0x2ec) <= *(int *)((longlong)param_1 + 0x2e4)) {
      iVar3 = *(int *)((longlong)param_1 + 0x2e4);
    }
                    /* WARNING: Could not recover jumptable at 0x00014307e541. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x498))(plVar1,iVar3);
    return uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014307e557. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x498))(plVar1,0);
  return uVar2;
}



// FUNCTION 14307e570 FUN_14307e570 body=138 status=ok
// SIG undefined FUN_14307e570(void)

undefined8 FUN_14307e570(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x1a8);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x118);
    *(longlong **)(param_1 + 0x1a8) = plVar2;
    if (plVar2 == (longlong *)0x0) goto LAB_14307e5b6;
  }
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x948))();
  if ((plVar2 != (longlong *)0x0) && (cVar1 = (**(code **)(*plVar2 + 0x178))(plVar2), cVar1 != '\0')
     ) {
    return 1;
  }
LAB_14307e5b6:
  if ((*(byte *)(param_1 + 0x1cc) & 1) != 0) {
    return 1;
  }
  if (((((*(byte *)(param_1 + 0x1cc) & 2) != 0) && (*(longlong *)(param_1 + 0x118) != 0)) &&
      (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x118) + 0x150), plVar2 != (longlong *)0x0))
     && (cVar1 = (**(code **)(*plVar2 + 0x780))(), cVar1 == '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 14307e600 FUN_14307e600 body=109 status=ok
// SIG undefined FUN_14307e600(void)

bool FUN_14307e600(longlong *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if (param_2 == 0) {
    param_2 = 1;
  }
  if (0 < *(int *)((longlong)param_1 + 0x1b4)) {
    return param_2 <= (int)param_1[0x38];
  }
  cVar1 = (**(code **)(*param_1 + 0x460))();
  if (cVar1 == '\0') {
    iVar2 = (**(code **)(*param_1 + 0x448))(param_1);
    if (iVar2 < param_2) {
      return false;
    }
  }
  return true;
}



// FUNCTION 14307e670 FUN_14307e670 body=102 status=ok
// SIG undefined FUN_14307e670(void)

undefined8 FUN_14307e670(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x460))();
  if (plVar1 == (longlong *)0x0) {
    return 1;
  }
  if (*(char *)((longlong)param_1 + 0x2dd) != '\0') {
    iVar3 = *(int *)((longlong)param_1 + 0x2ec);
    if (*(int *)((longlong)param_1 + 0x2ec) <= *(int *)((longlong)param_1 + 0x2e4)) {
      iVar3 = *(int *)((longlong)param_1 + 0x2e4);
    }
                    /* WARNING: Could not recover jumptable at 0x00014307e6b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x488))(plVar1,iVar3);
    return uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00014307e6c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x488))(plVar1,0);
  return uVar2;
}



// FUNCTION 14307e6f0 FUN_14307e6f0 body=123 status=ok
// SIG undefined FUN_14307e6f0(void)

void FUN_14307e6f0(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FWeakObjectPtr::Get(param_2 + 0x6c);
  lVar2 = FUN_142d29780(uVar1);
  if (lVar2 == 0) {
    (**(code **)(*param_1 + 0x600))(param_1,param_2);
  }
  (**(code **)(*param_1 + 0x520))(param_1,param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 14307e770 FUN_14307e770 body=206 status=ok
// SIG undefined FUN_14307e770(void)

void FUN_14307e770(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x168);
    if (lVar1 != 0) {
      lVar3 = FUN_1429f11d0();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_14238f290(lVar1,param_2,CONCAT71((int7)((ulonglong)(lVar3 + 0x88) >> 8),1));
      }
    }
    lVar1 = *(longlong *)(param_2 + 0x168);
    if (lVar1 != 0) {
      lVar3 = FUN_1429f11d0();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_14238f290(lVar1,param_1,CONCAT71((int7)((ulonglong)(lVar3 + 0x88) >> 8),1));
      }
    }
  }
  return;
}



// FUNCTION 14307e840 FUN_14307e840 body=98 status=ok
// SIG undefined FUN_14307e840(void)

void FUN_14307e840(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x539);
  bVar2 = (bVar1 & 0x3f) + 1;
  (**(code **)(*param_1 + 0x260))();
  bVar3 = 1;
  if (bVar2 < 0x40) {
    bVar3 = bVar2;
  }
  *(byte *)((longlong)param_1 + 0x539) = (bVar3 ^ bVar1) & 0x3f ^ bVar1;
                    /* WARNING: Could not recover jumptable at 0x00014307e89b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x590))(param_1,0);
  return;
}



// FUNCTION 14307e8d0 FUN_14307e8d0 body=315 status=ok
// SIG undefined FUN_14307e8d0(void)

void FUN_14307e8d0(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (((*(byte *)(param_1 + 0x58) & 1) == 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x38), plVar1 != (longlong *)0x0)) {
    lVar3 = FUN_142a07000();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0xa40))(plVar1,param_2);
      lVar3 = FUN_1423ac7e0(plVar1);
      if (lVar3 != 0) {
        lVar4 = FUN_1430bc930();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          *(longlong *)(lVar3 + 0x448) = param_1;
        }
      }
      lVar3 = *(longlong *)(param_1 + 0x38);
      if (lVar3 != 0) {
        lVar4 = FUN_142a0cc80();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FUN_1430664d0(lVar3 + 0x978,param_1,FUN_14306cf10);
          FUN_1430664d0(lVar3 + 0x988,param_1,FUN_143089c00);
        }
      }
    }
  }
  return;
}



// FUNCTION 14307ea10 FUN_14307ea10 body=132 status=ok
// SIG undefined FUN_14307ea10(void)

void FUN_14307ea10(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_14233f450();
  if (iVar1 == 3) {
    uVar2 = FUN_142c98860(param_1 + 0x328,*(undefined8 *)(param_1 + 0x118));
    FUN_14246fd50(param_1 + 0x318,uVar2);
    uVar2 = FUN_142c98860(param_1 + 0x378,*(undefined8 *)(param_1 + 0x118));
    FUN_14246fd50(param_1 + 0x368,uVar2);
    uVar2 = FUN_142d9cad0(param_1 + 0x3c8,*(undefined8 *)(param_1 + 0x118));
    FUN_14246fd50(param_1 + 0x3b8,uVar2);
    return;
  }
  return;
}



// FUNCTION 14307eaa0 FUN_14307eaa0 body=72 status=ok
// SIG undefined FUN_14307eaa0(void)

ulonglong FUN_14307eaa0(longlong param_1,byte param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)0x0;
  if ((int)(uint)param_2 < *(int *)(param_1 + 0x6a0)) {
    lVar2 = *(longlong *)(param_1 + 0x698);
    plVar4 = (longlong *)(ulonglong)param_2;
    if (*(longlong *)(lVar2 + 8 + (longlong)plVar4 * 0x48) != 0) {
      plVar3 = *(longlong **)(lVar2 + 0x38 + (longlong)plVar4 * 0x48);
      lVar1 = (longlong)plVar4 * 0x48;
      for (plVar4 = plVar3; plVar4 != plVar3 + *(int *)(lVar2 + 0x40 + lVar1); plVar4 = plVar4 + 1)
      {
        if (*plVar4 == param_3) {
          return CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
        }
      }
    }
  }
  return (ulonglong)plVar4 & 0xffffffffffffff00;
}



// FUNCTION 14307eaf0 FUN_14307eaf0 body=31 status=ok
// SIG undefined FUN_14307eaf0(void)

longlong FUN_14307eaf0(longlong param_1)

{
  uint7 uVar1;
  
  uVar1 = (uint7)((ulonglong)DAT_146b479a8 >> 8);
  if ((*(longlong *)(param_1 + 0x7f8) != DAT_146b479a8) && ((*(byte *)(param_1 + 0x660) & 4) == 0))
  {
    return (ulonglong)uVar1 << 8;
  }
  return CONCAT71(uVar1,1);
}



// FUNCTION 14307eb10 FUN_14307eb10 body=27 status=ok
// SIG undefined FUN_14307eb10(void)

undefined1 FUN_14307eb10(longlong param_1)

{
  if ((*(float *)(param_1 + 0x264) <= 0.0) && (*(float *)(param_1 + 0x270) <= 0.0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 14307eb30 FUN_14307eb30 body=52 status=ok
// SIG undefined FUN_14307eb30(void)

undefined8 FUN_14307eb30(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    return 1;
  }
  if ((*(longlong **)(param_1 + 0x150) != (longlong *)0x0) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x778))(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 14307eb70 FUN_14307eb70 body=16 status=ok
// SIG undefined FUN_14307eb70(void)

undefined4 FUN_14307eb70(longlong param_1,byte param_2)

{
  return CONCAT31((int3)(*(uint *)(param_1 + 0x6c0) >> 8),
                  (*(uint *)(param_1 + 0x6c0) >> (param_2 & 0x1f) & 1) != 0);
}



// FUNCTION 14307eb80 FUN_14307eb80 body=11 status=ok
// SIG undefined FUN_14307eb80(void)

bool FUN_14307eb80(longlong param_1)

{
  return *(int *)(param_1 + 0x6c0) != 0;
}



// FUNCTION 14307eb90 FUN_14307eb90 body=32 status=ok
// SIG undefined FUN_14307eb90(void)

longlong FUN_14307eb90(longlong param_1)

{
  uint7 uVar1;
  
  uVar1 = (uint7)((ulonglong)DAT_146b479b0 >> 8);
  if ((*(longlong *)(param_1 + 0x7f8) != DAT_146b479b0) && (*(longlong *)(param_1 + 0x670) == 0)) {
    return (ulonglong)uVar1 << 8;
  }
  return CONCAT71(uVar1,1);
}



// FUNCTION 14307ebb0 FUN_14307ebb0 body=145 status=ok
// SIG undefined FUN_14307ebb0(void)

ulonglong FUN_14307ebb0(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_1[0xff] == DAT_146b479c0) {
    return CONCAT71((int7)(DAT_146b479c0 >> 8),1);
  }
  uVar2 = DAT_146b479c0;
  if ((char)param_1[0x25] != '\x03') {
    if ((longlong *)param_1[0x2a] != (longlong *)0x0) {
      uVar2 = (**(code **)(*(longlong *)param_1[0x2a] + 0x778))();
      if ((char)uVar2 != '\0') goto LAB_14307ec39;
    }
    uVar2 = (**(code **)(*param_1 + 0x858))(param_1);
    if ((int)((uint)uVar2 & 0xff) < (int)param_1[0xd4]) {
      uVar3 = uVar2 & 0xff;
      uVar2 = param_1[0xd3];
      if ((*(longlong *)(uVar2 + 8 + uVar3 * 0x48) != 0) &&
         (plVar1 = *(longlong **)(uVar2 + 0x18 + uVar3 * 0x48), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014307ec32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*plVar1 + 0x3f8))();
        return uVar2;
      }
    }
  }
LAB_14307ec39:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 14307ec50 FUN_14307ec50 body=97 status=ok
// SIG undefined FUN_14307ec50(void)

ulonglong FUN_14307ec50(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(ulonglong *)(param_1 + 0x7f8) == DAT_146b479c8) {
    return CONCAT71((int7)(DAT_146b479c8 >> 8),1);
  }
  uVar1 = DAT_146b479c8;
  if (*(char *)(param_1 + 0x128) != '\x03') {
    if (*(longlong **)(param_1 + 0x150) != (longlong *)0x0) {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x778))();
      if ((char)uVar1 != '\0') goto LAB_14307eca9;
    }
    return (ulonglong)(*(char *)(param_1 + 0x690) != *(char *)(param_1 + 0x67a));
  }
LAB_14307eca9:
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 14307ecc0 Grid_GetOnPendingLoad body=8 status=ok
// SIG undefined Grid_GetOnPendingLoad(void)

undefined1 AWorldScapeRoot::Grid_GetOnPendingLoad(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x6d8);
}



// FUNCTION 14307ecd0 FUN_14307ecd0 body=129 status=ok
// SIG undefined FUN_14307ecd0(void)

undefined8 FUN_14307ecd0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  if (*(longlong *)(param_1 + 0x7f8) == DAT_146b479b8) {
    return 1;
  }
  if (*(char *)(param_1 + 0x128) != '\x03') {
    if ((*(longlong **)(param_1 + 0x150) != (longlong *)0x0) &&
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x778))(), cVar2 != '\0')) {
      return 0;
    }
    if ((((int)(uint)*(byte *)(param_1 + 0x690) < *(int *)(param_1 + 0x6a0)) &&
        (plVar1 = *(longlong **)
                   (*(longlong *)(param_1 + 0x698) + 8 +
                   (ulonglong)*(byte *)(param_1 + 0x690) * 0x48), plVar1 != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(*plVar1 + 0x408))(), cVar2 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14307ed70 FUN_14307ed70 body=57 status=ok
// SIG undefined FUN_14307ed70(void)

undefined8 FUN_14307ed70(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14309f770();
  if (cVar1 == '\0') {
    if ((((*(uint *)(param_1 + 0x4e0) & 1) == 0) && (*(char *)(param_1 + 0x4fc) != '\x01')) &&
       ((*(uint *)(param_1 + 0x4e0) & 2) == 0)) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14307edb0 FUN_14307edb0 body=39 status=ok
// SIG undefined FUN_14307edb0(void)

ulonglong FUN_14307edb0(longlong param_1,byte param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (((int)(uint)param_2 < *(int *)(param_1 + 0x6a0)) &&
     (uVar1 = *(ulonglong *)(param_1 + 0x698),
     *(longlong *)(uVar1 + 8 + (ulonglong)param_2 * 0x48) != 0)) {
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 14307ede0 FUN_14307ede0 body=56 status=ok
// SIG undefined FUN_14307ede0(void)

bool FUN_14307ede0(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = *(byte *)(param_1 + 0x690);
  if ((((int)(uint)bVar1 < *(int *)(param_1 + 0x6a0)) &&
      (*(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)bVar1 * 0x48) != 0)) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x698) + 0x20 + (ulonglong)bVar1 * 0x48),
     lVar2 != 0)) {
    return *(char *)(lVar2 + 0x291) != '\0';
  }
  return false;
}



// FUNCTION 14307ee20 FUN_14307ee20 body=60 status=ok
// SIG undefined FUN_14307ee20(void)

undefined8 FUN_14307ee20(longlong param_1,char param_2)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = *(byte *)(param_1 + 0x690);
  if (((*(int *)(param_1 + 0x6a0) <= (int)(uint)bVar1) ||
      (*(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)bVar1 * 0x48) == 0)) ||
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x698) + 0x20 + (ulonglong)bVar1 * 0x48),
     lVar2 == 0)) {
    return 0;
  }
  if (((*(char *)(lVar2 + 0x291) != '\x02') && (*(char *)(lVar2 + 0x292) == '\0')) &&
     ((param_2 == '\0' || (*(char *)(lVar2 + 0x291) != '\x01')))) {
    return 0;
  }
  return 1;
}



// FUNCTION 14307ee60 FUN_14307ee60 body=155 status=ok
// SIG undefined FUN_14307ee60(void)

undefined8 FUN_14307ee60(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_18;
  longlong *local_10;
  
  (**(code **)(*param_1 + 0x990))(param_1,&local_18,param_2,param_3,param_4,1,0);
  uVar5 = 0;
  if (local_18 != 0) {
    uVar5 = *(undefined8 *)(local_18 + 0x10);
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return uVar5;
  }
  return uVar5;
}



// FUNCTION 14307ef00 FUN_14307ef00 body=156 status=ok
// SIG undefined FUN_14307ef00(void)

undefined8 FUN_14307ef00(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_18;
  longlong *local_10;
  
  (**(code **)(*param_1 + 0x998))(param_1,&local_18,param_2,param_3,1,0);
  uVar5 = 0;
  if (local_18 != 0) {
    uVar5 = *(undefined8 *)(local_18 + 0x10);
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  FUN_142c63c50(param_3);
  return uVar5;
}



// FUNCTION 14307efa0 FUN_14307efa0 body=166 status=ok
// SIG undefined FUN_14307efa0(void)

void FUN_14307efa0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_18 [16];
  
  if (param_2 != 0) {
    cVar1 = UObjectBaseUtility::IsTemplate(param_2,0x30);
    if (cVar1 == '\0') {
      uVar3 = FUN_142c6e6e0(param_2,local_18);
      FUN_143090ac0(param_1,uVar3);
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x608);
      uVar3 = *(undefined8 *)(param_2 + 0x10);
      if (lVar2 == 0) {
        if ((*(longlong *)(param_1 + 0x4a0) != 0) && (*(longlong *)(param_1 + 0x4a8) != 0)) {
          lVar2 = (**(code **)(**(longlong **)(param_1 + 0x4a8) + 0x170))();
        }
        if (lVar2 == 0) {
          return;
        }
      }
      lVar2 = FUN_14304a2f0(lVar2);
      if (lVar2 != 0) {
        FUN_142c84570(lVar2,uVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14307f050 FUN_14307f050 body=49 status=ok
// SIG undefined FUN_14307f050(void)

void FUN_14307f050(longlong *param_1)

{
  if (((*(byte *)(param_1 + 0xa0) & 1) == 0) && (*(char *)((longlong)param_1 + 0x5ac) != '\0')) {
    (**(code **)(*param_1 + 0x6f8))();
  }
  FUN_140a5e5a0(param_1);
  return;
}



// FUNCTION 14307f090 FUN_14307f090 body=643 status=ok
// SIG undefined FUN_14307f090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14307f090(longlong *param_1,float param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  float fVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (param_3 != '\0') {
    if (*(byte *)(param_1 + 0x25) < 3) {
      FUN_1430b4710();
    }
    else {
      FUN_1430b3380();
    }
  }
  lVar3 = param_1[0xff];
  if (DAT_146b479d0 != lVar3) {
    *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) | 1;
    (**(code **)(*param_1 + 0xac8))(param_1,&DAT_146b479d0);
    lVar1 = param_1[0xff];
    *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) & 0xfe;
    if (lVar1 == lVar3) {
      param_1[0xff] = DAT_146b479d0;
      local_c8 = (undefined1 *)lVar1;
      (**(code **)(*param_1 + 0xac0))(param_1,&local_c8);
    }
  }
  uVar2 = AActor::GetWorldTimerManager(param_1);
  if (param_2 <= 0.0) {
    if (param_1[0xdf] != 0) {
      FUN_142880530(uVar2,param_1 + 0xdf);
      param_1[0xdf] = 0;
    }
  }
  else {
    local_c8 = (undefined1 *)param_1[0xdf];
    lVar3 = FTimerManager::FindTimer(uVar2,&local_c8,0);
    if ((lVar3 != 0) && (*(char *)(lVar3 + 1) != '\x02')) {
      local_c8 = (undefined1 *)param_1[0xdf];
      uVar4 = FTimerManager::FindTimer(uVar2,&local_c8,0);
      fVar7 = (float)FTimerManager::InternalGetTimerRemaining(uVar2,uVar4);
      if (param_2 <= fVar7) {
        return;
      }
    }
    local_c8 = &LAB_143068bec;
    uStack_c0 = 0;
    plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      *(undefined4 *)(plVar5 + 2) = (undefined4)local_c8;
      *(undefined4 *)((longlong)plVar5 + 0x14) = local_c8._4_4_;
      *(undefined4 *)(plVar5 + 3) = uStack_c0;
      *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_bc;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar5[5] = lVar3;
      *plVar5 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_b8 = 0;
    local_b0 = 0;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x30))(plVar5,&local_b8);
    }
    FWeakObjectPtr::operator=(local_a8,0);
    local_d0 = 0xbf800000;
    local_d8 = 0;
    local_a0 = 0;
    local_68 = (longlong *)0x0;
    local_58 = 0;
    local_98 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar2,param_1 + 0xdf,&local_b8,param_2);
    if (local_58 != 0) {
      plVar6 = local_88;
      if (local_68 != (longlong *)0x0) {
        plVar6 = local_68;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      lVar3 = FMemory::Realloc(plVar5,0,0);
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
    }
  }
  return;
}



// FUNCTION 14307f320 FUN_14307f320 body=287 status=ok
// SIG undefined FUN_14307f320(void)

void FUN_14307f320(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  FUN_1422778e0();
  lVar2 = *(longlong *)(param_1 + 0x448);
  if ((lVar2 != 0) && (lVar6 = *(longlong *)(lVar2 + 0x38), lVar6 != 0)) {
    lVar5 = FUN_142a07000();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      iVar1 = *(int *)(lVar6 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar7 = iVar1 >> 0x1f & 0xffff;
        uVar4 = iVar1 + uVar7;
        lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
        puVar8 = *(undefined8 **)(lVar2 + 0x90);
        puVar9 = puVar8 + (longlong)*(int *)(lVar2 + 0x98) * 7;
        for (; puVar8 != puVar9; puVar8 = puVar8 + 7) {
          (**(code **)(*(longlong *)*puVar8 + 0x280))
                    ((longlong *)*puVar8,lVar2,puVar8 + 2,param_1,param_2);
        }
      }
    }
  }
  return;
}



// FUNCTION 14307f440 FUN_14307f440 body=226 status=ok
// SIG undefined FUN_14307f440(void)

void FUN_14307f440(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar3 = FUN_142269f40();
  if (lVar3 != 0) {
    lVar4 = FUN_1430b3b80();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14307f492;
  }
  lVar3 = 0;
LAB_14307f492:
  *(longlong *)(param_1 + 0x440) = lVar3;
  if (lVar3 != 0) {
    plVar5 = *(longlong **)(lVar3 + 0x700);
    plVar1 = plVar5 + *(int *)(lVar3 + 0x708);
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      lVar4 = *plVar5;
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x38) == *(longlong *)(param_1 + 0x20)))
      goto LAB_14307f509;
    }
    plVar5 = *(longlong **)(lVar3 + 0x710);
    plVar1 = plVar5 + *(int *)(lVar3 + 0x718);
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      lVar4 = *plVar5;
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x38) == *(longlong *)(param_1 + 0x20)))
      goto LAB_14307f509;
    }
  }
  lVar4 = 0;
LAB_14307f509:
  *(longlong *)(param_1 + 0x448) = lVar4;
  FUN_142279500(param_1);
  return;
}



// FUNCTION 14307f580 FUN_14307f580 body=250 status=ok
// SIG undefined FUN_14307f580(void)

void FUN_14307f580(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x440);
  if (lVar4 != 0) {
    bVar1 = *(byte *)(lVar4 + 0x690);
    if ((((int)(uint)bVar1 < *(int *)(lVar4 + 0x6a0)) &&
        (*(longlong *)(*(longlong *)(lVar4 + 0x698) + 8 + (ulonglong)bVar1 * 0x48) != 0)) &&
       (lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x698) + 0x20 + (ulonglong)bVar1 * 0x48),
       lVar2 != 0)) {
      uVar3 = FUN_14309f7d0(lVar2,CONCAT71((int7)((ulonglong)lVar4 >> 8),1));
      lVar4 = *(longlong *)(param_1 + 0x440);
    }
    else {
      uVar3 = 0;
    }
    *(undefined1 *)(param_1 + 0x458) = uVar3;
    uVar6 = 0;
    bVar1 = *(byte *)(lVar4 + 0x690);
    if ((((int)(uint)bVar1 < *(int *)(lVar4 + 0x6a0)) &&
        (*(longlong *)(*(longlong *)(lVar4 + 0x698) + 8 + (ulonglong)bVar1 * 0x48) != 0)) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x698) + 0x20 + (ulonglong)bVar1 * 0x48) != 0)) {
      uVar5 = FUN_14309ee20();
      lVar4 = *(longlong *)(param_1 + 0x440);
    }
    else {
      uVar5 = 0;
    }
    *(undefined4 *)(param_1 + 0x454) = uVar5;
    bVar1 = *(byte *)(lVar4 + 0x690);
    if ((((int)(uint)bVar1 < *(int *)(lVar4 + 0x6a0)) &&
        (*(longlong *)(*(longlong *)(lVar4 + 0x698) + 8 + (ulonglong)bVar1 * 0x48) != 0)) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x698) + 0x20 + (ulonglong)bVar1 * 0x48) != 0)) {
      uVar6 = FUN_14309ede0();
    }
    *(undefined4 *)(param_1 + 0x450) = uVar6;
  }
  return;
}



// FUNCTION 14307f680 FUN_14307f680 body=165 status=ok
// SIG undefined FUN_14307f680(void)

bool FUN_14307f680(longlong *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x500))();
  if (cVar1 != '\0') {
    if ((int)param_1[0x42] == 1) {
      iVar2 = (**(code **)(*param_1 + 0x448))(param_1);
      iVar3 = (**(code **)(*param_1 + 0x440))(param_1);
      return iVar2 < iVar3;
    }
    if ((int)param_1[0x42] == 2) {
      iVar2 = (**(code **)(*param_1 + 0x418))(param_1);
      if (0 < iVar2) {
        iVar2 = (**(code **)(*param_1 + 0x420))(param_1);
        iVar3 = (**(code **)(*param_1 + 0x418))(param_1);
        if ((iVar2 < iVar3) && (0 < (int)param_1[0x39])) {
          return true;
        }
      }
    }
  }
  return false;
}



// FUNCTION 14307f730 FUN_14307f730 body=191 status=ok
// SIG undefined FUN_14307f730(void)

undefined8 FUN_14307f730(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  bVar1 = *(byte *)(param_1 + 0x690);
  if (((int)(uint)bVar1 < *(int *)(param_1 + 0x6a0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x698) + 5 + (ulonglong)bVar1 * 0x48) != '\0')) {
    return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x698) >> 8),1);
  }
  plVar4 = (longlong *)
           (**(code **)(*(longlong *)(param_1 + 0x460) + 0x10))
                     ((longlong *)(param_1 + 0x460),(ulonglong)bVar1);
  if (plVar4 == (longlong *)0x0) {
    return 0;
  }
  if ((int)(uint)*(byte *)(param_1 + 0x690) < *(int *)(param_1 + 0x6a0)) {
    plVar2 = *(longlong **)
              (*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)*(byte *)(param_1 + 0x690) * 0x48);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar2 + 0x480))();
                    /* WARNING: Could not recover jumptable at 0x00014307f7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(*plVar4 + 0x470))(plVar4,uVar3);
      return uVar5;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014307f7dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*plVar4 + 0x470))(plVar4,0);
  return uVar5;
}



// FUNCTION 14307f7f0 FUN_14307f7f0 body=65 status=ok
// SIG undefined FUN_14307f7f0(void)

ulonglong FUN_14307f7f0(longlong *param_1)

{
  ulonglong in_RAX;
  float extraout_XMM0_Da;
  
  if (1 < (int)param_1[0x59]) {
    in_RAX = (**(code **)(*param_1 + 0x558))();
    if (0.0 < extraout_XMM0_Da) {
      return (ulonglong)((int)param_1[0x59] <= (int)(uint)*(byte *)((longlong)param_1 + 0x4ec));
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14307f840 FUN_14307f840 body=346 status=ok
// SIG undefined FUN_14307f840(void)

undefined1
FUN_14307f840(undefined4 *param_1,longlong *param_2,longlong *param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  
  local_res8 = *(undefined8 *)(param_1 + 2);
  uVar4 = FUN_1429d7ab0();
  uVar3 = (**(code **)(*param_3 + 0x280))(param_3,param_2,uVar4,&local_res8,0);
  *(undefined8 *)(param_1 + 2) = local_res8;
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1,4);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 1,1);
  }
  else {
    *(undefined1 *)(param_1 + 1) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 4,1);
  }
  else {
    *(undefined1 *)(param_1 + 4) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,(undefined1 *)((longlong)param_1 + 0x11),1);
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x11) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  *param_4 = 1;
  return uVar3;
}



// FUNCTION 14307f9a0 FUN_14307f9a0 body=97 status=ok
// SIG undefined FUN_14307f9a0(void)

void FUN_14307f9a0(longlong param_1)

{
  byte bVar1;
  char cVar2;
  
  if (*(longlong **)(param_1 + 0x150) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x778))();
    if ((((cVar2 != '\0') &&
         (bVar1 = *(byte *)(param_1 + 0x690), (int)(uint)bVar1 < *(int *)(param_1 + 0x6a0))) &&
        (*(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)bVar1 * 0x48) != 0)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x698) + 0x20 + (ulonglong)bVar1 * 0x48) != 0)) {
      FUN_14309fe20();
      return;
    }
  }
  return;
}



// FUNCTION 14307fa10 FUN_14307fa10 body=379 status=ok
// SIG undefined FUN_14307fa10(void)

void FUN_14307fa10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 param_9)

{
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  FUN_140729f20(param_1 + 0x510,param_9);
  local_50 = *(undefined4 *)(param_8 + 1);
  local_58 = *param_8;
  local_40 = *(undefined4 *)(param_7 + 1);
  local_30 = *(undefined4 *)(param_6 + 1);
  local_48 = *param_7;
  *(undefined1 *)(param_1 + 0x508) = 1;
  local_38 = *param_6;
  AActor::NotifyHit(param_1,param_2,param_3,param_4,param_5,&local_38,&local_48,&local_58,param_9);
  local_30 = *(undefined4 *)(param_8 + 1);
  local_38 = *param_8;
  local_40 = *(undefined4 *)(param_7 + 1);
  local_50 = *(undefined4 *)(param_6 + 1);
  local_48 = *param_7;
  local_58 = *param_6;
  FUN_1430867e0(param_1,param_2,param_3,param_4,param_5,&local_58,&local_48,&local_38,param_9);
  *(undefined1 *)(param_1 + 0x508) = 0;
  return;
}



// FUNCTION 14307fb90 FUN_14307fb90 body=42 status=ok
// SIG undefined FUN_14307fb90(void)

void FUN_14307fb90(longlong param_1)

{
  FUN_142237550();
  if (*(char *)(param_1 + 0x720) != '\0') {
    FUN_1430874d0(param_1);
    return;
  }
  return;
}



// FUNCTION 14307fbc0 FUN_14307fbc0 body=424 status=ok
// SIG undefined FUN_14307fbc0(void)

void FUN_14307fbc0(longlong param_1,int param_2,longlong param_3,undefined1 param_4,float param_5)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(param_1 + 0x700);
  uVar3 = 0;
  plVar5 = plVar7 + *(int *)(param_1 + 0x708);
  do {
    if (plVar7 == plVar5) {
      plVar5 = *(longlong **)(param_1 + 0x710);
      uVar4 = (longlong)*(int *)(param_1 + 0x718) & 0x1fffffffffffffff;
      if (plVar5 + *(int *)(param_1 + 0x718) < plVar5) {
        uVar4 = uVar3;
      }
      if (uVar4 != 0) {
        do {
          if (*plVar5 != 0) {
            FUN_14307fd90(*plVar5,param_2,param_3,param_4,param_5);
          }
          plVar5 = plVar5 + 1;
          uVar3 = uVar3 + 1;
        } while (uVar3 != uVar4);
      }
      return;
    }
    lVar1 = *plVar7;
    if (lVar1 != 0) {
      plVar2 = *(longlong **)(lVar1 + 0x90);
      plVar6 = plVar2 + (longlong)*(int *)(lVar1 + 0x98) * 7;
      for (; plVar2 != plVar6; plVar2 = plVar2 + 7) {
        if (((*plVar2 == 0) || ((int)plVar2[1] != param_2)) ||
           ((param_3 != 0 && (*(longlong *)(*plVar2 + 0x28) != param_3)))) goto LAB_14307fcdd;
        switch(param_4) {
        case 0:
          *(uint *)(plVar2 + 2) = *(uint *)(plVar2 + 2) | 1;
          break;
        case 1:
          *(uint *)(plVar2 + 2) = *(uint *)(plVar2 + 2) & 0xfffffffe;
          break;
        case 2:
          goto switchD_14307fc85_caseD_2;
        case 3:
          *(int *)((longlong)plVar2 + 0x24) = (int)plVar2[4];
          break;
        case 4:
          *(uint *)(plVar2 + 2) = *(uint *)(plVar2 + 2) | 2;
          *(undefined4 *)(plVar2 + 4) = *(undefined4 *)((longlong)plVar2 + 0x24);
          break;
        case 5:
          *(int *)((longlong)plVar2 + 0x24) = (int)plVar2[4];
switchD_14307fc85_caseD_2:
          *(uint *)(plVar2 + 2) = *(uint *)(plVar2 + 2) | 2;
        case 7:
switchD_14307fc85_caseD_7:
          *(float *)(plVar2 + 4) = param_5;
          break;
        case 6:
          *(uint *)(plVar2 + 2) = *(uint *)(plVar2 + 2) | 3;
          goto switchD_14307fc85_caseD_7;
        case 8:
          *(float *)(plVar2 + 4) = param_5 + *(float *)(plVar2 + 4);
          break;
        case 9:
          *(uint *)(plVar2 + 2) = *(uint *)(plVar2 + 2) | 4;
          goto switchD_14307fc85_caseD_7;
        }
        *(uint *)(plVar2 + 2) = *(uint *)(plVar2 + 2) | 8;
        *(uint *)(lVar1 + 0x58) = *(uint *)(lVar1 + 0x58) | 0x100;
LAB_14307fcdd:
      }
    }
    plVar7 = plVar7 + 1;
  } while( true );
}



// FUNCTION 14307fd90 FUN_14307fd90 body=250 status=ok
// SIG undefined FUN_14307fd90(void)

void FUN_14307fd90(longlong param_1,int param_2,longlong param_3,undefined1 param_4,float param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x90);
  plVar1 = plVar2 + (longlong)*(int *)(param_1 + 0x98) * 7;
  do {
    if (plVar2 == plVar1) {
      return;
    }
    if (((*plVar2 == 0) || ((int)plVar2[1] != param_2)) ||
       ((param_3 != 0 && (*(longlong *)(*plVar2 + 0x28) != param_3)))) goto LAB_14307fe71;
    switch(param_4) {
    case 0:
      *(uint *)(plVar2 + 2) = *(uint *)(plVar2 + 2) | 1;
      break;
    case 1:
      *(uint *)(plVar2 + 2) = *(uint *)(plVar2 + 2) & 0xfffffffe;
      break;
    case 2:
      goto switchD_14307fe09_caseD_2;
    case 3:
      *(int *)((longlong)plVar2 + 0x24) = (int)plVar2[4];
      break;
    case 4:
      *(uint *)(plVar2 + 2) = *(uint *)(plVar2 + 2) | 2;
      *(undefined4 *)(plVar2 + 4) = *(undefined4 *)((longlong)plVar2 + 0x24);
      break;
    case 5:
      *(int *)((longlong)plVar2 + 0x24) = (int)plVar2[4];
switchD_14307fe09_caseD_2:
      *(uint *)(plVar2 + 2) = *(uint *)(plVar2 + 2) | 2;
    case 7:
switchD_14307fe09_caseD_7:
      *(float *)(plVar2 + 4) = param_5;
      break;
    case 6:
      *(uint *)(plVar2 + 2) = *(uint *)(plVar2 + 2) | 3;
      goto switchD_14307fe09_caseD_7;
    case 8:
      *(float *)(plVar2 + 4) = param_5 + *(float *)(plVar2 + 4);
      break;
    case 9:
      *(uint *)(plVar2 + 2) = *(uint *)(plVar2 + 2) | 4;
      goto switchD_14307fe09_caseD_7;
    }
    *(uint *)(plVar2 + 2) = *(uint *)(plVar2 + 2) | 8;
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x100;
LAB_14307fe71:
    plVar2 = plVar2 + 7;
  } while( true );
}



// FUNCTION 14307fec0 FUN_14307fec0 body=326 status=ok
// SIG undefined FUN_14307fec0(void)

void FUN_14307fec0(longlong param_1,byte param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (((*(byte *)(param_1 + 0x58) & 1) == 0) && (lVar4 = *(longlong *)(param_1 + 0x38), lVar4 != 0))
  {
    lVar2 = FUN_142a07000();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (plVar3 = (longlong *)FUN_1423ac7e0(lVar4), plVar3 != (longlong *)0x0)) {
      lVar4 = FUN_1430bc930();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        (**(code **)(*plVar3 + 0x340))(plVar3,param_2);
      }
    }
  }
  if (*(char *)(param_1 + 0x29) == '\0') {
    lVar4 = *(longlong *)(param_1 + 0x60);
    lVar2 = (longlong)*(int *)(param_1 + 0x68) * 0x60 + lVar4;
    for (; lVar4 != lVar2; lVar4 = lVar4 + 0x60) {
      if (((*(byte *)(lVar4 + 8) & 1) != 0) && (*(uint *)(lVar4 + 0x44) != 0)) {
        lVar5 = *(longlong *)(lVar4 + 0x58);
        if ((*(uint *)(lVar4 + 0x44) >> (param_2 & 0x1f) & 1) == 0) {
          if (lVar5 != 0) {
            FUN_142600fa0();
          }
        }
        else {
          if (lVar5 == 0) {
            if (*(longlong *)(lVar4 + 0x48) != 0) {
              FUN_14306f5d0(param_1,lVar4);
              lVar5 = *(longlong *)(lVar4 + 0x58);
            }
            if (lVar5 == 0) goto LAB_14307ffe8;
          }
          FUN_1425fcab0(lVar5,0);
        }
      }
LAB_14307ffe8:
    }
  }
  return;
}



// FUNCTION 143080010 FUN_143080010 body=852 status=ok
// SIG undefined FUN_143080010(void)

void FUN_143080010(longlong *param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  longlong local_38;
  int local_30;
  
  FUN_14309fea0();
  if (((1 < (int)param_1[0x59]) && (param_2 != (char)param_1[0x30])) &&
     (plVar4 = (longlong *)FUN_14309ed70(param_1), plVar4 != (longlong *)0x0)) {
    uVar5 = FUN_1430bc880();
    uVar6 = FUN_1430bc880();
    lVar7 = (**(code **)(*plVar4 + 0x7f8))(plVar4,uVar6,param_2);
    lVar8 = (**(code **)(*plVar4 + 0x7f8))(plVar4,uVar5,(char)param_1[0x30]);
    if (lVar8 == lVar7) {
      uVar5 = FUN_1430bdfe0();
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x7f8))(plVar4,uVar5,param_2);
      if (plVar4 != (longlong *)0x0) {
        lVar7 = FUN_1430bdfe0();
        if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
            lVar7 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && ((int)param_1[0x59] == (int)plVar4[0x59])) {
          fVar11 = (float)(**(code **)(*plVar4 + 0x558))(plVar4);
          fVar12 = (float)(**(code **)(*param_1 + 0x558))(param_1);
          if (ABS(fVar12 - fVar11) <= 1e-08) {
            *(undefined1 *)((longlong)param_1 + 0x4ec) = *(undefined1 *)((longlong)plVar4 + 0x4ec);
          }
        }
      }
    }
  }
  if ((0.0 < *(float *)((longlong)param_1 + 0x264)) || (0.0 < *(float *)(param_1 + 0x4e))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (((bVar1) && (param_2 != (char)param_1[0x30])) &&
     (plVar4 = (longlong *)FUN_14309ed70(param_1), plVar4 != (longlong *)0x0)) {
    uVar5 = FUN_1430bdfe0();
    lVar7 = (**(code **)(*plVar4 + 0x7f8))(plVar4,uVar5,param_2);
    if (lVar7 != 0) {
      lVar8 = FUN_1430bdfe0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if ((0.0 < *(float *)(lVar7 + 0x264)) || (0.0 < *(float *)(lVar7 + 0x270))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          lVar8 = FUN_14178ca30(lVar7);
          lVar9 = FUN_14178ca30(param_1);
          if (lVar9 == lVar8) {
            fVar11 = *(float *)(lVar7 + 0x520);
            *(float *)(param_1 + 0xa4) = fVar11;
            *(undefined4 *)((longlong)param_1 + 0x4e4) = *(undefined4 *)(lVar7 + 0x4e4);
            if (((0.0001 < fVar11) && (param_1[0x85] != 0)) &&
               ((longlong *)param_1[0x23] != (longlong *)0x0)) {
              uVar5 = (**(code **)(*(longlong *)param_1[0x23] + 0x670))();
              FUN_142d408e0(param_1[0x85],uVar5,0x38d1b717,1,0);
              uVar5 = FUN_142d3aaa0(param_1[0x85],&local_38,0x3f800000);
              FUN_142d303e0(param_1 + 0x11b,uVar5);
              if (local_30 != 0) {
                lVar7 = local_38 + 8;
                iVar10 = local_30;
                do {
                  FRichCurve::~FRichCurve(lVar7);
                  lVar7 = lVar7 + 0x80;
                  iVar10 = iVar10 + -1;
                } while (iVar10 != 0);
              }
              if (local_38 != 0) {
                FMemory::Free();
              }
            }
          }
        }
      }
    }
  }
  uVar5 = FUN_1412996f0(param_1);
  uVar3 = FUN_142dd0770(uVar5);
  *(undefined4 *)(param_1 + 0xa0) = uVar3;
  cVar2 = UActorComponent::IsComponentTickEnabled(param_1);
  if ((cVar2 == '\0') && (cVar2 = (**(code **)(*param_1 + 0x528))(param_1), cVar2 != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x000143080357. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x358))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143080370 FUN_143080370 body=686 status=ok
// SIG undefined FUN_143080370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143080370(longlong *param_1)

{
  char cVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [8];
  ulonglong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  cVar1 = (**(code **)(*param_1 + 0x890))();
  if (cVar1 != '\0') {
    FWeakObjectPtr::operator=(local_a8,0);
    uVar5 = 0;
    local_a0 = 0;
    puVar2 = (ulonglong *)FName::FName(&local_b8,L"OnAmmoGivenToEmptyWeapon",1);
    FWeakObjectPtr::operator=(local_a8,param_1);
    uStack_b0 = *puVar2;
    local_a0 = uStack_b0;
    if (0 < (int)param_1[0xd4]) {
      do {
        lVar3 = (**(code **)(param_1[0x8c] + 0x10))(param_1 + 0x8c,uVar5 & 0xff);
        if (lVar3 != 0) {
          TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(lVar3 + 400,&local_b8);
          TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(lVar3 + 400);
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)param_1[0xd4]);
    }
    cVar1 = (**(code **)(*param_1 + 0x888))(param_1);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_1 + 0x870))(param_1);
      if (cVar1 == '\0') {
        uStack_b0 = uStack_b0 & 0xffffffff00000000;
        local_b8 = FUN_143093740;
        lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
        if (*(longlong *)(lVar3 + 400) == 0) {
          uVar6 = *(undefined8 *)(lVar3 + 0x3f8);
        }
        else {
          uVar6 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
        }
        plVar4 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar4 != (longlong *)0x0) {
          *plVar4 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar4 + 1,param_1);
          *(undefined4 *)(plVar4 + 2) = (undefined4)local_b8;
          *(undefined4 *)((longlong)plVar4 + 0x14) = local_b8._4_4_;
          *(undefined4 *)(plVar4 + 3) = (undefined4)uStack_b0;
          *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_b0._4_4_;
          lVar3 = FDelegateHandle::GenerateNewID();
          plVar4[5] = lVar3;
          *plVar4 = (longlong)&PTR_FUN_143f77bd0;
        }
        local_98 = 0;
        local_90 = 0;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x30))(plVar4,&local_98);
        }
        FWeakObjectPtr::operator=(local_88,0);
        local_c0 = 0xbf800000;
        local_c8 = 1;
        local_80 = 0;
        local_48 = (longlong *)0x0;
        local_38 = 0;
        local_78 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar6,param_1 + 0xdd,&local_98,0x3f800000);
        if (local_38 != 0) {
          plVar7 = local_68;
          if (local_48 != (longlong *)0x0) {
            plVar7 = local_48;
          }
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x10))(plVar7,0);
          }
        }
        if (local_48 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          lVar3 = FMemory::Realloc(plVar4,0,0);
          if (lVar3 != 0) {
            FMemory::Free(lVar3);
          }
        }
      }
      else {
        (**(code **)(*param_1 + 0x8a0))(param_1,(char)param_1[0xd2],1);
      }
    }
  }
  return;
}



// FUNCTION 143080620 FUN_143080620 body=1450 status=ok
// SIG undefined FUN_143080620(void)

void FUN_143080620(longlong param_1,byte *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  float fVar9;
  undefined8 uVar8;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float local_res8;
  undefined4 uStackX_c;
  float local_108;
  float fStack_104;
  float local_100;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  byte local_d8;
  undefined2 local_d7;
  undefined1 local_d5;
  undefined4 local_d4;
  uint local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  float local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  
  fVar11 = *(float *)(param_2 + 0x30);
  fVar1 = *(float *)(param_2 + 0x34);
  fVar2 = *(float *)(param_2 + 0x2c);
  fVar10 = fVar2 * fVar2 + fVar11 * fVar11 + fVar1 * fVar1;
  if (fVar10 == 1.0) {
    local_f8 = *(undefined8 *)(param_2 + 0x2c);
    fVar13 = *(float *)(param_2 + 0x34);
    fVar9 = (float)((ulonglong)local_f8 >> 0x20);
    fVar14 = (float)local_f8;
  }
  else {
    fVar13 = DAT_1468b5d98;
    fVar14 = DAT_1468b5d90;
    fVar9 = DAT_1468b5d94;
    if (1e-08 <= fVar10) {
      auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      local_res8 = auVar12._0_4_;
      local_res8 = local_res8 + local_res8 * (0.5 - fVar10 * 0.5 * local_res8 * local_res8);
      local_res8 = local_res8 + local_res8 * (0.5 - fVar10 * 0.5 * local_res8 * local_res8);
      fVar13 = fVar1 * local_res8;
      fVar14 = fVar2 * local_res8;
      fVar9 = fVar11 * local_res8;
    }
    local_f8 = CONCAT44(fVar9,fVar14);
  }
  local_f0 = fVar13;
  if (fVar13 < *(float *)(param_1 + 0x2f8)) {
    lVar6 = *(longlong *)(param_1 + 0x120);
    local_e0 = -1.0;
    local_e8 = 0;
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0();
    }
    fVar11 = *(float *)(lVar6 + 0x7b0);
    _guard_xfg_dispatch_icall_nop(&local_d8,0,0x90);
    local_100 = 1.0 - *(float *)(param_2 + 0xc);
    local_cc = 0x3f800000;
    local_108 = fVar11 * *param_3 * local_100;
    fStack_104 = fVar11 * param_3[1] * local_100;
    local_100 = fVar11 * param_3[2] * local_100;
    cVar5 = FUN_1430937f0(param_1,&local_e8,&local_108,param_2,&local_d8);
    if (cVar5 == '\0') {
      local_cc = *(undefined4 *)(param_2 + 0xc);
      local_c8 = *(undefined4 *)(param_2 + 0x10);
      local_d7 = 0;
      local_d5 = 0;
      local_5c = 0;
      local_d8 = *param_2 & 3;
      local_c4 = *(undefined8 *)(param_2 + 0x14);
      local_d4 = *(undefined4 *)(param_2 + 4);
      local_b8 = *(undefined8 *)(param_2 + 0x20);
      local_d0 = *(uint *)(param_2 + 8) & 1;
      local_bc = *(undefined4 *)(param_2 + 0x1c);
      local_ac = *(undefined8 *)(param_2 + 0x2c);
      local_b0 = *(undefined4 *)(param_2 + 0x28);
      local_a4 = *(undefined4 *)(param_2 + 0x34);
      local_98 = *(float *)(param_2 + 0x40);
      local_8c = *(undefined4 *)(param_2 + 0x4c);
      local_80 = *(undefined4 *)(param_2 + 0x58);
      local_78 = *(undefined4 *)(param_2 + 0x60);
      local_74 = *(undefined4 *)(param_2 + 100);
      local_70 = *(undefined4 *)(param_2 + 0x68);
      local_6c = *(undefined4 *)(param_2 + 0x6c);
      local_68 = *(undefined4 *)(param_2 + 0x70);
      local_a0 = *(undefined8 *)(param_2 + 0x38);
      local_64 = *(undefined4 *)(param_2 + 0x74);
      local_94 = *(undefined8 *)(param_2 + 0x44);
      local_60 = *(undefined4 *)(param_2 + 0x78);
      local_58 = *(undefined8 *)(param_2 + 0x80);
      local_88 = *(undefined8 *)(param_2 + 0x50);
      local_50 = *(undefined8 *)(param_2 + 0x88);
      local_7c = *(undefined4 *)(param_2 + 0x5c);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x328,&local_d8);
      if (*(int *)(param_1 + 0x28c) < 1) {
        return;
      }
      if (*(int *)(param_1 + 0x28c) <= *(int *)(param_1 + 0x294)) {
        return;
      }
      fVar11 = (fVar14 * *param_3 + fVar9 * param_3[1] + param_3[2] * fVar13) *
               *(float *)(param_1 + 0x2e4) * -2.0;
      local_e0 = fVar11 * fVar13 + param_3[2];
      uVar8 = CONCAT44(fVar9 * fVar11 + param_3[1],fVar14 * fVar11 + *param_3);
      *(undefined8 *)(param_1 + 0x18c) = uVar8;
      *(undefined8 *)(param_1 + 0x2fc) = uVar8;
      *(float *)(param_1 + 0x194) = local_e0;
      *(float *)(param_1 + 0x304) = local_e0;
      if (*(char *)(param_1 + 0x2dc) == '\0') {
        return;
      }
      FUN_143054790(param_1,param_2,param_3);
      if (*(int *)(param_1 + 0x294) != *(int *)(param_1 + 0x28c)) {
        return;
      }
      if (*(longlong *)(param_1 + 0x278) == 0) {
        return;
      }
      *(uint *)(param_1 + 0x1c8) = *(uint *)(param_1 + 0x1c8) | 2;
      *(undefined1 *)(param_1 + 0x30c) = 1;
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UGbxProjectileMovementComponent::OnHit",L"::");
      pwVar4 = (wchar_t *)0x0;
      while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar4 = pwVar3;
      }
      FName::FName(&local_res8,pwVar4 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove
                (*(longlong *)(param_1 + 0x278) + 0x280,param_1,CONCAT44(uStackX_c,local_res8));
      return;
    }
    *(undefined8 *)(param_1 + 0x18c) = *(undefined8 *)(param_1 + 0x2fc);
    *(undefined1 *)(param_1 + 0x314) = 1;
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x304);
    fVar11 = local_a0._4_4_ * local_a0._4_4_ + (float)local_a0 * (float)local_a0 +
             local_98 * local_98;
    local_100 = local_98;
    local_108 = (float)local_a0;
    fStack_104 = local_a0._4_4_;
    if (fVar11 != 1.0) {
      if (1e-08 <= fVar11) {
        auVar12 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
        local_100 = auVar12._0_4_;
        local_100 = local_100 + local_100 * (0.5 - fVar11 * 0.5 * local_100 * local_100);
        local_100 = local_100 + local_100 * (0.5 - fVar11 * 0.5 * local_100 * local_100);
        local_108 = (float)local_a0 * local_100;
        fStack_104 = local_a0._4_4_ * local_100;
        local_100 = local_98 * local_100;
      }
      else {
        local_108 = DAT_1468b5d90;
        fStack_104 = DAT_1468b5d94;
        local_100 = DAT_1468b5d98;
      }
    }
    local_f8 = CONCAT44(fStack_104,local_108);
    local_f0 = local_100;
    if (local_100 < *(float *)(param_1 + 0x2f8)) {
      return;
    }
  }
  FUN_143095b20(param_1,&local_f8);
  return;
}



// FUNCTION 143080bd0 FUN_143080bd0 body=110 status=ok
// SIG undefined FUN_143080bd0(void)

void FUN_143080bd0(longlong param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 local_18 [2];
  
  if ((undefined8 *)(param_1 + 0x2c0) != local_18) {
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    plVar3 = *(longlong **)(param_1 + 0x2c8);
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if ((param_2 != '\x01') && (*(char *)(param_1 + 0x2b8) != '\0')) {
    *(undefined1 *)(param_1 + 0x2e2) = 1;
  }
  return;
}



// FUNCTION 143080c40 FUN_143080c40 body=575 status=ok
// SIG undefined FUN_143080c40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143080c40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  int local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  if ((param_2 != 0) &&
     (local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8, param_2 == *(longlong *)(param_1 + 0x168)))
  {
    local_a0 = 0;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    FWeakObjectPtr::operator=(&local_a8,param_1);
    plVar1 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar1 == (longlong *)0x0) {
      if (((local_b0 != 0) && (local_b8 != (longlong *)0x0)) &&
         ((**(code **)(*local_b8 + 0x28))(local_b8,0), local_b8 != (longlong *)0x0)) {
        local_b8 = (longlong *)FMemory::Realloc(local_b8,0,0);
      }
    }
    else {
      *plVar1 = (longlong)&PTR_GetPoolName_145a68160;
      *(undefined4 *)(plVar1 + 1) = local_a8;
      *(undefined4 *)((longlong)plVar1 + 0xc) = local_a4;
      plVar1[2] = param_1;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar1[4] = lVar2;
      *plVar1 = (longlong)&PTR_GetPoolName_145a681a8;
      FUN_14306f090(plVar1,&local_b8);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      lVar2 = FMemory::Realloc(plVar1,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
    uVar3 = AActor::GetWorldTimerManager(param_1);
    local_98 = 0;
    local_90 = 0;
    if ((local_b0 != 0) && (local_b8 != (longlong *)0x0)) {
      (**(code **)(*local_b8 + 0x30))(local_b8,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_c0 = 0xbf800000;
    local_c8 = 0;
    local_80 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar3,&local_a0,&local_98,0x3f000000);
    if (local_38 != 0) {
      plVar1 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar1 = local_48;
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
    if (local_b0 != 0) {
      if (local_b8 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_b8 + 0x28))(local_b8,0);
      if (local_b8 != (longlong *)0x0) {
        local_b8 = (longlong *)FMemory::Realloc(local_b8,0,0);
      }
      local_b0 = 0;
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free(local_b8);
    }
  }
  return;
}



// FUNCTION 143080e80 FUN_143080e80 body=103 status=ok
// SIG undefined FUN_143080e80(void)

void FUN_143080e80(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_143095220();
  FUN_143094d00(param_1);
  if (*(char *)(param_1 + 0x128) == '\x03') {
    if ((*(byte *)(param_1 + 0x468) & 1) != 0) {
      FUN_14307e770(param_1,*(undefined8 *)(param_1 + 0x150));
      return;
    }
  }
  else if (*(char *)(param_1 + 0x501) == '\0') {
    uVar1 = FUN_142e6f710();
    lVar2 = AGameStateBase::OnRep_GameModeClass(param_1,uVar1);
    if (lVar2 != 0) {
      *(undefined1 *)(param_1 + 0x501) = 1;
    }
  }
  return;
}



// FUNCTION 143080f00 FUN_143080f00 body=209 status=ok
// SIG undefined FUN_143080f00(void)

void FUN_143080f00(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong local_28 [4];
  
  if (((*(longlong *)(param_1 + 0x428) != 0) && (0.0001 < *(float *)(param_1 + 0x520))) &&
     (*(longlong **)(param_1 + 0x118) != (longlong *)0x0)) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x670))();
    FUN_142d49f50(*(undefined8 *)(param_1 + 0x428),uVar2);
    plVar1 = (longlong *)(param_1 + 0x8d8);
    if (plVar1 != local_28) {
      iVar4 = *(int *)(param_1 + 0x8e0);
      if (iVar4 != 0) {
        lVar3 = *plVar1 + 8;
        do {
          FRichCurve::~FRichCurve(lVar3);
          lVar3 = lVar3 + 0x80;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      FUN_1426f4440(plVar1,0,0,*(undefined4 *)(param_1 + 0x8e4),0);
    }
    *(undefined4 *)(param_1 + 0x8e8) = 0;
  }
  FUN_1430a16e0(param_1);
  return;
}



// FUNCTION 143081040 FUN_143081040 body=254 status=ok
// SIG undefined FUN_143081040(void)

void FUN_143081040(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_res8;
  
  *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0xcc) & 0xfe;
  if ((param_1[0xff] == DAT_146b479a8) || (param_1[0xca] != 0)) {
    param_1[0xca] = 0;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x9e,0);
    if (*(char *)((longlong)param_1 + 0x661) != '\0') {
      FUN_14308e890(param_1);
      return;
    }
    if (((int)(uint)*(byte *)(param_1 + 0xd2) < (int)param_1[0xd4]) &&
       (plVar1 = *(longlong **)(param_1[0xd3] + 8 + (ulonglong)*(byte *)(param_1 + 0xd2) * 0x48),
       plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x498))();
    }
    lVar2 = param_1[0xff];
    if (DAT_146b479a0 != lVar2) {
      *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) | 1;
      (**(code **)(*param_1 + 0xac8))(param_1,&DAT_146b479a0);
      local_res8 = param_1[0xff];
      *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) & 0xfe;
      if (local_res8 == lVar2) {
        param_1[0xff] = DAT_146b479a0;
        (**(code **)(*param_1 + 0xac0))(param_1,&local_res8);
      }
    }
  }
  return;
}



// FUNCTION 143081150 FUN_143081150 body=754 status=ok
// SIG undefined FUN_143081150(void)

void FUN_143081150(longlong *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined8 local_res10;
  code *local_38;
  undefined4 uStack_30;
  
  iVar3 = FUN_14233f450();
  if (iVar3 == 3) {
    if (param_1[0x3a] != 0) {
      if (((((*(byte *)((longlong)param_1 + 0x1cc) & 4) == 0) && (param_1[0x23] != 0)) &&
          (plVar5 = *(longlong **)(param_1[0x23] + 0x150), plVar5 != (longlong *)0x0)) &&
         (cVar2 = (**(code **)(*plVar5 + 0x780))(), cVar2 == '\0')) {
        cVar2 = FUN_142d52a00(param_1 + 0x44);
        if (cVar2 != '\0') {
          uVar4 = FUN_142d62250(param_1[0x45],param_1[0x3a]);
          FUN_140483870(uVar4,param_1);
        }
        FUN_142d5ac70(param_1 + 0x44);
        if ((int)param_1[0x39] == 0) {
          lVar6 = param_1[0x3a];
          if (*(longlong *)(lVar6 + 0x50) != 0) {
            *(int *)(param_1 + 0x39) = (int)*(float *)(*(longlong *)(lVar6 + 0x50) + 0x78);
            lVar7 = *(longlong *)(lVar6 + 0x50);
            if (*(char *)(lVar7 + 0x7c) != '\0') {
              *(int *)(param_1 + 0x39) = (int)*(float *)(lVar7 + 0x38);
              lVar7 = *(longlong *)(lVar6 + 0x50);
            }
            if (*(char *)(lVar7 + 0x7d) != '\0') {
              fVar8 = (float)FUN_142c98860(lVar7 + 0x40,*(undefined8 *)(param_1[0x23] + 0x150));
              *(int *)(param_1 + 0x39) = (int)ROUND(fVar8 * 2.0 - 0.5) >> 1;
            }
            (**(code **)(*param_1 + 0x260))(param_1);
          }
        }
      }
      else {
        (**(code **)(*param_1 + 0x260))(param_1);
        cVar2 = FUN_142d52a00(param_1 + 0x44);
        if (cVar2 != '\0') {
          uVar4 = FUN_142d62250(param_1[0x45],param_1[0x3a]);
          FUN_140483870(uVar4,param_1);
        }
        FUN_142d5ac70(param_1 + 0x44);
        lVar6 = param_1[0x23];
        if (lVar6 != 0) {
          uVar4 = FUN_1430a7dc0();
          plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar4);
          if ((plVar5 != (longlong *)0x0) &&
             (lVar6 = (**(code **)(*plVar5 + 0x18))(plVar5), lVar6 != 0)) {
            local_res10 = 0;
            plVar5 = (longlong *)FUN_142d61d40(&local_38,&local_res10,lVar6,param_1[0x3a]);
            lVar6 = plVar5[1];
            param_1[0x44] = *plVar5;
            param_1[0x45] = lVar6;
            param_1[0x46] = plVar5[2];
          }
        }
        lVar6 = param_1[0x35];
        if (lVar6 == 0) {
          lVar6 = param_1[0x23];
          param_1[0x35] = lVar6;
        }
        if (*(longlong *)(lVar6 + 0x7f8) != DAT_146b47938) {
          local_38 = FUN_143082a50;
          uStack_30 = 0;
          uVar4 = FUN_142d62250(param_1[0x45],param_1[0x3a]);
          FUN_1430663f0(uVar4,&local_res10,param_1,&local_38);
        }
      }
    }
    plVar5 = (longlong *)param_1[0x35];
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0x23];
      param_1[0x35] = (longlong)plVar5;
    }
    fVar8 = *(float *)(param_1 + 0x34);
    if (((0.0 < fVar8) && (plVar5 != (longlong *)0x0)) &&
       (*(int *)((longlong)param_1 + 0x244) == *(int *)(param_1[0x23] + 0xc))) {
      lVar6 = param_1[0x24];
      if (lVar6 == 0) {
        lVar6 = FUN_1423407b0(param_1);
        fVar8 = *(float *)(param_1 + 0x34);
      }
      fVar1 = *(float *)(lVar6 + 0x790);
      fVar9 = (float)(**(code **)(*plVar5 + 0x898))(plVar5);
      if (fVar1 - fVar8 < fVar9) {
        return;
      }
    }
    param_1[0x49] = 0;
  }
  return;
}



// FUNCTION 143081460 FUN_143081460 body=475 status=ok
// SIG undefined FUN_143081460(void)

void FUN_143081460(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  byte *in_stack_00000028;
  byte local_a8 [4];
  undefined4 local_a4;
  uint local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  fVar1 = *(float *)(in_stack_00000028 + 0x34);
  fVar2 = *(float *)(in_stack_00000028 + 0x2c) * *(float *)(in_stack_00000028 + 0x2c) +
          *(float *)(in_stack_00000028 + 0x30) * *(float *)(in_stack_00000028 + 0x30) +
          fVar1 * fVar1;
  if (fVar2 == 1.0) {
    fVar3 = *(float *)(in_stack_00000028 + 0x34);
  }
  else {
    fVar3 = DAT_1468b5d98;
    if (1e-08 <= fVar2) {
      auVar4 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
      fVar3 = auVar4._0_4_;
      fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
      fVar3 = fVar1 * (fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3));
    }
  }
  if (fVar3 < *(float *)(param_1 + 0x2f8)) {
    local_9c = *(undefined4 *)(in_stack_00000028 + 0xc);
    local_98 = *(undefined4 *)(in_stack_00000028 + 0x10);
    local_a8[1] = 0;
    local_a8[2] = 0;
    local_a8[3] = 0;
    local_2c = 0;
    local_a8[0] = *in_stack_00000028 & 3;
    local_94 = *(undefined8 *)(in_stack_00000028 + 0x14);
    local_a4 = *(undefined4 *)(in_stack_00000028 + 4);
    local_88 = *(undefined8 *)(in_stack_00000028 + 0x20);
    local_a0 = *(uint *)(in_stack_00000028 + 8) & 1;
    local_8c = *(undefined4 *)(in_stack_00000028 + 0x1c);
    local_7c = *(undefined8 *)(in_stack_00000028 + 0x2c);
    local_80 = *(undefined4 *)(in_stack_00000028 + 0x28);
    local_74 = *(undefined4 *)(in_stack_00000028 + 0x34);
    local_68 = *(undefined4 *)(in_stack_00000028 + 0x40);
    local_5c = *(undefined4 *)(in_stack_00000028 + 0x4c);
    local_50 = *(undefined4 *)(in_stack_00000028 + 0x58);
    local_48 = *(undefined4 *)(in_stack_00000028 + 0x60);
    local_44 = *(undefined4 *)(in_stack_00000028 + 100);
    local_40 = *(undefined4 *)(in_stack_00000028 + 0x68);
    local_3c = *(undefined4 *)(in_stack_00000028 + 0x6c);
    local_38 = *(undefined4 *)(in_stack_00000028 + 0x70);
    local_70 = *(undefined8 *)(in_stack_00000028 + 0x38);
    local_34 = *(undefined4 *)(in_stack_00000028 + 0x74);
    local_64 = *(undefined8 *)(in_stack_00000028 + 0x44);
    local_30 = *(undefined4 *)(in_stack_00000028 + 0x78);
    local_28 = *(undefined8 *)(in_stack_00000028 + 0x80);
    local_58 = *(undefined8 *)(in_stack_00000028 + 0x50);
    local_20 = *(undefined8 *)(in_stack_00000028 + 0x88);
    local_4c = *(undefined4 *)(in_stack_00000028 + 0x5c);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 600,local_a8);
  }
  return;
}



// FUNCTION 143081640 FUN_143081640 body=75 status=ok
// SIG undefined FUN_143081640(void)

void FUN_143081640(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 local_18 [3];
  
  if ((undefined8 *)(param_1 + 0x508) != local_18) {
    *(undefined8 *)(param_1 + 0x508) = 0;
    plVar3 = *(longlong **)(param_1 + 0x510);
    *(undefined8 *)(param_1 + 0x510) = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000143081682. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 8))(plVar3,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143081690 FUN_143081690 body=190 status=ok
// SIG undefined FUN_143081690(void)

void FUN_143081690(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_res8;
  
  param_1[0xd0] = 0;
  if (param_1[0xd1] != 0) {
    uVar2 = AActor::GetWorldTimerManager();
    FUN_142880530(uVar2,param_1 + 0xd1);
    param_1[0xd1] = 0;
    FUN_1430910d0(param_1);
  }
  lVar1 = param_1[0xff];
  if ((lVar1 != DAT_146b47938) && (DAT_146b479a0 != lVar1)) {
    *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) | 1;
    (**(code **)(*param_1 + 0xac8))(param_1,&DAT_146b479a0);
    local_res8 = param_1[0xff];
    *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) & 0xfe;
    if (local_res8 == lVar1) {
      param_1[0xff] = DAT_146b479a0;
      (**(code **)(*param_1 + 0xac0))(param_1,&local_res8);
    }
  }
  return;
}



// FUNCTION 143081750 FUN_143081750 body=87 status=ok
// SIG undefined FUN_143081750(void)

void FUN_143081750(longlong *param_1,char param_2)

{
  longlong lVar1;
  
  if (param_2 == '\0') {
    FUN_143086460();
    return;
  }
  lVar1 = param_1[0x24];
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
  }
  *(undefined4 *)((longlong)param_1 + 0x51c) = *(undefined4 *)(lVar1 + 0x790);
  if ((*(byte *)(param_1 + 0x9c) & 0x40) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014308179a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x570))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1430817b0 FUN_1430817b0 body=331 status=ok
// SIG undefined FUN_1430817b0(void)

void FUN_1430817b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *local_res8;
  
  if (param_1[0xce] != 0) {
    lVar2 = (**(code **)(*param_1 + 0x148))();
    if (lVar2 != 0) {
      uVar3 = AActor::GetWorldTimerManager(param_1);
      FUN_142880530(uVar3,param_1 + 0xce);
      param_1[0xce] = 0;
    }
  }
  if ((((longlong *)param_1[0xff] != DAT_146b47938) &&
      ((int)(uint)*(byte *)(param_1 + 0xd2) < (int)param_1[0xd4])) &&
     (plVar1 = *(longlong **)(param_1[0xd3] + 8 + (ulonglong)*(byte *)(param_1 + 0xd2) * 0x48),
     plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x4a0))();
  }
  (**(code **)(*param_1 + 0x920))(param_1);
  if ((longlong *)param_1[0xff] != DAT_146b47938) {
    (**(code **)(*param_1 + 0xa28))(param_1,0,0);
  }
  local_res8 = param_1;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xa0,&local_res8);
  plVar1 = (longlong *)param_1[0xff];
  if (plVar1 != DAT_146b47938) {
    *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) | 1;
    (**(code **)(*param_1 + 0xac8))(param_1,&DAT_146b47938);
    local_res8 = (longlong *)param_1[0xff];
    *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) & 0xfe;
    if (local_res8 == plVar1) {
      param_1[0xff] = (longlong)DAT_146b47938;
      (**(code **)(*param_1 + 0xac0))(param_1,&local_res8);
    }
  }
  param_1[0xc6] = 0;
  *(undefined1 *)((longlong)param_1 + 0x62c) = 0xff;
  return;
}



// FUNCTION 143081920 FUN_143081920 body=66 status=ok
// SIG undefined FUN_143081920(void)

void FUN_143081920(longlong *param_1)

{
  longlong lVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x4ec) = 0;
  *(undefined4 *)((longlong)param_1 + 0x53c) = 0;
  lVar1 = (**(code **)(*param_1 + 0x618))();
  if (lVar1 != 0) {
    FUN_14305c930(lVar1,(longlong)param_1 + 0x94c);
    return;
  }
  return;
}



// FUNCTION 143081970 FUN_143081970 body=206 status=ok
// SIG undefined FUN_143081970(void)

void FUN_143081970(longlong *param_1,char param_2)

{
  longlong lVar1;
  longlong local_res8;
  longlong *local_18;
  char local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xaa,&local_18);
  if ((param_2 != '\0') && ((int)(uint)*(byte *)(param_1 + 0xd2) < (int)param_1[0xd4])) {
    *(undefined1 *)(param_1[0xd3] + 5 + (ulonglong)*(byte *)(param_1 + 0xd2) * 0x48) = 0;
  }
  lVar1 = param_1[0xff];
  if (((lVar1 != DAT_146b47938) && ((*(byte *)(param_1 + 0xfd) & 1) == 0)) &&
     (DAT_146b479a0 != lVar1)) {
    *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) | 1;
    (**(code **)(*param_1 + 0xac8))(param_1,&DAT_146b479a0);
    local_res8 = param_1[0xff];
    *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) & 0xfe;
    if (local_res8 == lVar1) {
      param_1[0xff] = DAT_146b479a0;
      (**(code **)(*param_1 + 0xac0))(param_1,&local_res8);
    }
  }
  return;
}



// FUNCTION 143081a40 FUN_143081a40 body=150 status=ok
// SIG undefined FUN_143081a40(void)

void FUN_143081a40(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_1 + 0xd8) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x168), plVar1 != (longlong *)0x0)) {
    lVar4 = FUN_1429f11d0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (cVar3 = (**(code **)(*plVar1 + 0x400))(plVar1,0), cVar3 != '\0')) {
      (**(code **)(*plVar1 + 0x5b8))(plVar1,0);
    }
  }
  FUN_142237790(param_1);
  return;
}



// FUNCTION 143081ae0 FUN_143081ae0 body=647 status=ok
// SIG undefined FUN_143081ae0(void)

void FUN_143081ae0(longlong *param_1,byte param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  
  if (*(byte *)(param_1 + 0x57) != param_2) {
    if ((1 < *(byte *)(param_1 + 0x57)) &&
       (plVar4 = (longlong *)FUN_14309ec50(), plVar4 != (longlong *)0x0)) {
      uVar3 = (**(code **)(*plVar4 + 0x858))(plVar4);
      *(undefined1 *)((longlong)param_1 + 0x2e3) = uVar3;
    }
    cVar2 = (char)param_1[0x57];
    if (cVar2 == '\0') {
      lVar5 = *param_1;
      if (param_2 == 2) {
                    /* WARNING: Could not recover jumptable at 0x000143081d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar5 + 0x488))();
        return;
      }
      if (param_2 != 1) {
                    /* WARNING: Could not recover jumptable at 0x000143081d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar5 + 0x4a0))(param_1);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000143081d4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 0x4b0))(param_1,1);
      return;
    }
    if (cVar2 == '\x01') {
      if (param_2 == 2) {
        (**(code **)(*param_1 + 0x488))(param_1);
      }
      (**(code **)(*param_1 + 0x4a0))(param_1);
      fVar7 = 1.0;
      fVar6 = (float)(**(code **)(*param_1 + 0x438))(param_1);
      if (0.0 < fVar6) {
        lVar5 = param_1[0x24];
        if (lVar5 == 0) {
          lVar5 = FUN_1423407b0(param_1);
        }
        fVar7 = (*(float *)(lVar5 + 0x790) - *(float *)((longlong)param_1 + 0x2dc)) / fVar6;
        if (1.0 <= fVar7) {
          fVar7 = 1.0;
        }
      }
      lVar5 = param_1[0x24];
      if (lVar5 == 0) {
        lVar5 = FUN_1423407b0(param_1);
      }
      fVar6 = (float)(**(code **)(*param_1 + 0x440))(param_1);
      *(float *)((longlong)param_1 + 0x2dc) = *(float *)(lVar5 + 0x790) - fVar6 * (1.0 - fVar7);
      (**(code **)(*param_1 + 0x4a8))(param_1);
    }
    else if (cVar2 == '\x02') {
      lVar5 = param_1[0x24];
      if (lVar5 == 0) {
        lVar5 = FUN_1423407b0(param_1);
      }
      uVar1 = *(undefined4 *)(lVar5 + 0x790);
      *(undefined4 *)(param_1 + 0x5b) = uVar1;
      if (param_2 == 1) {
        lVar5 = param_1[0x24];
        if (lVar5 == 0) {
          lVar5 = FUN_1423407b0(param_1);
        }
        fVar6 = (float)(**(code **)(*param_1 + 0x440))(param_1);
        fVar6 = (*(float *)(lVar5 + 0x790) - *(float *)((longlong)param_1 + 0x2dc)) * (1.0 / fVar6);
        if (1.0 <= fVar6) {
          fVar6 = 1.0;
        }
        fVar7 = (float)(**(code **)(*param_1 + 0x438))(param_1);
        *(float *)((longlong)param_1 + 0x2dc) = *(float *)(param_1 + 0x5b) - fVar7 * (1.0 - fVar6);
        (**(code **)(*param_1 + 0x4b0))(param_1,0);
        (**(code **)(*param_1 + 0x480))(param_1);
      }
      else {
        *(undefined4 *)((longlong)param_1 + 0x2dc) = uVar1;
        (**(code **)(*param_1 + 0x480))(param_1);
      }
    }
    else if (cVar2 == '\x03') {
      (**(code **)(*param_1 + 0x490))(param_1);
    }
    else if (cVar2 == '\x04') {
      (**(code **)(*param_1 + 0x498))(param_1);
    }
  }
  return;
}



// FUNCTION 143081d70 FUN_143081d70 body=117 status=ok
// SIG undefined FUN_143081d70(void)

void FUN_143081d70(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  
  if ((param_1[0x23] != 0) &&
     (plVar1 = *(longlong **)(param_1[0x23] + 0x150), plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x778))();
    if (cVar2 == '\0') {
      bVar3 = *(byte *)((longlong)param_1 + 0x4fd) >> 4;
      *(byte *)((longlong)param_1 + 0x4fc) = bVar3;
      if (bVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000143081dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x5a8))(param_1);
        return;
      }
      if (bVar3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x000143081dc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x5b0))(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143081df0 FUN_143081df0 body=125 status=ok
// SIG undefined FUN_143081df0(void)

void FUN_143081df0(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)(param_1 + 0x118) != 0) &&
     (plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x118) + 0x150), plVar3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar3 + 0x778))();
    if (cVar1 == '\0') {
      bVar2 = *(byte *)(param_1 + 0x201) >> 4;
      *(byte *)(param_1 + 0x200) = bVar2;
      if (bVar2 == 1) {
        FUN_1430854d0(param_1);
        return;
      }
      if (bVar2 == 2) {
        plVar3 = (longlong *)FUN_14309ec70(param_1);
                    /* WARNING: Could not recover jumptable at 0x000143081e53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x9a0))(plVar3,2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143081e70 FUN_143081e70 body=243 status=ok
// SIG undefined FUN_143081e70(void)

void FUN_143081e70(longlong param_1,char param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (*(char *)(param_1 + 0x690) != param_2) {
    FUN_143086bb0();
    uVar4 = 0;
    plVar1 = *(longlong **)(param_1 + 0x700);
    uVar3 = (longlong)*(int *)(param_1 + 0x708) & 0x1fffffffffffffff;
    if (plVar1 + *(int *)(param_1 + 0x708) < plVar1) {
      uVar3 = uVar4;
    }
    uVar2 = uVar4;
    if (uVar3 != 0) {
      do {
        if (*plVar1 != 0) {
          FUN_14307fec0(*plVar1,*(undefined1 *)(param_1 + 0x690));
        }
        plVar1 = plVar1 + 1;
        uVar2 = uVar2 + 1;
      } while (uVar2 != uVar3);
    }
    plVar1 = *(longlong **)(param_1 + 0x710);
    uVar3 = (longlong)*(int *)(param_1 + 0x718) & 0x1fffffffffffffff;
    if (plVar1 + *(int *)(param_1 + 0x718) < plVar1) {
      uVar3 = uVar4;
    }
    if (uVar3 != 0) {
      do {
        if (*plVar1 != 0) {
          FUN_14307fec0(*plVar1,*(undefined1 *)(param_1 + 0x690));
        }
        plVar1 = plVar1 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar3);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x510,0);
  }
  return;
}



// FUNCTION 143081f70 FUN_143081f70 body=56 status=ok
// SIG undefined FUN_143081f70(void)

void FUN_143081f70(longlong *param_1)

{
  char cVar1;
  
  if ((*(uint *)(param_1 + 0x9c) & 0x200) != 0) {
    cVar1 = UActorComponent::IsComponentTickEnabled();
    if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143081f9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x358))(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143081fc0 FUN_143081fc0 body=715 status=ok
// SIG undefined FUN_143081fc0(void)

void FUN_143081fc0(longlong *param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_118;
  float local_110;
  float local_108;
  float fStack_104;
  float local_100;
  byte local_f8 [240];
  
  lVar3 = FUN_1412996f0();
  if ((lVar3 != 0) &&
     (((fVar1 = *(float *)(param_1 + 0xa8), fVar1 != DAT_1468b5d90 ||
       (DAT_1468b5d94 != *(float *)((longlong)param_1 + 0x544))) ||
      (DAT_1468b5d98 != *(float *)(param_1 + 0xa9))))) {
    lVar3 = *(longlong *)(lVar3 + 0x168);
    if (lVar3 == 0) {
      local_110 = DAT_1468b5d98;
      pfVar4 = (float *)&local_118;
      local_118 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    else {
      pfVar4 = &local_108;
      local_108 = *(float *)(lVar3 + 0x220);
      local_100 = (float)*(undefined4 *)(lVar3 + 0x228);
      fStack_104 = (float)*(undefined4 *)(lVar3 + 0x224);
    }
    fVar2 = *(float *)((longlong)param_1 + 0x544);
    local_100 = *(float *)(param_1 + 0xa9);
    fVar10 = (float)*(undefined8 *)pfVar4 - fVar1;
    fVar8 = (float)((ulonglong)*(undefined8 *)pfVar4 >> 0x20) - fVar2;
    fVar12 = pfVar4[2] - local_100;
    fVar5 = fVar8 * fVar8 + fVar10 * fVar10 + fVar12 * fVar12;
    fVar9 = fVar8;
    fVar11 = fVar10;
    fVar6 = fVar12;
    if ((fVar5 != 1.0) &&
       (fVar9 = DAT_1468b5d94, fVar11 = DAT_1468b5d90, fVar6 = DAT_1468b5d98, 1e-08 <= fVar5)) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar7._0_4_;
      fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
      fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
      fVar9 = fVar8 * fVar6;
      fVar11 = fVar10 * fVar6;
      fVar6 = fVar12 * fVar6;
    }
    fStack_104 = fVar2 - fVar9 * 32.0;
    local_108 = fVar1 - fVar11 * 32.0;
    local_118 = CONCAT44(fVar2 + fVar9 * 32.0,fVar11 * 32.0 + fVar1);
    local_110 = local_100 + fVar6 * 32.0;
    local_100 = local_100 - fVar6 * 32.0;
    FUN_143075ff0(param_1,local_f8,&local_118,&local_108,1,0,0,1);
    if (((local_f8[0] & 1) != 0) && ((local_f8[0] & 2) == 0)) {
      (**(code **)(*param_1 + 0x600))(param_1,local_f8);
    }
  }
  return;
}



// FUNCTION 143082290 FUN_143082290 body=98 status=ok
// SIG undefined FUN_143082290(void)

void FUN_143082290(longlong param_1)

{
  byte bVar1;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  FUN_142ddc830(param_1,*(undefined8 *)(param_1 + 0x150),1);
  bVar1 = *(byte *)(param_1 + 0x468);
  if ((bVar1 & 1) != 0) {
    FUN_14307e770(param_1,*(undefined8 *)(param_1 + 0x150));
    bVar1 = *(byte *)(param_1 + 0x468);
  }
  if ((bVar1 & 2) != 0) {
    FUN_142ddcaf0(param_1,*(undefined8 *)(param_1 + 0x150),1);
    return;
  }
  return;
}



// FUNCTION 143082300 FUN_143082300 body=45 status=ok
// SIG undefined FUN_143082300(void)

void FUN_143082300(longlong param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_14307df60(param_1);
    return;
  }
  return;
}



// FUNCTION 143082330 FUN_143082330 body=1021 status=ok
// SIG undefined FUN_143082330(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143082330(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if ((*(byte *)((longlong)param_1 + 0x94) & 0x18) == 0x10) {
    if (param_1[0xfe] != 0) {
      lVar3 = (**(code **)(*param_1 + 0x148))();
      if (lVar3 != 0) {
        if (*(longlong *)(lVar3 + 400) == 0) {
          uVar4 = *(undefined8 *)(lVar3 + 0x3f8);
        }
        else {
          uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
        }
        FUN_142880530(uVar4,param_1 + 0xfe);
        param_1[0xfe] = 0;
      }
    }
    if (*(char *)((longlong)param_1 + 0x614) == -1) {
      lVar3 = param_1[0xc3];
      if ((lVar3 != 0) || (lVar3 = param_1[0xc6], lVar3 != 0)) {
        uVar4 = FUN_1430a8880();
        plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
        if (plVar5 != (longlong *)0x0) {
          uVar2 = *(undefined1 *)((longlong)param_1 + 0x621);
          if (param_1[0xc3] == 0) {
            *(undefined1 *)((longlong)param_1 + 0x621) = 1;
          }
          (**(code **)(*plVar5 + 0x1b8))(plVar5,param_1,*(undefined1 *)((longlong)param_1 + 0x62c));
          *(undefined1 *)((longlong)param_1 + 0x621) = uVar2;
        }
      }
      if (((*(char *)((longlong)param_1 + 0x62c) != -1) && (param_1[0xc3] == 0)) &&
         (param_1[0x2a] == 0)) {
        FUN_1430712b0(param_1);
      }
    }
    else {
      lVar3 = param_1[0xc6];
      if (lVar3 != 0) {
        cVar1 = FUN_1407cd900(lVar3);
        if ((cVar1 == '\0') && (lVar3 != param_1[0xc3])) {
          uVar2 = *(undefined1 *)((longlong)param_1 + 0x621);
          *(undefined1 *)((longlong)param_1 + 0x621) = 1;
          uVar4 = FUN_1430a8880();
          plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x1b8))
                      (plVar5,param_1,*(undefined1 *)((longlong)param_1 + 0x62c));
          }
          *(undefined1 *)((longlong)param_1 + 0x621) = uVar2;
        }
      }
      lVar3 = param_1[0xc3];
      if (lVar3 != 0) {
        uVar4 = FUN_1430a8880();
        plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
        if (plVar5 != (longlong *)0x0) {
          cVar1 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined1 *)((longlong)param_1 + 0x614));
          if (cVar1 == '\0') {
            uStack_a0 = 0;
            local_a8 = FUN_143082330;
            lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
            if (*(longlong *)(lVar3 + 400) == 0) {
              uVar4 = *(undefined8 *)(lVar3 + 0x3f8);
            }
            else {
              uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
            }
            plVar5 = (longlong *)FMemory::Realloc(0,0x30);
            if (plVar5 != (longlong *)0x0) {
              *plVar5 = (longlong)&PTR_FUN_143f77b88;
              FWeakObjectPtr::operator=(plVar5 + 1,param_1);
              *(undefined4 *)(plVar5 + 2) = (undefined4)local_a8;
              *(undefined4 *)((longlong)plVar5 + 0x14) = local_a8._4_4_;
              *(undefined4 *)(plVar5 + 3) = uStack_a0;
              *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_9c;
              lVar3 = FDelegateHandle::GenerateNewID();
              plVar5[5] = lVar3;
              *plVar5 = (longlong)&PTR_FUN_143f77bd0;
            }
            local_98 = 0;
            local_90 = 0;
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x30))(plVar5,&local_98);
            }
            FWeakObjectPtr::operator=(local_88,0);
            local_b0 = 0xbf800000;
            local_b8 = 0;
            local_80 = 0;
            local_48 = (longlong *)0x0;
            local_38 = 0;
            local_78 = AK::MemoryMgr::StartProfileThreadUsage;
            FUN_142880850(uVar4,param_1 + 0xfe,&local_98,0x3d4ccccd);
            if (local_38 != 0) {
              plVar6 = local_68;
              if (local_48 != (longlong *)0x0) {
                plVar6 = local_48;
              }
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 0x10))(plVar6,0);
              }
            }
            if (local_48 != (longlong *)0x0) {
              FMemory::Free();
            }
            TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x28))(plVar5,0);
              lVar3 = FMemory::Realloc(plVar5,0,0);
              if (lVar3 != 0) {
                FMemory::Free(lVar3);
              }
            }
          }
          else if ((((char)param_1[0xe4] == '\0') || ((int)param_1[0xc5] != (int)param_1[0xc2])) ||
                  ((param_1[0xc6] != param_1[0xc3] ||
                   (*(char *)((longlong)param_1 + 0x62c) != *(char *)((longlong)param_1 + 0x614)))))
          {
            (**(code **)(*plVar5 + 0x1b0))
                      (plVar5,param_1,*(undefined1 *)((longlong)param_1 + 0x614),(int)param_1[0xc2])
            ;
          }
        }
      }
    }
    uVar2 = (**(code **)(*param_1 + 0xad0))(param_1);
    AActor::SetActorTickEnabled(param_1,uVar2);
  }
  else {
    *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) | 4;
  }
  return;
}



// FUNCTION 143082790 FUN_143082790 body=566 status=ok
// SIG undefined FUN_143082790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143082790(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  iVar1 = (**(code **)(*param_1 + 0x420))();
  if ((int)param_1[0x47] < iVar1) {
    local_98 = FUN_143082ba0;
    lVar2 = param_1[0x24];
    uStack_90 = 0;
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_98;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_98._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_90;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_8c;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar2;
      *plVar3 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_88 = 0;
    local_80 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_a0 = 0xbf800000;
    local_a8 = 0;
    local_70 = 0;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar4,param_1 + 0x4b,&local_88,0x3dcccccd);
    if (local_28 != 0) {
      plVar5 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar5 = local_38;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar2 = FMemory::Realloc(plVar3,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
  }
  else if (param_1[0x4b] != 0) {
    lVar2 = param_1[0x24];
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    FUN_142880530(uVar4,param_1 + 0x4b);
    param_1[0x4b] = 0;
  }
  return;
}



// FUNCTION 1430829d0 FUN_1430829d0 body=77 status=ok
// SIG undefined FUN_1430829d0(void)

void FUN_1430829d0(longlong *param_1)

{
  char cVar1;
  
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x32,0);
  cVar1 = UActorComponent::IsComponentTickEnabled(param_1);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x520))(param_1);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143082a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x358))(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143082a20 FUN_143082a20 body=43 status=ok
// SIG undefined FUN_143082a20(void)

void FUN_143082a20(longlong param_1)

{
  longlong local_18;
  undefined1 local_10;
  
  local_10 = *(char *)(param_1 + 0x6d8) != '\0';
  local_18 = param_1;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x560,&local_18);
  return;
}



// FUNCTION 143082a50 FUN_143082a50 body=330 status=ok
// SIG undefined FUN_143082a50(void)

void FUN_143082a50(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  
  if ((*(byte *)((longlong)param_1 + 0x254) & 2) != 0) {
    return;
  }
  lVar3 = param_1[0x38];
  iVar5 = (**(code **)(*param_1 + 0x448))();
  iVar5 = iVar5 - (int)lVar3;
  if (((*(byte *)((longlong)param_1 + 0x1a4) & 2) != 0) && (iVar5 < 0)) {
    iVar1 = (int)lVar3 + iVar5;
    iVar2 = 0;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    *(int *)(param_1 + 0x38) = iVar2;
    if ((int)param_1[0x39] == 0) {
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x32,0);
    }
    if ((*(byte *)((longlong)param_1 + 0x254) & 4) == 0) {
      plVar6 = (longlong *)param_1[0x35];
      if (plVar6 == (longlong *)0x0) {
        plVar6 = (longlong *)param_1[0x23];
        param_1[0x35] = (longlong)plVar6;
        if (plVar6 == (longlong *)0x0) goto LAB_143082b2a;
      }
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x950))();
      if ((plVar6 != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*plVar6 + 0x778))(plVar6), cVar4 == '\0')) {
        FUN_1430bb8d0(param_1,-iVar5);
      }
    }
    else {
      (**(code **)(*param_1 + 0x410))(param_1);
    }
  }
LAB_143082b2a:
  iVar1 = 0;
  if (-1 < iVar5) {
    iVar1 = iVar5;
  }
  if ((int)param_1[0x39] != iVar1) {
    *(int *)(param_1 + 0x39) = iVar1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x32,0);
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  cVar4 = UActorComponent::IsComponentTickEnabled(param_1);
  if ((cVar4 == '\0') && (cVar4 = (**(code **)(*param_1 + 0x520))(param_1), cVar4 != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x000143082b8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x358))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143082ba0 FUN_143082ba0 body=217 status=ok
// SIG undefined FUN_143082ba0(void)

void FUN_143082ba0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  
  param_1[0x4b] = 0;
  iVar2 = (**(code **)(*param_1 + 0x420))();
  if ((int)param_1[0x47] < iVar2) {
    iVar2 = (**(code **)(*param_1 + 0x420))(param_1);
    *(int *)(param_1 + 0x38) = (int)param_1[0x47];
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x32,0);
    cVar1 = UActorComponent::IsComponentTickEnabled(param_1);
    if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_1 + 0x520))(param_1), cVar1 != '\0')) {
      (**(code **)(*param_1 + 0x358))(param_1,1);
    }
    if (iVar2 != 0) {
      plVar3 = (longlong *)param_1[0x35];
      if (plVar3 == (longlong *)0x0) {
        plVar3 = (longlong *)param_1[0x23];
        param_1[0x35] = (longlong)plVar3;
        if (plVar3 == (longlong *)0x0) {
          return;
        }
      }
      cVar1 = (**(code **)(*plVar3 + 0x888))(plVar3);
      if (cVar1 != '\0') {
        (**(code **)(*plVar3 + 0x8a0))(plVar3,(char)plVar3[0xd2],1);
      }
    }
  }
  return;
}



// FUNCTION 143082c80 FUN_143082c80 body=468 status=ok
// SIG undefined FUN_143082c80(void)

void FUN_143082c80(undefined8 param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong local_res20;
  
  lVar6 = FWeakObjectPtr::Get(param_2);
  if (lVar6 != 0) {
    if (*(longlong *)(lVar6 + 400) == 0) {
      lVar8 = lVar6 + 0x400;
    }
    else {
      lVar8 = *(longlong *)(*(longlong *)(lVar6 + 400) + 0x98);
    }
    local_res20 = param_3;
    lVar6 = FUN_1430665c0(lVar8,lVar6,0x999478,&local_res20);
    if ((lVar6 != 0) && (*(char *)(param_3 + 400) == '\0')) {
      if (0 < *(int *)(param_2 + 0x108)) {
        iVar4 = *(int *)(param_2 + 0xc0);
        iVar9 = iVar4 + 1;
        if ((((-1 < iVar4) && (iVar4 < *(int *)(param_3 + 0x10))) && (-1 < iVar9)) &&
           (iVar9 < *(int *)(param_3 + 0x10))) {
          FUN_140729f20(param_3 + 0x38,*(undefined8 *)(param_2 + 0x100));
          lVar6 = (longlong)iVar4 * 0x1c + *(longlong *)(param_3 + 8);
          puVar10 = (undefined8 *)((longlong)iVar9 * 0x1c + *(longlong *)(param_3 + 8));
          *puVar10 = *(undefined8 *)(param_3 + 0x4c);
          *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(param_3 + 0x54);
          fVar1 = *(float *)(param_3 + 0x44);
          fVar2 = *(float *)(lVar6 + 0x14);
          fVar3 = *(float *)(lVar6 + 0x14);
          *(ulonglong *)((longlong)puVar10 + 0xc) =
               CONCAT44((*(float *)(puVar10 + 2) - *(float *)(lVar6 + 0x10)) * fVar1 +
                        *(float *)(lVar6 + 0x10),
                        (*(float *)((longlong)puVar10 + 0xc) - *(float *)(lVar6 + 0xc)) * fVar1 +
                        *(float *)(lVar6 + 0xc));
          *(float *)((longlong)puVar10 + 0x14) =
               (*(float *)((longlong)puVar10 + 0x14) - fVar2) * fVar1 + fVar3;
          *(float *)(puVar10 + 3) =
               (*(float *)(puVar10 + 3) - *(float *)(lVar6 + 0x18)) * *(float *)(param_3 + 0x44) +
               *(float *)(lVar6 + 0x18);
          iVar4 = iVar4 + 2;
          iVar9 = (*(int *)(param_3 + 0x10) - iVar9) + -1;
          if (iVar9 != 0) {
            iVar5 = *(int *)(param_3 + 0x10);
            iVar7 = (iVar5 - iVar4) - iVar9;
            if (iVar7 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar4 * 0x1c + *(longlong *)(param_3 + 8)),
                         (void *)((longlong)(iVar9 + iVar4) * 0x1c + *(longlong *)(param_3 + 8)),
                         (longlong)iVar7 * 0x1c);
              iVar5 = *(int *)(param_3 + 0x10);
            }
            *(int *)(param_3 + 0x10) = iVar5 - iVar9;
          }
        }
      }
      *(int *)(param_3 + 0x188) = *(int *)(param_3 + 0x188) + -1;
      if (*(int *)(param_3 + 0x188) < 1) {
        *(undefined4 *)(param_3 + 0x188) = 0;
        FUN_143090c60(param_3);
      }
    }
  }
  return;
}



// FUNCTION 143082e60 FUN_143082e60 body=161 status=ok
// SIG undefined FUN_143082e60(void)

void FUN_143082e60(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_res8;
  
  uVar2 = AActor::GetWorldTimerManager();
  FUN_142880530(uVar2,param_1 + 0xdf);
  param_1[0xdf] = 0;
  lVar1 = param_1[0xff];
  if ((lVar1 != DAT_146b47938) && (DAT_146b479a0 != lVar1)) {
    *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) | 1;
    (**(code **)(*param_1 + 0xac8))(param_1,&DAT_146b479a0);
    local_res8 = param_1[0xff];
    *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) & 0xfe;
    if (local_res8 == lVar1) {
      param_1[0xff] = DAT_146b479a0;
      (**(code **)(*param_1 + 0xac0))(param_1,&local_res8);
    }
  }
  return;
}



// FUNCTION 143082ff0 FUN_143082ff0 body=264 status=ok
// SIG undefined FUN_143082ff0(void)

void FUN_143082ff0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_1 + 0x700);
  plVar1 = plVar6 + *(int *)(param_1 + 0x708);
  for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
    lVar2 = *plVar6;
    if (lVar2 != 0) {
      plVar4 = *(longlong **)(lVar2 + 0x90);
      plVar5 = plVar4 + (longlong)*(int *)(lVar2 + 0x98) * 7;
      for (; plVar4 != plVar5; plVar4 = plVar4 + 7) {
        if (((longlong *)*plVar4 != (longlong *)0x0) &&
           (cVar3 = (**(code **)(*(longlong *)*plVar4 + 0x2a8))(), cVar3 != '\0')) {
          *(uint *)(plVar4 + 2) = *(uint *)(plVar4 + 2) | 0x48;
          *(uint *)(lVar2 + 0x58) = *(uint *)(lVar2 + 0x58) | 0x100;
        }
      }
    }
  }
  plVar6 = *(longlong **)(param_1 + 0x710);
  plVar1 = plVar6 + *(int *)(param_1 + 0x718);
  for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
    lVar2 = *plVar6;
    if (lVar2 != 0) {
      plVar4 = *(longlong **)(lVar2 + 0x90);
      plVar5 = plVar4 + (longlong)*(int *)(lVar2 + 0x98) * 7;
      for (; plVar4 != plVar5; plVar4 = plVar4 + 7) {
        if (((longlong *)*plVar4 != (longlong *)0x0) &&
           (cVar3 = (**(code **)(*(longlong *)*plVar4 + 0x2a8))(), cVar3 != '\0')) {
          *(uint *)(plVar4 + 2) = *(uint *)(plVar4 + 2) | 0x48;
          *(uint *)(lVar2 + 0x58) = *(uint *)(lVar2 + 0x58) | 0x100;
        }
      }
    }
  }
  return;
}



// FUNCTION 143083100 FUN_143083100 body=143 status=ok
// SIG undefined FUN_143083100(void)

void FUN_143083100(longlong param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  
  puVar2 = *(undefined1 **)(param_1 + 0x790);
  puVar3 = puVar2 + (longlong)*(int *)(param_1 + 0x798) * 0x10;
  for (; puVar2 != puVar3; puVar2 = puVar2 + 0x10) {
    lVar1 = *(longlong *)(puVar2 + 8);
    if (((lVar1 != 0) && ((*(byte *)(lVar1 + 0x30) & 0x10) != 0)) &&
       ((*(uint *)(lVar1 + 0x78) >> (*(byte *)(param_1 + 0x690) & 0x1f) & 1) != 0)) {
      uVar4 = FUN_142c98860(lVar1 + 0x38,param_1);
      FUN_14307fbc0(param_1,*puVar2,*(undefined8 *)(*(longlong *)(puVar2 + 8) + 0x28),8,uVar4);
    }
  }
  return;
}



// FUNCTION 1430831c0 FUN_1430831c0 body=118 status=ok
// SIG undefined FUN_1430831c0(void)

void FUN_1430831c0(longlong *param_1)

{
  longlong lVar1;
  longlong local_res8;
  
  lVar1 = param_1[0xff];
  if (DAT_146b479b8 != lVar1) {
    *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) | 1;
    (**(code **)(*param_1 + 0xac8))(param_1,&DAT_146b479b8);
    local_res8 = param_1[0xff];
    *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) & 0xfe;
    if (local_res8 == lVar1) {
      param_1[0xff] = DAT_146b479b8;
      (**(code **)(*param_1 + 0xac0))(param_1,&local_res8);
    }
  }
  return;
}



// FUNCTION 143083240 FUN_143083240 body=48 status=ok
// SIG undefined FUN_143083240(void)

void FUN_143083240(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x528))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143083263. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x358))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143083270 FUN_143083270 body=199 status=ok
// SIG undefined FUN_143083270(void)

void FUN_143083270(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((0.0 < *(float *)((longlong)param_1 + 0x264)) || (0.0 < *(float *)(param_1 + 0x4e))) &&
     (0.0 < *(float *)(param_1 + 0xa4))) {
    iVar1 = *(int *)((longlong)param_1 + 0x4e4);
    *(undefined4 *)(param_1 + 0xa4) = 0;
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        FUN_1430bf930();
      }
      else if (iVar1 == 2) {
        FUN_1430bf970();
      }
      *(undefined4 *)((longlong)param_1 + 0x4e4) = 0;
    }
    if (((param_1[0x85] != 0) && (0.0 < *(float *)(param_1 + 0x11d))) &&
       ((longlong *)param_1[0x23] != (longlong *)0x0)) {
      uVar2 = (**(code **)(*(longlong *)param_1[0x23] + 0x670))();
      FUN_142d49f50(param_1[0x85],uVar2);
      FUN_142d303e0(param_1 + 0x11b,&DAT_146af39a8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143083330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x358))(param_1,0);
  return;
}



// FUNCTION 143083360 FUN_143083360 body=51 status=ok
// SIG undefined FUN_143083360(void)

void FUN_143083360(longlong *param_1)

{
  *(undefined1 *)(param_1 + 0x57) = 4;
  (**(code **)(*param_1 + 0x260))();
  FUN_143094a90(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014308338c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x498))(param_1);
  return;
}



// FUNCTION 1430833a0 FUN_1430833a0 body=113 status=ok
// SIG undefined FUN_1430833a0(void)

void FUN_1430833a0(longlong *param_1,longlong param_2,undefined1 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  if ((char)param_1[0x25] == '\x03') {
    if (*(byte *)((longlong)param_1 + 0x129) < 2) {
      (**(code **)(*param_1 + 0x600))();
    }
    *(undefined4 *)(param_1 + 0xc2) = param_5;
    *(undefined1 *)((longlong)param_1 + 0x614) = param_3;
    param_1[0xc3] = param_2;
    *(undefined1 *)(param_1 + 0xc4) = param_4;
  }
  return;
}



// FUNCTION 143083420 FUN_143083420 body=59 status=ok
// SIG undefined FUN_143083420(void)

void FUN_143083420(longlong *param_1,undefined1 param_2)

{
  if ((char)param_1[0x25] == '\x03') {
    (**(code **)(*param_1 + 0x600))();
    *(undefined1 *)((longlong)param_1 + 0x614) = 0xff;
    *(undefined1 *)((longlong)param_1 + 0x621) = param_2;
  }
  return;
}



// FUNCTION 143083460 FUN_143083460 body=370 status=ok
// SIG undefined FUN_143083460(void)

undefined8
FUN_143083460(longlong param_1,longlong *param_2,char param_3,float param_4,float param_5)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (param_2 != (longlong *)0x0) {
    bVar1 = *(byte *)(param_1 + 0x691);
    if (param_3 == '\0') {
      if (*(int *)(param_1 + 0x708) <= (int)(uint)bVar1) {
        return 0;
      }
      lVar4 = *(longlong *)(param_1 + 0x700);
    }
    else {
      if (*(int *)(param_1 + 0x718) <= (int)(uint)bVar1) {
        return 0;
      }
      lVar4 = *(longlong *)(param_1 + 0x710);
    }
    lVar4 = *(longlong *)(lVar4 + (ulonglong)bVar1 * 8);
    if (((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x38), lVar4 != 0)) &&
       (lVar4 = *(longlong *)(lVar4 + 400), lVar4 != 0)) {
      lVar3 = FUN_142a07000();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (lVar3 = *(longlong *)(lVar4 + 0xa48), lVar3 != 0)) {
        if (0.0 < param_5) {
          param_4 = (float)(**(code **)(*param_2 + 0x2a0))(param_2);
          lVar3 = *(longlong *)(lVar4 + 0xa48);
          param_4 = param_4 / param_5;
        }
        uVar5 = FUN_142278740(lVar3,param_2,param_4,0,0,1,0xbf800000,0xbf800000);
        return uVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 1430835e0 FUN_1430835e0 body=202 status=ok
// SIG undefined FUN_1430835e0(void)

void FUN_1430835e0(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x29) == '\0') {
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      plVar2 = *(longlong **)(param_1 + 0x20);
    }
    else {
      plVar2 = (longlong *)0x0;
    }
    bVar1 = (**(code **)(*plVar2 + 0x858))();
    lVar4 = *(longlong *)(param_1 + 0x60);
    lVar5 = (longlong)*(int *)(param_1 + 0x68) * 0x60 + lVar4;
    for (; lVar4 != lVar5; lVar4 = lVar4 + 0x60) {
      if ((((*(byte *)(lVar4 + 0xd) & 1) == 0) && ((*(byte *)(lVar4 + 8) & 1) != 0)) &&
         ((*(uint *)(lVar4 + 0x44) == 0 || ((*(uint *)(lVar4 + 0x44) >> (bVar1 & 0x1f) & 1) != 0))))
      {
        lVar3 = *(longlong *)(lVar4 + 0x58);
        if (lVar3 == 0) {
          if (*(longlong *)(lVar4 + 0x48) != 0) {
            FUN_14306f5d0(param_1,lVar4);
            lVar3 = *(longlong *)(lVar4 + 0x58);
            if (lVar3 != 0) goto LAB_143083673;
          }
        }
        else {
LAB_143083673:
          if (((*(byte *)(lVar3 + 0xba) & 4) == 0) || ((*(byte *)(lVar3 + 0x718) & 0x10) != 0)) {
            FUN_1425fcab0(lVar3,0);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1430836b0 FUN_1430836b0 body=177 status=ok
// SIG undefined FUN_1430836b0(void)

void FUN_1430836b0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 local_18 [2];
  
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x268,0);
  plVar4 = (longlong *)FUN_14309ec50(param_1);
  if (plVar4 != (longlong *)0x0) {
    if ((undefined8 *)(param_1 + 0x2c0) != local_18) {
      *(undefined8 *)(param_1 + 0x2c0) = 0;
      plVar3 = *(longlong **)(param_1 + 0x2c8);
      *(undefined8 *)(param_1 + 0x2c8) = 0;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    FUN_14308fb00(plVar4,2,*(undefined1 *)(param_1 + 0x2e3));
    (**(code **)(*plVar4 + 0x9a0))(plVar4,6);
    (**(code **)(*plVar4 + 0x9a0))(plVar4,8);
    *(undefined1 *)(param_1 + 0x2e2) = 0;
  }
  return;
}



// FUNCTION 143083770 FUN_143083770 body=646 status=ok
// SIG undefined FUN_143083770(void)

void FUN_143083770(longlong param_1,undefined4 param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 local_res18 [16];
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48;
  
  (**(code **)(*param_3 + 0x990))(param_3,&local_68,param_2,0x3f800000,0,0,0);
  plVar3 = local_60;
  *(undefined1 *)(param_1 + 0x2e2) = 0;
  if (local_68 != 0) {
    *(longlong *)(param_1 + 0x2c0) = local_68;
    plVar6 = *(longlong **)(param_1 + 0x2c8);
    if (local_60 != plVar6) {
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_60 + 0xc) = *(int *)((longlong)local_60 + 0xc) + 1;
        UNLOCK();
        plVar6 = *(longlong **)(param_1 + 0x2c8);
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      *(longlong **)(param_1 + 0x2c8) = plVar3;
    }
    plVar3 = *(longlong **)(param_1 + 0x2c8);
    plVar6 = (longlong *)0x0;
    *(undefined4 *)(param_1 + 0x2e8) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x2ec) = 0xbf800000;
    local_58 = FUN_143080bd0;
    uStack_50 = 0;
    plVar7 = plVar3;
    plVar8 = plVar6;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      iVar2 = (int)plVar3[1];
      bVar9 = iVar2 == 0;
      if (bVar9) {
        *(int *)(plVar3 + 1) = 0;
        iVar2 = 0;
      }
      UNLOCK();
      while (plVar7 = plVar6, plVar8 = (longlong *)0x0, !bVar9) {
        LOCK();
        bVar9 = iVar2 == (int)plVar3[1];
        if (bVar9) {
          *(int *)(plVar3 + 1) = iVar2 + 1;
        }
        UNLOCK();
        if (bVar9) {
          plVar7 = plVar3;
          if (plVar3 != (longlong *)0x0) {
            plVar8 = *(longlong **)(param_1 + 0x2c0);
          }
          break;
        }
        LOCK();
        iVar2 = (int)plVar3[1];
        bVar9 = iVar2 == 0;
        if (bVar9) {
          *(int *)(plVar3 + 1) = 0;
          iVar2 = 0;
        }
        UNLOCK();
      }
    }
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    local_48 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143fcff50;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_58;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_58._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_50;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_4c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143fcff98;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8 + 0xb,1);
      puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res18);
      iVar2 = (int)plVar8[0xc];
      plVar6 = (longlong *)*puVar5;
      *(int *)(plVar8 + 0xc) = iVar2 + 1;
      if (*(int *)((longlong)plVar8 + 100) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8 + 0xb,iVar2);
      }
      puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + plVar8[0xb]);
      *puVar5 = plVar3;
      *(undefined4 *)(puVar5 + 1) = 3;
    }
    *(longlong **)(param_1 + 0x2d0) = plVar6;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar7 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    if ((*(byte *)(param_1 + 0x1d0) & 0x10) != 0) {
      FUN_1430948a0(param_1,param_3);
    }
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_60 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return;
}



// FUNCTION 143083a00 FUN_143083a00 body=262 status=ok
// SIG undefined FUN_143083a00(void)

undefined8 *
FUN_143083a00(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             longlong param_5,undefined1 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 local_98 [88];
  
  lVar1 = *(longlong *)(param_1 + 0x608);
  if (((lVar1 == 0) && (*(longlong *)(param_1 + 0x4a0) != 0)) &&
     (*(longlong *)(param_1 + 0x4a8) != 0)) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x4a8) + 0x170))();
  }
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    if (*(int *)(param_5 + 0x40) != 0) {
      plVar3 = *(longlong **)(param_5 + 0x30);
      if (*(longlong **)(param_5 + 0x30) == (longlong *)0x0) {
        plVar3 = (longlong *)(param_5 + 0x10);
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,0);
      }
    }
  }
  else {
    uVar2 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_98,param_5);
    FUN_143057000(lVar1,param_2,param_3,param_1,param_4,uVar2,param_6);
    if (*(int *)(param_5 + 0x40) != 0) {
      plVar3 = *(longlong **)(param_5 + 0x30);
      if (*(longlong **)(param_5 + 0x30) == (longlong *)0x0) {
        plVar3 = (longlong *)(param_5 + 0x10);
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,0);
      }
    }
  }
  if (*(longlong *)(param_5 + 0x30) != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 143083b50 FUN_143083b50 body=454 status=ok
// SIG undefined FUN_143083b50(void)

int FUN_143083b50(longlong param_1,longlong param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  bVar2 = *(byte *)(param_2 + 8);
  iVar4 = *(int *)(param_1 + 0x788);
  bVar3 = *(byte *)(param_2 + 8);
  iVar1 = iVar4 + 1;
  *(int *)(param_1 + 0x788) = iVar1;
  if (iVar1 < 1000) {
    iVar1 = 1000;
  }
  bVar5 = false;
  uVar10 = 0;
  *(int *)(param_1 + 0x788) = iVar1;
  if ((bVar2 & 0xfd) == 0) {
    if ((*(byte *)(param_2 + 10) & 1) == 0) {
      plVar7 = *(longlong **)(param_1 + 0x700);
      uVar9 = (longlong)*(int *)(param_1 + 0x708) & 0x1fffffffffffffff;
      if (plVar7 + *(int *)(param_1 + 0x708) < plVar7) {
        uVar9 = uVar10;
      }
      uVar8 = uVar10;
      if (uVar9 != 0) {
        do {
          if (*plVar7 != 0) {
            bVar5 = true;
            FUN_143084ff0(*plVar7,param_2,iVar4);
          }
          plVar7 = plVar7 + 1;
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar9);
      }
    }
    else if ((int)(uint)*(byte *)(param_1 + 0x691) < *(int *)(param_1 + 0x708)) {
      bVar5 = true;
      FUN_143084ff0(*(undefined8 *)
                     (*(longlong *)(param_1 + 0x700) + (ulonglong)*(byte *)(param_1 + 0x691) * 8),
                    param_2,iVar4);
    }
  }
  if (((bVar3 < 2) && (*(longlong **)(param_1 + 0x150) != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x778))(), cVar6 != '\0')) {
    if ((*(byte *)(param_2 + 10) & 1) == 0) {
      plVar7 = *(longlong **)(param_1 + 0x710);
      uVar9 = (longlong)*(int *)(param_1 + 0x718) & 0x1fffffffffffffff;
      if (plVar7 + *(int *)(param_1 + 0x718) < plVar7) {
        uVar9 = uVar10;
      }
      if (uVar9 != 0) {
        do {
          if (*plVar7 != 0) {
            bVar5 = true;
            FUN_143084ff0(*plVar7,param_2,iVar4);
          }
          plVar7 = plVar7 + 1;
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar9);
      }
    }
    else if ((int)(uint)*(byte *)(param_1 + 0x691) < *(int *)(param_1 + 0x718)) {
      FUN_143084ff0(*(undefined8 *)
                     (*(longlong *)(param_1 + 0x710) + (ulonglong)*(byte *)(param_1 + 0x691) * 8),
                    param_2,iVar4);
      goto LAB_143083ce7;
    }
  }
  if (!bVar5) {
    return iVar4;
  }
LAB_143083ce7:
  cVar6 = AActor::IsActorTickEnabled(param_1);
  if (cVar6 == '\0') {
    AActor::SetActorTickEnabled(param_1,1);
  }
  return iVar4;
}



// FUNCTION 143083d20 FUN_143083d20 body=1155 status=ok
// SIG undefined FUN_143083d20(void)

void FUN_143083d20(longlong param_1,uint param_2,byte param_3,int param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  undefined8 local_98;
  undefined1 local_90;
  undefined1 uStack_8f;
  byte local_8e;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  plVar12 = *(longlong **)(param_1 + 0x700);
  uVar9 = 0;
  uVar14 = (longlong)*(int *)(param_1 + 0x708) & 0x1fffffffffffffff;
  if (plVar12 + *(int *)(param_1 + 0x708) < plVar12) {
    uVar14 = uVar9;
  }
  if (uVar14 != 0) {
    do {
      if (*plVar12 != 0) {
        FUN_1430841b0(*plVar12,param_2,param_4,param_3,*(undefined1 *)(param_1 + 0x691));
      }
      plVar12 = plVar12 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar14);
  }
  if (((*(longlong **)(param_1 + 0x150) == (longlong *)0x0) ||
      (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x778))(), cVar8 == '\0')) ||
     (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x818))(), cVar8 == '\0')) {
    bVar5 = false;
  }
  else {
    uVar9 = 0;
    plVar12 = *(longlong **)(param_1 + 0x710);
    bVar5 = true;
    uVar14 = (longlong)*(int *)(param_1 + 0x718) & 0x1fffffffffffffff;
    if (plVar12 + *(int *)(param_1 + 0x718) < plVar12) {
      uVar14 = uVar9;
    }
    if (uVar14 != 0) {
      do {
        if (*plVar12 != 0) {
          FUN_1430841b0(*plVar12,param_2,param_4,param_3,*(undefined1 *)(param_1 + 0x691));
        }
        plVar12 = plVar12 + 1;
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar14);
    }
  }
  uVar9 = 0;
  bVar6 = false;
  bVar7 = false;
  uVar14 = uVar9;
  if (0 < *(int *)(param_1 + 0x730)) {
    do {
      lVar4 = *(longlong *)(param_1 + 0x728);
      if ((((*(byte *)(uVar14 + lVar4) == param_2) &&
           ((*(uint *)(uVar14 + 0x18 + lVar4) >> (param_3 & 0x1f) & 1) != 0)) &&
          (((*(byte *)(uVar14 + 0x1e + lVar4) & 1) == 0 ||
           (*(char *)(uVar14 + 0x1c + lVar4) == *(char *)(param_1 + 0x691))))) &&
         ((iVar3 = *(int *)(uVar14 + 0x10 + lVar4), iVar3 == 0 || (iVar3 == param_4)))) {
        local_48 = 0;
        uStack_40 = 0;
        local_98 = *(undefined8 *)(uVar14 + 8 + lVar4);
        _local_90 = CONCAT11(*(undefined1 *)(uVar14 + 0x1d + lVar4),
                             *(undefined1 *)(uVar14 + 0x14 + lVar4));
        local_8e = *(byte *)(uVar14 + 0x1e + lVar4) & 0x10 |
                   *(byte *)(uVar14 + 0x1e + lVar4) & 8 |
                   *(byte *)(uVar14 + 0x1e + lVar4) & 4 |
                   *(byte *)(uVar14 + 0x1e + lVar4) & 2 |
                   (local_8e & 0xe1 ^ *(byte *)(uVar14 + 0x1e + lVar4)) & 1 ^ local_8e & 0xe1;
        puVar1 = (undefined8 *)(uVar14 + 0x20 + lVar4);
        local_88 = *puVar1;
        uStack_80 = puVar1[1];
        puVar1 = (undefined8 *)(uVar14 + 0x30 + lVar4);
        local_78 = *puVar1;
        uStack_70 = puVar1[1];
        puVar1 = (undefined8 *)(uVar14 + 0x40 + lVar4);
        local_68 = *puVar1;
        uStack_60 = puVar1[1];
        local_58 = *(undefined8 *)(uVar14 + 0x50 + lVar4);
        local_50 = *(undefined8 *)(uVar14 + 0x58 + lVar4);
        uVar15 = FUN_142c98860(lVar4 + 0x68 + uVar14,param_1);
        local_48 = CONCAT44(uVar15,*(undefined4 *)(uVar14 + 0x60 + lVar4));
        uStack_40 = CONCAT44(*(undefined4 *)(uVar14 + 0xa4 + lVar4),
                             *(undefined4 *)(uVar14 + 0xa0 + lVar4));
        bVar2 = *(byte *)(uVar14 + 0x14 + lVar4);
        if ((*(byte *)(uVar14 + 0x14 + lVar4) & 0xfd) == 0) {
          if ((*(byte *)(uVar14 + 0x1e + lVar4) & 1) == 0) {
            uVar10 = 0;
            plVar12 = *(longlong **)(param_1 + 0x700);
            uVar11 = (longlong)*(int *)(param_1 + 0x708) & 0x1fffffffffffffff;
            if (plVar12 + *(int *)(param_1 + 0x708) < plVar12) {
              uVar11 = uVar10;
            }
            bVar6 = bVar7;
            if (uVar11 != 0) {
              do {
                if (*plVar12 != 0) {
                  bVar7 = true;
                  FUN_143084ff0(*plVar12,&local_98);
                }
                plVar12 = plVar12 + 1;
                uVar10 = uVar10 + 1;
                bVar6 = bVar7;
              } while (uVar10 != uVar11);
            }
          }
          else if ((int)(uint)*(byte *)(param_1 + 0x691) < *(int *)(param_1 + 0x708)) {
            bVar7 = true;
            FUN_143084ff0(*(undefined8 *)
                           (*(longlong *)(param_1 + 0x700) +
                           (ulonglong)*(byte *)(param_1 + 0x691) * 8),&local_98);
            bVar6 = true;
          }
        }
        uVar11 = 0;
        if ((bVar2 < 2) && (bVar5)) {
          if ((*(byte *)(uVar14 + 0x1e + lVar4) & 1) == 0) {
            plVar12 = *(longlong **)(param_1 + 0x710);
            uVar10 = (longlong)*(int *)(param_1 + 0x718) & 0x1fffffffffffffff;
            if (plVar12 + *(int *)(param_1 + 0x718) < plVar12) {
              uVar10 = uVar11;
            }
            if (uVar10 != 0) {
              do {
                if (*plVar12 != 0) {
                  bVar6 = true;
                  FUN_143084ff0(*plVar12,&local_98);
                }
                plVar12 = plVar12 + 1;
                uVar11 = uVar11 + 1;
                bVar7 = bVar6;
              } while (uVar11 != uVar10);
            }
          }
          else if ((int)(uint)*(byte *)(param_1 + 0x691) < *(int *)(param_1 + 0x718)) {
            bVar6 = true;
            FUN_143084ff0(*(undefined8 *)
                           (*(longlong *)(param_1 + 0x710) +
                           (ulonglong)*(byte *)(param_1 + 0x691) * 8),&local_98);
            bVar7 = bVar6;
          }
        }
      }
      uVar13 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar13;
      uVar14 = uVar14 + 0xa8;
    } while ((int)uVar13 < *(int *)(param_1 + 0x730));
    if ((bVar6) && (cVar8 = AActor::IsActorTickEnabled(param_1), cVar8 == '\0')) {
      AActor::SetActorTickEnabled(param_1,1);
    }
  }
  return;
}



// FUNCTION 1430841b0 FUN_1430841b0 body=359 status=ok
// SIG undefined FUN_1430841b0(void)

void FUN_1430841b0(longlong *param_1,uint param_2,int param_3,byte param_4,byte param_5)

{
  bool bVar1;
  longlong lVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (((*(byte *)(param_1 + 0xb) & 2) != 0) && (*(char *)((longlong)param_1 + 0x29) == '\0')) {
    lVar2 = (**(code **)(*param_1 + 0x148))();
    if (param_1[7] == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = *(float *)(lVar2 + 0x790) - 1.0 < *(float *)(param_1[7] + 0x36c);
    }
    pbVar3 = (byte *)param_1[0xc];
    pbVar4 = pbVar3 + (longlong)(int)param_1[0xd] * 0x60;
    for (; pbVar3 != pbVar4; pbVar3 = pbVar3 + 0x60) {
      if ((((((pbVar3[0xd] & 1) == 0) && (*pbVar3 == param_2)) &&
           ((*(uint *)(pbVar3 + 4) >> (param_4 & 0x1f) & 1) != 0)) &&
          (((pbVar3[0xc] & (byte)(1 << (param_5 & 0x1f))) != 0 &&
           ((*(int *)(pbVar3 + 0x10) == 0 || (*(int *)(pbVar3 + 0x10) == param_3)))))) &&
         (((char)param_1[5] != '\0' ||
          ((((pbVar3[0xd] & 2) != 0 || ((*(uint *)(pbVar3 + 8) >> 4 & 1) == 0)) || (bVar1)))))) {
        lVar2 = *(longlong *)(pbVar3 + 0x58);
        if (lVar2 == 0) {
          if (*(longlong *)(pbVar3 + 0x48) != 0) {
            FUN_14306f5d0(param_1,pbVar3);
            lVar2 = *(longlong *)(pbVar3 + 0x58);
            if (lVar2 != 0) goto LAB_1430842cc;
          }
        }
        else {
LAB_1430842cc:
          if ((((pbVar3[0xd] & 2) == 0) || ((*(byte *)(lVar2 + 0xba) & 4) == 0)) ||
             ((*(byte *)(lVar2 + 0x718) & 0x10) != 0)) {
            FUN_1425fcab0(lVar2,0);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 143084320 FUN_143084320 body=2727 status=ok
// SIG undefined FUN_143084320(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143084bab) */

void FUN_143084320(longlong *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  bool bVar19;
  undefined4 uVar20;
  undefined1 auStack_398 [32];
  longlong *local_378;
  ulonglong local_370;
  ulonglong local_368;
  undefined8 local_360;
  longlong local_358;
  longlong *plStack_350;
  uint local_348;
  undefined4 uStack_344;
  undefined4 local_340;
  longlong *local_338;
  longlong *local_330;
  longlong local_328;
  longlong *plStack_320;
  undefined4 local_318;
  undefined8 local_314;
  undefined8 local_308;
  undefined4 local_300;
  ulonglong local_2f8;
  undefined4 local_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  code *local_2d8 [2];
  longlong local_2c8 [4];
  longlong *local_2a8;
  int local_298;
  undefined8 local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined1 local_278 [8];
  undefined1 local_270 [8];
  longlong *local_268;
  undefined1 local_260 [24];
  longlong local_248 [4];
  longlong local_228;
  int local_220;
  int local_21c;
  undefined1 local_217;
  longlong *local_178;
  undefined1 local_168 [56];
  undefined1 local_130 [56];
  undefined1 local_f8 [80];
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_398;
  plVar7 = (longlong *)FUN_14309ed70();
  (**(code **)(*plVar7 + 0x848))(plVar7);
  iVar6 = FUN_142340f30(param_1);
  if (iVar6 == 1) {
    (**(code **)(*plVar7 + 0x850))(plVar7);
    return;
  }
  iVar6 = FUN_142340f30(param_1);
  if (((iVar6 == 3) && ((char)plVar7[0x25] != '\x03')) &&
     (((longlong *)plVar7[0x2a] == (longlong *)0x0 ||
      (cVar5 = (**(code **)(*(longlong *)plVar7[0x2a] + 0x778))(), cVar5 == '\0')))) {
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 2;
    FUN_143094fb0(param_1,0);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x3c,0);
  }
  iVar6 = 0;
  if ((int)param_1[0x59] < 2) {
    if (1 < (int)param_1[0x81]) {
      if ((char)param_1[0x4b] == '\0') {
        uVar14 = *(uint *)((longlong)param_1 + 0x53c);
      }
      else {
        uVar14 = (uint)*(byte *)((longlong)param_1 + 0x4ed);
      }
      goto LAB_143084426;
    }
  }
  else {
    uVar14 = (uint)*(byte *)((longlong)param_1 + 0x4ec);
LAB_143084426:
    iVar6 = uVar14 + 1;
  }
  plVar8 = (longlong *)FUN_1412996f0(param_1);
  local_348 = (uint)plVar8;
  uStack_344 = (undefined4)((ulonglong)plVar8 >> 0x20);
  if ((plVar8 == (longlong *)0x0) || (cVar5 = (**(code **)(*plVar8 + 0x780))(plVar8), cVar5 == '\0')
     ) {
    uVar17 = 0;
    uVar18 = 1;
  }
  else {
    uVar17 = 1;
    uVar18 = 0;
  }
  FUN_143083d20(plVar7,1,(char)param_1[0x30],iVar6);
  uVar20 = 0;
  if ((char)param_1[0x96] != '\0') {
    uVar20 = (**(code **)(*param_1 + 0x548))(param_1);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b47da8) && (_Init_thread_header(&DAT_146b47da8), DAT_146b47da8 == -1))
  {
    FName::FName(&DAT_146b47da0,L"BlendSpaceX",1);
    _Init_thread_footer(&DAT_146b47da8);
  }
  local_358 = 0;
  plStack_350 = (longlong *)0x0;
  FUN_142c62180(local_248);
  local_217 = 2;
  puVar9 = (undefined8 *)FUN_142c62590(local_168,&DAT_146b2fcb8,uVar20);
  iVar6 = local_220;
  lVar15 = (longlong)local_220;
  local_220 = local_220 + 1;
  if (local_21c < local_220) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_228,iVar6);
  }
  uVar4 = puVar9[1];
  puVar13 = (undefined8 *)(lVar15 * 0x38 + local_228);
  *puVar13 = *puVar9;
  puVar13[1] = uVar4;
  uVar4 = puVar9[3];
  puVar13[2] = puVar9[2];
  puVar13[3] = uVar4;
  uVar20 = *(undefined4 *)((longlong)puVar9 + 0x24);
  uVar2 = *(undefined4 *)(puVar9 + 5);
  uVar3 = *(undefined4 *)((longlong)puVar9 + 0x2c);
  *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(puVar9 + 4);
  *(undefined4 *)((longlong)puVar13 + 0x24) = uVar20;
  *(undefined4 *)(puVar13 + 5) = uVar2;
  *(undefined4 *)((longlong)puVar13 + 0x2c) = uVar3;
  puVar13[6] = puVar9[6];
  if (0.0 <= *(float *)((longlong)param_1 + 0x4b4)) {
    puVar9 = (undefined8 *)FUN_142c62590(local_130,&DAT_146b47da0);
    iVar6 = local_220;
    lVar15 = (longlong)local_220;
    local_220 = local_220 + 1;
    if (local_21c < local_220) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_228,iVar6);
    }
    uVar4 = puVar9[1];
    puVar13 = (undefined8 *)(lVar15 * 0x38 + local_228);
    *puVar13 = *puVar9;
    puVar13[1] = uVar4;
    uVar4 = puVar9[3];
    puVar13[2] = puVar9[2];
    puVar13[3] = uVar4;
    uVar20 = *(undefined4 *)((longlong)puVar9 + 0x24);
    uVar2 = *(undefined4 *)(puVar9 + 5);
    uVar3 = *(undefined4 *)((longlong)puVar9 + 0x2c);
    *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(puVar9 + 4);
    *(undefined4 *)((longlong)puVar13 + 0x24) = uVar20;
    *(undefined4 *)(puVar13 + 5) = uVar2;
    *(undefined4 *)((longlong)puVar13 + 0x2c) = uVar3;
    puVar13[6] = puVar9[6];
  }
  if ((param_1[0xa1] == 0) || (param_1[0xa2] == 0)) {
LAB_1430847cf:
    local_370 = local_370 & 0xffffffffffffff00;
    local_378 = (longlong *)CONCAT71(local_378._1_7_,uVar18);
    plVar8 = (longlong *)(**(code **)(*plVar7 + 0x998))(plVar7,local_270,1,local_248);
    if (&local_358 != plVar8) {
      local_358 = *plVar8;
      *plVar8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_350,plVar8 + 1);
    }
    if (local_268 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_268 + 1;
      lVar15 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*local_268)(local_268);
        LOCK();
        piVar1 = (int *)((longlong)local_268 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_268 + 8))(local_268,1);
        }
      }
    }
  }
  else {
    piVar1 = (int *)(param_1[0xa2] + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (iVar6 < 1) goto LAB_1430847cf;
    local_78 = (longlong *)0x0;
    local_68 = 0;
    puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_98);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[1] = param_1;
      *puVar9 = &PTR_FUN_143f77b70;
    }
    local_a8 = (code *)&LAB_14306de90;
    local_2a8 = (longlong *)0x0;
    local_298 = 0;
    if (local_68 == 0) {
LAB_143084666:
      local_2d8[0] = FUN_1407c3030;
    }
    else {
      plVar8 = local_98;
      if (local_78 != (longlong *)0x0) {
        plVar8 = local_78;
      }
      if (plVar8 == (longlong *)0x0) goto LAB_143084666;
      plVar8 = (longlong *)(**(code **)*plVar8)(plVar8,local_2c8);
      (**(code **)(*plVar8 + 8))(plVar8);
      local_2d8[0] = local_a8;
    }
    lVar15 = plVar7[0xc1];
    if (lVar15 == 0) {
      if ((plVar7[0x94] != 0) && ((longlong *)plVar7[0x95] != (longlong *)0x0)) {
        plVar8 = (longlong *)plVar7[0x95];
        if (plVar7[0x94] == 0) {
          plVar8 = (longlong *)0x0;
        }
        lVar15 = (**(code **)(*plVar8 + 0x170))(plVar8);
      }
      if (lVar15 != 0) goto LAB_1430846b4;
      local_328 = 0;
      plStack_320 = (longlong *)0x0;
    }
    else {
LAB_1430846b4:
      local_370 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_f8,local_2d8);
      local_368 = CONCAT71(local_368._1_7_,uVar17) ^ 1;
      local_378 = local_248;
      FUN_143057000(lVar15,&local_328,1,plVar7);
    }
    if (local_298 != 0) {
      plVar8 = local_2c8;
      if (local_2a8 != (longlong *)0x0) {
        plVar8 = local_2a8;
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,0);
      }
    }
    if (local_2a8 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_358 = local_328;
    local_328 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_350,&plStack_320);
    plVar8 = plStack_320;
    if (plStack_320 != (longlong *)0x0) {
      LOCK();
      plVar16 = plStack_320 + 1;
      lVar15 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plStack_320)(plStack_320);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    if (local_68 != 0) {
      plVar8 = local_98;
      if (local_78 != (longlong *)0x0) {
        plVar8 = local_78;
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,0);
      }
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  lVar15 = local_358;
  if ((local_358 == 0) || (lVar12 = *(longlong *)(local_358 + 0x10), lVar12 == 0)) {
LAB_14308489b:
    lVar12 = 0;
  }
  else {
    lVar10 = UThrobber::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    if (!bVar19) goto LAB_14308489b;
  }
  if ((((lVar15 != 0) && (lVar12 != 0)) && (lVar15 != 0)) && (*(char *)(lVar15 + 0x470) == '\x02'))
  {
    param_1[0xa1] = lVar15;
    plVar8 = (longlong *)param_1[0xa2];
    if (plStack_350 != plVar8) {
      if (plStack_350 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plStack_350 + 0xc) = *(int *)((longlong)plStack_350 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)param_1[0xa2];
        lVar15 = local_358;
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        lVar15 = local_358;
        if ((iVar6 == 1) && (plVar8 != (longlong *)0x0)) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
          lVar15 = local_358;
        }
      }
      param_1[0xa2] = (longlong)plStack_350;
    }
    plVar16 = plStack_350;
    uStack_280 = 0;
    local_288 = FUN_143081640;
    plVar8 = (longlong *)(lVar15 + 0x58);
    plVar11 = (longlong *)FMemory::Realloc(0,0x30);
    local_178 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      *plVar11 = (longlong)&PTR_FUN_143fcff50;
      FWeakObjectPtr::operator=(plVar11 + 1,param_1);
      *(undefined4 *)(plVar11 + 2) = (undefined4)local_288;
      *(undefined4 *)((longlong)plVar11 + 0x14) = local_288._4_4_;
      *(undefined4 *)(plVar11 + 3) = uStack_280;
      *(undefined4 *)((longlong)plVar11 + 0x1c) = uStack_27c;
      lVar12 = FDelegateHandle::GenerateNewID();
      plVar11[5] = lVar12;
      *plVar11 = (longlong)&PTR_FUN_143fcff98;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
      (**(code **)(*plVar11 + 0x20))(plVar11,local_278);
      iVar6 = *(int *)(lVar15 + 0x60);
      *(int *)(lVar15 + 0x60) = iVar6 + 1;
      if (*(int *)(lVar15 + 100) < iVar6 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar6);
      }
      lVar15 = *plVar8;
      *(longlong **)(lVar15 + (longlong)iVar6 * 0x10) = plVar11;
      *(undefined4 *)(lVar15 + 8 + (longlong)iVar6 * 0x10) = 3;
    }
    goto LAB_143084ace;
  }
  plVar16 = plStack_350;
  if ((param_1[0xa1] == 0) || (param_1[0xa2] == 0)) goto LAB_143084ace;
  piVar1 = (int *)(param_1[0xa2] + 8);
  LOCK();
  iVar6 = *piVar1;
  if (iVar6 == 0) {
    *piVar1 = 0;
    iVar6 = 0;
  }
  UNLOCK();
  if ((iVar6 < 1) ||
     (*(float *)((longlong)param_1 + 0x4b4) <= 0.0 && *(float *)((longlong)param_1 + 0x4b4) != 0.0))
  goto LAB_143084ace;
  local_330 = (longlong *)param_1[0xa2];
  if (local_330 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)local_330[1];
    bVar19 = iVar6 == 0;
    if (bVar19) {
      *(int *)(local_330 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (!bVar19) {
      LOCK();
      bVar19 = iVar6 == (int)local_330[1];
      if (bVar19) {
        *(int *)(local_330 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar19) {
        plVar8 = (longlong *)param_1[0xa1];
        local_338 = plVar8;
        if (plVar8 == (longlong *)0x0) goto LAB_143084a60;
        lVar15 = plVar8[1];
        lVar12 = FUN_142e219b0();
        goto joined_r0x000143084b8b;
      }
      LOCK();
      iVar6 = (int)local_330[1];
      bVar19 = iVar6 == 0;
      if (bVar19) {
        *(int *)(local_330 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
    local_330 = (longlong *)0x0;
  }
LAB_143084a60:
  plVar8 = (longlong *)0x0;
LAB_143084a63:
  plVar16 = local_330;
  if (local_330 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_330 + 1;
    lVar15 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_330)(local_330);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_330 + 8))(local_330,1);
      }
    }
  }
  plVar16 = plStack_350;
  if (plVar8 != (longlong *)0x0) {
    local_318 = *(undefined4 *)((longlong)param_1 + 0x4b4);
    local_314 = 0;
    (**(code **)(*plVar8 + 200))(plVar8,&local_318);
    plVar16 = plStack_350;
  }
LAB_143084ace:
  if (*(float *)(param_1 + 0x99) != 0.0) {
    local_378 = (longlong *)CONCAT44(local_378._4_4_,*(float *)(param_1 + 0x99));
    FUN_14307fbc0(plVar7,(char)param_1[0x97],param_1[0x98],8);
  }
  (**(code **)(*param_1 + 0x5f0))(param_1);
  if (((param_1[0x83] != 0) && (CONCAT44(uStack_344,local_348) != 0)) &&
     (plVar8 = *(longlong **)(CONCAT44(uStack_344,local_348) + 0x490), plVar8 != (longlong *)0x0)) {
    lVar15 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar15 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8) !=
        lVar15 + 0x88)) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    if ((bVar19) && (cVar5 = (**(code **)(*plVar8 + 0x768))(plVar8), cVar5 != '\0')) {
      lVar15 = param_1[0x83];
      uVar20 = 0x3f800000;
      lVar12 = FUN_14307d900(plVar7);
      if ((lVar12 != 0) && (cVar5 = FUN_14309f7d0(lVar12,1), cVar5 != '\0')) {
        uVar20 = *(undefined4 *)(lVar12 + 0x248);
        if (*(longlong *)(lVar12 + 0x240) != 0) {
          lVar15 = *(longlong *)(lVar12 + 0x240);
        }
      }
      if ((*(byte *)(param_1 + 0x84) & 1) == 0) {
        local_378 = (longlong *)0x0;
        FUN_142d408e0(lVar15,plVar8,uVar20,0);
      }
      else {
        (**(code **)(*plVar7 + 0x938))(plVar7,param_1[0x95],&local_308,local_260);
        uStack_344 = 0;
        local_340 = 0;
        local_2f0 = 0;
        local_2e0 = local_300;
        local_360 = 0;
        local_368 = 0;
        local_370 = 0;
        local_348 = local_348 & 0xffffff00;
        local_2f8 = (ulonglong)local_348;
        local_378 = (longlong *)((ulonglong)local_378 & 0xffffffffffffff00);
        local_2e8 = local_308;
        FUN_142d40a00(lVar15,plVar8,&local_2e8,&local_2f8);
      }
    }
  }
  if (1 < (int)param_1[0x81]) {
    *(int *)((longlong)param_1 + 0x53c) =
         (*(int *)((longlong)param_1 + 0x53c) + 1) % (int)param_1[0x81];
  }
  (**(code **)(*plVar7 + 0x850))(plVar7);
  FUN_142c63c50(local_248);
  plVar7 = plStack_350;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar16 + 1;
    lVar15 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plStack_350)(plStack_350);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_350 + 8))(plStack_350,1);
      }
    }
  }
  return;
joined_r0x000143084b8b:
  if (lVar15 == 0) goto LAB_143084b9e;
  if (lVar15 == lVar12) goto LAB_143084a63;
  lVar15 = *(longlong *)(lVar15 + 0x30);
  goto joined_r0x000143084b8b;
LAB_143084b9e:
  plVar8 = (longlong *)0x0;
  goto LAB_143084a63;
}



// FUNCTION 143084dd0 FUN_143084dd0 body=86 status=ok
// SIG undefined FUN_143084dd0(void)

void FUN_143084dd0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  plVar2 = (longlong *)FUN_14309ed70();
  if (plVar2 != (longlong *)0x0) {
    lVar1 = *plVar2;
    uVar3 = (**(code **)(*param_1 + 0x548))(param_1);
    (**(code **)(lVar1 + 0x970))(plVar2,uVar3);
    (**(code **)(*plVar2 + 0x960))(plVar2);
  }
  return;
}



// FUNCTION 143084e30 FUN_143084e30 body=309 status=ok
// SIG undefined FUN_143084e30(void)

void FUN_143084e30(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  *(undefined4 *)(param_1 + 0x2e4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2e2) = 0;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 600,0);
  lVar4 = FUN_14309ec50(param_1);
  if (lVar4 != 0) {
    if ((*(byte *)(param_1 + 0x1d0) & 4) == 0) {
      FUN_14308b1c0(param_1,0x3f800000,2,lVar4);
    }
    else {
      FUN_14308fb00(lVar4,2,*(undefined1 *)(param_1 + 0x2e3));
      if (*(longlong *)(param_1 + 0x1f8) != 0) {
        lVar5 = FUN_1412996f0(param_1);
        if ((lVar5 != 0) && (plVar1 = *(longlong **)(lVar5 + 0x490), plVar1 != (longlong *)0x0)) {
          lVar5 = FUN_1429e18b0();
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            cVar3 = (**(code **)(*plVar1 + 0x768))(plVar1);
            if (cVar3 != '\0') {
              FUN_142d49f50(*(undefined8 *)(param_1 + 0x1f8),plVar1);
            }
          }
        }
      }
    }
    FUN_143083d20(lVar4,4,*(undefined1 *)(param_1 + 0x2e3));
    FUN_143083770(param_1,7,lVar4);
  }
  return;
}



// FUNCTION 143084f70 FUN_143084f70 body=128 status=ok
// SIG undefined FUN_143084f70(void)

void FUN_143084f70(longlong *param_1,byte *param_2)

{
  int iVar1;
  
  if ((param_1[0x80] != 0) && ((*param_2 & 1) != 0)) {
    iVar1 = FUN_14233f450();
    if (iVar1 == 3) {
      param_1[0xa8] = *(longlong *)(param_2 + 0x20);
      *(undefined4 *)(param_1 + 0xa9) = *(undefined4 *)(param_2 + 0x28);
      (**(code **)(*param_1 + 0x260))(param_1);
    }
    FUN_142d68ea0(param_1[0x80],param_1[0x23],param_2,0,&DAT_1466ad4f0,0);
  }
  return;
}



// FUNCTION 143084ff0 FUN_143084ff0 body=696 status=ok
// SIG undefined FUN_143084ff0(void)

void FUN_143084ff0(longlong param_1,longlong *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  undefined8 *puVar7;
  byte bVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  int *piVar13;
  longlong lVar14;
  float local_res8 [2];
  undefined4 local_res10 [2];
  int local_res18;
  
  plVar11 = (longlong *)(param_1 + 0x80);
  iVar4 = *(int *)(param_1 + 0x88);
  lVar12 = *plVar11;
  lVar5 = (longlong)iVar4 * 0x68 + lVar12;
  do {
    if (lVar5 == lVar12) {
      iVar10 = -1;
      goto LAB_143085048;
    }
    lVar14 = lVar5 + -0x68;
    piVar13 = (int *)(lVar5 + -100);
    lVar5 = lVar14;
  } while (*piVar13 != param_3);
  iVar10 = (int)((lVar14 - lVar12) / 0x68);
LAB_143085048:
  local_res18 = param_3;
  if (iVar10 == -1) {
    *(int *)(param_1 + 0x88) = iVar4 + 1;
    if (*(int *)(param_1 + 0x8c) < iVar4 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar11);
    }
    _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar4 * 0x68 + *plVar11),0,0x68);
    iVar10 = iVar4;
  }
  iVar4 = *(int *)(param_1 + 0x78);
  lVar12 = (longlong)iVar4;
  plVar9 = *(longlong **)(param_1 + 0x70);
  piVar13 = (int *)((longlong)iVar10 * 0x68 + *plVar11);
  plVar11 = plVar9 + lVar12 * 4;
  if (plVar11 != plVar9) {
    do {
      plVar11 = plVar11 + -4;
      if (*plVar11 == *param_2) {
        iVar10 = (int)((longlong)plVar11 - (longlong)plVar9 >> 5);
        goto LAB_1430850b7;
      }
    } while (plVar11 != plVar9);
  }
  iVar10 = -1;
LAB_1430850b7:
  plVar11 = (longlong *)0x0;
  if (iVar10 == -1) {
    *(int *)(param_1 + 0x78) = iVar4 + 1;
    if (*(int *)(param_1 + 0x7c) < iVar4 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1 + 0x70,iVar4);
    }
    puVar7 = (undefined8 *)(lVar12 * 0x20 + *(longlong *)(param_1 + 0x70));
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(longlong *)(lVar12 * 0x20 + *(longlong *)(param_1 + 0x70)) = *param_2;
    plVar9 = plVar11;
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      plVar9 = *(longlong **)(param_1 + 0x20);
    }
    FUN_14307b150(plVar9,*param_2,*(longlong *)(param_1 + 0x70) + 0x18 + lVar12 * 0x20);
    iVar10 = iVar4;
  }
  *piVar13 = iVar10;
  piVar13[1] = local_res18;
  *(undefined1 *)(piVar13 + 2) = *(undefined1 *)((longlong)param_2 + 9);
  bVar8 = (*(byte *)((longlong)param_2 + 10) >> 1 ^ *(byte *)((longlong)piVar13 + 9)) & 1 ^
          *(byte *)((longlong)piVar13 + 9);
  *(byte *)((longlong)piVar13 + 9) = bVar8;
  bVar8 = bVar8 ^ (*(byte *)((longlong)param_2 + 10) ^ bVar8) & 4;
  *(byte *)((longlong)piVar13 + 9) = bVar8;
  if ((bVar8 & 4) != 0) {
    bVar8 = bVar8 ^ (*(byte *)((longlong)param_2 + 10) ^ bVar8) & 8;
    *(byte *)((longlong)piVar13 + 9) = bVar8;
    bVar8 = (*(byte *)((longlong)param_2 + 10) ^ bVar8) & 0x10 ^ bVar8;
    *(byte *)((longlong)piVar13 + 9) = bVar8;
    lVar12 = param_2[3];
    *(longlong *)(piVar13 + 4) = param_2[2];
    *(longlong *)(piVar13 + 6) = lVar12;
    lVar12 = param_2[5];
    *(longlong *)(piVar13 + 8) = param_2[4];
    *(longlong *)(piVar13 + 10) = lVar12;
    iVar4 = *(int *)((longlong)param_2 + 0x34);
    lVar12 = param_2[7];
    iVar10 = *(int *)((longlong)param_2 + 0x3c);
    piVar13[0xc] = (int)param_2[6];
    piVar13[0xd] = iVar4;
    piVar13[0xe] = (int)lVar12;
    piVar13[0xf] = iVar10;
    *(longlong *)(piVar13 + 0x10) = param_2[8];
  }
  bVar6 = 0;
  if (0.0 < *(float *)(param_2 + 10)) {
    bVar6 = 2;
  }
  *(byte *)((longlong)piVar13 + 9) = bVar6 | bVar8 & 0xfd;
  *(longlong *)(piVar13 + 0x12) = param_2[9];
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    plVar11 = *(longlong **)(param_1 + 0x20);
  }
  lVar12 = (**(code **)(*plVar11 + 0x148))(plVar11);
  piVar13[0x14] = *(int *)(lVar12 + 0x790);
  piVar13[0x15] = *(int *)((longlong)param_2 + 0x54);
  piVar13[0x16] = 0x3f800000;
  if (*(longlong *)(piVar13 + 0x12) != 0) {
    local_res10[0] = 0;
    FUN_1423d62c0(*(longlong *)(piVar13 + 0x12),local_res10,local_res8);
    if ((float)piVar13[0x15] <= 0.0) {
      piVar13[0x15] = (int)local_res8[0];
    }
    else {
      piVar13[0x16] = (int)(local_res8[0] / (float)piVar13[0x15]);
    }
  }
  fVar1 = *(float *)((longlong)param_2 + 0x5c);
  piVar13[0x18] = (int)fVar1;
  fVar2 = *(float *)(param_2 + 10);
  fVar3 = (float)piVar13[0x19];
  piVar13[0x19] = (int)(fVar2 + fVar3);
  if ((0.0 < fVar1) && (fVar1 < fVar2 + fVar3)) {
    piVar13[0x19] = (int)fVar1;
  }
  piVar13[0x17] = (int)param_2[0xb];
  return;
}



// FUNCTION 1430852b0 FUN_1430852b0 body=540 status=ok
// SIG undefined FUN_1430852b0(void)

void FUN_1430852b0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 local_38 [8];
  undefined4 local_30;
  ulonglong local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  *(undefined1 *)(param_1 + 0x2e2) = 0;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x278,0);
  plVar4 = (longlong *)FUN_14309ec50(param_1);
  if (plVar4 != (longlong *)0x0) {
    if ((*(byte *)(param_1 + 0x1d0) & 8) != 0) {
      FUN_14308fb00(plVar4,2,*(undefined1 *)(param_1 + 0x2e3));
      FUN_14308fb00(plVar4,4,*(undefined1 *)(param_1 + 0x2e3));
    }
    FUN_143083d20(plVar4,5,*(undefined1 *)(param_1 + 0x2e3));
    FUN_143083770(param_1,8,plVar4);
  }
  if ((((*(longlong *)(param_1 + 0x200) != 0) ||
       ((*(longlong *)(param_1 + 0x1f8) != 0 &&
        (*(char *)(*(longlong *)(param_1 + 0x1f8) + 0x268) != '\0')))) &&
      (lVar5 = FUN_1412996f0(param_1), lVar5 != 0)) &&
     (plVar1 = *(longlong **)(lVar5 + 0x490), plVar1 != (longlong *)0x0)) {
    lVar5 = FUN_1429e18b0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (cVar3 = (**(code **)(*plVar1 + 0x768))(plVar1), cVar3 != '\0')) {
      if (*(longlong *)(param_1 + 0x1f8) != 0) {
        FUN_142d49f50(*(longlong *)(param_1 + 0x1f8),plVar1);
      }
      if (*(longlong *)(param_1 + 0x200) != 0) {
        if (((*(byte *)(param_1 + 0x208) & 1) == 0) || (plVar4 == (longlong *)0x0)) {
          FUN_142d408e0(*(longlong *)(param_1 + 0x200),plVar1,0x3f800000,1,plVar4);
        }
        else {
          (**(code **)(*plVar4 + 0x938))(plVar4,*(undefined8 *)(param_1 + 0x210),local_38,local_18);
          local_20 = 0;
          local_48 = local_48 & 0xffffff00;
          local_28 = (ulonglong)local_48;
          uStack_40 = local_30;
          local_48 = local_38._0_4_;
          uStack_44 = local_38._4_4_;
          FUN_142d40a00(*(undefined8 *)(param_1 + 0x200),plVar1,&local_48,&local_28,1,plVar4,0,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 1430854d0 FUN_1430854d0 body=157 status=ok
// SIG undefined FUN_1430854d0(void)

void FUN_1430854d0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar4 = (longlong *)FUN_14309ec70();
  lVar3 = *plVar4;
  uVar5 = (**(code **)(*param_1 + 0x428))(param_1);
  (**(code **)(lVar3 + 0x990))(plVar4,local_18,2,0x3f800000,uVar5,0,0);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 143085570 FUN_143085570 body=175 status=ok
// SIG undefined FUN_143085570(void)

void FUN_143085570(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  iVar3 = FUN_142340f30();
  if (iVar3 != 1) {
    plVar4 = (longlong *)FUN_14309ed70(param_1);
    lVar2 = *plVar4;
    uVar5 = (**(code **)(*param_1 + 0x558))(param_1);
    (**(code **)(lVar2 + 0x990))(plVar4,local_18,9,0x3f800000,uVar5,0,0);
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_10 + 1;
      lVar2 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar1 = (int *)((longlong)local_10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 143085620 FUN_143085620 body=628 status=ok
// SIG undefined FUN_143085620(void)

void FUN_143085620(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  float fVar7;
  undefined4 uVar8;
  ulonglong in_stack_ffffffffffffff88;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 local_48 [8];
  undefined4 local_40;
  ulonglong local_38;
  undefined4 local_30;
  undefined1 local_28 [32];
  
  *(undefined1 *)((longlong)param_1 + 0x2e2) = 0;
  fVar7 = (float)(**(code **)(*param_1 + 0x440))();
  if (fVar7 <= 0.0) {
    *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  }
  cVar3 = (**(code **)(*param_1 + 0x478))(param_1);
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x358))(param_1,1);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x47,0);
  plVar5 = (longlong *)FUN_14309ec50(param_1);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x848))(plVar5);
  }
  iVar4 = FUN_142340f30(param_1);
  if (iVar4 != 1) {
    if (plVar5 != (longlong *)0x0) {
      FUN_143083d20(plVar5,2,*(undefined1 *)((longlong)param_1 + 0x2e3));
      uVar8 = FUN_1430774d0(param_1);
      FUN_14308b1c0(param_1,uVar8,2,plVar5);
      if (0 < (int)param_1[0x44]) {
        uVar8 = FUN_1430774d0(param_1);
        in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffff00000000;
        FUN_1430891b0(param_1,param_1 + 0x43,2,uVar8,in_stack_ffffffffffffff88,plVar5);
      }
      FUN_143083770(param_1,6,plVar5);
    }
    if (((param_1[0x3f] != 0) && (lVar6 = FUN_1412996f0(param_1), lVar6 != 0)) &&
       (plVar1 = *(longlong **)(lVar6 + 0x490), plVar1 != (longlong *)0x0)) {
      lVar6 = FUN_1429e18b0();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (cVar3 = (**(code **)(*plVar1 + 0x768))(plVar1), cVar3 != '\0')) {
        if (((*(byte *)(param_1 + 0x41) & 1) == 0) || (plVar5 == (longlong *)0x0)) {
          FUN_142d408e0(param_1[0x3f],plVar1,0x3f800000,0,plVar5);
        }
        else {
          (**(code **)(*plVar5 + 0x938))(plVar5,param_1[0x42],local_48,local_28);
          local_58 = local_58 & 0xffffff00;
          local_38 = (ulonglong)local_58;
          local_30 = 0;
          local_58 = local_48._0_4_;
          uStack_54 = local_48._4_4_;
          uStack_50 = local_40;
          FUN_142d40a00(param_1[0x3f],plVar1,&local_58,&local_38,
                        in_stack_ffffffffffffff88 & 0xffffffffffffff00,plVar5,0,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 1430858a0 FUN_1430858a0 body=201 status=ok
// SIG undefined FUN_1430858a0(void)

void FUN_1430858a0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  *(undefined1 *)((longlong)param_1 + 0x2e2) = 0;
  cVar1 = (**(code **)(*param_1 + 0x478))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x358))(param_1,1);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x51,0);
  iVar2 = FUN_142340f30(param_1);
  if ((iVar2 != 1) && (lVar3 = FUN_14309ec50(param_1), lVar3 != 0)) {
    FUN_143083d20(lVar3,6,*(undefined1 *)((longlong)param_1 + 0x2e3));
    if (0 < (int)param_1[0x46]) {
      uVar4 = FUN_1430774d0(param_1);
      FUN_1430891b0(param_1,param_1 + 0x45,6,uVar4,0x3f800000,lVar3);
    }
    FUN_143083770(param_1,10,lVar3);
  }
  return;
}



// FUNCTION 143085970 FUN_143085970 body=121 status=ok
// SIG undefined FUN_143085970(void)

void FUN_143085970(longlong param_1,char param_2)

{
  longlong *plVar1;
  
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x298,0);
  if (param_2 != '\0') {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x2a8,0);
  }
  plVar1 = (longlong *)FUN_14309ec50(param_1);
  if (plVar1 != (longlong *)0x0) {
    FUN_14308fb00(plVar1,6,*(undefined1 *)(param_1 + 0x2e3));
    (**(code **)(*plVar1 + 0x9a0))(plVar1,10);
    *(undefined1 *)(param_1 + 0x2e2) = 0;
  }
  return;
}



// FUNCTION 1430859f0 FUN_1430859f0 body=180 status=ok
// SIG undefined FUN_1430859f0(void)

undefined8 *
FUN_1430859f0(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,undefined1 param_7)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x608) == 0) {
    lVar1 = 0;
    if ((*(longlong *)(param_1 + 0x4a0) != 0) && (*(longlong *)(param_1 + 0x4a8) != 0)) {
      lVar1 = (**(code **)(**(longlong **)(param_1 + 0x4a8) + 0x170))();
    }
    if (lVar1 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
      return param_2;
    }
  }
  FUN_143057c50(param_5,param_2,param_3,param_1,param_4,param_5,param_6,param_7);
  return param_2;
}



// FUNCTION 143085ab0 FUN_143085ab0 body=158 status=ok
// SIG undefined FUN_143085ab0(void)

undefined8 *
FUN_143085ab0(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x608);
  if (lVar1 == 0) {
    if ((*(longlong *)(param_1 + 0x4a0) != 0) && (*(longlong *)(param_1 + 0x4a8) != 0)) {
      lVar1 = (**(code **)(**(longlong **)(param_1 + 0x4a8) + 0x170))();
    }
    if (lVar1 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
      return param_2;
    }
  }
  FUN_143057b10(lVar1,param_2,param_3,param_1,param_4,param_5,param_6);
  return param_2;
}



// FUNCTION 143085b50 FUN_143085b50 body=307 status=ok
// SIG undefined FUN_143085b50(void)

void FUN_143085b50(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 uVar6;
  
  FUN_142238430();
  if (*(char *)(param_1 + 0x128) == '\x03') {
    FUN_142dac710(param_1 + 0x5a0,param_1);
  }
  FUN_14306f270(param_1);
  if (0 < *(int *)(param_1 + 0x708)) {
    uVar2 = FUN_1429bed90();
    plVar3 = (longlong *)AGameStateBase::OnRep_GameModeClass(param_1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = FUN_1429bed90();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar4 = **(longlong **)(param_1 + 0x700);
        if (*(longlong *)(lVar4 + 0x38) == 0) {
          *(longlong **)(lVar4 + 0x38) = plVar3;
          (**(code **)(*plVar3 + 0x358))(plVar3,0);
          if (*(longlong *)(lVar4 + 0x38) == 0) {
            uVar6 = 0x3f800000;
          }
          else {
            uVar6 = *(undefined4 *)(*(longlong *)(lVar4 + 0x38) + 0x204);
          }
          *(undefined4 *)(lVar4 + 0x40) = uVar6;
        }
        uVar5 = 1;
        if (1 < *(int *)(param_1 + 0x708)) {
          do {
            plVar3 = (longlong *)(*(undefined8 **)(param_1 + 0x700))[(int)uVar5];
            if ((plVar3 != (longlong *)0x0) && (plVar3[7] == 0)) {
              (**(code **)(*plVar3 + 0x2a0))(plVar3,uVar5 & 0xff,**(undefined8 **)(param_1 + 0x700))
              ;
            }
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < *(int *)(param_1 + 0x708));
        }
      }
    }
  }
  return;
}



// FUNCTION 143085c90 FUN_143085c90 body=196 status=ok
// SIG undefined FUN_143085c90(void)

undefined8 FUN_143085c90(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar4 = UObject::PostLoad();
  if ((*(int *)(param_1 + 0x38) == 0) &&
     ((*(float *)(param_1 + 0x54) != 0.0 || (*(float *)(param_1 + 0x60) != 0.0)))) {
    lVar5 = (longlong)*(int *)(param_1 + 0x38);
    iVar3 = *(int *)(param_1 + 0x38) + 1;
    *(int *)(param_1 + 0x38) = iVar3;
    if (*(int *)(param_1 + 0x3c) < iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x30);
    }
    lVar1 = *(longlong *)(param_1 + 0x30);
    uVar4 = 0;
    *(undefined8 *)(lVar1 + lVar5 * 0x18) = 0;
    *(undefined8 *)(lVar1 + 8 + lVar5 * 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x10 + lVar5 * 0x18) = 0;
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    *puVar2 = *(undefined8 *)(param_1 + 0x50);
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 0x58);
    lVar5 = *(longlong *)(param_1 + 0x30);
    *(undefined8 *)(lVar5 + 0xc) = *(undefined8 *)(param_1 + 0x5c);
    *(undefined4 *)(lVar5 + 0x14) = *(undefined4 *)(param_1 + 100);
    *(undefined8 *)(param_1 + 0x5c) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return uVar4;
}



// FUNCTION 143085d80 FUN_143085d80 body=204 status=ok
// SIG undefined FUN_143085d80(void)

void FUN_143085d80(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    iVar1 = FArchive::CustomVer(param_2,&DAT_14678c810);
    if (iVar1 < 0) {
      uVar3 = *(uint *)(param_1 + 0x38);
      bVar4 = *(byte *)(param_1 + 0x5c) & 1;
      uVar2 = uVar3;
      if (bVar4 != ((byte)(uVar3 >> 1) & 1)) {
        if (bVar4 == 0) {
          uVar2 = uVar3 & 0xfffffffd;
        }
        else {
          uVar2 = uVar3 | 2;
        }
        uVar3 = uVar2 & 0xff;
        *(uint *)(param_1 + 0x38) = uVar2;
      }
      bVar4 = *(byte *)(param_1 + 0x5c) >> 1 & 1;
      if (bVar4 != ((byte)uVar3 & 1)) {
        if (bVar4 == 0) {
          uVar2 = uVar2 & 0xfffffffe;
        }
        else {
          uVar2 = uVar2 | 1;
        }
        *(uint *)(param_1 + 0x38) = uVar2;
      }
      bVar4 = *(byte *)(param_1 + 0x5c) >> 2 & 1;
      if (bVar4 != ((byte)(uVar2 >> 2) & 1)) {
        if (bVar4 == 0) {
          uVar2 = uVar2 & 0xfffffffb;
        }
        else {
          uVar2 = uVar2 | 4;
        }
        *(uint *)(param_1 + 0x38) = uVar2;
      }
      bVar4 = *(byte *)(param_1 + 0x5c) >> 3 & 1;
      if (bVar4 != ((byte)(uVar2 >> 3) & 1)) {
        if (bVar4 != 0) {
          *(uint *)(param_1 + 0x38) = uVar2 | 8;
          return;
        }
        *(uint *)(param_1 + 0x38) = uVar2 & 0xfffffff7;
      }
    }
  }
  return;
}



// FUNCTION 143085e50 FUN_143085e50 body=154 status=ok
// SIG undefined FUN_143085e50(void)

undefined8 FUN_143085e50(longlong *param_1)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  float fVar5;
  
  cVar2 = (**(code **)(*param_1 + 0x470))();
  if (cVar2 == '\0') {
    iVar1 = *(int *)((longlong)param_1 + 0x2ec);
    if (*(int *)((longlong)param_1 + 0x2ec) <= *(int *)((longlong)param_1 + 0x2e4)) {
      iVar1 = *(int *)((longlong)param_1 + 0x2e4);
    }
    if (0 < iVar1) {
      plVar3 = (longlong *)FUN_14309ed70(param_1);
      if (plVar3 == (longlong *)0x0) {
        return 0;
      }
      (**(code **)(*plVar3 + 0x978))(plVar3);
      return 0;
    }
  }
  fVar5 = *(float *)((longlong)param_1 + 0x51c);
  if ((0.0 < fVar5) && ((*(byte *)(param_1 + 0x9c) & 8) == 0)) {
    lVar4 = param_1[0x24];
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0(param_1);
      fVar5 = *(float *)((longlong)param_1 + 0x51c);
    }
    if (*(float *)(lVar4 + 0x790) <= fVar5) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143085ef0 FUN_143085ef0 body=240 status=ok
// SIG undefined FUN_143085ef0(void)

void FUN_143085ef0(longlong *param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(undefined1 *)((longlong)param_1 + 0x2e1) = 1;
  if (param_1[0x5f] != 0) {
    lVar1 = param_1[0x24];
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar2,param_1 + 0x5f);
    param_1[0x5f] = 0;
  }
  if (param_1[0x5e] != 0) {
    lVar1 = param_1[0x24];
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar2,param_1 + 0x5e);
    param_1[0x5e] = 0;
  }
  if ((param_2 != '\0') && (1 < *(byte *)(param_1 + 0x57))) {
    (**(code **)(*param_1 + 0x4a0))(param_1);
  }
  UApplicationLifecycleComponent::OnLowPowerModeDelegate_Handler(param_1,param_2);
  return;
}



// FUNCTION 143085fe0 FUN_143085fe0 body=1142 status=ok
// SIG undefined FUN_143085fe0(void)

void FUN_143085fe0(undefined8 param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_198;
  float fStack_194;
  float fStack_18c;
  float fStack_188;
  longlong local_178;
  undefined8 local_170;
  undefined8 local_168;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float local_150;
  undefined1 local_148 [12];
  undefined4 local_13c;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  
  uVar7 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  fStack_160 = 0.0;
  fStack_15c = 0.0;
  fStack_158 = 0.0;
  fStack_154 = 0.0;
  local_150 = 0.0;
  local_e4 = 0xffffffff;
  local_e0 = 0;
  local_dc = 0xffffffff;
  local_d8 = 0;
  local_d4 = 0xffffffff;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  _guard_xfg_dispatch_icall_nop(local_148,0,0x90);
  local_13c = 0x3f800000;
  lVar6 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if ((lVar6 != 0) && (fVar14 = *(float *)(param_2 + 9), 0.0001 < fVar14)) {
    fVar12 = *(float *)((longlong)param_2 + 0x4c);
    if (ABS(fVar12) <= 1e-08) {
      fVar12 = (float)FUN_1428cc5b0(lVar6);
      fVar14 = *(float *)(param_2 + 9);
    }
    fVar2 = *(float *)(param_2 + 4);
    uVar3 = *(undefined8 *)((longlong)param_2 + 0xc);
    uVar4 = *param_2;
    fVar18 = *(float *)((longlong)param_2 + 0x14);
    fVar13 = *(float *)(param_2 + 1);
    iVar9 = -((int)ROUND(-0.5 - (fVar2 * fVar14 + fVar2 * fVar14)) >> 1);
    if (0x7f < iVar9) {
      iVar9 = 0x80;
    }
    if (local_170._4_4_ < iVar9) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
                (&local_178);
    }
    uVar5 = local_170;
    lVar11 = (longlong)(int)local_170;
    fStack_18c = (float)uVar3;
    fStack_188 = (float)((ulonglong)uVar3 >> 0x20);
    iVar9 = (int)local_170 + 1;
    local_170 = CONCAT44(local_170._4_4_,iVar9);
    if (local_170._4_4_ < iVar9) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow
                (&local_178,uVar5 & 0xffffffff);
      iVar9 = (int)local_170;
    }
    local_198 = (float)uVar4;
    fStack_194 = (float)((ulonglong)uVar4 >> 0x20);
    lVar11 = lVar11 * 0x1c;
    pfVar1 = (float *)(lVar11 + local_178);
    *pfVar1 = local_198;
    pfVar1[1] = fStack_194;
    pfVar1[2] = fVar13;
    pfVar1[3] = fStack_18c;
    *(ulonglong *)(lVar11 + 0x10 + local_178) = CONCAT44(fVar18,fStack_188);
    *(undefined4 *)(lVar11 + 0x18 + local_178) = 0;
    lVar11 = local_178;
    if (0.0 < fVar2) {
      fVar16 = 0.0;
      iVar10 = iVar9;
      do {
        fVar17 = fVar16 + 1.0 / fVar14;
        iVar9 = iVar10 + 1;
        local_170 = CONCAT44(local_170._4_4_,iVar9);
        if (fVar2 <= fVar17) {
          fVar17 = fVar2;
        }
        fVar15 = (fVar17 - fVar16) * 0.5;
        fVar19 = (fVar17 - fVar16) * fVar12 + fVar18;
        local_198 = fVar15 * fStack_18c * 2.0 + local_198;
        fStack_194 = fVar15 * fStack_188 * 2.0 + fStack_194;
        fVar13 = (fVar19 + fVar18) * fVar15 + fVar13;
        local_168 = CONCAT44(fStack_194,local_198);
        fStack_160 = fVar13;
        fStack_15c = fStack_18c;
        fStack_158 = fStack_188;
        fStack_154 = fVar19;
        local_150 = fVar17;
        if (local_170._4_4_ < iVar9) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
          ResizeGrow(&local_178,iVar10);
          lVar11 = local_178;
          iVar9 = (int)local_170;
        }
        lVar8 = (longlong)iVar10 * 0x1c;
        pfVar1 = (float *)(lVar8 + lVar11);
        *pfVar1 = local_198;
        pfVar1[1] = fStack_194;
        pfVar1[2] = fVar13;
        pfVar1[3] = fStack_18c;
        *(ulonglong *)(lVar8 + 0x10 + lVar11) = CONCAT44(fVar19,fStack_188);
        *(float *)(lVar8 + 0x18 + lVar11) = fVar17;
        fVar16 = fVar17;
        fVar18 = fVar19;
        iVar10 = iVar9;
      } while (fVar17 < fVar2);
    }
    if ((((*(char *)(param_2 + 3) != '\0') && (1 < iVar9)) && (*(char *)(param_2 + 0xc) != '\x02'))
       && (*(int *)(param_2 + 6) < 1)) {
      lVar8 = operator_new(0x198);
      if (lVar8 != 0) {
        uVar7 = FUN_143067540(lVar8,lVar6,param_2,&local_178);
        lVar11 = local_178;
      }
      if (*(longlong *)(lVar6 + 400) == 0) {
        lVar8 = lVar6 + 0x400;
      }
      else {
        lVar8 = *(longlong *)(*(longlong *)(lVar6 + 400) + 0x98);
      }
      FUN_142514cf0(lVar8,lVar6,0x999478,uVar7);
      goto LAB_143086416;
    }
  }
  FUN_143072310(param_2 + 0xe,&local_178);
  lVar11 = local_178;
LAB_143086416:
  if (lVar11 != 0) {
    FMemory::Free(lVar11);
  }
  return;
}



// FUNCTION 143086460 FUN_143086460 body=138 status=ok
// SIG undefined FUN_143086460(void)

void FUN_143086460(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 5;
  cVar1 = UActorComponent::IsComponentTickEnabled();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x358))(param_1,1);
  }
  lVar2 = param_1[0x24];
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
  }
  if (*(int *)(lVar2 + 0x5e4) < (int)(uint)*(byte *)(param_1 + 7)) {
    *(undefined4 *)(param_1 + 0xa3) = 0x38d1b717;
  }
  else {
    *(undefined4 *)(param_1 + 0xa3) = 0;
    (**(code **)(*param_1 + 0x568))(param_1);
    cVar1 = (**(code **)(*param_1 + 0x408))(param_1);
    if (cVar1 != '\0') {
      FUN_14308c0b0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1430864f0 FUN_1430864f0 body=97 status=ok
// SIG undefined FUN_1430864f0(void)

void FUN_1430864f0(longlong param_1)

{
  byte bVar1;
  char cVar2;
  
  if (*(longlong **)(param_1 + 0x150) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x778))();
    if ((((cVar2 != '\0') &&
         (bVar1 = *(byte *)(param_1 + 0x690), (int)(uint)bVar1 < *(int *)(param_1 + 0x6a0))) &&
        (*(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)bVar1 * 0x48) != 0)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x698) + 0x20 + (ulonglong)bVar1 * 0x48) != 0)) {
      FUN_1430a3510();
      return;
    }
  }
  return;
}



// FUNCTION 143086560 FUN_143086560 body=631 status=ok
// SIG undefined FUN_143086560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143086560(longlong param_1,longlong param_2,float *param_3,undefined4 param_4,float param_5
                  )

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined8 local_258;
  undefined4 local_250;
  float local_24c;
  undefined2 local_248;
  longlong local_240;
  undefined8 local_238;
  float local_228;
  undefined1 local_218 [56];
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8 [176];
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  float local_104;
  undefined8 local_100;
  float local_f8;
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  longlong local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  iVar2 = FUN_14233f450();
  if (((iVar2 == 3) && (lVar3 = FUN_1412996f0(param_1), lVar3 != 0)) &&
     (lVar4 = FWeakObjectPtr::Get(param_2 + 0x6c), lVar4 != 0)) {
    lVar4 = FUN_14309ed70(param_1);
    uVar8 = 0;
    if ((int)(uint)*(byte *)(lVar4 + 0x690) < *(int *)(lVar4 + 0x6a0)) {
      uVar8 = *(undefined8 *)
               (*(longlong *)(lVar4 + 0x698) + 0x30 + (ulonglong)*(byte *)(lVar4 + 0x690) * 0x48);
    }
    uVar5 = FWeakObjectPtr::Get(param_2 + 0x6c);
    uVar6 = FUN_1412996f0(param_1);
    FUN_142d0aa70(local_218,uVar5,uVar6,uVar8);
    local_1e0 = *(undefined8 *)(lVar3 + 0x490);
    local_1d0 = *(undefined8 *)(param_1 + 0x3f0);
    local_1d8 = *(undefined8 *)(param_1 + 0x3f8);
    FUN_140729f20(local_1c8,param_2);
    local_118 = *(undefined8 *)(param_2 + 0x14);
    local_110 = *(undefined4 *)(param_2 + 0x1c);
    local_10c = *(undefined8 *)param_3;
    fVar1 = *(float *)(param_1 + 0x3bc);
    local_104 = param_3[2];
    local_228 = fVar1 * param_3[2];
    local_100 = CONCAT44(fVar1 * param_3[1],fVar1 * *param_3);
    local_f8 = local_228;
    if (param_5 <= 0.0) {
      FUN_142d32ae0(local_218,param_4,0);
    }
    else {
      local_258 = *(undefined8 *)(param_2 + 0x14);
      local_250 = *(undefined4 *)(param_2 + 0x1c);
      local_24c = param_5;
      local_248 = 0x200;
      local_240 = 0;
      local_238 = 0;
      local_268 = 0;
      FUN_142d33bd0(local_218,param_4,&local_258,1);
      if (local_240 != 0) {
        FMemory::Free();
      }
    }
    if (local_78 != 0) {
      FMemory::Free();
    }
    if (local_98 != 0) {
      plVar7 = local_c8;
      if (local_a8 != (longlong *)0x0) {
        plVar7 = local_a8;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1430867e0 FUN_1430867e0 body=962 status=ok
// SIG undefined FUN_1430867e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430867e0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 in_stack_00000048;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined1 local_110;
  undefined8 local_108;
  longlong local_100 [24];
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  bVar3 = false;
  if (param_3 != 0) {
    uVar7 = UScrollBox::GetPrivateStaticClass();
    lVar8 = AGameStateBase::OnRep_GameModeClass(param_3,uVar7);
    if (lVar8 != 0) {
      lVar9 = UScrollBox::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_1430b4000(param_1,in_stack_00000048);
        if (((char)param_1[0xb5] != '\0') &&
           (bVar3 = false, *(char *)((longlong)param_1 + 0x5aa) != '\0')) {
          bVar3 = true;
        }
        uVar7 = UCircularThrobber::GetPrivateStaticClass();
        lVar8 = AGameStateBase::OnRep_GameModeClass(param_3,uVar7);
        if (lVar8 != 0) {
          lVar9 = UCircularThrobber::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            iVar5 = FUN_142dec980(lVar8,param_1[0xb7]);
            if (iVar5 == 0) {
              FUN_1430b4280(param_1,in_stack_00000048);
              goto LAB_14308696f;
            }
            if (iVar5 == 2) {
              FUN_1430b4140(param_1,in_stack_00000048);
              if (((char)param_1[0xb5] != '\0') && (*(char *)((longlong)param_1 + 0x5ab) != '\0')) {
                bVar3 = true;
              }
              goto LAB_14308696f;
            }
          }
        }
        FUN_1430b43c0(param_1,in_stack_00000048);
        goto LAB_14308696f;
      }
    }
  }
  FUN_1430b4500(param_1,in_stack_00000048);
  if (((char)param_1[0xb5] != '\0') && (bVar3 = false, *(char *)((longlong)param_1 + 0x5a9) != '\0')
     ) {
    bVar3 = true;
  }
LAB_14308696f:
  uVar11 = 0;
  if (((*(byte *)(param_1 + 0x8d) & 4) != 0) && (param_3 != 0)) {
    lVar8 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
         ) != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_40 = (longlong *)0x0;
      local_38 = 0;
      FUN_140725150(param_1,local_100,0);
      plVar10 = local_100;
      if (local_40 != (longlong *)0x0) {
        plVar10 = local_40;
      }
      uVar12 = (longlong)(int)local_38 & 0x1fffffffffffffff;
      if (plVar10 + (int)local_38 < plVar10) {
        uVar12 = uVar11;
      }
      if (uVar12 != 0) {
        do {
          plVar1 = (longlong *)*plVar10;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x830))(plVar1,2);
          }
          plVar10 = plVar10 + 1;
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar12);
      }
      if (local_40 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  if ((((param_1[0x99] != 0) && (lVar8 = (**(code **)(*param_1 + 0x148))(param_1), lVar8 != 0)) &&
      (lVar8 = (**(code **)(*param_1 + 0x148))(param_1),
      *(float *)(param_1 + 0x9a) + *(float *)((longlong)param_1 + 0x504) < *(float *)(lVar8 + 0x790)
      )) && ((param_1[0x9e] != 0 && ((*(byte *)(param_1[0x9e] + 0x1c8) & 0x40) == 0)))) {
    lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
    local_110 = 0;
    *(undefined4 *)((longlong)param_1 + 0x504) = *(undefined4 *)(lVar8 + 0x790);
    local_118 = &DAT_1466ad4f0;
    FUN_142d68ea0(param_1[0x99],param_1,in_stack_00000048,0);
  }
  if ((param_1[0x9e] != 0) &&
     (plVar10 = *(longlong **)(param_1[0x9e] + 0x180), plVar10 != (longlong *)0x0)) {
    local_108 = 0;
    cVar4 = (**(code **)(*plVar10 + 0x400))(plVar10,0);
    if (cVar4 != '\0') {
      FUN_14305cd50(param_1[0x9e],in_stack_00000048);
    }
  }
  lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  AK::MemoryMgr::StartProfileThreadUsage(lVar6);
  if (bVar3) {
    (**(code **)(*param_1 + 0x6f8))(param_1);
  }
  return;
}



// FUNCTION 143086bb0 FUN_143086bb0 body=393 status=ok
// SIG undefined FUN_143086bb0(void)

void FUN_143086bb0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  
  uVar6 = 0;
  plVar9 = *(longlong **)(param_1 + 0x700);
  plVar5 = plVar9 + *(int *)(param_1 + 0x708);
  do {
    if (plVar9 == plVar5) {
      plVar5 = *(longlong **)(param_1 + 0x710);
      uVar8 = (longlong)*(int *)(param_1 + 0x718) & 0x1fffffffffffffff;
      if (plVar5 + *(int *)(param_1 + 0x718) < plVar5) {
        uVar8 = uVar6;
      }
      if (uVar8 != 0) {
        do {
          if (*plVar5 != 0) {
            FUN_143086d40();
          }
          plVar5 = plVar5 + 1;
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar8);
      }
      return;
    }
    lVar7 = *plVar9;
    if (lVar7 != 0) {
      uVar8 = uVar6;
      if ((*(uint *)(lVar7 + 8) >> 4 & 1) == 0) {
        uVar8 = *(ulonglong *)(lVar7 + 0x20);
      }
      lVar4 = *(longlong *)(lVar7 + 0x60);
      lVar7 = (longlong)*(int *)(lVar7 + 0x68) * 0x60 + lVar4;
      for (; lVar4 != lVar7; lVar4 = lVar4 + 0x60) {
        if (*(longlong *)(lVar4 + 0x50) != 0) {
          lVar2 = UDungeonEventListener::GetPrivateStaticClass();
          for (lVar3 = *(longlong *)(lVar4 + 0x50); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30))
          {
            if (lVar3 == lVar2) {
              lVar3 = FUN_142db9260(*(undefined8 *)(lVar4 + 0x50),uVar8);
              if ((lVar3 != 0) && (lVar3 != *(longlong *)(lVar4 + 0x48))) {
                lVar2 = *(longlong *)(lVar4 + 0x58);
                *(longlong *)(lVar4 + 0x48) = lVar3;
                if (lVar2 != 0) {
                  if (((*(byte *)(lVar2 + 0xba) & 4) == 0) ||
                     ((*(byte *)(lVar2 + 0x718) & 0x10) != 0)) {
                    bVar1 = false;
                  }
                  else {
                    bVar1 = true;
                    FUN_142600fa0();
                    lVar2 = *(longlong *)(lVar4 + 0x58);
                    lVar3 = *(longlong *)(lVar4 + 0x48);
                  }
                  FUN_14260f940(lVar2,lVar3);
                  if (bVar1) {
                    FUN_1425fcab0(*(undefined8 *)(lVar4 + 0x58),0);
                  }
                }
              }
              break;
            }
          }
        }
      }
    }
    plVar9 = plVar9 + 1;
  } while( true );
}



// FUNCTION 143086d40 FUN_143086d40 body=245 status=ok
// SIG undefined FUN_143086d40(void)

void FUN_143086d40(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar5 = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x60);
  lVar6 = (longlong)*(int *)(param_1 + 0x68) * 0x60 + lVar4;
  do {
    if (lVar4 == lVar6) {
      return;
    }
    if (*(longlong *)(lVar4 + 0x50) != 0) {
      lVar2 = UDungeonEventListener::GetPrivateStaticClass();
      for (lVar3 = *(longlong *)(lVar4 + 0x50); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
        if (lVar3 == lVar2) {
          lVar3 = FUN_142db9260(*(undefined8 *)(lVar4 + 0x50),uVar5);
          if ((lVar3 != 0) && (lVar3 != *(longlong *)(lVar4 + 0x48))) {
            lVar2 = *(longlong *)(lVar4 + 0x58);
            *(longlong *)(lVar4 + 0x48) = lVar3;
            if (lVar2 != 0) {
              if (((*(byte *)(lVar2 + 0xba) & 4) == 0) || ((*(byte *)(lVar2 + 0x718) & 0x10) != 0))
              {
                bVar1 = false;
              }
              else {
                bVar1 = true;
                FUN_142600fa0();
                lVar2 = *(longlong *)(lVar4 + 0x58);
                lVar3 = *(longlong *)(lVar4 + 0x48);
              }
              FUN_14260f940(lVar2,lVar3);
              if (bVar1) {
                FUN_1425fcab0(*(undefined8 *)(lVar4 + 0x58),0);
              }
            }
          }
          break;
        }
      }
    }
    lVar4 = lVar4 + 0x60;
  } while( true );
}



// FUNCTION 143086e40 FUN_143086e40 body=94 status=ok
// SIG undefined FUN_143086e40(void)

void FUN_143086e40(longlong param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           (**(code **)(*(longlong *)(param_1 + 0x460) + 0x10))
                     ((longlong *)(param_1 + 0x460),*(undefined1 *)(param_1 + 0x690));
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x4b0))(plVar1,param_2,param_3,param_4,1);
  }
  return;
}



// FUNCTION 143086ea0 FUN_143086ea0 body=464 status=ok
// SIG undefined FUN_143086ea0(void)

void FUN_143086ea0(longlong *param_1,int param_2,char param_3,char param_4,char param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  if ((*(byte *)((longlong)param_1 + 0x1a4) & 1) != 0) {
    if (param_3 != '\0') {
      fVar5 = (float)param_2 * 0.01;
      fVar6 = 0.0;
      if ((0.0 <= fVar5) && (fVar6 = fVar5, 1.0 <= fVar5)) {
        fVar6 = 1.0;
      }
      iVar2 = (**(code **)(*param_1 + 0x418))();
      param_2 = -((int)ROUND(-0.5 - ((float)iVar2 * fVar6 + (float)iVar2 * fVar6)) >> 1);
    }
    if ((param_4 != '\0') && (iVar2 = FUN_14233f450(param_1), iVar2 == 3)) {
      FUN_1430bb910(param_1,param_2);
    }
    iVar2 = (**(code **)(*param_1 + 0x448))(param_1);
    iVar3 = (**(code **)(*param_1 + 0x418))(param_1);
    if (0 < iVar3) {
      if (param_2 < 0) {
        param_2 = *(int *)((longlong)param_1 + 0x1b4);
      }
      iVar4 = (**(code **)(*param_1 + 0x420))(param_1);
      iVar3 = (**(code **)(*param_1 + 0x418))(param_1);
      if (param_2 + iVar4 <= iVar3) {
        iVar3 = param_2 + iVar4;
      }
      iVar4 = iVar2;
      if (iVar3 <= iVar2) {
        iVar4 = iVar3;
      }
      *(int *)(param_1 + 0x38) = iVar4;
      *(int *)(param_1 + 0x47) = iVar4;
      cVar1 = (**(code **)(*param_1 + 0x460))(param_1);
      if (cVar1 == '\0') {
        iVar2 = iVar2 - (int)param_1[0x38];
        iVar3 = 0;
        if (-1 < iVar2) {
          iVar3 = iVar2;
        }
        *(int *)(param_1 + 0x39) = iVar3;
      }
      (**(code **)(*param_1 + 0x260))(param_1);
    }
    if (param_5 != '\0') {
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x32,0);
    }
    return;
  }
  if (param_3 != '\0') {
    fVar5 = (float)param_2 * 0.01;
    fVar6 = 0.0;
    if ((0.0 <= fVar5) && (fVar6 = fVar5, 1.0 <= fVar5)) {
      fVar6 = 1.0;
    }
    fVar6 = (float)*(int *)((longlong)param_1 + 0x24c) * fVar6;
    param_2 = -((int)ROUND(-0.5 - (fVar6 + fVar6)) >> 1);
  }
  iVar2 = *(int *)((longlong)param_1 + 0x24c);
  if (param_2 < 0) {
    param_2 = iVar2;
  }
  param_2 = (int)param_1[0x49] + param_2;
  if (param_2 <= iVar2) {
    iVar2 = param_2;
  }
  *(int *)(param_1 + 0x49) = iVar2;
  return;
}



// FUNCTION 143087070 FUN_143087070 body=385 status=ok
// SIG undefined FUN_143087070(void)

void FUN_143087070(longlong *param_1,char param_2)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  
  (**(code **)(*param_1 + 0x260))();
  lVar2 = param_1[0x38];
  iVar4 = (**(code **)(*param_1 + 0x448))(param_1);
  if ((int)param_1[0x38] <= iVar4) {
    iVar4 = (int)param_1[0x38];
  }
  *(int *)(param_1 + 0x38) = iVar4;
  iVar4 = (**(code **)(*param_1 + 0x418))(param_1);
  if ((int)param_1[0x38] <= iVar4) {
    iVar4 = (int)param_1[0x38];
  }
  *(int *)(param_1 + 0x38) = iVar4;
  iVar5 = (**(code **)(*param_1 + 0x448))(param_1);
  plVar7 = (longlong *)param_1[0x35];
  iVar5 = iVar5 - (int)param_1[0x38];
  iVar4 = 0;
  if (-1 < iVar5) {
    iVar4 = iVar5;
  }
  bVar1 = false;
  *(int *)(param_1 + 0x39) = iVar4;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)param_1[0x23];
    param_1[0x35] = (longlong)plVar7;
    if (plVar7 == (longlong *)0x0) goto LAB_14308716c;
  }
  lVar6 = (**(code **)(*plVar7 + 0x950))(plVar7);
  if (lVar6 != 0) {
    lVar6 = (**(code **)(*plVar7 + 0x950))(plVar7);
    if (*(longlong *)(lVar6 + 0x490) != 0) {
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x950))(plVar7);
      cVar3 = (**(code **)(*plVar7 + 0x778))(plVar7);
      bVar1 = false;
      if (cVar3 == '\0') {
        bVar1 = true;
      }
    }
  }
LAB_14308716c:
  if ((param_2 != '\0') || ((int)param_1[0x38] != (int)lVar2)) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x32,0);
    if (bVar1) {
      FUN_1430bb950(param_1,(int)param_1[0x38]);
    }
  }
  bVar8 = *(byte *)((longlong)param_1 + 0x254) & 0xfb;
  *(byte *)((longlong)param_1 + 0x254) = bVar8;
  *(int *)(param_1 + 0x47) = (int)param_1[0x38];
  if (((bVar1) && ((int)param_1[0x42] != 2)) && (0 < *(int *)((longlong)param_1 + 0x1b4))) {
    *(byte *)((longlong)param_1 + 0x254) = bVar8 | 4;
  }
  return;
}



// FUNCTION 143087200 FUN_143087200 body=417 status=ok
// SIG undefined FUN_143087200(void)

void FUN_143087200(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  byte bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  
  uVar5 = 0;
  plVar9 = *(longlong **)(param_1 + 0x700);
  plVar4 = plVar9 + *(int *)(param_1 + 0x708);
  for (; plVar9 != plVar4; plVar9 = plVar9 + 1) {
    lVar1 = *plVar9;
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x58) & 1) == 0)) {
      if (((char)*(uint *)(lVar1 + 0x58) < '\0') &&
         (((((*(uint *)(lVar1 + 8) >> 4 & 1) == 0 &&
            (lVar2 = *(longlong *)(lVar1 + 0x20), lVar2 != 0)) &&
           ((*(byte *)(lVar2 + 0x80) & 1) == 0)) &&
          ((lVar2 == 0 || ((*(byte *)(lVar2 + 0x7e8) & 0x40) == 0)))))) {
        bVar6 = 1;
      }
      else {
        bVar6 = 0;
      }
      lVar2 = *(longlong *)(lVar1 + 0x38);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x2f2) >> 6 & 1) != bVar6)) {
        *(byte *)(lVar2 + 0x2f2) = *(byte *)(lVar2 + 0x2f2) & 0xbf | bVar6 << 6;
        FUN_1423424e0();
      }
      plVar3 = *(longlong **)(lVar1 + 0xb0);
      uVar8 = (longlong)*(int *)(lVar1 + 0xb8) & 0x1fffffffffffffff;
      if (plVar3 + *(int *)(lVar1 + 0xb8) < plVar3) {
        uVar8 = uVar5;
      }
      uVar7 = uVar5;
      if (uVar8 != 0) {
        do {
          lVar1 = *plVar3;
          if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x2f2) >> 6 & 1) != bVar6)) {
            *(byte *)(lVar1 + 0x2f2) = *(byte *)(lVar1 + 0x2f2) & 0xbf | bVar6 << 6;
            FUN_1423424e0();
          }
          plVar3 = plVar3 + 1;
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar8);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x710);
  uVar8 = (longlong)*(int *)(param_1 + 0x718) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(param_1 + 0x718) < plVar4) {
    uVar8 = uVar5;
  }
  if (uVar8 != 0) {
    do {
      if (*plVar4 != 0) {
        FUN_1430873b0();
      }
      plVar4 = plVar4 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar8);
  }
  return;
}



// FUNCTION 1430873b0 FUN_1430873b0 body=276 status=ok
// SIG undefined FUN_1430873b0(void)

void FUN_1430873b0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if ((*(uint *)(param_1 + 0x58) & 1) == 0) {
    if ((((((char)*(uint *)(param_1 + 0x58) < '\0') && ((*(uint *)(param_1 + 8) >> 4 & 1) == 0)) &&
         (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != 0)) &&
        ((*(byte *)(lVar1 + 0x80) & 1) == 0)) &&
       ((lVar1 == 0 || ((*(byte *)(lVar1 + 0x7e8) & 0x40) == 0)))) {
      bVar3 = 1;
    }
    else {
      bVar3 = 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x38);
    if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x2f2) >> 6 & 1) != bVar3)) {
      *(byte *)(lVar1 + 0x2f2) = *(byte *)(lVar1 + 0x2f2) & 0xbf | bVar3 << 6;
      FUN_1423424e0();
    }
    plVar2 = *(longlong **)(param_1 + 0xb0);
    uVar4 = 0;
    uVar5 = (longlong)*(int *)(param_1 + 0xb8) & 0x1fffffffffffffff;
    if (plVar2 + *(int *)(param_1 + 0xb8) < plVar2) {
      uVar5 = uVar4;
    }
    if (uVar5 != 0) {
      do {
        lVar1 = *plVar2;
        if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x2f2) >> 6 & 1) != bVar3)) {
          *(byte *)(lVar1 + 0x2f2) = *(byte *)(lVar1 + 0x2f2) & 0xbf | bVar3 << 6;
          FUN_1423424e0();
        }
        plVar2 = plVar2 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar5);
    }
  }
  return;
}



// FUNCTION 1430874d0 FUN_1430874d0 body=257 status=ok
// SIG undefined FUN_1430874d0(void)

void FUN_1430874d0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (((*(byte *)(param_1 + 0x80) & 1) == 0) && ((*(byte *)(param_1 + 0x7e8) & 0x40) == 0)) {
    *(byte *)(param_1 + 0x7e8) = *(byte *)(param_1 + 0x7e8) & 0xdf;
    plVar1 = *(longlong **)(param_1 + 0x700);
    uVar4 = 0;
    uVar3 = (longlong)*(int *)(param_1 + 0x708) & 0x1fffffffffffffff;
    if (plVar1 + *(int *)(param_1 + 0x708) < plVar1) {
      uVar3 = uVar4;
    }
    uVar2 = uVar4;
    if (uVar3 != 0) {
      do {
        if ((*plVar1 != 0) && ((*(byte *)(*plVar1 + 0x58) & 2) != 0)) {
          FUN_1430835e0();
        }
        plVar1 = plVar1 + 1;
        uVar2 = uVar2 + 1;
      } while (uVar2 != uVar3);
    }
    plVar1 = *(longlong **)(param_1 + 0x710);
    uVar3 = (longlong)*(int *)(param_1 + 0x718) & 0x1fffffffffffffff;
    if (plVar1 + *(int *)(param_1 + 0x718) < plVar1) {
      uVar3 = uVar4;
    }
    if (uVar3 != 0) {
      do {
        if ((*plVar1 != 0) && ((*(byte *)(*plVar1 + 0x58) & 2) != 0)) {
          FUN_1430835e0();
        }
        plVar1 = plVar1 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar3);
    }
    return;
  }
  *(byte *)(param_1 + 0x7e8) = *(byte *)(param_1 + 0x7e8) | 0x20;
  return;
}



// FUNCTION 1430875e0 FUN_1430875e0 body=170 status=ok
// SIG undefined FUN_1430875e0(void)

void FUN_1430875e0(longlong param_1)

{
  bool bVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((((byte)*(undefined4 *)(param_1 + 0x58) & 0x28) == 0x28) &&
     ((((*(uint *)(param_1 + 8) >> 4 & 1) != 0 || (*(longlong *)(param_1 + 0x20) == 0)) ||
      ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x7e8) & 0x40) == 0)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  lVar3 = *(longlong *)(param_1 + 0x60);
  lVar4 = (longlong)*(int *)(param_1 + 0x68) * 0x60 + lVar3;
  for (; lVar3 != lVar4; lVar3 = lVar3 + 0x60) {
    if (*(longlong *)(lVar3 + 0x58) != 0) {
      if ((bVar1) ||
         (((*(uint *)(lVar3 + 8) >> 3 & 1) != 0 && ((*(byte *)(param_1 + 0x58) & 0x10) != 0)))) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      FUN_142397540(*(longlong *)(lVar3 + 0x58),uVar2,1);
    }
  }
  return;
}



// FUNCTION 143087690 FUN_143087690 body=198 status=ok
// SIG undefined FUN_143087690(void)

void FUN_143087690(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if ((((uVar1 & 0x10) == 0) && ((uVar1 & 8) != 0)) &&
     (((*(uint *)(param_1 + 8) >> 4 & 1) != 0 ||
      ((*(longlong *)(param_1 + 0x20) == 0 ||
       ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x7e8) & 0x40) == 0)))))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  if ((*(longlong *)(param_1 + 0x38) != 0) && ((uVar1 & 1) == 0)) {
    FUN_142397540(*(longlong *)(param_1 + 0x38),uVar3,1);
    plVar2 = *(longlong **)(param_1 + 0xb0);
    uVar4 = 0;
    uVar5 = (longlong)*(int *)(param_1 + 0xb8) & 0x1fffffffffffffff;
    if (plVar2 + *(int *)(param_1 + 0xb8) < plVar2) {
      uVar5 = uVar4;
    }
    if (uVar5 != 0) {
      do {
        if (*plVar2 != 0) {
          FUN_142397540(*plVar2,uVar3,1);
        }
        plVar2 = plVar2 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar5);
    }
  }
  return;
}



// FUNCTION 143087760 FUN_143087760 body=481 status=ok
// SIG undefined FUN_143087760(void)

undefined8 *
FUN_143087760(undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
             undefined1 param_5,float param_6,undefined8 param_7)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar5;
  undefined1 local_48 [24];
  undefined1 local_30 [40];
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  cVar2 = FUN_1407c3030(param_4);
  if (cVar2 == '\0') {
    if (param_3 != (longlong *)0x0) {
      lVar3 = FUN_1430bc880();
      if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        (**(code **)(*param_3 + 0x458))(param_3,local_48);
        cVar2 = FUN_142d52a00(local_48);
        if (cVar2 != '\0') {
          if (param_3[0x30] != 0) {
            param_6 = param_6 * *(float *)(param_3[0x30] + 0x68);
          }
          uVar4 = FUN_142d52a20(local_48);
          lVar3 = FArchive::operator<<(uVar4);
          FUN_142470da0(lVar3 + 0x40,param_2,param_5,param_6,param_7);
          return param_2;
        }
      }
    }
  }
  else {
    cVar2 = FUN_1424869d0(param_4);
    if (cVar2 == '\0') {
      uVar4 = param_4[1];
      *param_2 = *param_4;
      param_2[1] = uVar4;
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_4 + 2);
      return param_2;
    }
    if (param_3 != (longlong *)0x0) {
      lVar3 = FUN_1430bc880();
      if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        (**(code **)(*param_3 + 0x458))(param_3,local_30);
        cVar2 = FUN_142d52a00(local_30);
        if (cVar2 != '\0') {
          if (param_3[0x30] != 0) {
            param_6 = param_6 * *(float *)(param_3[0x30] + 0x68);
          }
          uVar4 = FUN_142d52a20(local_30);
          lVar3 = FArchive::operator<<(uVar4);
          FUN_14248a390(lVar3 + 0x40,param_2,param_4,param_5,CONCAT44(uVar5,param_6),param_7);
          return param_2;
        }
      }
    }
  }
  FUN_14246da50(param_2,0);
  return param_2;
}



// FUNCTION 143087950 FUN_143087950 body=1073 status=ok
// SIG undefined FUN_143087950(void)

void FUN_143087950(longlong *param_1,char param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  longlong *plVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  bool bVar22;
  longlong *local_60;
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  
  if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
    plVar5 = (longlong *)IStreamingManager::Get();
    cVar3 = (**(code **)(*plVar5 + 0x98))(plVar5);
    if (cVar3 != '\0') {
      cVar3 = *(char *)((longlong)param_1 + 0x44);
      uVar21 = 0;
      bVar22 = cVar3 != '\x02';
      uVar6 = IStreamingManager::Get();
      plVar5 = (longlong *)FVoicePacketImpl::GetSampleCounter(uVar6);
      if (cVar3 == '\0') {
        if (0 < (int)param_1[10]) {
          (**(code **)(*plVar5 + 0x108))(plVar5,param_1);
        }
        (**(code **)(*plVar5 + 0x100))(plVar5,param_1[7]);
        puVar13 = (undefined8 *)param_1[0x16];
        uVar10 = (longlong)(int)param_1[0x17] & 0x1fffffffffffffff;
        if (puVar13 + (int)param_1[0x17] < puVar13) {
          uVar10 = uVar21;
        }
        if (uVar10 != 0) {
          do {
            (**(code **)(*plVar5 + 0x100))(plVar5,*puVar13);
            uVar21 = uVar21 + 1;
            puVar13 = puVar13 + 1;
          } while (uVar21 != uVar10);
        }
      }
      else {
        if (((*(uint *)(param_1 + 0xb) & 0x200) == 0) || (param_2 != '\0')) {
          if (0 < (int)param_1[10]) {
            (**(code **)(*plVar5 + 0x108))(plVar5,param_1);
            *(undefined4 *)(param_1 + 10) = 0;
            if (0x7fffffff < *(uint *)((longlong)param_1 + 0x54)) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 9,0);
            }
          }
          local_60 = (longlong *)0x0;
          local_58 = 0;
          (**(code **)(*param_1 + 0x2d0))(param_1,&local_60);
          *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 0x200;
          uVar10 = local_58 & 0xffffffff;
          uVar20 = uVar21;
          plVar17 = local_60;
          uVar19 = uVar21;
          if (0 < (int)local_58) {
            do {
              lVar7 = plVar17[uVar20];
              iVar16 = (int)uVar10 + -1;
              for (lVar11 = (longlong)iVar16; iVar9 = (int)uVar10, (longlong)uVar20 < lVar11;
                  lVar11 = lVar11 + -1) {
                if (plVar17[lVar11] == lVar7) {
                  iVar4 = (iVar9 - iVar16) + -1;
                  if (0 < iVar4) {
                    iVar4 = 1;
                  }
                  if (iVar4 != 0) {
                    _guard_xfg_dispatch_icall_nop
                              (plVar17 + iVar16,plVar17 + (iVar9 - iVar4),(longlong)iVar4 << 3);
                    iVar9 = (int)local_58;
                  }
                  local_58 = CONCAT44(local_58._4_4_,iVar9 + -1);
                  TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&local_60);
                  uVar10 = local_58 & 0xffffffff;
                  plVar17 = local_60;
                }
                iVar16 = iVar16 + -1;
              }
              uVar18 = (int)uVar19 + 1;
              uVar20 = uVar20 + 1;
              uVar19 = (ulonglong)uVar18;
            } while ((int)uVar18 < iVar9);
          }
          local_50 = (longlong *)0x0;
          local_48 = 0;
          lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
          uVar1 = *(undefined4 *)(lVar7 + 0x1c0);
          plVar17 = local_60 + (int)local_58;
          plVar15 = local_50;
          lVar7 = local_48;
          for (plVar12 = local_60; local_48 = lVar7, plVar12 != plVar17; plVar12 = plVar12 + 1) {
            plVar2 = (longlong *)*plVar12;
            if (plVar2 != (longlong *)0x0) {
              local_48._4_4_ = (uint)((ulonglong)lVar7 >> 0x20);
              uVar18 = local_48._4_4_;
              local_48 = (ulonglong)local_48._4_4_ << 0x20;
              if ((lVar7 < 0) && (uVar18 != 0)) {
                TArray<void_*,FDefaultAllocator>::ResizeTo(&local_50,0);
              }
              (**(code **)(*plVar2 + 0x2b8))(plVar2,&local_50,3,0,uVar1,0);
              uVar10 = (ulonglong)((longlong)(local_50 + (int)local_48) + (7 - (longlong)local_50))
                       >> 3;
              if (local_50 + (int)local_48 < local_50) {
                uVar10 = uVar21;
              }
              plVar15 = local_50;
              if (uVar10 != 0) {
                plVar2 = param_1 + 9;
                plVar14 = local_50;
                uVar20 = uVar21;
                do {
                  plVar15 = (longlong *)*plVar2;
                  iVar16 = (int)param_1[10];
                  lVar7 = *plVar14;
                  for (plVar8 = plVar15; plVar8 != plVar15 + iVar16; plVar8 = plVar8 + 1) {
                    if (*plVar8 == lVar7) {
                      if ((int)((longlong)plVar8 - (longlong)plVar15 >> 3) != -1)
                      goto LAB_143087beb;
                      break;
                    }
                  }
                  *(int *)(param_1 + 10) = iVar16 + 1;
                  if (*(int *)((longlong)param_1 + 0x54) < iVar16 + 1) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2);
                  }
                  *(longlong *)((longlong)iVar16 * 8 + *plVar2) = lVar7;
LAB_143087beb:
                  plVar14 = plVar14 + 1;
                  uVar20 = uVar20 + 1;
                  plVar15 = local_50;
                } while (uVar20 != uVar10);
              }
            }
            lVar7 = local_48;
          }
          if (plVar15 != (longlong *)0x0) {
            FMemory::Free(plVar15);
          }
          if (local_60 != (longlong *)0x0) {
            FMemory::Free(local_60);
          }
        }
        if (0 < (int)param_1[10]) {
          (**(code **)(*plVar5 + 0xf8))(plVar5,param_1,param_1 + 9,0,bVar22);
        }
        (**(code **)(*plVar5 + 0xf0))(plVar5,param_1[7],0,bVar22);
        puVar13 = (undefined8 *)param_1[0x16];
        uVar10 = (longlong)(int)param_1[0x17] & 0x1fffffffffffffff;
        if (puVar13 + (int)param_1[0x17] < puVar13) {
          uVar10 = uVar21;
        }
        if (uVar10 != 0) {
          do {
            (**(code **)(*plVar5 + 0xf0))(plVar5,*puVar13,0,bVar22);
            uVar21 = uVar21 + 1;
            puVar13 = puVar13 + 1;
          } while (uVar21 != uVar10);
        }
      }
    }
  }
  return;
}



// FUNCTION 143087d90 FUN_143087d90 body=367 status=ok
// SIG undefined FUN_143087d90(void)

void FUN_143087d90(longlong *param_1,float param_2,undefined1 param_3)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  
  lVar6 = param_1[0x35];
  if (lVar6 == 0) {
    lVar6 = param_1[0x23];
    param_1[0x35] = lVar6;
    if (lVar6 == 0) {
      return;
    }
  }
  lVar3 = param_1[0x24];
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0();
  }
  if (*(float *)(param_1 + 0x48) < *(float *)(lVar3 + 0x790) ||
      *(float *)(param_1 + 0x48) == *(float *)(lVar3 + 0x790)) {
    if ((*(longlong *)(lVar6 + 0x7f8) == DAT_146b479c0) &&
       (plVar4 = (longlong *)
                 (**(code **)(*(longlong *)(lVar6 + 0x460) + 0x10))
                           ((longlong *)(lVar6 + 0x460),*(undefined1 *)(lVar6 + 0x690)),
       plVar4 == param_1)) {
      return;
    }
    fVar1 = *(float *)((longlong)param_1 + 0x23c);
    *(float *)((longlong)param_1 + 0x23c) = *(float *)((longlong)param_1 + 0x214) * param_2 + fVar1;
    iVar5 = (int)ROUND(((param_2 + param_2) * *(float *)((longlong)param_1 + 0x214) + fVar1 + fVar1)
                       - 0.5) >> 1;
    if (0 < iVar5) {
      if ((int)param_1[0x42] == 1) {
        (**(code **)(*param_1 + 0x4a0))(param_1,iVar5,1);
      }
      else if ((int)param_1[0x42] == 2) {
        (**(code **)(*param_1 + 0x4b0))(param_1,iVar5,0,0,param_3);
      }
      *(float *)((longlong)param_1 + 0x23c) = *(float *)((longlong)param_1 + 0x23c) - (float)iVar5;
    }
    cVar2 = UActorComponent::IsComponentTickEnabled(param_1);
    if ((cVar2 != '\0') && (cVar2 = (**(code **)(*param_1 + 0x520))(param_1), cVar2 == '\0')) {
      (**(code **)(*param_1 + 0x358))(param_1,0);
    }
  }
  return;
}



// FUNCTION 143087f00 FUN_143087f00 body=308 status=ok
// SIG undefined FUN_143087f00(void)

void FUN_143087f00(longlong param_1,undefined4 *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  uint uVar8;
  
  uVar8 = 0;
  if (0 < *(int *)(param_1 + 0x6a0)) {
    do {
      lVar3 = (**(code **)(*(longlong *)(param_1 + 0x460) + 0x10))(param_1 + 0x460,uVar8 & 0xff);
      if (lVar3 != 0) {
        if (param_3 == 0) {
LAB_143087fb1:
          plVar7 = (longlong *)(lVar3 + 400);
          iVar2 = TArray<TScriptDelegate<FWeakObjectPtr>,FDefaultAllocator>::Find(plVar7,param_2);
          if (iVar2 == -1) {
            iVar2 = *(int *)(lVar3 + 0x198);
            *(int *)(lVar3 + 0x198) = iVar2 + 1;
            if (*(int *)(lVar3 + 0x19c) < iVar2 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar2);
            }
            puVar6 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar7);
            *puVar6 = *param_2;
            puVar6[1] = param_2[1];
            *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(param_2 + 2);
          }
          TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar7);
        }
        else if ((int)(uVar8 & 0xff) < *(int *)(param_1 + 0x6a0)) {
          uVar5 = (ulonglong)(uVar8 & 0xff);
          lVar1 = *(longlong *)(param_1 + 0x698);
          if (*(longlong *)(lVar1 + 8 + uVar5 * 0x48) != 0) {
            plVar4 = *(longlong **)(lVar1 + 0x38 + uVar5 * 0x48);
            plVar7 = plVar4 + *(int *)(lVar1 + 0x40 + uVar5 * 0x48);
            for (; plVar4 != plVar7; plVar4 = plVar4 + 1) {
              if (*plVar4 == param_3) goto LAB_143087fb1;
            }
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < *(int *)(param_1 + 0x6a0));
  }
  return;
}



// FUNCTION 143088040 FUN_143088040 body=12 status=ok
// SIG undefined FUN_143088040(void)

void FUN_143088040(longlong param_1)

{
  FUN_1406a5aa0(param_1 + 0x4d0);
  return;
}



// FUNCTION 143088050 FUN_143088050 body=444 status=ok
// SIG undefined FUN_143088050(void)

void FUN_143088050(longlong param_1,undefined1 *param_2,undefined1 param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  
  if (*(longlong *)(param_2 + 8) != 0) {
    plVar6 = (longlong *)0x0;
    plVar4 = plVar6;
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      plVar4 = *(longlong **)(param_1 + 0x20);
    }
    lVar3 = (**(code **)(*plVar4 + 0x148))();
    if ((lVar3 != 0) && (iVar1 = FUN_1428cf800(lVar3), iVar1 != 1)) {
      iVar1 = *(int *)(param_1 + 0x68);
      iVar2 = iVar1 + 1;
      *(int *)(param_1 + 0x68) = iVar2;
      if (*(int *)(param_1 + 0x6c) < iVar2) {
        TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1 + 0x60);
      }
      lVar3 = (longlong)iVar1 * 0x60;
      _guard_xfg_dispatch_icall_nop((void *)(*(longlong *)(param_1 + 0x60) + lVar3),0,0x60);
      puVar5 = (undefined1 *)(lVar3 + *(longlong *)(param_1 + 0x60));
      *puVar5 = *param_2;
      *(undefined4 *)(puVar5 + 0x10) = *(undefined4 *)(param_2 + 0x28);
      puVar5[1] = param_2[0x2c];
      *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(param_2 + 0x30);
      *(undefined4 *)(puVar5 + 8) = *(undefined4 *)(param_2 + 0x38);
      puVar5[0xc] = param_3;
      *(undefined8 *)(puVar5 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(puVar5 + 0x20) = *(undefined8 *)(param_2 + 0x20);
      puVar5[0xd] = puVar5[0xd] ^
                    ((char)(*(uint *)(*(longlong *)(param_2 + 8) + 0x14c) >> 1) * '\x02' ^
                    puVar5[0xd]) & 2U;
      *(undefined4 *)(puVar5 + 0x44) = *(undefined4 *)(param_2 + 0x58);
      *(undefined8 *)(puVar5 + 0x28) = *(undefined8 *)(param_2 + 0x3c);
      *(undefined4 *)(puVar5 + 0x30) = *(undefined4 *)(param_2 + 0x44);
      *(undefined8 *)(puVar5 + 0x34) = *(undefined8 *)(param_2 + 0x48);
      *(undefined4 *)(puVar5 + 0x3c) = *(undefined4 *)(param_2 + 0x50);
      *(undefined4 *)(puVar5 + 0x40) = *(undefined4 *)(param_2 + 0x54);
      *(undefined8 *)(puVar5 + 0x48) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(puVar5 + 0x50) = *(undefined8 *)(param_2 + 0x10);
      if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
        plVar6 = *(longlong **)(param_1 + 0x20);
      }
      FUN_143071c70(puVar5,plVar6);
      if (((((*(byte *)(param_1 + 0x58) & 2) != 0) &&
           (FUN_143094cd0(param_1,puVar5), *(char *)(param_1 + 0x29) == '\0')) &&
          ((puVar5[0xd] & 1) == 0)) &&
         (((puVar5[8] & 1) != 0 &&
          ((*(uint *)(puVar5 + 0x44) == 0 ||
           ((*(uint *)(puVar5 + 0x44) >> (param_4 & 0x1f) & 1) != 0)))))) {
        FUN_14306f5d0(param_1,puVar5);
        if (*(longlong *)(puVar5 + 0x58) != 0) {
          FUN_1425fcab0(*(longlong *)(puVar5 + 0x58),0);
        }
      }
    }
  }
  return;
}



// FUNCTION 143088210 FUN_143088210 body=12 status=ok
// SIG undefined FUN_143088210(void)

void FUN_143088210(longlong param_1)

{
  FUN_1406a5aa0(param_1 + 0x4e0);
  return;
}



// FUNCTION 143088220 FUN_143088220 body=1000 status=ok
// SIG undefined FUN_143088220(void)

void FUN_143088220(longlong *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  undefined1 uVar17;
  longlong lVar18;
  longlong lVar19;
  byte bVar20;
  undefined1 *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong *plVar24;
  ulonglong uVar25;
  bool bVar26;
  longlong local_d8;
  undefined1 local_c8 [8];
  longlong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_9c;
  undefined4 local_98;
  byte local_94;
  uint local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  byte local_6c;
  
  uVar17 = *param_2;
  local_d8 = *(longlong *)(param_2 + 8);
  lVar13 = *(longlong *)(param_2 + 0x10);
  uVar14 = *(undefined8 *)(param_2 + 0x18);
  uVar15 = *(undefined8 *)(param_2 + 0x20);
  bVar4 = param_2[0x2c];
  uVar6 = *(undefined4 *)(param_2 + 0x28);
  uVar7 = *(undefined4 *)(param_2 + 0x30);
  uVar8 = *(uint *)(param_2 + 0x38);
  bVar5 = param_2[0x34];
  uVar2 = *(undefined8 *)(param_2 + 0x3c);
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x54);
  uVar9 = *(undefined4 *)(param_2 + 0x44);
  uVar10 = *(undefined4 *)(param_2 + 0x50);
  uVar11 = *(undefined4 *)(param_2 + 0x58);
  bVar20 = local_6c ^ (param_2[0x5c] ^ local_6c) & 0xf;
  local_c8[0] = uVar17;
  local_c0 = local_d8;
  local_b8 = lVar13;
  local_b0 = uVar14;
  local_a8 = uVar15;
  local_a0 = uVar6;
  local_9c = bVar4;
  local_98 = uVar7;
  local_94 = bVar5;
  local_90 = uVar8;
  local_8c = uVar2;
  local_84 = uVar9;
  local_80 = uVar3;
  local_78 = uVar10;
  local_74 = uVar1;
  local_70 = uVar11;
  local_6c = bVar20;
  if (lVar13 != 0) {
    local_c0 = local_d8;
    lVar18 = UDungeonEventListener::GetPrivateStaticClass();
    lVar19 = lVar13;
    do {
      if (lVar19 == lVar18) {
        lVar19 = FUN_142db9260(lVar13,param_1);
        local_c0 = local_d8;
        if (lVar19 != 0) {
          local_d8 = lVar19;
          local_c0 = lVar19;
        }
        break;
      }
      lVar19 = *(longlong *)(lVar19 + 0x30);
    } while (lVar19 != 0);
  }
  bVar26 = (bVar4 & 0xfd) != 0;
  if (bVar4 < 2) {
    bVar16 = true;
    if ((bVar26) && ((int)param_1[0xe3] == 0)) {
      iVar12 = (int)param_1[0x114];
      *(int *)(param_1 + 0x114) = iVar12 + 1;
      if (*(int *)((longlong)param_1 + 0x8a4) < iVar12 + 1) {
        TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1 + 0x113,iVar12);
      }
      puVar21 = (undefined1 *)((longlong)iVar12 * 0x60 + param_1[0x113]);
      *puVar21 = uVar17;
      *(longlong *)(puVar21 + 8) = local_d8;
      *(undefined4 *)(puVar21 + 0x28) = uVar6;
      *(longlong *)(puVar21 + 0x10) = lVar13;
      *(undefined8 *)(puVar21 + 0x18) = uVar14;
      *(undefined8 *)(puVar21 + 0x20) = uVar15;
      puVar21[0x2c] = bVar4;
      puVar21[0x5c] = puVar21[0x5c] & 0xf0;
      *(undefined4 *)(puVar21 + 0x30) = uVar7;
      *(undefined8 *)(puVar21 + 0x3c) = uVar2;
      *(undefined4 *)(puVar21 + 0x44) = uVar9;
      *(undefined8 *)(puVar21 + 0x48) = uVar3;
      *(undefined4 *)(puVar21 + 0x50) = uVar10;
      *(undefined4 *)(puVar21 + 0x58) = uVar11;
      *(undefined4 *)(puVar21 + 0x54) = uVar1;
      puVar21[0x5c] = puVar21[0x5c] | bVar20 & 0xf;
      puVar21[0x34] = bVar5;
      *(uint *)(puVar21 + 0x38) = uVar8;
    }
  }
  else {
    bVar16 = false;
  }
  if ((uVar8 >> 1 & 1) == 0) {
    uVar22 = 0;
    if (!bVar26) {
      plVar24 = (longlong *)param_1[0xe0];
      uVar25 = (longlong)(int)param_1[0xe1] & 0x1fffffffffffffff;
      if (plVar24 + (int)param_1[0xe1] < plVar24) {
        uVar25 = uVar22;
      }
      uVar23 = uVar22;
      if (uVar25 != 0) {
        do {
          lVar13 = *plVar24;
          if (lVar13 != 0) {
            uVar17 = (**(code **)(*param_1 + 0x858))(param_1);
            FUN_143088050(lVar13,local_c8,0xff,uVar17);
          }
          plVar24 = plVar24 + 1;
          uVar23 = uVar23 + 1;
        } while (uVar23 != uVar25);
      }
    }
    if (bVar16) {
      plVar24 = (longlong *)param_1[0xe2];
      uVar25 = (longlong)(int)param_1[0xe3] & 0x1fffffffffffffff;
      if (plVar24 + (int)param_1[0xe3] < plVar24) {
        uVar25 = uVar22;
      }
      if (uVar25 != 0) {
        do {
          lVar13 = *plVar24;
          if (lVar13 != 0) {
            uVar17 = (**(code **)(*param_1 + 0x858))(param_1);
            FUN_143088050(lVar13,local_c8,0xff,uVar17);
          }
          plVar24 = plVar24 + 1;
          uVar22 = uVar22 + 1;
        } while (uVar22 != uVar25);
      }
    }
  }
  else {
    if (((!bVar26) && ((int)(uint)bVar5 < (int)param_1[0xe1])) &&
       (lVar13 = *(longlong *)(param_1[0xe0] + (ulonglong)bVar5 * 8), lVar13 != 0)) {
      uVar17 = (**(code **)(*param_1 + 0x858))(param_1);
      FUN_143088050(lVar13,local_c8,'\x01' << (bVar5 & 0x1f),uVar17);
    }
    if (((bVar16) && ((int)(uint)bVar5 < (int)param_1[0xe3])) &&
       (lVar13 = *(longlong *)(param_1[0xe2] + (ulonglong)bVar5 * 8), lVar13 != 0)) {
      uVar17 = (**(code **)(*param_1 + 0x858))(param_1);
      FUN_143088050(lVar13,local_c8,'\x01' << (bVar5 & 0x1f),uVar17);
    }
  }
  return;
}



// FUNCTION 143088610 FUN_143088610 body=12 status=ok
// SIG undefined FUN_143088610(void)

void FUN_143088610(longlong param_1)

{
  FUN_1406a5aa0(param_1 + 0x4f0);
  return;
}



// FUNCTION 143088620 FUN_143088620 body=12 status=ok
// SIG undefined FUN_143088620(void)

void FUN_143088620(longlong param_1)

{
  FUN_1406a5aa0(param_1 + 0x4c0);
  return;
}



// FUNCTION 143088630 FUN_143088630 body=159 status=ok
// SIG undefined FUN_143088630(void)

void FUN_143088630(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 8) != 0) {
    iVar1 = *(int *)(param_1 + 0x730);
    *(int *)(param_1 + 0x730) = iVar1 + 1;
    if (*(int *)(param_1 + 0x734) < iVar1 + 1) {
      TArray<FGeometryCacheMeshData,FDefaultAllocator>::ResizeGrow(param_1 + 0x728,iVar1);
    }
    FUN_1430677e0((longlong)iVar1 * 0xa8 + *(longlong *)(param_1 + 0x728),param_2);
    if ((*(byte *)(param_1 + 0x94) & 0x18) == 0x10) {
      local_res10 = local_res10 & 0xffffffff00000000;
      FUN_14307b150(param_1,*(undefined8 *)(param_2 + 8),&local_res10);
    }
  }
  return;
}



// FUNCTION 1430886d0 FUN_1430886d0 body=12 status=ok
// SIG undefined FUN_1430886d0(void)

void FUN_1430886d0(longlong param_1)

{
  FUN_1406a5aa0(param_1 + 0x500);
  return;
}



// FUNCTION 1430886e0 FUN_1430886e0 body=40 status=ok
// SIG undefined FUN_1430886e0(void)

void FUN_1430886e0(longlong param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\0') {
    FUN_1406a5aa0(param_1 + 0x540);
    return;
  }
  if (param_3 == '\x01') {
    FUN_1406a5aa0(param_1 + 0x550);
    return;
  }
  return;
}



// FUNCTION 143088710 FUN_143088710 body=144 status=ok
// SIG undefined FUN_143088710(void)

void FUN_143088710(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  byte local_c;
  
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 1;
  local_34 = 0;
  local_30 = 10;
  local_28 = 0;
  local_18 = DAT_1468b5da8;
  local_20 = DAT_1468b5da0;
  local_14 = 0x3f800000;
  local_10 = 0;
  local_c = local_c & 0xf9 | 9;
  local_68[0] = param_2;
  local_60 = param_3;
  local_50 = param_4;
  FUN_143088220(0x3f800000,local_68);
  return;
}



// FUNCTION 1430887a0 FUN_1430887a0 body=116 status=ok
// SIG undefined FUN_1430887a0(void)

void FUN_1430887a0(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(longlong *)(param_2 + 8) != 0) {
    iVar1 = *(int *)(param_1 + 0x798);
    *(int *)(param_1 + 0x798) = iVar1 + 1;
    if (*(int *)(param_1 + 0x79c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x790),iVar1);
    }
    puVar2 = (undefined1 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x790));
    *puVar2 = *param_2;
    puVar2[1] = param_2[1];
    puVar2[2] = puVar2[2] ^ (param_2[2] ^ puVar2[2]) & 1;
    *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(param_2 + 8);
  }
  return;
}



// FUNCTION 143088820 FUN_143088820 body=12 status=ok
// SIG undefined FUN_143088820(void)

void FUN_143088820(longlong param_1)

{
  FUN_1406a5aa0(param_1 + 0x510);
  return;
}



// FUNCTION 143088830 FUN_143088830 body=239 status=ok
// SIG undefined FUN_143088830(void)

void FUN_143088830(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  bVar1 = *(byte *)(param_2 + 0x30);
  uVar5 = 0;
  if ((*(byte *)(param_2 + 0x30) & 0xfd) == 0) {
    plVar2 = *(longlong **)(param_1 + 0x700);
    uVar4 = (longlong)*(int *)(param_1 + 0x708) & 0x1fffffffffffffff;
    if (plVar2 + *(int *)(param_1 + 0x708) < plVar2) {
      uVar4 = uVar5;
    }
    uVar3 = uVar5;
    if (uVar4 != 0) {
      do {
        if (*plVar2 != 0) {
          FUN_143088920(*plVar2,param_2);
        }
        plVar2 = plVar2 + 1;
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar4);
    }
  }
  if (bVar1 < 2) {
    plVar2 = *(longlong **)(param_1 + 0x710);
    uVar4 = (longlong)*(int *)(param_1 + 0x718) & 0x1fffffffffffffff;
    if (plVar2 + *(int *)(param_1 + 0x718) < plVar2) {
      uVar4 = uVar5;
    }
    if (uVar4 != 0) {
      do {
        if (*plVar2 != 0) {
          FUN_143088920(*plVar2,param_2);
        }
        plVar2 = plVar2 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar4);
    }
  }
  return;
}



// FUNCTION 143088920 FUN_143088920 body=280 status=ok
// SIG undefined FUN_143088920(void)

void FUN_143088920(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((*param_2 != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      plVar4 = *(longlong **)(param_1 + 0x20);
    }
    else {
      plVar4 = (longlong *)0x0;
    }
    lVar3 = (**(code **)(*plVar4 + 0x148))();
    if (lVar3 != 0) {
      iVar1 = FUN_1428cf800(lVar3);
      if (iVar1 != 1) {
        plVar4 = (longlong *)(param_1 + 0xa0);
        iVar1 = *(int *)(param_1 + 0xa8);
        iVar2 = iVar1 + 1;
        *(int *)(param_1 + 0xa8) = iVar2;
        if (*(int *)(param_1 + 0xac) < iVar2) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar4);
        }
        lVar3 = *plVar4;
        lVar5 = (longlong)iVar1 * 0x40;
        *(undefined8 *)(lVar5 + lVar3) = 0;
        *(undefined8 *)(lVar5 + 8 + lVar3) = 0;
        *(undefined8 *)(lVar5 + 0x10 + lVar3) = 0;
        *(undefined8 *)(lVar5 + 0x18 + lVar3) = 0;
        *(undefined8 *)(lVar5 + 0x20 + lVar3) = 0;
        *(undefined8 *)(lVar5 + 0x28 + lVar3) = 0;
        *(undefined8 *)(lVar5 + 0x30 + lVar3) = 0;
        *(undefined8 *)(lVar5 + 0x38 + lVar3) = 0;
        lVar5 = *plVar4 + lVar5;
        *(longlong *)(lVar5 + 8) = *param_2;
        *(longlong *)(lVar5 + 0x10) = param_2[1];
        *(longlong *)(lVar5 + 0x18) = param_2[2];
        *(longlong *)(lVar5 + 0x20) = param_2[3];
        *(int *)(lVar5 + 0x28) = (int)param_2[4];
        *(undefined8 *)(lVar5 + 0x2c) = *(undefined8 *)((longlong)param_2 + 0x24);
        *(undefined4 *)(lVar5 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x2c);
        *(char *)(lVar5 + 0x38) = (char)param_2[6];
        FUN_14306fdc0(param_1);
      }
    }
  }
  return;
}



// FUNCTION 143088a40 FUN_143088a40 body=244 status=ok
// SIG undefined FUN_143088a40(void)

void FUN_143088a40(longlong param_1,undefined8 param_2,char param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 0x6a0);
  uVar6 = 0;
  if (0 < iVar8) {
    do {
      uVar7 = uVar6 & 0xff;
      if ((int)uVar7 < iVar8) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + uVar7 * 0x48);
        lVar1 = *(longlong *)(param_1 + 0x698) + uVar7 * 0x48;
        if (lVar4 != 0) {
          if (param_4 == 0) {
LAB_143088ad0:
            if (param_3 == '\0') {
              lVar4 = lVar4 + 0x1c0;
            }
            else if (param_3 == '\x01') {
              lVar4 = lVar4 + 0x1e0;
            }
            else {
              if (param_3 != '\x02') goto LAB_143088b04;
              lVar4 = lVar4 + 0x1d0;
            }
            FUN_1406a5aa0(lVar4,param_2);
          }
          else if ((int)uVar7 < iVar8) {
            plVar3 = *(longlong **)(lVar1 + 0x38);
            plVar2 = plVar3 + *(int *)(lVar1 + 0x40);
            for (; plVar3 != plVar2; plVar3 = plVar3 + 1) {
              if (*plVar3 == param_4) goto LAB_143088ad0;
            }
          }
        }
      }
LAB_143088b04:
      iVar8 = *(int *)(param_1 + 0x6a0);
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < iVar8);
  }
  return;
}



// FUNCTION 143088b40 FUN_143088b40 body=12 status=ok
// SIG undefined FUN_143088b40(void)

void FUN_143088b40(longlong param_1)

{
  FUN_1406a5aa0(param_1 + 0x530);
  return;
}



// FUNCTION 143088b50 FUN_143088b50 body=266 status=ok
// SIG undefined FUN_143088b50(void)

void FUN_143088b50(longlong param_1,undefined8 param_2,char param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 0x6a0);
  uVar6 = 0;
  if (0 < iVar8) {
    do {
      uVar7 = uVar6 & 0xff;
      if ((((int)uVar7 < iVar8) &&
          (lVar1 = *(longlong *)(param_1 + 0x698) + uVar7 * 0x48,
          *(longlong *)(*(longlong *)(param_1 + 0x698) + 8 + uVar7 * 0x48) != 0)) &&
         (lVar4 = *(longlong *)(lVar1 + 0x20), lVar4 != 0)) {
        if (param_4 == 0) {
LAB_143088be8:
          if (param_3 == '\0') {
            lVar4 = lVar4 + 0x280;
          }
          else if (param_3 == '\x01') {
            lVar4 = lVar4 + 0x250;
          }
          else if (param_3 == '\x02') {
            lVar4 = lVar4 + 0x260;
          }
          else {
            if (param_3 != '\x03') goto LAB_143088c2a;
            lVar4 = lVar4 + 0x270;
          }
          FUN_1406a5aa0(lVar4,param_2);
        }
        else if ((int)uVar7 < iVar8) {
          plVar3 = *(longlong **)(lVar1 + 0x38);
          plVar2 = plVar3 + *(int *)(lVar1 + 0x40);
          for (; plVar3 != plVar2; plVar3 = plVar3 + 1) {
            if (*plVar3 == param_4) goto LAB_143088be8;
          }
        }
      }
LAB_143088c2a:
      iVar8 = *(int *)(param_1 + 0x6a0);
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < iVar8);
  }
  return;
}



// FUNCTION 143088c60 FUN_143088c60 body=194 status=ok
// SIG undefined FUN_143088c60(void)

void FUN_143088c60(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  if (param_1[0x3f] != 0) {
    lVar2 = param_1[0x24];
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0();
    }
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    FUN_142880530(uVar3,param_1 + 0x3f);
    param_1[0x3f] = 0;
    FUN_14306aa50(param_1);
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
  iVar1 = FUN_14233f450(param_1);
  if (iVar1 == 3) {
    *(byte *)((longlong)param_1 + 0x201) =
         *(char *)((longlong)param_1 + 0x201) + 1U & 0xf | (char)param_1[0x40] << 4;
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  local_res8[0] = 1;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x34,local_res8);
  return;
}



// FUNCTION 143088d30 FUN_143088d30 body=160 status=ok
// SIG undefined FUN_143088d30(void)

ulonglong FUN_143088d30(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 local_28 [32];
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_1430bc880();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(param_2[2] + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(param_2[2] + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar4 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      (**(code **)(*param_2 + 0x458))(param_2,local_28);
      in_RAX = FUN_142d52a00(local_28);
      if ((char)in_RAX != '\0') {
        uVar3 = FUN_142d52a20(local_28);
        lVar2 = FArchive::operator<<(uVar3);
        uVar4 = FUN_14248ba60(lVar2 + 0x40,param_3);
        return uVar4;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143088dd0 FUN_143088dd0 body=53 status=ok
// SIG undefined FUN_143088dd0(void)

void FUN_143088dd0(longlong param_1,float *param_2)

{
  *param_2 = *param_2 - *(float *)(param_1 + 0x19c);
  param_2[1] = param_2[1] - *(float *)(param_1 + 0x1a0);
  param_2[2] = param_2[2] - *(float *)(param_1 + 0x1a4);
  return;
}



// FUNCTION 143088e10 FUN_143088e10 body=707 status=ok
// SIG undefined FUN_143088e10(void)

void FUN_143088e10(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 *puVar3;
  char cVar4;
  byte bVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  
  FUN_1430a3fc0();
  plVar1 = (longlong *)*param_2;
  plVar6 = (longlong *)*plVar1;
  if (plVar6 == (longlong *)0x0) {
    plVar1 = (longlong *)plVar1[1];
    cVar4 = (char)param_2[1];
    while (cVar4 != -1) {
      if (cVar4 == '\x02') {
        cVar4 = *(char *)(param_1 + 0x81);
        puVar3 = *(undefined1 **)plVar1[1];
        if ((undefined1 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
          (**(code **)(*plVar1 + 0x50))(plVar1,param_1 + 0x81,1);
        }
        else {
          *(undefined1 *)(param_1 + 0x81) = *puVar3;
          *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 1;
        }
        if ((((*(char *)(param_1 + 0x81) != cVar4) && (*(longlong *)(param_1 + -0x68) != 0)) &&
            (plVar6 = *(longlong **)(*(longlong *)(param_1 + -0x68) + 0x150),
            plVar6 != (longlong *)0x0)) && (cVar4 = (**(code **)(*plVar6 + 0x778))(), cVar4 == '\0')
           ) {
          bVar5 = *(byte *)(param_1 + 0x81) >> 4;
          *(byte *)(param_1 + 0x80) = bVar5;
          if (bVar5 == 1) {
            FUN_1430854d0(param_1 + -0x180);
          }
          else if (bVar5 == 2) {
            plVar6 = (longlong *)FUN_14309ec70(param_1 + -0x180);
            (**(code **)(*plVar6 + 0x9a0))(plVar6,2);
          }
        }
      }
      else {
        if (cVar4 != '\x03') {
          return;
        }
        puVar3 = *(undefined1 **)plVar1[1];
        if ((undefined1 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
          (**(code **)(*plVar1 + 0x50))(plVar1,param_1 + 0x82,1);
        }
        else {
          *(undefined1 *)(param_1 + 0x82) = *puVar3;
          *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 1;
        }
      }
      if ((char)param_2[1] != -1) {
        plVar6 = *(longlong **)(*param_2 + 8);
        puVar3 = *(undefined1 **)plVar6[1];
        if ((undefined1 *)((undefined8 *)plVar6[1])[1] < puVar3 + 1) {
          (**(code **)(*plVar6 + 0x50))(plVar6,param_2 + 1,1);
        }
        else {
          *(undefined1 *)(param_2 + 1) = *puVar3;
          *(longlong *)plVar6[1] = *(longlong *)plVar6[1] + 1;
        }
      }
      cVar4 = (char)param_2[1];
    }
  }
  else {
    lVar2 = plVar1[3];
    local_res8[0] = 2;
    if (*(char *)(param_1 + 0x81) != *(char *)(lVar2 + 0x10)) {
      plVar1 = (longlong *)plVar6[1];
      if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
        (**(code **)(*plVar6 + 0x50))(plVar6,local_res8,1);
      }
      else {
        local_res8[0] = *(undefined1 *)*plVar1;
        *plVar1 = *plVar1 + 1;
      }
      puVar3 = *(undefined1 **)plVar6[1];
      if ((undefined1 *)((undefined8 *)plVar6[1])[1] < puVar3 + 1) {
        (**(code **)(*plVar6 + 0x50))(plVar6,param_1 + 0x81,1);
      }
      else {
        *(undefined1 *)(param_1 + 0x81) = *puVar3;
        *(longlong *)plVar6[1] = *(longlong *)plVar6[1] + 1;
      }
    }
    local_res8[0] = 3;
    if (*(char *)(param_1 + 0x82) != *(char *)(lVar2 + 0x11)) {
      plVar1 = (longlong *)plVar6[1];
      if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
        (**(code **)(*plVar6 + 0x50))(plVar6,local_res8,1);
      }
      else {
        local_res8[0] = *(undefined1 *)*plVar1;
        *plVar1 = *plVar1 + 1;
      }
      puVar3 = *(undefined1 **)plVar6[1];
      if ((undefined1 *)((undefined8 *)plVar6[1])[1] < puVar3 + 1) {
        (**(code **)(*plVar6 + 0x50))(plVar6,param_1 + 0x82,1);
      }
      else {
        *(undefined1 *)(param_1 + 0x82) = *puVar3;
        *(longlong *)plVar6[1] = *(longlong *)plVar6[1] + 1;
      }
    }
  }
  return;
}



// FUNCTION 1430890e0 FUN_1430890e0 body=206 status=ok
// SIG undefined FUN_1430890e0(void)

void FUN_1430890e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x168);
    if (lVar1 != 0) {
      lVar3 = FUN_1429f11d0();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_14238f290(lVar1,param_2,0);
      }
    }
    lVar1 = *(longlong *)(param_2 + 0x168);
    if (lVar1 != 0) {
      lVar3 = FUN_1429f11d0();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_14238f290(lVar1,param_1,0);
      }
    }
  }
  return;
}



// FUNCTION 1430891b0 FUN_1430891b0 body=278 status=ok
// SIG undefined FUN_1430891b0(void)

void FUN_1430891b0(longlong param_1,undefined8 *param_2,undefined1 param_3,float param_4,
                  float param_5,undefined8 param_6)

{
  char cVar1;
  char cVar2;
  float *pfVar3;
  float *pfVar4;
  bool bVar5;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined1 local_30;
  int local_2c;
  
  pfVar3 = (float *)*param_2;
  local_2c = 1 << (*(byte *)(param_1 + 0x2e3) & 0x1f);
  pfVar4 = pfVar3 + (longlong)*(int *)(param_2 + 1) * 4;
  local_34 = 0;
  local_30 = 0;
  local_38[0] = param_3;
  do {
    if (pfVar3 == pfVar4) {
      return;
    }
    cVar1 = *(char *)((longlong)pfVar3 + 5);
    if ((byte)(cVar1 - 1U) < 2) {
      cVar2 = *(char *)(pfVar3 + 1);
      bVar5 = cVar1 == '\x02';
      if (cVar2 == '\0') {
        if ((param_4 < *pfVar3) && (*pfVar3 <= param_5)) goto LAB_143089287;
      }
      else if (cVar2 == '\x01') {
        if ((param_4 <= *pfVar3) && (*pfVar3 < param_5)) goto LAB_143089287;
      }
      else if (cVar2 == '\x02') {
        if ((*pfVar3 < param_4) && (param_5 <= *pfVar3)) goto LAB_143089287;
      }
      else if ((cVar2 == '\x03') && ((*pfVar3 <= param_4 && (param_5 < *pfVar3)))) {
LAB_143089287:
        bVar5 = cVar1 != '\x02';
      }
      FUN_14308b3c0(param_6,*(undefined8 *)(pfVar3 + 2),bVar5,local_38);
    }
    pfVar3 = pfVar3 + 4;
  } while( true );
}



// FUNCTION 1430892d0 FUN_1430892d0 body=97 status=ok
// SIG undefined FUN_1430892d0(void)

void FUN_1430892d0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_1412996f0();
  if ((plVar3 != (longlong *)0x0) && (cVar1 = (**(code **)(*plVar3 + 0x778))(plVar3), cVar1 == '\0')
     ) {
    if ((*(byte *)(param_1 + 0x4e0) & 0x80) == 0) {
      return;
    }
    FUN_1430894f0(param_1);
    return;
  }
  FUN_1430894f0(param_1);
  iVar2 = FUN_14233f450(param_1);
  if (2 < iVar2) {
    return;
  }
  FUN_1430bf9f0(param_1);
  return;
}



// FUNCTION 143089360 FUN_143089360 body=80 status=ok
// SIG undefined FUN_143089360(void)

void FUN_143089360(longlong *param_1)

{
  longlong lVar1;
  
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xffffff7f;
  param_1[0xa5] = 0;
  *(undefined1 *)((longlong)param_1 + 0x4ec) = 0;
  *(undefined4 *)((longlong)param_1 + 0x53c) = 0;
  lVar1 = (**(code **)(*param_1 + 0x618))();
  if (lVar1 != 0) {
    FUN_14305c930(lVar1,(longlong)param_1 + 0x94c);
    return;
  }
  return;
}



// FUNCTION 1430893b0 FUN_1430893b0 body=305 status=ok
// SIG undefined FUN_1430893b0(void)

void FUN_1430893b0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  plVar1 = param_1 + 0xa5;
  if (*plVar1 != 0) {
    lVar4 = param_1[0x24];
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0();
    }
    if (*(longlong *)(lVar4 + 400) == 0) {
      uVar5 = *(undefined8 *)(lVar4 + 0x3f8);
    }
    else {
      uVar5 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0x90);
    }
    FUN_142880530(uVar5,plVar1);
    *plVar1 = 0;
    (**(code **)(*param_1 + 0x598))(param_1);
  }
  cVar2 = (**(code **)(*param_1 + 0x408))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x4fc) = 0;
  iVar3 = FUN_14233f450(param_1);
  if (iVar3 == 3) {
    *(byte *)((longlong)param_1 + 0x4fd) =
         *(char *)((longlong)param_1 + 0x4fd) + 1U & 0xf | *(char *)((longlong)param_1 + 0x4fc) << 4
    ;
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  if (cVar2 != '\0') {
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfffffff7;
    if (((*(byte *)(param_1 + 0x9c) & 0x10) == 0) &&
       (cVar2 = (**(code **)(*param_1 + 0x540))(param_1), cVar2 != '\0')) {
      lVar4 = FUN_14309ed70(param_1);
      if (*(longlong *)(lVar4 + 0x7f8) != DAT_146b479b8) {
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x38,0);
      }
      cVar2 = FUN_1430a5800(param_1);
      if (cVar2 != '\0') {
        return;
      }
      FUN_143086460(param_1);
      return;
    }
    (**(code **)(*param_1 + 0x570))(param_1,0);
  }
  return;
}



// FUNCTION 1430894f0 FUN_1430894f0 body=901 status=ok
// SIG undefined FUN_1430894f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1430894f0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  code *local_b8;
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  fVar6 = (float)(**(code **)(*param_1 + 0x558))();
  *(undefined1 *)((longlong)param_1 + 0x4fc) = 1;
  iVar1 = FUN_14233f450(param_1);
  if (iVar1 == 3) {
    *(byte *)((longlong)param_1 + 0x4fd) =
         *(char *)((longlong)param_1 + 0x4fd) + 1U & 0xf | *(char *)((longlong)param_1 + 0x4fc) << 4
    ;
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  (**(code **)(*param_1 + 0x5a8))(param_1);
  local_e8 = (code *)&LAB_143068c10;
  fVar7 = fVar6 * *(float *)(param_1 + 0x5b);
  lVar2 = param_1[0x24];
  uStack_e0 = 0;
  if (fVar7 <= 0.01) {
    fVar7 = 0.01;
  }
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
  }
  if (*(longlong *)(lVar2 + 400) == 0) {
    uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
  }
  else {
    uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
  }
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_e8;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_e8._4_4_;
    *(undefined4 *)(plVar3 + 3) = uStack_e0;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_dc;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar2;
    *plVar3 = (longlong)&PTR_FUN_143f77bd0;
  }
  local_d8 = 0;
  local_d0 = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_d8);
  }
  FWeakObjectPtr::operator=(local_c8,0);
  local_f0 = 0xbf800000;
  local_f8 = 0;
  local_c0 = 0;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar4,param_1 + 0xa5,&local_d8,fVar7);
  if (local_78 != 0) {
    plVar5 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar5 = local_88;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar2 = FMemory::Realloc(plVar3,0,0);
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  uStack_e0 = 0;
  local_e8 = FUN_1430893b0;
  lVar2 = param_1[0x24];
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
  }
  if (*(longlong *)(lVar2 + 400) == 0) {
    uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
  }
  else {
    uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
  }
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_e8;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_e8._4_4_;
    *(undefined4 *)(plVar3 + 3) = uStack_e0;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_dc;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar2;
    *plVar3 = (longlong)&PTR_FUN_143f77bd0;
  }
  local_d8 = 0;
  local_d0 = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_d8);
  }
  FWeakObjectPtr::operator=(local_c8,0);
  local_f0 = 0xbf800000;
  local_c0 = 0;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
  local_f8 = 0;
  FUN_142880850(uVar4,param_1 + 0xa6,&local_d8,fVar6);
  if (local_78 != 0) {
    plVar5 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar5 = local_88;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar2 = FMemory::Realloc(plVar3,0,0);
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  (**(code **)(*param_1 + 0x570))(param_1,0);
  return;
}



// FUNCTION 143089880 FUN_143089880 body=97 status=ok
// SIG undefined FUN_143089880(void)

void FUN_143089880(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x6a0);
  if (iVar2 != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x698) + 0x38);
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 9;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x6a0) = 0;
  if (*(int *)(param_1 + 0x6a4) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              ((longlong *)(param_1 + 0x698),0);
  }
  return;
}



// FUNCTION 1430898f0 FUN_1430898f0 body=730 status=ok
// SIG undefined FUN_1430898f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * FUN_1430898f0(longlong param_1,void *param_2,undefined8 param_3,longlong *param_4)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  byte bVar13;
  uint uVar14;
  byte bVar15;
  longlong *plVar16;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60 [8];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  plVar16 = (longlong *)0x0;
  if (param_4 == (longlong *)0x0) {
LAB_14308995a:
    plVar8 = plVar16;
    if (param_4 != (longlong *)0x0) {
      uVar6 = FUN_1430a8880();
      plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_4,uVar6);
      plVar8 = (longlong *)0x0;
      if ((plVar7 != (longlong *)0x0) && (iVar4 = (**(code **)(*plVar7 + 0xe8))(plVar7), 0 < iVar4))
      {
        plVar8 = (longlong *)(**(code **)(*plVar7 + 0xf0))(plVar7,0);
      }
    }
  }
  else {
    lVar5 = FUN_1430b3b80();
    if ((*(int *)(param_4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    plVar8 = param_4;
    if (!bVar2) goto LAB_14308995a;
  }
  lVar5 = param_1 + 0x28;
  plVar9 = (longlong *)FWeakObjectPtr::Get(lVar5);
  plVar7 = plVar16;
  if (plVar9 == (longlong *)0x0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(param_1 + 0x30)) ||
       (local_68 = 0, *(longlong *)(param_1 + 0x38) == 0)) goto LAB_143089a64;
    lVar10 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar5,lVar10);
    if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x30) = DAT_1464b56f4;
    }
    plVar9 = (longlong *)FWeakObjectPtr::Get(lVar5);
    if (plVar9 == (longlong *)0x0) goto LAB_143089a64;
  }
  lVar5 = FUN_14171bfe0();
  if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    plVar11 = (longlong *)FUN_1428e7a40();
    plVar12 = plVar9;
    do {
      plVar7 = plVar9;
      if (plVar12 == plVar11) break;
      plVar12 = (longlong *)plVar12[6];
      plVar7 = plVar16;
    } while (plVar12 != (longlong *)0x0);
  }
LAB_143089a64:
  if ((plVar8 != (longlong *)0x0) && (plVar7 != (longlong *)0x0)) {
    uVar14 = *(uint *)(param_1 + 0x50);
    local_58 = 0;
    local_50 = 0;
    if (uVar14 == 0) {
      uVar14 = (uint)*(byte *)((longlong)plVar8 + 0x6dc);
    }
    if ((char)uVar14 == '\0') {
      lVar5 = (**(code **)(*plVar8 + 0x7f8))(plVar8,plVar7,(char)plVar8[0xd2]);
      if (lVar5 != 0) {
        FUN_142cb6180(local_60,lVar5);
      }
    }
    else {
      bVar15 = 0;
      bVar1 = *(byte *)(plVar8 + 0xd4);
      do {
        bVar13 = (byte)uVar14;
        if (bVar1 <= bVar15) break;
        if ((((uVar14 & 1) != 0) &&
            (lVar5 = (**(code **)(*plVar8 + 0x7f8))(plVar8,plVar7,bVar15), lVar5 != 0)) &&
           (cVar3 = FUN_142cbd8b0(local_60,lVar5), cVar3 == '\0')) {
          FUN_142cb6180(local_60,lVar5);
        }
        uVar14 = (uint)(bVar13 >> 1);
        bVar15 = bVar15 + 1;
      } while (1 < bVar13);
    }
    cVar3 = FAdvTextRun::AreAllCharactersVisible(local_60);
    lVar5 = local_58;
    if (cVar3 == '\0') {
      *(undefined8 *)((longlong)param_2 + 8) = 0;
      if (local_58 == 0) {
        _guard_xfg_dispatch_icall_nop(param_2,local_60,8);
      }
      if (*(longlong *)((longlong)param_2 + 8) != 0) {
        FMemory::Free();
        lVar5 = local_58;
      }
      *(longlong *)((longlong)param_2 + 8) = lVar5;
      *(undefined4 *)((longlong)param_2 + 0x10) = (undefined4)local_50;
      *(undefined4 *)((longlong)param_2 + 0x14) = local_50._4_4_;
      return param_2;
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
  }
  FUN_142cb2580(param_2,plVar8);
  return param_2;
}



// FUNCTION 143089bd0 FUN_143089bd0 body=42 status=ok
// SIG undefined FUN_143089bd0(void)

void FUN_143089bd0(longlong param_1)

{
  FUN_143093a90();
  if (*(byte *)(param_1 + 0x128) < 3) {
    FUN_1430b4750(param_1);
    return;
  }
  return;
}



// FUNCTION 143089c00 FUN_143089c00 body=201 status=ok
// SIG undefined FUN_143089c00(void)

void FUN_143089c00(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar3 = FUN_142a0cc80();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if ((*(int *)(param_1 + 200) < 1) || (*(int *)(param_1 + 200) != *(int *)(lVar1 + 0x870))) {
        *(undefined4 *)(param_1 + 200) = 0;
        if (*(int *)(param_1 + 0xcc) != 0) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo();
        }
      }
      else {
        plVar4 = (longlong *)(param_1 + 0xc0);
        plVar5 = (longlong *)(lVar1 + 0x868);
        if (plVar5 != plVar4) {
          if (*plVar5 != 0) {
            FMemory::Free();
          }
          *plVar5 = *plVar4;
          *plVar4 = 0;
          *(undefined4 *)(lVar1 + 0x870) = *(undefined4 *)(param_1 + 200);
          *(undefined4 *)(lVar1 + 0x874) = *(undefined4 *)(param_1 + 0xcc);
          *(undefined8 *)(param_1 + 200) = 0;
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 143089cd0 FUN_143089cd0 body=655 status=ok
// SIG undefined FUN_143089cd0(void)

undefined8 FUN_143089cd0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  
  (**(code **)(*param_2 + 0x30))(param_2,param_1);
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 8);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x10);
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x18);
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x20);
  FUN_1406da970(param_2,param_1 + 0x28);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x34,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x34,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x34) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x38,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x38,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x3c,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x3c,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x3c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x40,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x40,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x44,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x44,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x44) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x48,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x48,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,param_1 + 0x168);
  (**(code **)(*plVar2 + 0x40))(plVar2,param_1 + 0x170);
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,param_1 + 0x178);
  (**(code **)(*plVar2 + 0x40))(plVar2,param_1 + 0x180);
  FUN_1424ab8a0(param_1 + 0x58,param_2);
  return 1;
}



// FUNCTION 143089f60 FUN_143089f60 body=26 status=ok
// SIG undefined FUN_143089f60(void)

undefined1 FUN_143089f60(undefined8 param_1,undefined8 param_2)

{
  FArchive::UsingCustomVersion(param_2,&DAT_14678c810);
  return 0;
}



// FUNCTION 143089f80 FUN_143089f80 body=258 status=ok
// SIG undefined FUN_143089f80(void)

void FUN_143089f80(void)

{
  FUN_14306aba0();
  return;
}



// FUNCTION 14308a110 FUN_14308a110 body=121 status=ok
// SIG undefined FUN_14308a110(void)

void FUN_14308a110(longlong *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_14233f450();
  if ((iVar2 == 3) && (*(char *)((longlong)param_1 + 0x4fc) != '\x01')) {
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x80;
    if (0.0 < *(float *)(param_1 + 0xa3)) {
      *(char *)((longlong)param_1 + 0x4ec) = (char)param_1[0x59] + -1;
      return;
    }
    *(char *)((longlong)param_1 + 0x4ec) = (char)param_1[0x59];
    cVar1 = (**(code **)(*param_1 + 0x408))(param_1);
    if ((cVar1 != '\0') || ((*(byte *)(param_1 + 0x9c) & 8) != 0)) {
      FUN_1430894f0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14308a1a0 FUN_14308a1a0 body=114 status=ok
// SIG undefined FUN_14308a1a0(void)

void FUN_14308a1a0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x1a8);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x118);
    *(longlong **)(param_1 + 0x1a8) = plVar3;
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  lVar2 = (**(code **)(*plVar3 + 0x950))(plVar3);
  if (lVar2 != 0) {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x950))(plVar3);
    cVar1 = (**(code **)(*plVar3 + 0x778))(plVar3);
    if (cVar1 == '\0') {
      FUN_1430bb950(param_1,*(undefined4 *)(param_1 + 0x1c0));
    }
  }
  return;
}



// FUNCTION 14308a270 FUN_14308a270 body=610 status=ok
// SIG undefined FUN_14308a270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14308a270(longlong *param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (param_1[0xff] == DAT_146b479d0) {
    *(char *)(param_1 + 0xdc) = param_3 + '\x01';
  }
  else {
    (**(code **)(*param_1 + 0xa00))(param_1,param_2,param_3);
    if (param_1[0xff] != DAT_146b479c0) {
      cVar1 = (**(code **)(*param_1 + 0x7c8))(param_1);
      if ((((cVar1 != '\0') && (param_1[0x94] != 0)) && (param_1[0x95] != 0)) &&
         (cVar1 = (**(code **)(*(longlong *)param_1[0x95] + 0x38))(), cVar1 == '\0')) {
        local_a8 = FUN_143093740;
        *(char *)(param_1 + 0xdc) = param_3 + '\x01';
        uStack_a0 = 0;
        lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
        if (*(longlong *)(lVar2 + 400) == 0) {
          uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
        }
        else {
          uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
        }
        plVar3 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar3 != (longlong *)0x0) {
          *plVar3 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar3 + 1,param_1);
          *(undefined4 *)(plVar3 + 2) = (undefined4)local_a8;
          *(undefined4 *)((longlong)plVar3 + 0x14) = local_a8._4_4_;
          *(undefined4 *)(plVar3 + 3) = uStack_a0;
          *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_9c;
          lVar2 = FDelegateHandle::GenerateNewID();
          plVar3[5] = lVar2;
          *plVar3 = (longlong)&PTR_FUN_143f77bd0;
        }
        local_98 = 0;
        local_90 = 0;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x30))(plVar3,&local_98);
        }
        FWeakObjectPtr::operator=(local_88,0);
        local_b0 = 0xbf800000;
        local_b8 = 1;
        local_80 = 0;
        local_48 = (longlong *)0x0;
        local_38 = 0;
        local_78 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar4,param_1 + 0xdd,&local_98,0x3dcccccd);
        if (local_38 != 0) {
          plVar5 = local_68;
          if (local_48 != (longlong *)0x0) {
            plVar5 = local_48;
          }
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x10))(plVar5,0);
          }
        }
        if (local_48 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
        if (plVar3 == (longlong *)0x0) {
          return;
        }
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        lVar2 = FMemory::Realloc(plVar3,0,0);
        if (lVar2 == 0) {
          return;
        }
        FMemory::Free(lVar2);
        return;
      }
      FUN_1430b33c0(param_1);
    }
  }
  return;
}



// FUNCTION 14308a500 FUN_14308a500 body=329 status=ok
// SIG undefined FUN_14308a500(void)

void FUN_14308a500(longlong *param_1,byte param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong local_res8;
  
  if ((int)(uint)param_2 < (int)param_1[0xd7]) {
    plVar4 = (longlong *)param_1[0xd6];
    if ((longlong *)param_1[0xd6] == (longlong *)0x0) {
      plVar4 = param_1 + 0xd5;
    }
    cVar3 = *(char *)((longlong)plVar4 + (ulonglong)param_2);
  }
  else {
    cVar3 = -1;
  }
  if (cVar3 == (char)param_1[0xd2]) {
    lVar1 = param_1[0xff];
    if (lVar1 == DAT_146b479c8) {
      *(byte *)((longlong)param_1 + 0x679) = *(byte *)((longlong)param_1 + 0x679) & 0xfe;
      *(byte *)((longlong)param_1 + 0x679) =
           *(byte *)((longlong)param_1 + 0x679) | param_3 == *(char *)((longlong)param_1 + 0x67a);
      if (DAT_146b479a0 != lVar1) {
        *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) | 1;
        (**(code **)(*param_1 + 0xac8))(param_1,&DAT_146b479a0);
        lVar2 = param_1[0xff];
        *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) & 0xfe;
        if (lVar2 == lVar1) {
          param_1[0xff] = DAT_146b479a0;
          local_res8 = lVar2;
          (**(code **)(*param_1 + 0xac0))(param_1,&local_res8);
        }
      }
    }
    if ((char)param_1[0xd2] != param_3) {
      *(byte *)((longlong)param_1 + 0x679) = *(byte *)((longlong)param_1 + 0x679) | 1;
      *(byte *)(param_1 + 0xcf) = param_2;
      *(char *)((longlong)param_1 + 0x67a) = param_3;
      FUN_1430910d0(param_1);
      return;
    }
  }
  else if ((int)(uint)param_2 < (int)param_1[0xd7]) {
    plVar4 = (longlong *)param_1[0xd6];
    if ((longlong *)param_1[0xd6] == (longlong *)0x0) {
      plVar4 = param_1 + 0xd5;
    }
    *(char *)((longlong)plVar4 + (ulonglong)param_2) = param_3;
  }
  return;
}



// FUNCTION 14308a6b0 FUN_14308a6b0 body=179 status=ok
// SIG undefined FUN_14308a6b0(void)

void FUN_14308a6b0(longlong param_1,byte param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char local_res10 [8];
  
  bVar1 = *(byte *)(param_1 + 0x80) & 1;
  if (param_2 != bVar1) {
    if (((*(byte *)(param_1 + 0x7e8) & 0x40) == 0) && (bVar1 == 0)) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    FUN_14223c560();
    bVar1 = *(byte *)(param_1 + 0x7e8) & 0x40;
    if ((bVar1 == 0) && ((*(byte *)(param_1 + 0x80) & 1) == 0)) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    if ((((*(char *)(param_1 + 0x720) != '\0') && ((*(byte *)(param_1 + 0x80) & 1) == 0)) &&
        (bVar1 == 0)) && ((*(byte *)(param_1 + 0x7e8) & 0x20) != 0)) {
      FUN_1430874d0(param_1);
    }
    FUN_143087200(param_1);
    if (cVar2 != cVar3) {
      local_res10[0] = cVar3;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x570,local_res10);
    }
  }
  return;
}



// FUNCTION 14308a770 FUN_14308a770 body=18 status=ok
// SIG undefined FUN_14308a770(void)

void FUN_14308a770(longlong param_1,char param_2)

{
  *(char *)(param_1 + 0x7b9) = param_2;
  if (param_2 != '\0') {
    FUN_14308ad00(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14308a790 FUN_14308a790 body=169 status=ok
// SIG undefined FUN_14308a790(void)

void FUN_14308a790(undefined8 param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *local_18;
  undefined8 local_10;
  
  uVar3 = 0;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_143066820(param_1,&local_18,0);
  plVar2 = local_18;
  uVar4 = (ulonglong)((longlong)(local_18 + (int)local_10) + (7 - (longlong)local_18)) >> 3;
  if (local_18 + (int)local_10 < local_18) {
    uVar4 = uVar3;
  }
  plVar5 = local_18;
  if (uVar4 != 0) {
    do {
      plVar1 = (longlong *)*plVar5;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x400))(plVar1,param_2);
      }
      plVar5 = plVar5 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar4);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  return;
}



// FUNCTION 14308a840 FUN_14308a840 body=86 status=ok
// SIG undefined FUN_14308a840(void)

void FUN_14308a840(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  *(byte *)(param_1 + 0x1a4) = *(byte *)(param_1 + 0x1a4) & 0xfe;
  *(byte *)(param_1 + 0x1a4) = *(byte *)(param_1 + 0x1a4) | param_2;
  if (param_2 == 0) {
    if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar1 = FUN_1423407b0(), lVar1 == 0)) {
      return;
    }
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
    *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar1 + 0x790);
  }
  return;
}



// FUNCTION 14308a8a0 FUN_14308a8a0 body=1112 status=ok
// SIG undefined FUN_14308a8a0(void)

void FUN_14308a8a0(longlong *param_1,byte param_2)

{
  wchar_t *pwVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  undefined4 uVar9;
  uint uVar10;
  float fVar11;
  undefined8 local_res8;
  longlong local_res18 [2];
  undefined8 local_38;
  longlong local_30;
  code *local_28;
  undefined4 uStack_20;
  
  *(byte *)((longlong)param_1 + 0x1a4) = *(byte *)((longlong)param_1 + 0x1a4) & 0xfe;
  *(byte *)((longlong)param_1 + 0x1a4) = *(byte *)((longlong)param_1 + 0x1a4) | param_2;
  if ((param_2 == 0) && ((param_1[0x24] != 0 || (lVar5 = FUN_1423407b0(), lVar5 != 0)))) {
    lVar5 = param_1[0x24];
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_1);
    }
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(lVar5 + 0x790);
  }
  iVar3 = FUN_14233f450(param_1);
  if (iVar3 == 3) {
    if (param_2 == 0) {
      iVar3 = *(int *)((longlong)param_1 + 0xc);
      pwVar8 = (wchar_t *)0x0;
      if (iVar3 < (int)DAT_1469e91c4) {
        uVar10 = iVar3 >> 0x1f & 0xffff;
        uVar4 = iVar3 + uVar10;
        pwVar8 = (wchar_t *)
                 (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                 (longlong)(int)((uVar4 & 0xffff) - uVar10) * 0x18);
      }
      if ((*(uint *)(pwVar8 + 4) >> 0x1d & 1) == 0) {
        FWeakObjectPtr::operator=(&local_38,0);
        local_30 = 0;
        pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMaxLoadedAmmoChanged",L"::");
        pwVar8 = (wchar_t *)0x0;
        while (pwVar1 = pwVar6, pwVar1 != (wchar_t *)0x0) {
          pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
          pwVar8 = pwVar1;
        }
        FName::FName(local_res18,pwVar8 + 2,1);
        FWeakObjectPtr::operator=(&local_38,param_1);
        local_30 = local_res18[0];
        local_res8 = 0;
        if ((local_res18[0] != 0) && (lVar5 = FWeakObjectPtr::Get(&local_38), lVar5 != 0)) {
          UObject::FindFunction(lVar5,local_30);
        }
        FUN_1424918f0(param_1 + 0x36,&local_38);
      }
      cVar2 = FUN_142d52a00(param_1 + 0x44);
      if (cVar2 != '\0') {
        uVar7 = FUN_142d62250(param_1[0x45],param_1[0x3a]);
        FUN_140483870(uVar7,param_1);
      }
      if (param_1[0x23] == 0) {
        uVar9 = 0xffffffff;
      }
      else {
        uVar9 = *(undefined4 *)(param_1[0x23] + 0xc);
      }
      *(byte *)((longlong)param_1 + 0x254) = *(byte *)((longlong)param_1 + 0x254) & 0xfb;
      *(int *)(param_1 + 0x49) = (int)param_1[0x38];
      *(undefined4 *)((longlong)param_1 + 0x24c) = *(undefined4 *)((longlong)param_1 + 0x1b4);
      *(undefined4 *)((longlong)param_1 + 0x244) = uVar9;
    }
    else {
      if ((param_1[0x24] != 0) || (lVar5 = FUN_1423407b0(param_1), lVar5 != 0)) {
        FWeakObjectPtr::operator=(&local_38,0);
        local_30 = 0;
        pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMaxLoadedAmmoChanged",L"::");
        pwVar8 = (wchar_t *)0x0;
        while (pwVar1 = pwVar6, pwVar1 != (wchar_t *)0x0) {
          pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
          pwVar8 = pwVar1;
        }
        FName::FName(local_res18,pwVar8 + 2,1);
        FWeakObjectPtr::operator=(&local_38,param_1);
        local_30 = local_res18[0];
        local_res8 = 0;
        if ((local_res18[0] != 0) && (lVar5 = FWeakObjectPtr::Get(&local_38), lVar5 != 0)) {
          UObject::FindFunction(lVar5,local_30);
        }
        FUN_142475720(param_1 + 0x36,&local_38);
        cVar2 = FUN_142d52a00(param_1 + 0x44);
        if (cVar2 != '\0') {
          uVar7 = FUN_142d62250(param_1[0x45],param_1[0x3a]);
          FUN_140483870(uVar7,param_1);
          local_28 = FUN_143082a50;
          uStack_20 = 0;
          uVar7 = FUN_142d62250(param_1[0x45],param_1[0x3a]);
          FUN_1430663f0(uVar7,&local_res8,param_1,&local_28);
        }
        if (((0.0 < *(float *)(param_1 + 0x34)) &&
            (cVar2 = (**(code **)(*param_1 + 0x508))(param_1), cVar2 != '\0')) &&
           (cVar2 = (**(code **)(*param_1 + 0x510))(param_1), cVar2 != '\0')) {
          lVar5 = param_1[0x24];
          if (lVar5 == 0) {
            lVar5 = FUN_1423407b0(param_1);
          }
          fVar11 = *(float *)(param_1 + 0x34);
          if (fVar11 < *(float *)(lVar5 + 0x790)) {
            lVar5 = param_1[0x24];
            if (lVar5 == 0) {
              lVar5 = FUN_1423407b0(param_1);
              fVar11 = *(float *)(param_1 + 0x34);
            }
            FUN_143087d90(param_1,*(float *)(lVar5 + 0x790) - fVar11,0);
            *(int *)(param_1 + 0x49) = (int)param_1[0x38];
          }
        }
        if (((int)param_1[0x49] == *(int *)((longlong)param_1 + 0x24c)) &&
           (iVar3 = (**(code **)(*param_1 + 0x418))(param_1), 0 < iVar3)) {
          *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)((longlong)param_1 + 0x1b4);
        }
        (**(code **)(*param_1 + 0x408))(param_1,1);
      }
LAB_14308ac75:
      cVar2 = (**(code **)(*param_1 + 0x520))(param_1);
      if (cVar2 != '\0') {
        uVar7 = 1;
        goto LAB_14308acdf;
      }
    }
  }
  else {
    if (param_2 != 0) {
      if ((*(byte *)((longlong)param_1 + 0x254) & 1) == 0) {
        FUN_1430bcdb0(param_1);
      }
      goto LAB_14308ac75;
    }
    if (param_1[0x4b] != 0) {
      lVar5 = param_1[0x24];
      if ((lVar5 != 0) || (lVar5 = FUN_1423407b0(param_1), lVar5 != 0)) {
        if (*(longlong *)(lVar5 + 400) == 0) {
          uVar7 = *(undefined8 *)(lVar5 + 0x3f8);
        }
        else {
          uVar7 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
        }
        FUN_142880530(uVar7,param_1 + 0x4b);
      }
      param_1[0x4b] = 0;
    }
  }
  uVar7 = 0;
LAB_14308acdf:
                    /* WARNING: Could not recover jumptable at 0x00014308acf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x358))(param_1,uVar7);
  return;
}



// FUNCTION 14308ad00 FUN_14308ad00 body=214 status=ok
// SIG undefined FUN_14308ad00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14308ad00(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_118 [32];
  longlong local_f8 [24];
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  uVar4 = 0;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  (**(code **)(*param_1 + 0x908))(param_1,0,local_f8);
  plVar2 = local_f8;
  if (local_38 != (longlong *)0x0) {
    plVar2 = local_38;
  }
  uVar3 = (longlong)(int)local_30 & 0x1fffffffffffffff;
  if (plVar2 + (int)local_30 < plVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      plVar1 = (longlong *)*plVar2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x358))(plVar1,param_2);
      }
      plVar2 = plVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar3);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14308ade0 FUN_14308ade0 body=187 status=ok
// SIG undefined FUN_14308ade0(void)

undefined8 FUN_14308ade0(undefined8 param_1,longlong *param_2,float param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_38 [48];
  
  if (param_2 != (longlong *)0x0) {
    lVar3 = FUN_1430bc880();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*param_2 + 0x458))(param_2,local_38);
      cVar2 = FUN_142d52a00(local_38);
      if (cVar2 != '\0') {
        if (param_2[0x30] != 0) {
          param_3 = param_3 * *(float *)(param_2[0x30] + 0x68);
        }
        uVar4 = FUN_142d52a20(local_38);
        lVar3 = FArchive::operator<<(uVar4);
        FUN_14246fd50(lVar3 + 0x40,param_3);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14308aea0 FUN_14308aea0 body=257 status=ok
// SIG undefined FUN_14308aea0(void)

void FUN_14308aea0(longlong param_1,undefined8 param_2,undefined1 param_3,byte *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  bVar1 = *param_4;
  uVar3 = 0;
  if ((bVar1 == 0) || (bVar1 == 2)) {
    puVar4 = *(undefined8 **)(param_1 + 0x700);
    uVar5 = (longlong)*(int *)(param_1 + 0x708) & 0x1fffffffffffffff;
    if (puVar4 + *(int *)(param_1 + 0x708) < puVar4) {
      uVar5 = uVar3;
    }
    uVar2 = uVar3;
    if (uVar5 != 0) {
      do {
        (**(code **)(*(longlong *)*puVar4 + 0x2c8))((longlong *)*puVar4,param_2,param_3);
        uVar2 = uVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar2 != uVar5);
      bVar1 = *param_4;
    }
  }
  if (bVar1 < 2) {
    puVar4 = *(undefined8 **)(param_1 + 0x710);
    uVar5 = (longlong)*(int *)(param_1 + 0x718) & 0x1fffffffffffffff;
    if (puVar4 + *(int *)(param_1 + 0x718) < puVar4) {
      uVar5 = uVar3;
    }
    if (uVar5 != 0) {
      do {
        (**(code **)(*(longlong *)*puVar4 + 0x2c8))((longlong *)*puVar4,param_2,param_3);
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar3 != uVar5);
    }
  }
  return;
}



// FUNCTION 14308afb0 FUN_14308afb0 body=140 status=ok
// SIG undefined FUN_14308afb0(void)

void FUN_14308afb0(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar3 = FUN_142a0cc80();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (param_3 != '\0') {
        FUN_1423bfda0();
        return;
      }
      FUN_1423b2f40(lVar1,param_2,0);
    }
  }
  return;
}



// FUNCTION 14308b040 FUN_14308b040 body=7 status=ok
// SIG undefined FUN_14308b040(void)

void FUN_14308b040(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x501) = param_2;
  return;
}



// FUNCTION 14308b050 FUN_14308b050 body=345 status=ok
// SIG undefined FUN_14308b050(void)

void FUN_14308b050(longlong param_1,byte param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x7f8) == DAT_146b47938) {
    *(byte *)(param_1 + 0x690) = param_2;
    uVar2 = FUN_143078bf0();
    *(undefined8 *)(param_1 + 0x470) = uVar2;
    FUN_143086bb0(param_1);
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x690);
  if (param_2 != bVar1) {
    if ((*(int *)(param_1 + 0x6a0) <= (int)(uint)bVar1) ||
       (plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)bVar1 * 0x48),
       plVar5 == (longlong *)0x0)) {
      plVar5 = (longlong *)0x0;
    }
    plVar3 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x460) + 0x10))(param_1 + 0x460,bVar1)
    ;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x4a0))(plVar5);
    }
    *(byte *)(param_1 + 0x690) = param_2;
    uVar2 = FUN_143078bf0(param_1,param_2);
    *(undefined8 *)(param_1 + 0x470) = uVar2;
    if ((*(int *)(param_1 + 0x6a0) <= (int)(uint)*(byte *)(param_1 + 0x690)) ||
       (plVar5 = *(longlong **)
                  (*(longlong *)(param_1 + 0x698) + 8 + (ulonglong)*(byte *)(param_1 + 0x690) * 0x48
                  ), plVar5 == (longlong *)0x0)) {
      plVar5 = (longlong *)0x0;
    }
    plVar4 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x460) + 0x10))(param_1 + 0x460);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x498))(plVar5,bVar1);
    }
    if ((plVar4 != (longlong *)0x0) && (plVar4 != plVar3)) {
      (**(code **)(*plVar4 + 0x408))(plVar4,0);
    }
    FUN_143086bb0(param_1);
  }
  return;
}



// FUNCTION 14308b1c0 FUN_14308b1c0 body=286 status=ok
// SIG undefined FUN_14308b1c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14308b1c0(longlong param_1,undefined4 param_2,byte param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_138 [32];
  ulonglong local_118;
  undefined1 local_110;
  int local_10c;
  undefined8 local_108 [24];
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar1 = *(longlong *)(param_1 + 0x1d8);
  uVar3 = 0;
  if (lVar1 != 0) {
    local_118 = (ulonglong)param_3;
    local_10c = 1 << (*(byte *)(param_1 + 0x2e3) & 0x1f);
    local_110 = 0;
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1430786d0(param_4,&local_118,local_108);
    puVar2 = local_108;
    if (local_48 != (undefined8 *)0x0) {
      puVar2 = local_48;
    }
    uVar4 = (longlong)(int)local_40 & 0x1fffffffffffffff;
    if (puVar2 + (int)local_40 < puVar2) {
      uVar4 = uVar3;
    }
    if (uVar4 != 0) {
      do {
        FUN_14260f0c0(*puVar2,lVar1,param_2);
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (uVar3 != uVar4);
    }
    if (local_48 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14308b2e0 FUN_14308b2e0 body=223 status=ok
// SIG undefined FUN_14308b2e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14308b2e0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8 [24];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  uVar1 = 0;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1430786d0(param_1,param_4,local_f8);
  puVar2 = local_f8;
  if (local_38 != (undefined8 *)0x0) {
    puVar2 = local_38;
  }
  uVar3 = (longlong)(int)local_30 & 0x1fffffffffffffff;
  if (puVar2 + (int)local_30 < puVar2) {
    uVar3 = uVar1;
  }
  if (uVar3 != 0) {
    do {
      local_108 = *param_3;
      uStack_104 = param_3[1];
      uStack_100 = param_3[2];
      uStack_fc = param_3[3];
      FUN_14260ee50(*puVar2,param_2,&local_108);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar1 != uVar3);
  }
  if (local_38 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14308b3c0 FUN_14308b3c0 body=218 status=ok
// SIG undefined FUN_14308b3c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14308b3c0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_118 [32];
  undefined8 local_f8 [24];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  uVar1 = 0;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1430786d0(param_1,param_4,local_f8);
  puVar2 = local_f8;
  if (local_38 != (undefined8 *)0x0) {
    puVar2 = local_38;
  }
  uVar3 = (longlong)(int)local_30 & 0x1fffffffffffffff;
  if (puVar2 + (int)local_30 < puVar2) {
    uVar3 = uVar1;
  }
  if (uVar3 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar2 + 0x958))((longlong *)*puVar2,param_2,param_3);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar1 != uVar3);
  }
  if (local_38 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14308b4a0 FUN_14308b4a0 body=217 status=ok
// SIG undefined FUN_14308b4a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14308b4a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_128 [32];
  undefined8 local_108 [24];
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  uVar1 = 0;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1430786d0(param_1,param_4,local_108);
  puVar2 = local_108;
  if (local_48 != (undefined8 *)0x0) {
    puVar2 = local_48;
  }
  uVar3 = (longlong)(int)local_40 & 0x1fffffffffffffff;
  if (puVar2 + (int)local_40 < puVar2) {
    uVar3 = uVar1;
  }
  if (uVar3 != 0) {
    do {
      FUN_14260f0c0(*puVar2,param_2,param_3);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar1 != uVar3);
  }
  if (local_48 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14308b580 FUN_14308b580 body=212 status=ok
// SIG undefined FUN_14308b580(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14308b580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_118 [32];
  undefined8 local_f8 [24];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  uVar1 = 0;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1430786d0(param_1,param_4,local_f8);
  puVar2 = local_f8;
  if (local_38 != (undefined8 *)0x0) {
    puVar2 = local_38;
  }
  uVar3 = (longlong)(int)local_30 & 0x1fffffffffffffff;
  if (puVar2 + (int)local_30 < puVar2) {
    uVar3 = uVar1;
  }
  if (uVar3 != 0) {
    do {
      FUN_14260f470(*puVar2,param_2,param_3);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar1 != uVar3);
  }
  if (local_38 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14308b660 FUN_14308b660 body=232 status=ok
// SIG undefined FUN_14308b660(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14308b660(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8 [24];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  uVar1 = 0;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1430786d0(param_1,param_4,local_f8);
  puVar2 = local_f8;
  if (local_38 != (undefined8 *)0x0) {
    puVar2 = local_38;
  }
  uVar3 = (longlong)(int)local_30 & 0x1fffffffffffffff;
  if (puVar2 + (int)local_30 < puVar2) {
    uVar3 = uVar1;
  }
  if (uVar3 != 0) {
    do {
      local_108 = *param_3;
      local_100 = *(undefined4 *)(param_3 + 1);
      FUN_142610200(*puVar2,param_2,&local_108);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar1 != uVar3);
  }
  if (local_38 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14308b750 FUN_14308b750 body=213 status=ok
// SIG undefined FUN_14308b750(void)

void FUN_14308b750(longlong param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x700);
  uVar3 = (longlong)*(int *)(param_1 + 0x708) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x708) < puVar1) {
    uVar3 = uVar4;
  }
  uVar2 = uVar4;
  if (uVar3 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x2c0))((longlong *)*puVar1,param_2);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 != uVar3);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x710);
  uVar3 = (longlong)*(int *)(param_1 + 0x718) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x718) < puVar1) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x2c0))((longlong *)*puVar1,param_2);
      uVar4 = uVar4 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar4 != uVar3);
  }
  return;
}



// FUNCTION 14308b8d0 FUN_14308b8d0 body=129 status=ok
// SIG undefined FUN_14308b8d0(void)

void FUN_14308b8d0(longlong param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x710);
  uVar2 = (longlong)*(int *)(param_1 + 0x718) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x718) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x2a8))((longlong *)*puVar1,param_2);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 14308b960 FUN_14308b960 body=63 status=ok
// SIG undefined FUN_14308b960(void)

void FUN_14308b960(longlong param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x158) == 0) {
    uVar1 = FUN_142df36d0(*param_2);
    *(undefined8 *)(param_1 + 0x158) = uVar1;
    return;
  }
  lVar2 = FUN_142df36d0(*param_2);
  if (lVar2 != 0) {
    *(longlong *)(param_1 + 0x158) = lVar2;
  }
  return;
}



// FUNCTION 14308b9b0 FUN_14308b9b0 body=43 status=ok
// SIG undefined FUN_14308b9b0(void)

void FUN_14308b9b0(longlong param_1,byte param_2,undefined1 param_3)

{
  longlong lVar1;
  
  if ((int)(uint)param_2 < *(int *)(param_1 + 0x6b8)) {
    lVar1 = *(longlong *)(param_1 + 0x6b0);
    if (*(longlong *)(param_1 + 0x6b0) == 0) {
      lVar1 = param_1 + 0x6a8;
    }
    *(undefined1 *)(lVar1 + (ulonglong)param_2) = param_3;
  }
  return;
}



// FUNCTION 14308b9e0 FUN_14308b9e0 body=375 status=ok
// SIG undefined FUN_14308b9e0(void)

void FUN_14308b9e0(longlong param_1,byte param_2)

{
  undefined8 uVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  char cVar6;
  char cVar7;
  ulonglong uVar8;
  char local_res10 [8];
  
  bVar2 = *(byte *)(param_1 + 0x7e8) >> 6 & 1;
  if (bVar2 != param_2) {
    if ((bVar2 == 0) && ((*(byte *)(param_1 + 0x80) & 1) == 0)) {
      cVar7 = '\0';
    }
    else {
      cVar7 = '\x01';
    }
    *(byte *)(param_1 + 0x7e8) = *(byte *)(param_1 + 0x7e8) & 0xbf | param_2 << 6;
    if (((param_2 << 6 & 0x40) == 0) && ((*(byte *)(param_1 + 0x80) & 1) == 0)) {
      cVar6 = '\0';
    }
    else {
      cVar6 = '\x01';
    }
    uVar4 = 0;
    puVar5 = *(undefined8 **)(param_1 + 0x700);
    uVar8 = (longlong)*(int *)(param_1 + 0x708) & 0x1fffffffffffffff;
    if (puVar5 + *(int *)(param_1 + 0x708) < puVar5) {
      uVar8 = uVar4;
    }
    uVar3 = uVar4;
    if (uVar8 != 0) {
      do {
        uVar1 = *puVar5;
        FUN_143087690(uVar1);
        FUN_1430875e0(uVar1);
        FUN_1430873b0(uVar1);
        uVar3 = uVar3 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar3 != uVar8);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x710);
    uVar8 = (longlong)*(int *)(param_1 + 0x718) & 0x1fffffffffffffff;
    if (puVar5 + *(int *)(param_1 + 0x718) < puVar5) {
      uVar8 = uVar4;
    }
    if (uVar8 != 0) {
      do {
        uVar1 = *puVar5;
        FUN_143087690(uVar1);
        FUN_1430875e0(uVar1);
        FUN_1430873b0(uVar1);
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar4 != uVar8);
    }
    if (cVar7 != cVar6) {
      local_res10[0] = cVar6;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x570,local_res10);
    }
  }
  return;
}



// FUNCTION 14308bb60 FUN_14308bb60 body=231 status=ok
// SIG undefined FUN_14308bb60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14308bb60(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  longlong local_68 [4];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_14307b300(param_1,local_68,1);
  plVar5 = local_68;
  if (local_48 != (longlong *)0x0) {
    plVar5 = local_48;
  }
  plVar1 = plVar5 + (int)local_40;
  for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    lVar2 = *plVar5;
    if (lVar2 != 0) {
      lVar4 = FUN_1429ba110();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_1425a2750(lVar2,param_2,param_3);
      }
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14308bc50 FUN_14308bc50 body=243 status=ok
// SIG undefined FUN_14308bc50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14308bc50(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58 [4];
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_14307b300(param_1,local_58,1);
  plVar5 = local_58;
  if (local_38 != (longlong *)0x0) {
    plVar5 = local_38;
  }
  plVar1 = plVar5 + (int)local_30;
  for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    lVar2 = *plVar5;
    if (lVar2 != 0) {
      lVar4 = FUN_1429ba110();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_68 = *param_3;
        uStack_64 = param_3[1];
        uStack_60 = param_3[2];
        uStack_5c = param_3[3];
        FUN_1425a2be0(lVar2,param_2,&local_68);
      }
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14308bd50 FUN_14308bd50 body=82 status=ok
// SIG undefined FUN_14308bd50(void)

void FUN_14308bd50(longlong param_1,longlong *param_2)

{
  *(longlong **)(param_1 + 0x38) = param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x358))(param_2,0);
    if (*(longlong *)(param_1 + 0x38) != 0) {
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x204);
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  return;
}



// FUNCTION 14308bdb0 FUN_14308bdb0 body=235 status=ok
// SIG undefined FUN_14308bdb0(void)

void FUN_14308bdb0(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x700);
  uVar3 = (longlong)*(int *)(param_1 + 0x708) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x708) < puVar1) {
    uVar3 = uVar4;
  }
  uVar2 = uVar4;
  if (uVar3 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x2b0))((longlong *)*puVar1,param_2);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 != uVar3);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x710);
  uVar3 = (longlong)*(int *)(param_1 + 0x718) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x718) < puVar1) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x2b0))((longlong *)*puVar1,param_3);
      uVar4 = uVar4 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar4 != uVar3);
  }
  return;
}



// FUNCTION 14308bea0 FUN_14308bea0 body=226 status=ok
// SIG undefined FUN_14308bea0(void)

void FUN_14308bea0(longlong param_1,byte param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
      FUN_1423979a0(*(longlong *)(param_1 + 0x38),param_2 ^ 1);
      uVar4 = 0;
      plVar1 = *(longlong **)(param_1 + 0xb0);
      uVar3 = (longlong)*(int *)(param_1 + 0xb8) & 0x1fffffffffffffff;
      if (plVar1 + *(int *)(param_1 + 0xb8) < plVar1) {
        uVar3 = uVar4;
      }
      if (uVar3 != 0) {
        do {
          if (*plVar1 != 0) {
            FUN_1423979a0(*plVar1,param_2 ^ 1);
          }
          plVar1 = plVar1 + 1;
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar3);
      }
    }
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar5 = (longlong)*(int *)(param_1 + 0x68) * 0x60 + lVar2;
    for (; lVar2 != lVar5; lVar2 = lVar2 + 0x60) {
      if (*(longlong *)(lVar2 + 0x58) != 0) {
        FUN_1423979a0(*(longlong *)(lVar2 + 0x58),param_2 ^ 1);
      }
    }
  }
  return;
}



// FUNCTION 14308bf90 FUN_14308bf90 body=222 status=ok
// SIG undefined FUN_14308bf90(void)

void FUN_14308bf90(longlong *param_1,byte param_2)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  ulonglong uVar5;
  
  if ((((int)(uint)param_2 < (int)param_1[0xd4]) &&
      (plVar1 = *(longlong **)(param_1[0xd3] + 8 + (ulonglong)param_2 * 0x48),
      plVar1 != (longlong *)0x0)) && (plVar1[0x40] != 0)) {
    cVar2 = (**(code **)(*plVar1 + 0x408))(plVar1);
    *(undefined1 *)((longlong)param_1 + 0x6cc) = 1;
    uVar5 = 0;
    FUN_1430a4f90(plVar1[0x40]);
    *(undefined1 *)((longlong)param_1 + 0x6cc) = 0;
    if (cVar2 != '\0') {
      uVar5 = uVar5 & 0xffffffffffffff00;
      if (0 < (int)param_1[0xd7]) {
        uVar3 = 0;
        while ((*(uint *)(param_1 + 0xd8) >> (uVar3 & 0x1f) & 1) == 0) {
          bVar4 = (char)uVar5 + 1;
          uVar5 = CONCAT71((int7)(uVar5 >> 8),bVar4);
          uVar3 = (uint)bVar4;
          if ((int)param_1[0xd7] <= (int)uVar3) {
            return;
          }
        }
        (**(code **)(*param_1 + 0x9d8))(param_1,uVar5,0);
      }
    }
  }
  return;
}



// FUNCTION 14308c070 set_SizeScale body=9 status=ok
// SIG undefined set_SizeScale(void)

void uhx::glues::AGEffectSphere_Glue_obj::set_SizeScale(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x470) = param_2;
  return;
}



// FUNCTION 14308c080 SetWheelScrollMultiplier body=9 status=ok
// SIG undefined SetWheelScrollMultiplier(void)

void SScrollBox::SetWheelScrollMultiplier(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x488) = param_2;
  return;
}



// FUNCTION 14308c090 bpf__StartSelectBuild__pf body=8 status=ok
// SIG undefined bpf__StartSelectBuild__pf(void)

void ABP_DestroyableObject_C__pf210322148::bpf__StartSelectBuild__pf
               (longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x480) = param_2;
  return;
}



// FUNCTION 14308c0a0 bpf__StartSelectBuild__pf body=8 status=ok
// SIG undefined bpf__StartSelectBuild__pf(void)

void ABP_ArmorController_C__pf4151835181::bpf__StartSelectBuild__pf
               (longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x478) = param_2;
  return;
}



// FUNCTION 14308c0b0 FUN_14308c0b0 body=102 status=ok
// SIG undefined FUN_14308c0b0(void)

void FUN_14308c0b0(longlong *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(**(code **)(*param_1 + 0x548))();
  if (0.0 < fVar1) {
    if ((*(uint *)(param_1 + 0x9c) & 4) == 0) {
      fVar2 = *(float *)(param_1 + 0xa3);
    }
    else {
      fVar2 = 0.0;
      *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfffffffb;
    }
    *(float *)(param_1 + 0xa3) = fVar2 + fVar1;
    if (fVar2 + fVar1 <= 0.0) {
                    /* WARNING: Could not recover jumptable at 0x00014308c109. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x578))(param_1);
      return;
    }
  }
  return;
}


