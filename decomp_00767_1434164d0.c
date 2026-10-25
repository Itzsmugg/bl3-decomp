// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1434164d0 FUN_1434164d0 body=93 status=ok
// SIG undefined FUN_1434164d0(void)

undefined8 FUN_1434164d0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  byte local_28 [32];
  
  local_28[0] = 0;
  cVar1 = (**(code **)(*(longlong *)(param_1 + 0x20) + 0x58))
                    ((longlong *)(param_1 + 0x20),param_2,
                     *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x3a0,local_28);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_143412120(local_28,0);
  }
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  return uVar2;
}



// FUNCTION 143416540 FUN_143416540 body=52 status=ok
// SIG undefined FUN_143416540(void)

undefined8 * FUN_143416540(undefined8 *param_1)

{
  FUN_143414770();
  param_1[0xd] = 0;
  *param_1 = &PTR_LAB_145b0ae70;
  param_1[4] = &PTR_LAB_145b0aef8;
  return param_1;
}



// FUNCTION 143416580 FUN_143416580 body=52 status=ok
// SIG undefined FUN_143416580(void)

undefined8 * FUN_143416580(undefined8 *param_1)

{
  FUN_1434148b0();
  param_1[0xd] = 0;
  *param_1 = &PTR_LAB_145b0ae70;
  param_1[4] = &PTR_LAB_145b0aef8;
  return param_1;
}



// FUNCTION 1434165c0 FUN_1434165c0 body=102 status=ok
// SIG undefined FUN_1434165c0(void)

undefined8 *
FUN_1434165c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143414770();
  param_1[0xd] = param_4;
  *param_1 = &PTR_LAB_145b0ae70;
  param_1[4] = &PTR_LAB_145b0aef8;
  FUN_1434a4d00(param_1 + 4,param_2,param_3);
  return param_1;
}



// FUNCTION 143416630 FUN_143416630 body=113 status=ok
// SIG undefined FUN_143416630(void)

undefined8 * FUN_143416630(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_143414770();
  param_1[0xd] = param_3;
  *param_1 = &PTR_LAB_145b0ae70;
  param_1[4] = &PTR_LAB_145b0aef8;
  uVar1 = FUN_14341b750(*param_2,7);
  FUN_1434a4d00(param_1 + 4,param_2,uVar1);
  return param_1;
}



// FUNCTION 1434166b0 ~CFunctionObject body=26 status=ok
// SIG undefined ~CFunctionObject(void)

void Scaleform::GFx::AS2::CFunctionObject::~CFunctionObject(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_145b0ad40;
  param_1[4] = &PTR_LAB_145b0adc8;
  FUN_143414980();
  return;
}



// FUNCTION 1434166e0 FUN_1434166e0 body=220 status=ok
// SIG undefined FUN_1434166e0(void)

void FUN_1434166e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined **local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
    plVar1 = *(longlong **)(param_2 + 0x10);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x78))(plVar1);
      if (cVar2 != '\0') {
        local_40 = *(undefined8 *)(param_2 + 8);
        local_18 = *(undefined8 *)(param_2 + 0x30);
        local_c = *(undefined4 *)(param_2 + 0x3c);
        local_10 = *(undefined4 *)(param_2 + 0x38);
        local_38 = plVar1[0xb];
        local_30 = 0;
        local_28 = 0;
        local_48 = &PTR_FUN_145b0ab98;
        local_20 = 0;
        (**(code **)(param_1 + 0x68))(&local_48);
        Scaleform::GFx::AS2::SuperObject::ResetAltProto(plVar1 + -4);
        local_48 = &PTR_FUN_145b0ab98;
        FUN_14349ebc0(&local_30);
        return;
      }
    }
    (**(code **)(param_1 + 0x68))(param_2);
  }
  return;
}



// FUNCTION 1434167d0 IsEqual body=65 status=ok
// SIG undefined IsEqual(void)

ulonglong Scaleform::GFx::AS2::CFunctionObject::IsEqual(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x68))(param_2);
  if (((char)uVar1 != '\0') && (uVar1 = param_2[0xd], *(ulonglong *)(param_1 + 0x68) == uVar1)) {
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 143416820 FUN_143416820 body=864 status=ok
// SIG undefined FUN_143416820(void)

void FUN_143416820(longlong param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  undefined8 *local_res8;
  undefined8 *local_res10;
  longlong local_28;
  longlong lStack_20;
  byte local_18;
  
  puVar2 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar2);
  *puVar2 = 2;
  puVar2[8] = 0;
  if (*(int *)(param_1 + 0x38) < 2) {
    FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                  "Error: Too few parameters for Object.registerClass (%d)");
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  uVar7 = *(uint *)(param_1 + 0x3c);
  pcVar6 = (char *)0x0;
  lVar4 = *(longlong *)(lVar3 + 0xe8);
  pcVar8 = pcVar6;
  if (uVar7 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
    pcVar8 = (char *)((ulonglong)(uVar7 & 0x1f) * 0x20 +
                     *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar7 >> 5) * 8));
  }
  FUN_143411540(pcVar8,&local_res10,lVar3,0xffffffff,0);
  lVar3 = *(longlong *)(param_1 + 0x30);
  uVar7 = *(int *)(param_1 + 0x3c) - 1;
  pcVar8 = pcVar6;
  if (uVar7 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
    pcVar8 = (char *)((ulonglong)(uVar7 & 0x1f) * 0x20 +
                     *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar7 >> 5) * 8));
  }
  if ((*pcVar8 == '\b') || (*pcVar8 == '\v')) {
    if (uVar7 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      pcVar6 = (char *)((ulonglong)(uVar7 & 0x1f) * 0x20 +
                       *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar7 >> 5) * 8));
    }
    if (*pcVar6 == '\b') {
      local_18 = 0;
      local_28 = *(longlong *)(pcVar6 + 8);
      if (local_28 != 0) {
        *(int *)(local_28 + 0x18) = *(int *)(local_28 + 0x18) + 1;
        *(uint *)(local_28 + 0x18) = *(uint *)(local_28 + 0x18) & 0x8fffffff;
      }
      lStack_20 = 0;
      lVar3 = *(longlong *)(pcVar6 + 0x10);
      if (((lVar3 != 0) && (local_18 = (pcVar6[0x18] & 1U) != 0, lStack_20 = lVar3, lVar3 != 0)) &&
         (!(bool)local_18)) {
        *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
      }
    }
    else if (*pcVar6 == '\v') {
      FUN_143413f20(pcVar6,&local_28);
    }
    else {
      local_18 = 0;
      local_28 = 0;
      lStack_20 = 0;
    }
    FUN_1434a4420(lVar4 + 0x18,&local_res10,&local_28,
                  6 < *(byte *)(*(longlong *)(param_1 + 0x30) + 0xf0));
    puVar2 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar2);
    *puVar2 = 2;
    puVar2[8] = 1;
    if ((((local_18 & 2) == 0) && (local_28 != 0)) &&
       ((*(uint *)(local_28 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_28 + 0x18) = *(uint *)(local_28 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_28 = 0;
    if ((((local_18 & 1) == 0) && (lStack_20 != 0)) &&
       ((*(uint *)(lStack_20 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lStack_20 + 0x18) = *(uint *)(lStack_20 + 0x18) - 1;
      FUN_1434a2b80();
    }
  }
  else {
    pcVar8 = pcVar6;
    if (uVar7 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      pcVar8 = (char *)((ulonglong)(uVar7 & 0x1f) * 0x20 +
                       *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar7 >> 5) * 8));
    }
    if (*pcVar8 == '\x01') {
      uVar5 = FUN_14341ba40(lVar4,lVar3 + 0xe8,&local_res10);
      puVar2 = *(undefined1 **)(param_1 + 8);
      FUN_143411150(puVar2);
      *puVar2 = 2;
      puVar2[8] = uVar5;
    }
    else {
      if (uVar7 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
        pcVar6 = (char *)((ulonglong)(uVar7 & 0x1f) * 0x20 +
                         *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar7 >> 5) * 8));
      }
      FUN_143411540(pcVar6,&local_res8,lVar3,0xffffffff,0);
      FUN_1434171c0(*(undefined8 *)(param_1 + 0x30),
                    "Second parameter of Object.registerClass(%s, %s) should be function or null",
                    *local_res10,*local_res8);
      piVar1 = (int *)(local_res8 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(local_res8);
      }
    }
  }
  piVar1 = (int *)(local_res10 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143416b90 FUN_143416b90 body=157 status=ok
// SIG undefined FUN_143416b90(void)

undefined8 * FUN_143416b90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ae70;
  puVar2 = param_1 + 4;
  *puVar2 = &PTR_LAB_145b0aef8;
  param_1[0xd] = FUN_143423a70;
  uVar1 = FUN_14341b750(*param_2,7);
  FUN_1434a4d00(puVar2,param_2,uVar1);
  *param_1 = &PTR_LAB_145b0afa0;
  *puVar2 = &PTR_LAB_145b0aef8;
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  FUN_14340b610(puVar2,param_2,&PTR_s_registerClass_145b079e0,7);
  return param_1;
}



// FUNCTION 143416c40 FUN_143416c40 body=60 status=ok
// SIG undefined FUN_143416c40(void)

void FUN_143416c40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x68);
  if (lVar2 != 0) {
    FUN_1434148b0(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 143416c90 FUN_143416c90 body=126 status=ok
// SIG undefined FUN_143416c90(void)

undefined8 * FUN_143416c90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_143414770();
  *param_1 = &PTR_LAB_145b0ae70;
  param_1[4] = &PTR_LAB_145b0aef8;
  param_1[0xd] = FUN_143424b10;
  uVar1 = FUN_14341b750(*param_2,7);
  FUN_1434a4d00(param_1 + 4,param_2,uVar1);
  *param_1 = &PTR_LAB_145b0b028;
  param_1[4] = &PTR_LAB_145b0aef8;
  return param_1;
}



// FUNCTION 143416d20 CreateNewObject body=110 status=ok
// SIG undefined CreateNewObject(void)

undefined8 *
Scaleform::GFx::AS2::FunctionCtorFunction::CreateNewObject(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x70);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_143414770(puVar2,(longlong *)(param_2 + 0xe8));
    puVar2[0xd] = 0;
    *puVar2 = &PTR_LAB_145b0ae70;
    puVar2[4] = &PTR_LAB_145b0aef8;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143416df0 FUN_143416df0 body=298 status=ok
// SIG undefined FUN_143416df0(void)

undefined8 * FUN_143416df0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  longlong *plVar5;
  longlong *plVar6;
  char *pcVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  *param_1 = &PTR_FUN_145b0b0c8;
  plVar5 = (longlong *)Scaleform::GFx::DisplayObjectBase::FindMovieImpl(param_2);
  *(byte *)(param_1 + 2) = (byte)(*(uint *)(plVar5 + 0xa5e) >> 2) & 1;
  uVar3 = *(uint *)(plVar5 + 0xa5e);
  param_1[3] = param_3;
  *(byte *)((longlong)param_1 + 0x11) = ~(byte)(uVar3 >> 6) & 1;
  if (param_3 == 0) {
    *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  }
  else {
    plVar6 = (longlong *)(**(code **)(*plVar5 + 8))(plVar5);
    lVar9 = param_1[3];
    pcVar7 = (char *)(**(code **)(*plVar6 + 0x60))(plVar6);
    lVar9 = lVar9 - (longlong)pcVar7;
    do {
      cVar2 = *pcVar7;
      cVar1 = pcVar7[lVar9];
      if (cVar2 != cVar1) break;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (cVar2 == cVar1) {
      bVar4 = (byte)(*(uint *)(plVar5 + 0xa5e) >> 3);
    }
    else {
      bVar4 = (byte)(*(uint *)(plVar5 + 0xa5e) >> 4);
    }
    *(byte *)((longlong)param_1 + 0x12) = bVar4 & 1;
  }
  uVar8 = FUN_14336dce0(plVar5);
  param_1[1] = uVar8;
  if ((*(char *)((longlong)param_1 + 0x12) != '\0') && ((*(uint *)(plVar5 + 0xa5e) >> 5 & 1) == 0))
  {
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (*(char *)(lVar9 + param_3) != '\0');
    if (0 < lVar9) {
      while ((cVar2 = *(char *)(param_1[3] + lVar9), cVar2 != '/' && (cVar2 != '\\'))) {
        lVar9 = lVar9 + -1;
        if (lVar9 < 1) {
          return param_1;
        }
      }
      param_1[3] = param_1[3] + 1 + lVar9;
    }
  }
  return param_1;
}



// FUNCTION 143416f20 FUN_143416f20 body=50 status=ok
// SIG undefined FUN_143416f20(void)

void FUN_143416f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_18 [6];
  
  local_18[0] = 0x34000;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1434a1480(param_1,local_18,param_2,&local_res18);
  return;
}



// FUNCTION 143416f60 FUN_143416f60 body=50 status=ok
// SIG undefined FUN_143416f60(void)

void FUN_143416f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_18 [6];
  
  local_18[0] = 0x24000;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1434a1480(param_1,local_18,param_2,&local_res18);
  return;
}



// FUNCTION 143416fa0 FUN_143416fa0 body=50 status=ok
// SIG undefined FUN_143416fa0(void)

void FUN_143416fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_18 [6];
  
  local_18[0] = 0x4000;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1434a1480(param_1,local_18,param_2,&local_res18);
  return;
}



// FUNCTION 143416fe0 SetTarget body=43 status=ok
// SIG undefined SetTarget(void)

void Scaleform::GFx::AS2::Environment::SetTarget(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  *(byte *)(param_1 + 0x17e) = *(byte *)(param_1 + 0x17e) & 0xfd;
  *(undefined8 *)(param_1 + 0xe0) = param_2;
  uVar1 = FUN_14336b320(param_2);
  *(undefined1 *)(param_1 + 0xf0) = uVar1;
  return;
}



// FUNCTION 143417020 SetInvalidTarget body=43 status=ok
// SIG undefined SetInvalidTarget(void)

void Scaleform::GFx::AS2::Environment::SetInvalidTarget(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  *(byte *)(param_1 + 0x17e) = *(byte *)(param_1 + 0x17e) | 2;
  *(undefined8 *)(param_1 + 0xe0) = param_2;
  uVar1 = FUN_14336b320(param_2);
  *(undefined1 *)(param_1 + 0xf0) = uVar1;
  return;
}



// FUNCTION 143417060 FUN_143417060 body=98 status=ok
// SIG undefined FUN_143417060(void)

void FUN_143417060(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  *(byte *)(param_1 + 0x17e) = *(byte *)(param_1 + 0x17e) & 0xfd;
  *(longlong *)(param_1 + 0xe0) = param_2;
  uVar1 = FUN_14336b320(param_2);
  *(undefined1 *)(param_1 + 0xf0) = uVar1;
  if (param_2 == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = (longlong *)
             (**(code **)(*(longlong *)(param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4) + 8))
                       (param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4);
  }
  uVar3 = (**(code **)(*plVar2 + 0xb8))(plVar2);
  *(undefined8 *)(param_1 + 0xe8) = uVar3;
  return;
}



// FUNCTION 143417100 FUN_143417100 body=53 status=ok
// SIG undefined FUN_143417100(void)

ulonglong FUN_143417100(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (((param_2 == 0) || (param_2 == 3)) &&
     ((lVar1 = *(longlong *)(param_1 + 0xe0), (*(ushort *)(lVar1 + 0x6a) & 0x1000) != 0 ||
      (*(int *)(lVar1 + 0x2c) < -1)))) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return (ulonglong)(*(byte *)(*(longlong *)(param_1 + 0xe0) + 0x6a) >> 4 & 1);
}



// FUNCTION 143417140 FUN_143417140 body=17 status=ok
// SIG undefined FUN_143417140(void)

void FUN_143417140(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014341714a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x268))();
  return;
}



// FUNCTION 1434171c0 FUN_1434171c0 body=147 status=ok
// SIG undefined FUN_1434171c0(void)

void FUN_1434171c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_28 [6];
  
  local_res18 = param_3;
  local_res20 = param_4;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    local_28[0] = 0x34000;
    FUN_1434a1480(*(longlong *)(param_1 + 0x138),local_28,param_2,&local_res18);
    return;
  }
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x268))();
  if (lVar1 != 0) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe0) + 0x268))();
    local_28[0] = 0x34000;
    (**(code **)(*plVar2 + 8))(plVar2,local_28,param_2,&local_res18);
  }
  return;
}



// FUNCTION 143417260 FUN_143417260 body=147 status=ok
// SIG undefined FUN_143417260(void)

void FUN_143417260(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_28 [6];
  
  local_res18 = param_3;
  local_res20 = param_4;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    local_28[0] = 0x24000;
    FUN_1434a1480(*(longlong *)(param_1 + 0x138),local_28,param_2,&local_res18);
    return;
  }
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x268))();
  if (lVar1 != 0) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe0) + 0x268))();
    local_28[0] = 0x24000;
    (**(code **)(*plVar2 + 8))(plVar2,local_28,param_2,&local_res18);
  }
  return;
}



// FUNCTION 143417300 FUN_143417300 body=147 status=ok
// SIG undefined FUN_143417300(void)

void FUN_143417300(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_28 [6];
  
  local_res18 = param_3;
  local_res20 = param_4;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    local_28[0] = 0x4000;
    FUN_1434a1480(*(longlong *)(param_1 + 0x138),local_28,param_2,&local_res18);
    return;
  }
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x268))();
  if (lVar1 != 0) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe0) + 0x268))();
    local_28[0] = 0x4000;
    (**(code **)(*plVar2 + 8))(plVar2,local_28,param_2,&local_res18);
  }
  return;
}



// FUNCTION 1434173a0 GetMovieImpl body=16 status=ok
// SIG undefined GetMovieImpl(void)

undefined8 Scaleform::GFx::AS2::Environment::GetMovieImpl(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x20) + 0x10);
}



// FUNCTION 1434173c0 GetAS2Root body=20 status=ok
// SIG undefined GetAS2Root(void)

undefined8 Scaleform::GFx::AS2::Environment::GetAS2Root(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x20) + 0x10) + 0x18);
}



// FUNCTION 1434173e0 FUN_1434173e0 body=510 status=ok
// SIG undefined FUN_1434173e0(void)

char FUN_1434173e0(longlong param_1,longlong *param_2,longlong *param_3,char *param_4)

{
  ulonglong *puVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 *puVar5;
  char cVar6;
  longlong lVar7;
  bool bVar8;
  undefined **local_68;
  char *local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  longlong local_38;
  undefined4 local_30;
  int local_2c;
  
  cVar6 = (**(code **)(*param_2 + 0x20))(param_2,param_1);
  if ((cVar6 != '\0') && (*param_4 == '\t')) {
    FUN_143413c30(param_4,param_1,param_2,param_4);
    return cVar6;
  }
  if (*param_4 == '\f') {
    plVar3 = *(longlong **)(param_4 + 8);
    bVar8 = false;
    if (plVar3 != (longlong *)0x0) {
      *(uint *)(plVar3 + 3) = (int)plVar3[3] + 1U & 0x8fffffff;
    }
    lVar4 = *(longlong *)(param_4 + 0x10);
    lVar7 = 0;
    if ((lVar4 != 0) && (bVar8 = (param_4[0x18] & 1U) != 0, lVar7 = lVar4, !bVar8)) {
      *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1U & 0x8fffffff;
    }
    if (plVar3 == (longlong *)0x0) {
      cVar6 = '\0';
    }
    else {
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
      puVar1 = (ulonglong *)(param_1 + 8);
      if (*(ulonglong *)(param_1 + 0x18) <= *puVar1) {
        FUN_1434a29d0(puVar1);
      }
      puVar5 = (undefined1 *)*puVar1;
      if (puVar5 != (undefined1 *)0x0) {
        *puVar5 = 5;
        lVar4 = *param_3;
        *(longlong *)(puVar5 + 8) = lVar4;
        piVar2 = (int *)(lVar4 + 0x18);
        *piVar2 = *piVar2 + 1;
      }
      FUN_143411150(param_4);
      *param_4 = '\0';
      local_2c = *(int *)(param_1 + 0x30) * 0x20 + -0x20 +
                 (int)((longlong)(*puVar1 - *(longlong *)(param_1 + 0x10)) >> 5);
      local_68 = &PTR_FUN_145b0ab98;
      local_40 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_30 = 1;
      local_60 = param_4;
      local_58 = param_2;
      local_38 = param_1;
      (**(code **)(*plVar3 + 0x50))(plVar3,&local_68,lVar7,0);
      local_68 = &PTR_FUN_145b0ab98;
      FUN_14349ebc0(&local_50);
      if (4 < *(byte *)*puVar1) {
        FUN_143411150();
      }
      *puVar1 = *puVar1 - 0x20;
      if (*puVar1 < *(ulonglong *)(param_1 + 0x10)) {
        FUN_1434a25c0(puVar1);
      }
      cVar6 = '\x01';
    }
    if ((plVar3 != (longlong *)0x0) && ((*(uint *)(plVar3 + 3) & 0x3ffffff) != 0)) {
      *(uint *)(plVar3 + 3) = *(uint *)(plVar3 + 3) - 1;
      FUN_1434a2b80(plVar3);
    }
    if (((!bVar8) && (lVar7 != 0)) && ((*(uint *)(lVar7 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) - 1;
      FUN_1434a2b80(lVar7);
    }
  }
  return cVar6;
}



// FUNCTION 1434175f0 FUN_1434175f0 body=955 status=ok
// SIG undefined FUN_1434175f0(void)

ulonglong FUN_1434175f0(longlong param_1,undefined **param_2,undefined ***param_3,undefined8 param_4
                       ,longlong param_5,undefined **param_6,undefined4 param_7)

{
  ulonglong *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined ***pppuVar11;
  bool bVar12;
  undefined **local_88;
  undefined ***pppuStack_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  longlong local_58;
  undefined4 local_50;
  int local_4c;
  undefined **local_48;
  undefined ***local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  
  local_30 = param_5;
  uStack_28 = param_6;
  local_20 = param_7;
  local_48 = param_2;
  local_40 = param_3;
  local_38 = param_4;
  uVar6 = FUN_143417cd0(param_1,&local_48);
  if (((char)uVar6 == '\0') || (*(char *)param_3 != '\t')) {
    if (*(char *)param_3 != '\f') {
      return uVar6;
    }
    local_48 = (undefined **)((ulonglong)local_48 & 0xffffffffffffff00);
    cVar5 = FUN_1434175f0(param_1,*(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x18) +
                                  800,&local_48,param_4,0,0,0);
    if (cVar5 == '\0') {
      ppuVar10 = *(undefined ***)(param_1 + 0xe0);
LAB_1434177e2:
      if ((ppuVar10 == (undefined **)0x0) ||
         (param_5 = (**(code **)(*(longlong *)
                                  ((longlong)ppuVar10 +
                                  (ulonglong)*(byte *)((longlong)ppuVar10 + 0x6d) * 4) + 8))(),
         param_5 == 0)) {
LAB_143417804:
        param_5 = 0;
      }
      else {
        param_5 = param_5 + 8;
      }
    }
    else {
      param_5 = FUN_143412120(&local_48,param_1);
      if ((param_5 == 0) || (param_5 = param_5 + 0x20, param_5 == 0)) {
        if (((byte)local_48 == '\a') &&
           ((local_40 != (undefined ***)0x0 &&
            (ppuVar9 = (undefined **)
                       Scaleform::GFx::CharacterHandle::ResolveCharacter
                                 (local_40,*(undefined8 *)
                                            (*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x20) +
                                            0x10)), ppuVar9 != (undefined **)0x0)))) {
          ppuVar10 = (undefined **)0x0;
          if (*(char *)((longlong)ppuVar9 + 0x6a) < '\0') {
            ppuVar10 = ppuVar9;
          }
          goto LAB_1434177e2;
        }
        goto LAB_143417804;
      }
    }
    bVar12 = false;
    if (*(char *)param_3 == '\f') {
      param_6 = param_3[1];
      if (param_6 != (undefined **)0x0) {
        *(uint *)(param_6 + 3) = *(int *)(param_6 + 3) + 1U & 0x8fffffff;
      }
      ppuVar9 = param_3[2];
      ppuVar10 = (undefined **)0x0;
      if ((ppuVar9 != (undefined **)0x0) &&
         (bVar12 = ((ulonglong)param_3[3] & 1) != 0, ppuVar10 = ppuVar9, !bVar12)) {
        *(uint *)(ppuVar9 + 3) = *(int *)(ppuVar9 + 3) + 1U & 0x8fffffff;
      }
    }
    else {
      local_88 = (undefined **)0x0;
      pppuStack_80 = (undefined ***)0x0;
      ppuVar10 = (undefined **)0x0;
      param_6 = (undefined **)0x0;
    }
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    puVar1 = (ulonglong *)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x18) <= *puVar1) {
      FUN_1434a29d0(puVar1);
    }
    puVar3 = (undefined1 *)*puVar1;
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = 5;
      puVar4 = *param_2;
      *(undefined **)(puVar3 + 8) = puVar4;
      piVar2 = (int *)(puVar4 + 0x18);
      *piVar2 = *piVar2 + 1;
    }
    FUN_143411150(param_3);
    local_88 = &PTR_FUN_145b0ab98;
    *(char *)param_3 = '\0';
    local_4c = *(int *)(param_1 + 0x30) * 0x20 + -0x20 +
               (int)((longlong)(*puVar1 - *(longlong *)(param_1 + 0x10)) >> 5);
    local_78 = param_5;
    local_60 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_50 = 1;
    pppuStack_80 = param_3;
    local_58 = param_1;
    (**(code **)(*param_6 + 0x50))(param_6,&local_88,ppuVar10,0);
    local_88 = &PTR_FUN_145b0ab98;
    FUN_14349ebc0(&local_70);
    if (4 < *(byte *)*puVar1) {
      FUN_143411150();
    }
    *puVar1 = *puVar1 - 0x20;
    if (*puVar1 < *(ulonglong *)(param_1 + 0x10)) {
      FUN_1434a25c0(puVar1);
    }
    if ((*(uint *)(param_6 + 3) & 0x3ffffff) != 0) {
      *(uint *)(param_6 + 3) = *(uint *)(param_6 + 3) - 1;
      FUN_1434a2b80(param_6);
    }
    if (((!bVar12) && (ppuVar10 != (undefined **)0x0)) &&
       ((*(uint *)(ppuVar10 + 3) & 0x3ffffff) != 0)) {
      *(uint *)(ppuVar10 + 3) = *(uint *)(ppuVar10 + 3) - 1;
      FUN_1434a2b80(ppuVar10);
    }
    if ((byte)local_48 < 5) goto LAB_143417994;
    pppuVar11 = &local_48;
  }
  else {
    local_40 = &local_88;
    local_88 = (undefined **)((ulonglong)local_88 & 0xffffffffffffff00);
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    local_48 = (undefined **)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x18) + 800);
    local_38 = param_4;
    cVar5 = FUN_143417e30(param_1,&local_48);
    if (cVar5 == '\0') {
      lVar7 = *(longlong *)(param_1 + 0xe0);
LAB_1434176fe:
      if (lVar7 != 0) {
        lVar8 = (**(code **)(*(longlong *)(lVar7 + (ulonglong)*(byte *)(lVar7 + 0x6d) * 4) + 8))();
        lVar7 = lVar8 + 8;
        if (lVar8 != 0) goto LAB_14341771d;
      }
LAB_14341771a:
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_143412120(&local_88,param_1);
      if ((lVar7 == 0) || (lVar7 = lVar7 + 0x20, lVar7 == 0)) {
        if (((byte)local_88 == '\a') &&
           ((pppuStack_80 != (undefined ***)0x0 &&
            (lVar8 = Scaleform::GFx::CharacterHandle::ResolveCharacter
                               (pppuStack_80,
                                *(undefined8 *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x20) + 0x10)),
            lVar8 != 0)))) {
          lVar7 = 0;
          if (*(char *)(lVar8 + 0x6a) < '\0') {
            lVar7 = lVar8;
          }
          goto LAB_1434176fe;
        }
        goto LAB_14341771a;
      }
    }
LAB_14341771d:
    FUN_143413c30(param_3,param_1,lVar7,param_3);
    if ((byte)local_88 < 5) goto LAB_143417994;
    pppuVar11 = &local_88;
  }
  FUN_143411150(pppuVar11);
LAB_143417994:
  return uVar6 & 0xff;
}



// FUNCTION 1434179c0 FUN_1434179c0 body=769 status=ok
// SIG undefined FUN_1434179c0(void)

ulonglong FUN_1434179c0(longlong param_1,ulonglong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong local_res10 [2];
  ulonglong local_res20;
  char *local_88;
  byte local_80 [32];
  ulonglong *local_60;
  byte *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  if (*(int *)(*param_2 + 0x20) == 0) {
    return *param_2 & 0xffffffffffffff00;
  }
  plVar2 = (longlong *)(param_1 + 0xe8);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 4;
  local_res20 = *(ulonglong *)(*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x138);
  *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
  local_res10[0] = *(longlong *)(*(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18) + 0x138);
  *(int *)(local_res10[0] + 0x18) = *(int *)(local_res10[0] + 0x18) + 1;
  local_58 = local_80;
  local_80[0] = 0;
  local_60 = param_2;
  local_50 = param_3;
  cVar4 = FUN_143417cd0(param_1,&local_60);
  if (cVar4 == '\0') {
    cVar4 = FUN_14341a820(plVar2,param_2,&local_res20,local_res10);
    if (cVar4 != '\0') {
      lVar7 = FUN_143419c20(param_1,&local_res20,4);
      if (lVar7 == 0) {
        bVar5 = 0;
      }
      else {
        lVar7 = (**(code **)(*(longlong *)(lVar7 + (ulonglong)*(byte *)(lVar7 + 0x6d) * 4) + 8))();
        bVar5 = (**(code **)(*(longlong *)(lVar7 + 8) + 0x58))
                          (lVar7 + 8,plVar2,local_res10,local_80);
      }
      goto LAB_143417b9d;
    }
    if (param_3 == (longlong *)0x0) {
LAB_143417b21:
      lVar7 = FUN_143419a10(param_1,param_2);
      if (lVar7 == 0) {
        lVar7 = *(longlong *)(param_1 + 0xe0);
        if (lVar7 != 0) {
          lVar7 = (**(code **)(*(longlong *)(lVar7 + (ulonglong)*(byte *)(lVar7 + 0x6d) * 4) + 8))()
          ;
          cVar4 = (**(code **)(*(longlong *)(lVar7 + 8) + 0x58))(lVar7 + 8,plVar2,param_2,local_80);
          if (cVar4 != '\0') goto LAB_143417b9b;
        }
        if (*(byte *)(param_1 + 0xf0) < 7) {
          if (*(longlong *)(*param_2 + 0x10) == 0) {
            FUN_14335f970();
          }
          lVar7 = *(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18);
          puVar9 = (undefined8 *)*param_2;
          lVar3 = puVar9[2];
          if (((*(longlong *)(*(longlong *)(lVar7 + 800) + 0x10) != lVar3) &&
              (*(longlong *)(*(longlong *)(lVar7 + 0x338) + 0x10) != lVar3)) &&
             (*(longlong *)(*(longlong *)(lVar7 + 0x330) + 0x10) != lVar3)) goto LAB_143417c3b;
        }
        else {
          lVar7 = *(longlong *)(*(longlong *)(*plVar2 + 0x28) + 0x18);
          puVar9 = (undefined8 *)*param_2;
          if (((*(undefined8 **)(lVar7 + 800) != puVar9) &&
              (*(undefined8 **)(lVar7 + 0x338) != puVar9)) &&
             (*(undefined8 **)(lVar7 + 0x330) != puVar9)) {
LAB_143417c3b:
            if (*(char *)*puVar9 == '_') {
              local_88 = (char *)0x0;
              iVar6 = FUN_143437bb0((char *)*puVar9,&local_88,6 < *(byte *)(param_1 + 0xf0));
              if (((iVar6 != -1) && (*local_88 == '\0')) &&
                 (lVar7 = FUN_143437b70(*(undefined8 *)
                                         (*(longlong *)
                                           (*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x20) +
                                           0x10) + 0x18),iVar6), lVar7 != 0)) goto LAB_143417b9b;
            }
            lVar7 = *(longlong *)(*plVar2 + 0x60);
            if ((lVar7 == 0) ||
               (cVar4 = (**(code **)(*(longlong *)(lVar7 + 0x20) + 0x58))
                                  (lVar7 + 0x20,plVar2,param_2,local_80), cVar4 == '\0')) {
              bVar5 = 0;
              goto LAB_143417b9d;
            }
          }
        }
      }
    }
    else {
      iVar6 = (int)param_3[1];
      do {
        iVar6 = iVar6 + -1;
        if (iVar6 < 0) goto LAB_143417b21;
        plVar8 = (longlong *)FUN_14340bb80((longlong)iVar6 * 0x10 + *param_3);
      } while ((plVar8 == (longlong *)0x0) ||
              (cVar4 = (**(code **)(*plVar8 + 0x58))(plVar8,plVar2,param_2,local_80), cVar4 == '\0')
              );
    }
  }
LAB_143417b9b:
  bVar5 = 1;
LAB_143417b9d:
  if (4 < local_80[0]) {
    FUN_143411150(local_80);
  }
  piVar1 = (int *)(local_res10[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_res20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return (ulonglong)bVar5;
}



// FUNCTION 143417cd0 FUN_143417cd0 body=345 status=ok
// SIG undefined FUN_143417cd0(void)

ulonglong FUN_143417cd0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  byte bVar3;
  char *pcVar4;
  char *pcVar5;
  ulonglong uVar6;
  byte local_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte *local_18;
  undefined4 local_10;
  
  plVar1 = (longlong *)*param_2;
  puVar2 = (undefined8 *)*plVar1;
  if ((*(uint *)((longlong)puVar2 + 0x1c) >> 0x19 & 1) == 0) {
    if ((*(uint *)((longlong)puVar2 + 0x1c) & 0x4000000) == 0) {
      pcVar5 = (char *)*puVar2;
      pcVar4 = strchr(pcVar5,0x3a);
      if (pcVar4 == (char *)0x0) {
        pcVar4 = strchr(pcVar5,0x2f);
        if (pcVar4 == (char *)0x0) {
          pcVar5 = strchr(pcVar5,0x2e);
          if (pcVar5 == (char *)0x0) {
            *(uint *)(*plVar1 + 0x1c) = *(uint *)(*plVar1 + 0x1c) | 0x6000000;
            goto LAB_143417d49;
          }
        }
      }
      *(uint *)(*plVar1 + 0x1c) = *(uint *)(*plVar1 + 0x1c) | 0x4000000;
    }
    local_38 = *param_2;
    local_30 = param_2[1];
    local_28 = param_2[2];
    local_20 = param_2[3];
    local_18 = local_58;
    local_10 = *(undefined4 *)(param_2 + 5);
    local_58[0] = 0;
    bVar3 = FUN_143418920(param_1,&local_38,0,0);
    if ((local_58[0] == 0) || (local_58[0] == 10)) {
      if ((*(byte *)(param_2 + 5) & 4) == 0) {
        FUN_1434171c0(param_1," GetVariable failed: can\'t resolve the path \"%s\"",
                      **(undefined8 **)*param_2);
      }
      bVar3 = 0;
    }
    else if (param_2[4] != 0) {
      FUN_143411240(param_2[4],local_58);
    }
    if (4 < local_58[0]) {
      FUN_143411150(local_58);
    }
    uVar6 = (ulonglong)bVar3;
  }
  else {
LAB_143417d49:
    uVar6 = FUN_143417e30(param_1,param_2);
  }
  return uVar6;
}



// FUNCTION 143417e30 FUN_143417e30 body=1892 status=ok
// SIG undefined FUN_143417e30(void)

bool FUN_143417e30(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int *piVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  char local_res10 [8];
  longlong local_98;
  int *local_90;
  byte local_88;
  byte local_78 [32];
  longlong local_58;
  byte *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  
  if (param_2[1] == 0) {
    return false;
  }
  plVar7 = (longlong *)0x0;
  if (param_2[4] != 0) {
    local_98 = CONCAT71(local_98._1_7_,4);
    local_90 = (int *)((ulonglong)local_90 & 0xffffffff00000000);
    FUN_143411240(param_2[4],&local_98);
    if (4 < (byte)local_98) {
      FUN_143411150(&local_98);
    }
  }
  if ((param_2[2] != 0) &&
     (iVar2 = *(int *)(param_2[2] + 8) + -1, lVar13 = (longlong)iVar2, -1 < iVar2)) {
    lVar14 = lVar13 << 4;
    do {
      lVar3 = *(longlong *)param_2[2];
      if (*(int *)(lVar14 + 8 + lVar3) < 0) {
        plVar9 = (longlong *)(*(longlong *)(lVar14 + lVar3) + 0x20);
        if (*(longlong *)(lVar14 + lVar3) == 0) {
          plVar9 = plVar7;
        }
      }
      else {
        lVar3 = *(longlong *)(lVar14 + lVar3);
        if (lVar3 == 0) {
          return false;
        }
        lVar3 = (**(code **)(*(longlong *)(lVar3 + (ulonglong)*(byte *)(lVar3 + 0x6d) * 4) + 8))
                          (lVar3 + (ulonglong)*(byte *)(lVar3 + 0x6d) * 4);
        if (lVar3 == 0) {
          return false;
        }
        plVar9 = (longlong *)(lVar3 + 8);
      }
      if (plVar9 == (longlong *)0x0) {
        return false;
      }
      cVar1 = (**(code **)(*plVar9 + 0x20))(plVar9,param_1,*param_2,param_2[1]);
      if (cVar1 != '\0') {
        if (param_2[4] != 0) {
          iVar2 = (**(code **)(*plVar9 + 0x10))(plVar9);
          if (iVar2 - 2U < 4) {
            uVar5 = Scaleform::GFx::AS2::ObjectInterface::ToCharacter();
            Scaleform::GFx::AS2::Value::SetAsCharacter(param_2[4],uVar5);
            return true;
          }
          uVar5 = Scaleform::GFx::AS2::ObjectInterface::ToASObject(plVar9);
          FUN_143412aa0(param_2[4],uVar5);
        }
        return true;
      }
      lVar14 = lVar14 + -0x10;
      lVar13 = lVar13 + -1;
    } while (-1 < lVar13);
  }
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    lVar13 = param_2[1];
    lVar14 = FUN_143419a10(param_1,*param_2);
    if (lVar14 != 0) {
      if (lVar13 != 0) {
        FUN_143411240(lVar13,lVar14);
        return true;
      }
      if (lVar14 != 0) {
        return true;
      }
    }
    if (4 < *(byte *)(param_1 + 0xf0)) {
      plVar9 = (longlong *)(param_1 + 0xe8);
      cVar1 = Scaleform::GFx::ASString::CompareBuiltIn_CaseCheck
                        (*(longlong *)(*(longlong *)(*plVar9 + 0x28) + 0x18) + 0x358,*param_2,
                         6 < *(byte *)(param_1 + 0xf0));
      if (cVar1 == '\0') {
        if (((((5 < *(byte *)(param_1 + 0xf0)) &&
              (cVar1 = Scaleform::GFx::ASString::CompareBuiltIn_CaseCheck
                                 (*(longlong *)(*(longlong *)(*plVar9 + 0x28) + 0x18) + 0x328,
                                  *param_2,6 < *(byte *)(param_1 + 0xf0)), cVar1 != '\0')) &&
             (*(longlong *)(param_1 + 0x188) != 0)) &&
            ((lVar13 = *(longlong *)
                        (*(longlong *)(param_1 + 0x180) + -8 + *(longlong *)(param_1 + 0x188) * 8),
             lVar13 != 0 && (lVar13 = *(longlong *)(lVar13 + 0x30), lVar13 != 0)))) &&
           (lVar13 = *(longlong *)(lVar13 + 0x10), lVar13 != 0)) {
          local_78[0] = 0;
          *(uint *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + 1U & 0x8fffffff;
          local_58 = *(longlong *)(*(longlong *)(*plVar9 + 0x28) + 0x18) + 800;
          local_30 = 0;
          local_50 = local_78;
          local_48 = param_2[2];
          local_40 = 0;
          uStack_38 = 0;
          FUN_143417cd0(param_1,&local_58);
          (**(code **)(*(longlong *)(lVar13 + 0x20) + 0x70))(lVar13 + 0x20,&local_98,plVar9);
          lVar14 = (**(code **)(**(longlong **)(*plVar9 + 0x30) + 0x50))
                             (*(longlong **)(*plVar9 + 0x30),0x98,0);
          if (lVar14 != 0) {
            uVar5 = *(undefined8 *)(lVar13 + 0x30);
            uVar6 = FUN_1434123a0(local_78,param_1);
            plVar7 = (longlong *)FUN_1434971c0(lVar14,uVar5,uVar6,&local_98);
          }
          FUN_143412aa0(param_2[1],plVar7);
          FUN_143419680(param_1,*(longlong *)(*(longlong *)(*plVar9 + 0x28) + 0x18) + 0x328,
                        param_2[1]);
          if ((((local_88 & 2) == 0) && (local_98 != 0)) &&
             ((*(uint *)(local_98 + 0x18) & 0x3ffffff) != 0)) {
            *(uint *)(local_98 + 0x18) = *(uint *)(local_98 + 0x18) - 1;
            FUN_1434a2b80();
          }
          local_98 = 0;
          if ((((local_88 & 1) == 0) && (local_90 != (int *)0x0)) &&
             ((*(uint *)((longlong)local_90 + 0x18) & 0x3ffffff) != 0)) {
            *(uint *)((longlong)local_90 + 0x18) = *(uint *)((longlong)local_90 + 0x18) - 1;
            FUN_1434a2b80();
          }
          local_90 = (int *)0x0;
          if (4 < local_78[0]) {
            FUN_143411150(local_78);
          }
          if ((*(uint *)(lVar13 + 0x18) & 0x3ffffff) != 0) {
            *(uint *)(lVar13 + 0x18) = *(uint *)(lVar13 + 0x18) - 1;
            FUN_1434a2b80(lVar13);
          }
          if (plVar7 == (longlong *)0x0) {
            return true;
          }
          if ((*(uint *)(plVar7 + 3) & 0x3ffffff) == 0) {
            return true;
          }
          *(uint *)(plVar7 + 3) = *(uint *)(plVar7 + 3) - 1;
          FUN_1434a2b80(plVar7);
          return true;
        }
      }
      else if ((*(longlong *)(param_1 + 0x188) != 0) &&
              (lVar13 = *(longlong *)
                         (*(longlong *)(param_1 + 0x180) + -8 + *(longlong *)(param_1 + 0x188) * 8),
              lVar13 != 0)) {
        lVar14 = (**(code **)(**(longlong **)(*plVar9 + 0x30) + 0x50))
                           (*(longlong **)(*plVar9 + 0x30),0x98,0);
        plVar4 = plVar7;
        if (lVar14 != 0) {
          plVar4 = (longlong *)FUN_14345d8d0(lVar14,param_1);
        }
        FUN_14345e160(plVar4,*(undefined4 *)(lVar13 + 0x40));
        plVar10 = plVar7;
        if (0 < *(int *)(lVar13 + 0x40)) {
          do {
            lVar14 = *(longlong *)(lVar13 + 0x38);
            uVar12 = *(int *)(lVar13 + 0x44) - (int)plVar10;
            plVar11 = plVar7;
            if (uVar12 <= (uint)(*(int *)(lVar14 + 0x30) * 0x20 + -0x20 +
                                (int)(*(longlong *)(lVar14 + 8) - *(longlong *)(lVar14 + 0x10) >> 5)
                                )) {
              plVar11 = (longlong *)
                        ((ulonglong)(uVar12 & 0x1f) * 0x20 +
                        *(longlong *)(*(longlong *)(lVar14 + 0x28) + (ulonglong)(uVar12 >> 5) * 8));
            }
            FUN_14345e250(plVar4,plVar10,plVar11);
            uVar12 = (int)plVar10 + 1;
            plVar10 = (longlong *)(ulonglong)uVar12;
          } while ((int)uVar12 < *(int *)(lVar13 + 0x40));
        }
        lVar14 = *(longlong *)(*(longlong *)(*plVar9 + 0x28) + 0x18);
        uVar5 = FUN_143410c00(local_78,plVar4);
        Scaleform::GFx::AS2::Environment::AddLocal(param_1,lVar14 + 0x358,uVar5);
        if (4 < local_78[0]) {
          FUN_143411150(local_78);
        }
        local_res10[0] = '\a';
        (**(code **)(plVar4[4] + 0x50))
                  (plVar4 + 4,plVar9,*(longlong *)(*(longlong *)(*plVar9 + 0x28) + 0x18) + 0x360,
                   lVar13 + 0x48,local_res10);
        local_res10[0] = '\a';
        (**(code **)(plVar4[4] + 0x50))
                  (plVar4 + 4,plVar9,*(longlong *)(*(longlong *)(*plVar9 + 0x28) + 0x18) + 0x368,
                   lVar13 + 0x68,local_res10);
        FUN_143412aa0(param_2[1],plVar4);
        if ((*(uint *)(plVar4 + 3) & 0x3ffffff) == 0) {
          return true;
        }
        *(uint *)(plVar4 + 3) = *(uint *)(plVar4 + 3) - 1;
        FUN_1434a2b80(plVar4);
        return true;
      }
    }
    plVar7 = (longlong *)*param_2;
    lVar13 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x18);
    if (*(byte *)(param_1 + 0xf0) < 7) {
      if (*(longlong *)(*plVar7 + 0x10) == 0) {
        FUN_14335f970();
      }
      bVar15 = *(longlong *)(*(longlong *)(lVar13 + 800) + 0x10) == *(longlong *)(*plVar7 + 0x10);
    }
    else {
      bVar15 = *(longlong *)(lVar13 + 800) == *plVar7;
    }
    if (bVar15) {
      Scaleform::GFx::AS2::Value::SetAsCharacter(param_2[1],*(undefined8 *)(param_1 + 0xe0));
      return true;
    }
  }
  lVar13 = *(longlong *)(param_1 + 0xe0);
  if (lVar13 == 0) {
    return false;
  }
  lVar13 = (**(code **)(*(longlong *)(lVar13 + (ulonglong)*(byte *)(lVar13 + 0x6d) * 4) + 8))();
  cVar1 = (**(code **)(*(longlong *)(lVar13 + 8) + 0x58))
                    (lVar13 + 8,param_1 + 0xe8,*param_2,param_2[1]);
  if (cVar1 == '\0') {
    lVar13 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x60);
    if ((((*(byte *)(param_2 + 5) & 2) == 0) && (iVar2 = FUN_14335fa60(*param_2), iVar2 != 0)) &&
       ((*(char *)**(undefined8 **)*param_2 == '_' &&
        (FUN_1434185a0(param_1,local_res10,param_2), local_res10[0] != '\0')))) {
      return local_res10[0] == '\x01';
    }
    if ((lVar13 == 0) ||
       (cVar1 = (**(code **)(*(longlong *)(lVar13 + 0x20) + 0x20))
                          (lVar13 + 0x20,param_1,*param_2,param_2[1]), cVar1 == '\0')) {
      if ((*(byte *)(param_2 + 5) & 4) != 0) {
        return false;
      }
      FUN_143300df0(param_1,"GetVariableRaw(\"%s\") failed, returning UNDEFINED.\n",
                    **(undefined8 **)*param_2);
      return false;
    }
    if (param_2[4] != 0) {
      FUN_143410c00(local_78,lVar13);
      FUN_143411240(param_2[4],local_78);
      if (4 < local_78[0]) {
        FUN_143411150(local_78);
      }
    }
  }
  else if (param_2[4] != 0) {
    local_98 = CONCAT71(local_98._1_7_,7);
    if (*(longlong *)(param_1 + 0xe0) == 0) {
      local_90 = (int *)0x0;
    }
    else {
      piVar8 = *(int **)(*(longlong *)(param_1 + 0xe0) + 0x70);
      if (piVar8 == (int *)0x0) {
        piVar8 = (int *)FUN_14336c170();
      }
      local_90 = piVar8;
      if (piVar8 != (int *)0x0) {
        *piVar8 = *piVar8 + 1;
      }
    }
    FUN_143411240(param_2[4],&local_98);
    if (4 < (byte)local_98) {
      FUN_143411150(&local_98);
      return true;
    }
  }
  return true;
}



// FUNCTION 1434185a0 FUN_1434185a0 body=375 status=ok
// SIG undefined FUN_1434185a0(void)

undefined1 * FUN_1434185a0(longlong param_1,undefined1 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char *local_res8;
  
  if (*(byte *)(param_1 + 0xf0) < 7) {
    plVar2 = (longlong *)*param_3;
    lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x18);
    if (*(longlong *)(*plVar2 + 0x10) == 0) {
      FUN_14335f970();
    }
    if (*(longlong *)(*(longlong *)(lVar4 + 0x338) + 0x10) == *(longlong *)(*plVar2 + 0x10))
    goto LAB_1434185e2;
    plVar2 = (longlong *)*param_3;
    lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x18);
    if (*(longlong *)(*plVar2 + 0x10) == 0) {
      FUN_14335f970();
    }
    if (*(longlong *)(*(longlong *)(lVar4 + 0x330) + 0x10) == *(longlong *)(*plVar2 + 0x10)) {
      lVar4 = *(longlong *)(param_1 + 0xe8);
      goto LAB_143418615;
    }
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0xe8);
    lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x28) + 0x18);
    if (*(longlong *)(lVar1 + 0x338) == *(longlong *)*param_3) {
LAB_1434185e2:
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x228))
                        (*(longlong **)(param_1 + 0xe0),0);
      goto LAB_1434185f4;
    }
    if (*(longlong *)(lVar1 + 0x330) == *(longlong *)*param_3) {
LAB_143418615:
      FUN_143412aa0(param_3[1],*(undefined8 *)(lVar4 + 0x60));
      *param_2 = 1;
      return param_2;
    }
  }
  local_res8 = (char *)0x0;
  iVar3 = FUN_143437bb0(**(undefined8 **)*param_3,&local_res8,6 < *(byte *)(param_1 + 0xf0));
  if ((iVar3 == -1) || (*local_res8 != '\0')) {
    *param_2 = 0;
    return param_2;
  }
  lVar4 = FUN_143437b70(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x20) + 0x10)
                         + 0x18),iVar3);
  if (lVar4 == 0) {
    *param_2 = 2;
    return param_2;
  }
LAB_1434185f4:
  Scaleform::GFx::AS2::Value::SetAsCharacter(param_3[1],lVar4);
  *param_2 = 1;
  return param_2;
}



// FUNCTION 143418720 FUN_143418720 body=502 status=ok
// SIG undefined FUN_143418720(void)

undefined8 FUN_143418720(longlong param_1,undefined8 param_2,char *param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_3 == (char *)0x0) {
    return 0;
  }
  plVar4 = (longlong *)0x0;
  if ((param_4 != (longlong *)0x0) &&
     (iVar2 = (int)param_4[1] + -1, lVar6 = (longlong)iVar2, -1 < iVar2)) {
    lVar7 = lVar6 << 4;
    do {
      lVar3 = *param_4;
      if (*(int *)(lVar3 + 8 + lVar7) < 0) {
        plVar5 = (longlong *)(*(longlong *)(lVar3 + lVar7) + 0x20);
        if (*(longlong *)(lVar3 + lVar7) == 0) {
          plVar5 = plVar4;
        }
LAB_1434187c2:
        if ((plVar5 != (longlong *)0x0) &&
           (cVar1 = (**(code **)(*plVar5 + 0x48))(plVar5,param_1 + 0xe8,param_2,0), cVar1 != '\0'))
        {
          iVar2 = (**(code **)(*plVar5 + 0x10))(plVar5);
          if (iVar2 - 2U < 4) {
            iVar2 = (**(code **)(*plVar5 + 0x10))(plVar5);
            if (iVar2 - 2U < 4) {
              plVar4 = (longlong *)plVar5[3];
            }
            Scaleform::GFx::AS2::Value::SetAsCharacter(param_3,plVar4);
            return 1;
          }
          FUN_143412aa0(param_3,plVar5 + -4);
          return 1;
        }
      }
      else {
        lVar3 = *(longlong *)(lVar3 + lVar7);
        if ((lVar3 != 0) &&
           (lVar3 = (**(code **)(*(longlong *)(lVar3 + (ulonglong)*(byte *)(lVar3 + 0x6d) * 4) + 8))
                              (lVar3 + (ulonglong)*(byte *)(lVar3 + 0x6d) * 4), lVar3 != 0)) {
          plVar5 = (longlong *)(lVar3 + 8);
          goto LAB_1434187c2;
        }
      }
      lVar7 = lVar7 + -0x10;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  lVar6 = *(longlong *)(param_1 + 0xe0);
  if (lVar6 != 0) {
    lVar6 = (**(code **)(*(longlong *)(lVar6 + (ulonglong)*(byte *)(lVar6 + 0x6d) * 4) + 8))();
    cVar1 = (**(code **)(*(longlong *)(lVar6 + 8) + 0x48))(lVar6 + 8,param_1 + 0xe8,param_2,0);
    if (cVar1 != '\0') {
      if ((*(longlong *)(param_1 + 0xe0) != 0) &&
         (plVar4 = *(longlong **)(*(longlong *)(param_1 + 0xe0) + 0x70), plVar4 == (longlong *)0x0))
      {
        plVar4 = (longlong *)FUN_14336c170();
      }
      if ((*param_3 != '\a') || (*(longlong **)(param_3 + 8) != plVar4)) {
        FUN_143411150(param_3);
        *param_3 = '\a';
        *(longlong **)(param_3 + 8) = plVar4;
        if (plVar4 != (longlong *)0x0) {
          *(int *)plVar4 = (int)*plVar4 + 1;
        }
      }
      return 1;
    }
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x60);
    if ((lVar6 != 0) &&
       (cVar1 = (**(code **)(*(longlong *)(lVar6 + 0x20) + 0x48))
                          (lVar6 + 0x20,param_1 + 0xe8,param_2,0), cVar1 != '\0')) {
      FUN_143412aa0(param_3,lVar6);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143418920 FUN_143418920 body=2397 status=ok
// SIG undefined FUN_143418920(void)

undefined8 FUN_143418920(longlong param_1,undefined8 *param_2,char param_3,longlong *param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  longlong lVar6;
  char *pcVar7;
  longlong *plVar8;
  int *piVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int *piVar12;
  byte bVar13;
  char *pcVar14;
  ulonglong uVar15;
  char cVar16;
  longlong *plVar17;
  bool bVar18;
  undefined1 local_e7;
  char *local_e0;
  char *local_d0;
  longlong local_c8;
  byte local_c0 [8];
  int *local_b8;
  char *local_a0;
  byte local_98 [8];
  int *local_90;
  longlong *local_78;
  byte *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  uVar3 = *(uint *)(*(undefined8 **)*param_2 + 4);
  uVar15 = (ulonglong)uVar3;
  if (uVar3 == 0) {
    if (param_2[1] != 0) {
      Scaleform::GFx::AS2::Value::SetAsCharacter(param_2[1],*(undefined8 *)(param_1 + 0xe0));
    }
    return 1;
  }
  local_e0 = (char *)**(undefined8 **)*param_2;
  puVar4 = (undefined1 *)param_2[4];
  bVar13 = 0;
  cVar16 = '\0';
  local_c0[0] = 0;
  if (puVar4 != (undefined1 *)0x0) {
    FUN_143411150(puVar4);
    *puVar4 = 0;
  }
  plVar17 = (longlong *)0x0;
  if ((undefined8 *)param_2[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_2[3] = 0;
  }
  if (*local_e0 == '/') {
    lVar6 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x228))(*(longlong **)(param_1 + 0xe0),0)
    ;
    if (lVar6 == 0) {
      local_b8 = (int *)0x0;
    }
    else {
      local_b8 = *(int **)(lVar6 + 0x70);
      if (local_b8 == (int *)0x0) {
        local_b8 = (int *)FUN_14336c170(lVar6);
      }
    }
    FUN_143411150(local_c0);
    local_c0[0] = 7;
    if (local_b8 != (int *)0x0) {
      *local_b8 = *local_b8 + 1;
    }
    local_d0 = PTR_DAT_1467cf7c0;
    local_e0 = local_e0 + 1;
    uVar15 = uVar15 - 1;
    cVar16 = '\x01';
    local_a0 = PTR_DAT_1467cf7c0;
    bVar13 = 7;
    if (param_2[4] != 0) {
      FUN_143411240(param_2[4],local_c0);
      bVar13 = local_c0[0];
    }
  }
  else {
    local_a0 = ":./";
    local_d0 = local_a0;
    if (*local_e0 == '.') {
      local_d0 = PTR_DAT_1467cf7c0;
      local_a0 = PTR_DAT_1467cf7c0;
    }
  }
  pcVar1 = local_e0 + uVar15;
  local_e7 = 1;
  local_c8 = *(longlong *)
              (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x18) + 0x138);
  *(int *)(local_c8 + 0x18) = *(int *)(local_c8 + 0x18) + 1;
  piVar12 = local_b8;
LAB_143418ab2:
  pcVar14 = local_e0;
  if (local_e0 < pcVar1) {
    do {
      pcVar7 = strchr(local_d0,(int)*local_e0);
      if (pcVar7 != (char *)0x0) break;
      local_e0 = local_e0 + 1;
    } while (local_e0 < pcVar1);
    cVar2 = *local_e0;
    if ((pcVar14 == local_e0) || (pcVar1 < local_e0)) {
      lVar6 = *(longlong *)(local_c8 + 8) + 0x48;
      piVar9 = (int *)(*(longlong *)(local_c8 + 8) + 0x60);
      *piVar9 = *piVar9 + 2;
    }
    else {
      lVar6 = FUN_143360a90(*(undefined8 *)(local_c8 + 8),pcVar14,
                            (longlong)local_e0 - (longlong)pcVar14);
      *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 2;
    }
    piVar9 = (int *)(local_c8 + 0x18);
    *piVar9 = *piVar9 + -1;
    if (*piVar9 == 0) {
      FUN_14335f920();
    }
    piVar9 = (int *)(lVar6 + 0x18);
    *piVar9 = *piVar9 + -1;
    local_c8 = lVar6;
    if (*piVar9 == 0) {
      FUN_14335f920(lVar6);
    }
    lVar6 = local_c8;
    local_e0 = local_e0 + 1;
    if (*(int *)(local_c8 + 0x20) != 0) {
      if (param_4 != (longlong *)0x0) {
        *(int *)(local_c8 + 0x18) = *(int *)(local_c8 + 0x18) + 1;
        piVar9 = (int *)(*param_4 + 0x18);
        *piVar9 = *piVar9 + -1;
        if (*piVar9 == 0) {
          FUN_14335f920();
        }
        *param_4 = lVar6;
      }
      local_98[0] = 0;
      if (bVar13 == 7) {
        if (cVar16 == '\0') goto LAB_143418c05;
LAB_143418cc3:
        if ((piVar12 == (int *)0x0) ||
           (plVar8 = (longlong *)
                     Scaleform::GFx::CharacterHandle::ResolveCharacter
                               (piVar12,*(undefined8 *)
                                         (*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x20) + 0x10
                                         )), plVar8 == (longlong *)0x0)) {
LAB_143418d6c:
          if (cVar16 != '\0') goto LAB_143418db2;
          local_78 = &local_c8;
          local_70 = local_98;
          local_50 = 0;
          local_60 = 0;
          uStack_58 = 0;
          local_68 = param_2[2];
          cVar16 = FUN_143417e30(param_1,&local_78);
        }
        else {
          plVar11 = plVar17;
          if (*(char *)((longlong)plVar8 + 0x6a) < '\0') {
            plVar11 = plVar8;
          }
          if (plVar11 == (longlong *)0x0) goto LAB_143418d6c;
          plVar8 = (longlong *)
                   (**(code **)(*(longlong *)
                                 ((longlong)plVar11 +
                                 (ulonglong)*(byte *)((longlong)plVar11 + 0x6d) * 4) + 8))();
          lVar6 = (**(code **)(*plVar8 + 0xd0))(plVar8,&local_c8,local_e7);
          if (lVar6 == 0) goto LAB_143418d6c;
          piVar9 = *(int **)(lVar6 + 0x70);
          if (piVar9 == (int *)0x0) {
            piVar9 = (int *)FUN_14336c170(lVar6);
          }
          if ((local_98[0] != 7) || (local_90 != piVar9)) {
            FUN_143411150(local_98);
            local_98[0] = 7;
            local_90 = piVar9;
            if (piVar9 != (int *)0x0) {
              *piVar9 = *piVar9 + 1;
            }
          }
          cVar16 = '\x01';
        }
      }
      else {
        if (cVar16 == '\0') {
          lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x18);
          if (*(longlong *)(lVar6 + 0x2c8) == local_c8) {
LAB_143418c05:
            plVar8 = (longlong *)param_2[2];
            if ((plVar8 == (longlong *)0x0) || (plVar8[1] == 0)) {
LAB_143418c60:
              if ((bVar13 == 0) || (bVar13 == 10)) {
                lVar6 = *(longlong *)(param_1 + 0xe0);
LAB_143418c72:
                if (lVar6 == 0) goto LAB_143418c8a;
                piVar9 = *(int **)(lVar6 + 0x70);
                if (piVar9 == (int *)0x0) {
                  piVar9 = (int *)FUN_14336c170();
                }
                goto LAB_143418c8d;
              }
            }
            else {
              plVar8 = (longlong *)FUN_14340bb80(plVar8[1] * 0x10 + *plVar8 + -0x10);
              iVar5 = (**(code **)(*plVar8 + 0x10))(plVar8);
              if (3 < iVar5 - 2U) goto LAB_143418c60;
              iVar5 = (**(code **)(*plVar8 + 0x10))(plVar8);
              if (iVar5 - 2U < 4) {
                lVar6 = plVar8[3];
                goto LAB_143418c72;
              }
LAB_143418c8a:
              piVar9 = (int *)0x0;
LAB_143418c8d:
              if ((bVar13 != 7) || (piVar12 != piVar9)) {
                FUN_143411150(local_c0);
                bVar13 = 7;
                local_c0[0] = 7;
                piVar12 = piVar9;
                local_b8 = piVar9;
                if (piVar9 != (int *)0x0) {
                  *piVar9 = *piVar9 + 1;
                }
              }
            }
            cVar16 = '\x01';
            if (bVar13 == 7) goto LAB_143418cc3;
          }
          else {
            if (*(byte *)(param_1 + 0xf0) < 7) {
              if (*(longlong *)(local_c8 + 0x10) == 0) {
                FUN_14335f970(local_c8);
              }
              bVar18 = *(longlong *)(*(longlong *)(lVar6 + 0x340) + 0x10) ==
                       *(longlong *)(local_c8 + 0x10);
            }
            else {
              bVar18 = *(longlong *)(lVar6 + 0x340) == local_c8;
            }
            if (bVar18) goto LAB_143418c05;
          }
          goto LAB_143418d6c;
        }
LAB_143418db2:
        if ((byte)(bVar13 - 2) < 4) {
          uVar10 = FUN_14341ab40(param_1,&local_78,local_c0);
          FUN_143411240(local_c0,uVar10);
          piVar12 = local_b8;
          bVar13 = local_c0[0];
          if (4 < (byte)local_78) {
            FUN_143411150(&local_78);
            piVar12 = local_b8;
            bVar13 = local_c0[0];
          }
        }
        cVar16 = '\0';
        if (bVar13 == 6) {
LAB_143418e0c:
          if (bVar13 == 7) {
LAB_143418e12:
            if ((piVar12 != (int *)0x0) &&
               (plVar8 = (longlong *)
                         Scaleform::GFx::CharacterHandle::ResolveCharacter
                                   (piVar12,*(undefined8 *)
                                             (*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x20) +
                                             0x10)), plVar8 != (longlong *)0x0)) {
              plVar11 = plVar17;
              if (*(char *)((longlong)plVar8 + 0x6a) < '\0') {
                plVar11 = plVar8;
              }
              if (plVar11 != (longlong *)0x0) {
                lVar6 = (**(code **)(*(longlong *)
                                      ((longlong)plVar11 +
                                      (ulonglong)*(byte *)((longlong)plVar11 + 0x6d) * 4) + 8))();
                plVar8 = (longlong *)(lVar6 + 8);
                if (lVar6 == 0) {
                  plVar8 = plVar17;
                }
                goto LAB_143418e89;
              }
            }
            plVar8 = (longlong *)0x0;
          }
          else {
            lVar6 = FUN_143412120(local_c0,param_1);
            if (lVar6 == 0) goto LAB_143418eb7;
            plVar8 = (longlong *)(lVar6 + 0x20);
          }
LAB_143418e89:
          if ((plVar8 == (longlong *)0x0) ||
             (cVar16 = (**(code **)(*plVar8 + 0x20))(plVar8,param_1,&local_c8,local_98),
             cVar16 != '\0')) goto LAB_143418eb7;
        }
        else {
          if (bVar13 == 7) goto LAB_143418e12;
          if ((bVar13 == 8) || (bVar13 == 0xb)) goto LAB_143418e0c;
        }
        FUN_143411150(local_98);
        local_98[0] = 0;
        cVar16 = '\0';
      }
LAB_143418eb7:
      if (param_2[4] != 0) {
        FUN_143411240(param_2[4],local_c0);
        piVar12 = local_b8;
        bVar13 = local_c0[0];
      }
      if (((param_3 != '\0') && (local_98[0] != 7)) || (cVar16 == '\0')) {
        FUN_143411150(local_c0);
        bVar13 = 0;
        cVar16 = '\0';
        local_c0[0] = 0;
        pcVar14 = local_e0;
        if (local_e0 < pcVar1) goto LAB_1434190a0;
        goto LAB_14341917c;
      }
      if (local_98[0] == 9) {
        if (bVar13 == 7) {
          if ((piVar12 != (int *)0x0) &&
             (plVar8 = (longlong *)
                       Scaleform::GFx::CharacterHandle::ResolveCharacter
                                 (piVar12,*(undefined8 *)
                                           (*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x20) +
                                           0x10)), plVar8 != (longlong *)0x0)) {
            plVar11 = plVar17;
            if (*(char *)((longlong)plVar8 + 0x6a) < '\0') {
              plVar11 = plVar8;
            }
            if (plVar11 != (longlong *)0x0) {
              lVar6 = (**(code **)(*(longlong *)
                                    ((longlong)plVar11 +
                                    (ulonglong)*(byte *)((longlong)plVar11 + 0x6d) * 4) + 8))();
              plVar8 = (longlong *)(lVar6 + 8);
              if (lVar6 == 0) {
                plVar8 = plVar17;
              }
              goto LAB_143418f78;
            }
          }
          plVar8 = (longlong *)0x0;
        }
        else {
          lVar6 = FUN_143412120(local_c0,param_1);
          plVar8 = (longlong *)(lVar6 + 0x20);
          if (lVar6 == 0) {
            plVar8 = plVar17;
          }
        }
LAB_143418f78:
        FUN_143413c30(local_98,param_1,plVar8,local_c0);
      }
      else {
        FUN_143411240(local_c0,local_98);
      }
      piVar12 = local_b8;
      bVar13 = local_c0[0];
      if (4 < local_98[0]) {
        FUN_143411150(local_98);
        piVar12 = local_b8;
        bVar13 = local_c0[0];
      }
    }
    if (local_a0 == PTR_DAT_1467cf7c0) {
      if (cVar2 == ':') {
        local_d0 = ":./";
        local_a0 = ":./";
        goto LAB_143418fe7;
      }
LAB_143419061:
      if (cVar2 == '/') {
        local_d0 = PTR_DAT_1467cf7c0;
        local_a0 = PTR_DAT_1467cf7c0;
      }
    }
    else {
      if (cVar2 != '.') goto LAB_143419061;
LAB_143418fe7:
      if ((param_2[3] != 0) && (bVar13 == 7)) {
        if ((piVar12 == (int *)0x0) ||
           (plVar8 = (longlong *)
                     Scaleform::GFx::CharacterHandle::ResolveCharacter
                               (piVar12,*(undefined8 *)
                                         (*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x20) + 0x10
                                         )), plVar8 == (longlong *)0x0)) {
          local_e7 = 0;
          *(undefined8 *)param_2[3] = 0;
        }
        else {
          local_e7 = 0;
          plVar11 = plVar17;
          if (*(char *)((longlong)plVar8 + 0x6a) < '\0') {
            plVar11 = plVar8;
          }
          *(longlong **)param_2[3] = plVar11;
        }
        goto LAB_143418ab2;
      }
    }
    local_e7 = 0;
    goto LAB_143418ab2;
  }
  goto LAB_14341918f;
  while (pcVar14 = pcVar14 + 1, pcVar14 < pcVar1) {
LAB_1434190a0:
    pcVar7 = strchr(local_d0,(int)*pcVar14);
    if (pcVar7 != (char *)0x0) break;
  }
  if ((local_e0 == pcVar14) || (pcVar1 < pcVar14)) {
    lVar6 = *(longlong *)(local_c8 + 8) + 0x48;
    piVar12 = (int *)(*(longlong *)(local_c8 + 8) + 0x60);
    *piVar12 = *piVar12 + 2;
  }
  else {
    lVar6 = FUN_143360a90(*(undefined8 *)(local_c8 + 8),local_e0,
                          (longlong)pcVar14 - (longlong)local_e0);
    *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 2;
  }
  piVar12 = (int *)(local_c8 + 0x18);
  *piVar12 = *piVar12 + -1;
  if (*piVar12 == 0) {
    FUN_14335f920();
  }
  piVar12 = (int *)(lVar6 + 0x18);
  *piVar12 = *piVar12 + -1;
  local_c8 = lVar6;
  if (*piVar12 == 0) {
    FUN_14335f920(lVar6);
  }
  puVar4 = (undefined1 *)param_2[4];
  if (puVar4 != (undefined1 *)0x0) {
    FUN_143411150(puVar4);
    *puVar4 = 0;
  }
  if ((undefined8 *)param_2[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_2[3] = 0;
  }
  if (param_4 != (longlong *)0x0) {
    lVar6 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x18) + 0x138);
    piVar12 = (int *)(lVar6 + 0x18);
    *piVar12 = *piVar12 + 1;
    piVar12 = (int *)(*param_4 + 0x18);
    *piVar12 = *piVar12 + -1;
    if (*piVar12 == 0) {
      FUN_14335f920();
    }
    *param_4 = lVar6;
  }
LAB_14341917c:
  piVar12 = local_b8;
  if (4 < local_98[0]) {
    FUN_143411150(local_98);
    piVar12 = local_b8;
  }
LAB_14341918f:
  if ((param_2[3] != 0) && (bVar13 == 7)) {
    if ((piVar12 != (int *)0x0) &&
       ((plVar8 = (longlong *)
                  Scaleform::GFx::CharacterHandle::ResolveCharacter
                            (piVar12,*(undefined8 *)
                                      (*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x20) + 0x10)),
        plVar8 != (longlong *)0x0 && (*(char *)((longlong)plVar8 + 0x6a) < '\0')))) {
      plVar17 = plVar8;
    }
    *(longlong **)param_2[3] = plVar17;
  }
  pcVar1 = (char *)param_2[4];
  if ((((pcVar1 != (char *)0x0) && (1 < (byte)(*pcVar1 - 6U))) && (*pcVar1 != '\b')) &&
     (*pcVar1 != '\v')) {
    FUN_143411150(pcVar1);
    *pcVar1 = '\0';
  }
  if (cVar16 == '\0') {
    uVar10 = 0;
  }
  else {
    if (param_2[1] != 0) {
      FUN_143411240(param_2[1],local_c0);
      bVar13 = local_c0[0];
    }
    uVar10 = 1;
  }
  piVar12 = (int *)(local_c8 + 0x18);
  *piVar12 = *piVar12 + -1;
  if (*piVar12 == 0) {
    FUN_14335f920(local_c8);
  }
  if (4 < bVar13) {
    FUN_143411150(local_c0);
  }
  return uVar10;
}



// FUNCTION 143419290 FUN_143419290 body=598 status=ok
// SIG undefined FUN_143419290(void)

undefined8
FUN_143419290(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,char param_5
             )

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  longlong *plVar7;
  undefined1 local_res8;
  undefined7 uStackX_9;
  longlong local_res10;
  byte local_98 [32];
  byte local_78 [32];
  longlong *local_58;
  byte *local_50;
  undefined8 local_48;
  undefined8 local_40;
  byte *local_38;
  undefined4 local_30;
  
  if ((*(uint *)(*(longlong *)(*(longlong *)(param_1[0x1c] + 0x20) + 0x10) + 0x52f0) >> 2 & 1) != 0)
  {
    uVar4 = FUN_143410ec0(local_78,param_3);
    FUN_143411540(uVar4,&local_res8,param_1,0xffffffff,1);
    if (4 < local_78[0]) {
      FUN_143411150(local_78);
    }
    FUN_143300df0(param_1,"-------------- %s = %s\n",*(undefined8 *)*param_2,
                  *(undefined8 *)CONCAT71(uStackX_9,local_res8));
    piVar1 = (int *)(CONCAT71(uStackX_9,local_res8) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  uVar2 = *(uint *)(*param_2 + 0x1c);
  if ((uVar2 >> 0x19 & 1) == 0) {
    if ((uVar2 >> 0x1a & 1) == 0) {
      pcVar6 = *(char **)*param_2;
      pcVar5 = strchr(pcVar6,0x3a);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = strchr(pcVar6,0x2f);
        if (pcVar5 == (char *)0x0) {
          pcVar6 = strchr(pcVar6,0x2e);
          if (pcVar6 == (char *)0x0) {
            *(uint *)(*param_2 + 0x1c) = *(uint *)(*param_2 + 0x1c) | 0x6000000;
            goto LAB_143419389;
          }
        }
      }
      *(uint *)(*param_2 + 0x1c) = *(uint *)(*param_2 + 0x1c) | 0x4000000;
    }
    local_98[0] = 0;
    local_40 = 0;
    local_30 = 0;
    local_res10 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[0x1d] + 0x28) + 0x18) + 0x138);
    *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
    local_50 = local_78;
    local_38 = local_98;
    local_78[0] = 0;
    local_58 = param_2;
    local_48 = param_4;
    FUN_143418920(param_1,&local_58,0,&local_res10);
    if ((local_98[0] == 0) || (local_98[0] == 10)) {
      if (param_5 != '\0') {
        cVar3 = (**(code **)(*param_1 + 8))(param_1);
        if (cVar3 != '\0') {
          FUN_1434171c0(param_1,"SetVariable failed: can\'t resolve the path \"%s\"",
                        *(undefined8 *)*param_2);
        }
      }
    }
    else {
      plVar7 = (longlong *)FUN_1434123a0(local_98,param_1);
      if (plVar7 != (longlong *)0x0) {
        local_res8 = 0;
        (**(code **)(*plVar7 + 0x18))(plVar7,param_1,&local_res10,param_3,&local_res8);
        if (4 < local_78[0]) {
          FUN_143411150(local_78);
        }
        piVar1 = (int *)(local_res10 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (4 < local_98[0]) {
          FUN_143411150(local_98);
        }
        goto LAB_14341939a;
      }
    }
    if (4 < local_78[0]) {
      FUN_143411150(local_78);
    }
    piVar1 = (int *)(local_res10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    if (4 < local_98[0]) {
      FUN_143411150(local_98);
    }
    uVar4 = 0;
  }
  else {
LAB_143419389:
    FUN_1434194f0(param_1,param_2,param_3,param_4);
LAB_14341939a:
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 1434194f0 FUN_1434194f0 body=394 status=ok
// SIG undefined FUN_1434194f0(void)

void FUN_1434194f0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res20 [8];
  byte local_48 [32];
  
  plVar4 = (longlong *)0x0;
  if ((param_4 != (longlong *)0x0) &&
     (iVar2 = (int)param_4[1] + -1, lVar7 = (longlong)iVar2, -1 < iVar2)) {
    lVar6 = lVar7 << 4;
    do {
      lVar3 = *param_4;
      if (*(int *)(lVar3 + 8 + lVar6) < 0) {
        plVar5 = (longlong *)(*(longlong *)(lVar3 + lVar6) + 0x20);
        if (*(longlong *)(lVar3 + lVar6) == 0) {
          plVar5 = plVar4;
        }
      }
      else {
        lVar3 = *(longlong *)(lVar3 + lVar6);
        if (lVar3 != 0) {
          lVar3 = (**(code **)(*(longlong *)(lVar3 + (ulonglong)*(byte *)(lVar3 + 0x6d) * 4) + 8))
                            (lVar3 + (ulonglong)*(byte *)(lVar3 + 0x6d) * 4);
          plVar5 = (longlong *)(lVar3 + 8);
          if (lVar3 != 0) goto LAB_143419583;
        }
        plVar5 = plVar4;
      }
LAB_143419583:
      local_48[0] = 0;
      if (plVar5 != (longlong *)0x0) {
        cVar1 = (**(code **)(*plVar5 + 0x20))(plVar5,param_1,param_2,local_48);
        if (cVar1 != '\0') {
          local_res20[0] = 0;
          (**(code **)(*plVar5 + 0x18))(plVar5,param_1,param_2,param_3,local_res20);
          if (local_48[0] < 5) {
            return;
          }
          FUN_143411150(local_48);
          return;
        }
        if (4 < local_48[0]) {
          FUN_143411150(local_48);
        }
      }
      lVar6 = lVar6 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  lVar7 = FUN_143419a10(param_1,param_2);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0xe0);
    if (lVar7 != 0) {
      plVar4 = (longlong *)
               (**(code **)(*(longlong *)(lVar7 + (ulonglong)*(byte *)(lVar7 + 0x6d) * 4) + 8))();
    }
    local_res20[0] = 0;
    (**(code **)(plVar4[1] + 0x18))(plVar4 + 1,param_1,param_2,param_3,local_res20);
  }
  else {
    FUN_143411240(lVar7,param_3);
  }
  return;
}



// FUNCTION 143419680 FUN_143419680 body=120 status=ok
// SIG undefined FUN_143419680(void)

void FUN_143419680(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x188) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x180) + -8 + *(longlong *)(param_1 + 0x188) * 8) != 0))
  {
    lVar1 = FUN_143419a10(param_1);
    if (lVar1 == 0) {
      Scaleform::GFx::AS2::Environment::AddLocal(param_1,param_2,param_3);
      return;
    }
    FUN_143411240(lVar1,param_3);
  }
  return;
}



// FUNCTION 143419700 AddLocal body=112 status=ok
// SIG undefined AddLocal(void)

void Scaleform::GFx::AS2::Environment::AddLocal
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x188);
  lVar2 = *(longlong *)(param_1 + 0x180);
  lVar3 = *(longlong *)(lVar2 + -8 + lVar1 * 8);
  if (lVar3 != 0) {
    *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
  }
  lVar1 = *(longlong *)(lVar2 + lVar1 * 8 + -8);
  if (lVar1 != 0) {
    FUN_1434a4530(lVar1 + 0x20,param_2,param_3,
                  CONCAT71((int7)((ulonglong)lVar3 >> 8),6 < *(byte *)(param_1 + 0xf0)));
    if ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 143419780 FUN_143419780 body=211 status=ok
// SIG undefined FUN_143419780(void)

void FUN_143419780(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte local_28 [32];
  
  if ((*(longlong *)(param_1 + 0x188) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x180) + -8 + *(longlong *)(param_1 + 0x188) * 8) != 0))
  {
    lVar3 = FUN_143419a10(param_1);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(param_1 + 0x188);
      local_28[0] = 0;
      lVar1 = *(longlong *)(param_1 + 0x180);
      lVar2 = *(longlong *)(lVar1 + -8 + lVar3 * 8);
      if (lVar2 != 0) {
        *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
      }
      lVar3 = *(longlong *)(lVar1 + lVar3 * 8 + -8);
      if (lVar3 != 0) {
        FUN_1434a4530(lVar3 + 0x20,param_2,local_28,6 < *(byte *)(param_1 + 0xf0));
        if ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0) {
          *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
          FUN_1434a2b80(lVar3);
        }
      }
      if (4 < local_28[0]) {
        FUN_143411150(local_28);
      }
    }
  }
  return;
}



// FUNCTION 143419860 GetTopLocalFrame body=31 status=ok
// SIG undefined GetTopLocalFrame(void)

undefined8 Scaleform::GFx::AS2::Environment::GetTopLocalFrame(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x188) - (longlong)param_2;
  if (lVar1 != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x180) + -8 + lVar1 * 8);
  }
  return 0;
}



// FUNCTION 143419890 FUN_143419890 body=277 status=ok
// SIG undefined FUN_143419890(void)

undefined8 * FUN_143419890(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xe8) + 0x30);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x88,0);
  puVar4 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = *(longlong *)(param_1 + 0xe0);
    if (lVar3 != 0) {
      lVar3 = (**(code **)(*(longlong *)(lVar3 + (ulonglong)*(byte *)(lVar3 + 0x6d) * 4) + 8))
                        (lVar3 + (ulonglong)*(byte *)(lVar3 + 0x6d) * 4);
      puVar4 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0x20) + 0x38) + 0x20);
    }
    puVar2[1] = puVar4;
    *puVar2 = &PTR_LAB_145b0b0b0;
    *(undefined4 *)(puVar2 + 3) = 1;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    *(undefined1 *)(puVar2 + 9) = 0;
    *(undefined1 *)(puVar2 + 0xd) = 0;
    puVar4 = puVar2;
  }
  FUN_1434a39d0(param_1 + 0x180,param_1 + 0x180,*(longlong *)(param_1 + 0x188) + 1);
  puVar2 = (undefined8 *)
           (*(longlong *)(param_1 + 0x180) + (*(longlong *)(param_1 + 0x188) + -1) * 8);
  if (puVar2 != (undefined8 *)0x0) {
    if (puVar4 != (undefined8 *)0x0) {
      *(uint *)(puVar4 + 3) = *(int *)(puVar4 + 3) + 1U & 0x8fffffff;
    }
    *puVar2 = puVar4;
  }
  if ((puVar4 != (undefined8 *)0x0) && ((*(uint *)(puVar4 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(puVar4 + 3) = *(uint *)(puVar4 + 3) - 1;
    FUN_1434a2b80(puVar4);
  }
  return puVar4;
}



// FUNCTION 1434199b0 FUN_1434199b0 body=77 status=ok
// SIG undefined FUN_1434199b0(void)

longlong FUN_1434199b0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0xd0);
  if (uVar1 <= param_2) {
    FUN_1434a1360(param_1,"Invalid local register %d, stack only has %d entries",param_2,
                  uVar1 & 0xffffffff);
    return param_1 + 0x48;
  }
  return ((uVar1 - param_2) + -1) * 0x20 + *(longlong *)(param_1 + 200);
}



// FUNCTION 143419a10 FUN_143419a10 body=515 status=ok
// SIG undefined FUN_143419a10(void)

longlong FUN_143419a10(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  if (*(longlong *)(param_1 + 0x188) != 0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x180) + -8 + *(longlong *)(param_1 + 0x188) * 8);
    if ((lVar5 == 0) ||
       (*(uint *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1U & 0x8fffffff, lVar5 == 0)) {
      return 0;
    }
    do {
      plVar1 = (longlong *)(lVar5 + 0x20);
      if (*(byte *)(param_1 + 0xf0) < 7) {
        lVar4 = FUN_1434a0020(plVar1,param_2);
      }
      else {
        lVar4 = *plVar1;
        if ((lVar4 == 0) ||
           (lVar3 = FUN_1434940d0(plVar1,param_2,
                                  (ulonglong)*(uint *)(*param_2 + 0x1c) & *(ulonglong *)(lVar4 + 8))
           , lVar3 < 0)) {
          lVar4 = 0;
        }
        else {
          lVar3 = lVar4 + 0x18 + lVar3 * 0x30;
          lVar4 = lVar3 + 8;
          if (lVar3 == 0) {
            lVar4 = 0;
          }
        }
      }
      if (lVar4 != 0) {
        if ((*(uint *)(lVar5 + 0x18) & 0x3ffffff) != 0) {
          *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) - 1;
          FUN_1434a2b80(lVar5);
          return lVar4;
        }
        return lVar4;
      }
      bVar2 = *(byte *)(param_1 + 0xf0);
      if (4 < bVar2) {
        lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x18);
        if (bVar2 < 7) {
          if (*(longlong *)(*param_2 + 0x10) == 0) {
            FUN_14335f970();
          }
          bVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x358) + 0x10) ==
                  *(longlong *)(*param_2 + 0x10);
        }
        else {
          bVar6 = *(longlong *)(lVar4 + 0x358) == *param_2;
        }
        if (bVar6) goto LAB_143419bda;
      }
      if (5 < bVar2) {
        lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x18);
        if (*(byte *)(param_1 + 0xf0) < 7) {
          if (*(longlong *)(*param_2 + 0x10) == 0) {
            FUN_14335f970();
          }
          bVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x328) + 0x10) ==
                  *(longlong *)(*param_2 + 0x10);
        }
        else {
          bVar6 = *(longlong *)(lVar4 + 0x328) == *param_2;
        }
        if (bVar6) {
LAB_143419bda:
          if ((*(uint *)(lVar5 + 0x18) & 0x3ffffff) == 0) {
            return 0;
          }
          *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) - 1;
          FUN_1434a2b80(lVar5);
          return 0;
        }
      }
      lVar4 = *(longlong *)(lVar5 + 0x28);
      if (lVar4 != 0) {
        *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1U & 0x8fffffff;
      }
      if ((*(uint *)(lVar5 + 0x18) & 0x3ffffff) != 0) {
        *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) - 1;
        FUN_1434a2b80(lVar5);
      }
      lVar5 = *(longlong *)(lVar5 + 0x28);
    } while (lVar5 != 0);
  }
  return 0;
}



// FUNCTION 143419c20 FUN_143419c20 body=469 status=ok
// SIG undefined FUN_143419c20(void)

longlong * FUN_143419c20(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar9;
  undefined8 uVar10;
  longlong local_res10;
  longlong *plVar8;
  
  if (*(int *)((undefined8 *)*param_2 + 4) == 0) {
    if ((*(byte *)(param_1 + 0x17e) & 2) != 0) {
      return (longlong *)0x0;
    }
    return *(longlong **)(param_1 + 0xe0);
  }
  plVar6 = *(longlong **)*param_2;
  plVar4 = *(longlong **)(param_1 + 0xe0);
  local_res10 = *(longlong *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x18) + 0x138)
  ;
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  if ((char)*plVar6 == '/') {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x228))(plVar4,0);
    plVar6 = (longlong *)((longlong)plVar6 + 1);
  }
  uVar10 = 1;
  do {
    cVar2 = (char)*plVar6;
    plVar7 = plVar6;
    while (plVar9 = (longlong *)0x0, cVar2 != '\0') {
      plVar9 = plVar7;
      if ((char)*plVar7 == '.') {
        plVar8 = (longlong *)((longlong)plVar7 + 1);
        if (*(char *)((longlong)plVar7 + 1) != '.') break;
      }
      else {
        plVar8 = plVar7;
        if ((char)*plVar7 == '/') break;
      }
      plVar7 = (longlong *)((longlong)plVar8 + 1);
      cVar2 = *(char *)plVar7;
    }
    if (plVar9 == plVar6) {
      if ((param_3 & 4) == 0) {
        FUN_1434a1360(param_1,"Invalid path \'%s\'",*(undefined8 *)*param_2);
      }
LAB_143419dc6:
      piVar1 = (int *)(local_res10 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      return plVar4;
    }
    uVar3 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x18) + 0x618);
    if (plVar9 == (longlong *)0x0) {
      lVar5 = FUN_143360a60(uVar3,plVar6);
    }
    else {
      lVar5 = FUN_143360a90(uVar3,plVar6,(longlong)plVar9 - (longlong)plVar6);
    }
    *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 2;
    piVar1 = (int *)(local_res10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    piVar1 = (int *)(lVar5 + 0x18);
    *piVar1 = *piVar1 + -1;
    local_res10 = lVar5;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar5);
    }
    if (*(int *)(local_res10 + 0x20) != 0) {
      plVar6 = (longlong *)0x0;
      if (plVar4 != (longlong *)0x0) {
        plVar6 = (longlong *)
                 (**(code **)(*(longlong *)
                               ((longlong)plVar4 + (ulonglong)*(byte *)((longlong)plVar4 + 0x6d) * 4
                               ) + 8))
                           ((longlong)plVar4 + (ulonglong)*(byte *)((longlong)plVar4 + 0x6d) * 4);
      }
      plVar4 = (longlong *)(**(code **)(*plVar6 + 0xd0))(plVar6,&local_res10,uVar10);
    }
    if ((plVar4 == (longlong *)0x0) || (plVar9 == (longlong *)0x0)) goto LAB_143419dc6;
    plVar6 = (longlong *)((longlong)plVar9 + 1);
    uVar10 = 0;
  } while( true );
}



// FUNCTION 143419e00 FUN_143419e00 body=192 status=ok
// SIG undefined FUN_143419e00(void)

longlong FUN_143419e00(longlong param_1,char *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res10 [3];
  
  if (*param_2 == '\a') {
    if ((param_1 != 0) && (*(longlong *)(param_2 + 8) != 0)) {
      lVar2 = Scaleform::GFx::CharacterHandle::ResolveCharacter
                        (*(longlong *)(param_2 + 8),
                         *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x20) + 0x10)
                        );
      if (lVar2 != 0) {
        lVar3 = 0;
        if (*(char *)(lVar2 + 0x6a) < '\0') {
          lVar3 = lVar2;
        }
        return lVar3;
      }
    }
  }
  else {
    if (*param_2 == '\x05') {
      FUN_143411540(param_2,local_res10,param_1,0xffffffff,0);
      lVar2 = FUN_143419c20(param_1,local_res10,0);
      piVar1 = (int *)(local_res10[0] + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      return lVar2;
    }
    FUN_1434171c0(param_1,"Invalid movie clip path; neither string nor object");
  }
  return 0;
}



// FUNCTION 143419ed0 FUN_143419ed0 body=1759 status=ok
// SIG undefined FUN_143419ed0(void)

byte * FUN_143419ed0(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  uint7 uVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined **ppuVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  longlong lVar13;
  longlong *plVar14;
  byte bVar15;
  int local_res20;
  byte local_118;
  longlong *local_108;
  longlong local_100;
  bool local_f8;
  undefined **local_e8;
  byte *pbStack_e0;
  byte *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  longlong local_b8;
  int local_b0;
  int local_ac;
  byte local_a8 [8];
  undefined **local_a0;
  byte *local_98;
  byte local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 *local_80;
  byte local_78 [32];
  byte local_58 [32];
  
  pbVar12 = (byte *)0x0;
  local_88 = 0;
  local_res20 = param_4;
  if (param_4 < 0) {
    local_res20 = *(int *)(param_1 + 0x30) * 0x20 + -0x20 +
                  (int)(*(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10) >> 5);
  }
  pbVar10 = pbVar12;
  if (param_3 == 1) {
    plVar6 = (longlong *)FUN_14341a730(param_1,&local_108);
    pbVar10 = (byte *)0x1;
    if (*param_2 != *plVar6) goto LAB_143419f50;
    bVar2 = true;
  }
  else {
LAB_143419f50:
    bVar2 = false;
  }
  if (pbVar10 != (byte *)0x0) {
    if ((((local_f8 & 2U) == 0) && (local_108 != (longlong *)0x0)) &&
       ((*(uint *)(local_108 + 3) & 0x3ffffff) != 0)) {
      *(uint *)(local_108 + 3) = *(uint *)(local_108 + 3) - 1;
      FUN_1434a2b80();
    }
    local_108 = (longlong *)0x0;
    if ((((local_f8 & 1U) == 0) && (local_100 != 0)) &&
       ((*(uint *)(local_100 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_100 + 0x18) = *(uint *)(local_100 + 0x18) - 1;
      FUN_1434a2b80();
    }
  }
  bVar3 = false;
  if (bVar2) {
    local_108 = (longlong *)((ulonglong)local_108 & 0xffffffffffffff00);
    if ((byte)(**(char **)(param_1 + 8) - 2U) < 4) {
      uVar7 = FUN_14341aa30(param_1,&local_e8,0);
      FUN_143411240(&local_108,uVar7);
      if (4 < (byte)local_e8) {
        FUN_143411150(&local_e8);
      }
    }
    else {
      if (1 < (byte)(**(char **)(param_1 + 8) - 6U)) goto LAB_14341a085;
      FUN_143411240(&local_108);
    }
    bVar15 = (byte)local_108;
    if (((byte)local_108 != 0) && ((byte)local_108 != 10)) {
      pbVar10 = (byte *)FUN_143412120(&local_108,param_1);
      if (pbVar10 != (byte *)0x0) {
        *(uint *)(pbVar10 + 0x18) = *(int *)(pbVar10 + 0x18) + 1U & 0x8fffffff;
        *(uint *)(pbVar10 + 0x18) = *(int *)(pbVar10 + 0x18) + 1U & 0x8fffffff;
      }
      pbVar12 = pbVar10;
      if (4 < bVar15) {
        FUN_143411150(&local_108);
      }
      goto LAB_14341a563;
    }
    if (4 < (byte)local_108) {
      FUN_143411150(&local_108);
    }
  }
LAB_14341a085:
  plVar6 = (longlong *)(param_1 + 0xe8);
  local_78[0] = 0;
  cVar5 = (**(code **)(*(longlong *)(*param_2 + 0x20) + 0x58))
                    ((longlong *)(*param_2 + 0x20),plVar6,
                     *(longlong *)(*(longlong *)(*plVar6 + 0x28) + 0x18) + 0x3a0,local_78);
  if (cVar5 == '\0') {
    uVar7 = FUN_14341b750(*plVar6,1);
    FUN_143412aa0(local_78,uVar7);
  }
  lVar8 = FUN_143412120(local_78,param_1);
  plVar14 = (longlong *)*param_2;
  local_f8 = false;
  if (plVar14 != (longlong *)0x0) {
    *(uint *)(plVar14 + 3) = (int)plVar14[3] + 1U & 0x8fffffff;
  }
  local_100 = 0;
  lVar13 = param_2[1];
  if ((lVar13 != 0) && (local_f8 = (*(byte *)(param_2 + 2) & 1) != 0, local_100 = lVar13, !local_f8)
     ) {
    *(uint *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + 1U & 0x8fffffff;
  }
  lVar13 = local_100;
  local_a8[0] = 0;
  local_108 = plVar14;
  if ((lVar8 != 0) &&
     (cVar5 = (**(code **)(*(longlong *)(lVar8 + 0x20) + 0x58))
                        (lVar8 + 0x20,plVar6,
                         *(longlong *)(*(longlong *)(*plVar6 + 0x28) + 0x18) + 0x3b0,local_a8),
     cVar5 != '\0')) {
    if ((local_a8[0] == 8) || (local_a8[0] == 0xb)) {
      bVar3 = true;
      if (local_a8[0] == 8) {
        local_118 = 0;
        if (local_a0 != (undefined **)0x0) {
          *(int *)(local_a0 + 3) = *(int *)(local_a0 + 3) + 1;
          *(uint *)(local_a0 + 3) = *(uint *)(local_a0 + 3) & 0x8fffffff;
        }
        ppuVar9 = local_a0;
        pbVar10 = pbVar12;
        if ((local_98 != (byte *)0x0) &&
           (local_118 = (local_90 & 1) != 0, pbVar10 = local_98, !(bool)local_118)) {
          *(int *)(local_98 + 0x18) = *(int *)(local_98 + 0x18) + 1;
          *(uint *)(local_98 + 0x18) = *(uint *)(local_98 + 0x18) & 0x8fffffff;
        }
      }
      else {
        if (local_a8[0] != 0xb) {
          local_e8 = (undefined **)0x0;
          pbStack_e0 = (byte *)0x0;
          pbVar10 = (byte *)0x0;
          ppuVar9 = (undefined **)0x0;
          local_118 = 0;
          goto LAB_14341a249;
        }
        FUN_143413f20(local_a8,&local_e8,param_1);
        ppuVar9 = local_e8;
        pbVar10 = pbStack_e0;
        local_118 = (byte)local_d8;
      }
      bVar2 = true;
      if (ppuVar9 == (undefined **)0x0) goto LAB_14341a249;
    }
    else {
      local_118 = (byte)local_d8;
      ppuVar9 = local_e8;
      pbVar10 = pbStack_e0;
LAB_14341a249:
      bVar2 = false;
    }
    if (bVar3) {
      if ((((local_118 & 2) == 0) && (ppuVar9 != (undefined **)0x0)) &&
         ((*(uint *)(ppuVar9 + 3) & 0x3ffffff) != 0)) {
        *(uint *)(ppuVar9 + 3) = *(uint *)(ppuVar9 + 3) - 1;
        FUN_1434a2b80(ppuVar9);
      }
      if ((((local_118 & 1) == 0) && (pbVar10 != (byte *)0x0)) &&
         ((*(uint *)(pbVar10 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(pbVar10 + 0x18) = *(uint *)(pbVar10 + 0x18) - 1;
        FUN_1434a2b80(pbVar10);
      }
    }
    if (bVar2) {
      uVar4 = local_d8._1_7_;
      if (local_a8[0] == 8) {
        bVar15 = 0;
        local_d8 = (byte *)((ulonglong)local_d8._1_7_ << 8);
        local_e8 = local_a0;
        if (local_a0 != (undefined **)0x0) {
          *(int *)(local_a0 + 3) = *(int *)(local_a0 + 3) + 1;
          *(uint *)(local_a0 + 3) = *(uint *)(local_a0 + 3) & 0x8fffffff;
        }
        pbStack_e0 = (byte *)0x0;
        if (local_98 != (byte *)0x0) {
          bVar15 = (local_90 & 1) != 0;
          pbStack_e0 = local_98;
          local_d8 = (byte *)CONCAT71(uVar4,bVar15);
          if (!(bool)bVar15) {
            *(int *)(local_98 + 0x18) = *(int *)(local_98 + 0x18) + 1;
            *(uint *)(local_98 + 0x18) = *(uint *)(local_98 + 0x18) & 0x8fffffff;
          }
        }
      }
      else if (local_a8[0] == 0xb) {
        FUN_143413f20(local_a8,&local_e8,param_1);
        bVar15 = (byte)local_d8;
      }
      else {
        local_e8 = (undefined **)0x0;
        pbStack_e0 = (byte *)0x0;
        local_d8 = (byte *)((ulonglong)local_d8._1_7_ << 8);
        bVar15 = 0;
      }
      pbVar10 = pbStack_e0;
      ppuVar9 = local_e8;
      FUN_143410a60(&local_108,&local_e8);
      if ((((bVar15 & 2) == 0) && (ppuVar9 != (undefined **)0x0)) &&
         ((*(uint *)(ppuVar9 + 3) & 0x3ffffff) != 0)) {
        *(uint *)(ppuVar9 + 3) = *(uint *)(ppuVar9 + 3) - 1;
        FUN_1434a2b80(ppuVar9);
      }
      lVar13 = local_100;
      plVar14 = local_108;
      if ((((bVar15 & 1) == 0) && (pbVar10 != (byte *)0x0)) &&
         ((*(uint *)(pbVar10 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(pbVar10 + 0x18) = *(uint *)(pbVar10 + 0x18) - 1;
        FUN_1434a2b80(pbVar10);
        lVar13 = local_100;
        plVar14 = local_108;
      }
    }
  }
  pbVar10 = (byte *)(**(code **)(*plVar14 + 0x78))(plVar14,param_1);
  if (pbVar10 == (byte *)0x0) {
    pbVar11 = (byte *)(*param_2 + 0x20);
    if (*param_2 == 0) {
      pbVar11 = pbVar12;
    }
    FUN_14341be90(*(undefined8 *)(param_1 + 0xe8),&local_80,param_1,pbVar11);
    FUN_14341be90(*(undefined8 *)(param_1 + 0xe8),&local_88,param_1,plVar14 + 4);
    FUN_1434171c0(param_1,"%s::CreateNewObject returned NULL during creation of %s class instance.",
                  *(undefined8 *)CONCAT44(uStack_84,local_88),*local_80);
    piVar1 = (int *)(CONCAT44(uStack_84,local_88) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    piVar1 = (int *)(local_80 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      pbVar12 = (byte *)0x0;
    }
  }
  else {
    lVar8 = *(longlong *)(pbVar10 + 0x20);
    pbVar12 = pbVar10 + 0x20;
    uVar7 = FUN_143412120(local_78,param_1);
    (**(code **)(lVar8 + 0x68))(pbVar12,param_1 + 0xe8,uVar7);
    FUN_1434a4c50(pbVar12,param_1 + 0xe8,param_2);
    pbStack_e0 = local_58;
    local_58[0] = 0;
    local_ac = local_res20;
    local_e8 = &PTR_FUN_145b0ab98;
    local_c0 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_d8 = pbVar12;
    local_b8 = param_1;
    local_b0 = param_3;
    (**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,&local_e8,param_2[1],0);
    local_e8 = &PTR_FUN_145b0ab98;
    FUN_14349ebc0(&local_d0);
    *(uint *)(pbVar10 + 0x18) = *(int *)(pbVar10 + 0x18) + 1U & 0x8fffffff;
    pbVar12 = pbVar10;
    if (4 < local_58[0]) {
      FUN_143411150(local_58);
    }
  }
  if (4 < local_a8[0]) {
    FUN_143411150(local_a8);
  }
  bVar2 = local_f8;
  if (((local_f8 & 2U) == 0) && ((*(uint *)(plVar14 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(plVar14 + 3) = *(uint *)(plVar14 + 3) - 1;
    FUN_1434a2b80(plVar14);
  }
  if ((((bVar2 & 1U) == 0) && (lVar13 != 0)) && ((*(uint *)(lVar13 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar13 + 0x18) = *(uint *)(lVar13 + 0x18) - 1;
    FUN_1434a2b80(lVar13);
  }
  if (4 < local_78[0]) {
    FUN_143411150(local_78);
  }
LAB_14341a563:
  if ((pbVar10 != (byte *)0x0) && ((*(uint *)(pbVar10 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(pbVar10 + 0x18) = *(uint *)(pbVar10 + 0x18) - 1;
    FUN_1434a2b80(pbVar10);
  }
  return pbVar12;
}



// FUNCTION 14341a5c0 FUN_14341a5c0 body=360 status=ok
// SIG undefined FUN_14341a5c0(void)

undefined8
FUN_14341a5c0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong local_58;
  longlong local_50;
  byte local_48;
  byte local_40 [8];
  longlong local_38;
  longlong local_30;
  byte local_28;
  
  local_40[0] = 0;
  cVar4 = (**(code **)(*(longlong *)(param_2 + 0x20) + 0x20))
                    ((longlong *)(param_2 + 0x20),param_1,param_3,local_40);
  if (cVar4 == '\0') {
LAB_14341a6f2:
    uVar5 = 0;
  }
  else {
    if (local_40[0] == 8) {
      local_48 = 0;
      local_58 = local_38;
      if (local_38 != 0) {
        *(int *)(local_38 + 0x18) = *(int *)(local_38 + 0x18) + 1;
        *(uint *)(local_38 + 0x18) = *(uint *)(local_38 + 0x18) & 0x8fffffff;
      }
      local_50 = 0;
      if (local_30 != 0) {
        local_48 = (local_28 & 1) != 0;
        local_50 = local_30;
        if (!(bool)local_48) {
          *(int *)(local_30 + 0x18) = *(int *)(local_30 + 0x18) + 1;
          *(uint *)(local_30 + 0x18) = *(uint *)(local_30 + 0x18) & 0x8fffffff;
        }
      }
    }
    else {
      if (local_40[0] != 0xb) goto LAB_14341a6f2;
      FUN_143413f20(local_40,&local_58,param_1);
    }
    bVar3 = local_48;
    lVar2 = local_50;
    lVar1 = local_58;
    uVar5 = FUN_143419ed0(param_1,&local_58,param_4,param_5);
    if ((((bVar3 & 2) == 0) && (lVar1 != 0)) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80(lVar1);
    }
    if ((((bVar3 & 1) == 0) && (lVar2 != 0)) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
      FUN_1434a2b80(lVar2);
    }
  }
  if (4 < local_40[0]) {
    FUN_143411150(local_40);
  }
  return uVar5;
}



// FUNCTION 14341a730 FUN_14341a730 body=230 status=ok
// SIG undefined FUN_14341a730(void)

longlong * FUN_14341a730(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  byte local_28 [8];
  longlong local_20;
  longlong local_18;
  byte local_10;
  
  local_28[0] = 0;
  lVar1 = *(longlong *)(param_1 + 0xe8);
  plVar3 = (longlong *)(*(longlong *)(lVar1 + 0x60) + 0x20);
  cVar2 = (**(code **)(*plVar3 + 0x58))
                    (plVar3,(longlong *)(param_1 + 0xe8),
                     *(longlong *)(*(longlong *)(lVar1 + 0x28) + 0x18) + (longlong)param_3 * 8 +
                     0x138,local_28);
  if (cVar2 != '\0') {
    if (local_28[0] == 8) {
      *(undefined1 *)(param_2 + 2) = 0;
      *param_2 = local_20;
      if (local_20 != 0) {
        *(int *)(local_20 + 0x18) = *(int *)(local_20 + 0x18) + 1;
        *(uint *)(local_20 + 0x18) = *(uint *)(local_20 + 0x18) & 0x8fffffff;
      }
      param_2[1] = 0;
      if (local_18 != 0) {
        FUN_1434109d0(param_2,local_18,local_10 & 1);
      }
      goto LAB_14341a7f9;
    }
    if (local_28[0] == 0xb) {
      FUN_143413f20(local_28,param_2,param_1);
      goto LAB_14341a7f9;
    }
  }
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = 0;
  param_2[1] = 0;
LAB_14341a7f9:
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  return param_2;
}



// FUNCTION 14341a820 FUN_14341a820 body=376 status=ok
// SIG undefined FUN_14341a820(void)

undefined8 FUN_14341a820(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = -1;
  pcVar4 = *(char **)*param_2;
  pcVar2 = strchr(pcVar4,0x3a);
  if ((pcVar2 == (char *)0x0) && (pcVar2 = strrchr(pcVar4,0x2e), pcVar2 == (char *)0x0)) {
    pcVar4 = strrchr(pcVar4,0x2f);
    if (pcVar4 == (char *)0x0) {
      return 0;
    }
  }
  else {
    iVar5 = (int)pcVar2 - (int)pcVar4;
    if (-1 < iVar5) {
      lVar3 = FUN_143360a60(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(*param_1 + 0x28) + 0x18) + 0x618),
                            *(longlong *)*param_2 + 1 + (longlong)iVar5);
      *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 2;
      piVar1 = (int *)(*param_4 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *param_4 = lVar3;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(lVar3);
      }
      goto LAB_14341a904;
    }
  }
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(*param_1 + 0x28) + 0x18) + 0x138);
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_4 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_4 = lVar3;
LAB_14341a904:
  if ((0 < iVar5) && (*(char *)((ulonglong)(iVar5 - 1) + *(longlong *)*param_2) == '/')) {
    iVar5 = iVar5 + -1;
  }
  if (iVar5 < 0) {
    lVar3 = *param_2;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*param_3 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_3 = lVar3;
  }
  else {
    lVar3 = FUN_143360a90(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(*param_1 + 0x28) + 0x18) + 0x618),
                          *(undefined8 *)*param_2,(longlong)iVar5);
    *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 2;
    piVar1 = (int *)(*param_3 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    *param_3 = lVar3;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar3);
    }
  }
  return 1;
}



// FUNCTION 14341a9a0 FUN_14341a9a0 body=136 status=ok
// SIG undefined FUN_14341a9a0(void)

ulonglong FUN_14341a9a0(ulonglong *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  char *pcVar4;
  char *pcVar5;
  
  puVar2 = (undefined8 *)*param_1;
  if ((*(uint *)((longlong)puVar2 + 0x1c) & 0x4000000) != 0) {
    return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
  }
  pcVar5 = (char *)*puVar2;
  pcVar4 = strchr(pcVar5,0x3a);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = strchr(pcVar5,0x2f);
    if (pcVar4 == (char *)0x0) {
      pcVar5 = strchr(pcVar5,0x2e);
      if (pcVar5 == (char *)0x0) {
        uVar3 = *param_1;
        puVar1 = (uint *)(uVar3 + 0x1c);
        *puVar1 = *puVar1 | 0x6000000;
        return uVar3 & 0xffffffffffffff00;
      }
    }
  }
  uVar3 = *param_1;
  puVar1 = (uint *)(uVar3 + 0x1c);
  *puVar1 = *puVar1 | 0x4000000;
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 14341aa30 FUN_14341aa30 body=257 status=ok
// SIG undefined FUN_14341aa30(void)

undefined1 * FUN_14341aa30(longlong param_1,undefined1 *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  
  pcVar4 = (char *)0x0;
  uVar2 = *(int *)(param_1 + 0x30) * 0x20 + -0x20 +
          (int)(*(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10) >> 5);
  if (param_3 <= uVar2) {
    uVar2 = uVar2 - param_3;
    pcVar4 = (char *)((ulonglong)(uVar2 & 0x1f) * 0x20 +
                     *(longlong *)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar2 >> 5) * 8));
  }
  cVar1 = *pcVar4;
  if (cVar1 == '\x02') {
    lVar3 = 0x160;
  }
  else if (cVar1 == '\x05') {
    lVar3 = 0x150;
  }
  else {
    if (1 < (byte)(cVar1 - 3U)) {
      *param_2 = 0;
      return param_2;
    }
    lVar3 = 0x158;
  }
  lVar3 = FUN_14341a5c0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0x60),
                        *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x18) +
                        lVar3,1,(*(int *)(param_1 + 0x30) * 0x20 + -0x20 +
                                (int)(*(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10) >>
                                     5)) - param_3);
  FUN_143410c00(param_2,lVar3);
  if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
    FUN_1434a2b80(lVar3);
  }
  return param_2;
}



// FUNCTION 14341ab40 FUN_14341ab40 body=301 status=ok
// SIG undefined FUN_14341ab40(void)

undefined1 * FUN_14341ab40(longlong param_1,undefined1 *param_2,char *param_3)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = *param_3;
  if (cVar1 == '\x02') {
    lVar2 = 0x160;
  }
  else if (cVar1 == '\x05') {
    lVar2 = 0x150;
  }
  else {
    if (1 < (byte)(cVar1 - 3U)) {
      *param_2 = 0;
      return param_2;
    }
    lVar2 = 0x158;
  }
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
  if (*(ulonglong *)(param_1 + 0x18) <= *(ulonglong *)(param_1 + 8)) {
    FUN_1434a29d0(param_1 + 8);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_143410ec0(*(longlong *)(param_1 + 8),param_3);
  }
  lVar2 = FUN_14341a5c0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0x60),
                        *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x18) +
                        lVar2,1,*(int *)(param_1 + 0x30) * 0x20 + -0x20 +
                                (int)(*(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10) >>
                                     5));
  if (4 < **(byte **)(param_1 + 8)) {
    FUN_143411150();
  }
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + -0x20;
  if (*(ulonglong *)(param_1 + 8) < *(ulonglong *)(param_1 + 0x10)) {
    FUN_1434a25c0(param_1 + 8);
  }
  FUN_143410c00(param_2,lVar2);
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
    FUN_1434a2b80(lVar2);
  }
  return param_2;
}



// FUNCTION 14341ac80 FUN_14341ac80 body=233 status=ok
// SIG undefined FUN_14341ac80(void)

void FUN_14341ac80(longlong param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  
  FUN_1434a3460(param_1 + 8);
  puVar1 = (undefined1 *)(param_1 + 0x48);
  lVar2 = 4;
  do {
    FUN_143411150(puVar1);
    *puVar1 = 0;
    puVar1 = puVar1 + 0x20;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1434a3ca0(param_1 + 200,param_1 + 200,0);
  *(byte *)(param_1 + 0x17e) = *(byte *)(param_1 + 0x17e) & 0xfc;
  FUN_1434a33a0(param_1 + 0xf8);
  FUN_1434a39d0(param_1 + 0x180,param_1 + 0x180,0);
  *(undefined2 *)(param_1 + 0x17c) = 0;
  if (((*(longlong *)(param_1 + 0x148) != 0) &&
      ((*(ulonglong *)(param_1 + 0x150) & 0xfffffffffffffffe) != 0)) &&
     (*(ulonglong *)(param_1 + 0x150) != 0)) {
    if (*(longlong *)(param_1 + 0x140) != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
      *(undefined8 *)(param_1 + 0x140) = 0;
    }
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  *(undefined8 *)(param_1 + 0x148) = 0;
  FUN_143411150(param_1 + 0x158);
  *(undefined1 *)(param_1 + 0x158) = 0;
  return;
}



// FUNCTION 14341ad70 FUN_14341ad70 body=1564 status=ok
// SIG undefined FUN_14341ad70(void)

int FUN_14341ad70(longlong param_1,longlong param_2,int param_3,int *param_4,undefined8 param_5,
                 undefined8 param_6,undefined4 param_7)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ushort uVar8;
  ushort uVar9;
  byte *pbVar10;
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  int local_res18;
  longlong local_78;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  
  local_res18 = param_3;
LAB_14341adb0:
  do {
    bVar11 = false;
    if (*(char *)(param_1 + 0x158) == '\n') {
      return local_res18;
    }
    iVar20 = *param_4;
    if (iVar20 < 1) break;
    do {
      if (bVar11) goto LAB_14341adb0;
      plVar2 = (longlong *)(param_1 + 0x140);
      uVar5 = *(ulonglong *)(param_1 + 0x148);
      uVar18 = *(longlong *)(param_1 + 0x148) - 1;
      puVar3 = (uint *)(*plVar2 + -0x10 + *(longlong *)(param_1 + 0x148) * 0x10);
      local_70 = *puVar3;
      uStack_6c = puVar3[1];
      uStack_68 = puVar3[2];
      uStack_64 = puVar3[3];
      if (uVar18 < uVar5) {
        if (uVar18 < *(ulonglong *)(param_1 + 0x150) >> 1) {
LAB_14341ae24:
          FUN_1432d5ad0(plVar2,plVar2);
        }
      }
      else if (*(ulonglong *)(param_1 + 0x150) < uVar18) goto LAB_14341ae24;
      *(ulonglong *)(param_1 + 0x148) = uVar18;
      if (uVar5 < uVar18) {
        lVar12 = uVar5 * 0x10 + *plVar2;
        for (lVar15 = uVar18 - uVar5; lVar15 != 0; lVar15 = lVar15 + -1) {
          if (lVar12 != 0) {
            *(undefined4 *)(lVar12 + 0xc) = 0;
          }
          lVar12 = lVar12 + 0x10;
        }
      }
      *param_4 = *param_4 + -1;
      uVar16 = *(int *)(param_1 + 0x30) * 0x20 + -0x20 +
               (int)(*(longlong *)(param_1 + 8) - *(longlong *)(param_1 + 0x10) >> 5);
      if (uStack_64 < uVar16) {
        for (iVar17 = uVar16 - uStack_64; iVar17 != 0; iVar17 = iVar17 + -1) {
          if (4 < **(byte **)(param_1 + 8)) {
            FUN_143411150();
          }
          *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + -0x20;
          if (*(ulonglong *)(param_1 + 8) < *(ulonglong *)(param_1 + 0x10)) {
            FUN_1434a25c0(param_1 + 8);
          }
        }
      }
      uVar16 = uStack_68;
      pbVar10 = (byte *)CONCAT44(uStack_6c,local_70);
      bVar4 = *pbVar10;
      if ((bVar4 & 1) != 0) {
        uVar19 = 0;
        if ((bVar4 & 4) == 0) {
          uVar19 = *(uint *)(param_1 + 0x188);
          lVar12 = Scaleform::GFx::AS2::Environment::GetTopLocalFrame(param_1,0);
          if (lVar12 != 0) {
            *(uint *)(lVar12 + 0x18) = *(int *)(lVar12 + 0x18) + 1U & 0x8fffffff;
          }
          lVar15 = FUN_143419890(param_1);
          if (lVar15 != 0) {
            *(uint *)(lVar15 + 0x18) = *(int *)(lVar15 + 0x18) + 1U & 0x8fffffff;
          }
          if (lVar12 != 0) {
            *(uint *)(lVar12 + 0x18) = *(int *)(lVar12 + 0x18) + 1U & 0x8fffffff;
          }
          lVar13 = *(longlong *)(lVar15 + 0x28);
          if ((lVar13 != 0) && ((*(uint *)(lVar13 + 0x18) & 0x3ffffff) != 0)) {
            *(uint *)(lVar13 + 0x18) = *(uint *)(lVar13 + 0x18) - 1;
            FUN_1434a2b80();
          }
          *(longlong *)(lVar15 + 0x28) = lVar12;
          local_78 = *(longlong *)
                      (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x18) +
                      0x138);
          *(int *)(local_78 + 0x18) = *(int *)(local_78 + 0x18) + 1;
          if ((*pbVar10 & 5) == 1) {
            lVar13 = FUN_143360a60(*(undefined8 *)
                                    (*(longlong *)
                                      (*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x18) +
                                    0x618),pbVar10 + 7);
            *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + 2;
            piVar1 = (int *)(local_78 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            piVar1 = (int *)(lVar13 + 0x18);
            *piVar1 = *piVar1 + -1;
            local_78 = lVar13;
            if (*piVar1 == 0) {
              FUN_14335f920(lVar13);
            }
          }
          if ((*(longlong *)(param_1 + 0x188) != 0) &&
             (*(longlong *)
               (*(longlong *)(param_1 + 0x180) + -8 + *(longlong *)(param_1 + 0x188) * 8) != 0)) {
            lVar13 = FUN_143419a10(param_1,&local_78);
            if (lVar13 == 0) {
              lVar13 = *(longlong *)(param_1 + 0x188);
              lVar6 = *(longlong *)(param_1 + 0x180);
              lVar7 = *(longlong *)(lVar6 + -8 + lVar13 * 8);
              if (lVar7 != 0) {
                *(uint *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1U & 0x8fffffff;
              }
              lVar13 = *(longlong *)(lVar6 + lVar13 * 8 + -8);
              if (lVar13 != 0) {
                FUN_1434a4530(lVar13 + 0x20,&local_78,param_1 + 0x158,6 < *(byte *)(param_1 + 0xf0))
                ;
                if ((*(uint *)(lVar13 + 0x18) & 0x3ffffff) != 0) {
                  *(uint *)(lVar13 + 0x18) = *(uint *)(lVar13 + 0x18) - 1;
                  FUN_1434a2b80(lVar13);
                }
              }
            }
            else {
              FUN_143411240(lVar13,param_1 + 0x158);
            }
          }
          piVar1 = (int *)(local_78 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          if ((lVar15 != 0) && ((*(uint *)(lVar15 + 0x18) & 0x3ffffff) != 0)) {
            *(uint *)(lVar15 + 0x18) = *(uint *)(lVar15 + 0x18) - 1;
            FUN_1434a2b80(lVar15);
          }
          if ((lVar12 != 0) && ((*(uint *)(lVar12 + 0x18) & 0x3ffffff) != 0)) {
            *(uint *)(lVar12 + 0x18) = *(uint *)(lVar12 + 0x18) - 1;
            FUN_1434a2b80(lVar12);
          }
        }
        else {
          if ((bVar4 & 5) == 5) {
            uVar18 = (ulonglong)pbVar10[7];
          }
          else {
            uVar18 = 0xffffffff;
          }
          uVar5 = *(ulonglong *)(param_1 + 0xd0);
          if (uVar18 < uVar5) {
            FUN_143411240(((uVar5 - uVar18) + -1) * 0x20 + *(longlong *)(param_1 + 200),
                          param_1 + 0x158);
          }
          else {
            FUN_1434a1360(param_1,"Invalid local register %d, stack only has %d entries",uVar18,
                          uVar5 & 0xffffffff);
            FUN_143411240(param_1 + 0x48,param_1 + 0x158);
          }
        }
        FUN_143411150(param_1 + 0x158);
        *(undefined1 *)(param_1 + 0x158) = 10;
        *(byte *)(param_1 + 0x17e) = *(byte *)(param_1 + 0x17e) & 0xfe;
        FUN_14340be30(param_2,param_1,*(ushort *)(pbVar10 + 1) + uVar16,*(undefined2 *)(pbVar10 + 3)
                      ,param_5,param_6,param_7);
        bVar11 = true;
        local_res18 = (uint)*(ushort *)(pbVar10 + 1) +
                      *(ushort *)(pbVar10 + 3) + uVar16 + (uint)*(ushort *)(pbVar10 + 5);
        if ((*pbVar10 & 4) == 0) {
          uVar18 = *(ulonglong *)(param_1 + 0x188);
          FUN_1434a39d0(param_1 + 0x180,param_1 + 0x180);
          if (uVar18 < uVar19) {
            puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x180) + uVar18 * 8);
            for (lVar12 = uVar19 - uVar18; lVar12 != 0; lVar12 = lVar12 + -1) {
              if (puVar14 != (undefined8 *)0x0) {
                *puVar14 = 0;
              }
              puVar14 = puVar14 + 1;
            }
          }
        }
        else {
          local_70 = local_70 & 0xffffff00;
          if ((*pbVar10 & 5) == 5) {
            uVar18 = (ulonglong)pbVar10[7];
          }
          else {
            uVar18 = 0xffffffff;
          }
          uVar5 = *(ulonglong *)(param_1 + 0xd0);
          if (uVar18 < uVar5) {
            lVar12 = ((uVar5 - uVar18) + -1) * 0x20 + *(longlong *)(param_1 + 200);
          }
          else {
            FUN_1434a1360(param_1,"Invalid local register %d, stack only has %d entries",uVar18,
                          uVar5 & 0xffffffff);
            lVar12 = param_1 + 0x48;
          }
          FUN_143411240(lVar12,&local_70);
          if (4 < (byte)local_70) {
            FUN_143411150(&local_70);
          }
        }
      }
      if ((*pbVar10 & 2) != 0) {
        uVar8 = *(ushort *)(pbVar10 + 3);
        uVar9 = *(ushort *)(pbVar10 + 1);
        *(byte *)(param_1 + 0x17e) = *(byte *)(param_1 + 0x17e) | 1;
        FUN_14340be30(param_2,param_1,(uint)uVar9 + uVar16 + uVar8,*(undefined2 *)(pbVar10 + 5),
                      param_5,param_6,param_7);
        *(byte *)(param_1 + 0x17e) = *(byte *)(param_1 + 0x17e) & 0xfe;
      }
      iVar20 = iVar20 + -1;
    } while (0 < iVar20);
  } while (bVar11);
  return *(int *)(*(longlong *)(param_2 + 0x10) + 0x18);
}



// FUNCTION 14341b3a0 FUN_14341b3a0 body=156 status=ok
// SIG undefined FUN_14341b3a0(void)

void FUN_14341b3a0(longlong param_1,uint param_2,int *param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = *param_3;
  if (0 < iVar3) {
    lVar2 = *(longlong *)(param_1 + 0x148);
    for (; (lVar2 != 0 && (-1 < iVar3)); iVar3 = iVar3 + -1) {
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x140) + -8 + lVar2 * 0x10);
      if ((uVar1 <= param_2) &&
         (param_2 < *(ushort *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x140) + -0x10 + lVar2 * 0x10) + 1) +
                    uVar1)) {
        return;
      }
      *param_3 = *param_3 + -1;
      FUN_1434a3690(param_1 + 0x140,*(longlong *)(param_1 + 0x148) + -1);
      lVar2 = *(longlong *)(param_1 + 0x148);
    }
  }
  return;
}



// FUNCTION 14341b470 FUN_14341b470 body=58 status=ok
// SIG undefined FUN_14341b470(void)

undefined4 * FUN_14341b470(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x148);
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x140) + -0x10 + lVar2 * 0x10);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *param_2 = *puVar1;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar5;
  FUN_1434a3690((longlong *)(param_1 + 0x140),lVar2 + -1);
  return param_2;
}



// FUNCTION 14341b640 FUN_14341b640 body=59 status=ok
// SIG undefined FUN_14341b640(void)

undefined8 FUN_14341b640(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xe0);
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*(longlong *)(lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4) + 8))
                      (lVar1 + (ulonglong)*(byte *)(lVar1 + 0x6d) * 4);
    return *(undefined8 *)
            (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x20) + 0x20) + 0x38) + 0x20);
  }
  return 0;
}



// FUNCTION 14341b690 FUN_14341b690 body=71 status=ok
// SIG undefined FUN_14341b690(void)

undefined8 * FUN_14341b690(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_145b0b0e8;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  FUN_14341c8a0();
  return param_1;
}



// FUNCTION 14341b6e0 FUN_14341b6e0 body=97 status=ok
// SIG undefined FUN_14341b6e0(void)

void FUN_14341b6e0(RefCountNTSImplCore *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_145b0b0e8;
  FUN_1432ef9e0(param_1 + 0x70);
  lVar1 = *(longlong *)(param_1 + 0x60);
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  FUN_1434977f0(param_1 + 0x20);
  FUN_143497ab0(param_1 + 0x18);
  FUN_143497de0(param_1 + 0x10);
  Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(param_1);
  return;
}



// FUNCTION 14341b750 FUN_14341b750 body=301 status=ok
// SIG undefined FUN_14341b750(void)

undefined8 FUN_14341b750(longlong param_1,int param_2)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int local_res10 [2];
  
  local_res10[0] = param_2;
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar9 = (undefined8 *)0x0;
  uVar7 = 0x1505;
  lVar6 = 4;
  puVar5 = puVar9;
  if (lVar2 != 0) {
    uVar4 = 0x1505;
    lVar8 = 4;
    do {
      pbVar1 = &stack0x0000000f + lVar8;
      lVar8 = lVar8 + -1;
      uVar4 = (ulonglong)*pbVar1 + uVar4 * 0x1003f;
    } while (lVar8 != 0);
    lVar8 = FUN_143494150(param_1 + 0x10,local_res10,*(ulonglong *)(lVar2 + 8) & uVar4);
    if (-1 < lVar8) {
      puVar5 = (undefined8 *)(lVar2 + (lVar8 * 3 + 3) * 8);
    }
  }
  puVar3 = puVar5 + 1;
  if (puVar5 == (undefined8 *)0x0) {
    puVar3 = puVar9;
  }
  if (puVar3 == (undefined8 *)0x0) {
    FUN_14341c3e0(param_1,*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) +
                          ((longlong)param_2 + 0x27) * 8);
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (lVar2 == 0) {
      return 0;
    }
    do {
      pbVar1 = &stack0x0000000f + lVar6;
      lVar6 = lVar6 + -1;
      uVar7 = (ulonglong)*pbVar1 + uVar7 * 0x1003f;
    } while (lVar6 != 0);
    lVar6 = FUN_143494150(param_1 + 0x10,local_res10,*(ulonglong *)(lVar2 + 8) & uVar7);
    if (lVar6 < 0) {
      return 0;
    }
    lVar2 = lVar2 + (lVar6 * 3 + 3) * 8;
    if (lVar2 == 0) {
      return 0;
    }
    puVar3 = (undefined8 *)(lVar2 + 8);
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
  }
  return *puVar3;
}



// FUNCTION 14341b890 FUN_14341b890 body=365 status=ok
// SIG undefined FUN_14341b890(void)

longlong FUN_14341b890(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  byte local_28 [32];
  
  lVar2 = FUN_14341b750(param_1,param_3);
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
  }
  local_28[0] = 0;
  plVar5 = (longlong *)(*(longlong *)(param_1 + 0x60) + 0x20);
  cVar1 = (**(code **)(*plVar5 + 0x58))
                    (plVar5,param_2 + 0xe8,
                     *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) +
                     ((longlong)param_3 + 0x27) * 8,local_28);
  lVar4 = lVar2;
  if ((cVar1 != '\0') && (lVar3 = FUN_143412120(local_28,param_2), lVar3 != 0)) {
    *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
    cVar1 = (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x58))
                      ((longlong *)(lVar3 + 0x20),param_2 + 0xe8,
                       *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x3a0,local_28);
    if (cVar1 != '\0') {
      lVar4 = FUN_143412120(local_28,param_2);
      if (lVar4 != 0) {
        *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1U & 0x8fffffff;
      }
      if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
        FUN_1434a2b80(lVar2);
      }
    }
    if ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0) {
      *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
      FUN_1434a2b80(lVar3);
    }
  }
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
    FUN_1434a2b80(lVar4);
  }
  return lVar4;
}



// FUNCTION 14341ba10 FUN_14341ba10 body=40 status=ok
// SIG undefined FUN_14341ba10(void)

undefined8 FUN_14341ba10(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1434a4420(param_1 + 0x18,param_3,param_4,6 < *(byte *)(param_2 + 8));
  return 1;
}



// FUNCTION 14341ba40 FUN_14341ba40 body=209 status=ok
// SIG undefined FUN_14341ba40(void)

undefined8 FUN_14341ba40(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *local_res8;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(byte *)(param_2 + 8) < 7) {
    lVar3 = FUN_14349fef0(plVar1,param_3);
  }
  else {
    lVar3 = *plVar1;
    lVar5 = 0;
    lVar4 = lVar5;
    if ((lVar3 != 0) &&
       (lVar2 = FUN_143494050(plVar1,param_3,
                              (ulonglong)*(uint *)(*param_3 + 0x1c) & *(ulonglong *)(lVar3 + 8)),
       -1 < lVar2)) {
      lVar4 = lVar3 + (lVar2 * 5 + 3) * 8;
    }
    lVar3 = lVar4 + 8;
    if (lVar4 == 0) {
      lVar3 = lVar5;
    }
  }
  if (lVar3 != 0) {
    if (*(byte *)(param_2 + 8) < 7) {
      local_res8 = param_3;
      if (*(longlong *)(*param_3 + 0x10) == 0) {
        FUN_14335f970();
      }
      FUN_1434909d0(plVar1,&local_res8);
      return 1;
    }
    FUN_143490d70(plVar1,param_3);
    return 1;
  }
  return 0;
}



// FUNCTION 14341bb20 FUN_14341bb20 body=152 status=ok
// SIG undefined FUN_14341bb20(void)

undefined8 FUN_14341bb20(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar3 = (longlong *)(param_1 + 0x18);
  if (*(byte *)(param_2 + 8) < 7) {
    lVar2 = FUN_14349fef0(plVar3,param_3);
  }
  else {
    lVar2 = *plVar3;
    lVar5 = 0;
    lVar4 = lVar5;
    if ((lVar2 != 0) &&
       (lVar1 = FUN_143494050(plVar3,param_3,
                              (ulonglong)*(uint *)(*param_3 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
       -1 < lVar1)) {
      lVar4 = lVar2 + (lVar1 * 5 + 3) * 8;
    }
    lVar2 = lVar4 + 8;
    if (lVar4 == 0) {
      lVar2 = lVar5;
    }
  }
  if (lVar2 != 0) {
    if (param_4 != 0) {
      FUN_143410a60(param_4,lVar2);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14341bbd0 FUN_14341bbd0 body=694 status=ok
// SIG undefined FUN_14341bbd0(void)

longlong FUN_14341bbd0(longlong *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  char *_Str;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  longlong local_res20;
  byte local_190 [32];
  byte local_170 [39];
  char acStack_149 [265];
  
  lVar7 = -1;
  do {
    lVar8 = lVar7;
    lVar7 = lVar8 + 1;
  } while (param_4[lVar8 + 1] != '\0');
  if (param_2 != 0) {
    *(uint *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1U & 0x8fffffff;
  }
  local_res18 = param_3;
  if (param_4 != (char *)0x0) {
    lVar7 = param_2;
    _Str = param_4;
    do {
      pcVar3 = strchr(_Str,0x2e);
      if (pcVar3 == (char *)0x0) {
        pcVar6 = param_4 + ((lVar8 + 2) - (longlong)_Str);
        pcVar3 = (char *)0x0;
      }
      else {
        pcVar6 = pcVar3 + (1 - (longlong)_Str);
        pcVar3 = pcVar3 + 1;
      }
      if ((char *)0x100 < pcVar6) {
        pcVar6 = (char *)0x100;
      }
      _guard_xfg_dispatch_icall_nop(acStack_149 + 1,_Str,(size_t)(pcVar6 + -1));
      lVar4 = *param_1;
      acStack_149[(longlong)pcVar6] = '\0';
      local_190[0] = 0;
      local_res20 = FUN_143360a60(*(undefined8 *)
                                   (*(longlong *)(*(longlong *)(lVar4 + 0x28) + 0x18) + 0x618),
                                  acStack_149 + 1);
      *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
      cVar2 = (**(code **)(*(longlong *)(lVar7 + 0x20) + 0x58))
                        (lVar7 + 0x20,param_1,&local_res20,local_190);
      if (cVar2 == '\0') {
        lVar4 = (**(code **)(**(longlong **)(*param_1 + 0x30) + 0x50))
                          (*(longlong **)(*param_1 + 0x30),0x68);
        if (lVar4 == 0) {
          param_2 = 0;
        }
        else {
          param_2 = FUN_143414820(lVar4,param_1,local_res18);
        }
        lVar4 = *(longlong *)(lVar7 + 0x20);
        local_res10[0] = 0;
        uVar5 = FUN_143410c00(local_170,param_2);
        (**(code **)(lVar4 + 0x50))(lVar7 + 0x20,param_1,&local_res20,uVar5,local_res10);
        if (4 < local_170[0]) {
          FUN_143411150(local_170);
        }
      }
      else {
        param_2 = FUN_143412120(local_190,0);
        if (param_2 != 0) {
          *(uint *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1U & 0x8fffffff;
        }
      }
      if (param_2 != 0) {
        *(uint *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1U & 0x8fffffff;
      }
      if ((*(uint *)(lVar7 + 0x18) & 0x3ffffff) != 0) {
        *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) - 1;
        FUN_1434a2b80(lVar7);
      }
      piVar1 = (int *)(local_res20 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if ((param_2 != 0) && ((*(uint *)(param_2 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) - 1;
        FUN_1434a2b80(param_2);
      }
      if (4 < local_190[0]) {
        FUN_143411150(local_190);
      }
      lVar7 = param_2;
      _Str = pcVar3;
    } while (pcVar3 != (char *)0x0);
  }
  if ((param_2 != 0) && ((*(uint *)(param_2 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) - 1;
    FUN_1434a2b80(param_2);
  }
  return param_2;
}



// FUNCTION 14341be90 FUN_14341be90 body=1186 status=ok
// SIG undefined FUN_14341be90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14341be90(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  char *pcVar13;
  longlong *plVar14;
  bool bVar15;
  byte bVar16;
  longlong *local_88;
  longlong lStack_80;
  byte local_78;
  byte local_70 [48];
  
  bVar15 = false;
  bVar5 = false;
  if (param_4 != (longlong *)0x0) {
    iVar7 = (**(code **)(*param_4 + 0x10))(param_4);
    if (iVar7 - 2U < 4) {
      iVar7 = (**(code **)(*param_4 + 0x10))();
      if (iVar7 - 2U < 4) {
        param_4 = (longlong *)(**(code **)(param_4[-1] + 200))(param_4 + -1);
      }
      else {
        param_4 = (longlong *)(**(code **)(_DAT_00000000 + 200))();
      }
    }
    else {
      iVar7 = (**(code **)(*param_4 + 0x10))();
      if (iVar7 - 6U < 0x27) {
        param_4 = param_4 + -4;
      }
      else {
        param_4 = (longlong *)0x0;
      }
    }
    plVar14 = (longlong *)(*(longlong *)(param_1 + 0x60) + 0x38);
    lVar2 = *plVar14;
    if (lVar2 == 0) {
      local_88 = (longlong *)0x0;
      lStack_80 = 0;
      uVar10 = 0;
      plVar14 = (longlong *)0x0;
      bVar15 = false;
    }
    else {
      uVar10 = 0;
      plVar9 = (longlong *)(lVar2 + 0x10);
      do {
        if (*plVar9 != -2) break;
        uVar10 = uVar10 + 1;
        plVar9 = plVar9 + 6;
      } while (uVar10 <= *(ulonglong *)(lVar2 + 8));
    }
    do {
      if (((plVar14 == (longlong *)0x0) || (lVar2 = *plVar14, lVar2 == 0)) ||
         (*(longlong *)(lVar2 + 8) < (longlong)uVar10)) break;
      pcVar13 = (char *)(lVar2 + 0x20 + uVar10 * 0x30);
      lVar2 = uVar10 * 0x30 + lVar2;
      iVar7 = (**(code **)(param_4[4] + 0x10))();
      if (iVar7 == 0x17) {
        cVar6 = *pcVar13;
        if ((cVar6 == '\b') ||
           (plVar9 = local_88, lVar11 = lStack_80, bVar16 = local_78, cVar6 == '\v')) {
          bVar15 = true;
          if (cVar6 == '\b') {
            plVar9 = *(longlong **)(pcVar13 + 8);
            bVar16 = 0;
            if (plVar9 != (longlong *)0x0) {
              *(uint *)(plVar9 + 3) = (int)plVar9[3] + 1U & 0x8fffffff;
            }
            lVar12 = *(longlong *)(pcVar13 + 0x10);
            lVar11 = 0;
            if ((lVar12 != 0) &&
               (bVar16 = (pcVar13[0x18] & 1U) != 0, lVar11 = lVar12, !(bool)bVar16)) {
              *(uint *)(lVar12 + 0x18) = *(int *)(lVar12 + 0x18) + 1U & 0x8fffffff;
            }
          }
          else if (cVar6 == '\v') {
            FUN_143413f20(pcVar13,&local_88,param_3);
            plVar9 = local_88;
            lVar11 = lStack_80;
            bVar16 = local_78;
          }
          else {
            local_88 = (longlong *)0x0;
            lStack_80 = 0;
            plVar9 = (longlong *)0x0;
            lVar11 = 0;
            bVar16 = 0;
          }
          bVar5 = bVar15;
          if (plVar9 != param_4) goto LAB_14341bfd3;
          bVar4 = true;
        }
        else {
LAB_14341bfd3:
          bVar4 = false;
        }
        if (bVar15) {
          bVar15 = false;
          if ((((bVar16 & 2) == 0) && (plVar9 != (longlong *)0x0)) &&
             ((*(uint *)(plVar9 + 3) & 0x3ffffff) != 0)) {
            *(uint *)(plVar9 + 3) = *(uint *)(plVar9 + 3) - 1;
            FUN_1434a2b80();
          }
          bVar5 = bVar15;
          if ((((bVar16 & 1) == 0) && (lVar11 != 0)) &&
             ((*(uint *)(lVar11 + 0x18) & 0x3ffffff) != 0)) {
            *(uint *)(lVar11 + 0x18) = *(uint *)(lVar11 + 0x18) - 1;
            FUN_1434a2b80(lVar11);
          }
        }
        if (bVar4) {
LAB_14341c02e:
          lVar2 = *(longlong *)(lVar2 + 0x18);
          *param_2 = lVar2;
          piVar1 = (int *)(lVar2 + 0x18);
          *piVar1 = *piVar1 + 1;
          return param_2;
        }
      }
      else {
        if ((*pcVar13 == '\x06') &&
           (plVar9 = (longlong *)FUN_143412120(pcVar13,param_3), plVar9 == param_4))
        goto LAB_14341c02e;
        cVar6 = *pcVar13;
        if ((cVar6 == '\b') || (cVar6 == '\v')) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (bVar4) {
          if (cVar6 == '\b') {
            plVar9 = *(longlong **)(pcVar13 + 8);
            bVar16 = 0;
            if (plVar9 != (longlong *)0x0) {
              *(uint *)(plVar9 + 3) = (int)plVar9[3] + 1U & 0x8fffffff;
            }
            lVar11 = *(longlong *)(pcVar13 + 0x10);
            lVar12 = 0;
            if ((lVar11 != 0) &&
               (bVar16 = (pcVar13[0x18] & 1U) != 0, lVar12 = lVar11, !(bool)bVar16)) {
              *(uint *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1U & 0x8fffffff;
            }
          }
          else if (cVar6 == '\v') {
            FUN_143413f20(pcVar13,&local_88,param_3);
            lVar12 = lStack_80;
            plVar9 = local_88;
            bVar16 = local_78;
          }
          else {
            local_88 = (longlong *)0x0;
            lStack_80 = 0;
            lVar12 = 0;
            plVar9 = (longlong *)0x0;
            bVar16 = 0;
          }
          local_70[0] = 0;
          cVar6 = (**(code **)(plVar9[4] + 0x58))
                            (plVar9 + 4,param_3 + 0xe8,
                             *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x3a0,local_70);
          if (((cVar6 != '\0') && (local_70[0] == 6)) &&
             (plVar8 = (longlong *)FUN_143412120(local_70,param_3), plVar8 == param_4)) {
            FUN_143360200(lVar2 + 0x18,param_2,".prototype");
            if (4 < local_70[0]) {
              FUN_143411150(local_70);
            }
            if ((((bVar16 & 2) == 0) && (plVar9 != (longlong *)0x0)) &&
               ((*(uint *)(plVar9 + 3) & 0x3ffffff) != 0)) {
              *(uint *)(plVar9 + 3) = *(uint *)(plVar9 + 3) - 1;
              FUN_1434a2b80(plVar9);
            }
            if ((bVar16 & 1) != 0) {
              return param_2;
            }
            if (lVar12 == 0) {
              return param_2;
            }
            if ((*(uint *)(lVar12 + 0x18) & 0x3ffffff) == 0) {
              return param_2;
            }
            *(uint *)(lVar12 + 0x18) = *(uint *)(lVar12 + 0x18) - 1;
            FUN_1434a2b80(lVar12);
            return param_2;
          }
          if (4 < local_70[0]) {
            FUN_143411150(local_70);
          }
          if (((bVar16 & 2) == 0) && ((*(uint *)(plVar9 + 3) & 0x3ffffff) != 0)) {
            *(uint *)(plVar9 + 3) = *(uint *)(plVar9 + 3) - 1;
            FUN_1434a2b80(plVar9);
          }
          bVar15 = bVar5;
          if ((((bVar16 & 1) == 0) && (lVar12 != 0)) &&
             ((*(uint *)(lVar12 + 0x18) & 0x3ffffff) != 0)) {
            *(uint *)(lVar12 + 0x18) = *(uint *)(lVar12 + 0x18) - 1;
            FUN_1434a2b80(lVar12);
          }
        }
      }
      uVar3 = *(ulonglong *)(*plVar14 + 8);
      if (((longlong)uVar10 <= (longlong)uVar3) && (uVar10 = uVar10 + 1, uVar10 <= uVar3)) {
        plVar9 = (longlong *)(*plVar14 + 0x10 + uVar10 * 0x30);
        do {
          if (*plVar9 != -2) break;
          uVar10 = uVar10 + 1;
          plVar9 = plVar9 + 6;
        } while (uVar10 <= uVar3);
      }
    } while( true );
  }
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x2a8);
  *param_2 = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  return param_2;
}



// FUNCTION 14341c340 FUN_14341c340 body=148 status=ok
// SIG undefined FUN_14341c340(void)

longlong FUN_14341c340(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x20);
  lVar5 = 0;
  lVar3 = lVar5;
  if ((lVar4 != 0) &&
     (lVar2 = FUN_143493f50(param_1 + 0x20,param_2,
                            (ulonglong)*(uint *)(*param_2 + 0x1c) & *(ulonglong *)(lVar4 + 8)),
     -1 < lVar2)) {
    lVar3 = lVar2 * 0x20 + 0x18 + lVar4;
  }
  lVar4 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar4 = lVar5;
  }
  if (lVar4 == 0) {
    piVar1 = (int *)(*param_2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    return 0;
  }
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return lVar4;
}



// FUNCTION 14341c3e0 FUN_14341c3e0 body=437 status=ok
// SIG undefined FUN_14341c3e0(void)

longlong FUN_14341c3e0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  longlong local_res10;
  longlong local_res18 [2];
  longlong local_48;
  longlong local_40;
  byte local_38;
  
  local_res18[0] = *param_2;
  *(int *)(local_res18[0] + 0x18) = *(int *)(local_res18[0] + 0x18) + 1;
  puVar2 = (undefined8 *)FUN_14341c340(param_1,local_res18);
  if (puVar2 != (undefined8 *)0x0) {
    plVar3 = puVar2 + 1;
    if (puVar2[1] == 0) {
      plVar3 = (longlong *)(*(code *)*puVar2)(&local_48,param_1);
      bVar6 = false;
      lVar1 = *plVar3;
      if (lVar1 != 0) {
        *(uint *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1U & 0x8fffffff;
      }
      lVar4 = plVar3[1];
      lVar5 = 0;
      if ((lVar4 != 0) && (bVar6 = (*(byte *)(plVar3 + 2) & 1) != 0, lVar5 = lVar4, !bVar6)) {
        *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1U & 0x8fffffff;
      }
      if ((((local_38 & 2) == 0) && (local_48 != 0)) &&
         ((*(uint *)(local_48 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(local_48 + 0x18) = *(uint *)(local_48 + 0x18) - 1;
        FUN_1434a2b80();
      }
      local_48 = 0;
      if ((((local_38 & 1) == 0) && (local_40 != 0)) &&
         ((*(uint *)(local_40 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(local_40 + 0x18) = *(uint *)(local_40 + 0x18) - 1;
        FUN_1434a2b80();
      }
      local_res10 = *param_2;
      local_40 = 0;
      *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
      lVar4 = FUN_14341c340(param_1,&local_res10);
      plVar3 = (longlong *)(lVar4 + 8);
      if (lVar1 != 0) {
        *(uint *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1U & 0x8fffffff;
      }
      lVar4 = *plVar3;
      if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
        FUN_1434a2b80();
      }
      *plVar3 = lVar1;
      if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
        FUN_1434a2b80(lVar1);
      }
      if (((!bVar6) && (lVar5 != 0)) && ((*(uint *)(lVar5 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) - 1;
        FUN_1434a2b80(lVar5);
      }
    }
    return *plVar3;
  }
  return 0;
}



// FUNCTION 14341c5e0 GetStringManager body=15 status=ok
// SIG undefined GetStringManager(void)

longlong Scaleform::GFx::AS2::GlobalContext::GetStringManager(longlong param_1)

{
  return *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x138;
}



// FUNCTION 14341c600 FUN_14341c600 body=659 status=ok
// SIG undefined FUN_14341c600(void)

void FUN_14341c600(longlong param_1,char param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong local_res8;
  undefined1 local_res10 [8];
  longlong local_res18;
  longlong local_res20;
  longlong local_58;
  undefined1 local_50;
  byte local_48 [40];
  
  if (param_2 == '\0') {
    lVar2 = *(longlong *)(param_1 + 0x60);
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
      FUN_1434a2b80();
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  else {
    puVar3 = (undefined8 *)
             (**(code **)(**(longlong **)(param_1 + 0x30) + 0x50))
                       (*(longlong **)(param_1 + 0x30),0x70);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      if (*(longlong *)(param_1 + 0x28) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x38) + 0x20);
      }
      FUN_143416140(puVar3,uVar5);
      puVar3[0xd] = param_1;
      *puVar3 = &PTR_LAB_145b11280;
      puVar3[4] = &PTR_LAB_145b112c8;
    }
    local_50 = 8;
    local_58 = param_1;
    local_res20 = FUN_143360950(*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x618),
                                "gfxPlayer",9);
    *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
    local_res18 = FUN_143360950(*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x618),
                                "gfxLanguage",0xb);
    *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
    local_res8 = FUN_143360950(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(local_58 + 0x28) + 0x18) + 0x618),
                               "gfxArg",6);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x60) + 0x20);
    local_48[0] = 0;
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_58,&local_res20,local_48);
    local_res10[0] = 0;
    (**(code **)(puVar3[4] + 0x50))(puVar3 + 4,&local_58,&local_res20,local_48,local_res10);
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x60) + 0x20);
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_58,&local_res18,local_48);
    local_res10[0] = 0;
    (**(code **)(puVar3[4] + 0x50))(puVar3 + 4,&local_58,&local_res18,local_48,local_res10);
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x60) + 0x20);
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_58,&local_res8,local_48);
    local_res10[0] = 0;
    (**(code **)(puVar3[4] + 0x50))(puVar3 + 4,&local_58,&local_res8,local_48,local_res10);
    *(uint *)(puVar3 + 3) = *(int *)(puVar3 + 3) + 1U & 0x8fffffff;
    lVar2 = *(longlong *)(param_1 + 0x60);
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
      FUN_1434a2b80();
    }
    *(undefined8 **)(param_1 + 0x60) = puVar3;
    if (4 < local_48[0]) {
      FUN_143411150(local_48);
    }
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    piVar1 = (int *)(local_res18 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    piVar1 = (int *)(local_res20 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    if ((*(uint *)(puVar3 + 3) & 0x3ffffff) != 0) {
      *(uint *)(puVar3 + 3) = *(uint *)(puVar3 + 3) - 1;
      FUN_1434a2b80(puVar3);
    }
  }
  FUN_143497ab0(param_1 + 0x18);
  FUN_1434977f0(param_1 + 0x20);
  FUN_143497de0(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 14341c8a0 FUN_14341c8a0 body=4845 status=ok
// SIG undefined FUN_14341c8a0(void)

void FUN_14341c8a0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 local_res8;
  undefined8 *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_138;
  undefined1 local_130;
  undefined8 *local_128;
  undefined8 **local_120;
  undefined8 **local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  ulonglong local_f0;
  undefined1 local_e8;
  undefined8 *local_e0;
  longlong local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined **local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 *local_70;
  undefined8 local_68;
  undefined1 local_60;
  
  *(undefined8 **)(param_1 + 0x28) = param_2;
  plVar9 = (longlong *)param_2[9];
  puVar8 = (undefined8 *)0x0;
  local_130 = 8;
  *(longlong **)(param_1 + 0x30) = plVar9;
  local_res10 = param_2;
  local_138 = param_1;
  if (*(longlong *)(param_1 + 0x60) == 0) {
    puVar2 = (undefined8 *)(**(code **)(*plVar9 + 0x50))(plVar9,0x70,0);
    puVar3 = puVar8;
    if (puVar2 != (undefined8 *)0x0) {
      if (*(longlong *)(param_1 + 0x28) != 0) {
        puVar3 = *(undefined8 **)
                  (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x38) + 0x20)
        ;
      }
      FUN_143416140(puVar2,puVar3);
      puVar2[0xd] = param_1;
      *puVar2 = &PTR_LAB_145b11280;
      puVar2[4] = &PTR_LAB_145b112c8;
      puVar3 = puVar2;
    }
    lVar4 = *(longlong *)(param_1 + 0x60);
    if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
      FUN_1434a2b80();
    }
    *(undefined8 **)(param_1 + 0x60) = puVar3;
  }
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x30) + 0x50))
                     (*(longlong **)(param_1 + 0x30),0x70);
  puVar3 = puVar8;
  if (puVar2 != (undefined8 *)0x0) {
    if ((local_138 != 0) && (*(longlong *)(local_138 + 0x28) != 0)) {
      puVar3 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_138 + 0x28) + 0x18) + 0x38) + 0x20)
      ;
    }
    puVar2[1] = puVar3;
    *(undefined4 *)(puVar2 + 3) = 1;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *puVar2 = &PTR_LAB_145b0ac50;
    puVar2[4] = &PTR_LAB_145b0ac98;
    puVar2[7] = 0;
    *(undefined1 *)(puVar2 + 10) = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    *(undefined2 *)(puVar2 + 0xc) = 0;
    lVar4 = puVar2[6];
    if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar2[6] = 0;
    puVar2[4] = &PTR_LAB_145b0aef8;
    *puVar2 = &PTR_LAB_145b0ae70;
    puVar2[0xd] = FUN_143423a70;
    lVar4 = FUN_14341b750(local_138,7);
    if (puVar2[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_70 = (undefined8 *)CONCAT71(local_70._1_7_,10);
      (**(code **)(puVar2[4] + 0x50))
                (puVar2 + 4,&local_138,*(longlong *)(*(longlong *)(local_138 + 0x28) + 0x18) + 0x3a8
                 ,&local_70,&local_res8);
      if (4 < (byte)local_70) {
        FUN_143411150(&local_70);
      }
    }
    if (lVar4 != 0) {
      *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1U & 0x8fffffff;
    }
    lVar11 = puVar2[6];
    if ((lVar11 != 0) && ((*(uint *)(lVar11 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar11 + 0x18) = *(uint *)(lVar11 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar2[6] = lVar4;
    *puVar2 = &PTR_LAB_145b0afa0;
    puVar2[4] = &PTR_LAB_145b0aef8;
    FUN_14340b610(puVar2 + 4,&local_138,&PTR_s_registerClass_145b079e0,7);
    puVar3 = puVar2;
  }
  local_60 = 0;
  local_68 = 0;
  local_70 = puVar3;
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x30) + 0x50))
                     (*(longlong **)(param_1 + 0x30),0x70);
  puVar2 = puVar8;
  if (puVar5 != (undefined8 *)0x0) {
    if ((local_138 != 0) && (*(longlong *)(local_138 + 0x28) != 0)) {
      puVar2 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_138 + 0x28) + 0x18) + 0x38) + 0x20)
      ;
    }
    puVar5[1] = puVar2;
    *(undefined4 *)(puVar5 + 3) = 1;
    puVar5[5] = 0;
    puVar5[6] = 0;
    *puVar5 = &PTR_LAB_145b0ac50;
    puVar5[4] = &PTR_LAB_145b0ac98;
    puVar5[7] = 0;
    *(undefined1 *)(puVar5 + 10) = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[0xb] = 0;
    *(undefined2 *)(puVar5 + 0xc) = 0;
    lVar4 = puVar5[6];
    if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar5[6] = 0;
    *puVar5 = &PTR_LAB_145b0ae70;
    puVar5[4] = &PTR_LAB_145b0aef8;
    puVar5[0xd] = FUN_143424b10;
    lVar4 = FUN_14341b750(local_138,7);
    if (puVar5[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_90 = (undefined8 *)CONCAT71(local_90._1_7_,10);
      (**(code **)(puVar5[4] + 0x50))
                (puVar5 + 4,&local_138,*(longlong *)(*(longlong *)(local_138 + 0x28) + 0x18) + 0x3a8
                 ,&local_90,&local_res8);
      if (4 < (byte)local_90) {
        FUN_143411150(&local_90);
      }
    }
    if (lVar4 != 0) {
      *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1U & 0x8fffffff;
    }
    lVar11 = puVar5[6];
    if ((lVar11 != 0) && ((*(uint *)(lVar11 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar11 + 0x18) = *(uint *)(lVar11 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar5[6] = lVar4;
    *puVar5 = &PTR_LAB_145b0b028;
    puVar5[4] = &PTR_LAB_145b0aef8;
    puVar2 = puVar5;
  }
  local_80 = 0;
  local_88 = 0;
  local_90 = puVar2;
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x30) + 0x50))
                     (*(longlong **)(param_1 + 0x30),0xa8,0);
  if (puVar5 != (undefined8 *)0x0) {
    if ((local_138 != 0) && (*(longlong *)(local_138 + 0x28) != 0)) {
      puVar8 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_138 + 0x28) + 0x18) + 0x38) + 0x20)
      ;
    }
    puVar5[1] = puVar8;
    *(undefined4 *)(puVar5 + 3) = 1;
    puVar5[5] = 0;
    puVar5[6] = 0;
    *puVar5 = &PTR_LAB_145b0ac50;
    puVar5[4] = &PTR_LAB_145b0ac98;
    puVar5[7] = 0;
    *(undefined1 *)(puVar5 + 10) = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[0xb] = 0;
    *(undefined2 *)(puVar5 + 0xc) = 0;
    lVar4 = puVar5[6];
    if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar5[6] = 0;
    *(undefined1 *)(puVar5 + 0x10) = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    *(undefined1 *)(puVar5 + 0x13) = 0;
    puVar5[0x11] = 0;
    puVar5[0x12] = 0;
    puVar5[0x14] = 0;
    puVar5[4] = &PTR_LAB_145b0b5d0;
    puVar5[0xd] = &PTR_LAB_145b0b678;
    *puVar5 = &PTR_LAB_145b0b588;
    local_100 = (undefined8 *)CONCAT71(local_100._1_7_,8);
    local_e8 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      *(uint *)(puVar3 + 3) = *(int *)(puVar3 + 3) + 1U & 0x8fffffff;
    }
    local_f0 = 0;
    local_f8 = puVar3;
    FUN_1434231f0(puVar5 + 0xd,puVar5,&local_138,&local_100);
    if (4 < (byte)local_100) {
      FUN_143411150(&local_100);
    }
    lVar4 = puVar5[0xe];
    local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
    lVar11 = *(longlong *)(lVar4 + 0x20);
    lVar10 = *(longlong *)(*(longlong *)(local_138 + 0x28) + 0x18);
    uVar6 = FUN_143410c00(&local_100,puVar5);
    (**(code **)(lVar11 + 0x50))(lVar4 + 0x20,&local_138,lVar10 + 0x3a0,uVar6,&local_res8);
    if (4 < (byte)local_100) {
      FUN_143411150(&local_100);
    }
    local_res18[0] = 1;
    *puVar5 = &PTR_LAB_145b0b588;
    puVar5[4] = &PTR_LAB_145b0b5d0;
    puVar5[0xd] = &PTR_LAB_145b0b678;
    FUN_143422ee0(puVar5 + 0xd,puVar5,&local_138,&PTR_s_addProperty_145b07f40,local_res18);
    puVar8 = puVar5;
  }
  puVar5 = (undefined8 *)0x0;
  local_128 = puVar8;
  puVar7 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x30) + 0x50))
                     (*(longlong **)(param_1 + 0x30),0xa8,0);
  puVar8 = local_128;
  if (puVar7 != (undefined8 *)0x0) {
    if ((local_138 != 0) && (*(longlong *)(local_138 + 0x28) != 0)) {
      puVar5 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_138 + 0x28) + 0x18) + 0x38) + 0x20)
      ;
    }
    puVar7[1] = puVar5;
    *(undefined4 *)(puVar7 + 3) = 1;
    puVar7[5] = 0;
    puVar7[6] = 0;
    *puVar7 = &PTR_LAB_145b0ac50;
    puVar7[4] = &PTR_LAB_145b0ac98;
    puVar7[7] = 0;
    *(undefined1 *)(puVar7 + 10) = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[0xb] = 0;
    *(undefined2 *)(puVar7 + 0xc) = 0;
    if (puVar7[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_c8 = (undefined8 *)CONCAT71(local_c8._1_7_,10);
      FUN_143415510(puVar7 + 4,&local_138,
                    *(longlong *)(*(longlong *)(local_138 + 0x28) + 0x18) + 0x3a8,&local_c8,
                    &local_res8);
      if (4 < (byte)local_c8) {
        FUN_143411150(&local_c8);
      }
    }
    if (puVar8 != (undefined8 *)0x0) {
      *(uint *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1U & 0x8fffffff;
    }
    lVar4 = puVar7[6];
    if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar7[6] = puVar8;
    *(undefined1 *)(puVar7 + 0x10) = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
    *(undefined1 *)(puVar7 + 0x13) = 0;
    puVar7[0x11] = 0;
    puVar7[0x12] = 0;
    puVar7[0x14] = 0;
    *puVar7 = &PTR_LAB_145b0b588;
    puVar7[4] = &PTR_LAB_145b0b5d0;
    puVar7[0xd] = &PTR_LAB_145b0b678;
    local_100 = (undefined8 *)CONCAT71(local_100._1_7_,8);
    local_e8 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      *(uint *)(puVar2 + 3) = *(int *)(puVar2 + 3) + 1U & 0x8fffffff;
    }
    local_f0 = 0;
    local_f8 = puVar2;
    FUN_1434231f0(puVar7 + 0xd,puVar7,&local_138,&local_100);
    if (4 < (byte)local_100) {
      FUN_143411150(&local_100);
    }
    lVar4 = puVar7[0xe];
    local_res18[0] = 3;
    lVar11 = *(longlong *)(lVar4 + 0x20);
    lVar10 = *(longlong *)(*(longlong *)(local_138 + 0x28) + 0x18);
    uVar6 = FUN_143410c00(&local_100,puVar7);
    (**(code **)(lVar11 + 0x50))(lVar4 + 0x20,&local_138,lVar10 + 0x3a0,uVar6,local_res18);
    if (4 < (byte)local_100) {
      FUN_143411150(&local_100);
    }
    local_res20[0] = 1;
    *puVar7 = &PTR_LAB_145b0b680;
    puVar7[4] = &PTR_LAB_145b0b6c8;
    puVar7[0xd] = &PTR_LAB_145b0b770;
    FUN_143422ee0(puVar7 + 0xd,puVar7,&local_138,&PTR_s_apply_145b07ea0,local_res20);
    puVar5 = puVar7;
  }
  local_e0 = puVar5;
  (**(code **)(puVar3[4] + 0x68))(puVar3 + 4,&local_138,puVar5);
  (**(code **)(puVar2[4] + 0x68))(puVar2 + 4,&local_138,local_e0);
  local_120 = (undefined8 **)&local_res8;
  local_res8._0_4_ = 1;
  lVar11 = 0x1505;
  local_118 = &local_128;
  lVar10 = 0x1505;
  lVar4 = 4;
  do {
    lVar1 = lVar4 + -0x19;
    lVar4 = lVar4 + -1;
    lVar10 = lVar10 * 0x1003f + (ulonglong)(byte)local_res20[lVar1];
  } while (lVar4 != 0);
  FUN_1434936b0(param_1 + 0x10,param_1 + 0x10,&local_120,lVar10);
  local_120 = (undefined8 **)&local_res8;
  local_res8 = (undefined8 *)CONCAT44(local_res8._4_4_,7);
  lVar10 = 0x1505;
  local_118 = &local_e0;
  lVar4 = 4;
  do {
    lVar1 = lVar4 + -0x19;
    lVar4 = lVar4 + -1;
    lVar10 = lVar10 * 0x1003f + (ulonglong)(byte)local_res20[lVar1];
  } while (lVar4 != 0);
  FUN_1434936b0(param_1 + 0x10,param_1 + 0x10,&local_120,lVar10);
  puVar8 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x30) + 0x50))
                     (*(longlong **)(param_1 + 0x30),0x70);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    if ((local_138 == 0) || (*(longlong *)(local_138 + 0x28) == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(*(longlong *)(local_138 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar8[1] = uVar6;
    *(undefined4 *)(puVar8 + 3) = 1;
    puVar8[5] = 0;
    puVar8[6] = 0;
    *puVar8 = &PTR_LAB_145b0ac50;
    puVar8[4] = &PTR_LAB_145b0ac98;
    puVar8[7] = 0;
    *(undefined1 *)(puVar8 + 10) = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[0xb] = 0;
    *(undefined2 *)(puVar8 + 0xc) = 0;
    lVar4 = puVar8[6];
    if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar8[6] = 0;
    *puVar8 = &PTR_LAB_145b0ae70;
    puVar8[4] = &PTR_LAB_145b0aef8;
    puVar8[0xd] = FUN_1434302a0;
    lVar4 = FUN_14341b750(local_138,7);
    if (puVar8[6] == 0) {
      local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,3);
      local_100 = (undefined8 *)CONCAT71(local_100._1_7_,10);
      (**(code **)(puVar8[4] + 0x50))
                (puVar8 + 4,&local_138,*(longlong *)(*(longlong *)(local_138 + 0x28) + 0x18) + 0x3a8
                 ,&local_100,&local_res8);
      if (4 < (byte)local_100) {
        FUN_143411150(&local_100);
      }
    }
    if (lVar4 != 0) {
      *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1U & 0x8fffffff;
    }
    lVar10 = puVar8[6];
    if ((lVar10 != 0) && ((*(uint *)(lVar10 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar10 + 0x18) = *(uint *)(lVar10 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar8[6] = lVar4;
    *puVar8 = &PTR_LAB_145b0bd50;
    puVar8[4] = &PTR_LAB_145b0aef8;
  }
  puVar5 = (undefined8 *)0x0;
  local_f0 = local_f0 & 0xffffffffffffff00;
  local_f8 = (undefined8 *)0x0;
  local_100 = puVar8;
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x50))
                    (*(longlong **)(param_1 + 0x30),0x140,0);
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)FUN_143469ee0(lVar4,&local_138,local_res10);
  }
  local_b8 = 0;
  local_c0 = 0;
  local_res8 = puVar5;
  local_c8 = puVar5;
  puVar7 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x30) + 0x50))
                     (*(longlong **)(param_1 + 0x30),0xa8,0);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    local_res10 = local_128;
    if ((local_138 == 0) || (*(longlong *)(local_138 + 0x28) == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(*(longlong *)(local_138 + 0x28) + 0x18) + 0x38) + 0x20);
    }
    puVar7[1] = uVar6;
    *(undefined4 *)(puVar7 + 3) = 1;
    puVar7[5] = 0;
    puVar7[6] = 0;
    *puVar7 = &PTR_LAB_145b0ac50;
    puVar7[4] = &PTR_LAB_145b0ac98;
    puVar7[7] = 0;
    *(undefined1 *)(puVar7 + 10) = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[0xb] = 0;
    *(undefined2 *)(puVar7 + 0xc) = 0;
    lVar4 = puVar7[6];
    if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
      FUN_1434a2b80();
    }
    puVar7[6] = 0;
    *puVar7 = &PTR_LAB_145b0ac50;
    puVar7[4] = &PTR_LAB_145b0f570;
    FUN_1434a4d00(puVar7 + 4,&local_138,local_res10);
    *(undefined1 *)(puVar7 + 0x10) = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
    *(undefined1 *)(puVar7 + 0x13) = 0;
    puVar7[0x11] = 0;
    puVar7[0x12] = 0;
    puVar7[0x14] = 0;
    *puVar7 = &PTR_LAB_145b0f618;
    puVar7[4] = &PTR_LAB_145b0f660;
    puVar7[0xd] = &PTR_LAB_145b0f708;
    FUN_1434230f0(puVar7 + 0xd,puVar7,&local_138,&local_c8);
    local_res10 = (undefined8 *)CONCAT71(local_res10._1_7_,1);
    *puVar7 = &PTR_LAB_145b0f618;
    puVar7[4] = &PTR_LAB_145b0f660;
    puVar7[0xd] = &PTR_LAB_145b0f708;
    FUN_143422ee0(puVar7 + 0xd,puVar7,&local_138,&PTR_s_addListener_145b088f0,&local_res10);
    puVar5 = local_res8;
  }
  local_120 = &local_res10;
  lVar10 = 0x1505;
  local_118 = &local_d0;
  local_res10 = (undefined8 *)CONCAT44(local_res10._4_4_,0x1a);
  lVar4 = 4;
  do {
    lVar1 = lVar4 + 7;
    lVar4 = lVar4 + -1;
    lVar10 = lVar10 * 0x1003f + (ulonglong)*(byte *)((longlong)&local_res8 + lVar1);
  } while (lVar4 != 0);
  local_d0 = puVar7;
  FUN_1434936b0(param_1 + 0x10,param_1 + 0x10,&local_120,lVar10);
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x50))
                    (*(longlong **)(param_1 + 0x30),0xb8,0);
  local_d8 = 0;
  if (lVar4 != 0) {
    local_d8 = FUN_143430160(lVar4,&local_138,local_128,&local_100);
  }
  lVar4 = 4;
  local_120 = &local_res10;
  local_res10 = (undefined8 *)CONCAT44(local_res10._4_4_,6);
  local_118 = (undefined8 **)&local_d8;
  do {
    lVar10 = lVar4 + 7;
    lVar4 = lVar4 + -1;
    lVar11 = (ulonglong)*(byte *)((longlong)&local_res8 + lVar10) + lVar11 * 0x1003f;
  } while (lVar4 != 0);
  FUN_1434936b0(param_1 + 0x10,param_1 + 0x10,&local_120,lVar11);
  lVar4 = *(longlong *)(param_1 + 0x60) + 0x20;
  if (*(longlong *)(param_1 + 0x60) == 0) {
    lVar4 = 0;
  }
  FUN_14340b610(lVar4,&local_138,&PTR_s_trace_1467ce8c0,0);
  local_res10 = (undefined8 *)((ulonglong)local_res10 & 0xffffffffffffff00);
  local_120 = (undefined8 **)CONCAT71(local_120._1_7_,8);
  plVar9 = (longlong *)(*(longlong *)(param_1 + 0x60) + 0x20);
  local_108 = 0;
  *(uint *)(puVar3 + 3) = *(int *)(puVar3 + 3) + 1U & 0x8fffffff;
  local_110 = 0;
  local_118 = (undefined8 **)puVar3;
  (**(code **)(*plVar9 + 0x50))
            (plVar9,&local_138,*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x140,
             &local_120,&local_res10);
  if (4 < (byte)local_120) {
    FUN_143411150(&local_120);
  }
  local_res10 = (undefined8 *)((ulonglong)local_res10 & 0xffffffffffffff00);
  local_120 = (undefined8 **)CONCAT71(local_120._1_7_,8);
  plVar9 = (longlong *)(*(longlong *)(param_1 + 0x60) + 0x20);
  local_108 = 0;
  *(uint *)(puVar2 + 3) = *(int *)(puVar2 + 3) + 1U & 0x8fffffff;
  local_110 = 0;
  local_118 = (undefined8 **)puVar2;
  (**(code **)(*plVar9 + 0x50))
            (plVar9,&local_138,*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x170,
             &local_120,&local_res10);
  if (4 < (byte)local_120) {
    FUN_143411150(&local_120);
  }
  plVar9 = (longlong *)(*(longlong *)(param_1 + 0x60) + 0x20);
  local_res10 = (undefined8 *)((ulonglong)local_res10 & 0xffffffffffffff00);
  local_120 = (undefined8 **)CONCAT71(local_120._1_7_,8);
  local_108 = 0;
  if (puVar8 != (undefined8 *)0x0) {
    *(uint *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1U & 0x8fffffff;
  }
  local_110 = 0;
  local_118 = (undefined8 **)puVar8;
  (**(code **)(*plVar9 + 0x50))
            (plVar9,&local_138,*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x168,
             &local_120,&local_res10);
  if (4 < (byte)local_120) {
    FUN_143411150(&local_120);
  }
  plVar9 = (longlong *)(*(longlong *)(param_1 + 0x60) + 0x20);
  local_res10 = (undefined8 *)((ulonglong)local_res10 & 0xffffffffffffff00);
  local_120 = (undefined8 **)CONCAT71(local_120._1_7_,8);
  local_108 = 0;
  if (puVar5 != (undefined8 *)0x0) {
    *(uint *)(puVar5 + 3) = *(int *)(puVar5 + 3) + 1U & 0x8fffffff;
  }
  local_110 = 0;
  local_118 = (undefined8 **)puVar5;
  (**(code **)(*plVar9 + 0x50))
            (plVar9,&local_138,*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x208,
             &local_120,&local_res10);
  if (4 < (byte)local_120) {
    FUN_143411150(&local_120);
  }
  FUN_14348aa00(param_1,&local_138,*(undefined8 *)(param_1 + 0x60));
  FUN_1434897a0(param_1,&local_138,*(undefined8 *)(param_1 + 0x60));
  FUN_143489a40(param_1,&local_138,*(undefined8 *)(param_1 + 0x60));
  FUN_1434898f0(param_1,&local_138,*(undefined8 *)(param_1 + 0x60));
  FUN_143489b90(param_1,&local_138,*(undefined8 *)(param_1 + 0x60));
  FUN_14348bf00(param_1,&local_138,*(undefined8 *)(param_1 + 0x60));
  FUN_143489ce0(param_1,&local_138,*(undefined8 *)(param_1 + 0x60));
  FUN_14348adf0(param_1,&local_138,*(undefined8 *)(param_1 + 0x60));
  FUN_14348b090(param_1,&local_138,*(undefined8 *)(param_1 + 0x60));
  FUN_14348a220(param_1,&local_138,*(undefined8 *)(param_1 + 0x60));
  FUN_14348a610(param_1,&local_138,*(undefined8 *)(param_1 + 0x60));
  FUN_14348a370(param_1,&local_138,*(undefined8 *)(param_1 + 0x60));
  FUN_14348ab50(param_1,&local_138,*(undefined8 *)(param_1 + 0x60));
  FUN_143489e30(param_1,&local_138,*(undefined8 *)(param_1 + 0x60));
  FUN_14348b1e0(param_1,&local_138,*(undefined8 *)(param_1 + 0x60));
  FUN_14348bc60(param_1,&local_138,*(undefined8 *)(param_1 + 0x60));
  FUN_14348a4c0(param_1,&local_138,*(undefined8 *)(param_1 + 0x60));
  FUN_14348bdb0(param_1,&local_138,*(undefined8 *)(param_1 + 0x60));
  uVar6 = FUN_14341bbd0(&local_138,*(undefined8 *)(param_1 + 0x60),local_128,"flash.geom");
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  FUN_14348c050(param_1,&local_138,uVar6);
  FUN_14348c1a0(param_1,&local_138,*(undefined8 *)(param_1 + 0x38));
  FUN_14348c2f0(param_1,&local_138,*(undefined8 *)(param_1 + 0x38));
  FUN_14348c440(param_1,&local_138,*(undefined8 *)(param_1 + 0x38));
  FUN_143489f80(param_1,&local_138,*(undefined8 *)(param_1 + 0x38));
  uVar6 = FUN_14341bbd0(&local_138,*(undefined8 *)(param_1 + 0x60),local_128,"System");
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  FUN_14348a0d0(param_1,&local_138,uVar6);
  uVar6 = FUN_14341bbd0(&local_138,*(undefined8 *)(param_1 + 0x60),local_128,"flash.external");
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  FUN_14348aca0(param_1,&local_138,uVar6);
  uVar6 = FUN_14341bbd0(&local_138,*(undefined8 *)(param_1 + 0x60),local_128,"flash.display");
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  FUN_14348af40(param_1,&local_138,uVar6);
  uVar6 = FUN_14341bbd0(&local_138,*(undefined8 *)(param_1 + 0x60),local_128,"flash.filters");
  *(undefined8 *)(param_1 + 0x58) = uVar6;
  FUN_14348b480(param_1,&local_138,uVar6);
  FUN_14348b5d0(param_1,&local_138,*(undefined8 *)(param_1 + 0x58));
  FUN_14348b720(param_1,&local_138,*(undefined8 *)(param_1 + 0x58));
  FUN_14348b870(param_1,&local_138,*(undefined8 *)(param_1 + 0x58));
  FUN_14348b9c0(param_1,&local_138,*(undefined8 *)(param_1 + 0x58));
  FUN_14348bb10(param_1,&local_138,*(undefined8 *)(param_1 + 0x58));
  FUN_1432ef9e0(param_1 + 0x70);
  FUN_14341fab0(param_1);
  local_a0 = *(longlong *)(param_1 + 0x60);
  local_a8 = &PTR_FUN_145b11388;
  if (local_a0 != 0) {
    *(uint *)(local_a0 + 0x18) = *(int *)(local_a0 + 0x18) + 1U & 0x8fffffff;
  }
  local_98 = &local_138;
  plVar9 = (longlong *)(*(longlong *)(param_1 + 0x60) + 0x20);
  (**(code **)(*plVar9 + 0x40))(plVar9,&local_138,&local_a8,4,0);
  if ((local_a0 != 0) && ((*(uint *)(local_a0 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(local_a0 + 0x18) = *(uint *)(local_a0 + 0x18) - 1;
    FUN_1434a2b80();
  }
  local_a8 = &PTR_FUN_145af1858;
  if ((local_d8 != 0) && ((*(uint *)(local_d8 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(local_d8 + 0x18) = *(uint *)(local_d8 + 0x18) - 1;
    FUN_1434a2b80();
  }
  if ((local_d0 != (undefined8 *)0x0) && ((*(uint *)(local_d0 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(local_d0 + 3) = *(uint *)(local_d0 + 3) - 1;
    FUN_1434a2b80();
  }
  FUN_14349ebc0(&local_c8);
  FUN_14349ebc0(&local_100);
  if ((local_e0 != (undefined8 *)0x0) && ((*(uint *)(local_e0 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(local_e0 + 3) = *(uint *)(local_e0 + 3) - 1;
    FUN_1434a2b80();
  }
  if ((local_128 != (undefined8 *)0x0) && ((*(uint *)(local_128 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(local_128 + 3) = *(uint *)(local_128 + 3) - 1;
    FUN_1434a2b80();
  }
  FUN_14349ebc0(&local_90);
  FUN_14349ebc0(&local_70);
  return;
}



// FUNCTION 14341dba0 FUN_14341dba0 body=31 status=ok
// SIG undefined FUN_14341dba0(void)

void FUN_14341dba0(longlong param_1)

{
  FUN_1432ef9e0(param_1 + 0x70);
  FUN_14341fab0(param_1);
  return;
}



// FUNCTION 14341dbd0 FUN_14341dbd0 body=789 status=ok
// SIG undefined FUN_14341dbd0(void)

undefined1 *
FUN_14341dbd0(char *param_1,undefined8 param_2,longlong *param_3,longlong param_4,undefined8 param_5
             ,undefined8 param_6)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  longlong local_res8;
  undefined8 in_stack_ffffffffffffff68;
  uint uVar10;
  longlong local_88;
  longlong local_80;
  longlong lStack_78;
  byte local_70;
  byte local_68 [8];
  longlong local_60;
  longlong local_58;
  byte local_50;
  byte local_48 [32];
  
  uVar10 = (uint)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    return &stack0x00000000;
  }
  lVar6 = 0;
  local_88 = 0;
  local_68[0] = 0;
  local_48[0] = 0;
  local_res8 = FUN_143360a60(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_4 + 0xe8) + 0x28) + 0x18) + 0x618
                              ),param_1);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  cVar2 = FUN_1434175f0(param_4,&local_res8,local_68,0,&local_88,local_48,(ulonglong)uVar10 << 0x20)
  ;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (cVar2 == '\0') {
    if ((param_3 == (longlong *)0x0) ||
       (iVar4 = (**(code **)(*param_3 + 0x10))(param_3), 3 < iVar4 - 2U)) {
      FUN_1434171c0(param_4,"Can\'t find method \'%s\' to invoke.",param_1);
      bVar3 = 0;
    }
    else {
      lVar5 = Scaleform::GFx::AS2::ObjectInterface::ToCharacter(param_3);
      lVar6 = *(longlong *)(lVar5 + 0x70);
      if (lVar6 == 0) {
        lVar6 = FUN_14336c170(lVar5);
      }
      FUN_1434171c0(param_4,"Can\'t find method \'%s.%s\' to invoke.",
                    **(undefined8 **)(lVar6 + 0x18),param_1);
      bVar3 = 0;
    }
    goto LAB_14341de92;
  }
  if (local_68[0] == 8) {
    bVar9 = 0;
    if (local_60 != 0) {
      *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + 1;
      *(uint *)(local_60 + 0x18) = *(uint *)(local_60 + 0x18) & 0x8fffffff;
    }
    lVar5 = local_60;
    if ((local_58 != 0) && (bVar9 = (local_50 & 1) != 0, lVar6 = local_58, !(bool)bVar9)) {
      *(int *)(local_58 + 0x18) = *(int *)(local_58 + 0x18) + 1;
      *(uint *)(local_58 + 0x18) = *(uint *)(local_58 + 0x18) & 0x8fffffff;
    }
LAB_14341dd6e:
    if (lVar5 == 0) goto LAB_14341dd73;
    if ((byte)(local_48[0] - 6) < 2) {
      param_3 = (longlong *)FUN_1434123a0(local_48,param_4);
    }
    else if (local_88 != 0) {
      lVar8 = (**(code **)(*(longlong *)(local_88 + (ulonglong)*(byte *)(local_88 + 0x6d) * 4) + 8))
                        ();
      param_3 = (longlong *)(lVar8 + 8);
      if (lVar8 == 0) {
        param_3 = (longlong *)0x0;
      }
    }
    bVar3 = FUN_14341def0(local_68,param_2,param_3,param_4,param_5,param_6,param_1);
  }
  else {
    if (local_68[0] == 0xb) {
      FUN_143413f20(local_68,&local_80,param_4);
      lVar6 = lStack_78;
      lVar5 = local_80;
      bVar9 = local_70;
      goto LAB_14341dd6e;
    }
    bVar9 = 0;
    local_80 = 0;
    lStack_78 = 0;
    lVar6 = 0;
    lVar5 = 0;
LAB_14341dd73:
    if ((param_3 == (longlong *)0x0) ||
       (iVar4 = (**(code **)(*param_3 + 0x10))(param_3), 3 < iVar4 - 2U)) {
      FUN_1434171c0(param_4,"Invoked method \'%s\' is not a function",param_1);
      bVar3 = 0;
    }
    else {
      lVar7 = Scaleform::GFx::AS2::ObjectInterface::ToCharacter(param_3);
      lVar8 = *(longlong *)(lVar7 + 0x70);
      if (lVar8 == 0) {
        lVar8 = FUN_14336c170(lVar7);
      }
      FUN_1434171c0(param_4,"Invoked method \'%s.%s\' is not a function",
                    **(undefined8 **)(lVar8 + 0x18),param_1);
      bVar3 = 0;
    }
  }
  if ((((bVar9 & 2) == 0) && (lVar5 != 0)) && ((*(uint *)(lVar5 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) - 1;
    FUN_1434a2b80(lVar5);
  }
  if ((((bVar9 & 1) == 0) && (lVar6 != 0)) && ((*(uint *)(lVar6 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) - 1;
    FUN_1434a2b80(lVar6);
  }
LAB_14341de92:
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  if (4 < local_68[0]) {
    FUN_143411150(local_68);
  }
  return (undefined1 *)(ulonglong)bVar3;
}



// FUNCTION 14341def0 FUN_14341def0 body=1298 status=ok
// SIG undefined FUN_14341def0(void)

undefined1
FUN_14341def0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             byte *param_5,longlong param_6,undefined8 param_7)

{
  ulonglong *puVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  byte bVar7;
  longlong lVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined4 *puVar16;
  byte local_68 [48];
  
  iVar9 = 0;
  if (param_5 != (byte *)0x0) {
    puVar1 = (ulonglong *)(param_4 + 8);
    bVar7 = *param_5;
    uVar13 = *(int *)(param_4 + 0x30) * 0x20 + -0x20 +
             (int)(*(longlong *)(param_4 + 8) - *(longlong *)(param_4 + 0x10) >> 5);
    if (bVar7 != 0) {
      puVar16 = (undefined4 *)(param_6 + -8);
      pbVar11 = param_5;
      do {
        pbVar10 = pbVar11 + 1;
        if (bVar7 == 0x25) {
          bVar7 = *pbVar10;
          pbVar10 = pbVar11 + 2;
          if (bVar7 == 100) {
            *puVar1 = *puVar1 + 0x20;
            puVar16 = puVar16 + 2;
            if (*(ulonglong *)(param_4 + 0x18) <= *puVar1) {
              FUN_1434a29d0(puVar1);
            }
            puVar5 = (undefined1 *)*puVar1;
            if (puVar5 != (undefined1 *)0x0) {
              uVar4 = *puVar16;
              *puVar5 = 4;
              *(undefined4 *)(puVar5 + 8) = uVar4;
            }
          }
          else if (bVar7 == 0x75) {
            *puVar1 = *puVar1 + 0x20;
            local_68[0] = 0;
            if (*(ulonglong *)(param_4 + 0x18) <= *puVar1) {
              FUN_1434a29d0(puVar1);
            }
            if ((*puVar1 != 0) && (FUN_143410ec0(*puVar1,local_68), 4 < local_68[0])) {
              FUN_143411150(local_68);
            }
          }
          else if (bVar7 == 0x6e) {
            *puVar1 = *puVar1 + 0x20;
            if (*(ulonglong *)(param_4 + 0x18) <= *puVar1) {
              FUN_1434a29d0(puVar1);
            }
            if ((undefined1 *)*puVar1 != (undefined1 *)0x0) {
              *(undefined1 *)*puVar1 = 1;
            }
          }
          else if (bVar7 == 0x62) {
            iVar9 = puVar16[2];
            *puVar1 = *puVar1 + 0x20;
            if (*(ulonglong *)(param_4 + 0x18) <= *puVar1) {
              FUN_1434a29d0(puVar1);
            }
            puVar5 = (undefined1 *)*puVar1;
            if (puVar5 != (undefined1 *)0x0) {
              *puVar5 = 2;
              puVar5[8] = iVar9 != 0;
            }
LAB_14341e186:
            puVar16 = puVar16 + 2;
          }
          else if (bVar7 == 0x66) {
            uVar3 = *(undefined8 *)(puVar16 + 2);
            puVar16 = puVar16 + 2;
            *puVar1 = *puVar1 + 0x20;
            if (*(ulonglong *)(param_4 + 0x18) <= *puVar1) {
              FUN_1434a29d0(puVar1);
            }
            puVar5 = (undefined1 *)*puVar1;
            if (puVar5 != (undefined1 *)0x0) {
              *(undefined8 *)(puVar5 + 8) = uVar3;
              *puVar5 = 3;
            }
          }
          else if (bVar7 == 0x68) {
            bVar7 = *pbVar10;
            pbVar10 = pbVar11 + 3;
            if (bVar7 == 0x66) {
              uVar3 = *(undefined8 *)(puVar16 + 2);
              puVar16 = puVar16 + 2;
              *puVar1 = *puVar1 + 0x20;
              if (*(ulonglong *)(param_4 + 0x18) <= *puVar1) {
                FUN_1434a29d0(puVar1);
              }
              puVar5 = (undefined1 *)*puVar1;
              if (puVar5 != (undefined1 *)0x0) {
                *(undefined8 *)(puVar5 + 8) = uVar3;
                *puVar5 = 3;
              }
            }
            else {
              FUN_1434171c0(param_4,"InvokeParsed(\'%s\',\'%s\') - invalid format \'%%h%c\'",param_7
                            ,param_5,(int)(char)bVar7);
            }
          }
          else {
            if (bVar7 == 0x73) {
              lVar8 = FUN_143360a60(*(undefined8 *)
                                     (*(longlong *)
                                       (*(longlong *)(*(longlong *)(param_4 + 0xe8) + 0x28) + 0x18)
                                     + 0x618),*(undefined8 *)(puVar16 + 2));
LAB_14341e14b:
              *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
              *puVar1 = *puVar1 + 0x20;
              if (*(ulonglong *)(param_4 + 0x18) <= *puVar1) {
                FUN_1434a29d0(puVar1);
              }
              puVar5 = (undefined1 *)*puVar1;
              if (puVar5 != (undefined1 *)0x0) {
                *puVar5 = 5;
                *(longlong *)(puVar5 + 8) = lVar8;
                *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
              }
              piVar2 = (int *)(lVar8 + 0x18);
              *piVar2 = *piVar2 + -1;
              if (*piVar2 == 0) {
                FUN_14335f920(lVar8);
              }
              goto LAB_14341e186;
            }
            if (bVar7 == 0x6c) {
              bVar7 = *pbVar10;
              pbVar10 = pbVar11 + 3;
              if (bVar7 == 0x73) {
                lVar8 = FUN_143360fd0(*(undefined8 *)
                                       (*(longlong *)
                                         (*(longlong *)(*(longlong *)(param_4 + 0xe8) + 0x28) + 0x18
                                         ) + 0x618),*(undefined8 *)(puVar16 + 2),0xffffffffffffffff)
                ;
                goto LAB_14341e14b;
              }
              FUN_1434171c0(param_4,"InvokeParsed(\'%s\',\'%s\') - invalid format \'%%l%c\'",param_7
                            ,param_5,(int)(char)bVar7);
            }
            else {
              FUN_1434171c0(param_4,"InvokeParsed(\'%s\',\'%s\') - invalid format \'%%%c\'",param_7,
                            param_5,(int)(char)bVar7);
            }
          }
        }
        else {
          FUN_1434171c0(param_4,"InvokeParsed(\'%s\',\'%s\') - invalid char \'%c\'",param_7,param_5,
                        (int)(char)bVar7);
        }
        bVar7 = *pbVar10;
        pbVar11 = pbVar10;
        while (((bVar7 != 0 && (bVar7 < 0x2d)) &&
               ((0x100100000200U >> ((longlong)(char)bVar7 & 0x3fU) & 1) != 0))) {
          bVar7 = pbVar11[1];
          pbVar11 = pbVar11 + 1;
        }
        bVar7 = *pbVar11;
      } while (bVar7 != 0);
    }
    iVar9 = (((int)((longlong)(*puVar1 - *(longlong *)(param_4 + 0x10)) >> 5) +
             *(int *)(param_4 + 0x30) * 0x20) - uVar13) + -0x20;
    if (0 < iVar9 >> 1) {
      uVar15 = uVar13 + iVar9;
      uVar14 = (ulonglong)(uint)(iVar9 >> 1);
      do {
        uVar13 = uVar13 + 1;
        lVar8 = 0;
        if (uVar15 <= (uint)(*(int *)(param_4 + 0x30) * 0x20 + -0x20 +
                            (int)((longlong)(*puVar1 - *(longlong *)(param_4 + 0x10)) >> 5))) {
          lVar8 = (ulonglong)(uVar15 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(param_4 + 0x28) + (ulonglong)(uVar15 >> 5) * 8);
        }
        lVar12 = 0;
        if (uVar13 <= (uint)(*(int *)(param_4 + 0x30) * 0x20 + -0x20 +
                            (int)((longlong)(*puVar1 - *(longlong *)(param_4 + 0x10)) >> 5))) {
          lVar12 = (ulonglong)(uVar13 & 0x1f) * 0x20 +
                   *(longlong *)(*(longlong *)(param_4 + 0x28) + (ulonglong)(uVar13 >> 5) * 8);
        }
        FUN_143410ec0(local_68,lVar12);
        FUN_143411240(lVar12,lVar8);
        FUN_143411240(lVar8,local_68);
        if (4 < local_68[0]) {
          FUN_143411150(local_68);
        }
        uVar15 = uVar15 - 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  puVar1 = (ulonglong *)(param_4 + 8);
  uVar6 = FUN_14341e410(param_1,param_2,param_3,param_4,iVar9,
                        (int)((longlong)(*puVar1 - *(longlong *)(param_4 + 0x10)) >> 5) +
                        *(int *)(param_4 + 0x30) * 0x20 + -0x20,param_7);
  for (; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (4 < *(byte *)*puVar1) {
      FUN_143411150();
    }
    *puVar1 = *puVar1 - 0x20;
    if (*puVar1 < *(ulonglong *)(param_4 + 0x10)) {
      FUN_1434a25c0(puVar1);
    }
  }
  return uVar6;
}



// FUNCTION 14341e410 FUN_14341e410 body=595 status=ok
// SIG undefined FUN_14341e410(void)

undefined8
FUN_14341e410(char *param_1,undefined1 *param_2,longlong *param_3,longlong *param_4,
             undefined4 param_5,undefined4 param_6,char *param_7)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  char *pcVar8;
  byte bVar9;
  longlong *local_88;
  longlong lStack_80;
  byte local_78;
  undefined **local_70;
  undefined1 *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  if (*param_1 == '\b') {
    plVar5 = *(longlong **)(param_1 + 8);
    bVar9 = 0;
    if (plVar5 != (longlong *)0x0) {
      *(uint *)(plVar5 + 3) = (int)plVar5[3] + 1U & 0x8fffffff;
    }
    lVar4 = *(longlong *)(param_1 + 0x10);
    lVar7 = 0;
    if ((lVar4 != 0) && (bVar9 = (param_1[0x18] & 1U) != 0, lVar7 = lVar4, !(bool)bVar9)) {
      *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1U & 0x8fffffff;
    }
  }
  else if (*param_1 == '\v') {
    FUN_143413f20(param_1,&local_88,param_4);
    plVar5 = local_88;
    lVar7 = lStack_80;
    bVar9 = local_78;
  }
  else {
    local_88 = (longlong *)0x0;
    lStack_80 = 0;
    plVar5 = (longlong *)0x0;
    lVar7 = 0;
    bVar9 = 0;
  }
  if (param_2 != (undefined1 *)0x0) {
    FUN_143411150(param_2);
    *param_2 = 0;
  }
  if (plVar5 != (longlong *)0x0) {
    local_38 = param_5;
    local_34 = param_6;
    local_48 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_70 = &PTR_FUN_145b0ab98;
    local_68 = param_2;
    local_60 = param_3;
    local_40 = param_4;
    (**(code **)(*plVar5 + 0x50))(plVar5,&local_70,lVar7,param_7);
    local_70 = &PTR_FUN_145b0ab98;
    FUN_14349ebc0(&local_58);
    uVar6 = 1;
    goto LAB_14341e5f0;
  }
  if (param_4 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_4 + 8))(param_4);
    if (cVar1 != '\0') {
      if (param_3 != (longlong *)0x0) {
        iVar2 = (**(code **)(*param_3 + 0x10))(param_3);
        if (iVar2 - 2U < 4) {
          lVar3 = Scaleform::GFx::AS2::ObjectInterface::ToCharacter(param_3);
          lVar4 = *(longlong *)(lVar3 + 0x70);
          if (lVar4 == 0) {
            lVar4 = FUN_14336c170(lVar3);
          }
          pcVar8 = "<unknown>";
          if (param_7 != (char *)0x0) {
            pcVar8 = param_7;
          }
          FUN_1434171c0(param_4,"Invoked method %s.%s is not a function",
                        **(undefined8 **)(lVar4 + 0x18),pcVar8);
          goto LAB_14341e5ed;
        }
      }
      pcVar8 = "<unknown>";
      if (param_7 != (char *)0x0) {
        pcVar8 = param_7;
      }
      FUN_1434171c0(param_4,"Invoked method %s is not a function",pcVar8);
    }
  }
LAB_14341e5ed:
  uVar6 = 0;
LAB_14341e5f0:
  if ((((bVar9 & 2) == 0) && (plVar5 != (longlong *)0x0)) &&
     ((*(uint *)(plVar5 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(plVar5 + 3) = *(uint *)(plVar5 + 3) - 1;
    FUN_1434a2b80(plVar5);
  }
  if ((((bVar9 & 1) == 0) && (lVar7 != 0)) && ((*(uint *)(lVar7 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) - 1;
    FUN_1434a2b80(lVar7);
  }
  return uVar6;
}



// FUNCTION 14341e670 FUN_14341e670 body=559 status=ok
// SIG undefined FUN_14341e670(void)

undefined8
FUN_14341e670(char *param_1,undefined1 *param_2,undefined8 param_3,longlong *param_4,
             undefined4 param_5,undefined4 param_6,char *param_7)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  char *pcVar7;
  byte bVar8;
  longlong *local_78;
  longlong lStack_70;
  byte local_68;
  undefined **local_60 [3];
  undefined1 local_48 [48];
  
  if (*param_1 == '\b') {
    plVar5 = *(longlong **)(param_1 + 8);
    bVar8 = 0;
    if (plVar5 != (longlong *)0x0) {
      *(uint *)(plVar5 + 3) = (int)plVar5[3] + 1U & 0x8fffffff;
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar6 = 0;
    if ((lVar3 != 0) && (bVar8 = (param_1[0x18] & 1U) != 0, lVar6 = lVar3, !(bool)bVar8)) {
      *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
    }
  }
  else if (*param_1 == '\v') {
    FUN_143413f20(param_1,&local_78,param_4);
    plVar5 = local_78;
    lVar6 = lStack_70;
    bVar8 = local_68;
  }
  else {
    local_78 = (longlong *)0x0;
    lStack_70 = 0;
    plVar5 = (longlong *)0x0;
    lVar6 = 0;
    bVar8 = 0;
  }
  if (param_2 != (undefined1 *)0x0) {
    FUN_143411150(param_2);
    *param_2 = 0;
  }
  if (plVar5 == (longlong *)0x0) {
    if (param_4 != (longlong *)0x0) {
      cVar1 = (**(code **)(*param_4 + 8))(param_4);
      if (cVar1 != '\0') {
        lVar3 = Scaleform::GFx::AS2::Value::ToCharacter(param_3,param_4);
        if (lVar3 == 0) {
          pcVar7 = "<unknown>";
          if (param_7 != (char *)0x0) {
            pcVar7 = param_7;
          }
          FUN_1434171c0(param_4,"Invoked method %s is not a function",pcVar7);
        }
        else {
          lVar4 = Scaleform::GFx::AS2::Value::ToCharacter(param_3,param_4);
          lVar3 = *(longlong *)(lVar4 + 0x70);
          if (lVar3 == 0) {
            lVar3 = FUN_14336c170(lVar4);
          }
          pcVar7 = "<unknown>";
          if (param_7 != (char *)0x0) {
            pcVar7 = param_7;
          }
          FUN_1434171c0(param_4,"Invoked method %s.%s is not a function",
                        **(undefined8 **)(lVar3 + 0x18),pcVar7);
        }
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_143496870(local_60,param_2,param_3,param_4,param_5,param_6);
    (**(code **)(*plVar5 + 0x50))(plVar5,uVar2,lVar6,param_7);
    local_60[0] = &PTR_FUN_145b0ab98;
    FUN_14349ebc0(local_48);
    uVar2 = 1;
  }
  if ((((bVar8 & 2) == 0) && (plVar5 != (longlong *)0x0)) &&
     ((*(uint *)(plVar5 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(plVar5 + 3) = *(uint *)(plVar5 + 3) - 1;
    FUN_1434a2b80(plVar5);
  }
  if ((((bVar8 & 1) == 0) && (lVar6 != 0)) && ((*(uint *)(lVar6 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) - 1;
    FUN_1434a2b80(lVar6);
  }
  return uVar2;
}



// FUNCTION 14341e8b0 FUN_14341e8b0 body=785 status=ok
// SIG undefined FUN_14341e8b0(void)

undefined1 *
FUN_14341e8b0(char *param_1,undefined8 param_2,longlong *param_3,longlong param_4,undefined4 param_5
             ,undefined4 param_6)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  longlong local_res8;
  longlong *plVar10;
  undefined4 uVar11;
  byte *pbVar12;
  undefined4 uVar13;
  undefined8 in_stack_ffffffffffffff68;
  uint uVar14;
  longlong local_88;
  longlong local_80;
  longlong lStack_78;
  byte local_70;
  byte local_68 [8];
  longlong local_60;
  longlong local_58;
  byte local_50;
  byte local_48 [32];
  
  uVar14 = (uint)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    return &stack0x00000000;
  }
  lVar6 = 0;
  local_88 = 0;
  local_68[0] = 0;
  local_48[0] = 0;
  local_res8 = FUN_143360a60(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_4 + 0xe8) + 0x28) + 0x18) + 0x618
                              ),param_1);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  pbVar12 = local_48;
  plVar10 = &local_88;
  cVar2 = FUN_1434175f0(param_4,&local_res8,local_68,0,plVar10,pbVar12,(ulonglong)uVar14 << 0x20);
  uVar11 = (undefined4)((ulonglong)plVar10 >> 0x20);
  uVar13 = (undefined4)((ulonglong)pbVar12 >> 0x20);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (cVar2 == '\0') {
    if ((param_3 == (longlong *)0x0) ||
       (iVar4 = (**(code **)(*param_3 + 0x10))(param_3), 3 < iVar4 - 2U)) {
      FUN_1434171c0(param_4,"Can\'t find method \'%s\' to invoke.",param_1);
      bVar3 = 0;
    }
    else {
      lVar5 = Scaleform::GFx::AS2::ObjectInterface::ToCharacter(param_3);
      lVar6 = *(longlong *)(lVar5 + 0x70);
      if (lVar6 == 0) {
        lVar6 = FUN_14336c170(lVar5);
      }
      FUN_1434171c0(param_4,"Can\'t find method \'%s.%s\' to invoke.",
                    **(undefined8 **)(lVar6 + 0x18),param_1);
      bVar3 = 0;
    }
    goto LAB_14341eb6e;
  }
  if (local_68[0] == 8) {
    bVar9 = 0;
    if (local_60 != 0) {
      *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + 1;
      *(uint *)(local_60 + 0x18) = *(uint *)(local_60 + 0x18) & 0x8fffffff;
    }
    lVar5 = local_60;
    if ((local_58 != 0) && (bVar9 = (local_50 & 1) != 0, lVar6 = local_58, !(bool)bVar9)) {
      *(int *)(local_58 + 0x18) = *(int *)(local_58 + 0x18) + 1;
      *(uint *)(local_58 + 0x18) = *(uint *)(local_58 + 0x18) & 0x8fffffff;
    }
LAB_14341ea4e:
    if (lVar5 == 0) goto LAB_14341ea53;
    if ((byte)(local_48[0] - 6) < 2) {
      param_3 = (longlong *)FUN_1434123a0(local_48,param_4);
    }
    else if (local_88 != 0) {
      lVar8 = (**(code **)(*(longlong *)(local_88 + (ulonglong)*(byte *)(local_88 + 0x6d) * 4) + 8))
                        ();
      param_3 = (longlong *)(lVar8 + 8);
      if (lVar8 == 0) {
        param_3 = (longlong *)0x0;
      }
    }
    bVar3 = FUN_14341e410(local_68,param_2,param_3,param_4,CONCAT44(uVar11,param_5),
                          CONCAT44(uVar13,param_6),param_1);
  }
  else {
    if (local_68[0] == 0xb) {
      FUN_143413f20(local_68,&local_80,param_4);
      lVar6 = lStack_78;
      lVar5 = local_80;
      bVar9 = local_70;
      goto LAB_14341ea4e;
    }
    bVar9 = 0;
    local_80 = 0;
    lStack_78 = 0;
    lVar6 = 0;
    lVar5 = 0;
LAB_14341ea53:
    if ((param_3 == (longlong *)0x0) ||
       (iVar4 = (**(code **)(*param_3 + 0x10))(param_3), 3 < iVar4 - 2U)) {
      FUN_1434171c0(param_4,"Invoked method \'%s\' is not a function",param_1);
      bVar3 = 0;
    }
    else {
      lVar7 = Scaleform::GFx::AS2::ObjectInterface::ToCharacter(param_3);
      lVar8 = *(longlong *)(lVar7 + 0x70);
      if (lVar8 == 0) {
        lVar8 = FUN_14336c170(lVar7);
      }
      FUN_1434171c0(param_4,"Invoked method \'%s.%s\' is not a function",
                    **(undefined8 **)(lVar8 + 0x18),param_1);
      bVar3 = 0;
    }
  }
  if ((((bVar9 & 2) == 0) && (lVar5 != 0)) && ((*(uint *)(lVar5 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) - 1;
    FUN_1434a2b80(lVar5);
  }
  if ((((bVar9 & 1) == 0) && (lVar6 != 0)) && ((*(uint *)(lVar6 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) - 1;
    FUN_1434a2b80(lVar6);
  }
LAB_14341eb6e:
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  if (4 < local_68[0]) {
    FUN_143411150(local_68);
  }
  return (undefined1 *)(ulonglong)bVar3;
}



// FUNCTION 14341ebd0 FUN_14341ebd0 body=71 status=ok
// SIG undefined FUN_14341ebd0(void)

undefined8 * FUN_14341ebd0(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_145b0b0f0;
  param_1[1] = &PTR_LAB_145b0b230;
  param_1[4] = param_2;
  param_1[5] = 0;
  Scaleform::GFx::DisplayObjectBase::BindAvmObj(param_2,param_1);
  return param_1;
}



// FUNCTION 14341ec20 FUN_14341ec20 body=73 status=ok
// SIG undefined FUN_14341ec20(void)

void FUN_14341ec20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145b0b0f0;
  param_1[1] = &PTR_LAB_145b0b230;
  FUN_143497d00(param_1 + 5);
  FUN_143414300(param_1 + 1);
  *param_1 = &PTR_FUN_145b0aa60;
  return;
}



// FUNCTION 14341eca0 FUN_14341eca0 body=54 status=ok
// SIG undefined FUN_14341eca0(void)

void FUN_14341eca0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(*(longlong *)(param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4) + 8))
                      (param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4);
  }
  FUN_14349d5d0(param_1 + 0x28,param_1 + 0x28,lVar1 + 0x28);
  return;
}



// FUNCTION 14341ece0 FUN_14341ece0 body=54 status=ok
// SIG undefined FUN_14341ece0(void)

void FUN_14341ece0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(*(longlong *)(param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4) + 8))
                      (param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4);
  }
  FUN_14349d5d0(param_1 + 0x28,param_1 + 0x28,lVar1 + 0x28);
  return;
}



// FUNCTION 14341ed20 FUN_14341ed20 body=343 status=ok
// SIG undefined FUN_14341ed20(void)

longlong FUN_14341ed20(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined4 local_428 [2];
  ulonglong *local_420;
  undefined1 local_408 [1024];
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38) == 0) {
    if ((*(ushort *)(*(longlong *)(param_1 + 0x20) + 0x6a) >> 10 & 1) == 0) {
      FUN_1432c3510(param_2);
    }
    else {
      iVar2 = (**(code **)(*(longlong *)(param_1 + 8) + 0x10))(param_1 + 8);
      lVar3 = 0;
      if ((iVar2 == 2) && (lVar3 = param_1, param_1 + 8 == 0)) {
        lVar3 = 0;
      }
      local_res8 = (**(code **)(*(longlong *)(lVar3 + 0x30) + 0xf8))(lVar3 + 0x30);
      local_428[0] = 0;
      local_420 = param_2;
      FUN_1433561d0(local_408,local_428);
      FUN_1433563e0(local_408,"_level{0}");
      FUN_1432e0b40(local_408,&local_res8);
      Scaleform::MsgFormat::FinishFormatD(local_408);
      FUN_1433562f0(local_408);
    }
  }
  else {
    Scaleform::GFx::DisplayObject::GetAbsolutePath();
    FUN_1432c3950(param_2,&DAT_145af796c,0xffffffffffffffff);
    Scaleform::GFx::DisplayObject::GetName(*(undefined8 *)(param_1 + 0x20),&local_res8);
    FUN_1432c3950(param_2,*(undefined8 *)CONCAT44(uStackX_c,local_res8),0xffffffffffffffff);
    piVar1 = (int *)(CONCAT44(uStackX_c,local_res8) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  return (*param_2 & 0xfffffffffffffffc) + 0xc;
}



// FUNCTION 14341ee80 FUN_14341ee80 body=357 status=ok
// SIG undefined FUN_14341ee80(void)

ulonglong FUN_14341ee80(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  longlong local_res8;
  byte local_28 [32];
  
  uVar5 = (**(code **)(*(longlong *)param_1[4] + 0x1d8))();
  if ((char)uVar5 == '\0') {
    return uVar5;
  }
  uVar8 = *(uint *)(param_1[4] + 0xb8) & 0x60;
  if (uVar8 != 0) {
    return CONCAT71((int7)((ulonglong)param_1[4] >> 8),uVar8 == 0x60);
  }
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    local_28[0] = 0;
    lVar6 = (**(code **)(*param_1 + 0xe8))(param_1);
    local_res8 = FUN_143360950(*(undefined8 *)
                                (*(longlong *)
                                  (*(longlong *)(*(longlong *)(lVar6 + 0xe8) + 0x28) + 0x18) + 0x618
                                ),"tabEnabled",10);
    plVar7 = (longlong *)(lVar2 + 0x20);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    cVar3 = (**(code **)(*plVar7 + 0x58))(plVar7,(longlong *)(lVar6 + 0xe8),&local_res8,local_28);
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    if (((cVar3 != '\0') && (local_28[0] != 0)) && (local_28[0] != 10)) {
      bVar4 = FUN_143411fd0(local_28,lVar6);
      if (4 < local_28[0]) {
        FUN_143411150(local_28);
      }
      return (ulonglong)bVar4;
    }
    if (4 < local_28[0]) {
      FUN_143411150(local_28);
    }
  }
  bVar4 = *(byte *)(param_1[4] + 0x6d);
  if (bVar4 != 0) {
    plVar7 = (longlong *)(**(code **)(*(longlong *)(param_1[4] + (ulonglong)bVar4 * 4) + 8))();
    cVar3 = (**(code **)(*plVar7 + 0x60))(plVar7);
    if (cVar3 != '\0') {
      return 1;
    }
  }
  if (0 < *(short *)(param_1[4] + 0xbc)) {
    return 1;
  }
  return 0;
}



// FUNCTION 14341eff0 FUN_14341eff0 body=882 status=ok
// SIG undefined FUN_14341eff0(void)

void FUN_14341eff0(longlong *param_1,int param_2,longlong param_3,uint param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  int *piVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined8 local_f0;
  int *piStack_e8;
  longlong local_d0;
  byte local_c8 [8];
  longlong *local_c0;
  longlong local_b8;
  byte local_b0;
  byte local_a8 [32];
  undefined **local_88 [3];
  undefined1 local_70 [56];
  
  local_c8[0] = 0;
  lVar7 = (**(code **)(*param_1 + 0xf0))();
  if (lVar7 == 0) goto LAB_14341f328;
  lVar10 = 0x400;
  if (param_2 == 1) {
    lVar10 = 0x3f8;
  }
  local_d0 = *(longlong *)
              (lVar10 + *(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0xe8) + 0x28) + 0x18));
  *(int *)(local_d0 + 0x18) = *(int *)(local_d0 + 0x18) + 1;
  cVar6 = (**(code **)(param_1[1] + 0x58))(param_1 + 1,lVar7 + 0xe8,&local_d0,local_c8);
  if (cVar6 != '\0') {
    bVar12 = false;
    if (local_c8[0] == 8) {
      if (local_c0 != (longlong *)0x0) {
        *(int *)(local_c0 + 3) = (int)local_c0[3] + 1;
        *(uint *)(local_c0 + 3) = *(uint *)(local_c0 + 3) & 0x8fffffff;
      }
      lVar10 = 0;
      if ((local_b8 != 0) && (bVar12 = (local_b0 & 1) != 0, lVar10 = local_b8, !bVar12)) {
        *(int *)(local_b8 + 0x18) = *(int *)(local_b8 + 0x18) + 1;
        *(uint *)(local_b8 + 0x18) = *(uint *)(local_b8 + 0x18) & 0x8fffffff;
      }
      if (local_c0 != (longlong *)0x0) {
        uVar11 = 1;
        if (*(char *)(*(longlong *)(lVar7 + 0xe8) + 0x68) == '\x01') {
          *(longlong *)(lVar7 + 8) = *(longlong *)(lVar7 + 8) + 0x20;
          if (*(ulonglong *)(lVar7 + 0x18) <= *(ulonglong *)(lVar7 + 8)) {
            FUN_1434a29d0(lVar7 + 8);
          }
          puVar3 = *(undefined1 **)(lVar7 + 8);
          if (puVar3 != (undefined1 *)0x0) {
            *(double *)(puVar3 + 8) = (double)param_4;
            *puVar3 = 3;
          }
          uVar11 = 2;
        }
        if (param_3 == 0) {
          *(longlong *)(lVar7 + 8) = *(longlong *)(lVar7 + 8) + 0x20;
          puVar1 = (ulonglong *)(lVar7 + 8);
          if (*(ulonglong *)(lVar7 + 0x18) <= *puVar1) {
            FUN_1434a29d0(puVar1);
          }
          if ((undefined1 *)*puVar1 != (undefined1 *)0x0) {
            *(undefined1 *)*puVar1 = 1;
          }
        }
        else {
          piStack_e8 = *(int **)(param_3 + 0x70);
          local_f0 = CONCAT71(local_f0._1_7_,7);
          if (piStack_e8 == (int *)0x0) {
            piStack_e8 = (int *)FUN_14336c170(param_3);
          }
          if (piStack_e8 != (int *)0x0) {
            *piStack_e8 = *piStack_e8 + 1;
          }
          *(longlong *)(lVar7 + 8) = *(longlong *)(lVar7 + 8) + 0x20;
          puVar1 = (ulonglong *)(lVar7 + 8);
          if (*(ulonglong *)(lVar7 + 0x18) <= *puVar1) {
            FUN_1434a29d0(puVar1);
          }
          if (*puVar1 != 0) {
            FUN_143410ec0(*puVar1,&local_f0);
            if ((byte)local_f0 < 5) goto LAB_14341f1f4;
          }
          FUN_143411150(&local_f0);
        }
LAB_14341f1f4:
        lVar4 = *(longlong *)(lVar7 + 8);
        lVar5 = *(longlong *)(lVar7 + 0x10);
        iVar2 = *(int *)(lVar7 + 0x30);
        local_a8[0] = 0;
        local_f0 = CONCAT71(local_f0._1_7_,7);
        if (param_1[4] == 0) {
          piStack_e8 = (int *)0x0;
        }
        else {
          piVar8 = *(int **)(param_1[4] + 0x70);
          if (piVar8 == (int *)0x0) {
            piVar8 = (int *)FUN_14336c170();
          }
          piStack_e8 = piVar8;
          if (piVar8 != (int *)0x0) {
            *piVar8 = *piVar8 + 1;
          }
        }
        uVar9 = FUN_143496870(local_88,local_a8,&local_f0,lVar7,uVar11,
                              iVar2 * 0x20 + (int)(lVar4 - lVar5 >> 5) + -0x20);
        (**(code **)(*local_c0 + 0x50))(local_c0,uVar9,lVar10,0);
        local_88[0] = &PTR_FUN_145b0ab98;
        FUN_14349ebc0(local_70);
        local_88[0] = &PTR_FUN_145af8cf0;
        if (4 < (byte)local_f0) {
          FUN_143411150(&local_f0);
        }
        FUN_14349eb00(lVar7,uVar11);
        if (4 < local_a8[0]) {
          FUN_143411150(local_a8);
        }
      }
    }
    else {
      local_f0 = 0;
      piStack_e8 = (int *)0x0;
      lVar10 = 0;
      local_c0 = (longlong *)0x0;
    }
    if ((local_c0 != (longlong *)0x0) && ((*(uint *)(local_c0 + 3) & 0x3ffffff) != 0)) {
      *(uint *)(local_c0 + 3) = *(uint *)(local_c0 + 3) - 1;
      FUN_1434a2b80(local_c0);
    }
    if (((!bVar12) && (lVar10 != 0)) && ((*(uint *)(lVar10 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar10 + 0x18) = *(uint *)(lVar10 + 0x18) - 1;
      FUN_1434a2b80(lVar10);
    }
  }
  piVar8 = (int *)(local_d0 + 0x18);
  *piVar8 = *piVar8 + -1;
  if (*piVar8 == 0) {
    FUN_14335f920();
  }
LAB_14341f328:
  if (4 < local_c8[0]) {
    FUN_143411150(local_c8);
  }
  return;
}



// FUNCTION 14341f370 FUN_14341f370 body=135 status=ok
// SIG undefined FUN_14341f370(void)

undefined8 FUN_14341f370(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int local_28;
  undefined8 uStack_24;
  uint uStack_1c;
  int local_18;
  
  local_28 = *param_2;
  if ((local_28 - 0x40U & 0xffffffbf) == 0) {
    uStack_24 = 0;
    uStack_1c = uStack_1c & 0xffffff00;
    local_18 = 0xff00;
  }
  else {
    local_28 = *param_2;
    uStack_24 = *(undefined8 *)(param_2 + 1);
    uStack_1c = param_2[3];
    local_18 = param_2[4];
  }
  lVar1 = FUN_143493a50((longlong *)(param_1 + 0x28),&local_28);
  lVar2 = 0;
  if (-1 < lVar1) {
    lVar2 = *(longlong *)(param_1 + 0x28) + 0x20 + lVar1 * 0x40;
  }
  lVar1 = lVar2 + 0x18;
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 != 0);
}



// FUNCTION 14341f400 FUN_14341f400 body=315 status=ok
// SIG undefined FUN_14341f400(void)

undefined8 FUN_14341f400(longlong param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int local_38;
  undefined8 uStack_34;
  uint uStack_2c;
  int local_28;
  
  plVar5 = (longlong *)0x0;
  local_38 = *param_3;
  if ((local_38 - 0x40U & 0xffffffbf) == 0) {
    uStack_34 = 0;
    uStack_2c = uStack_2c & 0xffffff00;
    local_28 = 0xff00;
  }
  else {
    local_38 = *param_3;
    uStack_34 = *(undefined8 *)(param_3 + 1);
    uStack_2c = param_3[3];
    local_28 = param_3[4];
  }
  lVar1 = FUN_143493a50(param_1 + 0x28,&local_38);
  plVar2 = plVar5;
  if (-1 < lVar1) {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x28) + 0x20 + lVar1 * 0x40);
  }
  plVar3 = plVar2 + 3;
  if (plVar2 == (longlong *)0x0) {
    plVar3 = plVar5;
  }
  if (plVar3 != (longlong *)0x0) {
    plVar2 = plVar5;
    for (lVar1 = plVar3[1]; lVar1 != 0; lVar1 = lVar1 + -1) {
      plVar4 = (longlong *)(param_1 + 8);
      if (param_1 == 0) {
        plVar4 = plVar5;
      }
      FUN_14341e410(*plVar3 + (longlong)plVar2,0,plVar4,param_2,0,
                    *(int *)(param_2 + 0x30) * 0x20 + -0x1f +
                    (int)(*(longlong *)(param_2 + 8) - *(longlong *)(param_2 + 0x10) >> 5),0);
      plVar2 = plVar2 + 4;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14341f550 FUN_14341f550 body=371 status=ok
// SIG undefined FUN_14341f550(void)

void FUN_14341f550(longlong param_1,int *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 local_res8 [2];
  int local_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  int local_28;
  
  plVar4 = (longlong *)0x0;
  local_38 = *param_2;
  if ((local_38 - 0x40U & 0xffffffbf) == 0) {
    iStack_34 = 0;
    iStack_30 = 0;
    uStack_2c = uStack_2c & 0xffffff00;
    local_28 = 0xff00;
  }
  else {
    local_38 = *param_2;
    iStack_34 = param_2[1];
    iStack_30 = param_2[2];
    uStack_2c = param_2[3];
    local_28 = param_2[4];
  }
  lVar1 = FUN_143493a50(param_1 + 0x28,&local_38);
  plVar2 = plVar4;
  if (-1 < lVar1) {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x28) + 0x20 + lVar1 * 0x40);
  }
  plVar3 = plVar2 + 3;
  if (plVar2 == (longlong *)0x0) {
    plVar3 = plVar4;
  }
  if (plVar3 == (longlong *)0x0) {
    local_res8[0] = 0x143;
    plVar2 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x18,local_res8)
    ;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2[2] = 0;
      plVar4 = plVar2;
    }
    FUN_1434a3d60(plVar4,plVar4,plVar4[1] + 1);
    lVar1 = *plVar4 + -0x20 + plVar4[1] * 0x20;
    if (lVar1 != 0) {
      FUN_143410ec0(lVar1,param_3);
    }
    local_38 = (int)param_2;
    iStack_34 = (int)((ulonglong)param_2 >> 0x20);
    iStack_30 = (int)plVar4;
    uStack_2c = (uint)((ulonglong)plVar4 >> 0x20);
    FUN_143491040(param_1 + 0x28,param_1 + 0x28,&local_38);
    FUN_143497710(plVar4);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar4);
  }
  else {
    FUN_1434a3d60(plVar3,plVar3,plVar3[1] + 1);
    lVar1 = plVar3[1] * 0x20 + -0x20 + *plVar3;
    if (lVar1 != 0) {
      FUN_143410ec0(lVar1,param_3);
    }
  }
  return;
}



// FUNCTION 14341f6d0 FUN_14341f6d0 body=221 status=ok
// SIG undefined FUN_14341f6d0(void)

ulonglong FUN_14341f6d0(undefined8 param_1,uint *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint local_28;
  
  uVar4 = (*param_2 >> 1 & 0x55555555) + (*param_2 & 0x55555555);
  uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
  uVar4 = (uVar4 >> 4 & 0xf0f0f0f) + (uVar4 & 0xf0f0f0f);
  uVar1 = (ulonglong)uVar4 * 0x80808081 & 0xffffffff;
  bVar2 = (char)((ulonglong)uVar4 / 0xff) + (char)uVar4;
  if (bVar2 == 1) {
    uVar1 = FUN_14341f550(param_1,param_2);
    return uVar1;
  }
  uVar3 = 0;
  uVar4 = 1;
  if (bVar2 != 0) {
    do {
      if ((*param_2 & uVar4) != 0) {
        uStack_34 = param_2[1];
        uStack_30 = param_2[2];
        uStack_2c = param_2[3];
        local_28 = param_2[4];
        uVar3 = uVar3 + 1;
        local_38 = uVar4;
        uVar1 = FUN_14341f550(param_1,&local_38,param_3);
      }
      uVar4 = uVar4 * 2;
    } while (uVar3 < bVar2);
  }
  return uVar1;
}



// FUNCTION 14341f7c0 FUN_14341f7c0 body=101 status=ok
// SIG undefined FUN_14341f7c0(void)

void FUN_14341f7c0(longlong param_1)

{
  longlong *plVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  iVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
  if (iVar3 - 2U < 4) {
    lVar4 = plVar1[3];
  }
  else {
    lVar4 = 0;
  }
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  pbVar2 = *(byte **)(param_1 + 8);
  iVar3 = *(int *)(lVar4 + 0x2c);
  if (4 < *pbVar2) {
    FUN_143411150(pbVar2);
  }
  *pbVar2 = 4;
  *(int *)(pbVar2 + 8) = iVar3 + -0x4000;
  return;
}



// FUNCTION 14341f8d0 FUN_14341f8d0 body=51 status=ok
// SIG undefined FUN_14341f8d0(void)

longlong FUN_14341f8d0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x38);
  if (*(char *)(plVar1[4] + 0x20) != '\x01') {
    return 0;
  }
  lVar2 = (**(code **)(*plVar1 + 0x228))();
  return lVar2 + (ulonglong)*(byte *)(lVar2 + 0x6d) * 4;
}



// FUNCTION 14341f910 FUN_14341f910 body=399 status=ok
// SIG undefined FUN_14341f910(void)

int FUN_14341f910(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong *local_res8;
  
  cVar6 = -1;
  lVar3 = (**(code **)(*param_1 + 0xb8))();
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x28) + 0x18) + 0x138);
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
  lVar4 = lVar3;
  if ((*(uint *)(*param_2 + 0x1c) >> 0x1d & 1) == 0) {
    iVar2 = FUN_14335fa60(param_2);
    if (iVar2 == 0) goto LAB_14341fa78;
    iVar2 = FUN_14335fad0(param_2,0);
    if (iVar2 != 0x5f) goto LAB_14341fa78;
    lVar4 = Scaleform::GFx::ASConstString::ToLowerNode(param_2);
    iVar2 = *(int *)(lVar4 + 0x18);
    *(int *)(lVar4 + 0x18) = iVar2 + 1;
    if ((*(uint *)(lVar4 + 0x1c) >> 0x1c & 1) == 0) {
      *(int *)(lVar4 + 0x18) = iVar2;
      if (iVar2 == 0) {
        FUN_14335f920(lVar4);
      }
      goto LAB_14341fa78;
    }
    *(int *)(lVar4 + 0x18) = iVar2 + 2;
    piVar1 = (int *)(lVar3 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar3);
    }
    piVar1 = (int *)(lVar4 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar4);
    }
  }
  lVar5 = (**(code **)(*param_1 + 0xb8))(param_1);
  lVar3 = lVar4;
  if (*(int *)(lVar4 + 0x20) == 0) {
    lVar4 = *(longlong *)(lVar5 + 0x70);
    if (lVar4 != 0) {
      lVar5 = FUN_1432ef240(lVar5 + 0x70,param_2,
                            (ulonglong)*(uint *)(*param_2 + 0x1c) & *(ulonglong *)(lVar4 + 8));
      if ((-1 < lVar5) && (lVar4 = lVar4 + (lVar5 * 3 + 3) * 8, lVar4 != 0)) {
        cVar6 = *(char *)(lVar4 + 8);
      }
    }
  }
  else {
    local_res8 = param_2;
    if (*(longlong *)(*param_2 + 0x10) == 0) {
      FUN_14335f970();
    }
    if (*(longlong *)(lVar5 + 0x70) != 0) {
      lVar4 = FUN_143493ae0(lVar5 + 0x70,&local_res8,
                            (ulonglong)*(uint *)(*param_2 + 0x1c) &
                            *(ulonglong *)(*(longlong *)(lVar5 + 0x70) + 8));
      if ((-1 < lVar4) && (lVar4 = *(longlong *)(lVar5 + 0x70) + (lVar4 + 1) * 0x18, lVar4 != 0)) {
        cVar6 = *(char *)(lVar4 + 8);
      }
    }
  }
LAB_14341fa78:
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar3);
  }
  return (int)cVar6;
}



// FUNCTION 14341fab0 FUN_14341fab0 body=231 status=ok
// SIG undefined FUN_14341fab0(void)

void FUN_14341fab0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong *local_28;
  undefined1 *local_20;
  
  plVar1 = (longlong *)(param_1 + 0x70);
  uVar3 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) + 0x618);
  if (((ulonglong *)*plVar1 == (ulonglong *)0x0) || (*(ulonglong *)*plVar1 < 0x93)) {
    FUN_1434a64e0(plVar1,plVar1);
  }
  ppuVar4 = &PTR_DAT_1467ce9e0;
  if (PTR_DAT_1467ce9e0 != (undefined *)0x0) {
    local_28 = &local_res10;
    local_20 = local_res8;
    do {
      uVar6 = 0x20000000;
      if (*(char *)((longlong)ppuVar4 + 0xc) != '\0') {
        uVar6 = 0x30000000;
      }
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while ((*ppuVar4)[lVar5] != '\0');
      local_res10 = FUN_143360950(uVar3,*ppuVar4,lVar5,uVar6);
      *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
      local_res8[0] = *(undefined1 *)(ppuVar4 + 1);
      FUN_143492680(plVar1,plVar1,&local_28,*(undefined4 *)(local_res10 + 0x1c));
      piVar2 = (int *)(local_res10 + 0x18);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FUN_14335f920();
      }
      ppuVar4 = ppuVar4 + 2;
    } while (*ppuVar4 != (undefined *)0x0);
  }
  return;
}



// FUNCTION 14341fba0 FUN_14341fba0 body=172 status=ok
// SIG undefined FUN_14341fba0(void)

undefined8 FUN_14341fba0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if ((*(uint *)(*param_1 + 0x1c) >> 0x1d & 1) != 0) {
    return 1;
  }
  iVar2 = FUN_14335fa60();
  if ((iVar2 != 0) && (iVar2 = FUN_14335fad0(param_1,0), iVar2 == 0x5f)) {
    lVar3 = Scaleform::GFx::ASConstString::ToLowerNode(param_1);
    iVar2 = *(int *)(lVar3 + 0x18);
    *(int *)(lVar3 + 0x18) = iVar2 + 1;
    if ((*(uint *)(lVar3 + 0x1c) >> 0x1c & 1) != 0) {
      if (param_2 != (longlong *)0x0) {
        *(int *)(lVar3 + 0x18) = iVar2 + 2;
        piVar1 = (int *)(*param_2 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *param_2 = lVar3;
      }
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return 1;
      }
      FUN_14335f920(lVar3);
      return 1;
    }
    *(int *)(lVar3 + 0x18) = iVar2;
    if (iVar2 == 0) {
      FUN_14335f920(lVar3);
    }
  }
  return 0;
}



// FUNCTION 14341fc60 FUN_14341fc60 body=1927 status=ok
// SIG undefined FUN_14341fc60(void)

undefined8 FUN_14341fc60(longlong *param_1,uint param_2,char *param_3,char param_4)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  char *pcVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  RefCountImpl *this;
  undefined8 uVar13;
  RefCountImpl *pRVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined **ppuVar18;
  RefCountImpl *pRVar19;
  undefined4 uVar20;
  double dVar21;
  undefined8 *local_28;
  undefined8 *local_20;
  
  if ((param_4 != '\0') && (0x15 < param_2)) {
    FUN_1434a13c0(param_1[4] + 0x18,"Invalid SetProperty request, property number %d",param_2);
    return 0;
  }
  if (param_2 == 0xffffffff) {
    return 0;
  }
  if (0x20 < (int)param_2) {
    return 0;
  }
  uVar6 = (**(code **)(*param_1 + 0x108))();
  if ((uVar6 >> (param_2 & 0x1f) & 1) == 0) {
    return 0;
  }
  lVar8 = (**(code **)(*param_1 + 0xf0))(param_1);
  switch(param_2) {
  case 0:
    if ((*param_3 != '\0') && (*param_3 != '\n')) {
      uVar20 = FUN_143411a90(param_3,lVar8);
      (**(code **)(*(longlong *)param_1[4] + 0xa8))((longlong *)param_1[4],uVar20);
    }
    break;
  case 1:
    if ((*param_3 != '\0') && (*param_3 != '\n')) {
      uVar20 = FUN_143411a90(param_3,lVar8);
      (**(code **)(*(longlong *)param_1[4] + 0xb8))((longlong *)param_1[4],uVar20);
    }
    break;
  case 2:
    if ((*param_3 != '\0') && (*param_3 != '\n')) {
      uVar20 = FUN_143411a90(param_3,lVar8);
      (**(code **)(*(longlong *)param_1[4] + 0xd8))((longlong *)param_1[4],uVar20);
    }
    break;
  case 3:
    if ((*param_3 != '\0') && (*param_3 != '\n')) {
      uVar20 = FUN_143411a90(param_3,lVar8);
      (**(code **)(*(longlong *)param_1[4] + 0xe8))((longlong *)param_1[4],uVar20);
    }
    break;
  case 4:
  case 5:
  case 0xb:
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x14:
  case 0x15:
  case 0x16:
    puVar10 = (undefined8 *)Scaleform::GFx::DisplayObject::GetName(param_1[4],&local_20);
    FUN_143417260(lVar8,"Attempt to write read-only property %s.%s, ignored",*(undefined8 *)*puVar10
                  ,(&PTR_DAT_1467ce9e0)[(longlong)(int)param_2 * 2]);
    goto LAB_14342007d;
  case 6:
    if ((*param_3 != '\0') && (*param_3 != '\n')) {
      uVar20 = FUN_143411a90(param_3,lVar8);
      FUN_14336a110(param_1[4],uVar20);
    }
    break;
  case 7:
    lVar11 = *(longlong *)param_1[4];
    uVar5 = FUN_143411fd0(param_3,lVar8);
    (**(code **)(lVar11 + 0x1d0))(param_1[4],uVar5);
    break;
  case 8:
    if ((*param_3 != '\0') && (*param_3 != '\n')) {
      uVar20 = FUN_143411a90(param_3,lVar8);
      (**(code **)(*(longlong *)param_1[4] + 0x168))((longlong *)param_1[4],uVar20);
    }
    break;
  case 9:
    if ((*param_3 != '\0') && (*param_3 != '\n')) {
      uVar20 = FUN_143411a90(param_3,lVar8);
      (**(code **)(*(longlong *)param_1[4] + 0x178))((longlong *)param_1[4],uVar20);
    }
    break;
  case 10:
    if ((*param_3 != '\0') && (*param_3 != '\n')) {
      uVar20 = FUN_143411a90(param_3,lVar8);
      (**(code **)(*(longlong *)param_1[4] + 0x108))((longlong *)param_1[4],uVar20);
    }
    break;
  case 0xd:
    FUN_143411540(param_3,&local_28,lVar8,0xffffffff,0);
    FUN_14336d4b0(param_1[4],&local_28);
    local_20 = local_28;
LAB_14342007d:
    piVar1 = (int *)(local_20 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
LAB_14341ff6c:
      FUN_14335f920(local_20);
    }
    break;
  case 0x10:
  case 0x12:
  case 0x13:
    break;
  case 0x11:
    if ((*param_3 == '\0') || (*param_3 == '\n')) {
      *(uint *)(param_1[4] + 0xb8) = *(uint *)(param_1[4] + 0xb8) & 0xffffff9f;
      FSettingsModule::ShutdownModule(param_1[4]);
    }
    else {
      uVar13 = (**(code **)(*param_1 + 0xf0))(param_1);
      cVar4 = FUN_143411fd0(param_3,uVar13);
      lVar8 = param_1[4];
      if (cVar4 == '\0') {
        *(uint *)(lVar8 + 0xb8) = *(uint *)(lVar8 + 0xb8) & 0xffffff7f;
        *(uint *)(lVar8 + 0xb8) = *(uint *)(lVar8 + 0xb8) | 0x100;
        FSettingsModule::ShutdownModule(param_1[4]);
      }
      else {
        *(uint *)(lVar8 + 0xb8) = *(uint *)(lVar8 + 0xb8) | 0x180;
        FSettingsModule::ShutdownModule(param_1[4]);
      }
    }
    break;
  case 0x17:
    if (*param_3 != '\x05') {
      dVar21 = (double)FUN_143411a90(param_3,lVar8);
      iVar7 = 0xe;
      if ((int)dVar21 < 0xe) {
        iVar7 = (int)dVar21;
      }
      iVar17 = 1;
      if (1 < iVar7) {
        iVar17 = iVar7;
      }
      (**(code **)(*(longlong *)param_1[4] + 0x80))((longlong *)param_1[4],iVar17);
      return 1;
    }
    FUN_143411540(param_3,&local_20,lVar8,0xffffffff,0);
    FUN_1432c2fb0(&local_28,*local_20);
    ppuVar18 = &PTR_s_normal_1467cf638;
    uVar16 = (ulonglong)local_28 & 0xfffffffffffffffc;
    uVar6 = 1;
    do {
      pcVar9 = (char *)(uVar16 + 0xc);
      do {
        cVar4 = *pcVar9;
        cVar3 = pcVar9[(longlong)*ppuVar18 - (longlong)(uVar16 + 0xc)];
        if (cVar4 != cVar3) break;
        pcVar9 = pcVar9 + 1;
      } while (cVar3 != '\0');
      if (cVar4 == cVar3) {
        (**(code **)(*(longlong *)param_1[4] + 0x80))((longlong *)param_1[4],uVar6);
        uVar16 = (ulonglong)local_28 & 0xfffffffffffffffc;
        break;
      }
      uVar6 = uVar6 + 1;
      ppuVar18 = ppuVar18 + 1;
    } while (uVar6 < 0xf);
    iVar7 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar16 + 8,0xffffffff);
    if (iVar7 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar16);
    }
    piVar1 = (int *)(local_20 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return 1;
    }
    goto LAB_14341ff6c;
  case 0x18:
    lVar8 = *(longlong *)param_1[4];
    uVar13 = (**(code **)(*param_1 + 0xf0))(param_1);
    uVar5 = FUN_143411fd0(param_3,uVar13);
    (**(code **)(lVar8 + 0x1b8))(param_1[4],uVar5);
    break;
  case 0x19:
    lVar11 = FUN_143412120(param_3,lVar8);
    if (lVar11 != 0) {
      uVar13 = FUN_14341b750(*(undefined8 *)(lVar8 + 0xe8),2);
      cVar4 = (**(code **)(*(longlong *)(lVar11 + 0x20) + 0x90))(lVar11 + 0x20,lVar8,uVar13,1);
      if (cVar4 != '\0') {
        lVar12 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x38);
        pRVar14 = (RefCountImpl *)0x0;
        this = pRVar14;
        if (lVar12 != 0) {
          this = (RefCountImpl *)FUN_1432d0ca0(lVar12,0);
        }
        pRVar19 = pRVar14;
        if (0 < *(int *)(lVar11 + 0x78)) {
          do {
            if ((*(longlong *)(pRVar19 + *(longlong *)(lVar11 + 0x70)) != 0) &&
               (lVar12 = FUN_143412120(*(longlong *)(pRVar19 + *(longlong *)(lVar11 + 0x70)),lVar8),
               lVar12 != 0)) {
              uVar13 = FUN_14341b750(*(undefined8 *)(lVar8 + 0xe8),0x25);
              cVar4 = (**(code **)(*(longlong *)(lVar12 + 0x20) + 0x90))
                                (lVar12 + 0x20,lVar8,uVar13,1);
              if (cVar4 != '\0') {
                FUN_1432d0e40(this,*(undefined8 *)(lVar12 + 0x68));
              }
            }
            uVar6 = (int)pRVar14 + 1;
            pRVar14 = (RefCountImpl *)(ulonglong)uVar6;
            pRVar19 = pRVar19 + 8;
          } while ((int)uVar6 < *(int *)(lVar11 + 0x78));
        }
        if (this != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::AddRef(this);
        }
        (**(code **)(*(longlong *)param_1[4] + 0x1c0))((longlong *)param_1[4],this);
        if (this != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(this);
        }
        FSettingsModule::ShutdownModule(param_1[4]);
        (**(code **)(*(longlong *)param_1[4] + 0x1a8))((longlong *)param_1[4],0);
        if (this != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(this);
        }
      }
    }
    break;
  case 0x1a:
    cVar4 = FUN_143411fd0(param_3,lVar8);
    if (cVar4 == '\0') {
      puVar2 = (uint *)(param_1[4] + 0xb8);
      *puVar2 = *puVar2 & 0xffffffef;
    }
    else {
      puVar2 = (uint *)(param_1[4] + 0xb8);
      *puVar2 = *puVar2 | 0x10;
    }
    break;
  case 0x1b:
    cVar4 = FUN_143411fd0(param_3,lVar8);
    if (cVar4 == '\0') {
      puVar2 = (uint *)(param_1[4] + 0xb8);
      *puVar2 = *puVar2 & 0xffffbfff;
    }
    else {
      puVar2 = (uint *)(param_1[4] + 0xb8);
      *puVar2 = *puVar2 | 0x4000;
    }
    break;
  default:
    return 0;
  case 0x1d:
    if ((*param_3 == '\0') || (*param_3 == '\n')) {
      *(uint *)(param_1[4] + 0xb8) = *(uint *)(param_1[4] + 0xb8) & 0xffffff9f;
    }
    else {
      uVar13 = (**(code **)(*param_1 + 0xf0))(param_1);
      cVar4 = FUN_143411fd0(param_3,uVar13);
      lVar8 = param_1[4];
      if (cVar4 == '\0') {
        *(uint *)(lVar8 + 0xb8) = *(uint *)(lVar8 + 0xb8) & 0xffffffdf;
        *(uint *)(lVar8 + 0xb8) = *(uint *)(lVar8 + 0xb8) | 0x40;
      }
      else {
        *(uint *)(lVar8 + 0xb8) = *(uint *)(lVar8 + 0xb8) | 0x60;
      }
    }
    break;
  case 0x1e:
    uVar13 = (**(code **)(*param_1 + 0xf0))(param_1);
    dVar21 = (double)FUN_143411a90(param_3,uVar13);
    *(short *)(param_1[4] + 0xbc) = (short)(int)dVar21;
    break;
  case 0x1f:
    if ((*param_3 == '\0') || (*param_3 == '\n')) {
      *(uint *)(param_1[4] + 0xb8) = *(uint *)(param_1[4] + 0xb8) & 0xfffff9ff;
    }
    else {
      uVar13 = (**(code **)(*param_1 + 0xf0))(param_1);
      cVar4 = FUN_143411fd0(param_3,uVar13);
      lVar8 = param_1[4];
      if (cVar4 == '\0') {
        *(uint *)(lVar8 + 0xb8) = *(uint *)(lVar8 + 0xb8) & 0xfffffdff;
        *(uint *)(lVar8 + 0xb8) = *(uint *)(lVar8 + 0xb8) | 0x400;
      }
      else {
        *(uint *)(lVar8 + 0xb8) = *(uint *)(lVar8 + 0xb8) | 0x600;
      }
    }
    break;
  case 0x20:
    uVar15 = 0;
    uVar13 = (**(code **)(*param_1 + 0xf0))(param_1);
    iVar7 = FUN_143411e30(param_3,uVar13);
    dVar21 = (double)iVar7;
    if (dVar21 == 3.0) {
      uVar15 = 0xc;
    }
    else if (dVar21 == 1.0) {
      uVar15 = 4;
    }
    else if (dVar21 == 2.0) {
      uVar15 = 8;
    }
    uVar13 = FUN_14336b350(param_1[4]);
    FUN_143362aa0(uVar13,uVar15);
  }
  return 1;
}



// FUNCTION 143420480 FUN_143420480 body=2465 status=ok
// SIG undefined FUN_143420480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_143420480(longlong *param_1,uint param_2,byte *param_3,char param_4)

{
  int *piVar1;
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  RefCountNTSImpl *pRVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  byte bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  RefCountNTSImpl *this;
  longlong *plVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  char *pcVar19;
  ulonglong *puVar20;
  undefined *puVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined1 *puVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((param_4 != '\0') && (0x15 < param_2)) {
    uVar11 = (**(code **)(*param_1 + 0xe8))();
    FUN_1434171c0(uVar11,"Invalid GetProperty query, property number %d",param_2);
                    /* WARNING: Read-only address (ram,0x000143f39c70) is written */
                    /* WARNING: Read-only address (ram,0x000145b13f40) is written */
    return 0;
  }
  if (param_2 == 0xffffffff) {
    return 0;
  }
  if (0x20 < (int)param_2) {
    return 0;
  }
  uVar9 = (**(code **)(*param_1 + 0x108))();
  if ((uVar9 >> (param_2 & 0x1f) & 1) == 0) {
    return 0;
  }
  switch(param_2) {
  case 0:
    (**(code **)(*(longlong *)param_1[4] + 0xb0))();
    break;
  case 1:
    (**(code **)(*(longlong *)param_1[4] + 0xc0))();
    break;
  case 2:
    (**(code **)(*(longlong *)param_1[4] + 0xe0))();
    break;
  case 3:
    (**(code **)(*(longlong *)param_1[4] + 0xf0))();
    break;
  default:
    return 0;
  case 6:
    FUN_14336a1e0(param_1[4]);
    break;
  case 7:
    bVar7 = (**(code **)(*(longlong *)param_1[4] + 0x1d8))();
    FUN_143411150(param_3);
    *param_3 = 2;
    param_3[8] = bVar7;
    return 1;
  case 8:
    (**(code **)(*(longlong *)param_1[4] + 0x170))();
    break;
  case 9:
    (**(code **)(*(longlong *)param_1[4] + 0x180))();
    break;
  case 10:
    (**(code **)(*(longlong *)param_1[4] + 0x110))();
    break;
  case 0xb:
    FUN_1432c5960(&local_58,DAT_146b62f28);
    this = (RefCountNTSImpl *)(**(code **)(*param_1 + 0xf8))(param_1,0);
    if (this != (RefCountNTSImpl *)0x0) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    }
    uVar11 = local_50;
                    /* WARNING: Read-only address (ram,0x000143f39c70) is written */
                    /* WARNING: Read-only address (ram,0x000145b13f40) is written */
    for (pRVar4 = (RefCountNTSImpl *)param_1[4];
        (pRVar4 != (RefCountNTSImpl *)0x0 && (pRVar4 != this));
        pRVar4 = *(RefCountNTSImpl **)(pRVar4 + 0x38)) {
      local_50 = uVar11;
      Scaleform::GFx::DisplayObject::GetName(pRVar4,&local_68);
      Scaleform::StringBuffer::Insert
                (&local_58,*(undefined8 *)CONCAT44(uStack_64,local_68),0,0xffffffffffffffff);
      Scaleform::StringBuffer::Insert(&local_58,&DAT_145b11fc0);
      piVar1 = (int *)(CONCAT44(uStack_64,local_68) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      uVar11 = local_50;
    }
    puVar24 = &DAT_145af3922;
    if (local_58 != (undefined1 *)0x0) {
      puVar24 = local_58;
    }
    lVar15 = (**(code **)(*param_1 + 0xe8))(param_1);
    lVar15 = FUN_143360a90(*(undefined8 *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar15 + 0xe8) + 0x28) + 0x18) + 0x618),
                           puVar24,uVar11);
    *(int *)(lVar15 + 0x18) = *(int *)(lVar15 + 0x18) + 1;
    if (4 < *param_3) {
      FUN_143411150(param_3);
    }
    *param_3 = 5;
    *(longlong *)(param_3 + 8) = lVar15;
    iVar10 = *(int *)(lVar15 + 0x18);
    *(int *)(lVar15 + 0x18) = iVar10;
    if (iVar10 == 0) {
      FUN_14335f920(lVar15);
    }
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
    Scaleform::StringBuffer::~StringBuffer(&local_58);
    return 1;
  case 0xd:
    uVar11 = Scaleform::GFx::DisplayObject::GetName(param_1[4],&local_60);
    FUN_1434a4c10(param_3,uVar11);
    piVar1 = (int *)(local_60 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return 1;
    }
    FUN_14335f920();
    return 1;
  case 0xe:
    FUN_143411150(param_3);
    *param_3 = 0;
    lVar15 = (**(code **)(*param_1 + 0xe8))(param_1);
    lVar15 = *(longlong *)(*(longlong *)(*(longlong *)(lVar15 + 0xe0) + 0x20) + 0x10);
    uStack_64 = *(undefined4 *)(lVar15 + 0x224c);
    local_68 = *(undefined4 *)(lVar15 + 0x2248);
    lVar15 = FUN_1432e79b0(lVar15,&local_68,0,1,param_1[4]);
    FUN_1432c5960(&local_58,DAT_146b62f28);
    uVar11 = local_50;
    for (; lVar15 != 0; lVar15 = *(longlong *)(lVar15 + 0x38)) {
                    /* WARNING: Read-only address (ram,0x000143f39c70) is written */
                    /* WARNING: Read-only address (ram,0x000145b13f40) is written */
      local_50 = uVar11;
      Scaleform::GFx::DisplayObject::GetName(lVar15,&local_60);
      Scaleform::StringBuffer::Insert(&local_58,*local_60,0,0xffffffffffffffff);
      Scaleform::StringBuffer::Insert(&local_58,&DAT_145b11fc0);
      piVar1 = (int *)(local_60 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      uVar11 = local_50;
    }
                    /* WARNING: Read-only address (ram,0x000143f39c70) is written */
                    /* WARNING: Read-only address (ram,0x000145b13f40) is written */
    puVar24 = &DAT_145af3922;
    if (local_58 != (undefined1 *)0x0) {
      puVar24 = local_58;
    }
    lVar15 = (**(code **)(*param_1 + 0xe8))(param_1);
    lVar15 = FUN_143360a90(*(undefined8 *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar15 + 0xe8) + 0x28) + 0x18) + 0x618),
                           puVar24,uVar11);
    *(int *)(lVar15 + 0x18) = *(int *)(lVar15 + 0x18) + 1;
    if (4 < *param_3) {
      FUN_143411150(param_3);
    }
    *param_3 = 5;
    *(longlong *)(param_3 + 8) = lVar15;
    iVar10 = *(int *)(lVar15 + 0x18);
    *(int *)(lVar15 + 0x18) = iVar10;
    if (iVar10 == 0) {
      FUN_14335f920(lVar15);
    }
    Scaleform::StringBuffer::~StringBuffer(&local_58);
    return 1;
  case 0xf:
    uVar23 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    local_48 = 0;
    plVar12 = (longlong *)(**(code **)(*(longlong *)param_1[4] + 0x218))();
    pauVar13 = (undefined1 (*) [16])(**(code **)(*plVar12 + 0x60))(plVar12);
    uVar17 = uVar23;
    if (pauVar13 != (undefined1 (*) [16])0x0) {
      uVar17 = 0xffffffffffffffff;
      do {
        uVar17 = uVar17 + 1;
      } while ((*pauVar13)[uVar17] != '\0');
    }
    FUN_1432f25b0(&local_58,uVar17 + 1);
    puVar24 = local_58;
    auVar6 = s_________________appendChild_145b13f40._0_16_;
    auVar5 = _DAT_143f39c70;
    if (uVar17 != 0) {
      if ((0x1f < uVar17) &&
         ((pauVar13[-1] + uVar17 + 0xf < local_58 ||
          ((undefined1 (*) [16])(local_58 + (uVar17 - 1)) < pauVar13)))) {
        pauVar14 = pauVar13;
        do {
          auVar3 = *pauVar14;
          pauVar2 = pauVar14 + 2;
          uVar23 = uVar23 + 0x20;
          auVar26[0] = -(auVar3[0] == '\\');
          auVar26[1] = -(auVar3[1] == '\\');
          auVar26[2] = -(auVar3[2] == '\\');
          auVar26[3] = -(auVar3[3] == '\\');
          auVar26[4] = -(auVar3[4] == '\\');
          auVar26[5] = -(auVar3[5] == '\\');
          auVar26[6] = -(auVar3[6] == '\\');
          auVar26[7] = -(auVar3[7] == '\\');
          auVar26[8] = -(auVar3[8] == '\\');
          auVar26[9] = -(auVar3[9] == '\\');
          auVar26[10] = -(auVar3[10] == '\\');
          auVar26[0xb] = -(auVar3[0xb] == '\\');
          auVar26[0xc] = -(auVar3[0xc] == '\\');
          auVar26[0xd] = -(auVar3[0xd] == '\\');
          auVar26[0xe] = -(auVar3[0xe] == '\\');
          auVar26[0xf] = -(auVar3[0xf] == '\\');
          auVar26 = ~auVar26 & auVar5;
          *(undefined1 (*) [16])(local_58 + (-0x20 - (longlong)pauVar13) + (longlong)pauVar2) =
               ~auVar26 & auVar6 | auVar26 & auVar3;
          auVar3 = pauVar14[1];
          auVar27[0] = -(auVar3[0] == '\\');
          auVar27[1] = -(auVar3[1] == '\\');
          auVar27[2] = -(auVar3[2] == '\\');
          auVar27[3] = -(auVar3[3] == '\\');
          auVar27[4] = -(auVar3[4] == '\\');
          auVar27[5] = -(auVar3[5] == '\\');
          auVar27[6] = -(auVar3[6] == '\\');
          auVar27[7] = -(auVar3[7] == '\\');
          auVar27[8] = -(auVar3[8] == '\\');
          auVar27[9] = -(auVar3[9] == '\\');
          auVar27[10] = -(auVar3[10] == '\\');
          auVar27[0xb] = -(auVar3[0xb] == '\\');
          auVar27[0xc] = -(auVar3[0xc] == '\\');
          auVar27[0xd] = -(auVar3[0xd] == '\\');
          auVar27[0xe] = -(auVar3[0xe] == '\\');
          auVar27[0xf] = -(auVar3[0xf] == '\\');
          auVar26 = ~auVar27 & auVar5;
          *(undefined1 (*) [16])(local_58 + (-0x10 - (longlong)pauVar13) + (longlong)pauVar2) =
               ~auVar26 & auVar6 | auVar26 & auVar3;
          pauVar14 = pauVar2;
        } while (uVar23 < (uVar17 & 0xffffffffffffffe0));
      }
      if (uVar23 < uVar17) {
        lVar15 = uVar17 - uVar23;
        pcVar19 = *pauVar13 + uVar23;
        do {
          cVar8 = *pcVar19;
          if (*pcVar19 == '\\') {
            cVar8 = '/';
          }
          pcVar19[(longlong)local_58 - (longlong)pauVar13] = cVar8;
          lVar15 = lVar15 + -1;
          pcVar19 = pcVar19 + 1;
        } while (lVar15 != 0);
      }
    }
    local_58[uVar17] = 0;
    FUN_1432c2f70(&local_68);
    FUN_1433646c0(puVar24,uVar17,&local_68);
    lVar15 = (**(code **)(*param_1 + 0xe8))(param_1);
    puVar20 = (ulonglong *)(CONCAT44(uStack_64,local_68) & 0xfffffffffffffffc);
    lVar15 = FUN_143360a90(*(undefined8 *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar15 + 0xe8) + 0x28) + 0x18) + 0x618),
                           (longlong)puVar20 + 0xc,*puVar20 & 0x7fffffffffffffff);
    *(int *)(lVar15 + 0x18) = *(int *)(lVar15 + 0x18) + 1;
    if (4 < *param_3) {
      FUN_143411150(param_3);
    }
    *param_3 = 5;
    *(longlong *)(param_3 + 8) = lVar15;
    iVar10 = *(int *)(lVar15 + 0x18);
    *(int *)(lVar15 + 0x18) = iVar10;
    if (iVar10 == 0) {
      FUN_14335f920(lVar15);
    }
    uVar17 = CONCAT44(uStack_64,local_68) & 0xfffffffffffffffc;
    iVar10 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar17 + 8,0xffffffff);
    if (iVar10 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar17);
    }
    if (puVar24 == (undefined1 *)0x0) {
      return 1;
    }
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar24);
    return 1;
  case 0x10:
    FUN_143411150(param_3);
    *param_3 = 2;
    param_3[8] = 1;
    return 1;
  case 0x11:
    uVar9 = *(uint *)(param_1[4] + 0xb8) & 0x180;
    if (uVar9 == 0) {
      FUN_143411150(param_3);
      *param_3 = 1;
      return 1;
    }
    bVar25 = uVar9 == 0x180;
    goto LAB_143420bde;
  case 0x12:
    break;
  case 0x13:
    lVar15 = (**(code **)(*param_1 + 0xe8))(param_1);
    puVar21 = &DAT_145b11fc4;
    goto LAB_143420b26;
  case 0x14:
    (**(code **)(*(longlong *)param_1[4] + 0x188))();
    break;
  case 0x15:
    (**(code **)(*(longlong *)param_1[4] + 400))();
    break;
  case 0x16:
    if (*(longlong *)(param_1[4] + 0x38) != 0) {
      Scaleform::GFx::AS2::Value::SetAsCharacter();
      return 1;
    }
LAB_143420bf7:
    FUN_143411150(param_3);
    *param_3 = 0;
    return 1;
  case 0x17:
    iVar10 = (**(code **)(*(longlong *)param_1[4] + 0x78))();
    puVar21 = (&PTR_s_normal_1467cf630)[iVar10];
    lVar15 = (**(code **)(*param_1 + 0xe8))(param_1);
LAB_143420b26:
    lVar15 = FUN_143360a60(*(undefined8 *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar15 + 0xe8) + 0x28) + 0x18) + 0x618),
                           puVar21);
    *(int *)(lVar15 + 0x18) = *(int *)(lVar15 + 0x18) + 1;
    if (4 < *param_3) {
      FUN_143411150(param_3);
    }
    *param_3 = 5;
    *(longlong *)(param_3 + 8) = lVar15;
    iVar10 = *(int *)(lVar15 + 0x18);
    *(int *)(lVar15 + 0x18) = iVar10;
    if (iVar10 != 0) {
      return 1;
    }
    FUN_14335f920(lVar15);
    return 1;
  case 0x18:
    if ((param_1[4] != 0) && (lVar15 = FUN_14336b350(), lVar15 != 0)) {
      uVar11 = FUN_14336b350(param_1[4]);
      lVar15 = FUN_143362af0(uVar11,3);
      if ((lVar15 != 0) &&
         (lVar15 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FInputDeviceModule>,IModuleInterface_*___ptr64___cdecl(void)>
                   ::GetRawUserObject(lVar15), lVar15 != 0)) {
        FUN_143411150(param_3);
        *param_3 = 2;
        param_3[8] = 1;
        return 1;
      }
    }
    FUN_143411150(param_3);
    *param_3 = 2;
    param_3[8] = 0;
    return 1;
  case 0x19:
    lVar15 = (**(code **)(*param_1 + 0xe8))(param_1);
    plVar12 = *(longlong **)(*(longlong *)(lVar15 + 0xe8) + 0x30);
    lVar16 = (**(code **)(*plVar12 + 0x50))(plVar12,0x98,0);
    uVar23 = 0;
    uVar17 = uVar23;
    if (lVar16 != 0) {
      uVar17 = FUN_14345d990(lVar16,lVar15 + 0xe8);
    }
    lVar16 = (**(code **)(*(longlong *)param_1[4] + 0x1c8))();
    if ((lVar16 != 0) && (iVar10 = FVorbisAudioInfo::GetSourceBufferSize(lVar16), iVar10 != 0)) {
      do {
        lVar18 = Scaleform::Render::FilterSet::GetFilter(lVar16,uVar23);
        if ((lVar18 != 0) && (lVar18 = FUN_143478990(lVar15,lVar18), lVar18 != 0)) {
          FUN_143410c00(&local_58,lVar18);
          FUN_14345e390(uVar17,&local_58);
          if (4 < (byte)local_58) {
            FUN_143411150(&local_58);
          }
          if ((*(uint *)(lVar18 + 0x18) & 0x3ffffff) != 0) {
            *(uint *)(lVar18 + 0x18) = *(uint *)(lVar18 + 0x18) - 1;
            FUN_1434a2b80(lVar18);
          }
        }
        uVar22 = (int)uVar23 + 1;
        uVar23 = (ulonglong)uVar22;
        uVar9 = FVorbisAudioInfo::GetSourceBufferSize(lVar16);
      } while (uVar22 < uVar9);
    }
    FUN_143412aa0(param_3,uVar17);
    if (uVar17 == 0) {
      return 1;
    }
    if ((*(uint *)(uVar17 + 0x18) & 0x3ffffff) == 0) {
      return 1;
    }
    *(uint *)(uVar17 + 0x18) = *(uint *)(uVar17 + 0x18) - 1;
    FUN_1434a2b80(uVar17);
    return 1;
  case 0x1a:
    uVar9 = *(uint *)(param_1[4] + 0xb8);
    FUN_143411150(param_3);
    *param_3 = 2;
    param_3[8] = (byte)(uVar9 >> 4) & 1;
    return 1;
  case 0x1b:
    uVar9 = *(uint *)(param_1[4] + 0xb8);
    FUN_143411150(param_3);
    *param_3 = 2;
    param_3[8] = (byte)(uVar9 >> 0xe) & 1;
    return 1;
  case 0x1d:
    uVar9 = *(uint *)(param_1[4] + 0xb8) & 0x60;
    if (uVar9 == 0) goto LAB_143420bf7;
    bVar25 = uVar9 == 0x60;
    goto LAB_143420bde;
  case 0x1e:
    break;
  case 0x1f:
    uVar9 = *(uint *)(param_1[4] + 0xb8) & 0x600;
    if (uVar9 == 0) {
      return 0;
    }
    bVar25 = uVar9 == 0x600;
LAB_143420bde:
    FUN_143411150(param_3);
    *param_3 = 2;
    param_3[8] = bVar25;
    return 1;
  case 0x20:
    uVar11 = FUN_14336b350(param_1[4]);
    FUN_1432cd1e0(uVar11);
  }
  FUN_1434a4b40(param_3);
                    /* WARNING: Read-only address (ram,0x000143f39c70) is written */
                    /* WARNING: Read-only address (ram,0x000145b13f40) is written */
                    /* WARNING: Read-only address (ram,0x000143f39c70) is written */
                    /* WARNING: Read-only address (ram,0x000145b13f40) is written */
  return 1;
}



// FUNCTION 143420eb0 FUN_143420eb0 body=1503 status=ok
// SIG undefined FUN_143420eb0(void)

undefined8
FUN_143420eb0(longlong *param_1,longlong param_2,longlong *param_3,char *param_4,undefined8 param_5)

{
  ushort *puVar1;
  longlong *plVar2;
  char *pcVar3;
  double dVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  bool bVar13;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  if ((*(uint *)(*param_3 + 0x1c) >> 0x1d & 1) == 0) {
    iVar7 = FUN_14335fa60(param_3);
    if ((iVar7 == 0) || (iVar7 = FUN_14335fad0(param_3,0), iVar7 != 0x5f))
    goto switchD_143420fad_caseD_5c;
    lVar9 = Scaleform::GFx::ASConstString::ToLowerNode(param_3);
    iVar7 = *(int *)(lVar9 + 0x18);
    *(int *)(lVar9 + 0x18) = iVar7 + 1;
    *(int *)(lVar9 + 0x18) = iVar7;
    if ((*(uint *)(lVar9 + 0x1c) >> 0x1c & 1) == 0) {
      if (iVar7 == 0) {
        FUN_14335f920(lVar9);
      }
      goto switchD_143420fad_caseD_5c;
    }
    if (iVar7 == 0) {
      FUN_14335f920(lVar9);
    }
  }
  uVar8 = FUN_14341f910(param_1 + -1,param_3);
  cVar5 = (**(code **)(param_1[-1] + 0x110))(param_1 + -1,uVar8,param_4,0);
  if (cVar5 != '\0') {
    return 1;
  }
  switch(uVar8) {
  case 0x59:
    lVar9 = (**(code **)(param_1[-1] + 0xf0))(param_1 + -1);
    if (*(char *)(*(longlong *)(lVar9 + 0xe8) + 0x68) == '\x01') {
      uVar11 = (**(code **)(param_1[-1] + 0xf0))(param_1 + -1);
      cVar5 = FUN_143411fd0(param_4,uVar11);
      if (cVar5 == '\0') {
        puVar1 = (ushort *)(param_1[3] + 0x6a);
        *puVar1 = *puVar1 & 0xfffd;
      }
      else {
        puVar1 = (ushort *)(param_1[3] + 0x6a);
        *puVar1 = *puVar1 | 2;
      }
      if ((*(byte *)(param_1[3] + 0x6a) >> 1 & 1) == 0) {
        FUN_1432eba30(*(undefined8 *)(*(longlong *)(param_1[3] + 0x20) + 0x10));
      }
      else {
        FUN_1432eb630();
      }
    }
    break;
  case 0x5a:
    lVar9 = (**(code **)(param_1[-1] + 0xf0))(param_1 + -1);
    if (*(char *)(*(longlong *)(lVar9 + 0xe8) + 0x68) == '\x01') {
      uVar11 = (**(code **)(param_1[-1] + 0xf0))(param_1 + -1);
      bVar6 = FUN_143411fd0(param_4,uVar11);
      lVar9 = param_1[3];
      if (bVar6 != ((byte)(*(uint *)(lVar9 + 0xb8) >> 2) & 1)) {
        if (bVar6 == 0) {
          *(uint *)(lVar9 + 0xb8) = *(uint *)(lVar9 + 0xb8) & 0xfffffffb;
        }
        else {
          *(uint *)(lVar9 + 0xb8) = *(uint *)(lVar9 + 0xb8) | 4;
        }
        FUN_1434a1710(param_1[3]);
        lVar9 = ((longlong *)param_1[3])[7];
        if ((lVar9 != 0) && ((*(uint *)(lVar9 + 0xb8) >> 2 & 1) == 0)) {
          (**(code **)(*(longlong *)param_1[3] + 0x350))();
        }
      }
    }
    break;
  case 0x5b:
    lVar9 = (**(code **)(param_1[-1] + 0xf0))(param_1 + -1);
    if (((*(char *)(*(longlong *)(lVar9 + 0xe8) + 0x68) == '\x01') && (*param_4 != '\0')) &&
       (*param_4 != '\n')) {
      uVar11 = (**(code **)(param_1[-1] + 0xf0))(param_1 + -1);
      uVar8 = FUN_143411f00(param_4,uVar11);
      (**(code **)(*(longlong *)param_1[3] + 0x358))((longlong *)param_1[3],uVar8);
    }
    break;
  case 0x6f:
    lVar9 = (**(code **)(param_1[-1] + 0xf0))(param_1 + -1);
    if (*(char *)(*(longlong *)(lVar9 + 0xe8) + 0x68) == '\x01') {
      plVar2 = (longlong *)param_1[3];
      lVar9 = *plVar2;
      uVar11 = (**(code **)(param_1[-1] + 0xf0))(param_1 + -1);
      uVar8 = FUN_143411a90(param_4,uVar11);
      (**(code **)(lVar9 + 200))(plVar2,uVar8);
    }
    break;
  case 0x70:
    lVar9 = (**(code **)(param_1[-1] + 0xf0))(param_1 + -1);
    if (*(char *)(*(longlong *)(lVar9 + 0xe8) + 0x68) == '\x01') {
      plVar2 = (longlong *)param_1[3];
      lVar9 = *plVar2;
      uVar11 = (**(code **)(param_1[-1] + 0xf0))(param_1 + -1);
      uVar8 = FUN_143411a90(param_4,uVar11);
      (**(code **)(lVar9 + 0xf8))(plVar2,uVar8);
    }
    break;
  case 0x71:
    lVar9 = (**(code **)(param_1[-1] + 0xf0))(param_1 + -1);
    if (*(char *)(*(longlong *)(lVar9 + 0xe8) + 0x68) == '\x01') {
      plVar2 = (longlong *)param_1[3];
      lVar9 = *plVar2;
      uVar11 = (**(code **)(param_1[-1] + 0xf0))(param_1 + -1);
      uVar8 = FUN_143411a90(param_4,uVar11);
      (**(code **)(lVar9 + 0x118))(plVar2,uVar8);
    }
    break;
  case 0x72:
    lVar9 = (**(code **)(param_1[-1] + 0xf0))(param_1 + -1);
    if (*(char *)(*(longlong *)(lVar9 + 0xe8) + 0x68) == '\x01') {
      plVar2 = (longlong *)param_1[3];
      lVar9 = *plVar2;
      uVar11 = (**(code **)(param_1[-1] + 0xf0))(param_1 + -1);
      uVar8 = FUN_143411a90(param_4,uVar11);
      (**(code **)(lVar9 + 0x128))(plVar2,uVar8);
    }
    break;
  case 0x73:
    lVar9 = (**(code **)(param_1[-1] + 0xf0))(param_1 + -1);
    if (*(char *)(*(longlong *)(lVar9 + 0xe8) + 0x68) == '\x01') {
      lVar9 = FUN_143412120(param_4,param_2);
      if (lVar9 == 0) {
        FUN_143367900(param_1[3],0);
      }
      else {
        iVar7 = (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x10))(lVar9 + 0x20);
        if (iVar7 == 7) {
          lVar10 = FUN_1434123a0(param_4,param_2);
          lVar12 = 0;
          lVar9 = lVar10 + -0x20;
          if (lVar10 == 0) {
            lVar9 = lVar12;
          }
          iVar7 = *(int *)(lVar9 + 0x78);
          local_68 = 0x3f800000;
          local_58 = 0x3f80000000000000;
          uStack_40 = 0x3f800000;
          local_30 = 0x3f80000000000000;
          uStack_60 = 0;
          uStack_50 = 0;
          local_48 = 0;
          local_38 = 0;
          if (0 < (longlong)iVar7) {
            do {
              pcVar3 = *(char **)(*(longlong *)(lVar9 + 0x70) + lVar12 * 8);
              if ((pcVar3 != (char *)0x0) && ((byte)(*pcVar3 - 3U) < 2)) {
                dVar4 = (double)FUN_143411a90(pcVar3,param_2);
                *(float *)((longlong)&local_68 + lVar12 * 4) = (float)dVar4;
              }
              lVar12 = lVar12 + 1;
            } while (lVar12 < iVar7);
          }
          Scaleform::Render::Matrix4x4<float>::Transpose((Matrix4x4<float> *)&local_68);
          local_98 = local_68;
          uStack_90 = uStack_60;
          local_88 = local_58;
          uStack_80 = uStack_50;
          local_78 = (undefined4)local_48;
          uStack_74 = local_48._4_4_;
          uStack_70 = (undefined4)uStack_40;
          uStack_6c = uStack_40._4_4_;
          (**(code **)(*(longlong *)param_1[3] + 0x28))((longlong *)param_1[3],&local_98);
        }
      }
    }
    break;
  case 0x74:
    lVar9 = (**(code **)(param_1[-1] + 0xf0))(param_1 + -1);
    if (*(char *)(*(longlong *)(lVar9 + 0xe8) + 0x68) == '\x01') {
      plVar2 = (longlong *)param_1[3];
      lVar9 = *plVar2;
      uVar11 = (**(code **)(param_1[-1] + 0xf0))(param_1 + -1);
      uVar8 = FUN_143411a90(param_4,uVar11);
      (**(code **)(lVar9 + 0x138))(plVar2,uVar8);
    }
  }
switchD_143420fad_caseD_5c:
  if (*(byte *)(param_2 + 0xf0) < 7) {
    if (*(longlong *)(*param_3 + 0x10) == 0) {
      FUN_14335f970();
    }
    bVar13 = *(longlong *)
              (*(longlong *)
                (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x3a8)
              + 0x10) == *(longlong *)(*param_3 + 0x10);
  }
  else {
    bVar13 = *param_3 ==
             *(longlong *)
              (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x3a8);
  }
  if ((bVar13) && (*param_4 != '\n')) {
    lVar9 = *param_1;
    uVar11 = FUN_143412120(param_4,0);
    (**(code **)(lVar9 + 0x68))(param_1,param_2 + 0xe8,uVar11);
  }
  lVar9 = (**(code **)(param_1[-1] + 200))(param_1 + -1);
  uVar11 = 0;
  if (lVar9 != 0) {
    uVar11 = (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x18))
                       (lVar9 + 0x20,param_2,param_3,param_4,param_5);
  }
  return uVar11;
}



// FUNCTION 1434214e0 FUN_1434214e0 body=161 status=ok
// SIG undefined FUN_1434214e0(void)

void FUN_1434214e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + -8) + 0xc0))(param_1 + -8);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1U & 0x8fffffff;
    if (param_1 + -8 == 0) {
      param_1 = 0;
    }
    (**(code **)(*(longlong *)(lVar1 + 0x20) + 0x40))
              ((longlong *)(lVar1 + 0x20),param_2,param_3,param_4,param_1);
    if ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0) {
      *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
      FUN_1434a2b80(lVar1);
    }
  }
  return;
}



// FUNCTION 143421590 FUN_143421590 body=334 status=ok
// SIG undefined FUN_143421590(void)

ulonglong FUN_143421590(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if ((*(uint *)(*param_3 + 0x1c) >> 0x1d & 1) == 0) {
    iVar3 = FUN_14335fa60(param_3);
    if ((iVar3 != 0) && (iVar3 = FUN_14335fad0(param_3,0), iVar3 == 0x5f)) {
      lVar5 = Scaleform::GFx::ASConstString::ToLowerNode(param_3);
      iVar3 = *(int *)(lVar5 + 0x18);
      *(int *)(lVar5 + 0x18) = iVar3 + 1;
      *(int *)(lVar5 + 0x18) = iVar3;
      if ((*(uint *)(lVar5 + 0x1c) >> 0x1c & 1) != 0) {
        if (iVar3 == 0) {
          FUN_14335f920(lVar5);
        }
        goto LAB_14342160c;
      }
      if (iVar3 == 0) {
        FUN_14335f920(lVar5);
      }
    }
  }
  else {
LAB_14342160c:
    uVar4 = FUN_14341f910(param_1 + -8,param_3);
    if (((uVar4 != 0xffffffff) && ((int)uVar4 < 0x21)) &&
       (uVar6 = (**(code **)(*(longlong *)(param_1 + -8) + 0x108))(param_1 + -8),
       ((uint)uVar6 >> (uVar4 & 0x1f) & 1) != 0)) {
      if (uVar4 != 0x1f) {
        return uVar6 & 0xffffffffffffff00;
      }
      lVar5 = *(longlong *)(param_1 + 0x18);
      puVar1 = (uint *)(lVar5 + 0xb8);
      *puVar1 = *puVar1 & 0xfffff9ff;
      return CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
    }
  }
  lVar5 = (**(code **)(*(longlong *)(param_1 + -8) + 200))(param_1 + -8);
  if (lVar5 != 0) {
    *(uint *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1U & 0x8fffffff;
    cVar2 = (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x30))
                      ((longlong *)(lVar5 + 0x20),param_2,param_3);
    if (cVar2 != '\0') {
      uVar6 = 1;
      goto LAB_1434216a2;
    }
  }
  uVar6 = 0;
LAB_1434216a2:
  if ((lVar5 != 0) && ((*(uint *)(lVar5 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) - 1;
    FUN_1434a2b80(lVar5);
  }
  return uVar6;
}



// FUNCTION 1434216f0 FUN_1434216f0 body=139 status=ok
// SIG undefined FUN_1434216f0(void)

undefined1 FUN_1434216f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*(longlong *)(param_1 + -8) + 200))(param_1 + -8);
  uVar1 = 0;
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
    uVar1 = (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x38))
                      ((longlong *)(lVar2 + 0x20),param_2,param_3,param_4);
    if ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0) {
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
      FUN_1434a2b80(lVar2);
    }
  }
  return uVar1;
}



// FUNCTION 143421790 FUN_143421790 body=303 status=ok
// SIG undefined FUN_143421790(void)

undefined1 FUN_143421790(longlong param_1,undefined8 param_2,longlong *param_3,undefined1 param_4)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((*(uint *)(*param_3 + 0x1c) >> 0x1d & 1) == 0) {
    iVar2 = FUN_14335fa60(param_3);
    if ((iVar2 == 0) || (iVar2 = FUN_14335fad0(param_3,0), iVar2 != 0x5f)) goto LAB_143421849;
    lVar5 = Scaleform::GFx::ASConstString::ToLowerNode(param_3);
    iVar2 = *(int *)(lVar5 + 0x18);
    *(int *)(lVar5 + 0x18) = iVar2 + 1;
    *(int *)(lVar5 + 0x18) = iVar2;
    if ((*(uint *)(lVar5 + 0x1c) >> 0x1c & 1) == 0) {
      if (iVar2 == 0) {
        FUN_14335f920(lVar5);
      }
      goto LAB_143421849;
    }
    if (iVar2 == 0) {
      FUN_14335f920(lVar5);
    }
  }
  uVar3 = FUN_14341f910(param_1 + -8,param_3);
  if (((uVar3 != 0xffffffff) && ((int)uVar3 < 0x21)) &&
     (uVar4 = (**(code **)(*(longlong *)(param_1 + -8) + 0x108))(param_1 + -8),
     (uVar4 >> (uVar3 & 0x1f) & 1) != 0)) {
    return 1;
  }
LAB_143421849:
  lVar5 = (**(code **)(*(longlong *)(param_1 + -8) + 200))(param_1 + -8);
  if (lVar5 == 0) {
    uVar1 = 0;
  }
  else {
    *(uint *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1U & 0x8fffffff;
    uVar1 = (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x48))
                      ((longlong *)(lVar5 + 0x20),param_2,param_3,param_4);
    if ((*(uint *)(lVar5 + 0x18) & 0x3ffffff) != 0) {
      *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) - 1;
      FUN_1434a2b80(lVar5);
    }
  }
  return uVar1;
}



// FUNCTION 1434218d0 FUN_1434218d0 body=137 status=ok
// SIG undefined FUN_1434218d0(void)

undefined1 FUN_1434218d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*(longlong *)(param_1 + -8) + 200))(param_1 + -8);
  uVar1 = 0;
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
    uVar1 = (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x28))
                      ((longlong *)(lVar2 + 0x20),param_2,param_3,param_4);
    if ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0) {
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
      FUN_1434a2b80(lVar2);
    }
  }
  return uVar1;
}



// FUNCTION 143421960 FUN_143421960 body=142 status=ok
// SIG undefined FUN_143421960(void)

undefined1 FUN_143421960(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*(longlong *)(param_1 + -8) + 0xc0))(param_1 + -8);
  uVar1 = 0;
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
    uVar1 = (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x90))
                      ((longlong *)(lVar2 + 0x20),param_2,param_3,param_4);
    if ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0) {
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
      FUN_1434a2b80(lVar2);
    }
  }
  return uVar1;
}



// FUNCTION 143421a00 FUN_143421a00 body=151 status=ok
// SIG undefined FUN_143421a00(void)

undefined1
FUN_143421a00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*(longlong *)(param_1 + -8) + 200))(param_1 + -8);
  uVar1 = 0;
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
    uVar1 = (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x98))
                      (lVar2 + 0x20,param_2,param_3,param_4,param_5);
    if ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0) {
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
      FUN_1434a2b80(lVar2);
    }
  }
  return uVar1;
}



// FUNCTION 143421aa0 FUN_143421aa0 body=140 status=ok
// SIG undefined FUN_143421aa0(void)

undefined1 FUN_143421aa0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*(longlong *)(param_1 + -8) + 200))(param_1 + -8);
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
    uVar1 = (**(code **)(*(longlong *)(lVar2 + 0x20) + 0xa0))
                      ((longlong *)(lVar2 + 0x20),param_2,param_3);
    if ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0) {
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
      FUN_1434a2b80(lVar2);
    }
    return uVar1;
  }
  return 0;
}



// FUNCTION 143421b40 FUN_143421b40 body=186 status=ok
// SIG undefined FUN_143421b40(void)

void FUN_143421b40(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*(longlong *)(param_1 + -8) + 200))(param_1 + -8);
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
    (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x68))((longlong *)(lVar2 + 0x20),param_2,param_3);
  }
  if (param_3 != 0) {
    *(uint *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1U & 0x8fffffff;
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  *(longlong *)(param_1 + 0x10) = param_3;
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
    FUN_1434a2b80(lVar2);
  }
  return;
}



// FUNCTION 143421c00 FUN_143421c00 body=153 status=ok
// SIG undefined FUN_143421c00(void)

void FUN_143421c00(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte local_28 [32];
  
  local_28[0] = 0;
  lVar3 = (**(code **)(*param_1 + 0xf0))();
  cVar2 = (**(code **)(*param_2 + 0x58))
                    (param_2,lVar3 + 0xe8,
                     *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0xe8) + 0x28) + 0x18) + 0x3a0
                     ,local_28);
  if (cVar2 != '\0') {
    lVar1 = param_1[1];
    uVar4 = FUN_143412120(local_28,0);
    (**(code **)(lVar1 + 0x68))(param_1 + 1,lVar3 + 0xe8,uVar4);
  }
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  return;
}



// FUNCTION 143421ca0 FUN_143421ca0 body=490 status=ok
// SIG undefined FUN_143421ca0(void)

longlong FUN_143421ca0(longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  RefCountImpl *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined4 local_46;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  plVar6 = (longlong *)0x0;
  if ((*(ushort *)(plVar1[7] + 0x6a) >> 10 & 1) != 0) {
    plVar6 = (longlong *)plVar1[7];
  }
  if ((plVar6 != (longlong *)0x0) && (param_3 < 0x7efffffe)) {
    lVar5 = plVar1[5];
    lVar4 = plVar1[0xd];
    uVar7 = (**(code **)(*plVar1 + 0x88))();
    puVar2 = (undefined4 *)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
    puVar3 = (undefined8 *)FUN_1433679a0(*(undefined8 *)(param_1 + 0x20));
    local_a8 = *puVar3;
    uStack_a0 = puVar3[1];
    local_98 = *(undefined4 *)(puVar3 + 2);
    uStack_94 = *(undefined4 *)((longlong)puVar3 + 0x14);
    uStack_90 = *(undefined4 *)(puVar3 + 3);
    uStack_8c = *(undefined4 *)((longlong)puVar3 + 0x1c);
    local_88 = *puVar2;
    local_84 = puVar2[1];
    local_80 = puVar2[2];
    local_7c = puVar2[3];
    local_78 = puVar2[4];
    local_74 = puVar2[5];
    local_70 = puVar2[6];
    local_6c = puVar2[7];
    local_68 = (RefCountImpl *)0x0;
    local_46 = 0x100000c;
    local_50 = 0;
    local_60 = uVar7;
    local_5c = param_3;
    local_58 = (int)lVar5;
    local_48 = (short)lVar4;
    lVar4 = (**(code **)(*plVar6 + 0x3b8))
                      (plVar6,&local_a8,param_2,0,param_4,0xffffffff,1,0,
                       *(undefined8 *)(param_1 + 0x20));
    lVar5 = 0;
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x6a) < '\0')) {
      lVar5 = lVar4;
    }
    if (local_68 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_68);
    }
    return lVar5;
  }
  return 0;
}



// FUNCTION 143421e90 FUN_143421e90 body=67 status=ok
// SIG undefined FUN_143421e90(void)

void FUN_143421e90(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = *(longlong *)(lVar1 + 0x38);
  if (lVar2 != 0) {
    lVar3 = 0;
    if ((*(ushort *)(lVar2 + 0x6a) >> 10 & 1) != 0) {
      lVar3 = lVar2;
    }
    if (lVar3 != 0) {
      local_res8[0] = *(undefined4 *)(lVar1 + 0x28);
      FUN_143370350(lVar3,*(undefined4 *)(lVar1 + 0x2c),local_res8);
    }
  }
  return;
}



// FUNCTION 143421ee0 FUN_143421ee0 body=2470 status=ok
// SIG undefined FUN_143421ee0(void)

bool FUN_143421ee0(longlong *param_1,uint *param_2)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  RefCountNTSImpl *this;
  int local_res18;
  ulonglong in_stack_ffffffffffffff38;
  undefined8 uVar15;
  undefined4 uVar16;
  longlong *local_a8;
  undefined8 uStack_a0;
  byte local_98;
  undefined8 *local_88;
  byte local_80 [8];
  longlong *local_78;
  longlong local_70;
  byte local_68;
  RefCountNTSImpl *local_60;
  longlong *local_58;
  RefCountNTSImpl *local_50;
  
  this = (RefCountNTSImpl *)param_1[4];
  if (this != (RefCountNTSImpl *)0x0) {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  local_60 = this;
  lVar7 = (**(code **)(*param_1 + 0xf0))();
  local_50 = *(RefCountNTSImpl **)(lVar7 + 0xe0);
  if (local_50 != (RefCountNTSImpl *)0x0) {
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
  }
  lVar13 = 0;
  iVar14 = 0;
  if (((*param_2 - 0x40 & 0xffffffbf) == 0) &&
     (lVar8 = *(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0xe0) + 0x20) + 0x10), lVar8 != 0))
  {
    lVar10 = lVar13;
    if ((uint)(int)*(char *)((longlong)param_2 + 0x11) < 6) {
      lVar10 = (ulonglong)(uint)(int)*(char *)((longlong)param_2 + 0x11) * 0x688 + 0x2400 + lVar8;
    }
    FUN_14335f7c0(lVar10,param_2);
  }
  local_res18 = 0;
  local_80[0] = 0;
  cVar4 = FUN_14341f370(param_1,param_2);
  if ((cVar4 != '\0') && ((char)param_2[4] == '\0')) {
    FUN_14341f400(param_1,lVar7,param_2);
    local_res18 = 1;
  }
  plVar12 = (longlong *)(lVar7 + 0xe8);
  uVar9 = *param_2;
  lVar8 = *(longlong *)(*(longlong *)(*plVar12 + 0x28) + 0x18);
  if (uVar9 < 0x800001) {
    bVar5 = Scaleform::Alg::BitCount32(uVar9);
    uVar9 = (uint)bVar5;
  }
  else {
    uVar9 = uVar9 - 0xffffe7;
  }
  if (uVar9 - 1 < 0x22) {
    iVar6 = *(int *)(&DAT_145b13550 + (ulonglong)uVar9 * 4);
  }
  else {
    iVar6 = 0x2e;
  }
  local_88 = *(undefined8 **)(lVar8 + 0x138 + (longlong)iVar6 * 8);
  *(int *)(local_88 + 3) = *(int *)(local_88 + 3) + 1;
  if (*(int *)(local_88 + 4) == 0) goto LAB_1434225a3;
  local_58 = param_1 + 1;
  cVar4 = (**(code **)(param_1[1] + 0x58))(local_58,plVar12,&local_88,local_80);
  if (cVar4 == '\0') goto LAB_1434225a3;
  if (local_80[0] == 9) {
    local_a8 = (longlong *)((ulonglong)local_a8 & 0xffffffffffffff00);
    FUN_143413c30(local_80,lVar7,param_1 + 1,&local_a8);
    FUN_143411240(local_80,&local_a8);
    if (4 < (byte)local_a8) {
      FUN_143411150(&local_a8);
    }
  }
  uVar16 = (undefined4)(in_stack_ffffffffffffff38 >> 0x20);
  if (local_80[0] == 1) goto LAB_1434225a3;
  if (*(char *)(*plVar12 + 0x68) != '\x01') {
    if ((char)param_2[4] == '\0') {
      local_res18 = local_res18 + 1;
      if ((*(uint *)(*(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0xe0) + 0x20) + 0x10) +
                    0x52f0) >> 2 & 1) != 0) {
        lVar8 = *(longlong *)(param_1[4] + 0x70);
        if (lVar8 == 0) {
          lVar8 = FUN_14336c170();
        }
        in_stack_ffffffffffffff38 = **(ulonglong **)(lVar8 + 0x18);
        if (local_80[0] == 8) {
          bVar5 = 0;
          if (local_78 != (longlong *)0x0) {
            *(int *)(local_78 + 3) = (int)local_78[3] + 1;
            *(uint *)(local_78 + 3) = *(uint *)(local_78 + 3) & 0x8fffffff;
          }
          lVar8 = 0;
          plVar12 = local_78;
          if ((local_70 != 0) && (bVar5 = (local_68 & 1) != 0, lVar8 = local_70, !(bool)bVar5)) {
            *(int *)(local_70 + 0x18) = *(int *)(local_70 + 0x18) + 1;
            *(uint *)(local_70 + 0x18) = *(uint *)(local_70 + 0x18) & 0x8fffffff;
          }
        }
        else if (local_80[0] == 0xb) {
          FUN_143413f20(local_80,&local_a8,lVar7);
          plVar12 = local_a8;
          lVar8 = uStack_a0;
          bVar5 = local_98;
        }
        else {
          local_a8 = (longlong *)0x0;
          uStack_a0 = 0;
          plVar12 = (longlong *)0x0;
          lVar8 = 0;
          bVar5 = 0;
        }
        FUN_143300df0(lVar7,"\n!!! ExecuteEvent started \'%s\' = %p for %s\n",*local_88,plVar12,
                      in_stack_ffffffffffffff38);
        if ((((bVar5 & 2) == 0) && (plVar12 != (longlong *)0x0)) &&
           ((*(uint *)(plVar12 + 3) & 0x3ffffff) != 0)) {
          *(uint *)(plVar12 + 3) = *(uint *)(plVar12 + 3) - 1;
          FUN_1434a2b80(plVar12);
        }
        if ((((bVar5 & 1) == 0) && (lVar8 != 0)) && ((*(uint *)(lVar8 + 0x18) & 0x3ffffff) != 0)) {
          *(uint *)(lVar8 + 0x18) = *(uint *)(lVar8 + 0x18) - 1;
          FUN_1434a2b80(lVar8);
        }
      }
      FUN_14341e410(local_80,0,param_1 + 1,lVar7,in_stack_ffffffffffffff38 & 0xffffffff00000000,
                    (int)(*(longlong *)(lVar7 + 8) - *(longlong *)(lVar7 + 0x10) >> 5) +
                    *(int *)(lVar7 + 0x30) * 0x20 + -0x1f,0);
      if ((*(uint *)(*(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0xe0) + 0x20) + 0x10) +
                    0x52f0) >> 2 & 1) != 0) {
        lVar8 = *(longlong *)(param_1[4] + 0x70);
        if (lVar8 == 0) {
          lVar8 = FUN_14336c170();
        }
        uVar15 = **(undefined8 **)(lVar8 + 0x18);
        if (local_80[0] == 8) {
          bVar5 = 0;
          if (local_78 != (longlong *)0x0) {
            *(int *)(local_78 + 3) = (int)local_78[3] + 1;
            *(uint *)(local_78 + 3) = *(uint *)(local_78 + 3) & 0x8fffffff;
          }
          if ((local_70 != 0) && (bVar5 = (local_68 & 1) != 0, lVar13 = local_70, !(bool)bVar5)) {
            *(int *)(local_70 + 0x18) = *(int *)(local_70 + 0x18) + 1;
            *(uint *)(local_70 + 0x18) = *(uint *)(local_70 + 0x18) & 0x8fffffff;
          }
        }
        else if (local_80[0] == 0xb) {
          FUN_143413f20(local_80,&local_a8,lVar7);
          local_78 = local_a8;
          lVar13 = uStack_a0;
          bVar5 = local_98;
        }
        else {
          local_a8 = (longlong *)0x0;
          uStack_a0 = 0;
          local_78 = (longlong *)0x0;
          lVar13 = 0;
          bVar5 = 0;
        }
        FUN_143300df0(lVar7,"!!! ExecuteEvent finished \'%s\' = %p for %s\n\n",*local_88,local_78,
                      uVar15);
        if ((((bVar5 & 2) == 0) && (local_78 != (longlong *)0x0)) &&
           ((*(uint *)(local_78 + 3) & 0x3ffffff) != 0)) {
          *(uint *)(local_78 + 3) = *(uint *)(local_78 + 3) - 1;
          FUN_1434a2b80(local_78);
        }
        if ((((bVar5 & 1) == 0) && (lVar13 != 0)) && ((*(uint *)(lVar13 + 0x18) & 0x3ffffff) != 0))
        {
          *(uint *)(lVar13 + 0x18) = *(uint *)(lVar13 + 0x18) - 1;
          FUN_1434a2b80(lVar13);
        }
      }
    }
    goto LAB_1434225a3;
  }
  bVar2 = true;
  if ((char)param_2[4] != '\0') {
    if (local_80[0] == 8) {
      bVar5 = 0;
      if (local_78 != (longlong *)0x0) {
        *(int *)(local_78 + 3) = (int)local_78[3] + 1;
        *(uint *)(local_78 + 3) = *(uint *)(local_78 + 3) & 0x8fffffff;
      }
      plVar12 = local_78;
      lVar8 = lVar13;
      if ((local_70 != 0) && (bVar5 = (local_68 & 1) != 0, lVar8 = local_70, !(bool)bVar5)) {
        *(int *)(local_70 + 0x18) = *(int *)(local_70 + 0x18) + 1;
        *(uint *)(local_70 + 0x18) = *(uint *)(local_70 + 0x18) & 0x8fffffff;
      }
LAB_14342211f:
      if (plVar12 != (longlong *)0x0) {
        iVar6 = (**(code **)(*plVar12 + 0x80))(plVar12);
        bVar2 = 1 < iVar6;
      }
    }
    else {
      if (local_80[0] == 0xb) {
        FUN_143413f20(local_80,&local_a8,lVar7);
        plVar12 = local_a8;
        lVar8 = uStack_a0;
        bVar5 = local_98;
        goto LAB_14342211f;
      }
      bVar5 = 0;
      local_a8 = (longlong *)0x0;
      uStack_a0 = 0;
      lVar8 = 0;
      plVar12 = (longlong *)0x0;
    }
    if ((((bVar5 & 2) == 0) && (plVar12 != (longlong *)0x0)) &&
       ((*(uint *)(plVar12 + 3) & 0x3ffffff) != 0)) {
      *(uint *)(plVar12 + 3) = *(uint *)(plVar12 + 3) - 1;
      FUN_1434a2b80(plVar12);
    }
    if ((((bVar5 & 1) == 0) && (lVar8 != 0)) && ((*(uint *)(lVar8 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar8 + 0x18) = *(uint *)(lVar8 + 0x18) - 1;
      FUN_1434a2b80(lVar8);
    }
    this = local_60;
    if (!bVar2) goto LAB_1434225a3;
  }
  local_res18 = local_res18 + 1;
  if ((*(uint *)(*(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0xe0) + 0x20) + 0x10) + 0x52f0)
       >> 2 & 1) != 0) {
    lVar8 = *(longlong *)(param_1[4] + 0x70);
    if (lVar8 == 0) {
      lVar8 = FUN_14336c170();
    }
    uVar15 = **(undefined8 **)(lVar8 + 0x18);
    if (local_80[0] == 8) {
      bVar5 = 0;
      if (local_78 != (longlong *)0x0) {
        *(int *)(local_78 + 3) = (int)local_78[3] + 1;
        *(uint *)(local_78 + 3) = *(uint *)(local_78 + 3) & 0x8fffffff;
      }
      lVar8 = 0;
      plVar12 = local_78;
      if ((local_70 != 0) && (bVar5 = (local_68 & 1) != 0, lVar8 = local_70, !(bool)bVar5)) {
        *(int *)(local_70 + 0x18) = *(int *)(local_70 + 0x18) + 1;
        *(uint *)(local_70 + 0x18) = *(uint *)(local_70 + 0x18) & 0x8fffffff;
      }
    }
    else if (local_80[0] == 0xb) {
      FUN_143413f20(local_80,&local_a8,lVar7);
      plVar12 = local_a8;
      lVar8 = uStack_a0;
      bVar5 = local_98;
    }
    else {
      local_a8 = (longlong *)0x0;
      uStack_a0 = 0;
      plVar12 = (longlong *)0x0;
      lVar8 = 0;
      bVar5 = 0;
    }
    FUN_143300df0(lVar7,"\n!!! ExecuteEvent started \'%s\' = %p for %s\n",*local_88,plVar12,uVar15);
    uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
    if ((((bVar5 & 2) == 0) && (plVar12 != (longlong *)0x0)) &&
       ((*(uint *)(plVar12 + 3) & 0x3ffffff) != 0)) {
      *(uint *)(plVar12 + 3) = *(uint *)(plVar12 + 3) - 1;
      FUN_1434a2b80(plVar12);
    }
    if ((((bVar5 & 1) == 0) && (lVar8 != 0)) && ((*(uint *)(lVar8 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar8 + 0x18) = *(uint *)(lVar8 + 0x18) - 1;
      FUN_1434a2b80(lVar8);
    }
  }
  uVar9 = *param_2;
  if ((((uVar9 & 0xf80000) != 0) || (uVar9 == 0x8000)) ||
     ((uVar9 == 0x10000 || (((uVar9 == 0x1000 || (uVar9 == 0x800)) || (uVar9 == 0x400)))))) {
    uVar9 = param_2[3];
    puVar11 = (ulonglong *)(lVar7 + 8);
    *puVar11 = *puVar11 + 0x20;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)(byte)uVar9);
    local_a8 = (longlong *)CONCAT71(local_a8._1_7_,4);
    if (*(ulonglong *)(lVar7 + 0x18) <= *puVar11) {
      FUN_1434a29d0(puVar11);
    }
    if (*puVar11 != 0) {
      FUN_143410ec0(*puVar11,&local_a8);
      if (4 < (byte)local_a8) {
        FUN_143411150(&local_a8);
      }
    }
    iVar14 = 1;
  }
  uVar9 = *param_2;
  uVar3 = uStack_a0._4_4_;
  if (((uVar9 == 0x2000) || (uVar9 == 0x4000)) ||
     (((uVar9 == 0x8000 || ((uVar9 == 0x10000 || (uVar9 == 0x400000)))) || (uVar9 == 0x800000)))) {
    uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)(byte)param_2[4]);
LAB_1434223a5:
    local_a8 = (longlong *)CONCAT71(local_a8._1_7_,4);
    puVar11 = (ulonglong *)(lVar7 + 8);
    *puVar11 = *puVar11 + 0x20;
    if (*(ulonglong *)(lVar7 + 0x18) <= *puVar11) {
      FUN_1434a29d0(puVar11);
    }
    if (*puVar11 != 0) {
      FUN_143410ec0(*puVar11,&local_a8);
      if (4 < (byte)local_a8) {
        FUN_143411150(&local_a8);
      }
    }
    iVar14 = iVar14 + 1;
  }
  else if ((((uVar9 == 0x400) || (uVar9 == 0x800)) || (uVar9 == 0x80000)) || (uVar9 == 0x100000)) {
    uStack_a0 = (ulonglong)uStack_a0._4_4_ << 0x20;
    if (param_2[2] != 0) {
      uStack_a0 = CONCAT44(uVar3,0xffffffff);
    }
    goto LAB_1434223a5;
  }
  cVar4 = *(char *)((longlong)param_2 + 0x11);
  if ((-1 < cVar4) || (iVar14 != 0)) {
    *(longlong *)(lVar7 + 8) = *(longlong *)(lVar7 + 8) + 0x20;
    puVar11 = (ulonglong *)(lVar7 + 8);
    uStack_a0 = CONCAT44(uStack_a0._4_4_,(int)cVar4);
    local_a8 = (longlong *)CONCAT71(local_a8._1_7_,4);
    if (*(ulonglong *)(lVar7 + 0x18) <= *puVar11) {
      FUN_1434a29d0(puVar11);
    }
    if (*puVar11 != 0) {
      FUN_143410ec0(*puVar11,&local_a8);
      if (4 < (byte)local_a8) {
        FUN_143411150(&local_a8);
      }
    }
    iVar14 = iVar14 + 1;
  }
  FUN_14341e410(local_80,0,local_58,lVar7,CONCAT44(uVar16,iVar14),
                *(int *)(lVar7 + 0x30) * 0x20 +
                (int)(*(longlong *)(lVar7 + 8) - *(longlong *)(lVar7 + 0x10) >> 5) + -0x20,*local_88
               );
  if (iVar14 != 0) {
    FUN_14349eb00(lVar7,iVar14);
  }
  this = local_60;
  if ((*(uint *)(*(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0xe0) + 0x20) + 0x10) + 0x52f0)
       >> 2 & 1) != 0) {
    lVar8 = *(longlong *)(param_1[4] + 0x70);
    if (lVar8 == 0) {
      lVar8 = FUN_14336c170();
    }
    uVar15 = **(undefined8 **)(lVar8 + 0x18);
    if (local_80[0] == 8) {
      bVar5 = 0;
      if (local_78 != (longlong *)0x0) {
        *(int *)(local_78 + 3) = (int)local_78[3] + 1;
        *(uint *)(local_78 + 3) = *(uint *)(local_78 + 3) & 0x8fffffff;
      }
      if ((local_70 != 0) && (bVar5 = (local_68 & 1) != 0, lVar13 = local_70, !(bool)bVar5)) {
        *(int *)(local_70 + 0x18) = *(int *)(local_70 + 0x18) + 1;
        *(uint *)(local_70 + 0x18) = *(uint *)(local_70 + 0x18) & 0x8fffffff;
      }
    }
    else if (local_80[0] == 0xb) {
      FUN_143413f20(local_80,&local_a8,lVar7);
      local_78 = local_a8;
      lVar13 = uStack_a0;
      bVar5 = local_98;
    }
    else {
      local_a8 = (longlong *)0x0;
      uStack_a0 = 0;
      local_78 = (longlong *)0x0;
      lVar13 = 0;
      bVar5 = 0;
    }
    FUN_143300df0(lVar7,"!!! ExecuteEvent finished \'%s\' = %p for %s\n\n",*local_88,local_78,uVar15
                 );
    if ((((bVar5 & 2) == 0) && (local_78 != (longlong *)0x0)) &&
       ((*(uint *)(local_78 + 3) & 0x3ffffff) != 0)) {
      *(uint *)(local_78 + 3) = *(uint *)(local_78 + 3) - 1;
      FUN_1434a2b80(local_78);
    }
    this = local_60;
    if ((((bVar5 & 1) == 0) && (lVar13 != 0)) && ((*(uint *)(lVar13 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar13 + 0x18) = *(uint *)(lVar13 + 0x18) - 1;
      FUN_1434a2b80(lVar13);
      this = local_60;
    }
  }
LAB_1434225a3:
  piVar1 = (int *)(local_88 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (4 < local_80[0]) {
    FUN_143411150(local_80);
  }
  if (local_50 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(local_50);
  }
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return local_res18 != 0;
}



// FUNCTION 143422890 FUN_143422890 body=508 status=ok
// SIG undefined FUN_143422890(void)

undefined1 * FUN_143422890(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  byte local_88 [32];
  undefined **local_68;
  byte *local_60;
  longlong *local_58;
  longlong local_50;
  longlong lStack_48;
  byte local_40;
  longlong local_38;
  int local_30;
  int local_2c;
  
  if (*param_2 == 0) {
    return &stack0x00000000;
  }
  local_88[0] = 0;
  lVar3 = (**(code **)(*param_1 + 0xf0))();
  iVar4 = (int)param_3[1];
  if ((0 < iVar4) && (iVar5 = iVar4 + -1, -1 < iVar5)) {
    puVar1 = (ulonglong *)(lVar3 + 8);
    lVar6 = (longlong)iVar5 << 5;
    do {
      lVar2 = *param_3;
      *puVar1 = *puVar1 + 0x20;
      if (*(ulonglong *)(lVar3 + 0x18) <= *puVar1) {
        FUN_1434a29d0(puVar1);
      }
      if (*puVar1 != 0) {
        FUN_143410ec0(*puVar1,lVar2 + lVar6);
      }
      lVar6 = lVar6 + -0x20;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  puVar1 = (ulonglong *)(lVar3 + 8);
  local_60 = local_88;
  local_2c = *(int *)(lVar3 + 0x30) * 0x20 +
             (int)((longlong)(*puVar1 - *(longlong *)(lVar3 + 0x10)) >> 5) + -0x20;
  local_58 = param_1 + 1;
  local_68 = &PTR_FUN_145b0ab98;
  local_40 = 0;
  local_50 = 0;
  lStack_48 = 0;
  local_38 = lVar3;
  local_30 = iVar4;
  (**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,&local_68,param_2[1],0);
  local_68 = &PTR_FUN_145b0ab98;
  if (((local_40 & 2) == 0) && (local_50 != 0)) {
    if ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
  }
  local_50 = 0;
  if (((local_40 & 1) == 0) && (lStack_48 != 0)) {
    if ((*(uint *)(lStack_48 + 0x18) & 0x3ffffff) != 0) {
      *(uint *)(lStack_48 + 0x18) = *(uint *)(lStack_48 + 0x18) - 1;
      FUN_1434a2b80();
    }
  }
  if (0 < iVar4) {
    do {
      if (4 < *(byte *)*puVar1) {
        FUN_143411150();
      }
      *puVar1 = *puVar1 - 0x20;
      if (*puVar1 < *(ulonglong *)(lVar3 + 0x10)) {
        FUN_1434a25c0(puVar1);
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (4 < local_88[0]) {
    FUN_143411150(local_88);
  }
  return (undefined1 *)0x1;
}



// FUNCTION 143422aa0 FUN_143422aa0 body=500 status=ok
// SIG undefined FUN_143422aa0(void)

undefined8 FUN_143422aa0(longlong *param_1,code *param_2,longlong *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  byte local_88 [32];
  undefined **local_68;
  byte *local_60;
  longlong *local_58;
  longlong local_50;
  longlong lStack_48;
  byte local_40;
  longlong local_38;
  int local_30;
  int local_2c;
  
  if (param_2 == (code *)0x0) {
    return 0;
  }
  local_88[0] = 0;
  lVar3 = (**(code **)(*param_1 + 0xf0))();
  iVar5 = (int)param_3[1];
  if ((0 < iVar5) && (iVar4 = iVar5 + -1, -1 < iVar4)) {
    lVar6 = (longlong)iVar4 << 5;
    do {
      lVar2 = *param_3;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 0x20;
      if (*(ulonglong *)(lVar3 + 0x18) <= *(ulonglong *)(lVar3 + 8)) {
        FUN_1434a29d0(lVar3 + 8);
      }
      if (*(longlong *)(lVar3 + 8) != 0) {
        FUN_143410ec0(*(longlong *)(lVar3 + 8),lVar2 + lVar6);
      }
      lVar6 = lVar6 + -0x20;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  puVar1 = (ulonglong *)(lVar3 + 8);
  local_60 = local_88;
  local_2c = *(int *)(lVar3 + 0x30) * 0x20 +
             (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5) + -0x20;
  local_58 = param_1 + 1;
  local_68 = &PTR_FUN_145b0ab98;
  local_40 = 0;
  local_50 = 0;
  lStack_48 = 0;
  local_38 = lVar3;
  local_30 = iVar5;
  (*param_2)(&local_68);
  local_68 = &PTR_FUN_145b0ab98;
  if (((local_40 & 2) == 0) && (local_50 != 0)) {
    if ((*(uint *)(local_50 + 0x18) & 0x3ffffff) != 0) {
      *(uint *)(local_50 + 0x18) = *(uint *)(local_50 + 0x18) - 1;
      FUN_1434a2b80();
    }
  }
  local_50 = 0;
  if (((local_40 & 1) == 0) && (lStack_48 != 0)) {
    if ((*(uint *)(lStack_48 + 0x18) & 0x3ffffff) != 0) {
      *(uint *)(lStack_48 + 0x18) = *(uint *)(lStack_48 + 0x18) - 1;
      FUN_1434a2b80();
    }
  }
  if (0 < iVar5) {
    do {
      if (4 < *(byte *)*puVar1) {
        FUN_143411150();
      }
      *puVar1 = *puVar1 - 0x20;
      if (*puVar1 < *(ulonglong *)(lVar3 + 0x10)) {
        FUN_1434a25c0(puVar1);
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (4 < local_88[0]) {
    FUN_143411150(local_88);
  }
  return 1;
}



// FUNCTION 143422ca0 FUN_143422ca0 body=113 status=ok
// SIG undefined FUN_143422ca0(void)

undefined8 *
FUN_143422ca0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  param_5._0_4_ = *param_5;
  FUN_1433668d0(param_1,param_3,param_4,&param_5);
  *param_1 = &PTR_FUN_145b0b2d8;
  param_1[3] = &PTR_LAB_145b0b570;
  if (param_2 != 0) {
    Scaleform::GFx::Resource::AddRef(param_2);
  }
  param_1[0xe] = param_2;
  return param_1;
}



// FUNCTION 143422d40 FUN_143422d40 body=52 status=ok
// SIG undefined FUN_143422d40(void)

int FUN_143422d40(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14336b9a0(param_1,*(undefined8 *)(param_1 + 0x70),param_2,
                        *(undefined1 *)((longlong)param_3 + 0x24),param_3[2]);
  *param_3 = lVar1;
  return 2 - (uint)(lVar1 != 0);
}



// FUNCTION 143422d80 FUN_143422d80 body=62 status=ok
// SIG undefined FUN_143422d80(void)

undefined4 FUN_143422d80(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar1 = FUN_1432cd1e0();
    if (*(short *)(lVar1 + 8) == 3) {
      lVar1 = FUN_1432cd1e0(*(undefined8 *)(param_1 + 0x48));
      return *(undefined4 *)(lVar1 + 0x98);
    }
  }
  return 0;
}



// FUNCTION 143422dd0 FUN_143422dd0 body=75 status=ok
// SIG undefined FUN_143422dd0(void)

void FUN_143422dd0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14336b350();
  if (lVar1 != 0) {
    lVar1 = FUN_1432cd1e0(lVar1);
    if (*(short *)(lVar1 + 8) == 3) {
      lVar1 = FUN_1432cd080(*(undefined8 *)(param_1 + 0x48),0x10);
      *(undefined4 *)(lVar1 + 0x98) = param_2;
    }
  }
  return;
}



// FUNCTION 143422e30 FUN_143422e30 body=70 status=ok
// SIG undefined FUN_143422e30(void)

undefined8 FUN_143422e30(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[0xe];
  uVar2 = (**(code **)(*param_1 + 0x218))();
  FUN_1433b30d0(lVar1,param_2,param_3,uVar2);
  return param_2;
}



// FUNCTION 143422e80 FUN_143422e80 body=84 status=ok
// SIG undefined FUN_143422e80(void)

void FUN_143422e80(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[7];
  *param_1 = &PTR_FUN_145b0b580;
  if (lVar1 != 0) {
    FUN_1434975b0(lVar1);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  }
  FUN_14349ebc0(param_1 + 4);
  FUN_14349ebc0(param_1 + 1);
  return;
}



// FUNCTION 143422ee0 FUN_143422ee0 body=519 status=ok
// SIG undefined FUN_143422ee0(void)

void FUN_143422ee0(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  undefined8 param_5)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res18;
  byte local_48 [8];
  undefined8 *local_40;
  undefined8 local_38;
  undefined1 local_30;
  
  lVar2 = FUN_14341b750(*param_3,7);
  if (lVar2 != 0) {
    *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
  }
  if (*param_4 != 0) {
    lVar6 = 0;
    plVar4 = param_4;
    do {
      puVar3 = (undefined8 *)
               (**(code **)(**(longlong **)(*param_3 + 0x30) + 0x50))
                         (*(longlong **)(*param_3 + 0x30),0x70);
      if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
      }
      else {
        lVar5 = plVar4[1];
        FUN_143414770(puVar3,param_3);
        puVar3[0xd] = lVar5;
        *puVar3 = &PTR_LAB_145b0ae70;
        puVar3[4] = &PTR_LAB_145b0aef8;
        FUN_1434a4d00(puVar3 + 4,param_3);
      }
      local_48[0] = 8;
      local_30 = 0;
      if (puVar3 != (undefined8 *)0x0) {
        *(uint *)(puVar3 + 3) = *(int *)(puVar3 + 3) + 1U & 0x8fffffff;
      }
      lVar5 = -1;
      local_38 = 0;
      do {
        lVar5 = lVar5 + 1;
      } while (*(char *)(*plVar4 + lVar5) != '\0');
      local_40 = puVar3;
      local_res18 = FUN_143360950(*(undefined8 *)
                                   (*(longlong *)(*(longlong *)(*param_3 + 0x28) + 0x18) + 0x618),
                                  *plVar4,lVar5,0);
      *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
      (**(code **)(*(longlong *)(param_2 + 0x20) + 0x50))
                ((longlong *)(param_2 + 0x20),param_3,&local_res18,local_48,param_5);
      piVar1 = (int *)(local_res18 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (4 < local_48[0]) {
        FUN_143411150(local_48);
      }
      if ((puVar3 != (undefined8 *)0x0) && ((*(uint *)(puVar3 + 3) & 0x3ffffff) != 0)) {
        *(uint *)(puVar3 + 3) = *(uint *)(puVar3 + 3) - 1;
        FUN_1434a2b80(puVar3);
      }
      lVar6 = lVar6 + 1;
      plVar4 = param_4 + lVar6 * 2;
    } while (*plVar4 != 0);
  }
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
    FUN_1434a2b80(lVar2);
    return;
  }
  return;
}



// FUNCTION 1434230f0 FUN_1434230f0 body=244 status=ok
// SIG undefined FUN_1434230f0(void)

void FUN_1434230f0(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  byte local_38 [8];
  longlong local_30 [2];
  undefined1 local_20;
  
  local_30[0] = *param_4;
  local_38[0] = 8;
  local_20 = 0;
  if (local_30[0] != 0) {
    *(uint *)(local_30[0] + 0x18) = *(int *)(local_30[0] + 0x18) + 1U & 0x8fffffff;
  }
  local_30[1] = 0;
  if (param_4[1] != 0) {
    FUN_1434109d0(local_30,param_4[1],*(byte *)(param_4 + 2) & 1);
  }
  FUN_1434231f0(param_1,param_2,param_3,local_38);
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  lVar1 = *(longlong *)(param_1 + 8);
  local_res8[0] = 3;
  lVar2 = *(longlong *)(lVar1 + 0x20);
  lVar3 = *(longlong *)(*(longlong *)(*param_3 + 0x28) + 0x18);
  uVar4 = FUN_143410c00(local_38,param_2);
  (**(code **)(lVar2 + 0x50))(lVar1 + 0x20,param_3,lVar3 + 0x3a0,uVar4,local_res8);
  if (4 < local_38[0]) {
    FUN_143411150(local_38);
  }
  return;
}



// FUNCTION 1434231f0 FUN_1434231f0 body=348 status=ok
// SIG undefined FUN_1434231f0(void)

undefined8 FUN_1434231f0(longlong param_1,longlong param_2,longlong *param_3,char *param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  longlong local_38;
  longlong lStack_30;
  bool local_28;
  
  local_28 = false;
  if (*param_4 == '\b') {
    local_38 = *(longlong *)(param_4 + 8);
    if (local_38 != 0) {
      *(uint *)(local_38 + 0x18) = *(int *)(local_38 + 0x18) + 1U & 0x8fffffff;
    }
    lVar1 = *(longlong *)(param_4 + 0x10);
    lStack_30 = 0;
    if ((lVar1 != 0) && (local_28 = (param_4[0x18] & 1U) != 0, lStack_30 = lVar1, !local_28)) {
      *(uint *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1U & 0x8fffffff;
    }
  }
  else {
    local_38 = 0;
    lStack_30 = 0;
  }
  bVar3 = local_28;
  lVar2 = lStack_30;
  lVar1 = local_38;
  FUN_143410a60(param_1 + 8,&local_38);
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80(lVar1);
  }
  if (((!bVar3) && (lVar2 != 0)) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
    FUN_1434a2b80(lVar2);
  }
  local_res8[0] = 3;
  local_38 = CONCAT71(local_38._1_7_,10);
  (**(code **)(*(longlong *)(param_2 + 0x20) + 0x50))
            ((longlong *)(param_2 + 0x20),param_3,
             *(longlong *)(*(longlong *)(*param_3 + 0x28) + 0x18) + 0x3b0,&local_38,local_res8);
  if (4 < (byte)local_38) {
    FUN_143411150(&local_38);
  }
  return 1;
}



// FUNCTION 143423360 FUN_143423360 body=311 status=ok
// SIG undefined FUN_143423360(void)

void FUN_143423360(longlong param_1,longlong *param_2,int param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  byte local_28 [32];
  
  if ((*(longlong *)(param_1 + 0x38) == 0) && (param_4 == 0)) {
    lVar4 = (**(code **)(**(longlong **)(*param_2 + 0x30) + 0x50))
                      (*(longlong **)(*param_2 + 0x30),0x18,0);
    if (lVar4 != 0) {
      FUN_143494230(lVar4,param_3);
      *(longlong *)(param_1 + 0x38) = lVar4;
      return;
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    return;
  }
  local_28[0] = 0;
  cVar3 = (**(code **)(*(longlong *)(param_4 + 0x20) + 0x58))
                    (param_4 + 0x20,param_2,
                     *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18) + 0x3a0,local_28);
  if (cVar3 != '\0') {
    lVar4 = FUN_143412120(local_28,0);
    if (lVar4 != 0) {
      *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1U & 0x8fffffff;
    }
    plVar1 = (longlong *)(**(longlong **)(param_1 + 0x38) + (longlong)param_3 * 8);
    if (lVar4 != 0) {
      *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1U & 0x8fffffff;
    }
    lVar2 = *plVar1;
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
      FUN_1434a2b80();
    }
    *plVar1 = lVar4;
    if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
      FUN_1434a2b80(lVar4);
    }
  }
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  return;
}



// FUNCTION 1434234a0 DoesImplement body=219 status=ok
// SIG undefined DoesImplement(void)

undefined8
Scaleform::GFx::AS2::GASPrototypeBase::DoesImplement
          (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x38) + 8);
    uVar5 = 0;
    uVar7 = uVar5;
    if (uVar1 != 0) {
      do {
        lVar2 = **(longlong **)(param_1 + 0x38);
        lVar3 = *(longlong *)(lVar2 + uVar5);
        if (lVar3 != 0) {
          *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
        }
        lVar2 = *(longlong *)(lVar2 + uVar5);
        if (lVar2 != 0) {
          cVar4 = (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x90))(lVar2 + 0x20,param_2,param_3,1);
          uVar6 = *(uint *)(lVar2 + 0x18);
          if (cVar4 != '\0') {
            if ((uVar6 & 0x3ffffff) != 0) {
              *(uint *)(lVar2 + 0x18) = uVar6 - 1;
              FUN_1434a2b80(lVar2);
            }
            return 1;
          }
          if ((uVar6 & 0x3ffffff) != 0) {
            *(uint *)(lVar2 + 0x18) = uVar6 - 1;
            FUN_1434a2b80(lVar2);
          }
        }
        uVar6 = (int)uVar7 + 1;
        uVar5 = uVar5 + 8;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < uVar1);
    }
  }
  return 0;
}



// FUNCTION 143423590 FUN_143423590 body=904 status=ok
// SIG undefined FUN_143423590(void)

undefined1
FUN_143423590(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,char *param_5,
             char param_6)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  byte bVar7;
  bool bVar8;
  longlong *local_a0;
  longlong local_98;
  longlong lStack_90;
  byte local_88;
  undefined2 local_80;
  byte local_60 [40];
  
  bVar5 = 10;
  local_80 = 0;
  local_60[0] = 10;
  if (*(byte *)(param_3 + 8) < 7) {
    local_a0 = param_4;
    if (*(longlong *)(*param_4 + 0x10) == 0) {
      FUN_14335f970();
    }
    if ((*(longlong *)(param_2 + 0x38) != 0) &&
       (lVar3 = FUN_143493d80(param_2 + 0x38,&local_a0,
                              (ulonglong)*(uint *)(*param_4 + 0x1c) &
                              *(ulonglong *)(*(longlong *)(param_2 + 0x38) + 8)), -1 < lVar3)) {
      lVar3 = *(longlong *)(param_2 + 0x38) + 0x18 + lVar3 * 0x30;
      goto LAB_14342366e;
    }
LAB_1434236b3:
    local_98 = 0;
    lStack_90 = 0;
    local_88 = 0;
    if (param_6 == '\0') {
      lVar3 = *(longlong *)(param_1 + 8);
      bVar8 = false;
      if (lVar3 != 0) {
        *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
      }
      lVar2 = *(longlong *)(param_1 + 0x10);
      lVar6 = 0;
      if ((lVar2 != 0) && (bVar8 = (*(byte *)(param_1 + 0x18) & 1) != 0, lVar6 = lVar2, !bVar8)) {
        *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
      }
      if (lVar3 != 0) {
        *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
      }
      local_98 = lVar3;
      if (lVar6 != 0) {
        FUN_1434109d0(&local_98,lVar6,bVar8);
      }
      bVar7 = local_88;
      lVar4 = lStack_90;
      lVar2 = local_98;
      if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
        FUN_1434a2b80(lVar3);
      }
      if (((bVar8 == false) && (lVar6 != 0)) && ((*(uint *)(lVar6 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) - 1;
        FUN_1434a2b80(lVar6);
      }
    }
    else {
      FUN_143410a60(&local_98,param_1 + 0x20);
      lVar4 = lStack_90;
      lVar2 = local_98;
      bVar7 = local_88;
    }
    if (lVar2 != 0) {
      if ((*param_5 != '\b') || (*(longlong *)(param_5 + 8) != lVar2)) {
        FUN_143411150(param_5);
        *param_5 = '\b';
        param_5[0x18] = '\0';
        *(longlong *)(param_5 + 8) = lVar2;
        *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
        param_5[0x10] = '\0';
        param_5[0x11] = '\0';
        param_5[0x12] = '\0';
        param_5[0x13] = '\0';
        param_5[0x14] = '\0';
        param_5[0x15] = '\0';
        param_5[0x16] = '\0';
        param_5[0x17] = '\0';
        if (lVar4 != 0) {
          FUN_1434109d0(param_5 + 8,lVar4,bVar7 & 1);
        }
      }
LAB_143423875:
      if ((((bVar7 & 2) == 0) && (lVar2 != 0)) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
        FUN_1434a2b80(lVar2);
      }
      if ((((bVar7 & 1) == 0) && (lVar4 != 0)) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
        FUN_1434a2b80(lVar4);
      }
      goto LAB_1434238b9;
    }
    FUN_143411150(param_5);
    *param_5 = '\0';
    lVar3 = *(longlong *)(param_2 + 0x30);
    if (lVar3 == 0) goto LAB_143423875;
    uVar1 = (**(code **)(*(longlong *)(lVar3 + 0x20) + 0x58))(lVar3 + 0x20,param_3,param_4,param_5);
    if ((((bVar7 & 1) == 0) && (lVar4 != 0)) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
      FUN_1434a2b80(lVar4);
    }
  }
  else {
    lVar3 = *(longlong *)(param_2 + 0x38);
    if ((lVar3 == 0) ||
       (lVar2 = FUN_1434940d0(param_2 + 0x38,param_4,
                              (ulonglong)*(uint *)(*param_4 + 0x1c) & *(ulonglong *)(lVar3 + 8)),
       lVar2 < 0)) goto LAB_1434236b3;
    lVar3 = lVar3 + 0x18 + lVar2 * 0x30;
LAB_14342366e:
    if (lVar3 == 0) goto LAB_1434236b3;
    FUN_143411240(&local_80,lVar3 + 8);
    local_80 = CONCAT11(*(undefined1 *)(lVar3 + 9),(byte)local_80);
    FUN_143411240(local_60,&local_80);
    bVar5 = local_60[0];
    if (local_60[0] == 10) goto LAB_1434236b3;
    FUN_143411240(param_5,local_60);
    bVar5 = local_60[0];
LAB_1434238b9:
    uVar1 = 1;
    if (bVar5 < 5) goto LAB_1434238cb;
  }
  FUN_143411150(local_60);
LAB_1434238cb:
  if (4 < (byte)local_80) {
    FUN_143411150(&local_80);
  }
  return uVar1;
}



// FUNCTION 143423920 FUN_143423920 body=103 status=ok
// SIG undefined FUN_143423920(void)

undefined8 * FUN_143423920(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_res8 [8];
  
  FUN_143495820();
  local_res8[0] = 1;
  *param_1 = &PTR_LAB_145b0b588;
  param_1[4] = &PTR_LAB_145b0b5d0;
  param_1[0xd] = &PTR_LAB_145b0b678;
  FUN_143422ee0(param_1 + 0xd,param_1,param_2,&PTR_s_addProperty_145b07f40,local_res8);
  return param_1;
}



// FUNCTION 143423990 FUN_143423990 body=99 status=ok
// SIG undefined FUN_143423990(void)

undefined8 * FUN_143423990(undefined8 *param_1)

{
  FUN_143414820();
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR_LAB_145b0b588;
  param_1[4] = &PTR_LAB_145b0b5d0;
  param_1[0xd] = &PTR_LAB_145b0b678;
  return param_1;
}



// FUNCTION 143423a00 FUN_143423a00 body=103 status=ok
// SIG undefined FUN_143423a00(void)

undefined8 * FUN_143423a00(undefined8 *param_1,undefined8 param_2)

{
  undefined1 local_res8 [8];
  
  FUN_1434957a0();
  local_res8[0] = 1;
  *param_1 = &PTR_LAB_145b0b588;
  param_1[4] = &PTR_LAB_145b0b5d0;
  param_1[0xd] = &PTR_LAB_145b0b678;
  FUN_143422ee0(param_1 + 0xd,param_1,param_2,&PTR_s_addProperty_145b07f40,local_res8);
  return param_1;
}



// FUNCTION 143423a70 FUN_143423a70 body=770 status=ok
// SIG undefined FUN_143423a70(void)

/* WARNING: Removing unreachable block (ram,0x000143423bf2) */

void FUN_143423a70(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong lVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined1 local_res8;
  undefined7 uStackX_9;
  ulonglong in_stack_ffffffffffffff88;
  byte local_68;
  undefined7 uStack_67;
  longlong local_60;
  byte local_58;
  byte local_48 [8];
  longlong local_40 [2];
  undefined1 local_30;
  
  pbVar8 = (byte *)0x0;
  if (*(int *)(param_1 + 0x38) < 1) goto LAB_143423bd0;
  lVar7 = *(longlong *)(param_1 + 0x30);
  uVar3 = *(uint *)(param_1 + 0x3c);
  pbVar9 = pbVar8;
  if (uVar3 <= (uint)(*(int *)(lVar7 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar7 + 8) - *(longlong *)(lVar7 + 0x10) >> 5))) {
    pbVar9 = (byte *)((ulonglong)(uVar3 & 0x1f) * 0x20 +
                     *(longlong *)(*(longlong *)(lVar7 + 0x28) + (ulonglong)(uVar3 >> 5) * 8));
  }
  bVar2 = *pbVar9;
  local_68 = 0;
  if ((byte)(bVar2 - 3) < 2) {
    local_48[0] = 3;
    local_40[0] = FUN_143411a90(pbVar9,lVar7);
LAB_143423b03:
    FUN_143411240(&local_68,local_48);
    if (4 < local_48[0]) {
      FUN_143411150(local_48);
    }
  }
  else {
    if (bVar2 == 2) {
      local_48[0] = bVar2;
      uVar6 = FUN_143411fd0(pbVar9,lVar7);
      local_40[0] = CONCAT71(local_40[0]._1_7_,uVar6);
      goto LAB_143423b03;
    }
    if (bVar2 == 5) {
      FUN_143411540(pbVar9,&local_res8,lVar7,0xffffffff,
                    in_stack_ffffffffffffff88 & 0xffffffffffffff00);
      lVar7 = CONCAT71(uStackX_9,local_res8);
      local_48[0] = 5;
      *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
      local_40[0] = lVar7;
      FUN_143411240(&local_68,local_48);
      if (4 < local_48[0]) {
        FUN_143411150(local_48);
      }
      piVar1 = (int *)(lVar7 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(lVar7);
      }
    }
    else {
      if (1 < (byte)(bVar2 - 6)) goto LAB_143423bd0;
      FUN_143411240(&local_68,pbVar9);
    }
  }
  if ((local_68 != 0) && (local_68 != 10)) {
    FUN_143411240(*(undefined8 *)(param_1 + 8),&local_68);
    if (local_68 < 5) {
      return;
    }
    FUN_143411150(&local_68);
    return;
  }
  if (4 < local_68) {
    FUN_143411150(&local_68);
  }
LAB_143423bd0:
  lVar7 = *(longlong *)(param_1 + 0x10);
  if (lVar7 == 0) {
    plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
    lVar7 = (**(code **)(*plVar4 + 0x50))(plVar4,0x68);
    if (lVar7 != 0) {
      pbVar8 = (byte *)FUN_1434148b0(lVar7,*(undefined8 *)(param_1 + 0x30));
    }
  }
  else {
    pbVar8 = (byte *)(lVar7 + -0x20);
    if (pbVar8 != (byte *)0x0) {
      *(uint *)(lVar7 + -8) = *(int *)(lVar7 + -8) + 1U & 0x8fffffff;
    }
  }
  FUN_14341a730(*(undefined8 *)(param_1 + 0x30),&local_68,1);
  lVar5 = CONCAT71(uStack_67,local_68);
  lVar7 = *(longlong *)(param_1 + 0x30);
  local_res8 = 3;
  local_48[0] = 8;
  local_30 = 0;
  if (lVar5 != 0) {
    *(uint *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1U & 0x8fffffff;
  }
  local_40[1] = 0;
  local_40[0] = lVar5;
  if (local_60 != 0) {
    FUN_1434109d0(local_40,local_60,local_58 & 1);
  }
  (**(code **)(*(longlong *)(pbVar8 + 0x20) + 0x50))
            (pbVar8 + 0x20,lVar7 + 0xe8,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0xe8) + 0x28) + 0x18) + 0x3b0,
             local_48,&local_res8);
  if (4 < local_48[0]) {
    FUN_143411150(local_48);
  }
  FUN_143412aa0(*(undefined8 *)(param_1 + 8),pbVar8);
  if ((((local_58 & 2) == 0) && (lVar5 != 0)) && ((*(uint *)(lVar5 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar5 + 0x18) = *(uint *)(lVar5 + 0x18) - 1;
    FUN_1434a2b80(lVar5);
  }
  if ((((local_58 & 1) == 0) && (local_60 != 0)) && ((*(uint *)(local_60 + 0x18) & 0x3ffffff) != 0))
  {
    *(uint *)(local_60 + 0x18) = *(uint *)(local_60 + 0x18) - 1;
    FUN_1434a2b80(local_60);
  }
  if ((pbVar8 != (byte *)0x0) && ((*(uint *)(pbVar8 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(pbVar8 + 0x18) = *(uint *)(pbVar8 + 0x18) - 1;
    FUN_1434a2b80(pbVar8);
  }
  return;
}



// FUNCTION 143423d80 FUN_143423d80 body=1234 status=ok
// SIG undefined FUN_143423d80(void)

void FUN_143423d80(longlong param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  char *pcVar3;
  longlong *plVar4;
  byte bVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  longlong lVar11;
  char *pcVar12;
  byte local_res8;
  ulonglong local_res10;
  longlong local_res18;
  ulonglong in_stack_ffffffffffffff68;
  longlong local_88;
  char *pcStack_80;
  byte local_78;
  longlong local_70;
  longlong local_68;
  byte local_60;
  byte local_58 [8];
  undefined8 *local_50;
  
  if (*(int *)(param_1 + 0x38) < 2) {
    puVar2 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar2);
    *puVar2 = 2;
    puVar2[8] = 0;
    return;
  }
  lVar11 = *(longlong *)(param_1 + 0x30);
  uVar8 = *(uint *)(param_1 + 0x3c);
  pcVar9 = (char *)0x0;
  pcVar12 = pcVar9;
  if (uVar8 <= (uint)(*(int *)(lVar11 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar11 + 8) - *(longlong *)(lVar11 + 0x10) >> 5))) {
    pcVar12 = (char *)((ulonglong)(uVar8 & 0x1f) * 0x20 +
                      *(longlong *)(*(longlong *)(lVar11 + 0x28) + (ulonglong)(uVar8 >> 5) * 8));
  }
  FUN_143411540(pcVar12,&local_res18,lVar11,0xffffffff,
                in_stack_ffffffffffffff68 & 0xffffffffffffff00);
  lVar11 = *(longlong *)(param_1 + 0x30);
  uVar8 = *(int *)(param_1 + 0x3c) - 1;
  pcVar12 = pcVar9;
  if (uVar8 <= (uint)(*(int *)(lVar11 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar11 + 8) - *(longlong *)(lVar11 + 0x10) >> 5))) {
    pcVar12 = (char *)((ulonglong)(uVar8 & 0x1f) * 0x20 +
                      *(longlong *)(*(longlong *)(lVar11 + 0x28) + (ulonglong)(uVar8 >> 5) * 8));
  }
  if (*pcVar12 == '\b') {
    lVar11 = *(longlong *)(pcVar12 + 8);
    local_res8 = 0;
    if (lVar11 != 0) {
      *(uint *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1U & 0x8fffffff;
    }
    pcVar3 = *(char **)(pcVar12 + 0x10);
    pcVar10 = pcVar9;
    if ((pcVar3 != (char *)0x0) &&
       (local_res8 = (pcVar12[0x18] & 1U) != 0, pcVar10 = pcVar3, !(bool)local_res8)) {
      *(uint *)(pcVar3 + 0x18) = *(int *)(pcVar3 + 0x18) + 1U & 0x8fffffff;
    }
LAB_143423f78:
    if (lVar11 != 0) {
      local_78 = 0;
      local_88 = 0;
      pcStack_80 = (char *)0x0;
      if (2 < *(int *)(param_1 + 0x38)) {
        lVar7 = *(longlong *)(param_1 + 0x30);
        uVar8 = *(int *)(param_1 + 0x3c) - 2;
        if (uVar8 <= (uint)(*(int *)(lVar7 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar7 + 8) - *(longlong *)(lVar7 + 0x10) >> 5))) {
          pcVar9 = (char *)((ulonglong)(uVar8 & 0x1f) * 0x20 +
                           *(longlong *)(*(longlong *)(lVar7 + 0x28) + (ulonglong)(uVar8 >> 5) * 8))
          ;
        }
        if ((*pcVar9 == '\b') || (*pcVar9 == '\v')) {
          uVar6 = FUN_1434141c0(param_1,2);
          uVar6 = Scaleform::GFx::AS2::Value::ToFunction(uVar6,&local_70,lVar7);
          FUN_143410a60(&local_88,uVar6);
          if (((local_60 & 2) == 0) &&
             ((local_70 != 0 && ((*(uint *)(local_70 + 0x18) & 0x3ffffff) != 0)))) {
            *(uint *)(local_70 + 0x18) = *(uint *)(local_70 + 0x18) - 1;
            FUN_1434a2b80();
          }
          local_70 = 0;
          if ((((local_60 & 1) == 0) && (local_68 != 0)) &&
             ((*(uint *)(local_68 + 0x18) & 0x3ffffff) != 0)) {
            *(uint *)(local_68 + 0x18) = *(uint *)(local_68 + 0x18) - 1;
            FUN_1434a2b80();
          }
        }
      }
      bVar5 = local_78;
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0);
      if (lVar7 == 0) {
        local_res10 = 0;
      }
      else {
        lVar7 = (**(code **)(*(longlong *)(lVar7 + (ulonglong)*(byte *)(lVar7 + 0x6d) * 4) + 8))();
        local_res10 = *(ulonglong *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0x20) + 0x20) + 0x38) +
                       0x20);
      }
      plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
      local_58[0] = 9;
      local_50 = (undefined8 *)(**(code **)(*plVar4 + 0x50))(plVar4,0x50);
      pcVar12 = pcStack_80;
      lVar7 = local_88;
      if (local_50 == (undefined8 *)0x0) {
        local_50 = (undefined8 *)0x0;
      }
      else {
        local_50[1] = local_res10;
        *local_50 = &PTR_FUN_145b0ab80;
        *(undefined4 *)(local_50 + 3) = 1;
        *(undefined1 *)(local_50 + 6) = 0;
        local_50[4] = lVar11;
        *(uint *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1U & 0x8fffffff;
        local_50[5] = 0;
        if (pcVar10 != (char *)0x0) {
          FUN_1434109d0(local_50 + 4,pcVar10,local_res8 & 1);
        }
        *(undefined1 *)(local_50 + 9) = 0;
        local_50[7] = lVar7;
        if (lVar7 != 0) {
          *(uint *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1U & 0x8fffffff;
        }
        local_50[8] = 0;
        if (pcVar12 != (char *)0x0) {
          FUN_1434109d0(local_50 + 7,pcVar12,bVar5 & 1);
        }
      }
      local_res10 = local_res10 & 0xffffffffffffff00;
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))
                (*(longlong **)(param_1 + 0x10),*(longlong *)(param_1 + 0x30) + 0xe8,&local_res18,
                 local_58,&local_res10);
      puVar2 = *(undefined1 **)(param_1 + 8);
      FUN_143411150(puVar2);
      *puVar2 = 2;
      puVar2[8] = 1;
      if (4 < local_58[0]) {
        FUN_143411150(local_58);
      }
      if ((((bVar5 & 2) == 0) && (lVar7 != 0)) && ((*(uint *)(lVar7 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar7 + 0x18) = *(uint *)(lVar7 + 0x18) - 1;
        FUN_1434a2b80(lVar7);
      }
      if ((((bVar5 & 1) == 0) && (pcVar12 != (char *)0x0)) &&
         ((*(uint *)(pcVar12 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(pcVar12 + 0x18) = *(uint *)(pcVar12 + 0x18) - 1;
        FUN_1434a2b80(pcVar12);
      }
      goto LAB_143423e8d;
    }
  }
  else {
    if (*pcVar12 == '\v') {
      FUN_143413f20(pcVar12,&local_88);
      local_res8 = local_78;
      pcVar10 = pcStack_80;
      lVar11 = local_88;
      goto LAB_143423f78;
    }
    local_res8 = 0;
    local_88 = 0;
    pcStack_80 = (char *)0x0;
    pcVar10 = (char *)0x0;
    lVar11 = 0;
  }
  puVar2 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar2);
  *puVar2 = 2;
  puVar2[8] = 0;
LAB_143423e8d:
  if ((((local_res8 & 2) == 0) && (lVar11 != 0)) && ((*(uint *)(lVar11 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar11 + 0x18) = *(uint *)(lVar11 + 0x18) - 1;
    FUN_1434a2b80(lVar11);
  }
  if ((((local_res8 & 1) == 0) && (pcVar10 != (char *)0x0)) &&
     ((*(uint *)(pcVar10 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(pcVar10 + 0x18) = *(uint *)(pcVar10 + 0x18) - 1;
    FUN_1434a2b80(pcVar10);
  }
  piVar1 = (int *)(local_res18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) {
    return;
  }
  FUN_14335f920();
  return;
}



// FUNCTION 143424260 FUN_143424260 body=174 status=ok
// SIG undefined FUN_143424260(void)

void FUN_143424260(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong local_res8;
  
  lVar3 = *(longlong *)(param_1 + 0x30);
  uVar2 = *(uint *)(param_1 + 0x3c);
  lVar6 = 0;
  if (uVar2 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
    lVar6 = (ulonglong)(uVar2 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar2 >> 5) * 8);
  }
  FUN_143411540(lVar6,&local_res8,lVar3,0xffffffff,0);
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))
                    (*(longlong **)(param_1 + 0x10),*(longlong *)(param_1 + 0x30) + 0xe8,&local_res8
                     ,0);
  puVar4 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar4);
  *puVar4 = 2;
  puVar4[8] = uVar5;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143424320 FUN_143424320 body=292 status=ok
// SIG undefined FUN_143424320(void)

void FUN_143424320(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  longlong local_res8;
  ushort local_28 [16];
  
  if (*(int *)(param_1 + 0x38) < 1) {
    puVar4 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar4);
    *puVar4 = 2;
    puVar4[8] = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar2 = *(uint *)(param_1 + 0x3c);
    uVar6 = 0;
    if (uVar2 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      uVar6 = (ulonglong)(uVar2 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar2 >> 5) * 8);
    }
    FUN_143411540(uVar6,&local_res8,lVar3,0xffffffff,0);
    bVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))
                      (*(longlong **)(param_1 + 0x10),*(longlong *)(param_1 + 0x30) + 0xe8,
                       &local_res8,0);
    uVar7 = 0;
    if (bVar5 != 0) {
      local_28[0] = 0;
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
                (*(longlong **)(param_1 + 0x10),*(longlong *)(param_1 + 0x30) + 0xe8,&local_res8,
                 local_28);
      uVar6 = (ulonglong)bVar5;
      if ((local_28[0] & 0x100) != 0) {
        uVar6 = 0;
      }
      uVar7 = (undefined1)uVar6;
      if (4 < (byte)local_28[0]) {
        FUN_143411150(local_28);
      }
    }
    puVar4 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar4);
    puVar4[8] = uVar7;
    *puVar4 = 2;
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 143424450 FUN_143424450 body=221 status=ok
// SIG undefined FUN_143424450(void)

void FUN_143424450(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (0 < *(int *)(param_1 + 0x38)) {
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (3 < iVar5 - 2U) {
      lVar8 = 0;
      lVar2 = *(longlong *)(param_1 + 0x30);
      uVar1 = *(uint *)(param_1 + 0x3c);
      lVar7 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar7 = lVar8;
      }
      if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
        lVar8 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
      }
      plVar6 = (longlong *)FUN_1434123a0(lVar8);
      if (plVar6 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar6 + 0x90))(plVar6,*(undefined8 *)(param_1 + 0x30),lVar7,0);
        puVar3 = *(undefined1 **)(param_1 + 8);
        FUN_143411150(puVar3);
        puVar3[8] = uVar4;
        *puVar3 = 2;
        return;
      }
    }
  }
  puVar3 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar3);
  puVar3[8] = 0;
  *puVar3 = 2;
  return;
}



// FUNCTION 143424540 FUN_143424540 body=701 status=ok
// SIG undefined FUN_143424540(void)

void FUN_143424540(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  char *pcVar7;
  longlong local_res8;
  ulonglong in_stack_ffffffffffffffa8;
  longlong local_48;
  longlong lStack_40;
  byte local_38;
  byte local_30 [40];
  
  if (*(int *)(param_1 + 0x38) < 2) {
    puVar3 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar3);
    *puVar3 = 2;
    puVar3[8] = 0;
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  pcVar7 = (char *)0x0;
  uVar5 = *(int *)(param_1 + 0x3c) - 1;
  if (uVar5 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
    pcVar7 = (char *)((ulonglong)(uVar5 & 0x1f) * 0x20 +
                     *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar5 >> 5) * 8));
  }
  if (*pcVar7 == '\b') {
    local_38 = 0;
    local_48 = *(longlong *)(pcVar7 + 8);
    if (local_48 != 0) {
      *(int *)(local_48 + 0x18) = *(int *)(local_48 + 0x18) + 1;
      *(uint *)(local_48 + 0x18) = *(uint *)(local_48 + 0x18) & 0x8fffffff;
    }
    lStack_40 = 0;
    lVar2 = *(longlong *)(pcVar7 + 0x10);
    if (((lVar2 != 0) && (local_38 = (pcVar7[0x18] & 1U) != 0, lStack_40 = lVar2, lVar2 != 0)) &&
       (!(bool)local_38)) {
      *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
    }
LAB_1434246b4:
    if (local_48 != 0) {
      local_30[0] = 0;
      if (2 < *(int *)(param_1 + 0x38)) {
        lVar2 = *(longlong *)(param_1 + 0x30);
        lVar6 = 0;
        uVar5 = *(int *)(param_1 + 0x3c) - 2;
        if (uVar5 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
          lVar6 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
        }
        FUN_143411240(local_30,lVar6);
      }
      lVar2 = *(longlong *)(param_1 + 0x30);
      lVar6 = 0;
      uVar5 = *(uint *)(param_1 + 0x3c);
      if (uVar5 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
        lVar6 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
      }
      FUN_143411540(lVar6,&local_res8,lVar2,0xffffffff,
                    in_stack_ffffffffffffffa8 & 0xffffffffffffff00);
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x98))
                        (*(longlong **)(param_1 + 0x10),*(longlong *)(param_1 + 0x30) + 0xe8,
                         &local_res8,&local_48,local_30);
      puVar3 = *(undefined1 **)(param_1 + 8);
      FUN_143411150(puVar3);
      puVar3[8] = uVar4;
      *puVar3 = 2;
      piVar1 = (int *)(local_res8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (4 < local_30[0]) {
        FUN_143411150(local_30);
      }
      goto LAB_1434245ce;
    }
  }
  else {
    if (*pcVar7 == '\v') {
      FUN_143413f20(pcVar7,&local_48);
      goto LAB_1434246b4;
    }
    local_38 = 0;
    local_48 = 0;
    lStack_40 = 0;
  }
  puVar3 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar3);
  *puVar3 = 2;
  puVar3[8] = 0;
LAB_1434245ce:
  if ((((local_38 & 2) == 0) && (local_48 != 0)) && ((*(uint *)(local_48 + 0x18) & 0x3ffffff) != 0))
  {
    *(uint *)(local_48 + 0x18) = *(uint *)(local_48 + 0x18) - 1;
    FUN_1434a2b80();
  }
  local_48 = 0;
  if ((((local_38 & 1) == 0) && (lStack_40 != 0)) &&
     ((*(uint *)(lStack_40 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lStack_40 + 0x18) = *(uint *)(lStack_40 + 0x18) - 1;
    FUN_1434a2b80();
    return;
  }
  return;
}



// FUNCTION 143424810 FUN_143424810 body=210 status=ok
// SIG undefined FUN_143424810(void)

void FUN_143424810(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong local_res8;
  
  if (*(int *)(param_1 + 0x38) < 1) {
    puVar4 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar4);
    *puVar4 = 2;
    puVar4[8] = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar2 = *(uint *)(param_1 + 0x3c);
    lVar6 = 0;
    if (uVar2 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      lVar6 = (ulonglong)(uVar2 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar2 >> 5) * 8);
    }
    FUN_143411540(lVar6,&local_res8,lVar3,0xffffffff,0);
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa0))
                      (*(longlong **)(param_1 + 0x10),*(longlong *)(param_1 + 0x30) + 0xe8,
                       &local_res8);
    puVar4 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar4);
    puVar4[8] = uVar5;
    *puVar4 = 2;
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 1434248f0 FUN_1434248f0 body=374 status=ok
// SIG undefined FUN_1434248f0(void)

void FUN_1434248f0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong *plVar6;
  undefined1 local_28 [8];
  int *local_20;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
  if (iVar2 == 0x17) {
    pbVar5 = *(byte **)(param_1 + 8);
    lVar4 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18);
    if (4 < *pbVar5) {
      FUN_143411150(pbVar5);
    }
    *pbVar5 = 5;
    lVar4 = *(longlong *)(lVar4 + 0x3d0);
  }
  else {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar2 - 2U < 4) {
      plVar6 = *(longlong **)(param_1 + 0x10);
      iVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar4 = 0;
      if (iVar2 - 2U < 4) {
        lVar4 = plVar6[3];
      }
      local_28[0] = 7;
      if (lVar4 == 0) {
        local_20 = (int *)0x0;
      }
      else {
        local_20 = *(int **)(lVar4 + 0x70);
        if (local_20 == (int *)0x0) {
          local_20 = (int *)FUN_14336c170();
        }
        if (local_20 != (int *)0x0) {
          *local_20 = *local_20 + 1;
        }
      }
      piVar1 = local_20;
      lVar4 = *(longlong *)(param_1 + 0x30);
      if ((local_20 == (int *)0x0) ||
         (lVar3 = Scaleform::GFx::CharacterHandle::ResolveCharacter
                            (local_20,*(undefined8 *)
                                       (*(longlong *)(*(longlong *)(lVar4 + 0xe0) + 0x20) + 0x10)),
         lVar3 == 0)) {
        plVar6 = (longlong *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0xe8) + 0x28) + 0x18) + 0x138);
      }
      else {
        plVar6 = (longlong *)(piVar1 + 6);
      }
      pbVar5 = *(byte **)(param_1 + 8);
      if (4 < *pbVar5) {
        FUN_143411150(pbVar5);
      }
      *pbVar5 = 5;
      lVar4 = *plVar6;
      *(longlong *)(pbVar5 + 8) = lVar4;
      piVar1 = (int *)(lVar4 + 0x18);
      *piVar1 = *piVar1 + 1;
      FUN_143411150(local_28);
      return;
    }
    pbVar5 = *(byte **)(param_1 + 8);
    lVar4 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18);
    if (4 < *pbVar5) {
      FUN_143411150(pbVar5);
    }
    *pbVar5 = 5;
    lVar4 = *(longlong *)(lVar4 + 0x3e0);
  }
  *(longlong *)(pbVar5 + 8) = lVar4;
  *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
  return;
}



// FUNCTION 143424a90 FUN_143424a90 body=110 status=ok
// SIG undefined FUN_143424a90(void)

undefined8 *
FUN_143424a90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             char param_5)

{
  FUN_143495820();
  *param_1 = &PTR_LAB_145b0b680;
  param_1[4] = &PTR_LAB_145b0b6c8;
  param_1[0xd] = &PTR_LAB_145b0b770;
  if (param_5 != '\0') {
    param_5 = 1;
    FUN_143422ee0(param_1 + 0xd,param_1,param_2,&PTR_s_apply_145b07ea0,&param_5);
  }
  return param_1;
}



// FUNCTION 143424b10 FUN_143424b10 body=415 status=ok
// SIG undefined FUN_143424b10(void)

void FUN_143424b10(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  char *pcVar8;
  
  if (*(int *)(param_1 + 0x38) != 1) {
    plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
    puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x50))(plVar4,0x70);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      FUN_1434148b0(puVar6,*(undefined8 *)(param_1 + 0x30));
      *puVar6 = &PTR_LAB_145b0ae70;
      puVar6[4] = &PTR_LAB_145b0aef8;
      puVar6[0xd] = 0;
    }
    FUN_143412aa0(*(undefined8 *)(param_1 + 8),puVar6);
    if ((puVar6 != (undefined8 *)0x0) && ((*(uint *)(puVar6 + 3) & 0x3ffffff) != 0)) {
      *(uint *)(puVar6 + 3) = *(uint *)(puVar6 + 3) - 1;
      FUN_1434a2b80(puVar6);
    }
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  pcVar8 = (char *)0x0;
  uVar1 = *(uint *)(param_1 + 0x3c);
  pcVar7 = pcVar8;
  if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
    pcVar7 = (char *)((ulonglong)(uVar1 & 0x1f) * 0x20 +
                     *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8));
  }
  if ((*pcVar7 != '\b') && (*pcVar7 != '\v')) {
    pcVar7 = pcVar8;
    if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      pcVar7 = (char *)((ulonglong)(uVar1 & 0x1f) * 0x20 +
                       *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8));
    }
    if (*pcVar7 != '\v') {
      puVar3 = *(undefined1 **)(param_1 + 8);
      FUN_143411150(puVar3);
      *puVar3 = 1;
      return;
    }
  }
  if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
    pcVar8 = (char *)((ulonglong)(uVar1 & 0x1f) * 0x20 +
                     *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8));
  }
  uVar5 = FUN_143412120(pcVar8,lVar2);
  FUN_143412aa0(*(undefined8 *)(param_1 + 8),uVar5);
  return;
}



// FUNCTION 143424cc0 FUN_143424cc0 body=954 status=ok
// SIG undefined FUN_143424cc0(void)

void FUN_143424cc0(longlong param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  RefCountNTSImpl *pRVar6;
  RefCountNTSImpl *pRVar7;
  uint uVar8;
  RefCountNTSImpl *pRVar9;
  longlong lVar10;
  RefCountNTSImpl *pRVar11;
  longlong *local_res8;
  longlong *local_res10;
  byte local_98 [32];
  undefined **local_78;
  byte *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  longlong local_48;
  int local_40;
  int local_3c;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  pRVar11 = (RefCountNTSImpl *)0x0;
  local_res10 = (longlong *)0x0;
  local_res8 = (longlong *)0x0;
  pRVar6 = (RefCountNTSImpl *)0x0;
  FUN_143411150(puVar1);
  *puVar1 = 0;
  pRVar7 = pRVar11;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar10 = *(longlong *)(param_1 + 0x30);
    uVar8 = *(uint *)(param_1 + 0x3c);
    pRVar9 = pRVar11;
    if (uVar8 <= (uint)(*(int *)(lVar10 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar10 + 8) - *(longlong *)(lVar10 + 0x10) >> 5))) {
      pRVar9 = (RefCountNTSImpl *)
               ((ulonglong)(uVar8 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar10 + 0x28) + (ulonglong)(uVar8 >> 5) * 8));
    }
    local_res8 = (longlong *)FUN_1434123a0(pRVar9);
    if (local_res8 != (longlong *)0x0) {
      iVar4 = (**(code **)(*local_res8 + 0x10))(local_res8);
      pRVar7 = pRVar6;
      if (iVar4 - 2U < 4) {
        iVar4 = (**(code **)(*local_res8 + 0x10))(local_res8);
        if ((iVar4 - 2U < 4) &&
           (pRVar7 = (RefCountNTSImpl *)local_res8[3], pRVar7 != (RefCountNTSImpl *)0x0)) {
          *(int *)(pRVar7 + 8) = *(int *)(pRVar7 + 8) + 1;
        }
      }
      else {
        local_res10 = local_res8 + -4;
        if (local_res10 != (longlong *)0x0) {
          *(uint *)(local_res8 + -1) = (int)local_res8[-1] + 1U & 0x8fffffff;
        }
      }
    }
  }
  lVar10 = 0;
  pRVar6 = pRVar11;
  if (1 < *(int *)(param_1 + 0x38)) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    uVar8 = *(int *)(param_1 + 0x3c) - 1;
    if (uVar8 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      lVar10 = (ulonglong)(uVar8 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar8 >> 5) * 8);
    }
    pRVar9 = (RefCountNTSImpl *)FUN_143412120(lVar10);
    pRVar11 = (RefCountNTSImpl *)0x0;
    pRVar6 = (RefCountNTSImpl *)0x0;
    if ((pRVar9 != (RefCountNTSImpl *)0x0) &&
       (iVar4 = (**(code **)(*(longlong *)(pRVar9 + 0x20) + 0x10))(pRVar9 + 0x20), iVar4 == 7)) {
      *(uint *)(pRVar9 + 0x18) = *(int *)(pRVar9 + 0x18) + 1U & 0x8fffffff;
      uVar8 = *(uint *)(pRVar9 + 0x78);
      pRVar11 = (RefCountNTSImpl *)(ulonglong)uVar8;
      pRVar6 = pRVar9;
      if ((0 < (int)uVar8) && (lVar10 = (longlong)(int)(uVar8 - 1), -1 < (int)(uVar8 - 1))) {
        do {
          lVar2 = *(longlong *)(param_1 + 0x30);
          uVar3 = *(undefined8 *)(*(longlong *)(pRVar9 + 0x70) + lVar10 * 8);
          *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + 0x20;
          if (*(ulonglong *)(lVar2 + 0x18) <= *(ulonglong *)(lVar2 + 8)) {
            FUN_1434a29d0(lVar2 + 8);
          }
          if (*(longlong *)(lVar2 + 8) != 0) {
            FUN_143410ec0(*(longlong *)(lVar2 + 8),uVar3);
          }
          lVar10 = lVar10 + -1;
        } while (-1 < lVar10);
      }
    }
  }
  local_98[0] = 0;
  iVar4 = (int)pRVar11;
  local_40 = iVar4;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x10) + -0x20);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      plVar5 = (longlong *)0x0;
    }
    if (plVar5 != (longlong *)0x0) {
      *(uint *)(plVar5 + 3) = (int)plVar5[3] + 1U & 0x8fffffff;
    }
    local_48 = *(longlong *)(param_1 + 0x30);
    local_70 = local_98;
    local_3c = *(int *)(local_48 + 0x30) * 0x20 + -0x20 +
               (int)(*(longlong *)(local_48 + 8) - *(longlong *)(local_48 + 0x10) >> 5);
    local_68 = local_res8;
    local_78 = &PTR_FUN_145b0ab98;
    local_50 = 0;
    local_60 = 0;
    uStack_58 = 0;
    (**(code **)(*plVar5 + 0x50))(plVar5,&local_78,0,0);
    local_78 = &PTR_FUN_145b0ab98;
    FUN_14349ebc0(&local_60);
    if ((*(uint *)(plVar5 + 3) & 0x3ffffff) != 0) {
      *(uint *)(plVar5 + 3) = *(uint *)(plVar5 + 3) - 1;
      FUN_1434a2b80(plVar5);
    }
  }
  else {
    local_48 = *(longlong *)(param_1 + 0x30);
    local_70 = local_98;
    local_3c = *(int *)(local_48 + 0x30) * 0x20 + -0x20 +
               (int)(*(longlong *)(local_48 + 8) - *(longlong *)(local_48 + 0x10) >> 5);
    local_78 = &PTR_FUN_145b0ab98;
    local_68 = local_res8;
    local_50 = 0;
    local_60 = 0;
    uStack_58 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x50))
              (*(longlong **)(param_1 + 0x18),&local_78,*(undefined8 *)(param_1 + 0x20),0);
    local_78 = &PTR_FUN_145b0ab98;
    FUN_14349ebc0(&local_60);
  }
  if (0 < iVar4) {
    lVar10 = *(longlong *)(param_1 + 0x30);
    do {
      if (4 < **(byte **)(lVar10 + 8)) {
        FUN_143411150();
      }
      *(longlong *)(lVar10 + 8) = *(longlong *)(lVar10 + 8) + -0x20;
      if (*(ulonglong *)(lVar10 + 8) < *(ulonglong *)(lVar10 + 0x10)) {
        FUN_1434a25c0(lVar10 + 8);
      }
      uVar8 = (int)pRVar11 - 1;
      pRVar11 = (RefCountNTSImpl *)(ulonglong)uVar8;
    } while (uVar8 != 0);
  }
  FUN_143411240(*(undefined8 *)(param_1 + 8),local_98);
  if (4 < local_98[0]) {
    FUN_143411150(local_98);
  }
  if ((pRVar6 != (RefCountNTSImpl *)0x0) && ((*(uint *)(pRVar6 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(pRVar6 + 0x18) = *(uint *)(pRVar6 + 0x18) - 1;
    FUN_1434a2b80(pRVar6);
  }
  if (pRVar7 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRVar7);
  }
  if ((local_res10 != (longlong *)0x0) && ((*(uint *)(local_res10 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(local_res10 + 3) = *(uint *)(local_res10 + 3) - 1;
    FUN_1434a2b80(local_res10);
  }
  return;
}



// FUNCTION 143425080 FUN_143425080 body=1038 status=ok
// SIG undefined FUN_143425080(void)

void FUN_143425080(longlong param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  RefCountNTSImpl *pRVar6;
  RefCountNTSImpl *pRVar7;
  RefCountNTSImpl *pRVar8;
  longlong lVar9;
  uint uVar10;
  longlong *local_res8;
  longlong *local_res10;
  byte local_98 [32];
  undefined **local_78;
  byte *local_70;
  longlong *local_68;
  longlong local_60;
  longlong *plStack_58;
  byte local_50;
  longlong local_48;
  int local_40;
  int local_3c;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  pRVar8 = (RefCountNTSImpl *)0x0;
  local_res10 = (longlong *)0x0;
  pRVar6 = (RefCountNTSImpl *)0x0;
  local_res8 = (longlong *)0x0;
  FUN_143411150(puVar1);
  *puVar1 = 0;
  pRVar7 = pRVar8;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    uVar10 = *(uint *)(param_1 + 0x3c);
    if (uVar10 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      pRVar7 = (RefCountNTSImpl *)
               ((ulonglong)(uVar10 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar10 >> 5) * 8));
    }
    local_res8 = (longlong *)FUN_1434123a0(pRVar7);
    pRVar7 = pRVar6;
    if (local_res8 != (longlong *)0x0) {
      iVar3 = (**(code **)(*local_res8 + 0x10))(local_res8);
      if (iVar3 - 2U < 4) {
        iVar3 = (**(code **)(*local_res8 + 0x10))(local_res8);
        if ((iVar3 - 2U < 4) &&
           (pRVar7 = (RefCountNTSImpl *)local_res8[3], pRVar7 != (RefCountNTSImpl *)0x0)) {
          *(int *)(pRVar7 + 8) = *(int *)(pRVar7 + 8) + 1;
        }
      }
      else {
        local_res10 = local_res8 + -4;
        if (local_res10 != (longlong *)0x0) {
          *(uint *)(local_res8 + -1) = (int)local_res8[-1] + 1U & 0x8fffffff;
        }
      }
    }
  }
  if (1 < *(int *)(param_1 + 0x38)) {
    uVar10 = *(int *)(param_1 + 0x38) - 1;
    pRVar8 = (RefCountNTSImpl *)(ulonglong)uVar10;
    if (0 < (int)uVar10) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x30);
        uVar5 = *(int *)(param_1 + 0x3c) - uVar10;
        lVar9 = 0;
        if (uVar5 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
          lVar9 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
        }
        *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + 0x20;
        if (*(ulonglong *)(lVar2 + 0x18) <= *(ulonglong *)(lVar2 + 8)) {
          FUN_1434a29d0(lVar2 + 8);
        }
        if (*(longlong *)(lVar2 + 8) != 0) {
          FUN_143410ec0(*(longlong *)(lVar2 + 8),lVar9);
        }
        uVar10 = uVar10 - 1;
      } while (0 < (int)uVar10);
    }
  }
  local_98[0] = 0;
  iVar3 = (int)pRVar8;
  local_40 = iVar3;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x10) + -0x20);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 != (longlong *)0x0) {
      *(uint *)(plVar4 + 3) = (int)plVar4[3] + 1U & 0x8fffffff;
    }
    local_48 = *(longlong *)(param_1 + 0x30);
    local_70 = local_98;
    local_3c = *(int *)(local_48 + 0x30) * 0x20 + -0x20 +
               (int)(*(longlong *)(local_48 + 8) - *(longlong *)(local_48 + 0x10) >> 5);
    local_68 = local_res8;
    local_78 = &PTR_FUN_145b0ab98;
    local_50 = 0;
    local_60 = 0;
    plStack_58 = (longlong *)0x0;
    (**(code **)(*plVar4 + 0x50))(plVar4,&local_78,0,0);
    local_78 = &PTR_FUN_145b0ab98;
    if ((((local_50 & 2) == 0) && (local_60 != 0)) &&
       ((*(uint *)(local_60 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_60 + 0x18) = *(uint *)(local_60 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_60 = 0;
    if ((((local_50 & 1) == 0) && (plStack_58 != (longlong *)0x0)) &&
       ((*(uint *)(plStack_58 + 3) & 0x3ffffff) != 0)) {
      *(uint *)(plStack_58 + 3) = *(uint *)(plStack_58 + 3) - 1;
      FUN_1434a2b80();
    }
    if ((*(uint *)(plVar4 + 3) & 0x3ffffff) == 0) goto LAB_1434253da;
    *(uint *)(plVar4 + 3) = *(uint *)(plVar4 + 3) - 1;
  }
  else {
    local_48 = *(longlong *)(param_1 + 0x30);
    local_70 = local_98;
    local_3c = *(int *)(local_48 + 0x30) * 0x20 + -0x20 +
               (int)(*(longlong *)(local_48 + 8) - *(longlong *)(local_48 + 0x10) >> 5);
    local_78 = &PTR_FUN_145b0ab98;
    local_68 = local_res8;
    local_50 = 0;
    local_60 = 0;
    plStack_58 = (longlong *)0x0;
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x50))
              (*(longlong **)(param_1 + 0x18),&local_78,*(undefined8 *)(param_1 + 0x20),0);
    local_78 = &PTR_FUN_145b0ab98;
    if ((((local_50 & 2) == 0) && (local_60 != 0)) &&
       ((*(uint *)(local_60 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(local_60 + 0x18) = *(uint *)(local_60 + 0x18) - 1;
      FUN_1434a2b80();
    }
    local_60 = 0;
    if ((((local_50 & 1) != 0) || (plStack_58 == (longlong *)0x0)) ||
       ((*(uint *)(plStack_58 + 3) & 0x3ffffff) == 0)) goto LAB_1434253da;
    *(uint *)(plStack_58 + 3) = *(uint *)(plStack_58 + 3) - 1;
    plVar4 = plStack_58;
  }
  FUN_1434a2b80(plVar4);
LAB_1434253da:
  if (0 < iVar3) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    do {
      if (4 < **(byte **)(lVar2 + 8)) {
        FUN_143411150();
      }
      *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + -0x20;
      if (*(ulonglong *)(lVar2 + 8) < *(ulonglong *)(lVar2 + 0x10)) {
        FUN_1434a25c0(lVar2 + 8);
      }
      uVar10 = (int)pRVar8 - 1;
      pRVar8 = (RefCountNTSImpl *)(ulonglong)uVar10;
    } while (uVar10 != 0);
  }
  FUN_143411240(*(undefined8 *)(param_1 + 8),local_98);
  if (4 < local_98[0]) {
    FUN_143411150(local_98);
  }
  if (pRVar7 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(pRVar7);
  }
  if ((local_res10 != (longlong *)0x0) && ((*(uint *)(local_res10 + 3) & 0x3ffffff) != 0)) {
    *(uint *)(local_res10 + 3) = *(uint *)(local_res10 + 3) - 1;
    FUN_1434a2b80(local_res10);
  }
  return;
}



// FUNCTION 1434254a0 FUN_1434254a0 body=74 status=ok
// SIG undefined FUN_1434254a0(void)

void FUN_1434254a0(longlong param_1)

{
  int *piVar1;
  byte *pbVar2;
  longlong lVar3;
  
  pbVar2 = *(byte **)(param_1 + 8);
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18);
  if (4 < *pbVar2) {
    FUN_143411150(pbVar2);
  }
  *pbVar2 = 5;
  lVar3 = *(longlong *)(lVar3 + 0x3d0);
  *(longlong *)(pbVar2 + 8) = lVar3;
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + 1;
  return;
}



// FUNCTION 143425520 FUN_143425520 body=178 status=ok
// SIG undefined FUN_143425520(void)

longlong FUN_143425520(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1[0x3b] == 0) {
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1[4] + 0x20) + 0x10) + 0x48);
    lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x78);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar2 = param_1[4];
      uVar4 = (**(code **)(*param_1 + 0xb8))(param_1);
      lVar3 = FUN_143496e40(lVar3,uVar4,lVar2);
    }
    lVar2 = param_1[0x3b];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
      FUN_1434a2b80();
    }
    param_1[0x3b] = lVar3;
    return lVar3;
  }
  return param_1[0x3b];
}



// FUNCTION 1434255e0 FUN_1434255e0 body=1707 status=ok
// SIG undefined FUN_1434255e0(void)

bool FUN_1434255e0(longlong *param_1,longlong param_2,longlong *param_3,byte *param_4,byte *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  float *pfVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint local_res20 [2];
  byte *local_b0;
  byte *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  float local_78 [4];
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if ((*(uint *)(*(longlong *)param_4 + 0x1c) >> 0x1d & 1) == 0) {
    iVar6 = FUN_14335fa60(param_4);
    if ((iVar6 != 0) && (iVar6 = FUN_14335fad0(param_4,0), iVar6 == 0x5f)) {
      lVar8 = Scaleform::GFx::ASConstString::ToLowerNode(param_4);
      iVar6 = *(int *)(lVar8 + 0x18);
      *(int *)(lVar8 + 0x18) = iVar6 + 1;
      *(int *)(lVar8 + 0x18) = iVar6;
      if ((*(uint *)(lVar8 + 0x1c) >> 0x1c & 1) != 0) {
        if (iVar6 == 0) {
          FUN_14335f920(lVar8);
        }
        goto LAB_143425672;
      }
      if (iVar6 == 0) {
        FUN_14335f920(lVar8);
      }
    }
    goto switchD_1434256bf_caseD_25;
  }
LAB_143425672:
  uVar7 = FUN_14341f910(param_1,param_4);
  cVar5 = (**(code **)(*param_1 + 0x118))(param_1,uVar7,param_5,0);
  if (cVar5 != '\0') {
    return true;
  }
  switch(uVar7) {
  case 0x24:
    lVar8 = (**(code **)(*param_1 + 0xf0))(param_1);
    plVar1 = *(longlong **)(*(longlong *)(lVar8 + 0xe8) + 0x30);
    lVar8 = (**(code **)(*plVar1 + 0x50))(plVar1,0x90,0);
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      uVar10 = (**(code **)(*param_1 + 0xf0))(param_1);
      lVar8 = FUN_143455300(lVar8,uVar10,param_1[4]);
    }
    FUN_143412aa0(param_5,lVar8);
    if ((lVar8 != 0) && ((*(uint *)(lVar8 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar8 + 0x18) = *(uint *)(lVar8 + 0x18) - 1;
      FUN_1434a2b80(lVar8);
    }
    break;
  case 0x6f:
    uVar7 = (**(code **)(*(longlong *)param_1[4] + 0xd0))();
    FUN_1434a4b40(param_5,uVar7);
    break;
  case 0x70:
    uVar7 = (**(code **)(*(longlong *)param_1[4] + 0x100))();
    FUN_1434a4b40(param_5,uVar7);
    break;
  case 0x71:
    uVar7 = (**(code **)(*(longlong *)param_1[4] + 0x120))();
    FUN_1434a4b40(param_5,uVar7);
    break;
  case 0x72:
    uVar7 = (**(code **)(*(longlong *)param_1[4] + 0x130))();
    FUN_1434a4b40(param_5,uVar7);
    break;
  case 0x73:
    pfVar9 = (float *)(**(code **)(*(longlong *)param_1[4] + 0x20))();
    local_68 = pfVar9[4];
    local_64 = pfVar9[5];
    local_60 = pfVar9[6];
    local_5c = pfVar9[7];
    local_58 = pfVar9[8];
    local_54 = pfVar9[9];
    local_50 = pfVar9[10];
    local_4c = pfVar9[0xb];
    local_78[0] = *pfVar9;
    local_78[1] = pfVar9[1];
    local_78[2] = pfVar9[2];
    local_78[3] = pfVar9[3];
    local_48 = 0;
    uStack_40 = 0x3f80000000000000;
    Scaleform::Render::Matrix4x4<float>::Transpose((Matrix4x4<float> *)local_78);
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
    lVar8 = (**(code **)(*plVar1 + 0x50))(plVar1,0x98,0);
    uVar13 = 0;
    uVar11 = uVar13;
    if (lVar8 != 0) {
      uVar10 = (**(code **)(*param_1 + 0xf0))(param_1);
      uVar11 = FUN_14345d8d0(lVar8,uVar10);
    }
    FUN_14345e160(uVar11,0x10);
    pfVar9 = local_78;
    do {
      local_a8 = (byte *)(double)*pfVar9;
      local_b0 = (byte *)CONCAT71(local_b0._1_7_,3);
      FUN_14345e250(uVar11,uVar13,&local_b0);
      if (4 < (byte)local_b0) {
        FUN_143411150(&local_b0);
      }
      uVar12 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
      pfVar9 = pfVar9 + 1;
    } while ((int)uVar12 < 0x10);
    FUN_143412aa0(param_5,uVar11);
    if ((uVar11 != 0) && ((*(uint *)(uVar11 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(uVar11 + 0x18) = *(uint *)(uVar11 + 0x18) - 1;
      FUN_1434a2b80(uVar11);
      return true;
    }
    break;
  case 0x74:
    uVar7 = (**(code **)(*(longlong *)param_1[4] + 0x140))();
    FUN_1434a4b40(param_5,uVar7);
    break;
  case 0x75:
    cVar5 = (**(code **)(param_1[6] + 0x100))(param_1 + 6);
    if (cVar5 != '\0') {
      lVar8 = (**(code **)(*param_1 + 0xf0))(param_1);
      lVar8 = FUN_143360950(*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(lVar8 + 0xe8) + 0x28) + 0x18) + 0x618),
                            "WIN 8,0,0,0",0xb);
      *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
      if (4 < *param_5) {
        FUN_143411150(param_5);
      }
      *param_5 = 5;
      *(longlong *)(param_5 + 8) = lVar8;
      iVar6 = *(int *)(lVar8 + 0x18);
      *(int *)(lVar8 + 0x18) = iVar6;
      if (iVar6 != 0) {
        return true;
      }
      FUN_14335f920(lVar8);
      return true;
    }
  default:
switchD_1434256bf_caseD_25:
    if (((param_2 != 0) &&
        (*(longlong *)param_4 ==
         *(longlong *)
          (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x28) + 0x18) + 0x3a8))) ||
       ((param_3 != (longlong *)0x0 &&
        (*(longlong *)param_4 ==
         *(longlong *)(*(longlong *)(*(longlong *)(*param_3 + 0x28) + 0x18) + 0x3a8))))) {
      FUN_143412aa0(param_5,param_1[3]);
      return true;
    }
    lVar8 = param_1[0x3b];
    if (lVar8 != 0) {
      lVar2 = *(longlong *)(lVar8 + 0x30);
      if (lVar2 != 0) {
        *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
      }
      lVar2 = *(longlong *)(lVar8 + 0x30);
      if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
        FUN_1434a2b80(lVar2);
      }
      *(undefined8 *)(lVar8 + 0x30) = 0;
      local_res20[0] = (uint)lVar8 & 0xffffff00;
      if ((param_2 == 0) ||
         (cVar5 = (**(code **)(*(longlong *)(param_1[0x3b] + 0x20) + 0x20))
                            ((longlong *)(param_1[0x3b] + 0x20),param_2,param_4,param_5),
         cVar5 == '\0')) {
        if (param_3 != (longlong *)0x0) {
          cVar5 = (**(code **)(*(longlong *)(param_1[0x3b] + 0x20) + 0x58))
                            ((longlong *)(param_1[0x3b] + 0x20),param_3,param_4,param_5);
          local_res20[0] = (uint)(cVar5 != '\0');
        }
      }
      else {
        local_res20[0] = CONCAT31(local_res20[0]._1_3_,1);
      }
      lVar8 = param_1[0x3b];
      lVar3 = *(longlong *)(lVar8 + 0x30);
      if (lVar3 != 0) {
        *(uint *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1U & 0x8fffffff;
      }
      lVar3 = *(longlong *)(lVar8 + 0x30);
      if (lVar2 != 0) {
        *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
      }
      lVar4 = *(longlong *)(lVar8 + 0x30);
      if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
        FUN_1434a2b80();
      }
      *(longlong *)(lVar8 + 0x30) = lVar2;
      if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar3 + 0x18) = *(uint *)(lVar3 + 0x18) - 1;
        FUN_1434a2b80(lVar3);
      }
      if ((char)local_res20[0] != '\0') {
        if (lVar2 == 0) {
          return true;
        }
        if ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) == 0) {
          return true;
        }
        *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
        FUN_1434a2b80(lVar2);
        return true;
      }
      if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) - 1;
        FUN_1434a2b80(lVar2);
      }
    }
    lVar8 = FUN_1433d5ce0(param_1[4] + 0xd8,param_4,6 < *(byte *)(param_1 + 0x25));
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0x6a) < '\0')) {
      Scaleform::GFx::AS2::Value::SetAsCharacter(param_5,lVar8);
      return true;
    }
    lVar8 = param_1[3];
    if ((lVar8 == 0) ||
       (((param_2 == 0 ||
         (cVar5 = (**(code **)(*(longlong *)(lVar8 + 0x20) + 0x20))
                            (lVar8 + 0x20,param_2,param_4,param_5), cVar5 == '\0')) &&
        ((param_3 == (longlong *)0x0 ||
         (cVar5 = (**(code **)(*(longlong *)(lVar8 + 0x20) + 0x58))
                            (lVar8 + 0x20,param_3,param_4,param_5), cVar5 == '\0')))))) {
      iVar6 = FUN_14335fa60(param_4);
      if ((iVar6 != 0) && (*(char *)**(undefined8 **)param_4 == '_')) {
        local_a8 = param_5;
        local_90 = 0;
        local_88 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = param_4;
        FUN_1434185a0(param_1 + 7,local_res20,&local_b0);
        if ((char)local_res20[0] != '\0') {
          return (char)local_res20[0] == '\x01';
        }
      }
      return false;
    }
  }
  return true;
}



// FUNCTION 143425d60 FUN_143425d60 body=423 status=ok
// SIG undefined FUN_143425d60(void)

undefined8 * FUN_143425d60(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  plVar4 = (longlong *)0x0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_145b0b0f0;
  param_1[4] = param_2;
  param_1[1] = &PTR_LAB_145b0b230;
  param_1[5] = 0;
  Scaleform::GFx::DisplayObjectBase::BindAvmObj(param_2,param_1);
  *param_1 = &PTR_FUN_145b0b868;
  param_1[1] = &PTR_LAB_145b0b9a8;
  param_1[6] = &PTR_LAB_145b0ba50;
  FUN_1434967a0(param_1 + 7);
  *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(byte *)((longlong)param_1 + 0x1b6) = *(byte *)((longlong)param_1 + 0x1b6) & 0xfd;
  param_1[0x23] = param_2;
  uVar2 = FUN_14336b320(param_2);
  *(undefined1 *)(param_1 + 0x25) = uVar2;
  if (param_2 != 0) {
    plVar4 = (longlong *)
             (**(code **)(*(longlong *)(param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4) + 8))
                       (param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4);
  }
  uVar5 = (**(code **)(*plVar4 + 0xb8))(plVar4);
  param_1[0x24] = uVar5;
  *(byte *)(param_1[4] + 0x138) = *(byte *)(param_1[4] + 0x138) & 0xdf;
  *(ushort *)(param_1[4] + 0x6a) = *(ushort *)(param_1[4] + 0x6a) | 0x800;
  uVar3 = (**(code **)(**(longlong **)(param_1[4] + 0x110) + 0x50))();
  FUN_143333590(param_1 + 0x3c);
  _guard_xfg_dispatch_icall_nop((void *)param_1[0x3c],0,(ulonglong)uVar3);
  lVar6 = FUN_14341b890(*(undefined8 *)(*(longlong *)(param_1[4] + 0x20) + 0x50),param_1 + 7,6);
  if (lVar6 != 0) {
    *(uint *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1U & 0x8fffffff;
  }
  lVar1 = param_1[3];
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  param_1[3] = lVar6;
  return param_1;
}



// FUNCTION 143425f10 FUN_143425f10 body=180 status=ok
// SIG undefined FUN_143425f10(void)

void FUN_143425f10(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_145b0b868;
  param_1[1] = &PTR_LAB_145b0b9a8;
  param_1[6] = &PTR_LAB_145b0ba50;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0x3c]);
  lVar1 = param_1[0x3b];
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar1 + 0x18) = *(uint *)(lVar1 + 0x18) - 1;
    FUN_1434a2b80();
  }
  FUN_143499410(param_1 + 7);
  *param_1 = &PTR_FUN_145b0b0f0;
  param_1[6] = &PTR_FUN_145b0aa60;
  param_1[1] = &PTR_LAB_145b0b230;
  FUN_143497d00(param_1 + 5);
  FUN_143414300(param_1 + 1);
  *param_1 = &PTR_FUN_145b0aa60;
  return;
}



// FUNCTION 143425fd0 FUN_143425fd0 body=388 status=ok
// SIG undefined FUN_143425fd0(void)

void FUN_143425fd0(longlong param_1)

{
  ushort *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uStack_2c;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  undefined4 local_14;
  
  uVar7 = 0;
  uStack_2c = uStack_2c & 0xffffff00;
  local_24 = 1;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = uStack_2c;
  local_14 = 0xff00;
  lVar2 = FUN_143493a50(param_1 + 0x28,&local_24);
  uVar5 = uVar7;
  if (-1 < lVar2) {
    uVar5 = *(longlong *)(param_1 + 0x28) + 0x20 + lVar2 * 0x40;
  }
  uVar6 = 4;
  uVar3 = uVar5 + 0x18;
  if (uVar5 == 0) {
    uVar3 = uVar7;
  }
  if (uVar3 == 0) {
    uVar6 = 5;
  }
  lVar4 = FUN_1434372c0(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) + 0x80,uVar6);
  lVar2 = *(longlong *)(param_1 + 0x20);
  *(undefined4 *)(lVar4 + 8) = 2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  if (*(RefCountNTSImpl **)(lVar4 + 0x10) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar4 + 0x10));
  }
  *(longlong *)(lVar4 + 0x10) = lVar2;
  if (*(RefCountNTSImpl **)(lVar4 + 0x18) != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar4 + 0x18));
  }
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined8 *)(lVar4 + 0x20) = 1;
  *(undefined4 *)(lVar4 + 0x28) = 0;
  *(undefined1 *)(lVar4 + 0x2c) = 0;
  *(undefined4 *)(lVar4 + 0x30) = 0xff00;
  puVar1 = (ushort *)(*(longlong *)(param_1 + 0x20) + 0x6a);
  *puVar1 = *puVar1 | 0x20;
  FUN_143427f10(param_1 + 0x30,0);
  Scaleform::GFx::Sprite::DefaultOnEventLoad(*(undefined8 *)(param_1 + 0x20));
  uVar5 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) + 0x630);
  if (uVar5 != 0) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x20);
      lVar4 = (**(code **)(**(longlong **)
                             (uVar7 * 8 + *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x628)) +
                          0x3c8))();
      if (lVar2 == lVar4) {
        FUN_143384c20(*(undefined8 *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) + 0x628) +
                       uVar7 * 8));
      }
      uVar7 = (ulonglong)((int)uVar7 + 1);
    } while (uVar7 < uVar5);
  }
  return;
}



// FUNCTION 143426160 FUN_143426160 body=22 status=ok
// SIG undefined FUN_143426160(void)

void FUN_143426160(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143426172. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 8) + 0x68))(param_1 + 8,param_1 + 0x120,0);
  return;
}



// FUNCTION 143426180 FUN_143426180 body=437 status=ok
// SIG undefined FUN_143426180(void)

char FUN_143426180(longlong *param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 local_58;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 local_48;
  undefined8 local_38;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 local_28;
  
  uVar5 = 0;
  lVar3 = param_1[4];
  lVar1 = *(longlong *)(lVar3 + 0x20);
  if ((*(longlong *)(lVar3 + 0x128) != 0) && (*(ulonglong *)(lVar1 + 0x630) != 0)) {
    do {
      iVar4 = (int)uVar5;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x628) + uVar5 * 8) == lVar3) {
        if (-1 < iVar4) {
          FUN_1434a2d60(lVar1 + 0x628,(longlong)iVar4);
        }
        break;
      }
      uVar5 = (ulonglong)(iVar4 + 1);
    } while (uVar5 < *(ulonglong *)(lVar1 + 0x630));
  }
  if (param_2 != '\0') {
    local_58 = 4;
    uStack_50 = 0;
    uStack_4c = uStack_4c & 0xffffff00;
    local_48 = 0xff00;
    cVar2 = (**(code **)(*param_1 + 0x38))(param_1,&local_58);
    if (cVar2 == '\0') goto LAB_143426316;
    param_2 = '\0';
  }
  lVar3 = param_1[4];
  if ((((*(byte *)(lVar3 + 0x6a) >> 5 & 1) != 0) && ((*(byte *)(lVar3 + 0x88) >> 3 & 1) == 0)) &&
     (lVar3 = FUN_1434372c0(*(longlong *)(lVar3 + 0x20) + 0x80,4), lVar3 != 0)) {
    local_38 = 1;
    uStack_30 = 0;
    uStack_2c = uStack_2c & 0xffffff00;
    local_28 = 0xff00;
    local_58 = 1;
    uStack_50 = 0;
    uStack_4c = uStack_2c;
    local_48 = 0xff00;
    FUN_1434a40a0(lVar3,param_1[4],&local_58);
  }
  lVar3 = FUN_1434372c0(*(longlong *)(param_1[4] + 0x20) + 0x80,4);
  if (lVar3 != 0) {
    lVar1 = param_1[4];
    *(undefined4 *)(lVar3 + 8) = 2;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    if (*(RefCountNTSImpl **)(lVar3 + 0x10) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar3 + 0x10));
    }
    *(longlong *)(lVar3 + 0x10) = lVar1;
    if (*(RefCountNTSImpl **)(lVar3 + 0x18) != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar3 + 0x18));
    }
    *(undefined8 *)(lVar3 + 0x18) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 4;
    *(undefined4 *)(lVar3 + 0x28) = 0;
    *(undefined1 *)(lVar3 + 0x2c) = 0;
    *(undefined4 *)(lVar3 + 0x30) = 0xff00;
  }
LAB_143426316:
  FUN_14336ead0(param_1[4]);
  return param_2;
}



// FUNCTION 143426340 FUN_143426340 body=252 status=ok
// SIG undefined FUN_143426340(void)

void FUN_143426340(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  RefCountNTSImpl *this;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  
  this = *(RefCountNTSImpl **)(param_1 + -0x10);
  uVar2 = *(ulonglong *)(*(longlong *)(this + 0x20) + 0x630);
  if ((*(longlong *)(this + 0x128) != 0) && (uVar5 = 0, uVar2 != 0)) {
    do {
      if (*(RefCountNTSImpl **)(*(longlong *)(*(longlong *)(this + 0x20) + 0x628) + uVar5 * 8) ==
          this) goto LAB_143426387;
      uVar5 = (ulonglong)((int)uVar5 + 1);
    } while (uVar5 < uVar2);
  }
  uVar5 = 0xffffffff;
LAB_143426387:
  iVar4 = (int)uVar5;
  if (param_2 == 0) {
    if (-1 < iVar4) {
      FUN_1434a2d60(*(longlong *)(this + 0x20) + 0x628,(longlong)iVar4);
      return;
    }
  }
  else if (iVar4 == -1) {
    if (this != (RefCountNTSImpl *)0x0) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    }
    lVar3 = *(longlong *)(*(longlong *)(param_1 + -0x10) + 0x20);
    FUN_1432f2b40(lVar3 + 0x628,lVar3 + 0x628,*(longlong *)(lVar3 + 0x630) + 1);
    puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x628) + (*(longlong *)(lVar3 + 0x630) + -1) * 8);
    if (puVar1 != (undefined8 *)0x0) {
      if (this != (RefCountNTSImpl *)0x0) {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
      *puVar1 = this;
    }
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
      return;
    }
  }
  return;
}



// FUNCTION 143426450 FUN_143426450 body=306 status=ok
// SIG undefined FUN_143426450(void)

void FUN_143426450(longlong *param_1,char param_2)

{
  RefCountNTSImpl *this;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  
  this = (RefCountNTSImpl *)param_1[-2];
  if (this != (RefCountNTSImpl *)0x0) {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  if ((((((byte)this[0xb8] & 0xc) != 0) || ((*(ushort *)(this + 0x6a) & 0x1000) != 0)) ||
      (*(int *)(this + 0x2c) < -1)) || (param_2 == '\0')) goto LAB_14342656b;
  iVar1 = (**(code **)(*(longlong *)this + 0x360))(this);
  iVar2 = (**(code **)(*(longlong *)this + 0x3a0))(this);
  iVar3 = iVar1;
  if (iVar2 == 0) {
    FUN_143384990(this);
    iVar3 = (**(code **)(*(longlong *)this + 0x360))(this);
    if (iVar3 == iVar1) goto LAB_14342652c;
    (**(code **)(*param_1 + 0xe8))(param_1,iVar3);
    local_28 = 2;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0xff00;
    (**(code **)(param_1[-6] + 0x40))(param_1 + -6,&local_28);
    FUN_143384330(this,iVar3);
  }
  else {
LAB_14342652c:
    local_28 = 2;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0xff00;
    (**(code **)(param_1[-6] + 0x40))(param_1 + -6,&local_28);
  }
  if (iVar3 == 0) {
    FUN_1433d5140(param_1[-2] + 0xd8);
  }
LAB_14342656b:
  Scaleform::RefCountNTSImpl::Release(this);
  return;
}



// FUNCTION 143426590 FUN_143426590 body=51 status=ok
// SIG undefined FUN_143426590(void)

void FUN_143426590(longlong param_1)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  
  local_28 = 2;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0xff00;
  (**(code **)(*(longlong *)(param_1 + -0x30) + 0x38))((longlong *)(param_1 + -0x30),&local_28);
  return;
}



// FUNCTION 1434265d0 FUN_1434265d0 body=914 status=ok
// SIG undefined FUN_1434265d0(void)

undefined8 FUN_1434265d0(longlong param_1,undefined4 *param_2,longlong *param_3,longlong *param_4)

{
  byte bVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 local_a7;
  undefined4 local_a4;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  
  plVar2 = *(longlong **)(param_1 + -0x10);
  lVar6 = (**(code **)(*plVar2 + 0x3d0))(plVar2);
  plVar7 = (longlong *)(**(code **)(*plVar2 + 0x3c8))(plVar2);
  bVar3 = false;
  iVar10 = 2;
  lVar14 = *(longlong *)(*(longlong *)(param_1 + -0x10) + 0xe0) + -1;
  local_a4 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_a7 = 0;
  uVar11 = 0;
  uVar12 = 0;
  if (-1 < lVar14) {
    local_a0 = 0;
    lVar13 = lVar14 * 0x10;
    local_98 = 0;
    local_90 = local_88;
    bVar3 = false;
    do {
      plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + -0x10) + 0xd8) + lVar13);
      if (((param_4[1] == 0) ||
          ((*(char *)(lVar14 + *param_4) != '\0' && ((short)plVar8[0xd] == 0)))) &&
         ((*(byte *)((longlong)plVar8 + 0x6a) >> 1 & 1) == 0)) {
        iVar5 = (**(code **)(*plVar8 + 0x208))(plVar8,param_2,param_3);
        if (iVar5 == 1) {
          if ((*(uint *)(plVar2 + 0x17) >> 0xd & 1) != 0) {
            *param_3 = (longlong)plVar2;
          }
          if ((*param_3 != 0) && ((*(uint *)(*param_3 + 0xb8) >> 0xc & 1) != 0)) {
            bVar3 = true;
            *param_3 = (longlong)plVar2;
            goto LAB_143426882;
          }
          if (*(char *)((longlong)param_3 + 0x24) != '\0') {
            iVar5 = 1;
          }
        }
        else if ((iVar5 == 3) && (*param_3 != 0)) {
          local_80 = (undefined4)param_3[1];
          iVar10 = 1;
          local_7c = *(undefined4 *)((longlong)param_3 + 0xc);
          local_98 = param_3[2];
          local_a0 = param_3[3];
          local_a4 = (undefined4)param_3[4];
          local_a7 = *(undefined1 *)((longlong)param_3 + 0x24);
          local_90 = *param_3;
        }
        cVar4 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x60))();
        if (cVar4 == '\0') {
          if (lVar6 != 0) {
            if (*(char *)((longlong)param_3 + 0x24) != '\0') goto LAB_143426807;
            bVar1 = *(byte *)(lVar6 + 0x6d);
            if (bVar1 != 0) {
              plVar8 = (longlong *)
                       (**(code **)(*(longlong *)(lVar6 + (ulonglong)bVar1 * 4) + 8))
                                 (lVar6 + (ulonglong)bVar1 * 4);
              cVar4 = (**(code **)(*plVar8 + 0x60))(plVar8);
              if (cVar4 != '\0') goto LAB_143426807;
            }
          }
          if (iVar5 == 1) {
            if (*(char *)((longlong)param_3 + 0x24) != '\0') {
              return 1;
            }
            if ((longlong *)*param_3 != plVar2) {
              if ((*(longlong **)(*param_3 + 0x38) != (longlong *)0x0) &&
                 (cVar4 = (**(code **)(**(longlong **)(*param_3 + 0x38) + 0x1d8))(), cVar4 != '\0'))
              {
                return 1;
              }
              goto LAB_1434267fd;
            }
          }
        }
        else {
LAB_143426807:
          if ((iVar5 == 1) || (iVar10 == 1)) {
            if (lVar6 != 0) {
              if (*(char *)((longlong)param_3 + 0x24) != '\0') {
LAB_1434268e3:
                *param_3 = lVar6;
                param_3[3] = (longlong)plVar2;
                return 1;
              }
              bVar1 = *(byte *)(lVar6 + 0x6d);
              if (bVar1 != 0) {
                plVar8 = (longlong *)
                         (**(code **)(*(longlong *)(lVar6 + (ulonglong)bVar1 * 4) + 8))
                                   (lVar6 + (ulonglong)bVar1 * 4);
                cVar4 = (**(code **)(*plVar8 + 0x60))(plVar8);
                if (cVar4 != '\0') goto LAB_1434268e3;
              }
            }
            plVar8 = plVar7;
            if (plVar7 == (longlong *)0x0) goto LAB_1434268d9;
            do {
              plVar8 = (longlong *)plVar8[7];
              if (plVar8 == (longlong *)0x0) goto LAB_1434267fd;
            } while (plVar8 != plVar2);
            if (plVar7 == (longlong *)param_3[3]) goto LAB_1434268d9;
            *param_3 = 0;
            iVar10 = 2;
          }
        }
      }
LAB_143426882:
      lVar13 = lVar13 + -0x10;
      lVar14 = lVar14 + -1;
      local_88 = local_90;
      uVar11 = local_a4;
      uVar12 = local_a7;
    } while (-1 < lVar14);
  }
  if ((plVar7 == (longlong *)0x0) ||
     (((plVar8 = (longlong *)*param_3, plVar8 != (longlong *)0x0 && (plVar8 != plVar2)) &&
      (*(char *)((longlong)plVar8 + 0x6a) < '\0')))) {
    if (iVar10 == 1) {
      *param_3 = local_88;
      *(undefined4 *)(param_3 + 1) = local_80;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_7c;
      param_3[2] = local_98;
      param_3[3] = local_a0;
      *(undefined4 *)(param_3 + 4) = uVar11;
      *(undefined1 *)((longlong)param_3 + 0x24) = uVar12;
      return 1;
    }
    uVar11 = *param_2;
    *(undefined4 *)((longlong)param_3 + 0xc) = param_2[1];
    *(undefined4 *)(param_3 + 1) = uVar11;
    if (!bVar3) {
      uVar9 = 3;
      goto LAB_143426933;
    }
  }
  else if (plVar7 != (longlong *)param_3[3]) {
LAB_1434267fd:
    uVar9 = 2;
LAB_143426933:
    *param_3 = 0;
    return uVar9;
  }
LAB_1434268d9:
  *param_3 = (longlong)plVar2;
  return 1;
}



// FUNCTION 143426990 FUN_143426990 body=114 status=ok
// SIG undefined FUN_143426990(void)

undefined1 FUN_143426990(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  RefCountNTSImpl *this;
  undefined1 uVar1;
  
  this = *(RefCountNTSImpl **)(param_1 + 0x20);
  if (this != (RefCountNTSImpl *)0x0) {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  uVar1 = FUN_14341e8b0(param_2,param_3,param_1 + 8,param_1 + 0x38,param_4,
                        *(int *)(param_1 + 0x68) * 0x20 + -0x20 +
                        (int)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x48) >> 5));
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return uVar1;
}



// FUNCTION 143426a10 FUN_143426a10 body=96 status=ok
// SIG undefined FUN_143426a10(void)

undefined1
FUN_143426a10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  RefCountNTSImpl *this;
  undefined1 uVar1;
  
  this = *(RefCountNTSImpl **)(param_1 + 0x20);
  if (this != (RefCountNTSImpl *)0x0) {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  uVar1 = FUN_14341dbd0(param_2,param_3,param_1 + 8,param_1 + 0x38,param_4,param_5);
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return uVar1;
}



// FUNCTION 143426a80 FUN_143426a80 body=547 status=ok
// SIG undefined FUN_143426a80(void)

void FUN_143426a80(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  int *piVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong local_res8;
  undefined4 local_478 [2];
  undefined8 *local_470;
  undefined8 local_468;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined1 local_418 [9];
  char local_40f;
  longlong *local_238 [65];
  longlong local_30;
  ulonglong local_28;
  
  uVar10 = 0;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
  lVar1 = *(longlong *)(lVar6 + 0x10);
  uVar7 = *(ulonglong *)(lVar1 + 0x68);
  uVar9 = uVar10;
  if (uVar7 != 0) {
    piVar4 = *(int **)(lVar1 + 0x60);
    do {
      if (param_2 < *piVar4) break;
      uVar9 = uVar9 + 1;
      piVar4 = piVar4 + 4;
    } while (uVar9 < uVar7);
  }
  uVar2 = *(undefined8 *)(lVar6 + 0x28);
  uVar5 = FUN_14336b350();
  FUN_143364100(uVar2,uVar9,uVar5);
  *(int *)(param_1 + 0x1d0) = param_2;
  local_458 = 0;
  local_450 = 0;
  local_448 = 0;
  local_440 = 0;
  local_438 = 0;
  local_430 = 0;
  local_428 = 0;
  local_420 = 0;
  local_470 = &local_458;
  local_478[0] = 2;
  local_468 = 0x40;
  FUN_1433561d0(local_418,local_478);
  FUN_1433563e0(local_418,"_level{0}");
  cVar3 = FUN_143356fb0(local_418);
  lVar6 = local_30;
  while (local_30 = lVar6, cVar3 != '\0') {
    if (local_28 < 0x60) {
      plVar8 = local_238[0];
      if (local_238[0] == (longlong *)0x0) {
        plVar8 = DAT_146b62f28;
      }
      lVar6 = (**(code **)(*plVar8 + 0x48))(plVar8,0x60,8);
    }
    else {
      local_30 = (lVar6 + 0x5fU & 0xfffffffffffffff8) + 8;
      uVar7 = (local_30 - (longlong)local_238) - 8;
      local_28 = 0x200 - uVar7;
      if (0x1ff < uVar7) {
        local_28 = uVar10;
      }
    }
    uVar7 = uVar10;
    if (lVar6 != 0) {
      uVar7 = FUN_143354cd0(lVar6,local_418,param_2);
    }
    FUN_143357040(local_418,uVar7,1);
    cVar3 = FUN_143356fb0(local_418);
    lVar6 = local_30;
  }
  local_40f = local_40f + '\x01';
  Scaleform::MsgFormat::FinishFormatD(local_418);
  FUN_1433562f0(local_418);
  plVar8 = *(longlong **)(param_1 + 0x20);
  local_res8 = FUN_143360a60(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x28) + 0x18) +
                              0x618),&local_458);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  (**(code **)(*plVar8 + 1000))(plVar8,&local_res8);
  piVar4 = (int *)(local_res8 + 0x18);
  *piVar4 = *piVar4 + -1;
  if (*piVar4 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 143426cb0 FUN_143426cb0 body=91 status=ok
// SIG undefined FUN_143426cb0(void)

undefined8 FUN_143426cb0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1[4] + 0x6a) >> 4 & 1) == 0) {
    uVar1 = (**(code **)(*param_1 + 0xf0))();
    FUN_14340be30(param_2,uVar1,0,*(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x18),0,0,0);
    return 1;
  }
  return 0;
}



// FUNCTION 143426d20 FUN_143426d20 body=230 status=ok
// SIG undefined FUN_143426d20(void)

undefined1 FUN_143426d20(longlong param_1,int *param_2)

{
  ushort *puVar1;
  int *piVar2;
  RefCountNTSImpl *this;
  undefined1 uVar3;
  
  this = *(RefCountNTSImpl **)(param_1 + 0x20);
  if (((byte)this[0x6a] >> 4 & 1) != 0) {
    return 0;
  }
  if (this != (RefCountNTSImpl *)0x0) {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
  }
  if (*param_2 == 1) {
    puVar1 = (ushort *)(*(longlong *)(param_1 + 0x20) + 0x6a);
    *puVar1 = *puVar1 & 0xffdf;
    if (((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x88) >> 3 & 1) == 0) &&
       (*(byte *)(*(longlong *)(param_1 + 0x20) + 0x138) < 0x80)) {
      uVar3 = 0;
      goto LAB_143426de0;
    }
  }
  uVar3 = FUN_143421ee0(param_1);
  if (*param_2 == 4) {
    puVar1 = (ushort *)(*(longlong *)(param_1 + 0x20) + 0x6a);
    *puVar1 = *puVar1 | 0x10;
    Scaleform::GFx::InteractiveObject::SetNextUnloaded
              (*(longlong *)(param_1 + 0x20),
               *(undefined8 *)
                (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) + 0x10) + 0x52e8)
              );
    *(longlong *)
     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) + 0x10) + 0x52e8) =
         *(longlong *)(param_1 + 0x20);
    piVar2 = (int *)(*(longlong *)(param_1 + 0x20) + 8);
    *piVar2 = *piVar2 + 1;
  }
LAB_143426de0:
  if (this != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return uVar3;
}



// FUNCTION 143426e10 FUN_143426e10 body=261 status=ok
// SIG undefined FUN_143426e10(void)

void FUN_143426e10(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong local_18;
  uint local_10;
  
  if ((param_2 != 0xffffffff) &&
     (uVar5 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x380))(), param_2 < uVar5)) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
    uVar1 = *(undefined4 *)(lVar2 + 0x120);
    iVar7 = *(int *)(lVar2 + 0x128) + 1;
    *(int *)(lVar2 + 0x128) = iVar7;
    *(int *)(lVar2 + 0x120) = iVar7;
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x110);
    (**(code **)(*plVar3 + 0x58))(plVar3,&local_18,param_2);
    uVar6 = 0;
    if (local_10 != 0) {
      do {
        plVar3 = *(longlong **)(local_18 + uVar6 * 8);
        cVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
        if (cVar4 != '\0') {
          (**(code **)(*plVar3 + 8))(plVar3,*(undefined8 *)(param_1 + 0x20));
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < local_10);
    }
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) + 0x120) = uVar1;
    FUN_14343c020(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x20),iVar7);
    return;
  }
  FUN_143370e50(*(longlong *)(param_1 + 0x20) + 0x18,"CallFrame(\'%d\') - unknown frame",param_2);
  return;
}



// FUNCTION 143426f20 FUN_143426f20 body=28 status=ok
// SIG undefined FUN_143426f20(void)

void FUN_143426f20(undefined8 param_1,undefined1 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_143425520();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x72) = param_2;
  }
  return;
}



// FUNCTION 143426f60 FUN_143426f60 body=1366 status=ok
// SIG undefined FUN_143426f60(void)

undefined8 FUN_143426f60(longlong *param_1,int param_2,undefined8 param_3,undefined1 param_4)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double local_70;
  byte local_68 [8];
  longlong local_60;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  
  FUN_143410ec0(local_68,param_3);
  if ((((0x15 < param_2) && (lVar5 = (**(code **)(*param_1 + 0xf0))(param_1), lVar5 != 0)) &&
      (param_1[0x3b] != 0)) && (*(longlong *)(param_1[0x3b] + 0x58) != 0)) {
    local_48 = (double)((ulonglong)local_48 & 0xffffffffffffff00);
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while ((&PTR_DAT_1467ce9e0)[(longlong)param_2 * 2][lVar8] != '\0');
    local_88 = (double)FUN_143360950(*(undefined8 *)
                                      (*(longlong *)
                                        (*(longlong *)(*(longlong *)(lVar5 + 0xe8) + 0x28) + 0x18) +
                                      0x618),(&PTR_DAT_1467ce9e0)[(longlong)param_2 * 2],lVar8,0);
    *(int *)((longlong)local_88 + 0x18) = *(int *)((longlong)local_88 + 0x18) + 1;
    cVar3 = FUN_143415e30(param_1[0x3b],lVar5,&local_88,local_68,&local_48);
    piVar1 = (int *)((longlong)local_88 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    if (cVar3 != '\0') {
      FUN_143411240(local_68,&local_48);
    }
    if (4 < local_48._0_1_) {
      FUN_143411150(&local_48);
    }
  }
  cVar3 = FUN_14341fc60(param_1,param_2,local_68,param_4);
  if (cVar3 != '\0') goto switchD_1434270bc_caseD_4;
  switch(param_2) {
  case 4:
  case 5:
  case 0xc:
    break;
  default:
    goto switchD_1434270bc_caseD_6;
  case 0x1c:
    lVar5 = param_1[4];
    uVar6 = (**(code **)(*param_1 + 0xf0))(param_1);
    cVar3 = FUN_143411fd0(local_68,uVar6);
    if (cVar3 == '\0') {
      *(byte *)(lVar5 + 0x138) = *(byte *)(lVar5 + 0x138) & 0xdf;
    }
    else {
      *(byte *)(lVar5 + 0x138) = *(byte *)(lVar5 + 0x138) | 0x20;
    }
    break;
  case 0x22:
    if ((local_68[0] == 0) || (local_68[0] == 10)) {
      *(undefined1 *)(param_1[4] + 0x139) = 0;
    }
    else {
      lVar5 = param_1[4];
      uVar6 = (**(code **)(*param_1 + 0xf0))(param_1);
      cVar3 = FUN_143411fd0(local_68,uVar6);
      *(char *)(lVar5 + 0x139) = (cVar3 == '\0') + '\x01';
    }
    break;
  case 0x23:
    if ((local_68[0] == 0) || (local_68[0] == 10)) {
      *(undefined1 *)(param_1 + 0x3f) = 0;
    }
    else {
      uVar6 = (**(code **)(*param_1 + 0xf0))(param_1);
      cVar3 = FUN_143411fd0(local_68,uVar6);
      *(char *)(param_1 + 0x3f) = (cVar3 == '\0') + '\x01';
      if (cVar3 == '\0') {
        puVar2 = (uint *)(param_1[4] + 0xb8);
        *puVar2 = *puVar2 | 0x8000;
      }
      else {
        puVar2 = (uint *)(param_1[4] + 0xb8);
        *puVar2 = *puVar2 & 0xffff7fff;
      }
    }
    break;
  case 0x25:
    lVar5 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (*(byte *)(lVar5 + 0xf0) < 8) goto switchD_1434270bc_caseD_6;
    uVar6 = (**(code **)(*param_1 + 0xf0))(param_1);
    lVar5 = FUN_143412120(local_68,uVar6);
    if ((lVar5 == 0) ||
       (iVar4 = (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x10))(lVar5 + 0x20), iVar4 != 0x11)) {
      plVar7 = (longlong *)param_1[4];
      local_88 = 0.0;
      uStack_80 = 0.0;
    }
    else {
      local_48 = 0.0;
      dStack_40 = 0.0;
      local_38 = 0.0;
      dStack_30 = 0.0;
      FUN_143451500(lVar5,uVar6,&local_48);
      plVar7 = (longlong *)param_1[4];
      local_88 = (double)CONCAT44((float)dStack_40 * 20.0,(float)local_48 * 20.0);
      uStack_80 = (double)CONCAT44((float)(dStack_30 - dStack_40) * 20.0 + (float)dStack_40 * 20.0,
                                   (float)(local_38 - local_48) * 20.0 + (float)local_48 * 20.0);
    }
    (**(code **)(*plVar7 + 0x98))(plVar7,&local_88);
    break;
  case 0x26:
    lVar5 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (((local_68[0] == 7) && (lVar5 != 0)) &&
       ((local_60 != 0 &&
        (lVar5 = Scaleform::GFx::CharacterHandle::ResolveCharacter
                           (local_60,*(undefined8 *)
                                      (*(longlong *)(*(longlong *)(lVar5 + 0xe0) + 0x20) + 0x10)),
        lVar5 != 0)))) {
      lVar8 = 0;
      if (*(char *)(lVar5 + 0x6a) < '\0') {
        lVar8 = lVar5;
      }
      if ((lVar8 != 0) && ((*(ushort *)(lVar8 + 0x6a) >> 10 & 1) != 0)) {
        FUN_143384c20(param_1[4]);
        break;
      }
    }
    FUN_143384c20(param_1[4],0);
    uVar6 = 0;
    goto LAB_143427376;
  case 0x27:
    lVar5 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (7 < *(byte *)(lVar5 + 0xf0)) {
      uVar6 = (**(code **)(*param_1 + 0xf0))(param_1);
      lVar5 = FUN_143412120(local_68,uVar6);
      if (lVar5 == 0) {
        FUN_14336cf20(param_1[4],0);
      }
      else {
        iVar4 = (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x10))(lVar5 + 0x20);
        if (iVar4 == 0x11) {
          local_48 = 0.0;
          dStack_40 = 0.0;
          local_38 = 0.0;
          dStack_30 = 0.0;
          FUN_143451500(lVar5,uVar6,&local_48);
          local_88 = local_48 * 20.0;
          uStack_80 = dStack_40 * 20.0;
          local_70 = (dStack_30 - dStack_40) * 20.0 + uStack_80;
          local_78 = (local_38 - local_48) * 20.0 + local_88;
          FUN_14336cf20(param_1[4],&local_88);
          uVar6 = 0;
          goto LAB_143427376;
        }
      }
    }
    goto switchD_1434270bc_caseD_6;
  case 0x47:
    lVar5 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (*(char *)(*(longlong *)(lVar5 + 0xe8) + 0x68) != '\x01') goto switchD_1434270bc_caseD_6;
    lVar5 = param_1[4];
    uVar6 = (**(code **)(*param_1 + 0xf0))(param_1);
    cVar3 = FUN_143411fd0(local_68,uVar6);
    if (cVar3 == '\0') {
      puVar2 = (uint *)(lVar5 + 0xb8);
      *puVar2 = *puVar2 & 0xfffff7ff;
    }
    else {
      puVar2 = (uint *)(lVar5 + 0xb8);
      *puVar2 = *puVar2 | 0x800;
    }
  }
switchD_1434270bc_caseD_4:
  uVar6 = 1;
LAB_143427376:
  if (4 < local_68[0]) {
    FUN_143411150(local_68);
  }
  return uVar6;
switchD_1434270bc_caseD_6:
  uVar6 = 0;
  goto LAB_143427376;
}



// FUNCTION 143427530 FUN_143427530 body=976 status=ok
// SIG undefined FUN_143427530(void)

undefined8 FUN_143427530(longlong *param_1,int param_2,undefined1 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  byte bVar12;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  
  cVar7 = FUN_143420480();
  if (cVar7 != '\0') {
    return 1;
  }
  switch(param_2 + -4) {
  case 0:
    iVar8 = (**(code **)(*(longlong *)param_1[4] + 0x360))();
    FUN_1434a47f0(param_3,iVar8 + 1);
    return 1;
  case 1:
    uVar9 = (**(code **)(**(longlong **)(param_1[4] + 0x110) + 0x50))();
    FUN_1434a47f0(param_3,uVar9);
    return 1;
  default:
    return 0;
  case 8:
    uVar9 = (**(code **)(*(longlong *)param_1[4] + 0x380))();
    FUN_1434a47f0(param_3,uVar9);
    return 1;
  case 0x18:
    bVar12 = *(byte *)(param_1[4] + 0x138) >> 5;
    goto LAB_1434275ea;
  case 0x1e:
    cVar7 = *(char *)(param_1[4] + 0x139);
    if (cVar7 != '\0') {
      FUN_143411150(param_3);
      *param_3 = 2;
      param_3[8] = cVar7 == '\x01';
      return 1;
    }
    break;
  case 0x1f:
    lVar11 = param_1[0x3f];
    if ((char)lVar11 != '\0') {
      FUN_143411150(param_3);
      *param_3 = 2;
      param_3[8] = (char)lVar11 == '\x01';
      return 1;
    }
    break;
  case 0x21:
    lVar11 = (**(code **)(*param_1 + 0xe8))(param_1);
    if (*(byte *)(lVar11 + 0xf0) < 8) {
      return 0;
    }
    cVar7 = FUN_1434a1020(param_1[4]);
    if (cVar7 != '\0') {
      FUN_143367db0(param_1[4],&local_78);
      lVar11 = (**(code **)(*param_1 + 0xe8))(param_1);
      plVar6 = *(longlong **)(*(longlong *)(lVar11 + 0xe8) + 0x30);
      lVar10 = (**(code **)(*plVar6 + 0x50))(plVar6,0x68);
      if (lVar10 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = FUN_143451210(lVar10,lVar11);
      }
      local_68 = (double)(local_78 * 0.05);
      local_60 = (double)(local_74 * 0.05);
      local_58 = (double)(local_70 * 0.05);
      local_50 = (double)(local_6c * 0.05);
      FUN_143451780(lVar10,lVar11,&local_68);
      FUN_143412aa0(param_3,lVar10);
      if (lVar10 != 0) {
        if ((*(uint *)(lVar10 + 0x18) & 0x3ffffff) != 0) {
          *(uint *)(lVar10 + 0x18) = *(uint *)(lVar10 + 0x18) - 1;
          FUN_1434a2b80(lVar10);
          return 1;
        }
        return 1;
      }
      return 1;
    }
    break;
  case 0x22:
    if (*(longlong *)(param_1[4] + 0x128) != 0) {
      Scaleform::GFx::AS2::Value::SetAsCharacterHandle();
      return 1;
    }
    FUN_143411150(param_3);
    *param_3 = 0;
    return 0;
  case 0x23:
    lVar11 = (**(code **)(*param_1 + 0xe8))(param_1);
    if (*(byte *)(lVar11 + 0xf0) < 8) {
      return 0;
    }
    if (*(longlong *)(param_1[4] + 0x80) != 0) {
      pdVar5 = *(double **)(param_1[4] + 0x80);
      dVar1 = *pdVar5;
      dVar2 = pdVar5[1];
      dVar3 = pdVar5[2];
      dVar4 = pdVar5[3];
      lVar11 = (**(code **)(*param_1 + 0xe8))(param_1);
      plVar6 = *(longlong **)(*(longlong *)(lVar11 + 0xe8) + 0x30);
      lVar10 = (**(code **)(*plVar6 + 0x50))(plVar6,0x68);
      if (lVar10 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = FUN_143451210(lVar10,lVar11);
      }
      local_68 = dVar1 * 0.05;
      local_60 = dVar2 * 0.05;
      local_58 = dVar3 * 0.05;
      local_50 = dVar4 * 0.05;
      FUN_143451780(lVar10,lVar11,&local_68);
      FUN_143412aa0(param_3,lVar10);
      if (lVar10 != 0) {
        if ((*(uint *)(lVar10 + 0x18) & 0x3ffffff) != 0) {
          *(uint *)(lVar10 + 0x18) = *(uint *)(lVar10 + 0x18) - 1;
          FUN_1434a2b80(lVar10);
          return 1;
        }
        return 1;
      }
      return 1;
    }
    break;
  case 0x43:
    lVar11 = (**(code **)(*param_1 + 0xe8))(param_1);
    if (*(char *)(*(longlong *)(lVar11 + 0xe8) + 0x68) != '\x01') {
      return 0;
    }
    bVar12 = (byte)(*(uint *)(param_1[4] + 0xb8) >> 0xb);
LAB_1434275ea:
    FUN_143411150(param_3);
    *param_3 = 2;
    param_3[8] = bVar12 & 1;
    return 1;
  }
  FUN_143411150(param_3);
  *param_3 = 0;
  return 1;
}



// FUNCTION 143427980 UpdateStateFrom body=19 status=ok
// SIG undefined UpdateStateFrom(void)

bool FRootMotionSource_ConstantForce::UpdateStateFrom(void)

{
  char cVar1;
  
  cVar1 = FUN_143421590();
  return cVar1 != '\0';
}



// FUNCTION 1434279a0 FUN_1434279a0 body=142 status=ok
// SIG undefined FUN_1434279a0(void)

void FUN_1434279a0(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if ((param_4 & 2) != 0) {
    FUN_1433d5f30(*(longlong *)(param_1 + 0x18) + 0xd8);
  }
  FUN_1434214e0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143427a40 FUN_143427a40 body=270 status=ok
// SIG undefined FUN_143427a40(void)

undefined8
FUN_143427a40(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  if ((*(uint *)(*param_3 + 0x1c) >> 0x1d & 1) == 0) {
    iVar2 = FUN_14335fa60(param_3);
    if ((iVar2 == 0) || (iVar2 = FUN_14335fad0(param_3,0), iVar2 != 0x5f)) goto LAB_143427afb;
    lVar4 = Scaleform::GFx::ASConstString::ToLowerNode(param_3);
    iVar2 = *(int *)(lVar4 + 0x18);
    *(int *)(lVar4 + 0x18) = iVar2 + 1;
    *(int *)(lVar4 + 0x18) = iVar2;
    if ((*(uint *)(lVar4 + 0x1c) >> 0x1c & 1) == 0) {
      if (iVar2 == 0) {
        FUN_14335f920(lVar4);
      }
      goto LAB_143427afb;
    }
    if (iVar2 == 0) {
      FUN_14335f920(lVar4);
    }
  }
  uVar3 = FUN_14341f910(param_1 + -8,param_3);
  cVar1 = (**(code **)(*(longlong *)(param_1 + -8) + 0x110))(param_1 + -8,uVar3,param_4,0);
  if (cVar1 != '\0') {
    return 1;
  }
LAB_143427afb:
  if ((*(longlong *)(param_1 + 0x1d0) == 0) && (lVar4 = FUN_143425520(param_1 + -8), lVar4 == 0)) {
    return 0;
  }
  plVar6 = (longlong *)(*(longlong *)(param_1 + 0x1d0) + 0x20);
  uVar5 = (**(code **)(*plVar6 + 0x50))(plVar6,param_2,param_3,param_4,param_5);
  return uVar5;
}



// FUNCTION 143427b60 FUN_143427b60 body=420 status=ok
// SIG undefined FUN_143427b60(void)

longlong FUN_143427b60(longlong *param_1,undefined8 *param_2,char param_3)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char *local_res8;
  
  puVar5 = (undefined8 *)*param_2;
  bVar1 = *(byte *)(param_1 + 0x25);
  if (*(int *)((longlong)puVar5 + 0x1c) < 0) {
    if (bVar1 < 7) {
      if (puVar5[2] == 0) {
        FUN_14335f970(puVar5);
      }
      puVar5 = (undefined8 *)*param_2;
      lVar4 = *(longlong *)(*(longlong *)(param_1[0x24] + 0x28) + 0x18);
      if ((*(undefined8 **)(lVar4 + 0x2c0) == puVar5) ||
         (lVar2 = puVar5[2], *(longlong *)(*(longlong *)(lVar4 + 800) + 0x10) == lVar2))
      goto LAB_143427c03;
      if ((*(undefined8 **)(lVar4 + 0x2c8) == puVar5) ||
         (*(longlong *)(*(longlong *)(lVar4 + 0x340) + 0x10) == lVar2)) goto LAB_143427bf6;
      if (*(longlong *)(*(longlong *)(lVar4 + 0x338) + 0x10) == lVar2) {
        lVar4 = (**(code **)(*param_1 + 0xf8))(param_1,0);
        return lVar4;
      }
    }
    else {
      lVar4 = *(longlong *)(*(longlong *)(param_1[0x24] + 0x28) + 0x18);
      if ((*(undefined8 **)(lVar4 + 0x2c0) == puVar5) || (*(undefined8 **)(lVar4 + 800) == puVar5))
      {
LAB_143427c03:
        return param_1[4];
      }
      if ((*(undefined8 **)(lVar4 + 0x2c8) == puVar5) || (*(undefined8 **)(lVar4 + 0x340) == puVar5)
         ) {
LAB_143427bf6:
        return *(longlong *)(param_1[4] + 0x38);
      }
      if (*(undefined8 **)(lVar4 + 0x338) == puVar5) {
        lVar4 = (**(code **)(*param_1 + 0xf8))(param_1,0);
        return lVar4;
      }
    }
  }
  if ((*(char *)*puVar5 == '_') && (param_3 != '\0')) {
    local_res8 = (char *)0x0;
    iVar3 = FUN_143437bb0((char *)*puVar5,&local_res8,6 < bVar1);
    if ((iVar3 != -1) && (*local_res8 == '\0')) {
      lVar4 = FUN_143437b70(*(undefined8 *)(param_1[4] + 0x20),iVar3);
      return lVar4;
    }
  }
  lVar4 = FUN_1433d5ce0(param_1[4] + 0xd8,param_2,6 < *(byte *)(param_1 + 0x25));
  if ((lVar4 == 0) || (-1 < *(char *)(lVar4 + 0x6a))) {
    lVar4 = 0;
  }
  return lVar4;
}



// FUNCTION 143427d10 FUN_143427d10 body=67 status=ok
// SIG undefined FUN_143427d10(void)

void FUN_143427d10(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1434372c0(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) + 0x80,param_3);
  if (lVar1 != 0) {
    FUN_1434a4030(lVar1,*(undefined8 *)(param_1 + 0x20),param_2);
  }
  return;
}



// FUNCTION 143427d60 FUN_143427d60 body=177 status=ok
// SIG undefined FUN_143427d60(void)

ulonglong FUN_143427d60(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x100))(param_1 + 0x30);
  if (((char)uVar2 != '\0') ||
     (uVar2 = *(ulonglong *)(param_1 + 0x20), (*(uint *)(uVar2 + 0xb8) >> 4 & 1) == 0)) {
    return uVar2 & 0xffffffffffffff00;
  }
  lVar3 = *(longlong *)(param_1 + 0x1d8);
  if ((lVar3 != 0) || (lVar3 = *(longlong *)(param_1 + 0x18), lVar3 != 0)) {
    if ((*(short *)(lVar3 + 0x70) != 0) || (*(char *)(lVar3 + 0x72) != '\0')) {
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
    for (lVar1 = *(longlong *)(lVar3 + 0x30); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      uVar2 = (**(code **)(*(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x20) + 0x10))();
      if ((int)uVar2 == 0xb) {
        uVar2 = FUN_143430010(lVar1);
        return uVar2;
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 143427e50 FUN_143427e50 body=178 status=ok
// SIG undefined FUN_143427e50(void)

undefined8 FUN_143427e50(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte local_28 [32];
  
  cVar1 = (**(code **)(*param_1 + 0x60))();
  if (cVar1 != '\0') {
    lVar2 = (**(code **)(*param_1 + 0xe8))(param_1);
    local_28[0] = 0;
    cVar1 = (**(code **)(param_1[1] + 0x58))
                      (param_1 + 1,(longlong *)(lVar2 + 0xe8),
                       *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0xe8) + 0x28) + 0x18) +
                       0x538,local_28);
    if ((cVar1 == '\0') ||
       (((local_28[0] != 0 && (local_28[0] != 10)) &&
        (cVar1 = FUN_143411fd0(local_28,lVar2), cVar1 != '\0')))) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    if (4 < local_28[0]) {
      FUN_143411150(local_28);
    }
    return uVar3;
  }
  return 0;
}



// FUNCTION 143427f10 FUN_143427f10 body=188 status=ok
// SIG undefined FUN_143427f10(void)

void FUN_143427f10(longlong param_1,uint param_2)

{
  RefCountNTSImpl *this;
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong local_18;
  uint local_10;
  
  if (*(char *)((ulonglong)param_2 + *(longlong *)(param_1 + 0x1b0)) == '\0') {
    this = *(RefCountNTSImpl **)(param_1 + -0x10);
    if (this != (RefCountNTSImpl *)0x0) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    }
    uVar4 = 0;
    local_18 = 0;
    local_10 = 0;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + -0x10) + 0x110);
    cVar2 = (**(code **)(*plVar1 + 0x60))(plVar1,&local_18,param_2);
    if ((cVar2 != '\0') && (local_10 != 0)) {
      do {
        plVar1 = *(longlong **)(local_18 + uVar4 * 8);
        (**(code **)(*plVar1 + 8))(plVar1,*(undefined8 *)(param_1 + -0x10));
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while (uVar3 < local_10);
      *(undefined1 *)((ulonglong)param_2 + *(longlong *)(param_1 + 0x1b0)) = 1;
    }
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  return;
}



// FUNCTION 143427fe0 ExecuteFrame0Events body=127 status=ok
// SIG undefined ExecuteFrame0Events(void)

void Scaleform::GFx::AS2::AvmSprite::ExecuteFrame0Events(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = FUN_1434372c0(*(longlong *)(*(longlong *)(param_1 + -0x10) + 0x20) + 0x80,5);
  lVar1 = *(longlong *)(param_1 + -0x10);
  *(undefined4 *)(lVar2 + 8) = 2;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  if (*(RefCountNTSImpl **)(lVar2 + 0x10) != (RefCountNTSImpl *)0x0) {
    RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar2 + 0x10));
  }
  *(longlong *)(lVar2 + 0x10) = lVar1;
  if (*(RefCountNTSImpl **)(lVar2 + 0x18) != (RefCountNTSImpl *)0x0) {
    RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar2 + 0x18));
  }
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 1;
  *(undefined4 *)(lVar2 + 0x28) = 0;
  *(undefined1 *)(lVar2 + 0x2c) = 0;
  *(undefined4 *)(lVar2 + 0x30) = 0xff00;
  return;
}



// FUNCTION 143428070 FUN_143428070 body=131 status=ok
// SIG undefined FUN_143428070(void)

void FUN_143428070(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*(longlong *)(param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4) + 8))
                      (param_2 + (ulonglong)*(byte *)(param_2 + 0x6d) * 4);
  }
  FUN_14349d5d0(param_1 + 0x28,param_1 + 0x28,lVar4 + 0x28);
  if (((*(ushort *)(param_2 + 0x6a) >> 10 & 1) != 0) &&
     (bVar1 = *(byte *)(param_2 + 0x6d), bVar1 != 0)) {
    plVar3 = (longlong *)
             (**(code **)(*(longlong *)(param_2 + (ulonglong)bVar1 * 4) + 8))
                       (param_2 + (ulonglong)bVar1 * 4);
    cVar2 = (**(code **)(*plVar3 + 0x60))(plVar3);
    if (cVar2 != '\0') {
      lVar4 = FUN_143425520(param_1);
      if (lVar4 != 0) {
        *(undefined1 *)(lVar4 + 0x72) = 1;
      }
    }
  }
  return;
}



// FUNCTION 143428100 FUN_143428100 body=268 status=ok
// SIG undefined FUN_143428100(void)

undefined8 FUN_143428100(longlong param_1,uint *param_2)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong local_res18 [2];
  byte local_28 [32];
  
  cVar2 = FUN_14341f370();
  if (cVar2 != '\0') {
    return 1;
  }
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
  uVar4 = *param_2;
  if (uVar4 < 0x800001) {
    bVar3 = Scaleform::Alg::BitCount32(uVar4);
    uVar4 = (uint)bVar3;
  }
  else {
    uVar4 = uVar4 - 0xffffe7;
  }
  if (uVar4 - 1 < 0x22) {
    iVar5 = *(int *)(&DAT_145b13550 + (ulonglong)uVar4 * 4);
  }
  else {
    iVar5 = 0x2e;
  }
  local_res18[0] = *(longlong *)(lVar6 + 0x138 + (longlong)iVar5 * 8);
  *(int *)(local_res18[0] + 0x18) = *(int *)(local_res18[0] + 0x18) + 1;
  if (*(int *)(local_res18[0] + 0x20) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x1d8);
    local_28[0] = 0;
    if ((lVar6 != 0) || (lVar6 = *(longlong *)(param_1 + 0x18), lVar6 != 0)) {
      cVar2 = (**(code **)(*(longlong *)(lVar6 + 0x20) + 0x58))
                        (lVar6 + 0x20,param_1 + 0x120,local_res18,local_28);
      if (cVar2 != '\0') {
        if (4 < local_28[0]) {
          FUN_143411150(local_28);
        }
        uVar7 = 1;
        goto LAB_1434281ee;
      }
      if (4 < local_28[0]) {
        FUN_143411150(local_28);
      }
    }
  }
  uVar7 = 0;
LAB_1434281ee:
  piVar1 = (int *)(local_res18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return uVar7;
}



// FUNCTION 143428220 FUN_143428220 body=635 status=ok
// SIG undefined FUN_143428220(void)

undefined8 FUN_143428220(longlong *param_1,uint *param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  ulonglong local_res8;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint local_18;
  
  lVar6 = param_1[4];
  if ((((*(byte *)(lVar6 + 0x6a) >> 4 & 1) != 0) || ((*(ushort *)(lVar6 + 0x6a) & 0x1000) != 0)) ||
     (*(int *)(lVar6 + 0x2c) < -1)) {
    return 0;
  }
  if ((*(byte *)(lVar6 + 0x138) & 0x40) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar6 + 0x110);
  }
  if ((lVar5 != 0) && (bVar4 = *(byte *)(lVar5 + 0x58), (bVar4 & 7) != 0)) {
    uVar7 = *param_2;
    if (uVar7 < 0x2001) {
      if (uVar7 == 0x2000) {
LAB_14342831d:
        if ((bVar4 & 4) != 0) {
          pcVar9 = "_over";
          goto LAB_1434282b2;
        }
      }
      else if (uVar7 == 0x400) {
        if ((bVar4 & 2) != 0) {
          pcVar9 = "_down";
          goto LAB_1434282b2;
        }
      }
      else {
        if (uVar7 == 0x800) goto LAB_14342831d;
        if (uVar7 == 0x1000) goto LAB_1434282a6;
      }
    }
    else if (uVar7 == 0x4000) {
LAB_1434282a6:
      if ((bVar4 & 1) != 0) {
        pcVar9 = "_up";
LAB_1434282b2:
        FUN_143384900(lVar6,pcVar9,0);
      }
    }
    else if (uVar7 == 0x10000) goto LAB_14342831d;
  }
  cVar3 = FUN_14341f370(param_1,param_2);
  if (cVar3 != '\0') goto LAB_14342840e;
  lVar6 = (**(code **)(*param_1 + 0xf0))(param_1);
  lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0xe8) + 0x28) + 0x18);
  if (*param_2 < 0x800001) {
    bVar4 = Scaleform::Alg::BitCount32();
    uVar7 = (uint)bVar4;
  }
  else {
    uVar7 = *param_2 - 0xffffe7;
  }
  if (uVar7 - 1 < 0x22) {
    iVar8 = *(int *)(&DAT_145b13550 + (ulonglong)uVar7 * 4);
  }
  else {
    iVar8 = 0x2e;
  }
  local_res8 = *(ulonglong *)(lVar6 + 0x138 + (longlong)iVar8 * 8);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  if (*(int *)(local_res8 + 0x20) == 0) goto LAB_14342846c;
  lVar6 = param_1[0x3b];
  local_28 = local_28 & 0xffffff00;
  if ((lVar6 != 0) || (lVar6 = param_1[3], bVar2 = false, lVar6 != 0)) {
    cVar3 = (**(code **)(*(longlong *)(lVar6 + 0x20) + 0x58))
                      (lVar6 + 0x20,param_1 + 0x24,&local_res8,&local_28);
    bVar2 = false;
    if (cVar3 != '\0') {
      bVar2 = true;
    }
  }
  if ((*param_2 - 0x40 & 0xffffffbf) == 0) {
    if (5 < *(byte *)(param_1 + 0x25)) {
      cVar3 = FUN_143385110(*(undefined8 *)(*(longlong *)(param_1[4] + 0x20) + 0x10),param_1[4],
                            (int)*(char *)((longlong)param_2 + 0x11));
      if (cVar3 != '\0') goto LAB_1434283e8;
    }
  }
  else {
LAB_1434283e8:
    if (bVar2) {
      if (4 < (byte)local_28) {
        FUN_143411150(&local_28);
      }
      piVar1 = (int *)(local_res8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
LAB_14342840e:
      lVar6 = FUN_1434372c0(*(longlong *)(param_1[4] + 0x20) + 0x80,4);
      if (lVar6 != 0) {
        local_18 = param_2[4];
        local_28 = *param_2;
        uStack_24 = param_2[1];
        uStack_20 = param_2[2];
        uStack_1c = param_2[3];
        FUN_1434a40a0(lVar6,param_1[4],&local_28);
      }
      return 1;
    }
  }
  if (4 < (byte)local_28) {
    FUN_143411150(&local_28);
  }
LAB_14342846c:
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return 0;
}



// FUNCTION 1434284b0 FUN_1434284b0 body=1373 status=ok
// SIG undefined FUN_1434284b0(void)

RefCountNTSImpl *
FUN_1434284b0(longlong param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
             undefined8 param_5,int param_6,uint param_7,longlong *param_8,longlong param_9)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  undefined8 uVar9;
  RefCountNTSImpl *this;
  float *pfVar10;
  uint uVar11;
  RefCountNTSImpl *pRVar12;
  RefCountNTSImpl *pRVar13;
  uint uVar14;
  undefined4 uVar15;
  bool bVar16;
  ulonglong local_res8;
  undefined4 *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  longlong local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  longlong local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  longlong local_c0;
  longlong lStack_b8;
  longlong local_b0;
  undefined1 local_a8 [64];
  RefCountImpl *local_68;
  ushort local_46;
  undefined1 local_44;
  
  uVar14 = param_7;
  uVar2 = local_res8 >> 0x20;
  local_res8 = local_res8 & 0xffffffff00000000;
  uVar11 = param_7 >> 2;
  param_7._0_1_ = (byte)param_7 & 1;
  if (param_8 == (longlong *)0x0) {
    local_res8 = CONCAT44((int)uVar2,*(undefined4 *)(param_2 + 0x50));
    plVar7 = (longlong *)
             FUN_143310f20(*(undefined8 *)(*(longlong *)(param_1 + -0x10) + 0xb0),&local_e8,
                           &local_res8);
  }
  else {
    plVar7 = &local_e8;
    local_e8 = *param_8;
    uStack_e0 = (int)param_8[1];
    uStack_dc = *(uint *)((longlong)param_8 + 0xc);
    local_d8 = param_8[2];
  }
  local_c0 = *plVar7;
  lStack_b8 = plVar7[1];
  local_b0 = plVar7[2];
  if (*plVar7 == 0) {
    FUN_143370e50(*(longlong *)(param_1 + -0x10) + 0x18,
                  "Sprite::AddDisplayObject() - unknown cid = %d",*(undefined2 *)(param_2 + 0x50));
    return (RefCountNTSImpl *)0x0;
  }
  param_8._0_1_ = '\0';
  plVar7 = (longlong *)
           Scaleform::GFx::DisplayList::GetDisplayObjectAtDepth
                     (*(longlong *)(param_1 + -0x10) + 0xd8,*(undefined4 *)(param_2 + 0x4c),&param_8
                     );
  if (param_6 == -1) {
    param_6 = (**(code **)(**(longlong **)(param_1 + -0x10) + 0x360))();
  }
  if ((uVar11 & 1) == 0) {
    param_7._0_1_ = 1;
  }
  else {
    if (((plVar7 != (longlong *)0x0) &&
        (cVar4 = (**(code **)(*plVar7 + 0x198))(plVar7), cVar4 == '\0')) &&
       (cVar4 = (**(code **)(*plVar7 + 0x1a0))(plVar7), cVar4 != '\0')) {
      (**(code **)(*plVar7 + 0x1a8))(plVar7,1);
    }
    if ((char)param_8 == '\0') {
      if (plVar7 == (longlong *)0x0) goto LAB_1434287ac;
      cVar4 = (**(code **)(*plVar7 + 0x198))(plVar7);
      if (cVar4 == '\0') {
        return (RefCountNTSImpl *)0x0;
      }
    }
    if (((plVar7 != (longlong *)0x0) && (-2 < *(int *)((longlong)plVar7 + 0x2c))) &&
       ((int)plVar7[5] == *(int *)(param_2 + 0x50))) {
      bVar16 = -1 < *(char *)((longlong)plVar7 + 0x6a);
      if (bVar16) {
        puVar8 = &local_res8;
        local_res8 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + -0x10) + 0x20) + 0x138);
        piVar1 = (int *)(local_res8 + 0x18);
        *piVar1 = *piVar1 + 1;
      }
      else {
        puVar8 = (ulonglong *)Scaleform::GFx::DisplayObject::GetOriginalName(plVar7,&local_c8);
      }
      uVar2 = *puVar8;
      *(int *)(uVar2 + 0x18) = *(int *)(uVar2 + 0x18) + 1;
      if (bVar16) {
        piVar1 = (int *)(local_res8 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      if (!bVar16) {
        piVar1 = (int *)(CONCAT44(uStack_c4,local_c8) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      if (*(char *)((longlong)plVar7 + 0x6a) < '\0') {
        if (*(int *)(*param_3 + 0x20) == 0) {
          if ((*(int *)(uVar2 + 0x20) == 0) || ((*(byte *)(plVar7 + 0x11) >> 1 & 1) != 0))
          goto LAB_1434286fa;
        }
        else if (uVar2 == *param_3) goto LAB_1434286fa;
      }
      else {
LAB_1434286fa:
        if ((int)plVar7[6] == param_6) {
          FUN_143496560(local_a8,param_2);
          if ((-1 < *(char *)(param_2 + 0x62)) &&
             (iVar6 = (**(code **)(*plVar7 + 0x78))(plVar7), iVar6 != 0)) {
            local_44 = 0;
            local_46 = local_46 | 0x80;
          }
          if ((*(byte *)(param_2 + 0x62) >> 3 & 1) == 0) {
            uVar9 = FUN_1433679a0(plVar7);
            cVar4 = Scaleform::Render::Cxform::IsIdentity(uVar9);
            if (cVar4 == '\0') {
              local_46 = local_46 | 8;
              FUN_1432bff30(local_a8);
            }
          }
          FUN_14336fb10(*(undefined8 *)(param_1 + -0x10),local_a8);
          if (local_68 != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(local_68);
          }
          piVar1 = (int *)(uVar2 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920(uVar2);
          }
          return (RefCountNTSImpl *)0x0;
        }
        param_7._0_1_ = 1;
      }
      piVar1 = (int *)(uVar2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(uVar2);
      }
    }
  }
LAB_1434287ac:
  FUN_1433830d0(*(undefined8 *)(param_1 + -0x10));
  lVar3 = *(longlong *)(param_1 + -0x10);
  puVar17 = &local_c8;
  uVar19 = 0;
  plVar7 = *(longlong **)(*(longlong *)(lVar3 + 0x20) + 0x18);
  local_c8 = *(undefined4 *)(param_2 + 0x50);
  this = (RefCountNTSImpl *)
         (**(code **)(*plVar7 + 0x20))
                   (plVar7,*(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0x10),&local_c0,lVar3,
                    puVar17,0);
  uVar18 = (undefined4)((ulonglong)puVar17 >> 0x20);
  local_res8 = local_res8 & 0xffffffffffffff00;
  lVar3 = *(longlong *)(this + 0x38);
  pRVar13 = (RefCountNTSImpl *)0x0;
  if ((char)*(ushort *)(this + 0x6a) < '\0') {
    pRVar13 = this;
  }
  *(ushort *)(this + 0x6a) = *(ushort *)(this + 0x6a) & 0xfffe;
  for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x38)) {
    pfVar10 = (float *)FUN_143367db0(lVar3,&local_e8);
    uVar18 = (undefined4)((ulonglong)puVar17 >> 0x20);
    if ((*pfVar10 < pfVar10[2]) && (pfVar10[1] < pfVar10[3])) {
      *(ushort *)(this + 0x6a) = *(ushort *)(this + 0x6a) | 1;
      (**(code **)(*(longlong *)this + 0xa0))(this);
      break;
    }
  }
  if (pRVar13 != (RefCountNTSImpl *)0x0) {
    if (*(int *)(*param_3 + 0x20) != 0) {
      FUN_14336d560(pRVar13,param_3);
      local_res8 = CONCAT71(local_res8._1_7_,1);
    }
    if (param_9 != 0) {
      (**(code **)(*(longlong *)pRVar13 + 0x2f8))(pRVar13);
    }
    if ((uVar14 & 4) == 0) {
      (**(code **)(*(longlong *)pRVar13 + 0x1a8))(pRVar13,0);
    }
    else {
      *(ushort *)(pRVar13 + 0x88) = *(ushort *)(pRVar13 + 0x88) | 1;
    }
  }
  *(int *)(this + 0x30) = param_6;
  uVar15 = 0;
  if (pRVar13 != (RefCountNTSImpl *)0x0) {
    uVar15 = FUN_143428fd0(param_1 + -0x30,&local_c0,pRVar13,param_4,param_5,
                           CONCAT31((int3)((uint)uVar19 >> 8),(char)uVar11) & 0xffffff01);
    uVar18 = (undefined4)((ulonglong)param_5 >> 0x20);
  }
  uVar14 = uVar14 & 0xfffffffe;
  if ((byte)param_7 != 0) {
    uVar14 = uVar14 | 1;
  }
  if (pRVar13 != (RefCountNTSImpl *)0x0) {
    Scaleform::GFx::InteractiveObject::AddToPlayList(pRVar13);
    FUN_1434a1710(pRVar13);
  }
  FUN_1433d4610(*(longlong *)(param_1 + -0x10) + 0xd8,*(longlong *)(param_1 + -0x10),param_2,this,
                CONCAT44(uVar18,uVar14));
  cVar4 = (char)local_res8;
  if ((char)local_res8 != '\0') {
    plVar7 = *(longlong **)(*(longlong *)(param_1 + -0x10) + 0x20);
    (**(code **)(*plVar7 + 0x140))(plVar7,pRVar13);
  }
  if (pRVar13 == (RefCountNTSImpl *)0x0) goto LAB_1434289e0;
  pRVar12 = (RefCountNTSImpl *)0x0;
  if ((*(ushort *)(pRVar13 + 0x6a) >> 10 & 1) != 0) {
    pRVar12 = pRVar13;
  }
  if ((uVar11 & 1) == 0) {
    FUN_14343c020(*(undefined8 *)(*(longlong *)(param_1 + -0x10) + 0x20),uVar15);
    if (pRVar12 != (RefCountNTSImpl *)0x0) {
      local_e8 = 1;
      uStack_e0 = 0;
      uStack_dc = uStack_dc & 0xffffff00;
      local_d8 = CONCAT44(local_d8._4_4_,0xff00);
      cVar5 = Scaleform::GFx::DisplayObject::HasEventHandler(pRVar12,&local_e8);
      bVar16 = cVar5 == '\0';
      goto LAB_1434289ae;
    }
  }
  else {
    bVar16 = pRVar12 == (RefCountNTSImpl *)0x0;
LAB_1434289ae:
    if (!bVar16) {
      pRVar12[0x138] = (RefCountNTSImpl)((byte)pRVar12[0x138] | 0x80);
    }
  }
  if ((cVar4 != '\0') &&
     (*param_3 == *(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + -0x10) + 0x20) + 0x570))) {
    FUN_143384c20(*(longlong *)(param_1 + -0x10),pRVar13);
  }
LAB_1434289e0:
  Scaleform::RefCountNTSImpl::Release(this);
  return this;
}



// FUNCTION 143428a20 FUN_143428a20 body=559 status=ok
// SIG undefined FUN_143428a20(void)

void FUN_143428a20(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  RefCountNTSImpl *this;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res8;
  byte local_38 [32];
  
  lVar5 = *(longlong *)(*(longlong *)(param_1 + -0x10) + 0xe0);
  if (lVar5 != 0) {
    if (((*(char *)(param_1 + 0x1c8) == '\0') && (*(char *)((longlong)param_2 + 10) == '\0')) &&
       (lVar6 = *(longlong *)(param_1 + -0x18), lVar6 != 0)) {
      local_38[0] = 0;
      local_res8 = FUN_143360950(*(undefined8 *)
                                  (*(longlong *)
                                    (*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x28) + 0x18) +
                                  0x618),"tabChildren",0xb);
      plVar1 = (longlong *)(lVar6 + 0x20);
      *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
      cVar4 = (**(code **)(*plVar1 + 0x58))
                        (plVar1,(longlong *)(param_1 + 0xf0),&local_res8,local_38);
      piVar2 = (int *)(local_res8 + 0x18);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FUN_14335f920();
      }
      if (((cVar4 != '\0') && (local_38[0] != 0)) && (local_38[0] != 10)) {
        cVar4 = FUN_143411fd0(local_38,param_1 + 8);
        *(char *)((longlong)param_2 + 10) = (cVar4 == '\0') + '\x01';
      }
      if (4 < local_38[0]) {
        FUN_143411150(local_38);
      }
    }
    if (((*(char *)(param_1 + 0x1c8) != '\x02') && (*(char *)((longlong)param_2 + 10) != '\x02')) &&
       (lVar5 != 0)) {
      lVar6 = 0;
      do {
        this = *(RefCountNTSImpl **)(lVar6 + *(longlong *)(*(longlong *)(param_1 + -0x10) + 0xd8));
        if (((this != (RefCountNTSImpl *)0x0) && ((char)this[0x6a] < '\0')) &&
           (cVar4 = (**(code **)(*(longlong *)this + 0x1d8))(this), cVar4 != '\0')) {
          if ((0 < *(short *)(this + 0xbc)) && ((char)param_2[1] == '\0')) {
            FUN_1432f2a90(*param_2,*(undefined8 *)(*param_2 + 0x18),0);
            *(undefined1 *)(param_2 + 1) = 1;
          }
          cVar4 = (**(code **)(*(longlong *)this + 0x2c0))(this);
          if (((cVar4 != '\0') ||
              ((*(char *)((longlong)param_2 + 9) != '\0' &&
               (cVar4 = (**(code **)(*(longlong *)this + 0x2d0))(this,2), cVar4 != '\0')))) &&
             (((char)param_2[1] == '\0' || (0 < *(short *)(this + 0xbc))))) {
            *(int *)(this + 8) = *(int *)(this + 8) + 1;
            plVar1 = (longlong *)*param_2;
            FUN_1432f2a90(plVar1,plVar1[3],plVar1[1] + 1);
            puVar3 = (undefined8 *)(*plVar1 + (plVar1[1] + -1) * 8);
            if (puVar3 != (undefined8 *)0x0) {
              *(int *)(this + 8) = *(int *)(this + 8) + 1;
              *puVar3 = this;
            }
            Scaleform::RefCountNTSImpl::Release(this);
          }
          if ((*(ushort *)(this + 0x6a) >> 9 & 1) != 0) {
            FUN_1433705a0(this,param_2);
          }
        }
        lVar6 = lVar6 + 0x10;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  return;
}



// FUNCTION 143428c60 FUN_143428c60 body=79 status=ok
// SIG undefined FUN_143428c60(void)

undefined1 FUN_143428c60(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0xe0))();
  if (cVar1 == '\0') {
    return 0;
  }
  (**(code **)(*param_3 + 0x250))(param_3);
  (**(code **)(**(longlong **)(param_1[4] + 0x20) + 0x38))();
  return 1;
}



// FUNCTION 143428cc0 FUN_143428cc0 body=283 status=ok
// SIG undefined FUN_143428cc0(void)

undefined8 FUN_143428cc0(longlong param_1,longlong *param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  
  FUN_14336cc90(param_2,0,1);
  if (*(short *)((longlong)param_2 + 0x6a) < 0) {
    FUN_1432eba30(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) + 0x10),
                  param_2);
  }
  lVar2 = Scaleform::GFx::DisplayList::GetDisplayIndex
                    (*(longlong *)(param_1 + 0x20) + 0xd8,*(undefined4 *)((longlong)param_2 + 0x2c))
  ;
  if (lVar2 != -1) {
    FUN_14336ec80(param_3,param_2);
    if (((*(ushort *)(param_3 + 0x6a) >> 10 & 1) != 0) &&
       ((*(ushort *)((longlong)param_2 + 0x6a) >> 10 & 1) != 0)) {
      if ((*(byte *)(param_2 + 0x27) & 0x20) == 0) {
        bVar1 = *(byte *)(param_3 + 0x138) & 0xdf;
      }
      else {
        bVar1 = *(byte *)(param_3 + 0x138) | 0x20;
      }
      *(byte *)(param_3 + 0x138) = bVar1;
    }
    (**(code **)(*param_2 + 600))(param_2);
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x20) + 0x20) + 0x38))();
    Scaleform::GFx::InteractiveObject::MoveNameHandle(param_3,param_2);
    lVar2 = Scaleform::GFx::DisplayList::GetDisplayIndex
                      (*(longlong *)(param_1 + 0x20) + 0xd8,
                       *(undefined4 *)((longlong)param_2 + 0x2c));
    if (lVar2 != -1) {
      FUN_1433d4ba0(*(longlong *)(param_1 + 0x20) + 0xd8,*(longlong *)(param_1 + 0x20),lVar2,param_3
                   );
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143428df0 FUN_143428df0 body=255 status=ok
// SIG undefined FUN_143428df0(void)

ulonglong FUN_143428df0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  ulonglong in_RAX;
  ulonglong uVar6;
  longlong local_res18 [2];
  byte local_28 [32];
  
  if (param_2 == 1) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar3 = param_1[3];
  if (lVar3 != 0) {
    local_28[0] = 0;
    local_res18[0] =
         FUN_143360950(*(undefined8 *)
                        (*(longlong *)(*(longlong *)(param_1[0x24] + 0x28) + 0x18) + 0x618),
                       "focusEnabled",0xc);
    plVar1 = (longlong *)(lVar3 + 0x20);
    *(int *)(local_res18[0] + 0x18) = *(int *)(local_res18[0] + 0x18) + 1;
    cVar4 = (**(code **)(*plVar1 + 0x58))(plVar1,param_1 + 0x24,local_res18,local_28);
    piVar2 = (int *)(local_res18[0] + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_14335f920();
    }
    if (((cVar4 != '\0') && (local_28[0] != 0)) && (local_28[0] != 10)) {
      bVar5 = FUN_143411fd0(local_28,param_1 + 7);
      if (4 < local_28[0]) {
        FUN_143411150(local_28);
      }
      return (ulonglong)bVar5;
    }
    if (4 < local_28[0]) {
      FUN_143411150(local_28);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143428eeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(*param_1 + 0x60))(param_1);
  return uVar6;
}



// FUNCTION 143428f00 FUN_143428f00 body=191 status=ok
// SIG undefined FUN_143428f00(void)

undefined8 FUN_143428f00(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  iVar1 = *(int *)(param_2 + 0x2c);
  uVar3 = *(ulonglong *)(lVar2 + 0xe0);
  uVar5 = FUN_1433d54d0(lVar2 + 0xd8,iVar1);
  if (uVar5 < uVar3) {
    plVar6 = (longlong *)(uVar5 * 0x10 + *(longlong *)(lVar2 + 0xd8));
    lVar4 = *plVar6;
    uVar7 = uVar5;
    while ((((lVar4 != 0 && (uVar7 = uVar7 + 1, lVar4 != param_2)) &&
            (iVar1 == *(int *)(lVar4 + 0x2c))) && (uVar7 < uVar3))) {
      lVar4 = plVar6[2];
      plVar6 = plVar6 + 2;
      uVar5 = uVar5 + 1;
    }
    if ((uVar5 < uVar3) && (lVar4 == param_2)) {
      Scaleform::GFx::DisplayList::RemoveEntryAtIndex(lVar2 + 0xd8,lVar2,uVar5);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143428fd0 FUN_143428fd0 body=2160 status=ok
// SIG undefined FUN_143428fd0(void)

int FUN_143428fd0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                 longlong param_5,char param_6)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong local_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong uStack_98;
  undefined8 local_90;
  uint local_88 [2];
  ulonglong uStack_80;
  undefined4 local_78;
  ulonglong local_68;
  longlong lStack_60;
  byte local_58;
  ulonglong *local_50;
  undefined4 local_48;
  longlong local_40;
  
  bVar3 = true;
  plVar15 = (longlong *)0x0;
  if ((*(ushort *)((longlong)param_3 + 0x6a) >> 10 & 1) != 0) {
    plVar15 = param_3;
  }
  lVar9 = *(longlong *)(param_1[4] + 0x20);
  local_40 = lVar9;
  if (param_4 != (longlong *)0x0) {
    uVar11 = param_4[1];
    uVar12 = 0;
    if (uVar11 != 0) {
      do {
        FUN_143410560(*(undefined8 *)(*param_4 + uVar12 * 8),param_3);
        if (((plVar15 != (longlong *)0x0) && ((**(uint **)(*param_4 + uVar12 * 8) & 0xfbfc00) != 0))
           && (lVar6 = FUN_143425520((longlong)plVar15 +
                                     (ulonglong)*(byte *)((longlong)plVar15 + 0x6d) * 4), lVar6 != 0
              )) {
          *(undefined1 *)(lVar6 + 0x72) = 1;
        }
        if ((((param_6 != '\0') && (piVar1 = *(int **)(*param_4 + uVar12 * 8), *piVar1 == 0x200)) &&
            ((lVar6 = *(longlong *)(piVar1 + 6), lVar6 != 0 &&
             ((*(int *)(lVar6 + 0x18) != 0 && (**(char **)(lVar6 + 0x10) != '\0')))))) &&
           (lVar6 = FUN_1434372c0(lVar9 + 0x80,1), lVar6 != 0)) {
          local_a0 = 0x200;
          uStack_80 = uStack_98 >> 0x28;
          uStack_98 = uStack_80 << 0x28;
          local_90 = CONCAT44(local_90._4_4_,0xff00);
          local_88[0] = 0x200;
          local_88[1] = 0;
          uStack_80 = uStack_80 << 0x28;
          local_78 = 0xff00;
          FUN_1434a40a0(lVar6,param_3,local_88);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar11);
    }
  }
  lVar6 = (**(code **)(*param_1 + 0xb8))(param_1);
  local_58 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_50 = (ulonglong *)CONCAT44(local_50._4_4_,*(undefined4 *)(*param_2 + 0x18));
  uVar7 = (**(code **)(*param_3 + 0x218))(param_3);
  puVar8 = (ulonglong *)FUN_143312150(uVar7,&local_50);
  lVar16 = local_40 + 0x80;
  bVar2 = false;
  local_48 = *(undefined4 *)(local_40 + 0x120);
  iVar14 = *(int *)(local_40 + 0x128) + 1;
  *(int *)(local_40 + 0x128) = iVar14;
  *(int *)(local_40 + 0x120) = iVar14;
  uVar11 = local_68;
  lVar9 = lStack_60;
  if (puVar8 == (ulonglong *)0x0) goto LAB_143429680;
  lVar9 = (**(code **)(*param_1 + 0xf0))(param_1);
  local_a8 = FUN_143360a90(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(*(longlong *)(lVar9 + 0xe8) + 0x28) + 0x18)
                            + 0x618),(*puVar8 & 0xfffffffffffffffc) + 0xc);
  *(int *)(local_a8 + 0x18) = *(int *)(local_a8 + 0x18) + 1;
  lVar9 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (*(byte *)(lVar9 + 0xf0) < 7) {
    local_50 = &local_a8;
    if (*(longlong *)(local_a8 + 0x10) == 0) {
      FUN_14335f970(local_a8);
    }
    if (((*(longlong *)(lVar6 + 0x18) != 0) &&
        (lVar9 = FUN_143493ca0(lVar6 + 0x18,&local_50,
                               (ulonglong)*(uint *)(local_a8 + 0x1c) &
                               *(ulonglong *)(*(longlong *)(lVar6 + 0x18) + 8)), -1 < lVar9)) &&
       (lVar9 = *(longlong *)(lVar6 + 0x18) + lVar9 * 0x28, lVar9 != -0x18)) {
      lVar9 = lVar9 + 0x20;
      goto LAB_1434292fa;
    }
LAB_143429593:
    uVar11 = local_68;
    lVar9 = lStack_60;
    bVar2 = false;
    if (param_6 != '\0') {
      *(int *)(local_a8 + 0x18) = *(int *)(local_a8 + 0x18) + 1;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      local_88[0] = CONCAT31(local_88[0]._1_3_,5);
      uStack_80 = local_a8;
      FUN_1434a3be0(&local_c8,&local_c8,1);
      lVar9 = uStack_c0 * 0x20 + (local_c8 - 0x20);
      if (lVar9 == 0) {
LAB_1434295eb:
        FUN_143411150(local_88);
      }
      else {
        FUN_143410ec0(lVar9,local_88);
        if (4 < (byte)local_88[0]) goto LAB_1434295eb;
      }
      lVar9 = FUN_1434372c0(lVar16,3);
      if (lVar9 != 0) {
        *(undefined4 *)(lVar9 + 8) = 4;
        *(int *)(param_3 + 1) = (int)param_3[1] + 1;
        if (*(RefCountNTSImpl **)(lVar9 + 0x10) != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar9 + 0x10));
        }
        *(longlong **)(lVar9 + 0x10) = param_3;
        if (*(RefCountNTSImpl **)(lVar9 + 0x18) != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar9 + 0x18));
        }
        *(undefined8 *)(lVar9 + 0x18) = 0;
        *(code **)(lVar9 + 0x50) = FUN_14342e790;
        FUN_143499890(lVar9 + 0x58,&local_c8);
      }
      bVar3 = false;
      FUN_1434976a0(&local_c8);
      uVar11 = local_68;
      lVar9 = lStack_60;
    }
  }
  else {
    lVar6 = *(longlong *)(lVar6 + 0x18);
    if (lVar6 != 0) {
      uVar11 = *(ulonglong *)(lVar6 + 8);
      uVar12 = *(uint *)(local_a8 + 0x1c) & uVar11;
      lVar9 = uVar12 * 5 + 2;
      puVar8 = (ulonglong *)(lVar6 + lVar9 * 8);
      if ((*(longlong *)(lVar6 + lVar9 * 8) != -2) &&
         (uVar13 = uVar12, (*(uint *)(puVar8[1] + 0x1c) & uVar11) == uVar12)) {
        while (((*(uint *)(puVar8[1] + 0x1c) & uVar11) != uVar12 || (puVar8[1] != local_a8))) {
          uVar13 = *puVar8;
          if (uVar13 == 0xffffffffffffffff) goto code_r0x000143429294;
          puVar8 = (ulonglong *)(lVar6 + uVar13 * 0x28 + 0x10);
        }
        if (-1 < (longlong)uVar13) {
          lVar6 = lVar6 + (uVar13 * 5 + 3) * 8;
          lVar9 = lVar6 + 8;
          if (lVar6 == 0) {
            lVar9 = 0;
          }
          goto LAB_1434292fa;
        }
      }
    }
code_r0x000143429294:
    lVar9 = 0;
LAB_1434292fa:
    if (lVar9 == 0) goto LAB_143429593;
    FUN_143410a60(&local_68,lVar9);
    lVar6 = FUN_1434372c0(lVar16,1);
    lVar9 = lStack_60;
    uVar11 = local_68;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    local_c8 = CONCAT71(local_c8._1_7_,8);
    local_b0 = 0;
    uStack_c0 = local_68;
    if (local_68 != 0) {
      *(uint *)(local_68 + 0x18) = *(int *)(local_68 + 0x18) + 1U & 0x8fffffff;
    }
    local_b8 = 0;
    if (lStack_60 != 0) {
      FUN_1434109d0(&uStack_c0,lStack_60,local_58 & 1);
    }
    FUN_1434a3be0(&local_a0,&local_a0);
    lVar10 = uStack_98 * 0x20 + local_a0 + -0x20;
    if (lVar10 != 0) {
      FUN_143410ec0(lVar10,&local_c8);
    }
    if (4 < (byte)local_c8) {
      FUN_143411150(&local_c8);
    }
    if (lVar6 != 0) {
      *(undefined4 *)(lVar6 + 8) = 4;
      *(int *)(param_3 + 1) = (int)param_3[1] + 1;
      if (*(RefCountNTSImpl **)(lVar6 + 0x10) != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar6 + 0x10));
      }
      *(longlong **)(lVar6 + 0x10) = param_3;
      if (*(RefCountNTSImpl **)(lVar6 + 0x18) != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar6 + 0x18));
      }
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(code **)(lVar6 + 0x50) = FUN_14342e620;
      FUN_143499890(lVar6 + 0x58,&local_a0);
    }
    lVar6 = FUN_1434372c0(lVar16,3);
    if (lVar6 != 0) {
      local_c8 = 0x40000;
      uStack_80 = uStack_c0 >> 0x28;
      uStack_c0 = uStack_80 << 0x28;
      local_b8 = CONCAT44(local_b8._4_4_,0xff00);
      local_88[0] = 0x40000;
      local_88[1] = 0;
      uStack_80 = uStack_80 << 0x28;
      local_78 = 0xff00;
      FUN_1434a40a0(lVar6,param_3);
    }
    bVar3 = false;
    uVar5 = FUN_14336b320(param_1[4]);
    if ((5 < uVar5) && (param_5 != 0)) {
      FUN_1434a3be0(&local_a0,&local_a0,0);
      local_c8 = local_c8 & 0xffffffffffffff00;
      FUN_143412c40(&local_c8,param_5);
      FUN_1434a3be0(&local_a0,&local_a0);
      lVar6 = uStack_98 * 0x20 + local_a0 + -0x20;
      if (lVar6 != 0) {
        FUN_143410ec0(lVar6,&local_c8);
      }
      lVar6 = FUN_1434372c0(lVar16,3);
      if (lVar6 != 0) {
        *(undefined4 *)(lVar6 + 8) = 4;
        *(int *)(param_3 + 1) = (int)param_3[1] + 1;
        if (*(RefCountNTSImpl **)(lVar6 + 0x10) != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar6 + 0x10));
        }
        *(longlong **)(lVar6 + 0x10) = param_3;
        if (*(RefCountNTSImpl **)(lVar6 + 0x18) != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar6 + 0x18));
        }
        *(undefined8 *)(lVar6 + 0x18) = 0;
        *(code **)(lVar6 + 0x50) = FUN_14342ec10;
        FUN_143499890(lVar6 + 0x58,&local_a0);
      }
      if (4 < (byte)local_c8) {
        FUN_143411150(&local_c8);
      }
    }
    lVar6 = FUN_1434372c0(lVar16,3);
    if (lVar6 != 0) {
      *(undefined4 *)(lVar6 + 8) = 3;
      *(int *)(param_3 + 1) = (int)param_3[1] + 1;
      if (*(RefCountNTSImpl **)(lVar6 + 0x10) != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar6 + 0x10));
      }
      *(longlong **)(lVar6 + 0x10) = param_3;
      if (*(RefCountNTSImpl **)(lVar6 + 0x18) != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar6 + 0x18));
      }
      *(undefined8 *)(lVar6 + 0x18) = 0;
      FUN_143410a60(lVar6 + 0x38,&local_68);
    }
    FUN_1434976a0(&local_a0);
    bVar2 = true;
  }
  piVar1 = (int *)(local_a8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(local_a8);
  }
LAB_143429680:
  if (param_6 == '\0') {
    if (((!bVar2) && (uVar5 = FUN_14336b320(param_1[4]), 5 < uVar5)) && (param_5 != 0)) {
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      local_88[0] = local_88[0] & 0xffffff00;
      FUN_143412c40(local_88,param_5);
      FUN_1434a3be0(&local_c8,&local_c8,1);
      lVar6 = uStack_c0 * 0x20 + (local_c8 - 0x20);
      if (lVar6 != 0) {
        FUN_143410ec0(lVar6,local_88);
      }
      lVar6 = FUN_1434372c0(lVar16,3);
      if (lVar6 != 0) {
        *(undefined4 *)(lVar6 + 8) = 4;
        *(int *)(param_3 + 1) = (int)param_3[1] + 1;
        if (*(RefCountNTSImpl **)(lVar6 + 0x10) != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar6 + 0x10));
        }
        *(longlong **)(lVar6 + 0x10) = param_3;
        if (*(RefCountNTSImpl **)(lVar6 + 0x18) != (RefCountNTSImpl *)0x0) {
          Scaleform::RefCountNTSImpl::Release(*(RefCountNTSImpl **)(lVar6 + 0x18));
        }
        *(undefined8 *)(lVar6 + 0x18) = 0;
        *(code **)(lVar6 + 0x50) = FUN_14342ec10;
        FUN_143499890(lVar6 + 0x58,&local_c8);
      }
      if (4 < (byte)local_88[0]) {
        FUN_143411150(local_88);
      }
      FUN_1434976a0(&local_c8);
    }
  }
  else if ((bVar3) && (lVar6 = FUN_1434372c0(lVar16,3), lVar6 != 0)) {
    local_c8 = 0x40000;
    uStack_80 = uStack_c0 >> 0x28;
    uStack_c0 = uStack_80 << 0x28;
    local_b8 = CONCAT44(local_b8._4_4_,0xff00);
    local_88[0] = 0x40000;
    local_88[1] = 0;
    uStack_80 = uStack_80 << 0x28;
    local_78 = 0xff00;
    FUN_1434a40a0(lVar6,param_3,local_88);
  }
  bVar4 = local_58;
  *(undefined4 *)(local_40 + 0x120) = local_48;
  if ((((local_58 & 2) == 0) && (uVar11 != 0)) && ((*(uint *)(uVar11 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(uVar11 + 0x18) = *(uint *)(uVar11 + 0x18) - 1;
    FUN_1434a2b80(uVar11);
  }
  if ((((bVar4 & 1) == 0) && (lVar9 != 0)) && ((*(uint *)(lVar9 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) - 1;
    FUN_1434a2b80(lVar9);
  }
  return iVar14;
}



// FUNCTION 143429850 FUN_143429850 body=116 status=ok
// SIG undefined FUN_143429850(void)

void FUN_143429850(longlong param_1,longlong param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  
  lVar2 = 0;
  if ((*(ushort *)(param_2 + 0x6a) >> 10 & 1) != 0) {
    lVar2 = param_2;
  }
  if (param_4 == '\0') {
    FUN_14343c020(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x20),param_3);
    if (lVar2 == 0) {
      return;
    }
    local_28 = 1;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0xff00;
    cVar1 = Scaleform::GFx::DisplayObject::HasEventHandler(lVar2,&local_28);
    bVar3 = cVar1 == '\0';
  }
  else {
    bVar3 = lVar2 == 0;
  }
  if (!bVar3) {
    *(byte *)(lVar2 + 0x138) = *(byte *)(lVar2 + 0x138) | 0x80;
  }
  return;
}



// FUNCTION 1434298d0 FUN_1434298d0 body=101 status=ok
// SIG undefined FUN_1434298d0(void)

void FUN_1434298d0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2a0))();
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2a0))();
  FUN_1433830d0(*(undefined8 *)(param_1 + 0x20));
  Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(param_1 + 0x20));
  FUN_14337e300(uVar2,1);
  FUN_14337f1f0(uVar1);
  return;
}



// FUNCTION 143429940 FUN_143429940 body=114 status=ok
// SIG undefined FUN_143429940(void)

void FUN_143429940(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2a0))();
  cVar1 = Scaleform::GFx::DrawingContext::NoLine(uVar2);
  if (cVar1 == '\0') {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2a0))();
    FUN_1433830d0(*(undefined8 *)(param_1 + 0x20));
    Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(param_1 + 0x20));
    FUN_14337e300(uVar3,0);
    Scaleform::GFx::DrawingContext::SetNoLine(uVar2);
  }
  return;
}



// FUNCTION 1434299c0 FUN_1434299c0 body=79 status=ok
// SIG undefined FUN_1434299c0(void)

void FUN_1434299c0(longlong param_1,float param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2a0))();
  FUN_14337f200(uVar1,param_2 * 20.0,param_3,param_4);
  return;
}



// FUNCTION 143429a20 FUN_143429a20 body=90 status=ok
// SIG undefined FUN_143429a20(void)

undefined8 FUN_143429a20(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2a0))();
  FUN_1433830d0(*(undefined8 *)(param_1 + 0x20));
  Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(param_1 + 0x20));
  FUN_14337e300(uVar1,1);
  uVar2 = FUN_14337eae0(uVar1);
  FUN_14337e4d0(uVar1);
  return uVar2;
}



// FUNCTION 143429a80 FUN_143429a80 body=75 status=ok
// SIG undefined FUN_143429a80(void)

void FUN_143429a80(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2a0))();
  FUN_1433830d0(*(undefined8 *)(param_1 + 0x20));
  Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(param_1 + 0x20));
  FUN_14337e300(uVar1,1);
  FUN_14337ec20(uVar1);
  return;
}



// FUNCTION 143429ae0 FUN_143429ae0 body=89 status=ok
// SIG undefined FUN_143429ae0(void)

void FUN_143429ae0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2a0))();
  FUN_1433830d0(*(undefined8 *)(param_1 + 0x20));
  Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(param_1 + 0x20));
  FUN_14337e300(uVar1,1);
  FUN_14337e3d0(uVar1,param_2);
  return;
}



// FUNCTION 143429b40 FUN_143429b40 body=125 status=ok
// SIG undefined FUN_143429b40(void)

void FUN_143429b40(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2a0))();
  FUN_1433830d0(*(undefined8 *)(param_1 + 0x20));
  Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(param_1 + 0x20));
  FUN_14337e300(uVar1,1);
  FUN_14337e530(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143429bd0 FUN_143429bd0 body=75 status=ok
// SIG undefined FUN_143429bd0(void)

void FUN_143429bd0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2a0))();
  FUN_1433830d0(*(undefined8 *)(param_1 + 0x20));
  Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(param_1 + 0x20));
  FUN_14337e300(uVar1,1);
  FUN_14337ee10(uVar1);
  return;
}



// FUNCTION 143429c30 FUN_143429c30 body=132 status=ok
// SIG undefined FUN_143429c30(void)

void FUN_143429c30(longlong param_1,float param_2,float param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2a0))();
  FUN_1433830d0(*(undefined8 *)(param_1 + 0x20));
  Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(param_1 + 0x20));
  FUN_14337e300(uVar1,0);
  FUN_14337ee50(uVar1,param_2 * 20.0,param_3 * 20.0);
  Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 143429cc0 FUN_143429cc0 body=92 status=ok
// SIG undefined FUN_143429cc0(void)

void FUN_143429cc0(longlong param_1,float param_2,float param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2a0))();
  FUN_14337ef60(uVar1,param_2 * 20.0,param_3 * 20.0);
  Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 143429d30 FUN_143429d30 body=136 status=ok
// SIG undefined FUN_143429d30(void)

void FUN_143429d30(longlong param_1,float param_2,float param_3,float param_4,float param_5)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2a0))();
  FUN_14337eff0(uVar1,param_2 * 20.0,param_3 * 20.0,param_4 * 20.0,param_5 * 20.0);
  Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 143429dc0 FUN_143429dc0 body=86 status=ok
// SIG undefined FUN_143429dc0(void)

undefined8 FUN_143429dc0(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x2a0))();
  FUN_1433830d0(*(undefined8 *)(param_1 + 0x20));
  Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(param_1 + 0x20));
  FUN_14337e300(uVar1,param_2);
  return uVar1;
}



// FUNCTION 143429e20 FUN_143429e20 body=478 status=ok
// SIG undefined FUN_143429e20(void)

void FUN_143429e20(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  longlong *plVar13;
  double dVar14;
  
  plVar13 = *(longlong **)(param_1 + 0x10);
  plVar9 = (longlong *)0x0;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar7 = (**(code **)(*plVar13 + 0x10))(plVar13);
    if (iVar7 - 2U < 4) {
      plVar13 = (longlong *)plVar13[3];
    }
    else {
      plVar13 = (longlong *)0x0;
    }
  }
  if ((plVar13 != (longlong *)0x0) && (0 < *(int *)(param_1 + 0x38))) {
    uVar12 = *(uint *)(param_1 + 0x3c);
    plVar2 = (longlong *)plVar13[7];
    lVar3 = *(longlong *)(param_1 + 0x30);
    plVar11 = plVar9;
    if (uVar12 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      plVar11 = (longlong *)
                ((ulonglong)(uVar12 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar12 >> 5) * 8));
    }
    plVar10 = plVar9;
    if ((*(ushort *)((longlong)plVar13 + 0x6a) >> 10 & 1) != 0) {
      plVar10 = plVar13;
    }
    if ((byte)((char)*plVar11 - 3U) < 2) {
      dVar14 = (double)FUN_143411a90(plVar11,lVar3);
      uVar12 = (int)dVar14 + 0x4000;
      if (0x7efffffd < uVar12) {
        return;
      }
    }
    else {
      if (plVar10 == (longlong *)0x0) {
        plVar9 = (longlong *)FUN_143419e00(lVar3,plVar11);
      }
      else {
        uVar4 = *(undefined8 *)(lVar3 + 0xe0);
        *(byte *)(lVar3 + 0x17e) = *(byte *)(lVar3 + 0x17e) & 0xfd;
        *(longlong **)(lVar3 + 0xe0) = plVar10;
        uVar5 = FUN_14336b320();
        *(undefined1 *)(lVar3 + 0xf0) = uVar5;
        plVar9 = (longlong *)FUN_143419e00(*(undefined8 *)(param_1 + 0x30),plVar11);
        lVar3 = *(longlong *)(param_1 + 0x30);
        *(byte *)(lVar3 + 0x17e) = *(byte *)(lVar3 + 0x17e) & 0xfd;
        *(undefined8 *)(lVar3 + 0xe0) = uVar4;
        uVar5 = FUN_14336b320(uVar4);
        *(undefined1 *)(lVar3 + 0xf0) = uVar5;
      }
      if (plVar9 == (longlong *)0x0) {
        return;
      }
      if (plVar9 == plVar13) {
        return;
      }
      if (plVar2 != (longlong *)plVar9[7]) {
        return;
      }
      uVar12 = *(uint *)((longlong)plVar9 + 0x2c);
    }
    if ((-1 < *(int *)((longlong)plVar13 + 0x2c)) &&
       ((**(code **)(*plVar13 + 0x1a8))(plVar13,0), plVar2 != (longlong *)0x0)) {
      uVar1 = *(undefined4 *)((longlong)plVar13 + 0x2c);
      uVar8 = (**(code **)(*plVar2 + 0x360))(plVar2);
      cVar6 = FUN_1433d5780(plVar2 + 0x1b,plVar2,uVar1,uVar12,uVar8);
      if ((cVar6 != '\0') && (FUN_1433830d0(plVar2), plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x1a8))(plVar9,0);
      }
    }
  }
  return;
}



// FUNCTION 14342a010 FUN_14342a010 body=78 status=ok
// SIG undefined FUN_14342a010(void)

void FUN_14342a010(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar1 = (**(code **)(*plVar2 + 0x10))();
    if (iVar1 == 2) {
      plVar2 = (longlong *)plVar2[3];
    }
    else {
      plVar2 = (longlong *)0x0;
    }
  }
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014342a051. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x398))(plVar2,0);
    return;
  }
  return;
}



// FUNCTION 14342a070 FUN_14342a070 body=81 status=ok
// SIG undefined FUN_14342a070(void)

void FUN_14342a070(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar1 = (**(code **)(*plVar2 + 0x10))();
    if (iVar1 == 2) {
      plVar2 = (longlong *)plVar2[3];
    }
    else {
      plVar2 = (longlong *)0x0;
    }
  }
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014342a0b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x398))(plVar2,1);
    return;
  }
  return;
}



// FUNCTION 14342a0d0 FUN_14342a0d0 body=344 status=ok
// SIG undefined FUN_14342a0d0(void)

void FUN_14342a0d0(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  longlong *plVar7;
  int local_res8 [2];
  undefined8 *local_res10;
  
  plVar7 = *(longlong **)(param_1 + 0x10);
  pcVar6 = (char *)0x0;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar5 = (**(code **)(*plVar7 + 0x10))(plVar7);
    if (iVar5 == 2) {
      plVar7 = (longlong *)plVar7[3];
    }
    else {
      plVar7 = (longlong *)0x0;
    }
  }
  if (plVar7 != (longlong *)0x0) {
    if (*(int *)(param_1 + 0x38) < 1) {
      FUN_1434a13c0(plVar7 + 3,"AvmSprite::SpriteGotoAndStop needs one arg");
      return;
    }
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar2 = *(uint *)(param_1 + 0x3c);
    if (uVar2 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      pcVar6 = (char *)((ulonglong)(uVar2 & 0x1f) * 0x20 +
                       *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar2 >> 5) * 8));
    }
    local_res8[0] = -1;
    if (*pcVar6 == '\x05') {
      FUN_143411540(pcVar6,&local_res10,lVar3,0xffffffff,0);
      cVar4 = (**(code **)(*plVar7 + 0x368))(plVar7,*local_res10,local_res8,1);
      if (cVar4 == '\0') {
        piVar1 = (int *)(local_res10 + 3);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          return;
        }
        FUN_14335f920(local_res10);
        return;
      }
      piVar1 = (int *)(local_res10 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(local_res10);
      }
    }
    else {
      local_res8[0] = FUN_143411f00(pcVar6,lVar3);
      local_res8[0] = local_res8[0] + -1;
    }
    (**(code **)(*plVar7 + 0x378))(plVar7,local_res8[0]);
    (**(code **)(*plVar7 + 0x398))(plVar7,1);
  }
  return;
}



// FUNCTION 14342a230 FUN_14342a230 body=341 status=ok
// SIG undefined FUN_14342a230(void)

void FUN_14342a230(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  longlong *plVar7;
  int local_res8 [2];
  undefined8 *local_res10;
  
  plVar7 = *(longlong **)(param_1 + 0x10);
  pcVar6 = (char *)0x0;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar5 = (**(code **)(*plVar7 + 0x10))(plVar7);
    if (iVar5 == 2) {
      plVar7 = (longlong *)plVar7[3];
    }
    else {
      plVar7 = (longlong *)0x0;
    }
  }
  if (plVar7 != (longlong *)0x0) {
    if (*(int *)(param_1 + 0x38) < 1) {
      FUN_1434a13c0(plVar7 + 3,"AvmSprite::SpriteGotoAndPlay needs one arg");
      return;
    }
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar2 = *(uint *)(param_1 + 0x3c);
    if (uVar2 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      pcVar6 = (char *)((ulonglong)(uVar2 & 0x1f) * 0x20 +
                       *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar2 >> 5) * 8));
    }
    local_res8[0] = -1;
    if (*pcVar6 == '\x05') {
      FUN_143411540(pcVar6,&local_res10,lVar3,0xffffffff,0);
      cVar4 = (**(code **)(*plVar7 + 0x368))(plVar7,*local_res10,local_res8,1);
      if (cVar4 == '\0') {
        piVar1 = (int *)(local_res10 + 3);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          return;
        }
        FUN_14335f920(local_res10);
        return;
      }
      piVar1 = (int *)(local_res10 + 3);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920(local_res10);
      }
    }
    else {
      local_res8[0] = FUN_143411f00(pcVar6,lVar3);
      local_res8[0] = local_res8[0] + -1;
    }
    (**(code **)(*plVar7 + 0x378))(plVar7,local_res8[0]);
    (**(code **)(*plVar7 + 0x398))(plVar7,0);
  }
  return;
}



// FUNCTION 14342a390 FUN_14342a390 body=140 status=ok
// SIG undefined FUN_14342a390(void)

void FUN_14342a390(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
    if (iVar1 == 2) {
      plVar3 = (longlong *)plVar3[3];
    }
    else {
      plVar3 = (longlong *)0x0;
    }
  }
  if (plVar3 != (longlong *)0x0) {
    iVar1 = (**(code **)(*plVar3 + 0x380))(plVar3);
    iVar2 = (**(code **)(*plVar3 + 0x360))(plVar3);
    if (iVar2 < iVar1) {
      (**(code **)(*plVar3 + 0x378))(plVar3,iVar2 + 1);
    }
                    /* WARNING: Could not recover jumptable at 0x00014342a40f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x398))(plVar3,1);
    return;
  }
  return;
}



// FUNCTION 14342a430 FUN_14342a430 body=116 status=ok
// SIG undefined FUN_14342a430(void)

void FUN_14342a430(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (iVar1 == 2) {
      plVar2 = (longlong *)plVar2[3];
    }
    else {
      plVar2 = (longlong *)0x0;
    }
  }
  if (plVar2 != (longlong *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0x360))(plVar2);
    if (0 < iVar1) {
      (**(code **)(*plVar2 + 0x378))(plVar2,iVar1 + -1);
    }
                    /* WARNING: Could not recover jumptable at 0x00014342a497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x398))(plVar2,1);
    return;
  }
  return;
}



// FUNCTION 14342a4b0 FUN_14342a4b0 body=113 status=ok
// SIG undefined FUN_14342a4b0(void)

void FUN_14342a4b0(longlong param_1)

{
  longlong *plVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 == (longlong *)0x0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar3 = (**(code **)(*plVar1 + 0x10))();
    if (iVar3 == 2) {
      lVar5 = plVar1[3];
    }
    else {
      lVar5 = 0;
    }
  }
  if (lVar5 != 0) {
    uVar4 = Scaleform::GFx::Sprite::GetBytesLoaded();
    pbVar2 = *(byte **)(param_1 + 8);
    if (4 < *pbVar2) {
      FUN_143411150(pbVar2);
    }
    *(undefined4 *)(pbVar2 + 8) = uVar4;
    *pbVar2 = 4;
  }
  return;
}



// FUNCTION 14342a530 FUN_14342a530 body=130 status=ok
// SIG undefined FUN_14342a530(void)

void FUN_14342a530(longlong param_1)

{
  undefined4 uVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0x10);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar3 = (**(code **)(*plVar5 + 0x10))();
    if (iVar3 == 2) {
      plVar5 = (longlong *)plVar5[3];
    }
    else {
      plVar5 = (longlong *)0x0;
    }
  }
  if (plVar5 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar5 + 0x218))();
    pbVar2 = *(byte **)(param_1 + 8);
    uVar1 = *(undefined4 *)
             (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x70) + 0x18) + 0x40) + 0x50);
    if (4 < *pbVar2) {
      FUN_143411150(pbVar2);
    }
    *(undefined4 *)(pbVar2 + 8) = uVar1;
    *pbVar2 = 4;
  }
  return;
}



// FUNCTION 14342a5c0 FUN_14342a5c0 body=1131 status=ok
// SIG undefined FUN_14342a5c0(void)

void FUN_14342a5c0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  Rect<float> *pRVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_res8 [8];
  float local_a8 [4];
  float local_98;
  float fStack_94;
  undefined8 uStack_90;
  float local_88;
  float fStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  plVar8 = *(longlong **)(param_1 + 0x10);
  plVar5 = (longlong *)0x0;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar2 = (**(code **)(*plVar8 + 0x10))(plVar8);
    if (iVar2 == 2) {
      plVar8 = (longlong *)plVar8[3];
    }
    else {
      plVar8 = (longlong *)0x0;
    }
  }
  if (plVar8 != (longlong *)0x0) {
    plVar6 = plVar8;
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar4 = *(longlong *)(param_1 + 0x30);
      uVar1 = *(uint *)(param_1 + 0x3c);
      plVar7 = plVar5;
      if (uVar1 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
        plVar7 = (longlong *)
                 ((ulonglong)(uVar1 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar1 >> 5) * 8));
      }
      plVar6 = plVar5;
      if (((((char)*plVar7 == '\a') && (lVar4 != 0)) && (plVar7[1] != 0)) &&
         ((plVar7 = (longlong *)
                    Scaleform::GFx::CharacterHandle::ResolveCharacter
                              (plVar7[1],
                               *(undefined8 *)
                                (*(longlong *)(*(longlong *)(lVar4 + 0xe0) + 0x20) + 0x10)),
          plVar7 != (longlong *)0x0 && (*(char *)((longlong)plVar7 + 0x6a) < '\0')))) {
        plVar6 = plVar7;
      }
    }
    plVar7 = plVar5;
    if ((plVar6 != (longlong *)0x0) && ((*(ushort *)((longlong)plVar6 + 0x6a) >> 10 & 1) != 0)) {
      plVar7 = plVar6;
    }
    local_a8[0] = 0.0;
    local_a8[1] = 0.0;
    local_a8[2] = 0.0;
    local_a8[3] = 0.0;
    local_68 = 0.0;
    fStack_64 = 1.0;
    uStack_60 = 0;
    fStack_5c = 0.0;
    local_78 = 1.0;
    fStack_74 = 0.0;
    uStack_70 = 0;
    fStack_6c = 0.0;
    if (plVar7 != (longlong *)0x0) {
      if (plVar7 != plVar8) {
        local_98 = 1.0;
        fStack_94 = 0.0;
        uStack_90 = 0.0;
        local_88 = 0.0;
        fStack_84 = 1.0;
        uStack_80 = 0;
        fStack_7c = 0.0;
        (**(code **)(*plVar7 + 0x1e8))(0x3f800000,&local_98);
        Scaleform::Render::Matrix2x4<float>::SetInverse
                  ((Matrix2x4<float> *)&local_78,(Matrix2x4<float> *)&local_98);
        local_98 = 1.0;
        fStack_94 = 0.0;
        uStack_90 = 0.0;
        local_88 = 0.0;
        fStack_84 = 1.0;
        uStack_80 = 0;
        fStack_7c = 0.0;
        (**(code **)(*plVar8 + 0x1e8))(plVar8,&local_98);
        fVar9 = local_88 * fStack_74;
        fVar10 = local_88 * fStack_64;
        fVar12 = fStack_64 * fStack_7c;
        fVar11 = fStack_74 * fStack_7c;
        fStack_74 = local_78 * fStack_94 + fStack_84 * fStack_74;
        fStack_6c = fStack_6c + fVar11 + local_78 * uStack_90._4_4_;
        fStack_64 = local_68 * fStack_94 + fStack_84 * fStack_64;
        fStack_5c = fStack_5c + fVar12 + local_68 * uStack_90._4_4_;
        local_78 = fVar9 + local_98 * local_78;
        local_68 = fVar10 + local_98 * local_68;
      }
      uStack_60 = 0;
      uStack_70 = 0;
      local_58 = 0x3f800000;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      local_48 = 0;
      uStack_44 = 0x3f800000;
      uStack_40 = 0;
      uStack_3c = 0;
      pRVar3 = (Rect<float> *)(**(code **)(*plVar8 + 0x1f0))(plVar8,&local_98,&local_58);
      Scaleform::Render::Matrix2x4<float>::EncloseTransform
                ((Matrix2x4<float> *)&local_78,(Rect<float> *)local_a8,pRVar3);
    }
    plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
    lVar4 = (**(code **)(*plVar8 + 0x50))(plVar8,0x68);
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_1434148b0(lVar4,*(undefined8 *)(param_1 + 0x30));
    }
    plVar8 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
    local_98 = (float)CONCAT31(local_98._1_3_,3);
    local_res8[0] = 0;
    uStack_90 = (double)local_a8[0] * 0.05;
    (**(code **)(plVar5[4] + 0x50))
              (plVar5 + 4,plVar8,*(longlong *)(*(longlong *)(*plVar8 + 0x28) + 0x18) + 0x550,
               &local_98,local_res8);
    if (4 < (byte)local_98._0_1_) {
      FUN_143411150(&local_98);
    }
    local_98 = (float)CONCAT31(local_98._1_3_,3);
    local_res8[0] = 0;
    uStack_90 = (double)local_a8[2] * 0.05;
    (**(code **)(plVar5[4] + 0x50))
              (plVar5 + 4,plVar8,*(longlong *)(*(longlong *)(*plVar8 + 0x28) + 0x18) + 0x558,
               &local_98,local_res8);
    if (4 < (byte)local_98._0_1_) {
      FUN_143411150(&local_98);
    }
    local_98 = (float)CONCAT31(local_98._1_3_,3);
    local_res8[0] = 0;
    uStack_90 = (double)local_a8[1] * 0.05;
    (**(code **)(plVar5[4] + 0x50))
              (plVar5 + 4,plVar8,*(longlong *)(*(longlong *)(*plVar8 + 0x28) + 0x18) + 0x560,
               &local_98,local_res8);
    if (4 < (byte)local_98._0_1_) {
      FUN_143411150(&local_98);
    }
    local_98 = (float)CONCAT31(local_98._1_3_,3);
    local_res8[0] = 0;
    uStack_90 = (double)local_a8[3] * 0.05;
    (**(code **)(plVar5[4] + 0x50))
              (plVar5 + 4,plVar8,*(longlong *)(*(longlong *)(*plVar8 + 0x28) + 0x18) + 0x568,
               &local_98,local_res8);
    if (4 < (byte)local_98._0_1_) {
      FUN_143411150(&local_98);
    }
    FUN_143412aa0(*(undefined8 *)(param_1 + 8),plVar5);
    if ((*(uint *)(plVar5 + 3) & 0x3ffffff) != 0) {
      *(uint *)(plVar5 + 3) = *(uint *)(plVar5 + 3) - 1;
      FUN_1434a2b80(plVar5);
    }
  }
  return;
}



// FUNCTION 14342aa40 FUN_14342aa40 body=1131 status=ok
// SIG undefined FUN_14342aa40(void)

void FUN_14342aa40(longlong param_1)

{
  uint uVar1;
  int iVar2;
  Rect<float> *pRVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_res8 [8];
  float local_a8 [4];
  float local_98;
  float fStack_94;
  undefined8 uStack_90;
  float local_88;
  float fStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  plVar8 = *(longlong **)(param_1 + 0x10);
  plVar5 = (longlong *)0x0;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar2 = (**(code **)(*plVar8 + 0x10))(plVar8);
    if (iVar2 == 2) {
      plVar8 = (longlong *)plVar8[3];
    }
    else {
      plVar8 = (longlong *)0x0;
    }
  }
  if (plVar8 != (longlong *)0x0) {
    plVar6 = plVar8;
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar4 = *(longlong *)(param_1 + 0x30);
      uVar1 = *(uint *)(param_1 + 0x3c);
      plVar7 = plVar5;
      if (uVar1 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
        plVar7 = (longlong *)
                 ((ulonglong)(uVar1 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar1 >> 5) * 8));
      }
      plVar6 = plVar5;
      if (((((char)*plVar7 == '\a') && (lVar4 != 0)) && (plVar7[1] != 0)) &&
         ((plVar7 = (longlong *)
                    Scaleform::GFx::CharacterHandle::ResolveCharacter
                              (plVar7[1],
                               *(undefined8 *)
                                (*(longlong *)(*(longlong *)(lVar4 + 0xe0) + 0x20) + 0x10)),
          plVar7 != (longlong *)0x0 && (*(char *)((longlong)plVar7 + 0x6a) < '\0')))) {
        plVar6 = plVar7;
      }
    }
    plVar7 = plVar5;
    if ((plVar6 != (longlong *)0x0) && ((*(ushort *)((longlong)plVar6 + 0x6a) >> 10 & 1) != 0)) {
      plVar7 = plVar6;
    }
    local_a8[0] = 0.0;
    local_a8[1] = 0.0;
    local_a8[2] = 0.0;
    local_a8[3] = 0.0;
    local_68 = 0.0;
    fStack_64 = 1.0;
    uStack_60 = 0;
    fStack_5c = 0.0;
    local_78 = 1.0;
    fStack_74 = 0.0;
    uStack_70 = 0;
    fStack_6c = 0.0;
    if (plVar7 != (longlong *)0x0) {
      if (plVar7 != plVar8) {
        local_98 = 1.0;
        fStack_94 = 0.0;
        uStack_90 = 0.0;
        local_88 = 0.0;
        fStack_84 = 1.0;
        uStack_80 = 0;
        fStack_7c = 0.0;
        (**(code **)(*plVar7 + 0x1e8))(0x3f800000,&local_98);
        Scaleform::Render::Matrix2x4<float>::SetInverse
                  ((Matrix2x4<float> *)&local_78,(Matrix2x4<float> *)&local_98);
        local_98 = 1.0;
        fStack_94 = 0.0;
        uStack_90 = 0.0;
        local_88 = 0.0;
        fStack_84 = 1.0;
        uStack_80 = 0;
        fStack_7c = 0.0;
        (**(code **)(*plVar8 + 0x1e8))(plVar8,&local_98);
        fVar9 = local_88 * fStack_74;
        fVar10 = local_88 * fStack_64;
        fVar12 = fStack_64 * fStack_7c;
        fVar11 = fStack_74 * fStack_7c;
        fStack_74 = local_78 * fStack_94 + fStack_84 * fStack_74;
        fStack_6c = fStack_6c + fVar11 + local_78 * uStack_90._4_4_;
        fStack_64 = local_68 * fStack_94 + fStack_84 * fStack_64;
        fStack_5c = fStack_5c + fVar12 + local_68 * uStack_90._4_4_;
        local_78 = fVar9 + local_98 * local_78;
        local_68 = fVar10 + local_98 * local_68;
      }
      uStack_60 = 0;
      uStack_70 = 0;
      local_58 = 0x3f800000;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      local_48 = 0;
      uStack_44 = 0x3f800000;
      uStack_40 = 0;
      uStack_3c = 0;
      pRVar3 = (Rect<float> *)(**(code **)(*plVar8 + 0x1f8))(plVar8,&local_98,&local_58);
      Scaleform::Render::Matrix2x4<float>::EncloseTransform
                ((Matrix2x4<float> *)&local_78,(Rect<float> *)local_a8,pRVar3);
    }
    plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
    lVar4 = (**(code **)(*plVar8 + 0x50))(plVar8,0x68);
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_1434148b0(lVar4,*(undefined8 *)(param_1 + 0x30));
    }
    plVar8 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
    local_98 = (float)CONCAT31(local_98._1_3_,3);
    local_res8[0] = 0;
    uStack_90 = (double)local_a8[0] * 0.05;
    (**(code **)(plVar5[4] + 0x50))
              (plVar5 + 4,plVar8,*(longlong *)(*(longlong *)(*plVar8 + 0x28) + 0x18) + 0x550,
               &local_98,local_res8);
    if (4 < (byte)local_98._0_1_) {
      FUN_143411150(&local_98);
    }
    local_98 = (float)CONCAT31(local_98._1_3_,3);
    local_res8[0] = 0;
    uStack_90 = (double)local_a8[2] * 0.05;
    (**(code **)(plVar5[4] + 0x50))
              (plVar5 + 4,plVar8,*(longlong *)(*(longlong *)(*plVar8 + 0x28) + 0x18) + 0x558,
               &local_98,local_res8);
    if (4 < (byte)local_98._0_1_) {
      FUN_143411150(&local_98);
    }
    local_98 = (float)CONCAT31(local_98._1_3_,3);
    local_res8[0] = 0;
    uStack_90 = (double)local_a8[1] * 0.05;
    (**(code **)(plVar5[4] + 0x50))
              (plVar5 + 4,plVar8,*(longlong *)(*(longlong *)(*plVar8 + 0x28) + 0x18) + 0x560,
               &local_98,local_res8);
    if (4 < (byte)local_98._0_1_) {
      FUN_143411150(&local_98);
    }
    local_98 = (float)CONCAT31(local_98._1_3_,3);
    local_res8[0] = 0;
    uStack_90 = (double)local_a8[3] * 0.05;
    (**(code **)(plVar5[4] + 0x50))
              (plVar5 + 4,plVar8,*(longlong *)(*(longlong *)(*plVar8 + 0x28) + 0x18) + 0x568,
               &local_98,local_res8);
    if (4 < (byte)local_98._0_1_) {
      FUN_143411150(&local_98);
    }
    FUN_143412aa0(*(undefined8 *)(param_1 + 8),plVar5);
    if ((*(uint *)(plVar5 + 3) & 0x3ffffff) != 0) {
      *(uint *)(plVar5 + 3) = *(uint *)(plVar5 + 3) - 1;
      FUN_1434a2b80(plVar5);
    }
  }
  return;
}



// FUNCTION 14342aec0 FUN_14342aec0 body=642 status=ok
// SIG undefined FUN_14342aec0(void)

void FUN_14342aec0(longlong param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  undefined1 local_res8 [8];
  float local_res10;
  float local_res14;
  float local_98;
  float local_94;
  undefined4 local_90;
  byte local_88 [32];
  byte local_68 [32];
  byte local_48 [8];
  double local_40;
  
  puVar2 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar2);
  *puVar2 = 0;
  lVar7 = 0;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar5 = (**(code **)(*plVar3 + 0x10))(plVar3);
    if (iVar5 == 2) {
      lVar8 = plVar3[3];
    }
    else {
      lVar8 = 0;
    }
  }
  if ((lVar8 != 0) && (0 < *(int *)(param_1 + 0x38))) {
    lVar4 = *(longlong *)(param_1 + 0x30);
    uVar1 = *(uint *)(param_1 + 0x3c);
    plVar3 = (longlong *)(lVar4 + 0xe8);
    if (uVar1 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
      lVar7 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
    }
    plVar6 = (longlong *)FUN_1434123a0(lVar7);
    if (plVar6 != (longlong *)0x0) {
      local_68[0] = 0;
      local_88[0] = 0;
      (**(code **)(*plVar6 + 0x58))
                (plVar6,plVar3,*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x540,local_68)
      ;
      (**(code **)(*plVar6 + 0x58))
                (plVar6,plVar3,*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x548,local_88)
      ;
      if (((byte)(local_68[0] - 3) < 2) && ((byte)(local_88[0] - 3) < 2)) {
        dVar9 = (double)FUN_143411a90(local_88,*(undefined8 *)(param_1 + 0x30));
        dVar10 = (double)FUN_143411a90(local_68,*(undefined8 *)(param_1 + 0x30));
        local_98 = (float)dVar10 * 20.0;
        local_90 = 0;
        local_94 = (float)dVar9 * 20.0;
        FUN_14336a740(lVar8,&local_res10,&local_98);
        local_48[0] = 3;
        local_res8[0] = 0;
        local_40 = (double)local_res10 * 0.05;
        (**(code **)(*plVar6 + 0x50))
                  (plVar6,plVar3,*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x540,
                   local_48,local_res8);
        if (4 < local_48[0]) {
          FUN_143411150(local_48);
        }
        local_48[0] = 3;
        local_res8[0] = 0;
        local_40 = (double)local_res14 * 0.05;
        (**(code **)(*plVar6 + 0x50))
                  (plVar6,plVar3,*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x548,
                   local_48,local_res8);
        if (4 < local_48[0]) {
          FUN_143411150(local_48);
        }
      }
      if (4 < local_88[0]) {
        FUN_143411150(local_88);
      }
      if (4 < local_68[0]) {
        FUN_143411150(local_68);
      }
    }
  }
  return;
}



// FUNCTION 14342b150 FUN_14342b150 body=643 status=ok
// SIG undefined FUN_14342b150(void)

void FUN_14342b150(longlong param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  undefined1 local_res8 [8];
  float local_res10;
  float local_res14;
  byte local_88 [32];
  byte local_68 [32];
  byte local_48 [8];
  double local_40;
  
  puVar2 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar2);
  *puVar2 = 0;
  lVar8 = 0;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar5 = (**(code **)(*plVar3 + 0x10))(plVar3);
    if (iVar5 == 2) {
      lVar9 = plVar3[3];
    }
    else {
      lVar9 = 0;
    }
  }
  if ((lVar9 != 0) && (0 < *(int *)(param_1 + 0x38))) {
    lVar4 = *(longlong *)(param_1 + 0x30);
    uVar1 = *(uint *)(param_1 + 0x3c);
    plVar3 = (longlong *)(lVar4 + 0xe8);
    if (uVar1 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
      lVar8 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
    }
    plVar6 = (longlong *)FUN_1434123a0(lVar8);
    if (plVar6 != (longlong *)0x0) {
      local_68[0] = 0;
      local_88[0] = 0;
      (**(code **)(*plVar6 + 0x58))
                (plVar6,plVar3,*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x540,local_68)
      ;
      (**(code **)(*plVar6 + 0x58))
                (plVar6,plVar3,*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x548,local_88)
      ;
      if (((byte)(local_68[0] - 3) < 2) && ((byte)(local_88[0] - 3) < 2)) {
        dVar10 = (double)FUN_143411a90(local_88,*(undefined8 *)(param_1 + 0x30));
        dVar11 = (double)FUN_143411a90(local_68,*(undefined8 *)(param_1 + 0x30));
        local_res14 = (float)dVar10 * 20.0;
        local_res10 = (float)dVar11 * 20.0;
        pfVar7 = (float *)FUN_14336ab40(lVar9,local_res8,&local_res10);
        local_48[0] = 3;
        local_res10 = *pfVar7;
        local_res14 = pfVar7[1];
        local_res8[0] = 0;
        local_40 = (double)local_res10 * 0.05;
        (**(code **)(*plVar6 + 0x50))
                  (plVar6,plVar3,*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x540,
                   local_48,local_res8);
        if (4 < local_48[0]) {
          FUN_143411150(local_48);
        }
        local_48[0] = 3;
        local_res8[0] = 0;
        local_40 = (double)local_res14 * 0.05;
        (**(code **)(*plVar6 + 0x50))
                  (plVar6,plVar3,*(longlong *)(*(longlong *)(*plVar3 + 0x28) + 0x18) + 0x548,
                   local_48,local_res8);
        if (4 < local_48[0]) {
          FUN_143411150(local_48);
        }
      }
      if (4 < local_88[0]) {
        FUN_143411150(local_88);
      }
      if (4 < local_68[0]) {
        FUN_143411150(local_68);
      }
    }
  }
  return;
}



// FUNCTION 14342b3e0 FUN_14342b3e0 body=1954 status=ok
// SIG undefined FUN_14342b3e0(void)

void FUN_14342b3e0(longlong param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  undefined8 uVar9;
  char *pcVar10;
  float *pfVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  longlong *plVar15;
  byte bVar16;
  float fVar17;
  float fVar18;
  float local_res8;
  float fStackX_c;
  float local_res10 [2];
  ulonglong in_stack_fffffffffffffe98;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  
  plVar15 = *(longlong **)(param_1 + 0x10);
  plVar13 = (longlong *)0x0;
  plVar12 = (longlong *)0x0;
  if (plVar15 == (longlong *)0x0) {
    plVar15 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar8 = (**(code **)(*plVar15 + 0x10))(plVar15);
    if (iVar8 == 2) {
      plVar15 = (longlong *)plVar15[3];
    }
    else {
      plVar15 = (longlong *)0x0;
    }
  }
  if (plVar15 != (longlong *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 8);
    FUN_143411150(puVar2);
    *puVar2 = 2;
    puVar2[8] = 0;
    local_d8 = 0x3f800000;
    uStack_d0 = 0;
    local_c8 = 0x3f80000000000000;
    uStack_c0 = 0;
    (**(code **)(*plVar15 + 0x1f0))(plVar15,&local_128,&local_d8);
    if ((local_120 != local_128) || (local_11c != local_124)) {
      if (*(int *)(param_1 + 0x38) < 2) {
        if (*(int *)(param_1 + 0x38) == 1) {
          pcVar10 = (char *)FUN_1434141c0(param_1,0);
          if (*pcVar10 == '\a') {
            plVar13 = (longlong *)
                      Scaleform::GFx::AS2::Value::ToCharacter
                                (pcVar10,*(undefined8 *)(param_1 + 0x30));
          }
          else {
            FUN_143411540(pcVar10,&local_res8,*(undefined8 *)(param_1 + 0x30),0xffffffff,
                          in_stack_fffffffffffffe98 & 0xffffffffffffff00);
            local_a8 = local_a8 & 0xffffffffffffff00;
            cVar6 = FUN_1434175f0(*(undefined8 *)(param_1 + 0x30),&local_res8,&local_a8,0,0,0,0);
            if (cVar6 != '\0') {
              if (((((byte)local_a8 == '\a') && (*(longlong *)(param_1 + 0x30) != 0)) &&
                  (plVar13 = plVar12, lStack_a0 != 0)) &&
                 ((plVar12 = (longlong *)
                             Scaleform::GFx::CharacterHandle::ResolveCharacter
                                       (lStack_a0,
                                        *(undefined8 *)
                                         (*(longlong *)
                                           (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0) +
                                           0x20) + 0x10)), plVar12 != (longlong *)0x0 &&
                  (*(char *)((longlong)plVar12 + 0x6a) < '\0')))) {
                plVar13 = plVar12;
              }
            }
            if (4 < (byte)local_a8) {
              FUN_143411150(&local_a8);
            }
            piVar1 = (int *)(CONCAT44(fStackX_c,local_res8) + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          if (plVar13 != (longlong *)0x0) {
            local_d8 = 0x3f800000;
            uStack_d0 = 0;
            local_c8 = 0x3f80000000000000;
            uStack_c0 = 0;
            (**(code **)(*plVar13 + 0x1f0))(plVar13,&local_78,&local_d8);
            if ((local_70 != local_78) || (local_6c != local_74)) {
              local_d8 = 0x3f800000;
              uStack_d0 = 0;
              local_c8 = 0x3f80000000000000;
              uStack_c0 = 0;
              (**(code **)(*plVar15 + 0x1e8))(plVar15,&local_d8);
              Scaleform::Render::Matrix2x4<float>::EncloseTransform
                        ((Matrix2x4<float> *)&local_d8,(Rect<float> *)&local_148,
                         (Rect<float> *)&local_128);
              local_d8 = 0x3f800000;
              uStack_d0 = 0;
              local_c8 = 0x3f80000000000000;
              uStack_c0 = 0;
              (**(code **)(*plVar13 + 0x1e8))(plVar13,&local_d8);
              Scaleform::Render::Matrix2x4<float>::EncloseTransform
                        ((Matrix2x4<float> *)&local_d8,(Rect<float> *)&local_118,
                         (Rect<float> *)&local_78);
              if ((fStack_13c < local_118._4_4_) ||
                 (((uStack_110._4_4_ < fStack_144 || ((float)uStack_110 < local_148)) ||
                  (fStack_140 < (float)local_118)))) {
                uVar7 = 0;
              }
              else {
                uVar7 = 1;
              }
              puVar2 = *(undefined1 **)(param_1 + 8);
              FUN_143411150(puVar2);
              *puVar2 = 2;
              puVar2[8] = uVar7;
            }
          }
        }
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x30);
        uVar14 = *(int *)(param_1 + 0x3c) - 1;
        bVar16 = false;
        plVar12 = plVar13;
        if (uVar14 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                            (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
          plVar12 = (longlong *)
                    ((ulonglong)(uVar14 & 0x1f) * 0x20 +
                    *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar14 >> 5) * 8));
        }
        dVar4 = (double)FUN_143411a90(plVar12);
        lVar3 = *(longlong *)(param_1 + 0x30);
        uVar14 = *(uint *)(param_1 + 0x3c);
        if (uVar14 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                            (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
          plVar13 = (longlong *)
                    ((ulonglong)(uVar14 & 0x1f) * 0x20 +
                    *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar14 >> 5) * 8));
        }
        dVar5 = (double)FUN_143411a90(plVar13);
        fVar18 = (float)dVar4 * 20.0;
        fVar17 = (float)dVar5 * 20.0;
        if (2 < *(int *)(param_1 + 0x38)) {
          uVar9 = FUN_1434141c0(param_1,2);
          cVar6 = FUN_143411fd0(uVar9,*(undefined8 *)(param_1 + 0x30));
          bVar16 = cVar6 != '\0';
        }
        if (3 < *(int *)(param_1 + 0x38)) {
          uVar9 = FUN_1434141c0(param_1,3);
          cVar6 = FUN_143411fd0(uVar9,*(undefined8 *)(param_1 + 0x30));
          bVar16 = bVar16 | -(cVar6 != '\0') & 2U;
        }
        lVar3 = *(longlong *)(plVar15[4] + 0x10);
        if ((lVar3 == 0) || (cVar6 = FUN_143367890(plVar15,1), cVar6 == '\0')) {
          local_148 = 1.0;
          fStack_144 = 0.0;
          fStack_140 = 0.0;
          fStack_13c = 0.0;
          local_138 = 0;
          uStack_134 = 0x3f800000;
          uStack_130 = 0;
          uStack_12c = 0;
          FUN_14336a6d0(plVar15,&local_148);
          uStack_110 = CONCAT44(fStack_13c,fStack_140);
          local_108 = CONCAT44(uStack_134,local_138);
          uStack_100 = CONCAT44(uStack_12c,uStack_130);
          local_118 = CONCAT44(fStack_144,local_148);
          Scaleform::Render::Matrix2x4<float>::SetInverse
                    ((Matrix2x4<float> *)&local_118,(Matrix2x4<float> *)&local_148);
          local_res8 = local_118._4_4_ * fVar18 + (float)local_118 * fVar17 + uStack_110._4_4_;
          fStackX_c = local_108._4_4_ * fVar18 + (float)local_108 * fVar17 + uStack_100._4_4_;
          if ((*(byte *)((longlong)plVar15 + 0x6a) & 1) == 0) {
            if (((local_120 < local_res8) || (local_res8 < local_128)) ||
               ((local_11c < fStackX_c || (fStackX_c < local_124)))) {
              puVar2 = *(undefined1 **)(param_1 + 8);
              FUN_143411150(puVar2);
              *puVar2 = 2;
              puVar2[8] = 0;
              return;
            }
            if ((bVar16 & 1) == 0) {
              puVar2 = *(undefined1 **)(param_1 + 8);
              FUN_143411150(puVar2);
              *puVar2 = 2;
              puVar2[8] = 1;
              return;
            }
          }
          pfVar11 = &local_res8;
        }
        else {
          fVar18 = (fVar18 - *(float *)(lVar3 + 0xec) * 20.0) /
                   (*(float *)(lVar3 + 0x10c) - *(float *)(lVar3 + 0x104));
          uStack_d0 = 0;
          uStack_c0 = 0;
          local_b8 = 0;
          uStack_110 = 0;
          uStack_100 = 0;
          local_f8 = 0;
          local_e8 = 0;
          local_d8 = 0x3f800000;
          local_c8 = 0x3f80000000000000;
          uStack_b0 = 0x3f800000;
          local_118 = 0x3f800000;
          local_108 = 0x3f80000000000000;
          uStack_f0 = 0x3f800000;
          uStack_e0 = 0x3f80000000000000;
          fVar17 = (fVar17 - *(float *)(lVar3 + 0xe8) * 20.0) /
                   (*(float *)(lVar3 + 0x108) - *(float *)(lVar3 + 0x100));
          *(float *)(lVar3 + 0x144) = -((fVar18 + fVar18) - 1.0);
          *(float *)(lVar3 + 0x140) = (fVar17 + fVar17) - 1.0;
          cVar6 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_118,0);
          if (cVar6 != '\0') {
            *(undefined8 *)(lVar3 + 0x150) = local_118;
            *(undefined8 *)(lVar3 + 0x158) = uStack_110;
            *(undefined8 *)(lVar3 + 0x160) = local_108;
            *(undefined8 *)(lVar3 + 0x168) = uStack_100;
            *(undefined4 *)(lVar3 + 0x170) = (undefined4)local_f8;
            *(undefined4 *)(lVar3 + 0x174) = local_f8._4_4_;
            *(undefined4 *)(lVar3 + 0x178) = (undefined4)uStack_f0;
            *(undefined4 *)(lVar3 + 0x17c) = uStack_f0._4_4_;
            *(undefined8 *)(lVar3 + 0x180) = local_e8;
            *(undefined8 *)(lVar3 + 0x188) = uStack_e0;
          }
          cVar6 = (**(code **)(*plVar15 + 0x48))(plVar15,&local_d8,0);
          if (cVar6 != '\0') {
            *(undefined8 *)(lVar3 + 400) = local_d8;
            *(undefined8 *)(lVar3 + 0x198) = uStack_d0;
            *(undefined8 *)(lVar3 + 0x1a0) = local_c8;
            *(undefined8 *)(lVar3 + 0x1a8) = uStack_c0;
            *(undefined4 *)(lVar3 + 0x1b0) = (undefined4)local_b8;
            *(undefined4 *)(lVar3 + 0x1b4) = local_b8._4_4_;
            *(undefined4 *)(lVar3 + 0x1b8) = (undefined4)uStack_b0;
            *(undefined4 *)(lVar3 + 0x1bc) = uStack_b0._4_4_;
          }
          local_a8 = 0x3f800000;
          local_98 = 0x3f80000000000000;
          uStack_80 = 0x3f800000;
          lStack_a0 = 0;
          uStack_90 = 0;
          local_88 = 0;
          FUN_14336a5a0(plVar15,&local_a8);
          *(ulonglong *)(lVar3 + 0x1c0) = local_a8;
          *(longlong *)(lVar3 + 0x1c8) = lStack_a0;
          *(undefined4 *)(lVar3 + 0x1d0) = (undefined4)local_98;
          *(undefined4 *)(lVar3 + 0x1d4) = local_98._4_4_;
          *(undefined4 *)(lVar3 + 0x1d8) = (undefined4)uStack_90;
          *(undefined4 *)(lVar3 + 0x1dc) = uStack_90._4_4_;
          *(undefined4 *)(lVar3 + 0x1e0) = (undefined4)local_88;
          *(undefined4 *)(lVar3 + 0x1e4) = local_88._4_4_;
          *(undefined4 *)(lVar3 + 0x1e8) = (undefined4)uStack_80;
          *(undefined4 *)(lVar3 + 0x1ec) = uStack_80._4_4_;
          Scaleform::Render::ScreenToWorld::GetWorldPoint((float *)(lVar3 + 0x140),local_res10);
          pfVar11 = local_res10;
        }
        uVar7 = (**(code **)(*plVar15 + 0x200))(plVar15,pfVar11,bVar16);
        puVar2 = *(undefined1 **)(param_1 + 8);
        FUN_143411150(puVar2);
        *puVar2 = 2;
        puVar2[8] = uVar7;
      }
    }
  }
  return;
}



// FUNCTION 14342bb90 FUN_14342bb90 body=1062 status=ok
// SIG undefined FUN_14342bb90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14342bb90(longlong param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong lVar3;
  double dVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  RefCountNTSImpl *this;
  char *pcVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong local_res8;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  RefCountImpl *local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  RefCountImpl *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_48 [32];
  
  puVar2 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar2);
  *puVar2 = 0;
  lVar13 = 0;
  plVar14 = *(longlong **)(param_1 + 0x10);
  if (plVar14 == (longlong *)0x0) {
    plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar7 = (**(code **)(*plVar14 + 0x10))(plVar14);
    if (iVar7 == 2) {
      plVar14 = (longlong *)plVar14[3];
    }
    else {
      plVar14 = (longlong *)0x0;
    }
  }
  if (plVar14 == (longlong *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 0x38) < 2) {
    return;
  }
  uVar6 = FUN_14336b320(plVar14);
  if (uVar6 < 8) {
    return;
  }
  lVar10 = *(longlong *)(param_1 + 0x30);
  uVar6 = *(uint *)(param_1 + 0x3c);
  uVar12 = (ulonglong)uVar6;
  if (uVar6 <= (uint)(*(int *)(lVar10 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar10 + 8) - *(longlong *)(lVar10 + 0x10) >> 5))) {
    uVar12 = (ulonglong)(uVar6 >> 5);
    lVar13 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
             *(longlong *)(*(longlong *)(lVar10 + 0x28) + uVar12 * 8);
  }
  lVar13 = FUN_143412120(lVar13);
  if (lVar13 == 0) {
LAB_14342bf4a:
    puVar8 = (undefined8 *)Scaleform::GFx::DisplayObject::GetName(plVar14,&local_res8);
    pcVar11 = "%s.attachBitmap() failed - the argument is not a BitmapData.";
  }
  else {
    *(uint *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + 1U & 0x8fffffff;
    iVar7 = (**(code **)(*(longlong *)(lVar13 + 0x20) + 0x10))();
    if (iVar7 != 0x1a) goto LAB_14342bf4a;
    lVar10 = *(longlong *)(lVar13 + 0x68);
    if (lVar10 != 0) {
      uVar9 = FUN_1434141c0(param_1,1);
      dVar4 = (double)FUN_143411a90(uVar9,*(undefined8 *)(param_1 + 0x30));
      local_e8 = (RefCountImpl *)0x0;
      local_e0 = 0;
      local_c8 = 0xc0000;
      local_d8 = 1;
      local_c4 = 0x100;
      local_d0 = 0;
      local_128 = _DAT_1467ccfd0;
      uStack_120 = uRam00000001467ccfd8;
      local_dc = (int)dVar4 + 0x4000;
      local_108 = _DAT_14621c810;
      uStack_100 = _DAT_14621c818;
      local_118 = _DAT_1467ccfe0;
      uStack_114 = uRam00000001467ccfe4;
      uStack_110 = uRam00000001467ccfe8;
      uStack_10c = uRam00000001467ccfec;
      local_f8 = DAT_14621c820;
      uStack_f4 = DAT_14621c824;
      uStack_f0 = DAT_14621c828;
      uStack_ec = DAT_14621c82c;
      if (local_dc < 0x7efffffe) {
        if (*(int *)(param_1 + 0x38) < 4) {
          uVar12 = uVar12 & 0xffffffffffffff00;
        }
        else {
          uVar9 = FUN_1434141c0(param_1,3);
          bVar5 = FUN_143411fd0(uVar9,*(undefined8 *)(param_1 + 0x30));
          uVar12 = (ulonglong)bVar5;
        }
        lVar3 = *(longlong *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0) + 0x20) + 0x10);
        uVar9 = *(undefined8 *)(lVar3 + 0x18);
        lVar10 = FUN_1432e4290(lVar3,lVar10,uVar12,&DAT_145af3922,0);
        if (lVar10 != 0) {
          Scaleform::GFx::MovieDataDef::LoadTaskData::SetExtMovieDef
                    (*(undefined8 *)(*(longlong *)(*(longlong *)(lVar10 + 0x70) + 0x18) + 0x40),
                     *(undefined8 *)(lVar13 + 0x70));
          local_res8 = CONCAT44(local_res8._4_4_,0x10001);
          this = (RefCountNTSImpl *)
                 FUN_143437ae0(uVar9,*(undefined8 *)(*(longlong *)(lVar10 + 0x70) + 0x18),lVar10,
                               plVar14,&local_res8,1);
          if (this != (RefCountNTSImpl *)0x0) {
            puVar8 = (undefined8 *)FUN_1432bfaf0(local_48);
            local_b8 = *puVar8;
            uStack_b0 = puVar8[1];
            local_a8 = puVar8[2];
            uStack_a0 = puVar8[3];
            local_88 = 0;
            uStack_84 = 0x3f800000;
            uStack_80 = 0;
            uStack_7c = 0;
            local_98 = 0x3f800000;
            uStack_94 = 0;
            uStack_90 = 0;
            uStack_8c = 0;
            local_78 = (RefCountImpl *)0x0;
            local_70 = 0;
            local_58 = 0x40000;
            local_6c = 1;
            local_68 = 1;
            local_54 = 0x100;
            local_60 = 0;
            local_res8 = *(longlong *)
                          (*(longlong *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28) + 0x18) +
                          0x138);
            *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
            Scaleform::GFx::InteractiveObject::AddToPlayList(this);
            FUN_1434a1710(this);
            (**(code **)(*(longlong *)this + 0x3b8))(this,&local_b8,&local_res8,0,0,1,0,0,0);
            FUN_1433702b0(plVar14,&local_128,this,&local_res8);
            (**(code **)(*plVar14 + 0x1a8))(plVar14,0);
            piVar1 = (int *)(local_res8 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            if (local_78 != (RefCountImpl *)0x0) {
              Scaleform::RefCountImpl::Release(local_78);
            }
            Scaleform::RefCountNTSImpl::Release(this);
          }
          FUN_1432de450(lVar10);
        }
      }
      else {
        puVar8 = (undefined8 *)Scaleform::GFx::DisplayObject::GetName(plVar14,&local_res8);
        FUN_1434a1590(plVar14 + 3,"%s.attachBitmap() failed - depth (%d) must be >= 0",
                      *(undefined8 *)*puVar8,local_dc);
        piVar1 = (int *)(local_res8 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      if (local_e8 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_e8);
      }
      goto LAB_14342bf81;
    }
    puVar8 = (undefined8 *)Scaleform::GFx::DisplayObject::GetName(plVar14,&local_res8);
    pcVar11 = "%s.attachBitmap() failed - no image set in BitmapData.";
  }
  FUN_1434a1590(plVar14 + 3,pcVar11,*(undefined8 *)*puVar8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
LAB_14342bf81:
  if ((lVar13 != 0) && ((*(uint *)(lVar13 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar13 + 0x18) = *(uint *)(lVar13 + 0x18) - 1;
    FUN_1434a2b80(lVar13);
  }
  return;
}



// FUNCTION 14342bfc0 FUN_14342bfc0 body=940 status=ok
// SIG undefined FUN_14342bfc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14342bfc0(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  double dVar5;
  undefined8 *puVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  char *pcVar13;
  ulonglong uVar14;
  RefCountNTSImpl *pRVar15;
  longlong *plVar16;
  RefCountNTSImpl *pRVar17;
  undefined8 *local_res8;
  ulonglong in_stack_ffffffffffffff08;
  longlong *local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  RefCountImpl *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  longlong *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar3 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar3);
  *puVar3 = 0;
  pRVar17 = (RefCountNTSImpl *)0x0;
  plVar16 = *(longlong **)(param_1 + 0x10);
  if (plVar16 == (longlong *)0x0) {
    plVar16 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar8 = (**(code **)(*plVar16 + 0x10))(plVar16);
    if (iVar8 == 2) {
      plVar16 = (longlong *)plVar16[3];
    }
    else {
      plVar16 = (longlong *)0x0;
    }
  }
  if (plVar16 == (longlong *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 0x38) < 3) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
  uVar9 = *(uint *)(param_1 + 0x3c);
  pRVar15 = pRVar17;
  if (uVar9 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
    pRVar15 = (RefCountNTSImpl *)
              ((ulonglong)(uVar9 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar9 >> 5) * 8));
  }
  in_stack_ffffffffffffff08 = in_stack_ffffffffffffff08 & 0xffffffffffffff00;
  FUN_143411540(pRVar15,&local_res8,lVar4,0xffffffff,in_stack_ffffffffffffff08);
  puVar6 = local_res8;
  local_c8 = (longlong *)0x0;
  lStack_c0 = 0;
  FUN_1432c2fb0(&local_res8,*local_res8);
  uVar12 = *(undefined8 *)(plVar16[4] + 0x10);
  uVar10 = (**(code **)(*plVar16 + 0x218))(plVar16);
  cVar7 = FUN_1432ec590(uVar12,uVar10,&local_c8,&local_res8);
  uVar14 = (ulonglong)local_res8 & 0xfffffffffffffffc;
  iVar8 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar14 + 8,0xffffffff);
  if (iVar8 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar14);
  }
  if (cVar7 == '\0') {
    uVar12 = *puVar6;
    puVar11 = (undefined8 *)Scaleform::GFx::DisplayObject::GetName(plVar16,&local_res8);
    pcVar13 = "%s.attachMovie() failed - export name \"%s\" is not found.";
  }
  else {
    uVar9 = (**(code **)(*local_c8 + 0x10))();
    if ((uVar9 >> 0xf & 1) != 0) {
      uStack_38 = 0;
      local_48 = local_c8;
      local_40 = *(undefined8 *)(lStack_c0 + 0x50);
      uVar2 = (undefined4)local_c8[3];
      uVar12 = FUN_1434141c0(param_1,2);
      dVar5 = (double)FUN_143411a90(uVar12,*(undefined8 *)(param_1 + 0x30));
      local_78 = (RefCountImpl *)0x0;
      local_58 = 0xc0000;
      local_54 = 0x100;
      local_60 = 0;
      local_b8 = _DAT_1467ccfd0;
      uStack_b0 = uRam00000001467ccfd8;
      local_6c = (int)dVar5 + 0x4000;
      local_98 = _DAT_14621c810;
      uStack_90 = _DAT_14621c818;
      local_88 = _DAT_14621c820;
      uStack_80 = _DAT_14621c828;
      local_70 = 0;
      local_a8 = _DAT_1467ccfe0;
      uStack_a4 = uRam00000001467ccfe4;
      uStack_a0 = uRam00000001467ccfe8;
      uStack_9c = uRam00000001467ccfec;
      local_68 = uVar2;
      if (local_6c < 0x7efffffe) {
        pRVar15 = pRVar17;
        if (*(int *)(param_1 + 0x38) == 4) {
          uVar12 = FUN_1434141c0(param_1,3);
          pRVar15 = (RefCountNTSImpl *)FUN_1434123a0(uVar12,*(undefined8 *)(param_1 + 0x30));
        }
        uVar12 = FUN_1434141c0(param_1,1);
        FUN_143411540(uVar12,&local_res8,*(undefined8 *)(param_1 + 0x30),0xffffffff,
                      in_stack_ffffffffffffff08 & 0xffffffffffffff00);
        pRVar15 = (RefCountNTSImpl *)
                  (**(code **)(*plVar16 + 0x3b8))
                            (plVar16,&local_b8,&local_res8,0,pRVar15,0xffffffff,1,&local_48,0);
        if (pRVar15 != (RefCountNTSImpl *)0x0) {
          *(int *)(pRVar15 + 8) = *(int *)(pRVar15 + 8) + 1;
        }
        piVar1 = (int *)(local_res8 + 3);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (pRVar15 != (RefCountNTSImpl *)0x0) {
          (**(code **)(*(longlong *)pRVar15 + 0x1a8))(pRVar15,0);
          uVar9 = FUN_14336b320(plVar16);
          if (5 < uVar9) {
            if ((char)pRVar15[0x6a] < '\0') {
              pRVar17 = pRVar15;
            }
            Scaleform::GFx::AS2::Value::SetAsCharacter(*(undefined8 *)(param_1 + 8),pRVar17);
          }
          Scaleform::RefCountNTSImpl::Release(pRVar15);
        }
      }
      else {
        uVar12 = *puVar6;
        puVar11 = (undefined8 *)Scaleform::GFx::DisplayObject::GetName(plVar16,&local_res8);
        FUN_1434a1590(plVar16 + 3,"%s.attachMovie(\"%s\") failed - depth (%d) must be >= 0",
                      *(undefined8 *)*puVar11,uVar12,local_6c);
        piVar1 = (int *)(local_res8 + 3);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      if (local_78 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_78);
      }
      goto LAB_14342c339;
    }
    uVar12 = *puVar6;
    puVar11 = (undefined8 *)Scaleform::GFx::DisplayObject::GetName(plVar16,&local_res8);
    pcVar13 = "%s.attachMovie() failed - \"%s\" is not a movieclip.";
  }
  FUN_1434a1590(plVar16 + 3,pcVar13,*(undefined8 *)*puVar11,uVar12);
  piVar1 = (int *)(local_res8 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
LAB_14342c339:
  if (local_c8 != (longlong *)0x0) {
    FUN_1432de450();
  }
  piVar1 = (int *)(puVar6 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(puVar6);
  }
  return;
}



// FUNCTION 14342c380 FUN_14342c380 body=475 status=ok
// SIG undefined FUN_14342c380(void)

void FUN_14342c380(longlong param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  RefCountNTSImpl *this;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  longlong local_res8;
  
  puVar2 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar2);
  *puVar2 = 0;
  lVar7 = 0;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
    if (iVar4 == 2) {
      lVar12 = plVar3[3];
    }
    else {
      lVar12 = 0;
    }
  }
  if ((lVar12 != 0) && (1 < *(int *)(param_1 + 0x38))) {
    lVar5 = lVar7;
    if (*(int *)(param_1 + 0x38) == 3) {
      lVar5 = *(longlong *)(param_1 + 0x30);
      uVar9 = *(int *)(param_1 + 0x3c) - 2;
      lVar11 = lVar7;
      if (uVar9 <= (uint)(*(int *)(lVar5 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar5 + 8) - *(longlong *)(lVar5 + 0x10) >> 5))) {
        lVar11 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
      }
      lVar5 = FUN_1434123a0(lVar11);
    }
    lVar11 = *(longlong *)(param_1 + 0x30);
    uVar9 = *(uint *)(param_1 + 0x3c);
    uVar10 = uVar9 - 1;
    lVar8 = lVar7;
    if (uVar10 <= (uint)(*(int *)(lVar11 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar11 + 8) - *(longlong *)(lVar11 + 0x10) >> 5))) {
      lVar8 = (ulonglong)(uVar10 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar11 + 0x28) + (ulonglong)(uVar10 >> 5) * 8);
    }
    if (uVar9 <= (uint)(*(int *)(lVar11 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar11 + 8) - *(longlong *)(lVar11 + 0x10) >> 5))) {
      lVar7 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar11 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
    }
    FUN_143411540(lVar7,&local_res8,lVar11,0xffffffff,0);
    uVar6 = (**(code **)(*(longlong *)(lVar12 + (ulonglong)*(byte *)(lVar12 + 0x6d) * 4) + 8))
                      (lVar12 + (ulonglong)*(byte *)(lVar12 + 0x6d) * 4);
    dVar13 = (double)FUN_143411a90(lVar8,*(undefined8 *)(param_1 + 0x30));
    this = (RefCountNTSImpl *)FUN_143421ca0(uVar6,&local_res8,(int)dVar13 + 0x4000,lVar5);
    if (this != (RefCountNTSImpl *)0x0) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    }
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    uVar9 = FUN_14336b320(lVar12);
    if (5 < uVar9) {
      Scaleform::GFx::AS2::Value::SetAsCharacter(*(undefined8 *)(param_1 + 8),this);
    }
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  return;
}



// FUNCTION 14342c570 FUN_14342c570 body=137 status=ok
// SIG undefined FUN_14342c570(void)

void FUN_14342c570(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong local_res8 [4];
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (iVar3 == 2) {
      lVar5 = plVar2[3];
    }
    else {
      lVar5 = 0;
    }
  }
  if (lVar5 != 0) {
    if (0x3fff < *(int *)(lVar5 + 0x2c)) {
      FUN_14336ee70(lVar5);
      return;
    }
    puVar4 = (undefined8 *)Scaleform::GFx::DisplayObject::GetName(lVar5,local_res8);
    FUN_1434a1590(lVar5 + 0x18,"%s.removeMovieClip() failed - depth must be >= 0",
                  *(undefined8 *)*puVar4);
    piVar1 = (int *)(local_res8[0] + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 14342c600 FUN_14342c600 body=494 status=ok
// SIG undefined FUN_14342c600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14342c600(longlong param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong lVar3;
  double dVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  RefCountNTSImpl *pRVar8;
  uint uVar9;
  RefCountNTSImpl *pRVar10;
  longlong local_res8;
  ulonglong in_stack_ffffffffffffff58;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  RefCountImpl *local_38;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined2 local_14;
  
  puVar2 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar2);
  *puVar2 = 0;
  plVar7 = *(longlong **)(param_1 + 0x10);
  if (plVar7 == (longlong *)0x0) {
    plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar5 = (**(code **)(*plVar7 + 0x10))(plVar7);
    if (iVar5 == 2) {
      plVar7 = (longlong *)plVar7[3];
    }
    else {
      plVar7 = (longlong *)0x0;
    }
  }
  if ((plVar7 != (longlong *)0x0) && (1 < *(int *)(param_1 + 0x38))) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar9 = *(int *)(param_1 + 0x3c) - 1;
    pRVar10 = (RefCountNTSImpl *)0x0;
    if (uVar9 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      pRVar10 = (RefCountNTSImpl *)
                ((ulonglong)(uVar9 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar9 >> 5) * 8));
    }
    dVar4 = (double)FUN_143411a90(pRVar10);
    local_38 = (RefCountImpl *)0x0;
    local_18 = 0xc0000;
    local_28 = 0x10001;
    local_14 = 0x100;
    local_20 = 0;
    local_78 = _DAT_1467ccfd0;
    uStack_70 = uRam00000001467ccfd8;
    local_2c = (int)dVar4 + 0x4000;
    local_58 = _DAT_14621c810;
    uStack_50 = _DAT_14621c818;
    local_48 = _DAT_14621c820;
    uStack_40 = _DAT_14621c828;
    local_30 = 0;
    local_68 = _DAT_1467ccfe0;
    uStack_64 = uRam00000001467ccfe4;
    uStack_60 = uRam00000001467ccfe8;
    uStack_5c = uRam00000001467ccfec;
    if (local_2c < 0x7efffffe) {
      uVar6 = FUN_1434141c0(param_1,0);
      FUN_143411540(uVar6,&local_res8,*(undefined8 *)(param_1 + 0x30),0xffffffff,
                    in_stack_ffffffffffffff58 & 0xffffffffffffff00);
      pRVar10 = (RefCountNTSImpl *)
                (**(code **)(*plVar7 + 0x3b8))(plVar7,&local_78,&local_res8,0,0,0xffffffff,1,0,0);
      if (pRVar10 != (RefCountNTSImpl *)0x0) {
        *(int *)(pRVar10 + 8) = *(int *)(pRVar10 + 8) + 1;
      }
      piVar1 = (int *)(local_res8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (pRVar10 != (RefCountNTSImpl *)0x0) {
        (**(code **)(*(longlong *)pRVar10 + 0x1a8))(pRVar10,0);
        pRVar8 = (RefCountNTSImpl *)0x0;
        if ((char)pRVar10[0x6a] < '\0') {
          pRVar8 = pRVar10;
        }
        Scaleform::GFx::AS2::Value::SetAsCharacter(*(undefined8 *)(param_1 + 8),pRVar8);
        Scaleform::RefCountNTSImpl::Release(pRVar10);
      }
      if (local_38 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_38);
      }
    }
  }
  return;
}



// FUNCTION 14342c800 FUN_14342c800 body=682 status=ok
// SIG undefined FUN_14342c800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14342c800(longlong param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong lVar3;
  double dVar4;
  int iVar5;
  undefined8 uVar6;
  RefCountNTSImpl *pRVar7;
  longlong *plVar8;
  uint uVar9;
  RefCountNTSImpl *pRVar10;
  RefCountNTSImpl *pRVar11;
  longlong local_res8;
  ulonglong in_stack_ffffffffffffff48;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  RefCountImpl *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined2 local_24;
  
  puVar2 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar2);
  *puVar2 = 0;
  pRVar7 = (RefCountNTSImpl *)0x0;
  plVar8 = *(longlong **)(param_1 + 0x10);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar5 = (**(code **)(*plVar8 + 0x10))(plVar8);
    if (iVar5 == 2) {
      plVar8 = (longlong *)plVar8[3];
    }
    else {
      plVar8 = (longlong *)0x0;
    }
  }
  if ((plVar8 != (longlong *)0x0) && (5 < *(int *)(param_1 + 0x38))) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    uVar9 = *(int *)(param_1 + 0x3c) - 1;
    pRVar10 = pRVar7;
    if (uVar9 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
      pRVar10 = (RefCountNTSImpl *)
                ((ulonglong)(uVar9 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar9 >> 5) * 8));
    }
    dVar4 = (double)FUN_143411a90(pRVar10);
    local_48 = (RefCountImpl *)0x0;
    local_28 = 0xc0000;
    local_38 = 0x10002;
    local_24 = 0x100;
    local_30 = 0;
    local_88 = _DAT_1467ccfd0;
    uStack_80 = uRam00000001467ccfd8;
    local_3c = (int)dVar4 + 0x4000;
    local_68 = _DAT_14621c810;
    uStack_60 = _DAT_14621c818;
    local_58 = _DAT_14621c820;
    uStack_50 = _DAT_14621c828;
    local_40 = 0;
    local_78 = _DAT_1467ccfe0;
    uStack_74 = uRam00000001467ccfe4;
    uStack_70 = uRam00000001467ccfe8;
    uStack_6c = uRam00000001467ccfec;
    if (local_3c < 0x7efffffe) {
      uVar6 = FUN_1434141c0(param_1,0);
      FUN_143411540(uVar6,&local_res8,*(undefined8 *)(param_1 + 0x30),0xffffffff,
                    in_stack_ffffffffffffff48 & 0xffffffffffffff00);
      pRVar10 = (RefCountNTSImpl *)
                (**(code **)(*plVar8 + 0x3b8))(plVar8,&local_88,&local_res8,0,0,0xffffffff,1,0,0);
      if (pRVar10 != (RefCountNTSImpl *)0x0) {
        *(int *)(pRVar10 + 8) = *(int *)(pRVar10 + 8) + 1;
      }
      piVar1 = (int *)(local_res8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (pRVar10 != (RefCountNTSImpl *)0x0) {
        (**(code **)(*(longlong *)pRVar10 + 0x1a8))(pRVar10,0);
        pRVar11 = pRVar7;
        if ((char)pRVar10[0x6a] < '\0') {
          pRVar11 = pRVar10;
        }
        if (pRVar11 != (RefCountNTSImpl *)0x0) {
          pRVar7 = (RefCountNTSImpl *)
                   (**(code **)(*(longlong *)(pRVar11 + (ulonglong)(byte)pRVar11[0x6d] * 4) + 8))
                             (pRVar11 + (ulonglong)(byte)pRVar11[0x6d] * 4);
        }
        lVar3 = *(longlong *)pRVar7;
        uVar6 = FUN_1434141c0(param_1,2);
        (**(code **)(lVar3 + 0x110))(pRVar7,0,uVar6,0);
        lVar3 = *(longlong *)pRVar7;
        uVar6 = FUN_1434141c0(param_1,3);
        (**(code **)(lVar3 + 0x110))(pRVar7,1,uVar6);
        lVar3 = *(longlong *)pRVar7;
        uVar6 = FUN_1434141c0(param_1,4);
        (**(code **)(lVar3 + 0x110))(pRVar7,8,uVar6);
        lVar3 = *(longlong *)pRVar7;
        uVar6 = FUN_1434141c0(param_1,5);
        (**(code **)(lVar3 + 0x110))(pRVar7,9,uVar6);
        Scaleform::GFx::AS2::Value::SetAsCharacter(*(undefined8 *)(param_1 + 8),pRVar11);
        Scaleform::RefCountNTSImpl::Release(pRVar10);
      }
      if (local_48 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_48);
      }
    }
  }
  return;
}



// FUNCTION 14342cab0 SpriteGetNextHighestDepth body=142 status=ok
// SIG undefined SpriteGetNextHighestDepth(void)

void Scaleform::GFx::AS2::AvmSprite::SpriteGetNextHighestDepth(longlong param_1)

{
  longlong *plVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 == (longlong *)0x0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
    if (iVar3 == 2) {
      lVar5 = plVar1[3];
    }
    else {
      lVar5 = 0;
    }
  }
  if (lVar5 != 0) {
    iVar4 = DisplayList::GetLargestDepthInUse(lVar5 + 0xd8);
    pbVar2 = *(byte **)(param_1 + 8);
    iVar3 = iVar4 + -0x3fff;
    if (iVar4 + -0x3fff < 0) {
      iVar3 = 0;
    }
    if (4 < *pbVar2) {
      FUN_143411150(pbVar2);
    }
    *(int *)(pbVar2 + 8) = iVar3;
    *pbVar2 = 4;
  }
  return;
}



// FUNCTION 14342cb50 FUN_14342cb50 body=226 status=ok
// SIG undefined FUN_14342cb50(void)

void FUN_14342cb50(longlong param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  
  puVar2 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar2);
  *puVar2 = 0;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
    if (iVar4 == 2) {
      lVar5 = plVar3[3];
    }
    else {
      lVar5 = 0;
    }
  }
  if ((lVar5 != 0) && (0 < *(int *)(param_1 + 0x38))) {
    lVar6 = *(longlong *)(param_1 + 0x30);
    uVar1 = *(uint *)(param_1 + 0x3c);
    lVar7 = 0;
    if (uVar1 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
      lVar7 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
    }
    dVar8 = (double)FUN_143411a90(lVar7);
    lVar5 = Scaleform::GFx::DisplayObjContainer::GetCharacterAtDepth(lVar5,(int)dVar8 + 0x4000);
    if (lVar5 != 0) {
      lVar6 = 0;
      if (*(char *)(lVar5 + 0x6a) < '\0') {
        lVar6 = lVar5;
      }
      Scaleform::GFx::AS2::Value::SetAsCharacter(*(undefined8 *)(param_1 + 8),lVar6);
    }
  }
  return;
}



// FUNCTION 14342cc40 SpriteGetTextSnapshot body=187 status=ok
// SIG undefined SpriteGetTextSnapshot(void)

void Scaleform::GFx::AS2::AvmSprite::SpriteGetTextSnapshot(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar4 = 0;
  if (plVar1 == (longlong *)0x0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
    if (iVar2 == 2) {
      lVar5 = plVar1[3];
    }
    else {
      lVar5 = 0;
    }
  }
  if (lVar5 != 0) {
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x30);
    lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x90,0);
    if (lVar3 != 0) {
      lVar4 = FUN_143476220(lVar3,*(undefined8 *)(param_1 + 0x30));
    }
    FUN_1433845a0(lVar5,lVar4 + 0x68);
    FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar4);
    if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
      *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
      FUN_1434a2b80(lVar4);
    }
  }
  return;
}



// FUNCTION 14342cd10 FUN_14342cd10 body=113 status=ok
// SIG undefined FUN_14342cd10(void)

void FUN_14342cd10(longlong param_1)

{
  longlong *plVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 == (longlong *)0x0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar3 = (**(code **)(*plVar1 + 0x10))();
    if (iVar3 == 2) {
      lVar5 = plVar1[3];
    }
    else {
      lVar5 = 0;
    }
  }
  if (lVar5 != 0) {
    uVar4 = FUN_14336b320();
    pbVar2 = *(byte **)(param_1 + 8);
    if (4 < *pbVar2) {
      FUN_143411150(pbVar2);
    }
    *(undefined4 *)(pbVar2 + 8) = uVar4;
    *pbVar2 = 4;
  }
  return;
}



// FUNCTION 14342cd90 FUN_14342cd90 body=814 status=ok
// SIG undefined FUN_14342cd90(void)

void FUN_14342cd90(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  double dVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  longlong local_78 [2];
  undefined2 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined4 local_4c;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar8 = 0;
  if (plVar1 == (longlong *)0x0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar5 = (**(code **)(*plVar1 + 0x10))(plVar1);
    if (iVar5 == 2) {
      lVar7 = plVar1[3];
    }
    else {
      lVar7 = 0;
    }
  }
  if (lVar7 != 0) {
    uVar4 = 0;
    local_68 = 0;
    local_78[0] = 0;
    local_78[1] = 0;
    local_64 = 0;
    local_5c = 0;
    local_54 = 0;
    local_4c = 0xffffffff;
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar2 = *(longlong *)(param_1 + 0x30);
      uVar9 = *(uint *)(param_1 + 0x3c);
      lVar10 = lVar8;
      if (uVar9 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
        lVar10 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
      }
      uVar4 = FUN_143411fd0(lVar10);
      if (4 < *(int *)(param_1 + 0x38)) {
        lVar2 = *(longlong *)(param_1 + 0x30);
        local_68 = CONCAT11(1,(undefined1)local_68);
        uVar9 = *(int *)(param_1 + 0x3c) - 1;
        lVar10 = lVar8;
        if (uVar9 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
          lVar10 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
                   *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
        }
        dVar3 = (double)FUN_143411a90(lVar10);
        lVar2 = *(longlong *)(param_1 + 0x30);
        uVar9 = *(int *)(param_1 + 0x3c) - 2;
        fVar15 = (float)dVar3 * 20.0;
        lVar10 = lVar8;
        if (uVar9 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
          lVar10 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
                   *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
        }
        dVar3 = (double)FUN_143411a90(lVar10);
        lVar2 = *(longlong *)(param_1 + 0x30);
        uVar9 = *(int *)(param_1 + 0x3c) - 3;
        fVar12 = (float)dVar3 * 20.0;
        lVar10 = lVar8;
        if (uVar9 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
          lVar10 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
                   *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
        }
        dVar3 = (double)FUN_143411a90(lVar10);
        lVar2 = *(longlong *)(param_1 + 0x30);
        uVar9 = *(int *)(param_1 + 0x3c) - 4;
        fVar13 = (float)dVar3 * 20.0;
        if (uVar9 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
          lVar8 = (ulonglong)(uVar9 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar9 >> 5) * 8);
        }
        dVar3 = (double)FUN_143411a90(lVar8);
        fVar11 = (float)dVar3 * 20.0;
        fVar14 = fVar13;
        if (fVar13 < fVar15) {
          fVar14 = fVar15;
          fVar15 = fVar13;
        }
        fVar13 = fVar11;
        if (fVar11 < fVar12) {
          fVar13 = fVar12;
          fVar12 = fVar11;
        }
        local_64 = CONCAT44(fVar12,fVar15);
        local_5c = CONCAT44(fVar13,fVar14);
      }
    }
    local_78[0] = lVar7;
    FUN_1432e2050(local_78,uVar4,0);
    FUN_1432e39c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0x10),local_78);
    if (((*(uint *)(lVar7 + 0xb8) >> 0x15 & 1) == 0) || ((*(uint *)(lVar7 + 0xb8) >> 0x16 & 1) != 0)
       ) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
    iVar5 = FUN_143384210(lVar7,uVar6);
    if (iVar5 == -1) {
      *(uint *)(lVar7 + 0xb8) = *(uint *)(lVar7 + 0xb8) | 0x400000;
    }
    else if (iVar5 == 1) {
      FUN_14336e960(lVar7);
    }
  }
  return;
}



// FUNCTION 14342d0d0 SpriteStopDrag body=146 status=ok
// SIG undefined SpriteStopDrag(void)

void Scaleform::GFx::AS2::AvmSprite::SpriteStopDrag(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 == (longlong *)0x0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
    if (iVar2 == 2) {
      lVar4 = plVar1[3];
    }
    else {
      lVar4 = 0;
    }
  }
  if (lVar4 != 0) {
    FUN_1432e3ba0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0x10),0);
    if (((*(uint *)(lVar4 + 0xb8) >> 0x15 & 1) == 0) || ((*(uint *)(lVar4 + 0xb8) >> 0x16 & 1) != 0)
       ) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    iVar2 = FUN_143384210(lVar4,uVar3);
    if (iVar2 == -1) {
      *(uint *)(lVar4 + 0xb8) = *(uint *)(lVar4 + 0xb8) | 0x400000;
    }
    else if (iVar2 == 1) {
      FUN_14336e960(lVar4);
      return;
    }
  }
  return;
}



// FUNCTION 14342d170 FUN_14342d170 body=294 status=ok
// SIG undefined FUN_14342d170(void)

void FUN_14342d170(longlong param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char *pcVar6;
  longlong lVar7;
  char *pcVar8;
  
  puVar2 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar2);
  *puVar2 = 0;
  pcVar6 = (char *)0x0;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar5 = (**(code **)(*plVar3 + 0x10))(plVar3);
    if (iVar5 == 2) {
      lVar7 = plVar3[3];
    }
    else {
      lVar7 = 0;
    }
  }
  if (lVar7 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x38) < 1) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x3c);
  pcVar8 = pcVar6;
  if (uVar1 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
    pcVar8 = (char *)((ulonglong)(uVar1 & 0x1f) * 0x20 +
                     *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar1 >> 5) * 8));
  }
  if (*pcVar8 != '\x01') {
    pcVar8 = pcVar6;
    if (uVar1 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
      pcVar8 = (char *)((ulonglong)(uVar1 & 0x1f) * 0x20 +
                       *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar1 >> 5) * 8));
    }
    pcVar8 = (char *)Scaleform::GFx::AS2::Value::ToCharacter(pcVar8,lVar4);
    if (pcVar8 != (char *)0x0) {
      if ((*(ushort *)(pcVar8 + 0x6a) >> 10 & 1) != 0) {
        pcVar6 = pcVar8;
      }
      goto LAB_14342d27b;
    }
  }
  pcVar6 = (char *)0x0;
LAB_14342d27b:
  FUN_14336cc90(lVar7,pcVar6,1);
  return;
}



// FUNCTION 14342d2a0 FUN_14342d2a0 body=471 status=ok
// SIG undefined FUN_14342d2a0(void)

void FUN_14342d2a0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined8 *local_res8;
  ulonglong in_stack_ffffffffffffffe8;
  
  plVar5 = *(longlong **)(param_1 + 0x10);
  if (plVar5 == (longlong *)0x0) {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar7 = (**(code **)(*plVar5 + 0x10))(plVar5);
    if (iVar7 == 2) {
      lVar8 = plVar5[3];
    }
    else {
      lVar8 = 0;
    }
  }
  if (lVar8 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x38) < 1) {
    return;
  }
  iVar7 = 0;
  if (*(int *)(param_1 + 0x38) < 2) goto LAB_14342d3e1;
  lVar4 = *(longlong *)(param_1 + 0x30);
  lVar9 = 0;
  uVar6 = *(int *)(param_1 + 0x3c) - 1;
  if (uVar6 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
    lVar9 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
  }
  in_stack_ffffffffffffffe8 = in_stack_ffffffffffffffe8 & 0xffffffffffffff00;
  FUN_143411540(lVar9,&local_res8,lVar4,0xffffffff,in_stack_ffffffffffffffe8);
  plVar5 = (longlong *)Scaleform::GFx::ASConstString::ToLowerNode(&local_res8);
  *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
  piVar1 = (int *)(local_res8 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  lVar4 = 0;
  do {
    lVar9 = lVar4;
    if (*(char *)(*plVar5 + lVar9) != (&DAT_145b122a4)[lVar9]) {
      lVar4 = 0;
      goto LAB_14342d3b2;
    }
    lVar4 = lVar9 + 1;
  } while (lVar9 + 1 != 4);
  iVar7 = (int)lVar9 + -2;
  goto LAB_14342d3d3;
  while (lVar4 = lVar9 + 1, lVar9 + 1 != 5) {
LAB_14342d3b2:
    lVar9 = lVar4;
    cVar3 = *(char *)(*plVar5 + lVar9);
    bVar10 = cVar3 == (&DAT_145b122a8)[lVar9];
    if (!bVar10) goto LAB_14342d3cb;
  }
  bVar10 = cVar3 == (&DAT_145b122a8)[lVar9];
LAB_14342d3cb:
  iVar7 = 0;
  if (bVar10) {
    iVar7 = 2;
  }
LAB_14342d3d3:
  plVar2 = plVar5 + 3;
  *(int *)plVar2 = (int)*plVar2 + -1;
  if ((int)*plVar2 == 0) {
    FUN_14335f920(plVar5);
  }
LAB_14342d3e1:
  lVar4 = *(longlong *)(param_1 + 0x30);
  lVar9 = 0;
  uVar6 = *(uint *)(param_1 + 0x3c);
  if (uVar6 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
    lVar9 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
            *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
  }
  FUN_143411540(lVar9,&local_res8,lVar4,0xffffffff,in_stack_ffffffffffffffe8 & 0xffffffffffffff00);
  FUN_143438ae0(*(undefined8 *)(lVar8 + 0x20),lVar8,*local_res8,iVar7,0);
  piVar1 = (int *)(local_res8 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(local_res8);
  }
  return;
}



// FUNCTION 14342d480 FUN_14342d480 body=92 status=ok
// SIG undefined FUN_14342d480(void)

void FUN_14342d480(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 == (longlong *)0x0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar2 = (**(code **)(*plVar1 + 0x10))();
    if (iVar2 == 2) {
      lVar3 = plVar1[3];
    }
    else {
      lVar3 = 0;
    }
  }
  if (lVar3 != 0) {
    FUN_143438ae0(*(undefined8 *)(lVar3 + 0x20),lVar3,&DAT_145af3922,0,0);
  }
  return;
}



// FUNCTION 14342d4f0 FUN_14342d4f0 body=469 status=ok
// SIG undefined FUN_14342d4f0(void)

void FUN_14342d4f0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined8 *local_res8;
  
  plVar6 = *(longlong **)(param_1 + 0x10);
  uVar10 = 0;
  if (plVar6 == (longlong *)0x0) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar5 = (**(code **)(*plVar6 + 0x10))(plVar6);
    if (iVar5 == 2) {
      lVar9 = plVar6[3];
    }
    else {
      lVar9 = 0;
    }
  }
  if (lVar9 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x38) < 1) {
    return;
  }
  uVar12 = uVar10;
  if (*(int *)(param_1 + 0x38) < 2) goto LAB_14342d640;
  lVar4 = *(longlong *)(param_1 + 0x30);
  uVar8 = *(int *)(param_1 + 0x3c) - 1;
  uVar11 = uVar10;
  if (uVar8 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
    uVar11 = (ulonglong)(uVar8 & 0x1f) * 0x20 +
             *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar8 >> 5) * 8);
  }
  FUN_143411540(uVar11,&local_res8,lVar4,0xffffffff,0);
  plVar6 = (longlong *)Scaleform::GFx::ASConstString::ToLowerNode(&local_res8);
  *(int *)(plVar6 + 3) = (int)plVar6[3] + 1;
  piVar1 = (int *)(local_res8 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar11 = uVar10;
  do {
    uVar7 = uVar11;
    uVar11 = uVar10;
    if (*(char *)(*plVar6 + uVar7) != (&DAT_145b122a4)[uVar7]) goto LAB_14342d610;
    uVar11 = uVar7 + 1;
  } while (uVar7 + 1 != 4);
  uVar12 = (ulonglong)((int)uVar7 - 2);
  goto LAB_14342d632;
  while (uVar11 = uVar7 + 1, uVar7 + 1 != 5) {
LAB_14342d610:
    uVar7 = uVar11;
    cVar3 = *(char *)(*plVar6 + uVar7);
    bVar13 = cVar3 == (&DAT_145b122a8)[uVar7];
    if (!bVar13) goto LAB_14342d629;
  }
  bVar13 = cVar3 == (&DAT_145b122a8)[uVar7];
LAB_14342d629:
  if (bVar13) {
    uVar12 = 2;
  }
LAB_14342d632:
  plVar2 = plVar6 + 3;
  *(int *)plVar2 = (int)*plVar2 + -1;
  if ((int)*plVar2 == 0) {
    FUN_14335f920(plVar6);
  }
LAB_14342d640:
  lVar4 = *(longlong *)(param_1 + 0x30);
  uVar8 = *(uint *)(param_1 + 0x3c);
  if (uVar8 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
    uVar10 = (ulonglong)(uVar8 & 0x1f) * 0x20 +
             *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar8 >> 5) * 8);
  }
  FUN_143411540(uVar10,&local_res8,lVar4,0xffffffff,0);
  FUN_143439060(*(undefined8 *)(lVar9 + 0x20),lVar9,*local_res8,uVar12);
  piVar1 = (int *)(local_res8 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(local_res8);
  }
  return;
}



// FUNCTION 14342d6d0 FUN_14342d6d0 body=119 status=ok
// SIG undefined FUN_14342d6d0(void)

void FUN_14342d6d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar1 = (**(code **)(*plVar4 + 0x10))(plVar4);
    if (iVar1 == 2) {
      plVar4 = (longlong *)plVar4[3];
    }
    else {
      plVar4 = (longlong *)0x0;
    }
  }
  if (plVar4 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar4 + 0x2a0))(plVar4);
    if (lVar2 != 0) {
      uVar3 = (**(code **)(*plVar4 + 0x2a0))(plVar4);
      FUN_14337e870(uVar3);
    }
    Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(plVar4);
    FUN_1433830d0(plVar4);
    return;
  }
  return;
}



// FUNCTION 14342d750 FUN_14342d750 body=362 status=ok
// SIG undefined FUN_14342d750(void)

void FUN_14342d750(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar8 = 0;
  if (plVar1 == (longlong *)0x0) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar4 = (**(code **)(*plVar1 + 0x10))(plVar1);
    if (iVar4 == 2) {
      lVar6 = plVar1[3];
    }
    else {
      lVar6 = 0;
    }
  }
  if (lVar6 != 0) {
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar2 = *(longlong *)(param_1 + 0x30);
      uVar5 = *(uint *)(param_1 + 0x3c);
      lVar9 = lVar8;
      if (uVar5 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                         (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
        lVar9 = (ulonglong)(uVar5 & 0x1f) * 0x20 +
                *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar5 >> 5) * 8);
      }
      uVar5 = FUN_143411f00(lVar9);
      uVar7 = uVar5 | 0xff000000;
      if (1 < *(int *)(param_1 + 0x38)) {
        lVar2 = *(longlong *)(param_1 + 0x30);
        uVar7 = *(int *)(param_1 + 0x3c) - 1;
        if (uVar7 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                           (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
          lVar8 = (ulonglong)(uVar7 & 0x1f) * 0x20 +
                  *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar7 >> 5) * 8);
        }
        dVar3 = (double)FUN_143411a90(lVar8);
        fVar11 = ((float)dVar3 * 255.0) / 100.0;
        if (255.0 <= fVar11) {
          fVar11 = 255.0;
        }
        fVar10 = 0.0;
        if (0.0 <= fVar11) {
          fVar10 = fVar11;
        }
        uVar7 = (int)(longlong)fVar10 << 0x18 | uVar5 & 0xffffff;
      }
      FUN_143429ae0(lVar6 + (ulonglong)*(byte *)(lVar6 + 0x6d) * 4,uVar7);
      return;
    }
    FUN_1434298d0(lVar6 + (ulonglong)*(byte *)(lVar6 + 0x6d) * 4);
  }
  return;
}



// FUNCTION 14342d8c0 FUN_14342d8c0 body=171 status=ok
// SIG undefined FUN_14342d8c0(void)

void FUN_14342d8c0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (iVar3 == 2) {
      lVar5 = plVar2[3];
    }
    else {
      lVar5 = 0;
    }
  }
  if (lVar5 != 0) {
    lVar1 = lVar5 + (ulonglong)*(byte *)(lVar5 + 0x6d) * 4;
    uVar4 = (**(code **)(**(longlong **)(lVar5 + 0x20 + (ulonglong)*(byte *)(lVar5 + 0x6d) * 4) +
                        0x2a0))();
    FUN_1433830d0(*(undefined8 *)(lVar1 + 0x20));
    Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(lVar1 + 0x20));
    FUN_14337e300(uVar4,1);
    lVar5 = FUN_14337eae0(uVar4);
    FUN_14337e4d0(uVar4);
    if (lVar5 != 0) {
      FUN_14342ed90(param_1,lVar5);
    }
  }
  return;
}



// FUNCTION 14342d980 FUN_14342d980 body=568 status=ok
// SIG undefined FUN_14342d980(void)

void FUN_14342d980(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  lVar11 = 0;
  if (plVar2 == (longlong *)0x0) {
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar6 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (iVar6 == 2) {
      lVar10 = plVar2[3];
    }
    else {
      lVar10 = 0;
    }
  }
  if (lVar10 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x38) < 1) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x3c);
  if (uVar1 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
    lVar11 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
             *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
  }
  lVar11 = FUN_143412120(lVar11);
  if (lVar11 == 0) {
    return;
  }
  *(uint *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1U & 0x8fffffff;
  iVar6 = (**(code **)(*(longlong *)(lVar11 + 0x20) + 0x10))();
  if ((iVar6 != 0x1a) || (lVar3 = *(longlong *)(lVar11 + 0x68), lVar3 == 0)) goto LAB_14342db8a;
  local_48 = 0x3f800000;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  local_38 = 0;
  uStack_34 = 0x3f800000;
  uStack_30 = 0;
  uStack_2c = 0;
  if (*(int *)(param_1 + 0x38) < 2) {
LAB_14342db6b:
    iVar6 = 0x42;
  }
  else {
    uVar7 = FUN_1434141c0(param_1,1);
    lVar8 = FUN_143412120(uVar7,*(undefined8 *)(param_1 + 0x30));
    if ((lVar8 != 0) &&
       (iVar6 = (**(code **)(*(longlong *)(lVar8 + 0x20) + 0x10))(lVar8 + 0x20), iVar6 == 0xf)) {
      puVar9 = (undefined4 *)FUN_14344c900(lVar8,local_28,*(undefined8 *)(param_1 + 0x30));
      local_48 = *puVar9;
      uStack_44 = puVar9[1];
      uStack_40 = puVar9[2];
      uStack_3c = puVar9[3];
      local_38 = puVar9[4];
      uStack_34 = puVar9[5];
      uStack_30 = puVar9[6];
      uStack_2c = puVar9[7];
    }
    if (*(int *)(param_1 + 0x38) < 3) goto LAB_14342db6b;
    uVar7 = FUN_1434141c0(param_1,2);
    cVar4 = FUN_143411fd0(uVar7,*(undefined8 *)(param_1 + 0x30));
    if (*(int *)(param_1 + 0x38) < 4) {
LAB_14342db61:
      iVar6 = 0x43;
      if (cVar4 != '\0') goto LAB_14342db6b;
    }
    else {
      uVar7 = FUN_1434141c0(param_1,3);
      cVar5 = FUN_143411fd0(uVar7,*(undefined8 *)(param_1 + 0x30));
      if (cVar5 == '\0') goto LAB_14342db61;
      iVar6 = 0x41 - (uint)(cVar4 != '\0');
    }
  }
  FUN_143429b40(lVar10 + (ulonglong)*(byte *)(lVar10 + 0x6d) * 4,iVar6,lVar3,&local_48);
LAB_14342db8a:
  if ((*(uint *)(lVar11 + 0x18) & 0x3ffffff) != 0) {
    *(uint *)(lVar11 + 0x18) = *(uint *)(lVar11 + 0x18) - 1;
    FUN_1434a2b80(lVar11);
  }
  return;
}



// FUNCTION 14342dbc0 FUN_14342dbc0 body=160 status=ok
// SIG undefined FUN_14342dbc0(void)

void FUN_14342dbc0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (iVar3 == 2) {
      lVar5 = plVar2[3];
    }
    else {
      lVar5 = 0;
    }
  }
  if (lVar5 != 0) {
    lVar1 = lVar5 + (ulonglong)*(byte *)(lVar5 + 0x6d) * 4;
    uVar4 = (**(code **)(**(longlong **)(lVar5 + 0x20 + (ulonglong)*(byte *)(lVar5 + 0x6d) * 4) +
                        0x2a0))();
    FUN_1433830d0(*(undefined8 *)(lVar1 + 0x20));
    Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(lVar1 + 0x20));
    FUN_14337e300(uVar4,1);
    lVar5 = FUN_14337ec20(uVar4);
    if (lVar5 != 0) {
      FUN_14342ed90(param_1,lVar5);
    }
  }
  return;
}



// FUNCTION 14342dc70 FUN_14342dc70 body=132 status=ok
// SIG undefined FUN_14342dc70(void)

void FUN_14342dc70(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar3 = (**(code **)(*plVar2 + 0x10))();
    if (iVar3 == 2) {
      lVar5 = plVar2[3];
    }
    else {
      lVar5 = 0;
    }
  }
  if (lVar5 != 0) {
    lVar1 = lVar5 + (ulonglong)*(byte *)(lVar5 + 0x6d) * 4;
    uVar4 = (**(code **)(**(longlong **)(lVar5 + 0x20 + (ulonglong)*(byte *)(lVar5 + 0x6d) * 4) +
                        0x2a0))();
    FUN_1433830d0(*(undefined8 *)(lVar1 + 0x20));
    Scaleform::GFx::DisplayObjectBase::InvalidateHitResult(*(undefined8 *)(lVar1 + 0x20));
    FUN_14337e300(uVar4,1);
    FUN_14337ee10(uVar4);
  }
  return;
}



// FUNCTION 14342dd00 FUN_14342dd00 body=1246 status=ok
// SIG undefined FUN_14342dd00(void)

void FUN_14342dd00(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  char *_Str1;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  longlong *local_res10;
  uint in_stack_ffffffffffffff88;
  
  plVar13 = *(longlong **)(param_1 + 0x10);
  uVar12 = 0;
  if (plVar13 == (longlong *)0x0) {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar19 = (**(code **)(*plVar13 + 0x10))(plVar13);
    if (iVar19 == 2) {
      lVar18 = plVar13[3];
    }
    else {
      lVar18 = 0;
    }
  }
  if (lVar18 == 0) {
    return;
  }
  iVar19 = 0;
  if (*(int *)(param_1 + 0x38) < 1) {
    FUN_143429940(lVar18 + (ulonglong)*(byte *)(lVar18 + 0x6d) * 4);
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  uVar14 = *(uint *)(param_1 + 0x3c);
  uVar15 = uVar12;
  if (uVar14 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                      (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
    uVar15 = (ulonglong)(uVar14 & 0x1f) * 0x20 +
             *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar14 >> 5) * 8);
  }
  dVar4 = (double)FUN_143411a90(uVar15);
  fVar23 = 3.0;
  uVar7 = 0;
  uVar14 = 0xff000000;
  iVar17 = 0;
  uVar15 = uVar12;
  iVar9 = iVar19;
  if (*(int *)(param_1 + 0x38) < 2) goto LAB_14342e15d;
  lVar3 = *(longlong *)(param_1 + 0x30);
  uVar14 = *(int *)(param_1 + 0x3c) - 1;
  uVar16 = uVar12;
  if (uVar14 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                      (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
    uVar16 = (ulonglong)(uVar14 & 0x1f) * 0x20 +
             *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar14 >> 5) * 8);
  }
  uVar8 = FUN_143411f00(uVar16);
  uVar14 = uVar8 | 0xff000000;
  iVar9 = iVar17;
  if (*(int *)(param_1 + 0x38) < 3) goto LAB_14342e15d;
  lVar3 = *(longlong *)(param_1 + 0x30);
  uVar14 = *(int *)(param_1 + 0x3c) - 2;
  uVar16 = uVar12;
  if (uVar14 <= (uint)(*(int *)(lVar3 + 0x30) * 0x20 + -0x20 +
                      (int)(*(longlong *)(lVar3 + 8) - *(longlong *)(lVar3 + 0x10) >> 5))) {
    uVar16 = (ulonglong)(uVar14 & 0x1f) * 0x20 +
             *(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar14 >> 5) * 8);
  }
  dVar5 = (double)FUN_143411a90(uVar16);
  fVar22 = ((float)dVar5 * 255.0) / 100.0;
  if (255.0 <= fVar22) {
    fVar22 = 255.0;
  }
  fVar21 = 0.0;
  if (0.0 <= fVar22) {
    fVar21 = fVar22;
  }
  uVar14 = (int)(longlong)fVar21 << 0x18 | uVar8 & 0xffffff;
  if (*(int *)(param_1 + 0x38) < 4) goto LAB_14342e15d;
  uVar10 = FUN_1434141c0(param_1,3);
  uVar7 = FUN_143411fd0(uVar10,*(undefined8 *)(param_1 + 0x30));
  uVar15 = 0;
  if (*(int *)(param_1 + 0x38) < 5) goto LAB_14342e15d;
  uVar10 = FUN_1434141c0(param_1,4);
  in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffff00;
  FUN_143411540(uVar10,&local_res10,*(undefined8 *)(param_1 + 0x30),0xffffffff,
                in_stack_ffffffffffffff88);
  plVar13 = local_res10;
  _Str1 = (char *)*local_res10;
  uVar15 = uVar12;
  do {
    uVar16 = uVar15;
    if (_Str1[uVar16] != (&DAT_145b122f4)[uVar16]) {
      iVar19 = _guard_xfg_dispatch_icall_nop(_Str1,"vertical");
      if (iVar19 == 0) {
        iVar19 = 4;
      }
      else {
        iVar9 = _guard_xfg_dispatch_icall_nop(_Str1,"horizontal");
        iVar19 = 0;
        if (iVar9 == 0) {
          iVar19 = 2;
        }
      }
      goto LAB_14342df7c;
    }
    uVar15 = uVar16 + 1;
  } while (uVar16 + 1 != 5);
  iVar19 = (int)uVar16 + 2;
LAB_14342df7c:
  iVar9 = 0;
  if (5 < *(int *)(param_1 + 0x38)) {
    uVar10 = FUN_1434141c0(param_1,5);
    in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffff00;
    FUN_143411540(uVar10,&local_res10,*(undefined8 *)(param_1 + 0x30),0xffffffff,
                  in_stack_ffffffffffffff88);
    plVar6 = local_res10;
    *(int *)(local_res10 + 3) = (int)local_res10[3] + 1;
    plVar1 = plVar13 + 3;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      FUN_14335f920(plVar13);
    }
    plVar13 = plVar6 + 3;
    *(int *)plVar13 = (int)*plVar13 + -1;
    if ((int)*plVar13 == 0) {
      FUN_14335f920(plVar6);
    }
    uVar15 = uVar12;
    do {
      uVar11 = uVar15 + 1;
      uVar16 = uVar12;
      if (*(char *)(*plVar6 + uVar15) != (&DAT_145b122f4)[uVar15]) goto LAB_14342e020;
      uVar15 = uVar11;
    } while (uVar11 != 5);
    iVar9 = 0x140;
    goto LAB_14342e042;
  }
  goto LAB_14342e13f;
  while (uVar16 = uVar15 + 1, uVar15 + 1 != 7) {
LAB_14342e020:
    uVar15 = uVar16;
    cVar2 = *(char *)(*plVar6 + uVar15);
    bVar20 = cVar2 == "square"[uVar15];
    if (!bVar20) goto LAB_14342e039;
  }
  bVar20 = cVar2 == "square"[uVar15];
LAB_14342e039:
  iVar9 = 0;
  if (bVar20) {
    iVar9 = 0x280;
  }
LAB_14342e042:
  plVar13 = plVar6;
  if (6 < *(int *)(param_1 + 0x38)) {
    uVar10 = FUN_1434141c0(param_1,6);
    FUN_143411540(uVar10,&local_res10,*(undefined8 *)(param_1 + 0x30),0xffffffff,
                  in_stack_ffffffffffffff88 & 0xffffff00);
    *(int *)(local_res10 + 3) = (int)local_res10[3] + 1;
    plVar13 = plVar6 + 3;
    *(int *)plVar13 = (int)*plVar13 + -1;
    if ((int)*plVar13 == 0) {
      FUN_14335f920(plVar6);
    }
    plVar13 = local_res10 + 3;
    *(int *)plVar13 = (int)*plVar13 + -1;
    if ((int)*plVar13 == 0) {
      FUN_14335f920(local_res10);
    }
    uVar15 = uVar12;
    do {
      uVar16 = uVar15;
      uVar15 = uVar12;
      if (*(char *)(*local_res10 + uVar16) != "miter"[uVar16]) goto LAB_14342e0e0;
      uVar15 = uVar16 + 1;
    } while (uVar16 + 1 != 6);
    uVar12 = (ulonglong)((int)uVar16 + 0x1b);
    goto LAB_14342e101;
  }
  goto LAB_14342e13f;
  while (uVar15 = uVar16 + 1, uVar16 + 1 != 6) {
LAB_14342e0e0:
    uVar16 = uVar15;
    cVar2 = *(char *)(*local_res10 + uVar16);
    bVar20 = cVar2 == "bevel"[uVar16];
    if (!bVar20) goto LAB_14342e0f9;
  }
  bVar20 = cVar2 == "bevel"[uVar16];
LAB_14342e0f9:
  if (bVar20) {
    uVar12 = 0x10;
  }
LAB_14342e101:
  plVar13 = local_res10;
  if (7 < *(int *)(param_1 + 0x38)) {
    uVar10 = FUN_1434141c0(param_1,7);
    dVar5 = (double)FUN_143411a90(uVar10,*(undefined8 *)(param_1 + 0x30));
    fVar22 = 1.0;
    if (1.0 <= (float)dVar5) {
      fVar22 = (float)dVar5;
    }
    fVar23 = 255.0;
    if (fVar22 <= 255.0) {
      fVar23 = fVar22;
    }
  }
LAB_14342e13f:
  plVar1 = plVar13 + 3;
  *(int *)plVar1 = (int)*plVar1 + -1;
  uVar15 = uVar12;
  if ((int)*plVar1 == 0) {
    FUN_14335f920(plVar13);
  }
LAB_14342e15d:
  uVar10 = (**(code **)(**(longlong **)(lVar18 + 0x20 + (ulonglong)*(byte *)(lVar18 + 0x6d) * 4) +
                       0x2a0))();
  FUN_14337f200(uVar10,(float)dVar4 * 20.0,uVar14,uVar7,iVar19,iVar9,(int)uVar15,fVar23);
  return;
}



// FUNCTION 14342e1f0 FUN_14342e1f0 body=279 status=ok
// SIG undefined FUN_14342e1f0(void)

void FUN_14342e1f0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar4 = 0;
  if (plVar1 == (longlong *)0x0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
    if (iVar3 == 2) {
      lVar5 = plVar1[3];
    }
    else {
      lVar5 = 0;
    }
  }
  if ((lVar5 != 0) && (1 < *(int *)(param_1 + 0x38))) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    uVar6 = *(uint *)(param_1 + 0x3c);
    lVar7 = lVar4;
    if (uVar6 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      lVar7 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
    }
    dVar8 = (double)FUN_143411a90(lVar7);
    lVar2 = *(longlong *)(param_1 + 0x30);
    uVar6 = *(int *)(param_1 + 0x3c) - 1;
    if (uVar6 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      lVar4 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
    }
    dVar9 = (double)FUN_143411a90(lVar4);
    FUN_143429c30(lVar5 + (ulonglong)*(byte *)(lVar5 + 0x6d) * 4,(float)dVar8,(float)dVar9);
  }
  return;
}



// FUNCTION 14342e310 FUN_14342e310 body=279 status=ok
// SIG undefined FUN_14342e310(void)

void FUN_14342e310(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar4 = 0;
  if (plVar1 == (longlong *)0x0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
    if (iVar3 == 2) {
      lVar5 = plVar1[3];
    }
    else {
      lVar5 = 0;
    }
  }
  if ((lVar5 != 0) && (1 < *(int *)(param_1 + 0x38))) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    uVar6 = *(uint *)(param_1 + 0x3c);
    lVar7 = lVar4;
    if (uVar6 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      lVar7 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
    }
    dVar8 = (double)FUN_143411a90(lVar7);
    lVar2 = *(longlong *)(param_1 + 0x30);
    uVar6 = *(int *)(param_1 + 0x3c) - 1;
    if (uVar6 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      lVar4 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
    }
    dVar9 = (double)FUN_143411a90(lVar4);
    FUN_143429cc0(lVar5 + (ulonglong)*(byte *)(lVar5 + 0x6d) * 4,(float)dVar8,(float)dVar9);
  }
  return;
}



// FUNCTION 14342e430 FUN_14342e430 body=478 status=ok
// SIG undefined FUN_14342e430(void)

void FUN_14342e430(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar4 = 0;
  if (plVar1 == (longlong *)0x0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  else {
    iVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
    if (iVar3 == 2) {
      lVar5 = plVar1[3];
    }
    else {
      lVar5 = 0;
    }
  }
  if ((lVar5 != 0) && (3 < *(int *)(param_1 + 0x38))) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    uVar6 = *(uint *)(param_1 + 0x3c);
    lVar7 = lVar4;
    if (uVar6 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      lVar7 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
    }
    dVar8 = (double)FUN_143411a90(lVar7);
    lVar2 = *(longlong *)(param_1 + 0x30);
    uVar6 = *(int *)(param_1 + 0x3c) - 1;
    lVar7 = lVar4;
    if (uVar6 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      lVar7 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
    }
    dVar9 = (double)FUN_143411a90(lVar7);
    lVar2 = *(longlong *)(param_1 + 0x30);
    uVar6 = *(int *)(param_1 + 0x3c) - 2;
    lVar7 = lVar4;
    if (uVar6 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      lVar7 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
    }
    dVar10 = (double)FUN_143411a90(lVar7);
    lVar2 = *(longlong *)(param_1 + 0x30);
    uVar6 = *(int *)(param_1 + 0x3c) - 3;
    if (uVar6 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      lVar4 = (ulonglong)(uVar6 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar6 >> 5) * 8);
    }
    dVar11 = (double)FUN_143411a90(lVar4);
    FUN_143429d30(lVar5 + (ulonglong)*(byte *)(lVar5 + 0x6d) * 4,(float)dVar8,(float)dVar9,
                  (float)dVar10,(float)dVar11);
  }
  return;
}



// FUNCTION 14342e620 FUN_14342e620 body=354 status=ok
// SIG undefined FUN_14342e620(void)

void FUN_14342e620(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  byte bVar9;
  longlong local_38;
  longlong lStack_30;
  byte local_28;
  
  plVar5 = *(longlong **)(param_1 + 0x10);
  iVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
  plVar8 = (longlong *)0x0;
  plVar5 = plVar5 + -1;
  if (iVar3 != 2) {
    plVar5 = plVar8;
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
  uVar1 = *(uint *)(param_1 + 0x3c);
  plVar7 = plVar8;
  if (uVar1 <= (uint)(*(int *)(lVar4 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar4 + 8) - *(longlong *)(lVar4 + 0x10) >> 5))) {
    plVar7 = (longlong *)
             ((ulonglong)(uVar1 & 0x1f) * 0x20 +
             *(longlong *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar1 >> 5) * 8));
  }
  if ((char)*plVar7 == '\b') {
    lVar4 = plVar7[1];
    bVar9 = 0;
    if (lVar4 != 0) {
      *(uint *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1U & 0x8fffffff;
    }
    lVar2 = plVar7[2];
    lVar6 = 0;
    if ((lVar2 != 0) && (bVar9 = (*(byte *)(plVar7 + 3) & 1) != 0, lVar6 = lVar2, !(bool)bVar9)) {
      *(uint *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1U & 0x8fffffff;
    }
  }
  else if ((char)*plVar7 == '\v') {
    FUN_143413f20(plVar7,&local_38);
    lVar4 = local_38;
    lVar6 = lStack_30;
    bVar9 = local_28;
  }
  else {
    local_38 = 0;
    lStack_30 = 0;
    lVar4 = 0;
    lVar6 = 0;
    bVar9 = 0;
  }
  plVar7 = (longlong *)(lVar4 + 0x20);
  if (lVar4 == 0) {
    plVar7 = plVar8;
  }
  FUN_143421c00(plVar5,plVar7);
  if ((((bVar9 & 2) == 0) && (lVar4 != 0)) && ((*(uint *)(lVar4 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) - 1;
    FUN_1434a2b80(lVar4);
  }
  if ((((bVar9 & 1) == 0) && (lVar6 != 0)) && ((*(uint *)(lVar6 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) - 1;
    FUN_1434a2b80(lVar6);
  }
  return;
}



// FUNCTION 14342e790 FUN_14342e790 body=1142 status=ok
// SIG undefined FUN_14342e790(void)

/* WARNING: Removing unreachable block (ram,0x00014342ea84) */
/* WARNING: Removing unreachable block (ram,0x00014342ea96) */

void FUN_14342e790(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong local_res8;
  ulonglong *local_res10;
  uint uStack_16c;
  longlong local_160;
  longlong lStack_158;
  byte local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  uint uStack_13c;
  undefined4 local_138;
  undefined8 local_128;
  undefined4 local_120;
  RefCountNTSImpl *local_118;
  RefCountNTSImpl *pRStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_fc;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_a8 [16];
  RefCountNTSImpl *local_98;
  RefCountNTSImpl *local_90;
  undefined1 local_70 [32];
  undefined1 local_50 [40];
  
  lVar6 = *(longlong *)(param_1 + 0x30);
  uVar2 = *(uint *)(param_1 + 0x3c);
  bVar8 = 0;
  lVar3 = *(longlong *)(lVar6 + 0xe8);
  plVar13 = (longlong *)0x0;
  local_150 = 0;
  local_160 = 0;
  lStack_158 = 0;
  plVar11 = plVar13;
  if (uVar2 <= (uint)(*(int *)(lVar6 + 0x30) * 0x20 + -0x20 +
                     (int)(*(longlong *)(lVar6 + 8) - *(longlong *)(lVar6 + 0x10) >> 5))) {
    plVar11 = (longlong *)
              ((ulonglong)(uVar2 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar2 >> 5) * 8));
  }
  FUN_143411540(plVar11,&local_res8,lVar6,0xffffffff,0);
  lVar6 = local_160;
  if (*(int *)(local_res8 + 0x20) == 0) goto LAB_14342eb7d;
  plVar11 = *(longlong **)(param_1 + 0x10);
  iVar5 = (**(code **)(*plVar11 + 0x10))(plVar11);
  plVar7 = plVar13;
  if (iVar5 == 2) {
    plVar7 = plVar11 + -1;
  }
  if (*(byte *)(*(longlong *)(param_1 + 0x30) + 0xf0) < 7) {
    local_res10 = &local_res8;
    if (*(longlong *)(local_res8 + 0x10) == 0) {
      FUN_14335f970(local_res8);
    }
    if (((*(longlong *)(lVar3 + 0x18) != 0) &&
        (lVar6 = FUN_143493ca0(lVar3 + 0x18,&local_res10,
                               (ulonglong)*(uint *)(local_res8 + 0x1c) &
                               *(ulonglong *)(*(longlong *)(lVar3 + 0x18) + 8)), -1 < lVar6)) &&
       (lVar6 = *(longlong *)(lVar3 + 0x18) + (lVar6 * 5 + 3) * 8, lVar6 != 0)) {
      plVar11 = (longlong *)(lVar6 + 8);
      goto LAB_14342e988;
    }
  }
  else {
    lVar6 = *(longlong *)(lVar3 + 0x18);
    if (lVar6 != 0) {
      uVar4 = *(ulonglong *)(lVar6 + 8);
      uVar12 = *(uint *)(local_res8 + 0x1c) & uVar4;
      lVar3 = uVar12 * 5 + 2;
      puVar10 = (ulonglong *)(lVar6 + lVar3 * 8);
      if ((*(longlong *)(lVar6 + lVar3 * 8) != -2) &&
         (uVar9 = uVar12, (*(uint *)(puVar10[1] + 0x1c) & uVar4) == uVar12)) {
        while (((*(uint *)(puVar10[1] + 0x1c) & uVar4) != uVar12 || (puVar10[1] != local_res8))) {
          uVar9 = *puVar10;
          if (uVar9 == 0xffffffffffffffff) goto code_r0x00014342e911;
          puVar10 = (ulonglong *)(lVar6 + uVar9 * 0x28 + 0x10);
        }
        if (-1 < (longlong)uVar9) {
          lVar6 = lVar6 + (uVar9 * 5 + 3) * 8;
          plVar11 = (longlong *)(lVar6 + 8);
          if (lVar6 == 0) {
            plVar11 = plVar13;
          }
          goto LAB_14342e988;
        }
      }
    }
code_r0x00014342e911:
    plVar11 = (longlong *)0x0;
LAB_14342e988:
    if (plVar11 != (longlong *)0x0) {
      FUN_143410a60(&local_160);
      lVar6 = local_160;
      plVar11 = (longlong *)(local_160 + 0x20);
      if (local_160 == 0) {
        plVar11 = plVar13;
      }
      FUN_143421c00(plVar7,plVar11);
      uStack_16c = uStack_16c & 0xffffff00;
      local_148 = 0x40000;
      uStack_144 = 0;
      uStack_140 = 0;
      uStack_13c = uStack_16c;
      local_138 = 0xff00;
      FUN_143495ed0(local_a8,plVar7[4],&local_148);
      FUN_143437000(local_a8,*(undefined8 *)(plVar7[4] + 0x20));
      FUN_1434976a0(local_50);
      FUN_14349ebc0(local_70);
      if (local_90 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(local_90);
      }
      if (local_98 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(local_98);
      }
      local_118 = (RefCountNTSImpl *)plVar7[4];
      if (local_118 != (RefCountNTSImpl *)0x0) {
        *(int *)(local_118 + 8) = *(int *)(local_118 + 8) + 1;
      }
      local_c0 = 0;
      local_c8 = 0;
      local_d0 = 0;
      local_e0 = 0;
      local_e8 = 0;
      local_f0 = 0;
      local_f8 = 0xff00;
      local_fc = 0;
      local_100 = 0;
      local_108 = 0;
      local_120 = 3;
      local_128 = 0;
      pRStack_110 = (RefCountNTSImpl *)0x0;
      FUN_143410a60(&local_f0,&local_160);
      local_b8 = 0;
      FUN_143437000(&local_128,*(undefined8 *)(plVar7[4] + 0x20));
      FUN_1434976a0(&local_d0);
      FUN_14349ebc0(&local_f0);
      if (pRStack_110 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(pRStack_110);
      }
      bVar8 = local_150;
      if (local_118 != (RefCountNTSImpl *)0x0) {
        Scaleform::RefCountNTSImpl::Release(local_118);
        bVar8 = local_150;
      }
      goto LAB_14342eb7d;
    }
  }
  uStack_16c = uStack_16c & 0xffffff00;
  local_148 = 0x40000;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_13c = uStack_16c;
  local_138 = 0xff00;
  FUN_143495ed0(local_a8,plVar7[4],&local_148);
  FUN_143437000(local_a8,*(undefined8 *)(plVar7[4] + 0x20));
  FUN_1434976a0(local_50);
  FUN_14349ebc0(local_70);
  if (local_90 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(local_90);
  }
  lVar6 = local_160;
  if (local_98 != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release(local_98);
    lVar6 = local_160;
  }
LAB_14342eb7d:
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if ((((bVar8 & 2) == 0) && (lVar6 != 0)) && ((*(uint *)(lVar6 + 0x18) & 0x3ffffff) != 0)) {
    *(uint *)(lVar6 + 0x18) = *(uint *)(lVar6 + 0x18) - 1;
    FUN_1434a2b80(lVar6);
  }
  if ((((bVar8 & 1) == 0) && (lStack_158 != 0)) && ((*(uint *)(lStack_158 + 0x18) & 0x3ffffff) != 0)
     ) {
    *(uint *)(lStack_158 + 0x18) = *(uint *)(lStack_158 + 0x18) - 1;
    FUN_1434a2b80();
  }
  return;
}



// FUNCTION 14342ec10 FUN_14342ec10 body=212 status=ok
// SIG undefined FUN_14342ec10(void)

void FUN_14342ec10(longlong param_1)

{
  uint uVar1;
  RefCountNTSImpl *this;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined **local_28;
  longlong local_20;
  RefCountNTSImpl *local_18;
  
  plVar4 = *(longlong **)(param_1 + 0x10);
  iVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
  if ((iVar3 == 2) && (this = (RefCountNTSImpl *)plVar4[3], this != (RefCountNTSImpl *)0x0)) {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    lVar5 = 0;
    lVar2 = *(longlong *)(param_1 + 0x30);
    uVar1 = *(uint *)(param_1 + 0x3c);
    if (uVar1 <= (uint)(*(int *)(lVar2 + 0x30) * 0x20 + -0x20 +
                       (int)(*(longlong *)(lVar2 + 8) - *(longlong *)(lVar2 + 0x10) >> 5))) {
      lVar5 = (ulonglong)(uVar1 & 0x1f) * 0x20 +
              *(longlong *)(*(longlong *)(lVar2 + 0x28) + (ulonglong)(uVar1 >> 5) * 8);
    }
    plVar4 = (longlong *)FUN_1434123a0(lVar5);
    local_20 = *(longlong *)(param_1 + 0x30);
    local_28 = &PTR_FUN_145b12050;
    local_18 = this;
    (**(code **)(*plVar4 + 0x40))(plVar4,local_20 + 0xe8,&local_28,0,0);
    local_28 = &PTR_FUN_145af1858;
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return;
}



// FUNCTION 14342ecf0 FUN_14342ecf0 body=64 status=ok
// SIG undefined FUN_14342ecf0(void)

longlong FUN_14342ecf0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 == (longlong *)0x0) {
    return *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  iVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
  if (iVar2 == 2) {
    return plVar1[3];
  }
  return 0;
}



// FUNCTION 14342ed40 FUN_14342ed40 body=67 status=ok
// SIG undefined FUN_14342ed40(void)

longlong FUN_14342ed40(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 == (longlong *)0x0) {
    return *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe0);
  }
  iVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
  if (iVar2 - 2U < 4) {
    return plVar1[3];
  }
  return 0;
}



// FUNCTION 14342ed90 FUN_14342ed90 body=3533 status=ok
// SIG undefined FUN_14342ed90(void)

void FUN_14342ed90(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  double dVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  float *pfVar11;
  longlong *plVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  bool bVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  longlong *local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong *local_res20;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  byte local_128 [32];
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  
  bVar19 = false;
  local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffff00000000);
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar9 = *(longlong *)(param_1 + 0x30);
    lVar16 = 0;
    uVar13 = *(uint *)(param_1 + 0x3c);
    if (uVar13 <= (uint)(*(int *)(lVar9 + 0x30) * 0x20 + -0x20 +
                        (int)(*(longlong *)(lVar9 + 8) - *(longlong *)(lVar9 + 0x10) >> 5))) {
      lVar16 = (ulonglong)(uVar13 & 0x1f) * 0x20 +
               *(longlong *)(*(longlong *)(lVar9 + 0x28) + (ulonglong)(uVar13 >> 5) * 8);
    }
    local_res10 = param_2;
    FUN_143411540(lVar16,&local_res20,lVar9,0xffffffff,0);
    plVar12 = local_res20;
    if (1 < *(int *)(param_1 + 0x38)) {
      lVar9 = *(longlong *)(param_1 + 0x30);
      lVar16 = 0;
      uVar13 = *(int *)(param_1 + 0x3c) - 1;
      if (uVar13 <= (uint)(*(int *)(lVar9 + 0x30) * 0x20 + -0x20 +
                          (int)(*(longlong *)(lVar9 + 8) - *(longlong *)(lVar9 + 0x10) >> 5))) {
        lVar16 = (ulonglong)(uVar13 & 0x1f) * 0x20 +
                 *(longlong *)(*(longlong *)(lVar9 + 0x28) + (ulonglong)(uVar13 >> 5) * 8);
      }
      lVar9 = FUN_143412120(lVar16);
      local_res18 = lVar9;
      if (((lVar9 != 0) &&
          (iVar8 = (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x10))(lVar9 + 0x20), iVar8 == 7)) &&
         (2 < *(int *)(param_1 + 0x38))) {
        lVar16 = *(longlong *)(param_1 + 0x30);
        lVar14 = 0;
        uVar13 = *(int *)(param_1 + 0x3c) - 2;
        if (uVar13 <= (uint)(*(int *)(lVar16 + 0x30) * 0x20 + -0x20 +
                            (int)(*(longlong *)(lVar16 + 8) - *(longlong *)(lVar16 + 0x10) >> 5))) {
          lVar14 = (ulonglong)(uVar13 & 0x1f) * 0x20 +
                   *(longlong *)(*(longlong *)(lVar16 + 0x28) + (ulonglong)(uVar13 >> 5) * 8);
        }
        lVar16 = FUN_143412120(lVar14);
        local_f8 = lVar16;
        if (((lVar16 != 0) &&
            (iVar8 = (**(code **)(*(longlong *)(lVar16 + 0x20) + 0x10))(lVar16 + 0x20), iVar8 == 7))
           && (3 < *(int *)(param_1 + 0x38))) {
          lVar14 = *(longlong *)(param_1 + 0x30);
          lVar15 = 0;
          uVar13 = *(int *)(param_1 + 0x3c) - 3;
          if (uVar13 <= (uint)(*(int *)(lVar14 + 0x30) * 0x20 + -0x20 +
                              (int)(*(longlong *)(lVar14 + 8) - *(longlong *)(lVar14 + 0x10) >> 5)))
          {
            lVar15 = (ulonglong)(uVar13 & 0x1f) * 0x20 +
                     *(longlong *)(*(longlong *)(lVar14 + 0x28) + (ulonglong)(uVar13 >> 5) * 8);
          }
          lVar14 = FUN_143412120(lVar15);
          local_100 = lVar14;
          if (((lVar14 != 0) &&
              (iVar8 = (**(code **)(*(longlong *)(lVar14 + 0x20) + 0x10))(lVar14 + 0x20), iVar8 == 7
              )) && ((4 < *(int *)(param_1 + 0x38) &&
                     (((iVar8 = *(int *)(lVar9 + 0x78), 0 < iVar8 &&
                       (iVar8 == *(int *)(lVar16 + 0x78))) && (iVar8 == *(int *)(lVar14 + 0x78))))))
             ) {
            lVar16 = *(longlong *)(param_1 + 0x30);
            plVar4 = (longlong *)(lVar16 + 0xe8);
            local_148 = 1.0;
            fStack_144 = 0.0;
            fStack_140 = 0.0;
            fStack_13c = 0.0;
            local_138 = 0.0;
            fStack_134 = 1.0;
            fStack_130 = 0.0;
            fStack_12c = 0.0;
            local_128[0] = 0;
            uVar10 = FUN_1434141c0(param_1,4);
            lVar16 = FUN_143412120(uVar10,lVar16);
            plVar1 = (longlong *)(lVar16 + 0x20);
            iVar8 = (**(code **)(*(longlong *)(lVar16 + 0x20) + 0x10))(plVar1);
            fVar28 = 0.5;
            if (iVar8 == 0xf) {
              pfVar11 = (float *)FUN_14344c900(lVar16,&local_e8,*(undefined8 *)(param_1 + 0x30));
              local_148 = *pfVar11;
              fStack_144 = pfVar11[1];
              fStack_140 = pfVar11[2];
              fStack_13c = pfVar11[3];
              local_138 = pfVar11[4];
              fStack_134 = pfVar11[5];
              fStack_130 = pfVar11[6];
              fStack_12c = pfVar11[7];
            }
            else {
              local_res8 = (longlong *)
                           FUN_143360950(*(undefined8 *)
                                          (*(longlong *)(*(longlong *)(*plVar4 + 0x28) + 0x18) +
                                          0x618),"matrixType",10);
              *(int *)(local_res8 + 3) = (int)local_res8[3] + 1;
              cVar7 = (**(code **)(*plVar1 + 0x58))(plVar1,plVar4,&local_res8,local_128);
              plVar2 = local_res8 + 3;
              *(int *)plVar2 = (int)*plVar2 + -1;
              if ((int)*plVar2 == 0) {
                FUN_14335f920();
              }
              if (cVar7 == '\0') {
LAB_14342f1a8:
                bVar20 = false;
              }
              else {
                FUN_143411540(local_128,&local_res8,*(undefined8 *)(param_1 + 0x30),0xffffffff,0);
                bVar19 = true;
                lVar9 = 0;
                do {
                  lVar16 = lVar9 + 1;
                  if (*(char *)(*local_res8 + lVar9) != (&DAT_145b122bc)[lVar9]) goto LAB_14342f1a8;
                  lVar9 = lVar16;
                } while (lVar16 != 4);
                bVar20 = true;
              }
              if (bVar19) {
                plVar2 = local_res8 + 3;
                *(int *)plVar2 = (int)*plVar2 + -1;
                if ((int)*plVar2 == 0) {
                  FUN_14335f920();
                }
              }
              uVar10 = *(undefined8 *)(*(longlong *)(*(longlong *)(*plVar4 + 0x28) + 0x18) + 0x618);
              if (bVar20) {
                fVar25 = 0.0;
                fVar26 = 0.0;
                fVar27 = 0.0;
                fVar23 = 100.0;
                fVar21 = 100.0;
                local_res8 = (longlong *)FUN_143360950(uVar10,&DAT_145b09ac8,1,0);
                *(int *)(local_res8 + 3) = (int)local_res8[3] + 1;
                cVar7 = (**(code **)(*plVar1 + 0x58))(plVar1,plVar4,&local_res8,local_128);
                plVar2 = local_res8 + 3;
                *(int *)plVar2 = (int)*plVar2 + -1;
                if ((int)*plVar2 == 0) {
                  FUN_14335f920();
                }
                if (cVar7 != '\0') {
                  dVar5 = (double)FUN_143411a90(local_128,*(undefined8 *)(param_1 + 0x30));
                  fVar25 = (float)dVar5;
                }
                local_res8 = (longlong *)
                             FUN_143360950(*(undefined8 *)
                                            (*(longlong *)(*(longlong *)(*plVar4 + 0x28) + 0x18) +
                                            0x618),&DAT_145b09acc,1,0);
                *(int *)(local_res8 + 3) = (int)local_res8[3] + 1;
                cVar7 = (**(code **)(*plVar1 + 0x58))(plVar1,plVar4,&local_res8,local_128);
                plVar2 = local_res8 + 3;
                *(int *)plVar2 = (int)*plVar2 + -1;
                if ((int)*plVar2 == 0) {
                  FUN_14335f920();
                }
                if (cVar7 != '\0') {
                  dVar5 = (double)FUN_143411a90(local_128,*(undefined8 *)(param_1 + 0x30));
                  fVar26 = (float)dVar5;
                }
                local_res8 = (longlong *)
                             FUN_143360950(*(undefined8 *)
                                            (*(longlong *)(*(longlong *)(*plVar4 + 0x28) + 0x18) +
                                            0x618),&DAT_145b122c0,1,0);
                *(int *)(local_res8 + 3) = (int)local_res8[3] + 1;
                cVar7 = (**(code **)(*plVar1 + 0x58))(plVar1,plVar4,&local_res8,local_128);
                plVar2 = local_res8 + 3;
                *(int *)plVar2 = (int)*plVar2 + -1;
                if ((int)*plVar2 == 0) {
                  FUN_14335f920();
                }
                if (cVar7 != '\0') {
                  dVar5 = (double)FUN_143411a90(local_128,*(undefined8 *)(param_1 + 0x30));
                  fVar23 = (float)dVar5;
                }
                local_res8 = (longlong *)
                             FUN_143360950(*(undefined8 *)
                                            (*(longlong *)(*(longlong *)(*plVar4 + 0x28) + 0x18) +
                                            0x618),&DAT_145b122c4,1,0);
                *(int *)(local_res8 + 3) = (int)local_res8[3] + 1;
                cVar7 = (**(code **)(*plVar1 + 0x58))(plVar1,plVar4,&local_res8,local_128);
                plVar2 = local_res8 + 3;
                *(int *)plVar2 = (int)*plVar2 + -1;
                if ((int)*plVar2 == 0) {
                  FUN_14335f920();
                }
                if (cVar7 != '\0') {
                  dVar5 = (double)FUN_143411a90(local_128,*(undefined8 *)(param_1 + 0x30));
                  fVar21 = (float)dVar5;
                }
                local_res8 = (longlong *)
                             FUN_143360950(*(undefined8 *)
                                            (*(longlong *)(*(longlong *)(*plVar4 + 0x28) + 0x18) +
                                            0x618),&DAT_145b122c8,1,0);
                *(int *)(local_res8 + 3) = (int)local_res8[3] + 1;
                cVar7 = (**(code **)(*plVar1 + 0x58))(plVar1,plVar4,&local_res8,local_128);
                plVar1 = local_res8 + 3;
                *(int *)plVar1 = (int)*plVar1 + -1;
                if ((int)*plVar1 == 0) {
                  FUN_14335f920();
                }
                if (cVar7 != '\0') {
                  dVar5 = (double)FUN_143411a90(local_128,*(undefined8 *)(param_1 + 0x30));
                  fVar27 = (float)dVar5;
                }
                fVar22 = fVar23 * 0.00061035156;
                fVar24 = fVar21 * 0.00061035156;
                FUN_143326480(&local_148,fVar27);
                local_148 = local_148 * fVar22;
                fStack_144 = fStack_144 * fVar22;
                fStack_140 = fStack_140 * fVar22;
                fStack_134 = fStack_134 * fVar24;
                local_138 = local_138 * fVar24;
                fStack_13c = fStack_13c * fVar22 + fVar25 + fVar23 * 0.5;
                fStack_130 = fStack_130 * fVar24;
                fStack_12c = fStack_12c * fVar24 + fVar26 + fVar21 * 0.5;
                lVar9 = local_res18;
              }
              else {
                local_res8 = (longlong *)FUN_143360950(uVar10,&DAT_145b07098,1,0);
                *(int *)(local_res8 + 3) = (int)local_res8[3] + 1;
                cVar7 = (**(code **)(*plVar1 + 0x58))(plVar1,plVar4,&local_res8,local_128);
                plVar2 = local_res8 + 3;
                *(int *)plVar2 = (int)*plVar2 + -1;
                if ((int)*plVar2 == 0) {
                  FUN_14335f920();
                }
                if (cVar7 != '\0') {
                  dVar5 = (double)FUN_143411a90(local_128,*(undefined8 *)(param_1 + 0x30));
                  local_148 = (float)dVar5 * 0.00061035156;
                }
                local_res8 = (longlong *)
                             FUN_143360950(*(undefined8 *)
                                            (*(longlong *)(*(longlong *)(*plVar4 + 0x28) + 0x18) +
                                            0x618),&DAT_145b122cc,1,0);
                *(int *)(local_res8 + 3) = (int)local_res8[3] + 1;
                cVar7 = (**(code **)(*plVar1 + 0x58))(plVar1,plVar4,&local_res8,local_128);
                plVar2 = local_res8 + 3;
                *(int *)plVar2 = (int)*plVar2 + -1;
                if ((int)*plVar2 == 0) {
                  FUN_14335f920();
                }
                if (cVar7 != '\0') {
                  dVar5 = (double)FUN_143411a90(local_128,*(undefined8 *)(param_1 + 0x30));
                  fStack_144 = (float)dVar5 * 0.00061035156;
                }
                local_res8 = (longlong *)
                             FUN_143360950(*(undefined8 *)
                                            (*(longlong *)(*(longlong *)(*plVar4 + 0x28) + 0x18) +
                                            0x618),&DAT_145b122d0,1,0);
                *(int *)(local_res8 + 3) = (int)local_res8[3] + 1;
                cVar7 = (**(code **)(*plVar1 + 0x58))(plVar1,plVar4,&local_res8,local_128);
                plVar2 = local_res8 + 3;
                *(int *)plVar2 = (int)*plVar2 + -1;
                if ((int)*plVar2 == 0) {
                  FUN_14335f920();
                }
                if (cVar7 != '\0') {
                  dVar5 = (double)FUN_143411a90(local_128,*(undefined8 *)(param_1 + 0x30));
                  fStack_13c = (float)dVar5;
                }
                local_res8 = (longlong *)
                             FUN_143360950(*(undefined8 *)
                                            (*(longlong *)(*(longlong *)(*plVar4 + 0x28) + 0x18) +
                                            0x618),&DAT_145b122d4,1,0);
                *(int *)(local_res8 + 3) = (int)local_res8[3] + 1;
                cVar7 = (**(code **)(*plVar1 + 0x58))(plVar1,plVar4,&local_res8,local_128);
                plVar2 = local_res8 + 3;
                *(int *)plVar2 = (int)*plVar2 + -1;
                if ((int)*plVar2 == 0) {
                  FUN_14335f920();
                }
                if (cVar7 != '\0') {
                  dVar5 = (double)FUN_143411a90(local_128,*(undefined8 *)(param_1 + 0x30));
                  local_138 = (float)dVar5 * 0.00061035156;
                }
                local_res8 = (longlong *)
                             FUN_143360950(*(undefined8 *)
                                            (*(longlong *)(*(longlong *)(*plVar4 + 0x28) + 0x18) +
                                            0x618),&DAT_145b122d8,1,0);
                *(int *)(local_res8 + 3) = (int)local_res8[3] + 1;
                cVar7 = (**(code **)(*plVar1 + 0x58))(plVar1,plVar4,&local_res8,local_128);
                plVar2 = local_res8 + 3;
                *(int *)plVar2 = (int)*plVar2 + -1;
                if ((int)*plVar2 == 0) {
                  FUN_14335f920();
                }
                if (cVar7 != '\0') {
                  dVar5 = (double)FUN_143411a90(local_128,*(undefined8 *)(param_1 + 0x30));
                  fStack_134 = (float)dVar5 * 0.00061035156;
                }
                local_res8 = (longlong *)
                             FUN_143360950(*(undefined8 *)
                                            (*(longlong *)(*(longlong *)(*plVar4 + 0x28) + 0x18) +
                                            0x618),&DAT_145b122c4,1,0);
                *(int *)(local_res8 + 3) = (int)local_res8[3] + 1;
                cVar7 = (**(code **)(*plVar1 + 0x58))(plVar1,plVar4,&local_res8,local_128);
                plVar1 = local_res8 + 3;
                *(int *)plVar1 = (int)*plVar1 + -1;
                if ((int)*plVar1 == 0) {
                  FUN_14335f920();
                }
                lVar9 = local_res18;
                if (cVar7 != '\0') {
                  dVar5 = (double)FUN_143411a90(local_128,*(undefined8 *)(param_1 + 0x30));
                  fStack_12c = (float)dVar5;
                  lVar9 = local_res18;
                }
              }
            }
            bVar19 = false;
            if (5 < *(int *)(param_1 + 0x38)) {
              uVar10 = FUN_1434141c0(param_1,5);
              FUN_143411540(uVar10,&local_108,*(undefined8 *)(param_1 + 0x30),0xffffffff,0);
              if (6 < *(int *)(param_1 + 0x38)) {
                uVar10 = FUN_1434141c0(param_1,6);
                FUN_143411540(uVar10,&local_res8,*(undefined8 *)(param_1 + 0x30),0xffffffff,0);
                plVar4 = local_res8;
                iVar8 = _guard_xfg_dispatch_icall_nop((char *)*local_res8,"linearRGB");
                bVar19 = iVar8 == 0;
                plVar1 = plVar4 + 3;
                *(int *)plVar1 = (int)*plVar1 + -1;
                if ((int)*plVar1 == 0) {
                  FUN_14335f920(plVar4);
                }
              }
              piVar3 = (int *)(local_108 + 0x18);
              *piVar3 = *piVar3 + -1;
              if (*piVar3 == 0) {
                FUN_14335f920();
              }
            }
            lVar16 = 0;
            do {
              lVar14 = lVar16;
              bVar20 = *(char *)(*plVar12 + lVar14) == "radial"[lVar14];
              if (!bVar20) goto LAB_14342f8d9;
              lVar16 = lVar14 + 1;
            } while (lVar14 + 1 != 7);
            bVar20 = *(char *)(*plVar12 + lVar14) == "radial"[lVar14];
LAB_14342f8d9:
            uVar13 = (uint)bVar20;
            local_res8 = (longlong *)CONCAT44(local_res8._4_4_,uVar13);
            lVar16 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x38);
            uVar10 = 0;
            if (lVar16 != 0) {
              uVar10 = FUN_143321870(lVar16,uVar13,*(undefined2 *)(lVar9 + 0x78),bVar19);
            }
            lVar14 = local_res10;
            FUN_143499e40(local_res10 + 0x18,uVar10);
            lVar6 = local_100;
            lVar15 = local_res18;
            lVar16 = *(longlong *)(lVar14 + 0x18);
            if (lVar16 != 0) {
              *(undefined4 *)(lVar16 + 0x28) = 0;
              if (0 < *(int *)(lVar9 + 0x78)) {
                lVar9 = 0;
                uVar18 = 0;
                do {
                  uVar13 = FUN_143411f00(*(undefined8 *)(lVar9 + *(longlong *)(lVar15 + 0x70)),
                                         *(undefined8 *)(param_1 + 0x30));
                  dVar5 = (double)FUN_143411a90(*(undefined8 *)
                                                 (lVar9 + *(longlong *)(local_f8 + 0x70)),
                                                *(undefined8 *)(param_1 + 0x30));
                  fVar23 = ((float)dVar5 * 255.0) / 100.0;
                  if (255.0 <= fVar23) {
                    fVar23 = 255.0;
                  }
                  dVar5 = (double)FUN_143411a90(*(undefined8 *)(lVar9 + *(longlong *)(lVar6 + 0x70))
                                                ,*(undefined8 *)(param_1 + 0x30));
                  lVar9 = lVar9 + 8;
                  fVar21 = (float)dVar5;
                  uVar17 = (int)uVar18 + 1;
                  lVar16 = *(longlong *)(*(longlong *)(lVar14 + 0x18) + 0x20);
                  if (255.0 <= fVar21) {
                    fVar21 = 255.0;
                  }
                  fVar25 = 0.0;
                  if (0.0 <= fVar21) {
                    fVar25 = fVar21;
                  }
                  fVar21 = 0.0;
                  if (0.0 <= fVar23) {
                    fVar21 = fVar23;
                  }
                  *(char *)(lVar16 + uVar18 * 8) = (char)(longlong)fVar25;
                  *(uint *)(lVar16 + 4 + uVar18 * 8) =
                       (int)(longlong)fVar21 << 0x18 | uVar13 & 0xffffff;
                  uVar18 = (ulonglong)uVar17;
                } while ((int)uVar17 < *(int *)(lVar15 + 0x78));
                plVar12 = local_res20;
                uVar13 = (uint)local_res8;
              }
              lVar9 = local_res10;
              fStack_13c = fStack_13c * 20.0;
              fStack_12c = fStack_12c * 20.0;
              *(undefined8 *)(local_res10 + 0x20) = 0x3f800000;
              *(undefined8 *)(local_res10 + 0x28) = 0;
              *(undefined4 *)(local_res10 + 0x30) = 0;
              *(undefined8 *)(local_res10 + 0x34) = 0x3f800000;
              *(undefined4 *)(local_res10 + 0x3c) = 0;
              *(float *)(local_res10 + 0x20) = *(float *)(local_res10 + 0x20) * 3.0517578e-05;
              *(float *)(local_res10 + 0x24) = *(float *)(local_res10 + 0x24) * 3.0517578e-05;
              *(float *)(local_res10 + 0x28) = *(float *)(local_res10 + 0x28) * 3.0517578e-05;
              *(float *)(local_res10 + 0x2c) = *(float *)(local_res10 + 0x2c) * 3.0517578e-05;
              *(float *)(local_res10 + 0x30) = *(float *)(local_res10 + 0x30) * 3.0517578e-05;
              *(float *)(local_res10 + 0x34) = *(float *)(local_res10 + 0x34) * 3.0517578e-05;
              *(float *)(local_res10 + 0x38) = *(float *)(local_res10 + 0x38) * 3.0517578e-05;
              *(float *)(local_res10 + 0x3c) = *(float *)(local_res10 + 0x3c) * 3.0517578e-05;
              *(float *)(local_res10 + 0x2c) = *(float *)(local_res10 + 0x2c) + 0.5;
              if (uVar13 == 0) {
                fVar28 = 0.0;
              }
              *(float *)(local_res10 + 0x3c) = *(float *)(local_res10 + 0x3c) + fVar28;
              local_d8 = 0x3f80000000000000;
              uStack_d0 = 0;
              local_e8 = 0x3f800000;
              uStack_e0 = 0;
              Scaleform::Render::Matrix2x4<float>::SetInverse
                        ((Matrix2x4<float> *)&local_e8,(Matrix2x4<float> *)&local_148);
              Scaleform::Render::Matrix2x4<float>::Prepend
                        ((Matrix2x4<float> *)(lVar9 + 0x20),(Matrix2x4<float> *)&local_e8);
            }
            if (4 < local_128[0]) {
              FUN_143411150(local_128);
            }
          }
        }
      }
    }
    plVar1 = plVar12 + 3;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      FUN_14335f920(plVar12);
    }
  }
  return;
}



// FUNCTION 14342fb80 FUN_14342fb80 body=165 status=ok
// SIG undefined FUN_14342fb80(void)

void FUN_14342fb80(longlong param_1,undefined8 param_2,undefined8 *param_3,char param_4)

{
  char *pcVar1;
  char cVar2;
  ushort uVar3;
  byte local_28 [32];
  
  if (*(uint *)((undefined8 *)*param_3 + 4) < 3) {
    return;
  }
  pcVar1 = *(char **)*param_3;
  if (*pcVar1 != 'o') {
    return;
  }
  if (pcVar1[1] != 'n') {
    return;
  }
  local_28[0] = 0;
  cVar2 = (**(code **)(*(longlong *)(param_1 + 0x20) + 0x58))
                    (param_1 + 0x20,param_2,param_3,local_28);
  if (cVar2 == '\0') {
    if (param_4 != '\0') goto LAB_14342fbff;
  }
  else if (param_4 == '\0') goto LAB_14342fbff;
  uVar3 = Scaleform::GFx::AS2::MovieClipObject::GetButtonEventNameMask(param_2,param_3);
  if (uVar3 != 0) {
    if (param_4 == '\0') {
      *(ushort *)(param_1 + 0x70) = *(ushort *)(param_1 + 0x70) | uVar3;
    }
    else {
      *(ushort *)(param_1 + 0x70) = *(ushort *)(param_1 + 0x70) & ~uVar3;
    }
  }
LAB_14342fbff:
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  return;
}



// FUNCTION 14342fc30 FUN_14342fc30 body=451 status=ok
// SIG undefined FUN_14342fc30(void)

void FUN_14342fc30(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  ushort uVar7;
  RefCountNTSImpl *pRVar8;
  undefined8 uVar9;
  RefCountNTSImpl *this;
  double dVar10;
  undefined8 *local_res8;
  byte local_38 [32];
  
  piVar1 = *(int **)(param_1 + 0x68);
  this = (RefCountNTSImpl *)0x0;
  if (piVar1 != (int *)0x0) {
    this = *(RefCountNTSImpl **)(piVar1 + 2);
    if (this == (RefCountNTSImpl *)0x0) {
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *(undefined8 *)(param_1 + 0x68) = 0;
      this = (RefCountNTSImpl *)0x0;
    }
    else if (*(int *)(this + 8) == 0) {
      this = (RefCountNTSImpl *)0x0;
    }
    else {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      Scaleform::RefCountNTSImpl::Release(this);
      pRVar8 = (RefCountNTSImpl *)(**(code **)(*(longlong *)this + 0x228))(this,0);
      if (pRVar8 == this) goto LAB_14342fd06;
    }
  }
  if (((2 < *(uint *)((undefined8 *)*param_3 + 4)) && (pcVar2 = *(char **)*param_3, *pcVar2 == 'o'))
     && (pcVar2[1] == 'n')) {
    local_38[0] = 0;
    cVar5 = (**(code **)(*(longlong *)(param_1 + 0x20) + 0x58))
                      (param_1 + 0x20,param_2,param_3,local_38);
    if ((cVar5 == '\0') &&
       (uVar7 = Scaleform::GFx::AS2::MovieClipObject::GetButtonEventNameMask(param_2,param_3),
       uVar7 != 0)) {
      *(ushort *)(param_1 + 0x70) = *(ushort *)(param_1 + 0x70) | uVar7;
    }
    if (4 < local_38[0]) {
      FUN_143411150(local_38);
    }
  }
LAB_14342fd06:
  if (this != (RefCountNTSImpl *)0x0) {
    lVar3 = *param_3;
    if (*(int *)(lVar3 + 0x1c) < 0) {
      pRVar8 = this + (ulonglong)(byte)this[0x6d] * 4;
      lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18);
      if (lVar3 == *(longlong *)(lVar4 + 0x5f0)) {
        uVar9 = (**(code **)(*(longlong *)pRVar8 + 0xf0))();
        FUN_143411540(param_4,&local_res8,uVar9,0xffffffff,0);
        FUN_14336baf0(this,*local_res8);
        piVar1 = (int *)(local_res8 + 3);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(local_res8);
        }
      }
      else if (lVar3 == *(longlong *)(lVar4 + 0x5f8)) {
        uVar9 = (**(code **)(*(longlong *)pRVar8 + 0xf0))();
        dVar10 = (double)FUN_143411a90(param_4,uVar9);
        FUN_14336bb90(this,(float)dVar10);
      }
      else if (lVar3 == *(longlong *)(lVar4 + 0x600)) {
        uVar9 = (**(code **)(*(longlong *)pRVar8 + 0xf0))();
        uVar6 = FUN_143411fd0(param_4,uVar9);
        FUN_14336bc30(this,uVar6);
      }
    }
    Scaleform::RefCountNTSImpl::Release(this);
  }
  return;
}



// FUNCTION 14342fe00 FUN_14342fe00 body=78 status=ok
// SIG undefined FUN_14342fe00(void)

void FUN_14342fe00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14342fc30(param_1 + -0x20);
  FUN_143415510(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14342fe60 FUN_14342fe60 body=85 status=ok
// SIG undefined FUN_14342fe60(void)

void FUN_14342fe60(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14342fc30(param_1 + -0x20,param_2 + 0xe8);
  FUN_143414a10(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14342fec0 FUN_14342fec0 body=136 status=ok
// SIG undefined FUN_14342fec0(void)

void FUN_14342fec0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  char cVar2;
  ushort uVar3;
  byte local_28 [32];
  
  if (((2 < *(uint *)((undefined8 *)*param_3 + 4)) && (pcVar1 = *(char **)*param_3, *pcVar1 == 'o'))
     && (pcVar1[1] == 'n')) {
    local_28[0] = 0;
    cVar2 = (**(code **)(*param_1 + 0x58))();
    if (cVar2 != '\0') {
      uVar3 = Scaleform::GFx::AS2::MovieClipObject::GetButtonEventNameMask(param_2,param_3);
      if (uVar3 != 0) {
        *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) & ~uVar3;
      }
    }
    if (4 < local_28[0]) {
      FUN_143411150(local_28);
    }
  }
  FUN_143415040(param_1,param_2,param_3);
  return;
}



// FUNCTION 14342ff50 FUN_14342ff50 body=177 status=ok
// SIG undefined FUN_14342ff50(void)

void FUN_14342ff50(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined **local_28;
  longlong local_20;
  undefined8 local_18;
  
  FUN_1434a4d00();
  if (param_3 != 0) {
    iVar1 = (**(code **)(*(longlong *)(param_3 + 0x20) + 0x10))(param_3 + 0x20);
    if (iVar1 != 0xb) {
      local_20 = param_1 + -0x20;
      local_28 = &PTR_FUN_145b12338;
      if (local_20 != 0) {
        *(uint *)(param_1 + -8) = *(int *)(param_1 + -8) + 1U & 0x8fffffff;
      }
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
      local_18 = param_2;
      (**(code **)(*plVar2 + 0x40))(plVar2,param_2,&local_28,0xd,0);
      if ((local_20 != 0) && ((*(uint *)(local_20 + 0x18) & 0x3ffffff) != 0)) {
        *(uint *)(local_20 + 0x18) = *(uint *)(local_20 + 0x18) - 1;
        FUN_1434a2b80();
      }
    }
  }
  return;
}



// FUNCTION 143430010 FUN_143430010 body=96 status=ok
// SIG undefined FUN_143430010(void)

undefined8 FUN_143430010(longlong param_1)

{
  longlong *plVar1;
  short sVar2;
  int iVar3;
  
  sVar2 = *(short *)(param_1 + 0x70);
  while ((sVar2 == 0 && (*(char *)(param_1 + 0x72) == '\0'))) {
    plVar1 = (longlong *)(param_1 + 0x30);
    param_1 = *(longlong *)(param_1 + 0x30);
    while( true ) {
      if (param_1 == 0) {
        return 0;
      }
      iVar3 = (**(code **)(*(longlong *)(*plVar1 + 0x20) + 0x10))();
      if (iVar3 == 0xb) break;
      param_1 = *(longlong *)(param_1 + 0x30);
    }
    sVar2 = *(short *)(param_1 + 0x70);
  }
  return 1;
}



// FUNCTION 143430090 GetButtonEventNameMask body=197 status=ok
// SIG undefined GetButtonEventNameMask(void)

undefined8
Scaleform::GFx::AS2::MovieClipObject::GetButtonEventNameMask(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_1 + 0x28) + 0x18);
  lVar2 = *param_2;
  if (*(longlong *)(lVar1 + 0x410) == lVar2) {
    return 1;
  }
  if (*(longlong *)(lVar1 + 0x418) == lVar2) {
    return 2;
  }
  if (*(longlong *)(lVar1 + 0x420) == lVar2) {
    return 4;
  }
  if (*(longlong *)(lVar1 + 0x428) == lVar2) {
    return 8;
  }
  if (*(longlong *)(lVar1 + 0x430) == lVar2) {
    return 0x10;
  }
  if (*(longlong *)(lVar1 + 0x438) == lVar2) {
    return 0x20;
  }
  if (*(longlong *)(lVar1 + 0x440) == lVar2) {
    return 0x40;
  }
  if (*(longlong *)(lVar1 + 0x500) == lVar2) {
    return 0x80;
  }
  if (*(longlong *)(lVar1 + 0x508) == lVar2) {
    return 0x100;
  }
  if (*(longlong *)(lVar1 + 0x510) == lVar2) {
    return 0x200;
  }
  if (*(longlong *)(lVar1 + 0x518) == lVar2) {
    return 0x400;
  }
  if (*(longlong *)(lVar1 + 0x520) == lVar2) {
    return 0x800;
  }
  return 0;
}



// FUNCTION 143430160 FUN_143430160 body=225 status=ok
// SIG undefined FUN_143430160(void)

undefined8 * FUN_143430160(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 local_res8 [8];
  byte local_28 [8];
  undefined1 local_20;
  
  FUN_143495650();
  local_res8[0] = 1;
  *param_1 = &PTR_LAB_145b0bc58;
  param_1[4] = &PTR_LAB_145b0bca0;
  param_1[0xf] = &PTR_LAB_145b0bd48;
  FUN_143422ee0(param_1 + 0xf,param_1,param_2,&PTR_DAT_145b08370,local_res8);
  local_res8[0] = 3;
  local_28[0] = 2;
  local_20 = 1;
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x28) + 0x18);
  FUN_14342fc30(param_1,param_2,lVar1 + 0x538,local_28);
  FUN_143415510(param_1 + 4,param_2,lVar1 + 0x538,local_28,local_res8);
  if (4 < local_28[0]) {
    FUN_143411150(local_28);
  }
  return param_1;
}



// FUNCTION 143430250 FUN_143430250 body=60 status=ok
// SIG undefined FUN_143430250(void)

void FUN_143430250(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xe8) + 0x30);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,0x78);
  if (lVar2 != 0) {
    FUN_143496db0(lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 1434302a0 FUN_1434302a0 body=81 status=ok
// SIG undefined FUN_1434302a0(void)

void FUN_1434302a0(longlong param_1)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    if (iVar2 == 0xb) {
      lVar3 = *(longlong *)(param_1 + 0x10) + -0x20;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar3 = 0;
      }
      FUN_143412aa0(*(undefined8 *)(param_1 + 8),lVar3);
      return;
    }
  }
  puVar1 = *(undefined1 **)(param_1 + 8);
  FUN_143411150(puVar1);
  *puVar1 = 0;
  return;
}



// FUNCTION 143430300 FUN_143430300 body=101 status=ok
// SIG undefined FUN_143430300(void)

void FUN_143430300(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)(param_2 + 0xe8);
  uVar2 = FUN_14341b750(*puVar1,0x1d);
  lVar3 = param_1 + 0x20;
  (**(code **)(*(longlong *)(param_1 + 0x20) + 0x68))(lVar3,puVar1,uVar2);
  if (lVar3 != 0) {
    FUN_14340b610(lVar3,puVar1,&PTR_s_addListener_145b07c80,1);
  }
  FUN_1434645d0(puVar1,lVar3);
  return;
}


