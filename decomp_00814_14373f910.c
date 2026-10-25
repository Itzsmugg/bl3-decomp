// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14373f910 FUN_14373f910 body=41 status=ok
// SIG undefined FUN_14373f910(void)

undefined8 * FUN_14373f910(undefined8 *param_1)

{
  hkReflect::Detail::Impl::Impl();
  param_1[2] = 0;
  *param_1 = hkReflect::Detail::hkArrayImpl::vftable;
  return param_1;
}



// FUNCTION 14373f940 FUN_14373f940 body=206 status=ok
// SIG undefined FUN_14373f940(void)

undefined4 *
FUN_14373f940(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             int param_5)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  iVar1 = (int)param_3[1];
  iVar2 = FUN_1437152f0(param_4);
  if (param_5 != iVar1) {
    if (iVar1 <= param_5) {
      pcVar3 = (code *)0x0;
      if ((iVar1 < param_5) && (pcVar3 = (code *)FUN_14374a260(param_4), pcVar3 == (code *)0x0)) {
        *param_2 = 0x80040200;
        return param_2;
      }
      FUN_14373fb70(param_1,param_3,iVar2,param_5);
      if (iVar1 < param_5) {
        (*pcVar3)((longlong)(iVar2 * iVar1) + *param_3,param_4,param_5 - iVar1);
      }
      *param_2 = 0;
      return param_2;
    }
    *(int *)(param_3 + 1) = param_5;
    FUN_143749de0((longlong)(iVar2 * param_5) + *param_3,param_4,iVar1 - param_5);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14373fa10 FUN_14373fa10 body=342 status=ok
// SIG undefined FUN_14373fa10(void)

undefined4 *
FUN_14373fa10(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             int param_5,int param_6,undefined8 *param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  code *local_res18;
  
  if (param_5 < 0) {
    param_5 = (int)param_3[1];
  }
  if (param_6 < 0) {
    param_6 = (int)param_3[1];
  }
  lVar3 = param_3[1];
  iVar1 = *(int *)(param_7 + 2);
  if ((param_6 == 0) && (iVar1 == 0)) {
    *param_2 = 0;
  }
  else {
    iVar4 = FUN_1437152f0(param_4);
    local_res18 = (code *)0x0;
    if ((iVar1 < 1) || (local_res18 = (code *)FUN_14374a240(param_4), local_res18 != (code *)0x0)) {
      FUN_14373fb70(param_1,param_3,iVar4,((int)lVar3 - param_6) + iVar1);
      lVar2 = *param_3;
      lVar5 = iVar4 * param_5 + lVar2;
      if (0 < param_6) {
        FUN_143749de0(lVar5,param_4,param_6);
      }
      FUN_143732890((iVar1 + param_5) * iVar4 + lVar2,(param_5 + param_6) * iVar4 + lVar2,
                    (longlong)(iVar4 * (((int)lVar3 - param_5) - param_6)));
      if (0 < iVar1) {
        (*local_res18)(lVar5,*param_7,param_4,iVar1);
      }
      *param_2 = 0;
    }
    else {
      *param_2 = 0x80040200;
    }
  }
  return param_2;
}



// FUNCTION 14373fb70 FUN_14373fb70 body=106 status=ok
// SIG undefined FUN_14373fb70(void)

void FUN_14373fb70(longlong param_1,longlong param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  
  if ((int)(*(uint *)(param_2 + 0xc) & 0x3fffffff) < param_4) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (lVar1 == 0) {
      lVar1 = FUN_143703a50();
    }
    FUN_14370c310(lVar1,param_2,param_4,param_3);
    *(int *)(param_2 + 8) = param_4;
    return;
  }
  *(int *)(param_2 + 8) = param_4;
  return;
}



// FUNCTION 14373fbe0 FUN_14373fbe0 body=75 status=ok
// SIG undefined FUN_14373fbe0(void)

/* WARNING: Removing unreachable block (ram,0x00014373fc21) */

undefined8 FUN_14373fbe0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar1 = hkReflect::TypeDetail::skipDecorators();
  puVar2 = (undefined8 *)FUN_143714490(uVar1,1);
  if (puVar2 == (undefined8 *)0x0) {
    return 0;
  }
  uVar3 = 0;
  if (((byte)*puVar2 & 0xf) == 8) {
    uVar3 = uVar1;
  }
  return uVar3;
}



// FUNCTION 14373fc30 FUN_14373fc30 body=72 status=ok
// SIG undefined FUN_14373fc30(void)

void FUN_14373fc30(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)FUN_143703a50();
    }
    iVar2 = FUN_14370c910(lVar1);
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar1,iVar2 + 1);
  }
  return;
}



// FUNCTION 14373fc80 FUN_14373fc80 body=108 status=ok
// SIG undefined FUN_14373fc80(void)

void FUN_14373fc80(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_143703a50();
  }
  uVar3 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
  if ((uVar3 != 0) && (-1 < (int)*(uint *)((longlong)param_2 + 0xc))) {
    iVar1 = FUN_1437152f0(param_3);
    (**(code **)(*plVar2 + 0x20))(plVar2,*param_2,iVar1 * uVar3);
  }
  return;
}



// FUNCTION 14373fcf0 FUN_14373fcf0 body=285 status=ok
// SIG undefined FUN_14373fcf0(void)

void FUN_14373fcf0(longlong param_1,undefined8 *param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 local_res20 [8];
  undefined8 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  uVar5 = (ulonglong)param_4;
  uVar1 = FUN_14373fbe0(param_3);
  plVar2 = (longlong *)FUN_143714420(uVar1,2);
  lVar4 = 0;
  if (plVar2 != (longlong *)0x0) {
    lVar4 = *plVar2;
  }
  uVar1 = FUN_1437151a0(uVar1);
  if (0 < (int)param_4) {
    do {
      local_48 = *param_2;
      local_38 = *(undefined4 *)(param_2 + 1);
      local_34 = 0;
      local_30 = 0;
      local_40 = lVar4;
      uVar3 = local_30;
      if (lVar4 != 0) {
        local_34 = FUN_1437152f0(lVar4);
        uVar3 = FUN_1437151a0(lVar4);
        if ((uVar3 & 1) != 0) {
          FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
        }
      }
      local_30 = uVar3;
      uVar3 = local_30;
      FUN_14373fa10(uVar1,local_res20,param_1,lVar4,0,0xffffffff,&local_48);
      if ((local_30 & 1) != 0) {
        FUN_143733a60(uVar3 & 0xfffffffffffffffe);
      }
      param_1 = param_1 + 0x10;
      param_2 = param_2 + 2;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 14373fe10 FUN_14373fe10 body=328 status=ok
// SIG undefined FUN_14373fe10(void)

void FUN_14373fe10(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res20 [8];
  undefined8 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  lVar6 = (longlong)param_4;
  uVar2 = FUN_14373fbe0(param_3);
  plVar3 = (longlong *)FUN_143714420(uVar2);
  if (plVar3 == (longlong *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *plVar3;
  }
  uVar2 = FUN_1437151a0(uVar2);
  if (0 < lVar6) {
    puVar5 = (undefined4 *)(param_1 + 8);
    do {
      *(undefined8 *)(puVar5 + -2) = 0;
      puVar1 = (undefined4 *)((param_2 - param_1) + (longlong)puVar5);
      *puVar5 = 0;
      *(undefined4 *)((longlong)puVar1 + (param_1 - param_2) + 4) = 0x80000000;
      local_48 = *(undefined8 *)((param_2 - param_1) + -8 + (longlong)puVar5);
      local_38 = *puVar1;
      local_34 = 0;
      local_30 = 0;
      local_40 = lVar7;
      uVar4 = local_30;
      if (lVar7 != 0) {
        local_34 = FUN_1437152f0(lVar7);
        uVar4 = FUN_1437151a0(lVar7);
        if ((uVar4 & 1) != 0) {
          FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
        }
      }
      local_30 = uVar4;
      uVar4 = local_30;
      FUN_14373fa10(uVar2,local_res20,puVar5 + -2,lVar7,0,*puVar5,&local_48);
      if ((local_30 & 1) != 0) {
        FUN_143733a60(uVar4 & 0xfffffffffffffffe);
      }
      puVar5 = puVar5 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 14373ff60 FUN_14373ff60 body=161 status=ok
// SIG undefined FUN_14373ff60(void)

void FUN_14373ff60(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_3;
  uVar1 = FUN_14373fbe0(param_2);
  puVar2 = (undefined8 *)FUN_143714420(uVar1,2);
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar2;
  }
  uVar1 = FUN_1437151a0(uVar1);
  if (0 < lVar4) {
    do {
      if (*(int *)(param_1 + 1) != 0) {
        FUN_143749de0(*param_1,uVar3);
      }
      FUN_14373fc80(uVar1,param_1,uVar3);
      param_1 = param_1 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 143740010 FUN_143740010 body=223 status=ok
// SIG undefined FUN_143740010(void)

void FUN_143740010(undefined8 param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)FUN_143714490(param_1,1);
  bVar1 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    bVar1 = (byte)*puVar2;
  }
  uVar4 = 0;
  if ((bVar1 & 0xf) == 8) {
    uVar4 = param_1;
  }
  puVar2 = (undefined8 *)FUN_143714420(uVar4,2);
  if (puVar2 == (undefined8 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar2;
  }
  puVar2 = (undefined8 *)FUN_1437143d0(param_1,0x40);
  *puVar2 = &LAB_143704fc0;
  puVar2 = (undefined8 *)FUN_1437143d0(param_1,0x200);
  *puVar2 = FUN_14373ff60;
  lVar3 = FUN_14374a240(uVar4);
  if (lVar3 != 0) {
    puVar2 = (undefined8 *)FUN_1437143d0(param_1,0x80);
    *puVar2 = FUN_14373fe10;
    puVar2 = (undefined8 *)FUN_1437143d0(param_1,0x400);
    *puVar2 = FUN_14373fcf0;
    return;
  }
  puVar2 = (undefined8 *)FUN_1437143d0(param_1,0x80);
  *puVar2 = 0;
  puVar2 = (undefined8 *)FUN_1437143d0(param_1,0x400);
  *puVar2 = 0;
  return;
}



// FUNCTION 1437400f0 FUN_1437400f0 body=140 status=ok
// SIG undefined FUN_1437400f0(void)

undefined4 *
FUN_1437400f0(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             longlong param_5)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_143703a50();
  }
  uVar3 = 0;
  if (param_5 != 0) {
    iVar1 = FUN_14370c910();
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2,iVar1 + 1);
    FUN_14370c700(uVar3,param_5,iVar1 + 1);
  }
  *param_3 = uVar3;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143740180 FUN_143740180 body=41 status=ok
// SIG undefined FUN_143740180(void)

uint FUN_143740180(char *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0x811c9dc5;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    param_1 = param_1 + 1;
    uVar2 = ((int)cVar1 ^ uVar2) * 0x1000193;
    cVar1 = *param_1;
  }
  return uVar2;
}



// FUNCTION 1437401b0 setValue body=111 status=ok
// SIG undefined setValue(void)

undefined4 *
hkReflect::Var::VarImpl::setValue
          (undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
          undefined8 *param_5)

{
  *param_3 = *param_5;
  param_3[1] = param_5[1];
  if ((*(byte *)(param_5 + 2) & 1) != 0) {
    FUN_1437329e0(param_5[2] & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    FUN_143733a60(param_3[2] & 0xfffffffffffffffe);
  }
  param_3[2] = param_5[2];
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143740220 getValue body=112 status=ok
// SIG undefined getValue(void)

undefined4 *
hkReflect::Var::VarImpl::getValue
          (undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
          undefined8 *param_5)

{
  *param_5 = *param_3;
  param_5[1] = param_3[1];
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_5 + 2) & 1) != 0) {
    FUN_143733a60(param_5[2] & 0xfffffffffffffffe);
  }
  param_5[2] = param_3[2];
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143740290 FUN_143740290 body=133 status=ok
// SIG undefined FUN_143740290(void)

undefined4 *
FUN_143740290(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  
  if (param_6 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1437151a0(param_6);
  }
  if ((uVar1 & 1) != 0) {
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
  }
  *param_3 = param_5;
  param_3[1] = param_6;
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    FUN_143733a60(param_3[2] & 0xfffffffffffffffe);
  }
  param_3[2] = uVar1;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143740320 FUN_143740320 body=262 status=ok
// SIG undefined FUN_143740320(void)

undefined8 FUN_143740320(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  undefined8 local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  puVar1 = (undefined8 *)*param_1;
  uVar7 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uVar4 = uStack_30;
  uVar5 = local_38;
  if (puVar1[1] != 0) {
    puVar3 = (undefined8 *)FUN_143714490(puVar1[1],1);
    bVar2 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar3;
    }
    uVar4 = uStack_30;
    uVar5 = local_38;
    if ((bVar2 & 0xf) == 4) {
      uVar5 = *puVar1;
      uVar4 = puVar1[1];
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        FUN_1437329e0(puVar1[2] & 0xfffffffffffffffe);
      }
      uVar7 = puVar1[2];
    }
  }
  local_48 = 0;
  uStack_40 = uStack_40 & 0xffffff00;
  (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffe) + 0x38))
            ((longlong *)(param_3[2] & 0xfffffffffffffffe),local_res8,*param_3,param_3[1],&local_48)
  ;
  plVar6 = (longlong *)(uVar7 & 0xfffffffffffffffe);
  local_38 = local_48;
  uStack_30 = CONCAT44(uStack_3c,uStack_40);
  (**(code **)(*plVar6 + 0x30))(plVar6,param_2,uVar5,uVar4,&local_38);
  if ((uVar7 & 1) != 0) {
    FUN_143733a60(plVar6);
  }
  return param_2;
}



// FUNCTION 143740430 FUN_143740430 body=269 status=ok
// SIG undefined FUN_143740430(void)

undefined8 FUN_143740430(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  puVar1 = (undefined8 *)*param_1;
  uVar5 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uVar4 = uStack_30;
  uVar7 = local_38;
  if (puVar1[1] != 0) {
    puVar3 = (undefined8 *)FUN_143714490(puVar1[1],1);
    bVar2 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar3;
    }
    uVar4 = uStack_30;
    uVar7 = local_38;
    if ((bVar2 & 0xf) == 6) {
      uVar7 = *puVar1;
      uVar4 = puVar1[1];
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        FUN_1437329e0(puVar1[2] & 0xfffffffffffffffe);
      }
      uVar5 = puVar1[2];
    }
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffe) + 0x50))
            ((longlong *)(param_3[2] & 0xfffffffffffffffe),local_res8,*param_3,param_3[1],&local_38)
  ;
  plVar6 = (longlong *)(uVar5 & 0xfffffffffffffffe);
  (**(code **)(*plVar6 + 0x48))(plVar6,param_2,uVar7,uVar4,&local_38);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  if ((uVar5 & 1) != 0) {
    FUN_143733a60(plVar6);
  }
  return param_2;
}



// FUNCTION 143740540 FUN_143740540 body=217 status=ok
// SIG undefined FUN_143740540(void)

void FUN_143740540(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  uVar3 = 0;
  bVar1 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_2[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_2[1],1);
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) == 1) {
      local_28 = *param_2;
      uStack_20 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      if ((local_18 & 1) != 0) {
        FUN_143733a60(local_18 & 0xfffffffffffffffe);
      }
      local_18 = param_2[2];
    }
  }
  puVar2 = (undefined8 *)FUN_143714490(uStack_20,1);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = (uint)*puVar2;
  }
  (*(code *)(&DAT_146b82ca0)[uVar3 & 0xf])(param_1,&local_28);
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143740620 FUN_143740620 body=245 status=ok
// SIG undefined FUN_143740620(void)

undefined4 * FUN_143740620(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  uVar4 = 0;
  bVar1 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_3[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_3[1],1);
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) == 1) {
      local_28 = *param_3;
      uStack_20 = param_3[1];
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
      }
      if ((local_18 & 1) != 0) {
        FUN_143733a60(local_18 & 0xfffffffffffffffe);
      }
      local_18 = param_3[2];
    }
  }
  puVar2 = (undefined8 *)FUN_143714490(uStack_20,1);
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = (uint)*puVar2;
  }
  puVar3 = (undefined4 *)(*(code *)(&DAT_146b82cf0)[uVar4 & 0xf])(param_1,local_res8,&local_28);
  *param_2 = *puVar3;
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143740720 FUN_143740720 body=165 status=ok
// SIG undefined FUN_143740720(void)

void FUN_143740720(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  uVar3 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_2[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_2[1],1);
    if (puVar2 == (undefined8 *)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) == 8) {
      local_28 = *param_2;
      uStack_20 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      uVar3 = param_2[2];
      local_18 = uVar3;
    }
  }
  FUN_143744780(param_1,&local_28);
  if ((uVar3 & 1) != 0) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437407d0 FUN_1437407d0 body=103 status=ok
// SIG undefined FUN_1437407d0(void)

void FUN_1437407d0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (*(longlong *)(param_2 + 8) != 0) {
    puVar2 = (undefined8 *)FUN_143714490(*(longlong *)(param_2 + 8),1);
    if (puVar2 == (undefined8 *)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) == 6) {
      if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
        FUN_1437329e0(*(ulonglong *)(param_2 + 0x10) & 0xfffffffffffffffe);
      }
      uVar3 = *(ulonglong *)(param_2 + 0x10);
    }
  }
  if ((uVar3 & 1) != 0) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143740840 FUN_143740840 body=183 status=ok
// SIG undefined FUN_143740840(void)

void FUN_143740840(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  bVar2 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_2[1] != 0) {
    puVar1 = (undefined8 *)FUN_143714490(param_2[1],1);
    if (puVar1 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar1;
    }
    if ((bVar2 & 0xf) == 7) {
      local_28 = *param_2;
      uStack_20 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      if ((local_18 & 1) != 0) {
        FUN_143733a60(local_18 & 0xfffffffffffffffe);
      }
      local_18 = param_2[2];
    }
  }
  FUN_1437448a0(param_1,&local_28);
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143740900 FUN_143740900 body=219 status=ok
// SIG undefined FUN_143740900(void)

void FUN_143740900(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined1 local_res10 [24];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  longlong local_20 [2];
  ulonglong local_10;
  
  bVar2 = 0;
  local_28 = 0;
  local_38 = 0;
  uStack_30 = 0;
  if (param_2[1] != 0) {
    puVar1 = (undefined8 *)FUN_143714490(param_2[1],1);
    if (puVar1 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar1;
    }
    if ((bVar2 & 0xf) == 3) {
      local_38 = *param_2;
      uStack_30 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      if ((local_28 & 1) != 0) {
        FUN_143733a60(local_28 & 0xfffffffffffffffe);
      }
      local_28 = param_2[2];
    }
  }
  FUN_143714e00(uStack_30,local_20);
  if (local_20[0] != 0) {
    FUN_1437420f0(&local_38,local_res10,local_20);
  }
  if ((local_10 & 1) != 0) {
    FUN_143733a60(local_10 & 0xfffffffffffffffe);
  }
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437409e0 FUN_1437409e0 body=238 status=ok
// SIG undefined FUN_1437409e0(void)

void FUN_1437409e0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong local_28;
  longlong lStack_20;
  ulonglong local_18;
  
  uVar7 = 0;
  local_28 = 0;
  lStack_20 = 0;
  lVar5 = lStack_20;
  lVar6 = local_28;
  if (param_2[1] != 0) {
    puVar3 = (undefined8 *)FUN_143714490(param_2[1],1);
    if (puVar3 == (undefined8 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)*puVar3;
    }
    uVar4 = uVar4 & 0xf;
    if ((uVar4 == 4) ||
       ((lVar5 = lStack_20, lVar6 = local_28, (uVar4 - 2 & 0xfffffffc) == 0 && (uVar4 != 4)))) {
      lVar6 = *param_2;
      lVar5 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      uVar7 = param_2[2];
    }
  }
  FUN_143714e00(lVar5,&local_28);
  lVar1 = local_28;
  if (local_28 != 0) {
    iVar2 = FUN_1437152f0(lVar5);
    FGenericPlatformString::Memcpy(lVar6,lVar1,(longlong)iVar2);
  }
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  if ((uVar7 & 1) == 0) {
    return;
  }
  FUN_143733a60(uVar7 & 0xfffffffffffffffe);
  return;
}



// FUNCTION 143740ad0 FUN_143740ad0 body=103 status=ok
// SIG undefined FUN_143740ad0(void)

void FUN_143740ad0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (*(longlong *)(param_2 + 8) != 0) {
    puVar2 = (undefined8 *)FUN_143714490(*(longlong *)(param_2 + 8),1);
    if (puVar2 == (undefined8 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*puVar2;
    }
    if ((uVar1 & 0xf) == 0) {
      if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
        FUN_1437329e0(*(ulonglong *)(param_2 + 0x10) & 0xfffffffffffffffe);
      }
      uVar3 = *(ulonglong *)(param_2 + 0x10);
    }
  }
  if ((uVar3 & 1) != 0) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143740b40 FUN_143740b40 body=335 status=ok
// SIG undefined FUN_143740b40(void)

undefined4 * FUN_143740b40(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 local_res8 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  undefined1 local_38 [32];
  
  uVar6 = 0;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  bVar1 = 0;
  uVar7 = uVar6;
  if (param_3[1] != 0) {
    puVar3 = (undefined8 *)FUN_143714490(param_3[1],1);
    bVar2 = bVar1;
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar3;
    }
    uVar7 = 0;
    if ((bVar2 & 0xf) == 8) {
      local_68 = *param_3;
      uStack_60 = param_3[1];
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
      }
      uVar7 = param_3[2];
      local_58 = uVar7;
    }
  }
  puVar3 = (undefined8 *)*param_1;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  if (puVar3[1] != 0) {
    puVar4 = (undefined8 *)FUN_143714490(puVar3[1],1);
    if (puVar4 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar4;
    }
    if ((bVar1 & 0xf) == 8) {
      local_50 = *puVar3;
      uStack_48 = puVar3[1];
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
      }
      uVar6 = puVar3[2];
      local_40 = uVar6;
    }
  }
  uVar5 = FUN_143742a00(&local_68,local_38);
  FUN_143742bd0(&local_50,local_res8,uVar5);
  if ((uVar6 & 1) != 0) {
    FUN_143733a60(uVar6 & 0xfffffffffffffffe);
  }
  *param_2 = local_res8[0];
  if ((uVar7 & 1) != 0) {
    FUN_143733a60(uVar7 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143740c90 FUN_143740c90 body=374 status=ok
// SIG undefined FUN_143740c90(void)

undefined4 * FUN_143740c90(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  undefined8 uStack_50;
  
  uVar5 = 0;
  uStack_50 = 0;
  bVar1 = 0;
  if (param_3[1] == 0) {
LAB_143740d00:
    uVar10 = 0;
    uVar7 = uStack_50;
    uVar11 = uVar5;
  }
  else {
    puVar3 = (undefined8 *)FUN_143714490(param_3[1],1);
    bVar2 = bVar1;
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar3;
    }
    if ((bVar2 & 0xf) != 2) goto LAB_143740d00;
    uVar10 = *param_3;
    uVar7 = param_3[1];
    if ((*(byte *)(param_3 + 2) & 1) != 0) {
      FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
    }
    uVar11 = param_3[2];
  }
  puVar3 = (undefined8 *)*param_1;
  uStack_50 = 0;
  if (puVar3[1] != 0) {
    puVar4 = (undefined8 *)FUN_143714490(puVar3[1],1);
    if (puVar4 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar4;
    }
    if ((bVar1 & 0xf) == 2) {
      uVar9 = *puVar3;
      uStack_50 = puVar3[1];
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
      }
      uVar5 = puVar3[2];
      goto LAB_143740d67;
    }
  }
  uVar9 = 0;
LAB_143740d67:
  local_res8[0] = 0;
  plVar6 = (longlong *)(uVar11 & 0xfffffffffffffffe);
  (**(code **)(*plVar6 + 0x38))(plVar6,local_res18,uVar10,uVar7,local_res8);
  plVar8 = (longlong *)(uVar5 & 0xfffffffffffffffe);
  (**(code **)(*plVar8 + 0x30))(plVar8,local_res10,uVar9,uStack_50,local_res8[0]);
  if ((uVar5 & 1) != 0) {
    FUN_143733a60(plVar8);
  }
  *param_2 = local_res10[0];
  if ((uVar11 & 1) != 0) {
    FUN_143733a60(plVar6);
  }
  return param_2;
}



// FUNCTION 143740e10 FUN_143740e10 body=380 status=ok
// SIG undefined FUN_143740e10(void)

undefined4 * FUN_143740e10(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined8 uStack_50;
  
  uVar5 = 0;
  uStack_50 = 0;
  bVar1 = 0;
  if (param_3[1] == 0) {
LAB_143740e80:
    uVar10 = 0;
    uVar7 = uStack_50;
    uVar11 = uVar5;
  }
  else {
    puVar3 = (undefined8 *)FUN_143714490(param_3[1],1);
    bVar2 = bVar1;
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar3;
    }
    if ((bVar2 & 0xf) != 5) goto LAB_143740e80;
    uVar10 = *param_3;
    uVar7 = param_3[1];
    if ((*(byte *)(param_3 + 2) & 1) != 0) {
      FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
    }
    uVar11 = param_3[2];
  }
  puVar3 = (undefined8 *)*param_1;
  uStack_50 = 0;
  if (puVar3[1] != 0) {
    puVar4 = (undefined8 *)FUN_143714490(puVar3[1],1);
    if (puVar4 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar4;
    }
    if ((bVar1 & 0xf) == 5) {
      uVar9 = *puVar3;
      uStack_50 = puVar3[1];
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
      }
      uVar5 = puVar3[2];
      goto LAB_143740ee7;
    }
  }
  uVar9 = 0;
LAB_143740ee7:
  local_res18 = 0;
  plVar6 = (longlong *)(uVar11 & 0xfffffffffffffffe);
  (**(code **)(*plVar6 + 0x38))(plVar6,local_res10,uVar10,uVar7,&local_res18);
  plVar8 = (longlong *)(uVar5 & 0xfffffffffffffffe);
  (**(code **)(*plVar8 + 0x30))(plVar8,local_res8,uVar9,uStack_50,local_res18);
  if ((uVar5 & 1) != 0) {
    FUN_143733a60(plVar8);
  }
  *param_2 = local_res8[0];
  if ((uVar11 & 1) != 0) {
    FUN_143733a60(plVar6);
  }
  return param_2;
}



// FUNCTION 143740f90 FUN_143740f90 body=192 status=ok
// SIG undefined FUN_143740f90(void)

undefined4 * FUN_143740f90(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined4 local_res10 [2];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  uVar3 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_3[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_3[1],1);
    if (puVar2 == (undefined8 *)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) == 4) {
      local_28 = *param_3;
      uStack_20 = param_3[1];
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
      }
      uVar3 = param_3[2];
      local_18 = uVar3;
    }
  }
  FUN_143740320(param_1,local_res10,&local_28);
  *param_2 = local_res10[0];
  if ((uVar3 & 1) != 0) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143741050 FUN_143741050 body=192 status=ok
// SIG undefined FUN_143741050(void)

undefined4 * FUN_143741050(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined4 local_res10 [2];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  uVar3 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_3[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_3[1],1);
    if (puVar2 == (undefined8 *)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) == 6) {
      local_28 = *param_3;
      uStack_20 = param_3[1];
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
      }
      uVar3 = param_3[2];
      local_18 = uVar3;
    }
  }
  FUN_143740430(param_1,local_res10,&local_28);
  *param_2 = local_res10[0];
  if ((uVar3 & 1) != 0) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143741110 FUN_143741110 body=378 status=ok
// SIG undefined FUN_143741110(void)

undefined4 * FUN_143741110(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined4 local_res8 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  uVar7 = 0;
  local_40 = 0;
  uStack_38 = 0;
  bVar1 = 0;
  uVar5 = uVar7;
  uVar6 = local_40;
  uVar8 = uStack_38;
  if (param_3[1] != 0) {
    puVar3 = (undefined8 *)FUN_143714490(param_3[1],1);
    bVar2 = bVar1;
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar3;
    }
    uVar6 = local_40;
    uVar8 = uStack_38;
    if ((bVar2 & 0xf) == 7) {
      uVar6 = *param_3;
      uVar8 = param_3[1];
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
      }
      uVar5 = param_3[2];
    }
  }
  puVar3 = (undefined8 *)*param_1;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (puVar3[1] != 0) {
    puVar4 = (undefined8 *)FUN_143714490(puVar3[1],1);
    if (puVar4 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar4;
    }
    if ((bVar1 & 0xf) == 7) {
      local_58 = *puVar3;
      uStack_50 = puVar3[1];
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
      }
      uVar7 = puVar3[2];
      local_48 = uVar7;
    }
  }
  local_40 = uVar6;
  uStack_38 = uVar8;
  local_30 = uVar5;
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  FUN_143742c20(&local_58,local_res8,&local_40);
  if ((local_30 & 1) != 0) {
    FUN_143733a60(local_30 & 0xfffffffffffffffe);
  }
  if ((uVar7 & 1) != 0) {
    FUN_143733a60(uVar7 & 0xfffffffffffffffe);
  }
  *param_2 = local_res8[0];
  if ((uVar5 & 1) != 0) {
    FUN_143733a60(uVar5 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143741290 FUN_143741290 body=369 status=ok
// SIG undefined FUN_143741290(void)

undefined4 * FUN_143741290(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined8 uStack_50;
  
  uVar4 = 0;
  uStack_50 = 0;
  if (param_3[1] == 0) {
LAB_1437412f8:
    uVar9 = 0;
    uVar6 = uStack_50;
  }
  else {
    puVar2 = (undefined8 *)FUN_143714490(param_3[1],1);
    bVar1 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) != 3) goto LAB_1437412f8;
    uVar9 = *param_3;
    uVar6 = param_3[1];
    if ((*(byte *)(param_3 + 2) & 1) != 0) {
      FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
    }
    uVar4 = param_3[2];
  }
  puVar2 = (undefined8 *)*param_1;
  uVar8 = 0;
  uStack_50 = 0;
  if (puVar2[1] != 0) {
    puVar3 = (undefined8 *)FUN_143714490(puVar2[1],1);
    bVar1 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar3;
    }
    if ((bVar1 & 0xf) == 3) {
      uVar10 = *puVar2;
      uStack_50 = puVar2[1];
      if ((*(byte *)(puVar2 + 2) & 1) != 0) {
        FUN_1437329e0(puVar2[2] & 0xfffffffffffffffe);
      }
      uVar8 = puVar2[2];
      goto LAB_14374135d;
    }
  }
  uVar10 = 0;
