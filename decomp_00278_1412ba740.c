// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1412ba740 FUN_1412ba740 body=713 status=ok
// SIG undefined FUN_1412ba740(void)

undefined8 FUN_1412ba740(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  bVar12 = false;
  lVar7 = FWeakObjectPtr::Get(param_1 + 0xb2);
  if (lVar7 != 0) {
    lVar8 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      uVar9 = FUN_1412ba5d0(param_1);
      return uVar9;
    }
  }
  if (param_1[0x93] == 0) {
    return 0;
  }
  lVar7 = *(longlong *)(param_1[0x93] + 0x118);
  if (lVar7 != 0) {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (*(longlong *)(lVar7 + 0x848) != 0)) {
      FUN_1413f82e0();
    }
  }
  plVar10 = (longlong *)(**(code **)(*param_1 + 0x750))(param_1);
  if (plVar10 == (longlong *)0x0) {
    return 0;
  }
  lVar7 = FUN_1413ffe00();
  if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return 0;
  }
  lVar7 = (**(code **)(*plVar10 + 0x680))(plVar10);
  if (lVar7 == 0) {
    return 0;
  }
  lVar8 = FUN_1422312c0(param_1);
  if (lVar8 == 0) {
    return 0;
  }
  lVar11 = FUN_14141f270();
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
      != lVar11 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return 0;
  }
  plVar10 = *(longlong **)(lVar7 + 0x4c0);
  lVar7 = *(longlong *)(lVar7 + 0x4b8);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  if (lVar7 != 0) {
    local_38 = (undefined4)lVar7;
    uStack_34 = (undefined4)((ulonglong)lVar7 >> 0x20);
    uStack_30 = SUB84(plVar10,0);
    uStack_2c = (undefined4)((ulonglong)plVar10 >> 0x20);
    bVar12 = true;
    local_28 = local_38;
    uStack_24 = uStack_34;
    uStack_20 = uStack_30;
    uStack_1c = uStack_2c;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    cVar6 = FUN_140ba7eb0(lVar8,&local_28);
    if (cVar6 != '\0') {
      bVar5 = true;
      goto LAB_1412ba92f;
    }
  }
  bVar5 = false;
LAB_1412ba92f:
  if ((bVar12) && (plVar4 = (longlong *)CONCAT44(uStack_1c,uStack_20), plVar4 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  if (!bVar5) {
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar10 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    return 0;
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar10 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return 1;
}



// FUNCTION 1412baa10 FUN_1412baa10 body=776 status=ok
// SIG undefined FUN_1412baa10(void)

undefined8 FUN_1412baa10(longlong *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined8 local_res18 [2];
  
  lVar4 = FUN_1412c3210();
  if (lVar4 == 0) {
    return 0;
  }
  lVar5 = FUN_142f477c0();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (!bVar10) {
    lVar5 = FUN_142f478b0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (!bVar10) {
      return 0;
    }
    lVar6 = lVar4 + 0xf0;
    lVar5 = FWeakObjectPtr::Get(lVar6);
    if (lVar5 != 0) {
      return 1;
    }
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar4 + 0xf8)) {
      return 0;
    }
    if (*(longlong *)(lVar4 + 0x100) == 0) {
      return 0;
    }
    lVar5 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar6,lVar5);
    if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar4 + 0xf8) = DAT_1464b56f4;
    }
    lVar4 = FWeakObjectPtr::Get(lVar6);
    bVar10 = lVar4 == 0;
    goto LAB_1412bacfb;
  }
  if ((param_1[0x93] == 0) || (lVar5 = *(longlong *)(param_1[0x93] + 0x118), lVar5 == 0)) {
LAB_1412bab2e:
    plVar7 = (longlong *)0x0;
    cVar1 = '\0';
    lVar5 = 0;
LAB_1412bab37:
    cVar2 = '\0';
  }
  else {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (!bVar10) goto LAB_1412bab2e;
    plVar7 = (longlong *)FUN_140b82ca0(lVar5);
    cVar1 = FUN_140cee9c0(lVar5);
    lVar6 = *(longlong *)(lVar5 + 0x848);
    if (lVar6 == 0) goto LAB_1412bab37;
    lVar8 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (!bVar10) goto LAB_1412bab37;
    cVar2 = UKeyLabel::GetDisplayNameVisibility_Implementation(lVar6);
  }
  lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar6 == 0) {
LAB_1412bab99:
    lVar6 = 0;
  }
  else {
    lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar6 = *(longlong *)(lVar6 + 0x140);
    if (lVar6 == 0) goto LAB_1412bab99;
    lVar8 = FUN_141425c60();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (!bVar10) goto LAB_1412bab99;
  }
  cVar3 = FUN_142f432b0(lVar4,param_1);
  if (((cVar3 == '\0') && (lVar6 != 0)) && (cVar3 = FUN_140c08740(lVar6,lVar4,0), cVar3 == '\0')) {
    return 0;
  }
  if (plVar7 == (longlong *)0x0) {
    return 0;
  }
  cVar3 = (**(code **)(*plVar7 + 0x718))(plVar7);
  if (cVar3 == '\0') {
    return 0;
  }
  if (cVar1 == '\0') {
    return 0;
  }
  if (cVar2 != '\0') {
    return 0;
  }
  local_res18[0] = *(undefined8 *)(lVar4 + 0x30);
  uVar9 = thunk_FUN_1422ca050();
  cVar1 = FUN_140a0b540(uVar9,local_res18);
  if (cVar1 == '\0') {
    return 0;
  }
  cVar1 = FUN_142f3e730(lVar4,lVar5);
  if (cVar1 == '\0') {
    return 0;
  }
  cVar1 = FOutputDevice::CanBeUsedOnAnyThread();
  if (cVar1 != '\0') {
    return 1;
  }
  uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  cVar1 = FUN_142f43380(lVar4,uVar9,0);
  bVar10 = cVar1 == '\0';
LAB_1412bacfb:
  if (bVar10) {
    return 0;
  }
  return 1;
}



// FUNCTION 1412bad20 FUN_1412bad20 body=401 status=ok
// SIG undefined FUN_1412bad20(void)

ulonglong FUN_1412bad20(longlong param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong local_28 [2];
  
  bVar7 = false;
  if (*(longlong *)(param_1 + 0x498) == 0) goto LAB_1412bae96;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x498) + 0x118);
  if (lVar5 == 0) {
LAB_1412badec:
    cVar2 = '\0';
LAB_1412badef:
    cVar3 = '\0';
  }
  else {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1412badec;
    cVar2 = FUN_140cee9c0(lVar5);
    lVar5 = *(longlong *)(lVar5 + 0x848);
    if (lVar5 == 0) goto LAB_1412badef;
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1412badef;
    cVar3 = UKeyLabel::GetDisplayNameVisibility_Implementation(lVar5);
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x590);
  if (lVar5 == 0) {
LAB_1412bae96:
    uVar6 = FUN_1414f5020(param_1);
    return uVar6;
  }
  lVar4 = FUN_14148cad0();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(ulonglong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88U)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_1412bae96;
  if ((cVar2 == '\0') || (cVar3 != '\0')) {
    return lVar4 + 0x88U & 0xffffffffffffff00;
  }
  if (*(char *)(param_1 + 0x630) != '\0') {
    bVar7 = true;
    lVar4 = FUN_141224090(lVar5,local_28);
    if ((0 < *(int *)(lVar4 + 8)) && (*(char *)(lVar5 + 0xbda) == '\0')) {
      uVar6 = 1;
      goto LAB_1412bae78;
    }
  }
  uVar6 = 0;
LAB_1412bae78:
  if (!bVar7) {
    return uVar6;
  }
  if (local_28[0] == 0) {
    return uVar6;
  }
  FMemory::Free();
  return uVar6;
}



// FUNCTION 1412baec0 FUN_1412baec0 body=234 status=ok
// SIG undefined FUN_1412baec0(void)

void FUN_1412baec0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 local_28 [32];
  
  cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(param_1 + 0x754,param_1 + 0x788);
  if (cVar3 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x118);
    lVar6 = 0;
    if (lVar1 != 0) {
      lVar4 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar6 = *(longlong *)(lVar1 + 0x990);
      }
    }
    if (lVar6 != 0) {
      *(undefined4 *)(param_1 + 0xd14) = 0xffffffff;
      uVar5 = FSoftObjectPath::FSoftObjectPath(local_28,lVar6);
      FSoftObjectPath::operator=(param_1 + 0xa10,uVar5);
      FWeakObjectPtr::operator=(param_1 + 0xa00,lVar6);
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0xa08) = DAT_1464b56f4;
    }
    FUN_1414f8ef0(param_1);
  }
  return;
}



// FUNCTION 1412bafd0 FUN_1412bafd0 body=1111 status=ok
// SIG undefined FUN_1412bafd0(void)

void FUN_1412bafd0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 uVar9;
  longlong local_res10;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_30;
  
  local_res10 = param_2;
  if ((((*(char *)(param_1 + 0xd24) != '\0') ||
       (cVar2 = FUN_140bf9670(0,param_1 + 0x754), cVar2 != '\0')) ||
      (lVar5 = FWeakObjectPtr::Get(), *(longlong *)(lVar5 + 0xc0) == 0)) && (param_2 != 0)) {
    plVar1 = (longlong *)(param_1 + 0x7c8);
    iVar3 = FUN_1412afb10(plVar1,&local_res10);
    if ((iVar3 < 0) || (*(int *)(param_1 + 2000) <= iVar3)) {
      plVar1 = (longlong *)(param_1 + 0x7b8);
      iVar3 = FUN_1412afb10(plVar1,&local_res10);
      if ((iVar3 < 0) || (*(int *)(param_1 + 0x7c0) <= iVar3)) {
        FUN_1412b6800(param_1,param_2);
      }
      else {
        lVar5 = (longlong)iVar3 * 0x270;
        FUN_1412cac10(*plVar1 + lVar5,param_1,0);
        cVar2 = FUN_140bf9690(0,*plVar1 + 0x18 + lVar5);
        if (cVar2 != '\0') {
          lVar6 = FWeakObjectPtr::Get(*plVar1 + 0x18 + lVar5);
          uVar7 = FUN_142cc0d70(param_2);
          cVar2 = FUN_1405dc8f0(lVar6 + 0x590,uVar7);
          if (cVar2 != '\0') {
            plVar8 = (longlong *)FWeakObjectPtr::Get(*plVar1 + 0x18 + lVar5);
            lVar6 = *plVar8;
            uVar7 = FUN_142cc0d70(param_2);
            (**(code **)(lVar6 + 0x718))(plVar8,uVar7);
          }
        }
        if (((*(char *)(*plVar1 + 0x25b + lVar5) == '\0') && (*(longlong *)(param_1 + 0x938) != 0))
           && ((0.0 < *(float *)(param_2 + 0x764) && (*(char *)(param_2 + 0x70c) != '\0')))) {
          local_48 = *(undefined4 *)(param_2 + 0x220);
          uStack_44 = *(undefined4 *)(param_2 + 0x224);
          local_40 = *(undefined4 *)(param_2 + 0x228);
          local_30 = local_40;
          FUN_1412ac250(*(longlong *)(param_1 + 0x938),&local_48,
                        CONCAT44(*(undefined4 *)(param_2 + 0x768),*(float *)(param_2 + 0x764)));
          lVar6 = FWeakObjectPtr::Get(*plVar1 + 0x18 + lVar5);
          *(undefined1 *)(lVar6 + 0x599) = 0;
          if (((*(char *)(param_1 + 0x5aa) == '\0') ||
              (lVar6 = *plVar1, *(char *)(lVar6 + 0x9b + lVar5) == '\0')) &&
             ((*(char *)(param_1 + 0x5a8) == '\0' ||
              ((*(char *)(param_1 + 0xd20) != '\0' ||
               (lVar6 = *plVar1, *(char *)(lVar6 + 0x9c + lVar5) == '\0')))))) {
            lVar6 = *plVar1;
            uVar9 = 0;
          }
          else {
            uVar9 = 1;
          }
          uVar7 = FWeakObjectPtr::Get(lVar5 + 0x18 + lVar6);
          FUN_1412cf480(param_1,uVar7,uVar9,*(undefined1 *)(param_1 + 0x5a8));
        }
      }
    }
    else {
      lVar5 = (longlong)iVar3 * 0x270;
      FUN_1412cac10(*plVar1 + lVar5,param_1,0);
      if ((((*(char *)(*plVar1 + 0x25b + lVar5) == '\0') && (*(longlong *)(param_1 + 0x938) != 0))
          && (0.0 < *(float *)(param_2 + 0x764))) && (*(char *)(param_2 + 0x70c) != '\0')) {
        local_48 = *(undefined4 *)(param_2 + 0x220);
        uStack_44 = *(undefined4 *)(param_2 + 0x224);
        local_40 = *(undefined4 *)(param_2 + 0x228);
        local_30 = local_40;
        FUN_1412ac250(*(longlong *)(param_1 + 0x938),&local_48,
                      CONCAT44(*(undefined4 *)(param_2 + 0x768),*(float *)(param_2 + 0x764)));
        lVar6 = FWeakObjectPtr::Get(*plVar1 + 0x18 + lVar5);
        *(undefined1 *)(lVar6 + 0x599) = 0;
        if (((*(char *)(param_1 + 0x5aa) == '\0') ||
            (lVar6 = *plVar1, *(char *)(lVar6 + 0x9b + lVar5) == '\0')) &&
           ((*(char *)(param_1 + 0x5a8) == '\0' ||
            ((*(char *)(param_1 + 0xd20) != '\0' ||
             (lVar6 = *plVar1, *(char *)(lVar6 + 0x9c + lVar5) == '\0')))))) {
          lVar6 = *plVar1;
          uVar9 = 0;
        }
        else {
          uVar9 = 1;
        }
        uVar7 = FWeakObjectPtr::Get(lVar5 + 0x18 + lVar6);
        FUN_1412cf480(param_1,uVar7,uVar9,*(undefined1 *)(param_1 + 0x5a8));
      }
      if (*(char *)(param_2 + 0x77c) == '\0') {
        *(undefined1 *)(*plVar1 + 0x98 + lVar5) = 1;
        cVar2 = FUN_140bf9690(0,*plVar1 + 0x18 + lVar5);
        if (cVar2 != '\0') {
          plVar8 = (longlong *)FWeakObjectPtr::Get(*plVar1 + 0x18 + lVar5);
          lVar6 = *plVar8;
          uVar7 = FUN_142cc0d70(param_2);
          (**(code **)(lVar6 + 0x718))(plVar8,uVar7);
        }
        lVar6 = *plVar1;
        plVar8 = (longlong *)(param_1 + 0x7b8);
        iVar4 = FUN_1412afd80(plVar8,lVar6 + lVar5);
        if (iVar4 == -1) {
          iVar4 = *(int *)(param_1 + 0x7c0);
          *(int *)(param_1 + 0x7c0) = iVar4 + 1;
          if (*(int *)(param_1 + 0x7c4) < iVar4 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<624,16>_>,FDefaultAllocator>::
            ResizeGrow(plVar8,iVar4);
          }
          FUN_1412b0b60((longlong)iVar4 * 0x270 + *plVar8,lVar6 + lVar5);
        }
        FUN_140fd51c0(plVar1,iVar3,1,1);
      }
    }
  }
  return;
}



// FUNCTION 1412bb430 FUN_1412bb430 body=179 status=ok
// SIG undefined FUN_1412bb430(void)

void FUN_1412bb430(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 local_res10;
  
  local_res10 = param_2;
  iVar1 = FUN_1412afb10(param_1 + 0x7c8,&local_res10);
  uVar2 = (ulonglong)iVar1;
  if ((iVar1 < 0) || (*(int *)(param_1 + 2000) <= iVar1)) {
    iVar1 = FUN_1412afb10(param_1 + 0x7b8,&local_res10);
    uVar2 = (ulonglong)iVar1;
    if (iVar1 < 0) {
      return;
    }
    if (*(int *)(param_1 + 0x7c0) <= iVar1) {
      return;
    }
    FUN_1412d2bb0(uVar2 * 0x270 + *(longlong *)(param_1 + 0x7b8),param_1);
    param_1 = param_1 + 0x7b8;
  }
  else {
    FUN_1412d2bb0(uVar2 * 0x270 + *(longlong *)(param_1 + 0x7c8),param_1);
    param_1 = param_1 + 0x7c8;
  }
  FUN_140fd51c0(param_1,uVar2 & 0xffffffff,1,1);
  return;
}



// FUNCTION 1412bb510 FUN_1412bb510 body=154 status=ok
// SIG undefined FUN_1412bb510(void)

void FUN_1412bb510(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x7c8);
  lVar2 = (longlong)*(int *)(param_1 + 2000) * 0x270 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x270) {
    FUN_1412cac10(lVar1,param_1,0);
  }
  lVar1 = *(longlong *)(param_1 + 0x7b8);
  lVar2 = (longlong)*(int *)(param_1 + 0x7c0) * 0x270 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x270) {
    FUN_1412cac10(lVar1,param_1,0);
  }
  return;
}



// FUNCTION 1412bb5b0 FUN_1412bb5b0 body=61 status=ok
// SIG undefined FUN_1412bb5b0(void)

void FUN_1412bb5b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  uVar1 = FUN_1412c3780(&local_18,param_1);
  FUN_1412c7e10(param_1,uVar1,1);
  FUN_1412d27e0(param_1);
  return;
}



// FUNCTION 1412bb5f0 FUN_1412bb5f0 body=1826 status=ok
// SIG undefined FUN_1412bb5f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412bb5f0(longlong param_1)

{
  byte *pbVar1;
  uint *puVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_88 [32];
  int local_68;
  int local_64;
  undefined8 local_60;
  float local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if ((*(longlong *)(param_1 + 0x940) == 0) && (*(longlong *)(param_1 + 0x948) == 0)) {
    return;
  }
  lVar9 = *(longlong *)(param_1 + 0x118);
  lVar14 = 0;
  lVar15 = lVar14;
  if (lVar9 == 0) {
LAB_1412bb6ee:
    if ((DAT_146b17150 == 0) ||
       ((*(longlong *)(DAT_146b17150 + 0x7b0) == 0 ||
        (plVar3 = *(longlong **)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0xb0),
        plVar3 == (longlong *)0x0)))) {
      iVar13 = (int)*(float *)(param_1 + 0x68c);
      iVar12 = (int)*(float *)(param_1 + 0x690);
      local_68 = iVar13;
      local_64 = iVar12;
    }
    else {
      piVar8 = (int *)(**(code **)(*plVar3 + 0x20))(plVar3,&local_60);
      iVar13 = *piVar8;
      iVar12 = piVar8[1];
      local_68 = iVar13;
      local_64 = iVar12;
    }
  }
  else {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((!bVar4) || (lVar7 = FUN_14270bb10(lVar9), lVar15 = lVar9, lVar7 == 0)) goto LAB_1412bb6ee;
    FUN_14270dc70(lVar9,&local_68,&local_64);
    iVar13 = (int)((float)local_68 * *(float *)(lVar7 + 0x80));
    iVar12 = (int)((float)local_64 * *(float *)(lVar7 + 0x84));
  }
  fVar16 = 1.0;
  if (DAT_146b17150 != 0) {
    FUN_142874670(DAT_146b17150,&local_60);
    fVar16 = local_58;
    if ((int)local_60 != 3) {
      fVar16 = (float)FUN_142526000();
    }
  }
  iVar6 = -((int)ROUND(-0.5 - (fVar16 + fVar16) * (float)iVar12) >> 1);
  iVar11 = -((int)ROUND(-0.5 - (fVar16 + fVar16) * (float)iVar13) >> 1);
  if (iVar11 == 0) {
    return;
  }
  if (iVar6 == 0) {
    return;
  }
  if ((iVar11 == *(int *)(param_1 + 0xcf0)) && (iVar6 == *(int *)(param_1 + 0xcf4))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return;
  }
  *(int *)(param_1 + 0xce8) = iVar13;
  *(int *)(param_1 + 0xcec) = iVar12;
  *(int *)(param_1 + 0xcf0) = iVar11;
  *(int *)(param_1 + 0xcf4) = iVar6;
  cVar5 = FUN_142dcfc60(lVar15);
  if (cVar5 == '\x02') {
    fVar18 = *(float *)(param_1 + 0x9e0);
    if (fVar18 <= 0.0) {
      fVar17 = 1.0 / (1.0 - fVar18);
      *(float *)(param_1 + 0x9f0) = fVar17;
      fVar18 = (fVar16 + fVar16) * (float)*(int *)(param_1 + 0xce8) * (1.0 - fVar18);
      *(float *)(param_1 + 0x9e8) = 1.0 - fVar17;
    }
    else {
      fVar18 = fVar18 + 1.0;
      *(undefined4 *)(param_1 + 0x9e8) = 0;
      *(float *)(param_1 + 0x9f0) = 1.0 / fVar18;
      fVar18 = (float)*(int *)(param_1 + 0xce8) * fVar16 * (fVar18 + fVar18);
    }
    *(int *)(param_1 + 0xcf0) = -((int)ROUND(-0.5 - fVar18) >> 1);
    fVar18 = *(float *)(param_1 + 0x9e4);
    if (fVar18 <= 0.0) {
      fVar16 = (fVar16 + fVar16) * (float)*(int *)(param_1 + 0xcec);
LAB_1412bba00:
      fVar17 = 1.0 / (1.0 - fVar18);
      *(float *)(param_1 + 0x9f4) = fVar17;
      fVar16 = -0.5 - fVar16 * (1.0 - fVar18);
      *(float *)(param_1 + 0x9ec) = 1.0 - fVar17;
    }
    else {
      fVar18 = fVar18 + 1.0;
      *(undefined4 *)(param_1 + 0x9ec) = 0;
      *(float *)(param_1 + 0x9f4) = 1.0 / fVar18;
      fVar16 = -0.5 - (float)*(int *)(param_1 + 0xcec) * fVar16 * (fVar18 + fVar18);
    }
LAB_1412bba27:
    *(int *)(param_1 + 0xcf4) = -((int)ROUND(fVar16) >> 1);
  }
  else {
    cVar5 = FUN_142dcfc60(lVar15);
    if (cVar5 == '\x03') {
      fVar18 = *(float *)(param_1 + 0x9d8);
      if (fVar18 <= 0.0) {
        fVar17 = 1.0 / (1.0 - fVar18);
        *(float *)(param_1 + 0x9f0) = fVar17;
        fVar18 = (fVar16 + fVar16) * (float)*(int *)(param_1 + 0xce8) * (1.0 - fVar18);
        *(float *)(param_1 + 0x9e8) = 1.0 - fVar17;
      }
      else {
        fVar18 = fVar18 + 1.0;
        *(undefined4 *)(param_1 + 0x9e8) = 0;
        *(float *)(param_1 + 0x9f0) = 1.0 / fVar18;
        fVar18 = (float)*(int *)(param_1 + 0xce8) * fVar16 * (fVar18 + fVar18);
      }
      *(int *)(param_1 + 0xcf0) = -((int)ROUND(-0.5 - fVar18) >> 1);
      fVar18 = *(float *)(param_1 + 0x9dc);
      if (fVar18 <= 0.0) {
        fVar16 = (fVar16 + fVar16) * (float)*(int *)(param_1 + 0xcec);
        goto LAB_1412bba00;
      }
      fVar18 = fVar18 + 1.0;
      *(undefined4 *)(param_1 + 0x9ec) = 0;
      *(float *)(param_1 + 0x9f4) = 1.0 / fVar18;
      fVar16 = -0.5 - (fVar18 + fVar18) * (float)*(int *)(param_1 + 0xcec) * fVar16;
      goto LAB_1412bba27;
    }
  }
  if (*(longlong *)(param_1 + 0x940) != 0) {
    if (*(longlong *)(param_1 + 0x950) == 0) {
      uVar10 = FUN_1412d73d0(*(undefined4 *)(param_1 + 0xcf0),*(undefined4 *)(param_1 + 0xcf4),9);
      *(undefined8 *)(param_1 + 0x950) = uVar10;
    }
    else {
      FUN_14287a580(*(longlong *)(param_1 + 0x950),*(undefined4 *)(param_1 + 0xcf0),
                    *(undefined4 *)(param_1 + 0xcf4));
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x940) + 0x3d0) = *(undefined8 *)(param_1 + 0x950);
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      lVar14 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x588);
    }
    if ((lVar14 != 0) && (*(longlong *)(lVar14 + 0xf8) != 0)) {
      lVar9 = *(longlong *)(param_1 + 0x960);
      if (lVar9 == 0) {
        local_60 = 0;
        lVar9 = UKismetMaterialLibrary::CreateDynamicMaterialInstance
                          (param_1,*(longlong *)(lVar14 + 0xf8),0);
        *(longlong *)(param_1 + 0x960) = lVar9;
        if (lVar9 == 0) goto LAB_1412bbb11;
      }
      FUN_1425a28b0(lVar9,*(undefined8 *)(lVar14 + 0x100),*(undefined8 *)(param_1 + 0x950));
    }
  }
LAB_1412bbb11:
  if ((*(longlong *)(param_1 + 0x948) != 0) && (lVar15 != 0)) {
    if ((*(int *)(param_1 + 0x708) == DAT_1468b5ca0) && (*(int *)(param_1 + 0x70c) == DAT_1468b5ca4)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      *(int *)(param_1 + 0xcf8) = *(int *)(param_1 + 0x708);
      iVar13 = *(int *)(param_1 + 0x70c);
    }
    else {
      fVar16 = (float)local_64;
      *(int *)(param_1 + 0xcf8) =
           (int)((float)-((int)ROUND(-0.5 - (fVar16 * 1.7777778 + fVar16 * 1.7777778)) >> 1) *
                *(float *)(param_1 + 0x714));
      iVar13 = (int)((float)-((int)ROUND(-0.5 - (fVar16 + fVar16)) >> 1) *
                    *(float *)(param_1 + 0x718));
    }
    *(int *)(param_1 + 0xcfc) = iVar13;
    lVar9 = *(longlong *)(lVar15 + 0x1ac8);
    if (lVar9 == 0) {
      lVar9 = *(longlong *)(param_1 + 0x958);
    }
    else {
      *(longlong *)(param_1 + 0x958) = lVar9;
    }
    if (((lVar9 == 0) || (*(int *)(lVar9 + 0xc0) != *(int *)(param_1 + 0xcf8))) ||
       (*(int *)(lVar9 + 0xc4) != *(int *)(param_1 + 0xcfc))) {
      FUN_1423957d0(*(undefined8 *)(param_1 + 0x948),1);
      if (*(longlong *)(param_1 + 0x958) == 0) {
        uVar10 = FUN_1412d73d0(*(undefined4 *)(param_1 + 0xcf8),*(undefined4 *)(param_1 + 0xcfc),9);
        *(undefined8 *)(param_1 + 0x958) = uVar10;
      }
      else {
        FUN_14287a580(*(longlong *)(param_1 + 0x958),*(undefined4 *)(param_1 + 0xcf8),
                      *(undefined4 *)(param_1 + 0xcfc));
      }
      uVar10 = 0;
      if (*(longlong *)(param_1 + 0x958) != 0) {
        pbVar1 = (byte *)(*(longlong *)(param_1 + 0x958) + 0x4b);
        *pbVar1 = *pbVar1 | 1;
        puVar2 = (uint *)(*(longlong *)(param_1 + 0x958) + 0xdc);
        *puVar2 = *puVar2 | 1;
        uVar10 = *(undefined8 *)(param_1 + 0x958);
      }
      *(undefined8 *)(lVar15 + 0x1ac8) = uVar10;
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x948) + 0x3d0) = *(undefined8 *)(param_1 + 0x958);
    lVar9 = FUN_140cff1b0(lVar15);
    if (lVar9 != 0) {
      lVar9 = FUN_140cff1b0(lVar15);
      cVar5 = FWeakObjectPtr::IsValid(lVar9 + 0x728);
      if (cVar5 != '\0') {
        lVar9 = FUN_140cff1b0(lVar15);
        uVar10 = FWeakObjectPtr::Get(lVar9 + 0x728);
        FUN_140fd6dd0(uVar10);
      }
    }
  }
  return;
}



// FUNCTION 1412bbd30 thunk_FUN_1412cc170 body=5 status=ok
// SIG undefined thunk_FUN_1412cc170(void)

void thunk_FUN_1412cc170(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  lVar6 = FWeakObjectPtr::Get(param_1 + 0xb2);
  if (lVar6 == 0) {
    return;
  }
  lVar7 = FUN_14148cad0();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  bVar3 = false;
  bVar4 = false;
  if (*(longlong *)(lVar6 + 0x8d8) != 0) {
    *(undefined1 *)(param_1 + 0xc6) = 1;
    if (param_1[0xba] != 0) {
      (**(code **)(*param_1 + 0x730))(param_1);
    }
    goto LAB_1412cc321;
  }
  FUN_141223c50(lVar6,&uStack_38,0);
  if (iStack_30 == 0) {
    (**(code **)(*param_1 + 0x730))(param_1,param_1[0xbd]);
  }
  else {
    if (param_1[0x93] == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(longlong *)(param_1[0x93] + 0x118);
    }
    if (lVar6 != 0) {
      plVar9 = (longlong *)CONCAT44(uStack_34,uStack_38);
      plVar1 = plVar9 + iStack_30;
      if (plVar9 == plVar1) {
LAB_1412cc2f5:
        lVar6 = param_1[0xbc];
      }
      else {
        do {
          plVar2 = (longlong *)*plVar9;
          if (plVar2 != (longlong *)0x0) {
            cVar5 = (**(code **)(*plVar2 + 0x780))(plVar2);
            if (cVar5 == '\0') {
              uVar8 = UCircularThrobber::GetPrivateStaticClass();
              lVar7 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar8);
              if ((lVar7 != 0) && (cVar5 = FUN_142dee910(lVar7,lVar6), cVar5 != '\0')) {
                bVar4 = true;
                break;
              }
            }
            else {
              bVar3 = true;
            }
          }
          plVar9 = plVar9 + 1;
        } while (plVar9 != plVar1);
        if (bVar3) {
          lVar6 = param_1[0xbb];
        }
        else {
          if (!bVar4) goto LAB_1412cc2f5;
          lVar6 = param_1[0xbe];
        }
      }
      (**(code **)(*param_1 + 0x730))(param_1,lVar6);
    }
  }
  if (CONCAT44(uStack_34,uStack_38) != 0) {
    FMemory::Free();
  }
LAB_1412cc321:
  if ((param_1[0xa7] != 0) && (param_1[0xbf] != 0)) {
    if ((bVar3) || ((char)param_1[0xc6] != '\0')) {
      uStack_38 = (undefined4)param_1[0xc2];
      uStack_34 = *(undefined4 *)((longlong)param_1 + 0x614);
      iStack_30 = (int)param_1[0xc3];
      uStack_2c = *(undefined4 *)((longlong)param_1 + 0x61c);
      lVar6 = param_1[0xbf];
    }
    else {
      lVar6 = param_1[0xbf];
      if (bVar4) {
        uStack_38 = (undefined4)param_1[0xc0];
        uStack_34 = *(undefined4 *)((longlong)param_1 + 0x604);
        iStack_30 = (int)param_1[0xc1];
        uStack_2c = *(undefined4 *)((longlong)param_1 + 0x60c);
      }
      else {
        uStack_38 = (undefined4)param_1[0xc4];
        uStack_34 = *(undefined4 *)((longlong)param_1 + 0x624);
        iStack_30 = (int)param_1[0xc5];
        uStack_2c = *(undefined4 *)((longlong)param_1 + 0x62c);
      }
    }
    FUN_1425a2be0(param_1[0xa7],lVar6,&uStack_38);
  }
  return;
}



// FUNCTION 1412bbd40 FUN_1412bbd40 body=637 status=ok
// SIG undefined FUN_1412bbd40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412bbd40(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44 [12];
  undefined1 local_38 [16];
  undefined1 local_28 [32];
  
  iVar3 = *(int *)(param_1 + 0xd14) + 1;
  *(int *)(param_1 + 0xd14) = iVar3;
  if ((iVar3 < 0) || (*(int *)(param_1 + 0xcc8) <= iVar3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                      (param_1 + 0x754,param_1 + 0x788);
    if (cVar2 == '\0') {
      if (*(int *)(param_1 + 0xcc8) < 1) {
        *(undefined4 *)(param_1 + 0xd14) = 0xffffffff;
      }
      else {
        *(undefined4 *)(param_1 + 0xd14) = 0;
        uVar4 = FUN_1412c2e90(*(undefined8 *)(param_1 + 0xcc0),local_38);
        FUN_1412be250(param_1,uVar4);
      }
    }
    else {
      cVar2 = FUN_140bf9690(0,param_1 + 0x978);
      if (((cVar2 == '\0') ||
          (lVar5 = FWeakObjectPtr::Get(param_1 + 0x978), *(char *)(lVar5 + 0x598) == '\0')) ||
         (*(int *)(param_1 + 0xd14) != *(int *)(param_1 + 0xcc8))) {
        cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                          (param_1 + 0x754,param_1 + 0x788);
        if (cVar2 != '\0') {
          lVar5 = *(longlong *)(param_1 + 0x118);
          lVar8 = 0;
          if (lVar5 != 0) {
            lVar7 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              lVar8 = *(longlong *)(lVar5 + 0x990);
            }
          }
          if (lVar8 != 0) {
            *(undefined4 *)(param_1 + 0xd14) = 0xffffffff;
            uVar4 = FSoftObjectPath::FSoftObjectPath(local_28,lVar8);
            FSoftObjectPath::operator=(param_1 + 0xa10,uVar4);
            FWeakObjectPtr::operator=(param_1 + 0xa00,lVar8);
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 0xa08) = DAT_1464b56f4;
          }
          FUN_1414f8ef0(param_1);
        }
        *(undefined4 *)(param_1 + 0xd14) = 0xffffffff;
      }
      else {
        lVar5 = FWeakObjectPtr::Get(param_1 + 0x978);
        lVar5 = *(longlong *)(lVar5 + 0x168);
        if (lVar5 == 0) {
          local_54 = DAT_1468b5d98;
          puVar6 = &local_5c;
          local_5c = _DAT_1468b5d90;
        }
        else {
          puVar6 = (undefined8 *)&local_68;
          local_68 = *(undefined4 *)(lVar5 + 0x220);
          local_60 = *(undefined4 *)(lVar5 + 0x228);
          uStack_64 = *(undefined4 *)(lVar5 + 0x224);
        }
        local_50 = *puVar6;
        local_48 = *(undefined4 *)(puVar6 + 1);
        FUN_1412be250(param_1,&local_50);
      }
    }
    return;
  }
  uVar4 = FUN_1412c2e90((longlong)iVar3 * 0x270 + *(longlong *)(param_1 + 0xcc0),local_44);
  FUN_1412be250(param_1,uVar4);
  return;
}



// FUNCTION 1412bbfc0 FUN_1412bbfc0 body=502 status=ok
// SIG undefined FUN_1412bbfc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412bbfc0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    lVar1 = FUN_142dcdcd0(lVar1);
    if (lVar1 == 0) {
      local_a0 = FUN_1412bbfc0;
      local_a8 = 0;
      uStack_98 = 0;
      uVar2 = AActor::GetWorldTimerManager(param_1);
      plVar3 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar3 + 1,param_1);
        *(undefined4 *)(plVar3 + 2) = (undefined4)local_a0;
        *(undefined4 *)((longlong)plVar3 + 0x14) = local_a0._4_4_;
        *(undefined4 *)(plVar3 + 3) = uStack_98;
        *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_94;
        lVar1 = FDelegateHandle::GenerateNewID();
        plVar3[5] = lVar1;
        *plVar3 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_88 = 0;
      local_80 = 0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_88);
      }
      FWeakObjectPtr::operator=(local_78,0);
      local_b0 = 0xbf800000;
      local_b8 = 0;
      local_70 = 0;
      local_38 = (longlong *)0x0;
      local_28 = 0;
      local_68 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar2,&local_a8,&local_88,0x3dcccccd);
      if (local_28 != 0) {
        plVar4 = local_58;
        if (local_38 != (longlong *)0x0) {
          plVar4 = local_38;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        lVar1 = FMemory::Realloc(plVar3,0,0);
        if (lVar1 != 0) {
          FMemory::Free(lVar1);
        }
      }
    }
    else {
      plVar3 = param_1 + 0x8d;
      if (param_1 == (longlong *)0x0) {
        plVar3 = (longlong *)0x0;
      }
      FUN_142dd81a0(lVar1,plVar3);
    }
  }
  return;
}



// FUNCTION 1412bc1c0 FUN_1412bc1c0 body=646 status=ok
// SIG undefined FUN_1412bc1c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412bc1c0(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
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
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar3 = FUN_1422312c0();
  if (lVar3 != 0) {
    lVar4 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar3 = FUN_140bb7440(lVar3), lVar3 != 0)) {
      local_b8 = FUN_1412c9800;
      uStack_b0 = 0;
      plVar8 = (longlong *)(lVar3 + 0xd8);
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 == (longlong *)0x0) {
        return;
      }
      *plVar5 = (longlong)&PTR_FUN_14428ae88;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      *(undefined4 *)(plVar5 + 2) = (undefined4)local_b8;
      *(undefined4 *)((longlong)plVar5 + 0x14) = local_b8._4_4_;
      *(undefined4 *)(plVar5 + 3) = uStack_b0;
      *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_ac;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar5[5] = lVar4;
      *plVar5 = (longlong)&PTR_FUN_14428aed0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_b8);
      iVar1 = *(int *)(lVar3 + 0xe0);
      *(int *)(lVar3 + 0xe0) = iVar1 + 1;
      if (*(int *)(lVar3 + 0xe4) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar1);
      }
      puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar8);
      *puVar6 = plVar5;
      *(undefined4 *)(puVar6 + 1) = 3;
      return;
    }
  }
  local_b8 = (code *)0x0;
  local_a8 = FUN_1412bc1c0;
  uStack_a0 = 0;
  uVar7 = AActor::GetWorldTimerManager(param_1);
  plVar8 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar8 + 1,param_1);
    *(undefined4 *)(plVar8 + 2) = (undefined4)local_a8;
    *(undefined4 *)((longlong)plVar8 + 0x14) = local_a8._4_4_;
    *(undefined4 *)(plVar8 + 3) = uStack_a0;
    *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_9c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar8[5] = lVar3;
    *plVar8 = (longlong)&PTR_FUN_143f77bd0;
  }
  local_98 = 0;
  local_90 = 0;
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x30))(plVar8,&local_98);
  }
  FWeakObjectPtr::operator=(local_88,0);
  local_c0 = 0xbf800000;
  local_c8 = 0;
  local_80 = 0;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_78 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar7,&local_b8,&local_98,0x3dcccccd);
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
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    lVar3 = FMemory::Realloc(plVar8,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 1412bc450 FUN_1412bc450 body=1006 status=ok
// SIG undefined FUN_1412bc450(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412bc450(longlong *param_1)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  longlong *plVar7;
  code *pcVar8;
  code *pcVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  int iStack_a0;
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
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar2 = (**(code **)(*param_1 + 0x148))();
  lVar3 = FUN_140c12480(uVar2);
  if ((lVar3 == 0) || (lVar3 = FARSupportInterface::GetXRTrackingSystem(lVar3), lVar3 == 0)) {
    local_b0 = 0;
    local_a8 = FUN_1412bc450;
    iStack_a0 = 0;
    uVar2 = AActor::GetWorldTimerManager(param_1);
    plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar7 + 1,param_1);
      *(undefined4 *)(plVar7 + 2) = (undefined4)local_a8;
      *(undefined4 *)((longlong)plVar7 + 0x14) = local_a8._4_4_;
      *(int *)(plVar7 + 3) = iStack_a0;
      *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_9c;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar7[5] = lVar3;
      *plVar7 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_98 = 0;
    local_90 = 0;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_d0 = 0xbf800000;
    local_d8 = 0;
    local_80 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar2,&local_b0,&local_98,0x3dcccccd);
    if (local_38 != 0) {
      plVar11 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar11 = local_48;
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x10))(plVar11,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
    if (plVar7 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    pcVar8 = (code *)FMemory::Realloc(plVar7,0,0);
  }
  else {
    pwVar10 = (wchar_t *)0x0;
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMinimapIconComponentBeginTracking",L"::")
    ;
    pwVar6 = pwVar10;
    while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar6 = pwVar1;
    }
    FName::FName(&local_b0,pwVar6 + 2,1);
    lVar5 = local_b0;
    FWeakObjectPtr::operator=(local_c8,0);
    local_c0 = 0;
    FWeakObjectPtr::operator=(local_c8,param_1);
    local_c0 = lVar5;
    local_b8 = 0;
    if ((lVar5 != 0) && (lVar5 = FWeakObjectPtr::Get(local_c8), lVar5 != 0)) {
      UObject::FindFunction(lVar5,local_c0);
    }
    FUN_1406a5aa0(lVar3 + 0x28,local_c8);
    pwVar4 = _guard_xfg_dispatch_icall_nop
                       (L"&ThisClass::OnMinimapIconComponentUpdateTracking",L"::");
    pwVar6 = pwVar10;
    while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar6 = pwVar1;
    }
    FName::FName(&local_b0,pwVar6 + 2,1);
    lVar5 = local_b0;
    FWeakObjectPtr::operator=(local_c8,0);
    local_c0 = 0;
    FWeakObjectPtr::operator=(local_c8,param_1);
    local_c0 = lVar5;
    local_b8 = 0;
    if ((lVar5 != 0) && (lVar5 = FWeakObjectPtr::Get(local_c8), lVar5 != 0)) {
      UObject::FindFunction(lVar5,local_c0);
    }
    FUN_1406a5aa0(lVar3 + 0x38,local_c8);
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMinimapIconComponentEndTracking",L"::");
    while (pwVar4 = pwVar6, pwVar4 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar10 = pwVar4;
    }
    FName::FName(&local_b0,pwVar10 + 2,1);
    lVar5 = local_b0;
    FWeakObjectPtr::operator=(local_c8,0);
    local_c0 = 0;
    FWeakObjectPtr::operator=(local_c8,param_1);
    local_c0 = lVar5;
    local_b8 = 0;
    if ((lVar5 != 0) && (lVar5 = FWeakObjectPtr::Get(local_c8), lVar5 != 0)) {
      UObject::FindFunction(lVar5,local_c0);
    }
    FUN_1406a5aa0(lVar3 + 0x48,local_c8);
    local_a8 = (code *)0x0;
    iStack_a0 = 0;
    uStack_9c = 0;
    FUN_1411e0e30(lVar3,&local_a8);
    pcVar8 = local_a8 + (longlong)iStack_a0 * 8;
    for (pcVar9 = local_a8; pcVar9 != pcVar8; pcVar9 = pcVar9 + 8) {
      uVar2 = FWeakObjectPtr::Get(pcVar9);
      FUN_1412c8b20(param_1,uVar2);
    }
    *(undefined1 *)((longlong)param_1 + 0xd23) = 1;
    pcVar8 = local_a8;
  }
  if (pcVar8 != (code *)0x0) {
    FMemory::Free(pcVar8);
  }
  return;
}



// FUNCTION 1412bc840 FUN_1412bc840 body=542 status=ok
// SIG undefined FUN_1412bc840(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412bc840(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
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
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (((*(uint *)(param_1 + 1) >> 0xf & 1) == 0) &&
     (lVar1 = (**(code **)(*param_1 + 0x148))(), lVar1 != 0)) {
    lVar1 = FUN_142f6c9f0(lVar1);
    if (lVar1 == 0) {
      local_a8 = FUN_1412bc840;
      local_b8 = (longlong *)0x0;
      uStack_a0 = 0;
      uVar2 = AActor::GetWorldTimerManager(param_1);
      plVar3 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar3 + 1,param_1);
        *(undefined4 *)(plVar3 + 2) = (undefined4)local_a8;
        *(undefined4 *)((longlong)plVar3 + 0x14) = local_a8._4_4_;
        *(undefined4 *)(plVar3 + 3) = uStack_a0;
        *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_9c;
        lVar1 = FDelegateHandle::GenerateNewID();
        plVar3[5] = lVar1;
        *plVar3 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_98 = 0;
      local_90 = 0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_98);
      }
      FWeakObjectPtr::operator=(local_88,0);
      local_c0 = 0xbf800000;
      local_c8 = 0;
      local_80 = 0;
      local_48 = (longlong *)0x0;
      local_38 = 0;
      local_78 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar2,&local_b8,&local_98,0x3dcccccd);
      if (local_38 != 0) {
        plVar4 = local_68;
        if (local_48 != (longlong *)0x0) {
          plVar4 = local_48;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        lVar1 = FMemory::Realloc(plVar3,0,0);
        if (lVar1 != 0) {
          FMemory::Free(lVar1);
        }
      }
    }
    else {
      local_b0 = 0;
      local_b8 = param_1;
      uVar2 = FUN_142f772d0();
      local_b0 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar2);
      FUN_142f69080(lVar1,&local_b8);
      local_b0 = 0;
      local_b8 = param_1;
      uVar2 = FUN_142f768a0();
      local_b0 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar2);
      FUN_142f690f0(lVar1,&local_b8,1);
    }
  }
  return;
}



// FUNCTION 1412bca60 FUN_1412bca60 body=1074 status=ok
// SIG undefined FUN_1412bca60(void)

void FUN_1412bca60(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong local_c8 [4];
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  uint local_78;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [48];
  
  plVar6 = (longlong *)param_1[0x115];
  bVar2 = true;
  uVar10 = 0;
  uVar8 = (longlong)(int)param_1[0x116] & 0x1fffffffffffffff;
  if (plVar6 + (int)param_1[0x116] < plVar6) {
    uVar8 = uVar10;
  }
  if (uVar8 != 0) {
    do {
      lVar5 = *plVar6;
      if (lVar5 != 0) {
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                          ((longlong)param_1 + 0x754,param_1 + 0xf1);
        FUN_142398ec0(lVar5,cVar3 != '\0',1);
      }
      plVar6 = plVar6 + 1;
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar8);
  }
  plVar7 = (longlong *)param_1[0x113];
  plVar6 = plVar7 + (longlong)(int)param_1[0x114] * 5;
  for (; plVar7 != plVar6; plVar7 = plVar7 + 5) {
    if (plVar7[4] != 0) {
      if (bVar2) {
        uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
        cVar3 = FUN_142c48f60(plVar7[4],uVar4,0);
        if (cVar3 != '\0') {
          bVar2 = true;
          goto LAB_1412bcb49;
        }
      }
      bVar2 = false;
    }
LAB_1412bcb49:
    if (*plVar7 != 0) {
      FUN_142398ec0(*plVar7,bVar2);
      if (plVar7[2] != 0) {
        FUN_142398ec0(plVar7[2],bVar2);
      }
      if ((bVar2 == false) || ((char)param_1[0xb5] == '\0')) {
        (**(code **)(*(longlong *)*plVar7 + 0x638))((longlong *)*plVar7,0);
      }
      else {
        (**(code **)(*(longlong *)*plVar7 + 0x638))((longlong *)*plVar7,1);
        (**(code **)(*(longlong *)*plVar7 + 0x648))((longlong *)*plVar7,DAT_1462a2e64);
      }
    }
  }
  FUN_1412d0870(param_1,1);
  plVar6 = param_1 + 0x145;
  lVar5 = FWeakObjectPtr::Get(plVar6);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == (int)param_1[0x146]) || (param_1[0x147] == 0)) goto LAB_1412bcdb5;
    lVar5 = FUN_141796df0();
    FWeakObjectPtr::operator=(plVar6,lVar5);
    if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x146) = DAT_1464b56f4;
    }
    lVar5 = FWeakObjectPtr::Get(plVar6);
    if (lVar5 == 0) goto LAB_1412bcdb5;
  }
  lVar5 = param_1[0xfd];
  lVar9 = (longlong)(int)param_1[0xfe] * 0x270 + lVar5;
  for (; lVar5 != lVar9; lVar5 = lVar5 + 0x270) {
    lVar1 = *(longlong *)(lVar5 + 0xf8);
    local_90 = 0;
    local_88 = 0;
    local_a8 = 0xffffffff;
    local_a4 = 0;
    local_98 = 0;
    if (lVar1 == 0) {
      local_98 = 0;
    }
    else {
      uVar4 = FSoftObjectPath::FSoftObjectPath(local_58,lVar1);
      FSoftObjectPath::operator=(&local_98,uVar4);
      FWeakObjectPtr::operator=(&local_a8,lVar1);
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      local_a4 = CONCAT44(DAT_1464b56f4,(undefined4)local_a4);
    }
    cVar3 = FSoftObjectPath::operator==(&local_98,param_1 + 0x147);
    if (local_90 != 0) {
      FMemory::Free();
    }
    if (cVar3 != '\0') {
      local_68 = *(uint *)(lVar5 + 0xd0);
      uStack_64 = *(uint *)(lVar5 + 0xd4);
      uStack_60 = *(uint *)(lVar5 + 0xd8);
      uStack_5c = *(undefined4 *)(lVar5 + 0xdc);
      local_78 = uStack_60 ^ 0x80000000;
      *(uint *)(param_1 + 0x10b) = local_68 ^ 0x80000000;
      *(uint *)((longlong)param_1 + 0x85c) = uStack_64 ^ 0x80000000;
      *(uint *)(param_1 + 0x10c) = local_78;
    }
  }
  *(undefined4 *)(param_1 + 0x145) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa2c) = 0;
  param_1[0x147] = 0;
  *(undefined4 *)(param_1 + 0x149) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xa4c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x148,0);
  }
  if ((undefined2 *)param_1[0x148] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x148] = 0;
  }
  *(undefined4 *)(param_1 + 0x146) = 0;
LAB_1412bcdb5:
  local_c8[0] = 0;
  local_c8[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8,0);
  FGenericPlatformString::Memcpy(local_c8[0],L"PostProcessing",0x1e);
  FUN_1412d1180(param_1[0x128],local_c8,0);
  if (local_c8[0] != 0) {
    FMemory::Free();
  }
  local_c8[2] = 0;
  local_c8[3] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8 + 2,0);
  FGenericPlatformString::Memcpy(local_c8[2],L"Lighting",0x12);
  FUN_1412d1180(param_1[0x128],local_c8 + 2,0);
  if (local_c8[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1412bcea0 FUN_1412bcea0 body=501 status=ok
// SIG undefined FUN_1412bcea0(void)

void FUN_1412bcea0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong local_28 [2];
  
  if ((*(char *)((longlong)param_1 + 0x5aa) == '\0') && ((char)param_1[0x1a4] == '\x01')) {
    plVar3 = (longlong *)param_1[0x115];
    uVar5 = 0;
    cVar1 = '\0';
    uVar6 = (longlong)(int)param_1[0x116] & 0x1fffffffffffffff;
    if (plVar3 + (int)param_1[0x116] < plVar3) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      do {
        if (*plVar3 != 0) {
          FUN_142398ec0(*plVar3,0,1);
        }
        plVar3 = plVar3 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar6);
    }
    plVar4 = (longlong *)param_1[0x113];
    plVar3 = plVar4 + (longlong)(int)param_1[0x114] * 5;
    for (; plVar4 != plVar3; plVar4 = plVar4 + 5) {
      if (plVar4[4] != 0) {
        if (cVar1 != '\0') {
          uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
          cVar1 = FUN_142c48f60(plVar4[4],uVar2,0);
          if (cVar1 != '\0') {
            cVar1 = '\x01';
            goto LAB_1412bcf82;
          }
        }
        cVar1 = '\0';
      }
LAB_1412bcf82:
      if (*plVar4 != 0) {
        FUN_142398ec0(*plVar4,cVar1);
        if (plVar4[2] != 0) {
          FUN_142398ec0(plVar4[2],cVar1);
        }
        (**(code **)(*(longlong *)*plVar4 + 0x638))((longlong *)*plVar4,0);
      }
    }
    FUN_1412d0870(param_1,0);
    local_28[0] = 0;
    local_28[1] = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],L"PostProcessing",0x1e);
    FUN_1412d1180(param_1[0x128],local_28,1);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    local_28[0] = 0;
    local_28[1] = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],L"Lighting",0x12);
    FUN_1412d1180(param_1[0x128],local_28,1);
    if (local_28[0] != 0) {
      FMemory::Free();
      return;
    }
  }
  return;
}



// FUNCTION 1412bd0d0 FUN_1412bd0d0 body=679 status=ok
// SIG undefined FUN_1412bd0d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412bd0d0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
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
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x748) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x748) + 0x118);
  }
  if ((lVar3 == 0) || (lVar3 = FUN_142df3580(), lVar3 == 0)) {
    if (*(longlong *)(param_1 + 0x770) != 0) {
      uVar5 = AActor::GetWorldTimerManager(*(undefined8 *)(param_1 + 0x118));
      FUN_142880530(uVar5,param_1 + 0x770);
      *(undefined8 *)(param_1 + 0x770) = 0;
    }
    local_a8 = FUN_1412bd0d0;
    uStack_a0 = 0;
    uVar5 = AActor::GetWorldTimerManager(*(undefined8 *)(param_1 + 0x118));
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      *(undefined4 *)(plVar4 + 2) = (undefined4)local_a8;
      *(undefined4 *)((longlong)plVar4 + 0x14) = local_a8._4_4_;
      *(undefined4 *)(plVar4 + 3) = uStack_a0;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_9c;
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
    local_b0 = 0xbf800000;
    local_b8 = 0;
    local_80 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar5,param_1 + 0x770,&local_98,0x3dcccccd);
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
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    lVar3 = FMemory::Realloc(plVar4,0,0);
    if (lVar3 == 0) {
      return;
    }
    FMemory::Free(lVar3);
    return;
  }
  cVar2 = FUN_140bf9690(0,param_1 + 0x738);
  if (cVar2 == '\0') {
    return;
  }
  plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x738);
  uVar5 = UCircularThrobber::GetPrivateStaticClass();
  lVar3 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar5);
  if (lVar3 != 0) {
    lVar6 = UCircularThrobber::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1412bd1a1;
  }
  lVar3 = 0;
LAB_1412bd1a1:
  FUN_1412c9b50(param_1,lVar3,0);
  return;
}



// FUNCTION 1412bd380 FUN_1412bd380 body=697 status=ok
// SIG undefined FUN_1412bd380(void)

void FUN_1412bd380(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 local_res8 [8];
  
  lVar5 = *(longlong *)(param_1 + 0x118);
  if (lVar5 != 0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(longlong *)(lVar5 + 0xc80) != 0)) {
      FUN_141293e70();
    }
  }
  FUN_1412b4750(local_res8,*(undefined8 *)(param_1 + 0x940));
  FUN_1412b4750(local_res8,*(undefined8 *)(param_1 + 0x948));
  FUN_1412cd3a0(param_1);
  plVar7 = *(longlong **)(param_1 + 0x8c8);
  uVar9 = 0;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x3b0))(plVar7,0);
    *(undefined8 *)(param_1 + 0x8c8) = 0;
  }
  lVar5 = *(longlong *)(param_1 + 0x8b8);
  lVar4 = (longlong)*(int *)(param_1 + 0x8c0) * 0x30 + lVar5;
  for (; lVar5 != lVar4; lVar5 = lVar5 + 0x30) {
    (**(code **)(**(longlong **)(lVar5 + 0x10) + 0x3b0))(*(longlong **)(lVar5 + 0x10),0);
  }
  *(undefined4 *)(param_1 + 0x8c0) = 0;
  if (*(int *)(param_1 + 0x8c4) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x8b8,0);
  }
  *(undefined4 *)(param_1 + 0x8e8) = 0;
  if (*(int *)(param_1 + 0x8ec) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x8e0,0);
  }
  *(undefined4 *)(param_1 + 0x900) = 0;
  if (*(int *)(param_1 + 0x904) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x8f8,0);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x898);
  puVar1 = puVar6 + (longlong)*(int *)(param_1 + 0x8a0) * 5;
  for (; puVar6 != puVar1; puVar6 = puVar6 + 5) {
    (**(code **)(*(longlong *)*puVar6 + 0x3b0))((longlong *)*puVar6,0);
    if ((longlong *)puVar6[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)puVar6[2] + 0x3b0))();
    }
  }
  *(undefined4 *)(param_1 + 0x8a0) = 0;
  if (*(int *)(param_1 + 0x8a4) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x898,0);
  }
  plVar7 = *(longlong **)(param_1 + 0x8a8);
  uVar8 = (longlong)*(int *)(param_1 + 0x8b0) & 0x1fffffffffffffff;
  if (plVar7 + *(int *)(param_1 + 0x8b0) < plVar7) {
    uVar8 = uVar9;
  }
  uVar10 = uVar9;
  if (uVar8 != 0) {
    do {
      plVar2 = (longlong *)*plVar7;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x3b0))(plVar2,0);
      }
      plVar7 = plVar7 + 1;
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar8);
  }
  *(undefined4 *)(param_1 + 0x8b0) = 0;
  if (*(int *)(param_1 + 0x8b4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x8a8,0);
  }
  plVar7 = *(longlong **)(param_1 + 0xcd0);
  uVar8 = (longlong)*(int *)(param_1 + 0xcd8) & 0x1fffffffffffffff;
  if (plVar7 + *(int *)(param_1 + 0xcd8) < plVar7) {
    uVar8 = uVar9;
  }
  if (uVar8 != 0) {
    do {
      plVar2 = (longlong *)*plVar7;
      if (plVar2 != (longlong *)0x0) {
        FUN_142397540(plVar2,1,2);
        FUN_142398ec0(plVar2,0,2);
        (**(code **)(*plVar2 + 0x3b0))(plVar2,1);
      }
      plVar7 = plVar7 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar8);
  }
  *(undefined4 *)(param_1 + 0xcd8) = 0;
  if (*(int *)(param_1 + 0xcdc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xcd0,0);
  }
  FUN_142227880(param_1);
  return;
}



// FUNCTION 1412bd640 FUN_1412bd640 body=712 status=ok
// SIG undefined FUN_1412bd640(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412bd640(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_res20;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 in_stack_ffffffffffffff18;
  undefined8 uVar8;
  uint in_stack_ffffffffffffff20;
  undefined4 uVar9;
  undefined8 uVar10;
  float local_b8;
  float local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [20];
  undefined4 local_84;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
  if (((((param_2 != 0) && (*(char *)(param_1 + 0x5a9) != '\0')) &&
       (*(longlong **)(param_1 + 0x168) != (longlong *)0x0)) &&
      ((cVar3 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x460))(), cVar3 != '\0' &&
       (*(longlong *)(param_1 + 0x940) != 0)))) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x940) + 0x3d0), lVar1 != 0)) {
    lVar4 = UTexture::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar6 = *(undefined4 *)(param_1 + 0x9f0);
      if (*(longlong *)(param_1 + 0x960) == 0) {
        local_a8 = _DAT_1464aa6c0;
        uStack_a0 = _DAT_1464aa6c8;
        FUN_1424ebb00(param_2,lVar1);
      }
      else {
        uVar9 = 0;
        in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffff00;
        uVar8 = CONCAT44(uVar7,0x3f800000);
        uVar7 = *(undefined4 *)(param_1 + 0x9f4);
        uVar5 = *(undefined4 *)(param_1 + 0x9ec);
        uVar10 = DAT_1468b5d88;
        FUN_1424eb480();
        local_a8 = 0;
        uStack_a0 = 0x3f80000000000000;
        local_res10 = 0x3f800000;
        local_b8 = (float)*(int *)(param_1 + 0xce8);
        local_res14 = 0x3f800000;
        local_res20 = 0;
        local_b0 = 0;
        local_b4 = (float)*(int *)(param_1 + 0xcec);
        FCanvasTileItem::FCanvasTileItem
                  (local_98,&local_b0,DAT_146ac3d68,&local_b8,&local_res20,&local_res10,&local_a8,
                   uVar5,uVar6,uVar7,uVar8,in_stack_ffffffffffffff20,uVar9,uVar10);
        local_84 = 0xd;
        UCanvas::DrawItem(param_3,local_98,&DAT_1468b5d88);
      }
    }
  }
  return;
}



// FUNCTION 1412bd910 FUN_1412bd910 body=68 status=ok
// SIG undefined FUN_1412bd910(void)

void FUN_1412bd910(longlong param_1)

{
  if (*(char *)(param_1 + 0x5a8) != '\0') {
    *(undefined1 *)(param_1 + 0x5a8) = 0;
    *(undefined8 *)(param_1 + 0x778) = 0;
    FUN_1412d27e0();
    FUN_1412d0ba0(param_1);
    FUN_1414f9230(param_1);
    return;
  }
  return;
}



// FUNCTION 1412bd960 FUN_1412bd960 body=601 status=ok
// SIG undefined FUN_1412bd960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412bd960(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0x5a8) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x5aa) != '\0') {
    FUN_1414f92b0();
    plVar1 = *(longlong **)(param_1 + 0x948);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x290))(plVar1,0,0);
      FUN_142398ec0(*(undefined8 *)(param_1 + 0x948),0,1);
      *(undefined1 *)(*(longlong *)(param_1 + 0x948) + 0x318) = 0;
    }
    *(undefined1 *)(param_1 + 0x5aa) = 0;
    FUN_1412d0ba0(param_1);
  }
  *(undefined1 *)(param_1 + 0x5a8) = 1;
  *(undefined1 *)(param_1 + 0xd20) = 0;
  *(undefined4 *)(param_1 + 0x754) = *(undefined4 *)(param_1 + 0x788);
  *(undefined4 *)(param_1 + 0x758) = *(undefined4 *)(param_1 + 0x78c);
  *(undefined4 *)(param_1 + 0x780) = *(undefined4 *)(param_1 + 0x790);
  *(undefined4 *)(param_1 + 0x784) = *(undefined4 *)(param_1 + 0x794);
  *(undefined1 *)(param_1 + 0x90c) = 0;
  *(undefined1 *)(param_1 + 0x974) = 0;
  if (*(longlong *)(param_1 + 0x720) != 0) {
    local_28 = _DAT_1468b5d90;
    local_20 = DAT_1468b5d98;
    FUN_1423990b0(*(longlong *)(param_1 + 0x720),&local_28,0,0,0);
    local_28 = DAT_1468b5da0;
    local_20 = DAT_1468b5da8;
    FUN_142399b90(*(undefined8 *)(param_1 + 0x720),&local_28,0,0,0);
  }
  lVar3 = *(longlong *)(param_1 + 0x8c8);
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 0x720) == 0) goto LAB_1412bdba1;
    local_res8 = 0;
    uVar2 = UKismetMaterialLibrary::CreateDynamicMaterialInstance
                      (param_1,*(undefined8 *)(param_1 + 0x670),0);
    lVar3 = FUN_140a79980(param_1);
    *(longlong *)(param_1 + 0x8c8) = lVar3;
    if (lVar3 == 0) goto LAB_1412bdba1;
    local_10 = 0xc2c80000;
    local_28 = 0;
    local_20 = 0xc2c80000;
    *(undefined8 *)(param_1 + 0x8d8) = uVar2;
    FUN_1423990b0(lVar3,&local_28,0,0,0);
    (**(code **)(**(longlong **)(param_1 + 0x8c8) + 0x928))
              (*(longlong **)(param_1 + 0x8c8),*(undefined8 *)(param_1 + 0x668));
    (**(code **)(**(longlong **)(param_1 + 0x8c8) + 0x568))(*(longlong **)(param_1 + 0x8c8),0,uVar2)
    ;
    FUN_14234b150(*(undefined8 *)(param_1 + 0x8c8));
    local_res10 = 0;
    local_res8 = CONCAT44(local_res8._4_4_,0x1010000);
    FUN_142382f60(*(undefined8 *)(param_1 + 0x8c8),*(undefined8 *)(param_1 + 0x720),&local_res8,0);
    bVar4 = *(char *)(param_1 + 0x5a8) == '\0';
    lVar3 = *(longlong *)(param_1 + 0x8c8);
  }
  else {
    bVar4 = false;
  }
  FUN_142397540(lVar3,bVar4,1);
LAB_1412bdba1:
  FUN_1414f9270(param_1);
  return;
}



// FUNCTION 1412bdbc0 FUN_1412bdbc0 body=182 status=ok
// SIG undefined FUN_1412bdbc0(void)

void FUN_1412bdbc0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(*param_1 + 0x30);
    do {
      if (plVar7[1] != 0) {
        FMemory::Free();
      }
      plVar4 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 0xb;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 1412bdc80 FUN_1412bdc80 body=148 status=ok
// SIG undefined FUN_1412bdc80(void)

void FUN_1412bdc80(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  for (iVar2 = *(int *)(param_1 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = &PTR_FUN_144278ac0;
    if (puVar1[8] != 0) {
      FMemory::Free();
    }
    *puVar1 = &PTR_FUN_1441d26b8;
    puVar1 = puVar1 + 10;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1412bdd20 FUN_1412bdd20 body=338 status=ok
// SIG undefined FUN_1412bdd20(void)

void FUN_1412bdd20(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = (int)param_1[1];
  if (iVar7 != 0) {
    lVar6 = *param_1 + 0x1d0;
    do {
      if (*(longlong *)(lVar6 + 0x20) != 0) {
        FMemory::Free();
      }
      TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
      ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(lVar6);
      FUN_140bff340(lVar6 + -0x68);
      FUN_140c64420(lVar6 + -0x78);
      if (*(longlong *)(lVar6 + -200) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar6 + -0x128) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar6 + -0x148) != 0) {
        FMemory::Free();
      }
      plVar4 = *(longlong **)(lVar6 + -0x158);
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
      plVar4 = *(longlong **)(lVar6 + -0x170);
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
      lVar6 = lVar6 + 0x270;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<624,16>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 1412bde80 FUN_1412bde80 body=498 status=ok
// SIG undefined FUN_1412bde80(void)

void FUN_1412bde80(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *local_48;
  int local_40;
  
  FUN_14222a250();
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x590);
  if (lVar6 != 0) {
    lVar7 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_141224090(lVar6,&local_48);
      plVar1 = local_48 + local_40;
      for (plVar12 = local_48; plVar12 != plVar1; plVar12 = plVar12 + 1) {
        lVar7 = *plVar12;
        if (lVar7 != 0) {
          plVar11 = (longlong *)(lVar7 + 0x3f0);
          iVar10 = *(int *)(lVar7 + 0x3f8) + -1;
          if (-1 < iVar10) {
            lVar13 = (longlong)iVar10 << 4;
            lVar14 = lVar13;
            do {
              lVar9 = lVar13 + *plVar11;
              bVar3 = true;
              if ((param_1 == 0) || (lVar8 = FWeakObjectPtr::Get(lVar9), param_1 != lVar8)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (bVar4) {
LAB_1412bdfaf:
                iVar2 = *(int *)(lVar7 + 0x3f8);
                iVar5 = (iVar2 - iVar10) + -1;
                if (0 < iVar5) {
                  iVar5 = 1;
                }
                if (iVar5 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(*plVar11 + lVar14),
                             (void *)((longlong)(iVar2 - iVar5) * 0x10 + *plVar11),
                             (longlong)iVar5 << 4);
                  iVar2 = *(int *)(lVar7 + 0x3f8);
                }
                *(int *)(lVar7 + 0x3f8) = iVar2 + -1;
                TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar11);
              }
              else {
                if ((*(longlong *)(lVar9 + 8) != 0) &&
                   (lVar9 = FWeakObjectPtr::Get(lVar9,1), lVar9 != 0)) {
                  bVar3 = false;
                }
                if (bVar3) goto LAB_1412bdfaf;
              }
              lVar14 = lVar14 + -0x10;
              lVar13 = lVar13 + -0x10;
              iVar10 = iVar10 + -1;
            } while (-1 < iVar10);
          }
        }
      }
      FUN_1407665e0(lVar6 + 0xac8,param_1);
      FUN_1407665e0(lVar6 + 0xad8,param_1);
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1412be080 FUN_1412be080 body=436 status=ok
// SIG undefined FUN_1412be080(void)

void FUN_1412be080(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_14222a250();
  FUN_1412c4410(param_1,0);
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar3 != 0) {
    lVar3 = FUN_142f6c9f0(lVar3);
    if (lVar3 != 0) {
      local_10 = 0;
      local_18 = param_1;
      uVar4 = FUN_142f768a0();
      local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar4);
      FUN_142f6e000(lVar3,&local_18);
      local_10 = 0;
      local_18 = param_1;
      uVar4 = FUN_142f772d0();
      local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar4);
      FUN_142f6dea0(lVar3,&local_18);
    }
  }
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar3 != 0) {
    lVar3 = FUN_142dcdcd0(lVar3);
    if (lVar3 != 0) {
      AXUsableActor::RemoveUser(lVar3,param_1 + 0x8d);
    }
  }
  lVar3 = FUN_1412bf380(param_1);
  if (lVar3 != 0) {
    FUN_140483870(lVar3 + 0xd8,param_1);
  }
  plVar1 = (longlong *)param_1[0x128];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x290))(plVar1,0,1);
    FUN_142398ec0(param_1[0x128],0,1);
    *(undefined1 *)(param_1[0x128] + 0x318) = 0;
  }
  plVar1 = (longlong *)param_1[0x129];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x290))(plVar1,0,1);
    FUN_142398ec0(param_1[0x129],0,1);
    *(undefined1 *)(param_1[0x129] + 0x318) = 0;
  }
  lVar3 = param_1[0x23];
  if (lVar3 != 0) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_140483870(lVar3 + 5000,param_1);
    }
  }
  return;
}



// FUNCTION 1412be240 FUN_1412be240 body=12 status=ok
// SIG undefined FUN_1412be240(void)

void FUN_1412be240(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x9ca) = param_3;
  FUN_1414f8f30();
  return;
}



// FUNCTION 1412be250 FUN_1412be250 body=115 status=ok
// SIG undefined FUN_1412be250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412be250(undefined8 param_1,undefined1 (*param_2) [12])

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined1 local_38 [16];
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_28 = _DAT_146878340 & _DAT_146878350;
  uStack_24 = uRam0000000146878344 & uRam0000000146878354;
  uStack_20 = uRam0000000146878348 & uRam0000000146878358;
  uStack_1c = uRam000000014687834c & uRam000000014687835c;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam000000014687834c;
  local_38._12_4_ = 0;
  local_38._0_12_ = *param_2;
  FUN_1414f8fb0(*(undefined4 *)(*param_2 + 8),&local_48);
  return;
}



// FUNCTION 1412be2d0 FUN_1412be2d0 body=12 status=ok
// SIG undefined FUN_1412be2d0(void)

void FUN_1412be2d0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x9ca) = param_3;
  FUN_1414f8f70();
  return;
}



// FUNCTION 1412be2e0 thunk_FUN_1414f8fb0 body=5 status=ok
// SIG undefined thunk_FUN_1414f8fb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void thunk_FUN_1414f8fb0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong uStack_18;
  
  uStack_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  uStack_48 = *param_2;
  uStack_40 = param_2[1];
  uStack_38 = *(undefined4 *)(param_2 + 2);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_30 = *(undefined4 *)(param_2 + 3);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar1 = *param_1;
  uStack_28 = *(undefined4 *)(param_2 + 4);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_20 = *(undefined4 *)(param_2 + 5);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar2 = FUN_14178ac60(uStack_28,DAT_1468a40d0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&uStack_48);
  return;
}



// FUNCTION 1412be2f0 FUN_1412be2f0 body=672 status=ok
// SIG undefined FUN_1412be2f0(void)

void FUN_1412be2f0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong local_68;
  undefined1 local_60 [8];
  int local_58;
  longlong local_50;
  longlong local_48;
  
  if ((param_1 != (longlong *)0x0) && (lVar3 = (**(code **)(*param_1 + 0x148))(), lVar3 != 0)) {
    UWorld::GetGameState<APVPGameState>(lVar3);
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      if (DAT_1468782f0 == '\0') {
        FUN_1412c54f0();
      }
      lVar3 = DAT_1468787b8 + (longlong)DAT_1468787c0 * 0x28;
      for (lVar8 = DAT_1468787b8; lVar8 != lVar3; lVar8 = lVar8 + 0x28) {
        uVar6 = 0;
        TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_60,lVar8);
        lVar4 = FWeakObjectPtr::Get(local_60);
        if (lVar4 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != local_58) && (local_50 != 0)) {
            lVar4 = FUN_141796df0(&local_50);
            FWeakObjectPtr::operator=(local_60,lVar4);
            if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              local_58 = DAT_1464b56f4;
            }
            lVar4 = FWeakObjectPtr::Get(local_60);
            if (lVar4 != 0) goto LAB_1412be428;
          }
        }
        else {
LAB_1412be428:
          uVar5 = FWeakObjectPtr::Get(local_60);
          if (uVar5 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != local_58) && (local_50 != 0)) {
              lVar4 = FUN_141796df0(&local_50);
              FWeakObjectPtr::operator=(local_60,lVar4);
              if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                local_58 = DAT_1464b56f4;
              }
              uVar5 = FWeakObjectPtr::Get(local_60);
              if (uVar5 != 0) goto LAB_1412be4ae;
            }
LAB_1412be4e4:
            uVar5 = uVar6;
          }
          else {
LAB_1412be4ae:
            lVar4 = FUN_1414f4830();
            if ((*(int *)(*(longlong *)(uVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(uVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (!bVar1) goto LAB_1412be4e4;
          }
          plVar7 = *(longlong **)(uVar5 + 0x30);
          uVar9 = (longlong)*(int *)(uVar5 + 0x38) & 0x1fffffffffffffff;
          if (plVar7 + *(int *)(uVar5 + 0x38) < plVar7) {
            uVar9 = 0;
          }
          if (uVar9 != 0) {
            do {
              lVar4 = *plVar7;
              if ((lVar4 != 0) &&
                 ((param_2 == 0 || (cVar2 = FUN_1412a3110(lVar4,param_2), cVar2 != '\0')))) {
                local_68 = lVar4;
                (*(code *)*param_3)(param_3[1],&local_68);
              }
              plVar7 = plVar7 + 1;
              uVar6 = uVar6 + 1;
            } while (uVar6 != uVar9);
          }
        }
        if (local_48 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 1412be590 FUN_1412be590 body=188 status=ok
// SIG undefined FUN_1412be590(void)

void FUN_1412be590(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = FUN_1429bed90();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*param_1 + 0x918))
                (param_1,0x3f800000,CONCAT71((int7)((ulonglong)(lVar2 + 0x88) >> 8),1),0);
    }
  }
  plVar3 = (longlong *)param_1[0x34];
  uVar5 = 0;
  uVar4 = (longlong)(int)param_1[0x35] & 0x1fffffffffffffff;
  if (plVar3 + (int)param_1[0x35] < plVar3) {
    uVar4 = uVar5;
  }
  if (uVar4 != 0) {
    do {
      if (*plVar3 != 0) {
        FUN_1412be590();
      }
      plVar3 = plVar3 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar4);
  }
  return;
}



// FUNCTION 1412be650 FUN_1412be650 body=157 status=ok
// SIG undefined FUN_1412be650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412be650(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  cVar1 = FUN_140bf9690(0,param_1 + 0xb2);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0xb2);
    lVar2 = *(longlong *)(lVar2 + 0x168);
    if (lVar2 == 0) {
      local_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      local_18 = _DAT_146878340 & _DAT_146878350;
      uStack_14 = uRam0000000146878344 & uRam0000000146878354;
      uStack_10 = uRam0000000146878348 & uRam0000000146878358;
      uStack_c = uRam000000014687834c & uRam000000014687835c;
      local_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = uRam000000014687834c;
    }
    else {
      local_38 = *(undefined4 *)(lVar2 + 0x210);
      uStack_34 = *(undefined4 *)(lVar2 + 0x214);
      uStack_30 = *(undefined4 *)(lVar2 + 0x218);
      local_28 = *(undefined4 *)(lVar2 + 0x220);
      uStack_24 = *(undefined4 *)(lVar2 + 0x224);
      uStack_20 = *(undefined4 *)(lVar2 + 0x228);
      uStack_1c = *(undefined4 *)(lVar2 + 0x22c);
      local_18 = *(uint *)(lVar2 + 0x230);
      uStack_14 = *(uint *)(lVar2 + 0x234);
      uStack_10 = *(uint *)(lVar2 + 0x238);
      uStack_c = *(uint *)(lVar2 + 0x23c);
      uStack_2c = *(uint *)(lVar2 + 0x21c);
    }
    (**(code **)(*param_1 + 0x728))(param_1,&local_38,1,0);
  }
  return;
}



// FUNCTION 1412be6f0 FUN_1412be6f0 body=404 status=ok
// SIG undefined FUN_1412be6f0(void)

void FUN_1412be6f0(longlong *param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong *local_res10;
  
  plVar1 = param_1 + 0x1a7;
  uVar7 = (**(code **)(*param_1 + 0x148))();
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  if (*(int *)((longlong)param_1 + 0xd44) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  plVar8 = (longlong *)UDynamicEntryBox::GetAllEntries(uVar7);
  plVar13 = (longlong *)*plVar8;
  local_res10 = plVar13 + (int)plVar8[1];
  if (plVar13 != local_res10) {
    do {
      uVar11 = 0;
      lVar9 = *plVar13;
      if (lVar9 != 0) {
        plVar8 = *(longlong **)(lVar9 + 0xa0);
        uVar12 = (longlong)*(int *)(lVar9 + 0xa8) & 0x1fffffffffffffff;
        if (plVar8 + *(int *)(lVar9 + 0xa8) < plVar8) {
          uVar12 = uVar11;
        }
        if (uVar12 != 0) {
          do {
            plVar4 = (longlong *)*plVar8;
            if (plVar4 != (longlong *)0x0) {
              uVar7 = FUN_142e017e0();
              lVar9 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar7);
              if (lVar9 != 0) {
                FWeakObjectPtr::operator=(&local_res8,lVar9);
                lVar9 = *plVar1;
                lVar5 = param_1[0x1a8];
                for (lVar10 = lVar9; lVar10 != lVar9 + (longlong)(int)lVar5 * 8; lVar10 = lVar10 + 8
                    ) {
                  cVar6 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                                    (lVar10,&local_res8);
                  if (cVar6 != '\0') {
                    if ((int)(lVar10 - lVar9 >> 3) != -1) goto LAB_1412be845;
                    break;
                  }
                }
                iVar3 = (int)param_1[0x1a8];
                *(int *)(param_1 + 0x1a8) = iVar3 + 1;
                if (*(int *)((longlong)param_1 + 0xd44) < iVar3 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
                }
                puVar2 = (undefined4 *)(*plVar1 + (longlong)iVar3 * 8);
                *puVar2 = local_res8;
                puVar2[1] = local_resc;
              }
            }
LAB_1412be845:
            plVar8 = plVar8 + 1;
            uVar11 = uVar11 + 1;
          } while (uVar11 != uVar12);
        }
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != local_res10);
  }
  return;
}



// FUNCTION 1412be890 FUN_1412be890 body=760 status=ok
// SIG undefined FUN_1412be890(void)

void FUN_1412be890(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *local_res10;
  undefined8 local_res18;
  longlong *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58 [2];
  longlong local_48 [2];
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    local_78 = (longlong *)0x0;
    local_70 = 0;
    puVar4 = (undefined8 *)FName::FName(&local_res10,"AssetRegistry",1);
    uVar7 = *puVar4;
    uVar5 = FUN_14168dc80();
    plVar6 = (longlong *)FUN_141690010(uVar5,uVar7);
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x48))(plVar6);
    lVar8 = *plVar6;
    puVar4 = (undefined8 *)FName::FName(&local_res10,"PatchExpansionData",1);
    (**(code **)(lVar8 + 0x28))(plVar6,*puVar4,&local_78,1);
    plVar6 = local_78 + (longlong)(int)local_70 * 0xb;
    local_res10 = plVar6;
    if (local_78 != plVar6) {
      local_res18 = 0;
      plVar12 = local_78;
      do {
        uVar13 = 0;
        if (*plVar12 != 0) {
          puVar4 = (undefined8 *)FName::ToString(plVar12,local_58);
          if (*(int *)(puVar4 + 1) == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = (undefined2 *)*puVar4;
          }
          uVar7 = UObject::GetPrivateStaticClass();
          lVar8 = FUN_141799410(uVar7,0,puVar11,0);
          if (local_58[0] != 0) {
            FMemory::Free();
          }
          if (lVar8 == 0) {
            puVar4 = (undefined8 *)FName::ToString(plVar12,local_48);
            if (*(int *)(puVar4 + 1) == 0) {
              puVar11 = &DAT_143f3eda8;
            }
            else {
              puVar11 = (undefined2 *)*puVar4;
            }
            uVar7 = UObject::GetPrivateStaticClass();
            lVar8 = FUN_141799c90(uVar7,0,puVar11,0,0,0,1);
            if (local_48[0] != 0) {
              FMemory::Free();
            }
            plVar6 = local_res10;
            if (lVar8 == 0) goto LAB_1412beb2f;
          }
          lVar9 = FUN_1414a12b0();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          plVar6 = local_res10;
          if (bVar3) {
            plVar10 = *(longlong **)(lVar8 + 0x318);
            uVar14 = (longlong)*(int *)(lVar8 + 800) & 0x1fffffffffffffff;
            if (plVar10 + *(int *)(lVar8 + 800) < plVar10) {
              uVar14 = uVar13;
            }
            if (uVar14 != 0) {
              do {
                lVar8 = *plVar10;
                if (lVar8 != 0) {
                  iVar2 = *(int *)(param_1 + 0x6d0);
                  uStack_60 = CONCAT22(uStack_60._2_2_,*(undefined2 *)(lVar8 + 0x130));
                  *(int *)(param_1 + 0x6d0) = iVar2 + 1;
                  local_68 = lVar8;
                  if (*(int *)(param_1 + 0x6d4) < iVar2 + 1) {
                    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x6c8,iVar2);
                  }
                  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x6c8) + (longlong)iVar2 * 0x10);
                  *puVar1 = (undefined4)local_68;
                  puVar1[1] = local_68._4_4_;
                  puVar1[2] = uStack_60;
                  puVar1[3] = uStack_5c;
                }
                plVar10 = plVar10 + 1;
                uVar13 = uVar13 + 1;
                plVar6 = local_res10;
              } while (uVar13 != uVar14);
            }
          }
        }
LAB_1412beb2f:
        plVar12 = plVar12 + 0xb;
      } while (plVar12 != plVar6);
    }
    FUN_1404be960(&local_78);
  }
  return;
}



// FUNCTION 1412beb90 FUN_1412beb90 body=926 status=ok
// SIG undefined FUN_1412beb90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412beb90(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0;
  longlong *local_b8;
  longlong *local_b0;
  uint local_a8 [2];
  longlong local_a0;
  longlong local_98;
  int local_90;
  int local_88;
  char local_84;
  int local_80;
  longlong local_78;
  longlong local_70;
  int local_68;
  undefined8 local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  *(undefined4 *)(param_2 + 1) = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  local_c0 = (**(code **)(*param_1 + 0x148))();
  if (((int)param_1[0xba] == 0) && (*(int *)((longlong)param_1 + 0x5d4) == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((!bVar3) && (local_c0 != 0)) {
    local_c8 = FUN_1428dfc70();
    local_a8[0] = 5;
    local_50 = '\0';
    FUN_14044bc80(&local_a0,&local_c0,&local_c8);
    FUN_14045a130(local_a8);
    if (local_84 == '\0') {
LAB_1412bec70:
      lVar6 = local_78;
      if (local_78 != 0) {
        iVar17 = *(int *)(local_78 + 0xc);
        if (iVar17 < (int)DAT_1469e91c4) {
          uVar12 = iVar17 >> 0x1f & 0xffff;
          uVar8 = iVar17 + uVar12;
          lVar16 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                   (longlong)(int)((uVar8 & 0xffff) - uVar12) * 0x18;
        }
        else {
          lVar16 = 0;
        }
        if (((*(uint *)(lVar16 + 8) >> 0x1d & 1) == 0) &&
           (cVar7 = FUN_142221b10(local_78,param_1[0xba]), cVar7 != '\0')) {
          iVar17 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar17 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar17 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar17);
          }
          *(longlong *)(*param_2 + (longlong)iVar17 * 8) = lVar6;
        }
      }
      lVar6 = local_a0;
      iVar17 = local_88 + 1;
      if (iVar17 < local_68 + local_90) {
        lVar16 = (longlong)iVar17 * 8;
        iVar15 = local_68;
        iVar13 = local_90;
        do {
          if (iVar17 < iVar13) {
            lVar14 = *(longlong *)(local_98 + lVar16);
          }
          else {
            lVar14 = *(longlong *)(local_70 + (longlong)(iVar17 - iVar13) * 8);
          }
          local_80 = local_80 + 1;
          if ((lVar14 != 0) &&
             (lVar9 = AActor::GetLevel(lVar14), iVar15 = local_68, iVar13 = local_90, lVar9 != 0)) {
            if ((local_a8[0] & 1) != 0) {
              iVar1 = *(int *)(lVar14 + 0xc);
              if (iVar1 < (int)DAT_1469e91c4) {
                uVar12 = iVar1 >> 0x1f & 0xffff;
                uVar8 = iVar1 + uVar12;
                lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                         (longlong)(int)((uVar8 & 0xffff) - uVar12) * 0x18;
              }
              else {
                lVar10 = 0;
              }
              if ((*(uint *)(lVar10 + 8) >> 0x1d & 1) != 0) goto LAB_1412bee88;
            }
            if (((local_a8[0] >> 1 & 1) == 0) ||
               (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(lVar14), iVar15 = local_68,
               iVar13 = local_90, cVar7 != '\0')) {
              if ((local_a8[0] >> 2 & 1) != 0) {
                if (((*(byte *)(lVar9 + 0x204) & 0x10) == 0) &&
                   ((*(byte *)(lVar9 + 0x205) & 0x10) == 0)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                piVar2 = *(int **)(lVar9 + 600);
                if (((*(longlong *)(lVar9 + 0xc0) == 0) ||
                    (piVar11 = (int *)UWorld::GetActiveLevelCollection(), piVar11 == (int *)0x0)) ||
                   (piVar2 == piVar11)) {
                  bVar4 = true;
                }
                else {
                  bVar4 = false;
                }
                if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                  bVar5 = true;
                }
                else {
                  bVar5 = false;
                }
                if ((bVar4) || (bVar4 = false, bVar5)) {
                  bVar4 = true;
                }
                iVar15 = local_68;
                iVar13 = local_90;
                if ((!bVar3) || (!bVar4)) goto LAB_1412bee88;
              }
              lVar9 = ULevel::GetWorld(lVar9);
              iVar15 = local_68;
              iVar13 = local_90;
              if (lVar9 == lVar6) {
                lVar9 = AActor::GetLevel(lVar14);
                if (lVar9 == *(longlong *)(lVar6 + 0x30)) goto LAB_1412bef13;
                lVar9 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                iVar15 = local_68;
                iVar13 = local_90;
                if (!bVar3) goto LAB_1412bef13;
              }
            }
          }
LAB_1412bee88:
          iVar17 = iVar17 + 1;
          lVar16 = lVar16 + 8;
          if (iVar15 + iVar13 <= iVar17) break;
        } while( true );
      }
      local_78 = 0;
      local_84 = '\x01';
    }
LAB_1412beec8:
    if (local_50 != '\0') {
      local_50 = 0;
      UWorld::RemoveOnActorSpawnedHandler(local_a0,local_58);
      if (local_70 != 0) {
        FMemory::Free();
      }
      if (local_98 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
LAB_1412bef13:
  param_2 = local_b8;
  param_1 = local_b0;
  local_88 = iVar17;
  local_78 = lVar14;
  if (local_84 != '\0') goto LAB_1412beec8;
  goto LAB_1412bec70;
}



// FUNCTION 1412bef30 GetLevelScriptActor body=8 status=ok
// SIG undefined GetLevelScriptActor(void)

undefined8 ULevel::GetLevelScriptActor(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



// FUNCTION 1412bef50 FUN_1412bef50 body=139 status=ok
// SIG undefined FUN_1412bef50(void)

void FUN_1412bef50(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x590);
  if (lVar3 != 0) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) &&
       (cVar2 = UKeyLabel::GetDisplayNameVisibility_Implementation(lVar3), cVar2 != '\0')) {
      lVar4 = FUN_142ceefa0(lVar3);
      lVar3 = 0;
      if (lVar4 != 0) {
        lVar3 = *(longlong *)(lVar4 + 0x118);
      }
      if (lVar3 != 0) {
        return;
      }
    }
  }
  FWeakObjectPtr::Get(param_1 + 0x590);
  return;
}



// FUNCTION 1412befe0 FUN_1412befe0 body=129 status=ok
// SIG undefined FUN_1412befe0(void)

undefined8 FUN_1412befe0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((*(longlong *)(param_1 + 0x498) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x498) + 0x118), lVar1 != 0)) {
    lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
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
      uVar4 = FUN_14129e1a0(param_1 + 0x5b0,lVar1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 1412bf070 FUN_1412bf070 body=259 status=ok
// SIG undefined FUN_1412bf070(void)

longlong FUN_1412bf070(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar3 = *(longlong *)(param_1 + 0x7b8);
      lVar4 = (longlong)*(int *)(param_1 + 0x7c0) * 0x270 + lVar3;
      do {
        if (lVar3 == lVar4) {
LAB_1412bf113:
          lVar3 = *(longlong *)(param_1 + 0x7c8);
          lVar4 = (longlong)*(int *)(param_1 + 2000) * 0x270 + lVar3;
          while( true ) {
            if (lVar3 == lVar4) {
              return 0;
            }
            cVar2 = FUN_14058c1e0(lVar3 + 0x18,param_2);
            if (cVar2 != '\0') break;
            lVar3 = lVar3 + 0x270;
          }
          return lVar3;
        }
        cVar2 = FUN_14058c1e0(lVar3 + 0x18,param_2);
        if (cVar2 != '\0') {
          if (lVar3 != 0) {
            return lVar3;
          }
          goto LAB_1412bf113;
        }
        lVar3 = lVar3 + 0x270;
      } while( true );
    }
  }
  return 0;
}



// FUNCTION 1412bf180 FUN_1412bf180 body=54 status=ok
// SIG undefined FUN_1412bf180(void)

undefined1 FUN_1412bf180(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x498) != 0) {
    lVar1 = FUN_1412bf070(*(longlong *)(param_1 + 0x498),param_1);
    if (lVar1 != 0) {
      return *(undefined1 *)(lVar1 + 0x25b);
    }
  }
  return 2;
}



// FUNCTION 1412bf1c0 FUN_1412bf1c0 body=8 status=ok
// SIG undefined FUN_1412bf1c0(void)

undefined8 FUN_1412bf1c0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



// FUNCTION 1412bf1d0 GetAttachParent body=8 status=ok
// SIG undefined GetAttachParent(void)

undefined8 USceneComponent::GetAttachParent(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



// FUNCTION 1412bf1e0 RemoveReferences body=9 status=ok
// SIG undefined RemoveReferences(void)

void CAkSegmentCtx::RemoveReferences(longlong param_1)

{
  FUN_142c98860(param_1 + 0x68);
  return;
}



// FUNCTION 1412bf1f0 FUN_1412bf1f0 body=9 status=ok
// SIG undefined FUN_1412bf1f0(void)

undefined4 FUN_1412bf1f0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xb8);
}



// FUNCTION 1412bf200 FUN_1412bf200 body=56 status=ok
// SIG undefined FUN_1412bf200(void)

ulonglong FUN_1412bf200(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x1d8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001412bf225. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x408))(plVar1);
    return uVar2;
  }
  return (ulonglong)*(uint *)(param_1 + 0x1a8);
}



// FUNCTION 1412bf240 FUN_1412bf240 body=317 status=ok
// SIG undefined FUN_1412bf240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1412bf240(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_3;
  local_10 = param_3[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  lVar3 = FUN_1412af8b0(param_1 + 0x7f8,&local_18);
  uVar1 = DAT_1468b5d98;
  if (lVar3 != 0) {
    cVar2 = FUN_140bf9690(0,lVar3 + 0x18);
    uVar1 = DAT_1468b5d98;
    if (cVar2 != '\0') {
      lVar3 = FWeakObjectPtr::Get(lVar3 + 0x18);
      lVar3 = *(longlong *)(lVar3 + 0x168);
      if (lVar3 == 0) {
        local_34 = DAT_1468b5d98;
        puVar4 = &local_3c;
        local_3c = _DAT_1468b5d90;
      }
      else {
        puVar4 = (undefined8 *)&local_48;
        local_48 = *(undefined4 *)(lVar3 + 0x220);
        local_40 = *(undefined4 *)(lVar3 + 0x228);
        uStack_44 = *(undefined4 *)(lVar3 + 0x224);
      }
      uVar1 = *(undefined4 *)(puVar4 + 1);
      *param_2 = *puVar4;
      *(undefined4 *)(param_2 + 1) = uVar1;
      return param_2;
    }
    *param_2 = _DAT_1468b5d90;
    *(undefined4 *)(param_2 + 1) = uVar1;
    return param_2;
  }
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 1412bf380 FUN_1412bf380 body=90 status=ok
// SIG undefined FUN_1412bf380(void)

undefined8 FUN_1412bf380(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_1422312c0();
  if (lVar2 != 0) {
    lVar3 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = FUN_140bb7440(lVar2);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 1412bf3e0 FUN_1412bf3e0 body=56 status=ok
// SIG undefined FUN_1412bf3e0(void)

ulonglong FUN_1412bf3e0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  plVar1 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x1d8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001412bf405. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x400))(plVar1);
    return uVar2;
  }
  return (ulonglong)*(uint *)(param_1 + 0x1a4);
}



// FUNCTION 1412bf420 FUN_1412bf420 body=10 status=ok
// SIG undefined FUN_1412bf420(void)

undefined1 * FUN_1412bf420(longlong param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)(param_1 + 0x50);
  return param_2;
}



// FUNCTION 1412bf430 FUN_1412bf430 body=178 status=ok
// SIG undefined FUN_1412bf430(void)

longlong FUN_1412bf430(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x7e8);
  lVar2 = (longlong)*(int *)(param_1 + 0x7f0) * 0x270 + lVar3;
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x270) {
    if (*(longlong *)(lVar3 + 0xf8) == param_2) {
      return lVar3;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x7d8);
  lVar2 = (longlong)*(int *)(param_1 + 0x7e0) * 0x270 + lVar3;
  while( true ) {
    if (lVar3 == lVar2) {
      return 0;
    }
    if (*(longlong *)(lVar3 + 0xf8) == param_2) break;
    cVar1 = FUN_14058c1e0(lVar3 + 0x18,param_2);
    if (cVar1 != '\0') {
      return lVar3;
    }
    lVar3 = lVar3 + 0x270;
  }
  return lVar3;
}



// FUNCTION 1412bf4f0 FUN_1412bf4f0 body=655 status=ok
// SIG undefined FUN_1412bf4f0(void)

longlong FUN_1412bf4f0(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  FUN_1428dfc70();
  lVar3 = *(longlong *)(param_1 + 0x7e8);
  lVar4 = (longlong)*(int *)(param_1 + 0x7f0) * 0x270 + lVar3;
  for (; lVar3 != lVar4; lVar3 = lVar3 + 0x270) {
    cVar2 = FUN_14058c1e0(lVar3 + 0x18,param_2);
    if ((cVar2 != '\0') || (bVar1 = false, *(longlong *)(lVar3 + 0x10) == param_2)) {
      bVar1 = true;
    }
    if (bVar1) {
      if (lVar3 != 0) {
        return lVar3;
      }
      break;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x7d8);
  lVar4 = (longlong)*(int *)(param_1 + 0x7e0) * 0x270 + lVar3;
  for (; lVar3 != lVar4; lVar3 = lVar3 + 0x270) {
    cVar2 = FUN_14058c1e0(lVar3 + 0x18,param_2);
    if ((cVar2 == '\0') && (*(longlong *)(lVar3 + 0x10) != param_2)) {
      cVar2 = FUN_14058c1e0(lVar3,param_2);
      bVar1 = false;
      if (cVar2 != '\0') goto LAB_1412bf5b5;
    }
    else {
LAB_1412bf5b5:
      bVar1 = true;
    }
    if (bVar1) {
      if (lVar3 != 0) {
        return lVar3;
      }
      break;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x7f8);
  lVar4 = (longlong)*(int *)(param_1 + 0x800) * 0x270 + lVar3;
  for (; lVar3 != lVar4; lVar3 = lVar3 + 0x270) {
    cVar2 = FUN_14058c1e0(lVar3 + 0x18,param_2);
    if ((cVar2 != '\0') || (bVar1 = false, *(longlong *)(lVar3 + 0x10) == param_2)) {
      bVar1 = true;
    }
    if (bVar1) {
      if (lVar3 != 0) {
        return lVar3;
      }
      break;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x7a8);
  lVar4 = (longlong)*(int *)(param_1 + 0x7b0) * 0x270 + lVar3;
  for (; lVar3 != lVar4; lVar3 = lVar3 + 0x270) {
    cVar2 = FUN_14058c1e0(lVar3 + 0x18,param_2);
    if ((cVar2 != '\0') || (bVar1 = false, *(longlong *)(lVar3 + 0x10) == param_2)) {
      bVar1 = true;
    }
    if (bVar1) {
      if (lVar3 != 0) {
        return lVar3;
      }
      break;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x798);
  lVar4 = (longlong)*(int *)(param_1 + 0x7a0) * 0x270 + lVar3;
  for (; lVar3 != lVar4; lVar3 = lVar3 + 0x270) {
    cVar2 = FUN_14058c1e0(lVar3 + 0x18,param_2);
    if ((cVar2 != '\0') || (bVar1 = false, *(longlong *)(lVar3 + 0x10) == param_2)) {
      bVar1 = true;
    }
    if (bVar1) {
      if (lVar3 != 0) {
        return lVar3;
      }
      break;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x7c8);
  lVar4 = (longlong)*(int *)(param_1 + 2000) * 0x270 + lVar3;
  do {
    if (lVar3 == lVar4) {
LAB_1412bf70f:
      lVar3 = *(longlong *)(param_1 + 0x7b8);
      lVar4 = (longlong)*(int *)(param_1 + 0x7c0) * 0x270 + lVar3;
      while( true ) {
        if (lVar3 == lVar4) {
          return 0;
        }
        cVar2 = FUN_14058c1e0(lVar3 + 0x18,param_2);
        if ((cVar2 != '\0') || (bVar1 = false, *(longlong *)(lVar3 + 0x10) == param_2)) {
          bVar1 = true;
        }
        if (bVar1) break;
        lVar3 = lVar3 + 0x270;
      }
      return lVar3;
    }
    cVar2 = FUN_14058c1e0(lVar3 + 0x18,param_2);
    if ((cVar2 != '\0') || (bVar1 = false, *(longlong *)(lVar3 + 0x10) == param_2)) {
      bVar1 = true;
    }
    if (bVar1) {
      if (lVar3 != 0) {
        return lVar3;
      }
      goto LAB_1412bf70f;
    }
    lVar3 = lVar3 + 0x270;
  } while( true );
}



// FUNCTION 1412bf780 FUN_1412bf780 body=939 status=ok
// SIG undefined FUN_1412bf780(void)

void FUN_1412bf780(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined4 local_b8;
  undefined4 local_b4;
  int local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 local_50;
  undefined1 local_48 [16];
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    if (DAT_1468782f0 == '\0') {
      FUN_1412c54f0();
    }
    puVar9 = DAT_1468787b8 + (longlong)DAT_1468787c0 * 10;
    for (puVar12 = DAT_1468787b8; puVar12 != puVar9; puVar12 = puVar12 + 10) {
      uVar13 = 0;
      local_b8 = *puVar12;
      local_b4 = puVar12[1];
      local_b0 = puVar12[2];
      local_50 = *(undefined8 *)(puVar12 + 4);
      local_a0 = 0;
      local_98 = 0;
      local_a8 = 0;
      FString::FString(local_48,puVar12 + 6);
      FSoftObjectPath::operator=(&local_a8,&local_50);
      lVar6 = FWeakObjectPtr::Get(&local_b8);
      if (lVar6 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != local_b0) && (local_a8 != 0)) {
          lVar6 = FUN_141796df0(&local_a8);
          FWeakObjectPtr::operator=(&local_b8,lVar6);
          if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            local_b0 = DAT_1464b56f4;
          }
          lVar6 = FWeakObjectPtr::Get(&local_b8);
          if (lVar6 != 0) goto LAB_1412bf8f3;
        }
      }
      else {
LAB_1412bf8f3:
        uVar7 = FWeakObjectPtr::Get(&local_b8);
        if (uVar7 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != local_b0) && (local_90 = 0, local_a8 != 0)) {
            lVar6 = FUN_141796df0(&local_a8);
            FWeakObjectPtr::operator=(&local_b8,lVar6);
            if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              local_b0 = DAT_1464b56f4;
            }
            uVar7 = FWeakObjectPtr::Get(&local_b8);
            if (uVar7 != 0) goto LAB_1412bf96d;
          }
LAB_1412bf9a3:
          uVar7 = uVar13;
        }
        else {
LAB_1412bf96d:
          lVar6 = FUN_1414f4830();
          if ((*(int *)(*(longlong *)(uVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_1412bf9a3;
        }
        plVar8 = *(longlong **)(uVar7 + 0x30);
        uVar11 = (longlong)*(int *)(uVar7 + 0x38) & 0x1fffffffffffffff;
        if (plVar8 + *(int *)(uVar7 + 0x38) < plVar8) {
          uVar11 = 0;
        }
        if (uVar11 != 0) {
          do {
            lVar6 = *plVar8;
            if (lVar6 != 0) {
              local_88 = *(undefined8 *)(lVar6 + 0x78);
              FText::FText(local_80,lVar6 + 0x30);
              FText::FText(local_68,lVar6 + 0x60);
              iVar3 = (int)param_1[1];
              *(int *)(param_1 + 1) = iVar3 + 1;
              if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
                ResizeGrow(param_1,iVar3);
              }
              puVar10 = (undefined8 *)((longlong)iVar3 * 0x38 + *param_1);
              *puVar10 = local_88;
              FText::FText(puVar10 + 1,local_80);
              FText::FText(puVar10 + 4,local_68);
              plVar5 = local_60;
              if (local_60 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_60 + 1;
                lVar6 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*local_60)(local_60);
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
              plVar5 = local_78;
              if (local_78 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_78 + 1;
                lVar6 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*local_78)(local_78);
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
            }
            plVar8 = plVar8 + 1;
            uVar13 = uVar13 + 1;
          } while (uVar13 != uVar11);
        }
      }
      if (local_a0 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1412bfb30 FUN_1412bfb30 body=232 status=ok
// SIG undefined FUN_1412bfb30(void)

void FUN_1412bfb30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142cc2130();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146878890) && (_Init_thread_header(&DAT_146878890), DAT_146878890 == -1))
  {
    uVar1 = UAnimMontage::GetPrivateStaticClass();
    UAnimMontage::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PassthroughTarget",1);
    DAT_146878888 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146878890);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146878888 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146878888 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146878888 + 0x30));
  }
  return;
}



// FUNCTION 1412bfc20 FUN_1412bfc20 body=249 status=ok
// SIG undefined FUN_1412bfc20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1412bfc20(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined *puVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146878820) {
    _Init_thread_header(&DAT_146878820);
    if (DAT_146878820 == -1) {
      _DAT_1468787f8 = &PTR_FUN_143f740c8;
      DAT_146878810 = 0;
      DAT_146878800 = 0;
      DAT_146878808 = 0;
      _DAT_146878818 = 0;
      atexit(FUN_143e653e0);
      _Init_thread_footer(&DAT_146878820);
    }
  }
  if (*(longlong *)(param_1 + 0x5c0) == 0) {
    puVar2 = &DAT_1468787f8;
  }
  else {
    puVar2 = (undefined *)(*(longlong *)(param_1 + 0x5c0) + 8);
  }
  *param_2 = &PTR_FUN_143f73d18;
  param_2[1] = *(undefined8 *)(puVar2 + 8);
  lVar1 = *(longlong *)(puVar2 + 0x10);
  param_2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *param_2 = &PTR_FUN_143f740c8;
  param_2[3] = 0;
  param_2[4] = 0;
  return param_2;
}



// FUNCTION 1412bfd20 FUN_1412bfd20 body=101 status=ok
// SIG undefined FUN_1412bfd20(void)

longlong FUN_1412bfd20(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x940) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x940) + 0x3d0), lVar1 != 0)) {
    lVar3 = UTexture::GetPrivateStaticClass();
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
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1412bfd90 FUN_1412bfd90 body=59 status=ok
// SIG undefined FUN_1412bfd90(void)

longlong FUN_1412bfd90(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xf8);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x100) * 2;
  while( true ) {
    if (plVar1 == plVar2) {
      return 0;
    }
    if (*plVar1 == param_2) break;
    plVar1 = plVar1 + 2;
  }
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  return plVar1[1];
}



// FUNCTION 1412bfdd0 FUN_1412bfdd0 body=101 status=ok
// SIG undefined FUN_1412bfdd0(void)

longlong FUN_1412bfdd0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x948) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x948) + 0x3d0), lVar1 != 0)) {
    lVar3 = UTexture::GetPrivateStaticClass();
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
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1412bfe40 FUN_1412bfe40 body=1120 status=ok
// SIG undefined FUN_1412bfe40(void)

void FUN_1412bfe40(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;
  char cVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 *puVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 local_130;
  undefined4 local_12c;
  int local_128;
  longlong local_120;
  longlong local_118;
  undefined8 local_110;
  longlong *local_108;
  longlong local_100;
  undefined **local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0 [24];
  longlong local_b8;
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  
  plVar10 = (longlong *)FUN_142f6c9f0(param_2);
  if (plVar10 != (longlong *)0x0) {
    lVar17 = *(longlong *)(param_1 + 0x158);
    lVar18 = (longlong)*(int *)(param_1 + 0x160) * 0x50 + lVar17;
    local_108 = plVar10;
    for (; lVar17 != lVar18; lVar17 = lVar17 + 0x50) {
      local_f0 = *(undefined8 *)(lVar17 + 8);
      local_e8 = *(undefined4 *)(lVar17 + 0x10);
      uStack_e4 = *(undefined4 *)(lVar17 + 0x14);
      uStack_e0 = *(undefined4 *)(lVar17 + 0x18);
      uStack_dc = *(undefined4 *)(lVar17 + 0x1c);
      local_d8 = *(undefined4 *)(lVar17 + 0x20);
      local_d4 = *(undefined4 *)(lVar17 + 0x24);
      local_f8 = &PTR_FUN_144278ac0;
      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_d0,lVar17 + 0x28);
      cVar9 = FUN_142f63b20(&local_f8,0);
      if ((cVar9 != '\0') && (lVar11 = FUN_142f5f490(&local_f8), lVar11 != 0)) {
        puVar12 = (undefined8 *)FUN_142f5ad80(&local_f8,local_a8);
        cVar9 = FUN_142f63670(plVar10,lVar11,*puVar12,param_2);
        if (cVar9 != '\0') {
          cVar9 = FText::IsEmpty(param_3);
          if (cVar9 != '\0') {
            uVar13 = FUN_142f5ad80(&local_f8,local_a0);
            uVar13 = FUN_142f5bb60(uVar13);
            uVar13 = FUN_142dea370(uVar13,local_80);
            FText::operator=(param_3,uVar13);
            plVar3 = local_78;
            if (local_78 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_78 + 1;
              lVar14 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*local_78)(local_78);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar5 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
          }
          uVar13 = ULiveLinkTimeSynchronizationSource::GetDisplayName(lVar11,local_68);
          iVar5 = (int)param_4[1];
          *(int *)(param_4 + 1) = iVar5 + 1;
          if (*(int *)((longlong)param_4 + 0xc) < iVar5 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(param_4,iVar5);
          }
          FText::FText(*param_4 + (longlong)iVar5 * 0x18,uVar13);
          plVar3 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_60 + 1;
            lVar11 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
        }
      }
      local_f8 = &PTR_FUN_144278ac0;
      if (local_b8 != 0) {
        FMemory::Free();
      }
    }
    puVar7 = *(undefined4 **)(param_1 + 0x1d0);
    iVar5 = *(int *)(param_1 + 0x1d8);
    if (puVar7 != puVar7 + (longlong)iVar5 * 10) {
      lVar17 = 0;
      puVar16 = puVar7 + 1;
      do {
        local_130 = puVar16[-1];
        local_12c = *puVar16;
        local_128 = puVar16[1];
        local_98 = *(undefined8 *)(puVar16 + 3);
        local_118 = 0;
        local_110 = 0;
        local_120 = 0;
        FString::FString(local_90,puVar16 + 5);
        FSoftObjectPath::operator=(&local_120,&local_98);
        lVar11 = FWeakObjectPtr::Get(&local_130);
        lVar18 = lVar17;
        if (lVar11 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != local_128) && (local_120 != 0)) {
            lVar11 = FUN_141796df0(&local_120);
            FWeakObjectPtr::operator=(&local_130,lVar11);
            if ((lVar11 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              local_128 = DAT_1464b56f4;
            }
            lVar11 = FWeakObjectPtr::Get(&local_130);
            if (lVar11 != 0) goto LAB_1412c0167;
          }
        }
        else {
LAB_1412c0167:
          lVar14 = FUN_14171bfe0();
          if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (bVar8) {
            lVar15 = FUN_142f71d80();
            lVar14 = lVar11;
            do {
              lVar18 = lVar11;
              if (lVar14 == lVar15) break;
              lVar14 = *(longlong *)(lVar14 + 0x30);
              lVar18 = lVar17;
            } while (lVar14 != 0);
          }
        }
        local_100 = lVar18;
        cVar9 = (**(code **)(*local_108 + 0x728))(local_108,lVar18);
        if (cVar9 != '\0') {
          uVar13 = FUN_142f5bb60(&local_100);
          uVar13 = FUN_142dea370(uVar13,local_50);
          iVar6 = (int)param_5[1];
          *(int *)(param_5 + 1) = iVar6 + 1;
          if (*(int *)((longlong)param_5 + 0xc) < iVar6 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(param_5,iVar6);
          }
          FText::FText(*param_5 + (longlong)iVar6 * 0x18,uVar13);
          plVar10 = local_48;
          if (local_48 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_48 + 1;
            lVar18 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*local_48)(local_48);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              iVar6 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
              }
            }
          }
        }
        if (local_118 != 0) {
          FMemory::Free();
        }
        puVar4 = puVar16 + 9;
        puVar16 = puVar16 + 10;
      } while (puVar4 != puVar7 + (longlong)iVar5 * 10);
    }
  }
  return;
}



// FUNCTION 1412c02a0 FUN_1412c02a0 body=259 status=ok
// SIG undefined FUN_1412c02a0(void)

longlong FUN_1412c02a0(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar3 = *(longlong *)(param_1 + 0x798);
      lVar4 = (longlong)*(int *)(param_1 + 0x7a0) * 0x270 + lVar3;
      do {
        if (lVar3 == lVar4) {
LAB_1412c0343:
          lVar3 = *(longlong *)(param_1 + 0x7a8);
          lVar4 = (longlong)*(int *)(param_1 + 0x7b0) * 0x270 + lVar3;
          while( true ) {
            if (lVar3 == lVar4) {
              return 0;
            }
            cVar2 = FUN_14058c1e0(lVar3 + 0x18,param_2);
            if (cVar2 != '\0') break;
            lVar3 = lVar3 + 0x270;
          }
          return lVar3;
        }
        cVar2 = FUN_14058c1e0(lVar3 + 0x18,param_2);
        if (cVar2 != '\0') {
          if (lVar3 != 0) {
            return lVar3;
          }
          goto LAB_1412c0343;
        }
        lVar3 = lVar3 + 0x270;
      } while( true );
    }
  }
  return 0;
}



// FUNCTION 1412c03b0 FUN_1412c03b0 body=54 status=ok
// SIG undefined FUN_1412c03b0(void)

undefined1 FUN_1412c03b0(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x498) != 0) {
    lVar1 = FUN_1412c02a0(*(longlong *)(param_1 + 0x498),param_1);
    if (lVar1 != 0) {
      return *(undefined1 *)(lVar1 + 600);
    }
  }
  return 5;
}



// FUNCTION 1412c03f0 FUN_1412c03f0 body=163 status=ok
// SIG undefined FUN_1412c03f0(void)

void FUN_1412c03f0(longlong param_1,float param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x5d8);
  if (((lVar1 != 0) && (*(longlong *)(param_1 + 0x9d0) != 0)) &&
     (fVar3 = *(float *)(param_1 + 0x844), 0.0001 < ABS(fVar3))) {
    if (*(char *)(*(longlong *)(param_1 + 0x9d0) + 0x17e) == '\0') {
      fVar3 = -fVar3;
    }
    fVar3 = fVar3 * *(float *)(lVar1 + 0x5c) * param_2 + *(float *)(param_1 + 0x868);
    if (*(char *)(param_1 + 0xd20) == '\0') {
      fVar2 = *(float *)(lVar1 + 0x3c);
      if (*(float *)(lVar1 + 0x3c) <= fVar3) {
        fVar2 = *(float *)(lVar1 + 0x40);
        if (fVar3 <= *(float *)(lVar1 + 0x40)) {
          fVar2 = fVar3;
        }
        *(float *)(param_1 + 0x868) = fVar2;
        return;
      }
    }
    else {
      fVar2 = *(float *)(lVar1 + 0xf8);
      if ((*(float *)(lVar1 + 0xf8) <= fVar3) &&
         (fVar2 = *(float *)(lVar1 + 0xf4), fVar3 <= *(float *)(lVar1 + 0xf4))) {
        fVar2 = fVar3;
      }
    }
    *(float *)(param_1 + 0x868) = fVar2;
  }
  return;
}



// FUNCTION 1412c04a0 FUN_1412c04a0 body=225 status=ok
// SIG undefined FUN_1412c04a0(void)

void FUN_1412c04a0(longlong param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  if (0.0 < *(float *)(param_1 + 0xce4)) {
    *(undefined4 *)(param_1 + 0x864) = 0;
    *(float *)(param_1 + 0xce4) = *(float *)(param_1 + 0xce4) - param_2;
    return;
  }
  if (((*(longlong *)(param_1 + 0x5d8) != 0) && (*(longlong *)(param_1 + 0x9d0) != 0)) &&
     (fVar1 = *(float *)(param_1 + 0x840), 0.0001 < ABS(fVar1))) {
    if (*(char *)(*(longlong *)(param_1 + 0x9d0) + 0x17f) == '\0') {
      fVar1 = -fVar1;
    }
    fVar1 = fVar1 * *(float *)(*(longlong *)(param_1 + 0x5d8) + 0x5c) * param_2 +
            *(float *)(param_1 + 0x864);
    if ((ABS(param_3) <= 0.0001) && (ABS(param_4) <= 0.0001)) {
      *(float *)(param_1 + 0x864) = fVar1;
      return;
    }
    if ((param_3 <= fVar1) && (param_3 = fVar1, param_4 <= fVar1)) {
      param_3 = param_4;
    }
    *(float *)(param_1 + 0x864) = param_3;
  }
  return;
}



// FUNCTION 1412c0590 FUN_1412c0590 body=302 status=ok
// SIG undefined FUN_1412c0590(void)

void FUN_1412c0590(longlong param_1,float param_2,float *param_3,float param_4,float param_5,
                  float param_6)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((*(longlong *)(param_1 + 0x5d8) != 0) && (*(longlong *)(param_1 + 0x728) != 0)) {
    fVar4 = *(float *)(param_1 + 0x830) + *(float *)(param_1 + 0x834);
    if (0.0001 < ABS(fVar4)) {
      fVar2 = *(float *)(param_1 + 0x9ac);
      fVar3 = param_2 * *(float *)(param_1 + 0x694);
      if (fVar2 <= fVar4) {
        fVar2 = fVar2 + fVar3;
        if (fVar4 <= fVar2) {
          fVar2 = fVar4;
        }
      }
      else {
        fVar2 = fVar2 - fVar3;
        if (fVar2 <= fVar4) {
          fVar2 = fVar4;
        }
      }
    }
    else {
      fVar2 = 0.0;
    }
    *(float *)(param_1 + 0x9ac) = fVar2;
    *param_3 = 0.0;
    if ((0.0001 < ABS(*(float *)(param_1 + 0x9ac))) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x5d8) + 0xd0), lVar1 != 0)) {
      fVar4 = (float)UCurveFloat::GetFloatValue
                               (lVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x728) + 0x2d0));
      fVar4 = (*(float *)(param_1 + 0x830) + *(float *)(param_1 + 0x834)) *
              fVar4 * param_2 * param_6;
      *param_3 = fVar4;
      fVar4 = fVar4 + *(float *)(param_1 + 0x874);
      if ((param_4 <= fVar4) && (param_4 = fVar4, param_5 <= fVar4)) {
        param_4 = param_5;
      }
      *(float *)(param_1 + 0x874) = param_4;
    }
  }
  return;
}



// FUNCTION 1412c06c0 FUN_1412c06c0 body=1600 status=ok
// SIG undefined FUN_1412c06c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412c06c0(longlong param_1,float param_2,float *param_3,float *param_4,float param_5,
                  float param_6)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  float *pfVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined1 local_b8 [16];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  
  lVar1 = *(longlong *)(param_1 + 0x5d8);
  if (((lVar1 != 0) && (*(longlong *)(param_1 + 0x728) != 0)) && (*(longlong *)(lVar1 + 0xc0) != 0))
  {
    fVar12 = SQRT(*(float *)(param_1 + 0x83c) * *(float *)(param_1 + 0x83c) +
                  *(float *)(param_1 + 0x838) * *(float *)(param_1 + 0x838));
    if ((ABS(*(float *)(param_1 + 0x874) - *(float *)(lVar1 + 0x60)) <= 0.0001) ||
       (ABS(*(float *)(param_1 + 0x874) - *(float *)(param_1 + 0x9a8)) <= 0.0001)) {
      fVar11 = (float)UCurveFloat::GetFloatValue
                                (*(longlong *)(lVar1 + 0xc0),
                                 *(undefined4 *)(*(longlong *)(param_1 + 0x728) + 0x2d0));
      fVar11 = fVar11 * (*(float *)(param_1 + 0x834) + *(float *)(param_1 + 0x830)) *
                        param_2 * 10000.0;
      pfVar5 = (float *)FUN_142369f10(*(undefined8 *)(param_1 + 0x728),&local_c8);
      fVar7 = fVar11 * pfVar5[2];
      *(ulonglong *)(param_1 + 0x9b0) = CONCAT44(fVar11 * pfVar5[1],fVar11 * *pfVar5);
      local_c0 = fVar7;
    }
    else {
      *(undefined8 *)(param_1 + 0x9b0) = _DAT_1468b5d90;
      fVar7 = DAT_1468b5d98;
    }
    uVar3 = (ulonglong)(uint)fVar7;
    *(float *)(param_1 + 0x9b8) = fVar7;
    if (((*(char *)(param_1 + 0x9f8) != '\0') ||
        (uVar3 = *(ulonglong *)(param_1 + 0x820), uVar3 == 0)) ||
       ((*(char *)(param_1 + 0x82c) != '\0' ||
        (((1.0 - *(float *)(param_1 + 0x828)) * 0.3 <= fVar12 ||
         (fVar7 = ABS(*(float *)(param_1 + 0x844)) + ABS(*(float *)(param_1 + 0x840)),
         *(float *)(param_1 + 0x848) <= fVar7 && fVar7 != *(float *)(param_1 + 0x848))))))) {
      lVar1 = *(longlong *)(param_1 + 0x728);
      local_a8 = *(float *)(lVar1 + 0x210);
      fStack_a4 = *(float *)(lVar1 + 0x214);
      fStack_a0 = *(float *)(lVar1 + 0x218);
      fStack_9c = *(float *)(lVar1 + 0x21c);
      auVar9._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_a4);
      auVar9._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_a8);
      auVar9._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_a0);
      auVar9._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_9c);
      iVar2 = movmskps((int)uVar3,auVar9);
      if (iVar2 != 0) {
        *(float *)(lVar1 + 0x250) = local_a8;
        *(float *)(lVar1 + 0x254) = fStack_a4;
        *(float *)(lVar1 + 600) = fStack_a0;
        *(float *)(lVar1 + 0x25c) = fStack_9c;
        puVar4 = (undefined8 *)FQuat::Rotator(&local_a8,&local_c8);
        *(undefined8 *)(lVar1 + 0x260) = *puVar4;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar4 + 1);
      }
      uVar6 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
      local_d0 = *(float *)(lVar1 + 0x268);
      fVar7 = *(float *)(param_1 + 0x83c);
      local_d8 = CONCAT44(uVar6,0x42340000);
      local_c8 = CONCAT44(uVar6,0x42340000);
      local_c0 = local_d0;
      pfVar5 = (float *)UKismetMathLibrary::GetForwardVector(local_b8,&local_d8);
      fVar11 = *(float *)(param_1 + 0x838);
      fVar8 = *pfVar5;
      fVar10 = pfVar5[1];
      pfVar5 = (float *)UKismetMathLibrary::GetRightVector(&local_a8,&local_c8);
      fVar10 = fVar11 * pfVar5[1] + fVar7 * fVar10;
      fVar11 = fVar7 * fVar8 + fVar11 * *pfVar5;
      fVar7 = fVar10 * fVar10 + fVar11 * fVar11;
      if (1e-08 < fVar7) {
        auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
        fVar8 = auVar9._0_4_;
        fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
        fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
        fVar11 = fVar11 * fVar8;
        fVar10 = fVar10 * fVar8;
      }
      fVar7 = 0.0;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x5d8) + 0xb8);
      if ((lVar1 != 0) && (*(char *)(param_1 + 0xd20) == '\0')) {
        fVar7 = 1.0;
        if ((SQRT(*(float *)(param_1 + 0x83c) * *(float *)(param_1 + 0x83c) +
                  *(float *)(param_1 + 0x838) * *(float *)(param_1 + 0x838)) < 0.9) &&
           (*(char *)(param_1 + 0x9f8) == '\0')) {
          fVar7 = *(float *)(param_1 + 0x828);
        }
        fVar8 = *(float *)(param_1 + 0x850);
        if ((fVar12 < fVar8) || (fVar8 = *(float *)(param_1 + 0x854), fVar8 <= fVar12)) {
          fVar12 = fVar8;
        }
        if (0.05 <= param_2) {
          param_2 = 0.05;
        }
        if (0.0 <= fVar7) {
          if (1.0 <= fVar7) {
            fVar7 = 1.0;
          }
        }
        else {
          fVar7 = 0.0;
        }
        fVar8 = (float)UCurveFloat::GetFloatValue
                                 (lVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x728) + 0x2d0));
        fVar7 = -(fVar8 * param_2 * fVar12 * *(float *)(*(longlong *)(param_1 + 0x5d8) + 0xa4) *
                          *(float *)(param_1 + 0x84c) * (fVar7 * 0.95 + 0.05) * param_6);
      }
      fVar11 = fVar11 * fVar7 + *(float *)(param_1 + 0x858) + *(float *)(param_1 + 0x9b0);
      fVar12 = -*param_4 - param_5;
      if ((-*param_4 - param_5 <= fVar11) &&
         (fVar12 = param_5 - *param_3, fVar11 <= param_5 - *param_3)) {
        fVar12 = fVar11;
      }
      fVar11 = fVar10 * fVar7 + *(float *)(param_1 + 0x85c) + *(float *)(param_1 + 0x9b4);
      fVar7 = *(float *)(param_1 + 0x860) + *(float *)(param_1 + 0x9b8);
      *(float *)(param_1 + 0x858) = fVar12;
      fVar12 = -param_4[1] - param_5;
      if ((-param_4[1] - param_5 <= fVar11) &&
         (fVar12 = param_5 - param_3[1], fVar11 <= param_5 - param_3[1])) {
        fVar12 = fVar11;
      }
      *(float *)(param_1 + 0x85c) = fVar12;
      fVar12 = -param_4[2] - param_5;
      if ((-param_4[2] - param_5 <= fVar7) &&
         (fVar12 = param_5 - param_3[2], fVar7 <= param_5 - param_3[2])) {
        fVar12 = fVar7;
      }
      *(float *)(param_1 + 0x860) = fVar12;
    }
    else {
      lVar1 = *(longlong *)(uVar3 + 0x168);
      if (lVar1 == 0) {
        local_d8 = _DAT_1468b5d90;
        local_d0 = DAT_1468b5d98;
      }
      else {
        local_d8 = *(undefined8 *)(lVar1 + 0x220);
        local_d0 = *(float *)(lVar1 + 0x228);
      }
      *(ulonglong *)(param_1 + 0x858) =
           CONCAT44(*(float *)(param_1 + 0x9b4) - (float)((ulonglong)local_d8 >> 0x20) * 1.0,
                    *(float *)(param_1 + 0x9b0) - (float)local_d8 * 1.0);
      *(float *)(param_1 + 0x860) = *(float *)(param_1 + 0x9b8) - local_d0 * 1.0;
    }
  }
  return;
}



// FUNCTION 1412c0d00 FUN_1412c0d00 body=735 status=ok
// SIG undefined FUN_1412c0d00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1412c0d00(longlong param_1,longlong param_2,float *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float local_a8;
  float fStack_a4;
  float local_a0;
  
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_1 + 0x118), lVar1 != 0)) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(longlong *)(lVar1 + 0x528) != 0)) {
      uVar5 = *(uint *)(param_2 + 0x230) & _DAT_1468783d0;
      uVar6 = *(uint *)(param_2 + 0x234) & uRam00000001468783d4;
      uVar7 = *(uint *)(param_2 + 0x238) & uRam00000001468783d8;
      uVar8 = *(uint *)(param_2 + 0x23c) & uRam00000001468783dc;
      auVar12._4_4_ = uVar6;
      auVar12._0_4_ = uVar5;
      auVar12._8_4_ = uVar7;
      auVar12._12_4_ = uVar8;
      auVar13._4_4_ = uVar7;
      auVar13._0_4_ = uVar6;
      auVar13._8_4_ = uVar5;
      auVar13._12_4_ = uVar8;
      auVar13 = minps(auVar12,auVar13);
      auVar2._4_4_ = uVar5;
      auVar2._0_4_ = uVar7;
      auVar2._8_4_ = uVar6;
      auVar2._12_4_ = uVar8;
      auVar13 = minps(auVar13,auVar2);
      fVar11 = auVar13._0_4_ * *(float *)(param_2 + 0x710);
      if (0.0 < fVar11) {
        FUN_1426e1ca0(*(longlong *)(lVar1 + 0x528),&local_a8);
        fVar14 = *param_3 - local_a8;
        fVar15 = param_3[1] - fStack_a4;
        local_a0 = param_3[2] - local_a0;
        fVar9 = fVar15 * fVar15 + fVar14 * fVar14 + local_a0 * local_a0;
        if (1.0 < fVar9) {
          auVar13 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
          fVar10 = auVar13._0_4_;
          fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
          fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
          fVar14 = fVar14 * fVar10;
          fVar15 = fVar15 * fVar10;
          local_a0 = local_a0 * fVar10;
        }
        fVar10 = (float)*(undefined8 *)param_3;
        fStack_a4 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
        fVar9 = (fVar10 - *(float *)(param_2 + 0x220)) * fVar14 +
                fVar15 * (fStack_a4 - *(float *)(param_2 + 0x224)) +
                local_a0 * (param_3[2] - *(float *)(param_2 + 0x228));
        fVar10 = (fVar10 - fVar9 * fVar14) - *(float *)(param_2 + 0x220);
        fVar14 = (fStack_a4 - fVar9 * fVar15) - *(float *)(param_2 + 0x224);
        fVar9 = (param_3[2] - fVar9 * local_a0) - *(float *)(param_2 + 0x228);
        return 1.0 - SQRT(fVar10 * fVar10 + fVar14 * fVar14 + fVar9 * fVar9) * (1.0 / fVar11);
      }
    }
  }
  return 0.0;
}



// FUNCTION 1412c0fe0 FUN_1412c0fe0 body=808 status=ok
// SIG undefined FUN_1412c0fe0(void)

void FUN_1412c0fe0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong local_a8 [2];
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if (*(longlong *)(param_1 + 0x498) != 0) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x498) + 0x118);
    if (lVar9 != 0) {
      lVar6 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        plVar7 = (longlong *)FUN_14129d6f0(param_1 + 0x5b0,local_a8,lVar9);
        if (param_2 != plVar7) {
          if (*param_2 != 0) {
            FMemory::Free();
          }
          *param_2 = *plVar7;
          *plVar7 = 0;
          *(int *)(param_2 + 1) = (int)plVar7[1];
          *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar7 + 0xc);
          plVar7[1] = 0;
        }
        if (local_a8[0] != 0) {
          FMemory::Free();
        }
      }
    }
    lVar9 = param_1 + 0x5b0;
    uVar8 = FUN_1412990a0(lVar9,local_98);
    FText::operator=(param_3,uVar8);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_90 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    uVar8 = FUN_1412977b0(lVar9,local_80);
    FText::operator=(param_4,uVar8);
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_78 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)local_78 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    lVar6 = FUN_1412bf070(*(undefined8 *)(param_1 + 0x498),param_1);
    if (lVar6 == 0) {
      uVar8 = FUN_141298fe0(lVar9,local_38);
      iVar2 = (int)param_5[1];
      *(int *)(param_5 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_5,iVar2);
      }
      FText::FText(*param_5 + (longlong)iVar2 * 0x18,uVar8);
    }
    else {
      if (*(char *)(lVar6 + 0x25b) == '\x01') {
        uVar8 = FUN_141297f40(lVar9,local_68);
        iVar2 = (int)param_5[1];
        *(int *)(param_5 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_5 + 0xc) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_5,iVar2);
        }
        FText::FText(*param_5 + (longlong)iVar2 * 0x18,uVar8);
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_60 + 1;
          lVar6 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)local_60 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_60 + 8))(local_60,1);
            }
          }
        }
        if ((iVar2 != -1) &&
           (cVar5 = FText::IsEmpty(*param_5 + (longlong)iVar2 * 0x18), cVar5 == '\0')) {
          return;
        }
      }
      uVar8 = FUN_141298fe0(lVar9,local_50);
      iVar2 = (int)param_5[1];
      *(int *)(param_5 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_5,iVar2);
      }
      FText::FText(*param_5 + (longlong)iVar2 * 0x18,uVar8);
      local_30 = local_48;
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_30 + 1;
      lVar9 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1412c1310 FUN_1412c1310 body=2428 status=ok
// SIG undefined FUN_1412c1310(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412c1310(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 auStack_2f8 [32];
  longlong *local_2d8;
  longlong local_2c8 [4];
  undefined4 *local_2a8;
  ulonglong *puStack_2a0;
  undefined8 local_298;
  longlong *local_290;
  undefined8 local_288;
  longlong local_280;
  undefined8 local_278;
  longlong local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  undefined1 local_228 [8];
  longlong *local_220;
  undefined1 local_210 [8];
  longlong *local_208;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined1 local_1e0 [8];
  longlong *local_1d8;
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined1 local_198 [8];
  longlong *local_190;
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [24];
  undefined4 local_b8 [2];
  longlong local_b0;
  longlong *local_a0;
  char local_90;
  undefined4 local_88 [4];
  undefined1 local_78 [8];
  longlong *local_70;
  char local_60;
  ulonglong local_58 [3];
  
  local_58[0] = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  if (*(longlong *)(param_1 + 0x4d0) != 0) {
    FString::operator=(param_2,*(longlong *)(param_1 + 0x4d0) + 0xb0);
  }
  if (*(longlong *)(param_1 + 0x5c0) == 0) goto LAB_1412c1c42;
  lVar7 = FUN_1422312c0(param_1);
  if (lVar7 != 0) {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      local_298 = *(undefined8 *)(*(longlong *)(param_1 + 0x5c0) + 0x10);
      local_290 = *(longlong **)(*(longlong *)(param_1 + 0x5c0) + 0x18);
      if (local_290 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_290 + 1) = (int)local_290[1] + 1;
        UNLOCK();
      }
      local_2d8 = local_2c8 + 2;
      local_2c8[2] = 0;
      local_2c8[3] = 0;
      cVar6 = FUN_140d79f00(*(undefined8 *)(lVar7 + 0x478),&local_298,
                            CONCAT71((int7)((ulonglong)(lVar8 + 0x88) >> 8),1),0);
      if (cVar6 != '\0') {
        FText::FText(local_1e0);
        uVar9 = FText::FromString(local_1f8,local_2c8 + 2);
        FText::operator=(param_4,uVar9);
        if (local_1f0 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_1f0 + 1;
          lVar8 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_1f0)(local_1f0);
            LOCK();
            piVar1 = (int *)((longlong)local_1f0 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_1f0 + 8))(local_1f0,1);
            }
          }
        }
        if (local_1d8 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_1d8 + 1;
          lVar8 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_1d8)(local_1d8);
            LOCK();
            piVar1 = (int *)((longlong)local_1d8 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_1d8 + 8))(local_1d8,1);
            }
          }
        }
      }
      uVar9 = FUN_140bbae80(lVar7,local_1c8,*(undefined4 *)(*(longlong *)(param_1 + 0x5c0) + 0x6c));
      iVar3 = (int)param_5[1];
      *(int *)(param_5 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar3 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_5,iVar3);
      }
      FText::FText(*param_5 + (longlong)iVar3 * 0x18,uVar9);
      if (local_1c0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_1c0 + 1;
        lVar7 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_1c0)(local_1c0);
          LOCK();
          piVar1 = (int *)((longlong)local_1c0 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_1c0 + 8))(local_1c0,1);
          }
        }
      }
      if (local_2c8[2] != 0) {
        FMemory::Free();
      }
      plVar4 = local_290;
      if (local_290 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_290 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_290)(local_290);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
    }
  }
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x5c0) + 0x40);
  uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_198,L"LVL {0}<BR>",L"ZoneMapIconBase",L"FriendLevelLabelPOI");
  puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_f0,uVar9);
  local_b8[0] = 0;
  local_2a8 = local_b8;
  local_90 = '\0';
  puStack_2a0 = (ulonglong *)local_88;
  local_288 = *puVar10;
  local_280 = puVar10[1];
  if (local_280 != 0) {
    LOCK();
    *(int *)(local_280 + 8) = *(int *)(local_280 + 8) + 1;
    UNLOCK();
  }
  local_b0 = (longlong)iVar3;
  local_268 = local_2a8;
  uStack_260 = (undefined4 *)puStack_2a0;
  uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_258,&local_268);
  uVar9 = FText::Format(local_1b0,&local_288,uVar9);
  FText::FText(local_228,uVar9);
  if (local_1a8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_1a8 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_1a8)(local_1a8);
      LOCK();
      piVar1 = (int *)((longlong)local_1a8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1a8 + 8))(local_1a8,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_258);
  if ((local_90 != '\0') && (local_90 = '\0', local_a0 != (longlong *)0x0)) {
    LOCK();
    plVar4 = local_a0 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)local_a0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  plVar4 = (longlong *)puVar10[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  iVar3 = (int)param_5[1];
  *(int *)(param_5 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_5 + 0xc) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_5,iVar3);
  }
  FText::FText(*param_5 + (longlong)iVar3 * 0x18,local_228);
  if (local_220 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_220 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_220)(local_220);
      LOCK();
      piVar1 = (int *)((longlong)local_220 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_220 + 8))(local_220,1);
      }
    }
  }
  if (local_190 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_190 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_190)(local_190);
      LOCK();
      piVar1 = (int *)((longlong)local_190 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_190 + 8))(local_190,1);
      }
    }
  }
  lVar7 = FUN_140c14280(local_d0,*(undefined4 *)(*(longlong *)(param_1 + 0x5c0) + 0x70));
  uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_168,L"Mission: {0}<BR>",L"ZoneMapIconBase",L"FriendMissionLabelPOI");
  puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_e0,uVar9);
  local_88[0] = 4;
  FText::FText(local_78,lVar7);
  local_278 = *puVar10;
  local_2a8 = local_88;
  puStack_2a0 = local_58;
  local_270 = puVar10[1];
  local_60 = '\x01';
  if (local_270 != 0) {
    LOCK();
    *(int *)(local_270 + 8) = *(int *)(local_270 + 8) + 1;
    UNLOCK();
  }
  local_248 = local_2a8;
  uStack_240 = puStack_2a0;
  uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_238,&local_248);
  uVar9 = FText::Format(local_180,&local_278,uVar9);
  FText::FText(local_210,uVar9);
  if (local_178 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_178 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_178)(local_178);
      LOCK();
      piVar1 = (int *)((longlong)local_178 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_178 + 8))(local_178,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_238);
  if ((local_60 != '\0') && (local_60 = '\0', local_70 != (longlong *)0x0)) {
    LOCK();
    plVar4 = local_70 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  plVar4 = (longlong *)puVar10[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = *(longlong **)(lVar7 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  iVar3 = (int)param_5[1];
  *(int *)(param_5 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_5 + 0xc) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_5,iVar3);
  }
  FText::FText(*param_5 + (longlong)iVar3 * 0x18,local_210);
  if (local_208 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_208 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_208)(local_208);
      LOCK();
      piVar1 = (int *)((longlong)local_208 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_208 + 8))(local_208,1);
      }
    }
  }
  if (local_160 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_160 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_160)(local_160);
      LOCK();
      piVar1 = (int *)((longlong)local_160 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_160 + 8))(local_160,1);
      }
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x5c0);
  if (*(char *)(lVar7 + 0x80) == '\0') {
    if (*(char *)(lVar7 + 0x81) != '\0') goto LAB_1412c1a96;
  }
  else {
    if (*(char *)(lVar7 + 0x81) == '\0') {
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_150,L"Can join friend\'s game.",L"ZoneMapIconBase",
                         L"FriendCanJoinLabelPOI");
      iVar3 = (int)param_5[1];
      *(int *)(param_5 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar3 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_5,iVar3);
      }
      FText::FText(*param_5 + (longlong)iVar3 * 0x18,uVar9);
      local_130 = local_148;
    }
    else {
LAB_1412c1a96:
      if (*(char *)(lVar7 + 0x80) == '\0') goto LAB_1412c1b28;
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_138,L"Friend is requesting aid.",L"ZoneMapIconBase",
                         L"FriendLookingForHelpLabelPOI");
      iVar3 = (int)param_5[1];
      *(int *)(param_5 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar3 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_5,iVar3);
      }
      FText::FText(*param_5 + (longlong)iVar3 * 0x18,uVar9);
    }
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_130 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar1 = (int *)((longlong)local_130 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_130 + 8))(local_130,1);
        }
      }
    }
  }
LAB_1412c1b28:
  FText::FText(local_108);
  local_2c8[1] = 5;
  local_2c8[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2c8,0);
  local_2d8 = (longlong *)CONCAT62(local_2d8._2_6_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_2c8[0],5,&DAT_144763a94);
  uVar9 = FText::FromString(local_120,local_2c8);
  iVar3 = (int)param_5[1];
  *(int *)(param_5 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_5 + 0xc) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_5,iVar3);
  }
  FText::FText(*param_5 + (longlong)iVar3 * 0x18,uVar9);
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_118 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar1 = (int *)((longlong)local_118 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_118 + 8))(local_118,1);
      }
    }
  }
  if (local_2c8[0] != 0) {
    FMemory::Free();
  }
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_100 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
LAB_1412c1c42:
  if (*(longlong *)(param_1 + 0x4d0) != 0) {
    FText::operator=(param_3,*(longlong *)(param_1 + 0x4d0) + 0x30);
  }
  return;
}



// FUNCTION 1412c1c90 FUN_1412c1c90 body=918 status=ok
// SIG undefined FUN_1412c1c90(void)

void FUN_1412c1c90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *local_88;
  int local_80;
  longlong local_78 [2];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  
  TArray<FText,FDefaultAllocator>::Empty(param_5,0);
  lVar8 = FWeakObjectPtr::Get(param_1 + 0x590);
  if (lVar8 != 0) {
    lVar9 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      if (*(longlong *)(param_1 + 0x4d0) != 0) {
        FString::operator=(param_2,*(longlong *)(param_1 + 0x4d0) + 0xb0);
        FText::operator=(param_3,*(longlong *)(param_1 + 0x4d0) + 0x30);
        FText::operator=(param_4,*(longlong *)(param_1 + 0x4d0) + 0x48);
        cVar7 = FUN_1414f5020(param_1);
        lVar9 = 0x90;
        if (cVar7 != '\0') {
          lVar9 = 0x78;
        }
        FText::operator=(param_6,*(longlong *)(param_1 + 0x4d0) + lVar9);
      }
      uVar10 = (**(code **)(*(longlong *)(lVar8 + 0x608) + 0x68))
                         ((longlong *)(lVar8 + 0x608),local_68);
      FText::operator=(param_3,uVar10);
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)local_60 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
      TArray<FText,FDefaultAllocator>::Empty(param_5,0);
      FUN_141223c50(lVar8,&local_88,0);
      plVar1 = local_88 + local_80;
      for (plVar11 = local_88; plVar11 != plVar1; plVar11 = plVar11 + 1) {
        plVar5 = (longlong *)*plVar11;
        if (plVar5 != (longlong *)0x0) {
          lVar8 = FUN_1413ffe00();
          if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
              != lVar8 + 0x88)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if ((bVar6) && (lVar8 = (**(code **)(*plVar5 + 0x680))(plVar5), lVar8 != 0)) {
            FText::FText(local_38);
            uVar10 = FUN_14270d290(lVar8,local_78);
            uVar10 = FText::FromString(local_50,uVar10);
            iVar4 = (int)param_5[1];
            *(int *)(param_5 + 1) = iVar4 + 1;
            if (*(int *)((longlong)param_5 + 0xc) < iVar4 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(param_5,iVar4);
            }
            FText::FText(*param_5 + (longlong)iVar4 * 0x18,uVar10);
            plVar5 = local_48;
            if (local_48 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_48 + 1;
              lVar8 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_48)(local_48);
                LOCK();
                piVar2 = (int *)((longlong)plVar5 + 0xc);
                iVar4 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
            if (local_78[0] != 0) {
              FMemory::Free();
            }
            plVar5 = local_30;
            if (local_30 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_30 + 1;
              lVar8 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_30)(local_30);
                LOCK();
                piVar2 = (int *)((longlong)plVar5 + 0xc);
                iVar4 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
          }
        }
      }
      if (local_88 == (longlong *)0x0) {
        return;
      }
      FMemory::Free(local_88);
      return;
    }
  }
  if (*(longlong *)(param_1 + 0x4d0) != 0) {
    FString::operator=(param_2,*(longlong *)(param_1 + 0x4d0) + 0xb0);
    FText::operator=(param_3,*(longlong *)(param_1 + 0x4d0) + 0x30);
    FText::operator=(param_4,*(longlong *)(param_1 + 0x4d0) + 0x48);
    iVar4 = (int)param_5[1];
    lVar8 = *(longlong *)(param_1 + 0x4d0);
    *(int *)(param_5 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar4 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_5,iVar4);
    }
    FText::FText(*param_5 + (longlong)iVar4 * 0x18,lVar8 + 0x60);
    FText::operator=(param_6,*(longlong *)(param_1 + 0x4d0) + 0x78);
  }
  return;
}



// FUNCTION 1412c2030 FUN_1412c2030 body=796 status=ok
// SIG undefined FUN_1412c2030(void)

void FUN_1412c2030(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = param_1[0x93];
  if (lVar7 != 0) {
    if (param_1[0xa6] != 0) {
      FText::operator=(param_3,param_1[0xa6] + 0x30);
      FString::operator=(param_2,param_1[0xa6] + 0xb0);
      FText::operator=(param_4,param_1[0xa6] + 0x48);
      lVar7 = param_1[0x93];
    }
    lVar7 = FUN_1412c02a0(lVar7,param_1);
    if (lVar7 != 0) {
      FText::FText(local_68);
      local_78 = 0;
      local_70 = 0;
      local_88 = 0;
      local_80 = 0;
      uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
      FUN_1412bfe40(lVar7,uVar8,local_68,&local_78,&local_88);
      iVar3 = (int)local_80;
      uVar13 = (ulonglong)(int)local_80;
      if ((int)local_80 < 1) {
        puVar10 = local_68;
      }
      else {
        lVar9 = 0x5f8;
        if (0 < (int)local_70) {
          lVar9 = 0x610;
        }
        puVar10 = (undefined1 *)(param_1[0x93] + lVar9);
      }
      FText::operator=(param_3,puVar10);
      if (iVar3 < 1) {
        if (0 < (int)local_70) {
          iVar3 = (int)param_5[1];
          *(int *)(param_5 + 1) = iVar3 + 1;
          if (*(int *)((longlong)param_5 + 0xc) < iVar3 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(param_5,iVar3);
          }
          FText::FText(*param_5 + (longlong)iVar3 * 0x18,local_68);
          FText::operator=(param_3,local_78);
        }
      }
      else {
        FUN_142dea370(lVar7 + 0x168,local_50);
        cVar6 = FText::IsEmpty(local_50);
        if (cVar6 == '\0') {
          FText::operator=(param_3,local_50);
        }
        lVar7 = local_88 + uVar13 * 0x18;
        lVar9 = local_88;
        if (local_88 != lVar7) {
          do {
            FText::FText(local_38,lVar9);
            iVar3 = (int)param_5[1];
            *(int *)(param_5 + 1) = iVar3 + 1;
            if (*(int *)((longlong)param_5 + 0xc) < iVar3 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(param_5,iVar3);
            }
            FText::FText(*param_5 + (longlong)iVar3 * 0x18,local_38);
            plVar11 = local_30;
            if (local_30 != (longlong *)0x0) {
              LOCK();
              plVar4 = local_30 + 1;
              lVar5 = *plVar4;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*local_30)(local_30);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plVar11 + 8))(plVar11,1);
                }
              }
            }
            lVar9 = lVar9 + 0x18;
          } while (lVar9 != lVar7);
          uVar13 = local_80 & 0xffffffff;
        }
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_48 + 1;
          lVar7 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar1 = (int *)((longlong)local_48 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_48 + 8))(local_48,1);
            }
          }
          uVar13 = local_80 & 0xffffffff;
        }
      }
      if ((int)uVar13 != 0) {
        plVar11 = (longlong *)(local_88 + 8);
        do {
          plVar4 = (longlong *)*plVar11;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar4 + 1;
            lVar7 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar11 = plVar11 + 3;
          uVar12 = (int)uVar13 - 1;
          uVar13 = (ulonglong)uVar12;
        } while (uVar12 != 0);
      }
      if (local_88 != 0) {
        FMemory::Free(local_88);
      }
      TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
      ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_78);
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_60 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)local_60 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1412c2350 FUN_1412c2350 body=2366 status=ok
// SIG undefined FUN_1412c2350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412c2350(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 *param_4,
                  longlong *param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  longlong lVar17;
  longlong *plVar18;
  short *psVar19;
  wchar_t *pwVar20;
  undefined1 auStack_248 [32];
  longlong local_228;
  ulonglong local_220;
  longlong *local_218;
  ulonglong local_210;
  longlong *local_208;
  int local_200;
  ulonglong local_1f8;
  undefined8 local_1f0;
  undefined4 *local_1e8;
  ulonglong *puStack_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  longlong local_1c8 [2];
  longlong local_1b8 [2];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [16];
  undefined4 local_88 [2];
  undefined8 local_80;
  longlong *local_70;
  char local_60;
  ulonglong local_58 [3];
  
  local_58[0] = DAT_1468387a8 ^ (ulonglong)auStack_248;
  local_1f0 = param_6;
  local_1f8 = local_1f8 & 0xffffffff00000000;
  local_208 = param_3;
  local_1e8 = param_4;
  if (*(longlong *)(param_1 + 0x4d0) != 0) {
    FString::operator=(param_2,*(longlong *)(param_1 + 0x4d0) + 0xb0);
    cVar7 = FText::IsEmpty(*(longlong *)(param_1 + 0x4d0) + 0x60);
    if (cVar7 == '\0') {
      iVar3 = (int)param_5[1];
      lVar9 = *(longlong *)(param_1 + 0x4d0);
      *(int *)(param_5 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar3 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_5,iVar3);
      }
      FText::FText(*param_5 + (longlong)iVar3 * 0x18,lVar9 + 0x60);
      param_3 = local_208;
    }
  }
  cVar7 = *(char *)(param_1 + 0x5c9);
  plVar8 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x590);
  if (cVar7 == '\0') {
    if (plVar8 == (longlong *)0x0) {
      return;
    }
    lVar9 = FUN_1413ffe00();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      return;
    }
    uVar13 = (**(code **)(*plVar8 + 0x680))(plVar8);
    if (uVar13 == 0) {
      return;
    }
    local_1f8 = uVar13;
    lVar9 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(uVar13 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      return;
    }
    lVar9 = *(longlong *)(uVar13 + 0x570);
    psVar19 = &DAT_143f3eda8;
    if (lVar9 == 0) {
      pwVar20 = L"Player";
    }
    else {
      puVar14 = (undefined8 *)FText::ToString(lVar9 + 0x90);
      if (*(int *)(puVar14 + 1) == 0) {
        pwVar20 = L"";
      }
      else {
        pwVar20 = (wchar_t *)*puVar14;
      }
    }
    local_218 = (longlong *)0x0;
    local_210 = 0;
    lVar12 = -1;
    if ((pwVar20 != (wchar_t *)0x0) && (lVar17 = lVar12, *pwVar20 != L'\0')) {
      do {
        lVar17 = lVar17 + 1;
      } while (pwVar20[lVar17] != L'\0');
      uVar16 = (int)lVar17 + 1;
      local_210 = (ulonglong)uVar16;
      if (0 < (int)uVar16) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_218,0);
      }
      FGenericPlatformString::Memcpy(local_218,pwVar20,(longlong)(int)uVar16 * 2);
    }
    if (lVar9 == 0) {
      psVar19 = &DAT_14475d3e4;
    }
    else {
      puVar14 = (undefined8 *)FText::ToString(lVar9 + 0xc0);
      if (*(int *)(puVar14 + 1) != 0) {
        psVar19 = (short *)*puVar14;
      }
    }
    local_228 = 0;
    local_220 = 0;
    if ((psVar19 != (short *)0x0) && (*psVar19 != 0)) {
      do {
        lVar12 = lVar12 + 1;
      } while (psVar19[lVar12] != 0);
      uVar16 = (int)lVar12 + 1;
      local_220 = (ulonglong)uVar16;
      if (0 < (int)uVar16) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,0);
      }
      FGenericPlatformString::Memcpy(local_228,psVar19,(longlong)(int)uVar16 * 2);
    }
    uVar10 = FText::FromString(local_128,&local_218);
    FText::operator=(local_208,uVar10);
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_120 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar1 = (int *)((longlong)local_120 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_120 + 8))(local_120,1);
        }
      }
    }
    uVar10 = FText::FromString(local_110,&local_228);
    iVar3 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_5 + 0xc) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_5,iVar3);
    }
    FText::FText(*param_5 + (longlong)iVar3 * 0x18,uVar10);
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_108 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar1 = (int *)((longlong)local_108 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_108 + 8))(local_108,1);
        }
      }
    }
    uVar10 = FUN_14270d290(local_1f8,local_1b8);
    uVar10 = FText::FromString(local_f8,uVar10);
    FText::operator=(local_1e8,uVar10);
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_f0 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)local_f0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
    if (local_1b8[0] != 0) {
      FMemory::Free();
    }
    cVar7 = FUN_1414f5020(param_1);
    if (cVar7 == '\0') {
      bVar6 = false;
      bVar5 = false;
      bVar4 = true;
      puVar15 = (undefined1 *)FText::FText(local_c8);
    }
    else {
      bVar6 = true;
      bVar5 = true;
      bVar4 = false;
      uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_b0,L"{0}|platform(default=View Profile,xbox=View Gamercard)",
                          L"ZoneMapIconBase",L"ViewProfileText");
      puVar14 = (undefined8 *)FTextFormat::FTextFormat(local_98,uVar10);
      local_88[0] = 0;
      local_60 = '\0';
      local_80 = 0;
      local_1e8 = local_88;
      local_1d8 = *puVar14;
      puStack_1e0 = local_58;
      local_1d0 = puVar14[1];
      if (local_1d0 != 0) {
        LOCK();
        *(int *)(local_1d0 + 8) = *(int *)(local_1d0 + 8) + 1;
        UNLOCK();
      }
      local_1a8 = local_1e8;
      uStack_1a0 = puStack_1e0;
      uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_198,&local_1a8);
      uVar10 = FText::Format(local_e0,&local_1d8,uVar10);
      FText::FText(local_188,uVar10);
      if (local_d8 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_d8 + 1;
        lVar9 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_d8)(local_d8);
          LOCK();
          piVar1 = (int *)((longlong)local_d8 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_d8 + 8))(local_d8,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_198);
      if ((local_60 != '\0') && (local_60 = '\0', local_70 != (longlong *)0x0)) {
        LOCK();
        plVar8 = local_70 + 1;
        lVar9 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)local_70 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
      plVar8 = (longlong *)puVar14[1];
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar18 = plVar8 + 1;
        lVar9 = *plVar18;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      puVar15 = local_188;
    }
    FText::operator=(local_1f0,puVar15);
    if ((bVar4) && (local_c0 != (longlong *)0x0)) {
      LOCK();
      plVar8 = local_c0 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
    if ((bVar5) && (local_180 != (longlong *)0x0)) {
      LOCK();
      plVar8 = local_180 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_180)(local_180);
        LOCK();
        piVar1 = (int *)((longlong)local_180 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_180 + 8))(local_180,1);
        }
      }
    }
    if ((bVar6) && (local_a8 != (longlong *)0x0)) {
      LOCK();
      plVar8 = local_a8 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar1 = (int *)((longlong)local_a8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a8 + 8))(local_a8,1);
        }
      }
    }
    plVar8 = local_218;
    if (local_228 != 0) {
      FMemory::Free();
      plVar8 = local_218;
    }
  }
  else {
    if (plVar8 == (longlong *)0x0) {
      return;
    }
    lVar9 = FUN_14148cad0();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      return;
    }
    if (*(longlong *)(param_1 + 0x4d0) != 0) {
      FString::operator=(param_2,*(longlong *)(param_1 + 0x4d0) + 0xb0);
      FText::operator=(param_3,*(longlong *)(param_1 + 0x4d0) + 0x30);
      FText::operator=(param_4,*(longlong *)(param_1 + 0x4d0) + 0x48);
      cVar7 = FUN_1414f5020(param_1);
      lVar9 = 0x90;
      if (cVar7 != '\0') {
        lVar9 = 0x78;
      }
      FText::operator=(local_1f0,lVar9 + *(longlong *)(param_1 + 0x4d0));
    }
    uVar10 = (**(code **)(plVar8[0xc1] + 0x68))(plVar8 + 0xc1,local_170);
    FText::operator=(param_3,uVar10);
    if (local_168 != (longlong *)0x0) {
      LOCK();
      plVar18 = local_168 + 1;
      lVar9 = *plVar18;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_168)(local_168);
        LOCK();
        piVar1 = (int *)((longlong)local_168 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_168 + 8))(local_168,1);
        }
      }
    }
    TArray<FText,FDefaultAllocator>::Empty(param_5,0);
    FUN_141223c50(plVar8,&local_208,0);
    plVar8 = local_208 + local_200;
    for (plVar18 = local_208; plVar18 != plVar8; plVar18 = plVar18 + 1) {
      plVar11 = (longlong *)*plVar18;
      if (plVar11 != (longlong *)0x0) {
        lVar9 = FUN_1413ffe00();
        if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
            != lVar9 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          lVar9 = (**(code **)(*plVar11 + 0x680))(plVar11);
          if ((lVar9 == 0) &&
             (plVar11 = (longlong *)FUN_142ceef80(plVar11), plVar11 != (longlong *)0x0)) {
            lVar12 = FUN_1429d7ab0();
            if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8) !=
                lVar12 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              lVar9 = (**(code **)(*plVar11 + 0x680))(plVar11);
            }
          }
          if (lVar9 != 0) {
            FText::FText(local_140);
            uVar10 = FUN_14270d290(lVar9,local_1c8);
            uVar10 = FText::FromString(local_158,uVar10);
            iVar3 = (int)param_5[1];
            *(int *)(param_5 + 1) = iVar3 + 1;
            if (*(int *)((longlong)param_5 + 0xc) < iVar3 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(param_5,iVar3);
            }
            FText::FText(*param_5 + (longlong)iVar3 * 0x18,uVar10);
            plVar11 = local_150;
            if (local_150 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_150 + 1;
              lVar9 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*local_150)(local_150);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plVar11 + 8))(plVar11,1);
                }
              }
            }
            if (local_1c8[0] != 0) {
              FMemory::Free();
            }
            plVar11 = local_138;
            if (local_138 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_138 + 1;
              lVar9 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*local_138)(local_138);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plVar11 + 8))(plVar11,1);
                }
              }
            }
          }
        }
      }
    }
    plVar8 = local_208;
  }
  if (plVar8 != (longlong *)0x0) {
    FMemory::Free(plVar8);
  }
  return;
}



// FUNCTION 1412c2c90 FUN_1412c2c90 body=463 status=ok
// SIG undefined FUN_1412c2c90(void)

void FUN_1412c2c90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 local_res8;
  
  FUN_1412c1c90();
  cVar3 = FUN_140bf9690(0,param_1 + 0x5cc);
  if (cVar3 == '\0') {
    lVar5 = *(longlong *)(param_1 + 0x528);
  }
  else {
    plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x5cc);
    lVar5 = (**(code **)(*plVar4 + 0x8e8))(plVar4);
  }
  if (lVar5 != 0) {
    lVar6 = FUN_142f478b0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar6 = *(longlong *)(lVar5 + 0xb0) + 0x38;
      if (*(longlong *)(lVar5 + 0xb0) == 0) {
        lVar6 = lVar5 + 0x98;
      }
      FText::operator=(param_3,lVar6);
      return;
    }
  }
  cVar3 = FUN_140bf9690(0,param_1 + 0x5cc);
  if (cVar3 == '\0') {
    lVar5 = *(longlong *)(param_1 + 0x528);
  }
  else {
    plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x5cc);
    lVar5 = (**(code **)(*plVar4 + 0x8e8))(plVar4);
  }
  if (lVar5 != 0) {
    lVar6 = FUN_142f477c0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar6 = *(longlong *)(lVar5 + 0xb0) + 0x38;
      if (*(longlong *)(lVar5 + 0xb0) == 0) {
        lVar6 = lVar5 + 0x98;
      }
      FText::operator=(param_4,lVar6);
      local_res8 = *(undefined8 *)(lVar5 + 0x30);
      uVar7 = thunk_FUN_1422ca050();
      cVar3 = FUN_140a0b540(uVar7,&local_res8);
      if (cVar3 == '\0') {
        iVar1 = (int)param_5[1];
        *(int *)(param_5 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_5 + 0xc) < iVar1 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_5,iVar1);
        }
        FText::FText(*param_5 + (longlong)iVar1 * 0x18,param_1 + 0x5b0);
      }
    }
  }
  return;
}



// FUNCTION 1412c2e60 FUN_1412c2e60 body=48 status=ok
// SIG undefined FUN_1412c2e60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1412c2e60(longlong param_1,undefined8 *param_2,byte param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = uRam00000001464aa6f8;
  if (param_3 < 7) {
    puVar2 = (undefined8 *)(((ulonglong)param_3 + 0x11) * 0x10 + param_1);
    uVar1 = puVar2[1];
    *param_2 = *puVar2;
    param_2[1] = uVar1;
    return param_2;
  }
  *param_2 = _DAT_1464aa6f0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1412c2e90 FUN_1412c2e90 body=305 status=ok
// SIG undefined FUN_1412c2e90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1412c2e90(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x9a) != '\0') {
    cVar2 = FWeakObjectPtr::IsValid();
    if (cVar2 != '\0') {
      lVar4 = FWeakObjectPtr::Get(param_1);
      if (lVar4 != 0) {
        lVar5 = UInputKeySelector::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          (**(code **)(*(longlong *)(lVar4 + 0x528) + 0x90))((longlong *)(lVar4 + 0x528),param_2);
          return param_2;
        }
      }
    }
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1);
  if (cVar2 == '\0') {
    *param_2 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = *(undefined4 *)(param_1 + 0x40);
  }
  else {
    lVar4 = FWeakObjectPtr::Get(param_1);
    uVar3 = DAT_1468b5d98;
    lVar4 = *(longlong *)(lVar4 + 0x168);
    if (lVar4 == 0) {
      *param_2 = _DAT_1468b5d90;
    }
    else {
      uVar3 = *(undefined4 *)(lVar4 + 0x228);
      *param_2 = *(undefined8 *)(lVar4 + 0x220);
    }
  }
  *(undefined4 *)(param_2 + 1) = uVar3;
  return param_2;
}



// FUNCTION 1412c2fd0 FUN_1412c2fd0 body=336 status=ok
// SIG undefined FUN_1412c2fd0(void)

undefined8 * FUN_1412c2fd0(longlong param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_28 [16];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if (*(char *)(param_1 + 0x9a) != '\0') {
    cVar3 = FWeakObjectPtr::IsValid();
    if (cVar3 != '\0') {
      lVar6 = FWeakObjectPtr::Get(param_1);
      if (lVar6 != 0) {
        lVar7 = UInputKeySelector::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          USplineMeshComponent::GetSplineUpDir(lVar6,param_2);
          return param_2;
        }
      }
    }
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1);
  if (cVar3 == '\0') {
    *param_2 = *(undefined8 *)(param_1 + 0x44);
    uVar5 = *(undefined4 *)(param_1 + 0x4c);
  }
  else {
    lVar7 = FWeakObjectPtr::Get(param_1);
    lVar6 = *(longlong *)(lVar7 + 0x168);
    if (lVar6 == 0) {
      uVar9 = (undefined4)DAT_1468b5da0;
      uVar10 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      uVar5 = DAT_1468b5da8;
    }
    else {
      local_18 = *(float *)(lVar6 + 0x210);
      fStack_14 = *(float *)(lVar6 + 0x214);
      fStack_10 = *(float *)(lVar6 + 0x218);
      fStack_c = *(float *)(lVar6 + 0x21c);
      auVar1._4_4_ = -(uint)(*(float *)(lVar6 + 0x254) != fStack_14);
      auVar1._0_4_ = -(uint)(*(float *)(lVar6 + 0x250) != local_18);
      auVar1._8_4_ = -(uint)(*(float *)(lVar6 + 600) != fStack_10);
      auVar1._12_4_ = -(uint)(*(float *)(lVar6 + 0x25c) != fStack_c);
      iVar4 = movmskps((int)lVar7,auVar1);
      if (iVar4 != 0) {
        *(float *)(lVar6 + 0x250) = local_18;
        *(float *)(lVar6 + 0x254) = fStack_14;
        *(float *)(lVar6 + 600) = fStack_10;
        *(float *)(lVar6 + 0x25c) = fStack_c;
        puVar8 = (undefined8 *)FQuat::Rotator(&local_18,local_28);
        *(undefined8 *)(lVar6 + 0x260) = *puVar8;
        *(undefined4 *)(lVar6 + 0x268) = *(undefined4 *)(puVar8 + 1);
      }
      uVar9 = (undefined4)*(undefined8 *)(lVar6 + 0x260);
      uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x260) >> 0x20);
      uVar5 = *(undefined4 *)(lVar6 + 0x268);
    }
    *param_2 = CONCAT44(uVar10,uVar9);
  }
  *(undefined4 *)(param_2 + 1) = uVar5;
  return param_2;
}



// FUNCTION 1412c3120 FUN_1412c3120 body=11 status=ok
// SIG undefined FUN_1412c3120(void)

undefined8 * FUN_1412c3120(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x58);
  return param_2;
}



// FUNCTION 1412c3130 FUN_1412c3130 body=211 status=ok
// SIG undefined FUN_1412c3130(void)

longlong FUN_1412c3130(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1 + 0xa00;
  lVar2 = FWeakObjectPtr::Get(lVar3);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(param_1 + 0xa08)) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0xa10) == 0) {
      return 0;
    }
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar3,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0xa08) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(lVar3);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar3 = FUN_1428dfc70();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0;
  }
  return lVar2;
}



// FUNCTION 1412c3210 FUN_1412c3210 body=224 status=ok
// SIG undefined FUN_1412c3210(void)

longlong FUN_1412c3210(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(longlong *)(param_1 + 0x498) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x498) + 0x9f9) == '\0')) {
    lVar4 = *(longlong *)(param_1 + 0x528);
    if (lVar4 == 0) {
      return 0;
    }
    lVar5 = FUN_142f47520();
    if ((*(int *)(lVar5 + 0x90) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x90)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        == lVar5 + 0x88)) {
      bVar1 = true;
      goto LAB_1412c32e1;
    }
  }
  else {
    cVar2 = FUN_140bf9690(0,param_1 + 0x5cc);
    if (cVar2 == '\0') {
      lVar4 = *(longlong *)(param_1 + 0x528);
    }
    else {
      plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x5cc);
      lVar4 = (**(code **)(*plVar3 + 0x8e8))(plVar3);
    }
    if (lVar4 == 0) {
      return 0;
    }
    lVar5 = FUN_142f47520();
    if ((*(int *)(lVar5 + 0x90) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x90)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        == lVar5 + 0x88)) {
      bVar1 = true;
      goto LAB_1412c32e1;
    }
  }
  bVar1 = false;
LAB_1412c32e1:
  if (!bVar1) {
    return 0;
  }
  return lVar4;
}



// FUNCTION 1412c32f0 FUN_1412c32f0 body=49 status=ok
// SIG undefined FUN_1412c32f0(void)

longlong * FUN_1412c32f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x180);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x188) * 4;
  while( true ) {
    if (plVar1 == plVar2) {
      return (longlong *)0x0;
    }
    if (*plVar1 == param_2) break;
    plVar1 = plVar1 + 4;
  }
  return plVar1;
}



// FUNCTION 1412c3330 GetWorld body=8 status=ok
// SIG undefined GetWorld(void)

undefined8 ULevel::GetWorld(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



// FUNCTION 1412c3340 FUN_1412c3340 body=832 status=ok
// SIG undefined FUN_1412c3340(void)

void FUN_1412c3340(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 uVar17;
  longlong *local_res20;
  
  cVar4 = FUN_140bf9690(0,param_1 + 0x754);
  if ((cVar4 != '\0') && (plVar7 = *(longlong **)(param_1 + 0x118), plVar7 != (longlong *)0x0)) {
    uVar5 = FUN_142e035e0();
    lVar6 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar5);
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if ((lVar6 != 0) && (*(longlong **)(DAT_146b33f38 + 0x58) != (longlong *)0x0)) {
      plVar7 = (longlong *)(**(code **)(**(longlong **)(DAT_146b33f38 + 0x58) + 0x290))();
      plVar14 = (longlong *)*plVar7;
      plVar7 = plVar14 + (int)plVar7[1];
      for (; plVar14 != plVar7; plVar14 = plVar14 + 1) {
        if (*plVar14 != 0) {
          plVar8 = (longlong *)UListView::OnItemSelectionChanged();
          lVar15 = *plVar8;
          lVar1 = lVar15 + (longlong)(int)plVar8[1] * 0x28;
          for (; lVar15 != lVar1; lVar15 = lVar15 + 0x28) {
            plVar16 = (longlong *)0x0;
            plVar9 = (longlong *)FWeakObjectPtr::Get(lVar15);
            plVar8 = plVar16;
            if (plVar9 == (longlong *)0x0) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              if ((DAT_1464b56f4 != *(int *)(lVar15 + 8)) && (*(longlong *)(lVar15 + 0x10) != 0)) {
                lVar10 = FUN_141796df0();
                FWeakObjectPtr::operator=(lVar15,lVar10);
                if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                  }
                  UNLOCK();
                  *(int *)(lVar15 + 8) = DAT_1464b56f4;
                }
                plVar9 = (longlong *)FWeakObjectPtr::Get(lVar15);
                if (plVar9 != (longlong *)0x0) goto LAB_1412c34bf;
              }
            }
            else {
LAB_1412c34bf:
              lVar10 = FUN_14171bfe0();
              if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
                  lVar10 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                plVar11 = (longlong *)FUN_142dfdfe0();
                plVar13 = plVar9;
                do {
                  plVar8 = plVar9;
                  if (plVar13 == plVar11) break;
                  plVar13 = (longlong *)plVar13[6];
                  plVar8 = plVar16;
                } while (plVar13 != (longlong *)0x0);
              }
            }
            local_res20 = plVar8;
            if (plVar8 != (longlong *)0x0) {
              lVar10 = plVar8[0x1f];
              if (lVar10 == 0) {
                (**(code **)(*plVar8 + 0x368))(plVar8);
                lVar10 = plVar8[0x1f];
                if (lVar10 == 0) goto LAB_1412c3630;
              }
              if ((*(longlong *)(lVar10 + 0xd8) == param_2) &&
                 (lVar12 = FWeakObjectPtr::Get(param_1 + 0x754),
                 *(longlong *)(lVar10 + 0x90) == *(longlong *)(lVar12 + 0x78))) {
                cVar4 = FUN_142dd3360(lVar6,plVar8);
                if (cVar4 == '\0') {
                  cVar4 = FUN_142dd32c0(lVar6,plVar8);
                  uVar17 = 2;
                  if (cVar4 != '\0') {
                    uVar17 = 0;
                  }
                }
                else {
                  uVar17 = 1;
                }
                uVar5 = 0;
                lVar10 = FUN_1412af6b0(param_1 + 0x7c8,&local_res20);
                if (lVar10 != 0) {
                  uVar5 = FWeakObjectPtr::Get(lVar10 + 0x18);
                }
                lVar10 = FUN_1412af6b0(param_1 + 0x7b8,&local_res20);
                if (lVar10 != 0) {
                  uVar5 = FWeakObjectPtr::Get(lVar10 + 0x18);
                }
                iVar2 = (int)param_3[1];
                lVar10 = (longlong)iVar2;
                *(int *)(param_3 + 1) = iVar2 + 1;
                if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                  ::ResizeGrow(param_3,iVar2);
                }
                lVar12 = *param_3;
                *(longlong **)(lVar12 + lVar10 * 0x18) = plVar8;
                *(undefined1 *)(lVar12 + 8 + lVar10 * 0x18) = uVar17;
                *(undefined8 *)(lVar12 + 0x10 + lVar10 * 0x18) = uVar5;
              }
            }
LAB_1412c3630:
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1412c3680 FUN_1412c3680 body=103 status=ok
// SIG undefined FUN_1412c3680(void)

longlong FUN_1412c3680(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res18 [2];
  undefined1 local_18 [16];
  
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_2,1);
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0xc0), lVar1 != 0)) {
    local_res18[0] = *(undefined8 *)(lVar1 + 0x18);
    FName::ToString(local_res18,local_18);
    lVar1 = FUN_1412c36f0(param_1,local_18);
    if (lVar1 != 0) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1412c36f0 FUN_1412c36f0 body=136 status=ok
// SIG undefined FUN_1412c36f0(void)

longlong FUN_1412c36f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x30);
  plVar1 = plVar4 + *(int *)(param_1 + 0x38);
  while( true ) {
    if (plVar4 == plVar1) {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      return 0;
    }
    lVar2 = *plVar4;
    if ((lVar2 != 0) &&
       (cVar3 = FUN_142f3e860(*(undefined8 *)(lVar2 + 0x78),param_2), cVar3 != '\0')) break;
    plVar4 = plVar4 + 1;
  }
  if (*param_2 == 0) {
    return lVar2;
  }
  FMemory::Free();
  return lVar2;
}



// FUNCTION 1412c3780 FUN_1412c3780 body=875 status=ok
// SIG undefined FUN_1412c3780(void)

longlong FUN_1412c3780(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  wint_t wVar3;
  wint_t wVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  wint_t *pwVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  
  if (DAT_1468782f0 == '\0') {
    FUN_1412c54f0();
  }
  lVar1 = DAT_1468787b8 + (longlong)DAT_1468787c0 * 0x28;
  if (DAT_1468787b8 == lVar1) {
LAB_1412c3aa7:
    if (*param_1 != 0) {
      FMemory::Free();
    }
    return 0;
  }
  lVar10 = DAT_1468787b8;
LAB_1412c37d9:
  lVar5 = FWeakObjectPtr::Get(lVar10);
  if (lVar5 != 0) {
LAB_1412c3857:
    if (1 < (int)param_1[1]) {
      if ((int)param_1[1] == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*param_1;
      }
      pwVar8 = &DAT_14475c16c;
      do {
        wVar3 = *(wint_t *)((longlong)(puVar9 + -0xa23ae0b6) + (longlong)pwVar8);
        if ((wVar3 == 0) && (*pwVar8 == 0)) break;
        if (wVar3 != *pwVar8) {
          wVar3 = towlower(wVar3);
          wVar4 = towlower(*pwVar8);
          if (wVar3 != wVar4) goto LAB_1412c38b5;
        }
        pwVar8 = pwVar8 + 1;
      } while( true );
    }
    goto LAB_1412c398e;
  }
  LOCK();
  if (DAT_1464b56f4 == 0) {
    DAT_1464b56f4 = 0;
  }
  UNLOCK();
  if ((DAT_1464b56f4 != *(int *)(lVar10 + 8)) && (*(longlong *)(lVar10 + 0x10) != 0)) {
    lVar5 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar10,lVar5);
    if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar10 + 8) = DAT_1464b56f4;
    }
    lVar5 = FWeakObjectPtr::Get(lVar10);
    if (lVar5 != 0) goto LAB_1412c3857;
  }
  goto LAB_1412c3a9a;
LAB_1412c38b5:
  if (wVar3 == wVar4) {
LAB_1412c398e:
    lVar5 = FWeakObjectPtr::Get(lVar10);
    if (lVar5 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar10 + 8)) && (*(longlong *)(lVar10 + 0x10) != 0)) {
        lVar5 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar10,lVar5);
        if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar10 + 8) = DAT_1464b56f4;
        }
        lVar5 = FWeakObjectPtr::Get(lVar10);
        if (lVar5 != 0) goto LAB_1412c3a00;
      }
LAB_1412c3a36:
      lVar5 = 0;
    }
    else {
LAB_1412c3a00:
      lVar6 = FUN_1414f4830();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1412c3a36;
    }
    lVar6 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_2,1);
    if (((lVar6 == 0) || (*(longlong *)(lVar6 + 0x30) == 0)) ||
       (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x30) + 0xc0), lVar6 == 0)) goto LAB_1412c3a9a;
    local_68 = *(undefined8 *)(lVar6 + 0x18);
    FName::ToString(&local_68,local_60);
    lVar5 = FUN_1412c36f0(lVar5,local_60);
    if (lVar5 == 0) goto LAB_1412c3a9a;
  }
  else {
    lVar5 = FWeakObjectPtr::Get(lVar10);
    if (lVar5 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar10 + 8)) && (*(longlong *)(lVar10 + 0x10) != 0)) {
        lVar5 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar10,lVar5);
        if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar10 + 8) = DAT_1464b56f4;
        }
        lVar5 = FWeakObjectPtr::Get(lVar10);
        if (lVar5 != 0) goto LAB_1412c3935;
      }
LAB_1412c396b:
      lVar5 = 0;
    }
    else {
LAB_1412c3935:
      lVar6 = FUN_1414f4830();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1412c396b;
    }
    uVar7 = FString::FString(local_50,param_1);
    lVar5 = FUN_1412c36f0(lVar5,uVar7);
  }
  if (lVar5 != 0) {
    if (*param_1 == 0) {
      return lVar5;
    }
    FMemory::Free();
    return lVar5;
  }
LAB_1412c3a9a:
  lVar10 = lVar10 + 0x28;
  if (lVar10 == lVar1) goto LAB_1412c3aa7;
  goto LAB_1412c37d9;
}



// FUNCTION 1412c3af0 FUN_1412c3af0 body=102 status=ok
// SIG undefined FUN_1412c3af0(void)

void FUN_1412c3af0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x760) == 0) {
    cVar1 = FUN_140bf9690(0,param_1 + 0x754);
    if (cVar1 != '\0') {
      uVar2 = FWeakObjectPtr::Get(param_1 + 0x754);
      uVar2 = FUN_14129f8a0(uVar2);
      *(undefined8 *)(param_1 + 0x760) = uVar2;
      return;
    }
    *(undefined8 *)(param_1 + 0x760) = 0;
  }
  return;
}



// FUNCTION 1412c3b60 FUN_1412c3b60 body=54 status=ok
// SIG undefined FUN_1412c3b60(void)

longlong FUN_1412c3b60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x458);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x460) * 2;
  while( true ) {
    if (plVar1 == plVar2) {
      return 0;
    }
    if (param_2 == *plVar1) break;
    plVar1 = plVar1 + 2;
  }
  return plVar1[1];
}



// FUNCTION 1412c3ba0 FUN_1412c3ba0 body=57 status=ok
// SIG undefined FUN_1412c3ba0(void)

void FUN_1412c3ba0(longlong param_1,undefined8 param_2,char param_3)

{
  if ((param_3 != '\0') || (*(char *)(param_1 + 0xd20) == '\x01')) {
    FUN_1412d15b0();
    FUN_1414f9020(param_1,param_2);
  }
  return;
}



// FUNCTION 1412c3be0 FUN_1412c3be0 body=261 status=ok
// SIG undefined FUN_1412c3be0(void)

void FUN_1412c3be0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((char)param_1[0x1a4] == '\0') {
    cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x754);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = FWeakObjectPtr::Get((longlong)param_1 + 0x754);
      uVar3 = FUN_14129f920(uVar3);
    }
    FWeakObjectPtr::operator=(param_1 + 0xf0,uVar3);
    cVar1 = FUN_140bf9690(0,param_1 + 0xf0);
    if ((cVar1 != '\0') &&
       (lVar2 = FWeakObjectPtr::Get(param_1 + 0xf0), *(char *)(lVar2 + 0xf1) == '\0')) {
      FUN_1412cd930(param_1);
      uVar3 = FWeakObjectPtr::Get(param_1 + 0xf0);
      FUN_1412d1910(param_1,uVar3);
      FUN_1414f9060(param_1);
      return;
    }
  }
  else if ((char)param_1[0x1a4] != '\x01') {
    return;
  }
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar2 != 0) &&
     (lVar2 = (**(code **)(*param_1 + 0x148))(param_1),
     *(float *)(lVar2 + 0x794) - *(float *)(param_1 + 0x19c) < 1.25)) {
    return;
  }
  FUN_1412d12e0(param_1);
  FUN_1414f9060(param_1);
  return;
}



// FUNCTION 1412c3cf0 FUN_1412c3cf0 body=52 status=ok
// SIG undefined FUN_1412c3cf0(void)

void FUN_1412c3cf0(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0xd20) == '\x02') {
    FUN_1412d1910();
    FUN_1414f90a0(param_1,param_2);
  }
  return;
}



// FUNCTION 1412c3d30 FUN_1412c3d30 body=42 status=ok
// SIG undefined FUN_1412c3d30(void)

ulonglong FUN_1412c3d30(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x168);
  if ((uVar1 != 0) && ((*(byte *)(uVar1 + 0x24c) & 0x20) != 0)) {
    uVar1 = FUN_1414f90e0(param_1,param_2 + 8,*(undefined4 *)(param_2 + 4));
    return uVar1;
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1412c3d60 FUN_1412c3d60 body=28 status=ok
// SIG undefined FUN_1412c3d60(void)

bool FUN_1412c3d60(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_18;
  char cStack_10;
  
  if ((param_1[0x2d] != 0) && ((*(byte *)(param_1[0x2d] + 0x24c) & 0x20) != 0)) {
    uStack_18 = *param_2;
    lVar1 = *param_1;
    cStack_10 = '\0';
    uVar2 = FUN_14178ac60(param_1,DAT_1468a4118);
    (**(code **)(lVar1 + 0x208))(param_1,uVar2,&uStack_18);
    return cStack_10 != '\0';
  }
  return false;
}



// FUNCTION 1412c3d80 FUN_1412c3d80 body=76 status=ok
// SIG undefined FUN_1412c3d80(void)

void FUN_1412c3d80(longlong param_1,longlong *param_2)

{
  uint uVar1;
  
  if (*(longlong *)(param_1 + 0x5d8) == 0) {
    uVar1 = 0x3dcccccd;
  }
  else {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x5d8) + 0x80);
  }
  if (*param_2 == DAT_146878568) {
    *(uint *)(param_1 + 0x834) = uVar1;
    return;
  }
  if (*param_2 == DAT_146878560) {
    *(uint *)(param_1 + 0x830) = uVar1 ^ 0x80000000;
  }
  return;
}



// FUNCTION 1412c3dd0 FUN_1412c3dd0 body=324 status=ok
// SIG undefined FUN_1412c3dd0(void)

void FUN_1412c3dd0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x5d8);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = *(longlong *)(param_2 + 8);
  if (lVar3 != DAT_1468784f8) {
    if (lVar3 == DAT_146878500) {
      cVar1 = *(char *)(param_1 + 0xd20);
      fVar4 = 0.0;
      if (cVar1 == '\0') {
        *(float *)(param_1 + 0x83c) = *(float *)(lVar2 + 0xa0) * *(float *)(param_2 + 4);
        return;
      }
      if (cVar1 != '\x01') {
        if (cVar1 == '\x02') {
          fVar4 = *(float *)(lVar2 + 0x108) * *(float *)(param_2 + 4);
        }
        *(float *)(param_1 + 0x83c) = fVar4;
        return;
      }
      *(float *)(param_1 + 0x83c) = *(float *)(lVar2 + 0x134) * *(float *)(param_2 + 4);
      return;
    }
    if (lVar3 == DAT_146878508) {
      if (*(char *)(param_1 + 0xd20) != '\0') {
        return;
      }
      fVar4 = *(float *)(lVar2 + 0x4c) * *(float *)(param_2 + 4);
      if (*(char *)(lVar2 + 0x15c) != '\0') {
        fVar4 = -fVar4;
      }
      *(float *)(param_1 + 0x840) = fVar4;
      return;
    }
    if (lVar3 != DAT_146878510) {
      return;
    }
    if (*(char *)(param_1 + 0xd20) != '\0') {
      return;
    }
    fVar4 = *(float *)(lVar2 + 0x50) * *(float *)(param_2 + 4);
    if (*(char *)(lVar2 + 0x15d) != '\0') {
      fVar4 = -fVar4;
    }
    *(float *)(param_1 + 0x844) = fVar4;
    return;
  }
  cVar1 = *(char *)(param_1 + 0xd20);
  fVar4 = 0.0;
  if (cVar1 == '\0') {
    fVar4 = *(float *)(lVar2 + 0xa0);
  }
  else if (cVar1 == '\x01') {
    fVar4 = *(float *)(lVar2 + 0x134);
  }
  else {
    if (cVar1 != '\x02') goto LAB_1412c3e3a;
    fVar4 = *(float *)(lVar2 + 0x108);
  }
  fVar4 = fVar4 * *(float *)(param_2 + 4);
  if (*(char *)(lVar2 + 0x15c) != '\0') {
    fVar4 = -fVar4;
  }
LAB_1412c3e3a:
  *(float *)(param_1 + 0x838) = fVar4;
  return;
}



// FUNCTION 1412c3f20 FUN_1412c3f20 body=420 status=ok
// SIG undefined FUN_1412c3f20(void)

void FUN_1412c3f20(longlong *param_1,undefined8 param_2,char param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [64];
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if ((lVar2 != 0) && (lVar2 = param_1[0x23], lVar2 != 0)) {
    lVar3 = FUN_14145f370();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (lVar2 = param_1[0x128], lVar2 != 0)) && (*(longlong *)(lVar2 + 0x3d0) != 0)) {
      local_58 = 0;
      local_50 = (undefined4)param_1[0x19d];
      local_4c = *(undefined4 *)((longlong)param_1 + 0xcec);
      uVar4 = FMatrix::Inverse(lVar2 + 0xc50,local_48);
      FUN_14274a0c0(param_2,&local_58,uVar4,&local_68,&local_78,1);
      if ((char)param_1[0x1a4] != '\x02') {
        local_90 = local_70;
        local_80 = local_60;
        local_98 = local_78;
        local_88 = local_68;
        FUN_1412d4760(param_1,&local_88,&local_98,param_1 + 0x12d,(longlong)param_1 + 0x974);
      }
      if ((param_3 == '\0') && ((*(byte *)(param_1 + 0x1a4) & 0xfd) == 0)) {
        local_88 = local_78;
        local_80 = local_70;
        local_98 = local_68;
        local_90 = local_60;
        FUN_1412cdb90(param_1,0x3c23d70a,&local_98,&local_88);
      }
    }
  }
  return;
}



// FUNCTION 1412c40d0 FUN_1412c40d0 body=289 status=ok
// SIG undefined FUN_1412c40d0(void)

void FUN_1412c40d0(longlong param_1,float param_2)

{
  longlong lVar1;
  undefined *puVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar1 + 0x38) < DAT_146878830) &&
     (_Init_thread_header(&DAT_146878830), DAT_146878830 == -1)) {
    FName::FName(&DAT_146878828,"OakMenu_MapZoomIn",1);
    _Init_thread_footer(&DAT_146878830);
  }
  if ((*(int *)(lVar1 + 0x38) < DAT_146878840) &&
     (_Init_thread_header(&DAT_146878840), DAT_146878840 == -1)) {
    FName::FName(&DAT_146878838,"OakMenu_MapZoomOut",1);
    _Init_thread_footer(&DAT_146878840);
  }
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 != 0) {
    if (param_2 <= 0.0) {
      if ((*(byte *)(lVar1 + 0x24c) & 0x20) == 0) {
        return;
      }
      puVar2 = &DAT_146878828;
    }
    else {
      if ((*(byte *)(lVar1 + 0x24c) & 0x20) == 0) {
        return;
      }
      puVar2 = &DAT_146878838;
    }
    FUN_1414f9140(param_1,puVar2);
  }
  return;
}



// FUNCTION 1412c4200 FUN_1412c4200 body=527 status=ok
// SIG undefined FUN_1412c4200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412c4200(longlong *param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    lVar1 = FUN_142dcdcd0(lVar1);
    if (lVar1 == 0) {
      if (param_2 != '\0') {
        local_a8 = 0;
        local_a0 = FUN_1412bbfc0;
        uStack_98 = 0;
        uVar2 = AActor::GetWorldTimerManager(param_1);
        plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
        if (plVar3 != (longlong *)0x0) {
          *plVar3 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar3 + 1,param_1);
          *(undefined4 *)(plVar3 + 2) = (undefined4)local_a0;
          *(undefined4 *)((longlong)plVar3 + 0x14) = local_a0._4_4_;
          *(undefined4 *)(plVar3 + 3) = uStack_98;
          *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_94;
          lVar1 = FDelegateHandle::GenerateNewID();
          plVar3[5] = lVar1;
          *plVar3 = (longlong)&PTR_FUN_143f77bd0;
        }
        local_88 = 0;
        local_80 = 0;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x30))(plVar3,&local_88);
        }
        FWeakObjectPtr::operator=(local_78,0);
        local_b0 = 0xbf800000;
        local_b8 = 0;
        local_70 = 0;
        local_38 = (longlong *)0x0;
        local_28 = 0;
        local_68 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar2,&local_a8,&local_88,0x3dcccccd);
        if (local_28 != 0) {
          plVar4 = local_58;
          if (local_38 != (longlong *)0x0) {
            plVar4 = local_38;
          }
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4,0);
          }
        }
        if (local_38 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x28))(plVar3,0);
          lVar1 = FMemory::Realloc(plVar3,0,0);
          if (lVar1 != 0) {
            FMemory::Free(lVar1);
          }
        }
      }
    }
    else if (param_2 == '\0') {
      plVar3 = param_1 + 0x8d;
      if (param_1 == (longlong *)0x0) {
        plVar3 = (longlong *)0x0;
      }
      AXUsableActor::RemoveUser(lVar1,plVar3);
    }
    else {
      FUN_1412bbfc0(param_1);
    }
  }
  return;
}



// FUNCTION 1412c4410 FUN_1412c4410 body=594 status=ok
// SIG undefined FUN_1412c4410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412c4410(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 local_b0;
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
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uVar1 = (**(code **)(*param_1 + 0x148))();
  lVar2 = FUN_140c12480(uVar1);
  if ((lVar2 == 0) || (lVar2 = FARSupportInterface::GetXRTrackingSystem(lVar2), lVar2 == 0)) {
    if (param_2 == '\0') {
      return;
    }
    local_b8 = 0;
    local_a8 = FUN_1412bc450;
    uStack_a0 = 0;
    uVar1 = AActor::GetWorldTimerManager(param_1);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
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
    local_c0 = 0xbf800000;
    local_c8 = 0;
    local_80 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar1,&local_b8,&local_98,0x3dcccccd);
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
  }
  else {
    if (param_2 != '\0') {
      FUN_1412bc450(param_1);
      return;
    }
    FUN_1407665e0(lVar2 + 0x48,param_1);
    FUN_1407665e0(lVar2 + 0x38,param_1);
    FUN_1407665e0(lVar2 + 0x28,param_1);
    local_b8 = 0;
    local_b0 = 0;
    FUN_1411e0e30(lVar2,&local_b8);
    lVar2 = local_b8 + (longlong)(int)local_b0 * 8;
    for (lVar4 = local_b8; lVar4 != lVar2; lVar4 = lVar4 + 8) {
      uVar1 = FWeakObjectPtr::Get(lVar4);
      FUN_1412c9160(param_1,uVar1);
    }
    *(undefined1 *)((longlong)param_1 + 0xd23) = 0;
    lVar2 = local_b8;
  }
  if (lVar2 != 0) {
    FMemory::Free(lVar2);
  }
  return;
}



// FUNCTION 1412c4670 FUN_1412c4670 body=540 status=ok
// SIG undefined FUN_1412c4670(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412c4670(longlong *param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
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
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    lVar1 = FUN_142f6c9f0(lVar1);
    if (lVar1 == 0) {
      if (param_2 != '\0') {
        local_b8 = (longlong *)0x0;
        local_a8 = FUN_1412bc840;
        uStack_a0 = 0;
        uVar2 = AActor::GetWorldTimerManager(param_1);
        plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
        if (plVar3 != (longlong *)0x0) {
          *plVar3 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar3 + 1,param_1);
          *(undefined4 *)(plVar3 + 2) = (undefined4)local_a8;
          *(undefined4 *)((longlong)plVar3 + 0x14) = local_a8._4_4_;
          *(undefined4 *)(plVar3 + 3) = uStack_a0;
          *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_9c;
          lVar1 = FDelegateHandle::GenerateNewID();
          plVar3[5] = lVar1;
          *plVar3 = (longlong)&PTR_FUN_143f77bd0;
        }
        local_98 = 0;
        local_90 = 0;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x30))(plVar3,&local_98);
        }
        FWeakObjectPtr::operator=(local_88,0);
        local_c0 = 0xbf800000;
        local_c8 = 0;
        local_80 = 0;
        local_48 = (longlong *)0x0;
        local_38 = 0;
        local_78 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar2,&local_b8,&local_98,0x3dcccccd);
        if (local_38 != 0) {
          plVar4 = local_68;
          if (local_48 != (longlong *)0x0) {
            plVar4 = local_48;
          }
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4,0);
          }
        }
        if (local_48 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x28))(plVar3,0);
          lVar1 = FMemory::Realloc(plVar3,0,0);
          if (lVar1 != 0) {
            FMemory::Free(lVar1);
          }
        }
      }
    }
    else if (param_2 == '\0') {
      local_b0 = 0;
      local_b8 = param_1;
      uVar2 = FUN_142f768a0();
      local_b0 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar2);
      FUN_142f6e000(lVar1,&local_b8);
      local_b0 = 0;
      local_b8 = param_1;
      uVar2 = FUN_142f772d0();
      local_b0 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar2);
      FUN_142f6dea0(lVar1,&local_b8);
    }
    else {
      FUN_1412bc840(param_1);
    }
  }
  return;
}



// FUNCTION 1412c4890 FUN_1412c4890 body=927 status=ok
// SIG undefined FUN_1412c4890(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412c4890(longlong *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 local_28;
  undefined4 local_20;
  
  if (*(char *)((longlong)param_1 + 0x5a9) == '\0') {
    return;
  }
  lVar6 = param_1[0x104];
  plVar9 = (longlong *)0x0;
  *(undefined1 *)((longlong)param_1 + 0x5a9) = 0;
  if (lVar6 != 0) {
    lVar4 = UCheckBoxWidgetStyle::StaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar6 + 0x470,0);
    }
    param_1[0x104] = 0;
  }
  bVar2 = true;
  plVar8 = (longlong *)param_1[0x115];
  plVar10 = (longlong *)((longlong)(int)param_1[0x116] & 0x1fffffffffffffff);
  if (plVar8 + (int)param_1[0x116] < plVar8) {
    plVar10 = plVar9;
  }
  plVar7 = plVar9;
  if (plVar10 != (longlong *)0x0) {
    do {
      lVar6 = *plVar8;
      if (lVar6 != 0) {
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                          ((longlong)param_1 + 0x754,param_1 + 0xf1);
        FUN_142398ec0(lVar6,cVar3 != '\0',1);
      }
      plVar8 = plVar8 + 1;
      plVar7 = (longlong *)((longlong)plVar7 + 1);
    } while (plVar7 != plVar10);
  }
  plVar10 = (longlong *)param_1[0x113];
  plVar8 = plVar10 + (longlong)(int)param_1[0x114] * 5;
  do {
    if (plVar10 == plVar8) {
      plVar8 = (longlong *)param_1[0x23];
      if (plVar8 != (longlong *)0x0) {
        lVar6 = FUN_14145f370();
        if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          *(undefined1 *)(plVar8 + 0x105) = 1;
          plVar9 = plVar8;
        }
      }
      FUN_1414f93c0(param_1);
      if (((plVar9 != (longlong *)0x0) &&
          (lVar6 = (**(code **)(*plVar9 + 0xfa8))(plVar9), lVar6 != 0)) &&
         (lVar6 = (**(code **)(*plVar9 + 0xfa8))(plVar9), *(int *)(lVar6 + 0x48) == 0)) {
        FUN_140ccf680(plVar9,1);
        FUN_142dbb5d0(plVar9 + 0x1ab,&DAT_1468787f0);
      }
      if (param_1[0x119] != 0) {
        FUN_142397540(param_1[0x119],1);
      }
      *(undefined4 *)(param_1 + 0x120) = 0;
      if (*(int *)((longlong)param_1 + 0x904) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x11f,0);
      }
      *(undefined4 *)(param_1 + 0x121) = 0;
      *(undefined4 *)(param_1 + 0x102) = 0;
      if (*(int *)((longlong)param_1 + 0x814) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x101,0);
      }
      lVar6 = param_1[0xff];
      lVar4 = (longlong)(int)param_1[0x100] * 0x270 + lVar6;
      for (; lVar6 != lVar4; lVar6 = lVar6 + 0x270) {
        FUN_1412d2bb0(lVar6,param_1);
      }
      FUN_1412bdd20(param_1 + 0xff,0);
      uVar1 = *(undefined1 *)((longlong)param_1 + 0x5aa);
      if (param_1[0x2d] != 0) {
        FUN_142398ec0(param_1[0x2d],uVar1,2);
      }
      FUN_1412d0870(param_1,uVar1);
      if (param_1[0x2d] != 0) {
        FUN_142398ec0(param_1[0x2d],1,2);
      }
      *(undefined1 *)((longlong)param_1 + 0x82d) = 0;
      if (param_1[0xe4] != 0) {
        local_28 = _DAT_1468b5d90;
        local_20 = DAT_1468b5d98;
        FUN_1423990b0(param_1[0xe4],&local_28,0,0,0);
        local_28 = DAT_1468b5da0;
        local_20 = DAT_1468b5da8;
        FUN_142399b90(param_1[0xe4],&local_28,0,0,0);
      }
      FUN_1412d0ba0(param_1);
      return;
    }
    if (plVar10[4] != 0) {
      if (bVar2) {
        uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
        cVar3 = FUN_142c48f60(plVar10[4],uVar5,0);
        if (cVar3 != '\0') {
          bVar2 = true;
          goto LAB_1412c49e2;
        }
      }
      bVar2 = false;
    }
LAB_1412c49e2:
    if (*plVar10 != 0) {
      FUN_142398ec0(*plVar10,bVar2);
      if (plVar10[2] != 0) {
        FUN_142398ec0(plVar10[2],bVar2);
      }
      (**(code **)(*(longlong *)*plVar10 + 0x638))((longlong *)*plVar10,0);
    }
    plVar10 = plVar10 + 5;
  } while( true );
}



// FUNCTION 1412c4c30 FUN_1412c4c30 body=1729 status=ok
// SIG undefined FUN_1412c4c30(void)

void FUN_1412c4c30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong local_108;
  longlong local_100;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined1 local_f2;
  longlong *local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  int local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  longlong *local_68;
  undefined1 local_50;
  
  lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar16 + 0x38) < DAT_146878850) &&
     (_Init_thread_header(&DAT_146878850), DAT_146878850 == -1)) {
    FName::FName(&DAT_146878848,L"PlanetMapData",1);
    _Init_thread_footer(&DAT_146878850);
  }
  if ((*(int *)(lVar16 + 0x38) < DAT_146878860) &&
     (_Init_thread_header(&DAT_146878860), DAT_146878860 == -1)) {
    FName::FName(&DAT_146878858,L"Owning Zone Map",1);
    _Init_thread_footer(&DAT_146878860);
  }
  if ((*(int *)(lVar16 + 0x38) < DAT_146878870) &&
     (_Init_thread_header(&DAT_146878870), DAT_146878870 == -1)) {
    FName::FName(&DAT_146878868,L"Sun Light Color",1);
    _Init_thread_footer(&DAT_146878870);
  }
  if ((*(int *)(lVar16 + 0x38) < DAT_146878880) &&
     (_Init_thread_header(&DAT_146878880), DAT_146878880 == -1)) {
    FName::FName(&DAT_146878878,L"Sun Color",1);
    _Init_thread_footer(&DAT_146878880);
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  plVar12 = *(longlong **)(param_1 + 0x118);
  plVar11 = (longlong *)0x0;
  lVar16 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (plVar12 != (longlong *)0x0) {
    local_f0 = plVar12;
    lVar3 = FUN_14145f370();
    if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar4 = (longlong *)(**(code **)(*plVar12 + 0x148))(plVar12);
      goto LAB_1412c4d30;
    }
  }
  local_f0 = (longlong *)0x0;
  plVar4 = plVar11;
  plVar12 = plVar11;
LAB_1412c4d30:
  uVar5 = UCheckBoxWidgetStyle::StaticClass();
  plVar6 = (longlong *)
           FUN_141799830(uVar5,0,
                         L"/Game/InteractiveObjects/GameSystemMachines/ZoneMap/Design/BP_GalaxyPOI.BP_GalaxyPOI_C"
                         ,0,0,0);
  plVar8 = plVar11;
  if (plVar6 != (longlong *)0x0) {
    plVar7 = (longlong *)UCheckBoxWidgetStyle::StaticClass();
    plVar14 = plVar6;
    do {
      plVar8 = plVar6;
      if (plVar14 == plVar7) break;
      plVar14 = (longlong *)plVar14[6];
      plVar8 = plVar11;
    } while (plVar14 != (longlong *)0x0);
  }
  local_e8 = FindField<UObjectProperty>(plVar8,DAT_146878848);
  plVar8 = plVar11;
  if (plVar6 != (longlong *)0x0) {
    plVar7 = (longlong *)UCheckBoxWidgetStyle::StaticClass();
    plVar14 = plVar6;
    do {
      plVar8 = plVar6;
      if (plVar14 == plVar7) break;
      plVar14 = (longlong *)plVar14[6];
      plVar8 = plVar11;
    } while (plVar14 != (longlong *)0x0);
  }
  lVar3 = FindField<UObjectProperty>(plVar8,DAT_146878858);
  if ((((param_2 != 0) && (lVar16 != 0)) && (plVar12 != (longlong *)0x0)) &&
     (plVar6 != (longlong *)0x0)) {
    local_e0 = lVar3;
    plVar8 = (longlong *)UCheckBoxWidgetStyle::StaticClass();
    plVar11 = plVar6;
    do {
      if (plVar11 == plVar8) {
        if (plVar4 == (longlong *)0x0) {
          return;
        }
        if (DAT_146877b20 == '\0') {
          FUN_1412a2330(param_2);
        }
        local_d8 = DAT_1468780c0 + (longlong)DAT_1468780c8 * 0x28;
        lVar16 = DAT_1468780c0;
        if (DAT_1468780c0 == local_d8) {
          return;
        }
        goto LAB_1412c4e50;
      }
      plVar11 = (longlong *)plVar11[6];
    } while (plVar11 != (longlong *)0x0);
  }
  return;
LAB_1412c4e50:
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_b8,lVar16);
  lVar9 = FWeakObjectPtr::Get(local_b8);
  if (lVar9 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != local_b0) && (local_a8 != 0)) {
      lVar9 = FUN_141796df0(&local_a8);
      FWeakObjectPtr::operator=(local_b8,lVar9);
      if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        local_b0 = DAT_1464b56f4;
      }
      lVar9 = FWeakObjectPtr::Get(local_b8);
      if (lVar9 != 0) goto LAB_1412c4ed4;
    }
LAB_1412c4f0a:
    lVar9 = FUN_1405ec200(local_b8);
    if (lVar9 != 0) {
      lVar10 = FUN_1414a9b90();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_1412c4f59;
    }
  }
  else {
LAB_1412c4ed4:
    lVar10 = FUN_1414a9b90();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1412c4f0a;
LAB_1412c4f59:
    plVar11 = *(longlong **)(param_2 + 0x78);
    for (plVar8 = plVar11; plVar8 != plVar11 + *(int *)(param_2 + 0x80); plVar8 = plVar8 + 1) {
      if (*plVar8 == lVar9) {
        iVar13 = (int)((longlong)plVar8 - (longlong)plVar11 >> 3);
        goto LAB_1412c4f87;
      }
    }
    iVar13 = -1;
LAB_1412c4f87:
    if (iVar13 == -1) {
      FActorSpawnParameters::FActorSpawnParameters(local_78);
      local_50 = 1;
      local_68 = plVar12;
      plVar11 = (longlong *)UCheckBoxWidgetStyle::StaticClass();
      plVar12 = plVar6;
      do {
        plVar8 = plVar6;
        if (plVar12 == plVar11) goto LAB_1412c4fd2;
        plVar12 = (longlong *)plVar12[6];
      } while (plVar12 != (longlong *)0x0);
      plVar8 = (longlong *)0x0;
LAB_1412c4fd2:
      plVar12 = (longlong *)FUN_1425518b0(plVar4,plVar8,lVar9 + 0xc0,local_78);
      if (plVar12 == (longlong *)0x0) {
LAB_1412c5020:
        plVar12 = (longlong *)0x0;
      }
      else {
        lVar10 = UCheckBoxWidgetStyle::StaticClass();
        if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
            != lVar10 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_1412c5020;
      }
      FUN_1412b6150(param_1,plVar12,0);
      FUN_1422232e0(plVar12,*(undefined8 *)(param_1 + 0x740),&DAT_146532180,0);
      if ((local_e8 != 0) && (lVar3 != 0)) {
        plVar11 = (longlong *)((longlong)*(int *)(local_e8 + 0x44) + (longlong)plVar12);
        if (plVar11 != (longlong *)0x0) {
          *plVar11 = lVar9;
        }
        plVar11 = (longlong *)((longlong)*(int *)(lVar3 + 0x44) + (longlong)plVar12);
        if (plVar11 != (longlong *)0x0) {
          *plVar11 = param_1;
        }
      }
      local_80 = AGFreezeCharacterCue::GetPrivateStaticClass();
      lVar10 = (**(code **)(*plVar12 + 0x628))(plVar12,local_80);
      lVar3 = DAT_146878868;
      if (lVar10 != 0) {
        lVar1 = *(longlong *)(lVar9 + 0x10);
        if (((int)DAT_146878868 == 0) && ((int)((ulonglong)DAT_146878868 >> 0x20) == 0)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (!bVar2) {
          if (lVar1 == 0) {
            local_100 = 0;
          }
          else {
            local_100 = *(longlong *)(lVar1 + 0x38);
          }
          local_f8 = 0xffffffff;
          local_f4 = 0x101;
          local_f2 = 0;
          local_108 = lVar1;
          FUN_14067b390(&local_108);
          while (local_100 != 0) {
            if (*(longlong *)(local_100 + 0x18) == lVar3) {
              puVar15 = (undefined8 *)(*(int *)(local_100 + 0x44) + lVar9);
              if (puVar15 != (undefined8 *)0x0) {
                local_c0 = *(undefined4 *)(puVar15 + 1);
                local_c8 = *puVar15;
                local_88 = local_c0;
                FUN_142610200(lVar10,DAT_146878878,&local_c8);
              }
              break;
            }
            local_100 = *(longlong *)(local_100 + 0x28);
            FUN_14067b390(&local_108);
          }
        }
      }
      iVar13 = *(int *)(param_1 + 0x478);
      *(int *)(param_1 + 0x478) = iVar13 + 1;
      if (*(int *)(param_1 + 0x47c) < iVar13 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x470,iVar13);
      }
      *(longlong **)(*(longlong *)(param_1 + 0x470) + (longlong)iVar13 * 8) = plVar12;
      plVar12 = local_f0;
      lVar3 = local_e0;
    }
  }
  if (local_a0 != 0) {
    FMemory::Free();
  }
  lVar16 = lVar16 + 0x28;
  if (lVar16 == local_d8) {
    return;
  }
  goto LAB_1412c4e50;
}



// FUNCTION 1412c5300 FUN_1412c5300 body=301 status=ok
// SIG undefined FUN_1412c5300(void)

void FUN_1412c5300(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_10;
  
  if ((*(longlong *)(param_1 + 0x8c8) == 0) && (*(longlong *)(param_1 + 0x720) != 0)) {
    local_res8 = 0;
    uVar1 = UKismetMaterialLibrary::CreateDynamicMaterialInstance
                      (param_1,*(undefined8 *)(param_1 + 0x670),0);
    lVar2 = FUN_140a79980(param_1);
    *(longlong *)(param_1 + 0x8c8) = lVar2;
    if (lVar2 != 0) {
      local_10 = 0xc2c80000;
      local_28 = 0;
      local_20 = 0xc2c80000;
      *(undefined8 *)(param_1 + 0x8d8) = uVar1;
      FUN_1423990b0(lVar2,&local_28,0,0,0);
      (**(code **)(**(longlong **)(param_1 + 0x8c8) + 0x928))
                (*(longlong **)(param_1 + 0x8c8),*(undefined8 *)(param_1 + 0x668));
      (**(code **)(**(longlong **)(param_1 + 0x8c8) + 0x568))
                (*(longlong **)(param_1 + 0x8c8),0,uVar1);
      FUN_14234b150(*(undefined8 *)(param_1 + 0x8c8));
      local_res10 = 0;
      local_res8 = CONCAT44(local_res8._4_4_,0x1010000);
      FUN_142382f60(*(undefined8 *)(param_1 + 0x8c8),*(undefined8 *)(param_1 + 0x720),&local_res8,0)
      ;
      FUN_142397540(*(undefined8 *)(param_1 + 0x8c8),*(char *)(param_1 + 0x5a8) == '\0',1);
    }
  }
  return;
}



// FUNCTION 1412c5430 FUN_1412c5430 body=187 status=ok
// SIG undefined FUN_1412c5430(void)

void FUN_1412c5430(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x599) == '\0') {
    *(undefined1 *)(param_1 + 0x599) = 1;
    lVar1 = *(longlong *)(param_1 + 0x348);
    lVar2 = (longlong)*(int *)(param_1 + 0x350) * 0x270 + lVar1;
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x270) {
      FUN_1412cc3b0(lVar1,param_1 + -0x460);
    }
    lVar1 = *(longlong *)(param_1 + 0x338);
    lVar2 = (longlong)*(int *)(param_1 + 0x340) * 0x270 + lVar1;
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x270) {
      FUN_1412cc3b0(lVar1,param_1 + -0x460);
    }
  }
  return;
}



// FUNCTION 1412c54f0 FUN_1412c54f0 body=3097 status=ok
// SIG undefined FUN_1412c54f0(void)

void FUN_1412c54f0(void)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined2 *puVar18;
  longlong *local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_284;
  longlong local_278;
  longlong local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_25c;
  longlong local_250;
  longlong local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_204;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b4;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong *local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160 [8];
  longlong local_158 [2];
  longlong local_148 [2];
  longlong local_138 [2];
  longlong local_128 [2];
  longlong local_118 [2];
  longlong local_108 [2];
  undefined8 local_f8;
  undefined1 local_f0 [16];
  undefined8 local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined1 local_68 [40];
  
  if (DAT_1468787c4 < 0) {
    if (DAT_1468787c0 != 0) {
      plVar14 = (longlong *)(DAT_1468787b8 + 0x18);
      iVar16 = DAT_1468787c0;
      do {
        if (*plVar14 != 0) {
          FMemory::Free();
        }
        plVar14 = plVar14 + 5;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
    }
    DAT_1468787c0 = 0;
    if (DAT_1468787c4 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (&DAT_1468787b8,0);
    }
  }
  else {
    if (DAT_1468787c0 != 0) {
      plVar14 = (longlong *)(DAT_1468787b8 + 0x18);
      iVar16 = DAT_1468787c0;
      do {
        if (*plVar14 != 0) {
          FMemory::Free();
        }
        plVar14 = plVar14 + 5;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
    }
    DAT_1468787c0 = 0;
  }
  uVar15 = 0;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar7 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar7 != 0) {
    puVar17 = *(undefined4 **)(lVar7 + 0x598);
    puVar1 = puVar17 + (longlong)*(int *)(lVar7 + 0x5a0) * 10;
    for (; puVar17 != puVar1; puVar17 = puVar17 + 10) {
      local_230 = *puVar17;
      local_22c = puVar17[1];
      local_228 = puVar17[2];
      local_f8 = *(undefined8 *)(puVar17 + 4);
      local_218 = 0;
      local_210 = 0;
      local_220 = 0;
      FString::FString(local_f0,puVar17 + 6);
      FSoftObjectPath::operator=(&local_220,&local_f8);
      local_188 = local_230;
      local_184 = local_22c;
      local_180 = local_228;
      local_e0 = local_220;
      local_170 = 0;
      local_168 = 0;
      local_178 = 0;
      FString::FString(local_d8,&local_218);
      FSoftObjectPath::operator=(&local_178,&local_e0);
      FUN_1412b88b0(&local_188);
      if (local_218 != 0) {
        FMemory::Free();
      }
    }
    puVar4 = (undefined8 *)FName::FName(local_160,L"AssetRegistry",1);
    uVar8 = *puVar4;
    uVar5 = FUN_14168dc80();
    plVar6 = (longlong *)FUN_141690010(uVar5,uVar8);
    local_2a8 = (longlong *)0x0;
    local_2a0 = 0;
    local_190 = plVar6;
    plVar14 = (longlong *)(**(code **)(*plVar6 + 0x48))(plVar6);
    lVar7 = FUN_1414f4830();
    (**(code **)(*plVar14 + 0x28))(plVar14,*(undefined8 *)(lVar7 + 0x18),&local_2a8,1);
    plVar12 = local_2a8 + (longlong)(int)local_2a0 * 0xb;
    for (plVar14 = local_2a8; plVar14 != plVar12; plVar14 = plVar14 + 0xb) {
      if (*plVar14 == 0) {
LAB_1412c584a:
        uVar9 = uVar15;
      }
      else {
        puVar4 = (undefined8 *)FName::ToString(plVar14,local_158);
        if (*(int *)(puVar4 + 1) == 0) {
          puVar18 = &DAT_143f3eda8;
        }
        else {
          puVar18 = (undefined2 *)*puVar4;
        }
        uVar8 = UObject::GetPrivateStaticClass();
        uVar9 = FUN_141799410(uVar8,0,puVar18,0);
        if (local_158[0] != 0) {
          FMemory::Free();
        }
        if (uVar9 == 0) {
          puVar4 = (undefined8 *)FName::ToString(plVar14,local_148);
          if (*(int *)(puVar4 + 1) == 0) {
            puVar18 = &DAT_143f3eda8;
          }
          else {
            puVar18 = (undefined2 *)*puVar4;
          }
          uVar8 = UObject::GetPrivateStaticClass();
          uVar9 = FUN_141799c90(uVar8,0,puVar18,0,0,0,1);
          if (local_148[0] != 0) {
            FMemory::Free();
          }
          if (uVar9 == 0) goto LAB_1412c584a;
        }
        lVar7 = FUN_1414f4830();
        if ((*(int *)(*(longlong *)(uVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_1412c584a;
      }
      if (uVar9 != 0) {
        local_1f8 = 0;
        local_1f0 = 0;
        local_1e8 = 0;
        local_208 = 0xffffffff;
        local_204 = 0;
        uVar8 = FSoftObjectPath::FSoftObjectPath(local_c8,uVar9);
        FSoftObjectPath::operator=(&local_1f8,uVar8);
        FWeakObjectPtr::operator=(&local_208,uVar9);
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        local_204 = CONCAT44(DAT_1464b56f4,(undefined4)local_204);
        FUN_1412b88b0(&local_208);
      }
    }
    FUN_1412bdbc0(&local_2a8,0);
    plVar14 = (longlong *)(**(code **)(*plVar6 + 0x48))(plVar6);
    lVar7 = FUN_141304350();
    (**(code **)(*plVar14 + 0x28))(plVar14,*(undefined8 *)(lVar7 + 0x18),&local_2a8,1);
    plVar12 = local_2a8 + (longlong)(int)local_2a0 * 0xb;
    for (plVar14 = local_2a8; plVar14 != plVar12; plVar14 = plVar14 + 0xb) {
      if (*plVar14 != 0) {
        puVar4 = (undefined8 *)FName::ToString(plVar14,local_138);
        if (*(int *)(puVar4 + 1) == 0) {
          puVar18 = &DAT_143f3eda8;
        }
        else {
          puVar18 = (undefined2 *)*puVar4;
        }
        uVar8 = UObject::GetPrivateStaticClass();
        lVar7 = FUN_141799410(uVar8,0,puVar18,0);
        if (local_138[0] != 0) {
          FMemory::Free();
        }
        if (lVar7 == 0) {
          puVar4 = (undefined8 *)FName::ToString(plVar14,local_128);
          if (*(int *)(puVar4 + 1) == 0) {
            puVar18 = &DAT_143f3eda8;
          }
          else {
            puVar18 = (undefined2 *)*puVar4;
          }
          uVar8 = UObject::GetPrivateStaticClass();
          lVar7 = FUN_141799c90(uVar8,0,puVar18,0,0,0,1);
          if (local_128[0] != 0) {
            FMemory::Free();
          }
          if (lVar7 == 0) goto LAB_1412c5cc7;
        }
        lVar10 = FUN_141304350();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar10 = *(longlong *)(lVar7 + 0x90);
          if (lVar10 != 0) {
            local_1d0 = 0;
            local_1c8 = 0;
            local_1c0 = 0;
            local_1e0 = 0xffffffff;
            local_1dc = 0;
            uVar8 = FSoftObjectPath::FSoftObjectPath(local_b0,lVar10);
            FSoftObjectPath::operator=(&local_1d0,uVar8);
            FWeakObjectPtr::operator=(&local_1e0,lVar10);
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            local_1dc = CONCAT44(DAT_1464b56f4,(undefined4)local_1dc);
            FUN_1412b88b0(&local_1e0);
            lVar10 = *(longlong *)(lVar7 + 0x90);
            local_238 = 0;
            local_250 = 0;
            local_248 = 0;
            local_240 = 0;
            local_260 = 0xffffffff;
            local_25c = 0;
            if (lVar10 == 0) {
              local_298 = 0;
              local_250 = 0;
            }
            else {
              uVar8 = FSoftObjectPath::FSoftObjectPath(local_98,lVar10);
              FSoftObjectPath::operator=(&local_250,uVar8);
              FWeakObjectPtr::operator=(&local_260,lVar10);
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              local_25c = CONCAT44(DAT_1464b56f4,(undefined4)local_25c);
            }
            lVar10 = FWeakObjectPtr::Get(&local_260);
            if (lVar10 == 0) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              if ((DAT_1464b56f4 != local_25c._4_4_) && (local_290 = 0, local_250 != 0)) {
                lVar10 = FUN_141796df0(&local_250);
                FWeakObjectPtr::operator=(&local_260,lVar10);
                if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                  }
                  UNLOCK();
                  local_25c = CONCAT44(DAT_1464b56f4,(undefined4)local_25c);
                }
                lVar10 = FWeakObjectPtr::Get(&local_260);
                if (lVar10 != 0) goto LAB_1412c5bc2;
              }
            }
            else {
LAB_1412c5bc2:
              lVar11 = FUN_1414f4830();
              if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                plVar6 = *(longlong **)(lVar10 + 0x30);
                uVar9 = (longlong)*(int *)(lVar10 + 0x38) & 0x1fffffffffffffff;
                if (plVar6 + *(int *)(lVar10 + 0x38) < plVar6) {
                  uVar9 = uVar15;
                }
                uVar13 = uVar15;
                if (uVar9 != 0) {
                  do {
                    lVar10 = *plVar6;
                    if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0xb8) == 0)) {
                      *(longlong *)(lVar10 + 0xb8) = lVar7;
                    }
                    plVar6 = plVar6 + 1;
                    uVar13 = uVar13 + 1;
                  } while (uVar13 != uVar9);
                }
              }
            }
            if (local_248 != 0) {
              FMemory::Free();
            }
          }
          if (0 < *(int *)(lVar7 + 0x2e8)) {
            plVar6 = *(longlong **)(lVar7 + 0x2e0);
            uVar9 = (longlong)*(int *)(lVar7 + 0x2e8) & 0x1fffffffffffffff;
            if (plVar6 + *(int *)(lVar7 + 0x2e8) < plVar6) {
              uVar9 = uVar15;
            }
            uVar13 = uVar15;
            if (uVar9 != 0) {
              do {
                lVar10 = *plVar6;
                if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x30) != 0)) {
                  FUN_14128eb20(*(longlong *)(lVar10 + 0x30),lVar10);
                  *(longlong *)(lVar10 + 0x70) = lVar7;
                }
                plVar6 = plVar6 + 1;
                uVar13 = uVar13 + 1;
              } while (uVar13 != uVar9);
            }
          }
        }
      }
LAB_1412c5cc7:
      plVar6 = local_190;
    }
    FUN_1412bdbc0(&local_2a8,0);
    plVar14 = (longlong *)(**(code **)(*plVar6 + 0x48))(plVar6);
    lVar7 = FUN_1414a12b0();
    (**(code **)(*plVar14 + 0x28))(plVar14,*(undefined8 *)(lVar7 + 0x18),&local_2a8,1);
    plVar6 = local_2a8 + (longlong)(int)local_2a0 * 0xb;
    for (plVar14 = local_2a8; plVar14 != plVar6; plVar14 = plVar14 + 0xb) {
      if (*plVar14 != 0) {
        puVar4 = (undefined8 *)FName::ToString(plVar14,local_118);
        if (*(int *)(puVar4 + 1) == 0) {
          puVar18 = &DAT_143f3eda8;
        }
        else {
          puVar18 = (undefined2 *)*puVar4;
        }
        uVar8 = UObject::GetPrivateStaticClass();
        lVar7 = FUN_141799410(uVar8,0,puVar18,0);
        if (local_118[0] != 0) {
          FMemory::Free();
        }
        if (lVar7 == 0) {
          puVar4 = (undefined8 *)FName::ToString(plVar14,local_108);
          if (*(int *)(puVar4 + 1) == 0) {
            puVar18 = &DAT_143f3eda8;
          }
          else {
            puVar18 = (undefined2 *)*puVar4;
          }
          uVar8 = UObject::GetPrivateStaticClass();
          lVar7 = FUN_141799c90(uVar8,0,puVar18,0,0,0,1);
          if (local_108[0] != 0) {
            FMemory::Free();
          }
          if (lVar7 == 0) goto LAB_1412c60b8;
        }
        lVar10 = FUN_1414a12b0();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar10 = *(longlong *)(lVar7 + 0x2b0);
          if (lVar10 != 0) {
            local_1a8 = 0;
            local_1a0 = 0;
            local_198 = 0;
            local_1b8 = 0xffffffff;
            local_1b4 = 0;
            uVar8 = FSoftObjectPath::FSoftObjectPath(local_80,lVar10);
            FSoftObjectPath::operator=(&local_1a8,uVar8);
            FWeakObjectPtr::operator=(&local_1b8,lVar10);
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            local_1b4 = CONCAT44(DAT_1464b56f4,(undefined4)local_1b4);
            FUN_1412b88b0(&local_1b8);
            lVar10 = *(longlong *)(lVar7 + 0x2b0);
            local_290 = 0;
            local_278 = 0;
            local_270 = 0;
            local_268 = 0;
            local_288 = 0xffffffff;
            local_284 = 0;
            if (lVar10 == 0) {
              FSoftObjectPath::Reset(&local_278);
              local_284 = local_284 & 0xffffffff;
            }
            else {
              uVar8 = FSoftObjectPath::FSoftObjectPath(local_68,lVar10);
              FSoftObjectPath::operator=(&local_278,uVar8);
              FWeakObjectPtr::operator=(&local_288,lVar10);
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              local_284 = CONCAT44(DAT_1464b56f4,(undefined4)local_284);
            }
            lVar10 = FWeakObjectPtr::Get(&local_288);
            if (lVar10 == 0) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              if ((DAT_1464b56f4 != local_284._4_4_) && (local_298 = 0, local_278 != 0)) {
                lVar10 = FUN_141796df0(&local_278);
                FWeakObjectPtr::operator=(&local_288,lVar10);
                if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                  }
                  UNLOCK();
                  local_284 = CONCAT44(DAT_1464b56f4,(undefined4)local_284);
                }
                lVar10 = FWeakObjectPtr::Get(&local_288);
                if (lVar10 != 0) goto LAB_1412c5fce;
              }
            }
            else {
LAB_1412c5fce:
              cVar3 = FUN_1412afe90(lVar10);
              if ((cVar3 != '\0') && (lVar10 != 0)) {
                plVar12 = *(longlong **)(lVar10 + 0x30);
                uVar9 = (longlong)*(int *)(lVar10 + 0x38) & 0x1fffffffffffffff;
                if (plVar12 + *(int *)(lVar10 + 0x38) < plVar12) {
                  uVar9 = uVar15;
                }
                uVar13 = uVar15;
                if (uVar9 != 0) {
                  do {
                    if (*plVar12 != 0) {
                      *(longlong *)(*plVar12 + 0x1d0) = lVar7;
                    }
                    plVar12 = plVar12 + 1;
                    uVar13 = uVar13 + 1;
                  } while (uVar13 != uVar9);
                }
              }
            }
            if (local_270 != 0) {
              FMemory::Free();
            }
          }
          if (0 < *(int *)(lVar7 + 0x310)) {
            plVar12 = *(longlong **)(lVar7 + 0x308);
            uVar9 = (longlong)*(int *)(lVar7 + 0x310) & 0x1fffffffffffffff;
            if (plVar12 + *(int *)(lVar7 + 0x310) < plVar12) {
              uVar9 = uVar15;
            }
            uVar13 = uVar15;
            if (uVar9 != 0) {
              do {
                lVar10 = *plVar12;
                if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x30) != 0)) {
                  FUN_14128eb20(*(longlong *)(lVar10 + 0x30),lVar10);
                  *(longlong *)(lVar10 + 0x68) = lVar7;
                  *(undefined1 *)(lVar10 + 0x60) = *(undefined1 *)(lVar7 + 0xe0);
                }
                plVar12 = plVar12 + 1;
                uVar13 = uVar13 + 1;
              } while (uVar13 != uVar9);
            }
          }
        }
      }
LAB_1412c60b8:
    }
    DAT_1468782f0 = 1;
    FUN_1404be960(&local_2a8);
  }
  return;
}



// FUNCTION 1412c6110 FUN_1412c6110 body=353 status=ok
// SIG undefined FUN_1412c6110(void)

void FUN_1412c6110(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = 0;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x590);
  }
  if ((lVar2 != 0) && (lVar2 = FSoftObjectPath::TryLoad(lVar2 + 0x60), lVar2 != 0)) {
    lVar3 = UNodeMappingContainer::StaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      plVar4 = *(longlong **)(param_1 + 0x8d0);
      bVar1 = false;
      if (plVar4 == (longlong *)0x0) {
        plVar4 = (longlong *)FUN_140a79980(param_1);
        *(longlong **)(param_1 + 0x8d0) = plVar4;
        bVar1 = true;
        if (plVar4 == (longlong *)0x0) {
          return;
        }
      }
      (**(code **)(*plVar4 + 0x928))(plVar4,lVar2);
      (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x638))(*(longlong **)(param_1 + 0x8d0),0);
      (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x838))(*(longlong **)(param_1 + 0x8d0),0);
      (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x500))(*(longlong **)(param_1 + 0x8d0),2);
      FUN_142398ec0(*(undefined8 *)(param_1 + 0x8d0),1,2);
      if (bVar1) {
        FUN_14234b150(*(undefined8 *)(param_1 + 0x8d0));
        local_res18 = 0;
        local_res10[0] = 0x1000000;
        FUN_142382f60(*(undefined8 *)(param_1 + 0x8d0),*(undefined8 *)(param_1 + 0x740),local_res10,
                      0);
      }
    }
  }
  return;
}



// FUNCTION 1412c6280 FUN_1412c6280 body=426 status=ok
// SIG undefined FUN_1412c6280(void)

void FUN_1412c6280(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_18;
  undefined8 local_10;
  
  FUN_1412cd930();
  cVar1 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                    ((longlong)param_1 + 0x754,param_1 + 0xf1);
  if (cVar1 == '\0') {
    FUN_1412c76e0(param_1);
    lVar2 = param_1[0xf3];
    lVar4 = (longlong)(int)param_1[0xf4] * 0x270 + lVar2;
    for (; lVar2 != lVar4; lVar2 = lVar2 + 0x270) {
      FUN_1412d31a0(param_1,lVar2,1);
    }
    lVar2 = param_1[0xf5];
    lVar4 = (longlong)(int)param_1[0xf6] * 0x270 + lVar2;
    for (; lVar2 != lVar4; lVar2 = lVar2 + 0x270) {
      FUN_1412d31a0(param_1,lVar2,0);
    }
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x148))();
    if ((lVar2 != 0) && (lVar2 = FUN_142f6c9f0(lVar2), lVar2 != 0)) {
      (**(code **)(param_1[0x8b] + 0x10))(param_1 + 0x8b,lVar2 + 0x660);
    }
    if (*(char *)((longlong)param_1 + 0xd23) != '\0') {
      uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar2 = FUN_140c12480(uVar3);
      if ((lVar2 != 0) && (lVar2 = FARSupportInterface::GetXRTrackingSystem(), lVar2 != 0)) {
        local_18 = 0;
        local_10 = 0;
        FUN_1411e0e30(lVar2,&local_18);
        lVar2 = local_18 + (longlong)(int)local_10 * 8;
        for (lVar4 = local_18; lVar4 != lVar2; lVar4 = lVar4 + 8) {
          uVar3 = FWeakObjectPtr::Get(lVar4);
          FUN_1412c8b20(param_1,uVar3);
        }
        if (local_18 != 0) {
          FMemory::Free(local_18);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1412c6430 FUN_1412c6430 body=2943 status=ok
// SIG undefined FUN_1412c6430(void)

void FUN_1412c6430(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  float *pfVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  uint local_res20;
  longlong local_1c8;
  uint local_1c0;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  undefined4 local_1a0;
  longlong *local_198;
  undefined8 local_190;
  undefined8 local_188;
  longlong *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  ulonglong local_138;
  longlong local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  float local_108;
  float local_fc;
  float local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [120];
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 0x58) == 0) {
    local_1c8 = 0;
  }
  else {
    local_1c8 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x588);
  }
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x754);
  local_130 = lVar6;
  if (lVar6 != 0) {
    if (*(longlong *)(param_1 + 0x760) == 0) {
      uVar7 = FUN_14129f8a0(lVar6);
      *(undefined8 *)(param_1 + 0x760) = uVar7;
    }
    if ((*(int *)(param_1 + 0x770) == 0) && (cVar2 = FUN_1412a29f0(lVar6), cVar2 != '\0')) {
      FUN_141297650(lVar6,param_1 + 0x768);
    }
    local_198 = (longlong *)0x0;
    local_190 = 1;
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_198,0);
    *local_198 = *(longlong *)(param_1 + 0x760);
    local_128 = local_198;
    iVar15 = (int)local_190;
    if (*(int *)(param_1 + 0x770) != 0) {
      iVar5 = *(int *)(param_1 + 0x770);
      if (iVar5 != 0) {
        if (local_190._4_4_ < (int)local_190 + iVar5) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(&local_198);
          iVar15 = (int)local_190;
        }
        plVar13 = local_198;
        _guard_xfg_dispatch_icall_nop
                  (local_198 + iVar15,*(void **)(param_1 + 0x768),(longlong)iVar5 << 3);
        local_128 = plVar13;
        iVar15 = iVar15 + iVar5;
      }
    }
    plVar13 = local_128 + iVar15;
    plVar11 = local_128;
    local_118 = plVar13;
    if (local_128 != plVar13) {
      do {
        lVar1 = *local_128;
        if (lVar1 != 0) {
          uVar16 = *(int *)(param_1 + 0x8a0) - 1;
          if (-1 < (int)uVar16) {
            plVar13 = (longlong *)(param_1 + 0x898);
            lVar17 = (longlong)(int)uVar16 * 0x28;
            lVar20 = (longlong)*(int *)(param_1 + 0x8a0) * 0x28;
            lVar18 = lVar17;
            do {
              if ((*(longlong *)(lVar18 + *plVar13) != 0) &&
                 (FUN_142398ec0(*(longlong *)(lVar18 + *plVar13),0,2),
                 *(int *)(lVar1 + 0x38) <= (int)uVar16)) {
                (**(code **)(**(longlong **)(lVar18 + *plVar13) + 0x3b0))();
                plVar11 = *(longlong **)(lVar18 + 0x10 + *plVar13);
                if (plVar11 != (longlong *)0x0) {
                  (**(code **)(*plVar11 + 0x3b0))();
                }
                iVar15 = *(int *)(param_1 + 0x8a0);
                iVar5 = (iVar15 - uVar16) + -1;
                if (iVar5 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(*plVar13 + lVar17),(void *)(lVar20 + *plVar13),
                             (longlong)iVar5 * 0x28);
                  iVar15 = *(int *)(param_1 + 0x8a0);
                }
                *(int *)(param_1 + 0x8a0) = iVar15 + -1;
                TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(plVar13);
              }
              lVar20 = lVar20 + -0x28;
              lVar17 = lVar17 + -0x28;
              lVar18 = lVar18 + -0x28;
              uVar16 = uVar16 - 1;
              lVar6 = local_130;
            } while (-1 < (int)uVar16);
          }
          lVar18 = *(longlong *)(param_1 + 0x118);
          local_res20 = uVar16 & 0xffffff00;
          if (lVar18 == 0) {
LAB_1412c6712:
            lVar18 = 0;
          }
          else {
            lVar17 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar17 + 0x90) * 8) != lVar17 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) goto LAB_1412c6712;
            lVar18 = *(longlong *)(lVar18 + 0xc80);
          }
          uVar14 = 0;
          *(longlong *)(param_1 + 0x938) = lVar18;
          if (lVar18 != 0) {
            uVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                              (param_1 + 0x754,param_1 + 0x788);
            FUN_1412a0140(*(undefined8 *)(param_1 + 0x938),lVar6,uVar3,1);
            fVar22 = (float)FUN_141298090(*(undefined8 *)(param_1 + 0x938));
            *(float *)(param_1 + 0xd0c) = fVar22 * fVar22;
            if (local_1c8 == 0) {
              fVar22 = 1000.0;
            }
            else {
              fVar22 = *(float *)(local_1c8 + 0x188);
            }
            *(float *)(param_1 + 0xd10) = fVar22 * fVar22;
            lVar6 = FUN_1412994e0(*(undefined8 *)(param_1 + 0x938));
            local_res20 = (uint)(lVar6 != 0);
          }
          plVar13 = *(longlong **)(lVar1 + 0x30);
          local_1c0 = 0;
          plVar11 = plVar13 + (longlong)*(int *)(lVar1 + 0x38) * 7;
          local_120 = plVar11;
          if (plVar13 != plVar11) {
            local_138 = 0;
            uVar21 = uVar14;
            do {
              uVar16 = (uint)uVar21;
              plVar9 = (longlong *)0x0;
              if (*plVar13 != 0) {
                local_180 = (longlong *)0x0;
                if (((int)uVar16 < 0) || (*(int *)(param_1 + 0x8a0) <= (int)uVar16)) {
                  bVar4 = true;
                }
                else {
                  bVar4 = false;
                }
                if (bVar4) {
                  FUN_1417846f0(param_1,
                                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                               );
                  local_178 = 0;
                  uVar7 = FUN_142a232e0();
                  plVar8 = (longlong *)FUN_1417985e0(uVar7,param_1,local_178,0,0,0,0,0,0);
                  plVar11 = plVar9;
                  plVar10 = plVar9;
                  if ((char)local_res20 != '\0') {
                    local_170 = 0;
                    plVar9 = (longlong *)
                             UKismetMaterialLibrary::CreateDynamicMaterialInstance
                                       (param_1,*(undefined8 *)(local_1c8 + 0x1b8),0);
                    plVar11 = (longlong *)0x0;
                    plVar10 = (longlong *)0x0;
                    if (*(longlong *)(local_1c8 + 0x1c0) != 0) {
                      FUN_1417846f0(param_1,
                                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                                   );
                      local_168 = 0;
                      uVar7 = FUN_142a232e0();
                      plVar10 = (longlong *)FUN_1417985e0(uVar7,param_1,0,0,0,0,0,0,0);
                      local_160 = 0;
                      plVar11 = (longlong *)
                                UKismetMaterialLibrary::CreateDynamicMaterialInstance
                                          (param_1,*(undefined8 *)(local_1c8 + 0x1c0),0);
                      local_180 = plVar11;
                    }
                  }
                }
                else {
                  lVar6 = *(longlong *)(param_1 + 0x898);
                  plVar11 = *(longlong **)(lVar6 + 0x18 + uVar14);
                  plVar8 = *(longlong **)(lVar6 + uVar14);
                  plVar9 = *(longlong **)(lVar6 + 8 + uVar14);
                  plVar10 = *(longlong **)(lVar6 + 0x10 + uVar14);
                  local_180 = plVar11;
                }
                if (plVar8 != (longlong *)0x0) {
                  (**(code **)(*plVar8 + 0x928))(plVar8,*plVar13);
                  (**(code **)(*plVar8 + 0x568))(plVar8,0,plVar9);
                  (**(code **)(*plVar8 + 0x638))(plVar8,0);
                  (**(code **)(*plVar8 + 0x838))(plVar8,0);
                  (**(code **)(*plVar8 + 0x500))(plVar8,2);
                  FUN_14234b150(plVar8);
                  local_res10[0] = 0x1000000;
                  local_158 = 0;
                  FUN_142382f60(plVar8,*(undefined8 *)(param_1 + 0x720),local_res10);
                  local_1a0 = CONCAT31(local_1a0._1_3_,1);
                  if (uVar16 == 0) {
                    fStack_1a4 = *(float *)((longlong)plVar8 + 0x1e4) + *(float *)(plVar8 + 0x3b);
                    fStack_1b0 = *(float *)(plVar8 + 0x3b) - *(float *)((longlong)plVar8 + 0x1e4);
                    fStack_1ac = *(float *)((longlong)plVar8 + 0x1dc) + *(float *)(plVar8 + 0x3a);
                    fStack_1a8 = *(float *)(plVar8 + 0x3c) + *(float *)((longlong)plVar8 + 0x1d4);
                    local_1b8 = *(float *)(plVar8 + 0x3a) - *(float *)((longlong)plVar8 + 0x1dc);
                    fStack_1b4 = *(float *)((longlong)plVar8 + 0x1d4) - *(float *)(plVar8 + 0x3c);
                    *(float *)(param_1 + 0x98c) = local_1b8;
                    *(float *)(param_1 + 0x990) = fStack_1b4;
                    *(float *)(param_1 + 0x994) = fStack_1b0;
                    *(float *)(param_1 + 0x998) = fStack_1ac;
                    *(ulonglong *)(param_1 + 0x99c) = CONCAT44(fStack_1a4,fStack_1a8);
                    local_108 = fStack_1b0;
                    local_fc = fStack_1a4;
                  }
                  else {
                    fStack_1ac = *(float *)((longlong)plVar8 + 0x1dc) + *(float *)(plVar8 + 0x3a);
                    fStack_1a8 = *(float *)(plVar8 + 0x3c) + *(float *)((longlong)plVar8 + 0x1d4);
                    fStack_1a4 = *(float *)((longlong)plVar8 + 0x1e4) + *(float *)(plVar8 + 0x3b);
                    local_1b8 = *(float *)(plVar8 + 0x3a) - *(float *)((longlong)plVar8 + 0x1dc);
                    fStack_1b4 = *(float *)((longlong)plVar8 + 0x1d4) - *(float *)(plVar8 + 0x3c);
                    fStack_1b0 = *(float *)(plVar8 + 0x3b) - *(float *)((longlong)plVar8 + 0x1e4);
                    if (*(char *)(param_1 + 0x9a4) != '\0') {
                      fVar22 = local_1b8;
                      if (*(float *)(param_1 + 0x98c) <= local_1b8) {
                        fVar22 = *(float *)(param_1 + 0x98c);
                      }
                      fVar25 = fStack_1b0;
                      if (*(float *)(param_1 + 0x994) <= fStack_1b0) {
                        fVar25 = *(float *)(param_1 + 0x994);
                      }
                      fVar26 = fStack_1a8;
                      if (fStack_1a8 <= *(float *)(param_1 + 0x99c)) {
                        fVar26 = *(float *)(param_1 + 0x99c);
                      }
                      fVar23 = *(float *)(param_1 + 0x990);
                      if (fStack_1b4 <= *(float *)(param_1 + 0x990)) {
                        fVar23 = fStack_1b4;
                      }
                      *(float *)(param_1 + 0x98c) = fVar22;
                      *(float *)(param_1 + 0x994) = fVar25;
                      *(float *)(param_1 + 0x99c) = fVar26;
                      *(float *)(param_1 + 0x990) = fVar23;
                      fVar22 = *(float *)(param_1 + 0x998);
                      if (*(float *)(param_1 + 0x998) <= fStack_1ac) {
                        fVar22 = fStack_1ac;
                      }
                      *(float *)(param_1 + 0x998) = fVar22;
                      fVar22 = *(float *)(param_1 + 0x9a0);
                      if (*(float *)(param_1 + 0x9a0) <= fStack_1a4) {
                        fVar22 = fStack_1a4;
                      }
                      *(float *)(param_1 + 0x9a0) = fVar22;
                      goto LAB_1412c6b6b;
                    }
                    *(ulonglong *)(param_1 + 0x98c) = CONCAT44(fStack_1b4,local_1b8);
                    *(ulonglong *)(param_1 + 0x994) = CONCAT44(fStack_1ac,fStack_1b0);
                    *(ulonglong *)(param_1 + 0x99c) = CONCAT44(fStack_1a4,fStack_1a8);
                  }
                  *(undefined4 *)(param_1 + 0x9a4) = local_1a0;
                }
LAB_1412c6b6b:
                if (plVar10 != (longlong *)0x0) {
                  (**(code **)(*plVar10 + 0x928))(plVar10,*plVar13);
                  (**(code **)(*plVar10 + 0x568))(plVar10,0,plVar11);
                  (**(code **)(*plVar10 + 0x638))(plVar10,0);
                  (**(code **)(*plVar10 + 0x838))(plVar10,0);
                  (**(code **)(*plVar10 + 0x500))(plVar10,2);
                  FUN_14234b150(plVar10);
                  local_res18[0] = 0x1000000;
                  local_150 = 0;
                  FUN_142382f60(plVar10,*(undefined8 *)(param_1 + 0x720),local_res18);
                }
                if (((plVar9 != (longlong *)0x0) && ((char)local_res20 != '\0')) &&
                   (lVar6 = FUN_1412994e0(*(undefined8 *)(param_1 + 0x938)), lVar6 != 0)) {
                  uVar7 = FUN_1412994e0(*(undefined8 *)(param_1 + 0x938));
                  local_188 = FUN_1424a1ca0(uVar7);
                  FUN_1425a28b0(plVar9,*(undefined8 *)(local_1c8 + 0x1c8),local_188);
                  uVar7 = FUN_1424a2030(local_188,local_e8);
                  pfVar12 = (float *)FUN_14161f6d0(local_d8,uVar7);
                  local_1b8 = *pfVar12;
                  fStack_1b4 = pfVar12[1];
                  fStack_1b0 = pfVar12[2];
                  fStack_1ac = pfVar12[3];
                  FUN_1425a2be0(plVar9,*(undefined8 *)(local_1c8 + 0x1d0),&local_1b8);
                  cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                                    (param_1 + 0x754,param_1 + 0x788);
                  if (cVar2 == '\0') {
                    uVar24 = 0;
                  }
                  else {
                    uVar24 = 0x3f800000;
                  }
                  FUN_1425a2750(plVar9,*(undefined8 *)(param_1 + 0x650),uVar24);
                  if (plVar11 != (longlong *)0x0) {
                    FUN_1425a28b0(plVar11,*(undefined8 *)(local_1c8 + 0x1c8),local_188);
                    uVar7 = FUN_1424a2030(local_188,local_c8);
                    pfVar12 = (float *)FUN_14161f6d0(local_b8,uVar7);
                    local_1b8 = *pfVar12;
                    fStack_1b4 = pfVar12[1];
                    fStack_1b0 = pfVar12[2];
                    fStack_1ac = pfVar12[3];
                    FUN_1425a2be0(plVar11,*(undefined8 *)(local_1c8 + 0x1d0),&local_1b8);
                    cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                                      (param_1 + 0x754,param_1 + 0x788);
                    if (cVar2 == '\0') {
                      uVar24 = 0;
                    }
                    else {
                      uVar24 = 0x3f800000;
                    }
                    FUN_1425a2750(plVar11,*(undefined8 *)(param_1 + 0x650),uVar24);
                  }
                }
                uVar19 = uVar16;
                if (bVar4) {
                  uVar16 = *(uint *)(param_1 + 0x8a0);
                  lVar6 = (longlong)(int)uVar16;
                  *(uint *)(param_1 + 0x8a0) = uVar16 + 1;
                  if (*(int *)(param_1 + 0x8a4) < (int)(uVar16 + 1)) {
                    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x898,uVar16);
                  }
                  lVar1 = *(longlong *)(param_1 + 0x898);
                  *(longlong **)(lVar1 + 8 + lVar6 * 0x28) = plVar9;
                  *(undefined8 *)(lVar1 + 0x20 + lVar6 * 0x28) = 0;
                  *(longlong **)(lVar1 + lVar6 * 0x28) = plVar8;
                  *(longlong **)(lVar1 + 0x10 + lVar6 * 0x28) = plVar10;
                  *(longlong **)(lVar1 + 0x18 + lVar6 * 0x28) = local_180;
                  uVar19 = local_1c0;
                }
                if (((char)plVar13[6] != '\0') && (lVar6 = plVar13[5], lVar6 != 0)) {
                  if (((int)uVar16 < 0) || (*(int *)(param_1 + 0x8a0) <= (int)uVar16)) {
                    bVar4 = false;
                  }
                  else {
                    bVar4 = true;
                  }
                  if (bVar4) {
                    uVar7 = *(undefined8 *)(lVar6 + 0x10);
                    local_148 = 0;
                    local_140 = 0;
                    FUN_1417846f0(param_1,
                                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                                 );
                    uVar7 = FUN_1417985e0(uVar7,param_1,0,0x41,0,lVar6,0,0,0);
                    *(undefined8 *)
                     (*(longlong *)(param_1 + 0x898) + 0x20 + (longlong)(int)uVar16 * 0x28) = uVar7;
                    uVar19 = local_1c0;
                  }
                }
                local_1c0 = uVar19 + 1;
                uVar21 = (ulonglong)local_1c0;
                uVar14 = local_138 + 0x28;
                plVar11 = local_120;
                local_138 = uVar14;
              }
              plVar13 = plVar13 + 7;
            } while (plVar13 != plVar11);
          }
          local_f0 = (*(float *)(param_1 + 0x9a0) + *(float *)(param_1 + 0x994)) * 0.5;
          fVar22 = (*(float *)(param_1 + 0x99c) + *(float *)(param_1 + 0x990)) * 0.5;
          *(ulonglong *)(param_1 + 0x980) =
               CONCAT44(fVar22,(*(float *)(param_1 + 0x998) + *(float *)(param_1 + 0x98c)) * 0.5);
          *(float *)(param_1 + 0x988) = local_f0;
          if ((*(char *)(param_1 + 0x5a8) == '\0') || (*(char *)(param_1 + 0xd20) != '\0')) {
            uVar7 = 0;
          }
          else {
            uVar7 = 1;
          }
          FUN_1412d2440(param_1,fVar22,uVar7);
          FUN_1412d0ba0(param_1);
          plVar13 = local_118;
          lVar6 = local_130;
        }
        local_128 = local_128 + 1;
        plVar11 = local_198;
      } while (local_128 != plVar13);
    }
    if (plVar11 != (longlong *)0x0) {
      FMemory::Free(plVar11);
    }
  }
  *(undefined1 *)(param_1 + 0xd24) = 1;
  FUN_1412cb5b0(param_1);
  FUN_1412b6ea0(param_1);
  return;
}



// FUNCTION 1412c6fb0 FUN_1412c6fb0 body=1832 status=ok
// SIG undefined FUN_1412c6fb0(void)

void FUN_1412c6fb0(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 local_188;
  undefined8 local_184;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 *local_158;
  undefined4 *local_150;
  longlong *local_148;
  longlong local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  undefined **local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 local_d0 [24];
  longlong local_b8;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [40];
  
  plVar2 = param_1 + 0xf5;
  lVar15 = *plVar2;
  lVar14 = (longlong)(int)param_1[0xf6] * 0x270 + lVar15;
  for (; lVar15 != lVar14; lVar15 = lVar15 + 0x270) {
    lVar13 = *(longlong *)(param_2 + 0x58);
    lVar16 = (longlong)*(int *)(param_2 + 0x60) * 0x50 + lVar13;
    for (; lVar13 != lVar16; lVar13 = lVar13 + 0x50) {
      lVar11 = *(longlong *)(lVar15 + 0x158);
      lVar12 = (longlong)*(int *)(lVar15 + 0x160) * 0x50 + lVar11;
      for (; lVar11 != lVar12; lVar11 = lVar11 + 0x50) {
        if ((*(longlong *)(lVar11 + 8) == *(longlong *)(lVar13 + 8)) &&
           (cVar5 = FSoftObjectPath::operator==(lVar11 + 0x38,lVar13 + 0x38), cVar5 != '\0')) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (bVar4) {
          return;
        }
      }
    }
  }
  iVar8 = *(int *)(param_2 + 0xe0);
  cVar7 = '\0';
  lVar15 = (longlong)param_1 + 0x754;
  cVar6 = FUN_140bf9690(0,lVar15);
  cVar5 = '\0';
  if (cVar6 != '\0') {
    lVar14 = FWeakObjectPtr::Get(lVar15);
    if ((iVar8 < 0) || (*(int *)(lVar14 + 0x100) <= iVar8)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar14 = FWeakObjectPtr::Get(lVar15);
      lVar13 = (longlong)iVar8 * 0x58;
      cVar5 = '\0';
      if (*(char *)(lVar13 + 0x50 + *(longlong *)(lVar14 + 0xf8)) != '\0') {
        lVar14 = FWeakObjectPtr::Get(lVar15);
        lVar14 = *(longlong *)(lVar13 + 0x48 + *(longlong *)(lVar14 + 0xf8));
        cVar5 = '\0';
        if (lVar14 != 0) {
          uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
          cVar5 = FUN_142c48f60(lVar14,uVar9,0);
        }
      }
    }
  }
  cVar6 = FUN_140bf9690(0,lVar15);
  if (cVar6 != '\0') {
    lVar14 = FWeakObjectPtr::Get(lVar15);
    if ((iVar8 < 0) || (*(int *)(lVar14 + 0x100) <= iVar8)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar14 = FWeakObjectPtr::Get(lVar15);
      lVar13 = (longlong)iVar8 * 0x58;
      if (*(char *)(lVar13 + 0x40 + *(longlong *)(lVar14 + 0xf8)) != '\0') {
        lVar15 = FWeakObjectPtr::Get(lVar15);
        lVar15 = *(longlong *)(lVar13 + 0x38 + *(longlong *)(lVar15 + 0xf8));
        if (lVar15 == 0) {
          cVar7 = '\0';
        }
        else {
          uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
          cVar7 = FUN_142c48f60(lVar15,uVar9,0);
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x148))(param_1);
  iVar8 = FUN_14129dd30(param_2);
  if ((((cVar5 == '\0') || (1 < iVar8 - 1U)) && ((cVar7 == '\0' || (iVar8 != 0)))) && (iVar8 != 5))
  {
    iVar3 = (int)param_1[0xf6];
    *(int *)(param_1 + 0xf6) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x7b4) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<624,16>_>,FDefaultAllocator>::
      ResizeGrow(plVar2);
    }
    FUN_140f9f650(*plVar2 + (longlong)iVar3 * 0x270);
    if ((iVar3 < 0) || ((int)param_1[0xf6] <= iVar3)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar15 = *plVar2 + (longlong)iVar3 * 0x270;
      *(char *)(lVar15 + 600) = (char)iVar8;
      local_138 = *(undefined4 *)(param_2 + 0x30);
      uStack_134 = *(undefined4 *)(param_2 + 0x34);
      local_130 = *(undefined4 *)(param_2 + 0x38);
      uStack_6c = *(undefined4 *)(param_2 + 0x3c);
      *(undefined4 *)(lVar15 + 0x38) = local_138;
      *(undefined4 *)(lVar15 + 0x3c) = uStack_134;
      *(undefined4 *)(lVar15 + 0x40) = local_130;
      local_140 = lVar15;
      local_78 = local_138;
      uStack_74 = uStack_134;
      uStack_70 = local_130;
      if (param_1[0xbd] != 0) {
        lVar16 = UCheckBoxWidgetStyle::StaticClass();
        lVar14 = param_1[0xbd];
        for (lVar13 = lVar14; lVar13 != 0; lVar13 = *(longlong *)(lVar13 + 0x30)) {
          if (lVar13 == lVar16) goto LAB_1412c72c0;
        }
      }
      lVar14 = 0;
LAB_1412c72c0:
      *(longlong *)(lVar15 + 0x20) = lVar14;
      *(undefined4 *)(lVar15 + 0x150) = *(undefined4 *)(param_2 + 0x50);
      *(undefined1 *)(lVar15 + 0x1e5) = *(undefined1 *)(param_2 + 0xe5);
      *(undefined8 *)(lVar15 + 0x1e8) = *(undefined8 *)(param_2 + 0xe8);
      *(undefined1 *)(lVar15 + 0x9d) = 4;
      *(undefined1 *)(lVar15 + 0x1e4) = 0;
      lVar14 = *(longlong *)(param_2 + 0x58);
      lVar13 = (longlong)*(int *)(param_2 + 0x60) * 0x50 + lVar14;
      if (lVar14 != lVar13) {
        plVar2 = (longlong *)(lVar15 + 0x158);
        do {
          local_f0 = *(undefined8 *)(lVar14 + 8);
          local_e8 = *(undefined4 *)(lVar14 + 0x10);
          uStack_e4 = *(undefined4 *)(lVar14 + 0x14);
          uStack_e0 = *(undefined4 *)(lVar14 + 0x18);
          uStack_dc = *(undefined4 *)(lVar14 + 0x1c);
          local_d8 = *(undefined4 *)(lVar14 + 0x20);
          local_d4 = *(undefined4 *)(lVar14 + 0x24);
          local_f8 = &PTR_FUN_144278ac0;
          TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_d0,lVar14 + 0x28);
          iVar8 = *(int *)(lVar15 + 0x160);
          *(int *)(lVar15 + 0x160) = iVar8 + 1;
          if (*(int *)(lVar15 + 0x164) < iVar8 + 1) {
            TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar2,iVar8);
          }
          lVar16 = *plVar2;
          lVar11 = (longlong)iVar8 * 0x50;
          *(undefined ***)(lVar16 + lVar11) = &PTR_FUN_1441d26b8;
          *(undefined8 *)(lVar16 + 8 + lVar11) = local_f0;
          puVar10 = (undefined4 *)(lVar16 + 0x10 + lVar11);
          *puVar10 = local_e8;
          puVar10[1] = uStack_e4;
          puVar10[2] = uStack_e0;
          puVar10[3] = uStack_dc;
          *(undefined4 *)(lVar16 + 0x20 + lVar11) = local_d8;
          *(undefined4 *)(lVar16 + 0x24 + lVar11) = local_d4;
          *(undefined ***)(lVar16 + lVar11) = &PTR_FUN_144278ac0;
          TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(lVar16 + 0x28 + lVar11,local_d0);
          if ((iVar8 < 0) || (*(int *)(lVar15 + 0x160) <= iVar8)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            (**(code **)(*(longlong *)(*plVar2 + lVar11) + 8))
                      ((longlong *)(*plVar2 + lVar11),&local_f8);
            cVar5 = FUN_142f63b20(*plVar2 + lVar11,0);
            if (cVar5 == '\0') {
              FUN_140cc9910(plVar2,iVar8,1,1);
            }
          }
          local_f8 = &PTR_FUN_144278ac0;
          if (local_b8 != 0) {
            FMemory::Free();
          }
          lVar14 = lVar14 + 0x50;
        } while (lVar14 != lVar13);
      }
      puVar10 = *(undefined4 **)(param_2 + 0xd0);
      local_150 = puVar10 + (longlong)*(int *)(param_2 + 0xd8) * 10;
      if (puVar10 != local_150) {
        local_148 = (longlong *)(lVar15 + 0x1d0);
        puVar10 = puVar10 + 1;
        local_160 = 0;
        do {
          plVar2 = local_148;
          lVar13 = 0;
          local_128 = puVar10[-1];
          local_124 = *puVar10;
          local_120 = puVar10[1];
          local_a8 = *(undefined8 *)(puVar10 + 3);
          local_110 = 0;
          local_108 = 0;
          local_118 = 0;
          local_158 = puVar10;
          FString::FString(local_a0,puVar10 + 5);
          FSoftObjectPath::operator=(&local_118,&local_a8);
          lVar14 = FUN_1405ec200();
          lVar15 = lVar13;
          if (lVar14 != 0) {
            lVar16 = FUN_14171bfe0();
            if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar16 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar16 + 0x90) * 8) != lVar16 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              lVar11 = FUN_142f71d80();
              lVar16 = lVar14;
              do {
                lVar15 = lVar14;
                if (lVar16 == lVar11) break;
                lVar16 = *(longlong *)(lVar16 + 0x30);
                lVar15 = lVar13;
              } while (lVar16 != 0);
            }
          }
          local_170 = 0;
          local_168 = 0;
          local_188 = 0xffffffff;
          local_184 = 0;
          local_178 = 0;
          if (lVar15 == 0) {
            local_178 = 0;
          }
          else {
            uVar9 = FSoftObjectPath::FSoftObjectPath(local_68,lVar15);
            FSoftObjectPath::operator=(&local_178,uVar9);
            FWeakObjectPtr::operator=(&local_188,lVar15);
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            local_184 = CONCAT44(DAT_1464b56f4,(undefined4)local_184);
          }
          iVar8 = (int)plVar2[1];
          lVar15 = (longlong)iVar8;
          *(int *)(plVar2 + 1) = iVar8 + 1;
          if (*(int *)((longlong)plVar2 + 0xc) < iVar8 + 1) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar2,iVar8);
          }
          lVar13 = *plVar2;
          lVar14 = lVar13 + lVar15 * 0x28;
          *(undefined8 *)(lVar14 + 0x18) = 0;
          *(undefined4 *)(lVar14 + 0x24) = 0;
          *(undefined4 *)(lVar13 + lVar15 * 0x28) = 0xffffffff;
          *(undefined4 *)(lVar13 + 4 + lVar15 * 0x28) = 0;
          *(undefined8 *)(lVar14 + 0x10) = 0;
          *(undefined4 *)(lVar14 + 0x20) = 0;
          if (0x7fffffff < *(uint *)(lVar14 + 0x24)) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar14 + 0x18,0);
          }
          if (*(undefined2 **)(lVar14 + 0x18) != (undefined2 *)0x0) {
            **(undefined2 **)(lVar14 + 0x18) = 0;
          }
          *(undefined4 *)(lVar13 + 8 + lVar15 * 0x28) = 0;
          *(undefined4 *)(lVar13 + lVar15 * 0x28) = local_188;
          *(undefined4 *)(lVar13 + 4 + lVar15 * 0x28) = (undefined4)local_184;
          *(undefined4 *)(lVar13 + 8 + lVar15 * 0x28) = local_184._4_4_;
          local_90 = local_178;
          FString::FString(local_88,&local_170);
          FSoftObjectPath::operator=(lVar14 + 0x10,&local_90);
          if (local_170 != 0) {
            FMemory::Free();
          }
          if (local_110 != 0) {
            FMemory::Free();
          }
          puVar10 = local_158 + 10;
          puVar1 = local_158 + 9;
          lVar15 = local_140;
          local_158 = puVar10;
        } while (puVar1 != local_150);
      }
      FUN_1412cba50(param_1,lVar15);
    }
  }
  return;
}



// FUNCTION 1412c76e0 FUN_1412c76e0 body=995 status=ok
// SIG undefined FUN_1412c76e0(void)

void FUN_1412c76e0(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong local_38 [2];
  
  lVar12 = param_1[0xf3];
  lVar13 = (longlong)(int)param_1[0xf4] * 0x270 + lVar12;
  for (; lVar12 != lVar13; lVar12 = lVar12 + 0x270) {
    FUN_1412d2bb0(lVar12,param_1);
  }
  FUN_1412bdd20(param_1 + 0xf3,0);
  plVar10 = param_1 + 0xf5;
  lVar12 = *plVar10;
  lVar13 = (longlong)(int)param_1[0xf6] * 0x270 + lVar12;
  for (; lVar12 != lVar13; lVar12 = lVar12 + 0x270) {
    FUN_1412d2bb0(lVar12,param_1);
  }
  FUN_1412bdd20(plVar10,0);
  cVar3 = FUN_140bf9690(0,(longlong)param_1 + 0x754);
  if (cVar3 != '\0') {
    uVar4 = FWeakObjectPtr::Get((longlong)param_1 + 0x754);
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    cVar3 = FUN_1412a2eb0(uVar4,uVar5);
    if (cVar3 == '\0') {
      uVar4 = FWeakObjectPtr::Get((longlong)param_1 + 0x754);
      plVar10 = (longlong *)UDynamicEntryBox::GetAllEntries(uVar4);
      lVar12 = *plVar10;
      lVar13 = (longlong)(int)plVar10[1] * 0xf0 + lVar12;
      for (; lVar12 != lVar13; lVar12 = lVar12 + 0xf0) {
        FUN_1412c6fb0(param_1,lVar12);
      }
    }
    else {
      lVar12 = (**(code **)(*param_1 + 0x148))(param_1);
      if (lVar12 != 0) {
        uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar12 = FUN_142f6c9f0(uVar4);
        if (lVar12 != 0) {
          lVar13 = FUN_142f79140();
          if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            lVar13 = *(longlong *)(lVar12 + 0x660);
            lVar12 = (longlong)*(int *)(lVar12 + 0x668) * 0x70 + lVar13;
            for (; lVar13 != lVar12; lVar13 = lVar13 + 0x70) {
              lVar6 = FWeakObjectPtr::Get(lVar13 + 0x20);
              if (lVar6 != 0) {
                uVar4 = UBlendableInterface::GetPrivateStaticClass();
                plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar4);
                if (plVar7 != (longlong *)0x0) {
                  iVar1 = (int)param_1[0xf6];
                  lVar11 = *plVar10;
                  lVar14 = (longlong)iVar1 * 0x270 + lVar11;
                  for (; lVar11 != lVar14; lVar11 = lVar11 + 0x270) {
                    if (*(longlong *)(lVar11 + 0x10) != 0 && *(longlong *)(lVar11 + 0x10) == lVar6)
                    goto LAB_1412c7a50;
                  }
                  *(int *)(param_1 + 0xf6) = iVar1 + 1;
                  if (*(int *)((longlong)param_1 + 0x7b4) < iVar1 + 1) {
                    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<624,16>_>,FDefaultAllocator>
                    ::ResizeGrow(plVar10,iVar1);
                  }
                  lVar11 = (longlong)iVar1 * 0x270;
                  FUN_140f9f650(lVar11 + *plVar10);
                  if ((iVar1 < 0) || ((int)param_1[0xf6] <= iVar1)) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  if (bVar2) {
                    FUN_1412b2ad0(*plVar10 + lVar11,lVar6);
                    if ((*(int *)(*plVar10 + lVar11 + 0x160) < 1) &&
                       (*(int *)(*plVar10 + lVar11 + 0x1d8) < 1)) {
                      FUN_140fd51c0(plVar10,iVar1,1,1);
                    }
                    else {
                      FUN_1412cc3b0();
                      if (param_1[0xbd] != 0) {
                        lVar8 = UCheckBoxWidgetStyle::StaticClass();
                        lVar6 = param_1[0xbd];
                        for (lVar14 = lVar6; lVar14 != 0; lVar14 = *(longlong *)(lVar14 + 0x30)) {
                          if (lVar14 == lVar8) goto LAB_1412c7980;
                        }
                      }
                      lVar6 = 0;
LAB_1412c7980:
                      *(longlong *)(*plVar10 + 0x20 + lVar11) = lVar6;
                      *(undefined1 *)(*plVar10 + 0x9d + lVar11) = 4;
                      lVar6 = (**(code **)(*plVar7 + 0x20))(plVar7);
                      if (lVar6 != 0) {
                        uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7);
                        UObjectBaseUtility::GetFullGroupName(uVar4,local_38,0);
                        uVar4 = FWeakObjectPtr::Get((longlong)param_1 + 0x754);
                        puVar9 = (undefined8 *)FUN_141296d40(uVar4,local_38);
                        if (puVar9 != (undefined8 *)0x0) {
                          FUN_1412aabb0(puVar9,param_1,*(undefined1 *)(*plVar10 + 600 + lVar11));
                          cVar3 = FUN_140bf9690(0,*plVar10 + 0x18 + lVar11);
                          if (cVar3 != '\0') {
                            plVar7 = (longlong *)FWeakObjectPtr::Get(*plVar10 + 0x18 + lVar11);
                            (**(code **)(*plVar7 + 0x730))(plVar7,*puVar9);
                          }
                          FUN_14128bbb0(*plVar10 + 0x100 + lVar11,puVar9);
                        }
                        if (local_38[0] != 0) {
                          FMemory::Free();
                        }
                      }
                    }
                  }
                }
              }
LAB_1412c7a50:
            }
          }
        }
      }
    }
  }
  FUN_1412cb020(param_1);
  return;
}



// FUNCTION 1412c7ad0 FUN_1412c7ad0 body=138 status=ok
// SIG undefined FUN_1412c7ad0(void)

void FUN_1412c7ad0(longlong param_1,char param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined4 uVar3;
  
  bVar2 = param_2 == '\x02';
  *(char *)(param_1 + 0x818) = param_2;
  *(bool *)(param_1 + 0x9f8) = bVar2;
  if (bVar2) {
    *(undefined4 *)(param_1 + 0x828) = 0x3f800000;
  }
  *(undefined8 *)(param_1 + 0x820) = 0;
  if (bVar2) {
    uVar3 = 0x3c23d70a;
  }
  else {
    uVar3 = 0x3dcccccd;
  }
  lVar1 = *(longlong *)(param_1 + 0x5d8);
  *(undefined4 *)(param_1 + 0x848) = uVar3;
  if (lVar1 != 0) {
    if (param_2 == '\x02') {
      uVar3 = *(undefined4 *)(lVar1 + 0x154);
    }
    *(undefined4 *)(param_1 + 0x850) = uVar3;
    if (param_2 == '\x02') {
      *(undefined4 *)(param_1 + 0x854) = *(undefined4 *)(lVar1 + 0x158);
      return;
    }
    *(undefined4 *)(param_1 + 0x854) = 0x3f800000;
  }
  return;
}



// FUNCTION 1412c7b60 FUN_1412c7b60 body=54 status=ok
// SIG undefined FUN_1412c7b60(void)

void FUN_1412c7b60(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  uVar1 = FUN_1412c3780(&local_18,param_1);
  FUN_14058c1e0(param_1 + 0x788,uVar1);
  return;
}



// FUNCTION 1412c7bb0 FUN_1412c7bb0 body=198 status=ok
// SIG undefined FUN_1412c7bb0(void)

undefined8 FUN_1412c7bb0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  float local_18;
  float local_14;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = 0;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x588);
  }
  if ((*(longlong *)(param_1 + 0x948) != 0) && (lVar1 != 0)) {
    FUN_142394970(*(longlong *)(param_1 + 0x948),&local_18,param_2,0);
    if ((-*(float *)(lVar1 + 0x228) <= local_18) &&
       (((local_18 < *(float *)(lVar1 + 0x228) && (-*(float *)(lVar1 + 0x22c) <= local_14)) &&
        (local_14 < *(float *)(lVar1 + 0x22c))))) {
      return 0;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1412c7c80 FUN_1412c7c80 body=326 status=ok
// SIG undefined FUN_1412c7c80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1412c7c80(longlong param_1,ulonglong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  
  lVar12 = *(longlong *)(param_1 + 0x7e8);
  uVar6 = (ulonglong)*(int *)(param_1 + 0x7f0);
  lVar11 = uVar6 * 0x270 + lVar12;
  if (lVar12 != lVar11) {
    pfVar10 = (float *)(lVar12 + 0xd0);
    do {
      uVar6 = *param_2;
      if (*(ulonglong *)(pfVar10 + -0xc) == uVar6) {
        if ((int)param_2[2] == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)param_2[1];
        }
        if (pfVar10[-8] == 0.0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = *(undefined2 **)(pfVar10 + -10);
        }
        uVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
        if ((int)uVar6 == 0) {
          uVar7 = (undefined4)(uVar6 >> 0x20);
          auVar1._4_4_ = -(uint)(0.0001 < (float)((uint)(pfVar10[1] -
                                                        *(float *)((longlong)param_2 + 0x34)) &
                                                 uRam00000001468783d4));
          auVar1._0_4_ = -(uint)(0.0001 < (float)((uint)(*pfVar10 - *(float *)(param_2 + 6)) &
                                                 _DAT_1468783d0));
          auVar1._8_4_ = -(uint)(0.0001 < (float)((uint)(pfVar10[2] - *(float *)(param_2 + 7)) &
                                                 uRam00000001468783d8));
          auVar1._12_4_ =
               -(uint)(0.0001 < (float)((uint)(pfVar10[3] - *(float *)((longlong)param_2 + 0x3c)) &
                                       uRam00000001468783dc));
          iVar5 = movmskps(0,auVar1);
          uVar6 = CONCAT44(uVar7,iVar5);
          if (iVar5 == 0) {
            auVar2._4_4_ = -(uint)(0.0001 < (float)((uint)(pfVar10[-3] -
                                                          *(float *)((longlong)param_2 + 0x24)) &
                                                   uRam00000001468783d4));
            auVar2._0_4_ = -(uint)(0.0001 < (float)((uint)(pfVar10[-4] - *(float *)(param_2 + 4)) &
                                                   _DAT_1468783d0));
            auVar2._8_4_ = -(uint)(0.0001 < (float)((uint)(pfVar10[-2] - *(float *)(param_2 + 5)) &
                                                   uRam00000001468783d8));
            auVar2._12_4_ =
                 -(uint)(0.0001 < (float)((uint)(pfVar10[-1] - *(float *)((longlong)param_2 + 0x2c))
                                         & uRam00000001468783dc));
            iVar5 = movmskps(0,auVar2);
            uVar6 = CONCAT44(uVar7,iVar5);
            if (iVar5 != 0) {
              auVar3._4_4_ = -(uint)(0.0001 < (float)((uint)(pfVar10[-3] +
                                                            *(float *)((longlong)param_2 + 0x24)) &
                                                     uRam00000001468783d4));
              auVar3._0_4_ = -(uint)(0.0001 < (float)((uint)(pfVar10[-4] + *(float *)(param_2 + 4))
                                                     & _DAT_1468783d0));
              auVar3._8_4_ = -(uint)(0.0001 < (float)((uint)(pfVar10[-2] + *(float *)(param_2 + 5))
                                                     & uRam00000001468783d8));
              auVar3._12_4_ =
                   -(uint)(0.0001 < (float)((uint)(pfVar10[-1] +
                                                  *(float *)((longlong)param_2 + 0x2c)) &
                                           uRam00000001468783dc));
              iVar5 = movmskps(iVar5,auVar3);
              uVar6 = CONCAT44(uVar7,iVar5);
              if (iVar5 != 0) goto LAB_1412c7d94;
            }
            auVar4._4_4_ = -(uint)(0.0001 < (float)((uint)(pfVar10[5] -
                                                          *(float *)((longlong)param_2 + 0x44)) &
                                                   uRam00000001468783d4));
            auVar4._0_4_ = -(uint)(0.0001 < (float)((uint)(pfVar10[4] - *(float *)(param_2 + 8)) &
                                                   _DAT_1468783d0));
            auVar4._8_4_ = -(uint)(0.0001 < (float)((uint)(pfVar10[6] - *(float *)(param_2 + 9)) &
                                                   uRam00000001468783d8));
            auVar4._12_4_ =
                 -(uint)(0.0001 < (float)((uint)(pfVar10[7] - *(float *)((longlong)param_2 + 0x4c))
                                         & uRam00000001468783dc));
            iVar5 = movmskps((int)uVar6,auVar4);
            uVar6 = CONCAT44((int)(uVar6 >> 0x20),iVar5);
            if ((((iVar5 == 0) &&
                 (uVar6 = (ulonglong)(uint)*(float *)(param_2 + 10),
                 pfVar10[8] == *(float *)(param_2 + 10))) &&
                (uVar6 = (ulonglong)(uint)*(float *)((longlong)param_2 + 0x54),
                pfVar10[9] == *(float *)((longlong)param_2 + 0x54))) &&
               (uVar6 = param_2[0xb], *(ulonglong *)(pfVar10 + 10) == uVar6)) {
              return CONCAT71((int7)(uVar6 >> 8),1);
            }
          }
        }
      }
LAB_1412c7d94:
      lVar12 = lVar12 + 0x270;
      pfVar10 = pfVar10 + 0x9c;
    } while (lVar12 != lVar11);
  }
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 1412c7dd0 FUN_1412c7dd0 body=19 status=ok
// SIG undefined FUN_1412c7dd0(void)

void FUN_1412c7dd0(longlong param_1)

{
  operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(param_1 + 0x754,param_1 + 0x788);
  return;
}



// FUNCTION 1412c7df0 FUN_1412c7df0 body=27 status=ok
// SIG undefined FUN_1412c7df0(void)

longlong FUN_1412c7df0(longlong param_1)

{
  longlong lVar1;
  uint7 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x24c) & 0x20) != 0)) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 1412c7e10 FUN_1412c7e10 body=493 status=ok
// SIG undefined FUN_1412c7e10(void)

void FUN_1412c7e10(longlong param_1,longlong param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_2 == 0) {
    FUN_1412be6f0();
    FUN_1412b6ea0(param_1);
    return;
  }
  FUN_1412d15b0();
  if (param_3 != '\0') {
    *(undefined4 *)(param_1 + 0x788) = *(undefined4 *)(param_1 + 0x754);
    *(undefined4 *)(param_1 + 0x78c) = *(undefined4 *)(param_1 + 0x758);
    *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(param_1 + 0x780);
    *(undefined4 *)(param_1 + 0x794) = *(undefined4 *)(param_1 + 0x784);
  }
  FUN_1412cd930(param_1);
  lVar4 = *(longlong *)(param_1 + 0x118);
  *(undefined1 *)(param_1 + 0xd24) = 0;
  if (lVar4 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar4 = AActor::GetWorldSettings(lVar4);
      lVar4 = *(longlong *)(lVar4 + 0x658);
      if (lVar4 != 0) {
        lVar3 = FUN_141437aa0();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (*(longlong *)(lVar4 + 0x50) != 0)) {
          cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                            (param_1 + 0x754,param_1 + 0x788);
          if (cVar2 != '\0') {
            FUN_1412ca0b0(param_1);
            return;
          }
        }
      }
    }
  }
  if (*(longlong *)(param_2 + 0xc0) == 0) {
    FUN_1412be6f0(param_1);
    FUN_1412b6ea0(param_1);
  }
  uStack_10 = 0;
  local_18 = FUN_1412ca0b0;
  local_28 = 0;
  local_20 = 0;
  puVar5 = (undefined8 *)operator_new(0x30,&local_28);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(puVar5 + 1,param_1);
    *(undefined4 *)(puVar5 + 2) = (undefined4)local_18;
    *(undefined4 *)((longlong)puVar5 + 0x14) = local_18._4_4_;
    *(undefined4 *)(puVar5 + 3) = uStack_10;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = uStack_c;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[5] = uVar6;
    *puVar5 = &PTR_FUN_143f77bd0;
  }
  FUN_141292a70(param_2,&local_28);
  return;
}



// FUNCTION 1412c8000 FUN_1412c8000 body=162 status=ok
// SIG undefined FUN_1412c8000(void)

void FUN_1412c8000(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_2 != 0) {
    FUN_1412cd930();
    local_18 = FUN_1412c9590;
    uStack_10 = 0;
    local_28 = 0;
    local_20 = 0;
    puVar1 = (undefined8 *)operator_new(0x30,&local_28);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(puVar1 + 1,param_1);
      *(undefined4 *)(puVar1 + 2) = (undefined4)local_18;
      *(undefined4 *)((longlong)puVar1 + 0x14) = local_18._4_4_;
      *(undefined4 *)(puVar1 + 3) = uStack_10;
      *(undefined4 *)((longlong)puVar1 + 0x1c) = uStack_c;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[5] = uVar2;
      *puVar1 = &PTR_FUN_143f77bd0;
    }
    FUN_141292470(param_2,&local_28);
  }
  return;
}



// FUNCTION 1412c80c0 FUN_1412c80c0 body=243 status=ok
// SIG undefined FUN_1412c80c0(void)

void FUN_1412c80c0(longlong param_1,longlong *param_2,float *param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  char local_38 [4];
  undefined4 local_34;
  undefined1 local_2f;
  undefined4 local_2c;
  longlong local_28 [2];
  longlong local_18;
  
  lVar3 = param_2[1];
  if ((lVar3 != 0) || (lVar3 = *param_2, lVar3 != 0)) {
    lVar2 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_38[0] = *(char *)(param_1 + 0x30);
      local_2f = 0;
      local_2c = 0;
      if (local_38[0] == '\0') {
        lVar2 = param_2[1];
        if (lVar2 == 0) {
          lVar2 = *param_2;
        }
        local_34 = FUN_142c98860(param_1 + 0x38,lVar2);
      }
      lVar3 = FUN_1409b53c0(local_28,lVar3,local_38);
      *param_3 = (float)*(int *)(lVar3 + 8) * *param_3;
      if (local_18 != 0) {
        FMemory::Free();
      }
      if (local_28[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1412c81c0 FUN_1412c81c0 body=124 status=ok
// SIG undefined FUN_1412c81c0(void)

void FUN_1412c81c0(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (*(char *)(param_1 + 0x9c9) == '\0') {
    FUN_14128bb50(param_1 + 0xc40,param_3);
    if (param_4 == '\0') {
      *(undefined1 *)(param_1 + 0xaed) = 0;
      param_1 = param_1 + 0x588;
    }
    else {
      *(undefined1 *)(param_1 + 0xaed) = 3;
      param_1 = param_1 + 0x578;
    }
    FUN_1404cb7e0(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 1412c8240 FUN_1412c8240 body=231 status=ok
// SIG undefined FUN_1412c8240(void)

void FUN_1412c8240(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(char *)(param_1 + 0x9c9) == '\0') &&
     (*(longlong *)(param_1 + 0xca0) = param_3, param_2 != 0)) {
    if (param_3 != 0) {
      uVar2 = FUN_141437710();
      lVar3 = AGameStateBase::OnRep_GameModeClass(param_3,uVar2);
      if (lVar3 != 0) {
        lVar4 = FUN_141437710();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_14128c120(param_1 + 0xaf0,lVar3 + 0x180);
        }
      }
    }
    if (param_4 == '\0') {
      *(undefined1 *)(param_1 + 0xaed) = 0;
      lVar3 = param_1 + 0x4e0;
    }
    else {
      *(undefined1 *)(param_1 + 0xaed) = 5;
      lVar3 = param_1 + 0x4d0;
    }
    FUN_1404cb7e0(lVar3,param_2,param_1 + 0xaf0);
  }
  return;
}



// FUNCTION 1412c8330 FUN_1412c8330 body=124 status=ok
// SIG undefined FUN_1412c8330(void)

void FUN_1412c8330(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (*(char *)(param_1 + 0x9c9) == '\0') {
    FUN_14128bbb0(param_1 + 0xb50,param_3);
    if (param_4 == '\0') {
      *(undefined1 *)(param_1 + 0xaed) = 0;
      param_1 = param_1 + 0x568;
    }
    else {
      *(undefined1 *)(param_1 + 0xaed) = 4;
      param_1 = param_1 + 0x558;
    }
    FUN_1404cb7e0(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 1412c83b0 FUN_1412c83b0 body=124 status=ok
// SIG undefined FUN_1412c83b0(void)

void FUN_1412c83b0(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (*(char *)(param_1 + 0x9c9) == '\0') {
    FUN_14128c120(param_1 + 0xaf0,param_3);
    if (param_4 == '\0') {
      *(undefined1 *)(param_1 + 0xaed) = 0;
      param_1 = param_1 + 0x4e0;
    }
    else {
      *(undefined1 *)(param_1 + 0xaed) = 1;
      param_1 = param_1 + 0x4d0;
    }
    FUN_1404cb7e0(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 1412c8430 FUN_1412c8430 body=158 status=ok
// SIG undefined FUN_1412c8430(void)

void FUN_1412c8430(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x9c9) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x118);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = UEnvQueryTest_Random::StaticClass();
      lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
      if ((lVar4 != 0) && (cVar3 = FUN_140e27bd0(lVar4,param_3), cVar3 == '\0')) {
        return;
      }
    }
    lVar4 = param_1 + 0x510;
    if (param_4 == '\0') {
      lVar4 = param_1 + 0x520;
    }
    FUN_1404cb7e0(lVar4,param_2,param_3);
  }
  return;
}



// FUNCTION 1412c84d0 FUN_1412c84d0 body=39 status=ok
// SIG undefined FUN_1412c84d0(void)

void FUN_1412c84d0(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (*(char *)(param_1 + 0x9c9) != '\0') {
    return;
  }
  if (param_4 != '\0') {
    FUN_1404cb7e0(param_1 + 0x4f0);
    return;
  }
  FUN_1404cb7e0(param_1 + 0x500);
  return;
}



// FUNCTION 1412c8500 FUN_1412c8500 body=43 status=ok
// SIG undefined FUN_1412c8500(void)

void FUN_1412c8500(longlong param_1,char param_2)

{
  if (param_2 == *(char *)(param_1 + 0xd21)) {
    return;
  }
  *(char *)(param_1 + 0xd21) = param_2;
  if (param_2 != '\0') {
    TBaseDelegate<void>::ExecuteIfBound(param_1 + 0x480);
    return;
  }
  TBaseDelegate<void>::ExecuteIfBound(param_1 + 0x490);
  return;
}



// FUNCTION 1412c8550 FUN_1412c8550 body=132 status=ok
// SIG undefined FUN_1412c8550(void)

void FUN_1412c8550(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = FUN_1412bf4f0(*(undefined8 *)(param_1 + 0x498),param_1);
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0x259) == '\0')) {
    if (*(longlong *)(param_1 + 0x168) != 0) {
      FUN_142398ec0(*(longlong *)(param_1 + 0x168),0,2);
    }
    lVar1 = *(longlong *)(param_1 + 0x498);
    if (((lVar1 != 0) && (lVar2 != 0)) && (lVar2 = FUN_1412bf4f0(lVar1,param_1), lVar2 != 0)) {
      FUN_1412cd6b0(lVar1,lVar2);
    }
  }
  return;
}



// FUNCTION 1412c85e0 FUN_1412c85e0 body=73 status=ok
// SIG undefined FUN_1412c85e0(void)

void FUN_1412c85e0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_142398ec0(param_1,0,2);
  lVar1 = *(longlong *)(param_1 + 0x748);
  if (lVar1 != 0) {
    lVar2 = FUN_1412bf4f0(lVar1,param_1);
    if (lVar2 != 0) {
      FUN_1412cd6b0(lVar1,lVar2);
    }
  }
  return;
}



// FUNCTION 1412c8630 FUN_1412c8630 body=85 status=ok
// SIG undefined FUN_1412c8630(void)

void FUN_1412c8630(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_142398ec0(*(longlong *)(param_1 + 0x168),0,2);
  }
  lVar1 = *(longlong *)(param_1 + 0x498);
  if (lVar1 != 0) {
    lVar2 = FUN_1412bf4f0(lVar1,param_1);
    if (lVar2 != 0) {
      FUN_1412cd6b0(lVar1,lVar2);
    }
  }
  return;
}



// FUNCTION 1412c8690 FUN_1412c8690 body=177 status=ok
// SIG undefined FUN_1412c8690(void)

void FUN_1412c8690(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x738);
  if (lVar2 != 0) {
    lVar3 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((bVar1) && (*(longlong *)(lVar2 + 0x10e0) != 0)) && (*(longlong *)(lVar2 + 0x910) != 0))
       && ((*(byte *)(*(longlong *)(lVar2 + 0x910) + 0x660) & 0x10) == 0)) {
      return;
    }
  }
  FUN_142398ec0(param_1,0,2);
  lVar2 = *(longlong *)(param_1 + 0x748);
  if ((lVar2 != 0) && (lVar3 = FUN_1412bf4f0(lVar2,param_1), lVar3 != 0)) {
    FUN_1412cd6b0(lVar2,lVar3);
  }
  return;
}



// FUNCTION 1412c8750 FUN_1412c8750 body=16 status=ok
// SIG undefined FUN_1412c8750(void)

void FUN_1412c8750(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001412c875c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x700) + 0x48))((longlong *)(param_1 + 0x700),0);
  return;
}



// FUNCTION 1412c8760 FUN_1412c8760 body=16 status=ok
// SIG undefined FUN_1412c8760(void)

void FUN_1412c8760(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001412c876c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x700) + 0x48))((longlong *)(param_1 + 0x700),1);
  return;
}



// FUNCTION 1412c8770 FUN_1412c8770 body=155 status=ok
// SIG undefined FUN_1412c8770(void)

void FUN_1412c8770(longlong param_1,undefined1 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x748) != 0) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x748) + 0x118), lVar3 != 0)) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar3 = FUN_140cff230(lVar3);
      if (lVar3 != 0) {
        FUN_140483870(lVar3 + 0x4d0,param_1);
      }
    }
  }
  FUN_142393140(param_1,param_2);
  return;
}



// FUNCTION 1412c8810 FUN_1412c8810 body=771 status=ok
// SIG undefined FUN_1412c8810(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412c8810(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  lVar7 = *(longlong *)(param_1 + 0x498);
  if (lVar7 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x4d0);
    *(undefined1 *)(param_1 + 0x598) = 1;
    if (lVar3 != 0) {
      if ((*(char *)(lVar7 + 0x5aa) == '\0') || (*(char *)(lVar3 + 0x130) == '\0')) {
        cVar2 = *(char *)(lVar7 + 0x5a8);
        if ((cVar2 == '\0') || (*(char *)(lVar3 + 0x131) == '\0')) {
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
        }
      }
      else {
        cVar2 = *(char *)(lVar7 + 0x5a8);
        uVar5 = 1;
      }
      FUN_1412cf480(lVar7,param_1,uVar5,cVar2);
      lVar7 = *(longlong *)(param_1 + 0x498);
    }
    lVar3 = FUN_1412bf4f0(lVar7,param_1);
    if (lVar3 != 0) {
      UCheckBoxWidgetStyle::StaticClass();
      cVar2 = FUN_140bf9690(0,lVar3 + 0x18);
      if (cVar2 != '\0') {
        lVar4 = FWeakObjectPtr::Get(lVar3 + 0x18);
        if ((*(char *)(lVar4 + 0x598) == '\0') ||
           (((*(char *)(lVar7 + 0x5aa) == '\0' || (*(char *)(lVar3 + 0x9b) == '\0')) &&
            ((*(char *)(lVar7 + 0x5a8) == '\0' || (*(char *)(lVar3 + 0x9c) == '\0')))))) {
          uVar8 = 0;
        }
        else {
          uVar8 = 1;
        }
        uVar5 = FWeakObjectPtr::Get(lVar3 + 0x18);
        FUN_1412cf480(lVar7,uVar5,uVar8,*(undefined1 *)(lVar7 + 0x5a8));
      }
      if (*(longlong *)(lVar3 + 0x10) != 0) {
        if (((*(char *)(lVar7 + 0x5aa) == '\0') || (*(char *)(lVar3 + 0x9b) == '\0')) &&
           ((*(char *)(lVar7 + 0x5a8) == '\0' || (*(char *)(lVar3 + 0x9c) == '\0')))) {
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
        }
        FUN_1412cf680(lVar7,*(longlong *)(lVar3 + 0x10),uVar5);
      }
    }
    lVar7 = *(longlong *)(param_1 + 0x498);
    uVar1 = *(undefined4 *)(param_1 + 0x5a8);
    if ((*(longlong *)(lVar7 + 0x938) != 0) && (lVar3 = FUN_1412bf4f0(lVar7,param_1), lVar3 != 0)) {
      UCheckBoxWidgetStyle::StaticClass();
      lVar4 = lVar3 + 0x18;
      cVar2 = FUN_140bf9690(0,lVar4);
      if (cVar2 == '\0') {
        lVar3 = *(longlong *)(lVar3 + 0x10);
        if (lVar3 != 0) {
          local_28 = *(undefined8 *)(lVar3 + 0x220);
          local_20 = *(undefined4 *)(lVar3 + 0x228);
          FUN_1412ac250(*(undefined8 *)(lVar7 + 0x938),&local_28,CONCAT44(uVar1,uVar1));
        }
      }
      else {
        lVar6 = FWeakObjectPtr::Get(lVar4);
        lVar6 = *(longlong *)(lVar6 + 0x168);
        if (lVar6 == 0) {
          local_38 = _DAT_1468b5d90;
          local_30 = DAT_1468b5d98;
        }
        else {
          local_38 = *(undefined8 *)(lVar6 + 0x220);
          local_30 = *(undefined4 *)(lVar6 + 0x228);
        }
        local_28 = local_38;
        local_20 = local_30;
        FUN_1412ac250(*(undefined8 *)(lVar7 + 0x938),&local_28,CONCAT44(uVar1,uVar1));
        lVar6 = FWeakObjectPtr::Get(lVar4);
        *(undefined1 *)(lVar6 + 0x599) = 0;
        if (((*(char *)(lVar7 + 0x5aa) == '\0') || (*(char *)(lVar3 + 0x9b) == '\0')) &&
           ((*(char *)(lVar7 + 0x5a8) == '\0' ||
            ((*(char *)(lVar7 + 0xd20) != '\0' || (*(char *)(lVar3 + 0x9c) == '\0')))))) {
          uVar8 = 0;
        }
        else {
          uVar8 = 1;
        }
        uVar5 = FWeakObjectPtr::Get(lVar4);
        FUN_1412cf480(lVar7,uVar5,uVar8,*(undefined1 *)(lVar7 + 0x5a8));
      }
    }
  }
  return;
}



// FUNCTION 1412c8b20 FUN_1412c8b20 body=1590 status=ok
// SIG undefined FUN_1412c8b20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412c8b20(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_308 [32];
  ulonglong local_2e8;
  longlong local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2cc;
  undefined8 local_2c0;
  longlong local_2b8;
  undefined8 local_2b0;
  undefined1 local_2a8 [32];
  longlong local_288;
  longlong local_270;
  undefined4 local_268;
  char local_210;
  char local_20d;
  char local_20c;
  undefined1 local_20b;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  lVar7 = 0;
  local_2e8 = local_2e8 & 0xffffffff00000000;
  lVar4 = *(longlong *)(param_1 + 0x118);
  local_2e0 = param_2;
  if (lVar4 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1412c8ba7;
  }
  lVar4 = lVar7;
LAB_1412c8ba7:
  if (((param_2 != 0) && (*(char *)(param_2 + 0x270) != '\0')) &&
     ((*(char *)(param_2 + 0x260) == '\0' ||
      (cVar2 = FUN_14058c1e0(param_2 + 600,lVar4), cVar2 != '\0')))) {
    plVar9 = *(longlong **)(param_1 + 0x6c8);
    plVar10 = plVar9 + (longlong)*(int *)(param_1 + 0x6d0) * 2;
    if (plVar9 != plVar10) {
      do {
        if ((*(longlong *)(param_2 + 0x180) == 0) || (*(longlong *)(param_2 + 0x180) != *plVar9)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          if (plVar9 == (longlong *)0x0) {
            return;
          }
          lVar4 = FUN_1412af770(param_1 + 0x7d8,&local_2e0);
          if (lVar4 != 0) {
            if (*(char *)(lVar4 + 0x98) == '\0') {
              return;
            }
            lVar4 = lVar4 + 0x18;
            cVar2 = FUN_140bf9690(0,lVar4);
            if (cVar2 == '\0') {
              return;
            }
            uVar8 = *(undefined8 *)(param_2 + 0x118);
            lVar7 = FWeakObjectPtr::Get(lVar4);
            cVar2 = FUN_1405dc8f0(lVar7 + 0x590,uVar8);
            if (cVar2 == '\0') {
              return;
            }
            plVar9 = (longlong *)FWeakObjectPtr::Get(lVar4);
            (**(code **)(*plVar9 + 0x718))(plVar9,*(undefined8 *)(param_2 + 0x118));
            return;
          }
          lVar4 = *(longlong *)(param_2 + 0x180);
          if (lVar4 == 0) {
            return;
          }
          FUN_1412b1120(local_2a8,param_2);
          local_20b = *(undefined1 *)(lVar4 + 0xd1);
          if (*(longlong *)(param_2 + 0x180) == 0) {
            local_20d = (char)plVar9[1];
            local_20c = *(char *)((longlong)plVar9 + 9);
          }
          else {
            local_20d = *(char *)(*(longlong *)(param_2 + 0x180) + 0x130);
            local_20c = *(char *)(*(longlong *)(param_2 + 0x180) + 0x131);
          }
          cVar2 = FUN_140bf9670(0,param_2 + 0x200);
          if ((cVar2 != '\0') && (*(longlong *)(param_2 + 0x118) != 0)) {
            FWeakObjectPtr::operator=(local_2a8);
            lVar3 = FWeakObjectPtr::Get(local_2a8);
            lVar3 = *(longlong *)(lVar3 + 0x168);
            if (lVar3 == 0) {
              local_2e0 = _DAT_1468b5d90;
              local_2d8 = DAT_1468b5d98;
            }
            else {
              local_2e0 = *(longlong *)(lVar3 + 0x220);
              local_2d8 = *(undefined4 *)(lVar3 + 0x228);
            }
            local_270 = local_2e0;
            local_268 = local_2d8;
          }
          cVar2 = FUN_140bf9690(0,local_2a8);
          if (cVar2 == '\0') goto LAB_1412c90c0;
          lVar3 = lVar7;
          if (*(longlong *)(lVar4 + 0x100) == 0) goto LAB_1412c8d82;
          lVar5 = AGPingUsable::GetPrivateStaticClass();
          lVar6 = *(longlong *)(lVar4 + 0x100);
          goto joined_r0x0001412c8d6d;
        }
        plVar9 = plVar9 + 2;
      } while (plVar9 != plVar10);
    }
  }
  return;
joined_r0x0001412c8d6d:
  lVar3 = 0;
  if (lVar6 == 0) goto LAB_1412c8d82;
  if (lVar6 == lVar5) {
    if (*(longlong *)(lVar4 + 0x100) == 0) goto LAB_1412c8d82;
    lVar3 = lVar7;
    if (local_20c == '\0') {
      local_2b8 = 0;
      local_2c0 = 0;
      local_2b0 = 0;
      local_2d0 = 0xffffffff;
      lVar3 = 1;
      local_2cc = 0;
      local_2e8 = 0;
      cVar2 = FSoftObjectPath::operator==(&local_2c0,lVar4 + 0x118);
      if (cVar2 == '\0') goto LAB_1412c8d82;
    }
    bVar1 = true;
    goto LAB_1412c8d84;
  }
  lVar6 = *(longlong *)(lVar6 + 0x30);
  goto joined_r0x0001412c8d6d;
LAB_1412c8d82:
  bVar1 = false;
LAB_1412c8d84:
  if ((lVar3 != 0) && (local_2b8 != 0)) {
    FMemory::Free();
  }
  if (bVar1) {
    local_288 = lVar7;
    if (*(longlong *)(lVar4 + 0x100) != 0) {
      lVar6 = AGPingUsable::GetPrivateStaticClass();
      for (lVar3 = *(longlong *)(lVar4 + 0x100);
          (local_288 = lVar7, lVar3 != 0 &&
          (local_288 = *(longlong *)(lVar4 + 0x100), lVar3 != lVar6));
          lVar3 = *(longlong *)(lVar3 + 0x30)) {
      }
    }
    lVar4 = FUN_1412b7d70(param_1,local_2a8,lVar4);
    if (lVar4 != 0) {
      lVar7 = UCheckBoxWidgetStyle::StaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *(undefined1 *)(lVar4 + 0x598) = 1;
        if ((((local_210 == '\0') ||
             (cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                                (param_1 + 0x754,param_1 + 0x788), cVar2 != '\0')) &&
            (*(char *)(lVar4 + 0x598) != '\0')) &&
           (((*(char *)(param_1 + 0x5aa) != '\0' && (local_20d != '\0')) ||
            ((*(char *)(param_1 + 0x5a8) != '\0' && (local_20c != '\0')))))) {
          uVar8 = 1;
        }
        else {
          uVar8 = 0;
        }
        FUN_1412cf480(param_1,lVar4,uVar8,*(undefined1 *)(param_1 + 0x5a8));
      }
    }
    goto LAB_1412c90c0;
  }
  local_2b8 = 0;
  local_2c0 = 0;
  local_2b0 = 0;
  local_2d0 = 0xffffffff;
  local_2cc = 0;
  local_2e8 = 0;
  cVar2 = FSoftObjectPath::operator==(&local_2c0,lVar4 + 0x118);
  if (cVar2 == '\0') {
LAB_1412c8f5c:
    bVar1 = true;
  }
  else {
    if (*(longlong *)(param_1 + 0x6d8) != 0) {
      lVar5 = FUN_1429f11d0();
      lVar3 = *(longlong *)(param_1 + 0x6d8);
      lVar6 = lVar3;
      if (lVar3 != 0) {
        do {
          if (lVar6 == lVar5) {
            if (lVar3 == 0) goto LAB_1412c8f58;
            goto LAB_1412c8f5c;
          }
          lVar6 = *(longlong *)(lVar6 + 0x30);
        } while (lVar6 != 0);
        bVar1 = false;
        goto LAB_1412c8f5e;
      }
    }
LAB_1412c8f58:
    bVar1 = false;
  }
LAB_1412c8f5e:
  if (local_2b8 != 0) {
    FMemory::Free();
  }
  if (bVar1) {
    local_2b8 = 0;
    local_2c0 = 0;
    local_2b0 = 0;
    local_2d0 = 0xffffffff;
    local_2cc = 0;
    local_2e8 = 0;
    cVar2 = FSoftObjectPath::operator==(&local_2c0,lVar4 + 0x118);
    if (local_2b8 != 0) {
      FMemory::Free();
    }
    if (cVar2 == '\0') {
      lVar3 = FUN_1405ec200(lVar4 + 0x108);
      local_288 = lVar7;
      if (lVar3 != 0) {
        lVar6 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          lVar5 = FUN_1429f11d0();
          lVar6 = lVar3;
          do {
            local_288 = lVar3;
            if (lVar6 == lVar5) break;
            lVar6 = *(longlong *)(lVar6 + 0x30);
            local_288 = lVar7;
          } while (lVar6 != 0);
        }
      }
      lVar3 = local_288;
      if ((local_288 == 0) && (lVar3 = lVar7, *(longlong *)(param_1 + 0x6d8) != 0)) {
        lVar5 = FUN_1429f11d0();
        for (lVar6 = *(longlong *)(param_1 + 0x6d8);
            (lVar3 = lVar7, lVar6 != 0 && (lVar3 = *(longlong *)(param_1 + 0x6d8), lVar6 != lVar5));
            lVar6 = *(longlong *)(lVar6 + 0x30)) {
        }
      }
    }
    else {
      lVar3 = lVar7;
      if (*(longlong *)(param_1 + 0x6d8) != 0) {
        lVar5 = FUN_1429f11d0();
        for (lVar6 = *(longlong *)(param_1 + 0x6d8);
            (lVar3 = lVar7, lVar6 != 0 && (lVar3 = *(longlong *)(param_1 + 0x6d8), lVar6 != lVar5));
            lVar6 = *(longlong *)(lVar6 + 0x30)) {
        }
      }
    }
    local_288 = lVar3;
    lVar4 = FUN_1412b7e80(param_1,local_2a8,lVar4,param_2);
    if (lVar4 != 0) {
      uVar8 = UGameplayTagAssetInterface::GetPrivateStaticClass();
      UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar8);
    }
  }
LAB_1412c90c0:
  FUN_140fa04a0(local_2a8);
  return;
}



// FUNCTION 1412c9160 FUN_1412c9160 body=128 status=ok
// SIG undefined FUN_1412c9160(void)

void FUN_1412c9160(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res10 [3];
  
  if ((param_2 != 0) && (0 < *(int *)(param_1 + 0x7e0))) {
    plVar1 = *(longlong **)(param_1 + 0x6c8);
    plVar3 = plVar1 + (longlong)*(int *)(param_1 + 0x6d0) * 2;
    if (plVar1 != plVar3) {
      while ((*(longlong *)(param_2 + 0x180) == 0 || (*(longlong *)(param_2 + 0x180) != *plVar1))) {
        plVar1 = plVar1 + 2;
        if (plVar1 == plVar3) {
          return;
        }
      }
      local_res10[0] = param_2;
      lVar2 = FUN_1412af770(param_1 + 0x7d8,local_res10);
      if (lVar2 != 0) {
        FUN_1412cd6b0(param_1,lVar2);
      }
    }
  }
  return;
}



// FUNCTION 1412c91e0 FUN_1412c91e0 body=875 status=ok
// SIG undefined FUN_1412c91e0(void)

void FUN_1412c91e0(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong local_res10 [3];
  
  if (param_2 == 0) {
    return;
  }
  local_res10[0] = param_2;
  lVar3 = FUN_1412af770(param_1 + 0x7d8,local_res10);
  if (lVar3 == 0) {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x118);
  lVar10 = 0;
  if (lVar5 == 0) {
LAB_1412c926c:
    lVar5 = lVar10;
  }
  else {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1412c926c;
  }
  if (((*(char *)(param_2 + 0x260) != '\0') ||
      (cVar2 = FUN_140bf9670(0,param_2 + 600), cVar2 == '\0')) &&
     (cVar2 = FUN_14058c1e0(param_2 + 600,lVar5), cVar2 == '\0')) {
    FUN_1412cd6b0(param_1,lVar3);
    return;
  }
  lVar5 = *(longlong *)(param_2 + 0x180);
  if (lVar5 == 0) {
    return;
  }
  if (lVar5 == *(longlong *)(lVar3 + 0xa0)) {
    return;
  }
  *(longlong *)(lVar3 + 0xa0) = lVar5;
  cVar2 = FUN_140bf9690(0,lVar3 + 0x18);
  if (cVar2 != '\0') {
    lVar5 = FWeakObjectPtr::Get(lVar3 + 0x18);
    if (*(longlong *)(lVar5 + 0x10) == 0) {
LAB_1412c9369:
      plVar9 = (longlong *)FWeakObjectPtr::Get(lVar3 + 0x18);
      (**(code **)(*plVar9 + 0x718))(plVar9,*(undefined8 *)(param_2 + 0x118));
      plVar9 = (longlong *)FWeakObjectPtr::Get(lVar3 + 0x18);
      (**(code **)(*plVar9 + 0x738))(plVar9,*(undefined8 *)(lVar3 + 0xa0));
      uVar8 = FWeakObjectPtr::Get(lVar3 + 0x18);
      FUN_1414f5b10(uVar8);
    }
    else {
      lVar5 = *(longlong *)(lVar3 + 0xa0);
      lVar4 = lVar10;
      if (*(longlong *)(lVar5 + 0x100) != 0) {
        lVar6 = AGPingUsable::GetPrivateStaticClass();
        lVar5 = *(longlong *)(lVar5 + 0x100);
        for (lVar7 = lVar5; (lVar4 = lVar10, lVar7 != 0 && (lVar4 = lVar5, lVar7 != lVar6));
            lVar7 = *(longlong *)(lVar7 + 0x30)) {
        }
      }
      lVar5 = FWeakObjectPtr::Get(lVar3 + 0x18);
      for (lVar5 = *(longlong *)(lVar5 + 0x10); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
        if (lVar5 == lVar4) goto LAB_1412c9369;
      }
      FUN_1412cd6b0(param_1,lVar3);
      FUN_1412c8b20(param_1,param_2);
    }
  }
  lVar5 = *(longlong *)(lVar3 + 0x10);
  if (lVar5 == 0) {
    return;
  }
  if (*(longlong *)(lVar5 + 0x10) == 0) goto LAB_1412c94d9;
  lVar5 = *(longlong *)(lVar3 + 0xa0);
  lVar6 = lVar5 + 0x108;
  lVar7 = FWeakObjectPtr::Get(lVar6);
  lVar4 = lVar10;
  if (lVar7 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    param_2 = local_res10[0];
    if ((DAT_1464b56f4 != *(int *)(lVar5 + 0x110)) &&
       (local_res10[1] = 0, *(longlong *)(lVar5 + 0x118) != 0)) {
      lVar7 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar6,lVar7);
      if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar5 + 0x110) = DAT_1464b56f4;
      }
      lVar7 = FWeakObjectPtr::Get(lVar6);
      param_2 = local_res10[0];
      if (lVar7 != 0) goto LAB_1412c9450;
    }
  }
  else {
LAB_1412c9450:
    lVar5 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar6 = FUN_1429f11d0();
      lVar5 = lVar7;
      do {
        lVar4 = lVar7;
        if (lVar5 == lVar6) break;
        lVar5 = *(longlong *)(lVar5 + 0x30);
        lVar4 = lVar10;
      } while (lVar5 != 0);
    }
  }
  lVar5 = *(longlong *)(lVar3 + 0x10);
  lVar7 = *(longlong *)(lVar5 + 0x10);
  while( true ) {
    if (lVar7 == 0) {
      FUN_1412cd6b0(param_1,lVar3);
      FUN_1412c8b20(param_1,param_2);
      return;
    }
    if (lVar7 == lVar4) break;
    lVar7 = *(longlong *)(lVar7 + 0x30);
  }
LAB_1412c94d9:
  if (lVar5 == 0) {
    return;
  }
  uVar8 = UGameplayTagAssetInterface::GetPrivateStaticClass();
  plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar8);
  if (plVar9 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*plVar9 + 0x38))(plVar9,*(undefined8 *)(param_2 + 0x118));
  if (*(longlong *)(lVar3 + 0xa0) != 0) {
    lVar10 = *(longlong *)(*(longlong *)(lVar3 + 0xa0) + 0xa8);
  }
  (**(code **)(*plVar9 + 0x10))(plVar9,lVar10);
  (**(code **)(*plVar9 + 0x30))(plVar9);
  return;
}



// FUNCTION 1412c9550 FUN_1412c9550 body=35 status=ok
// SIG undefined FUN_1412c9550(void)

void FUN_1412c9550(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res8 = param_2;
  local_resc = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x1b0,&local_res8);
  return;
}



// FUNCTION 1412c9590 FUN_1412c9590 body=245 status=ok
// SIG undefined FUN_1412c9590(void)

void FUN_1412c9590(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(char *)(param_1 + 0x5aa) != '\0') {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x118);
  if (lVar5 != 0) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1412c95f7;
  }
  lVar5 = 0;
LAB_1412c95f7:
  uStack_10 = 0;
  local_18 = &LAB_1412c9580;
  local_28 = 0;
  local_20 = 0;
  puVar3 = (undefined8 *)operator_new(0x30,&local_28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(puVar3 + 1,param_1);
    *(undefined4 *)(puVar3 + 2) = (undefined4)local_18;
    *(undefined4 *)((longlong)puVar3 + 0x14) = local_18._4_4_;
    *(undefined4 *)(puVar3 + 3) = uStack_10;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_c;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[5] = uVar4;
    *puVar3 = &PTR_FUN_143f77bd0;
  }
  uVar4 = FWeakObjectPtr::Get(param_1 + 0x780);
  FUN_1412ca7a0(lVar5,uVar4,&local_28);
  return;
}



// FUNCTION 1412c9690 FUN_1412c9690 body=44 status=ok
// SIG undefined FUN_1412c9690(void)

void FUN_1412c9690(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x598) = 0;
  *(undefined1 *)(param_1 + 0x5ca) = 1;
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FUN_1412cf480(*(longlong *)(param_1 + 0x498),param_1,0,0);
    return;
  }
  return;
}



// FUNCTION 1412c96c0 FUN_1412c96c0 body=157 status=ok
// SIG undefined FUN_1412c96c0(void)

void FUN_1412c96c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_1 + 0x598) = 1;
  *(undefined1 *)(param_1 + 0x5ca) = 0;
  if (*(longlong *)(param_1 + 0x498) != 0) {
    lVar2 = FUN_1412bf4f0(*(longlong *)(param_1 + 0x498),param_1);
    if (lVar2 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x498);
      if ((*(char *)(lVar1 + 0x5aa) != '\0') && (*(char *)(lVar2 + 0x9b) != '\0')) {
        FUN_1412cf480(lVar1,param_1,1,*(undefined1 *)(lVar1 + 0x5a8));
        return;
      }
      if ((*(char *)(lVar1 + 0x5a8) != '\0') && (*(char *)(lVar2 + 0x9c) != '\0')) {
        FUN_1412cf480(lVar1,param_1,1);
        return;
      }
      FUN_1412cf480(lVar1,param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 1412c9760 FUN_1412c9760 body=127 status=ok
// SIG undefined FUN_1412c9760(void)

void FUN_1412c9760(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_14145f370();
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
      uVar4 = FUN_140cff230(lVar1);
      *(undefined8 *)(param_1 + 0x9d0) = uVar4;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x9d0) = 0;
  return;
}



// FUNCTION 1412c97f0 FUN_1412c97f0 body=14 status=ok
// SIG undefined FUN_1412c97f0(void)

void FUN_1412c97f0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001412c97fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x700) + 0x48))();
  return;
}



// FUNCTION 1412c9800 FUN_1412c9800 body=833 status=ok
// SIG undefined FUN_1412c9800(void)

/* WARNING: Removing unreachable block (ram,0x0001412c9a4a) */
/* WARNING: Removing unreachable block (ram,0x0001412c9a53) */
/* WARNING: Removing unreachable block (ram,0x0001412c9a60) */
/* WARNING: Removing unreachable block (ram,0x0001412c9a79) */

void FUN_1412c9800(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined **local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined **local_68 [2];
  longlong *local_58;
  longlong local_50;
  
  local_c0 = *(undefined8 *)(param_2 + 8);
  bVar5 = false;
  local_b8 = *(longlong *)(param_2 + 0x10);
  if (local_b8 != 0) {
    LOCK();
    *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
    UNLOCK();
  }
  lVar11 = *(longlong *)(param_1 + 0x7f8);
  local_c8 = &PTR_FUN_143f740c8;
  lVar12 = (longlong)*(int *)(param_1 + 0x800) * 0x270 + lVar11;
  local_b0 = 0;
  local_a8 = 0;
  do {
    if (lVar11 == lVar12) {
      FUN_1404bf980(&local_c8);
      return;
    }
    lVar7 = FWeakObjectPtr::Get(lVar11 + 0x18);
    if (lVar7 == 0) {
LAB_1412c98da:
      lVar7 = 0;
    }
    else {
      lVar8 = AUIWSRiver::StaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_1412c98da;
    }
    if (lVar7 == 0) {
LAB_1412c9906:
      bVar4 = false;
    }
    else {
      bVar5 = true;
      uVar9 = FUN_1412bfc20(lVar7,local_68);
      cVar6 = FUniqueNetIdWrapper::operator==(&local_c8,uVar9);
      if (cVar6 == '\0') goto LAB_1412c9906;
      bVar4 = true;
    }
    if (bVar5) {
      bVar5 = false;
      local_68[0] = &PTR_FUN_143f740c8;
      if (local_50 != 0) {
        FMemory::Free();
      }
      plVar10 = local_58;
      local_68[0] = &PTR_FUN_143f73d18;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
    if (bVar4) {
      FUN_1404bf980(&local_c8);
      if (lVar11 == 0) {
        return;
      }
      lVar11 = FWeakObjectPtr::Get(lVar11 + 0x18);
      if (lVar11 == 0) {
        return;
      }
      lVar12 = AUIWSRiver::StaticClass();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) {
        return;
      }
      lVar12 = FUN_1412bf380(param_1);
      if (lVar12 != 0) {
        plVar10 = (longlong *)FUN_140d80730(lVar12,local_90,param_2);
        lVar12 = *plVar10;
        plVar10 = (longlong *)plVar10[1];
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        if (local_88 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_88 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_88)(local_88);
            LOCK();
            piVar2 = (int *)((longlong)local_88 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_88 + 8))(local_88,1);
            }
          }
        }
        if (lVar12 != 0) {
          local_d8 = (undefined4)lVar12;
          uStack_d4 = (undefined4)((ulonglong)lVar12 >> 0x20);
          uStack_d0 = SUB84(plVar10,0);
          uStack_cc = (undefined4)((ulonglong)plVar10 >> 0x20);
          local_78 = local_d8;
          uStack_74 = uStack_d4;
          uStack_70 = uStack_d0;
          uStack_6c = uStack_cc;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
          FUN_1412cef00(lVar11,&local_78);
        }
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar10 + 1;
          lVar12 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
      }
      *(undefined4 *)(lVar11 + 0x5a8) = param_3;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar11 + 0x5b0,0);
      return;
    }
    lVar11 = lVar11 + 0x270;
  } while( true );
}



// FUNCTION 1412c9b50 FUN_1412c9b50 body=966 status=ok
// SIG undefined FUN_1412c9b50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412c9b50(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  if (param_2 != 0) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
    lVar5 = 0;
    if (*(longlong *)(param_1 + 0x748) != 0) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x748) + 0x118);
    }
    if (lVar5 == 0) {
      if (*(longlong *)(param_1 + 0x770) != 0) {
        uVar3 = AActor::GetWorldTimerManager(*(undefined8 *)(param_1 + 0x118));
        FUN_142880530(uVar3,param_1 + 0x770);
        *(undefined8 *)(param_1 + 0x770) = 0;
      }
      local_b8 = FUN_1412bd0d0;
      uStack_b0 = 0;
      uVar3 = AActor::GetWorldTimerManager(*(undefined8 *)(param_1 + 0x118));
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar4 + 1,param_1);
        *(undefined4 *)(plVar4 + 2) = (undefined4)local_b8;
        *(undefined4 *)((longlong)plVar4 + 0x14) = local_b8._4_4_;
        *(undefined4 *)(plVar4 + 3) = uStack_b0;
        *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_ac;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar4[5] = lVar5;
        *plVar4 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_a8 = 0;
      local_a0 = 0;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_a8);
      }
      FWeakObjectPtr::operator=(local_98,0);
      local_c0 = 0xbf800000;
      local_c8 = 0;
      local_90 = 0;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      local_88 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar3,param_1 + 0x770,&local_a8,0x3dcccccd);
    }
    else {
      lVar2 = FUN_142df3580(lVar5);
      if (lVar2 != 0) {
        cVar1 = FUN_142dee8a0(param_2,lVar5);
        if ((cVar1 != '\0') || (cVar1 = FUN_142deeb90(param_2,lVar5), cVar1 != '\0')) {
          *(undefined1 *)(param_1 + 0x768) = 0;
          if (*(longlong *)(param_1 + 0x758) != 0) {
            (**(code **)(*(longlong *)(param_1 + 0x700) + 0x10))
                      ((longlong *)(param_1 + 0x700),
                       *(undefined8 *)(*(longlong *)(param_1 + 0x758) + 0xa8));
          }
          if (*(longlong *)(param_1 + 0x750) == 0) {
            return;
          }
          FUN_1411fafb0(*(longlong *)(param_1 + 0x750),0);
          return;
        }
        cVar1 = FUN_142dee910(param_2,lVar5);
        if (cVar1 == '\0') {
          return;
        }
        *(undefined1 *)(param_1 + 0x768) = 1;
        if (*(longlong *)(param_1 + 0x760) != 0) {
          (**(code **)(*(longlong *)(param_1 + 0x700) + 0x10))
                    ((longlong *)(param_1 + 0x700),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x760) + 0xa8));
        }
        if (*(longlong *)(param_1 + 0x750) == 0) {
          return;
        }
        FUN_1411fafb0(*(longlong *)(param_1 + 0x750),1);
        return;
      }
      if (*(longlong *)(param_1 + 0x770) != 0) {
        uVar3 = AActor::GetWorldTimerManager(*(undefined8 *)(param_1 + 0x118));
        FUN_142880530(uVar3,param_1 + 0x770);
        *(undefined8 *)(param_1 + 0x770) = 0;
      }
      local_b8 = FUN_1412bd0d0;
      uStack_b0 = 0;
      uVar3 = AActor::GetWorldTimerManager(*(undefined8 *)(param_1 + 0x118));
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar4 + 1,param_1);
        *(undefined4 *)(plVar4 + 2) = (undefined4)local_b8;
        *(undefined4 *)((longlong)plVar4 + 0x14) = local_b8._4_4_;
        *(undefined4 *)(plVar4 + 3) = uStack_b0;
        *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_ac;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar4[5] = lVar5;
        *plVar4 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_a8 = 0;
      local_a0 = 0;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_a8);
      }
      FWeakObjectPtr::operator=(local_98,0);
      local_c0 = 0xbf800000;
      local_c8 = 0;
      local_90 = 0;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      local_88 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar3,param_1 + 0x770,&local_a8,0x3dcccccd);
    }
    if (local_48 != 0) {
      plVar6 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar6 = local_58;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      lVar5 = FMemory::Realloc(plVar4,0,0);
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
    }
  }
  return;
}



// FUNCTION 1412c9f30 FUN_1412c9f30 body=378 status=ok
// SIG undefined FUN_1412c9f30(void)

void FUN_1412c9f30(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  longlong local_res20;
  undefined1 local_48 [8];
  longlong local_40;
  longlong *local_38;
  int local_30;
  
  FUN_141224090(param_2,&local_38);
  pwVar8 = (wchar_t *)0x0;
  pwVar9 = (wchar_t *)((ulonglong)((longlong)(local_38 + local_30) + (7 - (longlong)local_38)) >> 3)
  ;
  if (local_38 + local_30 < local_38) {
    pwVar9 = pwVar8;
  }
  pwVar6 = pwVar8;
  plVar7 = local_38;
  if (pwVar9 != (wchar_t *)0x0) {
    do {
      lVar1 = *plVar7;
      if (lVar1 != 0) {
        pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnSeatAttachStateChanged",L"::");
        pwVar3 = pwVar8;
        while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
          pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar3 = pwVar2;
        }
        FName::FName(&local_res20,pwVar3 + 2,1);
        lVar5 = local_res20;
        FWeakObjectPtr::operator=(local_48,0);
        local_40 = 0;
        FWeakObjectPtr::operator=(local_48,param_1);
        local_40 = lVar5;
        if ((lVar5 != 0) && (lVar5 = FWeakObjectPtr::Get(local_48), lVar5 != 0)) {
          UObject::FindFunction(lVar5,local_40);
        }
        FUN_1406a5aa0(lVar1 + 0x3f0,local_48);
      }
      pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
      plVar7 = plVar7 + 1;
    } while (pwVar6 != pwVar9);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}



// FUNCTION 1412ca0b0 FUN_1412ca0b0 body=375 status=ok
// SIG undefined FUN_1412ca0b0(void)

void FUN_1412ca0b0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  lVar1 = param_1 + 0x754;
  cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar1,param_1 + 0x788);
  if (cVar4 != '\0') {
    FUN_1412be6f0(param_1);
  }
  lVar6 = *(longlong *)(param_1 + 0x118);
  if (lVar6 != 0) {
    lVar5 = FUN_14145f370();
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
      lVar6 = AActor::GetWorldSettings(lVar6);
      lVar6 = *(longlong *)(lVar6 + 0x658);
      if (lVar6 != 0) {
        lVar5 = FUN_141437aa0();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) && (*(longlong *)(lVar6 + 0x50) != 0)) {
          cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar1,param_1 + 0x788);
          if (cVar4 != '\0') {
            uVar7 = *(undefined8 *)(lVar6 + 0x50);
            goto LAB_1412ca1bb;
          }
        }
      }
    }
  }
  cVar4 = FUN_140bf9690(0,lVar1);
  if (cVar4 == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = FWeakObjectPtr::Get(lVar1);
    uVar7 = FUN_14129f8a0(uVar7);
  }
LAB_1412ca1bb:
  *(undefined8 *)(param_1 + 0x760) = uVar7;
  iVar2 = *(int *)(param_1 + 0x770);
  *(undefined4 *)(param_1 + 0x770) = 0;
  if (*(int *)(param_1 + 0x774) != iVar2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x768);
  }
  cVar4 = FUN_140bf9690(0,lVar1);
  if (cVar4 != '\0') {
    uVar7 = FWeakObjectPtr::Get(lVar1);
    FUN_141297650(uVar7,param_1 + 0x768);
  }
  FUN_1414f9440(param_1);
  return;
}



// FUNCTION 1412ca230 FUN_1412ca230 body=554 status=ok
// SIG undefined FUN_1412ca230(void)

undefined8 FUN_1412ca230(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  uVar9 = 0;
  cVar5 = FUN_1414f5020();
  if (cVar5 == '\0') {
    uVar9 = FUN_140fde0c0(local_20,1);
    FText::operator=(param_2,uVar9);
    if (local_18 == (longlong *)0x0) {
      return 0;
    }
    LOCK();
    plVar1 = local_18 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 != 1) {
      return 0;
    }
    (**(code **)*local_18)(local_18);
    LOCK();
    piVar2 = (int *)((longlong)local_18 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return 0;
    }
    (**(code **)(*local_18 + 8))(local_18,1);
    return 0;
  }
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x498) + 0x118);
  if (lVar10 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_1412ca2ab;
  }
  lVar10 = 0;
LAB_1412ca2ab:
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x590);
  if (lVar6 != 0) {
    lVar7 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      if (lVar10 == 0) {
        return 0;
      }
      FUN_141460920(lVar10,lVar6);
      return 1;
    }
  }
  if (((*(longlong *)(param_1 + 0x498) != 0) && (lVar10 != 0)) &&
     (lVar6 = *(longlong *)(param_1 + 0x528), lVar6 != 0)) {
    lVar7 = FUN_142f477c0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      cVar5 = FUN_140fdde30(lVar6,lVar10);
      if (cVar5 == '\0') {
        FUN_141460920(lVar10,*(undefined8 *)(param_1 + 0x528));
        uVar9 = 1;
      }
      else {
        uVar8 = FUN_140fde0c0(local_38,cVar5);
        FText::operator=(param_2,uVar8);
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_30 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar2 = (int *)((longlong)local_30 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_30 + 8))(local_30,1);
            }
          }
        }
      }
    }
  }
  return uVar9;
}



// FUNCTION 1412ca460 FUN_1412ca460 body=821 status=ok
// SIG undefined FUN_1412ca460(void)

undefined8 FUN_1412ca460(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 local_48 [16];
  undefined1 local_38 [32];
  
  if ((*(longlong *)(param_1 + 0x498) == 0) || (lVar2 = FUN_1412c3210(), lVar2 == 0))
  goto LAB_1412ca770;
  lVar3 = FUN_142f478b0();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_1412ca770;
  lVar6 = lVar2 + 0xf0;
  lVar3 = FWeakObjectPtr::Get(lVar6);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar2 + 0xf8)) || (*(longlong *)(lVar2 + 0x100) == 0))
    goto LAB_1412ca770;
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar6,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar2 + 0xf8) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(lVar6);
    if (lVar3 == 0) goto LAB_1412ca770;
  }
  lVar3 = FWeakObjectPtr::Get(lVar6);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar2 + 0xf8)) && (*(longlong *)(lVar2 + 0x100) != 0)) {
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar6,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar2 + 0xf8) = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(lVar6);
      if (lVar3 != 0) goto LAB_1412ca5c3;
    }
LAB_1412ca5f9:
    lVar3 = 0;
  }
  else {
LAB_1412ca5c3:
    lVar4 = FUN_142f47520();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1412ca5f9;
  }
  uVar5 = FName::ToString(lVar3 + 0x30,local_48);
  lVar3 = FUN_1412c3780(uVar5,param_1);
  if (lVar3 == 0) {
LAB_1412ca770:
    uVar5 = FUN_1412ca230(param_1,param_2);
    return uVar5;
  }
  lVar4 = FWeakObjectPtr::Get(lVar6);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar2 + 0xf8)) && (*(longlong *)(lVar2 + 0x100) != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar6,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar2 + 0xf8) = DAT_1464b56f4;
      }
      lVar4 = FWeakObjectPtr::Get(lVar6);
      if (lVar4 != 0) goto LAB_1412ca693;
    }
  }
  else {
LAB_1412ca693:
    lVar2 = FUN_142f47520();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1412ca6cc;
  }
  lVar4 = 0;
LAB_1412ca6cc:
  lVar2 = *(longlong *)(param_1 + 0x498);
  if (lVar4 == 0) {
    *(undefined4 *)(lVar2 + 0xa28) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0xa2c) = 0;
    *(undefined8 *)(lVar2 + 0xa38) = 0;
    *(undefined4 *)(lVar2 + 0xa48) = 0;
    if (0x7fffffff < *(uint *)(lVar2 + 0xa4c)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar2 + 0xa40,0);
    }
    if (*(undefined2 **)(lVar2 + 0xa40) != (undefined2 *)0x0) {
      **(undefined2 **)(lVar2 + 0xa40) = 0;
    }
    *(undefined4 *)(lVar2 + 0xa30) = 0;
  }
  else {
    uVar5 = FSoftObjectPath::FSoftObjectPath(local_38,lVar4);
    FSoftObjectPath::operator=(lVar2 + 0xa38,uVar5);
    FWeakObjectPtr::operator=((undefined4 *)(lVar2 + 0xa28),lVar4);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    *(int *)(lVar2 + 0xa30) = DAT_1464b56f4;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x498);
  FUN_1412d15b0(uVar5,lVar3);
  FUN_1414f9020(uVar5,lVar3);
  return 1;
}



// FUNCTION 1412ca7a0 FUN_1412ca7a0 body=1124 status=ok
// SIG undefined FUN_1412ca7a0(void)

void FUN_1412ca7a0(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 local_res10 [8];
  longlong *local_res18;
  uint in_stack_ffffffffffffff58;
  longlong *local_88;
  ulonglong local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined4 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  local_res18 = param_3;
  if (DAT_1468787d0 != 0) {
    plVar10 = (longlong *)(DAT_1468787c8 + 0x20);
    iVar12 = DAT_1468787d0;
    do {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 6;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  plVar10 = (longlong *)0x0;
  DAT_1468787d0 = 0;
  if (DAT_1468787d4 != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(&DAT_1468787c8,0);
  }
  plVar11 = plVar10;
  if ((param_2 != 0) && (plVar5 = (longlong *)FUN_14129af70(param_2,local_res10), *plVar5 != 0)) {
    plVar6 = (longlong *)APlayerState::GetPrivateStaticClass();
    plVar5 = (longlong *)*plVar5;
    for (plVar13 = plVar5; plVar13 != (longlong *)0x0; plVar13 = (longlong *)plVar13[6]) {
      if (plVar13 == plVar6) {
        if ((plVar5 != (longlong *)0x0) &&
           (plVar11 = (longlong *)plVar5[0x1f], (longlong *)plVar5[0x1f] == (longlong *)0x0)) {
          (**(code **)(*plVar5 + 0x368))(plVar5);
          plVar11 = (longlong *)plVar5[0x1f];
        }
        break;
      }
    }
  }
  if ((param_1 == 0) || (plVar11 == (longlong *)0x0)) goto LAB_1412cabeb;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  FUN_14129bdc0(param_1,param_2,&local_88,1,in_stack_ffffffffffffff58 & 0xffffff00);
  plVar5 = (longlong *)plVar11[0x8b];
  uVar9 = local_80 & 0xffffffff;
  iVar12 = (int)local_80;
  plVar13 = plVar5 + (longlong)(int)plVar11[0x8c] * 2;
  plVar11 = local_88;
  for (; plVar5 != plVar13; plVar5 = plVar5 + 2) {
    iVar12 = (int)uVar9;
    if (plVar11 != plVar11 + iVar12) {
      plVar6 = plVar11;
      do {
        if (*plVar6 == *plVar5) {
          iVar4 = (int)((longlong)plVar6 - (longlong)plVar11 >> 3);
          if ((-1 < iVar4) && (iVar4 < iVar12)) {
            iVar8 = (iVar12 - iVar4) + -1;
            if (iVar8 != 0) {
              _guard_xfg_dispatch_icall_nop
                        (plVar11 + iVar4,plVar11 + (iVar4 + 1),(longlong)iVar8 << 3);
              iVar12 = (int)local_80;
            }
            local_80 = CONCAT44(local_80._4_4_,iVar12 + -1);
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&local_88);
            uVar9 = local_80 & 0xffffffff;
            plVar11 = local_88;
          }
          break;
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar11 + iVar12);
    }
    iVar12 = (int)uVar9;
  }
  if (iVar12 < 1) {
    if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(*(longlong *)*param_3 + 0x18))(), plVar11 = local_88, cVar3 != '\0')) {
      if ((int)param_3[1] != 0) {
        plVar10 = (longlong *)*param_3;
      }
      (**(code **)(*plVar10 + 0x40))(plVar10);
      plVar11 = local_88;
    }
  }
  else {
    local_78 = 0;
    local_70 = 0;
    plVar5 = (longlong *)((ulonglong)((longlong)(plVar11 + iVar12) + (7 - (longlong)plVar11)) >> 3);
    if (plVar11 + iVar12 < plVar11) {
      plVar5 = plVar10;
    }
    plVar13 = plVar10;
    if (plVar5 == (longlong *)0x0) {
LAB_1412cab45:
      param_3 = local_res18;
      if ((((int)local_res18[1] != 0) && ((longlong *)*local_res18 != (longlong *)0x0)) &&
         (cVar3 = (**(code **)(*(longlong *)*local_res18 + 0x18))(), plVar11 = local_88,
         cVar3 != '\0')) {
        if ((int)param_3[1] != 0) {
          plVar10 = (longlong *)*param_3;
        }
        (**(code **)(*plVar10 + 0x40))(plVar10);
        plVar11 = local_88;
      }
    }
    else {
      do {
        iVar12 = DAT_1468787d0;
        lVar7 = *plVar11;
        if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x1b0) != 0)) {
          lVar14 = (longlong)DAT_1468787d0;
          DAT_1468787d0 = DAT_1468787d0 + 1;
          if (DAT_1468787d4 < DAT_1468787d0) {
            TArray<FTransform,FDefaultAllocator>::ResizeGrow(&DAT_1468787c8,iVar12);
          }
          FUN_1412b0a90(lVar14 * 0x30 + DAT_1468787c8,lVar7,lVar7 + 0x1a0);
          uVar9 = local_70;
          lVar14 = (longlong)(int)local_70;
          iVar12 = (int)local_70 + 1;
          local_70 = CONCAT44(local_70._4_4_,iVar12);
          if (local_70._4_4_ < iVar12) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_78,uVar9 & 0xffffffff);
          }
          puVar2 = (undefined8 *)(local_78 + lVar14 * 0x18);
          *puVar2 = *(undefined8 *)(lVar7 + 0x1b0);
          FString::FString(puVar2 + 1,lVar7 + 0x1b8);
        }
        plVar11 = plVar11 + 1;
        plVar13 = (longlong *)((longlong)plVar13 + 1);
      } while (plVar13 != plVar5);
      plVar11 = local_88;
      if ((int)local_70 < 1) goto LAB_1412cab45;
      lVar7 = FUN_1422ca050();
      local_68 = 0;
      local_60 = 0x1f;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      FGenericPlatformString::Memcpy(local_68,L"RequestAsyncLoad ArrayDelegate",0x3e);
      param_3 = local_res18;
      local_58 = 0;
      local_50 = 0;
      if (((local_res18 != &local_58) && ((int)local_res18[1] != 0)) &&
         (plVar10 = (longlong *)*local_res18, plVar10 != (longlong *)0x0)) {
        (**(code **)(*plVar10 + 0x30))(plVar10,&local_58);
      }
      FUN_142840b00(lVar7 + 0x178,local_48,&local_78,&local_58,0,0,0,&local_68);
      if (local_68 != 0) {
        FMemory::Free();
      }
      plVar11 = local_88;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_40 + 1;
        lVar7 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar11 = local_88;
          if (iVar12 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
            plVar11 = local_88;
          }
        }
      }
    }
    if ((int)local_70 != 0) {
      plVar10 = (longlong *)(local_78 + 8);
      iVar12 = (int)local_70;
      do {
        if (*plVar10 != 0) {
          FMemory::Free();
        }
        plVar10 = plVar10 + 3;
        iVar12 = iVar12 + -1;
        plVar11 = local_88;
      } while (iVar12 != 0);
    }
    if (local_78 != 0) {
      FMemory::Free();
      plVar11 = local_88;
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
LAB_1412cabeb:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return;
}



// FUNCTION 1412cac10 FUN_1412cac10 body=1034 status=ok
// SIG undefined FUN_1412cac10(void)

void FUN_1412cac10(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  
  *(undefined1 *)(param_1 + 0x25b) = 2;
  if (param_2 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x260) == 0) {
    return;
  }
  lVar6 = FUN_142dfdfe0();
  lVar13 = *(longlong *)(param_1 + 0x260);
  lVar7 = lVar13;
  if (lVar13 == 0) {
    return;
  }
  while (lVar7 != lVar6) {
    plVar12 = (longlong *)(lVar7 + 0x30);
    lVar7 = *plVar12;
    if (*plVar12 == 0) {
      return;
    }
  }
  if (lVar13 == 0) {
    return;
  }
  lVar13 = *(longlong *)(param_2 + 0x118);
  if (lVar13 == 0) {
LAB_1412cacd6:
    lVar13 = 0;
  }
  else {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_1412cacd6;
    lVar13 = *(longlong *)(lVar13 + 0xc98);
  }
  if (lVar13 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x260) != 0) {
    lVar8 = FUN_142dfdfe0();
    lVar7 = *(longlong *)(param_1 + 0x260);
    for (lVar6 = lVar7; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
      if (lVar6 == lVar8) {
        if (lVar7 != 0) {
          if (lVar7 == 0) goto LAB_1412cad56;
          plVar9 = (longlong *)FUN_142dfdfe0();
          plVar12 = *(longlong **)(param_1 + 0x260);
          plVar2 = plVar12;
          goto joined_r0x0001412cad46;
        }
        break;
      }
    }
  }
LAB_1412cae86:
  lVar7 = 0;
  goto LAB_1412cae88;
joined_r0x0001412cad46:
  if (plVar2 == (longlong *)0x0) goto LAB_1412cad56;
  if (plVar2 == plVar9) goto LAB_1412cad58;
  plVar2 = (longlong *)plVar2[6];
  goto joined_r0x0001412cad46;
LAB_1412cad56:
  plVar12 = (longlong *)0x0;
LAB_1412cad58:
  lVar7 = plVar12[0x1f];
  if (lVar7 == 0) {
    (**(code **)(*plVar12 + 0x368))(plVar12);
    lVar7 = plVar12[0x1f];
    if (lVar7 == 0) goto LAB_1412cae86;
  }
  lVar6 = FUN_142dfdfe0();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) goto LAB_1412cae86;
  if (*(longlong *)(param_1 + 0x260) != 0) {
    plVar9 = (longlong *)FUN_142dfdfe0();
    plVar12 = *(longlong **)(param_1 + 0x260);
    for (plVar2 = plVar12; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[6]) {
      if (plVar2 == plVar9) goto LAB_1412cade8;
    }
  }
  plVar12 = (longlong *)0x0;
LAB_1412cade8:
  lVar7 = plVar12[0x1f];
  if (lVar7 == 0) {
    (**(code **)(*plVar12 + 0x368))(plVar12);
    lVar7 = plVar12[0x1f];
    if (lVar7 != 0) goto LAB_1412cae0c;
LAB_1412cae42:
    lVar7 = 0;
  }
  else {
LAB_1412cae0c:
    lVar6 = FUN_142dfdfe0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_1412cae42;
  }
  lVar7 = *(longlong *)(lVar7 + 0xd8);
  if (lVar7 == 0) goto LAB_1412cae86;
  lVar6 = UARGetCandidateObjectAsyncTaskBlueprintProxy::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) goto LAB_1412cae86;
LAB_1412cae88:
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x18);
  if (lVar6 == 0) {
LAB_1412caecf:
    lVar6 = 0;
  }
  else {
    lVar8 = UScrollBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_1412caecf;
  }
  cVar1 = *(char *)(param_1 + 0x25b);
  if (*(longlong *)(param_1 + 0x260) != 0) {
    lVar10 = FUN_142dfdfe0();
    lVar8 = *(longlong *)(param_1 + 0x260);
    for (lVar3 = lVar8; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar10) goto LAB_1412caf06;
    }
  }
  lVar8 = 0;
LAB_1412caf06:
  cVar5 = FUN_142dd3360(lVar13,lVar8);
  if (cVar5 == '\0') {
    if (*(longlong *)(param_1 + 0x260) != 0) {
      lVar10 = FUN_142dfdfe0();
      lVar8 = *(longlong *)(param_1 + 0x260);
      for (lVar3 = lVar8; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
        if (lVar3 == lVar10) goto LAB_1412caf60;
      }
    }
    lVar8 = 0;
LAB_1412caf60:
    cVar5 = FUN_142dd32c0(lVar13,lVar8);
    if (cVar5 == '\0') goto LAB_1412caf90;
    *(undefined1 *)(param_1 + 0x25b) = 0;
    if (lVar6 == 0) {
      return;
    }
    if ((cVar1 == '\0') || (lVar7 == 0)) goto LAB_1412caf90;
    uVar11 = *(undefined8 *)(lVar7 + 0x60);
  }
  else {
    *(undefined1 *)(param_1 + 0x25b) = 1;
    if (cVar1 == '\x01') goto LAB_1412caf90;
    if (lVar6 == 0) {
      return;
    }
    if (lVar7 == 0) goto LAB_1412caf90;
    uVar11 = *(undefined8 *)(lVar7 + 0x68);
  }
  *(undefined8 *)(lVar6 + 0x4b0) = uVar11;
LAB_1412caf90:
  if ((lVar6 != 0) && ((param_3 != '\0' || (cVar1 != *(char *)(param_1 + 0x25b))))) {
    *(bool *)(lVar6 + 0x598) = *(char *)(param_1 + 0x25b) != '\x02';
    FUN_1414f5560(lVar6);
    if ((*(char *)(lVar6 + 0x598) == '\0') ||
       ((*(char *)(param_2 + 0x5aa) == '\0' &&
        ((*(char *)(param_2 + 0x5a8) == '\0' || (*(char *)(param_2 + 0xd20) != '\0')))))) {
      uVar11 = 0;
    }
    else {
      uVar11 = 1;
    }
    FUN_1412cf480(param_2,lVar6,uVar11,*(undefined1 *)(param_2 + 0x5a8));
  }
  return;
}



// FUNCTION 1412cb020 FUN_1412cb020 body=304 status=ok
// SIG undefined FUN_1412cb020(void)

void FUN_1412cb020(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)(param_1 + 0xcc0);
  FUN_1412cd7b0(plVar1,0);
  lVar4 = *(longlong *)(param_1 + 0x798);
  lVar3 = (longlong)*(int *)(param_1 + 0x7a0) * 0x270 + lVar4;
  for (; lVar4 != lVar3; lVar4 = lVar4 + 0x270) {
    if (((*(char *)(lVar4 + 600) - 1U & 0xfc) == 0) && (*(char *)(lVar4 + 600) != '\x03')) {
      iVar2 = *(int *)(param_1 + 0xcc8);
      *(int *)(param_1 + 0xcc8) = iVar2 + 1;
      if (*(int *)(param_1 + 0xccc) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<624,16>_>,FDefaultAllocator>::
        ResizeGrow(plVar1,iVar2);
      }
      FUN_1412b0b60((longlong)iVar2 * 0x270 + *plVar1,lVar4);
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x7a8);
  lVar3 = (longlong)*(int *)(param_1 + 0x7b0) * 0x270 + lVar4;
  for (; lVar4 != lVar3; lVar4 = lVar4 + 0x270) {
    if (((*(char *)(lVar4 + 600) - 1U & 0xfc) == 0) && (*(char *)(lVar4 + 600) != '\x03')) {
      iVar2 = *(int *)(param_1 + 0xcc8);
      *(int *)(param_1 + 0xcc8) = iVar2 + 1;
      if (*(int *)(param_1 + 0xccc) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<624,16>_>,FDefaultAllocator>::
        ResizeGrow(plVar1,iVar2);
      }
      FUN_1412b0b60((longlong)iVar2 * 0x270 + *plVar1,lVar4);
    }
  }
  *(undefined4 *)(param_1 + 0xd14) = 0xffffffff;
  return;
}



// FUNCTION 1412cb150 FUN_1412cb150 body=290 status=ok
// SIG undefined FUN_1412cb150(void)

void FUN_1412cb150(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  
  cVar6 = *(char *)(param_1 + 0x599);
  if ((((*(longlong *)(param_1 + 0x498) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x498) + 0x938) != 0)) &&
      (lVar4 = FUN_1412994e0(), lVar4 != 0)) &&
     ((*(int *)(param_1 + 0x5f0) != -1 || (*(int *)(param_1 + 0x5f4) != -1)))) {
    uVar5 = FUN_1412994e0(*(undefined8 *)(*(longlong *)(param_1 + 0x498) + 0x938));
    iVar3 = FStaticMeshLODResources::GetNumVertices(uVar5);
    if (iVar3 != 0) {
      uVar5 = FUN_1412994e0(*(undefined8 *)(*(longlong *)(param_1 + 0x498) + 0x938));
      cVar2 = FUN_1424a4130(uVar5,param_1 + 0x5f0);
      *(bool *)(param_1 + 0x599) = cVar2 == '\0';
      if (((bool)cVar6 != (cVar2 == '\0')) &&
         (lVar4 = FUN_1412bf4f0(*(undefined8 *)(param_1 + 0x498),param_1), lVar4 != 0)) {
        lVar1 = *(longlong *)(param_1 + 0x498);
        if ((*(char *)(lVar1 + 0x5aa) == '\0') || (*(char *)(lVar4 + 0x9b) == '\0')) {
          cVar6 = *(char *)(lVar1 + 0x5a8);
          if ((cVar6 == '\0') || (*(char *)(lVar4 + 0x9c) == '\0')) {
            uVar5 = 0;
          }
          else {
            uVar5 = 1;
          }
        }
        else {
          cVar6 = *(char *)(lVar1 + 0x5a8);
          uVar5 = 1;
        }
        FUN_1412cf480(lVar1,param_1,uVar5,cVar6);
      }
    }
  }
  return;
}



// FUNCTION 1412cb280 FUN_1412cb280 body=290 status=ok
// SIG undefined FUN_1412cb280(void)

void FUN_1412cb280(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  
  cVar6 = *(char *)(param_1 + 0x599);
  if ((((*(longlong *)(param_1 + 0x498) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x498) + 0x938) != 0)) &&
      (lVar4 = FUN_1412994e0(), lVar4 != 0)) &&
     ((*(int *)(param_1 + 0x520) != -1 || (*(int *)(param_1 + 0x524) != -1)))) {
    uVar5 = FUN_1412994e0(*(undefined8 *)(*(longlong *)(param_1 + 0x498) + 0x938));
    iVar3 = FStaticMeshLODResources::GetNumVertices(uVar5);
    if (iVar3 != 0) {
      uVar5 = FUN_1412994e0(*(undefined8 *)(*(longlong *)(param_1 + 0x498) + 0x938));
      cVar2 = FUN_1424a4130(uVar5,param_1 + 0x520);
      *(bool *)(param_1 + 0x599) = cVar2 == '\0';
      if (((bool)cVar6 != (cVar2 == '\0')) &&
         (lVar4 = FUN_1412bf4f0(*(undefined8 *)(param_1 + 0x498),param_1), lVar4 != 0)) {
        lVar1 = *(longlong *)(param_1 + 0x498);
        if ((*(char *)(lVar1 + 0x5aa) == '\0') || (*(char *)(lVar4 + 0x9b) == '\0')) {
          cVar6 = *(char *)(lVar1 + 0x5a8);
          if ((cVar6 == '\0') || (*(char *)(lVar4 + 0x9c) == '\0')) {
            uVar5 = 0;
          }
          else {
            uVar5 = 1;
          }
        }
        else {
          cVar6 = *(char *)(lVar1 + 0x5a8);
          uVar5 = 1;
        }
        FUN_1412cf480(lVar1,param_1,uVar5,cVar6);
      }
    }
  }
  return;
}



// FUNCTION 1412cb3b0 FUN_1412cb3b0 body=505 status=ok
// SIG undefined FUN_1412cb3b0(void)

void FUN_1412cb3b0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  
  cVar6 = *(char *)(param_1 + 0x599);
  if (*(char *)(param_1 + 0x598) == '\0') {
    if ((((*(longlong *)(param_1 + 0x498) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x498) + 0x938) != 0)) &&
        (lVar5 = FUN_1412994e0(), lVar5 != 0)) &&
       ((*(int *)(param_1 + 0x520) != -1 || (*(int *)(param_1 + 0x524) != -1)))) {
      uVar4 = FUN_1412994e0(*(undefined8 *)(*(longlong *)(param_1 + 0x498) + 0x938));
      iVar3 = FStaticMeshLODResources::GetNumVertices(uVar4);
      if (iVar3 != 0) {
        uVar4 = FUN_1412994e0(*(undefined8 *)(*(longlong *)(param_1 + 0x498) + 0x938));
        cVar2 = FUN_1424a4130(uVar4,param_1 + 0x520);
        *(bool *)(param_1 + 0x599) = cVar2 == '\0';
        if (((bool)cVar6 != (cVar2 == '\0')) &&
           (lVar5 = FUN_1412bf4f0(*(undefined8 *)(param_1 + 0x498),param_1), lVar5 != 0)) {
          lVar1 = *(longlong *)(param_1 + 0x498);
          if ((*(char *)(lVar1 + 0x5aa) == '\0') || (*(char *)(lVar5 + 0x9b) == '\0')) {
            cVar6 = *(char *)(lVar1 + 0x5a8);
            if ((cVar6 == '\0') || (*(char *)(lVar5 + 0x9c) == '\0')) {
              uVar4 = 0;
            }
            else {
              uVar4 = 1;
            }
          }
          else {
            cVar6 = *(char *)(lVar1 + 0x5a8);
            uVar4 = 1;
          }
          FUN_1412cf480(lVar1,param_1,uVar4,cVar6);
        }
      }
    }
  }
  else if (cVar6 != '\0') {
    *(undefined1 *)(param_1 + 0x599) = 0;
    if (*(longlong *)(param_1 + 0x498) != 0) {
      uVar4 = FUN_1412994e0(*(undefined8 *)(*(longlong *)(param_1 + 0x498) + 0x938));
      iVar3 = FStaticMeshLODResources::GetNumVertices(uVar4);
      if ((iVar3 != 0) &&
         (lVar5 = FUN_1412bf4f0(*(undefined8 *)(param_1 + 0x498),param_1), lVar5 != 0)) {
        lVar1 = *(longlong *)(param_1 + 0x498);
        if ((*(char *)(lVar1 + 0x5aa) != '\0') && (*(char *)(lVar5 + 0x9b) != '\0')) {
          FUN_1412cf480(lVar1,param_1,1,*(undefined1 *)(lVar1 + 0x5a8));
          return;
        }
        if ((*(char *)(lVar1 + 0x5a8) != '\0') && (*(char *)(lVar5 + 0x9c) != '\0')) {
          FUN_1412cf480(lVar1,param_1,1);
          return;
        }
        FUN_1412cf480(lVar1,param_1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1412cb5b0 FUN_1412cb5b0 body=229 status=ok
// SIG undefined FUN_1412cb5b0(void)

void FUN_1412cb5b0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x7e8);
  lVar4 = (longlong)*(int *)(param_1 + 0x7f0) * 0x270 + lVar3;
  if (lVar3 != lVar4) {
    lVar5 = lVar3 + 0x18;
    do {
      cVar1 = FUN_140bf9690(0,lVar5);
      if (cVar1 != '\0') {
        plVar2 = (longlong *)FWeakObjectPtr::Get(lVar5);
        (**(code **)(*plVar2 + 0x740))();
      }
      lVar3 = lVar3 + 0x270;
      lVar5 = lVar5 + 0x270;
    } while (lVar3 != lVar4);
  }
  lVar3 = *(longlong *)(param_1 + 0x7c8);
  lVar4 = (longlong)*(int *)(param_1 + 2000) * 0x270 + lVar3;
  if (lVar3 != lVar4) {
    lVar5 = lVar3 + 0x18;
    do {
      cVar1 = FUN_140bf9690(0,lVar5);
      if (cVar1 != '\0') {
        plVar2 = (longlong *)FWeakObjectPtr::Get(lVar5);
        (**(code **)(*plVar2 + 0x740))();
      }
      lVar3 = lVar3 + 0x270;
      lVar5 = lVar5 + 0x270;
    } while (lVar3 != lVar4);
  }
  return;
}



// FUNCTION 1412cb6a0 FUN_1412cb6a0 body=678 status=ok
// SIG undefined FUN_1412cb6a0(void)

void FUN_1412cb6a0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined **local_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  undefined **local_58 [2];
  longlong *local_48;
  longlong local_40;
  
  bVar13 = false;
  plVar4 = *(longlong **)(*param_2 + 0x18);
  plVar5 = *(longlong **)(*param_2 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if ((plVar5 == (longlong *)0x0) || (cVar7 = (**(code **)(*plVar5 + 0x20))(plVar5), cVar7 == '\0'))
  {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (bVar6) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    lVar11 = *(longlong *)(param_1 + 0x7f8);
    local_78 = 0;
    local_70 = 0;
    local_90 = &PTR_FUN_143f740c8;
    lVar12 = (longlong)*(int *)(param_1 + 0x800) * 0x270 + lVar11;
    local_80 = plVar4;
    local_88 = plVar5;
    for (; lVar11 != lVar12; lVar11 = lVar11 + 0x270) {
      lVar8 = FWeakObjectPtr::Get(lVar11 + 0x18);
      if (lVar8 == 0) {
LAB_1412cb7b7:
        lVar8 = 0;
      }
      else {
        lVar9 = AUIWSRiver::StaticClass();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_1412cb7b7;
      }
      if (lVar8 == 0) {
LAB_1412cb7e3:
        bVar6 = false;
      }
      else {
        bVar13 = true;
        uVar10 = FUN_1412bfc20(lVar8,local_58);
        cVar7 = FUniqueNetIdWrapper::operator==(&local_90,uVar10);
        if (cVar7 == '\0') goto LAB_1412cb7e3;
        bVar6 = true;
      }
      if (bVar13) {
        bVar13 = false;
        local_58[0] = &PTR_FUN_143f740c8;
        if (local_40 != 0) {
          FMemory::Free();
        }
        plVar5 = local_48;
        local_58[0] = &PTR_FUN_143f73d18;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_48 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_48)(local_48);
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
      }
      if (bVar6) {
        FUN_1404bf980(&local_90);
        if ((lVar11 != 0) && (lVar11 = FWeakObjectPtr::Get(lVar11 + 0x18), lVar11 != 0)) {
          lVar12 = AUIWSRiver::StaticClass();
          if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
            bVar13 = false;
          }
          else {
            bVar13 = true;
          }
          if (bVar13) {
            local_68 = *param_2;
            local_60 = param_2[1];
            if (local_60 != 0) {
              LOCK();
              *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
              UNLOCK();
            }
            FUN_1412cef00(lVar11,&local_68);
          }
        }
        goto LAB_1412cb86f;
      }
    }
    FUN_1404bf980(&local_90);
  }
LAB_1412cb86f:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return;
}



// FUNCTION 1412cb950 FUN_1412cb950 body=243 status=ok
// SIG undefined FUN_1412cb950(void)

void FUN_1412cb950(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_1412bf4f0();
  if (lVar3 != 0) {
    if (param_2 != 0) {
      UCheckBoxWidgetStyle::StaticClass();
    }
    cVar2 = FUN_140bf9690(0,lVar3 + 0x18);
    if (cVar2 != '\0') {
      lVar1 = FWeakObjectPtr::Get(lVar3 + 0x18);
      if ((*(char *)(lVar1 + 0x598) == '\0') ||
         (((*(char *)(param_1 + 0x5aa) == '\0' || (*(char *)(lVar3 + 0x9b) == '\0')) &&
          ((*(char *)(param_1 + 0x5a8) == '\0' || (*(char *)(lVar3 + 0x9c) == '\0')))))) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      uVar5 = FWeakObjectPtr::Get(lVar3 + 0x18);
      FUN_1412cf480(param_1,uVar5,uVar4,*(undefined1 *)(param_1 + 0x5a8));
    }
    if (*(longlong *)(lVar3 + 0x10) != 0) {
      if (((*(char *)(param_1 + 0x5aa) == '\0') || (*(char *)(lVar3 + 0x9b) == '\0')) &&
         ((*(char *)(param_1 + 0x5a8) == '\0' || (*(char *)(lVar3 + 0x9c) == '\0')))) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      FUN_1412cf680(param_1,*(longlong *)(lVar3 + 0x10),uVar5);
    }
  }
  return;
}



// FUNCTION 1412cba50 FUN_1412cba50 body=676 status=ok
// SIG undefined FUN_1412cba50(void)

undefined8 FUN_1412cba50(longlong param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  cVar1 = *(char *)(param_2 + 600);
  FUN_1412cc3b0(param_2,param_1);
  if (*(char *)(param_2 + 600) == '\x05') {
    lVar4 = FWeakObjectPtr::Get(param_2 + 0x18);
    if (lVar4 != 0) {
      lVar5 = USoUIInputKeySelector::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if (*(char *)(param_2 + 600) != cVar1) {
          FUN_1414f55a0(lVar4);
        }
        *(undefined1 *)(lVar4 + 0x598) = 0;
        FUN_1412cf480(param_1,lVar4,0,*(undefined1 *)(param_1 + 0x5a8));
      }
    }
    if (*(longlong *)(param_2 + 0x10) == 0) {
      return 1;
    }
    FUN_1412cf680(param_1,*(longlong *)(param_2 + 0x10),0);
    return 1;
  }
  cVar3 = FUN_140bf9670(0,param_2 + 0x18);
  if ((((cVar3 == '\0') &&
       (lVar4 = FWeakObjectPtr::Get(param_2 + 0x18), (*(byte *)(lVar4 + 0x80) & 1) == 0)) &&
      (lVar4 = FWeakObjectPtr::Get(param_2 + 0x18), *(char *)(lVar4 + 0x598) != '\0')) &&
     ((*(longlong *)(param_2 + 0x100) != 0 && (*(char *)(param_2 + 600) == cVar1)))) {
    return 0;
  }
  plVar6 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_1412cbbb9:
    *(undefined1 *)(param_2 + 0x1e4) = *(undefined1 *)(param_2 + 0x25a);
    FUN_1412d31a0(param_1,param_2,0);
    plVar6 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x18);
    if (plVar6 == (longlong *)0x0) goto LAB_1412cbc98;
    lVar4 = USoUIInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1412cbc98;
  }
  else {
    lVar4 = USoUIInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1412cbbb9;
  }
  if (*(longlong *)(param_2 + 0x100) == 0) {
    FUN_1412aabb0(param_2 + 0x100,param_1,*(undefined1 *)(param_2 + 600));
    (**(code **)(*plVar6 + 0x730))(plVar6,*(undefined8 *)(param_2 + 0x100));
  }
  FUN_1414f55a0(plVar6);
  *(undefined1 *)(plVar6 + 0xb3) = 1;
  if ((*(char *)(param_1 + 0x5aa) == '\0') &&
     ((*(char *)(param_1 + 0x5a9) == '\0' || (*(char *)(param_1 + 0xd20) != '\0')))) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  FUN_1412cf480(param_1,plVar6,uVar7,*(undefined1 *)(param_1 + 0x5a8));
LAB_1412cbc98:
  if (*(longlong *)(param_2 + 0x10) != 0) {
    if ((*(char *)(param_1 + 0x5aa) == '\0') &&
       ((*(char *)(param_1 + 0x5a9) == '\0' || (*(char *)(param_1 + 0xd20) != '\0')))) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    FUN_1412cf680(param_1,*(longlong *)(param_2 + 0x10),uVar7);
  }
  FUN_1412cc3b0(param_2,param_1);
  return 1;
}



// FUNCTION 1412cbd00 FUN_1412cbd00 body=441 status=ok
// SIG undefined FUN_1412cbd00(void)

undefined8 FUN_1412cbd00(longlong *param_1)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  local_18 = 0;
  local_10 = 0;
  uVar4 = FUN_1412c3780(&local_18,param_1);
  cVar1 = FUN_14058c1e0(param_1 + 0xf1,uVar4);
  if (cVar1 == '\0') {
    iVar7 = (int)param_1[0xf6] + -1;
    if (-1 < iVar7) {
      lVar5 = (longlong)iVar7 * 0x270;
      lVar3 = lVar5;
      do {
        FUN_1412cc3b0(param_1[0xf5] + lVar3,param_1);
        if (*(char *)(param_1[0xf5] + 600 + lVar5) == '\x05') {
          FUN_1412d2bb0(lVar3 + param_1[0xf5],param_1);
          FUN_140fd51c0(param_1 + 0xf5,iVar7,1,1);
        }
        lVar3 = lVar3 + -0x270;
        lVar5 = lVar5 + -0x270;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
    uVar4 = FWeakObjectPtr::Get((longlong)param_1 + 0x754);
    plVar6 = (longlong *)UDynamicEntryBox::GetAllEntries(uVar4);
    lVar3 = *plVar6;
    lVar5 = (longlong)(int)plVar6[1] * 0xf0 + lVar3;
    for (; lVar3 != lVar5; lVar3 = lVar3 + 0xf0) {
      FUN_1412c6fb0(param_1,lVar3);
    }
    return 1;
  }
  if ((lVar3 != 0) && (lVar3 = FUN_142f6c9f0(lVar3), lVar3 != 0)) {
    lVar5 = FUN_142f79140();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1412cbd98;
  }
  lVar3 = 0;
LAB_1412cbd98:
  if ((*(char *)((longlong)param_1 + 0x9f9) != '\0') && (lVar3 != 0)) {
    (**(code **)(param_1[0x8b] + 0x10))(param_1 + 0x8b,lVar3 + 0x660);
    return 1;
  }
  return 1;
}



// FUNCTION 1412cbec0 FUN_1412cbec0 body=679 status=ok
// SIG undefined FUN_1412cbec0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412cbec0(longlong *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  lVar4 = FUN_1412c3210();
  lVar6 = param_1[0x93];
  if (((lVar6 == 0) || (*(char *)(lVar6 + 0x9f9) == '\0')) || (lVar4 == 0)) {
    *(undefined1 *)(param_1 + 0xb3) = 0;
    if (lVar6 == 0) {
      return;
    }
    if (param_1[0x9a] == 0) {
      return;
    }
    FUN_1412cf480(lVar6,param_1,0,*(undefined1 *)(lVar6 + 0x5a8));
    return;
  }
  bVar1 = true;
  uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar6 = FUN_142f429c0(uVar5);
  if (lVar6 == 0) {
    lVar6 = param_1[0x93];
    *(undefined1 *)(param_1 + 0xb3) = 0;
    if (lVar6 == 0) {
      return;
    }
    if (param_1[0x9a] == 0) {
      return;
    }
    FUN_1412cf480(lVar6,param_1,0,*(undefined1 *)(lVar6 + 0x5a8));
    return;
  }
  lVar7 = FUN_142f477c0();
  bVar2 = true;
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar2 = false;
  }
  if (bVar2) {
    cVar3 = FUN_142f430a0(lVar6,lVar4,1);
    if ((cVar3 == '\0') || (cVar3 = FUN_142f42f30(lVar6,lVar4), cVar3 != '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  cVar3 = FUN_140bf9690(0,(longlong)param_1 + 0x5cc);
  if (cVar3 != '\0') {
    lVar6 = FWeakObjectPtr::Get((longlong)param_1 + 0x5cc);
    lVar6 = *(longlong *)(lVar6 + 0x118);
    if (lVar6 != 0) {
      lVar7 = AXUsableActorScriptedBotEncounter::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar6 = *(longlong *)(lVar6 + 0x168);
        if (lVar6 == 0) {
          local_28 = 0;
          uStack_24 = 0;
          uStack_20 = 0;
          uStack_1c = 0;
          local_18 = _DAT_146878340 & _DAT_146878350;
          uStack_14 = uRam0000000146878344 & uRam0000000146878354;
          uStack_10 = uRam0000000146878348 & uRam0000000146878358;
          uStack_c = uRam000000014687834c & uRam000000014687835c;
          local_38 = 0;
          uStack_34 = 0;
          uStack_30 = 0;
          uStack_2c = uRam000000014687834c;
        }
        else {
          local_28 = *(undefined4 *)(lVar6 + 0x220);
          uStack_24 = *(undefined4 *)(lVar6 + 0x224);
          uStack_20 = *(undefined4 *)(lVar6 + 0x228);
          uStack_1c = *(undefined4 *)(lVar6 + 0x22c);
          local_18 = *(uint *)(lVar6 + 0x230);
          uStack_14 = *(uint *)(lVar6 + 0x234);
          uStack_10 = *(uint *)(lVar6 + 0x238);
          uStack_c = *(uint *)(lVar6 + 0x23c);
          local_38 = *(undefined4 *)(lVar6 + 0x210);
          uStack_34 = *(undefined4 *)(lVar6 + 0x214);
          uStack_30 = *(undefined4 *)(lVar6 + 0x218);
          uStack_2c = *(uint *)(lVar6 + 0x21c);
        }
        (**(code **)(*param_1 + 0x728))
                  (param_1,&local_38,CONCAT71((int7)((ulonglong)(lVar7 + 0x88) >> 8),1),0);
      }
    }
  }
  if ((param_1[0x93] == 0) || (lVar6 = *(longlong *)(param_1[0x93] + 0x118), lVar6 == 0)) {
LAB_1412cc0a2:
    lVar6 = 0;
  }
  else {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1412cc0a2;
  }
  if ((bVar1) && (cVar3 = FUN_142f3e730(lVar4,lVar6), cVar3 != '\0')) {
    cVar3 = FOutputDevice::CanBeUsedOnAnyThread();
    if (cVar3 == '\0') {
      uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      cVar3 = FUN_142f43380(lVar4,uVar5,0);
      if (cVar3 == '\0') goto LAB_1412cc0e3;
    }
    uVar5 = 1;
  }
  else {
LAB_1412cc0e3:
    uVar5 = 0;
  }
  FUN_1412cf020(param_1,uVar5);
  return;
}



// FUNCTION 1412cc170 FUN_1412cc170 body=563 status=ok
// SIG undefined FUN_1412cc170(void)

void FUN_1412cc170(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  lVar6 = FWeakObjectPtr::Get(param_1 + 0xb2);
  if (lVar6 == 0) {
    return;
  }
  lVar7 = FUN_14148cad0();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  bVar3 = false;
  bVar4 = false;
  if (*(longlong *)(lVar6 + 0x8d8) != 0) {
    *(undefined1 *)(param_1 + 0xc6) = 1;
    if (param_1[0xba] != 0) {
      (**(code **)(*param_1 + 0x730))(param_1);
    }
    goto LAB_1412cc321;
  }
  FUN_141223c50(lVar6,&local_38,0);
  if (iStack_30 == 0) {
    (**(code **)(*param_1 + 0x730))(param_1,param_1[0xbd]);
  }
  else {
    if (param_1[0x93] == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(longlong *)(param_1[0x93] + 0x118);
    }
    if (lVar6 != 0) {
      plVar9 = (longlong *)CONCAT44(uStack_34,local_38);
      plVar1 = plVar9 + iStack_30;
      if (plVar9 == plVar1) {
LAB_1412cc2f5:
        lVar6 = param_1[0xbc];
      }
      else {
        do {
          plVar2 = (longlong *)*plVar9;
          if (plVar2 != (longlong *)0x0) {
            cVar5 = (**(code **)(*plVar2 + 0x780))(plVar2);
            if (cVar5 == '\0') {
              uVar8 = UCircularThrobber::GetPrivateStaticClass();
              lVar7 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar8);
              if ((lVar7 != 0) && (cVar5 = FUN_142dee910(lVar7,lVar6), cVar5 != '\0')) {
                bVar4 = true;
                break;
              }
            }
            else {
              bVar3 = true;
            }
          }
          plVar9 = plVar9 + 1;
        } while (plVar9 != plVar1);
        if (bVar3) {
          lVar6 = param_1[0xbb];
        }
        else {
          if (!bVar4) goto LAB_1412cc2f5;
          lVar6 = param_1[0xbe];
        }
      }
      (**(code **)(*param_1 + 0x730))(param_1,lVar6);
    }
  }
  if (CONCAT44(uStack_34,local_38) != 0) {
    FMemory::Free();
  }
LAB_1412cc321:
  if ((param_1[0xa7] != 0) && (param_1[0xbf] != 0)) {
    if ((bVar3) || ((char)param_1[0xc6] != '\0')) {
      local_38 = (undefined4)param_1[0xc2];
      uStack_34 = *(undefined4 *)((longlong)param_1 + 0x614);
      iStack_30 = (int)param_1[0xc3];
      uStack_2c = *(undefined4 *)((longlong)param_1 + 0x61c);
      lVar6 = param_1[0xbf];
    }
    else {
      lVar6 = param_1[0xbf];
      if (bVar4) {
        local_38 = (undefined4)param_1[0xc0];
        uStack_34 = *(undefined4 *)((longlong)param_1 + 0x604);
        iStack_30 = (int)param_1[0xc1];
        uStack_2c = *(undefined4 *)((longlong)param_1 + 0x60c);
      }
      else {
        local_38 = (undefined4)param_1[0xc4];
        uStack_34 = *(undefined4 *)((longlong)param_1 + 0x624);
        iStack_30 = (int)param_1[0xc5];
        uStack_2c = *(undefined4 *)((longlong)param_1 + 0x62c);
      }
    }
    FUN_1425a2be0(param_1[0xa7],lVar6,&local_38);
  }
  return;
}



// FUNCTION 1412cc3b0 FUN_1412cc3b0 body=2566 status=ok
// SIG undefined FUN_1412cc3b0(void)

void FUN_1412cc3b0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  longlong *plVar22;
  ulonglong uVar23;
  longlong *local_128;
  undefined8 local_120;
  longlong local_118 [4];
  undefined8 local_f8;
  longlong local_f0;
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  
  if (((param_2 != (longlong *)0x0) && (*(char *)((longlong)param_2 + 0x9f9) != '\0')) &&
     (lVar6 = (**(code **)(*param_2 + 0x148))(param_2), lVar6 != 0)) {
    plVar7 = (longlong *)FUN_142f6c9f0(lVar6);
    if (plVar7 != (longlong *)0x0) {
      uVar8 = FText::FText(local_c8);
      FText::operator=(param_1 + 0x58,uVar8);
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar22 = local_c0 + 1;
        lVar9 = *plVar22;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_c0)(local_c0);
          LOCK();
          piVar1 = (int *)((longlong)local_c0 + 0xc);
          iVar21 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar21 == 1) {
            (**(code **)(*local_c0 + 8))(local_c0,1);
          }
        }
      }
      uVar8 = FText::FText(local_b0);
      FText::operator=(param_1 + 0x70,uVar8);
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar22 = local_a8 + 1;
        lVar9 = *plVar22;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar1 = (int *)((longlong)local_a8 + 0xc);
          iVar21 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar21 == 1) {
            (**(code **)(*local_a8 + 8))(local_a8,1);
          }
        }
      }
      *(undefined1 *)(param_1 + 600) = 5;
      lVar9 = UWorld::GetGameState<APVPGameState>(lVar6);
      if (lVar9 != 0) {
        FUN_142f5ed60(plVar7,local_118);
        iVar21 = *(int *)(param_1 + 0x160) + -1;
        if (-1 < iVar21) {
          lVar9 = (longlong)iVar21 * 0x50;
          do {
            if (*(char *)(param_1 + 0x25a) == '\0') {
              plVar22 = (longlong *)(param_1 + 0x158);
              cVar3 = FUN_142f63b20(*plVar22 + (longlong)iVar21 * 0x50,lVar6);
              if (cVar3 == '\0') goto LAB_1412cc71c;
              cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                                ((longlong)param_2 + 0x754,param_2 + 0xf1);
              if (cVar3 == '\0') {
                lVar12 = *plVar22;
                if (local_118[0] != 0) {
                  lVar10 = FUN_142f71d80();
                  for (lVar14 = local_118[0]; lVar14 != 0; lVar14 = *(longlong *)(lVar14 + 0x30)) {
                    lVar15 = local_118[0];
                    if (lVar14 == lVar10) goto LAB_1412cc5b5;
                  }
                }
                lVar15 = 0;
LAB_1412cc5b5:
                plVar11 = (longlong *)
                          (**(code **)(*(longlong *)(lVar12 + lVar9) + 0x18))
                                    ((longlong *)(lVar12 + lVar9),local_e8);
                if (*plVar11 != 0) {
                  lVar10 = FUN_142f71d80();
                  lVar12 = *plVar11;
                  for (lVar14 = lVar12; lVar14 != 0; lVar14 = *(longlong *)(lVar14 + 0x30)) {
                    if (lVar14 == lVar10) goto LAB_1412cc5f2;
                  }
                }
                lVar12 = 0;
LAB_1412cc5f2:
                if (lVar12 == lVar15) goto LAB_1412cc5ff;
              }
              else {
LAB_1412cc5ff:
                lVar12 = FUN_142f5f490(*plVar22 + (longlong)iVar21 * 0x50);
                puVar13 = (undefined8 *)
                          (**(code **)(*(longlong *)(*plVar22 + lVar9) + 0x18))
                                    ((longlong *)(*plVar22 + lVar9),local_e0);
                cVar3 = FUN_142f63670(plVar7,lVar12,*puVar13,param_2);
                if (cVar3 != '\0') {
                  if ((lVar12 == 0) || (uVar4 = 2, *(char *)(lVar12 + 0xa8) == '\0')) {
                    uVar4 = 1;
                  }
                  *(undefined1 *)(param_1 + 600) = uVar4;
                  cVar3 = FText::IsEmpty(param_1 + 0x58);
                  if (cVar3 != '\0') {
                    uVar8 = (**(code **)(*(longlong *)(*plVar22 + lVar9) + 0x18))
                                      ((longlong *)(*plVar22 + lVar9),local_d8);
                    uVar8 = FUN_142f5bb60(uVar8);
                    uVar8 = FUN_142dea370(uVar8,local_98);
                    FText::operator=(param_1 + 0x58,uVar8);
                    plVar22 = local_90;
                    if (local_90 != (longlong *)0x0) {
                      LOCK();
                      plVar11 = local_90 + 1;
                      lVar12 = *plVar11;
                      *(int *)plVar11 = (int)*plVar11 + -1;
                      UNLOCK();
                      if ((int)lVar12 == 1) {
                        (**(code **)*local_90)(local_90);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar22 + 0xc);
                        iVar18 = *piVar1;
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (iVar18 == 1) {
                          (**(code **)(*plVar22 + 8))(plVar22,1);
                        }
                      }
                    }
                  }
                  cVar3 = FText::IsEmpty(param_1 + 0x70);
                  if ((cVar3 != '\0') && (*(longlong *)(param_1 + 0x100) != 0)) {
                    FText::operator=(param_1 + 0x70,*(longlong *)(param_1 + 0x100) + 0x48);
                  }
                  goto LAB_1412cc71c;
                }
              }
              FUN_140cc9910(plVar22,iVar21,1,1);
            }
            else {
LAB_1412cc71c:
              if ((byte)(*(char *)(param_1 + 600) - 1U) < 2) break;
            }
            lVar9 = lVar9 + -0x50;
            iVar21 = iVar21 + -1;
          } while (-1 < iVar21);
        }
        if (((*(char *)(param_1 + 600) - 3U & 0xfd) == 0) &&
           (iVar21 = *(int *)(param_1 + 0x1d8) + -1, -1 < iVar21)) {
          lVar6 = (longlong)iVar21;
          do {
            plVar22 = (longlong *)(param_1 + 0x1d0);
            lVar9 = lVar6 * 0x28;
            if (*(char *)(param_1 + 0x25a) == '\0') {
              lVar9 = *plVar22 + lVar9;
              lVar14 = FWeakObjectPtr::Get(lVar9);
              lVar10 = 0;
              lVar12 = lVar10;
              if (lVar14 == 0) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                if ((DAT_1464b56f4 != *(int *)(lVar9 + 8)) &&
                   (local_f8 = 0, *(longlong *)(lVar9 + 0x10) != 0)) {
                  lVar14 = FUN_141796df0();
                  FWeakObjectPtr::operator=(lVar9,lVar14);
                  if ((lVar14 != 0) || (DAT_1469e7e10 == '\0')) {
                    LOCK();
                    if (DAT_1464b56f4 == 0) {
                      DAT_1464b56f4 = 0;
                    }
                    UNLOCK();
                    *(int *)(lVar9 + 8) = DAT_1464b56f4;
                  }
                  lVar14 = FWeakObjectPtr::Get(lVar9);
                  if (lVar14 != 0) goto LAB_1412ccbed;
                }
              }
              else {
LAB_1412ccbed:
                lVar9 = FUN_14171bfe0();
                if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) {
                  lVar15 = FUN_142f71d80();
                  lVar9 = lVar14;
                  do {
                    lVar12 = lVar14;
                    if (lVar9 == lVar15) break;
                    lVar9 = *(longlong *)(lVar9 + 0x30);
                    lVar12 = lVar10;
                  } while (lVar9 != 0);
                }
              }
              local_f0 = lVar12;
              cVar3 = (**(code **)(*plVar7 + 0x728))(plVar7,lVar12);
              if (cVar3 == '\0') {
                if (*(longlong *)((longlong)iVar21 * 0x28 + 0x18 + *plVar22) != 0) {
                  FMemory::Free();
                }
                iVar18 = *(int *)(param_1 + 0x1d8);
                iVar5 = (iVar18 - iVar21) + -1;
                if (iVar5 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(*plVar22 + (longlong)iVar21 * 0x28),
                             (void *)(*plVar22 + (longlong)(iVar21 + 1) * 0x28),
                             (longlong)iVar5 * 0x28);
                  iVar18 = *(int *)(param_1 + 0x1d8);
                }
                *(int *)(param_1 + 0x1d8) = iVar18 + -1;
                TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(plVar22);
              }
              else {
                *(undefined1 *)(param_1 + 600) = 0;
                cVar3 = FText::IsEmpty(param_1 + 0x58);
                if (cVar3 != '\0') {
                  uVar8 = FUN_142f5bb60(&local_f0);
                  uVar8 = FUN_142dea370(uVar8,local_68);
                  FText::operator=(param_1 + 0x58,uVar8);
                  plVar22 = local_60;
                  if (local_60 != (longlong *)0x0) {
                    LOCK();
                    plVar11 = local_60 + 1;
                    lVar9 = *plVar11;
                    *(int *)plVar11 = (int)*plVar11 + -1;
                    UNLOCK();
                    if ((int)lVar9 == 1) {
                      (**(code **)*local_60)(local_60);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar22 + 0xc);
                      iVar18 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar18 == 1) {
                        (**(code **)(*plVar22 + 8))(plVar22,1);
                      }
                    }
                  }
                }
              }
            }
            else {
              lVar12 = lVar9 + *plVar22;
              lVar14 = FWeakObjectPtr::Get();
              if (lVar14 == 0) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                if ((DAT_1464b56f4 != *(int *)(lVar12 + 8)) &&
                   (local_118[1] = 0, *(longlong *)(lVar12 + 0x10) != 0)) {
                  lVar14 = FUN_141796df0();
                  FWeakObjectPtr::operator=(lVar12,lVar14);
                  if ((lVar14 != 0) || (DAT_1469e7e10 == '\0')) {
                    LOCK();
                    if (DAT_1464b56f4 == 0) {
                      DAT_1464b56f4 = 0;
                    }
                    UNLOCK();
                    *(int *)(lVar12 + 8) = DAT_1464b56f4;
                  }
                  lVar14 = FWeakObjectPtr::Get(lVar12);
                  if (lVar14 != 0) goto LAB_1412cc80c;
                }
              }
              else {
LAB_1412cc80c:
                lVar12 = FUN_14171bfe0();
                if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) {
                  lVar10 = FUN_142f71d80();
                  lVar12 = lVar14;
                  do {
                    if (lVar12 == lVar10) goto LAB_1412cc862;
                    lVar12 = *(longlong *)(lVar12 + 0x30);
                  } while (lVar12 != 0);
                }
              }
              lVar14 = 0;
LAB_1412cc862:
              plVar11 = (longlong *)FUN_142f5ed60(plVar7,local_d0);
              if (*plVar11 != 0) {
                lVar15 = FUN_142f71d80();
                lVar12 = *plVar11;
                for (lVar10 = lVar12; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x30)) {
                  if (lVar10 == lVar15) goto LAB_1412cc8a2;
                }
              }
              lVar12 = 0;
LAB_1412cc8a2:
              if (lVar14 == lVar12) {
                *(undefined1 *)(param_1 + 600) = 4;
                lVar9 = *plVar22 + lVar9;
                uVar16 = FWeakObjectPtr::Get(lVar9);
                uVar23 = 0;
                uVar20 = uVar23;
                if (uVar16 == 0) {
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                  }
                  UNLOCK();
                  if ((DAT_1464b56f4 != *(int *)(lVar9 + 8)) &&
                     (local_118[2] = 0, *(longlong *)(lVar9 + 0x10) != 0)) {
                    lVar12 = FUN_141796df0();
                    FWeakObjectPtr::operator=(lVar9,lVar12);
                    if ((lVar12 != 0) || (DAT_1469e7e10 == '\0')) {
                      LOCK();
                      if (DAT_1464b56f4 == 0) {
                        DAT_1464b56f4 = 0;
                      }
                      UNLOCK();
                      *(int *)(lVar9 + 8) = DAT_1464b56f4;
                    }
                    uVar16 = FWeakObjectPtr::Get(lVar9);
                    if (uVar16 != 0) goto LAB_1412cc92f;
                  }
                }
                else {
LAB_1412cc92f:
                  lVar9 = FUN_14171bfe0();
                  if ((*(int *)(*(longlong *)(uVar16 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(uVar16 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  if (bVar2) {
                    uVar17 = FUN_142f71d80();
                    uVar19 = uVar16;
                    do {
                      uVar20 = uVar16;
                      if (uVar19 == uVar17) break;
                      uVar19 = *(ulonglong *)(uVar19 + 0x30);
                      uVar20 = uVar23;
                    } while (uVar19 != 0);
                  }
                }
                local_118[3] = uVar20;
                if (*(int *)(param_1 + 0x160) == 0) {
                  local_128 = (longlong *)0x0;
                  local_120 = 0;
                  FUN_142f59720(plVar7,uVar20,&local_128,0);
                  uVar20 = (ulonglong)
                           ((longlong)(local_128 + (int)local_120) + (7 - (longlong)local_128)) >> 3
                  ;
                  if (local_128 + (int)local_120 < local_128) {
                    uVar20 = uVar23;
                  }
                  plVar22 = local_128;
                  if (uVar20 != 0) {
                    do {
                      lVar9 = *plVar22;
                      if (lVar9 != 0) {
                        plVar11 = (longlong *)(param_1 + 0x158);
                        iVar18 = *(int *)(param_1 + 0x160);
                        *(int *)(param_1 + 0x160) = iVar18 + 1;
                        if (*(int *)(param_1 + 0x164) < iVar18 + 1) {
                          TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar11);
                        }
                        lVar12 = *plVar11;
                        lVar14 = (longlong)iVar18 * 0x50;
                        _guard_xfg_dispatch_icall_nop((void *)(lVar14 + lVar12),0,0x50);
                        FUN_140aecb80((void *)(lVar14 + lVar12));
                        if ((iVar18 < 0) || (*(int *)(param_1 + 0x160) <= iVar18)) {
                          bVar2 = false;
                        }
                        else {
                          bVar2 = true;
                        }
                        if (bVar2) {
                          FUN_142f604c0(*plVar11 + lVar14,local_118[3],lVar9);
                          cVar3 = FUN_142f63b20(*plVar11 + lVar14);
                          if (cVar3 == '\0') {
                            FUN_140cc9910(plVar11,iVar18,1);
                          }
                        }
                      }
                      uVar23 = uVar23 + 1;
                      plVar22 = plVar22 + 1;
                    } while (uVar23 != uVar20);
                  }
                  if (local_128 != (longlong *)0x0) {
                    FMemory::Free(local_128);
                  }
                }
                cVar3 = FText::IsEmpty(param_1 + 0x58);
                if (cVar3 != '\0') {
                  uVar8 = FUN_142f5bb60(local_118 + 3);
                  uVar8 = FUN_142dea370(uVar8,local_80);
                  FText::operator=(param_1 + 0x58,uVar8);
                  plVar22 = local_78;
                  if (local_78 != (longlong *)0x0) {
                    LOCK();
                    plVar11 = local_78 + 1;
                    lVar9 = *plVar11;
                    *(int *)plVar11 = (int)*plVar11 + -1;
                    UNLOCK();
                    if ((int)lVar9 == 1) {
                      (**(code **)*local_78)(local_78);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar22 + 0xc);
                      iVar18 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar18 == 1) {
                        (**(code **)(*plVar22 + 8))(plVar22,1);
                      }
                    }
                  }
                }
                cVar3 = FText::IsEmpty(param_1 + 0x70);
                if ((cVar3 != '\0') && (*(longlong *)(param_1 + 0xa0) != 0)) {
                  FText::operator=(param_1 + 0x70,*(longlong *)(param_1 + 0xa0) + 0x48);
                }
              }
            }
            iVar21 = iVar21 + -1;
            lVar6 = lVar6 + -1;
          } while (-1 < iVar21);
        }
      }
    }
    if ((*(int *)(param_1 + 0x160) == 0) && (*(int *)(param_1 + 0x1d8) == 0)) {
      *(undefined1 *)(param_1 + 600) = 5;
    }
  }
  return;
}



// FUNCTION 1412ccdc0 FUN_1412ccdc0 body=309 status=ok
// SIG undefined FUN_1412ccdc0(void)

void FUN_1412ccdc0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  
  cVar2 = FUN_140bf9690(0,param_1 + 0x38);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x38);
    uVar4 = UCircularThrobber::GetPrivateStaticClass();
    lVar5 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
    if (lVar5 != 0) {
      FUN_140483870(lVar5 + 400,param_1 + -0x700);
    }
  }
  cVar2 = FUN_140bf9690(0,param_1 + 0x38);
  if (cVar2 != '\0') {
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x38);
    FUN_1407665e0(lVar5 + 0x290,param_1 + -0x700);
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x38);
  if (lVar5 != 0) {
    lVar6 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1407665e0(lVar5 + 0xf18,param_1 + -0x700);
      FUN_1407665e0(lVar5 + 0x1d88,param_1 + -0x700);
      FUN_1407665e0(lVar5 + 0x1db8,param_1 + -0x700);
    }
  }
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x38) = local_res8;
  *(undefined4 *)(param_1 + 0x3c) = local_resc;
  return;
}



// FUNCTION 1412ccf00 FUN_1412ccf00 body=237 status=ok
// SIG undefined FUN_1412ccf00(void)

void FUN_1412ccf00(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  cVar2 = FUN_140bf9690(0,param_1 + 0x38);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x38);
    FUN_1407665e0(lVar3 + 0x290,param_1 + -0x700);
  }
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x38);
  if (lVar3 != 0) {
    lVar4 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1407665e0(lVar3 + 0xf18,param_1 + -0x700);
      FUN_1407665e0(lVar3 + 0x1d88,param_1 + -0x700);
      FUN_1407665e0(lVar3 + 0x1db8,param_1 + -0x700);
    }
  }
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x38) = local_res8;
  *(undefined4 *)(param_1 + 0x3c) = local_resc;
  return;
}



// FUNCTION 1412ccff0 FUN_1412ccff0 body=284 status=ok
// SIG undefined FUN_1412ccff0(void)

longlong FUN_1412ccff0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  
  uVar7 = 0;
  if (0 < *(int *)(param_1 + 0xcd8)) {
    plVar1 = (longlong *)(param_1 + 0xcd0);
    plVar6 = (longlong *)*plVar1;
    uVar10 = uVar7;
    do {
      lVar2 = *plVar6;
      iVar9 = (int)uVar10;
      if ((param_2 != 0) && (lVar2 != 0)) {
        for (lVar3 = *(longlong *)(lVar2 + 0x10); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
          if (lVar3 == param_2) {
            FUN_142397540(lVar2,0,CONCAT71((int7)((ulonglong)plVar6 >> 8),2));
            FUN_142398ec0(lVar2,1,2);
            uVar5 = UGameplayTagAssetInterface::GetPrivateStaticClass();
            plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar5);
            if (plVar6 != (longlong *)0x0) {
              (**(code **)(*plVar6 + 0x68))(plVar6,0);
              (**(code **)(*plVar6 + 0x48))(plVar6,1);
            }
            iVar8 = *(int *)(param_1 + 0xcd8);
            iVar4 = (iVar8 - iVar9) + -1;
            if (iVar4 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*plVar1 + (longlong)iVar9 * 8),
                         (void *)(*plVar1 + (longlong)(iVar9 + 1) * 8),(longlong)iVar4 << 3);
              iVar8 = *(int *)(param_1 + 0xcd8);
            }
            *(int *)(param_1 + 0xcd8) = iVar8 + -1;
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
            return lVar2;
          }
        }
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      uVar7 = uVar7 + 1;
      plVar6 = plVar6 + 1;
    } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0xcd8));
  }
  return 0;
}



// FUNCTION 1412cd110 FUN_1412cd110 body=534 status=ok
// SIG undefined FUN_1412cd110(void)

void FUN_1412cd110(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (*(longlong *)(param_1 + 0x940) != 0) {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x940) + 0x310);
    iVar7 = iVar4 + -1;
    if (-1 < iVar7) {
      lVar11 = (longlong)iVar7 * 8;
      lVar13 = (longlong)iVar4 << 3;
      lVar12 = lVar11;
      do {
        lVar2 = *(longlong *)(param_1 + 0x940);
        plVar8 = (longlong *)(lVar2 + 0x308);
        lVar3 = *(longlong *)(lVar12 + *plVar8);
        if ((lVar3 != param_1) && (lVar3 != 0)) {
          plVar6 = *(longlong **)(param_1 + 0x808);
          plVar1 = plVar6 + *(int *)(param_1 + 0x810);
          for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
            if (*plVar6 == lVar3) {
              iVar4 = *(int *)(lVar2 + 0x310);
              iVar5 = (iVar4 - iVar7) + -1;
              if (iVar5 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(lVar11 + *plVar8),(void *)(lVar13 + *plVar8),
                           (longlong)iVar5 << 3);
                iVar4 = *(int *)(lVar2 + 0x310);
              }
              *(int *)(lVar2 + 0x310) = iVar4 + -1;
              TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar8);
              break;
            }
          }
        }
        lVar13 = lVar13 + -8;
        lVar11 = lVar11 + -8;
        lVar12 = lVar12 + -8;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
  }
  if (*(longlong *)(param_1 + 0x948) != 0) {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x948) + 0x310);
    iVar7 = iVar4 + -1;
    if (-1 < iVar7) {
      lVar11 = (longlong)iVar7 * 8;
      lVar13 = (longlong)iVar4 << 3;
      lVar12 = lVar11;
      do {
        lVar2 = *(longlong *)(param_1 + 0x948);
        plVar8 = (longlong *)(lVar2 + 0x308);
        lVar3 = *(longlong *)(lVar12 + *plVar8);
        if ((lVar3 != param_1) && (lVar3 != 0)) {
          plVar6 = *(longlong **)(param_1 + 0x808);
          plVar1 = plVar6 + *(int *)(param_1 + 0x810);
          for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
            if (*plVar6 == lVar3) {
              iVar4 = *(int *)(lVar2 + 0x310);
              iVar5 = (iVar4 - iVar7) + -1;
              if (iVar5 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(lVar11 + *plVar8),(void *)(lVar13 + *plVar8),
                           (longlong)iVar5 << 3);
                iVar4 = *(int *)(lVar2 + 0x310);
              }
              *(int *)(lVar2 + 0x310) = iVar4 + -1;
              TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar8);
              break;
            }
          }
        }
        lVar13 = lVar13 + -8;
        lVar11 = lVar11 + -8;
        lVar12 = lVar12 + -8;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x808);
  uVar10 = 0;
  uVar9 = (longlong)*(int *)(param_1 + 0x810) & 0x1fffffffffffffff;
  if (plVar8 + *(int *)(param_1 + 0x810) < plVar8) {
    uVar9 = uVar10;
  }
  if (uVar9 != 0) {
    do {
      if (*plVar8 != 0) {
        FUN_142227350(*plVar8,0,1);
      }
      plVar8 = plVar8 + 1;
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar9);
  }
  return;
}



// FUNCTION 1412cd330 FUN_1412cd330 body=111 status=ok
// SIG undefined FUN_1412cd330(void)

void FUN_1412cd330(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x7f8);
  lVar2 = (longlong)*(int *)(param_1 + 0x800) * 0x270 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x270) {
    FUN_1412d2bb0(lVar1,param_1);
  }
  FUN_1412bdd20(param_1 + 0x7f8,0);
  return;
}



// FUNCTION 1412cd3a0 FUN_1412cd3a0 body=773 status=ok
// SIG undefined FUN_1412cd3a0(void)

void FUN_1412cd3a0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res8;
  
  lVar5 = *(longlong *)(param_1 + 0x7d8);
  lVar6 = param_1 + 0x978;
  lVar4 = (longlong)*(int *)(param_1 + 0x7e0) * 0x270 + lVar5;
  for (; lVar5 != lVar4; lVar5 = lVar5 + 0x270) {
    cVar3 = FUN_140bf9670(0,lVar6);
    if ((cVar3 != '\0') ||
       (cVar3 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                          (lVar5 + 0x18,lVar6), cVar3 != '\0')) {
      FUN_1412d2bb0(lVar5,param_1);
    }
  }
  FUN_1412bdd20(param_1 + 0x7d8,0);
  lVar5 = *(longlong *)(param_1 + 0x7e8);
  lVar4 = (longlong)*(int *)(param_1 + 0x7f0) * 0x270 + lVar5;
  for (; lVar5 != lVar4; lVar5 = lVar5 + 0x270) {
    cVar3 = FUN_140bf9670(0,lVar6);
    if ((cVar3 != '\0') ||
       (cVar3 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                          (lVar5 + 0x18,lVar6), cVar3 != '\0')) {
      FUN_1412d2bb0(lVar5,param_1);
    }
  }
  FUN_1412bdd20(param_1 + 0x7e8,0);
  lVar5 = *(longlong *)(param_1 + 0x7f8);
  lVar4 = (longlong)*(int *)(param_1 + 0x800) * 0x270 + lVar5;
  for (; lVar5 != lVar4; lVar5 = lVar5 + 0x270) {
    cVar3 = FUN_140bf9670(0,lVar6);
    if ((cVar3 != '\0') ||
       (cVar3 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                          (lVar5 + 0x18,lVar6), cVar3 != '\0')) {
      FUN_1412d2bb0(lVar5,param_1);
    }
  }
  FUN_1412bdd20(param_1 + 0x7f8,0);
  plVar1 = (longlong *)(param_1 + 0x7a8);
  lVar6 = *plVar1;
  lVar5 = (longlong)*(int *)(param_1 + 0x7b0) * 0x270 + lVar6;
  for (; lVar6 != lVar5; lVar6 = lVar6 + 0x270) {
    FUN_1412d2bb0(lVar6,param_1);
  }
  FUN_1412bdd20(plVar1,0);
  plVar2 = (longlong *)(param_1 + 0x798);
  lVar6 = *plVar2;
  lVar5 = (longlong)*(int *)(param_1 + 0x7a0) * 0x270 + lVar6;
  for (; lVar6 != lVar5; lVar6 = lVar6 + 0x270) {
    FUN_1412d2bb0(lVar6,param_1);
  }
  FUN_1412bdd20(plVar2,0);
  lVar6 = *(longlong *)(param_1 + 0x7c8);
  lVar5 = (longlong)*(int *)(param_1 + 2000) * 0x270 + lVar6;
  for (; lVar6 != lVar5; lVar6 = lVar6 + 0x270) {
    FUN_1412d2bb0(lVar6,param_1);
  }
  FUN_1412bdd20(param_1 + 0x7c8,0);
  lVar6 = *(longlong *)(param_1 + 0x7b8);
  lVar5 = (longlong)*(int *)(param_1 + 0x7c0) * 0x270 + lVar6;
  for (; lVar6 != lVar5; lVar6 = lVar6 + 0x270) {
    FUN_1412d2bb0(lVar6,param_1);
  }
  FUN_1412bdd20(param_1 + 0x7b8,0);
  lVar6 = *plVar2;
  lVar5 = (longlong)*(int *)(param_1 + 0x7a0) * 0x270 + lVar6;
  local_res8 = param_1;
  for (; lVar6 != lVar5; lVar6 = lVar6 + 0x270) {
    FUN_1412b37f0(&local_res8,lVar6,plVar2);
    FUN_1412b37f0(&local_res8,lVar6,plVar1);
  }
  lVar6 = *plVar1;
  lVar5 = (longlong)*(int *)(param_1 + 0x7b0) * 0x270 + lVar6;
  local_res8 = param_1;
  for (; lVar6 != lVar5; lVar6 = lVar6 + 0x270) {
    FUN_1412b37f0(&local_res8,lVar6,plVar2);
    FUN_1412b37f0(&local_res8,lVar6,plVar1);
  }
  return;
}



// FUNCTION 1412cd6b0 FUN_1412cd6b0 body=197 status=ok
// SIG undefined FUN_1412cd6b0(void)

void FUN_1412cd6b0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong local_res8;
  
  local_res8 = param_1;
  cVar1 = FUN_1412b4160(&local_res8,param_2,param_1 + 0x7d8);
  if (cVar1 == '\0') {
    cVar1 = FUN_1412b4160(&local_res8,param_2,param_1 + 0x7e8);
    if (cVar1 == '\0') {
      cVar1 = FUN_1412b4160(&local_res8,param_2,param_1 + 0x7f8);
      if (cVar1 == '\0') {
        cVar1 = FUN_1412b4160(&local_res8,param_2,param_1 + 0x798);
        if (cVar1 == '\0') {
          cVar1 = FUN_1412b4160(&local_res8,param_2,param_1 + 0x7a8);
          if (cVar1 == '\0') {
            cVar1 = FUN_1412b4160(&local_res8,param_2,param_1 + 0x7b8);
            if (cVar1 == '\0') {
              FUN_1412b4160(&local_res8,param_2,param_1 + 0x7c8);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1412cd780 FUN_1412cd780 body=41 status=ok
// SIG undefined FUN_1412cd780(void)

void FUN_1412cd780(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1412bf4f0();
  if (lVar1 != 0) {
    FUN_1412cd6b0(param_1,lVar1);
    return;
  }
  return;
}



// FUNCTION 1412cd7b0 FUN_1412cd7b0 body=330 status=ok
// SIG undefined FUN_1412cd7b0(void)

void FUN_1412cd7b0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    FUN_1412bdd20();
    return;
  }
  iVar7 = (int)param_1[1];
  if (iVar7 != 0) {
    lVar6 = *param_1 + 0x1d0;
    do {
      if (*(longlong *)(lVar6 + 0x20) != 0) {
        FMemory::Free();
      }
      TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
      ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(lVar6);
      FUN_140bff340(lVar6 + -0x68);
      FUN_140c64420(lVar6 + -0x78);
      if (*(longlong *)(lVar6 + -200) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar6 + -0x128) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar6 + -0x148) != 0) {
        FMemory::Free();
      }
      plVar4 = *(longlong **)(lVar6 + -0x158);
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
      plVar4 = *(longlong **)(lVar6 + -0x170);
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
      lVar6 = lVar6 + 0x270;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 1412cd900 thunk_FUN_1414f94c0 body=5 status=ok
// SIG undefined thunk_FUN_1414f94c0(void)

void thunk_FUN_1414f94c0(void)

{
  FUN_1414f94c0();
  return;
}



// FUNCTION 1412cd930 FUN_1412cd930 body=329 status=ok
// SIG undefined FUN_1412cd930(void)

void FUN_1412cd930(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x8b8);
  lVar4 = (longlong)*(int *)(param_1 + 0x8c0) * 0x30 + lVar1;
  for (; lVar1 != lVar4; lVar1 = lVar1 + 0x30) {
    (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x3b0))(*(longlong **)(lVar1 + 0x10),0);
  }
  uVar5 = 0;
  *(undefined4 *)(param_1 + 0x8c0) = 0;
  if (*(int *)(param_1 + 0x8c4) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x8b8,0);
  }
  *(undefined8 *)(param_1 + 0x820) = 0;
  *(undefined4 *)(param_1 + 0x8e8) = 0;
  if (*(int *)(param_1 + 0x8ec) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x8e0,0);
  }
  *(undefined4 *)(param_1 + 0x900) = 0;
  if (*(int *)(param_1 + 0x904) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x8f8,0);
  }
  FUN_1412cd3a0(param_1);
  if (*(longlong *)(param_1 + 0x8c8) != 0) {
    FUN_142397540(*(longlong *)(param_1 + 0x8c8),1);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x470);
  uVar3 = (longlong)*(int *)(param_1 + 0x478) & 0x1fffffffffffffff;
  if (puVar2 + *(int *)(param_1 + 0x478) < puVar2) {
    uVar3 = uVar5;
  }
  if (uVar3 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar2 + 0x6d0))((longlong *)*puVar2,1);
      uVar5 = uVar5 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar5 != uVar3);
  }
  *(undefined4 *)(param_1 + 0x478) = 0;
  if (*(int *)(param_1 + 0x47c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo((ulonglong *)(param_1 + 0x470),0);
  }
  return;
}



// FUNCTION 1412cda80 FUN_1412cda80 body=116 status=ok
// SIG undefined FUN_1412cda80(void)

void FUN_1412cda80(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 0x790);
  if (*(char *)(param_1 + 0xd20) == '\x02') {
    FUN_1412d1910(param_1,uVar1);
    FUN_1414f90a0(param_1,uVar1);
  }
  uVar1 = FWeakObjectPtr::Get(param_1 + 0x788);
  if (*(char *)(param_1 + 0xd20) == '\x01') {
    FUN_1412d15b0(param_1,uVar1);
    FUN_1414f9020(param_1,uVar1);
  }
  return;
}



// FUNCTION 1412cdb00 ResizeTo body=130 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<624,16>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x270,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0xa41a41a41a41a41b) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 9);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x270,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 1412cdb90 FUN_1412cdb90 body=878 status=ok
// SIG undefined FUN_1412cdb90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412cdb90(longlong param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 in_RDX;
  longlong *plVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float local_res8 [2];
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48;
  undefined4 local_40;
  
  local_res8[0] = *(float *)(param_1 + 0x81c);
  local_88 = 0;
  local_78 = param_1;
  FUN_1412b3590(&local_78,in_RDX,param_3,param_4,param_1 + 0x7a8,&local_88,local_res8);
  FUN_1412b3590(&local_78,param_2,param_3,param_4,param_1 + 0x798,&local_88,local_res8);
  FUN_1412b3590(&local_78,param_2,param_3,param_4,param_1 + 0x7c8,&local_88,local_res8);
  FUN_1412b3590(&local_78,param_2,param_3,param_4,param_1 + 0x7b8,&local_88,local_res8);
  FUN_1412b3590(&local_78,param_2,param_3,param_4,param_1 + 0x7e8,&local_88,local_res8);
  FUN_1412b3590(&local_78,param_2,param_3,param_4,param_1 + 0x7d8,&local_88,local_res8);
  FUN_1412b3590(&local_78,param_2,param_3,param_4,param_1 + 0x7f8,&local_88,local_res8);
  plVar7 = *(longlong **)(param_1 + 0x808);
  plVar1 = plVar7 + *(int *)(param_1 + 0x810);
  fVar10 = local_res8[0];
  lVar8 = local_88;
  for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
    if (*(longlong *)(param_1 + 0x118) != 0) {
      FUN_14145f370();
    }
    if ((((*plVar7 != 0) && (cVar4 = FUN_1412a2ac0(*plVar7 + 0x4d0,param_1), cVar4 != '\0')) &&
        (lVar2 = *plVar7, *(char *)(lVar2 + 0x598) != '\0')) && (*(char *)(lVar2 + 0x599) == '\0'))
    {
      local_50 = *(undefined4 *)(param_4 + 1);
      local_58 = *param_4;
      local_60 = *(undefined4 *)(param_3 + 1);
      lVar2 = *(longlong *)(lVar2 + 0x168);
      local_68 = *param_3;
      if (lVar2 == 0) {
        local_80 = DAT_1468b5d98;
        plVar5 = &local_88;
        local_88 = _DAT_1468b5d90;
      }
      else {
        plVar5 = &local_78;
        local_70 = *(undefined4 *)(lVar2 + 0x228);
        local_78 = *(longlong *)(lVar2 + 0x220);
      }
      local_48 = *plVar5;
      local_40 = (undefined4)plVar5[1];
      fVar9 = (float)FMath::PointDistToLine(&local_48,&local_58,&local_68);
      if (fVar9 <= fVar10) {
        lVar8 = *plVar7;
        fVar10 = fVar9;
      }
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x820);
  if (lVar2 != lVar8) {
    if (lVar2 != 0) {
      lVar6 = UCheckBoxWidgetStyle::StaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar2 + 0x470,0)
        ;
      }
    }
    *(longlong *)(param_1 + 0x820) = lVar8;
    if (lVar8 == 0) {
      *(undefined4 *)(param_1 + 0x828) = 0x3f800000;
    }
    else {
      if (*(float *)(param_1 + 0x81c) <= 0.0) {
        fVar10 = 1.0;
      }
      else {
        fVar10 = fVar10 / *(float *)(param_1 + 0x81c);
      }
      *(float *)(param_1 + 0x828) = fVar10;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar8 + 0x460,0);
    }
  }
  return;
}



// FUNCTION 1412cdf00 FUN_1412cdf00 body=602 status=ok
// SIG undefined FUN_1412cdf00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412cdf00(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  longlong local_res8;
  undefined8 local_28;
  float local_20;
  undefined8 local_18;
  float local_10;
  
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    local_res8 = param_1;
    lVar4 = FUN_14145f370();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar4 = (**(code **)(*plVar1 + 0x678))(plVar1), lVar4 != 0)) {
      if (plVar1[400] == 0) {
        fVar6 = *(float *)(param_1 + 0xd0c);
      }
      else {
        fVar6 = (float)FUN_141298090();
        fVar6 = fVar6 * fVar6;
        *(float *)(param_1 + 0xd0c) = fVar6;
      }
      lVar4 = *(longlong *)(lVar4 + 0x168);
      if (lVar4 == 0) {
        local_18 = _DAT_1468b5d90;
        local_10 = DAT_1468b5d98;
      }
      else {
        local_18 = *(undefined8 *)(lVar4 + 0x220);
        local_10 = *(float *)(lVar4 + 0x228);
      }
      local_28 = local_18;
      local_20 = local_10;
      FUN_1412b4c30(&local_res8,&local_28,fVar6,param_1 + 0x7c8);
      FUN_1412b4c30(&local_res8,&local_28,*(undefined4 *)(param_1 + 0xd0c),param_1 + 0x7e8);
      cVar3 = FUN_140bf9690(0,param_1 + 0x978);
      if ((cVar3 != '\0') &&
         (lVar4 = FWeakObjectPtr::Get(param_1 + 0x978), *(char *)(lVar4 + 0x598) != '\0')) {
        lVar4 = FWeakObjectPtr::Get(param_1 + 0x978);
        lVar4 = *(longlong *)(lVar4 + 0x168);
        if (lVar4 == 0) {
          local_18 = _DAT_1468b5d90;
          local_10 = DAT_1468b5d98;
        }
        else {
          local_18 = *(undefined8 *)(lVar4 + 0x220);
          local_10 = *(float *)(lVar4 + 0x228);
        }
        fVar7 = (float)((ulonglong)local_18 >> 0x20) - local_28._4_4_;
        fVar6 = (float)local_18 - (float)local_28;
        if (fVar7 * fVar7 + fVar6 * fVar6 + (local_10 - local_20) * (local_10 - local_20) <
            *(float *)(param_1 + 0xd10)) {
          lVar4 = FWeakObjectPtr::Get(param_1 + 0x978);
          *(undefined1 *)(lVar4 + 0x598) = 0;
          uVar5 = FWeakObjectPtr::Get(param_1 + 0x978);
          FUN_1412cf480(param_1,uVar5,0,*(undefined1 *)(param_1 + 0x5a8));
          TBaseMulticastDelegate<void,bool,FString_const_&>::Broadcast
                    (param_1 + 0x540,0,&DAT_1468b5d90);
        }
      }
    }
  }
  return;
}



// FUNCTION 1412ce160 FUN_1412ce160 body=83 status=ok
// SIG undefined FUN_1412ce160(void)

void FUN_1412ce160(longlong param_1,int param_2)

{
  float fVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_10;
  
  *(int *)(param_1 + 0x10) = param_2;
  fVar1 = (float)param_2 / (float)*(int *)(param_1 + 8);
  local_20 = *(undefined4 *)(param_1 + 0xc);
  local_28 = CONCAT44(fVar1,fVar1);
  local_10 = local_20;
  (**(code **)(*(longlong *)(param_1 + -0x7a8) + 0x3f8))((longlong *)(param_1 + -0x7a8),&local_28);
  return;
}



// FUNCTION 1412ce1c0 FUN_1412ce1c0 body=659 status=ok
// SIG undefined FUN_1412ce1c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412ce1c0(longlong *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined1 local_70 [8];
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  FWeakObjectPtr::operator=(param_1 + 0xb2);
  if ((param_1[0xa7] != 0) && (param_1[0xab] != 0)) {
    FUN_1425a2750(param_1[0xa7],param_1[0xab]);
  }
  cVar4 = FUN_140bf9690(0,param_1 + 0xb2);
  if (cVar4 != '\0') {
    lVar5 = FWeakObjectPtr::Get(param_1 + 0xb2);
    lVar5 = *(longlong *)(lVar5 + 0x168);
    if (lVar5 == 0) {
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      local_38 = _DAT_146878340 & _DAT_146878350;
      uStack_34 = uRam0000000146878344 & uRam0000000146878354;
      uStack_30 = uRam0000000146878348 & uRam0000000146878358;
      uStack_2c = uRam000000014687834c & uRam000000014687835c;
      local_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = uRam000000014687834c;
    }
    else {
      local_48 = *(undefined4 *)(lVar5 + 0x220);
      uStack_44 = *(undefined4 *)(lVar5 + 0x224);
      uStack_40 = *(undefined4 *)(lVar5 + 0x228);
      uStack_3c = *(undefined4 *)(lVar5 + 0x22c);
      local_38 = *(uint *)(lVar5 + 0x230);
      uStack_34 = *(uint *)(lVar5 + 0x234);
      uStack_30 = *(uint *)(lVar5 + 0x238);
      uStack_2c = *(uint *)(lVar5 + 0x23c);
      local_58 = *(undefined4 *)(lVar5 + 0x210);
      uStack_54 = *(undefined4 *)(lVar5 + 0x214);
      uStack_50 = *(undefined4 *)(lVar5 + 0x218);
      uStack_4c = *(uint *)(lVar5 + 0x21c);
    }
    (**(code **)(*param_1 + 0x728))(param_1,&local_58,1,0);
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnAssociatedActorDestroyed",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_60,pwVar3 + 2,1);
    lVar7 = FWeakObjectPtr::Get(param_1 + 0xb2);
    lVar5 = local_60;
    FWeakObjectPtr::operator=(local_70,0);
    local_68 = 0;
    FWeakObjectPtr::operator=(local_70,param_1);
    local_68 = lVar5;
    if ((lVar5 != 0) && (lVar5 = FWeakObjectPtr::Get(local_70), lVar5 != 0)) {
      UObject::FindFunction(lVar5,local_68);
    }
    FUN_1406a5aa0(lVar7 + 0x290,local_70);
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 0xb2);
  if (lVar5 != 0) {
    lVar7 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnCharacterDied",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_60,pwVar3 + 2,1);
      FWeakObjectPtr::operator=(local_70,0);
      local_68 = 0;
      FWeakObjectPtr::operator=(local_70,param_1);
      local_68 = local_60;
      if ((local_60 != 0) && (lVar7 = FWeakObjectPtr::Get(local_70), lVar7 != 0)) {
        UObject::FindFunction(lVar7,local_68);
      }
      FUN_1406a5aa0(lVar5 + 0xf18,local_70);
    }
  }
  return;
}



// FUNCTION 1412ce460 FUN_1412ce460 body=500 status=ok
// SIG undefined FUN_1412ce460(void)

void FUN_1412ce460(longlong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined8 local_res8;
  
  FUN_1412ce1c0();
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x590);
  if (lVar4 != 0) {
    lVar5 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlayerEnteringVehicle",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res8,pwVar3 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<UDSMController>
                (lVar4 + 0x1d88,param_1,FUN_1412c9690,local_res8);
      pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlayerExitedVehicle",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res8,pwVar3 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<UDSMController>
                (lVar4 + 0x1db8,param_1,FUN_1412c96c0,local_res8);
      lVar4 = FUN_140c41820(lVar4);
      if (lVar4 != 0) {
        *(undefined1 *)(param_1 + 0x598) = 0;
        *(undefined1 *)(param_1 + 0x5ca) = 1;
        if (*(longlong *)(param_1 + 0x498) != 0) {
          FUN_1412cf480(*(longlong *)(param_1 + 0x498),param_1,0,0);
        }
      }
      FUN_1412cf110(param_1);
      return;
    }
  }
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x590);
  if (lVar4 != 0) {
    lVar5 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(undefined1 *)(param_1 + 0x5c9) = 1;
    }
  }
  return;
}



// FUNCTION 1412ce660 FUN_1412ce660 body=883 status=ok
// SIG undefined FUN_1412ce660(void)

void FUN_1412ce660(longlong *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined8 local_res8;
  longlong local_res18 [2];
  undefined1 local_58 [8];
  longlong local_50;
  longlong *local_48;
  int local_40;
  
  FUN_1412ce460();
  lVar4 = FWeakObjectPtr::Get(param_1 + 0xb2);
  if (lVar4 != 0) {
    lVar5 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(undefined1 *)((longlong)param_1 + 0x5c9) = 1;
      if (*(longlong *)(lVar4 + 0x12e0) != 0) {
        uVar6 = FUN_142a232e0();
        plVar7 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar6);
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x928))(plVar7,*(undefined8 *)(lVar4 + 0x12e0));
        }
      }
      if (*(longlong *)(lVar4 + 0x8d8) != 0) {
        *(undefined1 *)(param_1 + 0xc6) = 1;
      }
      FUN_141224090(lVar4,&local_48);
      pwVar12 = (wchar_t *)0x0;
      pwVar10 = (wchar_t *)
                ((ulonglong)((longlong)(local_48 + local_40) + (7 - (longlong)local_48)) >> 3);
      if (local_48 + local_40 < local_48) {
        pwVar10 = pwVar12;
      }
      pwVar11 = pwVar12;
      plVar7 = local_48;
      if (pwVar10 != (wchar_t *)0x0) {
        do {
          lVar5 = *plVar7;
          if (lVar5 != 0) {
            pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnSeatAttachStateChanged",L"::");
            pwVar3 = pwVar12;
            while (pwVar2 = pwVar8, pwVar2 != (wchar_t *)0x0) {
              pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
              pwVar3 = pwVar2;
            }
            FName::FName(local_res18,pwVar3 + 2,1);
            lVar9 = local_res18[0];
            FWeakObjectPtr::operator=(local_58,0);
            local_50 = 0;
            FWeakObjectPtr::operator=(local_58,param_1);
            local_50 = lVar9;
            local_res8 = 0;
            if ((lVar9 != 0) && (lVar9 = FWeakObjectPtr::Get(local_58), lVar9 != 0)) {
              UObject::FindFunction(lVar9,local_50);
            }
            FUN_1406a5aa0(lVar5 + 0x3f0,local_58);
          }
          pwVar11 = (wchar_t *)((longlong)pwVar11 + 1);
          plVar7 = plVar7 + 1;
        } while (pwVar11 != pwVar10);
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
      }
      pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnOtherCharacterEnteredVehicle",L"::");
      pwVar10 = pwVar12;
      while (pwVar3 = pwVar11, pwVar3 != (wchar_t *)0x0) {
        pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar10 = pwVar3;
      }
      FName::FName(&local_res8,pwVar10 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<UDSMController>
                (lVar4 + 0xac8,param_1,thunk_FUN_1412cc170,local_res8);
      pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnOtherCharacterExitedVehicle",L"::");
      pwVar10 = pwVar12;
      while (pwVar3 = pwVar11, pwVar3 != (wchar_t *)0x0) {
        pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar10 = pwVar3;
      }
      FName::FName(&local_res8,pwVar10 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<UDSMController>
                (lVar4 + 0xad8,param_1,thunk_FUN_1412cc170,local_res8);
      pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnSpawnByCatchARideChanged",L"::");
      while (pwVar11 = pwVar10, pwVar11 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar11 + 1,L"::");
        pwVar12 = pwVar11;
      }
      FName::FName(&local_res8,pwVar12 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<UDSMController>
                (lVar4 + 0x8c8,param_1,thunk_FUN_1412cc170,local_res8);
      FUN_1412cc170(param_1);
    }
  }
  return;
}



// FUNCTION 1412ce9e0 FUN_1412ce9e0 body=300 status=ok
// SIG undefined FUN_1412ce9e0(void)

void FUN_1412ce9e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  undefined4 uStack_1c;
  
  FUN_1412ceb10();
  if (param_2 != (longlong *)0x0) {
    uVar3 = UCircularThrobber::GetPrivateStaticClass();
    lVar4 = (**(code **)(*param_2 + 0x628))(param_2,uVar3);
    if (lVar4 != 0) {
      plVar1 = (longlong *)(lVar4 + 400);
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_144012f30;
        FWeakObjectPtr::operator=(plVar5 + 1,param_1 + -0x700);
        *(undefined4 *)(plVar5 + 2) = 0x412c9b50;
        *(undefined4 *)((longlong)plVar5 + 0x14) = 1;
        *(undefined4 *)(plVar5 + 3) = 0;
        *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_1c;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar5[5] = lVar6;
        *plVar5 = (longlong)&PTR_FUN_144012f78;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
        iVar2 = *(int *)(lVar4 + 0x198);
        *(int *)(lVar4 + 0x198) = iVar2 + 1;
        if (*(int *)(lVar4 + 0x19c) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
        *puVar7 = plVar5;
        *(undefined4 *)(puVar7 + 1) = 3;
      }
      FUN_1412c9b50(param_1 + -0x700,lVar4,*(undefined8 *)(lVar4 + 0x180));
    }
  }
  return;
}



// FUNCTION 1412ceb10 FUN_1412ceb10 body=843 status=ok
// SIG undefined FUN_1412ceb10(void)

void FUN_1412ceb10(longlong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  char cVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  longlong local_res10;
  undefined1 local_38 [8];
  longlong local_30;
  
  FWeakObjectPtr::operator=(param_1 + 0x38);
  cVar3 = FUN_140bf9690(0,param_1 + 0x38);
  pwVar8 = (wchar_t *)0x0;
  if (cVar3 != '\0') {
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnAssociatedActorDestroyed",L"::");
    pwVar7 = pwVar8;
    while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar7 = pwVar2;
    }
    FName::FName(&local_res10,pwVar7 + 2,1);
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x38);
    lVar6 = local_res10;
    FWeakObjectPtr::operator=(local_38,0);
    local_30 = 0;
    FWeakObjectPtr::operator=(local_38,param_1 + -0x700);
    local_30 = lVar6;
    if ((lVar6 != 0) && (lVar6 = FWeakObjectPtr::Get(local_38), lVar6 != 0)) {
      UObject::FindFunction(lVar6,local_30);
    }
    FUN_1406a5aa0(lVar5 + 0x290,local_38);
  }
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x38);
  if (lVar6 != 0) {
    lVar5 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnCharacterDied",L"::");
      pwVar7 = pwVar8;
      while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
        pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar7 = pwVar2;
      }
      FName::FName(&local_res10,pwVar7 + 2,1);
      lVar5 = local_res10;
      FWeakObjectPtr::operator=(local_38,0);
      local_30 = 0;
      FWeakObjectPtr::operator=(local_38,param_1 + -0x700);
      local_30 = lVar5;
      if ((lVar5 != 0) && (lVar5 = FWeakObjectPtr::Get(local_38), lVar5 != 0)) {
        UObject::FindFunction(lVar5,local_30);
      }
      FUN_1406a5aa0(lVar6 + 0xf18,local_38);
      pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnCharacterEnteringVehicle",L"::");
      pwVar7 = pwVar8;
      while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
        pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar7 = pwVar2;
      }
      FName::FName(&local_res10,pwVar7 + 2,1);
      lVar5 = local_res10;
      FWeakObjectPtr::operator=(local_38,0);
      local_30 = 0;
      FWeakObjectPtr::operator=(local_38,param_1 + -0x700);
      local_30 = lVar5;
      if ((lVar5 != 0) && (lVar5 = FWeakObjectPtr::Get(local_38), lVar5 != 0)) {
        UObject::FindFunction(lVar5,local_30);
      }
      FUN_1406a5aa0(lVar6 + 0x1d88,local_38);
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnCharacterExitedVehicle",L"::");
      while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar8 = pwVar4;
      }
      FName::FName(&local_res10,pwVar8 + 2,1);
      FWeakObjectPtr::operator=(local_38,0);
      local_30 = 0;
      FWeakObjectPtr::operator=(local_38,param_1 + -0x700);
      local_30 = local_res10;
      if ((local_res10 != 0) && (lVar5 = FWeakObjectPtr::Get(local_38), lVar5 != 0)) {
        UObject::FindFunction(lVar5,local_30);
      }
      FUN_1406a5aa0(lVar6 + 0x1db8,local_38);
      if (*(longlong *)(lVar6 + 0x1e40) != 0) {
        *(undefined1 *)(param_1 + 0x40) = 0;
        if (*(longlong *)(param_1 + 0x48) != 0) {
          FUN_1412cf680(*(longlong *)(param_1 + 0x48),param_1 + -0x700,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 1412cee60 FUN_1412cee60 body=108 status=ok
// SIG undefined FUN_1412cee60(void)

void FUN_1412cee60(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FWeakObjectPtr::operator=(param_1 + 0x48);
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x48);
  if (lVar2 != 0) {
    lVar3 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(undefined1 *)(param_1 + 0x50) = 1;
    }
  }
  return;
}



// FUNCTION 1412ceef0 FUN_1412ceef0 body=7 status=ok
// SIG undefined FUN_1412ceef0(void)

void FUN_1412ceef0(undefined8 param_1)

{
  FUN_1412d1c00(param_1,0);
  return;
}



// FUNCTION 1412cef00 FUN_1412cef00 body=249 status=ok
// SIG undefined FUN_1412cef00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412cef00(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  puVar3 = (undefined8 *)(param_1 + 0x5c0);
  uStack_30 = (longlong *)param_2[1];
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
    UNLOCK();
  }
  if (&local_38 != puVar3) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    uVar6 = *puVar3;
    plVar5 = *(longlong **)(param_1 + 0x5c8);
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)puVar3 = (undefined4)local_38;
    *(undefined4 *)(param_1 + 0x5c4) = local_38._4_4_;
    *(undefined4 *)(param_1 + 0x5c8) = (undefined4)uStack_30;
    *(undefined4 *)(param_1 + 0x5cc) = uStack_30._4_4_;
    local_38 = uVar6;
    uStack_30 = plVar5;
  }
  plVar5 = uStack_30;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_30 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_30)(uStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_30 + 8))(uStack_30,1);
      }
    }
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 1412cf020 FUN_1412cf020 body=112 status=ok
// SIG undefined FUN_1412cf020(void)

void FUN_1412cf020(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(char *)(param_1 + 0x598) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x498);
  if ((lVar1 == 0) || (lVar2 = *(longlong *)(param_1 + 0x4d0), lVar2 == 0)) {
    return;
  }
  if ((param_2 != '\0') &&
     (((*(char *)(lVar1 + 0x5aa) != '\0' && (*(char *)(lVar2 + 0x130) != '\0')) ||
      ((*(char *)(lVar1 + 0x5a8) != '\0' && (*(char *)(lVar2 + 0x131) != '\0')))))) {
    FUN_1412cf480(lVar1,param_1,1,*(undefined1 *)(lVar1 + 0x5a8));
    return;
  }
  FUN_1412cf480(lVar1,param_1,0,*(undefined1 *)(lVar1 + 0x5a8));
  return;
}



// FUNCTION 1412cf090 FUN_1412cf090 body=124 status=ok
// SIG undefined FUN_1412cf090(void)

void FUN_1412cf090(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + 0x40) = param_2;
  if ((*(longlong *)(param_1 + 0x48) != 0) &&
     (lVar1 = FUN_1412bf4f0(*(longlong *)(param_1 + 0x48),param_1 + -0x700), lVar1 != 0)) {
    if ((*(char *)(param_1 + 0x40) == '\0') ||
       (((lVar2 = *(longlong *)(param_1 + 0x48), *(char *)(lVar2 + 0x5aa) == '\0' ||
         (*(char *)(lVar1 + 0x9b) == '\0')) &&
        ((*(char *)(lVar2 + 0x5a8) == '\0' || (*(char *)(lVar1 + 0x9c) == '\0')))))) {
      lVar2 = *(longlong *)(param_1 + 0x48);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    FUN_1412cf680(lVar2,param_1 + -0x700,uVar3);
  }
  return;
}



// FUNCTION 1412cf110 FUN_1412cf110 body=580 status=ok
// SIG undefined FUN_1412cf110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412cf110(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined8 local_98 [2];
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
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x590);
  if (lVar2 != 0) {
    lVar3 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (*(longlong *)(lVar2 + 0x2c70) == 0) {
        if (*(char *)(lVar2 + 0x128) == '\x03') {
          local_98[0] = 0;
          uVar4 = AActor::GetWorldTimerManager(param_1);
          plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
          if (plVar5 != (longlong *)0x0) {
            *plVar5 = (longlong)&PTR_FUN_143f4d170;
            FWeakObjectPtr::operator=(plVar5 + 1,param_1);
            plVar5[2] = (longlong)FUN_1412cf110;
            lVar2 = FDelegateHandle::GenerateNewID();
            plVar5[4] = lVar2;
            *plVar5 = (longlong)&PTR_FUN_143f4d1b8;
          }
          local_88 = 0;
          local_80 = 0;
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x30))(plVar5,&local_88);
          }
          FWeakObjectPtr::operator=(local_78,0);
          local_a0 = 0xbf800000;
          local_a8 = 0;
          local_70 = 0;
          local_38 = (longlong *)0x0;
          local_28 = 0;
          local_68 = AK::MemoryMgr::StartProfileThreadUsage;
          FUN_142880850(uVar4,local_98,&local_88,0x3dcccccd);
          if (local_28 != 0) {
            plVar6 = local_58;
            if (local_38 != (longlong *)0x0) {
              plVar6 = local_38;
            }
            if (plVar6 != (longlong *)0x0) {
              (**(code **)(*plVar6 + 0x10))(plVar6,0);
            }
          }
          if (local_38 != (longlong *)0x0) {
            FMemory::Free();
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x28))(plVar5,0);
            lVar2 = FMemory::Realloc(plVar5,0,0);
            if (lVar2 != 0) {
              FMemory::Free(lVar2);
            }
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x5cb) = 0;
        }
      }
      else if ((*(longlong *)(param_1 + 0x498) == 0) ||
              (*(longlong *)(*(longlong *)(param_1 + 0x498) + 0x118) !=
               *(longlong *)(lVar2 + 0x2c70))) {
        *(undefined1 *)(param_1 + 0x5cb) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x5cb) = 1;
      }
    }
  }
  return;
}



// FUNCTION 1412cf370 FUN_1412cf370 body=5 status=ok
// SIG undefined FUN_1412cf370(void)

void FUN_1412cf370(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return;
}



// FUNCTION 1412cf380 FUN_1412cf380 body=255 status=ok
// SIG undefined FUN_1412cf380(void)

void FUN_1412cf380(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined8 *puVar5;
  
  iVar1 = (int)param_1[1];
  iVar2 = (int)param_2;
  if (iVar1 < iVar2) {
    iVar4 = iVar2 - iVar1;
    *(int *)(param_1 + 1) = iVar2;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
    }
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x50 + *param_1);
    if (iVar4 != 0) {
      piVar3 = (int *)((longlong)puVar5 + 0x4c);
      do {
        piVar3[-0x11] = 0;
        piVar3[-0x10] = 0;
        piVar3[-0xf] = 0;
        piVar3[-0xe] = 0;
        piVar3[-0xd] = 0;
        piVar3[-0xc] = 0;
        piVar3[-0xb] = -1;
        piVar3[-10] = 0;
        *puVar5 = &PTR_FUN_144278ac0;
        piVar3[-3] = 0;
        piVar3[-2] = 0;
        piVar3[-1] = 0;
        piVar3[0] = 0;
        piVar3[-9] = -1;
        piVar3[-8] = 0;
        piVar3[-5] = 0;
        piVar3[-4] = 0;
        piVar3[-1] = 0;
        if ((*piVar3 < 0) && (*piVar3 != 0)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(piVar3 + -3,0);
        }
        if (*(undefined2 **)(piVar3 + -3) != (undefined2 *)0x0) {
          **(undefined2 **)(piVar3 + -3) = 0;
        }
        piVar3[-7] = 0;
        puVar5 = puVar5 + 10;
        piVar3 = piVar3 + 0x14;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else if (iVar2 < iVar1) {
    FUN_140cc9910(param_1,param_2,iVar1 - iVar2,param_3);
    return;
  }
  return;
}



// FUNCTION 1412cf480 FUN_1412cf480 body=499 status=ok
// SIG undefined FUN_1412cf480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412cf480(longlong param_1,longlong *param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  lVar3 = UCheckBoxWidgetStyle::StaticClass();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  if ((*(char *)((longlong)param_2 + 0x59a) == '\0') && (param_3 != '\0')) {
    if (*(longlong *)(param_1 + 0x118) != 0) {
      FUN_14145f370();
    }
    cVar2 = FUN_1412a2ac0(param_2 + 0x9a,param_1);
    if (((cVar2 != '\0') && ((char)param_2[0xb3] != '\0')) &&
       (*(char *)((longlong)param_2 + 0x599) == '\0')) {
      (**(code **)(*param_2 + 0x310))(param_2,0);
      if (param_2[0x2d] != 0) {
        FUN_142398ec0(param_2[0x2d],1,2);
      }
      if ((*(char *)(param_1 + 0x5a9) != '\0') && (*(char *)((longlong)param_2 + 0x58c) != '\0')) {
        lVar3 = param_2[0xb4];
        if (lVar3 == 0) {
          uVar4 = FUN_1429bed90();
          lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar4);
          param_2[0xb4] = lVar3;
          if (lVar3 == 0) goto LAB_1412cf5a2;
        }
        FUN_1423988d0(lVar3,1);
      }
LAB_1412cf5a2:
      FUN_1412b6150(param_1,param_2,1);
      goto LAB_1412cf5d6;
    }
  }
  (**(code **)(*param_2 + 0x310))(param_2,1);
  if (param_2[0x2d] != 0) {
    FUN_142398ec0(param_2[0x2d],0,2);
  }
LAB_1412cf5d6:
  cVar2 = FUN_140bf9690(0,param_2 + 0xb2);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(param_2 + 0xb2);
    lVar3 = *(longlong *)(lVar3 + 0x168);
    if (lVar3 == 0) {
      local_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      local_18 = _DAT_146878340 & _DAT_146878350;
      uStack_14 = uRam0000000146878344 & uRam0000000146878354;
      uStack_10 = uRam0000000146878348 & uRam0000000146878358;
      uStack_c = uRam000000014687834c & uRam000000014687835c;
      local_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = uRam000000014687834c;
    }
    else {
      local_28 = *(undefined4 *)(lVar3 + 0x220);
      uStack_24 = *(undefined4 *)(lVar3 + 0x224);
      uStack_20 = *(undefined4 *)(lVar3 + 0x228);
      uStack_1c = *(undefined4 *)(lVar3 + 0x22c);
      local_18 = *(uint *)(lVar3 + 0x230);
      uStack_14 = *(uint *)(lVar3 + 0x234);
      uStack_10 = *(uint *)(lVar3 + 0x238);
      uStack_c = *(uint *)(lVar3 + 0x23c);
      local_38 = *(undefined4 *)(lVar3 + 0x210);
      uStack_34 = *(undefined4 *)(lVar3 + 0x214);
      uStack_30 = *(undefined4 *)(lVar3 + 0x218);
      uStack_2c = *(uint *)(lVar3 + 0x21c);
    }
    (**(code **)(*param_2 + 0x728))(param_2,&local_38,1,0);
  }
  FUN_1414f5b10(param_2);
  return;
}



// FUNCTION 1412cf680 FUN_1412cf680 body=292 status=ok
// SIG undefined FUN_1412cf680(void)

void FUN_1412cf680(longlong param_1,longlong param_2,char param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  
  if (param_2 != 0) {
    lVar2 = FUN_1414f39c0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar2 = param_2;
    if (!bVar1) {
      lVar2 = 0;
    }
    if ((param_3 == '\0') || ((lVar2 != 0 && (*(char *)(lVar2 + 0x740) == '\0')))) {
      cVar6 = '\0';
    }
    else {
      cVar6 = '\x01';
    }
    FUN_142398ec0(param_2,cVar6,1);
    uVar3 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar3);
    if ((plVar4 != (longlong *)0x0) &&
       ((**(code **)(*plVar4 + 0x30))(plVar4), *(char *)(param_1 + 0x5a9) != '\0')) {
      (**(code **)(*plVar4 + 0x68))(plVar4,0);
    }
    if (cVar6 != '\0') {
      if (*(char *)(param_1 + 0x5a8) == '\0') {
        lVar2 = *(longlong *)(param_1 + 0x948);
      }
      else {
        lVar2 = *(longlong *)(param_1 + 0x940);
      }
      lVar5 = UMovieSceneSection::GetChannelProxy(param_2);
      if (lVar5 != lVar2) {
        if (*(char *)(param_1 + 0x5a8) == '\0') {
          uVar3 = *(undefined8 *)(param_1 + 0x948);
        }
        else {
          uVar3 = *(undefined8 *)(param_1 + 0x940);
        }
        FUN_1412d0b30(param_2,uVar3);
      }
    }
  }
  return;
}



// FUNCTION 1412cf7e0 FUN_1412cf7e0 body=336 status=ok
// SIG undefined FUN_1412cf7e0(void)

undefined8 FUN_1412cf7e0(longlong param_1,longlong param_2,char param_3,char param_4)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_38;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined1 local_18 [16];
  
  fVar3 = 0.0;
  fVar4 = 0.0;
  fVar5 = 0.0;
  fVar6 = 0.0;
  fVar7 = *(float *)(param_2 + 0x10) + 0.0;
  fVar8 = *(float *)(param_2 + 0x14) + 0.0;
  fVar9 = *(float *)(param_1 + 0x588) + *(float *)(param_2 + 0x18);
  fVar10 = *(float *)(param_2 + 0x1c) + 0.0;
  *(float *)(param_2 + 0x10) = fVar7;
  *(float *)(param_2 + 0x14) = fVar8;
  *(float *)(param_2 + 0x18) = fVar9;
  *(float *)(param_2 + 0x1c) = fVar10;
  if (param_3 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x168);
    if (lVar1 != 0) {
      fVar3 = *(float *)(lVar1 + 0x220);
      fVar4 = *(float *)(lVar1 + 0x224);
      fVar5 = *(float *)(lVar1 + 0x228);
      fVar6 = *(float *)(lVar1 + 0x22c);
    }
    local_38 = CONCAT44(fVar8,fVar7);
    fStack_30 = fVar9;
    fStack_2c = fVar10;
    local_28 = fVar3;
    fStack_24 = fVar4;
    fStack_20 = fVar5;
    fStack_1c = fVar6;
    if (((ABS(fVar7 - fVar3) <= 1e-08) && (ABS(fVar8 - fVar4) <= 1e-08)) &&
       (ABS(fVar9 - fVar5) <= 1e-08)) {
      return 0;
    }
  }
  if ((*(longlong *)(param_1 + 0x498) != 0) &&
     ((((param_3 != '\0' || (param_4 != '\0')) ||
       (*(char *)(*(longlong *)(param_1 + 0x498) + 0x5aa) != '\0')) &&
      ((*(longlong *)(param_1 + 0x538) != 0 && (local_38 = 0, *(longlong *)(param_1 + 0x540) != 0)))
      ))) {
    local_38 = CONCAT44(fVar8,fVar7);
    fStack_30 = fVar9;
    pfVar2 = (float *)FLinearColor::FLinearColor(local_18,&local_38);
    local_28 = *pfVar2;
    fStack_24 = pfVar2[1];
    fStack_20 = pfVar2[2];
    fStack_1c = pfVar2[3];
    FUN_1425a2be0(*(undefined8 *)(param_1 + 0x538),*(undefined8 *)(param_1 + 0x540),&local_28);
  }
  FUN_14223d270(param_1,param_2,0,0,0);
  return 1;
}



// FUNCTION 1412cf930 FUN_1412cf930 body=2146 status=ok
// SIG undefined FUN_1412cf930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1412cf930(longlong *param_1,undefined4 *param_2,char param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  int iVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  longlong lVar19;
  undefined1 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined8 local_d8;
  float fStack_d0;
  float fStack_cc;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined1 local_98 [16];
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar20 = 0;
  if (*(char *)((longlong)param_1 + 0x5c9) == '\0') {
    fVar29 = *(float *)(param_1 + 0xb1);
    param_2[4] = (float)param_2[4] + 0.0;
    param_2[5] = (float)param_2[5] + 0.0;
    param_2[6] = fVar29 + (float)param_2[6];
    param_2[7] = (float)param_2[7] + 0.0;
  }
  if (param_3 == '\0') {
    lVar10 = param_1[0x2d];
    if (lVar10 == 0) {
      fVar29 = 0.0;
      fVar30 = 0.0;
      fStack_b0 = 0.0;
      uStack_ac = 0;
    }
    else {
      fVar29 = *(float *)(lVar10 + 0x220);
      fVar30 = *(float *)(lVar10 + 0x224);
      fStack_b0 = *(float *)(lVar10 + 0x228);
      uStack_ac = *(undefined4 *)(lVar10 + 0x22c);
    }
    local_c8 = *(longlong *)(param_2 + 4);
    uStack_c0 = *(longlong *)(param_2 + 6);
    local_b8 = CONCAT44(fVar30,fVar29);
    if (((1e-08 < ABS((float)param_2[4] - fVar29)) || (1e-08 < ABS((float)param_2[5] - fVar30))) ||
       (1e-08 < ABS((float)param_2[6] - fStack_b0))) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_1412cfa24;
  }
  else {
LAB_1412cfa24:
    if ((param_1[0xa7] != 0) && (local_d8 = 0, param_1[0xa8] != 0)) {
      if (((param_1[0x93] == 0) ||
          (((char)param_1[0xb9] != '\0' || (*(char *)((longlong)param_1 + 0x5c9) == '\0')))) ||
         (*(char *)(param_1[0x93] + 0x5a9) == '\0')) {
        local_b8 = *(longlong *)(param_2 + 4);
        fStack_b0 = (float)param_2[6];
        puVar16 = &local_d8;
        puVar17 = &local_b8;
      }
      else {
        puVar17 = (undefined8 *)&DAT_1468b5d90;
        puVar16 = &local_b8;
      }
      plVar8 = (longlong *)FLinearColor::FLinearColor(puVar16,puVar17);
      local_c8 = *plVar8;
      uStack_c0 = plVar8[1];
      FUN_1425a2be0(param_1[0xa7],param_1[0xa8],&local_c8);
    }
    puVar18 = param_2;
    if ((param_1[0x93] != 0) && (*(char *)(param_1[0x93] + 0x5aa) != '\0')) {
      local_88 = _DAT_146878340 & _DAT_146878350;
      uStack_84 = uRam0000000146878344 & uRam0000000146878354;
      uStack_80 = uRam0000000146878348 & uRam0000000146878358;
      uStack_7c = uRam000000014687834c & uRam000000014687835c;
      local_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_9c = uRam000000014687834c;
      local_98._4_4_ = DAT_1468b5d94;
      local_98._0_4_ = DAT_1468b5d90;
      local_98._8_4_ = DAT_1468b5d98;
      local_98._12_4_ = 0;
      puVar18 = &local_a8;
    }
    local_e8 = 0;
    FUN_14223d270(param_1,puVar18,0,0);
    lVar10 = param_1[0x93];
    if (((lVar10 != 0) && (*(char *)(lVar10 + 0x5a9) != '\0')) &&
       (*(char *)((longlong)param_1 + 0x5cb) != '\0')) {
      lVar19 = *(longlong *)(lVar10 + 0x898);
      lVar10 = lVar19 + (longlong)*(int *)(lVar10 + 0x8a0) * 0x28;
      for (; lVar19 != lVar10; lVar19 = lVar19 + 0x28) {
        if (*(longlong *)(lVar19 + 8) != 0) {
          local_b8 = *(longlong *)(param_2 + 4);
          fStack_b0 = (float)param_2[6];
          plVar8 = (longlong *)FLinearColor::FLinearColor(&local_d8,&local_b8);
          local_c8 = *plVar8;
          uStack_c0 = plVar8[1];
          FUN_1425a2be0(*(undefined8 *)(lVar19 + 8),param_1[0xb8],&local_c8);
        }
      }
    }
    uVar20 = 1;
  }
  fVar30 = 0.0;
  fVar29 = 0.0;
  local_b8 = 0;
  fStack_b0 = 0.0;
  if (*(char *)((longlong)param_1 + 0x5c9) == '\0') {
    plVar8 = (longlong *)(**(code **)(*param_1 + 0x750))(param_1);
    if (plVar8 == (longlong *)0x0) {
LAB_1412cfde8:
      plVar15 = param_1 + 0xb2;
      fVar5 = (float)FUN_1405dc8f0(plVar15,plVar8);
      iVar14 = (int)plVar15;
      if (SUB41(fVar5,0) != '\0') {
        iVar14 = 0;
        fVar5 = (float)FUN_140bf9690(0,param_1 + 0xb2);
        if (SUB41(fVar5,0) != '\0') {
          iVar14 = (int)param_1 + 0x590;
          lVar9 = FWeakObjectPtr::Get();
          lVar10 = *(longlong *)(lVar9 + 0x168);
          fVar5 = DAT_1468b5da8;
          lVar19 = DAT_1468b5da0;
          if (lVar10 != 0) {
            fVar29 = *(float *)(lVar10 + 0x210);
            local_d8 = *(undefined8 *)(lVar10 + 0x210);
            fStack_d0 = *(float *)(lVar10 + 0x218);
            fStack_cc = *(float *)(lVar10 + 0x21c);
            auVar25._4_4_ = -(uint)(*(float *)(lVar10 + 0x254) != *(float *)(lVar10 + 0x214));
            auVar25._0_4_ = -(uint)(*(float *)(lVar10 + 0x250) != fVar29);
            auVar25._8_4_ = -(uint)(*(float *)(lVar10 + 600) != fStack_d0);
            auVar25._12_4_ = -(uint)(*(float *)(lVar10 + 0x25c) != fStack_cc);
            iVar6 = movmskps((int)lVar9,auVar25);
            if (iVar6 == 0) goto LAB_1412cfdd5;
            puVar16 = &local_d8;
            *(float *)(lVar10 + 0x250) = fVar29;
            *(float *)(lVar10 + 0x254) = *(float *)(lVar10 + 0x214);
            *(float *)(lVar10 + 600) = fStack_d0;
            *(float *)(lVar10 + 0x25c) = fStack_cc;
            puVar17 = (undefined8 *)FQuat::Rotator(puVar16,&local_c8);
            iVar14 = (int)puVar16;
            *(undefined8 *)(lVar10 + 0x260) = *puVar17;
            fVar5 = *(float *)(puVar17 + 1);
            *(float *)(lVar10 + 0x268) = fVar5;
            lVar19 = *(longlong *)(lVar10 + 0x260);
          }
          goto LAB_1412cfe8b;
        }
      }
    }
    else {
      lVar10 = FUN_1413f82e0();
      if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
          lVar10 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_1412cfde8;
      plVar15 = plVar8;
      plVar11 = (longlong *)(**(code **)(*plVar8 + 0x798))(plVar8,&local_c8);
      iVar14 = (int)plVar15;
      lVar10 = *plVar11;
      fVar29 = (float)((ulonglong)lVar10 >> 0x20);
      fStack_b0 = *(float *)(plVar11 + 1);
      uVar7 = _finite((double)(float)lVar10);
      uVar12 = (ulonglong)uVar7;
      local_b8 = lVar10;
      if (uVar7 == 0) {
LAB_1412cfd75:
        fVar30 = (float)CONCAT71((int7)(uVar12 >> 8),1);
      }
      else {
        uVar7 = _finite((double)fVar29);
        uVar12 = (ulonglong)uVar7;
        if (uVar7 == 0) goto LAB_1412cfd75;
        uVar7 = _finite((double)fStack_b0);
        uVar12 = (ulonglong)uVar7;
        if (uVar7 == 0) goto LAB_1412cfd75;
        fVar30 = (float)(uVar7 & 0xffffff00);
      }
      fVar5 = fVar30;
      if (SUB41(fVar30,0) != '\0') {
        lVar10 = plVar8[0x2d];
        fVar5 = DAT_1468b5da8;
        lVar19 = DAT_1468b5da0;
        if (lVar10 != 0) {
          fVar29 = *(float *)(lVar10 + 0x210);
          local_d8 = *(undefined8 *)(lVar10 + 0x210);
          fStack_d0 = *(float *)(lVar10 + 0x218);
          fStack_cc = *(float *)(lVar10 + 0x21c);
          auVar22._4_4_ = -(uint)(*(float *)(lVar10 + 0x254) != *(float *)(lVar10 + 0x214));
          auVar22._0_4_ = -(uint)(*(float *)(lVar10 + 0x250) != fVar29);
          auVar22._8_4_ = -(uint)(*(float *)(lVar10 + 600) != fStack_d0);
          auVar22._12_4_ = -(uint)(*(float *)(lVar10 + 0x25c) != fStack_cc);
          iVar6 = movmskps(fVar30,auVar22);
          if (iVar6 != 0) {
            puVar16 = &local_d8;
            *(float *)(lVar10 + 0x250) = fVar29;
            *(float *)(lVar10 + 0x254) = *(float *)(lVar10 + 0x214);
            *(float *)(lVar10 + 600) = fStack_d0;
            *(float *)(lVar10 + 0x25c) = fStack_cc;
            puVar17 = (undefined8 *)FQuat::Rotator(puVar16,&local_c8);
            iVar14 = (int)puVar16;
            *(undefined8 *)(lVar10 + 0x260) = *puVar17;
            *(undefined4 *)(lVar10 + 0x268) = *(undefined4 *)(puVar17 + 1);
          }
LAB_1412cfdd5:
          fVar5 = *(float *)(lVar10 + 0x268);
          lVar19 = *(longlong *)(lVar10 + 0x260);
        }
LAB_1412cfe8b:
        fVar29 = (float)((ulonglong)lVar19 >> 0x20);
        local_b8 = (ulonglong)(uint)fVar29 << 0x20;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,fVar5);
        fStack_d0 = fVar5;
        local_c8 = lVar19;
      }
    }
    fStack_b0 = 0.0;
    fVar30 = 0.0;
  }
  else {
    iVar14 = 0;
    fVar5 = (float)FUN_140bf9690(0,param_1 + 0xb2);
    fVar27 = 0.0;
    if (SUB41(fVar5,0) == '\0') goto LAB_1412cfec8;
    iVar14 = (int)param_1 + 0x590;
    lVar9 = FWeakObjectPtr::Get();
    lVar10 = *(longlong *)(lVar9 + 0x168);
    fVar5 = DAT_1468b5da8;
    lVar19 = DAT_1468b5da0;
    if (lVar10 != 0) {
      fVar29 = *(float *)(lVar10 + 0x210);
      local_d8 = *(undefined8 *)(lVar10 + 0x210);
      fStack_d0 = *(float *)(lVar10 + 0x218);
      fStack_cc = *(float *)(lVar10 + 0x21c);
      auVar21._4_4_ = -(uint)(*(float *)(lVar10 + 0x254) != *(float *)(lVar10 + 0x214));
      auVar21._0_4_ = -(uint)(*(float *)(lVar10 + 0x250) != fVar29);
      auVar21._8_4_ = -(uint)(*(float *)(lVar10 + 600) != fStack_d0);
      auVar21._12_4_ = -(uint)(*(float *)(lVar10 + 0x25c) != fStack_cc);
      iVar6 = movmskps((int)lVar9,auVar21);
      if (iVar6 != 0) {
        puVar16 = &local_d8;
        *(float *)(lVar10 + 0x250) = fVar29;
        *(float *)(lVar10 + 0x254) = *(float *)(lVar10 + 0x214);
        *(float *)(lVar10 + 600) = fStack_d0;
        *(float *)(lVar10 + 0x25c) = fStack_cc;
        puVar17 = (undefined8 *)FQuat::Rotator(puVar16,&local_c8);
        iVar14 = (int)puVar16;
        *(undefined8 *)(lVar10 + 0x260) = *puVar17;
        *(undefined4 *)(lVar10 + 0x268) = *(undefined4 *)(puVar17 + 1);
      }
      fVar5 = *(float *)(lVar10 + 0x268);
      lVar19 = *(longlong *)(lVar10 + 0x260);
    }
    fVar30 = (float)lVar19;
    fVar29 = (float)((ulonglong)lVar19 >> 0x20);
    fStack_d0 = fVar5;
    fStack_b0 = fVar5;
    local_b8._4_4_ = fVar29;
  }
  local_b8 = CONCAT44(local_b8._4_4_,fVar30);
  fVar27 = fStack_b0;
LAB_1412cfec8:
  if (param_1[0xa7] != 0) {
    if (param_3 == '\0') {
      lVar10 = param_1[0x2d];
      fStack_d0 = DAT_1468b5da8;
      lVar19 = DAT_1468b5da0;
      if (lVar10 != 0) {
        fVar1 = *(float *)(lVar10 + 0x210);
        local_d8 = *(undefined8 *)(lVar10 + 0x210);
        fStack_d0 = *(float *)(lVar10 + 0x218);
        fStack_cc = *(float *)(lVar10 + 0x21c);
        auVar23._4_4_ = -(uint)(*(float *)(lVar10 + 0x254) != *(float *)(lVar10 + 0x214));
        auVar23._0_4_ = -(uint)(*(float *)(lVar10 + 0x250) != fVar1);
        auVar23._8_4_ = -(uint)(*(float *)(lVar10 + 600) != fStack_d0);
        auVar23._12_4_ = -(uint)(*(float *)(lVar10 + 0x25c) != fStack_cc);
        iVar6 = movmskps(fVar5,auVar23);
        if (iVar6 != 0) {
          puVar16 = &local_d8;
          *(float *)(lVar10 + 0x250) = fVar1;
          *(float *)(lVar10 + 0x254) = *(float *)(lVar10 + 0x214);
          *(float *)(lVar10 + 600) = fStack_d0;
          *(float *)(lVar10 + 0x25c) = fStack_cc;
          puVar17 = (undefined8 *)FQuat::Rotator(puVar16,&local_c8);
          iVar14 = (int)puVar16;
          *(undefined8 *)(lVar10 + 0x260) = *puVar17;
          *(undefined4 *)(lVar10 + 0x268) = *(undefined4 *)(puVar17 + 1);
        }
        fStack_d0 = *(float *)(lVar10 + 0x268);
        lVar19 = *(longlong *)(lVar10 + 0x260);
      }
      uStack_c0 = CONCAT44(uStack_c0._4_4_,fStack_d0);
      fVar30 = (float)lVar19 - fVar30;
      fVar29 = (float)((ulonglong)lVar19 >> 0x20) - fVar29;
      fVar5 = (float)DAT_146878310;
      fVar1 = DAT_146878310._4_4_;
      fVar2 = DAT_146878310._8_4_;
      fVar3 = DAT_146878310._12_4_;
      auVar24._4_4_ = fVar29;
      auVar24._0_4_ = fVar30;
      auVar24._8_4_ = fStack_d0 - fVar27;
      auVar24._12_4_ = 0;
      auVar25 = divps(auVar24,_DAT_146878310);
      fVar30 = fVar30 - (float)(int)auVar25._0_4_ * fVar5;
      fVar29 = fVar29 - (float)(int)auVar25._4_4_ * fVar1;
      fVar27 = (fStack_d0 - fVar27) - (float)(int)auVar25._8_4_ * fVar2;
      fVar28 = 0.0 - (float)(int)auVar25._12_4_ * fVar3;
      fVar30 = (float)(((uint)(fVar30 + fVar5) ^ (uint)fVar30) & -(uint)(0.0 <= fVar30) ^
                      (uint)(fVar30 + fVar5));
      fVar29 = (float)(((uint)(fVar29 + fVar1) ^ (uint)fVar29) & -(uint)(0.0 <= fVar29) ^
                      (uint)(fVar29 + fVar1));
      fVar27 = (float)(((uint)(fVar27 + fVar2) ^ (uint)fVar27) & -(uint)(0.0 <= fVar27) ^
                      (uint)(fVar27 + fVar2));
      fVar28 = (float)(((uint)(fVar28 + fVar3) ^ (uint)fVar28) & -(uint)(0.0 <= fVar28) ^
                      (uint)(fVar28 + fVar3));
      auVar26._4_4_ =
           -(uint)(1e-08 < (float)((((uint)(fVar29 - fVar1) ^ (uint)fVar29) &
                                    -(uint)(fRam0000000146878304 < fVar29) ^ (uint)fVar29) &
                                  uRam00000001468783d4));
      auVar26._0_4_ =
           -(uint)(1e-08 < (float)((((uint)(fVar30 - fVar5) ^ (uint)fVar30) &
                                    -(uint)(_DAT_146878300 < fVar30) ^ (uint)fVar30) &
                                  _DAT_1468783d0));
      auVar26._8_4_ =
           -(uint)(1e-08 < (float)((((uint)(fVar27 - fVar2) ^ (uint)fVar27) &
                                    -(uint)(fRam0000000146878308 < fVar27) ^ (uint)fVar27) &
                                  uRam00000001468783d8));
      auVar26._12_4_ =
           -(uint)(1e-08 < (float)((((uint)(fVar28 - fVar3) ^ (uint)fVar28) &
                                    -(uint)(fRam000000014687830c < fVar28) ^ (uint)fVar28) &
                                  uRam00000001468783dc));
      iVar14 = movmskps(iVar14,auVar26);
      if (iVar14 == 0) {
        return uVar20;
      }
    }
    fVar29 = fStack_b0;
    lVar10 = local_b8;
    local_d8 = 0;
    if (param_1[0xb5] != 0) {
      local_c8 = local_b8;
      uStack_c0 = CONCAT44(uStack_c0._4_4_,fStack_b0);
      uVar13 = UKismetMathLibrary::GetForwardVector(&local_b8,&local_c8);
      plVar8 = (longlong *)FLinearColor::FLinearColor(&local_d8,uVar13);
      local_c8 = *plVar8;
      uStack_c0 = plVar8[1];
      FUN_1425a2be0(param_1[0xa7],param_1[0xb5],&local_c8);
    }
    local_d8 = 0;
    if (param_1[0xb6] != 0) {
      local_c8 = lVar10;
      uStack_c0 = CONCAT44(uStack_c0._4_4_,fVar29);
      uVar13 = UKismetMathLibrary::GetRightVector(&local_b8,&local_c8);
      plVar8 = (longlong *)FLinearColor::FLinearColor(&local_d8,uVar13);
      local_c8 = *plVar8;
      uStack_c0 = plVar8[1];
      FUN_1425a2be0(param_1[0xa7],param_1[0xb6],&local_c8);
    }
    local_d8 = 0;
    if (param_1[0xb7] != 0) {
      local_c8 = lVar10;
      uStack_c0 = CONCAT44(uStack_c0._4_4_,fVar29);
      uVar13 = UKismetMathLibrary::GetUpVector(&local_b8,&local_c8);
      plVar8 = (longlong *)FLinearColor::FLinearColor(&local_d8,uVar13);
      local_c8 = *plVar8;
      uStack_c0 = plVar8[1];
      FUN_1425a2be0(param_1[0xa7],param_1[0xb7],&local_c8);
    }
    if ((param_1[0x93] == 0) || (*(char *)(param_1[0x93] + 0x5aa) == '\0')) {
      local_c8 = lVar10;
      uStack_c0 = CONCAT44(uStack_c0._4_4_,fVar29);
    }
    else {
      fStack_b0 = 0.0;
      local_c8 = 0;
      uStack_c0 = (ulonglong)uStack_c0._4_4_ << 0x20;
    }
    AActor::SetActorRotation(param_1,&local_c8,0);
    uVar20 = 1;
  }
  return uVar20;
}



// FUNCTION 1412d01a0 FUN_1412d01a0 body=1438 status=ok
// SIG undefined FUN_1412d01a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412d01a0(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulonglong in_stack_ffffffffffffff68;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float fStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [32];
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 == 0) {
    return;
  }
  lVar5 = FUN_1414f8420();
  if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  fVar13 = *(float *)(param_2 + 2) + 0.0;
  fVar14 = *(float *)((longlong)param_2 + 0x14) + 0.0;
  fVar15 = *(float *)(param_1 + 0x7bc) + *(float *)(param_2 + 3);
  fVar16 = *(float *)((longlong)param_2 + 0x1c) + 0.0;
  *(float *)(param_2 + 2) = fVar13;
  *(float *)((longlong)param_2 + 0x14) = fVar14;
  *(float *)(param_2 + 3) = fVar15;
  *(float *)((longlong)param_2 + 0x1c) = fVar16;
  if (param_3 == '\0') {
    local_78 = *(undefined8 *)(param_1 + 0x220);
    fStack_70 = *(float *)(param_1 + 0x228);
    uStack_6c = *(undefined4 *)(param_1 + 0x22c);
    local_68 = CONCAT44(fVar14,fVar13);
    uStack_60 = CONCAT44(fVar16,fVar15);
    if (((1e-08 < ABS(fVar13 - *(float *)(param_1 + 0x220))) ||
        (1e-08 < ABS(fVar14 - *(float *)(param_1 + 0x224)))) || (1e-08 < ABS(fVar15 - fStack_70))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1412d044c;
    if (*(char *)(lVar1 + 0x5aa) != '\0') goto LAB_1412d02a6;
  }
  else {
LAB_1412d02a6:
    if ((*(longlong *)(param_1 + 0x7e8) != 0) && (*(longlong *)(param_1 + 0x7c0) != 0)) {
      local_88 = CONCAT44(fVar14,fVar13);
      local_80 = fVar15;
      puVar6 = (undefined8 *)FLinearColor::FLinearColor(&local_48,&local_88);
      local_68 = *puVar6;
      uStack_60 = puVar6[1];
      FUN_1425a2be0(*(undefined8 *)(param_1 + 0x7e8),*(undefined8 *)(param_1 + 0x7c0),&local_68);
      fVar13 = *(float *)(param_2 + 2);
      fVar14 = *(float *)((longlong)param_2 + 0x14);
      fVar15 = *(float *)(param_2 + 3);
    }
  }
  pfVar7 = (float *)(param_1 + 0x280);
  local_78 = CONCAT44(fVar14,fVar13);
  if (((*(float *)(param_1 + 0x1f8) == *pfVar7) &&
      (*(float *)(param_1 + 0x1fc) == *(float *)(param_1 + 0x284))) &&
     (*(float *)(param_1 + 0x200) == *(float *)(param_1 + 0x288))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  local_80 = fVar15;
  fStack_70 = fVar15;
  if (bVar2) {
    local_88 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 0x1f8);
    auVar9._12_4_ = 0;
    auVar9._0_12_ = *(undefined1 (*) [12])(param_1 + 0x1f8);
    fVar13 = (float)DAT_146878310;
    fVar14 = DAT_146878310._4_4_;
    fVar15 = DAT_146878310._8_4_;
    auVar9 = divps(auVar9,_DAT_146878310);
    fVar16 = (float)local_88 - (float)(int)auVar9._0_4_ * fVar13;
    fVar17 = (float)((ulonglong)local_88 >> 0x20) - (float)(int)auVar9._4_4_ * fVar14;
    fVar18 = *(float *)(param_1 + 0x200) - (float)(int)auVar9._8_4_ * fVar15;
    fVar16 = (float)(((uint)(fVar16 + fVar13) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                    (uint)(fVar16 + fVar13));
    fVar17 = (float)(((uint)(fVar17 + fVar14) ^ (uint)fVar17) & -(uint)(0.0 <= fVar17) ^
                    (uint)(fVar17 + fVar14));
    local_80 = (float)(((uint)(fVar18 + fVar15) ^ (uint)fVar18) & -(uint)(0.0 <= fVar18) ^
                      (uint)(fVar18 + fVar15));
    local_80 = (float)(((uint)(local_80 - fVar15) ^ (uint)local_80) &
                       -(uint)(fRam0000000146878308 < local_80) ^ (uint)local_80);
    *(ulonglong *)pfVar7 =
         CONCAT44(((uint)(fVar17 - fVar14) ^ (uint)fVar17) & -(uint)(fRam0000000146878304 < fVar17)
                  ^ (uint)fVar17,
                  ((uint)(fVar16 - fVar13) ^ (uint)fVar16) & -(uint)(_DAT_146878300 < fVar16) ^
                  (uint)fVar16);
    *(float *)(param_1 + 0x288) = local_80;
    puVar6 = (undefined8 *)FRotator::Quaternion(pfVar7,&local_48);
    uVar8 = puVar6[1];
    *(undefined8 *)(param_1 + 0x270) = *puVar6;
    *(undefined8 *)(param_1 + 0x278) = uVar8;
  }
  local_68 = *(undefined8 *)(param_1 + 0x270);
  uStack_60 = *(undefined8 *)(param_1 + 0x278);
  in_stack_ffffffffffffff68 = 0;
  FUN_142397be0(param_1,&local_78,&local_68,0,0,0);
LAB_1412d044c:
  if ((*(longlong *)(param_1 + 0x7e8) != 0) &&
     (uVar3 = FUN_140bf9690(0,param_1 + 0x7f0), (char)uVar3 != '\0')) {
    if (param_3 == '\0') {
      local_48 = *param_2;
      uStack_40 = param_2[1];
      fVar13 = *(float *)(param_1 + 0x210);
      local_58 = *(undefined8 *)(param_1 + 0x210);
      fVar14 = *(float *)(param_1 + 0x218);
      uStack_50 = *(undefined8 *)(param_1 + 0x218);
      auVar10._4_4_ = -(uint)(*(float *)(param_1 + 0x254) != *(float *)(param_1 + 0x214));
      auVar10._0_4_ = -(uint)(*(float *)(param_1 + 0x250) != fVar13);
      auVar10._8_4_ = -(uint)(*(float *)(param_1 + 600) != fVar14);
      auVar10._12_4_ = -(uint)(*(float *)(param_1 + 0x25c) != *(float *)(param_1 + 0x21c));
      iVar4 = movmskps(uVar3,auVar10);
      if (iVar4 != 0) {
        *(float *)(param_1 + 0x250) = fVar13;
        *(float *)(param_1 + 0x254) = *(float *)(param_1 + 0x214);
        *(float *)(param_1 + 600) = fVar14;
        *(float *)(param_1 + 0x25c) = *(float *)(param_1 + 0x21c);
        puVar6 = (undefined8 *)FQuat::Rotator(&local_58,&local_88);
        *(undefined8 *)(param_1 + 0x260) = *puVar6;
        *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(puVar6 + 1);
      }
      fStack_70 = *(float *)(param_1 + 0x268);
      uVar8 = *(undefined8 *)(param_1 + 0x260);
      pfVar7 = (float *)FQuat::Rotator(&local_48,&local_68);
      fVar13 = (float)DAT_146878310;
      fVar14 = DAT_146878310._4_4_;
      fVar15 = DAT_146878310._8_4_;
      fVar16 = DAT_146878310._12_4_;
      fVar17 = (float)uVar8 - *pfVar7;
      fVar18 = (float)((ulonglong)uVar8 >> 0x20) - pfVar7[1];
      auVar11._4_4_ = fVar18;
      auVar11._0_4_ = fVar17;
      auVar11._8_4_ = fStack_70 - pfVar7[2];
      auVar11._12_4_ = 0;
      auVar9 = divps(auVar11,_DAT_146878310);
      fVar17 = fVar17 - (float)(int)auVar9._0_4_ * fVar13;
      fVar18 = fVar18 - (float)(int)auVar9._4_4_ * fVar14;
      fVar19 = (fStack_70 - pfVar7[2]) - (float)(int)auVar9._8_4_ * fVar15;
      fVar20 = 0.0 - (float)(int)auVar9._12_4_ * fVar16;
      fVar17 = (float)(((uint)(fVar17 + fVar13) ^ (uint)fVar17) & -(uint)(0.0 <= fVar17) ^
                      (uint)(fVar17 + fVar13));
      fVar18 = (float)(((uint)(fVar18 + fVar14) ^ (uint)fVar18) & -(uint)(0.0 <= fVar18) ^
                      (uint)(fVar18 + fVar14));
      fVar19 = (float)(((uint)(fVar19 + fVar15) ^ (uint)fVar19) & -(uint)(0.0 <= fVar19) ^
                      (uint)(fVar19 + fVar15));
      fVar20 = (float)(((uint)(fVar20 + fVar16) ^ (uint)fVar20) & -(uint)(0.0 <= fVar20) ^
                      (uint)(fVar20 + fVar16));
      auVar12._4_4_ =
           -(uint)(1e-08 < (float)((((uint)(fVar18 - fVar14) ^ (uint)fVar18) &
                                    -(uint)(fRam0000000146878304 < fVar18) ^ (uint)fVar18) &
                                  uRam00000001468783d4));
      auVar12._0_4_ =
           -(uint)(1e-08 < (float)((((uint)(fVar17 - fVar13) ^ (uint)fVar17) &
                                    -(uint)(_DAT_146878300 < fVar17) ^ (uint)fVar17) &
                                  _DAT_1468783d0));
      auVar12._8_4_ =
           -(uint)(1e-08 < (float)((((uint)(fVar19 - fVar15) ^ (uint)fVar19) &
                                    -(uint)(fRam0000000146878308 < fVar19) ^ (uint)fVar19) &
                                  uRam00000001468783d8));
      auVar12._12_4_ =
           -(uint)(1e-08 < (float)((((uint)(fVar20 - fVar16) ^ (uint)fVar20) &
                                    -(uint)(fRam000000014687830c < fVar20) ^ (uint)fVar20) &
                                  uRam00000001468783dc));
      iVar4 = movmskps((int)pfVar7,auVar12);
      local_78 = uVar8;
      if (iVar4 == 0) {
        return;
      }
    }
    if (*(longlong *)(param_1 + 0x7c8) != 0) {
      local_48 = *param_2;
      uStack_40 = param_2[1];
      puVar6 = (undefined8 *)FQuat::Rotator(&local_48,&local_68);
      local_78 = *puVar6;
      fStack_70 = *(float *)(puVar6 + 1);
      uVar8 = UKismetMathLibrary::GetForwardVector(&local_88,&local_78);
      puVar6 = (undefined8 *)FLinearColor::FLinearColor(local_38,uVar8);
      local_58 = *puVar6;
      uStack_50 = puVar6[1];
      FUN_1425a2be0(*(undefined8 *)(param_1 + 0x7e8),*(undefined8 *)(param_1 + 0x7c8),&local_58);
    }
    if (*(longlong *)(param_1 + 2000) != 0) {
      local_48 = *param_2;
      uStack_40 = param_2[1];
      puVar6 = (undefined8 *)FQuat::Rotator(&local_48,&local_68);
      local_78 = *puVar6;
      fStack_70 = *(float *)(puVar6 + 1);
      uVar8 = UKismetMathLibrary::GetRightVector(&local_88,&local_78);
      puVar6 = (undefined8 *)FLinearColor::FLinearColor(local_38,uVar8);
      local_58 = *puVar6;
      uStack_50 = puVar6[1];
      FUN_1425a2be0(*(undefined8 *)(param_1 + 0x7e8),*(undefined8 *)(param_1 + 2000),&local_58);
    }
    if (*(longlong *)(param_1 + 0x7d8) != 0) {
      local_48 = *param_2;
      uStack_40 = param_2[1];
      puVar6 = (undefined8 *)FQuat::Rotator(&local_48,&local_68);
      local_78 = *puVar6;
      fStack_70 = *(float *)(puVar6 + 1);
      uVar8 = UKismetMathLibrary::GetUpVector(&local_88,&local_78);
      puVar6 = (undefined8 *)FLinearColor::FLinearColor(local_38,uVar8);
      local_58 = *puVar6;
      uStack_50 = puVar6[1];
      FUN_1425a2be0(*(undefined8 *)(param_1 + 0x7e8),*(undefined8 *)(param_1 + 0x7d8),&local_58);
    }
    local_48 = *param_2;
    uStack_40 = param_2[1];
    puVar6 = (undefined8 *)FQuat::Rotator(&local_48,&local_68);
    local_78 = *puVar6;
    fStack_70 = *(float *)(puVar6 + 1);
    FUN_142398470(param_1,&local_78,0,0,in_stack_ffffffffffffff68 & 0xffffffffffffff00);
  }
  return;
}



// FUNCTION 1412d0750 FUN_1412d0750 body=283 status=ok
// SIG undefined FUN_1412d0750(void)

void FUN_1412d0750(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  *(longlong *)(param_1 + 0x530) = param_2;
  *(longlong *)(param_1 + 0x4d0) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x498);
  if (param_2 == 0) {
    if (lVar1 != 0) {
      FUN_1412cf480(lVar1,param_1,0,*(undefined1 *)(lVar1 + 0x5a8));
      return;
    }
  }
  else {
    if (lVar1 != 0) {
      lVar1 = FUN_1412bf4f0(lVar1,param_1);
      if (lVar1 != 0) {
        *(undefined1 *)(lVar1 + 0x9c) = *(undefined1 *)(*(longlong *)(param_1 + 0x530) + 0x131);
        *(undefined1 *)(lVar1 + 0x9b) = *(undefined1 *)(*(longlong *)(param_1 + 0x530) + 0x130);
        lVar1 = *(longlong *)(param_1 + 0x498);
        if (lVar1 != 0) {
          if ((*(char *)(lVar1 + 0x5aa) == '\0') ||
             (*(char *)(*(longlong *)(param_1 + 0x530) + 0x130) == '\0')) {
            cVar3 = *(char *)(lVar1 + 0x5a8);
            if ((cVar3 == '\0') || (*(char *)(*(longlong *)(param_1 + 0x530) + 0x131) == '\0')) {
              uVar2 = 0;
            }
            else {
              uVar2 = 1;
            }
          }
          else {
            cVar3 = *(char *)(lVar1 + 0x5a8);
            uVar2 = 1;
          }
          FUN_1412cf480(lVar1,param_1,uVar2,cVar3);
        }
      }
    }
    if ((*(longlong *)(param_1 + 0x538) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x530) + 0xa8) != 0)) {
      FUN_1425a28b0(*(longlong *)(param_1 + 0x538),*(undefined8 *)(param_1 + 0x4a8));
      return;
    }
  }
  return;
}



// FUNCTION 1412d0870 FUN_1412d0870 body=298 status=ok
// SIG undefined FUN_1412d0870(void)

void FUN_1412d0870(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  longlong local_res8;
  
  local_res8 = param_1;
  FUN_1412b4210(&local_res8,param_1 + 0x7e8,param_2);
  FUN_1412b4210(&local_res8,param_1 + 0x7d8,param_2);
  FUN_1412b4210(&local_res8,param_1 + 0x7f8,param_2);
  FUN_1412b4210(&local_res8,param_1 + 0x798,param_2);
  FUN_1412b4210(&local_res8,param_1 + 0x7a8,param_2);
  FUN_1412b4210(&local_res8,param_1 + 0x7b8,param_2);
  FUN_1412b4210(&local_res8,param_1 + 0x7c8,param_2);
  cVar3 = FUN_140bf9690(0,param_1 + 0x978);
  if (cVar3 != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x978);
    if (((*(char *)(lVar1 + 0x598) == '\0') || (param_2 == '\0')) ||
       (cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                          (param_1 + 0x754,param_1 + 0x788), cVar3 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x978);
    FUN_1412cf480(param_1,uVar2,uVar4,*(undefined1 *)(param_1 + 0x5a8));
    return;
  }
  return;
}



// FUNCTION 1412d09a0 FUN_1412d09a0 body=280 status=ok
// SIG undefined FUN_1412d09a0(void)

void FUN_1412d09a0(longlong *param_1,longlong param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  longlong local_res10;
  undefined1 local_28 [8];
  longlong local_20;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x3b);
  if (lVar3 != param_2) {
    (**(code **)(*param_1 + 0x260))(param_1);
    if (lVar3 != 0) {
      FUN_1407665e0(lVar3 + 0x1b0,param_1);
    }
    FWeakObjectPtr::operator=(param_1 + 0x3b,param_2);
    if (param_2 != 0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPassthroughTargetLevelChanged",L"::");
      pwVar2 = (wchar_t *)0x0;
      while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
        pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar2 = pwVar1;
      }
      FName::FName(&local_res10,pwVar2 + 2,1);
      FWeakObjectPtr::operator=(local_28,0);
      local_20 = 0;
      FWeakObjectPtr::operator=(local_28,param_1);
      local_20 = local_res10;
      if ((local_res10 != 0) && (lVar3 = FWeakObjectPtr::Get(local_28), lVar3 != 0)) {
        UObject::FindFunction(lVar3,local_20);
      }
      FUN_1406a5aa0(param_2 + 0x1b0,local_28);
    }
  }
  return;
}



// FUNCTION 1412d0ac0 FUN_1412d0ac0 body=101 status=ok
// SIG undefined FUN_1412d0ac0(void)

void FUN_1412d0ac0(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  if (*(char *)(param_1 + 0x82c) == '\0') {
    *(undefined1 *)(param_1 + 0x82c) = 1;
  }
  else if (*(char *)(param_1 + 0x82c) != '\x01') {
    *(undefined1 *)(param_1 + 0x82d) = 1;
  }
  uVar1 = param_2[1];
  *(ulonglong *)(param_1 + 0x858) = *param_2 ^ 0x8000000080000000;
  *(uint *)(param_1 + 0x860) = (uint)uVar1 ^ 0x80000000;
  return;
}



// FUNCTION 1412d0b30 FUN_1412d0b30 body=105 status=ok
// SIG undefined FUN_1412d0b30(void)

void FUN_1412d0b30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = UMovieSceneSection::GetChannelProxy();
  if (lVar1 != 0) {
    lVar1 = UMovieSceneSection::GetChannelProxy(param_1);
    if (lVar1 != param_2) {
      FUN_1423511f0(param_1,0);
      if ((*(byte *)(param_1 + 0xb8) & 1) != 0) {
        FUN_14234cb00(param_1);
      }
    }
  }
  FUN_1423511f0(param_1,param_2);
  if ((*(byte *)(param_1 + 0xb8) & 1) != 0) {
    FUN_14234cb00(param_1);
  }
  return;
}



// FUNCTION 1412d0ba0 FUN_1412d0ba0 body=1501 status=ok
// SIG undefined FUN_1412d0ba0(void)

void FUN_1412d0ba0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  bool bVar12;
  int local_88;
  uint uStack_84;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_60;
  uint uStack_5c;
  uint *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  plVar6 = *(longlong **)(param_1 + 0x940);
  if (plVar6 != (longlong *)0x0) {
    if (((char)plVar6[0x65] != '\0') && (*(char *)(param_1 + 0x5a8) != '\0')) {
      uStack_84 = 1;
      plVar6 = (longlong *)(param_1 + 0x2b0);
      local_88 = 0;
      uVar2 = *(uint *)(param_1 + 0x2d8);
      puVar1 = (uint *)(param_1 + 0x2c0);
      uStack_74 = 0;
      iStack_70 = 0;
      if (uVar2 != 0) {
        puVar11 = *(uint **)(param_1 + 0x2d0);
        if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
          puVar11 = puVar1;
        }
        uVar3 = *puVar11;
        iStack_70 = 0;
        local_88 = 0;
        while (uVar3 == 0) {
          lVar8 = (longlong)local_88;
          iStack_70 = iStack_70 + 0x20;
          iVar4 = local_88 + 1;
          bVar12 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
          local_88 = iVar4;
          if (bVar12) goto LAB_1412d0cad;
          uVar3 = puVar11[lVar8 + 1];
        }
        uStack_84 = -uVar3 & uVar3;
        iVar4 = 0x1f;
        if (uStack_84 != 0) {
          for (; uStack_84 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        if (uStack_84 == 0) {
          iVar4 = 0x20;
        }
        else {
          iVar4 = 0x1f - iVar4;
        }
        uStack_74 = (iStack_70 - iVar4) + 0x1f;
        if ((int)uVar2 < (int)uStack_74) {
LAB_1412d0cad:
          uStack_74 = uVar2;
        }
      }
      uVar3 = *(uint *)(param_1 + 0x2d8);
      uStack_50 = CONCAT44(uStack_74,0xffffffff);
      local_48 = CONCAT44(uStack_6c,iStack_70);
      uStack_38 = CONCAT44(uStack_84,local_88);
      uVar10 = uVar3 & 0xffffffe0;
      iStack_60 = local_88;
      uStack_5c = uStack_84;
      local_58 = puVar1;
      local_40 = plVar6;
      puStack_30 = puVar1;
      uStack_28 = uStack_50;
      uStack_20 = local_48;
      uStack_74 = uVar3;
      if (uVar3 != uVar2) {
        puVar11 = *(uint **)(param_1 + 0x2d0);
        if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
          puVar11 = puVar1;
        }
        uVar7 = puVar11[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
        iVar4 = (int)uVar3 >> 5;
        while (uVar7 == 0) {
          uVar10 = uVar10 + 0x20;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
          goto LAB_1412d0d83;
          uVar7 = puVar11[(longlong)iVar4 + 1];
          iVar4 = iVar4 + 1;
        }
        uVar7 = -uVar7 & uVar7;
        iVar4 = 0x1f;
        if (uVar7 != 0) {
          for (; uVar7 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        if (uVar7 == 0) {
          iVar4 = 0x20;
        }
        else {
          iVar4 = 0x1f - iVar4;
        }
        uStack_74 = (uVar10 - iVar4) + 0x1f;
        if ((int)uVar2 < (int)uStack_74) {
LAB_1412d0d83:
          uStack_74 = uVar2;
        }
      }
      while( true ) {
        if ((uStack_50._4_4_ == uStack_74) && (local_58 == puVar1)) break;
        lVar8 = *(longlong *)(*plVar6 + (longlong)(int)uStack_50._4_4_ * 0x10);
        lVar5 = *(longlong *)(param_1 + 0x7d8);
        lVar9 = (longlong)*(int *)(param_1 + 0x7e0) * 0x270 + lVar5;
        for (; lVar5 != lVar9; lVar5 = lVar5 + 0x270) {
          if ((lVar8 == 0) || (*(longlong *)(lVar5 + 0x10) == 0)) {
            bVar12 = false;
          }
          else {
            bVar12 = *(longlong *)(lVar5 + 0x10) == lVar8;
          }
          if (bVar12) {
            if ((lVar5 != 0) && (*(char *)(lVar5 + 0x9c) == '\0')) goto LAB_1412d0e43;
            break;
          }
        }
        if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x10) != 0)) {
          lVar9 = FUN_1429ff0b0();
          for (lVar5 = *(longlong *)(lVar8 + 0x10); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30))
          {
            if (lVar5 == lVar9) goto LAB_1412d0e43;
          }
          FUN_1412d0b30(lVar8,*(undefined8 *)(param_1 + 0x940));
        }
LAB_1412d0e43:
        uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 & ~uStack_5c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
      }
      plVar6 = *(longlong **)(param_1 + 0x940);
    }
    (**(code **)(*plVar6 + 0x290))(plVar6,*(undefined1 *)(param_1 + 0x5a9),0);
    FUN_142398ec0(*(undefined8 *)(param_1 + 0x940),*(undefined1 *)(param_1 + 0x5a9));
    *(undefined1 *)(*(longlong *)(param_1 + 0x940) + 0x318) = *(undefined1 *)(param_1 + 0x5a9);
  }
  plVar6 = *(longlong **)(param_1 + 0x948);
  if (plVar6 != (longlong *)0x0) {
    if (((char)plVar6[0x65] != '\0') && (*(char *)(param_1 + 0x5aa) != '\0')) {
      uStack_84 = 1;
      plVar6 = (longlong *)(param_1 + 0x2b0);
      local_88 = 0;
      uVar2 = *(uint *)(param_1 + 0x2d8);
      puVar1 = (uint *)(param_1 + 0x2c0);
      uStack_74 = 0;
      iStack_70 = 0;
      if (uVar2 != 0) {
        puVar11 = *(uint **)(param_1 + 0x2d0);
        if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
          puVar11 = puVar1;
        }
        uVar3 = *puVar11;
        iStack_70 = 0;
        local_88 = 0;
        while (uVar3 == 0) {
          lVar8 = (longlong)local_88;
          iStack_70 = iStack_70 + 0x20;
          iVar4 = local_88 + 1;
          bVar12 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
          local_88 = iVar4;
          if (bVar12) goto LAB_1412d0f6d;
          uVar3 = puVar11[lVar8 + 1];
        }
        uStack_84 = -uVar3 & uVar3;
        iVar4 = 0x1f;
        if (uStack_84 != 0) {
          for (; uStack_84 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        if (uStack_84 == 0) {
          iVar4 = 0x20;
        }
        else {
          iVar4 = 0x1f - iVar4;
        }
        uStack_74 = (iStack_70 - iVar4) + 0x1f;
        if ((int)uVar2 < (int)uStack_74) {
LAB_1412d0f6d:
          uStack_74 = uVar2;
        }
      }
      uVar3 = *(uint *)(param_1 + 0x2d8);
      uStack_50 = CONCAT44(uStack_74,0xffffffff);
      local_48 = CONCAT44(uStack_6c,iStack_70);
      uStack_38 = CONCAT44(uStack_84,local_88);
      uVar10 = uVar3 & 0xffffffe0;
      iStack_60 = local_88;
      uStack_5c = uStack_84;
      local_58 = puVar1;
      local_40 = plVar6;
      puStack_30 = puVar1;
      uStack_28 = uStack_50;
      uStack_20 = local_48;
      uStack_74 = uVar3;
      if (uVar3 != uVar2) {
        puVar11 = *(uint **)(param_1 + 0x2d0);
        if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
          puVar11 = puVar1;
        }
        uVar7 = puVar11[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
        iVar4 = (int)uVar3 >> 5;
        while (uVar7 == 0) {
          uVar10 = uVar10 + 0x20;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
          goto LAB_1412d1042;
          uVar7 = puVar11[(longlong)iVar4 + 1];
          iVar4 = iVar4 + 1;
        }
        uVar7 = -uVar7 & uVar7;
        iVar4 = 0x1f;
        if (uVar7 != 0) {
          for (; uVar7 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        if (uVar7 == 0) {
          iVar4 = 0x20;
        }
        else {
          iVar4 = 0x1f - iVar4;
        }
        uStack_74 = (uVar10 - iVar4) + 0x1f;
        if ((int)uVar2 < (int)uStack_74) {
LAB_1412d1042:
          uStack_74 = uVar2;
        }
      }
      while( true ) {
        if ((uStack_50._4_4_ == uStack_74) && (local_58 == puVar1)) break;
        lVar8 = *(longlong *)(*plVar6 + (longlong)(int)uStack_50._4_4_ * 0x10);
        lVar5 = *(longlong *)(param_1 + 0x7d8);
        lVar9 = (longlong)*(int *)(param_1 + 0x7e0) * 0x270 + lVar5;
        for (; lVar5 != lVar9; lVar5 = lVar5 + 0x270) {
          if ((lVar8 == 0) || (*(longlong *)(lVar5 + 0x10) == 0)) {
            bVar12 = false;
          }
          else {
            bVar12 = *(longlong *)(lVar5 + 0x10) == lVar8;
          }
          if (bVar12) {
            if ((lVar5 != 0) && (*(char *)(lVar5 + 0x9b) == '\0')) goto LAB_1412d1102;
            break;
          }
        }
        if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x10) != 0)) {
          lVar9 = FUN_1429ff0b0();
          for (lVar5 = *(longlong *)(lVar8 + 0x10); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30))
          {
            if (lVar5 == lVar9) goto LAB_1412d1102;
          }
          FUN_1412d0b30(lVar8,*(undefined8 *)(param_1 + 0x948));
        }
LAB_1412d1102:
        uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 & ~uStack_5c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
      }
      plVar6 = *(longlong **)(param_1 + 0x948);
    }
    (**(code **)(*plVar6 + 0x290))(plVar6,*(undefined1 *)(param_1 + 0x5aa),0);
    FUN_142398ec0(*(undefined8 *)(param_1 + 0x948),*(undefined1 *)(param_1 + 0x5aa),1);
    *(undefined1 *)(*(longlong *)(param_1 + 0x948) + 0x318) = *(undefined1 *)(param_1 + 0x5aa);
  }
  return;
}



// FUNCTION 1412d1180 FUN_1412d1180 body=315 status=ok
// SIG undefined FUN_1412d1180(void)

void FUN_1412d1180(longlong param_1,void **param_2,undefined1 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  void *_Src;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  void *local_38;
  ulonglong local_30;
  undefined1 local_28;
  
  if (param_1 != 0) {
    plVar1 = (longlong *)(param_1 + 0x360);
    puVar8 = (undefined8 *)*plVar1;
    puVar2 = puVar8 + (longlong)*(int *)(param_1 + 0x368) * 3;
    for (; puVar8 != puVar2; puVar8 = puVar8 + 3) {
      if (*(int *)(param_2 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = *param_2;
      }
      if (*(int *)(puVar8 + 1) == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = (undefined2 *)*puVar8;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar7);
      if (iVar5 == 0) {
        *(undefined1 *)(puVar8 + 2) = param_3;
        goto LAB_1412d1294;
      }
    }
    local_38 = (void *)0x0;
    local_30 = 0;
    if (&local_38 != param_2) {
      uVar4 = *(uint *)(param_2 + 1);
      _Src = *param_2;
      local_30 = (ulonglong)uVar4;
      if (uVar4 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,uVar4,0);
        _guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)(int)uVar4 * 2);
      }
    }
    iVar5 = *(int *)(param_1 + 0x368);
    *(int *)(param_1 + 0x368) = iVar5 + 1;
    local_28 = param_3;
    if (*(int *)(param_1 + 0x36c) < iVar5 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar1,iVar5);
    }
    lVar3 = *plVar1 + (longlong)iVar5 * 0x18;
    FString::FString(lVar3,&local_38);
    *(undefined1 *)(lVar3 + 0x10) = local_28;
    if (local_38 != (void *)0x0) {
      FMemory::Free();
    }
LAB_1412d1294:
    FUN_14234cb00(param_1);
  }
  return;
}



// FUNCTION 1412d12c0 FUN_1412d12c0 body=17 status=ok
// SIG undefined FUN_1412d12c0(void)

void FUN_1412d12c0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x538) == 0) {
    return;
  }
  FUN_1425a2490(*(longlong *)(param_1 + 0x538),param_2,0);
  return;
}



// FUNCTION 1412d12e0 FUN_1412d12e0 body=715 status=ok
// SIG undefined FUN_1412d12e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412d12e0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 local_res8;
  longlong local_28 [2];
  
  FUN_1412cd930();
  uVar5 = 0;
  *(undefined4 *)(param_1 + 0x102) = 0;
  if (*(int *)((longlong)param_1 + 0x814) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x101,0);
  }
  FUN_1412bdd20(param_1 + 0x198,0);
  *(undefined1 *)((longlong)param_1 + 0x9c9) = 0;
  cVar1 = '\0';
  plVar3 = (longlong *)param_1[0x115];
  uVar6 = (longlong)(int)param_1[0x116] & 0x1fffffffffffffff;
  if (plVar3 + (int)param_1[0x116] < plVar3) {
    uVar6 = uVar5;
  }
  if (uVar6 != 0) {
    do {
      if (*plVar3 != 0) {
        FUN_142398ec0(*plVar3,0,1);
      }
      plVar3 = plVar3 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar6);
  }
  plVar4 = (longlong *)param_1[0x113];
  plVar3 = plVar4 + (longlong)(int)param_1[0x114] * 5;
  do {
    if (plVar4 == plVar3) {
      FUN_1412d0870(param_1,0);
      *(undefined1 *)(param_1 + 0x1a4) = 2;
      *(undefined1 *)((longlong)param_1 + 0xaed) = 0;
      FWeakObjectPtr::operator=(&local_res8,0);
      *(undefined4 *)((longlong)param_1 + 0x754) = (undefined4)local_res8;
      *(undefined4 *)(param_1 + 0xeb) = local_res8._4_4_;
      FWeakObjectPtr::operator=(&local_res8,0);
      *(undefined4 *)(param_1 + 0xf0) = (undefined4)local_res8;
      *(undefined4 *)((longlong)param_1 + 0x784) = local_res8._4_4_;
      *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0xa04) = 0;
      param_1[0x142] = 0;
      local_res8 = 0;
      *(undefined4 *)(param_1 + 0x144) = 0;
      if (0x7fffffff < *(uint *)((longlong)param_1 + 0xa24)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x143,0);
      }
      if ((undefined2 *)param_1[0x143] != (undefined2 *)0x0) {
        *(undefined2 *)param_1[0x143] = 0;
      }
      *(undefined4 *)(param_1 + 0x141) = 0;
      param_1[0x10b] = _DAT_1468b5d90;
      *(undefined4 *)(param_1 + 0x10c) = DAT_1468b5d98;
      *(undefined4 *)((longlong)param_1 + 0x864) = 0;
      *(undefined2 *)((longlong)param_1 + 0x82c) = 0;
      local_28[0] = 0;
      local_28[1] = 0xf;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
      FGenericPlatformString::Memcpy(local_28[0],L"PostProcessing",0x1e);
      FUN_1412d1180(param_1[0x128],local_28,1);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      local_28[0] = 0;
      local_28[1] = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
      FGenericPlatformString::Memcpy(local_28[0],L"Lighting",0x12);
      FUN_1412d1180(param_1[0x128],local_28,1);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      return;
    }
    if (plVar4[4] != 0) {
      if (cVar1 != '\0') {
        uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
        cVar1 = FUN_142c48f60(plVar4[4],uVar2,0);
        if (cVar1 != '\0') {
          cVar1 = '\x01';
          goto LAB_1412d13d2;
        }
      }
      cVar1 = '\0';
    }
LAB_1412d13d2:
    if (*plVar4 != 0) {
      FUN_142398ec0(*plVar4,cVar1);
      if (plVar4[2] != 0) {
        FUN_142398ec0(plVar4[2],cVar1);
      }
      (**(code **)(*(longlong *)*plVar4 + 0x638))((longlong *)*plVar4,0);
    }
    plVar4 = plVar4 + 5;
  } while( true );
}



// FUNCTION 1412d15b0 FUN_1412d15b0 body=859 status=ok
// SIG undefined FUN_1412d15b0(void)

void FUN_1412d15b0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong local_38;
  undefined8 local_30;
  
  plVar8 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0x102) = 0;
  if (*(int *)((longlong)param_1 + 0x814) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x101,0);
  }
  *(undefined1 *)((longlong)param_1 + 0x9c9) = 0;
  FUN_1412cb020(param_1);
  if (*(char *)((longlong)param_1 + 0x71c) == '\0') {
    bVar2 = true;
    plVar6 = (longlong *)param_1[0x115];
    plVar9 = (longlong *)((longlong)(int)param_1[0x116] & 0x1fffffffffffffff);
    if (plVar6 + (int)param_1[0x116] < plVar6) {
      plVar9 = plVar8;
    }
    plVar7 = plVar8;
    if (plVar9 != (longlong *)0x0) {
      do {
        lVar1 = *plVar6;
        if (lVar1 != 0) {
          cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                            ((longlong)param_1 + 0x754,param_1 + 0xf1);
          FUN_142398ec0(lVar1,cVar3 != '\0',1);
        }
        plVar6 = plVar6 + 1;
        plVar7 = (longlong *)((longlong)plVar7 + 1);
      } while (plVar7 != plVar9);
    }
    plVar9 = (longlong *)param_1[0x113];
    plVar6 = plVar9 + (longlong)(int)param_1[0x114] * 5;
    for (; plVar9 != plVar6; plVar9 = plVar9 + 5) {
      if (plVar9[4] != 0) {
        if (bVar2) {
          uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
          cVar3 = FUN_142c48f60(plVar9[4],uVar5,0);
          if (cVar3 != '\0') {
            bVar2 = true;
            goto LAB_1412d16d5;
          }
        }
        bVar2 = false;
      }
LAB_1412d16d5:
      if (*plVar9 != 0) {
        FUN_142398ec0(*plVar9,bVar2);
        if (plVar9[2] != 0) {
          FUN_142398ec0(plVar9[2],bVar2);
        }
        if ((bVar2 == false) || ((char)param_1[0xb5] == '\0')) {
          (**(code **)(*(longlong *)*plVar9 + 0x638))((longlong *)*plVar9,0);
        }
        else {
          (**(code **)(*(longlong *)*plVar9 + 0x638))((longlong *)*plVar9,1);
          (**(code **)(*(longlong *)*plVar9 + 0x648))((longlong *)*plVar9,DAT_1462a2e64);
        }
      }
    }
    FUN_1412d0870(param_1,1);
  }
  *(undefined1 *)(param_1 + 0x1a4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xaed) = 0;
  cVar3 = FUN_1405dc8f0((longlong)param_1 + 0x754,param_2);
  FWeakObjectPtr::operator=((longlong)param_1 + 0x754,param_2);
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  plVar6 = plVar8;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    plVar6 = *(longlong **)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x588);
  }
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)((longlong)param_1 + 0x81c) = *(undefined4 *)((longlong)plVar6 + 0x184);
  }
  cVar4 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x754);
  plVar6 = plVar8;
  if (cVar4 != '\0') {
    uVar5 = FWeakObjectPtr::Get((longlong)param_1 + 0x754);
    plVar6 = (longlong *)FUN_14129f920(uVar5);
  }
  FWeakObjectPtr::operator=(param_1 + 0xf0,plVar6);
  if (*(char *)((longlong)param_1 + 0x71c) == '\0') {
    local_38 = 0;
    local_30 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"PostProcessing",0x1e);
    FUN_1412d1180(param_1[0x128],&local_38,0);
    if (local_38 != 0) {
      FMemory::Free();
    }
    local_38 = 0;
    local_30 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"Lighting",0x12);
    FUN_1412d1180(param_1[0x128],&local_38,0);
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  if ((((cVar3 != '\0') && ((int)param_1[0x99] != 0)) &&
      ((longlong *)param_1[0x98] != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(*(longlong *)param_1[0x98] + 0x18))(), cVar3 != '\0')) {
    if ((int)param_1[0x99] != 0) {
      plVar8 = (longlong *)param_1[0x98];
    }
    (**(code **)(*plVar8 + 0x40))(plVar8);
  }
  return;
}



// FUNCTION 1412d1910 FUN_1412d1910 body=681 status=ok
// SIG undefined FUN_1412d1910(void)

void FUN_1412d1910(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_38 [2];
  
  if (*(char *)((longlong)param_1 + 0x5aa) == '\0') {
    FUN_1412cd930();
    uVar6 = 0;
    *(undefined4 *)(param_1 + 0x102) = 0;
    if (*(int *)((longlong)param_1 + 0x814) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x101,0);
    }
    FUN_1412bdd20(param_1 + 0x198,0);
    *(undefined1 *)((longlong)param_1 + 0x9c9) = 0;
    if (*(char *)((longlong)param_1 + 0x71c) == '\0') {
      plVar4 = (longlong *)param_1[0x115];
      cVar1 = '\0';
      uVar7 = (longlong)(int)param_1[0x116] & 0x1fffffffffffffff;
      if (plVar4 + (int)param_1[0x116] < plVar4) {
        uVar7 = uVar6;
      }
      if (uVar7 != 0) {
        do {
          if (*plVar4 != 0) {
            FUN_142398ec0(*plVar4,0,1);
          }
          plVar4 = plVar4 + 1;
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar7);
      }
      plVar5 = (longlong *)param_1[0x113];
      plVar4 = plVar5 + (longlong)(int)param_1[0x114] * 5;
      for (; plVar5 != plVar4; plVar5 = plVar5 + 5) {
        if (plVar5[4] != 0) {
          if (cVar1 != '\0') {
            uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
            cVar1 = FUN_142c48f60(plVar5[4],uVar2,0);
            if (cVar1 != '\0') {
              cVar1 = '\x01';
              goto LAB_1412d1a26;
            }
          }
          cVar1 = '\0';
        }
LAB_1412d1a26:
        if (*plVar5 != 0) {
          FUN_142398ec0(*plVar5,cVar1);
          if (plVar5[2] != 0) {
            FUN_142398ec0(plVar5[2],cVar1);
          }
          (**(code **)(*(longlong *)*plVar5 + 0x638))((longlong *)*plVar5,0);
        }
      }
      FUN_1412d0870(param_1,0);
    }
    if ((char)param_1[0x1a4] == '\x02') {
      lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      if (lVar3 == 0) {
        uVar8 = 0;
      }
      else {
        lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
        uVar8 = *(undefined4 *)(lVar3 + 0x794);
      }
      *(undefined4 *)(param_1 + 0x19c) = uVar8;
    }
    *(undefined1 *)(param_1 + 0x1a4) = 1;
    *(undefined1 *)((longlong)param_1 + 0xaed) = 0;
    FWeakObjectPtr::operator=(&local_res8,0);
    *(undefined4 *)((longlong)param_1 + 0x754) = local_res8;
    *(undefined4 *)(param_1 + 0xeb) = local_resc;
    FWeakObjectPtr::operator=(param_1 + 0xf0,param_2);
    if (*(char *)((longlong)param_1 + 0x71c) == '\0') {
      local_38[0] = 0;
      local_38[1] = 0xf;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
      FGenericPlatformString::Memcpy(local_38[0],L"PostProcessing",0x1e);
      FUN_1412d1180(param_1[0x128],local_38,1);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      local_38[0] = 0;
      local_38[1] = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
      FGenericPlatformString::Memcpy(local_38[0],L"Lighting",0x12);
      FUN_1412d1180(param_1[0x128],local_38,1);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1412d1bc0 FUN_1412d1bc0 body=58 status=ok
// SIG undefined FUN_1412d1bc0(void)

void FUN_1412d1bc0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_142398ec0(*(longlong *)(param_1 + 0x168),param_2,2);
  }
  FUN_1412d0870(param_1,param_2 & 0xff);
  return;
}



// FUNCTION 1412d1c00 FUN_1412d1c00 body=2102 status=ok
// SIG undefined FUN_1412d1c00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412d1c00(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  bool bVar5;
  undefined1 *puVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 uVar15;
  float fVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStack_338 [32];
  undefined1 *local_318;
  float local_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  uint uStack_2fc;
  undefined1 local_2f8 [16];
  uint local_2e8;
  uint uStack_2e4;
  uint uStack_2e0;
  uint uStack_2dc;
  undefined1 local_2d8 [24];
  undefined1 local_2c0 [8];
  longlong local_2b8;
  undefined4 local_2a0;
  undefined4 local_29c;
  float local_298;
  undefined1 local_280 [24];
  undefined1 local_268 [43];
  char local_23d;
  char local_23c;
  undefined1 local_23b;
  longlong local_238;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  uint uStack_20c;
  undefined1 local_208 [16];
  uint local_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  lVar13 = *(longlong *)(param_1 + 0x118);
  if (lVar13 == 0) {
LAB_1412d1c74:
    lVar13 = 0;
  }
  else {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_1412d1c74;
  }
  cVar7 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(param_1 + 0x754,param_1 + 0x788);
  if (cVar7 == '\0') {
    return;
  }
  if (lVar13 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x720) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x5d8) == 0) {
    return;
  }
  if (((param_2 == '\0') || (cVar7 = FUN_140bf9690(0,param_1 + 0x978), cVar7 == '\0')) &&
     (*(char *)(param_1 + 0x974) == '\0')) {
    return;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar13 = 0;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    lVar13 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x588);
  }
  if (lVar13 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(longlong *)(lVar13 + 0xe8);
  }
  if (param_2 == '\0') {
    lVar14 = param_1 + 0x978;
    cVar7 = FUN_140bf9670(0,lVar14);
    if (cVar7 == '\0') {
      lVar9 = FWeakObjectPtr::Get(lVar14);
      lVar8 = *(longlong *)(param_1 + 0x820);
      lVar10 = FWeakObjectPtr::Get(lVar14);
      if (lVar8 == lVar9) {
        *(undefined1 *)(lVar10 + 0x598) = 0;
        uVar11 = FWeakObjectPtr::Get(lVar14);
        FUN_1412cf480(param_1,uVar11,0,*(undefined1 *)(param_1 + 0x5a8));
        lVar13 = *(longlong *)(param_1 + 0x820);
        if (lVar13 != 0) {
          lVar8 = UCheckBoxWidgetStyle::StaticClass();
          if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                      (lVar13 + 0x470,0);
          }
        }
        *(undefined8 *)(param_1 + 0x820) = 0;
        TBaseMulticastDelegate<void,bool,FString_const_&>::Broadcast
                  (param_1 + 0x540,0,&DAT_1468b5d90);
        return;
      }
      *(undefined1 *)(lVar10 + 0x598) = 1;
      lVar8 = FWeakObjectPtr::Get(lVar14);
      lVar8 = *(longlong *)(lVar8 + 0x530);
      cVar7 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                        (param_1 + 0x754,param_1 + 0x788);
      if (lVar8 != 0) {
        if ((cVar7 == '\0') ||
           (((*(char *)(param_1 + 0x5aa) == '\0' ||
             (lVar8 = FWeakObjectPtr::Get(lVar14),
             *(char *)(*(longlong *)(lVar8 + 0x530) + 0x130) == '\0')) &&
            ((*(char *)(param_1 + 0x5a8) == '\0' ||
             (lVar8 = FWeakObjectPtr::Get(lVar14),
             *(char *)(*(longlong *)(lVar8 + 0x530) + 0x131) == '\0')))))) {
          cVar7 = '\0';
        }
        else {
          cVar7 = '\x01';
        }
      }
      uVar11 = FWeakObjectPtr::Get(lVar14);
      FUN_1412cf480(param_1,uVar11,cVar7,*(undefined1 *)(param_1 + 0x5a8));
      TBaseMulticastDelegate<void,bool,FString_const_&>::Broadcast(param_1 + 0x540,0,&DAT_1468b5d90)
      ;
      uStack_2fc = uRam000000014687834c;
      if (lVar13 == 0) {
        fVar16 = 200.0;
      }
      else {
        fVar16 = *(float *)(lVar13 + 0x180);
      }
      fVar16 = fVar16 + *(float *)(param_1 + 0x970);
      puVar1 = (undefined8 *)(param_1 + 0x968);
      uVar17 = _DAT_146878340 & _DAT_146878350;
      uVar18 = uRam0000000146878344 & uRam0000000146878354;
      uVar19 = uRam0000000146878348 & uRam0000000146878358;
      uVar20 = uRam000000014687834c & uRam000000014687835c;
      puVar6 = (undefined1 *)*puVar1;
      uVar4 = *puVar1;
      uVar11 = *puVar1;
      plVar12 = (longlong *)FWeakObjectPtr::Get(lVar14);
      local_308 = 0;
      uStack_304 = 0;
      uStack_300 = 0;
      local_2f8._8_4_ = fVar16;
      local_2f8._0_8_ = uVar11;
      local_2f8._12_4_ = 0;
      local_2e8 = uVar17;
      uStack_2e4 = uVar18;
      uStack_2e0 = uVar19;
      uStack_2dc = uVar20;
      (**(code **)(*plVar12 + 0x728))(plVar12,&local_308,1,0);
      local_318 = puVar6;
      local_310 = fVar16;
      TBaseMulticastDelegate<void,bool,FString_const_&>::Broadcast(param_1 + 0x540,1,&local_318);
      uVar11 = FWeakObjectPtr::Get(lVar14);
      *(undefined8 *)(param_1 + 0x820) = uVar11;
      lVar13 = FWeakObjectPtr::Get(lVar14);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar13 + 0x460,0);
      lVar13 = FWeakObjectPtr::Get(lVar14);
      auVar3._8_4_ = fVar16;
      auVar3._0_8_ = uVar4;
      auVar3._12_4_ = 0;
      *(undefined1 (*) [16])(lVar13 + 0x500) = auVar3;
      return;
    }
  }
  if (lVar8 == 0) {
    return;
  }
  FUN_140f9f650(local_2d8);
  local_23b = *(undefined1 *)(lVar8 + 0xd1);
  local_23d = *(char *)(lVar8 + 0x130);
  local_23c = *(char *)(lVar8 + 0x131);
  if ((param_2 == '\0') || (cVar7 = FUN_140bf9690(0,param_1 + 0x978), cVar7 == '\0')) {
    if (lVar13 == 0) {
      local_298 = 200.0;
    }
    else {
      local_298 = *(float *)(lVar13 + 0x180);
    }
    local_298 = local_298 + *(float *)(param_1 + 0x970);
    local_29c = *(undefined4 *)(param_1 + 0x96c);
    local_2a0 = *(undefined4 *)(param_1 + 0x968);
  }
  else {
    lVar13 = FWeakObjectPtr::Get(param_1 + 0x978);
    lVar13 = *(longlong *)(lVar13 + 0x168);
    if (lVar13 == 0) {
      local_318 = _DAT_1468b5d90;
      local_310 = DAT_1468b5d98;
    }
    else {
      local_318 = *(undefined1 **)(lVar13 + 0x220);
      local_310 = *(float *)(lVar13 + 0x228);
    }
    local_2a0 = SUB84(local_318,0);
    local_29c = (undefined4)((ulonglong)local_318 >> 0x20);
    local_298 = local_310;
  }
  FText::operator=(local_280,lVar8 + 0x30);
  FText::operator=(local_268,lVar8 + 0x60);
  local_23b = *(undefined1 *)(lVar8 + 0xd1);
  local_1f8 = _DAT_146878340 & _DAT_146878350;
  uStack_1f4 = uRam0000000146878344 & uRam0000000146878354;
  uStack_1f0 = uRam0000000146878348 & uRam0000000146878358;
  uStack_1ec = uRam000000014687834c & uRam000000014687835c;
  local_208._4_4_ = local_29c;
  local_208._0_4_ = local_2a0;
  local_208._8_4_ = local_298;
  local_208._12_4_ = 0;
  local_218 = 0;
  uStack_214 = 0;
  uStack_210 = 0;
  uStack_20c = uRam000000014687834c;
  local_238 = lVar8;
  if (*(longlong *)(lVar8 + 0x100) != 0) {
    lVar9 = AGPingUsable::GetPrivateStaticClass();
    lVar13 = *(longlong *)(lVar8 + 0x100);
    for (lVar14 = lVar13; lVar14 != 0; lVar14 = *(longlong *)(lVar14 + 0x30)) {
      if (lVar14 == lVar9) {
        if (lVar13 != 0) {
          if (lVar13 == 0) goto LAB_1412d224e;
          lVar14 = AGPingUsable::GetPrivateStaticClass();
          local_2b8 = *(longlong *)(lVar8 + 0x100);
          lVar13 = local_2b8;
          goto joined_r0x0001412d2239;
        }
        break;
      }
    }
  }
  FUN_1412b7e80(param_1,local_2d8,lVar8,0);
LAB_1412d21c5:
  if (param_2 == '\0') {
    TBaseMulticastDelegate<void,bool,FString_const_&>::Broadcast(param_1 + 0x540,1,&local_2a0);
  }
  FUN_140fa04a0(local_2d8);
  return;
joined_r0x0001412d2239:
  if (lVar13 == 0) goto LAB_1412d224e;
  if (lVar13 == lVar14) goto LAB_1412d2250;
  lVar13 = *(longlong *)(lVar13 + 0x30);
  goto joined_r0x0001412d2239;
LAB_1412d224e:
  local_2b8 = 0;
LAB_1412d2250:
  if (param_2 == '\0') {
    lVar13 = FUN_1412b7d70(param_1,local_2d8,lVar8);
    if (lVar13 == 0) {
LAB_1412d22a7:
      lVar13 = 0;
    }
    else {
      lVar8 = UCheckBoxWidgetStyle::StaticClass();
      if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_1412d22a7;
    }
    FWeakObjectPtr::operator=(param_1 + 0x978,lVar13);
  }
  else {
    plVar12 = (longlong *)(param_1 + 0x7e8);
    cVar7 = FUN_1412af5d0(plVar12,local_2d8);
    if (cVar7 == '\0') {
      uVar11 = FWeakObjectPtr::Get(param_1 + 0x978);
      FWeakObjectPtr::operator=(local_2c0,uVar11);
      iVar2 = *(int *)(param_1 + 0x7f0);
      *(int *)(param_1 + 0x7f0) = iVar2 + 1;
      if (*(int *)(param_1 + 0x7f4) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<624,16>_>,FDefaultAllocator>::
        ResizeGrow(plVar12,iVar2);
      }
      FUN_1412b0b60((longlong)iVar2 * 0x270 + *plVar12,local_2d8);
      cVar7 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                        (param_1 + 0x754,param_1 + 0x788);
      if ((cVar7 == '\0') ||
         (((*(char *)(param_1 + 0x5aa) == '\0' || (local_23d == '\0')) &&
          ((*(char *)(param_1 + 0x5a8) == '\0' || (local_23c == '\0')))))) {
        uVar15 = 0;
      }
      else {
        uVar15 = 1;
      }
      uVar11 = FWeakObjectPtr::Get(local_2c0);
      FUN_1412cf480(param_1,uVar11,uVar15,*(undefined1 *)(param_1 + 0x5a8));
      uVar11 = FWeakObjectPtr::Get(local_2c0);
      FUN_1414f5b10(uVar11);
    }
  }
  cVar7 = FUN_140bf9690(0,param_1 + 0x978);
  if (cVar7 != '\0') {
    uVar11 = FWeakObjectPtr::Get(param_1 + 0x978);
    *(undefined8 *)(param_1 + 0x820) = uVar11;
    lVar13 = FWeakObjectPtr::Get(param_1 + 0x978);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar13 + 0x460,0);
    lVar13 = FWeakObjectPtr::Get(param_1 + 0x978);
    if ((((*(longlong *)(lVar13 + 0x538) != 0) &&
         (local_318 = (undefined1 *)0x0, *(longlong *)(lVar13 + 0x558) != 0)) &&
        (*(longlong *)(lVar13 + 0x498) != 0)) &&
       (*(longlong *)(*(longlong *)(lVar13 + 0x498) + 0x930) != 0)) {
      FUN_1425a2750(*(longlong *)(lVar13 + 0x538),*(undefined8 *)(lVar13 + 0x558),0);
    }
  }
  goto LAB_1412d21c5;
}



// FUNCTION 1412d2440 FUN_1412d2440 body=387 status=ok
// SIG undefined FUN_1412d2440(void)

void FUN_1412d2440(longlong *param_1,char param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = 0;
  plVar4 = (longlong *)param_1[0x115];
  uVar7 = (longlong)(int)param_1[0x116] & 0x1fffffffffffffff;
  if (plVar4 + (int)param_1[0x116] < plVar4) {
    uVar7 = uVar6;
  }
  if (uVar7 != 0) {
    do {
      lVar1 = *plVar4;
      if (lVar1 != 0) {
        if (param_2 == '\0') {
LAB_1412d24ba:
          uVar3 = 0;
        }
        else {
          cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                            ((longlong)param_1 + 0x754,param_1 + 0xf1);
          if (cVar2 == '\0') goto LAB_1412d24ba;
          uVar3 = 1;
        }
        FUN_142398ec0(lVar1,uVar3,1);
      }
      plVar4 = plVar4 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar7);
  }
  plVar5 = (longlong *)param_1[0x113];
  plVar4 = plVar5 + (longlong)(int)param_1[0x114] * 5;
  do {
    if (plVar5 == plVar4) {
      return;
    }
    if (plVar5[4] != 0) {
      if (param_2 != '\0') {
        uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
        cVar2 = FUN_142c48f60(plVar5[4],uVar3,0);
        if (cVar2 != '\0') {
          param_2 = '\x01';
          goto LAB_1412d2533;
        }
      }
      param_2 = '\0';
    }
LAB_1412d2533:
    if (*plVar5 != 0) {
      FUN_142398ec0(*plVar5,param_2);
      if (plVar5[2] != 0) {
        FUN_142398ec0(plVar5[2],param_2);
      }
      if (((param_2 == '\0') || ((char)param_1[0xb5] == '\0')) || (param_3 == '\0')) {
        (**(code **)(*(longlong *)*plVar5 + 0x638))((longlong *)*plVar5,0);
      }
      else {
        (**(code **)(*(longlong *)*plVar5 + 0x638))((longlong *)*plVar5,1);
        (**(code **)(*(longlong *)*plVar5 + 0x648))((longlong *)*plVar5,DAT_1462a2e64);
      }
    }
    plVar5 = plVar5 + 5;
  } while( true );
}



// FUNCTION 1412d25d0 FUN_1412d25d0 body=8 status=ok
// SIG undefined FUN_1412d25d0(void)

void FUN_1412d25d0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x7e8) = param_2;
  return;
}



// FUNCTION 1412d25e0 FUN_1412d25e0 body=54 status=ok
// SIG undefined FUN_1412d25e0(void)

void FUN_1412d25e0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x538) = param_2;
  if ((*(longlong *)(param_1 + 0x4b0) != 0) && (*(longlong *)(param_1 + 0x4a8) != 0)) {
    FUN_1425a28b0(param_2,*(undefined8 *)(param_1 + 0x4a8));
    return;
  }
  return;
}



// FUNCTION 1412d2620 FUN_1412d2620 body=202 status=ok
// SIG undefined FUN_1412d2620(void)

void FUN_1412d2620(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  *(longlong *)(param_1 + 0x730) = param_2;
  if ((param_2 != 0) && (lVar3 = *(longlong *)(param_1 + 0x748), lVar3 != 0)) {
    plVar4 = (longlong *)(lVar3 + 0x8e0);
    plVar5 = (longlong *)*plVar4;
    iVar2 = *(int *)(lVar3 + 0x8e8);
    plVar1 = plVar5 + iVar2;
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      if (*plVar5 == param_2) goto LAB_1412d26ab;
    }
    *(int *)(lVar3 + 0x8e8) = iVar2 + 1;
    if (*(int *)(lVar3 + 0x8ec) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar2);
    }
    *(undefined8 *)((longlong)iVar2 * 8 + *plVar4) = *(undefined8 *)(param_1 + 0x730);
  }
LAB_1412d26ab:
  if (((*(longlong *)(param_1 + 0x720) != 0) && (*(longlong *)(param_1 + 0x730) != 0)) &&
     (*(longlong *)(param_1 + 0x708) != 0)) {
    FUN_1425a28b0(*(longlong *)(param_1 + 0x730),*(undefined8 *)(param_1 + 0x708));
    return;
  }
  return;
}



// FUNCTION 1412d26f0 FUN_1412d26f0 body=68 status=ok
// SIG undefined FUN_1412d26f0(void)

void FUN_1412d26f0(longlong param_1,int param_2,longlong *param_3)

{
  if (((param_3 != (longlong *)0x0) && (-1 < param_2)) && (param_2 < *(int *)(param_1 + 0x38))) {
    if (*(longlong *)((longlong)param_2 * 0x38 + *(longlong *)(param_1 + 0x30)) != 0) {
      (**(code **)(*param_3 + 0x928))(param_3);
    }
    FUN_1423424e0(param_3);
  }
  return;
}



// FUNCTION 1412d2740 FUN_1412d2740 body=151 status=ok
// SIG undefined FUN_1412d2740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412d2740(longlong param_1,char param_2)

{
  char cVar1;
  
  if (param_2 == '\0') {
    if ((*(int *)(param_1 + 0x4a8) != 0) && (*(longlong **)(param_1 + 0x4a0) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4a0) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x4a8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001412d27bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(longlong **)(param_1 + 0x4a0) + 0x40))();
          return;
        }
        goto LAB_1412d27c3;
      }
    }
  }
  else if ((*(int *)(param_1 + 0x4b8) != 0) && (*(longlong **)(param_1 + 0x4b0) != (longlong *)0x0))
  {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x4b8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001412d2784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0x40))();
        return;
      }
LAB_1412d27c3:
                    /* WARNING: Could not recover jumptable at 0x0001412d27cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x40))();
      return;
    }
  }
  return;
}



// FUNCTION 1412d27e0 FUN_1412d27e0 body=115 status=ok
// SIG undefined FUN_1412d27e0(void)

void FUN_1412d27e0(longlong param_1)

{
  if (*(char *)(param_1 + 0x5aa) == '\0') {
    *(undefined1 *)(param_1 + 0x5aa) = 1;
    *(undefined1 *)(param_1 + 0x890) = 1;
    if (*(longlong *)(param_1 + 0x8c8) != 0) {
      FUN_142397540(*(longlong *)(param_1 + 0x8c8),1);
    }
    FUN_1414f92f0(param_1);
    if (*(longlong *)(param_1 + 0x168) != 0) {
      FUN_142398ec0(*(longlong *)(param_1 + 0x168),1,2);
    }
    FUN_1412d0ba0(param_1);
    FUN_1412d0870(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1412d2860 FUN_1412d2860 body=835 status=ok
// SIG undefined FUN_1412d2860(void)

void FUN_1412d2860(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_20;
  
  if (*(char *)((longlong)param_1 + 0x5a9) != '\0') {
    return;
  }
  if ((char)param_1[0xb5] == '\0') {
    return;
  }
  uVar8 = 0;
  plVar10 = (longlong *)param_1[0x23];
  *(undefined1 *)((longlong)param_1 + 0x5a9) = 1;
  *(undefined1 *)((longlong)param_1 + 0x82d) = 1;
  if (plVar10 == (longlong *)0x0) goto LAB_1412d2978;
  lVar4 = FUN_14145f370();
  lVar6 = DAT_1468787e8;
  if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_1412d2978;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    uVar5 = 1;
    if (DVar3 == DAT_1468c21c0) goto LAB_1412d292a;
  }
  else {
LAB_1412d292a:
    uVar5 = uVar8;
  }
  if (0 < *(int *)(lVar6 + uVar5 * 4)) {
    *(undefined1 *)(plVar10 + 0x105) = 0;
  }
  lVar6 = (**(code **)(*plVar10 + 0xfa8))(plVar10);
  if ((lVar6 != 0) &&
     (lVar6 = (**(code **)(*plVar10 + 0xfa8))(plVar10), *(int *)(lVar6 + 0x48) == 0)) {
    FUN_140ccf680(plVar10,0);
    FUN_142dafbc0(plVar10 + 0x1ab,&DAT_1468787f0);
  }
LAB_1412d2978:
  lVar6 = param_1[0xbb];
  if (lVar6 != 0) {
    *(undefined4 *)(param_1 + 0x10e) = *(undefined4 *)(lVar6 + 0x84);
    *(undefined4 *)((longlong)param_1 + 0x874) = *(undefined4 *)(lVar6 + 0x88);
    *(undefined4 *)(param_1 + 0x10d) = *(undefined4 *)(lVar6 + 0x30);
    *(undefined1 *)((longlong)param_1 + 0x82c) = 2;
  }
  if ((param_1[0x13a] != 0) &&
     ((cVar2 = FUN_140d3ada0(), cVar2 != '\0' || (*(char *)(param_1[0x13a] + 0x17a) != '\0')))) {
    local_38 = 0xc2b20000;
    *(undefined4 *)((longlong)param_1 + 0xce4) = 0x3e19999a;
    *(undefined4 *)((longlong)param_1 + 0x864) = 0;
    local_20 = 0;
    local_30 = 0;
    FUN_142399b90(param_1[0xe5],&local_38,0,0,0);
  }
  FUN_1414f9400(param_1);
  if (param_1[0x2d] != 0) {
    FUN_142398ec0(param_1[0x2d],1,2);
  }
  FUN_1412d0870(param_1,1);
  FUN_1412d0ba0(param_1);
  bVar1 = true;
  plVar10 = (longlong *)param_1[0x115];
  uVar5 = (longlong)(int)param_1[0x116] & 0x1fffffffffffffff;
  if (plVar10 + (int)param_1[0x116] < plVar10) {
    uVar5 = uVar8;
  }
  if (uVar5 != 0) {
    do {
      lVar6 = *plVar10;
      if (lVar6 != 0) {
        cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                          ((longlong)param_1 + 0x754,param_1 + 0xf1);
        FUN_142398ec0(lVar6,cVar2 != '\0',1);
      }
      plVar10 = plVar10 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar5);
  }
  plVar9 = (longlong *)param_1[0x113];
  plVar10 = plVar9 + (longlong)(int)param_1[0x114] * 5;
  do {
    if (plVar9 == plVar10) {
      FUN_1412d0870(param_1,1);
      return;
    }
    if (plVar9[4] != 0) {
      if (bVar1) {
        uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
        cVar2 = FUN_142c48f60(plVar9[4],uVar7,0);
        if (cVar2 != '\0') {
          bVar1 = true;
          goto LAB_1412d2b09;
        }
      }
      bVar1 = false;
    }
LAB_1412d2b09:
    if (*plVar9 != 0) {
      FUN_142398ec0(*plVar9,bVar1);
      if (plVar9[2] != 0) {
        FUN_142398ec0(plVar9[2],bVar1);
      }
      if ((bVar1 == false) || ((char)param_1[0xb5] == '\0')) {
        (**(code **)(*(longlong *)*plVar9 + 0x638))((longlong *)*plVar9,0);
      }
      else {
        (**(code **)(*(longlong *)*plVar9 + 0x638))((longlong *)*plVar9,1);
        (**(code **)(*(longlong *)*plVar9 + 0x648))((longlong *)*plVar9,DAT_1462a2e64);
      }
    }
    plVar9 = plVar9 + 5;
  } while( true );
}



// FUNCTION 1412d2bb0 FUN_1412d2bb0 body=918 status=ok
// SIG undefined FUN_1412d2bb0(void)

void FUN_1412d2bb0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 local_res8;
  
  if (param_2 != 0) {
    cVar1 = FUN_140bf9690(0,param_1 + 0x18);
    if ((cVar1 != '\0') &&
       (lVar4 = FWeakObjectPtr::Get(param_1 + 0x18), *(longlong *)(lVar4 + 0x538) != 0)) {
      lVar4 = FWeakObjectPtr::Get(param_1 + 0x18);
      plVar6 = *(longlong **)(param_2 + 0x8e0);
      iVar9 = *(int *)(param_2 + 0x8e8);
      if (plVar6 != plVar6 + iVar9) {
        plVar11 = plVar6;
        do {
          if (*plVar11 == *(longlong *)(lVar4 + 0x538)) {
            iVar10 = (int)((longlong)plVar11 - (longlong)plVar6 >> 3);
            if ((-1 < iVar10) && (iVar10 < *(int *)(param_2 + 0x8e8))) {
              iVar2 = (iVar9 - iVar10) + -1;
              if (iVar2 != 0) {
                _guard_xfg_dispatch_icall_nop
                          (plVar6 + iVar10,plVar6 + (iVar10 + 1),(longlong)iVar2 << 3);
                iVar9 = *(int *)(param_2 + 0x8e8);
              }
              *(int *)(param_2 + 0x8e8) = iVar9 + -1;
              TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_2 + 0x8e0);
            }
            break;
          }
          plVar11 = plVar11 + 1;
        } while (plVar11 != plVar6 + iVar9);
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x10);
    if (lVar4 != 0) {
      uVar5 = UGameplayTagAssetInterface::GetPrivateStaticClass();
      plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar5);
      if ((plVar6 != (longlong *)0x0) && (lVar4 = (**(code **)(*plVar6 + 0x18))(plVar6), lVar4 != 0)
         ) {
        lVar4 = (**(code **)(*plVar6 + 0x18))(plVar6);
        plVar6 = *(longlong **)(param_2 + 0x8e0);
        iVar9 = *(int *)(param_2 + 0x8e8);
        for (plVar11 = plVar6; plVar11 != plVar6 + iVar9; plVar11 = plVar11 + 1) {
          if (*plVar11 == lVar4) {
            iVar10 = (int)((longlong)plVar11 - (longlong)plVar6 >> 3);
            if ((-1 < iVar10) && (iVar10 < *(int *)(param_2 + 0x8e8))) {
              iVar2 = (iVar9 - iVar10) + -1;
              if (iVar2 != 0) {
                _guard_xfg_dispatch_icall_nop
                          (plVar6 + iVar10,plVar6 + (iVar10 + 1),(longlong)iVar2 << 3);
                iVar9 = *(int *)(param_2 + 0x8e8);
              }
              *(int *)(param_2 + 0x8e8) = iVar9 + -1;
              TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_2 + 0x8e0);
            }
            break;
          }
        }
      }
    }
  }
  lVar4 = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  cVar1 = FUN_140bf9690(0,param_1 + 0x18);
  if (cVar1 != '\0') {
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x18);
    if (*(longlong *)(lVar7 + 0x168) != 0) {
      lVar7 = FWeakObjectPtr::Get(param_1 + 0x18);
      FUN_142398ec0(*(undefined8 *)(lVar7 + 0x168),0,2);
    }
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x18);
    FUN_142227350(uVar5,0,1);
  }
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x18) = (undefined4)local_res8;
  *(undefined4 *)(param_1 + 0x1c) = local_res8._4_4_;
  plVar6 = *(longlong **)(param_1 + 8);
  if (plVar6 != (longlong *)0x0) {
    lVar7 = plVar6[0xaa];
    if (lVar7 != 0) {
      FWeakObjectPtr::operator=(lVar7 + 0x1b0,0);
      local_res8 = 0;
      *(undefined8 *)(lVar7 + 0x1b8) = 0;
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x550);
      FWeakObjectPtr::operator=(lVar7 + 0x1d0,0);
      local_res8 = 0;
      *(undefined8 *)(lVar7 + 0x1d8) = 0;
      FUN_142f06500(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x550),0);
      *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x550) = 0;
      plVar6 = *(longlong **)(param_1 + 8);
    }
    (**(code **)(*plVar6 + 0x418))(plVar6,&DAT_146532190);
    iVar9 = *(int *)(*(longlong *)(param_1 + 8) + 0xc);
    if (iVar9 < (int)DAT_1469e91c4) {
      uVar8 = iVar9 >> 0x1f & 0xffff;
      uVar3 = iVar9 + uVar8;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar8) * 0x18;
    }
    *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) & 0xbfffffff;
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar4 != 0) {
    if (param_2 == 0) {
      FUN_142398ec0(lVar4,0,2);
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x3b0))(*(longlong **)(param_1 + 0x10),1);
    }
    else {
      local_res8 = lVar4;
      FUN_142397540(lVar4,1);
      FUN_142398ec0(lVar4,0,2);
      uVar5 = UGameplayTagAssetInterface::GetPrivateStaticClass();
      plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar5);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x48))(plVar6,0);
        (**(code **)(*plVar6 + 0x70))(plVar6);
      }
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2 + 0xcd0,&local_res8);
    }
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1412d2f50 FUN_1412d2f50 body=581 status=ok
// SIG undefined FUN_1412d2f50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1412d2f50(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined1 local_88 [16];
  longlong *local_78;
  undefined1 local_60;
  ushort local_5e;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined1 local_48 [16];
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 == 0) {
    return (longlong *)0x0;
  }
  FActorSpawnParameters::FActorSpawnParameters(local_88);
  local_38 = _DAT_146878340 & _DAT_146878350;
  uStack_34 = uRam0000000146878344 & uRam0000000146878354;
  uStack_30 = uRam0000000146878348 & uRam0000000146878358;
  uStack_2c = uRam000000014687834c & uRam000000014687835c;
  local_5e = local_5e | 4;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = uRam000000014687834c;
  local_48._8_4_ = *(float *)(param_2 + 0x40) + 200.0;
  local_48._0_8_ = *(undefined8 *)(param_2 + 0x38);
  local_48._12_4_ = 0;
  local_60 = 1;
  local_78 = param_1;
  plVar3 = (longlong *)FUN_142550d00(lVar2,*(undefined8 *)(param_2 + 0x20),&local_58,local_88);
  if (plVar3 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  (**(code **)(*plVar3 + 0x448))(plVar3,param_1);
  if (*(longlong *)(param_2 + 0x260) != 0) {
    lVar4 = FUN_142dfdfe0();
    lVar2 = *(longlong *)(param_2 + 0x260);
    for (lVar5 = lVar2; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar4) {
        if (lVar2 != 0) {
          if (lVar2 == 0) goto LAB_1412d309e;
          lVar4 = FUN_142dfdfe0();
          lVar2 = *(longlong *)(param_2 + 0x260);
          lVar5 = lVar2;
          goto joined_r0x0001412d3087;
        }
        break;
      }
    }
  }
  goto LAB_1412d311f;
joined_r0x0001412d3087:
  if (lVar5 == 0) goto LAB_1412d309e;
  if (lVar5 == lVar4) goto LAB_1412d30a0;
  lVar5 = *(longlong *)(lVar5 + 0x30);
  goto joined_r0x0001412d3087;
LAB_1412d309e:
  lVar2 = 0;
LAB_1412d30a0:
  lVar2 = UClass::GetDefaultObject<UDamageType>(lVar2);
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0xd8), lVar2 != 0)) {
    lVar5 = UARGetCandidateObjectAsyncTaskBlueprintProxy::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (*(char *)(param_2 + 0x25b) == '\0') {
        lVar2 = *(longlong *)(lVar2 + 0x60);
      }
      else {
        if (*(char *)(param_2 + 0x25b) != '\x01') goto LAB_1412d311f;
        lVar2 = *(longlong *)(lVar2 + 0x68);
      }
      plVar3[0x96] = lVar2;
    }
  }
LAB_1412d311f:
  plVar3[0x93] = (longlong)param_1;
  FUN_14128bb50(plVar3 + 0xb6,param_2 + 0x1f0);
  FUN_14222b9f0(plVar3,&local_58,1,0);
  local_90 = 0;
  local_98[0] = 0x1010000;
  FUN_1422232e0(plVar3,param_1[0xe4],local_98,0);
  return plVar3;
}



// FUNCTION 1412d31a0 FUN_1412d31a0 body=1397 status=ok
// SIG undefined FUN_1412d31a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412d31a0(longlong *param_1,longlong param_2,undefined1 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_1a8 [32];
  ulonglong local_188;
  undefined1 local_180;
  undefined8 local_178;
  undefined8 local_168;
  undefined4 local_160;
  longlong local_158;
  undefined4 local_150;
  undefined8 local_148;
  longlong local_140;
  undefined1 local_f0 [16];
  undefined1 local_e0 [104];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  if ((char)param_1[200] == '\0') {
    return;
  }
  if (*(char *)(param_2 + 600) == '\x05') {
    return;
  }
  uVar5 = (**(code **)(*param_1 + 0x148))();
  FUN_1412aab30(param_2 + 0x100,uVar5);
  cVar3 = FUN_140bf9670(0,param_2 + 0x18);
  plVar11 = (longlong *)0x0;
  if (cVar3 == '\0') {
    plVar6 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x18);
    if (plVar6 == (longlong *)0x0) {
      return;
    }
    lVar7 = USoUIInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return;
    }
  }
  else {
    plVar6 = (longlong *)FUN_1412d3a00(param_1[0xe4],param_2,*(undefined8 *)(param_2 + 0x100));
    if (plVar6 == (longlong *)0x0) {
LAB_1412d3277:
      plVar6 = plVar11;
    }
    else {
      lVar7 = USoUIInputKeySelector::GetPrivateStaticClass();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_1412d3277;
    }
    FWeakObjectPtr::operator=(param_2 + 0x18,plVar6);
  }
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  *(undefined1 *)(param_2 + 0x98) = param_3;
  FUN_141289e80(&local_148,param_2 + 0x100);
  uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  FUN_1412aab30(&local_148,uVar5);
  if (((*(longlong *)(param_2 + 0x10) == 0) && (0 < *(int *)(param_2 + 0x150))) &&
     (param_1[0xbe] != 0)) {
    lVar8 = FUN_1429f11d0();
    for (lVar7 = param_1[0xbe]; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
      if (lVar7 == lVar8) {
        if (param_1[0xbe] != 0) {
          plVar14 = (longlong *)(param_2 + 0x1e8);
          if (*plVar14 == 0) goto LAB_1412d339d;
          lVar8 = FUN_1429f11d0();
          lVar7 = *plVar14;
          goto joined_r0x0001412d3386;
        }
        break;
      }
    }
  }
LAB_1412d3636:
  FUN_14128bbb0(plVar6 + 0xb6,&local_148);
  (**(code **)(*plVar6 + 0x730))(plVar6,local_148);
  *(bool *)(plVar6 + 0xb3) = *(char *)(param_2 + 600) != '\x05';
  FUN_1414f55a0(plVar6);
  if (((char)plVar6[0xb3] == '\0') ||
     ((*(char *)((longlong)param_1 + 0x5aa) == '\0' &&
      (((char)param_1[0xb5] == '\0' || ((char)param_1[0x1a4] != '\0')))))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  FUN_1412cf480(param_1,plVar6,uVar5,(char)param_1[0xb5]);
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(local_78);
  FUN_140bff340(local_e0);
  FUN_140c64420(local_f0);
  if (local_140 != 0) {
    FMemory::Free();
  }
  return;
joined_r0x0001412d3386:
  if (lVar7 == 0) goto LAB_1412d339d;
  if (lVar7 == lVar8) {
    if (*plVar14 != 0) goto LAB_1412d33a4;
    goto LAB_1412d339d;
  }
  lVar7 = *(longlong *)(lVar7 + 0x30);
  goto joined_r0x0001412d3386;
LAB_1412d339d:
  plVar14 = param_1 + 0xbe;
LAB_1412d33a4:
  plVar14 = (longlong *)*plVar14;
  plVar13 = plVar11;
  if (plVar14 != (longlong *)0x0) {
    plVar9 = (longlong *)FUN_1429f11d0();
    plVar12 = plVar14;
    do {
      plVar13 = plVar14;
      if (plVar12 == plVar9) break;
      plVar12 = (longlong *)plVar12[6];
      plVar13 = plVar11;
    } while (plVar12 != (longlong *)0x0);
  }
  lVar7 = FUN_1412ccff0(param_1,plVar13);
  if (lVar7 == 0) {
    local_158 = 0;
    plVar13 = plVar11;
    if (plVar14 != (longlong *)0x0) {
      plVar9 = (longlong *)FUN_1429f11d0();
      plVar12 = plVar14;
      do {
        plVar13 = plVar14;
        if (plVar12 == plVar9) break;
        plVar12 = (longlong *)plVar12[6];
        plVar13 = plVar11;
      } while (plVar12 != (longlong *)0x0);
    }
    local_178 = 0;
    local_180 = 0;
    local_188 = 0;
    lVar7 = NewObject<USaveGame>(param_1,plVar13,local_158,0);
    if (lVar7 == 0) goto LAB_1412d3636;
  }
  uVar4 = 1;
  if ((char)param_1[0xea] == '\0') {
    uVar4 = *(undefined1 *)(param_2 + 0x1e5);
  }
  *(undefined1 *)((longlong)plVar6 + 0x59a) = uVar4;
  if (*(longlong *)(lVar7 + 400) != param_1[0xe4]) {
    local_168 = 0;
    local_158 = CONCAT44(local_158._4_4_,0x1000000);
    FUN_142382f60(lVar7,param_1[0xe4],&local_158,0);
  }
  lVar8 = plVar6[0x2d];
  if (lVar8 == 0) {
    local_168 = _DAT_1468b5d90;
    local_160 = DAT_1468b5d98;
  }
  else {
    local_168 = *(undefined8 *)(lVar8 + 0x220);
    local_160 = *(undefined4 *)(lVar8 + 0x228);
  }
  uVar2 = local_160;
  uVar5 = local_168;
  local_160 = uVar2;
  if (((*(char *)(param_2 + 0x1e5) != '\0') && ((longlong *)param_1[0x23] != (longlong *)0x0)) &&
     (lVar8 = (**(code **)(*(longlong *)param_1[0x23] + 0x678))(), local_160 = uVar2, lVar8 != 0)) {
    if (*(longlong *)(lVar8 + 0x168) == 0) {
      local_160 = DAT_1468b5d98;
    }
    else {
      local_160 = *(undefined4 *)(*(longlong *)(lVar8 + 0x168) + 0x228);
    }
    local_150 = local_160;
  }
  local_188 = local_188 & 0xffffffffffffff00;
  local_168 = uVar5;
  FUN_1423990b0(lVar7,&local_168,0,0);
  if (((char)param_1[0xb5] == '\0') || (*(char *)(param_2 + 0x9c) == '\0')) {
    lVar8 = param_1[0x129];
  }
  else {
    lVar8 = param_1[0x128];
  }
  lVar10 = UMovieSceneSection::GetChannelProxy(lVar7);
  if (lVar10 != lVar8) {
    if (((char)param_1[0xb5] == '\0') || (*(char *)(param_2 + 0x9c) == '\0')) {
      lVar8 = param_1[0x129];
    }
    else {
      lVar8 = param_1[0x128];
    }
    FUN_1412d0b30(lVar7,lVar8);
  }
  uVar5 = UGameplayTagAssetInterface::GetPrivateStaticClass();
  plVar11 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar7,uVar5);
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x20))(plVar11,*(undefined4 *)(param_2 + 0x150));
    uVar5 = FWeakObjectPtr::Get(param_2);
    (**(code **)(*plVar11 + 0x38))(plVar11,uVar5);
  }
  FUN_14234b150(lVar7);
  *(longlong *)(param_2 + 0x10) = lVar7;
  goto LAB_1412d3636;
}



// FUNCTION 1412d3720 FUN_1412d3720 body=205 status=ok
// SIG undefined FUN_1412d3720(void)

longlong FUN_1412d3720(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res10;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_res10 = 0;
  uVar1 = FUN_14149d260();
  lVar2 = FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  if ((param_2 != 0) && (lVar2 != 0)) {
    local_res10 = CONCAT44(local_res10._4_4_,0x1000000);
    FUN_142382f60(lVar2,param_2,&local_res10,0);
    FUN_14234b150(lVar2);
    FUN_1411fb160(lVar2,param_3,param_4,param_5);
  }
  return lVar2;
}



// FUNCTION 1412d37f0 FUN_1412d37f0 body=518 status=ok
// SIG undefined FUN_1412d37f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1412d37f0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  longlong *local_40;
  undefined1 local_28;
  
  lVar9 = 0;
  local_60 = 0;
  local_58 = 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = 0;
  cVar2 = FSoftObjectPath::operator==(&local_68,param_1 + 0x118);
  if ((cVar2 == '\0') && (param_2 != (longlong *)0x0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (!bVar1) {
    return 0;
  }
  lVar3 = (**(code **)(*param_2 + 0x148))(param_2);
  if (lVar3 == 0) {
    return 0;
  }
  FActorSpawnParameters::FActorSpawnParameters(local_50);
  local_28 = 1;
  if (param_2[0xa5] == 0) {
    return 0;
  }
  local_40 = param_2;
  AActor::GetWorldSettings(param_2);
  lVar5 = param_1 + 0x108;
  local_88 = _DAT_1468b5d90;
  local_80 = DAT_1468b5d98;
  local_98 = DAT_1468b5da0;
  local_90 = DAT_1468b5da8;
  lVar4 = FWeakObjectPtr::Get(lVar5);
  lVar8 = lVar9;
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(param_1 + 0x110)) || (*(longlong *)(param_1 + 0x118) == 0))
    goto LAB_1412d39b1;
    lVar4 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar5,lVar4);
    if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x110) = DAT_1464b56f4;
    }
    lVar4 = FWeakObjectPtr::Get(lVar5);
    if (lVar4 == 0) goto LAB_1412d39b1;
  }
  lVar5 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar6 = FUN_1414f8420();
    lVar5 = lVar4;
    do {
      lVar8 = lVar4;
      if (lVar5 == lVar6) break;
      lVar5 = *(longlong *)(lVar5 + 0x30);
      lVar8 = lVar9;
    } while (lVar5 != 0);
  }
LAB_1412d39b1:
  uVar7 = UWorld::SpawnActor(lVar3,lVar8,&local_88,&local_98,local_50);
  return uVar7;
}



// FUNCTION 1412d3a00 FUN_1412d3a00 body=852 status=ok
// SIG undefined FUN_1412d3a00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1412d3a00(longlong param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  ushort uVar9;
  longlong *plVar10;
  float fVar11;
  undefined1 auStack_108 [32];
  undefined4 local_e8 [2];
  undefined8 local_e0 [2];
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined1 local_a8;
  ushort local_a6;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined1 local_88 [16];
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (param_1 == 0) {
    return (longlong *)0x0;
  }
  lVar3 = *(longlong *)(param_1 + 0x120);
  if ((lVar3 == 0) && (lVar3 = FUN_1423407b0(), lVar3 == 0)) {
    return (longlong *)0x0;
  }
  FActorSpawnParameters::FActorSpawnParameters(local_d0);
  local_c0 = *(undefined8 *)(param_1 + 0x118);
  local_a8 = 1;
  lVar4 = UCheckBoxWidgetStyle::StaticClass();
  for (lVar7 = *(longlong *)(param_2 + 0x20); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
    if (lVar7 == lVar4) {
      uVar9 = 4;
      goto LAB_1412d3aa8;
    }
  }
  uVar9 = 0;
LAB_1412d3aa8:
  local_a6 = local_a6 & 0xfffb | uVar9;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar7 = 0;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    lVar7 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x588);
  }
  local_88 = ZEXT816(0);
  local_78 = _DAT_146878340 & _DAT_146878350;
  uStack_74 = uRam0000000146878344 & uRam0000000146878354;
  uStack_70 = uRam0000000146878348 & uRam0000000146878358;
  uStack_6c = uRam000000014687834c & uRam000000014687835c;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = uRam000000014687834c;
  if (lVar7 == 0) {
    fVar11 = 200.0;
  }
  else {
    fVar11 = *(float *)(lVar7 + 0x180);
  }
  puVar5 = (undefined8 *)FUN_1412c2e90(param_2,local_e0);
  local_88._8_4_ = fVar11 + *(float *)(puVar5 + 1);
  local_88._0_8_ = *puVar5;
  local_88._12_4_ = 0;
  plVar6 = (longlong *)FUN_142550d00(lVar3,*(undefined8 *)(param_2 + 0x20),&local_98,local_d0);
  if ((local_a6 & 4) == 0) goto LAB_1412d3cf4;
  if (plVar6 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  lVar3 = UCheckBoxWidgetStyle::StaticClass();
  if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar3 = *(longlong *)(param_1 + 0x118);
    if (lVar3 == 0) {
LAB_1412d3c31:
      lVar3 = 0;
    }
    else {
      lVar7 = FUN_1414f8420();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_1412d3c31;
    }
    plVar6[0x93] = lVar3;
    if (((param_3 != 0) && (fVar11 = *(float *)(param_3 + 0x13c), 0.0 < fVar11)) ||
       ((*(longlong *)(param_2 + 0xa0) != 0 &&
        (fVar11 = *(float *)(*(longlong *)(param_2 + 0xa0) + 0x13c), 0.0 < fVar11)))) {
      *(float *)(plVar6 + 0xb1) = fVar11;
    }
    (**(code **)(*plVar6 + 0x730))(plVar6,param_3);
    plVar10 = plVar6;
    if (param_3 == 0) {
      plVar6[0x96] = 0;
    }
    else {
      plVar6[0x96] = *(longlong *)(param_3 + 0xa8);
    }
  }
  else {
    plVar10 = (longlong *)0x0;
  }
  FUN_14222b9f0(plVar6,&local_98,1,0);
  if ((*(char *)(param_2 + 0x98) != '\0') && (cVar2 = FUN_140bf9690(0,param_2), cVar2 != '\0')) {
    uVar8 = FWeakObjectPtr::Get(param_2);
    (**(code **)(*plVar10 + 0x718))(plVar10,uVar8);
  }
LAB_1412d3cf4:
  if (plVar6 != (longlong *)0x0) {
    local_e8[0] = 0x1010000;
    local_e0[0] = 0;
    FUN_1422232e0(plVar6,param_1,local_e8,0);
  }
  return plVar6;
}



// FUNCTION 1412d3d60 FUN_1412d3d60 body=205 status=ok
// SIG undefined FUN_1412d3d60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412d3d60(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (((*(char *)(param_1 + 0x2c) != '\0') && (*(longlong *)(param_1 + 0x48) != 0)) &&
     (cVar1 = FUN_140bf9690(0,param_1 + 0x38), cVar1 != '\0')) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x38);
    lVar2 = *(longlong *)(lVar2 + 0x168);
    if (lVar2 == 0) {
      local_28 = _DAT_1468b5d90;
      local_20 = DAT_1468b5d98;
    }
    else {
      local_28 = *(undefined8 *)(lVar2 + 0x220);
      local_20 = *(undefined4 *)(lVar2 + 0x228);
    }
    local_18 = local_28;
    local_10 = local_20;
    cVar1 = FUN_1412c7bb0(*(undefined8 *)(param_1 + 0x48),&local_18);
    FUN_1423988d0(param_1 + -0x700,(cVar1 != '\0') + '\x01');
  }
  return;
}



// FUNCTION 1412d3e30 FUN_1412d3e30 body=1736 status=ok
// SIG undefined FUN_1412d3e30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412d3e30(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  float local_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [16];
  longlong *local_38;
  longlong lStack_30;
  
  operator==<UObject_const_,UObject_const_,FWeakObjectPtr>((longlong)param_1 + 0x754,param_1 + 0xf1)
  ;
  cVar6 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                    ((longlong)param_1 + 0x754,param_1 + 0xf1);
  if (cVar6 != '\0') {
    plVar2 = (longlong *)param_1[0x23];
    if (plVar2 != (longlong *)0x0) {
      lVar8 = FUN_14145f370();
      if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
          lVar8 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (lVar8 = (**(code **)(*plVar2 + 0x678))(plVar2), lVar8 != 0)) {
        lVar8 = *(longlong *)(lVar8 + 0x168);
        if (lVar8 == 0) {
          local_88 = _DAT_1468b5d90;
          local_80 = DAT_1468b5d98;
        }
        else {
          local_88 = *(undefined8 *)(lVar8 + 0x220);
          local_80 = *(float *)(lVar8 + 0x228);
        }
        fVar13 = (float)((ulonglong)local_88 >> 0x20) - *(float *)(param_1 + 0x111);
        fVar14 = (float)local_88 - *(float *)((longlong)param_1 + 0x884);
        fVar15 = local_80 - *(float *)((longlong)param_1 + 0x88c);
        *(bool *)(param_1 + 0x112) =
             0.0001 < SQRT(fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15);
      }
    }
    if ((int)param_1[0x11e] != (int)param_1[0x114]) {
      *(int *)(param_1 + 0x11e) = (int)param_1[0x114];
    }
  }
  if ((*(char *)((longlong)param_1 + 0xd22) != '\0') &&
     (*(char *)((longlong)param_1 + 0x9f9) != '\0')) {
    FUN_1412cbd00(param_1,param_1 + 0xf5);
    FUN_1412cbd00(param_1,param_1 + 0xf3);
    FUN_1412d6830(param_1);
    plVar12 = (longlong *)param_1[0x113];
    plVar2 = plVar12 + (longlong)(int)param_1[0x114] * 5;
    for (; plVar12 != plVar2; plVar12 = plVar12 + 5) {
      if ((plVar12[4] != 0) && (*plVar12 != 0)) {
        uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
        cVar6 = FUN_142c48f60(plVar12[4],uVar9,0);
        FUN_142398ec0(*plVar12,cVar6);
        if (plVar12[2] != 0) {
          FUN_142398ec0(plVar12[2],cVar6);
        }
        if (((cVar6 == '\0') || ((char)param_1[0xb5] == '\0')) || ((char)param_1[0x1a4] != '\0')) {
          (**(code **)(*(longlong *)*plVar12 + 0x638))((longlong *)*plVar12,0);
        }
        else {
          (**(code **)(*(longlong *)*plVar12 + 0x638))((longlong *)*plVar12,1);
          (**(code **)(*(longlong *)*plVar12 + 0x648))((longlong *)*plVar12,DAT_1462a2e64);
        }
      }
    }
    *(undefined1 *)((longlong)param_1 + 0xd22) = 0;
  }
  cVar6 = (char)param_1[0x1a4];
  if ((cVar6 != '\0') && (*(char *)((longlong)param_1 + 0x5aa) == '\0')) {
    if (*(char *)((longlong)param_1 + 0x5a9) != '\0') {
      if (cVar6 == '\x02') {
        lVar8 = param_1[0x128];
        if ((lVar8 != 0) && ((char)param_1[0x13f] == '\0')) {
          fVar13 = *(float *)(lVar8 + 0x210);
          local_38 = *(longlong **)(lVar8 + 0x210);
          fVar14 = *(float *)(lVar8 + 0x218);
          lStack_30 = *(longlong *)(lVar8 + 0x218);
          auVar3._4_4_ = -(uint)(*(float *)(lVar8 + 0x214) != *(float *)(lVar8 + 0x254));
          auVar3._0_4_ = -(uint)(fVar13 != *(float *)(lVar8 + 0x250));
          auVar3._8_4_ = -(uint)(fVar14 != *(float *)(lVar8 + 600));
          auVar3._12_4_ = -(uint)(*(float *)(lVar8 + 0x21c) != *(float *)(lVar8 + 0x25c));
          iVar7 = movmskps(2,auVar3);
          if (iVar7 != 0) {
            *(float *)(lVar8 + 0x250) = fVar13;
            *(float *)(lVar8 + 0x254) = *(float *)(lVar8 + 0x214);
            *(float *)(lVar8 + 600) = fVar14;
            *(float *)(lVar8 + 0x25c) = *(float *)(lVar8 + 0x21c);
            puVar10 = (undefined8 *)FQuat::Rotator(&local_38,&local_58);
            *(undefined8 *)(lVar8 + 0x260) = *puVar10;
            *(undefined4 *)(lVar8 + 0x268) = *(undefined4 *)(puVar10 + 1);
          }
          local_88 = *(undefined8 *)(lVar8 + 0x260);
          local_80 = *(float *)(lVar8 + 0x268);
          puVar10 = (undefined8 *)FRotator::Vector(&local_88,local_48);
          local_78 = *puVar10;
          local_70 = *(undefined4 *)(puVar10 + 1);
          local_68 = *(undefined8 *)(param_1[0x128] + 0x220);
          local_60 = *(float *)(param_1[0x128] + 0x228);
          fStack_50 = local_60;
          FUN_1412cdb90(param_1,param_2,&local_68,&local_78);
        }
        FUN_1412be590(param_1[0xe8]);
      }
      else if (cVar6 == '\x01') {
        lVar8 = param_1[0x128];
        if ((lVar8 != 0) && ((char)param_1[0x13f] == '\0')) {
          local_58 = *(float *)(lVar8 + 0x210);
          fStack_54 = *(float *)(lVar8 + 0x214);
          fStack_50 = *(float *)(lVar8 + 0x218);
          fStack_4c = *(float *)(lVar8 + 0x21c);
          auVar4._4_4_ = -(uint)(fStack_54 != *(float *)(lVar8 + 0x254));
          auVar4._0_4_ = -(uint)(local_58 != *(float *)(lVar8 + 0x250));
          auVar4._8_4_ = -(uint)(fStack_50 != *(float *)(lVar8 + 600));
          auVar4._12_4_ = -(uint)(fStack_4c != *(float *)(lVar8 + 0x25c));
          iVar7 = movmskps(1,auVar4);
          if (iVar7 != 0) {
            *(float *)(lVar8 + 0x250) = local_58;
            *(float *)(lVar8 + 0x254) = fStack_54;
            *(float *)(lVar8 + 600) = fStack_50;
            *(float *)(lVar8 + 0x25c) = fStack_4c;
            puVar10 = (undefined8 *)FQuat::Rotator(&local_58,local_48);
            *(undefined8 *)(lVar8 + 0x260) = *puVar10;
            *(undefined4 *)(lVar8 + 0x268) = *(undefined4 *)(puVar10 + 1);
          }
          local_68 = *(undefined8 *)(lVar8 + 0x260);
          local_60 = *(float *)(lVar8 + 0x268);
          puVar10 = (undefined8 *)FRotator::Vector(&local_68,&local_38);
          local_78 = *puVar10;
          local_70 = *(undefined4 *)(puVar10 + 1);
          local_88 = *(undefined8 *)(param_1[0x128] + 0x220);
          local_80 = *(float *)(param_1[0x128] + 0x228);
          fStack_50 = local_80;
          FUN_1412d4760(param_1,&local_88,&local_78,param_1 + 0x12d,(longlong)param_1 + 0x974);
        }
        FUN_1412be590(param_1[0xe7]);
      }
    }
    goto LAB_1412d43c7;
  }
  if (*(char *)((longlong)param_1 + 0x5a9) == '\0') {
    if (*(char *)((longlong)param_1 + 0x5aa) != '\0') {
      FUN_1412d6780(param_1,param_2);
      FUN_1412d5b70(param_1,param_2);
      FUN_1412cdf00(param_1);
    }
  }
  else {
    FUN_1412d7520(param_1,param_2);
  }
  cVar6 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                    ((longlong)param_1 + 0x754,param_1 + 0xf1);
  if (cVar6 == '\0') goto LAB_1412d43c7;
  lVar8 = param_1[0x23];
  if (lVar8 == 0) {
LAB_1412d4398:
    lStack_30 = 0;
  }
  else {
    lVar11 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
        != lVar11 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_1412d4398;
    lStack_30 = FUN_140cff1b0(lVar8);
  }
  local_38 = param_1;
  if (lStack_30 != 0) {
    FUN_1412b4360(&local_38,param_1 + 0xf5);
    FUN_1412b4360(&local_38,param_1 + 0xf3);
  }
LAB_1412d43c7:
  FUN_1422406d0(param_1,param_2);
  plVar2 = (longlong *)param_1[0x23];
  if (plVar2 != (longlong *)0x0) {
    lVar8 = FUN_14145f370();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (lVar8 = (**(code **)(*plVar2 + 0x678))(plVar2), lVar8 != 0)) {
      lVar8 = *(longlong *)(lVar8 + 0x168);
      if (lVar8 == 0) {
        puVar10 = &local_68;
        local_68 = _DAT_1468b5d90;
        local_60 = DAT_1468b5d98;
      }
      else {
        puVar10 = &local_88;
        local_80 = (float)*(undefined4 *)(lVar8 + 0x228);
        local_88 = *(undefined8 *)(lVar8 + 0x220);
      }
      uVar9 = *puVar10;
      lVar8 = param_1[0x129];
      uVar1 = *(undefined4 *)(puVar10 + 1);
      *(undefined8 *)((longlong)param_1 + 0x884) = uVar9;
      *(undefined4 *)((longlong)param_1 + 0x88c) = uVar1;
      if (lVar8 != 0) {
        *(undefined8 *)(lVar8 + 0x350) = uVar9;
        *(undefined4 *)(lVar8 + 0x358) = uVar1;
      }
      lVar8 = param_1[0x128];
      if (lVar8 != 0) {
        *(undefined8 *)(lVar8 + 0x350) = *(undefined8 *)((longlong)param_1 + 0x884);
        *(undefined4 *)(lVar8 + 0x358) = *(undefined4 *)((longlong)param_1 + 0x88c);
      }
    }
  }
  return;
}



// FUNCTION 1412d4500 FUN_1412d4500 body=595 status=ok
// SIG undefined FUN_1412d4500(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412d4500(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  float local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined1 local_28 [16];
  
  FUN_142357eb0();
  cVar5 = FUN_140bf9690(0,param_1 + 0x7f0);
  if (cVar5 != '\0') {
    cVar5 = *(char *)(param_1 + 0x7f8);
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x7f0);
    lVar6 = *(longlong *)(lVar6 + 0x168);
    if (cVar5 != '\0') {
      if (lVar6 == 0) {
        local_48 = 0;
        uStack_44 = 0;
        uStack_40 = 0;
        uStack_3c = 0;
        local_38 = _DAT_146878340 & _DAT_146878350;
        uStack_34 = uRam0000000146878344 & uRam0000000146878354;
        uStack_30 = uRam0000000146878348 & uRam0000000146878358;
        uStack_2c = uRam000000014687834c & uRam000000014687835c;
        uVar8 = 0;
        local_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        uStack_4c = uRam000000014687834c;
      }
      else {
        local_58 = *(undefined4 *)(lVar6 + 0x210);
        uStack_54 = *(undefined4 *)(lVar6 + 0x214);
        uStack_50 = *(undefined4 *)(lVar6 + 0x218);
        local_48 = *(undefined4 *)(lVar6 + 0x220);
        uStack_44 = *(undefined4 *)(lVar6 + 0x224);
        uStack_40 = *(undefined4 *)(lVar6 + 0x228);
        uStack_3c = *(undefined4 *)(lVar6 + 0x22c);
        local_38 = *(uint *)(lVar6 + 0x230);
        uStack_34 = *(uint *)(lVar6 + 0x234);
        uStack_30 = *(uint *)(lVar6 + 0x238);
        uStack_2c = *(uint *)(lVar6 + 0x23c);
        uStack_4c = *(uint *)(lVar6 + 0x21c);
        uVar8 = extraout_XMM0_Qa;
      }
      FUN_1412d01a0(uVar8,&local_58,0);
      return;
    }
    if (lVar6 == 0) {
      local_78 = _DAT_1468b5d90;
      local_60 = DAT_1468b5d98;
    }
    else {
      local_78 = *(undefined8 *)(lVar6 + 0x220);
      local_60 = *(float *)(lVar6 + 0x228);
    }
    pfVar1 = (float *)(param_1 + 0x280);
    local_60 = local_60 + 40.0;
    local_68 = local_78;
    if (((*(float *)(param_1 + 0x1f8) != *pfVar1) ||
        (*(float *)(param_1 + 0x1fc) != *(float *)(param_1 + 0x284))) ||
       (*(float *)(param_1 + 0x200) != *(float *)(param_1 + 0x288))) {
      local_78 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 0x1f8);
      auVar9._12_4_ = 0;
      auVar9._0_12_ = *(undefined1 (*) [12])(param_1 + 0x1f8);
      fVar2 = (float)DAT_146878310;
      fVar3 = DAT_146878310._4_4_;
      fVar4 = DAT_146878310._8_4_;
      auVar9 = divps(auVar9,_DAT_146878310);
      fVar11 = (float)local_78 - (float)(int)auVar9._0_4_ * fVar2;
      fVar12 = (float)((ulonglong)local_78 >> 0x20) - (float)(int)auVar9._4_4_ * fVar3;
      fVar13 = *(float *)(param_1 + 0x200) - (float)(int)auVar9._8_4_ * fVar4;
      fVar11 = (float)(((uint)(fVar11 + fVar2) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                      (uint)(fVar11 + fVar2));
      fVar12 = (float)(((uint)(fVar12 + fVar3) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                      (uint)(fVar12 + fVar3));
      fVar13 = (float)(((uint)(fVar13 + fVar4) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                      (uint)(fVar13 + fVar4));
      uVar10 = ((uint)(fVar13 - fVar4) ^ (uint)fVar13) & -(uint)(fRam0000000146878308 < fVar13) ^
               (uint)fVar13;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar10);
      *(ulonglong *)pfVar1 =
           CONCAT44(((uint)(fVar12 - fVar3) ^ (uint)fVar12) & -(uint)(fRam0000000146878304 < fVar12)
                    ^ (uint)fVar12,
                    ((uint)(fVar11 - fVar2) ^ (uint)fVar11) & -(uint)(_DAT_146878300 < fVar11) ^
                    (uint)fVar11);
      *(uint *)(param_1 + 0x288) = uVar10;
      puVar7 = (undefined8 *)FRotator::Quaternion(pfVar1,local_28);
      uVar8 = puVar7[1];
      *(undefined8 *)(param_1 + 0x270) = *puVar7;
      *(undefined8 *)(param_1 + 0x278) = uVar8;
    }
    local_78 = *(undefined8 *)(param_1 + 0x270);
    uStack_70 = *(undefined8 *)(param_1 + 0x278);
    FUN_142397be0(param_1,&local_68,&local_78,0,0,0);
  }
  return;
}



// FUNCTION 1412d4760 FUN_1412d4760 body=1363 status=ok
// SIG undefined FUN_1412d4760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412d4760(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 *param_5)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  undefined1 auStack_168 [32];
  undefined4 *local_148;
  ulonglong *local_140;
  undefined4 *local_138;
  undefined8 *local_130;
  ulonglong local_128;
  longlong local_120;
  undefined8 local_118;
  float local_110;
  float fStack_10c;
  float local_108;
  undefined8 local_100;
  float local_f8;
  undefined8 *local_f0;
  undefined1 *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined4 local_a8;
  undefined2 local_a4;
  longlong local_80;
  undefined8 local_78;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_e8 = param_5;
  if ((char)param_1[200] == '\0') {
    return;
  }
  if (*(char *)((longlong)param_1 + 0x5a9) == '\0') {
    return;
  }
  uVar13 = param_1[0x23];
  uVar15 = 0;
  local_f0 = param_4;
  if (uVar13 != 0) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(uVar13 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_1412d4806;
  }
  uVar13 = uVar15;
LAB_1412d4806:
  lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((((uVar13 != 0) && (lVar7 != 0)) && (param_1[0xbb] != 0)) && (param_1[0x128] != 0)) {
    local_f8 = *(float *)(param_2 + 1);
    uVar2 = *param_2;
    uVar3 = *param_3;
    fVar4 = *(float *)(param_3 + 1);
    bVar6 = false;
    local_c8 = 0;
    *param_5 = 0;
    local_a8 = 0;
    local_120 = 0;
    local_118 = 0;
    local_c0 = 0;
    local_80 = 0;
    local_78 = 0;
    local_60 = 0;
    local_58 = 0;
    local_b0 = 0;
    local_b8 = 0x10100;
    local_b4 = 0;
    local_a4 = 0x101;
    local_ac = 0;
    local_b2 = 0;
    local_dc = *(undefined4 *)(param_1[0xbb] + 0xdc);
    local_130 = &local_c8;
    local_138 = &local_e0;
    local_140 = &local_128;
    fVar1 = *(float *)(param_1 + 0xd1);
    bVar5 = false;
    local_108 = local_f8 + fVar4 * fVar1;
    local_100._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
    local_e0 = 2;
    local_100._0_4_ = (float)uVar2;
    local_128 = (ulonglong)(uint)(1 << (DAT_1462a2e64 & 0x1f));
    local_148 = &DAT_1464aa810;
    _local_110 = CONCAT44(local_100._4_4_ + (float)((ulonglong)uVar3 >> 0x20) * fVar1,
                          (float)local_100 + (float)uVar3 * fVar1);
    local_100 = uVar2;
    UWorld::SweepMultiByObjectType(lVar7,&local_120,&local_100,&local_110);
    if (((0 < (int)local_118) && ((*(byte *)((longlong)param_1 + 0x82c) & 0xfd) == 0)) &&
       (0 < (int)local_118)) {
      lVar7 = 0;
      bVar6 = false;
      do {
        lVar11 = (longlong)(int)uVar15 * 0x90;
        plVar8 = (longlong *)FWeakObjectPtr::Get(local_120 + 0x6c + lVar11);
        lVar9 = FWeakObjectPtr::Get(local_120 + 0x74 + lVar11);
        if ((lVar9 != 0) && (plVar8 != (longlong *)0x0)) {
          if ((plVar8 == param_1) && ((char)param_1[0x1a4] == '\0')) {
            *local_f0 = *(undefined8 *)(lVar7 + 0x14 + local_120);
            *(undefined4 *)(local_f0 + 1) = *(undefined4 *)(lVar7 + 0x1c + local_120);
            *local_e8 = 1;
          }
          else if (((char)param_1[0x1a4] == '\x01') && (plVar8[2] != 0)) {
            lVar10 = UCheckBoxWidgetStyle::StaticClass();
            for (lVar9 = plVar8[2]; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
              if (lVar9 == lVar10) {
                if ((*(byte *)(plVar8 + 0x10) & 1) == 0) {
                  lVar9 = FWeakObjectPtr::Get(local_120 + 0x74 + lVar11);
                  if (lVar9 != 0) {
                    lVar10 = FUN_142a175e0();
                    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                         (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                      bVar6 = false;
                    }
                    else {
                      bVar6 = true;
                    }
                    if (bVar6) {
                      uVar16 = FUN_1412c0d00(param_1,lVar9,local_120 + 0x14 + lVar11);
                      if (*(longlong *)(param_1[0xbb] + 0xb0) != 0) {
                        uVar16 = UCurveFloat::GetFloatValue
                                           (*(longlong *)(param_1[0xbb] + 0xb0),uVar16);
                        *(undefined4 *)((longlong)param_1 + 0x84c) = uVar16;
                      }
                    }
                  }
                  bVar6 = true;
                }
                plVar12 = (longlong *)param_1[0x104];
                if (plVar8 != plVar12) {
                  if (bVar5) break;
                  if (plVar12 != (longlong *)0x0) {
                    lVar9 = UCheckBoxWidgetStyle::StaticClass();
                    if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
                        != lVar9 + 0x88)) {
                      bVar5 = false;
                    }
                    else {
                      bVar5 = true;
                    }
                    if (bVar5) {
                      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                                (plVar12 + 0x8e,0);
                    }
                  }
                  param_1[0x104] = (longlong)plVar8;
                  lVar9 = UCheckBoxWidgetStyle::StaticClass();
                  if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
                      lVar9 + 0x88)) {
                    bVar5 = false;
                  }
                  else {
                    bVar5 = true;
                  }
                  local_128 = param_1[0x104];
                  plVar12 = (longlong *)0x0;
                  if (bVar5) {
                    plVar12 = plVar8;
                  }
                  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                            (param_1 + 0xa6,&local_128);
                  if (plVar12 != (longlong *)0x0) {
                    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                              (plVar12 + 0x8c,0);
                  }
                }
                bVar5 = true;
                break;
              }
            }
          }
        }
        uVar14 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar14;
        lVar7 = lVar7 + 0x90;
      } while ((int)uVar14 < (int)local_118);
    }
    if (((char)param_1[0x1a4] == '\x01') && (!bVar6)) {
      lVar7 = param_1[0x104];
      if (lVar7 != 0) {
        lVar9 = UCheckBoxWidgetStyle::StaticClass();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (lVar7 + 0x470,0);
        }
      }
      param_1[0x104] = 0;
      *(undefined4 *)((longlong)param_1 + 0x84c) = 0x3f800000;
    }
    if (local_60 != 0) {
      FMemory::Free();
    }
    if (local_80 != 0) {
      FMemory::Free();
    }
    if (local_120 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1412d4cc0 FUN_1412d4cc0 body=170 status=ok
// SIG undefined FUN_1412d4cc0(void)

void FUN_1412d4cc0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 local_28 [32];
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0xa00) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xa04) = 0;
    *(undefined8 *)(param_1 + 0xa10) = 0;
    *(undefined4 *)(param_1 + 0xa20) = 0;
    if ((*(int *)(param_1 + 0xa24) < 0) && (*(int *)(param_1 + 0xa24) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xa18,0);
    }
    if (*(undefined2 **)(param_1 + 0xa18) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0xa18) = 0;
    }
    *(undefined4 *)(param_1 + 0xa08) = 0;
    return;
  }
  uVar1 = FSoftObjectPath::FSoftObjectPath(local_28);
  FSoftObjectPath::operator=(param_1 + 0xa10,uVar1);
  FWeakObjectPtr::operator=((undefined4 *)(param_1 + 0xa00),param_2);
  LOCK();
  if (DAT_1464b56f4 == 0) {
    DAT_1464b56f4 = 0;
  }
  UNLOCK();
  *(int *)(param_1 + 0xa08) = DAT_1464b56f4;
  return;
}



// FUNCTION 1412d4d70 FUN_1412d4d70 body=442 status=ok
// SIG undefined FUN_1412d4d70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412d4d70(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  if ((*(longlong *)(param_1 + 0x938) != 0) && (lVar3 = FUN_1412bf4f0(), lVar3 != 0)) {
    if (param_2 != 0) {
      UCheckBoxWidgetStyle::StaticClass();
    }
    lVar1 = lVar3 + 0x18;
    cVar2 = FUN_140bf9690(0,lVar1);
    if (cVar2 == '\0') {
      lVar3 = *(longlong *)(lVar3 + 0x10);
      if (lVar3 != 0) {
        local_38 = *(undefined8 *)(lVar3 + 0x220);
        local_30 = *(undefined4 *)(lVar3 + 0x228);
        FUN_1412ac250(*(undefined8 *)(param_1 + 0x938),&local_38,CONCAT44(param_4,param_3));
      }
    }
    else {
      lVar4 = FWeakObjectPtr::Get(lVar1);
      lVar4 = *(longlong *)(lVar4 + 0x168);
      if (lVar4 == 0) {
        local_48 = _DAT_1468b5d90;
        local_40 = DAT_1468b5d98;
      }
      else {
        local_48 = *(undefined8 *)(lVar4 + 0x220);
        local_40 = *(undefined4 *)(lVar4 + 0x228);
      }
      local_38 = local_48;
      local_30 = local_40;
      FUN_1412ac250(*(undefined8 *)(param_1 + 0x938),&local_38,CONCAT44(param_4,param_3));
      lVar4 = FWeakObjectPtr::Get(lVar1);
      *(undefined1 *)(lVar4 + 0x599) = 0;
      if (((*(char *)(param_1 + 0x5aa) == '\0') || (*(char *)(lVar3 + 0x9b) == '\0')) &&
         ((*(char *)(param_1 + 0x5a8) == '\0' ||
          ((*(char *)(param_1 + 0xd20) != '\0' || (*(char *)(lVar3 + 0x9c) == '\0')))))) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      uVar5 = FWeakObjectPtr::Get(lVar1);
      FUN_1412cf480(param_1,uVar5,uVar6,*(undefined1 *)(param_1 + 0x5a8));
    }
  }
  return;
}



// FUNCTION 1412d4f30 FUN_1412d4f30 body=354 status=ok
// SIG undefined FUN_1412d4f30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412d4f30(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined8 local_18;
  float local_10;
  
  cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(param_1 + 0x754,param_1 + 0x788);
  if (cVar3 != '\0') {
    plVar1 = *(longlong **)(param_1 + 0x118);
    if (plVar1 != (longlong *)0x0) {
      lVar4 = FUN_14145f370();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar4 = (**(code **)(*plVar1 + 0x678))(plVar1);
        if (lVar4 != 0) {
          lVar4 = *(longlong *)(lVar4 + 0x168);
          if (lVar4 == 0) {
            local_18 = _DAT_1468b5d90;
            local_10 = DAT_1468b5d98;
          }
          else {
            local_18 = *(undefined8 *)(lVar4 + 0x220);
            local_10 = *(float *)(lVar4 + 0x228);
          }
          fVar6 = (float)((ulonglong)local_18 >> 0x20) - *(float *)(param_1 + 0x888);
          fVar5 = (float)local_18 - *(float *)(param_1 + 0x884);
          local_10 = local_10 - *(float *)(param_1 + 0x88c);
          *(bool *)(param_1 + 0x890) =
               0.0001 < SQRT(fVar6 * fVar6 + fVar5 * fVar5 + local_10 * local_10);
        }
      }
    }
    if (*(int *)(param_1 + 0x8f0) != *(int *)(param_1 + 0x8a0)) {
      *(int *)(param_1 + 0x8f0) = *(int *)(param_1 + 0x8a0);
    }
  }
  return;
}



// FUNCTION 1412d50a0 FUN_1412d50a0 body=2763 status=ok
// SIG undefined FUN_1412d50a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412d50a0(longlong *param_1,float param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  float *pfVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_1e8 [32];
  ulonglong *local_1c8;
  ulonglong *local_1c0;
  float *local_1b8;
  undefined8 *local_1b0;
  undefined8 local_1a8;
  float local_1a0;
  float local_198;
  float local_194;
  float local_190;
  float local_188 [4];
  undefined8 local_178;
  float local_170;
  ulonglong local_168;
  longlong local_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined2 local_124;
  undefined1 local_122;
  undefined4 local_120;
  undefined1 local_11c;
  undefined4 local_118;
  undefined2 local_114;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_d0;
  undefined8 local_c8;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  iVar6 = 0;
  if (*(char *)((longlong)param_1 + 0x82c) == '\0') {
    lVar3 = param_1[0xbb];
    fVar14 = 10000.0;
    if (lVar3 == 0) {
      fVar12 = 0.1;
    }
    else if ((char)param_1[0x103] == '\x02') {
      fVar14 = *(float *)(lVar3 + 0x70);
      fVar12 = *(float *)(lVar3 + 0x60);
    }
    else {
      fVar14 = *(float *)(lVar3 + 0x68);
      fVar12 = *(float *)(lVar3 + 0x60);
    }
    fVar13 = *(float *)(param_1 + 0x135);
    if ((lVar3 != 0) && (param_1[0xe5] != 0)) {
      fVar9 = *(float *)(param_1 + 0x106) + *(float *)((longlong)param_1 + 0x834);
      if (0.0001 < ABS(fVar9)) {
        fVar8 = *(float *)((longlong)param_1 + 0x9ac);
        fVar10 = param_2 * *(float *)((longlong)param_1 + 0x694);
        if (fVar8 <= fVar9) {
          fVar8 = fVar10 + fVar8;
          if (fVar9 <= fVar8) {
            fVar8 = fVar9;
          }
        }
        else {
          fVar8 = fVar8 - fVar10;
          if (fVar8 <= fVar9) {
            fVar8 = fVar9;
          }
        }
      }
      else {
        fVar8 = 0.0;
      }
      *(float *)((longlong)param_1 + 0x9ac) = fVar8;
      if ((0.0001 < ABS(fVar8)) && (*(longlong *)(lVar3 + 0xd0) != 0)) {
        fVar9 = (float)UCurveFloat::GetFloatValue
                                 (*(longlong *)(lVar3 + 0xd0),*(undefined4 *)(param_1[0xe5] + 0x2d0)
                                 );
        fVar14 = (*(float *)(param_1 + 0x106) + *(float *)((longlong)param_1 + 0x834)) *
                 fVar9 * param_2 * fVar14 + *(float *)((longlong)param_1 + 0x874);
        if ((fVar12 <= fVar14) && (fVar12 = fVar14, fVar13 <= fVar14)) {
          fVar12 = fVar13;
        }
        *(float *)((longlong)param_1 + 0x874) = fVar12;
      }
    }
    local_1a8 = param_1[0x133];
    local_1a0 = (float)param_1[0x134];
    local_178 = *(undefined8 *)((longlong)param_1 + 0x98c);
    local_1b8 = (float *)((ulonglong)local_1b8 & 0xffffffff00000000);
    local_170 = *(float *)((longlong)param_1 + 0x994);
    local_1c0 = (ulonglong *)CONCAT44(local_1c0._4_4_,0x3f800000);
    local_1c8 = (ulonglong *)CONCAT44(local_1c8._4_4_,0x43fa0000);
    FUN_1412c06c0(param_1,param_2,&local_178,&local_1a8);
    if (*(float *)((longlong)param_1 + 0xce4) <= 0.0) {
      lVar3 = param_1[0xbb];
      if (((lVar3 != 0) && (param_1[0x13a] != 0)) &&
         (fVar14 = *(float *)(param_1 + 0x108), 0.0001 < ABS(fVar14))) {
        if (*(char *)(param_1[0x13a] + 0x17f) == '\0') {
          fVar14 = -fVar14;
        }
        *(float *)((longlong)param_1 + 0x864) =
             fVar14 * *(float *)(lVar3 + 0x5c) * param_2 + *(float *)((longlong)param_1 + 0x864);
      }
    }
    else {
      lVar3 = param_1[0xbb];
      *(undefined4 *)((longlong)param_1 + 0x864) = 0;
      *(float *)((longlong)param_1 + 0xce4) = *(float *)((longlong)param_1 + 0xce4) - param_2;
    }
    if (((lVar3 != 0) && (param_1[0x13a] != 0)) &&
       (fVar14 = *(float *)((longlong)param_1 + 0x844), 0.0001 < ABS(fVar14))) {
      if (*(char *)(param_1[0x13a] + 0x17e) == '\0') {
        fVar14 = -fVar14;
      }
      fVar14 = fVar14 * *(float *)(lVar3 + 0x5c) * param_2 + *(float *)(param_1 + 0x10d);
      if ((char)param_1[0x1a4] == '\0') {
        fVar12 = *(float *)(lVar3 + 0x3c);
        if (*(float *)(lVar3 + 0x3c) <= fVar14) {
          fVar12 = *(float *)(lVar3 + 0x40);
LAB_1412d53b9:
          if (fVar14 <= fVar12) {
            fVar12 = fVar14;
          }
        }
      }
      else {
        fVar12 = *(float *)(lVar3 + 0xf8);
        if (fVar12 <= fVar14) {
          fVar12 = *(float *)(lVar3 + 0xf4);
          goto LAB_1412d53b9;
        }
      }
      *(float *)(param_1 + 0x10d) = fVar12;
    }
  }
  lVar3 = param_1[0x128];
  if (lVar3 == 0) {
    return;
  }
  lVar7 = param_1[0xe5];
  if (lVar7 == 0) {
    return;
  }
  lVar1 = param_1[0xbb];
  if (lVar1 == 0) {
    return;
  }
  uVar11 = *(undefined4 *)(lVar3 + 0x224);
  local_188[2] = *(float *)(lVar3 + 0x228);
  *(undefined4 *)((longlong)param_1 + 0x9bc) = *(undefined4 *)(lVar3 + 0x220);
  *(undefined4 *)(param_1 + 0x138) = uVar11;
  *(float *)((longlong)param_1 + 0x9c4) = local_188[2];
  if (*(char *)((longlong)param_1 + 0x82c) == '\0') {
    if ((char)param_1[0x103] == '\x02') {
      uVar11 = *(undefined4 *)(lVar1 + 0x9c);
    }
    else {
      uVar11 = *(undefined4 *)(lVar1 + 0x98);
    }
LAB_1412d545e:
    local_1a0 = (float)(*(uint *)(param_1 + 0x10c) ^ 0x80000000);
    local_1c8 = (ulonglong *)CONCAT44(local_1c8._4_4_,uVar11);
    local_188[2] = SUB164(*(undefined1 (*) [16])(lVar7 + 0x220),8);
    local_1a8 = param_1[0x10b] ^ 0x8000000080000000;
    local_178 = SUB168(*(undefined1 (*) [16])(lVar7 + 0x220),0);
    local_170 = local_188[2];
    FMath::VInterpTo(local_188,&local_178,&local_1a8,param_2);
    lVar7 = param_1[0xe5];
    pfVar4 = local_188;
  }
  else {
    uVar11 = *(undefined4 *)(lVar1 + 0x6c);
    if (*(char *)((longlong)param_1 + 0x82c) != '\x02') goto LAB_1412d545e;
    pfVar4 = &local_198;
    local_198 = -*(float *)(param_1 + 0x10b);
    local_194 = -*(float *)((longlong)param_1 + 0x85c);
    local_190 = -*(float *)(param_1 + 0x10c);
  }
  local_1a8 = *(ulonglong *)pfVar4;
  local_1a0 = pfVar4[2];
  local_1c8 = (ulonglong *)((ulonglong)local_1c8 & 0xffffffffffffff00);
  FUN_1423990b0(lVar7,&local_1a8,0,0);
  if ((((char)param_1[0x103] == '\x02') || (*(char *)((longlong)param_1 + 0x82c) != '\0')) ||
     ((param_1[0x104] != 0 ||
      (((fVar14 = *(float *)(param_1 + 0x109),
        fVar14 <= ABS(*(float *)((longlong)param_1 + 0x844)) + ABS(*(float *)(param_1 + 0x108)) ||
        (fVar14 <= ABS(*(float *)((longlong)param_1 + 0x83c)) + ABS(*(float *)(param_1 + 0x107))))
       || (fVar14 <= ABS(*(float *)((longlong)param_1 + 0x834)) + ABS(*(float *)(param_1 + 0x106))))
      )))) {
    *(undefined1 *)(param_1 + 0x139) = 0;
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar3 != 0) {
      fVar14 = -*(float *)(param_1[0xe5] + 0x2d0);
      pfVar4 = (float *)FUN_142369f10(param_1[0x128],local_188);
      local_198 = fVar14 * *pfVar4 - *(float *)(param_1 + 0x10b);
      local_194 = fVar14 * pfVar4[1] - *(float *)((longlong)param_1 + 0x85c);
      local_190 = pfVar4[2] * fVar14 - *(float *)(param_1 + 0x10c);
      FUN_142369f10(param_1[0x128],&local_178);
      local_138 = 0;
      local_160 = 0;
      local_158 = 0;
      local_130 = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_120 = 0;
      local_128 = 0x10100;
      local_124 = 0;
      local_114 = 0x101;
      local_11c = 0;
      local_122 = 0;
      local_118 = 0;
      local_1b0 = &local_138;
      local_1b8 = local_188;
      local_1c0 = &local_168;
      fVar14 = *(float *)(param_1 + 0xd1);
      local_1c8 = (ulonglong *)&DAT_1464aa810;
      local_188[1] = (float)*(undefined4 *)(param_1[0xbb] + 0xdc);
      local_188[0] = 2.8026e-45;
      local_168 = (ulonglong)(uint)(1 << (DAT_1462a2e64 & 0x1f));
      local_1a0 = local_170 * fVar14 + local_190;
      local_1a8 = CONCAT44(local_178._4_4_ * fVar14 + local_194,
                           (float)local_178 * fVar14 + local_198);
      UWorld::SweepMultiByObjectType(lVar3,&local_160,&local_198,&local_1a8);
      if (0 < (int)local_158) {
        do {
          lVar3 = (longlong)iVar6;
          plVar5 = (longlong *)FWeakObjectPtr::Get(lVar3 * 0x90 + local_160 + 0x6c);
          if ((plVar5 == param_1) && ((char)param_1[0x1a4] == '\0')) {
            local_188[2] = -*(float *)(local_160 + 0x1c + lVar3 * 0x90);
            param_1[0x10b] =
                 CONCAT44(*(undefined4 *)(local_160 + 0x18 + lVar3 * 0x90),
                          *(undefined4 *)(local_160 + 0x14 + lVar3 * 0x90)) ^ 0x8000000080000000;
            *(float *)(param_1 + 0x10c) = local_188[2];
            *(undefined1 *)(param_1 + 0x139) = 1;
            break;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)local_158);
      }
      if (local_d0 != 0) {
        FMemory::Free();
      }
      if (local_f0 != 0) {
        FMemory::Free();
      }
      if (local_160 != 0) {
        FMemory::Free();
      }
    }
  }
  if ((0.0 < ABS(*(float *)((longlong)param_1 + 0x83c)) + ABS(*(float *)(param_1 + 0x107))) &&
     (0 < (int)param_1[0x199])) {
    *(undefined4 *)((longlong)param_1 + 0xd14) = 0xffffffff;
  }
  local_1a8 = CONCAT44(*(undefined4 *)((longlong)param_1 + 0x864),(int)param_1[0x10d]);
  local_188[2] = 0.0;
  local_1a0 = 0.0;
  local_1c8 = (ulonglong *)((ulonglong)local_1c8 & 0xffffffffffffff00);
  FUN_142399b90(param_1[0xe5],&local_1a8,0,0);
  if ((char)param_1[0x139] == '\0') {
    fVar14 = *(float *)((longlong)param_1 + 0x874);
    if (*(char *)((longlong)param_1 + 0x82c) != '\x02') {
      fVar14 = (float)FMath::FInterpTo(*(undefined4 *)(param_1[0xe5] + 0x2d0),fVar14,param_2,
                                       0x41200000);
    }
  }
  else {
    lVar3 = param_1[0xe5];
    local_198 = *(float *)(lVar3 + 0x220);
    local_194 = *(float *)(lVar3 + 0x224);
    local_190 = *(float *)(lVar3 + 0x228);
    local_148 = 0;
    local_1a0 = *(float *)((longlong)param_1 + 0x9c4);
    local_140 = 0x3f800000;
    local_188[0] = 0.0;
    local_188[1] = 0.0;
    local_188[2] = local_1a0;
    pfVar4 = (float *)FUN_142369f10(param_1[0x128],&local_160);
    local_1c0 = &local_178;
    local_1c8 = &local_168;
    local_1a8 = CONCAT44(local_194 - pfVar4[1] * 100000.0,local_198 - *pfVar4 * 100000.0);
    local_1a0 = local_190 - pfVar4[2] * 100000.0;
    cVar2 = UKismetMathLibrary::LinePlaneIntersection_OriginNormal
                      (&local_198,&local_1a8,local_188,&local_148);
    if (cVar2 == '\0') {
      fVar14 = *(float *)(param_1 + 0x10e);
      goto LAB_1412d5a85;
    }
    fVar14 = SQRT((local_194 - local_178._4_4_) * (local_194 - local_178._4_4_) +
                  (local_198 - (float)local_178) * (local_198 - (float)local_178) +
                  (local_190 - local_170) * (local_190 - local_170));
    *(float *)((longlong)param_1 + 0x874) = fVar14;
  }
  *(float *)(param_1 + 0x10e) = fVar14;
LAB_1412d5a85:
  *(float *)(param_1[0xe5] + 0x2d0) = fVar14;
  lVar3 = param_1[0xe5];
  *(float *)((longlong)param_1 + 0x81c) = *(float *)(lVar3 + 0x2d0) * 0.025 + 200.0;
  if ((*(char *)((longlong)param_1 + 0x82c) == '\x01') &&
     (fVar13 = *(float *)(param_1 + 0x10b) - *(float *)(lVar3 + 0x220) * -1.0,
     fVar12 = *(float *)((longlong)param_1 + 0x85c) - *(float *)(lVar3 + 0x224) * -1.0,
     fVar14 = *(float *)(param_1 + 0x10c) - *(float *)(lVar3 + 0x228) * -1.0,
     fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14 < 100.0)) {
    *(undefined2 *)((longlong)param_1 + 0x82c) = 0;
  }
  return;
}



// FUNCTION 1412d5b70 FUN_1412d5b70 body=1082 status=ok
// SIG undefined FUN_1412d5b70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412d5b70(longlong param_1)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar11;
  ulonglong *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 local_58;
  float local_50;
  ulonglong local_48;
  undefined4 local_40;
  ulonglong local_38;
  undefined4 local_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  ulonglong uVar10;
  
  cVar4 = FUN_1414f9500();
  if (cVar4 != '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x730) == 0) {
    return;
  }
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  lVar7 = FUN_14145f370();
  if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  lVar7 = (**(code **)(*plVar1 + 0x678))(plVar1);
  if (lVar7 == 0) {
    return;
  }
  cVar4 = FUN_140cfdb70(plVar1);
  if (cVar4 != '\0') {
    plVar8 = (longlong *)(**(code **)(*plVar1 + 0x758))(plVar1);
    if (plVar8 != (longlong *)0x0) {
      lVar9 = FUN_1413ffe00();
      if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        lVar7 = plVar8[0x2d];
        if (lVar7 == 0) {
          local_48 = _DAT_1468b5d90;
          local_40 = DAT_1468b5d98;
        }
        else {
          local_48 = *(ulonglong *)(lVar7 + 0x220);
          local_40 = *(undefined4 *)(lVar7 + 0x228);
        }
        (**(code **)(*plVar8 + 0x798))(plVar8,&local_58);
        uVar5 = _finite((double)(float)local_58);
        uVar10 = (ulonglong)uVar5;
        if (uVar5 == 0) {
LAB_1412d5d0e:
          uVar5 = (uint)CONCAT71((int7)(uVar10 >> 8),1);
        }
        else {
          uVar5 = _finite((double)local_58._4_4_);
          uVar10 = (ulonglong)uVar5;
          if (uVar5 == 0) goto LAB_1412d5d0e;
          uVar5 = _finite((double)local_50);
          uVar10 = (ulonglong)uVar5;
          if (uVar5 == 0) goto LAB_1412d5d0e;
          uVar5 = uVar5 & 0xffffff00;
        }
        if ((char)uVar5 != '\0') {
          lVar7 = plVar8[0x2d];
          if (lVar7 == 0) {
            uVar13 = (undefined4)DAT_1468b5da0;
            uVar14 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
            local_50 = DAT_1468b5da8;
          }
          else {
            local_28 = *(float *)(lVar7 + 0x210);
            fStack_24 = *(float *)(lVar7 + 0x214);
            fStack_20 = *(float *)(lVar7 + 0x218);
            fStack_1c = *(float *)(lVar7 + 0x21c);
            auVar2._4_4_ = -(uint)(*(float *)(lVar7 + 0x254) != fStack_24);
            auVar2._0_4_ = -(uint)(*(float *)(lVar7 + 0x250) != local_28);
            auVar2._8_4_ = -(uint)(*(float *)(lVar7 + 600) != fStack_20);
            auVar2._12_4_ = -(uint)(*(float *)(lVar7 + 0x25c) != fStack_1c);
            iVar6 = movmskps(uVar5,auVar2);
            if (iVar6 != 0) {
              *(float *)(lVar7 + 0x250) = local_28;
              *(float *)(lVar7 + 0x254) = fStack_24;
              *(float *)(lVar7 + 600) = fStack_20;
              *(float *)(lVar7 + 0x25c) = fStack_1c;
              puVar11 = (undefined8 *)FQuat::Rotator(&local_28,&local_38);
              *(undefined8 *)(lVar7 + 0x260) = *puVar11;
              *(undefined4 *)(lVar7 + 0x268) = *(undefined4 *)(puVar11 + 1);
            }
            uVar13 = (undefined4)*(undefined8 *)(lVar7 + 0x260);
            uVar14 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x260) >> 0x20);
            local_50 = *(float *)(lVar7 + 0x268);
          }
          local_58 = CONCAT44(uVar14,uVar13);
        }
        local_38 = local_48;
        local_30 = local_40;
        FUN_1423990b0(*(undefined8 *)(param_1 + 0x730),&local_38,0,0,0);
        uVar13 = local_58._4_4_;
        goto LAB_1412d5ee6;
      }
    }
    lVar9 = plVar1[0x15d];
    if (lVar9 != 0) {
      local_38 = *(ulonglong *)(lVar9 + 0x64c);
      local_30 = *(undefined4 *)(lVar9 + 0x654);
      FUN_1423990b0(*(undefined8 *)(param_1 + 0x730),&local_38,0,0,0);
      local_38 = *(ulonglong *)(plVar1[0x15d] + 0x658);
      uVar13 = (undefined4)(local_38 >> 0x20);
      local_30 = *(undefined4 *)(plVar1[0x15d] + 0x660);
      goto LAB_1412d5ee6;
    }
  }
  lVar7 = *(longlong *)(lVar7 + 0x168);
  if (lVar7 == 0) {
    local_30 = DAT_1468b5d98;
    puVar12 = &local_38;
    local_38 = _DAT_1468b5d90;
  }
  else {
    puVar12 = &local_48;
    local_40 = *(undefined4 *)(lVar7 + 0x228);
    local_48 = *(ulonglong *)(lVar7 + 0x220);
  }
  local_58 = *puVar12;
  local_50 = *(float *)(puVar12 + 1);
  FUN_1423990b0(*(undefined8 *)(param_1 + 0x730),&local_58,0,0,0);
  lVar7 = (**(code **)(*plVar1 + 0x720))(plVar1,&local_38);
  uVar13 = *(undefined4 *)(lVar7 + 4);
LAB_1412d5ee6:
  if ((*(longlong *)(param_1 + 0x9d0) == 0) ||
     (cVar4 = FPluginManager::GetPreloadBinaries(), cVar4 == '\0')) {
    if (*(longlong *)(param_1 + 0x5d8) == 0) {
      uVar14 = 0xc2a00000;
    }
    else {
      uVar14 = *(undefined4 *)(*(longlong *)(param_1 + 0x5d8) + 0x13c);
    }
    local_38 = CONCAT44(uVar13,uVar14);
  }
  else {
    if (*(longlong *)(param_1 + 0x5d8) == 0) {
      uVar5 = 0xc2a00000;
    }
    else {
      uVar5 = *(uint *)(*(longlong *)(param_1 + 0x5d8) + 0x13c);
    }
    local_38 = (ulonglong)uVar5;
  }
  local_40 = 0;
  local_30 = 0;
  FUN_142399b90(*(undefined8 *)(param_1 + 0x730),&local_38,0,0,0);
  return;
}



// FUNCTION 1412d5fb0 FUN_1412d5fb0 body=150 status=ok
// SIG undefined FUN_1412d5fb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412d5fb0(longlong *param_1)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined1 local_38 [16];
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  FUN_1412d6050();
  if (param_1[0xb8] != 0) {
    local_28 = _DAT_146878340 & _DAT_146878350;
    uStack_24 = uRam0000000146878344 & uRam0000000146878354;
    uStack_20 = uRam0000000146878348 & uRam0000000146878358;
    uStack_1c = uRam000000014687834c & uRam000000014687835c;
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = uRam000000014687834c;
    local_38._12_4_ = 0;
    local_38._0_12_ = *(undefined1 (*) [12])(param_1[0xb8] + 0x74);
    (**(code **)(*param_1 + 0x728))(param_1,&local_48,0,1);
  }
  return;
}



// FUNCTION 1412d6050 FUN_1412d6050 body=153 status=ok
// SIG undefined FUN_1412d6050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412d6050(longlong *param_1)

{
  longlong lVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  if ((param_1[0xb4] == 0) || ((*(byte *)(param_1[0xb4] + 0x39c) & 1) != 0)) {
    lVar1 = (**(code **)(*param_1 + 0x750))();
    if (lVar1 != 0) {
      lVar1 = *(longlong *)(lVar1 + 0x168);
      if (lVar1 == 0) {
        local_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        uStack_1c = 0;
        local_18 = _DAT_146878340 & _DAT_146878350;
        uStack_14 = uRam0000000146878344 & uRam0000000146878354;
        uStack_10 = uRam0000000146878348 & uRam0000000146878358;
        uStack_c = uRam000000014687834c & uRam000000014687835c;
        local_38 = 0;
        uStack_34 = 0;
        uStack_30 = 0;
        uStack_2c = uRam000000014687834c;
      }
      else {
        local_38 = *(undefined4 *)(lVar1 + 0x210);
        uStack_34 = *(undefined4 *)(lVar1 + 0x214);
        uStack_30 = *(undefined4 *)(lVar1 + 0x218);
        local_28 = *(undefined4 *)(lVar1 + 0x220);
        uStack_24 = *(undefined4 *)(lVar1 + 0x224);
        uStack_20 = *(undefined4 *)(lVar1 + 0x228);
        uStack_1c = *(undefined4 *)(lVar1 + 0x22c);
        local_18 = *(uint *)(lVar1 + 0x230);
        uStack_14 = *(uint *)(lVar1 + 0x234);
        uStack_10 = *(uint *)(lVar1 + 0x238);
        uStack_c = *(uint *)(lVar1 + 0x23c);
        uStack_2c = *(uint *)(lVar1 + 0x21c);
      }
      (**(code **)(*param_1 + 0x728))(param_1,&local_38,0,0);
    }
  }
  return;
}



// FUNCTION 1412d60f0 FUN_1412d60f0 body=215 status=ok
// SIG undefined FUN_1412d60f0(void)

void FUN_1412d60f0(longlong param_1)

{
  int iVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_1412d6050();
  if ((*(char *)(param_1 + 0x5ca) == '\0') &&
     (plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x590), plVar3 != (longlong *)0x0)) {
    lVar4 = FUN_1413ffe00();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar4 = (**(code **)(*plVar3 + 0x680))(plVar3), lVar4 != 0)) {
      lVar5 = UInputKeySelector::GetPrivateStaticClass();
      iVar1 = *(int *)(lVar5 + 0x90);
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < iVar1) ||
         (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)iVar1 * 8) !=
          lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (*(char *)(param_1 + 0x598) == *(char *)(lVar4 + 0x599))) {
        FUN_1412cf020(param_1,CONCAT71((int7)(int3)((uint)iVar1 >> 8),
                                       *(char *)(lVar4 + 0x599) == '\0'));
      }
    }
  }
  return;
}



// FUNCTION 1412d61d0 FUN_1412d61d0 body=513 status=ok
// SIG undefined FUN_1412d61d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412d61d0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
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
  FUN_1412d63e0();
  if ((((*(longlong *)(param_1 + -0x5e8) != 0) &&
       (cVar1 = FUN_140bf9690(0,param_1 + 0x38), cVar1 != '\0')) &&
      (lVar2 = FWeakObjectPtr::Get(param_1 + 0x38), (*(byte *)(lVar2 + 0x90) & 0x20) != 0)) &&
     (*(longlong *)(param_1 + 0x50) != 0)) {
    uStack_90 = 0;
    local_98 = &LAB_1412bd0a0;
    uVar3 = AActor::GetWorldTimerManager(*(undefined8 *)(param_1 + -0x5e8));
    plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1 + -0x700);
      *(undefined4 *)(plVar4 + 2) = (undefined4)local_98;
      *(undefined4 *)((longlong)plVar4 + 0x14) = local_98._4_4_;
      *(undefined4 *)(plVar4 + 3) = uStack_90;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_8c;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar2;
      *plVar4 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_88 = 0;
    local_80 = 0;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_a0 = 0xbf800000;
    local_a8 = 0;
    local_70 = 0;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar3,param_1 + 0x78,&local_88,0x3dcccccd);
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
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      lVar2 = FMemory::Realloc(plVar4,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
  }
  return;
}



// FUNCTION 1412d63e0 FUN_1412d63e0 body=925 status=ok
// SIG undefined FUN_1412d63e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412d63e0(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  float fStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [32];
  
  if (((*(byte *)(param_1 + -0x364) & 1) != 0) &&
     (cVar6 = FUN_140bf9690(0,param_1 + 0x38), cVar6 != '\0')) {
    fVar2 = *(float *)(param_1 + 0x28);
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x38);
    lVar7 = *(longlong *)(lVar7 + 0x168);
    if (lVar7 == 0) {
      fStack_30 = DAT_1468b5d98;
      puVar8 = &local_38;
      local_38 = _DAT_1468b5d90;
    }
    else {
      puVar8 = &local_48;
      uStack_40 = CONCAT44(uStack_40._4_4_,*(undefined4 *)(lVar7 + 0x228));
      local_48 = *(undefined8 *)(lVar7 + 0x220);
    }
    uVar3 = *puVar8;
    local_38 = *(undefined8 *)(param_1 + -0x4e0);
    fStack_30 = *(float *)(param_1 + -0x4d8);
    uStack_2c = *(undefined4 *)(param_1 + -0x4d4);
    uStack_40 = CONCAT44(uStack_40._4_4_,*(float *)(puVar8 + 1));
    if (((1e-08 < ABS(*(float *)(param_1 + -0x4e0) - (float)uVar3)) ||
        (local_48._4_4_ = (float)((ulonglong)uVar3 >> 0x20),
        1e-08 < ABS(*(float *)(param_1 + -0x4dc) - local_48._4_4_))) ||
       (1e-08 < ABS(fStack_30 - (fVar2 + *(float *)(puVar8 + 1))))) {
      local_48 = uVar3;
      if (((*(longlong *)(param_1 + 0x48) != 0) &&
          (*(char *)(*(longlong *)(param_1 + 0x48) + 0x5aa) != '\0')) &&
         ((*(longlong *)(param_1 + 0x30) != 0 && (*(longlong *)(param_1 + 0x10) != 0)))) {
        fVar2 = *(float *)(param_1 + 0x28);
        lVar7 = FWeakObjectPtr::Get(param_1 + 0x38);
        lVar7 = *(longlong *)(lVar7 + 0x168);
        if (lVar7 == 0) {
          local_48 = _DAT_1468b5d90;
          fStack_30 = DAT_1468b5d98;
        }
        else {
          local_48 = *(undefined8 *)(lVar7 + 0x220);
          fStack_30 = *(float *)(lVar7 + 0x228);
        }
        uStack_40 = CONCAT44(uStack_40._4_4_,fStack_30);
        fStack_30 = fStack_30 + fVar2;
        local_38 = local_48;
        puVar8 = (undefined8 *)FLinearColor::FLinearColor(local_28,&local_38);
        local_48 = *puVar8;
        uStack_40 = puVar8[1];
        FUN_1425a2be0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x10),&local_48);
      }
      fVar2 = *(float *)(param_1 + 0x28);
      lVar7 = FWeakObjectPtr::Get(param_1 + 0x38);
      lVar7 = *(longlong *)(lVar7 + 0x168);
      if (lVar7 == 0) {
        local_38 = _DAT_1468b5d90;
        fStack_30 = DAT_1468b5d98;
      }
      else {
        local_38 = *(undefined8 *)(lVar7 + 0x220);
        fStack_30 = *(float *)(lVar7 + 0x228);
      }
      fStack_30 = fVar2 + fStack_30;
      pfVar1 = (float *)(param_1 + -0x480);
      if (((*(float *)(param_1 + -0x508) != *pfVar1) ||
          (*(float *)(param_1 + -0x504) != *(float *)(param_1 + -0x47c))) ||
         (*(float *)(param_1 + -0x500) != *(float *)(param_1 + -0x478))) {
        local_48 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + -0x508);
        auVar9._12_4_ = 0;
        auVar9._0_12_ = *(undefined1 (*) [12])(param_1 + -0x508);
        fVar2 = (float)DAT_146878310;
        fVar4 = DAT_146878310._4_4_;
        fVar5 = DAT_146878310._8_4_;
        auVar9 = divps(auVar9,_DAT_146878310);
        fVar11 = (float)local_48 - (float)(int)auVar9._0_4_ * fVar2;
        fVar12 = (float)((ulonglong)local_48 >> 0x20) - (float)(int)auVar9._4_4_ * fVar4;
        fVar13 = *(float *)(param_1 + -0x500) - (float)(int)auVar9._8_4_ * fVar5;
        fVar11 = (float)(((uint)(fVar11 + fVar2) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                        (uint)(fVar11 + fVar2));
        fVar12 = (float)(((uint)(fVar12 + fVar4) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                        (uint)(fVar12 + fVar4));
        fVar13 = (float)(((uint)(fVar13 + fVar5) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                        (uint)(fVar13 + fVar5));
        uVar10 = ((uint)(fVar13 - fVar5) ^ (uint)fVar13) & -(uint)(fRam0000000146878308 < fVar13) ^
                 (uint)fVar13;
        uStack_40 = CONCAT44(uStack_40._4_4_,uVar10);
        *(ulonglong *)pfVar1 =
             CONCAT44(((uint)(fVar12 - fVar4) ^ (uint)fVar12) &
                      -(uint)(fRam0000000146878304 < fVar12) ^ (uint)fVar12,
                      ((uint)(fVar11 - fVar2) ^ (uint)fVar11) & -(uint)(_DAT_146878300 < fVar11) ^
                      (uint)fVar11);
        *(uint *)(param_1 + -0x478) = uVar10;
        puVar8 = (undefined8 *)FRotator::Quaternion(pfVar1,local_28);
        uVar3 = puVar8[1];
        *(undefined8 *)(param_1 + -0x490) = *puVar8;
        *(undefined8 *)(param_1 + -0x488) = uVar3;
      }
      local_48 = *(undefined8 *)(param_1 + -0x490);
      uStack_40 = *(undefined8 *)(param_1 + -0x488);
      FUN_142397be0(param_1 + -0x700,&local_38,&local_48,0,0,0);
    }
  }
  return;
}



// FUNCTION 1412d6780 FUN_1412d6780 body=170 status=ok
// SIG undefined FUN_1412d6780(void)

void FUN_1412d6780(longlong param_1,undefined4 param_2)

{
  longlong local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_1412b3ef0(local_res8,param_2,param_1 + 0x7a8);
  FUN_1412b3ef0(local_res8,param_2,param_1 + 0x798);
  FUN_1412b3ef0(local_res8,param_2,param_1 + 0x7c8);
  FUN_1412b3ef0(local_res8,param_2,param_1 + 0x7b8);
  FUN_1412b3ef0(local_res8,param_2,param_1 + 0x7e8);
  FUN_1412b3ef0(local_res8,param_2,param_1 + 0x7d8);
  FUN_1412b3ef0(local_res8,param_2,param_1 + 0x7f8);
  return;
}



// FUNCTION 1412d6830 FUN_1412d6830 body=229 status=ok
// SIG undefined FUN_1412d6830(void)

void FUN_1412d6830(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x7d8);
  lVar4 = (longlong)*(int *)(param_1 + 0x7e0) * 0x270 + lVar3;
  if (lVar3 != lVar4) {
    lVar5 = lVar3 + 0x18;
    do {
      cVar1 = FUN_140bf9690(0,lVar5);
      if (cVar1 != '\0') {
        plVar2 = (longlong *)FWeakObjectPtr::Get(lVar5);
        (**(code **)(*plVar2 + 0x748))();
      }
      lVar3 = lVar3 + 0x270;
      lVar5 = lVar5 + 0x270;
    } while (lVar3 != lVar4);
  }
  lVar3 = *(longlong *)(param_1 + 0x7e8);
  lVar4 = (longlong)*(int *)(param_1 + 0x7f0) * 0x270 + lVar3;
  if (lVar3 != lVar4) {
    lVar5 = lVar3 + 0x18;
    do {
      cVar1 = FUN_140bf9690(0,lVar5);
      if (cVar1 != '\0') {
        plVar2 = (longlong *)FWeakObjectPtr::Get(lVar5);
        (**(code **)(*plVar2 + 0x748))();
      }
      lVar3 = lVar3 + 0x270;
      lVar5 = lVar5 + 0x270;
    } while (lVar3 != lVar4);
  }
  return;
}



// FUNCTION 1412d6920 FUN_1412d6920 body=2365 status=ok
// SIG undefined FUN_1412d6920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412d6920(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  ulonglong *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  bool bVar18;
  int iVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  longlong local_res8;
  longlong local_res18;
  undefined8 local_238;
  float local_230;
  ulonglong local_228;
  float local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 uStack_208;
  undefined4 local_204;
  undefined8 local_200;
  undefined4 local_1f8;
  float local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined4 local_1d4;
  float local_1c8;
  undefined8 local_1c4;
  undefined4 local_1bc;
  float local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  float local_18c;
  undefined8 local_188;
  float local_180;
  ulonglong local_178;
  float local_170;
  undefined8 local_168;
  undefined4 local_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_140;
  undefined4 local_134;
  longlong local_130 [2];
  longlong local_120 [2];
  undefined1 local_110 [12];
  undefined1 local_104 [12];
  undefined1 local_f8 [12];
  undefined1 local_ec [180];
  
  bVar18 = false;
  (**(code **)(*param_1 + 0x148))();
  lVar11 = param_1[0x23];
  if (lVar11 != 0) {
    lVar10 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (local_res8 = *(longlong *)(lVar11 + 0x460), local_res8 != 0)) {
      lVar11 = UInputKeySelector::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(local_res8 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(local_res8 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_1412d69e0;
    }
  }
  local_res8 = 0;
LAB_1412d69e0:
  iVar19 = (int)param_1[0x118] + -1;
  *(undefined1 *)(param_1 + 0x112) = 0;
  if (-1 < iVar19) {
    plVar1 = param_1 + 0x117;
    lVar11 = (longlong)iVar19 * 0x30;
    lVar10 = (longlong)(int)param_1[0x118] * 0x30;
    fVar24 = local_238._4_4_;
    fVar22 = (float)local_238;
    fVar27 = local_230;
    local_res18 = lVar11;
    do {
      lVar12 = *plVar1;
      if (*(longlong **)(lVar11 + lVar12) == (longlong *)0x0) {
        if (*(longlong *)(lVar11 + 8 + lVar12) != 0) {
          lVar12 = *(longlong *)(lVar11 + 8 + lVar12);
          if (lVar12 != 0) {
            lVar12 = *(longlong *)(lVar12 + 0x168);
            if (lVar12 == 0) {
              local_1bc = DAT_1468b5d98;
              puVar13 = &local_1c4;
              local_1c4 = _DAT_1468b5d90;
            }
            else {
              puVar13 = (undefined8 *)&local_20c;
              local_20c = *(undefined4 *)(lVar12 + 0x220);
              local_204 = *(undefined4 *)(lVar12 + 0x228);
              uStack_208 = *(undefined4 *)(lVar12 + 0x224);
            }
            local_238 = *puVar13;
            fVar22 = (float)local_238;
            fVar24 = (float)((ulonglong)local_238 >> 0x20);
            local_230 = *(float *)(puVar13 + 1);
            local_1b0 = local_230;
            if (lVar12 == 0) {
              local_198 = DAT_1468b5da8;
              puVar13 = &local_1a0;
              local_1a0 = DAT_1468b5da0;
            }
            else {
              local_158 = *(float *)(lVar12 + 0x210);
              fStack_154 = *(float *)(lVar12 + 0x214);
              fStack_150 = *(float *)(lVar12 + 0x218);
              fStack_14c = *(float *)(lVar12 + 0x21c);
              auVar3._4_4_ = -(uint)(*(float *)(lVar12 + 0x254) != fStack_154);
              auVar3._0_4_ = -(uint)(*(float *)(lVar12 + 0x250) != local_158);
              auVar3._8_4_ = -(uint)(*(float *)(lVar12 + 600) != fStack_150);
              auVar3._12_4_ = -(uint)(*(float *)(lVar12 + 0x25c) != fStack_14c);
              iVar9 = movmskps(local_230,auVar3);
              if (iVar9 != 0) {
                *(float *)(lVar12 + 0x250) = local_158;
                *(float *)(lVar12 + 0x254) = fStack_154;
                *(float *)(lVar12 + 600) = fStack_150;
                *(float *)(lVar12 + 0x25c) = fStack_14c;
                puVar13 = (undefined8 *)FQuat::Rotator(&local_158,local_ec);
                *(undefined8 *)(lVar12 + 0x260) = *puVar13;
                *(undefined4 *)(lVar12 + 0x268) = *(undefined4 *)(puVar13 + 1);
              }
              local_1a4 = *(undefined4 *)(lVar12 + 0x268);
              puVar13 = &local_1ac;
              local_1ac = *(undefined8 *)(lVar12 + 0x260);
            }
            uVar21 = (uint)((ulonglong)*puVar13 >> 0x20);
            local_220 = *(float *)(puVar13 + 1);
            local_18c = local_220;
            goto LAB_1412d6f4a;
          }
          goto LAB_1412d6f50;
        }
        plVar16 = *(longlong **)(lVar11 + 0x10 + lVar12);
        lVar12 = (**(code **)(*plVar16 + 0x8e8))(plVar16,local_120);
        if (0 < *(int *)(lVar12 + 8)) {
          bVar18 = true;
          plVar16 = *(longlong **)(lVar11 + 0x10 + *plVar1);
          puVar13 = (undefined8 *)(**(code **)(*plVar16 + 0x8e8))(plVar16,local_130);
          plVar16 = (longlong *)param_1[0x11c];
          if (plVar16 != plVar16 + (int)param_1[0x11d]) {
            plVar17 = plVar16;
            do {
              if (*plVar17 == *(longlong *)*puVar13) {
                iVar9 = (int)((longlong)plVar17 - (longlong)plVar16 >> 3);
                goto LAB_1412d6b63;
              }
              plVar17 = plVar17 + 1;
            } while (plVar17 != plVar16 + (int)param_1[0x11d]);
          }
        }
        iVar9 = -1;
LAB_1412d6b63:
        if ((bVar18) && (bVar18 = false, local_130[0] != 0)) {
          FMemory::Free();
        }
        if (local_120[0] != 0) {
          FMemory::Free();
        }
        if ((iVar9 < 0) || ((int)param_1[0x11d] <= iVar9)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          iVar8 = (int)param_1[0x11d];
          iVar7 = (iVar8 - iVar9) + -1;
          if (iVar7 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(param_1[0x11c] + (longlong)iVar9 * 8),
                       (void *)(param_1[0x11c] + (longlong)(iVar9 + 1) * 8),(longlong)iVar7 << 3);
            iVar8 = (int)param_1[0x11d];
          }
          *(int *)(param_1 + 0x11d) = iVar8 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x11c);
        }
        plVar16 = *(longlong **)(lVar11 + 0x10 + *plVar1);
        if (plVar16 != (longlong *)0x0) {
          (**(code **)(*plVar16 + 0x3b0))(plVar16,1);
        }
        iVar9 = (int)param_1[0x118];
        iVar8 = (iVar9 - iVar19) + -1;
        if (iVar8 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + local_res18),(void *)(*plVar1 + lVar10),
                     (longlong)iVar8 * 0x30);
          iVar9 = (int)param_1[0x118];
        }
        *(int *)(param_1 + 0x118) = iVar9 + -1;
        TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(plVar1);
      }
      else {
        lVar12 = (**(code **)(**(longlong **)(lVar11 + lVar12) + 0x688))();
        if (lVar12 == 0) {
          plVar16 = *(longlong **)(lVar11 + *plVar1) + 0xa5;
          puVar13 = (undefined8 *)(**(code **)(*plVar16 + 0x90))(plVar16,local_104);
          local_238 = *puVar13;
          fVar24 = (float)((ulonglong)local_238 >> 0x20);
          fVar27 = *(float *)(puVar13 + 1);
          puVar15 = (ulonglong *)
                    USplineMeshComponent::GetSplineUpDir(*(undefined8 *)(lVar11 + *plVar1),local_f8)
          ;
          local_228 = *puVar15;
          local_220 = *(float *)(puVar15 + 1);
          fVar22 = (float)local_238;
          local_230 = fVar27;
        }
        else {
          lVar12 = (**(code **)(**(longlong **)(lVar11 + *plVar1) + 0x688))();
          lVar12 = *(longlong *)(lVar12 + 0x168);
          if (lVar12 == 0) {
            local_1f8 = DAT_1468b5d98;
            puVar13 = &local_200;
            local_200 = _DAT_1468b5d90;
          }
          else {
            puVar13 = (undefined8 *)&local_218;
            local_218 = *(undefined4 *)(lVar12 + 0x220);
            local_210 = *(undefined4 *)(lVar12 + 0x228);
            uStack_214 = *(undefined4 *)(lVar12 + 0x224);
          }
          local_238 = *puVar13;
          fVar22 = (float)local_238;
          fVar24 = (float)((ulonglong)local_238 >> 0x20);
          local_230 = *(float *)(puVar13 + 1);
          local_1ec = local_230;
          lVar14 = (**(code **)(**(longlong **)(lVar11 + *plVar1) + 0x688))();
          lVar12 = *(longlong *)(lVar14 + 0x168);
          if (lVar12 == 0) {
            local_1d4 = DAT_1468b5da8;
            puVar13 = &local_1dc;
            local_1dc = DAT_1468b5da0;
          }
          else {
            local_158 = *(float *)(lVar12 + 0x210);
            fStack_154 = *(float *)(lVar12 + 0x214);
            fStack_150 = *(float *)(lVar12 + 0x218);
            fStack_14c = *(float *)(lVar12 + 0x21c);
            auVar2._4_4_ = -(uint)(*(float *)(lVar12 + 0x254) != fStack_154);
            auVar2._0_4_ = -(uint)(*(float *)(lVar12 + 0x250) != local_158);
            auVar2._8_4_ = -(uint)(*(float *)(lVar12 + 600) != fStack_150);
            auVar2._12_4_ = -(uint)(*(float *)(lVar12 + 0x25c) != fStack_14c);
            iVar9 = movmskps((int)lVar14,auVar2);
            if (iVar9 != 0) {
              *(float *)(lVar12 + 0x250) = local_158;
              *(float *)(lVar12 + 0x254) = fStack_154;
              *(float *)(lVar12 + 600) = fStack_150;
              *(float *)(lVar12 + 0x25c) = fStack_14c;
              puVar13 = (undefined8 *)FQuat::Rotator(&local_158,local_110);
              *(undefined8 *)(lVar12 + 0x260) = *puVar13;
              *(undefined4 *)(lVar12 + 0x268) = *(undefined4 *)(puVar13 + 1);
            }
            local_1e0 = *(undefined4 *)(lVar12 + 0x268);
            puVar13 = &local_1e8;
            local_1e8 = *(undefined8 *)(lVar12 + 0x260);
          }
          uVar21 = (uint)((ulonglong)*puVar13 >> 0x20);
          local_220 = *(float *)(puVar13 + 1);
          local_1c8 = local_220;
LAB_1412d6f4a:
          local_228 = (ulonglong)uVar21 << 0x20;
          fVar27 = local_230;
        }
LAB_1412d6f50:
        lVar12 = *plVar1;
        uVar5 = local_228 >> 0x20;
        local_228 = local_228 & 0xffffffff00000000;
        fVar25 = fVar22 - *(float *)(lVar11 + 0x18 + lVar12);
        fVar20 = fVar24 - *(float *)(lVar11 + 0x1c + lVar12);
        fVar23 = fVar27 - *(float *)(lVar11 + 0x20 + lVar12);
        if (0.0001 < SQRT(fVar25 * fVar25 + fVar20 * fVar20 + fVar23 * fVar23)) {
LAB_1412d709b:
          bVar4 = true;
        }
        else {
          fVar25 = -*(float *)(lVar11 + 0x24 + lVar12);
          fVar23 = (float)uVar5 - *(float *)(lVar11 + 0x28 + lVar12);
          fVar26 = local_220 - *(float *)(lVar11 + 0x2c + lVar12);
          fVar20 = (float)(int)(fVar25 * 0.0027777778) * 360.0;
          if (ABS(fVar25) < ABS(fVar20)) {
            fVar20 = fVar25;
          }
          fVar25 = fVar25 - fVar20;
          if (fVar25 < 0.0) {
            fVar25 = fVar25 + 360.0;
          }
          if (fVar25 == 0.0) {
            fVar20 = (float)(int)(fVar23 * 0.0027777778) * 360.0;
            if (ABS(fVar23) < ABS(fVar20)) {
              fVar20 = fVar23;
            }
            fVar23 = fVar23 - fVar20;
            if (fVar23 < 0.0) {
              fVar23 = fVar23 + 360.0;
            }
            if (fVar23 != 0.0) goto LAB_1412d7090;
            fVar20 = (float)(int)(fVar26 * 0.0027777778) * 360.0;
            if (ABS(fVar26) < ABS(fVar20)) {
              fVar20 = fVar26;
            }
            fVar26 = fVar26 - fVar20;
            if (fVar26 < 0.0) {
              fVar26 = fVar26 + 360.0;
            }
            if (fVar26 != 0.0) goto LAB_1412d7090;
            bVar4 = true;
          }
          else {
LAB_1412d7090:
            bVar4 = false;
          }
          if (!bVar4) goto LAB_1412d709b;
          bVar4 = false;
        }
        if (*(longlong *)(lVar11 + *plVar1) == local_res8) {
          *(undefined8 *)((longlong)param_1 + 0x884) = local_238;
          *(float *)((longlong)param_1 + 0x88c) = local_230;
        }
        if ((bVar4) && (lVar12 = *(longlong *)(lVar11 + 0x10 + *plVar1), lVar12 != 0)) {
          local_180 = fVar27 + 40.0;
          local_188 = CONCAT44(fVar24,fVar22);
          local_140 = local_180;
          FUN_1423990b0(lVar12,&local_188,0,0,0);
          local_178 = local_228;
          local_170 = local_220;
          FUN_142399b90(*(undefined8 *)(lVar11 + 0x10 + *plVar1),&local_178,0,0,0);
          local_134 = 0x40e00000;
          local_168 = 0x40e0000040e00000;
          local_160 = 0x40e00000;
          FUN_142399c30(*(undefined8 *)(lVar11 + 0x10 + *plVar1),&local_168);
          lVar12 = *plVar1;
          *(undefined8 *)(lVar11 + 0x18 + lVar12) = local_238;
          *(float *)(lVar11 + 0x20 + lVar12) = local_230;
          lVar12 = *plVar1;
          *(ulonglong *)(lVar11 + 0x24 + lVar12) = local_228;
          *(float *)(lVar11 + 0x2c + lVar12) = local_220;
        }
        if (((char)param_1[0x112] != '\0') || (bVar4)) {
          uVar6 = 1;
        }
        else {
          uVar6 = 0;
        }
        *(undefined1 *)(param_1 + 0x112) = uVar6;
      }
      local_res18 = local_res18 + -0x30;
      lVar10 = lVar10 + -0x30;
      lVar11 = lVar11 + -0x30;
      iVar19 = iVar19 + -1;
    } while (-1 < iVar19);
  }
  return;
}



// FUNCTION 1412d7260 FUN_1412d7260 body=14 status=ok
// SIG undefined FUN_1412d7260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1412d7260(longlong *param_1,float param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  float *pfVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_1e8 [32];
  ulonglong *puStack_1c8;
  ulonglong *puStack_1c0;
  float *pfStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  float fStack_1a0;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float afStack_188 [4];
  undefined8 uStack_178;
  float fStack_170;
  ulonglong uStack_168;
  longlong lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined2 uStack_124;
  undefined1 uStack_122;
  undefined4 uStack_120;
  undefined1 uStack_11c;
  undefined4 uStack_118;
  undefined2 uStack_114;
  longlong lStack_f0;
  undefined8 uStack_e8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  ulonglong uStack_b8;
  
  if ((char)param_1[0x1a4] != '\0') {
    return;
  }
  uStack_b8 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  iVar6 = 0;
  if (*(char *)((longlong)param_1 + 0x82c) == '\0') {
    lVar3 = param_1[0xbb];
    fVar14 = 10000.0;
    if (lVar3 == 0) {
      fVar12 = 0.1;
    }
    else if ((char)param_1[0x103] == '\x02') {
      fVar14 = *(float *)(lVar3 + 0x70);
      fVar12 = *(float *)(lVar3 + 0x60);
    }
    else {
      fVar14 = *(float *)(lVar3 + 0x68);
      fVar12 = *(float *)(lVar3 + 0x60);
    }
    fVar13 = *(float *)(param_1 + 0x135);
    if ((lVar3 != 0) && (param_1[0xe5] != 0)) {
      fVar9 = *(float *)(param_1 + 0x106) + *(float *)((longlong)param_1 + 0x834);
      if (0.0001 < ABS(fVar9)) {
        fVar8 = *(float *)((longlong)param_1 + 0x9ac);
        fVar10 = param_2 * *(float *)((longlong)param_1 + 0x694);
        if (fVar8 <= fVar9) {
          fVar8 = fVar10 + fVar8;
          if (fVar9 <= fVar8) {
            fVar8 = fVar9;
          }
        }
        else {
          fVar8 = fVar8 - fVar10;
          if (fVar8 <= fVar9) {
            fVar8 = fVar9;
          }
        }
      }
      else {
        fVar8 = 0.0;
      }
      *(float *)((longlong)param_1 + 0x9ac) = fVar8;
      if ((0.0001 < ABS(fVar8)) && (*(longlong *)(lVar3 + 0xd0) != 0)) {
        fVar9 = (float)UCurveFloat::GetFloatValue
                                 (*(longlong *)(lVar3 + 0xd0),*(undefined4 *)(param_1[0xe5] + 0x2d0)
                                 );
        fVar14 = (*(float *)(param_1 + 0x106) + *(float *)((longlong)param_1 + 0x834)) *
                 fVar9 * param_2 * fVar14 + *(float *)((longlong)param_1 + 0x874);
        if ((fVar12 <= fVar14) && (fVar12 = fVar14, fVar13 <= fVar14)) {
          fVar12 = fVar13;
        }
        *(float *)((longlong)param_1 + 0x874) = fVar12;
      }
    }
    uStack_1a8 = param_1[0x133];
    fStack_1a0 = (float)param_1[0x134];
    uStack_178 = *(undefined8 *)((longlong)param_1 + 0x98c);
    pfStack_1b8 = (float *)((ulonglong)pfStack_1b8 & 0xffffffff00000000);
    fStack_170 = *(float *)((longlong)param_1 + 0x994);
    puStack_1c0 = (ulonglong *)CONCAT44(puStack_1c0._4_4_,0x3f800000);
    puStack_1c8 = (ulonglong *)CONCAT44(puStack_1c8._4_4_,0x43fa0000);
    FUN_1412c06c0(param_1,param_2,&uStack_178,&uStack_1a8);
    if (*(float *)((longlong)param_1 + 0xce4) <= 0.0) {
      lVar3 = param_1[0xbb];
      if (((lVar3 != 0) && (param_1[0x13a] != 0)) &&
         (fVar14 = *(float *)(param_1 + 0x108), 0.0001 < ABS(fVar14))) {
        if (*(char *)(param_1[0x13a] + 0x17f) == '\0') {
          fVar14 = -fVar14;
        }
        *(float *)((longlong)param_1 + 0x864) =
             fVar14 * *(float *)(lVar3 + 0x5c) * param_2 + *(float *)((longlong)param_1 + 0x864);
      }
    }
    else {
      lVar3 = param_1[0xbb];
      *(undefined4 *)((longlong)param_1 + 0x864) = 0;
      *(float *)((longlong)param_1 + 0xce4) = *(float *)((longlong)param_1 + 0xce4) - param_2;
    }
    if (((lVar3 != 0) && (param_1[0x13a] != 0)) &&
       (fVar14 = *(float *)((longlong)param_1 + 0x844), 0.0001 < ABS(fVar14))) {
      if (*(char *)(param_1[0x13a] + 0x17e) == '\0') {
        fVar14 = -fVar14;
      }
      fVar14 = fVar14 * *(float *)(lVar3 + 0x5c) * param_2 + *(float *)(param_1 + 0x10d);
      if ((char)param_1[0x1a4] == '\0') {
        fVar12 = *(float *)(lVar3 + 0x3c);
        if (*(float *)(lVar3 + 0x3c) <= fVar14) {
          fVar12 = *(float *)(lVar3 + 0x40);
LAB_1412d53b9:
          if (fVar14 <= fVar12) {
            fVar12 = fVar14;
          }
        }
      }
      else {
        fVar12 = *(float *)(lVar3 + 0xf8);
        if (fVar12 <= fVar14) {
          fVar12 = *(float *)(lVar3 + 0xf4);
          goto LAB_1412d53b9;
        }
      }
      *(float *)(param_1 + 0x10d) = fVar12;
    }
  }
  lVar3 = param_1[0x128];
  if (lVar3 == 0) {
    return;
  }
  lVar7 = param_1[0xe5];
  if (lVar7 == 0) {
    return;
  }
  lVar1 = param_1[0xbb];
  if (lVar1 == 0) {
    return;
  }
  uVar11 = *(undefined4 *)(lVar3 + 0x224);
  afStack_188[2] = *(float *)(lVar3 + 0x228);
  *(undefined4 *)((longlong)param_1 + 0x9bc) = *(undefined4 *)(lVar3 + 0x220);
  *(undefined4 *)(param_1 + 0x138) = uVar11;
  *(float *)((longlong)param_1 + 0x9c4) = afStack_188[2];
  if (*(char *)((longlong)param_1 + 0x82c) == '\0') {
    if ((char)param_1[0x103] == '\x02') {
      uVar11 = *(undefined4 *)(lVar1 + 0x9c);
    }
    else {
      uVar11 = *(undefined4 *)(lVar1 + 0x98);
    }
LAB_1412d545e:
    fStack_1a0 = (float)(*(uint *)(param_1 + 0x10c) ^ 0x80000000);
    puStack_1c8 = (ulonglong *)CONCAT44(puStack_1c8._4_4_,uVar11);
    afStack_188[2] = SUB164(*(undefined1 (*) [16])(lVar7 + 0x220),8);
    uStack_1a8 = param_1[0x10b] ^ 0x8000000080000000;
    uStack_178 = SUB168(*(undefined1 (*) [16])(lVar7 + 0x220),0);
    fStack_170 = afStack_188[2];
    FMath::VInterpTo(afStack_188,&uStack_178,&uStack_1a8,param_2);
    lVar7 = param_1[0xe5];
    pfVar4 = afStack_188;
  }
  else {
    uVar11 = *(undefined4 *)(lVar1 + 0x6c);
    if (*(char *)((longlong)param_1 + 0x82c) != '\x02') goto LAB_1412d545e;
    pfVar4 = &fStack_198;
    fStack_198 = -*(float *)(param_1 + 0x10b);
    fStack_194 = -*(float *)((longlong)param_1 + 0x85c);
    fStack_190 = -*(float *)(param_1 + 0x10c);
  }
  uStack_1a8 = *(ulonglong *)pfVar4;
  fStack_1a0 = pfVar4[2];
  puStack_1c8 = (ulonglong *)((ulonglong)puStack_1c8 & 0xffffffffffffff00);
  FUN_1423990b0(lVar7,&uStack_1a8,0,0);
  if ((((char)param_1[0x103] == '\x02') || (*(char *)((longlong)param_1 + 0x82c) != '\0')) ||
     ((param_1[0x104] != 0 ||
      (((fVar14 = *(float *)(param_1 + 0x109),
        fVar14 <= ABS(*(float *)((longlong)param_1 + 0x844)) + ABS(*(float *)(param_1 + 0x108)) ||
        (fVar14 <= ABS(*(float *)((longlong)param_1 + 0x83c)) + ABS(*(float *)(param_1 + 0x107))))
       || (fVar14 <= ABS(*(float *)((longlong)param_1 + 0x834)) + ABS(*(float *)(param_1 + 0x106))))
      )))) {
    *(undefined1 *)(param_1 + 0x139) = 0;
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar3 != 0) {
      fVar14 = -*(float *)(param_1[0xe5] + 0x2d0);
      pfVar4 = (float *)FUN_142369f10(param_1[0x128],afStack_188);
      fStack_198 = fVar14 * *pfVar4 - *(float *)(param_1 + 0x10b);
      fStack_194 = fVar14 * pfVar4[1] - *(float *)((longlong)param_1 + 0x85c);
      fStack_190 = pfVar4[2] * fVar14 - *(float *)(param_1 + 0x10c);
      FUN_142369f10(param_1[0x128],&uStack_178);
      uStack_138 = 0;
      lStack_160 = 0;
      uStack_158 = 0;
      uStack_130 = 0;
      lStack_f0 = 0;
      uStack_e8 = 0;
      lStack_d0 = 0;
      uStack_c8 = 0;
      uStack_120 = 0;
      uStack_128 = 0x10100;
      uStack_124 = 0;
      uStack_114 = 0x101;
      uStack_11c = 0;
      uStack_122 = 0;
      uStack_118 = 0;
      puStack_1b0 = &uStack_138;
      pfStack_1b8 = afStack_188;
      puStack_1c0 = &uStack_168;
      fVar14 = *(float *)(param_1 + 0xd1);
      puStack_1c8 = (ulonglong *)&DAT_1464aa810;
      afStack_188[1] = (float)*(undefined4 *)(param_1[0xbb] + 0xdc);
      afStack_188[0] = 2.8026e-45;
      uStack_168 = (ulonglong)(uint)(1 << (DAT_1462a2e64 & 0x1f));
      fStack_1a0 = fStack_170 * fVar14 + fStack_190;
      uStack_1a8 = CONCAT44(uStack_178._4_4_ * fVar14 + fStack_194,
                            (float)uStack_178 * fVar14 + fStack_198);
      UWorld::SweepMultiByObjectType(lVar3,&lStack_160,&fStack_198,&uStack_1a8);
      if (0 < (int)uStack_158) {
        do {
          lVar3 = (longlong)iVar6;
          plVar5 = (longlong *)FWeakObjectPtr::Get(lVar3 * 0x90 + lStack_160 + 0x6c);
          if ((plVar5 == param_1) && ((char)param_1[0x1a4] == '\0')) {
            afStack_188[2] = -*(float *)(lStack_160 + 0x1c + lVar3 * 0x90);
            param_1[0x10b] =
                 CONCAT44(*(undefined4 *)(lStack_160 + 0x18 + lVar3 * 0x90),
                          *(undefined4 *)(lStack_160 + 0x14 + lVar3 * 0x90)) ^ 0x8000000080000000;
            *(float *)(param_1 + 0x10c) = afStack_188[2];
            *(undefined1 *)(param_1 + 0x139) = 1;
            break;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)uStack_158);
      }
      if (lStack_d0 != 0) {
        FMemory::Free();
      }
      if (lStack_f0 != 0) {
        FMemory::Free();
      }
      if (lStack_160 != 0) {
        FMemory::Free();
      }
    }
  }
  if ((0.0 < ABS(*(float *)((longlong)param_1 + 0x83c)) + ABS(*(float *)(param_1 + 0x107))) &&
     (0 < (int)param_1[0x199])) {
    *(undefined4 *)((longlong)param_1 + 0xd14) = 0xffffffff;
  }
  uStack_1a8 = CONCAT44(*(undefined4 *)((longlong)param_1 + 0x864),(int)param_1[0x10d]);
  afStack_188[2] = 0.0;
  fStack_1a0 = 0.0;
  puStack_1c8 = (ulonglong *)((ulonglong)puStack_1c8 & 0xffffffffffffff00);
  FUN_142399b90(param_1[0xe5],&uStack_1a8,0,0);
  if ((char)param_1[0x139] == '\0') {
    fVar14 = *(float *)((longlong)param_1 + 0x874);
    if (*(char *)((longlong)param_1 + 0x82c) != '\x02') {
      fVar14 = (float)FMath::FInterpTo(*(undefined4 *)(param_1[0xe5] + 0x2d0),fVar14,param_2,
                                       0x41200000);
    }
  }
  else {
    lVar3 = param_1[0xe5];
    fStack_198 = *(float *)(lVar3 + 0x220);
    fStack_194 = *(float *)(lVar3 + 0x224);
    fStack_190 = *(float *)(lVar3 + 0x228);
    uStack_148 = 0;
    fStack_1a0 = *(float *)((longlong)param_1 + 0x9c4);
    uStack_140 = 0x3f800000;
    afStack_188[0] = 0.0;
    afStack_188[1] = 0.0;
    afStack_188[2] = fStack_1a0;
    pfVar4 = (float *)FUN_142369f10(param_1[0x128],&lStack_160);
    puStack_1c0 = &uStack_178;
    puStack_1c8 = &uStack_168;
    uStack_1a8 = CONCAT44(fStack_194 - pfVar4[1] * 100000.0,fStack_198 - *pfVar4 * 100000.0);
    fStack_1a0 = fStack_190 - pfVar4[2] * 100000.0;
    cVar2 = UKismetMathLibrary::LinePlaneIntersection_OriginNormal
                      (&fStack_198,&uStack_1a8,afStack_188,&uStack_148);
    if (cVar2 == '\0') {
      fVar14 = *(float *)(param_1 + 0x10e);
      goto LAB_1412d5a85;
    }
    fVar14 = SQRT((fStack_194 - uStack_178._4_4_) * (fStack_194 - uStack_178._4_4_) +
                  (fStack_198 - (float)uStack_178) * (fStack_198 - (float)uStack_178) +
                  (fStack_190 - fStack_170) * (fStack_190 - fStack_170));
    *(float *)((longlong)param_1 + 0x874) = fVar14;
  }
  *(float *)(param_1 + 0x10e) = fVar14;
LAB_1412d5a85:
  *(float *)(param_1[0xe5] + 0x2d0) = fVar14;
  lVar3 = param_1[0xe5];
  *(float *)((longlong)param_1 + 0x81c) = *(float *)(lVar3 + 0x2d0) * 0.025 + 200.0;
  if ((*(char *)((longlong)param_1 + 0x82c) == '\x01') &&
     (fVar13 = *(float *)(param_1 + 0x10b) - *(float *)(lVar3 + 0x220) * -1.0,
     fVar12 = *(float *)((longlong)param_1 + 0x85c) - *(float *)(lVar3 + 0x224) * -1.0,
     fVar14 = *(float *)(param_1 + 0x10c) - *(float *)(lVar3 + 0x228) * -1.0,
     fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14 < 100.0)) {
    *(undefined2 *)((longlong)param_1 + 0x82c) = 0;
  }
  return;
}



// FUNCTION 1412d7330 FUN_1412d7330 body=151 status=ok
// SIG undefined FUN_1412d7330(void)

void FUN_1412d7330(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_1414f8420();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (*(longlong *)(param_1 + 0x7e8) != 0)) && (*(longlong *)(param_1 + 0x7e0) != 0))
    {
      if (*(char *)(lVar1 + 0x5aa) == '\0') {
        uVar4 = 0;
      }
      else {
        uVar4 = 0x3f800000;
      }
      FUN_1425a2750(*(longlong *)(param_1 + 0x7e8),*(undefined8 *)(param_1 + 0x7e0),uVar4);
    }
  }
  return;
}



// FUNCTION 1412d73d0 FUN_1412d73d0 body=330 status=ok
// SIG undefined FUN_1412d73d0(void)

longlong FUN_1412d73d0(int param_1,int param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((0 < param_1) && (0 < param_2)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_1468509e4) {
      _Init_thread_header(&DAT_1468509e4);
      if (DAT_1468509e4 == -1) {
        uVar1 = FCommandLine::Get();
        DAT_1468509e0 = FParse::Param(uVar1,L"nullrhi");
        _Init_thread_footer(&DAT_1468509e4);
      }
    }
    if (((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) {
      uVar1 = GetTransientPackage();
      FUN_1417846f0(uVar1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar2 = UTexture2D::GetPrivateStaticClass();
      lVar3 = FUN_1417985e0(uVar2,uVar1,0,0,0,0,0,0,0);
      *(undefined1 *)(lVar3 + 0xe1) = param_3;
      FUN_14287a580(lVar3,param_1,param_2);
      FUN_142894320(lVar3,1);
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 1412d7520 FUN_1412d7520 body=623 status=ok
// SIG undefined FUN_1412d7520(void)

void FUN_1412d7520(longlong param_1,float param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  ulonglong in_stack_ffffffffffffff78;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 local_38 [16];
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  puVar6 = (undefined1 *)register0x00000020;
  if (0.0 < *(float *)(param_1 + 0xce4)) {
    *(undefined4 *)(param_1 + 0x864) = 0;
    local_50 = 0;
    local_70 = 0;
    *(float *)(param_1 + 0xce4) = *(float *)(param_1 + 0xce4) - param_2;
    local_78 = 0xc2b20000;
    puVar6 = (undefined1 *)
             FUN_142399b90(*(undefined8 *)(param_1 + 0x728),&local_78,0,0,
                           in_stack_ffffffffffffff78 & 0xffffffffffffff00);
  }
  lVar1 = *(longlong *)(param_1 + 0x940);
  if (lVar1 == 0) {
    FUN_1412d6780(param_1,param_2);
  }
  else if (*(char *)(param_1 + 0x9f8) == '\0') {
    local_28 = *(float *)(lVar1 + 0x210);
    fStack_24 = *(float *)(lVar1 + 0x214);
    fStack_20 = *(float *)(lVar1 + 0x218);
    fStack_1c = *(float *)(lVar1 + 0x21c);
    auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_24);
    auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_28);
    auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_20);
    auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_1c);
    iVar4 = movmskps((int)puVar6,auVar2);
    if (iVar4 != 0) {
      *(float *)(lVar1 + 0x250) = local_28;
      *(float *)(lVar1 + 0x254) = fStack_24;
      *(float *)(lVar1 + 600) = fStack_20;
      *(float *)(lVar1 + 0x25c) = fStack_1c;
      puVar7 = (undefined8 *)FQuat::Rotator(&local_28,&local_48);
      *(undefined8 *)(lVar1 + 0x260) = *puVar7;
      *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar7 + 1);
    }
    local_78 = *(undefined8 *)(lVar1 + 0x260);
    local_70 = *(undefined4 *)(lVar1 + 0x268);
    puVar7 = (undefined8 *)FRotator::Vector(&local_78,local_38);
    local_68 = *puVar7;
    local_60 = *(undefined4 *)(puVar7 + 1);
    local_58 = *(undefined8 *)(*(longlong *)(param_1 + 0x940) + 0x220);
    local_50 = *(undefined4 *)(*(longlong *)(param_1 + 0x940) + 0x228);
    fStack_40 = (float)local_50;
    uVar5 = FUN_1412d4760(param_1,&local_58,&local_68,param_1 + 0x968,param_1 + 0x974);
    lVar1 = *(longlong *)(param_1 + 0x940);
    local_48 = *(float *)(lVar1 + 0x210);
    fStack_44 = *(float *)(lVar1 + 0x214);
    fStack_40 = *(float *)(lVar1 + 0x218);
    fStack_3c = *(float *)(lVar1 + 0x21c);
    auVar3._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_44);
    auVar3._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_48);
    auVar3._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_40);
    auVar3._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_3c);
    iVar4 = movmskps(uVar5,auVar3);
    if (iVar4 != 0) {
      *(float *)(lVar1 + 0x250) = local_48;
      *(float *)(lVar1 + 0x254) = fStack_44;
      *(float *)(lVar1 + 600) = fStack_40;
      *(float *)(lVar1 + 0x25c) = fStack_3c;
      puVar7 = (undefined8 *)FQuat::Rotator(&local_48,local_38);
      *(undefined8 *)(lVar1 + 0x260) = *puVar7;
      *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar7 + 1);
    }
    local_58 = *(undefined8 *)(lVar1 + 0x260);
    local_50 = *(undefined4 *)(lVar1 + 0x268);
    puVar7 = (undefined8 *)FRotator::Vector(&local_58,&local_28);
    local_68 = *puVar7;
    local_60 = *(undefined4 *)(puVar7 + 1);
    local_78 = *(undefined8 *)(*(longlong *)(param_1 + 0x940) + 0x220);
    local_70 = *(undefined4 *)(*(longlong *)(param_1 + 0x940) + 0x228);
    fStack_40 = (float)local_70;
    FUN_1412cdb90(param_1,param_2,&local_78,&local_68);
  }
  if (*(char *)(param_1 + 0xd20) == '\0') {
    FUN_1412d50a0(param_1,param_2);
  }
  FUN_1414f94c0(param_1);
  return;
}



// FUNCTION 1412d77b0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USoUIInputKeySelector::GetPrivateStaticClass(void)

{
  if (DAT_146878fb0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"AdvancedInteractiveObjectOwnedGFxMenu",&DAT_146878fb0,
                  FUN_140447710,0x6a0,0x10000000,0,L"Engine",&LAB_1412d8e10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1412d9d00,&LAB_140447700,0);
  }
  return DAT_146878fb0;
}



// FUNCTION 1412d7880 FUN_1412d7880 body=162 status=ok
// SIG undefined FUN_1412d7880(void)

longlong FUN_1412d7880(void)

{
  if (DAT_146879010 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"AdvancedInteractiveObjectProxy",&DAT_146879010,FUN_1412d9d40,
                  0x4e8,0x10000008,0,L"Engine",&LAB_1412d8c40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146879010;
}



// FUNCTION 1412d7930 FUN_1412d7930 body=162 status=ok
// SIG undefined FUN_1412d7930(void)

longlong FUN_1412d7930(void)

{
  if (DAT_146878eb0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ActiveWeaponsComponent",&DAT_146878eb0,FUN_1412d9da0,0x7f8,
                  0x10000000,0,L"Engine",&LAB_1412d8c80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146878eb0;
}



// FUNCTION 1412d79e0 FUN_1412d79e0 body=47 status=ok
// SIG undefined FUN_1412d79e0(void)

longlong FUN_1412d79e0(void)

{
  if (DAT_146879008 == 0) {
    FUN_141786440(&DAT_146879008,&PTR_FUN_1447709c0);
  }
  return DAT_146879008;
}



// FUNCTION 1412d7a10 FUN_1412d7a10 body=47 status=ok
// SIG undefined FUN_1412d7a10(void)

longlong FUN_1412d7a10(void)

{
  if (DAT_146878fe0 == 0) {
    FUN_141786a30(&DAT_146878fe0,&PTR_FUN_1462a77c0);
  }
  return DAT_146878fe0;
}



// FUNCTION 1412d7a40 FUN_1412d7a40 body=47 status=ok
// SIG undefined FUN_1412d7a40(void)

longlong FUN_1412d7a40(void)

{
  if (DAT_146878fe8 == 0) {
    FUN_141786a30(&DAT_146878fe8,&PTR_FUN_1462a7800);
  }
  return DAT_146878fe8;
}


