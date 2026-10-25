// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1410a8f10 FUN_1410a8f10 body=316 status=ok
// SIG undefined FUN_1410a8f10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410a8f10(longlong *param_1,undefined1 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  code *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  *(undefined1 *)((longlong)param_1 + 0x69c) = param_2;
  param_1[0xd4] = *param_3;
  (**(code **)(*param_1 + 0x578))();
  uStack_c0 = CONCAT31(uStack_c0._1_3_,param_2);
  local_88 = (longlong *)0x0;
  local_78 = 0;
  local_c8 = param_1;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar1 + 1) = (undefined4)local_c8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = local_c8._4_4_;
    *(undefined4 *)(puVar1 + 2) = uStack_c0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_bc;
  }
  local_b8[0] = FUN_14107d930;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410a9050 FUN_1410a9050 body=160 status=ok
// SIG undefined FUN_1410a9050(void)

void FUN_1410a9050(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_38 = 0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14461b7a0;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
    *(undefined1 *)(puVar1 + 3) = param_2;
    *(undefined1 *)((longlong)puVar1 + 0x19) = param_3;
  }
  local_68[0] = &LAB_14107d3e0;
  FUN_14204c280(local_68);
  return;
}



// FUNCTION 1410a90f0 FUN_1410a90f0 body=125 status=ok
// SIG undefined FUN_1410a90f0(void)

undefined1 FUN_1410a90f0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x350) != 0) && (lVar2 = *(longlong *)(param_1 + 0x3b8), lVar2 != 0))
  {
    uVar1 = UBlendableInterface::GetPrivateStaticClass();
    lVar2 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar1);
    if (lVar2 != 0) {
      FUN_142ed3610(lVar2,0);
    }
    FUN_142f0d400(*(undefined8 *)(param_1 + 0x350),*(undefined8 *)(param_1 + 0x3b8),0);
    *(undefined8 *)(param_1 + 0x3b8) = 0;
    return 1;
  }
  return 0;
}



// FUNCTION 1410a9170 FUN_1410a9170 body=502 status=ok
// SIG undefined FUN_1410a9170(void)

void FUN_1410a9170(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_18;
  longlong local_10;
  
  lVar5 = *(longlong *)(param_1 + 0x348);
  lVar4 = 0;
  if (((lVar5 == 0) || (*(char *)(lVar5 + 0x1e8) == '\0')) &&
     (lVar5 = lVar4, *(char *)(param_1 + 0x3a8) != '\0')) {
    lVar5 = *(longlong *)(param_1 + 0x388);
  }
  lVar1 = *(longlong *)(param_1 + 0x2e8);
  local_10 = lVar4;
  local_18 = lVar1;
  if (lVar1 != 0) {
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
  }
  FUN_1410a3730(param_1,&local_18,0,lVar5,*(undefined8 *)(param_1 + 0x328),
                *(undefined8 *)(param_1 + 0x340));
  lVar1 = *(longlong *)(param_1 + 0x340);
  lVar3 = lVar4;
  local_18 = lVar1;
  if (lVar1 != 0) {
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    lVar3 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
  }
  local_10 = lVar3;
  FUN_1410a3730(param_1,&local_18,0,lVar5,*(undefined8 *)(param_1 + 0x2e8),0);
  lVar1 = *(longlong *)(param_1 + 0x328);
  lVar3 = lVar4;
  local_18 = lVar1;
  if (lVar1 != 0) {
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    lVar3 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
  }
  local_10 = lVar3;
  FUN_1410a3730(param_1,&local_18,0,lVar5,0,*(undefined8 *)(param_1 + 0x2e8));
  lVar5 = *(longlong *)(param_1 + 0x388);
  if (lVar5 != 0) {
    if (*(int *)(param_1 + 1000) < 1) {
      *(undefined1 *)(lVar5 + 0x24f) = 1;
      lVar5 = *(longlong *)(param_1 + 0x388);
      local_18 = lVar5;
      if (lVar5 != 0) {
        uVar2 = UBlendableInterface::GetPrivateStaticClass();
        lVar4 = UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar2);
      }
      uVar2 = *(undefined8 *)(param_1 + 0x2e8);
    }
    else {
      *(undefined1 *)(lVar5 + 0x24f) = 0;
      lVar5 = *(longlong *)(param_1 + 0x388);
      local_18 = lVar5;
      if (lVar5 == 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x328);
      }
      else {
        uVar2 = UBlendableInterface::GetPrivateStaticClass();
        lVar4 = UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar2);
        uVar2 = *(undefined8 *)(param_1 + 0x328);
      }
    }
    local_10 = lVar4;
    FUN_1410a3730(param_1,&local_18,uVar2,0,0,0);
  }
  return;
}



// FUNCTION 1410a9370 FUN_1410a9370 body=619 status=ok
// SIG undefined FUN_1410a9370(void)

void FUN_1410a9370(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  if (*(int *)(param_1 + 0x1e8) <= (int)(uint)*(byte *)(param_1 + 0x170)) {
    return;
  }
  uVar9 = (ulonglong)*(byte *)(param_1 + 0x170);
  if (*(longlong *)(*(longlong *)(param_1 + 0x1e0) + uVar9 * 8) == 0) {
    return;
  }
  uVar7 = 0;
  iVar5 = 0;
  fVar11 = 0.0;
  if (*(longlong **)(param_1 + 0x178) == (longlong *)0x0) {
    if (*(longlong *)(param_1 + 0x180) == 0) {
      if (*(longlong *)(param_1 + 0x188) == 0) goto LAB_1410a945c;
      fVar11 = (float)FUN_1430774d0();
      fVar10 = (float)FUN_1430774d0(*(undefined8 *)(param_1 + 0x188));
      fVar10 = fVar10 * 100.0;
    }
    else {
      fVar10 = *(float *)(*(longlong *)(param_1 + 0x180) + 0x218);
      fVar11 = fVar10;
    }
    iVar5 = (int)fVar10;
    uVar7 = 100;
  }
  else {
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x178) + 0x420))();
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x178) + 0x418))();
    uVar7 = (**(code **)(**(longlong **)(param_1 + 0x178) + 0x438))();
    fVar11 = (float)iVar5 / (float)iVar6;
  }
LAB_1410a945c:
  FUN_142f0ead0(*(undefined8 *)(*(longlong *)(param_1 + 0x1e0) + uVar9 * 8),fVar11);
  lVar4 = *(longlong *)(param_1 + 0x1e0);
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  uVar8 = FText::AsNumber(local_48,iVar5,0,&local_68);
  FUN_142f0c7d0(*(undefined8 *)(lVar4 + uVar9 * 8),uVar8);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  plVar1 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_60 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x1e0);
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  uVar8 = FText::AsNumber(local_30,uVar7,0,&local_58);
  FUN_142f0e260(*(undefined8 *)(lVar4 + uVar9 * 8),uVar8);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  plVar1 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_50 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
    }
  }
  return;
}



// FUNCTION 1410a95e0 FUN_1410a95e0 body=1155 status=ok
// SIG undefined FUN_1410a95e0(void)

void FUN_1410a95e0(longlong param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  longlong local_res18;
  longlong local_res20;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 local_50 [24];
  
  if (*(longlong *)(param_1 + 0xdf8) == 0) {
    return;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar6 = *(longlong *)(DAT_146b33f38 + 0x58);
  plVar4 = (longlong *)FUN_141083150(param_1);
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  if (lVar6 == 0) {
    return;
  }
  lVar11 = 0;
  bVar2 = false;
  if (param_2 == *(longlong *)(lVar6 + 0x308)) {
    uVar5 = FUN_14301f8f0();
    lVar6 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar5);
    if (lVar6 == 0) {
      return;
    }
    lVar6 = *(longlong *)(lVar6 + 0x208);
    if (lVar6 == 0) {
      return;
    }
    plVar10 = *(longlong **)(lVar6 + 0xb8);
    plVar4 = plVar10 + *(int *)(lVar6 + 0xc0);
    lVar6 = lVar11;
    if (plVar10 == plVar4) {
      return;
    }
    do {
      lVar8 = *plVar10;
      if (lVar8 != 0) {
        lVar7 = FUN_1412e5140();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          lVar6 = UNiagaraSystem::GetEffectType(lVar8);
        }
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar4);
  }
  else if (param_2 == *(longlong *)(lVar6 + 0x2b8)) {
    lVar8 = param_1 + 0x968;
    lVar6 = FWeakObjectPtr::Get(lVar8);
    if (lVar6 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(param_1 + 0x970)) && (*(longlong *)(param_1 + 0x978) != 0)) {
        lVar6 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar8,lVar6);
        if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_1 + 0x970) = DAT_1464b56f4;
        }
        lVar6 = FWeakObjectPtr::Get(lVar8);
        if (lVar6 != 0) goto LAB_1410a9798;
      }
LAB_1410a97ce:
      lVar6 = lVar11;
    }
    else {
LAB_1410a9798:
      lVar8 = FUN_1430a7cf0();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1410a97ce;
    }
    bVar2 = true;
  }
  else {
    lVar6 = FUN_14149b100();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return;
    }
    plVar4 = (longlong *)FUN_14307cf20(plVar4,(char)plVar4[0xd2]);
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    lVar6 = (**(code **)(*plVar4 + 0x460))(plVar4);
    if (lVar6 == 0) {
      return;
    }
    lVar6 = *(longlong *)(lVar6 + 0x180);
  }
  if (lVar6 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0xa08) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0xa10) == 0) {
    return;
  }
  local_res20 = FUN_140c453a0();
  if (local_res20 == 0) {
    return;
  }
  if (!bVar2) {
    puVar9 = (undefined4 *)
             FUN_142d61d40(&local_68,&local_res20,*(undefined8 *)(param_1 + 0xa10),
                           *(undefined8 *)(lVar6 + 0x60));
    local_80 = *puVar9;
    uStack_7c = puVar9[1];
    uStack_78 = puVar9[2];
    uStack_74 = puVar9[3];
    local_70 = *(undefined8 *)(puVar9 + 4);
    goto LAB_1410a99d2;
  }
  lVar8 = param_1 + 0x990;
  lVar7 = FWeakObjectPtr::Get(lVar8);
  if (lVar7 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x998)) && (*(longlong *)(param_1 + 0x9a0) != 0)) {
      lVar7 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar8,lVar7);
      if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x998) = DAT_1464b56f4;
      }
      lVar7 = FWeakObjectPtr::Get(lVar8);
      if (lVar7 != 0) goto LAB_1410a9905;
    }
LAB_1410a993b:
    lVar7 = lVar11;
  }
  else {
LAB_1410a9905:
    lVar8 = FUN_142e19540();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1410a993b;
  }
  local_68 = CONCAT31(local_68._1_3_,0xff);
  uStack_60 = 0;
  local_58 = 0;
  if ((*(longlong *)(param_1 + 0xa10) == 0) || (local_res18 = FUN_140c453a0(), local_res18 == 0)) {
    local_70 = CONCAT44(uStack_54,local_58);
    local_80 = local_68;
    uStack_7c = uStack_64;
    uStack_78 = (undefined4)uStack_60;
    uStack_74 = uStack_60._4_4_;
  }
  else {
    puVar9 = (undefined4 *)
             FUN_142d622d0(local_50,&local_res18,*(undefined8 *)(param_1 + 0xa10),lVar7);
    local_80 = *puVar9;
    uStack_7c = puVar9[1];
    uStack_78 = puVar9[2];
    uStack_74 = puVar9[3];
    local_70 = *(undefined8 *)(puVar9 + 4);
  }
LAB_1410a99d2:
  cVar3 = FUN_142d52a00(&local_80);
  if (cVar3 != '\0') {
    uVar5 = FUN_142d52a20(&local_80);
    uVar5 = FArchive::operator<<(uVar5);
    fVar12 = (float)FUN_142d61c30(uVar5);
    uVar5 = FUN_142d52a20(&local_80);
    uVar5 = FArchive::operator<<(uVar5);
    fVar13 = (float)FUN_142d5fed0(uVar5);
    FUN_1410a43e0(*(undefined8 *)(param_1 + 0xdf8),lVar6 + 0x50,(int)fVar13,(int)fVar12);
  }
  return;
}



// FUNCTION 1410a9a70 FUN_1410a9a70 body=140 status=ok
// SIG undefined FUN_1410a9a70(void)

void FUN_1410a9a70(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
  }
  local_58[0] = &LAB_14107d420;
  FUN_14208c5d0(param_1,local_58);
  return;
}



// FUNCTION 1410a9b00 FUN_1410a9b00 body=327 status=ok
// SIG undefined FUN_1410a9b00(void)

void FUN_1410a9b00(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong local_18;
  ulonglong local_10;
  
  cVar4 = '\x01';
  lVar1 = FUN_142eb65a0();
  lVar7 = *(longlong *)(param_1 + 0xb70);
  if ((*(longlong *)(param_1 + 0xb60) != 0) && (*(longlong *)(param_1 + 0xb50) != 0)) {
    lVar2 = FUN_140b5da00();
    lVar5 = FUN_140e4c7f0(*(undefined8 *)(param_1 + 0xb60));
    if ((lVar5 != 0) && (lVar2 != 0)) {
      if (*(char *)(param_1 + 0xb78) == '\x02') {
        cVar4 = FUN_140e45ba0();
      }
      else {
        cVar4 = FUN_140e45d30(*(undefined8 *)(param_1 + 0xb60),lVar2,lVar5);
      }
    }
  }
  lVar2 = *(longlong *)(param_1 + 0xdf8);
  if (lVar2 != 0) {
    if ((cVar4 == '\0') && (lVar1 == lVar7)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (*(longlong *)(lVar2 + 0x480) != 0) {
      pwVar8 = L"red";
      if (bVar3) {
        pwVar8 = L"green";
      }
      local_18 = 0;
      local_10 = 0;
      if (*pwVar8 != L'\0') {
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (pwVar8[lVar7] != L'\0');
        uVar6 = (int)lVar7 + 1;
        local_10 = (ulonglong)uVar6;
        if (0 < (int)uVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
        }
        FGenericPlatformString::Memcpy(local_18,pwVar8,(longlong)(int)uVar6 * 2);
      }
      FUN_142088cf0(*(undefined8 *)(lVar2 + 0x480),&local_18);
      if (local_18 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1410a9c50 FUN_1410a9c50 body=1600 status=ok
// SIG undefined FUN_1410a9c50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410a9c50(longlong param_1)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  float *pfVar16;
  char *pcVar17;
  float *pfVar18;
  longlong lVar19;
  undefined1 auStack_268 [32];
  undefined4 *local_248;
  undefined1 *puStack_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined1 local_220;
  undefined8 *local_218;
  longlong *local_210;
  undefined8 local_208;
  longlong local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 *local_1e8;
  ulonglong *puStack_1e0;
  undefined1 local_1d8 [16];
  undefined4 *local_1c8;
  undefined1 *puStack_1c0;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_190 [8];
  longlong *local_188;
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined4 local_e0 [2];
  longlong local_d8;
  longlong *local_c8;
  char local_b8;
  undefined1 local_b0 [8];
  undefined4 local_a8 [2];
  longlong local_a0;
  undefined1 local_80;
  undefined4 local_78;
  longlong local_70;
  undefined1 local_50;
  ulonglong local_48 [4];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_238 = 0;
  if ((*(longlong *)(param_1 + 0xa10) != 0) && (*(longlong *)(param_1 + 0xa18) != 0)) {
    iVar10 = ASwitchActor::GetSelectedOption();
    iVar11 = FUN_142b47070(*(undefined8 *)(param_1 + 0xa18));
    local_220 = 0;
    local_218 = (undefined8 *)0x0;
    local_210 = (longlong *)0x0;
    local_230 = _DAT_1464aa6c0;
    uStack_228 = _DAT_1464aa6c8;
    if (0 < iVar11) {
      pfVar16 = *(float **)(param_1 + 0xae0);
      pfVar18 = pfVar16 + (longlong)*(int *)(param_1 + 0xae8) * 0xc;
      for (; pfVar16 != pfVar18; pfVar16 = pfVar16 + 0xc) {
        if (*pfVar16 <= ((float)iVar10 * 100.0) / (float)iVar11) {
          FUN_140692440(&local_230,pfVar16 + 2);
        }
      }
    }
    if (iVar11 < 1) {
      uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_130,L"{0}/Unlimited",L"GFxVendingMachineMenu",
                          L"HeaderInfiniteFormat");
      puVar14 = (undefined8 *)FTextFormat::FTextFormat(local_f0,uVar12);
      local_e0[0] = 0;
      local_248 = local_e0;
      local_b8 = '\0';
      puStack_240 = local_b0;
      local_208 = *puVar14;
      local_200 = puVar14[1];
      if (local_200 != 0) {
        LOCK();
        *(int *)(local_200 + 8) = *(int *)(local_200 + 8) + 1;
        UNLOCK();
      }
      local_1c8 = local_248;
      puStack_1c0 = puStack_240;
      local_d8 = (longlong)iVar10;
      uVar12 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_1b8,&local_1c8);
      uVar12 = FText::Format(local_148,&local_208,uVar12);
      FText::FText(local_1a8,uVar12);
      if (local_140 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_140 + 1;
        lVar19 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*local_140)(local_140);
          LOCK();
          piVar1 = (int *)((longlong)local_140 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_140 + 8))(local_140,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_1b8);
      if ((local_b8 != '\0') && (local_b8 = '\0', local_c8 != (longlong *)0x0)) {
        LOCK();
        plVar13 = local_c8 + 1;
        lVar19 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*local_c8)(local_c8);
          LOCK();
          piVar1 = (int *)((longlong)local_c8 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_c8 + 8))(local_c8,1);
          }
        }
      }
      plVar13 = (longlong *)puVar14[1];
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar13 + 1;
        lVar19 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      puVar15 = local_1a8;
      bVar8 = false;
      bVar7 = false;
      bVar6 = true;
      bVar5 = true;
    }
    else {
      uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_118,L"BACKPACK {0}/{1}",L"GFxVendingMachineMenu",
                          L"HeaderCountsFormat");
      plVar13 = (longlong *)FTextFormat::FTextFormat(local_100,uVar12);
      local_a8[0] = 0;
      local_1e8 = local_a8;
      local_80 = 0;
      puStack_1e0 = local_48;
      puStack_240 = (undefined1 *)plVar13[1];
      local_248 = (undefined4 *)*plVar13;
      local_78 = 0;
      local_50 = 0;
      if (puStack_240 != (undefined1 *)0x0) {
        LOCK();
        *(int *)(puStack_240 + 8) = *(int *)(puStack_240 + 8) + 1;
        UNLOCK();
      }
      local_a0 = (longlong)iVar10;
      local_70 = (longlong)iVar11;
      uVar12 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_1d8,&local_1e8);
      uVar12 = FText::Format(local_160,&local_248,uVar12);
      FText::FText(local_190,uVar12);
      if (local_158 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_158 + 1;
        lVar19 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*local_158)(local_158);
          LOCK();
          piVar1 = (int *)((longlong)local_158 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_158 + 8))(local_158,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_1d8);
      lVar19 = 2;
      pcVar17 = &stack0xffffffffffffffe0;
      do {
        lVar19 = lVar19 + -1;
        pcVar2 = pcVar17 + -0x30;
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
          plVar4 = *(longlong **)(pcVar17 + -0x40);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar4 + 1;
            lVar9 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
        }
        pcVar17 = pcVar2;
      } while (lVar19 != 0);
      plVar13 = (longlong *)plVar13[1];
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar13 + 1;
        lVar19 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      puVar15 = local_190;
      bVar8 = true;
      bVar7 = true;
      bVar6 = false;
      bVar5 = false;
    }
    FText::FText(local_178,puVar15);
    if ((bVar5) && (local_1a0 != (longlong *)0x0)) {
      LOCK();
      plVar13 = local_1a0 + 1;
      lVar19 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar19 == 1) {
        (**(code **)*local_1a0)(local_1a0);
        LOCK();
        piVar1 = (int *)((longlong)local_1a0 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_1a0 + 8))(local_1a0,1);
        }
      }
    }
    if ((bVar6) && (local_128 != (longlong *)0x0)) {
      LOCK();
      plVar13 = local_128 + 1;
      lVar19 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar19 == 1) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar1 = (int *)((longlong)local_128 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_128 + 8))(local_128,1);
        }
      }
    }
    if ((bVar7) && (local_188 != (longlong *)0x0)) {
      LOCK();
      plVar13 = local_188 + 1;
      lVar19 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar19 == 1) {
        (**(code **)*local_188)(local_188);
        LOCK();
        piVar1 = (int *)((longlong)local_188 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_188 + 8))(local_188,1);
        }
      }
    }
    if ((bVar8) && (local_110 != (longlong *)0x0)) {
      LOCK();
      plVar13 = local_110 + 1;
      lVar19 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar19 == 1) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar1 = (int *)((longlong)local_110 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_110 + 8))(local_110,1);
        }
      }
    }
    if ((*(longlong *)(param_1 + 0xd88) != 0) && (*(longlong *)(param_1 + 0xd90) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0xd90) + 8);
      LOCK();
      iVar10 = *piVar1;
      if (iVar10 == 0) {
        *piVar1 = 0;
        iVar10 = 0;
      }
      UNLOCK();
      if (0 < iVar10) {
        UMistDebugEntityScreen::InspectEntity(param_1 + 0xd80,local_178,1,0);
        local_1f8 = local_230;
        uStack_1f0 = uStack_228;
        if (local_218 != (undefined8 *)0x0) {
          local_1f8 = *local_218;
          uStack_1f0 = local_218[1];
        }
        FUN_142f0bf30(param_1 + 0xd80,&local_1f8,1);
      }
    }
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_170 + 1;
      lVar19 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar19 == 1) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar1 = (int *)((longlong)local_170 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_170 + 8))(local_170,1);
        }
      }
    }
    plVar13 = local_210;
    if (local_210 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_210 + 1;
      lVar19 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar19 == 1) {
        (**(code **)*local_210)(local_210);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_210 + 8))(local_210,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1410aa290 FUN_1410aa290 body=498 status=ok
// SIG undefined FUN_1410aa290(void)

void FUN_1410aa290(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  longlong local_18 [2];
  
  if ((*(longlong *)(param_1 + 0x1e0) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 0x340), lVar1 != 0)) {
    FUN_142ed2820(lVar1,*(char *)(param_1 + 0x1e8) != '\0',1);
  }
  if (*(char *)(param_1 + 0x1e8) == '\0') {
    if (*(longlong **)(param_1 + 400) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 400) + 0x2a8))();
    }
    if (*(longlong **)(param_1 + 0x198) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x198) + 0x2a8))();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x1a8) != 0) {
      FUN_1410a3440(*(longlong *)(param_1 + 0x1a8),0);
    }
    if (*(longlong *)(param_1 + 0x1b8) != 0) {
      FUN_1410a3440(*(longlong *)(param_1 + 0x1b8),0);
    }
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    if (*(char *)(param_1 + 0x1e8) == '\0') {
      FUN_1410f2ad0();
    }
    else {
      FUN_1410cdc50();
    }
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    if (*(char *)(param_1 + 0x1e8) == '\0') {
      FUN_1410f2ad0();
    }
    else {
      FUN_1410cdc50();
    }
  }
  (**(code **)(*(longlong *)(param_1 + 0x170) + 0x38))
            ((longlong *)(param_1 + 0x170),*(undefined1 *)(param_1 + 0x1e8));
  if (*(char *)(param_1 + 0x1e8) == '\0') {
    local_18[0] = 0;
    local_18[1] = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    uVar4 = 0xe;
    pwVar3 = L"closed";
  }
  else {
    if (*(longlong *)(param_1 + 0x1a8) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_142eb7440();
    }
    if (iVar2 == 3) {
      local_18[0] = 0;
      local_18[1] = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      uVar4 = 0xc;
      pwVar3 = L"three";
    }
    else if (iVar2 == 4) {
      local_18[0] = 0;
      local_18[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      uVar4 = 10;
      pwVar3 = L"four";
    }
    else {
      if (iVar2 != 5) {
        return;
      }
      local_18[0] = 0;
      local_18[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      uVar4 = 10;
      pwVar3 = L"five";
    }
  }
  FGenericPlatformString::Memcpy(local_18[0],pwVar3,uVar4);
  FUN_142088910(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410aa490 FUN_1410aa490 body=307 status=ok
// SIG undefined FUN_1410aa490(void)

float * FUN_1410aa490(longlong param_1,float *param_2)

{
  char cVar1;
  float fVar2;
  undefined8 local_28;
  undefined4 local_20;
  float local_18;
  float local_14;
  
  local_28 = *(undefined8 *)(param_1 + 0xca0);
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  local_20 = *(undefined4 *)(param_1 + 0xca8);
  if (((*(longlong *)(param_1 + 0xcc8) != 0) &&
      (*(longlong *)(*(longlong *)(param_1 + 0xcc8) + 0x528) != 0)) &&
     (cVar1 = FUN_142edb1a0(local_28,&local_28,param_1 + 0xcd0,1,1), cVar1 != '\0')) {
    *(float *)(param_1 + 0xcd0) = *(float *)(param_1 + 0xcb8) + *(float *)(param_1 + 0xcd0);
    *(float *)(param_1 + 0xcd4) = *(float *)(param_1 + 0xcbc) + *(float *)(param_1 + 0xcd4);
    FUN_1426e1ca0(*(undefined8 *)(*(longlong *)(param_1 + 0xcc8) + 0x528),&local_18);
    *(ulonglong *)param_2 = CONCAT44(local_14 - local_28._4_4_,local_18 - (float)local_28);
    param_2[2] = 0.0;
  }
  fVar2 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1] + param_2[2] * param_2[2]);
  *(bool *)(param_1 + 0xd38) =
       fVar2 < *(float *)(param_1 + 0xe50) || fVar2 == *(float *)(param_1 + 0xe50);
  return param_2;
}



// FUNCTION 1410aa5d0 FUN_1410aa5d0 body=244 status=ok
// SIG undefined FUN_1410aa5d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410aa5d0(longlong param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [80];
  code *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uStack_c0 = CONCAT31(uStack_c0._1_3_,param_2);
  local_38 = (longlong *)0x0;
  local_28 = 0;
  local_c8 = param_1;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar1 + 1) = (undefined4)local_c8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = local_c8._4_4_;
    *(undefined4 *)(puVar1 + 2) = uStack_c0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_bc;
  }
  local_68[0] = FUN_14107daf0;
  uVar2 = FUN_1420849a0(param_1,local_b8,local_68);
  FUN_14208c4f0(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 0x10e1) = 1;
  return;
}



// FUNCTION 1410aa6d0 FUN_1410aa6d0 body=872 status=ok
// SIG undefined FUN_1410aa6d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410aa6d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  if ((*(longlong *)(param_1 + 0x430) != 0) && (param_2 != 0)) {
    if (*(longlong *)(param_2 + 0x910) != 0) {
      FUN_142d1bf20(*(longlong *)(param_2 + 0x910),param_2 + 0x12d0);
    }
    uVar7 = FUN_142d52a20(param_2 + 0x12d0);
    uVar7 = FArchive::operator<<(uVar7);
    uVar9 = FUN_142d5fea0(uVar7);
    FUN_142f0ead0(*(undefined8 *)(param_1 + 0x430),uVar9);
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    uVar7 = FUN_142d52a20(param_2 + 0x12d0);
    uVar7 = FArchive::operator<<(uVar7);
    fVar10 = (float)FUN_142d5fed0(uVar7);
    uVar7 = FText::AsNumber(local_48,(int)ROUND(fVar10 * 2.0 - 0.5) >> 1,0,&local_68);
    FUN_142f0c7d0(*(undefined8 *)(param_1 + 0x430),uVar7);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    plVar1 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_60 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x438) != 0) && (param_2 != 0)) {
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(int *)(lVar6 + 0x38) < DAT_146866ca8) {
      _Init_thread_header(&DAT_146866ca8);
      if (DAT_146866ca8 == -1) {
        DAT_146866c90 = 0xff;
        _DAT_146866c98 = 0;
        DAT_146866ca0._0_4_ = 0;
        _Init_thread_footer(&DAT_146866ca8);
      }
    }
    lVar5 = *(longlong *)(param_2 + 0x910);
    if (lVar5 == 0) {
      puVar8 = &DAT_146866c90;
    }
    else {
      if (*(int *)(lVar6 + 0x38) < DAT_146866c88) {
        _Init_thread_header(&DAT_146866c88);
        if (DAT_146866c88 == -1) {
          DAT_146866c70 = 0xff;
          _DAT_146866c78 = 0;
          DAT_146866c80._0_4_ = 0;
          _Init_thread_footer(&DAT_146866c88);
        }
      }
      if (*(int *)(lVar5 + 0x680) < 1) {
        puVar8 = &DAT_146866c70;
      }
      else {
        puVar8 = (undefined *)(*(longlong *)(lVar5 + 0x678) + 0x60);
      }
    }
    uVar7 = FUN_142d52a20(puVar8);
    uVar7 = FArchive::operator<<(uVar7);
    uVar9 = FUN_142d5fea0(uVar7);
    FUN_142f0ead0(*(undefined8 *)(param_1 + 0x438),uVar9);
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    uVar7 = FUN_142d52a20(puVar8);
    uVar7 = FArchive::operator<<(uVar7);
    fVar10 = (float)FUN_142d5fed0(uVar7);
    uVar7 = FText::AsNumber(local_30,(int)ROUND(fVar10 * 2.0 - 0.5) >> 1,0,&local_58);
    FUN_142f0c7d0(*(undefined8 *)(param_1 + 0x438),uVar7);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)local_28 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_28 + 8))(local_28,1);
        }
      }
    }
    plVar1 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_50 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1410aaa40 FUN_1410aaa40 body=1313 status=ok
// SIG undefined FUN_1410aaa40(void)

void FUN_1410aaa40(longlong *param_1)

{
  uint *puVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  longlong *plVar18;
  float fVar19;
  int local_res8 [2];
  undefined8 local_res10;
  undefined1 local_res18 [8];
  int local_138;
  uint uStack_134;
  uint uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  longlong local_118;
  undefined4 local_110;
  undefined8 local_104;
  longlong *local_f8;
  undefined8 uStack_f0;
  uint *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  longlong *local_c8;
  undefined8 uStack_c0;
  uint *puStack_b8;
  uint uStack_b0;
  uint uStack_ac;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined4 local_88;
  
  iVar13 = 0x780;
  local_res8[0] = 0x780;
  iVar17 = 0x438;
  lVar7 = (**(code **)(*param_1 + 0x148))();
  if (lVar7 != 0) {
    (**(code **)(*param_1 + 0x148))(param_1);
    lVar7 = UWorld::GetGameViewport();
    if (lVar7 != 0) {
      (**(code **)(*param_1 + 0x148))(param_1);
      lVar7 = UWorld::GetGameViewport();
      if (*(longlong *)(lVar7 + 0xb0) != 0) {
        uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar7 = UWorld::GetGameViewport(uVar8);
        piVar9 = (int *)(**(code **)(**(longlong **)(lVar7 + 0xb0) + 0x20))
                                  (*(longlong **)(lVar7 + 0xb0),&local_res10);
        iVar17 = piVar9[1];
        iVar13 = *piVar9;
        local_res8[0] = iVar13;
        if (iVar17 < 1) {
          fVar19 = 1.0;
          goto LAB_1410aab08;
        }
      }
    }
  }
  fVar19 = ((float)iVar13 / (float)iVar17) * 0.5625;
LAB_1410aab08:
  iVar13 = local_res8[0];
  if ((param_1[0x16a] != 0) && (*(longlong *)(param_1[0x16a] + 0x578) != 0)) {
    iVar11 = (int)param_1[0x12a];
    if ((-1 < iVar11) && (iVar11 < (int)param_1[0x129])) {
      plVar18 = (longlong *)((longlong)iVar11 * 0x50 + param_1[0x128]);
      uVar3 = *(uint *)(plVar18 + 5);
      puVar1 = (uint *)(plVar18 + 2);
      local_138 = 0;
      uStack_134 = 1;
      uStack_124 = 0;
      iStack_120 = 0;
      if (uVar3 != 0) {
        puVar16 = (uint *)plVar18[4];
        if ((uint *)plVar18[4] == (uint *)0x0) {
          puVar16 = puVar1;
        }
        uVar4 = *puVar16;
        iStack_120 = 0;
        local_138 = 0;
        while (uVar4 == 0) {
          lVar7 = (longlong)local_138;
          iStack_120 = iStack_120 + 0x20;
          iVar11 = local_138 + 1;
          bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_138;
          local_138 = iVar11;
          if (bVar5) goto LAB_1410aac32;
          uVar4 = puVar16[lVar7 + 1];
        }
        uStack_134 = -uVar4 & uVar4;
        iVar11 = 0x1f;
        if (uStack_134 != 0) {
          for (; uStack_134 >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        if (uStack_134 == 0) {
          iVar11 = 0x20;
        }
        else {
          iVar11 = 0x1f - iVar11;
        }
        uStack_124 = (iStack_120 - iVar11) + 0x1f;
        if ((int)uVar3 < (int)uStack_124) {
LAB_1410aac32:
          uStack_124 = uVar3;
        }
      }
      uVar4 = *(uint *)(plVar18 + 5);
      uStack_e0 = 0xffffffff;
      uStack_dc = uStack_124;
      local_d8 = CONCAT44(uStack_11c,iStack_120);
      uStack_f0 = CONCAT44(uStack_134,local_138);
      uVar15 = uVar4 & 0xffffffe0;
      local_f8 = plVar18;
      local_e8 = puVar1;
      local_c8 = plVar18;
      uStack_c0 = uStack_f0;
      puStack_b8 = puVar1;
      uStack_a8 = local_d8;
      uStack_b0 = uStack_e0;
      uStack_ac = uStack_dc;
      uStack_124 = uVar4;
      if (uVar4 != uVar3) {
        puVar16 = (uint *)plVar18[4];
        if ((uint *)plVar18[4] == (uint *)0x0) {
          puVar16 = puVar1;
        }
        uVar12 = puVar16[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
        iVar11 = (int)uVar4 >> 5;
        while (uVar12 == 0) {
          uVar15 = uVar15 + 0x20;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
          goto LAB_1410aad03;
          uVar12 = puVar16[(longlong)iVar11 + 1];
          iVar11 = iVar11 + 1;
        }
        uVar12 = -uVar12 & uVar12;
        iVar11 = 0x1f;
        if (uVar12 != 0) {
          for (; uVar12 >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        if (uVar12 == 0) {
          iVar11 = 0x20;
        }
        else {
          iVar11 = 0x1f - iVar11;
        }
        uStack_124 = (uVar15 - iVar11) + 0x1f;
        if ((int)uVar3 < (int)uStack_124) {
LAB_1410aad03:
          uStack_124 = uVar3;
        }
      }
      while (((uStack_dc != uStack_124 || (local_e8 != puVar1)) || (local_f8 != plVar18))) {
        plVar14 = (longlong *)((longlong)(int)uStack_dc * 0x38 + *local_f8);
        if (((param_1[0x1af] != 0) && (*plVar14 != 0)) && (param_1[0x16a] != 0)) {
          FWeakObjectPtr::operator=(local_res18);
          cVar6 = FWeakObjectPtr::IsValid(local_res18);
          if (cVar6 != '\0') {
            local_118 = plVar14[1];
            local_110 = (undefined4)plVar14[2];
            local_res10 = 0;
            cVar6 = FUN_142edb1a0(param_1,&local_118,&local_res10,1,1);
            if (cVar6 != '\0') {
              local_res10._0_4_ =
                   ((1920.0 / (float)iVar13) * (float)local_res10 - 960.0) * fVar19 + 960.0;
              local_res10._4_4_ = local_res10._4_4_ * (1080.0 / (float)iVar17);
              cVar6 = FUN_142ebdd70(param_1);
              if (cVar6 == '\0') {
                fVar2 = *(float *)(plVar14 + 4);
                local_res10._4_4_ = local_res10._4_4_ + *(float *)((longlong)plVar14 + 0x24);
              }
              else {
                fVar2 = *(float *)(plVar14 + 5);
                local_res10._4_4_ =
                     local_res10._4_4_ + *(float *)((longlong)plVar14 + 0x2c) +
                     *(float *)((longlong)param_1 + 0x574);
              }
              local_res10 = CONCAT44(local_res10._4_4_,(float)local_res10 + fVar2);
              lVar7 = FWeakObjectPtr::Get(local_res18);
              local_res8[0] = -1;
              iVar11 = -1;
              if (lVar7 != 0) {
                FUN_14170c210(local_res8,lVar7);
                iVar11 = local_res8[0];
              }
              local_res8[0] = -1;
              local_104 = local_res10;
              local_98 = 0;
              local_88 = 0;
              puVar10 = (undefined8 *)FUN_140438ef0(0x18,&puStack_b8);
              if (puVar10 != (undefined8 *)0x0) {
                *puVar10 = &PTR_FUN_14468e8f0;
                *(int *)(puVar10 + 1) = iVar11;
                iVar11 = -1;
                *(undefined4 *)((longlong)puVar10 + 0xc) = (undefined4)local_104;
                *(undefined4 *)(puVar10 + 2) = local_104._4_4_;
              }
              local_c8 = (longlong *)&LAB_14107d680;
              FUN_14208c4f0(param_1,&local_c8);
              FUN_1416f8340(iVar11);
              FUN_1416f8340(local_res8[0]);
            }
          }
        }
        uStack_e0 = uStack_e0 & ~uStack_f0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_f0);
      }
    }
  }
  return;
}



// FUNCTION 1410aaf70 FUN_1410aaf70 body=2011 status=ok
// SIG undefined FUN_1410aaf70(void)

void FUN_1410aaf70(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  wint_t wVar5;
  wint_t wVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  wchar_t *pwVar11;
  int iVar12;
  wint_t *pwVar13;
  undefined2 *puVar14;
  bool bVar15;
  wchar_t *local_128;
  int local_120;
  int local_11c;
  longlong local_118;
  longlong *local_110;
  longlong local_108 [11];
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78 [2];
  undefined4 local_68;
  undefined **local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  lVar8 = (**(code **)(*param_1 + 0x148))();
  iVar12 = 0;
  if ((lVar8 == 0) || (lVar8 = *(longlong *)(lVar8 + 400), lVar8 == 0)) {
LAB_1410aafe2:
    lVar8 = 0;
  }
  else {
    lVar9 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if (!bVar15) goto LAB_1410aafe2;
  }
  local_110 = (longlong *)param_1[0x1c1];
  local_118 = 0;
  if (local_110 == (longlong *)0x0) {
LAB_1410ab01e:
    if (local_110 != (longlong *)0x0) {
      local_118 = param_1[0x1c0];
    }
  }
  else {
    LOCK();
    iVar7 = (int)local_110[1];
    bVar15 = iVar7 == 0;
    if (bVar15) {
      *(int *)(local_110 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (!bVar15) {
      LOCK();
      bVar15 = iVar7 == (int)local_110[1];
      if (bVar15) {
        *(int *)(local_110 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar15) goto LAB_1410ab01e;
      LOCK();
      iVar7 = (int)local_110[1];
      bVar15 = iVar7 == 0;
      if (bVar15) {
        *(int *)(local_110 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
    local_110 = (longlong *)0x0;
  }
  if ((((param_1[0x1b9] == 0) || (local_118 == 0)) || (param_1[0x141] == 0)) || (lVar8 == 0))
  goto LAB_1410ab6e2;
  lVar9 = FUN_142eb65a0(param_1);
  if (((lVar9 != param_1[0x16e]) || (param_1[0x16b] == 0)) ||
     ((*(char *)(param_1[0x16b] + 0x671) == '\0' ||
      ((param_1[0x16a] == 0 || (lVar9 = FUN_140b5dac0(), lVar9 == 0)))))) {
LAB_1410ab5ff:
    puVar10 = (undefined8 *)FUN_142eeb970(param_1[0x1b9],local_38);
    if (*(int *)(puVar10 + 1) == 0) {
      puVar14 = &DAT_143f3eda8;
    }
    else {
      puVar14 = (undefined2 *)*puVar10;
    }
    pwVar13 = &DAT_14468c8f8;
    do {
      wVar5 = *(wint_t *)((longlong)pwVar13 + (longlong)(puVar14 + -0xa234647c));
      if ((wVar5 == 0) && (*pwVar13 == 0)) goto LAB_1410ab670;
      if (wVar5 != *pwVar13) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar13);
        if (wVar5 != wVar6) goto LAB_1410ab667;
      }
      pwVar13 = pwVar13 + 1;
    } while( true );
  }
  if (*(char *)(lVar9 + 0x34) == '\x02') {
    local_108[0] = 0;
    local_108[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_108[0],5,&DAT_144689f34,5,0x3f);
    FUN_142088910(param_1[0x1b9],local_108);
    local_78[0] = local_108[0];
  }
  else {
    if (*(char *)(lVar9 + 0x35) == '\x01') {
      local_88 = 0;
      local_80 = 0;
      (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0x123],&local_88);
      FUN_14203de70(local_118,"itemOfTheDay");
      local_108[2] = 0;
      local_108[3] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108 + 2,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_108[2],5,&DAT_14468a394,5,0x3f);
      FUN_142088910(param_1[0x1b9],local_108 + 2);
      if (local_108[2] != 0) {
        FMemory::Free();
      }
      if ((param_1[0x1bd] != 0) && (param_1[0x1be] != 0)) {
        piVar1 = (int *)(param_1[0x1be] + 8);
        LOCK();
        iVar12 = *piVar1;
        if (iVar12 == 0) {
          *piVar1 = 0;
          iVar12 = 0;
        }
        UNLOCK();
        if (0 < iVar12) {
          UMistDebugEntityScreen::InspectEntity(param_1 + 0x1bc,param_1 + 0x1fb,1,0);
        }
      }
      plVar2 = (longlong *)param_1[0x1bb];
      local_b0 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar12 = (int)plVar2[1];
        bVar15 = iVar12 == 0;
        if (bVar15) {
          *(int *)(plVar2 + 1) = 0;
          iVar12 = 0;
        }
        UNLOCK();
        while (!bVar15) {
          LOCK();
          bVar15 = iVar12 == (int)plVar2[1];
          if (bVar15) {
            *(int *)(plVar2 + 1) = iVar12 + 1;
          }
          UNLOCK();
          if (bVar15) {
            if (plVar2 != (longlong *)0x0) {
              local_108[10] = param_1[0x1ba];
              if (local_108[10] != 0) {
                lVar8 = param_1[0x16b];
                if (lVar8 == 0) {
LAB_1410ab285:
                  bVar15 = false;
LAB_1410ab287:
                  pwVar11 = L"earl";
                  if (!bVar15) {
                    pwVar11 = L"marcus";
                  }
                }
                else {
                  if (*(char *)(lVar8 + 0x670) != '\x02') {
                    if ((lVar8 == 0) || (*(char *)(lVar8 + 0x670) != '\x03')) goto LAB_1410ab285;
                    bVar15 = true;
                    goto LAB_1410ab287;
                  }
                  pwVar11 = L"zed";
                }
                FUN_14203e030(local_108[10],pwVar11);
              }
              plVar3 = local_b0;
              LOCK();
              plVar2 = plVar2 + 1;
              lVar8 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_b0)(local_b0);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                iVar12 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar12 == 1) {
                  (**(code **)(*local_b0 + 8))(local_b0,1);
                }
              }
            }
            break;
          }
          LOCK();
          iVar12 = (int)plVar2[1];
          bVar15 = iVar12 == 0;
          if (bVar15) {
            *(int *)(plVar2 + 1) = 0;
            iVar12 = 0;
          }
          UNLOCK();
        }
      }
      goto LAB_1410ab6e2;
    }
    if (*(char *)(lVar9 + 0x35) != '\x02') goto LAB_1410ab5ff;
    lVar9 = param_1[0x141];
    FString::FString(local_78,lVar9 + 0xe88);
    local_68 = *(undefined4 *)(lVar9 + 0xe98);
    plVar2 = *(longlong **)(lVar9 + 0xea8);
    plVar3 = *(longlong **)(lVar9 + 0xeb0);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_48 = 0;
    local_60 = &PTR_FUN_143f740c8;
    local_40 = 0;
    local_58 = plVar2;
    local_50 = plVar3;
    if ((plVar2 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar2 + 0x20))(plVar2), cVar4 == '\0')) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if (bVar15) {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      local_108[8] = 0;
      local_108[9] = 0;
      local_98 = plVar2;
      local_90 = plVar3;
      cVar4 = FUN_140d79f00(*(undefined8 *)(lVar8 + 0x478),&local_98,1,0,local_108 + 8);
      if (cVar4 == '\0') {
        FUN_140d938f0(*(undefined8 *)(lVar8 + 0x478),&local_98);
      }
      else {
        local_108[4] = 0;
        local_108[5] = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108 + 4,0);
        FGenericPlatformString::Convert<char,wchar_t>(local_108[4],5,&DAT_14468bb04,5,0x3f);
        FUN_142088910(param_1[0x1b9],local_108 + 4);
        if (local_108[4] != 0) {
          FMemory::Free();
        }
        FUN_14203de70(local_118,"friendGun");
        if ((param_1[0x1bd] != 0) && (param_1[0x1be] != 0)) {
          piVar1 = (int *)(param_1[0x1be] + 8);
          LOCK();
          iVar7 = *piVar1;
          if (iVar7 == 0) {
            *piVar1 = 0;
            iVar7 = 0;
          }
          UNLOCK();
          if (0 < iVar7) {
            FUN_142f0fdc0(param_1 + 0x1bc,local_108 + 8,1,0);
          }
        }
        plVar2 = (longlong *)param_1[0x1bb];
        local_a0 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          iVar7 = (int)plVar2[1];
          bVar15 = iVar7 == 0;
          if (bVar15) {
            *(int *)(plVar2 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
          while (!bVar15) {
            LOCK();
            bVar15 = iVar7 == (int)plVar2[1];
            if (bVar15) {
              *(int *)(plVar2 + 1) = iVar7 + 1;
            }
            UNLOCK();
            if (bVar15) {
              if (plVar2 != (longlong *)0x0) {
                lVar9 = param_1[0x1ba];
                local_a8 = lVar9;
                if ((lVar9 != 0) && (lVar8 = FUN_140bbaee0(lVar8,local_68), lVar8 != 0)) {
                  FName::ToString(lVar8 + 0x88,&local_128);
                  if ((local_120 < 2) && (local_128 != L"marcus")) {
                    local_120 = 0;
                    if (local_11c != 7) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_128,7);
                      iVar12 = local_120;
                    }
                    local_120 = iVar12 + 7;
                    if (local_11c < local_120) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,iVar12);
                    }
                    builtin_wcsncpy(local_128,L"marcus",7);
                  }
                  FUN_14203dbf0(lVar9,&local_128);
                  if (local_128 != (wchar_t *)0x0) {
                    FMemory::Free();
                  }
                }
                plVar3 = local_a0;
                LOCK();
                plVar2 = plVar2 + 1;
                lVar8 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*local_a0)(local_a0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar3 + 0xc);
                  iVar12 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar12 == 1) {
                    (**(code **)(*local_a0 + 8))(local_a0,1);
                  }
                }
              }
              break;
            }
            LOCK();
            iVar7 = (int)plVar2[1];
            bVar15 = iVar7 == 0;
            if (bVar15) {
              *(int *)(plVar2 + 1) = 0;
              iVar7 = 0;
            }
            UNLOCK();
          }
        }
      }
      if (local_108[8] != 0) {
        FMemory::Free();
      }
      plVar2 = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_90 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
    }
    FUN_1404bf980(&local_60);
  }
  goto LAB_1410ab6d0;
LAB_1410ab667:
  iVar12 = (uint)wVar5 - (uint)wVar6;
LAB_1410ab670:
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (iVar12 != 0) goto LAB_1410ab6e2;
  local_108[6] = 0;
  local_108[7] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108 + 6,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_108[6],5,&DAT_14468c904,5,0x3f);
  FUN_142088910(param_1[0x1b9],local_108 + 6);
  local_78[0] = local_108[6];
LAB_1410ab6d0:
  if (local_78[0] != 0) {
    FMemory::Free();
  }
LAB_1410ab6e2:
  plVar2 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_110 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  return;
}



// FUNCTION 1410ab750 FUN_1410ab750 body=1202 status=ok
// SIG undefined FUN_1410ab750(void)

void FUN_1410ab750(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  char *pcVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  short *psVar11;
  uint uVar12;
  int iVar13;
  void *pvVar14;
  char *pcVar15;
  void *pvVar16;
  void *pvVar17;
  int iVar18;
  longlong lVar19;
  longlong local_a8;
  ulonglong local_a0;
  void *local_98;
  int local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  pvVar17 = (void *)0x0;
  pvVar14 = pvVar17;
  pvVar16 = pvVar17;
  if (0 < *(int *)(param_1 + 0xb18)) {
    do {
      lVar19 = *(longlong *)((longlong)pvVar16 + *(longlong *)(param_1 + 0xb10));
      if (lVar19 != 0) {
        plVar7 = (longlong *)(lVar19 + 0x170);
        (**(code **)(*plVar7 + 0x38))(plVar7,1);
        FUN_142ed2820(*(undefined8 *)((longlong)pvVar16 + *(longlong *)(param_1 + 0xb10)),0,1);
      }
      uVar12 = (int)pvVar14 + 1;
      pvVar14 = (void *)(ulonglong)uVar12;
      pvVar16 = (void *)((longlong)pvVar16 + 8);
    } while ((int)uVar12 < *(int *)(param_1 + 0xb18));
  }
  lVar19 = *(longlong *)(param_1 + 0xb60);
  if (lVar19 != 0) {
    pvVar14 = *(void **)(lVar19 + 0x198);
    local_90 = *(int *)(lVar19 + 0x1a0);
    lVar19 = (longlong)local_90;
    local_98 = (void *)0x0;
    if (local_90 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_98,local_90,0);
      pvVar17 = local_98;
      _guard_xfg_dispatch_icall_nop(local_98,pvVar14,lVar19 << 3);
    }
    pcVar10 = *(char **)(param_1 + 0x8b8);
    pcVar8 = pcVar10 + *(int *)(param_1 + 0x8c0);
    iVar9 = (int)pcVar10;
    for (pcVar15 = pcVar10; pcVar4 = pcVar10, pcVar15 != pcVar8; pcVar15 = pcVar15 + 1) {
      if (*pcVar15 == '\x02') {
        iVar13 = (int)pcVar15 - iVar9;
        goto joined_r0x0001410ab879;
      }
    }
    iVar13 = -1;
joined_r0x0001410ab879:
    do {
      if (pcVar4 == pcVar8) goto LAB_1410ab892;
      if (*pcVar4 == '\x01') {
        iVar18 = (int)pcVar4 - iVar9;
        goto joined_r0x0001410ab89b;
      }
      pcVar4 = pcVar4 + 1;
    } while( true );
  }
  goto LAB_1410aba30;
LAB_1410ab892:
  iVar18 = -1;
joined_r0x0001410ab89b:
  do {
    if (pcVar10 == pcVar8) break;
    if (*pcVar10 == '\0') {
      iVar9 = (int)pcVar10 - iVar9;
      goto LAB_1410ab8b4;
    }
    pcVar10 = pcVar10 + 1;
  } while( true );
  iVar9 = -1;
LAB_1410ab8b4:
  if ((((local_90 == 0) && (-1 < iVar13)) && (iVar13 < *(int *)(param_1 + 0xb18))) &&
     (iVar13 != *(int *)(param_1 + 0xb44))) {
    plVar7 = (longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0xb10) + (longlong)iVar13 * 8) + 0x170);
    (**(code **)(*plVar7 + 0x38))(plVar7,0);
  }
  if ((*(longlong *)(param_1 + 0xb58) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0xb58) + 0x670) == '\x03')) {
    plVar7 = (longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0xb10) + (longlong)iVar13 * 8) + 0x170);
    (**(code **)(*plVar7 + 0x38))(plVar7,0);
    plVar7 = (longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0xb10) + (longlong)iVar18 * 8) + 0x170);
    (**(code **)(*plVar7 + 0x38))(plVar7,0);
    *(int *)(param_1 + 0xb44) = iVar9;
  }
  if (*(longlong *)(param_1 + 0xbb0) != 0) {
    if ((*(longlong *)(param_1 + 0xb58) == 0) ||
       (*(char *)(*(longlong *)(param_1 + 0xb58) + 0x670) != '\x03')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    local_a0 = 0;
    psVar11 = &DAT_14467f6c8;
    if (bVar3) {
      psVar11 = &DAT_14467f6c0;
    }
    local_a8 = 0;
    if (*psVar11 != 0) {
      lVar19 = -1;
      do {
        lVar19 = lVar19 + 1;
      } while (psVar11[lVar19] != 0);
      uVar12 = (int)lVar19 + 1;
      local_a0 = (ulonglong)uVar12;
      if (0 < (int)uVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
      }
      FGenericPlatformString::Memcpy(local_a8,psVar11,(longlong)(int)uVar12 * 2);
    }
    FUN_142088cf0(*(undefined8 *)(param_1 + 0xbb0),&local_a8);
    if (local_a8 != 0) {
      FMemory::Free();
    }
  }
  if (pvVar17 != (void *)0x0) {
    FMemory::Free(pvVar17);
  }
LAB_1410aba30:
  iVar9 = *(int *)(param_1 + 0xb44);
  if (((-1 < iVar9) && (iVar9 < *(int *)(param_1 + 0xb18))) &&
     (lVar19 = *(longlong *)(*(longlong *)(param_1 + 0xb10) + (longlong)iVar9 * 8), lVar19 != 0)) {
    FUN_142ed2820(lVar19,1);
  }
  if ((*(longlong *)(param_1 + 0xb88) != 0) && (*(longlong *)(param_1 + 0xb90) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0xb90) + 8);
    LOCK();
    iVar9 = *piVar1;
    if (iVar9 == 0) {
      *piVar1 = 0;
      iVar9 = 0;
    }
    UNLOCK();
    if (0 < iVar9) {
      if ((*(char *)(param_1 + 0xb20) == '\x03') ||
         (cVar5 = FWeakObjectPtr::IsValid(param_1 + 0xb00), cVar5 != '\0')) {
        uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_40,L"Compare",L"GFxVendingMachineMenu",L"VendingMachineCompare");
        UMistDebugEntityScreen::InspectEntity(param_1 + 0xb80,uVar6,1,0);
        plVar7 = local_38;
      }
      else {
        cVar5 = *(char *)(param_1 + 0xb78);
        if (cVar5 == '\0') {
          uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_58,L"Purchase",L"GFxVendingMachineMenu",L"VendingMachinePurchase"
                            );
          UMistDebugEntityScreen::InspectEntity(param_1 + 0xb80,uVar6,1,0);
          plVar7 = local_50;
        }
        else if (cVar5 == '\x01') {
          uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_70,L"Sell",L"GFxVendingMachineMenu",L"VendingMachineSell");
          UMistDebugEntityScreen::InspectEntity(param_1 + 0xb80,uVar6,1,0);
          plVar7 = local_68;
        }
        else {
          if (cVar5 != '\x02') {
            return;
          }
          uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_88,L"Buy Back",L"GFxVendingMachineMenu",L"VendingMachineBuyback")
          ;
          UMistDebugEntityScreen::InspectEntity(param_1 + 0xb80,uVar6,1,0);
          plVar7 = local_80;
        }
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar7 + 1;
        lVar19 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar19 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1410abc10 FUN_1410abc10 body=603 status=ok
// SIG undefined FUN_1410abc10(void)

void FUN_1410abc10(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  wchar_t *local_28;
  undefined8 local_20;
  
  plVar1 = (longlong *)FUN_141083150();
  lVar6 = 0;
  lVar4 = lVar6;
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_14301f8f0();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar3 + 0x208);
    }
  }
  if (lVar4 != 0) {
    lVar6 = *(longlong *)(lVar4 + 0x1d8);
  }
  FWeakObjectPtr::operator=(param_1 + 0x9fc,lVar6);
  FUN_1410aaf70(param_1);
  if (*(longlong *)(param_1 + 0xdf8) != 0) {
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x9fc);
    lVar6 = *(longlong *)(param_1 + 0xdf8);
    if (*(longlong *)(lVar6 + 0x3d8) != 0) {
      local_28 = (wchar_t *)0x0;
      local_20 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      FGenericPlatformString::Memcpy(local_28,L"none",10);
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      lVar3 = *(longlong *)(DAT_146b33f38 + 0x58);
      if ((lVar3 != 0) && (lVar4 != 0)) {
        uVar5 = local_20._4_4_;
        if ((lVar4 == *(longlong *)(lVar3 + 0x2f8)) ||
           ((lVar4 == *(longlong *)(lVar3 + 0x2b0) || (lVar4 == *(longlong *)(lVar3 + 0x300))))) {
          if (local_28 != L"health") {
            local_20 = (ulonglong)local_20._4_4_ << 0x20;
            iVar7 = 0;
            if (uVar5 != 7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28,7);
              uVar5 = local_20._4_4_;
              iVar7 = (int)local_20;
            }
            local_20 = CONCAT44(local_20._4_4_,iVar7 + 7);
            if ((int)uVar5 < iVar7 + 7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar7);
            }
            builtin_wcsncpy(local_28,L"health",7);
          }
        }
        else if ((((lVar4 == *(longlong *)(lVar3 + 0x2a8)) ||
                  (lVar4 == *(longlong *)(lVar3 + 0x308))) ||
                 (lVar4 == *(longlong *)(lVar3 + 0x2b8))) && (local_28 != L"ammo")) {
          local_20 = (ulonglong)local_20._4_4_ << 0x20;
          iVar7 = 0;
          if (uVar5 != 5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28,5);
            uVar5 = local_20._4_4_;
            iVar7 = (int)local_20;
          }
          local_20 = CONCAT44(local_20._4_4_,iVar7 + 5);
          if ((int)uVar5 < iVar7 + 5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar7);
          }
          builtin_wcsncpy(local_28,L"ammo",5);
        }
      }
      FUN_142088910(*(undefined8 *)(lVar6 + 0x3d8),&local_28);
      if (local_28 != (wchar_t *)0x0) {
        FMemory::Free();
      }
    }
  }
  uVar2 = FWeakObjectPtr::Get(param_1 + 0x9fc);
  FUN_1410a95e0(param_1,uVar2);
  return;
}



// FUNCTION 1410abe70 FUN_1410abe70 body=405 status=ok
// SIG undefined FUN_1410abe70(void)

void FUN_1410abe70(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  char *pcVar5;
  undefined8 uVar6;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28 [2];
  
  local_30 = 0x1e;
  local_38 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (local_38,0x1e,"tooltipContainer.speechBubble",0x1e,0x3f);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  lVar2 = FUN_140e96f30(param_1,&local_38,0,6,&local_48);
  plVar4 = local_48;
  for (iVar3 = (int)local_40; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 0xb58) != 0)) {
    cVar1 = *(char *)(*(longlong *)(param_1 + 0xb58) + 0x670);
    local_28[0] = 0;
    if (cVar1 == '\x02') {
      local_28[1] = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
      uVar6 = 4;
      pcVar5 = "zed";
    }
    else if (cVar1 == '\x03') {
      local_28[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
      uVar6 = 5;
      pcVar5 = "earl";
    }
    else {
      local_28[1] = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
      uVar6 = 7;
      pcVar5 = "marcus";
    }
    FGenericPlatformString::Convert<char,wchar_t>(local_28[0],uVar6,pcVar5,uVar6,0x3f);
    FUN_142088cf0(lVar2,local_28);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1410ac010 FUN_1410ac010 body=904 status=ok
// SIG undefined FUN_1410ac010(void)

void FUN_1410ac010(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong local_78 [2];
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  if (*(longlong *)(param_1 + 400) == 0) {
    return;
  }
  lVar4 = FUN_141270d10(*(longlong *)(param_1 + 400),*(undefined1 *)(param_1 + 0x1f0));
  if (lVar4 == 0) {
LAB_1410ac370:
    plVar2 = *(longlong **)(param_1 + 0x198);
    if (plVar2 == (longlong *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001410ac391. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x278))(plVar2,0);
    return;
  }
  lVar5 = FUN_14149b100();
  lVar6 = *(longlong *)(lVar4 + 0x10);
  if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) goto LAB_1410ac370;
  plVar2 = *(longlong **)(param_1 + 0x198);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x278))(plVar2,CONCAT71((int7)((ulonglong)lVar6 >> 8),1));
  }
  uVar12 = 0;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    lVar6 = FUN_14149a4d0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar7 = FUN_141270e90(lVar4,local_78);
      FString::operator=(param_1 + 0x1d0,uVar7);
      if (local_78[0] != 0) {
        FMemory::Free();
      }
      lVar6 = FUN_141270cf0(lVar4);
      if (lVar6 != 0) {
        if (lVar6 == *(longlong *)(param_1 + 0x1c8)) {
          if (*(longlong *)(param_1 + 0x1c0) != 0) {
            FUN_142088cf0(*(longlong *)(param_1 + 0x1c0),param_1 + 0x1d0);
          }
        }
        else {
          *(longlong *)(param_1 + 0x1c8) = lVar6;
          local_38 = 0;
          local_28 = 0;
          puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_58);
          if (puVar8 != (undefined8 *)0x0) {
            puVar8[1] = param_1;
            *puVar8 = &PTR_FUN_143f77b70;
          }
          local_68[0] = &LAB_14107d6c0;
          uVar7 = FUN_140ecde40(*(undefined8 *)(param_1 + 0x1b0),*(undefined8 *)(param_1 + 0x1c8),
                                local_68,0,0);
          *(undefined8 *)(param_1 + 0x1b8) = uVar7;
        }
      }
    }
  }
  lVar6 = (**(code **)(*(longlong *)(lVar4 + 0x460) + 0x10))
                    ((longlong *)(lVar4 + 0x460),*(undefined1 *)(lVar4 + 0x690));
  uVar7 = FUN_1430bf3b0();
  uVar9 = AGameStateBase::OnRep_GameModeClass(lVar4,uVar7);
  if (uVar9 == 0) {
LAB_1410ac22d:
    uVar9 = uVar12;
  }
  else {
    lVar5 = FUN_1430bf3b0();
    if ((*(int *)(*(longlong *)(uVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1410ac22d;
  }
  uVar7 = UUGStartScreenUW::GetPrivateStaticClass();
  uVar10 = AGameStateBase::OnRep_GameModeClass(lVar4,uVar7);
  if (uVar10 != 0) {
    lVar4 = UUGStartScreenUW::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(uVar10 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1410ac27d;
  }
  uVar10 = uVar12;
LAB_1410ac27d:
  uVar13 = uVar12;
  if (0 < *(int *)(param_1 + 0x1e8)) {
    do {
      plVar2 = *(longlong **)(uVar13 + *(longlong *)(param_1 + 0x1e0));
      (**(code **)(*plVar2 + 0x278))(plVar2,0);
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      uVar13 = uVar13 + 8;
    } while ((int)uVar11 < *(int *)(param_1 + 0x1e8));
  }
  if (((lVar6 == 0) && (uVar9 == 0)) && (uVar10 == 0)) {
    return;
  }
  *(longlong *)(param_1 + 0x178) = lVar6;
  *(ulonglong *)(param_1 + 0x180) = uVar9;
  *(ulonglong *)(param_1 + 0x188) = uVar10;
  if (lVar6 == 0) {
    if (uVar9 == 0) {
      if (uVar10 != 0) {
        *(undefined1 *)(param_1 + 0x170) = 0;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x170) = 2;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x170) = 1;
  }
  if (*(longlong *)(param_1 + 0x1a0) == 0) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x170);
  if (bVar1 == 3) {
    return;
  }
  if (*(int *)(param_1 + 0x1e8) <= (int)(uint)bVar1) {
    return;
  }
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x1e0) + (ulonglong)bVar1 * 8);
  (**(code **)(*plVar2 + 0x278))(plVar2,1);
  return;
}



// FUNCTION 1410ac3a0 FUN_1410ac3a0 body=821 status=ok
// SIG undefined FUN_1410ac3a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410ac3a0(longlong param_1,float *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_118 [32];
  int local_f8 [2];
  int local_f0;
  int local_ec;
  longlong local_e8;
  longlong *local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [16];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  plVar4 = *(longlong **)(param_1 + 0xfb8);
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  if (*(longlong *)(param_1 + 0xcc8) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0xe58) == 0) {
    return;
  }
  (**(code **)(*plVar4 + 0x278))(plVar4,1);
  fVar11 = *(float *)(param_1 + 0xd00);
  fVar9 = *(float *)(param_1 + 0xd04);
  uStack_b0 = *(undefined4 *)(param_1 + 0xd08);
  uStack_ac = *(undefined4 *)(param_1 + 0xd0c);
  local_b8 = fVar11;
  fStack_b4 = fVar9;
  local_a8 = fVar11;
  fStack_a4 = fVar9;
  uStack_a0 = uStack_b0;
  uStack_9c = uStack_ac;
  fVar8 = (float)UCurveFloat::GetFloatValue
                           (*(undefined8 *)(param_1 + 0xe58),
                            SQRT(*param_2 * *param_2 + param_2[1] * param_2[1] +
                                 param_2[2] * param_2[2]));
  fVar8 = fVar8 * fVar9;
  fVar9 = (float)UCurveFloat::GetFloatValue(*(undefined8 *)(param_1 + 0xe58));
  fVar10 = 540.0;
  fVar9 = fVar9 * fVar11;
  fVar11 = 1.0;
  lVar6 = (**(code **)(**(longlong **)(param_1 + 0xcc8) + 0x148))();
  if (((lVar6 != 0) && (lVar7 = UWorld::GetGameViewport(lVar6), lVar7 != 0)) &&
     (lVar7 = UWorld::GetGameViewport(lVar6), *(longlong *)(lVar7 + 0xb0) != 0)) {
    lVar6 = UWorld::GetGameViewport(lVar6);
    (**(code **)(**(longlong **)(lVar6 + 0xb0) + 0x20))(*(longlong **)(lVar6 + 0xb0),&local_f0);
    fVar11 = (float)local_f0 / *(float *)(param_1 + 0xf98);
    fVar10 = (float)local_ec * 0.5;
  }
  fVar12 = 1.0;
  if (1e-08 < ABS(fVar11 - 1.0)) {
    fVar9 = fVar9 * fVar11;
    fVar8 = fVar8 * fVar11;
    fVar12 = fVar11;
  }
  local_98 = *(undefined8 *)(param_1 + 0xce0);
  uStack_90 = *(undefined8 *)(param_1 + 0xce8);
  local_78._4_4_ = fVar8;
  local_78._0_4_ = fVar9;
  local_78._8_4_ = fVar12;
  local_78._12_4_ = 0;
  _fStack_80 = 0;
  local_88 = (undefined1  [8])*(ulonglong *)(param_1 + 0xcd0);
  local_f8[0] = -1;
  if ((*(longlong *)(param_1 + 0xcc8) != 0) &&
     (cVar5 = FUN_142710360(*(longlong *)(param_1 + 0xcc8),local_f8), cVar5 != '\0')) {
    if (local_f8[0] == 1) {
      fVar11 = fVar10 * 1.5;
      local_88._0_4_ = (float)local_88._0_4_ + 0.0;
      fStack_d4 = (float)local_88._4_4_ + fVar10;
      fStack_80 = fStack_80 + 0.0;
      fStack_cc = fStack_7c + 0.0;
      local_88._4_4_ = fStack_d4;
      fStack_7c = fStack_cc;
      local_d8 = (float)local_88._0_4_;
      fStack_d0 = fStack_80;
      if (fVar11 < fStack_d4) goto LAB_1410ac646;
    }
    else {
      fVar11 = fVar10 * 0.75;
      local_c8 = (float)local_88._0_4_;
      fStack_c4 = (float)local_88._4_4_;
      fStack_c0 = fStack_80;
      fStack_bc = fStack_7c;
      if ((float)local_88._4_4_ < fVar11) goto LAB_1410ac646;
    }
    local_88._4_4_ = fVar11;
    fStack_7c = 0.0;
  }
LAB_1410ac646:
  FUN_14208e4e0(*(undefined8 *)(param_1 + 0xfb8),&local_98);
  FUN_140ad4c90(param_1,&local_e8);
  if (local_e8 != 0) {
    FUN_142033230();
  }
  plVar4 = local_e0;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_e0 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_e0 + 8))(local_e0,1);
      }
    }
  }
  return;
}



// FUNCTION 1410ac6f0 FUN_1410ac6f0 body=306 status=ok
// SIG undefined FUN_1410ac6f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410ac6f0(longlong param_1)

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
  if (*(longlong *)(param_1 + 0x648) != 0) {
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
  local_68[0] = &LAB_14107d570;
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



// FUNCTION 1410ac830 FUN_1410ac830 body=35 status=ok
// SIG undefined FUN_1410ac830(void)

void FUN_1410ac830(longlong *param_1)

{
  (**(code **)(*param_1 + 0x580))(param_1,0);
  param_1[0xce] = 0;
  return;
}



// FUNCTION 1410ac860 FUN_1410ac860 body=58 status=ok
// SIG undefined FUN_1410ac860(void)

void FUN_1410ac860(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1446a3a90;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_1446a3ad8;
  }
  return;
}



// FUNCTION 1410ac8b0 FUN_1410ac8b0 body=20 status=ok
// SIG undefined FUN_1410ac8b0(void)

undefined1 FUN_1410ac8b0(longlong param_1)

{
  FUN_1410be710(param_1 + 8);
  return 1;
}



// FUNCTION 1410ac8d0 FUN_1410ac8d0 body=673 status=ok
// SIG undefined FUN_1410ac8d0(void)

undefined8 FUN_1410ac8d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  void *_Src;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  void **ppvVar7;
  uint uVar8;
  char *pcVar9;
  void *local_38;
  ulonglong local_30;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
  lVar4 = FWeakObjectPtr::Get(param_3);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_3 + 8)) && (*(longlong *)(param_3 + 0x10) != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(param_3,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_3 + 8) = DAT_1464b56f4;
      }
      lVar4 = FWeakObjectPtr::Get(param_3);
      if (lVar4 != 0) goto LAB_1410ac965;
    }
  }
  else {
LAB_1410ac965:
    lVar5 = UCheckBox::GetPrivateStaticClass();
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
      bVar3 = true;
      bVar1 = false;
      lVar4 = FWeakObjectPtr::Get(param_3);
      if (lVar4 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(param_3 + 8)) && (*(longlong *)(param_3 + 0x10) != 0)) {
          lVar4 = FUN_141796df0();
          FWeakObjectPtr::operator=(param_3,lVar4);
          if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_3 + 8) = DAT_1464b56f4;
          }
          lVar4 = FWeakObjectPtr::Get(param_3);
          if (lVar4 != 0) goto LAB_1410aca14;
        }
LAB_1410aca4c:
        lVar4 = 0;
      }
      else {
LAB_1410aca14:
        lVar5 = UCheckBox::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_1410aca4c;
      }
      puVar6 = (undefined8 *)FText::ToString(lVar4 + 0x40);
      local_28 = (void *)0x0;
      local_20 = *(int *)(puVar6 + 1);
      lVar4 = (longlong)local_20;
      _Src = (void *)*puVar6;
      if (local_20 == 0) {
        local_1c = 0;
        ppvVar7 = &local_28;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_20,0);
        _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar4 * 2);
        ppvVar7 = &local_28;
      }
      goto LAB_1410acb23;
    }
  }
  pcVar9 = "Loading...";
  local_38 = (void *)0x0;
  if (*(longlong *)(param_3 + 0x10) == 0) {
    pcVar9 = "None";
  }
  local_30 = 0;
  bVar3 = false;
  bVar1 = true;
  if (*pcVar9 != '\0') {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (pcVar9[lVar4] != '\0');
    uVar8 = (int)lVar4 + 1;
    local_30 = (ulonglong)uVar8;
    if (0 < (int)uVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Convert<char,wchar_t>(local_38,uVar8,pcVar9,uVar8,0x3f);
  }
  ppvVar7 = &local_38;
LAB_1410acb23:
  FString::FString(param_2,ppvVar7);
  if ((bVar1) && (local_38 != (void *)0x0)) {
    FMemory::Free();
  }
  if ((bVar3) && (local_28 != (void *)0x0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1410acb80 FUN_1410acb80 body=675 status=ok
// SIG undefined FUN_1410acb80(void)

undefined8 FUN_1410acb80(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  void *_Src;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  void **ppvVar7;
  uint uVar8;
  char *pcVar9;
  void *local_38;
  ulonglong local_30;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
  lVar4 = FWeakObjectPtr::Get(param_3);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_3 + 8)) && (*(longlong *)(param_3 + 0x10) != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(param_3,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_3 + 8) = DAT_1464b56f4;
      }
      lVar4 = FWeakObjectPtr::Get(param_3);
      if (lVar4 != 0) goto LAB_1410acc15;
    }
  }
  else {
LAB_1410acc15:
    lVar5 = AArchVisCharacter::StaticClass();
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
      bVar3 = true;
      bVar1 = false;
      lVar4 = FWeakObjectPtr::Get(param_3);
      if (lVar4 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(param_3 + 8)) && (*(longlong *)(param_3 + 0x10) != 0)) {
          lVar4 = FUN_141796df0();
          FWeakObjectPtr::operator=(param_3,lVar4);
          if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_3 + 8) = DAT_1464b56f4;
          }
          lVar4 = FWeakObjectPtr::Get(param_3);
          if (lVar4 != 0) goto LAB_1410accc4;
        }
LAB_1410accfc:
        lVar4 = 0;
      }
      else {
LAB_1410accc4:
        lVar5 = AArchVisCharacter::StaticClass();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_1410accfc;
      }
      puVar6 = (undefined8 *)FText::ToString(lVar4 + 0xc0);
      local_28 = (void *)0x0;
      local_20 = *(int *)(puVar6 + 1);
      lVar4 = (longlong)local_20;
      _Src = (void *)*puVar6;
      if (local_20 == 0) {
        local_1c = 0;
        ppvVar7 = &local_28;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_20,0);
        _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar4 * 2);
        ppvVar7 = &local_28;
      }
      goto LAB_1410acdd5;
    }
  }
  pcVar9 = "Loading...";
  local_38 = (void *)0x0;
  if (*(longlong *)(param_3 + 0x10) == 0) {
    pcVar9 = "None";
  }
  local_30 = 0;
  bVar3 = false;
  bVar1 = true;
  if (*pcVar9 != '\0') {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (pcVar9[lVar4] != '\0');
    uVar8 = (int)lVar4 + 1;
    local_30 = (ulonglong)uVar8;
    if (0 < (int)uVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Convert<char,wchar_t>(local_38,uVar8,pcVar9,uVar8,0x3f);
  }
  ppvVar7 = &local_38;
LAB_1410acdd5:
  FString::FString(param_2,ppvVar7);
  if ((bVar1) && (local_38 != (void *)0x0)) {
    FMemory::Free();
  }
  if ((bVar3) && (local_28 != (void *)0x0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1410ace30 FUN_1410ace30 body=436 status=ok
// SIG undefined FUN_1410ace30(void)

void FUN_1410ace30(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_2);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(param_2 + 8)) || (*(longlong *)(param_2 + 0x10) == 0))
    goto LAB_1410acfb4;
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(param_2,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_2 + 8) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(param_2);
    if (lVar2 == 0) goto LAB_1410acfb4;
  }
  lVar3 = UCheckBox::GetPrivateStaticClass();
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
LAB_1410acfb4:
    if (*(longlong *)(param_2 + 0x10) == 0) {
      *(undefined1 *)(*param_1 + 0x69) = 1;
    }
    else {
      *(undefined1 *)(*param_1 + 0x68) = 1;
    }
    return;
  }
  lVar2 = FWeakObjectPtr::Get(param_2);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_2 + 8)) && (*(longlong *)(param_2 + 0x10) != 0)) {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(param_2,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_2 + 8) = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(param_2);
      if (lVar2 != 0) goto LAB_1410acf6d;
    }
  }
  else {
LAB_1410acf6d:
    lVar3 = UCheckBox::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1410acfa6;
  }
  lVar2 = 0;
LAB_1410acfa6:
  FUN_1410b5aa0(*param_1,lVar2 + 0x40);
  return;
}



// FUNCTION 1410acff0 FUN_1410acff0 body=439 status=ok
// SIG undefined FUN_1410acff0(void)

void FUN_1410acff0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_2);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(param_2 + 8)) || (*(longlong *)(param_2 + 0x10) == 0))
    goto LAB_1410ad177;
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(param_2,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_2 + 8) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(param_2);
    if (lVar2 == 0) goto LAB_1410ad177;
  }
  lVar3 = AArchVisCharacter::StaticClass();
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
LAB_1410ad177:
    if (*(longlong *)(param_2 + 0x10) == 0) {
      *(undefined1 *)(*param_1 + 0x69) = 1;
    }
    else {
      *(undefined1 *)(*param_1 + 0x68) = 1;
    }
    return;
  }
  lVar2 = FWeakObjectPtr::Get(param_2);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_2 + 8)) && (*(longlong *)(param_2 + 0x10) != 0)) {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(param_2,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_2 + 8) = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(param_2);
      if (lVar2 != 0) goto LAB_1410ad12d;
    }
  }
  else {
LAB_1410ad12d:
    lVar3 = AArchVisCharacter::StaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1410ad166;
  }
  lVar2 = 0;
LAB_1410ad166:
  FUN_1410b5aa0(*param_1,lVar2 + 0xc0);
  return;
}



// FUNCTION 1410ad1b0 FUN_1410ad1b0 body=239 status=ok
// SIG undefined FUN_1410ad1b0(void)

void FUN_1410ad1b0(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_143fcff50;
    FWeakObjectPtr::operator=(plVar2 + 1,param_2);
    *(undefined4 *)(plVar2 + 2) = local_18;
    *(undefined4 *)((longlong)plVar2 + 0x14) = uStack_14;
    *(undefined4 *)(plVar2 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_143fcff98;
  }
  if ((longlong *)&local_18 != param_1) {
    if (plVar2 == (longlong *)0x0) {
      if (((int)param_1[1] != 0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*param_1 != 0) {
          lVar3 = FMemory::Realloc(*param_1,0,0);
          *param_1 = lVar3;
        }
        *(undefined4 *)(param_1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 1410ad2a0 FUN_1410ad2a0 body=525 status=ok
// SIG undefined FUN_1410ad2a0(void)

void FUN_1410ad2a0(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined1 local_40 [24];
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FExposedValueCopyRecord,FDefaultAllocator>::ResizeForCopy
            (param_1,param_5 + param_3,param_4);
  piVar4 = (int *)*param_1;
  if (param_3 != 0) {
    piVar5 = (int *)(param_2 + 0x40);
    piVar3 = piVar4 + 8;
    do {
      piVar3[-2] = 0;
      piVar3[-1] = 0;
      piVar3[0] = 0;
      piVar3[1] = 0;
      *piVar4 = -1;
      piVar3[-7] = 0;
      piVar3[-4] = 0;
      piVar3[-3] = 0;
      *piVar3 = 0;
      if (0x7fffffff < (uint)piVar3[1]) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(piVar3 + -2,0);
      }
      if (*(undefined2 **)(piVar3 + -2) != (undefined2 *)0x0) {
        **(undefined2 **)(piVar3 + -2) = 0;
      }
      piVar3[-6] = 0;
      *piVar4 = piVar5[-0x10];
      piVar3[-7] = piVar5[-0xf];
      piVar3[-6] = piVar5[-0xe];
      FString::FString(local_40,piVar5 + -10);
      FSoftObjectPath::operator=(piVar3 + -4);
      *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(piVar5 + -6);
      piVar3[4] = piVar5[-4];
      piVar3[6] = 0;
      piVar3[7] = 0;
      iVar1 = *piVar5;
      pvVar2 = *(void **)(piVar5 + -2);
      piVar3[8] = iVar1;
      if (iVar1 == 0) {
        piVar3[9] = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(piVar3 + 6,iVar1,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(piVar3 + 6),pvVar2,(longlong)iVar1 << 3);
      }
      piVar3[10] = 0;
      piVar3[0xb] = 0;
      iVar1 = piVar5[4];
      pvVar2 = *(void **)(piVar5 + 2);
      piVar3[0xc] = iVar1;
      if (iVar1 == 0) {
        piVar3[0xd] = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(piVar3 + 10,iVar1,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(piVar3 + 10),pvVar2,(longlong)iVar1 << 3);
      }
      piVar3[0xe] = 0;
      piVar3[0xf] = 0;
      iVar1 = piVar5[8];
      pvVar2 = *(void **)(piVar5 + 6);
      piVar3[0x10] = iVar1;
      if (iVar1 == 0) {
        piVar3[0x11] = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(piVar3 + 0xe,iVar1,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(piVar3 + 0xe),pvVar2,(longlong)iVar1 << 3);
      }
      piVar4 = piVar4 + 0x1a;
      piVar3 = piVar3 + 0x1a;
      piVar5 = piVar5 + 0x1a;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1410ad4b0 FUN_1410ad4b0 body=663 status=ok
// SIG undefined FUN_1410ad4b0(void)

int * FUN_1410ad4b0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  void *_Dst;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  bool local_res8;
  
  uVar10 = 0xffffffff;
  iVar9 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar7 = *(int *)((longlong)iVar12 * 0x20 + 4 + *param_1);
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar7 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = iVar12;
  local_res8 = false;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar13 +
                   (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  plVar13 = (longlong *)((longlong)iVar12 * 0x20 + *param_1);
  lVar2 = *(longlong *)*param_3;
  *plVar13 = lVar2;
  plVar13[1] = 0;
  plVar13[2] = 0;
  *(undefined4 *)(plVar13 + 3) = 0xffffffff;
  iVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar12 != 1) {
    iVar8 = iVar9;
    if (iVar12 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar7 != -1) {
        do {
          iVar8 = iVar7;
          if (*(longlong *)((longlong)iVar7 * 0x20 + *param_1) == lVar2) break;
          iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + *param_1);
          iVar8 = iVar9;
        } while (iVar7 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar8 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,plVar13,0x18);
      iVar9 = *param_2;
      bVar3 = (byte)iVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar9;
      }
      puVar6 = (undefined4 *)((longlong)iVar9 * 0x20 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar10 = (undefined4)param_1[6];
      }
      puVar6[1] = uVar10;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar13 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar13 +
                       (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1410ad723;
    }
  }
  cVar4 = TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar12,0);
  if (cVar4 == '\0') {
    uVar11 = (int)((ulonglong)*plVar13 >> 0x20) + (int)*plVar13 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar13 + 0x1c) = uVar11;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(plVar13 + 3) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_1410ad723:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1410ad750 FindExistingAction<FDelayAction> body=325 status=ok
// SIG undefined FindExistingAction<FDelayAction>(void)

undefined8
FLatentActionManager::FindExistingAction<FDelayAction>
          (longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int local_res8 [2];
  undefined8 local_res20;
  undefined8 local_48 [2];
  int local_38;
  int iStack_34;
  
  FWeakObjectPtr::operator=(&local_res20);
  local_48[0] = local_res20;
  TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
  ::FindId(param_1,local_res8,local_48);
  plVar4 = (longlong *)0x0;
  plVar3 = plVar4;
  if (local_res8[0] != -1) {
    plVar3 = (longlong *)((longlong)local_res8[0] * 0x20 + *param_1);
  }
  plVar5 = plVar3 + 1;
  if (plVar3 == (longlong *)0x0) {
    plVar5 = plVar4;
  }
  if (plVar5 != (longlong *)0x0) {
    plVar4 = (longlong *)*plVar5;
  }
  if ((plVar4 != (longlong *)0x0) &&
     (iVar2 = TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
              ::Num(plVar4,param_3), 0 < iVar2)) {
    iStack_34 = -1;
    local_38 = param_3;
    TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
    ::ConditionalRehash(plVar4,(int)plVar4[1] - *(int *)((longlong)plVar4 + 0x34),0);
    iVar2 = -1;
    if ((int)plVar4[9] != 0) {
      plVar3 = (longlong *)plVar4[8];
      if ((longlong *)plVar4[8] == (longlong *)0x0) {
        plVar3 = plVar4 + 7;
      }
      iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)plVar4[9] - 1U & (longlong)param_3) * 4);
      iStack_34 = iVar2;
      if (iVar2 != -1) {
        do {
          iVar1 = *(int *)(*plVar4 + 0x10 + (longlong)iVar2 * 0x18);
          iStack_34 = iVar2;
          if (*(int *)(*plVar4 + (longlong)iVar2 * 0x18) == param_3) break;
          iVar2 = iVar1;
          iStack_34 = iVar1;
        } while (iVar1 != -1);
      }
    }
    if (iStack_34 != -1) {
      return *(undefined8 *)(*plVar4 + 8 + (longlong)iVar2 * 0x18);
    }
  }
  return 0;
}



// FUNCTION 1410ad8a0 FUN_1410ad8a0 body=442 status=ok
// SIG undefined FUN_1410ad8a0(void)

void FUN_1410ad8a0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar5 = FUN_141331650();
    lVar7 = *(longlong *)(param_1 + 0x28);
    if (lVar7 != 0) {
      while (lVar7 != lVar5) {
        lVar7 = *(longlong *)(lVar7 + 0x30);
        if (lVar7 == 0) {
          return;
        }
      }
      local_58 = 0;
      uStack_54 = 1;
      iVar1 = *(int *)(param_1 + 0x58);
      puStack_20 = (uint *)(param_1 + 0x40);
      local_48._4_4_ = 0;
      uStack_40 = 0;
      if (iVar1 != 0) {
        puVar8 = *(uint **)(param_1 + 0x50);
        if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
          puVar8 = puStack_20;
        }
        uVar2 = *puVar8;
        uStack_40 = 0;
        local_58 = 0;
        while (uVar2 == 0) {
          lVar7 = (longlong)local_58;
          uStack_40 = uStack_40 + 0x20;
          iVar6 = local_58 + 1;
          bVar4 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
          local_58 = iVar6;
          if (bVar4) goto LAB_1410ad99f;
          uVar2 = puVar8[lVar7 + 1];
        }
        uStack_54 = -uVar2 & uVar2;
        iVar6 = 0x1f;
        if (uStack_54 != 0) {
          for (; uStack_54 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        if (uStack_54 == 0) {
          iVar6 = 0x20;
        }
        else {
          iVar6 = 0x1f - iVar6;
        }
        local_48._4_4_ = (uStack_40 - iVar6) + 0x1f;
        if (iVar1 < local_48._4_4_) {
LAB_1410ad99f:
          local_48._4_4_ = iVar1;
        }
      }
      uStack_18 = 0xffffffff;
      iStack_14 = local_48._4_4_;
      iStack_10 = uStack_40;
      uStack_c = iStack_3c;
      iStack_28 = local_58;
      uStack_24 = uStack_54;
      iStack_50 = local_58;
      uStack_4c = uStack_54;
      local_38 = uStack_40;
      uStack_34 = iStack_3c;
      uStack_40 = 0xffffffff;
      iStack_3c = local_48._4_4_;
      bVar4 = local_48._4_4_ < iVar1;
      local_30 = (longlong *)(param_1 + 0x30);
      local_48 = puStack_20;
      if (bVar4) {
        do {
          iVar1 = (int)param_3[1];
          uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8 + (longlong)iStack_3c * 0x18);
          *(int *)(param_3 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
          }
          *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) = uVar3;
          uStack_40 = uStack_40 & ~uStack_4c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
        } while (iStack_3c < (int)local_48[6]);
      }
    }
  }
  return;
}



// FUNCTION 1410ada60 FUN_1410ada60 body=917 status=ok
// SIG undefined FUN_1410ada60(void)

longlong FUN_1410ada60(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  bool bVar14;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar10 = 0;
  cVar8 = FUN_142091120();
  if (cVar8 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_1410adb0f:
      puVar13 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (iVar9 < 1) goto LAB_1410adb0f;
      local_78 = *(longlong **)(param_1 + 0x30);
      bVar7 = true;
      bVar6 = false;
      local_80 = 0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_78 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_78 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar14) {
          iVar9 = (int)uVar10;
          LOCK();
          bVar14 = iVar9 == (int)local_78[1];
          if (bVar14) {
            *(int *)(local_78 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar10 = *(ulonglong *)(param_1 + 0x28);
            puVar13 = &local_80;
            local_80 = uVar10;
            goto LAB_1410adb24;
          }
          uVar10 = 0;
          LOCK();
          uVar3 = *(uint *)(local_78 + 1);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(local_78 + 1) = 0;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_78 = (longlong *)0x0;
      }
      uVar10 = 0;
      puVar13 = &local_80;
    }
LAB_1410adb24:
    local_70 = uVar10;
    plVar4 = (longlong *)puVar13[1];
    puVar13[1] = 0;
    local_68 = plVar4;
    *puVar13 = 0;
    plVar4 = plStack_58;
    if ((bVar6) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plStack_58 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar4 = local_78;
    if ((bVar7) && (local_78 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_78 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    bVar7 = true;
    bVar6 = false;
    puVar13 = &local_70;
    uVar10 = local_70;
  }
  else {
    puVar13 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  plVar4 = (longlong *)puVar13[1];
  puVar13[1] = 0;
  *puVar13 = 0;
  plVar5 = plStack_48;
  if ((bVar6) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_48 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar5 = local_68;
  if ((bVar7) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_68 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (uVar10 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    return 0;
  }
  if (param_3 != 0) {
    lVar11 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar12 = param_3;
    do {
      if (lVar12 == lVar11) goto LAB_1410adcad;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = FUN_141329e40();
LAB_1410adcad:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = FUN_141329e40();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_1410add2a;
  }
  lVar12 = 0;
LAB_1410add2a:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return lVar12;
}



// FUNCTION 1410ade00 FUN_1410ade00 body=666 status=ok
// SIG undefined FUN_1410ade00(void)

longlong FUN_1410ade00(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x2c0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b8);
  }
  bVar10 = *(char *)(param_1 + 0x4c1) == '\0';
  if (bVar10) {
    plVar5 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar8 = *plVar5;
  }
  plVar4 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if (lVar8 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
    return 0;
  }
  if (param_3 != 0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar9 = param_3;
    do {
      if (lVar9 == lVar6) goto LAB_1410adf66;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = FUN_142f1e6c0();
LAB_1410adf66:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = FUN_142f1e6c0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_1410adfd9;
  }
  lVar7 = 0;
LAB_1410adfd9:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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



// FUNCTION 1410ae0a0 FUN_1410ae0a0 body=1020 status=ok
// SIG undefined FUN_1410ae0a0(void)

void FUN_1410ae0a0(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *local_b8;
  uint local_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint *puStack_a0;
  undefined4 local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined8 uStack_80;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  longlong *local_60;
  uint uStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  plVar13 = (longlong *)0x0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_2 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  plVar14 = (longlong *)(param_1 + 0x2b0);
  local_b8 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_a0 = (uint *)(param_1 + 0x2c0);
  uStack_ac = 0;
  local_a8 = 0;
  uStack_a4 = 1;
  uStack_94 = 0;
  uStack_90 = 0;
  if (uVar1 != 0) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puStack_a0;
    }
    uVar7 = *puVar12;
    plVar6 = plVar13;
    plVar10 = plVar13;
    while (uVar7 == 0) {
      iVar4 = (int)plVar6;
      uStack_90 = (int)plVar10 + 0x20;
      plVar10 = (longlong *)(ulonglong)uStack_90;
      local_a8 = iVar4 + 1;
      plVar6 = (longlong *)(ulonglong)local_a8;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1410ae19d;
      uVar7 = puVar12[(longlong)iVar4 + 1];
    }
    uStack_a4 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar4 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_94 = (uStack_90 - iVar4) + 0x1f;
    if ((int)uVar1 < (int)uStack_94) {
LAB_1410ae19d:
      uStack_94 = uVar1;
    }
  }
  local_98 = 0xffffffff;
  uStack_74 = *(uint *)(param_1 + 0x2d8);
  uStack_80 = CONCAT44(uStack_a4,local_a8);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  uStack_68 = CONCAT44(uStack_8c,uStack_90);
  uStack_78 = -1 << ((byte)uStack_74 & 0x1f);
  uVar11 = uStack_74 & 0xffffffe0;
  uStack_58 = local_a8;
  uStack_54 = uStack_a4;
  plVar6 = plVar13;
  plVar10 = plVar13;
  local_88 = plVar14;
  local_50 = puStack_a0;
  local_40 = uStack_68;
  local_60 = plVar14;
  uStack_70 = uStack_48;
  uStack_6c = uStack_44;
  uVar7 = uStack_74;
  if (uStack_74 != uVar1) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puStack_a0;
    }
    uVar7 = puVar12[(int)uStack_74 >> 5] & uStack_78;
    iVar4 = (int)uStack_74 >> 5;
    while (uVar7 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1410ae275;
      uVar7 = puVar12[(longlong)iVar4 + 1];
      uStack_78 = 0xffffffff;
      iVar4 = iVar4 + 1;
    }
    uVar7 = uVar7 - 1 & uVar7 ^ uVar7;
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
    uStack_74 = (uVar11 - iVar4) + 0x1f;
    uVar7 = uStack_74;
    if ((int)uVar1 < (int)uStack_74) {
LAB_1410ae275:
      uStack_74 = uVar1;
      uVar7 = uVar1;
    }
  }
  while( true ) {
    if ((uStack_44 == uVar7) && (local_50 == puStack_a0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_60 == plVar14)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    iVar4 = (int)plVar10;
    if (!bVar3) break;
    lVar9 = *(longlong *)(*local_60 + (longlong)(int)uStack_44 * 0x10);
    if (lVar9 != 0) {
      lVar5 = AGFreezeCharacterCue::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar9;
      }
    }
    if ((param_3 != '\0') && (lVar9 != 0)) {
      lVar5 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_b0 = iVar4 + 1;
        if ((int)plVar6 < (int)local_b0) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8,plVar10);
          plVar6 = (longlong *)(ulonglong)uStack_ac;
          plVar13 = local_b8;
        }
        plVar10 = (longlong *)(ulonglong)local_b0;
        plVar13[iVar4] = lVar9;
      }
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_58);
  }
  if (param_3 != '\0') {
    uVar8 = 0;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    uStack_ac = 0;
    uVar15 = (ulonglong)((longlong)(plVar13 + iVar4) + (7 - (longlong)plVar13)) >> 3;
    if (plVar13 + iVar4 < plVar13) {
      uVar15 = uVar8;
    }
    plVar14 = plVar13;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_1410ae0a0(*(longlong *)(*plVar14 + 0x2d8),&local_b8,1);
          uVar1 = local_b0;
          lVar9 = (longlong)(int)local_b0;
          if (local_b0 != 0) {
            iVar4 = (int)param_2[1];
            if (*(int *)((longlong)param_2 + 0xc) < (int)(local_b0 + iVar4)) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
              iVar4 = (int)param_2[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_2 + (longlong)iVar4 * 8),local_b8,lVar9 << 3);
            *(uint *)(param_2 + 1) = (int)param_2[1] + uVar1;
            local_b0 = 0;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar13);
  }
  return;
}



// FUNCTION 1410ae4a0 FUN_1410ae4a0 body=93 status=ok
// SIG undefined FUN_1410ae4a0(void)

longlong FUN_1410ae4a0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar2 != 0) {
    lVar3 = FUN_142937720();
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



// FUNCTION 1410ae500 FUN_1410ae500 body=86 status=ok
// SIG undefined FUN_1410ae500(void)

longlong FUN_1410ae500(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_142eb6a30();
  if (lVar2 != 0) {
    lVar3 = UXGameInstance::GetPrivateStaticClass();
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



// FUNCTION 1410ae560 FUN_1410ae560 body=89 status=ok
// SIG undefined FUN_1410ae560(void)

longlong FUN_1410ae560(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x4e8);
  if (lVar1 != 0) {
    lVar3 = UMovieSceneLevelVisibilitySection::GetPrivateStaticClass();
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



// FUNCTION 1410ae5c0 HeapSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_> body=395 status=ok
// SIG undefined HeapSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>
               (undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  iVar4 = (param_2 + -2) / 2;
  if (-1 < iVar4) {
    iVar5 = iVar4 * 2 + 1;
    iVar2 = iVar5;
    iVar7 = iVar4;
joined_r0x0001410ae606:
    do {
      if (iVar5 < param_2) {
        iVar5 = iVar4 * 2;
        iVar6 = iVar5 + 1;
        if (iVar5 + 2 < param_2) {
          cVar3 = FUN_1410bfa70(param_4,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
          if (cVar3 != '\0') {
            iVar6 = iVar5;
          }
          iVar6 = iVar6 + 1;
        }
        cVar3 = FUN_1410bfa70(param_4,param_1[iVar4],param_1[iVar6]);
        if (cVar3 != '\0') {
          uVar1 = param_1[iVar4];
          param_1[iVar4] = param_1[iVar6];
          iVar5 = iVar6 * 2 + 1;
          param_1[iVar6] = uVar1;
          iVar4 = iVar6;
          goto joined_r0x0001410ae606;
        }
      }
      iVar5 = iVar2 + -2;
      iVar4 = iVar7 + -1;
      iVar2 = iVar5;
      iVar7 = iVar4;
    } while (-1 < iVar4);
  }
  param_2 = param_2 + -1;
  lVar8 = (longlong)param_2;
  if (0 < param_2) {
    do {
      iVar4 = 0;
      uVar1 = *param_1;
      *param_1 = param_1[lVar8];
      param_1[lVar8] = uVar1;
      if (1 < param_2) {
        do {
          iVar2 = iVar4 * 2;
          iVar5 = iVar2 + 1;
          if (iVar2 + 2 < param_2) {
            cVar3 = FUN_1410bfa70(param_4,param_1[(longlong)iVar2 + 2],param_1[iVar5]);
            if (cVar3 != '\0') {
              iVar5 = iVar2;
            }
            iVar5 = iVar5 + 1;
          }
          cVar3 = FUN_1410bfa70(param_4,param_1[iVar4],param_1[iVar5]);
          if (cVar3 == '\0') break;
          uVar1 = param_1[iVar4];
          param_1[iVar4] = param_1[iVar5];
          param_1[iVar5] = uVar1;
          iVar4 = iVar5;
        } while (iVar5 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar8 = lVar8 + -1;
    } while (0 < lVar8);
  }
  return;
}



// FUNCTION 1410ae750 FUN_1410ae750 body=553 status=ok
// SIG undefined FUN_1410ae750(void)

void FUN_1410ae750(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  iVar3 = (param_2 + -2) / 2;
  if (-1 < iVar3) {
    iVar5 = iVar3 * 2 + 1;
    iVar7 = iVar5;
    iVar6 = iVar3;
joined_r0x0001410ae796:
    do {
      if (iVar5 < param_2) {
        iVar5 = iVar3 * 2;
        iVar8 = iVar5 + 1;
        if (iVar5 + 2 < param_2) {
          if (((*(longlong *)(param_1[(longlong)iVar5 + 2] + 0x88) == 0) ||
              (*(longlong *)(param_1[iVar8] + 0x88) == 0)) ||
             (iVar4 = FText::CompareTo(*(longlong *)(param_1[(longlong)iVar5 + 2] + 0x88) + 0x30,
                                       *(longlong *)(param_1[iVar8] + 0x88) + 0x30,0), -1 < iVar4))
          {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            iVar8 = iVar5;
          }
          iVar8 = iVar8 + 1;
        }
        if (((*(longlong *)(param_1[iVar3] + 0x88) != 0) &&
            (*(longlong *)(param_1[iVar8] + 0x88) != 0)) &&
           (iVar5 = FText::CompareTo(*(longlong *)(param_1[iVar3] + 0x88) + 0x30,
                                     *(longlong *)(param_1[iVar8] + 0x88) + 0x30,0), iVar5 < 0)) {
          uVar1 = param_1[iVar3];
          param_1[iVar3] = param_1[iVar8];
          iVar5 = iVar8 * 2 + 1;
          param_1[iVar8] = uVar1;
          iVar3 = iVar8;
          goto joined_r0x0001410ae796;
        }
      }
      iVar5 = iVar7 + -2;
      iVar3 = iVar6 + -1;
      iVar7 = iVar5;
      iVar6 = iVar3;
    } while (-1 < iVar3);
  }
  param_2 = param_2 + -1;
  lVar9 = (longlong)param_2;
  if (0 < param_2) {
    do {
      iVar3 = 0;
      uVar1 = *param_1;
      *param_1 = param_1[lVar9];
      param_1[lVar9] = uVar1;
      if (1 < param_2) {
        do {
          iVar7 = iVar3 * 2;
          iVar5 = iVar7 + 1;
          if (iVar7 + 2 < param_2) {
            if (((*(longlong *)(param_1[(longlong)iVar7 + 2] + 0x88) == 0) ||
                (*(longlong *)(param_1[iVar5] + 0x88) == 0)) ||
               (iVar6 = FText::CompareTo(*(longlong *)(param_1[(longlong)iVar7 + 2] + 0x88) + 0x30,
                                         *(longlong *)(param_1[iVar5] + 0x88) + 0x30,0), -1 < iVar6)
               ) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              iVar5 = iVar7;
            }
            iVar5 = iVar5 + 1;
          }
          if (((*(longlong *)(param_1[iVar3] + 0x88) == 0) ||
              (*(longlong *)(param_1[iVar5] + 0x88) == 0)) ||
             (iVar7 = FText::CompareTo(*(longlong *)(param_1[iVar3] + 0x88) + 0x30,
                                       *(longlong *)(param_1[iVar5] + 0x88) + 0x30,0), -1 < iVar7))
          break;
          uVar1 = param_1[iVar3];
          param_1[iVar3] = param_1[iVar5];
          param_1[iVar5] = uVar1;
          iVar3 = iVar5;
        } while (iVar5 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar9 = lVar9 + -1;
    } while (0 < lVar9);
  }
  return;
}



// FUNCTION 1410ae980 FUN_1410ae980 body=959 status=ok
// SIG undefined FUN_1410ae980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410ae980(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  float fVar15;
  undefined1 auStack_368 [48];
  int local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 8;
    fVar15 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar15 = fVar15 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar15 = _guard_xfg_dispatch_icall_nop(fVar15);
    local_318 = (undefined4)(longlong)(fVar15 + fVar15);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar14 = &local_328;
    do {
      plVar8 = (longlong *)*plVar14;
      plVar13 = (longlong *)plVar14[1];
      local_338 = (int)plVar14[2];
      lVar9 = ((longlong)plVar13 - (longlong)plVar8 >> 3) + 1;
      plVar7 = plVar8;
      if (local_338 != 0) {
LAB_1410aea50:
        if (8 < lVar9) {
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          plVar11 = plVar13 + 1;
          lVar1 = plVar7[lVar9 >> 1];
          plVar7[lVar9 >> 1] = *plVar7;
          *plVar7 = lVar1;
          plVar8 = plVar7;
LAB_1410aea80:
          plVar8 = plVar8 + 1;
          if (plVar8 <= plVar13) goto code_r0x0001410aea89;
          goto LAB_1410aeaa0;
        }
        for (; plVar11 = plVar7, plVar8 = plVar7, plVar7 < plVar13; plVar13 = plVar13 + -1) {
          while (plVar12 = plVar11, plVar8 = plVar8 + 1, plVar8 <= plVar13) {
            plVar11 = plVar8;
            if (*(int *)(*plVar8 + 0x724) <= *(int *)(*plVar12 + 0x724)) {
              plVar11 = plVar12;
            }
          }
          lVar9 = *plVar12;
          *plVar12 = *plVar13;
          *plVar13 = lVar9;
        }
        goto LAB_1410aec94;
      }
LAB_1410aeb5a:
      iVar5 = (int)lVar9;
      iVar3 = (iVar5 + -2) / 2;
      if (-1 < iVar3) {
        iVar4 = iVar3 * 2 + 1;
        iVar2 = iVar4;
        iVar6 = iVar3;
joined_r0x0001410aeb77:
        do {
          if (iVar4 < iVar5) {
            iVar4 = iVar3 * 2;
            iVar10 = iVar4 + 1;
            if (iVar4 + 2 < iVar5) {
              if (*(int *)(plVar8[(longlong)iVar4 + 2] + 0x724) < *(int *)(plVar8[iVar10] + 0x724))
              {
                iVar10 = iVar4;
              }
              iVar10 = iVar10 + 1;
            }
            lVar9 = plVar8[iVar3];
            if (*(int *)(lVar9 + 0x724) < *(int *)(plVar8[iVar10] + 0x724)) {
              iVar4 = iVar10 * 2 + 1;
              plVar8[iVar3] = plVar8[iVar10];
              plVar8[iVar10] = lVar9;
              iVar3 = iVar10;
              goto joined_r0x0001410aeb77;
            }
          }
          iVar4 = iVar2 + -2;
          iVar3 = iVar6 + -1;
          iVar2 = iVar4;
          iVar6 = iVar3;
        } while (-1 < iVar3);
      }
      iVar5 = iVar5 + -1;
      lVar9 = (longlong)iVar5;
      if (0 < iVar5) {
        do {
          iVar3 = 0;
          lVar1 = *plVar8;
          *plVar8 = plVar8[lVar9];
          plVar8[lVar9] = lVar1;
          if (1 < iVar5) {
            do {
              iVar2 = iVar3 * 2;
              iVar4 = iVar2 + 1;
              if (iVar2 + 2 < iVar5) {
                if (*(int *)(plVar8[(longlong)iVar2 + 2] + 0x724) < *(int *)(plVar8[iVar4] + 0x724))
                {
                  iVar4 = iVar2;
                }
                iVar4 = iVar4 + 1;
              }
              lVar1 = plVar8[iVar3];
              if (*(int *)(plVar8[iVar4] + 0x724) <= *(int *)(lVar1 + 0x724)) break;
              plVar8[iVar3] = plVar8[iVar4];
              plVar8[iVar4] = lVar1;
              iVar3 = iVar4;
            } while (iVar4 * 2 + 1 < iVar5);
          }
          iVar5 = iVar5 + -1;
          lVar9 = lVar9 + -1;
        } while (0 < lVar9);
      }
LAB_1410aec94:
      plVar14 = plVar14 + -3;
    } while (&local_328 <= plVar14);
  }
  return;
code_r0x0001410aea89:
  if (*(int *)(*plVar8 + 0x724) <= *(int *)(*plVar7 + 0x724)) goto LAB_1410aea80;
LAB_1410aeaa0:
  do {
    plVar12 = plVar11;
    lVar9 = plVar12[-1];
    plVar11 = plVar12 + -1;
    if (plVar11 <= plVar7) break;
  } while (*(int *)(*plVar7 + 0x724) <= *(int *)(lVar9 + 0x724));
  if (plVar8 <= plVar11) {
    lVar1 = *plVar8;
    *plVar8 = lVar9;
    *plVar11 = lVar1;
    goto LAB_1410aea80;
  }
  lVar1 = *plVar7;
  *plVar7 = lVar9;
  *plVar11 = lVar1;
  local_338 = local_338 + -1;
  if ((longlong)((longlong)plVar11 + (-8 - (longlong)plVar7) & 0xfffffffffffffff8U) <
      (longlong)((longlong)plVar13 - (longlong)plVar8 & 0xfffffffffffffff8U)) {
    if (plVar8 < plVar13) {
      *plVar14 = (longlong)plVar8;
      plVar14[1] = (longlong)plVar13;
      *(int *)(plVar14 + 2) = local_338;
      plVar14 = plVar14 + 3;
    }
    if (plVar11 <= plVar7 + 1) goto LAB_1410aec94;
    plVar13 = plVar12 + -2;
    plVar8 = plVar7;
  }
  else {
    if (plVar7 + 1 < plVar11) {
      *plVar14 = (longlong)plVar7;
      plVar14[1] = (longlong)(plVar12 + -2);
      *(int *)(plVar14 + 2) = local_338;
      plVar14 = plVar14 + 3;
    }
    if (plVar13 <= plVar8) goto LAB_1410aec94;
  }
  lVar9 = ((longlong)plVar13 - (longlong)plVar8 >> 3) + 1;
  plVar7 = plVar8;
  if (local_338 == 0) goto LAB_1410aeb5a;
  goto LAB_1410aea50;
}



// FUNCTION 1410aed40 FUN_1410aed40 body=959 status=ok
// SIG undefined FUN_1410aed40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410aed40(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  float fVar15;
  undefined1 auStack_368 [48];
  int local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 8;
    fVar15 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar15 = fVar15 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar15 = _guard_xfg_dispatch_icall_nop(fVar15);
    local_318 = (undefined4)(longlong)(fVar15 + fVar15);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar14 = &local_328;
    do {
      plVar8 = (longlong *)*plVar14;
      plVar13 = (longlong *)plVar14[1];
      local_338 = (int)plVar14[2];
      lVar9 = ((longlong)plVar13 - (longlong)plVar8 >> 3) + 1;
      plVar7 = plVar8;
      if (local_338 != 0) {
LAB_1410aee10:
        if (8 < lVar9) {
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          plVar11 = plVar13 + 1;
          lVar1 = plVar7[lVar9 >> 1];
          plVar7[lVar9 >> 1] = *plVar7;
          *plVar7 = lVar1;
          plVar8 = plVar7;
LAB_1410aee40:
          plVar8 = plVar8 + 1;
          if (plVar8 <= plVar13) goto code_r0x0001410aee49;
          goto LAB_1410aee60;
        }
        for (; plVar11 = plVar7, plVar8 = plVar7, plVar7 < plVar13; plVar13 = plVar13 + -1) {
          while (plVar12 = plVar11, plVar8 = plVar8 + 1, plVar8 <= plVar13) {
            plVar11 = plVar8;
            if (*(int *)(*plVar8 + 0x7a0) <= *(int *)(*plVar12 + 0x7a0)) {
              plVar11 = plVar12;
            }
          }
          lVar9 = *plVar12;
          *plVar12 = *plVar13;
          *plVar13 = lVar9;
        }
        goto LAB_1410af054;
      }
LAB_1410aef1a:
      iVar5 = (int)lVar9;
      iVar3 = (iVar5 + -2) / 2;
      if (-1 < iVar3) {
        iVar4 = iVar3 * 2 + 1;
        iVar2 = iVar4;
        iVar6 = iVar3;
joined_r0x0001410aef37:
        do {
          if (iVar4 < iVar5) {
            iVar4 = iVar3 * 2;
            iVar10 = iVar4 + 1;
            if (iVar4 + 2 < iVar5) {
              if (*(int *)(plVar8[(longlong)iVar4 + 2] + 0x7a0) < *(int *)(plVar8[iVar10] + 0x7a0))
              {
                iVar10 = iVar4;
              }
              iVar10 = iVar10 + 1;
            }
            lVar9 = plVar8[iVar3];
            if (*(int *)(lVar9 + 0x7a0) < *(int *)(plVar8[iVar10] + 0x7a0)) {
              iVar4 = iVar10 * 2 + 1;
              plVar8[iVar3] = plVar8[iVar10];
              plVar8[iVar10] = lVar9;
              iVar3 = iVar10;
              goto joined_r0x0001410aef37;
            }
          }
          iVar4 = iVar2 + -2;
          iVar3 = iVar6 + -1;
          iVar2 = iVar4;
          iVar6 = iVar3;
        } while (-1 < iVar3);
      }
      iVar5 = iVar5 + -1;
      lVar9 = (longlong)iVar5;
      if (0 < iVar5) {
        do {
          iVar3 = 0;
          lVar1 = *plVar8;
          *plVar8 = plVar8[lVar9];
          plVar8[lVar9] = lVar1;
          if (1 < iVar5) {
            do {
              iVar2 = iVar3 * 2;
              iVar4 = iVar2 + 1;
              if (iVar2 + 2 < iVar5) {
                if (*(int *)(plVar8[(longlong)iVar2 + 2] + 0x7a0) < *(int *)(plVar8[iVar4] + 0x7a0))
                {
                  iVar4 = iVar2;
                }
                iVar4 = iVar4 + 1;
              }
              lVar1 = plVar8[iVar3];
              if (*(int *)(plVar8[iVar4] + 0x7a0) <= *(int *)(lVar1 + 0x7a0)) break;
              plVar8[iVar3] = plVar8[iVar4];
              plVar8[iVar4] = lVar1;
              iVar3 = iVar4;
            } while (iVar4 * 2 + 1 < iVar5);
          }
          iVar5 = iVar5 + -1;
          lVar9 = lVar9 + -1;
        } while (0 < lVar9);
      }
LAB_1410af054:
      plVar14 = plVar14 + -3;
    } while (&local_328 <= plVar14);
  }
  return;
code_r0x0001410aee49:
  if (*(int *)(*plVar8 + 0x7a0) <= *(int *)(*plVar7 + 0x7a0)) goto LAB_1410aee40;
LAB_1410aee60:
  do {
    plVar12 = plVar11;
    lVar9 = plVar12[-1];
    plVar11 = plVar12 + -1;
    if (plVar11 <= plVar7) break;
  } while (*(int *)(*plVar7 + 0x7a0) <= *(int *)(lVar9 + 0x7a0));
  if (plVar8 <= plVar11) {
    lVar1 = *plVar8;
    *plVar8 = lVar9;
    *plVar11 = lVar1;
    goto LAB_1410aee40;
  }
  lVar1 = *plVar7;
  *plVar7 = lVar9;
  *plVar11 = lVar1;
  local_338 = local_338 + -1;
  if ((longlong)((longlong)plVar11 + (-8 - (longlong)plVar7) & 0xfffffffffffffff8U) <
      (longlong)((longlong)plVar13 - (longlong)plVar8 & 0xfffffffffffffff8U)) {
    if (plVar8 < plVar13) {
      *plVar14 = (longlong)plVar8;
      plVar14[1] = (longlong)plVar13;
      *(int *)(plVar14 + 2) = local_338;
      plVar14 = plVar14 + 3;
    }
    if (plVar11 <= plVar7 + 1) goto LAB_1410af054;
    plVar13 = plVar12 + -2;
    plVar8 = plVar7;
  }
  else {
    if (plVar7 + 1 < plVar11) {
      *plVar14 = (longlong)plVar7;
      plVar14[1] = (longlong)(plVar12 + -2);
      *(int *)(plVar14 + 2) = local_338;
      plVar14 = plVar14 + 3;
    }
    if (plVar13 <= plVar8) goto LAB_1410af054;
  }
  lVar9 = ((longlong)plVar13 - (longlong)plVar8 >> 3) + 1;
  plVar7 = plVar8;
  if (local_338 == 0) goto LAB_1410aef1a;
  goto LAB_1410aee10;
}



// FUNCTION 1410af100 IntroSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_> body=681 status=ok
// SIG undefined IntroSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_1 + (param_2 - 1) * 8;
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar11 = ::_guard_xfg_dispatch_icall_nop(fVar11);
    local_338 = (undefined4)(longlong)(fVar11 + fVar11);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar7 = &local_348;
    do {
      puVar5 = (undefined8 *)*plVar7;
      puVar4 = (undefined8 *)plVar7[1];
      local_358 = plVar7[2];
      lVar3 = ((longlong)puVar4 - (longlong)puVar5 >> 3) + 1;
      puVar10 = puVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1410af1e0:
        if (8 < lVar3) {
          if (lVar3 < 0) {
            lVar3 = lVar3 + 1;
          }
          puVar8 = puVar4 + 1;
          uVar1 = puVar10[lVar3 >> 1];
          puVar10[lVar3 >> 1] = *puVar10;
          *puVar10 = uVar1;
          puVar5 = puVar10;
LAB_1410af210:
          puVar5 = puVar5 + 1;
          if (puVar5 <= puVar4) goto code_r0x0001410af219;
          goto LAB_1410af230;
        }
        for (; puVar8 = puVar10, puVar5 = puVar10, puVar10 < puVar4; puVar4 = puVar4 + -1) {
          while (puVar5 = puVar5 + 1, puVar5 <= puVar4) {
            cVar2 = FUN_1410bfa70(param_4,*puVar8,*puVar5);
            if (cVar2 != '\0') {
              puVar8 = puVar5;
            }
          }
          uVar1 = *puVar8;
          *puVar8 = *puVar4;
          *puVar4 = uVar1;
        }
        goto LAB_1410af2f5;
      }
LAB_1410af2e6:
      HeapSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>
                (puVar5,lVar3,param_3,param_4);
LAB_1410af2f5:
      plVar7 = plVar7 + -3;
    } while (&local_348 <= plVar7);
  }
  return;
code_r0x0001410af219:
  cVar2 = FUN_1410bfa70(param_4,*puVar10,*puVar5);
  if (cVar2 == '\0') goto LAB_1410af210;
LAB_1410af230:
  do {
    puVar9 = puVar8;
    puVar8 = puVar9 + -1;
    if (puVar8 <= puVar10) break;
    cVar2 = FUN_1410bfa70(param_4,*puVar8,*puVar10);
  } while (cVar2 == '\0');
  if (puVar5 <= puVar8) {
    uVar1 = *puVar5;
    *puVar5 = *puVar8;
    *puVar8 = uVar1;
    goto LAB_1410af210;
  }
  uVar1 = *puVar10;
  iVar6 = iVar6 + -1;
  *puVar10 = *puVar8;
  *puVar8 = uVar1;
  if ((longlong)((longlong)puVar8 + (-8 - (longlong)puVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar4 - (longlong)puVar5 & 0xfffffffffffffff8U)) {
    if (puVar5 < puVar4) {
      *plVar7 = (longlong)puVar5;
      plVar7[1] = (longlong)puVar4;
      *(int *)(plVar7 + 2) = iVar6;
      plVar7 = plVar7 + 3;
    }
    if (puVar8 <= puVar10 + 1) goto LAB_1410af2f5;
    puVar4 = puVar9 + -2;
    puVar5 = puVar10;
  }
  else {
    if (puVar10 + 1 < puVar8) {
      *plVar7 = (longlong)puVar10;
      plVar7[1] = (longlong)(puVar9 + -2);
      *(int *)(plVar7 + 2) = iVar6;
      plVar7 = plVar7 + 3;
    }
    if (puVar4 <= puVar5) goto LAB_1410af2f5;
  }
  lVar3 = ((longlong)puVar4 - (longlong)puVar5 >> 3) + 1;
  puVar10 = puVar5;
  if (iVar6 == 0) goto LAB_1410af2e6;
  goto LAB_1410af1e0;
}



// FUNCTION 1410af3b0 FUN_1410af3b0 body=793 status=ok
// SIG undefined FUN_1410af3b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410af3b0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  float fVar12;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_1 + (param_2 - 1) * 8;
    fVar12 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar12 = fVar12 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar12 = _guard_xfg_dispatch_icall_nop(fVar12);
    local_338 = (undefined4)(longlong)(fVar12 + fVar12);
    _guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar9 = &local_348;
    do {
      plVar10 = (longlong *)*plVar9;
      plVar5 = (longlong *)plVar9[1];
      local_358 = plVar9[2];
      lVar4 = ((longlong)plVar5 - (longlong)plVar10 >> 3) + 1;
      plVar11 = plVar10;
      iVar8 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1410af490:
        if (8 < lVar4) {
          if (lVar4 < 0) {
            lVar4 = lVar4 + 1;
          }
          plVar6 = plVar5 + 1;
          lVar1 = plVar11[lVar4 >> 1];
          plVar11[lVar4 >> 1] = *plVar11;
          *plVar11 = lVar1;
          plVar10 = plVar11;
LAB_1410af4c0:
          plVar10 = plVar10 + 1;
          if (plVar10 <= plVar5) goto code_r0x0001410af4c9;
          goto LAB_1410af500;
        }
        for (; plVar6 = plVar11, plVar10 = plVar11, plVar11 < plVar5; plVar5 = plVar5 + -1) {
          while (plVar7 = plVar6, plVar10 = plVar10 + 1, plVar10 <= plVar5) {
            if (((*(longlong *)(*plVar7 + 0x88) == 0) || (*(longlong *)(*plVar10 + 0x88) == 0)) ||
               (iVar8 = FText::CompareTo(*(longlong *)(*plVar7 + 0x88) + 0x30,
                                         *(longlong *)(*plVar10 + 0x88) + 0x30,0), -1 < iVar8)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            plVar6 = plVar10;
            if (!bVar2) {
              plVar6 = plVar7;
            }
          }
          lVar4 = *plVar7;
          *plVar7 = *plVar5;
          *plVar5 = lVar4;
        }
        goto LAB_1410af5e8;
      }
LAB_1410af5d9:
      FUN_1410ae750(plVar10,lVar4,param_3,param_4);
LAB_1410af5e8:
      plVar9 = plVar9 + -3;
    } while (&local_348 <= plVar9);
  }
  return;
code_r0x0001410af4c9:
  if (((*(longlong *)(*plVar11 + 0x88) == 0) || (*(longlong *)(*plVar10 + 0x88) == 0)) ||
     (iVar3 = FText::CompareTo(*(longlong *)(*plVar11 + 0x88) + 0x30,
                               *(longlong *)(*plVar10 + 0x88) + 0x30,0), -1 < iVar3))
  goto LAB_1410af4c0;
LAB_1410af500:
  do {
    plVar7 = plVar6;
    plVar6 = plVar7 + -1;
    if (plVar6 <= plVar11) break;
  } while (((*(longlong *)(*plVar6 + 0x88) == 0) || (*(longlong *)(*plVar11 + 0x88) == 0)) ||
          (iVar3 = FText::CompareTo(*(longlong *)(*plVar6 + 0x88) + 0x30,
                                    *(longlong *)(*plVar11 + 0x88) + 0x30,0), -1 < iVar3));
  if (plVar10 <= plVar6) {
    lVar4 = *plVar10;
    *plVar10 = *plVar6;
    *plVar6 = lVar4;
    goto LAB_1410af4c0;
  }
  lVar4 = *plVar11;
  iVar8 = iVar8 + -1;
  *plVar11 = *plVar6;
  *plVar6 = lVar4;
  if ((longlong)((longlong)plVar6 + (-8 - (longlong)plVar11) & 0xfffffffffffffff8U) <
      (longlong)((longlong)plVar5 - (longlong)plVar10 & 0xfffffffffffffff8U)) {
    if (plVar10 < plVar5) {
      *plVar9 = (longlong)plVar10;
      plVar9[1] = (longlong)plVar5;
      *(int *)(plVar9 + 2) = iVar8;
      plVar9 = plVar9 + 3;
    }
    if (plVar6 <= plVar11 + 1) goto LAB_1410af5e8;
    plVar5 = plVar7 + -2;
    plVar10 = plVar11;
  }
  else {
    if (plVar11 + 1 < plVar6) {
      *plVar9 = (longlong)plVar11;
      plVar9[1] = (longlong)(plVar7 + -2);
      *(int *)(plVar9 + 2) = iVar8;
      plVar9 = plVar9 + 3;
    }
    if (plVar5 <= plVar10) goto LAB_1410af5e8;
  }
  lVar4 = ((longlong)plVar5 - (longlong)plVar10 >> 3) + 1;
  plVar11 = plVar10;
  if (iVar8 == 0) goto LAB_1410af5d9;
  goto LAB_1410af490;
}



// FUNCTION 1410af6d0 FUN_1410af6d0 body=69 status=ok
// SIG undefined FUN_1410af6d0(void)

ulonglong FUN_1410af6d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = AArchVisCharacter::StaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1410af720 FUN_1410af720 body=617 status=ok
// SIG undefined FUN_1410af720(void)

bool FUN_1410af720(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*param_2 == 0) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    bVar5 = true;
    bVar6 = false;
    plVar7 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar9 = *plVar7;
  }
  else {
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar6 = true;
    lVar9 = 0;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  if (lVar9 == 0) goto LAB_1410af934;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_1410af877;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_141324ca0();
LAB_1410af877:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_1410af8eb:
    lVar9 = 0;
  }
  else {
    lVar10 = FUN_141324ca0();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_1410af8eb;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar9;
LAB_1410af934:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return *param_2 != 0;
}



// FUNCTION 1410af990 FUN_1410af990 body=879 status=ok
// SIG undefined FUN_1410af990(void)

bool FUN_1410af990(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_1410afa4f:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_1410afa4f;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_1410afa64;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_1410afa64:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_1410afc9f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_1410afbed;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_141329900();
LAB_1410afbed:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_1410afc66:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_141329900();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_1410afc66;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar11;
LAB_1410afc9f:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 1410afd00 FUN_1410afd00 body=879 status=ok
// SIG undefined FUN_1410afd00(void)

bool FUN_1410afd00(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_1410afdbf:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_1410afdbf;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_1410afdd4;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_1410afdd4:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_1410b000f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_1410aff5d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
LAB_1410aff5d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_1410affd6:
    lVar11 = 0;
  }
  else {
    lVar10 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_1410affd6;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar11;
LAB_1410b000f:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 1410b0070 FUN_1410b0070 body=879 status=ok
// SIG undefined FUN_1410b0070(void)

bool FUN_1410b0070(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_1410b012f:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_1410b012f;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_1410b0144;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_1410b0144:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_1410b037f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_1410b02cd;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = ALobbyBeaconPlayerState::GetPrivateStaticClass();
LAB_1410b02cd:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_1410b0346:
    lVar11 = 0;
  }
  else {
    lVar10 = ALobbyBeaconPlayerState::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_1410b0346;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar11;
LAB_1410b037f:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 1410b03e0 FUN_1410b03e0 body=879 status=ok
// SIG undefined FUN_1410b03e0(void)

bool FUN_1410b03e0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_1410b049f:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_1410b049f;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_1410b04b4;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_1410b04b4:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_1410b06ef;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_1410b063d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_141329ef0();
LAB_1410b063d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_1410b06b6:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_141329ef0();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_1410b06b6;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar11;
LAB_1410b06ef:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 1410b0750 FUN_1410b0750 body=617 status=ok
// SIG undefined FUN_1410b0750(void)

bool FUN_1410b0750(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*param_2 == 0) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    bVar5 = true;
    bVar6 = false;
    plVar7 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar9 = *plVar7;
  }
  else {
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar6 = true;
    lVar9 = 0;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  if (lVar9 == 0) goto LAB_1410b0964;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_1410b08a7;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
LAB_1410b08a7:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_1410b091b:
    lVar9 = 0;
  }
  else {
    lVar10 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_1410b091b;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar9;
LAB_1410b0964:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return *param_2 != 0;
}



// FUNCTION 1410b09c0 FUN_1410b09c0 body=617 status=ok
// SIG undefined FUN_1410b09c0(void)

bool FUN_1410b09c0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*param_2 == 0) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    bVar5 = true;
    bVar6 = false;
    plVar7 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar9 = *plVar7;
  }
  else {
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar6 = true;
    lVar9 = 0;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  if (lVar9 == 0) goto LAB_1410b0bd4;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_1410b0b17;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = ALobbyBeaconPlayerState::GetPrivateStaticClass();
LAB_1410b0b17:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_1410b0b8b:
    lVar9 = 0;
  }
  else {
    lVar10 = ALobbyBeaconPlayerState::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_1410b0b8b;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar9;
LAB_1410b0bd4:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return *param_2 != 0;
}



// FUNCTION 1410b0c30 FUN_1410b0c30 body=879 status=ok
// SIG undefined FUN_1410b0c30(void)

bool FUN_1410b0c30(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_1410b0cef:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_1410b0cef;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_1410b0d04;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_1410b0d04:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_1410b0f3f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_1410b0e8d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = UXGameInstance::GetPrivateStaticClass();
LAB_1410b0e8d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_1410b0f06:
    lVar11 = 0;
  }
  else {
    lVar10 = UXGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_1410b0f06;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar11;
LAB_1410b0f3f:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 1410b0fa0 FUN_1410b0fa0 body=879 status=ok
// SIG undefined FUN_1410b0fa0(void)

bool FUN_1410b0fa0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_1410b105f:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_1410b105f;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_1410b1074;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_1410b1074:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_1410b12af;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_1410b11fd;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
LAB_1410b11fd:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_1410b1276:
    lVar11 = 0;
  }
  else {
    lVar10 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_1410b1276;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar11;
LAB_1410b12af:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 1410b1310 FUN_1410b1310 body=879 status=ok
// SIG undefined FUN_1410b1310(void)

bool FUN_1410b1310(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_1410b13cf:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_1410b13cf;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_1410b13e4;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_1410b13e4:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_1410b161f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_1410b156d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_1413a6ce0();
LAB_1410b156d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_1410b15e6:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_1413a6ce0();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_1410b15e6;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar11;
LAB_1410b161f:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 1410b1680 FUN_1410b1680 body=879 status=ok
// SIG undefined FUN_1410b1680(void)

bool FUN_1410b1680(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_1410b173f:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_1410b173f;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_1410b1754;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_1410b1754:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_1410b198f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_1410b18dd;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_1413a6620();
LAB_1410b18dd:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_1410b1956:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_1413a6620();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_1410b1956;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar11;
LAB_1410b198f:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 1410b19f0 FUN_1410b19f0 body=879 status=ok
// SIG undefined FUN_1410b19f0(void)

bool FUN_1410b19f0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_1410b1aaf:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_1410b1aaf;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_1410b1ac4;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_1410b1ac4:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_1410b1cff;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_1410b1c4d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_1413a6a90();
LAB_1410b1c4d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_1410b1cc6:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_1413a6a90();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_1410b1cc6;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar11;
LAB_1410b1cff:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 1410b1d60 FUN_1410b1d60 body=879 status=ok
// SIG undefined FUN_1410b1d60(void)

bool FUN_1410b1d60(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_1410b1e1f:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_1410b1e1f;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_1410b1e34;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_1410b1e34:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_1410b206f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_1410b1fbd;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = UXGameInstance::GetPrivateStaticClass();
LAB_1410b1fbd:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_1410b2036:
    lVar11 = 0;
  }
  else {
    lVar10 = UXGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_1410b2036;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar11;
LAB_1410b206f:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 1410b20d0 FUN_1410b20d0 body=879 status=ok
// SIG undefined FUN_1410b20d0(void)

bool FUN_1410b20d0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_1410b218f:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_1410b218f;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_1410b21a4;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_1410b21a4:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_1410b23df;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_1410b232d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_1413a6f10();
LAB_1410b232d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_1410b23a6:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_1413a6f10();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_1410b23a6;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar11;
LAB_1410b23df:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 1410b2440 FUN_1410b2440 body=879 status=ok
// SIG undefined FUN_1410b2440(void)

bool FUN_1410b2440(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_1410b24ff:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_1410b24ff;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_1410b2514;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_1410b2514:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_1410b274f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_1410b269d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_142f22b30();
LAB_1410b269d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_1410b2716:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_142f22b30();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_1410b2716;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar11;
LAB_1410b274f:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 1410b27b0 FUN_1410b27b0 body=491 status=ok
// SIG undefined FUN_1410b27b0(void)

undefined8 * FUN_1410b27b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  puVar1 = param_1 + 1;
  *param_1 = *param_2;
  lVar5 = (longlong)param_2 + (8 - (longlong)puVar1);
  lVar3 = 4;
  lVar4 = 4;
  do {
    *puVar1 = 0;
    *puVar1 = *(undefined8 *)(lVar5 + (longlong)puVar1);
    *(undefined8 *)(lVar5 + (longlong)puVar1) = 0;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(lVar5 + 8 + (longlong)puVar1);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(lVar5 + 0xc + (longlong)puVar1);
    *(undefined8 *)(lVar5 + 8 + (longlong)puVar1) = 0;
    puVar1 = puVar1 + 2;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar1 = param_1 + 9;
  puVar2 = param_2 + 9;
  do {
    *puVar1 = 0;
    *puVar1 = *puVar2;
    *puVar2 = 0;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)((longlong)puVar1 + lVar5 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)((longlong)puVar1 + lVar5 + 0xc);
    *(undefined8 *)((longlong)puVar1 + lVar5 + 8) = 0;
    lVar3 = lVar3 + -1;
    puVar1 = puVar1 + 2;
    puVar2 = puVar2 + 2;
  } while (lVar3 != 0);
  param_1[0x11] = 0;
  param_1[0x11] = param_2[0x11];
  param_2[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x94);
  param_2[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x13] = param_2[0x13];
  param_2[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xa4);
  param_2[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x15] = param_2[0x15];
  param_2[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0xb4);
  param_2[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x17] = param_2[0x17];
  param_2[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)((longlong)param_2 + 0xc4);
  param_2[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)((longlong)param_2 + 0xd4);
  return param_1;
}



// FUNCTION 1410b29a0 TFunction<void___cdecl(void)> body=185 status=ok
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
      goto LAB_1410b2a35;
    }
  }
  pcVar1 = FString::FString;
LAB_1410b2a35:
  *param_1 = pcVar1;
  *param_2 = FString::FString;
  return param_1;
}



// FUNCTION 1410b2a60 TFunction<void___cdecl(void)> body=185 status=ok
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
      goto LAB_1410b2af5;
    }
  }
  pcVar1 = FUN_1407c3030;
LAB_1410b2af5:
  *param_1 = pcVar1;
  *param_2 = FUN_1407c3030;
  return param_1;
}



// FUNCTION 1410b2b20 FUN_1410b2b20 body=212 status=ok
// SIG undefined FUN_1410b2b20(void)

undefined8 * FUN_1410b2b20(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = 0;
  FString::FString(param_1 + 1);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x60,param_1 + 6);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_1446a5500;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_3);
  }
  param_1[4] = FUN_1410c5910;
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



// FUNCTION 1410b2c00 FUN_1410b2c00 body=212 status=ok
// SIG undefined FUN_1410b2c00(void)

undefined8 * FUN_1410b2c00(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = 0;
  FString::FString(param_1 + 1);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x60,param_1 + 6);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_1446a54e8;
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



// FUNCTION 1410b2ce0 TFunction<void___cdecl(void)> body=112 status=ok
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
  *param_1 = FString::FString;
  return param_1;
}



// FUNCTION 1410b2d50 FUN_1410b2d50 body=673 status=ok
// SIG undefined FUN_1410b2d50(void)

undefined8 * FUN_1410b2d50(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 local_38;
  undefined1 local_30 [24];
  
  *param_1 = *param_2;
  uVar5 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar5;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 5);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 5) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar3 = *(undefined4 *)(param_2 + 7);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 7) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar4;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 100)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0);
  }
  if ((undefined2 *)param_1[0xb] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xb] = 0;
  }
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  local_38 = param_2[10];
  FString::FString(local_30,param_2 + 0xb);
  FSoftObjectPath::operator=(param_1 + 10,&local_38);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((*(int *)((longlong)param_1 + 0x8c) < 0) && (*(int *)((longlong)param_1 + 0x8c) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  if ((undefined2 *)param_1[0x10] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x10] = 0;
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  local_38 = param_2[0xf];
  FString::FString(local_30,param_2 + 0x10);
  FSoftObjectPath::operator=(param_1 + 0xf,&local_38);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if ((*(int *)((longlong)param_1 + 0xb4) < 0) && (*(int *)((longlong)param_1 + 0xb4) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x15,0);
  }
  if ((undefined2 *)param_1[0x15] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x15] = 0;
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  local_38 = param_2[0x14];
  FString::FString(local_30,param_2 + 0x15);
  FSoftObjectPath::operator=(param_1 + 0x14,&local_38);
  param_1[0x17] = 0;
  FUN_1410ad2a0(param_1 + 0x17,param_2[0x17],*(undefined4 *)(param_2 + 0x18),0,0);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = 0;
  iVar1 = *(int *)(param_2 + 0x1c);
  _Src = (void *)param_2[0x1b];
  *(int *)(param_1 + 0x1c) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x1b,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[0x1b],_Src,(longlong)iVar1 << 4);
  }
  return param_1;
}



// FUNCTION 1410b3000 FUN_1410b3000 body=488 status=ok
// SIG undefined FUN_1410b3000(void)

undefined8 * FUN_1410b3000(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__144530678;
  FString::FString(param_1 + 1,param_2 + 8);
  FString::FString(param_1 + 3,param_2 + 0x18);
  FString::FString(param_1 + 5,param_2 + 0x28);
  FString::FString(param_1 + 7,param_2 + 0x38);
  FString::FString(param_1 + 9,param_2 + 0x48);
  FString::FString(param_1 + 0xb,param_2 + 0x58);
  FString::FString(param_1 + 0xd,param_2 + 0x68);
  FString::FString(param_1 + 0xf,param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  param_1[0x13] = *(undefined8 *)(param_2 + 0x98);
  lVar1 = *(longlong *)(param_2 + 0xa0);
  param_1[0x14] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0x15] = *(undefined8 *)(param_2 + 0xa8);
  lVar1 = *(longlong *)(param_2 + 0xb0);
  param_1[0x16] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0x17] = *(undefined8 *)(param_2 + 0xb8);
  lVar1 = *(longlong *)(param_2 + 0xc0);
  param_1[0x18] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0x19] = *(undefined8 *)(param_2 + 200);
  lVar1 = *(longlong *)(param_2 + 0xd0);
  param_1[0x1a] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0x1b] = *(undefined8 *)(param_2 + 0xd8);
  lVar1 = *(longlong *)(param_2 + 0xe0);
  param_1[0x1c] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0x1d] = *(undefined8 *)(param_2 + 0xe8);
  lVar1 = *(longlong *)(param_2 + 0xf0);
  param_1[0x1e] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0x1f] = *(undefined8 *)(param_2 + 0xf8);
  lVar1 = *(longlong *)(param_2 + 0x100);
  param_1[0x20] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0x21] = *(undefined8 *)(param_2 + 0x108);
  lVar1 = *(longlong *)(param_2 + 0x110);
  param_1[0x22] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1410b31f0 FUN_1410b31f0 body=126 status=ok
// SIG undefined FUN_1410b31f0(void)

undefined8 * FUN_1410b31f0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x4c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  if ((undefined2 *)param_1[8] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[8] = 0;
  }
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  return param_1;
}



// FUNCTION 1410b3270 FUN_1410b3270 body=362 status=ok
// SIG undefined FUN_1410b3270(void)

longlong FUN_1410b3270(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar5 = 4;
  lVar7 = param_1 - (longlong)param_2;
  lVar6 = 4;
  puVar3 = param_2;
  do {
    *(undefined8 *)(lVar7 + (longlong)puVar3) = 0;
    iVar1 = *(int *)(puVar3 + 1);
    lVar6 = lVar6 + -1;
    pvVar2 = (void *)*puVar3;
    *(int *)(lVar7 + 8 + (longlong)puVar3) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(lVar7 + 0xc + (longlong)puVar3) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                ((undefined8 *)(lVar7 + (longlong)puVar3),iVar1,0);
      _guard_xfg_dispatch_icall_nop(*(void **)(lVar7 + (longlong)puVar3),pvVar2,(longlong)iVar1 * 2)
      ;
    }
    puVar3 = puVar3 + 2;
  } while (lVar6 != 0);
  puVar3 = (undefined8 *)(param_1 + 0x40);
  puVar4 = param_2 + 8;
  do {
    *puVar3 = 0;
    lVar5 = lVar5 + -1;
    iVar1 = *(int *)(puVar4 + 1);
    pvVar2 = (void *)*puVar4;
    *(int *)((longlong)puVar4 + lVar7 + 8) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)puVar4 + lVar7 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
      _guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar2,(longlong)iVar1 * 2);
    }
    puVar3 = puVar3 + 2;
    puVar4 = puVar4 + 2;
  } while (lVar5 != 0);
  FString::FString(param_1 + 0x80,param_2 + 0x10);
  FString::FString(param_1 + 0x90,param_2 + 0x12);
  FString::FString(param_1 + 0xa0,param_2 + 0x14);
  FString::FString(param_1 + 0xb0,param_2 + 0x16);
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0x18);
  return param_1;
}



// FUNCTION 1410b33e0 FUN_1410b33e0 body=224 status=ok
// SIG undefined FUN_1410b33e0(void)

longlong FUN_1410b33e0(longlong param_1,longlong param_2)

{
  FString::FString();
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_1 + 0x10,param_2 + 0x10);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_1 + 0x38,param_2 + 0x38);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_1 + 0x60,param_2 + 0x60);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_1 + 0x88,param_2 + 0x88);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_1 + 0xb0,param_2 + 0xb0);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_1 + 0xd8,param_2 + 0xd8);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_1 + 0x100,param_2 + 0x100);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_1 + 0x128,param_2 + 0x128);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_1 + 0x150,param_2 + 0x150);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_2 + 0x17c);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  return param_1;
}



// FUNCTION 1410b34c0 FUN_1410b34c0 body=301 status=ok
// SIG undefined FUN_1410b34c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1410b34c0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FText::FText();
  FText::FText(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x54)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x48,0);
  }
  if (*(undefined2 **)(param_1 + 0x48) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x48) = 0;
  }
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((*(int *)(param_1 + 0x54) < 0) && (*(int *)(param_1 + 0x54) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x48,0);
  }
  if (*(undefined2 **)(param_1 + 0x48) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x48) = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined2 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  uVar1 = uRam0000000146874adc;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(uint *)(param_1 + 0xac) = uVar1;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  uVar1 = uRam0000000146874ad4 & uRam0000000146874ae4;
  uVar2 = uRam0000000146874ad8 & uRam0000000146874ae8;
  uVar3 = uRam0000000146874adc & uRam0000000146874aec;
  *(uint *)(param_1 + 0xc0) = _DAT_146874ad0 & _DAT_146874ae0;
  *(uint *)(param_1 + 0xc4) = uVar1;
  *(uint *)(param_1 + 200) = uVar2;
  *(uint *)(param_1 + 0xcc) = uVar3;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  FUN_142741540(param_1 + 0xe0);
  return param_1;
}



// FUNCTION 1410b35f0 FUN_1410b35f0 body=1896 status=ok
// SIG undefined FUN_1410b35f0(void)

undefined8 * FUN_1410b35f0(undefined8 *param_1)

{
  undefined8 local_res8;
  
  FUN_140e9a810();
  *(undefined1 *)(param_1 + 0xd3) = 0;
  local_res8 = 0;
  *param_1 = &PTR_FUN_1446a3b68;
  param_1[0x9b] = &PTR_LAB_1446a40d0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6a4) = 0;
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x6c4)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xd7,0);
  }
  if ((undefined2 *)param_1[0xd7] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xd7] = 0;
  }
  *(undefined8 *)((longlong)param_1 + 0x6a4) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0xffffffff;
  param_1[0xd6] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if ((*(int *)((longlong)param_1 + 0x6c4) < 0) && (*(int *)((longlong)param_1 + 0x6c4) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xd7,0);
  }
  if ((undefined2 *)param_1[0xd7] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xd7] = 0;
  }
  *(undefined4 *)(param_1 + 0xd5) = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6cc) = 0;
  param_1[0xdb] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0xdd) = 0;
  if ((*(int *)((longlong)param_1 + 0x6ec) < 0) && (*(int *)((longlong)param_1 + 0x6ec) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xdc,0);
  }
  if ((undefined2 *)param_1[0xdc] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xdc] = 0;
  }
  *(undefined4 *)(param_1 + 0xda) = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  *(undefined4 *)(param_1 + 0xde) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6f4) = 0;
  param_1[0xe0] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0xe2) = 0;
  if ((*(int *)((longlong)param_1 + 0x714) < 0) && (*(int *)((longlong)param_1 + 0x714) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xe1,0);
  }
  if ((undefined2 *)param_1[0xe1] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xe1] = 0;
  }
  *(undefined4 *)(param_1 + 0xdf) = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  *(undefined4 *)(param_1 + 0xe3) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x71c) = 0;
  param_1[0xe5] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0xe7) = 0;
  if ((*(int *)((longlong)param_1 + 0x73c) < 0) && (*(int *)((longlong)param_1 + 0x73c) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xe6,0);
  }
  if ((undefined2 *)param_1[0xe6] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xe6] = 0;
  }
  *(undefined4 *)(param_1 + 0xe4) = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x744) = 0;
  param_1[0xea] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  if ((*(int *)((longlong)param_1 + 0x764) < 0) && (*(int *)((longlong)param_1 + 0x764) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xeb,0);
  }
  if ((undefined2 *)param_1[0xeb] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xeb] = 0;
  }
  *(undefined4 *)(param_1 + 0xe9) = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  *(undefined4 *)(param_1 + 0xed) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x76c) = 0;
  param_1[0xef] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0xf1) = 0;
  if ((*(int *)((longlong)param_1 + 0x78c) < 0) && (*(int *)((longlong)param_1 + 0x78c) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xf0,0);
  }
  if ((undefined2 *)param_1[0xf0] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xf0] = 0;
  }
  *(undefined4 *)(param_1 + 0xee) = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  *(undefined4 *)(param_1 + 0xf2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x794) = 0;
  param_1[0xf4] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0xf6) = 0;
  if ((*(int *)((longlong)param_1 + 0x7b4) < 0) && (*(int *)((longlong)param_1 + 0x7b4) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xf5,0);
  }
  if ((undefined2 *)param_1[0xf5] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xf5] = 0;
  }
  *(undefined4 *)(param_1 + 0xf3) = 0;
  *(undefined4 *)(param_1 + 0xf7) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x7bc) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x7c4) = 0;
  *(undefined1 *)(param_1 + 0xf9) = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  *(undefined1 *)(param_1 + 0x100) = 0;
  param_1[0x101] = 0;
  *(undefined1 *)(param_1 + 0x103) = 1;
  *(undefined4 *)((longlong)param_1 + 0x81c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x104) = 0;
  FUN_1411c8bf0(param_1 + 0x106);
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  param_1[0x17b] = 0;
  param_1[0x17c] = 0;
  *(undefined4 *)(param_1 + 0x17d) = 0x15;
  *(undefined4 *)((longlong)param_1 + 0xbec) = 0xf;
  *(undefined1 *)(param_1 + 0x17e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbf4) = 0x3a83126f;
  param_1[0x17f] = 0;
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  *(undefined4 *)(param_1 + 0x182) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc14) = 0;
  param_1[0x183] = 0;
  param_1[0x184] = 0;
  param_1[0x185] = 0;
  param_1[0x186] = 0;
  param_1[0x187] = 0;
  param_1[0x188] = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x189) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc4a) = 0;
  FUN_140ac6910(param_1 + 0x18a);
  FUN_140ac6910(param_1 + 0x1bb);
  FText::FText(param_1 + 0x1ec);
  *(undefined2 *)(param_1 + 0x1ef) = 0;
  param_1[0x1f0] = 0;
  param_1[0x1f1] = 0;
  param_1[0x1f2] = 0;
  param_1[499] = 0;
  param_1[500] = 0;
  param_1[0x1f5] = 0;
  param_1[0x1f6] = 0;
  param_1[0x1f7] = 0;
  param_1[0x1f8] = 0;
  param_1[0x1f9] = 0;
  param_1[0x1fa] = 0;
  param_1[0x1fb] = 0;
  param_1[0x1fc] = 0;
  param_1[0x1fd] = 0;
  param_1[0x1fe] = 0;
  param_1[0x1ff] = 0;
  param_1[0x200] = 0;
  param_1[0x201] = 0;
  param_1[0x202] = 0;
  param_1[0x203] = 0;
  param_1[0x204] = 0;
  param_1[0x205] = 0;
  *(undefined1 *)(param_1 + 0x206) = 0;
  param_1[0x207] = 0;
  param_1[0x208] = 0;
  param_1[0x209] = 0;
  param_1[0x20a] = 0;
  param_1[0x20b] = 0;
  param_1[0x20c] = 0;
  param_1[0x20d] = 0;
  param_1[0x20e] = 0;
  param_1[0x20f] = 0;
  param_1[0x210] = 0;
  param_1[0x211] = 0;
  param_1[0x212] = 0;
  param_1[0x213] = 0;
  param_1[0x214] = 0;
  param_1[0x215] = 0;
  param_1[0x216] = 0;
  param_1[0x21c] = 0;
  param_1[0x21d] = 0;
  param_1[0x21e] = 0;
  param_1[0x21f] = 0;
  param_1[0x220] = 0;
  param_1[0x221] = 0;
  param_1[0x222] = 0;
  param_1[0x223] = 0;
  param_1[0x224] = 0;
  param_1[0x225] = 0;
  param_1[0x226] = 0;
  *(undefined1 *)(param_1 + 0x227) = 0;
  FText::FText(param_1 + 0x228);
  FText::FText(param_1 + 0x22b);
  param_1[0x22e] = 0;
  FUN_1410b31f0(param_1 + 0x22f);
  FUN_1410b31f0(param_1 + 0x23b);
  *(undefined1 *)(param_1 + 0x247) = 0;
  param_1[0x248] = 0;
  param_1[0x249] = 0;
  *(undefined4 *)(param_1 + 0x24a) = 0;
  param_1[0x24b] = 0;
  *(undefined4 *)(param_1 + 0x24c) = 0;
  param_1[0x24d] = 0;
  *(undefined4 *)(param_1 + 0x24e) = 0;
  param_1[0x24f] = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1284) = 0;
  *(undefined1 *)((longlong)param_1 + 0x128a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128c) = 0;
  *(undefined4 *)(param_1 + 0x254) = DAT_1464aa810;
  *(undefined4 *)((longlong)param_1 + 0x12a4) = DAT_1464aa814;
  *(undefined4 *)(param_1 + 0x255) = DAT_1464aa818;
  *(undefined4 *)((longlong)param_1 + 0x12ac) = DAT_1464aa81c;
  *(undefined4 *)(param_1 + 0x256) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)((longlong)param_1 + 0x12b4) = DAT_1468b5d88._4_4_;
  *(undefined2 *)(param_1 + 599) = 1;
  *(undefined1 *)((longlong)param_1 + 0x12ba) = 0;
  FName::FName(&local_res8,L"CatchARide",1);
  param_1[0x178] = local_res8;
  FName::FName(&local_res8,L"CatchARide",1);
  param_1[0x179] = local_res8;
  FName::FName(&local_res8,L"CatchARide_DeployVehicle",1);
  param_1[0x17a] = local_res8;
  *(undefined1 *)(param_1 + 0x106) = 1;
  return param_1;
}



// FUNCTION 1410b3d60 FUN_1410b3d60 body=103 status=ok
// SIG undefined FUN_1410b3d60(void)

undefined8 * FUN_1410b3d60(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_140e9aa30(param_1,uVar1);
  *param_1 = &PTR_FUN_144646880;
  param_1[0x9b] = &PTR_LAB_144646df0;
  FWeakObjectPtr::operator=(param_1 + 0xd0,0);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x100000;
  *param_1 = &PTR_FUN_1446a4968;
  param_1[0x9b] = &PTR_LAB_1446a4f00;
  return param_1;
}



// FUNCTION 1410b3dd0 FUN_1410b3dd0 body=47 status=ok
// SIG undefined FUN_1410b3dd0(void)

undefined8 * FUN_1410b3dd0(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR_FUN_1446a46e0;
  param_1[7] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 1410b3e00 FUN_1410b3e00 body=152 status=ok
// SIG undefined FUN_1410b3e00(void)

void FUN_1410b3e00(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0xb8;
    do {
      if (*(longlong *)(lVar1 + 0x20) != 0) {
        FMemory::Free();
      }
      FUN_1410b3f00(lVar1);
      if (*(longlong *)(lVar1 + -0x10) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar1 + -0x38) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar1 + -0x60) != 0) {
        FMemory::Free();
      }
      lVar1 = lVar1 + 0xf0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1410b3ea0 FUN_1410b3ea0 body=95 status=ok
// SIG undefined FUN_1410b3ea0(void)

void FUN_1410b3ea0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x58);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1410b3f00 FUN_1410b3f00 body=137 status=ok
// SIG undefined FUN_1410b3f00(void)

void FUN_1410b3f00(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x48);
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-2] != 0) {
        FMemory::Free();
      }
      if (plVar2[-6] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xd;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1410b3f90 FUN_1410b3f90 body=251 status=ok
// SIG undefined FUN_1410b3f90(void)

void FUN_1410b3f90(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (plVar1[0x2d] != 0) {
        FMemory::Free();
      }
      if (plVar1[0x24] != 0) {
        FMemory::Free();
      }
      if (plVar1[0x22] != 0) {
        FMemory::Free();
      }
      if (plVar1[0x20] != 0) {
        FMemory::Free();
      }
      if (plVar1[0x1d] != 0) {
        FMemory::Free();
      }
      if (plVar1[0x15] != 0) {
        FMemory::Free();
      }
      if (plVar1[0xc] != 0) {
        FMemory::Free();
      }
      if (plVar1[10] != 0) {
        FMemory::Free();
      }
      if (plVar1[8] != 0) {
        FMemory::Free();
      }
      if (plVar1[5] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0x33;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 1410b4090 FUN_1410b4090 body=173 status=ok
// SIG undefined FUN_1410b4090(void)

void FUN_1410b4090(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 8);
    do {
      plVar4 = (longlong *)plVar7[3];
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
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 5;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1410b4140 FUN_1410b4140 body=327 status=ok
// SIG undefined FUN_1410b4140(void)

void FUN_1410b4140(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  lVar5 = *param_1;
  iVar7 = (int)param_1[1];
  if (iVar7 != 0) {
    plVar6 = (longlong *)(lVar5 + 0xb0);
    do {
      if (plVar6[2] != 0) {
        FMemory::Free();
      }
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      if (plVar6[-2] != 0) {
        FMemory::Free();
      }
      if (plVar6[-4] != 0) {
        FMemory::Free();
      }
      if (plVar6[-6] != 0) {
        FMemory::Free();
      }
      if (plVar6[-8] != 0) {
        FMemory::Free();
      }
      if (plVar6[-10] != 0) {
        FMemory::Free();
      }
      if (plVar6[-0xc] != 0) {
        FMemory::Free();
      }
      if (plVar6[-0xe] != 0) {
        FMemory::Free();
      }
      if (plVar6[-0x10] != 0) {
        FMemory::Free();
      }
      if (plVar6[-0x12] != 0) {
        FMemory::Free();
      }
      plVar4 = (longlong *)plVar6[-0x15];
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
      plVar6 = plVar6 + 0x1d;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1410b4290 FUN_1410b4290 body=156 status=ok
// SIG undefined FUN_1410b4290(void)

void FUN_1410b4290(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x28);
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
  plVar4 = *(longlong **)(param_1 + 0x10);
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



// FUNCTION 1410b4330 FUN_1410b4330 body=249 status=ok
// SIG undefined FUN_1410b4330(void)

void FUN_1410b4330(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 8);
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



// FUNCTION 1410b4430 FUN_1410b4430 body=191 status=ok
// SIG undefined FUN_1410b4430(void)

void FUN_1410b4430(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)(param_1 + 0x80);
  if (*plVar4 != 0) {
    FMemory::Free();
  }
  lVar2 = 4;
  lVar3 = 4;
  do {
    plVar1 = plVar4 + -2;
    plVar4 = plVar4 + -2;
    lVar3 = lVar3 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar3 != 0);
  param_1 = param_1 + 0x40;
  do {
    plVar4 = (longlong *)(param_1 + -0x10);
    param_1 = param_1 + -0x10;
    lVar2 = lVar2 + -1;
    if (*plVar4 != 0) {
      FMemory::Free();
    }
  } while (lVar2 != 0);
  return;
}



// FUNCTION 1410b44f0 FUN_1410b44f0 body=211 status=ok
// SIG undefined FUN_1410b44f0(void)

void FUN_1410b44f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x70);
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
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x28);
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
  plVar4 = *(longlong **)(param_1 + 0x10);
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



// FUNCTION 1410b45d0 FUN_1410b45d0 body=225 status=ok
// SIG undefined FUN_1410b45d0(void)

void FUN_1410b45d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6b8) != 0) {
    FMemory::Free();
  }
  FUN_1410b3ea0(param_1 + 0x80);
  FUN_1410b3e00(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x20);
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
  plVar4 = *(longlong **)(param_1 + 8);
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



// FUNCTION 1410b46c0 FUN_1410b46c0 body=142 status=ok
// SIG undefined FUN_1410b46c0(void)

void FUN_1410b46c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x28);
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
  plVar4 = *(longlong **)(param_1 + 8);
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



// FUNCTION 1410b4750 FUN_1410b4750 body=588 status=ok
// SIG undefined FUN_1410b4750(void)

void FUN_1410b4750(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1268);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1258);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1248);
  if (*(longlong *)(param_1 + 0x1218) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x11e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x11b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1180) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x1160);
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
  plVar4 = *(longlong **)(param_1 + 0x1148);
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
  if (*(longlong *)(param_1 + 0x1060) != 0) {
    FMemory::Free();
  }
  FUN_1410b4090(param_1 + 0x1050);
  FUN_1410b4330(param_1 + 0xf60);
  FUN_140ac7ce0(param_1 + 0xdd8);
  FUN_140ac7ce0(param_1 + 0xc50);
  plVar4 = *(longlong **)(param_1 + 0xc20);
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
  if (*(longlong *)(param_1 + 0xc00) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xbd8) != 0) {
    FMemory::Free();
  }
  FUN_140fe6570(param_1 + 0x830);
  FUN_1410b3f90(param_1 + 0x7f0);
  if (*(longlong *)(param_1 + 0x7e0) != 0) {
    FMemory::Free();
  }
  FUN_1410b4140(param_1 + 2000);
  if (*(longlong *)(param_1 + 0x7a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x780) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x758) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x730) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x708) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6b8) != 0) {
    FMemory::Free();
  }
  FUN_140e9c5f0(param_1);
  return;
}



// FUNCTION 1410b49a0 FUN_1410b49a0 body=693 status=ok
// SIG undefined FUN_1410b49a0(void)

longlong FUN_1410b49a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  
  FText::operator=();
  FText::operator=(param_1 + 0x18,param_2 + 0x18);
  plVar1 = (longlong *)(param_1 + 0x30);
  if (plVar1 != (longlong *)(param_2 + 0x30)) {
    iVar8 = *(int *)(param_1 + 0x38);
    if (iVar8 != 0) {
      plVar9 = (longlong *)(*plVar1 + 8);
      do {
        plVar5 = (longlong *)*plVar9;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar6 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar3 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar9 = plVar9 + 6;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar8 = *(int *)(param_2 + 0x38);
    lVar6 = *(longlong *)(param_2 + 0x30);
    *(int *)(param_1 + 0x38) = iVar8;
    if ((iVar8 == 0) && (*(int *)(param_1 + 0x3c) == 0)) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    else {
      TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(plVar1,iVar8);
      lVar10 = *plVar1;
      if (iVar8 != 0) {
        puVar7 = (undefined8 *)(lVar6 + 0x20);
        do {
          FText::FText(lVar10,puVar7 + -4);
          *(undefined8 *)(lVar10 + 0x18) = puVar7[-1];
          *(undefined8 *)(lVar10 + 0x20) = *puVar7;
          *(undefined1 *)(lVar10 + 0x28) = *(undefined1 *)(puVar7 + 1);
          *(undefined1 *)(lVar10 + 0x29) = *(undefined1 *)((longlong)puVar7 + 9);
          lVar10 = lVar10 + 0x30;
          iVar8 = iVar8 + -1;
          puVar7 = puVar7 + 6;
        } while (iVar8 != 0);
      }
    }
  }
  plVar1 = (longlong *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  if ((longlong *)(param_2 + 0x50) != plVar1) {
    if ((*(int *)(param_2 + 0x58) == 0) ||
       (plVar9 = *(longlong **)(param_2 + 0x50), plVar9 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x58) != 0) &&
         (plVar9 = (longlong *)*plVar1, plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x28))(plVar9,0);
        if (*plVar1 != 0) {
          lVar6 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar6;
        }
        *(undefined4 *)(param_1 + 0x58) = 0;
      }
    }
    else {
      (**(code **)(*plVar9 + 0x30))(plVar9,plVar1);
    }
  }
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  *(undefined1 *)(param_1 + 0x61) = *(undefined1 *)(param_2 + 0x61);
  *(undefined1 *)(param_1 + 0x62) = *(undefined1 *)(param_2 + 0x62);
  FText::operator=(param_1 + 0x68,param_2 + 0x68);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  *(undefined1 *)(param_1 + 0x81) = *(undefined1 *)(param_2 + 0x81);
  *(undefined1 *)(param_1 + 0x82) = *(undefined1 *)(param_2 + 0x82);
  *(undefined1 *)(param_1 + 0x83) = *(undefined1 *)(param_2 + 0x83);
  *(undefined1 *)(param_1 + 0x84) = *(undefined1 *)(param_2 + 0x84);
  *(undefined1 *)(param_1 + 0x85) = *(undefined1 *)(param_2 + 0x85);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined1 *)(param_1 + 0x94) = *(undefined1 *)(param_2 + 0x94);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined1 *)(param_1 + 0xa0) = *(undefined1 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  FString::operator=(param_1 + 0xb8,param_2 + 0xb8);
  FString::operator=(param_1 + 200,param_2 + 200);
  FString::operator=(param_1 + 0xd8,param_2 + 0xd8);
  *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(param_2 + 0xe8);
  return param_1;
}



// FUNCTION 1410b4c60 FUN_1410b4c60 body=3069 status=ok
// SIG undefined FUN_1410b4c60(void)

/* WARNING: Removing unreachable block (ram,0x0001410b5180) */
/* WARNING: Removing unreachable block (ram,0x0001410b5189) */

void FUN_1410b4c60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_148 [20];
  longlong local_a8 [2];
  longlong local_98 [2];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  
  FString::operator=();
  lVar4 = FWeakObjectPtr::Get(param_2 + 0x10);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_2 + 0x18)) && (*(longlong *)(param_2 + 0x20) != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(param_2 + 0x10,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_2 + 0x18) = DAT_1464b56f4;
      }
      lVar4 = FWeakObjectPtr::Get(param_2 + 0x10);
      if (lVar4 != 0) goto LAB_1410b4d10;
    }
LAB_1410b4d62:
    local_148[1] = 0;
    local_148[0] = 0;
    plVar6 = local_148;
    bVar3 = true;
    bVar2 = false;
  }
  else {
LAB_1410b4d10:
    lVar5 = UCheckBox::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1410b4d62;
    bVar3 = false;
    bVar2 = true;
    plVar6 = (longlong *)FSoftObjectPath::ToString(param_2 + 0x20,local_148 + 0x12);
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  if (plVar1 != plVar6) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar6;
    *plVar6 = 0;
    *(int *)(param_1 + 0x18) = (int)plVar6[1];
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((longlong)plVar6 + 0xc);
    plVar6[1] = 0;
  }
  if ((bVar3) && (local_148[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar2) && (local_148[0x12] != 0)) {
    FMemory::Free();
  }
  lVar4 = FWeakObjectPtr::Get(param_2 + 0x38);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_2 + 0x40)) && (*(longlong *)(param_2 + 0x48) != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(param_2 + 0x38,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_2 + 0x40) = DAT_1464b56f4;
      }
      lVar4 = FWeakObjectPtr::Get(param_2 + 0x38);
      if (lVar4 != 0) goto LAB_1410b4e51;
    }
LAB_1410b4ea3:
    local_148[3] = 0;
    local_148[2] = 0;
    plVar6 = local_148 + 2;
    bVar3 = false;
    bVar2 = true;
  }
  else {
LAB_1410b4e51:
    lVar5 = AArchVisCharacter::StaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1410b4ea3;
    plVar6 = (longlong *)FSoftObjectPath::ToString(param_2 + 0x48,local_a8);
    bVar3 = true;
    bVar2 = false;
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  if (plVar1 != plVar6) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar6;
    *plVar6 = 0;
    *(int *)(param_1 + 0x28) = (int)plVar6[1];
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)((longlong)plVar6 + 0xc);
    plVar6[1] = 0;
  }
  if ((bVar2) && (local_148[2] != 0)) {
    FMemory::Free();
  }
  if ((bVar3) && (local_a8[0] != 0)) {
    FMemory::Free();
  }
  lVar4 = FWeakObjectPtr::Get(param_2 + 0x60);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_2 + 0x68)) && (*(longlong *)(param_2 + 0x70) != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(param_2 + 0x60,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_2 + 0x68) = DAT_1464b56f4;
      }
      lVar4 = FWeakObjectPtr::Get(param_2 + 0x60);
      if (lVar4 != 0) goto LAB_1410b4f94;
    }
LAB_1410b4fe6:
    local_148[5] = 0;
    local_148[4] = 0;
    plVar6 = local_148 + 4;
    bVar3 = false;
    bVar2 = true;
  }
  else {
LAB_1410b4f94:
    lVar5 = AArchVisCharacter::StaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1410b4fe6;
    plVar6 = (longlong *)FSoftObjectPath::ToString(param_2 + 0x70,local_98);
    bVar3 = true;
    bVar2 = false;
  }
  plVar1 = (longlong *)(param_1 + 0x30);
  if (plVar1 != plVar6) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar6;
    *plVar6 = 0;
    *(int *)(param_1 + 0x38) = (int)plVar6[1];
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)((longlong)plVar6 + 0xc);
    plVar6[1] = 0;
  }
  if ((bVar2) && (local_148[4] != 0)) {
    FMemory::Free();
  }
  if ((bVar3) && (local_98[0] != 0)) {
    FMemory::Free();
  }
  lVar4 = param_2 + 0x88;
  lVar5 = FWeakObjectPtr::Get(lVar4);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_2 + 0x90)) && (*(longlong *)(param_2 + 0x98) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_2 + 0x90) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar4);
      if (lVar5 != 0) goto LAB_1410b50d9;
    }
LAB_1410b512e:
    local_148[7] = 0;
    local_148[6] = 0;
    plVar6 = local_148 + 6;
    bVar2 = false;
  }
  else {
LAB_1410b50d9:
    lVar4 = AArchVisCharacter::StaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1410b512e;
    plVar6 = (longlong *)FSoftObjectPath::ToString(param_2 + 0x98,local_88);
    bVar2 = true;
  }
  plVar1 = (longlong *)(param_1 + 0x40);
  if (plVar1 != plVar6) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar6;
    *plVar6 = 0;
    *(int *)(param_1 + 0x48) = (int)plVar6[1];
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)((longlong)plVar6 + 0xc);
    plVar6[1] = 0;
  }
  if ((bVar2) && (local_88[0] != 0)) {
    FMemory::Free();
  }
  lVar4 = param_2 + 0xb0;
  lVar5 = FWeakObjectPtr::Get(lVar4);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_2 + 0xb8)) && (*(longlong *)(param_2 + 0xc0) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_2 + 0xb8) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar4);
      if (lVar5 != 0) goto LAB_1410b5221;
    }
LAB_1410b5277:
    local_148[9] = 0;
    local_148[8] = 0;
    plVar6 = local_148 + 8;
    bVar3 = false;
    bVar2 = true;
  }
  else {
LAB_1410b5221:
    lVar4 = AArchVisCharacter::StaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1410b5277;
    plVar6 = (longlong *)FSoftObjectPath::ToString(param_2 + 0xc0,local_78);
    bVar3 = true;
    bVar2 = false;
  }
  plVar1 = (longlong *)(param_1 + 0x50);
  if (plVar1 != plVar6) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar6;
    *plVar6 = 0;
    *(int *)(param_1 + 0x58) = (int)plVar6[1];
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)((longlong)plVar6 + 0xc);
    plVar6[1] = 0;
  }
  if ((bVar2) && (local_148[8] != 0)) {
    FMemory::Free();
  }
  if ((bVar3) && (local_78[0] != 0)) {
    FMemory::Free();
  }
  lVar4 = param_2 + 0xd8;
  lVar5 = FWeakObjectPtr::Get(lVar4);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_2 + 0xe0)) && (*(longlong *)(param_2 + 0xe8) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_2 + 0xe0) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar4);
      if (lVar5 != 0) goto LAB_1410b5372;
    }
LAB_1410b53c7:
    local_148[0xb] = 0;
    local_148[10] = 0;
    plVar6 = local_148 + 10;
    bVar3 = false;
    bVar2 = true;
  }
  else {
LAB_1410b5372:
    lVar4 = AArchVisCharacter::StaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1410b53c7;
    plVar6 = (longlong *)FSoftObjectPath::ToString(param_2 + 0xe8,local_68);
    bVar3 = true;
    bVar2 = false;
  }
  plVar1 = (longlong *)(param_1 + 0x60);
  if (plVar1 != plVar6) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar6;
    *plVar6 = 0;
    *(int *)(param_1 + 0x68) = (int)plVar6[1];
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)((longlong)plVar6 + 0xc);
    plVar6[1] = 0;
  }
  if ((bVar2) && (local_148[10] != 0)) {
    FMemory::Free();
  }
  if ((bVar3) && (local_68[0] != 0)) {
    FMemory::Free();
  }
  lVar4 = param_2 + 0x100;
  lVar5 = FWeakObjectPtr::Get(lVar4);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_2 + 0x108)) && (*(longlong *)(param_2 + 0x110) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_2 + 0x108) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar4);
      if (lVar5 != 0) goto LAB_1410b54bd;
    }
LAB_1410b5511:
    local_148[0xd] = 0;
    local_148[0xc] = 0;
    plVar6 = local_148 + 0xc;
    bVar3 = false;
    bVar2 = true;
  }
  else {
LAB_1410b54bd:
    lVar4 = AArchVisCharacter::StaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1410b5511;
    plVar6 = (longlong *)FSoftObjectPath::ToString(param_2 + 0x110,local_58);
    bVar3 = true;
    bVar2 = false;
  }
  plVar1 = (longlong *)(param_1 + 0x70);
  if (plVar1 != plVar6) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar6;
    *plVar6 = 0;
    *(int *)(param_1 + 0x78) = (int)plVar6[1];
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)((longlong)plVar6 + 0xc);
    plVar6[1] = 0;
  }
  if ((bVar2) && (local_148[0xc] != 0)) {
    FMemory::Free();
  }
  if ((bVar3) && (local_58[0] != 0)) {
    FMemory::Free();
  }
  lVar4 = param_2 + 0x128;
  lVar5 = FWeakObjectPtr::Get(lVar4);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_2 + 0x130)) && (*(longlong *)(param_2 + 0x138) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_2 + 0x130) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar4);
      if (lVar5 != 0) goto LAB_1410b5602;
    }
LAB_1410b5656:
    local_148[0xf] = 0;
    local_148[0xe] = 0;
    plVar6 = local_148 + 0xe;
    bVar3 = false;
    bVar2 = true;
  }
  else {
LAB_1410b5602:
    lVar4 = AArchVisCharacter::StaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1410b5656;
    plVar6 = (longlong *)FSoftObjectPath::ToString(param_2 + 0x138,local_48);
    bVar3 = true;
    bVar2 = false;
  }
  plVar1 = (longlong *)(param_1 + 0x80);
  if (plVar1 != plVar6) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar6;
    *plVar6 = 0;
    *(int *)(param_1 + 0x88) = (int)plVar6[1];
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)((longlong)plVar6 + 0xc);
    plVar6[1] = 0;
  }
  if ((bVar2) && (local_148[0xe] != 0)) {
    FMemory::Free();
  }
  if ((bVar3) && (local_48[0] != 0)) {
    FMemory::Free();
  }
  lVar4 = param_2 + 0x150;
  lVar5 = FWeakObjectPtr::Get(lVar4);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_2 + 0x158)) && (*(longlong *)(param_2 + 0x160) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_2 + 0x158) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar4);
      if (lVar5 != 0) goto LAB_1410b574a;
    }
  }
  else {
LAB_1410b574a:
    lVar4 = AArchVisCharacter::StaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar6 = (longlong *)FSoftObjectPath::ToString(param_2 + 0x160,local_38);
      bVar3 = true;
      bVar2 = false;
      goto LAB_1410b57b2;
    }
  }
  local_148[0x11] = 0;
  local_148[0x10] = 0;
  plVar6 = local_148 + 0x10;
  bVar3 = false;
  bVar2 = true;
LAB_1410b57b2:
  plVar1 = (longlong *)(param_1 + 0x90);
  if (plVar1 != plVar6) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar6;
    *plVar6 = 0;
    *(int *)(param_1 + 0x98) = (int)plVar6[1];
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)((longlong)plVar6 + 0xc);
    plVar6[1] = 0;
  }
  if ((bVar2) && (local_148[0x10] != 0)) {
    FMemory::Free();
  }
  if ((bVar3) && (local_38[0] != 0)) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0x178);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0x17c);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0x180);
  return;
}



// FUNCTION 1410b5860 FUN_1410b5860 body=575 status=ok
// SIG undefined FUN_1410b5860(void)

longlong FUN_1410b5860(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 local_38;
  undefined1 local_30 [24];
  
  FText::operator=();
  FText::operator=(param_1 + 0x18,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  local_38 = *(undefined8 *)(param_2 + 0x40);
  FString::FString(local_30,param_2 + 0x48);
  FSoftObjectPath::operator=(param_1 + 0x40,&local_38);
  plVar1 = (longlong *)(param_2 + 0x58);
  plVar2 = (longlong *)(param_1 + 0x58);
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
    *(undefined8 *)(param_2 + 0x60) = 0;
  }
  plVar1 = (longlong *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  plVar2 = (longlong *)(param_1 + 0x70);
  *(undefined1 *)(param_1 + 0x69) = *(undefined1 *)(param_2 + 0x69);
  *(undefined1 *)(param_1 + 0x6a) = *(undefined1 *)(param_2 + 0x6a);
  if (plVar2 != plVar1) {
    iVar9 = *(int *)(param_1 + 0x78);
    lVar7 = *plVar2;
    if (iVar9 != 0) {
      lVar7 = lVar7 + 0xb8;
      do {
        if (*(longlong *)(lVar7 + 0x20) != 0) {
          FMemory::Free();
        }
        FUN_1410b3f00(lVar7);
        if (*(longlong *)(lVar7 + -0x10) != 0) {
          FMemory::Free();
        }
        if (*(longlong *)(lVar7 + -0x38) != 0) {
          FMemory::Free();
        }
        if (*(longlong *)(lVar7 + -0x60) != 0) {
          FMemory::Free();
        }
        lVar7 = lVar7 + 0xf0;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      lVar7 = *plVar2;
    }
    if (lVar7 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
    *(undefined8 *)(param_2 + 0x78) = 0;
  }
  plVar1 = (longlong *)(param_2 + 0x80);
  plVar2 = (longlong *)(param_1 + 0x80);
  if (plVar2 != plVar1) {
    iVar9 = *(int *)(param_1 + 0x88);
    lVar7 = *plVar2;
    if (iVar9 != 0) {
      plVar8 = (longlong *)(lVar7 + 0x58);
      do {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 0x10;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      lVar7 = *plVar2;
    }
    if (lVar7 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
    *(undefined8 *)(param_2 + 0x88) = 0;
  }
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  uVar6 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = uVar6;
  uVar3 = *(undefined4 *)(param_2 + 0xb4);
  uVar4 = *(undefined4 *)(param_2 + 0xb8);
  uVar5 = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  *(undefined4 *)(param_1 + 0xb8) = uVar4;
  *(undefined4 *)(param_1 + 0xbc) = uVar5;
  uVar3 = *(undefined4 *)(param_2 + 0xc4);
  uVar4 = *(undefined4 *)(param_2 + 200);
  uVar5 = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0xc4) = uVar3;
  *(undefined4 *)(param_1 + 200) = uVar4;
  *(undefined4 *)(param_1 + 0xcc) = uVar5;
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  FUN_140e6c260(param_1 + 0xe0,param_2 + 0xe0);
  return param_1;
}



// FUNCTION 1410b5aa0 FUN_1410b5aa0 body=867 status=ok
// SIG undefined FUN_1410b5aa0(void)

longlong FUN_1410b5aa0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 local_58;
  undefined1 local_50 [24];
  
  FText::operator=();
  FText::operator=(param_1 + 0x18,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  local_58 = *(undefined8 *)(param_2 + 0x40);
  FString::FString(local_50,param_2 + 0x48);
  FSoftObjectPath::operator=(param_1 + 0x40,&local_58);
  puVar13 = (undefined8 *)(param_1 + 0x58);
  if (puVar13 != (undefined8 *)(param_2 + 0x58)) {
    iVar10 = *(int *)(param_2 + 0x60);
    _Src = *(void **)(param_2 + 0x58);
    *(int *)(param_1 + 0x60) = iVar10;
    if ((iVar10 == 0) && (*(int *)(param_1 + 100) == 0)) {
      *(undefined4 *)(param_1 + 100) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar13,iVar10);
      _guard_xfg_dispatch_icall_nop((void *)*puVar13,_Src,(longlong)iVar10 << 4);
    }
  }
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  plVar1 = (longlong *)(param_1 + 0x70);
  *(undefined1 *)(param_1 + 0x69) = *(undefined1 *)(param_2 + 0x69);
  *(undefined1 *)(param_1 + 0x6a) = *(undefined1 *)(param_2 + 0x6a);
  if (plVar1 != (longlong *)(param_2 + 0x70)) {
    iVar10 = *(int *)(param_1 + 0x78);
    if (iVar10 != 0) {
      lVar7 = *plVar1 + 0xb8;
      do {
        if (*(longlong *)(lVar7 + 0x20) != 0) {
          FMemory::Free();
        }
        FUN_1410b3f00(lVar7);
        if (*(longlong *)(lVar7 + -0x10) != 0) {
          FMemory::Free();
        }
        if (*(longlong *)(lVar7 + -0x38) != 0) {
          FMemory::Free();
        }
        if (*(longlong *)(lVar7 + -0x60) != 0) {
          FMemory::Free();
        }
        lVar7 = lVar7 + 0xf0;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    iVar10 = *(int *)(param_2 + 0x78);
    lVar7 = *(longlong *)(param_2 + 0x70);
    *(int *)(param_1 + 0x78) = iVar10;
    if ((iVar10 == 0) && (*(int *)(param_1 + 0x7c) == 0)) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    else {
      TArray<FTextureInstanceView::FBounds4,FDefaultAllocator>::ResizeForCopy(plVar1,iVar10);
      lVar11 = *plVar1;
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        FUN_1410b2d50(lVar11,lVar7);
        lVar11 = lVar11 + 0xf0;
        lVar7 = lVar7 + 0xf0;
      }
    }
  }
  plVar1 = (longlong *)(param_1 + 0x80);
  if (plVar1 != (longlong *)(param_2 + 0x80)) {
    iVar10 = *(int *)(param_1 + 0x88);
    if (iVar10 != 0) {
      plVar8 = (longlong *)(*plVar1 + 0x58);
      do {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 0x10;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    iVar10 = *(int *)(param_2 + 0x88);
    lVar7 = *(longlong *)(param_2 + 0x80);
    *(int *)(param_1 + 0x88) = iVar10;
    if ((iVar10 == 0) && (*(int *)(param_1 + 0x8c) == 0)) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
    }
    else {
      TArray<FModuleDescriptor,FDefaultAllocator>::ResizeForCopy(plVar1,iVar10);
      puVar13 = (undefined8 *)*plVar1;
      if (iVar10 != 0) {
        puVar9 = (undefined4 *)(lVar7 + 0x20);
        puVar12 = puVar13 + 0xc;
        do {
          *puVar13 = *(undefined8 *)(puVar9 + -8);
          uVar6 = *(undefined8 *)(puVar9 + -2);
          puVar12[-10] = *(undefined8 *)(puVar9 + -4);
          puVar12[-9] = uVar6;
          uVar3 = puVar9[1];
          uVar4 = puVar9[2];
          uVar5 = puVar9[3];
          *(undefined4 *)(puVar12 + -8) = *puVar9;
          *(undefined4 *)((longlong)puVar12 + -0x3c) = uVar3;
          *(undefined4 *)(puVar12 + -7) = uVar4;
          *(undefined4 *)((longlong)puVar12 + -0x34) = uVar5;
          uVar3 = puVar9[5];
          uVar4 = puVar9[6];
          uVar5 = puVar9[7];
          *(undefined4 *)(puVar12 + -6) = puVar9[4];
          *(undefined4 *)((longlong)puVar12 + -0x2c) = uVar3;
          *(undefined4 *)(puVar12 + -5) = uVar4;
          *(undefined4 *)((longlong)puVar12 + -0x24) = uVar5;
          puVar12[-1] = 0;
          *puVar12 = 0;
          *(undefined4 *)(puVar12 + -4) = 0xffffffff;
          *(undefined4 *)((longlong)puVar12 + -0x1c) = 0;
          puVar12[-2] = 0;
          *(undefined4 *)puVar12 = 0;
          if (0x7fffffff < *(uint *)((longlong)puVar12 + 4)) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar12 + -1,0);
          }
          if ((undefined2 *)puVar12[-1] != (undefined2 *)0x0) {
            *(undefined2 *)puVar12[-1] = 0;
          }
          *(undefined4 *)(puVar12 + -3) = 0;
          *(undefined4 *)(puVar12 + -4) = puVar9[8];
          *(undefined4 *)((longlong)puVar12 + -0x1c) = puVar9[9];
          *(undefined4 *)(puVar12 + -3) = puVar9[10];
          local_58 = *(undefined8 *)(puVar9 + 0xc);
          FString::FString(local_50,puVar9 + 0xe);
          FSoftObjectPath::operator=(puVar12 + -2);
          puVar13 = puVar13 + 0x10;
          *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(puVar9 + 0x12);
          puVar2 = (undefined8 *)(puVar9 + 0x14);
          puVar9 = puVar9 + 0x20;
          puVar12[2] = *puVar2;
          puVar12 = puVar12 + 0x10;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  uVar6 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = uVar6;
  uVar3 = *(undefined4 *)(param_2 + 0xb4);
  uVar4 = *(undefined4 *)(param_2 + 0xb8);
  uVar5 = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  *(undefined4 *)(param_1 + 0xb8) = uVar4;
  *(undefined4 *)(param_1 + 0xbc) = uVar5;
  uVar3 = *(undefined4 *)(param_2 + 0xc4);
  uVar4 = *(undefined4 *)(param_2 + 200);
  uVar5 = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0xc4) = uVar3;
  *(undefined4 *)(param_1 + 200) = uVar4;
  *(undefined4 *)(param_1 + 0xcc) = uVar5;
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  FUN_140a296b0(param_1 + 0xe0,param_2 + 0xe0);
  return param_1;
}



// FUNCTION 1410b5e10 FUN_1410b5e10 body=119 status=ok
// SIG undefined FUN_1410b5e10(void)

longlong FUN_1410b5e10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (param_1 != param_2) {
    if ((*(uint *)(param_1 + 0x18) >> 6 & 1) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
                (*(longlong **)(param_1 + 0x10),param_1,*(undefined8 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    if ((*(uint *)(param_2 + 0x18) >> 6 & 1) != 0) {
      plVar1 = *(longlong **)(param_2 + 0x10);
      *(longlong **)(param_1 + 0x10) = plVar1;
      (**(code **)(*plVar1 + 8))(plVar1,param_1);
    }
  }
  return param_1;
}



// FUNCTION 1410b5e90 FUN_1410b5e90 body=1486 status=ok
// SIG undefined FUN_1410b5e90(void)

longlong FUN_1410b5e90(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  undefined8 local_38;
  longlong local_30 [3];
  undefined1 local_18 [16];
  
  FUN_140ac6910(param_2);
  FString::operator=(param_2,param_1);
  plVar1 = (longlong *)FString::FString(local_48,param_1 + 0x10);
  local_38 = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  local_58 = *plVar1;
  *plVar1 = 0;
  local_50 = (undefined4)plVar1[1];
  local_4c = *(undefined4 *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  FUN_1417978e0(&local_38,&local_58);
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  local_30[2] = local_38;
  *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x14) = 0;
  FString::FString(local_18,local_30);
  FSoftObjectPath::operator=(param_2 + 0x20,local_30 + 2);
  *(undefined4 *)(param_2 + 0x18) = 0;
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)FString::FString(local_48,param_1 + 0x20);
  local_38 = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  local_58 = *plVar1;
  *plVar1 = 0;
  local_50 = (undefined4)plVar1[1];
  local_4c = *(undefined4 *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  FUN_1417978e0(&local_38,&local_58);
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  local_30[2] = local_38;
  *(undefined4 *)(param_2 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  FString::FString(local_18,local_30);
  FSoftObjectPath::operator=(param_2 + 0x48,local_30 + 2);
  *(undefined4 *)(param_2 + 0x40) = 0;
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)FString::FString(local_48,param_1 + 0x30);
  local_38 = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  local_58 = *plVar1;
  *plVar1 = 0;
  local_50 = (undefined4)plVar1[1];
  local_4c = *(undefined4 *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  FUN_1417978e0(&local_38,&local_58);
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  local_30[2] = local_38;
  *(undefined4 *)(param_2 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_2 + 100) = 0;
  FString::FString(local_18,local_30);
  FSoftObjectPath::operator=(param_2 + 0x70,local_30 + 2);
  *(undefined4 *)(param_2 + 0x68) = 0;
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)FString::FString(local_48,param_1 + 0x40);
  local_38 = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  local_58 = *plVar1;
  *plVar1 = 0;
  local_50 = (undefined4)plVar1[1];
  local_4c = *(undefined4 *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  FUN_1417978e0(&local_38,&local_58);
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  local_30[2] = local_38;
  *(undefined4 *)(param_2 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x8c) = 0;
  FString::FString(local_18,local_30);
  FSoftObjectPath::operator=(param_2 + 0x98,local_30 + 2);
  *(undefined4 *)(param_2 + 0x90) = 0;
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)FString::FString(local_48,param_1 + 0x50);
  local_38 = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  local_58 = *plVar1;
  *plVar1 = 0;
  local_50 = (undefined4)plVar1[1];
  local_4c = *(undefined4 *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  FUN_1417978e0(&local_38,&local_58);
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  local_30[2] = local_38;
  *(undefined4 *)(param_2 + 0xb0) = 0xffffffff;
  *(undefined4 *)(param_2 + 0xb4) = 0;
  FString::FString(local_18,local_30);
  FSoftObjectPath::operator=(param_2 + 0xc0,local_30 + 2);
  *(undefined4 *)(param_2 + 0xb8) = 0;
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)FString::FString(local_48,param_1 + 0x60);
  local_38 = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  local_58 = *plVar1;
  *plVar1 = 0;
  local_50 = (undefined4)plVar1[1];
  local_4c = *(undefined4 *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  FUN_1417978e0(&local_38,&local_58);
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  local_30[2] = local_38;
  *(undefined4 *)(param_2 + 0xd8) = 0xffffffff;
  *(undefined4 *)(param_2 + 0xdc) = 0;
  FString::FString(local_18,local_30);
  FSoftObjectPath::operator=(param_2 + 0xe8,local_30 + 2);
  *(undefined4 *)(param_2 + 0xe0) = 0;
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)FString::FString(local_48,param_1 + 0x70);
  local_38 = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  local_58 = *plVar1;
  *plVar1 = 0;
  local_50 = (undefined4)plVar1[1];
  local_4c = *(undefined4 *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  FUN_1417978e0(&local_38,&local_58);
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  local_30[2] = local_38;
  *(undefined4 *)(param_2 + 0x100) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x104) = 0;
  FString::FString(local_18,local_30);
  FSoftObjectPath::operator=(param_2 + 0x110,local_30 + 2);
  *(undefined4 *)(param_2 + 0x108) = 0;
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)FString::FString(local_48,param_1 + 0x80);
  local_38 = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  local_58 = *plVar1;
  *plVar1 = 0;
  local_50 = (undefined4)plVar1[1];
  local_4c = *(undefined4 *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  FUN_1417978e0(&local_38,&local_58);
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  local_30[2] = local_38;
  *(undefined4 *)(param_2 + 0x128) = 0xffffffff;
  *(undefined4 *)(param_2 + 300) = 0;
  FString::FString(local_18,local_30);
  FSoftObjectPath::operator=(param_2 + 0x138,local_30 + 2);
  *(undefined4 *)(param_2 + 0x130) = 0;
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)FString::FString(local_48,param_1 + 0x90);
  local_38 = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  local_58 = *plVar1;
  *plVar1 = 0;
  local_50 = (undefined4)plVar1[1];
  local_4c = *(undefined4 *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  FUN_1417978e0(&local_38,&local_58);
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  local_30[2] = local_38;
  *(undefined4 *)(param_2 + 0x150) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x154) = 0;
  FString::FString(local_18,local_30);
  FSoftObjectPath::operator=(param_2 + 0x160,local_30 + 2);
  *(undefined4 *)(param_2 + 0x158) = 0;
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_2 + 0x178) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(param_2 + 0x17c) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(param_2 + 0x180) = *(undefined4 *)(param_1 + 0xa8);
  return param_2;
}



// FUNCTION 1410b6460 FUN_1410b6460 body=323 status=ok
// SIG undefined FUN_1410b6460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1410b6460(longlong *param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [80];
  code *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar1 = *param_1;
  uVar3 = 0;
  if (*(int *)(lVar1 + 0x60) != 0) {
    plVar5 = *(longlong **)(lVar1 + 0x50);
    if (*(longlong **)(lVar1 + 0x50) == (longlong *)0x0) {
      plVar5 = (longlong *)(lVar1 + 0x30);
    }
    if (plVar5 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar5 + 8))();
    }
  }
  uVar2 = (**(code **)(lVar1 + 0x20))(uVar3);
  lVar1 = *param_1;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  local_68[0] = FUN_1407c3030;
  lVar4 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8,local_68);
  FGenericPlatformMemory::MemswapGreaterThan8(lVar4,lVar1 + 0x20,0x50);
  if (*(int *)(lVar4 + 0x40) != 0) {
    plVar5 = *(longlong **)(lVar4 + 0x30);
    if (*(longlong **)(lVar4 + 0x30) == (longlong *)0x0) {
      plVar5 = (longlong *)(lVar4 + 0x10);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(lVar4 + 0x30) != 0) {
    FMemory::Free();
  }
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
  return uVar2;
}



// FUNCTION 1410b65b0 FUN_1410b65b0 body=172 status=ok
// SIG undefined FUN_1410b65b0(void)

void FUN_1410b65b0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[0x1a];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xd4);
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
    if (((*(uint *)(lVar4 + 8) & 0x30000000) == 0) && (*(longlong *)(*param_1 + 400) != 0)) {
      FUN_1410f0900(*(longlong *)(*param_1 + 400),param_1 + 1);
      return;
    }
  }
  return;
}



// FUNCTION 1410b6660 FUN_1410b6660 body=478 status=ok
// SIG undefined FUN_1410b6660(void)

void FUN_1410b6660(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_res18;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_res10 = (undefined4)param_1[2];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0x14);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar5 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar5 == '\0') {
    return;
  }
  lVar7 = FWeakObjectPtr::Get(&local_res10);
  iVar4 = *(int *)(lVar7 + 0xc);
  if (iVar4 < (int)DAT_1469e91c4) {
    uVar10 = iVar4 >> 0x1f & 0xffff;
    uVar6 = iVar4 + uVar10;
    lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
            (longlong)(int)((uVar6 & 0xffff) - uVar10) * 0x18;
  }
  else {
    lVar7 = 0;
  }
  if ((*(uint *)(lVar7 + 8) & 0x30000000) != 0) {
    return;
  }
  if (*(longlong **)(*param_1 + 0x728) == (longlong *)0x0) {
    return;
  }
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  auVar11._0_8_ = (double)(int)param_1[1] * 10000000.0 + 0.5;
  lVar7 = (longlong)auVar11._0_8_;
  if (0.0 <= auVar11._0_8_) {
    if ((lVar7 == -0x8000000000000000) || ((double)lVar7 == auVar11._0_8_)) goto LAB_1410b678b;
    auVar12._8_8_ = auVar11._0_8_;
    auVar12._0_8_ = auVar11._0_8_;
    uVar6 = movmskpd(0,auVar12);
    uVar8 = -(ulonglong)(uVar6 & 1);
  }
  else {
    if ((lVar7 == -0x8000000000000000) || ((double)lVar7 == auVar11._0_8_)) goto LAB_1410b678b;
    auVar11._8_8_ = auVar11._0_8_;
    uVar6 = movmskpd(0,auVar11);
    uVar8 = (ulonglong)(uVar6 & 1 ^ 1);
  }
  auVar11._0_8_ = (double)(longlong)(lVar7 + uVar8);
LAB_1410b678b:
  local_res18 = (longlong)auVar11._0_8_;
  lVar7 = **(longlong **)(*param_1 + 0x728);
  uVar9 = FUN_1415fcfc0(local_28,&local_res18,&local_38);
  (**(code **)(lVar7 + 0x2b0))(*(undefined8 *)(*param_1 + 0x728),uVar9,1,0);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  plVar1 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_30 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
    }
  }
  return;
}



// FUNCTION 1410b6840 FUN_1410b6840 body=738 status=ok
// SIG undefined FUN_1410b6840(void)

void FUN_1410b6840(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_a8 [6];
  longlong *plStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_50 [8];
  longlong *local_48;
  longlong local_40;
  undefined1 local_38 [16];
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar4 != '\0') {
    lVar6 = FWeakObjectPtr::Get(&local_res10);
    lVar9 = 0;
    iVar3 = *(int *)(lVar6 + 0xc);
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar11 = iVar3 >> 0x1f & 0xffff;
      uVar5 = iVar3 + uVar11;
      lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar11) * 0x18;
    }
    if ((*(uint *)(lVar9 + 8) & 0x30000000) == 0) {
      local_40 = param_1[2];
      local_a8[5] = 0;
      plStack_78 = (longlong *)0x0;
      local_a8[2] = 0;
      local_a8[3] = 0;
      local_a8[4] = 0;
      FString::FString(local_38,param_1 + 3);
      FSoftObjectPath::operator=(local_a8 + 2,&local_40);
      local_a8[0] = 0;
      local_a8[1] = 0x20;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
      FGenericPlatformString::Memcpy(local_a8[0],L"RequestAsyncLoad SingleDelegate",0x40);
      lVar9 = *param_1;
      local_60 = FUN_1410d1280;
      uStack_58 = 0;
      local_70 = 0;
      local_68 = 0;
      puVar7 = (undefined8 *)operator_new(0x30,&local_70);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(puVar7 + 1,lVar9);
        *(undefined4 *)(puVar7 + 2) = (undefined4)local_60;
        *(undefined4 *)((longlong)puVar7 + 0x14) = local_60._4_4_;
        *(undefined4 *)(puVar7 + 3) = uStack_58;
        *(undefined4 *)((longlong)puVar7 + 0x1c) = uStack_54;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[5] = uVar8;
        *puVar7 = &PTR_FUN_143f77bd0;
      }
      lVar9 = FUN_1422ca050();
      plVar10 = (longlong *)
                FStreamableManager::RequestAsyncLoad
                          (lVar9 + 0x178,local_50,param_1 + 2,&local_70,0,0,0,local_a8);
      if (local_a8 + 5 != plVar10) {
        local_a8[5] = *plVar10;
        *plVar10 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_78,plVar10 + 1);
      }
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_48 + 1;
        lVar9 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
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
      if (local_a8[0] != 0) {
        FMemory::Free();
      }
      lVar9 = *param_1;
      iVar3 = *(int *)(lVar9 + 0x1058);
      *(int *)(lVar9 + 0x1058) = iVar3 + 1;
      if (*(int *)(lVar9 + 0x105c) < iVar3 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(lVar9 + 0x1050,iVar3);
      }
      puVar7 = (undefined8 *)(*(longlong *)(lVar9 + 0x1050) + (longlong)iVar3 * 0x28);
      *puVar7 = local_a8[2];
      FString::FString(puVar7 + 1,local_a8 + 3);
      plVar10 = plStack_78;
      puVar7[3] = local_a8[5];
      puVar7[4] = plStack_78;
      if (plStack_78 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_78 + 1) = (int)plStack_78[1] + 1;
        UNLOCK();
        LOCK();
        plVar2 = plStack_78 + 1;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plStack_78)(plStack_78);
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
      if (local_a8[3] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1410b6b30 FUN_1410b6b30 body=902 status=ok
// SIG undefined FUN_1410b6b30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410b6b30(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined4 local_120;
  longlong local_118;
  undefined8 uStack_110;
  longlong *local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_c0;
  undefined1 local_ac;
  undefined1 local_98;
  undefined1 local_84;
  undefined1 local_70;
  undefined1 local_5c;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar10 = *param_1;
  if ((*(longlong *)(lVar10 + 0x6e8) != 0) || (lVar7 = FUN_140f9aee0(lVar10), lVar7 == 0))
  goto LAB_1410b6bd8;
  cVar5 = FUN_140bca8a0(lVar7);
  if (cVar5 == '\0') {
    lVar7 = *(longlong *)(lVar10 + 0x6e0);
    if (lVar7 == 0) goto LAB_1410b6bd8;
    lVar9 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1410b6bd8;
    uVar8 = *(undefined8 *)(lVar7 + 0x1140);
  }
  else {
    uVar8 = FUN_140bb8b20(lVar7);
  }
  *(undefined8 *)(lVar10 + 0x6e8) = uVar8;
LAB_1410b6bd8:
  if (((*(longlong *)(*param_1 + 0x6e8) != 0) && (*(longlong *)(*param_1 + 0x690) != 0)) &&
     (lVar10 = FUN_140f9aee0(), lVar10 != 0)) {
    iVar6 = FUN_142eb7a00(*(undefined8 *)(*param_1 + 0x690));
    if (((char)param_1[1] == '\0') &&
       (lVar7 = USkeletalMeshComponent::GetPostProcessInstance(*(undefined8 *)(*param_1 + 0x6e8)),
       lVar7 != 0)) {
      if (iVar6 != *(int *)(*param_1 + 0x6f4)) {
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
        if (*(longlong *)(DAT_146b33f38 + 0xd0) != 0) {
          *(undefined4 *)(*param_1 + 0x6f0) =
               *(undefined4 *)(*(longlong *)(DAT_146b33f38 + 0xd0) + 0x440);
          *(int *)(*param_1 + 0x6f4) = iVar6;
        }
      }
    }
    else {
      *(undefined4 *)(*param_1 + 0x6f0) = 0;
      *(undefined4 *)(*param_1 + 0x6f4) = 0xffffffff;
      FUN_1410e4520(*param_1,iVar6);
      if ((iVar6 < 0) || (*(int *)(lVar10 + 0xac0) <= iVar6)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_120 = 0;
        local_118 = 0;
        uStack_110 = 0;
        local_108 = (longlong *)0x0;
        local_128 = *(undefined8 *)(*(longlong *)(lVar10 + 0xab8) + (longlong)iVar6 * 8);
        local_100 = 1;
        lVar10 = (**(code **)(**(longlong **)(*param_1 + 0x6e8) + 0x148))();
        if (((lVar10 != 0) && ((*(byte *)(lVar10 + 0x830) & 4) == 0)) &&
           (lVar10 = FWeakObjectPtr::Get(*param_1 + 0x58c), lVar10 != 0)) {
          lVar7 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            local_120._0_2_ = CONCAT11(1,(undefined1)local_120);
            local_118 = lVar10;
          }
        }
        *(undefined1 *)(*(longlong *)(*param_1 + 0x6e8) + 0x4a8) = 3;
        FUN_140e53440(*(undefined8 *)(*param_1 + 0x6e8),&local_128);
        local_f8 = 0;
        local_f0 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_d8 = 0;
        local_c0 = 0;
        local_ac = 0;
        local_98 = 0;
        local_84 = 0;
        local_70 = 0;
        local_5c = 0;
        local_58 = 0;
        local_50 = 0;
        local_48 = 0;
        lStack_40 = 0;
        local_38 = 0;
        FUN_140e64bc0(*(undefined8 *)(*param_1 + 0x6e8),&local_f8);
        FUN_140e5ec10(*(undefined8 *)(*param_1 + 0x6e8));
        FUN_140e53f80(*(undefined8 *)(*param_1 + 0x6e8));
        FUN_140e59080(*(undefined8 *)(*param_1 + 0x6e8),4,0);
        if (lStack_40 != 0) {
          FMemory::Free();
        }
        if (local_58 != 0) {
          FMemory::Free();
        }
        plVar4 = local_108;
        local_5c = 0;
        local_70 = 0;
        local_84 = 0;
        local_98 = 0;
        local_ac = 0;
        local_c0 = 0;
        if (local_108 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_108 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_108)(local_108);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1410b6ec0 FUN_1410b6ec0 body=3199 status=ok
// SIG undefined FUN_1410b6ec0(void)

void FUN_1410b6ec0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  void *pvVar3;
  undefined2 uVar4;
  ulonglong uVar5;
  void *pvVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  undefined2 *puVar18;
  longlong lVar19;
  undefined2 *puVar20;
  int iVar21;
  undefined2 *puVar22;
  undefined2 local_res8;
  undefined1 local_res10 [8];
  undefined4 local_res18;
  undefined4 local_res1c;
  longlong local_238;
  undefined8 local_230;
  void *local_228;
  undefined8 local_220;
  void *local_218;
  int local_210;
  void *local_208;
  int local_200;
  void *local_1f8;
  int local_1f0;
  void *local_1e8;
  int local_1e0;
  void *local_1d8;
  int local_1d0;
  void *local_1c8;
  int local_1c0;
  void *local_1b8;
  int local_1b0;
  void *local_1a8;
  int local_1a0;
  void *local_198;
  int local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178 [2];
  longlong local_168 [2];
  longlong local_158 [2];
  longlong local_148 [2];
  longlong local_138 [2];
  longlong local_128 [2];
  longlong local_118 [2];
  longlong local_108 [2];
  longlong local_f8 [2];
  longlong local_e8 [2];
  longlong local_d8 [2];
  longlong local_c8 [2];
  longlong local_b8 [2];
  longlong local_a8 [2];
  longlong local_98 [2];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [2];
  undefined1 local_58 [8];
  longlong *local_50;
  
  local_res18 = (undefined4)param_1[1];
  local_res1c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res10);
  FUN_14172a400(local_res10);
  cVar7 = FWeakObjectPtr::IsValid(&local_res18);
  if (cVar7 != '\0') {
    lVar11 = FWeakObjectPtr::Get(&local_res18);
    lVar14 = 0;
    iVar16 = *(int *)(lVar11 + 0xc);
    lVar11 = lVar14;
    if (iVar16 < (int)DAT_1469e91c4) {
      uVar15 = iVar16 >> 0x1f & 0xffff;
      uVar8 = iVar16 + uVar15;
      lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
               (longlong)(int)((uVar8 & 0xffff) - uVar15) * 0x18;
    }
    if ((*(uint *)(lVar11 + 8) & 0x30000000) == 0) {
      lVar11 = *param_1;
      local_238 = 0;
      local_230 = 0;
      if (*(char *)(lVar11 + 0xbf0) != '\0') {
        local_228 = (void *)0x0;
        local_220 = 0x13;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,0);
        pvVar6 = local_228;
        FGenericPlatformString::Memcpy(local_228,L"Loadout (Preview)\n",0x26);
        uVar5 = local_230;
        iVar16 = 0;
        if (((int)local_220 != 0) && (iVar21 = (int)local_220 + -1, iVar21 != 0)) {
          iVar10 = (int)local_230;
          lVar17 = (longlong)(int)local_230;
          iVar9 = (uint)((int)local_230 == 0) + iVar21 + (int)local_230;
          local_230 = CONCAT44(local_230._4_4_,iVar9);
          if (local_230._4_4_ < iVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,uVar5 & 0xffffffff);
          }
          pvVar3 = (void *)(local_238 + (lVar17 - (ulonglong)(iVar10 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar3,pvVar6,(longlong)iVar21 * 2);
          *(undefined2 *)((longlong)iVar21 * 2 + (longlong)pvVar3) = 0;
        }
        if (pvVar6 != (void *)0x0) {
          FMemory::Free(pvVar6);
        }
        puVar12 = (undefined8 *)FUN_1410ac8d0(&local_res8,local_168,lVar11 + 0xde8);
        puVar22 = &DAT_143f3eda8;
        if (*(int *)(puVar12 + 1) == 0) {
          puVar18 = &DAT_143f3eda8;
        }
        else {
          puVar18 = (undefined2 *)*puVar12;
        }
        puVar12 = (undefined8 *)FUN_1410ac8d0(&local_res8,local_178,lVar11 + 0xc60);
        if (*(int *)(puVar12 + 1) == 0) {
          puVar20 = &DAT_143f3eda8;
        }
        else {
          puVar20 = (undefined2 *)*puVar12;
        }
        FString::PrintfImpl(&local_218,L"%s: %s (%s)\n",L"Body",puVar20,puVar18);
        pvVar6 = local_218;
        uVar5 = local_230;
        iVar21 = iVar16;
        if (local_210 != 0) {
          iVar21 = local_210 + -1;
        }
        if (iVar21 != 0) {
          iVar10 = (int)local_230;
          lVar17 = (longlong)(int)local_230;
          iVar9 = (uint)((int)local_230 == 0) + iVar21 + (int)local_230;
          local_230 = CONCAT44(local_230._4_4_,iVar9);
          if (local_230._4_4_ < iVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,uVar5 & 0xffffffff);
          }
          pvVar3 = (void *)(local_238 + (lVar17 - (ulonglong)(iVar10 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar3,pvVar6,(longlong)iVar21 * 2);
          *(undefined2 *)((longlong)iVar21 * 2 + (longlong)pvVar3) = 0;
        }
        if (local_218 != (void *)0x0) {
          FMemory::Free(local_218);
        }
        if (local_178[0] != 0) {
          FMemory::Free();
        }
        if (local_168[0] != 0) {
          FMemory::Free();
        }
        puVar12 = (undefined8 *)FUN_1410acb80(&local_res8,local_148,lVar11 + 0xe10);
        if (*(int *)(puVar12 + 1) == 0) {
          puVar18 = &DAT_143f3eda8;
        }
        else {
          puVar18 = (undefined2 *)*puVar12;
        }
        puVar12 = (undefined8 *)FUN_1410acb80(&local_res8,local_158,lVar11 + 0xc88);
        if (*(int *)(puVar12 + 1) == 0) {
          puVar20 = &DAT_143f3eda8;
        }
        else {
          puVar20 = (undefined2 *)*puVar12;
        }
        FString::PrintfImpl(&local_208,L"%s: %s (%s)\n",L"Wheel",puVar20,puVar18);
        pvVar6 = local_208;
        uVar5 = local_230;
        iVar21 = iVar16;
        if (local_200 != 0) {
          iVar21 = local_200 + -1;
        }
        if (iVar21 != 0) {
          iVar10 = (int)local_230;
          lVar17 = (longlong)(int)local_230;
          iVar9 = (uint)((int)local_230 == 0) + iVar21 + (int)local_230;
          local_230 = CONCAT44(local_230._4_4_,iVar9);
          if (local_230._4_4_ < iVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,uVar5 & 0xffffffff);
          }
          pvVar3 = (void *)(local_238 + (lVar17 - (ulonglong)(iVar10 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar3,pvVar6,(longlong)iVar21 * 2);
          *(undefined2 *)((longlong)iVar21 * 2 + (longlong)pvVar3) = 0;
        }
        if (local_208 != (void *)0x0) {
          FMemory::Free(local_208);
        }
        if (local_158[0] != 0) {
          FMemory::Free();
        }
        if (local_148[0] != 0) {
          FMemory::Free();
        }
        puVar12 = (undefined8 *)FUN_1410acb80(&local_res8,local_128,lVar11 + 0xe38);
        if (*(int *)(puVar12 + 1) == 0) {
          puVar18 = &DAT_143f3eda8;
        }
        else {
          puVar18 = (undefined2 *)*puVar12;
        }
        puVar12 = (undefined8 *)FUN_1410acb80(&local_res8,local_138,lVar11 + 0xcb0);
        if (*(int *)(puVar12 + 1) == 0) {
          puVar20 = &DAT_143f3eda8;
        }
        else {
          puVar20 = (undefined2 *)*puVar12;
        }
        FString::PrintfImpl(&local_1f8,L"%s: %s (%s)\n",L"Armor",puVar20,puVar18);
        pvVar6 = local_1f8;
        uVar5 = local_230;
        iVar21 = iVar16;
        if (local_1f0 != 0) {
          iVar21 = local_1f0 + -1;
        }
        if (iVar21 != 0) {
          iVar10 = (int)local_230;
          lVar17 = (longlong)(int)local_230;
          iVar9 = (uint)((int)local_230 == 0) + iVar21 + (int)local_230;
          local_230 = CONCAT44(local_230._4_4_,iVar9);
          if (local_230._4_4_ < iVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,uVar5 & 0xffffffff);
          }
          pvVar3 = (void *)(local_238 + (lVar17 - (ulonglong)(iVar10 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar3,pvVar6,(longlong)iVar21 * 2);
          *(undefined2 *)((longlong)iVar21 * 2 + (longlong)pvVar3) = 0;
        }
        if (local_1f8 != (void *)0x0) {
          FMemory::Free(local_1f8);
        }
        if (local_138[0] != 0) {
          FMemory::Free();
        }
        if (local_128[0] != 0) {
          FMemory::Free();
        }
        puVar12 = (undefined8 *)FUN_1410acb80(&local_res8,local_108,lVar11 + 0xe60);
        if (*(int *)(puVar12 + 1) == 0) {
          puVar18 = &DAT_143f3eda8;
        }
        else {
          puVar18 = (undefined2 *)*puVar12;
        }
        puVar12 = (undefined8 *)FUN_1410acb80(&local_res8,local_118,lVar11 + 0xcd8);
        if (*(int *)(puVar12 + 1) == 0) {
          puVar20 = &DAT_143f3eda8;
        }
        else {
          puVar20 = (undefined2 *)*puVar12;
        }
        FString::PrintfImpl(&local_1e8,L"%s: %s (%s)\n",L"CoreMod",puVar20,puVar18);
        pvVar6 = local_1e8;
        uVar5 = local_230;
        iVar21 = iVar16;
        if (local_1e0 != 0) {
          iVar21 = local_1e0 + -1;
        }
        if (iVar21 != 0) {
          iVar10 = (int)local_230;
          lVar17 = (longlong)(int)local_230;
          iVar9 = (uint)((int)local_230 == 0) + iVar21 + (int)local_230;
          local_230 = CONCAT44(local_230._4_4_,iVar9);
          if (local_230._4_4_ < iVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,uVar5 & 0xffffffff);
          }
          pvVar3 = (void *)(local_238 + (lVar17 - (ulonglong)(iVar10 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar3,pvVar6,(longlong)iVar21 * 2);
          *(undefined2 *)((longlong)iVar21 * 2 + (longlong)pvVar3) = 0;
        }
        if (local_1e8 != (void *)0x0) {
          FMemory::Free(local_1e8);
        }
        if (local_118[0] != 0) {
          FMemory::Free();
        }
        if (local_108[0] != 0) {
          FMemory::Free();
        }
        puVar12 = (undefined8 *)FUN_1410acb80(&local_res8,local_e8,lVar11 + 0xe88);
        if (*(int *)(puVar12 + 1) == 0) {
          puVar18 = &DAT_143f3eda8;
        }
        else {
          puVar18 = (undefined2 *)*puVar12;
        }
        puVar12 = (undefined8 *)FUN_1410acb80(&local_res8,local_f8,lVar11 + 0xd00);
        if (*(int *)(puVar12 + 1) == 0) {
          puVar20 = &DAT_143f3eda8;
        }
        else {
          puVar20 = (undefined2 *)*puVar12;
        }
        FString::PrintfImpl(&local_1d8,L"%s: %s (%s)\n",L"GunnerWeapon",puVar20,puVar18);
        pvVar6 = local_1d8;
        uVar5 = local_230;
        iVar21 = iVar16;
        if (local_1d0 != 0) {
          iVar21 = local_1d0 + -1;
        }
        if (iVar21 != 0) {
          iVar10 = (int)local_230;
          lVar17 = (longlong)(int)local_230;
          iVar9 = (uint)((int)local_230 == 0) + iVar21 + (int)local_230;
          local_230 = CONCAT44(local_230._4_4_,iVar9);
          if (local_230._4_4_ < iVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,uVar5 & 0xffffffff);
          }
          pvVar3 = (void *)(local_238 + (lVar17 - (ulonglong)(iVar10 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar3,pvVar6,(longlong)iVar21 * 2);
          *(undefined2 *)((longlong)iVar21 * 2 + (longlong)pvVar3) = 0;
        }
        if (local_1d8 != (void *)0x0) {
          FMemory::Free(local_1d8);
        }
        if (local_f8[0] != 0) {
          FMemory::Free();
        }
        if (local_e8[0] != 0) {
          FMemory::Free();
        }
        puVar12 = (undefined8 *)FUN_1410acb80(&local_res8,local_c8,lVar11 + 0xeb0);
        if (*(int *)(puVar12 + 1) == 0) {
          puVar18 = &DAT_143f3eda8;
        }
        else {
          puVar18 = (undefined2 *)*puVar12;
        }
        puVar12 = (undefined8 *)FUN_1410acb80(&local_res8,local_d8,lVar11 + 0xd28);
        if (*(int *)(puVar12 + 1) == 0) {
          puVar20 = &DAT_143f3eda8;
        }
        else {
          puVar20 = (undefined2 *)*puVar12;
        }
        FString::PrintfImpl(&local_1c8,L"%s: %s (%s)\n",L"DriverWeapon",puVar20,puVar18);
        pvVar6 = local_1c8;
        uVar5 = local_230;
        iVar21 = iVar16;
        if (local_1c0 != 0) {
          iVar21 = local_1c0 + -1;
        }
        if (iVar21 != 0) {
          iVar10 = (int)local_230;
          lVar17 = (longlong)(int)local_230;
          iVar9 = (uint)((int)local_230 == 0) + iVar21 + (int)local_230;
          local_230 = CONCAT44(local_230._4_4_,iVar9);
          if (local_230._4_4_ < iVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,uVar5 & 0xffffffff);
          }
          pvVar3 = (void *)(local_238 + (lVar17 - (ulonglong)(iVar10 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar3,pvVar6,(longlong)iVar21 * 2);
          *(undefined2 *)((longlong)iVar21 * 2 + (longlong)pvVar3) = 0;
        }
        if (local_1c8 != (void *)0x0) {
          FMemory::Free(local_1c8);
        }
        if (local_d8[0] != 0) {
          FMemory::Free();
        }
        if (local_c8[0] != 0) {
          FMemory::Free();
        }
        puVar12 = (undefined8 *)FUN_1410acb80(&local_res8,local_a8,lVar11 + 0xed8);
        if (*(int *)(puVar12 + 1) == 0) {
          puVar18 = &DAT_143f3eda8;
        }
        else {
          puVar18 = (undefined2 *)*puVar12;
        }
        puVar12 = (undefined8 *)FUN_1410acb80(&local_res8,local_b8,lVar11 + 0xd50);
        if (*(int *)(puVar12 + 1) == 0) {
          puVar20 = &DAT_143f3eda8;
        }
        else {
          puVar20 = (undefined2 *)*puVar12;
        }
        FString::PrintfImpl(&local_1b8,L"%s: %s (%s)\n",L"Ornament",puVar20,puVar18);
        pvVar6 = local_1b8;
        uVar5 = local_230;
        iVar21 = iVar16;
        if (local_1b0 != 0) {
          iVar21 = local_1b0 + -1;
        }
        if (iVar21 != 0) {
          iVar10 = (int)local_230;
          lVar17 = (longlong)(int)local_230;
          iVar9 = (uint)((int)local_230 == 0) + iVar21 + (int)local_230;
          local_230 = CONCAT44(local_230._4_4_,iVar9);
          if (local_230._4_4_ < iVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,uVar5 & 0xffffffff);
          }
          pvVar3 = (void *)(local_238 + (lVar17 - (ulonglong)(iVar10 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar3,pvVar6,(longlong)iVar21 * 2);
          *(undefined2 *)((longlong)pvVar3 + (longlong)iVar21 * 2) = 0;
        }
        if (local_1b8 != (void *)0x0) {
          FMemory::Free(local_1b8);
        }
        if (local_b8[0] != 0) {
          FMemory::Free();
        }
        if (local_a8[0] != 0) {
          FMemory::Free();
        }
        puVar12 = (undefined8 *)FUN_1410acb80(&local_res8,local_88,lVar11 + 0xf00);
        if (*(int *)(puVar12 + 1) == 0) {
          puVar18 = &DAT_143f3eda8;
        }
        else {
          puVar18 = (undefined2 *)*puVar12;
        }
        puVar12 = (undefined8 *)FUN_1410acb80(&local_res8,local_98,lVar11 + 0xd78);
        if (*(int *)(puVar12 + 1) == 0) {
          puVar20 = &DAT_143f3eda8;
        }
        else {
          puVar20 = (undefined2 *)*puVar12;
        }
        FString::PrintfImpl(&local_1a8,L"%s: %s (%s)\n",L"MaterialDecal",puVar20,puVar18);
        pvVar6 = local_1a8;
        uVar5 = local_230;
        iVar21 = iVar16;
        if (local_1a0 != 0) {
          iVar21 = local_1a0 + -1;
        }
        if (iVar21 != 0) {
          iVar10 = (int)local_230;
          lVar17 = (longlong)(int)local_230;
          iVar9 = (uint)((int)local_230 == 0) + iVar21 + (int)local_230;
          local_230 = CONCAT44(local_230._4_4_,iVar9);
          if (local_230._4_4_ < iVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,uVar5 & 0xffffffff);
          }
          pvVar3 = (void *)(local_238 + (lVar17 - (ulonglong)(iVar10 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar3,pvVar6,(longlong)iVar21 * 2);
          *(undefined2 *)((longlong)pvVar3 + (longlong)iVar21 * 2) = 0;
        }
        if (local_1a8 != (void *)0x0) {
          FMemory::Free(local_1a8);
        }
        if (local_98[0] != 0) {
          FMemory::Free();
        }
        if (local_88[0] != 0) {
          FMemory::Free();
        }
        puVar12 = (undefined8 *)FUN_1410acb80(&local_res8,local_68,lVar11 + 0xf28);
        if (*(int *)(puVar12 + 1) == 0) {
          puVar18 = &DAT_143f3eda8;
        }
        else {
          puVar18 = (undefined2 *)*puVar12;
        }
        puVar12 = (undefined8 *)FUN_1410acb80(&local_res8,local_78,lVar11 + 0xda0);
        if (*(int *)(puVar12 + 1) != 0) {
          puVar22 = (undefined2 *)*puVar12;
        }
        FString::PrintfImpl(&local_198,L"%s: %s (%s)\n",L"Material",puVar22,puVar18);
        pvVar6 = local_198;
        uVar5 = local_230;
        if (local_190 != 0) {
          iVar16 = local_190 + -1;
        }
        if (iVar16 != 0) {
          iVar21 = (int)local_230;
          lVar11 = (longlong)(int)local_230;
          iVar10 = (uint)((int)local_230 == 0) + iVar16 + (int)local_230;
          local_230 = CONCAT44(local_230._4_4_,iVar10);
          if (local_230._4_4_ < iVar10) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,uVar5 & 0xffffffff);
          }
          pvVar3 = (void *)(local_238 + (lVar11 - (ulonglong)(iVar21 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar3,pvVar6,(longlong)iVar16 * 2);
          *(undefined2 *)((longlong)pvVar3 + (longlong)iVar16 * 2) = 0;
        }
        if (local_198 != (void *)0x0) {
          FMemory::Free(local_198);
        }
        if (local_78[0] != 0) {
          FMemory::Free();
        }
        if (local_68[0] != 0) {
          FMemory::Free();
        }
        if (*(longlong **)(*param_1 + 0x1070) != (longlong *)0x0) {
          lVar11 = **(longlong **)(*param_1 + 0x1070);
          uVar13 = FText::FromString(local_58,&local_238);
          (**(code **)(lVar11 + 0x2b0))(*(undefined8 *)(*param_1 + 0x1070),uVar13,1,0);
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_50 + 1;
            lVar11 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar2 = (int *)((longlong)local_50 + 0xc);
              iVar16 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar16 == 1) {
                (**(code **)(*local_50 + 8))(local_50,1);
              }
            }
          }
        }
      }
      lVar11 = *param_1;
      lVar17 = *(longlong *)(lVar11 + 2000);
      lVar19 = (longlong)*(int *)(lVar11 + 0x7d8) * 0xe8 + lVar17;
      if (lVar17 != lVar19) {
        do {
          if (*(longlong *)(lVar17 + 0xd8) != 0) {
            FUN_1410e7ef0();
          }
          lVar17 = lVar17 + 0xe8;
        } while (lVar17 != lVar19);
        lVar11 = *param_1;
      }
      if (*(char *)(lVar11 + 0xc48) == '\0') {
        lVar17 = *(longlong *)(lVar11 + 2000);
        uVar4 = *(undefined2 *)(lVar11 + 0xc49);
        lVar19 = (longlong)*(int *)(lVar11 + 0x7d8) * 0xe8 + lVar17;
        if (lVar17 != lVar19) {
          local_res8._1_1_ = (char)((ushort)uVar4 >> 8);
          do {
            if ((*(char *)(lVar17 + 0x18) == (char)uVar4) &&
               (*(char *)(lVar17 + 0x19) == local_res8._1_1_)) goto LAB_1410b7abd;
            lVar17 = lVar17 + 0xe8;
          } while (lVar17 != lVar19);
        }
        lVar17 = lVar11 + 0xf60;
LAB_1410b7abd:
        lVar11 = *(longlong *)(lVar17 + 0xd8);
        local_res8 = uVar4;
        local_188 = lVar11;
        if (lVar11 != 0) {
          uVar13 = UBlendableInterface::GetPrivateStaticClass();
          lVar14 = UObjectBaseUtility::GetInterfaceAddress(lVar11,uVar13);
        }
        local_180 = lVar14;
        FUN_142ed36d0(*param_1,&local_188,0);
      }
      lVar11 = *param_1;
      if (*(longlong *)(lVar11 + 0x1088) != 0) {
        FUN_1410e97d0(*(longlong *)(lVar11 + 0x1088));
        lVar11 = *param_1;
      }
      FUN_1410f5ae0(lVar11);
      if (local_238 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1410b7b40 FUN_1410b7b40 body=940 status=ok
// SIG undefined FUN_1410b7b40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410b7b40(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_118 [2];
  undefined1 local_108 [224];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar3 = FUN_1410cb460(*param_1);
  if (lVar3 == 0) {
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0x30);
  if (lVar3 == 0) {
    return;
  }
  lVar4 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  lVar4 = *param_1;
  lVar7 = lVar4 + 0x6c0;
  lVar5 = FWeakObjectPtr::Get(lVar7);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar4 + 0x6c8)) &&
       (local_128 = (code *)0x0, *(longlong *)(lVar4 + 0x6d0) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar7,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar4 + 0x6c8) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar7);
      if (lVar5 != 0) goto LAB_1410b7c5d;
    }
LAB_1410b7c93:
    FUN_14282a800(local_108);
    FUN_14283c290(local_108,*param_1 + 0x6d0,1,0);
    FUN_14282cc40(local_108);
  }
  else {
LAB_1410b7c5d:
    lVar4 = FUN_142f2cf80();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1410b7c93;
  }
  lVar4 = *param_1;
  lVar7 = lVar4 + 0x6c0;
  lVar5 = FWeakObjectPtr::Get(lVar7);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar4 + 0x6c8)) &&
       (local_128 = (code *)0x0, *(longlong *)(lVar4 + 0x6d0) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar7,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar4 + 0x6c8) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar7);
      if (lVar5 != 0) goto LAB_1410b7d3d;
    }
LAB_1410b7d73:
    lVar5 = 0;
  }
  else {
LAB_1410b7d3d:
    lVar4 = FUN_142f2cf80();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1410b7d73;
  }
  lVar4 = FUN_142ebe540(*param_1,lVar5);
  if (lVar4 == 0) {
    return;
  }
  lVar5 = FUN_141369570();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  lVar5 = *param_1;
  local_128 = FUN_1410d4050;
  uStack_120 = 0;
  plVar1 = (longlong *)(lVar4 + 0x6b0);
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar6 + 1,lVar5);
    *(undefined4 *)(plVar6 + 2) = (undefined4)local_128;
    *(undefined4 *)((longlong)plVar6 + 0x14) = local_128._4_4_;
    *(undefined4 *)(plVar6 + 3) = uStack_120;
    *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_11c;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar6[5] = lVar5;
    *plVar6 = (longlong)&PTR_FUN_143fcff08;
  }
  if (local_118 != plVar1) {
    if (plVar6 == (longlong *)0x0) {
      if ((*(int *)(lVar4 + 0x6b8) != 0) &&
         (plVar6 = (longlong *)*plVar1, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*plVar1 != 0) {
          lVar5 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar5;
        }
        *(undefined4 *)(lVar4 + 0x6b8) = 0;
      }
      goto LAB_1410b7e6f;
    }
    (**(code **)(*plVar6 + 0x30))(plVar6,plVar1);
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    lVar5 = FMemory::Realloc(plVar6,0,0);
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
LAB_1410b7e6f:
  FUN_14112d8a0(lVar4,lVar3);
  return;
}



// FUNCTION 1410b7ef0 FUN_1410b7ef0 body=752 status=ok
// SIG undefined FUN_1410b7ef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410b7ef0(undefined8 *param_1,short **param_2,undefined4 param_3)

{
  uint uVar1;
  short *psVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  short *psVar8;
  ulonglong uVar9;
  int iVar11;
  int iVar12;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  short *local_1d8;
  int local_1d0;
  int local_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong *local_1b8;
  uint local_1b0;
  undefined8 *local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong *local_188;
  uint local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  short local_168 [128];
  short *local_68;
  short *local_60;
  int local_58;
  ulonglong local_48;
  ulonglong uVar10;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  psVar8 = (short *)0x0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_2 + 0xc)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  if (*param_2 != (short *)0x0) {
    **param_2 = 0;
  }
  local_198 = 0xffffffffffffffff;
  uStack_190 = 0xffffffffffffffff;
  local_188 = (longlong *)0x0;
  local_180 = 3;
  local_1c8 = 0xffffffffffffffff;
  uStack_1c0 = 0xffffffffffffffff;
  local_1b8 = (longlong *)0x0;
  local_1b0 = 0;
  local_1e8 = 1;
  local_178 = param_3;
  cVar3 = FUN_1420458d0(*(undefined8 *)*param_1,"getLineText",&local_1c8,&local_198);
  if (cVar3 == '\0') goto LAB_1410b8161;
  puVar7 = local_1a8;
  if ((local_1b0 >> 6 & 1) != 0) {
    puVar7 = (undefined8 *)*local_1a8;
  }
  local_68 = (short *)0x0;
  lVar6 = -1;
  if (puVar7 == (undefined8 *)0x0) {
    local_60 = (short *)0x0;
    local_58 = 0;
  }
  else {
    uVar9 = 0xffffffffffffffff;
    do {
      uVar10 = uVar9;
      uVar9 = uVar10 + 1;
    } while (*(char *)((longlong)puVar7 + uVar9) != '\0');
    local_1d8 = (short *)((ulonglong)local_1d8 & 0xffffffff00000000);
    FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
              (&local_1d8,0x7fffffff,puVar7,uVar9 & 0xffffffff);
    local_58 = (int)local_1d8;
    uVar1 = (int)local_1d8 + 1;
    if (uVar1 < 0x81) {
      if (local_68 != (short *)0x0) {
        lVar4 = 0;
LAB_1410b804e:
        local_68 = (short *)FMemory::Realloc(local_68,lVar4,0);
      }
    }
    else if ((local_68 != (short *)0x0) || (uVar1 != 0)) {
      lVar4 = (longlong)(int)uVar1 * 2;
      goto LAB_1410b804e;
    }
    local_1d8 = local_168;
    if (local_68 != (short *)0x0) {
      local_1d8 = local_68;
    }
    local_60 = local_1d8;
    FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_1d8,uVar1,puVar7,(int)uVar10 + 2);
  }
  psVar2 = local_60;
  local_1d8 = (short *)0x0;
  local_1cc = 0;
  iVar11 = 0;
  iVar12 = 0;
  if ((local_60 != (short *)0x0) && (iVar12 = iVar11, *local_60 != 0)) {
    do {
      lVar6 = lVar6 + 1;
    } while (local_60[lVar6] != 0);
    iVar5 = (int)lVar6 + 1;
    local_1d0 = iVar5;
    if (0 < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
    }
    iVar11 = local_1cc;
    iVar12 = local_1d0;
    psVar8 = local_1d8;
    FGenericPlatformString::Memcpy(local_1d8,psVar2,(longlong)iVar5 * 2);
  }
  if (param_2 == &local_1d8) {
    if (psVar8 != (short *)0x0) {
      FMemory::Free(psVar8);
    }
  }
  else {
    if (*param_2 != (short *)0x0) {
      FMemory::Free();
    }
    *param_2 = psVar8;
    *(int *)(param_2 + 1) = iVar12;
    *(int *)((longlong)param_2 + 0xc) = iVar11;
  }
  if (local_68 != (short *)0x0) {
    FMemory::Free();
  }
LAB_1410b8161:
  if ((local_1b0 >> 6 & 1) != 0) {
    (**(code **)(*local_1b8 + 0x10))(local_1b8,&local_1c8,local_1a8);
    local_1b8 = (longlong *)0x0;
  }
  local_1b0 = 0;
  if ((local_180 >> 6 & 1) != 0) {
    (**(code **)(*local_188 + 0x10))(local_188,&local_198,CONCAT44(uStack_174,local_178));
  }
  return;
}



// FUNCTION 1410b81e0 FUN_1410b81e0 body=493 status=ok
// SIG undefined FUN_1410b81e0(void)

void FUN_1410b81e0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 local_res8 [8];
  
  lVar2 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
  uVar7 = 0;
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
      lVar3 = *(longlong *)(*param_1 + 0x6b8);
      uVar6 = uVar7;
      uVar9 = uVar7;
      if (0 < *(int *)(lVar2 + 0xa70)) {
        do {
          plVar8 = (longlong *)(*(longlong *)(lVar2 + 0xa68) + uVar9);
          if ((((int)plVar8[1] != 0) && (plVar4 = (longlong *)*plVar8, plVar4 != (longlong *)0x0))
             && (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8),
                *plVar4 == lVar3)) {
            if (((int)plVar8[1] != 0) && (plVar4 = (longlong *)*plVar8, plVar4 != (longlong *)0x0))
            {
              (**(code **)(*plVar4 + 0x28))(plVar4,0);
              if (*plVar8 != 0) {
                lVar3 = FMemory::Realloc(*plVar8,0,0);
                *plVar8 = lVar3;
              }
              *(undefined4 *)(plVar8 + 1) = 0;
            }
            break;
          }
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
          uVar9 = uVar9 + 0x10;
        } while ((int)uVar5 < *(int *)(lVar2 + 0xa70));
      }
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar2 + 0xa68,0);
      *(undefined8 *)(*param_1 + 0x6b8) = 0;
    }
  }
  lVar2 = (**(code **)(*(longlong *)*param_1 + 0x148))();
  if ((lVar2 != 0) && (lVar2 = UWorld::GetGameState<APVPGameState>(lVar2), lVar2 != 0)) {
    lVar3 = *(longlong *)(*param_1 + 0x6b0);
    uVar6 = uVar7;
    if (0 < *(int *)(lVar2 + 0x628)) {
      do {
        plVar8 = (longlong *)(*(longlong *)(lVar2 + 0x620) + uVar6);
        if ((((int)plVar8[1] != 0) && (plVar4 = (longlong *)*plVar8, plVar4 != (longlong *)0x0)) &&
           (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8), *plVar4 == lVar3)
           ) {
          if (((int)plVar8[1] != 0) && (plVar4 = (longlong *)*plVar8, plVar4 != (longlong *)0x0)) {
            (**(code **)(*plVar4 + 0x28))(plVar4,0);
            if (*plVar8 != 0) {
              lVar3 = FMemory::Realloc(*plVar8,0,0);
              *plVar8 = lVar3;
            }
            *(undefined4 *)(plVar8 + 1) = 0;
          }
          break;
        }
        uVar5 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar5;
        uVar6 = uVar6 + 0x10;
      } while ((int)uVar5 < *(int *)(lVar2 + 0x628));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(lVar2 + 0x620),0);
    *(undefined8 *)(*param_1 + 0x6b0) = 0;
  }
  return;
}



// FUNCTION 1410b83d0 FUN_1410b83d0 body=359 status=ok
// SIG undefined FUN_1410b83d0(void)

void FUN_1410b83d0(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_18 [2];
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    lVar6 = 0;
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar7;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
    }
    if (((*(uint *)(lVar6 + 8) & 0x30000000) == 0) &&
       (lVar6 = *param_1, *(longlong *)(lVar6 + 0x1108) != 0)) {
      plVar2 = *(longlong **)(lVar6 + 0x1120);
      if (plVar2 != (longlong *)0x0) {
        if ((*(int *)(lVar6 + 0x1068) < 1) || (**(longlong **)(lVar6 + 0x1060) == 0)) {
          local_18[0] = 0;
          local_18[1] = 0;
          (**(code **)(*plVar2 + 0x2a8))(plVar2,local_18,1,0);
          if (local_18[0] != 0) {
            FMemory::Free();
          }
        }
        else {
          (**(code **)(*plVar2 + 0x2b0))(plVar2,**(longlong **)(lVar6 + 0x1060) + 0x40,1,0);
        }
      }
      local_18[0] = 0;
      local_18[1] = 3;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],&DAT_144603d04,6);
      FUN_142088910(*(undefined8 *)(*param_1 + 0x1108),local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1410b8540 FUN_1410b8540 body=262 status=ok
// SIG undefined FUN_1410b8540(void)

void FUN_1410b8540(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar3 = FWeakObjectPtr::Get(*param_1 + 0x680);
  if (lVar3 != 0) {
    lVar4 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar4 = FWeakObjectPtr::Get();
      lVar4 = *(longlong *)(lVar4 + 0x4e8);
      if (lVar4 != 0) {
        lVar5 = FUN_142f227c0();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          iVar1 = *(int *)(lVar3 + 0x6a8);
          if ((iVar1 < 0) || (*(int *)(lVar4 + 200) <= iVar1)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            lVar3 = *(longlong *)(lVar4 + 0xc0);
            uVar6 = FWeakObjectPtr::Get(*param_1 + 0x680);
            thunk_FUN_142eda790(uVar6,(longlong)iVar1 * 0x58 + lVar3);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1410b8650 FUN_1410b8650 body=187 status=ok
// SIG undefined FUN_1410b8650(void)

void FUN_1410b8650(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  lVar1 = *param_1;
  local_38 = 0;
  local_28 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f77b70;
    puVar2[1] = lVar1;
  }
  local_68[0] = &LAB_1410c5810;
  FUN_1410d0080(lVar1 + 0xc50,local_68);
  local_38 = 0;
  local_28 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f77b70;
    puVar2[1] = lVar1;
  }
  local_68[0] = &LAB_1410c5810;
  FUN_1410d0080(lVar1 + 0xdd8,local_68);
  return;
}



// FUNCTION 1410b8710 FUN_1410b8710 body=150 status=ok
// SIG undefined FUN_1410b8710(void)

void FUN_1410b8710(longlong param_1)

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
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      FUN_1410c1eb0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1410b87b0 FUN_1410b87b0 body=290 status=ok
// SIG undefined FUN_1410b87b0(void)

void FUN_1410b87b0(undefined8 *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 local_28 [32];
  
  local_res10 = *(undefined4 *)(param_1 + 1);
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
      bVar2 = true;
      goto LAB_1410b8839;
    }
  }
  bVar2 = false;
LAB_1410b8839:
  if ((bVar2) && (lVar5 = FWeakObjectPtr::Get(param_1 + 2), lVar5 != 0)) {
    if (*(longlong *)(lVar5 + 0xd0) != 0) {
      FUN_142ece5e0(*param_1,local_28);
      FUN_140591060(local_28);
    }
    lVar6 = FUN_140eac060(*param_1);
    if (lVar6 != 0) {
      lVar7 = UUGButton::GetPrivateStaticClass();
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
        FUN_1412f3e20(lVar6,lVar5);
      }
    }
  }
  return;
}



// FUNCTION 1410b88e0 FUN_1410b88e0 body=569 status=ok
// SIG undefined FUN_1410b88e0(void)

void FUN_1410b88e0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_res18;
  longlong local_48;
  longlong *plStack_40;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar6 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar6 != '\0') {
    lVar8 = FWeakObjectPtr::Get(&local_res10);
    lVar9 = 0;
    iVar11 = *(int *)(lVar8 + 0xc);
    if (iVar11 < (int)DAT_1469e91c4) {
      uVar10 = iVar11 >> 0x1f & 0xffff;
      uVar7 = iVar11 + uVar10;
      lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
              (longlong)(int)((uVar7 & 0xffff) - uVar10) * 0x18;
    }
    if ((*(uint *)(lVar9 + 8) & 0x30000000) == 0) {
      lVar9 = *param_1;
      puVar13 = *(undefined8 **)(lVar9 + 0x1050);
      puVar3 = puVar13 + (longlong)*(int *)(lVar9 + 0x1058) * 5;
      if (puVar13 != puVar3) {
        local_res18 = 0;
        plVar12 = puVar13 + 3;
        do {
          if (*plVar12 != 0) {
            FUN_142833de0();
            FUN_14283ef20(*plVar12);
            local_48 = 0;
            plStack_40 = (longlong *)0x0;
            if (plVar12 != &local_48) {
              *plVar12 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(plVar12 + 1,&plStack_40);
              plVar5 = plStack_40;
              if (plStack_40 != (longlong *)0x0) {
                LOCK();
                plVar1 = plStack_40 + 1;
                lVar9 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*plStack_40)(plStack_40);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar5 + 0xc);
                  iVar11 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar11 == 1) {
                    (**(code **)(*plStack_40 + 8))(plStack_40,1);
                  }
                }
              }
            }
          }
          *puVar13 = 0;
          *(undefined4 *)(plVar12 + -1) = 0;
          if (0x7fffffff < *(uint *)((longlong)plVar12 + -4)) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar12 + -2,0);
          }
          if ((undefined2 *)plVar12[-2] != (undefined2 *)0x0) {
            *(undefined2 *)plVar12[-2] = 0;
          }
          puVar13 = puVar13 + 5;
          plVar12 = plVar12 + 5;
        } while (puVar13 != puVar3);
        lVar9 = *param_1;
      }
      iVar11 = *(int *)(lVar9 + 0x1058);
      if (iVar11 != 0) {
        plVar12 = (longlong *)(*(longlong *)(lVar9 + 0x1050) + 8);
        do {
          plVar5 = (longlong *)plVar12[3];
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
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
          if (*plVar12 != 0) {
            FMemory::Free();
          }
          plVar12 = plVar12 + 5;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      *(undefined4 *)(lVar9 + 0x1058) = 0;
      if (*(int *)(lVar9 + 0x105c) != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                  ((longlong *)(lVar9 + 0x1050),0);
      }
    }
  }
  return;
}



// FUNCTION 1410b8b20 FUN_1410b8b20 body=639 status=ok
// SIG undefined FUN_1410b8b20(void)

ulonglong FUN_1410b8b20(undefined8 *param_1,byte param_2,undefined8 param_3)

{
  wchar_t **ppwVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  int iVar7;
  wchar_t *pwVar8;
  undefined2 *puVar9;
  uint uVar10;
  undefined2 *puVar11;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  uint uVar6;
  
  puVar9 = &DAT_143f3eda8;
  if (param_2 == 0) {
    FUN_1410b7ef0(*param_1,param_1[1],*(int *)param_1[2] + -1);
    goto LAB_1410b8d3f;
  }
  uVar2 = 0;
  if (param_2 == 1) {
    iVar7 = *(int *)((undefined8 *)param_1[1] + 1);
    uVar4 = iVar7 - 1;
    uVar10 = iVar7 - 1;
    if (iVar7 == 0) {
      uVar4 = 0xffffffff;
      uVar10 = uVar2;
    }
    if ((int)uVar10 < 3) goto LAB_1410b8d3f;
    if (iVar7 == 0) {
      uVar4 = uVar2;
    }
    uVar2 = (uint)((float)(int)uVar4 * 0.5);
    uVar10 = uVar4;
    if (uVar2 < uVar4) {
      uVar10 = uVar2;
    }
    uVar2 = uVar2 + 0x7fffffff;
    uVar6 = uVar10;
    if ((uVar10 <= uVar2) && (uVar6 = uVar4, uVar2 < uVar4)) {
      uVar6 = uVar2;
    }
    if (iVar7 == 0) {
LAB_1410b8c5e:
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = *(undefined2 **)param_1[1];
    }
  }
  else {
    if (param_2 == 2) {
      FUN_1410b7ef0(*param_1,param_1[1],*(undefined4 *)param_1[2]);
      goto LAB_1410b8d3f;
    }
    if (param_2 != 3) goto LAB_1410b8d3f;
    iVar7 = *(int *)((undefined8 *)param_1[1] + 1);
    uVar4 = iVar7 - 1;
    iVar5 = iVar7 + -1;
    if (iVar7 == 0) {
      uVar4 = 0xffffffff;
      iVar5 = 0;
    }
    if (iVar5 < 3) goto LAB_1410b8d3f;
    if (iVar7 == 0) {
      uVar4 = uVar2;
    }
    uVar10 = uVar4;
    if (uVar4 != 0) {
      uVar10 = 0;
    }
    uVar2 = (uint)((float)(int)uVar4 * 0.5);
    uVar6 = uVar10;
    if ((uVar10 <= uVar2) && (uVar6 = uVar4, uVar2 < uVar4)) {
      uVar6 = uVar2;
    }
    if (iVar7 == 0) goto LAB_1410b8c5e;
    puVar11 = *(undefined2 **)param_1[1];
  }
  iVar5 = uVar6 - uVar10;
  local_38 = (wchar_t *)0x0;
  local_2c = 0;
  iVar7 = iVar5 + 1;
  if (iVar5 == 0) {
    iVar7 = 0;
  }
  pwVar8 = local_38;
  local_30 = iVar7;
  if ((0 < iVar7) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), iVar7 = local_30,
     pwVar8 = local_38, 0 < local_30)) {
    wcsncpy(local_38,puVar11 + (int)uVar10,(longlong)iVar5);
    pwVar8[iVar5] = L'\0';
  }
  ppwVar1 = (wchar_t **)param_1[1];
  if (ppwVar1 == &local_38) {
    if (pwVar8 != (wchar_t *)0x0) {
      FMemory::Free(pwVar8);
    }
  }
  else {
    if (*ppwVar1 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    *ppwVar1 = pwVar8;
    *(int *)(ppwVar1 + 1) = iVar7;
    *(undefined4 *)((longlong)ppwVar1 + 0xc) = local_2c;
  }
LAB_1410b8d3f:
  if (*(int *)((undefined8 *)param_1[1] + 1) != 0) {
    puVar9 = *(undefined2 **)param_1[1];
  }
  uVar3 = FUN_141592950(param_3,puVar9,1,0,0xffffffff);
  if (((int)uVar3 != -1) && (param_2 < 2)) {
    iVar7 = *(int *)(param_1[1] + 8) + -1;
    if (*(int *)(param_1[1] + 8) == 0) {
      iVar7 = 0;
    }
    uVar3 = (ulonglong)(uint)(iVar7 + (int)uVar3);
  }
  return uVar3;
}



// FUNCTION 1410b8da0 FUN_1410b8da0 body=365 status=ok
// SIG undefined FUN_1410b8da0(void)

void FUN_1410b8da0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_18 [2];
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      cVar2 = FWeakObjectPtr::IsValid(*param_1 + 0x240);
      if (cVar2 != '\0') {
        lVar4 = FWeakObjectPtr::Get(*param_1 + 0x240);
        if ((*(longlong *)(lVar4 + 0x2b8) != 0) &&
           (plVar5 = *(longlong **)(*param_1 + 0x308), plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 0x278))(plVar5,1);
          if ((param_1[2] == 0) || ((int)param_1[3] == -1)) {
            FUN_142088ee0(*(undefined8 *)(*param_1 + 0x308),1);
            return;
          }
          FString::PrintfImpl(local_18,L"BTS_Thumbnail_%02d_nopack");
          plVar5 = (longlong *)FWeakObjectPtr::Get(*param_1 + 0x240);
          (**(code **)(*plVar5 + 0x2a0))(plVar5,local_18,param_1[2]);
          FUN_142088ee0(*(undefined8 *)(*param_1 + 0x308),(int)param_1[3] + 2);
          if (local_18[0] != 0) {
            FMemory::Free();
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1410b8f10 FUN_1410b8f10 body=777 status=ok
// SIG undefined FUN_1410b8f10(void)

void FUN_1410b8f10(longlong *param_1)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(&local_res8);
  FUN_14172a400(&local_res8);
  cVar6 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar6 != '\0') {
    lVar8 = FWeakObjectPtr::Get(&local_res10);
    lVar10 = 0;
    iVar2 = *(int *)(lVar8 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar13 = iVar2 >> 0x1f & 0xffff;
      uVar7 = iVar2 + uVar13;
      lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
               (longlong)(int)((uVar7 & 0xffff) - uVar13) * 0x18;
    }
    if ((*(uint *)(lVar10 + 8) & 0x30000000) == 0) {
      cVar6 = FWeakObjectPtr::IsValid(*param_1 + 0x28);
      if (cVar6 != '\0') {
        lVar8 = FWeakObjectPtr::Get(*param_1 + 0x28);
        lVar10 = *param_1;
        iVar2 = (int)param_1[2];
        if (*(char *)(lVar10 + 0x40) == '\0') {
          if ((-1 < iVar2) && (iVar2 < *(int *)(lVar10 + 0x60))) {
            FUN_1410ecc90(lVar8 + 0xc50,*(undefined1 *)(lVar10 + 0x41),
                          *(undefined8 *)(*(longlong *)(lVar10 + 0x58) + (longlong)iVar2 * 8));
            lVar10 = *param_1;
            lVar3 = param_1[2];
            lVar8 = *(longlong *)(lVar10 + 0x58);
            uVar1 = *(undefined1 *)(lVar10 + 0x41);
            uVar9 = FWeakObjectPtr::Get(lVar10 + 0x28);
            FUN_1410deb90(uVar9,uVar1,*(undefined8 *)(lVar8 + (longlong)(int)lVar3 * 8));
            uVar9 = FWeakObjectPtr::Get(*param_1 + 0x28);
            FUN_1410c6460(uVar9);
          }
        }
        else if ((-1 < iVar2) && (iVar2 < *(int *)(lVar10 + 0x50))) {
          lVar3 = *(longlong *)(lVar10 + 0x48);
          uVar9 = FWeakObjectPtr::Get(lVar10 + 0x28);
          lVar10 = FUN_1410cb580(uVar9,*(undefined8 *)(lVar3 + (longlong)iVar2 * 8));
          if (lVar10 != 0) {
            FUN_140e6bf90(lVar8 + 0xdd8,lVar10 + 0x30);
            lVar8 = param_1[2];
            lVar10 = *(longlong *)(*param_1 + 0x48);
            plVar11 = (longlong *)FWeakObjectPtr::Get(*param_1 + 0x28);
            uVar9 = *(undefined8 *)(lVar10 + (longlong)(int)lVar8 * 8);
            *(undefined1 *)(plVar11 + 599) = 0;
            FWeakObjectPtr::operator=(&local_res10,uVar9);
            FWeakObjectPtr::operator=(&local_res8,plVar11);
            uVar5 = local_res14;
            uVar4 = local_res10;
            local_48 = 0;
            local_38 = 0;
            puVar12 = (undefined8 *)FUN_140438ef0(0x20,local_68);
            if (puVar12 != (undefined8 *)0x0) {
              *puVar12 = &PTR_FUN_144605c80;
              puVar12[1] = plVar11;
              *(undefined4 *)(puVar12 + 2) = local_res8;
              *(undefined4 *)((longlong)puVar12 + 0x14) = local_resc;
              *(undefined4 *)(puVar12 + 3) = uVar4;
              *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar5;
            }
            local_78[0] = &LAB_1410c53a0;
            FUN_14204c280(local_78);
            lVar10 = *plVar11;
            local_88 = 0;
            local_80 = 0;
            puVar12 = (undefined8 *)FName::FName(&local_res8,L"CAR_Select_Vehicle",1);
            (**(code **)(lVar10 + 0x4e8))(plVar11,*puVar12,&local_88);
            uVar9 = FWeakObjectPtr::Get(*param_1 + 0x28);
            FUN_1410c6460(uVar9);
          }
        }
      }
      cVar6 = FWeakObjectPtr::IsValid(*param_1 + 0x38);
      if (cVar6 != '\0') {
        plVar11 = (longlong *)FWeakObjectPtr::Get(*param_1 + 0x38);
        (**(code **)(*plVar11 + 0x300))(plVar11);
      }
    }
  }
  return;
}



// FUNCTION 1410b9220 FUN_1410b9220 body=210 status=ok
// SIG undefined FUN_1410b9220(void)

void FUN_1410b9220(longlong param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = param_1 + 8;
  cVar2 = FWeakObjectPtr::IsValid(lVar5);
  if (cVar2 != '\0') {
    param_1 = param_1 + 0x10;
    cVar2 = FWeakObjectPtr::IsValid(param_1);
    if (cVar2 != '\0') {
      uVar3 = FWeakObjectPtr::Get(lVar5);
      lVar4 = FUN_140cfbfb0(uVar3);
      if (lVar4 != 0) {
        uVar3 = FWeakObjectPtr::Get(param_1);
        FUN_140d4d1d0(lVar4,uVar3);
        lVar5 = FWeakObjectPtr::Get(lVar5);
        lVar5 = *(longlong *)(lVar5 + 0x460);
        if (lVar5 != 0) {
          lVar4 = UInputKeySelector::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            uVar3 = FWeakObjectPtr::Get(param_1);
            FUN_140e5cfe0(lVar5,uVar3);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1410b9300 FUN_1410b9300 body=1228 status=ok
// SIG undefined FUN_1410b9300(void)

void FUN_1410b9300(undefined8 *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong local_118 [2];
  longlong local_108;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined8 local_e8;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined8 local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  longlong local_88 [2];
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  if (param_2 != 0) {
    if (((*(int *)(param_2 + 0x30) != 0) || (*(int *)(param_2 + 0x34) != 0)) &&
       ((param_3 == 0 || (*(longlong *)(param_3 + 0x30) != *(longlong *)(param_2 + 0x30))))) {
      plVar7 = *(longlong **)(*(longlong *)*param_1 + 0x58);
      plVar5 = plVar7 + (longlong)*(int *)(*(longlong *)*param_1 + 0x60) * 5;
      for (; plVar7 != plVar5; plVar7 = plVar7 + 5) {
        if ((((int)*plVar7 != 0) || (*(int *)((longlong)plVar7 + 4) != 0)) &&
           (*plVar7 == *(longlong *)(param_2 + 0x30))) {
          local_108 = plVar7[1];
          FText::FText(local_100,plVar7 + 2);
          lVar3 = param_1[1];
          iVar2 = *(int *)(lVar3 + 0x6d8);
          *(int *)(lVar3 + 0x6d8) = iVar2 + 1;
          if (*(int *)(lVar3 + 0x6dc) < iVar2 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow(lVar3 + 0x6d0,iVar2);
          }
          plVar5 = (longlong *)((longlong)iVar2 * 0x20 + *(longlong *)(lVar3 + 0x6d0));
          *plVar5 = local_108;
          FText::FText(plVar5 + 1,local_100);
          if (local_f8 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_f8 + 1;
            lVar3 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*local_f8)(local_f8);
              LOCK();
              piVar1 = (int *)((longlong)local_f8 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*local_f8 + 8))(local_f8,1);
              }
            }
          }
          break;
        }
      }
    }
    if (((*(int *)(param_2 + 0x28) != 0) || (*(int *)(param_2 + 0x2c) != 0)) &&
       ((param_3 == 0 || (*(longlong *)(param_3 + 0x28) != *(longlong *)(param_2 + 0x28))))) {
      lVar3 = *(longlong *)*param_1;
      uVar4 = FName::ToString((longlong *)(param_2 + 0x28),local_88);
      uVar4 = FText::FromString(local_78,uVar4);
      local_e8 = *(undefined8 *)(lVar3 + 0x68);
      FText::FText(local_e0,uVar4);
      lVar3 = param_1[1];
      iVar2 = *(int *)(lVar3 + 0x6d8);
      *(int *)(lVar3 + 0x6d8) = iVar2 + 1;
      if (*(int *)(lVar3 + 0x6dc) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(lVar3 + 0x6d0,iVar2);
      }
      puVar6 = (undefined8 *)((longlong)iVar2 * 0x20 + *(longlong *)(lVar3 + 0x6d0));
      *puVar6 = local_e8;
      FText::FText(puVar6 + 1,local_e0);
      if (local_d8 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_d8 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_d8)(local_d8);
          LOCK();
          piVar1 = (int *)((longlong)local_d8 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_d8 + 8))(local_d8,1);
          }
        }
      }
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_70 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)local_70 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
      if (local_88[0] != 0) {
        FMemory::Free();
      }
    }
    if ((1 < *(int *)(param_2 + 0x10)) || (1 < *(int *)(param_2 + 0x20))) {
      puVar8 = &DAT_143f3eda8;
      lVar3 = *(longlong *)*param_1;
      if (*(int *)(param_2 + 0x20) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = *(undefined2 **)(param_2 + 0x18);
      }
      if (*(int *)(param_2 + 0x10) != 0) {
        puVar8 = *(undefined2 **)(param_2 + 8);
      }
      FString::PrintfImpl(local_118,L"%s %s",puVar8,puVar9);
      uVar4 = FText::FromString(local_60,local_118);
      local_c8 = *(undefined8 *)(lVar3 + 0x70);
      FText::FText(local_c0,uVar4);
      lVar3 = param_1[1];
      iVar2 = *(int *)(lVar3 + 0x6d8);
      *(int *)(lVar3 + 0x6d8) = iVar2 + 1;
      if (*(int *)(lVar3 + 0x6dc) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(lVar3 + 0x6d0,iVar2);
      }
      puVar6 = (undefined8 *)((longlong)iVar2 * 0x20 + *(longlong *)(lVar3 + 0x6d0));
      *puVar6 = local_c8;
      FText::FText(puVar6 + 1,local_c0);
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_b8 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar1 = (int *)((longlong)local_b8 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_b8 + 8))(local_b8,1);
          }
        }
      }
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_58 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar1 = (int *)((longlong)local_58 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_58 + 8))(local_58,1);
          }
        }
      }
      if (local_118[0] != 0) {
        FMemory::Free();
      }
    }
    if ((*(int *)(param_2 + 0x40) != 0) && (0 < *(int *)(param_2 + 0x40) + -1)) {
      uVar4 = FText::FromString(local_48,param_2 + 0x38);
      local_a8 = *(undefined8 *)(param_2 + 0x48);
      FText::FText(local_a0,uVar4);
      lVar3 = param_1[1];
      iVar2 = *(int *)(lVar3 + 0x6d8);
      *(int *)(lVar3 + 0x6d8) = iVar2 + 1;
      if (*(int *)(lVar3 + 0x6dc) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(lVar3 + 0x6d0,iVar2);
      }
      puVar6 = (undefined8 *)((longlong)iVar2 * 0x20 + *(longlong *)(lVar3 + 0x6d0));
      *puVar6 = local_a8;
      FText::FText(puVar6 + 1,local_a0);
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_98 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar1 = (int *)((longlong)local_98 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_98 + 8))(local_98,1);
          }
        }
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
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1410b97d0 FUN_1410b97d0 body=232 status=ok
// SIG undefined FUN_1410b97d0(void)

void FUN_1410b97d0(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  
  local_30 = *(int *)(param_2 + 1);
  lVar5 = (longlong)local_30;
  _Src = (void *)*param_2;
  local_38 = (void *)0x0;
  if (local_30 == 0) {
    pvVar3 = (void *)0x0;
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
    pvVar3 = local_38;
    _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar5 * 2);
  }
  iVar2 = local_30;
  lVar5 = *param_1;
  iVar1 = *(int *)(lVar5 + 0x840);
  lVar4 = (longlong)iVar1;
  *(int *)(lVar5 + 0x840) = iVar1 + 1;
  if (*(int *)(lVar5 + 0x844) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (lVar5 + 0x838,iVar1);
  }
  lVar5 = *(longlong *)(lVar5 + 0x838);
  *(void **)(lVar5 + lVar4 * 0x18) = pvVar3;
  *(int *)(lVar5 + 8 + lVar4 * 0x18) = iVar2;
  *(undefined4 *)(lVar5 + 0xc + lVar4 * 0x18) = local_2c;
  *(int *)(lVar5 + 0x10 + lVar4 * 0x18) = param_3;
  *(undefined4 *)(lVar5 + 0x14 + lVar4 * 0x18) = 0;
  *(int *)(*param_1 + 0x830) = *(int *)(*param_1 + 0x830) + param_3;
  return;
}



// FUNCTION 1410b98c0 FUN_1410b98c0 body=1568 status=ok
// SIG undefined FUN_1410b98c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410b98c0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined1 auStack_458 [32];
  undefined2 *local_438;
  undefined1 local_428 [16];
  undefined8 local_418;
  undefined8 uStack_410;
  undefined4 local_408;
  undefined4 local_404;
  undefined8 local_3f8;
  longlong *plStack_3f0;
  undefined2 local_3e8 [4];
  longlong local_3e0 [2];
  undefined1 local_3d0 [8];
  longlong *local_3c8;
  undefined **local_3b8;
  longlong local_3b0;
  longlong *local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  longlong local_388;
  longlong *plStack_380;
  longlong local_378;
  longlong *plStack_370;
  longlong *local_368;
  longlong *local_360;
  undefined8 local_358;
  undefined1 local_350 [24];
  undefined1 local_338 [24];
  undefined4 local_320;
  undefined8 local_31c;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined1 local_2f8;
  longlong local_2f0;
  longlong *plStack_2e8;
  undefined1 local_2d8 [8];
  longlong *local_2d0;
  longlong local_2c8 [2];
  undefined1 local_2b8 [8];
  longlong *local_2b0;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined1 local_288 [8];
  undefined1 local_280 [64];
  longlong local_240;
  longlong local_230;
  undefined1 local_1f8 [336];
  longlong local_a8;
  undefined1 local_88 [16];
  longlong local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_458;
  local_408 = (undefined4)param_1[1];
  local_404 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_428);
  FUN_14172a400(local_428);
  cVar5 = FWeakObjectPtr::IsValid(&local_408);
  lVar8 = 0;
  if (cVar5 == '\0') {
LAB_1410b996b:
    bVar4 = false;
  }
  else {
    lVar7 = FWeakObjectPtr::Get(&local_408);
    iVar2 = *(int *)(lVar7 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar12 = iVar2 >> 0x1f & 0xffff;
      uVar6 = iVar2 + uVar12;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
              (longlong)(int)((uVar6 & 0xffff) - uVar12) * 0x18;
    }
    if ((*(uint *)(lVar8 + 8) & 0x30000000) != 0) goto LAB_1410b996b;
    bVar4 = true;
  }
  if (!bVar4) {
    return;
  }
  lVar8 = FWeakObjectPtr::Get(param_1 + 2);
  if (lVar8 == 0) {
    return;
  }
  local_358 = 0;
  FText::FText(local_350);
  FText::FText(local_338);
  local_308 = 0;
  local_310 = 0;
  local_300 = 0;
  local_320 = 0xffffffff;
  local_31c = 0;
  local_418 = 0;
  local_2f8 = 0;
  local_2f0 = 0;
  plStack_2e8 = (longlong *)0x0;
  local_3e8[0] = 0;
  local_3e0[0] = 0;
  local_3e0[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_3e0,0);
  FGenericPlatformString::Memcpy(local_3e0[0],L"empty",0xc);
  FText::FText(local_3d0);
  FUN_140d63d70(local_288);
  *(undefined1 *)(*param_1 + 0x1b4) = 0;
  FUN_1410edce0(*param_1,*(undefined1 *)(*param_1 + 0x1a9));
  local_3e8[0] = CONCAT11(local_3e8[0]._1_1_,2);
  FWeakObjectPtr::operator=(*param_1 + 0x1ac,lVar8);
  plVar9 = (longlong *)FUN_142dcf3a0(lVar8,local_2d8);
  local_418 = *plVar9;
  plVar3 = (longlong *)plVar9[1];
  plVar9[1] = 0;
  *plVar9 = 0;
  uStack_410 = plVar3;
  if (local_2d0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_2d0 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_2d0)(local_2d0);
      LOCK();
      piVar1 = (int *)((longlong)local_2d0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_2d0 + 8))(local_2d0,1);
      }
    }
  }
  plVar9 = plStack_2e8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_3f8 = local_2f0;
  plStack_3f0 = plStack_2e8;
  local_2f0 = local_418;
  plStack_2e8 = uStack_410;
  local_2a0 = (undefined4)local_418;
  uStack_29c = local_418._4_4_;
  uStack_298 = (undefined4)uStack_410;
  uStack_294 = uStack_410._4_4_;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar9 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_3f0 + 8))(plStack_3f0,1);
      }
    }
  }
  lVar7 = *(longlong *)(*param_1 + 0x38);
  if (lVar7 != 0) {
    lVar10 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar7 = FUN_140f9aee0(lVar7);
      if ((lVar7 != 0) && (local_418 != 0)) {
        uVar11 = FUN_140cfcd10(lVar8,local_2c8,1);
        uVar11 = FText::FromString(local_2b8,uVar11);
        FText::operator=(local_350,uVar11);
        if (local_2b0 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_2b0 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_2b0)(local_2b0);
            LOCK();
            piVar1 = (int *)((longlong)local_2b0 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_2b0 + 8))(local_2b0,1);
            }
          }
        }
        if (local_2c8[0] != 0) {
          FMemory::Free();
        }
        local_388 = local_418;
        plStack_380 = uStack_410;
        if (uStack_410 != (longlong *)0x0) {
          LOCK();
          *(int *)(uStack_410 + 1) = (int)uStack_410[1] + 1;
          UNLOCK();
        }
        FUN_140d84620(*(longlong *)(lVar7 + 0x478) + 0x1f8,&local_368,&local_388);
        plVar3 = plStack_380;
        if (plStack_380 != (longlong *)0x0) {
          LOCK();
          plVar9 = plStack_380 + 1;
          lVar8 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plStack_380)(plStack_380);
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
        if (local_368 == (longlong *)0x0) {
          local_378 = local_418;
          plStack_370 = uStack_410;
          if (uStack_410 != (longlong *)0x0) {
            LOCK();
            *(int *)(uStack_410 + 1) = (int)uStack_410[1] + 1;
            UNLOCK();
          }
          FUN_140d94190(*(longlong *)(lVar7 + 0x478) + 0x1f8,&local_378);
          plVar3 = plStack_370;
          if (plStack_370 != (longlong *)0x0) {
            LOCK();
            plVar9 = plStack_370 + 1;
            lVar8 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plStack_370)(plStack_370);
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
        }
        else {
          local_358 = (**(code **)(*local_368 + 0x10))();
        }
        local_3b0 = local_418;
        local_3a8 = uStack_410;
        if (uStack_410 != (longlong *)0x0) {
          LOCK();
          *(int *)(uStack_410 + 1) = (int)uStack_410[1] + 1;
          UNLOCK();
        }
        local_3a0 = 0;
        local_3b8 = &PTR_FUN_143f740c8;
        local_398 = 0;
        FUN_140d89730(local_288,&local_3b8,lVar7,0);
        FUN_1404bf980(&local_3b8);
        if (local_360 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_360 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_360)(local_360);
            LOCK();
            piVar1 = (int *)((longlong)local_360 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_360 + 8))(local_360,1);
            }
          }
        }
      }
      goto LAB_1410b9d87;
    }
  }
  lVar7 = 0;
LAB_1410b9d87:
  local_438 = local_3e8;
  FUN_1410efe00(*param_1,lVar7,local_288,&local_358);
  plVar3 = uStack_410;
  if (uStack_410 != (longlong *)0x0) {
    LOCK();
    plVar9 = uStack_410 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*uStack_410)(uStack_410);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*uStack_410 + 8))(uStack_410,1);
      }
    }
  }
  FUN_140ce1610(local_68);
  if (local_78 != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (local_88);
  if (local_a8 != 0) {
    FMemory::Free();
  }
  FUN_140d65960(local_1f8);
  if (local_230 != 0) {
    FMemory::Free();
  }
  if (local_240 != 0) {
    FMemory::Free();
  }
  FUN_1404bf980(local_280);
  if (local_3c8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_3c8 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_3c8)(local_3c8);
      LOCK();
      piVar1 = (int *)((longlong)local_3c8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_3c8 + 8))(local_3c8,1);
      }
    }
  }
  if (local_3e0[0] != 0) {
    FMemory::Free();
  }
  FUN_1410b44f0(&local_358);
  return;
}



// FUNCTION 1410b9ee0 FUN_1410b9ee0 body=125 status=ok
// SIG undefined FUN_1410b9ee0(void)

void FUN_1410b9ee0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x1068) < 1) {
    if ((((*(longlong *)(lVar3 + 0x1048) != 0) && (cVar1 = FUN_140cb6290(), cVar1 != '\0')) &&
        (lVar3 = FUN_1410ae560(*param_1), lVar3 != 0)) &&
       (iVar2 = FUN_1406ab3e0(*(undefined8 *)(*param_1 + 0x1048)), iVar2 == *(int *)(lVar3 + 0xe8)))
    {
      FUN_140fd5570(*(undefined8 *)(*param_1 + 0x1048));
    }
    return;
  }
  FUN_1410e46c0(lVar3);
  return;
}



// FUNCTION 1410b9f60 FUN_1410b9f60 body=140 status=ok
// SIG undefined FUN_1410b9f60(void)

void FUN_1410b9f60(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  uVar4 = 0;
  uVar3 = uVar4;
  if (*(int *)(param_1 + 10) != 0) {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 4;
    }
    if (plVar5 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar5 + 8))();
    }
  }
  uVar2 = (*(code *)param_1[2])(uVar3);
  puVar1 = *(undefined8 **)*param_1;
  *(undefined1 *)(puVar1 + 0xc) = uVar2;
  *(undefined1 *)(puVar1 + 0xb) = 1;
  (**(code **)(*(longlong *)puVar1[10] + 0x10))();
  if (*(int *)(puVar1 + 8) != 0) {
    plVar5 = (longlong *)puVar1[6];
    if ((longlong *)puVar1[6] == (longlong *)0x0) {
      plVar5 = puVar1 + 2;
    }
    if (plVar5 != (longlong *)0x0) {
      if (plVar5 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar5 + 8))();
      }
      (*(code *)*puVar1)(uVar4);
    }
  }
  return;
}



// FUNCTION 1410b9ff0 FUN_1410b9ff0 body=962 status=ok
// SIG undefined FUN_1410b9ff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410b9ff0(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  longlong *local_98;
  uint local_90 [2];
  longlong local_88;
  longlong local_80;
  int local_78;
  int local_70;
  char local_6c;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  undefined8 local_40;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar9 = *param_1;
  local_98 = param_1;
  if (*(int *)(lVar9 + 0x76c) < *(int *)(lVar9 + 0x710)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo();
    lVar9 = *param_1;
  }
  iVar16 = *(int *)(lVar9 + 0x710);
  iVar17 = *(int *)(lVar9 + 0x768);
  iVar7 = iVar17 + iVar16;
  *(int *)(lVar9 + 0x768) = iVar7;
  if (*(int *)(lVar9 + 0x76c) < iVar7) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow((longlong *)(lVar9 + 0x760));
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*(longlong *)(lVar9 + 0x760) + (longlong)iVar17 * 8),0,(longlong)iVar16 << 3);
  plVar2 = (longlong *)*param_1;
  lVar9 = (**(code **)(*plVar2 + 0x148))(plVar2);
  if (lVar9 != 0) {
    local_a0 = FUN_1414b4c90();
    if (local_a0 != 0) {
      lVar10 = FUN_1414b4c90();
      lVar13 = local_a0;
      do {
        if (lVar13 == lVar10) goto LAB_1410ba0b1;
        lVar13 = *(longlong *)(lVar13 + 0x30);
      } while (lVar13 != 0);
    }
    local_a0 = 0;
LAB_1410ba0b1:
    local_90[0] = 5;
    local_38 = '\0';
    local_a8 = lVar9;
    FUN_14044bc80(&local_88,&local_a8);
    FUN_14045a130(local_90);
    if (local_6c == '\0') {
LAB_1410ba104:
      iVar16 = 0;
      lVar9 = 0;
      if (0 < (int)plVar2[0xe2]) {
        piVar15 = (int *)(plVar2[0xe1] + 8);
        do {
          if (*piVar15 == (int)*(undefined8 *)(local_60 + 0x18)) {
            if ((lVar9 < 0) || (*(int *)(*param_1 + 0x768) <= iVar16)) goto LAB_1410ba145;
            bVar3 = true;
            goto LAB_1410ba147;
          }
          iVar16 = iVar16 + 1;
          lVar9 = lVar9 + 1;
          piVar15 = piVar15 + 0xc;
        } while (iVar16 < (int)plVar2[0xe2]);
      }
      lVar9 = -1;
LAB_1410ba145:
      bVar3 = false;
LAB_1410ba147:
      if (bVar3) {
        *(longlong *)(*(longlong *)(*param_1 + 0x760) + lVar9 * 8) = local_60;
      }
      local_a8 = local_88;
      iVar16 = local_70 + 1;
      if (iVar16 < local_50 + local_78) {
        lVar9 = (longlong)iVar16 * 8;
        iVar17 = local_50;
        iVar7 = local_78;
        do {
          if (iVar16 < iVar7) {
            lVar13 = *(longlong *)(local_80 + lVar9);
          }
          else {
            lVar13 = *(longlong *)(local_58 + (longlong)(iVar16 - iVar7) * 8);
          }
          local_68 = local_68 + 1;
          if ((lVar13 != 0) &&
             (lVar10 = AActor::GetLevel(lVar13), iVar17 = local_50, iVar7 = local_78, lVar10 != 0))
          {
            if ((local_90[0] & 1) != 0) {
              iVar1 = *(int *)(lVar13 + 0xc);
              if (iVar1 < (int)DAT_1469e91c4) {
                uVar14 = iVar1 >> 0x1f & 0xffff;
                uVar8 = iVar1 + uVar14;
                lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                         (longlong)(int)((uVar8 & 0xffff) - uVar14) * 0x18;
              }
              else {
                lVar12 = 0;
              }
              if ((*(uint *)(lVar12 + 8) >> 0x1d & 1) != 0) goto LAB_1410ba316;
            }
            if (((local_90[0] >> 1 & 1) == 0) ||
               (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(lVar13), iVar17 = local_50,
               iVar7 = local_78, cVar6 != '\0')) {
              if ((local_90[0] >> 2 & 1) != 0) {
                if (((*(byte *)(lVar10 + 0x204) & 0x10) == 0) &&
                   ((*(byte *)(lVar10 + 0x205) & 0x10) == 0)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                piVar15 = *(int **)(lVar10 + 600);
                if (((*(longlong *)(lVar10 + 0xc0) == 0) ||
                    (piVar11 = (int *)UWorld::GetActiveLevelCollection(), piVar11 == (int *)0x0)) ||
                   (piVar15 == piVar11)) {
                  bVar4 = true;
                }
                else {
                  bVar4 = false;
                }
                if ((piVar15 == (int *)0x0) || (*piVar15 == 2)) {
                  bVar5 = true;
                }
                else {
                  bVar5 = false;
                }
                if ((bVar4) || (bVar4 = false, bVar5)) {
                  bVar4 = true;
                }
                iVar17 = local_50;
                iVar7 = local_78;
                if ((!bVar3) || (!bVar4)) goto LAB_1410ba316;
              }
              lVar12 = ULevel::GetWorld(lVar10);
              lVar10 = local_a8;
              iVar17 = local_50;
              iVar7 = local_78;
              if (lVar12 == local_a8) {
                lVar12 = AActor::GetLevel(lVar13);
                if (lVar12 == *(longlong *)(lVar10 + 0x30)) goto LAB_1410ba39b;
                lVar10 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                iVar17 = local_50;
                iVar7 = local_78;
                if (!bVar3) goto LAB_1410ba39b;
              }
            }
          }
LAB_1410ba316:
          iVar16 = iVar16 + 1;
          lVar9 = lVar9 + 8;
          if (iVar17 + iVar7 <= iVar16) break;
        } while( true );
      }
      local_60 = 0;
      local_6c = '\x01';
    }
LAB_1410ba34e:
    if (local_38 != '\0') {
      local_38 = 0;
      UWorld::RemoveOnActorSpawnedHandler(local_88,local_40);
      if (local_58 != 0) {
        FMemory::Free();
      }
      if (local_80 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
LAB_1410ba39b:
  param_1 = local_98;
  local_70 = iVar16;
  local_60 = lVar13;
  if (local_6c != '\0') goto LAB_1410ba34e;
  goto LAB_1410ba104;
}



// FUNCTION 1410ba3c0 FUN_1410ba3c0 body=268 status=ok
// SIG undefined FUN_1410ba3c0(void)

void FUN_1410ba3c0(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
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
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar7;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) & 0x30000000) == 0) {
      bVar2 = true;
      goto LAB_1410ba449;
    }
  }
  bVar2 = false;
LAB_1410ba449:
  if ((bVar2) && (lVar5 = FUN_140eac060(*param_1), lVar5 != 0)) {
    lVar6 = UUGButton::GetPrivateStaticClass();
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
      FUN_1410ec740(*param_1 + 0xc50,*(undefined4 *)((longlong)param_1 + 0x14),param_1 + 2,
                    lVar5 + 0x678);
      FUN_1410c6460(*param_1);
      FUN_1410f5ae0(*param_1);
    }
  }
  return;
}



// FUNCTION 1410ba4d0 FUN_1410ba4d0 body=1666 status=ok
// SIG undefined FUN_1410ba4d0(void)

void FUN_1410ba4d0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 == '\0') {
    return;
  }
  lVar8 = FWeakObjectPtr::Get(&local_res10);
  uVar13 = 0;
  iVar6 = 0;
  iVar5 = *(int *)(lVar8 + 0xc);
  uVar9 = uVar13;
  if (iVar5 < (int)DAT_1469e91c4) {
    uVar12 = iVar5 >> 0x1f & 0xffff;
    uVar4 = iVar5 + uVar12;
    uVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
            (longlong)(int)((uVar4 & 0xffff) - uVar12) * 0x18;
  }
  if ((*(uint *)(uVar9 + 8) & 0x30000000) != 0) {
    return;
  }
  FUN_142ecdac0(*param_1);
  lVar8 = *param_1;
  if (*(char *)(lVar8 + 0x2e8) != '\0') {
    return;
  }
  if (*(char *)(lVar8 + 0xc48) == '\x02') {
    return;
  }
  if (*(longlong *)(lVar8 + 0x5b0) == 0) {
    return;
  }
  lVar10 = FUN_1410cc6b0(lVar8,*(undefined2 *)(lVar8 + 0xc49));
  local_e8 = 0;
  local_e0 = 0;
  iVar5 = iVar6;
  if (*(longlong *)(lVar8 + 0x1048) == 0) {
LAB_1410ba72a:
    if (*(char *)(*param_1 + 0xc48) == '\0') {
      iVar7 = 0;
      if ((iVar5 < 0) && (local_e0 = (ulonglong)local_e0._4_4_ << 0x20, iVar7 = iVar6, iVar5 != 0))
      {
        TArray<void_*,FDefaultAllocator>::ResizeTo(&local_e8,0);
        iVar7 = (uint)local_e0;
        iVar5 = local_e0._4_4_;
      }
      iVar6 = iVar7 + 1;
      local_e0._0_4_ = iVar6;
      if (iVar5 < iVar6) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_e8,iVar7);
      }
      *(undefined8 *)(local_e8 + (longlong)iVar7 * 8) = DAT_146874c78;
      FUN_142f0fcd0(*(undefined8 *)(*param_1 + 0x5b0),&local_e8,1);
      if (((int)local_e0._4_4_ < 0) && (local_e0._0_4_ = 0, local_e0._4_4_ != 0)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(&local_e8,0);
        uVar13 = (ulonglong)(uint)local_e0;
      }
      iVar5 = (int)uVar13 + 1;
      local_e0 = CONCAT44(local_e0._4_4_,iVar5);
      if ((int)local_e0._4_4_ < iVar5) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_e8,uVar13);
      }
      *(undefined8 *)(local_e8 + (longlong)(int)uVar13 * 8) = DAT_146874c70;
      FUN_142f0fcd0(*(undefined8 *)(*param_1 + 0x5b0),&local_e8,1);
      uVar11 = FUN_1404b03b0();
      FUN_142ee25d0(*(undefined8 *)(*param_1 + 0x5b0),DAT_146874c78,uVar11,1);
      uVar11 = FUN_1404b03b0();
      FUN_142ee25d0(*(undefined8 *)(*param_1 + 0x5b0),DAT_146874c70,uVar11,1);
      uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_90,L"Select",L"GFxCatchARideMenu",L"ChooseText");
      FUN_142ee2030(*(undefined8 *)(*param_1 + 0x5b0),DAT_146b3e2a0,uVar11);
      local_70 = local_88;
LAB_1410baa03:
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_70 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar2 = (int *)((longlong)local_70 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
    }
    else if (*(char *)(*param_1 + 0xc48) == '\x01') {
      if ((iVar5 < 0) && (local_e0 = (ulonglong)local_e0._4_4_ << 0x20, iVar6 = 0, iVar5 != 0)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(&local_e8,0);
        iVar6 = (uint)local_e0;
        iVar5 = local_e0._4_4_;
      }
      iVar7 = iVar6 + 1;
      local_e0._0_4_ = iVar7;
      if (iVar5 < iVar7) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_e8,iVar6);
      }
      *(undefined8 *)(local_e8 + (longlong)iVar6 * 8) = DAT_146874c78;
      FUN_142f0fcd0(*(undefined8 *)(*param_1 + 0x5b0),&local_e8,1);
      if (((int)local_e0._4_4_ < 0) && (local_e0._0_4_ = 0, local_e0._4_4_ != 0)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(&local_e8,0);
        uVar13 = (ulonglong)(uint)local_e0;
      }
      iVar5 = (int)uVar13 + 1;
      local_e0 = CONCAT44(local_e0._4_4_,iVar5);
      if ((int)local_e0._4_4_ < iVar5) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_e8,uVar13);
      }
      *(undefined8 *)(local_e8 + (longlong)(int)uVar13 * 8) = DAT_146874c70;
      FUN_142f0fcd0(*(undefined8 *)(*param_1 + 0x5b0),&local_e8,1);
      uVar11 = FUN_1404b03b0();
      FUN_142ee25d0(*(undefined8 *)(*param_1 + 0x5b0),DAT_146874c78,uVar11,1);
      uVar11 = FUN_1404b03b0();
      FUN_142ee25d0(*(undefined8 *)(*param_1 + 0x5b0),DAT_146874c70,uVar11,1);
      if ((*(char *)(*param_1 + 0xc4a) == '\b') ||
         (((*(longlong *)(lVar10 + 0xe0) != 0 && (cVar3 = FUN_1410d0000(), cVar3 == '\0')) &&
          (cVar3 = FUN_1410cffa0(*(undefined8 *)(lVar10 + 0xe0)), cVar3 == '\0')))) {
        uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_78,L"Select",L"GFxCatchARideMenu",L"EquipText");
        FUN_142ee2030(*(undefined8 *)(*param_1 + 0x5b0),DAT_146b3e2a0,uVar11);
        goto LAB_1410baa03;
      }
    }
    cVar3 = FUN_1410c5a40(*param_1);
    if (cVar3 == '\0') goto LAB_1410baab0;
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_60,L"Deploy Vehicle",L"GFxCatchARideMenu",L"DeployVehicleText");
    FUN_142ee2030(*(undefined8 *)(*param_1 + 0x5b0),DAT_146874c48,uVar11);
  }
  else {
    cVar3 = FUN_140cb6290();
    if (cVar3 == '\0') {
      iVar5 = local_e0._4_4_;
      goto LAB_1410ba72a;
    }
    lVar8 = FUN_1410ae560(*param_1);
    if (lVar8 == 0) goto LAB_1410baab0;
    iVar5 = FUN_1406ab3e0(*(undefined8 *)(*param_1 + 0x1048));
    if ((iVar5 == *(int *)(lVar8 + 0xec)) && (*(char *)(*param_1 + 0xc4a) == '\x05')) {
      uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_d8,L"Select",L"GFxCatchARideMenu",L"ChooseText");
      FUN_142ee2030(*(undefined8 *)(*param_1 + 0x5b0),DAT_146b3e2a0,uVar11);
      local_58 = local_d0;
    }
    else if ((iVar5 == *(int *)(lVar8 + 0xf0)) &&
            ((*(longlong *)(lVar10 + 0xe0) != 0 && (cVar3 = FUN_1410d0000(), cVar3 == '\0')))) {
      uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_c0,L"Select",L"GFxCatchARideMenu",L"EquipText");
      FUN_142ee2030(*(undefined8 *)(*param_1 + 0x5b0),DAT_146b3e2a0,uVar11);
      local_58 = local_b8;
    }
    else {
      if ((iVar5 != *(int *)(lVar8 + 0xf4)) || (cVar3 = FUN_1410c5a40(*param_1), cVar3 == '\0'))
      goto LAB_1410baab0;
      uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_a8,L"Deploy Vehicle",L"GFxCatchARideMenu",L"DeployVehicleText");
      FUN_142ee2030(*(undefined8 *)(*param_1 + 0x5b0),DAT_146874c48,uVar11);
      local_58 = local_a0;
    }
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
LAB_1410baab0:
  uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (local_48,L"Close",L"GFxCatchARideMenu",L"BackOutTextText");
  FUN_142ee2030(*(undefined8 *)(*param_1 + 0x5b0),DAT_146b3e2b8,uVar11);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410bab60 FUN_1410bab60 body=229 status=ok
// SIG undefined FUN_1410bab60(void)

void FUN_1410bab60(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar1 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar3 = *(int *)(lVar4 + 0xc);
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar5 = iVar3 >> 0x1f & 0xffff;
      uVar2 = iVar3 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if (((((*(uint *)(lVar4 + 8) & 0x30000000) == 0) &&
         (lVar4 = FUN_1410ae560(*param_1), lVar4 != 0)) && (*(longlong *)(*param_1 + 0x1048) != 0))
       && ((cVar1 = FUN_140cb6290(), cVar1 != '\0' &&
           (iVar3 = FUN_1406ab3e0(*(undefined8 *)(*param_1 + 0x1048)),
           iVar3 == *(int *)(lVar4 + 0xf0))))) {
      FUN_140fd5570(*(undefined8 *)(*param_1 + 0x1048));
    }
  }
  return;
}



// FUNCTION 1410bac50 FUN_1410bac50 body=162 status=ok
// SIG undefined FUN_1410bac50(void)

void FUN_1410bac50(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
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
    if (((*(uint *)(lVar4 + 8) & 0x30000000) == 0) && (*(longlong *)(*param_1 + 0x1088) != 0)) {
      FUN_1410e97d0();
      return;
    }
  }
  return;
}



// FUNCTION 1410bad00 FUN_1410bad00 body=342 status=ok
// SIG undefined FUN_1410bad00(void)

void FUN_1410bad00(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_2 + 0x70);
  lVar2 = (longlong)*(int *)(param_2 + 0x78) * 0xf0 + lVar3;
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0xf0) {
    if ((*(longlong *)(lVar3 + 0x50) != 0) &&
       (TArray<FSoftObjectPath,FDefaultAllocator>::AddUniqueImpl<FSoftObjectPath_const_&>
                  (*param_1,lVar3 + 0x50), *(longlong *)(lVar3 + 0x78) != 0)) {
      TArray<FSoftObjectPath,FDefaultAllocator>::AddUniqueImpl<FSoftObjectPath_const_&>(*param_1);
    }
    if (*(longlong *)(lVar3 + 0xa0) != 0) {
      TArray<FSoftObjectPath,FDefaultAllocator>::AddUniqueImpl<FSoftObjectPath_const_&>(*param_1);
    }
    lVar1 = *(longlong *)(lVar3 + 0xb8);
    lVar4 = (longlong)*(int *)(lVar3 + 0xc0) * 0x68 + lVar1;
    for (; lVar1 != lVar4; lVar1 = lVar1 + 0x68) {
      if (*(longlong *)(lVar1 + 0x10) != 0) {
        TArray<FSoftObjectPath,FDefaultAllocator>::AddUniqueImpl<FSoftObjectPath_const_&>
                  (*param_1,lVar1 + 0x10);
      }
    }
  }
  lVar3 = *(longlong *)(param_2 + 0x80);
  lVar2 = (longlong)*(int *)(param_2 + 0x88) * 0x80 + lVar3;
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x80) {
    if (*(longlong *)(lVar3 + 0x50) != 0) {
      TArray<FSoftObjectPath,FDefaultAllocator>::AddUniqueImpl<FSoftObjectPath_const_&>
                (*param_1,lVar3 + 0x50);
    }
  }
  return;
}



// FUNCTION 1410bae60 FUN_1410bae60 body=304 status=ok
// SIG undefined FUN_1410bae60(void)

void FUN_1410bae60(undefined8 *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 local_28 [32];
  
  local_res10 = *(undefined4 *)(param_1 + 1);
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
      bVar2 = true;
      goto LAB_1410baee9;
    }
  }
  bVar2 = false;
LAB_1410baee9:
  if ((bVar2) && (lVar5 = FWeakObjectPtr::Get((longlong)param_1 + 0x14), lVar5 != 0)) {
    if (*(longlong *)(lVar5 + 0x150) != 0) {
      FUN_142ece5e0(*param_1,local_28);
      FUN_140591060(local_28);
    }
    lVar6 = FUN_140eac060(*param_1);
    if (lVar6 != 0) {
      lVar7 = UUGButton::GetPrivateStaticClass();
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
        FUN_1412f3e60(lVar6,*(undefined1 *)(param_1 + 2),lVar5);
      }
    }
  }
  return;
}



// FUNCTION 1410baf90 FUN_1410baf90 body=251 status=ok
// SIG undefined FUN_1410baf90(void)

undefined8 * FUN_1410baf90(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_res18 = *(undefined4 *)(param_1 + 1);
  local_res1c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res18);
  lVar5 = 0;
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res18);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar7;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
    }
    if ((*(uint *)(lVar5 + 8) & 0x30000000) == 0) {
      local_18 = 0;
      local_10 = 0;
      uVar6 = FUN_1410cb460(*param_1);
      FUN_1410cd3d0(*param_1,uVar6,&local_18);
      *param_2 = local_18;
      *(undefined4 *)(param_2 + 1) = (undefined4)local_10;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_10._4_4_;
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1410bb090 FUN_1410bb090 body=247 status=ok
// SIG undefined FUN_1410bb090(void)

void FUN_1410bb090(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      cVar2 = FWeakObjectPtr::IsValid(*param_1 + 0xc10);
      if (cVar2 != '\0') {
        uVar5 = FWeakObjectPtr::Get(*param_1 + 0xc10);
        FUN_140e80860(uVar5,*param_1 + 0x1060,*(undefined1 *)(*param_1 + 0x800));
      }
      if (0 < *(int *)(*param_1 + 0x1068)) {
        if ((*(longlong *)(*param_1 + 0x1048) != 0) && (cVar2 = FUN_140cb6290(), cVar2 != '\0')) {
          return;
        }
        FUN_1410e46c0(*param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1410bb190 FUN_1410bb190 body=1388 status=ok
// SIG undefined FUN_1410bb190(void)

void FUN_1410bb190(longlong *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  void *_Src;
  undefined2 *puVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  uint uVar16;
  longlong *plVar17;
  undefined8 local_res8;
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_58;
  undefined1 local_50 [24];
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(&local_res8);
  FUN_14172a400(&local_res8);
  cVar6 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar6 == '\0') {
LAB_1410bb227:
    bVar5 = false;
  }
  else {
    lVar10 = FWeakObjectPtr::Get(&local_res10);
    iVar3 = *(int *)(lVar10 + 0xc);
    lVar10 = 0;
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar16 = iVar3 >> 0x1f & 0xffff;
      uVar9 = iVar3 + uVar16;
      lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
               (longlong)(int)((uVar9 & 0xffff) - uVar16) * 0x18;
    }
    if ((*(uint *)(lVar10 + 8) & 0x30000000) != 0) goto LAB_1410bb227;
    bVar5 = true;
  }
  if (!bVar5) {
    return;
  }
  if (*(char *)(*param_1 + 0x928) == '\0') {
    return;
  }
  lVar10 = *param_1 + 0xdd8;
  lVar11 = FUN_140eac060();
  if (lVar11 == 0) {
LAB_1410bb29e:
    lVar11 = 0;
  }
  else {
    lVar12 = UUGButton::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
         ) != lVar12 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_1410bb29e;
  }
  lVar12 = *param_1;
  puVar1 = (undefined8 *)(lVar12 + 0x1180);
  *(undefined8 *)(lVar12 + 0x1178) = *(undefined8 *)(lVar12 + 0x11d8);
  if (puVar1 != (undefined8 *)(lVar12 + 0x11e0)) {
    iVar3 = *(int *)(lVar12 + 0x11e8);
    _Src = *(void **)(lVar12 + 0x11e0);
    *(int *)(lVar12 + 0x1188) = iVar3;
    if ((iVar3 == 0) && (*(int *)(lVar12 + 0x118c) == 0)) {
      *(undefined4 *)(lVar12 + 0x118c) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar3);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar3 << 3);
    }
  }
  *(undefined8 *)(lVar12 + 0x1190) = *(undefined8 *)(lVar12 + 0x11f0);
  *(undefined8 *)(lVar12 + 0x1198) = *(undefined8 *)(lVar12 + 0x11f8);
  *(undefined4 *)(lVar12 + 0x11a0) = *(undefined4 *)(lVar12 + 0x1200);
  *(undefined4 *)(lVar12 + 0x11a4) = *(undefined4 *)(lVar12 + 0x1204);
  *(undefined4 *)(lVar12 + 0x11a8) = *(undefined4 *)(lVar12 + 0x1208);
  local_58 = *(longlong *)(lVar12 + 0x1210);
  FString::FString(local_50,lVar12 + 0x1218);
  FSoftObjectPath::operator=(lVar12 + 0x11b0,&local_58);
  *(undefined1 *)(lVar12 + 0x11c8) = *(undefined1 *)(lVar12 + 0x1228);
  *(undefined1 *)(lVar12 + 0x11c9) = *(undefined1 *)(lVar12 + 0x1229);
  *(undefined4 *)(lVar12 + 0x11cc) = *(undefined4 *)(lVar12 + 0x122c);
  *(undefined4 *)(lVar12 + 0x11d0) = *(undefined4 *)(lVar12 + 0x1230);
  *(undefined4 *)(lVar12 + 0x11d4) = *(undefined4 *)(lVar12 + 0x1234);
  uVar13 = FUN_1410cac90(lVar10);
  *(undefined8 *)(*param_1 + 0x11d8) = uVar13;
  plVar14 = (longlong *)FUN_1410cc700(lVar10,&local_58);
  lVar12 = *param_1;
  plVar17 = (longlong *)(lVar12 + 0x11e0);
  if (plVar17 != plVar14) {
    if (*plVar17 != 0) {
      FMemory::Free();
    }
    *plVar17 = *plVar14;
    *plVar14 = 0;
    *(int *)(lVar12 + 0x11e8) = (int)plVar14[1];
    *(undefined4 *)(lVar12 + 0x11ec) = *(undefined4 *)((longlong)plVar14 + 0xc);
    plVar14[1] = 0;
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  puVar15 = (undefined4 *)FUN_1410caf30(lVar10,&local_res8,0,lVar11 + 0x678,0);
  *(undefined4 *)(*param_1 + 0x122c) = *puVar15;
  puVar15 = (undefined4 *)FUN_1410caf30(lVar10,&local_res8,1,lVar11 + 0x678,0);
  *(undefined4 *)(*param_1 + 0x1230) = *puVar15;
  puVar15 = (undefined4 *)FUN_1410caf30(lVar10,&local_res8,2,lVar11 + 0x678,0);
  *(undefined4 *)(*param_1 + 0x1234) = *puVar15;
  local_res8 = 0;
  *(undefined8 *)(*param_1 + 0x11f0) = 0;
  *(undefined8 *)(*param_1 + 0x11f8) = 0;
  lVar10 = *param_1;
  *(undefined4 *)(lVar10 + 0x1200) = 0xffffffff;
  *(undefined4 *)(lVar10 + 0x1204) = 0;
  *(undefined8 *)(lVar10 + 0x1210) = 0;
  *(undefined4 *)(lVar10 + 0x1220) = 0;
  if (0x7fffffff < *(uint *)(lVar10 + 0x1224)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo((undefined8 *)(lVar10 + 0x1218),0);
  }
  puVar4 = *(undefined2 **)(lVar10 + 0x1218);
  if (puVar4 != (undefined2 *)0x0) {
    *puVar4 = 0;
  }
  *(undefined4 *)(lVar10 + 0x1208) = 0;
  *(undefined1 *)(*param_1 + 0x1228) = 0;
  *(undefined1 *)(*param_1 + 0x1229) = 0;
  *(bool *)(*param_1 + 0x1228) = *(char *)(*param_1 + 0xc48) == '\x01';
  lVar10 = *param_1;
  bVar2 = *(byte *)(lVar10 + 0xc4a);
  cVar6 = *(char *)(lVar10 + 0xc48);
  local_res8._0_2_ = CONCAT11(bVar2,cVar6);
  if (*(char *)(lVar10 + 0x1228) != '\0') {
    lVar10 = FUN_1410cc6b0(lVar10,*(undefined2 *)(lVar10 + 0xc49));
    uVar7 = FUN_1410cffa0(*(undefined8 *)(lVar10 + 0xe0));
    *(undefined1 *)(*param_1 + 0x1229) = uVar7;
    lVar10 = *param_1;
    if (bVar2 < 9) {
      plVar17 = *(longlong **)(lVar10 + 0x11e0);
      plVar14 = plVar17 + *(int *)(lVar10 + 0x11e8);
      for (; plVar17 != plVar14; plVar17 = plVar17 + 1) {
        if (*(byte *)(*plVar17 + 0x38) == bVar2) {
          *(longlong *)(lVar10 + 0x11f8) = *plVar17;
          break;
        }
      }
    }
    else {
      *(undefined8 *)(lVar10 + 0x11f0) = *(undefined8 *)(lVar10 + 0x11d8);
    }
    lVar10 = *param_1;
    if ((*(longlong *)(lVar10 + 0x11f8) != 0) || (*(longlong *)(lVar10 + 0x11f0) != 0)) {
      if (*(char *)(lVar10 + 0x1229) == '\0') {
        lVar11 = lVar10 + 0x718;
      }
      else {
        if (((*(longlong *)(lVar10 + 0x1198) != *(longlong *)(lVar10 + 0x11f8)) ||
            (*(longlong *)(lVar10 + 0x1190) != *(longlong *)(lVar10 + 0x11f0))) ||
           (*(char *)(lVar10 + 0x11c9) == *(char *)(lVar10 + 0x1229))) goto LAB_1410bb62f;
        lVar11 = lVar10 + 0x6f0;
      }
      TSoftObjectPtr<UCurveLinearColor>::operator=(lVar10 + 0x1200,lVar11);
    }
  }
LAB_1410bb62f:
  lVar10 = *param_1;
  if ((cVar6 != *(char *)(lVar10 + 0x1288)) || (bVar2 != *(byte *)(lVar10 + 0x1289))) {
    *(undefined1 *)(lVar10 + 0x831) = 1;
    lVar10 = *param_1;
  }
  cVar8 = FUN_1410cfe90(lVar10,0);
  if (cVar8 != '\0') {
    FUN_1411f9940(*param_1 + 0x830,*param_1 + 0x1238,1);
    lVar10 = *param_1;
    lVar11 = *(longlong *)(lVar10 + 0x11d8);
    if (lVar11 != 0) {
      if ((*(char *)(lVar10 + 0xc48) == '\x01') && (bVar2 < 9)) {
        uVar13 = *(undefined8 *)(lVar11 + 0x730 + (ulonglong)bVar2 * 8);
      }
      else {
        uVar13 = *(undefined8 *)(lVar11 + 0x728);
      }
      FUN_1411f9b50(lVar10 + 0x830,uVar13);
    }
  }
  lVar10 = *param_1;
  if ((cVar6 != *(char *)(lVar10 + 0x1288)) || (bVar2 != *(byte *)(lVar10 + 0x1289))) {
    *(undefined8 *)(lVar10 + 0x12b0) = 0;
    FUN_1411eadd0(lVar10 + 0x830);
    lVar10 = *param_1;
  }
  *(undefined2 *)(lVar10 + 0x1288) = (undefined2)local_res8;
  return;
}



// FUNCTION 1410bb700 FUN_1410bb700 body=162 status=ok
// SIG undefined FUN_1410bb700(void)

void FUN_1410bb700(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
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
      *(undefined1 *)(*param_1 + 0xc48) = 2;
      FUN_1410e8c90(*param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 1410bb7b0 FUN_1410bb7b0 body=1248 status=ok
// SIG undefined FUN_1410bb7b0(void)

void FUN_1410bb7b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 local_res8;
  undefined1 local_res10;
  undefined1 local_res18 [8];
  undefined4 local_res20;
  undefined4 local_res24;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  
  local_res20 = *(undefined4 *)(param_1 + 8);
  local_res24 = *(undefined4 *)(param_1 + 0xc);
  FUN_141729b50(local_res18);
  FUN_14172a400(local_res18);
  cVar4 = FWeakObjectPtr::IsValid(&local_res20);
  if (cVar4 != '\0') {
    lVar6 = FWeakObjectPtr::Get(&local_res20);
    uVar10 = 0;
    iVar3 = *(int *)(lVar6 + 0xc);
    uVar7 = uVar10;
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar9 = iVar3 >> 0x1f & 0xffff;
      uVar5 = iVar3 + uVar9;
      uVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar9) * 0x18;
    }
    if (((*(uint *)(uVar7 + 8) & 0x30000000) == 0) &&
       (lVar6 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x10)), lVar6 != 0)) {
      lVar6 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x10));
      iVar3 = *(int *)(lVar6 + 0xc);
      uVar7 = uVar10;
      if (iVar3 < (int)DAT_1469e91c4) {
        uVar9 = iVar3 >> 0x1f & 0xffff;
        uVar5 = iVar3 + uVar9;
        uVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                (longlong)(int)((uVar5 & 0xffff) - uVar9) * 0x18;
      }
      if ((*(uint *)(uVar7 + 8) & 0x30000000) == 0) {
        uVar11 = 0;
        uVar12 = 0;
        uVar13 = 0;
        uVar14 = 0;
        local_108 = 0;
        local_100 = 0;
        local_f8 = 0;
        local_res8 = 0;
        local_res10 = 0;
        if (*(char *)(param_1 + 0x2c) != '\0') {
          local_res8 = *(undefined1 *)(param_1 + 0x25);
          uVar10 = (ulonglong)*(byte *)(param_1 + 0x20);
          uVar13 = *(undefined1 *)(param_1 + 0x21);
          uVar14 = *(undefined1 *)(param_1 + 0x22);
          uVar11 = *(undefined1 *)(param_1 + 0x23);
          uVar12 = *(undefined1 *)(param_1 + 0x24);
          local_res10 = *(undefined1 *)(param_1 + 0x26);
        }
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_f0,L"Game Completion",L"GFxVaultHunterProfileCard",
                           L"StatGameProgress");
        FUN_1410c39c0(&local_108,uVar8,uVar10);
        if (local_e8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_e8 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_e8)(local_e8);
            LOCK();
            piVar2 = (int *)((longlong)local_e8 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_e8 + 8))(local_e8,1);
            }
          }
        }
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_d8,L"Weapons",L"GFxVaultHunterProfileCard",L"StatWeapons");
        FUN_1410c39c0(&local_108,uVar8,uVar13);
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_d0 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar2 = (int *)((longlong)local_d0 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_d0 + 8))(local_d0,1);
            }
          }
        }
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_c0,L"Enemies",L"GFxVaultHunterProfileCard",L"StatEnemies");
        FUN_1410c39c0(&local_108,uVar8,uVar14);
        if (local_b8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_b8 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_b8)(local_b8);
            LOCK();
            piVar2 = (int *)((longlong)local_b8 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_b8 + 8))(local_b8,1);
            }
          }
        }
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_a8,L"Crew",L"GFxVaultHunterProfileCard",L"StatCrew");
        FUN_1410c39c0(&local_108,uVar8,uVar11);
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_a0 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar2 = (int *)((longlong)local_a0 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_a0 + 8))(local_a0,1);
            }
          }
        }
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_90,L"Exploration",L"GFxVaultHunterProfileCard",L"StatExploration");
        FUN_1410c39c0(&local_108,uVar8,uVar12);
        if (local_88 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_88 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_78,L"Proving Grounds",L"GFxVaultHunterProfileCard",
                           L"StatProvingGrounds");
        FUN_1410c39c0(&local_108,uVar8,local_res8);
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_70 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar2 = (int *)((longlong)local_70 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_70 + 8))(local_70,1);
            }
          }
        }
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_60,L"Slaughter",L"GFxVaultHunterProfileCard",L"StataSlaughter");
        FUN_1410c39c0(&local_108,uVar8,local_res10);
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_58 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_58)(local_58);
            LOCK();
            piVar2 = (int *)((longlong)local_58 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_58 + 8))(local_58,1);
            }
          }
        }
        uVar5 = *(uint *)(param_1 + 0x28);
        if (uVar5 != 0) {
          local_f8 = CONCAT44((int)(float)((ulonglong)
                                           (uVar5 + (int)(float)((ulonglong)uVar5 / 0xe10) * -0xe10)
                                          / 0x3c),(int)(float)((ulonglong)uVar5 / 0xe10));
        }
        uVar8 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x10));
        FUN_1410f2370(uVar8,&local_108);
        TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>::
        ~TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>(&local_108);
      }
    }
  }
  return;
}



// FUNCTION 1410bbc90 FUN_1410bbc90 body=442 status=ok
// SIG undefined FUN_1410bbc90(void)

void FUN_1410bbc90(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong local_68 [3];
  int local_50;
  undefined4 local_4c;
  longlong local_48 [4];
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar3 = *(longlong *)(*param_1 + 0x6e0);
  if (lVar3 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      bVar5 = true;
      bVar4 = false;
      plVar7 = (longlong *)FUN_140cfcd10(lVar3,local_48 + 2,1,1);
      goto LAB_1410bbd2b;
    }
  }
  bVar5 = false;
  bVar4 = true;
  local_48[0] = 0;
  local_48[1] = 0;
  plVar7 = local_48;
LAB_1410bbd2b:
  local_68[2] = *plVar7;
  *plVar7 = 0;
  local_50 = (int)plVar7[1];
  local_4c = *(undefined4 *)((longlong)plVar7 + 0xc);
  plVar7[1] = 0;
  if (bVar4) {
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  if ((bVar5) && (local_48[2] != 0)) {
    FMemory::Free();
  }
  if (1 < local_50) {
    local_68[0] = 0;
    local_68[1] = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_68[0],0xb,"playerName",0xb,0x3f);
    uVar8 = FText::FromString(local_28,local_68 + 2);
    FUN_142ed5290(*param_1,local_68,uVar8);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_20 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
    if (local_68[0] != 0) {
      FMemory::Free();
    }
  }
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410bbe50 FUN_1410bbe50 body=2114 status=ok
// SIG undefined FUN_1410bbe50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410bbe50(undefined8 *param_1,byte param_2,longlong *param_3,char param_4,longlong *param_5
                  )

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined1 auStack_158 [32];
  uint local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined1 local_118;
  byte local_108 [8];
  longlong *local_100;
  char local_f8;
  int local_f4;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  longlong *local_a8;
  byte *local_a0;
  longlong **local_98;
  longlong *local_90;
  longlong **local_88;
  longlong local_78;
  longlong lStack_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar13 = (longlong *)*param_3;
  lVar6 = 0;
  local_a8 = plVar13 + (longlong)(int)param_3[1] * 0x1e;
  local_f4 = 0;
  if (plVar13 != local_a8) {
    local_f0 = 0;
    local_108[0] = param_2;
    local_f8 = param_4;
    do {
      local_100 = (longlong *)0x0;
      if (plVar13[10] == 0) {
        local_d0 = 0;
        lVar7 = lVar6;
        if (plVar13[0x14] != 0) {
          lVar6 = *plVar13;
          local_c8 = 0;
          uVar12 = *(undefined8 *)*param_1;
          if (lVar6 == 0) {
            FUN_1417846f0(uVar12,
                          L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                         );
          }
          uVar4 = FUN_142a232e0();
          local_118 = 0;
          local_120 = 0;
          local_128 = 0;
          local_130 = 0;
          local_138 = 0;
          plVar5 = (longlong *)FUN_1417985e0(uVar4,uVar12,lVar6,0);
          lVar6 = FWeakObjectPtr::Get();
          if (lVar6 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != (int)plVar13[0x13]) && (local_c0 = 0, plVar13[0x14] != 0)) {
              lVar6 = FUN_141796df0();
              FWeakObjectPtr::operator=(plVar13 + 0x12,lVar6);
              if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                *(int *)(plVar13 + 0x13) = DAT_1464b56f4;
              }
              lVar6 = FWeakObjectPtr::Get(plVar13 + 0x12);
              if (lVar6 != 0) goto LAB_1410bc1df;
            }
LAB_1410bc215:
            lVar6 = 0;
          }
          else {
LAB_1410bc1df:
            lVar7 = UNodeMappingContainer::StaticClass();
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (!bVar1) goto LAB_1410bc215;
          }
          (**(code **)(*plVar5 + 0x928))(plVar5,lVar6);
          FUN_1423df820(plVar5,1);
          lVar7 = local_f0;
          local_100 = plVar5;
        }
      }
      else {
        lVar6 = *plVar13;
        local_e8 = 0;
        uVar12 = *(undefined8 *)*param_1;
        if (lVar6 == 0) {
          FUN_1417846f0(uVar12,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
        }
        uVar4 = FUN_142a07000();
        local_118 = 0;
        local_120 = 0;
        local_128 = 0;
        local_130 = 0;
        local_138 = 0;
        plVar5 = (longlong *)FUN_1417985e0(uVar4,uVar12,lVar6,0);
        lVar6 = FWeakObjectPtr::Get();
        if (lVar6 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != (int)plVar13[9]) && (local_e0 = 0, plVar13[10] != 0)) {
            lVar6 = FUN_141796df0();
            FWeakObjectPtr::operator=(plVar13 + 8,lVar6);
            if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(plVar13 + 9) = DAT_1464b56f4;
            }
            lVar6 = FWeakObjectPtr::Get(plVar13 + 8);
            if (lVar6 != 0) goto LAB_1410bbfbf;
          }
LAB_1410bbff5:
          lVar6 = 0;
        }
        else {
LAB_1410bbfbf:
          lVar7 = USkeleton::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_1410bbff5;
        }
        (**(code **)(*plVar5 + 0x930))(plVar5,lVar6,1);
        lVar6 = FWeakObjectPtr::Get();
        if (lVar6 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != (int)plVar13[0xe]) && (local_d8 = 0, plVar13[0xf] != 0)) {
            lVar6 = FUN_141796df0();
            FWeakObjectPtr::operator=(plVar13 + 0xd,lVar6);
            if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(plVar13 + 0xe) = DAT_1464b56f4;
            }
            lVar6 = FWeakObjectPtr::Get(plVar13 + 0xd);
            if (lVar6 != 0) goto LAB_1410bc083;
          }
        }
        else {
LAB_1410bc083:
          lVar7 = FUN_14171bfe0();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            lVar8 = FUN_1428eccf0();
            lVar7 = lVar6;
            do {
              if (lVar7 == lVar8) goto LAB_1410bc0d3;
              lVar7 = *(longlong *)(lVar7 + 0x30);
            } while (lVar7 != 0);
          }
        }
        lVar6 = 0;
LAB_1410bc0d3:
        FUN_1423b4b50(plVar5,lVar6);
        FUN_1423ba690(plVar5,1);
        lVar7 = local_f0;
        local_100 = plVar5;
      }
      lVar6 = lVar7;
      if (local_100 != (longlong *)0x0) {
        lVar8 = FWeakObjectPtr::Get(param_1[1] + 0x58c);
        if (lVar8 == 0) {
LAB_1410bc2a4:
          bVar2 = 1;
        }
        else {
          lVar9 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_1410bc2a4;
          bVar2 = APlayerController::IsPrimaryPlayer(lVar8);
        }
        *(byte *)((longlong)local_100 + 0x304) = *(byte *)((longlong)local_100 + 0x304) & 0xfe;
        *(byte *)((longlong)local_100 + 0x304) =
             bVar2 * '\x02' | *(byte *)((longlong)local_100 + 0x304) & 0xfd;
        *(byte *)((longlong)local_100 + 0x304) =
             (bVar2 ^ 1) << 2 | *(byte *)((longlong)local_100 + 0x304) & 0xfb;
        FUN_1423974c0(local_100,1);
        FUN_1423974f0(local_100,0);
        (**(code **)(*local_100 + 0x7a0))(local_100,0);
        (**(code **)(*local_100 + 0x638))(local_100,0);
        plVar5 = local_100;
        if (local_f8 != '\0') {
          iVar3 = (int)local_100[0x12];
          *(int *)(local_100 + 0x12) = iVar3 + 1;
          if (*(int *)((longlong)local_100 + 0x94) < iVar3 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (local_100 + 0x11,iVar3);
          }
          *(undefined8 *)(plVar5[0x11] + (longlong)iVar3 * 8) = DAT_146874eb8;
        }
        if (((int)plVar13[0x1a] == 0) && (*(int *)((longlong)plVar13 + 0xd4) == 0)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if ((!bVar1) || ((char)plVar13[0x19] != '\t')) {
          plVar5 = (longlong *)param_1[2];
          bVar2 = *(byte *)(plVar13 + 0x19);
          if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
            plVar10 = (longlong *)plVar5[8];
            if ((longlong *)plVar5[8] == (longlong *)0x0) {
              plVar10 = plVar5 + 7;
            }
            iVar3 = *(int *)((longlong)plVar10 +
                            ((longlong)(int)plVar5[9] - 1U & (ulonglong)bVar2) * 4);
            if (iVar3 != -1) {
              lVar8 = *plVar5;
              iVar11 = iVar3;
              do {
                lVar9 = lVar8 + (longlong)iVar11 * 0x18;
                if (*(byte *)(lVar8 + (longlong)iVar11 * 0x18) == bVar2) {
                  if (((iVar11 != -1) && (lVar9 != 0)) && (lVar9 != -8)) {
                    if (((int)plVar5[1] == *(int *)((longlong)plVar5 + 0x34)) || (iVar3 == -1))
                    goto LAB_1410bc571;
                    goto LAB_1410bc540;
                  }
                  break;
                }
                iVar11 = *(int *)(lVar9 + 0x10);
              } while (iVar11 != -1);
            }
          }
        }
        local_b8 = 0;
        uVar12 = *(undefined8 *)(*(longlong *)*param_1 + 0x168);
LAB_1410bc415:
        FUN_142382f60(local_100,uVar12,&DAT_146af29ec);
        local_78 = plVar13[2];
        lStack_70 = plVar13[3];
        local_68 = *(float *)(plVar13 + 4);
        fStack_64 = *(float *)((longlong)plVar13 + 0x24);
        fStack_60 = *(float *)(plVar13 + 5);
        fStack_5c = *(float *)((longlong)plVar13 + 0x2c);
        local_58 = (undefined4)plVar13[6];
        uStack_54 = *(undefined4 *)((longlong)plVar13 + 0x34);
        uStack_50 = (undefined4)plVar13[7];
        uStack_4c = *(undefined4 *)((longlong)plVar13 + 0x3c);
        if ((param_5 != (longlong *)0x0) && (local_f4 < (int)param_5[1])) {
          lVar8 = *param_5;
          local_f4 = local_f4 + 1;
          lVar6 = lVar7 + 1;
          local_68 = local_68 + *(float *)(lVar8 + lVar7 * 0xc);
          fStack_64 = fStack_64 + *(float *)(lVar8 + 4 + lVar7 * 0xc);
          fStack_60 = fStack_60 + *(float *)(lVar8 + 8 + lVar7 * 0xc);
          fStack_5c = fStack_5c + 0.0;
          local_f0 = lVar6;
        }
        local_138 = local_138 & 0xffffff00;
        FUN_142398770(local_100,&local_78,0);
        plVar5 = (longlong *)param_1[2];
        if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
          plVar10 = (longlong *)plVar5[8];
          if ((longlong *)plVar5[8] == (longlong *)0x0) {
            plVar10 = plVar5 + 7;
          }
          iVar3 = *(int *)((longlong)plVar10 +
                          ((longlong)(int)plVar5[9] - 1U & (ulonglong)local_108[0]) * 4);
          if (iVar3 != -1) {
            do {
              if (*(byte *)(*plVar5 + (longlong)iVar3 * 0x18) == local_108[0]) {
                if (iVar3 != -1) goto LAB_1410bc5b1;
                break;
              }
              iVar3 = *(int *)(*plVar5 + 0x10 + (longlong)iVar3 * 0x18);
            } while (iVar3 != -1);
          }
        }
        local_a0 = local_108;
        local_98 = &local_100;
        FUN_1404b9f20(plVar5,local_b0,&local_a0);
LAB_1410bc5b1:
        plVar5 = (longlong *)param_1[3];
        lVar7 = *plVar13;
        if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
          plVar10 = (longlong *)plVar5[8];
          if ((longlong *)plVar5[8] == (longlong *)0x0) {
            plVar10 = plVar5 + 7;
          }
          iVar3 = *(int *)((longlong)plVar10 +
                          ((longlong)((int)((ulonglong)lVar7 >> 0x20) + (int)lVar7) &
                          (longlong)(int)plVar5[9] - 1U) * 4);
          if (iVar3 != -1) {
            do {
              if (*(longlong *)(*plVar5 + (longlong)iVar3 * 0x18) == lVar7) {
                if (iVar3 != -1) goto LAB_1410bc641;
                break;
              }
              iVar3 = *(int *)(*plVar5 + 0x10 + (longlong)iVar3 * 0x18);
            } while (iVar3 != -1);
          }
        }
        local_88 = &local_100;
        local_90 = plVar13;
        TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
                  (plVar5,local_ac,&local_90);
      }
LAB_1410bc641:
      plVar13 = plVar13 + 0x1e;
    } while (plVar13 != local_a8);
  }
  return;
LAB_1410bc540:
  lVar9 = lVar8 + (longlong)iVar3 * 0x18;
  if (*(byte *)(lVar8 + (longlong)iVar3 * 0x18) != bVar2) goto code_r0x0001410bc551;
  if (iVar3 == -1) {
LAB_1410bc571:
    lVar9 = 0;
  }
  uVar12 = *(undefined8 *)(lVar9 + 8);
  goto LAB_1410bc415;
code_r0x0001410bc551:
  iVar3 = *(int *)(lVar9 + 0x10);
  uVar12 = _DAT_00000008;
  if (iVar3 == -1) goto LAB_1410bc415;
  goto LAB_1410bc540;
}



// FUNCTION 1410bc6a0 FUN_1410bc6a0 body=259 status=ok
// SIG undefined FUN_1410bc6a0(void)

ulonglong FUN_1410bc6a0(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  uVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if ((char)uVar4 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    iVar3 = *(int *)(lVar5 + 0xc);
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar6 = iVar3 >> 0x1f & 0xffff;
      uVar2 = iVar3 + uVar6;
      uVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
    }
    else {
      uVar4 = 0;
    }
    if ((*(uint *)(uVar4 + 8) & 0x30000000) == 0) {
      if ((((*(longlong *)(*param_1 + 0x1048) != 0) && (cVar1 = FUN_140cb6290(), cVar1 != '\0')) &&
          (lVar5 = FUN_1410ae560(*param_1), lVar5 != 0)) &&
         (iVar3 = FUN_1406ab3e0(*(undefined8 *)(*param_1 + 0x1048)), iVar3 == *(int *)(lVar5 + 0xe8)
         )) {
        if (*(int *)(*param_1 + 0x1068) < 1) {
          FUN_140fd5570(*(undefined8 *)(*param_1 + 0x1048));
        }
        else {
          FUN_1410e46c0();
        }
      }
      LOCK();
      uVar2 = *(uint *)(*param_1 + 0x588);
      *(uint *)(*param_1 + 0x588) = 1;
      uVar4 = (ulonglong)uVar2;
      UNLOCK();
    }
  }
  return uVar4;
}



// FUNCTION 1410bc7b0 FUN_1410bc7b0 body=517 status=ok
// SIG undefined FUN_1410bc7b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410bc7b0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined1 local_110 [8];
  longlong local_108;
  undefined1 local_f8 [224];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar3 = *param_1;
  lVar4 = lVar3 + 0x6b8;
  lVar2 = FWeakObjectPtr::Get(lVar4);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar3 + 0x6c0)) &&
       (local_118 = 0, *(longlong *)(lVar3 + 0x6c8) != 0)) {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar3 + 0x6c0) = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(lVar4);
      if (lVar2 != 0) goto LAB_1410bc857;
    }
LAB_1410bc88d:
    FUN_14282a800(local_f8);
    FUN_14283c290(local_f8,*param_1 + 0x6c8,1,0);
    FUN_14282cc40(local_f8);
  }
  else {
LAB_1410bc857:
    lVar3 = FUN_142f2cf80();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1410bc88d;
  }
  lVar3 = *param_1;
  lVar2 = lVar3 + 0x6b8;
  local_108 = FWeakObjectPtr::Get(lVar2);
  if (local_108 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar3 + 0x6c0)) &&
       (local_118 = 0, *(longlong *)(lVar3 + 0x6c8) != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar2,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar3 + 0x6c0) = DAT_1464b56f4;
      }
      local_108 = FWeakObjectPtr::Get(lVar2);
      if (local_108 != 0) goto LAB_1410bc935;
    }
  }
  else {
LAB_1410bc935:
    lVar3 = FUN_142f2cf80();
    if ((*(int *)(*(longlong *)(local_108 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_108 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1410bc96e;
  }
  local_108 = 0;
LAB_1410bc96e:
  local_110[0] = 0;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (*param_1 + 0x550,local_110);
  return;
}



// FUNCTION 1410bc9c0 FUN_1410bc9c0 body=177 status=ok
// SIG undefined FUN_1410bc9c0(void)

void FUN_1410bc9c0(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[3];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0x1c);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar6;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if (((*(uint *)(lVar5 + 8) & 0x30000000) == 0) &&
       (plVar2 = *(longlong **)(*param_1 + 0x730), plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001410bca64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x2a8))(plVar2,param_1 + 1,1,0);
      return;
    }
  }
  return;
}



// FUNCTION 1410bca80 FUN_1410bca80 body=273 status=ok
// SIG undefined FUN_1410bca80(void)

void FUN_1410bca80(undefined8 *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  
  lVar4 = FUN_1410cb4f0(*param_1);
  if (lVar4 != 0) {
    lVar5 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
    if (lVar5 != 0) {
      lVar5 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
      iVar1 = *(int *)(lVar5 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar8 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar8;
        lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar8) * 0x18;
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x30000000) == 0) {
        lVar5 = *(longlong *)(lVar4 + 0x460);
        if (lVar5 != 0) {
          lVar6 = UInputKeySelector::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            uVar7 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
            uVar7 = FUN_140d3b710(uVar7);
            FUN_140e5cfe0(lVar5,uVar7);
          }
        }
        uVar7 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
        uVar7 = FUN_140d3b710(uVar7);
        FUN_1410db850(*param_1,lVar4,uVar7,1);
      }
    }
  }
  return;
}



// FUNCTION 1410bcba0 FUN_1410bcba0 body=997 status=ok
// SIG undefined FUN_1410bcba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410bcba0(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  byte *pbVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_98 [4];
  undefined4 local_94;
  undefined4 local_90;
  undefined8 *local_88;
  int local_80;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_94 = (undefined4)param_1[1];
  local_90 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_98);
  FUN_14172a400(local_98);
  cVar5 = FWeakObjectPtr::IsValid(&local_94);
  if (cVar5 != '\0') {
    lVar7 = FWeakObjectPtr::Get(&local_94);
    iVar1 = *(int *)(lVar7 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar10 = iVar1 >> 0x1f & 0xffff;
      uVar6 = iVar1 + uVar10;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
              (longlong)(int)((uVar6 & 0xffff) - uVar10) * 0x18;
    }
    else {
      lVar7 = 0;
    }
    if ((*(uint *)(lVar7 + 8) & 0x30000000) == 0) {
      bVar3 = true;
      goto LAB_1410bcc3b;
    }
  }
  bVar3 = false;
LAB_1410bcc3b:
  if ((bVar3) && (lVar7 = FUN_140eac060(*param_1), lVar7 != 0)) {
    lVar8 = UUGButton::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar8 = *(longlong *)(*param_1 + 2000);
      lVar12 = (longlong)*(int *)(*param_1 + 0x7d8) * 0xe8 + lVar8;
      for (; lVar8 != lVar12; lVar8 = lVar8 + 0xe8) {
        if ((*(char *)(lVar8 + 0x19) == '\b') && (*(longlong *)(lVar8 + 0xd8) != 0)) {
          lVar11 = *param_1 + 0xc50;
          local_a8 = 0;
          pbVar9 = (byte *)FUN_1410caf30(lVar11,local_78,0,lVar7 + 0x678);
          local_a8 = 0;
          local_70 = (float)pbVar9[2] * 0.003921569;
          fStack_64 = (float)pbVar9[3] * 0.003921569;
          fStack_68 = (float)*pbVar9 * 0.003921569;
          fStack_6c = (float)pbVar9[1] * 0.003921569;
          pbVar9 = (byte *)FUN_1410caf30(lVar11,local_74,1,lVar7 + 0x678);
          local_a8 = 0;
          local_60 = (float)pbVar9[2] * 0.003921569;
          fStack_54 = (float)pbVar9[3] * 0.003921569;
          fStack_58 = (float)*pbVar9 * 0.003921569;
          fStack_5c = (float)pbVar9[1] * 0.003921569;
          pbVar9 = (byte *)FUN_1410caf30(lVar11,&local_94,2,lVar7 + 0x678);
          local_88 = (undefined8 *)0x0;
          local_50 = (float)pbVar9[2] * 0.003921569;
          fStack_44 = (float)pbVar9[3] * 0.003921569;
          fStack_48 = (float)*pbVar9 * 0.003921569;
          fStack_4c = (float)pbVar9[1] * 0.003921569;
          local_80 = 3;
          TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_88,3);
          puVar4 = local_88;
          *local_88 = CONCAT44(fStack_6c,local_70);
          local_88[1] = CONCAT44(fStack_64,fStack_68);
          local_88[2] = CONCAT44(fStack_5c,local_60);
          local_88[3] = CONCAT44(fStack_54,fStack_58);
          local_88[4] = CONCAT44(fStack_4c,local_50);
          local_88[5] = CONCAT44(fStack_44,fStack_48);
          lVar11 = *(longlong *)(lVar8 + 0xd8);
          plVar2 = *(longlong **)(lVar11 + 0x388);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x278))(plVar2,0);
          }
          iVar1 = local_80;
          if ((*(longlong *)(lVar11 + 0x3b8) != 0) && (0 < local_80)) {
            FUN_142f0c220(*(longlong *)(lVar11 + 0x3b8),puVar4);
          }
          if ((*(longlong *)(lVar11 + 0x3c0) != 0) && (1 < iVar1)) {
            FUN_142f0c220(*(longlong *)(lVar11 + 0x3c0),puVar4 + 2);
          }
          if ((*(longlong *)(lVar11 + 0x3c8) != 0) && (2 < iVar1)) {
            FUN_142f0c220(*(longlong *)(lVar11 + 0x3c8),puVar4 + 4);
          }
          if (puVar4 != (undefined8 *)0x0) {
            FMemory::Free(puVar4);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1410bcf90 FUN_1410bcf90 body=415 status=ok
// SIG undefined FUN_1410bcf90(void)

char FUN_1410bcf90(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_142ecdac0(*param_1);
  if (*(char *)(*param_1 + 0x774) == '\0') {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"Select",L"CharacterSelectMenu",L"SelectText");
    FUN_142eb01d0(*param_1,&DAT_146b3e2a0,uVar6,0);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_50 + 8))(local_50);
        }
      }
    }
    if ((char)param_1[1] == '\0') {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_40,L"Load Character",L"CharacterSelectMenu",L"LoadCharacterText");
      FUN_142eb01d0(*param_1,&DAT_146874c48,uVar6,0);
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar2 = (int *)((longlong)local_38 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_38 + 8))(local_38);
          }
        }
      }
    }
  }
  iVar5 = FUN_1410cbe00(*param_1);
  if (0 < iVar5) {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"Pause (P1)",L"CharacterSelectMenu",L"PauseText");
    FUN_142eb01d0(*param_1,&DAT_146874e10,uVar6,0);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_20 + 8))(local_20);
        }
      }
    }
  }
  LOCK();
  cVar4 = *(char *)(*param_1 + 0x775);
  if (cVar4 == '\x01') {
    *(char *)(*param_1 + 0x775) = '\0';
    cVar4 = '\x01';
  }
  UNLOCK();
  return cVar4;
}



// FUNCTION 1410bd130 FUN_1410bd130 body=243 status=ok
// SIG undefined FUN_1410bd130(void)

void FUN_1410bd130(longlong param_1)

{
  undefined1 uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_1 + 0x31);
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x10)) && (*(longlong *)(param_1 + 0x18) != 0)) {
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(param_1 + 8,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x10) = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(param_1 + 8);
      if (lVar3 != 0) goto LAB_1410bd1c1;
    }
  }
  else {
LAB_1410bd1c1:
    lVar4 = UCheckBox::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1410bd1fa;
  }
  lVar3 = 0;
LAB_1410bd1fa:
  uVar5 = FWeakObjectPtr::Get(param_1);
  FUN_140e81fc0(uVar5,lVar3,uVar1);
  return;
}



// FUNCTION 1410bd230 FUN_1410bd230 body=414 status=ok
// SIG undefined FUN_1410bd230(void)

void FUN_1410bd230(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar6 = FWeakObjectPtr::Get(&local_res10);
    iVar5 = *(int *)(lVar6 + 0xc);
    if (iVar5 < (int)DAT_1469e91c4) {
      uVar9 = iVar5 >> 0x1f & 0xffff;
      uVar4 = iVar5 + uVar9;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
    }
    else {
      lVar6 = 0;
    }
    if ((*(uint *)(lVar6 + 8) & 0x30000000) == 0) {
      if (0 < *(int *)(*param_1 + 0x1068)) {
        cVar3 = FWeakObjectPtr::IsValid(*param_1 + 0xc10);
        if (cVar3 != '\0') {
          puVar8 = *(undefined8 **)(*param_1 + 0x1060);
          uVar7 = FWeakObjectPtr::Get(*param_1 + 0xc10);
          FUN_140e86770(uVar7,*puVar8);
        }
        lVar6 = *param_1;
        iVar5 = *(int *)(lVar6 + 0x1068);
        if (iVar5 + -1 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (*(void **)(lVar6 + 0x1060),(void *)((longlong)*(void **)(lVar6 + 0x1060) + 8),
                     (longlong)(iVar5 + -1) << 3);
          iVar5 = *(int *)(lVar6 + 0x1068);
        }
        *(int *)(lVar6 + 0x1068) = iVar5 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar6 + 0x1060);
      }
      lVar6 = *param_1;
      lVar2 = param_1[1];
      uVar1 = *(undefined4 *)((longlong)param_1 + 0xc);
      local_38 = 0;
      local_28 = 0;
      puVar8 = (undefined8 *)FUN_140438ef0(0x18,local_58);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &PTR_FUN_1444f8920;
        puVar8[1] = lVar6;
        *(int *)(puVar8 + 2) = (int)lVar2;
        *(undefined4 *)((longlong)puVar8 + 0x14) = uVar1;
      }
      local_68[0] = &LAB_1410c54c0;
      FUN_14208c4f0(*param_1,local_68);
    }
  }
  return;
}



// FUNCTION 1410bd3d0 FUN_1410bd3d0 body=282 status=ok
// SIG undefined FUN_1410bd3d0(void)

void FUN_1410bd3d0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  undefined1 local_20;
  
  lVar7 = *param_1;
  uVar8 = 0;
  uVar9 = uVar8;
  uVar11 = uVar8;
  if (0 < *(int *)(lVar7 + 0x768)) {
    do {
      lVar4 = *(longlong *)(*(longlong *)(lVar7 + 0x760) + uVar9 * 8);
      if (lVar4 != 0) {
        if (((longlong)uVar9 < 0) || (*(int *)(lVar7 + 0x710) <= (int)uVar11)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          local_40 = 0;
          local_38 = 0;
          uStack_30 = 0;
          local_28 = (longlong *)0x0;
          local_48 = *(undefined8 *)(*(longlong *)(lVar7 + 0x708) + 0x28 + uVar8);
          local_20 = 1;
          FUN_140e53440(lVar4,&local_48);
          plVar6 = local_28;
          if (local_28 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_28 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_28)(local_28);
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
        }
      }
      lVar7 = *param_1;
      uVar10 = (int)uVar11 + 1;
      uVar8 = uVar8 + 0x30;
      uVar9 = uVar9 + 1;
      uVar11 = (ulonglong)uVar10;
    } while ((int)uVar10 < *(int *)(lVar7 + 0x768));
  }
  return;
}



// FUNCTION 1410bd4f0 FUN_1410bd4f0 body=287 status=ok
// SIG undefined FUN_1410bd4f0(void)

void FUN_1410bd4f0(longlong *param_1)

{
  undefined2 uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  undefined2 local_res8;
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(&local_res8);
  FUN_14172a400(&local_res8);
  cVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar4 != '\0') {
    lVar6 = FWeakObjectPtr::Get(&local_res10);
    iVar2 = *(int *)(lVar6 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar7 = iVar2 >> 0x1f & 0xffff;
      uVar5 = iVar2 + uVar7;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar6 = 0;
    }
    if ((*(uint *)(lVar6 + 8) & 0x30000000) == 0) {
      lVar3 = *param_1;
      lVar6 = *(longlong *)(lVar3 + 2000);
      uVar1 = *(undefined2 *)(lVar3 + 0xc49);
      lVar8 = (longlong)*(int *)(lVar3 + 0x7d8) * 0xe8 + lVar6;
      if (lVar6 != lVar8) {
        local_res8._1_1_ = (char)((ushort)uVar1 >> 8);
        do {
          if ((*(char *)(lVar6 + 0x18) == (char)uVar1) &&
             (*(char *)(lVar6 + 0x19) == local_res8._1_1_)) goto LAB_1410bd5cf;
          lVar6 = lVar6 + 0xe8;
        } while (lVar6 != lVar8);
      }
      lVar6 = lVar3 + 0xf60;
LAB_1410bd5cf:
      if (*(longlong *)(lVar6 + 0xe0) != 0) {
        local_res8 = uVar1;
        FUN_1410c8f10();
        FUN_1410c2350(*(undefined8 *)(lVar6 + 0xe0));
        if ((*(char *)(lVar6 + 0x19) == '\b') && (*(longlong *)(*param_1 + 0x10f0) != 0)) {
          FUN_1410e77c0();
        }
      }
    }
  }
  return;
}



// FUNCTION 1410bd610 FUN_1410bd610 body=254 status=ok
// SIG undefined FUN_1410bd610(void)

void FUN_1410bd610(longlong *param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  plVar1 = param_1 + 0x34;
  uVar2 = *(undefined1 *)(*param_1 + 0x41);
  lVar4 = FWeakObjectPtr::Get(plVar1);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != (int)param_1[0x35]) && (param_1[0x36] != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(plVar1,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x35) = DAT_1464b56f4;
      }
      lVar4 = FWeakObjectPtr::Get(plVar1);
      if (lVar4 != 0) goto LAB_1410bd6a8;
    }
  }
  else {
LAB_1410bd6a8:
    lVar5 = UCheckBox::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1410bd6e1;
  }
  lVar4 = 0;
LAB_1410bd6e1:
  uVar6 = FWeakObjectPtr::Get(*param_1 + 0x30);
  FUN_140e81fc0(uVar6,lVar4,uVar2);
  return;
}



// FUNCTION 1410bd710 FUN_1410bd710 body=267 status=ok
// SIG undefined FUN_1410bd710(void)

void FUN_1410bd710(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar1 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar3 = *(int *)(lVar4 + 0xc);
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar5 = iVar3 >> 0x1f & 0xffff;
      uVar2 = iVar3 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      lVar4 = FUN_1410ae560(*param_1);
      if (((lVar4 != 0) && (*(longlong *)(*param_1 + 0x1048) != 0)) &&
         (cVar1 = FUN_140cb6290(), cVar1 != '\0')) {
        iVar3 = FUN_1406ab3e0(*(undefined8 *)(*param_1 + 0x1048));
        if (iVar3 != *(int *)(lVar4 + 0xec)) {
          return;
        }
        if (*(char *)((longlong)param_1 + 0x11) != '\x05') {
          return;
        }
        FUN_140fd5570(*(undefined8 *)(*param_1 + 0x1048));
      }
      FUN_1410ed430(*param_1,(short)param_1[2]);
      *(undefined1 *)(*param_1 + 0xc48) = 1;
      FUN_1410e8c90(*param_1,0);
    }
  }
  return;
}



// FUNCTION 1410bd820 FUN_1410bd820 body=169 status=ok
// SIG undefined FUN_1410bd820(void)

undefined8 FUN_1410bd820(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
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
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      lVar4 = FUN_140f9aee0(*param_1);
      if (lVar4 != 0) {
        uVar5 = FUN_14046e5c0(lVar4);
        return uVar5;
      }
    }
  }
  return 1;
}



// FUNCTION 1410bd8d0 FUN_1410bd8d0 body=415 status=ok
// SIG undefined FUN_1410bd8d0(void)

ulonglong FUN_1410bd8d0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x838);
  lVar6 = lVar2 + (longlong)*(int *)(lVar1 + 0x840) * 0x18;
  if (lVar2 != lVar6) {
    lVar11 = lVar2;
    do {
      if (*(int *)param_1[1] <= *(int *)(lVar11 + 0x14)) {
        lVar6 = (lVar11 - lVar2) / 6 + (lVar11 - lVar2 >> 0x3f);
        uVar10 = (lVar6 >> 2) - (lVar6 >> 0x3f);
        uVar9 = (uint)uVar10;
        if ((-1 < (int)uVar9) && (iVar4 = *(int *)(lVar1 + 0x840), (int)uVar9 < iVar4)) {
          iVar8 = *(int *)(lVar1 + 0x828);
          if (iVar8 != -1) {
            if (*(char *)param_1[2] == '\0') {
              uVar3 = iVar8 - 1U;
              if ((int)uVar9 <= (int)(iVar8 - 1U)) {
                uVar3 = uVar9;
              }
            }
            else {
              uVar3 = iVar8 + 1U;
              if ((int)(iVar8 + 1U) <= (int)uVar9) {
                uVar3 = uVar9;
              }
            }
            uVar10 = (ulonglong)uVar3;
          }
          iVar8 = (int)uVar10;
          if (iVar8 == iVar4 + -1) {
            return (ulonglong)(iVar4 - 2);
          }
          if ((-1 < iVar8) && (iVar8 < iVar4)) {
            if (*(int *)((undefined8 *)param_1[3] + 1) == 0) {
              puVar7 = &DAT_143f3eda8;
            }
            else {
              puVar7 = *(undefined2 **)param_1[3];
            }
            if (*(int *)(lVar2 + 8 + (longlong)iVar8 * 0x18) == 0) {
              puVar5 = &DAT_143f3eda8;
            }
            else {
              puVar5 = *(undefined2 **)(lVar2 + (longlong)iVar8 * 0x18);
            }
            iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar7);
            while( true ) {
              iVar8 = (int)uVar10;
              if (((iVar8 < 0) || (*(int *)(*param_1 + 0x840) <= iVar8)) || (iVar4 != 0)) break;
              iVar4 = -1;
              if (*(char *)param_1[2] != '\0') {
                iVar4 = 1;
              }
              uVar9 = iVar8 + iVar4;
              uVar10 = (ulonglong)uVar9;
              lVar6 = *(longlong *)(*param_1 + 0x838);
              if (*(int *)((undefined8 *)param_1[3] + 1) == 0) {
                puVar7 = &DAT_143f3eda8;
              }
              else {
                puVar7 = *(undefined2 **)param_1[3];
              }
              if (*(int *)(lVar6 + 8 + (longlong)(int)uVar9 * 0x18) == 0) {
                iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(&DAT_143f3eda8,puVar7);
              }
              else {
                iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>
                                  (*(undefined8 *)(lVar6 + (longlong)(int)uVar9 * 0x18),puVar7);
              }
            }
          }
        }
        goto LAB_1410bd924;
      }
      lVar11 = lVar11 + 0x18;
    } while (lVar11 != lVar6);
  }
  uVar10 = 0xffffffff;
LAB_1410bd924:
  return uVar10 & 0xffffffff;
}



// FUNCTION 1410bda70 FUN_1410bda70 body=975 status=ok
// SIG undefined FUN_1410bda70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410bda70(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 *local_148 [2];
  longlong local_138 [4];
  longlong *local_118;
  int local_108;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined1 local_d8 [16];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  lVar3 = (**(code **)(*(longlong *)*param_1 + 0x148))();
  lVar3 = *(longlong *)(lVar3 + 0x148);
  if (lVar3 != 0) {
    lVar4 = FUN_141424d10();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar4 = *param_1;
      uVar8 = 0;
      local_158 = (code *)&LAB_1410e3470;
      uStack_150 = 0;
      plVar9 = (longlong *)(lVar3 + 0x620);
      plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_1442cc120;
        FWeakObjectPtr::operator=(plVar5 + 1,lVar4);
        *(undefined4 *)(plVar5 + 2) = (undefined4)local_158;
        *(undefined4 *)((longlong)plVar5 + 0x14) = local_158._4_4_;
        *(undefined4 *)(plVar5 + 3) = uStack_150;
        *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_14c;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar5[5] = lVar4;
        *plVar5 = (longlong)&PTR_FUN_1442cc168;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar9,1);
        puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x20))(plVar5,&local_158);
        iVar1 = *(int *)(lVar3 + 0x628);
        uVar8 = *puVar6;
        *(int *)(lVar3 + 0x628) = iVar1 + 1;
        if (*(int *)(lVar3 + 0x62c) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar1);
        }
        lVar3 = *plVar9;
        *(longlong **)(lVar3 + (longlong)iVar1 * 0x10) = plVar5;
        *(undefined4 *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = 3;
      }
      *(undefined8 *)(*param_1 + 0x6b0) = uVar8;
      goto LAB_1410bdd0e;
    }
  }
  lVar3 = *param_1;
  local_118 = (longlong *)0x0;
  local_108 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_138);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = lVar3;
    *puVar6 = &PTR_FUN_143f77b70;
  }
  local_148[0] = &LAB_1410c54a0;
  lVar3 = (**(code **)(*(longlong *)*param_1 + 0x148))();
  if (*(longlong *)(lVar3 + 400) == 0) {
    uVar8 = *(undefined8 *)(lVar3 + 0x3f8);
  }
  else {
    uVar8 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
  }
  uVar7 = FUN_1420849a0(*param_1,local_88,local_148);
  local_f8 = 0;
  local_f0 = 0;
  FWeakObjectPtr::operator=(local_e8,0);
  local_e0 = 0;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8,uVar7);
  FUN_142880af0(uVar8,&local_f8);
  if (local_98 != 0) {
    plVar5 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar5 = local_a8;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_f8);
  if (local_48 != 0) {
    plVar5 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar5 = local_58;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_108 != 0) {
    plVar5 = local_138;
    if (local_118 != (longlong *)0x0) {
      plVar5 = local_118;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_1410bdd0e:
  uVar8 = 0;
  lVar3 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
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
    if (bVar2) {
      lVar4 = *param_1;
      local_158 = FUN_1410df530;
      uStack_150 = 0;
      plVar9 = (longlong *)(lVar3 + 0xa68);
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar5 + 1,lVar4);
        *(undefined4 *)(plVar5 + 2) = (undefined4)local_158;
        *(undefined4 *)((longlong)plVar5 + 0x14) = local_158._4_4_;
        *(undefined4 *)(plVar5 + 3) = uStack_150;
        *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_14c;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar5[5] = lVar4;
        *plVar5 = (longlong)&PTR_FUN_143f77bd0;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar9,1);
        puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x20))(plVar5,&local_158);
        iVar1 = *(int *)(lVar3 + 0xa70);
        uVar8 = *puVar6;
        *(int *)(lVar3 + 0xa70) = iVar1 + 1;
        if (*(int *)(lVar3 + 0xa74) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar1);
        }
        puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar9);
        *puVar6 = plVar5;
        *(undefined4 *)(puVar6 + 1) = 3;
      }
      *(undefined8 *)(*param_1 + 0x6b8) = uVar8;
    }
  }
  return;
}



// FUNCTION 1410bde40 FUN_1410bde40 body=240 status=ok
// SIG undefined FUN_1410bde40(void)

void FUN_1410bde40(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
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
    uVar9 = 0;
    iVar1 = *(int *)(lVar5 + 0xc);
    uVar6 = uVar9;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar8;
      uVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    if ((*(uint *)(uVar6 + 8) & 0x30000000) == 0) {
      plVar10 = *(longlong **)(*param_1 + 0x718);
      uVar7 = (ulonglong)*(int *)(*param_1 + 0x720);
      uVar6 = uVar7 & 0x1fffffffffffffff;
      if (plVar10 + uVar7 < plVar10) {
        uVar6 = uVar9;
      }
      if (uVar6 != 0) {
        do {
          plVar2 = (longlong *)*plVar10;
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x278))(plVar2,0);
          }
          plVar10 = plVar10 + 1;
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar6);
      }
    }
  }
  return;
}



// FUNCTION 1410bdf30 FUN_1410bdf30 body=134 status=ok
// SIG undefined FUN_1410bdf30(void)

void FUN_1410bdf30(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_res8;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar2 = FUN_1416f8720((int)param_1[1]);
  FUN_1410e4350(*param_1,uVar2);
  local_18 = 0;
  local_10 = 0;
  lVar1 = *(longlong *)*param_1;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"MainMenu_Nav",1);
  (**(code **)(lVar1 + 0x4e8))(*param_1,*puVar3,&local_18);
  local_res8 = FUN_1416f8720((int)param_1[1]);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (*param_1 + 0x688,&local_res8);
  return;
}



// FUNCTION 1410bdfc0 FUN_1410bdfc0 body=344 status=ok
// SIG undefined FUN_1410bdfc0(void)

ulonglong FUN_1410bdfc0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined **local_38 [2];
  longlong *local_28;
  longlong local_20;
  
  local_res10 = *(undefined4 *)(param_1 + 1);
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  uVar6 = FWeakObjectPtr::IsValid(&local_res10);
  if ((char)uVar6 != '\0') {
    lVar7 = FWeakObjectPtr::Get(&local_res10);
    iVar3 = *(int *)(lVar7 + 0xc);
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar9 = iVar3 >> 0x1f & 0xffff;
      uVar5 = iVar3 + uVar9;
      uVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar9) * 0x18;
    }
    else {
      uVar6 = 0;
    }
    if ((*(uint *)(uVar6 + 8) & 0x30000000) == 0) {
      lVar7 = FUN_1410cb460(*param_1);
      uVar6 = 0;
      if (lVar7 != 0) {
        lVar8 = FUN_140f9aee0(*param_1);
        uVar6 = 0;
        if (lVar8 != 0) {
          lVar7 = FUN_142547b50(lVar7,local_38);
          bVar4 = FUN_140bca910(lVar8,lVar7 + 8);
          local_38[0] = &PTR_FUN_143f740c8;
          if (local_20 != 0) {
            FMemory::Free();
          }
          local_38[0] = &PTR_FUN_143f73d18;
          if (local_28 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_28 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_28)(local_28);
              LOCK();
              piVar2 = (int *)((longlong)local_28 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_28 + 8))(local_28,1);
              }
            }
          }
          return (ulonglong)bVar4;
        }
      }
    }
  }
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 1410be120 FUN_1410be120 body=260 status=ok
// SIG undefined FUN_1410be120(void)

void FUN_1410be120(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
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
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar7;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) & 0x30000000) == 0) {
      bVar2 = true;
      goto LAB_1410be1a9;
    }
  }
  bVar2 = false;
LAB_1410be1a9:
  if ((bVar2) && (lVar5 = FUN_140eac060(*param_1), lVar5 != 0)) {
    lVar6 = UUGButton::GetPrivateStaticClass();
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
      FUN_1410ec740(*param_1 + 0xc50,*(undefined4 *)((longlong)param_1 + 0x14),param_1 + 2,
                    lVar5 + 0x678);
      FUN_1410cdb90(*param_1);
    }
  }
  return;
}



// FUNCTION 1410be230 FUN_1410be230 body=966 status=ok
// SIG undefined FUN_1410be230(void)

void FUN_1410be230(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 local_res8;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined4 local_res18 [4];
  ulonglong in_stack_ffffffffffffffa8;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(&local_res8);
  FUN_14172a400(&local_res8);
  cVar4 = FWeakObjectPtr::IsValid(&local_res10);
  lVar8 = 0;
  if (cVar4 == '\0') {
LAB_1410be2c7:
    bVar3 = false;
  }
  else {
    lVar7 = FWeakObjectPtr::Get(&local_res10);
    iVar6 = *(int *)(lVar7 + 0xc);
    if (iVar6 < (int)DAT_1469e91c4) {
      uVar12 = iVar6 >> 0x1f & 0xffff;
      uVar5 = iVar6 + uVar12;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar12) * 0x18;
    }
    if ((*(uint *)(lVar8 + 8) & 0x30000000) != 0) goto LAB_1410be2c7;
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  lVar8 = FUN_1410ae560(*param_1);
  if ((((lVar8 != 0) && (*(longlong *)(*param_1 + 0x1048) != 0)) &&
      (cVar4 = FUN_140cb6290(), cVar4 != '\0')) &&
     (iVar6 = FUN_1406ab3e0(*(undefined8 *)(*param_1 + 0x1048)), iVar6 == *(int *)(lVar8 + 0xf4))) {
    FUN_140fd5570(*(undefined8 *)(*param_1 + 0x1048));
  }
  lVar8 = FUN_140eac060(*param_1);
  if (lVar8 == 0) {
    return;
  }
  lVar7 = UUGButton::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  cVar4 = FWeakObjectPtr::IsValid(*param_1 + 0xc10);
  if (cVar4 == '\0') {
    return;
  }
  if (*(longlong *)(*param_1 + 0xc30) == 0) {
    return;
  }
  if (*(longlong *)(*param_1 + 0xc38) == 0) {
    return;
  }
  if (param_1[2] == 0) {
    return;
  }
  cVar4 = FUN_1410cf140(param_1[2] + 0x30);
  if (cVar4 == '\0') {
    return;
  }
  lVar7 = param_1[2];
  if ((*(longlong *)(lVar7 + 0x50) == 0) || (*(longlong *)(lVar7 + 0x78) == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  local_res8 = 0;
  if (!bVar3) {
    return;
  }
  lVar8 = lVar8 + 0x678;
  in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffa8 & 0xffffffffffffff00;
  FUN_1410caf30(lVar7 + 0x30,local_res18,0,lVar8,in_stack_ffffffffffffffa8);
  in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffa8 & 0xffffffffffffff00;
  FUN_1410caf30(param_1[2] + 0x30,&local_res10,1,lVar8,in_stack_ffffffffffffffa8);
  FUN_1410caf30(param_1[2] + 0x30,&local_res8,2,lVar8,in_stack_ffffffffffffffa8 & 0xffffffffffffff00
               );
  local_38 = FUN_1410e4070;
  uStack_30 = 0;
  lVar7 = FWeakObjectPtr::Get(*param_1 + 0xc10);
  lVar8 = *param_1;
  plVar1 = (longlong *)(lVar7 + 0x178);
  plVar9 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar9 + 1,lVar8);
    *(undefined4 *)(plVar9 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar9 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar9 + 3) = uStack_30;
    *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_2c;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar9[5] = lVar8;
    *plVar9 = (longlong)&PTR_FUN_143fcff08;
  }
  if (&local_38 != plVar1) {
    if (plVar9 == (longlong *)0x0) {
      if ((*(int *)(lVar7 + 0x180) != 0) &&
         (plVar9 = (longlong *)*plVar1, plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x28))(plVar9,0);
        if (*plVar1 != 0) {
          lVar8 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar8;
        }
        *(undefined4 *)(lVar7 + 0x180) = 0;
      }
      goto LAB_1410be51f;
    }
    (**(code **)(*plVar9 + 0x30))(plVar9,plVar1);
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,0);
    lVar8 = FMemory::Realloc(plVar9,0,0);
    if (lVar8 != 0) {
      FMemory::Free(lVar8);
    }
  }
LAB_1410be51f:
  lVar8 = FUN_140e971d0(*param_1);
  if (lVar8 != 0) {
    uVar2 = *(undefined8 *)(*param_1 + 0xc30);
    uVar10 = FUN_1410cc700(param_1[2] + 0x30,&local_38);
    uVar11 = FUN_1410cac90(param_1[2] + 0x30);
    FUN_141461150(lVar8,1,uVar11,uVar10,uVar2,local_res18[0],local_res10,(undefined4)local_res8);
    if (local_38 != (code *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1410be600 FUN_1410be600 body=262 status=ok
// SIG undefined FUN_1410be600(void)

void FUN_1410be600(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    iVar4 = *(int *)(lVar5 + 0xc);
    if (iVar4 < (int)DAT_1469e91c4) {
      uVar8 = iVar4 >> 0x1f & 0xffff;
      uVar3 = iVar4 + uVar8;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar8) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if (((*(uint *)(lVar5 + 8) & 0x30000000) == 0) &&
       (lVar5 = FWeakObjectPtr::Get(param_1 + 2), lVar5 != 0)) {
      lVar7 = *param_1;
      if (*(longlong *)(lVar7 + 0x10e8) != 0) {
        iVar4 = FUN_142eed730(*(longlong *)(lVar7 + 0x10e8));
        FUN_142f0bc30(*(undefined8 *)(*param_1 + 0x10e8),lVar5,iVar4 + -1);
        lVar7 = *param_1;
      }
      plVar1 = *(longlong **)(lVar7 + 0x10b8);
      if (plVar1 != (longlong *)0x0) {
        uVar6 = FUN_1410cc6b0(lVar7,*(undefined2 *)(lVar5 + 0x30c));
        (**(code **)(*plVar1 + 0x2b0))(plVar1,uVar6,1,0);
      }
    }
  }
  return;
}



// FUNCTION 1410be710 FUN_1410be710 body=434 status=ok
// SIG undefined FUN_1410be710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410be710(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong **pplVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong local_48 [2];
  longlong *local_38;
  longlong *local_30 [5];
  
  plVar1 = DAT_146874fc8;
  if (DAT_146aeaf18 == '\0') {
    puVar5 = (undefined8 *)FUN_14218ce40();
    if (puVar5 != &DAT_146aeaeb0) {
      DAT_146aeaeb0 = *puVar5;
      uRam0000000146aeaeb8 = puVar5[1];
      _DAT_146aeaec0 = puVar5[2];
      uRam0000000146aeaec8 = puVar5[3];
      _DAT_146aeaed0 = puVar5[4];
      DAT_146aeaed8 = puVar5[5];
      _DAT_146aeaee0 = puVar5[6];
      _DAT_146aeaee8 = puVar5[7];
      _DAT_146aeaef0 = puVar5[8];
      _DAT_146aeaef8 = puVar5[9];
      DAT_146aeaf00 = (longlong *)puVar5[10];
      DAT_146aeaf08 = puVar5[0xb];
      DAT_146aeaf10 = puVar5[0xc];
      DAT_146aeaf18 = '\x01';
    }
  }
  lVar3 = *(longlong *)(param_3 + 0x10);
  plVar9 = (longlong *)(lVar3 + 0xd0);
  uVar6 = (**(code **)(*plVar1 + 0x78))(plVar1,local_48);
  if (*DAT_146aeaf00 != 0) {
    cVar4 = FUN_1407ce010(DAT_146aeaf00 + 1);
    if (cVar4 != '\0') {
      plVar8 = (longlong *)*plVar9;
      plVar1 = plVar8 + (longlong)*(int *)(lVar3 + 0xd8) * 5;
      if (plVar8 != plVar1) {
        do {
          if ((*(longlong *)*plVar8 == *DAT_146aeaf00) &&
             (*(longlong *)(((longlong *)*plVar8)[1] + 0x28) ==
              *(longlong *)(DAT_146aeaf00[1] + 0x28))) {
            uVar6 = FViewMatrices::FViewMatrices(&local_38,uVar6);
            FUN_14217f450(plVar8 + 1,uVar6);
            pplVar7 = &local_38;
            goto LAB_1410be87e;
          }
          plVar8 = plVar8 + 5;
        } while (plVar8 != plVar1);
      }
      local_38 = DAT_146aeaf00;
      FViewMatrices::FViewMatrices(local_30,uVar6);
      iVar2 = *(int *)(lVar3 + 0xd8);
      *(int *)(lVar3 + 0xd8) = iVar2 + 1;
      if (*(int *)(lVar3 + 0xdc) < iVar2 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar9,iVar2);
      }
      puVar5 = (undefined8 *)(*plVar9 + (longlong)iVar2 * 0x28);
      *puVar5 = local_38;
      FUN_14217e5b0(puVar5 + 1,local_30);
      pplVar7 = local_30;
LAB_1410be87e:
      FUN_14217f430(pplVar7);
    }
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410be8d0 FUN_1410be8d0 body=411 status=ok
// SIG undefined FUN_1410be8d0(void)

void FUN_1410be8d0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      lVar4 = *param_1;
      if (((*(char *)(lVar4 + 0xc49) != '\0') || (*(char *)(lVar4 + 0xc4a) != '\0')) &&
         (*(char *)(lVar4 + 0xc48) == '\x01')) {
        lVar5 = FUN_1410cc6b0(lVar4,*(undefined2 *)(lVar4 + 0xc49));
        if (*(longlong *)(lVar5 + 0xe0) != 0) {
          FUN_1410c8f10();
          lVar4 = *param_1;
        }
      }
      *(short *)(lVar4 + 0xc49) = (short)param_1[2];
      lVar4 = *param_1;
      if (*(longlong *)(lVar4 + 0x1088) != 0) {
        *(undefined2 *)(*(longlong *)(lVar4 + 0x1088) + 0x170) = *(undefined2 *)(lVar4 + 0xc49);
        FUN_1410e97d0();
        lVar4 = *param_1;
      }
      if (((*(char *)(lVar4 + 0xc49) != '\0') || (*(char *)(lVar4 + 0xc4a) != '\0')) &&
         (*(char *)(lVar4 + 0xc48) == '\x01')) {
        lVar5 = FUN_1410cc6b0(lVar4,*(undefined2 *)(lVar4 + 0xc49));
        if (*(longlong *)(lVar5 + 0xe0) != 0) {
          FUN_1410c2350();
          lVar4 = *param_1;
          if ((*(char *)(lVar4 + 0xc4a) == '\b') && (*(longlong *)(lVar4 + 0x10f0) != 0)) {
            FUN_1410e77c0();
            lVar4 = *param_1;
          }
        }
        *(undefined1 *)(lVar4 + 0x1138) = 1;
        lVar4 = *param_1;
      }
      if (*(longlong *)(lVar4 + 0x10e0) != 0) {
        FUN_1410ebb00(*(longlong *)(lVar4 + 0x10e0),*(undefined2 *)(lVar4 + 0xc49));
        return;
      }
    }
  }
  return;
}



// FUNCTION 1410bea70 FUN_1410bea70 body=1316 status=ok
// SIG undefined FUN_1410bea70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410bea70(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_268 [32];
  void *local_248;
  int local_240;
  undefined4 local_23c;
  undefined1 local_238 [16];
  undefined1 *local_228 [2];
  undefined1 local_218 [32];
  undefined8 local_1f8;
  undefined4 local_1e8;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_108;
  undefined1 local_100 [200];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_248 = (void *)param_1[1];
  FUN_141729b50(local_238);
  FUN_14172a400(local_238);
  cVar3 = FWeakObjectPtr::IsValid(&local_248);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_248);
    lVar9 = 0;
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar8;
      lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    if ((*(uint *)(lVar9 + 8) & 0x30000000) == 0) {
      local_1d8 = 0;
      local_1d0 = 0;
      local_1c8 = 0;
      local_1c0 = 0;
      local_1b8 = 0;
      local_1b0 = 0;
      local_1a8 = 0;
      local_1a0 = 0;
      local_198 = 0;
      local_190 = 0;
      local_188 = 0;
      local_180 = 0;
      local_178 = 0;
      local_170 = 0;
      local_168 = 0;
      local_160 = 0;
      local_158 = 0;
      local_150 = 0;
      local_148 = 0;
      local_140 = 0;
      local_138 = 0;
      local_130 = 0;
      local_128 = 0;
      local_120 = 0;
      local_118 = 0;
      if (((longlong *)param_1[2] != (longlong *)0x0) && (*(char *)(param_1 + 0x26) != '\0')) {
        uVar6 = (**(code **)(*(longlong *)param_1[2] + 0x148))();
        local_240 = *(int *)(param_1 + 5);
        lVar9 = (longlong)local_240;
        pvVar2 = (void *)param_1[4];
        local_248 = (void *)0x0;
        if (local_240 == 0) {
          local_23c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_248,local_240,0);
          _guard_xfg_dispatch_icall_nop(local_248,pvVar2,lVar9 * 2);
        }
        FUN_140b2dba0(&local_248,&local_1d8,&local_198,uVar6);
        if (local_248 != (void *)0x0) {
          FMemory::Free();
        }
        local_240 = *(int *)(param_1 + 7);
        lVar9 = (longlong)local_240;
        pvVar2 = (void *)param_1[6];
        local_248 = (void *)0x0;
        if (local_240 == 0) {
          local_23c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_248,local_240,0);
          _guard_xfg_dispatch_icall_nop(local_248,pvVar2,lVar9 * 2);
        }
        FUN_140b2dba0(&local_248,&local_1c8,&local_188,uVar6);
        if (local_248 != (void *)0x0) {
          FMemory::Free();
        }
        local_240 = *(int *)(param_1 + 9);
        lVar9 = (longlong)local_240;
        pvVar2 = (void *)param_1[8];
        local_248 = (void *)0x0;
        if (local_240 == 0) {
          local_23c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_248,local_240,0);
          _guard_xfg_dispatch_icall_nop(local_248,pvVar2,lVar9 * 2);
        }
        FUN_140b2dba0(&local_248,&local_1b8,&local_178,uVar6);
        if (local_248 != (void *)0x0) {
          FMemory::Free();
        }
        local_240 = *(int *)(param_1 + 0xb);
        lVar9 = (longlong)local_240;
        pvVar2 = (void *)param_1[10];
        local_248 = (void *)0x0;
        if (local_240 == 0) {
          local_23c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_248,local_240,0);
          _guard_xfg_dispatch_icall_nop(local_248,pvVar2,lVar9 * 2);
        }
        FUN_140b2dba0(&local_248,&local_1a8,&local_168,uVar6);
        if (local_248 != (void *)0x0) {
          FMemory::Free();
        }
        local_240 = *(int *)(param_1 + 0xd);
        lVar9 = (longlong)local_240;
        pvVar2 = (void *)param_1[0xc];
        local_248 = (void *)0x0;
        if (local_240 == 0) {
          local_23c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_248,local_240,0);
          _guard_xfg_dispatch_icall_nop(local_248,pvVar2,lVar9 * 2);
        }
        FUN_140b2a590(&local_248,&local_158,uVar6);
        if (local_248 != (void *)0x0) {
          FMemory::Free();
        }
        local_240 = *(int *)(param_1 + 0xf);
        lVar9 = (longlong)local_240;
        pvVar2 = (void *)param_1[0xe];
        local_248 = (void *)0x0;
        if (local_240 == 0) {
          local_23c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_248,local_240,0);
          _guard_xfg_dispatch_icall_nop(local_248,pvVar2,lVar9 * 2);
        }
        FUN_140b2a590(&local_248,&local_148,uVar6);
        if (local_248 != (void *)0x0) {
          FMemory::Free();
        }
        local_240 = *(int *)(param_1 + 0x11);
        lVar9 = (longlong)local_240;
        pvVar2 = (void *)param_1[0x10];
        local_248 = (void *)0x0;
        if (local_240 == 0) {
          local_23c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_248,local_240,0);
          _guard_xfg_dispatch_icall_nop(local_248,pvVar2,lVar9 * 2);
        }
        FUN_140b2a590(&local_248,&local_138,uVar6);
        if (local_248 != (void *)0x0) {
          FMemory::Free();
        }
        local_240 = *(int *)(param_1 + 0x13);
        lVar9 = (longlong)local_240;
        pvVar2 = (void *)param_1[0x12];
        local_248 = (void *)0x0;
        if (local_240 == 0) {
          local_23c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_248,local_240,0);
          _guard_xfg_dispatch_icall_nop(local_248,pvVar2,lVar9 * 2);
        }
        FUN_140b2a590(&local_248,&local_128,uVar6);
        if (local_248 != (void *)0x0) {
          FMemory::Free();
        }
      }
      local_118 = 0;
      local_108 = *param_1;
      FUN_1410b3270(local_100,&local_1d8);
      local_38 = *(undefined4 *)(param_1 + 1);
      local_34 = *(undefined4 *)((longlong)param_1 + 0xc);
      local_1f8 = 0;
      local_1e8 = 0;
      puVar7 = (undefined8 *)FUN_140438ef0(0xe0,local_218);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_FUN_1446a54a0;
        FUN_1410b27b0(puVar7 + 1,&local_108);
      }
      local_228[0] = &LAB_1410c52c0;
      FUN_14208c5d0(*param_1,local_228);
      FUN_1410b4430(local_100);
      FUN_1410b4430(&local_1d8);
    }
  }
  return;
}



// FUNCTION 1410befa0 FUN_1410befa0 body=1006 status=ok
// SIG undefined FUN_1410befa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410befa0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  longlong *plVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  undefined8 uVar14;
  int *piVar15;
  uint uVar16;
  
  piVar3 = (int *)*param_3;
  iVar2 = *(int *)(param_3 + 1);
  if (piVar3 != piVar3 + (longlong)iVar2 * 0x20) {
    piVar15 = piVar3 + 0x12;
    do {
      if (*(longlong *)(piVar15 + 2) != 0) {
        lVar10 = *(longlong *)(piVar15 + -0x12);
        uVar14 = *(undefined8 *)*param_1;
        if (lVar10 == 0) {
          FUN_1417846f0(uVar14,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
        }
        uVar8 = AGFreezeCharacterCue::GetPrivateStaticClass();
        uVar16 = 0;
        plVar9 = (longlong *)FUN_1417985e0(uVar8,uVar14,lVar10,0,0,0,0,0,0);
        lVar10 = FWeakObjectPtr::Get();
        if (lVar10 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != *piVar15) && (*(longlong *)(piVar15 + 2) != 0)) {
            lVar10 = FUN_141796df0(piVar15 + 2);
            FWeakObjectPtr::operator=(piVar15 + -2,lVar10);
            if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *piVar15 = DAT_1464b56f4;
            }
            lVar10 = FWeakObjectPtr::Get(piVar15 + -2);
            if (lVar10 != 0) goto LAB_1410bf0d7;
          }
LAB_1410bf112:
          lVar10 = 0;
        }
        else {
LAB_1410bf0d7:
          lVar11 = UCameraShake::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (!bVar5) goto LAB_1410bf112;
        }
        FUN_14260f940(plVar9,lVar10);
        lVar10 = FWeakObjectPtr::Get(param_1[1] + 0x58c);
        if (lVar10 == 0) {
LAB_1410bf17b:
          bVar6 = 1;
        }
        else {
          lVar11 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (!bVar5) goto LAB_1410bf17b;
          bVar6 = APlayerController::IsPrimaryPlayer(lVar10);
        }
        *(byte *)((longlong)plVar9 + 0x304) = *(byte *)((longlong)plVar9 + 0x304) & 0xfc;
        *(byte *)((longlong)plVar9 + 0x304) =
             (bVar6 * '\x02' | *(byte *)((longlong)plVar9 + 0x304)) & 0xfb | (bVar6 ^ 1) << 2;
        FUN_1423974c0(plVar9,1);
        FUN_1423974f0(plVar9,0);
        (**(code **)(*plVar9 + 0x7a0))(plVar9,0);
        (**(code **)(*plVar9 + 0x638))(plVar9,0);
        if (param_4 != '\0') {
          iVar7 = (int)plVar9[0x12];
          *(int *)(plVar9 + 0x12) = iVar7 + 1;
          if (*(int *)((longlong)plVar9 + 0x94) < iVar7 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9 + 0x11,iVar7);
          }
          *(undefined8 *)(plVar9[0x11] + (longlong)iVar7 * 8) = DAT_146874eb8;
        }
        if ((piVar15[10] == 0) && (piVar15[0xb] == 0)) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if ((!bVar5) || ((char)piVar15[8] != '\t')) {
          plVar4 = (longlong *)param_1[2];
          bVar6 = *(byte *)(piVar15 + 8);
          if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
            plVar12 = (longlong *)plVar4[8];
            if ((longlong *)plVar4[8] == (longlong *)0x0) {
              plVar12 = plVar4 + 7;
            }
            iVar7 = *(int *)((longlong)plVar12 +
                            ((longlong)(int)plVar4[9] - 1U & (ulonglong)bVar6) * 4);
            if (iVar7 != -1) {
              lVar10 = *plVar4;
              iVar13 = iVar7;
              do {
                lVar11 = lVar10 + (longlong)iVar13 * 0x18;
                if (*(byte *)(lVar10 + (longlong)iVar13 * 0x18) == bVar6) {
                  if (((iVar13 != -1) && (lVar11 != 0)) && (lVar11 != -8)) {
                    if (((int)plVar4[1] == *(int *)((longlong)plVar4 + 0x34)) || (iVar7 == -1))
                    goto LAB_1410bf37e;
                    goto LAB_1410bf350;
                  }
                  break;
                }
                iVar13 = *(int *)(lVar11 + 0x10);
              } while (iVar13 != -1);
            }
          }
        }
        uVar14 = *(undefined8 *)(*(longlong *)*param_1 + 0x168);
LAB_1410bf2b9:
        FUN_142382f60(plVar9,uVar14,&DAT_146af29ec);
        FUN_142398770(plVar9,piVar15 + -0xe,0,0,uVar16 & 0xffffff00);
      }
      piVar1 = piVar15 + 0xe;
      piVar15 = piVar15 + 0x20;
    } while (piVar1 != piVar3 + (longlong)iVar2 * 0x20);
  }
  return;
LAB_1410bf350:
  lVar11 = lVar10 + (longlong)iVar7 * 0x18;
  if (*(byte *)(lVar10 + (longlong)iVar7 * 0x18) != bVar6) goto code_r0x0001410bf361;
  if (iVar7 == -1) {
LAB_1410bf37e:
    lVar11 = 0;
  }
  uVar14 = *(undefined8 *)(lVar11 + 8);
  goto LAB_1410bf2b9;
code_r0x0001410bf361:
  iVar7 = *(int *)(lVar11 + 0x10);
  uVar14 = _DAT_00000008;
  if (iVar7 == -1) goto LAB_1410bf2b9;
  goto LAB_1410bf350;
}



// FUNCTION 1410bf390 FUN_1410bf390 body=735 status=ok
// SIG undefined FUN_1410bf390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410bf390(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,
                  float param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  undefined1 auStack_138 [32];
  longlong local_118;
  ulonglong local_110;
  undefined8 local_108;
  longlong lStack_100;
  undefined4 *local_f8;
  ulonglong *puStack_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [16];
  undefined4 local_98 [2];
  longlong local_90;
  longlong *local_80;
  char local_70;
  ulonglong local_68 [5];
  
  local_68[0] = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar8 = -1;
  if (param_2 != 0) {
    FUN_142f0ead0(param_2,1.0 - param_5);
    local_118 = 0;
    pwVar9 = L"empty";
    local_110 = 0;
    if (0.0001 < param_5) {
      pwVar9 = L"fill";
    }
    if (*pwVar9 != L'\0') {
      do {
        lVar8 = lVar8 + 1;
      } while (pwVar9[lVar8] != L'\0');
      uVar7 = (int)lVar8 + 1;
      local_110 = (ulonglong)uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
      }
      FGenericPlatformString::Memcpy(local_118,pwVar9,(longlong)(int)uVar7 * 2);
    }
    FUN_142088cf0(param_2,&local_118);
    if (local_118 != 0) {
      FMemory::Free();
    }
  }
  if (param_4 != 0) {
    FUN_142088cf0(param_4,*param_1 + 0x10);
  }
  if (param_3 != (longlong *)0x0) {
    puVar5 = (undefined8 *)FTextFormat::FTextFormat(local_a8,&DAT_146875038);
    local_98[0] = 0;
    local_70 = '\0';
    local_90 = (longlong)(int)ROUND(param_5 * 100.0 + param_5 * 100.0 + 0.5) >> 1;
    local_f8 = local_98;
    puStack_f0 = local_68;
    local_108 = *puVar5;
    lStack_100 = puVar5[1];
    if (lStack_100 != 0) {
      LOCK();
      *(int *)(lStack_100 + 8) = *(int *)(lStack_100 + 8) + 1;
      UNLOCK();
    }
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_e8,&local_f8);
    uVar6 = FText::Format(local_c0,&local_108,uVar6);
    FText::FText(local_d8,uVar6);
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_b8 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_e8);
    if ((local_70 != '\0') && (local_70 = '\0', local_80 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_80 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    plVar4 = (longlong *)puVar5[1];
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
    (**(code **)(*param_3 + 0x2b0))(param_3,local_d8,1,0);
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_d0 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1410bf670 FUN_1410bf670 body=281 status=ok
// SIG undefined FUN_1410bf670(void)

void FUN_1410bf670(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong local_28 [2];
  undefined8 local_18 [2];
  
  uVar5 = 0;
  uVar3 = uVar5;
  if (*(int *)(param_1 + 10) != 0) {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 4;
    }
    if (plVar6 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar6 + 8))();
    }
  }
  puVar4 = (undefined8 *)(*(code *)param_1[2])(local_28,uVar3);
  _Src = (void *)*puVar4;
  *puVar4 = 0;
  iVar1 = *(int *)(puVar4 + 1);
  puVar4[1] = 0;
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  puVar2 = *(undefined8 **)*param_1;
  puVar4 = puVar2 + 0xc;
  if (puVar4 != local_18) {
    *(int *)(puVar2 + 0xd) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)puVar2 + 0x6c) == 0)) {
      *(undefined4 *)((longlong)puVar2 + 0x6c) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar4,iVar1);
      _guard_xfg_dispatch_icall_nop((void *)*puVar4,_Src,(longlong)iVar1 * 2);
    }
  }
  *(undefined1 *)(puVar2 + 0xb) = 1;
  (**(code **)(*(longlong *)puVar2[10] + 0x10))();
  if (*(int *)(puVar2 + 8) != 0) {
    plVar6 = (longlong *)puVar2[6];
    if ((longlong *)puVar2[6] == (longlong *)0x0) {
      plVar6 = puVar2 + 2;
    }
    if (plVar6 != (longlong *)0x0) {
      if (plVar6 != (longlong *)0x0) {
        uVar5 = (**(code **)(*plVar6 + 8))();
      }
      (*(code *)*puVar2)(uVar5);
    }
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  return;
}



// FUNCTION 1410bf790 FUN_1410bf790 body=400 status=ok
// SIG undefined FUN_1410bf790(void)

void FUN_1410bf790(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar4 != '\0') {
    lVar6 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar6 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar10 = iVar1 >> 0x1f & 0xffff;
      uVar5 = iVar1 + uVar10;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18;
    }
    else {
      lVar6 = 0;
    }
    if ((*(uint *)(lVar6 + 8) & 0x30000000) == 0) {
      bVar3 = true;
      goto LAB_1410bf819;
    }
  }
  bVar3 = false;
LAB_1410bf819:
  if (bVar3) {
    lVar6 = FWeakObjectPtr::Get(param_1 + 2);
    if (lVar6 != 0) {
      lVar7 = FUN_140eac060(*param_1);
      if (lVar7 != 0) {
        lVar8 = UUGButton::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          FUN_1412f3eb0(lVar7);
        }
      }
      lVar7 = FUN_140e971d0(*param_1);
      if (lVar7 != 0) {
        FUN_141242620(lVar6,lVar7);
      }
    }
    cVar4 = FWeakObjectPtr::IsValid(*param_1 + 0xc10);
    if (cVar4 != '\0') {
      lVar6 = FWeakObjectPtr::Get(*param_1 + 0xc10);
      if ((*(int *)(lVar6 + 0x180) != 0) &&
         (plVar2 = *(longlong **)(lVar6 + 0x178), plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*(longlong *)(lVar6 + 0x178) != 0) {
          uVar9 = FMemory::Realloc(*(longlong *)(lVar6 + 0x178),0,0);
          *(undefined8 *)(lVar6 + 0x178) = uVar9;
        }
        *(undefined4 *)(lVar6 + 0x180) = 0;
      }
    }
    FUN_142eb3990(*param_1);
  }
  return;
}



// FUNCTION 1410bf920 FUN_1410bf920 body=326 status=ok
// SIG undefined FUN_1410bf920(void)

ulonglong FUN_1410bf920(longlong *param_1)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  uVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if ((char)uVar3 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    uVar3 = 0;
    iVar9 = *(int *)(lVar4 + 0xc);
    if (iVar9 < (int)DAT_1469e91c4) {
      uVar7 = iVar9 >> 0x1f & 0xffff;
      uVar2 = iVar9 + uVar7;
      uVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar7) * 0x18;
    }
    if ((*(uint *)(uVar3 + 8) & 0x30000000) == 0) {
      FUN_142ecdac0(*param_1);
      lVar4 = FUN_1410cb700(*param_1);
      if ((((lVar4 != 0) && (*(char *)(lVar4 + 0x94) == '\x01')) &&
          (lVar5 = FUN_1416f8720((int)param_1[2]), lVar5 != 0)) &&
         (iVar9 = *(int *)(lVar4 + 0x38) + -1, -1 < iVar9)) {
        lVar5 = (longlong)iVar9 * 0x30;
        do {
          lVar8 = *(longlong *)(lVar4 + 0x30) + lVar5;
          uVar6 = FUN_1416f8720((int)param_1[2]);
          FUN_142ee2030(uVar6,*(undefined8 *)(lVar8 + 0x20),lVar8);
          lVar5 = lVar5 + -0x30;
          iVar9 = iVar9 + -1;
        } while (-1 < iVar9);
      }
      uVar3 = 1;
      LOCK();
      bVar1 = *(byte *)(*param_1 + 0x800);
      if (bVar1 == 1) {
        *(byte *)(*param_1 + 0x800) = 0;
      }
      else {
        uVar3 = (ulonglong)bVar1;
      }
      UNLOCK();
    }
  }
  return uVar3;
}



// FUNCTION 1410bfa70 FUN_1410bfa70 body=173 status=ok
// SIG undefined FUN_1410bfa70(void)

undefined8 FUN_1410bfa70(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = *(longlong **)(param_2 + 0x88);
  lVar3 = 0;
  if (plVar1 == (longlong *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = plVar1[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar4 = plVar1[0x1f];
    }
  }
  plVar1 = *(longlong **)(param_3 + 0x88);
  if ((plVar1 != (longlong *)0x0) && (lVar3 = plVar1[0x1f], lVar3 == 0)) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar3 = plVar1[0x1f];
  }
  if (((lVar4 != 0) && (lVar3 != 0)) &&
     (iVar2 = FText::CompareTo(lVar4 + 0x40,lVar3 + 0x40,0), iVar2 < 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1410bfb20 FUN_1410bfb20 body=270 status=ok
// SIG undefined FUN_1410bfb20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1410bfb20(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [80];
  code *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FUN_1410c2050(*param_1 + 0x20);
  lVar1 = *param_1;
  local_78[0] = FString::FString;
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



// FUNCTION 1410bfc30 FUN_1410bfc30 body=220 status=ok
// SIG undefined FUN_1410bfc30(void)

void FUN_1410bfc30(longlong *param_1)

{
  int iVar1;
  void *_Src;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
  local_28 = (void *)0x0;
  *(int *)(*param_1 + 0x830) = *(int *)(*param_1 + 0x830) + 1;
  local_20 = *(int *)((undefined8 *)param_1[1] + 1);
  lVar5 = (longlong)local_20;
  _Src = *(void **)param_1[1];
  if (local_20 == 0) {
    pvVar3 = (void *)0x0;
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_20,0);
    pvVar3 = local_28;
    _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar5 * 2);
  }
  iVar2 = local_20;
  lVar5 = *param_1;
  iVar1 = *(int *)(lVar5 + 0x840);
  lVar4 = (longlong)iVar1;
  *(int *)(lVar5 + 0x840) = iVar1 + 1;
  if (*(int *)(lVar5 + 0x844) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (lVar5 + 0x838,iVar1);
  }
  lVar5 = *(longlong *)(lVar5 + 0x838);
  *(void **)(lVar5 + lVar4 * 0x18) = pvVar3;
  *(int *)(lVar5 + 8 + lVar4 * 0x18) = iVar2;
  *(undefined4 *)(lVar5 + 0xc + lVar4 * 0x18) = local_1c;
  *(undefined8 *)(lVar5 + 0x10 + lVar4 * 0x18) = 1;
  return;
}



// FUNCTION 1410bfd10 FUN_1410bfd10 body=324 status=ok
// SIG undefined FUN_1410bfd10(void)

ulonglong FUN_1410bfd10(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_70 [3];
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  lVar3 = *param_1;
  lVar7 = *(longlong *)(lVar3 + 0x1050);
  lVar1 = lVar7 + (longlong)*(int *)(lVar3 + 0x1058) * 0x28;
  while( true ) {
    if (lVar7 == lVar1) {
      FWeakObjectPtr::operator=(&local_res8,lVar3);
      uVar4 = *param_2;
      FString::FString(local_70,param_2 + 1);
      local_28 = 0;
      local_18 = 0;
      puVar6 = (undefined8 *)FUN_140438ef0(0x30,local_48);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &PTR_FUN_1446a53b8;
        puVar6[1] = lVar3;
        *(undefined4 *)(puVar6 + 2) = local_res8;
        *(undefined4 *)((longlong)puVar6 + 0x14) = local_resc;
        puVar6[3] = uVar4;
        FString::FString(puVar6 + 4,local_70);
      }
      local_58[0] = &LAB_1410c52e0;
      FUN_14204c280(local_58);
      if (local_70[0] != 0) {
        FMemory::Free();
      }
      LOCK();
      uVar2 = *(uint *)(lVar3 + 0x588);
      *(uint *)(lVar3 + 0x588) = 1;
      UNLOCK();
      return (ulonglong)uVar2;
    }
    uVar5 = FSoftObjectPath::operator==(lVar7,param_2);
    if ((char)uVar5 != '\0') break;
    lVar7 = lVar7 + 0x28;
  }
  return uVar5;
}



// FUNCTION 1410bfe60 FUN_1410bfe60 body=719 status=ok
// SIG undefined FUN_1410bfe60(void)

void FUN_1410bfe60(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  code *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [16];
  
  if (*(longlong *)(*param_1 + 0x690) != 0) {
    iVar7 = FUN_142eb7a00();
    lVar8 = FUN_140f9aee0();
    if (lVar8 != 0) {
      if ((iVar7 < 0) || (*(int *)(lVar8 + 0xac0) <= iVar7)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((bVar6) && (lVar5 = *(longlong *)(*param_1 + 0x6e0), lVar5 != 0)) {
        lVar9 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if ((bVar6) && (lVar9 = FUN_140cfcaa0(lVar5), lVar9 != 0)) {
          FUN_140d4d1d0(lVar9,*(undefined8 *)((longlong)iVar7 * 8 + *(longlong *)(lVar8 + 0xab8)));
          puVar10 = (undefined8 *)FGuid::NewGuid(local_28);
          local_48 = *puVar10;
          uStack_40 = puVar10[1];
          FUN_140d4ca70(lVar9,&local_48);
          FUN_140d12170(lVar5,lVar9);
          FUN_140bf5100(lVar8);
          FUN_142dcf3a0(*(undefined8 *)(*param_1 + 0x6e0),&local_78);
          if (local_78 != 0) {
            local_68 = local_78;
            plStack_60 = plStack_70;
            if (plStack_70 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
              UNLOCK();
            }
            FUN_140beb560(lVar8,&local_68);
            plVar3 = plStack_60;
            if (plStack_60 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_60 + 1;
              lVar5 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*plStack_60)(plStack_60);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar4 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
          }
          lVar5 = *param_1;
          local_58 = FUN_1410d3f10;
          uStack_50 = 0;
          local_88 = 0;
          local_80 = 0;
          puVar10 = (undefined8 *)operator_new(0x30,&local_88);
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = &PTR_FUN_143f77b88;
            FWeakObjectPtr::operator=(puVar10 + 1,lVar5);
            puVar10[2] = local_58;
            puVar10[3] = CONCAT44(uStack_4c,uStack_50);
            uVar11 = FDelegateHandle::GenerateNewID();
            puVar10[5] = uVar11;
            *puVar10 = &PTR_FUN_143f77bd0;
          }
          lVar8 = *(longlong *)(lVar8 + 0xab8);
          uVar11 = thunk_FUN_1422ca050();
          FUN_1409f97d0(uVar11,local_38,*(undefined8 *)((longlong)iVar7 * 8 + lVar8),&local_88);
          if (local_30 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_30 + 1;
            lVar8 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_30)(local_30);
              LOCK();
              piVar2 = (int *)((longlong)local_30 + 0xc);
              iVar7 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*local_30 + 8))(local_30,1);
              }
            }
          }
          if (plStack_70 != (longlong *)0x0) {
            LOCK();
            plVar3 = plStack_70 + 1;
            lVar8 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plStack_70)(plStack_70);
              LOCK();
              piVar2 = (int *)((longlong)plStack_70 + 0xc);
              iVar7 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plStack_70 + 8))(plStack_70,1);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1410c0130 FUN_1410c0130 body=436 status=ok
// SIG undefined FUN_1410c0130(void)

void FUN_1410c0130(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(&local_res8);
  FUN_14172a400(&local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
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
      lVar5 = *param_1;
      iVar1 = *(int *)(lVar5 + 0xc40);
      if (((-1 < iVar1) && (iVar1 < *(int *)(lVar5 + 0xc08))) &&
         (*(longlong *)(*(longlong *)(lVar5 + 0xc00) + (longlong)iVar1 * 8) != 0)) {
        FUN_140ebbab0(lVar5 + 0x810,lVar5 + 0xbd0);
        *(undefined1 *)
         (*(longlong *)(*(longlong *)(*param_1 + 0xc00) + (longlong)*(int *)(*param_1 + 0xc40) * 8)
         + 0x1e0) = 1;
        lVar5 = *param_1;
        uVar2 = *(undefined8 *)
                 (*(longlong *)(lVar5 + 0xc00) + (longlong)*(int *)(lVar5 + 0xc40) * 8);
        *(int *)(lVar5 + 0xc44) = *(int *)(lVar5 + 0xc40);
        FWeakObjectPtr::operator=(&local_res8,lVar5);
        local_38 = 0;
        local_28 = 0;
        puVar6 = (undefined8 *)FUN_140438ef0(0x20,local_58);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = &PTR_FUN_144605cf8;
          puVar6[1] = lVar5;
          *(undefined4 *)(puVar6 + 2) = local_res8;
          *(undefined4 *)((longlong)puVar6 + 0x14) = local_resc;
          puVar6[3] = uVar2;
        }
        local_68[0] = &LAB_1410c5710;
        FUN_14204c280(local_68);
      }
    }
  }
  return;
}



// FUNCTION 1410c02f0 FUN_1410c02f0 body=438 status=ok
// SIG undefined FUN_1410c02f0(void)

void FUN_1410c02f0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_res10 = (undefined4)param_1[2];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0x14);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar4 != '\0') {
    lVar6 = FWeakObjectPtr::Get(&local_res10);
    lVar7 = 0;
    iVar3 = *(int *)(lVar6 + 0xc);
    lVar6 = lVar7;
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar9 = iVar3 >> 0x1f & 0xffff;
      uVar5 = iVar3 + uVar9;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar9) * 0x18;
    }
    if ((*(uint *)(lVar6 + 8) & 0x30000000) == 0) {
      if ((*(longlong *)(*param_1 + 0x740) != 0) &&
         (cVar4 = FWeakObjectPtr::IsValid(param_1 + 1), cVar4 != '\0')) {
        lVar6 = FWeakObjectPtr::Get(param_1 + 1);
        iVar3 = *(int *)(lVar6 + 0xc);
        if (iVar3 < (int)DAT_1469e91c4) {
          uVar9 = iVar3 >> 0x1f & 0xffff;
          uVar5 = iVar3 + uVar9;
          lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                  (longlong)(int)((uVar5 & 0xffff) - uVar9) * 0x18;
        }
        if ((*(uint *)(lVar7 + 8) & 0x30000000) == 0) {
          lVar7 = FWeakObjectPtr::Get(param_1 + 1);
          (**(code **)(**(longlong **)(*param_1 + 0x740) + 0x2b0))
                    (*(longlong **)(*param_1 + 0x740),lVar7 + 0x90,1,0);
        }
      }
      if (*(longlong **)(*param_1 + 0x748) != (longlong *)0x0) {
        lVar7 = **(longlong **)(*param_1 + 0x748);
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_28,L"Waiting for other players...",L"CharacterSelectMenu",
                           L"WaitingForPlayerPlural");
        (**(code **)(lVar7 + 0x2b0))(*(undefined8 *)(*param_1 + 0x748),uVar8,1,0);
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_20 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_20)(local_20);
            LOCK();
            piVar2 = (int *)((longlong)local_20 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_20 + 8))(local_20,1);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1410c04b0 FUN_1410c04b0 body=1994 status=ok
// SIG undefined FUN_1410c04b0(void)

/* WARNING: Removing unreachable block (ram,0x0001410c078a) */
/* WARNING: Removing unreachable block (ram,0x0001410c091c) */
/* WARNING: Removing unreachable block (ram,0x0001410c05e9) */
/* WARNING: Removing unreachable block (ram,0x0001410c0aae) */

void FUN_1410c04b0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  wchar_t *pwVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined2 *puVar13;
  wchar_t *local_res8;
  wchar_t *local_f8;
  int local_f0;
  undefined4 local_ec;
  wchar_t *local_e8;
  uint local_e0;
  undefined4 local_dc;
  wchar_t *local_d8;
  int local_d0;
  undefined4 local_cc;
  wchar_t *local_c8;
  uint local_c0;
  undefined4 local_bc;
  wchar_t *local_b8;
  int local_b0;
  undefined4 local_ac;
  wchar_t *local_a8;
  uint local_a0;
  undefined4 local_9c;
  wchar_t *local_98;
  int local_90;
  undefined4 local_8c;
  wchar_t *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  uint local_60;
  int local_58;
  undefined4 uStack_54;
  undefined1 local_48 [8];
  longlong *local_40;
  
  iVar9 = 1;
  iVar11 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar11 = 0;
  }
  if (*(int *)*param_1 < iVar11) {
    lVar2 = **(longlong **)(param_1[1] + 0x778);
    uVar5 = FText::FromString(local_48);
    (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1[1] + 0x778),uVar5,1,0);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      lVar2 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    local_78 = 0xffffffffffffffff;
    uStack_70 = 0xffffffffffffffff;
    local_68 = (longlong *)0x0;
    local_60 = 0;
    FUN_14203acd0(*(undefined8 *)param_1[2],"numLines",&local_78);
    iVar9 = local_58;
    if (*(int *)param_1[3] < local_58) {
      uVar4 = FUN_1410b8b20(param_1[4],0,param_2);
      uVar12 = 0;
      if (uVar4 != 0xffffffff) {
        iVar9 = *(int *)(param_2 + 1);
        uVar6 = iVar9 - 1;
        if (iVar9 == 0) {
          uVar6 = uVar12;
        }
        if (uVar4 < uVar6) {
          uVar6 = uVar4;
        }
        puVar13 = &DAT_143f3eda8;
        if (iVar9 == 0) {
          local_res8 = L"";
        }
        else {
          local_res8 = (wchar_t *)*param_2;
        }
        local_f8 = (wchar_t *)0x0;
        local_ec = 0;
        local_f0 = uVar6 + 1;
        if (uVar6 == 0) {
          local_f0 = 0;
        }
        if ((0 < local_f0) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0), pwVar7 = local_f8,
           0 < local_f0)) {
          wcsncpy(local_f8,local_res8,(longlong)(int)uVar6);
          pwVar7[(int)uVar6] = L'\0';
        }
        FUN_1410b97d0(param_1[5],&local_f8,*(undefined4 *)param_1[3]);
        if (local_f8 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        iVar9 = *(int *)(param_2 + 1);
        uVar6 = uVar4 + 0x7fffffff;
        uVar12 = iVar9 - 1;
        if (iVar9 == 0) {
          uVar12 = 0xffffffff;
        }
        uVar10 = 0;
        if (iVar9 == 0) {
          uVar12 = uVar10;
        }
        if (uVar4 < uVar12) {
          uVar12 = uVar4;
        }
        uVar4 = iVar9 - 1;
        if (iVar9 == 0) {
          uVar4 = uVar10;
        }
        uVar8 = uVar12;
        if ((uVar12 <= uVar6) && (uVar8 = uVar4, uVar6 < uVar4)) {
          uVar8 = uVar6;
        }
        if (iVar9 != 0) {
          puVar13 = (undefined2 *)*param_2;
        }
        iVar9 = uVar8 - uVar12;
        local_e8 = (wchar_t *)0x0;
        local_dc = 0;
        local_e0 = iVar9 + 1;
        if (iVar9 == 0) {
          local_e0 = uVar10;
        }
        if ((0 < (int)local_e0) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0), pwVar7 = local_e8,
           0 < (int)local_e0)) {
          wcsncpy(local_e8,puVar13 + (int)uVar12,(longlong)iVar9);
          pwVar7[iVar9] = L'\0';
        }
        plVar3 = *(longlong **)(param_1[6] + 0x38);
        if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::_guard_xfg_dispatch_icall_nop();
        }
        (**(code **)(*plVar3 + 0x10))(plVar3,&local_e8);
        pwVar7 = local_e8;
LAB_1410c0bf2:
        if (pwVar7 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        if ((local_60 >> 6 & 1) == 0) {
          return;
        }
        (**(code **)(*local_68 + 0x10))(local_68,&local_78,CONCAT44(uStack_54,local_58));
        return;
      }
      uVar4 = FUN_1410b8b20(param_1[4],1,param_2);
      if (uVar4 != 0xffffffff) {
        iVar9 = *(int *)(param_2 + 1);
        uVar6 = iVar9 - 1;
        if (iVar9 == 0) {
          uVar6 = uVar12;
        }
        if (uVar4 < uVar6) {
          uVar6 = uVar4;
        }
        puVar13 = &DAT_143f3eda8;
        if (iVar9 == 0) {
          local_res8 = L"";
        }
        else {
          local_res8 = (wchar_t *)*param_2;
        }
        local_d8 = (wchar_t *)0x0;
        local_cc = 0;
        local_d0 = uVar6 + 1;
        if (uVar6 == 0) {
          local_d0 = 0;
        }
        if ((0 < local_d0) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0), pwVar7 = local_d8,
           0 < local_d0)) {
          wcsncpy(local_d8,local_res8,(longlong)(int)uVar6);
          pwVar7[(int)uVar6] = L'\0';
        }
        FUN_1410b97d0(param_1[5],&local_d8,*(undefined4 *)param_1[3]);
        if (local_d8 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        iVar9 = *(int *)(param_2 + 1);
        uVar6 = uVar4 + 0x7fffffff;
        uVar12 = iVar9 - 1;
        if (iVar9 == 0) {
          uVar12 = 0xffffffff;
        }
        uVar10 = 0;
        if (iVar9 == 0) {
          uVar12 = uVar10;
        }
        if (uVar4 < uVar12) {
          uVar12 = uVar4;
        }
        uVar4 = iVar9 - 1;
        if (iVar9 == 0) {
          uVar4 = uVar10;
        }
        uVar8 = uVar12;
        if ((uVar12 <= uVar6) && (uVar8 = uVar4, uVar6 < uVar4)) {
          uVar8 = uVar6;
        }
        if (iVar9 != 0) {
          puVar13 = (undefined2 *)*param_2;
        }
        iVar9 = uVar8 - uVar12;
        local_c8 = (wchar_t *)0x0;
        local_bc = 0;
        local_c0 = iVar9 + 1;
        if (iVar9 == 0) {
          local_c0 = uVar10;
        }
        if ((0 < (int)local_c0) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0), pwVar7 = local_c8,
           0 < (int)local_c0)) {
          wcsncpy(local_c8,puVar13 + (int)uVar12,(longlong)iVar9);
          pwVar7[iVar9] = L'\0';
        }
        plVar3 = *(longlong **)(param_1[6] + 0x38);
        if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::_guard_xfg_dispatch_icall_nop();
        }
        (**(code **)(*plVar3 + 0x10))(plVar3,&local_c8);
        pwVar7 = local_c8;
        goto LAB_1410c0bf2;
      }
      uVar4 = FUN_1410b8b20(param_1[4],2,param_2);
      if (uVar4 != 0xffffffff) {
        iVar9 = *(int *)(param_2 + 1);
        uVar12 = iVar9 - 1;
        if (iVar9 == 0) {
          uVar12 = 0;
        }
        if (uVar4 < uVar12) {
          uVar12 = uVar4;
        }
        puVar13 = &DAT_143f3eda8;
        if (iVar9 == 0) {
          local_res8 = L"";
        }
        else {
          local_res8 = (wchar_t *)*param_2;
        }
        local_b8 = (wchar_t *)0x0;
        local_ac = 0;
        local_b0 = uVar12 + 1;
        if (uVar12 == 0) {
          local_b0 = 0;
        }
        if ((0 < local_b0) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0), pwVar7 = local_b8,
           0 < local_b0)) {
          wcsncpy(local_b8,local_res8,(longlong)(int)uVar12);
          pwVar7[(int)uVar12] = L'\0';
        }
        FUN_1410b97d0(param_1[5],&local_b8,*(undefined4 *)param_1[3]);
        if (local_b8 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        iVar9 = *(int *)(param_2 + 1);
        uVar6 = uVar4 + 0x7fffffff;
        uVar12 = iVar9 - 1;
        if (iVar9 == 0) {
          uVar12 = 0xffffffff;
        }
        uVar10 = 0;
        if (iVar9 == 0) {
          uVar12 = uVar10;
        }
        if (uVar4 < uVar12) {
          uVar12 = uVar4;
        }
        uVar4 = iVar9 - 1;
        if (iVar9 == 0) {
          uVar4 = uVar10;
        }
        uVar8 = uVar12;
        if ((uVar12 <= uVar6) && (uVar8 = uVar4, uVar6 < uVar4)) {
          uVar8 = uVar6;
        }
        if (iVar9 != 0) {
          puVar13 = (undefined2 *)*param_2;
        }
        iVar9 = uVar8 - uVar12;
        local_a8 = (wchar_t *)0x0;
        local_9c = 0;
        local_a0 = iVar9 + 1;
        if (iVar9 == 0) {
          local_a0 = uVar10;
        }
        if ((0 < (int)local_a0) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0), pwVar7 = local_a8,
           0 < (int)local_a0)) {
          wcsncpy(local_a8,puVar13 + (int)uVar12,(longlong)iVar9);
          pwVar7[iVar9] = L'\0';
        }
        plVar3 = *(longlong **)(param_1[6] + 0x38);
        if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::_guard_xfg_dispatch_icall_nop();
        }
        (**(code **)(*plVar3 + 0x10))(plVar3,&local_a8);
        pwVar7 = local_a8;
        goto LAB_1410c0bf2;
      }
      uVar4 = FUN_1410b8b20(param_1[4],3,param_2);
      if (uVar4 != 0xffffffff) {
        iVar9 = *(int *)(param_2 + 1);
        uVar6 = iVar9 - 1;
        if (iVar9 == 0) {
          uVar6 = uVar12;
        }
        if (uVar4 < uVar6) {
          uVar6 = uVar4;
        }
        puVar13 = &DAT_143f3eda8;
        if (iVar9 == 0) {
          local_res8 = L"";
        }
        else {
          local_res8 = (wchar_t *)*param_2;
        }
        local_98 = (wchar_t *)0x0;
        local_8c = 0;
        local_90 = uVar6 + 1;
        if (uVar6 == 0) {
          local_90 = 0;
        }
        if ((0 < local_90) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0), pwVar7 = local_98,
           0 < local_90)) {
          wcsncpy(local_98,local_res8,(longlong)(int)uVar6);
          pwVar7[(int)uVar6] = L'\0';
        }
        FUN_1410b97d0(param_1[5],&local_98,*(undefined4 *)param_1[3]);
        if (local_98 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        iVar9 = *(int *)(param_2 + 1);
        uVar6 = uVar4 + 0x7fffffff;
        uVar12 = iVar9 - 1;
        if (iVar9 == 0) {
          uVar12 = 0xffffffff;
        }
        uVar10 = 0;
        if (iVar9 == 0) {
          uVar12 = uVar10;
        }
        if (uVar4 < uVar12) {
          uVar12 = uVar4;
        }
        uVar4 = iVar9 - 1;
        if (iVar9 == 0) {
          uVar4 = uVar10;
        }
        uVar8 = uVar12;
        if ((uVar12 <= uVar6) && (uVar8 = uVar4, uVar6 < uVar4)) {
          uVar8 = uVar6;
        }
        if (iVar9 != 0) {
          puVar13 = (undefined2 *)*param_2;
        }
        iVar9 = uVar8 - uVar12;
        local_88 = (wchar_t *)0x0;
        local_7c = 0;
        local_80 = iVar9 + 1;
        if (iVar9 == 0) {
          local_80 = uVar10;
        }
        if ((0 < (int)local_80) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0), pwVar7 = local_88,
           0 < (int)local_80)) {
          wcsncpy(local_88,puVar13 + (int)uVar12,(longlong)iVar9);
          pwVar7[iVar9] = L'\0';
        }
        plVar3 = *(longlong **)(param_1[6] + 0x38);
        if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::_guard_xfg_dispatch_icall_nop();
        }
        (**(code **)(*plVar3 + 0x10))(plVar3,&local_88);
        pwVar7 = local_88;
        goto LAB_1410c0bf2;
      }
    }
    if ((local_60 >> 6 & 1) != 0) {
      (**(code **)(*local_68 + 0x10))(local_68,&local_78,CONCAT44(uStack_54,local_58));
    }
  }
  FUN_1410b97d0(param_1[5],param_2,iVar9);
  return;
}



// FUNCTION 1410c0c80 FUN_1410c0c80 body=1178 status=ok
// SIG undefined FUN_1410c0c80(void)

void FUN_1410c0c80(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar4 = FWeakObjectPtr::IsValid(&local_res10);
  lVar10 = 0;
  if (cVar4 == '\0') {
LAB_1410c0d0d:
    bVar3 = false;
  }
  else {
    lVar6 = FWeakObjectPtr::Get(&local_res10);
    iVar2 = *(int *)(lVar6 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar12 = iVar2 >> 0x1f & 0xffff;
      uVar5 = iVar2 + uVar12;
      lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
               (longlong)(int)((uVar5 & 0xffff) - uVar12) * 0x18;
    }
    if ((*(uint *)(lVar10 + 8) & 0x30000000) != 0) goto LAB_1410c0d0d;
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  if (*(longlong *)(*param_1 + 0xc18) == 0) {
    return;
  }
  lVar6 = FUN_140e971d0();
  *(undefined1 *)(*param_1 + 0x1238) = 6;
  uVar7 = FUN_1428dfc70();
  uStack_30 = 0;
  *(undefined8 *)(*param_1 + 0x1240) = uVar7;
  lVar10 = *param_1;
  local_38 = FUN_1410cdfa0;
  plVar1 = (longlong *)(lVar10 + 0x1258);
  plVar8 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar8 + 1,lVar10);
    *(undefined4 *)(plVar8 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar8 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar8 + 3) = uStack_30;
    *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_2c;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar8[5] = lVar9;
    *plVar8 = (longlong)&PTR_FUN_143fcff08;
  }
  if (&local_38 == plVar1) {
LAB_1410c0dde:
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x28))(plVar8,0);
      lVar10 = FMemory::Realloc(plVar8,0,0);
      if (lVar10 != 0) {
        FMemory::Free(lVar10);
      }
    }
  }
  else {
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x30))(plVar8,plVar1);
      goto LAB_1410c0dde;
    }
    if ((*(int *)(lVar10 + 0x1260) != 0) &&
       (plVar8 = (longlong *)*plVar1, plVar8 != (longlong *)0x0)) {
      (**(code **)(*plVar8 + 0x28))(plVar8,0);
      if (*plVar1 != 0) {
        lVar9 = FMemory::Realloc(*plVar1,0,0);
        *plVar1 = lVar9;
      }
      *(undefined4 *)(lVar10 + 0x1260) = 0;
    }
  }
  lVar10 = *param_1;
  local_38 = FUN_1410c4990;
  uStack_30 = 0;
  plVar1 = (longlong *)(lVar10 + 0x1248);
  plVar8 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar8 + 1,lVar10);
    *(undefined4 *)(plVar8 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar8 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar8 + 3) = uStack_30;
    *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_2c;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar8[5] = lVar9;
    *plVar8 = (longlong)&PTR_FUN_143fcff08;
  }
  if (&local_38 == plVar1) {
LAB_1410c0e8a:
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x28))(plVar8,0);
      lVar10 = FMemory::Realloc(plVar8,0,0);
      if (lVar10 != 0) {
        FMemory::Free(lVar10);
      }
    }
  }
  else {
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x30))(plVar8,plVar1);
      goto LAB_1410c0e8a;
    }
    if ((*(int *)(lVar10 + 0x1250) != 0) &&
       (plVar8 = (longlong *)*plVar1, plVar8 != (longlong *)0x0)) {
      (**(code **)(*plVar8 + 0x28))(plVar8,0);
      if (*plVar1 != 0) {
        lVar9 = FMemory::Realloc(*plVar1,0,0);
        *plVar1 = lVar9;
      }
      *(undefined4 *)(lVar10 + 0x1250) = 0;
    }
  }
  lVar10 = *param_1;
  local_38 = FUN_1410e4750;
  uStack_30 = 0;
  plVar1 = (longlong *)(lVar10 + 0x1268);
  plVar8 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_FUN_1446a53d0;
    FWeakObjectPtr::operator=(plVar8 + 1,lVar10);
    *(undefined4 *)(plVar8 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar8 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar8 + 3) = uStack_30;
    *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_2c;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar8[5] = lVar9;
  }
  if (&local_38 != plVar1) {
    if (plVar8 == (longlong *)0x0) {
      if ((*(int *)(lVar10 + 0x1270) != 0) &&
         (plVar8 = (longlong *)*plVar1, plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        if (*plVar1 != 0) {
          lVar9 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar9;
        }
        *(undefined4 *)(lVar10 + 0x1270) = 0;
      }
      goto LAB_1410c0f5b;
    }
    (**(code **)(*plVar8 + 0x30))(plVar8,plVar1);
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    lVar10 = FMemory::Realloc(plVar8,0,0);
    if (lVar10 != 0) {
      FMemory::Free(lVar10);
    }
  }
LAB_1410c0f5b:
  puVar11 = (undefined8 *)FName::FName(local_res8,L"Vehicle",1);
  FUN_1411f9b50(*param_1 + 0x830,*puVar11);
  FUN_1411f9940(*param_1 + 0x830,*param_1 + 0x1238,1);
  FUN_1411e8430(*param_1 + 0x830,*param_1,lVar6);
  FUN_1411fd0a0(*param_1 + 0x830,0x3e4ccccd);
  *(undefined1 *)(*param_1 + 0x128a) = 1;
  if ((lVar6 != 0) && (lVar10 = *(longlong *)(lVar6 + 0x848), lVar10 != 0)) {
    lVar6 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar10 = FUN_140e21bd0(lVar10), lVar10 != 0)) {
      FUN_140e37120(lVar10,1);
    }
  }
  FUN_1410ebfc0(*param_1,*(undefined4 *)(*param_1 + 0xc40));
  return;
}



// FUNCTION 1410c1120 FUN_1410c1120 body=726 status=ok
// SIG undefined FUN_1410c1120(void)

void FUN_1410c1120(longlong *param_1,longlong *param_2,short *param_3,undefined8 param_4)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong local_58;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  wchar_t *local_30;
  
  if ((*param_2 == 0) && (*(longlong *)(*param_1 + 0x1078) != 0)) {
    pwVar6 = (wchar_t *)0x0;
    local_50 = 0;
    local_58 = 0;
    if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (param_3[lVar8] != 0);
      uVar7 = (int)lVar8 + 1;
      local_50 = (ulonglong)uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      }
      FGenericPlatformString::Memcpy(local_58,param_3,(longlong)(int)uVar7 * 2);
    }
    local_38 = (longlong *)0x0;
    local_30 = (wchar_t *)0x0;
    FUN_140f15b10(*(undefined8 *)(*param_1 + 0x1078),param_2,&local_58,0,6,&local_38);
    plVar9 = local_38;
    for (iVar10 = (int)local_30; iVar10 != 0; iVar10 = iVar10 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
    if (*param_2 != 0) {
      *(undefined1 *)(*param_2 + 0x198) = 0;
      pwVar3 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnNavButtonPressed",L"::");
      pwVar2 = pwVar6;
      while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
        pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar2 = pwVar1;
      }
      FName::FName(&local_58,pwVar2 + 2,1);
      lVar4 = local_58;
      lVar8 = *param_2;
      FWeakObjectPtr::operator=(lVar8 + 0x1b0,*param_1);
      *(longlong *)(lVar8 + 0x1b8) = lVar4;
      if ((lVar4 != 0) && (lVar4 = FWeakObjectPtr::Get(lVar8 + 0x1b0), lVar4 != 0)) {
        UObject::FindFunction(lVar4,*(undefined8 *)(lVar8 + 0x1b8));
      }
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      FWeakObjectPtr::operator=(&local_58,0);
      FWeakObjectPtr::operator=(&local_50,0);
      FWeakObjectPtr::operator=(&local_48,0);
      FWeakObjectPtr::operator=(&local_40,0);
      plVar9 = (longlong *)*param_2;
      local_38 = plVar9;
      if (plVar9 != (longlong *)0x0) {
        uVar5 = UBlendableInterface::GetPrivateStaticClass();
        pwVar6 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(plVar9,uVar5);
      }
      local_30 = pwVar6;
      FUN_142ecfd10(*param_1,&local_38,&local_58);
      local_58 = 0;
      local_50 = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      FGenericPlatformString::Memcpy(local_58,L"navArrow",0x12);
      local_38 = (longlong *)0x0;
      local_30 = (wchar_t *)0x0;
      FUN_140e98b90(*param_2,param_4,&local_58,0,6,&local_38);
      plVar9 = local_38;
      for (iVar10 = (int)local_30; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 2;
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free(local_38);
      }
      if (local_58 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1410c1400 FUN_1410c1400 body=233 status=ok
// SIG undefined FUN_1410c1400(void)

void FUN_1410c1400(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int local_res10 [2];
  longlong *local_res18 [2];
  
  if (((int)*param_2 != 0) || (*(int *)((longlong)param_2 + 4) != 0)) {
    lVar1 = *param_2;
    lVar2 = *param_1;
    plVar7 = (longlong *)(lVar2 + 0x6f0);
    if (*(int *)(lVar2 + 0x6f8) != *(int *)(lVar2 + 0x724)) {
      lVar4 = *(longlong *)(lVar2 + 0x730);
      if (*(longlong *)(lVar2 + 0x730) == 0) {
        lVar4 = lVar2 + 0x728;
      }
      iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                               (longlong)*(int *)(lVar2 + 0x738) - 1U) * 4);
      if (iVar3 != -1) {
        do {
          plVar6 = (longlong *)((longlong)iVar3 * 0x20 + *plVar7);
          if (*plVar6 == lVar1) {
            if (iVar3 != -1) goto LAB_1410c1491;
            break;
          }
          iVar3 = (int)plVar6[3];
        } while (iVar3 != -1);
      }
    }
    plVar6 = (longlong *)0x0;
LAB_1410c1491:
    plVar5 = plVar6 + 1;
    if (plVar6 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    if ((plVar5 == (longlong *)0x0) &&
       (local_res18[0] = param_2, FUN_1410ad4b0(plVar7,local_res10,local_res18,0),
       *(int *)((longlong)local_res10[0] * 0x20 + *plVar7 + 0x14) < *(int *)(*param_1 + 0x6ac))) {
      TArray<void_*,FDefaultAllocator>::ResizeTo();
    }
  }
  return;
}



// FUNCTION 1410c14f0 FUN_1410c14f0 body=166 status=ok
// SIG undefined FUN_1410c14f0(void)

undefined8 FUN_1410c14f0(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
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
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      lVar4 = FUN_140f9aee0(*param_1);
      if (lVar4 != 0) {
        uVar5 = FUN_140bba450(lVar4);
        return uVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 1410c15a0 FUN_1410c15a0 body=1019 status=ok
// SIG undefined FUN_1410c15a0(void)

ulonglong FUN_1410c15a0(longlong *param_1)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  undefined2 local_res10;
  undefined4 local_res18;
  undefined4 local_res1c;
  wchar_t *local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_res18 = (undefined4)param_1[1];
  local_res1c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  uVar5 = FWeakObjectPtr::IsValid(&local_res18);
  if ((char)uVar5 != '\0') {
    lVar6 = FWeakObjectPtr::Get(&local_res18);
    uVar8 = 0;
    iVar4 = *(int *)(lVar6 + 0xc);
    uVar5 = uVar8;
    if (iVar4 < (int)DAT_1469e91c4) {
      uVar10 = iVar4 >> 0x1f & 0xffff;
      uVar3 = iVar4 + uVar10;
      uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar10) * 0x18;
    }
    if ((*(uint *)(uVar5 + 8) & 0x30000000) == 0) {
      local_58 = (wchar_t *)0x0;
      local_50 = 0;
      if (((char)param_1[2] == '\0') || (*(char *)(*param_1 + 0xc48) != '\0')) {
        cVar1 = *(char *)(*param_1 + 0xc48);
        if (cVar1 == '\0') {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,0x12);
          iVar4 = (int)local_50 + 0x12;
          local_50 = CONCAT44(local_50._4_4_,iVar4);
          if (local_50._4_4_ < iVar4) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
          }
          builtin_wcsncpy(local_58,L"customizationExit",0x12);
        }
        else if (cVar1 == '\x01') {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,0x13);
          iVar4 = (int)local_50 + 0x13;
          local_50 = CONCAT44(local_50._4_4_,iVar4);
          if (local_50._4_4_ < iVar4) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
          }
          builtin_wcsncpy(local_58,L"customizationIntro",0x13);
          lVar6 = *(longlong *)(*param_1 + 0x10e0);
          if (lVar6 != 0) {
            FUN_1410ebb00(lVar6,*(undefined2 *)(*param_1 + 0xc49));
          }
        }
        else if (cVar1 == '\x02') {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,0xb);
          iVar4 = (int)local_50 + 0xb;
          local_50 = CONCAT44(local_50._4_4_,iVar4);
          if (local_50._4_4_ < iVar4) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
          }
          builtin_wcsncpy(local_58,L"deployAnim",0xb);
        }
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,0x10);
        iVar4 = (int)local_50 + 0x10;
        local_50 = CONCAT44(local_50._4_4_,iVar4);
        if (local_50._4_4_ < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
        }
        builtin_wcsncpy(local_58,L"catchARideIntro",0x10);
      }
      lVar6 = *param_1;
      if (*(longlong *)(lVar6 + 0x1078) != 0) {
        FUN_142088910(*(longlong *)(lVar6 + 0x1078),&local_58);
        lVar6 = *param_1;
      }
      FUN_142ed1500(lVar6);
      local_38 = 0;
      uStack_30 = 0;
      FUN_142ed36d0(*param_1,&local_38,0);
      lVar6 = *param_1;
      lVar11 = *(longlong *)(lVar6 + 2000);
      lVar12 = (longlong)*(int *)(lVar6 + 0x7d8) * 0xe8 + lVar11;
      if (lVar11 != lVar12) {
        do {
          if (*(longlong *)(lVar11 + 0xd8) != 0) {
            plVar9 = (longlong *)(*(longlong *)(lVar11 + 0xd8) + 0x170);
            (**(code **)(*plVar9 + 0x38))(plVar9,*(char *)(*param_1 + 0xc48) == '\0');
          }
          lVar11 = lVar11 + 0xe8;
        } while (lVar11 != lVar12);
        lVar6 = *param_1;
      }
      if (((char)param_1[2] != '\0') && (0 < *(int *)(lVar6 + 0x7d8))) {
        *(undefined2 *)(lVar6 + 0xc49) = *(undefined2 *)(*(longlong *)(lVar6 + 2000) + 0x18);
        lVar6 = *param_1;
      }
      lVar11 = *(longlong *)(lVar6 + 2000);
      uVar2 = *(undefined2 *)(lVar6 + 0xc49);
      lVar12 = (longlong)*(int *)(lVar6 + 0x7d8) * 0xe8 + lVar11;
      if (lVar11 != lVar12) {
        local_res10._1_1_ = (char)((ushort)uVar2 >> 8);
        do {
          if ((*(char *)(lVar11 + 0x18) == (char)uVar2) &&
             (*(char *)(lVar11 + 0x19) == local_res10._1_1_)) goto LAB_1410c18bd;
          lVar11 = lVar11 + 0xe8;
        } while (lVar11 != lVar12);
      }
      lVar11 = lVar6 + 0xf60;
LAB_1410c18bd:
      local_res10 = uVar2;
      if (*(char *)(lVar6 + 0xc48) == '\0') {
        if (*(longlong *)(lVar11 + 0xe0) != 0) {
          FUN_1410c8f10();
        }
        lVar6 = *(longlong *)(lVar11 + 0xd8);
        local_48 = lVar6;
        if (lVar6 != 0) {
          uVar7 = UBlendableInterface::GetPrivateStaticClass();
          uVar8 = UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar7);
        }
        local_40 = uVar8;
        FUN_142ed36d0(*param_1,&local_48,0);
      }
      lVar6 = *param_1;
      if (*(char *)(lVar6 + 0xc48) == '\x01') {
        if (*(longlong *)(lVar11 + 0xe0) != 0) {
          FUN_1410c2350(*(longlong *)(lVar11 + 0xe0));
          lVar6 = *param_1;
        }
        if ((*(char *)(lVar11 + 0x19) == '\b') && (*(longlong *)(lVar6 + 0x10f0) != 0)) {
          FUN_1410e77c0();
          lVar6 = *param_1;
        }
      }
      if (*(longlong *)(lVar6 + 0x1088) != 0) {
        FUN_1410e97d0();
        lVar6 = *param_1;
      }
      *(undefined1 *)(lVar6 + 0x1138) = 1;
      LOCK();
      uVar3 = *(uint *)(*param_1 + 0x588);
      *(uint *)(*param_1 + 0x588) = 1;
      uVar5 = (ulonglong)uVar3;
      UNLOCK();
      if (local_58 != (wchar_t *)0x0) {
        uVar5 = FMemory::Free();
      }
    }
  }
  return uVar5;
}



// FUNCTION 1410c19a0 FUN_1410c19a0 body=157 status=ok
// SIG undefined FUN_1410c19a0(void)

void FUN_1410c19a0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  lVar1 = *param_1;
  plVar2 = *(longlong **)(lVar1 + 0x760);
  uVar3 = (longlong)*(int *)(lVar1 + 0x768) & 0x1fffffffffffffff;
  if (plVar2 + *(int *)(lVar1 + 0x768) < plVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      if (*plVar2 != 0) {
        FUN_140e46bf0();
      }
      plVar2 = plVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar3);
    lVar1 = *param_1;
  }
  *(undefined4 *)(lVar1 + 0x768) = 0;
  if (*(int *)(lVar1 + 0x76c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(lVar1 + 0x760,0);
  }
  return;
}



// FUNCTION 1410c1a40 FUN_1410c1a40 body=401 status=ok
// SIG undefined FUN_1410c1a40(void)

void FUN_1410c1a40(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong local_38 [2];
  
  plVar2 = *(longlong **)(*param_1 + 2000);
  iVar1 = *(int *)(*param_1 + 0x7d8);
  if (plVar2 != plVar2 + (longlong)iVar1 * 0x1d) {
    plVar13 = plVar2 + 0x1b;
    do {
      if (*plVar13 != 0) {
        FUN_1410e94b0(*plVar13,param_2);
      }
      lVar3 = *param_1;
      if (*(char *)(lVar3 + 0xc48) == '\x01') {
        if (((char)plVar13[-0x18] == *(char *)(lVar3 + 0xc49)) &&
           (*(char *)((longlong)plVar13 + -0xbf) == *(char *)(lVar3 + 0xc4a))) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if ((bVar5) && (plVar13[1] != 0)) {
          lVar3 = plVar13[1] + 0x38;
          cVar7 = FWeakObjectPtr::IsValid(lVar3);
          if (cVar7 != '\0') {
            plVar10 = (longlong *)FWeakObjectPtr::Get(lVar3);
            iVar8 = (**(code **)(*plVar10 + 0x2d8))(plVar10);
            plVar10 = (longlong *)FWeakObjectPtr::Get(lVar3);
            iVar9 = (**(code **)(*plVar10 + 0x2e0))(plVar10);
            for (; iVar8 <= iVar9; iVar8 = iVar8 + 1) {
              uVar11 = FWeakObjectPtr::Get(lVar3);
              FUN_142eed030(uVar11,local_38,iVar8);
              lVar6 = local_38[0];
              if (local_38[0] != 0) {
                lVar12 = ALobbyBeaconPlayerState::GetPrivateStaticClass();
                lVar4 = *(longlong *)(lVar6 + 0x10);
                if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar12 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8) !=
                    lVar12 + 0x88)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if (bVar5) {
                  FUN_1410e94b0(lVar6,param_2);
                }
              }
            }
          }
        }
      }
      plVar10 = plVar13 + 2;
      plVar13 = plVar13 + 0x1d;
    } while (plVar10 != plVar2 + (longlong)iVar1 * 0x1d);
  }
  return;
}



// FUNCTION 1410c1be0 FUN_1410c1be0 body=236 status=ok
// SIG undefined FUN_1410c1be0(void)

void FUN_1410c1be0(longlong *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  if (0 < *(int *)(*param_1 + 0x710)) {
    uVar1 = *(undefined8 *)(*(longlong *)(*param_1 + 0x708) + 0x28);
    lVar3 = FUN_1410ae4a0();
    if (lVar3 != 0) {
      plVar4 = (longlong *)UListView::OnItemSelectionChanged(lVar3);
      plVar7 = (longlong *)*plVar4;
      plVar4 = plVar7 + (int)plVar4[1];
      for (; plVar7 != plVar4; plVar7 = plVar7 + 1) {
        if ((*plVar7 != 0) && (lVar3 = *(longlong *)(*plVar7 + 0x30), lVar3 != 0)) {
          lVar5 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            uVar6 = FUN_140cfcaa0(lVar3);
            FUN_140d12170(lVar3,uVar6);
            FUN_1410f5980(*param_1,lVar3,uVar1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1410c1cd0 FUN_1410c1cd0 body=472 status=ok
// SIG undefined FUN_1410c1cd0(void)

void FUN_1410c1cd0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_18 [2];
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar6 = FWeakObjectPtr::Get(&local_res10);
    iVar5 = *(int *)(lVar6 + 0xc);
    if (iVar5 < (int)DAT_1469e91c4) {
      uVar9 = iVar5 >> 0x1f & 0xffff;
      uVar4 = iVar5 + uVar9;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
    }
    else {
      lVar6 = 0;
    }
    if ((*(uint *)(lVar6 + 8) & 0x30000000) == 0) {
      bVar1 = true;
      goto LAB_1410c1d59;
    }
  }
  bVar1 = false;
LAB_1410c1d59:
  if (bVar1) {
    lVar6 = param_1[2];
    if (lVar6 != 0) {
      lVar7 = ALobbyBeaconPlayerState::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if (((int)param_1[3] == -1) || (*(char *)((longlong)param_1 + 0x1e) == '\0')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          local_18[0] = 0;
          local_18[1] = 0;
          FUN_1410cdcb0(lVar6,2,*(undefined2 *)(*param_1 + 0x40),local_18);
          if (local_18[0] != 0) {
            FMemory::Free();
          }
        }
        if (*(char *)((longlong)param_1 + 0x1c) != '\0') {
          cVar2 = FWeakObjectPtr::IsValid(*param_1 + 0x38);
          if (cVar2 != '\0') {
            uVar8 = FWeakObjectPtr::Get(*param_1 + 0x38);
            FUN_142ebe780(uVar8,lVar6);
          }
        }
        FUN_142ed3540(lVar6 + 0x170,*(undefined1 *)((longlong)param_1 + 0x1c),0);
        iVar5 = FUN_1410cae60(*param_1);
        FUN_142ed2820(lVar6,(int)param_1[3] == iVar5,1);
        if ((*(char *)(*param_1 + 0x68) == '\0') || ((int)param_1[3] != 0)) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
        *(undefined1 *)(lVar6 + 800) = uVar3;
        FUN_1410e7ef0(lVar6);
      }
    }
    cVar2 = FWeakObjectPtr::IsValid(*param_1 + 0x28);
    if (cVar2 != '\0') {
      lVar6 = FWeakObjectPtr::Get(*param_1 + 0x28);
      *(undefined1 *)(lVar6 + 0x1138) = 1;
    }
  }
  return;
}



// FUNCTION 1410c1eb0 FUN_1410c1eb0 body=403 status=ok
// SIG undefined FUN_1410c1eb0(void)

void FUN_1410c1eb0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  
  lVar4 = (**(code **)(*(longlong *)*param_1 + 0x148))();
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(lVar4 + 400) == 0) {
    lVar4 = lVar4 + 0x400;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 400) + 0x98);
  }
  lVar4 = FLatentActionManager::FindExistingAction<FDelayAction>
                    (lVar4,*(undefined8 *)(*param_1 + 0x750),*(undefined4 *)(*param_1 + 0x744));
  if (lVar4 == 0) {
    return;
  }
  lVar5 = FWeakObjectPtr::Get(*param_1 + 0x58c);
  if (lVar5 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_1410c1f65;
  }
  lVar5 = 0;
LAB_1410c1f65:
  FWeakObjectPtr::operator=(local_res8,lVar5);
  iVar1 = *(int *)(lVar4 + 0x10);
  if (iVar1 != 0) {
    iVar8 = 0;
    cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                      (*(undefined8 *)(lVar4 + 8),local_res8);
    bVar9 = cVar3 == '\0';
    iVar7 = 0;
    do {
      iVar2 = iVar7;
      do {
        iVar2 = iVar2 + 1;
        if (iVar1 <= iVar2) break;
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                          (*(longlong *)(lVar4 + 8) + (longlong)iVar2 * 8,local_res8);
      } while (bVar9 == (cVar3 == '\0'));
      if (bVar9 != false) {
        if (iVar8 != iVar7) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(lVar4 + 8) + (longlong)iVar8 * 8),
                     (void *)(*(longlong *)(lVar4 + 8) + (longlong)iVar7 * 8),
                     (longlong)(iVar2 - iVar7) << 3);
        }
        iVar8 = iVar8 + (iVar2 - iVar7);
      }
      bVar9 = (bool)(bVar9 ^ 1);
      iVar7 = iVar2;
    } while (iVar2 < iVar1);
    *(int *)(lVar4 + 0x10) = iVar8;
  }
  return;
}



// FUNCTION 1410c2050 FUN_1410c2050 body=133 status=ok
// SIG undefined FUN_1410c2050(void)

undefined8 * FUN_1410c2050(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong local_18 [2];
  
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
  puVar2 = (undefined8 *)(*(code *)*param_1)(local_18,uVar1);
  *param_2 = 0;
  *param_2 = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1410c20f0 FUN_1410c20f0 body=66 status=ok
// SIG undefined FUN_1410c20f0(void)

undefined8 * FUN_1410c20f0(undefined8 *param_1,ulonglong param_2)

{
  FUN_1410b4430(param_1 + 2);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 1410c2140 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAIDataProviderStructValue::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1410c2190 FUN_1410c2190 body=65 status=ok
// SIG undefined FUN_1410c2190(void)

undefined8 * FUN_1410c2190(undefined8 *param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)(param_1 + 3));
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1410c21e0 FUN_1410c21e0 body=89 status=ok
// SIG undefined FUN_1410c21e0(void)

undefined8 * FUN_1410c21e0(undefined8 *param_1,ulonglong param_2)

{
  FUN_140ac7ce0(param_1 + 0x33);
  FUN_140ac7ce0(param_1 + 2);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,800);
  }
  return param_1;
}



// FUNCTION 1410c2240 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TWeakBaseFunctorDelegateInstance<UCoreGameInstance,TTypeWrapper<void>___cdecl(void),<lambda_e4f57f489b4cca831a50b2a98c2d2d09>_>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_140d65960(param_1 + 4);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 1410c2290 FUN_1410c2290 body=43 status=ok
// SIG undefined FUN_1410c2290(void)

undefined8 * FUN_1410c2290(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fcfaf0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1410c22c0 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_CopyableOwnedObject<<lambda_08c4cb90956a11142046112acbe07391>,1>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143fcfaf0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1410c2310 FUN_1410c2310 body=52 status=ok
// SIG undefined FUN_1410c2310(void)

undefined8 FUN_1410c2310(undefined8 param_1,ulonglong param_2)

{
  FUN_1410b4750();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x12d0);
  }
  return param_1;
}



// FUNCTION 1410c2350 FUN_1410c2350 body=2021 status=ok
// SIG undefined FUN_1410c2350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410c2350(longlong param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  longlong *plVar15;
  wchar_t *pwVar16;
  int iVar17;
  int iVar18;
  undefined1 auStack_6c8 [32];
  undefined2 local_6a8;
  undefined1 local_698;
  byte local_697;
  byte local_696 [6];
  undefined8 local_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 local_670;
  longlong local_668;
  longlong local_660;
  longlong local_658;
  undefined1 local_650 [24];
  code *local_638 [2];
  undefined1 local_628 [32];
  undefined8 local_608;
  undefined4 local_5f8;
  undefined1 *local_5e8 [2];
  undefined1 local_5d8 [32];
  undefined8 local_5b8;
  undefined4 local_5a8;
  undefined1 local_598 [80];
  undefined1 local_548 [80];
  longlong local_4f8;
  undefined1 local_4f0 [392];
  undefined1 local_368 [400];
  undefined1 local_1d8 [208];
  undefined1 local_108 [208];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_6c8;
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x30);
  if ((cVar4 == '\0') && (cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x28), cVar4 != '\0')) {
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x28);
    lVar8 = FUN_140e971d0(uVar7);
    if (lVar8 != 0) {
      FWeakObjectPtr::operator=(param_1 + 0x30,*(undefined8 *)(lVar8 + 0xc70));
    }
  }
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x38);
  if (cVar4 == '\0') {
    return;
  }
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x28);
  if (cVar4 == '\0') {
    return;
  }
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x30);
  if (cVar4 == '\0') {
    return;
  }
  pwVar16 = (wchar_t *)0x0;
  pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnUpdateCell",L"::");
  pwVar13 = pwVar16;
  while (pwVar2 = pwVar9, pwVar2 != (wchar_t *)0x0) {
    pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar13 = pwVar2;
  }
  FName::FName(&local_668,pwVar13 + 2,1);
  lVar8 = FWeakObjectPtr::Get(param_1 + 0x38);
  FWeakObjectPtr::operator=(lVar8 + 800,param_1);
  *(longlong *)(lVar8 + 0x328) = local_668;
  local_690 = 0;
  if ((local_668 != 0) && (lVar10 = FWeakObjectPtr::Get(lVar8 + 800), lVar10 != 0)) {
    UObject::FindFunction(lVar10,*(undefined8 *)(lVar8 + 0x328));
  }
  pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnCellFocused",L"::");
  pwVar13 = pwVar16;
  while (pwVar2 = pwVar9, pwVar2 != (wchar_t *)0x0) {
    pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar13 = pwVar2;
  }
  FName::FName(&local_660,pwVar13 + 2,1);
  lVar8 = FWeakObjectPtr::Get(param_1 + 0x38);
  FWeakObjectPtr::operator=(lVar8 + 0x330,param_1);
  *(longlong *)(lVar8 + 0x338) = local_660;
  local_690 = 0;
  if ((local_660 != 0) && (lVar10 = FWeakObjectPtr::Get(lVar8 + 0x330), lVar10 != 0)) {
    UObject::FindFunction(lVar10,*(undefined8 *)(lVar8 + 0x338));
  }
  pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnCellClicked",L"::");
  pwVar13 = pwVar16;
  while (pwVar2 = pwVar9, pwVar2 != (wchar_t *)0x0) {
    pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar13 = pwVar2;
  }
  FName::FName(&local_658,pwVar13 + 2,1);
  lVar8 = FWeakObjectPtr::Get(param_1 + 0x38);
  FWeakObjectPtr::operator=(lVar8 + 0x340,param_1);
  *(longlong *)(lVar8 + 0x348) = local_658;
  local_690 = 0;
  if ((local_658 != 0) && (lVar10 = FWeakObjectPtr::Get(lVar8 + 0x340), lVar10 != 0)) {
    UObject::FindFunction(lVar10,*(undefined8 *)(lVar8 + 0x348));
  }
  lVar8 = FWeakObjectPtr::Get(param_1 + 0x28);
  uVar7 = FWeakObjectPtr::Get(param_1 + 0x38);
  FUN_142ed4250(uVar7,*(undefined8 *)(lVar8 + 0x1170));
  lVar8 = FWeakObjectPtr::Get(param_1 + 0x28);
  local_698 = *(undefined1 *)(lVar8 + 0x800);
  lVar8 = FWeakObjectPtr::Get(param_1 + 0x28);
  lVar10 = FWeakObjectPtr::Get(param_1 + 0x38);
  (**(code **)(*(longlong *)(lVar10 + 0x170) + 0x38))((longlong *)(lVar10 + 0x170),1);
  uVar7 = FWeakObjectPtr::Get(param_1 + 0x38);
  uVar11 = FWeakObjectPtr::Get(param_1 + 0x28);
  uVar7 = TScriptInterface<IBlendableInterface>::
          TScriptInterface<IBlendableInterface><UMaterialInterface>(local_650,uVar7);
  FUN_142ed36d0(uVar11,uVar7,0);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x54)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x48,0);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 100)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x58,0);
  }
  uVar3 = local_698;
  if (*(char *)(param_1 + 0x40) != '\0') {
    uStack_680 = CONCAT71(uStack_680._1_7_,local_698);
    local_608 = 0;
    local_5f8 = 0;
    local_688 = param_1;
    puVar12 = (undefined8 *)FUN_140438ef0(0x18,local_628);
    if (puVar12 != (undefined8 *)0x0) {
      *puVar12 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar12 + 1) = (undefined4)local_688;
      *(undefined4 *)((longlong)puVar12 + 0xc) = local_688._4_4_;
      *(undefined4 *)(puVar12 + 2) = (undefined4)uStack_680;
      *(undefined4 *)((longlong)puVar12 + 0x14) = uStack_680._4_4_;
    }
    local_678 = 0;
    local_638[0] = FUN_1410c5360;
    local_670 = 0x39;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_678,0);
    local_6a8 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_678,0x39,"UGFxCARMenuCustomizePage::ActivatePage::TotalNumVehicles");
    FUN_141022700(local_1d8,&local_678,local_638);
    uVar7 = FUN_141036f30(local_1d8,local_598);
    FUN_14204c280(uVar7);
    iVar5 = FUN_141037230(local_1d8);
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x30);
    FUN_140e83180(uVar7,param_1 + 0x48,uVar3);
    iVar18 = *(int *)(param_1 + 0x50);
    local_690 = CONCAT44(local_690._4_4_,iVar18);
    FUN_1410ae980(*(undefined8 *)(param_1 + 0x48),(longlong)iVar18,local_697,&local_697);
    iVar17 = iVar5;
    if (*(char *)(param_1 + 0x68) != '\0') {
      iVar18 = *(int *)(param_1 + 0x50);
      *(int *)(param_1 + 0x50) = iVar18 + 1;
      if (*(int *)(param_1 + 0x54) < iVar18 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x48,iVar18);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)*(void **)(param_1 + 0x48) + 8),*(void **)(param_1 + 0x48),
                 (longlong)iVar18 << 3);
      iVar17 = iVar5 + 1;
      **(undefined8 **)(param_1 + 0x48) = 0;
      iVar18 = (int)local_690;
    }
    if (iVar17 <= *(int *)(param_1 + 0x50)) {
      iVar17 = *(int *)(param_1 + 0x50);
    }
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x38);
    FUN_142f0a7c0(uVar7,iVar17);
    FUN_140ce1dc0(local_1d8);
    goto LAB_1410c2a81;
  }
  local_4f8 = param_1;
  FUN_1410b33e0(local_4f0,lVar8 + 0xc50);
  FUN_1410b33e0(local_368,lVar8 + 0xdd8);
  local_5b8 = 0;
  local_5a8 = 0;
  puVar12 = (undefined8 *)FUN_140438ef0(800,local_5d8);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &PTR_FUN_1446a5440;
    puVar12[1] = local_4f8;
    FUN_140e6a350(puVar12 + 2,local_4f0);
    FUN_140e6a350(puVar12 + 0x33,local_368);
  }
  local_688 = 0;
  local_5e8[0] = &LAB_1410c5690;
  uStack_680 = 0x36;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_688,0);
  local_6a8 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_688,0x36,"UGFxCARMenuCustomizePage::ActivatePage::TotalNumParts");
  FUN_141022700(local_108,&local_688,local_5e8);
  FUN_140ac7ce0(local_368);
  FUN_140ac7ce0(local_4f0);
  uVar7 = FUN_141036f30(local_108,local_548);
  FUN_14204c280(uVar7);
  iVar5 = FUN_141037230(local_108);
  lVar10 = lVar8 + 0xde8;
  local_698 = *(undefined1 *)(param_1 + 0x41);
  pwVar13 = (wchar_t *)FWeakObjectPtr::Get(lVar10);
  if (pwVar13 == (wchar_t *)0x0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar8 + 0xdf0)) &&
       (local_690 = 0, *(longlong *)(lVar8 + 0xdf8) != 0)) {
      lVar14 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar10,lVar14);
      if ((lVar14 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar8 + 0xdf0) = DAT_1464b56f4;
      }
      pwVar13 = (wchar_t *)FWeakObjectPtr::Get(lVar10);
      if (pwVar13 != (wchar_t *)0x0) goto LAB_1410c299c;
    }
LAB_1410c29d2:
    pwVar13 = pwVar16;
  }
  else {
LAB_1410c299c:
    lVar8 = UCheckBox::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar13 + 8) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar13 + 8) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1410c29d2;
  }
  uVar7 = FWeakObjectPtr::Get(param_1 + 0x30);
  FUN_140e82cd0(uVar7,pwVar13,local_698,param_1 + 0x58);
  iVar18 = *(int *)(param_1 + 0x60);
  local_690 = CONCAT44(local_690._4_4_,iVar5);
  FUN_1410aed40(*(undefined8 *)(param_1 + 0x58),(longlong)iVar18,local_696[0],local_696);
  if (*(char *)(param_1 + 0x68) != '\0') {
    iVar17 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = iVar17 + 1;
    if (*(int *)(param_1 + 100) < iVar17 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar17);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)*(void **)(param_1 + 0x58) + 8),*(void **)(param_1 + 0x58),
               (longlong)iVar17 << 3);
    iVar5 = iVar5 + 1;
    **(undefined8 **)(param_1 + 0x58) = 0;
  }
  if (iVar5 <= *(int *)(param_1 + 0x60)) {
    iVar5 = *(int *)(param_1 + 0x60);
  }
  uVar7 = FWeakObjectPtr::Get(param_1 + 0x38);
  FUN_142f0a7c0(uVar7,iVar5);
  FUN_140ce1dc0(local_108);
  iVar5 = (int)local_690;
LAB_1410c2a81:
  lVar8 = FWeakObjectPtr::Get(param_1 + 0x38);
  if (*(int *)(lVar8 + 0x280) < 1) {
    plVar15 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x38);
    pwVar16 = (wchar_t *)0xffffffff;
  }
  else {
    uVar6 = FUN_1410cae60(param_1);
    plVar15 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x38);
    if (uVar6 != 0xffffffff) {
      pwVar16 = (wchar_t *)(ulonglong)uVar6;
    }
  }
  (**(code **)(*plVar15 + 0x2b8))(plVar15,pwVar16,1,0);
  lVar8 = FWeakObjectPtr::Get(param_1 + 0x28);
  if (*(longlong *)(lVar8 + 0x10e0) != 0) {
    lVar8 = FWeakObjectPtr::Get(param_1 + 0x28);
    FUN_1410eda30(*(undefined8 *)(lVar8 + 0x10e0),iVar18,iVar5);
  }
  return;
}



// FUNCTION 1410c2b40 FUN_1410c2b40 body=632 status=ok
// SIG undefined FUN_1410c2b40(void)

longlong FUN_1410c2b40(longlong *param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  undefined8 uVar11;
  wchar_t *pwVar12;
  undefined8 uVar13;
  longlong local_res10;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [24];
  undefined1 local_88 [24];
  undefined8 local_70;
  undefined8 local_68;
  longlong local_58;
  wchar_t *local_50;
  undefined1 local_48 [32];
  
  FWeakObjectPtr::operator=(&local_d8,0);
  pwVar12 = (wchar_t *)0x0;
  local_d0 = 0;
  pwVar9 = _guard_xfg_dispatch_icall_nop(L"&UDebugMenuCategoryList::OnCommandItemSelected",L"::");
  pwVar7 = pwVar12;
  while (pwVar6 = pwVar9, pwVar6 != (wchar_t *)0x0) {
    pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
    pwVar7 = pwVar6;
  }
  FName::FName(&local_res10,pwVar7 + 2,1);
  FWeakObjectPtr::operator=(&local_d8,param_1);
  local_d0 = local_res10;
  if ((local_res10 != 0) && (lVar10 = FWeakObjectPtr::Get(&local_d8), lVar10 != 0)) {
    UObject::FindFunction(lVar10,local_d0);
  }
  lVar10 = param_1[0x57];
  local_c8 = local_d8;
  local_c4 = local_d4;
  local_c0 = local_d0;
  local_b8 = *param_4;
  local_b4 = param_4[1];
  local_b0 = *(undefined8 *)(param_4 + 2);
  local_58 = lVar10;
  if (lVar10 != 0) {
    uVar11 = FUN_142f2b0d0();
    pwVar12 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar10,uVar11);
  }
  local_50 = pwVar12;
  uVar11 = FText::FText(local_48,param_2);
  uVar13 = (**(code **)(*param_1 + 0x2a0))(param_1);
  lVar10 = FUN_142ee7ec0(&local_58,uVar13,uVar11,&local_b8,&local_c8);
  if (lVar10 != 0) {
    local_a8 = 0;
    FText::FText(local_a0);
    FText::FText(local_88);
    local_70 = 0;
    local_68 = 0;
    FText::operator=(local_a0,param_2);
    FText::operator=(local_88,param_3);
    iVar4 = (int)param_1[0x5c];
    *(int *)(param_1 + 0x5c) = iVar4 + 1;
    if (*(int *)((longlong)param_1 + 0x2e4) < iVar4 + 1) {
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_1 + 0x5b,iVar4);
    }
    puVar3 = (undefined8 *)(param_1[0x5b] + (longlong)iVar4 * 0x48);
    *puVar3 = local_a8;
    FText::FText(puVar3 + 1,local_a0);
    FText::FText(puVar3 + 4,local_88);
    FString::FString(puVar3 + 7,&local_70);
    FUN_1410b4290(&local_a8);
  }
  plVar5 = *(longlong **)(param_2 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  plVar5 = *(longlong **)(param_3 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return lVar10;
}



// FUNCTION 1410c2dc0 FUN_1410c2dc0 body=455 status=ok
// SIG undefined FUN_1410c2dc0(void)

void FUN_1410c2dc0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 local_res8 [8];
  ulonglong local_68;
  uint local_60;
  uint uStack_5c;
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    plVar3 = (longlong *)FName::FName(local_res8,"Essentials",1);
    uVar2 = *(undefined8 *)(param_1 + 0x2f8);
    plVar4 = (longlong *)UTextureLODSettings::GetPrivateStaticClass();
    lVar7 = plVar4[0x1f];
    if (lVar7 == 0) {
      (**(code **)(*plVar4 + 0x368))(plVar4);
      lVar7 = plVar4[0x1f];
      if (lVar7 == 0) {
        return;
      }
    }
    plVar8 = *(longlong **)(lVar7 + 0x28);
    uVar9 = 0;
    plVar4 = plVar8 + (longlong)*(int *)(lVar7 + 0x30) * 9;
    local_68 = 0;
    local_60 = 0;
    uStack_5c = 0;
    iVar10 = 0;
    uVar11 = uVar9;
    uVar12 = uVar9;
    for (; plVar8 != plVar4; plVar8 = plVar8 + 9) {
      lVar7 = *plVar8;
      if (lVar7 == *plVar3) {
        iVar10 = (int)uVar11;
        local_60 = iVar10 + 1;
        if ((int)uVar9 < (int)local_60) {
          TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(&local_68,uVar11);
          lVar7 = *plVar8;
          uVar9 = (ulonglong)uStack_5c;
          uVar12 = local_68;
        }
        uVar11 = (ulonglong)local_60;
        plVar1 = (longlong *)(uVar12 + (longlong)iVar10 * 0x48);
        *plVar1 = lVar7;
        FText::FText(plVar1 + 1,plVar8 + 1);
        FText::FText(plVar1 + 4,plVar8 + 4);
        FString::FString(plVar1 + 7,plVar8 + 7);
      }
      iVar10 = (int)uVar11;
    }
    uVar9 = uVar12 + (longlong)iVar10 * 0x48;
    if (uVar12 != uVar9) {
      lVar7 = uVar12 + 0x20;
      do {
        uVar5 = FText::FText(local_58,lVar7);
        uVar6 = FText::FText(local_40,lVar7 + -0x18);
        FUN_1410c3340(uVar2,uVar6,uVar5,lVar7 + 0x18);
        uVar11 = lVar7 + 0x28;
        lVar7 = lVar7 + 0x48;
      } while (uVar11 != uVar9);
    }
    FUN_140b9c620(&local_68);
  }
  return;
}



// FUNCTION 1410c2f90 FUN_1410c2f90 body=398 status=ok
// SIG undefined FUN_1410c2f90(void)

void FUN_1410c2f90(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_68;
  uint local_60;
  uint uStack_5c;
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  
  plVar2 = (longlong *)UTextureLODSettings::GetPrivateStaticClass();
  lVar5 = plVar2[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar5 = plVar2[0x1f];
    if (lVar5 == 0) {
      return;
    }
  }
  plVar6 = *(longlong **)(lVar5 + 0x28);
  uVar7 = 0;
  plVar2 = plVar6 + (longlong)*(int *)(lVar5 + 0x30) * 9;
  local_68 = 0;
  local_60 = 0;
  uStack_5c = 0;
  iVar8 = 0;
  uVar9 = uVar7;
  uVar10 = uVar7;
  for (; plVar6 != plVar2; plVar6 = plVar6 + 9) {
    lVar5 = *plVar6;
    if (lVar5 == *param_2) {
      iVar8 = (int)uVar9;
      local_60 = iVar8 + 1;
      if ((int)uVar7 < (int)local_60) {
        TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(&local_68,uVar9);
        lVar5 = *plVar6;
        uVar7 = (ulonglong)uStack_5c;
        uVar10 = local_68;
      }
      uVar9 = (ulonglong)local_60;
      plVar1 = (longlong *)(uVar10 + (longlong)iVar8 * 0x48);
      *plVar1 = lVar5;
      FText::FText(plVar1 + 1,plVar6 + 1);
      FText::FText(plVar1 + 4,plVar6 + 4);
      FString::FString(plVar1 + 7,plVar6 + 7);
    }
    iVar8 = (int)uVar9;
  }
  uVar7 = uVar10 + (longlong)iVar8 * 0x48;
  if (uVar10 != uVar7) {
    lVar5 = uVar10 + 0x20;
    do {
      uVar3 = FText::FText(local_58,lVar5);
      uVar4 = FText::FText(local_40,lVar5 + -0x18);
      FUN_1410c3340(param_1,uVar4,uVar3,lVar5 + 0x18);
      uVar9 = lVar5 + 0x28;
      lVar5 = lVar5 + 0x48;
    } while (uVar9 != uVar7);
  }
  FUN_140b9c620(&local_68);
  return;
}



// FUNCTION 1410c3120 FUN_1410c3120 body=530 status=ok
// SIG undefined FUN_1410c3120(void)

void FUN_1410c3120(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  undefined2 *puVar7;
  undefined2 *local_78;
  int local_70;
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  undefined1 local_38 [24];
  undefined1 local_20 [24];
  
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    (**(code **)(*DAT_146874fc8 + 0x78))(DAT_146874fc8,&local_78);
    if (1 < local_70) {
      FString::PrintfImpl(local_48,L"GBXPerf.ReportTag \"\"");
      puVar7 = &DAT_143f3eda8;
      if (local_70 != 0) {
        puVar7 = local_78;
      }
      FString::PrintfImpl(local_58,L"Reset current report tag (%s)",puVar7);
      FString::PrintfImpl(local_68,L"ReportTag : None");
      uVar1 = FText::FromString(local_38,local_58);
      uVar2 = FText::FromString(local_20,local_68);
      FUN_1410c3340(*(undefined8 *)(param_1 + 0x2f8),uVar2,uVar1,local_48);
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      if (local_48[0] != 0) {
        FMemory::Free();
      }
    }
    plVar3 = (longlong *)FUN_1412ff170();
    lVar4 = plVar3[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar4 = plVar3[0x1f];
    }
    pcVar5 = *(char **)(lVar4 + 0x28);
    pcVar6 = pcVar5 + (longlong)*(int *)(lVar4 + 0x30) * 0x30;
    for (; pcVar5 != pcVar6; pcVar5 = pcVar5 + 0x30) {
      if (*pcVar5 != '\0') {
        if (*(int *)(pcVar5 + 0x10) == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = *(undefined2 **)(pcVar5 + 8);
        }
        FString::PrintfImpl(local_58,L"GBXPerf.ReportTag %s",puVar7);
        if (*(int *)(pcVar5 + 0x10) == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = *(undefined2 **)(pcVar5 + 8);
        }
        FString::PrintfImpl(local_48,L"ReportTag : %s",puVar7);
        uVar1 = FText::FText(local_20,pcVar5 + 0x18);
        uVar2 = FText::FromString(local_38,local_48);
        FUN_1410c3340(*(undefined8 *)(param_1 + 0x2f8),uVar2,uVar1,local_58);
        if (local_48[0] != 0) {
          FMemory::Free();
        }
        if (local_58[0] != 0) {
          FMemory::Free();
        }
      }
    }
    if (local_78 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1410c3340 FUN_1410c3340 body=453 status=ok
// SIG undefined FUN_1410c3340(void)

longlong FUN_1410c3340(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong local_res18 [2];
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_60;
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  
  FWeakObjectPtr::operator=(&local_78,0);
  local_70 = 0;
  pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UDebugMenuCategoryList::OnExecItemActivated",L"::");
  pwVar6 = (wchar_t *)0x0;
  while (pwVar5 = pwVar8, pwVar5 != (wchar_t *)0x0) {
    pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
    pwVar6 = pwVar5;
  }
  FName::FName(local_res18,pwVar6 + 2,1);
  FWeakObjectPtr::operator=(&local_78,param_1);
  local_70 = local_res18[0];
  if ((local_res18[0] != 0) && (lVar9 = FWeakObjectPtr::Get(&local_78), lVar9 != 0)) {
    UObject::FindFunction(lVar9,local_70);
  }
  local_68 = local_78;
  local_64 = local_74;
  local_60 = local_70;
  uVar10 = FText::FText(local_58,param_3);
  uVar11 = FText::FText(local_40,param_2);
  lVar9 = FUN_1410c2b40(param_1,uVar11,uVar10,&local_68);
  if (lVar9 != 0) {
    iVar3 = *(int *)(lVar9 + 0x2e0);
    if ((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0x2e0))) {
      FString::operator=(*(longlong *)(param_1 + 0x2d8) + (longlong)iVar3 * 0x48 + 0x38,param_4);
    }
  }
  plVar4 = *(longlong **)(param_2 + 8);
  if (plVar4 != (longlong *)0x0) {
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
  plVar4 = *(longlong **)(param_3 + 8);
  if (plVar4 != (longlong *)0x0) {
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
  return lVar9;
}



// FUNCTION 1410c3510 FUN_1410c3510 body=73 status=ok
// SIG undefined FUN_1410c3510(void)

void FUN_1410c3510(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x7e8);
  *(int *)(param_1 + 0x7e8) = iVar1 + 1;
  if (*(int *)(param_1 + 0x7ec) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x7e0),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x7e0) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 1410c3560 FUN_1410c3560 body=513 status=ok
// SIG undefined FUN_1410c3560(void)

void FUN_1410c3560(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  undefined1 local_38 [24];
  undefined1 local_20 [24];
  
  lVar2 = (**(code **)(*param_1 + 0x2a0))();
  if ((lVar2 != 0) && (lVar2 = FUN_1422312c0(lVar2), lVar2 != 0)) {
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
    if ((bVar1) && (param_1[0x5f] != 0)) {
      uVar7 = 0;
      plVar8 = *(longlong **)(lVar2 + 0xab8);
      uVar10 = (longlong)*(int *)(lVar2 + 0xac0) & 0x1fffffffffffffff;
      if (plVar8 + *(int *)(lVar2 + 0xac0) < plVar8) {
        uVar10 = uVar7;
      }
      if (uVar10 != 0) {
        do {
          if (*plVar8 != 0) {
            lVar2 = *plVar8 + 0x88;
            puVar4 = (undefined8 *)FName::ToString(lVar2,local_48);
            if (*(int *)(puVar4 + 1) == 0) {
              puVar9 = &DAT_143f3eda8;
            }
            else {
              puVar9 = (undefined2 *)*puVar4;
            }
            FString::PrintfImpl(local_68,L"SwitchPlayerClass %s",puVar9);
            puVar4 = (undefined8 *)FName::ToString(lVar2,local_58);
            if (*(int *)(puVar4 + 1) == 0) {
              puVar9 = &DAT_143f3eda8;
            }
            else {
              puVar9 = (undefined2 *)*puVar4;
            }
            FString::PrintfImpl(local_78,L"Play as %s",puVar9);
            uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                              (local_38,L"Switch to this player class and restart",L"DebugMenu",
                               L"PlayerClassSwitchDescription");
            uVar6 = FText::FromString(local_20,local_78);
            FUN_1410c3340(param_1[0x5f],uVar6,uVar5,local_68);
            if (local_78[0] != 0) {
              FMemory::Free();
            }
            if (local_58[0] != 0) {
              FMemory::Free();
            }
            if (local_68[0] != 0) {
              FMemory::Free();
            }
            if (local_48[0] != 0) {
              FMemory::Free();
            }
          }
          plVar8 = plVar8 + 1;
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar10);
      }
    }
  }
  return;
}



// FUNCTION 1410c3770 FUN_1410c3770 body=585 status=ok
// SIG undefined FUN_1410c3770(void)

void FUN_1410c3770(longlong *param_1)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  undefined1 local_res10 [8];
  undefined4 local_a8;
  undefined8 local_a4;
  longlong local_98;
  undefined2 *local_90;
  undefined8 local_88;
  undefined2 *local_80;
  int local_78;
  longlong local_70 [2];
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  undefined1 local_30 [24];
  
  lVar3 = (**(code **)(*param_1 + 0x2a0))();
  if ((lVar3 != 0) && (param_1[0x5f] != 0)) {
    local_98 = 0;
    local_90 = (undefined2 *)0x0;
    local_88 = 0;
    local_a8 = 0xffffffff;
    local_a4 = 0;
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar3 = *(longlong *)(lVar3 + 0x5a8);
    if (lVar3 != 0) {
      lVar4 = FUN_14140ae40();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        plVar5 = (longlong *)FUN_140b8bb40(lVar3,local_res10,0);
        if (*plVar5 != 0) {
          lVar6 = FUN_1430e5840();
          lVar3 = *plVar5;
          for (lVar4 = lVar3; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
            if (lVar4 == lVar6) {
              if (lVar3 != 0) {
                uVar7 = FSoftObjectPath::FSoftObjectPath(local_60,lVar3);
                FSoftObjectPath::operator=(&local_98,uVar7);
                FWeakObjectPtr::operator=(&local_a8,lVar3);
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                local_a4 = CONCAT44(DAT_1464b56f4,(undefined4)local_a4);
                goto LAB_1410c389d;
              }
              break;
            }
          }
        }
        lVar3 = local_88;
        local_a8 = 0xffffffff;
        local_98 = 0;
        uVar2 = local_88._4_4_;
        local_a4 = local_a4 & 0xffffffff00000000;
        local_88 = (ulonglong)local_88._4_4_ << 0x20;
        if ((lVar3 < 0) && (uVar2 != 0)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_90,0);
        }
        if (local_90 != (undefined2 *)0x0) {
          *local_90 = 0;
        }
        local_a4 = local_a4 & 0xffffffff;
      }
    }
LAB_1410c389d:
    if (local_98 != 0) {
      FSoftObjectPath::ToString(&local_98,&local_80);
      puVar9 = &DAT_143f3eda8;
      if (local_78 != 0) {
        puVar9 = local_80;
      }
      FString::PrintfImpl(local_70,L"spawnvehicle %s %.2f",puVar9,0x407f400000000000);
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_48,L"Spawns the default vehicle in front of you",L"DebugMenu",
                         L"SpawnVehicleDescription");
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_30,L"Spawn Vehicle",L"DebugMenu",L"SpawnVehicleName");
      FUN_1410c3340(param_1[0x5f],uVar8,uVar7,local_70);
      if (local_70[0] != 0) {
        FMemory::Free();
      }
      if (local_80 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    if (local_90 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1410c39c0 FUN_1410c39c0 body=183 status=ok
// SIG undefined FUN_1410c39c0(void)

void FUN_1410c39c0(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_10;
  
  FText::FText(local_28);
  local_10 = 0;
  FText::operator=(local_28,param_2);
  iVar3 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar3 + 1;
  local_10 = param_3;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1,iVar3);
  }
  lVar4 = (longlong)iVar3 * 0x20 + *param_1;
  FText::FText(lVar4,local_28);
  *(undefined1 *)(lVar4 + 0x18) = local_10;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return;
}



// FUNCTION 1410c3a80 FUN_1410c3a80 body=904 status=ok
// SIG undefined FUN_1410c3a80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410c3a80(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined2 *puVar14;
  longlong *plVar15;
  float fVar16;
  undefined1 auStack_788 [32];
  longlong *local_768;
  longlong local_760;
  longlong local_758;
  undefined8 local_750;
  longlong *plStack_748;
  undefined1 local_740 [8];
  longlong *local_738;
  undefined1 local_728 [8];
  longlong *local_720;
  longlong *local_708;
  longlong local_6e0;
  longlong *local_6d0;
  int local_6c8;
  undefined1 local_6b8 [16];
  undefined1 local_6a8 [1592];
  longlong local_70;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_788;
  lVar13 = *(longlong *)(param_1 + 0x38);
  if (lVar13 != 0) {
    local_758 = lVar13;
    lVar8 = FUN_141329d80();
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      local_760 = lVar13 + 0xc50;
      plVar15 = *(longlong **)(param_1 + 0x1a0);
      plVar12 = plVar15 + *(int *)(param_1 + 0x1a8);
      local_768 = plVar12;
      if (plVar15 != plVar12) {
        do {
          lVar6 = local_760;
          lVar8 = *plVar15;
          if (lVar8 != 0) {
            lVar5 = *(longlong *)(lVar8 + 400);
            fVar16 = 0.0;
            if (lVar5 != 0) {
              lVar11 = *(longlong *)(lVar13 + 2000);
              lVar10 = (longlong)*(int *)(lVar13 + 0x7d8) * 0xe8 + lVar11;
              plVar12 = local_768;
              if (lVar11 != lVar10) {
                puVar14 = (undefined2 *)(lVar11 + 0x18);
                do {
                  FUN_1410cc5c0(lVar6,local_728,*puVar14);
                  for (plVar12 = local_6d0; plVar12 != local_6d0 + (longlong)local_6c8 * 2;
                      plVar12 = plVar12 + 2) {
                    if (*plVar12 == lVar5) {
                      fVar16 = fVar16 + *(float *)(plVar12 + 1);
                    }
                  }
                  if (local_60 != 0) {
                    FMemory::Free();
                  }
                  if (local_70 != 0) {
                    FMemory::Free();
                  }
                  FUN_1410b3ea0(local_6a8);
                  FUN_1410b3e00(local_6b8);
                  if (local_6d0 != (longlong *)0x0) {
                    FMemory::Free();
                  }
                  if (local_6e0 != 0) {
                    FMemory::Free();
                  }
                  plVar12 = local_708;
                  if (local_708 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = local_708 + 1;
                    lVar13 = *plVar1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)lVar13 == 1) {
                      (**(code **)*local_708)(local_708);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar12 + 0xc);
                      iVar4 = *piVar2;
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (iVar4 == 1) {
                        (**(code **)(*plVar12 + 8))(plVar12,1);
                      }
                    }
                  }
                  plVar12 = local_720;
                  if (local_720 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = local_720 + 1;
                    lVar13 = *plVar1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)lVar13 == 1) {
                      (**(code **)*local_720)(local_720);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar12 + 0xc);
                      iVar4 = *piVar2;
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (iVar4 == 1) {
                        (**(code **)(*plVar12 + 8))(plVar12,1);
                      }
                    }
                  }
                  lVar11 = lVar11 + 0xe8;
                  puVar14 = puVar14 + 0x74;
                  plVar12 = local_768;
                  lVar13 = local_758;
                } while (lVar11 != lVar10);
              }
            }
            if (*(longlong **)(lVar8 + 0x188) != (longlong *)0x0) {
              local_750 = 0;
              plStack_748 = (longlong *)0x0;
              lVar6 = **(longlong **)(lVar8 + 0x188);
              uVar9 = FText::AsNumber(local_740,fVar16,0,&local_750);
              (**(code **)(lVar6 + 0x2b0))(*(undefined8 *)(lVar8 + 0x188),uVar9,1,0);
              plVar1 = local_738;
              if (local_738 != (longlong *)0x0) {
                LOCK();
                plVar3 = local_738 + 1;
                lVar8 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*local_738)(local_738);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar1 + 0xc);
                  iVar4 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar4 == 1) {
                    (**(code **)(*plVar1 + 8))(plVar1,1);
                  }
                }
              }
              plVar1 = plStack_748;
              if (plStack_748 != (longlong *)0x0) {
                LOCK();
                plVar3 = plStack_748 + 1;
                lVar8 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*plStack_748)(plStack_748);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar1 + 0xc);
                  iVar4 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar4 == 1) {
                    (**(code **)(*plVar1 + 8))(plVar1,1);
                  }
                }
              }
            }
          }
          plVar15 = plVar15 + 1;
        } while (plVar15 != plVar12);
      }
    }
  }
  return;
}



// FUNCTION 1410c3e10 FUN_1410c3e10 body=745 status=ok
// SIG undefined FUN_1410c3e10(void)

void FUN_1410c3e10(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined2 *puVar12;
  short *psVar13;
  undefined2 *puVar14;
  longlong local_res10;
  undefined1 local_b8 [8];
  longlong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  short *local_98;
  int local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  FWeakObjectPtr::operator=(local_b8,0);
  local_b0 = 0;
  pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnRestoreDefaultChoiceMade",L"::");
  pwVar5 = (wchar_t *)0x0;
  while (pwVar4 = pwVar6, pwVar4 != (wchar_t *)0x0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
    pwVar5 = pwVar4;
  }
  FName::FName(&local_res10,pwVar5 + 2,1);
  FWeakObjectPtr::operator=(local_b8,param_1);
  local_b0 = local_res10;
  if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(local_b8), lVar7 != 0)) {
    UObject::FindFunction(lVar7,local_b0);
  }
  uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_70,L"Are you sure you want to restore %s default options?",
                     L"EchoCastMenu",L"RestoreDefaultsDialogText");
  puVar9 = (undefined8 *)FText::ToString(uVar8);
  if (*(int *)(puVar9 + 1) == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)*puVar9;
  }
  uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_88,L"ECHOcast Settings",L"EchoCastMenu",L"EchoCastHeaderText");
  puVar9 = (undefined8 *)FText::ToString(uVar8);
  if (*(int *)(puVar9 + 1) == 0) {
    puVar14 = &DAT_143f3eda8;
  }
  else {
    puVar14 = (undefined2 *)*puVar9;
  }
  FString::PrintfImpl(&local_98,puVar12,puVar14);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  local_a8 = 0;
  psVar13 = &DAT_143f3eda8;
  if (local_90 != 0) {
    psVar13 = local_98;
  }
  local_a0 = 0;
  if ((psVar13 != (short *)0x0) && (*psVar13 != 0)) {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (psVar13[lVar7] != 0);
    uVar11 = (int)lVar7 + 1;
    local_a0 = (ulonglong)uVar11;
    if (0 < (int)uVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
    }
    FGenericPlatformString::Memcpy(local_a8,psVar13,(longlong)(int)uVar11 * 2);
  }
  uVar8 = FText::FromString(local_40,&local_a8);
  uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (local_58,L"Restore Defaults?",L"EchoCastMenu",L"RestoreDefaultsDialogTitle");
  FUN_1410f47a0(*(undefined8 *)(param_1 + 0x7f0),uVar10,uVar8,local_b8,0,0,0,0,0);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  if (local_98 != (short *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410c4100 FUN_1410c4100 body=478 status=ok
// SIG undefined FUN_1410c4100(void)

void FUN_1410c4100(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong local_68 [3];
  undefined4 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_38;
  longlong local_30 [2];
  undefined8 local_20;
  undefined1 local_18 [16];
  
  *(undefined4 *)(param_1 + 0x4b8) = *param_3;
  *(undefined4 *)(param_1 + 0x4bc) = param_3[1];
  *(undefined8 *)(param_1 + 0x4c0) = *(undefined8 *)(param_3 + 2);
  *(undefined4 *)(param_1 + 0x4c8) = *param_2;
  *(undefined4 *)(param_1 + 0x4cc) = param_2[1];
  *(undefined4 *)(param_1 + 0x4d0) = param_2[2];
  local_20 = *(undefined8 *)(param_2 + 4);
  FString::FString(local_18,param_2 + 6);
  FSoftObjectPath::operator=(param_1 + 0x4d8,&local_20);
  local_38 = *(undefined8 *)(param_2 + 4);
  FString::FString(local_30,param_2 + 6);
  lVar4 = FUN_1422ca050();
  local_68[1] = 0x20;
  local_68[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy(local_68[0],L"RequestAsyncLoad SingleDelegate",0x40);
  local_68[2] = 0;
  local_50 = 0;
  puVar5 = (undefined8 *)operator_new(0x28,local_68 + 2);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(puVar5 + 1,param_1);
    puVar5[2] = FUN_1410d16d0;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[4] = uVar6;
    *puVar5 = &PTR_FUN_143f4d1b8;
  }
  FStreamableManager::RequestAsyncLoad(lVar4 + 0x178,local_48,&local_38,local_68 + 2,0,0,0,local_68)
  ;
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 6) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410c42e0 FUN_1410c42e0 body=74 status=ok
// SIG undefined FUN_1410c42e0(void)

void FUN_1410c42e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_1417502d0();
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar2,param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1410c4330 FUN_1410c4330 body=213 status=ok
// SIG undefined FUN_1410c4330(void)

void FUN_1410c4330(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_18;
  longlong local_10;
  
  lVar1 = *(longlong *)(param_1 + 0x180);
  if (lVar1 == 0) {
    return;
  }
  lVar5 = 0;
  lVar6 = *(longlong *)(lVar1 + 0x38);
  if (lVar6 != 0) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1410c4394;
  }
  lVar6 = lVar5;
LAB_1410c4394:
  if ((*(longlong *)(lVar1 + 0x198) != 0) && (FUN_1410f3fb0(), lVar6 != 0)) {
    lVar3 = *(longlong *)(lVar1 + 0x198);
    local_18 = lVar3;
    if (lVar3 != 0) {
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      lVar5 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
    }
    local_10 = lVar5;
    FUN_142ed36d0(lVar6,&local_18,0);
  }
  FUN_1410e76d0(lVar1);
  return;
}



// FUNCTION 1410c4410 FUN_1410c4410 body=1401 status=ok
// SIG undefined FUN_1410c4410(void)

void FUN_1410c4410(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  longlong local_res20;
  undefined8 *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined2 *local_90;
  int local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  
  FUN_1410c6000();
  iVar11 = *(int *)(param_1 + 0x6d8);
  if (iVar11 != 0) {
    plVar13 = (longlong *)(*(longlong *)(param_1 + 0x6d0) + 0x10);
    do {
      plVar17 = (longlong *)*plVar13;
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar17 + 1;
        lVar12 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar17 + 8))(plVar17,1);
          }
        }
      }
      plVar13 = plVar13 + 4;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  *(undefined4 *)(param_1 + 0x6d8) = 0;
  if (*(int *)(param_1 + 0x6dc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              ((longlong *)(param_1 + 0x6d0),0);
  }
  *(undefined8 *)(param_1 + 0x77c) = 0xffffffffffffffff;
  iVar11 = *(int *)(param_1 + 0x7a0);
  iVar2 = *(int *)(param_1 + 0x688);
  if (iVar2 <= iVar11) {
    if (iVar2 < 1) {
      return;
    }
    iVar11 = iVar2 + -1;
  }
  plVar13 = (longlong *)((longlong)iVar11 * 0x50 + *(longlong *)(param_1 + 0x680));
  if (plVar13 != (longlong *)0x0) {
    if (*(int *)(param_1 + 0x6ec) < *(int *)(param_1 + 0x6ac)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo();
    }
    plVar17 = (longlong *)*plVar13;
    plVar13 = plVar17 + (int)plVar13[1];
    local_b8 = param_1;
    for (; plVar17 != plVar13; plVar17 = plVar17 + 1) {
      plVar14 = (longlong *)0x0;
      local_res20 = *plVar17;
      if (local_res20 != 0) {
        cVar4 = FText::IsEmpty(local_res20 + 0x30);
        if (cVar4 == '\0') {
          local_70 = *(undefined8 *)(local_res20 + 0x48);
          FText::FText(local_68,local_res20 + 0x30);
          iVar11 = *(int *)(param_1 + 0x6d8);
          *(int *)(param_1 + 0x6d8) = iVar11 + 1;
          if (*(int *)(param_1 + 0x6dc) < iVar11 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow((longlong *)(param_1 + 0x6d0),iVar11);
          }
          puVar8 = (undefined8 *)((longlong)iVar11 * 0x20 + *(longlong *)(param_1 + 0x6d0));
          *puVar8 = local_70;
          FText::FText(puVar8 + 1,local_68);
          plVar16 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_60 + 1;
            lVar12 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar12 == 1) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar16 + 8))(plVar16,1);
              }
            }
          }
          FUN_1410c1400(&local_b8,local_res20 + 0x48);
        }
        plVar16 = (longlong *)(local_res20 + 0x70);
        if ((*(int *)plVar16 != 0) || (*(int *)(local_res20 + 0x74) != 0)) {
          lVar12 = *plVar16;
          plVar7 = (longlong *)(param_1 + 0x6f0);
          if (*(int *)(param_1 + 0x6f8) != *(int *)(param_1 + 0x724)) {
            lVar10 = *(longlong *)(param_1 + 0x730);
            if (*(longlong *)(param_1 + 0x730) == 0) {
              lVar10 = param_1 + 0x728;
            }
            iVar11 = *(int *)(lVar10 + ((longlong)((int)((ulonglong)lVar12 >> 0x20) + (int)lVar12) &
                                       (longlong)*(int *)(param_1 + 0x738) - 1U) * 4);
            if (iVar11 != -1) {
              do {
                plVar15 = (longlong *)((longlong)iVar11 * 0x20 + *plVar7);
                if (*plVar15 == lVar12) {
                  if (iVar11 != -1) goto LAB_1410c4682;
                  break;
                }
                iVar11 = (int)plVar15[3];
              } while (iVar11 != -1);
            }
          }
          plVar15 = plVar14;
LAB_1410c4682:
          plVar5 = plVar15 + 1;
          if (plVar15 == (longlong *)0x0) {
            plVar5 = plVar14;
          }
          if ((plVar5 == (longlong *)0x0) &&
             (local_b0 = plVar16, FUN_1410ad4b0(plVar7,local_res8,&local_b0,0),
             *(int *)((longlong)local_res8[0] * 0x20 + *plVar7 + 0x14) < *(int *)(param_1 + 0x6ac)))
          {
            TArray<void_*,FDefaultAllocator>::ResizeTo();
          }
        }
        plVar16 = (longlong *)(local_res20 + 0x68);
        if ((*(int *)plVar16 != 0) || (*(int *)(local_res20 + 0x6c) != 0)) {
          lVar12 = *plVar16;
          plVar7 = (longlong *)(param_1 + 0x6f0);
          if (*(int *)(param_1 + 0x6f8) != *(int *)(param_1 + 0x724)) {
            lVar10 = *(longlong *)(param_1 + 0x730);
            if (*(longlong *)(param_1 + 0x730) == 0) {
              lVar10 = param_1 + 0x728;
            }
            iVar11 = *(int *)(lVar10 + ((longlong)((int)((ulonglong)lVar12 >> 0x20) + (int)lVar12) &
                                       (longlong)*(int *)(param_1 + 0x738) - 1U) * 4);
            if (iVar11 != -1) {
              do {
                plVar15 = (longlong *)((longlong)iVar11 * 0x20 + *plVar7);
                if (*plVar15 == lVar12) {
                  if (iVar11 != -1) goto LAB_1410c4752;
                  break;
                }
                iVar11 = (int)plVar15[3];
              } while (iVar11 != -1);
            }
          }
          plVar15 = plVar14;
LAB_1410c4752:
          plVar5 = plVar15 + 1;
          if (plVar15 == (longlong *)0x0) {
            plVar5 = plVar14;
          }
          if ((plVar5 == (longlong *)0x0) &&
             (local_a8 = plVar16, FUN_1410ad4b0(plVar7,local_res10,&local_a8,0),
             *(int *)((longlong)local_res10[0] * 0x20 + *plVar7 + 0x14) < *(int *)(param_1 + 0x6ac))
             ) {
            TArray<void_*,FDefaultAllocator>::ResizeTo();
          }
        }
        lVar10 = *(longlong *)(local_res20 + 0x58);
        lVar12 = lVar10 + (longlong)*(int *)(local_res20 + 0x60) * 0x28;
        if (lVar10 != lVar12) {
          do {
            if ((*(int *)(lVar10 + 8) != 0) || (*(int *)(lVar10 + 0xc) != 0)) {
              lVar3 = *(longlong *)(lVar10 + 8);
              plVar14 = (longlong *)(param_1 + 0x6f0);
              if (*(int *)(param_1 + 0x6f8) != *(int *)(param_1 + 0x724)) {
                lVar6 = *(longlong *)(param_1 + 0x730);
                if (*(longlong *)(param_1 + 0x730) == 0) {
                  lVar6 = param_1 + 0x728;
                }
                iVar11 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3)
                                          & (longlong)*(int *)(param_1 + 0x738) - 1U) * 4);
                if (iVar11 != -1) {
                  do {
                    plVar16 = (longlong *)((longlong)iVar11 * 0x20 + *plVar14);
                    if (*plVar16 == lVar3) {
                      if (iVar11 != -1) goto LAB_1410c4841;
                      break;
                    }
                    iVar11 = (int)plVar16[3];
                  } while (iVar11 != -1);
                }
              }
              plVar16 = (longlong *)0x0;
LAB_1410c4841:
              plVar7 = plVar16 + 1;
              if (plVar16 == (longlong *)0x0) {
                plVar7 = (longlong *)0x0;
              }
              if ((plVar7 == (longlong *)0x0) &&
                 (local_a0 = (longlong *)(lVar10 + 8),
                 FUN_1410ad4b0(plVar14,local_res18,&local_a0,0),
                 *(int *)((longlong)local_res18[0] * 0x20 + *plVar14 + 0x14) <
                 *(int *)(param_1 + 0x6ac))) {
                TArray<void_*,FDefaultAllocator>::ResizeTo();
              }
            }
            lVar10 = lVar10 + 0x28;
          } while (lVar10 != lVar12);
        }
        if (*(longlong *)(local_res20 + 0x50) != 0) {
          local_98 = *(undefined8 *)(param_1 + 0x18);
          local_c8 = (undefined8 *)0x0;
          local_c0 = 0;
          FName::ToString(&local_98,&local_90);
          puVar9 = &DAT_143f3eda8;
          if (local_88 != 0) {
            puVar9 = local_90;
          }
          FUN_1410ad8a0(*(undefined8 *)(local_res20 + 0x50),puVar9,&local_c8);
          if (local_90 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          puVar8 = local_c8;
          lVar12 = (longlong)(int)local_c0;
          if (0 < (int)local_c0) {
            local_80 = &local_res20;
            local_78 = param_1;
            FUN_1410b9300(&local_80,*local_c8,0);
            lVar10 = 1;
            if (1 < lVar12) {
              do {
                FUN_1410b9300(&local_80,puVar8[lVar10],puVar8[lVar10 + -1]);
                lVar10 = lVar10 + 1;
              } while (lVar10 < lVar12);
            }
          }
          if (puVar8 != (undefined8 *)0x0) {
            FMemory::Free(puVar8);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1410c4990 FUN_1410c4990 body=523 status=ok
// SIG undefined FUN_1410c4990(void)

void FUN_1410c4990(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 local_res8;
  
  if ((*(int *)(param_1 + 0x11e8) != 0) && (*(longlong *)(param_1 + 0x11d8) != 0)) {
    local_res8 = param_2;
    FUN_1410bad00(&local_res8,*(longlong *)(param_1 + 0x11d8) + 0x40);
    plVar7 = *(longlong **)(param_1 + 0x11e0);
    plVar1 = plVar7 + *(int *)(param_1 + 0x11e8);
    for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
      lVar3 = *plVar7;
      lVar5 = *(longlong *)(lVar3 + 0x130);
      lVar4 = (longlong)*(int *)(lVar3 + 0x138) * 0xf0 + lVar5;
      if (lVar5 != lVar4) {
        local_res8 = 0;
        do {
          if ((*(longlong *)(lVar5 + 0x50) != 0) &&
             (TArray<FSoftObjectPath,FDefaultAllocator>::AddUniqueImpl<FSoftObjectPath_const_&>
                        (param_2,lVar5 + 0x50), *(longlong *)(lVar5 + 0x78) != 0)) {
            TArray<FSoftObjectPath,FDefaultAllocator>::AddUniqueImpl<FSoftObjectPath_const_&>
                      (param_2);
          }
          if (*(longlong *)(lVar5 + 0xa0) != 0) {
            TArray<FSoftObjectPath,FDefaultAllocator>::AddUniqueImpl<FSoftObjectPath_const_&>
                      (param_2);
          }
          lVar2 = *(longlong *)(lVar5 + 0xb8);
          lVar6 = (longlong)*(int *)(lVar5 + 0xc0) * 0x68 + lVar2;
          for (; lVar2 != lVar6; lVar2 = lVar2 + 0x68) {
            if (*(longlong *)(lVar2 + 0x10) != 0) {
              TArray<FSoftObjectPath,FDefaultAllocator>::AddUniqueImpl<FSoftObjectPath_const_&>
                        (param_2,lVar2 + 0x10);
            }
          }
          lVar5 = lVar5 + 0xf0;
        } while (lVar5 != lVar4);
      }
      lVar5 = *(longlong *)(lVar3 + 0x140);
      lVar3 = (longlong)*(int *)(lVar3 + 0x148) * 0x80 + lVar5;
      for (; lVar5 != lVar3; lVar5 = lVar5 + 0x80) {
        if (*(longlong *)(lVar5 + 0x50) != 0) {
          TArray<FSoftObjectPath,FDefaultAllocator>::AddUniqueImpl<FSoftObjectPath_const_&>
                    (param_2,lVar5 + 0x50);
        }
      }
    }
  }
  return;
}



// FUNCTION 1410c4ba0 FUN_1410c4ba0 body=1799 status=ok
// SIG undefined FUN_1410c4ba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410c4ba0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  wchar_t *pwVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  void *pvVar20;
  undefined8 *puVar21;
  uint uVar22;
  void *pvVar23;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined2 *local_1a8;
  ulonglong local_1a0;
  undefined4 local_198;
  uint local_194;
  undefined8 *local_190;
  undefined4 local_188 [2];
  wchar_t *local_180;
  uint local_178;
  undefined4 local_174;
  wchar_t *local_170;
  int local_168;
  undefined4 local_164;
  ulonglong local_160;
  longlong *local_158;
  ulonglong local_150;
  longlong *local_148;
  ulonglong local_140;
  longlong *plStack_138;
  longlong local_130;
  undefined8 local_128;
  void *local_120;
  int local_118;
  undefined4 local_114;
  void *local_108;
  int local_100;
  uint local_fc;
  ulonglong *local_f0;
  longlong local_e8;
  undefined4 *local_e0;
  longlong lStack_d8;
  ulonglong *local_d0;
  undefined4 *puStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  longlong *local_b0;
  longlong local_a8;
  undefined2 **local_a0;
  ulonglong **local_98;
  longlong *local_90;
  undefined4 *local_88;
  longlong local_78 [7];
  longlong *local_40;
  ulonglong local_38;
  ulonglong uVar19;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  lVar18 = *(longlong *)(param_1 + 0x778);
  uVar19 = 0;
  local_194 = 0;
  if (lVar18 == 0) {
    puVar11 = &local_140;
    local_140 = 0;
    plStack_138 = (longlong *)0x0;
    bVar5 = false;
    bVar4 = true;
    uVar12 = uVar19;
  }
  else {
    local_160 = *(ulonglong *)(lVar18 + 0x170);
    bVar5 = true;
    bVar4 = false;
    local_158 = *(longlong **)(lVar18 + 0x178);
    if (local_158 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_158 + 1) = (int)local_158[1] + 1;
      UNLOCK();
    }
    puVar11 = &local_160;
    uVar12 = local_160;
  }
  plVar3 = (longlong *)puVar11[1];
  puVar11[1] = 0;
  local_148 = plVar3;
  *puVar11 = 0;
  plVar3 = plStack_138;
  local_150 = uVar12;
  if ((bVar4) && (plStack_138 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_138 + 1;
    lVar18 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plStack_138)(plStack_138);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plStack_138 + 8))(plStack_138,1);
      }
    }
  }
  plVar3 = local_158;
  if ((bVar5) && (local_158 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_158 + 1;
    lVar18 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_158 + 8))(local_158,1);
      }
    }
  }
  lVar18 = *(longlong *)(param_1 + 0x4e8);
  if (lVar18 != 0) {
    lVar10 = FUN_141319ff0();
    if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    uVar12 = lVar18 + 0xc0;
    if (bVar4) goto LAB_1410c4d0c;
  }
  uVar12 = uVar19;
LAB_1410c4d0c:
  if (((*(longlong *)(param_1 + 0x778) != 0) && (local_150 != 0)) && (uVar12 != 0)) {
    local_130 = 0;
    local_128 = 0;
    local_198 = 3;
    local_1a8 = (undefined2 *)0x0;
    local_1a0 = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
    FGenericPlatformString::Memcpy(local_1a8,&DAT_144696cc4,6);
    local_a0 = &local_1a8;
    local_188[0] = 0xab;
    local_f0 = &local_150;
    local_98 = &local_f0;
    local_90 = &local_130;
    local_88 = &local_198;
    local_e0 = local_188;
    local_d0 = &local_150;
    puStack_c8 = &local_198;
    local_c0 = &local_98;
    uStack_b8 = &local_e8;
    local_b0 = local_78;
    local_40 = (longlong *)0x0;
    local_e8 = param_1;
    lStack_d8 = param_1;
    local_a8 = param_1;
    local_40 = (longlong *)operator_new(0x40);
    puVar21 = (undefined8 *)(uVar12 + 0xd8);
    *local_40 = (longlong)&PTR_FUN_1446a5470;
    local_40[1] = (longlong)local_e0;
    local_40[2] = lStack_d8;
    uVar17 = 0;
    local_40[3] = (longlong)local_d0;
    local_40[4] = (longlong)puStack_c8;
    local_1b8 = 0;
    *(undefined4 *)(local_40 + 5) = (undefined4)local_c0;
    *(undefined4 *)((longlong)local_40 + 0x2c) = local_c0._4_4_;
    *(undefined4 *)(local_40 + 6) = (undefined4)uStack_b8;
    *(undefined4 *)((longlong)local_40 + 0x34) = uStack_b8._4_4_;
    local_40[7] = (longlong)local_b0;
    uVar22 = *(int *)(uVar12 + 0xe0) - 1;
    if (*(int *)(uVar12 + 0xe0) == 0) {
      uVar22 = 0;
    }
    puVar13 = &DAT_143f3eda8;
    if ((int)local_1a0 != 0) {
      puVar13 = local_1a8;
    }
    local_194 = uVar22;
    local_190 = puVar21;
    uVar9 = FUN_141592950(puVar21,puVar13,1);
    while (uVar9 != 0xffffffff) {
      pvVar20 = (void *)0x0;
      puVar13 = &DAT_143f3eda8;
      iVar16 = *(int *)(puVar21 + 1);
      uVar22 = 0;
      uVar17 = iVar16 - 1;
      if (iVar16 == 0) {
        uVar17 = uVar22;
      }
      if ((uint)uVar19 < uVar17) {
        uVar17 = (uint)uVar19;
      }
      uVar14 = iVar16 - 1;
      if (iVar16 == 0) {
        uVar14 = uVar22;
      }
      uVar15 = uVar17;
      if ((uVar17 <= uVar9) && (uVar15 = uVar14, uVar9 < uVar14)) {
        uVar15 = uVar9;
      }
      if (iVar16 != 0) {
        puVar13 = (undefined2 *)*puVar21;
      }
      iVar16 = uVar15 - uVar17;
      local_180 = (wchar_t *)0x0;
      local_174 = 0;
      local_178 = iVar16 + 1;
      if (iVar16 == 0) {
        local_178 = uVar22;
      }
      if ((0 < (int)local_178) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_180,0), pwVar6 = local_180,
         0 < (int)local_178)) {
        wcsncpy(local_180,puVar13 + (int)uVar17,(longlong)iVar16);
        pwVar6[iVar16] = L'\0';
      }
      if (local_40 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::_guard_xfg_dispatch_icall_nop();
      }
      (**(code **)(*local_40 + 0x10))(local_40,&local_180);
      if (local_180 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      puVar13 = local_1a8;
      *(int *)(param_1 + 0x830) = *(int *)(param_1 + 0x830) + 1;
      lVar18 = (longlong)(int)local_1a0;
      local_120 = (void *)0x0;
      local_118 = (int)local_1a0;
      if ((int)local_1a0 == 0) {
        local_114 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_120,local_1a0 & 0xffffffff,0);
        pvVar20 = local_120;
        _guard_xfg_dispatch_icall_nop(local_120,puVar13,lVar18 * 2);
      }
      uVar8 = local_114;
      iVar7 = local_118;
      plVar3 = (longlong *)(param_1 + 0x838);
      iVar16 = *(int *)(param_1 + 0x840);
      lVar18 = (longlong)iVar16;
      *(int *)(param_1 + 0x840) = iVar16 + 1;
      if (*(int *)(param_1 + 0x844) < iVar16 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar3,iVar16);
      }
      lVar10 = *plVar3;
      *(void **)(lVar10 + lVar18 * 0x18) = pvVar20;
      *(int *)(lVar10 + 8 + lVar18 * 0x18) = iVar7;
      *(undefined4 *)(lVar10 + 0xc + lVar18 * 0x18) = uVar8;
      *(undefined8 *)(lVar10 + 0x10 + lVar18 * 0x18) = 1;
      iVar16 = (int)local_1a0 + -1;
      if ((int)local_1a0 == 0) {
        iVar16 = 0;
      }
      uVar17 = iVar16 + uVar9;
      local_1b8 = uVar17;
      uVar9 = FUN_141592950(local_190);
      if (uVar9 == uVar17) {
        do {
          puVar13 = local_1a8;
          pvVar20 = (void *)0x0;
          *(int *)(param_1 + 0x830) = *(int *)(param_1 + 0x830) + 1;
          lVar18 = (longlong)(int)local_1a0;
          local_108 = (void *)0x0;
          local_100 = (int)local_1a0;
          if ((int)local_1a0 == 0) {
            local_fc = 0;
            pvVar23 = pvVar20;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_108,local_1a0 & 0xffffffff,0);
            pvVar20 = local_108;
            _guard_xfg_dispatch_icall_nop(local_108,puVar13,lVar18 * 2);
            pvVar23 = (void *)(ulonglong)local_fc;
          }
          iVar7 = local_100;
          iVar16 = *(int *)(param_1 + 0x840);
          lVar18 = (longlong)iVar16;
          *(int *)(param_1 + 0x840) = iVar16 + 1;
          if (*(int *)(param_1 + 0x844) < iVar16 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(plVar3,iVar16);
          }
          lVar10 = *plVar3;
          *(void **)(lVar10 + lVar18 * 0x18) = pvVar20;
          *(int *)(lVar10 + 0xc + lVar18 * 0x18) = (int)pvVar23;
          *(int *)(lVar10 + 8 + lVar18 * 0x18) = iVar7;
          *(undefined8 *)(lVar10 + 0x10 + lVar18 * 0x18) = 1;
          iVar16 = (int)local_1a0 + -1;
          if ((int)local_1a0 == 0) {
            iVar16 = 0;
          }
          uVar17 = iVar16 + uVar9;
          local_1b8 = uVar17;
          uVar9 = FUN_141592950(local_190);
        } while (uVar9 == uVar17);
      }
      uVar19 = (ulonglong)uVar17;
      puVar21 = local_190;
      uVar22 = local_194;
    }
    puVar13 = &DAT_143f3eda8;
    if ((int)uVar17 < (int)uVar22) {
      iVar16 = *(int *)(puVar21 + 1);
      uVar9 = iVar16 - 1;
      if (iVar16 == 0) {
        uVar9 = 0;
      }
      if (uVar17 < uVar9) {
        uVar9 = uVar17;
      }
      uVar17 = iVar16 - 1;
      if (iVar16 == 0) {
        uVar17 = 0;
      }
      uVar14 = uVar9;
      if ((uVar9 <= uVar22) && (uVar14 = uVar17, uVar22 < uVar17)) {
        uVar14 = uVar22;
      }
      if (iVar16 != 0) {
        puVar13 = (undefined2 *)*puVar21;
      }
      iVar16 = uVar14 - uVar9;
      local_170 = (wchar_t *)0x0;
      local_164 = 0;
      local_168 = iVar16 + 1;
      if (iVar16 == 0) {
        local_168 = 0;
      }
      if ((0 < local_168) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_170,0), pwVar6 = local_170,
         0 < local_168)) {
        wcsncpy(local_170,puVar13 + (int)uVar9,(longlong)iVar16);
        pwVar6[iVar16] = L'\0';
      }
      if (local_40 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::_guard_xfg_dispatch_icall_nop();
      }
      (**(code **)(*local_40 + 0x10))(local_40,&local_170);
      if (local_170 != (wchar_t *)0x0) {
        FMemory::Free();
      }
    }
    FUN_1410bfc30(&local_a8);
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x20))
                (local_40,CONCAT71((int7)((ulonglong)local_78 >> 8),local_40 != local_78));
      local_40 = (longlong *)0x0;
    }
    if (local_1a8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_130 != 0) {
      FMemory::Free();
    }
  }
  plVar3 = local_148;
  iVar16 = 1;
  if (1 < *(int *)(param_1 + 0x840)) {
    lVar18 = 0x18;
    do {
      lVar10 = *(longlong *)(param_1 + 0x838);
      lVar18 = lVar18 + 0x18;
      iVar16 = iVar16 + 1;
      *(int *)(lVar10 + -4 + lVar18) =
           *(int *)(lVar10 + -0x20 + lVar18) + *(int *)(lVar10 + -0x1c + lVar18);
    } while (iVar16 < *(int *)(param_1 + 0x840));
  }
  if (local_148 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_148 + 1;
    lVar18 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_148)(local_148);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 1410c5360 FUN_1410c5360 body=38 status=ok
// SIG undefined FUN_1410c5360(void)

void FUN_1410c5360(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(*param_1 + 0x30);
  FUN_140e82040(uVar1,(char)param_1[1]);
  return;
}



// FUNCTION 1410c53f0 FUN_1410c53f0 body=80 status=ok
// SIG undefined FUN_1410c53f0(void)

void FUN_1410c53f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  uVar1 = *param_1;
  local_28 = 0;
  local_18 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = uVar1;
    *puVar2 = &PTR_FUN_143f77b70;
  }
  local_58[0] = &LAB_1410c5600;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 1410c5550 FUN_1410c5550 body=32 status=ok
// SIG undefined FUN_1410c5550(void)

undefined8 FUN_1410c5550(undefined8 param_1,undefined8 param_2)

{
  FUN_1410baf90(param_2,param_1);
  return param_1;
}



// FUNCTION 1410c55a0 FUN_1410c55a0 body=44 status=ok
// SIG undefined FUN_1410c55a0(void)

void FUN_1410c55a0(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_1420573b0(param_1[1],0);
    FUN_142ecd4d0(*param_1);
    return;
  }
  return;
}



// FUNCTION 1410c5780 FUN_1410c5780 body=102 status=ok
// SIG undefined FUN_1410c5780(void)

void FUN_1410c5780(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  puVar2 = (undefined8 *)FName::FName(local_res8,"AssetRegistry",1);
  uVar1 = *puVar2;
  uVar3 = FUN_14168dc80();
  plVar4 = (longlong *)FUN_141690010(uVar3,uVar1);
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x48))(plVar4);
  lVar5 = AArchVisCharacter::StaticClass();
                    /* WARNING: Could not recover jumptable at 0x0001410c57e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,*(undefined8 *)(lVar5 + 0x18),*param_1,1);
  return;
}



// FUNCTION 1410c57f0 FUN_1410c57f0 body=32 status=ok
// SIG undefined FUN_1410c57f0(void)

undefined8 FUN_1410c57f0(undefined8 param_1,undefined8 param_2)

{
  FUN_1410bfb20(param_2,param_1);
  return param_1;
}



// FUNCTION 1410c5860 FUN_1410c5860 body=80 status=ok
// SIG undefined FUN_1410c5860(void)

void FUN_1410c5860(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_140cff230(*(undefined8 *)(*param_1 + 0x7f0));
  if ((*(longlong *)(*param_1 + 0x7f0) != 0) && (lVar2 != 0)) {
    cVar1 = FUN_140472310(lVar2);
    if (cVar1 != '\0') {
      FUN_140d1b4d0(*(undefined8 *)(*param_1 + 0x7f0));
      return;
    }
  }
  return;
}



// FUNCTION 1410c5910 FUN_1410c5910 body=32 status=ok
// SIG undefined FUN_1410c5910(void)

undefined8 FUN_1410c5910(undefined8 param_1,undefined8 param_2)

{
  FUN_1410c2050(param_2,param_1);
  return param_1;
}



// FUNCTION 1410c5930 FUN_1410c5930 body=149 status=ok
// SIG undefined FUN_1410c5930(void)

void FUN_1410c5930(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_28 [32];
  
  if (((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
     (*(longlong *)(param_1 + 0x40) != 0)) {
    lVar3 = FUN_14059b7e0(*(longlong *)(param_1 + 0x30),1);
    if (lVar3 != 0) {
      FUN_1405a3150(lVar3,local_28,*(undefined8 *)(param_1 + 0x40),0);
      FUN_140591060(local_28);
    }
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar4 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar4;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) & 0xbfffffff;
  UObject::ConditionalBeginDestroy(param_1);
  return;
}



// FUNCTION 1410c59d0 FUN_1410c59d0 body=109 status=ok
// SIG undefined FUN_1410c59d0(void)

undefined8 FUN_1410c59d0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x4e8);
  if (lVar1 != 0) {
    lVar3 = FUN_141319ff0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (lVar1 != -0xc0)) && (*(char *)(lVar1 + 0x160) == '\0')) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1410c5a40 FUN_1410c5a40 body=183 status=ok
// SIG undefined FUN_1410c5a40(void)

ulonglong FUN_1410c5a40(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  ulonglong in_RAX;
  
  if (*(longlong *)(param_1 + 0x1048) == 0) {
LAB_1410c5a62:
    if (*(char *)(param_1 + 0xc48) != '\0') goto LAB_1410c5aea;
  }
  else {
    in_RAX = FUN_140cb6290();
    if ((char)in_RAX == '\0') goto LAB_1410c5a62;
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xc10);
  if (cVar3 != '\0') {
    in_RAX = FWeakObjectPtr::Get(param_1 + 0xc10);
    if (*(char *)(in_RAX + 0x2b0) != '\0') goto LAB_1410c5aea;
  }
  iVar1 = *(int *)(param_1 + 0xc40);
  in_RAX = (ulonglong)iVar1;
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0xc08))) {
    lVar2 = *(longlong *)(*(ulonglong *)(param_1 + 0xc00) + in_RAX * 8);
    in_RAX = *(ulonglong *)(param_1 + 0xc00);
    if (lVar2 != 0) {
      in_RAX = FUN_1410cf140();
      if ((char)in_RAX != '\0') {
        in_RAX = 0;
        if ((*(longlong *)(lVar2 + 0x50) != 0) && (in_RAX = 0, *(longlong *)(lVar2 + 0x78) != 0)) {
          return 1;
        }
      }
    }
  }
LAB_1410c5aea:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1410c5b00 FUN_1410c5b00 body=330 status=ok
// SIG undefined FUN_1410c5b00(void)

bool FUN_1410c5b00(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  double extraout_XMM0_Qa;
  float local_res8 [2];
  undefined1 local_res10 [8];
  
  iVar1 = *(int *)(param_1 + 0x6d8);
  if ((iVar1 != 0) && (iVar2 = *(int *)(param_1 + 0x6e8), iVar2 != iVar1)) {
    cVar4 = FUN_1410cfdf0();
    if ((cVar4 != '\0') || (*(float *)(param_1 + 0x7ac) <= 0.0)) {
      if ((0 < *(int *)(param_1 + 0x77c)) && (0 < iVar2)) {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x6e0) + 8);
        if (lVar3 != 0) {
          FUN_142087ad0(lVar3,local_res10,local_res8);
          return *(float *)(param_1 + 0x78c) <= local_res8[0] &&
                 local_res8[0] != *(float *)(param_1 + 0x78c);
        }
      }
    }
    else if (iVar2 < *(int *)(param_1 + 0x6ac)) {
      if (iVar2 == 0) {
        return true;
      }
      if ((*(int *)(param_1 + 0x780) < iVar1 + -1) && (0 < iVar2)) {
        lVar3 = *(longlong *)
                 (*(longlong *)(param_1 + 0x6e0) + -8 + (longlong)*(int *)(param_1 + 0x6e8) * 0x10);
        if (lVar3 != 0) {
          FUN_142087ad0(lVar3,local_res10,local_res8);
          FUN_142eeca30(lVar3);
          return extraout_XMM0_Qa + (double)local_res8[0] < (double)*(float *)(param_1 + 0x790);
        }
      }
    }
  }
  return false;
}



// FUNCTION 1410c5c50 FUN_1410c5c50 body=479 status=ok
// SIG undefined FUN_1410c5c50(void)

ulonglong FUN_1410c5c50(longlong param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  char *pcVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  char cStackX_9;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  iVar8 = *(int *)(param_1 + 0x7d8);
  uVar9 = 0;
  uVar1 = *(ushort *)(param_1 + 0xc49);
  uVar6 = (ulonglong)uVar1;
  if (0 < iVar8) {
    cStackX_9 = (char)(uVar1 >> 8);
    pcVar7 = (char *)(*(longlong *)(param_1 + 2000) + 0x18);
    uVar11 = uVar9;
    uVar12 = uVar9;
    do {
      iVar10 = (int)uVar11;
      if ((*pcVar7 == (char)uVar1) && (pcVar7[1] == cStackX_9)) goto LAB_1410c5cb7;
      uVar11 = (ulonglong)(iVar10 + 1);
      uVar12 = uVar12 + 1;
      pcVar7 = pcVar7 + 0xe8;
    } while ((longlong)uVar12 < (longlong)iVar8);
  }
  iVar10 = -1;
LAB_1410c5cb7:
  if ((-1 < iVar10) && (iVar10 < iVar8)) {
    if (iVar8 < 1) {
      return uVar6;
    }
    lVar3 = (longlong)(iVar8 + iVar10 + param_2);
    uVar6 = lVar3 / (longlong)iVar8 & 0xffffffff;
    uVar9 = lVar3 % (longlong)iVar8 & 0xffffffff;
  }
  if ((0 < iVar8) && (uVar6 = FWeakObjectPtr::IsValid(param_1 + 0xc10), (char)uVar6 != '\0')) {
    iVar8 = (int)uVar9;
    while (iVar10 != iVar8) {
      iVar8 = (int)uVar9;
      if ((iVar8 < 0) || (*(int *)(param_1 + 0x7d8) <= iVar8)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        lVar3 = *(longlong *)(param_1 + 2000);
        local_48 = 0;
        local_50 = 0;
        local_60 = *(undefined4 *)(param_1 + 0xde8);
        local_5c = *(undefined4 *)(param_1 + 0xdec);
        local_58 = *(undefined4 *)(param_1 + 0xdf0);
        local_78 = *(undefined8 *)(param_1 + 0xdf8);
        local_40 = 0;
        FString::FString(local_70,param_1 + 0xe00);
        FSoftObjectPath::operator=(&local_50,&local_78);
        local_res18 = *(undefined4 *)(param_1 + 0xc10);
        local_res1c = *(undefined4 *)(param_1 + 0xc14);
        cVar5 = FUN_1410cfb70(&local_res18,&local_60,lVar3 + 0x18 + (longlong)iVar8 * 0xe8);
        if (cVar5 != '\0') {
          uVar6 = FUN_1410ed430(param_1,*(undefined2 *)
                                         (*(longlong *)(param_1 + 2000) + 0x18 +
                                         (longlong)iVar8 * 0xe8));
          return uVar6;
        }
      }
      iVar2 = *(int *)(param_1 + 0x7d8);
      lVar3 = (longlong)(iVar2 + iVar8 + param_2);
      uVar6 = lVar3 / (longlong)iVar2 & 0xffffffff;
      uVar11 = lVar3 % (longlong)iVar2;
      uVar9 = uVar11 & 0xffffffff;
      iVar8 = (int)uVar11;
    }
  }
  return uVar6;
}



// FUNCTION 1410c5e30 FUN_1410c5e30 body=461 status=ok
// SIG undefined FUN_1410c5e30(void)

void FUN_1410c5e30(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  longlong local_18 [2];
  
  iVar1 = *(int *)(param_1 + 0x688);
  if (*(int *)(param_1 + 0x7a0) < iVar1) {
    lVar4 = (longlong)*(int *)(param_1 + 0x7a0) * 0x50 + *(longlong *)(param_1 + 0x680);
  }
  else if (iVar1 < 1) {
    lVar4 = 0;
  }
  else {
    lVar4 = (longlong)(iVar1 + -1) * 0x50 + *(longlong *)(param_1 + 0x680);
  }
  if (((*(char *)(param_1 + 0x794) == '\0') && (*(longlong *)(param_1 + 0x6c0) != 0)) &&
     (lVar4 != 0)) {
    cVar2 = FUN_142088620();
    if (cVar2 == '\0') {
      fVar5 = 0.0;
    }
    else {
      fVar5 = *(float *)(lVar4 + 0x20);
    }
    iVar1 = *(int *)(param_1 + 0x79c);
    if ((*(int *)(lVar4 + 0x18) <= iVar1 + 1) ||
       (fVar5 = *(float *)((longlong)iVar1 * 0x20 + 0x38 + *(longlong *)(lVar4 + 0x10)) - fVar5,
       *(float *)(param_1 + 0x7a4) <= fVar5 && fVar5 != *(float *)(param_1 + 0x7a4))) {
      if ((*(char *)(param_1 + 0x795) != '\0') && ((-1 < iVar1 && (iVar1 < *(int *)(lVar4 + 0x18))))
         ) {
        lVar3 = (longlong)iVar1 * 0x20;
        fVar5 = *(float *)(lVar3 + 0x1c + *(longlong *)(lVar4 + 0x10));
        if ((0.0 < fVar5) &&
           ((fVar5 <= *(float *)(param_1 + 0x7a4) -
                      *(float *)(lVar3 + 0x18 + *(longlong *)(lVar4 + 0x10)) &&
            (*(undefined1 *)(param_1 + 0x795) = 0, *(longlong *)(param_1 + 0x6c0) != 0)))) {
          local_18[0] = 0;
          local_18[1] = 5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
          FGenericPlatformString::Memcpy(local_18[0],L"hide",10);
          FUN_142088910(*(undefined8 *)(param_1 + 0x6c0),local_18);
          if (local_18[0] != 0) {
            FMemory::Free();
          }
        }
      }
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x6b0);
      lVar3 = (longlong)*(int *)(param_1 + 0x6b8) * 0x10 + lVar4;
      if (lVar4 != lVar3) {
        do {
          if ((int)*(undefined8 *)(lVar4 + 8) == iVar1 + 1) {
            FUN_1410f4e30(param_1);
            return;
          }
          lVar4 = lVar4 + 0x10;
        } while (lVar4 != lVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1410c6000 FUN_1410c6000 body=975 status=ok
// SIG undefined FUN_1410c6000(void)

void FUN_1410c6000(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  iVar10 = *(int *)(param_1 + 0x6e8);
  if (0 < iVar10) {
    plVar2 = (longlong *)(param_1 + 0x6e0);
    do {
      plVar5 = *(longlong **)(*plVar2 + -8 + (longlong)iVar10 * 0x10);
      if (plVar5 != (longlong *)0x0) {
        lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
        if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
            lVar8 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          (**(code **)(*plVar5 + 0x288))(plVar5);
        }
      }
      *(undefined8 *)(*plVar2 + -8 + (longlong)*(int *)(param_1 + 0x6e8) * 0x10) = 0;
      iVar10 = *(int *)(param_1 + 0x6e8);
      iVar7 = (iVar10 - (iVar10 + -1)) + -1;
      if (iVar7 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)(iVar10 + -1) * 0x10 + *plVar2),
                   (void *)((longlong)iVar10 * 0x10 + *plVar2),(longlong)iVar7 << 4);
        iVar10 = *(int *)(param_1 + 0x6e8);
      }
      *(int *)(param_1 + 0x6e8) = iVar10 + -1;
      TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar2);
      iVar10 = *(int *)(param_1 + 0x6e8);
    } while (0 < iVar10);
  }
  plVar2 = (longlong *)(param_1 + 0x6f0);
  uStack_94 = 1;
  uVar3 = *(uint *)(param_1 + 0x718);
  puVar1 = (uint *)(param_1 + 0x700);
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar13 = *(uint **)(param_1 + 0x710);
    if (*(uint **)(param_1 + 0x710) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar4 = *puVar13;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar8 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar10 = local_98 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar10;
      if (bVar6) goto LAB_1410c61ad;
      uVar4 = puVar13[lVar8 + 1];
    }
    uStack_94 = uVar4 - 1 & uVar4 ^ uVar4;
    iVar10 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_84 = (iStack_80 - iVar10) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_1410c61ad:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x718);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar12 = uVar4 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = plVar2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar4;
  if (uVar4 != uVar3) {
    puVar13 = *(uint **)(param_1 + 0x710);
    if (*(uint **)(param_1 + 0x710) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = puVar13[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar10 = (int)uVar4 >> 5;
    while (uVar11 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
      goto LAB_1410c6285;
      uVar11 = puVar13[(longlong)iVar10 + 1];
      iVar10 = iVar10 + 1;
    }
    uVar11 = uVar11 - 1 & uVar11 ^ uVar11;
    iVar10 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_84 = (uVar12 - iVar10) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_1410c6285:
      uStack_84 = uVar3;
    }
  }
  while( true ) {
    if ((uStack_5c == uStack_84) && (local_68 == puVar1)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) break;
    lVar8 = (longlong)(int)uStack_5c * 0x20 + *plVar2;
    iVar10 = *(int *)(lVar8 + 0x10);
    while (0 < iVar10) {
      plVar5 = *(longlong **)(*(longlong *)(lVar8 + 8) + -8 + (longlong)iVar10 * 8);
      if (plVar5 != (longlong *)0x0) {
        lVar9 = UPlatformInterfaceBase::GetPrivateStaticClass();
        if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
            lVar9 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          (**(code **)(*plVar5 + 0x288))(plVar5);
        }
      }
      *(undefined8 *)(*(longlong *)(lVar8 + 8) + -8 + (longlong)*(int *)(lVar8 + 0x10) * 8) = 0;
      iVar10 = *(int *)(lVar8 + 0x10);
      iVar7 = (iVar10 - (iVar10 + -1)) + -1;
      if (iVar7 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*(longlong *)(lVar8 + 8) + (longlong)(iVar10 + -1) * 8),
                   (void *)(*(longlong *)(lVar8 + 8) + (longlong)iVar10 * 8),(longlong)iVar7 << 3);
        iVar10 = *(int *)(lVar8 + 0x10);
      }
      *(int *)(lVar8 + 0x10) = iVar10 + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar8 + 8);
      iVar10 = *(int *)(lVar8 + 0x10);
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
  ::Empty(plVar2,0);
  return;
}



// FUNCTION 1410c63d0 FUN_1410c63d0 body=133 status=ok
// SIG undefined FUN_1410c63d0(void)

void FUN_1410c63d0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  (**(code **)(param_1[0x57] + 0x110))(param_1 + 0x57,0);
  lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar1 != 0) && (param_1[100] != 0)) {
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar2,param_1 + 100);
    param_1[100] = 0;
  }
  return;
}



// FUNCTION 1410c6460 FUN_1410c6460 body=394 status=ok
// SIG undefined FUN_1410c6460(void)

void FUN_1410c6460(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 *local_b8 [2];
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined4 local_78;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  FUN_140e6bf90(param_1 + 0xc50,param_1 + 0xdd8);
  iVar1 = *(int *)(param_1 + 0xc40);
  if (((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0xc08))) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xc00) + (longlong)iVar1 * 8), lVar2 != 0)) {
    FUN_140e6bf90(lVar2 + 0x30,param_1 + 0xc50);
    *(undefined1 *)
     (*(longlong *)(*(longlong *)(param_1 + 0xc00) + (longlong)*(int *)(param_1 + 0xc40) * 8) +
     0x1e0) = 1;
  }
  FUN_1410d0990(param_1);
  FUN_1410e8a40(param_1);
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_88 = 0;
  local_78 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_a8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1444f8920;
    puVar3[1] = param_1;
    *(undefined4 *)(puVar3 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar3 + 0x14) = local_resc;
  }
  local_b8[0] = &LAB_1410c5520;
  FUN_14208c4f0(param_1,local_b8);
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  *(undefined1 *)(param_1 + 0x831) = 1;
  FUN_1410ead50(param_1);
  FWeakObjectPtr::operator=(&local_res10,param_1);
  local_38 = 0;
  local_28 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1444f8920;
    puVar3[1] = param_1;
    *(undefined4 *)(puVar3 + 2) = local_res10;
    *(undefined4 *)((longlong)puVar3 + 0x14) = local_res14;
  }
  local_68[0] = &LAB_1410c5510;
  FUN_14208c4f0(param_1,local_68);
  return;
}



// FUNCTION 1410c65f0 FUN_1410c65f0 body=2838 status=ok
// SIG undefined FUN_1410c65f0(void)

void FUN_1410c65f0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  wchar_t *pwVar4;
  ulonglong uVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  int *piVar13;
  wchar_t *pwVar14;
  undefined8 local_res8;
  ulonglong local_res10;
  undefined8 local_38;
  undefined8 uStack_30;
  
  piVar13 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar13 < DAT_146875078) && (_Init_thread_header(&DAT_146875078), DAT_146875078 == -1)) {
    FName::FName(&DAT_146875070,L"CascadingList",1);
    _Init_thread_footer(&DAT_146875078);
  }
  if ((*piVar13 < DAT_146875088) && (_Init_thread_header(&DAT_146875088), DAT_146875088 == -1)) {
    FName::FName(&DAT_146875080,L"CharacterName",1);
    _Init_thread_footer(&DAT_146875088);
  }
  if ((*piVar13 < DAT_146875098) && (_Init_thread_header(&DAT_146875098), DAT_146875098 == -1)) {
    FName::FName(&DAT_146875090,L"Description",1);
    _Init_thread_footer(&DAT_146875098);
  }
  if ((*piVar13 < DAT_1468750a8) && (_Init_thread_header(&DAT_1468750a8), DAT_1468750a8 == -1)) {
    FName::FName(&DAT_1468750a0,L"DescriptionCanvasPanel",1);
    _Init_thread_footer(&DAT_1468750a8);
  }
  pwVar6 = (wchar_t *)FUN_1421006a0(param_1,&DAT_146875070);
  pwVar14 = (wchar_t *)0x0;
  if (pwVar6 == (wchar_t *)0x0) {
LAB_1410c66a3:
    pwVar6 = pwVar14;
  }
  else {
    lVar7 = UProgressBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar6 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar6 + 8) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1410c66a3;
  }
  *(wchar_t **)(param_1 + 0x2f8) = pwVar6;
  if (pwVar6 == (wchar_t *)0x0) {
    return;
  }
  pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnCascadeListItemClicked",L"::");
  pwVar6 = pwVar14;
  while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
    pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
    pwVar6 = pwVar4;
  }
  FName::FName(&local_res10,pwVar6 + 2,1);
  uVar5 = local_res10;
  lVar7 = *(longlong *)(param_1 + 0x2f8);
  FWeakObjectPtr::operator=(lVar7 + 0x2e0,param_1);
  *(ulonglong *)(lVar7 + 0x2e8) = uVar5;
  local_res8 = 0;
  if ((uVar5 != 0) && (lVar9 = FWeakObjectPtr::Get(lVar7 + 0x2e0), lVar9 != 0)) {
    UObject::FindFunction(lVar9,*(undefined8 *)(lVar7 + 0x2e8));
  }
  pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnCascadeListItemRefresh",L"::");
  pwVar6 = pwVar14;
  while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
    pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
    pwVar6 = pwVar4;
  }
  FName::FName(&local_res10,pwVar6 + 2,1);
  uVar5 = local_res10;
  lVar7 = *(longlong *)(param_1 + 0x2f8);
  FWeakObjectPtr::operator=(lVar7 + 0x300,param_1);
  *(ulonglong *)(lVar7 + 0x308) = uVar5;
  local_res8 = 0;
  if ((uVar5 != 0) && (lVar9 = FWeakObjectPtr::Get(lVar7 + 0x300), lVar9 != 0)) {
    UObject::FindFunction(lVar9,*(undefined8 *)(lVar7 + 0x308));
  }
  pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnCascadeListItemSelected",L"::");
  pwVar6 = pwVar14;
  while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
    pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
    pwVar6 = pwVar4;
  }
  FName::FName(&local_res10,pwVar6 + 2,1);
  uVar5 = local_res10;
  lVar7 = *(longlong *)(param_1 + 0x2f8);
  FWeakObjectPtr::operator=(lVar7 + 0x2d0,param_1);
  *(ulonglong *)(lVar7 + 0x2d8) = uVar5;
  local_res8 = 0;
  if ((uVar5 != 0) && (lVar9 = FWeakObjectPtr::Get(lVar7 + 0x2d0), lVar9 != 0)) {
    UObject::FindFunction(lVar9,*(undefined8 *)(lVar7 + 0x2d8));
  }
  pwVar6 = (wchar_t *)FUN_1421006a0(param_1,&DAT_146875080);
  if (pwVar6 == (wchar_t *)0x0) {
LAB_1410c68be:
    pwVar6 = pwVar14;
  }
  else {
    lVar7 = UImage::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar6 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar6 + 8) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1410c68be;
  }
  *(wchar_t **)(param_1 + 0x300) = pwVar6;
  pwVar6 = (wchar_t *)FUN_1421006a0(param_1,&DAT_146875090);
  if (pwVar6 == (wchar_t *)0x0) {
LAB_1410c6911:
    pwVar6 = pwVar14;
  }
  else {
    lVar7 = UImage::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar6 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar6 + 8) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1410c6911;
  }
  *(wchar_t **)(param_1 + 0x310) = pwVar6;
  pwVar6 = (wchar_t *)FUN_1421006a0(param_1,&DAT_1468750a0);
  if (pwVar6 == (wchar_t *)0x0) {
LAB_1410c6964:
    pwVar6 = pwVar14;
  }
  else {
    lVar7 = UCanvasPanel::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar6 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar6 + 8) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1410c6964;
  }
  *(wchar_t **)(param_1 + 0x308) = pwVar6;
  lVar7 = *(longlong *)(param_1 + 0x2c8);
  if (lVar7 == 0) {
    return;
  }
  lVar9 = FUN_14145f370();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  if (*(longlong *)(lVar7 + 0xa58) == 0) {
    return;
  }
  uVar10 = FText::ToString(*(longlong *)(lVar7 + 0xa58) + 0x90);
  FString::operator=(param_1 + 0x390,uVar10);
  pwVar6 = *(wchar_t **)(lVar7 + 0x848);
  if (pwVar6 != (wchar_t *)0x0) {
    lVar7 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(pwVar6 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar6 + 8) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1410c6a28;
  }
  pwVar6 = pwVar14;
LAB_1410c6a28:
  *(wchar_t **)(param_1 + 0x340) = pwVar6;
  if (pwVar6 != (wchar_t *)0x0) {
    uVar10 = AGFireballProjectile::GetPrivateStaticClass();
    lVar7 = (**(code **)(*(longlong *)pwVar6 + 0x628))(pwVar6,uVar10);
    *(longlong *)(param_1 + 0x348) = lVar7;
    if (lVar7 != 0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlayerAbilitySlotChanged",L"::");
      pwVar6 = pwVar14;
      while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar6 = pwVar4;
      }
      FName::FName(&local_res10,pwVar6 + 2,1);
      uVar5 = local_res10;
      lVar7 = *(longlong *)(param_1 + 0x348);
      FWeakObjectPtr::operator=(&local_38,0);
      uStack_30 = 0;
      FWeakObjectPtr::operator=(&local_38,param_1);
      uStack_30 = uVar5;
      local_res8 = 0;
      if ((uVar5 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_38), lVar9 != 0)) {
        UObject::FindFunction(lVar9,uStack_30);
      }
      FUN_1406a5aa0(lVar7 + 0x2a8,&local_38);
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnActionAbilityAugmentChanged",L"::");
      pwVar6 = pwVar14;
      while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar6 = pwVar4;
      }
      FName::FName(&local_res10,pwVar6 + 2,1);
      uVar5 = local_res10;
      lVar7 = *(longlong *)(param_1 + 0x348);
      FWeakObjectPtr::operator=(&local_38,0);
      uStack_30 = 0;
      FWeakObjectPtr::operator=(&local_38,param_1);
      uStack_30 = uVar5;
      local_res8 = 0;
      if ((uVar5 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_38), lVar9 != 0)) {
        UObject::FindFunction(lVar9,uStack_30);
      }
      FUN_1406a5aa0(lVar7 + 0x298,&local_38);
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x348) + 0x3b0);
      *(longlong *)(param_1 + 0x358) = lVar7;
      if (lVar7 != 0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnAbilityItemChanged",L"::");
        pwVar6 = pwVar14;
        while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
          pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar6 = pwVar4;
        }
        FName::FName(&local_res10,pwVar6 + 2,1);
        uVar5 = local_res10;
        lVar7 = *(longlong *)(param_1 + 0x358);
        FWeakObjectPtr::operator=(&local_38,0);
        uStack_30 = 0;
        FWeakObjectPtr::operator=(&local_38,param_1);
        uStack_30 = uVar5;
        local_res8 = 0;
        if ((uVar5 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_38), lVar9 != 0)) {
          UObject::FindFunction(lVar9,uStack_30);
        }
        FUN_1406a5aa0(lVar7 + 0x38,&local_38);
        uStack_30 = uStack_30 & 0xffffffff00000000;
        local_38 = Z_Construct_UClass_ANavSvoDebugActor_Statics::
                   NewProp_bAutoIncrementPathSearch_SetBit;
        pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnAbilityPointsChanged",L"::");
        pwVar6 = pwVar14;
        while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
          pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar6 = pwVar4;
        }
        FName::FName(&local_res8,pwVar6 + 2,1);
        FUN_140ddbc10(*(longlong *)(param_1 + 0x358) + 0x48,param_1,&local_38,local_res8);
        pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnAbilityTreeReset",L"::");
        pwVar6 = pwVar14;
        while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
          pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar6 = pwVar4;
        }
        FName::FName(&local_res10,pwVar6 + 2,1);
        uVar5 = local_res10;
        lVar7 = *(longlong *)(param_1 + 0x358);
        FWeakObjectPtr::operator=(&local_38,0);
        uStack_30 = 0;
        FWeakObjectPtr::operator=(&local_38,param_1);
        uStack_30 = uVar5;
        local_res8 = 0;
        if ((uVar5 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_38), lVar9 != 0)) {
          UObject::FindFunction(lVar9,uStack_30);
        }
        FUN_1406a5aa0(lVar7 + 0x68,&local_38);
        uStack_30 = uStack_30 & 0xffffffff00000000;
        local_38 = Z_Construct_UClass_ANavSvoDebugActor_Statics::
                   NewProp_bAutoIncrementPathSearch_SetBit;
        pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnAbilityPointsChanged",L"::");
        pwVar6 = pwVar14;
        while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
          pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar6 = pwVar4;
        }
        FName::FName(&local_res8,pwVar6 + 2,1);
        FUN_140ddbc10(*(longlong *)(param_1 + 0x358) + 0x58,param_1,&local_38,local_res8);
        plVar2 = *(longlong **)(param_1 + 0x340);
        uVar10 = FUN_1414aa4c0();
        lVar7 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar10);
        *(longlong *)(param_1 + 0x360) = lVar7;
        if (lVar7 != 0) {
          pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnLevelChanged",L"::");
          while (pwVar8 = pwVar6, pwVar8 != (wchar_t *)0x0) {
            pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar8 + 1,L"::");
            pwVar14 = pwVar8;
          }
          FName::FName(&local_res10,pwVar14 + 2,1);
          lVar7 = *(longlong *)(param_1 + 0x360);
          FWeakObjectPtr::operator=(&local_38,0);
          uStack_30 = 0;
          FWeakObjectPtr::operator=(&local_38,param_1);
          uStack_30 = local_res10;
          local_res8 = 0;
          if ((local_res10 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_38), lVar9 != 0)) {
            UObject::FindFunction(lVar9,uStack_30);
          }
          FUN_1406a5aa0(lVar7 + 0x1b0,&local_38);
          plVar2 = *(longlong **)(param_1 + 0x340);
          uVar10 = FUN_1414add30();
          lVar7 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar10);
          *(longlong *)(param_1 + 0x350) = lVar7;
          if (lVar7 != 0) {
            uStack_30 = uStack_30 & 0xffffffff00000000;
            local_38 = Z_Construct_UClass_ANavSvoDebugActor_Statics::
                       NewProp_bAutoIncrementPathSearch_SetBit;
            plVar2 = (longlong *)(lVar7 + 0x178);
            plVar11 = (longlong *)FMemory::Realloc(0,0x30);
            if (plVar11 != (longlong *)0x0) {
              *plVar11 = (longlong)&PTR_FUN_143fcfec0;
              FWeakObjectPtr::operator=(plVar11 + 1,param_1);
              *(undefined4 *)(plVar11 + 2) = (undefined4)local_38;
              *(undefined4 *)((longlong)plVar11 + 0x14) = local_38._4_4_;
              *(undefined4 *)(plVar11 + 3) = (undefined4)uStack_30;
              *(undefined4 *)((longlong)plVar11 + 0x1c) = uStack_30._4_4_;
              lVar9 = FDelegateHandle::GenerateNewID();
              plVar11[5] = lVar9;
              *plVar11 = (longlong)&PTR_FUN_143fcff08;
              FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
              (**(code **)(*plVar11 + 0x20))(plVar11,&local_res8);
              iVar1 = *(int *)(lVar7 + 0x180);
              *(int *)(lVar7 + 0x180) = iVar1 + 1;
              if (*(int *)(lVar7 + 0x184) < iVar1 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar1);
              }
              puVar12 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar2);
              *puVar12 = plVar11;
              *(undefined4 *)(puVar12 + 1) = 3;
            }
          }
          FUN_1410cb860(param_1,1,param_1 + 0x318);
          FUN_1410ca1f0(param_1);
          FUN_1410e6c20(param_1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1410c7110 FUN_1410c7110 body=111 status=ok
// SIG undefined FUN_1410c7110(void)

undefined8 * FUN_1410c7110(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1446a54a0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    FUN_1410b3270(puVar1 + 2,param_1 + 0x10);
    *(undefined4 *)(puVar1 + 0x1b) = *(undefined4 *)(param_1 + 0xd8);
    *(undefined4 *)((longlong)puVar1 + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1410c7180 FUN_1410c7180 body=107 status=ok
// SIG undefined FUN_1410c7180(void)

undefined8 * FUN_1410c7180(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1446a53b8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    FString::FString(puVar1 + 4,param_1 + 0x20);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1410c71f0 FUN_1410c71f0 body=97 status=ok
// SIG undefined FUN_1410c71f0(void)

undefined8 * FUN_1410c71f0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1446a53a0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined1 *)((longlong)puVar1 + 0x24) = *(undefined1 *)(param_1 + 0x24);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1410c7260 CopyToEmptyStorage body=104 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_86b5239219762420415e95617a23a7af>_>::
CopyToEmptyStorage(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x70);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_CopyToEmptyStorage_1446a5540;
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



// FUNCTION 1410c72d0 FUN_1410c72d0 body=96 status=ok
// SIG undefined FUN_1410c72d0(void)

undefined8 * FUN_1410c72d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1446a5428;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1410c7330 FUN_1410c7330 body=207 status=ok
// SIG undefined FUN_1410c7330(void)

undefined8 * FUN_1410c7330(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1446a54d0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x18));
    FUN_14170c210(puVar1 + 3,uVar2);
    puVar1[4] = &PTR_FUN_1445306f0;
    *(undefined1 *)(puVar1 + 5) = *(undefined1 *)(param_1 + 0x28);
    *(undefined1 *)((longlong)puVar1 + 0x29) = *(undefined1 *)(param_1 + 0x29);
    *(undefined1 *)((longlong)puVar1 + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
    *(undefined1 *)((longlong)puVar1 + 0x2b) = *(undefined1 *)(param_1 + 0x2b);
    *(undefined1 *)((longlong)puVar1 + 0x2c) = *(undefined1 *)(param_1 + 0x2c);
    *(undefined1 *)((longlong)puVar1 + 0x2d) = *(undefined1 *)(param_1 + 0x2d);
    *(undefined1 *)((longlong)puVar1 + 0x2e) = *(undefined1 *)(param_1 + 0x2e);
    *(undefined1 *)((longlong)puVar1 + 0x2f) = *(undefined1 *)(param_1 + 0x2f);
    *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x30);
    *(undefined1 *)((longlong)puVar1 + 0x34) = *(undefined1 *)(param_1 + 0x34);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1410c7400 FUN_1410c7400 body=99 status=ok
// SIG undefined FUN_1410c7400(void)

undefined8 * FUN_1410c7400(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1446a5410;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(puVar1 + 2,param_1 + 0x10);
    *(undefined2 *)(puVar1 + 7) = *(undefined2 *)(param_1 + 0x38);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1410c7470 FUN_1410c7470 body=116 status=ok
// SIG undefined FUN_1410c7470(void)

undefined8 * FUN_1410c7470(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(800);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1446a5440;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    FUN_1410b33e0(puVar1 + 2,param_1 + 0x10);
    FUN_1410b33e0(puVar1 + 0x33,param_1 + 0x198);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1410c74f0 FUN_1410c74f0 body=120 status=ok
// SIG undefined FUN_1410c74f0(void)

undefined8 * FUN_1410c74f0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x140);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1446a54b8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    FUN_1410b3000(puVar1 + 4,param_1 + 0x20);
    *(undefined1 *)(puVar1 + 0x27) = *(undefined1 *)(param_1 + 0x138);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1410c7570 CopyToEmptyStorage body=104 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_86b5239219762420415e95617a23a7af>_>::
CopyToEmptyStorage(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x70);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_CopyToEmptyStorage_1446a5528;
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



// FUNCTION 1410c75e0 FUN_1410c75e0 body=74 status=ok
// SIG undefined FUN_1410c75e0(void)

void FUN_1410c75e0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1446a5458;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    return;
  }
  return;
}



// FUNCTION 1410c7630 CopyToEmptyStorage body=79 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_7a02e06ca5db01d82e81cc92e1965566>_>::
CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_1446a5500;
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1410c7680 CopyToEmptyStorage body=79 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_7a02e06ca5db01d82e81cc92e1965566>_>::
CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_1446a54e8;
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1410c76d0 FUN_1410c76d0 body=2119 status=ok
// SIG undefined FUN_1410c76d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410c76d0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  longlong **pplVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  longlong *plVar19;
  bool bVar20;
  undefined1 auStack_2c8 [32];
  longlong *local_2a8;
  longlong *local_2a0;
  longlong **local_298;
  int local_288;
  longlong *local_280;
  longlong *local_278;
  longlong *local_270;
  longlong *local_268;
  longlong local_258;
  ulonglong local_250;
  longlong *local_248;
  undefined8 local_240;
  longlong local_238;
  longlong local_230;
  longlong *local_228;
  longlong *plStack_220;
  longlong *local_218;
  longlong *plStack_210;
  undefined2 *local_208;
  int local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  longlong *local_1c8;
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined1 local_198 [128];
  longlong local_118;
  undefined8 local_110;
  undefined1 local_f8 [128];
  longlong local_78;
  char *local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  plVar12 = (longlong *)0x0;
  local_288 = 0;
  local_230 = 8;
  if (0 < *(int *)(param_1 + 0x710)) {
    local_238 = 0;
    plVar19 = plVar12;
    do {
      local_1e8 = local_238 * 0x30 + *(longlong *)(param_1 + 0x708);
      uVar3 = *(undefined4 *)(local_1e8 + 0x20);
      uVar4 = *(undefined4 *)(local_1e8 + 0x24);
      if ((*(longlong *)(param_1 + 0x158) == 0) || (*(longlong *)(param_1 + 0x160) == 0)) {
LAB_1410c77db:
        pplVar8 = &local_228;
        local_228 = (longlong *)0x0;
        plStack_220 = (longlong *)0x0;
        plVar19 = (longlong *)(ulonglong)((uint)plVar19 | 2);
        plVar9 = plVar12;
      }
      else {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x160) + 8);
        LOCK();
        iVar18 = *piVar1;
        if (iVar18 == 0) {
          *piVar1 = 0;
          iVar18 = 0;
        }
        UNLOCK();
        if (iVar18 < 1) goto LAB_1410c77db;
        local_278 = *(longlong **)(param_1 + 0x160);
        plVar19 = (longlong *)(ulonglong)((uint)plVar19 | 1);
        local_280 = (longlong *)0x0;
        if (local_278 != (longlong *)0x0) {
          LOCK();
          iVar18 = (int)local_278[1];
          bVar20 = iVar18 == 0;
          if (bVar20) {
            *(int *)(local_278 + 1) = 0;
            iVar18 = 0;
          }
          UNLOCK();
          while (!bVar20) {
            LOCK();
            bVar20 = iVar18 == (int)local_278[1];
            if (bVar20) {
              *(int *)(local_278 + 1) = iVar18 + 1;
            }
            UNLOCK();
            if (bVar20) {
              local_280 = *(longlong **)(param_1 + 0x158);
              pplVar8 = &local_280;
              plVar9 = local_280;
              goto LAB_1410c77ee;
            }
            LOCK();
            iVar18 = (int)local_278[1];
            bVar20 = iVar18 == 0;
            if (bVar20) {
              *(int *)(local_278 + 1) = 0;
              iVar18 = 0;
            }
            UNLOCK();
          }
          local_278 = (longlong *)0x0;
        }
        pplVar8 = &local_280;
        plVar9 = (longlong *)0x0;
      }
LAB_1410c77ee:
      plVar10 = pplVar8[1];
      pplVar8[1] = (longlong *)0x0;
      plVar16 = plStack_220;
      *pplVar8 = (longlong *)0x0;
      if ((((ulonglong)plVar19 & 2) != 0) &&
         (plVar19 = (longlong *)(ulonglong)((uint)plVar19 & 0xfffffffd),
         plStack_220 != (longlong *)0x0)) {
        LOCK();
        plVar2 = plStack_220 + 1;
        lVar15 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*plStack_220)(plStack_220);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          iVar18 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar18 == 1) {
            (**(code **)(*plStack_220 + 8))(plStack_220,1);
          }
        }
      }
      plVar16 = local_278;
      if ((((ulonglong)plVar19 & 1) != 0) &&
         (plVar19 = (longlong *)(ulonglong)((uint)plVar19 & 0xfffffffe),
         local_278 != (longlong *)0x0)) {
        LOCK();
        plVar2 = local_278 + 1;
        lVar15 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*local_278)(local_278);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          iVar18 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar18 == 1) {
            (**(code **)(*local_278 + 8))(local_278,1);
          }
        }
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar16 = plVar10 + 1;
        lVar15 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar18 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar18 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      if (plVar9 != (longlong *)0x0) {
        FString::PrintfImpl(&local_208,L"btnIndex%d",local_288);
        puVar13 = &DAT_143f3eda8;
        if (local_200 != 0) {
          puVar13 = local_208;
        }
        TStringConversion<TStringConvert<wchar_t,char>,128>::
        TStringConversion<TStringConvert<wchar_t,char>,128>(local_f8,puVar13);
        pcVar7 = local_70;
        local_258 = 0;
        local_250 = 0;
        if ((local_70 != (char *)0x0) && (*local_70 != '\0')) {
          lVar15 = -1;
          do {
            lVar15 = lVar15 + 1;
          } while (local_70[lVar15] != '\0');
          uVar14 = (int)lVar15 + 1;
          local_250 = (ulonglong)uVar14;
          if (0 < (int)uVar14) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_258,0);
          }
          local_2a8 = (longlong *)CONCAT62(local_2a8._2_6_,0x3f);
          FGenericPlatformString::Convert<char,wchar_t>(local_258,uVar14,pcVar7,uVar14);
        }
        if (*(int *)(param_1 + 0x6f0) == 0) {
          puVar13 = &DAT_143f3eda8;
        }
        else {
          puVar13 = *(undefined2 **)(param_1 + 0x6e8);
        }
        TStringConversion<TStringConvert<wchar_t,char>,128>::
        TStringConversion<TStringConvert<wchar_t,char>,128>(local_198,puVar13);
        local_1f8 = local_110;
        local_1f0 = URemnantGameInstance::GetPrivateStaticClass();
        if ((*(longlong *)(param_1 + 0x158) == 0) || (*(longlong *)(param_1 + 0x160) == 0)) {
LAB_1410c7a17:
          pplVar8 = &local_218;
          local_218 = (longlong *)0x0;
          plStack_210 = (longlong *)0x0;
          uVar14 = 8;
          plVar9 = plVar12;
        }
        else {
          piVar1 = (int *)(*(longlong *)(param_1 + 0x160) + 8);
          LOCK();
          iVar18 = *piVar1;
          if (iVar18 == 0) {
            *piVar1 = 0;
            iVar18 = 0;
          }
          UNLOCK();
          if (iVar18 < 1) goto LAB_1410c7a17;
          local_268 = *(longlong **)(param_1 + 0x160);
          local_270 = (longlong *)0x0;
          if (local_268 != (longlong *)0x0) {
            LOCK();
            iVar18 = (int)local_268[1];
            bVar20 = iVar18 == 0;
            if (bVar20) {
              *(int *)(local_268 + 1) = 0;
              iVar18 = 0;
            }
            UNLOCK();
            while (!bVar20) {
              LOCK();
              bVar20 = iVar18 == (int)local_268[1];
              if (bVar20) {
                *(int *)(local_268 + 1) = iVar18 + 1;
              }
              UNLOCK();
              if (bVar20) {
                pplVar8 = &local_270;
                local_270 = *(longlong **)(param_1 + 0x158);
                uVar14 = 4;
                plVar9 = *(longlong **)(param_1 + 0x158);
                goto LAB_1410c7a2b;
              }
              LOCK();
              iVar18 = (int)local_268[1];
              bVar20 = iVar18 == 0;
              if (bVar20) {
                *(int *)(local_268 + 1) = 0;
                iVar18 = 0;
              }
              UNLOCK();
            }
            local_268 = (longlong *)0x0;
          }
          pplVar8 = &local_270;
          uVar14 = 4;
          plVar9 = (longlong *)0x0;
        }
LAB_1410c7a2b:
        plVar10 = pplVar8[1];
        uVar14 = (uint)plVar19 | uVar14;
        plVar19 = (longlong *)(ulonglong)uVar14;
        pplVar8[1] = (longlong *)0x0;
        plVar16 = plStack_210;
        *pplVar8 = (longlong *)0x0;
        if (((uVar14 & 8) != 0) &&
           (plVar19 = (longlong *)(ulonglong)(uVar14 & 0xfffffff7), plStack_210 != (longlong *)0x0))
        {
          LOCK();
          plVar2 = plStack_210 + 1;
          lVar15 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*plStack_210)(plStack_210);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            iVar18 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar18 == 1) {
              (**(code **)(*plStack_210 + 8))(plStack_210,1);
            }
          }
        }
        plVar16 = local_268;
        if ((((ulonglong)plVar19 & 4) != 0) &&
           (plVar19 = (longlong *)(ulonglong)((uint)plVar19 & 0xfffffffb),
           local_268 != (longlong *)0x0)) {
          LOCK();
          plVar2 = local_268 + 1;
          lVar15 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*local_268)(local_268);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            iVar18 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar18 == 1) {
              (**(code **)(*local_268 + 8))(local_268,1);
            }
          }
        }
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        local_298 = &local_248;
        local_2a8 = &local_258;
        local_2a0 = (longlong *)CONCAT71(local_2a0._1_7_,6);
        local_248 = (longlong *)0x0;
        local_240 = 0;
        plVar9 = (longlong *)
                 FUN_14202a0e0(plVar9,local_1f0,*(undefined8 *)(param_1 + 0x38),local_1f8);
        if (plVar9 == (longlong *)0x0) {
LAB_1410c7b48:
          plVar9 = plVar12;
        }
        else {
          lVar15 = URemnantGameInstance::GetPrivateStaticClass();
          if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar15 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8)
              != lVar15 + 0x88)) {
            bVar20 = false;
          }
          else {
            bVar20 = true;
          }
          if (!bVar20) goto LAB_1410c7b48;
        }
        plVar16 = local_248;
        for (iVar18 = (int)local_240; iVar18 != 0; iVar18 = iVar18 + -1) {
          if (*plVar16 != 0) {
            FMemory::Free();
          }
          plVar16 = plVar16 + 2;
        }
        if (local_248 != (longlong *)0x0) {
          FMemory::Free(local_248);
        }
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar16 = plVar10 + 1;
          lVar15 = *plVar16;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar18 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar18 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
          LOCK();
          plVar16 = plVar10 + 1;
          lVar15 = *plVar16;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar18 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar18 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        if (local_118 != 0) {
          FMemory::Free();
        }
        if (local_258 != 0) {
          FMemory::Free();
        }
        if (local_78 != 0) {
          FMemory::Free();
        }
        if (plVar9 != (longlong *)0x0) {
          if (*(longlong *)(local_1e8 + 0x28) == 0) {
            uVar11 = FText::FromString(local_1b0,&local_208);
            FUN_142ed3af0(plVar9,uVar11,0);
            plVar10 = (longlong *)plVar9[0x61];
            if (plVar10 != (longlong *)0x0) {
              (**(code **)(*plVar10 + 0x2b0))(plVar10,uVar11,1,0);
            }
            plVar10 = local_1a8;
            if (local_1a8 != (longlong *)0x0) {
              LOCK();
              plVar16 = local_1a8 + 1;
              lVar15 = *plVar16;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)lVar15 == 1) {
                (**(code **)*local_1a8)(local_1a8);
                LOCK();
                piVar1 = (int *)((longlong)plVar10 + 0xc);
                iVar18 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar18 == 1) {
                  (**(code **)(*plVar10 + 8))(plVar10,1);
                }
              }
            }
          }
          else {
            lVar15 = *(longlong *)(local_1e8 + 0x28) + 0xa8;
            FUN_142ed3af0(plVar9,lVar15,0);
            plVar10 = (longlong *)plVar9[0x61];
            if (plVar10 != (longlong *)0x0) {
              (**(code **)(*plVar10 + 0x2b0))(plVar10,lVar15,1,0);
            }
          }
          FUN_14208ff10(plVar9,uVar3,uVar4);
          plVar10 = (longlong *)FName::FName(local_1c0,L"OnPlayerClassItemClicked",1);
          FWeakObjectPtr::operator=(plVar9 + 0x36,param_1);
          plVar9[0x37] = *plVar10;
          plVar10 = (longlong *)FName::FName(local_1b8,L"OnPlayerClassItemFocused",1);
          FWeakObjectPtr::operator=(plVar9 + 0x3a,param_1);
          plVar9[0x3b] = *plVar10;
          iVar18 = *(int *)(param_1 + 0x720);
          *(int *)(param_1 + 0x720) = iVar18 + 1;
          if (*(int *)(param_1 + 0x724) < iVar18 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (param_1 + 0x718,iVar18);
          }
          *(longlong **)(*(longlong *)(param_1 + 0x718) + (longlong)iVar18 * 8) = plVar9;
        }
        if (local_208 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
      local_288 = local_288 + 1;
      local_238 = local_238 + 1;
    } while (local_288 < *(int *)(param_1 + 0x710));
  }
  iVar17 = 1;
  lVar15 = 8;
  iVar18 = *(int *)(param_1 + 0x720);
  if (0 < iVar18) {
    do {
      lVar5 = *(longlong *)(param_1 + 0x718);
      lVar6 = *(longlong *)(lVar5 + -8 + lVar15);
      if (lVar6 != 0) {
        if ((iVar17 + -2 < 0) || (iVar18 <= iVar17 + -2)) {
          bVar20 = false;
        }
        else {
          bVar20 = true;
        }
        plVar19 = plVar12;
        if (bVar20) {
          plVar19 = *(longlong **)(lVar5 + -0x10 + lVar15);
        }
        if ((iVar17 < 0) || (iVar18 <= iVar17)) {
          bVar20 = false;
        }
        else {
          bVar20 = true;
        }
        plVar9 = plVar12;
        if (bVar20) {
          plVar9 = *(longlong **)(lVar5 + lVar15);
        }
        local_1d8 = 0;
        local_1e0 = lVar6;
        uVar11 = UBlendableInterface::GetPrivateStaticClass();
        local_1d8 = UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar11);
        local_2a8 = plVar19;
        local_2a0 = plVar9;
        FUN_142ecfdd0(param_1,&local_1e0,0,0);
        lVar15 = local_230;
      }
      iVar18 = *(int *)(param_1 + 0x720);
      lVar15 = lVar15 + 8;
      iVar17 = iVar17 + 1;
      local_230 = lVar15;
    } while (iVar17 <= iVar18);
  }
  if (0 < iVar18) {
    lVar15 = **(longlong **)(param_1 + 0x718);
    local_1d0 = lVar15;
    if (lVar15 != 0) {
      uVar11 = UBlendableInterface::GetPrivateStaticClass();
      plVar12 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar15,uVar11);
    }
    local_1c8 = plVar12;
    FUN_142ed36d0(param_1,&local_1d0,0);
  }
  return;
}



// FUNCTION 1410c7f20 FUN_1410c7f20 body=664 status=ok
// SIG undefined FUN_1410c7f20(void)

void FUN_1410c7f20(longlong param_1,longlong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_58;
  longlong local_50;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0x788) != 0)) &&
     (*(char *)(param_2 + 0x94) == '\0')) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x788) + 0x1e2) = 2;
    lVar8 = *(longlong *)(param_2 + 0x30);
    lVar7 = 0;
    lVar9 = (longlong)*(int *)(param_2 + 0x38) * 0x30 + lVar8;
    for (; lVar8 != lVar9; lVar8 = lVar8 + 0x30) {
      local_58 = 0;
      local_50 = 0x17;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      FGenericPlatformString::Memcpy(local_58,L"BTN_DialogWindowButton",0x2e);
      uVar6 = *(undefined8 *)(param_1 + 0x788);
      uVar2 = URemnantGameInstance::GetPrivateStaticClass();
      lVar3 = FUN_142ebcee0(uVar6,&local_58,uVar2,0);
      if (lVar3 == 0) {
LAB_1410c801a:
        lVar3 = lVar7;
      }
      else {
        lVar4 = URemnantGameInstance::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_1410c801a;
      }
      if (local_58 != 0) {
        FMemory::Free();
      }
      if (lVar3 != 0) {
        FUN_142ed3af0(lVar3,lVar8,0);
        if (*(char *)(lVar8 + 0x29) == '\0') {
          puVar5 = (undefined8 *)FName::FName(local_res18,L"OnDialogBoxItemClicked",1);
          FWeakObjectPtr::operator=(lVar3 + 0x1b0);
          *(undefined8 *)(lVar3 + 0x1b8) = *puVar5;
        }
        else {
          FUN_142ed5bf0(lVar3,1);
          puVar5 = (undefined8 *)FName::FName(local_res10,L"OnDialogBoxItemClicked",1);
          FWeakObjectPtr::operator=(lVar3 + 0x230);
          *(undefined8 *)(lVar3 + 0x238) = *puVar5;
        }
      }
    }
    FWeakObjectPtr::operator=(local_48,0);
    FWeakObjectPtr::operator=(local_40,0);
    FWeakObjectPtr::operator=(local_38,0);
    FWeakObjectPtr::operator=(local_30,0);
    lVar8 = *(longlong *)(param_1 + 0x788);
    lVar9 = lVar7;
    local_58 = lVar8;
    if (lVar8 != 0) {
      uVar6 = UBlendableInterface::GetPrivateStaticClass();
      lVar9 = UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar6);
    }
    local_50 = lVar9;
    FUN_142ecfd10(param_1,&local_58,local_48);
    lVar8 = *(longlong *)(param_1 + 0x788);
    local_58 = lVar8;
    if (lVar8 != 0) {
      uVar6 = UBlendableInterface::GetPrivateStaticClass();
      lVar7 = UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar6);
    }
    local_50 = lVar7;
    FUN_142ed36d0(param_1,&local_58,0);
    (**(code **)(**(longlong **)(param_1 + 0x788) + 0x2b8))
              (*(longlong **)(param_1 + 0x788),*(undefined4 *)(param_2 + 0x90),0,0);
  }
  return;
}



// FUNCTION 1410c81c0 FUN_1410c81c0 body=175 status=ok
// SIG undefined FUN_1410c81c0(void)

void FUN_1410c81c0(longlong param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_1446a5270;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar2[2] = 0;
    iVar1 = *(int *)(param_1 + 0x18);
    _Src = *(void **)(param_1 + 0x10);
    *(int *)(puVar2 + 3) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(puVar2 + 2,iVar1,0);
      _guard_xfg_dispatch_icall_nop((void *)puVar2[2],_Src,(longlong)iVar1 << 2);
    }
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_1446a52b8;
  }
  return;
}



// FUNCTION 1410c8270 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1446a5300;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1446a5348;
  }
  return;
}



// FUNCTION 1410c82c0 FUN_1410c82c0 body=74 status=ok
// SIG undefined FUN_1410c82c0(void)

void FUN_1410c82c0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1446a53d0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 1410c8310 FUN_1410c8310 body=706 status=ok
// SIG undefined FUN_1410c8310(void)

void FUN_1410c8310(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  longlong *plVar13;
  undefined1 local_res8 [8];
  undefined1 local_68 [8];
  longlong *local_60;
  longlong local_50 [2];
  longlong local_40 [2];
  undefined4 local_30;
  
  if (param_2 != 0) {
    lVar9 = FUN_141307cd0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
         ) != lVar9 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if ((bVar7) && (lVar9 = *(longlong *)(param_2 + 0x130), lVar9 != 0)) {
      lVar10 = FUN_141482020();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        plVar3 = (longlong *)(param_2 + 0x90);
        iVar12 = *(int *)(param_2 + 0x98);
        if (iVar12 != 0) {
          plVar13 = (longlong *)(*plVar3 + 8);
          do {
            plVar6 = (longlong *)*plVar13;
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar6 + 1;
              lVar10 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
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
            plVar13 = plVar13 + 3;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        *(undefined4 *)(param_2 + 0x98) = 0;
        if (*(int *)(param_2 + 0x9c) != 0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeTo(plVar3,0);
        }
        lVar10 = *(longlong *)(lVar9 + 0x448);
        lVar9 = (longlong)*(int *)(lVar9 + 0x450) * 0x40 + lVar10;
        for (; lVar10 != lVar9; lVar10 = lVar10 + 0x40) {
          FText::FText(local_68,lVar10);
          FString::FString(local_50,lVar10 + 0x18);
          FString::FString(local_40,lVar10 + 0x28);
          local_30 = *(undefined4 *)(lVar10 + 0x38);
          iVar12 = *(int *)(param_2 + 0x98);
          *(int *)(param_2 + 0x98) = iVar12 + 1;
          if (*(int *)(param_2 + 0x9c) < iVar12 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(plVar3,iVar12);
          }
          FText::FText(*plVar3 + (longlong)iVar12 * 0x18,local_68);
          if (local_40[0] != 0) {
            FMemory::Free();
          }
          if (local_50[0] != 0) {
            FMemory::Free();
          }
          plVar13 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_60 + 1;
            lVar8 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar2 = (int *)((longlong)plVar13 + 0xc);
              iVar12 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
        }
      }
    }
  }
  lVar9 = FUN_140cfc8e0(*(undefined8 *)(param_1 + 0x7f0));
  lVar10 = FUN_140cff230(*(undefined8 *)(param_1 + 0x7f0));
  if ((lVar10 != 0) && (lVar9 != 0)) {
    uVar5 = *(undefined4 *)(lVar10 + 0x208);
    uVar11 = FName::FName(local_res8,L"OnMoxxisDrinkEventBitsProductIdChanged",1);
    lVar10 = FUN_1410f2240(param_1,param_2,uVar5,uVar11);
    if (lVar10 != 0) {
      FUN_142ed2be0(lVar10,*(undefined4 *)(lVar9 + 0x208));
      iVar12 = *(int *)(param_1 + 0x7e8);
      *(int *)(param_1 + 0x7e8) = iVar12 + 1;
      if (*(int *)(param_1 + 0x7ec) < iVar12 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x7e0,iVar12);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x7e0) + (longlong)iVar12 * 8) = lVar10;
    }
  }
  return;
}



// FUNCTION 1410c85e0 FUN_1410c85e0 body=2351 status=ok
// SIG undefined FUN_1410c85e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1410c85e0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined2 *puVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStack_388 [32];
  longlong *local_368;
  undefined1 local_360;
  longlong **local_358;
  undefined4 local_348;
  ulonglong local_340;
  longlong *local_338;
  longlong local_330;
  longlong *local_328;
  longlong local_320;
  ulonglong local_318;
  longlong *local_310;
  undefined8 local_308;
  undefined2 *local_300;
  undefined8 local_2f8;
  ulonglong local_2f0;
  longlong *local_2e8;
  longlong local_2e0;
  longlong *local_2d8;
  longlong local_2d0;
  longlong *local_2c8;
  ulonglong local_2c0;
  longlong *plStack_2b8;
  longlong local_2b0;
  longlong *plStack_2a8;
  undefined8 local_2a0;
  undefined2 *local_298;
  int local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  longlong *local_278;
  uint local_270;
  undefined8 *local_268;
  undefined8 local_258;
  undefined8 uStack_250;
  longlong *local_248;
  uint local_240;
  undefined8 local_238;
  undefined8 local_228;
  undefined8 uStack_220;
  longlong *local_218;
  uint local_210;
  undefined8 local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  longlong *local_1e8;
  uint local_1e0;
  undefined8 local_1d8;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong *local_1b8;
  uint local_1b0;
  undefined8 *local_1a8;
  undefined8 local_198;
  undefined1 local_188 [128];
  longlong local_108;
  undefined8 local_100;
  undefined1 local_e8 [128];
  longlong local_68;
  char *local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  uVar7 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  lVar8 = *(longlong *)(param_1 + 0x6c8);
  local_348 = 0;
  lVar14 = -1;
  if (lVar8 != 0) {
    if ((*(longlong *)(lVar8 + 0x28) == 0) || (*(longlong *)(lVar8 + 0x30) == 0)) {
LAB_1410c86b5:
      puVar9 = &local_2c0;
      local_2c0 = 0;
      plStack_2b8 = (longlong *)0x0;
      uVar16 = 5;
    }
    else {
      piVar2 = (int *)(*(longlong *)(lVar8 + 0x30) + 8);
      LOCK();
      iVar18 = *piVar2;
      if (iVar18 == 0) {
        *piVar2 = 0;
        iVar18 = 0;
      }
      UNLOCK();
      if (iVar18 < 1) goto LAB_1410c86b5;
      local_338 = *(longlong **)(lVar8 + 0x30);
      uVar16 = 3;
      local_340 = 0;
      if (local_338 != (longlong *)0x0) {
        LOCK();
        uVar13 = *(uint *)(local_338 + 1);
        bVar19 = uVar13 == 0;
        if (bVar19) {
          *(uint *)(local_338 + 1) = 0;
        }
        else {
          uVar7 = (ulonglong)uVar13;
        }
        UNLOCK();
        while (!bVar19) {
          iVar18 = (int)uVar7;
          LOCK();
          bVar19 = iVar18 == (int)local_338[1];
          if (bVar19) {
            *(int *)(local_338 + 1) = iVar18 + 1;
          }
          UNLOCK();
          if (bVar19) {
            uVar7 = *(ulonglong *)(lVar8 + 0x28);
            puVar9 = &local_340;
            local_340 = uVar7;
            goto LAB_1410c86c9;
          }
          uVar7 = 0;
          LOCK();
          uVar13 = *(uint *)(local_338 + 1);
          bVar19 = uVar13 == 0;
          if (bVar19) {
            *(uint *)(local_338 + 1) = 0;
          }
          else {
            uVar7 = (ulonglong)uVar13;
          }
          UNLOCK();
        }
        local_338 = (longlong *)0x0;
      }
      uVar7 = 0;
      puVar9 = &local_340;
    }
LAB_1410c86c9:
    local_2f0 = uVar7;
    plVar10 = (longlong *)puVar9[1];
    puVar9[1] = 0;
    plVar15 = plStack_2b8;
    local_2e8 = plVar10;
    *puVar9 = 0;
    uVar7 = uVar16;
    if (((uVar16 & 4) != 0) &&
       (uVar7 = (ulonglong)((uint)uVar16 & 0xfffffffb), plStack_2b8 != (longlong *)0x0)) {
      LOCK();
      plVar10 = plStack_2b8 + 1;
      lVar8 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_2b8)(plStack_2b8);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        iVar18 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*plStack_2b8 + 8))(plStack_2b8,1);
        }
      }
    }
    plVar10 = local_338;
    if (((uVar7 & 2) != 0) &&
       (uVar7 = (ulonglong)((uint)uVar7 & 0xfffffffd), local_338 != (longlong *)0x0)) {
      LOCK();
      plVar15 = local_338 + 1;
      lVar8 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_338)(local_338);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar18 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*local_338 + 8))(local_338,1);
        }
      }
    }
    if (local_2f0 != 0) {
      bVar19 = true;
      goto LAB_1410c8778;
    }
  }
  bVar19 = false;
LAB_1410c8778:
  plVar10 = local_2e8;
  if (((uVar7 & 1) != 0) && (local_2e8 != (longlong *)0x0)) {
    LOCK();
    plVar15 = local_2e8 + 1;
    lVar8 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_2e8)(local_2e8);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar18 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*local_2e8 + 8))(local_2e8,1);
      }
    }
  }
  if (bVar19) {
    *param_2 = *param_3;
    lVar8 = *param_3;
    if (*(int *)(param_1 + 0x6f8) != *(int *)(param_1 + 0x724)) {
      lVar17 = *(longlong *)(param_1 + 0x730);
      if (*(longlong *)(param_1 + 0x730) == 0) {
        lVar17 = param_1 + 0x728;
      }
      iVar18 = *(int *)(lVar17 + ((longlong)((int)((ulonglong)lVar8 >> 0x20) + (int)lVar8) &
                                 (longlong)*(int *)(param_1 + 0x738) - 1U) * 4);
      if (iVar18 != -1) {
        lVar17 = *(longlong *)(param_1 + 0x6f0);
        do {
          lVar11 = (longlong)iVar18 * 0x20;
          if (*(longlong *)(lVar11 + lVar17) == lVar8) {
            if (iVar18 == -1) {
              return param_2;
            }
            lVar17 = (longlong)iVar18 * 0x20 + lVar17;
            if (lVar17 == 0) {
              return param_2;
            }
            if ((longlong *)(lVar17 + 8) == (longlong *)0x0) {
              return param_2;
            }
            iVar18 = *(int *)(lVar17 + 0x10);
            if (0 < iVar18) {
              lVar14 = *(longlong *)(lVar17 + 8);
              iVar1 = iVar18 + -1;
              plVar10 = *(longlong **)(lVar14 + (longlong)iVar1 * 8);
              iVar6 = (iVar18 - iVar1) + -1;
              if (iVar6 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(lVar14 + (longlong)iVar1 * 8),
                           (void *)(lVar14 + (longlong)iVar18 * 8),(longlong)iVar6 << 3);
                iVar18 = *(int *)(lVar17 + 0x10);
              }
              *(int *)(lVar17 + 0x10) = iVar18 + -1;
              param_2[1] = (longlong)plVar10;
              if (plVar10 == (longlong *)0x0) {
                return param_2;
              }
              (**(code **)(*plVar10 + 0x278))(plVar10,1);
              return param_2;
            }
            *(int *)(param_1 + 0x778) = *(int *)(param_1 + 0x778) + 1;
            FString::PrintfImpl(&local_298,L"textField%d");
            local_300 = (undefined2 *)0x0;
            local_2f8 = 0;
            FName::ToString(param_3,&local_300);
            puVar12 = &DAT_143f3eda8;
            if (local_290 != 0) {
              puVar12 = local_298;
            }
            TStringConversion<TStringConvert<wchar_t,char>,128>::
            TStringConversion<TStringConvert<wchar_t,char>,128>(local_e8,puVar12);
            local_320 = 0;
            local_318 = 0;
            if ((local_60 != (char *)0x0) && (*local_60 != '\0')) {
              do {
                lVar14 = lVar14 + 1;
              } while (local_60[lVar14] != '\0');
              uVar13 = (int)lVar14 + 1;
              local_318 = (ulonglong)uVar13;
              if (0 < (int)uVar13) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_320,0);
              }
              local_368 = (longlong *)CONCAT62(local_368._2_6_,0x3f);
              FGenericPlatformString::Convert<char,wchar_t>(local_320,uVar13,local_60,uVar13);
            }
            lVar14 = 0;
            puVar12 = &DAT_143f3eda8;
            if ((int)local_2f8 != 0) {
              puVar12 = local_300;
            }
            TStringConversion<TStringConvert<wchar_t,char>,128>::
            TStringConversion<TStringConvert<wchar_t,char>,128>(local_188,puVar12);
            local_2a0 = UAnimSharingStateInstance::GetPrivateStaticClass();
            lVar8 = *(longlong *)(param_1 + 0x6c8);
            if ((*(longlong *)(lVar8 + 0x28) == 0) || (*(longlong *)(lVar8 + 0x30) == 0)) {
LAB_1410c8a34:
              plVar10 = &local_2b0;
              local_2b0 = 0;
              plStack_2a8 = (longlong *)0x0;
              bVar3 = false;
              bVar19 = true;
            }
            else {
              piVar2 = (int *)(*(longlong *)(lVar8 + 0x30) + 8);
              LOCK();
              iVar18 = *piVar2;
              if (iVar18 == 0) {
                *piVar2 = 0;
                iVar18 = 0;
              }
              UNLOCK();
              if (iVar18 < 1) goto LAB_1410c8a34;
              local_328 = *(longlong **)(lVar8 + 0x30);
              bVar3 = true;
              bVar19 = false;
              local_330 = 0;
              if (local_328 == (longlong *)0x0) {
LAB_1410c8a1d:
                lVar14 = 0;
                plVar10 = &local_330;
              }
              else {
                LOCK();
                iVar18 = (int)local_328[1];
                bVar20 = iVar18 == 0;
                if (bVar20) {
                  *(int *)(local_328 + 1) = 0;
                  iVar18 = 0;
                }
                UNLOCK();
                while( true ) {
                  if (bVar20) {
                    local_328 = (longlong *)0x0;
                    goto LAB_1410c8a1d;
                  }
                  LOCK();
                  bVar20 = iVar18 == (int)local_328[1];
                  if (bVar20) {
                    *(int *)(local_328 + 1) = iVar18 + 1;
                  }
                  UNLOCK();
                  if (bVar20) break;
                  LOCK();
                  iVar18 = (int)local_328[1];
                  bVar20 = iVar18 == 0;
                  if (bVar20) {
                    *(int *)(local_328 + 1) = 0;
                    iVar18 = 0;
                  }
                  UNLOCK();
                }
                lVar14 = *(longlong *)(lVar8 + 0x28);
                plVar10 = &local_330;
                local_330 = lVar14;
              }
            }
            local_2e0 = lVar14;
            plVar15 = (longlong *)plVar10[1];
            plVar10[1] = 0;
            plVar4 = plStack_2a8;
            local_2d8 = plVar15;
            *plVar10 = 0;
            if ((bVar19) && (plStack_2a8 != (longlong *)0x0)) {
              LOCK();
              plVar10 = plStack_2a8 + 1;
              lVar14 = *plVar10;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*plStack_2a8)(plStack_2a8);
                LOCK();
                piVar2 = (int *)((longlong)plVar4 + 0xc);
                iVar18 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar18 == 1) {
                  (**(code **)(*plStack_2a8 + 8))(plStack_2a8,1);
                }
              }
            }
            plVar10 = local_328;
            if ((bVar3) && (local_328 != (longlong *)0x0)) {
              LOCK();
              plVar15 = local_328 + 1;
              lVar14 = *plVar15;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*local_328)(local_328);
                LOCK();
                piVar2 = (int *)((longlong)plVar10 + 0xc);
                iVar18 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar18 == 1) {
                  (**(code **)(*local_328 + 8))(local_328,1);
                }
              }
            }
            plVar10 = *(longlong **)(local_2e0 + 0x80);
            local_198 = *(undefined8 *)(local_2e0 + 0x78);
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
              UNLOCK();
            }
            local_310 = (longlong *)0x0;
            local_308 = 0;
            local_358 = &local_310;
            local_368 = &local_320;
            local_360 = 6;
            lVar14 = FUN_14202a0e0(local_198,local_2a0,*(undefined8 *)(param_1 + 0x6c8),local_100);
            if (lVar14 != 0) {
              lVar8 = UAnimSharingStateInstance::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                bVar19 = false;
              }
              else {
                bVar19 = true;
              }
              if (bVar19) goto LAB_1410c8b85;
            }
            lVar14 = 0;
LAB_1410c8b85:
            plVar15 = local_310;
            for (iVar18 = (int)local_308; iVar18 != 0; iVar18 = iVar18 + -1) {
              if (*plVar15 != 0) {
                FMemory::Free();
              }
              plVar15 = plVar15 + 2;
            }
            if (local_310 != (longlong *)0x0) {
              FMemory::Free(local_310);
            }
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              plVar15 = plVar10 + 1;
              lVar8 = *plVar15;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*plVar10)(plVar10);
                LOCK();
                piVar2 = (int *)((longlong)plVar10 + 0xc);
                iVar18 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar18 == 1) {
                  (**(code **)(*plVar10 + 8))(plVar10,1);
                }
              }
            }
            plVar10 = local_2d8;
            param_2[1] = lVar14;
            if (local_2d8 != (longlong *)0x0) {
              LOCK();
              plVar15 = local_2d8 + 1;
              lVar14 = *plVar15;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*local_2d8)(local_2d8);
                LOCK();
                piVar2 = (int *)((longlong)plVar10 + 0xc);
                iVar18 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar18 == 1) {
                  (**(code **)(*local_2d8 + 8))(local_2d8,1);
                }
              }
            }
            if (local_108 != 0) {
              FMemory::Free();
            }
            if (local_320 != 0) {
              FMemory::Free();
            }
            if (local_68 != 0) {
              FMemory::Free();
            }
            if ((longlong *)param_2[1] != (longlong *)0x0) {
              (**(code **)(*(longlong *)param_2[1] + 0x280))();
              plVar10 = *(longlong **)(param_2[1] + 0x178);
              lVar14 = *(longlong *)(param_2[1] + 0x170);
              if (plVar10 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
                UNLOCK();
              }
              local_2d0 = lVar14;
              local_2c8 = plVar10;
              if (lVar14 != 0) {
                local_248 = (longlong *)0x0;
                local_238 = 0;
                local_1d8 = 0;
                local_258 = 0xffffffffffffffff;
                uStack_250 = 0xffffffffffffffff;
                local_240 = 5;
                local_228 = 0xffffffffffffffff;
                uStack_220 = 0xffffffffffffffff;
                local_218 = (longlong *)0x0;
                local_1f8 = 0xffffffffffffffff;
                uStack_1f0 = 0xffffffffffffffff;
                local_210 = 0;
                local_1e8 = (longlong *)0x0;
                local_1e0 = 5;
                FUN_1410b5e10(&local_228,&local_1f8);
                if ((local_1e0 >> 6 & 1) != 0) {
                  (**(code **)(*local_1e8 + 0x10))(local_1e8,&local_1f8,local_1d8);
                }
                local_368 = (longlong *)0x1;
                cVar5 = FUN_1420458d0(lVar14,"getTextFormat",&local_258,&local_228);
                if (cVar5 != '\0') {
                  local_288 = 0xffffffffffffffff;
                  uStack_280 = 0xffffffffffffffff;
                  local_278 = (longlong *)0x0;
                  local_270 = 0;
                  local_368 = (longlong *)CONCAT71(local_368._1_7_,((byte)local_240 & 0x8f) == 10);
                  cVar5 = (**(code **)(*local_248 + 0x20))(local_248,local_238,"align",&local_288);
                  if ((cVar5 != '\0') && (((byte)local_270 & 0x8f) == 6)) {
                    local_1a8 = local_268;
                    if ((local_270 >> 6 & 1) != 0) {
                      local_1a8 = (undefined8 *)*local_268;
                    }
                    local_1b8 = (longlong *)0x0;
                    local_1c8 = 0xffffffffffffffff;
                    uStack_1c0 = 0xffffffffffffffff;
                    local_1b0 = 6;
                    FUN_1420523e0(lVar14,"autoSize",&local_1c8);
                    if ((local_1b0 >> 6 & 1) != 0) {
                      (**(code **)(*local_1b8 + 0x10))(local_1b8,&local_1c8,local_1a8);
                    }
                  }
                  if ((local_270 >> 6 & 1) != 0) {
                    (**(code **)(*local_278 + 0x10))(local_278,&local_288,local_268);
                  }
                }
                if ((local_210 >> 6 & 1) != 0) {
                  (**(code **)(*local_218 + 0x10))(local_218,&local_228,local_208);
                  local_218 = (longlong *)0x0;
                }
                local_210 = 0;
                if ((local_240 >> 6 & 1) != 0) {
                  (**(code **)(*local_248 + 0x10))(local_248,&local_258,local_238);
                }
              }
              plVar15 = local_2c8;
              if (plVar10 != (longlong *)0x0) {
                LOCK();
                plVar10 = plVar10 + 1;
                lVar14 = *plVar10;
                *(int *)plVar10 = (int)*plVar10 + -1;
                UNLOCK();
                if ((int)lVar14 == 1) {
                  (**(code **)*local_2c8)(local_2c8);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar15 + 0xc);
                  iVar18 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar18 == 1) {
                    (**(code **)(*local_2c8 + 8))(local_2c8,1);
                  }
                }
              }
            }
            if (local_300 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if (local_298 == (undefined2 *)0x0) {
              return param_2;
            }
            FMemory::Free();
            return param_2;
          }
          iVar18 = *(int *)(lVar11 + 0x18 + lVar17);
        } while (iVar18 != -1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1410c8f10 FUN_1410c8f10 body=310 status=ok
// SIG undefined FUN_1410c8f10(void)

void FUN_1410c8f10(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x38);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x38);
    FWeakObjectPtr::operator=(lVar2 + 800,0);
    *(undefined8 *)(lVar2 + 0x328) = 0;
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x38);
    FWeakObjectPtr::operator=(lVar2 + 0x330,0);
    *(undefined8 *)(lVar2 + 0x338) = 0;
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x38);
    FWeakObjectPtr::operator=(lVar2 + 0x340,0);
    *(undefined8 *)(lVar2 + 0x348) = 0;
    uVar3 = FWeakObjectPtr::Get(param_1 + 0x38);
    FUN_142ed4250(uVar3,0);
    uVar3 = FWeakObjectPtr::Get(param_1 + 0x38);
    FUN_142f0a7c0(uVar3,0);
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x38);
    (**(code **)(*(longlong *)(lVar2 + 0x170) + 0x38))((longlong *)(lVar2 + 0x170),0);
  }
  param_1 = param_1 + 0x28;
  cVar1 = FWeakObjectPtr::IsValid(param_1);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1);
    FUN_140e6bf90(lVar2 + 0xdd8,lVar2 + 0xc50);
    uVar3 = FWeakObjectPtr::Get(param_1);
    FUN_1410cdb90(uVar3);
    return;
  }
  return;
}



// FUNCTION 1410c9050 FUN_1410c9050 body=200 status=ok
// SIG undefined FUN_1410c9050(void)

undefined8 * FUN_1410c9050(undefined8 param_1,undefined8 *param_2,undefined1 param_3)

{
  char cVar1;
  char cVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  
  cVar1 = UNF_CustomizationStatics::IsWeaponType(param_3);
  cVar2 = FUN_142ebda90();
  *param_2 = 0;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  if (cVar1 == '\0') {
    if (cVar2 == '\0') {
      *(undefined4 *)(param_2 + 1) = 3;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      uVar4 = 6;
      pwVar3 = L"up";
    }
    else {
      *(undefined4 *)(param_2 + 1) = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      uVar4 = 0x10;
      pwVar3 = L"Playing";
    }
  }
  else if (cVar2 == '\0') {
    *(undefined4 *)(param_2 + 1) = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    uVar4 = 0x14;
    pwVar3 = L"focusedUp";
  }
  else {
    *(undefined4 *)(param_2 + 1) = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    uVar4 = 0x12;
    pwVar3 = L"Selected";
  }
  FGenericPlatformString::Memcpy(*param_2,pwVar3,uVar4);
  return param_2;
}



// FUNCTION 1410c9120 FUN_1410c9120 body=294 status=ok
// SIG undefined FUN_1410c9120(void)

void FUN_1410c9120(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (*(longlong *)(param_1 + 0x1128) != 0) {
    FUN_1411f8450();
    lVar2 = *(longlong *)(param_1 + 0x1128);
    plVar7 = (longlong *)(lVar2 + 0xe8);
    iVar5 = *(int *)(lVar2 + 0xf0) + -1;
    if (-1 < iVar5) {
      lVar8 = (longlong)iVar5 << 4;
      lVar9 = lVar8;
      do {
        lVar6 = *plVar7 + lVar8;
        lVar4 = FWeakObjectPtr::Get(lVar6);
        if (((param_1 == lVar4) || (*(longlong *)(lVar6 + 8) == 0)) ||
           (lVar4 = FWeakObjectPtr::Get(lVar6,1), lVar4 == 0)) {
          iVar1 = *(int *)(lVar2 + 0xf0);
          iVar3 = (iVar1 - iVar5) + -1;
          if (0 < iVar3) {
            iVar3 = 1;
          }
          if (iVar3 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar7 + lVar9),
                       (void *)((longlong)(iVar1 - iVar3) * 0x10 + *plVar7),(longlong)iVar3 << 4);
            iVar1 = *(int *)(lVar2 + 0xf0);
          }
          *(int *)(lVar2 + 0xf0) = iVar1 + -1;
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar7);
        }
        lVar9 = lVar9 + -0x10;
        lVar8 = lVar8 + -0x10;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
    *(undefined8 *)(param_1 + 0x1128) = 0;
  }
  return;
}



// FUNCTION 1410c9250 DestroyObject body=115 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<TFutureState<TArray<BuildPatchServices::FChunkMatch,FDefaultAllocator>_>,SharedPointerInternals::DefaultDeleter<TFutureState<TArray<BuildPatchServices::FChunkMatch,FDefaultAllocator>_>_>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x60) != 0) {
      FMemory::Free();
    }
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
    FMemory::operator_delete(lVar1,0x70);
    return;
  }
  return;
}



// FUNCTION 1410c92d0 thunk_FUN_142eb3990 body=5 status=ok
// SIG undefined thunk_FUN_142eb3990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void thunk_FUN_142eb3990(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *apuStack_b8 [2];
  longlong alStack_a8 [4];
  longlong *plStack_88;
  int iStack_78;
  undefined1 auStack_68 [16];
  longlong alStack_58 [4];
  longlong *plStack_38;
  int iStack_28;
  ulonglong uStack_18;
  
  uStack_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  plStack_88 = (longlong *)0x0;
  iStack_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,alStack_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  apuStack_b8[0] = &LAB_142eb07f0;
  uVar2 = FUN_1420849a0(param_1,auStack_68,apuStack_b8);
  FUN_14208c260(param_1,uVar2);
  if (iStack_28 != 0) {
    plVar3 = alStack_58;
    if (plStack_38 != (longlong *)0x0) {
      plVar3 = plStack_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (plStack_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (iStack_78 != 0) {
    plVar3 = alStack_a8;
    if (plStack_88 != (longlong *)0x0) {
      plVar3 = plStack_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (plStack_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}