LAB_14374135d:
  local_res18 = 0;
  plVar5 = (longlong *)(uVar4 & 0xfffffffffffffffe);
  (**(code **)(*plVar5 + 0x38))(plVar5,local_res10,uVar9,uVar6,&local_res18);
  plVar7 = (longlong *)(uVar8 & 0xfffffffffffffffe);
  (**(code **)(*plVar7 + 0x30))(plVar7,local_res8,uVar10,uStack_50,local_res18);
  if ((uVar8 & 1) != 0) {
    FUN_143733a60(plVar7);
  }
  *param_2 = local_res8[0];
  if ((uVar4 & 1) != 0) {
    FUN_143733a60(plVar5);
  }
  return param_2;
}



// FUNCTION 143741410 FUN_143741410 body=125 status=ok
// SIG undefined FUN_143741410(void)

undefined4 * FUN_143741410(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (*(longlong *)(param_3 + 8) != 0) {
    puVar2 = (undefined8 *)FUN_143714490(*(longlong *)(param_3 + 8),1);
    if (puVar2 == (undefined8 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*puVar2;
    }
    if ((uVar1 & 0xf) == 0) {
      if ((*(byte *)(param_3 + 0x10) & 1) != 0) {
        FUN_1437329e0(*(ulonglong *)(param_3 + 0x10) & 0xfffffffffffffffe);
      }
      uVar3 = *(ulonglong *)(param_3 + 0x10);
    }
  }
  *param_2 = 0x80040200;
  if ((uVar3 & 1) != 0) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143741490 FUN_143741490 body=185 status=ok
// SIG undefined FUN_143741490(void)

ulonglong FUN_143741490(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  uVar4 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_2[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_2[1],1);
    if (puVar2 == (undefined8 *)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) == 8) {
      local_28 = *param_2;
      uStack_20 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      uVar4 = param_2[2];
      local_18 = uVar4;
    }
  }
  uVar3 = FUN_143743c40(param_1,&local_28,param_3);
  if ((uVar4 & 1) != 0) {
    FUN_143733a60(uVar4 & 0xfffffffffffffffe);
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 143741550 FUN_143741550 body=185 status=ok
// SIG undefined FUN_143741550(void)

ulonglong FUN_143741550(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  uVar4 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_2[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_2[1],1);
    if (puVar2 == (undefined8 *)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) == 2) {
      local_28 = *param_2;
      uStack_20 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      uVar4 = param_2[2];
      local_18 = uVar4;
    }
  }
  uVar3 = FUN_143743eb0(param_1,&local_28,param_3);
  if ((uVar4 & 1) != 0) {
    FUN_143733a60(uVar4 & 0xfffffffffffffffe);
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 143741610 FUN_143741610 body=185 status=ok
// SIG undefined FUN_143741610(void)

ulonglong FUN_143741610(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  uVar4 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_2[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_2[1],1);
    if (puVar2 == (undefined8 *)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) == 5) {
      local_28 = *param_2;
      uStack_20 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      uVar4 = param_2[2];
      local_18 = uVar4;
    }
  }
  uVar3 = FUN_143743fb0(param_1,&local_28,param_3);
  if ((uVar4 & 1) != 0) {
    FUN_143733a60(uVar4 & 0xfffffffffffffffe);
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 1437416d0 FUN_1437416d0 body=185 status=ok
// SIG undefined FUN_1437416d0(void)

ulonglong FUN_1437416d0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  uVar4 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_2[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_2[1],1);
    if (puVar2 == (undefined8 *)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) == 4) {
      local_28 = *param_2;
      uStack_20 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      uVar4 = param_2[2];
      local_18 = uVar4;
    }
  }
  uVar3 = FUN_1437440e0(param_1,&local_28,param_3);
  if ((uVar4 & 1) != 0) {
    FUN_143733a60(uVar4 & 0xfffffffffffffffe);
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 143741790 FUN_143741790 body=104 status=ok
// SIG undefined FUN_143741790(void)

undefined8 FUN_143741790(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (*(longlong *)(param_2 + 8) != 0) {
    puVar2 = (undefined8 *)FUN_143714490(*(longlong *)(param_2 + 8),1);
    if (puVar2 == (undefined8 *)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) == 1) {
      if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
        FUN_1437329e0(*(ulonglong *)(param_2 + 0x10) & 0xfffffffffffffffe);
      }
      uVar3 = *(ulonglong *)(param_2 + 0x10);
    }
  }
  if ((uVar3 & 1) != 0) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  return 0;
}



// FUNCTION 143741800 FUN_143741800 body=185 status=ok
// SIG undefined FUN_143741800(void)

ulonglong FUN_143741800(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  uVar4 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_2[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_2[1],1);
    if (puVar2 == (undefined8 *)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) == 6) {
      local_28 = *param_2;
      uStack_20 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      uVar4 = param_2[2];
      local_18 = uVar4;
    }
  }
  uVar3 = FUN_143744240(param_1,&local_28,param_3);
  if ((uVar4 & 1) != 0) {
    FUN_143733a60(uVar4 & 0xfffffffffffffffe);
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 1437418c0 FUN_1437418c0 body=203 status=ok
// SIG undefined FUN_1437418c0(void)

ulonglong FUN_1437418c0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  byte bVar3;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  bVar3 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_2[1] != 0) {
    puVar1 = (undefined8 *)FUN_143714490(param_2[1],1);
    if (puVar1 != (undefined8 *)0x0) {
      bVar3 = (byte)*puVar1;
    }
    if ((bVar3 & 0xf) == 7) {
      local_28 = *param_2;
      uStack_20 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      if ((local_18 & 1) != 0) {
        FUN_143733a60(local_18 & 0xfffffffffffffffe);
      }
      local_18 = param_2[2];
    }
  }
  uVar2 = FUN_143744390(param_1,&local_28,param_3);
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 143741990 FUN_143741990 body=185 status=ok
// SIG undefined FUN_143741990(void)

ulonglong FUN_143741990(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  uVar4 = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (param_2[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_2[1],1);
    if (puVar2 == (undefined8 *)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) == 3) {
      local_28 = *param_2;
      uStack_20 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_1437329e0(param_2[2] & 0xfffffffffffffffe);
      }
      uVar4 = param_2[2];
      local_18 = uVar4;
    }
  }
  uVar3 = FUN_143744680(param_1,&local_28,param_3);
  if ((uVar4 & 1) != 0) {
    FUN_143733a60(uVar4 & 0xfffffffffffffffe);
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 143741a50 FUN_143741a50 body=105 status=ok
// SIG undefined FUN_143741a50(void)

undefined8 FUN_143741a50(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (*(longlong *)(param_2 + 8) != 0) {
    puVar2 = (undefined8 *)FUN_143714490(*(longlong *)(param_2 + 8),1);
    if (puVar2 == (undefined8 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*puVar2;
    }
    if ((uVar1 & 0xf) == 0) {
      if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
        FUN_1437329e0(*(ulonglong *)(param_2 + 0x10) & 0xfffffffffffffffe);
      }
      uVar3 = *(ulonglong *)(param_2 + 0x10);
    }
  }
  if ((uVar3 & 1) != 0) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  return 0;
}



// FUNCTION 143741ac0 FUN_143741ac0 body=203 status=ok
// SIG undefined FUN_143741ac0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_143741ac0(undefined8 param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b82c8c) {
    _Init_thread_header(&DAT_146b82c8c);
    if (DAT_146b82c8c == -1) {
      _DAT_146b82cc8 = FUN_1437409e0;
      _DAT_146b82ce0 = FUN_143740720;
      _DAT_146b82cc0 = FUN_1437409e0;
      _DAT_146b82cd8 = FUN_143740840;
      _DAT_146b82cd0 = FUN_1437407d0;
      _DAT_146b82cb8 = FUN_143740900;
      _DAT_146b82ca8 = FUN_143740540;
      DAT_146b82ca0 = FUN_143740ad0;
      _DAT_146b82cb0 = FUN_1437409e0;
      _Init_thread_footer(&DAT_146b82c8c);
    }
  }
  return param_1;
}



// FUNCTION 143741b90 FUN_143741b90 body=217 status=ok
// SIG undefined FUN_143741b90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_143741b90(undefined8 param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b82c88) {
    _Init_thread_header(&DAT_146b82c88);
    if (DAT_146b82c88 == -1) {
      _DAT_146b82d30 = FUN_143740b40;
      _DAT_146b82d28 = FUN_143741110;
      _DAT_146b82d20 = FUN_143741050;
      _DAT_146b82d18 = FUN_143740e10;
      _DAT_146b82d10 = FUN_143740f90;
      _DAT_146b82d08 = FUN_143741290;
      _DAT_146b82d00 = FUN_143740c90;
      _DAT_146b82cf8 = FUN_143740620;
      DAT_146b82cf0 = FUN_143741410;
      _Init_thread_footer(&DAT_146b82c88);
    }
  }
  return param_1;
}



// FUNCTION 143741c70 FUN_143741c70 body=217 status=ok
// SIG undefined FUN_143741c70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_143741c70(undefined8 param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b82c90) {
    _Init_thread_header(&DAT_146b82c90);
    if (DAT_146b82c90 == -1) {
      _DAT_146b82d80 = FUN_143741490;
      _DAT_146b82d78 = FUN_1437418c0;
      _DAT_146b82d70 = FUN_143741800;
      _DAT_146b82d68 = FUN_143741610;
      _DAT_146b82d60 = FUN_1437416d0;
      _DAT_146b82d58 = FUN_143741990;
      _DAT_146b82d50 = FUN_143741550;
      _DAT_146b82d48 = FUN_143741790;
      DAT_146b82d40 = FUN_143741a50;
      _Init_thread_footer(&DAT_146b82c90);
    }
  }
  return param_1;
}



// FUNCTION 143741d50 FUN_143741d50 body=126 status=ok
// SIG undefined FUN_143741d50(void)

longlong * FUN_143741d50(undefined8 param_1,longlong *param_2,int param_3)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  plVar4 = (longlong *)FUN_143742a00(param_1,local_28);
  bVar1 = *(byte *)(plVar4 + 3);
  uVar2 = plVar4[3];
  lVar3 = plVar4[1];
  *param_2 = (longlong)(*(int *)((longlong)plVar4 + 0x14) * param_3) + *plVar4;
  param_2[1] = lVar3;
  param_2[2] = (ulonglong)(bVar1 & 1) | uVar2 & 0xfffffffffffffffe;
  if ((ulonglong)(bVar1 & 1) != 0) {
    FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
  }
  if ((local_10 & 1) != 0) {
    FUN_143733a60(local_10 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143741dd0 FUN_143741dd0 body=246 status=ok
// SIG undefined FUN_143741dd0(void)

undefined8 * FUN_143741dd0(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong local_28;
  longlong lStack_20;
  ulonglong local_18;
  
  uVar4 = 0;
  local_28 = 0;
  lStack_20 = 0;
  if (param_1[1] != 0) {
    puVar3 = (undefined8 *)FUN_143714490(param_1[1],1);
    bVar2 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar3;
    }
    if ((bVar2 & 0xf) == 8) {
      lStack_20 = param_1[1];
      lVar1 = *param_1;
      local_28 = lVar1;
      if ((*(byte *)(param_1 + 2) & 1) != 0) {
        FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
      }
      uVar4 = param_1[2];
      local_18 = uVar4;
      if (lVar1 != 0) {
        FUN_143741d50(&local_28,param_2,param_3);
        if ((uVar4 & 1) == 0) {
          return param_2;
        }
        FUN_143733a60(uVar4 & 0xfffffffffffffffe);
        return param_2;
      }
    }
  }
  if ((uVar4 & 1) != 0) {
    FUN_143733a60(uVar4 & 0xfffffffffffffffe);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    FUN_1437329e0(0);
  }
  return param_2;
}



// FUNCTION 143741ed0 FUN_143741ed0 body=113 status=ok
// SIG undefined FUN_143741ed0(void)

/* WARNING: Removing unreachable block (ram,0x000143741f2c) */

undefined8 * FUN_143741ed0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulonglong local_res8;
  
  if ((*param_1 != 0) && (FUN_143714a90(param_1[1],&local_res8,param_3,1), 1 < local_res8)) {
    FUN_143741f50(param_1,param_2);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 143741f50 FUN_143741f50 body=307 status=ok
// SIG undefined FUN_143741f50(void)

/* WARNING: Removing unreachable block (ram,0x000143742070) */

longlong * FUN_143741f50(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 local_res8 [8];
  ulonglong local_res20;
  ulonglong local_28;
  undefined1 local_20 [8];
  
  if ((*param_1 == 0) || (FUN_1437140a0(&local_res20,param_3), local_res20 < 2)) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return param_2;
  }
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    lVar1 = param_1[1];
    FUN_1437140a0(&local_28,lVar1);
    if (1 < local_28) {
      FUN_1437140a0(local_20,lVar1);
      pbVar3 = (byte *)FUN_143714f30(local_20,local_res8);
      if ((*pbVar3 & 0x50) != 0) goto LAB_143741fd9;
    }
    uVar4 = FUN_1437151a0(local_res20);
    uVar5 = 0;
  }
  else {
LAB_143741fd9:
    uVar4 = param_1[2];
    FUN_143714060(local_res8,local_res20);
    uVar4 = (**(code **)(*(longlong *)(uVar4 & 0xfffffffffffffffe) + 0x20))
                      ((longlong *)(uVar4 & 0xfffffffffffffffe),param_1,local_res8);
    uVar5 = 1;
  }
  iVar2 = FUN_143715270(&local_res20);
  lVar1 = *param_1;
  param_2[1] = local_res20;
  *param_2 = iVar2 + lVar1;
  param_2[2] = uVar5 | uVar4;
  if (uVar5 == 0 && (uVar4 & 1) == 0) {
    return param_2;
  }
  FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  return param_2;
}



// FUNCTION 143742090 FUN_143742090 body=81 status=ok
// SIG undefined FUN_143742090(void)

void FUN_143742090(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = FUN_1437151a0();
    if ((uVar1 & 1) != 0) {
      FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
    }
    if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
      FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
    }
    *(ulonglong *)(param_1 + 0x10) = uVar1;
  }
  return;
}



// FUNCTION 1437420f0 FUN_1437420f0 body=351 status=ok
// SIG undefined FUN_1437420f0(void)

undefined4 * FUN_1437420f0(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  byte *pbVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  longlong *local_res20;
  undefined1 local_28 [16];
  
  if ((*param_1 != 0) && (*param_3 != 0)) {
    puVar3 = (undefined8 *)FUN_143714490(param_1[1],1);
    uVar9 = 0;
    if (puVar3 == (undefined8 *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (uint)*puVar3;
    }
    puVar3 = (undefined8 *)FUN_143714490(param_3[1],1);
    if (puVar3 == (undefined8 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*puVar3;
    }
    if (((uVar1 ^ uVar8) & 0xf) == 0) {
      lVar4 = FUN_142b7ebc0(*param_3,param_3[1],param_1[1]);
      if ((lVar4 != 0) && ((*(byte *)(param_1 + 2) & 1) == 0)) {
        lVar4 = param_1[1];
        FUN_1437140a0(&local_res20,lVar4);
        if ((longlong *)0x1 < local_res20) {
          FUN_1437140a0(local_28,lVar4);
          pbVar5 = (byte *)FUN_143714f30(local_28,local_res8);
          if ((*pbVar5 & 0x50) != 0) goto LAB_1437421eb;
        }
        puVar6 = (uint *)FUN_143715390(param_3[1],local_res8);
        if (((*puVar6 >> 3 & 1) == 0) &&
           (iVar2 = FUN_1437498d0(*param_1,*param_3,param_1[1],1), -1 < iVar2)) {
          *param_2 = 0;
          return param_2;
        }
      }
LAB_1437421eb:
      FUN_143741b90(&local_res20);
      local_res20 = param_1;
      puVar3 = (undefined8 *)FUN_143714490(param_3[1],1);
      if (puVar3 != (undefined8 *)0x0) {
        uVar9 = (uint)*puVar3;
      }
      puVar7 = (undefined4 *)
               (*(code *)(&DAT_146b82cf0)[uVar9 & 0xf])(&local_res20,local_res8,param_3);
      *param_2 = *puVar7;
      return param_2;
    }
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 143742250 FUN_143742250 body=229 status=ok
// SIG undefined FUN_143742250(void)

/* WARNING: Removing unreachable block (ram,0x00014374227b) */
/* WARNING: Removing unreachable block (ram,0x00014374230d) */

undefined8 * FUN_143742250(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  uint *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  if (*param_1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    puVar2 = (uint *)FUN_143715390(param_1[1],local_res8);
    if ((*puVar2 >> 3 & 1) == 0) {
      lVar3 = param_1[1];
    }
    else {
      lVar3 = *(longlong *)(param_1[1] + 8);
    }
    FUN_143749110(&local_28,param_1,lVar3);
    iVar1 = FUN_143749990(&local_28,param_1);
    if (-1 < iVar1) {
      *param_2 = local_28;
      param_2[1] = local_20;
      param_2[2] = local_18;
      return param_2;
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    if ((local_18 & 1) != 0) {
      FUN_143733a60(local_18 & 0xfffffffffffffffe);
    }
  }
  return param_2;
}



// FUNCTION 143742340 FUN_143742340 body=247 status=ok
// SIG undefined FUN_143742340(void)

uint FUN_143742340(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  
  if ((*param_1 != 0) && (*param_2 != 0)) {
    FUN_143741c70(local_res8);
    lVar1 = param_2[1];
    puVar3 = (undefined8 *)FUN_143714490(param_1[1],1);
    uVar4 = 0;
    uVar5 = uVar4;
    if (puVar3 != (undefined8 *)0x0) {
      uVar5 = (uint)*puVar3;
    }
    puVar3 = (undefined8 *)FUN_143714490(lVar1,1);
    if (puVar3 == (undefined8 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)*puVar3;
    }
    uVar5 = (uVar5 & 0xf) - (uVar2 & 0xf);
    if ((uVar5 == 0) && ((*param_1 != *param_2 || (uVar5 = uVar4, param_1[1] != param_2[1])))) {
      puVar3 = (undefined8 *)FUN_143714490(param_1[1],1);
      if (puVar3 != (undefined8 *)0x0) {
        uVar4 = (uint)*puVar3;
      }
      uVar5 = (*(code *)(&DAT_146b82d40)[uVar4 & 0xf])(local_res8,param_1,param_2);
    }
    return uVar5;
  }
  return (uint)(*param_2 != 0) - (uint)(*param_1 != 0);
}



// FUNCTION 143742440 FUN_143742440 body=93 status=ok
// SIG undefined FUN_143742440(void)

int FUN_143742440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (undefined8 *)FUN_143714490(param_2,1);
  uVar3 = 0;
  uVar2 = uVar3;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = (uint)*puVar1;
  }
  puVar1 = (undefined8 *)FUN_143714490(param_3,1);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = (uint)*puVar1;
  }
  return (uVar2 & 0xf) - (uVar3 & 0xf);
}



// FUNCTION 1437424a0 FUN_1437424a0 body=445 status=ok
// SIG undefined FUN_1437424a0(void)

void FUN_1437424a0(longlong param_1,longlong *param_2,char *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ushort local_res8 [4];
  ushort local_res10 [4];
  undefined1 local_e8 [64];
  char *local_a8;
  undefined4 local_a0;
  uint local_9c;
  
  iVar2 = FUN_1437152f0(*(undefined8 *)(param_1 + 8));
  local_res8[0] = 0x3f;
  uVar3 = 0x11;
  if (iVar2 == 4) {
    uVar3 = 9;
  }
  if ((byte *)*param_2 == (byte *)param_2[1]) {
    local_res8[0] = 0x67;
  }
  else {
    bVar1 = *(byte *)*param_2;
    if ((bVar1 + 0xba & 0xdf) == 0) {
      local_res8[0] = 0x66;
    }
    else if ((bVar1 + 0xbb & 0xdd) == 0) {
      local_res8[0] = (ushort)bVar1;
    }
    else {
      local_res10[0] = (ushort)bVar1;
      if (DAT_146b82c08 != '\0') {
        FUN_14373a730(local_e8,&DAT_146b82c00,1);
        lVar4 = FUN_14373bbd0(local_e8,
                              "Invalid floating-point extra format specififer \'{}\'. Expected a character among [EfFfGg]."
                              ,&DAT_145b99d88,local_res10,0);
        *(char **)(lVar4 + 0x20) = "Reflect\\Core\\hkReflectVar.cpp";
        *(undefined8 *)(lVar4 + 0x28) = 0xd0;
        FUN_14373a950(local_e8);
      }
      local_res8[0] = CONCAT11(local_res8[0]._1_1_,0x67);
    }
    iVar2 = (int)param_2[1] - (int)*param_2;
    if (1 < iVar2) {
      FUN_1437453d0(&local_a8,*param_2 + 1,iVar2 + -1);
      uVar3 = hkString::atoi(local_a8);
      local_a0 = 0;
      if (-1 < (int)local_9c) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_a8,1,local_9c & 0x3fffffff);
      }
    }
  }
  FUN_1437455a0(param_3,&DAT_145b99efc);
  if (-1 < (int)uVar3) {
    hkStringBuf::printf(param_3,&DAT_145b99f6c,(ulonglong)uVar3);
  }
  FUN_143745630(param_3,local_res8);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143742660 FUN_143742660 body=639 status=ok
// SIG undefined FUN_143742660(void)

void FUN_143742660(longlong *param_1,longlong *param_2,char *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  byte local_res8 [8];
  longlong local_res10;
  undefined1 local_f8 [64];
  char *local_b8;
  undefined4 local_b0;
  uint local_ac;
  
  bVar7 = 0x75;
  if ((char)param_1[1] != '\0') {
    bVar7 = 100;
  }
  local_res8[0] = 0x3f;
  local_res8[1] = 0;
  bVar4 = local_res8[1];
  uVar5 = 0;
  local_res8[1] = 0;
  bVar2 = local_res8[1];
  local_res8[1] = bVar4;
  if ((byte *)*param_2 == (byte *)param_2[1]) goto LAB_143742887;
  bVar1 = *(byte *)*param_2;
  bVar3 = bVar7;
  if (((byte)(bVar1 - 0x44) < 0x32) &&
     ((0x2002100020021U >> ((ulonglong)(bVar1 - 0x44) & 0x3f) & 1) != 0)) {
    local_res8[1] = 0;
    bVar4 = bVar2;
    if ((bVar1 + 0xbc & 0xdf) != 0) {
      local_res10 = CONCAT62(local_res10._2_6_,0x20);
      local_res10 = CONCAT71(local_res10._1_7_,bVar1);
      bVar4 = local_res8[1];
      if (1 < DAT_146b82c08) {
        local_res8[0] = bVar7;
        FUN_14373a730(local_f8,&DAT_146b82c00,2);
        lVar6 = FUN_14373bbd0(local_f8,
                              "Deprecated integer extra format specififer \'{}\'; use \'D\' (decimal) instead."
                              ,&DAT_145b99d88,&local_res10,0);
        *(char **)(lVar6 + 0x20) = "Reflect\\Core\\hkReflectVar.cpp";
        *(undefined8 *)(lVar6 + 0x28) = 0x79;
        FUN_14373a950(local_f8);
        bVar3 = local_res8[0];
        bVar4 = local_res8[1];
      }
    }
  }
  else if ((bVar1 + 0xa8 & 0xdf) == 0) {
    local_res8[1] = 0;
    bVar3 = bVar1;
    bVar4 = local_res8[1];
    if (((char)param_1[1] != '\0') && (bVar3 = bVar7, bVar4 = bVar2, DAT_146b82c08 != 0)) {
      local_res10 = -*param_1;
      local_res8[0] = bVar1;
      FUN_14373a730(local_f8,&DAT_146b82c00,1);
      lVar6 = FUN_14373bbd0(local_f8,
                            "Cannot format negative integer \'{}\' with hexadecimal specifier \'{}\'. Falling back to decimal \'D\'."
                            ,&DAT_145b99d98,&local_res10,local_res8,0);
      *(undefined8 *)(lVar6 + 0x28) = 0x81;
      goto LAB_143742810;
    }
  }
  else {
    local_res10 = CONCAT62(local_res10._2_6_,0x20);
    local_res10 = CONCAT71(local_res10._1_7_,bVar1);
    if (DAT_146b82c08 != 0) {
      FUN_14373a730(local_f8,&DAT_146b82c00,1);
      lVar6 = FUN_14373bbd0(local_f8,
                            "Invalid integer extra format specififer \'{}\'. Expected a character among [DdXx] or the deprecated [IiUu]."
                            ,&DAT_145b99d88,&local_res10,0);
      *(undefined8 *)(lVar6 + 0x28) = 0x88;
LAB_143742810:
      *(char **)(lVar6 + 0x20) = "Reflect\\Core\\hkReflectVar.cpp";
      FUN_14373a950(local_f8);
      bVar3 = bVar7;
      bVar4 = local_res8[1];
    }
  }
  local_res8[1] = bVar4;
  local_res8[0] = bVar3;
  iVar8 = (int)param_2[1] - (int)*param_2;
  bVar7 = local_res8[0];
  if (1 < iVar8) {
    FUN_1437453d0(&local_b8,*param_2 + 1,iVar8 + -1);
    uVar5 = hkString::atoi(local_b8);
    local_b0 = 0;
    bVar7 = local_res8[0];
    if (-1 < (int)local_ac) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_b8,1,local_ac & 0x3fffffff);
      bVar7 = local_res8[0];
    }
  }
LAB_143742887:
  local_res8[0] = bVar7;
  FUN_1437455a0(param_3,&DAT_145b99efc);
  if (0 < (int)uVar5) {
    hkStringBuf::printf(param_3,&DAT_145b99f00,(ulonglong)uVar5);
  }
  FUN_143745630(param_3,&DAT_145b6963c);
  FUN_143745630(param_3,local_res8);
  return;
}



// FUNCTION 1437428e0 FUN_1437428e0 body=110 status=ok
// SIG undefined FUN_1437428e0(void)

void FUN_1437428e0(longlong *param_1,byte param_2)

{
  if (*param_1 != 0) {
    if ((param_2 & 1) != 0) {
      FUN_143749de0(*param_1,param_1[1],1);
    }
    if ((param_2 & 2) != 0) {
      FUN_143749c70(*param_1,param_1[1]);
      *param_1 = 0;
      param_1[1] = 0;
      if ((*(byte *)(param_1 + 2) & 1) != 0) {
        FUN_143733a60(param_1[2] & 0xfffffffffffffffe);
      }
      param_1[2] = 0;
    }
  }
  return;
}



// FUNCTION 143742950 FUN_143742950 body=75 status=ok
// SIG undefined FUN_143742950(void)

ulonglong FUN_143742950(void)

{
  ulonglong uVar1;
  undefined1 local_res10 [24];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_143742a50(0,local_res10,&local_28);
  uVar1 = local_18;
  if ((local_10 & 1) != 0) {
    FUN_143733a60(local_10 & 0xfffffffffffffffe);
  }
  return uVar1 & 0xffffffff;
}



// FUNCTION 1437429a0 FUN_1437429a0 body=83 status=ok
// SIG undefined FUN_1437429a0(void)

undefined8 * FUN_1437429a0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 local_res10 [24];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_143742a50(0,local_res10,&local_28);
  *param_2 = uStack_20;
  if ((local_10 & 1) != 0) {
    FUN_143733a60(local_10 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143742a00 FUN_143742a00 body=74 status=ok
// SIG undefined FUN_143742a00(void)

/* WARNING: Removing unreachable block (ram,0x000143742a25) */

undefined8 * FUN_143742a00(undefined8 param_1,undefined8 *param_2)

{
  undefined1 local_res10 [24];
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_143742a50(param_1,local_res10,param_2);
  return param_2;
}



// FUNCTION 143742a50 FUN_143742a50 body=47 status=ok
// SIG undefined FUN_143742a50(void)

undefined8 FUN_143742a50(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(*(longlong *)(param_1[2] & 0xfffffffffffffffe) + 0x68))
            ((longlong *)(param_1[2] & 0xfffffffffffffffe),param_2,*param_1,param_1[1],param_3);
  return param_2;
}



// FUNCTION 143742a80 FUN_143742a80 body=234 status=ok
// SIG undefined FUN_143742a80(void)

void FUN_143742a80(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  char *_Str;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  _Str = (char *)FUN_1437151f0();
  if (_Str == (char *)0x0) {
    FUN_1437455a0(param_2,"<Unnamed");
    puVar4 = (undefined8 *)FUN_143714490(param_1,1);
    uVar1 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      uVar1 = (uint)*puVar4;
    }
    uVar5 = FUN_1437157a0(uVar1 & 0xf);
    lVar6 = FUN_1437151f0(uVar5);
    if ((lVar6 != 0) && (iVar2 = FUN_14370c910(lVar6), 0xf < iVar2)) {
      FUN_143745710(param_2,&DAT_145af3920,0xffffffff);
      FUN_143745710(param_2,lVar6 + 0xb,iVar2 + -0xf);
    }
    _Str = ">";
  }
  else {
    pcVar3 = strchr(_Str,0x3c);
    if (pcVar3 != (char *)0x0) {
      FUN_143745710(param_2,_Str,(int)pcVar3 - (int)_Str);
      return;
    }
  }
  FUN_143745710(param_2,_Str,0xffffffff);
  return;
}



