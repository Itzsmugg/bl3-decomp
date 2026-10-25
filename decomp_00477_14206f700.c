// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14206f700 FUN_14206f700 body=71 status=ok
// SIG undefined FUN_14206f700(void)

undefined8 * FUN_14206f700(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x180);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142062470(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f88bf0;
    puVar1[0x18] = PTR_DAT_1464fa2c0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14206f750 FUN_14206f750 body=71 status=ok
// SIG undefined FUN_14206f750(void)

undefined8 * FUN_14206f750(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x180);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142062470(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f88bf0;
    puVar1[0x18] = PTR_DAT_1464fa2c8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14206f7a0 FUN_14206f7a0 body=71 status=ok
// SIG undefined FUN_14206f7a0(void)

undefined8 * FUN_14206f7a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x180);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142062470(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f88bf0;
    puVar1[0x18] = PTR_DAT_1464fa398;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14206f7f0 FUN_14206f7f0 body=71 status=ok
// SIG undefined FUN_14206f7f0(void)

undefined8 * FUN_14206f7f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x180);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142062470(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f88bf0;
    puVar1[0x18] = PTR_DAT_1464fa3a0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14206f840 FUN_14206f840 body=71 status=ok
// SIG undefined FUN_14206f840(void)

undefined8 * FUN_14206f840(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x180);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142062470(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f88bf0;
    puVar1[0x18] = PTR_DAT_1464fa3a8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14206f890 FUN_14206f890 body=71 status=ok
// SIG undefined FUN_14206f890(void)

undefined8 * FUN_14206f890(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x180);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142062470(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f88bf0;
    puVar1[0x18] = PTR_DAT_1464fa058;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14206f8e0 FUN_14206f8e0 body=71 status=ok
// SIG undefined FUN_14206f8e0(void)

undefined8 * FUN_14206f8e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x180);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142062470(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f88bf0;
    puVar1[0x18] = PTR_DAT_1464fa068;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14206f930 FUN_14206f930 body=71 status=ok
// SIG undefined FUN_14206f930(void)

undefined8 * FUN_14206f930(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x180);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142062470(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f88bf0;
    puVar1[0x18] = PTR_DAT_1464fa070;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14206f980 FUN_14206f980 body=380 status=ok
// SIG undefined FUN_14206f980(void)

undefined8 *
FUN_14206f980(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
             longlong *param_5)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    plVar2 = *(longlong **)(param_1 + 8);
    do {
      if (*plVar2 == 0) break;
      uVar4 = uVar4 + 1;
      plVar2 = plVar2 + 1;
    } while (uVar4 < *(ulonglong *)(param_1 + 0x10));
    if (uVar4 == 0x100) {
      return (undefined8 *)0x0;
    }
  }
  uVar5 = param_2 + 0xfU & 0xfffffffffffffff0;
  puVar3 = (undefined8 *)(**(code **)(*param_5 + 0x50))(param_5,0x68);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar3[1] = 0xffffffffffffffff;
  puVar3[2] = 0xffffffffffffffff;
  *(undefined4 *)(puVar3 + 3) = param_4;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = param_3;
  puVar3[4] = uVar5;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  *puVar3 = &PTR_FUN_144f88db8;
  cVar1 = FUN_142063ec0(puVar3);
  if (cVar1 == '\0') {
    (**(code **)*puVar3)(puVar3,1);
    return (undefined8 *)0x0;
  }
  puVar3[9] = uVar4;
  thunk_FUN_1432f4460(param_1 + 0x20,uVar4 << 0x18,param_2 + 0xfU >> 4);
  *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + uVar5;
  if (uVar4 != *(ulonglong *)(param_1 + 0x10)) {
    *(undefined8 **)(*(longlong *)(param_1 + 8) + uVar4 * 8) = puVar3;
    return puVar3;
  }
  uVar4 = *(ulonglong *)(param_1 + 0x10) + 1;
  if (uVar4 < *(ulonglong *)(param_1 + 0x10)) {
    uVar5 = uVar4;
    if (*(ulonglong *)(param_1 + 0x18) >> 1 <= uVar4) goto LAB_14206faad;
  }
  else {
    if (uVar4 <= *(ulonglong *)(param_1 + 0x18)) goto LAB_14206faad;
    uVar5 = (uVar4 >> 2) + uVar4;
  }
  FUN_14207a890(param_1 + 8,param_1 + 8,uVar5);
LAB_14206faad:
  *(ulonglong *)(param_1 + 0x10) = uVar4;
  *(undefined8 **)(*(longlong *)(param_1 + 8) + -8 + uVar4 * 8) = puVar3;
  return puVar3;
}



// FUNCTION 14206fb00 FUN_14206fb00 body=380 status=ok
// SIG undefined FUN_14206fb00(void)

undefined8 *
FUN_14206fb00(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
             longlong *param_5)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    plVar2 = *(longlong **)(param_1 + 8);
    do {
      if (*plVar2 == 0) break;
      uVar4 = uVar4 + 1;
      plVar2 = plVar2 + 1;
    } while (uVar4 < *(ulonglong *)(param_1 + 0x10));
    if (uVar4 == 0x100) {
      return (undefined8 *)0x0;
    }
  }
  uVar5 = param_2 + 0xfU & 0xfffffffffffffff0;
  puVar3 = (undefined8 *)(**(code **)(*param_5 + 0x50))(param_5,0x68);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar3[1] = 0xffffffffffffffff;
  puVar3[2] = 0xffffffffffffffff;
  *(undefined4 *)(puVar3 + 3) = param_4;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = param_3;
  puVar3[4] = uVar5;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  *puVar3 = &PTR_FUN_144f88d90;
  cVar1 = FUN_1420640b0(puVar3);
  if (cVar1 == '\0') {
    (**(code **)*puVar3)(puVar3,1);
    return (undefined8 *)0x0;
  }
  puVar3[9] = uVar4;
  thunk_FUN_1432f4460(param_1 + 0x20,uVar4 << 0x18,param_2 + 0xfU >> 4);
  *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + uVar5;
  if (uVar4 != *(ulonglong *)(param_1 + 0x10)) {
    *(undefined8 **)(*(longlong *)(param_1 + 8) + uVar4 * 8) = puVar3;
    return puVar3;
  }
  uVar4 = *(ulonglong *)(param_1 + 0x10) + 1;
  if (uVar4 < *(ulonglong *)(param_1 + 0x10)) {
    uVar5 = uVar4;
    if (*(ulonglong *)(param_1 + 0x18) >> 1 <= uVar4) goto LAB_14206fc2d;
  }
  else {
    if (uVar4 <= *(ulonglong *)(param_1 + 0x18)) goto LAB_14206fc2d;
    uVar5 = (uVar4 >> 2) + uVar4;
  }
  FUN_14207a890(param_1 + 8,param_1 + 8,uVar5);
LAB_14206fc2d:
  *(ulonglong *)(param_1 + 0x10) = uVar4;
  *(undefined8 **)(*(longlong *)(param_1 + 8) + -8 + uVar4 * 8) = puVar3;
  return puVar3;
}



// FUNCTION 14206fc80 FUN_14206fc80 body=86 status=ok
// SIG undefined FUN_14206fc80(void)

undefined8 * FUN_14206fc80(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),0x2c0,0);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1432d64d0(puVar1,*(undefined8 *)(param_1 + 0x10));
    *puVar1 = &PTR_FUN_144f89808;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14206fce0 FUN_14206fce0 body=218 status=ok
// SIG undefined FUN_14206fce0(void)

undefined8 FUN_14206fce0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  RefCountImpl *this;
  undefined4 local_res20;
  undefined4 local_res24;
  
  cVar2 = IsInRenderingThread();
  if ((cVar2 != '\0') && (param_2 != (longlong *)0x0)) {
    plVar3 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
    lVar1 = *plVar3;
    if (lVar1 != 0) {
      local_res24 = *(undefined4 *)(lVar1 + 100);
      local_res20 = *(undefined4 *)(lVar1 + 0x60);
      this = (RefCountImpl *)0x0;
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x260) + 0x28))
                        (*(longlong **)(param_1 + 0x260),&local_res20,2,1,0);
      if (*param_3 != 0) {
        this = (RefCountImpl *)
               (**(code **)(**(longlong **)(param_1 + 0x3360) + 0x108))
                         (*(longlong **)(param_1 + 0x3360),param_3);
      }
      FUN_14207c390(uVar4,param_2,0,0,this);
      if (this != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(this);
      }
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 14206fdc0 FUN_14206fdc0 body=220 status=ok
// SIG undefined FUN_14206fdc0(void)

undefined8 FUN_14206fdc0(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  RefCountImpl *this;
  undefined4 local_res20;
  undefined4 local_res24;
  
  cVar2 = IsInRenderingThread();
  if ((cVar2 != '\0') && (param_2 != (longlong *)0x0)) {
    plVar3 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
    lVar1 = *plVar3;
    if (lVar1 != 0) {
      local_res24 = *(undefined4 *)(lVar1 + 100);
      local_res20 = *(undefined4 *)(lVar1 + 0x60);
      this = (RefCountImpl *)0x0;
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x260) + 0x28))
                        (*(longlong **)(param_1 + 0x260),&local_res20,2,1,0);
      if (param_3 != '\0') {
        this = (RefCountImpl *)
               (**(code **)(**(longlong **)(param_1 + 0x3360) + 0x30))
                         (*(longlong **)(param_1 + 0x3360),&local_res20,0);
      }
      FUN_14207c390(uVar4,param_2,0,0,this);
      if (this != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(this);
      }
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 14206fea0 FUN_14206fea0 body=470 status=ok
// SIG undefined FUN_14206fea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14206fea0(longlong param_1,undefined **param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  RefCountImpl *this;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined **local_38;
  undefined8 local_30;
  undefined **local_28;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 == '\0') {
    return 0;
  }
  if (param_2 == (undefined **)0x0) {
    return 0;
  }
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
  local_res24 = *(undefined4 *)(*plVar2 + 100);
  local_res20 = *(undefined4 *)(*plVar2 + 0x60);
  cVar1 = FUN_141a90f50();
  this = (RefCountImpl *)0x0;
  if ((cVar1 == '\0') && (plVar2 = (longlong *)FUN_1428759d0(param_2), *plVar2 != 0)) {
    local_30 = 0;
    local_38 = &PTR__scalar_deleting_destructor__144f89878;
    local_28 = param_2;
    puVar3 = (undefined8 *)FUN_1428759d0(param_2);
    TRefCountPtr<FRHIIndexBuffer>::operator=(&local_30,*puVar3);
    TRefCountPtr<FRHIIndexBuffer>::operator=(&DAT_1464fadc8,local_30);
    _DAT_1464fadd0 = local_28;
    local_38 = &PTR_FUN_144dd5318;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_30);
    param_2 = &PTR_PTR_1464fadc0;
  }
  else {
    cVar1 = FUN_141a90f50();
    if (cVar1 == '\0') goto LAB_14206ffe4;
    lVar4 = FUN_142061020(&local_38,param_2);
    TRefCountPtr<FRHIIndexBuffer>::operator=(&DAT_1464fadb0,*(undefined8 *)(lVar4 + 8));
    _DAT_1464fadb8 = *(undefined8 *)(lVar4 + 0x10);
    local_38 = &PTR_FUN_144dd5318;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_30);
    param_2 = &PTR_PTR_1464fada8;
  }
  plVar2 = (longlong *)
           UE4Function_Private::TFunction_OwnedObject<<lambda_6ee2cf6eb29fb3eaf224d7c8f92aa15b>,0>::
           GetAddress(param_2);
  lVar4 = *plVar2;
  if (lVar4 == 0) {
    return 0;
  }
  local_res20 = *(undefined4 *)(lVar4 + 0x60);
  local_res24 = *(undefined4 *)(lVar4 + 100);
LAB_14206ffe4:
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x260) + 0x28))
                    (*(longlong **)(param_1 + 0x260),&local_res20,2,1,0);
  if (*param_3 != 0) {
    this = (RefCountImpl *)
           (**(code **)(**(longlong **)(param_1 + 0x3360) + 0x108))
                     (*(longlong **)(param_1 + 0x3360),param_3);
  }
  FUN_14207c390(uVar5,param_2,0,0,this);
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  return uVar5;
}



// FUNCTION 142070080 FUN_142070080 body=230 status=ok
// SIG undefined FUN_142070080(void)

longlong FUN_142070080(longlong param_1,longlong *param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 local_res20;
  undefined4 local_res24;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 == '\0') {
    return 0;
  }
  local_res20 = (undefined4)param_2[7];
  local_res24 = *(undefined4 *)((longlong)param_2 + 0x3c);
  plVar4 = *(longlong **)(param_1 + 0x260);
  lVar3 = *plVar4;
  uVar2 = (**(code **)(*param_2 + 0x20))(param_2);
  lVar3 = (**(code **)(lVar3 + 0x28))(plVar4,&local_res20,4,uVar2,param_2);
  plVar5 = (longlong *)0x0;
  plVar4 = plVar5;
  if (param_3 != '\0') {
    plVar4 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x260) + 0x38))
                       (*(longlong **)(param_1 + 0x260),lVar3 + 0x28,0);
    if (plVar4 != (longlong *)0x0) {
      plVar5 = (longlong *)(**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  FUN_14207c390(lVar3,0,param_2,plVar4,plVar5);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return lVar3;
}



// FUNCTION 142070170 FUN_142070170 body=225 status=ok
// SIG undefined FUN_142070170(void)

longlong * FUN_142070170(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  cVar1 = IsInRenderingThread();
  if ((cVar1 == '\0') ||
     (plVar2 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x260) + 0x30))
                         (*(longlong **)(param_1 + 0x260),param_2), plVar2 == (longlong *)0x0)) {
    plVar2 = (longlong *)0x0;
  }
  else if ((plVar2[4] == 0) || ((param_3 != '\0' && (*(longlong *)(plVar2[4] + 8) == 0)))) {
    plVar4 = (longlong *)0x0;
    plVar3 = plVar4;
    if ((param_3 != '\0') &&
       (plVar3 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 0x260) + 0x38))
                           (*(longlong **)(param_1 + 0x260),plVar2 + 5,1), plVar3 != (longlong *)0x0
       )) {
      plVar4 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3);
    }
    uVar5 = (**(code **)(*plVar2 + 0x18))(plVar2);
    FUN_14207c390(plVar2,0,uVar5,plVar3,plVar4);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return plVar2;
}



// FUNCTION 142070270 FUN_142070270 body=1052 status=ok
// SIG undefined FUN_142070270(void)

void FUN_142070270(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  
  FUN_1432f62d0(param_1 + 0x16);
  FUN_1432f60e0(param_1 + 0x16,param_1 + 0x36);
  FUN_1432f60e0(param_1 + 0x16,param_1 + 0x2d);
  plVar6 = (longlong *)param_1[0x42];
  local_60 = &local_68;
  local_58 = &local_68;
  plVar11 = param_1 + 0x40;
  if (param_1 == (longlong *)0xfffffffffffffdf8) {
    plVar11 = (longlong *)0x0;
  }
LAB_1420702f4:
  do {
    plVar12 = plVar6;
    plVar6 = local_58;
    if (plVar12 == plVar11) {
      if (local_58 != &local_68) {
        local_60[2] = param_1[0x42];
        plVar6[1] = (longlong)(param_1 + 0x40);
        *(longlong **)(param_1[0x42] + 8) = local_60;
        param_1[0x42] = (longlong)plVar6;
      }
      uVar8 = param_1[7];
      if ((ulonglong)param_1[0x25] < (ulonglong)param_1[7]) {
        uVar8 = param_1[0x25];
      }
      local_60 = (longlong *)
                 (((param_1[0x3a] - (uVar8 + param_1[0x22] >> 2)) + param_1[0x31]) -
                 (uVar8 + param_1[0x22]));
      if (param_1[6] < (longlong)local_60) {
LAB_142070418:
        plVar6 = param_1 + 0x3d;
        if (param_1 + 0x3e == (longlong *)0x0) {
          plVar6 = (longlong *)0x0;
        }
        if (((longlong *)param_1[0x3f] != plVar6) && (param_1[6] < (longlong)local_60)) {
          plVar6 = (longlong *)param_1[0x3e];
          *(longlong *)(plVar6[1] + 0x10) = plVar6[2];
          *(longlong *)(plVar6[2] + 8) = plVar6[1];
          plVar6[1] = -1;
          plVar6[2] = -1;
          local_60 = (longlong *)((longlong)local_60 - plVar6[4]);
          iVar5 = (**(code **)(*plVar6 + 0x20))(plVar6);
          if (iVar5 == 0) {
            local_res18 = 0x168;
            local_res20 = 0x188;
            local_68 = 0x150;
          }
          else {
            local_res18 = 0x1b0;
            local_res20 = 0x1d0;
            local_68 = 0x198;
          }
          plVar12 = param_1 + 0x17;
          local_res10 = 6;
          bVar3 = false;
          plVar11 = param_1 + 0x18;
LAB_1420704f0:
          plVar9 = plVar12 + -1;
          if (plVar12 == (longlong *)0x0) {
            plVar9 = (longlong *)0x0;
          }
          do {
            plVar10 = (longlong *)*plVar11;
            while( true ) {
              if (plVar10 == plVar9) {
                plVar11 = plVar11 + 3;
                plVar12 = plVar12 + 3;
                local_res10 = local_res10 + -1;
                if (local_res10 != 0) goto LAB_1420704f0;
                lVar7 = plVar6[4];
                lVar1 = plVar6[9];
                FUN_1432f4260(local_res18 + (longlong)param_1,lVar1 << 0x18,lVar7 + 0xfU >> 4);
                lVar2 = *(longlong *)(local_68 + (longlong)param_1);
                *(longlong *)(local_res20 + (longlong)param_1) =
                     *(longlong *)(local_res20 + (longlong)param_1) - lVar7;
                *(undefined8 *)(lVar2 + lVar1 * 8) = 0;
                if (bVar3) {
                  plVar6[1] = param_1[0x41];
                  plVar6[2] = (longlong)(param_1 + 0x40);
                  *(longlong **)(param_1[0x41] + 0x10) = plVar6;
                  param_1[0x41] = (longlong)plVar6;
                }
                else {
                  (**(code **)*plVar6)(plVar6,1);
                }
                goto LAB_142070418;
              }
              if (((longlong *)plVar10[0xd] == plVar6) || ((longlong *)plVar10[0xe] == plVar6))
              break;
              plVar10 = (longlong *)plVar10[2];
            }
            lVar7 = (**(code **)(*param_1 + 0x40))(param_1,plVar10,0,0);
            if (lVar7 == 0) {
              bVar3 = true;
              if ((longlong *)plVar10[0xd] == plVar6) {
                FUN_1432f4460(param_1 + 0x2d,
                              (ulonglong)plVar10[0xf] >> 4 | ((longlong *)plVar10[0xd])[9] << 0x18);
                plVar10[0xd] = 0;
              }
              if ((longlong *)plVar10[0xe] == plVar6) {
                FUN_1432f4460(param_1 + 0x36,
                              (ulonglong)plVar10[0x11] >> 4 | ((longlong *)plVar10[0xe])[9] << 0x18)
                ;
                plVar10[0xe] = 0;
              }
            }
          } while( true );
        }
      }
      return;
    }
    plVar6 = (longlong *)plVar12[2];
    plVar9 = (longlong *)param_1[0x27];
    *(longlong **)(plVar12[1] + 0x10) = plVar6;
    *(longlong *)(plVar12[2] + 8) = plVar12[1];
    plVar12[1] = -1;
    plVar12[2] = -1;
    for (; plVar9 != param_1 + 0x25; plVar9 = (longlong *)plVar9[2]) {
      if (((((longlong *)plVar9[0xd] == plVar12) || ((longlong *)plVar9[0xe] == plVar12)) &&
          (lVar7 = plVar9[3], lVar7 != 0)) &&
         (((*(char *)(lVar7 + 0x18) != '\0' && (*(longlong *)(lVar7 + 0x10) != 0)) &&
          (cVar4 = FUN_1432c1c90(*(longlong *)(lVar7 + 0x10),0), cVar4 != '\0')))) {
        plVar12[2] = (longlong)local_58;
        plVar12[1] = (longlong)&local_68;
        local_58[1] = (longlong)plVar12;
        local_58 = plVar12;
        goto LAB_1420702f4;
      }
    }
    (**(code **)*plVar12)(plVar12,1);
  } while( true );
}



// FUNCTION 142070690 FUN_142070690 body=527 status=ok
// SIG undefined FUN_142070690(void)

longlong FUN_142070690(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  DWORD DVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar8 = DAT_146acea48;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  lVar10 = 0;
  if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar6 = GetCurrentThreadId();
    lVar7 = 4;
    if (DVar6 != DAT_1468c21c0) goto LAB_1420706e7;
  }
  lVar7 = lVar10;
LAB_1420706e7:
  iVar1 = *(int *)(lVar7 + lVar8);
  lVar8 = *(longlong *)(param_2 + 0x18);
  if (((((lVar8 != 0) && (*(char *)(lVar8 + 0x18) != '\0')) && (*(longlong *)(lVar8 + 0x10) != 0))
      && (cVar5 = FUN_1432c1c90(*(longlong *)(lVar8 + 0x10),0), cVar5 != '\0')) &&
     (((iVar1 != 1 || (cVar5 = IsInRenderingThread(), cVar5 == '\0')) ||
      ((*(char *)(*(longlong *)(param_2 + 0x18) + 0x18) != '\0' &&
       ((lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x10), lVar8 != 0 &&
        (cVar5 = FUN_1432c1cc0(lVar8,0), cVar5 == '\0')))))))) {
    FUN_1432f5d90(param_2,param_4,0);
    *(undefined4 *)(param_2 + 0x40) = 5;
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x138);
    lVar8 = param_1 + 0x128;
    if (param_1 == -0x130) {
      lVar8 = lVar10;
    }
    *(longlong *)(param_2 + 8) = lVar8;
    *(longlong *)(*(longlong *)(param_1 + 0x138) + 8) = param_2;
    *(longlong *)(param_1 + 0x138) = param_2;
    *(longlong *)(param_1 + 0x140) = *(longlong *)(param_1 + 0x140) + *(longlong *)(param_2 + 0x50);
    return 0;
  }
  lVar8 = *(longlong *)(param_2 + 0x90);
  uVar2 = *(ulonglong *)(param_2 + 0x88);
  lVar7 = *(longlong *)(param_2 + 0x70);
  lVar9 = *(longlong *)(param_2 + 0x68);
  uVar3 = *(ulonglong *)(param_2 + 0x78);
  uVar4 = *(ulonglong *)(param_2 + 0x80);
  *(longlong *)(param_1 + 0x1e0) = *(longlong *)(param_1 + 0x1e0) + (uVar4 & 0xffffffff);
  FUN_1432f5d90(param_2,param_4,1);
  lVar11 = lVar10;
  if (lVar9 != 0) {
    lVar9 = FUN_1432f4460(param_1 + 0x168,*(longlong *)(lVar9 + 0x48) << 0x18 | uVar3 >> 4,
                          uVar4 + 0xf >> 4);
    lVar11 = lVar9 << 4;
  }
  if (lVar7 != 0) {
    lVar10 = FUN_1432f4460(param_1 + 0x1b0,*(longlong *)(lVar7 + 0x48) << 0x18 | uVar2 >> 4,
                           lVar8 + 0xfU >> 4);
    lVar10 = lVar10 << 4;
  }
  if (param_3 == 0) {
    return lVar10 + lVar11;
  }
  if (param_1 + 0x168 == param_3) {
    lVar10 = lVar11;
  }
  return lVar10;
}



// FUNCTION 1420708a0 FUN_1420708a0 body=305 status=ok
// SIG undefined FUN_1420708a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420708a0(PSRWLOCK param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_98 [32];
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  AcquireSRWLockExclusive(param_1);
  puVar1 = param_1[1].Ptr;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  if (*(int *)(puVar1 + 8) != 0) {
    puVar4 = (undefined8 *)puVar1[6];
    if ((undefined8 *)puVar1[6] == (undefined8 *)0x0) {
      puVar4 = puVar1 + 2;
    }
    if (puVar4 != (undefined8 *)0x0) {
      plVar2 = (longlong *)(**(code **)*puVar4)(puVar4,local_68);
      (**(code **)(*plVar2 + 8))(plVar2);
      local_78 = (code *)*puVar1;
      goto LAB_14207091b;
    }
  }
  local_78 = AK::MemoryMgr::StartProfileThreadUsage;
LAB_14207091b:
  local_28 = *(undefined4 *)(puVar1 + 10);
  FUN_14207a6c0(param_1 + 1,0,1,1);
  ReleaseSRWLockExclusive(param_1);
  if (local_38 != 0) {
    plVar2 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar2 = local_48;
    }
    if (plVar2 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
      (*local_78)(uVar3);
    }
    if (local_38 != 0) {
      plVar2 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar2 = local_48;
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,0);
      }
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1420709e0 FUN_1420709e0 body=1132 status=ok
// SIG undefined FUN_1420709e0(void)

void FUN_1420709e0(longlong param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined **ppuVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  float *pfVar11;
  uint uVar12;
  void *_Dst;
  float local_res8 [2];
  int local_res10;
  uint local_res18;
  uint local_res20;
  float *local_78 [7];
  
  lVar2 = *(longlong *)(param_1 + 0x1000);
  lVar10 = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  local_res10 = param_2;
  iVar4 = FUN_1420789a0(param_1,param_1 + 0x1008,0xc);
  if (iVar4 != 0) {
    FUN_142055c30(param_1,param_1 + 0x1008,0xc,
                  *(longlong *)
                   (*(longlong *)
                     (*(longlong *)(lVar2 + 0x1b0) * 0x340 + -0x340 + *(longlong *)(lVar2 + 0x1a8))
                   + 0x20) + 0x60,1,0,0);
  }
  do {
    if (*(char *)(lVar10 + 0x18 + param_1) != '\0') {
      lVar2 = *(longlong *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x1000) + 0x1b0) * 0x340 + -0x340 +
                 *(longlong *)(*(longlong *)(param_1 + 0x1000) + 0x1a8)) + 0x20);
      if (*(char *)(lVar2 + 0x88) == '\0') {
        local_res8[0] = 1.0;
      }
      else {
        local_res8[0] = 1.0 / *(float *)(lVar2 + 0x60);
      }
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1028) + 0x10);
      if (*(short *)(lVar2 + lVar10 * 10) < 0) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1010) + 0x10);
        if (*(short *)(lVar2 + lVar10 * 10) < 0) goto LAB_142070e01;
        lVar3 = *(longlong *)(param_1 + 0x1008);
        local_res20 = (uint)*(ushort *)(lVar3 + 0xca + lVar10 * 6);
        bVar1 = *(byte *)(lVar2 + 9 + lVar10 * 10);
        local_res18 = (uint)*(ushort *)(lVar3 + 200 + lVar10 * 6);
        if (bVar1 == 0) {
          uVar12 = (uint)*(short *)(lVar2 + 6 + lVar10 * 10);
        }
        else {
          uVar12 = (uint)*(byte *)(lVar2 + 4 + lVar10 * 10) * (uint)bVar1 * param_2;
        }
        uVar8 = 4;
        if (4 < uVar12) {
          uVar8 = uVar12;
        }
        pfVar11 = (float *)(param_1 +
                           ((ulonglong)(uint)(int)*(short *)(lVar2 + 2 + lVar10 * 10) + 0x18) * 4);
        if (lVar10 == 0xc) {
          uVar8 = 1;
          pfVar11 = local_res8;
        }
        if (*(char *)(param_1 + 0x10a8) != '\0') {
          uVar8 = (uint)(*(ushort *)(lVar3 + 0xcc + lVar10 * 6) >> 2);
        }
        lVar2 = *(longlong *)(param_1 + 0x10a0);
        uVar8 = uVar8 * 4;
        local_78[0] = *(float **)(param_1 + 0x1018);
        _Dst = (void *)(*(longlong *)(lVar2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        uVar6 = (longlong)_Dst + (longlong)(int)uVar8;
        if (*(ulonglong *)(lVar2 + 0x38) < uVar6) {
          FMemStackBase::AllocateNewChunk(lVar2 + 0x30,uVar8 + 0x10);
          _Dst = (void *)(*(longlong *)(lVar2 + 0x30) + 0xfU & 0xfffffffffffffff0);
          uVar6 = (longlong)_Dst + (longlong)(int)uVar8;
        }
        *(ulonglong *)(lVar2 + 0x30) = uVar6;
        _guard_xfg_dispatch_icall_nop(_Dst,pfVar11,(ulonglong)uVar8);
        puVar9 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar9 + 6;
        if (*(undefined8 **)(lVar2 + 0x38) < puVar7) {
          FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x38);
          puVar9 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar9 + 6;
        }
        *(undefined8 **)(lVar2 + 0x30) = puVar7;
        *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
        **(undefined8 **)(lVar2 + 8) = puVar9;
        *(undefined8 **)(lVar2 + 8) = puVar9 + 1;
        puVar9[1] = 0;
        ppuVar5 = &PTR_LAB_143f4d340;
        *(uint *)(puVar9 + 5) = uVar8;
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x1020);
        uVar12 = (uint)*(short *)(lVar2 + 6 + lVar10 * 10);
        if (uVar12 < 4) {
          uVar12 = 4;
        }
        local_res18 = (uint)*(ushort *)(lVar3 + 200 + lVar10 * 6);
        local_res20 = (uint)*(ushort *)(lVar3 + 0xca + lVar10 * 6);
        if (*(char *)(param_1 + 0x10a8) != '\0') {
          uVar12 = (uint)(*(ushort *)(lVar3 + 0xcc + lVar10 * 6) >> 2);
        }
        pfVar11 = (float *)(param_1 +
                           ((ulonglong)(uint)(int)*(short *)(lVar2 + 2 + lVar10 * 10) + 0x18) * 4);
        if (lVar10 == 0xc) {
          uVar12 = 1;
          pfVar11 = local_res8;
        }
        else if ((uVar12 == 0x10) && (lVar10 - 7U < 2)) {
          local_78[0] = pfVar11;
          FUN_14207e2e0(local_78,4);
        }
        lVar2 = *(longlong *)(param_1 + 0x10a0);
        uVar12 = uVar12 * 4;
        local_78[0] = *(float **)(param_1 + 0x1030);
        _Dst = (void *)(*(longlong *)(lVar2 + 0x30) + 0xfU & 0xfffffffffffffff0);
        uVar6 = (longlong)_Dst + (longlong)(int)uVar12;
        if (*(ulonglong *)(lVar2 + 0x38) < uVar6) {
          FMemStackBase::AllocateNewChunk(lVar2 + 0x30,uVar12 + 0x10);
          _Dst = (void *)(*(longlong *)(lVar2 + 0x30) + 0xfU & 0xfffffffffffffff0);
          uVar6 = (longlong)_Dst + (longlong)(int)uVar12;
        }
        *(ulonglong *)(lVar2 + 0x30) = uVar6;
        _guard_xfg_dispatch_icall_nop(_Dst,pfVar11,(ulonglong)uVar12);
        puVar9 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar9 + 6;
        if (*(undefined8 **)(lVar2 + 0x38) < puVar7) {
          FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x38);
          puVar9 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar9 + 6;
        }
        *(undefined8 **)(lVar2 + 0x30) = puVar7;
        *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
        **(undefined8 **)(lVar2 + 8) = puVar9;
        *(undefined8 **)(lVar2 + 8) = puVar9 + 1;
        puVar9[1] = 0;
        ppuVar5 = &PTR_LAB_143f594b0;
        *(uint *)(puVar9 + 5) = uVar12;
      }
      *puVar9 = ppuVar5;
      puVar9[2] = local_78[0];
      *(uint *)(puVar9 + 4) = local_res18;
      puVar9[3] = _Dst;
      *(uint *)((longlong)puVar9 + 0x24) = local_res20;
      param_2 = local_res10;
    }
LAB_142070e01:
    lVar10 = lVar10 + 1;
    if (0x1b < lVar10) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      return;
    }
  } while( true );
}



// FUNCTION 142070e50 FUN_142070e50 body=79 status=ok
// SIG undefined FUN_142070e50(void)

void FUN_142070e50(PSRWLOCK param_1)

{
  int iVar1;
  
  AcquireSRWLockShared(param_1);
  iVar1 = *(int *)&param_1[2].Ptr;
  ReleaseSRWLockShared(param_1);
  while (iVar1 != 0) {
    FUN_1420708a0(param_1);
    AcquireSRWLockShared(param_1);
    iVar1 = *(int *)&param_1[2].Ptr;
    ReleaseSRWLockShared(param_1);
  }
  return;
}



// FUNCTION 142070ea0 FUN_142070ea0 body=1608 status=ok
// SIG undefined FUN_142070ea0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142070ea0(longlong *param_1)

{
  int *piVar1;
  PSRWLOCK pRVar2;
  int iVar3;
  char cVar4;
  DWORD DVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  PSRWLOCK pRVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_2e8 [32];
  undefined2 local_2c8;
  longlong *local_2b8;
  longlong *local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  longlong *local_290;
  LARGE_INTEGER local_288;
  LARGE_INTEGER local_280;
  LARGE_INTEGER local_278;
  LARGE_INTEGER local_270;
  undefined1 *local_268 [2];
  undefined1 local_258 [32];
  undefined8 local_238;
  undefined4 local_228;
  undefined1 *local_218 [2];
  undefined1 local_208 [32];
  undefined8 local_1e8;
  undefined4 local_1d8;
  longlong *local_1c8;
  longlong *local_1c0;
  undefined1 local_1b8 [16];
  longlong local_1a8 [4];
  longlong *local_188;
  int local_178;
  undefined1 *local_168 [2];
  longlong local_158 [4];
  longlong *local_138;
  int local_128;
  LARGE_INTEGER local_118 [24];
  longlong local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  DVar5 = GetCurrentThreadId();
  if (*(DWORD *)(param_1 + 9) == DVar5) {
    if ((param_1[8] == 0) || ((double)param_1[6] == 0.0)) {
      QueryPerformanceCounter(&local_280);
      *(LARGE_INTEGER *)(param_1 + 8) = local_280;
    }
    else {
      QueryPerformanceCounter(&local_288);
      lVar7 = param_1[8];
      dVar12 = (double)FGenericPlatformTime::GetSecondsPerCycle64();
      dVar13 = (double)(local_288.QuadPart - lVar7);
      if (local_288.QuadPart - lVar7 < 0) {
        dVar13 = dVar13 + 1.8446744073709552e+19;
      }
      dVar12 = (double)param_1[7] - dVar12 * dVar13 * 1000.0;
      if (0.0 <= dVar12) {
        dVar13 = (double)param_1[6];
        if (dVar12 <= (double)param_1[6]) {
          dVar13 = dVar12;
        }
        ((LARGE_INTEGER *)(param_1 + 8))->QuadPart = (LONGLONG)local_288;
        param_1[7] = (longlong)dVar13;
      }
      else {
        ((LARGE_INTEGER *)(param_1 + 8))->QuadPart = (LONGLONG)local_288;
        param_1[7] = 0;
      }
    }
    pRVar2 = (PSRWLOCK)(param_1 + 3);
    do {
      AcquireSRWLockShared((PSRWLOCK)(param_1 + 10));
      lVar7 = param_1[0xc];
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 10));
      if ((int)lVar7 == 0) {
        AcquireSRWLockShared(pRVar2);
        lVar7 = param_1[5];
        ReleaseSRWLockShared(pRVar2);
        if ((int)lVar7 == 0) {
          if (((double)param_1[6] != 0.0) && (param_1[8] != 0)) {
            QueryPerformanceCounter(&local_278);
            lVar7 = param_1[8];
            dVar12 = (double)FGenericPlatformTime::GetSecondsPerCycle64();
            dVar13 = (double)(local_278.QuadPart - lVar7);
            if (local_278.QuadPart - lVar7 < 0) {
              dVar13 = dVar13 + 1.8446744073709552e+19;
            }
            dVar13 = (double)param_1[7] - dVar12 * dVar13 * 1000.0;
            dVar12 = 0.0;
            if ((0.0 <= dVar13) && (dVar12 = (double)param_1[6], dVar13 <= (double)param_1[6])) {
              dVar12 = dVar13;
            }
            param_1[7] = (longlong)dVar12;
          }
          param_1[8] = 0;
          return;
        }
      }
      AcquireSRWLockShared((PSRWLOCK)(param_1 + 10));
      lVar7 = param_1[0xc];
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 10));
      pRVar11 = (PSRWLOCK)(param_1 + 10);
      if ((int)lVar7 == 0) {
        pRVar11 = pRVar2;
      }
      FUN_1420708a0(pRVar11);
    } while( true );
  }
  cVar4 = FUN_142078bd0(param_1);
  if (cVar4 != '\0') {
    plVar10 = (longlong *)0x0;
    local_238 = 0;
    local_228 = 0;
    puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_258);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[1] = param_1;
      *puVar6 = &PTR_FUN_143f77b70;
    }
    local_2a8 = 0;
    local_268[0] = &LAB_1420642d0;
    local_2a0 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a8,0);
    local_2c8 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_2a8,10,"FlushTask");
    FUN_140cdf730(local_118,&local_2a8,local_268);
    QueryPerformanceCounter(&local_270);
    local_118[0] = local_270;
    lVar7 = operator_new(0x18);
    plVar8 = plVar10;
    if (lVar7 != 0) {
      plVar8 = (longlong *)FUN_140cdf810(lVar7);
    }
    plVar9 = (longlong *)operator_new(0x18);
    if (plVar9 != (longlong *)0x0) {
      *(undefined4 *)(plVar9 + 1) = 1;
      *plVar9 = (longlong)&PTR_DestroyObject_1444f8938;
      *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
      plVar9[2] = (longlong)plVar8;
      plVar10 = plVar9;
    }
    local_2b8 = plVar8;
    local_2b0 = plVar10;
    SharedPointerInternals::EnableSharedFromThis(&local_2b8,plVar8,plVar8);
    *(undefined1 *)(local_2b8 + 2) = 1;
    local_290 = (longlong *)local_2b8[1];
    local_58 = *local_2b8;
    if (local_290 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_290 + 1) = (int)local_290[1] + 1;
      UNLOCK();
    }
    local_298 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_50,&local_290);
    plVar10 = local_290;
    if (local_290 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_290 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_290)(local_290);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_290 + 8))(local_290,1);
        }
      }
    }
    local_138 = (longlong *)0x0;
    local_128 = 0;
    puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_158);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &PTR_FUN_1444f8620;
      puVar6[1] = local_118;
    }
    local_168[0] = &LAB_140cee980;
    local_1c8 = local_2b8;
    local_1c0 = local_2b0;
    if (local_2b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2b0 + 1) = (int)local_2b0[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_1b8,local_168);
    local_1e8 = 0;
    local_1d8 = 0;
    puVar6 = (undefined8 *)FUN_140438ef0(0x70,local_208);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &PTR_CopyToEmptyStorage_1444f8578;
      puVar6[2] = local_1c8;
      puVar6[3] = local_1c0;
      if (local_1c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
        UNLOCK();
      }
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar6 + 4,local_1b8);
    }
    local_218[0] = &LAB_140cee8d0;
    if (local_178 != 0) {
      plVar10 = local_1a8;
      if (local_188 != (longlong *)0x0) {
        plVar10 = local_188;
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (local_188 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar10 = local_1c0;
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_1c0 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1c0)(local_1c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    if (local_128 != 0) {
      plVar10 = local_158;
      if (local_138 != (longlong *)0x0) {
        plVar10 = local_138;
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (local_138 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar10 = local_2b0;
    if (local_2b0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_2b0 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_2b0)(local_2b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    FUN_14207a090(param_1,local_218);
    (**(code **)(*param_1 + 8))(param_1);
    if (local_58 != 0) {
      while ((local_58 != 0 && (*(char *)(local_58 + 0x58) == '\0'))) {
        cVar4 = FUN_1415ad720(&DAT_1468e2448);
        if ((cVar4 == '\0') &&
           ((DAT_1468c21ae != '\0' && (DVar5 = GetCurrentThreadId(), DVar5 != DAT_1468c21c0)))) {
          lVar7 = FUN_14203ca70();
          if (lVar7 != 0) {
            pRVar2 = (PSRWLOCK)(lVar7 + 0x50);
            AcquireSRWLockShared(pRVar2);
            iVar3 = *(int *)(lVar7 + 0x60);
            ReleaseSRWLockShared(pRVar2);
            while (iVar3 != 0) {
              FUN_1420708a0(pRVar2);
              AcquireSRWLockShared(pRVar2);
              iVar3 = *(int *)(lVar7 + 0x60);
              ReleaseSRWLockShared(pRVar2);
            }
          }
        }
        else {
          FUN_142036de0();
        }
        if (local_58 == 0) break;
        if (*(char *)(local_58 + 0x58) == '\0') {
          (**(code **)(**(longlong **)(local_58 + 0x50) + 0x20))
                    (*(longlong **)(local_58 + 0x50),5,0);
        }
      }
    }
    FUN_142078bd0(param_1);
    FUN_140ce1dc0(local_118);
  }
  return;
}



// FUNCTION 1420714f0 FUN_1420714f0 body=83 status=ok
// SIG undefined FUN_1420714f0(void)

void FUN_1420714f0(longlong param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  
  SRWLock = (PSRWLOCK)(param_1 + 0x50);
  AcquireSRWLockShared(SRWLock);
  iVar1 = *(int *)(param_1 + 0x60);
  ReleaseSRWLockShared(SRWLock);
  while (iVar1 != 0) {
    FUN_1420708a0(SRWLock);
    AcquireSRWLockShared(SRWLock);
    iVar1 = *(int *)(param_1 + 0x60);
    ReleaseSRWLockShared(SRWLock);
  }
  return;
}



// FUNCTION 142071550 FUN_142071550 body=177 status=ok
// SIG undefined FUN_142071550(void)

longlong * FUN_142071550(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar1 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x18));
    if (lVar1 != 0) {
      lVar1 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x18));
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        lVar1 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x18));
        if (*(longlong *)(*(longlong *)(lVar1 + 0x60) + 0x30) != 0) {
          lVar1 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x18));
          lVar1 = (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x60) + 0x30) + 8))();
          if (lVar1 != 0) {
            lVar1 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x18));
            lVar1 = (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x60) + 0x30) + 8))();
            *param_2 = lVar1;
            goto LAB_1420715d5;
          }
        }
      }
    }
    *param_2 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x70);
    *param_2 = lVar1;
LAB_1420715d5:
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 142071610 FUN_142071610 body=122 status=ok
// SIG undefined FUN_142071610(void)

undefined8 * FUN_142071610(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  
  puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x70) + 0x58);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar3 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))
         ) {
        LOCK();
        bVar5 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar5) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar5) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
          return puVar3;
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  return puVar3;
}



// FUNCTION 142071690 FUN_142071690 body=54 status=ok
// SIG undefined FUN_142071690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142071690(undefined8 *param_1)

{
  AcquireSRWLockShared((PSRWLOCK)&DAT_146ace8b0);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_146ace8b0);
  *param_1 = _DAT_146ace8b8;
  return param_1;
}



// FUNCTION 1420716d0 FUN_1420716d0 body=7174 status=ok
// SIG undefined FUN_1420716d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1420716d0(undefined4 param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int local_res10 [2];
  undefined8 local_res18;
  undefined *local_18;
  undefined4 local_10;
  
  if (param_2 == 0) {
    switch(param_1) {
    case 1:
    case 0x4f:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205c4a0(&local_res18,uVar3);
      return local_res18;
    case 2:
    case 0x50:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205c520(&local_res18,uVar3);
      return local_res18;
    case 3:
    case 0x51:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205c5a0(&local_res18,uVar3);
      return local_res18;
    case 4:
    case 0x52:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205c620(&local_res18,uVar3);
      return local_res18;
    case 5:
    case 0x53:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205c6a0(&local_res18,uVar3);
      return local_res18;
    case 6:
    case 0x54:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205c720(&local_res18,uVar3);
      return local_res18;
    case 7:
    case 0x55:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205c7a0(&local_res18,uVar3);
      return local_res18;
    case 8:
    case 0x56:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205c820(&local_res18,uVar3);
      return local_res18;
    case 9:
    case 0x57:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205c8a0(&local_res18,uVar3);
      return local_res18;
    case 10:
    case 0x58:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205c920(&local_res18,uVar3);
      return local_res18;
    case 0xb:
    case 0x59:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205eea0(&local_res18,uVar3);
      return local_res18;
    case 0xc:
    case 0x5a:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205f720(&local_res18,uVar3);
      return local_res18;
    case 0xd:
    case 0x5b:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205fea0(&local_res18,uVar3);
      return local_res18;
    case 0xe:
    case 0x5c:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205ff20(&local_res18,uVar3);
      return local_res18;
    case 0xf:
    case 0x5d:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205ffa0(&local_res18,uVar3);
      return local_res18;
    case 0x10:
    case 0x5e:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205c9a0(&local_res18,uVar3);
      return local_res18;
    case 0x11:
    case 0x5f:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205ca20(&local_res18,uVar3);
      return local_res18;
    case 0x12:
    case 0x60:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205caa0(&local_res18,uVar3);
      return local_res18;
    case 0x13:
    case 0x61:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205cb20(&local_res18,uVar3);
      return local_res18;
    case 0x14:
    case 0x62:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205cba0(&local_res18,uVar3);
      return local_res18;
    case 0x15:
    case 99:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205cc20(&local_res18,uVar3);
      return local_res18;
    case 0x16:
    case 100:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205cca0(&local_res18,uVar3);
      return local_res18;
    case 0x17:
    case 0x65:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205cd20(&local_res18,uVar3);
      return local_res18;
    case 0x18:
    case 0x66:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205cda0(&local_res18,uVar3);
      return local_res18;
    case 0x19:
    case 0x67:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205ce20(&local_res18,uVar3);
      return local_res18;
    case 0x1a:
    case 0x68:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205cea0(&local_res18,uVar3);
      return local_res18;
    case 0x1b:
    case 0x69:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205cf20(&local_res18,uVar3);
      return local_res18;
    case 0x1c:
    case 0x6a:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205cfa0(&local_res18,uVar3);
      return local_res18;
    case 0x1d:
    case 0x6b:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205d020(&local_res18,uVar3);
      return local_res18;
    case 0x1e:
    case 0x6c:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205d0a0(&local_res18,uVar3);
      return local_res18;
    case 0x1f:
    case 0x6d:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205d120(&local_res18,uVar3);
      return local_res18;
    case 0x20:
    case 0x6e:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205d1a0(&local_res18,uVar3);
      return local_res18;
    case 0x21:
    case 0x6f:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205d220(&local_res18,uVar3);
      return local_res18;
    case 0x22:
    case 0x70:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205d2a0(&local_res18,uVar3);
      return local_res18;
    case 0x23:
    case 0x71:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205d320(&local_res18,uVar3);
      return local_res18;
    case 0x24:
    case 0x72:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205d3a0(&local_res18,uVar3);
      return local_res18;
    case 0x25:
    case 0x73:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205d420(&local_res18,uVar3);
      return local_res18;
    case 0x26:
    case 0x74:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205d4a0(&local_res18,uVar3);
      return local_res18;
    case 0x27:
    case 0x75:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205d520(&local_res18,uVar3);
      return local_res18;
    case 0x28:
    case 0x76:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205d5a0(&local_res18,uVar3);
      return local_res18;
    case 0x29:
    case 0x77:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205d620(&local_res18,uVar3);
      return local_res18;
    case 0x2a:
    case 0x78:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205d6a0(&local_res18,uVar3);
      return local_res18;
    case 0x2b:
    case 0x79:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205d720(&local_res18,uVar3);
      return local_res18;
    case 0x2c:
    case 0x7a:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205d7a0(&local_res18,uVar3);
      return local_res18;
    case 0x2d:
    case 0x7b:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205d820(&local_res18,uVar3);
      return local_res18;
    case 0x2e:
    case 0x7c:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205d8a0(&local_res18,uVar3);
      return local_res18;
    case 0x2f:
    case 0x7d:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205d920(&local_res18,uVar3);
      return local_res18;
    case 0x30:
    case 0x7e:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205d9a0(&local_res18,uVar3);
      return local_res18;
    case 0x31:
    case 0x7f:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205da20(&local_res18,uVar3);
      return local_res18;
    case 0x32:
    case 0x80:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205daa0(&local_res18,uVar3);
      return local_res18;
    case 0x33:
    case 0x81:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205db20(&local_res18,uVar3);
      return local_res18;
    case 0x34:
    case 0x82:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205dba0(&local_res18,uVar3);
      return local_res18;
    case 0x35:
    case 0x83:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205dc20(&local_res18,uVar3);
      return local_res18;
    case 0x36:
    case 0x84:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205dca0(&local_res18,uVar3);
      return local_res18;
    case 0x37:
    case 0x85:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205dd20(&local_res18,uVar3);
      return local_res18;
    case 0x38:
    case 0x86:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205dda0(&local_res18,uVar3);
      return local_res18;
    case 0x39:
    case 0x87:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205de20(&local_res18,uVar3);
      return local_res18;
    case 0x3a:
    case 0x88:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205dea0(&local_res18,uVar3);
      return local_res18;
    case 0x3b:
    case 0x89:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205df20(&local_res18,uVar3);
      return local_res18;
    case 0x3c:
    case 0x8a:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205dfa0(&local_res18,uVar3);
      return local_res18;
    case 0x3d:
    case 0x8b:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205e020(&local_res18,uVar3);
      return local_res18;
    case 0x3e:
    case 0x8c:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205e0a0(&local_res18,uVar3);
      return local_res18;
    case 0x3f:
    case 0x8d:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205e120(&local_res18,uVar3);
      return local_res18;
    case 0x40:
    case 0x8e:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205e1a0(&local_res18,uVar3);
      return local_res18;
    case 0x41:
    case 0x8f:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205e220(&local_res18,uVar3);
      return local_res18;
    case 0x42:
    case 0x90:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205e2a0(&local_res18,uVar3);
      return local_res18;
    case 0x43:
    case 0x91:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205e320(&local_res18,uVar3);
      return local_res18;
    case 0x44:
    case 0x92:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205e3a0(&local_res18,uVar3);
      return local_res18;
    case 0x45:
    case 0x93:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205e420(&local_res18,uVar3);
      return local_res18;
    case 0x46:
    case 0x94:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205e4a0(&local_res18,uVar3);
      return local_res18;
    case 0x47:
    case 0x95:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205e520(&local_res18,uVar3);
      return local_res18;
    case 0x48:
    case 0x96:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205e5a0(&local_res18,uVar3);
      return local_res18;
    case 0x49:
    case 0x97:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205e620(&local_res18,uVar3);
      return local_res18;
    case 0x4a:
    case 0x98:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205e6a0(&local_res18,uVar3);
      return local_res18;
    case 0x4b:
    case 0x99:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205e720(&local_res18,uVar3);
      return local_res18;
    case 0x4c:
    case 0x9a:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205e7a0(&local_res18,uVar3);
      return local_res18;
    case 0x4d:
    case 0x9b:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205e820(&local_res18,uVar3);
      return local_res18;
    case 0x4e:
    case 0x9c:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205e8a0(&local_res18,uVar3);
      return local_res18;
    case 0x9d:
    case 0xa4:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205e920(&local_res18,uVar3);
      return local_res18;
    case 0x9e:
    case 0xa5:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205e9a0(&local_res18,uVar3);
      return local_res18;
    case 0x9f:
    case 0xa6:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205ea20(&local_res18,uVar3);
      return local_res18;
    case 0xa0:
    case 0xa7:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205eaa0(&local_res18,uVar3);
      return local_res18;
    case 0xa1:
    case 0xa8:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205eb20(&local_res18,uVar3);
      return local_res18;
    case 0xa2:
    case 0xa9:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205eba0(&local_res18,uVar3);
      return local_res18;
    case 0xa3:
    case 0xaa:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205ec20(&local_res18,uVar3);
      return local_res18;
    case 0xab:
      local_18 = &DAT_146adb320;
      break;
    case 0xac:
    case 0xce:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205eca0(&local_res18,uVar3);
      return local_res18;
    case 0xad:
    case 0xcf:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205ed20(&local_res18,uVar3);
      return local_res18;
    case 0xae:
    case 0xd0:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205eda0(&local_res18,uVar3);
      return local_res18;
    case 0xaf:
    case 0xd1:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205ee20(&local_res18,uVar3);
      return local_res18;
    case 0xb0:
    case 0xd2:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205ef20(&local_res18,uVar3);
      return local_res18;
    case 0xb1:
    case 0xd3:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205efa0(&local_res18,uVar3);
      return local_res18;
    case 0xb2:
    case 0xd4:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205f020(&local_res18,uVar3);
      return local_res18;
    case 0xb3:
    case 0xd5:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205f0a0(&local_res18,uVar3);
      return local_res18;
    case 0xb4:
    case 0xd6:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205f120(&local_res18,uVar3);
      return local_res18;
    case 0xb5:
    case 0xd7:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205f1a0(&local_res18,uVar3);
      return local_res18;
    case 0xb6:
    case 0xd8:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205f220(&local_res18,uVar3);
      return local_res18;
    case 0xb7:
    case 0xd9:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205f2a0(&local_res18,uVar3);
      return local_res18;
    case 0xb8:
    case 0xda:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205f320(&local_res18,uVar3);
      return local_res18;
    case 0xb9:
    case 0xdb:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205f3a0(&local_res18,uVar3);
      return local_res18;
    case 0xba:
    case 0xdc:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205f420(&local_res18,uVar3);
      return local_res18;
    case 0xbb:
    case 0xdd:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205f4a0(&local_res18,uVar3);
      return local_res18;
    case 0xbc:
    case 0xde:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205f520(&local_res18,uVar3);
      return local_res18;
    case 0xbd:
    case 0xdf:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205f5a0(&local_res18,uVar3);
      return local_res18;
    case 0xbe:
    case 0xe0:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205f620(&local_res18,uVar3);
      return local_res18;
    case 0xbf:
    case 0xe1:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205f6a0(&local_res18,uVar3);
      return local_res18;
    case 0xc0:
    case 0xe2:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205f7a0(&local_res18,uVar3);
      return local_res18;
    case 0xc1:
    case 0xe3:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205f820(&local_res18,uVar3);
      return local_res18;
    case 0xc2:
    case 0xe4:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205f8a0(&local_res18,uVar3);
      return local_res18;
    case 0xc3:
    case 0xe5:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205f920(&local_res18,uVar3);
      return local_res18;
    case 0xc4:
    case 0xe6:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205f9a0(&local_res18,uVar3);
      return local_res18;
    case 0xc5:
    case 0xe7:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205fa20(&local_res18,uVar3);
      return local_res18;
    case 0xc6:
    case 0xe8:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205faa0(&local_res18,uVar3);
      return local_res18;
    case 199:
    case 0xe9:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205fb20(&local_res18,uVar3);
      return local_res18;
    case 200:
    case 0xea:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205fba0(&local_res18,uVar3);
      return local_res18;
    case 0xc9:
    case 0xeb:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205fc20(&local_res18,uVar3);
      return local_res18;
    case 0xca:
    case 0xec:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205fca0(&local_res18,uVar3);
      return local_res18;
    case 0xcb:
    case 0xed:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205fd20(&local_res18,uVar3);
      return local_res18;
    case 0xcc:
    case 0xee:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205fda0(&local_res18,uVar3);
      return local_res18;
    case 0xcd:
    case 0xef:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_14205fe20(&local_res18,uVar3);
      return local_res18;
    case 0xf0:
      local_18 = &DAT_146ade110;
      break;
    case 0xf1:
      local_18 = &DAT_146ade260;
      break;
    case 0xf2:
      local_18 = &DAT_146ade3b0;
      break;
    case 0xf3:
      local_18 = &DAT_146ade500;
      break;
    case 0xf4:
      local_18 = &DAT_146ade650;
      break;
    case 0xf5:
      local_18 = &DAT_146ade7a0;
      break;
    case 0xf6:
      local_18 = &DAT_146ade8f0;
      break;
    case 0xf7:
      local_18 = &DAT_146adea40;
      break;
    case 0xf8:
      local_18 = &DAT_146adeb90;
      break;
    case 0xf9:
      local_18 = &DAT_146adece0;
      break;
    case 0xfa:
      local_18 = &DAT_146adee30;
      break;
    case 0xfb:
      local_18 = &DAT_146adef80;
      break;
    case 0xfc:
      local_18 = &DAT_146adf0d0;
      break;
    case 0xfd:
      local_18 = &DAT_146adf220;
      break;
    case 0xfe:
      local_18 = &DAT_146adf370;
      break;
    case 0xff:
      local_18 = &DAT_146adf4c0;
      break;
    case 0x100:
      local_18 = &DAT_146adf610;
      break;
    case 0x101:
      local_18 = &DAT_146adf760;
      break;
    case 0x102:
      local_18 = &DAT_146adf8b0;
      break;
    case 0x103:
      local_18 = &DAT_146adfa00;
      break;
    case 0x104:
      local_18 = &DAT_146adfb50;
      break;
    case 0x105:
      local_18 = &DAT_146adfca0;
      break;
    case 0x106:
      local_18 = &DAT_146adfdf0;
      break;
    case 0x107:
      local_18 = &DAT_146adff40;
      break;
    case 0x108:
      local_18 = &DAT_146ae0090;
      break;
    case 0x109:
      local_18 = &DAT_146ae01e0;
      break;
    case 0x10a:
      local_18 = &DAT_146ae0330;
      break;
    case 0x10b:
      local_18 = &DAT_146ae0480;
      break;
    case 0x10c:
      local_18 = &DAT_146ae05d0;
      break;
    case 0x10d:
      local_18 = &DAT_146ae0720;
      break;
    case 0x10e:
      local_18 = &DAT_146ae0870;
      break;
    case 0x10f:
      local_18 = &DAT_146ae09c0;
      break;
    case 0x110:
      local_18 = &DAT_146ae0b10;
      break;
    case 0x111:
      local_18 = &DAT_146ae0c60;
      break;
    case 0x112:
      local_18 = &DAT_146ae0db0;
      break;
    case 0x113:
      local_18 = &DAT_146ae0f00;
      break;
    case 0x114:
      local_18 = &DAT_146ae1050;
      break;
    case 0x115:
      local_18 = &DAT_146ae11a0;
      break;
    case 0x116:
      local_18 = &DAT_146ae12f0;
      break;
    case 0x117:
      local_18 = &DAT_146ae1440;
      break;
    case 0x118:
      local_18 = &DAT_146ae1590;
      break;
    case 0x119:
      local_18 = &DAT_146ae16e0;
      break;
    case 0x11a:
      local_18 = &DAT_146ae1830;
      break;
    case 0x11b:
      local_18 = &DAT_146ae1980;
      break;
    case 0x11c:
      local_18 = &DAT_146ae1ad0;
      break;
    case 0x11d:
      local_18 = &DAT_146ae1c20;
      break;
    case 0x11e:
      local_18 = &DAT_146ae1d70;
      break;
    case 0x11f:
      local_18 = &DAT_146ae1ec0;
      break;
    case 0x120:
      local_18 = &DAT_146ae2010;
      break;
    case 0x121:
      local_18 = &DAT_146ae2160;
      break;
    case 0x122:
      local_18 = &DAT_146ae22b0;
      break;
    case 0x123:
      local_18 = &DAT_146ae2400;
      break;
    case 0x124:
      local_18 = &DAT_146ae2550;
      break;
    case 0x125:
      local_18 = &DAT_146ae26a0;
      break;
    case 0x126:
      local_18 = &DAT_146ae27f0;
      break;
    case 0x127:
      local_18 = &DAT_146ae2940;
      break;
    case 0x128:
      local_18 = &DAT_146ae2a90;
      break;
    case 0x129:
      local_18 = &DAT_146ae2be0;
      break;
    case 0x12a:
      local_18 = &DAT_146ae2d30;
      break;
    case 299:
      local_18 = &DAT_146ae2e80;
      break;
    case 300:
      local_18 = &DAT_146ae2fd0;
      break;
    case 0x12d:
      local_18 = &DAT_146ae3120;
      break;
    case 0x12e:
      local_18 = &DAT_146ae3270;
      break;
    case 0x12f:
      local_18 = &DAT_146ae33c0;
      break;
    case 0x130:
      local_18 = &DAT_146ae3510;
      break;
    case 0x131:
      local_18 = &DAT_146ae3660;
      break;
    case 0x132:
      local_18 = &DAT_146ae37b0;
      break;
    case 0x133:
      local_18 = &DAT_146ae3900;
      break;
    case 0x134:
      local_18 = &DAT_146ae3a50;
      break;
    case 0x135:
      local_18 = &DAT_146ae3ba0;
      break;
    case 0x136:
      local_18 = &DAT_146ae3cf0;
      break;
    case 0x137:
      local_18 = &DAT_146ae3e40;
      break;
    case 0x138:
      local_18 = &DAT_146ae3f90;
      break;
    case 0x139:
      local_18 = &DAT_146ae40e0;
      break;
    default:
      goto switchD_14207170b_default;
    }
    local_10 = 0;
    lVar1 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,local_res10,&local_18);
    if (local_res10[0] != -1) {
      lVar1 = (longlong)local_res10[0] * 0x20 + *(longlong *)(lVar1 + 0x38);
      puVar2 = (undefined8 *)(lVar1 + 0x10);
      if (lVar1 == 0) {
        puVar2 = (undefined8 *)0x0;
      }
      return *puVar2;
    }
    return _DAT_00000000;
  }
switchD_14207170b_default:
  return 0;
}



// FUNCTION 1420737c0 FUN_1420737c0 body=2267 status=ok
// SIG undefined FUN_1420737c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1420737c0(undefined4 param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int local_res10 [2];
  undefined8 local_res18;
  undefined *local_18;
  undefined4 local_10;
  
  if (param_2 == 0) {
    switch(param_1) {
    case 1:
    case 2:
    case 0x5a:
    case 0x5b:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_142060020(&local_res18,uVar3);
      return local_res18;
    case 3:
    case 4:
    case 0x5c:
    case 0x5d:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_1420600a0(&local_res18,uVar3);
      return local_res18;
    case 5:
    case 0x5e:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_142060120(&local_res18,uVar3);
      return local_res18;
    case 6:
    case 0x5f:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_1420601a0(&local_res18,uVar3);
      return local_res18;
    case 7:
      local_18 = &DAT_146acef90;
      break;
    case 8:
      local_18 = &DAT_146acf0e0;
      break;
    case 9:
      local_18 = &DAT_146acf230;
      break;
    case 10:
      local_18 = &DAT_146acf380;
      break;
    case 0xb:
    case 0xc:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_142060f20(&local_res18,uVar3);
      return local_res18;
    case 0xd:
      local_18 = &DAT_146acf620;
      break;
    case 0xe:
    case 0xf:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_142060fa0(&local_res18,uVar3);
      return local_res18;
    case 0x10:
      local_18 = &DAT_146acf8c0;
      break;
    case 0x11:
    case 0x12:
    case 0x60:
    case 0x61:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_142060220(&local_res18,uVar3);
      return local_res18;
    case 0x13:
    case 0x14:
    case 0x62:
    case 99:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_1420602a0(&local_res18,uVar3);
      return local_res18;
    case 0x15:
    case 100:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_142060320(&local_res18,uVar3);
      return local_res18;
    case 0x16:
    case 0x65:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_1420603a0(&local_res18,uVar3);
      return local_res18;
    case 0x17:
      local_18 = &DAT_146acff50;
      break;
    case 0x18:
      local_18 = &DAT_146ad00a0;
      break;
    case 0x19:
      local_18 = &DAT_146ad01f0;
      break;
    case 0x1a:
      local_18 = &DAT_146ad0340;
      break;
    case 0x1b:
    case 0x1c:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_142060420(&local_res18,uVar3);
      return local_res18;
    case 0x1d:
      local_18 = &DAT_146ad05e0;
      break;
    case 0x1e:
    case 0x1f:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_1420604a0(&local_res18,uVar3);
      return local_res18;
    case 0x20:
      local_18 = &DAT_146ad0880;
      break;
    case 0x21:
    case 0x22:
    case 0x66:
    case 0x67:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_142060520(&local_res18,uVar3);
      return local_res18;
    case 0x23:
    case 0x24:
    case 0x68:
    case 0x69:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_1420605a0(&local_res18,uVar3);
      return local_res18;
    case 0x25:
    case 0x6a:
    case 0x72:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_142060620(&local_res18,uVar3);
      return local_res18;
    case 0x26:
    case 0x6b:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_1420606a0(&local_res18,uVar3);
      return local_res18;
    case 0x27:
      local_18 = &DAT_146ad0f10;
      break;
    case 0x28:
      local_18 = &DAT_146ad1060;
      break;
    case 0x29:
      local_18 = &DAT_146ad11b0;
      break;
    case 0x2a:
      local_18 = &DAT_146ad1300;
      break;
    case 0x2b:
    case 0x2c:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_142060720(&local_res18,uVar3);
      return local_res18;
    case 0x2d:
      local_18 = &DAT_146ad15a0;
      break;
    case 0x2e:
    case 0x2f:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_1420607a0(&local_res18,uVar3);
      return local_res18;
    case 0x30:
      local_18 = &DAT_146ad1840;
      break;
    case 0x31:
    case 0x32:
    case 0x6c:
    case 0x6d:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_142060820(&local_res18,uVar3);
      return local_res18;
    case 0x33:
    case 0x34:
    case 0x6e:
    case 0x6f:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_1420608a0(&local_res18,uVar3);
      return local_res18;
    case 0x35:
    case 0x70:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_142060920(&local_res18,uVar3);
      return local_res18;
    case 0x36:
    case 0x71:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_1420609a0(&local_res18,uVar3);
      return local_res18;
    case 0x37:
      local_18 = &DAT_146ad1ed0;
      break;
    case 0x38:
      local_18 = &DAT_146ad2020;
      break;
    case 0x39:
      local_18 = &DAT_146ad2170;
      break;
    case 0x3a:
      local_18 = &DAT_146ad22c0;
      break;
    case 0x3b:
    case 0x3c:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_142060a20(&local_res18,uVar3);
      return local_res18;
    case 0x3d:
      local_18 = &DAT_146ad2560;
      break;
    case 0x3e:
    case 0x3f:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_142060aa0(&local_res18,uVar3);
      return local_res18;
    case 0x40:
      local_18 = &DAT_146ad2800;
      break;
    case 0x41:
      local_18 = &DAT_146ad2950;
      break;
    case 0x42:
    case 0x43:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_142060b20(&local_res18,uVar3);
      return local_res18;
    case 0x44:
    case 0x45:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_142060ba0(&local_res18,uVar3);
      return local_res18;
    case 0x46:
      local_18 = &DAT_146ad2d40;
      break;
    case 0x47:
      local_18 = &DAT_146ad2e90;
      break;
    case 0x48:
    case 0x49:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_142060c20(&local_res18,uVar3);
      return local_res18;
    case 0x4a:
    case 0x4b:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_142060ca0(&local_res18,uVar3);
      return local_res18;
    case 0x4c:
      local_18 = &DAT_146ad3280;
      break;
    case 0x4d:
      local_18 = &DAT_146ad33d0;
      break;
    case 0x4e:
    case 0x4f:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_142060d20(&local_res18,uVar3);
      return local_res18;
    case 0x50:
    case 0x51:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_142060da0(&local_res18,uVar3);
      return local_res18;
    case 0x52:
      local_18 = &DAT_146ad37c0;
      break;
    case 0x53:
      local_18 = &DAT_146ad3910;
      break;
    case 0x54:
    case 0x55:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_142060e20(&local_res18,uVar3);
      return local_res18;
    case 0x56:
    case 0x57:
      uVar3 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
      FUN_142060ea0(&local_res18,uVar3);
      return local_res18;
    case 0x58:
      local_18 = &DAT_146ad3d00;
      break;
    case 0x59:
      local_18 = &DAT_146ad3e50;
      break;
    case 0x73:
      local_18 = &DAT_146ad3fa0;
      break;
    case 0x74:
      local_18 = &DAT_146ad40f0;
      break;
    case 0x75:
      local_18 = &DAT_146ad4240;
      break;
    default:
      goto switchD_1420737f9_default;
    }
    local_10 = 0;
    lVar1 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,local_res10,&local_18);
    if (local_res10[0] != -1) {
      lVar1 = (longlong)local_res10[0] * 0x20 + *(longlong *)(lVar1 + 0x38);
      puVar2 = (undefined8 *)(lVar1 + 0x10);
      if (lVar1 == 0) {
        puVar2 = (undefined8 *)0x0;
      }
      return *puVar2;
    }
    return _DAT_00000000;
  }
switchD_1420737f9_default:
  return 0;
}



// FUNCTION 142074270 FUN_142074270 body=10078 status=ok
// SIG undefined FUN_142074270(void)

undefined8 FUN_142074270(int param_1)

{
  if (param_1 < 0x102) {
    if (param_1 == 0x101) {
      return 0x55;
    }
    switch(param_1) {
    case 1:
      return 1;
    case 2:
      return 2;
    case 3:
      return 3;
    case 4:
      return 4;
    case 5:
      return 5;
    case 6:
      return 6;
    case 9:
      return 7;
    case 10:
      return 8;
    case 0xb:
      return 9;
    case 0xc:
      return 10;
    case 0xd:
      return 0xb;
    case 0xe:
      return 0xc;
    case 0x11:
      return 0xd;
    case 0x12:
      return 0xe;
    case 0x13:
      return 0xf;
    case 0x14:
      return 0x10;
    case 0x15:
      return 0x11;
    case 0x16:
      return 0x12;
    case 0x19:
      return 0x13;
    case 0x1a:
      return 0x14;
    case 0x1b:
      return 0x15;
    case 0x1c:
      return 0x16;
    case 0x1d:
      return 0x17;
    case 0x1e:
      return 0x18;
    case 0x21:
      return 0x19;
    case 0x22:
      return 0x1a;
    case 0x23:
      return 0x1b;
    case 0x24:
      return 0x1c;
    case 0x25:
      return 0x1d;
    case 0x26:
      return 0x1e;
    case 0x29:
      return 0x1f;
    case 0x2a:
      return 0x20;
    case 0x2b:
      return 0x21;
    case 0x2c:
      return 0x22;
    case 0x2d:
      return 0x23;
    case 0x2e:
      return 0x24;
    case 0x31:
      return 0x25;
    case 0x32:
      return 0x26;
    case 0x33:
      return 0x27;
    case 0x34:
      return 0x28;
    case 0x35:
      return 0x29;
    case 0x36:
      return 0x2a;
    case 0x39:
      return 0x2b;
    case 0x3a:
      return 0x2c;
    case 0x3b:
      return 0x2d;
    case 0x3c:
      return 0x2e;
    case 0x3d:
      return 0x2f;
    case 0x3e:
      return 0x30;
    case 0x41:
      return 0x31;
    case 0x43:
      return 0x32;
    case 0x45:
      return 0x33;
    case 0x49:
      return 0x34;
    case 0x4b:
      return 0x35;
    case 0x4d:
      return 0x36;
    case 0x51:
      return 0x37;
    case 0x53:
      return 0x38;
    case 0x55:
      return 0x39;
    case 0x59:
      return 0x3a;
    case 0x5b:
      return 0x3b;
    case 0x5d:
      return 0x3c;
    case 0x61:
      return 0x3d;
    case 99:
      return 0x3e;
    case 0x65:
      return 0x3f;
    case 0x69:
      return 0x40;
    case 0x6b:
      return 0x41;
    case 0x6d:
      return 0x42;
    case 0x71:
      return 0x43;
    case 0x73:
      return 0x44;
    case 0x75:
      return 0x45;
    case 0x79:
      return 0x46;
    case 0x7b:
      return 0x47;
    case 0x7d:
      return 0x48;
    case 0x81:
      return 0x49;
    case 0x83:
      return 0x4a;
    case 0x85:
      return 0x4b;
    case 0x89:
      return 0x4c;
    case 0x8b:
      return 0x4d;
    case 0x8d:
      return 0x4e;
    case 0xa1:
      return 0x4f;
    case 0xa3:
      return 0x50;
    case 0xa5:
      return 0x51;
    case 0xa9:
      return 0x52;
    case 0xab:
      return 0x53;
    case 0xad:
      return 0x54;
    }
  }
  else if (param_1 < 0x202) {
    if (param_1 == 0x201) {
      return 0x79;
    }
    switch(param_1) {
    case 0x102:
      return 0x56;
    case 0x103:
      return 0x57;
    case 0x104:
      return 0x58;
    case 0x105:
      return 0x59;
    case 0x106:
      return 0x5a;
    case 0x109:
      return 0x5b;
    case 0x10a:
      return 0x5c;
    case 0x10b:
      return 0x5d;
    case 0x10c:
      return 0x5e;
    case 0x10d:
      return 0x5f;
    case 0x10e:
      return 0x60;
    case 0x121:
      return 0x61;
    case 0x122:
      return 0x62;
    case 0x123:
      return 99;
    case 0x124:
      return 100;
    case 0x125:
      return 0x65;
    case 0x126:
      return 0x66;
    case 0x129:
      return 0x67;
    case 0x12a:
      return 0x68;
    case 299:
      return 0x69;
    case 300:
      return 0x6a;
    case 0x12d:
      return 0x6b;
    case 0x12e:
      return 0x6c;
    case 0x141:
      return 0x6d;
    case 0x143:
      return 0x6e;
    case 0x145:
      return 0x6f;
    case 0x149:
      return 0x70;
    case 0x14b:
      return 0x71;
    case 0x14d:
      return 0x72;
    case 0x161:
      return 0x73;
    case 0x163:
      return 0x74;
    case 0x165:
      return 0x75;
    case 0x169:
      return 0x76;
    case 0x16b:
      return 0x77;
    case 0x16d:
      return 0x78;
    }
  }
  else if (param_1 < 0x302) {
    if (param_1 == 0x301) {
      return 0xcd;
    }
    switch(param_1) {
    case 0x202:
      return 0x7a;
    case 0x203:
      return 0x7b;
    case 0x204:
      return 0x7c;
    case 0x205:
      return 0x7d;
    case 0x206:
      return 0x7e;
    case 0x209:
      return 0x7f;
    case 0x20a:
      return 0x80;
    case 0x20b:
      return 0x81;
    case 0x20c:
      return 0x82;
    case 0x20d:
      return 0x83;
    case 0x20e:
      return 0x84;
    case 0x211:
      return 0x85;
    case 0x212:
      return 0x86;
    case 0x213:
      return 0x87;
    case 0x214:
      return 0x88;
    case 0x215:
      return 0x89;
    case 0x216:
      return 0x8a;
    case 0x219:
      return 0x8b;
    case 0x21a:
      return 0x8c;
    case 0x21b:
      return 0x8d;
    case 0x21c:
      return 0x8e;
    case 0x21d:
      return 0x8f;
    case 0x21e:
      return 0x90;
    case 0x221:
      return 0x91;
    case 0x222:
      return 0x92;
    case 0x223:
      return 0x93;
    case 0x224:
      return 0x94;
    case 0x225:
      return 0x95;
    case 0x226:
      return 0x96;
    case 0x229:
      return 0x97;
    case 0x22a:
      return 0x98;
    case 0x22b:
      return 0x99;
    case 0x22c:
      return 0x9a;
    case 0x22d:
      return 0x9b;
    case 0x22e:
      return 0x9c;
    case 0x231:
      return 0x9d;
    case 0x232:
      return 0x9e;
    case 0x233:
      return 0x9f;
    case 0x234:
      return 0xa0;
    case 0x235:
      return 0xa1;
    case 0x236:
      return 0xa2;
    case 0x239:
      return 0xa3;
    case 0x23a:
      return 0xa4;
    case 0x23b:
      return 0xa5;
    case 0x23c:
      return 0xa6;
    case 0x23d:
      return 0xa7;
    case 0x23e:
      return 0xa8;
    case 0x241:
      return 0xa9;
    case 0x243:
      return 0xaa;
    case 0x245:
      return 0xab;
    case 0x249:
      return 0xac;
    case 0x24b:
      return 0xad;
    case 0x24d:
      return 0xae;
    case 0x251:
      return 0xaf;
    case 0x253:
      return 0xb0;
    case 0x255:
      return 0xb1;
    case 0x259:
      return 0xb2;
    case 0x25b:
      return 0xb3;
    case 0x25d:
      return 0xb4;
    case 0x261:
      return 0xb5;
    case 0x263:
      return 0xb6;
    case 0x265:
      return 0xb7;
    case 0x269:
      return 0xb8;
    case 0x26b:
      return 0xb9;
    case 0x26d:
      return 0xba;
    case 0x271:
      return 0xbb;
    case 0x273:
      return 0xbc;
    case 0x275:
      return 0xbd;
    case 0x279:
      return 0xbe;
    case 0x27b:
      return 0xbf;
    case 0x27d:
      return 0xc0;
    case 0x281:
      return 0xc1;
    case 0x283:
      return 0xc2;
    case 0x285:
      return 0xc3;
    case 0x289:
      return 0xc4;
    case 0x28b:
      return 0xc5;
    case 0x28d:
      return 0xc6;
    case 0x2a1:
      return 199;
    case 0x2a3:
      return 200;
    case 0x2a5:
      return 0xc9;
    case 0x2a9:
      return 0xca;
    case 0x2ab:
      return 0xcb;
    case 0x2ad:
      return 0xcc;
    }
  }
  else if (param_1 < 0x402) {
    if (param_1 == 0x401) {
      return 0xf1;
    }
    switch(param_1) {
    case 0x302:
      return 0xce;
    case 0x303:
      return 0xcf;
    case 0x304:
      return 0xd0;
    case 0x305:
      return 0xd1;
    case 0x306:
      return 0xd2;
    case 0x309:
      return 0xd3;
    case 0x30a:
      return 0xd4;
    case 0x30b:
      return 0xd5;
    case 0x30c:
      return 0xd6;
    case 0x30d:
      return 0xd7;
    case 0x30e:
      return 0xd8;
    case 0x321:
      return 0xd9;
    case 0x322:
      return 0xda;
    case 0x323:
      return 0xdb;
    case 0x324:
      return 0xdc;
    case 0x325:
      return 0xdd;
    case 0x326:
      return 0xde;
    case 0x329:
      return 0xdf;
    case 0x32a:
      return 0xe0;
    case 0x32b:
      return 0xe1;
    case 0x32c:
      return 0xe2;
    case 0x32d:
      return 0xe3;
    case 0x32e:
      return 0xe4;
    case 0x341:
      return 0xe5;
    case 0x343:
      return 0xe6;
    case 0x345:
      return 0xe7;
    case 0x349:
      return 0xe8;
    case 0x34b:
      return 0xe9;
    case 0x34d:
      return 0xea;
    case 0x361:
      return 0xeb;
    case 0x363:
      return 0xec;
    case 0x365:
      return 0xed;
    case 0x369:
      return 0xee;
    case 0x36b:
      return 0xef;
    case 0x36d:
      return 0xf0;
    }
  }
  else if (param_1 < 0x502) {
    if (param_1 == 0x501) {
      return 0x139;
    }
    switch(param_1) {
    case 0x402:
      return 0xf2;
    case 0x403:
      return 0xf3;
    case 0x404:
      return 0xf4;
    case 0x405:
      return 0xf5;
    case 0x406:
      return 0xf6;
    case 0x409:
      return 0xf7;
    case 0x40a:
      return 0xf8;
    case 0x40b:
      return 0xf9;
    case 0x40c:
      return 0xfa;
    case 0x40d:
      return 0xfb;
    case 0x40e:
      return 0xfc;
    case 0x411:
      return 0xfd;
    case 0x412:
      return 0xfe;
    case 0x413:
      return 0xff;
    case 0x414:
      return 0x100;
    case 0x415:
      return 0x101;
    case 0x416:
      return 0x102;
    case 0x419:
      return 0x103;
    case 0x41a:
      return 0x104;
    case 0x41b:
      return 0x105;
    case 0x41c:
      return 0x106;
    case 0x41d:
      return 0x107;
    case 0x41e:
      return 0x108;
    case 0x421:
      return 0x109;
    case 0x422:
      return 0x10a;
    case 0x423:
      return 0x10b;
    case 0x424:
      return 0x10c;
    case 0x425:
      return 0x10d;
    case 0x426:
      return 0x10e;
    case 0x429:
      return 0x10f;
    case 0x42a:
      return 0x110;
    case 0x42b:
      return 0x111;
    case 0x42c:
      return 0x112;
    case 0x42d:
      return 0x113;
    case 0x42e:
      return 0x114;
    case 0x431:
      return 0x115;
    case 0x432:
      return 0x116;
    case 0x433:
      return 0x117;
    case 0x434:
      return 0x118;
    case 0x435:
      return 0x119;
    case 0x436:
      return 0x11a;
    case 0x439:
      return 0x11b;
    case 0x43a:
      return 0x11c;
    case 0x43b:
      return 0x11d;
    case 0x43c:
      return 0x11e;
    case 0x43d:
      return 0x11f;
    case 0x43e:
      return 0x120;
    case 0x441:
      return 0x121;
    case 0x443:
      return 0x122;
    case 0x445:
      return 0x123;
    case 0x449:
      return 0x124;
    case 1099:
      return 0x125;
    case 0x44d:
      return 0x126;
    case 0x451:
      return 0x127;
    case 0x453:
      return 0x128;
    case 0x455:
      return 0x129;
    case 0x459:
      return 0x12a;
    case 0x45b:
      return 299;
    case 0x45d:
      return 300;
    case 0x461:
      return 0x12d;
    case 0x463:
      return 0x12e;
    case 0x465:
      return 0x12f;
    case 0x469:
      return 0x130;
    case 0x46b:
      return 0x131;
    case 0x46d:
      return 0x132;
    case 0x471:
      return 0x133;
    case 0x473:
      return 0x134;
    case 0x475:
      return 0x135;
    case 0x479:
      return 0x136;
    case 0x47b:
      return 0x137;
    case 0x47d:
      return 0x138;
    }
  }
  else if (param_1 < 0x802) {
    if (param_1 == 0x801) {
      return 0x15d;
    }
    switch(param_1) {
    case 0x502:
      return 0x13a;
    case 0x503:
      return 0x13b;
    case 0x504:
      return 0x13c;
    case 0x505:
      return 0x13d;
    case 0x506:
      return 0x13e;
    case 0x509:
      return 0x13f;
    case 0x50a:
      return 0x140;
    case 0x50b:
      return 0x141;
    case 0x50c:
      return 0x142;
    case 0x50d:
      return 0x143;
    case 0x50e:
      return 0x144;
    case 0x521:
      return 0x145;
    case 0x522:
      return 0x146;
    case 0x523:
      return 0x147;
    case 0x524:
      return 0x148;
    case 0x525:
      return 0x149;
    case 0x526:
      return 0x14a;
    case 0x529:
      return 0x14b;
    case 0x52a:
      return 0x14c;
    case 0x52b:
      return 0x14d;
    case 0x52c:
      return 0x14e;
    case 0x52d:
      return 0x14f;
    case 0x52e:
      return 0x150;
    case 0x541:
      return 0x151;
    case 0x543:
      return 0x152;
    case 0x545:
      return 0x153;
    case 0x549:
      return 0x154;
    case 0x54b:
      return 0x155;
    case 0x54d:
      return 0x156;
    case 0x561:
      return 0x157;
    case 0x563:
      return 0x158;
    case 0x565:
      return 0x159;
    case 0x569:
      return 0x15a;
    case 0x56b:
      return 0x15b;
    case 0x56d:
      return 0x15c;
    }
  }
  else if (param_1 < 0x902) {
    if (param_1 == 0x901) {
      return 0x1b1;
    }
    switch(param_1) {
    case 0x802:
      return 0x15e;
    case 0x803:
      return 0x15f;
    case 0x804:
      return 0x160;
    case 0x805:
      return 0x161;
    case 0x806:
      return 0x162;
    case 0x809:
      return 0x163;
    case 0x80a:
      return 0x164;
    case 0x80b:
      return 0x165;
    case 0x80c:
      return 0x166;
    case 0x80d:
      return 0x167;
    case 0x80e:
      return 0x168;
    case 0x811:
      return 0x169;
    case 0x812:
      return 0x16a;
    case 0x813:
      return 0x16b;
    case 0x814:
      return 0x16c;
    case 0x815:
      return 0x16d;
    case 0x816:
      return 0x16e;
    case 0x819:
      return 0x16f;
    case 0x81a:
      return 0x170;
    case 0x81b:
      return 0x171;
    case 0x81c:
      return 0x172;
    case 0x81d:
      return 0x173;
    case 0x81e:
      return 0x174;
    case 0x821:
      return 0x175;
    case 0x822:
      return 0x176;
    case 0x823:
      return 0x177;
    case 0x824:
      return 0x178;
    case 0x825:
      return 0x179;
    case 0x826:
      return 0x17a;
    case 0x829:
      return 0x17b;
    case 0x82a:
      return 0x17c;
    case 0x82b:
      return 0x17d;
    case 0x82c:
      return 0x17e;
    case 0x82d:
      return 0x17f;
    case 0x82e:
      return 0x180;
    case 0x831:
      return 0x181;
    case 0x832:
      return 0x182;
    case 0x833:
      return 0x183;
    case 0x834:
      return 0x184;
    case 0x835:
      return 0x185;
    case 0x836:
      return 0x186;
    case 0x839:
      return 0x187;
    case 0x83a:
      return 0x188;
    case 0x83b:
      return 0x189;
    case 0x83c:
      return 0x18a;
    case 0x83d:
      return 0x18b;
    case 0x83e:
      return 0x18c;
    case 0x841:
      return 0x18d;
    case 0x843:
      return 0x18e;
    case 0x845:
      return 399;
    case 0x849:
      return 400;
    case 0x84b:
      return 0x191;
    case 0x84d:
      return 0x192;
    case 0x851:
      return 0x193;
    case 0x853:
      return 0x194;
    case 0x855:
      return 0x195;
    case 0x859:
      return 0x196;
    case 0x85b:
      return 0x197;
    case 0x85d:
      return 0x198;
    case 0x861:
      return 0x199;
    case 0x863:
      return 0x19a;
    case 0x865:
      return 0x19b;
    case 0x869:
      return 0x19c;
    case 0x86b:
      return 0x19d;
    case 0x86d:
      return 0x19e;
    case 0x871:
      return 0x19f;
    case 0x873:
      return 0x1a0;
    case 0x875:
      return 0x1a1;
    case 0x879:
      return 0x1a2;
    case 0x87b:
      return 0x1a3;
    case 0x87d:
      return 0x1a4;
    case 0x881:
      return 0x1a5;
    case 0x883:
      return 0x1a6;
    case 0x885:
      return 0x1a7;
    case 0x889:
      return 0x1a8;
    case 0x88b:
      return 0x1a9;
    case 0x88d:
      return 0x1aa;
    case 0x8a1:
      return 0x1ab;
    case 0x8a3:
      return 0x1ac;
    case 0x8a5:
      return 0x1ad;
    case 0x8a9:
      return 0x1ae;
    case 0x8ab:
      return 0x1af;
    case 0x8ad:
      return 0x1b0;
    }
  }
  else if (param_1 < 0x1002) {
    if (param_1 == 0x1001) {
      return 0x1d5;
    }
    switch(param_1) {
    case 0x902:
      return 0x1b2;
    case 0x903:
      return 0x1b3;
    case 0x904:
      return 0x1b4;
    case 0x905:
      return 0x1b5;
    case 0x906:
      return 0x1b6;
    case 0x909:
      return 0x1b7;
    case 0x90a:
      return 0x1b8;
    case 0x90b:
      return 0x1b9;
    case 0x90c:
      return 0x1ba;
    case 0x90d:
      return 0x1bb;
    case 0x90e:
      return 0x1bc;
    case 0x921:
      return 0x1bd;
    case 0x922:
      return 0x1be;
    case 0x923:
      return 0x1bf;
    case 0x924:
      return 0x1c0;
    case 0x925:
      return 0x1c1;
    case 0x926:
      return 0x1c2;
    case 0x929:
      return 0x1c3;
    case 0x92a:
      return 0x1c4;
    case 0x92b:
      return 0x1c5;
    case 0x92c:
      return 0x1c6;
    case 0x92d:
      return 0x1c7;
    case 0x92e:
      return 0x1c8;
    case 0x941:
      return 0x1c9;
    case 0x943:
      return 0x1ca;
    case 0x945:
      return 0x1cb;
    case 0x949:
      return 0x1cc;
    case 0x94b:
      return 0x1cd;
    case 0x94d:
      return 0x1ce;
    case 0x961:
      return 0x1cf;
    case 0x963:
      return 0x1d0;
    case 0x965:
      return 0x1d1;
    case 0x969:
      return 0x1d2;
    case 0x96b:
      return 0x1d3;
    case 0x96d:
      return 0x1d4;
    }
  }
  else if (param_1 < 0x1102) {
    if (param_1 == 0x1101) {
      return 0x229;
    }
    switch(param_1) {
    case 0x1002:
      return 0x1d6;
    case 0x1003:
      return 0x1d7;
    case 0x1004:
      return 0x1d8;
    case 0x1005:
      return 0x1d9;
    case 0x1006:
      return 0x1da;
    case 0x1009:
      return 0x1db;
    case 0x100a:
      return 0x1dc;
    case 0x100b:
      return 0x1dd;
    case 0x100c:
      return 0x1de;
    case 0x100d:
      return 0x1df;
    case 0x100e:
      return 0x1e0;
    case 0x1011:
      return 0x1e1;
    case 0x1012:
      return 0x1e2;
    case 0x1013:
      return 0x1e3;
    case 0x1014:
      return 0x1e4;
    case 0x1015:
      return 0x1e5;
    case 0x1016:
      return 0x1e6;
    case 0x1019:
      return 0x1e7;
    case 0x101a:
      return 0x1e8;
    case 0x101b:
      return 0x1e9;
    case 0x101c:
      return 0x1ea;
    case 0x101d:
      return 0x1eb;
    case 0x101e:
      return 0x1ec;
    case 0x1021:
      return 0x1ed;
    case 0x1022:
      return 0x1ee;
    case 0x1023:
      return 0x1ef;
    case 0x1024:
      return 0x1f0;
    case 0x1025:
      return 0x1f1;
    case 0x1026:
      return 0x1f2;
    case 0x1029:
      return 499;
    case 0x102a:
      return 500;
    case 0x102b:
      return 0x1f5;
    case 0x102c:
      return 0x1f6;
    case 0x102d:
      return 0x1f7;
    case 0x102e:
      return 0x1f8;
    case 0x1031:
      return 0x1f9;
    case 0x1032:
      return 0x1fa;
    case 0x1033:
      return 0x1fb;
    case 0x1034:
      return 0x1fc;
    case 0x1035:
      return 0x1fd;
    case 0x1036:
      return 0x1fe;
    case 0x1039:
      return 0x1ff;
    case 0x103a:
      return 0x200;
    case 0x103b:
      return 0x201;
    case 0x103c:
      return 0x202;
    case 0x103d:
      return 0x203;
    case 0x103e:
      return 0x204;
    case 0x1041:
      return 0x205;
    case 0x1043:
      return 0x206;
    case 0x1045:
      return 0x207;
    case 0x1049:
      return 0x208;
    case 0x104b:
      return 0x209;
    case 0x104d:
      return 0x20a;
    case 0x1051:
      return 0x20b;
    case 0x1053:
      return 0x20c;
    case 0x1055:
      return 0x20d;
    case 0x1059:
      return 0x20e;
    case 0x105b:
      return 0x20f;
    case 0x105d:
      return 0x210;
    case 0x1061:
      return 0x211;
    case 0x1063:
      return 0x212;
    case 0x1065:
      return 0x213;
    case 0x1069:
      return 0x214;
    case 0x106b:
      return 0x215;
    case 0x106d:
      return 0x216;
    case 0x1071:
      return 0x217;
    case 0x1073:
      return 0x218;
    case 0x1075:
      return 0x219;
    case 0x1079:
      return 0x21a;
    case 0x107b:
      return 0x21b;
    case 0x107d:
      return 0x21c;
    case 0x1081:
      return 0x21d;
    case 0x1083:
      return 0x21e;
    case 0x1085:
      return 0x21f;
    case 0x1089:
      return 0x220;
    case 0x108b:
      return 0x221;
    case 0x108d:
      return 0x222;
    case 0x10a1:
      return 0x223;
    case 0x10a3:
      return 0x224;
    case 0x10a5:
      return 0x225;
    case 0x10a9:
      return 0x226;
    case 0x10ab:
      return 0x227;
    case 0x10ad:
      return 0x228;
    }
  }
  else if (param_1 < 0x2002) {
    if (param_1 == 0x2001) {
      return 0x24d;
    }
    switch(param_1) {
    case 0x1102:
      return 0x22a;
    case 0x1103:
      return 0x22b;
    case 0x1104:
      return 0x22c;
    case 0x1105:
      return 0x22d;
    case 0x1106:
      return 0x22e;
    case 0x1109:
      return 0x22f;
    case 0x110a:
      return 0x230;
    case 0x110b:
      return 0x231;
    case 0x110c:
      return 0x232;
    case 0x110d:
      return 0x233;
    case 0x110e:
      return 0x234;
    case 0x1121:
      return 0x235;
    case 0x1122:
      return 0x236;
    case 0x1123:
      return 0x237;
    case 0x1124:
      return 0x238;
    case 0x1125:
      return 0x239;
    case 0x1126:
      return 0x23a;
    case 0x1129:
      return 0x23b;
    case 0x112a:
      return 0x23c;
    case 0x112b:
      return 0x23d;
    case 0x112c:
      return 0x23e;
    case 0x112d:
      return 0x23f;
    case 0x112e:
      return 0x240;
    case 0x1141:
      return 0x241;
    case 0x1143:
      return 0x242;
    case 0x1145:
      return 0x243;
    case 0x1149:
      return 0x244;
    case 0x114b:
      return 0x245;
    case 0x114d:
      return 0x246;
    case 0x1161:
      return 0x247;
    case 0x1163:
      return 0x248;
    case 0x1165:
      return 0x249;
    case 0x1169:
      return 0x24a;
    case 0x116b:
      return 0x24b;
    case 0x116d:
      return 0x24c;
    }
  }
  else if (param_1 < 0x2102) {
    if (param_1 == 0x2101) {
      return 0x2a1;
    }
    switch(param_1) {
    case 0x2002:
      return 0x24e;
    case 0x2003:
      return 0x24f;
    case 0x2004:
      return 0x250;
    case 0x2005:
      return 0x251;
    case 0x2006:
      return 0x252;
    case 0x2009:
      return 0x253;
    case 0x200a:
      return 0x254;
    case 0x200b:
      return 0x255;
    case 0x200c:
      return 0x256;
    case 0x200d:
      return 599;
    case 0x200e:
      return 600;
    case 0x2011:
      return 0x259;
    case 0x2012:
      return 0x25a;
    case 0x2013:
      return 0x25b;
    case 0x2014:
      return 0x25c;
    case 0x2015:
      return 0x25d;
    case 0x2016:
      return 0x25e;
    case 0x2019:
      return 0x25f;
    case 0x201a:
      return 0x260;
    case 0x201b:
      return 0x261;
    case 0x201c:
      return 0x262;
    case 0x201d:
      return 0x263;
    case 0x201e:
      return 0x264;
    case 0x2021:
      return 0x265;
    case 0x2022:
      return 0x266;
    case 0x2023:
      return 0x267;
    case 0x2024:
      return 0x268;
    case 0x2025:
      return 0x269;
    case 0x2026:
      return 0x26a;
    case 0x2029:
      return 0x26b;
    case 0x202a:
      return 0x26c;
    case 0x202b:
      return 0x26d;
    case 0x202c:
      return 0x26e;
    case 0x202d:
      return 0x26f;
    case 0x202e:
      return 0x270;
    case 0x2031:
      return 0x271;
    case 0x2032:
      return 0x272;
    case 0x2033:
      return 0x273;
    case 0x2034:
      return 0x274;
    case 0x2035:
      return 0x275;
    case 0x2036:
      return 0x276;
    case 0x2039:
      return 0x277;
    case 0x203a:
      return 0x278;
    case 0x203b:
      return 0x279;
    case 0x203c:
      return 0x27a;
    case 0x203d:
      return 0x27b;
    case 0x203e:
      return 0x27c;
    case 0x2041:
      return 0x27d;
    case 0x2043:
      return 0x27e;
    case 0x2045:
      return 0x27f;
    case 0x2049:
      return 0x280;
    case 0x204b:
      return 0x281;
    case 0x204d:
      return 0x282;
    case 0x2051:
      return 0x283;
    case 0x2053:
      return 0x284;
    case 0x2055:
      return 0x285;
    case 0x2059:
      return 0x286;
    case 0x205b:
      return 0x287;
    case 0x205d:
      return 0x288;
    case 0x2061:
      return 0x289;
    case 0x2063:
      return 0x28a;
    case 0x2065:
      return 0x28b;
    case 0x2069:
      return 0x28c;
    case 0x206b:
      return 0x28d;
    case 0x206d:
      return 0x28e;
    case 0x2071:
      return 0x28f;
    case 0x2073:
      return 0x290;
    case 0x2075:
      return 0x291;
    case 0x2079:
      return 0x292;
    case 0x207b:
      return 0x293;
    case 0x207d:
      return 0x294;
    case 0x2081:
      return 0x295;
    case 0x2083:
      return 0x296;
    case 0x2085:
      return 0x297;
    case 0x2089:
      return 0x298;
    case 0x208b:
      return 0x299;
    case 0x208d:
      return 0x29a;
    case 0x20a1:
      return 0x29b;
    case 0x20a3:
      return 0x29c;
    case 0x20a5:
      return 0x29d;
    case 0x20a9:
      return 0x29e;
    case 0x20ab:
      return 0x29f;
    case 0x20ad:
      return 0x2a0;
    }
  }
  else if (param_1 < 0x4002) {
    if (param_1 == 0x4001) {
      return 0x2c5;
    }
    switch(param_1) {
    case 0x2102:
      return 0x2a2;
    case 0x2103:
      return 0x2a3;
    case 0x2104:
      return 0x2a4;
    case 0x2105:
      return 0x2a5;
    case 0x2106:
      return 0x2a6;
    case 0x2109:
      return 0x2a7;
    case 0x210a:
      return 0x2a8;
    case 0x210b:
      return 0x2a9;
    case 0x210c:
      return 0x2aa;
    case 0x210d:
      return 0x2ab;
    case 0x210e:
      return 0x2ac;
    case 0x2121:
      return 0x2ad;
    case 0x2122:
      return 0x2ae;
    case 0x2123:
      return 0x2af;
    case 0x2124:
      return 0x2b0;
    case 0x2125:
      return 0x2b1;
    case 0x2126:
      return 0x2b2;
    case 0x2129:
      return 0x2b3;
    case 0x212a:
      return 0x2b4;
    case 0x212b:
      return 0x2b5;
    case 0x212c:
      return 0x2b6;
    case 0x212d:
      return 0x2b7;
    case 0x212e:
      return 0x2b8;
    case 0x2141:
      return 0x2b9;
    case 0x2143:
      return 0x2ba;
    case 0x2145:
      return 699;
    case 0x2149:
      return 700;
    case 0x214b:
      return 0x2bd;
    case 0x214d:
      return 0x2be;
    case 0x2161:
      return 0x2bf;
    case 0x2163:
      return 0x2c0;
    case 0x2165:
      return 0x2c1;
    case 0x2169:
      return 0x2c2;
    case 0x216b:
      return 0x2c3;
    case 0x216d:
      return 0x2c4;
    }
  }
  else if (param_1 < 0x4102) {
    if (param_1 == 0x4101) {
      return 0x319;
    }
    switch(param_1) {
    case 0x4002:
      return 0x2c6;
    case 0x4003:
      return 0x2c7;
    case 0x4004:
      return 0x2c8;
    case 0x4005:
      return 0x2c9;
    case 0x4006:
      return 0x2ca;
    case 0x4009:
      return 0x2cb;
    case 0x400a:
      return 0x2cc;
    case 0x400b:
      return 0x2cd;
    case 0x400c:
      return 0x2ce;
    case 0x400d:
      return 0x2cf;
    case 0x400e:
      return 0x2d0;
    case 0x4011:
      return 0x2d1;
    case 0x4012:
      return 0x2d2;
    case 0x4013:
      return 0x2d3;
    case 0x4014:
      return 0x2d4;
    case 0x4015:
      return 0x2d5;
    case 0x4016:
      return 0x2d6;
    case 0x4019:
      return 0x2d7;
    case 0x401a:
      return 0x2d8;
    case 0x401b:
      return 0x2d9;
    case 0x401c:
      return 0x2da;
    case 0x401d:
      return 0x2db;
    case 0x401e:
      return 0x2dc;
    case 0x4021:
      return 0x2dd;
    case 0x4022:
      return 0x2de;
    case 0x4023:
      return 0x2df;
    case 0x4024:
      return 0x2e0;
    case 0x4025:
      return 0x2e1;
    case 0x4026:
      return 0x2e2;
    case 0x4029:
      return 0x2e3;
    case 0x402a:
      return 0x2e4;
    case 0x402b:
      return 0x2e5;
    case 0x402c:
      return 0x2e6;
    case 0x402d:
      return 0x2e7;
    case 0x402e:
      return 0x2e8;
    case 0x4031:
      return 0x2e9;
    case 0x4032:
      return 0x2ea;
    case 0x4033:
      return 0x2eb;
    case 0x4034:
      return 0x2ec;
    case 0x4035:
      return 0x2ed;
    case 0x4036:
      return 0x2ee;
    case 0x4039:
      return 0x2ef;
    case 0x403a:
      return 0x2f0;
    case 0x403b:
      return 0x2f1;
    case 0x403c:
      return 0x2f2;
    case 0x403d:
      return 0x2f3;
    case 0x403e:
      return 0x2f4;
    case 0x4041:
      return 0x2f5;
    case 0x4043:
      return 0x2f6;
    case 0x4045:
      return 0x2f7;
    case 0x4049:
      return 0x2f8;
    case 0x404b:
      return 0x2f9;
    case 0x404d:
      return 0x2fa;
    case 0x4051:
      return 0x2fb;
    case 0x4053:
      return 0x2fc;
    case 0x4055:
      return 0x2fd;
    case 0x4059:
      return 0x2fe;
    case 0x405b:
      return 0x2ff;
    case 0x405d:
      return 0x300;
    case 0x4061:
      return 0x301;
    case 0x4063:
      return 0x302;
    case 0x4065:
      return 0x303;
    case 0x4069:
      return 0x304;
    case 0x406b:
      return 0x305;
    case 0x406d:
      return 0x306;
    case 0x4071:
      return 0x307;
    case 0x4073:
      return 0x308;
    case 0x4075:
      return 0x309;
    case 0x4079:
      return 0x30a;
    case 0x407b:
      return 0x30b;
    case 0x407d:
      return 0x30c;
    case 0x4081:
      return 0x30d;
    case 0x4083:
      return 0x30e;
    case 0x4085:
      return 0x30f;
    case 0x4089:
      return 0x310;
    case 0x408b:
      return 0x311;
    case 0x408d:
      return 0x312;
    case 0x40a1:
      return 0x313;
    case 0x40a3:
      return 0x314;
    case 0x40a5:
      return 0x315;
    case 0x40a9:
      return 0x316;
    case 0x40ab:
      return 0x317;
    case 0x40ad:
      return 0x318;
    }
  }
  else if (param_1 < 0x80001) {
    if (param_1 == 0x80000) {
      return 0x33d;
    }
    switch(param_1) {
    case 0x4102:
      return 0x31a;
    case 0x4103:
      return 0x31b;
    case 0x4104:
      return 0x31c;
    case 0x4105:
      return 0x31d;
    case 0x4106:
      return 0x31e;
    case 0x4109:
      return 799;
    case 0x410a:
      return 800;
    case 0x410b:
      return 0x321;
    case 0x410c:
      return 0x322;
    case 0x410d:
      return 0x323;
    case 0x410e:
      return 0x324;
    case 0x4121:
      return 0x325;
    case 0x4122:
      return 0x326;
    case 0x4123:
      return 0x327;
    case 0x4124:
      return 0x328;
    case 0x4125:
      return 0x329;
    case 0x4126:
      return 0x32a;
    case 0x4129:
      return 0x32b;
    case 0x412a:
      return 0x32c;
    case 0x412b:
      return 0x32d;
    case 0x412c:
      return 0x32e;
    case 0x412d:
      return 0x32f;
    case 0x412e:
      return 0x330;
    case 0x4141:
      return 0x331;
    case 0x4143:
      return 0x332;
    case 0x4145:
      return 0x333;
    case 0x4149:
      return 0x334;
    case 0x414b:
      return 0x335;
    case 0x414d:
      return 0x336;
    case 0x4161:
      return 0x337;
    case 0x4163:
      return 0x338;
    case 0x4165:
      return 0x339;
    case 0x4169:
      return 0x33a;
    case 0x416b:
      return 0x33b;
    case 0x416d:
      return 0x33c;
    }
  }
  else if (param_1 < 0x88001) {
    if (param_1 == 0x88000) {
      return 0x34f;
    }
    switch(param_1) {
    case 0x80001:
      return 0x33e;
    case 0x80002:
      return 0x33f;
    case 0x80003:
      return 0x340;
    case 0x80004:
      return 0x341;
    case 0x80005:
      return 0x342;
    case 0x80008:
      return 0x343;
    case 0x80009:
      return 0x344;
    case 0x8000a:
      return 0x345;
    case 0x8000b:
      return 0x346;
    case 0x8000c:
      return 0x347;
    case 0x8000d:
      return 0x348;
    case 0x80040:
      return 0x349;
    case 0x80042:
      return 0x34a;
    case 0x80044:
      return 0x34b;
    case 0x80048:
      return 0x34c;
    case 0x8004a:
      return 0x34d;
    case 0x8004c:
      return 0x34e;
    }
  }
  else if (param_1 < 0x90001) {
    if (param_1 == 0x90000) {
      return 0x367;
    }
    switch(param_1) {
    case 0x88001:
      return 0x350;
    case 0x88002:
      return 0x351;
    case 0x88003:
      return 0x352;
    case 0x88004:
      return 0x353;
    case 0x88005:
      return 0x354;
    case 0x88008:
      return 0x355;
    case 0x88009:
      return 0x356;
    case 0x8800a:
      return 0x357;
    case 0x8800b:
      return 0x358;
    case 0x8800c:
      return 0x359;
    case 0x8800d:
      return 0x35a;
    case 0x88040:
      return 0x35b;
    case 0x88042:
      return 0x35c;
    case 0x88044:
      return 0x35d;
    case 0x88048:
      return 0x35e;
    case 0x8804a:
      return 0x35f;
    case 0x8804c:
      return 0x360;
    case 0x88080:
      return 0x361;
    case 0x88082:
      return 0x362;
    case 0x88084:
      return 0x363;
    case 0x88088:
      return 0x364;
    case 0x8808a:
      return 0x365;
    case 0x8808c:
      return 0x366;
    }
  }
  else if (param_1 < 0xc0001) {
    if (param_1 == 0xc0000) {
      return 0x391;
    }
    switch(param_1) {
    case 0x90001:
      return 0x368;
    case 0x90002:
      return 0x369;
    case 0x90003:
      return 0x36a;
    case 0x90004:
      return 0x36b;
    case 0x90005:
      return 0x36c;
    case 0x90008:
      return 0x36d;
    case 0x90009:
      return 0x36e;
    case 0x9000a:
      return 0x36f;
    case 0x9000b:
      return 0x370;
    case 0x9000c:
      return 0x371;
    case 0x9000d:
      return 0x372;
    case 0x90010:
      return 0x373;
    case 0x90011:
      return 0x374;
    case 0x90012:
      return 0x375;
    case 0x90013:
      return 0x376;
    case 0x90014:
      return 0x377;
    case 0x90015:
      return 0x378;
    case 0x90018:
      return 0x379;
    case 0x90019:
      return 0x37a;
    case 0x9001a:
      return 0x37b;
    case 0x9001b:
      return 0x37c;
    case 0x9001c:
      return 0x37d;
    case 0x9001d:
      return 0x37e;
    case 0x90040:
      return 0x37f;
    case 0x90042:
      return 0x380;
    case 0x90044:
      return 0x381;
    case 0x90048:
      return 0x382;
    case 0x9004a:
      return 899;
    case 0x9004c:
      return 900;
    case 0x90050:
      return 0x385;
    case 0x90052:
      return 0x386;
    case 0x90054:
      return 0x387;
    case 0x90058:
      return 0x388;
    case 0x9005a:
      return 0x389;
    case 0x9005c:
      return 0x38a;
    case 0x90080:
      return 0x38b;
    case 0x90082:
      return 0x38c;
    case 0x90084:
      return 0x38d;
    case 0x90088:
      return 0x38e;
    case 0x9008a:
      return 0x38f;
    case 0x9008c:
      return 0x390;
    }
  }
  else if (param_1 < 0x100001) {
    if (param_1 == 0x100000) {
      return 0x3bb;
    }
    switch(param_1) {
    case 0xc0001:
      return 0x392;
    case 0xc0002:
      return 0x393;
    case 0xc0003:
      return 0x394;
    case 0xc0004:
      return 0x395;
    case 0xc0005:
      return 0x396;
    case 0xc0008:
      return 0x397;
    case 0xc0009:
      return 0x398;
    case 0xc000a:
      return 0x399;
    case 0xc000b:
      return 0x39a;
    case 0xc000c:
      return 0x39b;
    case 0xc000d:
      return 0x39c;
    case 0xc0010:
      return 0x39d;
    case 0xc0011:
      return 0x39e;
    case 0xc0012:
      return 0x39f;
    case 0xc0013:
      return 0x3a0;
    case 0xc0014:
      return 0x3a1;
    case 0xc0015:
      return 0x3a2;
    case 0xc0018:
      return 0x3a3;
    case 0xc0019:
      return 0x3a4;
    case 0xc001a:
      return 0x3a5;
    case 0xc001b:
      return 0x3a6;
    case 0xc001c:
      return 0x3a7;
    case 0xc001d:
      return 0x3a8;
    case 0xc0040:
      return 0x3a9;
    case 0xc0042:
      return 0x3aa;
    case 0xc0044:
      return 0x3ab;
    case 0xc0048:
      return 0x3ac;
    case 0xc004a:
      return 0x3ad;
    case 0xc004c:
      return 0x3ae;
    case 0xc0050:
      return 0x3af;
    case 0xc0052:
      return 0x3b0;
    case 0xc0054:
      return 0x3b1;
    case 0xc0058:
      return 0x3b2;
    case 0xc005a:
      return 0x3b3;
    case 0xc005c:
      return 0x3b4;
    case 0xc0080:
      return 0x3b5;
    case 0xc0082:
      return 0x3b6;
    case 0xc0084:
      return 0x3b7;
    case 0xc0088:
      return 0x3b8;
    case 0xc008a:
      return 0x3b9;
    case 0xc008c:
      return 0x3ba;
    }
  }
  else if (param_1 < 0x180101) {
    if (param_1 == 0x180100) {
      return 0x3f8;
    }
    switch(param_1) {
    case 0x180000:
      return 0x3bc;
    case 0x180001:
      return 0x3bd;
    case 0x180002:
      return 0x3be;
    case 0x180003:
      return 0x3bf;
    case 0x180004:
      return 0x3c0;
    case 0x180005:
      return 0x3c1;
    case 0x180008:
      return 0x3c2;
    case 0x180009:
      return 0x3c3;
    case 0x18000a:
      return 0x3c4;
    case 0x18000b:
      return 0x3c5;
    case 0x18000c:
      return 0x3c6;
    case 0x18000d:
      return 0x3c7;
    case 0x180010:
      return 0x3c8;
    case 0x180011:
      return 0x3c9;
    case 0x180012:
      return 0x3ca;
    case 0x180013:
      return 0x3cb;
    case 0x180014:
      return 0x3cc;
    case 0x180015:
      return 0x3cd;
    case 0x180018:
      return 0x3ce;
    case 0x180019:
      return 0x3cf;
    case 0x18001a:
      return 0x3d0;
    case 0x18001b:
      return 0x3d1;
    case 0x18001c:
      return 0x3d2;
    case 0x18001d:
      return 0x3d3;
    case 0x180020:
      return 0x3d4;
    case 0x180021:
      return 0x3d5;
    case 0x180022:
      return 0x3d6;
    case 0x180023:
      return 0x3d7;
    case 0x180024:
      return 0x3d8;
    case 0x180025:
      return 0x3d9;
    case 0x180028:
      return 0x3da;
    case 0x180029:
      return 0x3db;
    case 0x18002a:
      return 0x3dc;
    case 0x18002b:
      return 0x3dd;
    case 0x18002c:
      return 0x3de;
    case 0x18002d:
      return 0x3df;
    case 0x180030:
      return 0x3e0;
    case 0x180031:
      return 0x3e1;
    case 0x180032:
      return 0x3e2;
    case 0x180033:
      return 0x3e3;
    case 0x180034:
      return 0x3e4;
    case 0x180035:
      return 0x3e5;
    case 0x180038:
      return 0x3e6;
    case 0x180039:
      return 999;
    case 0x18003a:
      return 1000;
    case 0x18003b:
      return 0x3e9;
    case 0x18003c:
      return 0x3ea;
    case 0x18003d:
      return 0x3eb;
    case 0x180080:
      return 0x3ec;
    case 0x180082:
      return 0x3ed;
    case 0x180084:
      return 0x3ee;
    case 0x180088:
      return 0x3ef;
    case 0x18008a:
      return 0x3f0;
    case 0x18008c:
      return 0x3f1;
    case 0x1800a0:
      return 0x3f2;
    case 0x1800a2:
      return 0x3f3;
    case 0x1800a4:
      return 0x3f4;
    case 0x1800a8:
      return 0x3f5;
    case 0x1800aa:
      return 0x3f6;
    case 0x1800ac:
      return 0x3f7;
    }
  }
  else if (param_1 < 0x1a0001) {
    if (param_1 == 0x1a0000) {
      return 0x410;
    }
    switch(param_1) {
    case 0x180101:
      return 0x3f9;
    case 0x180102:
      return 0x3fa;
    case 0x180103:
      return 0x3fb;
    case 0x180104:
      return 0x3fc;
    case 0x180105:
      return 0x3fd;
    case 0x180108:
      return 0x3fe;
    case 0x180109:
      return 0x3ff;
    case 0x18010a:
      return 0x400;
    case 0x18010b:
      return 0x401;
    case 0x18010c:
      return 0x402;
    case 0x18010d:
      return 0x403;
    case 0x180120:
      return 0x404;
    case 0x180121:
      return 0x405;
    case 0x180122:
      return 0x406;
    case 0x180123:
      return 0x407;
    case 0x180124:
      return 0x408;
    case 0x180125:
      return 0x409;
    case 0x180128:
      return 0x40a;
    case 0x180129:
      return 0x40b;
    case 0x18012a:
      return 0x40c;
    case 0x18012b:
      return 0x40d;
    case 0x18012c:
      return 0x40e;
    case 0x18012d:
      return 0x40f;
    }
  }
  else if (param_1 < 0x1a0101) {
    if (param_1 == 0x1a0100) {
      return 0x464;
    }
    switch(param_1) {
    case 0x1a0001:
      return 0x411;
    case 0x1a0002:
      return 0x412;
    case 0x1a0003:
      return 0x413;
    case 0x1a0004:
      return 0x414;
    case 0x1a0005:
      return 0x415;
    case 0x1a0008:
      return 0x416;
    case 0x1a0009:
      return 0x417;
    case 0x1a000a:
      return 0x418;
    case 0x1a000b:
      return 0x419;
    case 0x1a000c:
      return 0x41a;
    case 0x1a000d:
      return 0x41b;
    case 0x1a0010:
      return 0x41c;
    case 0x1a0011:
      return 0x41d;
    case 0x1a0012:
      return 0x41e;
    case 0x1a0013:
      return 0x41f;
    case 0x1a0014:
      return 0x420;
    case 0x1a0015:
      return 0x421;
    case 0x1a0018:
      return 0x422;
    case 0x1a0019:
      return 0x423;
    case 0x1a001a:
      return 0x424;
    case 0x1a001b:
      return 0x425;
    case 0x1a001c:
      return 0x426;
    case 0x1a001d:
      return 0x427;
    case 0x1a0020:
      return 0x428;
    case 0x1a0021:
      return 0x429;
    case 0x1a0022:
      return 0x42a;
    case 0x1a0023:
      return 0x42b;
    case 0x1a0024:
      return 0x42c;
    case 0x1a0025:
      return 0x42d;
    case 0x1a0028:
      return 0x42e;
    case 0x1a0029:
      return 0x42f;
    case 0x1a002a:
      return 0x430;
    case 0x1a002b:
      return 0x431;
    case 0x1a002c:
      return 0x432;
    case 0x1a002d:
      return 0x433;
    case 0x1a0030:
      return 0x434;
    case 0x1a0031:
      return 0x435;
    case 0x1a0032:
      return 0x436;
    case 0x1a0033:
      return 0x437;
    case 0x1a0034:
      return 0x438;
    case 0x1a0035:
      return 0x439;
    case 0x1a0038:
      return 0x43a;
    case 0x1a0039:
      return 0x43b;
    case 0x1a003a:
      return 0x43c;
    case 0x1a003b:
      return 0x43d;
    case 0x1a003c:
      return 0x43e;
    case 0x1a003d:
      return 0x43f;
    case 0x1a0040:
      return 0x440;
    case 0x1a0042:
      return 0x441;
    case 0x1a0044:
      return 0x442;
    case 0x1a0048:
      return 0x443;
    case 0x1a004a:
      return 0x444;
    case 0x1a004c:
      return 0x445;
    case 0x1a0050:
      return 0x446;
    case 0x1a0052:
      return 0x447;
    case 0x1a0054:
      return 0x448;
    case 0x1a0058:
      return 0x449;
    case 0x1a005a:
      return 0x44a;
    case 0x1a005c:
      return 1099;
    case 0x1a0060:
      return 0x44c;
    case 0x1a0062:
      return 0x44d;
    case 0x1a0064:
      return 0x44e;
    case 0x1a0068:
      return 0x44f;
    case 0x1a006a:
      return 0x450;
    case 0x1a006c:
      return 0x451;
    case 0x1a0070:
      return 0x452;
    case 0x1a0072:
      return 0x453;
    case 0x1a0074:
      return 0x454;
    case 0x1a0078:
      return 0x455;
    case 0x1a007a:
      return 0x456;
    case 0x1a007c:
      return 0x457;
    case 0x1a0080:
      return 0x458;
    case 0x1a0082:
      return 0x459;
    case 0x1a0084:
      return 0x45a;
    case 0x1a0088:
      return 0x45b;
    case 0x1a008a:
      return 0x45c;
    case 0x1a008c:
      return 0x45d;
    case 0x1a00a0:
      return 0x45e;
    case 0x1a00a2:
      return 0x45f;
    case 0x1a00a4:
      return 0x460;
    case 0x1a00a8:
      return 0x461;
    case 0x1a00aa:
      return 0x462;
    case 0x1a00ac:
      return 0x463;
    }
  }
  else if (param_1 < 0x1c0001) {
    if (param_1 == 0x1c0000) {
      return 0x488;
    }
    switch(param_1) {
    case 0x1a0101:
      return 0x465;
    case 0x1a0102:
      return 0x466;
    case 0x1a0103:
      return 0x467;
    case 0x1a0104:
      return 0x468;
    case 0x1a0105:
      return 0x469;
    case 0x1a0108:
      return 0x46a;
    case 0x1a0109:
      return 0x46b;
    case 0x1a010a:
      return 0x46c;
    case 0x1a010b:
      return 0x46d;
    case 0x1a010c:
      return 0x46e;
    case 0x1a010d:
      return 0x46f;
    case 0x1a0120:
      return 0x470;
    case 0x1a0121:
      return 0x471;
    case 0x1a0122:
      return 0x472;
    case 0x1a0123:
      return 0x473;
    case 0x1a0124:
      return 0x474;
    case 0x1a0125:
      return 0x475;
    case 0x1a0128:
      return 0x476;
    case 0x1a0129:
      return 0x477;
    case 0x1a012a:
      return 0x478;
    case 0x1a012b:
      return 0x479;
    case 0x1a012c:
      return 0x47a;
    case 0x1a012d:
      return 0x47b;
    case 0x1a0140:
      return 0x47c;
    case 0x1a0142:
      return 0x47d;
    case 0x1a0144:
      return 0x47e;
    case 0x1a0148:
      return 0x47f;
    case 0x1a014a:
      return 0x480;
    case 0x1a014c:
      return 0x481;
    case 0x1a0160:
      return 0x482;
    case 0x1a0162:
      return 0x483;
    case 0x1a0164:
      return 0x484;
    case 0x1a0168:
      return 0x485;
    case 0x1a016a:
      return 0x486;
    case 0x1a016c:
      return 0x487;
    }
  }
  else if (param_1 < 0x1c0101) {
    if (param_1 == 0x1c0100) {
      return 0x4c4;
    }
    switch(param_1) {
    case 0x1c0001:
      return 0x489;
    case 0x1c0002:
      return 0x48a;
    case 0x1c0003:
      return 0x48b;
    case 0x1c0004:
      return 0x48c;
    case 0x1c0005:
      return 0x48d;
    case 0x1c0008:
      return 0x48e;
    case 0x1c0009:
      return 0x48f;
    case 0x1c000a:
      return 0x490;
    case 0x1c000b:
      return 0x491;
    case 0x1c000c:
      return 0x492;
    case 0x1c000d:
      return 0x493;
    case 0x1c0010:
      return 0x494;
    case 0x1c0011:
      return 0x495;
    case 0x1c0012:
      return 0x496;
    case 0x1c0013:
      return 0x497;
    case 0x1c0014:
      return 0x498;
    case 0x1c0015:
      return 0x499;
    case 0x1c0018:
      return 0x49a;
    case 0x1c0019:
      return 0x49b;
    case 0x1c001a:
      return 0x49c;
    case 0x1c001b:
      return 0x49d;
    case 0x1c001c:
      return 0x49e;
    case 0x1c001d:
      return 0x49f;
    case 0x1c0020:
      return 0x4a0;
    case 0x1c0021:
      return 0x4a1;
    case 0x1c0022:
      return 0x4a2;
    case 0x1c0023:
      return 0x4a3;
    case 0x1c0024:
      return 0x4a4;
    case 0x1c0025:
      return 0x4a5;
    case 0x1c0028:
      return 0x4a6;
    case 0x1c0029:
      return 0x4a7;
    case 0x1c002a:
      return 0x4a8;
    case 0x1c002b:
      return 0x4a9;
    case 0x1c002c:
      return 0x4aa;
    case 0x1c002d:
      return 0x4ab;
    case 0x1c0030:
      return 0x4ac;
    case 0x1c0031:
      return 0x4ad;
    case 0x1c0032:
      return 0x4ae;
    case 0x1c0033:
      return 0x4af;
    case 0x1c0034:
      return 0x4b0;
    case 0x1c0035:
      return 0x4b1;
    case 0x1c0038:
      return 0x4b2;
    case 0x1c0039:
      return 0x4b3;
    case 0x1c003a:
      return 0x4b4;
    case 0x1c003b:
      return 0x4b5;
    case 0x1c003c:
      return 0x4b6;
    case 0x1c003d:
      return 0x4b7;
    case 0x1c0080:
      return 0x4b8;
    case 0x1c0082:
      return 0x4b9;
    case 0x1c0084:
      return 0x4ba;
    case 0x1c0088:
      return 0x4bb;
    case 0x1c008a:
      return 0x4bc;
    case 0x1c008c:
      return 0x4bd;
    case 0x1c00a0:
      return 0x4be;
    case 0x1c00a2:
      return 0x4bf;
    case 0x1c00a4:
      return 0x4c0;
    case 0x1c00a8:
      return 0x4c1;
    case 0x1c00aa:
      return 0x4c2;
    case 0x1c00ac:
      return 0x4c3;
    }
  }
  else if (param_1 < 0x200001) {
    if (param_1 == 0x200000) {
      return 0x4dc;
    }
    switch(param_1) {
    case 0x1c0101:
      return 0x4c5;
    case 0x1c0102:
      return 0x4c6;
    case 0x1c0103:
      return 0x4c7;
    case 0x1c0104:
      return 0x4c8;
    case 0x1c0105:
      return 0x4c9;
    case 0x1c0108:
      return 0x4ca;
    case 0x1c0109:
      return 0x4cb;
    case 0x1c010a:
      return 0x4cc;
    case 0x1c010b:
      return 0x4cd;
    case 0x1c010c:
      return 0x4ce;
    case 0x1c010d:
      return 0x4cf;
    case 0x1c0120:
      return 0x4d0;
    case 0x1c0121:
      return 0x4d1;
    case 0x1c0122:
      return 0x4d2;
    case 0x1c0123:
      return 0x4d3;
    case 0x1c0124:
      return 0x4d4;
    case 0x1c0125:
      return 0x4d5;
    case 0x1c0128:
      return 0x4d6;
    case 0x1c0129:
      return 0x4d7;
    case 0x1c012a:
      return 0x4d8;
    case 0x1c012b:
      return 0x4d9;
    case 0x1c012c:
      return 0x4da;
    case 0x1c012d:
      return 0x4db;
    }
  }
  else if (param_1 < 0x345002) {
    if (param_1 == 0x345001) {
      return 0x501;
    }
    if (param_1 < 0x302802) {
      if (param_1 == 0x302801) {
        return 0x4ef;
      }
      if (param_1 < 0x300401) {
        if (param_1 == 0x300400) {
          return 0x4e6;
        }
        if (param_1 < 0x280002) {
          if (param_1 == 0x280001) {
            return 0x4e1;
          }
          if (param_1 == 0x200001) {
            return 0x4dd;
          }
          if (param_1 == 0x200020) {
            return 0x4de;
          }
          if (param_1 == 0x200021) {
            return 0x4df;
          }
          if (param_1 == 0x280000) {
            return 0x4e0;
          }
        }
        else {
          if (param_1 == 0x2a0000) {
            return 0x4e2;
          }
          if (param_1 == 0x2a0001) {
            return 0x4e3;
          }
          if (param_1 == 0x300000) {
            return 0x4e4;
          }
          if (param_1 == 0x300001) {
            return 0x4e5;
          }
        }
      }
      else if (param_1 < 0x302002) {
        if (param_1 == 0x302001) {
          return 0x4eb;
        }
        if (param_1 == 0x300401) {
          return 0x4e7;
        }
        if (param_1 == 0x300800) {
          return 0x4e8;
        }
        if (param_1 == 0x300801) {
          return 0x4e9;
        }
        if (param_1 == 0x302000) {
          return 0x4ea;
        }
      }
      else {
        if (param_1 == 0x302400) {
          return 0x4ec;
        }
        if (param_1 == 0x302401) {
          return 0x4ed;
        }
        if (param_1 == 0x302800) {
          return 0x4ee;
        }
      }
    }
    else if (param_1 < 0x30a401) {
      if (param_1 == 0x30a400) {
        return 0x4f8;
      }
      if (param_1 < 0x309001) {
        if (param_1 == 0x309000) {
          return 0x4f4;
        }
        if (param_1 == 0x308000) {
          return 0x4f0;
        }
        if (param_1 == 0x308001) {
          return 0x4f1;
        }
        if (param_1 == 0x308400) {
          return 0x4f2;
        }
        if (param_1 == 0x308401) {
          return 0x4f3;
        }
      }
      else {
        if (param_1 == 0x309001) {
          return 0x4f5;
        }
        if (param_1 == 0x30a000) {
          return 0x4f6;
        }
        if (param_1 == 0x30a001) {
          return 0x4f7;
        }
      }
    }
    else if (param_1 < 0x344002) {
      if (param_1 == 0x344001) {
        return 0x4fd;
      }
      if (param_1 == 0x30a401) {
        return 0x4f9;
      }
      if (param_1 == 0x30b000) {
        return 0x4fa;
      }
      if (param_1 == 0x30b001) {
        return 0x4fb;
      }
      if (param_1 == 0x344000) {
        return 0x4fc;
      }
    }
    else {
      if (param_1 == 0x344400) {
        return 0x4fe;
      }
      if (param_1 == 0x344401) {
        return 0x4ff;
      }
      if (param_1 == 0x345000) {
        return 0x500;
      }
    }
  }
  else if (param_1 < 0x380001) {
    if (param_1 == 0x380000) {
      return 0x514;
    }
    if (param_1 < 0x350402) {
      if (param_1 == 0x350401) {
        return 0x50b;
      }
      if (param_1 < 0x347001) {
        if (param_1 == 0x347000) {
          return 0x506;
        }
        if (param_1 == 0x346000) {
          return 0x502;
        }
        if (param_1 == 0x346001) {
          return 0x503;
        }
        if (param_1 == 0x346400) {
          return 0x504;
        }
        if (param_1 == 0x346401) {
          return 0x505;
        }
      }
      else {
        if (param_1 == 0x347001) {
          return 0x507;
        }
        if (param_1 == 0x350000) {
          return 0x508;
        }
        if (param_1 == 0x350001) {
          return 0x509;
        }
        if (param_1 == 0x350400) {
          return 0x50a;
        }
      }
    }
    else if (param_1 < 0x352401) {
      if (param_1 == 0x352400) {
        return 0x510;
      }
      if (param_1 == 0x351000) {
        return 0x50c;
      }
      if (param_1 == 0x351001) {
        return 0x50d;
      }
      if (param_1 == 0x352000) {
        return 0x50e;
      }
      if (param_1 == 0x352001) {
        return 0x50f;
      }
    }
    else {
      if (param_1 == 0x352401) {
        return 0x511;
      }
      if (param_1 == 0x353000) {
        return 0x512;
      }
      if (param_1 == 0x353001) {
        return 0x513;
      }
    }
  }
  else if (param_1 < 0x480001) {
    if (param_1 == 0x480000) {
      return 0x51d;
    }
    if (param_1 < 0x400041) {
      if (param_1 == 0x400040) {
        return 0x519;
      }
      if (param_1 == 0x380100) {
        return 0x515;
      }
      if (param_1 == 0x380200) {
        return 0x516;
      }
      if (param_1 == 0x400000) {
        return 0x517;
      }
      if (param_1 == 0x400020) {
        return 0x518;
      }
    }
    else {
      if (param_1 == 0x400080) {
        return 0x51a;
      }
      if (param_1 == 0x4000a0) {
        return 0x51b;
      }
      if (param_1 == 0x4000c0) {
        return 0x51c;
      }
    }
  }
  else if (param_1 < 0x600003) {
    if (param_1 == 0x600002) {
      return 0x522;
    }
    if (param_1 == 0x500000) {
      return 0x51e;
    }
    if (param_1 == 0x580000) {
      return 0x51f;
    }
    if (param_1 == 0x600000) {
      return 0x520;
    }
    if (param_1 == 0x600001) {
      return 0x521;
    }
  }
  else {
    if (param_1 == 0x600004) {
      return 0x523;
    }
    if (param_1 == 0x600008) {
      return 0x524;
    }
    if (param_1 == 0x600010) {
      return 0x525;
    }
  }
  return 0;
}



// FUNCTION 142078980 GetMesh body=28 status=ok
// SIG undefined GetMesh(void)

undefined8 mu::System::GetMesh(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))();
  return param_2;
}



// FUNCTION 1420789a0 FUN_1420789a0 body=143 status=ok
// SIG undefined FUN_1420789a0(void)

int FUN_1420789a0(undefined8 param_1,longlong param_2,uint param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x18);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x10);
  lVar5 = (ulonglong)param_3 * 3;
  cVar1 = *(char *)(lVar2 + lVar5);
  if (cVar1 < '\x1c') {
    return (uint)*(byte *)(lVar2 + lVar5 + 2) * (uint)*(byte *)(lVar3 + 4 + (longlong)cVar1 * 10);
  }
  lVar2 = (ulonglong)param_3 * 10;
  if (-1 < *(short *)(lVar2 + lVar3)) {
    return (int)*(short *)(lVar2 + 6 + lVar3);
  }
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x18);
  lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x10);
  cVar1 = *(char *)(lVar3 + lVar5);
  if (cVar1 < '\x1c') {
    return (uint)*(byte *)(lVar3 + lVar5 + 2) * (uint)*(byte *)(lVar4 + 4 + (longlong)cVar1 * 10);
  }
  if (-1 < *(short *)(lVar2 + lVar4)) {
    return (int)*(short *)(lVar2 + 6 + lVar4);
  }
  return 0;
}



// FUNCTION 142078a30 FUN_142078a30 body=122 status=ok
// SIG undefined FUN_142078a30(void)

undefined8 * FUN_142078a30(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  
  puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x68) + 0x58);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar3 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))
         ) {
        LOCK();
        bVar5 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar5) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar5) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
          return puVar3;
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  return puVar3;
}



// FUNCTION 142078ab0 FUN_142078ab0 body=225 status=ok
// SIG undefined FUN_142078ab0(void)

uint * FUN_142078ab0(longlong param_1,longlong param_2,uint param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint uVar5;
  longlong *plVar6;
  longlong local_res10;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  do {
    if (puVar1 == (undefined8 *)0x0) {
LAB_142078b43:
      local_res10 = param_2;
      puVar4 = (uint *)FUN_142063780(param_1 + 0x18,&local_res10,param_2);
      if (puVar4 != (uint *)0x0) {
        *(longlong *)(puVar4 + 2) = local_res10;
        *puVar4 = param_5 + -1 + param_4 & -param_5;
      }
      return puVar4;
    }
    uVar5 = 0;
    if (*(uint *)(puVar1 + 1) != 0) {
      plVar6 = puVar1 + 2;
      do {
        if (*(uint *)(plVar6 + 1) == param_3) {
          uVar3 = 0;
          if (param_3 != 0) {
            do {
              if ((*(int *)(*plVar6 + uVar3 * 8) != *(int *)(param_2 + uVar3 * 8)) ||
                 (*(int *)(*plVar6 + uVar3 * 8 + 4) != *(int *)(param_2 + uVar3 * 8 + 4))) break;
              uVar2 = (int)uVar3 + 1;
              uVar3 = (ulonglong)uVar2;
            } while (uVar2 < param_3);
          }
          if ((uint)uVar3 == param_3) {
            if ((uint *)(plVar6 + 2) != (uint *)0x0) {
              return (uint *)(plVar6 + 2);
            }
            goto LAB_142078b43;
          }
        }
        uVar5 = uVar5 + 1;
        plVar6 = plVar6 + 5;
      } while (uVar5 < *(uint *)(puVar1 + 1));
    }
    puVar1 = (undefined8 *)*puVar1;
  } while( true );
}



// FUNCTION 142078ba0 FUN_142078ba0 body=47 status=ok
// SIG undefined FUN_142078ba0(void)

bool FUN_142078ba0(PSRWLOCK param_1)

{
  int iVar1;
  
  AcquireSRWLockShared(param_1);
  iVar1 = *(int *)&param_1[2].Ptr;
  ReleaseSRWLockShared(param_1);
  return iVar1 != 0;
}



// FUNCTION 142078bd0 FUN_142078bd0 body=108 status=ok
// SIG undefined FUN_142078bd0(void)

undefined1 FUN_142078bd0(longlong param_1)

{
  int iVar1;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x50));
  iVar1 = *(int *)(param_1 + 0x60);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x50));
  if (iVar1 == 0) {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x18));
    iVar1 = *(int *)(param_1 + 0x28);
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x18));
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142078c40 FUN_142078c40 body=65 status=ok
// SIG undefined FUN_142078c40(void)

undefined8 FUN_142078c40(longlong param_1)

{
  DWORD DVar1;
  longlong lVar2;
  
  lVar2 = FUN_1415ab270(0);
  if (lVar2 != 0) {
    *(longlong *)(param_1 + 0x90) = lVar2;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(param_1 + 0x48) = DVar1;
    FUN_142058c50(*(undefined4 *)(param_1 + 0x48),param_1);
    return CONCAT71((uint7)(uint3)((uint)*(undefined4 *)(param_1 + 0x48) >> 8),1);
  }
  return 0;
}



// FUNCTION 142078c90 FUN_142078c90 body=359 status=ok
// SIG undefined FUN_142078c90(void)

void FUN_142078c90(longlong param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  float fVar10;
  undefined8 *local_res18;
  
  cVar3 = IsInRenderingThread();
  if (cVar3 != '\0') {
    plVar7 = *(longlong **)(param_1 + 0x50);
    if (plVar7 != (longlong *)0x0) {
      if ((int)plVar7[8] == 3) {
        (**(code **)(*plVar7 + 8))();
        plVar7 = *(longlong **)(param_1 + 0x50);
      }
      (**(code **)(**(longlong **)(plVar7[0xd] + 8) + 8))();
      uVar5 = FUN_142071550(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x68),&local_res18);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x58,uVar5);
      if (local_res18 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_res18 + 1);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          if ((*(char *)(local_res18 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))) {
            LOCK();
            bVar9 = *(int *)((longlong)local_res18 + 0xc) == 0;
            if (bVar9) {
              *(int *)((longlong)local_res18 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar9) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,local_res18);
            }
          }
          else {
            (**(code **)*local_res18)(local_res18,1);
          }
        }
      }
      lVar8 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x68) + 8) + 0x78);
      if (lVar8 == 0) {
        lVar8 = *(longlong *)(param_1 + 0x58);
      }
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x60,lVar8);
      *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
      return;
    }
    if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
      puVar6 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x48) + 8))();
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x60,*puVar6);
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))();
      *(undefined1 *)(param_1 + 0x68) = uVar4;
      fVar10 = (float)(**(code **)(**(longlong **)(param_1 + 0x48) + 0x28))();
      if (0.0 < fVar10) {
        fVar10 = (float)(**(code **)(**(longlong **)(param_1 + 0x48) + 0x28))();
        *(float *)(param_1 + 0x40) = 1.0 / fVar10;
        return;
      }
      *(undefined4 *)(param_1 + 0x40) = 0x3ee8ba2e;
    }
  }
  return;
}



// FUNCTION 142078e00 FUN_142078e00 body=162 status=ok
// SIG undefined FUN_142078e00(void)

void FUN_142078e00(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x230))
            (param_1,5,&DAT_1467cdba0,param_1 + 0x608,param_1 + 0x609,param_1 + 0x60a,0);
  (**(code **)(*param_1 + 0x230))
            (param_1,2,&DAT_1467cdba0,param_1 + 0x60b,param_1 + 0x60c,param_1 + 0x60d,0);
  FUN_1432d9110(param_1,param_2);
  return;
}



// FUNCTION 142078eb0 FUN_142078eb0 body=1525 status=ok
// SIG undefined FUN_142078eb0(void)

ulonglong FUN_142078eb0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  RefCountImpl *this;
  longlong *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined8 **ppuVar10;
  ulonglong uVar11;
  int iVar12;
  longlong *plVar13;
  int *piVar14;
  bool bVar15;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 *local_70;
  undefined8 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined4 local_59;
  undefined2 local_55;
  undefined1 local_53;
  undefined1 local_50;
  undefined1 local_4f;
  undefined8 local_4c;
  undefined2 local_44;
  
  uVar4 = IsInRenderingThread();
  if ((char)uVar4 != '\0') {
    _guard_xfg_dispatch_icall_nop(param_1 + 0x37c,0,0x3b0);
    _guard_xfg_dispatch_icall_nop(param_1 + 0x242,0,0x9d0);
    plVar6 = param_1 + 0x37d;
    uVar9 = 1;
    uVar8 = 1;
    do {
      lVar5 = FUN_1420737c0(uVar8,0);
      uVar8 = uVar8 + 1;
      *plVar6 = lVar5;
      plVar6 = plVar6 + 1;
    } while (uVar8 < 0x76);
    plVar6 = param_1 + 0x243;
    do {
      lVar5 = FUN_1420716d0(uVar9,0);
      uVar9 = uVar9 + 1;
      *plVar6 = lVar5;
      plVar6 = plVar6 + 1;
    } while (uVar9 < 0x13a);
    plVar6 = param_1 + 0x60e;
    iVar12 = 0x18;
    if (*(uint *)(param_1 + 0x618) < 0x18) {
      iVar12 = (int)param_1[0x618];
    }
    param_1[0x617] = 0x40000;
    if (iVar12 == 0) {
      iVar12 = 1;
    }
    *(int *)(param_1 + 0x618) = iVar12;
    uVar8 = *(uint *)((longlong)param_1 + 0x30cc);
    uVar4 = ((ulonglong)uVar8 + (ulonglong)*(uint *)(param_1 + 0x61a) * 2) * 2;
    uVar11 = param_1[0x616];
    if ((ulonglong)param_1[0x616] < uVar4) {
      param_1[0x616] = uVar4;
      uVar11 = uVar4;
    }
    if (uVar8 < *(uint *)(param_1 + 0x619)) {
      *(uint *)(param_1 + 0x619) = uVar8 >> 2;
    }
    plVar13 = (longlong *)0x0;
    *(undefined4 *)((longlong)param_1 + 0x30c4) = 0;
    uVar4 = FUN_1432f65e0(param_1 + 0x61b,param_1[0x610],uVar11);
    if ((char)uVar4 != '\0') {
      cVar3 = FUN_14207cf10(plVar6);
      if ((cVar3 == '\0') ||
         ((param_1[0x612] != 0 && (cVar3 = FUN_14207c920(plVar6,param_1[0x612],1,0), cVar3 == '\0'))
         )) {
        uVar4 = FUN_14207a9a0(plVar6);
      }
      else {
        this = *(RefCountImpl **)(param_2 + 0x10);
        if (this == (RefCountImpl *)0x0) {
          local_res18[0] = 0x48;
          lVar5 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x1d0,local_res18);
          if (lVar5 == 0) {
            this = (RefCountImpl *)0x0;
          }
          else {
            this = (RefCountImpl *)FUN_14207f3b0(lVar5,*(undefined4 *)(param_2 + 0xc),param_1[8],0);
          }
        }
        else {
          Scaleform::RefCountImpl::AddRef(this);
        }
        if ((RefCountImpl *)param_1[0x66c] != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x66c]);
        }
        param_1[0x66c] = (longlong)this;
        if (*(RefCountImpl **)(param_2 + 0x18) != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 0x18));
        }
        if ((RefCountImpl *)param_1[0x4c] != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x4c]);
        }
        lVar5 = *(longlong *)(param_2 + 0x18);
        param_1[0x4c] = lVar5;
        if (lVar5 == 0) {
          local_res20[0] = 0x48;
          lVar5 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0xb0,local_res20);
          plVar6 = plVar13;
          if (lVar5 != 0) {
            plVar6 = (longlong *)FUN_1432f80f0(lVar5,1,0x3000000,0);
          }
          if ((RefCountImpl *)param_1[0x4c] != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x4c]);
          }
          param_1[0x4c] = (longlong)plVar6;
          uVar4 = (**(code **)(*plVar6 + 8))(plVar6,param_1[0x66c]);
          if ((char)uVar4 == '\0') goto LAB_142079491;
        }
        uVar4 = (**(code **)(param_1[0x651] + 8))(param_1 + 0x651,param_1);
        if ((char)uVar4 != '\0') {
          ppuVar10 = (undefined8 **)(param_1 + 0x682);
          do {
            local_4f = 0;
            iVar12 = (int)plVar13;
            local_44 = 0x101;
            local_4c = 0;
            if (iVar12 == 0) {
              local_50 = 2;
            }
            else if (iVar12 == 1) {
              local_50 = 1;
            }
            else if (iVar12 == 2) {
              local_50 = 0;
            }
            (**(code **)(*DAT_146ab6358 + 0x30))(DAT_146ab6358,&local_70,&local_50);
            if (ppuVar10 == &local_70) {
LAB_1420791d2:
              puVar7 = local_70;
              if (local_70 != (undefined8 *)0x0) {
                LOCK();
                piVar14 = (int *)(local_70 + 1);
                iVar2 = *piVar14;
                *piVar14 = *piVar14 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  if ((*(char *)(local_70 + 2) == '\0') &&
                     ((DAT_146ab62f5 != '\0' ||
                      (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))) {
                    LOCK();
                    bVar15 = *(int *)((longlong)puVar7 + 0xc) == 0;
                    if (bVar15) {
                      *(int *)((longlong)puVar7 + 0xc) = 1;
                    }
                    UNLOCK();
                    if (bVar15) {
                      TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar7);
                    }
                  }
                  else {
                    (**(code **)*puVar7)(puVar7,1);
                  }
                }
              }
            }
            else {
              puVar7 = *ppuVar10;
              *ppuVar10 = local_70;
              local_70 = (undefined8 *)0x0;
              if (puVar7 != (undefined8 *)0x0) {
                LOCK();
                piVar14 = (int *)(puVar7 + 1);
                iVar2 = *piVar14;
                *piVar14 = *piVar14 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  if ((*(char *)(puVar7 + 2) == '\0') &&
                     ((DAT_146ab62f5 != '\0' ||
                      (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))) {
                    LOCK();
                    bVar15 = *(int *)((longlong)puVar7 + 0xc) == 0;
                    if (bVar15) {
                      *(int *)((longlong)puVar7 + 0xc) = 1;
                    }
                    UNLOCK();
                    if (bVar15) {
                      TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar7);
                    }
                  }
                  else {
                    (**(code **)*puVar7)(puVar7,1);
                  }
                }
                goto LAB_1420791d2;
              }
            }
            plVar13 = (longlong *)(ulonglong)(iVar12 + 1U);
            ppuVar10 = ppuVar10 + 1;
          } while (iVar12 + 1U < 3);
          piVar14 = &DAT_1467cd1b0;
          lVar5 = 10;
          ppuVar10 = (undefined8 **)(param_1 + 0x685);
          do {
            local_60 = piVar14[-3] != 0;
            local_59 = 0x700;
            local_5f = (&DAT_1464fae20)[(longlong)*piVar14 * 4];
            local_5e = piVar14[-2] != 0;
            local_55 = 0xff00;
            local_53 = 0xff;
            local_5d = (&DAT_1464fae20)[(longlong)piVar14[1] * 4];
            local_5c = (&DAT_1464fae48)[(longlong)piVar14[3] * 4];
            local_5b = (&DAT_1464fae48)[(longlong)piVar14[4] * 4];
            local_5a = (&DAT_1464fae48)[(longlong)piVar14[2] * 4];
            (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,&local_68,&local_60);
            if (ppuVar10 == &local_68) {
LAB_142079358:
              puVar7 = local_68;
              if (local_68 != (undefined8 *)0x0) {
                LOCK();
                piVar1 = (int *)(local_68 + 1);
                iVar12 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar12 == 1) {
                  if ((*(char *)(local_68 + 2) == '\0') &&
                     ((DAT_146ab62f5 != '\0' ||
                      (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))) {
                    LOCK();
                    bVar15 = *(int *)((longlong)puVar7 + 0xc) == 0;
                    if (bVar15) {
                      *(int *)((longlong)puVar7 + 0xc) = 1;
                    }
                    UNLOCK();
                    if (bVar15) {
                      TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar7);
                    }
                  }
                  else {
                    (**(code **)*puVar7)(puVar7,1);
                  }
                }
              }
            }
            else {
              puVar7 = *ppuVar10;
              *ppuVar10 = local_68;
              local_68 = (undefined8 *)0x0;
              if (puVar7 != (undefined8 *)0x0) {
                LOCK();
                piVar1 = (int *)(puVar7 + 1);
                iVar12 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar12 == 1) {
                  if ((*(char *)(puVar7 + 2) == '\0') &&
                     ((DAT_146ab62f5 != '\0' ||
                      (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))) {
                    LOCK();
                    bVar15 = *(int *)((longlong)puVar7 + 0xc) == 0;
                    if (bVar15) {
                      *(int *)((longlong)puVar7 + 0xc) = 1;
                    }
                    UNLOCK();
                    if (bVar15) {
                      TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar7);
                    }
                  }
                  else {
                    (**(code **)*puVar7)(puVar7,1);
                  }
                }
                goto LAB_142079358;
              }
            }
            ppuVar10 = ppuVar10 + 1;
            piVar14 = piVar14 + 9;
            lVar5 = lVar5 + -1;
            if (lVar5 == 0) {
              puVar7 = (undefined8 *)
                       (**(code **)(*(longlong *)param_1[9] + 0x50))((longlong *)param_1[9],0x18,0);
              if (puVar7 == (undefined8 *)0x0) {
                puVar7 = (undefined8 *)0x0;
              }
              else {
                Scaleform::Render::MatrixStateFactory::MatrixStateFactory(puVar7,param_1[9]);
                puVar7[2] = param_1;
                *puVar7 = &PTR_FUN_144f89868;
              }
              param_1[0x4a] = (longlong)puVar7;
              (**(code **)(*param_1 + 0x230))
                        (param_1,5,&DAT_1467cdba0,param_1 + 0x608,param_1 + 0x609,param_1 + 0x60a,0)
              ;
              (**(code **)(*param_1 + 0x230))
                        (param_1,2,&DAT_1467cdba0,param_1 + 0x60b,param_1 + 0x60c,param_1 + 0x60d,0)
              ;
              uVar4 = FUN_1432d9110(param_1,param_2);
              return uVar4;
            }
          } while( true );
        }
      }
    }
  }
LAB_142079491:
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 1420794b0 FUN_1420794b0 body=29 status=ok
// SIG undefined FUN_1420794b0(void)

bool FUN_1420794b0(longlong param_1)

{
  DWORD DVar1;
  
  DVar1 = GetCurrentThreadId();
  return *(DWORD *)(param_1 + 0x48) == DVar1;
}



// FUNCTION 142079530 FUN_142079530 body=201 status=ok
// SIG undefined FUN_142079530(void)

void FUN_142079530(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x68);
  plVar2 = *(longlong **)(param_2 + 0x70);
  lVar5 = plVar1[5];
  if ((plVar1[5] == 0) && (cVar3 = (**(code **)(*plVar1 + 0x10))(plVar1), lVar5 = 0, cVar3 != '\0'))
  {
    plVar1[10] = *(longlong *)(param_1 + 0x1e8);
    *(longlong **)(param_1 + 0x1e8) = plVar1;
    lVar5 = plVar1[5];
  }
  lVar4 = plVar2[5];
  if ((lVar4 == 0) && (cVar3 = (**(code **)(*plVar2 + 0x10))(plVar2), lVar4 = 0, cVar3 != '\0')) {
    plVar2[10] = *(longlong *)(param_1 + 0x1e8);
    *(longlong **)(param_1 + 0x1e8) = plVar2;
    lVar4 = plVar2[5];
  }
  *param_3 = *(longlong *)(param_2 + 0x78) + lVar5;
  *param_4 = *(longlong *)(param_2 + 0x88) + lVar4;
  return;
}



// FUNCTION 142079600 FUN_142079600 body=1489 status=ok
// SIG undefined FUN_142079600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142079600(longlong *param_1,undefined8 param_2,ulonglong param_3,undefined8 *param_4,
                  ulonglong *param_5,ulonglong *param_6,uint param_7)

{
  undefined4 uVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar19;
  undefined1 auStack_128 [32];
  uint local_108;
  undefined1 local_f8 [4];
  uint local_f4;
  uint local_f0;
  int local_ec;
  ulonglong *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  ulonglong *local_c8;
  undefined8 local_c0;
  ulonglong uStack_b8;
  ulonglong local_b0;
  longlong *local_a8;
  undefined8 *local_a0;
  longlong local_98;
  uint local_88 [2];
  undefined8 local_80 [7];
  ulonglong local_48;
  ulonglong uVar18;
  ulonglong uVar20;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_c8 = param_5;
  local_e8 = param_6;
  local_e0 = param_4;
  local_a8 = param_1;
  iVar3 = (**(code **)(*(longlong *)param_1[7] + 0x48))();
  lVar12 = param_1[8];
  local_d8._4_4_ = param_7;
  local_d8._0_4_ = iVar3;
  uStack_d0 = param_3;
  if (lVar12 != 0) {
    uVar5 = FUN_142062cb0(local_f8,&local_d8);
    uVar5 = uVar5 & *(ulonglong *)(lVar12 + 8);
    lVar14 = uVar5 * 0x38;
    puVar7 = (ulonglong *)(lVar12 + 0x10 + lVar14);
    if ((*puVar7 != 0xfffffffffffffffe) && (uVar15 = uVar5, puVar7[1] == uVar5)) {
      while ((puVar7[1] != uVar5 ||
             (((iVar3 != (int)puVar7[2] || (param_3 != puVar7[3])) ||
              (param_7 != *(uint *)((longlong)puVar7 + 0x14)))))) {
        uVar15 = *puVar7;
        if (uVar15 == 0xffffffffffffffff) goto LAB_142079715;
        lVar14 = uVar15 * 0x38;
        puVar7 = (ulonglong *)(lVar12 + 0x10 + lVar14);
      }
      if ((-1 < (longlong)uVar15) && (lVar14 = lVar12 + 0x20 + lVar14, lVar14 != 0)) {
        uVar15 = *(ulonglong *)(lVar14 + 0x18);
        uVar5 = *(ulonglong *)(lVar14 + 0x20);
        *local_e0 = *(undefined8 *)(lVar14 + 0x10);
        *local_c8 = uVar15;
        *local_e8 = uVar5;
        return;
      }
    }
  }
LAB_142079715:
  switch(iVar3) {
  case 3:
    uVar13 = 0x401;
    break;
  case 4:
    uVar13 = 0x421;
    break;
  case 5:
    uVar13 = 1;
    break;
  case 6:
    uVar13 = 0x21;
    break;
  case 7:
    uVar13 = 0x2001;
    break;
  case 8:
    uVar13 = 0x2021;
    break;
  case 9:
    uVar13 = 0x801;
    break;
  case 10:
    uVar13 = 0x821;
    break;
  case 0xb:
    uVar13 = 0x90000;
    break;
  case 0xc:
    uVar13 = 0x88000;
    break;
  default:
    uVar13 = 0x80000;
  }
  iVar3 = (**(code **)(*param_1 + 0x10))(param_1);
  uVar17 = *(uint *)(&DAT_144f88bbc + (longlong)iVar3 * 4);
  iVar3 = FUN_142074270(uVar13);
  plVar2 = local_a8;
  uVar5 = 0;
  uVar19 = 0;
  uVar10 = uVar19;
  if (-1 < (int)uVar17) {
    uVar10 = uVar17;
  }
  local_98 = *(longlong *)
              (&DAT_1464fa000 +
              (longlong)*(int *)(&DAT_144f73c00 + ((longlong)iVar3 + (longlong)(int)uVar10) * 8) * 8
              );
  if (local_98 == 0) {
LAB_1420798ba:
    *local_e8 = 0;
    *local_e0 = 0;
    *local_c8 = 0;
  }
  else {
    local_f4 = 4;
    local_f0 = 0xffffffff;
    local_ec = -1;
    uVar15 = uVar5;
    if ('\0' < *(char *)(local_98 + 0x28)) {
      puVar11 = (uint *)(local_98 + 0x38);
      uVar16 = uVar5;
      uVar18 = uVar5;
      uVar20 = uVar5;
      do {
        iVar3 = (int)uVar20;
        uVar17 = (uint)uVar15;
        if ((*puVar11 & 0xff0f) == 0x1204) {
          lVar12 = uVar16 * 8;
          local_88[uVar16 * 2] = uVar17;
          iVar3 = iVar3 + 1;
          uVar16 = uVar16 + 1;
          uVar4 = 0x2211;
          uVar1 = 0x1211;
          if ((param_7 & 0x20) != 0) {
            uVar4 = 0x1211;
            uVar1 = 0x2211;
          }
          *(undefined4 *)((longlong)local_80 + lVar12 + -4) = uVar4;
          local_f0 = (2 - (uint)((param_7 & 0x20) != 0)) + uVar17;
          uVar15 = (ulonglong)(uVar17 + 4);
          local_88[uVar16 * 2] = uVar17 + 3;
          *(undefined4 *)((longlong)local_80 + uVar16 * 8 + -4) = uVar1;
          local_ec = iVar3;
        }
        else {
          puVar8 = *(undefined8 **)(param_3 + 8);
          uVar10 = *(uint *)((longlong)puVar8 + 4);
          if (uVar10 == 0) goto LAB_1420798ba;
          while ((uVar10 & 0xff00) != (*puVar11 & 0xff00)) {
            uVar10 = *(uint *)((longlong)puVar8 + 0xc);
            puVar8 = puVar8 + 1;
            if (uVar10 == 0) goto LAB_1420798ba;
          }
          *(undefined8 *)(local_88 + uVar16 * 2) = *puVar8;
          local_88[uVar16 * 2] = uVar17;
          uVar10 = *(uint *)((longlong)puVar8 + 4);
          if ((param_7 & 4) == 0) {
            if ((uVar10 & 0xfff) == 0x251) {
              uVar10 = uVar10 & 0xfffff214 | 0x214;
              goto LAB_142079942;
            }
          }
          else if ((uVar10 & 0xfff) == 0x214) {
            uVar10 = uVar10 & 0xfffff251 | 0x251;
LAB_142079942:
            *(uint *)((longlong)local_80 + uVar16 * 8 + -4) = uVar10;
          }
          uVar10 = *(uint *)(&DAT_1464fad90 +
                            (ulonglong)((*(uint *)((longlong)puVar8 + 4) >> 4 & 0xf) - 1) * 4);
          if (*(uint *)(&DAT_1464fad90 +
                       (ulonglong)((*(uint *)((longlong)puVar8 + 4) >> 4 & 0xf) - 1) * 4) < local_f4
             ) {
            uVar10 = local_f4;
          }
          uVar19 = *(uint *)((longlong)local_80 + uVar16 * 8 + -4);
          uVar17 = uVar17 + *(int *)(&DAT_1464fad90 + (ulonglong)((uVar19 >> 4 & 0xf) - 1) * 4) *
                            (uVar19 & 0xf);
          uVar15 = (ulonglong)uVar17;
          local_f4 = uVar10;
          if ((param_7 & 2) != 0) {
            uVar15 = (ulonglong)(uVar17 + 3 & 0xfffffffc);
          }
        }
        uVar19 = iVar3 + 1;
        uVar20 = (ulonglong)uVar19;
        uVar17 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar17;
        puVar11 = puVar11 + 4;
        uVar16 = uVar16 + 1;
      } while ((int)uVar17 < (int)*(char *)(local_98 + 0x28));
    }
    lVar12 = (longlong)(int)uVar19;
    uVar10 = (uint)uVar15;
    uVar17 = 1;
    if ((param_7 & 1) != 0) {
      uVar17 = local_f4;
    }
    (local_88 + lVar12 * 2)[0] = 0;
    (local_88 + lVar12 * 2)[1] = 0;
    local_108 = uVar17;
    uVar13 = FUN_142078ab0(local_a8,local_88,uVar19 + 1,uVar15);
    *local_e0 = uVar13;
    uVar16 = uVar5;
    if ((param_7 & 8) != 0) {
      *(undefined4 *)((longlong)local_80 + lVar12 * 8 + -4) = 0x10471;
      local_88[lVar12 * 2] = 0;
      local_80[lVar12] = 0;
      local_108 = uVar17;
      uVar16 = FUN_142078ab0(plVar2,local_88,uVar19 + 2,uVar15);
    }
    *local_e8 = uVar16;
    if ((param_7 & 0x10) == 0) {
      if ((int)local_f0 < 0) {
        *(undefined4 *)((longlong)local_80 + lVar12 * 8 + -4) = 0x10421;
        uVar6 = uVar10;
        if ((param_7 & 0x20) != 0) {
          uVar6 = uVar10 + 3;
        }
        local_88[lVar12 * 2] = uVar6;
        uVar6 = *(uint *)((longlong)local_80 + lVar12 * 8 + -4);
        uVar10 = uVar10 + *(int *)(&DAT_1464fad90 + (ulonglong)((uVar6 >> 4 & 0xf) - 1) * 4) *
                          (uVar6 & 0xf);
        if ((param_7 & 2) != 0) {
          uVar10 = uVar10 + 3 & 0xfffffffc;
        }
      }
      else {
        lVar9 = (longlong)local_ec;
        for (lVar14 = (longlong)(int)(uVar19 - 1); lVar9 <= lVar14; lVar14 = lVar14 + -1) {
          local_80[lVar14] = *(undefined8 *)(local_88 + lVar14 * 2);
        }
        *(undefined4 *)((longlong)local_80 + lVar9 * 8 + -4) = 0x10421;
        local_88[lVar9 * 2] = local_f0;
      }
      local_80[lVar12] = 0;
      local_108 = uVar17;
      uVar5 = FUN_142078ab0(plVar2,local_88,uVar19 + 2,uVar10);
    }
    *local_c8 = uVar5;
    local_c0 = *local_e0;
    uStack_b8 = *local_c8;
    local_b0 = *local_e8;
    local_a8 = &local_d8;
    local_a0 = &local_c0;
    uVar5 = FUN_142062cb0(local_f8,&local_d8);
    lVar12 = plVar2[8];
    if (lVar12 != 0) {
      uVar15 = *(ulonglong *)(lVar12 + 8) & uVar5;
      lVar14 = uVar15 * 0x38;
      puVar7 = (ulonglong *)(lVar12 + 0x10 + lVar14);
      if ((*puVar7 != 0xfffffffffffffffe) && (uVar16 = uVar15, puVar7[1] == uVar15)) {
        while ((puVar7[1] != uVar15 ||
               ((((int)local_d8 != (int)puVar7[2] || (uStack_d0 != puVar7[3])) ||
                (local_d8._4_4_ != *(uint *)((longlong)puVar7 + 0x14)))))) {
          uVar16 = *puVar7;
          if (uVar16 == 0xffffffffffffffff) goto LAB_142079bb8;
          lVar14 = uVar16 * 0x38;
          puVar7 = (ulonglong *)(lVar12 + 0x10 + lVar14);
        }
        if (-1 < (longlong)uVar16) {
          puVar8 = (undefined8 *)(lVar14 + 0x20 + lVar12);
          *puVar8 = CONCAT44(local_d8._4_4_,(int)local_d8);
          puVar8[1] = uStack_d0;
          puVar8 = (undefined8 *)(lVar14 + 0x30 + lVar12);
          *puVar8 = local_c0;
          puVar8[1] = uStack_b8;
          *(ulonglong *)(lVar14 + 0x40 + lVar12) = local_b0;
          return;
        }
      }
    }
LAB_142079bb8:
    FUN_14205c0f0(plVar2 + 8,plVar2 + 8,&local_a8,uVar5);
  }
  return;
}



// FUNCTION 142079c00 FUN_142079c00 body=357 status=ok
// SIG undefined FUN_142079c00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142079c00(longlong param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  uint *puVar5;
  ulonglong uVar6;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_a8 [8];
  undefined8 *local_a0;
  RefCountImpl *local_98;
  undefined8 local_88;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  cVar3 = IsInRenderingThread();
  if (cVar3 != '\0') {
    if ((DAT_146ab62cc < 0x20) && ((0xf8ff1fbdU >> (DAT_146ab62cc & 0x1f) & 1) != 0)) {
      lVar2 = *(longlong *)(param_3 + 8);
      local_a0 = &local_88;
      uVar6 = 0;
      local_98 = (RefCountImpl *)0x0;
      if (*(int *)(lVar2 + 4) != 0) {
        lVar4 = 0;
        do {
          uVar1 = *(uint *)(lVar4 + 4 + lVar2);
          puVar5 = (uint *)((longlong)&local_88 + lVar4 + 4);
          *puVar5 = uVar1;
          if ((uVar1 & 0xf00) == 0x100) {
            *puVar5 = uVar1 & 0xffffff6f | 0x60;
          }
          uVar6 = (ulonglong)((int)uVar6 + 1);
          *(undefined4 *)((longlong)&local_88 + lVar4) = *(undefined4 *)(lVar4 + lVar2);
          lVar4 = uVar6 * 8;
        } while (*(int *)(lVar4 + 4 + lVar2) != 0);
      }
      (&local_88)[uVar6] = 0;
      local_b8 = 3;
      local_c0 = param_6;
      local_c8 = param_5;
      FUN_142079600(param_1 + 0x11c8,param_2,local_a8,param_4);
      if (local_98 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(local_98);
      }
    }
    else {
      local_b8 = 3;
      local_c0 = param_6;
      local_c8 = param_5;
      FUN_142079600(param_1 + 0x11c8,param_2,param_3,param_4);
    }
  }
  return;
}



// FUNCTION 142079db0 FUN_142079db0 body=420 status=ok
// SIG undefined FUN_142079db0(void)

void FUN_142079db0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x33e8);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar1 = *(longlong **)
              (*(longlong *)
                (*(longlong *)
                  (*(longlong *)(param_1 + 0x1b0) * 0x340 + -0x340 + *(longlong *)(param_1 + 0x1a8))
                + 0x20) + 0x80);
    puVar2 = puVar4 + 10;
    if (*(undefined8 **)(lVar3 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x58);
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar4 + 10;
    }
    *(undefined8 **)(lVar3 + 0x30) = puVar2;
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
    **(undefined8 **)(lVar3 + 8) = puVar4;
    *(undefined8 **)(lVar3 + 8) = puVar4 + 1;
    puVar4[1] = 0;
    *puVar4 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar4 + 2) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x14) = 0xffffffff;
    *(undefined4 *)(puVar4 + 3) = 0xffffffff;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = 0xffffffff;
    *(undefined4 *)(puVar4 + 4) = 0xffffffff;
    *(undefined4 *)((longlong)puVar4 + 0x24) = 0xffffffff;
    *(undefined4 *)(puVar4 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar4 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar4 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar4 + 0x34) = 0;
    *(undefined4 *)(puVar4 + 7) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x3c) = 0;
    puVar4[8] = plVar1;
    puVar4[9] = plVar1;
    lVar3 = (**(code **)(*plVar1 + 8))(plVar1);
    if ((lVar3 == 0) && (lVar3 = (**(code **)(*(longlong *)puVar4[8] + 0x18))(), lVar3 == 0)) {
      (**(code **)(*(longlong *)puVar4[8] + 0x20))();
    }
    lVar3 = (**(code **)(*(longlong *)puVar4[9] + 8))();
    if ((lVar3 == 0) && (lVar3 = (**(code **)(*(longlong *)puVar4[9] + 0x18))(), lVar3 == 0)) {
      (**(code **)(*(longlong *)puVar4[9] + 0x20))();
    }
  }
  FUN_1432d8e00(param_1,param_2);
  return;
}



// FUNCTION 142079f60 FUN_142079f60 body=104 status=ok
// SIG undefined FUN_142079f60(void)

longlong FUN_142079f60(PSRWLOCK param_1,longlong param_2)

{
  PVOID pvVar1;
  
  AcquireSRWLockExclusive(param_1);
  pvVar1 = param_1[1].Ptr;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(param_2,pvVar1);
  *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)((longlong)pvVar1 + 0x50);
  FUN_14207a6c0(param_1 + 1,0,1,1);
  ReleaseSRWLockExclusive(param_1);
  return param_2;
}



// FUNCTION 142079fd0 FUN_142079fd0 body=49 status=ok
// SIG undefined FUN_142079fd0(void)

ulonglong FUN_142079fd0(undefined8 param_1,longlong param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_1432d8980();
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14207a010 FUN_14207a010 body=120 status=ok
// SIG undefined FUN_14207a010(void)

void FUN_14207a010(PSRWLOCK param_1,undefined8 param_2)

{
  int iVar1;
  DWORD DVar2;
  PVOID pvVar3;
  
  AcquireSRWLockExclusive(param_1);
  iVar1 = *(int *)&param_1[2].Ptr;
  *(int *)&param_1[2].Ptr = iVar1 + 1;
  if (*(int *)((longlong)&param_1[2].Ptr + 4) < iVar1 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1 + 1,iVar1);
  }
  pvVar3 = (PVOID)((longlong)iVar1 * 0x60 + (longlong)param_1[1].Ptr);
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(pvVar3,param_2);
  DVar2 = GetCurrentThreadId();
  *(DWORD *)((longlong)pvVar3 + 0x50) = DVar2;
                    /* WARNING: Could not recover jumptable at 0x00014207a081. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive(param_1);
  return;
}



// FUNCTION 14207a090 FUN_14207a090 body=761 status=ok
// SIG undefined FUN_14207a090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14207a090(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_e8 [32];
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  LARGE_INTEGER local_b8 [2];
  code *local_a8 [2];
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  DWORD local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  cVar2 = FUN_142036c70();
  if ((cVar2 != '\0') && (DVar3 = GetCurrentThreadId(), *(DWORD *)(param_1 + 0x48) == DVar3)) {
    if ((*(longlong *)(param_1 + 0x40) == 0) || (*(double *)(param_1 + 0x30) == 0.0)) {
      QueryPerformanceCounter(&local_c0);
      *(LARGE_INTEGER *)(param_1 + 0x40) = local_c0;
    }
    else {
      QueryPerformanceCounter(&local_c8);
      lVar7 = local_c8.QuadPart - *(longlong *)(param_1 + 0x40);
      dVar8 = (double)FGenericPlatformTime::GetSecondsPerCycle64();
      dVar9 = (double)lVar7;
      if (lVar7 < 0) {
        dVar9 = dVar9 + 1.8446744073709552e+19;
      }
      dVar8 = *(double *)(param_1 + 0x38) - dVar8 * dVar9 * 1000.0;
      if (0.0 <= dVar8) {
        dVar9 = *(double *)(param_1 + 0x30);
        if (dVar8 <= *(double *)(param_1 + 0x30)) {
          dVar9 = dVar8;
        }
        ((LARGE_INTEGER *)(param_1 + 0x40))->QuadPart = (LONGLONG)local_c8;
        *(double *)(param_1 + 0x38) = dVar9;
      }
      else {
        ((LARGE_INTEGER *)(param_1 + 0x40))->QuadPart = (LONGLONG)local_c8;
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
    }
    uVar4 = 0;
    if (*(int *)(param_2 + 8) != 0) {
      plVar5 = (longlong *)param_2[6];
      if ((longlong *)param_2[6] == (longlong *)0x0) {
        plVar5 = param_2 + 2;
      }
      if (plVar5 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar5 + 8))();
      }
    }
    (*(code *)*param_2)(uVar4);
    if ((*(double *)(param_1 + 0x30) != 0.0) && (*(longlong *)(param_1 + 0x40) != 0)) {
      QueryPerformanceCounter(local_b8);
      lVar7 = local_b8[0].QuadPart - *(longlong *)(param_1 + 0x40);
      dVar8 = (double)FGenericPlatformTime::GetSecondsPerCycle64();
      dVar9 = (double)lVar7;
      if (lVar7 < 0) {
        dVar9 = dVar9 + 1.8446744073709552e+19;
      }
      dVar9 = *(double *)(param_1 + 0x38) - dVar8 * dVar9 * 1000.0;
      dVar8 = 0.0;
      if ((0.0 <= dVar9) &&
         (dVar8 = *(double *)(param_1 + 0x30), dVar9 <= *(double *)(param_1 + 0x30))) {
        dVar8 = dVar9;
      }
      *(double *)(param_1 + 0x38) = dVar8;
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    goto LAB_14207a31a;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x50));
  local_78 = (longlong *)0x0;
  local_68 = 0;
  if (*(int *)(param_2 + 8) == 0) {
LAB_14207a279:
    local_a8[0] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  else {
    puVar6 = (undefined8 *)param_2[6];
    if ((undefined8 *)param_2[6] == (undefined8 *)0x0) {
      puVar6 = param_2 + 2;
    }
    if (puVar6 == (undefined8 *)0x0) goto LAB_14207a279;
    plVar5 = (longlong *)(**(code **)*puVar6)(puVar6,local_98);
    (**(code **)(*plVar5 + 8))(plVar5);
    local_a8[0] = (code *)*param_2;
  }
  local_58 = GetCurrentThreadId();
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar1 + 1;
  if (*(int *)(param_1 + 100) < iVar1 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
  }
  lVar7 = (longlong)iVar1 * 0x60 + *(longlong *)(param_1 + 0x58);
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(lVar7,local_a8);
  *(DWORD *)(lVar7 + 0x50) = local_58;
  if (local_68 != 0) {
    plVar5 = local_98;
    if (local_78 != (longlong *)0x0) {
      plVar5 = local_78;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x50));
LAB_14207a31a:
  if (*(int *)(param_2 + 8) != 0) {
    plVar5 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar5 = param_2 + 2;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (param_2[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14207a390 FUN_14207a390 body=512 status=ok
// SIG undefined FUN_14207a390(void)

void FUN_14207a390(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  DWORD DVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  LARGE_INTEGER local_48;
  LARGE_INTEGER local_40;
  LARGE_INTEGER local_38 [4];
  
  if ((*(double *)(param_1 + 0x30) == 0.0) || (0.0 < *(double *)(param_1 + 0x38))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  cVar3 = FUN_142036c70();
  if ((cVar3 == '\0') || (DVar4 = GetCurrentThreadId(), *(DWORD *)(param_1 + 0x48) != DVar4)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar5 = 0;
  if ((*(char *)(param_1 + 0x4c) != '\0') || ((bVar1 && (bVar2)))) {
    if ((*(longlong *)(param_1 + 0x40) == 0) || (*(double *)(param_1 + 0x30) == 0.0)) {
      QueryPerformanceCounter(&local_40);
      *(LARGE_INTEGER *)(param_1 + 0x40) = local_40;
    }
    else {
      QueryPerformanceCounter(&local_48);
      lVar7 = local_48.QuadPart - *(longlong *)(param_1 + 0x40);
      dVar8 = (double)FGenericPlatformTime::GetSecondsPerCycle64();
      dVar9 = (double)lVar7;
      if (lVar7 < 0) {
        dVar9 = dVar9 + 1.8446744073709552e+19;
      }
      dVar8 = *(double *)(param_1 + 0x38) - dVar8 * dVar9 * 1000.0;
      if (0.0 <= dVar8) {
        dVar9 = *(double *)(param_1 + 0x30);
        if (dVar8 <= *(double *)(param_1 + 0x30)) {
          dVar9 = dVar8;
        }
        ((LARGE_INTEGER *)(param_1 + 0x40))->QuadPart = (LONGLONG)local_48;
        *(double *)(param_1 + 0x38) = dVar9;
      }
      else {
        ((LARGE_INTEGER *)(param_1 + 0x40))->QuadPart = (LONGLONG)local_48;
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
    }
    if (*(int *)(param_2 + 8) != 0) {
      plVar6 = (longlong *)param_2[6];
      if ((longlong *)param_2[6] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      if (plVar6 != (longlong *)0x0) {
        uVar5 = (**(code **)(*plVar6 + 8))();
      }
    }
    (*(code *)*param_2)(uVar5);
    if ((*(double *)(param_1 + 0x30) != 0.0) && (*(longlong *)(param_1 + 0x40) != 0)) {
      QueryPerformanceCounter(local_38);
      lVar7 = local_38[0].QuadPart - *(longlong *)(param_1 + 0x40);
      dVar8 = (double)FGenericPlatformTime::GetSecondsPerCycle64();
      dVar9 = (double)lVar7;
      if (lVar7 < 0) {
        dVar9 = dVar9 + 1.8446744073709552e+19;
      }
      dVar9 = *(double *)(param_1 + 0x38) - dVar8 * dVar9 * 1000.0;
      dVar8 = 0.0;
      if ((0.0 <= dVar9) &&
         (dVar8 = *(double *)(param_1 + 0x30), dVar9 <= *(double *)(param_1 + 0x30))) {
        dVar8 = dVar9;
      }
      *(double *)(param_1 + 0x38) = dVar8;
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    FUN_14207a010(param_1 + 0x18,param_2);
  }
  if (*(int *)(param_2 + 8) != 0) {
    plVar6 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar6 = param_2 + 2;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (param_2[6] == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 14207a590 FUN_14207a590 body=9 status=ok
// SIG undefined FUN_14207a590(void)

void FUN_14207a590(longlong param_1)

{
  FUN_14207a010(param_1 + 0x18);
  return;
}



// FUNCTION 14207a5a0 FUN_14207a5a0 body=280 status=ok
// SIG undefined FUN_14207a5a0(void)

void FUN_14207a5a0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  bool bVar7;
  
  cVar6 = IsInRenderingThread();
  if (cVar6 != '\0') {
    puVar3 = *(undefined8 **)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if ((*(char *)(puVar3 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')
            ))) {
          LOCK();
          bVar7 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar7) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar7) {
            TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if ((*(char *)(puVar3 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')
            ))) {
          LOCK();
          bVar7 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar7) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar7) {
            TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x50);
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x60) != 1)) &&
       (plVar5 = *(longlong **)(*(longlong *)(lVar4 + 0x68) + 8), plVar5 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014207a6ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14207a6c0 FUN_14207a6c0 body=233 status=ok
// SIG undefined FUN_14207a6c0(void)

void FUN_14207a6c0(longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_3 != 0) {
    plVar3 = (longlong *)(*param_1 + 0x30 + (longlong)param_2 * 0x60);
    iVar4 = param_3;
    do {
      if ((int)plVar3[2] != 0) {
        plVar2 = (longlong *)*plVar3;
        if ((longlong *)*plVar3 == (longlong *)0x0) {
          plVar2 = plVar3 + -4;
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,0);
        }
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 0xc;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = (int)param_1[1];
    iVar1 = (iVar4 - param_2) - param_3;
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x60),
                 (void *)((longlong)(param_2 + param_3) * 0x60 + *param_1),(longlong)iVar1 * 0x60);
      iVar4 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar4 - param_3;
    if (param_4 != '\0') {
      TArray<FInspectStat,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 14207a7b0 FUN_14207a7b0 body=149 status=ok
// SIG undefined FUN_14207a7b0(void)

undefined8 FUN_14207a7b0(longlong param_1,longlong *param_2)

{
  RefCountImpl *this;
  
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  }
  *(longlong **)(param_1 + 8) = param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
    if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    }
  }
  *(longlong **)(param_1 + 8) = param_2;
  this = (RefCountImpl *)0x0;
  if (param_2 != (longlong *)0x0) {
    this = (RefCountImpl *)(**(code **)(*param_2 + 0x18))(param_2);
  }
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(this);
  }
  if (*(RefCountImpl **)(param_1 + 0x90) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x90));
  }
  *(RefCountImpl **)(param_1 + 0x90) = this;
  return 1;
}



// FUNCTION 14207a850 FUN_14207a850 body=62 status=ok
// SIG undefined FUN_14207a850(void)

undefined8 FUN_14207a850(longlong param_1,longlong *param_2)

{
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  }
  *(longlong **)(param_1 + 8) = param_2;
  return 1;
}



// FUNCTION 14207a890 FUN_14207a890 body=165 status=ok
// SIG undefined FUN_14207a890(void)

void FUN_14207a890(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    if (param_3 == 0) {
      uVar2 = 0;
      if (*param_1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (*param_1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))();
        *param_1 = lVar1;
        param_1[2] = uVar2;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_2,uVar2 * 8,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 14207a940 FUN_14207a940 body=94 status=ok
// SIG undefined FUN_14207a940(void)

void FUN_14207a940(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar1 = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 8) + 1;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10 + lVar1) != -2) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x10 + lVar1) = 0xfffffffffffffffe;
      }
      lVar1 = lVar1 + 0x38;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14207a9a0 FUN_14207a9a0 body=328 status=ok
// SIG undefined FUN_14207a9a0(void)

void FUN_14207a9a0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_1432f61c0(param_1 + 0xb0);
  uVar5 = 0;
  uVar4 = uVar5;
  if (*(longlong *)(param_1 + 0x158) != 0) {
    do {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x150) + uVar4 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        lVar2 = puVar1[4];
        lVar3 = puVar1[9];
        FUN_1432f4260(param_1 + 0x168,lVar3 << 0x18,lVar2 + 0xfU >> 4);
        *(longlong *)(param_1 + 0x188) = *(longlong *)(param_1 + 0x188) - lVar2;
        *(undefined8 *)(*(longlong *)(param_1 + 0x150) + lVar3 * 8) = 0;
        (**(code **)*puVar1)(puVar1,1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ulonglong *)(param_1 + 0x158));
  }
  uVar4 = uVar5;
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    do {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x198) + uVar4 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        lVar2 = puVar1[4];
        lVar3 = puVar1[9];
        FUN_1432f4260(param_1 + 0x1b0,lVar3 << 0x18,lVar2 + 0xfU >> 4);
        *(longlong *)(param_1 + 0x1d0) = *(longlong *)(param_1 + 0x1d0) - lVar2;
        *(undefined8 *)(*(longlong *)(param_1 + 0x198) + lVar3 * 8) = 0;
        (**(code **)*puVar1)(puVar1,1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ulonglong *)(param_1 + 0x1a0));
  }
  uVar4 = param_1 + 0x1e8;
  if ((ulonglong *)(param_1 + 0x1f0) == (ulonglong *)0x0) {
    uVar4 = uVar5;
  }
  *(ulonglong *)(param_1 + 0x1f0) = uVar4;
  *(ulonglong *)(param_1 + 0x1f8) = uVar4;
  FUN_1432f6660(param_1 + 0x68);
  return;
}



// FUNCTION 14207aaf0 FUN_14207aaf0 body=110 status=ok
// SIG undefined FUN_14207aaf0(void)

undefined8 FUN_14207aaf0(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  bool bVar3;
  
  LOCK();
  bVar3 = (int)param_1[0x13] == 0;
  if (bVar3) {
    *(int *)(param_1 + 0x13) = 0;
  }
  UNLOCK();
  while (bVar3) {
    (**(code **)(*param_1 + 0x10))(param_1);
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      lVar1 = *(longlong *)param_1[0x12];
      uVar2 = (**(code **)(*param_1 + 0x50))(param_1);
      (**(code **)(lVar1 + 0x20))(param_1[0x12],uVar2,0);
    }
    LOCK();
    bVar3 = (int)param_1[0x13] == 0;
    if (bVar3) {
      *(int *)(param_1 + 0x13) = 0;
    }
    UNLOCK();
  }
  return 0;
}



// FUNCTION 14207ab60 FUN_14207ab60 body=66 status=ok
// SIG undefined FUN_14207ab60(void)

void FUN_14207ab60(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    *(undefined8 *)(param_1 + 0x33e8) = param_2;
    *(undefined8 *)(param_1 + 0x3030) = param_2;
    (**(code **)(*(longlong *)(param_1 + 0x3368) + 0x30))((longlong *)(param_1 + 0x3368),param_2);
  }
  return;
}



// FUNCTION 14207abb0 FUN_14207abb0 body=56 status=ok
// SIG undefined FUN_14207abb0(void)

undefined8 FUN_14207abb0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1432c20b0();
  uVar1 = 0xffffffff;
  if (param_2 != 0) {
    uVar1 = 10;
  }
  *(int *)(param_1 + 0xd0) = (int)uVar1;
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}



// FUNCTION 14207abf0 FUN_14207abf0 body=38 status=ok
// SIG undefined FUN_14207abf0(void)

undefined4 FUN_14207abf0(longlong param_1)

{
  DWORD DVar1;
  
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(param_1 + 0x48) = DVar1;
  FUN_142058c50(*(undefined4 *)(param_1 + 0x48),param_1);
  return *(undefined4 *)(param_1 + 0x48);
}



// FUNCTION 14207ac30 FUN_14207ac30 body=48 status=ok
// SIG undefined FUN_14207ac30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14207ac30(undefined8 param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_146ace8b0);
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_146ace8b0);
  _DAT_146ace8b8 = param_1;
  return;
}



// FUNCTION 14207ac60 FUN_14207ac60 body=42 status=ok
// SIG undefined FUN_14207ac60(void)

void FUN_14207ac60(longlong param_1,longlong *param_2)

{
  FString::operator=(param_1 + 8);
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14207ac90 FUN_14207ac90 body=734 status=ok
// SIG undefined FUN_14207ac90(void)

undefined8 FUN_14207ac90(longlong param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  char cVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uStack_40;
  undefined4 uStack_34;
  
  uVar1 = *(uint *)((longlong)param_2 + 0x3c);
  lVar3 = param_2[1];
  uStack_40 = *(uint *)(param_2 + 7);
  lVar4 = *param_2;
  uVar5 = param_2[2];
  lVar6 = param_2[3];
  uVar2 = *(uint *)(param_2 + 8);
  uVar12 = 0x18;
  if (*(uint *)(param_2 + 6) < 0x18) {
    uVar12 = *(uint *)(param_2 + 6);
  }
  if (uVar12 == 0) {
    uVar12 = 1;
  }
  uVar14 = ((ulonglong)uVar1 + (ulonglong)uVar2 * 2) * 2;
  if (uVar14 <= (ulonglong)param_2[4]) {
    uVar14 = param_2[4];
  }
  if (uVar1 < uStack_40) {
    uStack_40 = uVar1 >> 2;
  }
  uVar13 = 0;
  FUN_1432f61c0(param_1 + 0xa8);
  if ((*(ulonglong *)(param_1 + 0x38) == uVar14) ||
     (cVar9 = FUN_1432f65e0(param_1 + 0x60,*(undefined8 *)(param_1 + 8),uVar14), cVar9 != '\0')) {
    if ((*(longlong *)(param_1 + 0x18) != lVar4) || (*(ulonglong *)(param_1 + 0x28) != uVar5)) {
      FUN_1432f61c0(param_1 + 0xa8);
      if (*(longlong *)(param_1 + 0x150) != 0) {
        do {
          puVar7 = *(undefined8 **)(*(longlong *)(param_1 + 0x148) + uVar13 * 8);
          if (puVar7 != (undefined8 *)0x0) {
            lVar11 = puVar7[4];
            lVar8 = puVar7[9];
            FUN_1432f4260(param_1 + 0x160,lVar8 << 0x18,lVar11 + 0xfU >> 4);
            *(longlong *)(param_1 + 0x180) = *(longlong *)(param_1 + 0x180) - lVar11;
            *(undefined8 *)(*(longlong *)(param_1 + 0x148) + lVar8 * 8) = 0;
            (**(code **)*puVar7)(puVar7,1);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(ulonglong *)(param_1 + 0x150));
      }
      uVar13 = 0;
      if (*(longlong *)(param_1 + 0x198) != 0) {
        do {
          puVar7 = *(undefined8 **)(*(longlong *)(param_1 + 400) + uVar13 * 8);
          if (puVar7 != (undefined8 *)0x0) {
            lVar11 = puVar7[4];
            lVar8 = puVar7[9];
            FUN_1432f4260(param_1 + 0x1a8,lVar8 << 0x18,lVar11 + 0xfU >> 4);
            *(longlong *)(param_1 + 0x1c8) = *(longlong *)(param_1 + 0x1c8) - lVar11;
            *(undefined8 *)(*(longlong *)(param_1 + 400) + lVar8 * 8) = 0;
            (**(code **)*puVar7)(puVar7,1);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(ulonglong *)(param_1 + 0x198));
      }
      lVar11 = param_1 + 0x1e0;
      if ((longlong *)(param_1 + 0x1e8) == (longlong *)0x0) {
        lVar11 = 0;
      }
      *(longlong *)(param_1 + 0x1e8) = lVar11;
      *(longlong *)(param_1 + 0x1f0) = lVar11;
      if ((lVar4 != 0) && (cVar9 = FUN_14207c920(param_1 + -8,lVar4,1), cVar9 == '\0')) {
        if (*(longlong *)(param_1 + 0x18) != 0) {
          FUN_14207c920(param_1 + -8,*(longlong *)(param_1 + 0x18),1);
        }
        return 0;
      }
      uVar13 = ((uVar5 >> 4) * 5) / 9;
      *(ulonglong *)(param_1 + 0x178) = uVar13 * 0x10;
      *(ulonglong *)(param_1 + 0x1c0) = (uVar5 & 0xfffffffffffffff0) + uVar13 * -0x10;
    }
    uVar10 = 1;
    *(longlong *)(param_1 + 0x18) = lVar4;
    *(longlong *)(param_1 + 0x20) = lVar3;
    *(ulonglong *)(param_1 + 0x28) = uVar5;
    *(longlong *)(param_1 + 0x30) = lVar6;
    *(ulonglong *)(param_1 + 0x38) = uVar14;
    *(undefined8 *)(param_1 + 0x40) = 0x40000;
    *(ulonglong *)(param_1 + 0x48) = (ulonglong)uVar12;
    *(ulonglong *)(param_1 + 0x50) = CONCAT44(uVar1,uStack_40);
    *(ulonglong *)(param_1 + 0x58) = CONCAT44(uStack_34,uVar2);
  }
  else {
    FUN_1432f65e0(param_1 + 0x60,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x38));
    uVar10 = 0;
  }
  return uVar10;
}



// FUNCTION 14207af70 FUN_14207af70 body=1644 status=ok
// SIG undefined FUN_14207af70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14207af70(longlong param_1,undefined4 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 **ppuVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  short sVar17;
  int iVar18;
  bool bVar19;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined1 local_147 [7];
  undefined8 *local_140;
  int local_138;
  ulonglong *local_130;
  undefined8 **local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  uint local_c8;
  int local_c4 [16];
  undefined1 auStack_84 [4];
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  ulonglong local_58;
  undefined2 local_50;
  short local_4e;
  ulonglong local_48;
  ulonglong uVar16;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  iVar6 = FUN_142074270(param_2);
  iVar18 = *(int *)(&DAT_144f73c00 + (longlong)iVar6 * 8);
  iVar6 = *(int *)(&DAT_144f73c04 + (longlong)iVar6 * 8);
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1000) + 0x1be0 + (longlong)iVar18 * 8);
  *(longlong *)(param_1 + 0x1008) = lVar7;
  *(undefined8 *)(param_1 + 0x1010) = *(undefined8 *)(lVar7 + 0xc0);
  lVar7 = *(longlong *)(lVar7 + 0x48);
  local_138 = iVar18;
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  lVar7 = *(longlong *)(lVar7 + 0x38);
  puVar10 = *(undefined8 **)(param_1 + 0x1018);
  *(longlong *)(param_1 + 0x1018) = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  if (puVar10 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar10 + 1);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      if ((*(char *)(puVar10 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))
         ) {
        LOCK();
        bVar19 = *(int *)((longlong)puVar10 + 0xc) == 0;
        if (bVar19) {
          *(int *)((longlong)puVar10 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar19) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar10);
        }
      }
      else {
        (**(code **)*puVar10)(puVar10,1);
      }
    }
  }
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1000) + 0x1210 + (longlong)iVar6 * 8);
  *(longlong *)(param_1 + 0x1020) = lVar7;
  *(undefined8 *)(param_1 + 0x1028) = *(undefined8 *)(lVar7 + 0xc0);
  lVar7 = *(longlong *)(lVar7 + 0x48);
  if (*(char *)(lVar7 + 0x28) == '\0') {
    FUN_1419f3850(lVar7);
  }
  *(undefined8 *)(param_1 + 0x1030) = *(undefined8 *)(lVar7 + 0x40);
  if ((param_3 != 0) && (*(longlong *)(param_3 + 0x10) == 0)) {
    lVar7 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x140,0);
    if (lVar7 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_142061f70(lVar7,param_3,*(undefined8 *)(param_1 + 0x1010));
    }
    if (*(RefCountImpl **)(param_3 + 0x10) != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_3 + 0x10));
    }
    *(undefined8 *)(param_3 + 0x10) = uVar8;
  }
  uVar16 = *(ulonglong *)(param_3 + 0x10);
  *(ulonglong *)(param_1 + 0x1038) = uVar16;
  lVar7 = *(longlong *)(param_1 + 0x1098);
  local_50 = (undefined2)iVar18;
  ppuVar2 = (undefined8 **)(param_1 + 0x1040);
  sVar17 = (short)iVar6;
  local_58 = uVar16;
  local_4e = sVar17;
  if (lVar7 != 0) {
    uVar9 = FUN_142062cb0(&local_148,&local_58);
    uVar9 = uVar9 & *(ulonglong *)(lVar7 + 8);
    lVar14 = uVar9 * 0x28;
    puVar11 = (ulonglong *)(lVar7 + 0x10 + lVar14);
    if ((*puVar11 != 0xfffffffffffffffe) && (uVar13 = uVar9, puVar11[1] == uVar9)) {
      while ((puVar11[1] != uVar9 ||
             (((puVar11[2] != uVar16 || ((short)puVar11[3] != (short)local_138)) ||
              (*(short *)((longlong)puVar11 + 0x1a) != sVar17))))) {
        uVar13 = *puVar11;
        if (uVar13 == 0xffffffffffffffff) goto LAB_14207b2b7;
        lVar14 = uVar13 * 0x28;
        puVar11 = (ulonglong *)(lVar7 + 0x10 + lVar14);
      }
      if ((-1 < (longlong)uVar13) && (lVar14 = lVar7 + 0x20 + lVar14, lVar14 != 0)) {
        if (ppuVar2 != (undefined8 **)0x0) {
          TRefCountPtr<FRHIIndexBuffer>::operator=(ppuVar2,*(undefined8 *)(lVar14 + 0x10));
        }
        goto LAB_14207b1d6;
      }
    }
  }
LAB_14207b2b7:
  local_158 = *(undefined8 *)(param_1 + 0x1030);
  local_150 = 0;
  local_160 = 0;
  local_168 = 0;
  (**(code **)(*DAT_146ab6358 + 0xe8))
            (DAT_146ab6358,&local_140,*(undefined8 *)(uVar16 + 0x118),
             *(undefined8 *)(param_1 + 0x1018));
  if (ppuVar2 != &local_140) {
    puVar10 = *ppuVar2;
    *ppuVar2 = local_140;
    local_140 = (undefined8 *)0x0;
    if (puVar10 == (undefined8 *)0x0) goto LAB_14207b3c0;
    LOCK();
    piVar1 = (int *)(puVar10 + 1);
    iVar18 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar18 == 1) {
      if ((*(char *)(puVar10 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))
         ) {
        LOCK();
        bVar19 = *(int *)((longlong)puVar10 + 0xc) == 0;
        if (bVar19) {
          *(int *)((longlong)puVar10 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar19) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar10);
        }
      }
      else {
        (**(code **)*puVar10)(puVar10,1);
      }
    }
  }
  puVar10 = local_140;
  if (local_140 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_140 + 1);
    iVar18 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar18 == 1) {
      if ((*(char *)(local_140 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))
         ) {
        LOCK();
        bVar19 = *(int *)((longlong)puVar10 + 0xc) == 0;
        if (bVar19) {
          *(int *)((longlong)puVar10 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar19) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar10);
        }
      }
      else {
        (**(code **)*puVar10)(puVar10,1);
      }
    }
  }
LAB_14207b3c0:
  local_130 = &local_58;
  local_128 = ppuVar2;
  uVar8 = FUN_142062cb0(local_147,&local_58);
  FUN_14205bf20(param_1 + 0x1098,param_1 + 0x1098,&local_130,uVar8);
  if ((*(ulonglong **)(param_1 + 0x1098) != (ulonglong *)0x0) &&
     (1000 < **(ulonglong **)(param_1 + 0x1098))) {
    FUN_142062530(param_1 + 0x1098);
  }
LAB_14207b1d6:
  uVar16 = 0;
  lVar7 = *(longlong *)(param_1 + 0x10a0);
  local_108 = 0;
  uStack_100 = 0;
  iVar18 = 0;
  uStack_f0 = 0;
  local_d0 = 0;
  local_c4[0] = 0;
  local_c4[1] = 0;
  local_c4[2] = 0;
  local_c4[3] = 0;
  local_c4[4] = 0;
  local_c4[5] = 0;
  local_c4[6] = 0;
  local_c4[7] = 0;
  local_c4[8] = 0;
  local_c4[9] = 0;
  local_c4[10] = 0;
  local_c4[0xb] = 0;
  local_c4[0xc] = 0;
  local_c4[0xd] = 0;
  local_c4[0xe] = 0;
  stack0xffffffffffffff78 = 0;
  local_80 = 0;
  local_78 = 0;
  local_74 = 0;
  local_6c = 0;
  local_64 = 0;
  local_c8 = *(uint *)(lVar7 + 0x98);
  if (local_c8 != 0) {
    do {
      lVar14 = lVar7 + uVar16 * 0x18;
      if (*(longlong *)(lVar14 + 0xa0) == 0) {
        local_c4[uVar16] = 0;
      }
      else {
        local_c4[uVar16] = *(int *)(*(longlong *)(lVar14 + 0xa0) + 0x3c);
        local_c4[uVar16 + 8] = *(int *)(*(longlong *)(lVar14 + 0xa0) + 0x40);
      }
      auStack_84[uVar16] = *(undefined1 *)(lVar14 + 0xb0);
      *(undefined1 *)((longlong)&local_80 + uVar16 + 4) = *(undefined1 *)(lVar14 + 0xb1);
      if (local_c4[uVar16] != 0) {
        local_64 = CONCAT22(local_64._2_2_,*(undefined2 *)(*(longlong *)(lVar14 + 0xa0) + 0x38));
      }
      uVar15 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar15;
    } while (uVar15 < local_c8);
  }
  if (*(longlong *)(lVar7 + 0x160) == 0) {
    local_74 = local_74 & 0xffffffff00000000;
  }
  else {
    iVar18 = *(int *)(*(longlong *)(lVar7 + 0x160) + 0x3c);
    local_74 = CONCAT44(*(undefined4 *)(*(longlong *)(lVar7 + 0x160) + 0x40),iVar18);
  }
  local_6c = *(undefined8 *)(lVar7 + 0x168);
  if (iVar18 != 0) {
    local_64 = CONCAT22(local_64._2_2_,*(undefined2 *)(*(longlong *)(lVar7 + 0x160) + 0x38));
  }
  lVar14 = *(longlong *)(param_1 + 0x1000);
  local_e8 = *(undefined8 *)(lVar14 + 0x33f0);
  uStack_e0 = *(undefined8 *)(lVar14 + 0x3408);
  local_d8 = *(undefined8 *)(lVar14 + 0x33f8);
  local_118 = *(undefined8 *)(*(longlong *)(param_1 + 0x1038) + 0x118);
  uStack_110 = *(undefined8 *)(param_1 + 0x1018);
  local_f8 = *(undefined8 *)(param_1 + 0x1030);
  local_cc = 0;
  FUN_141ed6ac0(lVar7,&local_118,2,1);
  lVar7 = *(longlong *)(param_1 + 0x10a0);
  uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x1000) + 0x3400);
  puVar12 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 3;
  if (*(undefined8 **)(lVar7 + 0x38) < puVar10) {
    FMemStackBase::AllocateNewChunk(lVar7 + 0x30,0x20);
    puVar12 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 3;
  }
  *(undefined8 **)(lVar7 + 0x30) = puVar10;
  *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
  **(undefined8 **)(lVar7 + 8) = puVar12;
  *(undefined8 **)(lVar7 + 8) = puVar12 + 1;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_143f489c0;
  *(undefined4 *)(puVar12 + 2) = uVar4;
  return 1;
}



// FUNCTION 14207b5e0 FUN_14207b5e0 body=1160 status=ok
// SIG undefined FUN_14207b5e0(void)

void FUN_14207b5e0(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  undefined2 param_5,uint param_6)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  bool bVar13;
  undefined8 *local_90;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  longlong local_40;
  
  if (*(char *)(param_4 + 0x45) != '\0') {
    local_40 = (param_3 & 0xffffffff) * 5;
    uVar11 = param_6;
    do {
      lVar4 = local_40;
      lVar10 = (ulonglong)(uVar11 + -param_6) * 0x20 + *(longlong *)(param_4 + 0x68);
      if (*(longlong *)(lVar10 + 8) == 0) {
        lVar12 = FUN_1416f8720(*(undefined4 *)(lVar10 + 0x18));
        if (((lVar12 != 0) &&
            (lVar12 = FUN_1416f8720(*(undefined4 *)(lVar10 + 0x18)),
            *(longlong *)(lVar12 + 0x60) != 0)) &&
           (lVar12 = FUN_1416f8720(*(undefined4 *)(lVar10 + 0x18)),
           *(longlong *)(*(longlong *)(lVar12 + 0x60) + 0x30) != 0)) {
          lVar12 = FUN_1416f8720(*(undefined4 *)(lVar10 + 0x18));
          lVar12 = (**(code **)(**(longlong **)(*(longlong *)(lVar12 + 0x60) + 0x30) + 8))();
          if (lVar12 != 0) {
            lVar10 = FUN_1416f8720(*(undefined4 *)(lVar10 + 0x18));
            local_90 = (undefined8 *)
                       (**(code **)(**(longlong **)(*(longlong *)(lVar10 + 0x60) + 0x30) + 8))();
            if (local_90 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(local_90 + 1) = *(int *)(local_90 + 1) + 1;
              UNLOCK();
            }
            goto LAB_14207b71a;
          }
        }
        local_90 = (undefined8 *)0x0;
      }
      else {
        local_90 = *(undefined8 **)(*(longlong *)(lVar10 + 8) + 0x70);
        if (local_90 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(local_90 + 1) = *(int *)(local_90 + 1) + 1;
          UNLOCK();
        }
      }
LAB_14207b71a:
      local_48 = local_90;
      cVar6 = (char)((ushort)param_5 >> 8);
      uVar7 = 0;
      if (1 < *(byte *)(param_4 + 0x44)) {
        uVar7 = 4;
      }
      lVar10 = param_1 + ((byte)(cVar6 * '\x03' + (char)param_5) | uVar7) * 8;
      local_80 = *(undefined8 **)(lVar10 + 0x1058);
      if (local_80 == (undefined8 *)0x0) {
        local_64 = 0x7f7fffff;
        local_6c = 0;
        local_70 = 0;
        local_5c = 0;
        if (cVar6 == '\x01') {
          local_70 = 2;
        }
        local_58 = 0;
        local_6f = (char)param_5 == '\x01';
        local_6e = local_6f;
        local_6d = local_6f;
        (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,&local_78,&local_70);
        TRefCountPtr<FRHIIndexBuffer>::operator=(lVar10 + 0x1058,local_78);
        local_80 = local_78;
        local_78 = (undefined8 *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_80 + 1) = *(int *)(local_80 + 1) + 1;
        UNLOCK();
      }
      lVar10 = *(longlong *)(param_2 + 0x18);
      lVar12 = (longlong)*(short *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x10) + lVar4 * 2)
      ;
      local_50 = *(undefined8 *)(param_2 + 0x28);
      uVar3 = *(ushort *)(lVar10 + 0x172 + lVar12 * 4);
      lVar4 = *(longlong *)(param_1 + 0x10a0);
      if ((uVar3 != 0) && (uVar11 < uVar3)) {
        uVar3 = *(ushort *)(lVar10 + 0x170 + lVar12 * 4);
        puVar9 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar9 + 5;
        if (*(undefined8 **)(lVar4 + 0x38) < puVar8) {
          FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x30);
          puVar9 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar8 = puVar9 + 5;
        }
        *(undefined8 **)(lVar4 + 0x30) = puVar8;
        *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
        **(undefined8 **)(lVar4 + 8) = puVar9;
        *(undefined8 **)(lVar4 + 8) = puVar9 + 1;
        puVar9[1] = 0;
        *puVar9 = &PTR_LAB_143f59c80;
        puVar9[2] = local_50;
        *(uint *)(puVar9 + 3) = uVar3 + uVar11;
        puVar9[4] = local_48;
      }
      uVar5 = local_50;
      uVar3 = *(ushort *)(lVar10 + 0x172 + lVar12 * 4);
      if ((uVar3 != 0) && (uVar11 < uVar3)) {
        uVar3 = *(ushort *)(lVar10 + 0x170 + lVar12 * 4);
        puVar9 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar9 + 5;
        if (*(undefined8 **)(lVar4 + 0x38) < puVar8) {
          FMemStackBase::AllocateNewChunk(lVar4 + 0x30,0x30);
          puVar9 = (undefined8 *)(*(longlong *)(lVar4 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar8 = puVar9 + 5;
        }
        *(undefined8 **)(lVar4 + 0x30) = puVar8;
        *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
        **(undefined8 **)(lVar4 + 8) = puVar9;
        *(undefined8 **)(lVar4 + 8) = puVar9 + 1;
        puVar9[1] = 0;
        *puVar9 = &PTR_LAB_143f59c70;
        puVar9[2] = uVar5;
        *(uint *)(puVar9 + 3) = uVar3 + uVar11;
        puVar9[4] = local_80;
      }
      if (local_80 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_80 + 1);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          if ((*(char *)(local_80 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))) {
            LOCK();
            bVar13 = *(int *)((longlong)local_80 + 0xc) == 0;
            if (bVar13) {
              *(int *)((longlong)local_80 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar13) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,local_80);
            }
          }
          else {
            (**(code **)*local_80)(local_80,1);
          }
        }
      }
      if (local_90 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_90 + 1);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          if ((*(char *)(local_90 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))) {
            LOCK();
            bVar13 = *(int *)((longlong)local_90 + 0xc) == 0;
            if (bVar13) {
              *(int *)((longlong)local_90 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar13) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,local_90);
            }
          }
          else {
            (**(code **)*local_90)(local_90,1);
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (-param_6 + uVar11 < (uint)*(byte *)(param_4 + 0x45));
  }
  *(longlong *)(param_1 + 0x38 + (ulonglong)param_6 * 8) = param_4;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2 + 0x38);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2 + 0x10);
  return;
}



// FUNCTION 14207ba70 FUN_14207ba70 body=160 status=ok
// SIG undefined FUN_14207ba70(void)

void FUN_14207ba70(longlong param_1,double param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  LARGE_INTEGER local_res8;
  
  *(double *)(param_1 + 0x30) = param_2;
  if ((param_2 != 0.0) && (*(longlong *)(param_1 + 0x40) != 0)) {
    QueryPerformanceCounter(&local_res8);
    lVar1 = local_res8.QuadPart - *(longlong *)(param_1 + 0x40);
    dVar2 = (double)FGenericPlatformTime::GetSecondsPerCycle64();
    dVar3 = (double)lVar1;
    if (lVar1 < 0) {
      dVar3 = dVar3 + 1.8446744073709552e+19;
    }
    dVar3 = *(double *)(param_1 + 0x38) - dVar2 * dVar3 * 1000.0;
    dVar2 = 0.0;
    if ((0.0 <= dVar3) &&
       (dVar2 = *(double *)(param_1 + 0x30), dVar3 <= *(double *)(param_1 + 0x30))) {
      dVar2 = dVar3;
    }
    ((LARGE_INTEGER *)(param_1 + 0x40))->QuadPart = (LONGLONG)local_res8;
    *(double *)(param_1 + 0x38) = dVar2;
  }
  return;
}



// FUNCTION 14207bb10 FUN_14207bb10 body=194 status=ok
// SIG undefined FUN_14207bb10(void)

void FUN_14207bb10(longlong param_1,longlong param_2,ulonglong param_3,void *param_4,uint param_5,
                  int param_6)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (param_3 & 0xffffffff) * 10;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x10);
  if (*(short *)(lVar1 + 6 + lVar2) != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(param_1 +
                       ((ulonglong)((uint)*(byte *)(lVar1 + 4 + lVar2) * param_6) +
                       (longlong)*(short *)(lVar1 + 2 + lVar2) + 0x18) * 4),param_4,
               (ulonglong)param_5 << 2);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x10);
  if (*(short *)(lVar1 + 6 + lVar2) != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(param_1 +
                       ((ulonglong)((uint)*(byte *)(lVar1 + 4 + lVar2) * param_6) +
                       (longlong)*(short *)(lVar1 + 2 + lVar2) + 0x18) * 4),param_4,
               (ulonglong)param_5 << 2);
  }
  *(undefined1 *)((param_3 & 0xffffffff) + 0x18 + param_1) = 1;
  return;
}



// FUNCTION 14207bbe0 FUN_14207bbe0 body=88 status=ok
// SIG undefined FUN_14207bbe0(void)

bool FUN_14207bbe0(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146ace8d8;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] != 0;
    }
  }
  return *piVar1 != 0;
}



// FUNCTION 14207bc40 IsGarbageCollecting body=16 status=ok
// SIG undefined IsGarbageCollecting(void)

undefined8 IsGarbageCollecting(void)

{
  ulonglong uVar1;
  bool bVar2;
  
  uVar1 = 0;
  LOCK();
  bVar2 = DAT_146ace8c0 == 0;
  if (bVar2) {
    DAT_146ace8c0 = 0;
  }
  else {
    uVar1 = (ulonglong)DAT_146ace8c0;
  }
  UNLOCK();
  return CONCAT71((int7)(uVar1 >> 8),!bVar2);
}



// FUNCTION 14207bc50 FUN_14207bc50 body=158 status=ok
// SIG undefined FUN_14207bc50(void)

bool FUN_14207bc50(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)(param_1 + 0x3058);
  lVar4 = 3;
  do {
    lVar1 = plVar3[-3];
    if (lVar1 != 0) {
      if (*(RefCountImpl **)(lVar1 + 0x10) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar1 + 0x10));
      }
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    lVar1 = *plVar3;
    plVar3[-3] = 0;
    if (lVar1 != 0) {
      if (*(RefCountImpl **)(lVar1 + 0x10) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar1 + 0x10));
      }
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    *plVar3 = 0;
    plVar3 = plVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  cVar2 = FUN_1432d93a0(param_1);
  return cVar2 != '\0';
}



// FUNCTION 14207bcf0 FUN_14207bcf0 body=652 status=ok
// SIG undefined FUN_14207bcf0(void)

undefined8 FUN_14207bcf0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  cVar5 = IsInRenderingThread();
  if (cVar5 != '\0') {
    cVar5 = (**(code **)(*param_1 + 0x30))(param_1);
    if (cVar5 == '\0') {
      return 1;
    }
    cVar5 = (**(code **)(param_1[0x651] + 8))(param_1 + 0x651,0);
    if (cVar5 != '\0') {
      lVar7 = 3;
      plVar6 = param_1 + 0x60b;
      lVar8 = 3;
      do {
        lVar3 = plVar6[-3];
        if (lVar3 != 0) {
          if (*(RefCountImpl **)(lVar3 + 0x10) != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar3 + 0x10));
          }
          *(undefined8 *)(lVar3 + 0x10) = 0;
        }
        lVar3 = *plVar6;
        plVar6[-3] = 0;
        if (lVar3 != 0) {
          if (*(RefCountImpl **)(lVar3 + 0x10) != (RefCountImpl *)0x0) {
            Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar3 + 0x10));
          }
          *(undefined8 *)(lVar3 + 0x10) = 0;
        }
        *plVar6 = 0;
        plVar6 = plVar6 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      cVar5 = FUN_1432d93a0(param_1);
      if (cVar5 != '\0') {
        if ((RefCountImpl *)param_1[0x4c] != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x4c]);
        }
        param_1[0x4c] = 0;
        if ((longlong *)param_1[0x66c] != (longlong *)0x0) {
          (**(code **)(*(longlong *)param_1[0x66c] + 0x50))();
        }
        if ((RefCountImpl *)param_1[0x66c] != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x66c]);
        }
        param_1[0x66c] = 0;
        FUN_14207a9a0(param_1 + 0x60e);
        plVar6 = param_1 + 0x682;
        do {
          puVar4 = (undefined8 *)*plVar6;
          *plVar6 = 0;
          if (puVar4 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar4 + 1);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              if ((*(char *)(puVar4 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))) {
                LOCK();
                bVar9 = *(int *)((longlong)puVar4 + 0xc) == 0;
                if (bVar9) {
                  *(int *)((longlong)puVar4 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar9) {
                  TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar4);
                }
              }
              else {
                (**(code **)*puVar4)(puVar4,1);
              }
            }
          }
          plVar6 = plVar6 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        plVar6 = param_1 + 0x685;
        lVar7 = 10;
        do {
          puVar4 = (undefined8 *)*plVar6;
          *plVar6 = 0;
          if (puVar4 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar4 + 1);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              if ((*(char *)(puVar4 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))) {
                LOCK();
                bVar9 = *(int *)((longlong)puVar4 + 0xc) == 0;
                if (bVar9) {
                  *(int *)((longlong)puVar4 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar9) {
                  TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar4);
                }
              }
              else {
                (**(code **)*puVar4)(puVar4,1);
              }
            }
          }
          plVar6 = plVar6 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        param_1 = param_1 + 0x68f;
        lVar7 = 0x50;
        do {
          puVar4 = (undefined8 *)*param_1;
          if (puVar4 != (undefined8 *)0x0) {
            *param_1 = 0;
            LOCK();
            piVar1 = (int *)(puVar4 + 1);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              if ((*(char *)(puVar4 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))) {
                LOCK();
                bVar9 = *(int *)((longlong)puVar4 + 0xc) == 0;
                if (bVar9) {
                  *(int *)((longlong)puVar4 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar9) {
                  TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar4);
                }
              }
              else {
                (**(code **)*puVar4)(puVar4,1);
              }
            }
          }
          param_1 = param_1 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14207bf80 FUN_14207bf80 body=86 status=ok
// SIG undefined FUN_14207bf80(void)

void FUN_14207bf80(longlong param_1)

{
  bool bVar1;
  char cVar2;
  
  if (DAT_1468c217e != '\0') {
    cVar2 = FUN_142057350();
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_14207bfa7;
    }
  }
  bVar1 = false;
LAB_14207bfa7:
  cVar2 = FUN_142078bd0(param_1);
  if ((cVar2 != '\0') && (!bVar1)) {
    FUN_142070ea0(param_1);
  }
  *(undefined1 *)(param_1 + 0x4c) = 1;
  FUN_142059390(*(undefined4 *)(param_1 + 0x48));
  return;
}



// FUNCTION 14207bfe0 FUN_14207bfe0 body=103 status=ok
// SIG undefined FUN_14207bfe0(void)

void FUN_14207bfe0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  
  LOCK();
  *(undefined4 *)(param_1 + 0x13) = 1;
  UNLOCK();
  (**(code **)(*param_1 + 8))();
  if (DAT_1468c217e != '\0') {
    cVar2 = FUN_142057350();
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_14207c018;
    }
  }
  bVar1 = false;
LAB_14207c018:
  cVar2 = FUN_142078bd0(param_1);
  if ((cVar2 != '\0') && (!bVar1)) {
    FUN_142070ea0(param_1);
  }
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  FUN_142059390((int)param_1[9]);
  return;
}



// FUNCTION 14207c050 _Cancel body=9 status=ok
// SIG undefined _Cancel(void)

void CAkMusicCtx::_Cancel(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014207c055. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,0);
  return;
}



// FUNCTION 14207c060 FUN_14207c060 body=478 status=ok
// SIG undefined FUN_14207c060(void)

void FUN_14207c060(longlong param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  LARGE_INTEGER LVar2;
  PSRWLOCK pRVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  LARGE_INTEGER local_res8;
  
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x30);
  QueryPerformanceCounter(&local_res8);
  *(LARGE_INTEGER *)(param_1 + 0x40) = local_res8;
  do {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x50));
    iVar1 = *(int *)(param_1 + 0x60);
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x50));
    SRWLock = (PSRWLOCK)(param_1 + 0x18);
    if (iVar1 == 0) {
      AcquireSRWLockShared(SRWLock);
      iVar1 = *(int *)(param_1 + 0x28);
      ReleaseSRWLockShared(SRWLock);
      if ((iVar1 == 0) ||
         ((*(double *)(param_1 + 0x30) != 0.0 && (*(double *)(param_1 + 0x38) <= 0.0)))) {
        if ((*(double *)(param_1 + 0x30) != 0.0) && (*(longlong *)(param_1 + 0x40) != 0)) {
          QueryPerformanceCounter(&local_res8);
          lVar4 = local_res8.QuadPart - *(longlong *)(param_1 + 0x40);
          dVar5 = (double)FGenericPlatformTime::GetSecondsPerCycle64();
          dVar6 = (double)lVar4;
          if (lVar4 < 0) {
            dVar6 = dVar6 + 1.8446744073709552e+19;
          }
          dVar6 = *(double *)(param_1 + 0x38) - dVar5 * dVar6 * 1000.0;
          dVar5 = 0.0;
          if ((0.0 <= dVar6) &&
             (dVar5 = *(double *)(param_1 + 0x30), dVar6 <= *(double *)(param_1 + 0x30))) {
            dVar5 = dVar6;
          }
          *(double *)(param_1 + 0x38) = dVar5;
        }
        *(undefined8 *)(param_1 + 0x40) = 0;
        return;
      }
    }
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x50));
    iVar1 = *(int *)(param_1 + 0x60);
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x50));
    pRVar3 = (PSRWLOCK)(param_1 + 0x50);
    if (iVar1 == 0) {
      pRVar3 = SRWLock;
    }
    FUN_1420708a0(pRVar3);
    if ((*(double *)(param_1 + 0x30) != 0.0) && (*(longlong *)(param_1 + 0x40) != 0)) {
      QueryPerformanceCounter(&local_res8);
      LVar2 = local_res8;
      lVar4 = local_res8.QuadPart - *(longlong *)(param_1 + 0x40);
      dVar5 = (double)FGenericPlatformTime::GetSecondsPerCycle64();
      dVar6 = (double)lVar4;
      if (lVar4 < 0) {
        dVar6 = dVar6 + 1.8446744073709552e+19;
      }
      dVar5 = *(double *)(param_1 + 0x38) - dVar5 * dVar6 * 1000.0;
      if (0.0 <= dVar5) {
        dVar6 = *(double *)(param_1 + 0x30);
        if (dVar5 <= *(double *)(param_1 + 0x30)) {
          dVar6 = dVar5;
        }
        ((LARGE_INTEGER *)(param_1 + 0x40))->QuadPart = (LONGLONG)LVar2;
        *(double *)(param_1 + 0x38) = dVar6;
      }
      else {
        *(undefined8 *)(param_1 + 0x38) = 0;
        ((LARGE_INTEGER *)(param_1 + 0x40))->QuadPart = (LONGLONG)LVar2;
      }
    }
  } while( true );
}



// FUNCTION 14207c250 FUN_14207c250 body=112 status=ok
// SIG undefined FUN_14207c250(void)

void FUN_14207c250(longlong param_1)

{
  void *_Dst;
  
  _Dst = (void *)(**(code **)(*DAT_146ab6358 + 0x4f8))
                           (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x58),0,
                            *(undefined4 *)(param_1 + 0x20),1);
  _guard_xfg_dispatch_icall_nop(_Dst,*(void **)(param_1 + 0x28),*(size_t *)(param_1 + 0x20));
  (**(code **)(*DAT_146ab6358 + 0x500))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 14207c2c0 FUN_14207c2c0 body=112 status=ok
// SIG undefined FUN_14207c2c0(void)

void FUN_14207c2c0(longlong param_1)

{
  void *_Dst;
  
  _Dst = (void *)(**(code **)(*DAT_146ab6358 + 0x4b0))
                           (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x58),0,
                            *(undefined4 *)(param_1 + 0x20),1);
  _guard_xfg_dispatch_icall_nop(_Dst,*(void **)(param_1 + 0x28),*(size_t *)(param_1 + 0x20));
  (**(code **)(*DAT_146ab6358 + 0x4b8))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 14207c330 UnlockBuffers body=92 status=ok
// SIG undefined UnlockBuffers(void)

void Scaleform::Render::RHI::MeshCache::UnlockBuffers(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  
  for (plVar2 = *(longlong **)(param_1 + 0x1e8); plVar2 != (longlong *)0x0;
      plVar2 = (longlong *)plVar2[10]) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined1 *)(param_1 + 0x1d8) = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x18) + 0x10);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  return;
}



// FUNCTION 14207c390 FUN_14207c390 body=778 status=ok
// SIG undefined FUN_14207c390(void)

void FUN_14207c390(longlong param_1,longlong *param_2,RefCountImpl *param_3,longlong *param_4,
                  RefCountImpl *param_5)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  
  cVar2 = IsInRenderingThread();
  if (cVar2 == '\0') {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 == 0) {
    puVar3 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x98,0);
    if (param_2 == (longlong *)0x0) {
      if (puVar3 == (undefined8 *)0x0) goto LAB_14207c587;
      *puVar3 = &PTR_FUN_144f88d20;
      if (param_4 != (longlong *)0x0) {
        (**(code **)(*param_4 + 8))(param_4);
      }
      puVar3[1] = param_4;
      *puVar3 = &PTR_FUN_144f897f0;
      puVar3[3] = param_1;
      puVar3[2] = 0;
      uVar7 = *(undefined4 *)(param_3 + 0x38);
      uVar1 = *(undefined4 *)(param_3 + 0x3c);
      *(undefined4 *)(puVar3 + 5) = 4;
      puVar3[6] = 0;
      puVar3[7] = 0;
      *(undefined1 *)(puVar3 + 9) = 0;
      puVar3[4] = &PTR_FUN_144f89020;
      *(undefined4 *)(puVar3 + 10) = uVar7;
      *(undefined4 *)((longlong)puVar3 + 0x54) = uVar1;
      *(undefined4 *)(puVar3 + 0xc) = 0x3f800000;
      puVar3[0xd] = 0;
      if (param_3 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(param_3);
      }
      puVar3[0xe] = param_3;
    }
    else {
      if (puVar3 == (undefined8 *)0x0) {
LAB_14207c587:
        puVar3 = (undefined8 *)0x0;
        goto LAB_14207c58b;
      }
      *puVar3 = &PTR_FUN_144f88d20;
      if (param_4 != (longlong *)0x0) {
        (**(code **)(*param_4 + 8))(param_4);
      }
      puVar3[1] = param_4;
      *puVar3 = &PTR_FUN_144f897f0;
      puVar3[3] = param_1;
      puVar3[2] = 0;
      lVar4 = (**(code **)(*param_2 + 0x20))(param_2,local_28);
      uVar7 = *(undefined4 *)(lVar4 + 4);
      puVar5 = (undefined4 *)(**(code **)(*param_2 + 0x20))(param_2,local_20);
      uVar1 = *puVar5;
      *(undefined4 *)(puVar3 + 5) = 4;
      puVar3[6] = 0;
      puVar3[7] = 0;
      *(undefined1 *)(puVar3 + 9) = 0;
      puVar3[4] = &PTR_FUN_144f89020;
      *(undefined4 *)(puVar3 + 10) = uVar1;
      *(undefined4 *)((longlong)puVar3 + 0x54) = uVar7;
      *(undefined4 *)(puVar3 + 0xc) = 0x3f800000;
      puVar3[0xd] = param_2;
      puVar3[0xe] = 0;
    }
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    cVar2 = IsInRenderingThread();
    if (cVar2 != '\0') {
      FRenderResource::InitResource(puVar3 + 4);
    }
    puVar3[0x12] = 0;
    cVar2 = IsInRenderingThread();
    if (cVar2 == '\0') {
LAB_14207c58b:
      *(undefined8 **)(param_1 + 0x20) = puVar3;
      return;
    }
    if (param_5 == (RefCountImpl *)0x0) {
      if (param_4 == (longlong *)0x0) goto LAB_14207c58b;
      param_5 = (RefCountImpl *)(**(code **)(*param_4 + 0x18))(param_4);
      if (param_5 == (RefCountImpl *)0x0) goto LAB_14207c566;
    }
    Scaleform::RefCountImpl::AddRef(param_5);
LAB_14207c566:
    if ((RefCountImpl *)puVar3[0x12] != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release((RefCountImpl *)puVar3[0x12]);
    }
    puVar3[0x12] = param_5;
    *(undefined8 **)(param_1 + 0x20) = puVar3;
    return;
  }
  (**(code **)(*(longlong *)(lVar4 + 0x20) + 0x30))(lVar4 + 0x20);
  if (param_2 == (longlong *)0x0) {
    if (param_3 != (RefCountImpl *)0x0) {
      uVar7 = **(undefined4 **)(param_3 + 0x68);
      *(undefined4 *)(lVar4 + 0x54) = (*(undefined4 **)(param_3 + 0x68))[1];
      goto LAB_14207c5db;
    }
  }
  else {
    lVar6 = (**(code **)(*param_2 + 0x20))(param_2,local_20);
    uVar1 = *(undefined4 *)(lVar6 + 4);
    puVar5 = (undefined4 *)(**(code **)(*param_2 + 0x20))(param_2,local_28);
    uVar7 = *puVar5;
    *(undefined4 *)(lVar4 + 0x54) = uVar1;
LAB_14207c5db:
    *(undefined4 *)(lVar4 + 0x50) = uVar7;
  }
  *(undefined4 *)(lVar4 + 0x60) = 0x3f800000;
  *(longlong **)(lVar4 + 0x68) = param_2;
  if (param_3 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_3);
  }
  if (*(RefCountImpl **)(lVar4 + 0x70) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar4 + 0x70));
  }
  *(RefCountImpl **)(lVar4 + 0x70) = param_3;
  (**(code **)(*(longlong *)(lVar4 + 0x20) + 0x28))(lVar4 + 0x20);
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 8))(param_4);
  }
  if (*(longlong **)(lVar4 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar4 + 8) + 0x10))();
  }
  *(longlong **)(lVar4 + 8) = param_4;
  if (param_5 == (RefCountImpl *)0x0) {
    if (param_4 == (longlong *)0x0) {
      if (*(RefCountImpl **)(lVar4 + 0x90) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar4 + 0x90));
      }
      *(undefined8 *)(lVar4 + 0x90) = 0;
      goto LAB_14207c677;
    }
    param_5 = (RefCountImpl *)(**(code **)(*param_4 + 0x18))(param_4);
  }
  FUN_142062c70(lVar4 + 0x90,param_5);
LAB_14207c677:
  *(undefined8 *)(lVar4 + 0x10) = 0;
  return;
}



// FUNCTION 14207c6a0 FUN_14207c6a0 body=196 status=ok
// SIG undefined FUN_14207c6a0(void)

char FUN_14207c6a0(ulonglong param_1)

{
  if ((param_1 & 0xffffffff00000000) == 0) {
    if ((param_1 & 0xffff0000) == 0) {
      if ((param_1 & 0xff00) != 0) {
        return (&DAT_145af9a40)[param_1 >> 8 & 0xff] + '\b';
      }
      return (&DAT_145af9a40)[param_1 & 0xff];
    }
    if ((param_1 & 0xff000000) != 0) {
      return (&DAT_145af9a40)[param_1 >> 0x18] + '\x18';
    }
    return (&DAT_145af9a40)[param_1 >> 0x10 & 0xff] + '\x10';
  }
  if ((param_1 & 0xffff000000000000) == 0) {
    if ((param_1 & 0xff0000000000) != 0) {
      return (&DAT_145af9a40)[param_1 >> 0x28 & 0xff] + '(';
    }
    return (&DAT_145af9a40)[param_1 >> 0x20 & 0xff] + ' ';
  }
  if ((param_1 & 0xff00000000000000) != 0) {
    return (&DAT_145af9a40)[param_1 >> 0x38] + '8';
  }
  return (&DAT_145af9a40)[param_1 >> 0x30 & 0xff] + '0';
}



// FUNCTION 14207c770 FUN_14207c770 body=89 status=ok
// SIG undefined FUN_14207c770(void)

bool FUN_14207c770(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146acea30;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] == 1;
    }
  }
  return *piVar1 == 1;
}



// FUNCTION 14207c7d0 FUN_14207c7d0 body=101 status=ok
// SIG undefined FUN_14207c7d0(void)

undefined8 FUN_14207c7d0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined *local_18;
  undefined1 local_10;
  
  cVar1 = (**(code **)(*param_1 + 0x30))();
  if (cVar1 != '\0') {
    local_18 = &DAT_146ab6e78;
    uVar2 = param_3 + 1 + (longlong)(int)param_1[0x1a];
    local_10 = 1;
    uVar3 = param_1[0x19];
    if ((ulonglong)param_1[0x19] < uVar2) {
      uVar3 = uVar2;
    }
    param_1[0x19] = uVar3;
    FScopedCommandListWaitForTasks::~FScopedCommandListWaitForTasks(&local_18);
  }
  return 1;
}



// FUNCTION 14207c840 FUN_14207c840 body=191 status=ok
// SIG undefined FUN_14207c840(void)

void FUN_14207c840(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  LARGE_INTEGER local_res8;
  
  if ((*(longlong *)(param_1 + 0x40) != 0) && (*(double *)(param_1 + 0x30) != 0.0)) {
    QueryPerformanceCounter(&local_res8);
    lVar1 = local_res8.QuadPart - *(longlong *)(param_1 + 0x40);
    dVar2 = (double)FGenericPlatformTime::GetSecondsPerCycle64();
    dVar3 = (double)lVar1;
    if (lVar1 < 0) {
      dVar3 = dVar3 + 1.8446744073709552e+19;
    }
    dVar3 = *(double *)(param_1 + 0x38) - dVar2 * dVar3 * 1000.0;
    dVar2 = 0.0;
    if ((0.0 <= dVar3) &&
       (dVar2 = *(double *)(param_1 + 0x30), dVar3 <= *(double *)(param_1 + 0x30))) {
      dVar2 = dVar3;
    }
    ((LARGE_INTEGER *)(param_1 + 0x40))->QuadPart = (LONGLONG)local_res8;
    *(double *)(param_1 + 0x38) = dVar2;
    return;
  }
  QueryPerformanceCounter(&local_res8);
  ((LARGE_INTEGER *)(param_1 + 0x40))->QuadPart = (LONGLONG)local_res8;
  return;
}



// FUNCTION 14207c920 FUN_14207c920 body=250 status=ok
// SIG undefined FUN_14207c920(void)

undefined8 FUN_14207c920(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = ((param_2 >> 4) * 5) / 9;
  puVar2 = (undefined8 *)
           (**(code **)(*(longlong *)(param_1 + 0x148) + 8))
                     ((longlong *)(param_1 + 0x148),uVar4 * 0x10,param_3,param_4,
                      *(undefined8 *)(param_1 + 0x10));
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = (**(code **)(*(longlong *)(param_1 + 400) + 8))
                      ((longlong *)(param_1 + 400),(param_2 & 0xfffffffffffffff0) + uVar4 * -0x10,
                       param_3 & 0xffffffff,param_4 & 0xffffffff,*(undefined8 *)(param_1 + 0x10));
    if (lVar3 != 0) {
      return 1;
    }
    lVar3 = puVar2[4];
    lVar1 = puVar2[9];
    FUN_1432f4260(param_1 + 0x168,lVar1 << 0x18,lVar3 + 0xfU >> 4);
    *(longlong *)(param_1 + 0x188) = *(longlong *)(param_1 + 0x188) - lVar3;
    *(undefined8 *)(*(longlong *)(param_1 + 0x150) + lVar1 * 8) = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  return 0;
}



// FUNCTION 14207ca20 FUN_14207ca20 body=146 status=ok
// SIG undefined FUN_14207ca20(void)

void FUN_14207ca20(longlong param_1,int param_2,byte param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = IsInRenderingThread();
  if ((cVar2 != '\0') && (*(longlong *)(param_1 + 0x33e8) != 0)) {
    lVar1 = param_1 + (ulonglong)
                      (((uint)(*(int *)(&DAT_1467cd1ac + (longlong)*(int *)(param_1 + 0x1f8) * 0x24)
                              != 0) | (uint)param_3 * 2) + param_2 * 4) * 8;
    lVar3 = *(longlong *)(lVar1 + 0x3478);
    if (lVar3 == 0) {
      FUN_14207cce0(param_1,param_2);
      lVar3 = *(longlong *)(lVar1 + 0x3478);
    }
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x33f0,lVar3);
  }
  return;
}



// FUNCTION 14207cac0 FUN_14207cac0 body=147 status=ok
// SIG undefined FUN_14207cac0(void)

void FUN_14207cac0(longlong *param_1,int param_2,int param_3)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (((cVar1 != '\0') && (param_1[0x67d] != 0)) &&
     ((param_2 != (int)param_1[0x3f] || (*(int *)((longlong)param_1 + 0x1fc) != param_3)))) {
    *(int *)((longlong)param_1 + 0x1fc) = param_3;
    *(int *)(param_1 + 0x3f) = param_2;
    (**(code **)(*param_1 + 0x298))
              (param_1,*(undefined4 *)((longlong)param_1 + 0x20c),(char)param_1[0x42],
               *(undefined1 *)((longlong)param_1 + 0x211));
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x67f,param_1[(longlong)param_2 + 0x685]);
    *(int *)(param_1 + 0x680) = param_3;
  }
  return;
}



// FUNCTION 14207cb60 FUN_14207cb60 body=66 status=ok
// SIG undefined FUN_14207cb60(void)

void FUN_14207cb60(longlong param_1,int param_2)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x33e8) != 0)) {
    TRefCountPtr<FRHIIndexBuffer>::operator=
              (param_1 + 0x3408,*(undefined8 *)(param_1 + 0x3410 + (longlong)param_2 * 8));
  }
  return;
}



// FUNCTION 14207cbb0 FUN_14207cbb0 body=293 status=ok
// SIG undefined FUN_14207cbb0(void)

undefined8 FUN_14207cbb0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  RefCountImpl *this;
  char cVar3;
  undefined1 uVar4;
  RefCountImpl *this_00;
  longlong *plVar5;
  
  cVar3 = IsInRenderingThread();
  if (cVar3 == '\0') {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x1b0) == 0) {
    return 0;
  }
  plVar5 = (longlong *)
           (*(longlong *)(param_1 + 0x1a8) + -0x340 + *(longlong *)(param_1 + 0x1b0) * 0x340);
  lVar2 = *(longlong *)(*plVar5 + 0x20);
  if ((char)plVar5[0x66] != '\0') goto LAB_14207ccae;
  *(undefined2 *)((longlong)plVar5 + 0x331) = 0;
  *(undefined1 *)((longlong)plVar5 + 0x333) = 0;
  this = *(RefCountImpl **)(lVar2 + 0x90);
  this_00 = (RefCountImpl *)0x0;
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(this);
    this_00 = *(RefCountImpl **)(lVar2 + 0x90);
    if ((this_00 != (RefCountImpl *)0x0) && (*(longlong *)(this_00 + 0x48) != 0)) {
      iVar1 = *(int *)(*(longlong *)(this_00 + 0x48) + 0x3c);
      if (iVar1 == 0xb) {
        if ((DAT_146ab62cc < 0x18) && ((0x800788U >> (DAT_146ab62cc & 0x1f) & 1) != 0)) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
        *(undefined1 *)((longlong)plVar5 + 0x332) = uVar4;
        if ((DAT_146ab62cc < 0x18) && ((0x800788U >> (DAT_146ab62cc & 0x1f) & 1) != 0)) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
        *(undefined1 *)((longlong)plVar5 + 0x331) = uVar4;
      }
      else if ((iVar1 != 0xc) && (iVar1 != 0x14)) goto LAB_14207cc9a;
      *(undefined1 *)((longlong)plVar5 + 0x333) = 1;
    }
  }
LAB_14207cc9a:
  *(undefined1 *)(plVar5 + 0x66) = 1;
  if (this_00 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this_00);
  }
LAB_14207ccae:
  if ((*(char *)((longlong)plVar5 + 0x331) == '\0') && (*(char *)((longlong)plVar5 + 0x333) == '\0')
     ) {
    return 0;
  }
  return 1;
}



// FUNCTION 14207cce0 FUN_14207cce0 body=556 status=ok
// SIG undefined FUN_14207cce0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 ****** FUN_14207cce0(longlong param_1,uint param_2,uint param_3)

{
  undefined8 *****pppppuVar1;
  longlong lVar2;
  undefined8 ******ppppppuVar3;
  uint uVar4;
  undefined8 *****pppppuVar5;
  char cVar6;
  undefined8 ******ppppppuVar7;
  int iVar8;
  undefined1 auStack_98 [32];
  undefined8 *****local_78;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_68;
  undefined1 local_67;
  byte local_66;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined2 local_35;
  undefined8 *****local_30;
  
  ppppppuVar7 = (undefined8 ******)(DAT_1468387a8 ^ (ulonglong)auStack_98);
  lVar2 = (ulonglong)(param_3 + param_2 * 4) + 0x68f;
  ppppppuVar3 = (undefined8 ******)(param_1 + lVar2 * 8);
  if (*(longlong *)(param_1 + lVar2 * 8) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x11c0) + (ulonglong)param_2 * 0x18;
    iVar8 = *(int *)(&DAT_144f898c8 + (longlong)*(int *)(lVar2 + 4) * 4);
    if (((param_3 & 2) != 0) && (iVar8 == 4)) {
      iVar8 = 1;
    }
    local_6b = (undefined1)iVar8;
    local_68 = (undefined1)*(undefined4 *)(&DAT_144f898c8 + (longlong)*(int *)(lVar2 + 0x10) * 4);
    local_66 = -((param_3 & 1) != 0) & 0xf;
    local_65 = 0x100;
    local_61 = 0xf0001;
    local_5d = 0x1000001;
    local_59 = 0x1000f00;
    local_55 = 0x10000;
    local_51 = 0x1000f;
    local_4d = 0xf000100;
    local_49 = 0x100;
    local_45 = 0xf0001;
    local_41 = 0x1000001;
    local_3d = 0x1000f00;
    local_39 = 0x10000;
    local_35 = 0xf;
    local_6c = (undefined1)
               *(undefined4 *)
                (&DAT_144f898b8 +
                (longlong)*(int *)(*(longlong *)(param_1 + 0x11c0) + (ulonglong)param_2 * 0x18) * 4)
    ;
    local_6a = (undefined1)*(undefined4 *)(&DAT_144f898c8 + (longlong)*(int *)(lVar2 + 8) * 4);
    local_67 = (undefined1)*(undefined4 *)(&DAT_144f898c8 + (longlong)*(int *)(lVar2 + 0x14) * 4);
    local_69 = local_6c;
    local_30 = ppppppuVar7;
    (**(code **)(*DAT_146ab6358 + 0x40))(DAT_146ab6358,&local_78,&local_6c);
    pppppuVar1 = local_78;
    ppppppuVar7 = &local_78;
    if (ppppppuVar3 != ppppppuVar7) {
      pppppuVar5 = *ppppppuVar3;
      *ppppppuVar3 = local_78;
      local_78 = (undefined8 ******)0x0;
      if (pppppuVar5 == (undefined8 *****)0x0) {
        return (undefined8 ******)pppppuVar1;
      }
      LOCK();
      pppppuVar1 = pppppuVar5 + 1;
      uVar4 = *(uint *)pppppuVar1;
      ppppppuVar7 = (undefined8 ******)(ulonglong)uVar4;
      *(uint *)pppppuVar1 = *(uint *)pppppuVar1 - 1;
      UNLOCK();
      if (uVar4 == 1) {
        if ((*(char *)(pppppuVar5 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')
            ))) {
          ppppppuVar7 = (undefined8 ******)0x0;
          LOCK();
          uVar4 = *(uint *)((longlong)pppppuVar5 + 0xc);
          if (uVar4 == 0) {
            *(uint *)((longlong)pppppuVar5 + 0xc) = 1;
          }
          else {
            ppppppuVar7 = (undefined8 ******)(ulonglong)uVar4;
          }
          UNLOCK();
          if (uVar4 == 0) {
            ppppppuVar7 = (undefined8 ******)
                          TLockFreePointerListLIFOPad<FRHIResource,128>::Push
                                    (&DAT_146ab6940,pppppuVar5);
          }
        }
        else {
          ppppppuVar7 = (undefined8 ******)(*(code *)**pppppuVar5)(pppppuVar5,1);
        }
      }
    }
    pppppuVar1 = local_78;
    if ((undefined8 ******)local_78 != (undefined8 ******)0x0) {
      LOCK();
      ppppppuVar3 = (undefined8 ******)(local_78 + 1);
      iVar8 = *(int *)ppppppuVar3;
      *(int *)ppppppuVar3 = *(int *)ppppppuVar3 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        if ((*(char *)(local_78 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')
            ))) {
          ppppppuVar7 = (undefined8 ******)0x0;
          LOCK();
          uVar4 = *(uint *)((longlong)pppppuVar1 + 0xc);
          if (uVar4 == 0) {
            *(uint *)((longlong)pppppuVar1 + 0xc) = 1;
          }
          else {
            ppppppuVar7 = (undefined8 ******)(ulonglong)uVar4;
          }
          UNLOCK();
          if (uVar4 == 0) {
            ppppppuVar7 = (undefined8 ******)
                          TLockFreePointerListLIFOPad<FRHIResource,128>::Push
                                    (&DAT_146ab6940,pppppuVar1);
          }
        }
        else {
          ppppppuVar7 = (undefined8 ******)(*(code *)**pppppuVar1)(pppppuVar1,1);
        }
      }
    }
  }
  return ppppppuVar7;
}



// FUNCTION 14207cf10 FUN_14207cf10 body=727 status=ok
// SIG undefined FUN_14207cf10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14207cf10(longlong param_1)

{
  longlong *****ppppplVar1;
  int iVar2;
  uint uVar3;
  longlong *****ppppplVar4;
  char cVar5;
  longlong ******pppppplVar6;
  longlong ******pppppplVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte bVar10;
  uint uVar11;
  longlong ******pppppplVar12;
  undefined1 uVar13;
  uint uVar14;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 *local_80;
  longlong *****local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_44 = 0;
  local_80 = &local_68;
  local_68 = 0;
  uStack_60 = 0;
  uVar14 = 0;
  local_54 = _DAT_1468b5d78;
  uStack_50 = uRam00000001468b5d7c;
  uStack_4c = uRam00000001468b5d80;
  uStack_48 = uRam00000001468b5d84;
  local_58 = 1;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_88 = 1;
  (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,&local_70,&DAT_146ab6e78,0x6c0);
  pppppplVar7 = (longlong ******)local_70;
  pppppplVar12 = (longlong ******)(param_1 + 0x200);
  pppppplVar6 = &local_70;
  if (pppppplVar12 != &local_70) {
    ppppplVar4 = *pppppplVar12;
    *pppppplVar12 = local_70;
    local_70 = (longlong *****)0x0;
    if (ppppplVar4 == (longlong *****)0x0) goto LAB_14207d05f;
    LOCK();
    ppppplVar1 = ppppplVar4 + 1;
    iVar2 = *(int *)ppppplVar1;
    *(int *)ppppplVar1 = *(int *)ppppplVar1 + -1;
    UNLOCK();
    pppppplVar6 = (longlong ******)(ulonglong)(iVar2 - 1U);
    if (iVar2 - 1U == 0) {
      if ((*(char *)(ppppplVar4 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))
         ) {
        pppppplVar6 = (longlong ******)0x0;
        LOCK();
        uVar3 = *(uint *)((longlong)ppppplVar4 + 0xc);
        if (uVar3 == 0) {
          *(uint *)((longlong)ppppplVar4 + 0xc) = 1;
        }
        else {
          pppppplVar6 = (longlong ******)(ulonglong)uVar3;
        }
        UNLOCK();
        if (uVar3 == 0) {
          pppppplVar6 = (longlong ******)
                        TLockFreePointerListLIFOPad<FRHIResource,128>::Push
                                  (&DAT_146ab6940,ppppplVar4);
        }
      }
      else {
        pppppplVar6 = (longlong ******)(*(code *)**ppppplVar4)(ppppplVar4,1);
      }
    }
  }
  pppppplVar7 = pppppplVar6;
  ppppplVar4 = local_70;
  if ((longlong ******)local_70 != (longlong ******)0x0) {
    LOCK();
    pppppplVar7 = (longlong ******)(local_70 + 1);
    iVar2 = *(int *)pppppplVar7;
    *(int *)pppppplVar7 = *(int *)pppppplVar7 + -1;
    UNLOCK();
    pppppplVar7 = (longlong ******)(ulonglong)(iVar2 - 1U);
    if (iVar2 - 1U == 0) {
      if ((*(char *)(local_70 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))
         ) {
        pppppplVar7 = (longlong ******)0x0;
        LOCK();
        uVar3 = *(uint *)((longlong)ppppplVar4 + 0xc);
        if (uVar3 == 0) {
          *(uint *)((longlong)ppppplVar4 + 0xc) = 1;
        }
        else {
          pppppplVar7 = (longlong ******)(ulonglong)uVar3;
        }
        UNLOCK();
        if (uVar3 == 0) {
          pppppplVar7 = (longlong ******)
                        TLockFreePointerListLIFOPad<FRHIResource,128>::Push
                                  (&DAT_146ab6940,ppppplVar4);
        }
      }
      else {
        pppppplVar7 = (longlong ******)(*(code *)**ppppplVar4)(ppppplVar4,1);
      }
    }
  }
LAB_14207d05f:
  if (*pppppplVar12 != (longlong *****)0x0) {
    local_80 = (undefined8 *)CONCAT44(local_80._4_4_,1);
    local_88 = 0x6c0;
    lVar8 = (**(code **)(*DAT_146ab6358 + 0x4b0))(DAT_146ab6358,&DAT_146ab6e78,*pppppplVar12,0);
    if (lVar8 != 0) {
      do {
        uVar3 = uVar14 * 6;
        uVar11 = 0;
        do {
          bVar10 = (char)uVar11 + 1;
          uVar9 = (ulonglong)(uVar11 + uVar3);
          uVar13 = (undefined1)uVar14;
          *(undefined1 *)(lVar8 + 8 + uVar9 * 0xc) = uVar13;
          *(undefined1 *)(lVar8 + 9 + uVar9 * 0xc) = uVar13;
          *(undefined1 *)(lVar8 + 10 + uVar9 * 0xc) = uVar13;
          *(undefined1 *)(lVar8 + 0xb + uVar9 * 0xc) = uVar13;
          uVar11 = (uint)bVar10;
        } while (bVar10 < 6);
        uVar14 = uVar14 + 1;
        *(undefined4 *)(lVar8 + (ulonglong)uVar3 * 0xc) = 0;
        *(undefined4 *)(lVar8 + 4 + (ulonglong)uVar3 * 0xc) = 0x3f800000;
        *(undefined8 *)(lVar8 + (ulonglong)(uVar3 + 1) * 0xc) = 0;
        *(undefined8 *)(lVar8 + (ulonglong)(uVar3 + 2) * 0xc) = 0x3f800000;
        *(undefined4 *)(lVar8 + (ulonglong)(uVar3 + 3) * 0xc) = 0;
        *(undefined4 *)(lVar8 + 4 + (ulonglong)(uVar3 + 3) * 0xc) = 0x3f800000;
        *(undefined8 *)(lVar8 + (ulonglong)(uVar3 + 4) * 0xc) = 0x3f800000;
        *(undefined4 *)(lVar8 + (ulonglong)(uVar3 + 5) * 0xc) = 0x3f800000;
        *(undefined4 *)(lVar8 + 4 + (ulonglong)(uVar3 + 5) * 0xc) = 0x3f800000;
      } while (uVar14 < 0x18);
      (**(code **)(*DAT_146ab6358 + 0x4b8))(DAT_146ab6358,&DAT_146ab6e78,*pppppplVar12);
      return 1;
    }
    ppppplVar4 = *pppppplVar12;
    *pppppplVar12 = (longlong *****)0x0;
    pppppplVar7 = (longlong ******)0x0;
    if (ppppplVar4 != (longlong *****)0x0) {
      LOCK();
      ppppplVar1 = ppppplVar4 + 1;
      iVar2 = *(int *)ppppplVar1;
      *(int *)ppppplVar1 = *(int *)ppppplVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if ((*(char *)(ppppplVar4 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')
            ))) {
          pppppplVar7 = (longlong ******)0x0;
          LOCK();
          uVar14 = *(uint *)((longlong)ppppplVar4 + 0xc);
          if (uVar14 == 0) {
            *(uint *)((longlong)ppppplVar4 + 0xc) = 1;
          }
          else {
            pppppplVar7 = (longlong ******)(ulonglong)uVar14;
          }
          UNLOCK();
          if (uVar14 == 0) {
            pppppplVar7 = (longlong ******)
                          TLockFreePointerListLIFOPad<FRHIResource,128>::Push
                                    (&DAT_146ab6940,ppppplVar4);
          }
        }
        else {
          pppppplVar7 = (longlong ******)(*(code *)**ppppplVar4)(ppppplVar4,1);
        }
      }
    }
  }
  return (ulonglong)pppppplVar7 & 0xffffffffffffff00;
}



// FUNCTION 14207d1f0 FUN_14207d1f0 body=292 status=ok
// SIG undefined FUN_14207d1f0(void)

void FUN_14207d1f0(longlong param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  cVar3 = IsInRenderingThread();
  if ((cVar3 != '\0') && (lVar1 = *(longlong *)(param_1 + 0x33e8), lVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x33e0);
    if (lVar2 == 0) {
      LowLevelFatalErrorHandler
                ("Unknown",0x8d8,L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
      FDebug::AssertFailed
                (&DAT_143f3f584,"Unknown",0x8d8,
                 L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
    }
    puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 7;
    if (*(undefined8 **)(lVar1 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(lVar1 + 0x30);
      puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 7;
    }
    *(undefined8 **)(lVar1 + 0x30) = puVar4;
    *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
    **(undefined8 **)(lVar1 + 8) = puVar5;
    *(undefined8 **)(lVar1 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f489d0;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = param_6;
    puVar5[2] = lVar2;
    *(undefined4 *)(puVar5 + 5) = param_5;
    *(undefined4 *)(puVar5 + 3) = 0;
    *(undefined4 *)(puVar5 + 4) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x24) = param_3;
    *(int *)((longlong)puVar5 + 0x2c) = (int)((param_2 & 0xffffffff) / 3);
    *(undefined4 *)(puVar5 + 6) = param_4;
  }
  return;
}



// FUNCTION 14207d320 FUN_14207d320 body=269 status=ok
// SIG undefined FUN_14207d320(void)

void FUN_14207d320(longlong param_1,ulonglong param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x33e0);
  lVar2 = *(longlong *)(param_1 + 0x33e8);
  if (lVar1 == 0) {
    LowLevelFatalErrorHandler
              ("Unknown",0x8d8,L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
    FDebug::AssertFailed
              (&DAT_143f3f584,"Unknown",0x8d8,
               L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
  }
  puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar4 + 7;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30);
    puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 7;
  }
  *(undefined8 **)(lVar2 + 0x30) = puVar3;
  *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
  **(undefined8 **)(lVar2 + 8) = puVar4;
  *(undefined8 **)(lVar2 + 8) = puVar4 + 1;
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_143f489d0;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = param_6;
  puVar4[2] = lVar1;
  *(int *)((longlong)puVar4 + 0x2c) = (int)((param_2 & 0xffffffff) / 3);
  *(undefined4 *)(puVar4 + 5) = param_5;
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)(puVar4 + 4) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x24) = param_3;
  *(undefined4 *)(puVar4 + 6) = 1;
  return;
}



// FUNCTION 14207d430 FUN_14207d430 body=152 status=ok
// SIG undefined FUN_14207d430(void)

void FUN_14207d430(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x33e8);
  puVar3 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar2 = puVar3 + 4;
  if (*(undefined8 **)(lVar1 + 0x38) < puVar2) {
    FMemStackBase::AllocateNewChunk(lVar1 + 0x30);
    puVar3 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 4;
  }
  *(undefined8 **)(lVar1 + 0x30) = puVar2;
  *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
  **(undefined8 **)(lVar1 + 8) = puVar3;
  *(undefined8 **)(lVar1 + 8) = puVar3 + 1;
  puVar3[1] = 0;
  *(int *)(puVar3 + 3) = (int)((param_2 & 0xffffffff) / 3);
  *puVar3 = &PTR_LAB_143f59410;
  puVar3[2] = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
  return;
}



// FUNCTION 14207d4d0 FUN_14207d4d0 body=1054 status=ok
// SIG undefined FUN_14207d4d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14207d4d0(longlong param_1)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  Matrix4x4<float> *pMVar4;
  float fVar5;
  undefined1 auStack_208 [32];
  float local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  float fStack_1d4;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  float fStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  float fStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  Matrix4x4<float> local_128 [64];
  Matrix4x4<float> local_e8 [64];
  Matrix4x4<float> local_a8 [64];
  ulonglong local_68;
  
  uVar3 = uRam00000001464fade8;
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  if (*(char *)(param_1 + 0x280) != '\0') {
    fVar1 = *(float *)(param_1 + 0x1c0);
    fVar5 = *(float *)(param_1 + 0x1d0);
    if (((((fVar5 == fVar1) && (*(float *)(param_1 + 0x1c8) == *(float *)(param_1 + 0x1d8))) &&
         (*(float *)(param_1 + 0x1c4) == *(float *)(param_1 + 0x1d4))) &&
        (*(float *)(param_1 + 0x1cc) == *(float *)(param_1 + 0x1dc))) ||
       ((fVar2 = *(float *)(param_1 + 0x1c8), fVar2 == fVar1 &&
        (*(float *)(param_1 + 0x1c4) == *(float *)(param_1 + 0x1cc))))) {
      *(undefined8 *)(param_1 + 0x240) = _DAT_1464fade0;
      *(undefined8 *)(param_1 + 0x248) = uVar3;
      uVar3 = uRam00000001464fadf8;
      *(undefined8 *)(param_1 + 0x250) = _DAT_1464fadf0;
      *(undefined8 *)(param_1 + 600) = uVar3;
      uVar3 = uRam00000001464fae08;
      *(undefined8 *)(param_1 + 0x260) = _DAT_1464fae00;
      *(undefined8 *)(param_1 + 0x268) = uVar3;
      uVar3 = uRam00000001464fae18;
      *(undefined8 *)(param_1 + 0x270) = _DAT_1464fae10;
      *(undefined8 *)(param_1 + 0x278) = uVar3;
    }
    else {
      uStack_1e4 = 0;
      uStack_1e0 = 0;
      uStack_1dc = 0;
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      local_1c8 = 0;
      uStack_1bc = 0;
      uStack_1b8 = 0;
      uStack_1b4 = 0;
      uStack_1b0 = 0;
      uStack_1ac = 0x3f800000;
      uStack_1c0 = 0x3f800000;
      uStack_1a4 = 0;
      uStack_1a0 = 0;
      local_198 = 0;
      uStack_194 = 0x3f800000;
      uStack_190 = 0;
      local_188 = 0;
      local_178 = 0;
      local_1a8 = 0x3f800000;
      uStack_170 = 0x3f80000000000000;
      local_1e8 = 1.0 / (*(float *)(param_1 + 0x1d8) - fVar5);
      fStack_18c = 1.0 / (*(float *)(param_1 + 0x1dc) - *(float *)(param_1 + 0x1d4));
      fStack_19c = (float)(int)((*(float *)(param_1 + 0x1d8) + fVar5) * 0.5 - (fVar1 + fVar2) * 0.5)
                   * -2.0 * local_1e8;
      fVar5 = (float)(int)((*(float *)(param_1 + 0x1d4) + *(float *)(param_1 + 0x1dc)) * 0.5 -
                          (*(float *)(param_1 + 0x1c4) + *(float *)(param_1 + 0x1cc)) * 0.5);
      fStack_1d4 = (*(float *)(param_1 + 0x1cc) - *(float *)(param_1 + 0x1c4)) * fStack_18c;
      local_1e8 = (fVar2 - fVar1) * local_1e8;
      uStack_180 = 0x3f800000;
      fStack_18c = (fVar5 + fVar5) * fStack_18c;
      Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
                ((Matrix4x4<float> *)(param_1 + 0x240),(Matrix4x4<float> *)&local_1a8,
                 (Matrix4x4<float> *)&local_1e8);
    }
    pMVar4 = (Matrix4x4<float> *)FUN_1432d7cd0(param_1,0x3f800000);
    uStack_164 = 0;
    uStack_160 = 0;
    uStack_15c = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_13c = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    local_168 = 0x3f800000;
    uStack_154 = 0x3f800000;
    uStack_140 = 0x3f800000;
    uStack_12c = 0x3f800000;
    if ((*(longlong *)(param_1 + 0x290) != 0) &&
       ((*(uint *)(*(longlong *)(param_1 + 0x290) + 0x54) & 0x1000000) != 0)) {
      fStack_1d4 = -1.0;
      local_198 = 0;
      uStack_194 = 0x3f800000;
      uStack_190 = 0;
      fStack_18c = 0.0;
      uStack_1e4 = 0;
      uStack_1e0 = 0;
      local_178 = 0;
      uStack_170 = 0x3f80000000000000;
      local_1a8 = 0x3f800000;
      uStack_1a4 = 0;
      uStack_1a0 = 0;
      fStack_19c = 0.0;
      uStack_1dc = 0;
      uStack_1d8 = 0;
      uStack_180 = 0x3f800000;
      uStack_1d0 = 0;
      local_1c8 = 0;
      uStack_1bc = 0;
      uStack_1b8 = 0;
      uStack_1b4 = 0;
      uStack_1b0 = 0;
      uStack_1ac = 0x3f800000;
      local_1e8 = 1.0;
      uStack_1c0 = 0x3f800000;
      local_188 = 0;
      Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
                ((Matrix4x4<float> *)&local_168,(Matrix4x4<float> *)&local_1e8,
                 (Matrix4x4<float> *)&local_1a8);
    }
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
              (local_128,(Matrix4x4<float> *)&local_168,(Matrix4x4<float> *)(param_1 + 0x240));
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
              (local_a8,(Matrix2x4<float> *)(param_1 + 0x140),local_128);
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
              (local_e8,(Matrix4x4<float> *)(param_1 + 0x180),pMVar4);
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
              ((Matrix4x4<float> *)&local_1a8,local_a8,local_e8);
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
              ((Matrix4x4<float> *)&local_1e8,(Matrix4x4<float> *)&local_1a8,
               (Matrix3x4<float> *)(param_1 + 0x30));
    *(ulonglong *)(param_1 + 0x200) = CONCAT44(uStack_1e4,local_1e8);
    *(ulonglong *)(param_1 + 0x208) = CONCAT44(uStack_1dc,uStack_1e0);
    *(ulonglong *)(param_1 + 0x210) = CONCAT44(fStack_1d4,uStack_1d8);
    *(undefined8 *)(param_1 + 0x218) = uStack_1d0;
    *(undefined8 *)(param_1 + 0x220) = local_1c8;
    *(ulonglong *)(param_1 + 0x228) = CONCAT44(uStack_1bc,uStack_1c0);
    *(ulonglong *)(param_1 + 0x230) = CONCAT44(uStack_1b4,uStack_1b8);
    *(ulonglong *)(param_1 + 0x238) = CONCAT44(uStack_1ac,uStack_1b0);
    *(undefined1 *)(param_1 + 0x280) = 0;
  }
  return;
}



// FUNCTION 14207d8f0 FUN_14207d8f0 body=187 status=ok
// SIG undefined FUN_14207d8f0(void)

void FUN_14207d8f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  cVar3 = IsInRenderingThread();
  if ((cVar3 != '\0') && (lVar1 = *(longlong *)(param_1 + 0x33e8), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x3270);
    puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 5;
    if (*(undefined8 **)(lVar1 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(lVar1 + 0x30);
      puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 5;
    }
    *(undefined8 **)(lVar1 + 0x30) = puVar4;
    *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
    **(undefined8 **)(lVar1 + 8) = puVar5;
    *(undefined8 **)(lVar1 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    puVar5[3] = uVar2;
    *puVar5 = &PTR_LAB_143f489e0;
    *(undefined4 *)(puVar5 + 2) = 0;
    *(undefined4 *)(puVar5 + 4) = 0;
    *(undefined8 *)(param_1 + 0x33e0) = 0;
  }
  return;
}



// FUNCTION 14207d9b0 FUN_14207d9b0 body=325 status=ok
// SIG undefined FUN_14207d9b0(void)

void FUN_14207d9b0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_142062530();
    return;
  }
  if (param_3 < 8) {
    lVar3 = 8;
  }
  else {
    cVar1 = FUN_14207c6a0(param_3 - 1);
    lVar3 = 1L << (cVar1 + 1U & 0x3f);
  }
  local_res18[0] = 2;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,lVar3 * 0x28 + 0x10,local_res18);
  lVar5 = 0;
  *local_res20 = 0;
  local_res20[1] = lVar3 + -1;
  lVar4 = lVar5;
  do {
    *(undefined8 *)(lVar4 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar3 = lVar3 + -1;
    lVar4 = lVar4 + 0x28;
  } while (lVar3 != 0);
  if (*param_1 != 0) {
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar4 = *param_1 + lVar5;
      if (*(longlong *)(lVar4 + 0x10) != -2) {
        uVar2 = FUN_142062cb0(local_res18,lVar4 + 0x20);
        FUN_14205bda0(&local_res20,param_2,lVar4 + 0x20,uVar2);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar4 + 0x30);
        *(undefined8 *)(lVar4 + 0x10) = 0xfffffffffffffffe;
      }
      lVar5 = lVar5 + 0x28;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 14207db00 FUN_14207db00 body=671 status=ok
// SIG undefined FUN_14207db00(void)

void FUN_14207db00(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_res18 [2];
  longlong *local_res20;
  
  if (param_3 != 0) {
    if (param_3 < 8) {
      lVar7 = 8;
    }
    else {
      cVar4 = FUN_14207c6a0(param_3 - 1);
      lVar7 = 1L << (cVar4 + 1U & 0x3f);
    }
    local_res18[0] = 2;
    local_res20 = (longlong *)
                  (**(code **)(*DAT_146b62f28 + 0x70))
                            (DAT_146b62f28,param_2,lVar7 * 0x38 + 0x10,local_res18);
    lVar8 = 0;
    *local_res20 = 0;
    local_res20[1] = lVar7 + -1;
    lVar9 = lVar8;
    do {
      *(undefined8 *)(lVar9 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
      lVar7 = lVar7 + -1;
      lVar9 = lVar9 + 0x38;
    } while (lVar7 != 0);
    if (*param_1 != 0) {
      lVar7 = *(longlong *)(*param_1 + 8) + 1;
      do {
        lVar9 = *param_1 + lVar8;
        if (*(longlong *)(lVar9 + 0x10) != -2) {
          uVar5 = FUN_142062cb0(local_res18,lVar9 + 0x20);
          FUN_142064330(&local_res20,param_2);
          *local_res20 = *local_res20 + 1;
          uVar5 = uVar5 & local_res20[1];
          lVar1 = local_res20[uVar5 * 7 + 2];
          uVar6 = uVar5;
          if (lVar1 == -2) {
            local_res20[uVar5 * 7 + 2] = -1;
            local_res20[uVar5 * 7 + 3] = 0;
            lVar1 = *(longlong *)(lVar9 + 0x28);
            local_res20[uVar5 * 7 + 4] = *(longlong *)(lVar9 + 0x20);
            local_res20[uVar5 * 7 + 5] = lVar1;
            uVar12 = *(undefined4 *)(lVar9 + 0x34);
            uVar13 = *(undefined4 *)(lVar9 + 0x38);
            uVar3 = *(undefined4 *)(lVar9 + 0x3c);
            *(undefined4 *)(local_res20 + uVar5 * 7 + 6) = *(undefined4 *)(lVar9 + 0x30);
            *(undefined4 *)((longlong)local_res20 + uVar5 * 0x38 + 0x34) = uVar12;
            *(undefined4 *)(local_res20 + uVar5 * 7 + 7) = uVar13;
            *(undefined4 *)((longlong)local_res20 + uVar5 * 0x38 + 0x3c) = uVar3;
            local_res20[uVar5 * 7 + 8] = *(longlong *)(lVar9 + 0x40);
          }
          else {
            do {
              uVar6 = uVar6 + 1 & local_res20[1];
              plVar10 = local_res20 + uVar6 * 7 + 2;
            } while (*plVar10 != -2);
            if (local_res20[uVar5 * 7 + 3] == uVar5) {
              *plVar10 = lVar1;
              plVar10[1] = local_res20[uVar5 * 7 + 3];
              lVar1 = local_res20[uVar5 * 7 + 5];
              plVar10[2] = local_res20[uVar5 * 7 + 4];
              plVar10[3] = lVar1;
              lVar1 = local_res20[uVar5 * 7 + 7];
              plVar10[4] = local_res20[uVar5 * 7 + 6];
              plVar10[5] = lVar1;
              plVar10[6] = local_res20[uVar5 * 7 + 8];
              lVar1 = *(longlong *)(lVar9 + 0x28);
              local_res20[uVar5 * 7 + 4] = *(longlong *)(lVar9 + 0x20);
              local_res20[uVar5 * 7 + 5] = lVar1;
              lVar1 = *(longlong *)(lVar9 + 0x38);
              local_res20[uVar5 * 7 + 6] = *(longlong *)(lVar9 + 0x30);
              local_res20[uVar5 * 7 + 7] = lVar1;
              uVar12 = (undefined4)*(undefined8 *)(lVar9 + 0x40);
              uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0x40) >> 0x20);
              local_res20[uVar5 * 7 + 2] = uVar6;
            }
            else {
              puVar11 = (ulonglong *)(local_res20 + local_res20[uVar5 * 7 + 3] * 7 + 2);
              uVar2 = *puVar11;
              while (uVar2 != uVar5) {
                puVar11 = (ulonglong *)(local_res20 + uVar2 * 7 + 2);
                uVar2 = *puVar11;
              }
              *plVar10 = lVar1;
              plVar10[1] = local_res20[uVar5 * 7 + 3];
              lVar1 = local_res20[uVar5 * 7 + 5];
              plVar10[2] = local_res20[uVar5 * 7 + 4];
              plVar10[3] = lVar1;
              lVar1 = local_res20[uVar5 * 7 + 7];
              plVar10[4] = local_res20[uVar5 * 7 + 6];
              plVar10[5] = lVar1;
              plVar10[6] = local_res20[uVar5 * 7 + 8];
              *puVar11 = uVar6;
              lVar1 = *(longlong *)(lVar9 + 0x28);
              local_res20[uVar5 * 7 + 4] = *(longlong *)(lVar9 + 0x20);
              local_res20[uVar5 * 7 + 5] = lVar1;
              lVar1 = *(longlong *)(lVar9 + 0x38);
              local_res20[uVar5 * 7 + 6] = *(longlong *)(lVar9 + 0x30);
              local_res20[uVar5 * 7 + 7] = lVar1;
              uVar12 = (undefined4)*(undefined8 *)(lVar9 + 0x40);
              uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0x40) >> 0x20);
              local_res20[uVar5 * 7 + 2] = -1;
            }
            local_res20[uVar5 * 7 + 8] = CONCAT44(uVar13,uVar12);
          }
          local_res20[uVar5 * 7 + 3] = uVar5;
          *(undefined8 *)(lVar9 + 0x10) = 0xfffffffffffffffe;
        }
        lVar8 = lVar8 + 0x38;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    }
    *param_1 = (longlong)local_res20;
    return;
  }
  FUN_142064380();
  return;
}



// FUNCTION 14207dda0 FUN_14207dda0 body=927 status=ok
// SIG undefined FUN_14207dda0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14207dda0(longlong *param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined4 local_120;
  undefined1 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  ulonglong local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined2 local_e0 [4];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  cVar3 = IsInRenderingThread();
  if (((cVar3 != '\0') && (param_1[0x67d] != 0)) && ((param_3 & 4) == 0)) {
    local_f0 = *(undefined8 *)(param_2 + 0x80);
    uVar10 = 0;
    iVar11 = 0;
    local_e8 = 0;
    local_e4 = 0xffffffff;
    local_e0[0] = 0x101;
    if (*(longlong *)(param_2 + 0x90) == 0) {
      local_d8 = 0;
      iVar5 = 2;
      local_108 = uVar10;
      iVar9 = iVar11;
    }
    else {
      local_f8 = *(ulonglong *)(*(longlong *)(param_2 + 0x90) + 0x48);
      if (local_f8 != 0) {
        LOCK();
        *(int *)(local_f8 + 8) = *(int *)(local_f8 + 8) + 1;
        UNLOCK();
      }
      local_108 = local_f8;
      iVar5 = iVar11;
      iVar9 = 1;
    }
    uStack_100 = 0x1010101;
    uStack_fc = 0x22;
    if (iVar5 != 0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_d8);
    }
    if (iVar9 != 0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_f8);
    }
    lVar1 = param_1[0x67d];
    *(undefined4 *)(lVar1 + 0x98) = 1;
    uVar7 = uVar10;
    do {
      uVar6 = (int)uVar7 + 1;
      uVar2 = *(undefined8 *)(&local_e8 + uVar7 * 6);
      puVar4 = (undefined8 *)(lVar1 + 0xa0 + uVar7 * 0x18);
      *puVar4 = (&local_f0)[uVar7 * 3];
      puVar4[1] = uVar2;
      *(undefined8 *)(lVar1 + 0xb0 + uVar7 * 0x18) = *(undefined8 *)(local_e0 + uVar7 * 0xc);
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(lVar1 + 0x98));
    *(undefined4 *)(lVar1 + 0x160) = (undefined4)local_108;
    *(undefined4 *)(lVar1 + 0x164) = local_108._4_4_;
    *(undefined4 *)(lVar1 + 0x168) = uStack_100;
    *(undefined4 *)(lVar1 + 0x16c) = uStack_fc;
    puVar8 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar8 + 0x26;
    if (*(undefined8 **)(lVar1 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(lVar1 + 0x30,0x138);
      puVar8 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar8 + 0x26;
    }
    *(undefined8 **)(lVar1 + 0x30) = puVar4;
    *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + 1;
    **(undefined8 **)(lVar1 + 8) = puVar8;
    *(undefined8 **)(lVar1 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59440;
    *(undefined4 *)(puVar8 + 2) = 1;
    puVar8[3] = 0;
    *(undefined4 *)(puVar8 + 4) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x24) = 0xffffffff;
    *(undefined2 *)(puVar8 + 5) = 0;
    puVar8[6] = 0;
    *(undefined4 *)(puVar8 + 7) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x3c) = 0xffffffff;
    *(undefined2 *)(puVar8 + 8) = 0;
    puVar8[9] = 0;
    *(undefined4 *)(puVar8 + 10) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x54) = 0xffffffff;
    *(undefined2 *)(puVar8 + 0xb) = 0;
    puVar8[0xc] = 0;
    *(undefined4 *)(puVar8 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x6c) = 0xffffffff;
    *(undefined2 *)(puVar8 + 0xe) = 0;
    puVar8[0xf] = 0;
    *(undefined4 *)(puVar8 + 0x10) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x84) = 0xffffffff;
    *(undefined2 *)(puVar8 + 0x11) = 0;
    puVar8[0x12] = 0;
    *(undefined4 *)(puVar8 + 0x13) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x9c) = 0xffffffff;
    *(undefined2 *)(puVar8 + 0x14) = 0;
    puVar8[0x15] = 0;
    *(undefined4 *)(puVar8 + 0x16) = 0;
    *(undefined4 *)((longlong)puVar8 + 0xb4) = 0xffffffff;
    *(undefined2 *)(puVar8 + 0x17) = 0;
    puVar8[0x18] = 0;
    *(undefined4 *)(puVar8 + 0x19) = 0;
    *(undefined4 *)((longlong)puVar8 + 0xcc) = 0xffffffff;
    *(undefined2 *)(puVar8 + 0x1a) = 0;
    puVar8[0x1b] = 0;
    *(undefined4 *)(puVar8 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar8 + 0xe4) = 0;
    uVar7 = uVar10;
    if (*(int *)(puVar8 + 2) != 0) {
      do {
        uVar6 = (int)uVar7 + 1;
        uVar2 = *(undefined8 *)(&local_e8 + uVar7 * 6);
        puVar8[uVar7 * 3 + 3] = (&local_f0)[uVar7 * 3];
        (puVar8 + uVar7 * 3 + 3)[1] = uVar2;
        puVar8[uVar7 * 3 + 5] = *(undefined8 *)(local_e0 + uVar7 * 0xc);
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(puVar8 + 2));
      iVar11 = *(int *)(puVar8 + 0x1d);
    }
    if (iVar11 != 0) {
      do {
        uVar6 = (int)uVar10 + 1;
        puVar8[uVar10 + 0x1e] = *(undefined8 *)(uVar10 * 8);
        uVar10 = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)(puVar8 + 0x1d));
    }
    *(undefined4 *)(puVar8 + 0x1b) = (undefined4)local_108;
    *(undefined4 *)((longlong)puVar8 + 0xdc) = local_108._4_4_;
    *(undefined4 *)(puVar8 + 0x1c) = uStack_100;
    *(undefined4 *)((longlong)puVar8 + 0xe4) = uStack_fc;
    *(int *)(param_1 + 0x50) = (int)param_1[0x50] + 1;
    if ((param_3 & 1) == 0) {
      FUN_14203c4b0(param_4,&local_d0);
      local_110 = 0;
      local_b8 = local_d0;
      uStack_b0 = uStack_c8;
      local_118 = 0;
      local_120 = 0;
      local_128 = 0;
      DrawClearQuadMRT(param_1[0x67d],1,1,&local_b8);
    }
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  return;
}



// FUNCTION 14207e140 FUN_14207e140 body=204 status=ok
// SIG undefined FUN_14207e140(void)

ulonglong FUN_14207e140(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  iVar1 = *(int *)(param_4 + 0x78);
  iVar2 = *(int *)(param_2 + 0x20);
  uVar4 = FUN_142078a30(param_4);
  lVar3 = *(longlong *)(param_1 + 0x33e8);
  puVar6 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar6 + 5;
  if (*(undefined8 **)(lVar3 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x30);
    puVar6 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
  }
  *(undefined8 **)(lVar3 + 0x30) = puVar5;
  *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
  **(undefined8 **)(lVar3 + 8) = puVar6;
  *(undefined8 **)(lVar3 + 8) = puVar6 + 1;
  puVar6[1] = 0;
  *(undefined4 *)(puVar6 + 2) = 0;
  *puVar6 = &PTR_LAB_143f489e0;
  puVar6[3] = uVar4;
  *(int *)(puVar6 + 4) = iVar1 + iVar2;
  uVar4 = FUN_142071610(param_4);
  *(undefined8 *)(param_1 + 0x33e0) = uVar4;
  return *(ulonglong *)(param_4 + 0x88) >> 1;
}



// FUNCTION 14207e210 FUN_14207e210 body=202 status=ok
// SIG undefined FUN_14207e210(void)

ulonglong FUN_14207e210(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 0x78);
  uVar3 = FUN_142078a30();
  lVar2 = *(longlong *)(param_1 + 0x33e8);
  puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar4 + 5;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x30);
    puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar4 + 5;
  }
  *(undefined8 **)(lVar2 + 0x30) = puVar5;
  *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
  **(undefined8 **)(lVar2 + 8) = puVar4;
  *(undefined8 **)(lVar2 + 8) = puVar4 + 1;
  puVar4[1] = 0;
  *(undefined4 *)(puVar4 + 2) = 0;
  *puVar4 = &PTR_LAB_143f489e0;
  puVar4[3] = uVar3;
  *(undefined4 *)(puVar4 + 4) = uVar1;
  uVar3 = FUN_142071610(param_3);
  *(undefined8 *)(param_1 + 0x33e0) = uVar3;
  return *(ulonglong *)(param_3 + 0x88) >> 1;
}



// FUNCTION 14207e2e0 FUN_14207e2e0 body=501 status=ok
// SIG undefined FUN_14207e2e0(void)

void FUN_14207e2e0(longlong *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int iVar16;
  longlong lVar17;
  longlong local_res20;
  
  if (-1 < param_2 + -2) {
    iVar10 = param_2 + -1;
    iVar12 = param_2 * 3;
    lVar17 = 0;
    local_res20 = 1;
    iVar9 = 0;
    iVar16 = iVar10;
    do {
      iVar1 = iVar9 + 1;
      if (iVar1 <= iVar10) {
        iVar11 = iVar1;
        if (3 < iVar16) {
          lVar8 = *param_1;
          iVar3 = param_2 * 4;
          puVar6 = (undefined4 *)(lVar8 + (longlong)(param_2 * -2 + iVar12 + iVar9) * 4);
          puVar15 = (undefined4 *)(lVar8 + (longlong)(iVar12 + iVar9 + param_2) * 4);
          puVar5 = (undefined4 *)(lVar8 + (longlong)(iVar12 + iVar9) * 4);
          puVar7 = (undefined4 *)(lVar8 + (longlong)((iVar12 - param_2) + iVar9) * 4);
          uVar4 = ((iVar10 - iVar1) - 3U >> 2) + 1;
          uVar13 = (ulonglong)uVar4;
          iVar11 = iVar1 + uVar4 * 4;
          puVar14 = (undefined4 *)(lVar8 + (local_res20 + lVar17) * 4);
          do {
            uVar2 = *puVar14;
            *puVar14 = *puVar6;
            *puVar6 = uVar2;
            puVar6 = puVar6 + iVar3;
            uVar2 = puVar14[1];
            puVar14[1] = *puVar7;
            *puVar7 = uVar2;
            puVar7 = puVar7 + iVar3;
            uVar2 = puVar14[2];
            puVar14[2] = *puVar5;
            *puVar5 = uVar2;
            puVar5 = puVar5 + iVar3;
            uVar2 = puVar14[3];
            puVar14[3] = *puVar15;
            *puVar15 = uVar2;
            puVar15 = puVar15 + iVar3;
            uVar13 = uVar13 - 1;
            puVar14 = puVar14 + 4;
          } while (uVar13 != 0);
        }
        if (iVar11 <= iVar10) {
          puVar6 = (undefined4 *)(*param_1 + (longlong)(iVar11 * param_2 + iVar9) * 4);
          lVar8 = (longlong)((iVar10 - iVar11) + 1);
          puVar15 = (undefined4 *)(*param_1 + (iVar11 + lVar17) * 4);
          do {
            uVar2 = *puVar15;
            *puVar15 = *puVar6;
            *puVar6 = uVar2;
            puVar6 = puVar6 + param_2;
            lVar8 = lVar8 + -1;
            puVar15 = puVar15 + 1;
          } while (lVar8 != 0);
        }
      }
      local_res20 = local_res20 + 1;
      iVar12 = iVar12 + param_2;
      iVar16 = iVar16 + -1;
      lVar17 = lVar17 + param_2;
      iVar9 = iVar1;
    } while (iVar1 <= param_2 + -2);
  }
  return;
}



// FUNCTION 14207e4e0 FUN_14207e4e0 body=802 status=ok
// SIG undefined FUN_14207e4e0(void)

void FUN_14207e4e0(longlong *param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  DWORD DVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  
  cVar10 = IsInRenderingThread();
  if ((cVar10 != '\0') && (param_1[0x67d] != 0)) {
    DVar11 = GetCurrentThreadId();
    *(DWORD *)(param_1 + 10) = DVar11;
    if ((*(uint *)(param_1 + 0xb) & 0x20) == 0) {
      lVar7 = param_1[0x67d];
      puVar13 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar13 + 5;
      if (*(undefined8 **)(lVar7 + 0x38) < puVar12) {
        FMemStackBase::AllocateNewChunk(lVar7 + 0x30);
        puVar13 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar13 + 5;
      }
      *(undefined8 **)(lVar7 + 0x30) = puVar12;
      *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
      **(undefined8 **)(lVar7 + 8) = puVar13;
      *(undefined8 **)(lVar7 + 8) = puVar13 + 1;
      puVar13[1] = 0;
      *puVar13 = &PTR_LAB_143f59420;
      puVar13[2] = 0;
      puVar13[3] = 0;
      *(undefined4 *)(puVar13 + 4) = 0;
      *(undefined4 *)((longlong)puVar13 + 0x24) = 0x3f800000;
      return;
    }
    pfVar1 = (float *)(param_1 + 0x232);
    (**(code **)(*param_1 + 0x268))
              (param_1,0,param_1[0x4b] + 0x10,pfVar1,
               (float)(int)(*pfVar1 - (float)*(int *)((longlong)param_1 + 0x1164)),
               (float)(int)(*(float *)((longlong)param_1 + 0x1194) - (float)(int)param_1[0x22d]));
    (**(code **)(*param_1 + 0x278))(param_1);
    fVar15 = *pfVar1;
    lVar7 = param_1[0x4b];
    uVar2 = *(undefined4 *)((longlong)param_1 + 0x119c);
    lVar8 = param_1[0x233];
    *(undefined4 *)(lVar7 + 0x1d4) = *(undefined4 *)((longlong)param_1 + 0x1194);
    *(int *)(lVar7 + 0x1d8) = (int)lVar8;
    *(undefined4 *)(lVar7 + 0x1dc) = uVar2;
    *(float *)(lVar7 + 0x1d0) = fVar15;
    *(undefined1 *)(param_1[0x4b] + 0x280) = 1;
    if ((*(uint *)(param_1 + 0xb) & 0x10) == 0) {
      fVar15 = *(float *)((longlong)param_1 + 0x119c);
      fVar3 = *(float *)((longlong)param_1 + 0x1194);
      if (fVar15 == fVar3) {
        fVar15 = fVar3 + 1.0;
      }
      fVar14 = *(float *)(param_1 + 0x233);
      fVar4 = *pfVar1;
      if (fVar14 == fVar4) {
        fVar14 = fVar4 + 1.0;
      }
      lVar7 = param_1[0x67d];
      puVar13 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar13 + 5;
      if (*(undefined8 **)(lVar7 + 0x38) < puVar12) {
        FMemStackBase::AllocateNewChunk(lVar7 + 0x30);
        puVar13 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar13 + 5;
      }
      *(undefined8 **)(lVar7 + 0x30) = puVar12;
      *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
      **(undefined8 **)(lVar7 + 8) = puVar13;
      *(undefined8 **)(lVar7 + 8) = puVar13 + 1;
      puVar13[1] = 0;
      *puVar13 = &PTR_LAB_143f59420;
      *(int *)(puVar13 + 2) = (int)(longlong)fVar4;
      *(int *)((longlong)puVar13 + 0x14) = (int)(longlong)fVar3;
      *(undefined4 *)(puVar13 + 3) = 0;
      *(int *)((longlong)puVar13 + 0x1c) = (int)(longlong)fVar14;
      *(int *)(puVar13 + 4) = (int)(longlong)fVar15;
    }
    else {
      lVar7 = param_1[0x67d];
      lVar8 = param_1[0x22e];
      iVar5 = *(int *)((longlong)param_1 + 0x116c);
      lVar9 = param_1[0x22d];
      iVar6 = *(int *)((longlong)param_1 + 0x1164);
      puVar13 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar13 + 5;
      if (*(undefined8 **)(lVar7 + 0x38) < puVar12) {
        FMemStackBase::AllocateNewChunk(lVar7 + 0x30);
        puVar13 = (undefined8 *)(*(longlong *)(lVar7 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar13 + 5;
      }
      *(undefined8 **)(lVar7 + 0x30) = puVar12;
      *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
      **(undefined8 **)(lVar7 + 8) = puVar13;
      *(undefined8 **)(lVar7 + 8) = puVar13 + 1;
      puVar13[1] = 0;
      *puVar13 = &PTR_LAB_143f59420;
      *(int *)(puVar13 + 2) = iVar6;
      *(int *)((longlong)puVar13 + 0x14) = (int)lVar9;
      *(undefined4 *)(puVar13 + 3) = 0;
      *(int *)((longlong)puVar13 + 0x1c) = iVar5 + iVar6;
      *(int *)(puVar13 + 4) = (int)lVar8 + (int)lVar9;
    }
    *(undefined4 *)((longlong)puVar13 + 0x24) = 0x3f800000;
  }
  return;
}



// FUNCTION 14207e810 FUN_14207e810 body=552 status=ok
// SIG undefined FUN_14207e810(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14207e810(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar2[1] = (longlong)FUN_142049b30;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9f0;
  }
  uVar5 = 0;
  if (plVar2 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af130,1);
    puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
    iVar1 = DAT_1464af138;
    lVar3 = (longlong)DAT_1464af138;
    uVar5 = *puVar4;
    DAT_1464af138 = DAT_1464af138 + 1;
    if (DAT_1464af13c < DAT_1464af138) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af130,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_1464af130);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 2;
  }
  *(undefined8 *)(param_1 + 8) = uVar5;
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_144f8bae8;
    plVar2[1] = (longlong)FUN_142049170;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_144f8bb30;
  }
  uVar5 = 0;
  if (plVar2 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af0d0,1);
    puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
    iVar1 = DAT_1464af0d8;
    lVar3 = (longlong)DAT_1464af0d8;
    uVar5 = *puVar4;
    DAT_1464af0d8 = DAT_1464af0d8 + 1;
    if (DAT_1464af0dc < DAT_1464af0d8) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af0d0,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + _DAT_1464af0d0);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 2;
  }
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    return;
  }
  *plVar2 = (longlong)&PTR_GetPoolName_144f8bae8;
  plVar2[1] = (longlong)FUN_1420492c0;
  lVar3 = FDelegateHandle::GenerateNewID();
  plVar2[3] = lVar3;
  *plVar2 = (longlong)&PTR_GetPoolName_144f8bb30;
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af0e8,1);
  puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
  iVar1 = DAT_1464af0f0;
  lVar3 = (longlong)DAT_1464af0f0;
  uVar5 = *puVar4;
  DAT_1464af0f0 = DAT_1464af0f0 + 1;
  if (DAT_1464af0f4 < DAT_1464af0f0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af0e8,iVar1);
  }
  puVar4 = (undefined8 *)(lVar3 * 0x10 + _DAT_1464af0e8);
  *puVar4 = plVar2;
  *(undefined4 *)(puVar4 + 1) = 2;
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  return;
}



// FUNCTION 14207ea40 FUN_14207ea40 body=357 status=ok
// SIG undefined FUN_14207ea40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14207ea40(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 local_res8 [8];
  
  uVar6 = 0;
  lVar3 = *(longlong *)(param_1 + 8);
  uVar8 = uVar6;
  uVar10 = uVar6;
  iVar4 = DAT_1464af138;
  if (0 < DAT_1464af138) {
    do {
      plVar9 = (longlong *)(DAT_1464af130 + uVar10);
      if ((((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) &&
         (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8),
         iVar4 = DAT_1464af138, *plVar2 == lVar3)) {
        if (((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar9 != 0) {
            lVar3 = FMemory::Realloc(*plVar9,0,0);
            *plVar9 = lVar3;
          }
          *(undefined4 *)(plVar9 + 1) = 0;
          iVar4 = DAT_1464af138;
        }
        break;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar10 = uVar10 + 0x10;
    } while ((int)uVar7 < iVar4);
  }
  if (DAT_1464af144 < 1) {
    uVar8 = uVar6;
    iVar5 = iVar4;
    if (0 < iVar4) {
      do {
        if (((*(int *)(uVar6 + 8 + DAT_1464af130) == 0) ||
            (*(longlong **)(uVar6 + DAT_1464af130) == (longlong *)0x0)) ||
           (cVar1 = (**(code **)(**(longlong **)(uVar6 + DAT_1464af130) + 0x10))(), cVar1 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464af130,uVar8,1,1);
        }
        else {
          uVar8 = (ulonglong)((int)uVar8 + 1);
          uVar6 = uVar6 + 0x10;
        }
        iVar5 = DAT_1464af138;
      } while ((int)uVar8 < DAT_1464af138);
    }
    _DAT_1464af140 = iVar5 * 2;
    if (_DAT_1464af140 < 3) {
      _DAT_1464af140 = 2;
    }
    if ((_DAT_1464af140 < iVar4) && (DAT_1464af13c != iVar5)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464af130);
    }
  }
  TBaseMulticastDelegate<void>::Remove(&DAT_1464af0d0,*(undefined8 *)(param_1 + 0x10));
  TBaseMulticastDelegate<void>::Remove(&DAT_1464af0e8,*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 14207ebb0 FUN_14207ebb0 body=66 status=ok
// SIG undefined FUN_14207ebb0(void)

void FUN_14207ebb0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144f8bae8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144f8bb30;
  }
  return;
}



// FUNCTION 14207ec10 ExecuteIfSafe body=19 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseStaticDelegateInstance<void___cdecl(int)>::ExecuteIfSafe(longlong param_1,undefined4 param_2)

{
  (**(code **)(param_1 + 8))(param_2);
  return 1;
}



// FUNCTION 14207ec30 FUN_14207ec30 body=165 status=ok
// SIG undefined FUN_14207ec30(void)

undefined8 * FUN_14207ec30(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 local_58 [16];
  longlong local_48 [4];
  longlong *local_28;
  int local_18;
  
  *param_1 = &PTR_FUN_144f8bf68;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_58);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x60,param_1 + 4);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_1444f81f0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,local_58);
  }
  param_1[2] = UE4Function_Private::
               TFunctionRefCaller<<lambda_50573a4081bc06268289253819177437>,void___cdecl(void)>::
               Call;
  if (local_18 != 0) {
    plVar2 = local_48;
    if (local_28 != (longlong *)0x0) {
      plVar2 = local_28;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14207ece0 FUN_14207ece0 body=89 status=ok
// SIG undefined FUN_14207ece0(void)

void FUN_14207ece0(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = FUN_142093e60();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 14207ed40 FUN_14207ed40 body=394 status=ok
// SIG undefined FUN_14207ed40(void)

undefined2 *
FUN_14207ed40(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  plVar4 = (longlong *)*param_1;
  if (plVar4 == (longlong *)0x0) {
    lVar6 = 8;
  }
  else {
    if ((ulonglong)(*plVar4 * 5) <= plVar4[1] * 4 + 4U) goto LAB_14207ed94;
    lVar6 = plVar4[1] * 2 + 2;
  }
  FUN_142093050(param_1,param_2,lVar6);
LAB_14207ed94:
  plVar4 = (longlong *)*param_1;
  uVar2 = plVar4[1];
  *plVar4 = *plVar4 + 1;
  lVar6 = *param_1;
  param_4 = uVar2 & param_4;
  lVar5 = param_4 * 0x10 + lVar6;
  lVar1 = *(longlong *)(lVar5 + 0x10);
  if (lVar1 == -2) {
    *(undefined8 *)(lVar5 + 0x10) = 0xffffffffffffffff;
    *(undefined2 *)(lVar5 + 0x18) = *(undefined2 *)*param_3;
    *(undefined2 *)(lVar5 + 0x1a) = *(undefined2 *)param_3[1];
    return (undefined2 *)(lVar5 + 0x18);
  }
  uVar7 = param_4;
  do {
    uVar7 = uVar7 + 1 & uVar2;
    plVar4 = (longlong *)(uVar7 * 0x10 + lVar6 + 0x10);
  } while (*plVar4 != -2);
  uVar2 = *(ushort *)(lVar5 + 0x18) & uVar2;
  if (uVar2 == param_4) {
    *plVar4 = lVar1;
    *(undefined2 *)(plVar4 + 1) = *(undefined2 *)(lVar5 + 0x18);
    *(undefined2 *)((longlong)plVar4 + 10) = *(undefined2 *)(lVar5 + 0x1a);
    *(undefined2 *)(lVar5 + 0x18) = *(undefined2 *)*param_3;
    *(undefined2 *)(lVar5 + 0x1a) = *(undefined2 *)param_3[1];
    *(ulonglong *)(lVar5 + 0x10) = uVar7;
  }
  else {
    puVar3 = (ulonglong *)((uVar2 + 1) * 0x10 + lVar6);
    uVar2 = *puVar3;
    while (uVar2 != param_4) {
      puVar3 = (ulonglong *)((uVar2 + 1) * 0x10 + lVar6);
      uVar2 = *puVar3;
    }
    *plVar4 = lVar1;
    *(undefined2 *)(plVar4 + 1) = *(undefined2 *)(lVar5 + 0x18);
    *(undefined2 *)((longlong)plVar4 + 10) = *(undefined2 *)(lVar5 + 0x1a);
    *puVar3 = uVar7;
    *(undefined2 *)(lVar5 + 0x18) = *(undefined2 *)*param_3;
    *(undefined2 *)(lVar5 + 0x1a) = *(undefined2 *)param_3[1];
    *(undefined8 *)(lVar5 + 0x10) = 0xffffffffffffffff;
  }
  return (undefined2 *)(lVar5 + 0x18);
}



// FUNCTION 14207eed0 TFunction<void___cdecl(void)> body=185 status=ok
// SIG undefined TFunction<void___cdecl(void)>(void)

undefined8 *
TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2[6] == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_1 + 2,param_2 + 2,0x20);
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  param_1[6] = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_1 + 8) != 0) {
    plVar2 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar2 = param_1 + 2;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2);
      puVar1 = (undefined1 *)*param_2;
      goto LAB_14207ef65;
    }
  }
  puVar1 = &LAB_142082900;
LAB_14207ef65:
  *param_1 = puVar1;
  *param_2 = &LAB_142082900;
  return param_1;
}



// FUNCTION 14207ef90 FUN_14207ef90 body=212 status=ok
// SIG undefined FUN_14207ef90(void)

undefined8 * FUN_14207ef90(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = 0;
  FString::FString(param_1 + 1);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x60,param_1 + 6);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_144f8c870;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_3);
  }
  param_1[4] = FUN_142082a70;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0xe] = FUN_1407c3030;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  if (*param_2 != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_3 + 0x40) != 0) {
    plVar2 = *(longlong **)(param_3 + 0x30);
    if (*(longlong **)(param_3 + 0x30) == (longlong *)0x0) {
      plVar2 = (longlong *)(param_3 + 0x10);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (*(longlong *)(param_3 + 0x30) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14207f070 TFunction<void___cdecl(void)> body=112 status=ok
// SIG undefined TFunction<void___cdecl(void)>(void)

undefined8 *
TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
          (undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_2 + 8) != 0) {
    puVar2 = (undefined8 *)param_2[6];
    if ((undefined8 *)param_2[6] == (undefined8 *)0x0) {
      puVar2 = param_2 + 2;
    }
    if (puVar2 != (undefined8 *)0x0) {
      plVar1 = (longlong *)(**(code **)*puVar2)(puVar2,param_1 + 2);
      (**(code **)(*plVar1 + 8))(plVar1);
      *param_1 = *param_2;
      return param_1;
    }
  }
  *param_1 = &LAB_142082900;
  return param_1;
}



// FUNCTION 14207f0e0 FUN_14207f0e0 body=174 status=ok
// SIG undefined FUN_14207f0e0(void)

undefined8 *
FUN_14207f0e0(undefined8 *param_1,RefCountImpl *param_2,undefined4 *param_3,longlong *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_144f8bc48;
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  param_1[5] = param_2;
  *(undefined4 *)(param_1 + 6) = 0;
  uVar1 = param_3[1];
  *(undefined4 *)((longlong)param_1 + 0x34) = *param_3;
  *(undefined4 *)(param_1 + 7) = uVar1;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_144f8bdc0;
  lVar2 = *param_4;
  param_1[9] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 14207f190 FUN_14207f190 body=128 status=ok
// SIG undefined FUN_14207f190(void)

undefined8 * FUN_14207f190(undefined8 *param_1,void *param_2,undefined8 param_3,undefined4 param_4)

{
  ulonglong _Size;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *param_1 = &PTR_FUN_144f8c470;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = param_3;
  *(undefined4 *)(param_1 + 3) = param_4;
  *(undefined1 *)(param_1 + 4) = 0;
  if (param_2 != (void *)0x0) {
    _Size = 0xffffffffffffffff;
    do {
      _Size = _Size + 1;
    } while (*(char *)((longlong)param_2 + _Size) != '\0');
    if (0x3d < _Size) {
      _Size = 0x3e;
    }
    _guard_xfg_dispatch_icall_nop(param_1 + 4,param_2,_Size);
    *(undefined1 *)(_Size + 0x20 + (longlong)param_1) = 0;
  }
  return param_1;
}



// FUNCTION 14207f210 FUN_14207f210 body=52 status=ok
// SIG undefined FUN_14207f210(void)

undefined8 * FUN_14207f210(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 2) = 0x16;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_144f8c458;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 14207f250 MappedTexture body=159 status=ok
// SIG undefined MappedTexture(void)

undefined8 * Scaleform::Render::RHI::MappedTexture::MappedTexture(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = param_1 + 7;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0x10000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_144f8bde0;
  return param_1;
}



// FUNCTION 14207f2f0 FUN_14207f2f0 body=190 status=ok
// SIG undefined FUN_14207f2f0(void)

undefined8 *
FUN_14207f2f0(undefined8 *param_1,RefCountImpl *param_2,undefined4 *param_3,undefined1 param_4,
             undefined2 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_144f8bb90;
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  param_1[5] = param_2;
  param_1[6] = param_6;
  uVar1 = param_3[1];
  *(undefined4 *)(param_1 + 7) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar1;
  *(undefined2 *)((longlong)param_1 + 0x46) = param_5;
  param_1[0xb] = param_7;
  *(undefined1 *)((longlong)param_1 + 0x44) = param_4;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x45) = 1;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 14207f3b0 FUN_14207f3b0 body=502 status=ok
// SIG undefined FUN_14207f3b0(void)

undefined8 * FUN_14207f3b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined4 local_res8 [2];
  
  FUN_1432c9d20();
  *param_1 = &PTR_FUN_144f8bdf8;
  piVar4 = &DAT_1464fae60;
  param_1[2] = &PTR_LAB_144f8bf08;
  param_1[3] = &PTR_LAB_144f8bf20;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = param_1 + 0x23;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x10000;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x1c] = &PTR_FUN_144f8bde0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[10] = param_3;
  if (DAT_1464fae60 != 0) {
    plVar2 = param_1 + 0x13;
    do {
      local_res8[0] = 0x48;
      puVar3 = (undefined8 *)
               (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x10,local_res8);
      puVar5 = (undefined8 *)0x0;
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_FUN_144f8bc88;
        puVar3[1] = piVar4;
        puVar5 = puVar3;
      }
      uVar1 = param_1[0x14] + 1;
      if (uVar1 < (ulonglong)param_1[0x14]) {
        uVar6 = uVar1;
        if (uVar1 < (ulonglong)param_1[0x15] >> 1) {
LAB_14207f564:
          FUN_14207a890(plVar2,plVar2,uVar6);
        }
      }
      else if ((ulonglong)param_1[0x15] < uVar1) {
        uVar6 = (uVar1 >> 2) + uVar1;
        goto LAB_14207f564;
      }
      piVar4 = piVar4 + 8;
      param_1[0x14] = uVar1;
      *(undefined8 **)(*plVar2 + -8 + uVar1 * 8) = puVar5;
    } while (*piVar4 != 0);
  }
  return param_1;
}



// FUNCTION 14207f5b0 FUN_14207f5b0 body=729 status=ok
// SIG undefined FUN_14207f5b0(void)

undefined8 * FUN_14207f5b0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 local_res8;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  FUN_141781840();
  uVar8 = 0;
  *param_1 = &PTR_FUN_144f8bf80;
  plVar1 = param_1 + 0x16;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *plVar1 = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0xffffffffffffffff;
  param_1[0x25] = 0xffffffffffffffff;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x32));
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined2 *)((longlong)param_1 + 500) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffd;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x178d;
  *(undefined1 *)((longlong)param_1 + 0x154) = 1;
  FWeakObjectPtr::operator=(&local_38,0);
  local_30 = 0;
  puVar3 = (undefined8 *)FName::FName(&local_res8,"ReceiveGFxCommand",1);
  FWeakObjectPtr::operator=(&local_38,param_1);
  local_30 = *puVar3;
  iVar7 = *(int *)(param_1 + 0x17);
  if (0 < iVar7) {
    local_res8 = 0;
    uVar9 = uVar8;
    do {
      iVar7 = (int)uVar8;
      if ((*(longlong *)(*plVar1 + uVar9 + 8) == 0) ||
         (lVar4 = FWeakObjectPtr::Get(*plVar1 + uVar9,1), lVar4 == 0)) {
        iVar5 = *(int *)(param_1 + 0x17);
        iVar2 = (iVar5 - iVar7) + -1;
        if (0 < iVar2) {
          iVar2 = 1;
        }
        if (iVar2 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar7 * 0x10 + *plVar1),
                     (void *)((longlong)(iVar5 - iVar2) * 0x10 + *plVar1),(longlong)iVar2 << 4);
          iVar5 = *(int *)(param_1 + 0x17);
        }
        *(int *)(param_1 + 0x17) = iVar5 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar1);
      }
      else {
        uVar8 = (ulonglong)(iVar7 + 1);
        uVar9 = uVar9 + 0x10;
      }
      iVar7 = *(int *)(param_1 + 0x17);
    } while ((int)uVar8 < iVar7);
  }
  *(int *)(param_1 + 0x17) = iVar7 + 1;
  if (*(int *)((longlong)param_1 + 0xbc) < iVar7 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar7);
  }
  puVar6 = (undefined4 *)((longlong)iVar7 * 0x10 + *plVar1);
  *puVar6 = local_38;
  puVar6[1] = local_34;
  *(undefined8 *)(puVar6 + 2) = local_30;
  return param_1;
}



// FUNCTION 14207f890 FUN_14207f890 body=146 status=ok
// SIG undefined FUN_14207f890(void)

void FUN_14207f890(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x78);
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x70);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>();
  if (*(int *)(param_1 + 0x40) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x30) == (longlong *)0x0) {
      plVar1 = (longlong *)(param_1 + 0x10);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14207f930 ~<lambda_34adbcd65dd33fc0269eca7d838f05c9> body=128 status=ok
// SIG undefined ~<lambda_34adbcd65dd33fc0269eca7d838f05c9>(void)

void <lambda_34adbcd65dd33fc0269eca7d838f05c9>::~<lambda_34adbcd65dd33fc0269eca7d838f05c9>
               (longlong param_1)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0x90) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x80);
    if (*(longlong **)(param_1 + 0x80) == (longlong *)0x0) {
      plVar1 = (longlong *)(param_1 + 0x60);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x30) == (longlong *)0x0) {
      plVar1 = (longlong *)(param_1 + 0x10);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14207f9b0 FUN_14207f9b0 body=143 status=ok
// SIG undefined FUN_14207f9b0(void)

void FUN_14207f9b0(longlong *param_1)

{
  longlong lVar1;
  RefCountImpl *this;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_1 != 0) {
    lVar3 = 0;
    lVar2 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + 0x10 + lVar3) != -2) {
        this = *(RefCountImpl **)(lVar1 + 0x20 + lVar3);
        if (this != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release(this);
        }
        *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0xfffffffffffffffe;
      }
      lVar3 = lVar3 + 0x18;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14207fa40 ~ImageResource body=111 status=ok
// SIG undefined ~ImageResource(void)

void Scaleform::GFx::ImageResource::~ImageResource(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_144f8c5e0;
  plVar1 = (longlong *)param_1[3];
  if ((plVar1 != (longlong *)0x0) && (plVar1 != param_1 + 4)) {
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[10];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1[0xb]);
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  FUN_1432caa70(param_1 + 4);
  *param_1 = &PTR_FUN_144f8bf30;
  return;
}



// FUNCTION 14207fab0 operator= body=247 status=ok
// SIG undefined operator=(void)

longlong * TArray<FKey,TSizedDefaultAllocator<32>_>::operator=(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *plVar9;
  
  if (param_1 != param_2) {
    iVar8 = (int)param_1[1];
    if (iVar8 != 0) {
      plVar9 = (longlong *)(*param_1 + 0x10);
      do {
        plVar4 = (longlong *)*plVar9;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        plVar9 = plVar9 + 3;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar8 = (int)param_2[1];
    lVar5 = *param_2;
    *(int *)(param_1 + 1) = iVar8;
    if ((iVar8 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1,iVar8);
      puVar7 = (undefined8 *)*param_1;
      if (iVar8 != 0) {
        puVar6 = (undefined8 *)(lVar5 + 8);
        do {
          *puVar7 = puVar6[-1];
          puVar7[1] = *puVar6;
          lVar5 = puVar6[1];
          puVar7[2] = lVar5;
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
          }
          puVar7 = puVar7 + 3;
          puVar6 = puVar6 + 3;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
  }
  return param_1;
}



// FUNCTION 14207fbb0 FUN_14207fbb0 body=400 status=ok
// SIG undefined FUN_14207fbb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14207fbb0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  uVar2 = uRam0000000146ae423c;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_44 = 0;
  local_3c = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((longlong)param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(uint *)((longlong)param_2 + 0xc) = uVar2;
  uVar2 = uRam0000000146ae4234 & uRam0000000146ae4244;
  uVar3 = uRam0000000146ae4238 & uRam0000000146ae4248;
  uVar4 = uRam0000000146ae423c & uRam0000000146ae424c;
  *(uint *)(param_2 + 4) = _DAT_146ae4230 & _DAT_146ae4240;
  *(uint *)((longlong)param_2 + 0x24) = uVar2;
  *(uint *)(param_2 + 5) = uVar3;
  *(uint *)((longlong)param_2 + 0x2c) = uVar4;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0x3f800000;
  local_48 = 0x3f800000;
  local_34 = 0x3f800000;
  cVar1 = FUN_14203abd0(param_1[1],&local_48);
  if (cVar1 == '\0') {
    UObjectBaseUtility::GetPathName(*param_1,local_88,0);
    if (local_88[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    local_c8 = local_48;
    local_c4 = (undefined4)local_44;
    local_c0 = local_44._4_4_;
    local_b8 = local_3c._4_4_;
    local_b4 = local_34;
    local_b0 = (undefined4)local_30;
    local_a8 = (undefined4)local_28;
    local_a4 = local_28._4_4_;
    local_a0 = (undefined4)local_20;
    local_98 = (undefined4)local_3c;
    local_94 = local_30._4_4_;
    local_90 = local_20._4_4_;
    local_bc = 0;
    local_ac = 0;
    local_9c = 0;
    local_8c = 0x3f800000;
    FUN_140487e30(&local_78,&local_c8);
    *param_2 = local_78;
    param_2[1] = uStack_70;
    param_2[4] = local_58;
    param_2[5] = uStack_50;
    param_2[2] = local_68;
    param_2[3] = uStack_60;
  }
  return param_2;
}



// FUNCTION 14207fd40 FUN_14207fd40 body=126 status=ok
// SIG undefined FUN_14207fd40(void)

void FUN_14207fd40(longlong param_1)

{
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_40 = 0x3f800000;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_68 = 0x3f800000;
  uStack_54 = 0x3f800000;
  FUN_1420830b0(&local_68,param_1 + 0x10);
  local_38 = CONCAT44(uStack_64,local_68);
  uStack_30 = CONCAT44(uStack_5c,uStack_60);
  local_18 = (undefined4)local_48;
  uStack_14 = local_48._4_4_;
  uStack_10 = (undefined4)uStack_40;
  uStack_c = uStack_40._4_4_;
  local_28 = uStack_58;
  uStack_24 = uStack_54;
  uStack_20 = (undefined4)uStack_50;
  uStack_1c = uStack_50._4_4_;
  FUN_1420522e0(*(undefined8 *)(param_1 + 0x40),&local_38);
  return;
}



// FUNCTION 14207fdc0 FUN_14207fdc0 body=339 status=ok
// SIG undefined FUN_14207fdc0(void)

void FUN_14207fdc0(longlong param_1,undefined8 *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  longlong *plVar4;
  short *psVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  
  if (1 < *(int *)(*(longlong *)(param_1 + 8) + 8)) {
    puVar6 = (undefined8 *)*param_2;
    puVar9 = puVar6 + (longlong)*(int *)(param_2 + 1) * 6;
    for (; puVar6 != puVar9; puVar6 = puVar6 + 6) {
      if (*(int *)(*(undefined8 **)(param_1 + 8) + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)**(undefined8 **)(param_1 + 8);
      }
      if (*(int *)(puVar6 + 1) == 0) {
        psVar5 = &DAT_143f3eda8;
      }
      else {
        psVar5 = (short *)*puVar6;
      }
      lVar8 = (longlong)puVar7 - (longlong)psVar5;
      do {
        sVar1 = *psVar5;
        sVar2 = *(short *)((longlong)psVar5 + lVar8);
        if (sVar1 != sVar2) break;
        psVar5 = psVar5 + 1;
      } while (sVar2 != 0);
      if (sVar1 == sVar2) {
        if (*(int *)(*(longlong *)(param_1 + 0x10) + 8) < 2) {
          lVar8 = *(longlong *)(param_1 + 0x18);
          FString::operator=(lVar8,puVar6);
          FString::operator=(lVar8 + 0x10,puVar6 + 2);
          FString::operator=(lVar8 + 0x20,puVar6 + 4);
          **(undefined1 **)(param_1 + 0x20) = 1;
          TArray<FRawAnimSequenceTrack,TSizedDefaultAllocator<32>_>::Empty
                    (*(undefined8 *)(param_1 + 0x28),0);
          return;
        }
        plVar4 = *(longlong **)(param_1 + 0x28);
        iVar3 = (int)plVar4[1];
        *(int *)(plVar4 + 1) = iVar3 + 1;
        if (*(int *)((longlong)plVar4 + 0xc) < iVar3 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar4,iVar3);
        }
        lVar8 = (longlong)iVar3 * 0x30 + *plVar4;
        FString::FString(lVar8,puVar6);
        FString::FString(lVar8 + 0x10,puVar6 + 2);
        FString::FString(lVar8 + 0x20,puVar6 + 4);
      }
    }
  }
  return;
}



// FUNCTION 14207ff20 FUN_14207ff20 body=130 status=ok
// SIG undefined FUN_14207ff20(void)

void FUN_14207ff20(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
  if (lVar3 != 0) {
    lVar3 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(lVar3 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) & 0x30000000) == 0) {
      (**(code **)(*(longlong *)*param_1 + 0x3d0))();
                    /* WARNING: Could not recover jumptable at 0x00014207ff95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)*param_1 + 0x460))();
      return;
    }
  }
  return;
}



// FUNCTION 14207ffb0 FUN_14207ffb0 body=251 status=ok
// SIG undefined FUN_14207ffb0(void)

void FUN_14207ffb0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  lVar3 = FUN_1416f8720(*param_1);
  if (lVar3 != 0) {
    lVar4 = FUN_1416f8720(*param_1);
    lVar3 = 0;
    iVar1 = *(int *)(lVar4 + 0xc);
    lVar4 = lVar3;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      lVar5 = FUN_1416f8720(*param_1);
      iVar1 = *(int *)(lVar5 + 0xc);
      lVar4 = lVar3;
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar6 = iVar1 >> 0x1f & 0xffff;
        uVar2 = iVar1 + uVar6;
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
      }
      *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) & 0xbfffffff;
      iVar1 = *(int *)(lVar5 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar6 = iVar1 >> 0x1f & 0xffff;
        uVar2 = iVar1 + uVar6;
        lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
      }
      *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | 0x20000000;
    }
  }
  return;
}



// FUNCTION 1420800b0 FUN_1420800b0 body=196 status=ok
// SIG undefined FUN_1420800b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420800b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  longlong *plVar16;
  undefined1 auStack_68 [32];
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  uVar15 = 0;
  uVar13 = uVar15;
  if (*(int *)(param_1 + 10) != 0) {
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 4;
    }
    if (plVar16 != (longlong *)0x0) {
      uVar13 = (**(code **)(*plVar16 + 8))();
    }
  }
  puVar14 = (undefined4 *)(*(code *)param_1[2])(local_48,uVar13);
  uVar2 = puVar14[1];
  uVar3 = puVar14[2];
  uVar4 = puVar14[3];
  uVar5 = puVar14[4];
  uVar6 = puVar14[5];
  uVar7 = puVar14[6];
  uVar8 = puVar14[7];
  uVar9 = puVar14[8];
  uVar10 = puVar14[9];
  uVar11 = puVar14[10];
  uVar12 = puVar14[0xb];
  puVar1 = *(undefined8 **)*param_1;
  *(undefined4 *)(puVar1 + 0xc) = *puVar14;
  *(undefined4 *)((longlong)puVar1 + 100) = uVar2;
  *(undefined4 *)(puVar1 + 0xd) = uVar3;
  *(undefined4 *)((longlong)puVar1 + 0x6c) = uVar4;
  *(undefined4 *)(puVar1 + 0xe) = uVar5;
  *(undefined4 *)((longlong)puVar1 + 0x74) = uVar6;
  *(undefined4 *)(puVar1 + 0xf) = uVar7;
  *(undefined4 *)((longlong)puVar1 + 0x7c) = uVar8;
  *(undefined4 *)(puVar1 + 0x10) = uVar9;
  *(undefined4 *)((longlong)puVar1 + 0x84) = uVar10;
  *(undefined4 *)(puVar1 + 0x11) = uVar11;
  *(undefined4 *)((longlong)puVar1 + 0x8c) = uVar12;
  *(undefined1 *)(puVar1 + 0xb) = 1;
  (**(code **)(*(longlong *)puVar1[10] + 0x10))();
  if (*(int *)(puVar1 + 8) != 0) {
    plVar16 = (longlong *)puVar1[6];
    if ((longlong *)puVar1[6] == (longlong *)0x0) {
      plVar16 = puVar1 + 2;
    }
    if (plVar16 != (longlong *)0x0) {
      if (plVar16 != (longlong *)0x0) {
        uVar15 = (**(code **)(*plVar16 + 8))();
      }
      (*(code *)*puVar1)(uVar15);
    }
  }
  return;
}



// FUNCTION 142080180 FUN_142080180 body=140 status=ok
// SIG undefined FUN_142080180(void)

ulonglong FUN_142080180(longlong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 8);
  local_res14 = *(undefined4 *)(param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  uVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if ((char)uVar3 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar5;
      uVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
    }
    else {
      uVar3 = 0;
    }
    if ((*(uint *)(uVar3 + 8) & 0x30000000) == 0) {
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 142080210 FUN_142080210 body=226 status=ok
// SIG undefined FUN_142080210(void)

void FUN_142080210(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 10);
  local_res14 = *(undefined4 *)((longlong)param_1 + 0x54);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  lVar5 = 0;
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    lVar4 = lVar5;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar7;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      lVar4 = FWeakObjectPtr::Get(param_1 + 10);
      LOCK();
      *(undefined4 *)(lVar4 + 0xf0) = 1;
      UNLOCK();
    }
  }
  if (*(int *)(param_1 + 8) != 0) {
    plVar6 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar6 = param_1 + 2;
    }
    if (plVar6 != (longlong *)0x0) {
      if (plVar6 != (longlong *)0x0) {
        lVar5 = (**(code **)(*plVar6 + 8))();
      }
      (*(code *)*param_1)(lVar5);
    }
  }
  return;
}



// FUNCTION 142080300 FUN_142080300 body=302 status=ok
// SIG undefined FUN_142080300(void)

void FUN_142080300(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong local_res8;
  longlong *local_18;
  longlong *local_10;
  
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x68)) {
    do {
      lVar6 = *(longlong *)(param_1 + 0x60);
      FUN_14203d100(&local_18,(longlong)iVar10 * 0x10 + *(longlong *)(param_1 + 0x70));
      if ((local_18 != (longlong *)0x0) &&
         (lVar6 = FUN_141796df0(lVar6 + (longlong)iVar10 * 0x18), plVar5 = local_18, lVar6 != 0)) {
        if (*local_18 == 0) {
          lVar7 = operator_new();
          if (lVar7 == 0) {
            puVar8 = (undefined8 *)0x0;
          }
          else {
            puVar8 = (undefined8 *)
                     TStrongObjectPtr<UMaterialInterface>::FInternalReferenceCollector::
                     FInternalReferenceCollector(lVar7,lVar6);
          }
          if (plVar5 == &local_res8) {
            if (puVar8 != (undefined8 *)0x0) {
              puVar9 = (undefined8 *)*puVar8;
              goto LAB_1420803c2;
            }
          }
          else {
            puVar4 = (undefined8 *)*plVar5;
            *plVar5 = (longlong)puVar8;
            if (puVar4 != (undefined8 *)0x0) {
              puVar9 = (undefined8 *)*puVar4;
              puVar8 = puVar4;
LAB_1420803c2:
              (*(code *)*puVar9)(puVar8,1);
            }
          }
        }
        else {
          *(longlong *)(*local_18 + 0x10) = lVar6;
        }
      }
      plVar5 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(param_1 + 0x68));
  }
  FUN_142080210(param_1);
  return;
}



// FUNCTION 142080430 FUN_142080430 body=270 status=ok
// SIG undefined FUN_142080430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142080430(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [80];
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FUN_1420805b0(*param_1 + 0x20);
  lVar1 = *param_1;
  local_78[0] = &LAB_142082900;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  lVar2 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_c8,local_78);
  FGenericPlatformMemory::MemswapGreaterThan8(lVar2,lVar1 + 0x20,0x50);
  if (*(int *)(lVar2 + 0x40) != 0) {
    plVar3 = *(longlong **)(lVar2 + 0x30);
    if (*(longlong **)(lVar2 + 0x30) == (longlong *)0x0) {
      plVar3 = (longlong *)(lVar2 + 0x10);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (*(longlong *)(lVar2 + 0x30) != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    plVar3 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar3 = local_48;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142080540 FUN_142080540 body=106 status=ok
// SIG undefined FUN_142080540(void)

void FUN_142080540(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    lVar2 = 0;
    lVar1 = lVar2;
    if (*(longlong *)(param_1 + 0x30) == 0) {
      lVar1 = param_1 + 0x10;
    }
    if (lVar1 != 0 || *(longlong *)(param_1 + 0x30) != 0) {
      if (*(int *)(param_1 + 0x90) != 0) {
        plVar3 = *(longlong **)(param_1 + 0x80);
        if (*(longlong **)(param_1 + 0x80) == (longlong *)0x0) {
          plVar3 = (longlong *)(param_1 + 0x60);
        }
        if (plVar3 != (longlong *)0x0) {
          lVar2 = (**(code **)(*plVar3 + 8))();
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0001420805a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x50))(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1420805b0 FUN_1420805b0 body=128 status=ok
// SIG undefined FUN_1420805b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1420805b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    plVar3 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar3 = param_1 + 2;
    }
    if (plVar3 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar3 + 8))();
    }
  }
  puVar2 = (undefined8 *)(*(code *)*param_1)(local_48,uVar1);
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  uVar1 = puVar2[3];
  param_2[2] = puVar2[2];
  param_2[3] = uVar1;
  uVar1 = puVar2[5];
  param_2[4] = puVar2[4];
  param_2[5] = uVar1;
  return param_2;
}



// FUNCTION 142080660 `scalar_deleting_destructor' body=108 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_7a02e06ca5db01d82e81cc92e1965566>_>::
_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 10) != 0) {
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 4;
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1420806d0 FUN_1420806d0 body=108 status=ok
// SIG undefined FUN_1420806d0(void)

undefined8 * FUN_1420806d0(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 10) != 0) {
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 4;
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 142080740 FUN_142080740 body=134 status=ok
// SIG undefined FUN_142080740(void)

undefined8 * FUN_142080740(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[0xb];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1420807d0 FUN_1420807d0 body=65 status=ok
// SIG undefined FUN_1420807d0(void)

undefined8 * FUN_1420807d0(undefined8 *param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)((longlong)param_1 + 0xc));
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 142080820 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_CopyableOwnedObject<<lambda_3f2517dffc0b804e24ec4e3017be6389>,1>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_14207f890(param_1 + 2);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 142080870 FUN_142080870 body=66 status=ok
// SIG undefined FUN_142080870(void)

undefined8 * FUN_142080870(undefined8 *param_1,ulonglong param_2)

{
  <lambda_34adbcd65dd33fc0269eca7d838f05c9>::~<lambda_34adbcd65dd33fc0269eca7d838f05c9>(param_1 + 2)
  ;
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1420808c0 FUN_1420808c0 body=180 status=ok
// SIG undefined FUN_1420808c0(void)

RefCountImplCore * FUN_1420808c0(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_144f8bdc0;
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x48,0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x48);
  if (*(RefCountImpl **)(param_1 + 0x40) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x40));
  }
  if (*(RefCountImpl **)(param_1 + 0x28) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x28));
  }
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 142080980 FUN_142080980 body=135 status=ok
// SIG undefined FUN_142080980(void)

RefCountImplCore * FUN_142080980(RefCountImplCore *param_1,uint param_2)

{
  if (*(RefCountImpl **)(param_1 + 0x40) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x40));
  }
  if (*(RefCountImpl **)(param_1 + 0x28) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x28));
  }
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142080a10 FUN_142080a10 body=44 status=ok
// SIG undefined FUN_142080a10(void)

longlong FUN_142080a10(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 8) = &PTR_FUN_144025e20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142080a40 FUN_142080a40 body=99 status=ok
// SIG undefined FUN_142080a40(void)

RefCountImplCore * FUN_142080a40(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_144f8c470;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 142080ab0 FUN_142080ab0 body=120 status=ok
// SIG undefined FUN_142080ab0(void)

undefined8 * FUN_142080ab0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f8bd60;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xf);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xe);
  *param_1 = &PTR__scalar_deleting_destructor__144e13920;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 142080b30 FUN_142080b30 body=145 status=ok
// SIG undefined FUN_142080b30(void)

RefCountImplCore * FUN_142080b30(RefCountImplCore *param_1,ulonglong param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_144f8c458;
  FUN_14207f9b0(param_1 + 0x20);
  *(undefined ***)param_1 = &PTR_FUN_144f8bf50;
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  *(undefined ***)param_1 = &PTR_FUN_144f70c80;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142080bd0 FUN_142080bd0 body=126 status=ok
// SIG undefined FUN_142080bd0(void)

RefCountImplCore * FUN_142080bd0(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_144f8bf50;
  if (*(RefCountImpl **)(param_1 + 0x18) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x18));
  }
  *(undefined ***)param_1 = &PTR_FUN_144f70c80;
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142080c50 FUN_142080c50 body=107 status=ok
// SIG undefined FUN_142080c50(void)

longlong FUN_142080c50(longlong param_1,ulonglong param_2)

{
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
  }
  FUN_1432caa70(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142080cc0 FUN_142080cc0 body=89 status=ok
// SIG undefined FUN_142080cc0(void)

undefined8 FUN_142080cc0(undefined8 param_1,ulonglong param_2)

{
  Scaleform::GFx::ImageResource::~ImageResource();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 142080d20 FUN_142080d20 body=161 status=ok
// SIG undefined FUN_142080d20(void)

undefined8 * FUN_142080d20(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f8bb78;
  Scaleform::Render::ImageData::freePlanes(param_1 + 3);
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(lVar1,0xffffffff);
    if (iVar2 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
    }
  }
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 142080dd0 FUN_142080dd0 body=73 status=ok
// SIG undefined FUN_142080dd0(void)

undefined8 * FUN_142080dd0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f8bf30;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142080e20 FUN_142080e20 body=304 status=ok
// SIG undefined FUN_142080e20(void)

RefCountImplCore * FUN_142080e20(RefCountImplCore *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  *(undefined ***)param_1 = &PTR_FUN_144f8bca8;
  Scaleform::Mutex::DoLock((Mutex *)(lVar1 + 0x48));
  if (*(int *)(param_1 + 0x40) - 2U < 2) {
    if (((*(longlong *)(param_1 + 0x18) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) &&
       (*(longlong *)(param_1 + 0x18) != 0)) {
      *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) = *(longlong *)(param_1 + 0x18);
      *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    FUN_14208d550(param_1,1);
  }
  if ((*(RefCountImplCore **)(param_1 + 0x68) != (RefCountImplCore *)0x0) &&
     (*(RefCountImplCore **)(param_1 + 0x68) != param_1 + 0x70)) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  Scaleform::Mutex::Unlock((Mutex *)(lVar1 + 0x48));
  FUN_1416f8340(*(undefined4 *)(param_1 + 0x88));
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x80);
  *(undefined ***)param_1 = &PTR_FUN_144f8bb90;
  if (*(RefCountImpl **)(param_1 + 0x28) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x28));
  }
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 142080f50 FUN_142080f50 body=131 status=ok
// SIG undefined FUN_142080f50(void)

RefCountImplCore * FUN_142080f50(RefCountImplCore *param_1,uint param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_144f8bb90;
  if (*(RefCountImpl **)(param_1 + 0x28) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(param_1 + 0x28));
  }
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142080fe0 FUN_142080fe0 body=73 status=ok
// SIG undefined FUN_142080fe0(void)

undefined8 * FUN_142080fe0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f8bc68;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 142081030 FUN_142081030 body=73 status=ok
// SIG undefined FUN_142081030(void)

undefined8 * FUN_142081030(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f8bc68;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,8);
  }
  return param_1;
}



// FUNCTION 142081080 FUN_142081080 body=352 status=ok
// SIG undefined FUN_142081080(void)

longlong * FUN_142081080(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  
  lVar1 = param_1[0xf];
  *param_1 = (longlong)&PTR_FUN_144f8bdf8;
  param_1[2] = (longlong)&PTR_LAB_144f8bf08;
  param_1[3] = (longlong)&PTR_LAB_144f8bf20;
  Scaleform::Mutex::DoLock((Mutex *)(lVar1 + 0x48));
  lVar2 = param_1[0xf];
  Scaleform::Mutex::DoLock((Mutex *)(lVar2 + 0x48));
  (**(code **)(*param_1 + 0x90))(param_1);
  plVar4 = param_1 + 0x14;
  if (param_1 == (longlong *)0xffffffffffffff50) {
    plVar4 = (longlong *)0x0;
  }
  while ((longlong *)param_1[0x17] != plVar4) {
    (**(code **)(*(longlong *)param_1[0x17] + 0x48))();
  }
  Scaleform::Mutex::Unlock((Mutex *)(lVar2 + 0x48));
  *(undefined8 *)(param_1[0xf] + 0x10) = 0;
  Scaleform::Mutex::Unlock((Mutex *)(lVar1 + 0x48));
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0x37]);
  param_1[0x1c] = (longlong)&PTR_FUN_144f8bb78;
  Scaleform::Render::ImageData::freePlanes(param_1 + 0x1f);
  lVar1 = param_1[0x22];
  if (lVar1 != 0) {
    iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(lVar1,0xffffffff);
    if (iVar3 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
    }
  }
  FUN_1432c9ed0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x1d0);
    }
  }
  return param_1;
}



// FUNCTION 1420811e0 FUN_1420811e0 body=52 status=ok
// SIG undefined FUN_1420811e0(void)

undefined8 FUN_1420811e0(undefined8 param_1,ulonglong param_2)

{
  FUN_140e9c440();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 142081220 FUN_142081220 body=84 status=ok
// SIG undefined FUN_142081220(void)

void FUN_142081220(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = 0;
  if ((int)param_1[10] != 0) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 4;
    }
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 8))();
    }
  }
  (*(code *)param_1[2])(uVar1);
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014208126a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 142081280 FUN_142081280 body=107 status=ok
// SIG undefined FUN_142081280(void)

ulonglong FUN_142081280(longlong param_1,RefCountImpl *param_2)

{
  ulonglong in_RAX;
  ulonglong extraout_RAX;
  RefCountImpl *local_res10 [3];
  
  if (param_2 != (RefCountImpl *)0x0) {
    local_res10[0] = param_2;
    (**(code **)(*(longlong *)param_2 + 0x10))(param_2,1);
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x18));
    LOCK();
    *(undefined4 *)(param_1 + 0x20) = 1;
    UNLOCK();
    TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x28,local_res10);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x18));
    LOCK();
    *(undefined4 *)(param_1 + 0x20) = 0;
    UNLOCK();
    Scaleform::RefCountImpl::Release(local_res10[0]);
    in_RAX = extraout_RAX;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1420812f0 FUN_1420812f0 body=545 status=ok
// SIG undefined FUN_1420812f0(void)

void FUN_1420812f0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined2 *local_68;
  int local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  
  if (param_3 != 0) {
    FString::FString(&local_58);
    plVar9 = (longlong *)(param_1 + 0xc0);
    puVar1 = (undefined8 *)*plVar9;
    iVar7 = *(int *)(param_1 + 200);
    FString::FString(&local_68,&local_58);
    for (puVar8 = puVar1; puVar8 != puVar1 + (longlong)iVar7 * 3; puVar8 = puVar8 + 3) {
      puVar5 = &DAT_143f3eda8;
      if (local_60 != 0) {
        puVar5 = local_68;
      }
      if (*(int *)(puVar8 + 1) == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = (undefined2 *)*puVar8;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
      if (iVar3 == 0) break;
    }
    if (local_68 != (undefined2 *)0x0) {
      FMemory::Free(local_68);
    }
    uVar10 = 0xffffffff;
    if (puVar8 == puVar1 + (longlong)iVar7 * 3) {
      iVar7 = -1;
    }
    else {
      lVar6 = ((longlong)puVar8 - (longlong)puVar1) / 6 +
              ((longlong)puVar8 - (longlong)puVar1 >> 0x3f);
      iVar7 = (int)(lVar6 >> 2) - (int)(lVar6 >> 0x3f);
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
    if ((iVar7 < 0) || (*(int *)(param_1 + 200) <= iVar7)) {
      FString::FString(&local_58,param_2);
      iVar7 = *(int *)(param_1 + 200);
      *(int *)(param_1 + 200) = iVar7 + 1;
      if (*(int *)(param_1 + 0xcc) < iVar7 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar9,iVar7);
      }
      lVar11 = 1;
      plVar9 = (longlong *)(*plVar9 + (longlong)iVar7 * 0x18);
      *plVar9 = local_58;
      *(undefined4 *)(plVar9 + 1) = local_50;
      *(undefined4 *)((longlong)plVar9 + 0xc) = local_4c;
      *(undefined4 *)(plVar9 + 2) = 0xffffffff;
      lVar6 = 0;
    }
    else {
      plVar9 = (longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar7 * 0x18);
      lVar6 = local_58;
      lVar11 = 0;
      uVar10 = local_48;
    }
    if ((lVar11 != 0) && (FUN_1416f8340(uVar10), lVar6 != 0)) {
      FMemory::Free(lVar6);
    }
    lVar6 = FUN_1416f8720((int)plVar9[2]);
    if (lVar6 != 0) {
      if (param_3 == lVar6) {
        return;
      }
      cVar2 = FUN_14204f530();
      if (cVar2 != '\0') {
        FUN_14204eec0(lVar6);
      }
    }
    cVar2 = FUN_142029a00();
    if (cVar2 != '\0') {
      FUN_142029620(param_3,0);
    }
    FUN_14170c210(plVar9 + 2,param_3);
  }
  return;
}



// FUNCTION 142081520 FUN_142081520 body=145 status=ok
// SIG undefined FUN_142081520(void)

undefined8 FUN_142081520(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong local_res10;
  undefined1 local_res20 [8];
  undefined8 local_18;
  longlong *local_10;
  
  if (param_2 != 0) {
    local_res10 = param_2;
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 400));
    local_10 = &local_res10;
    local_18 = param_3;
    FUN_14056b880(param_1 + 0x198,local_res20,&local_18,0);
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x1f8,&local_res10);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 400));
    return 1;
  }
  return 0;
}



// FUNCTION 1420815d0 FUN_1420815d0 body=1074 status=ok
// SIG undefined FUN_1420815d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1420815d0(longlong param_1,RefCountImpl *param_2)

{
  char cVar1;
  DWORD DVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_398 [32];
  undefined8 local_378;
  undefined8 uStack_370;
  undefined1 local_368 [16];
  longlong local_358 [4];
  longlong *local_338;
  int local_328;
  undefined1 local_318 [16];
  longlong local_308 [4];
  longlong *local_2e8;
  int local_2d8;
  undefined1 local_2c8 [80];
  undefined1 local_278 [80];
  undefined1 local_228 [80];
  undefined1 local_1d8 [80];
  undefined1 local_188 [80];
  undefined1 local_138 [80];
  undefined1 local_e8 [80];
  code *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_398;
  if (param_2 == (RefCountImpl *)0x0) {
    return 0;
  }
  LOCK();
  bVar9 = *(int *)(param_1 + 0x38) == 0;
  if (bVar9) {
    *(int *)(param_1 + 0x38) = 0;
  }
  UNLOCK();
  if (bVar9) {
    return 0;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x18));
  LOCK();
  *(undefined4 *)(param_1 + 0x20) = 1;
  UNLOCK();
  iVar8 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar8 + 1;
  if (*(int *)(param_1 + 0x34) < iVar8 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x28,iVar8);
  }
  *(RefCountImpl **)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8 * 8) = param_2;
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x18));
  LOCK();
  *(undefined4 *)(param_1 + 0x20) = 0;
  UNLOCK();
  Scaleform::RefCountImpl::AddRef(param_2);
  local_68 = (longlong *)0x0;
  local_58 = 0;
  local_378 = param_1;
  uStack_370 = param_2;
  puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_88);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar3 + 1) = (undefined4)local_378;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_378._4_4_;
    *(undefined4 *)(puVar3 + 2) = (undefined4)uStack_370;
    *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_370._4_4_;
  }
  local_98[0] = FUN_142082960;
  cVar1 = FUN_142059490();
  lVar6 = DAT_146ae43a0;
  if (cVar1 == '\0') {
switchD_142081744_caseD_7:
    iVar8 = 0x40;
  }
  else {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar2 = GetCurrentThreadId();
      lVar4 = 4;
      if (DVar2 == DAT_1468c21c0) goto LAB_142081724;
    }
    else {
LAB_142081724:
      lVar4 = 0;
    }
    iVar8 = 1;
    switch(*(undefined4 *)(lVar4 + lVar6)) {
    case 0:
      iVar8 = 0;
      break;
    case 1:
      break;
    case 2:
      iVar8 = 2;
      break;
    case 3:
      iVar8 = 4;
      break;
    case 4:
      iVar8 = 8;
      break;
    case 5:
      iVar8 = 0x10;
      break;
    case 6:
      iVar8 = 0x20;
      break;
    case 7:
      goto switchD_142081744_caseD_7;
    default:
      iVar8 = 0x80;
    }
  }
  if (iVar8 == 1) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_318,local_98);
    cVar1 = FUN_142059490();
    if (cVar1 == '\0') {
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_138,local_318);
      FUN_14204c280(local_138);
    }
    else {
      cVar1 = FUN_14207c770();
      if (cVar1 == '\0') {
        uVar5 = FUN_140fe1de0(local_e8,local_318);
        FUN_14158fcd0(0x10ff,uVar5);
      }
      else {
        TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_188);
        FUN_14204cc40(local_188);
      }
    }
    local_338 = local_2e8;
    if (local_2d8 != 0) {
      plVar7 = local_308;
      if (local_2e8 != (longlong *)0x0) {
        plVar7 = local_2e8;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
        local_338 = local_2e8;
      }
    }
  }
  else {
    if ((iVar8 != 2) && (iVar8 != 4)) {
      if (iVar8 == 8) {
        TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_278,local_98);
        FUN_142032330(local_278);
      }
      else if (iVar8 == 0x10) {
        TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_2c8,local_98);
        FUN_14204cc40(local_2c8);
        FUN_142059ce0();
      }
      else {
        if (local_58 != 0) {
          plVar7 = local_88;
          if (local_68 != (longlong *)0x0) {
            plVar7 = local_68;
          }
          if (plVar7 != (longlong *)0x0) {
            uVar5 = (**(code **)(*plVar7 + 8))();
            (*local_98[0])(uVar5);
            goto LAB_142081998;
          }
        }
        (*local_98[0])(0);
      }
      goto LAB_142081998;
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_368,local_98);
    cVar1 = FUN_142059490();
    if (cVar1 == '\0') {
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_1d8,local_368);
      FUN_14204c280(local_1d8);
    }
    else {
      cVar1 = FUN_14207c770();
      if (cVar1 == '\0') {
        lVar6 = operator_new(0x60);
        if (lVar6 == 0) {
          FUN_142091b30(0);
        }
        else {
          uVar5 = FUN_14207ec30(lVar6,local_368);
          FUN_142091b30(uVar5);
        }
      }
      else {
        TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_228,local_368);
        FUN_14204cc40(local_228);
      }
    }
    if (local_328 != 0) {
      plVar7 = local_358;
      if (local_338 != (longlong *)0x0) {
        plVar7 = local_338;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
  }
  if (local_338 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_142081998:
  if (local_58 != 0) {
    plVar7 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar7 = local_68;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142081a30 FUN_142081a30 body=71 status=ok
// SIG undefined FUN_142081a30(void)

longlong FUN_142081a30(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FMemory::Malloc(param_2,param_3);
  if (lVar2 != 0) {
    iVar1 = FMemory::GetAllocSize(lVar2);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar1;
    if (*(uint *)(param_1 + 0xc) < *(uint *)(param_1 + 8)) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 8);
    }
  }
  return lVar2;
}



// FUNCTION 142081a80 FUN_142081a80 body=175 status=ok
// SIG undefined FUN_142081a80(void)

void FUN_142081a80(longlong *param_1,byte param_2,byte param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if (((uint)param_3 != (uVar1 >> 0x10 & 1)) && ((param_3 == 0 || ((uVar1 >> 0x11 & 1) == 0)))) {
    (**(code **)(*param_1 + 0x450))(param_1,param_3 ^ 1);
    uVar1 = (uint)param_3 << 0x10 | *(uint *)(param_1 + 8) & 0xfffeffff;
    uVar2 = (ulonglong)uVar1;
    *(uint *)(param_1 + 8) = uVar1;
  }
  if (((uint)param_2 != ((uint)(uVar2 >> 0xf) & 1)) &&
     ((param_2 == 0 || (((uint)uVar2 >> 0x12 & 1) == 0)))) {
    (**(code **)(*param_1 + 0x448))(param_1,param_2 ^ 1);
    *(uint *)(param_1 + 8) = (uint)param_2 << 0xf | *(uint *)(param_1 + 8) & 0xffff7fff;
  }
  return;
}



// FUNCTION 142081b30 FUN_142081b30 body=2266 status=ok
// SIG undefined FUN_142081b30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142081b30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  ulonglong uVar5;
  char cVar6;
  DWORD DVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined1 auStack_2e8 [32];
  undefined4 local_2c8;
  undefined1 local_2c0;
  undefined1 local_2b8;
  longlong *local_2b0;
  undefined8 *local_2a8;
  undefined8 local_2a0;
  longlong *local_298;
  undefined8 local_290;
  longlong local_288;
  undefined8 local_280;
  longlong local_278;
  undefined8 local_270;
  longlong local_268;
  longlong local_260;
  undefined8 local_258;
  longlong local_250;
  undefined8 local_248;
  undefined8 local_240;
  longlong *local_238;
  int local_230;
  undefined8 local_228;
  undefined4 local_220;
  longlong local_218;
  longlong *local_210;
  undefined1 local_208 [8];
  longlong *local_200;
  longlong local_1f8 [2];
  longlong local_1e8 [2];
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  code *local_1c8 [6];
  undefined8 local_198;
  undefined4 local_188;
  undefined1 local_178 [16];
  longlong local_168 [4];
  longlong *local_148;
  int local_138;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 *local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  undefined1 local_f8 [16];
  longlong local_e8 [4];
  longlong *local_c8;
  int local_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  local_2a8 = (undefined8 *)0x0;
  local_2a0 = 0;
  local_298 = (longlong *)0x0;
  local_290 = 0;
  local_288 = 0;
  local_280 = 0;
  local_278 = param_1;
  local_268 = param_2;
  FUN_1420851b0(param_1,&local_238);
  if (local_238 != local_238 + (longlong)local_230 * 2) {
    local_270 = 0;
    plVar15 = local_238;
    do {
      if (*(longlong *)(*plVar15 + 0x38) == 0) {
        FSoftObjectPath::ToString((longlong *)(*plVar15 + 0x38),local_1e8);
        local_240 = *(undefined8 *)(param_1 + 0x18);
        FName::ToString(&local_240,local_1f8);
        if (local_1f8[0] != 0) {
          FMemory::Free();
        }
        if (local_1e8[0] != 0) {
          FMemory::Free();
        }
      }
      else {
        FUN_142058970(plVar15);
        lVar12 = DAT_146ae4370;
        cVar6 = FUN_1415ad720(&DAT_1468e2448);
        if (((cVar6 != '\0') || (DAT_1468c21ae == '\0')) ||
           (DVar7 = GetCurrentThreadId(), lVar13 = 4, DVar7 == DAT_1468c21c0)) {
          lVar13 = 0;
        }
        uVar5 = local_2a0;
        lVar4 = *plVar15;
        if (*(int *)(lVar12 + lVar13) == 0) {
          lVar12 = (longlong)(int)local_2a0;
          iVar10 = (int)local_2a0 + 1;
          local_2a0 = CONCAT44(local_2a0._4_4_,iVar10);
          if (local_2a0._4_4_ < iVar10) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_2a8,uVar5 & 0xffffffff);
          }
          local_2a8[lVar12 * 3] = *(undefined8 *)(lVar4 + 0x38);
          FString::FString(local_2a8 + lVar12 * 3 + 1,lVar4 + 0x40);
          uVar5 = local_290;
          lVar13 = (longlong)(int)local_290;
          lVar12 = *plVar15;
          iVar10 = (int)local_290 + 1;
          local_290 = CONCAT44(local_290._4_4_,iVar10);
          if (local_290._4_4_ < iVar10) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_298,uVar5 & 0xffffffff);
          }
          FString::FString(local_298 + lVar13 * 2,lVar12 + 0x18);
          param_1 = local_278;
        }
        else {
          local_198 = 0;
          local_1c8[0] = AK::MemoryMgr::StartProfileThreadUsage;
          local_188 = 0;
          puVar8 = (undefined8 *)FUN_142046b30(lVar4,local_208,local_1c8);
          uVar5 = local_280;
          lVar12 = (longlong)(int)local_280;
          iVar10 = (int)local_280 + 1;
          local_280 = CONCAT44(local_280._4_4_,iVar10);
          if (local_280._4_4_ < iVar10) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_288,uVar5 & 0xffffffff);
          }
          plVar14 = local_200;
          puVar11 = (undefined8 *)(lVar12 * 0x10 + local_288);
          *puVar11 = *puVar8;
          puVar11[1] = puVar8[1];
          puVar8[1] = 0;
          *puVar8 = 0;
          param_1 = local_278;
          if (local_200 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_200 + 1;
            lVar12 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar12 == 1) {
              (**(code **)*local_200)(local_200);
              LOCK();
              piVar2 = (int *)((longlong)plVar14 + 0xc);
              iVar10 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              param_1 = local_278;
              if (iVar10 == 1) {
                (**(code **)(*plVar14 + 8))(plVar14,1);
                param_1 = local_278;
              }
            }
          }
        }
      }
      plVar15 = plVar15 + 2;
      param_2 = local_268;
    } while (plVar15 != local_238 + (longlong)local_230 * 2);
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_238);
  cVar6 = FUN_142057ba0();
  if (cVar6 == '\0') goto LAB_1420822dc;
  FWeakObjectPtr::operator=(&local_270,param_1);
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_f8,param_2);
  lVar12 = DAT_146ae4370;
  local_a8 = (undefined4)local_270;
  local_a4 = local_270._4_4_;
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar6 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar7 = GetCurrentThreadId(), lVar13 = 4, DVar7 == DAT_1468c21c0)) {
    lVar13 = 0;
  }
  if (*(int *)(lVar12 + lVar13) == 0) {
    if ((int)local_2a0 < 1) goto LAB_142081f32;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_178,local_f8);
    puVar8 = local_2a8;
    iVar10 = (int)local_2a0;
    local_128 = local_a8;
    local_124 = local_a4;
    local_118 = (undefined8 *)0x0;
    local_110 = CONCAT44(local_110._4_4_,(int)local_2a0);
    if ((int)local_2a0 == 0) {
      local_110 = local_2a0 & 0xffffffff;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_118,local_2a0 & 0xffffffff,0);
      puVar11 = local_118;
      do {
        *puVar11 = *puVar8;
        FString::FString(puVar11 + 1,puVar8 + 1);
        puVar11 = puVar11 + 3;
        puVar8 = puVar8 + 3;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    iVar10 = (int)local_290;
    local_108 = (longlong *)0x0;
    local_100 = CONCAT44(local_100._4_4_,(int)local_290);
    if ((int)local_290 == 0) {
      local_100 = local_290 & 0xffffffff;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_108,local_290 & 0xffffffff,0);
      plVar15 = local_108;
      plVar14 = local_298;
      do {
        *plVar15 = 0;
        iVar3 = (int)plVar14[1];
        _Src = (void *)*plVar14;
        *(int *)(plVar15 + 1) = iVar3;
        if (iVar3 == 0) {
          *(undefined4 *)((longlong)plVar15 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar15,iVar3,0);
          _guard_xfg_dispatch_icall_nop((void *)*plVar15,_Src,(longlong)iVar3 * 2);
        }
        plVar15 = plVar15 + 2;
        plVar14 = plVar14 + 2;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    local_250 = 0;
    local_248 = 0x1d;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_250,0);
    FGenericPlatformString::Memcpy(local_250,L"RequestAsyncLoad ArrayLambda",0x3a);
    local_68 = (longlong *)0x0;
    local_58 = 0;
    puVar8 = (undefined8 *)FUN_140438ef0(0x90,local_88);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_FUN_144f8c800;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar8 + 2,local_178);
      *(undefined4 *)(puVar8 + 0xc) = local_128;
      *(undefined4 *)((longlong)puVar8 + 100) = local_124;
      puVar8[0xe] = 0;
      puVar8[0xe] = local_118;
      local_118 = (undefined8 *)0x0;
      *(undefined4 *)(puVar8 + 0xf) = (undefined4)local_110;
      *(undefined4 *)((longlong)puVar8 + 0x7c) = local_110._4_4_;
      local_110 = 0;
      puVar8[0x10] = 0;
      puVar8[0x10] = local_108;
      local_108 = (longlong *)0x0;
      *(int *)(puVar8 + 0x11) = (int)local_100;
      *(undefined4 *)((longlong)puVar8 + 0x8c) = local_100._4_4_;
      local_100 = 0;
    }
    local_98[0] = &LAB_142082a30;
    local_2b0 = &local_250;
    local_2b8 = 0;
    local_2c0 = 0;
    local_2c8 = *(undefined4 *)(local_278 + 100);
    FStreamableManager::RequestAsyncLoad(DAT_146accf98,local_1d8,&local_2a8,local_98);
    if (local_58 != 0) {
      plVar15 = local_88;
      if (local_68 != (longlong *)0x0) {
        plVar15 = local_68;
      }
      if (plVar15 != (longlong *)0x0) {
        (**(code **)(*plVar15 + 0x10))(plVar15,0);
      }
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_250 != 0) {
      FMemory::Free();
    }
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_1d0 + 1;
      lVar12 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_1d0)(local_1d0);
        LOCK();
        piVar2 = (int *)((longlong)local_1d0 + 0xc);
        iVar10 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_1d0 + 8))(local_1d0,1);
        }
      }
    }
    plVar15 = local_108;
    for (iVar10 = (int)local_100; iVar10 != 0; iVar10 = iVar10 + -1) {
      if (*plVar15 != 0) {
        FMemory::Free();
      }
      plVar15 = plVar15 + 2;
    }
    if (local_108 != (longlong *)0x0) {
      FMemory::Free(local_108);
    }
    TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
              (&local_118);
    if (local_138 != 0) {
      plVar15 = local_168;
      if (local_148 != (longlong *)0x0) {
        plVar15 = local_148;
      }
      if (plVar15 != (longlong *)0x0) {
        (**(code **)(*plVar15 + 0x10))(plVar15,0);
      }
    }
    param_2 = local_268;
    if (local_148 != (longlong *)0x0) {
      FMemory::Free();
      param_2 = local_268;
    }
  }
  else if ((int)local_280 < 1) {
LAB_142081f32:
    FUN_142080210(local_f8);
  }
  else {
    local_260 = 0;
    local_258 = 0x15;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_260,0);
    FGenericPlatformString::Memcpy(local_260,L"CreateCombinedHandle",0x2a);
    FUN_1428358e0(DAT_146accf98,&local_218,&local_288,&local_260);
    if (local_260 != 0) {
      FMemory::Free();
    }
    if (local_218 != 0) {
      local_228 = 0;
      local_220 = 0;
      puVar8 = (undefined8 *)operator_new(0x80,&local_228);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &PTR_GetPoolName_144f8c770;
        TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar8 + 2,local_f8);
        *(undefined4 *)(puVar8 + 0xc) = local_a8;
        *(undefined4 *)((longlong)puVar8 + 100) = local_a4;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[0xf] = uVar9;
        *puVar8 = &PTR_GetPoolName_144f8c7b8;
      }
      FStreamableHandle::BindCompleteDelegate(local_218,&local_228);
    }
    if (local_210 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_210 + 1;
      lVar12 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_210)(local_210);
        LOCK();
        piVar2 = (int *)((longlong)local_210 + 0xc);
        iVar10 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_210 + 8))(local_210,1);
        }
      }
    }
  }
  if (local_b8 != 0) {
    plVar15 = local_e8;
    if (local_c8 != (longlong *)0x0) {
      plVar15 = local_c8;
    }
    if (plVar15 != (longlong *)0x0) {
      (**(code **)(*plVar15 + 0x10))(plVar15,0);
    }
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_1420822dc:
  if ((int)local_280 != 0) {
    plVar15 = (longlong *)(local_288 + 8);
    iVar10 = (int)local_280;
    do {
      plVar14 = (longlong *)*plVar15;
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar14 + 1;
        lVar12 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      plVar15 = plVar15 + 2;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if (local_288 != 0) {
    FMemory::Free();
  }
  plVar15 = local_298;
  for (iVar10 = (int)local_290; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar15 != 0) {
      FMemory::Free();
    }
    plVar15 = plVar15 + 2;
  }
  if (local_298 != (longlong *)0x0) {
    FMemory::Free();
  }
  if ((int)local_2a0 != 0) {
    plVar15 = local_2a8 + 1;
    iVar10 = (int)local_2a0;
    do {
      if (*plVar15 != 0) {
        FMemory::Free();
      }
      plVar15 = plVar15 + 3;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if (local_2a8 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    plVar15 = *(longlong **)(param_2 + 0x30);
    if (*(longlong **)(param_2 + 0x30) == (longlong *)0x0) {
      plVar15 = (longlong *)(param_2 + 0x10);
    }
    if (plVar15 != (longlong *)0x0) {
      (**(code **)(*plVar15 + 0x10))(plVar15,0);
    }
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142082410 FUN_142082410 body=50 status=ok
// SIG undefined FUN_142082410(void)

void FUN_142082410(undefined8 param_1)

{
  longlong local_18 [2];
  
  UObjectBaseUtility::GetPathName(param_1,local_18,0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 142082450 FUN_142082450 body=78 status=ok
// SIG undefined FUN_142082450(void)

void FUN_142082450(undefined8 param_1)

{
  longlong local_28 [2];
  longlong local_18 [2];
  
  FUN_142086830(param_1,local_18);
  UObjectBaseUtility::GetPathName(param_1,local_28,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 1420824a0 FUN_1420824a0 body=255 status=ok
// SIG undefined FUN_1420824a0(void)

void FUN_1420824a0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 local_18 [16];
  
  lVar4 = *(longlong *)(param_1 + 0xb0);
  lVar7 = (longlong)*(int *)(param_1 + 0xb8) * 0x50 + lVar4;
  for (; lVar4 != lVar7; lVar4 = lVar4 + 0x50) {
    uVar2 = FUN_14203a620(lVar4,local_18);
    FUN_14204efa0(uVar2);
  }
  plVar1 = (longlong *)(param_1 + 0xc0);
  lVar7 = *plVar1;
  uVar8 = (ulonglong)*(int *)(param_1 + 200);
  lVar4 = lVar7 + uVar8 * 0x18;
  if (lVar7 != lVar4) {
    do {
      lVar3 = FUN_1416f8720(*(undefined4 *)(lVar7 + 0x10));
      if (lVar3 != 0) {
        FUN_14204eec0(lVar3);
      }
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != lVar4);
    uVar8 = (ulonglong)*(uint *)(param_1 + 200);
  }
  plVar5 = (longlong *)*plVar1;
  uVar6 = (uint)uVar8;
  while (uVar6 != 0) {
    FUN_1416f8340((int)plVar5[2]);
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 3;
    uVar6 = (int)uVar8 - 1;
    uVar8 = (ulonglong)uVar6;
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xcc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (plVar1,0);
  }
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 1420825b0 FUN_1420825b0 body=845 status=ok
// SIG undefined FUN_1420825b0(void)

longlong FUN_1420825b0(longlong param_1,undefined8 param_2,longlong *param_3,int param_4)

{
  void *_Dst;
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  ulonglong local_68;
  uint local_60;
  uint local_5c;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  
  lVar3 = (longlong)param_4;
  puVar4 = (undefined8 *)(lVar3 * 0x10 + *param_3);
  local_58 = (undefined2 *)0x0;
  local_50 = *(int *)(puVar4 + 1);
  lVar10 = (longlong)local_50;
  pvVar1 = (void *)*puVar4;
  if (local_50 == 0) {
    local_4c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
    _guard_xfg_dispatch_icall_nop(local_58,pvVar1,lVar10 * 2);
  }
  uVar8 = 0;
  local_68 = 0;
  local_5c = 0;
  iVar2 = 0;
  uVar14 = uVar8;
  uVar15 = uVar8;
  uVar16 = uVar8;
  uVar13 = 0;
  if (0 < lVar3) {
    do {
      iVar12 = (int)uVar8;
      iVar9 = *(int *)(*param_3 + 8 + uVar15);
      iVar2 = iVar9 + -1;
      pvVar1 = *(void **)(*param_3 + uVar15);
      if (iVar9 == 0) {
        iVar2 = 0;
      }
      uVar13 = iVar12;
      if (iVar2 != 0) {
        local_60 = iVar12 + (uint)(iVar12 == 0) + iVar2;
        if ((int)uVar16 < (int)local_60) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar8);
          uVar16 = (ulonglong)local_5c;
          uVar14 = local_68;
        }
        uVar13 = local_60;
        _Dst = (void *)(uVar14 + ((longlong)iVar12 - (ulonglong)(iVar12 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,pvVar1,(longlong)iVar2 * 2);
        *(undefined2 *)((longlong)iVar2 * 2 + (longlong)_Dst) = 0;
      }
      local_60 = (2 - (uint)(uVar13 != 0)) + uVar13;
      if ((int)uVar16 < (int)local_60) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68);
        uVar16 = (ulonglong)local_5c;
        uVar14 = local_68;
      }
      uVar8 = (ulonglong)local_60;
      iVar2 = (int)uVar16;
      puVar5 = (undefined2 *)(uVar14 + ((longlong)(int)uVar13 - (ulonglong)(uVar13 != 0)) * 2);
      lVar3 = lVar3 + -1;
      *puVar5 = 0x2e;
      puVar5[1] = 0;
      uVar15 = uVar15 + 0x10;
      uVar13 = local_60;
    } while (lVar3 != 0);
  }
  puVar5 = local_58;
  iVar9 = 0;
  if (local_50 != 0) {
    iVar9 = local_50 + -1;
  }
  if (iVar9 != 0) {
    local_60 = (uVar13 == 0) + uVar13 + iVar9;
    if (iVar2 < (int)local_60) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar13);
      uVar14 = local_68;
    }
    pvVar1 = (void *)(uVar14 + ((longlong)(int)uVar13 - (ulonglong)(uVar13 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,puVar5,(longlong)iVar9 * 2);
    *(undefined2 *)((longlong)iVar9 * 2 + (longlong)pvVar1) = 0;
  }
  plVar17 = (longlong *)0x0;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 400));
  plVar7 = plVar17;
  if (*(int *)(param_1 + 0x1a0) != *(int *)(param_1 + 0x1cc)) {
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    iVar2 = FUN_140438070(puVar5);
    lVar3 = *(longlong *)(param_1 + 0x1d8);
    if (*(longlong *)(param_1 + 0x1d8) == 0) {
      lVar3 = param_1 + 0x1d0;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0x1e0) - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x198);
      do {
        lVar10 = (longlong)iVar2 * 0x20;
        puVar5 = &DAT_143f3eda8;
        if (local_50 != 0) {
          puVar5 = local_58;
        }
        if (*(int *)(lVar3 + 8 + lVar10) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = *(undefined2 **)(lVar3 + lVar10);
        }
        iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar5);
        if (iVar9 == 0) {
          if (iVar2 != -1) {
            plVar7 = (longlong *)(*(longlong *)(param_1 + 0x198) + lVar10);
          }
          break;
        }
        lVar3 = *(longlong *)(param_1 + 0x198);
        iVar2 = *(int *)(lVar3 + 0x18 + lVar10);
      } while (iVar2 != -1);
    }
  }
  plVar11 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar11 = plVar17;
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 400));
  if (plVar11 == (longlong *)0x0) {
    lVar3 = FUN_142085450(param_2,&local_58);
  }
  else {
    lVar3 = *plVar11;
  }
  if ((lVar3 != 0) && (param_4 + 1 < (int)param_3[1])) {
    lVar3 = FUN_1420825b0(param_1,lVar3);
  }
  if (uVar14 != 0) {
    FMemory::Free(uVar14);
  }
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return lVar3;
}



// FUNCTION 142082920 FUN_142082920 body=32 status=ok
// SIG undefined FUN_142082920(void)

undefined8 FUN_142082920(undefined8 param_1,undefined8 param_2)

{
  FUN_14207fbb0(param_2,param_1);
  return param_1;
}



// FUNCTION 142082960 FUN_142082960 body=107 status=ok
// SIG undefined FUN_142082960(void)

void FUN_142082960(longlong *param_1)

{
  longlong lVar1;
  
  (**(code **)(*(longlong *)param_1[1] + 8))();
  lVar1 = *param_1;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x18));
  LOCK();
  *(undefined4 *)(lVar1 + 0x20) = 1;
  UNLOCK();
  TArray<FName,FDefaultAllocator>::Remove(*param_1 + 0x28,param_1 + 1);
  lVar1 = *param_1;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x18));
  LOCK();
  *(undefined4 *)(lVar1 + 0x20) = 0;
  UNLOCK();
  Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[1]);
  return;
}



// FUNCTION 1420829d0 FUN_1420829d0 body=38 status=ok
// SIG undefined FUN_1420829d0(void)

void FUN_1420829d0(undefined1 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1416f8720(*(undefined4 *)(param_1 + 4));
                    /* WARNING: Could not recover jumptable at 0x0001420829ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x278))(plVar1,*param_1);
  return;
}



// FUNCTION 142082a40 FUN_142082a40 body=32 status=ok
// SIG undefined FUN_142082a40(void)

undefined8 FUN_142082a40(undefined8 param_1,undefined8 param_2)

{
  FUN_142080430(param_2,param_1);
  return param_1;
}



// FUNCTION 142082a70 FUN_142082a70 body=32 status=ok
// SIG undefined FUN_142082a70(void)

undefined8 FUN_142082a70(undefined8 param_1,undefined8 param_2)

{
  FUN_1420805b0(param_2,param_1);
  return param_1;
}



// FUNCTION 142082a90 CanCreateTextureCurrentThread body=34 status=ok
// SIG undefined CanCreateTextureCurrentThread(void)

undefined1 Scaleform::Render::RHI::TextureManager::CanCreateTextureCurrentThread(void)

{
  char cVar1;
  
  if (DAT_146ac3ac6 != '\0') {
    cVar1 = IsInRenderingThread();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142082ac0 FUN_142082ac0 body=20 status=ok
// SIG undefined FUN_142082ac0(void)

longlong FUN_142082ac0(longlong param_1)

{
  uint uVar1;
  uint3 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  uVar2 = (uint3)(uVar1 >> 8);
  if (((uVar1 & 4) != 0) && ((uVar1 & 0x700) != 0)) {
    return CONCAT71((uint7)uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 142082ae0 FUN_142082ae0 body=67 status=ok
// SIG undefined FUN_142082ae0(void)

void FUN_142082ae0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_142093050(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_142093050(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 142082b30 FUN_142082b30 body=482 status=ok
// SIG undefined FUN_142082b30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142082b30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined1 auStack_118 [32];
  undefined4 local_f8 [2];
  longlong local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong *local_d8;
  undefined1 local_c8 [80];
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  LOCK();
  bVar8 = *(int *)(param_1 + 0xa4) == 0;
  if (bVar8) {
    *(int *)(param_1 + 0xa4) = 0;
  }
  UNLOCK();
  if (!bVar8) {
    local_f8[0] = 0xffffffff;
    uVar7 = 0xffffffff;
    if (param_1 != 0) {
      FUN_14170c210(local_f8,param_1);
      uVar7 = local_f8[0];
    }
    local_f8[0] = 0xffffffff;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_68);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_144266c70;
      puVar5[1] = param_1;
      *(undefined4 *)(puVar5 + 2) = uVar7;
      uVar7 = 0xffffffff;
    }
    local_78[0] = &LAB_142082950;
    FUN_140ad4c90(param_1,&local_f0);
    if (local_f0 == 0) {
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_c8,local_78);
      FUN_14204c280(local_c8);
    }
    else {
      FUN_14204c130();
    }
    plVar6 = local_e8;
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e8 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_e8 + 8))(local_e8,1);
        }
      }
    }
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
    FUN_1416f8340(uVar7);
    FUN_1416f8340(local_f8[0]);
    LOCK();
    *(undefined4 *)(param_1 + 0xa4) = 0;
    UNLOCK();
  }
  FUN_140ad4c90(param_1,&local_e0);
  if (local_e0 != 0) {
    FUN_142052cd0();
  }
  plVar6 = local_d8;
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_d8 + 8))(local_d8,1);
      }
    }
  }
  return;
}



// FUNCTION 142082d20 FUN_142082d20 body=16 status=ok
// SIG undefined FUN_142082d20(void)

void FUN_142082d20(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142082d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x280))();
    return;
  }
  return;
}



// FUNCTION 142082d30 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<wchar_t,DefaultKeyFuncs<wchar_t,0>,FDefaultSetAllocator>::ConditionalRehash
          (longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142082de0 FUN_142082de0 body=246 status=ok
// SIG undefined FUN_142082de0(void)

void FUN_142082de0(longlong param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  switch(*param_2) {
  case 1:
    FUN_142052b90(param_1);
    return;
  case 2:
    FUN_142050490(param_1,param_2[1]);
    return;
  case 3:
    FUN_142052280(param_1,*(undefined4 *)(param_2 + 4));
    return;
  case 4:
    FUN_142052be0(param_1,(double)*(float *)(param_2 + 8));
    return;
  case 5:
    FUN_1420908d0(param_1,*(undefined8 *)(param_2 + 0x20));
    return;
  case 6:
    break;
  case 7:
  case 8:
    uVar1 = FUN_142086ad0(*(undefined8 *)(param_2 + 0x30));
    FUN_1410b5e10(param_1,uVar1);
    return;
  default:
    if ((*(uint *)(param_1 + 0x18) >> 6 & 1) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
                (*(longlong **)(param_1 + 0x10),param_1,*(undefined8 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  if (*(int *)(param_2 + 0x18) == 0) {
    FUN_142090aa0(param_1,&DAT_143f3eda8);
    return;
  }
  FUN_142090aa0(param_1,*(undefined8 *)(param_2 + 0x10));
  return;
}



// FUNCTION 142082f00 FUN_142082f00 body=166 status=ok
// SIG undefined FUN_142082f00(void)

void FUN_142082f00(undefined8 param_1,undefined1 *param_2,longlong param_3)

{
  double dVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  switch(*(uint *)(param_3 + 0x18) & 0x8f) {
  case 1:
    *param_2 = 1;
    return;
  case 2:
    uVar2 = *(undefined1 *)(param_3 + 0x20);
    *param_2 = 2;
    param_2[1] = uVar2;
    return;
  case 3:
    uVar3 = *(undefined4 *)(param_3 + 0x20);
    *param_2 = 3;
    *(undefined4 *)(param_2 + 4) = uVar3;
    return;
  default:
    *param_2 = 0;
    return;
  case 5:
    dVar1 = *(double *)(param_3 + 0x20);
    *param_2 = 4;
    *(float *)(param_2 + 8) = (float)dVar1;
    return;
  case 6:
    break;
  case 7:
    FUN_142090930(param_2,*(undefined8 *)(param_3 + 0x20));
    return;
  case 8:
    FUN_14208fa20(param_2,param_1);
    return;
  case 10:
    FUN_14208e100(param_2,param_1);
    return;
  }
  puVar4 = *(undefined8 **)(param_3 + 0x20);
  if ((*(uint *)(param_3 + 0x18) >> 6 & 1) != 0) {
    puVar4 = (undefined8 *)*puVar4;
  }
  FUN_1420906a0(param_2,puVar4);
  return;
}



// FUNCTION 142082fd0 FUN_142082fd0 body=215 status=ok
// SIG undefined FUN_142082fd0(void)

void FUN_142082fd0(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_48 = *param_2;
  local_44 = param_2[1];
  local_40 = param_2[2];
  local_34 = param_2[5];
  local_38 = param_2[4];
  local_28 = param_2[8];
  local_30 = param_2[6];
  local_20 = param_2[10];
  local_24 = param_2[9];
  local_14 = param_2[7];
  local_18 = param_2[3];
  local_10 = param_2[0xb];
  local_c = 0x3f800000;
  local_3c = 0;
  local_2c = 0;
  local_1c = 0;
  FUN_140487e30(&local_78,&local_48);
  *param_1 = local_78;
  param_1[1] = uStack_70;
  param_1[4] = local_58;
  param_1[5] = uStack_50;
  param_1[2] = local_68;
  param_1[3] = uStack_60;
  return;
}



// FUNCTION 1420830b0 FUN_1420830b0 body=281 status=ok
// SIG undefined FUN_1420830b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1420830b0(uint *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar12 = fVar2 + fVar2;
  fVar14 = fVar3 + fVar3;
  fVar15 = fVar1 * (fVar1 + fVar1);
  fVar13 = (fVar1 + fVar1) * fVar4;
  fVar5 = param_2[8];
  fVar6 = param_2[9];
  fVar7 = param_2[10];
  uVar9 = (uint)((_DAT_146ae4230 - (fVar3 * fVar14 + fVar2 * fVar12)) * fVar5) & _DAT_146ae4240;
  uVar10 = (uint)((fRam0000000146ae4234 - (fVar3 * fVar14 + fVar15)) * fVar6) & uRam0000000146ae4244
  ;
  uVar11 = (uint)((fRam0000000146ae4238 - (fVar2 * fVar12 + fVar15)) * fVar7) & uRam0000000146ae4248
  ;
  fVar3 = param_2[4];
  fVar15 = param_2[5];
  fVar8 = param_2[6];
  param_1[1] = (uint)((fVar14 * fVar4 + fVar12 * fVar1) * fVar5);
  param_1[5] = uVar10;
  param_1[8] = (uint)((fVar12 * fVar4 + fVar14 * fVar1) * fVar7);
  param_1[7] = (uint)fVar15;
  *param_1 = uVar9;
  param_1[3] = (uint)fVar3;
  param_1[4] = (uint)(fVar6 * (fVar12 * fVar1 - fVar14 * fVar4));
  param_1[10] = uVar11;
  param_1[2] = (uint)(fVar5 * (fVar14 * fVar1 - fVar12 * fVar4));
  param_1[6] = (uint)((fVar13 + fVar14 * fVar2) * fVar6);
  param_1[9] = (uint)(fVar7 * (fVar14 * fVar2 - fVar13));
  param_1[0xb] = (uint)fVar8;
  return;
}



// FUNCTION 1420831d0 FUN_1420831d0 body=112 status=ok
// SIG undefined FUN_1420831d0(void)

undefined8 * FUN_1420831d0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_140438ef0(0x60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_144f8c858;
    puVar3[2] = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puVar3[4] = *(undefined8 *)(param_1 + 0x20);
    puVar3[5] = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
    puVar3[7] = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    puVar3[8] = *(undefined8 *)(param_1 + 0x40);
    puVar3[9] = uVar2;
    puVar3[10] = *(undefined8 *)(param_1 + 0x50);
    lVar1 = *(longlong *)(param_1 + 0x58);
    puVar3[0xb] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142083240 FUN_142083240 body=110 status=ok
// SIG undefined FUN_142083240(void)

undefined8 * FUN_142083240(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144f8c830;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0xc));
    FUN_14170c210((longlong)puVar1 + 0xc,uVar2);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420832b0 CopyToEmptyStorage body=104 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_86b5239219762420415e95617a23a7af>_>::
CopyToEmptyStorage(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x70);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_CopyToEmptyStorage_144f8c898;
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar2 + 4,param_1 + 0x20);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142083320 FUN_142083320 body=385 status=ok
// SIG undefined FUN_142083320(void)

undefined8 * FUN_142083320(longlong param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x90);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144f8c800;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar2 + 2,param_1 + 0x10);
    *(undefined4 *)(puVar2 + 0xc) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)((longlong)puVar2 + 100) = *(undefined4 *)(param_1 + 100);
    puVar2[0xe] = 0;
    iVar5 = *(int *)(param_1 + 0x78);
    puVar4 = *(undefined8 **)(param_1 + 0x70);
    *(int *)(puVar2 + 0xf) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)((longlong)puVar2 + 0x7c) = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar2 + 0xe,iVar5,0);
      puVar3 = (undefined8 *)puVar2[0xe];
      do {
        *puVar3 = *puVar4;
        FString::FString(puVar3 + 1,puVar4 + 1);
        puVar3 = puVar3 + 3;
        puVar4 = puVar4 + 3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    puVar2[0x10] = 0;
    iVar5 = *(int *)(param_1 + 0x88);
    puVar4 = *(undefined8 **)(param_1 + 0x80);
    *(int *)(puVar2 + 0x11) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)((longlong)puVar2 + 0x8c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar2 + 0x10,iVar5,0);
      puVar3 = (undefined8 *)puVar2[0x10];
      do {
        *puVar3 = 0;
        iVar1 = *(int *)(puVar4 + 1);
        _Src = (void *)*puVar4;
        *(int *)(puVar3 + 1) = iVar1;
        if (iVar1 == 0) {
          *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar1 * 2);
        }
        puVar3 = puVar3 + 2;
        puVar4 = puVar4 + 2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420834b0 FUN_1420834b0 body=102 status=ok
// SIG undefined FUN_1420834b0(void)

undefined8 * FUN_1420834b0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0xb0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144f8c818;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_1 + 0x10);
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 0xc,param_1 + 0x60);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142083520 CopyToEmptyStorage body=79 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_7a02e06ca5db01d82e81cc92e1965566>_>::
CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_144f8c870;
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142083570 FUN_142083570 body=115 status=ok
// SIG undefined FUN_142083570(void)

void FUN_142083570(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144f8c770;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_1 + 0x10);
    *(undefined4 *)(puVar1 + 0xc) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)((longlong)puVar1 + 100) = *(undefined4 *)(param_1 + 100);
    puVar1[0xf] = *(undefined8 *)(param_1 + 0x78);
    *puVar1 = &PTR_GetPoolName_144f8c7b8;
  }
  return;
}



// FUNCTION 1420835f0 FUN_1420835f0 body=272 status=ok
// SIG undefined FUN_1420835f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1420835f0(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 *local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined1 local_34;
  wchar_t *local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_58 = 0;
  uStack_50 = 0;
  uVar2 = 0;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  local_48 = _DAT_1464c9d18;
  uStack_44 = uRam00000001464c9d1c;
  uStack_40 = uRam00000001464c9d20;
  uStack_3c = uRam00000001464c9d24;
  local_38 = DAT_1464c9d28;
  local_30 = L"TextureManager::CreateDepthStencilSurface";
  local_70 = &local_58;
  local_98 = param_2[1];
  local_78 = 4;
  local_80 = 1;
  local_88 = 1;
  local_90 = 0xb;
  (**(code **)(*DAT_146ab6358 + 0x5e0))(DAT_146ab6358,local_68,&DAT_146ab6e78,*param_2);
  lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x50,0);
  if (lVar1 != 0) {
    uVar2 = FUN_14207f0e0(lVar1,*(undefined8 *)(param_1 + 0x78),param_2,local_68);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  return uVar2;
}



// FUNCTION 142083700 FUN_142083700 body=109 status=ok
// SIG undefined FUN_142083700(void)

undefined8 FUN_142083700(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res10;
  undefined4 local_res14;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    local_res10 = *(undefined4 *)(lVar1 + 0x60);
    local_res14 = *(undefined4 *)(lVar1 + 100);
    lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x50);
    if (lVar1 != 0) {
      uVar2 = FUN_14207f0e0(lVar1,*(undefined8 *)(param_1 + 0x78),&local_res10,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 142083770 FUN_142083770 body=2254 status=ok
// SIG undefined FUN_142083770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_142083770(undefined8 param_1,char *param_2,uint param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  int *piVar7;
  longlong lVar8;
  undefined1 auVar9 [12];
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  RefCountImpl *this;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  longlong *plVar21;
  uint uVar22;
  int iVar23;
  uint *puVar24;
  ulonglong uVar25;
  longlong *plVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  undefined1 auStack_238 [32];
  float *local_218;
  longlong **local_210;
  undefined1 local_208;
  uint local_1f8 [2];
  undefined2 local_1f0 [4];
  undefined2 local_1e8 [4];
  undefined2 local_1e0 [4];
  undefined4 local_1d8;
  int local_1d4;
  int local_1d0;
  longlong *local_1c8;
  undefined4 local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  uint local_1a0;
  int local_19c;
  longlong *local_198;
  ulonglong local_190;
  uint local_188;
  uint uStack_184;
  uint *puStack_180;
  undefined4 local_178;
  int iStack_174;
  uint uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  longlong local_160;
  float local_158;
  float local_154;
  int local_150;
  undefined4 uStack_14c;
  int iStack_148;
  int iStack_144;
  longlong *local_138;
  undefined8 uStack_130;
  uint *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong *local_108;
  undefined2 local_100;
  longlong *local_f8;
  undefined4 local_f0;
  undefined2 *local_e8;
  undefined2 *local_e0;
  uint *local_d8;
  undefined2 *local_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  uint uStack_a8;
  undefined4 uStack_a4;
  longlong *local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  lVar12 = FUN_142039c70();
  if (lVar12 == 0) {
    return 0;
  }
  plVar17 = (longlong *)0x0;
  local_198 = (longlong *)0x0;
  iVar23 = 0;
  local_190 = 0;
  plVar26 = plVar17;
  if ((param_2 != (char *)0x0) && (plVar26 = (longlong *)0x0, *param_2 != '\0')) {
    lVar20 = -1;
    do {
      lVar20 = lVar20 + 1;
    } while (param_2[lVar20] != '\0');
    uVar19 = (int)lVar20 + 1;
    local_190 = (ulonglong)uVar19;
    uVar22 = uVar19;
    if (0 < (int)uVar19) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
      uVar22 = (uint)local_190;
    }
    plVar21 = local_198;
    local_218 = (float *)CONCAT62(local_218._2_6_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_198,uVar19,param_2,uVar19);
    plVar26 = plVar21;
    if (uVar22 != 0) goto LAB_142083841;
  }
  plVar21 = (longlong *)&DAT_143f3eda8;
LAB_142083841:
  uVar13 = UFont::GetPrivateStaticClass();
  local_208 = 1;
  local_210 = (longlong **)0x0;
  local_218 = (float *)((ulonglong)local_218 & 0xffffffff00000000);
  lVar20 = FUN_141799c90(uVar13,0,plVar21,0);
  if (plVar26 != (longlong *)0x0) {
    FMemory::Free(plVar26);
  }
  if (lVar20 != 0) {
    fVar1 = *(float *)(lVar20 + 0x5c);
    lVar14 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x70);
    if ((lVar14 != 0) &&
       (lVar14 = FUN_143302230(lVar14,param_2,param_3 & 0x303 | 0x1010,
                               *(undefined4 *)(lVar20 + 0x120)), lVar14 != 0)) {
      uVar10 = *(undefined4 *)(lVar20 + 0x68);
      uVar22 = *(uint *)(lVar20 + 100);
      auVar27 = ZEXT416(uVar22);
      *(undefined4 *)(lVar14 + 0x10) = *(undefined4 *)(lVar20 + 0x60);
      *(uint *)(lVar14 + 0x14) = uVar22;
      *(undefined4 *)(lVar14 + 0x18) = uVar10;
      local_1b0 = (longlong *)0x0;
      local_1a8 = (longlong *)0x0;
      local_1f8[0] = 0;
      local_1a0 = 0;
      local_1d4 = 0;
      local_19c = 0;
      plVar26 = plVar17;
      local_160 = lVar14;
      if ((*(longlong **)(lVar12 + 0x40) != (longlong *)0x0) &&
         ((local_1c8 = (longlong *)(**(code **)(**(longlong **)(lVar12 + 0x40) + 0x128))(),
          plVar26 = (longlong *)0x0, local_1c8 != (longlong *)0x0 &&
          (local_1d0 = 0, 0 < *(int *)(lVar20 + 0x50))))) {
        local_1b8 = 0;
        plVar26 = plVar17;
        do {
          local_168 = 0;
          this = (RefCountImpl *)
                 (**(code **)(*local_1c8 + 0x100))
                           (local_1c8,*(undefined8 *)(*(longlong *)(lVar20 + 0x48) + local_1b8 * 8),
                            &local_168,0);
          if (this != (RefCountImpl *)0x0) {
            plVar15 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x38);
            plVar21 = plVar17;
            if (plVar15 != (longlong *)0x0) {
              puVar5 = *(undefined4 **)
                        (*(longlong *)(*(longlong *)(lVar20 + 0x48) + local_1b8 * 8) + 0xd8);
              if (puVar5 == (undefined4 *)0x0) {
                local_1d8 = 0;
                iVar11 = iVar23;
              }
              else {
                local_1d8 = *puVar5;
                iVar11 = puVar5[1];
              }
              uVar10 = (**(code **)(*(longlong *)this + 0x20))(this);
              plVar15[1] = 0;
              *plVar15 = (longlong)&PTR_FUN_144f70a50;
              *plVar15 = (longlong)&PTR_FUN_144f70a80;
              *(undefined4 *)(plVar15 + 1) = 1;
              plVar15[2] = (longlong)this;
              plVar15[3] = 0;
              plVar15[4] = 0;
              Scaleform::RefCountImpl::AddRef(this);
              *(undefined4 *)(plVar15 + 5) = uVar10;
              *plVar15 = (longlong)&PTR_FUN_144f70b50;
              *(undefined4 *)((longlong)plVar15 + 0x2c) = local_1d8;
              *(int *)(plVar15 + 6) = iVar11;
              *(undefined4 *)((longlong)plVar15 + 0x34) = 0x100;
              plVar21 = plVar15;
            }
            plVar16 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x68);
            plVar15 = plVar17;
            if (plVar16 != (longlong *)0x0) {
              plVar16[2] = 0;
              plVar15 = plVar16 + 4;
              plVar16[3] = 0;
              *plVar16 = (longlong)&PTR_FUN_144f8bf30;
              *(undefined4 *)(plVar16 + 1) = 1;
              *plVar16 = (longlong)&PTR_FUN_144f8c5e0;
              plVar16[5] = 0;
              *plVar15 = (longlong)&PTR_FUN_144f70a50;
              *plVar15 = (longlong)&PTR_FUN_144f70a80;
              *(undefined4 *)(plVar16 + 5) = 1;
              plVar16[6] = 0;
              plVar16[7] = 0;
              plVar16[8] = 0;
              plVar16[9] = 0;
              *plVar15 = (longlong)&PTR_FUN_144f8c510;
              FUN_1432de310(plVar16 + 10);
              plVar6 = (longlong *)plVar16[3];
              if ((plVar6 != (longlong *)0x0) && (plVar6 != plVar15)) {
                (**(code **)(*plVar6 + 0x10))();
              }
              if (plVar21 != (longlong *)0x0) {
                (**(code **)(*plVar21 + 8))(plVar21);
              }
              if ((longlong *)plVar16[9] != (longlong *)0x0) {
                (**(code **)(*(longlong *)plVar16[9] + 0x10))();
              }
              plVar16[9] = (longlong)plVar21;
              plVar16[3] = (longlong)plVar15;
              *(undefined4 *)(plVar16 + 0xc) = 1;
              plVar15 = plVar16;
            }
            iVar11 = (int)plVar26;
            local_1a0 = iVar11 + 1;
            if (local_1d4 < (int)local_1a0) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1a8,plVar26);
              local_1d4 = local_19c;
              local_1b0 = local_1a8;
            }
            plVar26 = (longlong *)(ulonglong)local_1a0;
            if (plVar15 != (longlong *)0x0) {
              Scaleform::GFx::Resource::AddRef(plVar15);
            }
            local_1b0[iVar11] = (longlong)plVar15;
            if (plVar15 != (longlong *)0x0) {
              FUN_1432de450(plVar15);
            }
            lVar14 = local_160;
            if (local_1b8 == 0) {
              local_150 = (int)((1.0 / fVar1) * 1536.0);
              uStack_14c = 3;
              piVar7 = *(int **)(**(longlong **)(lVar20 + 0x48) + 0xd8);
              iStack_144 = iVar23;
              iStack_148 = iVar23;
              if (piVar7 != (int *)0x0) {
                iStack_144 = piVar7[1];
                iStack_148 = *piVar7;
              }
              iVar11 = *(int *)(lVar20 + 0xf4);
              iVar18 = *(int *)(lVar20 + 0xf0);
              *(uint *)(local_160 + 0x1c) =
                   *(uint *)(local_160 + 0x1c) | (*(uint *)(lVar20 + 0x110) & 1) << 0x10;
              lVar12 = *(longlong *)(local_160 + 0x40);
              if (iVar18 <= iVar11) {
                iVar11 = iVar18;
              }
              *(int *)(local_160 + 0x68) = iVar11;
              *(ulonglong *)(lVar12 + 0x10) = CONCAT44(3,local_150);
              *(ulonglong *)(lVar12 + 0x18) = CONCAT44(iStack_144,iStack_148);
            }
            Scaleform::RefCountImpl::Release(this);
            if (plVar21 != (longlong *)0x0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
          local_1d0 = local_1d0 + 1;
          local_1b8 = local_1b8 + 1;
        } while (local_1d0 < *(int *)(lVar20 + 0x50));
        local_1f8[0] = (uint)plVar26;
      }
      plVar21 = local_1b0;
      uVar13 = auVar27._8_8_;
      iVar11 = *(int *)(lVar20 + 0x40);
      plVar15 = plVar17;
      plVar16 = plVar17;
      if (0 < iVar11) {
        do {
          lVar12 = *(longlong *)(lVar20 + 0x38);
          uVar25 = (ulonglong)*(byte *)((longlong)plVar15 + lVar12 + 0x10);
          lVar8 = *(longlong *)(*(longlong *)(lVar20 + 0x48) + uVar25 * 8);
          if (lVar8 != 0) {
            piVar7 = *(int **)(lVar8 + 0xd8);
            iVar11 = iVar23;
            iVar18 = iVar23;
            if (piVar7 != (int *)0x0) {
              iVar11 = *piVar7;
              iVar18 = piVar7[1];
            }
            iVar2 = *(int *)((longlong)plVar15 + lVar12 + 0xc);
            iVar3 = *(int *)((longlong)plVar15 + lVar12 + 8);
            iVar4 = *(int *)((longlong)plVar15 + lVar12 + 4);
            local_8c = 1.0 / (float)iVar18;
            local_158 = (float)*(int *)((longlong)plVar15 + lVar12) * (1.0 / (float)iVar11);
            fVar29 = (float)iVar4;
            local_94 = local_8c * fVar29;
            local_90 = (float)(*(int *)((longlong)plVar15 + lVar12) + iVar3) * (1.0 / (float)iVar11)
            ;
            fVar28 = (float)*(int *)((longlong)plVar15 + lVar12 + 0x14);
            local_8c = (float)(iVar2 + iVar4) * local_8c;
            local_154 = (fVar29 - (fVar28 - (1.0 / fVar1) * *(float *)(lVar20 + 0x60))) /
                        (float)iVar18;
            local_1c8 = (longlong *)
                        ((ulonglong)(ushort)(int)(*(float *)(lVar20 + 0x60) - fVar28 * fVar1) <<
                        0x30);
            fVar28 = (float)iVar2 * fVar1;
            auVar27 = ZEXT416((uint)fVar28);
            local_1c8 = (longlong *)
                        CONCAT44((int)((ulonglong)local_1c8 >> 0x20),
                                 (float)(*(int *)(lVar20 + 0x6c) + iVar3) * fVar1);
            local_1c0 = CONCAT22((short)(int)fVar28,(short)(int)((float)iVar3 * fVar1));
            local_210 = &local_f8;
            local_218 = &local_158;
            local_f8 = local_1c8;
            local_f0 = local_1c0;
            local_98 = local_158;
            FUN_143302480(lVar14,plVar16,plVar21[uVar25],&local_98);
          }
          uVar13 = auVar27._8_8_;
          iVar11 = *(int *)(lVar20 + 0x40);
          uVar22 = (int)plVar16 + 1;
          plVar15 = plVar15 + 3;
          plVar16 = (longlong *)(ulonglong)uVar22;
        } while ((int)uVar22 < iVar11);
        plVar26 = (longlong *)(ulonglong)local_1f8[0];
      }
      if (*(int *)(lVar20 + 0x58) == 0) {
        if (0 < iVar11) {
          local_d8 = local_1f8;
          local_d0 = local_1e0;
          do {
            local_1e0[0] = SUB82(plVar17,0);
            local_1f8[0] = CONCAT22(local_1f8[0]._2_2_,local_1e0[0]);
            FUN_14207ed40(lVar14 + 0x48,lVar14 + 0x48,&local_d8);
            uVar22 = (int)plVar17 + 1;
            plVar17 = (longlong *)(ulonglong)uVar22;
          } while ((int)uVar22 < *(int *)(lVar20 + 0x40));
        }
      }
      else {
        local_138 = (longlong *)(lVar20 + 0x180);
        local_188 = 0;
        iVar23 = *(int *)(lVar20 + 0x1a8);
        puStack_180 = (uint *)(lVar20 + 400);
        uStack_184 = 1;
        iStack_174 = 0;
        uStack_170 = 0;
        if (iVar23 != 0) {
          puVar24 = *(uint **)(lVar20 + 0x1a0);
          if (*(uint **)(lVar20 + 0x1a0) == (uint *)0x0) {
            puVar24 = puStack_180;
          }
          uVar22 = *puVar24;
          plVar21 = plVar17;
          while (uVar22 == 0) {
            iVar11 = (int)plVar21;
            uStack_170 = (int)plVar17 + 0x20;
            plVar17 = (longlong *)(ulonglong)uStack_170;
            local_188 = iVar11 + 1;
            plVar21 = (longlong *)(ulonglong)local_188;
            if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar11)
            goto LAB_142083e8b;
            uVar22 = puVar24[(longlong)iVar11 + 1];
          }
          uStack_184 = -uVar22 & uVar22;
          iVar11 = 0x1f;
          if (uStack_184 != 0) {
            for (; uStack_184 >> iVar11 == 0; iVar11 = iVar11 + -1) {
            }
          }
          if (uStack_184 == 0) {
            iVar11 = 0x20;
          }
          else {
            iVar11 = 0x1f - iVar11;
          }
          iStack_174 = (uStack_170 - iVar11) + 0x1f;
          if (iVar23 < iStack_174) {
LAB_142083e8b:
            iStack_174 = iVar23;
          }
        }
        local_178 = 0xffffffff;
        uStack_130 = CONCAT44(uStack_184,local_188);
        uStack_b0 = 0xffffffff;
        iStack_ac = iStack_174;
        uStack_a8 = uStack_170;
        uStack_a4 = uStack_16c;
        local_100 = 0;
        uStack_120 = CONCAT44(iStack_174,0xffffffff);
        auVar9._4_8_ = uVar13;
        auVar9._0_4_ = iStack_174;
        auVar27._0_8_ = auVar9._0_8_ << 0x20;
        auVar27._8_4_ = uStack_170;
        auVar27._12_4_ = uStack_16c;
        local_118 = auVar27._8_8_;
        local_128 = puStack_180;
        local_108 = local_138;
        local_c8 = local_138;
        uStack_c0 = uStack_130;
        local_a0 = local_138;
        uStack_b8 = puStack_180;
        uStack_110 = local_138;
        if (iStack_174 < *(int *)(lVar20 + 0x1a8)) {
          local_e8 = local_1e8;
          local_e0 = local_1f0;
          iVar23 = iStack_174;
          do {
            local_1f0[0] = *(undefined2 *)(*local_138 + 2 + (longlong)iVar23 * 0xc);
            local_1e8[0] = *(undefined2 *)(*local_138 + (longlong)iVar23 * 0xc);
            FUN_14207ed40(lVar14 + 0x48,lVar14 + 0x48,&local_e8);
            uStack_120 = CONCAT44(uStack_120._4_4_,(uint)uStack_120 & ~uStack_130._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_130);
            iVar23 = uStack_120._4_4_;
          } while (uStack_120._4_4_ < (int)local_128[6]);
          if (((char)local_100 != '\0') && (local_100._1_1_ != '\0')) {
            TSet<wchar_t,DefaultKeyFuncs<wchar_t,0>,FDefaultSetAllocator>::ConditionalRehash
                      (local_108,(int)local_108[1] - *(int *)((longlong)local_108 + 0x34),1);
          }
        }
      }
      plVar21 = local_1b0;
      uVar22 = (uint)plVar26;
      plVar17 = local_1b0;
      while (uVar22 != 0) {
        if (*plVar17 != 0) {
          FUN_1432de450();
        }
        plVar17 = plVar17 + 1;
        uVar22 = (int)plVar26 - 1;
        plVar26 = (longlong *)(ulonglong)uVar22;
      }
      if (plVar21 != (longlong *)0x0) {
        FMemory::Free(plVar21);
        return lVar14;
      }
      return lVar14;
    }
  }
  return 0;
}



// FUNCTION 142084060 FUN_142084060 body=329 status=ok
// SIG undefined FUN_142084060(void)

undefined8 FUN_142084060(longlong *param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 local_res10 [2];
  
  if (param_2 == 0) {
    return 0;
  }
  local_res10[0] = 0x48;
  puVar2 = (undefined8 *)
           (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x90,local_res10);
  puVar4 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_14207f2f0(puVar2,param_1[0xf],param_3,0,0,param_4,0);
    *(undefined4 *)(puVar2 + 0xc) = 0;
    puVar4 = puVar2 + 0xe;
    *puVar2 = &PTR_FUN_144f8bca8;
    *puVar4 = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    *(undefined4 *)(puVar2 + 0x11) = 0xffffffff;
    *(byte *)(puVar2 + 9) = *(byte *)(puVar2 + 9) | 4;
    FUN_1420293b0(param_2,0x48);
    *puVar4 = 0;
    puVar2[0xf] = 0;
    TRefCountPtr<FRHIIndexBuffer>::operator=(puVar2 + 0x10,0);
    FUN_14170c210(puVar2 + 0x11,0);
    FUN_14170c210(puVar2 + 0x11,param_2);
    uVar1 = param_3[1];
    *(undefined4 *)puVar4 = *param_3;
    *(undefined4 *)((longlong)puVar2 + 0x74) = uVar1;
    puVar2[0xd] = puVar4;
    puVar4 = puVar2;
  }
  uVar3 = (**(code **)(*param_1 + 0xb0))(param_1,puVar4,0);
  return uVar3;
}



// FUNCTION 1420841b0 FUN_1420841b0 body=436 status=ok
// SIG undefined FUN_1420841b0(void)

void FUN_1420841b0(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  byte bVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined4 local_res8 [2];
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0xa8))(param_1,param_2,param_5,param_6);
  if (plVar3 != (longlong *)0x0) {
    local_res8[0] = 0x48;
    puVar4 = (undefined8 *)
             (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x90,local_res8);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      FUN_14207f2f0(puVar4,param_1[0xf],param_4,param_3,(short)param_5,param_6,plVar3);
      *(undefined4 *)(puVar4 + 0xc) = 1;
      *puVar4 = &PTR_FUN_144f8bca8;
      uVar6 = 0;
      puVar4[0xe] = 0;
      puVar4[0xf] = 0;
      puVar4[0x10] = 0;
      *(undefined4 *)(puVar4 + 0x11) = 0xffffffff;
      uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
      bVar1 = FUN_1432c86a0(uVar2);
      *(byte *)((longlong)puVar4 + 0x45) = bVar1;
      if (bVar1 < 2) {
        puVar5 = puVar4 + 0xe;
      }
      else {
        puVar5 = (undefined8 *)
                 (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,puVar4,(ulonglong)bVar1 << 5,0);
      }
      puVar4[0xd] = puVar5;
      puVar4[0xe] = 0;
      puVar4[0xf] = 0;
      TRefCountPtr<FRHIIndexBuffer>::operator=(puVar4 + 0x10,0);
      FUN_14170c210(puVar4 + 0x11,0);
      uVar8 = uVar6;
      if (*(char *)((longlong)puVar4 + 0x45) != '\0') {
        do {
          puVar5 = (undefined8 *)(puVar4[0xd] + uVar8);
          *puVar5 = 0;
          puVar5[1] = 0;
          TRefCountPtr<FRHIIndexBuffer>::operator=(puVar5 + 2,0);
          FUN_14170c210(puVar5 + 3);
          uVar7 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar7;
          uVar8 = uVar8 + 0x20;
        } while ((int)uVar7 < (int)(uint)*(byte *)((longlong)puVar4 + 0x45));
      }
    }
    (**(code **)(*param_1 + 0xb0))(param_1,puVar4,param_5);
  }
  return;
}



// FUNCTION 142084370 FUN_142084370 body=150 status=ok
// SIG undefined FUN_142084370(void)

void FUN_142084370(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_68;
  longlong *local_60;
  undefined1 local_58 [80];
  
  FUN_140ad4c90(param_1,&local_68);
  if (local_68 == 0) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_58,param_2);
    FUN_142032330(local_58);
  }
  else {
    FUN_1420321f0();
  }
  plVar5 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return;
}



// FUNCTION 142084410 FUN_142084410 body=219 status=ok
// SIG undefined FUN_142084410(void)

void FUN_142084410(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_68;
  longlong *local_60;
  undefined1 local_58 [80];
  
  FUN_140ad4c90(param_1,&local_68);
  if (local_68 != 0) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_58,param_2);
    FUN_142032420(local_68,local_58);
  }
  plVar5 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_60)();
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    plVar5 = *(longlong **)(param_2 + 0x30);
    if (*(longlong **)(param_2 + 0x30) == (longlong *)0x0) {
      plVar5 = (longlong *)(param_2 + 0x10);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142084500 FUN_142084500 body=186 status=ok
// SIG undefined FUN_142084500(void)

void FUN_142084500(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 local_res8 [2];
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  *(undefined8 *)(param_1 + 0x50) = 0;
  FUN_1420914d0();
  *(undefined4 *)(param_1 + 0x150) = 0;
  cVar1 = FUN_142048790();
  if (cVar1 == '\0') {
    local_res8[0] = 0xffffffff;
    FUN_14170c210(local_res8,param_1);
    uVar3 = local_res8[0];
    local_res8[0] = 0xffffffff;
    local_28 = 0;
    local_18 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_1444f8758;
      *(undefined4 *)(puVar2 + 1) = uVar3;
      uVar3 = 0xffffffff;
    }
    local_58[0] = &LAB_142082a00;
    FUN_14204c280(local_58);
    FUN_1416f8340(uVar3);
    FUN_1416f8340(local_res8[0]);
  }
  return;
}



// FUNCTION 1420845c0 FUN_1420845c0 body=445 status=ok
// SIG undefined FUN_1420845c0(void)

void FUN_1420845c0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_30 = *(longlong **)(param_1 + 0x30);
      local_38 = 0;
      if (local_30 == (longlong *)0x0) {
LAB_14208465d:
        plVar7 = &local_38;
        bVar4 = true;
        bVar9 = false;
        lVar8 = local_38;
      }
      else {
        LOCK();
        iVar6 = (int)local_30[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_30 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_30[1];
          if (bVar9) {
            *(int *)(local_30 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_30 != (longlong *)0x0) {
              local_38 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_14208465d;
          }
          LOCK();
          iVar6 = (int)local_30[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_30 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_38;
        local_30 = (longlong *)0x0;
        bVar4 = true;
        bVar9 = false;
        lVar8 = 0;
      }
      goto LAB_142084684;
    }
  }
  plVar7 = &local_28;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_142084684:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_20;
  if ((bVar9) && (plStack_20 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_20 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  plVar7 = local_30;
  if ((bVar4) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (lVar8 != 0) {
    FUN_142032740(lVar8,param_2);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 142084780 FUN_142084780 body=101 status=ok
// SIG undefined FUN_142084780(void)

void FUN_142084780(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1415b5910();
    *(undefined8 *)(lVar1 + 0x50) = 0;
    if (*(int *)(lVar1 + 0x40) != 0) {
      plVar2 = *(longlong **)(lVar1 + 0x30);
      if (*(longlong **)(lVar1 + 0x30) == (longlong *)0x0) {
        plVar2 = (longlong *)(lVar1 + 0x10);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,0);
      }
    }
    if (*(longlong *)(lVar1 + 0x30) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar1,0x90);
    return;
  }
  return;
}



// FUNCTION 1420847f0 FUN_1420847f0 body=14 status=ok
// SIG undefined FUN_1420847f0(void)

void FUN_1420847f0(longlong param_1)

{
  FMemory::operator_delete(*(undefined8 *)(param_1 + 0x10),5);
  return;
}



// FUNCTION 142084800 Empty body=128 status=ok
// SIG undefined Empty(void)

void TArray<FRawAnimSequenceTrack,TSizedDefaultAllocator<32>_>::Empty
               (undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)*param_1;
  for (iVar2 = *(int *)(param_1 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
    if (plVar1[4] != 0) {
      FMemory::Free();
    }
    if (plVar1[2] != 0) {
      FMemory::Free();
    }
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 6;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 142084890 FUN_142084890 body=20 status=ok
// SIG undefined FUN_142084890(void)

undefined1 FUN_142084890(longlong param_1)

{
  FUN_142080210(param_1 + 0x10);
  return 1;
}



// FUNCTION 1420848b0 FUN_1420848b0 body=87 status=ok
// SIG undefined FUN_1420848b0(void)

ulonglong FUN_1420848b0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong in_RAX;
  ulonglong uVar7;
  
  plVar4 = *(longlong **)(param_3 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar6 = (int)lVar5 - 1;
    uVar7 = (ulonglong)uVar6;
    if (uVar6 == 0) {
      uVar7 = (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        uVar7 = (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    return uVar7 & 0xffffffffffffff00;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142084910 thunk_FUN_141755460 body=5 status=ok
// SIG undefined thunk_FUN_141755460(void)

void thunk_FUN_141755460(void)

{
  FUN_141755460();
  return;
}



// FUNCTION 142084920 FUN_142084920 body=51 status=ok
// SIG undefined FUN_142084920(void)

void FUN_142084920(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = FMemory::GetAllocSize(param_2);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - iVar1;
    FMemory::Free(param_2);
  }
  return;
}



// FUNCTION 142084960 FUN_142084960 body=53 status=ok
// SIG undefined FUN_142084960(void)

undefined4 FUN_142084960(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = FMemory::GetAllocSize(param_2);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - iVar1;
    FMemory::Free(param_2);
  }
  return 1;
}



// FUNCTION 1420849a0 FUN_1420849a0 body=426 status=ok
// SIG undefined FUN_1420849a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1420849a0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_144;
  undefined1 *local_138 [2];
  longlong local_128 [4];
  longlong *local_108;
  int local_f8;
  undefined1 local_e8 [16];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined1 local_98 [16];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  FWeakObjectPtr::operator=(&local_148,param_1);
  local_108 = (longlong *)0x0;
  local_f8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_128);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_148;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_144;
  }
  local_138[0] = &LAB_142082a20;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_e8,local_138);
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_98,param_3);
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0xb0,param_2 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144f8c818;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,local_e8);
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 0xc,local_98);
  }
  *param_2 = &LAB_142082a60;
  if (local_58 != 0) {
    plVar2 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar2 = local_68;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_a8 != 0) {
    plVar2 = local_d8;
    if (local_b8 != (longlong *)0x0) {
      plVar2 = local_b8;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_f8 != 0) {
    plVar2 = local_128;
    if (local_108 != (longlong *)0x0) {
      plVar2 = local_108;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142084b50 FUN_142084b50 body=924 status=ok
// SIG undefined FUN_142084b50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142084b50(LARGE_INTEGER *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  LONGLONG *pLVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_138 [32];
  LARGE_INTEGER local_118;
  longlong *local_110;
  LONGLONG *local_108;
  longlong *local_100;
  LARGE_INTEGER local_f8 [2];
  LONGLONG *local_e8;
  longlong *local_e0;
  undefined1 local_d8 [16];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  QueryPerformanceCounter(local_f8);
  *param_1 = local_f8[0];
  pLVar4 = (LONGLONG *)operator_new(0x18);
  if (pLVar4 == (LONGLONG *)0x0) {
    pLVar4 = (LONGLONG *)0x0;
  }
  else {
    puVar5 = (undefined8 *)operator_new(0x90);
    puVar9 = (undefined8 *)0x0;
    puVar10 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[6] = 0;
      *(undefined4 *)(puVar5 + 8) = 0;
      *puVar5 = AK::MemoryMgr::StartProfileThreadUsage;
      uVar6 = FUN_1415ab270(1);
      puVar5[10] = uVar6;
      *(undefined1 *)(puVar5 + 0xb) = 0;
      uVar11 = uRam0000000146ae423c;
      *(undefined4 *)(puVar5 + 0xc) = 0;
      *(undefined4 *)((longlong)puVar5 + 100) = 0;
      *(undefined4 *)(puVar5 + 0xd) = 0;
      *(uint *)((longlong)puVar5 + 0x6c) = uVar11;
      puVar5[0xe] = 0;
      puVar5[0xf] = 0;
      uVar11 = uRam0000000146ae4234 & uRam0000000146ae4244;
      uVar12 = uRam0000000146ae4238 & uRam0000000146ae4248;
      uVar13 = uRam0000000146ae423c & uRam0000000146ae424c;
      *(uint *)(puVar5 + 0x10) = _DAT_146ae4230 & _DAT_146ae4240;
      *(uint *)((longlong)puVar5 + 0x84) = uVar11;
      *(uint *)(puVar5 + 0x11) = uVar12;
      *(uint *)((longlong)puVar5 + 0x8c) = uVar13;
      puVar10 = puVar5;
    }
    puVar5 = (undefined8 *)operator_new(0x18);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar5 + 1) = 1;
      *puVar5 = &PTR_FUN_144f8c888;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
      puVar5[2] = puVar10;
      puVar9 = puVar5;
    }
    *pLVar4 = (LONGLONG)puVar10;
    pLVar4[1] = (LONGLONG)puVar9;
    SharedPointerInternals::EnableSharedFromThis(pLVar4,puVar10,puVar10);
    *(undefined1 *)(pLVar4 + 2) = 0;
  }
  plVar8 = (longlong *)0x0;
  plVar7 = (longlong *)operator_new(0x18);
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *plVar7 = (longlong)&PTR_DestroyObject_1444f8938;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    plVar7[2] = (longlong)pLVar4;
    plVar8 = plVar7;
  }
  local_108 = pLVar4;
  local_100 = plVar8;
  SharedPointerInternals::EnableSharedFromThis(&local_108,pLVar4,pLVar4);
  *(undefined1 *)(local_108 + 2) = 1;
  local_110 = (longlong *)local_108[1];
  local_118.QuadPart = *local_108;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_110 + 1) = (int)local_110[1] + 1;
    UNLOCK();
  }
  if (param_1 + 0x18 != &local_118) {
    param_1[0x18].QuadPart = (LONGLONG)local_118;
    local_118.QuadPart = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x19,&local_110);
  }
  plVar8 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_110 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[1] = param_1;
    *puVar9 = &PTR_FUN_143f77b70;
  }
  local_88[0] = FUN_142082a40;
  local_e8 = local_108;
  local_e0 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_100 + 1) = (int)local_100[1] + 1;
    UNLOCK();
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8,local_88);
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x70,param_2 + 2);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_CopyToEmptyStorage_144f8c898;
    puVar9[2] = local_e8;
    puVar9[3] = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar9 + 4,local_d8);
  }
  *param_2 = &LAB_142082a10;
  if (local_98 != 0) {
    plVar8 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar8 = local_a8;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar8 = local_e0;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_e0 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  if (local_48 != 0) {
    plVar8 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar8 = local_58;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar8 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_100 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142084ef0 FUN_142084ef0 body=696 status=ok
// SIG undefined FUN_142084ef0(void)

void FUN_142084ef0(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  ulonglong local_40;
  int local_38;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  if (param_3 != 0) {
    lVar7 = FUN_142093e60();
    lVar8 = param_3;
    while (lVar8 != lVar7) {
      lVar8 = *(longlong *)(lVar8 + 0x30);
      if (lVar8 == 0) {
        return;
      }
    }
    if ((param_1 != 0) &&
       (lVar8 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1), lVar8 != 0)) {
      local_48 = 0;
      local_40 = 0;
      local_38 = -1;
      uVar9 = FUN_142093e60();
      FUN_1417a5560(uVar9,&local_48,1,0x10,0);
      uVar12 = local_40 & 0xffffffff;
      do {
        local_38 = local_38 + 1;
        if ((int)local_40 <= local_38) break;
      } while (*(longlong *)(local_48 + (longlong)local_38 * 8) == 0);
      do {
        if ((local_38 < 0) || ((int)uVar12 <= local_38)) {
          if (local_48 == 0) {
            return;
          }
          FMemory::Free(local_48);
          return;
        }
        plVar4 = *(longlong **)(local_48 + (longlong)local_38 * 8);
        lVar7 = (**(code **)(*plVar4 + 0x148))(plVar4);
        if (lVar7 == lVar8) {
          lVar10 = FUN_142093e60();
          lVar7 = param_3;
          do {
            lVar11 = param_3;
            if (lVar7 == lVar10) goto LAB_142085043;
            lVar7 = *(longlong *)(lVar7 + 0x30);
          } while (lVar7 != 0);
          lVar11 = 0;
LAB_142085043:
          for (lVar7 = plVar4[2]; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
            if (lVar7 == lVar11) {
              if (param_4 != '\0') {
                FUN_140ad4c90(plVar4,&local_58);
                plVar5 = local_50;
                if (local_58 == 0) {
                  if (local_50 != (longlong *)0x0) {
                    LOCK();
                    plVar4 = local_50 + 1;
                    lVar7 = *plVar4;
                    *(int *)plVar4 = (int)*plVar4 + -1;
                    UNLOCK();
                    if ((int)lVar7 == 1) {
                      (**(code **)*local_50)(local_50);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar5 + 0xc);
                      iVar3 = *piVar2;
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (iVar3 == 1) {
                        (**(code **)(*local_50 + 8))(local_50,1);
                      }
                    }
                  }
                  break;
                }
                cVar6 = FUN_142046020();
                plVar5 = local_50;
                if (local_50 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_50 + 1;
                  lVar7 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar7 == 1) {
                    (**(code **)*local_50)(local_50);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar5 + 0xc);
                    iVar3 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar3 == 1) {
                      (**(code **)(*local_50 + 8))(local_50,1);
                    }
                  }
                }
                if (cVar6 == '\0') break;
              }
              iVar3 = (int)param_2[1];
              *(int *)(param_2 + 1) = iVar3 + 1;
              if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
              }
              *(longlong **)(*param_2 + (longlong)iVar3 * 8) = plVar4;
              break;
            }
          }
        }
        uVar12 = local_40 & 0xffffffff;
        do {
          local_38 = local_38 + 1;
          if ((int)local_40 <= local_38) break;
        } while (*(longlong *)(local_48 + (longlong)local_38 * 8) == 0);
      } while( true );
    }
  }
  return;
}



// FUNCTION 1420851b0 FUN_1420851b0 body=605 status=ok
// SIG undefined FUN_1420851b0(void)

longlong * FUN_1420851b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  longlong local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  *param_2 = 0;
  param_2[1] = 0;
  plVar14 = *(longlong **)(param_1 + 0xa0);
  plVar3 = plVar14 + *(int *)(param_1 + 0xa8);
  for (; plVar14 != plVar3; plVar14 = plVar14 + 1) {
    lVar12 = *plVar14;
    if (lVar12 != 0) {
      lVar7 = UMaterialParameterCollectionInstance::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        puVar8 = (undefined8 *)FUN_1420851b0(lVar12,&local_38);
        iVar10 = *(int *)(puVar8 + 1);
        if (iVar10 != 0) {
          iVar13 = (int)param_2[1];
          if (*(int *)((longlong)param_2 + 0xc) < iVar13 + iVar10) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2);
            iVar13 = (int)param_2[1];
          }
          puVar8 = (undefined8 *)*puVar8;
          puVar9 = (undefined8 *)((longlong)iVar13 * 0x10 + *param_2);
          iVar13 = iVar10;
          do {
            *puVar9 = *puVar8;
            lVar12 = puVar8[1];
            puVar9[1] = lVar12;
            if (lVar12 != 0) {
              LOCK();
              *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
              UNLOCK();
            }
            puVar9 = puVar9 + 2;
            puVar8 = puVar8 + 2;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
          *(int *)(param_2 + 1) = (int)param_2[1] + iVar10;
        }
        if (local_30 != 0) {
          plVar11 = (longlong *)(local_38 + 8);
          iVar10 = local_30;
          do {
            plVar4 = (longlong *)*plVar11;
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar4 + 1;
              lVar12 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar12 == 1) {
                (**(code **)*plVar4)(plVar4);
                LOCK();
                piVar2 = (int *)((longlong)plVar4 + 0xc);
                iVar13 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*plVar4 + 8))(plVar4,1);
                }
              }
            }
            plVar11 = plVar11 + 2;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
        if (local_38 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  lVar12 = *(longlong *)(param_1 + 0xb0);
  lVar7 = (longlong)*(int *)(param_1 + 0xb8) * 0x50 + lVar12;
  for (; lVar12 != lVar7; lVar12 = lVar12 + 0x50) {
    puVar8 = (undefined8 *)FUN_14203a620(lVar12,local_28);
    iVar10 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar10 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar10);
    }
    plVar3 = local_20;
    puVar9 = (undefined8 *)((longlong)iVar10 * 0x10 + *param_2);
    *puVar9 = *puVar8;
    lVar5 = puVar8[1];
    puVar9[1] = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_20 + 1;
      lVar5 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar10 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 142085420 FUN_142085420 body=42 status=ok
// SIG undefined FUN_142085420(void)

undefined4 FUN_142085420(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*DAT_146ae4358 + 0x68))();
  uVar2 = 2;
  if (iVar1 != 0) {
    uVar2 = 3;
  }
  return uVar2;
}



// FUNCTION 142085450 FUN_142085450 body=791 status=ok
// SIG undefined FUN_142085450(void)

ulonglong FUN_142085450(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  bool bVar15;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  ulonglong local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong local_38 [2];
  
  uVar14 = 0;
  bVar6 = false;
  if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_1420854e0:
    puVar11 = &local_58;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    bVar5 = false;
    bVar4 = true;
    local_78 = uVar14;
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar13 = *piVar1;
    if (iVar13 == 0) {
      *piVar1 = 0;
      iVar13 = 0;
    }
    UNLOCK();
    if (iVar13 < 1) goto LAB_1420854e0;
    local_80 = *(longlong **)(param_1 + 0x30);
    bVar5 = true;
    bVar4 = false;
    local_88 = 0;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      uVar3 = *(uint *)(local_80 + 1);
      bVar15 = uVar3 == 0;
      if (bVar15) {
        *(uint *)(local_80 + 1) = 0;
        uVar9 = uVar14;
      }
      else {
        uVar9 = (ulonglong)uVar3;
      }
      UNLOCK();
      while (!bVar15) {
        iVar13 = (int)uVar9;
        LOCK();
        bVar15 = iVar13 == (int)local_80[1];
        if (bVar15) {
          *(int *)(local_80 + 1) = iVar13 + 1;
        }
        UNLOCK();
        if (bVar15) {
          local_88 = *(ulonglong *)(param_1 + 0x28);
          puVar11 = &local_88;
          local_78 = local_88;
          goto LAB_1420854f5;
        }
        uVar9 = 0;
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar15 = uVar3 == 0;
        if (bVar15) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
      }
      local_80 = (longlong *)0x0;
    }
    puVar11 = &local_88;
    local_78 = 0;
  }
LAB_1420854f5:
  plVar12 = (longlong *)puVar11[1];
  puVar11[1] = 0;
  plVar2 = plStack_50;
  local_70 = plVar12;
  *puVar11 = 0;
  if ((bVar4) && (plStack_50 != (longlong *)0x0)) {
    LOCK();
    plVar12 = plStack_50 + 1;
    lVar10 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  plVar12 = local_80;
  if ((bVar5) && (local_80 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_80 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  plVar12 = local_70;
  uVar9 = local_78;
  if (local_78 == 0) {
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_70 + 1;
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    UObjectBaseUtility::GetPathName(param_1,local_38,0);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    return 0;
  }
  cVar7 = FUN_142045cb0(local_78);
  if (cVar7 == '\0') goto LAB_14208567b;
  local_68 = (longlong *)0x0;
  local_60 = 0;
  uVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
  local_48 = *(undefined8 *)(uVar9 + 0x78);
  plVar12 = *(longlong **)(uVar9 + 0x80);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  uVar9 = FUN_14203b1b0(local_48,uVar8,param_2,param_1,6,&local_68);
  if (uVar9 == 0) {
LAB_14208563b:
    uVar9 = uVar14;
  }
  else {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(uVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_14208563b;
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar12 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  bVar6 = true;
  uVar14 = uVar9;
LAB_14208567b:
  if (bVar6) {
    plVar12 = local_68;
    for (iVar13 = (int)local_60; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
  }
  plVar12 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  return uVar14;
}



// FUNCTION 142085770 FUN_142085770 body=255 status=ok
// SIG undefined FUN_142085770(void)

undefined8 * FUN_142085770(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 local_28;
  longlong *plStack_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar7 = 0;
  bVar8 = *(longlong *)(param_1 + 0x38) == 0;
  if (bVar8) {
    puVar6 = &local_28;
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
  }
  else {
    puVar6 = (undefined8 *)FUN_142085870(*(longlong *)(param_1 + 0x38),local_18);
    uVar7 = *puVar6;
  }
  *param_2 = uVar7;
  param_2[1] = puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  plVar3 = plStack_20;
  if (bVar8) {
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_20 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  if ((!bVar8) && (local_10 != (longlong *)0x0)) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142085870 FUN_142085870 body=514 status=ok
// SIG undefined FUN_142085870(void)

undefined8 * FUN_142085870(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_40 = *(longlong **)(param_1 + 0x30);
      local_48 = 0;
      if (local_40 == (longlong *)0x0) {
LAB_14208590d:
        plVar7 = &local_48;
        bVar4 = true;
        bVar9 = false;
        lVar8 = local_48;
      }
      else {
        LOCK();
        iVar6 = (int)local_40[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_40 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_40[1];
          if (bVar9) {
            *(int *)(local_40 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_40 != (longlong *)0x0) {
              local_48 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_14208590d;
          }
          LOCK();
          iVar6 = (int)local_40[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_40 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_48;
        local_40 = (longlong *)0x0;
        bVar4 = true;
        bVar9 = false;
        lVar8 = 0;
      }
      goto LAB_142085934;
    }
  }
  plVar7 = &local_38;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_142085934:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_30;
  if ((bVar9) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  plVar7 = local_40;
  if ((bVar4) && (local_40 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (lVar8 == 0) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar3 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_1420392d0(lVar8,param_2,param_3);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar3 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 142085a80 FUN_142085a80 body=66 status=ok
// SIG undefined FUN_142085a80(void)

undefined8 * FUN_142085a80(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1420876d0(param_1,param_3);
  if (lVar1 != 0) {
    FUN_142085ad0(lVar1,param_2);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  return param_2;
}



// FUNCTION 142085ad0 FUN_142085ad0 body=593 status=ok
// SIG undefined FUN_142085ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142085ad0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong local_90;
  longlong *plStack_88;
  longlong local_80 [3];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar13 = 0;
  local_b8 = 0;
  FUN_1432bfaf0(&local_68);
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar11 = *piVar1;
    if (iVar11 == 0) {
      *piVar1 = 0;
      iVar11 = 0;
    }
    UNLOCK();
    if (0 < iVar11) {
      local_c0 = *(longlong **)(param_1 + 0x30);
      local_c8 = 0;
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        iVar11 = (int)local_c0[1];
        bVar14 = iVar11 == 0;
        if (bVar14) {
          *(int *)(local_c0 + 1) = 0;
          iVar11 = 0;
        }
        UNLOCK();
        while (!bVar14) {
          LOCK();
          bVar14 = iVar11 == (int)local_c0[1];
          if (bVar14) {
            *(int *)(local_c0 + 1) = iVar11 + 1;
          }
          UNLOCK();
          if (bVar14) {
            lVar13 = *(longlong *)(param_1 + 0x28);
            plVar12 = &local_c8;
            bVar4 = true;
            bVar14 = false;
            local_c8 = lVar13;
            goto LAB_142085b95;
          }
          LOCK();
          iVar11 = (int)local_c0[1];
          bVar14 = iVar11 == 0;
          if (bVar14) {
            *(int *)(local_c0 + 1) = 0;
            iVar11 = 0;
          }
          UNLOCK();
        }
        local_c0 = (longlong *)0x0;
      }
      lVar13 = 0;
      plVar12 = &local_c8;
      bVar4 = true;
      bVar14 = false;
      goto LAB_142085b95;
    }
  }
  plVar12 = &local_90;
  local_90 = 0;
  plStack_88 = (longlong *)0x0;
  bVar4 = false;
  bVar14 = true;
LAB_142085b95:
  plVar3 = (longlong *)plVar12[1];
  plVar12[1] = 0;
  plVar2 = plStack_88;
  *plVar12 = 0;
  if ((bVar14) && (plStack_88 != (longlong *)0x0)) {
    LOCK();
    plVar12 = plStack_88 + 1;
    lVar5 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_88)(plStack_88);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plStack_88 + 8))(plStack_88,1);
      }
    }
  }
  plVar12 = local_c0;
  if ((bVar4) && (local_c0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_c0 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  if ((lVar13 == 0) || (cVar10 = FUN_1420393a0(lVar13,&local_68), cVar10 == '\0')) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar3 + 1;
      lVar13 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    UObjectBaseUtility::GetPathName(param_1,local_80,0);
    if (local_80[0] != 0) {
      FMemory::Free();
    }
    *param_2 = local_b0;
    param_2[1] = uStack_a8;
    param_2[2] = local_a0;
    param_2[3] = uStack_98;
  }
  else {
    local_b0 = local_68;
    uVar6 = local_b0;
    uStack_a8 = uStack_60;
    uVar7 = uStack_a8;
    local_a0 = local_58;
    uVar8 = local_a0;
    uStack_98 = uStack_50;
    uVar9 = uStack_98;
    local_b0._0_4_ = (undefined4)local_68;
    local_b0._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
    uStack_a8._0_4_ = (undefined4)uStack_60;
    uStack_a8._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    local_a0._0_4_ = (undefined4)local_58;
    local_a0._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
    uStack_98._0_4_ = (undefined4)uStack_50;
    uStack_98._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    *(undefined4 *)param_2 = (undefined4)local_b0;
    *(undefined4 *)((longlong)param_2 + 4) = local_b0._4_4_;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_a8;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_a8._4_4_;
    *(undefined4 *)(param_2 + 2) = (undefined4)local_a0;
    *(undefined4 *)((longlong)param_2 + 0x14) = local_a0._4_4_;
    *(undefined4 *)(param_2 + 3) = (undefined4)uStack_98;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_98._4_4_;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar3 + 1;
      lVar13 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        local_b0 = uVar6;
        uStack_a8 = uVar7;
        local_a0 = uVar8;
        uStack_98 = uVar9;
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 142085d30 FUN_142085d30 body=133 status=ok
// SIG undefined FUN_142085d30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142085d30(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1420876d0(param_1,param_3);
  if (lVar1 != 0) {
    FUN_142085dc0(lVar1,param_2);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0x42c80000;
  *(undefined4 *)(param_2 + 2) = 0x42c80000;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0x42c80000;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0x437f0000;
  *(undefined1 *)(param_2 + 5) = 1;
  return param_2;
}



// FUNCTION 142085dc0 FUN_142085dc0 body=871 status=ok
// SIG undefined FUN_142085dc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142085dc0(longlong param_1,float *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  longlong local_150;
  longlong *plStack_148;
  longlong local_140 [3];
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 local_54;
  undefined1 local_52;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  lVar9 = 0;
  *(undefined8 *)param_2 = _DAT_1468b5d90;
  param_2[2] = DAT_1468b5d98;
  param_2[3] = 100.0;
  param_2[4] = 100.0;
  param_2[5] = 100.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[8] = 0.0;
  param_2[9] = 255.0;
  *(undefined1 *)(param_2 + 10) = 1;
  local_c8 = 0x3f800000;
  local_b8 = 0x3f80000000000000;
  local_a0 = 0x3f800000;
  local_98 = 0x3f800000;
  local_88 = 0x3f80000000000000;
  local_70 = 0x3f800000;
  local_60 = 0x3f80000000000000;
  local_158 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_54 = 0;
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      local_160 = *(longlong **)(param_1 + 0x30);
      local_168 = 0;
      if (local_160 != (longlong *)0x0) {
        LOCK();
        iVar7 = (int)local_160[1];
        bVar10 = iVar7 == 0;
        if (bVar10) {
          *(int *)(local_160 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        while (!bVar10) {
          LOCK();
          bVar10 = iVar7 == (int)local_160[1];
          if (bVar10) {
            *(int *)(local_160 + 1) = iVar7 + 1;
          }
          UNLOCK();
          if (bVar10) {
            lVar9 = *(longlong *)(param_1 + 0x28);
            plVar8 = &local_168;
            bVar4 = true;
            bVar10 = false;
            local_168 = lVar9;
            goto LAB_142085f38;
          }
          LOCK();
          iVar7 = (int)local_160[1];
          bVar10 = iVar7 == 0;
          if (bVar10) {
            *(int *)(local_160 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
        }
        local_160 = (longlong *)0x0;
      }
      lVar9 = 0;
      plVar8 = &local_168;
      bVar4 = true;
      bVar10 = false;
      goto LAB_142085f38;
    }
  }
  plVar8 = &local_150;
  local_150 = 0;
  plStack_148 = (longlong *)0x0;
  bVar4 = false;
  bVar10 = true;
LAB_142085f38:
  plVar3 = (longlong *)plVar8[1];
  plVar8[1] = 0;
  plVar2 = plStack_148;
  *plVar8 = 0;
  if ((bVar10) && (plStack_148 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plStack_148 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_148)(plStack_148);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_148 + 8))(plStack_148,1);
      }
    }
  }
  plVar8 = local_160;
  if ((bVar4) && (local_160 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_160 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_160)(local_160);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_160 + 8))(local_160,1);
      }
    }
  }
  if (lVar9 != 0) {
    cVar6 = FUN_142039630(lVar9,&local_128);
    if (cVar6 == '\0') {
      UObjectBaseUtility::GetPathName(param_1,local_140,0);
      if (local_140[0] != 0) {
        FMemory::Free();
      }
    }
    else {
      *(undefined1 *)(param_2 + 10) = local_52;
      param_2[9] = (float)local_100;
      param_2[1] = (float)local_120;
      *param_2 = (float)local_128;
      param_2[2] = (float)local_f8;
      param_2[3] = (float)local_110;
      param_2[4] = (float)local_108;
      param_2[6] = (float)local_118;
      param_2[5] = (float)local_e0;
      param_2[8] = (float)local_e8;
      param_2[7] = (float)local_f0;
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142086130 FUN_142086130 body=96 status=ok
// SIG undefined FUN_142086130(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_142086130(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  lVar1 = FUN_1420876d0(param_1,param_3);
  uVar2 = uRam0000000146ae423c;
  if (lVar1 != 0) {
    FUN_142086190(lVar1,param_2);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = uVar2;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  uVar2 = uRam0000000146ae4234 & uRam0000000146ae4244;
  uVar3 = uRam0000000146ae4238 & uRam0000000146ae4248;
  uVar4 = uRam0000000146ae423c & uRam0000000146ae424c;
  param_2[8] = _DAT_146ae4230 & _DAT_146ae4240;
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  param_2[0xb] = uVar4;
  return param_2;
}



// FUNCTION 142086190 FUN_142086190 body=1147 status=ok
// SIG undefined FUN_142086190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142086190(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  longlong lVar8;
  char cVar9;
  int iVar10;
  DWORD DVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  longlong lVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStack_248 [32];
  undefined2 local_228;
  longlong local_218;
  longlong *local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  longlong *plStack_1e8;
  code *local_1d8 [2];
  undefined1 local_1c8 [32];
  undefined8 local_1a8;
  undefined4 local_198;
  undefined1 local_188 [80];
  undefined1 local_138 [192];
  longlong local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  local_208 = 0;
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar10 = *piVar1;
    if (iVar10 == 0) {
      *piVar1 = 0;
      iVar10 = 0;
    }
    UNLOCK();
    if (0 < iVar10) {
      local_210 = *(longlong **)(param_1 + 0x30);
      local_218 = 0;
      if (local_210 == (longlong *)0x0) {
LAB_142086244:
        plVar12 = &local_218;
        bVar7 = true;
        bVar16 = false;
        lVar15 = local_218;
      }
      else {
        LOCK();
        iVar10 = (int)local_210[1];
        bVar16 = iVar10 == 0;
        if (bVar16) {
          *(int *)(local_210 + 1) = 0;
          iVar10 = 0;
        }
        UNLOCK();
        while (!bVar16) {
          LOCK();
          bVar16 = iVar10 == (int)local_210[1];
          if (bVar16) {
            *(int *)(local_210 + 1) = iVar10 + 1;
          }
          UNLOCK();
          if (bVar16) {
            if (local_210 != (longlong *)0x0) {
              local_218 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_142086244;
          }
          LOCK();
          iVar10 = (int)local_210[1];
          bVar16 = iVar10 == 0;
          if (bVar16) {
            *(int *)(local_210 + 1) = 0;
            iVar10 = 0;
          }
          UNLOCK();
        }
        plVar12 = &local_218;
        local_210 = (longlong *)0x0;
        bVar7 = true;
        bVar16 = false;
        lVar15 = 0;
      }
      goto LAB_14208626d;
    }
  }
  plVar12 = &local_1f0;
  local_1f0 = 0;
  plStack_1e8 = (longlong *)0x0;
  bVar7 = false;
  bVar16 = true;
  lVar15 = 0;
LAB_14208626d:
  plVar3 = (longlong *)plVar12[1];
  plVar12[1] = 0;
  plVar2 = plStack_1e8;
  *plVar12 = 0;
  if ((bVar16) && (plStack_1e8 != (longlong *)0x0)) {
    LOCK();
    plVar12 = plStack_1e8 + 1;
    lVar8 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_1e8)(plStack_1e8);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plStack_1e8 + 8))(plStack_1e8,1);
      }
    }
  }
  plVar12 = local_210;
  if ((bVar7) && (local_210 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_210 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_210)(local_210);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_210 + 8))(local_210,1);
      }
    }
  }
  if (lVar15 == 0) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar3 + 1;
      lVar15 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    uVar17 = uRam0000000146ae423c;
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((longlong)param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    *(uint *)((longlong)param_2 + 0xc) = uVar17;
    param_2[2] = 0;
    param_2[3] = 0;
    uVar17 = uRam0000000146ae4234 & uRam0000000146ae4244;
    uVar18 = uRam0000000146ae4238 & uRam0000000146ae4248;
    uVar19 = uRam0000000146ae423c & uRam0000000146ae424c;
    *(uint *)(param_2 + 4) = _DAT_146ae4230 & _DAT_146ae4240;
    *(uint *)((longlong)param_2 + 0x24) = uVar17;
    *(uint *)(param_2 + 5) = uVar18;
    *(uint *)((longlong)param_2 + 0x2c) = uVar19;
  }
  else {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_1a8 = 0;
    local_198 = 0;
    puVar13 = (undefined8 *)FUN_140438ef0(0x20,local_1c8);
    plVar12 = plVar3;
    if (puVar13 != (undefined8 *)0x0) {
      *puVar13 = &PTR_FUN_14467a5d8;
      puVar13[1] = param_1;
      puVar13[2] = lVar15;
      puVar13[3] = plVar3;
      plVar12 = (longlong *)0x0;
    }
    local_200 = 0;
    local_1d8[0] = FUN_142082920;
    local_1f8 = 0x20;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_200,0);
    local_228 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_200,0x20,"UGFxObject::GetDisplayTransform");
    FUN_14207ef90(local_138,&local_200,local_1d8);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar12 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    uVar14 = FUN_142084b50(local_138,local_188);
    FUN_1420326d0(lVar15,uVar14);
    lVar15 = local_78;
    if (local_78 != 0) {
      while ((lVar15 = local_78, local_78 != 0 && (*(char *)(local_78 + 0x58) == '\0'))) {
        cVar9 = FUN_1415ad720(&DAT_1468e2448);
        if ((cVar9 == '\0') &&
           ((DAT_1468c21ae != '\0' && (DVar11 = GetCurrentThreadId(), DVar11 != DAT_1468c21c0)))) {
          lVar15 = FUN_14203ca70();
          if (lVar15 != 0) {
            FUN_1420714f0(lVar15);
          }
        }
        else {
          FUN_142036de0();
        }
        lVar15 = local_78;
        if (local_78 == 0) break;
        if (*(char *)(local_78 + 0x58) == '\0') {
          (**(code **)(**(longlong **)(local_78 + 0x50) + 0x20))(*(longlong **)(local_78 + 0x50),5);
        }
      }
    }
    cVar9 = *(char *)(lVar15 + 0x58);
    while (cVar9 == '\0') {
      (**(code **)(**(longlong **)(lVar15 + 0x50) + 0x20))
                (*(longlong **)(lVar15 + 0x50),0x5d638865,0);
      cVar9 = *(char *)(lVar15 + 0x58);
    }
    uVar14 = *(undefined8 *)(lVar15 + 0x68);
    *param_2 = *(undefined8 *)(lVar15 + 0x60);
    param_2[1] = uVar14;
    uVar4 = *(undefined4 *)(lVar15 + 0x74);
    uVar5 = *(undefined4 *)(lVar15 + 0x78);
    uVar6 = *(undefined4 *)(lVar15 + 0x7c);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar15 + 0x70);
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
    *(undefined4 *)(param_2 + 3) = uVar5;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uVar6;
    uVar4 = *(undefined4 *)(lVar15 + 0x84);
    uVar5 = *(undefined4 *)(lVar15 + 0x88);
    uVar6 = *(undefined4 *)(lVar15 + 0x8c);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(lVar15 + 0x80);
    *(undefined4 *)((longlong)param_2 + 0x24) = uVar4;
    *(undefined4 *)(param_2 + 5) = uVar5;
    *(undefined4 *)((longlong)param_2 + 0x2c) = uVar6;
    FUN_140ce1dc0(local_138);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar3 + 1;
      lVar15 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 142086610 FUN_142086610 body=516 status=ok
// SIG undefined FUN_142086610(void)

undefined8 * FUN_142086610(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_40 = *(longlong **)(param_1 + 0x30);
      local_48 = 0;
      if (local_40 == (longlong *)0x0) {
LAB_1420866ad:
        plVar7 = &local_48;
        bVar4 = true;
        bVar9 = false;
        lVar8 = local_48;
      }
      else {
        LOCK();
        iVar6 = (int)local_40[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_40 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_40[1];
          if (bVar9) {
            *(int *)(local_40 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_40 != (longlong *)0x0) {
              local_48 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_1420866ad;
          }
          LOCK();
          iVar6 = (int)local_40[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_40 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_48;
        local_40 = (longlong *)0x0;
        bVar4 = true;
        bVar9 = false;
        lVar8 = 0;
      }
      goto LAB_1420866d4;
    }
  }
  plVar7 = &local_38;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_1420866d4:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_30;
  if ((bVar9) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  plVar7 = local_40;
  if ((bVar4) && (local_40 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (lVar8 == 0) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar3 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    UBidstackCustomMeshAdUnitComponent::getMaterialInfo(lVar8,param_2);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar3 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
          return param_2;
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 142086820 FUN_142086820 body=11 status=ok
// SIG undefined FUN_142086820(void)

void FUN_142086820(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142086827. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x20))();
  return;
}



// FUNCTION 142086830 FUN_142086830 body=657 status=ok
// SIG undefined FUN_142086830(void)

undefined8 * FUN_142086830(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  void *_Src;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (0 < iVar8) {
      local_40 = *(longlong **)(param_1 + 0x30);
      local_48 = 0;
      if (local_40 == (longlong *)0x0) {
LAB_1420868cd:
        plVar7 = &local_48;
        bVar4 = true;
        bVar10 = false;
        lVar9 = local_48;
      }
      else {
        LOCK();
        iVar8 = (int)local_40[1];
        bVar10 = iVar8 == 0;
        if (bVar10) {
          *(int *)(local_40 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
        while (!bVar10) {
          LOCK();
          bVar10 = iVar8 == (int)local_40[1];
          if (bVar10) {
            *(int *)(local_40 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar10) {
            if (local_40 != (longlong *)0x0) {
              local_48 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_1420868cd;
          }
          LOCK();
          iVar8 = (int)local_40[1];
          bVar10 = iVar8 == 0;
          if (bVar10) {
            *(int *)(local_40 + 1) = 0;
            iVar8 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_48;
        local_40 = (longlong *)0x0;
        bVar4 = true;
        bVar10 = false;
        lVar9 = 0;
      }
      goto LAB_1420868f4;
    }
  }
  plVar7 = &local_38;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  bVar4 = false;
  bVar10 = true;
  lVar9 = 0;
LAB_1420868f4:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_30;
  if ((bVar10) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  plVar7 = local_40;
  if ((bVar4) && (local_40 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (lVar9 == 0) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar3 + 1;
      lVar9 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146ae4440) &&
       (_Init_thread_header(&DAT_146ae4440), DAT_146ae4440 == -1)) {
      atexit((_func_5014 *)&LAB_143ea5e80);
      _Init_thread_footer(&DAT_146ae4440);
    }
    *param_2 = 0;
    uVar6 = DAT_146ae4438;
    _Src = DAT_146ae4430;
    iVar8 = (int)DAT_146ae4438;
    *(int *)(param_2 + 1) = iVar8;
    if (iVar8 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,uVar6 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar8 * 2);
    }
  }
  else {
    FString::FString(param_2,lVar9 + 0x28);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar3 + 1;
      lVar9 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 142086ad0 FUN_142086ad0 body=582 status=ok
// SIG undefined FUN_142086ad0(void)

undefined * FUN_142086ad0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_30 = *(longlong **)(param_1 + 0x30);
      local_38 = 0;
      if (local_30 == (longlong *)0x0) {
LAB_142086b62:
        plVar7 = &local_38;
        bVar4 = true;
        bVar9 = false;
        lVar8 = local_38;
      }
      else {
        LOCK();
        iVar6 = (int)local_30[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_30 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_30[1];
          if (bVar9) {
            *(int *)(local_30 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_30 != (longlong *)0x0) {
              local_38 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_142086b62;
          }
          LOCK();
          iVar6 = (int)local_30[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_30 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_38;
        local_30 = (longlong *)0x0;
        bVar4 = true;
        bVar9 = false;
        lVar8 = 0;
      }
      goto LAB_142086b89;
    }
  }
  plVar7 = &local_28;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_142086b89:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_20;
  if ((bVar9) && (plStack_20 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_20 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  plVar7 = local_30;
  if ((bVar4) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (lVar8 != 0) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar3 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    return (undefined *)(lVar8 + 0x88);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ae4444) && (_Init_thread_header(&DAT_146ae4444), DAT_146ae4444 == -1))
  {
    atexit(FUN_143ea5ea0);
    _Init_thread_footer(&DAT_146ae4444);
    return &DAT_1464fafd0;
  }
  return &DAT_1464fafd0;
}



// FUNCTION 142086d20 FUN_142086d20 body=21 status=ok
// SIG undefined FUN_142086d20(void)

undefined8 FUN_142086d20(void)

{
  if (DAT_146b17150 != 0) {
    return *(undefined8 *)(DAT_146b17150 + 0x7b0);
  }
  return 0;
}



// FUNCTION 142086d70 FUN_142086d70 body=11 status=ok
// SIG undefined FUN_142086d70(void)

void FUN_142086d70(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142086d77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))();
  return;
}



// FUNCTION 142086d80 FUN_142086d80 body=109 status=ok
// SIG undefined FUN_142086d80(void)

void FUN_142086d80(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int local_res10 [6];
  
  local_res10[0] = 2;
  FConfigCacheIni::GetInt
            (DAT_1468b6148,L"Scaleform",L"AllocatorGranularityPages",local_res10,&DAT_1468e2360);
  *param_2 = 0x10000;
  param_2[1] = 0;
  iVar1 = 1;
  if (0 < local_res10[0]) {
    iVar1 = local_res10[0];
  }
  param_2[2] = (longlong)iVar1 << 0x10;
  *(undefined1 *)(param_2 + 5) = 0;
  return;
}



// FUNCTION 142086df0 FUN_142086df0 body=491 status=ok
// SIG undefined FUN_142086df0(void)

char FUN_142086df0(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 **ppuVar2;
  char cVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  char **ppcVar8;
  longlong lVar9;
  char local_res8 [8];
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  undefined8 *local_38;
  longlong *local_30;
  char *local_28;
  longlong *local_20;
  
  local_28 = local_res8;
  local_20 = &local_58;
  local_res8[0] = '\0';
  local_58 = 0;
  local_50 = 0;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_4;
  local_30 = param_3;
  if (1 < *(int *)(param_2 + 8)) {
    FUN_14207fdc0(&local_48,param_1 + 0xd0);
    FUN_14207fdc0(&local_48,param_1 + 0xe0);
    lVar9 = (longlong)(int)local_50 * 0x30 + local_58;
    if (local_58 != lVar9) {
      lVar6 = local_58 + 0x10;
      do {
        if (*(int *)(param_4 + 1) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = (undefined2 *)*param_4;
        }
        iVar4 = FUN_141592950(lVar6,puVar5,1,0,0xffffffff);
        if (iVar4 != -1) {
          if (local_res8[0] != '\0') {
            if (param_3 != &local_48) {
              if (*param_3 != 0) {
                FMemory::Free();
              }
              *param_3 = 0;
              param_3[1] = 0;
            }
            ppuVar2 = (undefined8 **)(param_3 + 2);
            if (ppuVar2 != &local_38) {
              if (*ppuVar2 != (undefined8 *)0x0) {
                FMemory::Free();
              }
              *ppuVar2 = (undefined8 *)0x0;
              param_3[3] = 0;
            }
            ppcVar8 = (char **)(param_3 + 4);
            if (ppcVar8 != &local_28) {
              if (*ppcVar8 != (char *)0x0) {
                FMemory::Free();
              }
              *ppcVar8 = (char *)0x0;
              param_3[5] = 0;
            }
            local_res8[0] = '\0';
            break;
          }
          FString::operator=(param_3,lVar6 + -0x10);
          FString::operator=(param_3 + 2,lVar6);
          FString::operator=(param_3 + 4,lVar6 + 0x10);
          local_res8[0] = '\x01';
        }
        lVar1 = lVar6 + 0x20;
        lVar6 = lVar6 + 0x30;
      } while (lVar1 != lVar9);
    }
  }
  cVar3 = local_res8[0];
  if ((int)local_50 != 0) {
    plVar7 = (longlong *)(local_58 + 0x10);
    iVar4 = (int)local_50;
    do {
      if (plVar7[2] != 0) {
        FMemory::Free();
      }
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      if (plVar7[-2] != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 6;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  return cVar3;
}



// FUNCTION 142086fe0 FUN_142086fe0 body=30 status=ok
// SIG undefined FUN_142086fe0(void)

undefined8 FUN_142086fe0(longlong param_1,undefined8 param_2)

{
  FUN_1432de380(param_2,param_1 + 0x50);
  return param_2;
}



// FUNCTION 142087000 FUN_142087000 body=27 status=ok
// SIG undefined FUN_142087000(void)

uint FUN_142087000(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = ((*(uint *)(param_1 + 0x60) & 1) + 4) * 0x10;
  uVar1 = uVar2 | 0x10000;
  if ((*(uint *)(param_1 + 0x60) & 2) == 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



// FUNCTION 142087040 FUN_142087040 body=12 status=ok
// SIG undefined FUN_142087040(void)

undefined8 * FUN_142087040(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  wint_t wVar5;
  wint_t wVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  wint_t *pwVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  int aiStackX_10 [2];
  undefined1 auStackX_18 [8];
  undefined8 *puStackX_20;
  longlong *plStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  longlong *plStack_60;
  longlong *plStack_58;
  undefined8 **ppuStack_50;
  longlong alStack_48 [2];
  
  if (param_1 == (longlong *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar9 = (undefined8 *)0x0;
  iVar3 = (int)param_2[1];
  iVar7 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar7 = 0;
  }
  if (iVar7 != 0) {
    if (iVar3 == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = (undefined2 *)*param_2;
    }
    pwVar10 = &DAT_144f8b050;
    do {
      wVar5 = *(wint_t *)((longlong)(puVar13 + -0xa27c5828) + (longlong)pwVar10);
      if ((wVar5 == 0) && (*pwVar10 == 0)) break;
      if (wVar5 != *pwVar10) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar10);
        if (wVar5 != wVar6) goto LAB_142087757;
      }
      pwVar10 = pwVar10 + 1;
    } while( true );
  }
LAB_14208792f:
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x408))(param_1);
  return puVar9;
LAB_142087757:
  if (wVar5 != wVar6) {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x32));
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x33,aiStackX_10,param_2);
    puVar8 = puVar9;
    if (aiStackX_10[0] != -1) {
      puVar8 = (undefined8 *)((longlong)aiStackX_10[0] * 0x20 + param_1[0x33]);
    }
    puVar11 = puVar8 + 2;
    if (puVar8 == (undefined8 *)0x0) {
      puVar11 = puVar9;
    }
    if (puVar11 == (undefined8 *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x32));
      if (param_1[7] == 0) {
        FUN_140ad4c90(param_1,&lStack_68);
        if ((lStack_68 != 0) &&
           (UObjectBaseUtility::GetPathName(param_1,alStack_48,0), alStack_48[0] != 0)) {
          FMemory::Free();
        }
        plVar12 = plStack_60;
        if (plStack_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_60 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plStack_60)(plStack_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plStack_60 + 8))(plStack_60,1);
            }
          }
        }
        puVar9 = (undefined8 *)0x0;
      }
      else {
        plStack_78 = (longlong *)0x0;
        uStack_70 = 0;
        iVar7 = FUN_141594550(param_2,&plStack_78,&DAT_144f89a9c,1);
        if ((0 < iVar7) &&
           (puVar8 = (undefined8 *)FUN_1420825b0(param_1,param_1[7],&plStack_78,0),
           puVar8 != (undefined8 *)0x0)) {
          puStackX_20 = puVar8;
          AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x32));
          ppuStack_50 = &puStackX_20;
          plStack_58 = param_2;
          FUN_14056b880(param_1 + 0x33,auStackX_18,&plStack_58,0);
          TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
          AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x3f,&puStackX_20);
          ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x32));
          puVar9 = puVar8;
        }
        plVar12 = plStack_78;
        for (iVar7 = (int)uStack_70; iVar7 != 0; iVar7 = iVar7 + -1) {
          if (*plVar12 != 0) {
            FMemory::Free();
          }
          plVar12 = plVar12 + 2;
        }
        if (plStack_78 != (longlong *)0x0) {
          FMemory::Free(plStack_78);
        }
      }
    }
    else {
      puVar9 = (undefined8 *)*puVar11;
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x32));
    }
    return puVar9;
  }
  goto LAB_14208792f;
}



// FUNCTION 142087050 FUN_142087050 body=728 status=ok
// SIG undefined FUN_142087050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined2 * FUN_142087050(longlong param_1,undefined2 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong *local_150;
  undefined4 local_148;
  longlong local_140;
  longlong *plStack_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong *local_118;
  uint local_110;
  undefined8 local_108;
  longlong local_f8 [2];
  undefined1 local_e8 [128];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  local_148 = 0;
  local_128 = 0xffffffffffffffff;
  uStack_120 = 0xffffffffffffffff;
  local_118 = (longlong *)0x0;
  local_110 = 0;
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_150 = *(longlong **)(param_1 + 0x30);
      local_158 = 0;
      if (local_150 == (longlong *)0x0) {
LAB_142087144:
        plVar7 = &local_158;
        bVar4 = true;
        bVar11 = false;
        lVar10 = local_158;
      }
      else {
        LOCK();
        iVar6 = (int)local_150[1];
        bVar11 = iVar6 == 0;
        if (bVar11) {
          *(int *)(local_150 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar11) {
          LOCK();
          bVar11 = iVar6 == (int)local_150[1];
          if (bVar11) {
            *(int *)(local_150 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar11) {
            if (local_150 != (longlong *)0x0) {
              local_158 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_142087144;
          }
          LOCK();
          iVar6 = (int)local_150[1];
          bVar11 = iVar6 == 0;
          if (bVar11) {
            *(int *)(local_150 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_158;
        local_150 = (longlong *)0x0;
        bVar4 = true;
        bVar11 = false;
        lVar10 = 0;
      }
      goto LAB_14208716d;
    }
  }
  plVar7 = &local_140;
  local_140 = 0;
  plStack_138 = (longlong *)0x0;
  bVar4 = false;
  bVar11 = true;
  lVar10 = 0;
LAB_14208716d:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  plVar2 = plStack_138;
  *plVar7 = 0;
  local_130 = param_3;
  if ((bVar11) && (plStack_138 != (longlong *)0x0)) {
    LOCK();
    plVar7 = plStack_138 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_138)(plStack_138);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_138 + 8))(plStack_138,1);
      }
    }
  }
  plVar7 = local_150;
  if ((bVar4) && (local_150 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_150 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  if (lVar10 != 0) {
    if (*(int *)(local_130 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*local_130;
    }
    lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                      (local_e8,puVar9);
    cVar5 = FUN_14203acd0(lVar10,*(undefined8 *)(lVar8 + 0x88),&local_128);
    if (local_68 != 0) {
      FMemory::Free();
    }
    if ((cVar5 == '\0') && (UObjectBaseUtility::GetPathName(param_1,local_f8,0), local_f8[0] != 0))
    {
      FMemory::Free();
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  FUN_142082f00(param_1,param_2,&local_128);
  if ((local_110 >> 6 & 1) != 0) {
    (**(code **)(*local_118 + 0x10))(local_118,&local_128,local_108);
  }
  return param_2;
}



// FUNCTION 142087330 FUN_142087330 body=902 status=ok
// SIG undefined FUN_142087330(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142087330(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  undefined2 *puVar11;
  uint uVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong *local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  longlong *local_160;
  uint local_158;
  undefined8 local_150;
  longlong local_140;
  longlong *plStack_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong *local_118;
  uint local_110;
  undefined8 local_108;
  longlong local_f8 [2];
  undefined1 local_e8 [128];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  lVar13 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  local_178 = 0;
  local_170 = 0xffffffffffffffff;
  uStack_168 = 0xffffffffffffffff;
  local_160 = (longlong *)0x0;
  local_158 = 0;
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_180 = *(longlong **)(param_1 + 0x30);
      local_188 = 0;
      if (local_180 != (longlong *)0x0) {
        LOCK();
        iVar6 = (int)local_180[1];
        bVar14 = iVar6 == 0;
        if (bVar14) {
          *(int *)(local_180 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar14) {
          LOCK();
          bVar14 = iVar6 == (int)local_180[1];
          if (bVar14) {
            *(int *)(local_180 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar14) {
            lVar13 = *(longlong *)(param_1 + 0x28);
            plVar8 = &local_188;
            bVar4 = true;
            bVar14 = false;
            local_188 = lVar13;
            goto LAB_14208742b;
          }
          LOCK();
          iVar6 = (int)local_180[1];
          bVar14 = iVar6 == 0;
          if (bVar14) {
            *(int *)(local_180 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        local_180 = (longlong *)0x0;
      }
      lVar13 = 0;
      plVar8 = &local_188;
      bVar4 = true;
      bVar14 = false;
      goto LAB_14208742b;
    }
  }
  plVar8 = &local_140;
  local_140 = 0;
  plStack_138 = (longlong *)0x0;
  bVar4 = false;
  bVar14 = true;
LAB_14208742b:
  plVar3 = (longlong *)plVar8[1];
  plVar8[1] = 0;
  plVar2 = plStack_138;
  *plVar8 = 0;
  local_130 = param_3;
  if ((bVar14) && (plStack_138 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plStack_138 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_138)(plStack_138);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_138 + 8))(plStack_138,1);
      }
    }
  }
  plVar8 = local_180;
  if ((bVar4) && (local_180 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_180 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_180)(local_180);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_180 + 8))(local_180,1);
      }
    }
  }
  if (lVar13 != 0) {
    if (*(int *)(local_130 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*local_130;
    }
    lVar9 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                      (local_e8,puVar11);
    cVar5 = FUN_14203acd0(lVar13,*(undefined8 *)(lVar9 + 0x88),&local_170);
    if (local_68 != 0) {
      FMemory::Free();
    }
    if (cVar5 == '\0') {
      UObjectBaseUtility::GetPathName(param_1,local_f8,0);
      if (local_f8[0] != 0) {
        FMemory::Free();
      }
    }
    else {
      iVar6 = (**(code **)(*local_160 + 0x50))();
      lVar13 = param_2[1];
      iVar10 = (int)lVar13 + iVar6;
      *(int *)(param_2 + 1) = iVar10;
      if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
        ResizeGrow(param_2);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)(int)lVar13 * 0x38 + *param_2),0,(longlong)iVar6 * 0x38);
      uVar12 = 0;
      iVar6 = (**(code **)(*local_160 + 0x50))(local_160,local_150);
      if (iVar6 != 0) {
        do {
          local_128 = 0xffffffffffffffff;
          uStack_120 = 0xffffffffffffffff;
          local_118 = (longlong *)0x0;
          local_110 = 0;
          (**(code **)(*local_160 + 0x60))(local_160,local_150,uVar12,&local_128);
          FUN_142082f00(param_1,(longlong)(int)uVar12 * 0x38 + *param_2,&local_128);
          if ((local_110 >> 6 & 1) != 0) {
            (**(code **)(*local_118 + 0x10))(local_118,&local_128,local_108);
          }
          uVar12 = uVar12 + 1;
          uVar7 = (**(code **)(*local_160 + 0x50))(local_160,local_150);
        } while (uVar12 < uVar7);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    lVar13 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if ((local_158 >> 6 & 1) != 0) {
    (**(code **)(*local_160 + 0x10))(local_160,&local_170,local_150);
  }
  return param_2;
}



// FUNCTION 1420876d0 FUN_1420876d0 body=634 status=ok
// SIG undefined FUN_1420876d0(void)

undefined8 * FUN_1420876d0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  wint_t wVar5;
  wint_t wVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  wint_t *pwVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  int local_res10 [2];
  undefined1 local_res18 [8];
  undefined8 *local_res20;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  undefined8 **local_50;
  longlong local_48 [2];
  
  puVar9 = (undefined8 *)0x0;
  iVar3 = (int)param_2[1];
  iVar7 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar7 = 0;
  }
  if (iVar7 != 0) {
    if (iVar3 == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = (undefined2 *)*param_2;
    }
    pwVar10 = &DAT_144f8b050;
    do {
      wVar5 = *(wint_t *)((longlong)(puVar13 + -0xa27c5828) + (longlong)pwVar10);
      if ((wVar5 == 0) && (*pwVar10 == 0)) break;
      if (wVar5 != *pwVar10) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar10);
        if (wVar5 != wVar6) goto LAB_142087757;
      }
      pwVar10 = pwVar10 + 1;
    } while( true );
  }
LAB_14208792f:
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x408))(param_1);
  return puVar9;
LAB_142087757:
  if (wVar5 != wVar6) {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x32));
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x33,local_res10,param_2);
    puVar8 = puVar9;
    if (local_res10[0] != -1) {
      puVar8 = (undefined8 *)((longlong)local_res10[0] * 0x20 + param_1[0x33]);
    }
    puVar11 = puVar8 + 2;
    if (puVar8 == (undefined8 *)0x0) {
      puVar11 = puVar9;
    }
    if (puVar11 == (undefined8 *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x32));
      if (param_1[7] == 0) {
        FUN_140ad4c90(param_1,&local_68);
        if ((local_68 != 0) &&
           (UObjectBaseUtility::GetPathName(param_1,local_48,0), local_48[0] != 0)) {
          FMemory::Free();
        }
        plVar12 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_60 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_60 + 8))(local_60,1);
            }
          }
        }
        puVar9 = (undefined8 *)0x0;
      }
      else {
        local_78 = (longlong *)0x0;
        local_70 = 0;
        iVar7 = FUN_141594550(param_2,&local_78,&DAT_144f89a9c,1);
        if ((0 < iVar7) &&
           (puVar8 = (undefined8 *)FUN_1420825b0(param_1,param_1[7],&local_78,0),
           puVar8 != (undefined8 *)0x0)) {
          local_res20 = puVar8;
          AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x32));
          local_50 = &local_res20;
          local_58 = param_2;
          FUN_14056b880(param_1 + 0x33,local_res18,&local_58,0);
          TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
          AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x3f,&local_res20);
          ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x32));
          puVar9 = puVar8;
        }
        plVar12 = local_78;
        for (iVar7 = (int)local_70; iVar7 != 0; iVar7 = iVar7 + -1) {
          if (*plVar12 != 0) {
            FMemory::Free();
          }
          plVar12 = plVar12 + 2;
        }
        if (local_78 != (longlong *)0x0) {
          FMemory::Free(local_78);
        }
      }
    }
    else {
      puVar9 = (undefined8 *)*puVar11;
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x32));
    }
    return puVar9;
  }
  goto LAB_14208792f;
}



// FUNCTION 142087950 FUN_142087950 body=294 status=ok
// SIG undefined FUN_142087950(void)

undefined8 * FUN_142087950(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  FUN_140ad4c90(param_1,&local_18);
  plVar5 = local_10;
  if (local_18 == 0) {
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
    *(undefined8 *)((longlong)param_2 + 0x14) = 0;
    param_2[3] = 0;
    *(undefined8 *)((longlong)param_2 + 0x24) = 0;
    param_2[5] = 0;
    *(undefined8 *)((longlong)param_2 + 0x34) = 0;
    param_2[7] = 0;
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined8 *)((longlong)param_2 + 0xc) = 0x3f800000;
    *(undefined4 *)((longlong)param_2 + 0x14) = 0;
    *(undefined8 *)((longlong)param_2 + 0x1c) = 0x3f800000;
    *(undefined4 *)((longlong)param_2 + 0x24) = 0;
    *(undefined8 *)((longlong)param_2 + 0x2c) = 0x3f800000;
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)((longlong)param_2 + 0x3c) = 0x3f800000;
  }
  else {
    FUN_14203c0a0(local_18,param_2);
    plVar5 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
          return param_2;
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 142087a80 FUN_142087a80 body=70 status=ok
// SIG undefined FUN_142087a80(void)

undefined1
FUN_142087a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_1420876d0();
  if (lVar2 != 0) {
    cVar1 = FUN_142087ad0(lVar2,param_3,param_4);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142087ad0 FUN_142087ad0 body=584 status=ok
// SIG undefined FUN_142087ad0(void)

undefined8 FUN_142087ad0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined4 local_res20;
  undefined4 local_res24;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48 [2];
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_60 = *(longlong **)(param_1 + 0x30);
      local_68 = 0;
      if (local_60 == (longlong *)0x0) {
LAB_142087b71:
        plVar7 = &local_68;
        bVar4 = true;
        bVar9 = false;
        lVar8 = local_68;
      }
      else {
        LOCK();
        iVar6 = (int)local_60[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_60 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_60[1];
          if (bVar9) {
            *(int *)(local_60 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_60 != (longlong *)0x0) {
              local_68 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_142087b71;
          }
          LOCK();
          iVar6 = (int)local_60[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_60 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_68;
        local_60 = (longlong *)0x0;
        bVar4 = true;
        bVar9 = false;
        lVar8 = 0;
      }
      goto LAB_142087b98;
    }
  }
  plVar7 = &local_58;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_142087b98:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_50;
  if ((bVar9) && (plStack_50 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_50 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  plVar7 = local_60;
  if ((bVar4) && (local_60 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if (lVar8 != 0) {
    FUN_14203c1b0(lVar8,&local_res20);
    *param_2 = local_res20;
    *param_3 = local_res24;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar3 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    return 1;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  UObjectBaseUtility::GetPathName(param_1,local_48,0);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return 0;
}



// FUNCTION 142087d20 ToString body=28 status=ok
// SIG undefined ToString(void)

undefined8 FOnlineSessionInfoEOS::ToString(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x30))();
  return param_2;
}



// FUNCTION 142087d40 FUN_142087d40 body=92 status=ok
// SIG undefined FUN_142087d40(void)

longlong FUN_142087d40(longlong *param_1,undefined4 param_2)

{
  undefined4 local_38 [2];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_38[0] = param_2;
  (**(code **)(*param_1 + 0x158))(param_1,local_38);
  return (int)param_1[0x13] + local_10 + local_18 + local_20 + local_30 + local_28;
}



// FUNCTION 142087db0 FUN_142087db0 body=345 status=ok
// SIG undefined FUN_142087db0(void)

undefined8 FUN_142087db0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong local_18;
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    return *(undefined8 *)(param_1 + 0x38);
  }
  FUN_140ad4c90(param_1,&local_18);
  lVar6 = local_18;
  plVar8 = local_10;
  if (local_18 == 0) goto LAB_142087eb1;
  uVar5 = UPlatformInterfaceBase::GetPrivateStaticClass();
  plVar8 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
    lVar6 = local_18;
  }
  lVar6 = FUN_14203c640(lVar6,uVar5);
  if (lVar6 == 0) {
LAB_142087e5c:
    lVar6 = 0;
  }
  else {
    lVar7 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_142087e5c;
  }
  plVar4 = local_10;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar8 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    plVar8 = local_10;
    if ((int)lVar7 == 1) {
      (**(code **)*local_10)(local_10);
      plVar8 = local_10;
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
        *(longlong *)(param_1 + 0x38) = lVar6;
        goto LAB_142087eb1;
      }
    }
  }
  *(longlong *)(param_1 + 0x38) = lVar6;
LAB_142087eb1:
  plVar4 = local_10;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar8 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return *(undefined8 *)(param_1 + 0x38);
}



// FUNCTION 142087f10 FUN_142087f10 body=61 status=ok
// SIG undefined FUN_142087f10(void)

void FUN_142087f10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_1420876d0();
  if (lVar1 != 0) {
    FUN_142087f50(lVar1,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 142087f50 FUN_142087f50 body=737 status=ok
// SIG undefined FUN_142087f50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142087f50(longlong param_1,float *param_2,float *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  longlong local_150;
  longlong *plStack_148;
  float *local_140;
  longlong local_138 [2];
  undefined1 local_128 [24];
  double local_110;
  double local_108;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_158 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_c8 = 0x3f800000;
  local_b8 = 0x3f80000000000000;
  local_a0 = 0x3f800000;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_98 = 0x3f800000;
  local_88 = 0x3f80000000000000;
  local_70 = 0x3f800000;
  local_60 = 0x3f80000000000000;
  local_54 = 0;
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      local_160 = *(longlong **)(param_1 + 0x30);
      local_168 = 0;
      if (local_160 == (longlong *)0x0) {
LAB_14208807e:
        plVar8 = &local_168;
        bVar4 = true;
        bVar11 = false;
        lVar10 = local_168;
      }
      else {
        LOCK();
        iVar7 = (int)local_160[1];
        bVar11 = iVar7 == 0;
        if (bVar11) {
          *(int *)(local_160 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        while (!bVar11) {
          LOCK();
          bVar11 = iVar7 == (int)local_160[1];
          if (bVar11) {
            *(int *)(local_160 + 1) = iVar7 + 1;
          }
          UNLOCK();
          if (bVar11) {
            if (local_160 != (longlong *)0x0) {
              local_168 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_14208807e;
          }
          LOCK();
          iVar7 = (int)local_160[1];
          bVar11 = iVar7 == 0;
          if (bVar11) {
            *(int *)(local_160 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
        }
        plVar8 = &local_168;
        local_160 = (longlong *)0x0;
        bVar4 = true;
        bVar11 = false;
        lVar10 = 0;
      }
      goto LAB_1420880a7;
    }
  }
  plVar8 = &local_150;
  local_150 = 0;
  plStack_148 = (longlong *)0x0;
  bVar4 = false;
  bVar11 = true;
  lVar10 = 0;
LAB_1420880a7:
  plVar3 = (longlong *)plVar8[1];
  plVar8[1] = 0;
  plVar2 = plStack_148;
  *plVar8 = 0;
  local_140 = param_3;
  if ((bVar11) && (plStack_148 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plStack_148 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_148)(plStack_148);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_148 + 8))(plStack_148,1);
      }
    }
  }
  plVar8 = local_160;
  if ((bVar4) && (local_160 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_160 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_160)(local_160);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_160 + 8))(local_160,1);
      }
    }
  }
  if ((lVar10 == 0) || (cVar6 = FUN_142039630(lVar10,local_128), cVar6 == '\0')) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar3 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    UObjectBaseUtility::GetPathName(param_1,local_138,0);
    if (local_138[0] != 0) {
      FMemory::Free();
    }
    uVar9 = 0;
  }
  else {
    *param_2 = (float)local_110;
    *local_140 = (float)local_108;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar3 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    uVar9 = 1;
  }
  return uVar9;
}



// FUNCTION 142088270 ToString body=28 status=ok
// SIG undefined ToString(void)

undefined8 FOnlineSessionInfoEOS::ToString(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))();
  return param_2;
}



// FUNCTION 142088290 FUN_142088290 body=94 status=ok
// SIG undefined FUN_142088290(void)

undefined8 FUN_142088290(longlong param_1)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  
  if (1 < *(int *)(param_1 + 0x30)) {
    if (*(int *)(param_1 + 0x30) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = *(undefined2 **)(param_1 + 0x28);
    }
    uVar1 = UMaterialParameterCollectionInstance::GetPrivateStaticClass();
    uVar1 = FUN_141799c90(uVar1,0,puVar2,0,0,0,1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 142088300 GetTextureFormatMapping body=15 status=ok
// SIG undefined GetTextureFormatMapping(void)

undefined8 Scaleform::Render::RHI::Texture::GetTextureFormatMapping(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8);
  }
  return 0;
}


