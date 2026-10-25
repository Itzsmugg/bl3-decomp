// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142ed2aa0 FUN_142ed2aa0 body=91 status=ok
// SIG undefined FUN_142ed2aa0(void)

void FUN_142ed2aa0(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x318);
  *(int *)(param_1 + 0x328) = param_2;
  *(undefined1 *)(param_1 + 0x32c) = 1;
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x170) != 0)) {
    lVar2 = *(longlong *)(lVar1 + 0x198);
    bVar4 = false;
    if (lVar2 != 0) {
      bVar4 = param_2 == *(int *)(lVar2 + 0x270);
    }
    puVar3 = &DAT_1464aa6c0;
    if (!bVar4) {
      puVar3 = (undefined4 *)(param_1 + 0x330);
    }
    FUN_142f0c220(*(longlong *)(lVar1 + 0x170),puVar3,CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
    return;
  }
  return;
}



// FUNCTION 142ed2b00 FUN_142ed2b00 body=212 status=ok
// SIG undefined FUN_142ed2b00(void)

void FUN_142ed2b00(longlong param_1,float param_2)

{
  undefined8 uVar1;
  undefined1 local_res10;
  undefined2 local_res11;
  undefined1 local_res13;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  *(float *)(param_1 + 0x380) = param_2;
  *(undefined1 *)(param_1 + 900) = 1;
  if (*(longlong *)(param_1 + 0x340) != 0) {
    FUN_142f0c880(*(longlong *)(param_1 + 0x340),
                  (param_2 - *(float *)(param_1 + 0x354)) /
                  (*(float *)(param_1 + 0x358) - *(float *)(param_1 + 0x354)));
  }
  if (*(longlong *)(param_1 + 0x348) != 0) {
    if ((*(char *)(param_1 + 900) != '\0') &&
       (ABS(*(float *)(param_1 + 0x380) - *(float *)(param_1 + 0x368)) <= 0.001)) {
      local_28 = DAT_1464aa6c0;
      uStack_24 = DAT_1464aa6c4;
      uStack_20 = DAT_1464aa6c8;
      uStack_1c = DAT_1464aa6cc;
      FUN_142f0c220(*(longlong *)(param_1 + 0x348),&local_28,1);
      return;
    }
    local_res11 = 0xfdd4;
    local_res10 = 2;
    local_res13 = 0xff;
    uVar1 = FLinearColor::FLinearColor(local_18,&local_res10);
    FUN_142f0c220(*(undefined8 *)(param_1 + 0x348),uVar1,1);
  }
  return;
}



// FUNCTION 142ed2be0 FUN_142ed2be0 body=23 status=ok
// SIG undefined FUN_142ed2be0(void)

void FUN_142ed2be0(longlong *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x67) = param_2;
  *(undefined1 *)((longlong)param_1 + 0x33c) = 1;
                    /* WARNING: Could not recover jumptable at 0x000142ed2bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x330))();
  return;
}



// FUNCTION 142ed2c00 FUN_142ed2c00 body=571 status=ok
// SIG undefined FUN_142ed2c00(void)

ulonglong FUN_142ed2c00(longlong param_1,byte param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *local_48;
  int local_40;
  longlong *local_38;
  int local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar4 = 0;
  LOCK();
  uVar1 = *(uint *)(param_1 + 0x668);
  if (uVar1 == 0) {
    *(uint *)(param_1 + 0x668) = 0;
  }
  else {
    uVar4 = (ulonglong)uVar1;
  }
  UNLOCK();
  if ((bool)param_2 == (uVar1 != 0)) {
    return uVar4;
  }
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    return uVar4;
  }
  LOCK();
  *(uint *)(param_1 + 0x668) = (uint)param_2;
  UNLOCK();
  if (param_2 == 0) {
    FUN_142f06340(*(undefined8 *)(param_1 + 0x2b8),param_1 + 0x670);
    *(undefined8 *)(param_1 + 0x670) = 0;
    uVar4 = FUN_142f06340(*(undefined8 *)(param_1 + 0x2b8),param_1 + 0x678);
    *(undefined8 *)(param_1 + 0x678) = 0;
    return uVar4;
  }
  local_28 = &LAB_142ec9f40;
  uStack_20 = 0;
  local_48 = (longlong *)0x0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_40 = 3;
  local_48 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    *(undefined4 *)(plVar2 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar2 + 0x14) = local_28._4_4_;
    *(undefined4 *)(plVar2 + 3) = uStack_20;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_1c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_143fcff08;
  }
  FUN_142ee1c00(*(undefined8 *)(param_1 + 0x2b8),PTR_s_rollOver_14673ca28,param_1 + 0x670,&local_48)
  ;
  if (local_40 != 0) {
    if (local_48 == (longlong *)0x0) goto LAB_142ed2d1e;
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
LAB_142ed2d1e:
  uStack_20 = 0;
  local_38 = (longlong *)0x0;
  local_28 = &LAB_142ec9f30;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  local_30 = 3;
  local_38 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    *(undefined4 *)(plVar2 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar2 + 0x14) = local_28._4_4_;
    *(undefined4 *)(plVar2 + 3) = uStack_20;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_1c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_143fcff08;
  }
  uVar4 = FUN_142ee1c00(*(undefined8 *)(param_1 + 0x2b8),PTR_s_rollOut_14673ca20,param_1 + 0x678,
                        &local_38);
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) {
      return uVar4;
    }
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 == (longlong *)0x0) {
    return 0;
  }
  uVar4 = FMemory::Free(local_38);
  return uVar4;
}



// FUNCTION 142ed2e40 FUN_142ed2e40 body=19 status=ok
// SIG undefined FUN_142ed2e40(void)

void FUN_142ed2e40(longlong param_1,undefined1 param_2)

{
  if (*(longlong *)(param_1 + 800) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 800) + 0x308) = param_2;
  }
  return;
}



// FUNCTION 142ed2e60 FUN_142ed2e60 body=71 status=ok
// SIG undefined FUN_142ed2e60(void)

uint FUN_142ed2e60(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  bool bVar5;
  uint in_EAX;
  uint uVar6;
  longlong *plVar7;
  
  cVar4 = *(char *)(param_1 + 0x3b8);
  if (cVar4 == '\x01') {
    plVar7 = *(longlong **)(param_1 + 0x388);
  }
  else if (cVar4 == '\x02') {
    plVar7 = *(longlong **)(param_1 + 0x390);
  }
  else if (cVar4 == '\x03') {
    plVar7 = *(longlong **)(param_1 + 0x398);
  }
  else {
    if (cVar4 != '\x04') {
      return in_EAX;
    }
    plVar7 = *(longlong **)(param_1 + 0x3a0);
  }
  if (plVar7 != (longlong *)0x0) {
    fVar1 = *(float *)(plVar7 + 0x5e);
    fVar2 = *(float *)((longlong)plVar7 + 0x2f4);
    *(float *)((longlong)plVar7 + 0x2f4) = param_2;
    *(float *)((longlong)plVar7 + 0x2ec) = param_2;
    *(float *)(plVar7 + 0x5e) = param_2;
    *(undefined4 *)((longlong)plVar7 + 0x2fc) = 0;
    fVar3 = *(float *)(plVar7 + 0x2f);
    bVar5 = param_2 != fVar3;
    if (bVar5) {
      *(float *)(plVar7 + 0x2f) = param_2;
      (**(code **)(*plVar7 + 0x2b0))(fVar3,fVar3,param_2);
    }
    uVar6 = (uint)bVar5;
    if ((1e-08 < ABS(fVar1 - fVar2)) || (bVar5)) {
      LOCK();
      uVar6 = *(uint *)((longlong)plVar7 + 0x174);
      *(uint *)((longlong)plVar7 + 0x174) = 1;
      UNLOCK();
    }
    return uVar6;
  }
  return in_EAX;
}



// FUNCTION 142ed2eb0 FUN_142ed2eb0 body=107 status=ok
// SIG undefined FUN_142ed2eb0(void)

void FUN_142ed2eb0(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = 0x348;
  if (param_3 == '\0') {
    lVar5 = 0x330;
  }
  FKey::operator=(param_1 + lVar5,param_2);
  plVar4 = *(longlong **)(param_2 + 0x10);
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
  return;
}



// FUNCTION 142ed2f20 FUN_142ed2f20 body=722 status=ok
// SIG undefined FUN_142ed2f20(void)

void FUN_142ed2f20(longlong *param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined2 local_res10;
  undefined1 local_res12;
  undefined1 local_res13;
  
  iVar5 = *(int *)((longlong)param_1 + 0x5c);
  if (param_2 == iVar5) {
    return;
  }
  iVar3 = FUN_14103fac0(param_1,iVar5);
  iVar4 = FUN_14103fac0(param_1,param_2);
  plVar11 = (longlong *)0x0;
  *(int *)((longlong)param_1 + 0x5c) = param_2;
  plVar6 = plVar11;
  if ((iVar3 < 0) || ((int)param_1[0x11] <= iVar3)) {
    local_res10 = 0;
    local_res12 = 1;
    if ((iVar5 < 0) || (local_res13 = 0, (int)param_1[0xb] <= iVar5)) {
      local_res13 = 1;
    }
    if ((((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(*(longlong *)*param_1 + 0x18))(), cVar2 != '\0')) {
      if ((int)param_1[1] != 0) {
        plVar6 = (longlong *)*param_1;
      }
      lVar9 = 0;
LAB_142ed3027:
      (**(code **)(*plVar6 + 0x40))(plVar6,iVar5,lVar9,&local_res10);
    }
  }
  else {
    lVar9 = *(longlong *)(param_1[0x10] + (longlong)iVar3 * 8);
    if ((lVar9 != 0) && (lVar9 = *(longlong *)(lVar9 + 0x10), lVar9 != 0)) {
      local_res10 = 0;
      local_res12 = 1;
      if ((iVar5 < 0) || (local_res13 = 0, (int)param_1[0xb] <= iVar5)) {
        local_res13 = 1;
      }
      if ((((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) &&
         (cVar2 = (**(code **)(*(longlong *)*param_1 + 0x18))(), cVar2 != '\0')) {
        if ((int)param_1[1] != 0) {
          plVar6 = (longlong *)*param_1;
        }
        goto LAB_142ed3027;
      }
    }
  }
  plVar6 = plVar11;
  if ((iVar4 < 0) || ((int)param_1[0x11] <= iVar4)) {
    local_res10 = 0x100;
    local_res12 = 1;
    if ((param_2 < 0) || (local_res13 = 0, (int)param_1[0xb] <= param_2)) {
      local_res13 = 1;
    }
    if ((((int)param_1[1] == 0) || ((longlong *)*param_1 == (longlong *)0x0)) ||
       (cVar2 = (**(code **)(*(longlong *)*param_1 + 0x18))(), cVar2 == '\0')) goto LAB_142ed30fb;
    if ((int)param_1[1] != 0) {
      plVar6 = (longlong *)*param_1;
    }
    lVar9 = 0;
  }
  else {
    lVar9 = *(longlong *)(param_1[0x10] + (longlong)iVar4 * 8);
    if ((lVar9 == 0) || (lVar9 = *(longlong *)(lVar9 + 0x10), lVar9 == 0)) goto LAB_142ed30fb;
    local_res10 = 0x100;
    local_res12 = 1;
    if ((param_2 < 0) || (local_res13 = 0, (int)param_1[0xb] <= param_2)) {
      local_res13 = 1;
    }
    if ((((int)param_1[1] == 0) || ((longlong *)*param_1 == (longlong *)0x0)) ||
       (cVar2 = (**(code **)(*(longlong *)*param_1 + 0x18))(), cVar2 == '\0')) goto LAB_142ed30fb;
    if ((int)param_1[1] != 0) {
      plVar6 = (longlong *)*param_1;
    }
  }
  (**(code **)(*plVar6 + 0x40))(plVar6,param_2,lVar9,&local_res10);
LAB_142ed30fb:
  if (iVar3 != iVar4) {
    lVar9 = param_1[0xc];
    if ((param_1[0xd] != 0) && (*(longlong *)(param_1[0xd] + 0x10) != 0)) {
      iVar5 = FUN_142eed730();
      plVar10 = (longlong *)(longlong)(int)param_1[0x11];
      plVar8 = plVar11;
      plVar6 = plVar10;
      if (0 < (longlong)plVar10) {
        do {
          plVar7 = (longlong *)((longlong)plVar6 + -1);
          if ((char)lVar9 == '\0') {
            plVar7 = plVar8;
          }
          lVar1 = *(longlong *)(param_1[0x10] + (longlong)plVar7 * 8);
          if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) {
            plVar7 = plVar11;
            if (param_1[0xd] != 0) {
              plVar7 = *(longlong **)(param_1[0xd] + 0x10);
            }
            FUN_142f0bc30(plVar7,lVar1,iVar5 + -1);
          }
          plVar8 = (longlong *)((longlong)plVar8 + 1);
          plVar6 = (longlong *)((longlong)plVar6 + -1);
        } while ((longlong)plVar8 < (longlong)plVar10);
      }
      iVar3 = FUN_14103fac0(param_1,*(undefined4 *)((longlong)param_1 + 0x5c));
      if ((((-1 < iVar3) && (iVar3 < (int)param_1[0x11])) &&
          (lVar9 = *(longlong *)(param_1[0x10] + (longlong)iVar3 * 8), lVar9 != 0)) &&
         (lVar9 = *(longlong *)(lVar9 + 0x10), lVar9 != 0)) {
        if (param_1[0xd] != 0) {
          plVar11 = *(longlong **)(param_1[0xd] + 0x10);
        }
        FUN_142f0bc30(plVar11,lVar9,iVar5 + -1);
      }
    }
  }
  return;
}



// FUNCTION 142ed3200 FUN_142ed3200 body=203 status=ok
// SIG undefined FUN_142ed3200(void)

void FUN_142ed3200(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong local_38;
  longlong local_30;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  FWeakObjectPtr::operator=(local_28,0);
  FWeakObjectPtr::operator=(local_20,0);
  FWeakObjectPtr::operator=(local_18,0);
  FWeakObjectPtr::operator=(local_10,0);
  FWeakObjectPtr::operator=(local_28,param_3);
  FWeakObjectPtr::operator=(local_20,param_4);
  FWeakObjectPtr::operator=(local_18,param_5);
  FWeakObjectPtr::operator=(local_10,param_6);
  local_38 = *param_2;
  local_30 = 0;
  if (local_38 != 0) {
    local_30 = param_2[1];
  }
  FUN_142ed5c20(param_1,&local_38,local_28);
  return;
}



// FUNCTION 142ed32d0 FUN_142ed32d0 body=86 status=ok
// SIG undefined FUN_142ed32d0(void)

void FUN_142ed32d0(longlong *param_1,byte param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  *(byte *)(param_1 + 1) = param_2 ^ 1;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  if (cVar1 != cVar2) {
    (**(code **)(*param_1 + 0x30))(param_1,cVar2,cVar1,0);
  }
  return;
}



// FUNCTION 142ed3330 FUN_142ed3330 body=322 status=ok
// SIG undefined FUN_142ed3330(void)

char FUN_142ed3330(longlong *param_1,byte param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  uint local_50;
  byte local_48;
  undefined7 uStack_47;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint local_20;
  byte local_18;
  undefined7 uStack_17;
  
  LOCK();
  cVar1 = (char)param_1[2];
  bVar3 = cVar1 == '\0';
  if (bVar3) {
    *(char *)(param_1 + 2) = '\x01';
    cVar1 = '\0';
  }
  UNLOCK();
  if (bVar3) {
    cVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    *(byte *)(param_1 + 1) = param_2 ^ 1;
    cVar2 = (**(code **)(*param_1 + 0x10))(param_1);
    if (cVar1 != cVar2) {
      (**(code **)(*param_1 + 0x30))(param_1,cVar2,cVar1,0);
    }
    local_50 = 2;
    local_58 = (longlong *)0x0;
    local_68 = 0xffffffffffffffff;
    uStack_60 = 0xffffffffffffffff;
    local_48 = param_2;
    FUN_14208efa0(param_1 + -0x2e,"enabled",&local_68);
    if ((local_50 >> 6 & 1) != 0) {
      (**(code **)(*local_58 + 0x10))(local_58,&local_68,CONCAT71(uStack_47,local_48));
    }
    local_28 = (longlong *)0x0;
    local_20 = 2;
    local_38 = 0xffffffffffffffff;
    uStack_30 = 0xffffffffffffffff;
    local_18 = param_2;
    FUN_14208efa0(param_1 + -0x2e,"mouseEnabled",&local_38);
    if ((local_20 >> 6 & 1) != 0) {
      (**(code **)(*local_28 + 0x10))(local_28,&local_38,CONCAT71(uStack_17,local_18));
    }
    LOCK();
    cVar1 = (char)param_1[2];
    if (cVar1 == '\x01') {
      *(char *)(param_1 + 2) = '\0';
      cVar1 = '\x01';
    }
    UNLOCK();
  }
  return cVar1;
}



// FUNCTION 142ed3480 FUN_142ed3480 body=56 status=ok
// SIG undefined FUN_142ed3480(void)

void FUN_142ed3480(longlong param_1,undefined1 param_2)

{
  FUN_142ed3330();
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x1a8) + 0x1a1) = param_2;
    FUN_142eb15b0();
  }
  return;
}



// FUNCTION 142ed34c0 FUN_142ed34c0 body=61 status=ok
// SIG undefined FUN_142ed34c0(void)

void FUN_142ed34c0(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  
  FUN_142ed3330();
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x1d0) + 0x170);
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  return;
}



// FUNCTION 142ed3500 FUN_142ed3500 body=61 status=ok
// SIG undefined FUN_142ed3500(void)

void FUN_142ed3500(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  
  FUN_142ed3330();
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x170);
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  return;
}



// FUNCTION 142ed3540 FUN_142ed3540 body=98 status=ok
// SIG undefined FUN_142ed3540(void)

void FUN_142ed3540(longlong *param_1,undefined1 param_2,undefined1 param_3)

{
  char cVar1;
  char cVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  *(undefined1 *)((longlong)param_1 + 0xb) = param_2;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  if (cVar1 != cVar2) {
    (**(code **)(*param_1 + 0x30))(param_1,cVar2,cVar1,param_3);
  }
  return;
}



// FUNCTION 142ed35b0 FUN_142ed35b0 body=83 status=ok
// SIG undefined FUN_142ed35b0(void)

void FUN_142ed35b0(longlong *param_1,undefined1 param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  *(undefined1 *)((longlong)param_1 + 10) = param_2;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  if (cVar1 != cVar2) {
    (**(code **)(*param_1 + 0x30))(param_1,cVar2,cVar1,1);
  }
  return;
}



// FUNCTION 142ed3610 FUN_142ed3610 body=83 status=ok
// SIG undefined FUN_142ed3610(void)

void FUN_142ed3610(longlong *param_1,undefined1 param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  *(undefined1 *)((longlong)param_1 + 9) = param_2;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  if (cVar1 != cVar2) {
    (**(code **)(*param_1 + 0x30))(param_1,cVar2,cVar1,1);
  }
  return;
}



// FUNCTION 142ed3670 FUN_142ed3670 body=96 status=ok
// SIG undefined FUN_142ed3670(void)

void FUN_142ed3670(longlong param_1,int param_2,char param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x9c);
  if ((iVar1 != -1) && (iVar1 < param_2)) {
    param_2 = iVar1;
  }
  FUN_142ed2f20(param_1,param_2);
  if (param_3 != '\0') {
    FUN_142ed1b40(param_1,param_2,param_4);
  }
  return;
}



// FUNCTION 142ed36d0 FUN_142ed36d0 body=21 status=ok
// SIG undefined FUN_142ed36d0(void)

void FUN_142ed36d0(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    FUN_142f0d400(*(longlong *)(param_1 + 0x5a8),*param_2);
    return;
  }
  return;
}



// FUNCTION 142ed36f0 FUN_142ed36f0 body=265 status=ok
// SIG undefined FUN_142ed36f0(void)

void FUN_142ed36f0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong local_28 [4];
  
  if (*(longlong *)(param_1 + 0x370) != 0) {
    local_28[0] = 0;
    local_28[1] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],L"label",0xc);
    FUN_142f0d630(*(undefined8 *)(param_1 + 0x370),local_28,param_2,param_3);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x378) != 0) {
    local_28[0] = 0;
    local_28[1] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],L"label",0xc);
    FUN_142f0d630(*(undefined8 *)(param_1 + 0x378),local_28,param_2,param_3);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x360) != 0) {
    FUN_142f0d6e0(*(longlong *)(param_1 + 0x360),param_2,param_3);
  }
  return;
}



// FUNCTION 142ed3800 FUN_142ed3800 body=65 status=ok
// SIG undefined FUN_142ed3800(void)

void FUN_142ed3800(longlong param_1,undefined8 param_2,char param_3)

{
  FText::operator=(param_1 + 0x2f8);
  if (param_3 != '\0') {
    TSet<TTuple<AccountId,TSharedPtr<ILoginSession,0>_>,TDefaultMapHashableKeyFuncs<AccountId,TSharedPtr<ILoginSession,0>,0>,FDefaultSetAllocator>
    ::Empty(param_1 + 0x328,0);
  }
  FUN_142ecf300(param_1);
  return;
}



// FUNCTION 142ed3850 FUN_142ed3850 body=247 status=ok
// SIG undefined FUN_142ed3850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ed3850(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined8 local_60;
  undefined4 *local_58;
  undefined4 local_50 [4];
  undefined1 local_40 [8];
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  piVar4 = (int *)TSet<TTuple<FString,FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FLocKeyMapFuncs<FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FDefaultSetAllocator>
                  ::FindId(param_1 + 0x328,local_68,param_2);
  if (*piVar4 != -1) {
    FUN_1410ea8b0(param_1 + 0x328,param_2);
  }
  local_50[0] = 4;
  FText::FText(local_40,param_3);
  local_58 = local_50;
  local_28 = '\x01';
  local_60 = param_2;
  FUN_1405df450(param_1 + 0x328,local_64,&local_60,0);
  if (local_28 != '\0') {
    local_28 = '\0';
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar4 = (int *)((longlong)local_38 + 0xc);
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
  }
  FUN_142ecf300(param_1);
  return;
}



// FUNCTION 142ed3950 FUN_142ed3950 body=43 status=ok
// SIG undefined FUN_142ed3950(void)

void FUN_142ed3950(longlong *param_1,char param_2)

{
  *(char *)((longlong)param_1 + 0x3c2) = param_2;
  if ((*(char *)((longlong)param_1 + 0x3c1) != '\0') && (param_2 != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x000142ed3968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x278))(param_1,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142ed3974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x278))(param_1,0);
  return;
}



// FUNCTION 142ed3980 FUN_142ed3980 body=365 status=ok
// SIG undefined FUN_142ed3980(void)

void FUN_142ed3980(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  uint uStackX_c;
  
  plVar7 = (longlong *)0x0;
  cVar3 = FUN_14208d370(param_1,param_1 + 0x308,L"navBarIconOuter");
  if (cVar3 == '\0') {
    plVar5 = (longlong *)((ulonglong)uStackX_c << 0x20);
    plVar6 = plVar7;
  }
  else {
    plVar6 = *(longlong **)(param_1 + 0x310);
    plVar5 = plVar6;
    plVar8 = plVar7;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(plVar6 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (plVar5 = plVar7, plVar8 = (longlong *)0x0, !bVar9) {
        LOCK();
        bVar9 = iVar4 == (int)plVar6[1];
        if (bVar9) {
          *(int *)(plVar6 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar9) {
          plVar5 = plVar6;
          if (plVar6 != (longlong *)0x0) {
            plVar8 = *(longlong **)(param_1 + 0x308);
          }
          break;
        }
        LOCK();
        iVar4 = (int)plVar6[1];
        bVar9 = iVar4 == 0;
        if (bVar9) {
          *(int *)(plVar6 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
    plVar6 = (longlong *)0x1;
    cVar3 = FUN_14204d420(plVar8,param_1 + 0x318,L"navBarIcon");
    if (cVar3 != '\0') {
      bVar9 = true;
      goto LAB_142ed3a24;
    }
  }
  bVar9 = false;
LAB_142ed3a24:
  if ((plVar6 != (longlong *)0x0) && (plVar5 != (longlong *)0x0)) {
    LOCK();
    plVar6 = plVar5 + 1;
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (bVar9) {
    plVar5 = *(longlong **)(param_1 + 800);
    plVar6 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar5[1];
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(plVar5 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (plVar6 = plVar7, !bVar9) {
        LOCK();
        bVar9 = iVar4 == (int)plVar5[1];
        if (bVar9) {
          *(int *)(plVar5 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar9) {
          plVar6 = plVar5;
          if (plVar5 != (longlong *)0x0) {
            plVar7 = *(longlong **)(param_1 + 0x318);
          }
          break;
        }
        LOCK();
        iVar4 = (int)plVar5[1];
        bVar9 = iVar4 == 0;
        if (bVar9) {
          *(int *)(plVar5 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
    FUN_14203e230(plVar7,param_2);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar6 + 1;
      lVar2 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142ed3af0 FUN_142ed3af0 body=30 status=ok
// SIG undefined FUN_142ed3af0(void)

void FUN_142ed3af0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x248);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142ed3b06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_2,1,param_3);
    return;
  }
  return;
}



// FUNCTION 142ed3b10 FUN_142ed3b10 body=13 status=ok
// SIG undefined FUN_142ed3b10(void)

void FUN_142ed3b10(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    *(longlong *)(param_1 + 0x628) = param_2;
  }
  return;
}



// FUNCTION 142ed3b20 FUN_142ed3b20 body=185 status=ok
// SIG undefined FUN_142ed3b20(void)

void FUN_142ed3b20(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_142ecffe0();
    lVar7 = *param_2;
    lVar3 = lVar7 + (longlong)(int)param_2[1] * 0x18;
    for (; lVar7 != lVar3; lVar7 = lVar7 + 0x18) {
      FText::FText(local_28,lVar7);
      FUN_142eaf9c0(param_1,local_28);
      plVar6 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142ed3be0 FUN_142ed3be0 body=17 status=ok
// SIG undefined FUN_142ed3be0(void)

void FUN_142ed3be0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_28 [8];
  longlong *plStack_20;
  
  lVar5 = *(longlong *)(param_1 + 0x318);
  if (lVar5 == 0) {
    return;
  }
  if (*(longlong *)(lVar5 + 0x198) != 0) {
    FUN_142ecffe0();
    lVar8 = *param_2;
    lVar3 = lVar8 + (longlong)(int)param_2[1] * 0x18;
    for (; lVar8 != lVar3; lVar8 = lVar8 + 0x18) {
      FText::FText(auStack_28,lVar8);
      FUN_142eaf9c0(lVar5,auStack_28);
      plVar7 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_20 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_20)(plStack_20);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142ed3c00 FUN_142ed3c00 body=32 status=ok
// SIG undefined FUN_142ed3c00(void)

void FUN_142ed3c00(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 400);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x242) = 1;
    *(undefined8 *)(lVar1 + 0x244) = *param_2;
  }
  return;
}



// FUNCTION 142ed3c20 FUN_142ed3c20 body=27 status=ok
// SIG undefined FUN_142ed3c20(void)

void FUN_142ed3c20(longlong param_1,char param_2,char param_3)

{
  if ((param_2 != *(char *)(param_1 + 0x2c5)) &&
     (*(char *)(param_1 + 0x2c5) = param_2, param_3 != '\0')) {
    FUN_142ecf920(param_1,0);
    return;
  }
  return;
}



// FUNCTION 142ed3c40 FUN_142ed3c40 body=17 status=ok
// SIG undefined FUN_142ed3c40(void)

void FUN_142ed3c40(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x90);
  if (lVar1 == 0) {
    return;
  }
  *(uint *)(lVar1 + 0xc4) = *(uint *)(lVar1 + 0xc4) & 0xfffffffd;
  *(uint *)(lVar1 + 0xc4) = *(uint *)(lVar1 + 0xc4) | (uint)param_2 * 2;
  FMediaPlayerFacade::SetLooping(*(undefined8 *)(lVar1 + 0x120));
  return;
}



// FUNCTION 142ed3c60 FUN_142ed3c60 body=132 status=ok
// SIG undefined FUN_142ed3c60(void)

void FUN_142ed3c60(longlong param_1,byte param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  *(byte *)(param_1 + 0x14a) = param_2;
  FUN_140ad4c90(param_1 + -0x4d8,&local_18);
  if (local_18 != 0) {
    FUN_142056520(local_18,param_2 ^ 1);
  }
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
      }
    }
  }
  return;
}



// FUNCTION 142ed3cf0 FUN_142ed3cf0 body=193 status=ok
// SIG undefined FUN_142ed3cf0(void)

void FUN_142ed3cf0(longlong param_1,char param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar5 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar5 = 0;
      if (param_2 != '\0') {
        lVar5 = param_1;
      }
      FUN_142ed3dc0(lVar1,lVar5,param_1);
      return;
    }
  }
  plVar6 = (longlong *)(param_1 + 0x170);
  cVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
  *(char *)(param_1 + 0x17a) = param_2;
  cVar4 = (**(code **)(*plVar6 + 0x10))(plVar6);
  if (cVar3 != cVar4) {
    (**(code **)(*plVar6 + 0x30))(plVar6,cVar4,cVar3,1);
  }
  return;
}



// FUNCTION 142ed3dc0 FUN_142ed3dc0 body=235 status=ok
// SIG undefined FUN_142ed3dc0(void)

void FUN_142ed3dc0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  
  param_1 = param_1 + 0x60c;
  cVar2 = operator==<USkinnedMeshComponent,USkinnedMeshComponent,FWeakObjectPtr>(param_2,param_1);
  if (cVar2 == '\0') {
    cVar2 = FWeakObjectPtr::IsValid(param_1);
    if (cVar2 != '\0') {
      lVar4 = FWeakObjectPtr::Get(param_1);
      plVar1 = (longlong *)(lVar4 + 0x170);
      cVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
      *(undefined1 *)(lVar4 + 0x17a) = 0;
      cVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
      if (cVar2 != cVar3) {
        (**(code **)(*plVar1 + 0x30))(plVar1,cVar3,cVar2,1);
      }
    }
    FWeakObjectPtr::operator=(param_1,param_2);
    cVar2 = FWeakObjectPtr::IsValid(param_1);
    if (cVar2 != '\0') {
      lVar4 = FWeakObjectPtr::Get(param_1);
      plVar1 = (longlong *)(lVar4 + 0x170);
      cVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
      *(undefined1 *)(lVar4 + 0x17a) = 1;
      cVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
      if (cVar2 != cVar3) {
        (**(code **)(*plVar1 + 0x30))(plVar1,cVar3,cVar2,1);
      }
    }
  }
  return;
}



// FUNCTION 142ed3eb0 FUN_142ed3eb0 body=265 status=ok
// SIG undefined FUN_142ed3eb0(void)

void FUN_142ed3eb0(longlong param_1,byte param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  undefined *puVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x260);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar3[1];
    bVar8 = iVar6 == 0;
    if (bVar8) {
      *(int *)(plVar3 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (!bVar8) {
      while( true ) {
        LOCK();
        bVar8 = iVar6 == (int)plVar3[1];
        if (bVar8) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar8) break;
        LOCK();
        iVar6 = (int)plVar3[1];
        bVar8 = iVar6 == 0;
        if (bVar8) {
          *(int *)(plVar3 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar8) {
          return;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        lVar4 = *(longlong *)(param_1 + 600);
        if (lVar4 != 0) {
          if (*(int *)(param_1 + 0x2c0) == 2) {
            bVar5 = 1;
          }
          else {
            bVar5 = *(int *)(param_1 + 0x2c0) == 1 ^ param_2;
          }
          if (bVar5 != 0) {
            if (*(char *)(param_1 + 0x277) == '\0') {
              FUN_142056670(lVar4,param_2);
            }
            else {
              puVar7 = &DAT_145987440;
              if (param_2 != 0) {
                puVar7 = &DAT_145985ef4;
              }
              FUN_14203e030(lVar4,puVar7);
            }
            *(uint *)(param_1 + 0x2c0) = (uint)param_2;
          }
        }
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142ed3fc0 FUN_142ed3fc0 body=17 status=ok
// SIG undefined FUN_142ed3fc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ed3fc0(longlong param_1,float *param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  bool bVar11;
  longlong *plVar12;
  int iVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  float fVar30;
  longlong lStack_a8;
  longlong *plStack_a0;
  longlong lStack_98;
  longlong *plStack_90;
  undefined1 *apuStack_88 [2];
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  undefined4 uStack_48;
  
  lVar3 = *(longlong *)(param_1 + 0x2b8);
  if (lVar3 == 0) {
    return;
  }
  if ((*(longlong *)(lVar3 + 0x28) != 0) && (*(longlong *)(lVar3 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(lVar3 + 0x30) + 8);
    LOCK();
    iVar13 = *piVar1;
    if (iVar13 == 0) {
      *piVar1 = 0;
      iVar13 = 0;
    }
    UNLOCK();
    if (0 < iVar13) {
      plStack_a0 = *(longlong **)(lVar3 + 0x30);
      lStack_a8 = 0;
      if (plStack_a0 == (longlong *)0x0) {
LAB_142f0e76f:
        plVar14 = &lStack_a8;
        bVar11 = true;
        bVar17 = false;
        lVar16 = lStack_a8;
      }
      else {
        LOCK();
        iVar13 = (int)plStack_a0[1];
        bVar17 = iVar13 == 0;
        if (bVar17) {
          *(int *)(plStack_a0 + 1) = 0;
          iVar13 = 0;
        }
        UNLOCK();
        while (!bVar17) {
          LOCK();
          bVar17 = iVar13 == (int)plStack_a0[1];
          if (bVar17) {
            *(int *)(plStack_a0 + 1) = iVar13 + 1;
          }
          UNLOCK();
          if (bVar17) {
            if (plStack_a0 != (longlong *)0x0) {
              lStack_a8 = *(longlong *)(lVar3 + 0x28);
            }
            goto LAB_142f0e76f;
          }
          LOCK();
          iVar13 = (int)plStack_a0[1];
          bVar17 = iVar13 == 0;
          if (bVar17) {
            *(int *)(plStack_a0 + 1) = 0;
            iVar13 = 0;
          }
          UNLOCK();
        }
        plVar14 = &lStack_a8;
        plStack_a0 = (longlong *)0x0;
        bVar11 = true;
        bVar17 = false;
        lVar16 = 0;
      }
      goto LAB_142f0e798;
    }
  }
  plVar14 = &lStack_98;
  lStack_98 = 0;
  plStack_90 = (longlong *)0x0;
  bVar11 = false;
  bVar17 = true;
  lVar16 = 0;
LAB_142f0e798:
  plVar4 = (longlong *)plVar14[1];
  plVar14[1] = 0;
  *plVar14 = 0;
  plVar12 = plStack_90;
  if ((bVar17) && (plStack_90 != (longlong *)0x0)) {
    LOCK();
    puVar2 = (uint *)(plStack_90 + 1);
    uVar27 = *puVar2;
    plVar14 = (longlong *)(ulonglong)uVar27;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if (uVar27 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      puVar2 = (uint *)((longlong)plVar12 + 0xc);
      uVar27 = *puVar2;
      plVar14 = (longlong *)(ulonglong)uVar27;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if (uVar27 == 1) {
        plVar14 = (longlong *)(**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
  plVar12 = plStack_a0;
  iVar13 = (int)plVar14;
  if ((bVar11) && (plStack_a0 != (longlong *)0x0)) {
    LOCK();
    plVar14 = plStack_a0 + 1;
    iVar13 = (int)*plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if (iVar13 == 1) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        iVar13 = (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
      }
    }
  }
  if (lVar16 != 0) {
    fVar6 = *param_2;
    fVar7 = param_2[1];
    fVar8 = param_2[2];
    fVar9 = param_2[3];
    *(float *)(lVar3 + 0x70) = fVar6;
    *(float *)(lVar3 + 0x74) = fVar7;
    *(float *)(lVar3 + 0x78) = fVar8;
    *(float *)(lVar3 + 0x7c) = fVar9;
    uVar10 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(lVar3 + 0x80) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(lVar3 + 0x88) = uVar10;
    uVar10 = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(lVar3 + 0x90) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(lVar3 + 0x98) = uVar10;
    fVar20 = fVar6 * fVar6 + fVar8 * fVar8;
    fVar21 = fVar7 * fVar7 + fVar9 * fVar9;
    fVar23 = fVar8 * fVar8 + fVar6 * fVar6;
    fVar25 = fVar9 * fVar9 + fVar7 * fVar7;
    fVar30 = fVar21 + fVar20;
    fVar21 = fVar23 + fVar21;
    fVar23 = fVar25 + fVar23;
    fVar20 = fVar20 + fVar25;
    auVar18._0_4_ = (float)((uint)(_DAT_146b3dea0 - fVar30) & _DAT_146b3df40);
    auVar18._4_4_ = (float)((uint)(fRam0000000146b3dea4 - fVar21) & uRam0000000146b3df44);
    auVar18._8_4_ = (float)((uint)(fRam0000000146b3dea8 - fVar23) & uRam0000000146b3df48);
    auVar18._12_4_ = (float)((uint)(fRam0000000146b3deac - fVar20) & uRam0000000146b3df4c);
    auVar19._4_4_ = -(uint)(fRam0000000146b3df54 < auVar18._4_4_);
    auVar19._0_4_ = -(uint)(_DAT_146b3df50 < auVar18._0_4_);
    auVar19._8_4_ = -(uint)(fRam0000000146b3df58 < auVar18._8_4_);
    auVar19._12_4_ = -(uint)(fRam0000000146b3df5c < auVar18._12_4_);
    iVar13 = movmskps(iVar13,auVar19);
    if (iVar13 != 0) {
      auVar5._4_4_ = fVar21;
      auVar5._0_4_ = fVar30;
      auVar5._8_4_ = fVar23;
      auVar5._12_4_ = fVar20;
      auVar19 = rsqrtps(auVar18,auVar5);
      fVar25 = auVar19._0_4_;
      fVar22 = auVar19._4_4_;
      fVar24 = auVar19._8_4_;
      fVar26 = auVar19._12_4_;
      fVar25 = (_DAT_146b3de90 - fVar25 * fVar25 * fVar30 * _DAT_146b3de90) * fVar25 + fVar25;
      fVar22 = (fRam0000000146b3de94 - fVar22 * fVar22 * fVar21 * fRam0000000146b3de94) * fVar22 +
               fVar22;
      fVar24 = (fRam0000000146b3de98 - fVar24 * fVar24 * fVar23 * fRam0000000146b3de98) * fVar24 +
               fVar24;
      fVar26 = (fRam0000000146b3de9c - fVar26 * fVar26 * fVar20 * fRam0000000146b3de9c) * fVar26 +
               fVar26;
      uVar27 = ((uint)(((fRam0000000146b3de94 - fVar22 * fVar22 * fVar21 * fRam0000000146b3de94) *
                        fVar22 + fVar22) * fVar7) ^ uRam0000000146b3de84) &
               -(uint)(fRam0000000146b3df14 <= fVar21) ^ uRam0000000146b3de84;
      uVar28 = ((uint)(((fRam0000000146b3de98 - fVar24 * fVar24 * fVar23 * fRam0000000146b3de98) *
                        fVar24 + fVar24) * fVar8) ^ uRam0000000146b3de88) &
               -(uint)(fRam0000000146b3df18 <= fVar23) ^ uRam0000000146b3de88;
      uVar29 = ((uint)(((fRam0000000146b3de9c - fVar26 * fVar26 * fVar20 * fRam0000000146b3de9c) *
                        fVar26 + fVar26) * fVar9) ^ uRam0000000146b3de8c) &
               -(uint)(fRam0000000146b3df1c <= fVar20) ^ uRam0000000146b3de8c;
      *(uint *)(lVar3 + 0x70) =
           ((uint)(((_DAT_146b3de90 - fVar25 * fVar25 * fVar30 * _DAT_146b3de90) * fVar25 + fVar25)
                  * fVar6) ^ _DAT_146b3de80) & -(uint)(_DAT_146b3df10 <= fVar30) ^ _DAT_146b3de80;
      *(uint *)(lVar3 + 0x74) = uVar27;
      *(uint *)(lVar3 + 0x78) = uVar28;
      *(uint *)(lVar3 + 0x7c) = uVar29;
    }
    uStack_58 = 0;
    uStack_48 = 0;
    puVar15 = (undefined8 *)FUN_140438ef0(0x10,auStack_78);
    if (puVar15 != (undefined8 *)0x0) {
      puVar15[1] = lVar3;
      *puVar15 = &PTR_FUN_143f77b70;
    }
    apuStack_88[0] = &LAB_142ee3870;
    FUN_14204c6c0(lVar16,apuStack_88);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar4 + 1;
    lVar3 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 142ed3fe0 FUN_142ed3fe0 body=17 status=ok
// SIG undefined FUN_142ed3fe0(void)

void FUN_142ed3fe0(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  longlong *plStack_28;
  uint uStack_20;
  undefined1 uStack_18;
  undefined7 uStack_17;
  
  if (*(longlong *)(param_1 + 0x248) == 0) {
    return;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x248) + 0x170);
  if (lVar1 != 0) {
    uStack_38 = 0xffffffffffffffff;
    uStack_30 = 0xffffffffffffffff;
    plStack_28 = (longlong *)0x0;
    uStack_20 = 2;
    uStack_18 = param_2;
    FUN_1420523e0(lVar1,"displayAsPassword",&uStack_38);
    if ((uStack_20 >> 6 & 1) != 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28,&uStack_38,CONCAT71(uStack_17,uStack_18));
    }
  }
  return;
}



// FUNCTION 142ed4000 FUN_142ed4000 body=584 status=ok
// SIG undefined FUN_142ed4000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ed4000(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 local_118 [80];
  undefined1 *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  FUN_1420902b0();
  if (*(char *)(param_1 + 500) == '\0') {
    if (*(char *)(param_1 + 0x21a) == '\0') {
      if ((((*(longlong *)(param_1 + 0x2b8) != 0) && (DAT_146b17150 != 0)) &&
          (*(longlong *)(DAT_146b17150 + 0x7b0) != 0)) &&
         (*(longlong *)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0xb0) != 0)) {
        local_128 = 0xffffffff;
        FUN_14170c210(&local_128);
        FWeakObjectPtr::operator=(&local_124,param_1);
        uVar2 = local_120;
        uVar1 = local_124;
        uVar4 = local_128;
        local_128 = 0xffffffff;
        local_98 = (longlong *)0x0;
        local_88 = 0;
        puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_b8);
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = &PTR_FUN_144605c50;
          puVar3[1] = param_1;
          *(undefined4 *)(puVar3 + 2) = uVar1;
          *(undefined4 *)((longlong)puVar3 + 0x14) = uVar2;
          *(undefined4 *)(puVar3 + 3) = uVar4;
          uVar4 = 0xffffffff;
        }
        local_c8[0] = &LAB_142eb09e0;
        FUN_1420849a0(param_1,local_78,local_c8);
        if (local_88 != 0) {
          plVar5 = local_b8;
          if (local_98 != (longlong *)0x0) {
            plVar5 = local_98;
          }
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x10))(plVar5,0);
          }
        }
        if (local_98 != (longlong *)0x0) {
          FMemory::Free();
        }
        FUN_1416f8340(uVar4);
        FUN_1416f8340(local_128);
        FWeakObjectPtr::operator=(&local_124,param_1);
        local_98 = (longlong *)0x0;
        local_88 = 0;
        puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_b8);
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = &PTR_FUN_1444f8920;
          puVar3[1] = param_1;
          *(undefined4 *)(puVar3 + 2) = local_124;
          *(undefined4 *)((longlong)puVar3 + 0x14) = local_120;
        }
        local_c8[0] = &LAB_142eb0c60;
        TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_118,local_78);
        FUN_14208c800(param_1,local_118,local_c8);
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
      }
    }
    else {
      FUN_142ecf3f0(param_1);
    }
  }
  return;
}



// FUNCTION 142ed4250 FUN_142ed4250 body=359 status=ok
// SIG undefined FUN_142ed4250(void)

void FUN_142ed4250(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  longlong *plVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  longlong local_res10;
  
  *(undefined1 *)(param_1 + 0x60) = 0;
  if ((param_1[0x5f] != 0) &&
     (plVar5 = (longlong *)FWeakObjectPtr::Get(param_1[0x5f] + 0x378), param_1 == plVar5)) {
    lVar1 = param_1[0x5f];
    FWeakObjectPtr::operator=(lVar1 + 0x378,0);
    *(undefined8 *)(lVar1 + 0x380) = 0;
  }
  param_1[0x5f] = param_2;
  if (param_2 != 0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnScrollBarPositionUpdated",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res10,pwVar3 + 2,1);
    lVar1 = param_1[0x5f];
    FWeakObjectPtr::operator=(lVar1 + 0x378,param_1);
    *(longlong *)(lVar1 + 0x380) = local_res10;
    if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(lVar1 + 0x378), lVar7 != 0)) {
      UObject::FindFunction(lVar7,*(undefined8 *)(lVar1 + 0x380));
    }
  }
  cVar4 = FUN_142eb3360();
  if (cVar4 == '\0') {
    (**(code **)(*param_1 + 0x338))(param_1);
  }
  else {
    LOCK();
    *(undefined4 *)((longlong)param_1 + 0x30c) = 1;
    UNLOCK();
  }
  cVar4 = FUN_142eb34c0();
  if (cVar4 != '\0') {
    LOCK();
    *(undefined4 *)((longlong)param_1 + 0x314) = 1;
    UNLOCK();
    return;
  }
  FUN_142edbed0(param_1);
  return;
}



// FUNCTION 142ed43c0 FUN_142ed43c0 body=247 status=ok
// SIG undefined FUN_142ed43c0(void)

void FUN_142ed43c0(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar3 = *(longlong **)(param_1 + 0x198);
  if ((((plVar3 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x170) != 0)) && (-1 < param_2)) &&
     (param_2 < (int)plVar3[0x50])) {
    (**(code **)(*plVar3 + 0x2b8))(plVar3,param_2,1,0);
    if (((param_2 < *(int *)(*(longlong *)(param_1 + 0x198) + 0x280)) &&
        (lVar4 = *(longlong *)
                  ((longlong)param_2 * 0x20 + 0x18 +
                  *(longlong *)(*(longlong *)(param_1 + 0x198) + 0x278)), lVar4 != 0)) &&
       (lVar4 = *(longlong *)(lVar4 + 0x248), lVar4 != 0)) {
      lVar5 = **(longlong **)(param_1 + 0x170);
      uVar6 = FUN_142eee450(lVar4,local_28);
      (**(code **)(lVar5 + 0x2b0))(*(undefined8 *)(param_1 + 0x170),uVar6,1,0);
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_20 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar1 = (int *)((longlong)local_20 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142ed44c0 FUN_142ed44c0 body=49 status=ok
// SIG undefined FUN_142ed44c0(void)

void FUN_142ed44c0(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FUN_142ed43c0();
    *(undefined4 *)(param_1 + 800) = param_2;
  }
  return;
}



// FUNCTION 142ed4500 FUN_142ed4500 body=504 status=ok
// SIG undefined FUN_142ed4500(void)

void FUN_142ed4500(longlong *param_1,int param_2,char param_3,undefined1 param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  
  iVar1 = (int)param_1[0x4e];
  iVar7 = -1;
  if (param_2 < (int)param_1[0x50]) {
    iVar7 = param_2;
  }
  *(int *)(param_1 + 0x4e) = iVar7;
  if (iVar7 == iVar1) {
    return;
  }
  if (((-1 < iVar1) && (iVar1 < (int)param_1[0x50])) &&
     (lVar5 = *(longlong *)((longlong)iVar1 * 0x20 + 0x18 + param_1[0x4f]), lVar5 != 0)) {
    plVar6 = (longlong *)(lVar5 + 0x170);
    cVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
    *(undefined1 *)(lVar5 + 0x17b) = 0;
    cVar4 = (**(code **)(*plVar6 + 0x10))(plVar6);
    if (cVar3 != cVar4) {
      (**(code **)(*plVar6 + 0x30))(plVar6,cVar4,cVar3,0);
    }
  }
  if ((iVar7 < 0) || ((int)param_1[0x50] <= iVar7)) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(ulonglong *)((longlong)iVar7 * 0x20 + 0x18 + param_1[0x4f]);
    if (uVar8 != 0) {
      if (param_3 != '\0') {
        (**(code **)(*param_1 + 0x2e8))(param_1,uVar8,param_4);
      }
      cVar3 = (**(code **)(*(longlong *)(uVar8 + 0x170) + 0x40))(uVar8 + 0x170);
      if (cVar3 == '\0') {
        *(undefined4 *)(param_1 + 0x4e) = 0xffffffff;
        LOCK();
        *(undefined4 *)((longlong)param_1 + 0x304) = 1;
        UNLOCK();
        uVar8 = 0;
      }
      else {
        if (((param_1[7] == 0) || (*(longlong *)(param_1[7] + 0x430) == 0)) ||
           (cVar3 = FUN_142dd3d20(), cVar3 == '\0')) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        lVar5 = FUN_14119d8f0(param_1);
        if (lVar5 != 0) {
          lVar5 = FUN_14119d8f0(param_1);
          lVar5 = FWeakObjectPtr::Get(lVar5 + 0x59c);
          if (lVar5 != 0) {
            lVar5 = FUN_14119d8f0(param_1);
            lVar5 = FWeakObjectPtr::Get(lVar5 + 0x59c);
            if ((*(char *)(lVar5 + 0xb9) != '\0') && (!bVar2)) {
              FUN_142ed3540(uVar8 + 0x170,1);
              LOCK();
              *(undefined4 *)((longlong)param_1 + 0x304) = 1;
              UNLOCK();
              goto LAB_142ed46ce;
            }
          }
        }
        FUN_142ed3540(uVar8 + 0x170,1,0);
        LOCK();
        *(undefined4 *)((longlong)param_1 + 0x304) = 1;
        UNLOCK();
      }
    }
  }
LAB_142ed46ce:
  local_res8 = uVar8;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x30,&local_res8);
  return;
}



// FUNCTION 142ed4720 FUN_142ed4720 body=592 status=ok
// SIG undefined FUN_142ed4720(void)

void FUN_142ed4720(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 local_48 [8];
  longlong *local_40;
  
  FText::FText(local_48);
  uVar4 = 0;
  iVar7 = 0;
  iVar10 = -1;
  if (*(int *)(param_1 + 0x1c8) == 1) {
    uVar6 = uVar4;
    uVar11 = uVar4;
    iVar9 = -1;
    if (0 < *(int *)(param_1 + 0x1d8)) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x1d0);
        if ((*(char *)(lVar3 + 0x50 + uVar11) == '\0') ||
           ((plVar5 = *(longlong **)(lVar3 + 0x38 + uVar11), plVar5 != (longlong *)0x0 &&
            (cVar2 = (**(code **)(*plVar5 + 0x290))(), cVar2 != '\0')))) {
          uVar4 = (ulonglong)((int)uVar4 + 1);
        }
        iVar7 = (int)uVar4;
        iVar9 = (int)uVar6;
        if (*(longlong *)(lVar3 + uVar11) == *param_2) {
          if ((-1 < iVar9) && (iVar9 < *(int *)(param_1 + 0x1d8))) {
            lVar3 = *(longlong *)(param_1 + 0x1d0) + 8 + (longlong)iVar9 * 0x58;
            goto LAB_142ed47d5;
          }
          break;
        }
        uVar8 = iVar9 + 1;
        uVar6 = (ulonglong)uVar8;
        uVar11 = uVar11 + 0x58;
        iVar9 = iVar10;
      } while ((int)uVar8 < *(int *)(param_1 + 0x1d8));
    }
    lVar3 = FUN_1404b03b0();
LAB_142ed47d5:
    FText::operator=(local_48,lVar3);
    iVar10 = iVar9 - iVar7;
  }
  else if (*(int *)(param_1 + 0x1c8) == 2) {
    iVar7 = *(int *)(param_1 + 0x1e8);
    iVar9 = -1;
    if (0 < iVar7) {
      plVar5 = *(longlong **)(param_1 + 0x1e0);
      uVar6 = uVar4;
      do {
        iVar9 = (int)uVar4;
        if (*plVar5 == *param_2) {
          if ((-1 < iVar9) && (iVar9 < iVar7)) {
            plVar5 = *(longlong **)(param_1 + 0x1e0) + (longlong)iVar9 * 7 + 3;
            iVar10 = iVar9;
            goto LAB_142ed4861;
          }
          break;
        }
        uVar4 = (ulonglong)(iVar9 + 1);
        uVar6 = uVar6 + 1;
        plVar5 = plVar5 + 7;
        iVar9 = iVar10;
      } while ((longlong)uVar6 < (longlong)iVar7);
    }
    plVar5 = (longlong *)FUN_1404b03b0();
    iVar10 = iVar9;
LAB_142ed4861:
    FText::operator=(local_48,plVar5);
  }
  if ((*(longlong *)(param_1 + 0x1a0) != 0) && (*(longlong *)(param_1 + 0x1a8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1a8) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x198,local_48,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x1b8) != 0) && (*(longlong *)(param_1 + 0x1c0) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1c0) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x1b0,local_48,1,0);
    }
  }
  plVar5 = *(longlong **)(param_1 + 400);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x2b8))(plVar5,iVar10,0,0);
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_40 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 142ed4970 FUN_142ed4970 body=1472 status=ok
// SIG undefined FUN_142ed4970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ed4970(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined8 local_220;
  longlong *local_218;
  undefined8 local_210;
  longlong *local_208;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  undefined8 local_1f0;
  longlong *plStack_1e8;
  undefined8 local_1e0;
  longlong *plStack_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  float fStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  float fStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_198;
  undefined8 uStack_194;
  undefined8 uStack_18c;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [80];
  double local_118;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined2 local_94;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  uVar9 = 0;
  local_228 = 0;
  if (*(char *)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0x80) == '\0') {
    return;
  }
  local_100 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_108 = 0x3f800000;
  local_f8 = 0x3f80000000000000;
  local_e0 = 0x3f800000;
  local_d0 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_d8 = 0x3f800000;
  local_c8 = 0x3f80000000000000;
  local_b0 = 0x3f800000;
  local_a0 = 0x3f80000000000000;
  local_94 = 0;
  lVar7 = FUN_142eb7870();
  if ((*(longlong *)(lVar7 + 0x28) == 0) || (*(longlong *)(lVar7 + 0x30) == 0)) {
LAB_142ed4b03:
    puVar8 = &local_1f0;
    local_1f0 = 0;
    plStack_1e8 = (longlong *)0x0;
    bVar5 = false;
    bVar11 = true;
    uVar10 = 0;
  }
  else {
    piVar1 = (int *)(*(longlong *)(lVar7 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (iVar6 < 1) goto LAB_142ed4b03;
    local_218 = *(longlong **)(lVar7 + 0x30);
    local_220 = 0;
    if (local_218 == (longlong *)0x0) {
LAB_142ed4af1:
      puVar8 = &local_220;
      bVar5 = true;
      bVar11 = false;
      uVar10 = local_220;
    }
    else {
      LOCK();
      iVar6 = (int)local_218[1];
      bVar11 = iVar6 == 0;
      if (bVar11) {
        *(int *)(local_218 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      while (!bVar11) {
        LOCK();
        bVar11 = iVar6 == (int)local_218[1];
        if (bVar11) {
          *(int *)(local_218 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar11) {
          if (local_218 != (longlong *)0x0) {
            local_220 = *(undefined8 *)(lVar7 + 0x28);
          }
          goto LAB_142ed4af1;
        }
        LOCK();
        iVar6 = (int)local_218[1];
        bVar11 = iVar6 == 0;
        if (bVar11) {
          *(int *)(local_218 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
      }
      puVar8 = &local_220;
      local_218 = (longlong *)0x0;
      bVar5 = true;
      bVar11 = false;
      uVar10 = 0;
    }
  }
  plVar4 = (longlong *)puVar8[1];
  puVar8[1] = 0;
  plVar3 = plStack_1e8;
  *puVar8 = 0;
  if ((bVar11) && (plStack_1e8 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_1e8 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_1e8)(plStack_1e8);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_1e8 + 8))(plStack_1e8,1);
      }
    }
  }
  plVar3 = local_218;
  if ((bVar5) && (local_218 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_218 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_218)(local_218);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_218 + 8))(local_218,1);
      }
    }
  }
  FUN_142039630(uVar10,local_168);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  FUN_142eb7ad0(param_1,&local_200);
  FUN_142eb7270(param_1,&local_1f8);
  fVar13 = 0.0;
  fVar12 = (float)(local_118 * 0.017453293005625408);
  if (local_200 == 0.0) {
    fVar14 = 0.0;
    fVar13 = _guard_xfg_dispatch_icall_nop(local_1fc * fVar12);
    fVar13 = fVar13 * (local_1f4 / local_1f8);
  }
  else if (local_1fc == 0.0) {
    fVar14 = _guard_xfg_dispatch_icall_nop(local_200 * fVar12);
  }
  else {
    fVar14 = _guard_xfg_dispatch_icall_nop(local_200 * fVar12);
    fVar13 = fVar14 * (local_1f4 / local_1f8);
    if (local_200 <= 0.0) {
      fVar13 = -fVar13;
    }
    if (local_1fc <= 0.0) {
      fVar13 = -fVar13;
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x2b8);
  if ((*(longlong *)(lVar7 + 0x28) != 0) && (*(longlong *)(lVar7 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(lVar7 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_208 = *(longlong **)(lVar7 + 0x30);
      local_210 = 0;
      if (local_208 == (longlong *)0x0) {
LAB_142ed4d5e:
        puVar8 = &local_210;
        bVar5 = true;
        bVar11 = false;
        uVar9 = local_210;
      }
      else {
        LOCK();
        iVar6 = (int)local_208[1];
        bVar11 = iVar6 == 0;
        if (bVar11) {
          *(int *)(local_208 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar11) {
          LOCK();
          bVar11 = iVar6 == (int)local_208[1];
          if (bVar11) {
            *(int *)(local_208 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar11) {
            if (local_208 != (longlong *)0x0) {
              local_210 = *(undefined8 *)(lVar7 + 0x28);
            }
            goto LAB_142ed4d5e;
          }
          LOCK();
          iVar6 = (int)local_208[1];
          bVar11 = iVar6 == 0;
          if (bVar11) {
            *(int *)(local_208 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        local_208 = (longlong *)0x0;
        puVar8 = &local_210;
        bVar5 = true;
        bVar11 = false;
        uVar9 = 0;
      }
      goto LAB_142ed4d84;
    }
  }
  puVar8 = &local_1e0;
  local_1e0 = 0;
  plStack_1d8 = (longlong *)0x0;
  bVar5 = false;
  bVar11 = true;
LAB_142ed4d84:
  plVar4 = (longlong *)puVar8[1];
  puVar8[1] = 0;
  plVar3 = plStack_1d8;
  *puVar8 = 0;
  if ((bVar11) && (plStack_1d8 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_1d8 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_1d8)(plStack_1d8);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_1d8 + 8))(plStack_1d8,1);
      }
    }
  }
  plVar3 = local_208;
  if ((bVar5) && (local_208 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_208 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_208)(local_208);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_208 + 8))(local_208,1);
      }
    }
  }
  uStack_194 = 0;
  uStack_18c = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0x3f800000;
  local_198 = 0x3f800000;
  uStack_184 = 0x3f800000;
  FUN_14203abd0(uVar9,&local_198);
  fStack_1c8 = uStack_194._4_4_ + fVar14;
  fStack_1b8 = (float)uStack_180 + fVar13;
  uStack_194 = CONCAT44(fStack_1c8,(undefined4)uStack_194);
  local_1d0 = local_198;
  uStack_1cc = (undefined4)uStack_194;
  uStack_1c4 = (undefined4)uStack_18c;
  uStack_180 = CONCAT44(uStack_180._4_4_,fStack_1b8);
  local_1c0 = uStack_18c._4_4_;
  uStack_1bc = uStack_184;
  uStack_1b4 = uStack_180._4_4_;
  local_1b0 = (undefined4)local_178;
  uStack_1ac = local_178._4_4_;
  uStack_1a8 = (undefined4)uStack_170;
  uStack_1a4 = uStack_170._4_4_;
  FUN_1420522e0(uVar9,&local_1d0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 142ed4f30 FUN_142ed4f30 body=361 status=ok
// SIG undefined FUN_142ed4f30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ed4f30(longlong param_1,undefined1 param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  lVar1 = DAT_146b3dd98;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar4 = 4;
    if (DVar3 != DAT_1468c21c0) goto LAB_142ed4f9e;
  }
  lVar4 = 0;
LAB_142ed4f9e:
  if (*(int *)(lVar4 + lVar1) == 1) {
    FWeakObjectPtr::operator=(&local_88,param_1);
    local_48 = (longlong *)0x0;
    local_38 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x20,local_68);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_14461b7a0;
      puVar5[1] = param_1;
      *(undefined4 *)(puVar5 + 2) = local_88;
      *(undefined4 *)((longlong)puVar5 + 0x14) = local_84;
      *(undefined1 *)(puVar5 + 3) = param_2;
      *(char *)((longlong)puVar5 + 0x19) = param_3;
    }
    local_78[0] = &LAB_142eb0910;
    FUN_14208c260(param_1,local_78);
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
  }
  else {
    *(undefined1 *)(param_1 + 0x620) = param_2;
    if (param_3 != '\0') {
      *(undefined4 *)(param_1 + 0x568) = 0xffffffff;
    }
  }
  return;
}



// FUNCTION 142ed50a0 FUN_142ed50a0 body=113 status=ok
// SIG undefined FUN_142ed50a0(void)

void FUN_142ed50a0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (param_1[100] != 0) {
    FUN_142f0c980(param_1[100],param_2,1);
    if (((int)param_1[0x66] != 0) && ((longlong *)param_1[0x65] != (longlong *)0x0)) {
      cVar1 = (**(code **)(*(longlong *)param_1[0x65] + 0x18))();
      if (cVar1 != '\0') {
        if ((int)param_1[0x66] == 0) {
          plVar2 = (longlong *)0x0;
        }
        else {
          plVar2 = (longlong *)param_1[0x65];
        }
        (**(code **)(*plVar2 + 0x40))(plVar2,param_1);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000142ed5104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x330))(param_1);
    return;
  }
  return;
}



// FUNCTION 142ed5120 FUN_142ed5120 body=8 status=ok
// SIG undefined FUN_142ed5120(void)

void FUN_142ed5120(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x590) = param_2;
  return;
}



// FUNCTION 142ed5130 FUN_142ed5130 body=179 status=ok
// SIG undefined FUN_142ed5130(void)

void FUN_142ed5130(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x2c0);
  if (lVar1 != 0) {
    lVar3 = FUN_142f16d60();
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
      uVar4 = 0;
      if (0 < *(int *)(lVar1 + 0x60)) {
        plVar5 = *(longlong **)(lVar1 + 0x58);
        uVar6 = uVar4;
        do {
          if (*plVar5 == *(longlong *)(param_1 + 0x2f8)) goto LAB_142ed51b8;
          uVar6 = (ulonglong)((int)uVar6 + 1);
          uVar4 = uVar4 + 1;
          plVar5 = plVar5 + 6;
        } while ((longlong)uVar4 < (longlong)*(int *)(lVar1 + 0x60));
      }
    }
  }
  uVar6 = 0xffffffff;
LAB_142ed51b8:
  if (*(longlong *)(param_1 + 0x308) != 0) {
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x308) + 0x148);
    (**(code **)(*plVar5 + 0x18))(plVar5,uVar6,1);
  }
  return;
}



// FUNCTION 142ed51f0 FUN_142ed51f0 body=159 status=ok
// SIG undefined FUN_142ed51f0(void)

void FUN_142ed51f0(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (((*(char *)(param_1 + 0x401) == '\0') && (cVar2 = FText::IsEmpty(param_2), cVar2 != '\0')) &&
     (param_3 == '\0')) {
    return;
  }
  uVar3 = FText::ToString(param_2);
  FString::operator=(param_1 + 0x318,uVar3);
  plVar1 = *(longlong **)(param_1 + 0x248);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_2,1,param_3);
    if (*(longlong *)(param_1 + 0x248) != 0) {
      FUN_142f10ae0(*(longlong *)(param_1 + 0x248),0);
      FUN_142f0de70(*(undefined8 *)(param_1 + 0x248),PTR_DAT_14673ca48);
    }
  }
  return;
}



// FUNCTION 142ed5290 FUN_142ed5290 body=17 status=ok
// SIG undefined FUN_142ed5290(void)

void FUN_142ed5290(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong **pplVar4;
  longlong *plStack_18;
  undefined8 uStack_10;
  
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    return;
  }
  pplVar4 = &plStack_18;
  plStack_18 = (longlong *)0x0;
  uStack_10 = 0;
  plVar1 = (longlong *)FUN_140ecc7d0();
  plVar2 = plStack_18;
  for (iVar3 = (int)uStack_10; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (plStack_18 != (longlong *)0x0) {
    FMemory::Free(plStack_18);
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_3,1,0,pplVar4);
  }
  return;
}



// FUNCTION 142ed52b0 FUN_142ed52b0 body=82 status=ok
// SIG undefined FUN_142ed52b0(void)

void FUN_142ed52b0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(*(longlong *)(lVar2 + 0x308) + 8))((longlong *)(lVar2 + 0x308),param_2,param_3);
  }
  return;
}



// FUNCTION 142ed5310 FUN_142ed5310 body=715 status=ok
// SIG undefined FUN_142ed5310(void)

void FUN_142ed5310(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined8 local_168;
  longlong *local_160;
  longlong local_158;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined4 local_138;
  undefined4 local_134;
  longlong local_130;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined4 local_110;
  undefined4 local_10c;
  longlong local_108;
  undefined1 local_100 [8];
  longlong *local_f8;
  longlong local_e8;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 *local_c8 [2];
  undefined1 local_b8 [32];
  undefined8 local_98;
  undefined4 local_88;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  local_160 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x50) != &local_168) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    local_168 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x58,&local_160);
    plVar3 = local_160;
    if (local_160 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_160 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_160)(local_160);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_160 + 8))(local_160,1);
        }
      }
    }
  }
  param_1 = param_1 + -0x308;
  if (param_3 == '\0') {
    local_e8 = param_1;
    FText::FText(local_e0,param_2);
    FWeakObjectPtr::operator=(&local_res20,param_1);
    local_130 = local_e8;
    FText::FText(local_128,local_e0);
    local_110 = local_res20;
    local_10c = local_res24;
    local_48 = 0;
    local_38 = 0;
    puVar6 = (undefined8 *)FUN_140438ef0(0x30,local_68);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &PTR_FUN_14598afe0;
      puVar6[1] = local_130;
      FText::FText(puVar6 + 2,local_128);
      *(undefined4 *)(puVar6 + 5) = local_110;
      *(undefined4 *)((longlong)puVar6 + 0x2c) = local_10c;
    }
    local_78[0] = &LAB_142eb0b10;
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_120 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar2 = (int *)((longlong)local_120 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_120 + 8))(local_120,1);
        }
      }
    }
    FUN_14208c5d0(param_1,local_78);
  }
  else {
    local_108 = param_1;
    FText::FText(local_100,param_2);
    FWeakObjectPtr::operator=(&local_res8,param_1);
    local_158 = local_108;
    FText::FText(local_150,local_100);
    local_138 = local_res8;
    local_134 = local_resc;
    local_98 = 0;
    local_88 = 0;
    puVar6 = (undefined8 *)FUN_140438ef0(0x30,local_b8);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &PTR_FUN_14598afe0;
      puVar6[1] = local_158;
      FText::FText(puVar6 + 2,local_150);
      *(undefined4 *)(puVar6 + 5) = local_138;
      *(undefined4 *)((longlong)puVar6 + 0x2c) = local_134;
    }
    local_c8[0] = &LAB_142eb0920;
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_148 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar2 = (int *)((longlong)local_148 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_148 + 8))(local_148,1);
        }
      }
    }
    FUN_14208c5d0(param_1,local_c8);
    local_d8 = local_f8;
  }
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_d8 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar2 = (int *)((longlong)local_d8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_d8 + 8))(local_d8,1);
      }
    }
  }
  return;
}



// FUNCTION 142ed55e0 FUN_142ed55e0 body=137 status=ok
// SIG undefined FUN_142ed55e0(void)

void FUN_142ed55e0(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  
  if (((*(char *)(param_1 + 0x401) != '\0') || (1 < *(int *)(param_2 + 8))) || (param_3 != '\0')) {
    FString::operator=(param_1 + 0x318);
    plVar1 = *(longlong **)(param_1 + 0x248);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2a8))(plVar1,param_2,1,param_3);
      FUN_142f10ae0(*(undefined8 *)(param_1 + 0x248),0);
      FUN_142f0de70(*(undefined8 *)(param_1 + 0x248),PTR_DAT_14673ca48);
    }
  }
  return;
}



// FUNCTION 142ed5670 FUN_142ed5670 body=17 status=ok
// SIG undefined FUN_142ed5670(void)

void FUN_142ed5670(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  void *_Src;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined1 uStack_2c;
  undefined1 auStack_28 [8];
  undefined8 uStack_20;
  longlong *plStack_18;
  undefined1 uStack_10;
  
  plVar2 = *(longlong **)(param_1 + 800);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  iVar5 = (int)param_2[1];
  if (iVar5 < (int)plVar2[0x5a]) {
    plVar1 = plVar2 + 0x5c;
    if (plVar1 != param_2) {
      _Src = (void *)*param_2;
      *(int *)(plVar2 + 0x5d) = iVar5;
      if ((iVar5 == 0) && (*(int *)((longlong)plVar2 + 0x2ec) == 0)) {
        *(undefined4 *)((longlong)plVar2 + 0x2ec) = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(plVar1,iVar5);
        _guard_xfg_dispatch_icall_nop((void *)*plVar1,_Src,(longlong)iVar5 << 2);
      }
    }
    piVar3 = (int *)*plVar1;
    if (piVar3 != piVar3 + (int)plVar2[0x5d]) {
      piVar6 = piVar3;
      do {
        if (*piVar6 == (int)plVar2[0x5b]) {
          if ((int)((longlong)piVar6 - (longlong)piVar3 >> 2) == -1) {
            return;
          }
          FName::FName(auStack_38,&DAT_143f3eda8,1);
          uStack_2c = 0;
          uStack_30 = 0xffffffff;
          FName::FName(auStack_28,&DAT_143f3eda8,1);
          iVar5 = (int)plVar2[0x5b] + 1;
          uStack_10 = 0;
          uStack_20 = 0;
          plStack_18 = (longlong *)0x0;
          if (((int)plVar2[0x5a] <= iVar5) && (iVar5 = 0, (char)plVar2[0x61] == '\0')) {
            iVar5 = (int)plVar2[0x5a] + -1;
          }
          FUN_142f0c980(plVar2,iVar5,1);
          (**(code **)(*plVar2 + 800))(plVar2,0);
          plVar2 = plStack_18;
          if (plStack_18 == (longlong *)0x0) {
            return;
          }
          LOCK();
          plVar1 = plStack_18 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 != 1) {
            return;
          }
          (**(code **)*plStack_18)(plStack_18);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          iVar5 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar5 != 1) {
            return;
          }
          (**(code **)(*plVar2 + 8))(plVar2,1);
          return;
        }
        piVar6 = piVar6 + 1;
      } while (piVar6 != piVar3 + (int)plVar2[0x5d]);
    }
  }
  return;
}



// FUNCTION 142ed5690 FUN_142ed5690 body=10 status=ok
// SIG undefined FUN_142ed5690(void)

void FUN_142ed5690(longlong param_1,byte param_2)

{
  *(byte *)(param_1 + 0x330) = param_2 ^ 1;
  return;
}



// FUNCTION 142ed56a0 FUN_142ed56a0 body=724 status=ok
// SIG undefined FUN_142ed56a0(void)

void FUN_142ed56a0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  char cVar6;
  DWORD DVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  int local_res8 [2];
  int local_res10 [2];
  undefined4 local_res18;
  undefined4 local_res1c;
  float local_res20;
  float local_res24;
  longlong local_c8;
  longlong *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  
  if ((param_2 != (longlong *)0x0) && (lVar8 = (**(code **)(*param_2 + 0x148))(param_2), lVar8 != 0)
     ) {
    uVar9 = (**(code **)(*param_2 + 0x148))(param_2);
    lVar8 = UWorld::GetGameViewport(uVar9);
    if (lVar8 != 0) {
      uVar9 = (**(code **)(*param_2 + 0x148))(param_2);
      lVar8 = UWorld::GetGameViewport(uVar9);
      if (*(longlong *)(lVar8 + 0xb0) != 0) {
        uVar9 = (**(code **)(*param_2 + 0x148))(param_2);
        lVar8 = UWorld::GetGameViewport(uVar9);
        (**(code **)(**(longlong **)(lVar8 + 0xb0) + 0x20))
                  (*(longlong **)(lVar8 + 0xb0),&local_res18);
        lVar8 = FUN_14270bb10(param_2);
        if (lVar8 != 0) {
          (**(code **)(*param_1 + 0x4e0))(param_1);
          (**(code **)(*param_1 + 0x2a8))(param_1,0,0,local_res18,local_res1c);
        }
        goto LAB_142ed5786;
      }
    }
  }
  (**(code **)(*param_1 + 0x2a8))(param_1,0,0,0xffffffff,0xffffffff);
LAB_142ed5786:
  if (param_2 != (longlong *)0x0) {
    cVar5 = FUN_142dcfc60(param_2);
    FUN_140ad4c90(param_1,&local_c8);
    if (local_c8 != 0) {
      FUN_14203d400(local_c8,&local_b8);
      lVar8 = DAT_146b3dde8;
      cVar6 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar6 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)) {
        lVar10 = 4;
      }
      else {
        lVar10 = 0;
      }
      if ((*(int *)(lVar10 + lVar8) == 0) || (1 < (byte)(cVar5 - 2U))) {
        local_90 = local_90 & 0xfffffffb;
      }
      else {
        fVar11 = (float)DAT_1468b5d88;
        fVar12 = DAT_1468b5d88._4_4_;
        if (param_1[0x86] != 0) {
          FUN_142dcfa20(param_1[0x86],local_res8,local_res10);
          fVar11 = (float)local_res8[0];
          fVar12 = (float)local_res10[0];
        }
        FUN_142eb8d60(param_1,&local_res20);
        local_98 = (int)local_res20;
        local_90 = local_90 | 4;
        local_94 = (int)local_res24;
        local_a0 = (int)fVar11;
        local_9c = (int)fVar12;
      }
      local_80 = local_b8;
      local_7c = local_b4;
      local_78 = local_b0;
      local_74 = local_ac;
      local_70 = local_a8;
      local_6c = local_a4;
      local_54 = local_8c;
      local_50 = local_88;
      local_68 = local_a0;
      local_64 = local_9c;
      local_60 = local_98;
      local_5c = local_94;
      local_58 = local_90;
      FUN_142056420(local_c8,&local_80);
    }
    plVar4 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c0 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142ed596d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2d0))(param_1);
  return;
}



// FUNCTION 142ed5980 FUN_142ed5980 body=378 status=ok
// SIG undefined FUN_142ed5980(void)

void FUN_142ed5980(longlong param_1,char param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  uint local_50;
  char *local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint local_20;
  char *local_18;
  
  *(undefined1 *)(param_1 + 0x402) = param_3;
  if (*(char *)(param_1 + 0x329) == param_2) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x248);
  *(char *)(param_1 + 0x329) = param_2;
  if (lVar3 == 0) {
    return;
  }
  lVar4 = *(longlong *)(lVar3 + 0x170);
  plVar5 = *(longlong **)(lVar3 + 0x178);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (lVar4 == 0) goto LAB_142ed5aa7;
  if (*(char *)(param_1 + 0x329) == '\x01') {
    local_18 = "0-9";
    local_28 = (longlong *)0x0;
    local_20 = 6;
    local_38 = 0xffffffffffffffff;
    uStack_30 = 0xffffffffffffffff;
    FUN_1420523e0(lVar4,"restrict",&local_38);
    if ((local_20 >> 6 & 1) == 0) goto LAB_142ed5aa7;
    puVar7 = &local_38;
    plVar6 = local_28;
    pcVar8 = local_18;
  }
  else {
    if (*(char *)(param_1 + 0x329) != '\x05') goto LAB_142ed5aa7;
    local_48 = "0-9 A-Z a-z";
    local_58 = (longlong *)0x0;
    local_50 = 6;
    local_68 = 0xffffffffffffffff;
    uStack_60 = 0xffffffffffffffff;
    FUN_1420523e0(lVar4,"restrict",&local_68);
    if ((local_50 >> 6 & 1) == 0) goto LAB_142ed5aa7;
    puVar7 = &local_68;
    plVar6 = local_58;
    pcVar8 = local_48;
  }
  (**(code **)(*plVar6 + 0x10))(plVar6,puVar7,pcVar8);
LAB_142ed5aa7:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 142ed5b00 FUN_142ed5b00 body=69 status=ok
// SIG undefined FUN_142ed5b00(void)

void FUN_142ed5b00(longlong param_1,undefined1 param_2)

{
  if (*(longlong **)(param_1 + 0x2b8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x2b8) + 0x278))();
  }
  if (*(longlong *)(param_1 + 0x590) != 0) {
    FUN_142f10bd0(*(longlong *)(param_1 + 0x590),param_2);
  }
  return;
}



// FUNCTION 142ed5b50 FUN_142ed5b50 body=52 status=ok
// SIG undefined FUN_142ed5b50(void)

void FUN_142ed5b50(longlong param_1,char param_2)

{
  undefined8 uVar1;
  bool bVar2;
  
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    return;
  }
  if (param_2 != '\0') {
    LOCK();
    bVar2 = *(int *)(param_1 + 0x61c) == 0;
    if (bVar2) {
      *(int *)(param_1 + 0x61c) = 0;
    }
    UNLOCK();
    if (!bVar2) {
      uVar1 = 1;
      goto LAB_142ed5b72;
    }
  }
  uVar1 = 0;
LAB_142ed5b72:
                    /* WARNING: Could not recover jumptable at 0x000142ed5b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x2b8) + 0x278))(*(longlong **)(param_1 + 0x2b8),uVar1);
  return;
}



// FUNCTION 142ed5b90 FUN_142ed5b90 body=83 status=ok
// SIG undefined FUN_142ed5b90(void)

void FUN_142ed5b90(longlong param_1,char param_2)

{
  char cVar1;
  
  cVar1 = FUN_142088620();
  FUN_142090f60(param_1,param_2);
  if ((*(longlong *)(param_1 + 0x2c8) != 0) && (param_2 == cVar1)) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x2c8) + 0x2ec) = 1;
  }
  return;
}



// FUNCTION 142ed5bf0 FUN_142ed5bf0 body=43 status=ok
// SIG undefined FUN_142ed5bf0(void)

void FUN_142ed5bf0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x275) = param_2;
  FUN_142f10940();
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined1 *)(param_1 + 0x274) = 0;
  return;
}



// FUNCTION 142ed5c20 FUN_142ed5c20 body=217 status=ok
// SIG undefined FUN_142ed5c20(void)

void FUN_142ed5c20(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 local_res8 [8];
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
  
  (**(code **)(*param_1 + 0x4b8))(param_1,local_res8);
  if (param_1[0xb5] != 0) {
    local_38 = 0xffffffff;
    local_34 = 0;
    FWeakObjectPtr::operator=(&local_30,0);
    FWeakObjectPtr::operator=(&local_28,0);
    FWeakObjectPtr::operator=(&local_20,0);
    FWeakObjectPtr::operator=(&local_18,0);
    FWeakObjectPtr::operator=(&local_38,*param_2);
    local_30 = *param_3;
    local_2c = param_3[1];
    local_28 = param_3[2];
    local_24 = param_3[3];
    local_20 = param_3[4];
    local_1c = param_3[5];
    local_18 = param_3[6];
    local_14 = param_3[7];
    FUN_142f0d310(param_1[0xb5],&local_38);
  }
  return;
}



// FUNCTION 142ed5d00 FUN_142ed5d00 body=482 status=ok
// SIG undefined FUN_142ed5d00(void)

void FUN_142ed5d00(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_38;
  int local_30;
  longlong *local_28;
  int local_20;
  
  if (param_2 == '\0') {
    FUN_142f06340(param_1,param_1 + 0x1e8);
    FUN_142f06340(param_1,param_1 + 0x1e0);
    return;
  }
  local_38 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_30 = 3;
  local_38 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_143f4d290;
    FWeakObjectPtr::operator=(plVar1 + 1,param_1);
    plVar1[2] = (longlong)FUN_142ec9410;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_143f4d2d8;
  }
  FUN_142ee1c00(param_1,PTR_s_mouseDown_14673c9f8,param_1 + 0x1e8,&local_38);
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) goto LAB_142ed5dee;
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
LAB_142ed5dee:
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_143f4d290;
    FWeakObjectPtr::operator=(plVar1 + 1,param_1);
    plVar1[2] = (longlong)FUN_142eca300;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_143f4d2d8;
  }
  FUN_142ee1c00(param_1,PTR_s_mouseUp_14673ca18,param_1 + 0x1e0,&local_28);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 142ed5ef0 FUN_142ed5ef0 body=787 status=ok
// SIG undefined FUN_142ed5ef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ed5ef0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [16];
  undefined4 local_60 [2];
  undefined8 local_58;
  longlong *local_48;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  plVar3 = (longlong *)(param_1 + 800);
  uVar9 = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x32c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar3,0);
  }
  iVar6 = *(int *)(param_1 + 0x328);
  *(int *)(param_1 + 0x328) = iVar6 + 1;
  if (*(int *)(param_1 + 0x32c) < iVar6 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar6);
  }
  *(undefined8 *)(*plVar3 + (longlong)iVar6 * 8) = *param_2;
  if (*(longlong *)(param_1 + 0x378) != 0) {
    puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_70,param_3);
    local_60[0] = 0;
    local_d8 = local_60;
    local_38 = '\0';
    uStack_d0 = &local_30;
    local_e8 = *puVar7;
    lStack_e0 = puVar7[1];
    local_58 = 0;
    if (lStack_e0 != 0) {
      LOCK();
      *(int *)(lStack_e0 + 8) = *(int *)(lStack_e0 + 8) + 1;
      UNLOCK();
    }
    uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_c8,&local_d8);
    uVar8 = FText::Format(local_a0,&local_e8,uVar8);
    FText::FText(local_b8,uVar8);
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_98 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar1 = (int *)((longlong)local_98 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_c8);
    if ((local_38 != '\0') && (local_38 = '\0', local_48 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_48 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    plVar4 = (longlong *)puVar7[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x378) + 0x2b0))
              (*(longlong **)(param_1 + 0x378),local_b8,1,*(undefined1 *)(param_1 + 0x359));
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_b0 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x380);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x278))(plVar4,0);
  }
  if ((*(longlong *)(param_1 + 0x368) != 0) && (*(longlong *)(param_1 + 0x370) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x370) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if ((0 < iVar6) && (0 < *(int *)(param_1 + 0x328))) {
      if (*(longlong *)(param_1 + 0x38) != 0) {
        uVar9 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x430);
      }
      local_f0 = 0;
      local_f8 = 0xbf800000;
      uVar9 = FUN_142ef30e0(local_88,*(undefined8 *)*plVar3,uVar9,0);
      UMistDebugEntityScreen::InspectEntity
                (param_1 + 0x360,uVar9,1,*(undefined1 *)(param_1 + 0x359));
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_80 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)local_80 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142ed6210 FUN_142ed6210 body=1052 status=ok
// SIG undefined FUN_142ed6210(void)

void FUN_142ed6210(longlong *param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 uVar12;
  char cVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  undefined2 *puVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d8 [20];
  
  iVar19 = 0;
  dVar2 = (double)FUN_142eeca30();
  dVar3 = (double)FUN_142eeea40(param_1);
  if (param_1[0x53] != 0) {
    dVar2 = (double)FUN_142eeca30();
    dVar3 = (double)FUN_142eeea40(param_1[0x53]);
  }
  fVar21 = (float)dVar2;
  bVar4 = false;
  bVar5 = false;
  bVar7 = false;
  bVar6 = false;
  *(float *)((longlong)param_1 + 0x2b4) = fVar21;
  fVar22 = 0.0;
  fVar20 = 0.0;
  fVar23 = 0.0;
  fVar24 = 0.0;
  do {
    local_e8 = (longlong *)0x0;
    local_e0 = 0;
    uVar14 = URemnantGameInstance::GetPrivateStaticClass();
    if ((int)param_1[0x43] == 0) {
      puVar18 = &DAT_143f3eda8;
    }
    else {
      puVar18 = (undefined2 *)param_1[0x42];
    }
    FString::PrintfImpl(local_d8,L"%s%i",puVar18,iVar19);
    plVar15 = (longlong *)FUN_142ea8420(param_1,local_d8,uVar14,6,&local_e8);
    if (local_d8[0] != 0) {
      FMemory::Free();
    }
    plVar16 = local_e8;
    for (iVar17 = (int)local_e0; iVar17 != 0; iVar17 = iVar17 + -1) {
      if (*plVar16 != 0) {
        FMemory::Free();
      }
      plVar16 = plVar16 + 2;
    }
    if (local_e8 != (longlong *)0x0) {
      FMemory::Free(local_e8);
    }
    if (plVar15 == (longlong *)0x0) {
      if (*(int *)((longlong)param_1 + 0x1e4) < 1) {
        *(undefined4 *)((longlong)param_1 + 0x1e4) = 1;
      }
      FUN_142f11a80(param_1 + 0x57,*(undefined4 *)((longlong)param_1 + 0x2b4),0,0x3f800000);
      (**(code **)(*param_1 + 0x2b8))(param_1,0xffffffff,1);
      lVar1 = param_1[0x2e];
      *(undefined2 *)((longlong)param_1 + 0x17a) = 0;
      *(undefined1 *)((longlong)param_1 + 0x179) = 0;
      uVar12 = (**(code **)(lVar1 + 0x10))(param_1 + 0x2e);
      (**(code **)(lVar1 + 0x30))(param_1 + 0x2e,uVar12,0,0);
      cVar13 = FUN_142eb34c0();
      if (cVar13 == '\0') {
        FUN_142edbed0(param_1);
      }
      else {
        LOCK();
        *(undefined4 *)((longlong)param_1 + 0x314) = 1;
        UNLOCK();
      }
      return;
    }
    (**(code **)(*plVar15 + 0x328))(plVar15,&local_f8,param_1);
    fVar11 = local_ec;
    fVar10 = local_f0;
    fVar9 = local_f4;
    fVar8 = local_f8;
    if (bVar7) {
      if (!bVar4) {
        bVar4 = true;
        if (ABS(local_f8 - fVar22) <= ABS(local_f4 - fVar20)) {
          *(float *)((longlong)param_1 + 0x2b4) = (float)dVar3;
          *(undefined1 *)((longlong)param_1 + 0x1e1) = 1;
        }
        else {
          *(float *)((longlong)param_1 + 0x2b4) = fVar21;
          *(undefined1 *)((longlong)param_1 + 0x1e1) = 0;
        }
      }
      if ((bVar5) || (local_f8 - fVar22 <= (fVar23 - fVar22) * 0.5)) {
LAB_142ed64b5:
        if (bVar6) goto LAB_142ed6535;
      }
      else {
        bVar5 = true;
        *(float *)(param_1 + 0x3d) = local_f8 - fVar23;
        if (!bVar4) goto LAB_142ed64b5;
        if (bVar6) {
          *(float *)((longlong)param_1 + 0x2b4) = fVar21;
          *(undefined1 *)((longlong)param_1 + 0x1e1) = 0;
          *(int *)((longlong)param_1 + 0x1e4) = iVar19;
          goto LAB_142ed64b5;
        }
      }
      if (local_f4 - fVar20 <= (fVar24 - fVar20) * 0.5) {
        if ((fVar24 - fVar20) * -0.5 <= local_f4 - fVar20) {
          if (!bVar6) goto LAB_142ed6535;
        }
        else {
          bVar6 = true;
          *(undefined1 *)((longlong)param_1 + 0x1e2) = 1;
          *(float *)((longlong)param_1 + 0x1ec) = local_ec - fVar20;
        }
      }
      else {
        bVar6 = true;
        *(float *)((longlong)param_1 + 0x1ec) = local_f4 - fVar24;
      }
      if ((bVar4) && (bVar5)) {
        *(float *)((longlong)param_1 + 0x2b4) = fVar21;
        *(undefined1 *)((longlong)param_1 + 0x1e1) = 1;
        *(int *)((longlong)param_1 + 0x1e4) = iVar19;
      }
    }
    else {
      bVar7 = true;
      FUN_142087ad0(plVar15,param_1 + 0x55,(longlong)param_1 + 0x2ac);
      fVar20 = fVar9;
      fVar22 = fVar8;
      fVar23 = fVar10;
      fVar24 = fVar11;
    }
LAB_142ed6535:
    iVar19 = iVar19 + 1;
    FUN_142f05ef0(param_1,plVar15,0);
  } while( true );
}



// FUNCTION 142ed6630 FUN_142ed6630 body=298 status=ok
// SIG undefined FUN_142ed6630(void)

void FUN_142ed6630(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_18;
  undefined8 local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecbdf0(param_1,param_1 + 0x220,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x298) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (*(longlong *)(param_1 + 0x298) == 0) {
    *(longlong *)(param_1 + 0x298) = param_1;
  }
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecbdf0(param_1,param_1 + 0x230,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x2a0) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (*(longlong *)(param_1 + 0x2a0) == 0) {
    *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_1 + 0x298);
  }
  FUN_14208f170(param_1,&DAT_145986064);
  return;
}



// FUNCTION 142ed6760 FUN_142ed6760 body=201 status=ok
// SIG undefined FUN_142ed6760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142ed6760(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_68[0] = &LAB_142eb0bf0;
  FUN_1420849a0(param_1,param_2,local_68);
  if (local_28 != 0) {
    plVar2 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar2 = local_38;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142ed6830 FUN_142ed6830 body=720 status=ok
// SIG undefined FUN_142ed6830(void)

void FUN_142ed6830(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  char *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  int iVar16;
  longlong *plVar17;
  char *pcVar18;
  longlong local_res10;
  
  plVar4 = (longlong *)(param_1 + 0x1e0);
  *(undefined4 *)(param_1 + 0x1c8) = 2;
  if (plVar4 != param_2) {
    iVar16 = *(int *)(param_1 + 0x1e8);
    if (iVar16 != 0) {
      plVar17 = (longlong *)(*plVar4 + 8);
      do {
        plVar6 = (longlong *)plVar17[3];
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar6 + 1;
          lVar13 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
        if (*plVar17 != 0) {
          FMemory::Free();
        }
        plVar17 = plVar17 + 7;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
    }
    iVar16 = (int)param_2[1];
    lVar13 = *param_2;
    *(int *)(param_1 + 0x1e8) = iVar16;
    if ((iVar16 == 0) && (*(int *)(param_1 + 0x1ec) == 0)) {
      *(undefined4 *)(param_1 + 0x1ec) = 0;
    }
    else {
      TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(plVar4,iVar16);
      if (iVar16 != 0) {
        lVar14 = *plVar4 + 0x18;
        lVar13 = lVar13 - *plVar4;
        do {
          *(undefined8 *)(lVar14 + -0x18) = *(undefined8 *)(lVar13 + -0x18 + lVar14);
          FString::FString(lVar14 + -0x10,lVar13 + -0x10 + lVar14);
          FText::FText(lVar14,lVar13 + lVar14);
          *(undefined1 *)(lVar14 + 0x18) = *(undefined1 *)(lVar13 + 0x18 + lVar14);
          lVar14 = lVar14 + 0x38;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
      }
    }
  }
  FUN_142088cf0(param_1,param_4);
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_142ecffe0();
    *(undefined1 *)(*(longlong *)(param_1 + 400) + 0x1e1) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 400) + 0x20a) = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 400) + 0x209) = 0;
    pcVar7 = (char *)*plVar4;
    iVar16 = *(int *)(param_1 + 0x1e8);
    if (pcVar7 != pcVar7 + (longlong)iVar16 * 0x38) {
      pcVar18 = pcVar7 + 0x30;
      do {
        uVar8 = *(undefined8 *)(param_1 + 400);
        uVar12 = UXGameInstance::GetPrivateStaticClass();
        lVar13 = FUN_142ebcee0(uVar8,param_3,uVar12,1);
        if (lVar13 != 0) {
          lVar14 = UXGameInstance::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (bVar9) {
            FUN_142ed3980(lVar13,pcVar18 + -0x28);
            pwVar15 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnTabClicked",L"::");
            pwVar11 = (wchar_t *)0x0;
            while (pwVar10 = pwVar15, pwVar10 != (wchar_t *)0x0) {
              pwVar15 = _guard_xfg_dispatch_icall_nop(pwVar10 + 1,L"::");
              pwVar11 = pwVar10;
            }
            FName::FName(&local_res10,pwVar11 + 2,1);
            lVar14 = local_res10;
            FWeakObjectPtr::operator=(lVar13 + 0x1b0,param_1);
            *(longlong *)(lVar13 + 0x1b8) = lVar14;
            if ((lVar14 != 0) && (lVar14 = FWeakObjectPtr::Get(lVar13 + 0x1b0), lVar14 != 0)) {
              UObject::FindFunction(lVar14,*(undefined8 *)(lVar13 + 0x1b8));
            }
            (**(code **)(*(longlong *)(lVar13 + 0x170) + 0x38))
                      ((longlong *)(lVar13 + 0x170),*pcVar18 == '\0');
          }
        }
        pcVar3 = pcVar18 + 8;
        pcVar18 = pcVar18 + 0x38;
      } while (pcVar3 != pcVar7 + (longlong)iVar16 * 0x38);
    }
    (**(code **)(**(longlong **)(param_1 + 400) + 0x300))();
  }
  return;
}



// FUNCTION 142ed6b00 FUN_142ed6b00 body=1215 status=ok
// SIG undefined FUN_142ed6b00(void)

void FUN_142ed6b00(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  wchar_t *pwVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  wchar_t *pwVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  longlong *plVar18;
  wchar_t *local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60 [4];
  
  plVar18 = *(longlong **)(param_1 + 0x38);
  pwVar17 = (wchar_t *)0x0;
  *(undefined4 *)(param_1 + 0x1c8) = 1;
  local_88 = param_4;
  local_70 = param_3;
  if (plVar18 != (longlong *)0x0) {
    local_78 = plVar18;
    lVar6 = USoUIInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(plVar18[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar18[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142ed6b89;
  }
  local_78 = (longlong *)0x0;
LAB_142ed6b89:
  plVar18 = (longlong *)(param_1 + 0x1d0);
  FUN_142eb3b20(plVar18,0);
  puVar3 = local_88;
  puVar14 = (undefined8 *)*param_2;
  puVar15 = puVar14 + (longlong)(int)param_2[1] * 0xb;
  if (puVar14 != puVar15) {
    pwVar2 = (wchar_t *)(local_88 + 2);
    puVar13 = local_88;
    do {
      iVar5 = *(int *)(puVar3 + 8);
      if (iVar5 == 0) {
LAB_142ed6bdb:
        if (*(char *)(puVar14 + 10) == '\0') goto LAB_142ed6be1;
LAB_142ed6c20:
        iVar5 = *(int *)(param_1 + 0x1d8);
        *(int *)(param_1 + 0x1d8) = iVar5 + 1;
        if (*(int *)(param_1 + 0x1dc) < iVar5 + 1) {
          TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(plVar18,iVar5);
        }
        puVar13 = (undefined8 *)((longlong)iVar5 * 0x58 + *plVar18);
        *puVar13 = *puVar14;
        FText::FText(puVar13 + 1,puVar14 + 1);
        FText::FText(puVar13 + 4,puVar14 + 4);
        puVar13[7] = puVar14[7];
        puVar13[8] = puVar14[8];
        puVar13[9] = puVar14[9];
        *(undefined1 *)(puVar13 + 10) = *(undefined1 *)(puVar14 + 10);
        puVar13 = local_88;
      }
      else {
        pwVar12 = pwVar17;
        if (puVar3[6] == 0) {
          pwVar12 = pwVar2;
        }
        if (pwVar12 == (wchar_t *)0x0 && puVar3[6] == 0) goto LAB_142ed6bdb;
LAB_142ed6be1:
        if (iVar5 != 0) {
          pwVar12 = (wchar_t *)puVar3[6];
          if ((wchar_t *)puVar3[6] == (wchar_t *)0x0) {
            pwVar12 = pwVar2;
          }
          if (pwVar12 != (wchar_t *)0x0) {
            pwVar7 = pwVar17;
            if ((iVar5 != 0) && (pwVar12 != (wchar_t *)0x0)) {
              pwVar7 = (wchar_t *)(**(code **)(*(longlong *)pwVar12 + 8))();
            }
            cVar4 = (*(code *)*puVar13)(pwVar7,puVar14);
            if (cVar4 != '\0') goto LAB_142ed6c20;
          }
        }
      }
      puVar14 = puVar14 + 0xb;
    } while (puVar14 != puVar15);
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_142ecffe0();
    *(undefined1 *)(*(longlong *)(param_1 + 400) + 0x1e1) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 400) + 0x20a) = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 400) + 0x209) = 0;
    lVar6 = *plVar18;
    lVar16 = (longlong)*(int *)(param_1 + 0x1d8) * 0x58 + lVar6;
    for (; lVar6 != lVar16; lVar6 = lVar6 + 0x58) {
      uVar11 = *(undefined8 *)(param_1 + 400);
      uVar8 = UXGameInstance::GetPrivateStaticClass();
      lVar9 = FUN_142ebcee0(uVar11,local_70,uVar8,1);
      if (lVar9 != 0) {
        lVar10 = UXGameInstance::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          uVar11 = FName::ToString(lVar6,local_60);
          FUN_142ed3980(lVar9,uVar11);
          if (local_60[0] != 0) {
            FMemory::Free();
          }
          pwVar12 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnTabClicked",L"::");
          pwVar2 = pwVar17;
          while (pwVar7 = pwVar12, pwVar7 != (wchar_t *)0x0) {
            pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
            pwVar2 = pwVar7;
          }
          FName::FName(&local_68,pwVar2 + 2,1);
          lVar10 = local_68;
          FWeakObjectPtr::operator=(lVar9 + 0x1b0,param_1);
          *(longlong *)(lVar9 + 0x1b8) = lVar10;
          local_80 = 0;
          if ((lVar10 != 0) && (lVar10 = FWeakObjectPtr::Get(lVar9 + 0x1b0), lVar10 != 0)) {
            UObject::FindFunction(lVar10,*(undefined8 *)(lVar9 + 0x1b8));
          }
          if ((local_78 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*local_78 + 0x580))(local_78,lVar6), cVar4 != '\0')) {
            uVar11 = 1;
          }
          else {
            uVar11 = 0;
          }
          (**(code **)(*(longlong *)(lVar9 + 0x170) + 0x38))((longlong *)(lVar9 + 0x170),uVar11);
        }
      }
    }
    (**(code **)(**(longlong **)(param_1 + 400) + 0x300))();
    local_98 = (wchar_t *)0x0;
    local_90 = 0;
    iVar5 = *(int *)(*(longlong *)(param_1 + 400) + 0x280);
    if (iVar5 < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98,0xc);
      iVar5 = (int)local_90 + 0xc;
      local_90 = CONCAT44(local_90._4_4_,iVar5);
      if (local_90._4_4_ < iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98);
      }
      builtin_wcsncpy(local_98,L"fourButtons",0xc);
    }
    else if (iVar5 < 6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98,0xc);
      iVar5 = (int)local_90 + 0xc;
      local_90 = CONCAT44(local_90._4_4_,iVar5);
      if (local_90._4_4_ < iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98);
      }
      builtin_wcsncpy(local_98,L"fiveButtons",0xc);
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98,0xb);
      iVar5 = (int)local_90 + 0xb;
      local_90 = CONCAT44(local_90._4_4_,iVar5);
      if (local_90._4_4_ < iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98);
      }
      builtin_wcsncpy(local_98,L"sixButtons",0xb);
    }
    FUN_142088cf0(param_1,&local_98);
    if (local_98 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  puVar14 = local_88;
  if (*(int *)(local_88 + 8) != 0) {
    plVar18 = (longlong *)local_88[6];
    if ((longlong *)local_88[6] == (longlong *)0x0) {
      plVar18 = local_88 + 2;
    }
    if (plVar18 != (longlong *)0x0) {
      (**(code **)(*plVar18 + 0x10))(plVar18,0);
    }
  }
  if (puVar14[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ed6fc0 FUN_142ed6fc0 body=159 status=ok
// SIG undefined FUN_142ed6fc0(void)

void FUN_142ed6fc0(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_18;
  undefined8 local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_141021f30(param_1,param_1 + 0x1f8,0,6,&local_18);
  plVar2 = local_18;
  for (iVar3 = (int)local_10; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  FUN_142ed4250(param_1,uVar1);
  *(undefined1 *)(param_1 + 0x300) = 1;
  return;
}



// FUNCTION 142ed7060 FUN_142ed7060 body=3461 status=ok
// SIG undefined FUN_142ed7060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ed7060(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_358 [32];
  undefined1 local_338;
  longlong **local_330;
  float local_328;
  float local_324;
  undefined1 local_320 [4];
  float local_31c;
  float local_318;
  undefined4 local_314 [3];
  float local_308;
  float local_304;
  ulonglong local_300;
  longlong *local_2f8;
  ulonglong local_2f0;
  longlong *local_2e8;
  ulonglong local_2e0;
  longlong *local_2d8;
  longlong *local_2d0;
  undefined8 local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  longlong *local_2b0;
  undefined8 local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  longlong local_290;
  undefined8 local_288;
  longlong local_280;
  undefined8 local_278;
  longlong *local_270;
  undefined8 local_268;
  longlong local_260;
  undefined8 local_258;
  longlong *local_250;
  undefined8 local_248;
  longlong local_240;
  undefined8 local_238;
  longlong local_230;
  longlong *local_228;
  ulonglong local_220;
  longlong *plStack_218;
  ulonglong local_210;
  longlong *plStack_208;
  ulonglong local_200;
  longlong *plStack_1f8;
  longlong local_1f0;
  longlong *local_1e8;
  longlong local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  float fStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  float fStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined8 uStack_184;
  undefined8 uStack_17c;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158 [80];
  double local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined2 local_84;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_358;
  uVar12 = 0;
  local_314[0] = 0;
  (**(code **)(*param_1 + 0x4b8))(param_1,local_320);
  uVar5 = (**(code **)(*param_1 + 0x560))(param_1);
  *(undefined1 *)(param_1 + 0xc1) = uVar5;
  uVar7 = (**(code **)(*param_1 + 0x558))(param_1);
  *(undefined4 *)(param_1 + 0xc3) = uVar7;
  uVar7 = 0;
  if ((char)param_1[0xc1] != '\0') {
    lVar8 = FUN_140f141d0(param_1);
    local_314[0] = 0xffffffff;
    if ((lVar8 != 0) && (cVar6 = FUN_142710360(lVar8,local_314), cVar6 != '\0')) {
      uVar7 = local_314[0];
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x61c) = uVar7;
  uVar14 = uVar12;
  if (param_1[0x57] == 0) {
LAB_142ed718a:
    bVar17 = false;
  }
  else {
    local_2c0 = 0;
    local_2b8 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2c0,0);
    FGenericPlatformString::Memcpy(local_2c0,L"content",0x10);
    local_330 = &local_2d0;
    local_338 = 6;
    local_2d0 = (longlong *)0x0;
    local_2c8 = 0;
    uVar14 = 3;
    local_1d0 = 0;
    cVar6 = FUN_140e98b90(param_1[0x57],param_1 + 0xbe,&local_2c0,0);
    if (cVar6 == '\0') goto LAB_142ed718a;
    bVar17 = true;
  }
  if ((uVar14 & 2) != 0) {
    uVar14 = (ulonglong)((uint)uVar14 & 0xfffffffd);
    plVar10 = local_2d0;
    for (iVar16 = (int)local_2c8; iVar16 != 0; iVar16 = iVar16 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_2d0 != (longlong *)0x0) {
      FMemory::Free(local_2d0);
    }
  }
  if (((uVar14 & 1) != 0) && (uVar14 = (ulonglong)((uint)uVar14 & 0xfffffffe), local_2c0 != 0)) {
    FMemory::Free();
  }
  if (!bVar17) {
    return;
  }
  local_2a0 = 0;
  local_298 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a0,0);
  FGenericPlatformString::Memcpy(local_2a0,L"layouts",0x10);
  local_330 = &local_2b0;
  local_2b0 = (longlong *)0x0;
  local_2a8 = 0;
  local_1c8 = 0;
  local_338 = 6;
  cVar6 = FUN_140e98b90(param_1[0xbe],param_1 + 0xbf,&local_2a0,0);
  plVar10 = local_2b0;
  for (iVar16 = (int)local_2a8; iVar16 != 0; iVar16 = iVar16 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_2b0 != (longlong *)0x0) {
    FMemory::Free(local_2b0);
  }
  if (local_2a0 != 0) {
    FMemory::Free();
  }
  if (cVar6 == '\0') {
    return;
  }
  FUN_140ad4c90(param_1,&local_230);
  if (local_230 != 0) {
    if ((char)param_1[0xc1] == '\0') {
      FUN_142085870(param_1[0xbf],&local_1e0,L"layoutSplit");
      if (local_1e0 != 0) {
        FUN_142056e90();
      }
      if (local_1d8 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_1d8 + 1;
        lVar8 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_1d8)(local_1d8);
          LOCK();
          piVar1 = (int *)((longlong)local_1d8 + 0xc);
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*local_1d8 + 8))(local_1d8,1);
          }
        }
      }
      local_280 = 0;
      local_278 = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_280,0);
      FGenericPlatformString::Memcpy(local_280,L"standard",0x12);
      FUN_142088cf0(param_1[0xbf],&local_280);
      lVar8 = local_280;
    }
    else {
      FUN_142085870(param_1[0xbf],&local_1f0,L"layoutStandard");
      if (local_1f0 != 0) {
        FUN_142056e90();
      }
      if (local_1e8 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_1e8 + 1;
        lVar8 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_1e8)(local_1e8);
          LOCK();
          piVar1 = (int *)((longlong)local_1e8 + 0xc);
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*local_1e8 + 8))(local_1e8,1);
          }
        }
      }
      local_290 = 0;
      local_288 = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_290,0);
      FGenericPlatformString::Memcpy(local_290,L"split",0xc);
      FUN_142088cf0(param_1[0xbf],&local_290);
      lVar8 = local_290;
    }
    if (lVar8 != 0) {
      FMemory::Free();
    }
    FUN_142036df0(local_230);
    lVar8 = param_1[0xbf];
    if ((*(longlong *)(lVar8 + 0x28) == 0) || (*(longlong *)(lVar8 + 0x30) == 0)) {
LAB_142ed74a4:
      puVar11 = &local_220;
      local_220 = 0;
      plStack_218 = (longlong *)0x0;
      uVar14 = (ulonglong)((uint)uVar14 | 0x20);
      uVar15 = uVar12;
    }
    else {
      piVar1 = (int *)(*(longlong *)(lVar8 + 0x30) + 8);
      LOCK();
      iVar16 = *piVar1;
      if (iVar16 == 0) {
        *piVar1 = 0;
        iVar16 = 0;
      }
      UNLOCK();
      if (iVar16 < 1) goto LAB_142ed74a4;
      local_2f8 = *(longlong **)(lVar8 + 0x30);
      uVar14 = (ulonglong)((uint)uVar14 | 0x10);
      local_300 = 0;
      if (local_2f8 != (longlong *)0x0) {
        LOCK();
        iVar16 = (int)local_2f8[1];
        bVar17 = iVar16 == 0;
        if (bVar17) {
          *(int *)(local_2f8 + 1) = 0;
          iVar16 = 0;
        }
        UNLOCK();
        while (!bVar17) {
          LOCK();
          bVar17 = iVar16 == (int)local_2f8[1];
          if (bVar17) {
            *(int *)(local_2f8 + 1) = iVar16 + 1;
          }
          UNLOCK();
          if (bVar17) {
            local_300 = *(ulonglong *)(lVar8 + 0x28);
            puVar11 = &local_300;
            uVar15 = local_300;
            goto LAB_142ed74b6;
          }
          LOCK();
          iVar16 = (int)local_2f8[1];
          bVar17 = iVar16 == 0;
          if (bVar17) {
            *(int *)(local_2f8 + 1) = 0;
            iVar16 = 0;
          }
          UNLOCK();
        }
        local_2f8 = (longlong *)0x0;
      }
      puVar11 = &local_300;
      uVar15 = 0;
    }
LAB_142ed74b6:
    plVar10 = (longlong *)puVar11[1];
    puVar11[1] = 0;
    plVar3 = plStack_218;
    *puVar11 = 0;
    if (((uVar14 & 0x20) != 0) &&
       (uVar14 = (ulonglong)((uint)uVar14 & 0xffffffdf), plStack_218 != (longlong *)0x0)) {
      LOCK();
      plVar2 = plStack_218 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_218)(plStack_218);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar16 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*plStack_218 + 8))(plStack_218,1);
        }
      }
    }
    plVar3 = local_2f8;
    if (((uVar14 & 0x10) != 0) &&
       (uVar14 = (ulonglong)((uint)uVar14 & 0xffffffef), local_2f8 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_2f8 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_2f8)(local_2f8);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar16 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*local_2f8 + 8))(local_2f8,1);
        }
      }
    }
    if (uVar15 != 0) {
      FUN_14204d040(uVar15);
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar10 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar16 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
  }
  plVar10 = local_228;
  if (local_228 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_228 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_228)(local_228);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_228 + 8))(local_228,1);
      }
    }
  }
  if ((char)param_1[0xc1] == '\0') {
LAB_142ed764d:
    bVar17 = false;
  }
  else {
    local_260 = 0;
    local_258 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_260,0);
    FGenericPlatformString::Memcpy(local_260,L"layoutSplit",0x18);
    local_330 = &local_270;
    local_338 = 6;
    local_270 = (longlong *)0x0;
    uVar14 = (ulonglong)((uint)uVar14 | 0xc);
    local_268 = 0;
    local_1c0 = 0;
    cVar6 = FUN_140e98b90(param_1[0xbf],param_1 + 0xc0,&local_260,0);
    if (cVar6 == '\0') goto LAB_142ed764d;
    bVar17 = true;
  }
  if ((uVar14 & 8) != 0) {
    uVar14 = (ulonglong)((uint)uVar14 & 0xfffffff7);
    plVar10 = local_270;
    for (iVar16 = (int)local_268; iVar16 != 0; iVar16 = iVar16 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_270 != (longlong *)0x0) {
      FMemory::Free(local_270);
    }
  }
  uVar13 = (uint)uVar14;
  if (((uVar14 & 4) != 0) && (uVar13 = uVar13 & 0xfffffffb, local_260 != 0)) {
    FMemory::Free();
  }
  if (!bVar17) {
    local_240 = 0;
    local_238 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_240,0);
    FGenericPlatformString::Memcpy(local_240,L"layoutStandard",0x1e);
    local_330 = &local_250;
    local_338 = 6;
    local_250 = (longlong *)0x0;
    local_248 = 0;
    FUN_140e98b90(param_1[0xbf],param_1 + 0xc0,&local_240,0);
    plVar10 = local_250;
    for (iVar16 = (int)local_248; iVar16 != 0; iVar16 = iVar16 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_250 != (longlong *)0x0) {
      FMemory::Free(local_250);
    }
    if (local_240 != 0) {
      FMemory::Free();
    }
    goto LAB_142ed7cff;
  }
  if (param_1[0xc0] == 0) goto LAB_142ed7cff;
  fVar20 = 0.0;
  fVar19 = 0.0;
  FUN_142087ad0(param_1[0xc0],&local_318,&local_31c);
  cVar6 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x58c);
  if (cVar6 != '\0') {
    uVar9 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
    lVar8 = FUN_1422312c0(uVar9);
    if ((lVar8 != 0) && (iVar16 = FUN_14046e5c0(lVar8), 1 < iVar16)) {
      plVar10 = (longlong *)FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
      lVar8 = (**(code **)(*plVar10 + 0x148))(plVar10);
      if (lVar8 != 0) {
        plVar10 = (longlong *)FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
        lVar8 = (**(code **)(*plVar10 + 0x148))(plVar10);
        if ((*(byte *)(lVar8 + 0x830) & 4) == 0) {
          FUN_142eb7ad0(param_1,&local_328);
          FUN_142eb7270(param_1,&local_308);
          local_318 = local_318 + local_308 * local_328;
          local_31c = local_31c + local_304 * local_324;
          local_f0 = 0;
          local_e0 = 0;
          local_d8 = 0;
          local_c0 = 0;
          local_b0 = 0;
          local_a8 = 0;
          local_98 = 0;
          local_f8 = 0x3f800000;
          local_e8 = 0x3f80000000000000;
          local_d0 = 0x3f800000;
          local_c8 = 0x3f800000;
          local_b8 = 0x3f80000000000000;
          local_a0 = 0x3f800000;
          local_90 = 0x3f80000000000000;
          local_84 = 0;
          lVar8 = (**(code **)(**(longlong **)(param_1[0xc0] + 0x38) + 0x408))();
          if ((*(longlong *)(lVar8 + 0x28) == 0) || (*(longlong *)(lVar8 + 0x30) == 0)) {
LAB_142ed7908:
            puVar11 = &local_210;
            local_210 = 0;
            plStack_208 = (longlong *)0x0;
            uVar13 = uVar13 | 0x80;
            uVar14 = uVar12;
          }
          else {
            piVar1 = (int *)(*(longlong *)(lVar8 + 0x30) + 8);
            LOCK();
            iVar16 = *piVar1;
            if (iVar16 == 0) {
              *piVar1 = 0;
              iVar16 = 0;
            }
            UNLOCK();
            if (iVar16 < 1) goto LAB_142ed7908;
            local_2e8 = *(longlong **)(lVar8 + 0x30);
            uVar13 = uVar13 | 0x40;
            local_2f0 = 0;
            if (local_2e8 != (longlong *)0x0) {
              LOCK();
              iVar16 = (int)local_2e8[1];
              bVar17 = iVar16 == 0;
              if (bVar17) {
                *(int *)(local_2e8 + 1) = 0;
                iVar16 = 0;
              }
              UNLOCK();
              while (!bVar17) {
                LOCK();
                bVar17 = iVar16 == (int)local_2e8[1];
                if (bVar17) {
                  *(int *)(local_2e8 + 1) = iVar16 + 1;
                }
                UNLOCK();
                if (bVar17) {
                  puVar11 = &local_2f0;
                  local_2f0 = *(ulonglong *)(lVar8 + 0x28);
                  uVar14 = *(ulonglong *)(lVar8 + 0x28);
                  goto LAB_142ed791b;
                }
                LOCK();
                iVar16 = (int)local_2e8[1];
                bVar17 = iVar16 == 0;
                if (bVar17) {
                  *(int *)(local_2e8 + 1) = 0;
                  iVar16 = 0;
                }
                UNLOCK();
              }
              local_2e8 = (longlong *)0x0;
            }
            puVar11 = &local_2f0;
            uVar14 = 0;
          }
LAB_142ed791b:
          plVar10 = (longlong *)puVar11[1];
          puVar11[1] = 0;
          plVar3 = plStack_208;
          *puVar11 = 0;
          if (((char)uVar13 < '\0') &&
             (uVar13 = uVar13 & 0xffffff7f, plStack_208 != (longlong *)0x0)) {
            LOCK();
            plVar2 = plStack_208 + 1;
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plStack_208)(plStack_208);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar16 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar16 == 1) {
                (**(code **)(*plStack_208 + 8))(plStack_208,1);
              }
            }
          }
          plVar3 = local_2e8;
          if (((uVar13 & 0x40) != 0) && (local_2e8 != (longlong *)0x0)) {
            LOCK();
            plVar2 = local_2e8 + 1;
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_2e8)(local_2e8);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar16 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar16 == 1) {
                (**(code **)(*local_2e8 + 8))(local_2e8,1);
              }
            }
          }
          FUN_142039630(uVar14,local_158);
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar10 + 1;
            lVar8 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              iVar16 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar16 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
              }
            }
          }
          fVar19 = (float)(local_108 * 0.017453293005625408);
          if (local_328 == 0.0) {
            fVar20 = 0.0;
            fVar19 = _guard_xfg_dispatch_icall_nop(fVar19 * local_324);
            fVar19 = fVar19 * (local_304 / local_308);
          }
          else if (local_324 == 0.0) {
            fVar20 = _guard_xfg_dispatch_icall_nop(fVar19 * local_328);
            fVar19 = 0.0;
          }
          else {
            fVar20 = _guard_xfg_dispatch_icall_nop(fVar19 * local_328);
            fVar19 = fVar20 * (local_304 / local_308);
            if (local_328 <= 0.0) {
              fVar19 = -fVar19;
            }
            if (local_324 <= 0.0) {
              fVar19 = -fVar19;
            }
          }
        }
      }
    }
  }
  FUN_14208ff10(param_1[0xc0],local_318,local_31c);
  lVar8 = param_1[0xc0];
  if ((*(longlong *)(lVar8 + 0x28) == 0) || (*(longlong *)(lVar8 + 0x30) == 0)) {
LAB_142ed7b48:
    puVar11 = &local_200;
    local_200 = 0;
    plStack_1f8 = (longlong *)0x0;
    bVar4 = false;
    bVar17 = true;
  }
  else {
    piVar1 = (int *)(*(longlong *)(lVar8 + 0x30) + 8);
    LOCK();
    iVar16 = *piVar1;
    if (iVar16 == 0) {
      *piVar1 = 0;
      iVar16 = 0;
    }
    UNLOCK();
    if (iVar16 < 1) goto LAB_142ed7b48;
    local_2d8 = *(longlong **)(lVar8 + 0x30);
    bVar4 = true;
    bVar17 = false;
    local_2e0 = 0;
    if (local_2d8 != (longlong *)0x0) {
      LOCK();
      iVar16 = (int)local_2d8[1];
      bVar18 = iVar16 == 0;
      if (bVar18) {
        *(int *)(local_2d8 + 1) = 0;
        iVar16 = 0;
      }
      UNLOCK();
      while (!bVar18) {
        LOCK();
        bVar18 = iVar16 == (int)local_2d8[1];
        if (bVar18) {
          *(int *)(local_2d8 + 1) = iVar16 + 1;
        }
        UNLOCK();
        if (bVar18) {
          uVar12 = *(ulonglong *)(lVar8 + 0x28);
          puVar11 = &local_2e0;
          local_2e0 = uVar12;
          goto LAB_142ed7b5b;
        }
        LOCK();
        iVar16 = (int)local_2d8[1];
        bVar18 = iVar16 == 0;
        if (bVar18) {
          *(int *)(local_2d8 + 1) = 0;
          iVar16 = 0;
        }
        UNLOCK();
      }
      local_2d8 = (longlong *)0x0;
    }
    uVar12 = 0;
    puVar11 = &local_2e0;
  }
LAB_142ed7b5b:
  plVar10 = (longlong *)puVar11[1];
  puVar11[1] = 0;
  plVar3 = plStack_1f8;
  *puVar11 = 0;
  if ((bVar17) && (plStack_1f8 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_1f8 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_1f8)(plStack_1f8);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plStack_1f8 + 8))(plStack_1f8,1);
      }
    }
  }
  plVar3 = local_2d8;
  if ((bVar4) && (local_2d8 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_2d8 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_2d8)(local_2d8);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_2d8 + 8))(local_2d8,1);
      }
    }
  }
  uStack_184 = 0;
  uStack_17c = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0x3f800000;
  local_188 = 0x3f800000;
  uStack_174 = 0x3f800000;
  FUN_14203abd0(uVar12,&local_188);
  fStack_1b0 = uStack_184._4_4_ + fVar20;
  fStack_1a0 = (float)uStack_170 + fVar19;
  uStack_184 = CONCAT44(fStack_1b0,(undefined4)uStack_184);
  local_1b8 = local_188;
  uStack_1b4 = (undefined4)uStack_184;
  uStack_1ac = (undefined4)uStack_17c;
  uStack_170 = CONCAT44(uStack_170._4_4_,fStack_1a0);
  local_1a8 = uStack_17c._4_4_;
  uStack_1a4 = uStack_174;
  uStack_19c = uStack_170._4_4_;
  local_198 = (undefined4)local_168;
  uStack_194 = local_168._4_4_;
  uStack_190 = (undefined4)uStack_160;
  uStack_18c = uStack_160._4_4_;
  FUN_1420522e0(uVar12,&local_1b8);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar10 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
LAB_142ed7cff:
  param_1[0x58] = param_1[0xc0];
  return;
}



// FUNCTION 142ed7df0 FUN_142ed7df0 body=104 status=ok
// SIG undefined FUN_142ed7df0(void)

void FUN_142ed7df0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  
  if ((*(longlong *)(param_1 + 0x368) != 0) && (*(longlong *)(param_1 + 0x370) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x370) + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (0 < iVar3) {
      UMistDebugEntityScreen::InspectEntity
                (param_1 + 0x360,param_2,1,*(undefined1 *)(param_1 + 0x359));
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x380);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142ed7e4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x278))(plVar2,0);
  return;
}



// FUNCTION 142ed7e60 FUN_142ed7e60 body=81 status=ok
// SIG undefined FUN_142ed7e60(void)

undefined1 FUN_142ed7e60(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_142eb7010(param_1 + 0x4d8);
  if (cVar2 == '\x01') {
    cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x59c);
    if (cVar2 != '\0') {
      uVar1 = FWeakObjectPtr::Get(param_1 + 0x59c);
      cVar2 = FUN_142ef5da0(uVar1);
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142ed7ef0 IsFindActiveTask body=36 status=ok
// SIG undefined IsFindActiveTask(void)

undefined1 BattleSceneDirector::IsFindActiveTask(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    cVar1 = FUN_142f154b0();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142ed7f20 FUN_142ed7f20 body=782 status=ok
// SIG undefined FUN_142ed7f20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142ed7f20(longlong param_1,undefined1 param_2)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_1b8 [36];
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 local_178 [80];
  undefined1 *local_128 [2];
  longlong local_118 [4];
  longlong *local_f8;
  int local_e8;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  cVar3 = FUN_14202a080();
  if ((cVar3 == '\0') || ((*(byte *)(param_1 + 0x624) & 1) == 0)) {
LAB_142ed809b:
    uVar6 = FUN_1420890a0(param_1);
    if ((char)uVar6 != '\0') {
      if (*(char *)(param_1 + 0x5f8) == '\0') {
        uVar6 = FWeakObjectPtr::IsValid(param_1 + 0x5d0);
        if ((char)uVar6 == '\0') {
          return uVar6;
        }
        uVar6 = FWeakObjectPtr::Get(param_1 + 0x5d0);
        if (*(longlong *)(uVar6 + 0x590) == 0) {
          return uVar6;
        }
        uVar6 = FUN_142ef5df0(*(longlong *)(uVar6 + 0x590),param_1);
        if ((char)uVar6 == '\0') {
          return uVar6;
        }
      }
      uVar6 = 0;
      LOCK();
      bVar1 = *(byte *)(param_1 + 0x4d9);
      if (bVar1 == 0) {
        *(byte *)(param_1 + 0x4d9) = 1;
      }
      else {
        uVar6 = (ulonglong)bVar1;
      }
      UNLOCK();
      if (bVar1 == 0) {
        local_194 = 0xffffffff;
        if (*(longlong *)(param_1 + 0x2b8) != 0) {
          FUN_14170c210(&local_194);
        }
        FWeakObjectPtr::operator=(&local_190,param_1);
        uVar7 = local_194;
        local_194 = 0xffffffff;
        local_a8 = (longlong *)0x0;
        local_98 = 0;
        puVar4 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = &PTR_FUN_144606070;
          puVar4[1] = param_1;
          *(undefined4 *)(puVar4 + 2) = local_190;
          *(undefined4 *)((longlong)puVar4 + 0x14) = local_18c;
          *(undefined1 *)(puVar4 + 3) = param_2;
          *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar7;
          uVar7 = 0xffffffff;
        }
        local_d8[0] = &LAB_142eb0800;
        uVar5 = FUN_1420849a0(param_1,local_178,local_d8);
        FUN_14208c4f0(param_1,uVar5);
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
        FUN_1416f8340(uVar7);
        uVar6 = FUN_1416f8340(local_194);
      }
    }
  }
  else {
    cVar3 = FUN_14202a080();
    if ((cVar3 != '\0') && ((*(byte *)(param_1 + 0x624) & 1) != 0)) {
      LOCK();
      bVar9 = *(int *)(param_1 + 0x628) == 0;
      if (bVar9) {
        *(int *)(param_1 + 0x628) = 0;
      }
      UNLOCK();
      if (!bVar9) goto LAB_142ed809b;
    }
    uStack_180 = CONCAT31(uStack_180._1_3_,param_2);
    local_f8 = (longlong *)0x0;
    local_e8 = 0;
    local_188 = param_1;
    puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_118);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar4 + 1) = (undefined4)local_188;
      *(undefined4 *)((longlong)puVar4 + 0xc) = local_188._4_4_;
      *(undefined4 *)(puVar4 + 2) = uStack_180;
      *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_17c;
    }
    local_128[0] = &LAB_142eb0c30;
    uVar5 = FUN_1420849a0(param_1,local_88,local_128);
    FUN_14208d480(param_1,uVar5);
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
    if (local_e8 != 0) {
      plVar8 = local_118;
      if (local_f8 != (longlong *)0x0) {
        plVar8 = local_f8;
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,0);
      }
    }
    if (local_f8 != (longlong *)0x0) {
      FMemory::Free();
    }
    uVar6 = FWeakObjectPtr::IsValid(param_1 + 0x5d8);
    if ((char)uVar6 != '\0') {
      LOCK();
      iVar2 = *(int *)(param_1 + 0x628);
      *(int *)(param_1 + 0x628) = 1;
      UNLOCK();
      if (iVar2 == 0) {
        uVar5 = FWeakObjectPtr::Get(param_1 + 0x5d8);
        uVar6 = FUN_142ed95f0(param_1,uVar5,0);
      }
    }
  }
  return uVar6;
}



// FUNCTION 142ed8230 FUN_142ed8230 body=434 status=ok
// SIG undefined FUN_142ed8230(void)

undefined8 FUN_142ed8230(undefined8 param_1,longlong param_2,longlong param_3,byte param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined8 local_38;
  undefined8 local_30;
  short local_28;
  undefined1 local_20 [8];
  undefined8 local_18;
  undefined1 local_10 [8];
  
  FText::FText(local_68);
  FText::FText(local_50);
  local_28 = 1;
  local_38 = 0;
  local_30 = 0;
  FWeakObjectPtr::operator=(local_20,0);
  local_18 = 0;
  FName::FName(local_10,"Default",1);
  FText::operator=(local_50,param_3);
  FText::operator=(local_68,param_2);
  local_28 = (ushort)param_4 << 8;
  uVar6 = FUN_142ed88d0(param_1,local_68);
  FUN_142ea9b80(&local_38);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_60 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_2 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar4 = *(longlong **)(param_3 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return uVar6;
}



// FUNCTION 142ed83f0 FUN_142ed83f0 body=895 status=ok
// SIG undefined FUN_142ed83f0(void)

undefined8 FUN_142ed83f0(undefined8 param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  longlong local_98;
  undefined8 local_90;
  undefined2 local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  FText::FText(local_c8);
  FText::FText(local_b0);
  local_88 = 1;
  local_98 = 0;
  local_90 = 0;
  FWeakObjectPtr::operator=(local_80,0);
  local_78 = 0;
  FName::FName(&local_70,"Default",1);
  FText::operator=(local_b0,param_3);
  FText::operator=(local_c8,param_2);
  local_88 = local_88 & 0xff00;
  puVar6 = (undefined8 *)FName::FName(local_res10,"Default",1);
  local_70 = *puVar6;
  local_88 = CONCAT11(param_4,(undefined1)local_88);
  FText::FText(local_f8);
  local_e0 = 0;
  local_d8 = 1;
  puVar6 = (undefined8 *)FName::FName(local_res18,&DAT_145983d34,1);
  local_e0 = *puVar6;
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_60,L"Confirm",L"GbxCoreDialogBox",L"DialogChoice_Confirm");
  FText::operator=(local_f8,uVar7);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_58 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  uVar4 = local_90;
  lVar8 = (longlong)(int)local_90;
  iVar5 = (int)local_90 + 1;
  local_90 = CONCAT44(local_90._4_4_,iVar5);
  if (local_90._4_4_ < iVar5) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_98,uVar4 & 0xffffffff);
  }
  lVar8 = local_98 + lVar8 * 0x28;
  FText::FText(lVar8,local_f8);
  *(undefined8 *)(lVar8 + 0x18) = local_e0;
  *(undefined1 *)(lVar8 + 0x20) = local_d8;
  puVar6 = (undefined8 *)FName::FName(local_68,&DAT_145983f94,1);
  local_e0 = *puVar6;
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_48,L"Cancel",L"GbxCoreDialogBox",L"DialogChoice_Cancel");
  FText::operator=(local_f8,uVar7);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  uVar4 = local_90;
  lVar8 = (longlong)(int)local_90;
  iVar5 = (int)local_90 + 1;
  local_90 = CONCAT44(local_90._4_4_,iVar5);
  if (local_90._4_4_ < iVar5) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_98,uVar4 & 0xffffffff);
  }
  lVar8 = local_98 + lVar8 * 0x28;
  FText::FText(lVar8,local_f8);
  *(undefined8 *)(lVar8 + 0x18) = local_e0;
  *(undefined1 *)(lVar8 + 0x20) = local_d8;
  uVar7 = FUN_142ed88d0(param_1,local_c8);
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_f0 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)local_f0 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  FUN_142ea9b80(&local_98);
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_a8 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar1 = (int *)((longlong)local_a8 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_a8 + 8))(local_a8,1);
      }
    }
  }
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_c0 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  plVar3 = *(longlong **)(param_2 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar3 = *(longlong **)(param_3 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return uVar7;
}



// FUNCTION 142ed8770 FUN_142ed8770 body=337 status=ok
// SIG undefined FUN_142ed8770(void)

longlong FUN_142ed8770(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if (param_1 != 0) {
    uVar2 = FUN_142f30760();
    plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_1,uVar2);
    if ((((plVar3 != (longlong *)0x0) && (lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3), lVar4 != 0)
         ) && (*(longlong *)(lVar4 + 0x80) != 0)) &&
       (lVar5 = (**(code **)(*plVar3 + 0x18))(plVar3), lVar5 != 0)) {
      uVar2 = *(undefined8 *)(lVar4 + 0x80);
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar6 = FUN_142f1bdf0();
      lVar4 = FUN_1417985e0(uVar6,param_1,0,0,0,uVar2,0,0,0);
      if (lVar4 != 0) {
        FUN_142ea9d90(lVar4 + 0xc0,param_2);
        lVar4 = FUN_142f02280(lVar5,lVar4);
        if (lVar4 != 0) {
          lVar5 = FUN_142f1bea0();
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
            return lVar4;
          }
        }
        return 0;
      }
    }
  }
  return 0;
}



// FUNCTION 142ed88d0 FUN_142ed88d0 body=832 status=ok
// SIG undefined FUN_142ed88d0(void)

longlong FUN_142ed88d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 uVar16;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar6 = FUN_142f30760();
  plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_1,uVar6);
  if (plVar7 == (longlong *)0x0) {
    return 0;
  }
  lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7);
  lVar9 = (**(code **)(*plVar7 + 0x18))(plVar7);
  if (lVar8 == 0) {
    return 0;
  }
  if (lVar9 == 0) {
    return 0;
  }
  lVar10 = *(longlong *)(lVar8 + 0x48);
  if (lVar10 == 0) {
    return 0;
  }
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar6 = FUN_142f16620();
  lVar10 = FUN_1417985e0(uVar6,param_1,0,0,0,lVar10,0,0,0);
  if (lVar10 == 0) {
    return 0;
  }
  FText::operator=(lVar10 + 0x58,param_2);
  FText::operator=(lVar10 + 0x70,param_2 + 0x18);
  plVar7 = (longlong *)(lVar10 + 0x88);
  if (plVar7 != (longlong *)(param_2 + 0x30)) {
    iVar13 = *(int *)(lVar10 + 0x90);
    if (iVar13 != 0) {
      plVar15 = (longlong *)(*plVar7 + 8);
      do {
        plVar4 = (longlong *)*plVar15;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar14 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
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
        plVar15 = plVar15 + 5;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    iVar13 = *(int *)(param_2 + 0x38);
    lVar14 = *(longlong *)(param_2 + 0x30);
    *(int *)(lVar10 + 0x90) = iVar13;
    if ((iVar13 == 0) && (*(int *)(lVar10 + 0x94) == 0)) {
      *(undefined4 *)(lVar10 + 0x94) = 0;
    }
    else {
      TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(plVar7,iVar13);
      if (iVar13 != 0) {
        puVar12 = (undefined1 *)(*plVar7 + 0x20);
        lVar14 = lVar14 - *plVar7;
        do {
          FText::FText(puVar12 + -0x20,puVar12 + lVar14 + -0x20);
          *(undefined8 *)(puVar12 + -8) = *(undefined8 *)(puVar12 + lVar14 + -8);
          *puVar12 = puVar12[lVar14];
          puVar12 = puVar12 + 0x28;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
    }
  }
  *(undefined1 *)(lVar10 + 0x98) = *(undefined1 *)(param_2 + 0x40);
  *(undefined1 *)(lVar10 + 0x99) = *(undefined1 *)(param_2 + 0x41);
  *(undefined4 *)(lVar10 + 0xa0) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(lVar10 + 0xa4) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined8 *)(lVar10 + 0xa8) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(lVar10 + 0xb0) = *(undefined8 *)(param_2 + 0x58);
  uVar16 = 1;
  if (*(char *)(param_2 + 0x41) != '\0') {
    uVar16 = 4;
  }
  *(undefined1 *)(lVar10 + 0x32) = uVar16;
  if (*(longlong *)(param_2 + 0x58) != 0) {
    plVar7 = *(longlong **)(*(longlong *)(lVar8 + 0x48) + 0xb8);
    plVar15 = plVar7 + (longlong)*(int *)(*(longlong *)(lVar8 + 0x48) + 0xc0) * 2;
    for (; plVar7 != plVar15; plVar7 = plVar7 + 2) {
      if (*(longlong *)(param_2 + 0x58) == *plVar7) {
        if (plVar7[1] == 0) goto LAB_142ed8b86;
        lVar11 = APickup::GetPrivateStaticClass();
        lVar8 = plVar7[1];
        lVar14 = lVar8;
        goto joined_r0x000142ed8b76;
      }
    }
  }
  goto LAB_142ed8b8c;
joined_r0x000142ed8b76:
  if (lVar14 == 0) goto LAB_142ed8b86;
  if (lVar14 == lVar11) goto LAB_142ed8b88;
  lVar14 = *(longlong *)(lVar14 + 0x30);
  goto joined_r0x000142ed8b76;
LAB_142ed8b86:
  lVar8 = 0;
LAB_142ed8b88:
  *(longlong *)(lVar10 + 0x48) = lVar8;
LAB_142ed8b8c:
  lVar8 = FUN_142f02280(lVar9,lVar10);
  if (lVar8 != 0) {
    lVar9 = APickup::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      return lVar8;
    }
  }
  return 0;
}



// FUNCTION 142ed8c10 FUN_142ed8c10 body=649 status=ok
// SIG undefined FUN_142ed8c10(void)

longlong FUN_142ed8c10(longlong param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_58;
  longlong local_50;
  undefined1 local_48 [32];
  
  lVar10 = 0;
  if ((param_1 != 0) && (*param_2 != 0)) {
    lVar2 = UGHUDEmoteMenu::GetPrivateStaticClass();
    for (lVar5 = *param_2; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar2) {
        if (*param_2 == 0) {
          return 0;
        }
        uVar3 = GetTransientPackage();
        FUN_1417846f0(uVar3,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        uVar4 = FUN_142f38260();
        lVar5 = FUN_1417985e0(uVar4,uVar3,0,0,0,0,0,0,0);
        if (lVar5 == 0) {
          return 0;
        }
        lVar2 = lVar10;
        if (*param_2 != 0) {
          lVar6 = UGHUDEmoteMenu::GetPrivateStaticClass();
          for (lVar9 = *param_2; (lVar2 = lVar10, lVar9 != 0 && (lVar2 = *param_2, lVar9 != lVar6));
              lVar9 = *(longlong *)(lVar9 + 0x30)) {
          }
        }
        *(longlong *)(lVar5 + 0x48) = lVar2;
        *(undefined4 *)(lVar5 + 0x31) = 0x20501;
        *(undefined1 *)(lVar5 + 0x30) = 0;
        uVar3 = FUN_142f30760();
        plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_1,uVar3);
        if (plVar7 == (longlong *)0x0) {
          return 0;
        }
        lVar2 = (**(code **)(*plVar7 + 0x18))(plVar7);
        if (lVar2 == 0) {
          return 0;
        }
        lVar5 = FUN_142f02280(lVar2,lVar5);
        if (lVar5 != 0) {
          lVar2 = UGHUDEmoteMenu::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            FUN_142ea9ca0(lVar5 + 0x2f0,param_3);
            if (*(longlong *)(lVar5 + 0x308) == 0) {
              return lVar5;
            }
            (**(code **)(*(longlong *)(*(longlong *)(lVar5 + 0x308) + 0x148) + 0x38))();
            lVar2 = *(longlong *)(lVar5 + 0x2f0);
            lVar9 = (longlong)*(int *)(lVar5 + 0x2f8) * 0x20 + lVar2;
            for (; lVar2 != lVar9; lVar2 = lVar2 + 0x20) {
              lVar6 = *(longlong *)(lVar5 + 0x308);
              local_50 = 0;
              lVar8 = lVar10;
              local_58 = lVar6;
              if (lVar6 != 0) {
                uVar3 = FUN_142f2b0d0();
                lVar8 = UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar3);
              }
              local_50 = lVar8;
              lVar6 = FUN_142ee6de0(&local_58,*(undefined8 *)(lVar5 + 0x2c8));
              if (lVar6 != 0) {
                uVar3 = FText::FText(local_48,lVar2);
                FUN_142f0e010(lVar6,uVar3);
                if (param_4 == *(int *)(lVar2 + 0x18)) {
                  plVar7 = (longlong *)(*(longlong *)(lVar5 + 0x308) + 0x148);
                  (**(code **)(*plVar7 + 0x50))(plVar7,lVar6,1,0);
                }
              }
            }
            return lVar5;
          }
        }
        return 0;
      }
    }
  }
  return 0;
}



// FUNCTION 142ed8ea0 FUN_142ed8ea0 body=755 status=ok
// SIG undefined FUN_142ed8ea0(void)

undefined8
FUN_142ed8ea0(undefined8 param_1,longlong param_2,longlong param_3,undefined1 param_4,char param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  longlong lVar10;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  longlong local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined1 local_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined8 local_60;
  undefined1 local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  longlong *local_38;
  
  FText::FText(local_d8);
  FText::FText(local_c0);
  local_98 = 1;
  local_a8 = 0;
  local_a0 = 0;
  FWeakObjectPtr::operator=(local_90,0);
  local_88 = 0;
  FName::FName(&local_80,"Default",1);
  FText::operator=(local_c0,param_3);
  FText::operator=(local_d8,param_2);
  local_80 = DAT_146b3db78;
  local_98 = CONCAT11(param_4,1);
  if (param_5 == '\0') {
    pcVar9 = "Default";
    puVar8 = local_50;
  }
  else if (param_5 == '\x01') {
    pcVar9 = "Warning";
    puVar8 = local_res18;
  }
  else {
    if (param_5 != '\x02') goto LAB_142ed8f7f;
    pcVar9 = "Error";
    puVar8 = local_res10;
  }
  puVar6 = (undefined8 *)FName::FName(puVar8,pcVar9,1);
  local_80 = *puVar6;
LAB_142ed8f7f:
  FText::FText(local_78);
  local_60 = 0;
  local_58 = 1;
  puVar6 = (undefined8 *)FName::FName(local_48,&DAT_145989250,1);
  local_60 = *puVar6;
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_40,L"Okay",L"GbxCoreDialogBox",L"DialogChoice_Okay");
  FText::operator=(local_78,uVar7);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    lVar10 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  uVar4 = local_a0;
  lVar10 = (longlong)(int)local_a0;
  iVar5 = (int)local_a0 + 1;
  local_a0 = CONCAT44(local_a0._4_4_,iVar5);
  if (local_a0._4_4_ < iVar5) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_a8,uVar4 & 0xffffffff);
  }
  lVar10 = local_a8 + lVar10 * 0x28;
  FText::FText(lVar10,local_78);
  *(undefined8 *)(lVar10 + 0x18) = local_60;
  *(undefined1 *)(lVar10 + 0x20) = local_58;
  uVar7 = FUN_142ed88d0(param_1,local_d8);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_70 + 1;
    lVar10 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  FUN_142ea9b80(&local_a8);
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_b8 + 1;
    lVar10 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar1 = (int *)((longlong)local_b8 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_b8 + 8))(local_b8,1);
      }
    }
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_d0 + 1;
    lVar10 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)local_d0 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  plVar3 = *(longlong **)(param_2 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar3 = *(longlong **)(param_3 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return uVar7;
}



// FUNCTION 142ed91a0 FUN_142ed91a0 body=895 status=ok
// SIG undefined FUN_142ed91a0(void)

undefined8 FUN_142ed91a0(undefined8 param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  longlong local_98;
  undefined8 local_90;
  undefined2 local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  FText::FText(local_c8);
  FText::FText(local_b0);
  local_88 = 1;
  local_98 = 0;
  local_90 = 0;
  FWeakObjectPtr::operator=(local_80,0);
  local_78 = 0;
  FName::FName(&local_70,"Default",1);
  FText::operator=(local_b0,param_3);
  FText::operator=(local_c8,param_2);
  local_88 = local_88 & 0xff00;
  puVar6 = (undefined8 *)FName::FName(local_res10,"Default",1);
  local_70 = *puVar6;
  local_88 = CONCAT11(param_4,(undefined1)local_88);
  FText::FText(local_f8);
  local_e0 = 0;
  local_d8 = 1;
  puVar6 = (undefined8 *)FName::FName(local_res18,&DAT_145983bb4,1);
  local_e0 = *puVar6;
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_60,&DAT_145989310,L"GbxCoreDialogBox",L"DialogChoice_Yes");
  FText::operator=(local_f8,uVar7);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_58 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  uVar4 = local_90;
  lVar8 = (longlong)(int)local_90;
  iVar5 = (int)local_90 + 1;
  local_90 = CONCAT44(local_90._4_4_,iVar5);
  if (local_90._4_4_ < iVar5) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_98,uVar4 & 0xffffffff);
  }
  lVar8 = local_98 + lVar8 * 0x28;
  FText::FText(lVar8,local_f8);
  *(undefined8 *)(lVar8 + 0x18) = local_e0;
  *(undefined1 *)(lVar8 + 0x20) = local_d8;
  puVar6 = (undefined8 *)FName::FName(local_68,&DAT_145983cc4,1);
  local_e0 = *puVar6;
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_48,&DAT_14598935c,L"GbxCoreDialogBox",L"DialogChoice_No");
  FText::operator=(local_f8,uVar7);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  uVar4 = local_90;
  lVar8 = (longlong)(int)local_90;
  iVar5 = (int)local_90 + 1;
  local_90 = CONCAT44(local_90._4_4_,iVar5);
  if (local_90._4_4_ < iVar5) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_98,uVar4 & 0xffffffff);
  }
  lVar8 = local_98 + lVar8 * 0x28;
  FText::FText(lVar8,local_f8);
  *(undefined8 *)(lVar8 + 0x18) = local_e0;
  *(undefined1 *)(lVar8 + 0x20) = local_d8;
  uVar7 = FUN_142ed88d0(param_1,local_c8);
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_f0 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)local_f0 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  FUN_142ea9b80(&local_98);
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_a8 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar1 = (int *)((longlong)local_a8 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_a8 + 8))(local_a8,1);
      }
    }
  }
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_c0 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  plVar3 = *(longlong **)(param_2 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar3 = *(longlong **)(param_3 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return uVar7;
}



// FUNCTION 142ed9520 FUN_142ed9520 body=195 status=ok
// SIG undefined FUN_142ed9520(void)

longlong FUN_142ed9520(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = 0;
  if (param_2 != 0) {
    lVar1 = AEquipmentSkin::GetPrivateStaticClass();
    lVar4 = param_2;
    do {
      lVar3 = param_2;
      if (lVar4 == lVar1) break;
      lVar4 = *(longlong *)(lVar4 + 0x30);
      lVar3 = 0;
    } while (lVar4 != 0);
  }
  uVar2 = GetTransientPackage();
  FUN_1417846f0(uVar2,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  lVar3 = FUN_1417985e0(lVar3,uVar2,0,0,0,0,0,0,0);
  if (lVar3 != 0) {
    FUN_142ed95f0(lVar3,param_1,0);
  }
  return lVar3;
}



// FUNCTION 142ed95f0 FUN_142ed95f0 body=265 status=ok
// SIG undefined FUN_142ed95f0(void)

void FUN_142ed95f0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  *(undefined8 *)(param_1 + 0x430) = param_2;
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FUN_142eb0200(param_1,*(longlong *)(param_1 + 0x240),0);
  }
  if (*(longlong *)(param_1 + 0x210) != 0) {
    local_res8[0] = 0xffffffff;
    if (param_3 != 0) {
      FUN_14170c210(local_res8,param_3);
    }
    FWeakObjectPtr::operator=(&local_res10,param_1);
    uVar2 = local_res8[0];
    local_res8[0] = 0xffffffff;
    local_38 = 0;
    local_28 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_58);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR_FUN_144605c50;
      puVar1[1] = param_1;
      *(undefined4 *)(puVar1 + 2) = local_res10;
      *(undefined4 *)((longlong)puVar1 + 0x14) = local_res14;
      *(undefined4 *)(puVar1 + 3) = uVar2;
      uVar2 = 0xffffffff;
    }
    local_68[0] = &LAB_142eb0830;
    FUN_14204c280(local_68);
    FUN_1416f8340(uVar2);
    FUN_1416f8340(local_res8[0]);
  }
  return;
}



// FUNCTION 142ed9700 FUN_142ed9700 body=1965 status=ok
// SIG undefined FUN_142ed9700(void)

void FUN_142ed9700(longlong param_1)

{
  void *_Src;
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong in_stack_fffffffffffffed8;
  ulonglong in_stack_fffffffffffffee0;
  ulonglong in_stack_fffffffffffffee8;
  longlong *local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  ulonglong local_d8;
  int local_d0;
  uint local_cc;
  longlong *local_c8;
  int local_c0;
  longlong local_b8;
  longlong local_b0 [2];
  undefined1 local_a0;
  longlong *local_98;
  longlong local_90;
  longlong local_88 [2];
  undefined1 local_78;
  longlong local_70;
  undefined1 local_68 [16];
  undefined1 local_58;
  
  FUN_142eb75f0(param_1,&local_c8);
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x598);
  uVar18 = 0;
  uVar6 = uVar18;
  if ((cVar1 != '\0') && (lVar3 = FWeakObjectPtr::Get(param_1 + 0x598), lVar3 != 0)) {
    uVar4 = FUN_142f30760();
    plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
    if (plVar5 != (longlong *)0x0) {
      uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  iVar13 = local_c0;
  plVar5 = local_c8;
  lVar3 = *(longlong *)(param_1 + 0x520);
  if ((lVar3 != 0) && (uVar6 != 0)) {
    local_f8 = (longlong *)0x0;
    local_f0 = (void *)CONCAT44(local_f0._4_4_,local_c0);
    iVar17 = 0;
    if (local_c0 == 0) {
      local_f0 = (void *)0x0;
    }
    else {
      TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(&local_f8,local_c0,0);
      lVar3 = (longlong)plVar5 - (longlong)local_f8;
      plVar5 = local_f8 + 3;
      iVar2 = iVar13;
      do {
        plVar5[-3] = *(longlong *)(lVar3 + -0x18 + (longlong)plVar5);
        FString::FString(plVar5 + -2,(undefined1 *)(lVar3 + -0x10 + (longlong)plVar5));
        *(undefined1 *)plVar5 = *(undefined1 *)(lVar3 + (longlong)plVar5);
        plVar5 = plVar5 + 4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      lVar3 = *(longlong *)(param_1 + 0x520);
    }
    plVar5 = *(longlong **)(lVar3 + 0x38);
    plVar12 = plVar5 + (longlong)*(int *)(lVar3 + 0x40) * 4;
    local_d8 = 0;
    local_cc = 0;
    uVar6 = uVar18;
    for (; plVar5 != plVar12; plVar5 = plVar5 + 4) {
      local_b8 = *plVar5;
      FString::FString(local_b0,plVar5 + 1);
      local_a0 = (undefined1)plVar5[3];
      local_90 = local_b8;
      FString::FString(local_88,local_b0);
      local_78 = local_a0;
      local_70 = local_90;
      FString::FString(local_68,local_88);
      local_58 = local_78;
      lVar3 = FUN_142ea7a10(&local_f8,&local_70);
      if (local_88[0] != 0) {
        FMemory::Free();
      }
      if (local_b0[0] != 0) {
        FMemory::Free();
      }
      if (lVar3 == 0) {
        lVar3 = (longlong)iVar17;
        local_d0 = iVar17 + 1;
        if ((int)uVar6 < local_d0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(&local_d8,iVar17);
          uVar6 = (ulonglong)local_cc;
          uVar18 = local_d8;
        }
        iVar17 = local_d0;
        lVar3 = lVar3 * 0x20;
        *(longlong *)(lVar3 + uVar18) = *plVar5;
        FString::FString(uVar18 + 8 + lVar3,plVar5 + 1);
        *(char *)(lVar3 + 0x18 + uVar18) = (char)plVar5[3];
      }
    }
    FUN_1408708d0();
    if (*(int *)(param_1 + 0x518) < iVar13) {
      plVar5 = (longlong *)0x0;
      local_98 = local_c8 + (longlong)local_c0 * 4;
      local_f8 = (longlong *)0x0;
      local_f0 = (void *)((ulonglong)local_f0 & 0xffffffff);
      plVar12 = plVar5;
      plVar9 = plVar5;
      plVar15 = local_c8;
      if (local_c8 != local_98) {
        do {
          local_b8 = *plVar15;
          FString::FString(local_b0,plVar15 + 1);
          lVar3 = local_b8;
          plVar14 = *(longlong **)(param_1 + 0x510);
          plVar12 = plVar14 + *(int *)(param_1 + 0x518);
          iVar2 = (int)plVar5;
          if (plVar14 != plVar12) {
            do {
              lVar8 = *plVar14;
              if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x10) != 0)) {
                if (lVar3 != 0) {
                  lVar7 = UGSquadMemberWidget::GetPrivateStaticClass();
                  lVar10 = lVar3;
                  do {
                    lVar11 = lVar3;
                    if (lVar10 == lVar7) goto LAB_142ed99f4;
                    lVar10 = *(longlong *)(lVar10 + 0x30);
                  } while (lVar10 != 0);
                }
                lVar11 = 0;
LAB_142ed99f4:
                for (lVar8 = *(longlong *)(lVar8 + 0x10); lVar8 != 0;
                    lVar8 = *(longlong *)(lVar8 + 0x30)) {
                  if (lVar8 == lVar11) {
                    plVar12 = local_f8;
                    if (local_b0[0] != 0) {
                      FMemory::Free();
                      plVar12 = local_f8;
                    }
                    goto LAB_142ed9a91;
                  }
                }
              }
              plVar14 = plVar14 + 1;
            } while (plVar14 != plVar12);
            iVar2 = local_f0._4_4_;
          }
          if (local_b0[0] != 0) {
            FMemory::Free();
          }
          lVar3 = (longlong)(int)plVar9;
          uVar16 = (int)plVar9 + 1;
          local_f0 = (void *)CONCAT44(local_f0._4_4_,uVar16);
          if (iVar2 < (int)uVar16) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow(&local_f8,plVar9);
            uVar16 = (uint)local_f0;
          }
          plVar12 = local_f8;
          plVar9 = (longlong *)(ulonglong)uVar16;
          local_f8[lVar3 * 4] = *plVar15;
          FString::FString(local_f8 + lVar3 * 4 + 1,plVar15 + 1);
          *(char *)(plVar12 + lVar3 * 4 + 3) = (char)plVar15[3];
LAB_142ed9a91:
          plVar5 = (longlong *)((ulonglong)local_f0 >> 0x20);
          plVar15 = plVar15 + 4;
        } while (plVar15 != local_98);
      }
      plVar15 = plVar12 + (longlong)(int)plVar9 * 4;
      plVar5 = plVar12;
      for (; plVar12 != plVar15; plVar12 = plVar12 + 4) {
        if (*plVar12 != 0) {
          lVar8 = UGSquadMemberWidget::GetPrivateStaticClass();
          for (lVar3 = *plVar12; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
            if (lVar3 == lVar8) {
              if (*plVar12 != 0) {
                lVar8 = UGSquadMemberWidget::GetPrivateStaticClass();
                for (lVar3 = *plVar12;
                    (lVar10 = 0, lVar3 != 0 && (lVar10 = *plVar12, lVar3 != lVar8));
                    lVar3 = *(longlong *)(lVar3 + 0x30)) {
                }
                uVar4 = GetTransientPackage();
                in_stack_fffffffffffffee8 = 0;
                in_stack_fffffffffffffee0 = in_stack_fffffffffffffee0 & 0xffffffffffffff00;
                in_stack_fffffffffffffed8 = 0;
                plVar5 = (longlong *)
                         NewObject<USaveGame>(uVar4,lVar10,0,0,0,in_stack_fffffffffffffee0,0);
                if (plVar5 != (longlong *)0x0) {
                  iVar2 = *(int *)(param_1 + 0x518);
                  *(int *)(param_1 + 0x518) = iVar2 + 1;
                  if (*(int *)(param_1 + 0x51c) < iVar2 + 1) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (param_1 + 0x510,iVar2);
                  }
                  *(longlong **)(*(longlong *)(param_1 + 0x510) + (longlong)iVar2 * 8) = plVar5;
                  *(char *)((longlong)plVar5 + 0x89) = (char)plVar12[3];
                  FString::operator=(plVar5 + 0xb7);
                  (**(code **)(*plVar5 + 0x508))(plVar5);
                  FUN_142ebf950(plVar5,param_1);
                  FUN_142ecdd60();
                }
              }
              break;
            }
          }
        }
        plVar5 = local_f8;
      }
      if ((int)plVar9 != 0) {
        plVar12 = plVar5 + 1;
        do {
          if (*plVar12 != 0) {
            FMemory::Free();
          }
          plVar12 = plVar12 + 4;
          uVar16 = (int)plVar9 - 1;
          plVar9 = (longlong *)(ulonglong)uVar16;
        } while (uVar16 != 0);
      }
      if (plVar5 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    iVar2 = *(int *)(param_1 + 0x518);
    if (iVar2 != iVar17 + iVar13) {
LAB_142ed9c30:
      local_f0 = (void *)0x0;
      local_e8 = 0;
      if ((-1 < iVar2) && (iVar2 < local_c0)) {
        plVar5 = local_c8 + (longlong)iVar2 * 4;
LAB_142ed9c72:
        local_f8 = (longlong *)*plVar5;
        FString::operator=(&local_f0,plVar5 + 1);
        _Src = local_f0;
        plVar12 = local_f8;
        lVar3 = plVar5[3];
        if (local_f8 != (longlong *)0x0) {
          plVar9 = (longlong *)UGSquadMemberWidget::GetPrivateStaticClass();
          plVar5 = plVar12;
          do {
            if (plVar5 == plVar9) {
              plVar9 = (longlong *)UGSquadMemberWidget::GetPrivateStaticClass();
              plVar5 = plVar12;
              goto LAB_142ed9cd0;
            }
            plVar5 = (longlong *)plVar5[6];
          } while (plVar5 != (longlong *)0x0);
        }
        goto LAB_142ed9dde;
      }
      iVar2 = iVar2 - iVar13;
      if ((-1 < iVar2) && (iVar2 < iVar17)) {
        plVar5 = (longlong *)((longlong)iVar2 * 0x20 + local_d8);
        goto LAB_142ed9c72;
      }
      goto LAB_142ed9df1;
    }
LAB_142ed9e00:
    if (iVar17 != 0) {
      plVar5 = (longlong *)(local_d8 + 8);
      do {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 4;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
    }
    if (local_d8 != 0) {
      FMemory::Free(local_d8);
    }
  }
  if (local_c0 != 0) {
    plVar5 = local_c8 + 1;
    iVar13 = local_c0;
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 4;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
  while (plVar5 = (longlong *)plVar5[6], plVar15 = (longlong *)0x0, plVar5 != (longlong *)0x0) {
LAB_142ed9cd0:
    plVar15 = plVar12;
    if (plVar5 == plVar9) break;
  }
  uVar4 = GetTransientPackage();
  FUN_1417846f0(uVar4,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  in_stack_fffffffffffffee8 = in_stack_fffffffffffffee8 & 0xffffffffffffff00;
  in_stack_fffffffffffffed8 = in_stack_fffffffffffffed8 & 0xffffffff00000000;
  plVar5 = (longlong *)
           FUN_1417985e0(plVar15,uVar4,0,0,in_stack_fffffffffffffed8,0,in_stack_fffffffffffffee8,0,0
                        );
  if (plVar5 != (longlong *)0x0) {
    iVar2 = *(int *)(param_1 + 0x518);
    *(int *)(param_1 + 0x518) = iVar2 + 1;
    if (*(int *)(param_1 + 0x51c) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x510,iVar2);
    }
    plVar12 = plVar5 + 0xb7;
    *(longlong **)(*(longlong *)(param_1 + 0x510) + (longlong)iVar2 * 8) = plVar5;
    *(char *)((longlong)plVar5 + 0x89) = (char)lVar3;
    if (plVar12 != &local_f0) {
      lVar3 = (longlong)(int)local_e8;
      *(int *)(plVar5 + 0xb8) = (int)local_e8;
      if (((int)local_e8 == 0) && (*(int *)((longlong)plVar5 + 0x5c4) == 0)) {
        *(undefined4 *)((longlong)plVar5 + 0x5c4) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar12,local_e8 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop((void *)*plVar12,_Src,lVar3 * 2);
      }
    }
    (**(code **)(*plVar5 + 0x508))(plVar5);
    FUN_142ebf950(plVar5,param_1);
    FUN_142ecdd60();
  }
LAB_142ed9dde:
  if (_Src != (void *)0x0) {
    FMemory::Free();
  }
LAB_142ed9df1:
  iVar2 = *(int *)(param_1 + 0x518);
  if (iVar2 == iVar17 + iVar13) goto LAB_142ed9e00;
  goto LAB_142ed9c30;
}



// FUNCTION 142ed9eb0 FUN_142ed9eb0 body=1741 status=ok
// SIG undefined FUN_142ed9eb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ed9eb0(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_108 [32];
  char local_e8;
  uint local_e4;
  longlong *local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong *local_c8;
  int local_c0;
  longlong *local_b8;
  int local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong local_90;
  longlong *plStack_88;
  longlong local_80;
  longlong *plStack_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_e4 = 0;
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      return;
    }
  }
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  local_e8 = param_4;
  local_e0 = param_2;
  uVar6 = FUN_142f16320();
  lVar7 = UObjectBaseUtility::GetInterfaceAddress(param_3,uVar6);
  if (lVar7 == 0) {
    return;
  }
  FWeakObjectPtr::operator=(param_1 + 0x38);
  if ((param_2[5] != 0) && (param_2[6] != 0)) {
    piVar1 = (int *)(param_2[6] + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      local_d0 = (longlong *)param_2[6];
      local_d8 = 0;
      if (local_d0 == (longlong *)0x0) {
LAB_142ed9fc8:
        plVar8 = &local_d8;
        uVar12 = 1;
        lVar7 = local_d8;
      }
      else {
        LOCK();
        iVar5 = (int)local_d0[1];
        bVar13 = iVar5 == 0;
        if (bVar13) {
          *(int *)(local_d0 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (!bVar13) {
          LOCK();
          bVar13 = iVar5 == (int)local_d0[1];
          if (bVar13) {
            *(int *)(local_d0 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar13) {
            if (local_d0 != (longlong *)0x0) {
              local_d8 = param_2[5];
            }
            goto LAB_142ed9fc8;
          }
          LOCK();
          iVar5 = (int)local_d0[1];
          bVar13 = iVar5 == 0;
          if (bVar13) {
            *(int *)(local_d0 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
        plVar8 = &local_d8;
        local_d0 = (longlong *)0x0;
        uVar12 = 1;
        lVar7 = 0;
      }
      goto LAB_142ed9fed;
    }
  }
  plVar8 = &local_90;
  local_90 = 0;
  plStack_88 = (longlong *)0x0;
  uVar12 = 2;
  lVar7 = 0;
LAB_142ed9fed:
  plVar9 = (longlong *)plVar8[1];
  plVar8[1] = 0;
  plVar3 = plStack_88;
  *plVar8 = 0;
  local_e4 = uVar12;
  if (((uVar12 & 2) != 0) &&
     (uVar12 = uVar12 & 0xfffffffd, local_e4 = uVar12, plStack_88 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plStack_88 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_88)(plStack_88);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plStack_88 + 8))();
      }
    }
  }
  plVar8 = local_d0;
  if (((uVar12 & 1) != 0) && (local_e4 = uVar12 & 0xfffffffe, local_d0 != (longlong *)0x0)) {
    LOCK();
    plVar3 = local_d0 + 1;
    lVar10 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_d0 + 8))();
      }
    }
  }
  *(longlong *)(param_1 + 0x28) = lVar7;
  plVar8 = *(longlong **)(param_1 + 0x30);
  if (plVar9 != plVar8) {
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(param_1 + 0x30);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar8 + 8))();
      }
    }
    *(longlong **)(param_1 + 0x30) = plVar9;
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar9 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  plVar8 = *(longlong **)(param_1 + 0x30);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar8[1];
    bVar13 = iVar5 == 0;
    if (bVar13) {
      *(int *)(plVar8 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar13) {
      LOCK();
      bVar13 = iVar5 == (int)plVar8[1];
      if (bVar13) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar13) {
        if (plVar8 == (longlong *)0x0) {
          return;
        }
        if ((*(longlong *)(param_1 + 0x28) == 0) || (lVar7 = FUN_142eee1b0(param_2), lVar7 == 0))
        goto LAB_142eda521;
        *(char *)(param_1 + 0x80) = local_e8;
        cVar4 = FUN_140f12a40(lVar7,param_1 + 0x50);
        if (cVar4 != '\0') {
          FWeakObjectPtr::operator=(param_1 + 0x50,lVar7);
        }
        if (*(longlong *)(param_1 + 0x70) == 0) {
          local_c8 = (longlong *)0x0;
          plVar9 = (longlong *)FMemory::Realloc(0,0x30);
          local_c0 = 3;
          local_c8 = plVar9;
          if (plVar9 != (longlong *)0x0) {
            *plVar9 = (longlong)&PTR_FUN_143f4d290;
            FWeakObjectPtr::operator=(plVar9 + 1,param_1);
            plVar9[2] = (longlong)&LAB_142ec9f20;
            lVar10 = FDelegateHandle::GenerateNewID();
            plVar9[4] = lVar10;
            *plVar9 = (longlong)&PTR_FUN_143f4d2d8;
          }
          FUN_142ee1c00(lVar7,PTR_s_mouseUp_14673ca18,param_1 + 0x70,&local_c8);
          if (local_c0 != 0) {
            if (local_c8 == (longlong *)0x0) goto LAB_142eda252;
            (**(code **)(*local_c8 + 0x28))(local_c8,0);
            if (local_c8 != (longlong *)0x0) {
              local_c8 = (longlong *)FMemory::Realloc(local_c8,0);
            }
            local_c0 = 0;
          }
          if (local_c8 != (longlong *)0x0) {
            FMemory::Free(local_c8);
          }
        }
LAB_142eda252:
        cVar4 = FUN_142edc100();
        if (cVar4 == '\0') {
          if ((*(longlong *)(lVar7 + 0x28) != 0) && (*(longlong *)(lVar7 + 0x30) != 0)) {
            piVar1 = (int *)(*(longlong *)(lVar7 + 0x30) + 8);
            LOCK();
            iVar5 = *piVar1;
            if (iVar5 == 0) {
              *piVar1 = 0;
              iVar5 = 0;
            }
            UNLOCK();
            if (0 < iVar5) {
              local_a0 = *(longlong **)(lVar7 + 0x30);
              local_a8 = 0;
              if (local_a0 == (longlong *)0x0) goto LAB_142eda3ac;
              LOCK();
              iVar5 = (int)local_a0[1];
              bVar13 = iVar5 == 0;
              if (bVar13) {
                *(int *)(local_a0 + 1) = 0;
                iVar5 = 0;
              }
              UNLOCK();
              goto joined_r0x000142eda371;
            }
          }
          plVar9 = &local_80;
          local_80 = 0;
          plStack_78 = (longlong *)0x0;
          lVar7 = 0;
          uVar12 = 8;
          goto LAB_142eda3d1;
        }
        if (*(longlong *)(param_1 + 0x68) != 0) goto LAB_142eda503;
        local_b8 = (longlong *)0x0;
        plVar9 = (longlong *)FMemory::Realloc(0,0x30);
        local_b0 = 3;
        local_b8 = plVar9;
        if (plVar9 != (longlong *)0x0) {
          *plVar9 = (longlong)&PTR_FUN_143f4d290;
          FWeakObjectPtr::operator=(plVar9 + 1,param_1);
          plVar9[2] = (longlong)FUN_142ec9960;
          lVar10 = FDelegateHandle::GenerateNewID();
          plVar9[4] = lVar10;
          *plVar9 = (longlong)&PTR_FUN_143f4d2d8;
        }
        FUN_142ee1c00(lVar7,PTR_s_mouseMove_14673ca00,param_1 + 0x68,&local_b8);
        if (local_b0 != 0) {
          if (local_b8 == (longlong *)0x0) goto LAB_142eda503;
          (**(code **)(*local_b8 + 0x28))(local_b8,0);
          if (local_b8 != (longlong *)0x0) {
            local_b8 = (longlong *)FMemory::Realloc(local_b8,0,0);
          }
          local_b0 = 0;
        }
        if (local_b8 != (longlong *)0x0) {
          FMemory::Free(local_b8);
        }
        goto LAB_142eda503;
      }
      LOCK();
      iVar5 = (int)plVar8[1];
      bVar13 = iVar5 == 0;
      if (bVar13) {
        *(int *)(plVar8 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  return;
joined_r0x000142eda371:
  if (bVar13) {
    plVar9 = &local_a8;
    local_a0 = (longlong *)0x0;
    uVar12 = 4;
    lVar7 = 0;
LAB_142eda3d1:
    plVar3 = (longlong *)plVar9[1];
    uVar12 = uVar12 | local_e4;
    plVar9[1] = 0;
    plVar2 = plStack_78;
    *plVar9 = 0;
    if (((uVar12 & 8) != 0) && (uVar12 = uVar12 & 0xfffffff7, plStack_78 != (longlong *)0x0)) {
      LOCK();
      plVar9 = plStack_78 + 1;
      lVar10 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_78)(plStack_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plStack_78 + 8))(plStack_78,1);
        }
      }
    }
    plVar9 = local_a0;
    if (((uVar12 & 4) != 0) && (local_a0 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_a0 + 1;
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    if (lVar7 != 0) {
      puVar11 = (undefined4 *)FUN_14203d5d0(lVar7,local_68);
      *(undefined4 *)(param_1 + 0x90) = *puVar11;
      *(undefined4 *)(param_1 + 0x94) = puVar11[1];
      *(undefined4 *)(param_1 + 0x98) = puVar11[2];
      *(undefined4 *)(param_1 + 0x9c) = puVar11[3];
      *(undefined4 *)(param_1 + 0xa0) = puVar11[4];
      *(undefined4 *)(param_1 + 0xa4) = puVar11[5];
      *(undefined4 *)(param_1 + 0xa8) = puVar11[6];
      *(undefined4 *)(param_1 + 0xac) = puVar11[7];
    }
    param_2 = local_e0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        param_2 = local_e0;
        if (iVar5 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
          param_2 = local_e0;
        }
      }
    }
LAB_142eda503:
    if (local_e8 != '\0') {
      FUN_142edb990(param_1);
      (**(code **)(*param_2 + 0x278))(param_2,1);
    }
LAB_142eda521:
    LOCK();
    plVar9 = plVar8 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 != 1) {
      return;
    }
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 != 1) {
      return;
    }
    (**(code **)(*plVar8 + 8))(plVar8,1);
    return;
  }
  LOCK();
  bVar13 = iVar5 == (int)local_a0[1];
  if (bVar13) {
    *(int *)(local_a0 + 1) = iVar5 + 1;
  }
  UNLOCK();
  if (bVar13) {
    if (local_a0 != (longlong *)0x0) {
      local_a8 = *(longlong *)(lVar7 + 0x28);
    }
LAB_142eda3ac:
    plVar9 = &local_a8;
    uVar12 = 4;
    lVar7 = local_a8;
    goto LAB_142eda3d1;
  }
  LOCK();
  iVar5 = (int)local_a0[1];
  bVar13 = iVar5 == 0;
  if (bVar13) {
    *(int *)(local_a0 + 1) = 0;
    iVar5 = 0;
  }
  UNLOCK();
  goto joined_r0x000142eda371;
}



// FUNCTION 142eda580 FUN_142eda580 body=495 status=ok
// SIG undefined FUN_142eda580(void)

void FUN_142eda580(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  void **ppvVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *plVar9;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_78;
  longlong *local_70;
  void *local_68;
  ulonglong local_60;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  plVar9 = (longlong *)0x0;
  if ((*(int *)(param_1 + 1000) != 0) || (*(int *)(param_1 + 0x3ec) != 0)) {
    FWeakObjectPtr::operator=(&local_res8,param_1);
    local_28 = 0;
    local_18 = 0;
    puVar7 = (undefined8 *)FUN_140438ef0(0x18,local_48);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_FUN_1444f8920;
      puVar7[1] = param_1;
      *(undefined4 *)(puVar7 + 2) = local_res8;
      *(undefined4 *)((longlong)puVar7 + 0x14) = local_resc;
    }
    local_58[0] = &LAB_142eb0b60;
    FUN_14204c280(local_58);
  }
  local_70 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x358) != &local_78) {
    *(undefined8 *)(param_1 + 0x358) = 0;
    local_78 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x360,&local_70);
    plVar5 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
  }
  FUN_142eb8af0(param_1,&local_68);
  iVar8 = (int)local_60;
  if (((*(char *)(param_1 + 0x401) != '\0') || (1 < iVar8)) &&
     (ppvVar3 = (void **)(param_1 + 0x318), ppvVar3 != &local_68)) {
    *(int *)(param_1 + 800) = iVar8;
    if ((iVar8 == 0) && (*(int *)(param_1 + 0x324) == 0)) {
      *(undefined4 *)(param_1 + 0x324) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar3,local_60 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop(*ppvVar3,local_68,(longlong)iVar8 * 2);
    }
  }
  if ((*(int *)(param_1 + 0x3c0) != 0) && (*(longlong **)(param_1 + 0x3b8) != (longlong *)0x0)) {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x3b8) + 0x18))();
    if (cVar6 != '\0') {
      if (*(int *)(param_1 + 0x3c0) != 0) {
        plVar9 = *(longlong **)(param_1 + 0x3b8);
      }
      (**(code **)(*plVar9 + 0x38))(plVar9,param_1,param_1 + 0x318);
    }
  }
  FUN_142eb1230(param_1);
  FUN_142eb11b0(param_1);
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}



// FUNCTION 142eda780 thunk_FUN_142eda790 body=8 status=ok
// SIG undefined thunk_FUN_142eda790(void)

void thunk_FUN_142eda790(undefined8 param_1,undefined8 param_2)

{
  FUN_142eda790(param_1,param_2,4);
  return;
}



// FUNCTION 142eda790 FUN_142eda790 body=613 status=ok
// SIG undefined FUN_142eda790(void)

void FUN_142eda790(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  
  if (*param_2 == param_1[0xd1]) {
    return;
  }
  lVar8 = param_1[0x9d];
  if (lVar8 != 0) {
    lVar3 = FUN_142f227c0();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      plVar9 = *(longlong **)(lVar8 + 0xc0);
      plVar4 = plVar9 + (longlong)*(int *)(lVar8 + 200) * 0xb;
      if (plVar9 != plVar4) {
        do {
          if (*plVar9 == *param_2) goto LAB_142eda830;
          plVar9 = plVar9 + 0xb;
        } while (plVar9 != plVar4);
      }
    }
  }
  plVar9 = (longlong *)0x0;
LAB_142eda830:
  lVar8 = *param_2;
  lVar3 = lVar8;
  if (plVar9 != (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x5a0))(param_1,local_res8,plVar9);
    lVar3 = *plVar4;
    lVar8 = *param_2;
  }
  if (lVar3 != lVar8) {
    lVar8 = param_1[0x9d];
    if (lVar8 == 0) {
      return;
    }
    lVar5 = FUN_142f227c0();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return;
    }
    plVar9 = *(longlong **)(lVar8 + 0xc0);
    plVar4 = plVar9 + (longlong)*(int *)(lVar8 + 200) * 0xb;
    while( true ) {
      if (plVar9 == plVar4) {
        return;
      }
      if (*plVar9 == lVar3) break;
      plVar9 = plVar9 + 0xb;
    }
  }
  if (plVar9 == (longlong *)0x0) {
    return;
  }
  lVar8 = plVar9[7];
  if (lVar8 == 0) {
    return;
  }
  param_1[0xd2] = param_1[0xd1];
  param_1[0xd1] = lVar3;
  uVar6 = FWeakObjectPtr::Get(param_1 + 0xd0);
  (**(code **)(*param_1 + 0x4b8))(param_1,local_res8);
  cVar2 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x59c);
  if (cVar2 != '\0') {
    uVar7 = FWeakObjectPtr::Get((longlong)param_1 + 0x59c);
    lVar8 = FUN_142f00910(uVar7,uVar6,lVar8);
    if (lVar8 != 0) {
      lVar3 = AGShrineUsable::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_142eda995;
    }
  }
  lVar8 = 0;
LAB_142eda995:
  FWeakObjectPtr::operator=(param_1 + 0xd0,lVar8);
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xd0);
  if (cVar2 != '\0') {
    uVar6 = FWeakObjectPtr::Get(param_1 + 0xd0);
    (**(code **)(*param_1 + 0x590))(param_1,plVar9,uVar6,param_3);
  }
  return;
}



// FUNCTION 142edaa10 FUN_142edaa10 body=41 status=ok
// SIG undefined FUN_142edaa10(void)

void FUN_142edaa10(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_142f13060(param_1 + 0x20);
  if (cVar1 != '\0') {
    FUN_142edbcf0(param_1);
    return;
  }
  return;
}



// FUNCTION 142edaa40 FUN_142edaa40 body=14 status=ok
// SIG undefined FUN_142edaa40(void)

void FUN_142edaa40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 *puVar12;
  bool bVar13;
  longlong *plStack_a0;
  undefined1 *apuStack_78 [2];
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  undefined4 uStack_38;
  
  if (*(char *)(param_1 + 0x80) == '\0') {
    return;
  }
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar11 = (int)plVar3[1];
    bVar13 = iVar11 == 0;
    if (bVar13) {
      *(int *)(plVar3 + 1) = 0;
      iVar11 = 0;
    }
    UNLOCK();
    if (!bVar13) {
      while( true ) {
        LOCK();
        bVar13 = iVar11 == (int)plVar3[1];
        if (bVar13) {
          *(int *)(plVar3 + 1) = iVar11 + 1;
        }
        UNLOCK();
        if (bVar13) break;
        LOCK();
        iVar11 = (int)plVar3[1];
        bVar13 = iVar11 == 0;
        if (bVar13) {
          *(int *)(plVar3 + 1) = 0;
          iVar11 = 0;
        }
        UNLOCK();
        if (bVar13) {
          return;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        lVar4 = *(longlong *)(param_1 + 0x28);
        if (lVar4 != 0) {
          uVar9 = *(undefined8 *)(param_1 + 0x90);
          uVar10 = *(undefined8 *)(param_1 + 0x98);
          uVar5 = *(undefined4 *)(param_1 + 0xa0);
          uVar6 = *(undefined4 *)(param_1 + 0xa4);
          uVar7 = *(undefined4 *)(param_1 + 0xa8);
          uVar8 = *(undefined4 *)(param_1 + 0xac);
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          uStack_48 = 0;
          uStack_38 = 0;
          puVar12 = (undefined8 *)FUN_140438ef0(0x40,auStack_68);
          plStack_a0 = plVar3;
          if (puVar12 != (undefined8 *)0x0) {
            puVar12[4] = uVar9;
            puVar12[5] = uVar10;
            *puVar12 = &PTR_FUN_14598ae78;
            puVar12[2] = lVar4;
            *(undefined4 *)(puVar12 + 6) = uVar5;
            *(undefined4 *)((longlong)puVar12 + 0x34) = uVar6;
            *(undefined4 *)(puVar12 + 7) = uVar7;
            *(undefined4 *)((longlong)puVar12 + 0x3c) = uVar8;
            puVar12[3] = plVar3;
            plStack_a0 = (longlong *)0x0;
          }
          apuStack_78[0] = &LAB_142eb0a40;
          FUN_1420326d0(lVar4,apuStack_78);
          if (plStack_a0 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_a0 + 1;
            lVar4 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plStack_a0)();
              LOCK();
              piVar2 = (int *)((longlong)plStack_a0 + 0xc);
              iVar11 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
              }
            }
          }
        }
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142edaa50 FUN_142edaa50 body=50 status=ok
// SIG undefined FUN_142edaa50(void)

void FUN_142edaa50(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    cVar1 = FUN_142aaac50();
    if (cVar1 != '\0') {
      FUN_142eb3aa0(param_1 + 0x78);
      return;
    }
  }
  return;
}



// FUNCTION 142edaa90 Transform body=69 status=ok
// SIG void Transform(Matrix2x4<float> * this, Point<float> * param_1, Point<float> * param_2)

/* public: void __cdecl Scaleform::Render::Matrix2x4<float>::Transform(class
   Scaleform::Render::Point<float> * __ptr64,class Scaleform::Render::Point<float> const &
   __ptr64)const __ptr64 */

void __thiscall
Scaleform::Render::Matrix2x4<float>::Transform
          (Matrix2x4<float> *this,Point<float> *param_1,Point<float> *param_2)

{
                    /* 0x2edaa90  481
                       ?Transform@?$Matrix2x4@M@Render@Scaleform@@QEBAXPEAV?$Point@M@23@AEBV423@@Z
                        */
  *(float *)param_1 =
       *(float *)(this + 4) * *(float *)(param_2 + 4) + *(float *)param_2 * *(float *)this +
       *(float *)(this + 0xc);
  *(float *)(param_1 + 4) =
       *(float *)(this + 0x10) * *(float *)param_2 +
       *(float *)(this + 0x14) * *(float *)(param_2 + 4) + *(float *)(this + 0x1c);
  return;
}



// FUNCTION 142edaae0 FUN_142edaae0 body=562 status=ok
// SIG undefined FUN_142edaae0(void)

void FUN_142edaae0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  code **ppcVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 in_stack_ffffffffffffff58;
  longlong **pplVar9;
  undefined4 uVar10;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  code *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  puVar5 = (undefined8 *)0x0;
  local_88 = 0;
  if (((*(char *)(param_1 + 0x4c1) == '\0') || (lVar1 = *(longlong *)(param_1 + 0x4e8), lVar1 == 0))
     || (*(int *)(lVar1 + 0x88) < 2)) {
    if (*(int *)(param_2 + 8) != 0) {
      plVar6 = (longlong *)param_2[6];
      if ((longlong *)param_2[6] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      if (plVar6 != (longlong *)0x0) {
        if (plVar6 != (longlong *)0x0) {
          puVar5 = (undefined8 *)(**(code **)(*plVar6 + 8))();
        }
        (*(code *)*param_2)(puVar5);
      }
    }
    goto LAB_142edacbc;
  }
  if (*(int *)(lVar1 + 0x78) < 2) {
    uVar3 = *(undefined8 *)(param_1 + 0x2b8);
  }
  else {
    pplVar9 = &local_98;
    local_98 = (longlong *)0x0;
    local_90 = 0;
    uVar3 = FUN_140e96f30(param_1,lVar1 + 0x70,0,6,pplVar9);
    uVar10 = (undefined4)((ulonglong)pplVar9 >> 0x20);
    plVar6 = local_98;
    for (iVar7 = (int)local_90; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      uVar10 = (undefined4)((ulonglong)pplVar9 >> 0x20);
      plVar6 = plVar6 + 2;
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free(local_98);
    }
  }
  if (*(int *)(param_2 + 8) == 0) {
LAB_142edabfd:
    local_48 = 0;
    local_38 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_68);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = param_1;
      *puVar5 = &PTR_FUN_143f77b70;
    }
    local_78[0] = AK::MemoryMgr::StartProfileThreadUsage;
    ppcVar4 = local_78;
    uVar8 = *(undefined4 *)(*(longlong *)(param_1 + 0x4e8) + 0x90);
  }
  else {
    if (param_2[6] == 0) {
      puVar5 = param_2 + 2;
    }
    if (puVar5 == (undefined8 *)0x0 && param_2[6] == 0) goto LAB_142edabfd;
    lVar2 = *(longlong *)(param_1 + 0x4e8);
    ppcVar4 = (code **)TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
                                 (local_78,param_2);
    uVar8 = *(undefined4 *)(lVar2 + 0x90);
  }
  FUN_142ecd560(param_1,uVar3,lVar1 + 0x80,ppcVar4,CONCAT44(uVar10,uVar8));
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    FUN_142ee3e70();
  }
LAB_142edacbc:
  if (*(int *)(param_2 + 8) != 0) {
    plVar6 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar6 = param_2 + 2;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (param_2[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142edad20 operator() body=135 status=ok
// SIG undefined operator()(void)

undefined8
<lambda_1d79419b289ab2267df04f358c8cdfe2>::operator()
          (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *plStack_10;
  
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  FText::AsNumber(param_2,param_3,0,&local_18);
  plVar5 = plStack_10;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_10)(plStack_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 142edadb0 FUN_142edadb0 body=151 status=ok
// SIG undefined FUN_142edadb0(void)

undefined8 FUN_142edadb0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_38;
  longlong *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  FUN_140ad4c90(param_1,&local_38);
  if (local_38 != 0) {
    local_28 = *param_3;
    uStack_24 = param_3[1];
    uStack_20 = param_3[2];
    uStack_1c = param_3[3];
    local_18 = param_3[4];
    FUN_142058d30(local_38,param_2,&local_28);
  }
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142edae50 FUN_142edae50 body=601 status=ok
// SIG undefined FUN_142edae50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_142edae50(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  char cVar1;
  DWORD DVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_1a8 [32];
  undefined2 local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168;
  undefined7 uStack_167;
  code *local_158 [2];
  undefined1 local_148 [32];
  undefined8 local_128;
  undefined4 local_118;
  undefined1 local_108 [192];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  uStack_170 = *param_3;
  local_128 = 0;
  local_118 = 0;
  local_178 = param_1;
  local_168 = param_4;
  puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_148);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = (undefined4)local_178;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_178._4_4_;
    *(undefined4 *)(puVar3 + 2) = (undefined4)uStack_170;
    *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_170._4_4_;
    *puVar3 = &PTR_FUN_143f4d0b0;
    puVar3[3] = CONCAT71(uStack_167,local_168);
  }
  local_178 = 0;
  local_158[0] = FUN_142eb0d20;
  uStack_170 = 0x25;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
  local_188 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_178,0x25,"UGbxGFxMovie::TranslateScreenToLocal");
  FUN_142018510(local_108,&local_178,local_158);
  uVar4 = FUN_142037d70(local_108,local_158);
  FUN_142084410(param_1,uVar4);
  lVar5 = local_48;
  if (local_48 != 0) {
    while ((lVar5 = local_48, local_48 != 0 && (*(char *)(local_48 + 0x58) == '\0'))) {
      cVar1 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar1 == '\0') &&
         ((DAT_1468c21ae != '\0' && (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)))) {
        lVar5 = FUN_14203ca70();
        if (lVar5 != 0) {
          FUN_1420714f0(lVar5);
        }
      }
      else {
        FUN_142036de0();
      }
      lVar5 = local_48;
      if (local_48 == 0) break;
      if (*(char *)(local_48 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(local_48 + 0x50) + 0x20))(*(longlong **)(local_48 + 0x50),5);
      }
    }
  }
  cVar1 = *(char *)(lVar5 + 0x58);
  while (cVar1 == '\0') {
    (**(code **)(**(longlong **)(lVar5 + 0x50) + 0x20))(*(longlong **)(lVar5 + 0x50),0x5d638865,0);
    cVar1 = *(char *)(lVar5 + 0x58);
  }
  *param_2 = *(undefined8 *)(lVar5 + 0x60);
  FUN_140ce1dc0(local_108);
  return param_2;
}



// FUNCTION 142edb0b0 FUN_142edb0b0 body=236 status=ok
// SIG undefined FUN_142edb0b0(void)

undefined8 * FUN_142edb0b0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

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
    *param_2 = DAT_1468b5d88;
  }
  else {
    FUN_142058ff0(local_18,param_2,*param_3);
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



// FUNCTION 142edb1a0 FUN_142edb1a0 body=689 status=ok
// SIG undefined FUN_142edb1a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_142edb1a0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4,
             undefined1 param_5)

{
  char cVar1;
  DWORD DVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_res20 [8];
  undefined1 auStack_1d8 [32];
  undefined2 local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 *local_198;
  undefined1 *puStack_190;
  longlong local_188;
  undefined1 local_180 [8];
  code *local_178 [2];
  undefined1 local_168 [32];
  undefined8 local_148;
  undefined4 local_138;
  undefined1 local_128 [192];
  longlong local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_188 = *(longlong *)(param_1 + 0x430);
  if (local_188 != 0) {
    local_1a8 = &local_188;
    local_198 = local_180;
    puStack_190 = local_res20;
    local_148 = 0;
    local_138 = 0;
    local_res20[0] = param_4;
    uStack_1a0 = param_2;
    puVar3 = (undefined8 *)FUN_140438ef0(0x28,local_168);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_143ff7760;
      *(undefined4 *)(puVar3 + 1) = (undefined4)local_1a8;
      *(undefined4 *)((longlong)puVar3 + 0xc) = local_1a8._4_4_;
      *(undefined4 *)(puVar3 + 2) = (undefined4)uStack_1a0;
      *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_1a0._4_4_;
      puVar3[3] = local_198;
      puVar3[4] = puStack_190;
    }
    local_1a8 = (longlong *)0x0;
    local_178[0] = FUN_142eb09a0;
    uStack_1a0 = 0x24;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
    local_1b8 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_1a8,0x24,"UGbxGFxMovie::TranslateWorldToLocal");
    FUN_1410b2c00(local_128,&local_1a8,local_178);
    uVar4 = FUN_1410ca7e0(local_128,local_178);
    FUN_142032330(uVar4);
    lVar5 = local_68;
    if (local_68 != 0) {
      while ((lVar5 = local_68, local_68 != 0 && (*(char *)(local_68 + 0x58) == '\0'))) {
        cVar1 = FUN_1415ad720(&DAT_1468e2448);
        if ((cVar1 == '\0') &&
           ((DAT_1468c21ae != '\0' && (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)))) {
          lVar5 = FUN_14203ca70();
          if (lVar5 != 0) {
            FUN_1420714f0(lVar5);
          }
        }
        else {
          FUN_142036de0();
        }
        lVar5 = local_68;
        if (local_68 == 0) break;
        if (*(char *)(local_68 + 0x58) == '\0') {
          (**(code **)(**(longlong **)(local_68 + 0x50) + 0x20))(*(longlong **)(local_68 + 0x50),5);
        }
      }
    }
    cVar1 = *(char *)(lVar5 + 0x58);
    while (cVar1 == '\0') {
      (**(code **)(**(longlong **)(lVar5 + 0x50) + 0x20))(*(longlong **)(lVar5 + 0x50),0x5d638865,0)
      ;
      cVar1 = *(char *)(lVar5 + 0x58);
    }
    if (*(char *)(lVar5 + 0x60) != '\0') {
      puVar3 = (undefined8 *)FUN_142edae50(param_1,&local_1a8,local_180,param_5);
      *param_3 = *puVar3;
      FUN_140ce1dc0(local_128);
      return 1;
    }
    FUN_140ce1dc0(local_128);
  }
  *(undefined4 *)param_3 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)((longlong)param_3 + 4) = DAT_1468b5d88._4_4_;
  return 0;
}



// FUNCTION 142edb460 FUN_142edb460 body=378 status=ok
// SIG undefined FUN_142edb460(void)

void FUN_142edb460(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  longlong local_28;
  longlong *local_20;
  
  plVar2 = *(longlong **)(param_1 + 0x30);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar9 = iVar5 == 0;
    if (bVar9) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (!bVar9) {
      while( true ) {
        LOCK();
        bVar9 = iVar5 == (int)plVar2[1];
        if (bVar9) {
          *(int *)(plVar2 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar9) break;
        LOCK();
        iVar5 = (int)plVar2[1];
        bVar9 = iVar5 == 0;
        if (bVar9) {
          *(int *)(plVar2 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar9) {
          return;
        }
      }
      if (plVar2 != (longlong *)0x0) {
        lVar3 = *(longlong *)(param_1 + 0x28);
        if (lVar3 != 0) {
          *(undefined1 *)(param_1 + 0x80) = 1;
          FUN_142edb990(param_1);
          FUN_142056670(lVar3,1);
          plVar4 = *(longlong **)(param_1 + 0x48);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            iVar5 = (int)plVar4[1];
            bVar9 = iVar5 == 0;
            if (bVar9) {
              *(int *)(plVar4 + 1) = 0;
              iVar5 = 0;
            }
            UNLOCK();
            while (!bVar9) {
              LOCK();
              bVar9 = iVar5 == (int)plVar4[1];
              if (bVar9) {
                *(int *)(plVar4 + 1) = iVar5 + 1;
              }
              UNLOCK();
              if (bVar9) {
                if (plVar4 != (longlong *)0x0) {
                  lVar3 = *(longlong *)(param_1 + 0x40);
                  if ((lVar3 != 0) && (lVar6 = FWeakObjectPtr::Get(param_1 + 0x38), lVar6 != 0)) {
                    uVar7 = FUN_142f16320();
                    plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar7);
                    if (plVar8 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                      UNLOCK();
                      local_28 = lVar3;
                      local_20 = plVar4;
                      (**(code **)(*plVar8 + 0x18))(plVar8,&local_28);
                    }
                  }
                  LOCK();
                  plVar8 = plVar4 + 1;
                  lVar3 = *plVar8;
                  *(int *)plVar8 = (int)*plVar8 + -1;
                  UNLOCK();
                  if ((int)lVar3 == 1) {
                    (**(code **)*plVar4)(plVar4);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar4 + 0xc);
                    iVar5 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar5 == 1) {
                      (**(code **)(*plVar4 + 8))(plVar4,1);
                    }
                  }
                }
                break;
              }
              LOCK();
              iVar5 = (int)plVar4[1];
              bVar9 = iVar5 == 0;
              if (bVar9) {
                *(int *)(plVar4 + 1) = 0;
                iVar5 = 0;
              }
              UNLOCK();
            }
          }
        }
        LOCK();
        plVar4 = plVar2 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142edb5e0 FUN_142edb5e0 body=306 status=ok
// SIG undefined FUN_142edb5e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142edb5e0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  undefined4 local_c8 [4];
  undefined1 local_b8 [80];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_c8[0] = 0xffffffff;
  uVar3 = 0xffffffff;
  if (*(longlong *)(param_1 + 0x5f0) != 0) {
    FUN_14170c210(local_c8);
    uVar3 = local_c8[0];
  }
  local_c8[0] = 0xffffffff;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144266c70;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = uVar3;
    uVar3 = 0xffffffff;
  }
  local_68[0] = &LAB_142eb0d10;
  uVar2 = FUN_1420849a0(param_1,local_b8,local_68);
  FUN_14208c4f0(param_1,uVar2);
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
  FUN_1416f8340(uVar3);
  FUN_1416f8340(local_c8[0]);
  return;
}



// FUNCTION 142edb720 FUN_142edb720 body=294 status=ok
// SIG undefined FUN_142edb720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142edb720(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  LOCK();
  iVar1 = *(int *)(param_1 + 0x640);
  *(int *)(param_1 + 0x640) = 1;
  UNLOCK();
  if (iVar1 == 0) {
    local_88 = (longlong *)0x0;
    local_78 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = param_1;
      *puVar2 = &PTR_FUN_143f77b70;
    }
    local_b8[0] = FUN_142eb08b0;
    uVar3 = FUN_1420849a0(param_1,local_68,local_b8);
    FUN_14208c260(param_1,uVar3);
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
    if (local_78 != 0) {
      plVar4 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar4 = local_88;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142edb850 FUN_142edb850 body=165 status=ok
// SIG undefined FUN_142edb850(void)

void FUN_142edb850(longlong param_1,undefined1 param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  cVar2 = (**(code **)(*(longlong *)(param_1 + 0x170) + 0x40))();
  if ((cVar2 != '\0') && (lVar5 = *(longlong *)(param_1 + 0x38), lVar5 != 0)) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
    lVar5 = *(longlong *)(lVar5 + 0x10);
    if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      UObjectBaseUtility::GetInterfaceAddress(param_1,uVar4);
      lVar5 = FUN_14119d8f0(param_1);
      if (*(longlong *)(lVar5 + 0x5a8) != 0) {
        FUN_142f0d400(*(longlong *)(lVar5 + 0x5a8),param_1,param_2);
      }
    }
  }
  return;
}



// FUNCTION 142edb900 FUN_142edb900 body=144 status=ok
// SIG undefined FUN_142edb900(void)

void FUN_142edb900(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong *plVar2;
  float local_res8;
  float local_resc;
  
  if (*(char *)(param_1 + 0x540) == '\x01') {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x5d8);
    if (cVar1 != '\0') {
      plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x5d8);
      (**(code **)(*plVar2 + 0x1058))(plVar2,&local_res8);
      *(undefined4 *)(param_2 + 2) = 0x3f800000;
      *(undefined4 *)((longlong)param_2 + 0x14) = 0x3f800000;
      *param_2 = CONCAT44(local_resc * 2.0 - 1.0,local_res8 * 2.0 - 1.0);
    }
  }
  return;
}



// FUNCTION 142edb990 FUN_142edb990 body=431 status=ok
// SIG undefined FUN_142edb990(void)

void FUN_142edb990(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 *puVar12;
  bool bVar13;
  longlong *local_a0;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar11 = (int)plVar3[1];
    bVar13 = iVar11 == 0;
    if (bVar13) {
      *(int *)(plVar3 + 1) = 0;
      iVar11 = 0;
    }
    UNLOCK();
    if (!bVar13) {
      while( true ) {
        LOCK();
        bVar13 = iVar11 == (int)plVar3[1];
        if (bVar13) {
          *(int *)(plVar3 + 1) = iVar11 + 1;
        }
        UNLOCK();
        if (bVar13) break;
        LOCK();
        iVar11 = (int)plVar3[1];
        bVar13 = iVar11 == 0;
        if (bVar13) {
          *(int *)(plVar3 + 1) = 0;
          iVar11 = 0;
        }
        UNLOCK();
        if (bVar13) {
          return;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        lVar4 = *(longlong *)(param_1 + 0x28);
        if (lVar4 != 0) {
          uVar9 = *(undefined8 *)(param_1 + 0x90);
          uVar10 = *(undefined8 *)(param_1 + 0x98);
          uVar5 = *(undefined4 *)(param_1 + 0xa0);
          uVar6 = *(undefined4 *)(param_1 + 0xa4);
          uVar7 = *(undefined4 *)(param_1 + 0xa8);
          uVar8 = *(undefined4 *)(param_1 + 0xac);
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          local_48 = 0;
          local_38 = 0;
          puVar12 = (undefined8 *)FUN_140438ef0(0x40,local_68);
          local_a0 = plVar3;
          if (puVar12 != (undefined8 *)0x0) {
            puVar12[4] = uVar9;
            puVar12[5] = uVar10;
            *puVar12 = &PTR_FUN_14598ae78;
            puVar12[2] = lVar4;
            *(undefined4 *)(puVar12 + 6) = uVar5;
            *(undefined4 *)((longlong)puVar12 + 0x34) = uVar6;
            *(undefined4 *)(puVar12 + 7) = uVar7;
            *(undefined4 *)((longlong)puVar12 + 0x3c) = uVar8;
            puVar12[3] = plVar3;
            local_a0 = (longlong *)0x0;
          }
          local_78[0] = &LAB_142eb0a40;
          FUN_1420326d0(lVar4,local_78);
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_a0 + 1;
            lVar4 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*local_a0)();
              LOCK();
              piVar2 = (int *)((longlong)local_a0 + 0xc);
              iVar11 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*local_a0 + 8))(local_a0,1);
              }
            }
          }
        }
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142edbb40 FUN_142edbb40 body=232 status=ok
// SIG undefined FUN_142edbb40(void)

void FUN_142edbb40(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x280);
  if (0 < lVar2) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x278) + 0x18 + lVar3);
      if (lVar1 != 0) {
        fVar5 = *(float *)(lVar1 + 0x2dc);
        fVar6 = *(float *)(lVar1 + 0x2e0);
        if (*(char *)(param_1 + 0x1e1) == '\0') {
          fVar4 = (float)FUN_142eedeb0(param_1 + 0x2b8);
          fVar6 = fVar6 - fVar4;
        }
        else if (*(char *)(param_1 + 0x1e1) == '\x01') {
          fVar4 = (float)FUN_142eedeb0(param_1 + 0x2b8);
          fVar5 = fVar5 - fVar4;
        }
        if ((*(char *)(param_1 + 0x1e1) == '\x01') && (*(char *)(param_1 + 0x1e2) == '\x02')) {
          fVar5 = fVar5 + *(float *)(param_1 + 0x318);
        }
        FUN_14208ff10(lVar1,fVar5,fVar6);
      }
      lVar3 = lVar3 + 0x20;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 142edbc30 FUN_142edbc30 body=185 status=ok
// SIG undefined FUN_142edbc30(void)

void FUN_142edbc30(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar3 = (longlong)*(int *)(param_1 + 0x280);
  fVar7 = (float)*(int *)(param_1 + 0x324) * *(float *)(param_1 + 0x2d8);
  if (0 < lVar3) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x278) + 0x18 + lVar4);
      if (lVar2 != 0) {
        cVar1 = *(char *)(param_1 + 0x1e1);
        fVar5 = *(float *)(lVar2 + 0x2dc);
        fVar6 = *(float *)(lVar2 + 0x2e0);
        if (cVar1 == '\0') {
          fVar6 = fVar6 - fVar7;
        }
        else if (cVar1 == '\x01') {
          fVar5 = fVar5 - fVar7;
        }
        if ((cVar1 == '\x01') && (*(char *)(param_1 + 0x1e2) == '\x02')) {
          fVar5 = fVar5 + *(float *)(param_1 + 0x318);
        }
        FUN_14208ff10(lVar2,fVar5,fVar6);
      }
      lVar4 = lVar4 + 0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 142edbcf0 FUN_142edbcf0 body=472 status=ok
// SIG undefined FUN_142edbcf0(void)

void FUN_142edbcf0(longlong param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  float fVar7;
  
  plVar6 = (longlong *)0x0;
  iVar2 = *(int *)(param_1 + 0x94);
  if (*(float *)(param_1 + 0x90) <= 0.0) {
    iVar5 = 0;
  }
  else {
    fVar7 = (float)FUN_142eedeb0(param_1 + 0x20);
    fVar7 = fVar7 / *(float *)(param_1 + 0x90);
    iVar5 = (int)ROUND((fVar7 + fVar7) - 0.5) >> 1;
  }
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x54) * iVar5;
  fVar7 = (float)FUN_142eedeb0(param_1 + 0x20);
  *(float *)(param_1 + 0x98) = fVar7 - (float)iVar5 * *(float *)(param_1 + 0x90);
  if (iVar2 != *(int *)(param_1 + 0x94)) {
    FUN_142eba6a0(param_1);
  }
  if ((*(longlong *)(param_1 + 0x68) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10) != 0)) {
    FUN_14208ff10();
  }
  lVar3 = *(longlong *)(param_1 + 0x70);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x10) != 0)) {
    fVar7 = *(float *)(param_1 + 0x44);
    fVar1 = *(float *)(param_1 + 0x40);
    if (1e-08 < ABS(fVar7)) {
      if (1e-08 < ABS(fVar7 - fVar1)) {
        FUN_142eedeb0(param_1 + 0x20);
        lVar3 = *(longlong *)(param_1 + 0x70);
      }
      plVar4 = plVar6;
      if (lVar3 != 0) {
        plVar4 = *(longlong **)(lVar3 + 0x10);
      }
      FUN_142f10880(plVar4,fVar1 / fVar7);
      plVar4 = plVar6;
      if (*(longlong *)(param_1 + 0x70) != 0) {
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x10);
      }
      FUN_142f0fa70(plVar4);
    }
    else {
      FUN_142f10880();
    }
    if (*(longlong *)(param_1 + 0x70) != 0) {
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x10);
    }
    (**(code **)(*plVar6 + 0x278))(plVar6,fVar1 < fVar7);
  }
  return;
}



// FUNCTION 142edbed0 FUN_142edbed0 body=262 status=ok
// SIG undefined FUN_142edbed0(void)

void FUN_142edbed0(longlong param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x2f8);
  if (lVar4 != 0) {
    fVar1 = *(float *)(param_1 + 0x2dc);
    fVar2 = *(float *)(param_1 + 0x2d8);
    if (1e-08 < ABS(fVar1)) {
      fVar6 = 0.0;
      if (1e-08 < ABS(fVar1 - fVar2)) {
        fVar6 = (float)FUN_142eedeb0(param_1 + 0x2b8);
        lVar4 = *(longlong *)(param_1 + 0x2f8);
        fVar6 = fVar6 / (fVar1 - fVar2);
      }
      FUN_142f10880(lVar4,fVar2 / fVar1);
      FUN_142f0fa70(*(undefined8 *)(param_1 + 0x2f8),fVar6);
    }
    else {
      FUN_142f10880(lVar4,0x3f800000);
    }
    if (*(char *)(param_1 + 0x1f0) != '\0') {
      if ((fVar1 <= fVar2) || (cVar3 = FUN_142088620(param_1), cVar3 == '\0')) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      (**(code **)(**(longlong **)(param_1 + 0x2f8) + 0x278))(*(longlong **)(param_1 + 0x2f8),uVar5)
      ;
    }
  }
  return;
}



// FUNCTION 142edbfe0 FUN_142edbfe0 body=100 status=ok
// SIG undefined FUN_142edbfe0(void)

void FUN_142edbfe0(longlong param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (((*(char *)(param_1 + 0x33c) != '\0') && (*(longlong *)(param_1 + 800) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 800) + 0x300) != 0)) {
    iVar1 = FUN_142eeb880();
    puVar2 = &DAT_1464aa6c0;
    if (*(int *)(param_1 + 0x338) != iVar1) {
      puVar2 = (undefined4 *)(param_1 + 0x340);
    }
    FUN_142f0c220(*(undefined8 *)(*(longlong *)(param_1 + 800) + 0x300),puVar2,1);
    return;
  }
  return;
}



// FUNCTION 142edc050 FUN_142edc050 body=162 status=ok
// SIG undefined FUN_142edc050(void)

void FUN_142edc050(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_28 [32];
  
  lVar3 = *(longlong *)(param_1 + 0x308);
  lVar1 = (longlong)*(int *)(param_1 + 0x310) * 0x20 + lVar3;
  if (lVar3 != lVar1) {
    do {
      if (*(int *)(param_1 + 0x318) == *(int *)(lVar3 + 0x18)) {
        if (*(longlong **)(param_1 + 0x220) == (longlong *)0x0) {
          return;
        }
        lVar3 = **(longlong **)(param_1 + 0x220);
        uVar2 = FText::FText(local_28);
        goto LAB_142edc0bc;
      }
      lVar3 = lVar3 + 0x20;
    } while (lVar3 != lVar1);
  }
  if (*(longlong **)(param_1 + 0x220) != (longlong *)0x0) {
    lVar3 = **(longlong **)(param_1 + 0x220);
    uVar2 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"Error: Invalid Choice",L"GbxComboBox",L"NoComboChoiceText");
LAB_142edc0bc:
    (**(code **)(lVar3 + 0x2d0))(*(undefined8 *)(param_1 + 0x220),uVar2);
  }
  return;
}



// FUNCTION 142edc100 FUN_142edc100 body=88 status=ok
// SIG undefined FUN_142edc100(void)

bool FUN_142edc100(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146b3dce8;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] != 0;
    }
  }
  return *piVar1 != 0;
}



// FUNCTION 142edc170 FUN_142edc170 body=14 status=ok
// SIG undefined FUN_142edc170(void)

void FUN_142edc170(longlong param_1)

{
  if (*(int *)(param_1 + 4) < 1) {
    *(undefined4 *)(param_1 + 4) = 1;
  }
  return;
}



// FUNCTION 142edc1c0 FUN_142edc1c0 body=194 status=ok
// SIG undefined FUN_142edc1c0(void)

undefined4 FUN_142edc1c0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  longlong local_18;
  longlong *local_10;
  
  FUN_140ad4c90(param_1,&local_18);
  if ((local_18 != 0) && (cVar7 = FUN_142046020(local_18), cVar7 != '\0')) {
    FUN_142056520(local_18,0);
    FUN_142036df0(local_18);
  }
  plVar6 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  FUN_142ed4f30(param_1,0,1);
  (**(code **)(*param_1 + 0x298))(param_1,1);
  (**(code **)(*param_1 + 0x540))(param_1);
  LOCK();
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x604);
  *(undefined4 *)((longlong)param_1 + 0x604) = 0;
  UNLOCK();
  return uVar4;
}



// FUNCTION 142edc290 FUN_142edc290 body=100 status=ok
// SIG undefined FUN_142edc290(void)

void FUN_142edc290(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x5c8);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_142f27b90();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x000142edc2e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x7b0))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 142edc300 FUN_142edc300 body=80 status=ok
// SIG undefined FUN_142edc300(void)

void FUN_142edc300(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_58[0] = &LAB_142eb07e0;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 142edc350 FUN_142edc350 body=265 status=ok
// SIG undefined FUN_142edc350(void)

undefined4 * FUN_142edc350(undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 local_38;
  undefined1 local_30 [24];
  
  lVar1 = param_1[1];
  puVar2 = (undefined4 *)*param_1;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *param_2 = 0xffffffff;
  param_2[1] = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  param_2[8] = 0;
  if (0x7fffffff < (uint)param_2[9]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
  }
  if (*(undefined2 **)(param_2 + 6) != (undefined2 *)0x0) {
    **(undefined2 **)(param_2 + 6) = 0;
  }
  param_2[2] = 0;
  *param_2 = *puVar2;
  param_2[1] = puVar2[1];
  param_2[2] = puVar2[2];
  local_38 = *(undefined8 *)(puVar2 + 4);
  FString::FString(local_30,puVar2 + 6);
  FSoftObjectPath::operator=(param_2 + 4,&local_38);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_2 + 10,lVar1);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_2 + 0x14,lVar1 + 0x28);
  *(undefined8 *)(param_2 + 0x1e) = *(undefined8 *)(lVar1 + 0x50);
  FString::FString(param_2 + 0x20,lVar1 + 0x58);
  *(undefined8 *)(param_2 + 0x24) = *(undefined8 *)(lVar1 + 0x68);
  FString::FString(param_2 + 0x26,lVar1 + 0x70);
  return param_2;
}



// FUNCTION 142edc460 FUN_142edc460 body=143 status=ok
// SIG undefined FUN_142edc460(void)

ulonglong FUN_142edc460(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_142eea190();
  if ((int)uVar3 == -1) {
    uVar2 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar2 + 1)) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,uVar2);
    }
    puVar1 = (undefined4 *)(*param_1 + (longlong)(int)uVar2 * 0x28);
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
    puVar1[4] = param_2[4];
    uVar3 = (ulonglong)uVar2;
    puVar1[5] = param_2[5];
    puVar1[6] = param_2[6];
    puVar1[7] = param_2[7];
    puVar1[8] = param_2[8];
    puVar1[9] = param_2[9];
  }
  return uVar3;
}



// FUNCTION 142edc4f0 FUN_142edc4f0 body=140 status=ok
// SIG undefined FUN_142edc4f0(void)

ulonglong FUN_142edc4f0(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = FUN_142eea230();
  if ((int)uVar4 == -1) {
    uVar1 = *(uint *)(param_1 + 1);
    lVar5 = (longlong)(int)uVar1;
    *(uint *)(param_1 + 1) = uVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar1 + 1)) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,uVar1);
    }
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + lVar5 * 0x28) = *param_2;
    *(undefined4 *)(lVar2 + 4 + lVar5 * 0x28) = param_2[1];
    *(undefined8 *)(lVar2 + 8 + lVar5 * 0x28) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(lVar2 + 0x10 + lVar5 * 0x28) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(lVar2 + 0x18 + lVar5 * 0x28) = *(undefined8 *)(param_2 + 6);
    lVar3 = *(longlong *)(param_2 + 8);
    *(longlong *)(lVar2 + 0x20 + lVar5 * 0x28) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    uVar4 = (ulonglong)uVar1;
  }
  return uVar4;
}



// FUNCTION 142edc580 FUN_142edc580 body=240 status=ok
// SIG undefined FUN_142edc580(void)

int FUN_142edc580(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar4 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  if (plVar4 != plVar4 + (longlong)iVar1 * 6) {
    plVar5 = plVar4;
    do {
      if ((*plVar5 == *param_2) && ((int)plVar5[1] == (int)param_2[1])) {
        iVar3 = (int)(((longlong)plVar5 - (longlong)plVar4) / 0x30);
        if (iVar3 != -1) {
          return iVar3;
        }
        break;
      }
      plVar5 = plVar5 + 6;
    } while (plVar5 != plVar4 + (longlong)iVar1 * 6);
  }
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  plVar4 = (longlong *)(*param_1 + (longlong)iVar1 * 0x30);
  *plVar4 = *param_2;
  *(int *)(plVar4 + 1) = (int)param_2[1];
  *(undefined1 *)((longlong)plVar4 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
  plVar4[2] = param_2[2];
  plVar4[3] = param_2[3];
  lVar2 = param_2[4];
  plVar4[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(char *)(plVar4 + 5) = (char)param_2[5];
  return iVar1;
}



// FUNCTION 142edc670 CreateWidget<UUserWidget,UMainPlayerWidget> body=99 status=ok
// SIG undefined CreateWidget<UUserWidget,UMainPlayerWidget>(void)

longlong CreateWidget<UUserWidget,UMainPlayerWidget>(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = FUN_1420f15e0();
  if (lVar2 != 0) {
    lVar3 = UUserWidget::GetPrivateStaticClass();
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
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 142edc6e0 FUN_142edc6e0 body=922 status=ok
// SIG undefined FUN_142edc6e0(void)

uint * FUN_142edc6e0(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  int iVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  void *_Dst;
  uint uVar14;
  char cVar15;
  undefined4 uVar16;
  void *_Src;
  bool bVar17;
  uint local_res8 [2];
  
  iVar12 = 1;
  uVar16 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar14 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar14 + 1)) {
      TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_1,uVar14);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar14 = *(uint *)(param_1 + 6);
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)((longlong)(int)uVar14 * 0xb0 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar8 * 0xb0 + *param_1) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = uVar14;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 +
                   (longlong)((int)(uVar14 + ((int)uVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar14 & 0x1f);
  _Src = (void *)((longlong)(int)uVar14 * 0xb0 + *param_1);
  FUN_142edc350(param_3,_Src);
  *(undefined4 *)((longlong)_Src + 0xa8) = 0xffffffff;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FUN_142eea340(param_1,local_res8,_Src);
    uVar14 = local_res8[0];
    lVar11 = (longlong)(int)local_res8[0];
    bVar17 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar17);
    if (bVar17) {
      _Dst = (void *)(lVar11 * 0xb0 + *param_1);
      FUN_142eddfc0(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0xa8);
      uVar4 = *param_2;
      bVar2 = (byte)uVar4 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0xb0 + *param_1) = uVar4;
      }
      puVar6 = (undefined4 *)((longlong)(int)uVar4 * 0xb0 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar16 = (undefined4)param_1[6];
      }
      puVar6[1] = uVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar4;
      plVar7 = (longlong *)param_1[4];
      *param_2 = uVar14;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar7 +
                       (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_142edca51;
    }
  }
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar14) {
    uVar4 = (uVar14 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar15 = '\0';
    if (uVar4 != 0) {
      iVar8 = 0x1f - iVar12;
    }
    uVar4 = (uVar14 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar15 = '\x1f' - (char)iVar12;
    }
    iVar12 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar15 & 0x1f);
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar12 <= (int)param_1[9])))) {
    uVar14 = *param_2;
    uVar13 = (int)((ulonglong)*(undefined8 *)((longlong)_Src + 0x10) >> 0x20) +
             (int)*(undefined8 *)((longlong)_Src + 0x10);
    uVar10 = uVar13 >> 0xd ^ -uVar13;
    uVar4 = (-0x61c88647 - uVar10) - uVar13 ^ uVar10 << 8;
    uVar13 = (uVar13 - uVar4) - uVar10 ^ uVar4 >> 0xd;
    uVar10 = (uVar10 - uVar4) - uVar13 ^ uVar13 >> 0xc;
    uVar4 = (uVar4 - uVar10) - uVar13 ^ uVar10 << 0x10;
    uVar13 = (uVar13 - uVar4) - uVar10 ^ uVar4 >> 5;
    uVar10 = (uVar10 - uVar4) - uVar13 ^ uVar13 >> 3;
    uVar4 = (uVar4 - uVar10) - uVar13 ^ uVar10 << 10;
    if (*(int *)((longlong)_Src + 0x20) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = *(undefined2 **)((longlong)_Src + 0x18);
    }
    uVar5 = FUN_140438070(puVar9);
    uVar10 = ((uVar13 - uVar4) - uVar10 ^ uVar4 >> 0xf) - uVar5 ^ uVar5 >> 0xd;
    uVar4 = (-0x61c88647 - uVar10) - uVar5 ^ uVar10 << 8;
    uVar13 = (uVar5 - uVar4) - uVar10 ^ uVar4 >> 0xd;
    uVar10 = (uVar10 - uVar4) - uVar13 ^ uVar13 >> 0xc;
    uVar4 = (uVar4 - uVar10) - uVar13 ^ uVar10 << 0x10;
    uVar13 = (uVar13 - uVar4) - uVar10 ^ uVar4 >> 5;
    uVar10 = (uVar10 - uVar4) - uVar13 ^ uVar13 >> 3;
    uVar4 = (uVar4 - uVar10) - uVar13 ^ uVar10 << 10;
    uVar4 = ((uVar13 - uVar4) - uVar10 ^ uVar4 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0xac) = uVar4;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0xa8) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(uint *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         uVar14;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    FUN_142f058c0(param_1);
  }
LAB_142edca51:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 142edca80 FUN_142edca80 body=494 status=ok
// SIG undefined FUN_142edca80(void)

longlong FUN_142edca80(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 local_68 [24];
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  lVar8 = *param_1;
  bVar9 = false;
  lVar1 = lVar8 + (longlong)(int)param_1[1] * 0x28;
  if (lVar8 != lVar1) {
    plVar7 = (longlong *)(lVar8 + 0x10);
    do {
      bVar2 = bVar9;
      if (param_2 != 0) {
        lVar4 = FWeakObjectPtr::Get(lVar8);
        if (lVar4 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != (int)plVar7[-1]) && (*plVar7 != 0)) {
            lVar4 = FUN_141796df0(plVar7);
            FWeakObjectPtr::operator=(lVar8,lVar4);
            if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(plVar7 + -1) = DAT_1464b56f4;
            }
            lVar4 = FWeakObjectPtr::Get(lVar8);
            if (lVar4 != 0) goto LAB_142edcb45;
          }
        }
        else {
LAB_142edcb45:
          lVar5 = FUN_14171bfe0();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (bVar9) {
            lVar5 = UGSquadMemberWidget::GetPrivateStaticClass();
            do {
              if (lVar4 == lVar5) {
                lVar4 = *(longlong *)(param_2 + 0x10);
                if (lVar4 != 0) {
                  local_38 = 0;
                  local_40 = 0;
                  local_30 = 0;
                  local_50 = 0xffffffff;
                  local_4c = 0;
                  uVar6 = FSoftObjectPath::FSoftObjectPath(local_68,lVar4);
                  FSoftObjectPath::operator=(&local_40,uVar6);
                  FWeakObjectPtr::operator=(&local_50,lVar4);
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                  }
                  UNLOCK();
                  local_4c = CONCAT44(DAT_1464b56f4,(undefined4)local_4c);
                  bVar9 = true;
                  cVar3 = FSoftObjectPath::operator==(&local_40,plVar7);
                  bVar2 = true;
                  if (cVar3 != '\0') {
                    bVar2 = true;
                    goto LAB_142edcb91;
                  }
                }
                break;
              }
              lVar4 = *(longlong *)(lVar4 + 0x30);
            } while (lVar4 != 0);
          }
        }
      }
      bVar9 = bVar2;
      bVar2 = false;
LAB_142edcb91:
      if ((bVar9) && (bVar9 = false, local_38 != 0)) {
        FMemory::Free();
      }
      if (bVar2) {
        return lVar8;
      }
      lVar8 = lVar8 + 0x28;
      plVar7 = plVar7 + 5;
    } while (lVar8 != lVar1);
  }
  return 0;
}



// FUNCTION 142edcc70 FUN_142edcc70 body=653 status=ok
// SIG undefined FUN_142edcc70(void)

void FUN_142edcc70(undefined4 *param_1,int param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  iVar7 = (param_2 + -2) / 2;
  if (-1 < iVar7) {
    iVar8 = iVar7 * 2 + 1;
    iVar5 = iVar8;
    iVar10 = iVar7;
joined_r0x000142edccb6:
    do {
      if (iVar8 < param_2) {
        iVar8 = iVar7 * 2;
        iVar9 = iVar8 + 1;
        if (iVar8 + 2 < param_2) {
          iVar1 = param_1[iVar9];
          iVar2 = param_1[(longlong)iVar8 + 2];
          if (iVar2 < 0) {
LAB_142edcd1e:
            bVar12 = SBORROW4(iVar2,iVar1);
            iVar2 = iVar2 - iVar1;
          }
          else {
            iVar3 = *(int *)(*param_4 + 0x3a0);
            if (((iVar3 <= iVar2) || (iVar1 < 0)) || (iVar3 <= iVar1)) goto LAB_142edcd1e;
            lVar11 = *(longlong *)(*param_4 + 0x398);
            iVar1 = *(int *)(lVar11 + 0x28 + (longlong)iVar1 * 0x30);
            iVar2 = *(int *)(lVar11 + 0x28 + (longlong)iVar2 * 0x30);
            bVar12 = SBORROW4(iVar2,iVar1);
            iVar2 = iVar2 - iVar1;
          }
          if (bVar12 != iVar2 < 0) {
            iVar9 = iVar8;
          }
          iVar9 = iVar9 + 1;
        }
        iVar1 = param_1[iVar9];
        iVar2 = param_1[iVar7];
        if (iVar2 < 0) {
LAB_142edcd85:
          bVar12 = SBORROW4(iVar2,iVar1);
          iVar8 = iVar2 - iVar1;
        }
        else {
          iVar8 = *(int *)(*param_4 + 0x3a0);
          if (((iVar8 <= iVar2) || (iVar1 < 0)) || (iVar8 <= iVar1)) goto LAB_142edcd85;
          lVar11 = *(longlong *)(*param_4 + 0x398);
          iVar3 = *(int *)(lVar11 + 0x28 + (longlong)iVar1 * 0x30);
          iVar8 = *(int *)(lVar11 + 0x28 + (longlong)iVar2 * 0x30);
          bVar12 = SBORROW4(iVar8,iVar3);
          iVar8 = iVar8 - iVar3;
        }
        if (bVar12 != iVar8 < 0) {
          iVar8 = iVar9 * 2 + 1;
          param_1[iVar7] = iVar1;
          param_1[iVar9] = iVar2;
          iVar7 = iVar9;
          goto joined_r0x000142edccb6;
        }
      }
      iVar8 = iVar5 + -2;
      iVar7 = iVar10 + -1;
      iVar5 = iVar8;
      iVar10 = iVar7;
    } while (-1 < iVar7);
  }
  param_2 = param_2 + -1;
  lVar11 = (longlong)param_2;
  if (0 < param_2) {
    do {
      uVar4 = *param_1;
      iVar7 = 0;
      *param_1 = param_1[lVar11];
      param_1[lVar11] = uVar4;
      if (1 < param_2) {
        do {
          iVar5 = iVar7 * 2;
          iVar8 = iVar5 + 1;
          if (iVar5 + 2 < param_2) {
            iVar10 = param_1[iVar8];
            iVar9 = param_1[(longlong)iVar5 + 2];
            if (iVar9 < 0) {
LAB_142edce4d:
              bVar12 = SBORROW4(iVar9,iVar10);
              iVar9 = iVar9 - iVar10;
            }
            else {
              iVar1 = *(int *)(*param_4 + 0x3a0);
              if (((iVar1 <= iVar9) || (iVar10 < 0)) || (iVar1 <= iVar10)) goto LAB_142edce4d;
              lVar6 = *(longlong *)(*param_4 + 0x398);
              iVar10 = *(int *)(lVar6 + 0x28 + (longlong)iVar10 * 0x30);
              iVar9 = *(int *)(lVar6 + 0x28 + (longlong)iVar9 * 0x30);
              bVar12 = SBORROW4(iVar9,iVar10);
              iVar9 = iVar9 - iVar10;
            }
            if (bVar12 != iVar9 < 0) {
              iVar8 = iVar5;
            }
            iVar8 = iVar8 + 1;
          }
          iVar5 = param_1[iVar8];
          iVar10 = param_1[iVar7];
          if (iVar10 < 0) {
LAB_142edceb3:
            bVar12 = SBORROW4(iVar10,iVar5);
            iVar9 = iVar10 - iVar5;
          }
          else {
            iVar9 = *(int *)(*param_4 + 0x3a0);
            if (((iVar9 <= iVar10) || (iVar5 < 0)) || (iVar9 <= iVar5)) goto LAB_142edceb3;
            lVar6 = *(longlong *)(*param_4 + 0x398);
            iVar1 = *(int *)(lVar6 + 0x28 + (longlong)iVar5 * 0x30);
            iVar9 = *(int *)(lVar6 + 0x28 + (longlong)iVar10 * 0x30);
            bVar12 = SBORROW4(iVar9,iVar1);
            iVar9 = iVar9 - iVar1;
          }
          if (bVar12 == iVar9 < 0) break;
          param_1[iVar7] = iVar5;
          param_1[iVar8] = iVar10;
          iVar7 = iVar8;
        } while (iVar8 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar11 = lVar11 + -1;
    } while (0 < lVar11);
  }
  return;
}



// FUNCTION 142edcf00 FUN_142edcf00 body=881 status=ok
// SIG undefined FUN_142edcf00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_142edcf00(longlong param_1,ulonglong param_2,undefined1 param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  bool bVar15;
  float fVar16;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (param_2 < 2) {
    return;
  }
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  lStack_340 = param_1 + (param_2 - 1) * 4;
  fVar16 = (float)(longlong)param_2;
  if ((longlong)param_2 < 0) {
    fVar16 = fVar16 + 1.8446744e+19;
  }
  local_348 = param_1;
  fVar16 = _guard_xfg_dispatch_icall_nop(fVar16);
  local_338 = (undefined4)(longlong)(fVar16 + fVar16);
  _guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
  plVar8 = &local_348;
LAB_142edcf93:
  piVar3 = (int *)plVar8[1];
  local_358 = plVar8[2];
  lVar6 = (longlong)piVar3 - *plVar8;
  piVar4 = (int *)*plVar8;
  piVar14 = piVar3;
  iVar13 = (int)local_358;
  while (iVar13 != 0) {
    lVar7 = (lVar6 >> 2) + 1;
    if (lVar7 < 9) goto joined_r0x000142edd1d3;
    if (lVar7 < 0) {
      lVar7 = (lVar6 >> 2) + 2;
    }
    piVar10 = piVar14 + 1;
    iVar9 = piVar4[lVar7 >> 1];
    piVar4[lVar7 >> 1] = *piVar4;
    *piVar4 = iVar9;
    piVar12 = piVar4;
LAB_142edd000:
    do {
      piVar12 = piVar12 + 1;
      if (piVar14 < piVar12) break;
      iVar1 = *piVar4;
      iVar9 = *piVar12;
      if (iVar1 < 0) {
LAB_142edd04d:
        bVar15 = SBORROW4(iVar1,iVar9);
        iVar1 = iVar1 - iVar9;
      }
      else {
        iVar5 = *(int *)(*param_4 + 0x3a0);
        if (((iVar5 <= iVar1) || (iVar9 < 0)) || (iVar5 <= iVar9)) goto LAB_142edd04d;
        lVar6 = *(longlong *)(*param_4 + 0x398);
        iVar9 = *(int *)(lVar6 + 0x28 + (longlong)iVar9 * 0x30);
        iVar1 = *(int *)(lVar6 + 0x28 + (longlong)iVar1 * 0x30);
        bVar15 = SBORROW4(iVar1,iVar9);
        iVar1 = iVar1 - iVar9;
      }
    } while (bVar15 == iVar1 < 0);
    do {
      piVar11 = piVar10;
      piVar10 = piVar11 + -1;
      if (piVar10 <= piVar4) {
        iVar9 = *piVar10;
        break;
      }
      iVar9 = *piVar10;
      iVar1 = *piVar4;
      iVar5 = iVar9;
      if (iVar9 < 0) {
LAB_142edd0b9:
        bVar15 = SBORROW4(iVar9,iVar1);
        iVar1 = iVar9 - iVar1;
        iVar9 = iVar5;
      }
      else {
        iVar2 = *(int *)(*param_4 + 0x3a0);
        if ((iVar2 <= iVar9) || (iVar1 < 0)) goto LAB_142edd0b9;
        if (iVar2 <= iVar1) {
          iVar5 = *piVar10;
          goto LAB_142edd0b9;
        }
        lVar6 = *(longlong *)(*param_4 + 0x398);
        iVar5 = *(int *)(lVar6 + 0x28 + (longlong)iVar1 * 0x30);
        iVar1 = *(int *)(lVar6 + 0x28 + (longlong)iVar9 * 0x30);
        bVar15 = SBORROW4(iVar1,iVar5);
        iVar1 = iVar1 - iVar5;
      }
    } while (bVar15 == iVar1 < 0);
    if (piVar12 <= piVar10) {
      iVar9 = *piVar12;
      *piVar12 = *piVar10;
      *piVar10 = iVar9;
      goto LAB_142edd000;
    }
    iVar1 = *piVar4;
    *piVar4 = iVar9;
    *piVar10 = iVar1;
    iVar13 = iVar13 + -1;
    if ((longlong)((longlong)piVar10 + (-4 - (longlong)piVar4) & 0xfffffffffffffffcU) <
        (longlong)((longlong)piVar14 - (longlong)piVar12 & 0xfffffffffffffffcU)) {
      if (piVar12 < piVar14) {
        *plVar8 = (longlong)piVar12;
        plVar8[1] = (longlong)piVar14;
        *(int *)(plVar8 + 2) = iVar13;
        plVar8 = plVar8 + 3;
      }
      if (piVar10 <= piVar4 + 1) goto LAB_142edd17c;
      piVar14 = piVar11 + -2;
      piVar12 = piVar4;
    }
    else {
      if (piVar4 + 1 < piVar10) {
        *plVar8 = (longlong)piVar4;
        plVar8[1] = (longlong)(piVar11 + -2);
        *(int *)(plVar8 + 2) = iVar13;
        plVar8 = plVar8 + 3;
      }
      if (piVar14 <= piVar12) goto LAB_142edd17c;
    }
    lVar6 = (longlong)piVar14 - (longlong)piVar12;
    piVar4 = piVar12;
  }
  FUN_142edcc70(piVar4,piVar3,param_3,param_4);
  goto LAB_142edd17c;
joined_r0x000142edd1d3:
  for (; piVar10 = piVar4, piVar3 = piVar4, piVar4 < piVar14; piVar14 = piVar14 + -1) {
    while (piVar12 = piVar10, piVar3 = piVar3 + 1, piVar3 <= piVar14) {
      iVar9 = *piVar12;
      iVar13 = *piVar3;
      if (iVar9 < 0) {
LAB_142edd234:
        bVar15 = SBORROW4(iVar9,iVar13);
        iVar9 = iVar9 - iVar13;
      }
      else {
        iVar1 = *(int *)(*param_4 + 0x3a0);
        if (((iVar1 <= iVar9) || (iVar13 < 0)) || (iVar1 <= iVar13)) goto LAB_142edd234;
        lVar6 = *(longlong *)(*param_4 + 0x398);
        iVar13 = *(int *)(lVar6 + 0x28 + (longlong)iVar13 * 0x30);
        iVar9 = *(int *)(lVar6 + 0x28 + (longlong)iVar9 * 0x30);
        bVar15 = SBORROW4(iVar9,iVar13);
        iVar9 = iVar9 - iVar13;
      }
      piVar10 = piVar3;
      if (bVar15 == iVar9 < 0) {
        piVar10 = piVar12;
      }
    }
    iVar13 = *piVar12;
    *piVar12 = *piVar14;
    *piVar14 = iVar13;
  }
LAB_142edd17c:
  plVar8 = plVar8 + -3;
  if (plVar8 < &local_348) {
    return;
  }
  goto LAB_142edcf93;
}



// FUNCTION 142edd280 NewIntrusiveReferenceController<SFlareGameOverMenu> body=136 status=ok
// SIG undefined NewIntrusiveReferenceController<SFlareGameOverMenu>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SFlareGameOverMenu>(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x308);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_1459931f0;
    if (_Dst != (undefined8 *)0x0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x2f8);
      FUN_1417f4470(_Dst);
      *_Dst = &PTR_FUN_145992cd0;
      *(undefined4 *)(puVar1 + 0x60) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x304) = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142edd310 FUN_142edd310 body=231 status=ok
// SIG undefined FUN_142edd310(void)

undefined8 * FUN_142edd310(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x360);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_1459931b0;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x350);
      FUN_1417f46d0(_Dst);
      *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) & 0xf7;
      *_Dst = &PTR__scalar_deleting_destructor__143f4a890;
      FGCObject::FGCObject(puVar1 + 0x43);
      puVar1[99] = 0;
      puVar1[100] = 0;
      puVar1[0x65] = 0;
      puVar1[0x66] = 0;
      *_Dst = &PTR_FUN_1459923c0;
      puVar1[0x43] = &PTR_LAB_1459925c8;
      *(undefined4 *)(puVar1 + 0x68) = 0;
      puVar1[0x69] = 0;
      puVar1[0x6a] = 0;
      puVar1[0x6b] = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142edd400 FUN_142edd400 body=156 status=ok
// SIG undefined FUN_142edd400(void)

undefined8 * FUN_142edd400(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x250);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_1459931c0;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x240);
      FUN_141961aa0(_Dst);
      *_Dst = &PTR__scalar_deleting_destructor__1459925e0;
      *(undefined4 *)(puVar1 + 0x48) = 0xbf800000;
      *(undefined4 *)((longlong)puVar1 + 0x244) = 0xbf800000;
      *(undefined4 *)(puVar1 + 0x49) = 0xbf800000;
      *(undefined4 *)((longlong)puVar1 + 0x24c) = 0xbf800000;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142edd4a0 FUN_142edd4a0 body=150 status=ok
// SIG undefined FUN_142edd4a0(void)

undefined8 * FUN_142edd4a0(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x500);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_1459931d0;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x4f0);
      FUN_1420cf490(_Dst);
      *_Dst = &PTR__scalar_deleting_destructor__145992818;
      puVar1[0x60] = &PTR_LAB_145992a28;
      *(undefined4 *)(puVar1 + 0x9f) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x4fc) = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142edd540 FUN_142edd540 body=143 status=ok
// SIG undefined FUN_142edd540(void)

undefined8 * FUN_142edd540(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x530);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_1459931e0;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x520);
      FUN_1419a8e90(_Dst);
      *_Dst = &PTR_FUN_145992a40;
      *(undefined4 *)(puVar1 + 0xa3) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x51c) = 0;
      puVar1[0xa4] = 0;
      *(undefined4 *)(puVar1 + 0xa5) = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142edd5d0 NewObject<UBlackboardKeyType_Object> body=89 status=ok
// SIG undefined NewObject<UBlackboardKeyType_Object>(void)

void NewObject<UBlackboardKeyType_Object>(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 142edd630 FUN_142edd630 body=75 status=ok
// SIG undefined FUN_142edd630(void)

void FUN_142edd630(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FWeakObjectPtr::Get();
  uVar2 = FUN_14178ac60(plVar1,*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000142edd674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x208))(plVar1,uVar2,param_2);
  return;
}



// FUNCTION 142edd680 TFunction<void___cdecl(void)> body=185 status=ok
// SIG undefined TFunction<void___cdecl(void)>(void)

undefined8 *
TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
          (undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
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
      pcVar1 = (code *)*param_2;
      goto LAB_142edd715;
    }
  }
  pcVar1 = FUN_1406a5e50;
LAB_142edd715:
  *param_1 = pcVar1;
  *param_2 = FUN_1406a5e50;
  return param_1;
}



// FUNCTION 142edd740 FUN_142edd740 body=212 status=ok
// SIG undefined FUN_142edd740(void)

undefined8 * FUN_142edd740(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = 0;
  FString::FString(param_1 + 1);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x60,param_1 + 6);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_145993198;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_3);
  }
  param_1[4] = UE4Function_Private::
               TFunctionRefCaller<<lambda_50573a4081bc06268289253819177437>,void___cdecl(void)>::
               Call;
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



// FUNCTION 142edd820 FUN_142edd820 body=666 status=ok
// SIG undefined FUN_142edd820(void)

longlong FUN_142edd820(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  FText::FText(param_1 + 0x108);
  *(undefined1 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  FText::FText(param_1 + 0x138);
  *(undefined1 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined1 *)(param_1 + 0x16c) = 1;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined2 *)(param_1 + 0x180) = 0x100;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined2 *)(param_1 + 0x198) = 0x100;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(longlong **)(param_1 + 0x1d0) = DAT_1469eb140;
  plVar1 = DAT_1469eb140;
  puVar2 = (undefined8 *)FName::FName(local_res8,"NormalText",1);
  local_res10 = *puVar2;
  local_res18 = local_res10;
  lVar3 = (**(code **)(*plVar1 + 0x80))(plVar1,DAT_1469eb158);
  if (lVar3 == 0) {
    lVar3 = FUN_141835350();
  }
  *(longlong *)(param_1 + 0x1d8) = lVar3;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined1 *)(param_1 + 0x1f0) = 1;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x20c) = 1;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined1 *)(param_1 + 0x224) = 1;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined1 *)(param_1 + 0x239) = 0;
  *(undefined1 *)(param_1 + 0x23b) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined1 *)(param_1 + 0x264) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(undefined1 *)(param_1 + 0x27c) = 1;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  return param_1;
}



// FUNCTION 142eddac0 FUN_142eddac0 body=144 status=ok
// SIG undefined FUN_142eddac0(void)

undefined8 * FUN_142eddac0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 << 3);
  }
  FText::FText(param_1 + 2,param_2 + 2);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)((longlong)param_1 + 0x39) = *(undefined1 *)((longlong)param_2 + 0x39);
  return param_1;
}



// FUNCTION 142eddb50 FUN_142eddb50 body=186 status=ok
// SIG undefined FUN_142eddb50(void)

undefined8 * FUN_142eddb50(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar4 = *(int *)(param_2 + 2);
  lVar1 = param_2[1];
  *(int *)(param_1 + 2) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1 + 1,iVar4,0);
    puVar3 = (undefined8 *)param_1[1];
    puVar2 = (undefined8 *)(lVar1 + 8);
    do {
      *puVar3 = puVar2[-1];
      puVar3[1] = *puVar2;
      lVar1 = puVar2[1];
      puVar3[2] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      puVar3 = puVar3 + 3;
      puVar2 = puVar2 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)((longlong)param_2 + 0x19);
  return param_1;
}



// FUNCTION 142eddc10 FUN_142eddc10 body=91 status=ok
// SIG undefined FUN_142eddc10(void)

longlong FUN_142eddc10(longlong param_1)

{
  FName::FName(param_1,&DAT_143f3eda8,1);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xc) = 0;
  FName::FName(param_1 + 0x10,&DAT_143f3eda8,1);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return param_1;
}



// FUNCTION 142eddc70 FUN_142eddc70 body=193 status=ok
// SIG undefined FUN_142eddc70(void)

undefined8 * FUN_142eddc70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1459920e8;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x2c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 4,0);
  }
  if ((undefined2 *)param_1[4] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[4] = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  if ((*(int *)((longlong)param_1 + 0x54) < 0) && (*(int *)((longlong)param_1 + 0x54) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 9,0);
  }
  if ((undefined2 *)param_1[9] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[9] = 0;
  }
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 142eddd40 FUN_142eddd40 body=209 status=ok
// SIG undefined FUN_142eddd40(void)

undefined4 * FUN_142eddd40(undefined4 *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  if (*param_2 != 0) {
    puVar5 = (undefined8 *)FUN_1420392d0(*param_2,local_18,L"textField");
    *(undefined8 *)(param_1 + 2) = *puVar5;
    plVar3 = (longlong *)puVar5[1];
    plVar6 = *(longlong **)(param_1 + 4);
    if (plVar3 != plVar6) {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar6 = *(longlong **)(param_1 + 4);
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
      *(longlong **)(param_1 + 4) = plVar3;
    }
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_10 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    return param_1;
  }
  return param_1;
}



// FUNCTION 142edde20 FUN_142edde20 body=70 status=ok
// SIG undefined FUN_142edde20(void)

undefined8 * FUN_142edde20(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UWidget::UWidget(param_1,uVar1);
  *param_1 = &PTR__scalar_deleting_destructor__1459920f0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  return param_1;
}



// FUNCTION 142edde70 FUN_142edde70 body=333 status=ok
// SIG undefined FUN_142edde70(void)

void FUN_142edde70(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  
  plVar5 = (longlong *)param_1[0x1e];
  iVar6 = (int)param_1[0x1f];
  plVar7 = plVar5;
  if (plVar5 == (longlong *)0x0) {
    plVar7 = param_1;
  }
  if (iVar6 != 0) {
    do {
      plVar5 = (longlong *)plVar7[9];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar5)(plVar5);
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
      plVar5 = (longlong *)plVar7[7];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar5)(plVar5);
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
      plVar5 = (longlong *)plVar7[5];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar5)(plVar5);
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
      if (plVar7[2] != 0) {
        FMemory::Free();
      }
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 10;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar5 = (longlong *)param_1[0x1e];
  }
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 142eddfc0 FUN_142eddfc0 body=96 status=ok
// SIG undefined FUN_142eddfc0(void)

void FUN_142eddfc0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142ede020 FUN_142ede020 body=459 status=ok
// SIG undefined FUN_142ede020(void)

void FUN_142ede020(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x290);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x280);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x268);
  plVar4 = *(longlong **)(param_1 + 600);
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
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x240);
  if (*(char *)(param_1 + 0x23b) != '\0') {
    *(undefined1 *)(param_1 + 0x23b) = 0;
  }
  if (*(char *)(param_1 + 0x239) != '\0') {
    *(undefined1 *)(param_1 + 0x239) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x228);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x210);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1f8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1c0);
  plVar4 = *(longlong **)(param_1 + 0x1b8);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1a0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x188);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x170);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x158);
  plVar4 = *(longlong **)(param_1 + 0x140);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x128);
  plVar4 = *(longlong **)(param_1 + 0x110);
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
  FUN_140456c70(param_1);
  return;
}



// FUNCTION 142ede1f0 FUN_142ede1f0 body=108 status=ok
// SIG undefined FUN_142ede1f0(void)

void FUN_142ede1f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x338) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FMemory::Free();
  }
  FUN_142edde70(param_1 + 0x218);
  *(undefined ***)(param_1 + 0x208) = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 0x210) != '\0')) {
    UGCObjectReferencer::RemoveObject();
  }
  FUN_1417f85e0(param_1);
  return;
}



// FUNCTION 142ede260 FUN_142ede260 body=197 status=ok
// SIG undefined FUN_142ede260(void)

longlong FUN_142ede260(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (*param_2 != 0) {
    puVar5 = (undefined8 *)FUN_1420392d0(*param_2,local_18,L"textField");
    *(undefined8 *)(param_1 + 8) = *puVar5;
    plVar3 = (longlong *)puVar5[1];
    plVar6 = *(longlong **)(param_1 + 0x10);
    if (plVar3 != plVar6) {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar6 = *(longlong **)(param_1 + 0x10);
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
      *(longlong **)(param_1 + 0x10) = plVar3;
    }
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_10 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    return param_1;
  }
  return param_1;
}



// FUNCTION 142ede330 FUN_142ede330 body=197 status=ok
// SIG undefined FUN_142ede330(void)

longlong FUN_142ede330(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (*param_2 != 0) {
    puVar5 = (undefined8 *)FUN_1420392d0(*param_2,local_18,L"textField");
    *(undefined8 *)(param_1 + 8) = *puVar5;
    plVar3 = (longlong *)puVar5[1];
    plVar6 = *(longlong **)(param_1 + 0x10);
    if (plVar3 != plVar6) {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar6 = *(longlong **)(param_1 + 0x10);
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
      *(longlong **)(param_1 + 0x10) = plVar3;
    }
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_10 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    return param_1;
  }
  return param_1;
}



// FUNCTION 142ede400 FUN_142ede400 body=182 status=ok
// SIG undefined FUN_142ede400(void)

void FUN_142ede400(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 local_18;
  longlong *local_10;
  
  uVar4 = *(undefined4 *)(param_2 + 0x110);
  cVar7 = (**(code **)(**(longlong **)*param_1 + 0x60))(*(longlong **)*param_1,uVar4);
  if (cVar7 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142ede43a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)*param_1 + 0x68))(*(longlong **)*param_1,uVar4);
    return;
  }
  local_18 = *(undefined8 *)(param_1[2] + 0x78);
  local_10 = *(longlong **)(param_1[2] + 0x80);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  FUN_1418c3710(param_1[1],uVar4,&local_18,2);
  plVar6 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return;
}



// FUNCTION 142ede4c0 FUN_142ede4c0 body=667 status=ok
// SIG undefined FUN_142ede4c0(void)

longlong * FUN_142ede4c0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  undefined1 local_88 [24];
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [8];
  longlong local_30;
  
  plVar8 = (longlong *)param_1[3];
  plVar9 = (longlong *)0x0;
  iVar11 = (int)plVar8[1];
  iVar5 = iVar11 + -1;
  plVar6 = plVar9;
  iVar7 = -1;
  if (-1 < iVar5) {
    lVar10 = (longlong)iVar5;
    do {
      iVar7 = iVar5;
      plVar6 = *(longlong **)(*plVar8 + lVar10 * 8);
      if (plVar6 != (longlong *)0x0) {
        if ((plVar6[7] == 0) || (plVar6[7] != *(longlong *)param_1[1])) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          if ((-1 < iVar7) && (iVar7 < iVar11)) {
            bVar1 = true;
            goto LAB_142ede536;
          }
          break;
        }
      }
      iVar5 = iVar7 + -1;
      lVar10 = lVar10 + -1;
      plVar6 = (longlong *)0x0;
      iVar7 = -1;
    } while (-1 < lVar10);
  }
  bVar1 = false;
LAB_142ede536:
  if (!bVar1) {
    return plVar6;
  }
  iVar5 = (iVar11 - iVar7) + -1;
  if (iVar5 != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar8 + (longlong)iVar7 * 8),(void *)(*plVar8 + (longlong)(iVar7 + 1) * 8)
               ,(longlong)iVar5 << 3);
    iVar11 = (int)plVar8[1];
  }
  *(int *)(plVar8 + 1) = iVar11 + -1;
  TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar8);
  if (plVar6 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  if (plVar6[5] == 0) {
    return plVar6;
  }
  if (plVar6[6] == 0) {
    return plVar6;
  }
  lVar10 = (**(code **)(*plVar6 + 0x278))(plVar6);
  plVar8 = *(longlong **)param_1[1];
  if (plVar8 != (longlong *)0x0) {
    lVar3 = UPawnAction_Sequence::StaticClass();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142ede609;
  }
  plVar8 = plVar9;
LAB_142ede609:
  if ((lVar10 != 0) && (plVar8 != (longlong *)0x0)) {
    lVar10 = *(longlong *)(lVar10 + 0x10);
    local_58 = 0;
    local_50 = 0;
    local_70 = 0xffffffff;
    local_6c = 0;
    local_60 = 0;
    if (lVar10 == 0) {
      local_60 = 0;
    }
    else {
      uVar4 = FSoftObjectPath::FSoftObjectPath(local_88,lVar10);
      FSoftObjectPath::operator=(&local_60,uVar4);
      FWeakObjectPtr::operator=(&local_70,lVar10);
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      local_6c = CONCAT44(DAT_1464b56f4,(undefined4)local_6c);
    }
    uVar4 = FWeakObjectPtr::Get(*param_1 + 0x30);
    (**(code **)(*plVar8 + 0x298))(plVar8,local_48,uVar4);
    cVar2 = FSoftObjectPath::operator==(&local_60,local_38);
    if (cVar2 == '\0') {
      plVar6[5] = 0;
      plVar6[6] = 0;
      plVar6[7] = 0;
      if (local_30 != 0) {
        FMemory::Free();
      }
      if (local_58 == 0) {
        return plVar6;
      }
      FMemory::Free();
      return plVar6;
    }
    if (local_30 != 0) {
      FMemory::Free();
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
  }
  if (plVar6[5] != 0) {
    plVar9 = (longlong *)plVar6[6];
  }
  uVar4 = FWeakObjectPtr::Get(*param_1 + 0x30);
  cVar2 = (**(code **)(*plVar9 + 0xa8))(plVar9,*(undefined4 *)param_1[2],uVar4,*param_1);
  if (cVar2 == '\0') {
    plVar6[5] = 0;
    plVar6[6] = 0;
    plVar6[7] = 0;
  }
  return plVar6;
}



// FUNCTION 142ede760 FUN_142ede760 body=338 status=ok
// SIG undefined FUN_142ede760(void)

longlong * FUN_142ede760(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar1 = (longlong *)FUN_142ee7390(*param_1,*(undefined8 *)param_1[1],0);
  if (((plVar1 != (longlong *)0x0) && (plVar1[5] != 0)) && (plVar1[6] != 0)) {
    FUN_142f025f0(*param_1,plVar1);
    plVar4 = (longlong *)0x0;
    *(undefined1 *)(*param_1 + 0xac) = 0;
    if ((plVar1[5] != 0) && (plVar1[6] != 0)) {
      (**(code **)(*(longlong *)plVar1[6] + 0x28))();
      plVar3 = plVar4;
      if (plVar1[5] != 0) {
        plVar3 = (longlong *)plVar1[6];
      }
      (**(code **)(*plVar3 + 0x30))();
      if (plVar1[5] != 0) {
        plVar4 = (longlong *)plVar1[6];
      }
      (**(code **)(*plVar4 + 0x38))();
    }
    if (*(char *)(*param_1 + 0xac) == '\0') {
      FUN_142ee16e0(*param_1,plVar1);
      if (*(char *)(*param_1 + 0xac) == '\0') {
        return plVar1;
      }
      lVar2 = (**(code **)(*plVar1 + 0x278))(plVar1);
      plVar3 = *(longlong **)(*param_1 + 0x40);
      plVar4 = plVar3 + *(int *)(*param_1 + 0x48);
      for (; plVar3 != plVar4; plVar3 = plVar3 + 1) {
        if ((*plVar3 != 0) && (lVar2 == *(longlong *)(*plVar3 + 0x28))) {
          return plVar1;
        }
      }
    }
    else {
      lVar2 = (**(code **)(*plVar1 + 0x278))(plVar1);
      plVar3 = *(longlong **)(*param_1 + 0x40);
      plVar4 = plVar3 + *(int *)(*param_1 + 0x48);
      for (; plVar3 != plVar4; plVar3 = plVar3 + 1) {
        if ((*plVar3 != 0) && (lVar2 == *(longlong *)(*plVar3 + 0x28))) {
          return plVar1;
        }
      }
    }
    plVar1[5] = 0;
    plVar1[6] = 0;
  }
  return plVar1;
}



// FUNCTION 142ede8c0 FUN_142ede8c0 body=272 status=ok
// SIG undefined FUN_142ede8c0(void)

void FUN_142ede8c0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if (param_2 != 0) {
    lVar1 = *param_1;
    if (*(char *)(lVar1 + 1) != '\0') {
      local_88 = *(undefined4 *)(lVar1 + 8);
      uStack_84 = *(undefined4 *)(lVar1 + 0xc);
      uStack_80 = *(undefined4 *)(lVar1 + 0x10);
      uStack_7c = *(undefined4 *)(lVar1 + 0x14);
      local_78 = *(undefined1 *)(lVar1 + 0x18);
      local_70 = *(undefined8 *)(lVar1 + 0x20);
      local_68 = *(longlong *)(lVar1 + 0x28);
      if (local_68 != 0) {
        LOCK();
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
        UNLOCK();
      }
      FUN_142130380(param_2,&local_88);
    }
    if (*(char *)(*param_1 + 2) != '\0') {
      *(undefined4 *)(param_2 + 0x1c8) = *(undefined4 *)(*param_1 + 0x30);
      local_60 = *(undefined8 *)(param_2 + 0x180);
      local_50 = *(undefined4 *)(param_2 + 400);
      uStack_4c = *(undefined4 *)(param_2 + 0x194);
      uStack_48 = *(undefined4 *)(param_2 + 0x198);
      uStack_44 = *(undefined4 *)(param_2 + 0x19c);
      local_58 = *(undefined8 *)(param_2 + 0x188);
      local_40 = *(undefined4 *)(param_2 + 0x1a0);
      uStack_3c = *(undefined4 *)(param_2 + 0x1a4);
      uStack_38 = *(undefined4 *)(param_2 + 0x1a8);
      uStack_34 = *(undefined4 *)(param_2 + 0x1ac);
      local_30 = *(undefined8 *)(param_2 + 0x1b0);
      local_28 = *(longlong *)(param_2 + 0x1b8);
      if (local_28 != 0) {
        LOCK();
        *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
        UNLOCK();
      }
      local_20 = *(undefined8 *)(param_2 + 0x1c0);
      local_18 = *(undefined4 *)(param_2 + 0x1c8);
      local_14 = *(undefined1 *)(param_2 + 0x1cc);
      FUN_1421316c0(param_2,&local_60);
    }
  }
  return;
}



// FUNCTION 142ede9d0 FUN_142ede9d0 body=577 status=ok
// SIG undefined FUN_142ede9d0(void)

void FUN_142ede9d0(longlong *param_1)

{
  char cVar1;
  float fVar2;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  uint local_90;
  ulonglong local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  uint local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *local_38;
  uint local_30;
  double local_28;
  undefined8 local_20;
  
  if (*param_1 == 0) {
    return;
  }
  cVar1 = FUN_142045be0();
  if (cVar1 == '\0') {
    return;
  }
  local_90 = 5;
  local_28 = 0.0;
  local_58 = 0;
  local_50 = local_20;
  local_88 = 0;
  local_a8 = 0xffffffffffffffff;
  uStack_a0 = 0xffffffffffffffff;
  local_98 = (longlong *)0x0;
  local_78 = 0xffffffffffffffff;
  uStack_70 = 0xffffffffffffffff;
  local_68 = (longlong *)0x0;
  local_60 = 5;
  cVar1 = FUN_1420458d0(*param_1,"getTextFormat",&local_a8,&local_78,1);
  if (cVar1 == '\0') goto LAB_142edebb5;
  local_28 = 0.0;
  local_48 = 0xffffffffffffffff;
  uStack_40 = 0xffffffffffffffff;
  local_38 = (longlong *)0x0;
  local_30 = 5;
  cVar1 = (**(code **)(*local_98 + 0x20))
                    (local_98,local_88,&DAT_145992c70,&local_48,((byte)local_90 & 0x8f) == 10);
  if ((cVar1 != '\0') && (((byte)local_30 & 0x8f) != 1)) {
    if ((local_90 & 0x8f) == 3) {
      fVar2 = (float)(int)local_88;
joined_r0x000142edeb20:
      if (1e-08 < ABS(fVar2)) goto LAB_142edeb36;
    }
    else if ((local_90 & 0x8f) == 4) {
      fVar2 = (float)(local_88 & 0xffffffff);
      goto joined_r0x000142edeb20;
    }
    if (1e-08 < ABS((float)local_28)) {
LAB_142edeb36:
      if ((local_30 >> 6 & 1) != 0) {
        (**(code **)(*local_38 + 0x10))(local_38,&local_48,local_28);
        local_38 = (longlong *)0x0;
      }
      local_30 = 0;
      if ((local_60 >> 6 & 1) != 0) {
        (**(code **)(*local_68 + 0x10))(local_68,&local_78,local_58);
        local_68 = (longlong *)0x0;
      }
      local_60 = 0;
      if ((local_90 >> 6 & 1) == 0) {
        return;
      }
      (**(code **)(*local_98 + 0x10))(local_98,&local_a8,local_88);
      return;
    }
  }
  if ((local_30 >> 6 & 1) != 0) {
    (**(code **)(*local_38 + 0x10))(local_38,&local_48,local_28);
  }
LAB_142edebb5:
  if ((local_60 >> 6 & 1) != 0) {
    (**(code **)(*local_68 + 0x10))(local_68,&local_78,local_58);
    local_68 = (longlong *)0x0;
  }
  local_60 = 0;
  if ((local_90 >> 6 & 1) != 0) {
    (**(code **)(*local_98 + 0x10))(local_98,&local_a8,local_88);
  }
  return;
}



// FUNCTION 142edec20 FUN_142edec20 body=409 status=ok
// SIG undefined FUN_142edec20(void)

void FUN_142edec20(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    plVar8 = (longlong *)0x0;
    iVar2 = *(int *)(lVar5 + 0xc);
    plVar6 = plVar8;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar7 = iVar2 >> 0x1f & 0xffff;
      uVar4 = iVar2 + uVar7;
      plVar6 = (longlong *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
               (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18);
    }
    if ((*(uint *)(plVar6 + 1) & 0x30000000) == 0) {
      lVar5 = *param_1;
      AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x30));
      LOCK();
      *(undefined4 *)(lVar5 + 0x38) = 1;
      UNLOCK();
      lVar5 = *param_1;
      *(longlong *)(lVar5 + 0x40) = param_1[2];
      *(longlong *)(lVar5 + 0x48) = param_1[3];
      *(longlong *)(*param_1 + 0x28) = param_1[2];
      lVar5 = *param_1;
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x30));
      LOCK();
      *(undefined4 *)(lVar5 + 0x38) = 0;
      UNLOCK();
      lVar5 = *param_1;
      AcquireSRWLockShared((PSRWLOCK)(lVar5 + 0x30));
      LOCK();
      piVar1 = (int *)(lVar5 + 0x3c);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      lVar5 = *param_1;
      if (*(longlong *)(lVar5 + 0x28) != 0) {
        plVar6 = plVar8;
        if ((*(longlong *)(lVar5 + 0x50) != 0) && (*(longlong *)(lVar5 + 0x58) != 0)) {
          plVar6 = (longlong *)(**(code **)(**(longlong **)(lVar5 + 0x58) + 0xf0))();
          lVar5 = *param_1;
        }
        FUN_142f27960(*(undefined8 *)(lVar5 + 0x28),lVar5,plVar6);
        lVar5 = *param_1;
      }
      plVar6 = plVar8;
      if (*(longlong *)(lVar5 + 0x40) != 0) {
        plVar6 = *(longlong **)(lVar5 + 0x48);
      }
      if (plVar6 != (longlong *)0x0) {
        plVar6 = plVar8;
        if ((*(longlong *)(lVar5 + 0x50) != 0) && (*(longlong *)(lVar5 + 0x58) != 0)) {
          plVar6 = (longlong *)(**(code **)(**(longlong **)(lVar5 + 0x58) + 0xf0))();
          lVar5 = *param_1;
        }
        if (*(longlong *)(lVar5 + 0x40) != 0) {
          plVar8 = *(longlong **)(lVar5 + 0x48);
        }
        (**(code **)(*plVar8 + 0x10))(plVar8,lVar5,plVar6);
        lVar5 = *param_1;
      }
      ReleaseSRWLockShared((PSRWLOCK)(lVar5 + 0x30));
      LOCK();
      *(int *)(lVar5 + 0x3c) = *(int *)(lVar5 + 0x3c) + -1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 142ededc0 FUN_142ededc0 body=171 status=ok
// SIG undefined FUN_142ededc0(void)

void FUN_142ededc0(longlong *param_1)

{
  undefined8 *puVar1;
  longlong local_res8;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if (*(longlong **)(*param_1 + 0x180) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(*param_1 + 0x180) + 0x280))();
    local_res8 = *param_1;
    if (*(longlong *)(local_res8 + 0x188) != 0) {
      local_28 = 0;
      local_18 = 0;
      puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
      if (puVar1 != (undefined8 *)0x0) {
        puVar1[1] = local_res8;
        *puVar1 = &PTR_FUN_143f77b70;
      }
      local_58[0] = &LAB_142ee37d0;
      FUN_14208c5d0(*param_1,local_58);
      local_res8 = *param_1;
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (local_res8 + 0x170,&local_res8);
  }
  return;
}



// FUNCTION 142edee70 FUN_142edee70 body=150 status=ok
// SIG undefined FUN_142edee70(void)

void FUN_142edee70(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 1);
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      FUN_142ee8d70(*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 142edef10 FUN_142edef10 body=204 status=ok
// SIG undefined FUN_142edef10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142edef10(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_54 = (undefined4)param_1[1];
  local_50 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_58);
  FUN_14172a400(local_58);
  cVar3 = FWeakObjectPtr::IsValid(&local_54);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_54);
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar7;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) & 0x30000000) == 0) {
      puVar6 = (undefined8 *)FUN_142086190(*param_1,local_48);
      lVar5 = *param_1;
      uVar2 = puVar6[1];
      *(undefined8 *)(lVar5 + 0x40) = *puVar6;
      *(undefined8 *)(lVar5 + 0x48) = uVar2;
      uVar2 = puVar6[3];
      *(undefined8 *)(lVar5 + 0x50) = puVar6[2];
      *(undefined8 *)(lVar5 + 0x58) = uVar2;
      uVar2 = puVar6[5];
      *(undefined8 *)(lVar5 + 0x60) = puVar6[4];
      *(undefined8 *)(lVar5 + 0x68) = uVar2;
    }
  }
  return;
}



// FUNCTION 142edefe0 FUN_142edefe0 body=160 status=ok
// SIG undefined FUN_142edefe0(void)

void FUN_142edefe0(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 8);
  local_res14 = *(undefined4 *)(param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if (((*(uint *)(lVar4 + 8) & 0x30000000) == 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
      FUN_142f27b40(*(longlong *)(param_1 + 0x40),*(undefined1 *)(param_1 + 0x50));
      return;
    }
  }
  return;
}



// FUNCTION 142edf080 FUN_142edf080 body=254 status=ok
// SIG undefined FUN_142edf080(void)

void FUN_142edf080(undefined8 param_1,longlong param_2,float param_3,float param_4,char param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 local_res10 [24];
  
  if ((param_2 != 0) && (lVar1 = UImage::GetDynamicMaterial(param_2), lVar1 != 0)) {
    uVar3 = 0;
    if (0.0 <= param_3) {
      if (1.0 <= param_3) {
        param_3 = 1.0;
      }
    }
    else {
      param_3 = 0.0;
    }
    if (0.0 <= param_4) {
      if (1.0 <= param_4) {
        param_4 = 1.0;
      }
    }
    else {
      param_4 = 0.0;
    }
    if (param_5 != '\0') {
      uVar3 = 0x3f800000;
    }
    puVar2 = (undefined8 *)FName::FName(local_res10,"Direction",1);
    FUN_1425a2750(lVar1,*puVar2,uVar3);
    puVar2 = (undefined8 *)FName::FName(local_res10,"Percent",1);
    FUN_1425a2750(lVar1,*puVar2,param_3);
    puVar2 = (undefined8 *)FName::FName(local_res10,"DeltaPercent",1);
    FUN_1425a2750(lVar1,*puVar2,param_4);
  }
  return;
}



// FUNCTION 142edf180 FUN_142edf180 body=132 status=ok
// SIG undefined FUN_142edf180(void)

void FUN_142edf180(longlong *param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = UProgressBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      param_1 = (longlong *)*param_1;
      iVar1 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
      }
      *(longlong *)(*param_1 + (longlong)iVar1 * 8) = param_2;
    }
  }
  return;
}



// FUNCTION 142edf210 FUN_142edf210 body=1016 status=ok
// SIG undefined FUN_142edf210(void)

void FUN_142edf210(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  undefined2 *puVar12;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong *local_138;
  uint local_130;
  undefined *local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong *local_108;
  uint local_100;
  undefined *local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  uint local_d0;
  undefined1 local_c8;
  undefined7 uStack_c7;
  code *local_b8 [2];
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined4 local_78;
  undefined1 local_68 [80];
  
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 3);
  if (cVar5 != '\0') {
    lVar7 = FWeakObjectPtr::Get(param_1 + 3);
    lVar9 = 0;
    iVar3 = *(int *)(lVar7 + 0xc);
    lVar7 = lVar9;
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar11 = iVar3 >> 0x1f & 0xffff;
      uVar6 = iVar3 + uVar11;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
              (longlong)(int)((uVar6 & 0xffff) - uVar11) * 0x18;
    }
    if (((*(uint *)(lVar7 + 8) & 0x30000000) == 0) && (param_1[1] != 0)) {
      local_118 = 0xffffffffffffffff;
      uStack_110 = 0xffffffffffffffff;
      local_108 = (longlong *)0x0;
      local_100 = 0;
      cVar5 = FUN_14203acd0(param_1[1],"AutoSize",&local_118);
      puVar4 = PTR_s_shrink_14673cb38;
      if (cVar5 == '\0') {
        if ((local_100 >> 6 & 1) != 0) {
          (**(code **)(*local_108 + 0x10))(local_108,&local_118,local_f8);
          local_108 = (longlong *)0x0;
        }
        local_100 = 6;
        local_f8 = puVar4;
      }
      local_148 = 0xffffffffffffffff;
      uStack_140 = 0xffffffffffffffff;
      local_138 = (longlong *)0x0;
      local_130 = 0;
      cVar5 = FUN_14203acd0(param_1[1],"VerticalAlign",&local_148);
      puVar4 = PTR_DAT_14673cb18;
      if (cVar5 == '\0') {
        if ((local_130 >> 6 & 1) != 0) {
          (**(code **)(*local_138 + 0x10))(local_138,&local_148,local_128);
          local_138 = (longlong *)0x0;
        }
        local_130 = 6;
        local_128 = puVar4;
      }
      FUN_142eebf40(*param_1);
      plVar10 = *(longlong **)(*param_1 + 0x178);
      lVar7 = *(longlong *)(*param_1 + 0x170);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      if (lVar7 != 0) {
        if (*(longlong *)(*param_1 + 0x170) != 0) {
          FUN_142055240(*(longlong *)(*param_1 + 0x170),0);
        }
        local_d8 = (longlong *)0x0;
        local_e8 = 0xffffffffffffffff;
        uStack_e0 = 0xffffffffffffffff;
        local_d0 = 2;
        local_c8 = 1;
        FUN_142055740(lVar7,PTR_s_scaleform_gfx_Extensions_14673cb40,"enabled",&local_e8);
        if ((local_d0 >> 6 & 1) != 0) {
          (**(code **)(*local_d8 + 0x10))(local_d8,&local_e8,CONCAT71(uStack_c7,local_c8));
        }
        lVar7 = *param_1;
        if (*(longlong *)(lVar7 + 0x170) != 0) {
          FUN_1420520d0(*(longlong *)(lVar7 + 0x170),&local_118);
          lVar7 = *param_1;
        }
        if (*(longlong *)(lVar7 + 0x170) != 0) {
          FUN_1420560e0(*(longlong *)(lVar7 + 0x170),&local_148);
        }
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar10 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
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
      lVar7 = *param_1;
      if (*(longlong *)(lVar7 + 0x250) == 0) {
        local_88 = 0;
        local_78 = 0;
        puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
        if (puVar8 != (undefined8 *)0x0) {
          puVar8[1] = lVar7;
          *puVar8 = &PTR_FUN_143f77b70;
        }
        local_158 = 0;
        local_b8[0] = FUN_142ee3780;
        local_150 = 0x17;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
        FGenericPlatformString::Memcpy(local_158,L"GetInitialPositionTask",0x2e);
        FUN_142f0e370(*param_1 + 400,&local_158,local_b8);
        puVar8 = (undefined8 *)FUN_142037d70(*param_1 + 400,local_68);
        if (*(int *)(puVar8 + 8) != 0) {
          plVar10 = (longlong *)puVar8[6];
          if ((longlong *)puVar8[6] == (longlong *)0x0) {
            plVar10 = puVar8 + 2;
          }
          if (plVar10 != (longlong *)0x0) {
            lVar9 = (**(code **)(*plVar10 + 8))();
          }
        }
        (*(code *)*puVar8)(lVar9);
        if (*(int *)(puVar8 + 8) != 0) {
          plVar10 = (longlong *)puVar8[6];
          if ((longlong *)puVar8[6] == (longlong *)0x0) {
            plVar10 = puVar8 + 2;
          }
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x10))(plVar10,0);
          }
        }
        if (puVar8[6] != 0) {
          FMemory::Free();
        }
      }
      if ((local_130 >> 6 & 1) != 0) {
        (**(code **)(*local_138 + 0x10))(local_138,&local_148,local_128);
        local_138 = (longlong *)0x0;
      }
      local_130 = 0;
      if ((local_100 >> 6 & 1) != 0) {
        (**(code **)(*local_108 + 0x10))(local_108,&local_118,local_f8);
      }
    }
  }
  lVar7 = *param_1;
  if (*(int *)(lVar7 + 0x278) == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = *(undefined2 **)(lVar7 + 0x270);
  }
  FUN_142f0d6e0(lVar7,*(undefined4 *)(lVar7 + 0x268),puVar12);
  return;
}



// FUNCTION 142edf610 FUN_142edf610 body=1255 status=ok
// SIG undefined FUN_142edf610(void)

void FUN_142edf610(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_2 == 0) {
    return;
  }
  plVar1 = (longlong *)param_1[2];
  lVar2 = USoundWave::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
      != lVar2 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((bVar4) && (*(char *)(param_2 + 0x230) != '\0')) {
    FWeakObjectPtr::operator=(&local_48,0);
    FWeakObjectPtr::operator=(&uStack_40,0);
    FWeakObjectPtr::operator=(&local_38,0);
    FWeakObjectPtr::operator=(&uStack_30,0);
    if (*plVar1 != 0) {
      if ((*(int *)(param_2 + 0x280) == 0) && (*(int *)(param_2 + 0x284) == 0)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (!bVar4) {
        uVar3 = FUN_1420f6680();
        FWeakObjectPtr::operator=(&local_48,uVar3);
        FWeakObjectPtr::IsValid(&local_48);
      }
      if ((*(int *)(param_2 + 0x288) == 0) && (*(int *)(param_2 + 0x28c) == 0)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (!bVar4) {
        uVar3 = FUN_1420f6680(*plVar1);
        FWeakObjectPtr::operator=(&uStack_40,uVar3);
        FWeakObjectPtr::IsValid(&uStack_40);
      }
      if ((*(int *)(param_2 + 0x290) == 0) && (*(int *)(param_2 + 0x294) == 0)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (!bVar4) {
        uVar3 = FUN_1420f6680(*plVar1);
        FWeakObjectPtr::operator=(&local_38,uVar3);
        FWeakObjectPtr::IsValid(&local_38);
      }
      if ((*(int *)(param_2 + 0x298) == 0) && (*(int *)(param_2 + 0x29c) == 0)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (!bVar4) {
        uVar3 = FUN_1420f6680(*plVar1);
        FWeakObjectPtr::operator=(&uStack_30,uVar3);
        FWeakObjectPtr::IsValid(&uStack_30);
      }
    }
    local_28 = local_48;
    uStack_24 = uStack_44;
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
    local_18 = local_38;
    uStack_14 = uStack_34;
    uStack_10 = uStack_30;
    uStack_c = uStack_2c;
    FUN_142f05370(*param_1,param_2,&local_28);
    bVar4 = *(char *)(param_2 + 0x2a0) == '\0';
  }
  else {
    lVar2 = ACineCameraActor::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      if (*(char *)(param_2 + 0x8c1) == '\0') {
        return;
      }
      FWeakObjectPtr::operator=(&local_48,0);
      FWeakObjectPtr::operator=(&uStack_40,0);
      FWeakObjectPtr::operator=(&local_38,0);
      FWeakObjectPtr::operator=(&uStack_30,0);
      if (*plVar1 != 0) {
        if ((*(int *)(param_2 + 0x8c8) == 0) && (*(int *)(param_2 + 0x8cc) == 0)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (!bVar4) {
          uVar3 = FUN_1420f6680();
          FWeakObjectPtr::operator=(&local_48,uVar3);
          FWeakObjectPtr::IsValid(&local_48);
        }
        if ((*(int *)(param_2 + 0x8d0) == 0) && (*(int *)(param_2 + 0x8d4) == 0)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (!bVar4) {
          uVar3 = FUN_1420f6680(*plVar1);
          FWeakObjectPtr::operator=(&uStack_40,uVar3);
          FWeakObjectPtr::IsValid(&uStack_40);
        }
        if ((*(int *)(param_2 + 0x8d8) == 0) && (*(int *)(param_2 + 0x8dc) == 0)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (!bVar4) {
          uVar3 = FUN_1420f6680(*plVar1);
          FWeakObjectPtr::operator=(&local_38,uVar3);
          FWeakObjectPtr::IsValid(&local_38);
        }
        if ((*(int *)(param_2 + 0x8e0) == 0) && (*(int *)(param_2 + 0x8e4) == 0)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (!bVar4) {
          uVar3 = FUN_1420f6680(*plVar1);
          FWeakObjectPtr::operator=(&uStack_30,uVar3);
          FWeakObjectPtr::IsValid(&uStack_30);
        }
      }
      local_28 = local_48;
      uStack_24 = uStack_44;
      uStack_20 = uStack_40;
      uStack_1c = uStack_3c;
      local_18 = local_38;
      uStack_14 = uStack_34;
      uStack_10 = uStack_30;
      uStack_c = uStack_2c;
      FUN_142f05370(*param_1,param_2,&local_28);
      bVar4 = *(char *)(param_2 + 0x8e8) == '\0';
    }
    else {
      lVar2 = FUN_142f25530();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) {
        return;
      }
      if (*(char *)(param_2 + 0x1b9) == '\0') {
        return;
      }
      FWeakObjectPtr::operator=(&local_48,0);
      FWeakObjectPtr::operator=(&uStack_40,0);
      FWeakObjectPtr::operator=(&local_38,0);
      FWeakObjectPtr::operator=(&uStack_30,0);
      if (*plVar1 != 0) {
        if ((*(int *)(param_2 + 0x1c0) == 0) && (*(int *)(param_2 + 0x1c4) == 0)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (!bVar4) {
          uVar3 = FUN_1420f6680();
          FWeakObjectPtr::operator=(&local_48,uVar3);
          FWeakObjectPtr::IsValid(&local_48);
        }
        if ((*(int *)(param_2 + 0x1c8) == 0) && (*(int *)(param_2 + 0x1cc) == 0)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (!bVar4) {
          uVar3 = FUN_1420f6680(*plVar1);
          FWeakObjectPtr::operator=(&uStack_40,uVar3);
          FWeakObjectPtr::IsValid(&uStack_40);
        }
        if ((*(int *)(param_2 + 0x1d0) == 0) && (*(int *)(param_2 + 0x1d4) == 0)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (!bVar4) {
          uVar3 = FUN_1420f6680(*plVar1);
          FWeakObjectPtr::operator=(&local_38,uVar3);
          FWeakObjectPtr::IsValid(&local_38);
        }
        if ((*(int *)(param_2 + 0x1d8) == 0) && (*(int *)(param_2 + 0x1dc) == 0)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (!bVar4) {
          uVar3 = FUN_1420f6680(*plVar1);
          FWeakObjectPtr::operator=(&uStack_30,uVar3);
          FWeakObjectPtr::IsValid(&uStack_30);
        }
      }
      local_28 = local_48;
      uStack_24 = uStack_44;
      uStack_20 = uStack_40;
      uStack_1c = uStack_3c;
      local_18 = local_38;
      uStack_14 = uStack_34;
      uStack_10 = uStack_30;
      uStack_c = uStack_2c;
      FUN_142f05370(*param_1,param_2,&local_28);
      bVar4 = *(char *)(param_2 + 0x1e0) == '\0';
    }
  }
  if (!bVar4) {
    *(longlong *)param_1[1] = param_2;
  }
  return;
}



// FUNCTION 142edfb00 FUN_142edfb00 body=231 status=ok
// SIG undefined FUN_142edfb00(void)

void FUN_142edfb00(undefined8 param_1,longlong param_2,float param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float local_res10;
  float local_res14;
  
  if ((param_2 != 0) && (lVar1 = UImage::GetDynamicMaterial(param_2), lVar1 != 0)) {
    if (1e-08 < ABS(param_3)) {
      fVar5 = 1.0;
      lVar2 = UWidgetLayoutLibrary::SlotAsCanvasSlot(param_2);
      if (lVar2 != 0) {
        UCanvasPanelSlot::GetSize(lVar2,&local_res10);
        fVar5 = local_res10 / local_res14;
      }
      if (param_3 == 0.0) {
        param_3 = 0.0;
      }
      else {
        fVar4 = _guard_xfg_dispatch_icall_nop((param_3 + 90.0) * 0.017453292);
        param_3 = 1.0 / (fVar4 * fVar5);
      }
    }
    puVar3 = (undefined8 *)FName::FName(&local_res10,"Shear",1);
    FUN_1425a2750(lVar1,*puVar3,param_3);
  }
  return;
}



// FUNCTION 142edfbf0 FUN_142edfbf0 body=718 status=ok
// SIG undefined FUN_142edfbf0(void)

void FUN_142edfbf0(longlong *param_1)

{
  float *pfVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  DWORD DVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  double dVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar4 != '\0') {
    lVar7 = FWeakObjectPtr::Get(&local_res10);
    iVar2 = *(int *)(lVar7 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar9 = iVar2 >> 0x1f & 0xffff;
      uVar5 = iVar2 + uVar9;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar9) * 0x18;
    }
    else {
      lVar7 = 0;
    }
    if (((*(uint *)(lVar7 + 8) & 0x30000000) == 0) &&
       (lVar7 = FUN_1416f8720((int)param_1[2]), lVar7 != 0)) {
      lVar7 = *param_1;
      if (*(longlong *)(lVar7 + 0x170) == 0) {
        dVar11 = 0.0;
      }
      else {
        dVar11 = (double)FUN_14203af20(*(longlong *)(lVar7 + 0x170),"textHeight");
        pfVar1 = (float *)(lVar7 + 0x280);
        lVar7 = *param_1;
        dVar11 = dVar11 + (double)*pfVar1;
      }
      fVar15 = (float)dVar11;
      uVar13 = 0;
      fVar12 = 0.0;
      fVar14 = fVar15 - *(float *)(lVar7 + 0x260);
      if (*(longlong *)(lVar7 + 0x250) != 0) {
        lVar10 = lVar7 + 400;
        lVar8 = *(longlong *)(lVar7 + 0x250);
        if ((lVar8 != 0) && (cVar4 = FUN_140d022f0(lVar10), cVar4 == '\0')) {
          do {
            cVar4 = FUN_1415ad720(&DAT_1468e2448);
            if ((cVar4 == '\0') &&
               ((DAT_1468c21ae != '\0' && (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0))))
            {
              lVar8 = FUN_14203ca70();
              if (lVar8 != 0) {
                FUN_1420714f0(lVar8);
              }
            }
            else {
              FUN_142036de0();
            }
            cVar4 = FUN_140d022f0(lVar10);
            if ((cVar4 == '\0') && (*(longlong *)(lVar7 + 0x250) != 0)) {
              plVar3 = *(longlong **)(*(longlong *)(lVar7 + 0x250) + 0x50);
              (**(code **)(*plVar3 + 0x20))(plVar3,5,0);
            }
            cVar4 = FUN_140d022f0(lVar10);
          } while (cVar4 == '\0');
          lVar8 = *(longlong *)(lVar7 + 0x250);
        }
        cVar4 = *(char *)(lVar8 + 0x58);
        while (cVar4 == '\0') {
          (**(code **)(**(longlong **)(lVar8 + 0x50) + 0x20))
                    (*(longlong **)(lVar8 + 0x50),0x5d638865,0);
          cVar4 = *(char *)(lVar8 + 0x58);
        }
        uVar13 = *(undefined4 *)(lVar8 + 0x60);
        fVar12 = *(float *)(lVar8 + 100);
      }
      if (*(float *)(*param_1 + 0x260) <= fVar15 && fVar15 != *(float *)(*param_1 + 0x260)) {
        lVar7 = FUN_1416f8720((int)param_1[2]);
        if ((*(char *)(lVar7 + 0x321) == '\0') &&
           (lVar7 = FUN_1416f8720((int)param_1[2]), *(char *)(lVar7 + 0x338) == '\x01')) {
          fVar12 = (1.0 - *(float *)((longlong)param_1 + 0x14)) * fVar14 + fVar12;
        }
        else {
          fVar12 = fVar12 - fVar14 * *(float *)((longlong)param_1 + 0x14);
        }
      }
      FUN_14208ff10(*param_1,uVar13,fVar12);
    }
  }
  return;
}



// FUNCTION 142edfec0 FUN_142edfec0 body=226 status=ok
// SIG undefined FUN_142edfec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142edfec0(longlong *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_78 [32];
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  local_58 = *(float *)(lVar1 + 0x40);
  fStack_54 = *(float *)(lVar1 + 0x44);
  fStack_50 = *(float *)(lVar1 + 0x48);
  fStack_4c = *(float *)(lVar1 + 0x4c);
  fVar3 = *(float *)(lVar1 + 0x70);
  fVar4 = *(float *)(lVar1 + 0x74);
  fVar5 = *(float *)(lVar1 + 0x78);
  fVar6 = *(float *)(lVar1 + 0x7c);
  auVar2._4_4_ = -(uint)(fVar6 * fVar6 < fRam0000000146b3e234);
  auVar2._0_4_ = -(uint)(fVar6 * fVar6 < _DAT_146b3e230);
  auVar2._8_4_ = -(uint)(fVar6 * fVar6 < fRam0000000146b3e238);
  auVar2._12_4_ = -(uint)(fVar6 * fVar6 < fRam0000000146b3e23c);
  iVar7 = movmskps((int)local_28,auVar2);
  if (iVar7 != 0) {
    fVar10 = fStack_54 * fVar3;
    fVar11 = local_58 * fVar3;
    fVar8 = local_58 * fVar4;
    fVar9 = fStack_54 * fVar4;
    fVar12 = local_58 * fVar5;
    fVar13 = fStack_50 * fVar5;
    local_58 = fStack_4c * fVar3 * _DAT_146b3dee0 + fVar6 * local_58 +
               fStack_50 * fVar4 * _DAT_146b3ded0 + fStack_54 * fVar5 * _DAT_146b3dec0;
    fStack_54 = fStack_50 * fVar3 * fRam0000000146b3dee4 + fVar6 * fStack_54 +
                fStack_4c * fVar4 * fRam0000000146b3ded4 + fVar12 * fRam0000000146b3dec4;
    fStack_50 = fVar10 * fRam0000000146b3dee8 + fVar6 * fStack_50 + fVar8 * fRam0000000146b3ded8 +
                fStack_4c * fVar5 * fRam0000000146b3dec8;
    fStack_4c = fVar11 * fRam0000000146b3deec + fVar6 * fStack_4c + fVar9 * fRam0000000146b3dedc +
                fVar13 * fRam0000000146b3decc;
  }
  local_48 = *(float *)(lVar1 + 0x50) + *(float *)(lVar1 + 0x80);
  fStack_44 = *(float *)(lVar1 + 0x54) + *(float *)(lVar1 + 0x84);
  fStack_40 = *(float *)(lVar1 + 0x58) + *(float *)(lVar1 + 0x88);
  fStack_3c = *(float *)(lVar1 + 0x5c) + *(float *)(lVar1 + 0x8c);
  local_38 = *(float *)(lVar1 + 0x60) * *(float *)(lVar1 + 0x90);
  fStack_34 = *(float *)(lVar1 + 100) * *(float *)(lVar1 + 0x94);
  fStack_30 = *(float *)(lVar1 + 0x68) * *(float *)(lVar1 + 0x98);
  fStack_2c = *(float *)(lVar1 + 0x6c) * *(float *)(lVar1 + 0x9c);
  FUN_14208e4e0(lVar1,&local_58);
  return;
}



// FUNCTION 142edffb0 FUN_142edffb0 body=142 status=ok
// SIG undefined FUN_142edffb0(void)

void FUN_142edffb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  uVar3 = 0;
  uVar2 = uVar3;
  if (*(int *)(param_1 + 10) != 0) {
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 4;
    }
    if (plVar4 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar4 + 8))();
    }
  }
  uVar5 = (*(code *)param_1[2])(uVar2);
  puVar1 = *(undefined8 **)*param_1;
  *(undefined4 *)(puVar1 + 0xc) = uVar5;
  *(undefined1 *)(puVar1 + 0xb) = 1;
  (**(code **)(*(longlong *)puVar1[10] + 0x10))();
  if (*(int *)(puVar1 + 8) != 0) {
    plVar4 = (longlong *)puVar1[6];
    if ((longlong *)puVar1[6] == (longlong *)0x0) {
      plVar4 = puVar1 + 2;
    }
    if (plVar4 != (longlong *)0x0) {
      if (plVar4 != (longlong *)0x0) {
        uVar3 = (**(code **)(*plVar4 + 8))();
      }
      (*(code *)*puVar1)(uVar3);
    }
  }
  return;
}



// FUNCTION 142ee0040 FUN_142ee0040 body=520 status=ok
// SIG undefined FUN_142ee0040(void)

void FUN_142ee0040(longlong *param_1)

{
  char cVar1;
  float fVar2;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  uint local_90;
  ulonglong local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  uint local_60;
  double local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *local_38;
  uint local_30;
  undefined8 local_28;
  
  local_98 = (longlong *)0x0;
  local_58 = 0.0;
  local_28 = 0;
  local_88 = 0;
  local_a8 = 0xffffffffffffffff;
  uStack_a0 = 0xffffffffffffffff;
  local_90 = 5;
  local_48 = 0xffffffffffffffff;
  uStack_40 = 0xffffffffffffffff;
  local_38 = (longlong *)0x0;
  local_30 = 5;
  if ((param_1[1] == 0) || (*(longlong *)(*param_1 + 0x170) == 0)) goto LAB_142ee01ef;
  cVar1 = FUN_142045be0();
  if (cVar1 == '\0') goto LAB_142ee01ef;
  cVar1 = FUN_1420458d0(*(undefined8 *)(*param_1 + 0x170),"getTextFormat",&local_a8,&local_48,1);
  if (cVar1 == '\0') goto LAB_142ee01ef;
  local_58 = 0.0;
  local_78 = 0xffffffffffffffff;
  uStack_70 = 0xffffffffffffffff;
  local_68 = (longlong *)0x0;
  local_60 = 5;
  cVar1 = (**(code **)(*local_98 + 0x20))
                    (local_98,local_88,&DAT_145992c70,&local_78,((byte)local_90 & 0x8f) == 10);
  if ((cVar1 != '\0') && (((byte)local_60 & 0x8f) != 1)) {
    if ((local_90 & 0x8f) == 3) {
      fVar2 = (float)(int)local_88;
LAB_142ee018e:
      if (ABS(fVar2) <= 1e-08) {
        fVar2 = *(float *)(*param_1 + 0x264);
      }
      *(float *)(*param_1 + 0x264) = fVar2;
    }
    else if ((local_90 & 0x8f) == 4) {
      fVar2 = (float)(local_88 & 0xffffffff);
      goto LAB_142ee018e;
    }
    fVar2 = (float)local_58;
    if (ABS(fVar2) <= 1e-08) {
      fVar2 = *(float *)(*param_1 + 0x264);
    }
    *(float *)(*param_1 + 0x264) = fVar2;
  }
  if ((local_60 >> 6 & 1) != 0) {
    (**(code **)(*local_68 + 0x10))(local_68,&local_78,local_58);
  }
LAB_142ee01ef:
  if ((local_30 >> 6 & 1) != 0) {
    (**(code **)(*local_38 + 0x10))(local_38,&local_48,local_28);
    local_38 = (longlong *)0x0;
  }
  local_30 = 0;
  if ((local_90 >> 6 & 1) != 0) {
    (**(code **)(*local_98 + 0x10))(local_98,&local_a8,local_88);
  }
  return;
}



// FUNCTION 142ee0250 FUN_142ee0250 body=293 status=ok
// SIG undefined FUN_142ee0250(void)

void FUN_142ee0250(undefined8 *param_1)

{
  short sVar1;
  short sVar2;
  void *_Src;
  char cVar3;
  undefined8 *puVar4;
  short *psVar5;
  undefined2 *puVar6;
  longlong lVar7;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  if (*(char *)((longlong)param_1 + 0x29) == '\0') {
    puVar4 = (undefined8 *)FUN_140611130(param_1[1]);
    psVar5 = &DAT_143f3eda8;
    if (*(int *)(puVar4 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar4;
    }
    if (*(int *)(param_1 + 4) != 0) {
      psVar5 = (short *)param_1[3];
    }
    lVar7 = (longlong)puVar6 - (longlong)psVar5;
    do {
      sVar1 = *psVar5;
      sVar2 = *(short *)((longlong)psVar5 + lVar7);
      if (sVar1 != sVar2) break;
      psVar5 = psVar5 + 1;
    } while (sVar2 != 0);
    if (sVar1 == sVar2) {
      return;
    }
  }
  puVar4 = param_1 + 3;
  if (*(char *)(param_1 + 5) == '\0') {
    cVar3 = FUN_142055760(param_1[1],puVar4,1);
  }
  else {
    _Src = (void *)*puVar4;
    local_10 = *(int *)(param_1 + 4);
    lVar7 = (longlong)local_10;
    local_18 = (void *)0x0;
    if (local_10 == 0) {
      local_c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
      _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar7 * 2);
    }
    FUN_142f06cb0(*param_1,&local_18);
    cVar3 = FUN_142055930(param_1[1],puVar4,&local_18,1);
    if (local_18 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if (cVar3 == '\0') {
    return;
  }
  FUN_142f04670(*param_1);
  return;
}



// FUNCTION 142ee0380 FUN_142ee0380 body=410 status=ok
// SIG undefined FUN_142ee0380(void)

void FUN_142ee0380(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  double dVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar8;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) & 0x30000000) == 0) {
      lVar5 = FUN_1416f8720((int)param_1[2]);
      if (lVar5 != 0) {
        lVar5 = *param_1;
        lVar2 = *(longlong *)(lVar5 + 0x170);
        if (lVar2 == 0) {
          dVar9 = 0.0;
        }
        else {
          dVar9 = (double)FUN_14203af20(lVar2,"textHeight");
          dVar9 = dVar9 + (double)*(float *)(lVar5 + 0x280);
        }
        fVar12 = (float)dVar9;
        uVar6 = FUN_1416f8720((int)param_1[2]);
        uVar11 = 0x3f800000;
        if (1e-08 < ABS(fVar12)) {
          fVar10 = *(float *)(*param_1 + 0x260) / fVar12;
        }
        else {
          fVar10 = 1.0;
        }
        FUN_142f10880(uVar6,fVar10);
        lVar5 = FUN_1416f8720((int)param_1[2]);
        if ((*(char *)(lVar5 + 0x338) != '\x01') || (*(char *)(lVar5 + 0x321) != '\0')) {
          uVar11 = 0;
        }
        FUN_142f0fa80(lVar5,uVar11,0);
        plVar7 = (longlong *)FUN_1416f8720((int)param_1[2]);
        (**(code **)(*plVar7 + 0x278))
                  (plVar7,*(float *)(*param_1 + 0x260) <= fVar12 &&
                          fVar12 != *(float *)(*param_1 + 0x260));
        lVar5 = FUN_1416f8720((int)param_1[2]);
        FUN_142efd850(*param_1,*(undefined4 *)(lVar5 + 0x310));
      }
    }
  }
  return;
}



// FUNCTION 142ee0520 FUN_142ee0520 body=326 status=ok
// SIG undefined FUN_142ee0520(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_142ee0520(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [80];
  code *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar1 = *param_1;
  uVar2 = 0;
  if (*(int *)(lVar1 + 0x60) != 0) {
    plVar4 = *(longlong **)(lVar1 + 0x50);
    if (*(longlong **)(lVar1 + 0x50) == (longlong *)0x0) {
      plVar4 = (longlong *)(lVar1 + 0x30);
    }
    if (plVar4 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar4 + 8))();
    }
  }
  uVar5 = (**(code **)(lVar1 + 0x20))(uVar2);
  lVar1 = *param_1;
  local_78[0] = FUN_1406a5e50;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  lVar3 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_c8,local_78);
  FGenericPlatformMemory::MemswapGreaterThan8(lVar3,lVar1 + 0x20,0x50);
  if (*(int *)(lVar3 + 0x40) != 0) {
    plVar4 = *(longlong **)(lVar3 + 0x30);
    if (*(longlong **)(lVar3 + 0x30) == (longlong *)0x0) {
      plVar4 = (longlong *)(lVar3 + 0x10);
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (*(longlong *)(lVar3 + 0x30) != 0) {
    FMemory::Free();
  }
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
  return uVar5;
}



// FUNCTION 142ee0670 FUN_142ee0670 body=526 status=ok
// SIG undefined FUN_142ee0670(void)

void FUN_142ee0670(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_142ee4130(*param_1);
  iVar8 = *(int *)param_1[3];
  iVar2 = iVar8 + -1 + *(int *)param_1[1];
  iVar10 = *(int *)param_1[2];
  if (iVar2 <= *(int *)param_1[2]) {
    iVar10 = iVar2;
  }
  do {
    if (iVar10 < iVar8) {
      return;
    }
    plVar5 = (longlong *)param_1[4];
    iVar7 = 0;
    lVar3 = 0;
    lVar9 = *plVar5;
    iVar2 = *(int *)(lVar9 + 0x3a0);
    if (0 < iVar2) {
      piVar6 = (int *)(*(longlong *)(lVar9 + 0x398) + 0x28);
      do {
        if (*piVar6 == -1) {
          if ((-1 < iVar7) && (iVar7 < iVar2)) {
            iVar2 = *(int *)(lVar9 + 0x38c);
            lVar9 = lVar3 * 0x30 + *(longlong *)(lVar9 + 0x398);
            *(int *)(lVar9 + 0x28) = iVar8;
            *(int *)(lVar9 + 0x2c) = iVar8 - iVar2;
            cVar1 = FWeakObjectPtr::IsValid(lVar9 + 0x20);
            if ((cVar1 != '\0') && (*(longlong *)(lVar9 + 0x18) != 0)) {
              uVar4 = FWeakObjectPtr::Get(lVar9 + 0x20);
              FUN_142ee17b0(uVar4,*(undefined8 *)(lVar9 + 0x18));
              lVar3 = FWeakObjectPtr::Get(lVar9 + 0x20);
              *(undefined1 *)(*(longlong *)(lVar9 + 0x18) + 0x250) = *(undefined1 *)(lVar3 + 0x1c8);
            }
            lVar3 = *plVar5;
            iVar2 = *(int *)(lVar3 + 0x3b0);
            *(int *)(lVar3 + 0x3b0) = iVar2 + 1;
            if (*(int *)(lVar3 + 0x3b4) < iVar2 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar3 + 0x3a8,iVar2);
            }
            *(int *)(*(longlong *)(lVar3 + 0x3a8) + (longlong)iVar2 * 4) = iVar7;
            if (*(longlong *)(lVar9 + 0x18) != 0) {
              *(int *)(*(longlong *)(lVar9 + 0x18) + 0x2d8) = iVar8;
            }
            lVar3 = *plVar5;
            FUN_142eed030(lVar3,&local_48,*(undefined4 *)(lVar9 + 0x28));
            uStack_3c._0_3_ = CONCAT12(1,(undefined2)uStack_3c);
            if (((*(longlong *)(lVar3 + 0x328) != 0) &&
                (lVar9 = FWeakObjectPtr::Get(lVar3 + 800), lVar9 != 0)) &&
               (lVar9 = UObject::FindFunction(lVar9,*(undefined8 *)(lVar3 + 0x328)), lVar9 != 0)) {
              local_38 = local_48;
              uStack_34 = uStack_44;
              uStack_30 = uStack_40;
              uStack_2c = uStack_3c;
              plVar5 = (longlong *)FWeakObjectPtr::Get(lVar3 + 800);
              uVar4 = FUN_14178ac60(plVar5,*(undefined8 *)(lVar3 + 0x328));
              (**(code **)(*plVar5 + 0x208))(plVar5,uVar4,&local_38);
            }
          }
          break;
        }
        iVar7 = iVar7 + 1;
        lVar3 = lVar3 + 1;
        piVar6 = piVar6 + 0xc;
      } while (lVar3 < iVar2);
    }
    iVar8 = iVar8 + 1;
  } while( true );
}



// FUNCTION 142ee0880 FUN_142ee0880 body=366 status=ok
// SIG undefined FUN_142ee0880(void)

void FUN_142ee0880(undefined4 *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  undefined4 local_res8 [2];
  
  lVar3 = FUN_1416f8720(*param_1);
  if (lVar3 != 0) {
    local_res8[0] = 0xffffffff;
    uVar4 = FUN_1416f8720(*param_1);
    FUN_14170c210(local_res8,uVar4);
    lVar3 = FUN_1416f8720(local_res8[0]);
    cVar2 = FWeakObjectPtr::IsValid(lVar3 + 0x30);
    if (cVar2 != '\0') {
      lVar3 = FUN_1416f8720(local_res8[0]);
      lVar3 = FWeakObjectPtr::Get(lVar3 + 0x30);
      lVar3 = *(longlong *)(lVar3 + 0x508);
      if (lVar3 != 0) {
        lVar5 = ULocalPlayer::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          if ((*(uint *)(lVar3 + 8) >> 4 & 1) == 0) {
            lVar5 = *(longlong *)(lVar3 + 0x20);
          }
          else {
            lVar5 = 0;
          }
          if (lVar5 != 0) {
            lVar6 = FUN_1416f8720(local_res8[0]);
            plVar7 = (longlong *)FWeakObjectPtr::Get(lVar6 + 0x30);
            lVar6 = (**(code **)(*plVar7 + 0x148))(plVar7);
            if (((lVar6 != 0) && (lVar5 = FUN_1428761d0(lVar5,lVar6), lVar5 != 0)) &&
               (*(longlong *)(lVar5 + 0x240) != 0)) {
              plVar8 = (longlong *)UListView::OnItemSelectionChanged();
              plVar7 = (longlong *)*plVar8;
              for (plVar10 = plVar7; plVar10 != plVar7 + (int)plVar8[1]; plVar10 = plVar10 + 1) {
                if (*plVar10 == lVar3) {
                  iVar9 = (int)((longlong)plVar10 - (longlong)plVar7 >> 3);
                  goto LAB_142ee09b3;
                }
              }
            }
          }
        }
      }
    }
    iVar9 = -1;
LAB_142ee09b3:
    FUN_1416f8340(local_res8[0]);
    if (iVar9 == -1) {
      uVar4 = FUN_1416f8720(*param_1);
      FUN_142ee3cb0(uVar4);
      return;
    }
  }
  return;
}



// FUNCTION 142ee0a30 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FUpdateFleetPortSettingsAction::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  UE4Tuple_Private::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
  ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
            (param_1 + 3);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142ee0a80 FUN_142ee0a80 body=148 status=ok
// SIG undefined FUN_142ee0a80(void)

undefined8 * FUN_142ee0a80(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[3];
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
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142ee0b20 FUN_142ee0b20 body=43 status=ok
// SIG undefined FUN_142ee0b20(void)

undefined8 * FUN_142ee0b20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x308);
  }
  return param_1;
}



// FUNCTION 142ee0b50 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SEditableTextBox>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x500);
  }
  return param_1;
}



// FUNCTION 142ee0b80 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SSpinBox<double>_>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x530);
  }
  return param_1;
}



// FUNCTION 142ee0bb0 FUN_142ee0bb0 body=43 status=ok
// SIG undefined FUN_142ee0bb0(void)

undefined8 * FUN_142ee0bb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f4a7a0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 142ee0be0 FUN_142ee0be0 body=90 status=ok
// SIG undefined FUN_142ee0be0(void)

longlong FUN_142ee0be0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 142ee0c40 FUN_142ee0c40 body=78 status=ok
// SIG undefined FUN_142ee0c40(void)

undefined8 FUN_142ee0c40(undefined8 param_1,ulonglong param_2)

{
  FUN_140458b70();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x2f8);
  }
  return param_1;
}



// FUNCTION 142ee0c90 FUN_142ee0c90 body=78 status=ok
// SIG undefined FUN_142ee0c90(void)

undefined8 FUN_142ee0c90(undefined8 param_1,ulonglong param_2)

{
  FUN_142ede1f0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x350);
  }
  return param_1;
}



// FUNCTION 142ee0ce0 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 SImage::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  SConstraintCanvas::~SConstraintCanvas();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x240);
  }
  return param_1;
}



// FUNCTION 142ee0d30 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 SNotificationItemImpl::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1420d8980();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x4f0);
  }
  return param_1;
}



// FUNCTION 142ee0d80 `scalar_deleting_destructor' body=135 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMaterialExpressionSpriteTextureSampler::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x118);
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
  FUN_140458e30(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 142ee0e10 FUN_142ee0e10 body=105 status=ok
// SIG undefined FUN_142ee0e10(void)

undefined8 * FUN_142ee0e10(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 5);
  *param_1 = &PTR_FUN_144d6d5c0;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f4c8e0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142ee0e80 FUN_142ee0e80 body=93 status=ok
// SIG undefined FUN_142ee0e80(void)

longlong FUN_142ee0e80(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x510);
  FUN_1419a95d0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x520);
  }
  return param_1;
}



// FUNCTION 142ee0ee0 FUN_142ee0ee0 body=1662 status=ok
// SIG undefined FUN_142ee0ee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142ee0ee0(longlong *param_1,float param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  void *pvVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong *puVar10;
  void *pvVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  ushort uVar15;
  void **ppvVar16;
  float fVar17;
  undefined1 auStack_178 [32];
  void *local_158;
  int local_150;
  int local_14c;
  void *local_148;
  int local_140;
  int local_13c;
  longlong *local_138;
  void *local_130;
  undefined8 local_128;
  void *local_120;
  int local_118;
  int local_114;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [8];
  longlong *local_c0;
  void *local_a8;
  int local_a0 [2];
  void *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  ulonglong local_68 [6];
  
  local_68[0] = DAT_1468387a8 ^ (ulonglong)auStack_178;
  pvVar11 = (void *)0x0;
  iVar7 = 0;
  local_138 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b3e320) && (_Init_thread_header(&DAT_146b3e320), DAT_146b3e320 == -1))
  {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_110,&DAT_14598b3bc,L"GbxUILibrary",L"TrillionAbbreviation");
    puVar6 = (undefined8 *)FText::ToString(uVar5);
    local_a8 = (void *)0x0;
    local_a0[0] = *(int *)(puVar6 + 1);
    lVar12 = (longlong)local_a0[0];
    pvVar3 = (void *)*puVar6;
    if (local_a0[0] == 0) {
      local_a0[1] = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,local_a0[0],0);
      _guard_xfg_dispatch_icall_nop(local_a8,pvVar3,lVar12 * 2);
    }
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_108 + 1;
      lVar12 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar1 = (int *)((longlong)local_108 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_108 + 8))(local_108,1);
        }
      }
    }
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_f8,&DAT_14598b5d4,L"GbxUILibrary",L"BillionAbbreviation");
    puVar6 = (undefined8 *)FText::ToString(uVar5);
    local_98 = (void *)0x0;
    local_90 = *(int *)(puVar6 + 1);
    lVar12 = (longlong)local_90;
    pvVar3 = (void *)*puVar6;
    if (local_90 == 0) {
      local_8c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,local_90,0);
      _guard_xfg_dispatch_icall_nop(local_98,pvVar3,lVar12 * 2);
    }
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_f0 + 1;
      lVar12 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)local_f0 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_e0,&DAT_14598b6b4,L"GbxUILibrary",L"MillionAbbreviation");
    puVar6 = (undefined8 *)FText::ToString(uVar5);
    local_88 = (void *)0x0;
    local_80 = *(int *)(puVar6 + 1);
    lVar12 = (longlong)local_80;
    pvVar3 = (void *)*puVar6;
    if (local_80 == 0) {
      local_7c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,local_80,0);
      _guard_xfg_dispatch_icall_nop(local_88,pvVar3,lVar12 * 2);
    }
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_d8 + 1;
      lVar12 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar1 = (int *)((longlong)local_d8 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_d8 + 8))(local_d8,1);
        }
      }
    }
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_c8,&DAT_14598b724,L"GbxUILibrary",L"ThousandAbbreviation");
    puVar6 = (undefined8 *)FText::ToString(uVar5);
    local_78 = (void *)0x0;
    local_70 = *(int *)(puVar6 + 1);
    lVar12 = (longlong)local_70;
    pvVar3 = (void *)*puVar6;
    if (local_70 == 0) {
      local_6c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,local_70,0);
      _guard_xfg_dispatch_icall_nop(local_78,pvVar3,lVar12 * 2);
    }
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_c0 + 1;
      lVar12 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
    lVar12 = 4;
    DAT_146b3e310 = (undefined8 *)0x0;
    DAT_146b3e318 = 4;
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&DAT_146b3e310,4,0);
    ppvVar16 = &local_a8;
    iVar14 = 4;
    puVar6 = DAT_146b3e310;
    do {
      *puVar6 = 0;
      iVar9 = *(int *)(ppvVar16 + 1);
      pvVar3 = *ppvVar16;
      *(int *)(puVar6 + 1) = iVar9;
      if (iVar9 == 0) {
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar6,iVar9,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar6,pvVar3,(longlong)iVar9 * 2);
      }
      puVar6 = puVar6 + 2;
      ppvVar16 = ppvVar16 + 2;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    puVar10 = local_68;
    do {
      puVar2 = puVar10 + -2;
      puVar10 = puVar10 + -2;
      lVar12 = lVar12 + -1;
      if (*puVar2 != 0) {
        FMemory::Free();
      }
    } while (lVar12 != 0);
    atexit(FUN_143ec2030);
    _Init_thread_footer(&DAT_146b3e320);
    param_1 = local_138;
  }
  lVar12 = 1000000000000;
  uVar15 = 0;
  if (0 < DAT_146b3e318) {
    do {
      FString::PrintfImpl(&local_148,&DAT_14598b994,(double)param_2);
      puVar6 = DAT_146b3e310;
      lVar8 = (longlong)(param_2 / (float)lVar12);
      if (0 < lVar8) {
        fVar17 = (param_2 - (float)(lVar8 * lVar12)) * (10.0 / (float)lVar12);
        FString::PrintfImpl(&local_130,L"%.1f",
                            (double)((float)((int)ROUND(fVar17 + fVar17 + 0.5) >> 1) * 0.1 +
                                    (float)lVar8));
        plVar13 = puVar6 + (ulonglong)uVar15 * 2;
        iVar14 = (int)plVar13[1];
        if ((int)local_128 < 2) {
          pvVar3 = (void *)*plVar13;
          local_120 = (void *)0x0;
          local_118 = iVar14;
          if (iVar14 != 0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_120,iVar14,0);
            pvVar11 = local_120;
            _guard_xfg_dispatch_icall_nop(local_120,pvVar3,(longlong)iVar14 * 2);
            iVar14 = local_118;
            iVar7 = local_114;
          }
        }
        else {
          iVar9 = iVar14 + -1;
          if (iVar14 == 0) {
            iVar9 = 0;
          }
          if (((int)local_128 != 0) || (iVar7 = 1, iVar9 == 0)) {
            iVar7 = 0;
          }
          iVar14 = local_128._4_4_;
          iVar7 = iVar7 + (int)local_128;
          local_158 = local_130;
          local_130 = (void *)0x0;
          local_150 = (int)local_128;
          local_14c = local_128._4_4_;
          local_128 = 0;
          if (iVar14 < iVar7 + iVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_158);
          }
          iVar4 = local_150;
          local_138 = (longlong *)*plVar13;
          pvVar11 = local_158;
          iVar14 = local_150;
          iVar7 = local_14c;
          if (iVar9 != 0) {
            lVar12 = (longlong)local_150;
            local_150 = local_150 + (uint)(local_150 == 0) + iVar9;
            if (local_14c < local_150) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,iVar4);
            }
            iVar7 = local_14c;
            iVar14 = local_150;
            pvVar11 = local_158;
            pvVar3 = (void *)((longlong)local_158 + (lVar12 - (ulonglong)(iVar4 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar3,local_138,(longlong)iVar9 * 2);
            *(undefined2 *)((longlong)iVar9 * 2 + (longlong)pvVar3) = 0;
          }
        }
        if (local_148 != (void *)0x0) {
          FMemory::Free();
        }
        local_148 = pvVar11;
        local_140 = iVar14;
        local_13c = iVar7;
        if (local_130 != (void *)0x0) {
          FMemory::Free();
        }
        *param_1 = (longlong)local_148;
        *(int *)(param_1 + 1) = local_140;
        *(int *)((longlong)param_1 + 0xc) = local_13c;
        return param_1;
      }
      lVar12 = lVar12 / 1000;
      if (local_148 != (void *)0x0) {
        FMemory::Free();
      }
      uVar15 = uVar15 + 1;
    } while ((int)(uint)uVar15 < DAT_146b3e318);
  }
  FString::PrintfImpl(param_1,L"%.0f",(double)param_2);
  return param_1;
}



// FUNCTION 142ee1560 FUN_142ee1560 body=324 status=ok
// SIG undefined FUN_142ee1560(void)

ulonglong FUN_142ee1560(longlong param_1,char param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  char *pcVar6;
  byte bVar7;
  bool bVar8;
  
  bVar8 = false;
  if (param_2 == '\0') {
    if (param_1 != 0) {
      uVar2 = FUN_142f30760();
      plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_1,uVar2);
      in_RAX = 0;
      if (plVar3 != (longlong *)0x0) {
        in_RAX = (**(code **)(*plVar3 + 0x18))(plVar3);
        if (in_RAX != 0) {
          bVar8 = *(char *)(in_RAX + 0xb8) == '\x01';
          goto LAB_142ee15c3;
        }
      }
    }
    bVar8 = false;
  }
  else {
    if (param_2 == '\x01') {
      return in_RAX & 0xffffffffffffff00;
    }
    if (param_2 == '\x02') {
      bVar8 = true;
    }
  }
LAB_142ee15c3:
  uVar4 = (in_RAX >> 8) << 8;
  if (bVar8) {
    if (param_1 == 0) {
      pcVar6 = (char *)((in_RAX >> 8) << 8);
    }
    else {
      pcVar6 = (char *)(ulonglong)*(byte *)(param_1 + 0x908);
    }
    uVar4 = (ulonglong)pcVar6 & 0xff;
    if ((uint)uVar4 < 7) {
      pcVar6 = IMAGE_DOS_HEADER_140000000.e_magic +
               (&switchD_142ee1600::switchdataD_142ee16a4)[uVar4];
      switch(uVar4) {
      case 1:
switchD_142ee1600_caseD_1:
        return CONCAT71((int7)((ulonglong)pcVar6 >> 8),2);
      case 2:
switchD_142ee1600_caseD_2:
        return CONCAT71((int7)((ulonglong)pcVar6 >> 8),1);
      case 3:
switchD_142ee1600_caseD_3:
        return CONCAT71((int7)((ulonglong)pcVar6 >> 8),4);
      case 4:
switchD_142ee1600_caseD_4:
        return CONCAT71((int7)((ulonglong)pcVar6 >> 8),5);
      case 5:
switchD_142ee1600_caseD_5:
        return CONCAT71((int7)((ulonglong)pcVar6 >> 8),7);
      case 6:
switchD_142ee1600_caseD_6:
        return CONCAT71((int7)((ulonglong)pcVar6 >> 8),6);
      }
      if (param_1 != 0) {
        lVar5 = FUN_14270bb10(param_1);
        pcVar6 = (char *)0x0;
        if (lVar5 != 0) {
          if (*(uint *)(lVar5 + 0x108) < 8) {
            bVar7 = (&DAT_1468c21f8)[(int)*(uint *)(lVar5 + 0x108)];
          }
          else {
            bVar7 = 0;
          }
          uVar1 = bVar7 - 2;
          pcVar6 = (char *)(ulonglong)uVar1;
          if (uVar1 < 8) {
            pcVar6 = (char *)(longlong)(int)uVar1;
            switch(uVar1) {
            case 2:
              goto switchD_142ee1600_caseD_6;
            case 3:
            case 4:
              goto switchD_142ee1600_caseD_1;
            case 5:
              goto switchD_142ee1600_caseD_5;
            case 6:
              goto switchD_142ee1600_caseD_3;
            case 7:
              goto switchD_142ee1600_caseD_4;
            }
            goto switchD_142ee1600_caseD_2;
          }
        }
      }
    }
    uVar4 = CONCAT71((int7)((ulonglong)pcVar6 >> 8),3);
  }
  return uVar4;
}



// FUNCTION 142ee16e0 FUN_142ee16e0 body=197 status=ok
// SIG undefined FUN_142ee16e0(void)

void FUN_142ee16e0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 local_res10 [3];
  
  if (((param_2 != (longlong *)0x0) && (param_2[5] != 0)) && (param_2[6] != 0)) {
    (**(code **)(*(longlong *)param_2[6] + 0x58))();
    if (*(char *)(param_1 + 0xac) == '\0') {
LAB_142ee1759:
      if (param_2[5] == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = (longlong *)param_2[6];
      }
      (**(code **)(*plVar2 + 0xe0))(plVar2,*(undefined1 *)(param_1 + 0xb9));
    }
    else {
      lVar1 = (**(code **)(*param_2 + 0x278))(param_2);
      plVar3 = *(longlong **)(param_1 + 0x40);
      plVar2 = plVar3 + *(int *)(param_1 + 0x48);
      for (; plVar3 != plVar2; plVar3 = plVar3 + 1) {
        if ((*plVar3 != 0) && (lVar1 == *(longlong *)(*plVar3 + 0x28))) goto LAB_142ee1759;
      }
    }
    local_res10[0] = (**(code **)(*param_2 + 0x278))(param_2);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x138,local_res10);
  }
  return;
}



// FUNCTION 142ee17b0 FUN_142ee17b0 body=1093 status=ok
// SIG undefined FUN_142ee17b0(void)

void FUN_142ee17b0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *local_30;
  
  lVar9 = 0;
  if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_142ee185c:
    plVar8 = &local_68;
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    bVar5 = false;
    bVar11 = true;
    lVar10 = 0;
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (iVar7 < 1) goto LAB_142ee185c;
    local_90 = *(longlong **)(param_1 + 0x30);
    local_98 = 0;
    if (local_90 == (longlong *)0x0) {
LAB_142ee184d:
      plVar8 = &local_98;
      bVar5 = true;
      bVar11 = false;
      lVar10 = local_98;
    }
    else {
      LOCK();
      iVar7 = (int)local_90[1];
      bVar11 = iVar7 == 0;
      if (bVar11) {
        *(int *)(local_90 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
      while (!bVar11) {
        LOCK();
        bVar11 = iVar7 == (int)local_90[1];
        if (bVar11) {
          *(int *)(local_90 + 1) = iVar7 + 1;
        }
        UNLOCK();
        if (bVar11) {
          if (local_90 != (longlong *)0x0) {
            local_98 = *(longlong *)(param_1 + 0x28);
          }
          goto LAB_142ee184d;
        }
        LOCK();
        iVar7 = (int)local_90[1];
        bVar11 = iVar7 == 0;
        if (bVar11) {
          *(int *)(local_90 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
      }
      plVar8 = &local_98;
      local_90 = (longlong *)0x0;
      bVar5 = true;
      bVar11 = false;
      lVar10 = 0;
    }
  }
  plVar3 = (longlong *)plVar8[1];
  plVar8[1] = 0;
  plVar4 = plStack_60;
  *plVar8 = 0;
  if ((bVar11) && (plStack_60 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plStack_60 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_60)();
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_60 + 8))(plStack_60,1);
      }
    }
  }
  plVar8 = local_90;
  if ((bVar5) && (local_90 != (longlong *)0x0)) {
    LOCK();
    plVar4 = local_90 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_90)();
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  if (lVar10 == 0) goto LAB_142ee1b91;
  if (param_2 == 0) {
    plVar8 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar11 = true;
  }
  else {
    if ((*(longlong *)(param_2 + 0x28) == 0) || (*(longlong *)(param_2 + 0x30) == 0)) {
LAB_142ee19a7:
      plVar8 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar11 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_2 + 0x30) + 8);
      LOCK();
      iVar7 = *piVar1;
      if (iVar7 == 0) {
        *piVar1 = 0;
        iVar7 = 0;
      }
      UNLOCK();
      if (iVar7 < 1) goto LAB_142ee19a7;
      local_80 = *(longlong **)(param_2 + 0x30);
      local_88 = 0;
      if (local_80 == (longlong *)0x0) {
LAB_142ee1998:
        plVar8 = &local_88;
        bVar5 = true;
        bVar11 = false;
        lVar9 = local_88;
      }
      else {
        LOCK();
        iVar7 = (int)local_80[1];
        bVar11 = iVar7 == 0;
        if (bVar11) {
          *(int *)(local_80 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        while (!bVar11) {
          LOCK();
          bVar11 = iVar7 == (int)local_80[1];
          if (bVar11) {
            *(int *)(local_80 + 1) = iVar7 + 1;
          }
          UNLOCK();
          if (bVar11) {
            if (local_80 != (longlong *)0x0) {
              local_88 = *(longlong *)(param_2 + 0x28);
            }
            goto LAB_142ee1998;
          }
          LOCK();
          iVar7 = (int)local_80[1];
          bVar11 = iVar7 == 0;
          if (bVar11) {
            *(int *)(local_80 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
        plVar8 = &local_88;
        bVar5 = true;
        bVar11 = false;
        lVar9 = 0;
      }
    }
    local_78 = lVar9;
    local_70 = (longlong *)plVar8[1];
    plVar8[1] = 0;
    plVar4 = plStack_50;
    *plVar8 = 0;
    if ((bVar11) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar8 = plStack_50 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_50)();
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar8 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_80 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_80)();
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar11 = false;
    plVar8 = &local_78;
  }
  plVar4 = (longlong *)plVar8[1];
  plVar8[1] = 0;
  plVar2 = plStack_40;
  *plVar8 = 0;
  if ((bVar11) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plStack_40 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar8 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (lVar9 != 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_38 = lVar9;
    local_30 = plVar4;
    FUN_142027710(lVar10,&local_38);
    plVar8 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_30 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
LAB_142ee1b91:
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
  return;
}



// FUNCTION 142ee1c00 FUN_142ee1c00 body=483 status=ok
// SIG undefined FUN_142ee1c00(void)

void FUN_142ee1c00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
LAB_142ee1cad:
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
            goto LAB_142ee1cad;
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
      goto LAB_142ee1cd4;
    }
  }
  plVar7 = &local_38;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_142ee1cd4:
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
  if (lVar8 != 0) {
    FUN_142029190(lVar8,param_2,param_3,param_4);
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



// FUNCTION 142ee1df0 FUN_142ee1df0 body=260 status=ok
// SIG undefined FUN_142ee1df0(void)

void FUN_142ee1df0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if ((*param_2 != 0) && ((longlong *)param_2[1] != (longlong *)0x0)) {
    plVar3 = *(longlong **)(param_1 + 0x50);
    plVar5 = plVar3 + (longlong)*(int *)(param_1 + 0x58) * 2;
    plVar6 = (longlong *)0x0;
    for (; plVar3 != plVar5; plVar3 = plVar3 + 2) {
      plVar4 = plVar6;
      if (*plVar3 != 0) {
        plVar4 = (longlong *)plVar3[1];
      }
      if ((plVar4 == (longlong *)param_2[1]) && (*plVar3 == *param_2)) {
        return;
      }
    }
    if (*(int *)(param_1 + 0x58) == 0) {
      FUN_142ee2fb0(param_1);
    }
    iVar1 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = iVar1 + 1;
    if (*(int *)(param_1 + 0x5c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x50,iVar1);
    }
    plVar5 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x50));
    *plVar5 = 0;
    plVar5[1] = 0;
    *plVar5 = *param_2;
    plVar3 = plVar6;
    if (*param_2 != 0) {
      plVar3 = (longlong *)param_2[1];
    }
    plVar5[1] = (longlong)plVar3;
    if (*param_2 != 0) {
      plVar6 = (longlong *)param_2[1];
    }
    uVar2 = (**(code **)(*plVar6 + 0x28))(plVar6);
    FUN_142ee42e0(param_1,uVar2);
  }
  return;
}



// FUNCTION 142ee1f00 FUN_142ee1f00 body=204 status=ok
// SIG undefined FUN_142ee1f00(void)

undefined8 FUN_142ee1f00(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  plVar2 = (longlong *)FUN_142ee7390(param_1,param_2,1);
  if (((plVar2 != (longlong *)0x0) && (plVar2[5] != 0)) && (plVar2[6] != 0)) {
    (**(code **)(*(longlong *)plVar2[6] + 0x28))();
    if (plVar2[5] == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)plVar2[6];
    }
    (**(code **)(*plVar4 + 0x30))();
    if (plVar2[5] == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)plVar2[6];
    }
    (**(code **)(*plVar4 + 0x38))();
  }
  iVar1 = *(int *)(param_1 + 0x98);
  *(int *)(param_1 + 0x98) = iVar1 + 1;
  if (*(int *)(param_1 + 0x9c) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x90,iVar1);
  }
  *(longlong **)(*(longlong *)(param_1 + 0x90) + (longlong)iVar1 * 8) = plVar2;
  FUN_142f041e0(param_1);
  if (plVar2 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar2 + 0x278))(plVar2);
  }
  return uVar3;
}



// FUNCTION 142ee1fd0 FUN_142ee1fd0 body=88 status=ok
// SIG undefined FUN_142ee1fd0(void)

bool FUN_142ee1fd0(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146b3e270;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] != 0;
    }
  }
  return *piVar1 != 0;
}



// FUNCTION 142ee2030 FUN_142ee2030 body=115 status=ok
// SIG undefined FUN_142ee2030(void)

void FUN_142ee2030(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 1;
  local_18 = (undefined8 *)0x0;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_18,0);
  *local_18 = param_2;
  FUN_142ee20b0(param_1,&local_18,param_3,0,1);
  if (local_18 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ee20b0 FUN_142ee20b0 body=1300 status=ok
// SIG undefined FUN_142ee20b0(void)

void FUN_142ee20b0(longlong param_1,void **param_2,undefined8 param_3,char param_4,
                  undefined1 param_5)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  void *pvVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  void *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90;
  longlong local_88;
  undefined2 local_80;
  void *local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50;
  undefined8 local_48;
  undefined2 local_40;
  
  bVar6 = false;
  if (param_4 != '\0') {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x90));
    LOCK();
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
    UNLOCK();
    plVar14 = *(longlong **)(param_1 + 0x80);
    plVar13 = plVar14 + (longlong)*(int *)(param_1 + 0x88) * 6;
    for (; plVar14 != plVar13; plVar14 = plVar14 + 6) {
      if ((char)plVar14[2] != '\0') {
        if ((int)plVar14[1] == *(int *)(param_2 + 1)) {
          plVar12 = *param_2;
          bVar5 = true;
          plVar9 = plVar12 + *(int *)(param_2 + 1);
          if (plVar12 != plVar9) {
            plVar3 = (longlong *)*plVar14;
            do {
              if (plVar3 == plVar3 + (int)plVar14[1]) {
LAB_142ee218e:
                bVar5 = false;
                break;
              }
              plVar7 = plVar3;
              while (*plVar7 != *plVar12) {
                plVar7 = plVar7 + 1;
                if (plVar7 == plVar3 + (int)plVar14[1]) goto LAB_142ee218e;
              }
              plVar12 = plVar12 + 1;
            } while (plVar12 != plVar9);
          }
          if (bVar5) {
            local_b8 = (void *)0x0;
            local_b0 = 0;
            uVar8 = FUN_1404b03b0();
            FText::FText(local_a8,uVar8);
            local_90 = 0;
            local_88 = 0;
            local_80 = 1;
            if (&local_b8 != param_2) {
              iVar2 = *(int *)(param_2 + 1);
              pvVar4 = *param_2;
              local_b0 = CONCAT44(local_b0._4_4_,iVar2);
              if ((iVar2 == 0) && (local_b0._4_4_ == 0)) {
                local_b0 = 0;
              }
              else {
                TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                          (&local_b8,iVar2);
                _guard_xfg_dispatch_icall_nop(local_b8,pvVar4,(longlong)iVar2 << 3);
              }
            }
            FText::operator=(local_a8,param_3);
            local_88 = plVar14[3];
            local_80 = CONCAT11(local_80._1_1_,param_5);
            local_90 = 1;
            AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x70));
            LOCK();
            *(undefined4 *)(param_1 + 0x78) = 1;
            UNLOCK();
            iVar2 = *(int *)(param_1 + 0x68);
            *(int *)(param_1 + 0x68) = iVar2 + 1;
            if (*(int *)(param_1 + 0x6c) < iVar2 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
              ResizeGrow(param_1 + 0x60,iVar2);
            }
            pvVar4 = local_b8;
            puVar10 = (undefined8 *)((longlong)iVar2 * 0x40 + *(longlong *)(param_1 + 0x60));
            *puVar10 = 0;
            lVar11 = (longlong)(int)local_b0;
            *(int *)(puVar10 + 1) = (int)local_b0;
            if ((int)local_b0 == 0) {
              *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
            }
            else {
              TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                        (puVar10,local_b0 & 0xffffffff,0);
              _guard_xfg_dispatch_icall_nop((void *)*puVar10,pvVar4,lVar11 << 3);
            }
            FText::FText(puVar10 + 2,local_a8);
            *(undefined1 *)(puVar10 + 5) = local_90;
            puVar10[6] = local_88;
            *(undefined1 *)(puVar10 + 7) = (undefined1)local_80;
            *(undefined1 *)((longlong)puVar10 + 0x39) = local_80._1_1_;
            ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x70));
            LOCK();
            *(undefined4 *)(param_1 + 0x78) = 0;
            UNLOCK();
            if (local_88 != 0) {
              FUN_142f27a70(local_88,&local_b8);
              FUN_142f27b40(local_88,*(undefined1 *)(param_1 + 0xa0));
            }
            lVar11 = local_88;
            if (local_88 != 0) {
              uVar8 = UBlendableInterface::GetPrivateStaticClass();
              plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar11,uVar8);
              if (plVar9 != (longlong *)0x0) {
                (**(code **)(*plVar9 + 0x20))(plVar9,&local_b8,0);
                (**(code **)(*plVar9 + 0x18))(plVar9,*(undefined1 *)(param_1 + 0xa0));
              }
            }
            plVar9 = local_a0;
            bVar6 = true;
            if (local_a0 != (longlong *)0x0) {
              LOCK();
              plVar12 = local_a0 + 1;
              lVar11 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*local_a0)(local_a0);
                LOCK();
                piVar1 = (int *)((longlong)plVar9 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*plVar9 + 8))(plVar9,1);
                }
              }
            }
            if (local_b8 != (void *)0x0) {
              FMemory::Free();
            }
          }
        }
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x90));
    LOCK();
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
    UNLOCK();
    if (bVar6) {
      return;
    }
  }
  if ((*(longlong *)(param_1 + 0x28) != 0) ||
     ((*(longlong *)(param_1 + 0x40) != 0 && (*(longlong *)(param_1 + 0x48) != 0)))) {
    local_78 = (void *)0x0;
    local_70 = 0;
    uVar8 = FUN_1404b03b0();
    FText::FText(local_68,uVar8);
    local_50 = 0;
    local_48 = 0;
    local_40 = 1;
    if (&local_78 != param_2) {
      iVar2 = *(int *)(param_2 + 1);
      pvVar4 = *param_2;
      local_70 = CONCAT44(local_70._4_4_,iVar2);
      if ((iVar2 == 0) && (local_70._4_4_ == 0)) {
        local_70 = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_78,iVar2);
        _guard_xfg_dispatch_icall_nop(local_78,pvVar4,(longlong)iVar2 << 3);
      }
    }
    FText::operator=(local_68,param_3);
    local_40 = CONCAT11(local_40._1_1_,param_5);
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x70));
    LOCK();
    *(undefined4 *)(param_1 + 0x78) = 1;
    UNLOCK();
    iVar2 = *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x68) = iVar2 + 1;
    if (*(int *)(param_1 + 0x6c) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x60,iVar2);
    }
    pvVar4 = local_78;
    puVar10 = (undefined8 *)((longlong)iVar2 * 0x40 + *(longlong *)(param_1 + 0x60));
    *puVar10 = 0;
    lVar11 = (longlong)(int)local_70;
    *(int *)(puVar10 + 1) = (int)local_70;
    if ((int)local_70 == 0) {
      *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                (puVar10,local_70 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop((void *)*puVar10,pvVar4,lVar11 << 3);
    }
    FText::FText(puVar10 + 2,local_68);
    *(undefined1 *)(puVar10 + 5) = local_50;
    puVar10[6] = local_48;
    *(undefined1 *)(puVar10 + 7) = (undefined1)local_40;
    *(undefined1 *)((longlong)puVar10 + 0x39) = local_40._1_1_;
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x70));
    LOCK();
    *(undefined4 *)(param_1 + 0x78) = 0;
    UNLOCK();
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x30));
    LOCK();
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    UNLOCK();
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_142f27850(*(longlong *)(param_1 + 0x28),&local_78);
    }
    if ((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong *)(param_1 + 0x48) != 0)) {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x28))
                (*(longlong **)(param_1 + 0x48),&local_78);
    }
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x30));
    LOCK();
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
    UNLOCK();
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_60 + 1;
      lVar11 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
    if (local_78 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142ee25d0 FUN_142ee25d0 body=129 status=ok
// SIG undefined FUN_142ee25d0(void)

void FUN_142ee25d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 1;
  local_18 = (undefined8 *)0x0;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_18,0);
  *local_18 = param_2;
  FUN_142ee20b0(param_1,&local_18,param_3,1,param_4);
  if (local_18 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ee2660 FUN_142ee2660 body=438 status=ok
// SIG undefined FUN_142ee2660(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ee2660(undefined8 param_1,longlong param_2,float *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [16];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  ulonglong local_38;
  
  if (param_2 != 0) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
    FUN_142eb74e0(param_2,&local_98);
    local_68 = local_98;
    fStack_64 = fStack_94;
    fStack_60 = fStack_90;
    fStack_5c = fStack_8c;
    local_48 = local_78;
    fStack_44 = fStack_74;
    fStack_40 = fStack_70;
    fStack_3c = fStack_6c;
    fVar8 = (float)((int)ROUND(*param_3 + *param_3 + 0.5) >> 1);
    fVar7 = (float)((int)ROUND(param_3[1] + param_3[1] + 0.5) >> 1);
    iVar4 = (int)ROUND(param_3[2] + param_3[2] + 0.5) >> 1;
    fVar5 = (float)iVar4;
    if (((ABS(fVar8) <= 0.0001) && (ABS(fVar7) <= 0.0001)) && (ABS(fVar5) <= 0.0001)) {
      fVar8 = DAT_1468b5d90;
      fVar7 = DAT_1468b5d94;
      fVar5 = DAT_1468b5d98;
    }
    local_58._4_4_ = fVar5;
    local_58._0_4_ = fVar7;
    local_58._8_4_ = fVar8;
    local_58._12_4_ = 0;
    local_a8 = 0x38d1b717;
    auVar1._4_4_ = -(uint)(0.0001 < (float)((uint)(fVar5 - fStack_84) & uRam0000000146b3df44));
    auVar1._0_4_ = -(uint)(0.0001 < (float)((uint)(fVar7 - local_88) & _DAT_146b3df40));
    auVar1._8_4_ = -(uint)(0.0001 < (float)((uint)(fVar8 - fStack_80) & uRam0000000146b3df48));
    auVar1._12_4_ = -(uint)(0.0001 < (float)((uint)(0.0 - fStack_7c) & uRam0000000146b3df4c));
    iVar4 = movmskps(iVar4,auVar1);
    if (((iVar4 != 0) ||
        ((auVar2._4_4_ = -(uint)(0.0001 < (float)((uint)(fStack_94 - fStack_94) &
                                                 uRam0000000146b3df44)),
         auVar2._0_4_ = -(uint)(0.0001 < (float)((uint)(local_98 - local_98) & _DAT_146b3df40)),
         auVar2._8_4_ = -(uint)(0.0001 < (float)((uint)(fStack_90 - fStack_90) &
                                                uRam0000000146b3df48)),
         auVar2._12_4_ =
              -(uint)(0.0001 < (float)((uint)(fStack_8c - fStack_8c) & uRam0000000146b3df4c)),
         iVar4 = movmskps(0,auVar2), iVar4 != 0 &&
         (auVar3._4_4_ = -(uint)(0.0001 < (float)((uint)(fStack_94 + fStack_94) &
                                                 uRam0000000146b3df44)),
         auVar3._0_4_ = -(uint)(0.0001 < (float)((uint)(local_98 + local_98) & _DAT_146b3df40)),
         auVar3._8_4_ = -(uint)(0.0001 < (float)((uint)(fStack_90 + fStack_90) &
                                                uRam0000000146b3df48)),
         auVar3._12_4_ =
              -(uint)(0.0001 < (float)((uint)(fStack_8c + fStack_8c) & uRam0000000146b3df4c)),
         iVar4 = movmskps(iVar4,auVar3), iVar4 != 0)))) ||
       (auVar6._4_4_ = -(uint)(0.0001 < (float)((uint)(fStack_74 - fStack_74) & uRam0000000146b3df44
                                               )),
       auVar6._0_4_ = -(uint)(0.0001 < (float)((uint)(local_78 - local_78) & _DAT_146b3df40)),
       auVar6._8_4_ = -(uint)(0.0001 < (float)((uint)(fStack_70 - fStack_70) & uRam0000000146b3df48)
                             ),
       auVar6._12_4_ =
            -(uint)(0.0001 < (float)((uint)(fStack_6c - fStack_6c) & uRam0000000146b3df4c)),
       iVar4 = movmskps(0,auVar6), iVar4 != 0)) {
      FUN_142ed3fc0(param_2,&local_68);
    }
  }
  return;
}



// FUNCTION 142ee2820 FUN_142ee2820 body=1114 status=ok
// SIG undefined FUN_142ee2820(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ee2820(longlong param_1)

{
  PSRWLOCK pRVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  uint uVar13;
  longlong *plVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong *local_130;
  uint local_128;
  int iStack_124;
  longlong *local_120;
  undefined8 local_118;
  longlong *local_110;
  longlong *local_108;
  longlong *local_100;
  longlong local_f8;
  PSRWLOCK local_f0;
  longlong local_e8;
  code *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  pRVar1 = (PSRWLOCK)(param_1 + 0x20);
  local_f0 = pRVar1;
  local_e8 = param_1;
  AcquireSRWLockShared(pRVar1);
  plVar6 = (longlong *)0x0;
  uVar13 = 0;
  if ((*(char *)(param_1 + 0x39) == '\0') || (*(int *)(param_1 + 0x18) < 1)) {
    local_138 = 0;
  }
  else {
    local_138 = *(longlong *)
                 (*(longlong *)(param_1 + 0x10) + -8 + (longlong)*(int *)(param_1 + 0x18) * 8);
  }
  ReleaseSRWLockShared(pRVar1);
  if (local_138 != 0) {
    local_110 = *(longlong **)(param_1 + 0x28);
    local_130 = (longlong *)0x0;
    local_128 = 0;
    iStack_124 = 0;
    iVar10 = iStack_124;
    local_120 = (longlong *)0x0;
    local_100 = (longlong *)((longlong)*(int *)(param_1 + 0x30) & 0x1fffffffffffffff);
    if (local_110 + *(int *)(param_1 + 0x30) < local_110) {
      local_100 = plVar6;
    }
    local_118 = 0;
    local_108 = (longlong *)0x0;
    plVar12 = plVar6;
    uVar11 = uVar13;
    if (local_100 != (longlong *)0x0) {
      iStack_124 = 0;
      plVar9 = plVar6;
      plVar7 = plVar6;
      iVar8 = iStack_124;
      iStack_124 = iVar10;
      do {
        lVar2 = *local_110;
        if (lVar2 == 0) {
LAB_142ee297a:
          iVar10 = (int)plVar7;
          uVar13 = iVar10 + 1;
          local_118 = CONCAT44(local_118._4_4_,uVar13);
          if (local_118._4_4_ < (int)uVar13) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_120,plVar7);
            plVar12 = local_120;
            uVar13 = (uint)local_118;
          }
          plVar7 = (longlong *)(ulonglong)uVar13;
          plVar12[iVar10] = lVar2;
        }
        else {
          lVar3 = FUN_142edca80(local_138 + 0x40,lVar2);
          bVar16 = lVar3 != 0;
          if (*(char *)(local_138 + 0x39) != '\0') {
            if (*(char *)(local_138 + 0x39) != '\x01') goto LAB_142ee297a;
            bVar16 = !bVar16;
          }
          if (!bVar16) goto LAB_142ee297a;
          iVar10 = (int)plVar9;
          local_128 = iVar10 + 1;
          if (iVar8 < (int)local_128) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_130,plVar9);
            plVar6 = local_130;
            iVar8 = iStack_124;
          }
          plVar9 = (longlong *)(ulonglong)local_128;
          plVar6[iVar10] = lVar2;
        }
        uVar11 = (uint)plVar9;
        uVar13 = (uint)plVar7;
        local_110 = local_110 + 1;
        local_108 = (longlong *)((longlong)local_108 + 1);
      } while (local_108 != local_100);
    }
    plVar9 = (longlong *)0x0;
    plVar7 = (longlong *)
             ((ulonglong)((longlong)(plVar12 + (int)uVar13) + (7 - (longlong)plVar12)) >> 3);
    if (plVar12 + (int)uVar13 < plVar12) {
      plVar7 = plVar9;
    }
    plVar14 = plVar12;
    plVar15 = plVar9;
    if (plVar7 != (longlong *)0x0) {
      do {
        lVar2 = *plVar12;
        if (lVar2 != 0) {
          local_a8 = (longlong *)0x0;
          local_98 = 0;
          puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
          if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = &PTR_FUN_143f77b70;
            puVar4[1] = lVar2;
          }
          local_d8[0] = FUN_142ee3710;
          LOCK();
          bVar16 = *(int *)(lVar2 + 0xa8) == 0;
          if (bVar16) {
            *(int *)(lVar2 + 0xa8) = 0;
          }
          UNLOCK();
          if (bVar16) {
            FUN_14208d480(lVar2,local_d8);
          }
          else {
            if (local_98 != 0) {
              plVar6 = local_c8;
              if (local_a8 != (longlong *)0x0) {
                plVar6 = local_a8;
              }
              if (plVar6 != (longlong *)0x0) {
                uVar5 = (**(code **)(*plVar6 + 8))();
                (*local_d8[0])(uVar5);
                goto LAB_142ee2a8c;
              }
            }
            FUN_142ee3710(0);
          }
LAB_142ee2a8c:
          if (local_98 != 0) {
            plVar6 = local_c8;
            if (local_a8 != (longlong *)0x0) {
              plVar6 = local_a8;
            }
            if (plVar6 != (longlong *)0x0) {
              (**(code **)(*plVar6 + 0x10))(plVar6,0);
            }
          }
          if (local_a8 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
        plVar12 = plVar12 + 1;
        plVar15 = (longlong *)((longlong)plVar15 + 1);
        plVar6 = local_130;
        plVar14 = local_120;
        uVar11 = local_128;
      } while (plVar15 != plVar7);
    }
    plVar12 = (longlong *)
              ((ulonglong)((longlong)(plVar6 + (int)uVar11) + (7 - (longlong)plVar6)) >> 3);
    if (plVar6 + (int)uVar11 < plVar6) {
      plVar12 = plVar9;
    }
    plVar7 = plVar6;
    plVar15 = plVar9;
    if (plVar12 != (longlong *)0x0) {
      do {
        lVar2 = *plVar6;
        if (lVar2 != 0) {
          local_58 = (longlong *)0x0;
          local_48 = 0;
          puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_78);
          if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = &PTR_FUN_143f77b70;
            puVar4[1] = lVar2;
          }
          local_88[0] = FUN_142ee3690;
          LOCK();
          bVar16 = *(int *)(lVar2 + 0xa8) == 0;
          if (bVar16) {
            *(int *)(lVar2 + 0xa8) = 0;
          }
          UNLOCK();
          if (bVar16) {
            FUN_14208d480(lVar2,local_88);
          }
          else {
            if (local_48 != 0) {
              plVar7 = local_78;
              if (local_58 != (longlong *)0x0) {
                plVar7 = local_58;
              }
              if (plVar7 != (longlong *)0x0) {
                uVar5 = (**(code **)(*plVar7 + 8))();
                (*local_88[0])(uVar5);
                goto LAB_142ee2b90;
              }
            }
            FUN_142ee3690(0);
          }
LAB_142ee2b90:
          if (local_48 != 0) {
            plVar7 = local_78;
            if (local_58 != (longlong *)0x0) {
              plVar7 = local_58;
            }
            if (plVar7 != (longlong *)0x0) {
              (**(code **)(*plVar7 + 0x10))(plVar7,0);
            }
          }
          if (local_58 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
        plVar6 = plVar6 + 1;
        plVar15 = (longlong *)((longlong)plVar15 + 1);
        plVar7 = local_130;
        plVar14 = local_120;
      } while (plVar15 != plVar12);
    }
    pRVar1 = local_f0;
    AcquireSRWLockShared(local_f0);
    lVar2 = local_e8;
    if (1 < *(int *)(local_e8 + 0x18)) {
      plVar9 = *(longlong **)
                (*(longlong *)(local_e8 + 0x10) + -0x10 + (longlong)*(int *)(local_e8 + 0x18) * 8);
    }
    ReleaseSRWLockShared(pRVar1);
    local_f8 = local_138;
    local_100 = plVar9;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar2,&local_100);
    if (plVar14 != (longlong *)0x0) {
      FMemory::Free(plVar14);
    }
    if (plVar7 != (longlong *)0x0) {
      FMemory::Free(plVar7);
    }
  }
  return;
}



// FUNCTION 142ee2c80 FUN_142ee2c80 body=567 status=ok
// SIG undefined FUN_142ee2c80(void)

undefined8 *
FUN_142ee2c80(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7)

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
LAB_142ee2d22:
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
            goto LAB_142ee2d22;
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
      goto LAB_142ee2d49;
    }
  }
  plVar7 = &local_38;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_142ee2d49:
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
    FUN_14202b6f0(lVar8,param_2,param_3,param_4,param_5,param_6,param_7);
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



// FUNCTION 142ee2ec0 FUN_142ee2ec0 body=232 status=ok
// SIG undefined FUN_142ee2ec0(void)

void FUN_142ee2ec0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0xd0) != &local_18) {
    *(undefined8 *)(param_1 + 0xd0) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xd8,&local_10);
    plVar6 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  puVar5 = (undefined8 *)FName::FName(local_res8,L"GbxShiftOverlay",1);
  plVar6 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar5);
  if ((*(longlong *)(param_1 + 0xe8) != 0) && (plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0xf8))(plVar6,*(undefined8 *)(param_1 + 0xe8));
  }
  *(undefined8 *)(param_1 + 0xe8) = 0;
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 142ee2fb0 FUN_142ee2fb0 body=785 status=ok
// SIG undefined FUN_142ee2fb0(void)

void FUN_142ee2fb0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined1 local_98;
  undefined1 local_97;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  longlong *local_78;
  code *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  FUN_142ee40a0();
  lVar3 = *(longlong *)(param_1 + 0x78);
  if (lVar3 != 0) {
    if ((DAT_146b17150 != 0) && (*(longlong *)(DAT_146b17150 + 0x7b0) != 0)) {
      plVar13 = *(longlong **)(param_1 + 0x80);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
      }
      local_80 = lVar3;
      local_78 = plVar13;
      (**(code **)(**(longlong **)(DAT_146b17150 + 0x7b0) + 0x2a0))
                (*(longlong **)(DAT_146b17150 + 0x7b0),&local_80,0);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar13 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
    }
    local_98 = DAT_1464b9eeb;
    local_97 = 1;
    local_90 = 0;
    local_88 = 0;
    SLeafWidget::SetVisibility(*(undefined8 *)(param_1 + 0x78),&local_98);
  }
  local_38 = 0;
  local_28 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = param_1;
    *puVar5 = &PTR_FUN_143f77b70;
  }
  local_68[0] = FUN_142ee3890;
  FUN_14204c280(local_68);
  if (DAT_146b3de51 != '\0') {
    plVar13 = *(longlong **)(param_1 + 0xa0);
    plVar6 = plVar13 + (longlong)*(int *)(param_1 + 0xa8) * 4;
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 0;
    for (; plVar13 != plVar6; plVar13 = plVar13 + 4) {
      if (*plVar13 == DAT_146b3e2a0) {
        TArray<FKey,TSizedDefaultAllocator<32>_>::operator=(&local_a8,plVar13 + 1);
        break;
      }
    }
    plVar13 = *(longlong **)(param_1 + 0xa0);
    plVar6 = plVar13 + (longlong)*(int *)(param_1 + 0xa8) * 4;
    if (plVar13 != plVar6) {
      plVar12 = plVar13 + 1;
      iVar8 = local_a0;
      do {
        if ((*plVar13 == DAT_146b3e210) || (*plVar13 == DAT_146b3e218)) {
          if (plVar12 != &local_a8) {
            iVar10 = (int)plVar12[1];
            iVar9 = iVar8;
            if (iVar10 != 0) {
              plVar11 = (longlong *)(*plVar12 + 0x10);
              do {
                plVar4 = (longlong *)*plVar11;
                if (plVar4 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = plVar4 + 1;
                  lVar3 = *plVar2;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)lVar3 == 1) {
                    (**(code **)*plVar4)(plVar4);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar4 + 0xc);
                    iVar8 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar8 == 1) {
                      (**(code **)(*plVar4 + 8))(plVar4,1);
                    }
                  }
                }
                plVar11 = plVar11 + 3;
                iVar10 = iVar10 + -1;
                iVar9 = local_a0;
              } while (iVar10 != 0);
            }
            *(int *)(plVar12 + 1) = iVar9;
            iVar8 = iVar9;
            if ((iVar9 == 0) && (*(int *)((longlong)plVar12 + 0xc) == 0)) {
              *(undefined4 *)((longlong)plVar12 + 0xc) = 0;
            }
            else {
              TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar12,iVar9);
              puVar5 = (undefined8 *)*plVar12;
              if (iVar9 != 0) {
                puVar7 = (undefined8 *)(local_a8 + 8);
                do {
                  *puVar5 = puVar7[-1];
                  puVar5[1] = *puVar7;
                  lVar3 = puVar7[1];
                  puVar5[2] = lVar3;
                  if (lVar3 != 0) {
                    LOCK();
                    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
                    UNLOCK();
                  }
                  puVar5 = puVar5 + 3;
                  puVar7 = puVar7 + 3;
                  iVar9 = iVar9 + -1;
                  iVar8 = local_a0;
                } while (iVar9 != 0);
              }
            }
          }
          *plVar13 = DAT_146b3e2a0;
        }
        plVar13 = plVar13 + 4;
        plVar12 = plVar12 + 4;
      } while (plVar13 != plVar6);
    }
    TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
    ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(&local_a8);
  }
  return;
}



// FUNCTION 142ee32d0 FUN_142ee32d0 body=8 status=ok
// SIG undefined FUN_142ee32d0(void)

void FUN_142ee32d0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x339) = 1;
  return;
}



// FUNCTION 142ee32e0 FUN_142ee32e0 body=589 status=ok
// SIG undefined FUN_142ee32e0(void)

void FUN_142ee32e0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  wchar_t *pwVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  int *piVar10;
  wchar_t *pwVar11;
  int *piVar12;
  longlong local_res10;
  int local_28;
  int local_24;
  longlong local_20;
  
  FUN_142223710();
  pwVar11 = *(wchar_t **)(param_1 + 0x458);
  if (pwVar11 != (wchar_t *)0x0) {
    lVar6 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar11 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar11 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_142ee333d;
  }
  pwVar11 = (wchar_t *)0x0;
LAB_142ee333d:
  lVar6 = param_1 + 0x60c;
  FWeakObjectPtr::operator=(lVar6,pwVar11);
  cVar5 = FWeakObjectPtr::IsValid(lVar6);
  if (cVar5 != '\0') {
    lVar7 = FWeakObjectPtr::Get(lVar6);
    FWeakObjectPtr::operator=(param_1 + 0x61c,*(undefined8 *)(lVar7 + 0x488));
    lVar7 = FWeakObjectPtr::Get(lVar6);
    FWeakObjectPtr::operator=(param_1 + 0x614,*(undefined8 *)(lVar7 + 0x848));
    uVar8 = FWeakObjectPtr::Get(lVar6);
    cVar5 = FUN_142dd3d20(uVar8);
    *(char *)(param_1 + 0x608) = (cVar5 == '\0') + '\x01';
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&AGbxHUD::OnPrimaryCharacterChanged",L"::");
    pwVar11 = (wchar_t *)0x0;
    while (pwVar4 = pwVar9, pwVar4 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar11 = pwVar4;
    }
    FName::FName(&local_res10,pwVar11 + 2,1);
    lVar6 = FWeakObjectPtr::Get(lVar6);
    plVar1 = (longlong *)(lVar6 + 0x8c0);
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    FWeakObjectPtr::operator=(&local_28,param_1);
    local_20 = local_res10;
    if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_28), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_20);
    }
    piVar10 = (int *)*plVar1;
    iVar2 = *(int *)(lVar6 + 0x8c8);
    for (piVar12 = piVar10; piVar12 != piVar10 + (longlong)iVar2 * 4; piVar12 = piVar12 + 4) {
      if (((*piVar12 == local_28) && (piVar12[1] == local_24)) ||
         ((cVar5 = FWeakObjectPtr::IsValid(piVar12), cVar5 == '\0' &&
          (cVar5 = FWeakObjectPtr::IsValid(&local_28), cVar5 == '\0')))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((bVar3) && (*(longlong *)(piVar12 + 2) == local_20)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        if ((int)((longlong)piVar12 - (longlong)piVar10 >> 4) != -1) goto LAB_142ee350b;
        break;
      }
    }
    iVar2 = *(int *)(lVar6 + 0x8c8);
    *(int *)(lVar6 + 0x8c8) = iVar2 + 1;
    if (*(int *)(lVar6 + 0x8cc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    piVar10 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
    *piVar10 = local_28;
    piVar10[1] = local_24;
    *(longlong *)(piVar10 + 2) = local_20;
LAB_142ee350b:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
  }
  FUN_142f02af0(param_1);
  return;
}



// FUNCTION 142ee3530 FUN_142ee3530 body=8 status=ok
// SIG undefined FUN_142ee3530(void)

void FUN_142ee3530(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x339) = 2;
  return;
}



// FUNCTION 142ee3540 FUN_142ee3540 body=254 status=ok
// SIG undefined FUN_142ee3540(void)

void FUN_142ee3540(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  cVar2 = FUN_142ef5490();
  if (cVar2 != '\0') {
    plVar6 = *(longlong **)(param_1 + 0x50);
    bVar1 = false;
    plVar7 = plVar6 + (longlong)*(int *)(param_1 + 0x58) * 2;
    if (plVar6 != plVar7) {
      do {
        if (((*plVar6 != 0) && (plVar5 = (longlong *)plVar6[1], plVar5 != (longlong *)0x0)) &&
           (cVar2 = (**(code **)(*plVar5 + 0x38))(plVar5,*(undefined4 *)(param_2 + 8)),
           cVar2 != '\0')) {
          bVar1 = true;
          if (*plVar6 == 0) {
            plVar5 = (longlong *)0x0;
          }
          else {
            plVar5 = (longlong *)plVar6[1];
          }
          (**(code **)(*plVar5 + 0x10))(plVar5,param_2);
        }
        plVar6 = plVar6 + 2;
      } while (plVar6 != plVar7);
      if (bVar1) {
        return;
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x20);
    if (lVar4 != 0) {
      lVar3 = FUN_142937720();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) &&
         (lVar4 = UGameInstance::FindLocalPlayerFromControllerId(lVar4,*(undefined4 *)(param_2 + 8))
         , lVar4 == 0)) {
        FUN_142ee95f0(param_1 + 0x28,param_2);
      }
    }
  }
  return;
}



// FUNCTION 142ee3690 FUN_142ee3690 body=45 status=ok
// SIG undefined FUN_142ee3690(void)

void FUN_142ee3690(undefined8 *param_1)

{
  char cVar1;
  
  cVar1 = FUN_142ebd920(*param_1);
  if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142ee36b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x520))();
    return;
  }
  return;
}



// FUNCTION 142ee3710 FUN_142ee3710 body=13 status=ok
// SIG undefined FUN_142ee3710(void)

void FUN_142ee3710(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142ee3716. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x528))();
  return;
}



// FUNCTION 142ee3740 FUN_142ee3740 body=52 status=ok
// SIG undefined FUN_142ee3740(void)

void FUN_142ee3740(undefined4 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_1416f8720(*param_1);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1416f8720(*param_1);
                    /* WARNING: Could not recover jumptable at 0x000142ee3767. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x528))(plVar2);
    return;
  }
  return;
}



// FUNCTION 142ee3780 FUN_142ee3780 body=36 status=ok
// SIG undefined FUN_142ee3780(void)

longlong FUN_142ee3780(longlong param_1,undefined8 *param_2)

{
  FUN_142087ad0(*param_2,param_1,param_1 + 4);
  return param_1;
}



// FUNCTION 142ee37e0 FUN_142ee37e0 body=56 status=ok
// SIG undefined FUN_142ee37e0(void)

void FUN_142ee37e0(longlong *param_1)

{
  if ((*(byte *)(*param_1 + 0xcc) & 1) != 0) {
    FSlateApplication::SetCursorPos((int)DAT_1469f4590,(int)*param_1 + 0xc4);
    *(byte *)(*param_1 + 0xcc) = *(byte *)(*param_1 + 0xcc) & 0xfe;
  }
  return;
}



// FUNCTION 142ee3830 FUN_142ee3830 body=62 status=ok
// SIG undefined FUN_142ee3830(void)

void FUN_142ee3830(longlong *param_1)

{
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *(undefined8 *)(*param_1 + 0xd0);
  local_10 = *(longlong *)(*param_1 + 0xd8);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_1418c6b00(DAT_1469f4590,&local_18);
  return;
}



// FUNCTION 142ee3890 FUN_142ee3890 body=68 status=ok
// SIG undefined FUN_142ee3890(void)

void FUN_142ee3890(longlong *param_1)

{
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *(undefined8 *)(*param_1 + 0xd0);
  local_10 = *(longlong *)(*param_1 + 0xd8);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_1418bbaa0(DAT_1469f4590,&local_18,0xffffffff);
  return;
}



// FUNCTION 142ee38e0 FUN_142ee38e0 body=111 status=ok
// SIG undefined FUN_142ee38e0(void)

void FUN_142ee38e0(longlong *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_res8 [32];
  
  if ((*(byte *)(*param_1 + 0xcc) & 1) == 0) {
    puVar2 = (undefined8 *)(**(code **)(*DAT_1469f4590 + 0x48))(DAT_1469f4590,local_res8);
    *(undefined8 *)(*param_1 + 0xc4) = *puVar2;
    cVar1 = FWeakObjectPtr::IsValid(*param_1 + 0x30);
    if (cVar1 != '\0') {
      uVar3 = FWeakObjectPtr::Get(*param_1 + 0x30);
      FUN_142717c40(uVar3,0,0);
    }
    *(byte *)(*param_1 + 0xcc) = *(byte *)(*param_1 + 0xcc) | 1;
  }
  return;
}



// FUNCTION 142ee3990 FUN_142ee3990 body=17 status=ok
// SIG undefined FUN_142ee3990(void)

void FUN_142ee3990(longlong param_1)

{
  if (*(char *)(param_1 + 0xc0) != '\0') {
    *(undefined1 *)(param_1 + 0xc1) = 1;
  }
  return;
}



// FUNCTION 142ee39b0 FUN_142ee39b0 body=178 status=ok
// SIG undefined FUN_142ee39b0(void)

void FUN_142ee39b0(longlong param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x178) == '\0') {
    *(undefined1 *)(param_1 + 0x178) = 1;
    *(undefined4 *)(param_1 + 0x17c) = 0;
    return;
  }
  if (10.0 < *(float *)(param_1 + 0x17c)) {
    if (*(char *)(param_1 + 0x170) == '\x01') {
      FUN_142ee86c0(0x41200000,*(undefined8 *)(param_1 + 0x168));
      iVar1 = *(int *)(param_1 + 0x58);
      *(int *)(param_1 + 0x58) = iVar1 + 1;
      if (*(int *)(param_1 + 0x5c) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x50,iVar1);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar1 * 8) =
           *(undefined8 *)(param_1 + 0x168);
    }
    *(undefined4 *)(param_1 + 0x160) = 0;
    if (*(int *)(param_1 + 0x164) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x158,0);
      return;
    }
  }
  return;
}



// FUNCTION 142ee3a70 FUN_142ee3a70 body=483 status=ok
// SIG undefined FUN_142ee3a70(void)

void FUN_142ee3a70(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar9 = -1;
  iVar14 = 1;
  iVar11 = -1;
  iVar10 = iVar14;
  if (((param_2 == '\x02') || (iVar10 = iVar11, param_2 == '\x03')) &&
     (lVar2 = *(longlong *)(param_1 + 0x2c0), lVar2 != 0)) {
    lVar6 = FUN_142f320a0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (iVar1 = *(int *)(param_1 + 0x300), 0 < iVar1)) {
      iVar12 = 0;
      iVar13 = iVar11;
      if (0 < *(int *)(lVar2 + 0x60)) {
        plVar8 = *(longlong **)(lVar2 + 0x58);
        do {
          iVar13 = iVar12;
          if (*plVar8 == *(longlong *)(param_1 + 0x2f8)) break;
          iVar12 = iVar12 + 1;
          plVar8 = plVar8 + 6;
          iVar13 = iVar11;
        } while (iVar12 < *(int *)(lVar2 + 0x60));
      }
      iVar11 = iVar10;
      if (1 < iVar1) {
        do {
          iVar9 = (iVar11 + iVar1 + iVar13) % iVar1;
          if ((iVar9 < 0) || (*(int *)(lVar2 + 0x60) <= iVar9)) {
            bVar4 = false;
LAB_142ee3b8b:
            bVar5 = false;
            if (bVar4) goto LAB_142ee3b93;
          }
          else {
            bVar4 = true;
            if (*(longlong *)(*(longlong *)(lVar2 + 0x58) + 0x20 + (longlong)iVar9 * 0x30) == 0)
            goto LAB_142ee3b8b;
            bVar5 = true;
LAB_142ee3b93:
            lVar6 = (longlong)iVar9 * 0x30 + *(longlong *)(lVar2 + 0x58);
            if (*(longlong *)(lVar6 + 0x28) != 0) {
              lVar7 = FUN_142f32150();
              lVar6 = *(longlong *)(lVar6 + 0x28);
              for (lVar3 = lVar6; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
                if (lVar3 == lVar7) {
                  if (lVar6 != 0) {
                    bVar4 = true;
                    goto LAB_142ee3bd0;
                  }
                  break;
                }
              }
            }
          }
          bVar4 = false;
LAB_142ee3bd0:
          if ((bVar5) || (bVar4)) {
            if ((iVar9 < 0) || (*(int *)(lVar2 + 0x60) <= iVar9)) goto LAB_142ee3bf6;
            bVar4 = true;
            goto LAB_142ee3bf8;
          }
          iVar14 = iVar14 + 1;
          iVar1 = *(int *)(param_1 + 0x300);
          iVar11 = iVar11 + iVar10;
        } while (iVar14 < iVar1);
        iVar9 = -1;
      }
LAB_142ee3bf6:
      bVar4 = false;
LAB_142ee3bf8:
      if (bVar4) {
        FUN_142f12a10(param_1,*(undefined8 *)(*(longlong *)(lVar2 + 0x58) + (longlong)iVar9 * 0x30),
                      param_2);
      }
    }
  }
  return;
}



// FUNCTION 142ee3c60 FUN_142ee3c60 body=68 status=ok
// SIG undefined FUN_142ee3c60(void)

void FUN_142ee3c60(longlong param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x1c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
                    /* WARNING: Could not recover jumptable at 0x000142ee3c9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
  return;
}



// FUNCTION 142ee3cb0 FUN_142ee3cb0 body=440 status=ok
// SIG undefined FUN_142ee3cb0(void)

void FUN_142ee3cb0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if ((*(char *)(param_1 + 0xaf) == '\0') && (*(char *)(param_1 + 0xb0) == '\0')) {
    if (0 < *(int *)(param_1 + 0x48)) {
      FUN_142ee8180(param_1,*(undefined8 *)
                             (*(longlong *)(param_1 + 0x40) + -8 +
                             (longlong)*(int *)(param_1 + 0x48) * 8));
      iVar1 = *(int *)(param_1 + 0x48);
      while (0 < iVar1) {
        FUN_142ee86c0(param_1,*(undefined8 *)
                               (*(longlong *)(param_1 + 0x40) + -8 +
                               (longlong)*(int *)(param_1 + 0x48) * 8));
        LOCK();
        DAT_146ace8c0 = DAT_146ace8c0 + -1;
        UNLOCK();
        lVar2 = *(longlong *)
                 (*(longlong *)(param_1 + 0x40) + -8 + (longlong)*(int *)(param_1 + 0x48) * 8);
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x40);
        if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x28) != 0)) &&
           (*(longlong *)(lVar2 + 0x30) != 0)) {
          (**(code **)(**(longlong **)(lVar2 + 0x30) + 0x90))();
        }
        if (*(int *)(param_1 + 0x48) == 0) {
          FUN_14202d950(0);
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 0x148,0);
        }
        FUN_142f04290(param_1);
        iVar1 = *(int *)(param_1 + 0x48);
      }
    }
    plVar7 = (longlong *)0x0;
    puVar5 = *(undefined8 **)(param_1 + 0x90);
    plVar6 = (longlong *)((longlong)*(int *)(param_1 + 0x98) & 0x1fffffffffffffff);
    if (puVar5 + *(int *)(param_1 + 0x98) < puVar5) {
      plVar6 = plVar7;
    }
    plVar4 = plVar7;
    if (plVar6 != (longlong *)0x0) {
      do {
        FUN_142ee86c0(param_1,*puVar5);
        plVar4 = (longlong *)((longlong)plVar4 + 1);
        puVar5 = puVar5 + 1;
      } while (plVar4 != plVar6);
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
    if (*(int *)(param_1 + 0x9c) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x90,0);
    }
    *(undefined1 *)(param_1 + 0xac) = 1;
    if (((*(int *)(param_1 + 0x110) != 0) && (*(longlong **)(param_1 + 0x108) != (longlong *)0x0))
       && (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x18))(), cVar3 != '\0')) {
      if (*(int *)(param_1 + 0x110) != 0) {
        plVar7 = *(longlong **)(param_1 + 0x108);
      }
      (**(code **)(*plVar7 + 0x40))(plVar7);
    }
  }
  return;
}



// FUNCTION 142ee3e70 FUN_142ee3e70 body=559 status=ok
// SIG undefined FUN_142ee3e70(void)

void FUN_142ee3e70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x30));
  LOCK();
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  UNLOCK();
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_142f27920();
  }
  lVar7 = 0;
  if ((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong *)(param_1 + 0x48) != 0)) {
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x40) + 0xc);
    if (iVar5 < (int)DAT_1469e91c4) {
      uVar6 = iVar5 >> 0x1f & 0xffff;
      uVar4 = iVar5 + uVar6;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar6) * 0x18;
    }
    if ((*(uint *)(lVar7 + 8) & 0x30000000) == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))();
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x30));
  LOCK();
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x90));
  LOCK();
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  UNLOCK();
  lVar7 = *(longlong *)(param_1 + 0x80);
  lVar9 = (longlong)*(int *)(param_1 + 0x88) * 0x30 + lVar7;
  for (; lVar7 != lVar9; lVar7 = lVar7 + 0x30) {
    if (*(longlong *)(lVar7 + 0x18) != 0) {
      FUN_142f27b40(*(longlong *)(lVar7 + 0x18),0);
    }
    if ((*(longlong *)(lVar7 + 0x20) != 0) && (*(longlong **)(lVar7 + 0x28) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar7 + 0x28) + 0x18))();
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x90));
  LOCK();
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
  UNLOCK();
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x70));
  LOCK();
  *(undefined4 *)(param_1 + 0x78) = 1;
  UNLOCK();
  iVar5 = *(int *)(param_1 + 0x6c);
  plVar10 = *(longlong **)(param_1 + 0x60);
  iVar8 = *(int *)(param_1 + 0x68);
  if (iVar5 < 0) {
    if (iVar8 != 0) {
      do {
        plVar3 = (longlong *)plVar10[3];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar3)(plVar3);
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
        if (*plVar10 != 0) {
          FMemory::Free();
        }
        plVar10 = plVar10 + 8;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      iVar5 = *(int *)(param_1 + 0x6c);
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (iVar5 != 0) {
      TArray<FBoneTransform,FDefaultAllocator>::ResizeTo((undefined8 *)(param_1 + 0x60),0);
    }
  }
  else {
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
      plVar3 = (longlong *)plVar10[3];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar3)(plVar3);
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
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 8;
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x70));
  LOCK();
  *(undefined4 *)(param_1 + 0x78) = 0;
  UNLOCK();
  return;
}



// FUNCTION 142ee40a0 FUN_142ee40a0 body=138 status=ok
// SIG undefined FUN_142ee40a0(void)

void FUN_142ee40a0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x88);
  lVar4 = (longlong)*(int *)(param_1 + 0x90) * 0x50 + lVar2;
  for (; lVar2 != lVar4; lVar2 = lVar2 + 0x50) {
    *(undefined1 *)(lVar2 + 0x1d) = 0;
    *(undefined2 *)(lVar2 + 0x34) = 0;
    *(undefined1 *)(lVar2 + 0x48) = 1;
    *(undefined4 *)(lVar2 + 0x30) = 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0xc0);
  puVar1 = puVar3 + (longlong)*(int *)(param_1 + 200) * 3;
  for (; puVar3 != puVar1; puVar3 = puVar3 + 3) {
    puVar3[1] = *puVar3;
    *(undefined4 *)((longlong)puVar3 + 0x14) = *(undefined4 *)(param_1 + 0x4c);
  }
  return;
}



// FUNCTION 142ee4130 FUN_142ee4130 body=271 status=ok
// SIG undefined FUN_142ee4130(void)

void FUN_142ee4130(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int *piVar6;
  ulonglong uVar7;
  
  piVar6 = *(int **)(param_1 + 0x3a8);
  uVar5 = 0;
  uVar7 = (longlong)*(int *)(param_1 + 0x3b0) & 0x3fffffffffffffff;
  if (piVar6 + *(int *)(param_1 + 0x3b0) < piVar6) {
    uVar7 = uVar5;
  }
  if (uVar7 != 0) {
    do {
      iVar1 = *piVar6;
      if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x3a0))) {
        lVar4 = (longlong)iVar1 * 0x30 + *(longlong *)(param_1 + 0x398);
        FUN_142ef0460(param_1,*(undefined4 *)(lVar4 + 0x28));
        *(undefined8 *)(lVar4 + 0x28) = 0xffffffffffffffff;
        cVar2 = FWeakObjectPtr::IsValid(lVar4 + 0x20);
        if ((cVar2 != '\0') && (*(longlong *)(lVar4 + 0x18) != 0)) {
          uVar3 = FWeakObjectPtr::Get(lVar4 + 0x20);
          FUN_142f05ef0(uVar3,*(undefined8 *)(lVar4 + 0x18),0);
        }
      }
      piVar6 = piVar6 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar7);
  }
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  if (*(uint *)(param_1 + 0x3b4) < 0x80000000) {
    return;
  }
  TArray<float,FDefaultAllocator>::ResizeTo((undefined8 *)(param_1 + 0x3a8),0);
  return;
}



// FUNCTION 142ee4240 FUN_142ee4240 body=158 status=ok
// SIG undefined FUN_142ee4240(void)

void FUN_142ee4240(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1 != 0) && (lVar2 = UWidgetComponent::GetRenderTarget(), lVar2 != 0)) {
    lVar3 = FUN_142f27b90();
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
      AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x5b0));
      *(undefined4 *)(lVar2 + 0x5a8) = 0;
      if (0x7fffffff < *(uint *)(lVar2 + 0x5ac)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(lVar2 + 0x5a0,0);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x5b0));
    }
  }
  return;
}



// FUNCTION 142ee42e0 FUN_142ee42e0 body=137 status=ok
// SIG undefined FUN_142ee42e0(void)

void FUN_142ee42e0(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x88);
  lVar3 = (longlong)*(int *)(param_1 + 0x90) * 0x50 + lVar5;
  for (; lVar5 != lVar3; lVar5 = lVar5 + 0x50) {
    if (*(int *)(lVar5 + 0x18) == param_2) {
      *(undefined1 *)(lVar5 + 0x1d) = 0;
      *(undefined2 *)(lVar5 + 0x34) = 0;
      *(undefined1 *)(lVar5 + 0x48) = 1;
      *(undefined4 *)(lVar5 + 0x30) = 0;
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0xc0);
  puVar1 = puVar4 + (longlong)*(int *)(param_1 + 200) * 3;
  if (puVar4 != puVar1) {
    puVar2 = puVar4 + 1;
    do {
      if (*(int *)(puVar2 + 1) == param_2) {
        *puVar2 = *puVar4;
        *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0x4c);
      }
      puVar4 = puVar4 + 3;
      puVar2 = puVar2 + 3;
    } while (puVar4 != puVar1);
  }
  return;
}



// FUNCTION 142ee4370 FUN_142ee4370 body=113 status=ok
// SIG undefined FUN_142ee4370(void)

void FUN_142ee4370(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1 != 0) && (lVar2 = UWidgetComponent::GetRenderTarget(), lVar2 != 0)) {
    lVar3 = FUN_142f27b90();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong *)(lVar2 + 0x5e8) != 0)) {
      FUN_142eb14a0();
      return;
    }
  }
  return;
}



// FUNCTION 142ee43f0 FUN_142ee43f0 body=248 status=ok
// SIG undefined FUN_142ee43f0(void)

void FUN_142ee43f0(longlong *param_1,float param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  if (*(char *)((longlong)param_1 + 0x1e1) == '\0') {
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)((longlong)param_1 + 0x36c);
    *(int *)((longlong)param_1 + 900) = (int)param_1[0x6f] + 1;
    uVar2 = *(undefined4 *)((longlong)param_1 + 0x37c);
  }
  else {
    if (*(char *)((longlong)param_1 + 0x1e1) != '\x01') goto LAB_142ee4454;
    *(int *)(param_1 + 0x70) = (int)param_1[0x6d];
    *(int *)((longlong)param_1 + 900) = *(int *)((longlong)param_1 + 0x37c) + 1;
    uVar2 = (undefined4)param_1[0x6f];
  }
  *(undefined4 *)(param_1 + 0x71) = uVar2;
LAB_142ee4454:
  iVar1 = *(int *)((longlong)param_1 + 0x38c);
  fVar7 = param_2 / *(float *)(param_1 + 0x70);
  iVar4 = *(int *)((longlong)param_1 + 900) * (int)param_1[0x71];
  iVar6 = (int)ROUND((fVar7 + fVar7) - 0.5) >> 1;
  iVar5 = (int)param_1[0x71] * iVar6;
  *(int *)((longlong)param_1 + 0x38c) = iVar5;
  if (iVar4 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)param_1[0x50] - iVar5;
    if (iVar4 < iVar3) {
      iVar3 = iVar4;
    }
  }
  *(int *)(param_1 + 0x72) = iVar3;
  *(float *)((longlong)param_1 + 0x394) = param_2 - (float)iVar6 * *(float *)(param_1 + 0x70);
  if (iVar1 != iVar5) {
    FUN_142efe720(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000142ee44e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x340))(param_1);
  return;
}



// FUNCTION 142ee44f0 FUN_142ee44f0 body=2769 status=ok
// SIG undefined FUN_142ee44f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ee44f0(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined1 auStack_3c8 [32];
  undefined1 *local_3a8;
  longlong local_3a0;
  undefined4 *local_398;
  undefined8 *local_390;
  undefined1 local_388;
  undefined1 local_387;
  undefined1 local_386;
  undefined1 local_385;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  longlong local_348 [3];
  longlong *local_330;
  undefined8 *local_328;
  int local_320;
  undefined4 local_31c;
  undefined8 local_318;
  longlong *local_310;
  longlong *local_308;
  longlong *local_300;
  longlong local_2f8 [2];
  undefined1 local_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  longlong local_2d0;
  undefined1 local_2c8 [8];
  longlong *local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined1 local_298 [8];
  longlong *local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  longlong *local_268;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [480];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
  FText::operator=(param_1 + 0x208,param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x220) = *(undefined1 *)(param_2 + 0x120);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x228,param_2 + 0x128);
  FText::operator=(param_1 + 0x420,param_2 + 0x138);
  *(undefined1 *)(param_1 + 0x438) = *(undefined1 *)(param_2 + 0x150);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x440,param_2 + 0x158);
  lVar13 = *(longlong *)(param_2 + 0x1d8);
  puVar12 = (undefined8 *)(param_1 + 0x278);
  *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(lVar13 + 8);
  *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(lVar13 + 0x10);
  uVar7 = *(undefined4 *)(lVar13 + 0x1c);
  uVar3 = *(undefined4 *)(lVar13 + 0x20);
  uVar4 = *(undefined4 *)(lVar13 + 0x24);
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(lVar13 + 0x18);
  *(undefined4 *)(param_1 + 0x25c) = uVar7;
  *(undefined4 *)(param_1 + 0x260) = uVar3;
  *(undefined4 *)(param_1 + 0x264) = uVar4;
  uVar7 = *(undefined4 *)(lVar13 + 0x2c);
  uVar3 = *(undefined4 *)(lVar13 + 0x30);
  uVar4 = *(undefined4 *)(lVar13 + 0x34);
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(lVar13 + 0x28);
  *(undefined4 *)(param_1 + 0x26c) = uVar7;
  *(undefined4 *)(param_1 + 0x270) = uVar3;
  *(undefined4 *)(param_1 + 0x274) = uVar4;
  uStack_360 = *(longlong **)(lVar13 + 0x40);
  local_368 = *(undefined8 *)(lVar13 + 0x38);
  if (uStack_360 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_360 + 1) = (int)uStack_360[1] + 1;
    UNLOCK();
  }
  if (&local_368 != puVar12) {
    local_368._4_4_ = (undefined4)((ulonglong)local_368 >> 0x20);
    uStack_360._4_4_ = (undefined4)((ulonglong)uStack_360 >> 0x20);
    uVar11 = *puVar12;
    plVar8 = *(longlong **)(param_1 + 0x280);
    local_58 = (undefined4)local_368;
    uStack_54 = local_368._4_4_;
    uStack_50 = (undefined4)uStack_360;
    uStack_4c = uStack_360._4_4_;
    *(undefined4 *)puVar12 = (undefined4)local_368;
    *(undefined4 *)(param_1 + 0x27c) = local_368._4_4_;
    *(undefined4 *)(param_1 + 0x280) = (undefined4)uStack_360;
    *(undefined4 *)(param_1 + 0x284) = uStack_360._4_4_;
    local_368 = uVar11;
    uStack_360 = plVar8;
  }
  plVar8 = uStack_360;
  if (uStack_360 != (longlong *)0x0) {
    LOCK();
    plVar9 = uStack_360 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*uStack_360)(uStack_360);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*uStack_360 + 8))(uStack_360,1);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(lVar13 + 0x48);
  *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(lVar13 + 0x50);
  *(undefined1 *)(param_1 + 0x294) = *(undefined1 *)(lVar13 + 0x54);
  FUN_140692440(param_1 + 0x298,lVar13 + 0x58);
  *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(lVar13 + 0x80);
  uVar7 = *(undefined4 *)(lVar13 + 0x8c);
  uVar3 = *(undefined4 *)(lVar13 + 0x90);
  uVar4 = *(undefined4 *)(lVar13 + 0x94);
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(lVar13 + 0x88);
  *(undefined4 *)(param_1 + 0x2cc) = uVar7;
  *(undefined4 *)(param_1 + 0x2d0) = uVar3;
  *(undefined4 *)(param_1 + 0x2d4) = uVar4;
  FUN_140692440(param_1 + 0x2d8,lVar13 + 0x98);
  uVar7 = *(undefined4 *)(lVar13 + 0xc4);
  uVar3 = *(undefined4 *)(lVar13 + 200);
  uVar4 = *(undefined4 *)(lVar13 + 0xcc);
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(lVar13 + 0xc0);
  *(undefined4 *)(param_1 + 0x304) = uVar7;
  *(undefined4 *)(param_1 + 0x308) = uVar3;
  *(undefined4 *)(param_1 + 0x30c) = uVar4;
  FUN_1406922e0(param_1 + 0x310,lVar13 + 0xd0);
  FUN_1406922e0(param_1 + 0x398,lVar13 + 0x158);
  *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_2 + 0x168);
  *(undefined1 *)(param_1 + 0x454) = *(undefined1 *)(param_2 + 0x16c);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x458,param_2 + 0x170);
  *(undefined1 *)(param_1 + 0x468) = *(undefined1 *)(param_2 + 0x180);
  *(undefined1 *)(param_1 + 0x469) = *(undefined1 *)(param_2 + 0x181);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x470,param_2 + 0x188);
  *(undefined1 *)(param_1 + 0x480) = *(undefined1 *)(param_2 + 0x198);
  *(undefined1 *)(param_1 + 0x481) = *(undefined1 *)(param_2 + 0x199);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x488,param_2 + 0x1a0);
  uVar7 = *(undefined4 *)(param_2 + 0x1e4);
  uVar3 = *(undefined4 *)(param_2 + 0x1e8);
  uVar4 = *(undefined4 *)(param_2 + 0x1ec);
  *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined4 *)(param_1 + 0x49c) = uVar7;
  *(undefined4 *)(param_1 + 0x4a0) = uVar3;
  *(undefined4 *)(param_1 + 0x4a4) = uVar4;
  *(undefined1 *)(param_1 + 0x4a8) = *(undefined1 *)(param_2 + 0x1f0);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x4b0,param_2 + 0x1f8);
  *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_2 + 0x208);
  *(undefined1 *)(param_1 + 0x4dc) = *(undefined1 *)(param_2 + 0x20c);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x4e0,param_2 + 0x210);
  *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(param_2 + 0x220);
  *(undefined1 *)(param_1 + 0x4c4) = *(undefined1 *)(param_2 + 0x224);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x4c8,param_2 + 0x228);
  *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_2 + 0x260);
  *(undefined1 *)(param_1 + 0x4f4) = *(undefined1 *)(param_2 + 0x264);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x4f8,param_2 + 0x268);
  *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(param_2 + 0x278);
  *(undefined1 *)(param_1 + 0x50c) = *(undefined1 *)(param_2 + 0x27c);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x510,param_2 + 0x280);
  local_358 = *(longlong *)(param_2 + 0x250);
  uStack_350 = *(longlong **)(param_2 + 600);
  if (uStack_350 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_350 + 1) = (int)uStack_350[1] + 1;
    UNLOCK();
  }
  if (local_358 == 0) {
    plVar8 = (longlong *)FDefaultRichTextMarkupParser::Create(local_2c8);
    local_330 = (longlong *)plVar8[1];
    local_358 = *plVar8;
    if (local_330 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_330 + 1) = (int)local_330[1] + 1;
      UNLOCK();
    }
    local_348[2] = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_350,&local_330);
    plVar8 = local_330;
    if (local_330 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_330 + 1;
      lVar13 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_330)(local_330);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar16 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*local_330 + 8))(local_330,1);
        }
      }
    }
    if (local_2c0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_2c0 + 1;
      lVar13 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_2c0)(local_2c0);
        LOCK();
        piVar1 = (int *)((longlong)local_2c0 + 0xc);
        iVar16 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*local_2c0 + 8))(local_2c0,1);
        }
      }
    }
  }
  uStack_370 = *(longlong **)(param_2 + 0x1b8);
  local_378 = *(longlong *)(param_2 + 0x1b0);
  if (uStack_370 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_370 + 1) = (int)uStack_370[1] + 1;
    UNLOCK();
  }
  if (local_378 == 0) {
    iVar16 = *(int *)(param_2 + 0x248);
    puVar12 = *(undefined8 **)(param_2 + 0x240);
    local_328 = (undefined8 *)0x0;
    local_320 = iVar16;
    if (iVar16 == 0) {
      local_31c = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_328,iVar16,0);
      puVar14 = local_328;
      do {
        *puVar14 = *puVar12;
        lVar13 = puVar12[1];
        puVar14[1] = lVar13;
        if (lVar13 != 0) {
          LOCK();
          *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
          UNLOCK();
        }
        puVar14 = puVar14 + 2;
        puVar12 = puVar12 + 2;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
    }
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_2a8 = (undefined4)local_358;
    uStack_2a4 = local_358._4_4_;
    uStack_2a0 = (undefined4)uStack_350;
    uStack_29c = uStack_350._4_4_;
    if (uStack_350 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_350 + 1) = (int)uStack_350[1] + 1;
      UNLOCK();
    }
    local_3a8 = *(undefined1 **)(param_2 + 0x1d0);
    plVar8 = (longlong *)FUN_1418f4140(local_298,&local_2a8,&local_2b8,&local_328);
    local_310 = (longlong *)plVar8[1];
    local_378 = *plVar8;
    if (local_310 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_310 + 1) = (int)local_310[1] + 1;
      UNLOCK();
    }
    local_318 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_370,&local_310);
    plVar8 = local_310;
    if (local_310 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_310 + 1;
      lVar13 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_310)(local_310);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar16 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*local_310 + 8))(local_310,1);
        }
      }
    }
    if (local_290 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_290 + 1;
      lVar13 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_290)(local_290);
        LOCK();
        piVar1 = (int *)((longlong)local_290 + 0xc);
        iVar16 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*local_290 + 8))(local_290,1);
        }
      }
    }
  }
  lVar13 = local_378;
  puVar12 = *(undefined8 **)(param_2 + 0x290);
  puVar14 = puVar12 + (longlong)*(int *)(param_2 + 0x298) * 2;
  for (; puVar12 != puVar14; puVar12 = puVar12 + 2) {
    iVar16 = *(int *)(lVar13 + 0x48);
    *(int *)(lVar13 + 0x48) = iVar16 + 1;
    if (*(int *)(lVar13 + 0x4c) < iVar16 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar13 + 0x40,iVar16);
    }
    puVar15 = (undefined8 *)((longlong)iVar16 * 0x10 + *(longlong *)(lVar13 + 0x40));
    *puVar15 = *puVar12;
    lVar5 = puVar12[1];
    puVar15[1] = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
  }
  plVar8 = (longlong *)0x0;
  if (((*(int *)(param_1 + 0x518) != 0) && (*(longlong **)(param_1 + 0x510) != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x510) + 0x18))(), cVar6 != '\0')) {
    if (*(int *)(param_1 + 0x518) != 0) {
      plVar8 = *(longlong **)(param_1 + 0x510);
    }
    uVar7 = (**(code **)(*plVar8 + 0x38))();
    *(undefined4 *)(param_1 + 0x508) = uVar7;
  }
  plVar8 = (longlong *)0x0;
  local_348[1] = 4;
  local_348[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_348,0);
  lVar13 = local_348[0];
  FGenericPlatformString::Memcpy(local_348[0],&DAT_14598b1d8,8);
  uVar2 = *(undefined2 *)(param_1 + 0x508);
  plVar9 = (longlong *)operator_new(0x48);
  local_308 = plVar8;
  if (plVar9 != (longlong *)0x0) {
    plVar10 = (longlong *)FString::FString(local_258,local_348);
    uVar11 = FString::FString(local_248,plVar10);
    FImageDecorator::FImageDecorator(plVar9,uVar11,0);
    *plVar9 = (longlong)&PTR_FUN_145992c48;
    plVar9[5] = 0;
    plVar9[6] = 0;
    plVar9[7] = 0;
    plVar9[8] = 0;
    *(undefined2 *)(plVar9 + 4) = uVar2;
    lVar13 = local_348[0];
    local_308 = plVar9;
    if (*plVar10 != 0) {
      FMemory::Free();
      lVar13 = local_348[0];
    }
  }
  plVar9 = (longlong *)operator_new(0x18);
  if (plVar9 != (longlong *)0x0) {
    *(undefined4 *)(plVar9 + 1) = 1;
    *plVar9 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    plVar9[2] = (longlong)local_308;
    plVar8 = plVar9;
  }
  local_300 = plVar8;
  SharedPointerInternals::EnableSharedFromThis(&local_308,local_308,local_308);
  if (lVar13 != 0) {
    FMemory::Free(lVar13);
  }
  plVar9 = local_300;
  plVar8 = local_308;
  lVar13 = local_378;
  if (local_300 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_300 + 1) = (int)local_300[1] + 1;
    UNLOCK();
  }
  iVar16 = *(int *)(local_378 + 0x48);
  *(int *)(local_378 + 0x48) = iVar16 + 1;
  if (*(int *)(local_378 + 0x4c) < iVar16 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(local_378 + 0x40,iVar16);
  }
  puVar12 = (undefined8 *)((longlong)iVar16 * 0x10 + *(longlong *)(lVar13 + 0x40));
  *puVar12 = plVar8;
  puVar12[1] = plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar9 + 1;
    lVar13 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  plVar8 = local_300;
  if (local_300 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_300 + 1;
    lVar13 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_300)(local_300);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  if (uStack_370 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_370 + 1) = (int)uStack_370[1] + 1;
    UNLOCK();
  }
  lVar13 = operator_new(0x68);
  if (lVar13 == 0) {
    lVar13 = 0;
  }
  else {
    local_288 = 0;
    uStack_280 = 0;
    local_278 = (undefined4)local_378;
    uStack_274 = local_378._4_4_;
    uStack_270 = (undefined4)uStack_370;
    uStack_26c = uStack_370._4_4_;
    if (uStack_370 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_370 + 1) = (int)uStack_370[1] + 1;
      UNLOCK();
    }
    local_387 = *(char *)(param_2 + 0x23b) != '\0';
    if ((bool)local_387) {
      local_388 = *(undefined1 *)(param_2 + 0x23a);
    }
    local_385 = *(char *)(param_2 + 0x239) != '\0';
    if ((bool)local_385) {
      local_386 = *(undefined1 *)(param_2 + 0x238);
    }
    uVar11 = FTextBlockStyle::FTextBlockStyle(local_238,param_1 + 0x240);
    local_390 = &local_288;
    local_398 = &local_278;
    local_3a8 = &local_388;
    local_3a0 = param_2 + 0x1c0;
    lVar13 = FUN_1419a8840(lVar13,param_1,uVar11,&local_386);
  }
  plVar8 = (longlong *)(param_1 + 0x238);
  if (plVar8 == &local_2d0) {
    if (lVar13 == 0) goto LAB_142ee4e33;
    FUN_141966250(lVar13);
  }
  else {
    lVar5 = *plVar8;
    *plVar8 = lVar13;
    if (lVar5 == 0) goto LAB_142ee4e33;
    FUN_141966250(lVar5);
    lVar13 = lVar5;
  }
  FMemory::operator_delete(lVar13,0x68);
LAB_142ee4e33:
  plVar9 = uStack_370;
  if (uStack_370 != (longlong *)0x0) {
    LOCK();
    plVar10 = uStack_370 + 1;
    lVar13 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*uStack_370)(uStack_370);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*uStack_370 + 8))(uStack_370,1);
      }
    }
  }
  plVar9 = (longlong *)FMemory::Realloc(0,0x20);
  local_268 = plVar9;
  if (plVar9 != (longlong *)0x0) {
    plVar9[1] = param_1;
    *plVar9 = (longlong)&PTR_GetPoolName_144d6e320;
    lVar13 = FDelegateHandle::GenerateNewID();
    plVar9[3] = lVar13;
  }
  local_2f8[0] = 0;
  local_2f8[1] = 0;
  local_2e8 = 1;
  local_2e0 = 0;
  local_2d8 = 0;
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x30))(plVar9,&local_2e0);
  }
  FSlateTextBlockLayout::SetDebugSourceInfo(*plVar8,local_2f8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2e0);
  if (local_2f8[0] != 0) {
    FMemory::Free();
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,0);
    local_268 = (longlong *)FMemory::Realloc(plVar9,0,0);
    if (local_268 != (longlong *)0x0) {
      FMemory::Free(local_268);
    }
  }
  plVar8 = uStack_370;
  if (uStack_370 != (longlong *)0x0) {
    LOCK();
    plVar9 = uStack_370 + 1;
    lVar13 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*uStack_370)(uStack_370);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*uStack_370 + 8))(uStack_370,1);
      }
    }
  }
  plVar8 = uStack_350;
  if (uStack_350 != (longlong *)0x0) {
    LOCK();
    plVar9 = uStack_350 + 1;
    lVar13 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*uStack_350)(uStack_350);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*uStack_350 + 8))(uStack_350,1);
      }
    }
  }
  return;
}



// FUNCTION 142ee4fd0 FUN_142ee4fd0 body=156 status=ok
// SIG undefined FUN_142ee4fd0(void)

ulonglong FUN_142ee4fd0(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  byte *pbVar4;
  byte local_res8 [4];
  int local_resc;
  
  bVar1 = *param_1;
  local_resc = param_2;
  pbVar4 = param_1;
  if (bVar1 == 2) {
    uVar3 = 2;
  }
  else {
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 < param_2) {
      uVar3 = (ulonglong)bVar1;
    }
    else {
      if ((param_2 < iVar2) || (bVar1 != 1)) {
        pbVar4 = local_res8;
      }
      uVar3 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
    }
  }
  if (((byte)uVar3 == bVar1) &&
     (((byte)uVar3 == 2 ||
      (uVar3 = (ulonglong)*(uint *)(param_1 + 4), *(uint *)(pbVar4 + 4) == *(uint *)(param_1 + 4))))
     ) {
    bVar1 = param_1[8];
    pbVar4 = param_1 + 8;
    if (bVar1 == 2) {
      uVar3 = 2;
    }
    else {
      iVar2 = *(int *)(param_1 + 0xc);
      if (param_2 < iVar2) {
        uVar3 = (ulonglong)bVar1;
      }
      else {
        if ((iVar2 < param_2) || (bVar1 != 1)) {
          pbVar4 = local_res8;
        }
        uVar3 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
      }
    }
    if (((byte)uVar3 == bVar1) &&
       (((byte)uVar3 == 2 ||
        (uVar3 = (ulonglong)*(uint *)(param_1 + 0xc),
        *(uint *)(pbVar4 + 4) == *(uint *)(param_1 + 0xc))))) {
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 142ee5070 FUN_142ee5070 body=94 status=ok
// SIG undefined FUN_142ee5070(void)

undefined8 * FUN_142ee5070(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_140438ef0(0x30);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_145992ed8;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar3[3] = *(undefined8 *)(param_1 + 0x18);
    puVar3[4] = uVar2;
    *(undefined1 *)(puVar3 + 5) = *(undefined1 *)(param_1 + 0x28);
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142ee50d0 FUN_142ee50d0 body=110 status=ok
// SIG undefined FUN_142ee50d0(void)

undefined8 * FUN_142ee50d0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145992ef0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    uVar2 = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x18) != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
    }
    puVar1[4] = uVar2;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142ee5140 FUN_142ee5140 body=106 status=ok
// SIG undefined FUN_142ee5140(void)

undefined8 * FUN_142ee5140(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145992f08;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    FUN_142eddac0(puVar1 + 3,param_1 + 0x18);
    *(undefined1 *)(puVar1 + 0xb) = *(undefined1 *)(param_1 + 0x58);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142ee51b0 FUN_142ee51b0 body=99 status=ok
// SIG undefined FUN_142ee51b0(void)

undefined8 * FUN_142ee51b0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1459930d0;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142ee5220 FUN_142ee5220 body=129 status=ok
// SIG undefined FUN_142ee5220(void)

undefined8 * FUN_142ee5220(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1459930e8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x18));
    FUN_14170c210(puVar1 + 3,uVar2);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142ee52b0 CopyToEmptyStorage body=104 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_86b5239219762420415e95617a23a7af>_>::
CopyToEmptyStorage(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x70);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_CopyToEmptyStorage_145993200;
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



// FUNCTION 142ee5320 FUN_142ee5320 body=126 status=ok
// SIG undefined FUN_142ee5320(void)

undefined8 * FUN_142ee5320(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145993100;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    FString::FString(puVar2 + 4,param_1 + 0x20);
    *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(param_1 + 0x30);
    *(undefined1 *)((longlong)puVar2 + 0x31) = *(undefined1 *)(param_1 + 0x31);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142ee53a0 CopyToEmptyStorage body=79 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_7a02e06ca5db01d82e81cc92e1965566>_>::
CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_145993198;
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142ee53f0 FUN_142ee53f0 body=3232 status=ok
// SIG undefined FUN_142ee53f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_142ee53f0(longlong param_1,undefined8 *param_2,undefined8 param_3,ulonglong param_4,
             undefined8 *param_5,longlong *param_6,longlong *param_7)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  uint uVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  uint uVar16;
  uint uVar17;
  wchar_t *pwVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  uint *puVar22;
  longlong *plVar23;
  undefined2 *puVar24;
  undefined1 auStack_2c8 [32];
  undefined8 *local_2a8;
  int *local_2a0;
  undefined4 local_298;
  int local_288;
  int local_284;
  ulonglong local_280;
  wchar_t *local_278;
  int local_270;
  undefined4 local_26c;
  longlong *local_268;
  wchar_t *local_260;
  int local_258;
  undefined4 local_254;
  undefined8 *local_250;
  undefined8 *local_248;
  int local_240;
  uint uStack_23c;
  uint *puStack_238;
  undefined4 local_230;
  uint uStack_22c;
  int iStack_228;
  undefined4 uStack_224;
  undefined8 local_220;
  float local_218;
  float local_214;
  undefined2 *local_210;
  undefined8 local_208;
  int local_200;
  uint *local_1f8;
  uint local_1f0;
  uint uStack_1ec;
  uint local_1e8;
  int local_1e0;
  undefined1 local_1dc [4];
  uint *local_1d8;
  longlong local_1d0;
  longlong *local_1c8;
  int local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  longlong local_198;
  longlong *local_190;
  longlong *local_188;
  undefined8 uStack_180;
  uint *local_178;
  uint uStack_170;
  uint uStack_16c;
  undefined8 local_168;
  longlong local_160;
  wchar_t **local_158;
  longlong local_150;
  longlong *local_148;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined8 uStack_e0;
  uint *puStack_d8;
  uint uStack_d0;
  uint uStack_cc;
  undefined8 uStack_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  local_268 = param_6;
  local_1c8 = param_7;
  local_250 = param_5;
  if (*(int *)(param_5 + 1) == 0) {
    puVar24 = &DAT_143f3eda8;
  }
  else {
    puVar24 = (undefined2 *)*param_5;
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = *(undefined2 **)(param_1 + 0x38);
  }
  local_280 = param_4;
  local_248 = param_2;
  local_1d0 = param_1;
  iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar24);
  if (iVar4 != 0) {
    iVar4 = *(int *)(param_1 + 0x34);
    lVar14 = *(longlong *)(param_1 + 0x28);
    iVar19 = *(int *)(param_1 + 0x30);
    if (iVar4 < 0) {
      if (iVar19 != 0) {
        plVar23 = (longlong *)(lVar14 + 8);
        do {
          plVar6 = (longlong *)*plVar23;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar6 + 1;
            lVar14 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*plVar6)();
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
            }
          }
          plVar23 = plVar23 + 2;
          iVar19 = iVar19 + -1;
        } while (iVar19 != 0);
        iVar4 = *(int *)(param_1 + 0x34);
        param_4 = local_280;
      }
      *(undefined4 *)(param_1 + 0x30) = 0;
      if (iVar4 != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo((longlong *)(param_1 + 0x28),0);
      }
    }
    else {
      if (iVar19 != 0) {
        plVar23 = (longlong *)(lVar14 + 8);
        do {
          plVar6 = (longlong *)*plVar23;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar6 + 1;
            lVar14 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*plVar6)();
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
            }
          }
          plVar23 = plVar23 + 2;
          iVar19 = iVar19 + -1;
          param_4 = local_280;
        } while (iVar19 != 0);
      }
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    FString::operator=((undefined8 *)(param_1 + 0x38),local_250);
  }
  local_210 = (undefined2 *)0x0;
  local_208 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_210,0);
  puVar24 = local_210;
  FGenericPlatformString::Memcpy(local_210,&DAT_14598e788,8);
  plVar23 = (longlong *)(param_4 + 0x20);
  if (*(int *)(param_4 + 0x28) != *(int *)(param_4 + 0x54)) {
    iVar4 = (int)local_208;
    puVar11 = &DAT_143f3eda8;
    if ((int)local_208 != 0) {
      puVar11 = puVar24;
    }
    iVar19 = FUN_140438070(puVar11);
    lVar14 = *(longlong *)(param_4 + 0x60);
    if (*(longlong *)(param_4 + 0x60) == 0) {
      lVar14 = param_4 + 0x58;
    }
    iVar19 = *(int *)(lVar14 + ((longlong)*(int *)(param_4 + 0x68) - 1U & (longlong)iVar19) * 4);
    if (iVar19 != -1) {
      lVar14 = *plVar23;
      do {
        lVar21 = (longlong)iVar19 * 0x20;
        puVar11 = &DAT_143f3eda8;
        if (iVar4 != 0) {
          puVar11 = puVar24;
        }
        if (*(int *)(lVar21 + 8 + lVar14) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = *(undefined2 **)(lVar21 + lVar14);
        }
        iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar11);
        if (iVar5 == 0) {
          if (iVar19 != -1) {
            lVar21 = *plVar23 + lVar21;
            goto LAB_142ee562a;
          }
          break;
        }
        lVar14 = *plVar23;
        iVar19 = *(int *)(lVar21 + 0x18 + lVar14);
      } while (iVar19 != -1);
    }
  }
  lVar21 = 0;
LAB_142ee562a:
  local_1d8 = (uint *)(lVar21 + 0x10);
  if (lVar21 == 0) {
    local_1d8 = (uint *)0x0;
  }
  if (puVar24 != (undefined2 *)0x0) {
    FMemory::Free(puVar24);
  }
  plVar1 = local_268;
  plVar6 = (longlong *)*local_268;
  if ((int)plVar6[1] == 0) {
    local_288 = 0;
  }
  else {
    local_288 = (int)plVar6[1] + -1;
  }
  iVar4 = (int)plVar6[1];
  iVar19 = iVar4 + -1;
  if (iVar4 < 1) {
    iVar19 = 0;
  }
  iVar4 = (iVar4 < 1) + 1 + iVar4;
  *(int *)(plVar6 + 1) = iVar4;
  if (*(int *)((longlong)plVar6 + 0xc) < iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar6);
  }
  *(undefined2 *)(*plVar6 + (longlong)iVar19 * 2) = 0x200b;
  *(undefined2 *)(*plVar6 + 2 + (longlong)iVar19 * 2) = 0;
  if (*(int *)(*plVar1 + 8) == 0) {
    local_284 = 0;
  }
  else {
    local_284 = *(int *)(*plVar1 + 8) + -1;
  }
  plVar6 = (longlong *)FString::FString(local_c0);
  local_a8 = *plVar6;
  *plVar6 = 0;
  local_a0 = (undefined4)plVar6[1];
  local_9c = *(undefined4 *)((longlong)plVar6 + 0xc);
  plVar6[1] = 0;
  _guard_xfg_dispatch_icall_nop(&local_98,0,0x50);
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  if (*plVar6 != 0) {
    FMemory::Free();
  }
  uVar20 = *(uint *)(param_4 + 0x48);
  puStack_238 = (uint *)(param_4 + 0x30);
  uStack_23c = 1;
  local_240 = 0;
  uStack_22c = 0;
  iStack_228 = 0;
  if (uVar20 != 0) {
    puVar22 = *(uint **)(param_4 + 0x40);
    if (*(uint **)(param_4 + 0x40) == (uint *)0x0) {
      puVar22 = puStack_238;
    }
    uVar13 = *puVar22;
    while (uVar13 == 0) {
      lVar14 = (longlong)local_240;
      iStack_228 = iStack_228 + 0x20;
      iVar4 = local_240 + 1;
      bVar3 = (int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_240;
      local_240 = iVar4;
      if (bVar3) goto LAB_142ee581f;
      uVar13 = puVar22[lVar14 + 1];
    }
    uStack_23c = -uVar13 & uVar13;
    local_1c0 = 0x1f;
    if (uStack_23c != 0) {
      for (; uStack_23c >> local_1c0 == 0; local_1c0 = local_1c0 + -1) {
      }
    }
    if (uStack_23c == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - local_1c0;
    }
    uStack_22c = (iStack_228 - iVar4) + 0x1f;
    if ((int)uVar20 < (int)uStack_22c) {
LAB_142ee581f:
      uStack_22c = uVar20;
    }
  }
  local_230 = 0xffffffff;
  uStack_1ec = *(uint *)(param_4 + 0x48);
  uStack_180 = CONCAT44(uStack_23c,local_240);
  uStack_170 = 0xffffffff;
  uStack_16c = uStack_22c;
  local_168 = CONCAT44(uStack_224,iStack_228);
  local_1f0 = -1 << ((byte)uStack_1ec & 0x1f);
  local_200 = (int)uStack_1ec >> 5;
  local_1e8 = uStack_1ec & 0xffffffe0;
  if (uStack_1ec != uVar20) {
    puVar22 = *(uint **)(param_4 + 0x40);
    if (*(uint **)(param_4 + 0x40) == (uint *)0x0) {
      puVar22 = puStack_238;
    }
    uVar13 = puVar22[local_200] & local_1f0;
    while (uVar13 == 0) {
      lVar14 = (longlong)local_200;
      local_1e8 = local_1e8 + 0x20;
      iVar4 = local_200 + 1;
      bVar3 = (int)(((int)(uVar20 - 1) >> 0x1f & 0x1fU) + (uVar20 - 1)) >> 5 <= local_200;
      local_200 = iVar4;
      if (bVar3) goto LAB_142ee5909;
      uVar13 = puVar22[lVar14 + 1];
      local_1f0 = 0xffffffff;
    }
    uVar13 = -uVar13 & uVar13;
    local_1e0 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> local_1e0 == 0; local_1e0 = local_1e0 + -1) {
      }
    }
    if (uVar13 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - local_1e0;
    }
    uStack_1ec = (local_1e8 - iVar4) + 0x1f;
    if ((int)uVar20 < (int)uStack_1ec) {
LAB_142ee5909:
      uStack_1ec = uVar20;
    }
  }
  local_280 = (ulonglong)uStack_1ec;
  local_1f8 = puStack_238;
  local_188 = plVar23;
  local_178 = puStack_238;
  local_e8 = plVar23;
  uStack_e0 = uStack_180;
  puStack_d8 = puStack_238;
  uStack_c8 = local_168;
  uStack_d0 = uStack_170;
  uStack_cc = uStack_16c;
  while( true ) {
    if (((uStack_16c == (uint)local_280) && (local_178 == (uint *)(param_4 + 0x30))) &&
       (local_188 == plVar23)) break;
    lVar14 = (longlong)(int)uStack_16c * 0x20 + *local_188;
    iVar4 = *(int *)(local_250 + 1);
    uVar20 = *(uint *)(lVar14 + 0x14);
    uVar13 = iVar4 - 1;
    if (iVar4 == 0) {
      uVar13 = 0;
    }
    if (*(uint *)(lVar14 + 0x10) < uVar13) {
      uVar13 = *(uint *)(lVar14 + 0x10);
    }
    uVar16 = iVar4 - 1;
    if (iVar4 == 0) {
      uVar16 = 0;
    }
    uVar17 = uVar13;
    if ((uVar13 <= uVar20) && (uVar17 = uVar16, uVar20 < uVar16)) {
      uVar17 = uVar20;
    }
    if (iVar4 == 0) {
      puVar24 = &DAT_143f3eda8;
    }
    else {
      puVar24 = (undefined2 *)*local_250;
    }
    iVar4 = uVar17 - uVar13;
    local_260 = (wchar_t *)0x0;
    local_254 = 0;
    local_258 = iVar4 + 1;
    if (iVar4 == 0) {
      local_258 = 0;
    }
    if ((0 < local_258) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_260,0), pwVar15 = local_260,
       0 < local_258)) {
      wcsncpy(local_260,puVar24 + (int)uVar13,(longlong)iVar4);
      pwVar15[iVar4] = L'\0';
    }
    local_158 = &local_260;
    local_160 = lVar14;
    TSet<TTuple<FString,TArray<physx::PxBase_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<physx::PxBase_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,TArray<physx::PxBase_*,FDefaultAllocator>_&&>_>
              (&local_98,local_1dc,&local_160);
    if (local_260 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    uStack_170 = uStack_170 & ~uStack_180._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_180);
  }
  if (local_1d8 != (uint *)0x0) {
    uVar13 = local_1d8[1];
    iVar4 = *(int *)(local_250 + 1);
    uVar20 = iVar4 - 1;
    if (iVar4 == 0) {
      uVar20 = 0;
    }
    uVar16 = iVar4 - 1;
    if (*local_1d8 < uVar20) {
      uVar20 = *local_1d8;
    }
    if (iVar4 == 0) {
      uVar16 = 0;
    }
    uVar17 = uVar20;
    if ((uVar20 <= uVar13) && (uVar17 = uVar16, uVar13 < uVar16)) {
      uVar17 = uVar13;
    }
    if (iVar4 == 0) {
      puVar24 = &DAT_143f3eda8;
    }
    else {
      puVar24 = (undefined2 *)*local_250;
    }
    iVar19 = uVar17 - uVar20;
    local_278 = (wchar_t *)0x0;
    local_26c = 0;
    iVar4 = iVar19 + 1;
    if (iVar19 == 0) {
      iVar4 = 0;
    }
    local_270 = iVar4;
    if ((0 < iVar4) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_278,0), iVar4 = local_270,
       pwVar15 = local_278, 0 < local_270)) {
      wcsncpy(local_278,puVar24 + (int)uVar20,(longlong)iVar19);
      pwVar15[iVar19] = L'\0';
    }
    lVar14 = local_1d0;
    plVar23 = local_1c8;
    if (*(longlong **)(local_1d0 + 0x18) != (longlong *)0x0) {
      plVar23 = *(longlong **)(local_1d0 + 0x18);
    }
    pwVar15 = L"";
    if (iVar4 != 0) {
      pwVar15 = local_278;
    }
    FName::FName(&local_220,pwVar15,1);
    local_f8 = local_220;
    lVar21 = (**(code **)(*plVar23 + 0x80))(plVar23,DAT_1469eb1c8);
    pwVar15 = local_278;
    if (lVar21 != 0) {
      local_100 = local_220;
      lVar14 = (**(code **)(*plVar23 + 0x80))(plVar23,DAT_1469eb1c8);
      if (lVar14 == 0) {
        lVar14 = FUN_141834e90();
      }
      local_1b8 = *local_268;
      local_1b0 = (longlong *)local_268[1];
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
        UNLOCK();
      }
      local_2a0 = &local_288;
      local_2a8 = (undefined8 *)CONCAT62(local_2a8._2_6_,*(undefined2 *)(lVar14 + 0x90));
      puVar7 = (undefined8 *)FUN_141937820(local_140,&local_a8,&local_1b8,lVar14 + 8);
      puVar10 = local_248;
      *local_248 = *puVar7;
      lVar14 = puVar7[1];
      local_248[1] = lVar14;
      if (lVar14 != 0) {
        LOCK();
        *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
        UNLOCK();
      }
      if (local_138 != (longlong *)0x0) {
        LOCK();
        plVar23 = local_138 + 1;
        lVar14 = *plVar23;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_138)(local_138);
          LOCK();
          piVar2 = (int *)((longlong)local_138 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_138 + 8))(local_138,1);
          }
        }
      }
      plVar23 = local_1b0;
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_1b0 + 1;
        lVar14 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_1b0)(local_1b0);
          LOCK();
          piVar2 = (int *)((longlong)plVar23 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar23 + 8))(plVar23,1);
          }
        }
      }
      if (local_278 != (wchar_t *)0x0) {
        FMemory::Free(local_278);
      }
      goto LAB_142ee6046;
    }
    pwVar18 = L"";
    if (iVar4 != 0) {
      pwVar18 = local_278;
    }
    uVar8 = UTexture2D::GetPrivateStaticClass();
    local_298 = CONCAT31(local_298._1_3_,1);
    local_2a0 = (int *)0x0;
    local_2a8 = (undefined8 *)((ulonglong)local_2a8 & 0xffffffff00000000);
    lVar21 = FUN_141799c90(uVar8,0,pwVar18,0);
    if (lVar21 != 0) {
      lVar9 = operator_new(0xa0);
      if (lVar9 == 0) {
        lVar21 = 0;
      }
      else {
        piVar2 = *(int **)(lVar21 + 0xd8);
        pwVar18 = L"";
        if (iVar4 != 0) {
          pwVar18 = pwVar15;
        }
        local_130 = 0x3f8000003f800000;
        uStack_128 = 0x3f8000003f800000;
        iVar4 = 0;
        iVar19 = iVar4;
        if (piVar2 != (int *)0x0) {
          iVar4 = piVar2[1];
          iVar19 = *piVar2;
        }
        local_218 = (float)iVar19;
        local_214 = (float)iVar4;
        puVar10 = (undefined8 *)FName::FName(local_f0,pwVar18,1);
        local_2a8 = &local_130;
        local_298 = 1;
        local_2a0 = (int *)((ulonglong)local_2a0 & 0xffffffff00000000);
        lVar21 = FSlateDynamicImageBrush::FSlateDynamicImageBrush(lVar9,lVar21,&local_218,*puVar10);
      }
      plVar6 = (longlong *)FUN_1404f6ae0(lVar21);
      plVar23 = (longlong *)(lVar21 + 0x88);
      if (lVar21 == 0) {
        plVar23 = (longlong *)0x0;
      }
      local_150 = lVar21;
      local_148 = plVar6;
      if (plVar23 != (longlong *)0x0) {
        if ((*plVar23 != 0) && (plVar23[1] != 0)) {
          piVar2 = (int *)(plVar23[1] + 8);
          LOCK();
          iVar4 = *piVar2;
          if (iVar4 == 0) {
            *piVar2 = 0;
            iVar4 = 0;
          }
          UNLOCK();
          if (0 < iVar4) goto LAB_142ee5de3;
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        *plVar23 = lVar21;
        SharedPointerInternals::FWeakReferencer<1>::AssignReferenceController(plVar23 + 1,plVar6);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar23 = plVar6 + 1;
          lVar9 = *plVar23;
          *(int *)plVar23 = (int)*plVar23 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
      }
LAB_142ee5de3:
      if (lVar21 != 0) {
        TArray<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,TSizedDefaultAllocator<32>_>
        ::AddUniqueImpl<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>_const_&>
                  (lVar14 + 0x28,&local_150);
        local_1a8 = *local_268;
        local_1a0 = (longlong *)local_268[1];
        if (local_1a0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_1a0 + 1) = (int)local_1a0[1] + 1;
          UNLOCK();
        }
        local_2a0 = &local_288;
        local_2a8 = (undefined8 *)CONCAT62(local_2a8._2_6_,*(undefined2 *)(lVar14 + 0x20));
        puVar7 = (undefined8 *)FUN_141937820(local_120,&local_a8,&local_1a8,lVar21);
        puVar10 = local_248;
        *local_248 = *puVar7;
        lVar14 = puVar7[1];
        local_248[1] = lVar14;
        if (lVar14 != 0) {
          LOCK();
          *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
          UNLOCK();
        }
        if (local_118 != (longlong *)0x0) {
          LOCK();
          plVar23 = local_118 + 1;
          lVar14 = *plVar23;
          *(int *)plVar23 = (int)*plVar23 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_118)(local_118);
            LOCK();
            piVar2 = (int *)((longlong)local_118 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_118 + 8))(local_118,1);
            }
          }
        }
        plVar23 = local_1a0;
        if (local_1a0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_1a0 + 1;
          lVar14 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_1a0)(local_1a0);
            LOCK();
            piVar2 = (int *)((longlong)plVar23 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar23 + 8))(plVar23,1);
            }
          }
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar23 = plVar6 + 1;
          lVar14 = *plVar23;
          *(int *)plVar23 = (int)*plVar23 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
        if (local_278 != (wchar_t *)0x0) {
          FMemory::Free(local_278);
        }
        FRunInfo::~FRunInfo(&local_a8);
        return puVar10;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar23 = plVar6 + 1;
        lVar14 = *plVar23;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
    }
    if (local_278 != (wchar_t *)0x0) {
      FMemory::Free(local_278);
    }
  }
  lVar14 = FUN_141834e90();
  local_198 = *local_268;
  local_190 = (longlong *)local_268[1];
  if (local_190 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_190 + 1) = (int)local_190[1] + 1;
    UNLOCK();
  }
  local_2a0 = &local_288;
  local_2a8 = (undefined8 *)CONCAT62(local_2a8._2_6_,*(undefined2 *)(lVar14 + 0x90));
  puVar7 = (undefined8 *)FUN_141937820(local_110,&local_a8,&local_198,lVar14 + 8);
  puVar10 = local_248;
  *local_248 = *puVar7;
  lVar14 = puVar7[1];
  local_248[1] = lVar14;
  if (lVar14 != 0) {
    LOCK();
    *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
    UNLOCK();
  }
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar23 = local_108 + 1;
    lVar14 = *plVar23;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar2 = (int *)((longlong)local_108 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_108 + 8))(local_108,1);
      }
    }
  }
  plVar23 = local_190;
  if (local_190 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_190 + 1;
    lVar14 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_190)(local_190);
      LOCK();
      piVar2 = (int *)((longlong)plVar23 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar23 + 8))(plVar23,1);
      }
    }
  }
LAB_142ee6046:
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  ~TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
            (&local_98);
  if (local_a8 != 0) {
    FMemory::Free();
  }
  return puVar10;
}



// FUNCTION 142ee6090 FUN_142ee6090 body=450 status=ok
// SIG undefined FUN_142ee6090(void)

longlong FUN_142ee6090(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                      undefined1 param_5,undefined4 *param_6,undefined4 *param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  undefined1 local_28 [32];
  
  FWeakObjectPtr::operator=(&local_68,0);
  local_60 = 0;
  local_58 = *param_7;
  local_54 = param_7[1];
  local_50 = *(undefined8 *)(param_7 + 2);
  local_48 = local_68;
  local_44 = local_64;
  local_40 = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar6 = UGPasswordResetPage::GetPrivateStaticClass();
    lVar7 = *(longlong *)(param_1 + 0x40);
    for (lVar8 = lVar7; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
      if (lVar8 == lVar6) goto LAB_142ee6131;
    }
  }
  lVar7 = 0;
LAB_142ee6131:
  local_38 = *param_3;
  local_30 = 0;
  if (local_38 != 0) {
    local_30 = param_3[1];
  }
  lVar7 = FUN_142ee70f0(param_2,&local_38,lVar7,&local_48,&local_58);
  if (lVar7 != 0) {
    lVar8 = UGPasswordResetPage::GetPrivateStaticClass();
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
      uVar9 = FText::FText(local_28,param_4);
      FUN_142f0e010(lVar7,uVar9);
      *(undefined4 *)(lVar7 + 0x2b8) = *param_6;
      *(undefined4 *)(lVar7 + 700) = param_6[1];
      *(undefined8 *)(lVar7 + 0x2c0) = *(undefined8 *)(param_6 + 2);
      if (*(longlong *)(lVar7 + 0x2e8) != 0) {
        UCheckBox::SetCheckedState(*(longlong *)(lVar7 + 0x2e8),param_5);
      }
      goto LAB_142ee61fe;
    }
  }
  lVar7 = 0;
LAB_142ee61fe:
  plVar4 = *(longlong **)(param_4 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return lVar7;
}



// FUNCTION 142ee6260 FUN_142ee6260 body=548 status=ok
// SIG undefined FUN_142ee6260(void)

longlong FUN_142ee6260(longlong *param_1,undefined8 param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 local_100;
  longlong local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  longlong local_90;
  undefined1 local_80 [24];
  undefined1 local_68 [40];
  
  FWeakObjectPtr::operator=(&local_e0,0);
  plVar9 = (longlong *)0x0;
  local_d8 = 0;
  FWeakObjectPtr::operator=(&local_f0,0);
  lVar8 = *param_1;
  local_ac = local_ec;
  local_100 = 0;
  local_a8 = 0;
  local_a0 = local_e0;
  local_9c = local_dc;
  local_d0 = local_d8;
  local_98 = local_d8;
  local_e8 = 0;
  local_b0 = local_f0;
  if (lVar8 != 0) {
    plVar9 = (longlong *)param_1[1];
  }
  local_90 = lVar8;
  lVar5 = FText::FText(local_80,param_3);
  if (((lVar8 == 0) || (plVar9 == (longlong *)0x0)) ||
     (lVar6 = (**(code **)(*plVar9 + 0x98))(plVar9), lVar6 == 0)) {
    lVar8 = 0;
    plVar9 = *(longlong **)(lVar5 + 8);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    goto LAB_142ee6439;
  }
  local_bc = local_ec;
  local_b8 = local_100;
  local_100 = CONCAT44(local_dc,local_e0);
  local_f8 = local_d0;
  local_c0 = local_f0;
  local_d0 = lVar8;
  local_c8 = plVar9;
  uVar7 = FText::FText(local_68,lVar5);
  lVar8 = FUN_142ee6090(lVar6,param_2,&local_d0,uVar7,param_4,&local_100,&local_c0);
  if (lVar8 == 0) {
LAB_142ee63f0:
    lVar8 = 0;
  }
  else {
    lVar6 = UGPasswordResetPage::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_142ee63f0;
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(lVar5);
LAB_142ee6439:
  plVar9 = *(longlong **)(param_3 + 8);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return lVar8;
}



// FUNCTION 142ee6490 FUN_142ee6490 body=389 status=ok
// SIG undefined FUN_142ee6490(void)

longlong FUN_142ee6490(longlong *param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined4 *param_5,undefined4 *param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  undefined1 local_28 [32];
  
  if (((*param_1 == 0) || ((longlong *)param_1[1] == (longlong *)0x0)) ||
     (lVar6 = (**(code **)(*(longlong *)param_1[1] + 0x98))(), lVar6 == 0)) {
    plVar4 = *(longlong **)(param_3 + 8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    return 0;
  }
  local_58 = *param_6;
  local_54 = param_6[1];
  local_50 = *(undefined8 *)(param_6 + 2);
  local_48 = *param_5;
  local_44 = param_5[1];
  local_40 = *(undefined8 *)(param_5 + 2);
  local_38 = *param_1;
  local_30 = 0;
  if (local_38 != 0) {
    local_30 = param_1[1];
  }
  uVar7 = FText::FText(local_28,param_3);
  lVar6 = FUN_142ee6090(lVar6,param_2,&local_38,uVar7,param_4,&local_48,&local_58);
  if (lVar6 != 0) {
    lVar8 = UGPasswordResetPage::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_142ee65b1;
  }
  lVar6 = 0;
LAB_142ee65b1:
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
  return lVar6;
}



// FUNCTION 142ee6620 FUN_142ee6620 body=526 status=ok
// SIG undefined FUN_142ee6620(void)

longlong FUN_142ee6620(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                      longlong *param_5,undefined4 param_6,undefined4 *param_7,undefined4 *param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  undefined1 local_28 [32];
  
  FWeakObjectPtr::operator=(&local_68,0);
  local_60 = 0;
  local_58 = *param_8;
  local_54 = param_8[1];
  local_50 = *(undefined8 *)(param_8 + 2);
  local_48 = local_68;
  local_44 = local_64;
  local_40 = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar6 = UUGStartScreenUW::GetPrivateStaticClass();
    lVar7 = *(longlong *)(param_1 + 0x50);
    for (lVar8 = lVar7; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
      if (lVar8 == lVar6) goto LAB_142ee66c1;
    }
  }
  lVar7 = 0;
LAB_142ee66c1:
  local_38 = *param_3;
  local_30 = 0;
  if (local_38 != 0) {
    local_30 = param_3[1];
  }
  lVar7 = FUN_142ee70f0(param_2,&local_38,lVar7,&local_48,&local_58);
  if (lVar7 != 0) {
    lVar8 = UUGStartScreenUW::GetPrivateStaticClass();
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
      uVar9 = FText::FText(local_28,param_4);
      FUN_142f0e010(lVar7,uVar9);
      *(undefined4 *)(lVar7 + 0x2b8) = *param_7;
      *(undefined4 *)(lVar7 + 700) = param_7[1];
      *(undefined8 *)(lVar7 + 0x2c0) = *(undefined8 *)(param_7 + 2);
      lVar8 = *(longlong *)(lVar7 + 0x2e8);
      if (lVar8 != 0) {
        lVar10 = *param_5;
        lVar6 = lVar10 + (longlong)(int)param_5[1] * 0x18;
        if (lVar10 != lVar6) {
          do {
            uVar9 = FText::ToString(lVar10);
            FUN_1420e0460(*(undefined8 *)(lVar7 + 0x2e8),uVar9);
            lVar10 = lVar10 + 0x18;
          } while (lVar10 != lVar6);
          lVar8 = *(longlong *)(lVar7 + 0x2e8);
        }
        FUN_142134ed0(lVar8,param_6);
      }
      goto LAB_142ee67da;
    }
  }
  lVar7 = 0;
LAB_142ee67da:
  plVar4 = *(longlong **)(param_4 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return lVar7;
}



// FUNCTION 142ee6830 FUN_142ee6830 body=556 status=ok
// SIG undefined FUN_142ee6830(void)

longlong FUN_142ee6830(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                      undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 local_100;
  longlong local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  longlong local_90;
  undefined1 local_80 [24];
  undefined1 local_68 [40];
  
  FWeakObjectPtr::operator=(&local_e0,0);
  plVar9 = (longlong *)0x0;
  local_d8 = 0;
  FWeakObjectPtr::operator=(&local_f0,0);
  lVar8 = *param_1;
  local_ac = local_ec;
  local_100 = 0;
  local_a8 = 0;
  local_a0 = local_e0;
  local_9c = local_dc;
  local_d0 = local_d8;
  local_98 = local_d8;
  local_e8 = 0;
  local_b0 = local_f0;
  if (lVar8 != 0) {
    plVar9 = (longlong *)param_1[1];
  }
  local_90 = lVar8;
  lVar5 = FText::FText(local_80,param_3);
  if (((lVar8 == 0) || (plVar9 == (longlong *)0x0)) ||
     (lVar6 = (**(code **)(*plVar9 + 0x98))(plVar9), lVar6 == 0)) {
    lVar8 = 0;
    plVar9 = *(longlong **)(lVar5 + 8);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    goto LAB_142ee6a11;
  }
  local_bc = local_ec;
  local_b8 = local_100;
  local_100 = CONCAT44(local_dc,local_e0);
  local_f8 = local_d0;
  local_c0 = local_f0;
  local_d0 = lVar8;
  local_c8 = plVar9;
  uVar7 = FText::FText(local_68,lVar5);
  lVar8 = FUN_142ee6620(lVar6,param_2,&local_d0,uVar7,param_4,param_5,&local_100,&local_c0);
  if (lVar8 == 0) {
LAB_142ee69c8:
    lVar8 = 0;
  }
  else {
    lVar6 = UUGStartScreenUW::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_142ee69c8;
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(lVar5);
LAB_142ee6a11:
  plVar9 = *(longlong **)(param_3 + 8);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return lVar8;
}



// FUNCTION 142ee6a60 FUN_142ee6a60 body=399 status=ok
// SIG undefined FUN_142ee6a60(void)

longlong FUN_142ee6a60(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                      undefined4 param_5,undefined4 *param_6,undefined4 *param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  undefined1 local_28 [32];
  
  if (((*param_1 == 0) || ((longlong *)param_1[1] == (longlong *)0x0)) ||
     (lVar6 = (**(code **)(*(longlong *)param_1[1] + 0x98))(), lVar6 == 0)) {
    plVar4 = *(longlong **)(param_3 + 8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    return 0;
  }
  local_58 = *param_7;
  local_54 = param_7[1];
  local_50 = *(undefined8 *)(param_7 + 2);
  local_48 = *param_6;
  local_44 = param_6[1];
  local_40 = *(undefined8 *)(param_6 + 2);
  local_38 = *param_1;
  local_30 = 0;
  if (local_38 != 0) {
    local_30 = param_1[1];
  }
  uVar7 = FText::FText(local_28,param_3);
  lVar6 = FUN_142ee6620(lVar6,param_2,&local_38,uVar7,param_4,param_5,&local_48,&local_58);
  if (lVar6 != 0) {
    lVar8 = UUGStartScreenUW::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_142ee6b8b;
  }
  lVar6 = 0;
LAB_142ee6b8b:
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
  return lVar6;
}



// FUNCTION 142ee6bf0 FUN_142ee6bf0 body=107 status=ok
// SIG undefined FUN_142ee6bf0(void)

void FUN_142ee6bf0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145993040;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
    FUN_14170c210(puVar1 + 1,uVar2);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_145993088;
  }
  return;
}



// FUNCTION 142ee6c60 FUN_142ee6c60 body=107 status=ok
// SIG undefined FUN_142ee6c60(void)

void FUN_142ee6c60(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145992fb0;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
    FUN_14170c210(puVar1 + 1,uVar2);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_145992ff8;
  }
  return;
}



// FUNCTION 142ee6cd0 FUN_142ee6cd0 body=107 status=ok
// SIG undefined FUN_142ee6cd0(void)

void FUN_142ee6cd0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145992f20;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
    FUN_14170c210(puVar1 + 1,uVar2);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_145992f68;
  }
  return;
}



// FUNCTION 142ee6d40 FUN_142ee6d40 body=68 status=ok
// SIG undefined FUN_142ee6d40(void)

void FUN_142ee6d40(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145993158;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 142ee6d90 FUN_142ee6d90 body=68 status=ok
// SIG undefined FUN_142ee6d90(void)

void FUN_142ee6d90(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145993118;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 142ee6de0 FUN_142ee6de0 body=212 status=ok
// SIG undefined FUN_142ee6de0(void)

void FUN_142ee6de0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  longlong *local_30;
  
  FWeakObjectPtr::operator=(&local_68,0);
  local_38 = *param_1;
  plVar3 = (longlong *)0x0;
  local_60 = 0;
  local_30 = plVar3;
  if (local_38 != 0) {
    local_30 = (longlong *)param_1[1];
  }
  plVar2 = plVar3;
  if (local_30 != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(*local_30 + 0xa0))(local_30,local_res8);
    plVar2 = (longlong *)*puVar1;
  }
  local_58 = local_68;
  local_54 = local_64;
  if (local_38 == 0) {
    local_30 = plVar3;
  }
  local_50 = 0;
  local_48 = local_68;
  local_44 = local_64;
  local_40 = 0;
  FUN_142ee72c0(&local_38,param_2,plVar2,&local_48,&local_58);
  return;
}



// FUNCTION 142ee6ec0 FUN_142ee6ec0 body=191 status=ok
// SIG undefined FUN_142ee6ec0(void)

void FUN_142ee6ec0(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  
  local_28 = *param_1;
  lVar2 = 0;
  lVar3 = lVar2;
  if ((local_28 != 0) && (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0xa0))(plVar1,local_res8);
    local_28 = *param_1;
    lVar3 = *plVar1;
  }
  local_48 = *param_4;
  local_44 = param_4[1];
  local_40 = *(undefined8 *)(param_4 + 2);
  local_38 = *param_3;
  local_34 = param_3[1];
  local_30 = *(undefined8 *)(param_3 + 2);
  if (local_28 != 0) {
    lVar2 = param_1[1];
  }
  local_20 = lVar2;
  FUN_142ee72c0(&local_28,param_2,lVar3,&local_38,&local_48);
  return;
}



// FUNCTION 142ee6f80 FUN_142ee6f80 body=124 status=ok
// SIG undefined FUN_142ee6f80(void)

longlong FUN_142ee6f80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = FUN_142f2a9e0();
  lVar2 = FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  if (lVar2 != 0) {
    FUN_142ef1bf0(lVar2,param_2);
  }
  return lVar2;
}