// FUNCTION 143742b70 FUN_143742b70 body=94 status=ok
// SIG undefined FUN_143742b70(void)

void FUN_143742b70(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  iVar4 = param_2 + 1;
  if ((int)uVar3 < iVar4) {
    iVar2 = uVar3 * 2;
    iVar1 = iVar4;
    if (iVar4 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_1,iVar1,1);
  }
  *(int *)(param_1 + 1) = iVar4;
  *(undefined1 *)((longlong)param_2 + *param_1) = 0;
  return;
}



// FUNCTION 143742bd0 FUN_143742bd0 body=78 status=ok
// SIG undefined FUN_143742bd0(void)

undefined8 FUN_143742bd0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  (**(code **)(*(longlong *)(param_1[2] & 0xfffffffffffffffe) + 0x60))
            ((longlong *)(param_1[2] & 0xfffffffffffffffe),param_2,*param_1,param_1[1],param_3);
  if ((*(byte *)(param_3 + 0x18) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_3 + 0x18) & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143742c20 FUN_143742c20 body=114 status=ok
// SIG undefined FUN_143742c20(void)

undefined4 * FUN_143742c20(undefined8 *param_1,undefined4 *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_143714910(*(undefined8 *)(param_3 + 8),param_1[1]);
  if (cVar1 != '\0') {
    (**(code **)(*(longlong *)(param_1[2] & 0xfffffffffffffffe) + 0x48))
              ((longlong *)(param_1[2] & 0xfffffffffffffffe),param_2,*param_1,param_1[1],param_3);
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 143742ca0 FUN_143742ca0 body=28 status=ok
// SIG undefined FUN_143742ca0(void)

void FUN_143742ca0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  FUN_143742cc0(0,param_2,&local_18);
  return;
}



// FUNCTION 143742cc0 FUN_143742cc0 body=3293 status=ok
// SIG undefined FUN_143742cc0(void)

void FUN_143742cc0(ulonglong *param_1,longlong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  char *pcVar11;
  int iVar12;
  char *pcVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  char *pcVar19;
  byte bVar20;
  undefined1 *puVar21;
  ulonglong local_res8;
  undefined8 local_res20;
  ulonglong local_168;
  ulonglong uStack_160;
  ulonglong local_158;
  longlong *local_150;
  ulonglong local_148;
  uint uStack_140;
  int iStack_13c;
  char *local_138;
  undefined4 local_130;
  uint local_12c;
  char local_128 [128];
  ulonglong local_a8;
  uint uStack_a0;
  int iStack_9c;
  ulonglong local_98;
  int iStack_90;
  int iStack_8c;
  undefined1 local_88 [16];
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  longlong local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  plVar7 = (longlong *)FUN_1437149e0(param_1[1],&local_168,&DAT_1467e7a40);
  puVar9 = (undefined8 *)*plVar7;
  if ((local_158 & 1) != 0) {
    FUN_143733a60(local_158 & 0xfffffffffffffffe);
  }
  if (puVar9 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143742d29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar9)(param_1,param_2,param_3);
    return;
  }
  plVar7 = (longlong *)FUN_1437149e0(param_1[1],&local_168,&DAT_1467e2fd0);
  lVar8 = *plVar7;
  if ((local_158 & 1) != 0) {
    FUN_143733a60(local_158 & 0xfffffffffffffffe);
  }
  if ((lVar8 != 0) && (lVar8 = FUN_143744ec0(lVar8,param_1), lVar8 != 0)) {
    hkStringBuf::printf((char *)param_2,lVar8);
    return;
  }
  uVar18 = 0;
  local_98 = 0;
  bVar20 = 0;
  if (param_1[1] != 0) {
    puVar9 = (undefined8 *)FUN_143714490(param_1[1],1);
    bVar2 = bVar20;
    if (puVar9 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar9;
    }
    if ((bVar2 & 0xf) == 4) {
      uVar15 = *param_1;
      uVar17 = param_1[1];
      if ((param_1[2] & 1) != 0) {
        FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
      }
      uVar16 = param_1[2];
      local_98 = uVar16;
      if (uVar15 != 0) {
        local_148 = 0;
        uStack_140 = uStack_140 & 0xffffff00;
        (**(code **)(*(longlong *)(uVar16 & 0xfffffffffffffffe) + 0x38))
                  ((longlong *)(uVar16 & 0xfffffffffffffffe),&local_res8,uVar15,uVar17,&local_148);
        local_98 = *param_3;
        iStack_90 = (int)param_3[1];
        iStack_8c = *(int *)((longlong)param_3 + 0xc);
        local_138 = local_128;
        local_12c = 0x80000080;
        local_130 = 1;
        local_128[0] = '\0';
        local_a8 = local_148;
        uStack_a0 = uStack_140;
        iStack_9c = iStack_13c;
        FUN_143742660(&local_a8,&local_98,&local_138);
        uVar18 = local_148;
        if ((char)uStack_140 != '\0') {
          uVar18 = -local_148;
        }
        hkStringBuf::printf((char *)param_2,local_138,uVar18);
        local_130 = 0;
        if (-1 < (int)local_12c) {
          FUN_143702e10(&PTR_vftable_1467f0638,local_138,1,local_12c & 0x3fffffff);
        }
        goto LAB_143743963;
      }
    }
  }
  local_a8 = 0;
  if (param_1[1] == 0) {
LAB_143742f59:
    uVar15 = uVar18;
    if (param_1[1] == 0) {
LAB_143743117:
      local_148 = 0;
      local_168 = 0;
      uStack_160 = 0;
      uVar4 = 0;
      bVar20 = 0;
      if (param_1[1] == 0) {
LAB_1437433af:
        uVar17 = uVar18;
        if (param_1[1] == 0) {
LAB_143743634:
          local_150 = (longlong *)0x0;
          if (param_1[1] == 0) {
LAB_143743740:
            uVar16 = uVar18;
            if (param_1[1] == 0) {
LAB_1437437f7:
              uVar14 = uVar18;
              if (param_1[1] == 0) {
LAB_143743860:
                if (param_1[1] != 0) {
                  puVar9 = (undefined8 *)FUN_143714490(param_1[1],1);
                  if (puVar9 != (undefined8 *)0x0) {
                    bVar20 = (byte)*puVar9;
                  }
                  if ((bVar20 & 0xf) == 1) {
                    local_res8 = *param_1;
                    if ((param_1[2] & 1) != 0) {
                      FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
                    }
                    uVar18 = param_1[2];
                    if (local_res8 != 0) {
                      FUN_1437455a0(param_2,"incomplete");
                    }
                  }
                }
                if ((uVar18 & 1) != 0) {
                  FUN_143733a60(uVar18 & 0xfffffffffffffffe);
                }
              }
              else {
                puVar9 = (undefined8 *)FUN_143714490(param_1[1],1);
                if (puVar9 != (undefined8 *)0x0) {
                  uVar4 = (uint)*puVar9;
                }
                if ((uVar4 & 0xf) != 0) goto LAB_143743860;
                local_res8 = *param_1;
                if ((param_1[2] & 1) != 0) {
                  FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
                }
                uVar14 = param_1[2];
                if (local_res8 == 0) goto LAB_143743860;
                FUN_1437455a0(param_2,&DAT_145af48ec);
              }
              if ((uVar14 & 1) != 0) {
                FUN_143733a60(uVar14 & 0xfffffffffffffffe);
              }
            }
            else {
              puVar9 = (undefined8 *)FUN_143714490(param_1[1],1);
              bVar2 = bVar20;
              if (puVar9 != (undefined8 *)0x0) {
                bVar2 = (byte)*puVar9;
              }
              if ((bVar2 & 0xf) != 2) goto LAB_1437437f7;
              local_res8 = *param_1;
              uVar14 = param_1[1];
              if ((param_1[2] & 1) != 0) {
                FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
              }
              uVar1 = local_res8;
              uVar16 = param_1[2];
              if (local_res8 == 0) goto LAB_1437437f7;
              local_res8 = local_res8 & 0xffffffffffffff00;
              (**(code **)(*(longlong *)(uVar16 & 0xfffffffffffffffe) + 0x38))
                        ((longlong *)(uVar16 & 0xfffffffffffffffe),&local_res20,uVar1,uVar14,
                         &local_res8);
              pcVar11 = "false";
              if ((byte)local_res8 != '\0') {
                pcVar11 = "true";
              }
              FUN_1437455a0(param_2,pcVar11);
            }
            plVar7 = local_150;
            if ((uVar16 & 1) != 0) {
              FUN_143733a60(uVar16 & 0xfffffffffffffffe);
              plVar7 = local_150;
            }
          }
          else {
            puVar9 = (undefined8 *)FUN_143714490(param_1[1],1);
            bVar2 = bVar20;
            if (puVar9 != (undefined8 *)0x0) {
              bVar2 = (byte)*puVar9;
            }
            if ((bVar2 & 0xf) != 6) goto LAB_143743740;
            local_res8 = *param_1;
            uVar16 = param_1[1];
            if ((param_1[2] & 1) != 0) {
              FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
            }
            plVar7 = (longlong *)param_1[2];
            local_150 = plVar7;
            if (local_res8 == 0) goto LAB_143743740;
            local_158 = 0;
            local_168 = 0;
            uStack_160 = 0;
            (**(code **)(*(longlong *)((ulonglong)plVar7 & 0xfffffffffffffffe) + 0x50))
                      ((longlong *)((ulonglong)plVar7 & 0xfffffffffffffffe),&local_res8,local_res8,
                       uVar16,&local_168);
            if (((uStack_160 == 0) || (lVar8 = FUN_143715410(), lVar8 != 0)) ||
               (lVar8 = FUN_1436f73d0(local_168,uStack_160), lVar8 == 0)) {
              hkStringBuf::printf((char *)param_2,&DAT_145b8e1f0,local_168);
            }
            else {
              FUN_143714fc0(lVar8,param_2,0,0);
            }
            if ((local_158 & 1) != 0) {
              FUN_143733a60(local_158 & 0xfffffffffffffffe);
            }
          }
          if (((ulonglong)plVar7 & 1) != 0) {
            FUN_143733a60((ulonglong)plVar7 & 0xfffffffffffffffe);
          }
        }
        else {
          puVar9 = (undefined8 *)FUN_143714490(param_1[1],1);
          bVar2 = bVar20;
          if (puVar9 != (undefined8 *)0x0) {
            bVar2 = (byte)*puVar9;
          }
          if ((bVar2 & 0xf) != 7) goto LAB_143743634;
          uVar16 = *param_1;
          uVar14 = param_1[1];
          if ((param_1[2] & 1) != 0) {
            FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
          }
          uVar17 = param_1[2];
          if (uVar16 == 0) goto LAB_143743634;
          uVar10 = FUN_1437151f0(uVar14);
          FUN_143746d30(param_2,uVar10,&DAT_145b99f7c,0,0,0,0);
          plVar7 = (longlong *)(uVar17 & 0xfffffffffffffffe);
          local_150 = plVar7;
          (**(code **)(*plVar7 + 0x38))(plVar7,local_88,uVar16,uVar14);
          local_res8 = CONCAT71(local_res8._1_7_,(byte)uVar17) & 0xffffffffffffff01;
          if ((uVar17 & 1) != 0) {
            FUN_1437329e0(plVar7);
          }
          if (((uVar17 & 1) != 0) && (FUN_1437329e0(plVar7), (uVar17 & 1) != 0)) {
            FUN_143733a60(plVar7);
          }
          bVar20 = (byte)uVar17 & 1;
          if (local_58 != -1) {
            puVar21 = &DAT_145af3922;
            do {
              FUN_143745710(param_2,puVar21,0xffffffff);
              uVar16 = local_60;
              uVar18 = local_68;
              puVar21 = &DAT_145b036e8;
              if ((local_60 & 1) != 0) {
                FUN_1437329e0(local_60 & 0xfffffffffffffffe);
              }
              FUN_1437140a0(&local_res20,uVar18);
              uVar10 = FUN_1437151c0(&local_res20);
              FUN_143745710(param_2,uVar10,0xffffffff);
              if ((uVar16 & 1) != 0) {
                FUN_143733a60(uVar16 & 0xfffffffffffffffe);
              }
              FUN_143745710(param_2,&DAT_145b13200,0xffffffff);
              local_138 = local_128;
              local_168 = local_70;
              uStack_160 = local_68;
              local_12c = 0x80000080;
              local_130 = 1;
              local_128[0] = '\0';
              local_158 = local_60;
              if ((local_60 & 1) != 0) {
                FUN_1437329e0(local_60 & 0xfffffffffffffffe);
              }
              FUN_143742ca0(&local_168,&local_138);
              if ((local_158 & 1) != 0) {
                FUN_143733a60(local_158 & 0xfffffffffffffffe);
              }
              FUN_143745630(param_2,local_138);
              local_130 = 0;
              if (-1 < (int)local_12c) {
                FUN_143702e10(&PTR_vftable_1467f0638,local_138,1,local_12c & 0x3fffffff);
              }
              (**(code **)(*(longlong *)(local_78 & 0xfffffffffffffffe) + 0x40))
                        ((longlong *)(local_78 & 0xfffffffffffffffe),local_88);
            } while (local_58 != -1);
            plVar7 = local_150;
            bVar20 = (byte)local_res8;
          }
          if (bVar20 != 0) {
            FUN_143733a60(plVar7);
          }
          if ((local_60 & 1) != 0) {
            FUN_143733a60(local_60 & 0xfffffffffffffffe);
          }
          if ((local_78 & 1) != 0) {
            FUN_143733a60(local_78 & 0xfffffffffffffffe);
          }
          FUN_143745710(param_2,&DAT_145b99f80,0xffffffff);
        }
        if ((uVar17 & 1) != 0) {
          FUN_143733a60(uVar17 & 0xfffffffffffffffe);
        }
      }
      else {
        puVar9 = (undefined8 *)FUN_143714490(param_1[1],1);
        bVar2 = bVar20;
        if (puVar9 != (undefined8 *)0x0) {
          bVar2 = (byte)*puVar9;
        }
        if ((bVar2 & 0xf) != 8) goto LAB_1437433af;
        uVar17 = *param_1;
        uStack_160 = param_1[1];
        local_168 = uVar17;
        if ((param_1[2] & 1) != 0) {
          FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
        }
        local_158 = param_1[2];
        local_148 = local_158;
        if (uVar17 == 0) goto LAB_1437433af;
        FUN_1437455a0(param_2,&DAT_145b99f74);
        uVar4 = FUN_143742950(&local_168);
        if (*param_3 != param_3[1]) {
          iVar3 = FUN_143750ff0(param_3,0x2c);
          uVar5 = uVar4;
          if (iVar3 == -1) {
            FUN_1437453d0(&local_138,*param_3,(int)param_3[1] - (int)*param_3);
            uVar6 = hkString::atoi(local_138);
            if ((-1 < (int)uVar6) && (uVar18 = (ulonglong)uVar6, (int)uVar4 < (int)uVar6)) {
              uVar18 = (ulonglong)uVar4;
            }
          }
          else {
            if (0 < iVar3) {
              FUN_1437453d0(&local_138,*param_3,iVar3);
              uVar5 = hkString::atoi(local_138);
              if ((-1 < (int)uVar5) && (uVar18 = (ulonglong)uVar5, (int)uVar4 < (int)uVar5)) {
                uVar18 = (ulonglong)uVar4;
              }
              local_130 = 0;
              if (-1 < (int)local_12c) {
                FUN_143702e10(&PTR_vftable_1467f0638,local_138,1,local_12c & 0x3fffffff);
              }
            }
            uVar5 = (uint)uVar18;
            iVar3 = iVar3 + 1;
            iVar12 = (int)param_3[1] - (int)*param_3;
            if (iVar12 <= iVar3) goto LAB_1437432e6;
            FUN_1437453d0(&local_138,(longlong)iVar3 + *param_3,iVar12 - iVar3);
            iVar3 = hkString::atoi(local_138);
            uVar6 = iVar3 + uVar5;
            if (((int)uVar5 <= (int)uVar6) && (uVar5 = uVar4, (int)uVar6 <= (int)uVar4)) {
              uVar5 = uVar6;
            }
          }
          uVar4 = uVar5;
          local_130 = 0;
          if (-1 < (int)local_12c) {
            FUN_143702e10(&PTR_vftable_1467f0638,local_138,1,local_12c & 0x3fffffff);
          }
        }
LAB_1437432e6:
        puVar21 = &DAT_145af3922;
        uVar5 = (uint)uVar18;
        while ((int)uVar5 < (int)uVar4) {
          FUN_143745710(param_2,puVar21,0xffffffff);
          local_138 = local_128;
          local_12c = 0x80000080;
          local_130 = 1;
          local_128[0] = '\0';
          puVar21 = &DAT_145b036e8;
          uVar10 = FUN_143741d50(&local_168,local_50);
          FUN_143742ca0(uVar10,&local_138);
          if ((local_40 & 1) != 0) {
            FUN_143733a60(local_40 & 0xfffffffffffffffe);
          }
          FUN_143745630(param_2,local_138);
          local_130 = 0;
          if (-1 < (int)local_12c) {
            FUN_143702e10(&PTR_vftable_1467f0638,local_138,1,local_12c & 0x3fffffff);
          }
          uVar5 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar5;
        }
        FUN_143745710(param_2,&DAT_145b99f78,0xffffffff);
      }
      if ((local_148 & 1) != 0) {
        FUN_143733a60(local_148 & 0xfffffffffffffffe);
      }
    }
    else {
      puVar9 = (undefined8 *)FUN_143714490(param_1[1],1);
      if (puVar9 != (undefined8 *)0x0) {
        bVar20 = (byte)*puVar9;
      }
      if ((bVar20 & 0xf) != 5) goto LAB_143743117;
      uVar17 = *param_1;
      uVar16 = param_1[1];
      if ((param_1[2] & 1) != 0) {
        FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
      }
      uVar15 = param_1[2];
      if (uVar17 == 0) goto LAB_143743117;
      local_12c = 0x80000080;
      local_138 = local_128;
      local_130 = 1;
      local_128[0] = '\0';
      local_148 = *param_3;
      uStack_140 = (uint)param_3[1];
      iStack_13c = *(int *)((longlong)param_3 + 0xc);
      local_168 = uVar17;
      uStack_160 = uVar16;
      local_158 = uVar15;
      if ((uVar15 & 1) != 0) {
        FUN_1437329e0(uVar15 & 0xfffffffffffffffe);
      }
      FUN_1437424a0(&local_168,&local_148,&local_138);
      local_res20 = 0;
      (**(code **)(*(longlong *)(uVar15 & 0xfffffffffffffffe) + 0x38))
                ((longlong *)(uVar15 & 0xfffffffffffffffe),&local_res8,uVar17,uVar16,&local_res20);
      hkStringBuf::printf((char *)param_2,local_138,local_res20);
      iVar3 = FUN_1437461b0(param_2,&DAT_145b99f70);
      if (-1 < iVar3) {
        iVar12 = (int)param_2[1] + -2;
        if (iVar3 + 2 < iVar12) {
          pcVar13 = (char *)((longlong)iVar12 + *param_2);
          pcVar19 = (char *)((longlong)(iVar3 + 2) + *param_2);
          for (pcVar11 = pcVar19; (pcVar11 < pcVar13 && (*pcVar11 == '0')); pcVar11 = pcVar11 + 1) {
          }
          iVar3 = (int)pcVar11 - (int)pcVar19;
          if (0 < iVar3) {
            if (pcVar11 <= pcVar13) {
              lVar8 = (longlong)pcVar19 - (longlong)pcVar11;
              do {
                pcVar11[lVar8] = *pcVar11;
                pcVar11 = pcVar11 + 1;
              } while (pcVar11 <= pcVar13);
            }
            FUN_143742b70(param_2,((int)param_2[1] - iVar3) + -1);
          }
        }
      }
      local_130 = 0;
      if (-1 < (int)local_12c) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_138,1,local_12c & 0x3fffffff);
      }
    }
    uVar14 = local_a8;
    if ((uVar15 & 1) != 0) {
      FUN_143733a60(uVar15 & 0xfffffffffffffffe);
      uVar14 = local_a8;
    }
  }
  else {
    puVar9 = (undefined8 *)FUN_143714490(param_1[1],1);
    bVar2 = bVar20;
    if (puVar9 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar9;
    }
    if ((bVar2 & 0xf) != 3) goto LAB_143742f59;
    uVar15 = *param_1;
    uVar17 = param_1[1];
    if ((param_1[2] & 1) != 0) {
      FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
    }
    uVar14 = param_1[2];
    local_a8 = uVar14;
    if (uVar15 == 0) goto LAB_143742f59;
    local_res20 = 0;
    (**(code **)(*(longlong *)(uVar14 & 0xfffffffffffffffe) + 0x38))
              ((longlong *)(uVar14 & 0xfffffffffffffffe),&local_res8,uVar15,uVar17,&local_res20);
    FUN_1437455a0(param_2,local_res20);
  }
  uVar16 = local_98;
  if ((uVar14 & 1) != 0) {
    FUN_143733a60(uVar14 & 0xfffffffffffffffe);
    uVar16 = local_98;
  }
LAB_143743963:
  if ((uVar16 & 1) != 0) {
    FUN_143733a60(uVar16 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437439a0 FUN_1437439a0 body=664 status=ok
// SIG undefined FUN_1437439a0(void)

void FUN_1437439a0(longlong *param_1,char *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  undefined8 local_98;
  undefined4 local_90;
  uint local_8c;
  
  param_1 = (longlong *)*param_1;
  local_b8 = *param_1;
  local_b0 = param_1[1];
  local_a8 = param_1[2];
  if ((local_a8 & 1) != 0) {
    FUN_1437329e0(local_a8 & 0xfffffffffffffffe);
  }
  iVar3 = FUN_143750fa0(param_3,&DAT_145af6c98);
  if (iVar3 == 0) {
    if (local_b8 == 0) {
      FUN_1437455a0(param_2,"(null)");
    }
    else {
      FUN_143742ca0(&local_b8,param_2);
    }
  }
  else {
    FUN_1437455a0(param_2,&DAT_145b99f94);
    lVar8 = local_b0;
    if (local_b0 == 0) {
      FUN_143745710(param_2,"void*",0xffffffff);
    }
    else {
      FUN_143745310(&local_98,&DAT_145af6c98);
      while( true ) {
        puVar4 = (undefined8 *)FUN_143714490(lVar8,1);
        bVar2 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          bVar2 = (byte)*puVar4;
        }
        lVar7 = 0;
        if ((bVar2 & 0xf) == 6) {
          lVar7 = lVar8;
        }
        if ((((lVar7 == 0) || (lVar5 = FUN_1437151f0(lVar7), lVar5 != 0)) ||
            (plVar6 = (longlong *)FUN_143714420(lVar7,2), plVar6 == (longlong *)0x0)) ||
           (lVar7 = *plVar6, lVar7 == 0)) break;
        FUN_143745630(&local_98,&DAT_145af6c98);
        lVar8 = lVar7;
      }
      FUN_143742a80(lVar8,param_2);
      puVar4 = (undefined8 *)FUN_143715320(lVar8);
      if (puVar4 != (undefined8 *)0x0) {
        FUN_143745710(param_2,&DAT_145b1488c,0xffffffff);
        puVar9 = &DAT_145af3922;
        iVar3 = 0;
        puVar1 = puVar4;
        if (*(short *)(puVar4 + 1) != 0) {
          do {
            FUN_143745710(param_2,puVar9,0xffffffff);
            puVar9 = &DAT_145b036e8;
            if (*(char *)puVar1[3] == 't') {
              FUN_143742a80(puVar1[2],param_2);
            }
            else if (*(char *)puVar1[3] == 'v') {
              hkStringBuf::printf(param_2,"%I64u");
            }
            iVar3 = iVar3 + 1;
            puVar1 = puVar1 + 2;
          } while (iVar3 < (int)(uint)*(ushort *)(puVar4 + 1));
        }
        FUN_143745710(param_2,&DAT_145b069a8,0xffffffff);
      }
      FUN_143745710(param_2,local_98,0xffffffff);
      local_90 = 0;
      if (-1 < (int)local_8c) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_98,1,local_8c & 0x3fffffff);
      }
    }
    FUN_143745710(param_2,&DAT_145b12c80,0xffffffff);
    hkStringBuf::printf(param_2,"0x%I64x)",local_b8);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143743c40 FUN_143743c40 body=609 status=ok
// SIG undefined FUN_143743c40(void)

int FUN_143743c40(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong local_88;
  longlong local_80;
  ulonglong local_78;
  longlong local_70;
  longlong lStack_68;
  ulonglong local_60;
  longlong local_58;
  longlong local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  longlong local_38;
  longlong local_30;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  uVar6 = 0;
  local_60 = 0;
  local_70 = 0;
  lStack_68 = 0;
  if (param_3[1] != 0) {
    puVar3 = (undefined8 *)FUN_143714490(param_3[1],1);
    bVar1 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar3;
    }
    if ((bVar1 & 0xf) == 8) {
      local_70 = *param_3;
      lStack_68 = param_3[1];
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
      }
      uVar6 = param_3[2];
      local_60 = uVar6;
    }
  }
  FUN_143742a00(param_2,&local_38);
  FUN_143742a00(&local_70,&local_58);
  if (local_28 == local_48) {
    if (((local_28 == 0) || (local_48 == 0)) ||
       (iVar5 = FUN_143742440(param_1,local_30,local_50), iVar5 == 0)) {
      iVar4 = 0;
      if (0 < local_28) {
        do {
          local_88 = local_44 * iVar4 + local_58;
          local_80 = local_50;
          local_78 = ((uint)local_40 & 0xff ^ (uint)local_40) & 1 ^ local_40;
          if ((local_78 & 1) != 0) {
            FUN_1437329e0(local_78 & 0xfffffffffffffffe);
          }
          lStack_68 = local_30;
          local_70 = local_24 * iVar4 + local_38;
          local_60 = ((uint)local_20 & 0xff ^ (uint)local_20) & 1 ^ local_20;
          if ((local_60 & 1) != 0) {
            FUN_1437329e0(local_60 & 0xfffffffffffffffe);
          }
          if ((local_70 == local_88) && (lStack_68 == local_80)) {
            iVar5 = 0;
          }
          else {
            puVar3 = (undefined8 *)FUN_143714490(lStack_68,1);
            uVar2 = 0;
            if (puVar3 != (undefined8 *)0x0) {
              uVar2 = (uint)*puVar3;
            }
            iVar5 = (*(code *)(&DAT_146b82d40)[uVar2 & 0xf])(param_1,&local_70,&local_88);
          }
          if ((local_60 & 1) != 0) {
            FUN_143733a60(local_60 & 0xfffffffffffffffe);
          }
          if ((local_78 & 1) != 0) {
            FUN_143733a60(local_78 & 0xfffffffffffffffe);
          }
          if (iVar5 != 0) goto LAB_143743e35;
          iVar4 = iVar4 + 1;
        } while (iVar4 < local_28);
      }
      iVar5 = 0;
    }
  }
  else {
    iVar5 = local_28 - local_48;
  }
LAB_143743e35:
  if ((local_40 & 1) != 0) {
    FUN_143733a60(local_40 & 0xfffffffffffffffe);
  }
  if ((local_20 & 1) != 0) {
    FUN_143733a60(local_20 & 0xfffffffffffffffe);
  }
  if ((uVar6 & 1) != 0) {
    FUN_143733a60(uVar6 & 0xfffffffffffffffe);
  }
  return iVar5;
}



// FUNCTION 143743eb0 FUN_143743eb0 body=250 status=ok
// SIG undefined FUN_143743eb0(void)

int FUN_143743eb0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  byte local_res10 [8];
  byte local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar7 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uVar5 = uStack_38;
  uVar6 = local_40;
  if (param_3[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_3[1],1);
    if (puVar2 == (undefined8 *)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)*puVar2;
    }
    uVar5 = uStack_38;
    uVar6 = local_40;
    if ((bVar1 & 0xf) == 2) {
      uVar6 = *param_3;
      uVar5 = param_3[1];
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
      }
      uVar7 = param_3[2];
    }
  }
  local_res10[0] = 0;
  plVar8 = (longlong *)(uVar7 & 0xfffffffffffffffe);
  (**(code **)(*plVar8 + 0x38))(plVar8,local_res20,uVar6,uVar5,local_res10);
  local_res18[0] = 0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_48,*param_2,param_2[1],local_res18)
  ;
  uVar3 = (uint)local_res10[0];
  uVar4 = (uint)local_res18[0];
  if ((uVar7 & 1) != 0) {
    FUN_143733a60(plVar8);
  }
  return uVar4 - uVar3;
}



// FUNCTION 143743fb0 FUN_143743fb0 body=295 status=ok
// SIG undefined FUN_143743fb0(void)

int FUN_143743fb0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  double local_res20;
  double local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar7 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uVar5 = uStack_48;
  uVar6 = local_50;
  if (param_3[1] != 0) {
    puVar4 = (undefined8 *)FUN_143714490(param_3[1],1);
    if (puVar4 == (undefined8 *)0x0) {
      bVar3 = 0;
    }
    else {
      bVar3 = (byte)*puVar4;
    }
    uVar5 = uStack_48;
    uVar6 = local_50;
    if ((bVar3 & 0xf) == 5) {
      uVar6 = *param_3;
      uVar5 = param_3[1];
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
      }
      uVar7 = param_3[2];
    }
  }
  plVar8 = (longlong *)(uVar7 & 0xfffffffffffffffe);
  local_res20 = 0.0;
  (**(code **)(*plVar8 + 0x38))(plVar8,local_res10,uVar6,uVar5,&local_res20);
  local_58 = 0.0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res18,*param_2,param_2[1],&local_58
            );
  bVar1 = local_58 < local_res20;
  bVar2 = local_res20 < local_58;
  if ((uVar7 & 1) != 0) {
    FUN_143733a60(plVar8);
  }
  return (uint)bVar2 - (uint)bVar1;
}



// FUNCTION 1437440e0 FUN_1437440e0 body=351 status=ok
// SIG undefined FUN_1437440e0(void)

int FUN_1437440e0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  byte bVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 local_res10 [8];
  ulonglong local_68;
  byte local_60;
  ulonglong local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uVar6 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uVar5 = uStack_40;
  uVar8 = local_48;
  if (param_3[1] != 0) {
    puVar3 = (undefined8 *)FUN_143714490(param_3[1],1);
    bVar2 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar3;
    }
    uVar5 = uStack_40;
    uVar8 = local_48;
    if ((bVar2 & 0xf) == 4) {
      uVar8 = *param_3;
      uVar5 = param_3[1];
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
      }
      uVar6 = param_3[2];
    }
  }
  local_58 = 0;
  uStack_50 = uStack_50 & 0xffffff00;
  plVar7 = (longlong *)(uVar6 & 0xfffffffffffffffe);
  (**(code **)(*plVar7 + 0x38))(plVar7,local_res10,uVar8,uVar5,&local_58);
  uVar1 = uStack_50;
  local_68 = 0;
  local_60 = 0;
  local_48 = local_58;
  uStack_40 = CONCAT44(uStack_4c,uStack_50);
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res10,*param_2,param_2[1],&local_68
            );
  iVar4 = (uint)local_60 - (uVar1 & 0xff);
  if (iVar4 == 0) {
    iVar4 = ((uint)(local_48 < local_68) - (uint)(local_68 < local_48)) *
            (1 - ((uint)local_60 + (uint)local_60));
  }
  if ((uVar6 & 1) != 0) {
    FUN_143733a60(plVar7);
  }
  return iVar4;
}



// FUNCTION 143744240 FUN_143744240 body=321 status=ok
// SIG undefined FUN_143744240(void)

int FUN_143744240(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  longlong local_58 [6];
  
  uVar4 = 0;
  local_58[3] = 0;
  local_58[4] = 0;
  lVar3 = local_58[4];
  lVar6 = local_58[3];
  if (param_3[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_3[1],1);
    if (puVar2 == (undefined8 *)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)*puVar2;
    }
    lVar3 = local_58[4];
    lVar6 = local_58[3];
    if ((bVar1 & 0xf) == 6) {
      lVar6 = *param_3;
      lVar3 = param_3[1];
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
      }
      uVar4 = param_3[2];
    }
  }
  local_58[3] = 0;
  local_58[4] = 0;
  local_58[5] = 0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res10,*param_2,param_2[1],
             local_58 + 3);
  lVar5 = local_58[3];
  local_58[2] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  plVar7 = (longlong *)(uVar4 & 0xfffffffffffffffe);
  (**(code **)(*plVar7 + 0x50))(plVar7,local_res18,lVar6,lVar3,local_58);
  lVar5 = lVar5 - local_58[0];
  if ((local_58[2] & 1U) != 0) {
    FUN_143733a60(local_58[2] & 0xfffffffffffffffe);
  }
  if ((local_58[5] & 1U) != 0) {
    FUN_143733a60(local_58[5] & 0xfffffffffffffffe);
  }
  if ((uVar4 & 1) != 0) {
    FUN_143733a60(plVar7);
  }
  return (uint)(0 < lVar5) + (int)(lVar5 >> 0x3f);
}



// FUNCTION 143744390 FUN_143744390 body=725 status=ok
// SIG undefined FUN_143744390(void)

int FUN_143744390(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  ulonglong uStack_98;
  undefined1 local_90 [16];
  ulonglong local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_58;
  undefined8 *local_50;
  
  local_a0 = 0;
  uStack_98 = 0;
  uVar12 = local_a0;
  uVar13 = uStack_98;
  local_res10 = param_2;
  if (*(longlong *)(param_3 + 8) != 0) {
    puVar6 = (undefined8 *)FUN_143714490(*(longlong *)(param_3 + 8),1);
    bVar3 = 0;
    if (puVar6 != (undefined8 *)0x0) {
      bVar3 = (byte)*puVar6;
    }
    uVar12 = local_a0;
    uVar13 = uStack_98;
    if ((bVar3 & 0xf) == 7) {
      uVar12 = *(undefined8 *)(param_3 + 8);
      if ((*(byte *)(param_3 + 0x10) & 1) != 0) {
        FUN_1437329e0(*(ulonglong *)(param_3 + 0x10) & 0xfffffffffffffffe);
      }
      uVar13 = *(ulonglong *)(param_3 + 0x10);
    }
  }
  hkReflect::DeclIterAll::DeclIterAll(&local_58,*(undefined8 *)(param_2 + 8),0);
  hkReflect::DeclIterAll::DeclIterAll(&local_78,uVar12,0);
  do {
    do {
      puVar6 = local_58 + 1;
      if ((local_50 <= local_58 + 1) &&
         (cVar4 = FUN_1437144f0(&local_58), puVar6 = local_58, cVar4 == '\0')) goto LAB_1437445b0;
      local_58 = puVar6;
      pbVar7 = (byte *)FUN_143714f30(local_58,local_res18);
    } while ((*pbVar7 & 0x20) == 0);
    do {
      puVar6 = local_78 + 1;
      if ((local_70 <= local_78 + 1) &&
         (cVar4 = FUN_1437144f0(&local_78), puVar6 = local_78, cVar4 == '\0')) {
        bVar2 = false;
        goto LAB_1437444b9;
      }
      local_78 = puVar6;
      pbVar7 = (byte *)FUN_143714f30(local_78,local_res20);
    } while ((*pbVar7 & 0x20) == 0);
    bVar2 = true;
LAB_1437444b9:
    if (!bVar2) goto LAB_1437445b0;
    uVar12 = *local_58;
    plVar8 = (longlong *)FUN_143741f50(param_3,local_90,*local_78);
    plVar9 = (longlong *)FUN_143741f50(param_2,local_a8,uVar12);
    lVar1 = plVar8[1];
    puVar6 = (undefined8 *)FUN_143714490(plVar9[1],1);
    if (puVar6 == (undefined8 *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (uint)*puVar6;
    }
    puVar6 = (undefined8 *)FUN_143714490(lVar1,1);
    uVar5 = 0;
    if (puVar6 != (undefined8 *)0x0) {
      uVar5 = (uint)*puVar6;
    }
    iVar11 = (uVar10 & 0xf) - (uVar5 & 0xf);
    if (iVar11 == 0) {
      if ((*plVar9 == *plVar8) && (plVar9[1] == plVar8[1])) {
        iVar11 = 0;
      }
      else {
        puVar6 = (undefined8 *)FUN_143714490(plVar9[1],1);
        uVar10 = 0;
        if (puVar6 != (undefined8 *)0x0) {
          uVar10 = (uint)*puVar6;
        }
        iVar11 = (*(code *)(&DAT_146b82d40)[uVar10 & 0xf])(param_1,plVar9,plVar8);
      }
    }
    if ((uStack_98 & 1) != 0) {
      FUN_143733a60(uStack_98 & 0xfffffffffffffffe);
    }
    if ((local_80 & 1) != 0) {
      FUN_143733a60(local_80 & 0xfffffffffffffffe);
    }
    param_2 = local_res10;
  } while (iVar11 == 0);
  goto LAB_14374462c;
  while (local_78 = puVar6, pbVar7 = (byte *)FUN_143714f30(local_78,&local_res10),
        (*pbVar7 & 0x20) == 0) {
LAB_1437445b0:
    puVar6 = local_78 + 1;
    if ((local_70 <= local_78 + 1) &&
       (cVar4 = FUN_1437144f0(&local_78), puVar6 = local_78, cVar4 == '\0')) goto LAB_1437445f0;
  }
  iVar11 = -1;
  goto LAB_14374462c;
  while (local_58 = puVar6, pbVar7 = (byte *)FUN_143714f30(local_58,&local_res10),
        (*pbVar7 & 0x20) == 0) {
LAB_1437445f0:
    puVar6 = local_58 + 1;
    if ((local_50 <= local_58 + 1) &&
       (cVar4 = FUN_1437144f0(&local_58), puVar6 = local_58, cVar4 == '\0')) {
      iVar11 = 0;
      goto LAB_14374462c;
    }
  }
  iVar11 = 1;
LAB_14374462c:
  if ((uVar13 & 1) != 0) {
    FUN_143733a60(uVar13 & 0xfffffffffffffffe);
  }
  return iVar11;
}



// FUNCTION 143744680 FUN_143744680 body=252 status=ok
// SIG undefined FUN_143744680(void)

ulonglong FUN_143744680(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar5 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uVar4 = uStack_38;
  uVar6 = local_40;
  if (param_3[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_3[1],1);
    bVar1 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar2;
    }
    uVar4 = uStack_38;
    uVar6 = local_40;
    if ((bVar1 & 0xf) == 3) {
      uVar6 = *param_3;
      uVar4 = param_3[1];
      if ((*(byte *)(param_3 + 2) & 1) != 0) {
        FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
      }
      uVar5 = param_3[2];
    }
  }
  local_res20 = 0;
  plVar7 = (longlong *)(uVar5 & 0xfffffffffffffffe);
  (**(code **)(*plVar7 + 0x38))(plVar7,local_res10,uVar6,uVar4,&local_res20);
  local_48 = 0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res18,*param_2,param_2[1],&local_48
            );
  uVar3 = FUN_143781540(&local_48,local_res20);
  if ((uVar5 & 1) != 0) {
    FUN_143733a60(plVar7);
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 143744780 FUN_143744780 body=274 status=ok
// SIG undefined FUN_143744780(void)

void FUN_143744780(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar5;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar6;
  longlong local_38 [2];
  ulonglong local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  FUN_143714e00(param_2[1],local_38);
  if (local_38[0] == 0) {
    iVar2 = 0;
    while( true ) {
      puVar3 = (undefined8 *)FUN_143714420(param_2[1],1);
      iVar5 = 0;
      if (puVar3 != (undefined8 *)0x0) {
        iVar5 = (int)((ulonglong)*puVar3 >> 8);
      }
      if (iVar5 <= iVar2) break;
      lVar4 = FUN_143741d50(param_2,local_20);
      puVar3 = (undefined8 *)FUN_143714490(*(undefined8 *)(lVar4 + 8),1);
      if (puVar3 == (undefined8 *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (uint)*puVar3;
      }
      (*(code *)(&DAT_146b82ca0)[uVar6 & 0xf])(param_1,lVar4);
      if ((local_10 & 1) != 0) {
        FUN_143733a60(local_10 & 0xfffffffffffffffe);
      }
      iVar2 = iVar2 + 1;
    }
  }
  else {
    uVar1 = *param_2;
    iVar2 = FUN_1437152f0(param_2[1]);
    FGenericPlatformString::Memcpy(uVar1,local_38[0],(longlong)iVar2);
  }
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437448a0 FUN_1437448a0 body=248 status=ok
// SIG undefined FUN_1437448a0(void)

void FUN_1437448a0(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined1 local_res10 [8];
  undefined1 local_48 [16];
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  hkReflect::DeclIterAll::DeclIterAll(&local_30,*(undefined8 *)(param_2 + 8),0);
LAB_1437448e0:
  uVar3 = local_30 + 8;
  if ((local_30 + 8 < local_28) ||
     (cVar4 = FUN_1437144f0(&local_30), uVar3 = local_30, cVar4 != '\0')) goto LAB_14374490a;
  bVar2 = false;
  goto LAB_14374491f;
LAB_14374490a:
  local_30 = uVar3;
  pbVar1 = (byte *)FUN_143714f30(local_30,local_res10);
  if ((*pbVar1 & 0x20) != 0) {
    bVar2 = true;
LAB_14374491f:
    if (!bVar2) {
      return;
    }
    lVar5 = FUN_143741f50(param_2,local_48);
    puVar6 = (undefined8 *)FUN_143714490(*(undefined8 *)(lVar5 + 8),1);
    if (puVar6 == (undefined8 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (uint)*puVar6;
    }
    (*(code *)(&DAT_146b82ca0)[uVar7 & 0xf])(param_1,lVar5);
    if ((local_38 & 1) != 0) {
      FUN_143733a60(local_38 & 0xfffffffffffffffe);
    }
  }
  goto LAB_1437448e0;
}



// FUNCTION 1437449a0 FUN_1437449a0 body=69 status=ok
// SIG undefined FUN_1437449a0(void)

void FUN_1437449a0(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  FUN_143741ac0(local_res8);
  puVar2 = (undefined8 *)FUN_143714490(*(undefined8 *)(param_1 + 8),1);
  uVar1 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = (uint)*puVar2;
  }
  (*(code *)(&DAT_146b82ca0)[uVar1 & 0xf])(local_res8,param_1);
  return;
}



// FUNCTION 143744a20 FUN_143744a20 body=15 status=ok
// SIG undefined FUN_143744a20(void)

void FUN_143744a20(undefined8 param_1)

{
  FUN_143753210(DAT_146b834f8,param_1);
  return;
}



// FUNCTION 143744a30 FUN_143744a30 body=49 status=ok
// SIG undefined FUN_143744a30(void)

undefined8 FUN_143744a30(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14371d640();
  if (lVar1 != 0) {
    lVar1 = FUN_143744a70();
    if (lVar1 != 0) {
      FUN_143744a20(lVar1);
    }
    return 0;
  }
  return 0x80040200;
}



// FUNCTION 143744a70 FUN_143744a70 body=19 status=ok
// SIG undefined FUN_143744a70(void)

ulonglong FUN_143744a70(void)

{
  DAT_146b82db0 = 1;
  return DAT_146b82da8 & 0xfffffffffffffffc;
}



// FUNCTION 143744a90 FUN_143744a90 body=8 status=ok
// SIG undefined FUN_143744a90(void)

ulonglong FUN_143744a90(ulonglong *param_1)

{
  return *param_1 & 0xfffffffffffffffc;
}



// FUNCTION 143744aa0 FUN_143744aa0 body=62 status=ok
// SIG undefined FUN_143744aa0(void)

undefined1 FUN_143744aa0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  lVar1 = FUN_143744a70();
  if (lVar1 == 0) {
    return 1;
  }
  if (DAT_146b834f8 != 0) {
    uVar2 = FUN_143744a70();
    uVar3 = FUN_143753da0(DAT_146b834f8,uVar2);
    return uVar3;
  }
  return 0;
}



// FUNCTION 143744ae0 FUN_143744ae0 body=14 status=ok
// SIG undefined FUN_143744ae0(void)

void FUN_143744ae0(ulonglong *param_1,char param_2)

{
  if (param_2 != '\0') {
    *param_1 = *param_1 | 2;
    return;
  }
  *param_1 = *param_1 & 0xfffffffffffffffd;
  return;
}



// FUNCTION 143744af0 <lambda_invoker_cdecl> body=5 status=ok
// SIG undefined <lambda_invoker_cdecl>(void)

void `FVulkanDeviceExtension::GetUESupportedDeviceExtensions'::`2'::<lambda_8>::
     <lambda_invoker_cdecl>(ulonglong *param_1)

{
  *param_1 = *param_1 | 1;
  return;
}



// FUNCTION 143744b00 FUN_143744b00 body=15 status=ok
// SIG undefined FUN_143744b00(void)

void FUN_143744b00(undefined8 param_1)

{
  FUN_143754390(DAT_146b834f8,param_1);
  return;
}



// FUNCTION 143744b10 FUN_143744b10 body=39 status=ok
// SIG undefined FUN_143744b10(void)

undefined8 FUN_143744b10(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14371d640();
  if (lVar1 != 0) {
    lVar1 = FUN_143744a70();
    if (lVar1 != 0) {
      FUN_143744b00(lVar1);
    }
  }
  return 0;
}



// FUNCTION 143744b40 FUN_143744b40 body=9 status=ok
// SIG undefined FUN_143744b40(void)

void FUN_143744b40(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



// FUNCTION 143744b50 FUN_143744b50 body=9 status=ok
// SIG undefined FUN_143744b50(void)

uint FUN_143744b50(uint *param_1)

{
  return *param_1 >> 1 & 1;
}



// FUNCTION 143744b60 FUN_143744b60 body=243 status=ok
// SIG undefined FUN_143744b60(void)

undefined4 *
FUN_143744b60(undefined8 param_1,undefined4 *param_2,int *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  iVar1 = param_3[2];
  iVar2 = *param_3;
  puVar5 = (undefined8 *)FUN_143714420(param_4,2);
  if (puVar5 == (undefined8 *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *puVar5;
  }
  iVar3 = FUN_1437152f0(uVar8);
  plVar6 = (longlong *)FUN_143714420(param_4,2);
  if (plVar6 == (longlong *)0x0) {
    lVar9 = 0;
  }
  else {
    lVar9 = *plVar6;
  }
  uVar8 = *(undefined8 *)param_3;
  uVar4 = 0;
  uVar7 = 0;
  if (lVar9 != 0) {
    uVar4 = FUN_1437152f0(lVar9);
    uVar7 = FUN_1437151a0(lVar9);
    if ((uVar7 & 1) != 0) {
      FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
    }
  }
  *param_5 = uVar8;
  param_5[1] = lVar9;
  *(int *)(param_5 + 2) = (iVar1 - iVar2) / iVar3;
  *(undefined4 *)((longlong)param_5 + 0x14) = uVar4;
  if ((*(byte *)(param_5 + 3) & 1) != 0) {
    FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
  }
  param_5[3] = uVar7;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143744c60 FBinaryArchiveFormatter body=18 status=ok
// SIG undefined FBinaryArchiveFormatter(void)

undefined8 *
FBinaryArchiveFormatter::FBinaryArchiveFormatter(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = hkReflect::Detail::AttributeAllocImpl::vftable;
  return param_1;
}



// FUNCTION 143744c80 FUN_143744c80 body=99 status=ok
// SIG undefined FUN_143744c80(void)

undefined8 * FUN_143744c80(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkReflect::Detail::AllocationImpl::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x10);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 143744cf0 FUN_143744cf0 body=129 status=ok
// SIG undefined FUN_143744cf0(void)

/* WARNING: Removing unreachable block (ram,0x000143744d5e) */

undefined8 * FUN_143744cf0(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 local_228 [32];
  undefined1 local_208 [512];
  
  FUN_1437134a0(local_228,local_208,0x200);
  Electra::FHTTPResourceRequest::URL
            (local_228,"Only AttributeAllocImpl\'s deallocate function should be used.");
  iVar2 = FUN_143732300(0xfd11cd2,local_208,"Reflect\\Attributes\\hkAttributes.cpp",0x139);
  if (iVar2 == 0) {
    FUN_143713520(local_228);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return param_2;
  }
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined8 *)(*pcVar1)();
  return puVar3;
}



// FUNCTION 143744d80 FUN_143744d80 body=129 status=ok
// SIG undefined FUN_143744d80(void)

/* WARNING: Removing unreachable block (ram,0x000143744dee) */

undefined8 * FUN_143744d80(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 local_228 [32];
  undefined1 local_208 [512];
  
  FUN_1437134a0(local_228,local_208,0x200);
  Electra::FHTTPResourceRequest::URL
            (local_228,"Only AttributeAllocImpl\'s deallocate function should be used.");
  iVar2 = FUN_143732300(0x2d8bd59c,local_208,"Reflect\\Attributes\\hkAttributes.cpp",0x13f);
  if (iVar2 == 0) {
    FUN_143713520(local_228);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return param_2;
  }
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined8 *)(*pcVar1)();
  return puVar3;
}



// FUNCTION 143744e10 FUN_143744e10 body=42 status=ok
// SIG undefined FUN_143744e10(void)

/* WARNING: Removing unreachable block (ram,0x000143744e2a) */

undefined8 * FUN_143744e10(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 143744e40 FUN_143744e40 body=9 status=ok
// SIG undefined FUN_143744e40(void)

void FUN_143744e40(longlong param_1)

{
  FUN_1437039c0(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 143744e50 FUN_143744e50 body=99 status=ok
// SIG undefined FUN_143744e50(void)

undefined1 FUN_143744e50(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  plVar2 = (longlong *)FUN_14374a4c0(local_28,param_1,&DAT_1467e4e10);
  puVar1 = (undefined8 *)*plVar2;
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  if (puVar1 != (undefined8 *)0x0) {
    (*(code *)*puVar1)(param_1,puVar1[1],puVar1[2]);
    return 1;
  }
  return 0;
}



// FUNCTION 143744ec0 FUN_143744ec0 body=148 status=ok
// SIG undefined FUN_143744ec0(void)

undefined8 FUN_143744ec0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      uVar2 = FUN_143744f60(param_1,local_28,iVar3);
      iVar1 = FUN_143742340(param_2,uVar2);
      if ((local_18 & 1) != 0) {
        FUN_143733a60(local_18 & 0xfffffffffffffffe);
      }
      if (iVar1 == 0) {
        return *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x10));
  }
  return 0;
}



// FUNCTION 143744f60 FUN_143744f60 body=74 status=ok
// SIG undefined FUN_143744f60(void)

undefined8 * FUN_143744f60(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)param_3 * 8);
  param_2[1] = lVar1;
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1437151a0();
  }
  param_2[2] = uVar2;
  if ((uVar2 & 1) != 0) {
    FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143744fb0 FUN_143744fb0 body=356 status=ok
// SIG undefined FUN_143744fb0(void)

undefined8 FUN_143744fb0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 local_res10 [2];
  undefined8 local_48;
  longlong lStack_40;
  ulonglong local_38;
  undefined8 local_30;
  longlong lStack_28;
  ulonglong local_20;
  
  local_res10[0] = param_2;
  puVar5 = (undefined8 *)FUN_14371d5c0(&local_48,local_res10,&DAT_1467f0140);
  uVar9 = 0;
  local_48 = *puVar5;
  lVar1 = puVar5[1];
  uVar6 = uVar9;
  lStack_40 = lVar1;
  if (lVar1 != 0) {
    uVar6 = FUN_1437151a0(lVar1);
  }
  if ((uVar6 & 1) != 0) {
    FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
  }
  local_20 = 0;
  local_30 = 0;
  lStack_28 = 0;
  bVar3 = 0;
  uVar2 = local_20;
  if (lVar1 != 0) {
    puVar5 = (undefined8 *)FUN_143714490(lVar1,1);
    if (puVar5 != (undefined8 *)0x0) {
      bVar3 = (byte)*puVar5;
    }
    uVar2 = local_20;
    if ((bVar3 & 0xf) == 4) {
      local_30 = local_48;
      lStack_28 = lVar1;
      if ((uVar6 & 1) != 0) {
        FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
      }
      uVar2 = uVar6;
      if ((local_20 & 1) != 0) {
        FUN_143733a60(local_20 & 0xfffffffffffffffe);
      }
    }
  }
  local_20 = uVar2;
  if ((uVar6 & 1) != 0) {
    FUN_143733a60(uVar6 & 0xfffffffffffffffe);
  }
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      uVar7 = FUN_143744f60(param_1,&local_48,uVar9);
      iVar4 = FUN_143742340(uVar7,&local_30);
      if ((local_38 & 1) != 0) {
        FUN_143733a60(local_38 & 0xfffffffffffffffe);
      }
      if (iVar4 == 0) {
        uVar7 = 1;
        goto LAB_1437450e4;
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < *(int *)(param_1 + 0x10));
  }
  uVar7 = 0;
LAB_1437450e4:
  if ((local_20 & 1) != 0) {
    FUN_143733a60(local_20 & 0xfffffffffffffffe);
  }
  return uVar7;
}



// FUNCTION 143745120 thunk_FUN_143744fb0 body=5 status=ok
// SIG undefined thunk_FUN_143744fb0(void)

void thunk_FUN_143744fb0(void)

{
  FUN_143744fb0();
  return;
}



// FUNCTION 143745130 FUN_143745130 body=37 status=ok
// SIG undefined FUN_143745130(void)

undefined4 *
FUN_143745130(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_1437455a0(param_3,param_5);
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143745160 FUN_143745160 body=33 status=ok
// SIG undefined FUN_143745160(void)

void FUN_143745160(undefined1 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3;
  if (0 < param_3) {
    param_2 = param_2 - (longlong)param_1;
    do {
      *param_1 = param_1[param_2];
      param_1 = param_1 + 1;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 143745190 FUN_143745190 body=113 status=ok
// SIG undefined FUN_143745190(void)

longlong * FUN_143745190(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = (longlong)(param_1 + 2);
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000080;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  if (0x80 < iVar1) {
    FUN_14370c310(&PTR_vftable_1467f0638,param_1,iVar1,1);
  }
  FUN_143745160(*param_1,uVar2,iVar1);
  *(int *)(param_1 + 1) = iVar1;
  return param_1;
}



// FUNCTION 143745210 FUN_143745210 body=153 status=ok
// SIG undefined FUN_143745210(void)

longlong * FUN_143745210(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = (longlong)(param_1 + 2);
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000080;
  iVar2 = param_2[2];
  iVar3 = *param_2;
  iVar1 = (iVar2 - iVar3) + 1;
  if (0x80 < iVar1) {
    iVar4 = iVar1;
    if (iVar1 < 0x100) {
      iVar4 = 0x100;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_1,iVar4,1);
  }
  *(int *)(param_1 + 1) = iVar1;
  *(undefined1 *)((longlong)(iVar2 - iVar3) + *param_1) = 0;
  hkString::strNcmp(*param_1,*(undefined8 *)param_2,param_2[2] - *param_2);
  return param_1;
}



// FUNCTION 1437452b0 FUN_1437452b0 body=83 status=ok
// SIG undefined FUN_1437452b0(void)

undefined8 * FUN_1437452b0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = param_1 + 2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000080;
  *(undefined1 *)(param_1 + 2) = 0;
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  FUN_143745b90();
  return param_1;
}



// FUNCTION 143745310 FUN_143745310 body=184 status=ok
// SIG undefined FUN_143745310(void)

longlong * FUN_143745310(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = (longlong)(param_1 + 2);
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000080;
  if (param_2 != 0) {
    iVar3 = FUN_14370c910(param_2);
    uVar4 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
    iVar5 = iVar3 + 1;
    if ((int)uVar4 < iVar5) {
      iVar2 = uVar4 * 2;
      iVar1 = iVar5;
      if (iVar5 < iVar2) {
        iVar1 = iVar2;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,param_1,iVar1,1);
    }
    *(int *)(param_1 + 1) = iVar5;
    *(undefined1 *)((longlong)iVar3 + *param_1) = 0;
    hkString::strNcmp(*param_1,param_2,iVar3);
    return param_1;
  }
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 1437453d0 FUN_1437453d0 body=144 status=ok
// SIG undefined FUN_1437453d0(void)

longlong * FUN_1437453d0(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  *param_1 = (longlong)(param_1 + 2);
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000080;
  iVar2 = param_3 + 1;
  if (0x80 < iVar2) {
    iVar1 = iVar2;
    if (iVar2 < 0x100) {
      iVar1 = 0x100;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_1,iVar1,1);
  }
  *(int *)(param_1 + 1) = iVar2;
  *(undefined1 *)((longlong)param_3 + *param_1) = 0;
  hkString::strNcmp(*param_1,param_2,param_3);
  return param_1;
}



// FUNCTION 143745460 FUN_143745460 body=96 status=ok
// SIG undefined FUN_143745460(void)

undefined8 * FUN_143745460(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff) < iVar1) {
    FUN_14370c310(&PTR_vftable_1467f0638,param_1,iVar1,1);
  }
  FUN_143745160(*param_1,uVar2,iVar1);
  *(int *)(param_1 + 1) = iVar1;
  return param_1;
}



// FUNCTION 1437454c0 FUN_1437454c0 body=217 status=ok
// SIG undefined FUN_1437454c0(void)

/* WARNING: Removing unreachable block (ram,0x000143745575) */

longlong * FUN_1437454c0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (*param_2 == param_2[1]) {
    if ((*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff) == 0) {
      FUN_14370c310(&PTR_vftable_1467f0638,param_1,1,1);
    }
    *(undefined4 *)(param_1 + 1) = 1;
    *(undefined1 *)*param_1 = 0;
    return param_1;
  }
  iVar5 = (int)param_2[1] - (int)*param_2;
  uVar4 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  iVar1 = iVar5 + 1;
  if ((int)uVar4 < iVar1) {
    iVar3 = uVar4 * 2;
    iVar2 = iVar1;
    if (iVar1 < iVar3) {
      iVar2 = iVar3;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_1,iVar2,1);
  }
  *(int *)(param_1 + 1) = iVar1;
  *(undefined1 *)((longlong)iVar5 + *param_1) = 0;
  hkString::strNcmp(*param_1,*param_2,(int)param_2[1] - (int)*param_2);
  return param_1;
}



// FUNCTION 1437455a0 FUN_1437455a0 body=78 status=ok
// SIG undefined FUN_1437455a0(void)

void FUN_1437455a0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong local_18;
  longlong local_10;
  
  local_10 = 0;
  local_18 = param_2;
  if (param_2 != 0) {
    iVar1 = FUN_14370c910(param_2);
    local_10 = iVar1 + param_2;
  }
  FUN_1437454c0(param_1,&local_18);
  return;
}



// FUNCTION 1437455f0 EqualTo body=19 status=ok
// SIG undefined EqualTo(void)

bool FText::EqualTo(void)

{
  int iVar1;
  
  iVar1 = FUN_143745f70();
  return iVar1 == 0;
}



// FUNCTION 143745610 SupportsConvertibleLaptops body=19 status=ok
// SIG undefined SupportsConvertibleLaptops(void)

bool UPlatformEventsComponent::SupportsConvertibleLaptops(void)

{
  int iVar1;
  
  iVar1 = FUN_143745f70();
  return iVar1 != 0;
}



// FUNCTION 143745630 FUN_143745630 body=217 status=ok
// SIG undefined FUN_143745630(void)

longlong * FUN_143745630(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_2 != 0) {
    iVar3 = FUN_14370c910(param_2);
    iVar1 = (int)param_1[1];
    lVar7 = (longlong)iVar3;
    uVar4 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
    iVar3 = iVar1 + iVar3;
    if (((int)uVar4 < iVar3) && ((int)uVar4 < iVar3)) {
      iVar2 = iVar3;
      if (iVar3 < (int)(uVar4 * 2)) {
        iVar2 = uVar4 * 2;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,param_1,iVar2,1);
    }
    lVar6 = (longlong)(iVar1 + -1);
    FUN_143732890(*param_1 + lVar7 + lVar6,*param_1 + lVar6,(longlong)(iVar1 - (iVar1 + -1)));
    puVar5 = (undefined1 *)(*param_1 + lVar6);
    if (0 < lVar7) {
      param_2 = param_2 - (longlong)puVar5;
      do {
        *puVar5 = puVar5[param_2];
        puVar5 = puVar5 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    *(int *)(param_1 + 1) = iVar3;
  }
  return param_1;
}



// FUNCTION 143745710 FUN_143745710 body=171 status=ok
// SIG undefined FUN_143745710(void)

longlong * FUN_143745710(longlong *param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 != 0) {
    if (param_3 < 0) {
      param_3 = FUN_14370c910(param_2);
    }
    iVar5 = (int)param_1[1] + -1;
    uVar4 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
    iVar6 = iVar5 + param_3;
    iVar1 = iVar6 + 1;
    if ((int)uVar4 < iVar1) {
      iVar3 = uVar4 * 2;
      iVar2 = iVar1;
      if (iVar1 < iVar3) {
        iVar2 = iVar3;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,param_1,iVar2,1);
    }
    *(int *)(param_1 + 1) = iVar1;
    *(undefined1 *)((longlong)iVar6 + *param_1) = 0;
    hkString::strNcmp((longlong)iVar5 + *param_1,param_2,param_3);
  }
  return param_1;
}



// FUNCTION 1437457c0 FUN_1437457c0 body=965 status=ok
// SIG undefined FUN_1437457c0(void)

undefined8 FUN_1437457c0(undefined8 param_1,char *param_2,longlong *param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  char *pcVar8;
  longlong *plVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  longlong local_108;
  longlong local_100;
  ulonglong local_f8;
  char *local_f0;
  char *pcStack_e8;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  char *local_c8;
  undefined1 *local_b8;
  int local_b0;
  uint local_ac;
  undefined1 local_a8 [128];
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  iVar4 = 0;
LAB_1437457ff:
  do {
    pcVar10 = (char *)0x0;
    pcVar13 = pcVar10;
LAB_143745802:
    bVar2 = false;
    pcVar12 = param_2;
LAB_143745810:
    while( true ) {
      cVar3 = *pcVar12;
      iVar11 = (int)pcVar12;
      iVar7 = (int)param_2;
      if (cVar3 != '{') break;
      if (bVar2) {
LAB_143745b42:
        iVar11 = -1;
        goto LAB_143745b49;
      }
      if (pcVar13 == (char *)0x0) {
        pcVar13 = pcVar12 + 1;
        pcVar12 = pcVar13;
      }
      else {
        FUN_143745710(param_1,param_2,iVar11 - iVar7);
        param_2 = pcVar12 + 1;
        pcVar13 = pcVar10;
        pcVar12 = param_2;
      }
    }
    if (cVar3 != '}') {
      if (bVar2) goto LAB_143745b42;
      if (cVar3 == '\0') {
        if (pcVar12 <= param_2) {
          return 0;
        }
        iVar11 = iVar11 - iVar7;
        goto LAB_143745b49;
      }
      pcVar12 = pcVar12 + 1;
      goto LAB_143745810;
    }
    if (bVar2) break;
    if (pcVar13 == (char *)0x0) {
      bVar2 = true;
      pcVar12 = pcVar12 + 1;
      goto LAB_143745810;
    }
    pcVar8 = pcVar13;
    if (param_2 + 1 < pcVar13) {
      FUN_143745710(param_1,param_2,((int)pcVar13 - iVar7) + -1);
    }
    for (; ((pcVar8 < pcVar12 && (*pcVar8 != ',')) && (*pcVar8 != ':')); pcVar8 = pcVar8 + 1) {
    }
    local_e0 = pcVar13;
    local_d8 = pcVar8;
    if (pcVar13 != pcVar8) {
      iVar4 = FUN_1437460d0(&local_e0);
    }
    uVar6 = 0x20;
    if ((pcVar8 < pcVar12) && (*pcVar8 == ',')) {
      local_d0 = pcVar8 + 1;
      pcVar8 = local_d0;
      if (local_d0 < pcVar12) {
        uVar6 = 0x20;
        if (*local_d0 == '0') {
          uVar6 = 0x30;
        }
        do {
          if (*pcVar8 == ':') break;
          pcVar8 = pcVar8 + 1;
        } while (pcVar8 < pcVar12);
      }
      local_c8 = pcVar8;
      uVar5 = FUN_1437460d0(&local_d0);
      pcVar10 = (char *)(ulonglong)uVar5;
    }
    local_f0 = (char *)0x0;
    pcStack_e8 = (char *)0x0;
    if (((pcVar8 < pcVar12) && (*pcVar8 == ':')) &&
       (local_f0 = pcVar8 + 1, pcStack_e8 = local_f0, local_f0 < pcVar12)) {
      pcStack_e8 = pcVar12;
    }
    if (((*param_3 == 0) || ((ulonglong)(param_3[1] - *param_3 >> 4) <= (ulonglong)(longlong)iVar4))
       && (cVar3 = FUN_143755360(0,
                                 "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/Types/hkVarArgsV.h"
                                 ,0x2b,"hkVarArgs::Vector::operator []",
                                 "m_begin && index < hkUlong(m_end-m_begin)",
                                 "Out of bounds varargs access",&DAT_145b909f0,0), cVar3 != '\0')) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    plVar9 = (longlong *)((longlong)iVar4 * 0x10 + *param_3);
    local_108 = *plVar9;
    local_100 = plVar9[1];
    if (local_100 == 0) {
      local_f8 = 0;
    }
    else {
      local_f8 = FUN_1437151a0();
    }
    if ((local_f8 & 1) != 0) {
      FUN_1437329e0(local_f8 & 0xfffffffffffffffe);
    }
    if (local_108 == 0) {
      FUN_143745710(param_1,"(NullVar)",0xffffffff);
      if ((local_f8 & 1) != 0) {
        FUN_143733a60(local_f8 & 0xfffffffffffffffe);
      }
LAB_143745a03:
      iVar4 = iVar4 + 1;
      param_2 = pcVar12 + 1;
      goto LAB_1437457ff;
    }
    local_b8 = local_a8;
    local_ac = 0x80000080;
    local_b0 = 1;
    local_a8[0] = 0;
    FUN_143742cc0(&local_108,&local_b8,&local_f0);
    uVar5 = (uint)pcVar10;
    iVar7 = local_b0 + -1;
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    iVar7 = ((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)) - iVar7;
    if ((int)uVar5 < 1) {
      if (-1 < (int)uVar5) goto LAB_143745a69;
      FUN_143745710(param_1,local_b8,0xffffffff);
      FUN_143745cf0(param_1,iVar7,uVar6);
    }
    else {
      FUN_143745cf0(param_1,iVar7,uVar6);
LAB_143745a69:
      FUN_143745710(param_1,local_b8,0xffffffff);
    }
    local_b0 = 0;
    if (-1 < (int)local_ac) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_b8,1,local_ac & 0x3fffffff);
    }
    local_b8 = (undefined1 *)0x0;
    local_ac = 0x80000000;
    if ((local_f8 & 1) == 0) goto LAB_143745a03;
    FUN_143733a60(local_f8 & 0xfffffffffffffffe);
    iVar4 = iVar4 + 1;
    param_2 = pcVar12 + 1;
  } while( true );
  if (pcVar13 != (char *)0x0) {
    iVar11 = -1;
LAB_143745b49:
    FUN_143745710(param_1,param_2,iVar11);
    return 0;
  }
  FUN_143745710(param_1,param_2,iVar11 - iVar7);
  param_2 = pcVar12 + 1;
  goto LAB_143745802;
}



// FUNCTION 143745b90 FUN_143745b90 body=290 status=ok
// SIG undefined FUN_143745b90(void)

longlong *
FUN_143745b90(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50 [5];
  undefined8 local_28;
  undefined8 local_20;
  
  local_68 = 0;
  lVar8 = 0;
  local_60 = 0;
  iVar7 = (int)param_1[1] + -1;
  local_58 = 0;
  local_50[3] = param_5;
  local_50[4] = param_6;
  local_28 = param_7;
  local_50[0] = param_2;
  local_50[1] = param_3;
  local_50[2] = param_4;
  local_20 = 0;
  iVar9 = iVar7;
  lVar1 = lVar8;
  lVar2 = param_2;
  while (lVar2 != 0) {
    iVar5 = FUN_14370c910(lVar2);
    *(int *)((longlong)&local_68 + lVar1 * 4) = iVar5;
    lVar1 = lVar1 + 1;
    iVar9 = iVar9 + iVar5;
    lVar2 = local_50[lVar1];
  }
  iVar5 = iVar9 + 1;
  uVar6 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  if ((int)uVar6 < iVar5) {
    iVar4 = uVar6 * 2;
    iVar3 = iVar5;
    if (iVar5 < iVar4) {
      iVar3 = iVar4;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_1,iVar3,1);
  }
  *(int *)(param_1 + 1) = iVar5;
  *(undefined1 *)((longlong)iVar9 + *param_1) = 0;
  while (param_2 != 0) {
    iVar9 = *(int *)((longlong)&local_68 + lVar8 * 4);
    hkString::strNcmp((longlong)iVar7 + *param_1,param_2,iVar9);
    lVar8 = lVar8 + 1;
    iVar7 = iVar7 + iVar9;
    param_2 = local_50[lVar8];
  }
  return param_1;
}



// FUNCTION 143745cc0 printf body=42 status=ok
// SIG int printf(char * _Format, ...)

int __cdecl hkStringBuf::printf(char *_Format,...)

{
  undefined8 in_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = in_R8;
  local_res20 = in_R9;
  FUN_143745dc0(_Format,in_RDX,&local_res18);
  return (int)_Format;
}



// FUNCTION 143745cf0 FUN_143745cf0 body=207 status=ok
// SIG undefined FUN_143745cf0(void)

longlong * FUN_143745cf0(longlong *param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  
  if (0 < param_2) {
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    iVar5 = param_2 + 1 + (int)param_1[1];
    uVar2 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
    if ((int)uVar2 < iVar5) {
      iVar1 = uVar2 * 2;
      if (iVar5 < iVar1) {
        iVar5 = iVar1;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,param_1,iVar5,1);
    }
    param_2 = (int)param_1[1] + param_2;
    uVar2 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
    if ((int)uVar2 < param_2) {
      iVar1 = uVar2 * 2;
      iVar5 = param_2;
      if (param_2 < iVar1) {
        iVar5 = iVar1;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,param_1,iVar5,1);
    }
    iVar5 = param_2 - (int)param_1[1];
    if (0 < iVar5) {
      puVar4 = (undefined1 *)((longlong)(int)param_1[1] + *param_1);
      for (lVar3 = (longlong)iVar5; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar4 = param_3;
        puVar4 = puVar4 + 1;
      }
    }
    *(int *)(param_1 + 1) = param_2;
    *(undefined1 *)((longlong)param_2 + *param_1) = 0;
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  }
  return param_1;
}



// FUNCTION 143745dc0 FUN_143745dc0 body=130 status=ok
// SIG undefined FUN_143745dc0(void)

undefined8 FUN_143745dc0(undefined8 param_1)

{
  undefined1 *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined1 local_88 [128];
  
  local_8c = 0x80000080;
  local_98 = local_88;
  local_90 = 1;
  local_88[0] = 0;
  FUN_143747170(&local_98);
  FUN_143745710(param_1,local_98,0xffffffff);
  local_90 = 0;
  if (-1 < (int)local_8c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_98,1,local_8c & 0x3fffffff);
  }
  return param_1;
}



// FUNCTION 143745e50 FUN_143745e50 body=118 status=ok
// SIG undefined FUN_143745e50(void)

longlong * FUN_143745e50(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (0 < param_2) {
    iVar5 = ((int)param_1[1] - param_2) + -1;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    uVar4 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
    iVar1 = iVar5 + 1;
    if ((int)uVar4 < iVar1) {
      iVar3 = uVar4 * 2;
      iVar2 = iVar1;
      if (iVar1 < iVar3) {
        iVar2 = iVar3;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,param_1,iVar2,1);
    }
    *(int *)(param_1 + 1) = iVar1;
    *(undefined1 *)((longlong)iVar5 + *param_1) = 0;
  }
  return param_1;
}



// FUNCTION 143745ed0 FUN_143745ed0 body=73 status=ok
// SIG undefined FUN_143745ed0(void)

undefined8 * FUN_143745ed0(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 1) + -1;
  if (param_2 < iVar3) {
    iVar3 = param_2;
  }
  if (0 < iVar3) {
    iVar1 = *(int *)(param_1 + 1) - iVar3;
    iVar4 = 0;
    *(int *)(param_1 + 1) = iVar1;
    puVar2 = (undefined1 *)*param_1;
    if (0 < iVar1) {
      do {
        iVar4 = iVar4 + 1;
        *puVar2 = puVar2[iVar3];
        puVar2 = puVar2 + 1;
      } while (iVar4 < iVar1);
    }
  }
  return param_1;
}



// FUNCTION 143745f20 FUN_143745f20 body=77 status=ok
// SIG undefined FUN_143745f20(void)

/* WARNING: Removing unreachable block (ram,0x000143745f51) */

void FUN_143745f20(undefined8 *param_1)

{
  if ((*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff) == 0) {
    FUN_14370c310(&PTR_vftable_1467f0638,param_1,1,1);
  }
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)*param_1 = 0;
  return;
}



// FUNCTION 143745f70 FUN_143745f70 body=19 status=ok
// SIG undefined FUN_143745f70(void)

undefined8 FUN_143745f70(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = hkString::strCmp(*param_1);
    return uVar1;
  }
  return 1;
}



// FUNCTION 143745f90 FUN_143745f90 body=116 status=ok
// SIG undefined FUN_143745f90(void)

ulonglong FUN_143745f90(longlong *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  char *pcVar4;
  
  iVar2 = FUN_14370c910(param_2);
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  if ((int)(uVar1 - 1) < iVar2) {
LAB_143745fb6:
    return uVar3 & 0xffffffffffffff00;
  }
  if (0 < iVar2) {
    pcVar4 = param_2;
    do {
      uVar3 = 0;
      if (pcVar4[(*param_1 - (longlong)param_2) + (longlong)(int)((uVar1 - iVar2) + -1)] != *pcVar4)
      goto LAB_143745fb6;
      pcVar4 = pcVar4 + 1;
      uVar3 = (longlong)pcVar4 - (longlong)param_2;
    } while ((longlong)uVar3 < (longlong)iVar2);
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 143746010 FUN_143746010 body=114 status=ok
// SIG undefined FUN_143746010(void)

void FUN_143746010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res20;
  undefined8 *local_138 [2];
  undefined1 *local_128;
  undefined1 *local_120;
  undefined1 local_118 [256];
  undefined1 local_18 [8];
  
  local_128 = local_118;
  local_120 = local_18;
  local_138[0] = &local_res20;
  local_res20 = param_4;
  uVar1 = FUN_1437810e0(&local_128,param_3,local_138);
  FUN_1437325e0(&local_128,uVar1);
  ATTLCharacterCommon::MulticastPlayOuterEmote_Implementation(param_1,param_2,&local_128);
  return;
}



// FUNCTION 143746090 MulticastPlayOuterEmote_Implementation body=58 status=ok
// SIG undefined MulticastPlayOuterEmote_Implementation(void)

void ATTLCharacterCommon::MulticastPlayOuterEmote_Implementation
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143745f20();
  FUN_1437457c0(param_1,param_2,param_3);
  return;
}



// FUNCTION 1437460d0 FUN_1437460d0 body=98 status=ok
// SIG undefined FUN_1437460d0(void)

int FUN_1437460d0(undefined8 param_1)

{
  int iVar1;
  char *local_98;
  undefined4 local_90;
  uint local_8c;
  
  FUN_143745210(&local_98,param_1);
  iVar1 = hkString::atoi(local_98);
  local_90 = 0;
  if (-1 < (int)local_8c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_98,1,local_8c & 0x3fffffff);
  }
  return iVar1;
}



// FUNCTION 143746140 FUN_143746140 body=57 status=ok
// SIG undefined FUN_143746140(void)

int FUN_143746140(longlong *param_1,char param_2,int param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1] + -1;
  if (param_4 < iVar2) {
    iVar2 = param_4;
  }
  if (param_3 < iVar2) {
    lVar1 = (longlong)param_3;
    do {
      if (*(char *)(*param_1 + lVar1) == param_2) {
        return param_3;
      }
      param_3 = param_3 + 1;
      lVar1 = lVar1 + 1;
    } while (lVar1 < iVar2);
  }
  return -1;
}



// FUNCTION 143746180 FUN_143746180 body=48 status=ok
// SIG undefined FUN_143746180(void)

int FUN_143746180(longlong *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  
  if (param_3 < (int)param_1[1]) {
    pcVar1 = strstr((char *)((longlong)param_3 + *param_1),param_2);
    if (pcVar1 != (char *)0x0) {
      return (int)pcVar1 - (int)*param_1;
    }
  }
  return -1;
}



// FUNCTION 1437461b0 FUN_1437461b0 body=183 status=ok
// SIG undefined FUN_1437461b0(void)

int FUN_1437461b0(undefined8 *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  longlong lVar5;
  char *pcVar6;
  
  pcVar6 = (char *)*param_1;
  iVar2 = 0;
  if (*pcVar6 != '\0') {
    do {
      lVar5 = 0;
      if (*param_2 != '\0') {
        pcVar4 = param_2;
        cVar1 = *param_2;
        do {
          cVar3 = pcVar4[(longlong)pcVar6 - (longlong)param_2];
          if ((byte)(cVar3 + 0xbfU) < 0x1a) {
            cVar3 = cVar3 + ' ';
          }
          if ((byte)(cVar1 + 0xbfU) < 0x1a) {
            cVar1 = cVar1 + ' ';
          }
          if (cVar3 != cVar1) break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 1;
          lVar5 = lVar5 + 1;
        } while (cVar1 != '\0');
      }
      if (param_2[lVar5] == '\0') {
        return iVar2;
      }
      pcVar6 = pcVar6 + 1;
      iVar2 = iVar2 + 1;
    } while (*pcVar6 != '\0');
  }
  return -1;
}



// FUNCTION 143746270 FUN_143746270 body=10 status=ok
// SIG undefined FUN_143746270(void)

undefined8 FUN_143746270(undefined8 *param_1)

{
  return CONCAT71((int7)((ulonglong)*param_1 >> 8),*(char *)*param_1 == '\0');
}



// FUNCTION 143746280 FUN_143746280 body=58 status=ok
// SIG undefined FUN_143746280(void)

int FUN_143746280(longlong *param_1,char param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1] + -1;
  if (iVar1 < param_4) {
    param_4 = iVar1;
  }
  param_4 = param_4 + -1;
  if (param_3 <= param_4) {
    lVar2 = (longlong)param_4;
    do {
      if (*(char *)(*param_1 + lVar2) == param_2) {
        return param_4;
      }
      param_4 = param_4 + -1;
      lVar2 = lVar2 + -1;
    } while (param_3 <= lVar2);
  }
  return -1;
}



// FUNCTION 1437462c0 FUN_1437462c0 body=101 status=ok
// SIG undefined FUN_1437462c0(void)

int FUN_1437462c0(int *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = strstr(*(char **)param_1,param_2);
  if (pcVar2 == (char *)0x0) {
    return -1;
  }
  do {
    iVar1 = *param_1;
    iVar3 = (int)pcVar2;
    pcVar2 = strstr(pcVar2 + 1,param_2);
  } while (pcVar2 != (char *)0x0);
  return iVar3 - iVar1;
}



// FUNCTION 143746330 FUN_143746330 body=456 status=ok
// SIG undefined FUN_143746330(void)

longlong * FUN_143746330(longlong *param_1,char *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong local_38;
  longlong local_28 [4];
  
  cVar4 = FUN_143746270();
  if (cVar4 == '\0') {
    plVar1 = param_1 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    local_28[0] = param_3;
    local_28[1] = param_4;
    local_38 = 0;
    local_28[2] = 0;
    if (((int)*plVar1 == 0) || (*(char *)((longlong)((int)param_1[1] + -1) + *param_1) == '/')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    while (param_2 != (char *)0x0) {
      cVar4 = *param_2;
      if (cVar4 != '\0') {
        while (cVar4 == '/') {
          param_2 = param_2 + 1;
          cVar4 = *param_2;
        }
        iVar5 = FUN_14370c910(param_2);
        uVar11 = (ulonglong)iVar5;
        uVar12 = uVar11;
        if (iVar5 != 0) {
          do {
            uVar10 = (uint)uVar12;
            if (param_2[uVar11 - 1] != '/') break;
            uVar10 = uVar10 - 1;
            uVar11 = uVar11 - 1;
            uVar12 = (ulonglong)uVar10;
          } while (uVar11 != 0);
          if ((uVar10 != 0) && (bVar3)) {
            if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
              FUN_14370c460(&PTR_vftable_1467f0638,param_1,1);
            }
            *(undefined1 *)((longlong)(int)param_1[1] + *param_1) = 0x2f;
            *(int *)(param_1 + 1) = (int)param_1[1] + 1;
          }
          iVar5 = (int)param_1[1] + uVar10;
          uVar6 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
          if (((int)uVar6 < iVar5) && ((int)uVar6 < iVar5)) {
            iVar2 = iVar5;
            if (iVar5 < (int)(uVar6 * 2)) {
              iVar2 = uVar6 * 2;
            }
            FUN_14370c310(&PTR_vftable_1467f0638,param_1,iVar2,1);
          }
          puVar7 = (undefined1 *)((longlong)(int)param_1[1] + *param_1);
          lVar8 = (longlong)(int)uVar10;
          if (0 < (int)uVar10) {
            lVar9 = (longlong)param_2 - (longlong)puVar7;
            do {
              *puVar7 = puVar7[lVar9];
              puVar7 = puVar7 + 1;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
          }
          *(int *)(param_1 + 1) = iVar5;
        }
        bVar3 = true;
      }
      plVar1 = local_28 + local_38;
      local_38 = local_38 + 1;
      param_2 = (char *)*plVar1;
    }
    if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(&PTR_vftable_1467f0638,param_1,1);
    }
    *(undefined1 *)((longlong)(int)param_1[1] + *param_1) = 0;
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  }
  else {
    FUN_1437455a0(param_1,param_2);
    if (param_3 != 0) {
      FUN_143746330(param_1,param_3,param_4,0);
    }
  }
  return param_1;
}



// FUNCTION 143746500 FUN_143746500 body=105 status=ok
// SIG undefined FUN_143746500(void)

undefined8 FUN_143746500(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_143746280(param_1,0x2f,0,0x7fffffff);
  iVar2 = FUN_143746280(param_1,0x5c,0,0x7fffffff);
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  if (-1 < iVar1) {
    FUN_143746da0(param_1,0,iVar1);
    return param_1;
  }
  FUN_143745f20(param_1);
  return param_1;
}



// FUNCTION 143746570 FUN_143746570 body=123 status=ok
// SIG undefined FUN_143746570(void)

undefined8 FUN_143746570(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_143746280(param_1,0x2f,0,0x7fffffff);
  iVar2 = FUN_143746280(param_1,0x5c,0,0x7fffffff);
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar1 = FUN_143746280(param_1,0x2e,iVar1 + 1,0x7fffffff);
  if (iVar1 != -1) {
    FUN_143745ed0(param_1,iVar1);
    return param_1;
  }
  FUN_143745f20(param_1);
  return param_1;
}



// FUNCTION 1437465f0 FUN_1437465f0 body=802 status=ok
// SIG undefined FUN_1437465f0(void)

undefined8 FUN_1437465f0(undefined8 param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 *local_1d8;
  uint local_1d0;
  uint local_1cc;
  undefined1 local_1c8 [128];
  undefined1 *local_148;
  int local_140;
  uint local_13c;
  undefined1 local_138 [128];
  undefined8 local_b8;
  undefined4 local_b0;
  uint local_ac;
  
  FUN_143745190(&local_b8,param_1);
  FUN_143746950(&local_b8,0x5c,0x2f,1);
  puVar10 = &DAT_145b6ae70;
  cVar2 = FUN_143746f20(&local_b8,&DAT_145b6ae70);
  if (cVar2 == '\0') {
    cVar2 = FUN_143746f20(&local_b8,&DAT_145b11fc0);
    puVar10 = &DAT_145af3922;
    if (cVar2 != '\0') {
      puVar10 = &DAT_145b11fc0;
    }
  }
  uVar5 = 0;
  local_13c = 0x80000010;
  local_148 = local_138;
  local_140 = 0;
  FUN_143746e20(&local_b8,0x2f,&local_148);
  local_1d8 = local_1c8;
  local_1d0 = 0;
  local_1cc = 0x80000010;
  if (0x10 < local_140) {
    iVar3 = local_140;
    if (local_140 < 0x20) {
      iVar3 = 0x20;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_1d8,iVar3,8);
  }
  uVar4 = uVar5;
  uVar7 = uVar5;
  uVar9 = uVar5;
  if (0 < local_140) {
    do {
      iVar3 = hkString::strCmp(&DAT_145af7968,*(undefined8 *)(local_148 + uVar4));
      puVar1 = local_148;
      iVar8 = (int)uVar9;
      if (iVar3 == 0) {
        if (iVar8 == 0) {
          if (local_1d0 == (local_1cc & 0x3fffffff)) {
            FUN_14370c460(&PTR_vftable_1467f0638,&local_1d8,8);
          }
          *(undefined8 *)(local_1d8 + (longlong)(int)local_1d0 * 8) =
               *(undefined8 *)(puVar1 + uVar4);
LAB_1437467e1:
          local_1d0 = local_1d0 + 1;
        }
        else {
          local_1d0 = local_1d0 - 1;
          uVar9 = (ulonglong)(iVar8 - 1);
        }
      }
      else {
        iVar3 = hkString::strCmp(&DAT_145af796c,*(undefined8 *)(local_148 + uVar4));
        if ((iVar3 != 0) &&
           (iVar3 = hkString::strCmp(*(undefined8 *)(local_148 + uVar4),&DAT_145af3922),
           puVar1 = local_148, iVar3 != 0)) {
          uVar9 = (ulonglong)(iVar8 + 1);
          if (local_1d0 == (local_1cc & 0x3fffffff)) {
            FUN_14370c460(&PTR_vftable_1467f0638,&local_1d8,8);
          }
          *(undefined8 *)(local_1d8 + (longlong)(int)local_1d0 * 8) =
               *(undefined8 *)(puVar1 + uVar4);
          goto LAB_1437467e1;
        }
      }
      uVar6 = (int)uVar7 + 1;
      uVar4 = uVar4 + 8;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < local_140);
  }
  FUN_1437455a0(param_1,puVar10);
  uVar4 = uVar5;
  if (0 < (int)local_1d0) {
    do {
      FUN_143746330(param_1,*(undefined8 *)(local_1d8 + uVar5),0,0);
      uVar6 = (int)uVar4 + 1;
      uVar5 = uVar5 + 8;
      uVar4 = (ulonglong)uVar6;
    } while ((int)uVar6 < (int)local_1d0);
  }
  local_1d0 = 0;
  if (-1 < (int)local_1cc) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_1d8,8,local_1cc & 0x3fffffff);
  }
  local_1d8 = (undefined1 *)0x0;
  local_1cc = 0x80000000;
  local_140 = 0;
  if (-1 < (int)local_13c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_148,8,local_13c & 0x3fffffff);
  }
  local_148 = (undefined1 *)0x0;
  local_b0 = 0;
  local_13c = 0x80000000;
  if (-1 < (int)local_ac) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_b8,1,local_ac & 0x3fffffff);
  }
  return param_1;
}



// FUNCTION 143746920 printf body=42 status=ok
// SIG int printf(char * _Format, ...)

int __cdecl hkStringBuf::printf(char *_Format,...)

{
  undefined8 in_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = in_R8;
  local_res20 = in_R9;
  FUN_143747170(_Format,in_RDX,&local_res18);
  return (int)_Format;
}



// FUNCTION 143746950 FUN_143746950 body=67 status=ok
// SIG undefined FUN_143746950(void)

undefined8 FUN_143746950(longlong *param_1,char param_2,undefined1 param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = 0;
  iVar2 = 0;
  if (0 < (int)param_1[1] + -1) {
    lVar3 = 0;
    do {
      if (*(char *)(*param_1 + lVar3) == param_2) {
        *(undefined1 *)(*param_1 + lVar3) = param_3;
        uVar1 = 1;
        if (param_4 == 0) {
          return 1;
        }
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 1;
    } while (iVar2 < (int)param_1[1] + -1);
  }
  return uVar1;
}



// FUNCTION 1437469a0 FUN_1437469a0 body=756 status=ok
// SIG undefined FUN_1437469a0(void)

ulonglong FUN_1437469a0(longlong *param_1,longlong param_2,undefined1 *param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong in_RAX;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  byte local_d8;
  longlong local_c8;
  int local_c0;
  uint local_bc;
  
  if (param_2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar6 = FUN_14370c910(param_2);
  iVar14 = (int)uVar6;
  if (iVar14 != 0) {
    puVar8 = &DAT_145af3922;
    if (param_3 != (undefined1 *)0x0) {
      puVar8 = param_3;
    }
    iVar2 = FUN_14370c910(puVar8);
    local_d8 = 0;
    if (iVar14 < iVar2) {
      FUN_143745190(&local_c8,param_1);
      FUN_143745f20(param_1);
      iVar10 = 0;
      iVar3 = FUN_143746180(&local_c8,param_2,0,0x7fffffff);
      if (-1 < iVar3) {
        local_d8 = 1;
        do {
          FUN_143745710(param_1,iVar10 + local_c8,iVar3 - iVar10);
          FUN_143745710(param_1,puVar8,iVar2);
          iVar10 = iVar3 + iVar14;
          if (param_4 == 0) break;
          iVar3 = FUN_143746180(&local_c8,param_2,iVar10,0x7fffffff);
        } while (-1 < iVar3);
      }
      FUN_143745710(param_1,iVar10 + local_c8,(local_c0 - iVar10) + -1);
      local_c0 = 0;
      if (-1 < (int)local_bc) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_c8,1,local_bc & 0x3fffffff);
      }
    }
    else {
      lVar1 = *param_1;
      iVar10 = 0;
      iVar13 = 0;
      iVar3 = FUN_143746180(param_1,param_2,0,0x7fffffff);
      if (iVar3 != -1) {
        lVar9 = 0;
        local_d8 = 1;
        lVar11 = 0;
        do {
          if (lVar11 < iVar3) {
            iVar4 = iVar3 - (int)lVar11;
            iVar10 = iVar10 + iVar4;
            iVar13 = iVar13 + iVar4;
            do {
              puVar12 = (undefined1 *)(lVar11 + lVar1);
              lVar11 = lVar11 + 1;
              *(undefined1 *)(lVar9 + lVar1) = *puVar12;
              lVar9 = lVar9 + 1;
            } while (lVar11 < iVar3);
          }
          lVar7 = 0;
          if (0 < (longlong)iVar2) {
            iVar13 = iVar13 + iVar2;
            do {
              puVar12 = puVar8 + lVar7;
              lVar7 = lVar7 + 1;
              *(undefined1 *)(lVar9 + lVar1) = *puVar12;
              lVar9 = lVar9 + 1;
            } while (lVar7 < iVar2);
          }
          iVar10 = iVar10 + iVar14;
          lVar11 = lVar11 + iVar14;
          if (param_4 == 0) break;
          iVar3 = FUN_143746180(param_1,param_2,iVar3 + iVar14,0x7fffffff);
        } while (iVar3 != -1);
      }
      if (iVar10 < (int)param_1[1] + -1) {
        puVar8 = (undefined1 *)(iVar13 + lVar1);
        puVar12 = (undefined1 *)(iVar10 + lVar1);
        do {
          iVar13 = iVar13 + 1;
          *puVar8 = *puVar12;
          puVar8 = puVar8 + 1;
          puVar12 = puVar12 + 1;
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)param_1[1] + -1);
      }
      iVar14 = iVar13 + 1;
      *(undefined1 *)(iVar13 + lVar1) = 0;
      uVar5 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
      if ((int)uVar5 < iVar14) {
        iVar3 = uVar5 * 2;
        iVar2 = iVar14;
        if (iVar14 < iVar3) {
          iVar2 = iVar3;
        }
        FUN_14370c310(&PTR_vftable_1467f0638,param_1,iVar2,1);
      }
      *(int *)(param_1 + 1) = iVar14;
      *(undefined1 *)((longlong)iVar13 + *param_1) = 0;
    }
    uVar6 = (ulonglong)local_d8;
  }
  return uVar6;
}



// FUNCTION 143746ca0 FUN_143746ca0 body=142 status=ok
// SIG undefined FUN_143746ca0(void)

longlong * FUN_143746ca0(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_3 < 0) {
    param_3 = FUN_14370c910(param_2);
  }
  iVar4 = param_3 + 1;
  uVar3 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  if ((int)uVar3 < iVar4) {
    iVar2 = uVar3 * 2;
    iVar1 = iVar4;
    if (iVar4 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_1,iVar1,1);
  }
  *(int *)(param_1 + 1) = iVar4;
  *(undefined1 *)((longlong)param_3 + *param_1) = 0;
  hkString::strNcmp(*param_1,param_2,param_3);
  return param_1;
}



// FUNCTION 143746d30 FUN_143746d30 body=111 status=ok
// SIG undefined FUN_143746d30(void)

undefined8
FUN_143746d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_143745f20();
  FUN_143745b90(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return param_1;
}



// FUNCTION 143746da0 FUN_143746da0 body=118 status=ok
// SIG undefined FUN_143746da0(void)

longlong * FUN_143746da0(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_2 != 0) {
    FUN_143732890(*param_1,(longlong)param_2 + *param_1,(longlong)param_3);
  }
  iVar4 = param_3 + 1;
  uVar3 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  if ((int)uVar3 < iVar4) {
    iVar2 = uVar3 * 2;
    iVar1 = iVar4;
    if (iVar4 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_1,iVar1,1);
  }
  *(int *)(param_1 + 1) = iVar4;
  *(undefined1 *)((longlong)param_3 + *param_1) = 0;
  return param_1;
}



// FUNCTION 143746e20 FUN_143746e20 body=254 status=ok
// SIG undefined FUN_143746e20(void)

undefined4 FUN_143746e20(longlong *param_1,undefined1 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  
  lVar1 = *param_1;
  if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(&PTR_vftable_1467f0638,param_3,8);
  }
  *(longlong *)(*param_3 + (longlong)(int)param_3[1] * 8) = lVar1;
  *(int *)(param_3 + 1) = (int)param_3[1] + 1;
  uVar2 = (undefined4)param_3[1];
  for (iVar3 = FUN_143746140(param_1,param_2,0,0x7fffffff); -1 < iVar3;
      iVar3 = FUN_143746140(param_1,param_2,iVar3 + 1,0x7fffffff)) {
    *(undefined1 *)((longlong)iVar3 + *param_1) = 0;
    lVar1 = *param_1;
    if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(&PTR_vftable_1467f0638,param_3,8);
    }
    *(longlong *)(*param_3 + (longlong)(int)param_3[1] * 8) = (iVar3 + 1) + lVar1;
    *(int *)(param_3 + 1) = (int)param_3[1] + 1;
    uVar2 = (undefined4)param_3[1];
  }
  return uVar2;
}



// FUNCTION 143746f20 FUN_143746f20 body=58 status=ok
// SIG undefined FUN_143746f20(void)

ulonglong FUN_143746f20(undefined8 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar2 = (char *)*param_1;
  iVar4 = 0;
  cVar1 = *pcVar2;
  for (pcVar3 = param_2; (cVar1 != '\0' && (*pcVar3 != '\0')); pcVar3 = pcVar3 + 1) {
    if (*pcVar2 != *pcVar3) {
      return (ulonglong)pcVar2 & 0xffffffffffffff00;
    }
    pcVar2 = pcVar2 + 1;
    iVar4 = iVar4 + 1;
    cVar1 = *pcVar2;
  }
  return CONCAT71((int7)(int3)((uint)iVar4 >> 8),param_2[iVar4] == '\0');
}



// FUNCTION 143746f60 FUN_143746f60 body=76 status=ok
// SIG undefined FUN_143746f60(void)

undefined8 FUN_143746f60(undefined8 *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  cVar1 = *pcVar3;
  while( true ) {
    if ((cVar1 == '\0') || (cVar1 = *param_2, cVar1 == '\0')) {
      return 1;
    }
    cVar2 = *pcVar3;
    if ((byte)(cVar2 + 0xbfU) < 0x1a) {
      cVar2 = cVar2 + ' ';
    }
    if ((byte)(cVar1 + 0xbfU) < 0x1a) {
      cVar1 = cVar1 + ' ';
    }
    if (cVar2 != cVar1) break;
    pcVar3 = pcVar3 + 1;
    param_2 = param_2 + 1;
    cVar1 = *pcVar3;
  }
  return 0;
}



// FUNCTION 143746fb0 FUN_143746fb0 body=93 status=ok
// SIG undefined FUN_143746fb0(void)

void FUN_143746fb0(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  byte *pbVar3;
  ulonglong uVar4;
  
  uVar1 = 0;
  iVar2 = (int)param_1[1] + -1;
  uVar4 = uVar1;
  if (0 < iVar2) {
    pbVar3 = (byte *)((longlong)(int)param_1[1] + *param_1 + -2);
    do {
      if ((0x20 < *pbVar3) || ((0x100002600U >> ((longlong)(char)*pbVar3 & 0x3fU) & 1) == 0)) break;
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar1 = uVar1 + 1;
      pbVar3 = pbVar3 + -1;
    } while ((longlong)uVar1 < (longlong)iVar2);
  }
  FUN_143745e50(param_1,uVar4);
  return;
}



// FUNCTION 143747010 FUN_143747010 body=147 status=ok
// SIG undefined FUN_143747010(void)

undefined4 * FUN_143747010(longlong *param_1,undefined4 *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar1 = (int)param_1[1];
  pbVar3 = (byte *)(*param_1 + -1 + (longlong)iVar1);
  for (iVar2 = 0;
      ((*pbVar3 < 0x21 && ((0x100002600U >> ((ulonglong)*pbVar3 & 0x3f) & 1) != 0)) &&
      (iVar2 < iVar1 + -1)); iVar2 = iVar2 + 1) {
    pbVar3 = pbVar3 + -1;
  }
  if ((iVar2 < iVar1 + -2) && (*(char *)((longlong)((iVar1 - iVar2) + -2) + *param_1) == param_3)) {
    FUN_143745e50(param_1,iVar2 + 1);
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 1437470b0 FUN_1437470b0 body=51 status=ok
// SIG undefined FUN_1437470b0(void)

void FUN_1437470b0(undefined8 *param_1)

{
  int iVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)*param_1;
  for (iVar1 = 0;
      ((*pbVar2 < 0x21 && ((0x100002600U >> ((ulonglong)*pbVar2 & 0x3f) & 1) != 0)) &&
      (iVar1 < *(int *)(param_1 + 1) + -1)); iVar1 = iVar1 + 1) {
    pbVar2 = pbVar2 + 1;
  }
  FUN_143745ed0();
  return;
}



// FUNCTION 1437470f0 FUN_1437470f0 body=118 status=ok
// SIG undefined FUN_1437470f0(void)

undefined4 * FUN_1437470f0(undefined8 *param_1,undefined4 *param_2,byte param_3)

{
  int iVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)*param_1;
  for (iVar1 = 0;
      ((*pbVar2 < 0x21 && ((0x100002600U >> ((ulonglong)*pbVar2 & 0x3f) & 1) != 0)) &&
      (iVar1 < *(int *)(param_1 + 1) + -1)); iVar1 = iVar1 + 1) {
    pbVar2 = pbVar2 + 1;
  }
  if ((iVar1 < *(int *)(param_1 + 1) + -2) && (((byte *)*param_1)[iVar1] == param_3)) {
    FUN_143745ed0(param_1,iVar1 + 1);
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 143747170 FUN_143747170 body=275 status=ok
// SIG undefined FUN_143747170(void)

longlong * FUN_143747170(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  
  do {
    uVar3 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
    iVar2 = FUN_14370ca10(*param_1,uVar3,uVar3 - 1,param_2,param_3);
    uVar5 = (ulonglong)iVar2;
    if (iVar2 < 0) {
      uVar1 = 0xff;
      if (0xff < uVar3 * 2) {
        uVar1 = uVar3 * 2;
      }
      uVar5 = (ulonglong)uVar1;
      uVar3 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
      iVar4 = uVar1 + 1;
      if ((int)uVar3 < iVar4) {
        iVar2 = uVar3 * 2;
        iVar6 = iVar4;
        if (iVar4 < iVar2) {
          iVar6 = iVar2;
        }
        goto LAB_1437471e5;
      }
    }
    else {
      iVar4 = iVar2 + 1;
      if (iVar2 < (int)uVar3) {
        uVar3 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
        if ((int)uVar3 < iVar4) {
          iVar6 = uVar3 * 2;
          iVar2 = iVar4;
          if (iVar4 < iVar6) {
            iVar2 = iVar6;
          }
          FUN_14370c310(&PTR_vftable_1467f0638,param_1,iVar2,1);
        }
        *(int *)(param_1 + 1) = iVar4;
        *(undefined1 *)(uVar5 + *param_1) = 0;
        return param_1;
      }
      uVar3 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
      if ((int)uVar3 < iVar4) {
        iVar2 = uVar3 * 2;
        iVar6 = iVar4;
        if (iVar4 < iVar2) {
          iVar6 = iVar2;
        }
LAB_1437471e5:
        FUN_14370c310(&PTR_vftable_1467f0638,param_1,iVar6,1);
      }
    }
    *(int *)(param_1 + 1) = iVar4;
    *(undefined1 *)(uVar5 + *param_1) = 0;
  } while( true );
}



// FUNCTION 143747290 FUN_143747290 body=49 status=ok
// SIG undefined FUN_143747290(void)

undefined8 * FUN_143747290(undefined8 *param_1,undefined8 param_2)

{
  FUN_1437472d0();
  param_1[4] = param_2;
  *param_1 = _anon_119173E0::WindowsDynamicLibrary::vftable;
  return param_1;
}



// FUNCTION 1437472d0 FUN_1437472d0 body=33 status=ok
// SIG undefined FUN_1437472d0(void)

undefined8 * FUN_1437472d0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkDynamicLibrary::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *(undefined1 *)(param_1 + 3) = 1;
  return param_1;
}



// FUNCTION 143747300 FUN_143747300 body=48 status=ok
// SIG undefined FUN_143747300(void)

void FUN_143747300(undefined8 *param_1)

{
  *param_1 = _anon_119173E0::WindowsDynamicLibrary::vftable;
  if (*(char *)(param_1 + 3) != '\0') {
    FreeLibrary((HMODULE)param_1[4]);
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143747330 FUN_143747330 body=139 status=ok
// SIG undefined FUN_143747330(void)

longlong FUN_143747330(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143747300();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x28;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
    }
  }
  return param_1;
}



// FUNCTION 1437473c0 FUN_1437473c0 body=11 status=ok
// SIG undefined FUN_1437473c0(void)

void FUN_1437473c0(longlong param_1,LPCSTR param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001437473c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetProcAddress(*(HMODULE *)(param_1 + 0x20),param_2);
  return;
}



// FUNCTION 1437473d0 FUN_1437473d0 body=176 status=ok
// SIG undefined FUN_1437473d0(void)

undefined8 * FUN_1437473d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  HMODULE pHVar2;
  LPVOID pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_218;
  undefined4 local_210;
  uint local_20c;
  
  puVar1 = (undefined8 *)FUN_143781a00(&local_218);
  pHVar2 = LoadLibraryW((LPCWSTR)*puVar1);
  uVar5 = 0;
  local_210 = 0;
  if (-1 < (int)local_20c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_218,2,local_20c & 0x3fffffff);
  }
  if (pHVar2 != (HMODULE)0x0) {
    pvVar3 = TlsGetValue(DAT_146b7bf70);
    if (pvVar3 == (LPVOID)0x0) {
      pvVar3 = DAT_146b7bf68;
    }
    lVar4 = (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar3 + 0x58),0x28);
    if (lVar4 != 0) {
      uVar5 = FUN_143747290(lVar4,pHVar2);
    }
  }
  *param_1 = uVar5;
  return param_1;
}



// FUNCTION 143747480 FUN_143747480 body=86 status=ok
// SIG undefined FUN_143747480(void)

undefined8 * FUN_143747480(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  *param_1 = hkIo::Detail::StreamWriteBufferImpl::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = param_2;
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 1437474e0 FDelayStereo body=29 status=ok
// SIG undefined FDelayStereo(void)

undefined8 * Audio::FDelayStereo::FDelayStereo(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 5) = 1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 143747500 PostLoad body=39 status=ok
// SIG undefined PostLoad(void)

void UParticleModuleSubUV::PostLoad(longlong param_1)

{
  FUN_143747e50();
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_14370c150();
    return;
  }
  return;
}



// FUNCTION 143747530 FUN_143747530 body=139 status=ok
// SIG undefined FUN_143747530(void)

longlong FUN_143747530(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x30;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
    }
  }
  return param_1;
}



// FUNCTION 1437475c0 FUN_1437475c0 body=212 status=ok
// SIG undefined FUN_1437475c0(void)

longlong FUN_1437475c0(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x2c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x20),1,*(uint *)(param_1 + 0x2c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      sVar3 = 0x38;
      if (*(short *)(param_1 + 0x10) != -1) {
        sVar3 = *(short *)(param_1 + 0x10);
      }
      (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar2 + 0x58),param_1,sVar3);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1437476a0 FUN_1437476a0 body=75 status=ok
// SIG undefined FUN_1437476a0(void)

void FUN_1437476a0(longlong param_1,longlong *param_2)

{
  param_2[4] = 0;
  *(longlong **)(param_1 + 0x28) = param_2;
  param_2[2] = **(longlong **)(param_1 + 0x18);
  *param_2 = (longlong)(int)(*(longlong **)(param_1 + 0x18))[1] + **(longlong **)(param_1 + 0x18);
  *(uint *)(*(longlong *)(param_1 + 0x18) + 8) =
       *(uint *)(*(longlong *)(param_1 + 0x18) + 0xc) & 0x3fffffff;
  param_2[1] = (ulonglong)(*(uint *)((longlong)*(longlong **)(param_1 + 0x18) + 0xc) & 0x3fffffff) +
               **(longlong **)(param_1 + 0x18);
  return;
}



// FUNCTION 1437476f0 FUN_1437476f0 body=195 status=ok
// SIG undefined FUN_1437476f0(void)

void FUN_1437476f0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  pcVar5 = (char *)(**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))
                             (*(longlong **)(param_1 + 0x18),local_res8);
  cVar1 = *pcVar5;
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\0') {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))();
  }
  lVar6 = (longlong)iVar3;
  if ((longlong)iVar3 < 1) {
    lVar6 = 0;
  }
  param_2[4] = lVar6;
  uVar4 = *(uint *)(param_1 + 0x2c) & 0x3fffffff;
  uVar8 = 0x400;
  if (0x400 < uVar4) {
    uVar8 = uVar4;
  }
  uVar7 = FUN_143703a50();
  uVar4 = *(uint *)(param_1 + 0x2c) & 0x3fffffff;
  if (uVar4 < uVar8) {
    uVar4 = uVar4 * 2;
    uVar2 = uVar8;
    if (uVar8 < uVar4) {
      uVar2 = uVar4;
    }
    FUN_14370c310(uVar7,param_1 + 0x20,uVar2,1);
  }
  *(uint *)(param_1 + 0x28) = uVar8;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  *param_2 = uVar7;
  param_2[2] = uVar7;
  param_2[1] = (longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x20);
  return;
}



// FUNCTION 1437477c0 FUN_1437477c0 body=39 status=ok
// SIG undefined FUN_1437477c0(void)

void FUN_1437477c0(longlong param_1,int *param_2)

{
  (*(int **)(param_1 + 0x18))[2] = *param_2 - **(int **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  return;
}



// FUNCTION 1437477f0 _detachFrom body=42 status=ok
// SIG undefined _detachFrom(void)

void hkIo::Detail::StreamWriteBufferImpl::_detachFrom(longlong *param_1,undefined8 *param_2)

{
  (**(code **)(*param_1 + 0x40))();
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  return;
}



// FUNCTION 143747820 FUN_143747820 body=211 status=ok
// SIG undefined FUN_143747820(void)

longlong FUN_143747820(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  (*(int **)(param_1 + 0x18))[2] = (int)*param_2 - **(int **)(param_1 + 0x18);
  plVar1 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar4 = plVar1[1];
  iVar6 = param_3 + (int)lVar4;
  uVar5 = *(uint *)((longlong)plVar1 + 0xc) & 0x3fffffff;
  if ((int)uVar5 < iVar6) {
    iVar3 = uVar5 * 2;
    if (iVar6 < iVar3) {
      iVar6 = iVar3;
    }
    FUN_14370c310(*(undefined8 *)(param_1 + 0x20),plVar1,iVar6,1);
  }
  *(int *)(plVar1 + 1) = (int)plVar1[1] + param_3;
  lVar2 = *plVar1;
  *(longlong **)(param_1 + 0x28) = param_2;
  param_2[2] = **(longlong **)(param_1 + 0x18);
  *param_2 = (longlong)(int)(*(longlong **)(param_1 + 0x18))[1] + **(longlong **)(param_1 + 0x18);
  *(uint *)(*(longlong *)(param_1 + 0x18) + 8) =
       *(uint *)(*(longlong *)(param_1 + 0x18) + 0xc) & 0x3fffffff;
  param_2[1] = (ulonglong)(*(uint *)((longlong)*(longlong **)(param_1 + 0x18) + 0xc) & 0x3fffffff) +
               **(longlong **)(param_1 + 0x18);
  return (int)lVar4 + lVar2;
}



// FUNCTION 143747900 FUN_143747900 body=164 status=ok
// SIG undefined FUN_143747900(void)

longlong FUN_143747900(longlong *param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  
  (**(code **)(*param_1 + 0x40))();
  iVar5 = (int)param_1[5];
  if ((int)param_1[5] < (int)param_3) {
    iVar5 = (int)param_3;
  }
  uVar4 = FUN_143703a50();
  uVar3 = *(uint *)((longlong)param_1 + 0x2c) & 0x3fffffff;
  if ((int)uVar3 < iVar5) {
    iVar2 = uVar3 * 2;
    iVar1 = iVar5;
    if (iVar5 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_14370c310(uVar4,param_1 + 4,iVar1,1);
  }
  *(int *)(param_1 + 5) = iVar5;
  param_2[2] = param_1[4];
  *param_2 = param_1[4] + param_3;
  param_2[1] = (longlong)(int)param_1[5] + param_1[4];
  return param_1[4];
}



// FUNCTION 1437479b0 FUN_1437479b0 body=73 status=ok
// SIG undefined FUN_1437479b0(void)

void FUN_1437479b0(longlong param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2 - *(int *)(param_1 + 0x20);
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
            (*(longlong **)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),iVar1);
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (longlong)iVar1;
  *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x20);
  return;
}



// FUNCTION 143747a00 FUN_143747a00 body=255 status=ok
// SIG undefined FUN_143747a00(void)

undefined8 FUN_143747a00(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  (*(int **)(param_1 + 0x18))[2] = (int)*param_2 - **(int **)(param_1 + 0x18);
  plVar1 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = 0;
  iVar7 = (int)param_4;
  iVar6 = (int)plVar1[1] + iVar7;
  uVar3 = *(uint *)((longlong)plVar1 + 0xc) & 0x3fffffff;
  if (((int)uVar3 < iVar6) && ((int)uVar3 < iVar6)) {
    iVar2 = iVar6;
    if (iVar6 < (int)(uVar3 * 2)) {
      iVar2 = uVar3 * 2;
    }
    FUN_14370c310(*(undefined8 *)(param_1 + 0x20),plVar1,iVar2,1);
  }
  puVar4 = (undefined1 *)((longlong)(int)plVar1[1] + *plVar1);
  lVar5 = (longlong)iVar7;
  if (0 < iVar7) {
    param_3 = param_3 - (longlong)puVar4;
    do {
      *puVar4 = puVar4[param_3];
      puVar4 = puVar4 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  *(int *)(plVar1 + 1) = iVar6;
  *(longlong **)(param_1 + 0x28) = param_2;
  param_2[2] = **(longlong **)(param_1 + 0x18);
  *param_2 = (longlong)(int)(*(longlong **)(param_1 + 0x18))[1] + **(longlong **)(param_1 + 0x18);
  *(uint *)(*(longlong *)(param_1 + 0x18) + 8) =
       *(uint *)(*(longlong *)(param_1 + 0x18) + 0xc) & 0x3fffffff;
  param_2[1] = (ulonglong)(*(uint *)((longlong)*(longlong **)(param_1 + 0x18) + 0xc) & 0x3fffffff) +
               **(longlong **)(param_1 + 0x18);
  return param_4;
}



// FUNCTION 143747b00 FUN_143747b00 body=113 status=ok
// SIG undefined FUN_143747b00(void)

ulonglong FUN_143747b00(longlong *param_1,longlong *param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x40))();
  if ((longlong)(param_4 * 2) < (longlong)(int)param_1[5]) {
    FGenericPlatformString::Memcpy(*param_2,param_3,param_4);
    *param_2 = *param_2 + param_4;
  }
  else {
    iVar1 = (**(code **)(*(longlong *)param_1[3] + 0x20))
                      ((longlong *)param_1[3],param_3,param_4 & 0xffffffff);
    param_4 = (ulonglong)iVar1;
    param_2[4] = param_2[4] + param_4;
  }
  return param_4;
}



// FUNCTION 143747b80 _writeRawAt body=37 status=ok
// SIG undefined _writeRawAt(void)

undefined8
hkIo::Detail::ArrayWriteBufferImpl::_writeRawAt
          (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
          undefined8 param_5)

{
  FGenericPlatformString::Memcpy(**(longlong **)(param_1 + 0x18) + param_3,param_4,param_5);
  return param_5;
}



// FUNCTION 143747bb0 FUN_143747bb0 body=251 status=ok
// SIG undefined FUN_143747bb0(void)

longlong FUN_143747bb0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                      undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined1 local_48 [64];
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))();
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))
              (*(longlong **)(param_1 + 0x18),local_res8,param_3,0);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
                      (*(longlong **)(param_1 + 0x18),param_4,param_5);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))
              (*(longlong **)(param_1 + 0x18),local_res8,uVar1,0);
    return (longlong)iVar2;
  }
  if (1 < DAT_146b82e98) {
    FUN_14373a730(local_48,&DAT_146b82e90,2);
    lVar3 = FUN_14373bbd0(local_48,"_writeRawAt failed - stream does not support seeking",
                          &DAT_145b909f0,0);
    *(char **)(lVar3 + 0x20) = "Serialize\\Detail\\hkWriteBuffer.cpp";
    *(undefined8 *)(lVar3 + 0x28) = 0x55;
    FUN_14373a950(local_48);
  }
  return -1;
}



// FUNCTION 143747cb0 FUN_143747cb0 body=152 status=ok
// SIG undefined FUN_143747cb0(void)

void FUN_143747cb0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_143747e50();
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0) {
    lVar2 = param_2[1];
    lVar3 = param_2[2];
    *param_1 = lVar2;
    param_1[1] = lVar3 + lVar2;
    param_1[2] = lVar2;
    param_1[3] = 1;
    param_1[4] = 0;
    param_1[7] = param_2[3];
  }
  else {
    FUN_14370c030(plVar1);
    if (param_1[6] != 0) {
      FUN_14370c150();
    }
    param_1[6] = (longlong)plVar1;
    (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
    param_1[7] = 0;
  }
  param_1[3] = 1;
  return;
}



// FUNCTION 143747d50 FUN_143747d50 body=127 status=ok
// SIG undefined FUN_143747d50(void)

undefined8 * FUN_143747d50(undefined8 param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar1 + 0x58),0x30);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = hkIo::Detail::ArrayWriteBufferImpl::vftable;
    *(undefined4 *)(puVar2 + 2) = 0x1ffff;
    puVar2[3] = param_1;
    puVar2[4] = param_2;
    puVar2[5] = 0;
    *(undefined2 *)((longlong)puVar2 + 0x12) = 0;
    return puVar2;
  }
  uRam0000000000000012 = 0;
  return (undefined8 *)0x0;
}



// FUNCTION 143747dd0 FUN_143747dd0 body=116 status=ok
// SIG undefined FUN_143747dd0(void)

longlong FUN_143747dd0(longlong param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x38);
  if (lVar2 != 0) {
    lVar2 = FUN_143747480(lVar2,param_1);
    *(undefined2 *)(lVar2 + 0x12) = 0;
    return lVar2;
  }
  uRam0000000000000012 = 0;
  return 0;
}



// FUNCTION 143747e50 FUN_143747e50 body=95 status=ok
// SIG undefined FUN_143747e50(void)

void FUN_143747e50(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[6];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
    if (param_1[6] != 0) {
      FUN_14370c150();
    }
    param_1[6] = 0;
    param_1[3] = 0;
    return;
  }
  if ((param_1[3] != 0) && ((longlong *)param_1[7] != (longlong *)0x0)) {
    *(longlong *)param_1[7] = *param_1 - param_1[2];
  }
  param_1[3] = 0;
  return;
}



// FUNCTION 143747eb0 implExpandBy body=25 status=ok
// SIG undefined implExpandBy(void)

undefined8 hkIo::WriteBuffer::implExpandBy(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143747ec2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,param_1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 143747ed0 implWriteRaw body=90 status=ok
// SIG undefined implWriteRaw(void)

longlong hkIo::WriteBuffer::implWriteRaw(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)param_1[6];
  lVar2 = param_1[1] - *param_1;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143747f06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,param_1,param_2,param_3);
    return lVar2;
  }
  FGenericPlatformString::Memcpy(*param_1,param_2,lVar2);
  *param_1 = param_1[1];
  return lVar2;
}



// FUNCTION 143747f30 implWriteRawAt body=80 status=ok
// SIG undefined implWriteRawAt(void)

longlong hkIo::WriteBuffer::implWriteRawAt
                   (longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)param_1[6];
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,param_1,param_2,param_3,param_4);
    return lVar2;
  }
  lVar2 = param_1[1] - (*param_1 + param_2);
  FGenericPlatformString::Memcpy(*param_1 + param_2,param_3,lVar2);
  return lVar2;
}



// FUNCTION 143747f80 FUN_143747f80 body=110 status=ok
// SIG undefined FUN_143747f80(void)

void FUN_143747f80(ulonglong *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  for (; 0 < param_2; param_2 = param_2 - lVar2) {
    uVar1 = *param_1;
    lVar2 = 0x1000;
    if (param_2 < 0x1000) {
      lVar2 = param_2;
    }
    if (param_1[1] < uVar1 + lVar2) {
      uVar1 = hkIo::WriteBuffer::implExpandBy(param_1,lVar2);
    }
    else {
      *param_1 = uVar1 + lVar2;
    }
    FUN_14370c720(uVar1,0,lVar2);
  }
  return;
}



// FUNCTION 143747ff0 FUN_143747ff0 body=86 status=ok
// SIG undefined FUN_143747ff0(void)

undefined8 *
FUN_143747ff0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8,
             undefined8 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined4 param_13,undefined4 param_14)

{
  *(undefined4 *)((longlong)param_1 + 0x14) = param_6;
  param_1[3] = param_7;
  *(undefined4 *)(param_1 + 4) = param_8;
  param_1[5] = param_9;
  *(undefined4 *)(param_1 + 6) = param_10;
  param_1[7] = param_11;
  param_1[8] = param_12;
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined4 *)(param_1 + 2) = param_4;
  *(undefined4 *)(param_1 + 9) = param_13;
  *(undefined4 *)((longlong)param_1 + 0x4c) = param_14;
  return param_1;
}



// FUNCTION 143748050 FUN_143748050 body=207 status=ok
// SIG undefined FUN_143748050(void)

undefined4 *
FUN_143748050(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  if ((char)param_3[1] == '\x01') {
    plVar4 = param_3 + 2;
  }
  else if ((char)param_3[1] == '\x02') {
    plVar4 = (longlong *)param_3[2];
  }
  else {
    plVar4 = (longlong *)0x0;
  }
  lVar1 = *param_3;
  uVar2 = 0;
  uVar3 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_1437152f0(lVar1);
    uVar3 = FUN_1437151a0(lVar1);
    if ((uVar3 & 1) != 0) {
      FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
    }
  }
  *param_5 = (longlong)plVar4;
  param_5[1] = lVar1;
  *(uint *)(param_5 + 2) = (uint)(lVar1 != 0);
  *(undefined4 *)((longlong)param_5 + 0x14) = uVar2;
  if ((*(byte *)(param_5 + 3) & 1) != 0) {
    FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
  }
  param_5[3] = uVar3;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143748120 FUN_143748120 body=170 status=ok
// SIG undefined FUN_143748120(void)

undefined8
FUN_143748120(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             int param_5)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  if (*(char *)(param_2 + 1) != '\0') {
    return 2;
  }
  if (param_5 == 0) {
    return 0;
  }
  if (param_5 == 1) {
    *param_2 = param_4;
    local_18 = 0;
    local_28 = 0;
    uStack_20 = 0;
    lVar1 = FUN_1437483e0(param_2,&local_28);
    if ((local_18 & 1) != 0) {
      FUN_143733a60(local_18 & 0xfffffffffffffffe);
    }
    if (lVar1 != 0) {
      pcVar2 = (code *)FUN_14374a2b0(param_4);
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(lVar1,param_4,1);
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 1437481d0 setNumElements body=82 status=ok
// SIG undefined setNumElements(void)

undefined4 *
hkReflect::Any::ArrayImpl::setNumElements
          (undefined8 param_1,undefined4 *param_2,longlong param_3,undefined8 param_4,int param_5)

{
  if (param_5 == 0) {
    FUN_1437484d0(param_3);
    *param_2 = 0;
    return param_2;
  }
  if ((param_5 == 1) && (*(char *)(param_3 + 8) != '\0')) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 143748230 FUN_143748230 body=236 status=ok
// SIG undefined FUN_143748230(void)

undefined4 *
FUN_143748230(undefined8 param_1,undefined4 *param_2,longlong param_3,undefined8 param_4,int param_5
             ,int param_6,undefined8 *param_7)

{
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  if ((param_5 == 0) && (param_6 < 2)) {
    if ((*(int *)(param_7 + 2) < 2) && ((param_6 != 1 || (*(char *)(param_3 + 8) != '\0')))) {
      if (*(int *)(param_7 + 2) == 1) {
        local_28 = *param_7;
        local_18 = (ulonglong)(((uint)*(byte *)(param_7 + 3) ^ *(uint *)(param_7 + 3)) & 1) ^
                   param_7[3];
        local_20 = param_7[1];
        if ((local_18 & 1) != 0) {
          FUN_1437329e0(local_18 & 0xfffffffffffffffe);
        }
        FUN_143748760(param_3,&local_28);
        if ((local_18 & 1) != 0) {
          FUN_143733a60(local_18 & 0xfffffffffffffffe);
          *param_2 = 0;
          return param_2;
        }
      }
      else if (param_6 == 1) {
        FUN_1437484d0(param_3);
      }
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 143748320 FUN_143748320 body=69 status=ok
// SIG undefined FUN_143748320(void)

undefined4 *
FUN_143748320(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6)

{
  if (param_5 != 0) {
    FUN_1437488b0(param_3,param_5,0);
    *param_3 = param_6;
    *(undefined1 *)(param_3 + 1) = 2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 143748370 FUN_143748370 body=84 status=ok
// SIG undefined FUN_143748370(void)

void FUN_143748370(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_143748740(param_2);
  if (cVar2 == '\0') {
    return;
  }
  uVar1 = *param_2;
  if (*(char *)(param_2 + 1) != '\x01') {
    if (*(char *)(param_2 + 1) != '\x02') {
      FUN_143749c70(0,uVar1);
      return;
    }
    FUN_143749c70(param_2[2],uVar1);
    return;
  }
  FUN_143749c70(param_2 + 2,uVar1);
  return;
}



// FUNCTION 1437483d0 thunk_FUN_1437483e0 body=5 status=ok
// SIG undefined thunk_FUN_1437483e0(void)

undefined8 * thunk_FUN_1437483e0(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *apuStack_38 [2];
  ulonglong uStack_28;
  undefined1 auStack_20 [16];
  ulonglong uStack_10;
  
  cVar1 = FUN_143748490(param_1,*param_1);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 1) = 1;
    param_1[2] = 0;
    param_1[3] = 0;
    return param_1 + 2;
  }
  if (*param_2 == 0) {
    plVar2 = (longlong *)FUN_1437490a0(auStack_20,*param_1);
    puVar3 = (undefined8 *)*plVar2;
    uStack_28 = uStack_10;
  }
  else {
    FUN_143749110(apuStack_38,param_2,param_2[1]);
    puVar3 = apuStack_38[0];
  }
  if ((uStack_28 & 1) != 0) {
    FUN_143733a60(uStack_28 & 0xfffffffffffffffe);
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1437488b0(param_1,puVar3,1);
    *(undefined1 *)(param_1 + 1) = 2;
  }
  return puVar3;
}



// FUNCTION 1437483e0 FUN_1437483e0 body=163 status=ok
// SIG undefined FUN_1437483e0(void)

undefined8 * FUN_1437483e0(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *local_38 [2];
  ulonglong local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  cVar1 = FUN_143748490(param_1,*param_1);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 1) = 1;
    param_1[2] = 0;
    param_1[3] = 0;
    return param_1 + 2;
  }
  if (*param_2 == 0) {
    plVar2 = (longlong *)FUN_1437490a0(local_20,*param_1);
    puVar3 = (undefined8 *)*plVar2;
    local_28 = local_10;
  }
  else {
    FUN_143749110(local_38,param_2,param_2[1]);
    puVar3 = local_38[0];
  }
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1437488b0(param_1,puVar3,1);
    *(undefined1 *)(param_1 + 1) = 2;
  }
  return puVar3;
}



// FUNCTION 143748490 FUN_143748490 body=63 status=ok
// SIG undefined FUN_143748490(void)

undefined4 FUN_143748490(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_1437152f0(param_2);
  if (iVar2 < 0x11) {
    iVar2 = FUN_143714d40(param_2);
    if (iVar2 < 0x11) {
      cVar1 = FUN_14374a480(param_2);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1437484d0 FUN_1437484d0 body=72 status=ok
// SIG undefined FUN_1437484d0(void)

void FUN_1437484d0(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  if (*(char *)(param_1 + 8) != '\0') {
    uVar1 = FUN_1437488d0(param_1,local_28);
    FUN_1437428e0(uVar1,1);
    if ((local_18 & 1) != 0) {
      FUN_143733a60(local_18 & 0xfffffffffffffffe);
    }
  }
  FUN_143748670(param_1);
  return;
}



// FUNCTION 143748520 FUN_143748520 body=328 status=ok
// SIG undefined FUN_143748520(void)

void FUN_143748520(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong local_res8;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  FUN_1437140a0(&local_res8,*param_1);
  if (1 < local_res8) {
    *param_1 = *(longlong *)(*param_1 + 8);
  }
  local_28 = param_2[2];
  local_38 = *param_2;
  local_30 = param_2[1];
  if ((local_28 & 1) != 0) {
    FUN_1437329e0(local_28 & 0xfffffffffffffffe);
  }
  FUN_1437140a0(&local_res8,local_30);
  uVar3 = local_28;
  if ((1 < local_res8) &&
     (puVar2 = (uint *)FUN_143715390(local_30,&local_res8), uVar4 = local_38, local_38 = uVar4,
     uVar3 = local_28, (*puVar2 >> 3 & 1) == 0)) {
    lVar1 = *(longlong *)(local_30 + 8);
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_1437151a0(lVar1);
    }
    if ((uVar3 & 1) != 0) {
      FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
    }
    local_38 = uVar4;
    local_30 = lVar1;
    if ((local_28 & 1) != 0) {
      FUN_143733a60(local_28 & 0xfffffffffffffffe);
    }
  }
  local_28 = uVar3;
  uVar4 = FUN_1437488d0(param_1,local_20);
  FUN_143749990(uVar4,&local_38);
  if ((local_10 & 1) != 0) {
    FUN_143733a60(local_10 & 0xfffffffffffffffe);
  }
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 143748670 FUN_143748670 body=71 status=ok
// SIG undefined FUN_143748670(void)

void FUN_143748670(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  cVar1 = FUN_143748740();
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 1) == '\x01') {
      puVar2 = param_1 + 2;
    }
    else if (*(char *)(param_1 + 1) == '\x02') {
      puVar2 = (undefined8 *)param_1[2];
    }
    else {
      puVar2 = (undefined8 *)0x0;
    }
    FUN_143749c70(puVar2,*param_1);
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 1437486c0 FUN_1437486c0 body=125 status=ok
// SIG undefined FUN_1437486c0(void)

void FUN_1437486c0(longlong *param_1)

{
  undefined8 uVar1;
  ulonglong local_res8;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  FUN_1437140a0(&local_res8,*param_1);
  if (1 < local_res8) {
    *param_1 = *(longlong *)(*param_1 + 8);
  }
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  uVar1 = thunk_FUN_1437483e0(param_1,&local_28);
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  FUN_143749d80(uVar1,*param_1,1);
  return;
}



// FUNCTION 143748740 FUN_143748740 body=19 status=ok
// SIG undefined FUN_143748740(void)

undefined1 FUN_143748740(longlong param_1)

{
  if ((*(char *)(param_1 + 8) == '\x02') && (*(longlong *)(param_1 + 0x18) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143748760 FUN_143748760 body=330 status=ok
// SIG undefined FUN_143748760(void)

void FUN_143748760(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if ((longlong *)*param_2 == (longlong *)0x0) {
    FUN_1437484d0();
    return;
  }
  cVar2 = (char)param_1[1];
  if (cVar2 == '\0') {
    *param_1 = param_2[1];
    thunk_FUN_1437483e0(param_1,param_2);
    FUN_143748520(param_1,param_2);
    return;
  }
  plVar6 = (longlong *)0x0;
  if (cVar2 == '\x01') {
    plVar5 = param_1 + 2;
  }
  else {
    plVar5 = plVar6;
    if (cVar2 == '\x02') {
      plVar5 = (longlong *)param_1[2];
    }
  }
  if ((longlong *)*param_2 == plVar5) {
    return;
  }
  lVar1 = *param_1;
  iVar3 = FUN_1437152f0(param_2[1]);
  iVar4 = FUN_1437152f0(lVar1);
  if (iVar4 == iVar3) {
    lVar1 = *param_1;
    iVar3 = FUN_143714d40(param_2[1]);
    iVar4 = FUN_143714d40(lVar1);
    if (((iVar3 <= iVar4) && (cVar2 = FUN_14374a480(param_2[1]), cVar2 != '\0')) &&
       (cVar2 = FUN_14374a480(*param_1), cVar2 != '\0')) {
      if ((char)param_1[1] == '\x01') {
        plVar6 = param_1 + 2;
      }
      else if ((char)param_1[1] == '\x02') {
        plVar6 = (longlong *)param_1[2];
      }
      FUN_143749de0(plVar6,*param_1,1);
      *param_1 = param_2[1];
      goto LAB_143748884;
    }
  }
  FUN_1437484d0(param_1);
  *param_1 = param_2[1];
  thunk_FUN_1437483e0(param_1,param_2);
LAB_143748884:
  FUN_143748520(param_1,param_2);
  return;
}



// FUNCTION 1437488b0 FUN_1437488b0 body=17 status=ok
// SIG undefined FUN_1437488b0(void)

void FUN_1437488b0(longlong param_1,undefined8 param_2,byte param_3)

{
  *(ulonglong *)(param_1 + 0x18) = (ulonglong)param_3;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined1 *)(param_1 + 8) = 2;
  return;
}



// FUNCTION 1437488d0 FUN_1437488d0 body=88 status=ok
// SIG undefined FUN_1437488d0(void)

longlong * FUN_1437488d0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)0x0;
  if ((char)param_1[1] == '\x01') {
    plVar3 = param_1 + 2;
  }
  else {
    plVar3 = plVar2;
    if ((char)param_1[1] == '\x02') {
      plVar3 = (longlong *)param_1[2];
    }
  }
  lVar1 = *param_1;
  *param_2 = (longlong)plVar3;
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1437151a0();
  }
  param_2[2] = (longlong)plVar2;
  if (((ulonglong)plVar2 & 1) != 0) {
    FUN_1437329e0((ulonglong)plVar2 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143748930 FUN_143748930 body=205 status=ok
// SIG undefined FUN_143748930(void)

longlong FUN_143748930(longlong param_1,uint param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FWindowsCriticalSection::~FWindowsCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc0));
  FUN_1436fbfd0(param_1 + 0xa0);
  FUN_14374b1b0(param_1 + 0x80);
  FUN_14374b1b0(param_1 + 0x58);
  FUN_143748e70(param_1 + 0x38);
  FUN_143748e70(param_1 + 0x18);
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0xe8;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xe8);
    }
  }
  return param_1;
}



// FUNCTION 143748a00 FUN_143748a00 body=500 status=ok
// SIG undefined FUN_143748a00(void)

uint * FUN_143748a00(longlong *param_1,uint *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  
  plVar1 = param_1 + 2;
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(plVar1);
  }
  lVar5 = *param_3;
  uVar14 = (int)lVar5 * -0x61c8864f;
  iVar6 = (int)((ulonglong)lVar5 >> 0x20);
  uVar10 = iVar6 * -0x61c8864f;
  uVar14 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
           (int)lVar5 * -0x4f000000;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | iVar6 * -0x4f000000;
  uVar10 = uVar14 + uVar10 * 0x40 + (uVar14 >> 2) + 0x9e3779b9 ^ uVar10;
  uVar8 = (ulonglong)(*(uint *)(param_1 + 3) & uVar10);
  puVar12 = (uint *)(*plVar1 + uVar8 * 8);
  if (-1 < *(int *)(*plVar1 + 4 + uVar8 * 8)) {
    do {
      if (*(longlong *)(*param_1 + (longlong)(int)puVar12[1] * 0x18) == lVar5) {
        *param_2 = puVar12[1];
        goto LAB_143748bcc;
      }
      lVar11 = *plVar1;
      uVar8 = ((longlong)puVar12 - lVar11 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar12 = (uint *)(lVar11 + uVar8 * 8);
    } while (-1 < *(int *)(lVar11 + 4 + uVar8 * 8));
  }
  uVar14 = *(uint *)(param_1 + 1);
  *puVar12 = uVar10;
  puVar12[1] = uVar14;
  uVar7 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar7,param_1,0x18);
  }
  lVar5 = *param_1 + (longlong)(int)param_1[1] * 0x18;
  if (lVar5 != 0) {
    *(undefined4 *)(lVar5 + 0x14) = 0x80000000;
    *(undefined8 *)(lVar5 + 8) = 0;
    *(undefined4 *)(lVar5 + 0x10) = 0;
  }
  plVar3 = (longlong *)(*param_1 + (longlong)(int)param_1[1] * 0x18);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  plVar2 = plVar3 + 1;
  *plVar3 = *param_3;
  iVar6 = (int)param_4[1];
  lVar5 = *param_4;
  uVar7 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)plVar3 + 0x14) & 0x3fffffff) < iVar6) {
    FUN_14370c310(uVar7,plVar2,iVar6,0x10);
  }
  iVar13 = iVar6;
  if ((int)plVar3[2] < iVar6) {
    iVar13 = (int)plVar3[2];
  }
  FUN_1436ee950(*plVar2,lVar5,iVar13);
  puVar9 = (undefined8 *)(*plVar2 + (longlong)iVar13 * 0x10);
  lVar11 = (longlong)(iVar6 - iVar13);
  if (0 < iVar6 - iVar13) {
    lVar15 = (longlong)iVar13 * 0x10 - (longlong)puVar9;
    do {
      if (puVar9 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)(lVar15 + lVar5 + (longlong)puVar9);
        uVar7 = puVar4[1];
        *puVar9 = *puVar4;
        puVar9[1] = uVar7;
      }
      puVar9 = puVar9 + 2;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  *(int *)(plVar3 + 2) = iVar6;
  *param_2 = uVar14;
LAB_143748bcc:
  param_2[1] = (uint)((longlong)puVar12 - *plVar1 >> 3);
  return param_2;
}



// FUNCTION 143748c10 FUN_143748c10 body=120 status=ok
// SIG undefined FUN_143748c10(void)

undefined8 FUN_143748c10(longlong *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar1 + 0x58),0xe8);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_143748ca0(lVar2);
    }
    if (lVar2 != *param_1) {
      if (*param_1 != 0) {
        FUN_14370c150();
      }
      *param_1 = lVar2;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 143748c90 FUN_143748c90 body=12 status=ok
// SIG undefined FUN_143748c90(void)

void FUN_143748c90(undefined8 param_1,undefined8 param_2)

{
  FUN_142b7ebc0(param_1,param_2,&DAT_1467dd5c8);
  return;
}



// FUNCTION 143748ca0 FUN_143748ca0 body=170 status=ok
// SIG undefined FUN_143748ca0(void)

undefined8 * FUN_143748ca0(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkReflect::Detail::DerivedDataCache::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  FUN_143734b10(param_1 + 5);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  FUN_143734b10(param_1 + 9);
  FUN_14374b170(param_1 + 0xb,0xffffffffffffffff);
  FUN_14374b140(param_1 + 0x10);
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x80000000;
  FUN_143734b10(param_1 + 0x16);
  FUN_14370d870(param_1 + 0x18,0);
  return param_1;
}



// FUNCTION 143748d50 LockedDerivedDataCache body=48 status=ok
// SIG undefined LockedDerivedDataCache(void)

longlong * hkReflect::Detail::LockedDerivedDataCache::LockedDerivedDataCache(longlong *param_1)

{
  *param_1 = DAT_146b83130;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b83130 + 0xc0));
  return param_1;
}



// FUNCTION 143748d80 FUN_143748d80 body=233 status=ok
// SIG undefined FUN_143748d80(void)

undefined8 * FUN_143748d80(undefined8 *param_1,uint *param_2)

{
  longlong *plVar1;
  
  if ((*param_2 & 0x40) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = (longlong *)FUN_1437143d0(param_2,0x40);
  }
  *param_1 = plVar1;
  if ((plVar1 == (longlong *)0x0) || ((code *)*plVar1 != AK::MemoryMgr::StartProfileThreadUsage)) {
    *param_1 = 0;
  }
  else {
    *plVar1 = (longlong)hkReflect::Detail::Trivial<64>::func;
  }
  if ((*param_2 & 0x80) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = (longlong *)FUN_1437143d0(param_2,0x80);
  }
  param_1[1] = plVar1;
  if ((plVar1 == (longlong *)0x0) || ((code *)*plVar1 != AK::MemoryMgr::StartProfileThreadUsage)) {
    param_1[1] = 0;
  }
  else {
    *plVar1 = (longlong)hkReflect::Detail::Trivial<512>::func;
  }
  if ((*param_2 >> 10 & 1) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = (longlong *)FUN_1437143d0(param_2,0x400);
  }
  param_1[2] = plVar1;
  if ((plVar1 != (longlong *)0x0) && ((code *)*plVar1 == AK::MemoryMgr::StartProfileThreadUsage)) {
    *plVar1 = (longlong)hkReflect::Detail::Trivial<512>::func;
    return param_1;
  }
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 143748e70 FUN_143748e70 body=216 status=ok
// SIG undefined FUN_143748e70(void)

void FUN_143748e70(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  
  thunk_FUN_143734820(param_1 + 2);
  uVar1 = FUN_143703a50();
  iVar3 = (int)param_1[1] + -1;
  lVar5 = (longlong)iVar3;
  if (-1 < iVar3) {
    puVar4 = (uint *)(*param_1 + 0x14 + lVar5 * 0x18);
    do {
      uVar2 = FUN_143703a50();
      puVar4[-1] = 0;
      if (-1 < (int)*puVar4) {
        FUN_143702e10(uVar2,*(undefined8 *)(puVar4 + -3),0x10,*puVar4 & 0x3fffffff);
      }
      puVar4[-3] = 0;
      puVar4[-2] = 0;
      *puVar4 = 0x80000000;
      puVar4 = puVar4 + -6;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,0x18,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 143748f50 ~LockedDerivedDataCache body=17 status=ok
// SIG undefined ~LockedDerivedDataCache(void)

void hkReflect::Detail::LockedDerivedDataCache::~LockedDerivedDataCache(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143748f5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(*param_1 + 0xc0));
  return;
}



// FUNCTION 143748f70 FUN_143748f70 body=86 status=ok
// SIG undefined FUN_143748f70(void)

undefined8 * FUN_143748f70(undefined8 *param_1,ulonglong param_2)

{
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    FUN_143733a60(param_1[5] & 0xfffffffffffffffe);
  }
  FUN_14371b030(param_1 + 1);
  *param_1 = hkReflect::Cloner::Callback::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 143748fd0 FUN_143748fd0 body=193 status=ok
// SIG undefined FUN_143748fd0(void)

undefined4 *
FUN_143748fd0(longlong *param_1,undefined4 *param_2,int *param_3,longlong param_4,undefined8 param_5
             ,uint param_6)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  lVar1 = *(longlong *)(*param_1 + 8 + (longlong)*param_3 * 0x18);
  iVar6 = (int)(((longlong)*(int *)(*param_1 + 0x10 + (longlong)*param_3 * 0x18) << 4) >> 4);
  if ((iVar6 != 0) && (0 < (int)param_6)) {
    uVar4 = (ulonglong)param_6;
    do {
      iVar2 = iVar6 + -1;
      lVar5 = (longlong)iVar2;
      if (-1 < iVar2) {
        plVar3 = (longlong *)(lVar5 * 0x10 + lVar1);
        do {
          (*(code *)plVar3[1])(*plVar3 + param_4);
          lVar5 = lVar5 + -1;
          plVar3 = plVar3 + -2;
        } while (-1 < lVar5);
      }
      param_4 = param_4 + param_3[1];
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    *param_2 = 0;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1437490a0 FUN_1437490a0 body=105 status=ok
// SIG undefined FUN_1437490a0(void)

/* WARNING: Removing unreachable block (ram,0x0001437490f4) */

undefined8 * FUN_1437490a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_143714490(param_2,0x400000);
  if ((plVar2 != (longlong *)0x0) && (puVar1 = (undefined8 *)*plVar2, puVar1 != (undefined8 *)0x0))
  {
    (**(code **)*puVar1)(puVar1,param_1,param_2);
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 143749110 FUN_143749110 body=127 status=ok
// SIG undefined FUN_143749110(void)

/* WARNING: Removing unreachable block (ram,0x000143749175) */

undefined8 * FUN_143749110(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_143714490(param_3,0x400000);
  if ((plVar1 != (longlong *)0x0) && (plVar1 = (longlong *)*plVar1, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 8))(plVar1,param_1,param_2,param_3);
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 143749190 FUN_143749190 body=412 status=ok
// SIG undefined FUN_143749190(void)

undefined8
FUN_143749190(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined4 *param_5)

{
  longlong lVar1;
  uint *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_res10;
  undefined8 local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_38 = 0;
  uStack_30 = 0;
  uVar6 = 0;
  local_28 = 0;
  (**(code **)(*(longlong *)(param_4[2] & 0xfffffffffffffffe) + 0x50))
            ((longlong *)(param_4[2] & 0xfffffffffffffffe),&local_res10,*param_4,param_4[1],
             &local_38);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  *param_5 = 0;
  FUN_1437140a0(&local_res10,param_3[1]);
  if ((local_res10 < 2) ||
     (puVar2 = (uint *)FUN_143714f30(&local_res10,&param_5), (*puVar2 >> 6 & 1) == 0)) {
    local_38 = *param_3;
    uVar6 = param_3[2];
    uStack_30 = param_3[1];
  }
  else {
    lVar1 = *(longlong *)(param_3[1] + 8);
    uVar4 = uVar6;
    if (lVar1 != 0) {
      puVar3 = (undefined8 *)FUN_143714490(lVar1,1);
      if (puVar3 == (undefined8 *)0x0) {
        uVar4 = FUN_1437157a0(0);
      }
      else {
        uVar4 = FUN_1437157a0((uint)*puVar3 & 0xf);
      }
    }
    uVar5 = uVar6;
    if (lVar1 != 0) {
      uVar5 = FUN_143748c90(lVar1,uVar4);
    }
    local_38 = *param_3;
    uStack_30 = uVar5;
    if (uVar5 != 0) {
      uVar6 = FUN_1437151a0();
    }
  }
  local_28 = uVar6;
  if ((local_28 & 1) != 0) {
    FUN_1437329e0(local_28 & 0xfffffffffffffffe);
  }
  FUN_1437420f0(&local_38,param_2,param_4);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 143749330 FUN_143749330 body=28 status=ok
// SIG undefined FUN_143749330(void)

void FUN_143749330(undefined4 param_1)

{
  (**(code **)(*DAT_146b834f8 + 0x50))(DAT_146b834f8,param_1);
  return;
}



// FUNCTION 143749350 FUN_143749350 body=12 status=ok
// SIG undefined FUN_143749350(void)

void FUN_143749350(longlong *param_1)

{
  USkeletalMesh::FindMorphTarget(*param_1 + 0x80);
  return;
}



// FUNCTION 143749360 FUN_143749360 body=110 status=ok
// SIG undefined FUN_143749360(void)

void FUN_143749360(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 local_res20 [8];
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  hkReflect::Detail::LockedDerivedDataCache::LockedDerivedDataCache(local_18);
  FUN_14374a870(local_18,local_10,param_2);
  FUN_14374a380(local_18,local_res20,local_10,param_1,param_2,param_3);
  hkReflect::Detail::LockedDerivedDataCache::~LockedDerivedDataCache(local_18);
  return;
}



// FUNCTION 1437493d0 FUN_1437493d0 body=546 status=ok
// SIG undefined FUN_1437493d0(void)

void FUN_1437493d0(undefined8 param_1,uint *param_2,longlong *param_3,longlong param_4)

{
  short *psVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  short *psVar10;
  uint *puVar11;
  short *psVar12;
  undefined8 local_30 [2];
  
  for (; param_2 != (uint *)0x0; param_2 = *(uint **)(param_2 + 2)) {
    bVar2 = (byte)*param_2;
    while ((~bVar2 & 1) != 0) {
      param_2 = *(uint **)(param_2 + 2);
      bVar2 = (byte)*param_2;
    }
    lVar5 = FUN_14374a200(param_2);
    if (lVar5 != 0) {
      uVar6 = FUN_143703a50();
      if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar6,param_3,0x10);
      }
      plVar8 = (longlong *)((longlong)(int)param_3[1] * 0x10 + *param_3);
      *(int *)(param_3 + 1) = (int)param_3[1] + 1;
      *plVar8 = param_4;
      plVar8[1] = lVar5;
    }
    puVar7 = (undefined8 *)FUN_143714490(param_2,1);
    bVar2 = 0;
    if (puVar7 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar7;
    }
    puVar11 = (uint *)0x0;
    if ((bVar2 & 0xf) == 8) {
      puVar11 = param_2;
    }
    if (puVar11 != (uint *)0x0) {
      puVar7 = (undefined8 *)FUN_143714420(puVar11,1);
      if (puVar7 == (undefined8 *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (int)((ulonglong)*puVar7 >> 8);
      }
      while (iVar4 = iVar4 + -1, -1 < iVar4) {
        puVar7 = (undefined8 *)FUN_143714420(puVar11,2);
        if (puVar7 == (undefined8 *)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *puVar7;
        }
        puVar7 = (undefined8 *)FUN_143714420(puVar11,2);
        if (puVar7 == (undefined8 *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *puVar7;
        }
        iVar3 = FUN_1437152f0(uVar6);
        FUN_1437493d0(param_1,uVar9,param_3,iVar3 * iVar4 + param_4);
      }
    }
    if ((((*param_2 >> 0x1a & 1) != 0) &&
        (puVar7 = (undefined8 *)FUN_1437143d0(param_2,0x4000000), puVar7 != (undefined8 *)0x0)) &&
       (psVar1 = (short *)*puVar7, psVar1 != (short *)0x0)) {
      psVar10 = psVar1 + 4 + (longlong)*psVar1 * 4;
      psVar12 = psVar10;
      for (; psVar10 != psVar1 + 4; psVar10 = psVar10 + -4) {
        psVar12 = psVar12 + -4;
        FUN_143714060(local_30,*(undefined8 *)psVar12);
        uVar6 = local_30[0];
        iVar4 = FUN_143715270(local_30);
        FUN_1437493d0(param_1,uVar6,param_3,iVar4 + param_4);
      }
    }
  }
  return;
}



// FUNCTION 143749600 FUN_143749600 body=718 status=ok
// SIG undefined FUN_143749600(void)

void FUN_143749600(undefined8 param_1,uint *param_2,longlong *param_3,longlong param_4)

{
  short *psVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  short *psVar11;
  longlong *plVar12;
  longlong lVar13;
  short *psVar14;
  undefined1 local_res10 [8];
  longlong *local_res18;
  longlong local_res20;
  undefined8 local_38 [3];
  
  local_res20 = param_4;
  local_res18 = param_3;
  for (; param_2 != (uint *)0x0; param_2 = *(uint **)(param_2 + 2)) {
    bVar3 = (byte)*param_2;
    while ((~bVar3 & 1) != 0) {
      param_2 = *(uint **)(param_2 + 2);
      bVar3 = (byte)*param_2;
    }
    puVar6 = (undefined8 *)FUN_143714490(param_2,1);
    bVar3 = 0;
    if (puVar6 != (undefined8 *)0x0) {
      bVar3 = (byte)*puVar6;
    }
    puVar8 = (uint *)0x0;
    if ((bVar3 & 0xf) == 8) {
      puVar8 = param_2;
    }
    if (puVar8 != (uint *)0x0) {
      puVar6 = (undefined8 *)FUN_143714420(puVar8,1);
      plVar12 = local_res18;
      if (puVar6 == (undefined8 *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)((ulonglong)*puVar6 >> 8);
      }
      while (iVar5 = iVar5 + -1, -1 < iVar5) {
        puVar6 = (undefined8 *)FUN_143714420(puVar8,2);
        if (puVar6 == (undefined8 *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *puVar6;
        }
        puVar6 = (undefined8 *)FUN_143714420(puVar8,2);
        if (puVar6 == (undefined8 *)0x0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *puVar6;
        }
        iVar4 = FUN_1437152f0(uVar9);
        FUN_143749600(param_1,uVar10,plVar12,iVar4 * iVar5 + local_res20);
      }
    }
    plVar12 = local_res18;
    if ((((*param_2 >> 0x1a & 1) != 0) &&
        (puVar6 = (undefined8 *)FUN_1437143d0(param_2,0x4000000), plVar12 = local_res18,
        puVar6 != (undefined8 *)0x0)) && (psVar1 = (short *)*puVar6, psVar1 != (short *)0x0)) {
      psVar11 = psVar1 + 4 + (longlong)*psVar1 * 4;
      psVar14 = psVar11;
      for (; psVar11 != psVar1 + 4; psVar11 = psVar11 + -4) {
        psVar14 = psVar14 + -4;
        FUN_143714060(local_38,*(undefined8 *)psVar14);
        uVar9 = local_38[0];
        iVar5 = FUN_143715270(local_38);
        FUN_143749600(param_1,uVar9,plVar12,iVar5 + local_res20);
      }
    }
    if ((((*param_2 >> 0x11 & 1) != 0) &&
        (plVar7 = (longlong *)FUN_1437143d0(param_2,0x20000), lVar2 = local_res20,
        plVar7 != (longlong *)0x0)) &&
       ((plVar7 = (longlong *)*plVar7, plVar7 != (longlong *)0x0 &&
        (iVar5 = (int)((*plVar7 << 4) >> 4) + -1, lVar13 = (longlong)iVar5, -1 < iVar5)))) {
      plVar7 = plVar7 + lVar13 * 2 + 1;
      do {
        FUN_143749600(param_1,*plVar7,plVar12,plVar7[1] + lVar2);
        lVar13 = lVar13 + -1;
        plVar7 = plVar7 + -2;
      } while (-1 < lVar13);
    }
    puVar8 = (uint *)FUN_143715390(param_2,local_res10);
    if ((*puVar8 >> 7 & 1) != 0) {
      uVar9 = FUN_143703a50();
      if (*(uint *)(plVar12 + 1) == (*(uint *)((longlong)plVar12 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar9,plVar12,0x10);
      }
      plVar7 = (longlong *)((longlong)(int)plVar12[1] * 0x10 + *plVar12);
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      *plVar7 = local_res20;
      plVar7[1] = 0;
    }
  }
  return;
}



// FUNCTION 1437498d0 FUN_1437498d0 body=89 status=ok
// SIG undefined FUN_1437498d0(void)

undefined8
FUN_1437498d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)FUN_14374a220(param_3);
  if (pcVar1 == (code *)0x0) {
    uVar2 = 0x80040200;
  }
  else {
    (*pcVar1)(param_1,param_2,param_3,param_4);
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143749930 FUN_143749930 body=89 status=ok
// SIG undefined FUN_143749930(void)

undefined8
FUN_143749930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)FUN_14374a240(param_3);
  if (pcVar1 == (code *)0x0) {
    uVar2 = 0x80040200;
  }
  else {
    (*pcVar1)(param_1,param_2,param_3,param_4);
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143749990 FUN_143749990 body=726 status=ok
// SIG undefined FUN_143749990(void)

undefined8 FUN_143749990(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int *piVar9;
  undefined8 uVar10;
  byte bVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  undefined8 local_98;
  undefined8 local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined **local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  cVar2 = FUN_143714870(param_1[1],param_2[1]);
  if (cVar2 == '\0') {
LAB_143749b6a:
    iVar3 = FUN_143749d80(*param_1,param_1[1],1);
    if (iVar3 < 0) {
      lVar6 = param_1[1];
      puVar7 = (undefined8 *)FUN_143714490(lVar6,1);
      if (puVar7 == (undefined8 *)0x0) {
        uVar12 = 0;
      }
      else {
        uVar12 = (uint)*puVar7;
      }
      uVar12 = uVar12 & 0xf;
      if ((uVar12 == 4) || (((uVar12 - 2 & 0xfffffffc) == 0 && (uVar12 != 4)))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      lVar8 = 0;
      if (bVar1) {
        lVar8 = lVar6;
      }
      if (lVar8 == 0) {
        lVar6 = param_1[1];
        puVar7 = (undefined8 *)FUN_143714490(lVar6,1);
        if (puVar7 == (undefined8 *)0x0) {
          bVar11 = 0;
        }
        else {
          bVar11 = (byte)*puVar7;
        }
        lVar8 = 0;
        if ((bVar11 & 0xf) == 6) {
          lVar8 = lVar6;
        }
        if (lVar8 != 0) goto LAB_143749c04;
      }
      else {
LAB_143749c04:
        iVar3 = FUN_14374a900(*param_1,param_1[1],1);
      }
      if (-1 < iVar3) goto LAB_143749c24;
    }
    else {
LAB_143749c24:
      piVar9 = (int *)FUN_1437420f0(param_1,local_res8,param_2);
      if (-1 < *piVar9) goto LAB_143749b18;
      FUN_143749de0(*param_1,param_1[1],1);
    }
    uVar10 = 0x80040200;
  }
  else {
    puVar4 = (uint *)FUN_143715390(param_2[1],local_res8);
    if ((*puVar4 >> 3 & 1) == 0) {
      iVar3 = FUN_143749930(*param_1,*param_2,param_1[1],1);
      if (iVar3 < 0) goto LAB_1437499f3;
    }
    else {
LAB_1437499f3:
      local_80 = *param_1;
      local_70 = param_1[2];
      local_78 = param_1[1];
      if ((local_70 & 1) != 0) {
        FUN_1437329e0(local_70 & 0xfffffffffffffffe);
      }
      local_88 = param_2[2];
      local_98 = *param_2;
      local_90 = param_2[1];
      if ((local_88 & 1) != 0) {
        FUN_1437329e0(local_88 & 0xfffffffffffffffe);
      }
      local_60 = 0;
      local_68 = _anon_0A813AD8::CopyCallback::vftable;
      local_58 = 0;
      local_54 = 0x80000000;
      local_50 = local_98;
      local_48 = local_90;
      local_40 = local_88;
      if ((local_88 & 1) != 0) {
        FUN_1437329e0(local_88 & 0xfffffffffffffffe);
      }
      plVar5 = (longlong *)FUN_143776b20(local_38,&local_80,&local_98,&local_68);
      lVar6 = *plVar5;
      if ((local_28 & 1) != 0) {
        FUN_143733a60(local_28 & 0xfffffffffffffffe);
      }
      if (lVar6 == 0) {
        if ((local_40 & 1) != 0) {
          FUN_143733a60(local_40 & 0xfffffffffffffffe);
        }
        FUN_14371b030(&local_60);
        local_68 = hkReflect::Cloner::Callback::vftable;
        if ((local_88 & 1) != 0) {
          FUN_143733a60(local_88 & 0xfffffffffffffffe);
        }
        if ((local_70 & 1) != 0) {
          FUN_143733a60(local_70 & 0xfffffffffffffffe);
        }
        goto LAB_143749b6a;
      }
      lVar6 = FUN_14371aab0(local_80,local_78);
      if (lVar6 != 0) {
        FUN_14370c030(lVar6);
      }
      if ((local_40 & 1) != 0) {
        FUN_143733a60(local_40 & 0xfffffffffffffffe);
      }
      FUN_14371b030(&local_60);
      local_68 = hkReflect::Cloner::Callback::vftable;
      if ((local_88 & 1) != 0) {
        FUN_143733a60(local_88 & 0xfffffffffffffffe);
      }
      if ((local_70 & 1) != 0) {
        FUN_143733a60(local_70 & 0xfffffffffffffffe);
      }
    }
LAB_143749b18:
    uVar10 = 0;
  }
  return uVar10;
}



// FUNCTION 143749c70 FUN_143749c70 body=64 status=ok
// SIG undefined FUN_143749c70(void)

void FUN_143749c70(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)FUN_143714490(param_2,0x400000);
  if (puVar1 == (undefined8 *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = (longlong *)*puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000143749cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,param_1,param_2);
  return;
}



// FUNCTION 143749cb0 FUN_143749cb0 body=194 status=ok
// SIG undefined FUN_143749cb0(void)

/* WARNING: Removing unreachable block (ram,0x000143749d58) */

longlong * FUN_143749cb0(longlong *param_1,byte *param_2,undefined8 param_3)

{
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  FUN_14374a4c0(&local_28);
  while( true ) {
    if (local_28 != 0) {
      *param_1 = local_28;
      param_1[1] = local_20;
      param_1[2] = local_18;
      return param_1;
    }
    if ((local_18 & 1) != 0) {
      FUN_143733a60(local_18 & 0xfffffffffffffffe);
    }
    if (((~*param_2 & 1) == 0) || (param_2 = *(byte **)(param_2 + 8), param_2 == (byte *)0x0))
    break;
    FUN_14374a4c0(&local_28,param_2,param_3);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 143749d80 FUN_143749d80 body=87 status=ok
// SIG undefined FUN_143749d80(void)

undefined8 FUN_143749d80(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_14374a260(param_2);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,param_2,param_3);
    return 0;
  }
  return 0x80040200;
}



// FUNCTION 143749de0 FUN_143749de0 body=64 status=ok
// SIG undefined FUN_143749de0(void)

void FUN_143749de0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_14374a280(param_2);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 143749e20 FUN_143749e20 body=292 status=ok
// SIG undefined FUN_143749e20(void)

int * FUN_143749e20(longlong *param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  undefined8 local_res18 [2];
  undefined8 local_38;
  undefined4 local_30;
  uint local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_res18[0] = param_3;
  lVar5 = FUN_14371b650(param_1,local_res18);
  if (lVar5 == 0) {
    param_2[0] = -1;
    param_2[1] = -1;
  }
  else {
    iVar1 = *(int *)(lVar5 + 4);
    lVar4 = param_1[2];
    *param_2 = iVar1;
    param_2[1] = (int)(lVar5 - lVar4 >> 3);
    if (-1 < iVar1) {
      return param_2;
    }
  }
  local_2c = 0x80000000;
  local_38 = 0;
  local_30 = 0;
  FUN_1437493d0(param_1,param_3,&local_38,0);
  local_28 = 0;
  local_20 = 0;
  local_1c = 0x80000000;
  puVar6 = (undefined8 *)FUN_143748a00(param_1,local_res8,local_res18,&local_28);
  *(undefined8 *)param_2 = *puVar6;
  FUN_143703a50();
  lVar5 = *param_1 + (longlong)*param_2 * 0x18;
  uVar7 = *(undefined8 *)(lVar5 + 8);
  *(undefined8 *)(lVar5 + 8) = local_38;
  uVar2 = *(undefined4 *)(lVar5 + 0x10);
  *(undefined4 *)(lVar5 + 0x10) = local_30;
  uVar3 = *(uint *)(lVar5 + 0x14);
  *(uint *)(lVar5 + 0x14) = local_2c;
  local_38 = uVar7;
  local_30 = uVar2;
  local_2c = uVar3;
  uVar7 = FUN_143703a50();
  local_30 = 0;
  if (-1 < (int)local_2c) {
    FUN_143702e10(uVar7,local_38,0x10,local_2c & 0x3fffffff);
  }
  return param_2;
}



// FUNCTION 143749f50 FUN_143749f50 body=380 status=ok
// SIG undefined FUN_143749f50(void)

longlong FUN_143749f50(longlong *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int local_res8;
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  
  lVar1 = *param_1;
  local_res18[0] = param_3;
  lVar3 = FUN_143739210(lVar1 + 0xa0,local_res18);
  if ((lVar3 != 0) && (iVar2 = *(int *)(lVar3 + 4), -1 < iVar2)) {
    iVar6 = 0;
    lVar3 = *(longlong *)(lVar1 + 0xa0) + (longlong)iVar2 * 0x18;
    if (0 < *(int *)(*(longlong *)(lVar1 + 0xa0) + 0x10 + (longlong)iVar2 * 0x18)) {
      lVar7 = 0;
      do {
        iVar2 = hkReflect::Type::compareName
                          (*(undefined8 *)(lVar7 + *(longlong *)(lVar3 + 8)),param_2);
        if (iVar2 == 0) {
          return *(longlong *)(*(longlong *)(lVar3 + 8) + (longlong)iVar6 * 8);
        }
        iVar6 = iVar6 + 1;
        lVar7 = lVar7 + 8;
      } while (iVar6 < *(int *)(lVar3 + 0x10));
    }
  }
  lVar3 = FUN_14371d670(param_2);
  if (lVar3 != 0) {
    iVar2 = FUN_14374b760(*param_1 + 0x58,lVar3);
    if (iVar2 == param_3) {
      local_48 = 0;
      local_40 = 0;
      local_3c = 0x80000000;
      puVar4 = (undefined8 *)FUN_143738ea0(lVar1 + 0xa0,local_res20,local_res18,&local_48);
      uVar5 = *puVar4;
      FUN_143703a50();
      local_res8 = (int)uVar5;
      lVar1 = *(longlong *)(lVar1 + 0xa0) + (longlong)local_res8 * 0x18;
      uVar5 = FUN_143703a50();
      if (*(uint *)(lVar1 + 0x10) == (*(uint *)(lVar1 + 0x14) & 0x3fffffff)) {
        FUN_14370c460(uVar5,lVar1 + 8,8);
      }
      *(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)*(int *)(lVar1 + 0x10) * 8) = lVar3;
      *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 14374a0d0 FUN_14374a0d0 body=291 status=ok
// SIG undefined FUN_14374a0d0(void)

void FUN_14374a0d0(longlong param_1,char param_2)

{
  short *psVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  short *psVar6;
  undefined8 local_res18;
  undefined8 local_18;
  undefined4 local_10;
  uint local_c;
  
  local_18 = 0;
  local_10 = 0;
  local_c = 0x80000000;
  FUN_14374aa40(param_1,&local_18);
  if (param_2 != '\0') {
    if ((*(longlong *)(param_1 + 8) == 0) || (lVar3 = FUN_14374a280(), lVar3 == 0)) {
      puVar4 = (undefined8 *)FUN_143714490(param_1,0x4000000);
      bVar2 = false;
      if ((puVar4 != (undefined8 *)0x0) && (psVar1 = (short *)*puVar4, psVar1 != (short *)0x0)) {
        psVar6 = psVar1 + 4;
        psVar1 = psVar6 + (longlong)*psVar1 * 4;
        for (; bVar2 = false, psVar6 != psVar1; psVar6 = psVar6 + 4) {
          FUN_143714060(&local_res18,*(undefined8 *)psVar6);
          lVar3 = FUN_14374a280(local_res18);
          if (lVar3 != 0) {
            bVar2 = true;
            break;
          }
        }
      }
    }
    else {
      bVar2 = true;
    }
    puVar4 = (undefined8 *)FUN_1437143d0(param_1,0x200);
    pcVar5 = (code *)0x0;
    if (bVar2) {
      pcVar5 = FUN_14373db60;
    }
    *puVar4 = pcVar5;
  }
  local_10 = 0;
  if (-1 < (int)local_c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_18,8,local_c & 0x3fffffff);
  }
  return;
}



// FUNCTION 14374a200 FUN_14374a200 body=32 status=ok
// SIG undefined FUN_14374a200(void)

undefined8 FUN_14374a200(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_143714420(param_1,0x8000000);
  if (puVar1 != (undefined8 *)0x0) {
    return *puVar1;
  }
  return 0;
}



// FUNCTION 14374a220 FUN_14374a220 body=32 status=ok
// SIG undefined FUN_14374a220(void)

undefined8 FUN_14374a220(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_143714420(param_1,0x400);
  if (puVar1 != (undefined8 *)0x0) {
    return *puVar1;
  }
  return 0;
}



// FUNCTION 14374a240 FUN_14374a240 body=32 status=ok
// SIG undefined FUN_14374a240(void)

undefined8 FUN_14374a240(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_143714420(param_1,0x80);
  if (puVar1 != (undefined8 *)0x0) {
    return *puVar1;
  }
  return 0;
}



// FUNCTION 14374a260 FUN_14374a260 body=32 status=ok
// SIG undefined FUN_14374a260(void)

undefined8 FUN_14374a260(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_143714420(param_1,0x40);
  if (puVar1 != (undefined8 *)0x0) {
    return *puVar1;
  }
  return 0;
}



// FUNCTION 14374a280 FUN_14374a280 body=32 status=ok
// SIG undefined FUN_14374a280(void)

undefined8 FUN_14374a280(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_143714420(param_1,0x200);
  if (puVar1 != (undefined8 *)0x0) {
    return *puVar1;
  }
  return 0;
}



// FUNCTION 14374a2a0 FUN_14374a2a0 body=10 status=ok
// SIG undefined FUN_14374a2a0(void)

void FUN_14374a2a0(undefined8 param_1)

{
  FUN_143714420(param_1,0x8000);
  return;
}



// FUNCTION 14374a2b0 FUN_14374a2b0 body=65 status=ok
// SIG undefined FUN_14374a2b0(void)

longlong FUN_14374a2b0(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_143714420(param_1,0x2000000);
  if ((plVar1 == (longlong *)0x0) || (lVar2 = *plVar1, lVar2 == 0)) {
    plVar1 = (longlong *)FUN_143714420(param_1,0x40);
    lVar2 = 0;
    if (plVar1 != (longlong *)0x0) {
      return *plVar1;
    }
  }
  return lVar2;
}



// FUNCTION 14374a300 FUN_14374a300 body=49 status=ok
// SIG undefined FUN_14374a300(void)

longlong FUN_14374a300(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = hkReflect::TypeDetail::skipDecorators();
  lVar2 = FUN_143715320(lVar1);
  if ((lVar2 != 0) && (lVar2 = FHardwareCursor::GetHandle(lVar2), lVar2 != 0)) {
    return lVar2;
  }
  return lVar1;
}



// FUNCTION 14374a340 FUN_14374a340 body=61 status=ok
// SIG undefined FUN_14374a340(void)

bool FUN_14374a340(undefined8 param_1)

{
  undefined1 local_res10 [8];
  uint local_res18 [4];
  
  hkReflect::Detail::LockedDerivedDataCache::LockedDerivedDataCache(local_res10);
  FUN_14374a870(local_res10,local_res18,param_1);
  hkReflect::Detail::LockedDerivedDataCache::~LockedDerivedDataCache(local_res10);
  return local_res18[0] < 0x80000000;
}



// FUNCTION 14374a380 FUN_14374a380 body=69 status=ok
// SIG undefined FUN_14374a380(void)

undefined4 * FUN_14374a380(longlong *param_1,undefined4 *param_2,int *param_3)

{
  if (-1 < *param_3) {
    FUN_143748fd0(*param_1 + 0x38);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14374a3d0 FUN_14374a3d0 body=59 status=ok
// SIG undefined FUN_14374a3d0(void)

undefined4 * FUN_14374a3d0(longlong *param_1,undefined4 *param_2,int *param_3)

{
  if (-1 < *param_3) {
    FUN_14374af10(*param_1 + 0x18);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14374a410 FUN_14374a410 body=109 status=ok
// SIG undefined FUN_14374a410(void)

undefined4 FUN_14374a410(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_res20 [8];
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  hkReflect::Detail::LockedDerivedDataCache::LockedDerivedDataCache(local_18);
  hkReflect::Detail::VtableInitializer::preCalc(local_18,local_10,param_2);
  puVar2 = (undefined4 *)FUN_14374a3d0(local_18,local_res20,local_10,param_1,param_3);
  uVar1 = *puVar2;
  hkReflect::Detail::LockedDerivedDataCache::~LockedDerivedDataCache(local_18);
  return uVar1;
}



// FUNCTION 14374a480 FUN_14374a480 body=55 status=ok
// SIG undefined FUN_14374a480(void)

ulonglong FUN_14374a480(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  plVar2 = (longlong *)FUN_143714490(param_1,0x400000);
  if ((plVar2 != (longlong *)0x0) && (plVar1 = (longlong *)*plVar2, plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014374a4ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
    return uVar3;
  }
  return (ulonglong)plVar2 & 0xffffffffffffff00;
}



// FUNCTION 14374a4c0 FUN_14374a4c0 body=252 status=ok
// SIG undefined FUN_14374a4c0(void)

/* WARNING: Removing unreachable block (ram,0x00014374a55e) */

longlong * FUN_14374a4c0(longlong *param_1,byte *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar6 = 0;
  if (((((*param_2 & 0x20) != 0) &&
       (plVar5 = (longlong *)FUN_1437143d0(param_2,0x20), plVar5 != (longlong *)0x0)) &&
      (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)) &&
     (iVar4 = (int)(*plVar5 * 0x10 >> 4), uVar8 = uVar6, uVar9 = uVar6, plVar2 = plVar5, 0 < iVar4))
  {
    do {
      cVar3 = FUN_143714910(plVar2[2],param_3);
      iVar7 = (int)uVar8;
      if (cVar3 != '\0') {
        lVar1 = plVar5[(longlong)iVar7 * 2 + 2];
        *param_1 = plVar5[(longlong)iVar7 * 2 + 1];
        param_1[1] = lVar1;
        if (lVar1 != 0) {
          uVar6 = FUN_1437151a0();
        }
        param_1[2] = uVar6;
        if ((uVar6 & 1) == 0) {
          return param_1;
        }
        FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
        return param_1;
      }
      uVar9 = uVar9 + 1;
      uVar8 = (ulonglong)(iVar7 + 1);
      plVar2 = plVar2 + 2;
    } while ((longlong)uVar9 < (longlong)iVar4);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 14374a5c0 FUN_14374a5c0 body=111 status=ok
// SIG undefined FUN_14374a5c0(void)

longlong * FUN_14374a5c0(longlong *param_1,uint *param_2)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  undefined8 *puVar4;
  
  if ((*param_2 >> 0x1a & 1) != 0) {
    puVar4 = (undefined8 *)FUN_1437143d0(param_2,0x4000000);
    if ((puVar4 != (undefined8 *)0x0) && (psVar3 = (short *)*puVar4, psVar3 != (short *)0x0)) {
      sVar1 = psVar3[1];
      sVar2 = *psVar3;
      *param_1 = (longlong)(psVar3 + 4);
      param_1[1] = (longlong)(psVar3 + 4 + (longlong)((int)sVar2 + (int)sVar1) * 4);
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 14374a630 FUN_14374a630 body=150 status=ok
// SIG undefined FUN_14374a630(void)

void FUN_14374a630(uint *param_1,ulonglong param_2,uint param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  if ((*param_1 >> 0x17 & 1) != 0) {
    puVar1 = (ulonglong *)FUN_1437143d0();
    if (puVar1 != (ulonglong *)0x0) {
      uVar2 = *puVar1;
      goto LAB_14374a666;
    }
  }
  uVar2 = 0;
LAB_14374a666:
  puVar1 = (ulonglong *)FUN_1437143d0(param_1,0x800000);
  *puVar1 = (ulonglong)(((int)((uVar2 & 0xf0000000) >> 0x1c) << 0xc | param_3 & 0xfff) << 0x10) |
            param_2 & 0xffff;
  return;
}



// FUNCTION 14374a6d0 FUN_14374a6d0 body=410 status=ok
// SIG undefined FUN_14374a6d0(void)

undefined4 *
FUN_14374a6d0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong local_248;
  int local_240;
  uint local_23c;
  undefined1 local_238 [32];
  undefined1 local_218 [512];
  
  uVar6 = 0;
  local_23c = 0x80000000;
  local_248 = 0;
  local_240 = 0;
  iVar3 = FUN_1437152f0(param_3);
  if ((int)(local_23c & 0x3fffffff) < iVar3) {
    iVar2 = (local_23c & 0x3fffffff) * 2;
    iVar1 = iVar3;
    if (iVar3 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_248,iVar1,1);
  }
  if (0 < iVar3 - local_240) {
    puVar5 = (undefined1 *)(local_248 + local_240);
    for (lVar4 = (longlong)(iVar3 - local_240); lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  local_240 = iVar3;
  iVar3 = FUN_14374a900(local_248,param_3,1);
  if (iVar3 < 0) {
    FUN_1437134a0(local_238,local_218,0x200);
    Electra::FHTTPResourceRequest::URL
              (local_238,
               "Attempted to get the vtable from a non-constructible type, it must have either an accessible default constructor or a bypass constructor"
              );
    FUN_143732520(0xabbac0ae,local_218,"Reflect\\Core\\Detail\\hkReflectTypeDetail.cpp",0x14e);
    FUN_143713520(local_238);
    *param_2 = 0x80040200;
  }
  else {
    uVar8 = uVar6;
    if (0 < (int)param_4[1]) {
      do {
        uVar6 = uVar6 + 0x10;
        uVar7 = (int)uVar8 + 1;
        *(undefined8 *)(*param_4 + -8 + uVar6) =
             *(undefined8 *)(local_248 + *(longlong *)(*param_4 + -0x10 + uVar6));
        uVar8 = (ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_4[1]);
    }
    FUN_143749de0(local_248,param_3,1);
    *param_2 = 0;
  }
  local_240 = 0;
  if (-1 < (int)local_23c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_248,1,local_23c & 0x3fffffff);
  }
  return param_2;
}



// FUNCTION 14374a870 FUN_14374a870 body=101 status=ok
// SIG undefined FUN_14374a870(void)

int * FUN_14374a870(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int local_res8 [2];
  
  lVar2 = *param_1;
  FUN_143749e20(lVar2 + 0x38,local_res8);
  iVar1 = *(int *)(*(longlong *)(lVar2 + 0x38) + 0x10 + (longlong)local_res8[0] * 0x18);
  iVar3 = FUN_1437152f0();
  param_2[1] = iVar3;
  iVar3 = -1;
  if (iVar1 != 0) {
    iVar3 = local_res8[0];
  }
  *param_2 = iVar3;
  return param_2;
}



// FUNCTION 14374a8e0 preCalc body=30 status=ok
// SIG undefined preCalc(void)

undefined8 hkReflect::Detail::VtableInitializer::preCalc(longlong *param_1,undefined8 param_2)

{
  FUN_14374afb0(*param_1 + 0x18);
  return param_2;
}



// FUNCTION 14374a900 FUN_14374a900 body=224 status=ok
// SIG undefined FUN_14374a900(void)

undefined8 FUN_14374a900(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_3;
  pcVar4 = (code *)FUN_14374a2b0(param_2);
  if (pcVar4 == (code *)0x0) {
    return 0x80040200;
  }
  cVar2 = FUN_143714910(param_2,&DAT_1467e53b0);
  if (cVar2 == '\0') {
    (*pcVar4)(param_1,param_2,uVar5);
  }
  else {
    iVar3 = FUN_1437152f0(param_2);
    if (0 < (int)param_3) {
      do {
        uVar1 = *(undefined2 *)(param_1 + 0x10);
        (*pcVar4)(param_1,param_2,1);
        *(undefined2 *)(param_1 + 0x10) = uVar1;
        *(undefined2 *)(param_1 + 0x12) = 1;
        param_1 = param_1 + iVar3;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      return 0;
    }
  }
  return 0;
}


