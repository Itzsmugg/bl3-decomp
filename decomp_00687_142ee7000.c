// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142ee7000 FUN_142ee7000 body=237 status=ok
// SIG undefined FUN_142ee7000(void)

longlong * FUN_142ee7000(longlong param_1,longlong *param_2,longlong *param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if ((*param_2 == 0) || (param_2[1] == 0)) {
    return (longlong *)0x0;
  }
  plVar6 = (longlong *)0x0;
  plVar3 = plVar6;
  if (param_3 != (longlong *)0x0) {
    plVar2 = (longlong *)FUN_142f2ce20();
    plVar5 = param_3;
    do {
      plVar3 = param_3;
      if (plVar5 == plVar2) break;
      plVar5 = (longlong *)plVar5[6];
      plVar3 = plVar6;
    } while (plVar5 != (longlong *)0x0);
  }
  if ((param_1 != 0) &&
     (plVar3 = (longlong *)FUN_1420f0e60(param_1,plVar3,0), plVar3 != (longlong *)0x0)) {
    lVar4 = FUN_142f2ce20();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142ee70ad;
  }
  plVar3 = plVar6;
LAB_142ee70ad:
  if (*param_2 != 0) {
    plVar6 = (longlong *)param_2[1];
  }
  (**(code **)(*plVar6 + 0x28))(plVar6,plVar3);
  return plVar3;
}



// FUNCTION 142ee70f0 FUN_142ee70f0 body=296 status=ok
// SIG undefined FUN_142ee70f0(void)

longlong FUN_142ee70f0(longlong param_1,longlong *param_2,longlong param_3,undefined4 *param_4,
                      undefined4 *param_5)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*param_2 == 0) || (plVar1 = (longlong *)param_2[1], plVar1 == (longlong *)0x0)) {
    return 0;
  }
  if (param_3 != 0) {
    lVar3 = FUN_142f2ce20();
    lVar4 = param_3;
    do {
      if (lVar4 == lVar3) goto LAB_142ee7156;
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
  }
  param_3 = 0;
LAB_142ee7156:
  if ((param_1 != 0) && (lVar4 = FUN_1420f0e60(param_1,param_3,0), lVar4 != 0)) {
    lVar3 = FUN_142f2ce20();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_142ee71ab;
  }
  lVar4 = 0;
LAB_142ee71ab:
  (**(code **)(*plVar1 + 0x28))(plVar1,lVar4);
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x260) = *param_4;
    *(undefined4 *)(lVar4 + 0x264) = param_4[1];
    *(undefined8 *)(lVar4 + 0x268) = *(undefined8 *)(param_4 + 2);
    *(undefined4 *)(lVar4 + 0x270) = *param_5;
    *(undefined4 *)(lVar4 + 0x274) = param_5[1];
    *(undefined8 *)(lVar4 + 0x278) = *(undefined8 *)(param_5 + 2);
  }
  return lVar4;
}



// FUNCTION 142ee7220 FUN_142ee7220 body=158 status=ok
// SIG undefined FUN_142ee7220(void)

void FUN_142ee7220(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  longlong local_18;
  longlong local_10;
  
  FWeakObjectPtr::operator=(&local_48,0);
  local_10 = 0;
  local_30 = 0;
  local_20 = 0;
  local_18 = *param_1;
  local_40 = 0;
  local_38 = local_48;
  local_34 = local_44;
  local_28 = local_48;
  local_24 = local_44;
  if (local_18 != 0) {
    local_10 = param_1[1];
  }
  FUN_142ee72c0(&local_18,param_2,param_3,&local_28,&local_38);
  return;
}



// FUNCTION 142ee72c0 FUN_142ee72c0 body=198 status=ok
// SIG undefined FUN_142ee72c0(void)

undefined8
FUN_142ee72c0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  longlong local_18;
  longlong local_10;
  
  if (((*param_1 != 0) && ((longlong *)param_1[1] != (longlong *)0x0)) &&
     (lVar1 = (**(code **)(*(longlong *)param_1[1] + 0x98))(), lVar1 != 0)) {
    local_38 = *param_5;
    local_34 = param_5[1];
    local_30 = *(undefined8 *)(param_5 + 2);
    local_28 = *param_4;
    local_24 = param_4[1];
    local_20 = *(undefined8 *)(param_4 + 2);
    local_18 = *param_1;
    local_10 = 0;
    if (local_18 != 0) {
      local_10 = param_1[1];
    }
    uVar2 = FUN_142ee70f0(param_2,&local_18,param_3,&local_28,&local_38);
    return uVar2;
  }
  return 0;
}



// FUNCTION 142ee7390 FUN_142ee7390 body=488 status=ok
// SIG undefined FUN_142ee7390(void)

longlong * FUN_142ee7390(longlong param_1,longlong *param_2,char param_3)

{
  char cVar1;
  DWORD DVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_res10;
  int local_res18 [4];
  longlong local_48;
  longlong **local_40;
  int *local_38;
  undefined8 local_30;
  
  plVar7 = (longlong *)0x0;
  if (param_3 == '\0') {
    local_res18[0] = *(int *)(param_1 + 0xa4) * *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0xa0);
  }
  else {
    local_res18[0] = *(int *)(param_1 + 0xa8);
  }
  if (param_2 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  local_res10 = param_2;
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x30);
  if (cVar1 == '\0') {
    return (longlong *)0x0;
  }
  if (*(longlong *)(param_1 + 0x180) == 0) {
    return (longlong *)0x0;
  }
  local_40 = &local_res10;
  local_38 = local_res18;
  local_48 = param_1;
  local_30 = FUN_142eee1c0(param_1);
  lVar4 = DAT_146b3e270;
  if (*(char *)((longlong)local_res10 + 0x35) == '\0') goto LAB_142ee7497;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    plVar3 = (longlong *)&DAT_00000004;
    if (DVar2 == DAT_1468c21c0) goto LAB_142ee7467;
  }
  else {
LAB_142ee7467:
    plVar3 = plVar7;
  }
  if (((*(int *)((longlong)plVar3 + lVar4) != 0) &&
      (plVar3 = (longlong *)FUN_142ede4c0(&local_48), plVar3 != (longlong *)0x0)) &&
     (lVar4 = (**(code **)(*plVar3 + 0x278))(plVar3), lVar4 != 0)) {
    return plVar3;
  }
LAB_142ee7497:
  uVar5 = GetTransientPackage();
  plVar3 = (longlong *)NewObject<UBlackboardKeyType_Object>(uVar5);
  if (plVar3 != (longlong *)0x0) {
    plVar3[7] = (longlong)local_res10;
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x30);
    lVar4 = (**(code **)(*local_res10 + 0x280))(local_res10,param_1,uVar5);
    plVar3[5] = lVar4;
    if (lVar4 == 0) {
      lVar4 = 0;
      plVar6 = plVar7;
    }
    else {
      uVar5 = FUN_142f2b5a0();
      plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar5);
      lVar4 = plVar3[5];
    }
    plVar3[6] = (longlong)plVar6;
    if (lVar4 == 0) {
      plVar6 = plVar7;
    }
    if (plVar6 != (longlong *)0x0) {
      uVar5 = FWeakObjectPtr::Get(param_1 + 0x30);
      cVar1 = (**(code **)(*plVar6 + 0x10))(plVar6,local_res10,uVar5,param_1,local_res18[0]);
      if (cVar1 != '\0') {
        return plVar3;
      }
    }
    plVar3[6] = 0;
    plVar3[5] = 0;
  }
  return plVar3;
}



// FUNCTION 142ee7580 FUN_142ee7580 body=179 status=ok
// SIG undefined FUN_142ee7580(void)

longlong FUN_142ee7580(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar2 = UGPasswordResetPage::GetPrivateStaticClass();
    lVar3 = *(longlong *)(param_1 + 0x48);
    for (lVar4 = lVar3; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
      if (lVar4 == lVar2) goto LAB_142ee75c1;
    }
  }
  lVar3 = 0;
LAB_142ee75c1:
  if ((param_3 != 0) && (lVar3 = FUN_1420f0e60(param_3,lVar3,0), lVar3 != 0)) {
    lVar4 = UGPasswordResetPage::GetPrivateStaticClass();
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
      *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | 0x1000000;
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 142ee7640 FUN_142ee7640 body=489 status=ok
// SIG undefined FUN_142ee7640(void)

longlong FUN_142ee7640(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                      undefined4 param_5,undefined4 param_6,undefined4 param_7,float param_8,
                      undefined4 *param_9,undefined4 *param_10)

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
  undefined4 *puVar10;
  undefined4 uVar11;
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
  local_58 = *param_10;
  local_54 = param_10[1];
  local_50 = *(undefined8 *)(param_10 + 2);
  local_48 = local_68;
  local_44 = local_64;
  local_40 = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar6 = UGHUDEmoteMenu::GetPrivateStaticClass();
    lVar7 = *(longlong *)(param_1 + 0x48);
    for (lVar8 = lVar7; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
      if (lVar8 == lVar6) goto LAB_142ee76e1;
    }
  }
  lVar7 = 0;
LAB_142ee76e1:
  local_38 = *param_3;
  local_30 = 0;
  if (local_38 != 0) {
    local_30 = param_3[1];
  }
  puVar10 = &local_58;
  lVar7 = FUN_142ee70f0(param_2,&local_38,lVar7,&local_48,puVar10);
  uVar11 = (undefined4)((ulonglong)puVar10 >> 0x20);
  if (lVar7 != 0) {
    lVar8 = UGHUDEmoteMenu::GetPrivateStaticClass();
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
      *(undefined4 *)(lVar7 + 0x2b8) = *param_9;
      *(undefined4 *)(lVar7 + 700) = param_9[1];
      *(undefined8 *)(lVar7 + 0x2c0) = *(undefined8 *)(param_9 + 2);
      FUN_142ef2e90(lVar7,param_5,param_6,param_7,CONCAT44(uVar11,param_8),1.0 < param_8);
      goto LAB_142ee77d5;
    }
  }
  lVar7 = 0;
LAB_142ee77d5:
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



// FUNCTION 142ee7830 FUN_142ee7830 body=603 status=ok
// SIG undefined FUN_142ee7830(void)

longlong FUN_142ee7830(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6,undefined4 param_7)

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
  undefined1 local_68 [48];
  
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
    goto LAB_142ee7a31;
  }
  local_bc = local_ec;
  local_b8 = local_100;
  local_100 = CONCAT44(local_dc,local_e0);
  local_f8 = local_d0;
  local_c0 = local_f0;
  local_d0 = lVar8;
  local_c8 = plVar9;
  uVar7 = FText::FText(local_68,lVar5);
  lVar8 = FUN_142ee7640(lVar6,param_2,&local_d0,uVar7,param_4,param_5,param_6,param_7,&local_100,
                        &local_c0);
  if (lVar8 == 0) {
LAB_142ee79e8:
    lVar8 = 0;
  }
  else {
    lVar6 = UGHUDEmoteMenu::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_142ee79e8;
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(lVar5);
LAB_142ee7a31:
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



// FUNCTION 142ee7a90 FUN_142ee7a90 body=435 status=ok
// SIG undefined FUN_142ee7a90(void)

longlong FUN_142ee7a90(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,
                      undefined4 *param_9)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  undefined1 local_38 [48];
  
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
  local_68 = *param_9;
  local_64 = param_9[1];
  local_60 = *(undefined8 *)(param_9 + 2);
  local_58 = *param_8;
  local_54 = param_8[1];
  local_50 = *(undefined8 *)(param_8 + 2);
  local_48 = *param_1;
  local_40 = 0;
  if (local_48 != 0) {
    local_40 = param_1[1];
  }
  uVar7 = FText::FText(local_38,param_3);
  lVar6 = FUN_142ee7640(lVar6,param_2,&local_48,uVar7,param_4,param_5,param_6,param_7,&local_58,
                        &local_68);
  if (lVar6 != 0) {
    lVar8 = UGHUDEmoteMenu::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_142ee7bdf;
  }
  lVar6 = 0;
LAB_142ee7bdf:
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
  return lVar6;
}



// FUNCTION 142ee7c50 FUN_142ee7c50 body=369 status=ok
// SIG undefined FUN_142ee7c50(void)

longlong FUN_142ee7c50(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                      undefined4 *param_5,undefined4 *param_6)

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
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  undefined1 local_28 [32];
  
  local_58 = *param_6;
  local_54 = param_6[1];
  local_50 = *(undefined8 *)(param_6 + 2);
  local_48 = *param_5;
  local_44 = param_5[1];
  local_40 = *(undefined8 *)(param_5 + 2);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar6 = FUN_142f2ced0();
    lVar7 = *(longlong *)(param_1 + 0x38);
    for (lVar8 = lVar7; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
      if (lVar8 == lVar6) goto LAB_142ee7ce1;
    }
  }
  lVar7 = 0;
LAB_142ee7ce1:
  local_38 = *param_3;
  local_30 = 0;
  if (local_38 != 0) {
    local_30 = param_3[1];
  }
  lVar7 = FUN_142ee70f0(param_2,&local_38,lVar7,&local_48,&local_58);
  if (lVar7 != 0) {
    lVar8 = FUN_142f2ced0();
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
      goto LAB_142ee7d6d;
    }
  }
  lVar7 = 0;
LAB_142ee7d6d:
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



// FUNCTION 142ee7dd0 FUN_142ee7dd0 body=238 status=ok
// SIG undefined FUN_142ee7dd0(void)

undefined8 FUN_142ee7dd0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
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
  local_30 = 0;
  local_50 = 0;
  local_40 = 0;
  local_38 = *param_1;
  local_60 = 0;
  local_58 = local_68;
  local_54 = local_64;
  local_48 = local_68;
  local_44 = local_64;
  if (local_38 != 0) {
    local_30 = param_1[1];
  }
  uVar6 = FText::FText(local_28,param_3);
  uVar6 = FUN_142ee7ec0(&local_38,param_2,uVar6,&local_48,&local_58);
  plVar4 = *(longlong **)(param_3 + 8);
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
  return uVar6;
}



// FUNCTION 142ee7ec0 FUN_142ee7ec0 body=698 status=ok
// SIG undefined FUN_142ee7ec0(void)

longlong FUN_142ee7ec0(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 *param_4,
                      undefined4 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  longlong local_80;
  undefined1 local_70 [24];
  undefined1 local_58 [32];
  
  if (((*param_1 == 0) || ((longlong *)param_1[1] == (longlong *)0x0)) ||
     (lVar11 = (**(code **)(*(longlong *)param_1[1] + 0x98))(), lVar11 == 0)) {
    plVar9 = *(longlong **)(param_3 + 8);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
    return 0;
  }
  uVar4 = param_4[1];
  uVar5 = *param_4;
  uVar15 = *(undefined8 *)(param_5 + 2);
  uVar8 = *(undefined8 *)(param_4 + 2);
  uVar6 = *param_5;
  local_d0 = *param_1;
  uVar7 = param_5[1];
  if (local_d0 == 0) {
    local_d8 = 0;
  }
  else {
    local_d8 = param_1[1];
  }
  local_a0 = uVar6;
  local_9c = uVar7;
  local_98 = uVar15;
  local_90 = uVar5;
  local_8c = uVar4;
  local_88 = uVar8;
  local_80 = local_d0;
  lVar12 = FText::FText(local_70,param_3);
  local_c0 = uVar6;
  local_bc = uVar7;
  local_b8 = uVar15;
  local_b0 = uVar5;
  local_ac = uVar4;
  local_a8 = uVar8;
  if (*(longlong *)(lVar11 + 0x38) != 0) {
    lVar13 = FUN_142f2ced0();
    lVar11 = *(longlong *)(lVar11 + 0x38);
    for (lVar14 = lVar11; lVar14 != 0; lVar14 = *(longlong *)(lVar14 + 0x30)) {
      if (lVar14 == lVar13) goto LAB_142ee8012;
    }
  }
  lVar11 = 0;
LAB_142ee8012:
  local_c8 = 0;
  if (local_d0 != 0) {
    local_c8 = local_d8;
  }
  lVar11 = FUN_142ee70f0(param_2,&local_d0,lVar11,&local_b0,&local_c0);
  if (lVar11 == 0) {
LAB_142ee80a8:
    lVar11 = 0;
  }
  else {
    lVar14 = FUN_142f2ced0();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8
         ) != lVar14 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (!bVar10) goto LAB_142ee80a8;
    uVar15 = FText::FText(local_58,lVar12);
    FUN_142f0e010(lVar11,uVar15);
  }
  plVar9 = *(longlong **)(lVar12 + 8);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
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
  if (lVar11 != 0) {
    lVar12 = FUN_142f2ced0();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
         ) != lVar12 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_142ee811e;
  }
  lVar11 = 0;
LAB_142ee811e:
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
  return lVar11;
}



// FUNCTION 142ee8180 FUN_142ee8180 body=258 status=ok
// SIG undefined FUN_142ee8180(void)

void FUN_142ee8180(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (((param_2 != 0) && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (*(longlong *)(param_2 + 0x30) != 0)) {
    *(undefined1 *)(param_1 + 0xac) = 0;
    cVar2 = FWeakObjectPtr::IsValid();
    if (cVar2 != '\0') {
      bVar6 = false;
      if (((0 < *(int *)(param_1 + 0x48)) &&
          (lVar1 = *(longlong *)
                    (*(longlong *)(param_1 + 0x40) + -8 + (longlong)*(int *)(param_1 + 0x48) * 8),
          lVar1 != 0)) && ((*(longlong *)(lVar1 + 0x28) != 0 && (*(longlong *)(lVar1 + 0x30) != 0)))
         ) {
        cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x30) + 0xf8))();
        bVar6 = cVar2 == '\x04';
      }
      uVar4 = FWeakObjectPtr::Get(param_1 + 0x38);
      if (bVar6) {
        FUN_142ee40a0();
      }
      else {
        uVar3 = FUN_142eed430(param_1 + 0x28);
        FUN_142ee42e0(uVar4,uVar3);
      }
    }
    if (*(char *)(param_1 + 0xae) == '\0') {
      *(undefined1 *)(param_1 + 0xb0) = 1;
      if (*(longlong *)(param_2 + 0x28) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(param_2 + 0x30);
      }
      (**(code **)(*plVar5 + 0x60))();
      *(undefined1 *)(param_1 + 0xb0) = 0;
    }
  }
  return;
}



// FUNCTION 142ee8290 FUN_142ee8290 body=123 status=ok
// SIG undefined FUN_142ee8290(void)

undefined8 * FUN_142ee8290(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x2c0);
  if (lVar3 != 0) {
    lVar2 = FUN_142f320a0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142ee82e1;
  }
  lVar3 = 0;
LAB_142ee82e1:
  *param_2 = 0;
  if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x60))) {
    *param_2 = **(undefined8 **)(lVar3 + 0x58);
  }
  return param_2;
}



// FUNCTION 142ee8310 FUN_142ee8310 body=63 status=ok
// SIG undefined FUN_142ee8310(void)

void FUN_142ee8310(longlong param_1)

{
  float fVar1;
  
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    fVar1 = (float)USlider::GetValue();
    FUN_142efdf10(param_1,fVar1 - *(float *)(*(longlong *)(param_1 + 0x2e8) + 0x370));
    return;
  }
  return;
}



// FUNCTION 142ee8350 FUN_142ee8350 body=673 status=ok
// SIG undefined FUN_142ee8350(void)

void FUN_142ee8350(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined4 local_res8;
  undefined4 local_resc;
  
  FUN_142ee8830();
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    uVar2 = FUN_14203bd20();
    TBaseMulticastDelegate<void>::Remove(uVar2,*(undefined8 *)(param_1 + 0xe0));
  }
  uVar8 = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    uVar2 = FUN_14203bd30();
    TBaseMulticastDelegate<void>::Remove(uVar2,*(undefined8 *)(param_1 + 0xd8));
  }
  lVar5 = *(longlong *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if (lVar5 != 0) {
    plVar3 = (longlong *)FUN_14203c480();
    uVar7 = uVar8;
    uVar10 = uVar8;
    if (0 < (int)plVar3[1]) {
      do {
        plVar9 = (longlong *)(*plVar3 + uVar10);
        if ((((int)plVar9[1] != 0) && (plVar4 = (longlong *)*plVar9, plVar4 != (longlong *)0x0)) &&
           (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,&local_res8), *plVar4 == lVar5
           )) {
          if (((int)plVar9[1] != 0) && (plVar4 = (longlong *)*plVar9, plVar4 != (longlong *)0x0)) {
            (**(code **)(*plVar4 + 0x28))(plVar4,0);
            if (*plVar9 != 0) {
              lVar5 = FMemory::Realloc(*plVar9,0,0);
              *plVar9 = lVar5;
            }
            *(undefined4 *)(plVar9 + 1) = 0;
          }
          break;
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        uVar10 = uVar10 + 0x10;
      } while ((int)uVar6 < (int)plVar3[1]);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar3,0);
  }
  lVar5 = *(longlong *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (lVar5 != 0) {
    plVar3 = (longlong *)FUN_14203bd40();
    uVar7 = uVar8;
    if (0 < (int)plVar3[1]) {
      do {
        plVar9 = (longlong *)(*plVar3 + uVar7);
        if ((((int)plVar9[1] != 0) && (plVar4 = (longlong *)*plVar9, plVar4 != (longlong *)0x0)) &&
           (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,&local_res8), *plVar4 == lVar5
           )) {
          if (((int)plVar9[1] != 0) && (plVar4 = (longlong *)*plVar9, plVar4 != (longlong *)0x0)) {
            (**(code **)(*plVar4 + 0x28))(plVar4,0);
            if (*plVar9 != 0) {
              lVar5 = FMemory::Realloc(*plVar9,0,0);
              *plVar9 = lVar5;
            }
            *(undefined4 *)(plVar9 + 1) = 0;
          }
          break;
        }
        uVar6 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar6;
        uVar7 = uVar7 + 0x10;
      } while ((int)uVar6 < (int)plVar3[1]);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar3,0);
  }
  *(undefined8 *)(param_1 + 0xe8) = 0;
  FUN_142ee91e0(param_1 + 0x60,0);
  FUN_142ee9130(param_1 + 0x80,0);
  *(undefined1 *)(param_1 + 0xac) = 0;
  if ((*(char *)(param_1 + 0x170) != '\0') &&
     (lVar5 = (**(code **)(**(longlong **)(param_1 + 0x168) + 0x278))(), lVar5 != 0)) {
    FUN_142ee86c0(param_1,*(undefined8 *)(param_1 + 0x168));
  }
  FUN_142ee3cb0(param_1);
  FUN_142ee8c40(param_1);
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x30);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x30);
    lVar5 = FUN_14270bb10(uVar2);
    if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x70) != 0)) &&
       (*(longlong *)(*(longlong *)(lVar5 + 0x70) + 0xb0) != 0)) {
      FUN_140483870(&DAT_1465351a8,param_1);
    }
  }
  FWeakObjectPtr::IsValid(param_1 + 0x30);
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x38) = local_res8;
  *(undefined4 *)(param_1 + 0x3c) = local_resc;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x30) = local_res8;
  *(undefined4 *)(param_1 + 0x34) = local_resc;
  return;
}



// FUNCTION 142ee8600 FUN_142ee8600 body=178 status=ok
// SIG undefined FUN_142ee8600(void)

void FUN_142ee8600(longlong param_1)

{
  longlong lVar1;
  BOOL BVar2;
  undefined4 local_res8 [2];
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  }
  local_res8[0] = 0xffffffff;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_14170c210(local_res8);
  }
  lVar1 = *(longlong *)(param_1 + 0x50);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  if (lVar1 != 0) {
    FUN_142ed3540(lVar1,0,0);
  }
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  FUN_1416f8340(local_res8[0]);
  return;
}



// FUNCTION 142ee86c0 FUN_142ee86c0 body=364 status=ok
// SIG undefined FUN_142ee86c0(void)

void FUN_142ee86c0(longlong param_1,longlong param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (((param_2 != 0) && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (*(longlong *)(param_2 + 0x30) != 0)) {
    plVar6 = (longlong *)0x0;
    *(undefined1 *)(param_1 + 0xac) = 0;
    *(undefined1 *)(param_1 + 0xaf) = 1;
    plVar5 = plVar6;
    if (*(longlong *)(param_2 + 0x28) != 0) {
      plVar5 = *(longlong **)(param_2 + 0x30);
    }
    (**(code **)(*plVar5 + 0x40))();
    plVar5 = plVar6;
    if (*(longlong *)(param_2 + 0x28) != 0) {
      plVar5 = *(longlong **)(param_2 + 0x30);
    }
    (**(code **)(*plVar5 + 0x48))();
    plVar5 = plVar6;
    if (*(longlong *)(param_2 + 0x28) != 0) {
      plVar5 = *(longlong **)(param_2 + 0x30);
    }
    (**(code **)(*plVar5 + 0x50))();
    *(undefined1 *)(param_1 + 0xaf) = 0;
    if (*(longlong *)(param_2 + 0x28) != 0) {
      plVar6 = *(longlong **)(param_2 + 0x30);
    }
    bVar2 = FWeakObjectPtr::IsValid(param_1 + 0x30);
    bVar3 = (**(code **)(*plVar6 + 0x98))(plVar6);
    if (((bVar2 & bVar3) != 0) && (*(longlong *)(param_1 + 0x180) != 0)) {
      plVar4 = (longlong *)FUN_142eee1c0(param_1);
      plVar6 = (longlong *)*plVar4;
      iVar1 = (int)plVar4[1];
      plVar5 = plVar6;
      do {
        if (plVar5 == plVar6 + iVar1) {
LAB_142ee87cc:
          *(int *)(plVar4 + 1) = iVar1 + 1;
          if (*(int *)((longlong)plVar4 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar1);
          }
          *(longlong *)((longlong)iVar1 * 8 + *plVar4) = param_2;
          return;
        }
        if (*plVar5 == param_2) {
          if ((int)((longlong)plVar5 - (longlong)plVar6 >> 3) != -1) {
            return;
          }
          goto LAB_142ee87cc;
        }
        plVar5 = plVar5 + 1;
      } while( true );
    }
    iVar1 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = iVar1 + 1;
    if (*(int *)(param_1 + 0x5c) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x50,iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 142ee8830 FUN_142ee8830 body=612 status=ok
// SIG undefined FUN_142ee8830(void)

void FUN_142ee8830(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x30);
  if (cVar3 == '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x180) == 0) {
    return;
  }
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x30);
  if (lVar6 != 0) {
    uVar7 = FUN_142f30760();
    plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar7);
    if (plVar8 != (longlong *)0x0) {
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x10))(plVar8);
      goto LAB_142ee8898;
    }
  }
  plVar8 = (longlong *)0x0;
LAB_142ee8898:
  plVar9 = (longlong *)FUN_142eee1c0(param_1);
  if (plVar8 != (longlong *)0x0) {
    iVar14 = (int)plVar9[1] + -1;
    if (-1 < iVar14) {
      lVar15 = (longlong)(int)plVar9[1] << 3;
      lVar6 = (longlong)iVar14 * 8;
      lVar13 = lVar6;
      do {
        lVar12 = *plVar9;
        plVar1 = *(longlong **)(lVar12 + lVar13);
        if (plVar1 == (longlong *)0x0) {
          iVar5 = (int)plVar9[1];
          iVar4 = (iVar5 - iVar14) + -1;
          if (iVar4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar12 + lVar6),(void *)(lVar15 + lVar12),(longlong)iVar4 << 3);
            iVar5 = (int)plVar9[1];
          }
          *(int *)(plVar9 + 1) = iVar5 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar9);
        }
        else {
          cVar3 = (**(code **)(*plVar8 + 0x288))(plVar8,plVar1[7]);
          if (cVar3 == '\0') {
            lVar12 = plVar1[7];
            if (lVar12 != 0) {
              lVar10 = UPawnAction_Sequence::StaticClass();
              if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                *(undefined4 *)(lVar12 + 0xb8) = 0;
                if (*(int *)(lVar12 + 0xbc) != 0) {
                  TArray<void_*,FDefaultAllocator>::ResizeTo(lVar12 + 0xb0,0);
                }
              }
            }
            plVar11 = (longlong *)(**(code **)(*plVar1 + 0x278))(plVar1);
            if (plVar11 != (longlong *)0x0) {
              lVar12 = UInputKeySelector::GetPrivateStaticClass();
              if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8) !=
                  lVar12 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                (**(code **)(*plVar11 + 0x280))(plVar11);
              }
            }
            iVar5 = *(int *)(param_1 + 0x58);
            *(int *)(param_1 + 0x58) = iVar5 + 1;
            if (*(int *)(param_1 + 0x5c) < iVar5 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        ((longlong *)(param_1 + 0x50),iVar5);
            }
            *(longlong **)(*(longlong *)(param_1 + 0x50) + (longlong)iVar5 * 8) = plVar1;
            iVar5 = (int)plVar9[1];
            iVar4 = (iVar5 - iVar14) + -1;
            if (iVar4 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar6 + *plVar9),(void *)(lVar15 + *plVar9),(longlong)iVar4 << 3);
              iVar5 = (int)plVar9[1];
            }
            *(int *)(plVar9 + 1) = iVar5 + -1;
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar9);
          }
        }
        lVar15 = lVar15 + -8;
        lVar6 = lVar6 + -8;
        lVar13 = lVar13 + -8;
        iVar14 = iVar14 + -1;
      } while (-1 < iVar14);
    }
  }
  return;
}



// FUNCTION 142ee8aa0 FUN_142ee8aa0 body=401 status=ok
// SIG undefined FUN_142ee8aa0(void)

void FUN_142ee8aa0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  
  if (((param_2 != 0) && (cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x30), cVar3 != '\0')) &&
     (*(longlong *)(param_1 + 0x180) != 0)) {
    plVar5 = (longlong *)FUN_142eee1c0(param_1);
    iVar11 = (int)plVar5[1] + -1;
    if (-1 < iVar11) {
      lVar9 = (longlong)iVar11;
      do {
        plVar1 = *(longlong **)(*plVar5 + lVar9 * 8);
        if (plVar1 != (longlong *)0x0) {
          if ((plVar1[7] == 0) || (plVar1[7] != param_2)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            lVar9 = (**(code **)(*plVar1 + 0x278))(plVar1);
            if (lVar9 != 0) {
              lVar6 = UInputKeySelector::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if ((bVar2) && (*(char *)(lVar9 + 0x4c0) != '\0')) {
                if (plVar1[5] == 0) {
                  plVar10 = (longlong *)0x0;
                }
                else {
                  plVar10 = (longlong *)plVar1[6];
                }
                uVar7 = FWeakObjectPtr::Get(param_1 + 0x30);
                (**(code **)(*plVar10 + 0xa8))(plVar10,0xffffffff,uVar7,param_1);
              }
            }
            iVar8 = *(int *)(param_1 + 0x58);
            *(int *)(param_1 + 0x58) = iVar8 + 1;
            if (*(int *)(param_1 + 0x5c) < iVar8 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        ((longlong *)(param_1 + 0x50),iVar8);
            }
            *(longlong **)(*(longlong *)(param_1 + 0x50) + (longlong)iVar8 * 8) = plVar1;
            iVar8 = (int)plVar5[1];
            iVar4 = (iVar8 - iVar11) + -1;
            if (iVar4 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*plVar5 + (longlong)iVar11 * 8),
                         (void *)(*plVar5 + (longlong)(iVar11 + 1) * 8),(longlong)iVar4 << 3);
              iVar8 = (int)plVar5[1];
            }
            *(int *)(plVar5 + 1) = iVar8 + -1;
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar5);
            return;
          }
        }
        iVar11 = iVar11 + -1;
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
    }
  }
  return;
}



// FUNCTION 142ee8c40 FUN_142ee8c40 body=165 status=ok
// SIG undefined FUN_142ee8c40(void)

void FUN_142ee8c40(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  iVar1 = *(int *)(param_1 + 0x58);
  while (0 < iVar1) {
    lVar2 = *(longlong *)
             (*(longlong *)(param_1 + 0x50) + -8 + (longlong)*(int *)(param_1 + 0x58) * 8);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x50);
    if (lVar2 != 0) {
      plVar3 = *(longlong **)(lVar2 + 0x38);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x288))(plVar3,*(undefined8 *)(lVar2 + 0x28));
      }
      if (((*(longlong *)(lVar2 + 0x28) != 0) && (*(longlong *)(lVar2 + 0x30) != 0)) &&
         ((**(code **)(**(longlong **)(lVar2 + 0x30) + 0x18))(), *(longlong *)(lVar2 + 0x28) != 0))
      {
        *(undefined8 *)(lVar2 + 0x28) = 0;
        *(undefined8 *)(lVar2 + 0x30) = 0;
      }
    }
    iVar1 = *(int *)(param_1 + 0x58);
  }
  return;
}



// FUNCTION 142ee8d00 FUN_142ee8d00 body=35 status=ok
// SIG undefined FUN_142ee8d00(void)

void FUN_142ee8d00(longlong param_1)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x520);
  FUN_1419a95d0(param_1 + 0x10);
  return;
}



// FUNCTION 142ee8d30 FUN_142ee8d30 body=50 status=ok
// SIG undefined FUN_142ee8d30(void)

void FUN_142ee8d30(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x5e8) != 0) {
    FUN_142eb3570();
    *(undefined8 *)(param_1 + 0x5e8) = 0;
  }
  FUN_142227880(param_1);
  return;
}



// FUNCTION 142ee8d70 FUN_142ee8d70 body=756 status=ok
// SIG undefined FUN_142ee8d70(void)

void FUN_142ee8d70(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  bool bVar14;
  ulonglong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  longlong *plStack_90;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  uVar13 = 0;
  if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_142ee8e02:
    puVar12 = &local_98;
    local_98 = 0;
    plStack_90 = (longlong *)0x0;
    bVar6 = false;
    bVar5 = true;
    local_a8 = uVar13;
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
    if (iVar7 < 1) goto LAB_142ee8e02;
    local_b0 = *(longlong **)(param_1 + 0x30);
    bVar6 = true;
    bVar5 = false;
    local_b8 = 0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      uVar3 = *(uint *)(local_b0 + 1);
      bVar14 = uVar3 == 0;
      if (bVar14) {
        *(uint *)(local_b0 + 1) = 0;
        uVar10 = uVar13;
      }
      else {
        uVar10 = (ulonglong)uVar3;
      }
      UNLOCK();
      while (!bVar14) {
        iVar7 = (int)uVar10;
        LOCK();
        bVar14 = iVar7 == (int)local_b0[1];
        if (bVar14) {
          *(int *)(local_b0 + 1) = iVar7 + 1;
        }
        UNLOCK();
        if (bVar14) {
          local_b8 = *(ulonglong *)(param_1 + 0x28);
          puVar12 = &local_b8;
          local_a8 = local_b8;
          goto LAB_142ee8e17;
        }
        uVar10 = 0;
        LOCK();
        uVar3 = *(uint *)(local_b0 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_b0 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
      }
      local_b0 = (longlong *)0x0;
    }
    puVar12 = &local_b8;
    local_a8 = 0;
  }
LAB_142ee8e17:
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  uStack_a0 = plVar4;
  *puVar12 = 0;
  plVar4 = plStack_90;
  if ((bVar5) && (plStack_90 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_90 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
  plVar4 = local_b0;
  if ((bVar6) && (local_b0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_b0 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  if (local_a8 == 0) goto LAB_142ee9002;
  FUN_142f05c70(param_1,0);
  if (*(longlong *)(param_1 + 0x188) == 0) {
    *(undefined8 *)(param_1 + 400) = 0;
    *(undefined8 *)(param_1 + 0x180) = 0;
    goto LAB_142ee9002;
  }
  *(longlong *)(param_1 + 400) = *(longlong *)(param_1 + 0x188);
  local_38 = 0;
  local_28 = 0;
  puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = param_1;
    *puVar8 = &PTR_FUN_143f77b70;
  }
  local_68[0] = &LAB_142ee36e0;
  local_78 = (undefined4)local_a8;
  uStack_74 = local_a8._4_4_;
  uStack_70 = (undefined4)uStack_a0;
  uStack_6c = uStack_a0._4_4_;
  if (uStack_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_a0 + 1) = (int)uStack_a0[1] + 1;
    UNLOCK();
  }
  uVar9 = UPlatformGameInstance::StaticClass();
  plVar4 = *(longlong **)(local_a8 + 0x80);
  local_88 = *(undefined8 *)(local_a8 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  uVar10 = FUN_142047e80(local_88,uVar9,*(undefined8 *)(param_1 + 400),&local_78,local_68,0);
  if (uVar10 == 0) {
LAB_142ee8fb5:
    uVar10 = uVar13;
  }
  else {
    lVar11 = UPlatformGameInstance::StaticClass();
    if ((*(int *)(*(longlong *)(uVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_142ee8fb5;
  }
  *(ulonglong *)(param_1 + 0x180) = uVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
LAB_142ee9002:
  plVar4 = uStack_a0;
  if (uStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_a0 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*uStack_a0)(uStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*uStack_a0 + 8))(uStack_a0,1);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x188) = 0;
  return;
}



// FUNCTION 142ee9070 FUN_142ee9070 body=182 status=ok
// SIG undefined FUN_142ee9070(void)

void FUN_142ee9070(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  uVar3 = uVar4;
  uVar5 = uVar4;
  if (0 < *(int *)(param_1 + 0x48)) {
    do {
      lVar1 = *(longlong *)(uVar5 + *(longlong *)(param_1 + 0x40));
      if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x28) != 0)) && (*(longlong *)(lVar1 + 0x30) != 0)
         ) {
        (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x78))();
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      uVar5 = uVar5 + 8;
    } while ((int)uVar2 < *(int *)(param_1 + 0x48));
  }
  uVar3 = uVar4;
  if (0 < *(int *)(param_1 + 0x98)) {
    do {
      lVar1 = *(longlong *)(uVar4 + *(longlong *)(param_1 + 0x90));
      if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x28) != 0)) && (*(longlong *)(lVar1 + 0x30) != 0)
         ) {
        (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x78))();
      }
      uVar2 = (int)uVar3 + 1;
      uVar4 = uVar4 + 8;
      uVar3 = (ulonglong)uVar2;
    } while ((int)uVar2 < *(int *)(param_1 + 0x98));
  }
  return;
}



// FUNCTION 142ee9130 FUN_142ee9130 body=168 status=ok
// SIG undefined FUN_142ee9130(void)

void FUN_142ee9130(longlong *param_1,int param_2)

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
    plVar7 = (longlong *)(*param_1 + 0x20);
    do {
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
      plVar7 = plVar7 + 5;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 142ee91e0 FUN_142ee91e0 body=168 status=ok
// SIG undefined FUN_142ee91e0(void)

void FUN_142ee91e0(longlong *param_1,int param_2)

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
    plVar7 = (longlong *)(*param_1 + 0x20);
    do {
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
      plVar7 = plVar7 + 6;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 142ee9290 FUN_142ee9290 body=18 status=ok
// SIG undefined FUN_142ee9290(void)

void FUN_142ee9290(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x339) = 0;
  *(undefined4 *)(param_1 + 0x32c) = 0xffffffff;
  return;
}



// FUNCTION 142ee92b0 FUN_142ee92b0 body=40 status=ok
// SIG undefined FUN_142ee92b0(void)

undefined1
FUN_142ee92b0(float param_1,float param_2,float param_3,float param_4,char param_5,char param_6)

{
  if (((param_1 <= param_4) && (param_4 <= param_2)) &&
     (((param_3 < param_1 && (param_5 != '\0')) || ((param_2 < param_3 && (param_6 != '\0')))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 142ee92f0 FUN_142ee92f0 body=318 status=ok
// SIG undefined FUN_142ee92f0(void)

void FUN_142ee92f0(longlong param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_38 = *param_3;
  local_30 = param_3[1];
  local_28 = (longlong *)param_3[2];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
  if (lVar7 != 0) {
    uVar8 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
    uVar5 = FKey::IsMouseButton(&local_38);
    FUN_142f0e0a0(uVar8,uVar5);
    cVar6 = FKey::IsMouseButton(&local_38);
    if ((cVar6 != '\0') && (param_4 == 1)) {
      local_20 = local_38;
      local_18 = local_30;
      local_10 = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
      }
      uVar8 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
      FUN_142ef7b80(uVar8,&local_20);
    }
  }
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_28)(local_28);
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
  plVar4 = (longlong *)param_3[2];
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
  return;
}



// FUNCTION 142ee9430 FUN_142ee9430 body=49 status=ok
// SIG undefined FUN_142ee9430(void)

void FUN_142ee9430(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
  if (lVar1 != 0) {
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
    FUN_142ee3cb0(uVar2);
    return;
  }
  return;
}



// FUNCTION 142ee9470 FUN_142ee9470 body=180 status=ok
// SIG undefined FUN_142ee9470(void)

undefined1 FUN_142ee9470(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  
  uVar8 = FWeakObjectPtr::Get(param_1 + 8);
  local_38 = *param_2;
  pcVar4 = *(code **)(param_1 + 0x10);
  local_30 = param_2[1];
  local_28 = param_2[2];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  uVar7 = (*pcVar4)(uVar8,&local_38,param_3,param_4);
  plVar5 = (longlong *)param_2[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return uVar7;
}



// FUNCTION 142ee9530 FUN_142ee9530 body=180 status=ok
// SIG undefined FUN_142ee9530(void)

undefined1 FUN_142ee9530(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  uVar8 = FWeakObjectPtr::Get(param_1 + 8);
  local_28 = *param_2;
  pcVar4 = *(code **)(param_1 + 0x10);
  local_20 = param_2[1];
  local_18 = param_2[2];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  uVar7 = (*pcVar4)(uVar8,&local_28,param_3,param_4);
  plVar5 = (longlong *)param_2[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return uVar7;
}



// FUNCTION 142ee95f0 FUN_142ee95f0 body=284 status=ok
// SIG undefined FUN_142ee95f0(void)

undefined8 FUN_142ee95f0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar4 = FWeakObjectPtr::Get();
    if (lVar4 != 0) {
      lVar4 = UObject::FindFunction(lVar4,*(undefined8 *)(param_1 + 8));
      if (lVar4 != 0) {
        FName::FName(local_38,&DAT_143f3eda8,1);
        local_2c = 0;
        local_30 = 0xffffffff;
        FName::FName(local_28,&DAT_143f3eda8,1);
        local_10 = 0;
        local_20 = 0;
        plStack_18 = (longlong *)0x0;
        FUN_140ed08a0(local_38,param_2);
        plVar5 = (longlong *)FWeakObjectPtr::Get(param_1);
        uVar6 = FUN_14178ac60(plVar5,*(undefined8 *)(param_1 + 8));
        (**(code **)(*plVar5 + 0x208))(plVar5,uVar6,local_38);
        plVar5 = plStack_18;
        if (plStack_18 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_18 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plStack_18)(plStack_18);
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
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142ee9710 FUN_142ee9710 body=20 status=ok
// SIG undefined FUN_142ee9710(void)

undefined1 FUN_142ee9710(longlong param_1)

{
  FUN_142ee0880(param_1 + 8);
  return 1;
}



// FUNCTION 142ee9730 FUN_142ee9730 body=392 status=ok
// SIG undefined FUN_142ee9730(void)

undefined8 FUN_142ee9730(longlong param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 uVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  plVar5 = (longlong *)param_3[2];
  local_48 = *param_3;
  local_40 = param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_38 = plVar5;
  lVar8 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
  if (lVar8 != 0) {
    uVar9 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
    uVar6 = FKey::IsMouseButton(&local_48);
    FUN_142f0e0a0(uVar9,uVar6);
    cVar7 = FKey::IsMouseButton(&local_48);
    if ((cVar7 != '\0') && (param_4 == 1)) {
      local_30 = local_48;
      local_28 = local_40;
      local_20 = local_38;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
      uVar9 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
      FUN_142ef7b80(uVar9,&local_30);
    }
  }
  plVar3 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_38)(local_38);
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
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
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
  plVar5 = (longlong *)param_3[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
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
  return 1;
}



// FUNCTION 142ee98c0 FUN_142ee98c0 body=46 status=ok
// SIG undefined FUN_142ee98c0(void)

undefined1 FUN_142ee98c0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
  if (lVar1 != 0) {
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
    FUN_142ee3cb0(uVar2);
  }
  return 1;
}



// FUNCTION 142ee98f0 FUN_142ee98f0 body=1596 status=ok
// SIG undefined FUN_142ee98f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_142ee98f0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
             float param_5)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_288 [32];
  undefined4 local_268;
  undefined4 *local_258;
  ulonglong *puStack_250;
  undefined1 local_248 [8];
  longlong *local_240;
  undefined4 local_230;
  undefined8 local_228;
  longlong local_220;
  undefined1 local_218 [16];
  undefined1 local_208 [8];
  longlong *local_200;
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_190 [8];
  longlong *local_188;
  undefined1 local_178 [16];
  undefined1 local_168 [32];
  undefined1 local_148 [72];
  longlong local_100;
  undefined4 local_b8 [4];
  undefined1 local_a8 [8];
  longlong *local_a0;
  char local_90;
  ulonglong local_88 [9];
  
  local_88[0] = DAT_1468387a8 ^ (ulonglong)auStack_288;
  lVar13 = 0;
  local_230 = 0;
  uVar8 = FUN_1404b03b0();
  FText::FText(local_248,uVar8);
  lVar11 = lVar13;
  if (param_3 != 0) {
    uVar8 = FUN_142f30760();
    plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_3,uVar8);
    if ((plVar9 != (longlong *)0x0) && (lVar10 = (**(code **)(*plVar9 + 0x10))(plVar9), lVar10 != 0)
       ) {
      lVar11 = *(longlong *)(lVar10 + 0x30);
    }
  }
  uVar6 = FUN_142ee1560(param_3,param_4);
  if (lVar11 == 0) {
    bVar5 = false;
    bVar4 = true;
    bVar3 = true;
    lVar13 = FUN_1417ad2a0(param_2,local_168);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1a8,L"[{0}]",L"GbxUILocalization",L"KeyWithBrackets");
    puVar14 = (undefined8 *)FTextFormat::FTextFormat(local_178,uVar8);
    local_b8[0] = 4;
    FText::FText(local_a8,lVar13);
    local_228 = *puVar14;
    local_258 = local_b8;
    puStack_250 = local_88;
    local_220 = puVar14[1];
    local_90 = '\x01';
    if (local_220 != 0) {
      LOCK();
      *(int *)(local_220 + 8) = *(int *)(local_220 + 8) + 1;
      UNLOCK();
    }
    uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_218,&local_258);
    uVar8 = FText::Format(local_1c0,&local_228,uVar8);
    FText::FText(local_208,uVar8);
    if (local_1b8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_1b8 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_1b8)(local_1b8);
        LOCK();
        piVar2 = (int *)((longlong)local_1b8 + 0xc);
        iVar16 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*local_1b8 + 8))(local_1b8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_218);
    if ((local_90 != '\0') && (local_90 = '\0', local_a0 != (longlong *)0x0)) {
      LOCK();
      plVar9 = local_a0 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar2 = (int *)((longlong)local_a0 + 0xc);
        iVar16 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    plVar9 = (longlong *)puVar14[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar16 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    plVar9 = *(longlong **)(lVar13 + 8);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar16 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    puVar12 = local_208;
  }
  else {
    cVar7 = FUN_142ef5650(lVar11,param_2,uVar6);
    if (cVar7 != '\0') {
      FUN_142ef4060(lVar11,local_148,param_2,uVar6);
      if (local_100 != 0) {
        lVar10 = UTexture2D::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(local_100 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(local_100 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          fVar17 = 0.0;
          if (param_5 <= 0.0) {
            param_5 = 1.0;
          }
          else if (*(longlong *)(local_100 + 0xd8) == 0) {
            param_5 = param_5 / 0.0;
          }
          else {
            param_5 = param_5 / (float)*(int *)(*(longlong *)(local_100 + 0xd8) + 4);
          }
          fVar18 = 0.0;
          iVar16 = 0;
          if (1e-08 < ABS(param_5 - 1.0)) {
            piVar2 = *(int **)(local_100 + 0xd8);
            iVar15 = iVar16;
            if (piVar2 != (int *)0x0) {
              iVar15 = *piVar2;
            }
            fVar17 = (float)iVar15 * param_5;
            if (piVar2 != (int *)0x0) {
              iVar16 = piVar2[1];
            }
            fVar18 = (float)iVar16 * param_5;
          }
          lVar11 = UTexture2D::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(local_100 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(local_100 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          local_268 = 0;
          if (bVar3) {
            lVar13 = local_100;
          }
          uVar8 = FUN_142eea840(local_1d8,lVar13,(int)fVar17,(int)fVar18);
          FText::operator=(local_248,uVar8);
          if (local_1d0 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_1d0 + 1;
            lVar13 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
              (**(code **)*local_1d0)(local_1d0);
              LOCK();
              piVar2 = (int *)((longlong)local_1d0 + 0xc);
              iVar16 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar16 == 1) {
                (**(code **)(*local_1d0 + 8))(local_1d0,1);
              }
            }
          }
          FText::FText(param_1,local_248);
          FSlateBrush::~FSlateBrush(local_148);
          if (local_240 == (longlong *)0x0) {
            return param_1;
          }
          LOCK();
          plVar9 = local_240 + 1;
          lVar13 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar13 != 1) {
            return param_1;
          }
          (**(code **)*local_240)(local_240);
          LOCK();
          piVar2 = (int *)((longlong)local_240 + 0xc);
          iVar16 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar16 != 1) {
            return param_1;
          }
          (**(code **)(*local_240 + 8))(local_240,1);
          return param_1;
        }
      }
      FSlateBrush::~FSlateBrush(local_148);
    }
    bVar5 = true;
    bVar4 = false;
    bVar3 = false;
    puVar12 = (undefined1 *)FUN_142ef4280(lVar11,local_190,param_2,uVar6);
  }
  FText::FText(local_1f0,puVar12);
  if ((bVar3) && (local_200 != (longlong *)0x0)) {
    LOCK();
    plVar9 = local_200 + 1;
    lVar13 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_200)(local_200);
      LOCK();
      piVar2 = (int *)((longlong)local_200 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_200 + 8))(local_200,1);
      }
    }
  }
  if ((bVar4) && (local_1a0 != (longlong *)0x0)) {
    LOCK();
    plVar9 = local_1a0 + 1;
    lVar13 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_1a0)(local_1a0);
      LOCK();
      piVar2 = (int *)((longlong)local_1a0 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_1a0 + 8))(local_1a0,1);
      }
    }
  }
  if ((bVar5) && (local_188 != (longlong *)0x0)) {
    LOCK();
    plVar9 = local_188 + 1;
    lVar13 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_188)(local_188);
      LOCK();
      piVar2 = (int *)((longlong)local_188 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_188 + 8))(local_188,1);
      }
    }
  }
  FText::operator=(local_248,local_1f0);
  FText::FText(param_1,local_248);
  if (local_1e8 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_1e8 + 1;
    lVar13 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_1e8)(local_1e8);
      LOCK();
      piVar2 = (int *)((longlong)local_1e8 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_1e8 + 8))(local_1e8,1);
      }
    }
  }
  if (local_240 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_240 + 1;
    lVar13 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_240)(local_240);
      LOCK();
      piVar2 = (int *)((longlong)local_240 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_240 + 8))(local_240,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 142ee9f30 FUN_142ee9f30 body=548 status=ok
// SIG undefined FUN_142ee9f30(void)

void FUN_142ee9f30(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong local_88;
  undefined8 local_80;
  undefined1 local_78 [24];
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  
  if (*param_1 != 0) {
    uVar7 = 0;
    plVar9 = (longlong *)*param_2;
    local_88 = 0;
    local_80 = 0;
    uVar5 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
    if (plVar9 + (int)param_2[1] < plVar9) {
      uVar5 = uVar7;
    }
    uVar10 = uVar7;
    if (uVar5 != 0) {
      do {
        lVar1 = *(longlong *)(*plVar9 + 0x10);
        lVar8 = *(longlong *)(*param_1 + 0x88);
        lVar6 = lVar8 + (longlong)*(int *)(*param_1 + 0x90) * 0x28;
        for (; lVar8 != lVar6; lVar8 = lVar8 + 0x28) {
          local_48 = 0;
          local_40 = 0;
          local_60 = 0xffffffff;
          local_5c = 0;
          local_50 = 0;
          if (lVar1 == 0) {
            local_50 = 0;
          }
          else {
            uVar4 = FSoftObjectPath::FSoftObjectPath(local_78,lVar1);
            FSoftObjectPath::operator=(&local_50,uVar4);
            FWeakObjectPtr::operator=(&local_60,lVar1);
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            local_5c = CONCAT44(DAT_1464b56f4,(undefined4)local_5c);
          }
          cVar2 = FSoftObjectPath::operator==(lVar8 + 0x10,&local_50);
          if (local_48 != 0) {
            FMemory::Free();
          }
          uVar7 = local_80;
          if (cVar2 != '\0') {
            lVar6 = (longlong)(int)local_80;
            iVar3 = (int)local_80 + 1;
            local_80 = CONCAT44(local_80._4_4_,iVar3);
            if (local_80._4_4_ < iVar3) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (&local_88,uVar7 & 0xffffffff);
            }
            *(longlong *)(local_88 + lVar6 * 8) = *plVar9;
            uVar7 = local_88;
            break;
          }
          uVar7 = local_88;
        }
        plVar9 = plVar9 + 1;
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar5);
    }
    if (param_3 != &local_88) {
      if (*param_3 != 0) {
        FMemory::Free();
      }
      *param_3 = uVar7;
      *(int *)(param_3 + 1) = (int)local_80;
      *(int *)((longlong)param_3 + 0xc) = local_80._4_4_;
      return;
    }
    if (uVar7 != 0) {
      FMemory::Free(uVar7);
    }
  }
  return;
}



// FUNCTION 142eea160 FUN_142eea160 body=48 status=ok
// SIG undefined FUN_142eea160(void)

longlong FUN_142eea160(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != piVar1 + *(int *)(param_1 + 1)) {
    piVar2 = piVar1;
    do {
      if (*piVar2 == *param_2) {
        return (longlong)piVar2 - (longlong)piVar1 >> 2;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1 + *(int *)(param_1 + 1));
  }
  return 0xffffffff;
}



// FUNCTION 142eea190 FUN_142eea190 body=149 status=ok
// SIG undefined FUN_142eea190(void)

longlong FUN_142eea190(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar5 = lVar1;
  while( true ) {
    if (lVar5 == lVar1 + (longlong)(int)lVar2 * 0x28) {
      return 0xffffffff;
    }
    lVar3 = FWeakObjectPtr::Get(lVar5);
    lVar4 = FWeakObjectPtr::Get(param_2);
    if (lVar3 == lVar4) break;
    lVar5 = lVar5 + 0x28;
  }
  return (lVar5 - lVar1) / 0x28;
}



// FUNCTION 142eea230 FUN_142eea230 body=128 status=ok
// SIG undefined FUN_142eea230(void)

longlong FUN_142eea230(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != piVar1 + (longlong)*(int *)(param_1 + 1) * 10) {
    piVar2 = piVar1;
    do {
      if (((ABS((float)param_2[1] - (float)piVar2[1]) <= 1e-08) &&
          (*(longlong *)(piVar2 + 2) == *(longlong *)(param_2 + 2))) && (*piVar2 == *param_2)) {
        return ((longlong)piVar2 - (longlong)piVar1) / 0x28;
      }
      piVar2 = piVar2 + 10;
    } while (piVar2 != piVar1 + (longlong)*(int *)(param_1 + 1) * 10);
  }
  return 0xffffffff;
}



// FUNCTION 142eea2b0 FUN_142eea2b0 body=132 status=ok
// SIG undefined FUN_142eea2b0(void)

void FUN_142eea2b0(longlong param_1,longlong param_2)

{
  longlong local_res8;
  longlong local_res10 [3];
  undefined1 *local_38;
  longlong *plStack_30;
  longlong local_28;
  longlong *local_20;
  longlong *local_18;
  
  local_res8 = 0;
  local_20 = &local_res8;
  local_18 = local_res10;
  if (param_2 != 0) {
    plStack_30 = &local_28;
    local_38 = &LAB_142ee37c0;
    local_res10[0] = param_2;
    local_28 = param_1;
    FUN_1420f6930(param_2,&local_38,0);
    if ((local_res8 != 0) && (*(longlong *)(param_1 + 0x2d8) != 0)) {
      FUN_142f0d400(*(longlong *)(param_1 + 0x2d8),local_res8,0);
    }
  }
  return;
}



// FUNCTION 142eea340 FUN_142eea340 body=438 status=ok
// SIG undefined FUN_142eea340(void)

int * FUN_142eea340(longlong *param_1,int *param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar8 = (int)((ulonglong)*(undefined8 *)(param_3 + 0x10) >> 0x20) +
            (int)*(undefined8 *)(param_3 + 0x10);
    uVar7 = uVar8 >> 0xd ^ -uVar8;
    uVar5 = (-0x61c88647 - uVar7) - uVar8 ^ uVar7 << 8;
    uVar8 = (uVar8 - uVar5) - uVar7 ^ uVar5 >> 0xd;
    uVar7 = (uVar7 - uVar5) - uVar8 ^ uVar8 >> 0xc;
    uVar5 = (uVar5 - uVar7) - uVar8 ^ uVar7 << 0x10;
    uVar8 = (uVar8 - uVar5) - uVar7 ^ uVar5 >> 5;
    uVar7 = (uVar7 - uVar5) - uVar8 ^ uVar8 >> 3;
    uVar5 = (uVar5 - uVar7) - uVar8 ^ uVar7 << 10;
    if (*(int *)(param_3 + 0x20) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = *(undefined2 **)(param_3 + 0x18);
    }
    uVar2 = FUN_140438070(puVar6);
    uVar5 = ((uVar8 - uVar5) - uVar7 ^ uVar5 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
    uVar7 = (-0x61c88647 - uVar5) - uVar2 ^ uVar5 << 8;
    uVar8 = (uVar2 - uVar7) - uVar5 ^ uVar7 >> 0xd;
    uVar5 = (uVar5 - uVar7) - uVar8 ^ uVar8 >> 0xc;
    uVar7 = (uVar7 - uVar5) - uVar8 ^ uVar5 << 0x10;
    uVar8 = (uVar8 - uVar7) - uVar5 ^ uVar7 >> 5;
    uVar5 = (uVar5 - uVar7) - uVar8 ^ uVar8 >> 3;
    uVar7 = (uVar7 - uVar5) - uVar8 ^ uVar5 << 10;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar9 = *(int *)((longlong)plVar3 +
                    (((longlong)(int)((uVar8 - uVar7) - uVar5) ^ (ulonglong)(uVar7 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar9 != -1) {
      lVar4 = *param_1;
      do {
        cVar1 = FSoftObjectPath::operator==(lVar4 + 0x10 + (longlong)iVar9 * 0xb0,param_3 + 0x10);
        if (cVar1 != '\0') {
          *param_2 = iVar9;
          return param_2;
        }
        lVar4 = *param_1;
        iVar9 = *(int *)((longlong)iVar9 * 0xb0 + 0xa8 + lVar4);
      } while (iVar9 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 142eea500 FUN_142eea500 body=439 status=ok
// SIG undefined FUN_142eea500(void)

int * FUN_142eea500(longlong *param_1,int *param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar8 = (int)((ulonglong)*(undefined8 *)(param_3 + 0x10) >> 0x20) +
            (int)*(undefined8 *)(param_3 + 0x10);
    uVar7 = uVar8 >> 0xd ^ -uVar8;
    uVar4 = (-0x61c88647 - uVar7) - uVar8 ^ uVar7 << 8;
    uVar8 = (uVar8 - uVar4) - uVar7 ^ uVar4 >> 0xd;
    uVar7 = (uVar7 - uVar4) - uVar8 ^ uVar8 >> 0xc;
    uVar4 = (uVar4 - uVar7) - uVar8 ^ uVar7 << 0x10;
    uVar8 = (uVar8 - uVar4) - uVar7 ^ uVar4 >> 5;
    uVar7 = (uVar7 - uVar4) - uVar8 ^ uVar8 >> 3;
    uVar4 = (uVar4 - uVar7) - uVar8 ^ uVar7 << 10;
    if (*(int *)(param_3 + 0x20) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = *(undefined2 **)(param_3 + 0x18);
    }
    uVar2 = FUN_140438070(puVar5);
    uVar4 = ((uVar8 - uVar4) - uVar7 ^ uVar4 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
    uVar7 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
    uVar8 = (uVar2 - uVar7) - uVar4 ^ uVar7 >> 0xd;
    uVar4 = (uVar4 - uVar7) - uVar8 ^ uVar8 >> 0xc;
    uVar7 = (uVar7 - uVar4) - uVar8 ^ uVar4 << 0x10;
    uVar8 = (uVar8 - uVar7) - uVar4 ^ uVar7 >> 5;
    uVar4 = (uVar4 - uVar7) - uVar8 ^ uVar8 >> 3;
    uVar7 = (uVar7 - uVar4) - uVar8 ^ uVar4 << 10;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar9 = *(int *)((longlong)plVar3 +
                    (((longlong)(int)((uVar8 - uVar7) - uVar4) ^ (ulonglong)(uVar7 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar9 != -1) {
      lVar6 = *param_1;
      do {
        cVar1 = FSoftObjectPath::operator==(lVar6 + 0x10 + (longlong)iVar9 * 0xa0,param_3 + 0x10);
        if (cVar1 != '\0') {
          *param_2 = iVar9;
          return param_2;
        }
        lVar6 = *param_1;
        iVar9 = *(int *)((longlong)iVar9 * 0xa0 + 0x98 + lVar6);
      } while (iVar9 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 142eea6c0 FUN_142eea6c0 body=238 status=ok
// SIG undefined FUN_142eea6c0(void)

longlong FUN_142eea6c0(longlong param_1,int *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((*param_2 != 0) || (param_2[1] != 0)) {
    iVar5 = *(int *)(param_1 + 0x48);
    lVar6 = (longlong)iVar5;
    lVar3 = 0;
    if (0 < iVar5) {
      lVar8 = lVar6 * 8;
      lVar7 = lVar3;
      lVar4 = lVar6;
      do {
        iVar5 = iVar5 + -1;
        lVar8 = lVar8 + -8;
        lVar4 = lVar4 + -1;
        if ((((-1 < lVar4) && (iVar5 < *(int *)(param_1 + 0x48))) &&
            (plVar1 = *(longlong **)(lVar8 + *(longlong *)(param_1 + 0x40)),
            plVar1 != (longlong *)0x0)) &&
           ((lVar2 = (**(code **)(*plVar1 + 0x278))(), lVar2 != 0 &&
            (*(int *)(lVar2 + 0x18) == *param_2)))) {
          return lVar2;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < lVar6);
    }
    iVar5 = *(int *)(param_1 + 0x98);
    if (0 < (longlong)iVar5) {
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + lVar3 * 8);
        if (((plVar1 != (longlong *)0x0) && (lVar6 = (**(code **)(*plVar1 + 0x278))(), lVar6 != 0))
           && (*(int *)(lVar6 + 0x18) == *param_2)) {
          return lVar6;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar5);
    }
  }
  return 0;
}



// FUNCTION 142eea7b0 FUN_142eea7b0 body=130 status=ok
// SIG undefined FUN_142eea7b0(void)

longlong * FUN_142eea7b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x2c0);
  if (lVar1 != 0) {
    lVar3 = FUN_142f320a0();
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
      plVar4 = *(longlong **)(lVar1 + 0x58);
      plVar5 = plVar4 + (longlong)*(int *)(lVar1 + 0x60) * 6;
      for (; plVar4 != plVar5; plVar4 = plVar4 + 6) {
        if (*plVar4 == param_2) {
          return plVar4;
        }
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 142eea840 FUN_142eea840 body=503 status=ok
// SIG undefined FUN_142eea840(void)

undefined8 FUN_142eea840(undefined8 param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined8 local_40;
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  
  local_58 = (undefined2 *)0x0;
  local_50 = 0;
  if (param_2 != 0) {
    UObjectBaseUtility::GetPathName(param_2,&local_38,0);
    puVar2 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar2 = local_38;
    }
    FString::PrintfImpl(&local_48,L"<img src=\"img:/%s\"",puVar2);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    iVar1 = (int)local_40;
    local_58 = local_48;
    local_48 = (undefined2 *)0x0;
    local_50 = CONCAT44(local_50._4_4_,(int)local_40);
    local_40 = 0;
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
      iVar1 = (int)local_50;
    }
    if (0.0 < (float)param_4) {
      puVar2 = &DAT_143f3eda8;
      if (iVar1 != 0) {
        puVar2 = local_58;
      }
      FString::PrintfImpl(&local_38,L"%s height=\"%i\"",puVar2,param_4);
      if (local_58 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_58 = local_38;
      local_50 = CONCAT44(local_50._4_4_,local_30);
      iVar1 = local_30;
    }
    if (0.0 < (float)param_3) {
      puVar2 = &DAT_143f3eda8;
      if (iVar1 != 0) {
        puVar2 = local_58;
      }
      FString::PrintfImpl(&local_38,L"%s width=\"%i\"",puVar2,param_3);
      if (local_58 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_58 = local_38;
      local_50 = CONCAT44(local_50._4_4_,local_30);
      iVar1 = local_30;
    }
    if (param_5 != 0) {
      puVar2 = &DAT_143f3eda8;
      if (iVar1 != 0) {
        puVar2 = local_58;
      }
      FString::PrintfImpl(&local_38,L"%s vspace=\"%i\"",puVar2);
      if (local_58 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_58 = local_38;
      local_50 = CONCAT44(local_50._4_4_,local_30);
      iVar1 = local_30;
    }
    puVar2 = &DAT_143f3eda8;
    if (iVar1 != 0) {
      puVar2 = local_58;
    }
    FString::PrintfImpl(&local_38,L"%s/>",puVar2);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_58 = local_38;
    local_50 = CONCAT44(local_2c,local_30);
  }
  FText::FromString(param_1,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142eeaa40 FUN_142eeaa40 body=875 status=ok
// SIG undefined FUN_142eeaa40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142eeaa40(LARGE_INTEGER *param_1,undefined8 *param_2)

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
  undefined1 *local_88 [2];
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
    puVar5 = (undefined8 *)operator_new(0x70);
    puVar9 = (undefined8 *)0x0;
    puVar10 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[6] = 0;
      *(undefined4 *)(puVar5 + 8) = 0;
      *puVar5 = AK::MemoryMgr::StartProfileThreadUsage;
      uVar6 = FUN_1415ab270(1);
      puVar5[10] = uVar6;
      *(undefined1 *)(puVar5 + 0xb) = 0;
      puVar10 = puVar5;
    }
    puVar5 = (undefined8 *)operator_new(0x18);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar5 + 1) = 1;
      *puVar5 = &PTR_DestroyObject_144145d88;
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
  local_88[0] = &LAB_142ee3980;
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
    *puVar9 = &PTR_CopyToEmptyStorage_145993200;
    puVar9[2] = local_e8;
    puVar9[3] = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar9 + 4,local_d8);
  }
  *param_2 = &LAB_142ee3880;
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



// FUNCTION 142eeadb0 FUN_142eeadb0 body=779 status=ok
// SIG undefined FUN_142eeadb0(void)

ulonglong FUN_142eeadb0(longlong param_1,char param_2,uint param_3,char param_4)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  
  plVar1 = (longlong *)(param_1 + 0x148);
  iVar3 = (**(code **)(*plVar1 + 0x20))(plVar1);
  iVar5 = 0;
  iVar9 = 0;
  if (*(char *)(param_1 + 0x17c) == '\x01') {
    iVar5 = *(int *)(param_1 + 0x178);
    if ((iVar3 == 0) || (iVar5 == 0)) {
      iVar5 = 0;
    }
    else {
      iVar9 = (iVar3 + -1) / iVar5 + 1;
    }
  }
  else if (*(char *)(param_1 + 0x17c) == '\0') {
    iVar9 = *(int *)(param_1 + 0x174);
    if ((iVar3 == 0) || (iVar9 == 0)) {
      iVar9 = 0;
    }
    else {
      iVar5 = (iVar3 + -1) / iVar9 + 1;
    }
  }
  if ((iVar5 == 0) || (iVar9 == 0)) {
    return 0xffffffff;
  }
  if (((int)param_3 < 0) || (iVar4 = (**(code **)(*plVar1 + 0x20))(plVar1), iVar4 <= (int)param_3))
  {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  uVar8 = 0xffffffff;
  if ((param_3 == 0xffffffff) || (!bVar2)) {
    cVar7 = *(char *)(param_1 + 0x17c);
LAB_142eeaec2:
    uVar6 = 0xffffffff;
    uVar11 = 0xffffffff;
  }
  else {
    cVar7 = *(char *)(param_1 + 0x17c);
    if (cVar7 == '\x01') {
      iVar4 = *(int *)(param_1 + 0x178);
      if (iVar4 < 1) goto LAB_142eeaec2;
      uVar6 = (longlong)(int)param_3 % (longlong)iVar4 & 0xffffffff;
      uVar11 = (longlong)(int)param_3 / (longlong)iVar4 & 0xffffffff;
    }
    else {
      if ((cVar7 != '\0') || (iVar4 = *(int *)(param_1 + 0x174), iVar4 < 1)) goto LAB_142eeaec2;
      uVar11 = (longlong)(int)param_3 % (longlong)iVar4 & 0xffffffff;
      uVar6 = (longlong)(int)param_3 / (longlong)iVar4 & 0xffffffff;
    }
  }
  uVar12 = (uint)uVar6;
  uVar10 = (uint)uVar11;
  if (cVar7 == '\0') {
    if ((uVar12 == iVar5 - 1U) && (iVar3 % iVar9 != 0)) {
      iVar9 = iVar3 % iVar9;
    }
  }
  else if (((cVar7 == '\x01') && (uVar10 == iVar9 - 1U)) && (iVar3 % iVar5 != 0)) {
    iVar5 = iVar3 % iVar5;
  }
  if (param_2 == '\x02') {
    iVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
    if (*(char *)(param_1 + 0x17c) == '\0') {
      cVar7 = *(char *)(param_1 + 0x1a0);
    }
    else {
      cVar7 = *(char *)(param_1 + 0x1a1);
    }
    if (0 < iVar5) {
      if (param_3 == 0xffffffff) {
        uVar8 = 0;
        if (cVar7 == '\x01') {
          uVar8 = 0;
          if (param_4 == '\0') {
            uVar8 = iVar5 - 1;
          }
          return (ulonglong)uVar8;
        }
      }
      else {
        uVar8 = param_3;
        if (param_4 == '\0') {
          if (0 < (int)param_3) {
            return (ulonglong)(param_3 - 1);
          }
          if (cVar7 == '\x01') {
            uVar8 = iVar5 - 1;
          }
        }
        else {
          if ((int)param_3 < iVar5 + -1) {
            return (ulonglong)(param_3 + 1);
          }
          if (cVar7 == '\x01') {
            return 0;
          }
        }
      }
    }
    return (ulonglong)uVar8;
  }
  if (param_2 == '\0') {
    cVar7 = *(char *)(param_1 + 0x1a1);
    if (0 < iVar5) {
      if (uVar12 == 0xffffffff) {
        uVar8 = 0;
        if ((cVar7 == '\x01') && (param_4 == '\0')) {
          uVar8 = iVar5 - 1;
        }
      }
      else {
        uVar8 = uVar12;
        if (param_4 == '\0') {
          if ((int)uVar12 < 1) {
            if (cVar7 == '\x01') {
              uVar8 = iVar5 - 1;
            }
          }
          else {
            uVar8 = uVar12 - 1;
          }
        }
        else if ((int)uVar12 < iVar5 + -1) {
          uVar8 = uVar12 + 1;
        }
        else if (cVar7 == '\x01') {
          uVar8 = 0;
        }
      }
    }
    uVar6 = (ulonglong)uVar8;
    goto LAB_142eeafeb;
  }
  if (param_2 != '\x01') {
    return (ulonglong)param_3;
  }
  cVar7 = *(char *)(param_1 + 0x1a0);
  if (0 < iVar9) {
    if (uVar10 == 0xffffffff) {
      uVar8 = 0;
      if (cVar7 == '\x01') {
        uVar8 = 0;
        if (param_4 == '\0') {
          uVar8 = iVar9 - 1;
        }
        uVar11 = (ulonglong)uVar8;
        goto LAB_142eeafeb;
      }
    }
    else {
      uVar8 = uVar10;
      if (param_4 == '\0') {
        if (0 < (int)uVar10) {
          uVar11 = (ulonglong)(uVar10 - 1);
          goto LAB_142eeafeb;
        }
        if (cVar7 == '\x01') {
          uVar8 = iVar9 - 1;
        }
      }
      else {
        if ((int)uVar10 < iVar9 + -1) {
          uVar11 = (ulonglong)(uVar10 + 1);
          goto LAB_142eeafeb;
        }
        if (cVar7 == '\x01') {
          uVar11 = 0;
          goto LAB_142eeafeb;
        }
      }
    }
  }
  uVar11 = (ulonglong)uVar8;
LAB_142eeafeb:
  uVar6 = FUN_142f0ac90(param_1,uVar6,uVar11);
  if ((-1 < (int)uVar6) && ((int)uVar6 < iVar3)) {
    return uVar6;
  }
  uVar8 = iVar3 - 1;
  if ((-1 < (int)uVar8) && ((int)uVar8 < iVar3)) {
    return (ulonglong)uVar8;
  }
  return (ulonglong)param_3;
}



// FUNCTION 142eeb0c0 FUN_142eeb0c0 body=291 status=ok
// SIG undefined FUN_142eeb0c0(void)

void FUN_142eeb0c0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *local_28;
  undefined8 local_20;
  
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_1420f89f0(*(longlong *)(param_1 + 0x1a0),&local_28,1);
    plVar1 = local_28 + (int)local_20;
    for (plVar8 = local_28; plVar8 != plVar1; plVar8 = plVar8 + 1) {
      lVar3 = *plVar8;
      if (lVar3 != 0) {
        if (param_2 != 0) {
          lVar5 = UWidget::GetPrivateStaticClass();
          lVar7 = param_2;
          do {
            lVar6 = param_2;
            if (lVar7 == lVar5) goto LAB_142eeb150;
            lVar7 = *(longlong *)(lVar7 + 0x30);
          } while (lVar7 != 0);
        }
        lVar6 = 0;
LAB_142eeb150:
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          iVar2 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
          }
          *(longlong *)(*param_3 + (longlong)iVar2 * 8) = lVar3;
        }
      }
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  return;
}



// FUNCTION 142eeb1f0 FUN_142eeb1f0 body=1065 status=ok
// SIG undefined FUN_142eeb1f0(void)

undefined8 * FUN_142eeb1f0(longlong param_1,undefined8 *param_2,longlong param_3)

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
  longlong local_a8;
  longlong *local_a0;
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
  longlong *local_40;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_142eeb2a7:
    plVar8 = &local_68;
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    bVar5 = false;
    bVar11 = true;
    lVar9 = 0;
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
    if (iVar7 < 1) goto LAB_142eeb2a7;
    local_a0 = *(longlong **)(param_1 + 0x30);
    local_a8 = 0;
    if (local_a0 == (longlong *)0x0) {
LAB_142eeb298:
      plVar8 = &local_a8;
      bVar5 = true;
      bVar11 = false;
      lVar9 = local_a8;
    }
    else {
      LOCK();
      iVar7 = (int)local_a0[1];
      bVar11 = iVar7 == 0;
      if (bVar11) {
        *(int *)(local_a0 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
      while (!bVar11) {
        LOCK();
        bVar11 = iVar7 == (int)local_a0[1];
        if (bVar11) {
          *(int *)(local_a0 + 1) = iVar7 + 1;
        }
        UNLOCK();
        if (bVar11) {
          if (local_a0 != (longlong *)0x0) {
            local_a8 = *(longlong *)(param_1 + 0x28);
          }
          goto LAB_142eeb298;
        }
        LOCK();
        iVar7 = (int)local_a0[1];
        bVar11 = iVar7 == 0;
        if (bVar11) {
          *(int *)(local_a0 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
      }
      plVar8 = &local_a8;
      local_a0 = (longlong *)0x0;
      bVar5 = true;
      bVar11 = false;
      lVar9 = 0;
    }
  }
  plVar3 = (longlong *)plVar8[1];
  plVar8[1] = 0;
  plVar4 = plStack_60;
  *plVar8 = 0;
  if ((bVar11) && (plStack_60 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plStack_60 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  plVar8 = local_a0;
  if ((bVar5) && (local_a0 != (longlong *)0x0)) {
    LOCK();
    plVar4 = local_a0 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_a0)();
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  if (lVar9 == 0) goto LAB_142eeb5b8;
  if (param_3 == 0) {
    bVar5 = false;
    bVar11 = true;
    local_78 = lVar9;
    local_70 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    plVar8 = &local_78;
    lVar10 = lVar9;
  }
  else {
    if ((*(longlong *)(param_3 + 0x28) == 0) || (*(longlong *)(param_3 + 0x30) == 0)) {
LAB_142eeb3f7:
      plVar8 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      local_88 = 0;
      bVar5 = false;
      bVar11 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_3 + 0x30) + 8);
      LOCK();
      iVar7 = *piVar1;
      if (iVar7 == 0) {
        *piVar1 = 0;
        iVar7 = 0;
      }
      UNLOCK();
      if (iVar7 < 1) goto LAB_142eeb3f7;
      local_90 = *(longlong **)(param_3 + 0x30);
      local_98 = 0;
      if (local_90 == (longlong *)0x0) {
LAB_142eeb3e8:
        plVar8 = &local_98;
        bVar5 = true;
        bVar11 = false;
        local_88 = local_98;
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
              local_98 = *(longlong *)(param_3 + 0x28);
            }
            goto LAB_142eeb3e8;
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
        local_88 = 0;
      }
    }
    plVar4 = (longlong *)plVar8[1];
    plVar8[1] = 0;
    plVar2 = plStack_50;
    local_80 = plVar4;
    *plVar8 = 0;
    if ((bVar11) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar8 = plStack_50 + 1;
      lVar10 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_50)();
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar8 = local_90;
    if ((bVar5) && (local_90 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_90 + 1;
      lVar10 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
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
    bVar5 = true;
    bVar11 = false;
    plVar8 = &local_88;
    lVar10 = local_88;
  }
  plVar4 = (longlong *)plVar8[1];
  plVar8[1] = 0;
  *plVar8 = 0;
  plVar8 = local_70;
  if ((bVar11) && (local_70 != (longlong *)0x0)) {
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
  plVar8 = local_80;
  if ((bVar5) && (local_80 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_80 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_80)(local_80);
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_48 = lVar10;
  local_40 = plVar4;
  FUN_142038a60(lVar9,param_2,&local_48);
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
LAB_142eeb5b8:
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



// FUNCTION 142eeb620 FUN_142eeb620 body=599 status=ok
// SIG undefined FUN_142eeb620(void)

ulonglong FUN_142eeb620(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  uint local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  
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
      local_70 = *(longlong **)(param_1 + 0x30);
      local_78 = 0;
      if (local_70 == (longlong *)0x0) {
LAB_142eeb6bc:
        plVar9 = &local_78;
        bVar3 = true;
        bVar12 = false;
        lVar11 = local_78;
      }
      else {
        LOCK();
        iVar7 = (int)local_70[1];
        bVar12 = iVar7 == 0;
        if (bVar12) {
          *(int *)(local_70 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        while (!bVar12) {
          LOCK();
          bVar12 = iVar7 == (int)local_70[1];
          if (bVar12) {
            *(int *)(local_70 + 1) = iVar7 + 1;
          }
          UNLOCK();
          if (bVar12) {
            if (local_70 != (longlong *)0x0) {
              local_78 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_142eeb6bc;
          }
          LOCK();
          iVar7 = (int)local_70[1];
          bVar12 = iVar7 == 0;
          if (bVar12) {
            *(int *)(local_70 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
        }
        plVar9 = &local_78;
        local_70 = (longlong *)0x0;
        bVar3 = true;
        bVar12 = false;
        lVar11 = 0;
      }
      goto LAB_142eeb6e1;
    }
  }
  plVar9 = &local_68;
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  bVar3 = false;
  bVar12 = true;
  lVar11 = 0;
LAB_142eeb6e1:
  plVar2 = (longlong *)plVar9[1];
  plVar9[1] = 0;
  *plVar9 = 0;
  plVar5 = plStack_60;
  if ((bVar12) && (plStack_60 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plStack_60 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    uVar8 = (int)lVar4 - 1;
    plVar9 = (longlong *)(ulonglong)uVar8;
    if (uVar8 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar9 = (longlong *)(ulonglong)(iVar7 - 1U);
      if (iVar7 - 1U == 0) {
        plVar9 = (longlong *)(**(code **)(*plStack_60 + 8))(plStack_60,1);
      }
    }
  }
  plVar5 = local_70;
  if ((bVar3) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar9 = local_70 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    uVar8 = (int)lVar4 - 1;
    plVar9 = (longlong *)(ulonglong)uVar8;
    if (uVar8 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar9 = (longlong *)(ulonglong)(iVar7 - 1U);
      if (iVar7 - 1U == 0) {
        plVar9 = (longlong *)(**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (lVar11 == 0) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar2 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      uVar8 = (int)lVar11 - 1;
      plVar9 = (longlong *)(ulonglong)uVar8;
      if (uVar8 == 0) {
        plVar9 = (longlong *)(**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          plVar9 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
    uVar10 = (ulonglong)plVar9 & 0xffffffffffffff00;
  }
  else {
    local_40 = 3;
    local_48 = (longlong *)0x0;
    local_58 = 0xffffffffffffffff;
    uStack_50 = 0xffffffffffffffff;
    local_38 = param_2;
    bVar6 = FUN_1420458d0(lVar11,"getChildAt",param_3,&local_58,1);
    if ((local_40 >> 6 & 1) != 0) {
      (**(code **)(*local_48 + 0x10))(local_48,&local_58,CONCAT44(uStack_34,local_38));
      local_48 = (longlong *)0x0;
    }
    local_40 = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar2 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
    uVar10 = (ulonglong)bVar6;
  }
  return uVar10;
}



// FUNCTION 142eeb880 FUN_142eeb880 body=7 status=ok
// SIG undefined FUN_142eeb880(void)

undefined4 FUN_142eeb880(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x2d8);
}



// FUNCTION 142eeb890 FUN_142eeb890 body=192 status=ok
// SIG undefined FUN_142eeb890(void)

undefined8 FUN_142eeb890(longlong param_1)

{
  PSRWLOCK SRWLock;
  undefined8 uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    lVar3 = UWidgetComponent::GetRenderTarget();
    if (lVar3 != 0) {
      lVar4 = FUN_142f27b90();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        SRWLock = (PSRWLOCK)(lVar3 + 0x5b0);
        AcquireSRWLockShared(SRWLock);
        if (*(int *)(lVar3 + 0x5a8) != 0) {
          uVar1 = *(undefined8 *)
                   (*(longlong *)(lVar3 + 0x5a0) + -8 + (longlong)*(int *)(lVar3 + 0x5a8) * 8);
          ReleaseSRWLockShared(SRWLock);
          return uVar1;
        }
        ReleaseSRWLockShared(SRWLock);
        return 0;
      }
    }
  }
  return 0;
}



// FUNCTION 142eeb950 FUN_142eeb950 body=23 status=ok
// SIG undefined FUN_142eeb950(void)

undefined1 FUN_142eeb950(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    return *(undefined1 *)(*(longlong *)(param_1 + 0x2d0) + 0xb8);
  }
  return 1;
}



// FUNCTION 142eeb970 FUN_142eeb970 body=523 status=ok
// SIG undefined FUN_142eeb970(void)

undefined8 * FUN_142eeb970(longlong param_1,undefined8 *param_2)

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
LAB_142eeba0d:
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
            goto LAB_142eeba0d;
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
      goto LAB_142eeba34;
    }
  }
  plVar7 = &local_38;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_142eeba34:
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
    FUN_14203af90(lVar8,param_2,"currentLabel");
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



// FUNCTION 142eebb80 FUN_142eebb80 body=100 status=ok
// SIG undefined FUN_142eebb80(void)

float FUN_142eebb80(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  if (*(longlong *)(param_1 + 0x2e8) == 0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = (float)USlider::GetValue();
    fVar2 = 0.0;
    if (fVar1 < 0.0) goto LAB_142eebbbe;
  }
  fVar2 = fVar1;
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
LAB_142eebbbe:
  return (1.0 - fVar2) * *(float *)(param_1 + 0x2f4) + fVar2 * *(float *)(param_1 + 0x2f8);
}



// FUNCTION 142eebbf0 FUN_142eebbf0 body=107 status=ok
// SIG undefined FUN_142eebbf0(void)

longlong * FUN_142eebbf0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1[0xd];
  *param_2 = lVar2;
  if (lVar2 != 0) {
    lVar1 = FUN_142f2ce20();
    for (lVar2 = *param_2; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar1) {
        if (*param_2 != 0) {
          return param_2;
        }
        break;
      }
    }
  }
  lVar2 = (**(code **)(*param_1 + 0x98))(param_1);
  if (lVar2 != 0) {
    *param_2 = *(longlong *)(lVar2 + 0x30);
  }
  return param_2;
}



// FUNCTION 142eebc60 FUN_142eebc60 body=107 status=ok
// SIG undefined FUN_142eebc60(void)

longlong * FUN_142eebc60(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1[0xb];
  *param_2 = lVar2;
  if (lVar2 != 0) {
    lVar1 = FUN_142f2ce20();
    for (lVar2 = *param_2; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar1) {
        if (*param_2 != 0) {
          return param_2;
        }
        break;
      }
    }
  }
  lVar2 = (**(code **)(*param_1 + 0x98))(param_1);
  if (lVar2 != 0) {
    *param_2 = *(longlong *)(lVar2 + 0x30);
  }
  return param_2;
}



// FUNCTION 142eebcd0 FUN_142eebcd0 body=53 status=ok
// SIG undefined FUN_142eebcd0(void)

float FUN_142eebcd0(longlong param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x18);
  if (param_2 - fVar1 <= 0.0) {
    return param_2;
  }
  if (*(float *)(param_1 + 0x20) <= param_3 - fVar1) {
    return param_3 - *(float *)(param_1 + 0x20);
  }
  return fVar1;
}



// FUNCTION 142eebd10 GetAction body=8 status=ok
// SIG undefined GetAction(void)

undefined8 APatrolNode::GetAction(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x2e0);
}



// FUNCTION 142eebd20 FUN_142eebd20 body=90 status=ok
// SIG undefined FUN_142eebd20(void)

float FUN_142eebd20(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  if (0 < *(int *)(param_1 + 0x2c8)) {
    iVar1 = *(int *)(param_1 + 0x348) / *(int *)(param_1 + 0x2c8);
    iVar2 = *(int *)(param_1 + 0x2d0);
    if (iVar1 <= *(int *)(param_1 + 0x2d0)) {
      iVar2 = iVar1;
    }
    if (0 < iVar2) {
      return (float)iVar2 * *(float *)(param_1 + 0x31c) * (float)*(int *)(param_1 + 0x2cc) +
             *(float *)(param_1 + 0x31c);
    }
  }
  return *(float *)(param_1 + 0x31c);
}



// FUNCTION 142eebd80 FUN_142eebd80 body=405 status=ok
// SIG undefined FUN_142eebd80(void)

undefined8 * FUN_142eebd80(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined8 local_28;
  longlong *plStack_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146852c60) {
    _Init_thread_header(&DAT_146852c60);
    if (DAT_146852c60 == -1) {
      FName::FName(&DAT_146852c58,L"OnlineSubsystem",1);
      _Init_thread_footer(&DAT_146852c60);
    }
  }
  uVar8 = DAT_146852c58;
  uVar5 = FUN_14168dc80();
  plVar6 = (longlong *)FModuleManager::GetModule(uVar5,uVar8);
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x50))(plVar6,param_2);
  bVar9 = plVar6 != (longlong *)0x0;
  if (bVar9) {
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x48))(plVar6,local_18);
    uVar8 = *puVar7;
  }
  else {
    puVar7 = &local_28;
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
    uVar8 = 0;
  }
  *param_1 = uVar8;
  param_1[1] = puVar7[1];
  puVar7[1] = 0;
  *puVar7 = 0;
  if (bVar9) {
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_10 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  plVar6 = plStack_20;
  if ((!bVar9) && (plStack_20 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_20 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 142eebf20 FUN_142eebf20 body=18 status=ok
// SIG undefined FUN_142eebf20(void)

undefined8 FUN_142eebf20(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x2d8) + 0x48);
  }
  return 0;
}



// FUNCTION 142eebf40 FUN_142eebf40 body=1700 status=ok
// SIG undefined FUN_142eebf40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_142eebf40(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_308 [32];
  undefined2 local_2e8;
  longlong local_2d8;
  longlong *local_2d0;
  undefined4 local_2c8;
  longlong *local_2c0;
  longlong *local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  longlong *local_298;
  longlong local_290;
  longlong *plStack_288;
  LARGE_INTEGER local_280;
  undefined1 *local_278 [2];
  undefined1 local_268 [32];
  undefined8 local_248;
  undefined4 local_238;
  undefined1 *local_228 [2];
  undefined1 local_218 [32];
  undefined8 local_1f8;
  undefined4 local_1e8;
  longlong *local_1d8;
  longlong *local_1d0;
  undefined1 local_1c8 [16];
  longlong local_1b8 [4];
  longlong *local_198;
  int local_188;
  undefined1 *local_178 [2];
  longlong local_168 [4];
  longlong *local_148;
  int local_138;
  LARGE_INTEGER local_128 [24];
  longlong local_68;
  undefined1 local_60 [8];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  plVar11 = (longlong *)0x0;
  local_2c8 = 0;
  if (1e-08 < ABS(*(float *)(param_1 + 0x264))) {
    return *(undefined4 *)(param_1 + 0x264);
  }
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
      local_2d0 = *(longlong **)(param_1 + 0x30);
      local_2d8 = 0;
      if (local_2d0 == (longlong *)0x0) {
LAB_142eec01e:
        plVar9 = &local_2d8;
        bVar3 = true;
        bVar13 = false;
        lVar12 = local_2d8;
      }
      else {
        LOCK();
        iVar5 = (int)local_2d0[1];
        bVar13 = iVar5 == 0;
        if (bVar13) {
          *(int *)(local_2d0 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (!bVar13) {
          LOCK();
          bVar13 = iVar5 == (int)local_2d0[1];
          if (bVar13) {
            *(int *)(local_2d0 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar13) {
            if (local_2d0 != (longlong *)0x0) {
              local_2d8 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_142eec01e;
          }
          LOCK();
          iVar5 = (int)local_2d0[1];
          bVar13 = iVar5 == 0;
          if (bVar13) {
            *(int *)(local_2d0 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
        plVar9 = &local_2d8;
        local_2d0 = (longlong *)0x0;
        bVar3 = true;
        bVar13 = false;
        lVar12 = 0;
      }
      goto LAB_142eec047;
    }
  }
  plVar9 = &local_290;
  local_290 = 0;
  plStack_288 = (longlong *)0x0;
  bVar3 = false;
  bVar13 = true;
  lVar12 = 0;
LAB_142eec047:
  plVar2 = (longlong *)plVar9[1];
  plVar9[1] = 0;
  plVar10 = plStack_288;
  *plVar9 = 0;
  if ((bVar13) && (plStack_288 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plStack_288 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_288)(plStack_288);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plStack_288 + 8))(plStack_288,1);
      }
    }
  }
  plVar9 = local_2d0;
  if ((bVar3) && (local_2d0 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_2d0 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_2d0)(local_2d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_2d0 + 8))(local_2d0,1);
      }
    }
  }
  if (lVar12 != 0) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    local_248 = 0;
    local_238 = 0;
    puVar7 = (undefined8 *)FUN_140438ef0(0x20,local_268);
    plVar9 = plVar2;
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_FUN_14467a5d8;
      puVar7[1] = param_1;
      puVar7[2] = lVar12;
      puVar7[3] = plVar2;
      plVar9 = plVar11;
    }
    local_2b0 = 0;
    local_278[0] = &LAB_142ee3950;
    local_2a8 = 0x1b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b0,0);
    local_2e8 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_2b0,0x1b,"UGbxTextField::GetFontSize");
    FUN_140cdf730(local_128,&local_2b0,local_278);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar9 + 1;
      lVar8 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    QueryPerformanceCounter(&local_280);
    local_128[0] = local_280;
    lVar8 = operator_new(0x18);
    plVar9 = plVar11;
    if (lVar8 != 0) {
      plVar9 = (longlong *)FUN_140cdf810(lVar8);
    }
    plVar10 = (longlong *)operator_new(0x18);
    if (plVar10 != (longlong *)0x0) {
      *(undefined4 *)(plVar10 + 1) = 1;
      *plVar10 = (longlong)&PTR_DestroyObject_1444f8938;
      *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
      plVar10[2] = (longlong)plVar9;
      plVar11 = plVar10;
    }
    local_2c0 = plVar9;
    local_2b8 = plVar11;
    SharedPointerInternals::EnableSharedFromThis(&local_2c0,plVar9,plVar9);
    *(undefined1 *)(local_2c0 + 2) = 1;
    local_298 = (longlong *)local_2c0[1];
    local_68 = *local_2c0;
    if (local_298 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_298 + 1) = (int)local_298[1] + 1;
      UNLOCK();
    }
    local_2a0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_60,&local_298);
    plVar11 = local_298;
    if (local_298 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_298 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_298)(local_298);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_298 + 8))(local_298,1);
        }
      }
    }
    local_148 = (longlong *)0x0;
    local_138 = 0;
    puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_168);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_FUN_1444f8620;
      puVar7[1] = local_128;
    }
    local_178[0] = &LAB_140cee980;
    local_1d8 = local_2c0;
    local_1d0 = local_2b8;
    if (local_2b8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2b8 + 1) = (int)local_2b8[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_1c8,local_178);
    local_1f8 = 0;
    local_1e8 = 0;
    puVar7 = (undefined8 *)FUN_140438ef0(0x70,local_218);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_CopyToEmptyStorage_1444f8578;
      puVar7[2] = local_1d8;
      puVar7[3] = local_1d0;
      if (local_1d0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1d0 + 1) = (int)local_1d0[1] + 1;
        UNLOCK();
      }
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar7 + 4,local_1c8);
    }
    local_228[0] = &LAB_140cee8d0;
    if (local_188 != 0) {
      plVar11 = local_1b8;
      if (local_198 != (longlong *)0x0) {
        plVar11 = local_198;
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x10))(plVar11,0);
      }
    }
    if (local_198 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar11 = local_1d0;
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_1d0 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_1d0)(local_1d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    if (local_138 != 0) {
      plVar11 = local_168;
      if (local_148 != (longlong *)0x0) {
        plVar11 = local_148;
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x10))(plVar11,0);
      }
    }
    if (local_148 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar11 = local_2b8;
    if (local_2b8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_2b8 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_2b8)(local_2b8);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    FUN_1420326d0(lVar12,local_228);
    if (local_68 != 0) {
      while ((local_68 != 0 && (*(char *)(local_68 + 0x58) == '\0'))) {
        cVar4 = FUN_1415ad720(&DAT_1468e2448);
        if ((cVar4 == '\0') &&
           ((DAT_1468c21ae != '\0' && (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)))) {
          lVar12 = FUN_14203ca70();
          if (lVar12 != 0) {
            FUN_1420714f0(lVar12);
          }
        }
        else {
          FUN_142036de0();
        }
        if (local_68 == 0) break;
        if (*(char *)(local_68 + 0x58) == '\0') {
          (**(code **)(**(longlong **)(local_68 + 0x50) + 0x20))
                    (*(longlong **)(local_68 + 0x50),5,0);
        }
      }
    }
    FUN_140ce1dc0(local_128);
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar2 + 1;
    lVar12 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
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
  return *(undefined4 *)(param_1 + 0x264);
}



// FUNCTION 142eec5f0 FUN_142eec5f0 body=1083 status=ok
// SIG undefined FUN_142eec5f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float FUN_142eec5f0(float *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  DWORD DVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_238 [32];
  undefined2 local_218;
  longlong local_208;
  longlong *local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  longlong *plStack_1d8;
  undefined1 *local_1c8 [2];
  undefined1 local_1b8 [32];
  undefined8 local_198;
  undefined4 local_188;
  undefined1 local_178 [80];
  undefined1 local_128 [192];
  longlong local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  local_1f8 = 0;
  if (1e-08 < ABS(*param_1)) {
    return *param_1;
  }
  if ((*(longlong *)(param_1 + 2) != 0) && (*(longlong *)(param_1 + 4) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 4) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      local_200 = *(longlong **)(param_1 + 4);
      local_208 = 0;
      if (local_200 == (longlong *)0x0) {
LAB_142eec6c3:
        plVar9 = &local_208;
        bVar4 = true;
        bVar13 = false;
        lVar12 = local_208;
      }
      else {
        LOCK();
        iVar7 = (int)local_200[1];
        bVar13 = iVar7 == 0;
        if (bVar13) {
          *(int *)(local_200 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        while (!bVar13) {
          LOCK();
          bVar13 = iVar7 == (int)local_200[1];
          if (bVar13) {
            *(int *)(local_200 + 1) = iVar7 + 1;
          }
          UNLOCK();
          if (bVar13) {
            if (local_200 != (longlong *)0x0) {
              local_208 = *(longlong *)(param_1 + 2);
            }
            goto LAB_142eec6c3;
          }
          LOCK();
          iVar7 = (int)local_200[1];
          bVar13 = iVar7 == 0;
          if (bVar13) {
            *(int *)(local_200 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
        }
        plVar9 = &local_208;
        local_200 = (longlong *)0x0;
        bVar4 = true;
        bVar13 = false;
        lVar12 = 0;
      }
      goto LAB_142eec6ec;
    }
  }
  plVar9 = &local_1e0;
  local_1e0 = 0;
  plStack_1d8 = (longlong *)0x0;
  bVar4 = false;
  bVar13 = true;
  lVar12 = 0;
LAB_142eec6ec:
  plVar3 = (longlong *)plVar9[1];
  plVar9[1] = 0;
  plVar2 = plStack_1d8;
  *plVar9 = 0;
  if ((bVar13) && (plStack_1d8 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plStack_1d8 + 1;
    lVar5 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_1d8)(plStack_1d8);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_1d8 + 8))(plStack_1d8,1);
      }
    }
  }
  plVar9 = local_200;
  if ((bVar4) && (local_200 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_200 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_200)(local_200);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_200 + 8))(local_200,1);
      }
    }
  }
  if (lVar12 != 0) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    local_198 = 0;
    local_188 = 0;
    puVar10 = (undefined8 *)FUN_140438ef0(0x18,local_1b8);
    plVar9 = plVar3;
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &PTR_FUN_14461b758;
      puVar10[1] = lVar12;
      puVar10[2] = plVar3;
      plVar9 = (longlong *)0x0;
    }
    local_1f0 = 0;
    local_1c8[0] = &LAB_142ee36c0;
    local_1e8 = 0x20;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f0,0);
    local_218 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_1f0,0x20,"TextFieldBase::GetFontSize_Slow");
    FUN_142edd740(local_128,&local_1f0,local_1c8);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    uVar11 = FUN_142eeaa40(local_128,local_178);
    FUN_1420326d0(lVar12,uVar11);
    lVar12 = local_68;
    if (local_68 != 0) {
      while ((lVar12 = local_68, local_68 != 0 && (*(char *)(local_68 + 0x58) == '\0'))) {
        cVar6 = FUN_1415ad720(&DAT_1468e2448);
        if ((cVar6 == '\0') &&
           ((DAT_1468c21ae != '\0' && (DVar8 = GetCurrentThreadId(), DVar8 != DAT_1468c21c0)))) {
          lVar12 = FUN_14203ca70();
          if (lVar12 != 0) {
            FUN_1420714f0(lVar12);
          }
        }
        else {
          FUN_142036de0();
        }
        lVar12 = local_68;
        if (local_68 == 0) break;
        if (*(char *)(local_68 + 0x58) == '\0') {
          (**(code **)(**(longlong **)(local_68 + 0x50) + 0x20))(*(longlong **)(local_68 + 0x50),5);
        }
      }
    }
    cVar6 = *(char *)(lVar12 + 0x58);
    while (cVar6 == '\0') {
      (**(code **)(**(longlong **)(lVar12 + 0x50) + 0x20))
                (*(longlong **)(lVar12 + 0x50),0x5d638865,0);
      cVar6 = *(char *)(lVar12 + 0x58);
    }
    *param_1 = *(float *)(lVar12 + 0x60);
    FUN_140ce1dc0(local_128);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    lVar12 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
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
  return *param_1;
}



// FUNCTION 142eeca30 FUN_142eeca30 body=518 status=ok
// SIG undefined FUN_142eeca30(void)

undefined4 FUN_142eeca30(longlong param_1)

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
  undefined4 uVar10;
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
LAB_142eecacd:
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
            goto LAB_142eecacd;
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
      goto LAB_142eecaf4;
    }
  }
  plVar7 = &local_38;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_142eecaf4:
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
    uVar10 = FUN_14203af20(lVar8,"height");
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
    return uVar10;
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
  return 0;
}



// FUNCTION 142eecc50 FUN_142eecc50 body=330 status=ok
// SIG undefined FUN_142eecc50(void)

undefined8 FUN_142eecc50(undefined8 param_1,longlong param_2,char param_3)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  float fVar7;
  undefined1 local_98 [72];
  longlong local_50;
  
  if (param_3 == '\0') {
    if (param_2 == 0) goto LAB_142eeccaf;
    uVar3 = FUN_142f30760();
    plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar3);
    if ((plVar4 == (longlong *)0x0) || (lVar5 = (**(code **)(*plVar4 + 0x18))(plVar4), lVar5 == 0))
    goto LAB_142eeccaf;
    bVar6 = *(char *)(lVar5 + 0xb8) == '\x01';
  }
  else {
    bVar6 = param_3 == '\x02';
  }
  if (bVar6) {
    return 1;
  }
LAB_142eeccaf:
  cVar2 = FUN_142ef5770(param_1,param_2,param_3);
  if (cVar2 != '\0') {
    FUN_142ef33f0(local_98,param_1,param_2,param_3);
    if (local_50 != 0) {
      lVar5 = UTexture2D::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(local_50 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(local_50 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (((bVar6) && (piVar1 = *(int **)(local_50 + 0xd8), piVar1 != (int *)0x0)) &&
         (piVar1[1] != 0)) {
        fVar7 = (float)*piVar1 / (float)piVar1[1];
        if (fVar7 <= 1.2) {
          FSlateBrush::~FSlateBrush(local_98);
          return 2;
        }
        uVar3 = 3;
        if (1.65 < fVar7) {
          uVar3 = 4;
        }
        FSlateBrush::~FSlateBrush(local_98);
        return uVar3;
      }
    }
    FSlateBrush::~FSlateBrush(local_98);
  }
  return 0;
}



// FUNCTION 142eecda0 FUN_142eecda0 body=124 status=ok
// SIG undefined FUN_142eecda0(void)

int FUN_142eecda0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x48) < 1) {
    return -1;
  }
  lVar4 = 0;
  while ((plVar1 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x40)), plVar1 == (longlong *)0x0
         || (lVar2 = (**(code **)(*plVar1 + 0x278))(), lVar2 != param_2))) {
    iVar3 = iVar3 + 1;
    lVar4 = lVar4 + 8;
    if (*(int *)(param_1 + 0x48) <= iVar3) {
      return -1;
    }
  }
  return iVar3;
}



// FUNCTION 142eece20 FUN_142eece20 body=134 status=ok
// SIG undefined FUN_142eece20(void)

int FUN_142eece20(longlong param_1,longlong param_2)

{
  BOOL BVar1;
  longlong lVar2;
  int iVar3;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  }
  if ((param_2 != 0) && (iVar3 = 0, 0 < *(int *)(param_1 + 0x60))) {
    do {
      lVar2 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x58) + (longlong)iVar3 * 0x28);
      if (lVar2 == param_2) goto LAB_142eece85;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x60));
  }
  iVar3 = -1;
LAB_142eece85:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  return iVar3;
}



// FUNCTION 142eeceb0 FUN_142eeceb0 body=53 status=ok
// SIG undefined FUN_142eeceb0(void)

undefined8 FUN_142eeceb0(byte param_1)

{
  uint3 uVar1;
  uint uVar2;
  int7 iVar3;
  
  uVar2 = param_1 - 2;
  uVar1 = (uint3)(uVar2 >> 8);
  if (uVar2 < 8) {
    iVar3 = (int7)(int3)uVar1;
    switch(uVar2) {
    default:
      return CONCAT71((int7)(int3)uVar1,1);
    case 2:
      return CONCAT71((int7)(int3)uVar1,6);
    case 3:
    case 4:
      return CONCAT71(iVar3,2);
    case 5:
      return CONCAT71(iVar3,7);
    case 6:
      return CONCAT71(iVar3,4);
    case 7:
      return CONCAT71(iVar3,5);
    }
  }
  return CONCAT71((uint7)uVar1,3);
}



// FUNCTION 142eecf10 FUN_142eecf10 body=130 status=ok
// SIG undefined FUN_142eecf10(void)

longlong FUN_142eecf10(longlong *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 < 0) {
    return 0;
  }
  iVar2 = (**(code **)(*param_1 + 0x20))();
  if (param_2 < iVar2) {
    lVar3 = UPanelWidget::GetChildAt(param_1 + -0x29,param_2);
    if (lVar3 != 0) {
      lVar4 = FUN_142f2ce20();
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
        return lVar3;
      }
    }
    return 0;
  }
  return 0;
}



// FUNCTION 142eecfa0 FUN_142eecfa0 body=130 status=ok
// SIG undefined FUN_142eecfa0(void)

longlong FUN_142eecfa0(longlong *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 < 0) {
    return 0;
  }
  iVar2 = (**(code **)(*param_1 + 0x20))();
  if (param_2 < iVar2) {
    lVar3 = UPanelWidget::GetChildAt(param_1 + -0x10c,param_2);
    if (lVar3 != 0) {
      lVar4 = FUN_142f2ce20();
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
        return lVar3;
      }
    }
    return 0;
  }
  return 0;
}



// FUNCTION 142eed030 FUN_142eed030 body=205 status=ok
// SIG undefined FUN_142eed030(void)

undefined8 * FUN_142eed030(longlong param_1,undefined8 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  *param_2 = 0;
  *(undefined2 *)((longlong)param_2 + 0xc) = 0;
  *(undefined1 *)((longlong)param_2 + 0xe) = 0;
  if ((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x280))) {
    iVar2 = *(int *)(param_1 + 0x270);
    iVar3 = *(int *)(param_1 + 0x38c);
    *(int *)(param_2 + 1) = param_3;
    *(bool *)((longlong)param_2 + 0xc) = param_3 == iVar2;
    if ((iVar3 <= param_3) && (param_3 < iVar3 + *(int *)(param_1 + 0x390))) {
      piVar4 = *(int **)(param_1 + 0x3a8);
      piVar1 = piVar4 + *(int *)(param_1 + 0x3b0);
      if (piVar4 != piVar1) {
        while( true ) {
          iVar2 = *piVar4;
          if (((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x3a0))) &&
             (*(int *)(*(longlong *)(param_1 + 0x398) + 0x28 + (longlong)iVar2 * 0x30) == param_3))
          break;
          piVar4 = piVar4 + 1;
          if (piVar4 == piVar1) {
            *param_2 = 0;
            return param_2;
          }
        }
        uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x398) + 0x18 + (longlong)iVar2 * 0x30);
      }
      *param_2 = uVar5;
    }
  }
  return param_2;
}



// FUNCTION 142eed100 FUN_142eed100 body=145 status=ok
// SIG undefined FUN_142eed100(void)

longlong FUN_142eed100(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x60);
  if (lVar3 == 0) {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x24);
    if (cVar1 != '\0') {
      uVar2 = FWeakObjectPtr::Get(param_1 + 0x24);
      lVar3 = FUN_142eed240(uVar2);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    lVar3 = (**(code **)(*(longlong *)(param_1 + -0x148) + 0x2a0))();
    if (lVar3 != 0) {
      uVar2 = FUN_142f30760();
      plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar2);
      if ((plVar4 != (longlong *)0x0) && (lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4), lVar3 != 0)
         ) {
        return *(longlong *)(lVar3 + 0x50);
      }
    }
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 142eed1a0 FUN_142eed1a0 body=145 status=ok
// SIG undefined FUN_142eed1a0(void)

longlong FUN_142eed1a0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (lVar3 == 0) {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x20);
    if (cVar1 != '\0') {
      uVar2 = FWeakObjectPtr::Get(param_1 + 0x20);
      lVar3 = FUN_142eed240(uVar2);
      if (lVar3 != 0) {
        return lVar3;
      }
    }
    lVar3 = (**(code **)(*(longlong *)(param_1 + -0x860) + 0x2a0))();
    if (lVar3 != 0) {
      uVar2 = FUN_142f30760();
      plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar2);
      if ((plVar4 != (longlong *)0x0) && (lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4), lVar3 != 0)
         ) {
        return *(longlong *)(lVar3 + 0x50);
      }
    }
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 142eed240 FUN_142eed240 body=103 status=ok
// SIG undefined FUN_142eed240(void)

longlong FUN_142eed240(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x2c0) == 0) ||
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x2c0) + 0x50), lVar3 == 0)) {
    lVar3 = *(longlong *)(param_1 + 0x2c8);
    if (lVar3 != 0) {
      uVar1 = FUN_142f30760();
      plVar2 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar1);
      if (plVar2 != (longlong *)0x0) {
        lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (lVar3 != 0) {
          return *(longlong *)(lVar3 + 0x50);
        }
      }
    }
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 142eed2b0 FUN_142eed2b0 body=106 status=ok
// SIG undefined FUN_142eed2b0(void)

float FUN_142eed2b0(longlong param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = 0;
  fVar3 = 0.0;
  iVar2 = *(int *)(param_1 + 0x280) + -1;
  if (*(int *)(param_1 + 0x280) < 1) {
    iVar2 = 0;
  }
  if (*(char *)(param_1 + 0x1e1) == '\0') {
    fVar3 = *(float *)(param_1 + 0x36c);
    iVar1 = iVar2 / *(int *)(param_1 + 0x37c) + 1;
  }
  else if (*(char *)(param_1 + 0x1e1) == '\x01') {
    return (float)(iVar2 / *(int *)(param_1 + 0x378) + 1) * *(float *)(param_1 + 0x368);
  }
  return (float)iVar1 * fVar3;
}



// FUNCTION 142eed320 FUN_142eed320 body=267 status=ok
// SIG undefined FUN_142eed320(void)

longlong FUN_142eed320(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res18 [16];
  
  lVar7 = 0;
  lVar4 = *(longlong *)(param_2 + 0x20);
  if ((*(longlong *)(param_2 + 0x20) == 0) && (lVar4 = lVar7, *(longlong *)(param_2 + 0x28) != 0)) {
    lVar1 = FUN_142f32150();
    for (lVar6 = *(longlong *)(param_2 + 0x28); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
      if (lVar6 == lVar1) {
        if (*(longlong *)(param_2 + 0x28) == 0) {
          return 0;
        }
        plVar2 = (longlong *)FName::FName(local_res18,"GeneratedMenuSwitcherSubmenuData",1);
        lVar4 = *plVar2;
        if (lVar4 == 0) {
          FUN_1417846f0(param_1,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
        }
        uVar3 = FUN_142f38260();
        lVar4 = FUN_1417985e0(uVar3,param_1,lVar4,0,0,0,0,0,0);
        if (lVar4 != 0) {
          *(undefined1 *)(lVar4 + 0x34) = 1;
          *(undefined2 *)(lVar4 + 0x30) = 0x100;
          lVar6 = lVar7;
          if (*(longlong *)(param_2 + 0x28) != 0) {
            lVar5 = FUN_142f32150();
            for (lVar1 = *(longlong *)(param_2 + 0x28);
                (lVar6 = lVar7, lVar1 != 0 &&
                (lVar6 = *(longlong *)(param_2 + 0x28), lVar1 != lVar5));
                lVar1 = *(longlong *)(lVar1 + 0x30)) {
            }
          }
          *(longlong *)(lVar4 + 0x48) = lVar6;
          *(undefined2 *)(lVar4 + 0x32) = 0x205;
        }
        return lVar4;
      }
    }
  }
  return lVar4;
}



// FUNCTION 142eed430 FUN_142eed430 body=82 status=ok
// SIG undefined FUN_142eed430(void)

undefined4 FUN_142eed430(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  param_1 = param_1 + 8;
  cVar1 = FWeakObjectPtr::IsValid(param_1);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1);
    lVar3 = FUN_14270bb10(uVar2);
    if (lVar3 != 0) {
      uVar2 = FWeakObjectPtr::Get(param_1);
      lVar3 = FUN_14270bb10(uVar2);
      return *(undefined4 *)(lVar3 + 0x108);
    }
  }
  return 0xffffffff;
}



// FUNCTION 142eed490 FUN_142eed490 body=278 status=ok
// SIG undefined FUN_142eed490(void)

char FUN_142eed490(longlong param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return '\x01';
  }
  cVar2 = *(char *)(*(longlong *)(param_1 + 8) + 0x32);
  if (cVar2 == '\x05') {
    cVar2 = '\x01';
    if (*(longlong *)(param_1 + 0x18) == 0) {
      return '\x01';
    }
    uVar7 = 0;
    iVar3 = FUN_142eecda0(*(longlong *)(param_1 + 0x18),param_1 + -0x2b8);
    uVar8 = uVar7;
    if (iVar3 < 1) {
      cVar2 = '\x01';
    }
    else {
      do {
        if ((((-1 < (longlong)uVar7) &&
             ((int)uVar8 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x48))) &&
            (plVar6 = *(longlong **)
                       (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x40) + uVar7 * 8),
            plVar6 != (longlong *)0x0)) && (lVar4 = (**(code **)(*plVar6 + 0x278))(), lVar4 != 0)) {
          uVar5 = FUN_142f2b5a0();
          plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar5);
          if ((plVar6 != (longlong *)0x0) &&
             (cVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6), cVar1 != '\x05')) {
            cVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
          }
        }
        uVar7 = uVar7 + 1;
        uVar8 = (ulonglong)((int)uVar8 + 1);
      } while ((longlong)uVar7 < (longlong)iVar3);
    }
  }
  return cVar2;
}



// FUNCTION 142eed5b0 FUN_142eed5b0 body=278 status=ok
// SIG undefined FUN_142eed5b0(void)

char FUN_142eed5b0(longlong param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return '\x01';
  }
  cVar2 = *(char *)(*(longlong *)(param_1 + 8) + 0x33);
  if (cVar2 == '\x02') {
    cVar2 = '\x01';
    if (*(longlong *)(param_1 + 0x18) == 0) {
      return '\x01';
    }
    uVar7 = 0;
    iVar3 = FUN_142eecda0(*(longlong *)(param_1 + 0x18),param_1 + -0x2b8);
    uVar8 = uVar7;
    if (iVar3 < 1) {
      cVar2 = '\x01';
    }
    else {
      do {
        if ((((-1 < (longlong)uVar7) &&
             ((int)uVar8 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x48))) &&
            (plVar6 = *(longlong **)
                       (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x40) + uVar7 * 8),
            plVar6 != (longlong *)0x0)) && (lVar4 = (**(code **)(*plVar6 + 0x278))(), lVar4 != 0)) {
          uVar5 = FUN_142f2b5a0();
          plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar5);
          if ((plVar6 != (longlong *)0x0) &&
             (cVar1 = (**(code **)(*plVar6 + 0x100))(plVar6), cVar1 != '\x02')) {
            cVar2 = (**(code **)(*plVar6 + 0x100))(plVar6);
          }
        }
        uVar7 = uVar7 + 1;
        uVar8 = (ulonglong)((int)uVar8 + 1);
      } while ((longlong)uVar7 < (longlong)iVar3);
    }
  }
  return cVar2;
}



// FUNCTION 142eed6d0 FUN_142eed6d0 body=84 status=ok
// SIG undefined FUN_142eed6d0(void)

ulonglong FUN_142eed6d0(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = (ulonglong)*(byte *)(param_1 + 0x231);
  if (*(byte *)(param_1 + 0x231) == 3) {
    uVar1 = FWeakObjectPtr::IsValid(param_1 + 0x2a4);
    if ((char)uVar1 != '\0') {
      lVar2 = FWeakObjectPtr::Get(param_1 + 0x2a4);
      uVar1 = 0;
      if (*(byte *)(lVar2 + 0x2ed) != 3) {
        uVar1 = (ulonglong)*(byte *)(lVar2 + 0x2ed);
      }
      return uVar1;
    }
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  return uVar1;
}



// FUNCTION 142eed730 FUN_142eed730 body=500 status=ok
// SIG undefined FUN_142eed730(void)

undefined4 FUN_142eed730(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
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
LAB_142eed7c2:
        plVar8 = &local_38;
        bVar4 = true;
        bVar10 = false;
        lVar9 = local_38;
      }
      else {
        LOCK();
        iVar6 = (int)local_30[1];
        bVar10 = iVar6 == 0;
        if (bVar10) {
          *(int *)(local_30 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar10) {
          LOCK();
          bVar10 = iVar6 == (int)local_30[1];
          if (bVar10) {
            *(int *)(local_30 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar10) {
            if (local_30 != (longlong *)0x0) {
              local_38 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_142eed7c2;
          }
          LOCK();
          iVar6 = (int)local_30[1];
          bVar10 = iVar6 == 0;
          if (bVar10) {
            *(int *)(local_30 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar8 = &local_38;
        local_30 = (longlong *)0x0;
        bVar4 = true;
        bVar10 = false;
        lVar9 = 0;
      }
      goto LAB_142eed7e9;
    }
  }
  plVar8 = &local_28;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  bVar4 = false;
  bVar10 = true;
  lVar9 = 0;
LAB_142eed7e9:
  plVar3 = (longlong *)plVar8[1];
  plVar8[1] = 0;
  *plVar8 = 0;
  plVar8 = plStack_20;
  if ((bVar10) && (plStack_20 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_20 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  plVar8 = local_30;
  if ((bVar4) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (lVar9 != 0) {
    uVar7 = FUN_14203aec0(lVar9,"numChildren");
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
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    return uVar7;
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
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return 0;
}



// FUNCTION 142eed950 FUN_142eed950 body=56 status=ok
// SIG undefined FUN_142eed950(void)

int FUN_142eed950(longlong param_1)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x170) != 0) {
    iVar1 = FUN_14203aec0(*(longlong *)(param_1 + 0x170),"numLines");
    return (int)(float)iVar1;
  }
  return 0;
}



// FUNCTION 142eed990 FUN_142eed990 body=7 status=ok
// SIG undefined FUN_142eed990(void)

undefined4 FUN_142eed990(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x390);
}



// FUNCTION 142eed9a0 FUN_142eed9a0 body=19 status=ok
// SIG undefined FUN_142eed9a0(void)

undefined4 FUN_142eed9a0(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x38) == 0) {
    return 0xffffffff;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x430) != 0) {
    lVar1 = FUN_14270bb10();
    if (lVar1 != 0) {
      return *(undefined4 *)(lVar1 + 0x108);
    }
  }
  return 0xffffffff;
}



// FUNCTION 142eed9c0 FUN_142eed9c0 body=646 status=ok
// SIG undefined FUN_142eed9c0(void)

longlong FUN_142eed9c0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong *puVar11;
  bool bVar12;
  undefined4 local_res8 [4];
  ulonglong local_58;
  longlong *local_50;
  ulonglong local_48;
  longlong *local_40;
  ulonglong local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_48 = 0;
  local_res8[0] = 0;
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (0 < iVar8) {
      local_50 = *(longlong **)(param_1 + 0x10);
      bVar6 = true;
      bVar5 = false;
      local_58 = 0;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_50 + 1);
        bVar12 = uVar3 == 0;
        if (bVar12) {
          *(uint *)(local_50 + 1) = 0;
        }
        else {
          local_48 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar12) {
          iVar8 = (int)local_48;
          LOCK();
          bVar12 = iVar8 == (int)local_50[1];
          if (bVar12) {
            *(int *)(local_50 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar12) {
            local_48 = *(ulonglong *)(param_1 + 8);
            puVar11 = &local_58;
            local_58 = local_48;
            goto LAB_142eeda58;
          }
          local_48 = 0;
          LOCK();
          uVar3 = *(uint *)(local_50 + 1);
          bVar12 = uVar3 == 0;
          if (bVar12) {
            *(uint *)(local_50 + 1) = 0;
          }
          else {
            local_48 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_50 = (longlong *)0x0;
      }
      local_48 = 0;
      puVar11 = &local_58;
      goto LAB_142eeda58;
    }
  }
  puVar11 = &local_38;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  bVar6 = false;
  bVar5 = true;
LAB_142eeda58:
  plVar4 = (longlong *)puVar11[1];
  puVar11[1] = 0;
  local_40 = plVar4;
  *puVar11 = 0;
  plVar4 = plStack_30;
  if ((bVar5) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  plVar4 = local_50;
  if ((bVar6) && (local_50 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_50 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  uVar7 = local_48;
  if (local_48 != 0) {
    FUN_14172a070(local_res8,0);
    local_28 = *(undefined8 *)(uVar7 + 0x78);
    plVar4 = *(longlong **)(uVar7 + 0x80);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_20 = plVar4;
    lVar9 = FUN_14203bcd0(local_28);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_20)();
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    FUN_14172a400(local_res8);
    if (lVar9 != 0) {
      lVar10 = AEquipmentSkin::GetPrivateStaticClass();
      plVar4 = local_40;
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_40 + 1;
          lVar10 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_40 + 8))(local_40,1);
            }
          }
        }
        return lVar9;
      }
    }
  }
  plVar4 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return 0;
}



// FUNCTION 142eedc50 FUN_142eedc50 body=60 status=ok
// SIG undefined FUN_142eedc50(void)

float FUN_142eedc50(longlong param_1)

{
  if (*(char *)(param_1 + 0x1e1) == '\0') {
    return (float)*(int *)(param_1 + 0x378) * *(float *)(param_1 + 0x36c);
  }
  if (*(char *)(param_1 + 0x1e1) == '\x01') {
    return (float)*(int *)(param_1 + 0x37c) * *(float *)(param_1 + 0x368);
  }
  return 0.0;
}



// FUNCTION 142eedc90 FUN_142eedc90 body=9 status=ok
// SIG undefined FUN_142eedc90(void)

undefined4 FUN_142eedc90(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x178);
}



// FUNCTION 142eedca0 GetStepSize body=9 status=ok
// SIG undefined GetStepSize(void)

undefined4 UAudioMaterialSlider::GetStepSize(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x2e4);
}



// FUNCTION 142eedcb0 FUN_142eedcb0 body=511 status=ok
// SIG undefined FUN_142eedcb0(void)

undefined4 FUN_142eedcb0(longlong param_1)

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
  undefined4 uVar10;
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
LAB_142eedd4d:
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
            goto LAB_142eedd4d;
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
      goto LAB_142eedd74;
    }
  }
  plVar7 = &local_38;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_142eedd74:
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
    uVar10 = FUN_14203c6e0(lVar8);
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
    return uVar10;
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
  return 0;
}



// FUNCTION 142eedeb0 FUN_142eedeb0 body=6 status=ok
// SIG undefined FUN_142eedeb0(void)

undefined4 FUN_142eedeb0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// FUNCTION 142eedee0 FUN_142eedee0 body=39 status=ok
// SIG undefined FUN_142eedee0(void)

undefined8 FUN_142eedee0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  uVar1 = FUN_142eb7a00();
  puVar2 = (undefined8 *)FUN_142eed030(param_1,local_18,uVar1);
  return *puVar2;
}



// FUNCTION 142eedf10 FUN_142eedf10 body=41 status=ok
// SIG undefined FUN_142eedf10(void)

void FUN_142eedf10(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *param_1;
  uVar2 = (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x000142eedf36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x40))(param_1,uVar2);
  return;
}



// FUNCTION 142eedf40 FUN_142eedf40 body=22 status=ok
// SIG undefined FUN_142eedf40(void)

int FUN_142eedf40(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  
  lVar3 = *(longlong *)(param_1 + 0x2e8);
  if (lVar3 == 0) {
    return -1;
  }
  puVar1 = *(undefined8 **)(lVar3 + 0xca8);
  if (puVar1 != (undefined8 *)0x0) {
    iVar7 = 0;
    if (0 < *(int *)(lVar3 + 0xc80)) {
      lVar8 = 0;
      do {
        puVar2 = *(undefined8 **)(lVar8 + *(longlong *)(lVar3 + 0xc78));
        if (*(int *)(puVar1 + 1) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = (undefined2 *)*puVar1;
        }
        if (*(int *)(puVar2 + 1) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = (undefined2 *)*puVar2;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
        if (iVar4 == 0) {
          return iVar7;
        }
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 0x10;
      } while (iVar7 < *(int *)(lVar3 + 0xc80));
    }
    return -1;
  }
  return -1;
}



// FUNCTION 142eedf60 GetElapsedTime body=9 status=ok
// SIG undefined GetElapsedTime(void)

undefined4 FCurlHttpRequest::GetElapsedTime(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x2e8);
}



// FUNCTION 142eedf70 FUN_142eedf70 body=8 status=ok
// SIG undefined FUN_142eedf70(void)

undefined8 FUN_142eedf70(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x2e8);
}



// FUNCTION 142eedf80 FUN_142eedf80 body=8 status=ok
// SIG undefined FUN_142eedf80(void)

undefined8 FUN_142eedf80(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x2f0);
}



// FUNCTION 142eedf90 FUN_142eedf90 body=542 status=ok
// SIG undefined FUN_142eedf90(void)

undefined8 * FUN_142eedf90(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int local_res8 [2];
  undefined8 local_a8;
  undefined1 local_a0 [24];
  undefined1 local_88 [8];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_70 [8];
  longlong local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_48 [8];
  longlong local_40;
  undefined8 local_30;
  longlong local_28 [2];
  
  plVar1 = (longlong *)(param_1 + 0x198);
  piVar2 = (int *)FUN_142eea500(plVar1,local_res8);
  if (*piVar2 == -1) {
    plVar1 = (longlong *)(param_1 + 0x1e8);
    piVar2 = (int *)FUN_142eea340(plVar1,local_res8,param_3);
    if (*piVar2 == -1) {
      _guard_xfg_dispatch_icall_nop(param_2,0,0x70);
      FUN_142eddc70(param_2);
    }
    else {
      FUN_142eddc70(local_88);
      FUN_142eea340(plVar1,local_res8,param_3);
      lVar4 = 0;
      lVar3 = lVar4;
      if (local_res8[0] != -1) {
        lVar3 = (longlong)local_res8[0] * 0xb0 + *plVar1;
      }
      local_80 = *(undefined4 *)(lVar3 + 0x28);
      local_7c = *(undefined4 *)(lVar3 + 0x2c);
      local_78 = *(undefined4 *)(lVar3 + 0x30);
      local_a8 = *(undefined8 *)(lVar3 + 0x38);
      FString::FString(local_a0,lVar3 + 0x40);
      FSoftObjectPath::operator=(local_70,&local_a8);
      FUN_142eea340(plVar1,local_res8,param_3);
      if (local_res8[0] != -1) {
        lVar4 = (longlong)local_res8[0] * 0xb0 + *plVar1;
      }
      local_58 = *(undefined4 *)(lVar4 + 0x50);
      local_54 = *(undefined4 *)(lVar4 + 0x54);
      local_50 = *(undefined4 *)(lVar4 + 0x58);
      local_a8 = *(undefined8 *)(lVar4 + 0x60);
      FString::FString(local_a0,lVar4 + 0x68);
      FSoftObjectPath::operator=(local_48,&local_a8);
      *param_2 = &PTR_FUN_1459920e8;
      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_2 + 1,&local_80);
      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_2 + 6,&local_58);
      param_2[0xb] = local_30;
      FString::FString(param_2 + 0xc,local_28);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      if (local_40 != 0) {
        FMemory::Free();
      }
      if (local_68 != 0) {
        FMemory::Free();
      }
    }
  }
  else {
    FUN_142eea500(plVar1);
    if (local_res8[0] == -1) {
      lVar3 = 0;
    }
    else {
      lVar3 = (longlong)local_res8[0] * 0xa0 + *plVar1;
    }
    *param_2 = &PTR_FUN_1459920e8;
    TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_2 + 1,lVar3 + 0x30);
    TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_2 + 6,lVar3 + 0x58);
    param_2[0xb] = *(undefined8 *)(lVar3 + 0x80);
    FString::FString(param_2 + 0xc,lVar3 + 0x88);
  }
  if (*(longlong *)(param_3 + 0x18) != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142eee1b0 FUN_142eee1b0 body=16 status=ok
// SIG undefined FUN_142eee1b0(void)

undefined8 FUN_142eee1b0(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  bool bVar14;
  longlong lStack_e8;
  longlong *plStack_e0;
  ulonglong uStack_d8;
  longlong *plStack_d0;
  ulonglong uStack_c8;
  longlong *plStack_c0;
  longlong *plStack_b8;
  undefined8 uStack_b0;
  longlong lStack_a8;
  undefined8 uStack_a0;
  ulonglong uStack_98;
  longlong *plStack_90;
  ulonglong uStack_88;
  longlong *plStack_80;
  ulonglong uStack_78;
  longlong *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong *plStack_58;
  uint uStack_50;
  undefined8 uStack_48;
  
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (lVar3 == 0) {
    return 0;
  }
  uVar12 = 0;
  if (*(longlong *)(lVar3 + 0x2b0) != 0) {
    return *(undefined8 *)(lVar3 + 0x2b0);
  }
  lVar8 = *(longlong *)(lVar3 + 0x38);
  if (lVar8 == 0) {
    puVar9 = &uStack_78;
    uStack_78 = 0;
    plStack_70 = (longlong *)0x0;
    bVar5 = false;
    bVar4 = true;
    uStack_98 = uVar12;
  }
  else {
    if ((*(longlong *)(lVar8 + 0x28) == 0) || (*(longlong *)(lVar8 + 0x30) == 0)) {
LAB_142eb7fb4:
      puVar9 = &uStack_88;
      uStack_88 = 0;
      plStack_80 = (longlong *)0x0;
      bVar5 = false;
      bVar4 = true;
      uStack_c8 = uVar12;
    }
    else {
      piVar1 = (int *)(*(longlong *)(lVar8 + 0x30) + 8);
      LOCK();
      iVar13 = *piVar1;
      if (iVar13 == 0) {
        *piVar1 = 0;
        iVar13 = 0;
      }
      UNLOCK();
      if (iVar13 < 1) goto LAB_142eb7fb4;
      plStack_d0 = *(longlong **)(lVar8 + 0x30);
      bVar5 = true;
      bVar4 = false;
      uStack_d8 = 0;
      if (plStack_d0 != (longlong *)0x0) {
        LOCK();
        uVar2 = *(uint *)(plStack_d0 + 1);
        bVar14 = uVar2 == 0;
        if (bVar14) {
          *(uint *)(plStack_d0 + 1) = 0;
          uVar7 = uVar12;
        }
        else {
          uVar7 = (ulonglong)uVar2;
        }
        UNLOCK();
        while (!bVar14) {
          iVar13 = (int)uVar7;
          LOCK();
          bVar14 = iVar13 == (int)plStack_d0[1];
          if (bVar14) {
            *(int *)(plStack_d0 + 1) = iVar13 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uStack_d8 = *(ulonglong *)(lVar8 + 0x28);
            puVar9 = &uStack_d8;
            uStack_c8 = uStack_d8;
            goto LAB_142eb7fc8;
          }
          uVar7 = 0;
          LOCK();
          uVar2 = *(uint *)(plStack_d0 + 1);
          bVar14 = uVar2 == 0;
          if (bVar14) {
            *(uint *)(plStack_d0 + 1) = 0;
          }
          else {
            uVar7 = (ulonglong)uVar2;
          }
          UNLOCK();
        }
        plStack_d0 = (longlong *)0x0;
      }
      puVar9 = &uStack_d8;
      uStack_c8 = 0;
    }
LAB_142eb7fc8:
    plVar11 = (longlong *)puVar9[1];
    puVar9[1] = 0;
    plVar10 = plStack_80;
    plStack_c0 = plVar11;
    *puVar9 = 0;
    if ((bVar4) && (plStack_80 != (longlong *)0x0)) {
      LOCK();
      plVar11 = plStack_80 + 1;
      lVar8 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plStack_80 + 8))(plStack_80,1);
        }
      }
    }
    plVar11 = plStack_d0;
    if ((bVar5) && (plStack_d0 != (longlong *)0x0)) {
      LOCK();
      plVar10 = plStack_d0 + 1;
      lVar8 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_d0)(plStack_d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
        }
      }
    }
    bVar5 = true;
    bVar4 = false;
    puVar9 = &uStack_c8;
    uStack_98 = uStack_c8;
  }
  plVar11 = (longlong *)puVar9[1];
  puVar9[1] = 0;
  plVar10 = plStack_70;
  plStack_90 = plVar11;
  *puVar9 = 0;
  if ((bVar4) && (plStack_70 != (longlong *)0x0)) {
    LOCK();
    plVar11 = plStack_70 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plStack_70 + 8))(plStack_70,1);
      }
    }
  }
  plVar11 = plStack_c0;
  if ((bVar5) && (plStack_c0 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plStack_c0 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
      }
    }
  }
  bVar5 = false;
  bVar4 = false;
  if (uStack_98 == 0) goto LAB_142eb8345;
  uStack_68 = 0xffffffffffffffff;
  uStack_60 = 0xffffffffffffffff;
  plStack_58 = (longlong *)0x0;
  uStack_50 = 0;
  FUN_14203acd0(uStack_98,"stage",&uStack_68);
  FUN_140ad4c90(lVar3,&lStack_e8);
  lVar8 = lStack_e8;
  plVar11 = plStack_e0;
  if (lStack_e8 != 0) {
    lStack_a8 = 0;
    uStack_a0 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&lStack_a8,0);
    FGenericPlatformString::Memcpy(lStack_a8,L"stage",0xc);
    bVar5 = true;
    bVar4 = true;
    plStack_b8 = (longlong *)0x0;
    uStack_b0 = 0;
    uVar6 = UPlatformGameInstance::StaticClass();
    plVar11 = plStack_e0;
    if (plStack_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
      UNLOCK();
      lVar8 = lStack_e8;
    }
    uVar7 = FUN_14203ba40(lVar8,uVar6,&uStack_68,&lStack_a8,&plStack_b8);
    if (uVar7 == 0) {
LAB_142eb8238:
      uVar7 = uVar12;
    }
    else {
      lVar8 = UPlatformGameInstance::StaticClass();
      if ((*(int *)(*(longlong *)(uVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      if (!bVar14) goto LAB_142eb8238;
    }
    plVar10 = plStack_e0;
    uVar12 = uVar7;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar11 + 1;
      lVar8 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      plVar11 = plStack_e0;
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_e0)(plStack_e0);
        plVar11 = plStack_e0;
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plStack_e0 + 8))(plStack_e0,1);
        }
      }
    }
  }
  *(ulonglong *)(lVar3 + 0x2b0) = uVar12;
  if (bVar4) {
    plVar10 = plStack_b8;
    for (iVar13 = (int)uStack_b0; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (plStack_b8 != (longlong *)0x0) {
      FMemory::Free(plStack_b8);
    }
  }
  if ((bVar5) && (lStack_a8 != 0)) {
    FMemory::Free();
  }
  plVar10 = plStack_e0;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar11 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_e0)(plStack_e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plStack_e0 + 8))(plStack_e0,1);
      }
    }
  }
  if ((uStack_50 >> 6 & 1) != 0) {
    (**(code **)(*plStack_58 + 0x10))(plStack_58,&uStack_68,uStack_48);
  }
LAB_142eb8345:
  plVar11 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_90 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
  return *(undefined8 *)(lVar3 + 0x2b0);
}



// FUNCTION 142eee1c0 FUN_142eee1c0 body=120 status=ok
// SIG undefined FUN_142eee1c0(void)

longlong FUN_142eee1c0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x30);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x30);
    lVar3 = FUN_14270bb10(uVar2);
    if (lVar3 != 0) {
      uVar2 = FWeakObjectPtr::Get(param_1 + 0x30);
      lVar3 = FUN_14270bb10(uVar2);
      uVar4 = *(uint *)(lVar3 + 0x108);
      goto LAB_142eee20e;
    }
  }
  uVar4 = 0xffffffff;
LAB_142eee20e:
  if (3 < uVar4) {
    uVar4 = 0;
  }
  return *(longlong *)(param_1 + 0x180) + 0xe8 + (longlong)(int)uVar4 * 0x10;
}



// FUNCTION 142eee240 FUN_142eee240 body=526 status=ok
// SIG undefined FUN_142eee240(void)

undefined8 FUN_142eee240(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_30 = *(longlong **)(param_1 + 0x10);
      local_38 = 0;
      if (local_30 == (longlong *)0x0) {
LAB_142eee2dd:
        plVar7 = &local_38;
        bVar4 = true;
        bVar10 = false;
        lVar9 = local_38;
      }
      else {
        LOCK();
        iVar6 = (int)local_30[1];
        bVar10 = iVar6 == 0;
        if (bVar10) {
          *(int *)(local_30 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar10) {
          LOCK();
          bVar10 = iVar6 == (int)local_30[1];
          if (bVar10) {
            *(int *)(local_30 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar10) {
            if (local_30 != (longlong *)0x0) {
              local_38 = *(longlong *)(param_1 + 8);
            }
            goto LAB_142eee2dd;
          }
          LOCK();
          iVar6 = (int)local_30[1];
          bVar10 = iVar6 == 0;
          if (bVar10) {
            *(int *)(local_30 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_38;
        local_30 = (longlong *)0x0;
        bVar4 = true;
        bVar10 = false;
        lVar9 = 0;
      }
      goto LAB_142eee304;
    }
  }
  plVar7 = &local_28;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  bVar4 = false;
  bVar10 = true;
  lVar9 = 0;
LAB_142eee304:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_20;
  if ((bVar10) && (plStack_20 != (longlong *)0x0)) {
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
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    uVar8 = FUN_1404b03b0();
    FText::FText(param_2,uVar8);
  }
  else {
    FUN_14203ce00(lVar9,param_2);
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



// FUNCTION 142eee450 FUN_142eee450 body=243 status=ok
// SIG undefined FUN_142eee450(void)

undefined8 FUN_142eee450(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  bVar6 = *(longlong *)(param_1 + 0x170) == 0;
  if (bVar6) {
    uVar5 = FUN_1404b03b0();
    uVar5 = FText::FText(local_38,uVar5);
  }
  else {
    uVar5 = FUN_14203ce00(*(longlong *)(param_1 + 0x170),local_20);
  }
  FText::FText(param_2,uVar5);
  if (bVar6) {
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  if ((!bVar6) && (local_18 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142eee550 FUN_142eee550 body=71 status=ok
// SIG undefined FUN_142eee550(void)

undefined8 FUN_142eee550(longlong param_1)

{
  double dVar1;
  
  if (*(longlong *)(param_1 + 0x170) != 0) {
    dVar1 = (double)FUN_14203af20(*(longlong *)(param_1 + 0x170),"textHeight");
    dVar1 = dVar1 + (double)*(float *)(param_1 + 0x280);
    return CONCAT44((int)((ulonglong)dVar1 >> 0x20),(float)dVar1);
  }
  return 0;
}



// FUNCTION 142eee5a0 FUN_142eee5a0 body=49 status=ok
// SIG undefined FUN_142eee5a0(void)

float FUN_142eee5a0(longlong param_1)

{
  double dVar1;
  
  if (*(longlong *)(param_1 + 0x170) != 0) {
    dVar1 = (double)FUN_14203af20(*(longlong *)(param_1 + 0x170),"width");
    return (float)dVar1;
  }
  return 0.0;
}



// FUNCTION 142eee5e0 FUN_142eee5e0 body=522 status=ok
// SIG undefined FUN_142eee5e0(void)

float FUN_142eee5e0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  double dVar4;
  bool bVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      local_40 = *(longlong **)(param_1 + 0x10);
      local_48 = 0;
      if (local_40 == (longlong *)0x0) {
LAB_142eee67d:
        plVar8 = &local_48;
        bVar5 = true;
        bVar10 = false;
        lVar9 = local_48;
      }
      else {
        LOCK();
        iVar7 = (int)local_40[1];
        bVar10 = iVar7 == 0;
        if (bVar10) {
          *(int *)(local_40 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        while (!bVar10) {
          LOCK();
          bVar10 = iVar7 == (int)local_40[1];
          if (bVar10) {
            *(int *)(local_40 + 1) = iVar7 + 1;
          }
          UNLOCK();
          if (bVar10) {
            if (local_40 != (longlong *)0x0) {
              local_48 = *(longlong *)(param_1 + 8);
            }
            goto LAB_142eee67d;
          }
          LOCK();
          iVar7 = (int)local_40[1];
          bVar10 = iVar7 == 0;
          if (bVar10) {
            *(int *)(local_40 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
        }
        plVar8 = &local_48;
        local_40 = (longlong *)0x0;
        bVar5 = true;
        bVar10 = false;
        lVar9 = 0;
      }
      goto LAB_142eee6a4;
    }
  }
  plVar8 = &local_38;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  bVar5 = false;
  bVar10 = true;
  lVar9 = 0;
LAB_142eee6a4:
  plVar3 = (longlong *)plVar8[1];
  plVar8[1] = 0;
  *plVar8 = 0;
  plVar8 = plStack_30;
  if ((bVar10) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  plVar8 = local_40;
  if ((bVar5) && (local_40 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (lVar9 != 0) {
    dVar4 = (double)FUN_14203af20(lVar9,"textWidth");
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
    return (float)dVar4;
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
  return 0.0;
}



// FUNCTION 142eee7f0 FUN_142eee7f0 body=49 status=ok
// SIG undefined FUN_142eee7f0(void)

float FUN_142eee7f0(longlong param_1)

{
  double dVar1;
  
  if (*(longlong *)(param_1 + 0x170) != 0) {
    dVar1 = (double)FUN_14203af20(*(longlong *)(param_1 + 0x170),"textWidth");
    return (float)dVar1;
  }
  return 0.0;
}



// FUNCTION 142eee830 FUN_142eee830 body=500 status=ok
// SIG undefined FUN_142eee830(void)

undefined4 FUN_142eee830(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
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
LAB_142eee8c2:
        plVar8 = &local_38;
        bVar4 = true;
        bVar10 = false;
        lVar9 = local_38;
      }
      else {
        LOCK();
        iVar6 = (int)local_30[1];
        bVar10 = iVar6 == 0;
        if (bVar10) {
          *(int *)(local_30 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar10) {
          LOCK();
          bVar10 = iVar6 == (int)local_30[1];
          if (bVar10) {
            *(int *)(local_30 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar10) {
            if (local_30 != (longlong *)0x0) {
              local_38 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_142eee8c2;
          }
          LOCK();
          iVar6 = (int)local_30[1];
          bVar10 = iVar6 == 0;
          if (bVar10) {
            *(int *)(local_30 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar8 = &local_38;
        local_30 = (longlong *)0x0;
        bVar4 = true;
        bVar10 = false;
        lVar9 = 0;
      }
      goto LAB_142eee8e9;
    }
  }
  plVar8 = &local_28;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  bVar4 = false;
  bVar10 = true;
  lVar9 = 0;
LAB_142eee8e9:
  plVar3 = (longlong *)plVar8[1];
  plVar8[1] = 0;
  *plVar8 = 0;
  plVar8 = plStack_20;
  if ((bVar10) && (plStack_20 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_20 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  plVar8 = local_30;
  if ((bVar4) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (lVar9 != 0) {
    uVar7 = FUN_14203aec0(lVar9,"totalFrames");
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
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    return uVar7;
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
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return 0;
}



// FUNCTION 142eeea30 FUN_142eeea30 body=8 status=ok
// SIG undefined FUN_142eeea30(void)

undefined8 FUN_142eeea30(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x2d8);
}



// FUNCTION 142eeea40 FUN_142eeea40 body=518 status=ok
// SIG undefined FUN_142eeea40(void)

undefined4 FUN_142eeea40(longlong param_1)

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
  undefined4 uVar10;
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
LAB_142eeeadd:
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
            goto LAB_142eeeadd;
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
      goto LAB_142eeeb04;
    }
  }
  plVar7 = &local_38;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
  lVar8 = 0;
LAB_142eeeb04:
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
    uVar10 = FUN_14203af20(lVar8,"width");
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
    return uVar10;
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
  return 0;
}



// FUNCTION 142eeec50 FUN_142eeec50 body=56 status=ok
// SIG undefined FUN_142eeec50(void)

undefined8 FUN_142eeec50(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x30);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x000142eeec79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar2 + 0x148))(plVar2);
    return uVar3;
  }
  return 0;
}



// FUNCTION 142eeec90 FUN_142eeec90 body=271 status=ok
// SIG undefined FUN_142eeec90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142eeec90(longlong *param_1,undefined8 *param_2)

{
  float fVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_res10 [8];
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  
  uVar2 = DAT_1468b5d98;
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = uVar2;
  lVar3 = (**(code **)(*param_1 + 0x2a0))();
  if (lVar3 != 0) {
    USlateBlueprintLibrary::LocalToViewport
              (param_1,(float *)((longlong)param_1 + 0x2c4),
               CONCAT44(*(float *)(param_1 + 0x58) * *(float *)(param_1 + 0x59),
                        *(float *)((longlong)param_1 + 0x2c4) * *(float *)((longlong)param_1 + 700))
               ,&local_res8,local_res10);
    FUN_142701ac0(lVar3,local_res8,local_resc,&local_18,&local_28,0,1);
    fVar1 = *(float *)(param_1 + 0x57);
    *param_2 = CONCAT44(local_24 * fVar1 + local_14,local_28 * fVar1 + local_18);
    *(float *)(param_2 + 1) = local_20 * fVar1 + local_10;
  }
  return param_2;
}



// FUNCTION 142eeeda0 FUN_142eeeda0 body=513 status=ok
// SIG undefined FUN_142eeeda0(void)

undefined8 * FUN_142eeeda0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

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
  
  lVar8 = 0;
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
      if (local_40 != (longlong *)0x0) {
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
            lVar8 = *(longlong *)(param_1 + 0x28);
            plVar7 = &local_48;
            bVar4 = true;
            bVar9 = false;
            local_48 = lVar8;
            goto LAB_142eeee58;
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
        local_40 = (longlong *)0x0;
      }
      lVar8 = 0;
      plVar7 = &local_48;
      bVar4 = true;
      bVar9 = false;
      goto LAB_142eeee58;
    }
  }
  plVar7 = &local_38;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
LAB_142eeee58:
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
    *param_2 = DAT_1468b5d88;
  }
  else {
    FUN_14203d720(lVar8,param_2,*param_3);
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



// FUNCTION 142eeefb0 FUN_142eeefb0 body=109 status=ok
// SIG undefined FUN_142eeefb0(void)

void FUN_142eeefb0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x170);
    plVar1 = plVar2 + *(int *)(param_1 + 0x178);
    if (plVar2 != plVar1) {
      while (*(longlong *)(*plVar2 + 0x378) != param_3) {
        plVar2 = plVar2 + 1;
        if (plVar2 == plVar1) {
          return;
        }
      }
      if (*plVar2 != 0) {
        FUN_142135e10();
        FUN_142137cd0(*plVar2,0);
      }
    }
  }
  return;
}



// FUNCTION 142eef020 FUN_142eef020 body=107 status=ok
// SIG undefined FUN_142eef020(void)

void FUN_142eef020(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((param_1 != 0) &&
     (plVar2 = (longlong *)UWidgetComponent::GetRenderTarget(), plVar2 != (longlong *)0x0)) {
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
      (**(code **)(*plVar2 + 0x7b8))(plVar2,param_2);
    }
  }
  return;
}



// FUNCTION 142eef090 FUN_142eef090 body=109 status=ok
// SIG undefined FUN_142eef090(void)

void FUN_142eef090(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((param_1 != 0) &&
     (plVar2 = (longlong *)UWidgetComponent::GetRenderTarget(), plVar2 != (longlong *)0x0)) {
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
                    /* WARNING: Could not recover jumptable at 0x000142eef0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x7c0))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 142eef110 FUN_142eef110 body=160 status=ok
// SIG undefined FUN_142eef110(void)

void FUN_142eef110(longlong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
    if (1 < *(int *)(param_1 + 0x18)) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x10);
    }
    uVar1 = *(undefined8 *)
             (*(longlong *)(param_1 + 0x10) + -8 + (longlong)*(int *)(param_1 + 0x18) * 8);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink();
    if ((*(char *)(param_1 + 0x39) == '\0') && (*(int *)(param_1 + 0x18) < 1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
    if (bVar2) {
      FUN_142f024b0(param_1,uVar1,0);
    }
  }
  return;
}



// FUNCTION 142eef1c0 FUN_142eef1c0 body=641 status=ok
// SIG undefined FUN_142eef1c0(void)

void FUN_142eef1c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong local_48;
  uint local_40;
  uint local_3c;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  if ((*(int *)(param_1 + 0x18) < 1) ||
     (*(char *)(*(longlong *)
                 (*(longlong *)(param_1 + 0x10) + -8 + (longlong)*(int *)(param_1 + 0x18) * 8) +
               0x50) == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  uVar5 = 0;
  local_48 = 0;
  local_3c = 0;
  uVar7 = uVar5;
  if (bVar2) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
    iVar3 = *(int *)(param_1 + 0x18);
    uVar8 = uVar5;
    while (0 < iVar3) {
      lVar1 = *(longlong *)
               (*(longlong *)(param_1 + 0x10) + -8 + (longlong)*(int *)(param_1 + 0x18) * 8);
      if (*(char *)(lVar1 + 0x50) == '\0') break;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x10);
      if (lVar1 != 0) {
        iVar3 = (int)uVar5;
        local_40 = iVar3 + 1;
        if ((int)uVar8 < (int)local_40) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,uVar5);
          uVar8 = (ulonglong)local_3c;
          uVar7 = local_48;
        }
        uVar5 = (ulonglong)local_40;
        *(longlong *)(uVar7 + (longlong)iVar3 * 8) = lVar1;
      }
      iVar3 = *(int *)(param_1 + 0x18);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
  iVar3 = *(int *)(param_1 + 0x18);
  while (1 < iVar3) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x10);
    iVar3 = *(int *)(param_1 + 0x18);
  }
  if ((*(char *)(param_1 + 0x39) == '\0') && (iVar3 != 0)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x10);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
  if (bVar2) {
    if (param_2 != 0) {
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
      iVar3 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar3 + 1;
      if (*(int *)(param_1 + 0x1c) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar3);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 8) = param_2;
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
      uVar6 = (uint)uVar5;
      while (0 < (int)uVar6) {
        iVar3 = (int)uVar5;
        uVar6 = iVar3 - 1;
        lVar1 = *(longlong *)(uVar7 + (longlong)(int)uVar6 * 8);
        iVar4 = (iVar3 - uVar6) + -1;
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(uVar7 + (longlong)(int)uVar6 * 8),
                     (void *)(uVar7 + (longlong)iVar3 * 8),(longlong)iVar4 << 3);
        }
        local_40 = uVar6;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&local_48);
        if (lVar1 != 0) {
          AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
          iVar3 = *(int *)(param_1 + 0x18);
          *(int *)(param_1 + 0x18) = iVar3 + 1;
          if (*(int *)(param_1 + 0x1c) < iVar3 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar3);
          }
          *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 8) = lVar1;
          ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
        }
        uVar5 = (ulonglong)local_40;
        uVar7 = local_48;
        uVar6 = local_40;
      }
    }
  }
  else {
    FUN_142f024b0(param_1,param_2,0);
  }
  if (uVar7 == 0) {
    return;
  }
  FMemory::Free(uVar7);
  return;
}



// FUNCTION 142eef450 FUN_142eef450 body=216 status=ok
// SIG undefined FUN_142eef450(void)

void FUN_142eef450(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong **local_res8;
  longlong *local_38;
  int local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  longlong ***ppplStack_20;
  
  uVar4 = 0;
  local_38 = (longlong *)0x0;
  local_2c = 0;
  local_30 = 0;
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    local_res8 = &local_38;
    ppplStack_20 = &local_res8;
    local_28 = &LAB_142ee3650;
    FUN_1420f6930(*(longlong *)(param_1 + 0x1a0),&local_28,0);
  }
  uVar3 = (ulonglong)((longlong)(local_38 + local_30) + (7 - (longlong)local_38)) >> 3;
  if (local_38 + local_30 < local_38) {
    uVar3 = uVar4;
  }
  plVar2 = local_38;
  if (uVar3 != 0) {
    do {
      plVar1 = (longlong *)*plVar2;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x4b8))(plVar1,param_2);
      }
      plVar2 = plVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar3);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}



// FUNCTION 142eef530 FUN_142eef530 body=187 status=ok
// SIG undefined FUN_142eef530(void)

undefined8 FUN_142eef530(longlong param_1,longlong param_2)

{
  char cVar1;
  float fVar2;
  
  cVar1 = (**(code **)(*(longlong *)(param_1 + 0x170) + 0x40))();
  if (((cVar1 != '\0') && (1e-08 < ABS(*(float *)(param_2 + 4)))) &&
     (((*(longlong *)(param_2 + 8) == DAT_146b3e0a0 && (*(char *)(param_1 + 0x338) == '\x01')) ||
      ((*(longlong *)(param_2 + 8) == DAT_146b3e098 && (*(char *)(param_1 + 0x338) == '\0')))))) {
    fVar2 = *(float *)(param_1 + 0x31c);
    *(undefined4 *)(param_1 + 0x348) = 0;
    *(undefined8 *)(param_1 + 0x340) = 0;
    if (0.0 < *(float *)(param_2 + 4)) {
      fVar2 = -fVar2;
    }
    FUN_142f0fa80(param_1,fVar2 + *(float *)(param_1 + 0x310),1);
    return 1;
  }
  return 0;
}



// FUNCTION 142eef5f0 FUN_142eef5f0 body=450 status=ok
// SIG undefined FUN_142eef5f0(void)

void FUN_142eef5f0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (((param_1[0x59] == 0) || (param_1[0x5a] == 0)) ||
     (((longlong *)param_1[0x5a] != (longlong *)0x0 &&
      ((cVar3 = (**(code **)(*(longlong *)param_1[0x5a] + 0x90))(), cVar3 != '\0' &&
       (cVar3 = (**(code **)(param_1[0x41] + 0x40))(), cVar3 != '\0')))))) {
    if ((param_1[0x59] != 0) && (param_1[0x5a] != 0)) {
      cVar3 = (**(code **)(*(longlong *)param_1[0x5a] + 0x80))();
      plVar6 = (longlong *)0x0;
      if (cVar3 == '\0') {
        plVar5 = plVar6;
        if (param_1[0x59] != 0) {
          plVar5 = (longlong *)param_1[0x5a];
        }
        (**(code **)(*plVar5 + 0x88))(plVar5,1);
      }
      plVar5 = plVar6;
      if (param_1[0x59] != 0) {
        plVar5 = (longlong *)param_1[0x5a];
      }
      cVar3 = (**(code **)(*plVar5 + 0x80))();
      if (cVar3 != '\0') {
        if (*(char *)((longlong)param_1 + 0x231) == '\x02') {
          plVar5 = plVar6;
          if (param_1[0x59] != 0) {
            plVar5 = (longlong *)param_1[0x5a];
          }
          (**(code **)(*plVar5 + 0x50))(plVar5,param_1,0,1);
        }
        plVar5 = *(longlong **)(param_2 + 0x20);
        iVar2 = *(int *)(param_2 + 8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        if ((iVar2 == -1) && (lVar4 = (**(code **)(*param_1 + 0x2a8))(param_1), lVar4 != 0)) {
          (**(code **)(*param_1 + 0x2a8))(param_1);
        }
        if (param_1[0x59] != 0) {
          plVar6 = (longlong *)param_1[0x5a];
        }
        (**(code **)(*plVar6 + 0x78))(plVar6,param_1);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar5 + 1;
          lVar4 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
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
      }
    }
    cVar3 = (**(code **)(param_1[0x41] + 0x40))();
    if (cVar3 != '\0') {
      FUN_142eb4390(param_1 + 0x4c,param_1,param_2);
    }
  }
  return;
}



// FUNCTION 142eef7c0 FUN_142eef7c0 body=73 status=ok
// SIG undefined FUN_142eef7c0(void)

void FUN_142eef7c0(longlong param_1)

{
  byte bVar1;
  
  FUN_142eef5f0();
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    bVar1 = FUN_142105930();
    if (*(longlong *)(param_1 + 0x2e8) != 0) {
      UCheckBox::SetCheckedState(*(longlong *)(param_1 + 0x2e8),bVar1 ^ 1);
    }
  }
  FUN_140757f80(param_1 + 0x2b8,param_1);
  return;
}



// FUNCTION 142eef810 FUN_142eef810 body=62 status=ok
// SIG undefined FUN_142eef810(void)

void FUN_142eef810(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)(param_1 + 0x208) + 0x40))();
  if (cVar1 != '\0') {
    FUN_142eb4390(param_1 + 0x260,param_1,param_2);
  }
  return;
}



// FUNCTION 142eef850 FUN_142eef850 body=209 status=ok
// SIG undefined FUN_142eef850(void)

undefined8 FUN_142eef850(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_18 [16];
  
  if (((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2a0 == *param_2)) &&
     (*(int *)(param_1 + 0x100) != -1)) {
    FUN_142eed030(param_1 + -0x170,local_18);
    if (*(longlong *)(param_1 + 0x1d8) != 0) {
      lVar1 = FWeakObjectPtr::Get(param_1 + 0x1d0);
      if (lVar1 != 0) {
        lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 0x1d8));
        if (lVar1 != 0) {
          plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x1d0);
          uVar3 = FUN_14178ac60(plVar2,*(undefined8 *)(param_1 + 0x1d8));
          (**(code **)(*plVar2 + 0x208))(plVar2,uVar3,local_18);
        }
      }
    }
    return 1;
  }
  uVar3 = FUN_142ef66d0(param_1 + -0x170);
  return uVar3;
}



// FUNCTION 142eef930 FUN_142eef930 body=508 status=ok
// SIG undefined FUN_142eef930(void)

char FUN_142eef930(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  float fVar4;
  
  cVar1 = (**(code **)(*param_1 + 0x40))();
  if (cVar1 != '\0') {
    if ((char)param_1[0x39] == '\x01') {
      if (*(char *)((longlong)param_2 + 0xc) != '\0') goto LAB_142eefaf9;
      lVar2 = *param_2;
      if ((DAT_146b3dfb8 == lVar2) || (DAT_146b3e158 == lVar2)) {
        cVar1 = (char)param_2[5];
joined_r0x000142eefac7:
        if ((lVar2 == DAT_146b3e158) || (lVar2 == DAT_146b3e160)) {
          fVar4 = *(float *)((longlong)param_1 + 0x1dc);
          *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
          lVar2 = *param_2;
          if (fVar4 < *(float *)((longlong)param_1 + 0x164)) {
            cVar1 = '\x01';
          }
        }
        if ((param_1[0x3a] == lVar2) && (cVar1 != '\0')) {
          *(int *)(param_1 + 0x3b) = (int)param_1[0x3b] + 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x3b) = 0;
        }
        param_1[0x3a] = *param_2;
        fVar4 = (float)FUN_142eebd20(param_1 + -0x2e);
        FUN_142f0fa80(param_1 + -0x2e,*(float *)(param_1 + 0x34) - fVar4,1);
        return '\x01';
      }
      if (DAT_146b3dfc0 == *param_2) goto LAB_142eefa52;
      bVar3 = DAT_146b3e160 == *param_2;
    }
    else {
      if (*(char *)((longlong)param_2 + 0xc) != '\0') goto LAB_142eefaf9;
      lVar2 = *param_2;
      if ((DAT_146b3dfc8 == lVar2) || (DAT_146b3e160 == lVar2)) {
        cVar1 = (char)param_2[5];
        goto joined_r0x000142eefac7;
      }
      if (DAT_146b3dfd0 == *param_2) goto LAB_142eefa52;
      bVar3 = DAT_146b3e158 == *param_2;
    }
    if (bVar3) {
LAB_142eefa52:
      FUN_142f01950(param_1 + -0x2e,param_2);
      fVar4 = (float)FUN_142eebd20(param_1 + -0x2e);
      FUN_142f0fa80(param_1 + -0x2e,fVar4 + *(float *)(param_1 + 0x34),1);
      return '\x01';
    }
  }
LAB_142eefaf9:
  cVar1 = FUN_142eb9ae0(param_1,param_2);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x3b) = 0;
    param_1[0x3a] = 0;
  }
  return cVar1;
}



// FUNCTION 142eefb30 FUN_142eefb30 body=230 status=ok
// SIG undefined FUN_142eefb30(void)

undefined8 FUN_142eefb30(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar1 = (longlong *)(param_1 + -8);
  lVar3 = (**(code **)(*(longlong *)(param_1 + -8) + 0x48))(plVar1);
  if ((lVar3 != 0) &&
     (cVar2 = (**(code **)(*(longlong *)(lVar3 + 0x208) + 0x20))
                        ((longlong *)(lVar3 + 0x208),param_2), cVar2 != '\0')) {
    return 1;
  }
  if (*(char *)((longlong)param_2 + 0xc) == '\0') {
    if (DAT_146b3dfb8 == *param_2) {
                    /* WARNING: Could not recover jumptable at 0x000142eefb99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar1 + 0x58))(plVar1);
      return uVar4;
    }
    if (DAT_146b3dfc0 == *param_2) {
                    /* WARNING: Could not recover jumptable at 0x000142eefbbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar1 + 0x60))(plVar1);
      return uVar4;
    }
    if (DAT_146b3dfc8 == *param_2) {
                    /* WARNING: Could not recover jumptable at 0x000142eefbe1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar1 + 0x68))(plVar1);
      return uVar4;
    }
    if (DAT_146b3dfd0 == *param_2) {
                    /* WARNING: Could not recover jumptable at 0x000142eefc05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar1 + 0x70))(plVar1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 142eefc20 FUN_142eefc20 body=89 status=ok
// SIG undefined FUN_142eefc20(void)

undefined8 FUN_142eefc20(longlong *param_1,longlong *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x40))();
  if (((cVar1 != '\0') && (*(char *)((longlong)param_2 + 0xc) == '\0')) &&
     (DAT_146b3e2a0 == *param_2)) {
    (**(code **)(param_1[-0x41] + 0x488))(param_1 + -0x41,param_2);
    return 1;
  }
  return 0;
}



// FUNCTION 142eefc80 FUN_142eefc80 body=229 status=ok
// SIG undefined FUN_142eefc80(void)

undefined8 FUN_142eefc80(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  cVar1 = (**(code **)(*param_1 + 0x40))();
  if (((cVar1 == '\0') || (*(char *)((longlong)param_2 + 0xc) != '\0')) ||
     (DAT_146b3e2a0 != *param_2)) {
    uVar4 = 0;
  }
  else {
    (**(code **)(param_1[-0x41] + 0x488))(param_1 + -0x41,param_2);
    uVar4 = 1;
  }
  if (*(char *)((longlong)param_2 + 0xc) != '\0') {
    return uVar4;
  }
  if (DAT_146b3dfc8 == *param_2) {
    if (param_1[0x1c] == 0) {
      return 1;
    }
    iVar2 = UComboBoxString::GetOptionCount();
    if (iVar2 < 1) {
      return 1;
    }
    iVar3 = FUN_1420fe5f0(param_1[0x1c]);
    iVar3 = iVar3 + -1;
  }
  else {
    if (DAT_146b3dfd0 != *param_2) {
      return uVar4;
    }
    if (param_1[0x1c] == 0) {
      return 1;
    }
    iVar2 = UComboBoxString::GetOptionCount();
    if (iVar2 < 1) {
      return 1;
    }
    iVar3 = FUN_1420fe5f0(param_1[0x1c]);
    iVar3 = iVar3 + 1;
  }
  FUN_142134ed0(param_1[0x1c],(longlong)(iVar3 + iVar2) % (longlong)iVar2 & 0xffffffff);
  return 1;
}



// FUNCTION 142eefd70 FUN_142eefd70 body=213 status=ok
// SIG undefined FUN_142eefd70(void)

undefined8 FUN_142eefd70(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  float fVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x40))();
  if (((cVar1 == '\0') || (*(char *)((longlong)param_2 + 0xc) != '\0')) ||
     (DAT_146b3e2a0 != *param_2)) {
    uVar2 = 0;
  }
  else {
    (**(code **)(param_1[-0x41] + 0x488))(param_1 + -0x41,param_2);
    uVar2 = 1;
  }
  if (*(char *)((longlong)param_2 + 0xc) != '\0') {
    return uVar2;
  }
  if (DAT_146b3dfc8 == *param_2) {
    if (param_1[0x1c] == 0) {
      return 1;
    }
    fVar3 = (float)USlider::GetValue();
    fVar3 = fVar3 - *(float *)(param_1[0x1c] + 0x370);
  }
  else {
    if (DAT_146b3dfd0 != *param_2) {
      return uVar2;
    }
    if (param_1[0x1c] == 0) {
      return 1;
    }
    fVar3 = (float)USlider::GetValue();
    fVar3 = fVar3 + *(float *)(param_1[0x1c] + 0x370);
  }
  FUN_142efdf10(param_1 + -0x41,fVar3);
  return 1;
}



// FUNCTION 142eefe50 FUN_142eefe50 body=245 status=ok
// SIG undefined FUN_142eefe50(void)

undefined1 FUN_142eefe50(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  uVar2 = 0;
  lVar3 = (**(code **)(*(longlong *)(param_1 + -8) + 0x48))(param_1 + -8);
  if ((lVar3 == 0) ||
     (cVar1 = (**(code **)(*(longlong *)(lVar3 + 0x208) + 0x20))
                        ((longlong *)(lVar3 + 0x208),param_2), cVar1 == '\0')) {
    if (*(char *)((longlong)param_2 + 0xc) == '\0') {
      if (DAT_146b3dfb8 == *param_2) {
        if (*(char *)(param_1 + -0x48) == '\x01') {
          uVar2 = (**(code **)(*(longlong *)(param_1 + -8) + 0x58))(param_1 + -8);
        }
      }
      else if (DAT_146b3dfc0 == *param_2) {
        if (*(char *)(param_1 + -0x48) == '\x01') {
          uVar2 = (**(code **)(*(longlong *)(param_1 + -8) + 0x60))(param_1 + -8);
        }
      }
      else if (DAT_146b3dfc8 == *param_2) {
        if (*(char *)(param_1 + -0x48) == '\0') {
          uVar2 = (**(code **)(*(longlong *)(param_1 + -8) + 0x68))(param_1 + -8);
        }
      }
      else if ((DAT_146b3dfd0 == *param_2) && (*(char *)(param_1 + -0x48) == '\0')) {
        uVar2 = (**(code **)(*(longlong *)(param_1 + -8) + 0x70))(param_1 + -8);
      }
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 142eeff50 FUN_142eeff50 body=690 status=ok
// SIG undefined FUN_142eeff50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142eeff50(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 auStack_108 [32];
  int local_e8 [4];
  undefined4 *local_d8;
  ulonglong *puStack_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [24];
  undefined1 local_a0 [24];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [16];
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_108;
  cVar2 = (**(code **)(*param_1 + 0x40))();
  if ((cVar2 == '\0') || (*(char *)((longlong)param_2 + 0xc) != '\0')) {
LAB_142ef01df:
    uVar5 = FUN_142eb9ae0(param_1,param_2);
    return uVar5;
  }
  if (DAT_146b3dfc8 != *param_2) {
    if (DAT_146b3dfd0 == *param_2) {
      plVar9 = param_1 + -0x2e;
      iVar4 = (int)param_1[0x2d] + 1;
      if ((int)param_1[0x2c] <= iVar4) {
        iVar4 = 0;
        if ((char)param_1[0x33] == '\0') {
          iVar4 = (int)param_1[0x2c] + -1;
        }
      }
      FUN_142f0c980(plVar9,iVar4,1);
      (**(code **)(*plVar9 + 800))(plVar9,0);
      return 1;
    }
    goto LAB_142ef01df;
  }
  plVar9 = param_1 + -0x2e;
  lVar1 = param_1[0x2d];
  iVar4 = (int)lVar1 + -1;
  if (iVar4 < 0) {
    if ((char)param_1[0x33] != '\0') {
      iVar4 = (int)param_1[0x2c];
      iVar8 = 0;
      if (iVar4 == 0) {
        iVar8 = -1;
      }
      else if ((iVar4 != 1) && (iVar8 = iVar4 + -1, iVar4 + -1 < 0)) {
        iVar8 = 0;
      }
      local_e8[0] = iVar8;
      iVar3 = FUN_142eea160(param_1 + 0x2e,local_e8);
      if (iVar3 == -1) {
        if ((iVar8 != (int)lVar1) && (param_1[0x32] != 0)) {
          *(int *)(param_1 + 0x2d) = iVar8;
          if ((-1 < iVar8) && (iVar8 < iVar4)) {
            uVar5 = FTextFormat::FTextFormat(local_88,param_1[0x2b] + (longlong)iVar8 * 0x18);
            local_68[0] = 0;
            local_d8 = local_68;
            local_40 = '\0';
            puStack_d0 = local_38;
            local_60 = 0;
            uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                    TArray<FFormatArgumentValue,FDefaultAllocator>(local_c8,&local_d8);
            uVar7 = FTextFormat::FTextFormat(local_78,uVar5);
            uVar6 = FText::Format(local_a0,uVar7,uVar6);
            FText::FText(local_b8,uVar6);
            TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_a0);
            TArray<FFormatArgumentValue,FDefaultAllocator>::
            ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_c8);
            if (local_40 != '\0') {
              local_40 = '\0';
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_58);
            }
            TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(uVar5);
            (**(code **)(*(longlong *)param_1[0x32] + 0x2b0))
                      ((longlong *)param_1[0x32],local_b8,1,0);
            TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_b8);
          }
          cVar2 = TScriptDelegate<FWeakObjectPtr>::IsBound(param_1 + 0x34);
          if (cVar2 != '\0') {
            FUN_142edd630(param_1 + 0x34,0);
          }
        }
      }
      else {
        *(int *)(param_1 + 0x2d) = iVar8;
        uVar5 = FUN_142eddc10(local_68);
        FUN_142f126e0(plVar9,0,uVar5);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_50);
      }
      goto LAB_142ef0162;
    }
    iVar4 = 0;
  }
  FUN_142f0c980(plVar9,iVar4,0);
LAB_142ef0162:
  (**(code **)(*plVar9 + 800))(plVar9,0);
  return 1;
}



// FUNCTION 142ef0210 FUN_142ef0210 body=592 status=ok
// SIG undefined FUN_142ef0210(void)

undefined8 FUN_142ef0210(longlong param_1,longlong *param_2)

{
  char cVar1;
  BOOL BVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined4 local_res8 [2];
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  }
  local_res8[0] = 0xffffffff;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_14170c210(local_res8);
  }
  plVar8 = *(longlong **)(param_1 + 0x50);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  lVar3 = FUN_1416f8720(local_res8[0]);
  if (lVar3 != 0) {
    if (((plVar8 != (longlong *)0x0) &&
        (cVar1 = (**(code **)(*plVar8 + 0x40))(plVar8), cVar1 != '\0')) &&
       (cVar1 = (**(code **)(*plVar8 + 0x20))(plVar8,param_2), cVar1 != '\0')) {
LAB_142ef045c:
      uVar7 = 1;
      goto LAB_142ef042a;
    }
    uVar4 = FUN_1416f8720(local_res8[0]);
    if (uVar4 != 0) {
      uVar10 = 0;
      do {
        BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
        if (BVar2 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
        }
        uVar5 = uVar10;
        if (0 < *(int *)(param_1 + 0x60)) {
          do {
            iVar9 = (int)uVar5;
            uVar5 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x58) + (longlong)iVar9 * 0x28);
            if (uVar5 == uVar4) {
              LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
              goto LAB_142ef030f;
            }
            uVar5 = (ulonglong)(iVar9 + 1U);
          } while ((int)(iVar9 + 1U) < *(int *)(param_1 + 0x60));
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
        iVar9 = -1;
LAB_142ef030f:
        BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
        if (BVar2 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
        }
        uVar5 = uVar10;
        if ((-1 < iVar9) && (iVar9 < *(int *)(param_1 + 0x60))) {
          uVar5 = *(longlong *)(param_1 + 0x58) + (longlong)iVar9 * 0x28;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
        if (uVar5 == 0) break;
        cVar1 = *(char *)((longlong)param_2 + 0xc);
        if (((((((cVar1 == '\0') && (DAT_146b3dfb8 == *param_2)) ||
               ((cVar1 == '\x01' && (DAT_146b3dfb8 == *param_2)))) ||
              ((cVar1 == '\0' && (DAT_146b3dfc0 == *param_2)))) ||
             ((cVar1 == '\x01' && (DAT_146b3dfc0 == *param_2)))) ||
            ((((cVar1 == '\0' && (DAT_146b3dfc8 == *param_2)) ||
              ((cVar1 == '\x01' && (DAT_146b3dfc8 == *param_2)))) ||
             ((cVar1 == '\0' && (DAT_146b3dfd0 == *param_2)))))) ||
           ((uVar6 = uVar10, cVar1 == '\x01' && (DAT_146b3dfd0 == *param_2)))) {
          uVar6 = FUN_142eb57b0(uVar5 + 8,param_2);
        }
        bVar11 = uVar6 == uVar4;
        uVar4 = uVar6;
        if (bVar11) {
          uVar4 = uVar10;
        }
        if (uVar4 != 0) {
          uVar7 = UBlendableInterface::GetPrivateStaticClass();
          plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(uVar4,uVar7);
          if ((plVar8 != (longlong *)0x0) &&
             (cVar1 = (**(code **)(*plVar8 + 0x40))(plVar8), cVar1 != '\0')) {
            FUN_142f0d400(param_1,uVar4,0);
            goto LAB_142ef045c;
          }
        }
        uVar5 = FUN_1416f8720(local_res8[0]);
        if ((uVar4 == uVar5) || (uVar4 == 0)) break;
      } while( true );
    }
  }
  uVar7 = 0;
LAB_142ef042a:
  FUN_1416f8340(local_res8[0]);
  return uVar7;
}



// FUNCTION 142ef0460 FUN_142ef0460 body=157 status=ok
// SIG undefined FUN_142ef0460(void)

void FUN_142ef0460(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_18 [14];
  undefined1 uStack_a;
  undefined1 uStack_9;
  
  FUN_142eed030(param_1,local_18,param_2);
  stack0xfffffffffffffff4 = CONCAT12(1,local_18._12_2_);
  if (*(longlong *)(param_1 + 0x328) != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 800);
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 0x328));
      if (lVar1 != 0) {
        plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 800);
        uVar3 = FUN_14178ac60(plVar2,*(undefined8 *)(param_1 + 0x328));
        (**(code **)(*plVar2 + 0x208))(plVar2,uVar3,local_18);
      }
    }
  }
  return;
}



// FUNCTION 142ef0500 FUN_142ef0500 body=1250 status=ok
// SIG undefined FUN_142ef0500(void)

undefined1 FUN_142ef0500(longlong *param_1,longlong *param_2,float param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  char cVar10;
  undefined1 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  
  cVar10 = FKey::IsGamepadKey(param_2);
  if ((((cVar10 == '\0') || (lVar12 = (**(code **)(*param_1 + 0x148))(param_1), lVar12 == 0)) ||
      (lVar12 = UWorld::GetGameViewport(lVar12), lVar12 == 0)) ||
     ((*(char *)(lVar12 + 0x309) == '\0' && (*(char *)(lVar12 + 0x308) == '\0')))) {
    lVar12 = param_2[1];
    plVar6 = (longlong *)param_2[2];
    lVar7 = *param_2;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_d0 = 0;
    uStack_c8 = 0;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar6 + 1;
      lVar9 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    plVar13 = (longlong *)param_1[0x11];
    for (plVar14 = plVar13; plVar14 != plVar13 + (longlong)(int)param_1[0x12] * 10;
        plVar14 = plVar14 + 10) {
      if (((*plVar14 == lVar7) && ((int)plVar14[3] == param_4)) &&
         (plVar8 = plVar13, *(char *)((longlong)plVar14 + 0x1c) == '\x01'))
      goto joined_r0x000142ef0892;
    }
    fVar3 = *(float *)(param_1 + 0x13);
    if (fVar3 <= param_3) {
      local_88 = *param_2;
      local_d0 = (undefined4)param_1[0xc];
      uStack_c8 = *(undefined4 *)((longlong)param_1 + 100);
      local_80 = param_2[1];
      local_78 = param_2[2];
      if (local_78 != 0) {
        LOCK();
        *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
        UNLOCK();
      }
      FUN_142f01530(param_1,&local_88,param_3,param_4,0);
    }
    uStack_c4 = 0;
    uStack_cc = 0;
    if (param_3 <= -fVar3) {
      local_70 = *param_2;
      uStack_cc = (undefined4)param_1[0xc];
      uStack_c4 = *(undefined4 *)((longlong)param_1 + 100);
      local_68 = param_2[1];
      local_60 = param_2[2];
      if (local_60 != 0) {
        LOCK();
        *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
        UNLOCK();
      }
      FUN_142f01530(param_1,&local_70,param_3,param_4,0);
    }
    iVar2 = (int)param_1[0x12];
    *(int *)(param_1 + 0x12) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0x94) < iVar2 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 0x11,iVar2);
    }
    plVar13 = (longlong *)((longlong)iVar2 * 0x50 + param_1[0x11]);
    *plVar13 = lVar7;
    plVar13[1] = lVar12;
    plVar13[2] = (longlong)plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *(int *)(plVar13 + 3) = param_4;
    *(float *)(plVar13 + 6) = param_3;
    plVar13[4] = 0;
    *(undefined4 *)(plVar13 + 5) = 0;
    *(undefined2 *)((longlong)plVar13 + 0x2c) = 0;
    *(bool *)((longlong)plVar13 + 0x34) = fVar3 <= param_3;
    *(bool *)((longlong)plVar13 + 0x35) = param_3 <= -fVar3;
    *(undefined2 *)((longlong)plVar13 + 0x1c) = 1;
    *(undefined4 *)(plVar13 + 7) = local_d0;
    *(undefined4 *)((longlong)plVar13 + 0x3c) = uStack_cc;
    *(undefined4 *)(plVar13 + 8) = uStack_c8;
    *(undefined4 *)((longlong)plVar13 + 0x44) = uStack_c4;
    *(undefined1 *)(plVar13 + 9) = 0;
LAB_142ef07ba:
    local_58 = *param_2;
    local_50 = param_2[1];
    local_48 = param_2[2];
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      UNLOCK();
    }
    uVar11 = FUN_142f11ae0(param_1,param_4,&local_58);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar6 + 1;
      lVar12 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
    plVar6 = (longlong *)param_2[2];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar6 + 1;
      lVar12 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  else {
    FKey::~FKey(param_2);
    uVar11 = 1;
  }
  return uVar11;
joined_r0x000142ef0892:
  if (plVar8 == plVar13 + (longlong)(int)param_1[0x12] * 10) goto LAB_142ef07ba;
  if (((*plVar8 == lVar7) && ((int)plVar8[3] == param_4)) &&
     (*(char *)((longlong)plVar8 + 0x1c) == '\x01')) {
    iVar2 = (int)(((longlong)plVar8 - (longlong)plVar13) / 0x50);
    if ((-1 < iVar2) && (iVar2 < (int)param_1[0x12])) {
      fVar3 = *(float *)(param_1 + 0x13);
      cVar10 = *(char *)((longlong)plVar13 + (longlong)iVar2 * 0x50 + 0x35);
      cVar5 = *(char *)((longlong)plVar13 + (longlong)iVar2 * 0x50 + 0x34);
      *(bool *)((longlong)plVar13 + (longlong)iVar2 * 0x50 + 0x34) = fVar3 <= param_3;
      fVar4 = *(float *)(param_1 + 0x13);
      *(float *)(plVar13 + (longlong)iVar2 * 10 + 6) = param_3;
      *(bool *)((longlong)plVar13 + (longlong)iVar2 * 0x50 + 0x35) = param_3 <= -fVar4;
      if ((fVar3 <= param_3) && (cVar5 == '\0')) {
        *(int *)(plVar13 + (longlong)iVar2 * 10 + 7) = (int)param_1[0xc];
        *(undefined4 *)(plVar13 + (longlong)iVar2 * 10 + 8) =
             *(undefined4 *)((longlong)param_1 + 100);
        local_b8 = *param_2;
        local_b0 = param_2[1];
        local_a8 = param_2[2];
        if (local_a8 != 0) {
          LOCK();
          *(int *)(local_a8 + 8) = *(int *)(local_a8 + 8) + 1;
          UNLOCK();
        }
        FUN_142f01530(param_1,&local_b8,param_3,param_4,0);
      }
      if ((*(char *)((longlong)plVar13 + (longlong)iVar2 * 0x50 + 0x35) != '\0') && (cVar10 == '\0')
         ) {
        *(int *)((longlong)plVar13 + (longlong)iVar2 * 0x50 + 0x3c) = (int)param_1[0xc];
        *(undefined4 *)((longlong)plVar13 + (longlong)iVar2 * 0x50 + 0x44) =
             *(undefined4 *)((longlong)param_1 + 100);
        local_a0 = *param_2;
        local_98 = param_2[1];
        local_90 = param_2[2];
        if (local_90 != 0) {
          LOCK();
          *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
          UNLOCK();
        }
        FUN_142f01530(param_1,&local_a0,param_3,param_4,0);
      }
    }
    goto LAB_142ef07ba;
  }
  plVar8 = plVar8 + 10;
  goto joined_r0x000142ef0892;
}



// FUNCTION 142ef09f0 FUN_142ef09f0 body=1074 status=ok
// SIG undefined FUN_142ef09f0(void)

undefined1 FUN_142ef09f0(longlong *param_1,longlong *param_2,uint param_3,int param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_98;
  longlong local_90;
  undefined1 local_7b;
  undefined4 local_78;
  undefined4 local_74;
  
  cVar6 = FKey::IsGamepadKey(param_2);
  if ((((cVar6 != '\0') && (lVar9 = (**(code **)(*param_1 + 0x148))(param_1), lVar9 != 0)) &&
      (lVar9 = UWorld::GetGameViewport(lVar9), lVar9 != 0)) &&
     ((*(char *)(lVar9 + 0x309) != '\0' || (*(char *)(lVar9 + 0x308) != '\0')))) {
    FKey::~FKey(param_2);
    return 1;
  }
  cVar6 = FKey::IsGamepadKey(param_2);
  FUN_142f0e180(param_1,(cVar6 == '\0') + '\x01',param_4);
  plVar2 = (longlong *)param_2[2];
  local_98 = *param_2;
  local_90 = param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar2 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  lVar9 = local_98;
  plVar3 = (longlong *)param_1[0x11];
  lVar11 = (longlong)(int)param_1[0x12];
  for (plVar10 = plVar3; plVar10 != plVar3 + lVar11 * 10; plVar10 = plVar10 + 10) {
    if (((*plVar10 == local_98) && ((int)plVar10[3] == param_4)) &&
       (plVar5 = plVar3, *(char *)((longlong)plVar10 + 0x1c) == '\0')) goto joined_r0x000142ef0c72;
  }
  local_7b = (param_3 & 0xfffffffd) == 0;
  iVar8 = (int)param_1[0x12] + 1;
  uVar12 = (undefined4)param_1[0xc];
  uVar13 = *(undefined4 *)((longlong)param_1 + 100);
  *(int *)(param_1 + 0x12) = iVar8;
  local_78 = uVar12;
  local_74 = uVar13;
  if (*(int *)((longlong)param_1 + 0x94) < iVar8) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 0x11);
  }
  lVar4 = param_1[0x11];
  *(longlong *)(lVar4 + lVar11 * 0x50) = lVar9;
  *(longlong *)(lVar4 + 8 + lVar11 * 0x50) = local_90;
  *(longlong **)(lVar4 + 0x10 + lVar11 * 0x50) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    uVar12 = local_78;
    uVar13 = local_74;
  }
  *(undefined1 *)(lVar4 + 0x1d + lVar11 * 0x50) = local_7b;
  *(undefined4 *)(lVar4 + 0x20 + lVar11 * 0x50) = uVar12;
  *(undefined4 *)(lVar4 + 0x24 + lVar11 * 0x50) = uVar13;
  *(undefined4 *)(lVar4 + 0x28 + lVar11 * 0x50) = 0;
  *(undefined2 *)(lVar4 + 0x2c + lVar11 * 0x50) = 0;
  *(undefined4 *)(lVar4 + 0x30 + lVar11 * 0x50) = 0;
  *(undefined2 *)(lVar4 + 0x34 + lVar11 * 0x50) = 0;
  *(undefined8 *)(lVar4 + 0x38 + lVar11 * 0x50) = 0;
  *(undefined8 *)(lVar4 + 0x40 + lVar11 * 0x50) = 0;
  *(undefined1 *)(lVar4 + 0x48 + lVar11 * 0x50) = 0;
  *(int *)(lVar4 + 0x18 + lVar11 * 0x50) = param_4;
  *(undefined1 *)(lVar4 + 0x1c + lVar11 * 0x50) = 0;
LAB_142ef0c22:
  if (param_3 == 0) {
LAB_142ef0c31:
    local_e8 = *param_2;
    local_e0 = param_2[1];
    local_d8 = param_2[2];
    if (local_d8 != 0) {
      LOCK();
      *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
      UNLOCK();
    }
    FUN_142f01c60(param_1,&local_e8,param_4,0);
  }
  else if (param_3 == 1) {
LAB_142ef0d19:
    local_d0 = *param_2;
    local_c8 = param_2[1];
    local_c0 = param_2[2];
    if (local_c0 != 0) {
      LOCK();
      *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
      UNLOCK();
    }
    FUN_142f01f20(param_1,&local_d0,param_4);
  }
  local_b8 = *param_2;
  local_b0 = param_2[1];
  local_a8 = param_2[2];
  if (local_a8 != 0) {
    LOCK();
    *(int *)(local_a8 + 8) = *(int *)(local_a8 + 8) + 1;
    UNLOCK();
  }
  uVar7 = FUN_142f11ae0(param_1,param_4,&local_b8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar2 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
    }
  }
  plVar2 = (longlong *)param_2[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar2 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return uVar7;
joined_r0x000142ef0c72:
  if (plVar5 == plVar3 + lVar11 * 10) goto LAB_142ef0c22;
  if (((*plVar5 == local_98) && ((int)plVar5[3] == param_4)) &&
     (*(char *)((longlong)plVar5 + 0x1c) == '\0')) {
    iVar8 = (int)(((longlong)plVar5 - (longlong)plVar3) / 0x50);
    if ((-1 < iVar8) && (iVar8 < (int)param_1[0x12])) {
      if (param_3 == 0) {
        *(undefined1 *)((longlong)plVar3 + (longlong)iVar8 * 0x50 + 0x1d) = 1;
        *(undefined2 *)((longlong)plVar3 + (longlong)iVar8 * 0x50 + 0x2c) = 0;
        *(undefined4 *)(plVar3 + (longlong)iVar8 * 10 + 5) = 0;
        *(int *)(plVar3 + (longlong)iVar8 * 10 + 4) = (int)param_1[0xc];
        *(undefined4 *)((longlong)plVar3 + (longlong)iVar8 * 0x50 + 0x24) =
             *(undefined4 *)((longlong)param_1 + 100);
        goto LAB_142ef0c31;
      }
      if (param_3 == 1) {
        *(undefined1 *)((longlong)plVar3 + (longlong)iVar8 * 0x50 + 0x1d) = 0;
        *(undefined4 *)(plVar3 + (longlong)iVar8 * 10 + 5) = 0;
        *(undefined2 *)((longlong)plVar3 + (longlong)iVar8 * 0x50 + 0x2c) = 0;
        goto LAB_142ef0d19;
      }
    }
    goto LAB_142ef0c22;
  }
  plVar5 = plVar5 + 10;
  goto joined_r0x000142ef0c72;
}



// FUNCTION 142ef0e30 FUN_142ef0e30 body=183 status=ok
// SIG undefined FUN_142ef0e30(void)

void FUN_142ef0e30(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x38);
  if (cVar6 != '\0') {
    local_28 = *param_2;
    local_20 = param_2[1];
    local_18 = param_2[2];
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      UNLOCK();
    }
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x38);
    FUN_142ef09f0(uVar7,&local_28,param_3,param_4);
  }
  plVar4 = (longlong *)param_2[2];
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



// FUNCTION 142ef0ef0 FUN_142ef0ef0 body=174 status=ok
// SIG undefined FUN_142ef0ef0(void)

void FUN_142ef0ef0(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  plVar1 = (longlong *)(param_1 + 0xc0);
  iVar4 = *(int *)(param_1 + 200);
  lVar7 = (longlong)iVar4;
  lVar6 = *plVar1;
  lVar2 = lVar6 + lVar7 * 0x18;
  while( true ) {
    if (lVar6 == lVar2) {
      uVar5 = *(undefined4 *)(param_1 + 0x4c);
      *(int *)(param_1 + 200) = iVar4 + 1;
      if (*(int *)(param_1 + 0xcc) < iVar4 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar1,iVar4);
      }
      lVar2 = *plVar1;
      puVar3 = (undefined8 *)(lVar2 + lVar7 * 0x18);
      *puVar3 = CONCAT44(param_3,param_2);
      puVar3[1] = CONCAT44(param_3,param_2);
      *(ulonglong *)(lVar2 + 0x10 + lVar7 * 0x18) = CONCAT44(uVar5,param_4);
      return;
    }
    if (*(int *)(lVar6 + 0x10) == param_4) break;
    lVar6 = lVar6 + 0x18;
  }
  *(undefined4 *)(lVar6 + 8) = param_2;
  *(undefined4 *)(lVar6 + 0xc) = param_3;
  return;
}



// FUNCTION 142ef0fa0 thunk_FUN_142f02af0 body=5 status=ok
// SIG undefined thunk_FUN_142f02af0(void)

void thunk_FUN_142f02af0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x61c);
  if (cVar1 != '\0') {
    cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x614);
    if (cVar1 != '\0') {
      lVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x61c);
      if (lVar2 != 0) {
        uVar3 = FUN_142f26140();
        plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar3);
        if (plVar4 != (longlong *)0x0) {
          lVar2 = param_1[0xbe];
          if (lVar2 == 0) {
            lVar2 = (**(code **)(*plVar4 + 0x10))();
          }
          FUN_142f0c4b0(param_1,lVar2,(char)param_1[0xbc]);
                    /* WARNING: Could not recover jumptable at 0x000142f02b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x7e0))(param_1);
          return;
        }
      }
      FWeakObjectPtr::IsValid((longlong)param_1 + 0x61c);
    }
  }
  return;
}



// FUNCTION 142ef0fb0 FUN_142ef0fb0 body=456 status=ok
// SIG undefined FUN_142ef0fb0(void)

void FUN_142ef0fb0(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_38 [13];
  undefined1 uStack_2b;
  undefined2 uStack_2a;
  
  if (param_3 != -1) {
    FUN_142eed030(param_1,local_38);
    stack0xffffffffffffffd0 = CONCAT15(1,local_38._8_5_);
    if (*(longlong *)(param_1 + 0x328) != 0) {
      lVar1 = FWeakObjectPtr::Get(param_1 + 800);
      if (lVar1 != 0) {
        lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 0x328));
        if (lVar1 != 0) {
          plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 800);
          uVar3 = FUN_14178ac60(plVar2,*(undefined8 *)(param_1 + 0x328));
          (**(code **)(*plVar2 + 0x208))(plVar2,uVar3,local_38);
        }
      }
    }
  }
  FUN_142eed030(param_1,local_38,param_2);
  stack0xffffffffffffffd0 = CONCAT15(1,local_38._8_5_);
  uVar3 = stack0xffffffffffffffd0;
  if ((param_2 != -1) && (*(longlong *)(param_1 + 0x328) != 0)) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 800);
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 0x328));
      if (lVar1 != 0) {
        unique0x10000300 = uVar3;
        plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 800);
        uVar4 = FUN_14178ac60(plVar2,*(undefined8 *)(param_1 + 0x328));
        (**(code **)(*plVar2 + 0x208))(plVar2,uVar4,local_38);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x338) != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x330);
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 0x338));
      if (lVar1 != 0) {
        unique0x10000308 = uVar3;
        plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x330);
        uVar3 = FUN_14178ac60(plVar2,*(undefined8 *)(param_1 + 0x338));
        (**(code **)(*plVar2 + 0x208))(plVar2,uVar3,local_38);
      }
    }
  }
  return;
}



// FUNCTION 142ef1190 FUN_142ef1190 body=538 status=ok
// SIG undefined FUN_142ef1190(void)

void FUN_142ef1190(longlong param_1)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 uVar9;
  longlong lVar10;
  undefined4 local_res8;
  undefined4 local_resc;
  PSRWLOCK local_res10;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [24];
  undefined1 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined1 local_9f;
  undefined1 local_98;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  if ((*(char *)(param_1 + 0xa0) == '\0') || (*(char *)(param_1 + 0xa1) != '\0')) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x30));
  LOCK();
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  UNLOCK();
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_142f279c0(*(longlong *)(param_1 + 0x28),uVar9);
  }
  if ((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong *)(param_1 + 0x48) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))(*(longlong **)(param_1 + 0x48),uVar9);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x30));
  LOCK();
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
  UNLOCK();
  SRWLock = (PSRWLOCK)(param_1 + 0x70);
  local_res10 = SRWLock;
  AcquireSRWLockShared(SRWLock);
  LOCK();
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
  UNLOCK();
  lVar8 = *(longlong *)(param_1 + 0x60);
  lVar10 = (longlong)*(int *)(param_1 + 0x68) * 0x40 + lVar8;
  for (; lVar8 != lVar10; lVar8 = lVar8 + 0x40) {
    if ((*(char *)(lVar8 + 0x28) != '\0') && (*(longlong *)(lVar8 + 0x30) != 0)) {
      FWeakObjectPtr::operator=(&local_res8,param_1);
      uVar4 = local_resc;
      uVar3 = local_res8;
      FUN_142eddac0(&local_d8,lVar8);
      local_58 = 0;
      local_48 = 0;
      local_98 = uVar9;
      puVar5 = (undefined8 *)FUN_140438ef0(0x60,local_78);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_FUN_145992f08;
        puVar5[1] = param_1;
        *(undefined4 *)(puVar5 + 2) = uVar3;
        *(undefined4 *)((longlong)puVar5 + 0x14) = uVar4;
        puVar5[3] = 0;
        puVar5[3] = local_d8;
        local_d8 = 0;
        *(undefined4 *)(puVar5 + 4) = (undefined4)local_d0;
        *(undefined4 *)((longlong)puVar5 + 0x24) = local_d0._4_4_;
        local_d0 = 0;
        FText::FText(puVar5 + 5,local_c8);
        *(undefined1 *)(puVar5 + 8) = local_b0;
        puVar5[9] = local_a8;
        *(undefined1 *)(puVar5 + 10) = local_a0;
        *(undefined1 *)((longlong)puVar5 + 0x51) = local_9f;
        *(undefined1 *)(puVar5 + 0xb) = local_98;
      }
      local_88[0] = &LAB_142ee3730;
      FUN_14204c280(local_88);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                (&local_d8);
      lVar2 = *(longlong *)(lVar8 + 0x30);
      if (lVar2 != 0) {
        uVar6 = UBlendableInterface::GetPrivateStaticClass();
        plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar6);
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x18))(plVar7,uVar9);
        }
      }
    }
    SRWLock = local_res10;
  }
  ReleaseSRWLockShared(SRWLock);
  LOCK();
  piVar1 = (int *)((longlong)&SRWLock[1].Ptr + 4);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  return;
}



// FUNCTION 142ef13b0 FUN_142ef13b0 body=128 status=ok
// SIG undefined FUN_142ef13b0(void)

undefined1 FUN_142ef13b0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x50);
  uVar5 = 0;
  uVar6 = 0;
  plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x58) * 2;
  if (plVar3 != plVar4) {
    do {
      if (((*plVar3 != 0) && (plVar1 = (longlong *)plVar3[1], plVar1 != (longlong *)0x0)) &&
         (cVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,param_2), uVar6 = uVar5, cVar2 != '\0')) {
        uVar5 = 1;
        uVar6 = 1;
      }
      plVar3 = plVar3 + 2;
    } while (plVar3 != plVar4);
  }
  return uVar6;
}



// FUNCTION 142ef1430 FUN_142ef1430 body=100 status=ok
// SIG undefined FUN_142ef1430(void)

undefined8 FUN_142ef1430(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  
  piVar1 = (int *)FUN_142eea500(param_1 + 0x198,local_res8,param_2);
  if (*piVar1 == -1) {
    piVar1 = (int *)FUN_142eea340(param_1 + 0x1e8,local_res8,param_2);
    if (*piVar1 == -1) {
      uVar2 = 0;
      goto LAB_142ef1478;
    }
  }
  uVar2 = 1;
LAB_142ef1478:
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 142ef14a0 FUN_142ef14a0 body=78 status=ok
// SIG undefined FUN_142ef14a0(void)

void FUN_142ef14a0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x288))(param_1,2);
  if ((DAT_146b17150 != 0) && (param_1[0x5c] != 0)) {
    FUN_1424787e0(DAT_146b17150 + 0xcf8);
  }
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  return;
}



// FUNCTION 142ef14f0 FUN_142ef14f0 body=63 status=ok
// SIG undefined FUN_142ef14f0(void)

void FUN_142ef14f0(longlong param_1)

{
  float fVar1;
  
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    fVar1 = (float)USlider::GetValue();
    FUN_142efdf10(param_1,fVar1 + *(float *)(*(longlong *)(param_1 + 0x2e8) + 0x370));
    return;
  }
  return;
}



// FUNCTION 142ef1530 FUN_142ef1530 body=167 status=ok
// SIG undefined FUN_142ef1530(void)

void FUN_142ef1530(longlong param_1,int param_2,int *param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 0) {
LAB_142ef1569:
    bVar1 = false;
  }
  else {
    iVar2 = (**(code **)(*(longlong *)(param_1 + 0x148) + 0x20))();
    if (iVar2 <= param_2) goto LAB_142ef1569;
    bVar1 = true;
  }
  if ((param_2 != -1) && (bVar1)) {
    if (*(char *)(param_1 + 0x17c) == '\x01') {
      iVar3 = *(int *)(param_1 + 0x178);
      if (0 < iVar3) {
        iVar2 = param_2 / iVar3;
        iVar3 = param_2 % iVar3;
        goto LAB_142ef15b2;
      }
    }
    else if ((*(char *)(param_1 + 0x17c) == '\0') && (iVar2 = *(int *)(param_1 + 0x174), 0 < iVar2))
    {
      iVar3 = param_2 / iVar2;
      iVar2 = param_2 % iVar2;
      goto LAB_142ef15b2;
    }
  }
  iVar2 = -1;
  iVar3 = -1;
LAB_142ef15b2:
  if (param_3 != (int *)0x0) {
    *param_3 = iVar3;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar2;
  }
  return;
}



// FUNCTION 142ef15e0 SetTimelinePostUpdateFunc body=16 status=ok
// SIG undefined SetTimelinePostUpdateFunc(void)

void FTimeline::SetTimelinePostUpdateFunc(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x50) = *param_2;
  *(undefined8 *)(param_1 + 0x58) = param_2[1];
  return;
}



// FUNCTION 142ef15f0 FUN_142ef15f0 body=1409 status=ok
// SIG undefined FUN_142ef15f0(void)

void FUN_142ef15f0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  char cVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  uint uStack_3c;
  
  lVar14 = 0;
  if ((param_2 != (longlong *)0x0) && (lVar6 = (**(code **)(*param_2 + 0x148))(param_2), lVar6 != 0)
     ) {
    lVar6 = (**(code **)(*param_2 + 0x148))(param_2);
    lVar6 = *(longlong *)(lVar6 + 400);
    if (lVar6 == 0) {
LAB_142ef167f:
      lVar6 = lVar14;
    }
    else {
      lVar7 = FUN_142e4e4a0();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_142ef167f;
    }
    *(longlong *)(param_1 + 0x180) = lVar6;
  }
  FWeakObjectPtr::operator=(param_1 + 0x30,param_2);
  FWeakObjectPtr::operator=(param_1 + 0x38,param_3);
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x30);
  if (cVar4 != '\0') {
    uVar8 = FWeakObjectPtr::Get(param_1 + 0x30);
    cVar4 = FUN_142dd3d20(uVar8);
    uVar8 = 1;
    if (cVar4 != '\0') goto LAB_142ef16c9;
  }
  uVar8 = 2;
LAB_142ef16c9:
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x30);
  if (cVar4 != '\0') {
    uVar9 = FWeakObjectPtr::Get(param_1 + 0x30);
    lVar6 = FUN_14270bb10(uVar9);
    if ((((lVar6 != 0) && (*(longlong *)(lVar6 + 0x70) != 0)) &&
        (*(longlong *)(*(longlong *)(lVar6 + 0x70) + 0xb0) != 0)) &&
       (plVar10 = (longlong *)FMemory::Realloc(0,0x30), plVar10 != (longlong *)0x0)) {
      *plVar10 = (longlong)&PTR_FUN_14428ae88;
      FWeakObjectPtr::operator=(plVar10 + 1,param_1);
      plVar10[2] = (longlong)&LAB_142ef1180;
      plVar10[3] = (ulonglong)uStack_3c << 0x20;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar10[5] = lVar6;
      *plVar10 = (longlong)&PTR_FUN_14428aed0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1465351a8,1);
      (**(code **)(*plVar10 + 0x20))(plVar10,local_res8);
      iVar1 = DAT_1465351b0;
      lVar6 = (longlong)DAT_1465351b0;
      DAT_1465351b0 = DAT_1465351b0 + 1;
      if (DAT_1465351b4 < DAT_1465351b0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1465351a8,iVar1);
      }
      puVar11 = (undefined8 *)(lVar6 * 0x10 + DAT_1465351a8);
      *puVar11 = plVar10;
      *(undefined4 *)(puVar11 + 1) = 3;
    }
  }
  FUN_142f0df30(param_1,uVar8);
  local_res8[0] = 0xffffffff;
  uVar15 = 0xffffffff;
  if (param_1 != 0) {
    FUN_14170c210(local_res8,param_1);
    uVar15 = local_res8[0];
  }
  local_res8[0] = 0xffffffff;
  plVar10 = (longlong *)FUN_14203bd20();
  plVar12 = (longlong *)FMemory::Realloc(0,0x20);
  lVar6 = lVar14;
  if (plVar12 != (longlong *)0x0) {
    *plVar12 = (longlong)&PTR_GetPoolName_145992f20;
    *(undefined4 *)(plVar12 + 1) = uVar15;
    uVar15 = 0xffffffff;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar12[2] = lVar6;
    *plVar12 = (longlong)&PTR_GetPoolName_145992f68;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
    plVar13 = (longlong *)(**(code **)(*plVar12 + 0x20))(plVar12,local_res10);
    iVar1 = (int)plVar10[1];
    lVar6 = *plVar13;
    *(int *)(plVar10 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar10 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
    }
    puVar11 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar10);
    *puVar11 = plVar12;
    *(undefined4 *)(puVar11 + 1) = 2;
  }
  *(longlong *)(param_1 + 0xe0) = lVar6;
  FUN_1416f8340(uVar15);
  FUN_1416f8340(local_res8[0]);
  local_res8[0] = 0xffffffff;
  FUN_14170c210(local_res8,param_1);
  uVar15 = local_res8[0];
  local_res8[0] = 0xffffffff;
  plVar10 = (longlong *)FUN_14203bd30();
  plVar12 = (longlong *)FMemory::Realloc(0,0x20);
  lVar6 = lVar14;
  if (plVar12 != (longlong *)0x0) {
    *plVar12 = (longlong)&PTR_GetPoolName_145992f20;
    *(undefined4 *)(plVar12 + 1) = uVar15;
    uVar15 = 0xffffffff;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar12[2] = lVar6;
    *plVar12 = (longlong)&PTR_GetPoolName_145992f68;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
    plVar13 = (longlong *)(**(code **)(*plVar12 + 0x20))(plVar12,local_res10);
    iVar1 = (int)plVar10[1];
    lVar6 = *plVar13;
    *(int *)(plVar10 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar10 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
    }
    puVar11 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar10);
    *puVar11 = plVar12;
    *(undefined4 *)(puVar11 + 1) = 2;
  }
  *(longlong *)(param_1 + 0xd8) = lVar6;
  FUN_1416f8340(uVar15);
  FUN_1416f8340(local_res8[0]);
  local_res8[0] = 0xffffffff;
  FUN_14170c210(local_res8,param_1);
  uVar15 = local_res8[0];
  local_res8[0] = 0xffffffff;
  plVar10 = (longlong *)FUN_14203c480();
  plVar12 = (longlong *)FMemory::Realloc(0,0x20);
  lVar6 = lVar14;
  if (plVar12 != (longlong *)0x0) {
    *plVar12 = (longlong)&PTR_GetPoolName_145992fb0;
    *(undefined4 *)(plVar12 + 1) = uVar15;
    uVar15 = 0xffffffff;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar12[2] = lVar6;
    *plVar12 = (longlong)&PTR_GetPoolName_145992ff8;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
    plVar13 = (longlong *)(**(code **)(*plVar12 + 0x20))(plVar12,local_res10);
    iVar1 = (int)plVar10[1];
    lVar6 = *plVar13;
    *(int *)(plVar10 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar10 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
    }
    puVar11 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar10);
    *puVar11 = plVar12;
    *(undefined4 *)(puVar11 + 1) = 2;
  }
  *(longlong *)(param_1 + 0xf0) = lVar6;
  FUN_1416f8340(uVar15);
  FUN_1416f8340(local_res8[0]);
  local_res8[0] = 0xffffffff;
  FUN_14170c210(local_res8,param_1);
  uVar15 = local_res8[0];
  local_res8[0] = 0xffffffff;
  plVar10 = (longlong *)FUN_14203bd40();
  plVar12 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar12 != (longlong *)0x0) {
    *plVar12 = (longlong)&PTR_GetPoolName_145993040;
    *(undefined4 *)(plVar12 + 1) = uVar15;
    uVar15 = 0xffffffff;
    lVar14 = FDelegateHandle::GenerateNewID();
    plVar12[2] = lVar14;
    *plVar12 = (longlong)&PTR_GetPoolName_145993088;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
    plVar13 = (longlong *)(**(code **)(*plVar12 + 0x20))(plVar12,local_res10);
    iVar1 = (int)plVar10[1];
    lVar14 = *plVar13;
    *(int *)(plVar10 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar10 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
    }
    puVar11 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar10);
    *puVar11 = plVar12;
    *(undefined4 *)(puVar11 + 1) = 2;
  }
  *(longlong *)(param_1 + 0xe8) = lVar14;
  FUN_1416f8340(uVar15);
  FUN_1416f8340(local_res8[0]);
  piVar3 = DAT_146b3e288;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar5 = GetCurrentThreadId(), DVar5 != DAT_1468c21c0)) {
    iVar1 = piVar3[1];
  }
  else {
    iVar1 = *piVar3;
  }
  *(float *)(param_1 + 0x174) = (float)iVar1;
  return;
}



// FUNCTION 142ef1b80 FUN_142ef1b80 body=104 status=ok
// SIG undefined FUN_142ef1b80(void)

void FUN_142ef1b80(longlong param_1,longlong param_2)

{
  BOOL BVar1;
  undefined8 uVar2;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  }
  *(longlong *)(param_1 + 0x38) = param_2;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_142f2b5a0();
    uVar2 = UObjectBaseUtility::GetInterfaceAddress(param_2,uVar2);
  }
  *(undefined8 *)(param_1 + 0x40) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000142ef1be1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  return;
}



// FUNCTION 142ef1bf0 FUN_142ef1bf0 body=2031 status=ok
// SIG undefined FUN_142ef1bf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ef1bf0(longlong param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auStack_248 [32];
  longlong local_228;
  longlong local_220;
  undefined4 local_218;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  undefined1 local_1f8;
  undefined1 local_1f0;
  longlong local_1e8;
  longlong *local_1d8;
  longlong *local_1d0;
  undefined8 *local_1c8;
  longlong *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  longlong local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined1 local_190 [8];
  undefined1 local_188 [8];
  longlong *local_180;
  longlong *local_178;
  longlong local_168 [2];
  longlong local_158 [2];
  undefined1 local_148 [272];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  local_1a8 = param_1;
  FWeakObjectPtr::operator=(&local_1b8,param_1);
  lVar7 = SFlareCompanyMenu::FArguments::FArguments(local_148);
  *(undefined4 *)(lVar7 + 0x108) = local_1b8;
  *(undefined4 *)(lVar7 + 0x10c) = local_1b4;
  plVar8 = (longlong *)SharedPointerInternals::NewIntrusiveReferenceController<SFlareGameOverMenu>()
  ;
  plVar9 = plVar8 + 2;
  local_180 = plVar9;
  local_178 = plVar8;
  FUN_14044f790(&local_180,plVar9);
  local_228 = 0x2f8;
  SWidget::SetDebugInfo
            (plVar9,"SGbxMenuInputWidget",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxUI\\Private\\MenuInput\\GbxMenuInput.cpp"
             ,0x1ad);
  local_218 = *(undefined4 *)(lVar7 + 0x90);
  local_1e8 = lVar7 + 0xf8;
  local_200 = lVar7 + 0xe8;
  local_1f0 = *(undefined1 *)(lVar7 + 0xf1);
  local_208 = lVar7 + 200;
  local_210 = lVar7 + 0x98;
  local_1f8 = *(undefined1 *)(lVar7 + 0xf0);
  local_220 = lVar7 + 0x78;
  local_228 = lVar7 + 0x60;
  SWidget::SWidgetConstruct(plVar9,lVar7,lVar7 + 0x30,lVar7 + 0x40);
  FUN_142f15590(plVar9,lVar7);
  if (((char)plVar8[5] < '\0') || (cVar5 = (**(code **)(*plVar9 + 0x1e8))(plVar9), cVar5 != '\0')) {
    bVar6 = 1;
  }
  else {
    bVar6 = 0;
  }
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar6;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_1d8 = plVar9;
  local_1d0 = plVar8;
  if ((longlong **)(param_1 + 0x78) != &local_1d8) {
    *(longlong **)(param_1 + 0x78) = plVar9;
    local_1d8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x80,&local_1d0);
  }
  plVar9 = local_1d0;
  if (local_1d0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_1d0 + 1;
    lVar7 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_1d0)(local_1d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_1d0 + 8))(local_1d0,1);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    LOCK();
    plVar9 = plVar8 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar8)(plVar8);
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
  FUN_140456c70(local_148);
  plVar9 = (longlong *)UTwitchInteractivitySettings::GetPrivateStaticClass();
  lVar7 = plVar9[0x1f];
  if (lVar7 == 0) {
    local_1b0 = lVar7;
    (**(code **)(*plVar9 + 0x368))(plVar9);
    lVar7 = plVar9[0x1f];
    local_1b0 = lVar7;
    if (lVar7 == 0) goto LAB_142ef20ce;
  }
  plVar9 = (longlong *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(lVar7 + 0x40);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(lVar7 + 0x44);
  local_1b0 = lVar7;
  if (plVar9 != (longlong *)(lVar7 + 0x48)) {
    iVar16 = *(int *)(param_1 + 0xa8);
    if (iVar16 != 0) {
      lVar15 = *plVar9 + 8;
      do {
        TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
        ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(lVar15);
        lVar15 = lVar15 + 0x20;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
    }
    iVar16 = *(int *)(lVar7 + 0x50);
    lVar7 = *(longlong *)(lVar7 + 0x48);
    *(int *)(param_1 + 0xa8) = iVar16;
    if ((iVar16 == 0) && (*(int *)(param_1 + 0xac) == 0)) {
      *(undefined4 *)(param_1 + 0xac) = 0;
    }
    else {
      TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(plVar9,iVar16);
      plVar9 = (longlong *)*plVar9;
      if (iVar16 != 0) {
        plVar8 = (longlong *)(lVar7 + 8);
        do {
          *plVar9 = plVar8[-1];
          plVar9[1] = 0;
          iVar14 = (int)plVar8[1];
          lVar7 = *plVar8;
          *(int *)(plVar9 + 2) = iVar14;
          if (iVar14 == 0) {
            *(undefined4 *)((longlong)plVar9 + 0x14) = 0;
          }
          else {
            TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar9 + 1,iVar14,0);
            puVar13 = (undefined8 *)plVar9[1];
            puVar10 = (undefined8 *)(lVar7 + 8);
            do {
              *puVar13 = puVar10[-1];
              puVar13[1] = *puVar10;
              lVar7 = puVar10[1];
              puVar13[2] = lVar7;
              if (lVar7 != 0) {
                LOCK();
                *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
                UNLOCK();
              }
              puVar13 = puVar13 + 3;
              puVar10 = puVar10 + 3;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
          }
          *(char *)(plVar9 + 3) = (char)plVar8[2];
          puVar2 = (undefined1 *)((longlong)plVar8 + 0x11);
          plVar8 = plVar8 + 4;
          *(undefined1 *)((longlong)plVar9 + 0x19) = *puVar2;
          plVar9 = plVar9 + 4;
          iVar16 = iVar16 + -1;
          param_1 = local_1a8;
        } while (iVar16 != 0);
      }
    }
  }
  lVar7 = local_1b0;
  plVar9 = (longlong *)(param_1 + 0xb0);
  plVar8 = (longlong *)(local_1b0 + 0x58);
  if (plVar9 != plVar8) {
    iVar16 = *(int *)(param_1 + 0xb8);
    if (iVar16 != 0) {
      lVar15 = *plVar9 + 8;
      do {
        FUN_14099a700(lVar15);
        lVar15 = lVar15 + 0x38;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
    }
    iVar16 = *(int *)(lVar7 + 0x60);
    lVar7 = *plVar8;
    *(int *)(param_1 + 0xb8) = iVar16;
    if ((iVar16 == 0) && (*(int *)(param_1 + 0xbc) == 0)) {
      *(undefined4 *)(param_1 + 0xbc) = 0;
    }
    else {
      TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(plVar9,iVar16);
      plVar9 = (longlong *)*plVar9;
      if (iVar16 != 0) {
        plVar8 = (longlong *)(lVar7 + 8);
        do {
          *plVar9 = plVar8[-1];
          plVar9[1] = 0;
          iVar14 = (int)plVar8[1];
          lVar7 = *plVar8;
          *(int *)(plVar9 + 2) = iVar14;
          if (iVar14 == 0) {
            *(undefined4 *)((longlong)plVar9 + 0x14) = 0;
          }
          else {
            TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(plVar9 + 1,iVar14,0);
            puVar13 = (undefined8 *)plVar9[1];
            puVar10 = (undefined8 *)(lVar7 + 8);
            do {
              *puVar13 = puVar10[-1];
              puVar13[1] = *puVar10;
              lVar7 = puVar10[1];
              puVar13[2] = lVar7;
              if (lVar7 != 0) {
                LOCK();
                *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
                UNLOCK();
              }
              puVar3 = puVar10 + 2;
              puVar10 = puVar10 + 4;
              *(undefined4 *)(puVar13 + 3) = *(undefined4 *)puVar3;
              puVar13 = puVar13 + 4;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
          }
          *(char *)(plVar9 + 3) = (char)plVar8[2];
          plVar9[4] = plVar8[3];
          plVar9[5] = plVar8[4];
          plVar12 = plVar8 + 5;
          plVar8 = plVar8 + 7;
          *(char *)(plVar9 + 6) = (char)*plVar12;
          plVar9 = plVar9 + 7;
          iVar16 = iVar16 + -1;
          param_1 = local_1a8;
        } while (iVar16 != 0);
      }
    }
  }
LAB_142ef20ce:
  puVar10 = (undefined8 *)operator_new(0x10);
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    puVar10[1] = param_1;
    *puVar10 = &PTR_FUN_1459920a0;
  }
  plVar9 = (longlong *)operator_new(0x18);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_143f3f2e0;
    plVar9[2] = (longlong)puVar10;
  }
  local_1c8 = puVar10;
  local_1c0 = plVar9;
  SharedPointerInternals::EnableSharedFromThis(&local_1c8,puVar10,puVar10);
  if ((undefined8 **)(param_1 + 0xd0) != &local_1c8) {
    *(undefined8 **)(param_1 + 0xd0) = puVar10;
    local_1c8 = (undefined8 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xd8,&local_1c0);
    plVar9 = local_1c0;
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
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  puVar10 = (undefined8 *)FName::FName(local_190,L"GbxShiftOverlay",1);
  plVar9 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar10);
  if (plVar9 != (longlong *)0x0) {
    local_1a0 = 0;
    local_198 = 0;
    puVar10 = (undefined8 *)operator_new(0x28,&local_1a0);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &PTR_FUN_144605fe0;
      FWeakObjectPtr::operator=(puVar10 + 1,param_1);
      puVar10[2] = &LAB_142efcc10;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[4] = uVar11;
      *puVar10 = &PTR_FUN_144606028;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar9 + 0xf0))(plVar9,local_188,&local_1a0);
    plVar8 = plVar9 + 1;
    *(undefined8 *)(param_1 + 0xe8) = *puVar10;
    plVar12 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar12 != (longlong *)0x0) {
      *plVar12 = (longlong)&PTR_FUN_145993118;
      FWeakObjectPtr::operator=(plVar12 + 1,param_1);
      plVar12[2] = (longlong)FUN_142ef09f0;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar12[4] = lVar7;
    }
    if (local_168 != plVar8) {
      if (plVar12 == (longlong *)0x0) {
        if (((int)plVar9[2] != 0) && (plVar4 = (longlong *)*plVar8, plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          if (*plVar8 != 0) {
            lVar7 = FMemory::Realloc(*plVar8,0,0);
            *plVar8 = lVar7;
          }
          *(undefined4 *)(plVar9 + 2) = 0;
        }
      }
      else {
        (**(code **)(*plVar12 + 0x30))(plVar12,plVar8);
      }
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x28))(plVar12,0);
      lVar7 = FMemory::Realloc(plVar12,0,0);
      if (lVar7 != 0) {
        FMemory::Free(lVar7);
      }
    }
    plVar8 = plVar9 + 3;
    plVar12 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar12 != (longlong *)0x0) {
      *plVar12 = (longlong)&PTR_FUN_145993158;
      FWeakObjectPtr::operator=(plVar12 + 1,param_1);
      plVar12[2] = (longlong)FUN_142ef0500;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar12[4] = lVar7;
    }
    if (local_158 != plVar8) {
      if (plVar12 == (longlong *)0x0) {
        if (((int)plVar9[4] != 0) && (plVar4 = (longlong *)*plVar8, plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          if (*plVar8 != 0) {
            lVar7 = FMemory::Realloc(*plVar8,0,0);
            *plVar8 = lVar7;
          }
          *(undefined4 *)(plVar9 + 4) = 0;
        }
      }
      else {
        (**(code **)(*plVar12 + 0x30))(plVar12,plVar8);
      }
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x28))(plVar12,0);
      lVar7 = FMemory::Realloc(plVar12,0,0);
      if (lVar7 != 0) {
        FMemory::Free(lVar7);
      }
    }
  }
  return;
}



// FUNCTION 142ef23e0 FUN_142ef23e0 body=95 status=ok
// SIG undefined FUN_142ef23e0(void)

void FUN_142ef23e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (((param_2 != 0) && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (*(longlong *)(param_2 + 0x30) != 0)) {
    (**(code **)(**(longlong **)(param_2 + 0x30) + 0x28))();
    plVar2 = (longlong *)0x0;
    plVar1 = plVar2;
    if (*(longlong *)(param_2 + 0x28) != 0) {
      plVar1 = *(longlong **)(param_2 + 0x30);
    }
    (**(code **)(*plVar1 + 0x30))();
    if (*(longlong *)(param_2 + 0x28) != 0) {
      plVar2 = *(longlong **)(param_2 + 0x30);
    }
    (**(code **)(*plVar2 + 0x38))(plVar2);
  }
  return;
}



// FUNCTION 142ef2440 FUN_142ef2440 body=1362 status=ok
// SIG undefined FUN_142ef2440(void)

void FUN_142ef2440(longlong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  longlong local_res8;
  undefined8 local_res10;
  undefined1 *local_38;
  ulonglong uStack_30;
  
  pwVar9 = (wchar_t *)0x0;
  if ((((*(longlong *)(param_1 + 600) != 0) || (*(longlong *)(param_1 + 0x1a0) == 0)) ||
      (*(char *)(param_1 + 0x250) != '\0')) || (lVar3 = UUserWidget::GetRootWidget(), lVar3 == 0))
  goto LAB_142ef2633;
  lVar4 = UCanvasPanel::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) goto LAB_142ef2633;
  local_res8 = 0;
  pwVar5 = (wchar_t *)UButton::GetPrivateStaticClass();
  uVar1 = *(undefined8 *)(param_1 + 0x1a0);
  pwVar8 = pwVar9;
  if (pwVar5 != (wchar_t *)0x0) {
    pwVar6 = (wchar_t *)UWidget::GetPrivateStaticClass();
    pwVar7 = pwVar5;
    do {
      pwVar8 = pwVar5;
      if (pwVar7 == pwVar6) break;
      pwVar7 = *(wchar_t **)(pwVar7 + 0x18);
      pwVar8 = pwVar9;
    } while (pwVar7 != (wchar_t *)0x0);
  }
  pwVar7 = (wchar_t *)UUserWidget::GetPrivateStaticClass();
  for (; pwVar8 != (wchar_t *)0x0; pwVar8 = *(wchar_t **)(pwVar8 + 0x18)) {
    if (pwVar8 == pwVar7) {
      pwVar8 = pwVar9;
      if (pwVar5 == (wchar_t *)0x0) goto LAB_142ef2939;
      pwVar6 = (wchar_t *)UWidget::GetPrivateStaticClass();
      pwVar7 = pwVar5;
      goto LAB_142ef2928;
    }
  }
  pwVar8 = pwVar9;
  if (pwVar5 != (wchar_t *)0x0) {
    pwVar6 = (wchar_t *)UWidget::GetPrivateStaticClass();
    pwVar7 = pwVar5;
    do {
      pwVar8 = pwVar5;
      if (pwVar7 == pwVar6) break;
      pwVar7 = *(wchar_t **)(pwVar7 + 0x18);
      pwVar8 = pwVar9;
    } while (pwVar7 != (wchar_t *)0x0);
  }
  lVar4 = local_res8;
  local_res10 = 0;
  if (local_res8 == 0) {
    FUN_1417846f0(uVar1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  pwVar8 = (wchar_t *)FUN_1417985e0(pwVar8,uVar1,lVar4,8,0,0,0,0,0);
  goto LAB_142ef258f;
  while (pwVar7 = *(wchar_t **)(pwVar7 + 0x18), pwVar8 = pwVar9, pwVar7 != (wchar_t *)0x0) {
LAB_142ef2928:
    pwVar8 = pwVar5;
    if (pwVar7 == pwVar6) break;
  }
LAB_142ef2939:
  pwVar8 = (wchar_t *)CreateWidget<UUserWidget,UMainPlayerWidget>(uVar1,pwVar8,local_res8);
  if (pwVar8 != (wchar_t *)0x0) {
    lVar4 = UButton::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_142ef258f;
  }
  pwVar8 = pwVar9;
LAB_142ef258f:
  *(wchar_t **)(param_1 + 600) = pwVar8;
  if (pwVar8 != (wchar_t *)0x0) {
    *(undefined1 *)((longlong)pwVar8 + 0x3bb) = 0;
    local_38 = (undefined1 *)0x3f8000003f800000;
    uStack_30 = 0x3f800000;
    FUN_142130270(*(undefined8 *)(param_1 + 600),&local_38);
    local_38 = (undefined1 *)0x3f8000003f800000;
    uStack_30 = 0x3f800000;
    FUN_14212f5e0(*(undefined8 *)(param_1 + 600),&local_38);
    lVar3 = UCanvasPanel::AddChildToCanvas(lVar3,*(undefined8 *)(param_1 + 600));
    if (lVar3 != 0) {
      local_38 = (undefined1 *)0x0;
      uStack_30 = 0;
      UCanvasPanelSlot::SetOffsets(lVar3,&local_38);
      local_38 = (undefined1 *)0x0;
      uStack_30 = 0x3f8000003f800000;
      UCanvasPanelSlot::SetAnchors(lVar3,&local_38);
    }
  }
LAB_142ef2633:
  lVar3 = *(longlong *)(param_1 + 600);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x3f8) < 1) {
      uStack_30 = uStack_30 & 0xffffffff00000000;
      local_38 = &LAB_142c1bdd4;
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UGbxUserWidget::OnFocusableWidgetHovered",L"::");
      pwVar8 = pwVar9;
      while (pwVar7 = pwVar5, pwVar7 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
        pwVar8 = pwVar7;
      }
      FName::FName(&local_res8,pwVar8 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                (*(longlong *)(param_1 + 600) + 0x3f0,param_1,&local_38,local_res8);
      lVar3 = *(longlong *)(param_1 + 600);
    }
    if (*(int *)(lVar3 + 0x408) < 1) {
      uStack_30 = uStack_30 & 0xffffffff00000000;
      local_38 = &LAB_142ee09f0;
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UGbxUserWidget::OnFocusableWidgetUnhovered",L"::");
      pwVar8 = pwVar9;
      while (pwVar7 = pwVar5, pwVar7 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
        pwVar8 = pwVar7;
      }
      FName::FName(&local_res8,pwVar8 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                (*(longlong *)(param_1 + 600) + 0x400,param_1,&local_38,local_res8);
      lVar3 = *(longlong *)(param_1 + 600);
    }
    if (*(int *)(lVar3 + 0x3c8) < 1) {
      uStack_30 = uStack_30 & 0xffffffff00000000;
      local_38 = &LAB_142ee0a08;
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UGbxUserWidget::OnFocusableWidgetClicked",L"::");
      pwVar8 = pwVar9;
      while (pwVar7 = pwVar5, pwVar7 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
        pwVar8 = pwVar7;
      }
      FName::FName(&local_res8,pwVar8 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                (*(longlong *)(param_1 + 600) + 0x3c0,param_1,&local_38,local_res8);
      lVar3 = *(longlong *)(param_1 + 600);
    }
    if (*(int *)(lVar3 + 0x3d8) < 1) {
      uStack_30 = uStack_30 & 0xffffffff00000000;
      local_38 = &LAB_142ee09fc;
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UGbxUserWidget::OnFocusableWidgetPressed",L"::");
      pwVar8 = pwVar9;
      while (pwVar7 = pwVar5, pwVar7 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
        pwVar8 = pwVar7;
      }
      FName::FName(&local_res8,pwVar8 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                (*(longlong *)(param_1 + 600) + 0x3d0,param_1,&local_38,local_res8);
      lVar3 = *(longlong *)(param_1 + 600);
    }
    if (*(int *)(lVar3 + 1000) < 1) {
      uStack_30 = uStack_30 & 0xffffffff00000000;
      local_38 = &LAB_1409f731c;
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UGbxUserWidget::OnFocusableWidgetReleased",L"::");
      while (pwVar5 = pwVar8, pwVar5 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
        pwVar9 = pwVar5;
      }
      FName::FName(&local_res8,pwVar9 + 2,1);
      TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
                (*(longlong *)(param_1 + 600) + 0x3e0,param_1,&local_38,local_res8);
    }
  }
  return;
}



// FUNCTION 142ef29a0 FUN_142ef29a0 body=1119 status=ok
// SIG undefined FUN_142ef29a0(void)

void FUN_142ef29a0(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  longlong local_98 [2];
  undefined8 local_88;
  longlong *local_80;
  longlong local_78 [3];
  longlong *plStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  
  *(undefined1 *)(param_1 + 0x1e0) = *param_2;
  *(undefined1 *)(param_1 + 0x1e1) = param_2[1];
  *(undefined1 *)(param_1 + 0x1e2) = param_2[2];
  *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0xc);
  *(undefined1 *)(param_1 + 0x1f0) = param_2[0x10];
  FString::operator=(param_1 + 0x1f8,param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x208) = param_2[0x28];
  *(undefined1 *)(param_1 + 0x209) = param_2[0x29];
  *(undefined1 *)(param_1 + 0x20a) = param_2[0x2a];
  *(undefined1 *)(param_1 + 0x20b) = param_2[0x2b];
  FString::operator=(param_1 + 0x210,param_2 + 0x30);
  FString::operator=(param_1 + 0x220,param_2 + 0x40);
  FString::operator=(param_1 + 0x230,param_2 + 0x50);
  plVar1 = (longlong *)(param_1 + 0x350);
  *(undefined1 *)(param_1 + 0x240) = param_2[0x60];
  *(undefined1 *)(param_1 + 0x241) = param_2[0x61];
  *(undefined1 *)(param_1 + 0x242) = param_2[0x62];
  *(undefined8 *)(param_1 + 0x244) = *(undefined8 *)(param_2 + 100);
  *(undefined1 *)(param_1 + 0x24c) = param_2[0x6c];
  *(undefined1 *)(param_1 + 0x24d) = param_2[0x6d];
  *(undefined1 *)(param_1 + 0x24e) = param_2[0x6e];
  *(undefined1 *)(param_1 + 0x24f) = param_2[0x6f];
  *(undefined1 *)(param_1 + 0x250) = param_2[0x70];
  *(undefined1 *)(param_1 + 0x251) = param_2[0x71];
  *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_2 + 0x80);
  *(undefined1 *)(param_1 + 0x268) = param_2[0x88];
  *(undefined1 *)(param_1 + 0x269) = param_2[0x89];
  *plVar1 = *(longlong *)(param_2 + 0x90);
  FString::operator=(param_1 + 0x358,param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0x37c) = *(undefined4 *)(param_2 + 0xbc);
  FUN_142edc170((undefined1 *)(param_1 + 0x1e0));
  fVar10 = 0.0;
  fVar8 = *(float *)(param_1 + 0x368);
  if (*(float *)(param_1 + 0x368) <= 0.0) {
    fVar8 = 0.0;
  }
  uVar9 = 1;
  if (0 < *(int *)(param_1 + 0x378)) {
    uVar9 = *(undefined4 *)(param_1 + 0x378);
  }
  *(undefined4 *)(param_1 + 0x378) = uVar9;
  uVar9 = 1;
  if (0 < *(int *)(param_1 + 0x37c)) {
    uVar9 = *(undefined4 *)(param_1 + 0x37c);
  }
  *(float *)(param_1 + 0x368) = fVar8;
  fVar8 = *(float *)(param_1 + 0x36c);
  if (*(float *)(param_1 + 0x36c) <= 0.0) {
    fVar8 = 0.0;
  }
  *(undefined4 *)(param_1 + 0x37c) = uVar9;
  *(float *)(param_1 + 0x36c) = fVar8;
  if (*plVar1 != 0) {
    lVar4 = URemnantGameInstance::GetPrivateStaticClass();
    for (lVar5 = *plVar1; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar4) {
        if (*plVar1 != 0) goto LAB_142ef2b93;
        break;
      }
    }
  }
  lVar5 = URemnantGameInstance::GetPrivateStaticClass();
  *plVar1 = lVar5;
LAB_142ef2b93:
  FUN_142f0e630(param_1 + 0x278,0,1);
  *(undefined4 *)(param_1 + 0x270) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38c) = 0xffffffff;
  FUN_142ee43f0(param_1,0);
  if (*(char *)(param_1 + 0x1e1) == '\0') {
    fVar10 = (float)*(int *)(param_1 + 0x378) * *(float *)(param_1 + 0x36c);
  }
  else if (*(char *)(param_1 + 0x1e1) == '\x01') {
    fVar10 = (float)*(int *)(param_1 + 0x37c) * *(float *)(param_1 + 0x368);
  }
  fVar8 = *(float *)(param_1 + 0x380);
  uVar9 = FUN_142eed2b0(param_1);
  *(float *)(param_1 + 700) = fVar8;
  plVar2 = (longlong *)(param_1 + 0x398);
  *(float *)(param_1 + 0x2d8) = fVar10;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined2 *)(param_1 + 0x2e8) = 1;
  *(float *)(param_1 + 0x2c4) = fVar8 * 0.2;
  *(float *)(param_1 + 0x2c0) = fVar8 * 10.0;
  *(undefined4 *)(param_1 + 0x2dc) = uVar9;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  uVar6 = *(int *)(param_1 + 0x388) * *(int *)(param_1 + 900);
  if (*(int *)(param_1 + 0x3a4) < (int)uVar6) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(plVar2,uVar6);
  }
  if (0 < (int)uVar6) {
    uVar7 = (ulonglong)uVar6;
    do {
      FUN_142eb1960(param_1,local_98,param_1 + 0x358,plVar1);
      if (local_80 != (longlong *)0x0) {
        FUN_142f05ef0(param_1,local_80,0);
        (**(code **)(local_80[0x2e] + 0x38))(local_80 + 0x2e,1);
        FUN_142ebc100(local_80 + 0x2e);
        (**(code **)(*local_80 + 0x280))();
        local_78[0] = 0;
        local_78[1] = 0;
        local_78[2] = 0;
        plStack_60 = (longlong *)0x0;
        FWeakObjectPtr::operator=(&local_58,0);
        local_50 = 0xffffffffffffffff;
        FString::operator=(local_78,local_98);
        local_78[2] = local_88;
        plStack_60 = local_80;
        FWeakObjectPtr::operator=(&local_58,param_1);
        iVar3 = *(int *)(param_1 + 0x3a0);
        *(int *)(param_1 + 0x3a0) = iVar3 + 1;
        if (*(int *)(param_1 + 0x3a4) < iVar3 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar2,iVar3);
        }
        lVar5 = (longlong)iVar3 * 0x30 + *plVar2;
        FString::FString(lVar5,local_78);
        *(longlong *)(lVar5 + 0x10) = local_78[2];
        *(longlong **)(lVar5 + 0x18) = plStack_60;
        *(undefined4 *)(lVar5 + 0x20) = local_58;
        *(undefined4 *)(lVar5 + 0x24) = local_54;
        *(undefined4 *)(lVar5 + 0x28) = (undefined4)local_50;
        *(undefined4 *)(lVar5 + 0x2c) = local_50._4_4_;
        if (local_78[0] != 0) {
          FMemory::Free();
        }
      }
      if (local_98[0] != 0) {
        FMemory::Free();
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 142ef2e00 FUN_142ef2e00 body=131 status=ok
// SIG undefined FUN_142ef2e00(void)

void FUN_142ef2e00(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x2e8);
  if (lVar3 != 0) {
    lVar4 = *param_2;
    lVar1 = lVar4 + (longlong)(int)param_2[1] * 0x18;
    if (lVar4 != lVar1) {
      do {
        uVar2 = FText::ToString(lVar4);
        FUN_1420e0460(*(undefined8 *)(param_1 + 0x2e8),uVar2);
        lVar4 = lVar4 + 0x18;
      } while (lVar4 != lVar1);
      lVar3 = *(longlong *)(param_1 + 0x2e8);
    }
    FUN_142134ed0(lVar3,param_3);
  }
  return;
}



// FUNCTION 142ef2e90 FUN_142ef2e90 body=581 status=ok
// SIG undefined FUN_142ef2e90(void)

void FUN_142ef2e90(longlong param_1,float param_2,float param_3,float param_4,float param_5,
                  char param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_88;
  longlong *plStack_80;
  undefined1 local_78 [112];
  
  fVar7 = param_3;
  if (param_4 <= param_3) {
    fVar7 = param_4;
  }
  if (param_3 <= param_4) {
    param_3 = param_4;
  }
  *(float *)(param_1 + 0x2f4) = fVar7;
  *(float *)(param_1 + 0x2f8) = param_3;
  fVar10 = fVar7;
  if ((fVar7 <= param_2) && (fVar10 = param_3, param_2 <= param_3)) {
    fVar10 = param_2;
  }
  param_3 = param_3 - fVar7;
  fVar9 = 0.0;
  if (0.0 <= param_5) {
    fVar8 = param_3;
    if (param_5 <= param_3) {
      fVar8 = param_5;
    }
  }
  else {
    fVar8 = 0.0;
  }
  *(float *)(param_1 + 0x2f0) = fVar8;
  param_5 = (1.0 / param_3) * param_5;
  if (0.0 < fVar8) {
    plVar3 = (longlong *)(param_1 + 0x308);
    *(undefined4 *)(param_1 + 0x310) = 0;
    if (*(int *)(param_1 + 0x314) != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar3,0);
    }
    do {
      iVar4 = *(int *)(param_1 + 0x310);
      *(int *)(param_1 + 0x310) = iVar4 + 1;
      if (*(int *)(param_1 + 0x314) < iVar4 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar3,iVar4);
      }
      *(float *)(*plVar3 + (longlong)iVar4 * 4) = fVar9;
      fVar9 = fVar9 + param_5;
    } while (fVar9 < 1.0);
    iVar4 = *(int *)(param_1 + 0x310);
    *(int *)(param_1 + 0x310) = iVar4 + 1;
    if (*(int *)(param_1 + 0x314) < iVar4 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar3,iVar4);
    }
    *(undefined4 *)(*plVar3 + (longlong)iVar4 * 4) = 0x3f800000;
    if (*(longlong *)(param_1 + 0x2e8) != 0) {
      FUN_1421356e0(*(longlong *)(param_1 + 0x2e8),param_5);
    }
  }
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    FUN_142136670(*(longlong *)(param_1 + 0x2e8),(fVar10 - fVar7) * (1.0 / param_3));
  }
  if (*(longlong **)(param_1 + 0x220) == (longlong *)0x0) {
    *(char *)(param_1 + 0x2fc) = param_6;
  }
  else {
    local_88 = 0;
    plStack_80 = (longlong *)0x0;
    if (param_6 != '\0') {
      fVar10 = (float)(int)fVar10;
    }
    lVar5 = **(longlong **)(param_1 + 0x220);
    uVar6 = FText::AsNumber(local_78,fVar10,0,&local_88);
    (**(code **)(lVar5 + 0x2d0))(*(undefined8 *)(param_1 + 0x220),uVar6);
    plVar3 = plStack_80;
    if (plStack_80 == (longlong *)0x0) {
      *(char *)(param_1 + 0x2fc) = param_6;
    }
    else {
      LOCK();
      plVar1 = plStack_80 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(char *)(param_1 + 0x2fc) = param_6;
    }
  }
  return;
}



// FUNCTION 142ef30e0 FUN_142ef30e0 body=770 status=ok
// SIG undefined FUN_142ef30e0(void)

undefined8
FUN_142ef30e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             float param_5,undefined4 param_6)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_c8 [72];
  longlong local_80;
  
  uVar5 = FUN_1404b03b0();
  FText::FText(local_118,uVar5);
  cVar4 = FUN_142ef5770(param_2,param_3,param_4);
  if (cVar4 != '\0') {
    FUN_142ef33f0(local_c8,param_2,param_3,param_4);
    if (local_80 != 0) {
      lVar6 = UTexture2D::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(local_80 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(local_80 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        fVar9 = 0.0;
        iVar8 = 0;
        if (param_5 <= 0.0) {
          param_5 = 1.0;
        }
        else if (*(longlong *)(local_80 + 0xd8) == 0) {
          param_5 = param_5 / 0.0;
        }
        else {
          param_5 = param_5 / (float)*(int *)(*(longlong *)(local_80 + 0xd8) + 4);
        }
        fVar10 = 0.0;
        if (1e-08 < ABS(param_5 - 1.0)) {
          piVar2 = *(int **)(local_80 + 0xd8);
          iVar7 = iVar8;
          if (piVar2 != (int *)0x0) {
            iVar7 = *piVar2;
          }
          fVar9 = (float)iVar7 * param_5;
          if (piVar2 != (int *)0x0) {
            iVar8 = piVar2[1];
          }
          fVar10 = (float)iVar8 * param_5;
        }
        lVar6 = UTexture2D::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(local_80 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(local_80 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        lVar6 = 0;
        if (bVar3) {
          lVar6 = local_80;
        }
        uVar5 = FUN_142eea840(local_100,lVar6,(int)fVar9,(int)fVar10,param_6);
        FText::operator=(local_118,uVar5);
        if (local_f8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_f8 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_f8)(local_f8);
            LOCK();
            piVar2 = (int *)((longlong)local_f8 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_f8 + 8))(local_f8,1);
            }
          }
        }
        FText::FText(param_1,local_118);
        FSlateBrush::~FSlateBrush(local_c8);
        goto LAB_142ef3389;
      }
    }
    FSlateBrush::~FSlateBrush(local_c8);
  }
  uVar5 = FUN_142ef3b90(local_e8,param_2,param_3,param_4);
  FText::operator=(local_118,uVar5);
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_e0 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar2 = (int *)((longlong)local_e0 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_e0 + 8))(local_e0,1);
      }
    }
  }
  FText::FText(param_1,local_118);
LAB_142ef3389:
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar2 = (int *)((longlong)local_110 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 142ef33f0 FUN_142ef33f0 body=520 status=ok
// SIG undefined FUN_142ef33f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142ef33f0(undefined8 param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined ***pppuVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong local_res10;
  undefined8 local_res18;
  undefined1 local_168 [16];
  longlong *local_158;
  undefined **local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  byte local_d0;
  undefined1 local_c8 [144];
  
  lVar8 = 0;
  local_res10 = param_2;
  if (param_3 != 0) {
    uVar4 = FUN_142f30760();
    plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_3,uVar4);
    if ((plVar5 != (longlong *)0x0) && (lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5), lVar6 != 0))
    {
      lVar8 = *(longlong *)(lVar6 + 0x30);
    }
  }
  uVar3 = FUN_142ee1560(param_3,param_4);
  if (lVar8 != 0) {
    plVar5 = *(longlong **)(lVar8 + 0x40);
    plVar9 = plVar5 + (longlong)*(int *)(lVar8 + 0x48) * 0xa1;
    for (; plVar5 != plVar9; plVar5 = plVar5 + 0xa1) {
      if (*plVar5 == param_2) {
        FUN_142f12170(lVar8,param_1,&local_res10,uVar3);
        return param_1;
      }
    }
  }
  FUN_142ef3600(local_168,param_2,param_3,param_4);
  if (lVar8 == 0) {
    local_d0 = local_d0 & 0xfc;
    local_148 = 0x4200000042000000;
    uStack_140 = 0;
    local_150 = &PTR__scalar_deleting_destructor__143f489a8;
    pppuVar7 = &local_150;
    local_138 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_120 = 0;
    local_130 = _DAT_1464aa6c0;
    uStack_128 = _DAT_1464aa6c8;
    local_108 = 0;
    local_f8 = (undefined4)DAT_1468b5d88;
    local_res18 = DAT_1468b5d88;
    uVar4 = local_res18;
    local_res18._4_4_ = (undefined4)((ulonglong)DAT_1468b5d88 >> 0x20);
    local_ec = local_res18._4_4_;
    local_f4 = local_res18._4_4_;
    local_100 = 0;
    local_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_e4 = 3;
    local_res18 = uVar4;
    local_f0 = local_f8;
  }
  else {
    pppuVar7 = (undefined ***)FUN_142ef4060(lVar8,local_c8,local_168,uVar3);
  }
  FUN_14080bc50(param_1,pppuVar7);
  if (lVar8 == 0) {
    FSlateBrush::~FSlateBrush(&local_150);
  }
  else {
    FSlateBrush::~FSlateBrush(local_c8);
  }
  plVar5 = local_158;
  if (local_158 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_158 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_158 + 8))(local_158,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 142ef3600 FUN_142ef3600 body=913 status=ok
// SIG undefined FUN_142ef3600(void)

longlong * FUN_142ef3600(longlong *param_1,longlong param_2,longlong param_3,char param_4)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  longlong *local_38;
  undefined8 local_30;
  
  bVar9 = false;
  if (param_4 == '\0') {
    if (param_3 != 0) {
      uVar3 = FUN_142f30760();
      plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_3,uVar3);
      if ((plVar6 != (longlong *)0x0) && (lVar5 = (**(code **)(*plVar6 + 0x18))(plVar6), lVar5 != 0)
         ) {
        bVar9 = *(char *)(lVar5 + 0xb8) == '\x01';
        goto LAB_142ef3666;
      }
    }
LAB_142ef3663:
    bVar9 = false;
  }
  else {
    if (param_4 == '\x01') goto LAB_142ef3663;
    if (param_4 == '\x02') {
      bVar9 = true;
    }
  }
LAB_142ef3666:
  if (param_3 != 0) {
    uVar3 = FUN_142f30760();
    plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_3,uVar3);
    plVar6 = *(longlong **)(param_3 + 0x5b8);
    if (plVar6 == (longlong *)0x0) {
LAB_142ef36d6:
      plVar6 = (longlong *)0x0;
    }
    else {
      lVar5 = FUN_140681420();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_142ef36d6;
    }
    if ((((plVar4 != (longlong *)0x0) &&
         (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4), plVar4 != (longlong *)0x0)) &&
        (plVar6 != (longlong *)0x0)) &&
       (lVar5 = (**(code **)(*plVar4 + 0x280))(plVar4,param_3,param_2), lVar5 != 0)) {
      local_38 = (longlong *)0x0;
      local_30 = 0;
      cVar2 = (**(code **)(*plVar6 + 0x298))(plVar6,lVar5,&local_38);
      if (cVar2 != '\0') {
        plVar6 = local_38 + (longlong)(int)local_30 * 3;
        for (plVar4 = local_38; plVar4 != plVar6; plVar4 = plVar4 + 3) {
          cVar2 = FKey::IsGamepadKey(plVar4);
          if ((bool)cVar2 == bVar9) {
            *param_1 = *plVar4;
            param_1[1] = plVar4[1];
            lVar5 = plVar4[2];
            param_1[2] = lVar5;
            if (lVar5 != 0) {
              LOCK();
              *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
              UNLOCK();
            }
            TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
            ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(&local_38);
            return param_1;
          }
        }
      }
      TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
      ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(&local_38);
    }
  }
  plVar6 = (longlong *)UTwitchInteractivitySettings::GetPrivateStaticClass();
  lVar5 = plVar6[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar5 = plVar6[0x1f];
    if (lVar5 != 0) goto LAB_142ef37a0;
  }
  else {
LAB_142ef37a0:
    plVar6 = *(longlong **)(lVar5 + 0x48);
    plVar4 = plVar6 + (longlong)*(int *)(lVar5 + 0x50) * 4;
    for (; plVar6 != plVar4; plVar6 = plVar6 + 4) {
      if (param_2 == *plVar6) {
        plVar8 = (longlong *)plVar6[1];
        plVar7 = plVar8 + (longlong)(int)plVar6[2] * 3;
        for (; plVar8 != plVar7; plVar8 = plVar8 + 3) {
          cVar2 = FKey::IsGamepadKey(plVar8);
          if ((bool)cVar2 == bVar9) goto LAB_142ef3965;
        }
      }
    }
    plVar6 = *(longlong **)(lVar5 + 0x58);
    plVar4 = plVar6 + (longlong)*(int *)(lVar5 + 0x60) * 7;
    for (; plVar6 != plVar4; plVar6 = plVar6 + 7) {
      if (param_2 == *plVar6) {
        plVar8 = (longlong *)plVar6[1];
        plVar7 = plVar8 + (longlong)(int)plVar6[2] * 4;
        for (; plVar8 != plVar7; plVar8 = plVar8 + 4) {
          cVar2 = FKey::IsGamepadKey(plVar8);
          if ((bool)cVar2 == bVar9) goto LAB_142ef3965;
        }
      }
    }
  }
  plVar6 = (longlong *)UInputSettings::GetPrivateStaticClass();
  lVar5 = plVar6[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar5 = plVar6[0x1f];
    if (lVar5 != 0) goto LAB_142ef3873;
  }
  else {
LAB_142ef3873:
    plVar4 = *(longlong **)(lVar5 + 0x80);
    plVar6 = plVar4 + (longlong)*(int *)(lVar5 + 0x88) * 5;
    for (; plVar4 != plVar6; plVar4 = plVar4 + 5) {
      if ((param_2 == *plVar4) && (cVar2 = FKey::IsGamepadKey(plVar4 + 2), (bool)cVar2 == bVar9))
      goto LAB_142ef3979;
    }
    plVar4 = *(longlong **)(lVar5 + 0x90);
    plVar6 = plVar4 + (longlong)*(int *)(lVar5 + 0x98) * 5;
    for (; plVar4 != plVar6; plVar4 = plVar4 + 5) {
      if ((param_2 == *plVar4) && (cVar2 = FKey::IsGamepadKey(plVar4 + 2), (bool)cVar2 == bVar9))
      goto LAB_142ef3979;
    }
  }
  *param_1 = DAT_1469eae28;
  param_1[1] = DAT_1469eae30;
  lVar5 = DAT_1469eae38;
  goto LAB_142ef390c;
LAB_142ef3965:
  *param_1 = *plVar8;
  param_1[1] = plVar8[1];
  lVar5 = plVar8[2];
  goto LAB_142ef390c;
LAB_142ef3979:
  *param_1 = plVar4[2];
  param_1[1] = plVar4[3];
  lVar5 = plVar4[4];
LAB_142ef390c:
  param_1[2] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 142ef39a0 FUN_142ef39a0 body=484 status=ok
// SIG undefined FUN_142ef39a0(void)

undefined8
FUN_142ef39a0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
             undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [72];
  longlong local_60;
  
  uVar5 = FUN_1404b03b0();
  FText::FText(param_1,uVar5);
  if ((((float)param_5 == 0.0) && (param_5._4_4_ == 0.0)) && (param_3 != 0)) {
    uVar5 = FUN_142f30760();
    plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_3,uVar5);
    if ((plVar6 != (longlong *)0x0) && (lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6), lVar7 != 0))
    {
      param_5 = *(undefined8 *)(lVar7 + 0xf8);
    }
  }
  cVar4 = FUN_142ef5770(param_2,param_3,param_4);
  if (cVar4 == '\0') {
    uVar5 = FUN_142ef3b90(local_c0,param_2,param_3,param_4);
    FText::operator=(param_1,uVar5);
    if (local_b8 == (longlong *)0x0) {
      return param_1;
    }
    LOCK();
    plVar6 = local_b8 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 != 1) {
      return param_1;
    }
    (**(code **)*local_b8)(local_b8);
    LOCK();
    piVar1 = (int *)((longlong)local_b8 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) {
      return param_1;
    }
    (**(code **)(*local_b8 + 8))(local_b8,1);
    return param_1;
  }
  FUN_142ef33f0(local_a8);
  if (local_60 != 0) {
    lVar7 = UTexture2D::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(local_60 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_60 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_142ef3aa3;
  }
  local_60 = 0;
LAB_142ef3aa3:
  uVar5 = FUN_142eea840(local_d8,local_60,(int)(float)param_5,(int)param_5._4_4_,0);
  FText::operator=(param_1,uVar5);
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_d0 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)local_d0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  FSlateBrush::~FSlateBrush(local_a8);
  return param_1;
}



// FUNCTION 142ef3b90 FUN_142ef3b90 body=1222 status=ok
// SIG undefined FUN_142ef3b90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142ef3b90(undefined8 param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong local_res10 [3];
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  ulonglong *puStack_190;
  undefined4 local_188;
  undefined8 local_180;
  longlong local_178;
  undefined1 local_170 [16];
  longlong *local_160;
  undefined1 local_158 [16];
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [16];
  undefined1 local_90 [24];
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48 [3];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  lVar11 = 0;
  local_188 = 0;
  local_res10[0] = param_2;
  uVar6 = FUN_142ee1560(param_3,param_4);
  if (param_3 != 0) {
    uVar7 = FUN_142f30760();
    plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_3,uVar7);
    if ((plVar8 != (longlong *)0x0) && (lVar9 = (**(code **)(*plVar8 + 0x10))(plVar8), lVar9 != 0))
    {
      lVar11 = *(longlong *)(lVar9 + 0x30);
    }
  }
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1,L"[UNBOUND]",L"GbxUILocalization",L"NoBinding");
  if (lVar11 != 0) {
    plVar8 = *(longlong **)(lVar11 + 0x40);
    plVar13 = plVar8 + (longlong)*(int *)(lVar11 + 0x48) * 0xa1;
    for (; plVar8 != plVar13; plVar8 = plVar8 + 0xa1) {
      if (*plVar8 == local_res10[0]) {
        uVar7 = FUN_142f12390(lVar11,local_100,local_res10,uVar6);
        FText::FText(local_148,uVar7);
        if (local_f8 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_f8 + 1;
          lVar11 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
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
        FText::operator=(param_1,local_148);
        if (local_140 == (longlong *)0x0) {
          return param_1;
        }
        LOCK();
        plVar8 = local_140 + 1;
        lVar11 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar11 != 1) {
          return param_1;
        }
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar1 = (int *)((longlong)local_140 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 != 1) {
          return param_1;
        }
        (**(code **)(*local_140 + 8))(local_140,1);
        return param_1;
      }
    }
  }
  FUN_142ef3600(local_170,local_res10[0],param_3,param_4);
  if (lVar11 == 0) {
    lVar11 = FUN_1417ad2a0(local_170,local_90);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_d0,L"[{0}]",L"GbxUILocalization",L"KeyWithBrackets");
    puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_a0,uVar7);
    local_78[0] = 4;
    FText::FText(local_68,lVar11);
    local_180 = *puVar12;
    local_198 = local_78;
    puStack_190 = local_48;
    local_178 = puVar12[1];
    local_50 = '\x01';
    if (local_178 != 0) {
      LOCK();
      *(int *)(local_178 + 8) = *(int *)(local_178 + 8) + 1;
      UNLOCK();
    }
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_158,&local_198);
    uVar7 = FText::Format(local_e8,&local_180,uVar7);
    FText::FText(local_130,uVar7);
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_e0 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar1 = (int *)((longlong)local_e0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_e0 + 8))(local_e0,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_158);
    if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
      LOCK();
      plVar8 = local_60 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    plVar8 = (longlong *)puVar12[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar8 + 1;
      lVar9 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar8)(plVar8);
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
    plVar8 = *(longlong **)(lVar11 + 8);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar8 + 1;
      lVar11 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar8)(plVar8);
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
    puVar10 = local_130;
    bVar5 = false;
    bVar4 = true;
    bVar3 = true;
  }
  else {
    puVar10 = (undefined1 *)FUN_142ef4280(lVar11,local_b8,local_170,uVar6);
    bVar5 = true;
    bVar4 = false;
    bVar3 = false;
  }
  FText::FText(local_118,puVar10);
  if ((bVar3) && (local_128 != (longlong *)0x0)) {
    LOCK();
    plVar8 = local_128 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_128)(local_128);
      LOCK();
      piVar1 = (int *)((longlong)local_128 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_128 + 8))(local_128,1);
      }
    }
  }
  if ((bVar4) && (local_c8 != (longlong *)0x0)) {
    LOCK();
    plVar8 = local_c8 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar1 = (int *)((longlong)local_c8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_c8 + 8))(local_c8,1);
      }
    }
  }
  if ((bVar5) && (local_b0 != (longlong *)0x0)) {
    LOCK();
    plVar8 = local_b0 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  FText::operator=(param_1,local_118);
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_110 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar1 = (int *)((longlong)local_110 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  if (local_160 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_160 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_160)(local_160);
      LOCK();
      piVar1 = (int *)((longlong)local_160 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_160 + 8))(local_160,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 142ef4060 FUN_142ef4060 body=508 status=ok
// SIG undefined FUN_142ef4060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_142ef4060(longlong param_1,undefined8 *param_2,longlong *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uStackX_c;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  plVar2 = plVar3 + (longlong)*(int *)(param_1 + 0x38) * 0xa3;
  if (plVar3 != plVar2) {
    do {
      if (*plVar3 == *param_3) {
        switch(param_4) {
        case 0:
          FUN_14080bc50(param_2,plVar3 + 0x1b);
          return param_2;
        case 1:
          FUN_14080bc50(param_2,plVar3 + 0x2c);
          return param_2;
        case 2:
          FUN_14080bc50(param_2,plVar3 + 0x3d);
          return param_2;
        case 3:
          FUN_14080bc50(param_2,plVar3 + 0x70);
          return param_2;
        case 4:
          FUN_14080bc50(param_2,plVar3 + 0x81);
          return param_2;
        case 5:
          FUN_14080bc50(param_2,plVar3 + 0x92);
          return param_2;
        case 6:
          FUN_14080bc50(param_2,plVar3 + 0x4e);
          return param_2;
        case 7:
          FUN_14080bc50(param_2,plVar3 + 0x5f);
          return param_2;
        default:
          *param_2 = &PTR__scalar_deleting_destructor__143f489a8;
          *(undefined4 *)(param_2 + 1) = 0x42000000;
          *(undefined8 *)((longlong)param_2 + 0xc) = 0x42000000;
          *(undefined8 *)((longlong)param_2 + 0x14) = 0;
          *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
          uVar1 = _DAT_1464aa6c8;
          param_2[4] = _DAT_1464aa6c0;
          param_2[5] = uVar1;
          *(undefined1 *)(param_2 + 6) = 0;
          param_2[7] = 0;
          param_2[8] = 0;
          param_2[9] = 0;
          param_2[10] = 0;
          uStackX_c = (undefined4)((ulonglong)DAT_1468b5d88 >> 0x20);
        }
        goto LAB_142ef40ec;
      }
      plVar3 = plVar3 + 0xa3;
    } while (plVar3 != plVar2);
  }
  *param_2 = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_2 + 1) = 0x42000000;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0x42000000;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_2[4] = _DAT_1464aa6c0;
  param_2[5] = uVar1;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  uStackX_c = (undefined4)((ulonglong)DAT_1468b5d88 >> 0x20);
LAB_142ef40ec:
  uVar4 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_2 + 0xc) = uVar4;
  *(undefined4 *)((longlong)param_2 + 100) = uStackX_c;
  *(undefined4 *)(param_2 + 0xb) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0x5c) = uStackX_c;
  *(undefined1 *)(param_2 + 0xd) = 0;
  *(undefined4 *)((longlong)param_2 + 0x6c) = 3;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) & 0xfc;
  return param_2;
}



// FUNCTION 142ef4280 FUN_142ef4280 body=788 status=ok
// SIG undefined FUN_142ef4280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142ef4280(longlong param_1,undefined8 param_2,longlong *param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  ulonglong *puStack_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [24];
  undefined4 local_60 [4];
  undefined1 local_50 [8];
  longlong *local_48;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  plVar7 = *(longlong **)(param_1 + 0x30);
  plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0x38) * 0xa3;
  if (plVar7 != plVar8) {
    do {
      if (*plVar7 == *param_3) {
        switch(param_4) {
        case 0:
          FText::FText(param_2,plVar7 + 3);
          return param_2;
        case 1:
          FText::FText(param_2,plVar7 + 6);
          return param_2;
        case 2:
          FText::FText(param_2,plVar7 + 9);
          return param_2;
        case 3:
          FText::FText(param_2,plVar7 + 0x12);
          return param_2;
        case 4:
          FText::FText(param_2,plVar7 + 0x15);
          return param_2;
        case 5:
          FText::FText(param_2,plVar7 + 0x18);
          return param_2;
        case 6:
          FText::FText(param_2,plVar7 + 0xc);
          return param_2;
        case 7:
          FText::FText(param_2,plVar7 + 0xf);
          return param_2;
        }
      }
      plVar7 = plVar7 + 0xa3;
    } while (plVar7 != plVar8);
  }
  lVar4 = FUN_1417ad2a0(param_3,local_78);
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_a0,L"[{0}]",L"GbxUILocalization",L"KeyWithBrackets");
  puVar6 = (undefined8 *)FTextFormat::FTextFormat(local_88,uVar5);
  local_60[0] = 4;
  FText::FText(local_50,lVar4);
  local_d8 = *puVar6;
  local_e8 = local_60;
  puStack_e0 = &local_30;
  local_d0 = puVar6[1];
  local_38 = '\x01';
  if (local_d0 != 0) {
    LOCK();
    *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
    UNLOCK();
  }
  uVar5 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_c8,&local_e8);
  uVar5 = FText::Format(local_b8,&local_d8,uVar5);
  FText::FText(param_2,uVar5);
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_b0 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_c8);
  if ((local_38 != '\0') && (local_38 = '\0', local_48 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_48 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  plVar7 = (longlong *)puVar6[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  plVar7 = *(longlong **)(lVar4 + 8);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
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
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_98 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return param_2;
}



// FUNCTION 142ef45c0 FUN_142ef45c0 body=299 status=ok
// SIG undefined FUN_142ef45c0(void)

void FUN_142ef45c0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if ((param_2 != (longlong *)0x0) && ((param_2[0x59] == 0 || (param_2[0x5a] == 0)))) {
    plVar1 = param_1 + -0x29;
    UGridPanel::AddChildToGrid(plVar1);
    lVar5 = 0;
    param_2[0x59] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      uVar4 = FUN_142f2b0d0();
      lVar5 = UObjectBaseUtility::GetInterfaceAddress(plVar1,uVar4);
    }
    param_2[0x5a] = lVar5;
    if (*(char *)((longlong)param_2 + 0x231) == '\x03') {
      cVar2 = *(char *)((longlong)param_1 + 0x5a);
      if (*(char *)((longlong)param_1 + 0x5a) == '\x03') {
        cVar2 = '\0';
      }
      *(char *)((longlong)param_2 + 0x231) = cVar2;
    }
    *(byte *)((longlong)param_2 + 0x1ac) = *(byte *)((longlong)param_2 + 0x1ac) & 0xfd;
    (**(code **)(*param_2 + 0x498))(param_2,0xffffffff);
    FUN_142ebc100(param_2 + 0x41);
    FUN_142f04000(plVar1);
    cVar2 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x24);
    if (cVar2 != '\0') {
      FWeakObjectPtr::Get((longlong)param_1 + 0x24);
      iVar3 = (**(code **)(*param_1 + 0x20))(param_1);
      if (iVar3 == 1) {
        lVar5 = FWeakObjectPtr::Get((longlong)param_1 + 0x24);
        if ((((*(longlong *)(lVar5 + 0x2d8) != 0) && (plVar1 != (longlong *)0x0)) &&
            (plVar1 == *(longlong **)(*(longlong *)(lVar5 + 0x2d8) + 0x48))) &&
           ((char)param_1[0xe] != '\0')) {
          (**(code **)(*param_1 + 0x50))(param_1,param_2,1,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 142ef46f0 FUN_142ef46f0 body=275 status=ok
// SIG undefined FUN_142ef46f0(void)

void FUN_142ef46f0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_2 != (longlong *)0x0) {
    plVar1 = param_1 + -0x10c;
    FUN_1420def40(plVar1);
    lVar5 = 0;
    param_2[0x59] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      uVar4 = FUN_142f2b0d0();
      lVar5 = UObjectBaseUtility::GetInterfaceAddress(plVar1,uVar4);
    }
    param_2[0x5a] = lVar5;
    if (*(char *)((longlong)param_2 + 0x231) == '\x03') {
      cVar2 = *(char *)((longlong)param_1 + 0x49);
      if (*(char *)((longlong)param_1 + 0x49) == '\x03') {
        cVar2 = '\0';
      }
      *(char *)((longlong)param_2 + 0x231) = cVar2;
    }
    *(byte *)((longlong)param_2 + 0x1ac) = *(byte *)((longlong)param_2 + 0x1ac) & 0xfd;
    (**(code **)(*param_2 + 0x498))(param_2,0xffffffff);
    FUN_142ebc100(param_2 + 0x41);
    FUN_142f04170(plVar1);
    cVar2 = FWeakObjectPtr::IsValid(param_1 + 4);
    if (cVar2 != '\0') {
      FWeakObjectPtr::Get(param_1 + 4);
      iVar3 = (**(code **)(*param_1 + 0x20))(param_1);
      if (iVar3 == 1) {
        lVar5 = FWeakObjectPtr::Get(param_1 + 4);
        if ((((*(longlong *)(lVar5 + 0x2d8) != 0) && (plVar1 != (longlong *)0x0)) &&
            (plVar1 == *(longlong **)(*(longlong *)(lVar5 + 0x2d8) + 0x48))) &&
           ((char)param_1[0xc] != '\0')) {
          (**(code **)(*param_1 + 0x50))(param_1,param_2,1,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 142ef4810 FUN_142ef4810 body=311 status=ok
// SIG undefined FUN_142ef4810(void)

void FUN_142ef4810(longlong *param_1,float param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x5e);
  if ((((param_2 != fVar1) || (*(float *)(param_1 + 0x5b) != *(float *)(param_1 + 0x31))) ||
      (*(float *)((longlong)param_1 + 0x2dc) != *(float *)((longlong)param_1 + 0x18c))) ||
     (((*(float *)((longlong)param_1 + 0x2ec) != *(float *)((longlong)param_1 + 0x19c) ||
       (fVar1 != *(float *)(param_1 + 0x34))) ||
      (*(float *)((longlong)param_1 + 0x2f4) != *(float *)((longlong)param_1 + 0x1a4))))) {
    *(int *)(param_1 + 0x5b) = (int)param_1[0x31];
    *(undefined4 *)((longlong)param_1 + 0x2dc) = *(undefined4 *)((longlong)param_1 + 0x18c);
    *(char *)(param_1 + 0x5c) = (char)param_1[0x32];
    *(undefined4 *)((longlong)param_1 + 0x2e4) = *(undefined4 *)((longlong)param_1 + 0x194);
    *(int *)(param_1 + 0x5d) = (int)param_1[0x33];
    *(undefined4 *)((longlong)param_1 + 0x2ec) = *(undefined4 *)((longlong)param_1 + 0x19c);
    *(int *)(param_1 + 0x5e) = (int)param_1[0x34];
    *(undefined4 *)((longlong)param_1 + 0x2f4) = *(undefined4 *)((longlong)param_1 + 0x1a4);
    *(int *)(param_1 + 0x5f) = (int)param_1[0x35];
    *(undefined4 *)((longlong)param_1 + 0x2fc) = *(undefined4 *)((longlong)param_1 + 0x1ac);
    *(float *)((longlong)param_1 + 0x2ec) = fVar1;
    *(float *)(param_1 + 0x5e) = fVar1;
    *(float *)((longlong)param_1 + 0x2f4) = param_2;
    *(undefined4 *)(param_1 + 0x5f) = 0;
    fVar1 = *(float *)(param_1 + 0x2f);
    if (param_2 != fVar1) {
      *(float *)(param_1 + 0x2f) = param_2;
      (**(code **)(*param_1 + 0x2b0))(fVar1,fVar1,param_2);
      LOCK();
      *(undefined4 *)((longlong)param_1 + 0x174) = 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 142ef4950 FUN_142ef4950 body=376 status=ok
// SIG undefined FUN_142ef4950(void)

void FUN_142ef4950(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  longlong *in_RCX;
  
  fVar1 = *(float *)(in_RCX + 0x73);
  if ((((param_2 != fVar1) ||
       (param_1 = *(float *)(in_RCX + 0x70), param_1 != *(float *)((longlong)in_RCX + 0x2ec))) ||
      (param_1 = *(float *)((longlong)in_RCX + 900), param_1 != *(float *)(in_RCX + 0x5e))) ||
     (((param_1 = *(float *)((longlong)in_RCX + 0x394), param_1 != *(float *)(in_RCX + 0x60) ||
       (fVar1 != *(float *)((longlong)in_RCX + 0x304))) ||
      (param_1 = *(float *)((longlong)in_RCX + 0x39c), param_1 != *(float *)(in_RCX + 0x61))))) {
    fVar2 = *(float *)((longlong)in_RCX + 0x2e4);
    if (param_2 != fVar2) {
      *(float *)((longlong)in_RCX + 0x2e4) = param_2;
      (**(code **)(*in_RCX + 0x4b0))(param_1,fVar2,param_2);
    }
    *(undefined4 *)(in_RCX + 0x70) = *(undefined4 *)((longlong)in_RCX + 0x2ec);
    *(int *)((longlong)in_RCX + 900) = (int)in_RCX[0x5e];
    *(undefined1 *)(in_RCX + 0x71) = *(undefined1 *)((longlong)in_RCX + 0x2f4);
    *(int *)((longlong)in_RCX + 0x38c) = (int)in_RCX[0x5f];
    *(undefined4 *)(in_RCX + 0x72) = *(undefined4 *)((longlong)in_RCX + 0x2fc);
    *(int *)((longlong)in_RCX + 0x394) = (int)in_RCX[0x60];
    *(undefined4 *)(in_RCX + 0x73) = *(undefined4 *)((longlong)in_RCX + 0x304);
    *(int *)((longlong)in_RCX + 0x39c) = (int)in_RCX[0x61];
    *(undefined4 *)(in_RCX + 0x74) = *(undefined4 *)((longlong)in_RCX + 0x30c);
    *(int *)((longlong)in_RCX + 0x3a4) = (int)in_RCX[0x62];
    *(float *)((longlong)in_RCX + 0x394) = fVar1;
    *(float *)(in_RCX + 0x73) = fVar1;
    *(float *)((longlong)in_RCX + 0x39c) = param_2;
    *(undefined4 *)(in_RCX + 0x74) = 0;
    (**(code **)(*in_RCX + 0x498))(in_RCX);
    plVar3 = (longlong *)in_RCX[0x6a];
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x288))(plVar3,3);
      FUN_142f32490(in_RCX,in_RCX[0x6a],fVar1,param_2);
    }
  }
  return;
}



// FUNCTION 142ef4ad0 FUN_142ef4ad0 body=279 status=ok
// SIG undefined FUN_142ef4ad0(void)

void FUN_142ef4ad0(longlong *param_1,float param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x5e);
  if ((((param_2 != fVar1) || (*(float *)(param_1 + 0x5b) != *param_3)) ||
      (*(float *)((longlong)param_1 + 0x2dc) != param_3[1])) ||
     (((*(float *)((longlong)param_1 + 0x2ec) != param_3[5] || (fVar1 != param_3[6])) ||
      (*(float *)((longlong)param_1 + 0x2f4) != param_3[7])))) {
    *(float *)(param_1 + 0x5b) = *param_3;
    *(float *)((longlong)param_1 + 0x2dc) = param_3[1];
    *(undefined1 *)(param_1 + 0x5c) = *(undefined1 *)(param_3 + 2);
    *(float *)((longlong)param_1 + 0x2e4) = param_3[3];
    *(float *)(param_1 + 0x5d) = param_3[4];
    *(float *)((longlong)param_1 + 0x2ec) = param_3[5];
    *(float *)(param_1 + 0x5e) = param_3[6];
    *(float *)((longlong)param_1 + 0x2f4) = param_3[7];
    *(float *)(param_1 + 0x5f) = param_3[8];
    *(float *)((longlong)param_1 + 0x2fc) = param_3[9];
    *(float *)((longlong)param_1 + 0x2ec) = fVar1;
    *(float *)(param_1 + 0x5e) = fVar1;
    *(float *)((longlong)param_1 + 0x2f4) = param_2;
    *(undefined4 *)(param_1 + 0x5f) = 0;
    fVar1 = *(float *)(param_1 + 0x2f);
    if (param_2 != fVar1) {
      *(float *)(param_1 + 0x2f) = param_2;
      (**(code **)(*param_1 + 0x2b0))(fVar1,fVar1,param_2);
      LOCK();
      *(undefined4 *)((longlong)param_1 + 0x174) = 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 142ef4bf0 FUN_142ef4bf0 body=346 status=ok
// SIG undefined FUN_142ef4bf0(void)

void FUN_142ef4bf0(float param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  longlong *in_RCX;
  
  fVar1 = *(float *)(in_RCX + 0x73);
  if ((((param_2 != fVar1) || (param_1 = *(float *)(in_RCX + 0x70), param_1 != *param_3)) ||
      (param_1 = *(float *)((longlong)in_RCX + 900), param_1 != param_3[1])) ||
     (((param_1 = *(float *)((longlong)in_RCX + 0x394), param_1 != param_3[5] ||
       (fVar1 != param_3[6])) ||
      (param_1 = *(float *)((longlong)in_RCX + 0x39c), param_1 != param_3[7])))) {
    fVar2 = *(float *)((longlong)in_RCX + 0x2e4);
    if (param_2 != fVar2) {
      *(float *)((longlong)in_RCX + 0x2e4) = param_2;
      (**(code **)(*in_RCX + 0x4b0))(param_1,fVar2,param_2);
    }
    *(float *)(in_RCX + 0x70) = *param_3;
    *(float *)((longlong)in_RCX + 900) = param_3[1];
    *(undefined1 *)(in_RCX + 0x71) = *(undefined1 *)(param_3 + 2);
    *(float *)((longlong)in_RCX + 0x38c) = param_3[3];
    *(float *)(in_RCX + 0x72) = param_3[4];
    *(float *)((longlong)in_RCX + 0x394) = param_3[5];
    *(float *)(in_RCX + 0x73) = param_3[6];
    *(float *)((longlong)in_RCX + 0x39c) = param_3[7];
    *(float *)(in_RCX + 0x74) = param_3[8];
    *(float *)((longlong)in_RCX + 0x3a4) = param_3[9];
    *(float *)((longlong)in_RCX + 0x394) = fVar1;
    *(float *)(in_RCX + 0x73) = fVar1;
    *(float *)((longlong)in_RCX + 0x39c) = param_2;
    *(undefined4 *)(in_RCX + 0x74) = 0;
    (**(code **)(*in_RCX + 0x498))(in_RCX);
    plVar3 = (longlong *)in_RCX[0x6a];
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x288))(plVar3,3);
      FUN_142f32490(in_RCX,in_RCX[0x6a],fVar1,param_2);
    }
  }
  return;
}



// FUNCTION 142ef4d50 FUN_142ef4d50 body=864 status=ok
// SIG undefined FUN_142ef4d50(void)

void FUN_142ef4d50(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  
  if (((*(float *)(param_1 + 0x2ec) <= *(float *)(param_1 + 0x2f4) &&
        *(float *)(param_1 + 0x2f4) != *(float *)(param_1 + 0x2ec)) ||
      (*(longlong *)(param_1 + 0x240) == 0)) || (*(longlong *)(param_1 + 0x248) == 0)) {
LAB_142ef4db1:
    fVar9 = *(float *)(param_1 + 0x2f0);
    fVar10 = fVar9;
    if (1e-08 < ABS(*(float *)(param_1 + 0x2fc) - fVar9)) {
      fVar10 = *(float *)(param_1 + 0x2f4);
    }
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x248) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (iVar6 < 1) goto LAB_142ef4db1;
    fVar9 = *(float *)(param_1 + 0x2f4);
    fVar10 = *(float *)(param_1 + 0x2f0);
  }
  iVar6 = *(int *)(param_1 + 0x17c);
  iVar7 = (int)((float)(1 - iVar6) * fVar9 + (float)iVar6);
  if (iVar7 < 1) {
    iVar6 = 1;
  }
  else if (iVar7 < iVar6) {
    iVar6 = iVar7;
  }
  plVar3 = *(longlong **)(param_1 + 0x238);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar3[1];
    bVar8 = iVar7 == 0;
    if (bVar8) {
      *(int *)(plVar3 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (!bVar8) {
      LOCK();
      bVar8 = iVar7 == (int)plVar3[1];
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar8) {
        if (plVar3 != (longlong *)0x0) {
          if (((*(longlong *)(param_1 + 0x230) == 0) ||
              (FUN_14203e3e0(*(longlong *)(param_1 + 0x230),iVar6),
              *(char *)(param_1 + 0x2b0) == '\0')) ||
             (plVar4 = *(longlong **)(param_1 + 0x268), plVar4 == (longlong *)0x0))
          goto LAB_142ef4f05;
          LOCK();
          iVar7 = (int)plVar4[1];
          bVar8 = iVar7 == 0;
          if (bVar8) {
            *(int *)(plVar4 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
          goto joined_r0x000142ef4ea1;
        }
        break;
      }
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar8 = iVar7 == 0;
      if (bVar8) {
        *(int *)(plVar3 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
  }
LAB_142ef4f33:
  plVar3 = *(longlong **)(param_1 + 0x248);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar3[1];
    bVar8 = iVar6 == 0;
    if (bVar8) {
      *(int *)(plVar3 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (!bVar8) {
      LOCK();
      bVar8 = iVar6 == (int)plVar3[1];
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar8) {
        if (plVar3 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x240) != 0) {
            iVar6 = *(int *)(param_1 + 0x180);
            iVar7 = (int)((float)(1 - iVar6) * fVar10 + (float)iVar6);
            if (iVar7 < 1) {
              iVar6 = 1;
            }
            else if (iVar7 < iVar6) {
              iVar6 = iVar7;
            }
            FUN_14203e3e0(*(longlong *)(param_1 + 0x240),iVar6);
          }
          LOCK();
          plVar4 = plVar3 + 1;
          lVar5 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
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
        break;
      }
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar8 = iVar6 == 0;
      if (bVar8) {
        *(int *)(plVar3 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  plVar3 = *(longlong **)(param_1 + 600);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar3[1];
    bVar8 = iVar6 == 0;
    if (bVar8) {
      *(int *)(plVar3 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (!bVar8) {
      LOCK();
      bVar8 = iVar6 == (int)plVar3[1];
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar8) {
        if (plVar3 == (longlong *)0x0) {
          return;
        }
        if (*(longlong *)(param_1 + 0x250) != 0) {
          iVar6 = *(int *)(param_1 + 0x184);
          iVar7 = (int)((float)(1 - iVar6) * fVar10 + (float)iVar6);
          if (iVar7 < 1) {
            iVar6 = 1;
          }
          else if (iVar7 < iVar6) {
            iVar6 = iVar7;
          }
          FUN_14203e3e0(*(longlong *)(param_1 + 0x250),iVar6);
        }
        LOCK();
        plVar4 = plVar3 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 != 1) {
          return;
        }
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 != 1) {
          return;
        }
        (**(code **)(*plVar3 + 8))(plVar3,1);
        return;
      }
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar8 = iVar6 == 0;
      if (bVar8) {
        *(int *)(plVar3 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  return;
joined_r0x000142ef4ea1:
  if (bVar8) goto LAB_142ef4f05;
  LOCK();
  bVar8 = iVar7 == (int)plVar4[1];
  if (bVar8) {
    *(int *)(plVar4 + 1) = iVar7 + 1;
  }
  UNLOCK();
  if (bVar8) {
    if (plVar4 != (longlong *)0x0) {
      if (*(longlong *)(param_1 + 0x260) != 0) {
        FUN_14203e3e0(*(longlong *)(param_1 + 0x260),iVar6);
      }
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
    goto LAB_142ef4f05;
  }
  LOCK();
  iVar7 = (int)plVar4[1];
  bVar8 = iVar7 == 0;
  if (bVar8) {
    *(int *)(plVar4 + 1) = 0;
    iVar7 = 0;
  }
  UNLOCK();
  goto joined_r0x000142ef4ea1;
LAB_142ef4f05:
  LOCK();
  plVar4 = plVar3 + 1;
  lVar5 = *plVar4;
  *(int *)plVar4 = (int)*plVar4 + -1;
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
  goto LAB_142ef4f33;
}



// FUNCTION 142ef50b0 FUN_142ef50b0 body=372 status=ok
// SIG undefined FUN_142ef50b0(void)

void FUN_142ef50b0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  int local_res8 [2];
  longlong local_res10;
  
  fVar5 = *(float *)(param_1 + 0x39c);
  if ((*(float *)(param_1 + 0x394) <= fVar5 && fVar5 != *(float *)(param_1 + 0x394)) ||
     (*(char *)(param_1 + 0x2c0) == '\0')) {
    fVar6 = *(float *)(param_1 + 0x398);
    bVar2 = true;
  }
  else {
    bVar2 = false;
    fVar6 = fVar5;
  }
  if (*(char *)(param_1 + 0x2c0) == '\0') {
    fVar5 = 0.0;
  }
  else if (!bVar2) {
    fVar5 = *(float *)(param_1 + 0x398);
  }
  FUN_142edf080(local_res8,*(undefined8 *)(param_1 + 0x348),fVar6,fVar5,
                *(undefined1 *)(param_1 + 0x2e0));
  if (*(longlong *)(param_1 + 0x378) != 0) {
    lVar4 = param_1;
    if (*(longlong *)(param_1 + 0x370) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x370);
    }
    if (lVar4 != 0) {
      fVar5 = (float)UWidgetAnimation::GetEndTime();
      fVar6 = (float)UWidgetAnimation::GetStartTime(*(undefined8 *)(param_1 + 0x378));
      fVar6 = (fVar5 - fVar6) * *(float *)(param_1 + 0x398) + fVar6;
      UUserWidget::PlayAnimationTo
                (lVar4,*(undefined8 *)(param_1 + 0x378),fVar6,fVar6,1,0,0x3f800000);
      local_res10 = *(longlong *)(param_1 + 0x378);
      local_res8[1] = 0;
      local_res8[0] = (int)fVar6;
      if (local_res10 != 0) {
        plVar3 = *(longlong **)(lVar4 + 0x170);
        plVar1 = plVar3 + *(int *)(lVar4 + 0x178);
        if (plVar3 != plVar1) {
          while (lVar4 = *plVar3, *(longlong *)(lVar4 + 0x378) != local_res10) {
            plVar3 = plVar3 + 1;
            if (plVar3 == plVar1) {
              return;
            }
          }
          if (lVar4 != 0) {
            FUN_142135e10(lVar4,local_res8[0]);
            FUN_142137cd0(*plVar3,0);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142ef5230 FUN_142ef5230 body=89 status=ok
// SIG undefined FUN_142ef5230(void)

void FUN_142ef5230(longlong param_1)

{
  undefined1 local_res8 [32];
  
  FUN_142edfb00(local_res8,*(undefined8 *)(param_1 + 0x348),*(undefined4 *)(param_1 + 0x2e8));
  FUN_142edfb00(local_res8,*(undefined8 *)(param_1 + 0x350),*(undefined4 *)(param_1 + 0x2e8));
  FUN_142edfb00(local_res8,*(undefined8 *)(param_1 + 0x358),*(undefined4 *)(param_1 + 0x2e8));
  return;
}



// FUNCTION 142ef5290 FUN_142ef5290 body=416 status=ok
// SIG undefined FUN_142ef5290(void)

void FUN_142ef5290(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  puVar4 = (undefined8 *)FName::FName(local_res8,"FillTexture",1);
  lVar1 = *(longlong *)(param_1 + 0x348);
  lVar2 = *(longlong *)(param_1 + 0x2b8);
  uVar3 = *puVar4;
  if ((lVar1 != 0) && (lVar2 != 0)) {
    lVar5 = UImage::GetDynamicMaterial(lVar1);
    if (lVar5 == 0) {
      FUN_14212fda0(lVar1,lVar2,0);
    }
    else {
      FUN_1425a28b0(lVar5,uVar3,lVar2);
    }
  }
  puVar4 = (undefined8 *)FName::FName(local_res8,"DeltaTexture",1);
  lVar1 = *(longlong *)(param_1 + 0x348);
  lVar2 = *(longlong *)(param_1 + 0x2c8);
  uVar3 = *puVar4;
  if ((lVar1 != 0) && (lVar2 != 0)) {
    lVar5 = UImage::GetDynamicMaterial(lVar1);
    if (lVar5 == 0) {
      FUN_14212fda0(lVar1,lVar2,0);
    }
    else {
      FUN_1425a28b0(lVar5,uVar3,lVar2);
    }
  }
  puVar4 = (undefined8 *)FName::FName(local_res8,"Texture",1);
  lVar1 = *(longlong *)(param_1 + 0x350);
  lVar2 = *(longlong *)(param_1 + 0x2d0);
  uVar3 = *puVar4;
  if ((lVar1 != 0) && (lVar2 != 0)) {
    lVar5 = UImage::GetDynamicMaterial(lVar1);
    if (lVar5 == 0) {
      FUN_14212fda0(lVar1,lVar2,0);
    }
    else {
      FUN_1425a28b0(lVar5,uVar3,lVar2);
    }
  }
  puVar4 = (undefined8 *)FName::FName(local_res8,"Texture",1);
  lVar1 = *(longlong *)(param_1 + 0x2d8);
  lVar2 = *(longlong *)(param_1 + 0x358);
  uVar3 = *puVar4;
  if ((lVar2 != 0) && (lVar1 != 0)) {
    lVar5 = UImage::GetDynamicMaterial(lVar2);
    if (lVar5 == 0) {
      FUN_14212fda0(lVar2,lVar1,0);
    }
    else {
      FUN_1425a28b0(lVar5,uVar3,lVar1);
    }
  }
  return;
}



// FUNCTION 142ef5430 FUN_142ef5430 body=93 status=ok
// SIG undefined FUN_142ef5430(void)

bool FUN_142ef5430(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x2d0);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x48);
    if (0 < iVar1) {
      if ((iVar1 + -1 < iVar1) &&
         (plVar2 = *(longlong **)(*(longlong *)(lVar3 + 0x40) + -8 + (longlong)iVar1 * 8),
         plVar2 != (longlong *)0x0)) {
        lVar3 = (**(code **)(*plVar2 + 0x278))();
        return param_1 == lVar3;
      }
      return param_1 == 0;
    }
  }
  return true;
}



// FUNCTION 142ef5490 FUN_142ef5490 body=236 status=ok
// SIG undefined FUN_142ef5490(void)

undefined1 FUN_142ef5490(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined8 local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  plVar4 = *(longlong **)(param_1 + 0x80);
  uVar6 = 1;
  local_28 = *(undefined8 *)(param_1 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_20 = plVar4;
  FUN_141899f20(DAT_1469f4590,&local_18,&local_28);
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
  if (local_18 != 0) {
    uVar6 = FUN_141847710();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return uVar6;
}



// FUNCTION 142ef5580 FUN_142ef5580 body=19 status=ok
// SIG undefined FUN_142ef5580(void)

bool FUN_142ef5580(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  longlong *plVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x2e8);
  if (lVar2 == 0) {
    return false;
  }
  lVar1 = *(longlong *)(lVar2 + 0x758);
  if (lVar1 != 0) {
    if ((*(int *)(lVar1 + 0x310) != 0) && (*(longlong **)(lVar1 + 0x308) != (longlong *)0x0)) {
      cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x308) + 0x18))();
      if (cVar3 != '\0') {
        if (*(int *)(lVar1 + 0x310) == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = *(longlong **)(lVar1 + 0x308);
        }
        uVar4 = (**(code **)(*plVar5 + 0x38))();
        *(undefined1 *)(lVar1 + 0x300) = uVar4;
      }
    }
    return *(char *)(lVar1 + 0x300) == '\x01';
  }
  return *(char *)(lVar2 + 0x118) == '\x01';
}



// FUNCTION 142ef55a0 FUN_142ef55a0 body=72 status=ok
// SIG undefined FUN_142ef55a0(void)

bool FUN_142ef55a0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar1 = *(longlong *)
             (*(longlong *)(param_1 + 0x18) + -8 + (longlong)*(int *)(param_1 + 0x20) * 8);
    if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x28) != 0)) && (*(longlong *)(lVar1 + 0x30) != 0))
    {
      cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x30) + 0xf8))();
      return cVar2 == '\x04';
    }
  }
  return false;
}



// FUNCTION 142ef55f0 FUN_142ef55f0 body=90 status=ok
// SIG undefined FUN_142ef55f0(void)

undefined1 FUN_142ef55f0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x2a4);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x2a4);
    if (((*(longlong *)(lVar1 + 0x2d8) != 0) && (param_1 != 0)) &&
       (param_1 == *(longlong *)(*(longlong *)(lVar1 + 0x2d8) + 0x48))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142ef5650 FUN_142ef5650 body=250 status=ok
// SIG undefined FUN_142ef5650(void)

ulonglong FUN_142ef5650(longlong param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x30);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x38) * 0xa3;
  if (plVar1 != plVar2) {
    while (*plVar1 != *param_2) {
      plVar1 = plVar1 + 0xa3;
      if (plVar1 == plVar2) {
        return (ulonglong)plVar1 & 0xffffffffffffff00;
      }
    }
    switch(param_3) {
    case 0:
      if ((plVar1[0x24] == 0) && ((*(byte *)(plVar1 + 0x2b) & 2) == 0))
      goto switchD_142ef56a2_default;
      goto LAB_142ef56bb;
    case 1:
      if (plVar1[0x35] != 0) goto LAB_142ef56bb;
      bVar3 = (*(byte *)(plVar1 + 0x3c) & 2) == 0;
      break;
    case 2:
      if (plVar1[0x46] != 0) goto LAB_142ef56bb;
      bVar3 = (*(byte *)(plVar1 + 0x4d) & 2) == 0;
      break;
    case 3:
      if (plVar1[0x79] != 0) goto LAB_142ef56bb;
      bVar3 = (*(byte *)(plVar1 + 0x80) & 2) == 0;
      break;
    case 4:
      if (plVar1[0x8a] != 0) goto LAB_142ef56bb;
      bVar3 = (*(byte *)(plVar1 + 0x91) & 2) == 0;
      break;
    case 5:
      if (plVar1[0x9b] != 0) goto LAB_142ef56bb;
      bVar3 = (*(byte *)(plVar1 + 0xa2) & 2) == 0;
      break;
    case 6:
      if (plVar1[0x57] != 0) goto LAB_142ef56bb;
      bVar3 = (*(byte *)(plVar1 + 0x5e) & 2) == 0;
      break;
    case 7:
      if (plVar1[0x68] != 0) goto LAB_142ef56bb;
      bVar3 = (*(byte *)(plVar1 + 0x6f) & 2) == 0;
      break;
    default:
      goto switchD_142ef56a2_default;
    }
    if (!bVar3) {
LAB_142ef56bb:
      return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    }
  }
switchD_142ef56a2_default:
  return (ulonglong)plVar1 & 0xffffffffffffff00;
}



// FUNCTION 142ef5770 FUN_142ef5770 body=300 status=ok
// SIG undefined FUN_142ef5770(void)

ulonglong FUN_142ef5770(longlong param_1,longlong param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong local_res8;
  undefined1 local_38 [16];
  longlong *local_28;
  
  local_res8 = param_1;
  if (param_2 != 0) {
    uVar5 = FUN_142f30760();
    plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar5);
    if ((plVar6 != (longlong *)0x0) && (lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6), lVar7 != 0))
    {
      lVar7 = *(longlong *)(lVar7 + 0x30);
      goto LAB_142ef57c1;
    }
  }
  lVar7 = 0;
LAB_142ef57c1:
  uVar3 = FUN_142ee1560(param_2,param_3);
  if (lVar7 != 0) {
    plVar6 = *(longlong **)(lVar7 + 0x40);
    plVar9 = plVar6 + (longlong)*(int *)(lVar7 + 0x48) * 0xa1;
    for (; plVar6 != plVar9; plVar6 = plVar6 + 0xa1) {
      if (*plVar6 == param_1) {
        uVar8 = FUN_142ef5c80(lVar7,&local_res8,uVar3);
        return uVar8;
      }
    }
  }
  FUN_142ef3600(local_38,param_1,param_2,param_3);
  if (lVar7 == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = FUN_142ef5650(lVar7,local_38,uVar3);
  }
  plVar6 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_28 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  return (ulonglong)bVar4;
}



// FUNCTION 142ef58a0 FUN_142ef58a0 body=30 status=ok
// SIG undefined FUN_142ef58a0(void)

bool FUN_142ef58a0(longlong param_1,float param_2)

{
  return param_2 < ABS(*(float *)(param_1 + 0x2f0) - *(float *)(param_1 + 0x2f4));
}



// FUNCTION 142ef58c0 FUN_142ef58c0 body=34 status=ok
// SIG undefined FUN_142ef58c0(void)

bool FUN_142ef58c0(longlong param_1)

{
  return 1e-08 < ABS(*(float *)(param_1 + 0x398) - *(float *)(param_1 + 0x39c));
}



// FUNCTION 142ef58f0 FUN_142ef58f0 body=58 status=ok
// SIG undefined FUN_142ef58f0(void)

ulonglong FUN_142ef58f0(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x88);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x90) * 10;
  while( true ) {
    if (plVar1 == plVar2) {
      return (ulonglong)plVar1 & 0xffffffffffffff00;
    }
    if (((int)plVar1[3] == param_3) && (*plVar1 == *param_2)) break;
    plVar1 = plVar1 + 10;
  }
  return (ulonglong)*(byte *)((longlong)plVar1 + 0x1d);
}



// FUNCTION 142ef5940 FUN_142ef5940 body=91 status=ok
// SIG undefined FUN_142ef5940(void)

undefined1 FUN_142ef5940(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x24);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x24);
    if (((*(longlong *)(lVar1 + 0x2d8) == 0) || (param_1 == 0x148)) ||
       (param_1 + -0x148 != *(longlong *)(*(longlong *)(lVar1 + 0x2d8) + 0x48))) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142ef59a0 FUN_142ef59a0 body=91 status=ok
// SIG undefined FUN_142ef59a0(void)

undefined1 FUN_142ef59a0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x20);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x20);
    if (((*(longlong *)(lVar1 + 0x2d8) == 0) || (param_1 == 0x860)) ||
       (param_1 + -0x860 != *(longlong *)(*(longlong *)(lVar1 + 0x2d8) + 0x48))) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142ef5a00 FUN_142ef5a00 body=258 status=ok
// SIG undefined FUN_142ef5a00(void)

bool FUN_142ef5a00(longlong param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  bVar1 = 0;
  plVar6 = (longlong *)0x0;
  if ((((0 < *(int *)(param_1 + 0x20)) &&
       (lVar4 = *(longlong *)
                 (*(longlong *)(param_1 + 0x18) + ((longlong)*(int *)(param_1 + 0x20) + -1) * 8),
       lVar4 != 0)) && (*(longlong *)(lVar4 + 0x28) != 0)) && (*(longlong *)(lVar4 + 0x30) != 0)) {
    bVar1 = (**(code **)(**(longlong **)(lVar4 + 0x30) + 0xf8))();
    lVar4 = *(longlong *)
             (*(longlong *)(param_1 + 0x18) + -8 + (longlong)*(int *)(param_1 + 0x20) * 8);
    plVar7 = plVar6;
    if (*(longlong *)(lVar4 + 0x28) != 0) {
      plVar7 = *(longlong **)(lVar4 + 0x30);
    }
    cVar2 = (**(code **)(*plVar7 + 0x120))(plVar7,param_2);
    if (cVar2 != '\0') {
      return true;
    }
  }
  if (bVar1 == 0) {
    return false;
  }
  if (2 < bVar1) {
    if (bVar1 == 3) {
      if ((DAT_146b17150 != 0) &&
         (lVar4 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x148))(param_1 + -0x28), lVar4 != 0
         )) {
        uVar5 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x148))(param_1 + -0x28);
        plVar6 = (longlong *)UEngine::GetLocalPlayerFromControllerId(DAT_146b17150,uVar5,param_2);
      }
      return plVar6 != (longlong *)0x0;
    }
    if (bVar1 == 4) {
      return true;
    }
    return false;
  }
  iVar3 = FUN_142eed430(param_1);
  return iVar3 == param_2;
}



// FUNCTION 142ef5b10 FUN_142ef5b10 body=95 status=ok
// SIG undefined FUN_142ef5b10(void)

longlong FUN_142ef5b10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  uint7 uVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x40);
  plVar1 = plVar4 + *(int *)(param_1 + 0x48);
  do {
    uVar5 = (uint7)((ulonglong)plVar4 >> 8);
    if (plVar4 == plVar1) {
      return (ulonglong)uVar5 << 8;
    }
    if ((*plVar4 != 0) && (lVar2 = *(longlong *)(*plVar4 + 0x28), lVar2 != 0)) {
      lVar2 = *(longlong *)(lVar2 + 0x10);
      if ((*(int *)(lVar2 + 0x90) < *(int *)(param_2 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(param_2 + 0x90) * 8) !=
          param_2 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return CONCAT71(uVar5,1);
      }
    }
    plVar4 = plVar4 + 1;
  } while( true );
}



// FUNCTION 142ef5b70 FUN_142ef5b70 body=256 status=ok
// SIG undefined FUN_142ef5b70(void)

ulonglong FUN_142ef5b70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *in_RAX;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    uVar3 = FUN_142f30760();
    plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar3);
    in_RAX = (longlong *)0x0;
    if (((plVar4 != (longlong *)0x0) &&
        (in_RAX = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4), in_RAX != (longlong *)0x0)) &&
       (lVar1 = in_RAX[7], lVar1 != 0)) {
      if (*(int *)(lVar1 + 0x38) != *(int *)(lVar1 + 100)) {
        lVar5 = *(longlong *)(lVar1 + 0x70);
        if (*(longlong *)(lVar1 + 0x70) == 0) {
          lVar5 = lVar1 + 0x68;
        }
        iVar2 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)param_1 >> 0x20) + (int)param_1) &
                                 (longlong)*(int *)(lVar1 + 0x78) - 1U) * 4);
        if (iVar2 != -1) {
          do {
            plVar4 = (longlong *)((longlong)iVar2 * 0x98 + *(longlong *)(lVar1 + 0x30));
            if (*plVar4 == param_1) {
              if (iVar2 != -1) goto LAB_142ef5c37;
              break;
            }
            iVar2 = (int)plVar4[0x12];
          } while (iVar2 != -1);
        }
      }
      plVar4 = (longlong *)0x0;
LAB_142ef5c37:
      in_RAX = plVar4 + 1;
      if (plVar4 == (longlong *)0x0) {
        in_RAX = (longlong *)0x0;
      }
      if ((in_RAX != (longlong *)0x0) && ((in_RAX[9] != 0 || ((*(byte *)(in_RAX + 0x10) & 2) != 0)))
         ) {
        return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142ef5c70 FUN_142ef5c70 body=12 status=ok
// SIG undefined FUN_142ef5c70(void)

void FUN_142ef5c70(longlong param_1)

{
  FWeakObjectPtr::IsValid(param_1 + 0x2a4);
  return;
}



// FUNCTION 142ef5c80 FUN_142ef5c80 body=250 status=ok
// SIG undefined FUN_142ef5c80(void)

ulonglong FUN_142ef5c80(longlong param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x48) * 0xa1;
  if (plVar1 != plVar2) {
    while (*plVar1 != *param_2) {
      plVar1 = plVar1 + 0xa1;
      if (plVar1 == plVar2) {
        return (ulonglong)plVar1 & 0xffffffffffffff00;
      }
    }
    switch(param_3) {
    case 0:
      if ((plVar1[0x22] == 0) && ((*(byte *)(plVar1 + 0x29) & 2) == 0))
      goto switchD_142ef5cd2_default;
      goto LAB_142ef5ceb;
    case 1:
      if (plVar1[0x33] != 0) goto LAB_142ef5ceb;
      bVar3 = (*(byte *)(plVar1 + 0x3a) & 2) == 0;
      break;
    case 2:
      if (plVar1[0x44] != 0) goto LAB_142ef5ceb;
      bVar3 = (*(byte *)(plVar1 + 0x4b) & 2) == 0;
      break;
    case 3:
      if (plVar1[0x77] != 0) goto LAB_142ef5ceb;
      bVar3 = (*(byte *)(plVar1 + 0x7e) & 2) == 0;
      break;
    case 4:
      if (plVar1[0x88] != 0) goto LAB_142ef5ceb;
      bVar3 = (*(byte *)(plVar1 + 0x8f) & 2) == 0;
      break;
    case 5:
      if (plVar1[0x99] != 0) goto LAB_142ef5ceb;
      bVar3 = (*(byte *)(plVar1 + 0xa0) & 2) == 0;
      break;
    case 6:
      if (plVar1[0x55] != 0) goto LAB_142ef5ceb;
      bVar3 = (*(byte *)(plVar1 + 0x5c) & 2) == 0;
      break;
    case 7:
      if (plVar1[0x66] != 0) goto LAB_142ef5ceb;
      bVar3 = (*(byte *)(plVar1 + 0x6d) & 2) == 0;
      break;
    default:
      goto switchD_142ef5cd2_default;
    }
    if (!bVar3) {
LAB_142ef5ceb:
      return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    }
  }
switchD_142ef5cd2_default:
  return (ulonglong)plVar1 & 0xffffffffffffff00;
}



// FUNCTION 142ef5da0 FUN_142ef5da0 body=43 status=ok
// SIG undefined FUN_142ef5da0(void)

undefined8 FUN_142ef5da0(longlong param_1)

{
  if (*(int *)(param_1 + 0xd0) == 0) {
    if ((*(longlong *)(DAT_146b17150 + 0x7b0) == 0) ||
       (*(char *)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0x80) == '\0')) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142ef5dd0 FUN_142ef5dd0 body=29 status=ok
// SIG undefined FUN_142ef5dd0(void)

longlong FUN_142ef5dd0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint7 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x2d8);
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if (((lVar1 != 0) && (param_2 != 0)) && (param_2 == *(longlong *)(lVar1 + 0x48))) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 142ef5df0 FUN_142ef5df0 body=143 status=ok
// SIG undefined FUN_142ef5df0(void)

bool FUN_142ef5df0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)
             (*(longlong *)(param_1 + 0x10) + -8 + (longlong)*(int *)(param_1 + 0x18) * 8);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  if ((param_2 != 0) && (lVar2 != 0)) {
    lVar1 = FUN_142edca80(lVar2 + 0x40,param_2);
    if (*(char *)(lVar2 + 0x39) == '\0') {
      return lVar1 != 0;
    }
    if (*(char *)(lVar2 + 0x39) == '\x01') {
      return lVar1 == 0;
    }
  }
  return false;
}



// FUNCTION 142ef5e80 FUN_142ef5e80 body=239 status=ok
// SIG undefined FUN_142ef5e80(void)

float FUN_142ef5e80(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*(int *)(param_1 + 0x324) < 2) {
    return param_2;
  }
  fVar2 = *(float *)(param_1 + 0x314) - *(float *)(param_1 + 0x318);
  fVar3 = (1.0 / (float)(*(int *)(param_1 + 0x324) + -1)) * fVar2;
  fVar4 = fVar3 * 0.5;
  if ((fVar4 <= param_2) && (fVar1 = fVar4, 1e-08 < ABS(param_2 - fVar4))) {
    for (; ((fVar1 < param_2 && (fVar1 < fVar2)) && (1e-08 < ABS(fVar2 - fVar1)));
        fVar1 = fVar1 + fVar3) {
    }
    if ((fVar1 <= fVar2) && (1e-08 < ABS(fVar2 - fVar1))) {
      return fVar1 - fVar4;
    }
    return fVar2;
  }
  return 0.0;
}



// FUNCTION 142ef5f70 FUN_142ef5f70 body=846 status=ok
// SIG undefined FUN_142ef5f70(void)

void FUN_142ef5f70(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  bool bVar11;
  undefined4 local_res18;
  undefined4 local_res1c;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *plStack_a0;
  longlong local_98;
  longlong *plStack_90;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  if (param_2 == 0) {
    return;
  }
  lVar10 = 0;
  if (*(longlong *)(param_1 + 400) == param_2) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x188);
  *(longlong *)(param_1 + 0x188) = param_2;
  if (lVar3 != 0) {
    plVar8 = &local_98;
    local_98 = 0;
    plStack_90 = (longlong *)0x0;
    bVar6 = false;
    bVar11 = true;
    goto LAB_142ef6122;
  }
  if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_142ef6057:
    plVar8 = &local_a8;
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    bVar6 = false;
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
    if (iVar7 < 1) goto LAB_142ef6057;
    local_c0 = *(longlong **)(param_1 + 0x30);
    local_c8 = 0;
    if (local_c0 == (longlong *)0x0) {
LAB_142ef6048:
      plVar8 = &local_c8;
      bVar6 = true;
      bVar11 = false;
      lVar10 = local_c8;
    }
    else {
      LOCK();
      iVar7 = (int)local_c0[1];
      bVar11 = iVar7 == 0;
      if (bVar11) {
        *(int *)(local_c0 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
      while (!bVar11) {
        LOCK();
        bVar11 = iVar7 == (int)local_c0[1];
        if (bVar11) {
          *(int *)(local_c0 + 1) = iVar7 + 1;
        }
        UNLOCK();
        if (bVar11) {
          if (local_c0 != (longlong *)0x0) {
            local_c8 = *(longlong *)(param_1 + 0x28);
          }
          goto LAB_142ef6048;
        }
        LOCK();
        iVar7 = (int)local_c0[1];
        bVar11 = iVar7 == 0;
        if (bVar11) {
          *(int *)(local_c0 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
      }
      plVar8 = &local_c8;
      local_c0 = (longlong *)0x0;
      bVar6 = true;
      bVar11 = false;
      lVar10 = 0;
    }
  }
  plVar4 = (longlong *)plVar8[1];
  plVar8[1] = 0;
  local_b0 = plVar4;
  *plVar8 = 0;
  plVar8 = plStack_a0;
  local_b8 = lVar10;
  if ((bVar11) && (plStack_a0 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_a0 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
      }
    }
  }
  plVar8 = local_c0;
  if ((bVar6) && (local_c0 != (longlong *)0x0)) {
    LOCK();
    plVar4 = local_c0 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  bVar6 = true;
  bVar11 = false;
  plVar8 = &local_b8;
LAB_142ef6122:
  plVar4 = (longlong *)plVar8[1];
  plVar8[1] = 0;
  *plVar8 = 0;
  plVar8 = plStack_90;
  if ((bVar11) && (plStack_90 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_90 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
  plVar8 = local_b0;
  if ((bVar6) && (local_b0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_b0 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  if (lVar10 != 0) {
    FWeakObjectPtr::operator=(&local_res18,param_1);
    local_58 = 0;
    local_48 = 0;
    puVar9 = (undefined8 *)FUN_140438ef0(0x18,local_78);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &PTR_FUN_1444f8920;
      puVar9[1] = param_1;
      *(undefined4 *)(puVar9 + 2) = local_res18;
      *(undefined4 *)((longlong)puVar9 + 0x14) = local_res1c;
    }
    local_88[0] = &LAB_142ee36f0;
    plVar8 = *(longlong **)(lVar10 + 0x80);
    uVar5 = *(undefined8 *)(lVar10 + 0x78);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    FUN_14204c370(uVar5,local_88);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar8)(plVar8);
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
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  return;
}



// FUNCTION 142ef62c0 FUN_142ef62c0 body=513 status=ok
// SIG undefined FUN_142ef62c0(void)

undefined8 * FUN_142ef62c0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

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
  
  lVar8 = 0;
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
      if (local_40 != (longlong *)0x0) {
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
            lVar8 = *(longlong *)(param_1 + 0x28);
            plVar7 = &local_48;
            bVar4 = true;
            bVar9 = false;
            local_48 = lVar8;
            goto LAB_142ef6378;
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
        local_40 = (longlong *)0x0;
      }
      lVar8 = 0;
      plVar7 = &local_48;
      bVar4 = true;
      bVar9 = false;
      goto LAB_142ef6378;
    }
  }
  plVar7 = &local_38;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  bVar4 = false;
  bVar9 = true;
LAB_142ef6378:
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
    *param_2 = DAT_1468b5d88;
  }
  else {
    FUN_1420482a0(lVar8,param_2,*param_3);
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



// FUNCTION 142ef6530 FUN_142ef6530 body=17 status=ok
// SIG undefined FUN_142ef6530(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ef6530(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x2d0);
  if (lVar2 == 0) {
    return;
  }
  if ((*(char *)(lVar2 + 0xaf) == '\0') && (*(char *)(lVar2 + 0xb0) == '\0')) {
    iVar1 = *(int *)(lVar2 + 0x48);
    if (((1 < iVar1) &&
        (((*(longlong *)(*(longlong *)(lVar2 + 0x40) + -8 + (longlong)iVar1 * 8) != 0 &&
          (plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x40) + -0x10 + (longlong)iVar1 * 8),
          plVar3 != (longlong *)0x0)) && (plVar3[7] != 0)))) &&
       (*(char *)(plVar3[7] + 0x36) == '\0')) {
      uVar6 = (**(code **)(*plVar3 + 0x278))();
      FUN_142f005e0(lVar2,uVar6);
      TBaseDelegate<void>::ExecuteIfBound(lVar2 + 0xf8);
      return;
    }
    if (0 < iVar1) {
      lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x40) + -8 + (longlong)*(int *)(lVar2 + 0x48) * 8)
      ;
      if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x28) != 0)) && (*(longlong *)(lVar4 + 0x30) != 0)
         ) {
        (**(code **)(**(longlong **)(lVar4 + 0x30) + 0x20))();
      }
      FUN_142ee8180(lVar2,lVar4);
      FUN_142ee86c0(lVar2,lVar4);
      LOCK();
      DAT_146ace8c0 = DAT_146ace8c0 + -1;
      UNLOCK();
      lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x40) + -8 + (longlong)*(int *)(lVar2 + 0x48) * 8)
      ;
      *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar2 + 0x40);
      if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x28) != 0)) && (*(longlong *)(lVar4 + 0x30) != 0)
         ) {
        (**(code **)(**(longlong **)(lVar4 + 0x30) + 0x90))();
      }
      if (*(int *)(lVar2 + 0x48) == 0) {
        FUN_14202d950(0);
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar2 + 0x148,0)
        ;
      }
      FUN_142f04290(lVar2);
      if ((0 < *(int *)(lVar2 + 0x48)) &&
         (FUN_142ee16e0(lVar2,*(undefined8 *)
                               (*(longlong *)(lVar2 + 0x40) + -8 +
                               (longlong)*(int *)(lVar2 + 0x48) * 8)),
         *(char *)(lVar2 + 0xac) != '\0')) {
        return;
      }
    }
    *(undefined1 *)(lVar2 + 0xac) = 1;
    if (((*(int *)(lVar2 + 0x100) != 0) && (*(longlong **)(lVar2 + 0xf8) != (longlong *)0x0)) &&
       (cVar5 = (**(code **)(**(longlong **)(lVar2 + 0xf8) + 0x18))(), cVar5 != '\0')) {
      if (*(int *)(lVar2 + 0x100) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000142f0036a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(lVar2 + 0xf8) + 0x40))();
        return;
      }
      (**(code **)(_DAT_00000000 + 0x40))();
    }
  }
  return;
}



// FUNCTION 142ef6550 FUN_142ef6550 body=17 status=ok
// SIG undefined FUN_142ef6550(void)

void FUN_142ef6550(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x2d0);
  if (lVar1 == 0) {
    return;
  }
  if ((*(char *)(lVar1 + 0xaf) == '\0') && (*(char *)(lVar1 + 0xb0) == '\0')) {
    iVar4 = *(int *)(lVar1 + 0x48);
    if (0 < iVar4) {
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x40) + -8 + (longlong)iVar4 * 8);
      if ((plVar2 != (longlong *)0x0) &&
         (lVar5 = (**(code **)(*plVar2 + 0x278))(), lVar5 == param_2)) {
        return;
      }
      FUN_142ee8180(lVar1,*(undefined8 *)
                           (*(longlong *)(lVar1 + 0x40) + -8 + (longlong)*(int *)(lVar1 + 0x48) * 8)
                   );
      iVar4 = *(int *)(lVar1 + 0x48);
    }
    bVar3 = false;
    while (0 < iVar4) {
      FUN_142ee86c0(lVar1,*(undefined8 *)
                           (*(longlong *)(lVar1 + 0x40) + -8 + (longlong)*(int *)(lVar1 + 0x48) * 8)
                   );
      LOCK();
      DAT_146ace8c0 = DAT_146ace8c0 + -1;
      UNLOCK();
      lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0x40) + -8 + (longlong)*(int *)(lVar1 + 0x48) * 8)
      ;
      *(int *)(lVar1 + 0x48) = *(int *)(lVar1 + 0x48) + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar1 + 0x40);
      if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x28) != 0)) && (*(longlong *)(lVar5 + 0x30) != 0)
         ) {
        (**(code **)(**(longlong **)(lVar5 + 0x30) + 0x90))();
      }
      if (*(int *)(lVar1 + 0x48) == 0) {
        FUN_14202d950(0);
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar1 + 0x148,0)
        ;
      }
      FUN_142f04290(lVar1);
      if (*(int *)(lVar1 + 0x48) < 1) break;
      plVar2 = *(longlong **)
                (*(longlong *)(lVar1 + 0x40) + -8 + (longlong)*(int *)(lVar1 + 0x48) * 8);
      if ((plVar2 != (longlong *)0x0) &&
         ((lVar5 = (**(code **)(*plVar2 + 0x278))(), lVar5 == param_2 || (bVar3)))) {
        bVar3 = true;
        lVar5 = *(longlong *)
                 (*(longlong *)
                   (*(longlong *)(lVar1 + 0x40) + -8 + (longlong)*(int *)(lVar1 + 0x48) * 8) + 0x38)
        ;
        if ((lVar5 != 0) && (*(char *)(lVar5 + 0x36) != '\0')) {
          FUN_142ee16e0(lVar1);
          break;
        }
      }
      iVar4 = *(int *)(lVar1 + 0x48);
    }
    *(undefined1 *)(lVar1 + 0xac) = 1;
  }
  return;
}



// FUNCTION 142ef6570 FUN_142ef6570 body=19 status=ok
// SIG undefined FUN_142ef6570(void)

undefined8 FUN_142ef6570(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uStackX_18;
  longlong lStack_18;
  undefined8 *puStack_10;
  
  lVar2 = *(longlong *)(param_1 + 0x2d0);
  if (lVar2 == 0) {
    return 0;
  }
  if ((*(char *)(lVar2 + 0xaf) != '\0') || (*(char *)(lVar2 + 0xb0) != '\0')) {
    return 0;
  }
  puStack_10 = &uStackX_18;
  iVar1 = *(int *)(lVar2 + 0x48);
  uStackX_18 = param_3;
  lStack_18 = lVar2;
  if (0 < iVar1) {
    plVar4 = *(longlong **)(*(longlong *)(lVar2 + 0x40) + -8 + (longlong)iVar1 * 8);
    if ((plVar4 != (longlong *)0x0) && (lVar3 = (**(code **)(*plVar4 + 0x278))(), lVar3 == param_2))
    {
      FUN_142ee8180(lVar2,*(undefined8 *)
                           (*(longlong *)(lVar2 + 0x40) + -8 + (longlong)*(int *)(lVar2 + 0x48) * 8)
                   );
      FUN_142ee86c0(lVar2,*(undefined8 *)
                           (*(longlong *)(lVar2 + 0x40) + -8 + (longlong)*(int *)(lVar2 + 0x48) * 8)
                   );
      FUN_142f00410(lVar2);
      plVar4 = (longlong *)FUN_142ede760(&lStack_18);
      *(undefined1 *)(lVar2 + 0xac) = 1;
      if (plVar4 == (longlong *)0x0) {
        return 0;
      }
      uVar5 = (**(code **)(*plVar4 + 0x278))(plVar4);
      return uVar5;
    }
    FUN_142ee8180(lVar2,*(undefined8 *)
                         (*(longlong *)(lVar2 + 0x40) + -8 + (longlong)*(int *)(lVar2 + 0x48) * 8));
    iVar1 = *(int *)(lVar2 + 0x48);
  }
  while (0 < iVar1) {
    FUN_142ee86c0(lVar2,*(undefined8 *)
                         (*(longlong *)(lVar2 + 0x40) + -8 + (longlong)*(int *)(lVar2 + 0x48) * 8));
    LOCK();
    DAT_146ace8c0 = DAT_146ace8c0 + -1;
    UNLOCK();
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x40) + -8 + (longlong)*(int *)(lVar2 + 0x48) * 8);
    *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar2 + 0x40);
    if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x28) != 0)) && (*(longlong *)(lVar3 + 0x30) != 0))
    {
      (**(code **)(**(longlong **)(lVar3 + 0x30) + 0x90))();
    }
    if (*(int *)(lVar2 + 0x48) == 0) {
      FUN_14202d950(0);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar2 + 0x148,0);
    }
    FUN_142f04290(lVar2);
    if (*(int *)(lVar2 + 0x48) < 1) break;
    plVar4 = *(longlong **)(*(longlong *)(lVar2 + 0x40) + -8 + (longlong)*(int *)(lVar2 + 0x48) * 8)
    ;
    if ((plVar4 != (longlong *)0x0) && (lVar3 = (**(code **)(*plVar4 + 0x278))(), lVar3 == param_2))
    {
      FUN_142ee86c0(lVar2,*(undefined8 *)
                           (*(longlong *)(lVar2 + 0x40) + -8 + (longlong)*(int *)(lVar2 + 0x48) * 8)
                   );
      FUN_142f00410(lVar2);
      plVar4 = (longlong *)FUN_142ede760(&lStack_18);
      *(undefined1 *)(lVar2 + 0xac) = 1;
      if (plVar4 != (longlong *)0x0) {
        uVar5 = (**(code **)(*plVar4 + 0x278))(plVar4);
        return uVar5;
      }
      return 0;
    }
    iVar1 = *(int *)(lVar2 + 0x48);
  }
  uVar5 = FUN_142f02280(lVar2,uStackX_18);
  return uVar5;
}



// FUNCTION 142ef6590 FUN_142ef6590 body=19 status=ok
// SIG undefined FUN_142ef6590(void)

longlong FUN_142ef6590(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  lVar4 = *(longlong *)(param_1 + 0x2d0);
  if (lVar4 == 0) {
    return 0;
  }
  if (((*(char *)(lVar4 + 0xaf) == '\0') && (*(char *)(lVar4 + 0xb0) == '\0')) &&
     (TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar4 + 0x128,0),
     param_2 != 0)) {
    if (0 < *(int *)(lVar4 + 0x48)) {
      FUN_142ee8180(lVar4,*(undefined8 *)
                           (*(longlong *)(lVar4 + 0x40) + -8 + (longlong)*(int *)(lVar4 + 0x48) * 8)
                   );
    }
    plVar2 = (longlong *)FUN_142ee7390(lVar4,param_2,0);
    if (plVar2 != (longlong *)0x0) {
      if (plVar2[5] == 0) {
        return 0;
      }
      if (plVar2[6] == 0) {
        return plVar2[5];
      }
      FUN_142f025f0(lVar4,plVar2);
      uVar1 = *(undefined1 *)(lVar4 + 0xae);
      *(undefined1 *)(lVar4 + 0xae) = 1;
      *(undefined1 *)(lVar4 + 0xac) = 0;
      if (plVar2[5] == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = plVar2[6];
      }
      cVar6 = '\0';
      if (lVar3 != 0) {
        if (plVar2[5] == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = (longlong *)plVar2[6];
        }
        (**(code **)(*plVar7 + 0x28))();
        if (plVar2[5] == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = (longlong *)plVar2[6];
        }
        (**(code **)(*plVar7 + 0x30))();
        if (plVar2[5] == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = (longlong *)plVar2[6];
        }
        (**(code **)(*plVar7 + 0x38))();
        cVar6 = *(char *)(lVar4 + 0xac);
      }
      *(undefined1 *)(lVar4 + 0xae) = uVar1;
      if (cVar6 == '\0') {
        FUN_142ee16e0(lVar4,plVar2);
        if (*(char *)(lVar4 + 0xac) == '\0') {
          *(undefined1 *)(lVar4 + 0xac) = 1;
          uVar5 = (**(code **)(*plVar2 + 0x278))(plVar2);
          TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(lVar4 + 0x118,uVar5);
          return plVar2[5];
        }
        lVar3 = (**(code **)(*plVar2 + 0x278))();
        plVar8 = *(longlong **)(lVar4 + 0x40);
        plVar7 = plVar8 + *(int *)(lVar4 + 0x48);
        for (; plVar8 != plVar7; plVar8 = plVar8 + 1) {
          if ((*plVar8 != 0) && (lVar3 == *(longlong *)(*plVar8 + 0x28))) goto LAB_142f023fe;
        }
      }
      else {
        lVar3 = (**(code **)(*plVar2 + 0x278))(plVar2);
        plVar8 = *(longlong **)(lVar4 + 0x40);
        plVar7 = plVar8 + *(int *)(lVar4 + 0x48);
        for (; plVar8 != plVar7; plVar8 = plVar8 + 1) {
          if ((*plVar8 != 0) && (lVar3 == *(longlong *)(*plVar8 + 0x28))) goto LAB_142f023fe;
        }
      }
      plVar2[5] = 0;
      plVar2[6] = 0;
      goto LAB_142f023e7;
    }
  }
  return 0;
LAB_142f023fe:
  uVar5 = (**(code **)(*plVar2 + 0x278))(plVar2);
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(lVar4 + 0x118,uVar5);
LAB_142f023e7:
                    /* WARNING: Could not recover jumptable at 0x000142f023f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar4 = (**(code **)(*plVar2 + 0x278))(plVar2);
  return lVar4;
}



// FUNCTION 142ef65b0 FUN_142ef65b0 body=19 status=ok
// SIG undefined FUN_142ef65b0(void)

undefined8 FUN_142ef65b0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x2d0);
  if (lVar2 == 0) {
    return 0;
  }
  if (*(char *)(lVar2 + 0xaf) != '\0') {
    return 0;
  }
  if (*(char *)(lVar2 + 0xb0) != '\0') {
    return 0;
  }
  if (*(int *)(lVar2 + 0x48) < 1) {
    uVar5 = FUN_142f02280();
    return uVar5;
  }
  FUN_142ee8180(lVar2,*(undefined8 *)
                       (*(longlong *)(lVar2 + 0x40) + -8 + (longlong)*(int *)(lVar2 + 0x48) * 8));
  FUN_142ee86c0(lVar2,*(undefined8 *)
                       (*(longlong *)(lVar2 + 0x40) + -8 + (longlong)*(int *)(lVar2 + 0x48) * 8));
  FUN_142f00410(lVar2);
  plVar3 = (longlong *)FUN_142ee7390(lVar2,param_2,0);
  if ((plVar3 == (longlong *)0x0) || (lVar4 = (**(code **)(*plVar3 + 0x278))(plVar3), lVar4 == 0)) {
LAB_142f128d9:
    *(undefined1 *)(lVar2 + 0xac) = 1;
    if (plVar3 == (longlong *)0x0) {
      return 0;
    }
  }
  else {
    FUN_142f025f0(lVar2,plVar3);
    *(undefined1 *)(lVar2 + 0xac) = 0;
    FUN_142ef23e0(lVar2,plVar3);
    if (*(char *)(lVar2 + 0xac) == '\0') {
      FUN_142ee16e0(lVar2,plVar3);
      if (*(char *)(lVar2 + 0xac) == '\0') goto LAB_142f128d9;
      lVar4 = (**(code **)(*plVar3 + 0x278))(plVar3);
      plVar6 = *(longlong **)(lVar2 + 0x40);
      plVar1 = plVar6 + *(int *)(lVar2 + 0x48);
      for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
        if ((*plVar6 != 0) && (lVar4 == *(longlong *)(*plVar6 + 0x28))) goto LAB_142f12876;
      }
    }
    else {
      lVar4 = (**(code **)(*plVar3 + 0x278))(plVar3);
      plVar6 = *(longlong **)(lVar2 + 0x40);
      plVar1 = plVar6 + *(int *)(lVar2 + 0x48);
      for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
        if ((*plVar6 != 0) && (lVar4 == *(longlong *)(*plVar6 + 0x28))) goto LAB_142f12876;
      }
    }
    plVar3[5] = 0;
    plVar3[6] = 0;
  }
LAB_142f12876:
                    /* WARNING: Could not recover jumptable at 0x000142f12886. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*plVar3 + 0x278))(plVar3);
  return uVar5;
}



// FUNCTION 142ef65d0 FUN_142ef65d0 body=253 status=ok
// SIG undefined FUN_142ef65d0(void)

bool FUN_142ef65d0(longlong param_1,char param_2,undefined1 param_3)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  plVar1 = (longlong *)(param_1 + 0x148);
  while( true ) {
    iVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
    iVar6 = (**(code **)(*plVar1 + 0x10))(plVar1);
    bVar3 = false;
    bVar2 = false;
    iVar9 = 0;
    iVar7 = iVar6;
    if (iVar5 < 1) break;
    do {
      iVar7 = FUN_142eeadb0(param_1,param_2,iVar7,param_3);
      if (iVar7 == iVar6) {
LAB_142ef669a:
        if ((!bVar2) || (bVar3)) goto LAB_142ef66b2;
        break;
      }
      lVar8 = (**(code **)(*plVar1 + 0x40))(plVar1,iVar7);
      if ((lVar8 == 0) ||
         ((*(char *)(lVar8 + 0x231) != '\0' &&
          (cVar4 = (**(code **)(*(longlong *)(lVar8 + 0x208) + 0x40))(), cVar4 != '\0')))) {
        bVar3 = true;
        (**(code **)(*plVar1 + 0x18))(plVar1,iVar7,1,1);
        goto LAB_142ef669a;
      }
      iVar9 = iVar9 + 1;
      bVar2 = true;
    } while (iVar9 < iVar5);
    if (param_2 == '\x02') break;
    param_2 = '\x02';
  }
LAB_142ef66b2:
  return iVar7 != iVar6;
}



// FUNCTION 142ef66d0 FUN_142ef66d0 body=1169 status=ok
// SIG undefined FUN_142ef66d0(void)

bool FUN_142ef66d0(longlong param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  int local_78;
  
  iVar3 = *(int *)(param_1 + 0x280);
  iVar5 = *(int *)(param_1 + 0x270);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x270) = 0xffffffff;
    if (iVar5 != -1) {
      FUN_142ef0fb0(param_1,0xffffffff,iVar5);
    }
    *(undefined2 *)(param_1 + 0x2e8) = 1;
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    FUN_142ee43f0(param_1,*(undefined4 *)(param_1 + 0x2d0));
    goto LAB_142ef6b4c;
  }
  cVar1 = *(char *)((longlong)param_2 + 0xc);
  if (cVar1 == '\0') {
    if (DAT_146b3e158 == *param_2) {
      fVar15 = *(float *)(param_1 + 0x2d4) - *(float *)(param_1 + 0x36c);
LAB_142ef6776:
      fVar12 = 0.0;
      if (0.0 <= fVar15) {
        fVar12 = *(float *)(param_1 + 0x2dc) - *(float *)(param_1 + 0x2d8);
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        if (fVar15 <= fVar12) {
          fVar12 = fVar15;
        }
      }
      *(float *)(param_1 + 0x2d4) = fVar12;
      uVar13 = *(uint *)(param_1 + 0x2c0);
      *(undefined1 *)(param_1 + 0x2ea) = 0;
      *(undefined2 *)(param_1 + 0x2e8) = 0x101;
      if (fVar15 < *(float *)(param_1 + 0x2d0) || fVar15 == *(float *)(param_1 + 0x2d0)) {
        uVar13 = uVar13 ^ 0x80000000;
      }
      *(uint *)(param_1 + 0x2e4) = uVar13;
      FUN_142ee43f0(uVar13,*(undefined4 *)(param_1 + 0x2d0));
      return true;
    }
    if (DAT_146b3e160 == *param_2) {
      fVar15 = *(float *)(param_1 + 0x36c) + *(float *)(param_1 + 0x2d4);
      goto LAB_142ef6776;
    }
  }
  uVar6 = 0;
  iVar9 = 0;
  iVar4 = 0;
  if (iVar5 == -1) {
    iVar5 = (0 < iVar3) - 1;
    *(int *)(param_1 + 0x270) = iVar5;
    if ((0 < iVar3) && (FUN_142ef0fb0(param_1,iVar5,0xffffffff), 0 < *(int *)(param_1 + 0x280))) {
      fVar15 = *(float *)(param_1 + 0x380);
      fVar12 = *(float *)(param_1 + 0x2d0);
      if (fVar12 <= 0.0) {
        fVar14 = (float)FUN_142eedc50(param_1);
        if (fVar14 + fVar12 < fVar15) {
          fVar12 = (float)FUN_142eedc50(param_1);
          FUN_142f0adf0(param_1,fVar15 - fVar12,0);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x2d4) = 0;
        *(undefined2 *)(param_1 + 0x2e8) = 0x101;
        *(undefined1 *)(param_1 + 0x2ea) = 0;
        uVar13 = *(uint *)(param_1 + 0x2c0);
        if (0.0 <= fVar12) {
          uVar13 = uVar13 ^ 0x80000000;
        }
        *(uint *)(param_1 + 0x2e4) = uVar13;
        FUN_142ee43f0(param_1,fVar12);
      }
    }
    return *(int *)(param_1 + 0x270) != -1;
  }
  cVar2 = *(char *)(param_1 + 0x1e1);
  bVar10 = false;
  bVar11 = false;
  if (cVar2 == '\0') {
    iVar8 = *(int *)(param_1 + 0x37c);
    bVar11 = *(char *)(param_1 + 0x208) == '\x01';
    iVar9 = (iVar3 + -1) / iVar8 + 1;
  }
  else {
    iVar8 = iVar9;
    if (cVar2 == '\x01') {
      iVar9 = *(int *)(param_1 + 0x378);
      bVar10 = *(char *)(param_1 + 0x208) == '\x01';
      iVar8 = (iVar3 + -1) / iVar9 + 1;
    }
  }
  local_78 = 0;
  if (cVar2 == '\0') {
    uVar7 = (longlong)iVar5 % (longlong)*(int *)(param_1 + 0x37c);
    local_78 = iVar5 / *(int *)(param_1 + 0x37c);
LAB_142ef69c7:
    uVar6 = uVar7 & 0xffffffff;
    iVar4 = (int)uVar7;
  }
  else if (cVar2 == '\x01') {
    uVar7 = (longlong)iVar5 / (longlong)*(int *)(param_1 + 0x378);
    local_78 = iVar5 % *(int *)(param_1 + 0x378);
    goto LAB_142ef69c7;
  }
  if (cVar2 == '\0') {
    if (local_78 == iVar9 + -1) {
      iVar4 = FUN_142f0ac60(param_1,iVar8 + -1,iVar9 + -1);
      iVar8 = iVar8 + (iVar3 - iVar4) + -1;
    }
  }
  else if ((cVar2 == '\x01') && (iVar4 == iVar8 + -1)) {
    iVar4 = FUN_142f0ac60(param_1,iVar8 + -1,iVar9 + -1);
    iVar9 = iVar9 + (iVar3 - iVar4) + -1;
  }
  uVar7 = uVar6;
  iVar4 = local_78;
  if (cVar1 == '\0') {
    if (DAT_146b3dfb8 == *param_2) {
      iVar4 = local_78 + -1;
      if ((local_78 + -1 < 0) && (iVar4 = local_78, bVar10)) {
        iVar4 = iVar9 + -1;
      }
    }
    else if (DAT_146b3dfc0 == *param_2) {
      iVar4 = local_78 + 1;
      if ((iVar9 <= local_78 + 1) && (iVar4 = local_78, bVar10)) {
        iVar4 = 0;
      }
    }
    else if (DAT_146b3dfc8 == *param_2) {
      uVar13 = (int)uVar6 - 1;
      uVar7 = (ulonglong)uVar13;
      if (((int)uVar13 < 0) && (uVar7 = uVar6, bVar11)) {
        uVar7 = (ulonglong)(iVar8 - 1);
      }
    }
    else if (((DAT_146b3dfd0 == *param_2) &&
             (uVar13 = (int)uVar6 + 1, uVar7 = (ulonglong)uVar13, iVar8 <= (int)uVar13)) &&
            (uVar7 = uVar6, bVar11)) {
      uVar7 = 0;
    }
  }
  iVar4 = FUN_142f0ac60(param_1,uVar7,iVar4);
  iVar9 = iVar3 + -1;
  if (iVar4 < iVar3) {
    iVar9 = iVar4;
  }
  iVar4 = iVar9;
  if (((iVar9 < 0) || (iVar3 <= iVar9)) && (iVar9 != -1)) {
    iVar4 = -1;
  }
  *(int *)(param_1 + 0x270) = iVar4;
  if (iVar5 != iVar4) {
    FUN_142ef0fb0(param_1,iVar4,iVar5);
  }
  FUN_142f0ad60(param_1,iVar9,0);
LAB_142ef6b4c:
  return *(int *)(param_1 + 0x270) != iVar5;
}



// FUNCTION 142ef6b90 FUN_142ef6b90 body=204 status=ok
// SIG undefined FUN_142ef6b90(void)

bool FUN_142ef6b90(longlong *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = (**(code **)(*param_1 + 0x20))();
  iVar1 = (int)param_1[3];
  iVar7 = 0;
  iVar6 = iVar1;
  if (0 < iVar3) {
    do {
      iVar4 = (**(code **)(*param_1 + 0x20))(param_1);
      if (iVar4 < 1) {
        iVar6 = -1;
      }
      else if (iVar6 == -1) {
        iVar6 = 0;
      }
      else if (iVar6 < iVar4 + -1) {
        iVar6 = iVar6 + 1;
      }
      else if ((char)param_1[9] == '\x01') {
        iVar6 = 0;
      }
      if (iVar6 == (int)param_1[3]) break;
      lVar5 = (**(code **)(*param_1 + 0x40))(param_1,iVar6);
      if ((lVar5 == 0) ||
         ((*(char *)(lVar5 + 0x231) != '\0' &&
          (cVar2 = (**(code **)(*(longlong *)(lVar5 + 0x208) + 0x40))(), cVar2 != '\0')))) {
        (**(code **)(*param_1 + 0x18))(param_1,iVar6,1);
        break;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar3);
  }
  return iVar6 != iVar1;
}



// FUNCTION 142ef6cc0 FUN_142ef6cc0 body=208 status=ok
// SIG undefined FUN_142ef6cc0(void)

bool FUN_142ef6cc0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = (**(code **)(*param_1 + 0x20))();
  iVar1 = (int)param_1[3];
  iVar7 = 0;
  iVar6 = iVar1;
  if (0 < iVar3) {
    do {
      iVar4 = (**(code **)(*param_1 + 0x20))(param_1);
      if (iVar4 < 1) {
        iVar6 = -1;
      }
      else if (iVar6 == -1) {
        if ((char)param_1[9] == '\x01') {
LAB_142ef6d23:
          iVar6 = iVar4 + -1;
        }
        else {
          iVar6 = 0;
        }
      }
      else if (iVar6 < 1) {
        if ((char)param_1[9] == '\x01') goto LAB_142ef6d23;
      }
      else {
        iVar6 = iVar6 + -1;
      }
      if (iVar6 == (int)param_1[3]) break;
      lVar5 = (**(code **)(*param_1 + 0x40))(param_1,iVar6);
      if ((lVar5 == 0) ||
         ((*(char *)(lVar5 + 0x231) != '\0' &&
          (cVar2 = (**(code **)(*(longlong *)(lVar5 + 0x208) + 0x40))(), cVar2 != '\0')))) {
        (**(code **)(*param_1 + 0x18))(param_1,iVar6,1);
        break;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar3);
  }
  return iVar6 != iVar1;
}



// FUNCTION 142ef6d90 FUN_142ef6d90 body=324 status=ok
// SIG undefined FUN_142ef6d90(void)

void FUN_142ef6d90(longlong param_1,byte param_2,undefined1 param_3)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  float fVar5;
  undefined1 local_res8 [4];
  float local_resc;
  undefined1 local_res20 [4];
  float local_res24;
  
  *(undefined1 *)(param_1 + 0x2d5) = param_3;
  lVar3 = *(longlong *)(param_1 + 0x2b8);
  if (lVar3 == 0) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x2c8);
  if (param_2 == bVar1) {
    return;
  }
  *(bool *)(param_1 + 0x2c9) = bVar1 <= param_2;
  if (bVar1 != 0) goto LAB_142ef6e3a;
  if (param_2 != 0) {
    if (*(float *)(param_1 + 0x94) != 0.0) {
      *(undefined4 *)(param_1 + 0x94) = 0;
      goto LAB_142ef6e3a;
    }
    if (param_2 != 0) goto LAB_142ef6e3a;
  }
  if (*(float *)(param_1 + 0x94) == 0.0) {
    UWidget::GetDesiredSize(lVar3,local_res8);
    lVar3 = *(longlong *)(param_1 + 0x2b8);
    *(float *)(param_1 + 0x94) = local_resc - local_resc / (float)*(byte *)(param_1 + 0x2c0);
  }
LAB_142ef6e3a:
  UWidget::GetDesiredSize(lVar3,local_res20);
  uVar2 = (uint)*(byte *)(param_1 + 0x2c8) - (uint)param_2;
  *(byte *)(param_1 + 0x2c8) = param_2;
  uVar4 = (int)uVar2 >> 0x1f;
  fVar5 = (float)(int)((uVar2 ^ uVar4) - uVar4) * (local_res24 / (float)*(byte *)(param_1 + 0x2c0));
  *(float *)(param_1 + 0x2cc) = fVar5;
  *(float *)(param_1 + 0x2d0) = fVar5 / *(float *)(param_1 + 0x2c4);
  if (*(char *)(param_1 + 0x2d5) != '\x01') {
    return;
  }
  *(undefined4 *)(param_1 + 0x2d0) = 0x7f7fc99e;
  return;
}



// FUNCTION 142ef6ee0 FUN_142ef6ee0 body=27 status=ok
// SIG undefined FUN_142ef6ee0(void)

void FUN_142ef6ee0(longlong param_1)

{
  FUN_142ef7550();
  *(undefined1 *)(param_1 + 0x308) = 0;
  return;
}



// FUNCTION 142ef6f00 FUN_142ef6f00 body=192 status=ok
// SIG undefined FUN_142ef6f00(void)

void FUN_142ef6f00(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  FUN_142ef7550();
  if ((*(int *)(param_1 + 0x248) == 0) && (*(int *)(param_1 + 0x24c) == 0)) {
    puVar1 = (undefined8 *)FName::FName(local_res8,"Select",1);
    *(undefined8 *)(param_1 + 0x248) = *puVar1;
  }
  if ((*(int *)(param_1 + 0x240) == 0) && (*(int *)(param_1 + 0x244) == 0)) {
    puVar1 = (undefined8 *)FName::FName(local_res8,"Navigate",1);
    *(undefined8 *)(param_1 + 0x240) = *puVar1;
  }
  if ((*(int *)(param_1 + 0x2d8) == 0) && (*(int *)(param_1 + 0x2dc) == 0)) {
    puVar1 = (undefined8 *)FName::FName(local_res8,"Changed",1);
    *(undefined8 *)(param_1 + 0x2d8) = *puVar1;
  }
  FUN_142ef2440(param_1);
  FUN_142ebc100(param_1 + 0x208);
  return;
}



// FUNCTION 142ef6fc0 FUN_142ef6fc0 body=132 status=ok
// SIG undefined FUN_142ef6fc0(void)

void FUN_142ef6fc0(longlong param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b3e2e8) {
    _Init_thread_header(&DAT_146b3e2e8);
    if (DAT_146b3e2e8 == -1) {
      FName::FName(&DAT_146b3e2e0,L"Boolean_Choice",1);
      _Init_thread_footer(&DAT_146b3e2e8);
    }
  }
  FUN_142ef6f00(param_1);
  *(undefined8 *)(param_1 + 0x2d8) = DAT_146b3e2e0;
  return;
}



// FUNCTION 142ef7050 FUN_142ef7050 body=419 status=ok
// SIG undefined FUN_142ef7050(void)

void FUN_142ef7050(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  longlong local_res10;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b3e2f8) && (_Init_thread_header(&DAT_146b3e2f8), DAT_146b3e2f8 == -1))
  {
    FName::FName(&DAT_146b3e2f0,L"Combo_Choice",1);
    _Init_thread_footer(&DAT_146b3e2f8);
  }
  FUN_142ef6f00(param_1);
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UGbxListItemComboBox::OnValueComboBoxChanged",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    lVar2 = *(longlong *)(param_1 + 0x2e8);
    plVar8 = (longlong *)(lVar2 + 0xc58);
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    FWeakObjectPtr::operator=(&local_28,param_1);
    local_20 = local_res10;
    if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_28), lVar6 != 0)) {
      UObject::FindFunction(lVar6,local_20);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar8);
    iVar1 = *(int *)(lVar2 + 0xc60);
    *(int *)(lVar2 + 0xc60) = iVar1 + 1;
    if (*(int *)(lVar2 + 0xc64) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar1);
    }
    puVar7 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar8);
    *puVar7 = local_28;
    puVar7[1] = local_24;
    *(longlong *)(puVar7 + 2) = local_20;
  }
  *(undefined8 *)(param_1 + 0x2d8) = DAT_146b3e2f0;
  return;
}



// FUNCTION 142ef7200 FUN_142ef7200 body=600 status=ok
// SIG undefined FUN_142ef7200(void)

void FUN_142ef7200(longlong param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong local_res8;
  longlong local_res10;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b3e308) && (_Init_thread_header(&DAT_146b3e308), DAT_146b3e308 == -1))
  {
    FName::FName(&DAT_146b3e300,L"Numeric_Slider",1);
    _Init_thread_footer(&DAT_146b3e308);
  }
  FUN_142ef6f00(param_1);
  if (*(longlong *)(param_1 + 0x2e8) == 0) {
    *(undefined8 *)(param_1 + 0x2d8) = DAT_146b3e300;
    return;
  }
  pwVar4 = _guard_xfg_dispatch_icall_nop(L"&UGbxListItemNumber::OnSliderValueChanged",L"::");
  pwVar3 = (wchar_t *)0x0;
  while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
    pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar3 = pwVar2;
  }
  FName::FName(&local_res8,pwVar3 + 2,1);
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x2e8) + 0x3b8);
  lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x2e8) + 0x3c0) * 0x10 + lVar8;
  for (; lVar8 != lVar7; lVar8 = lVar8 + 0x10) {
    if ((*(longlong *)(lVar8 + 8) == local_res8) &&
       (lVar5 = FWeakObjectPtr::GetEvenIfUnreachable(lVar8), param_1 == lVar5)) goto LAB_142ef73d9;
  }
  pwVar4 = _guard_xfg_dispatch_icall_nop(L"&UGbxListItemNumber::OnSliderValueChanged",L"::");
  pwVar3 = (wchar_t *)0x0;
  while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
    pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar3 = pwVar2;
  }
  FName::FName(&local_res10,pwVar3 + 2,1);
  lVar8 = *(longlong *)(param_1 + 0x2e8);
  plVar9 = (longlong *)(lVar8 + 0x3b8);
  FWeakObjectPtr::operator=(&local_28,0);
  local_20 = 0;
  FWeakObjectPtr::operator=(&local_28,param_1);
  local_20 = local_res10;
  local_res8 = 0;
  if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_28), lVar7 != 0)) {
    UObject::FindFunction(lVar7,local_20);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar9);
  iVar1 = *(int *)(lVar8 + 0x3c0);
  *(int *)(lVar8 + 0x3c0) = iVar1 + 1;
  if (*(int *)(lVar8 + 0x3c4) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar1);
  }
  puVar6 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar9);
  *puVar6 = local_28;
  puVar6[1] = local_24;
  *(longlong *)(puVar6 + 2) = local_20;
LAB_142ef73d9:
  *(undefined8 *)(param_1 + 0x2d8) = DAT_146b3e300;
  return;
}



// FUNCTION 142ef7460 FUN_142ef7460 body=79 status=ok
// SIG undefined FUN_142ef7460(void)

void FUN_142ef7460(longlong *param_1)

{
  longlong *plVar1;
  
  FUN_142ef7550();
  plVar1 = (longlong *)param_1[0x6a];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x288))(plVar1,2);
  }
  (**(code **)(*param_1 + 0x4a0))(param_1);
  (**(code **)(*param_1 + 0x4a8))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000142ef74a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x498))(param_1);
  return;
}



// FUNCTION 142ef74b0 FUN_142ef74b0 body=160 status=ok
// SIG undefined FUN_142ef74b0(void)

void FUN_142ef74b0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar1 = GetTransientPackage();
  FUN_1417846f0(uVar1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar2 = FUN_142f25af0();
  lVar3 = FUN_1417985e0(uVar2,uVar1,0,0,0,0,0,0,0);
  *(longlong *)(param_1 + 0x2e0) = lVar3;
  if (lVar3 != 0) {
    uVar1 = FUN_142f2b5a0();
    uVar1 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar1);
    lVar3 = *(longlong *)(param_1 + 0x2e0);
    *(longlong *)(lVar3 + 0x50) = param_1;
    *(undefined8 *)(lVar3 + 0x58) = uVar1;
  }
  FUN_142ef7550(param_1);
  return;
}



// FUNCTION 142ef7550 FUN_142ef7550 body=117 status=ok
// SIG undefined FUN_142ef7550(void)

void FUN_142ef7550(undefined8 param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b3e350) {
    _Init_thread_header(&DAT_146b3e350);
    if (DAT_146b3e350 == -1) {
      FName::FName(&DAT_146b3e348,&DAT_14598b794,1);
      _Init_thread_footer(&DAT_146b3e350);
    }
  }
  UUserWidget::NativeConstruct(param_1);
  return;
}



// FUNCTION 142ef75e0 FUN_142ef75e0 body=27 status=ok
// SIG undefined FUN_142ef75e0(void)

void FUN_142ef75e0(longlong param_1)

{
  FUN_142107600();
  *(undefined1 *)(param_1 + 0x308) = 0;
  return;
}



// FUNCTION 142ef7610 FUN_142ef7610 body=105 status=ok
// SIG undefined FUN_142ef7610(void)

void FUN_142ef7610(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  FUN_142107600();
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x2e0) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | 0x20000000;
    *(undefined8 *)(param_1 + 0x2e0) = 0;
  }
  return;
}



// FUNCTION 142ef7690 FUN_142ef7690 body=129 status=ok
// SIG undefined FUN_142ef7690(void)

void FUN_142ef7690(longlong param_1,float *param_2)

{
  UUserWidget::NativeTick();
  if ((((*param_2 != *(float *)(param_1 + 0x2b8)) || (param_2[1] != *(float *)(param_1 + 700))) ||
      (param_2[3] != *(float *)(param_1 + 0x2c4))) ||
     (((param_2[4] != *(float *)(param_1 + 0x2c8) || (param_2[5] != *(float *)(param_1 + 0x2cc))) ||
      ((param_2[6] != *(float *)(param_1 + 0x2d0) || (param_2[2] != *(float *)(param_1 + 0x2c0))))))
     ) {
    FGeometry::operator=((float *)(param_1 + 0x2b8),param_2);
  }
  *(undefined1 *)(param_1 + 0x308) = 1;
  return;
}



// FUNCTION 142ef7720 FUN_142ef7720 body=245 status=ok
// SIG undefined FUN_142ef7720(void)

void FUN_142ef7720(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  UUserWidget::NativeTick();
  if (1e-08 < ABS(*(float *)(param_1 + 0x73) - *(float *)((longlong)param_1 + 0x39c))) {
    FUN_142f12fb0(param_1 + 0x70,param_3);
    (**(code **)(*param_1 + 0x498))(param_1);
    if ((ABS(*(float *)(param_1 + 0x73) - *(float *)((longlong)param_1 + 0x39c)) <= 1e-08) &&
       (param_1[0x66] != 0)) {
      lVar1 = FWeakObjectPtr::Get(param_1 + 0x65);
      if (lVar1 != 0) {
        lVar1 = UObject::FindFunction(lVar1,param_1[0x66]);
        if (lVar1 != 0) {
          plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x65);
          uVar3 = FUN_14178ac60(plVar2,param_1[0x66]);
          (**(code **)(*plVar2 + 0x208))(plVar2,uVar3,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 142ef7820 FUN_142ef7820 body=155 status=ok
// SIG undefined FUN_142ef7820(void)

void FUN_142ef7820(longlong param_1,undefined8 param_2,float param_3)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  
  UUserWidget::NativeTick();
  lVar2 = *(longlong *)(param_1 + 0x2b8);
  if ((lVar2 != 0) && (fVar1 = *(float *)(param_1 + 0x2cc), 1e-08 < fVar1)) {
    param_3 = param_3 * *(float *)(param_1 + 0x2d0);
    fVar3 = fVar1 - param_3;
    if (fVar3 < 0.0) {
      fVar3 = 0.0;
      param_3 = fVar1;
    }
    *(float *)(param_1 + 0x2cc) = fVar3;
    if (*(char *)(param_1 + 0x2c9) == '\0') {
      param_3 = -param_3;
    }
    UWidget::SetRenderTranslation
              (lVar2,CONCAT44(param_3 + *(float *)(lVar2 + 0x94),*(undefined4 *)(lVar2 + 0x90)));
  }
  return;
}



// FUNCTION 142ef78c0 FUN_142ef78c0 body=46 status=ok
// SIG undefined FUN_142ef78c0(void)

void FUN_142ef78c0(longlong param_1,undefined8 param_2)

{
  UUserWidget::NativeTick();
  FGeometry::operator=(param_1 + 0x2c4,param_2);
  return;
}



// FUNCTION 142ef78f0 FUN_142ef78f0 body=208 status=ok
// SIG undefined FUN_142ef78f0(void)

void FUN_142ef78f0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  UUserWidget::NativeTick();
  if ((*(longlong *)(param_1 + 0x2e0) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x2d8), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x7a8))(plVar1,&local_58,local_28);
    lVar2 = *(longlong *)(param_1 + 0x2e0);
    local_48 = local_58 - *(float *)(lVar2 + 0x220);
    local_44 = local_54 - *(float *)(lVar2 + 0x224);
    local_40 = local_50 - *(float *)(lVar2 + 0x228);
    puVar3 = (undefined8 *)FVector::Rotation(&local_48,local_18);
    local_38 = *puVar3;
    local_30 = *(undefined4 *)(puVar3 + 1);
    FUN_142399b90(*(undefined8 *)(param_1 + 0x2e0),&local_38,0,0,0);
  }
  return;
}



// FUNCTION 142ef79c0 FUN_142ef79c0 body=96 status=ok
// SIG undefined FUN_142ef79c0(void)

void FUN_142ef79c0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x2d0);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x48);
    if (0 < iVar1) {
      if ((iVar1 + -1 < iVar1) &&
         (plVar2 = *(longlong **)(*(longlong *)(lVar3 + 0x40) + -8 + (longlong)iVar1 * 8),
         plVar2 != (longlong *)0x0)) {
        lVar3 = (**(code **)(*plVar2 + 0x278))();
      }
      else {
        lVar3 = 0;
      }
      if (param_1 != lVar3) {
        return;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x2d0) == 0) {
    return;
  }
  FUN_142f001d0();
  return;
}



// FUNCTION 142ef7a30 FUN_142ef7a30 body=165 status=ok
// SIG undefined FUN_142ef7a30(void)

void FUN_142ef7a30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_18 [16];
  
  if ((((param_2 != 0) &&
       (FUN_142eed030(param_1,local_18,*(undefined4 *)(param_2 + 0x2d8)),
       *(longlong *)(param_1 + 0x348) != 0)) &&
      (lVar1 = FWeakObjectPtr::Get(param_1 + 0x340), lVar1 != 0)) &&
     (lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 0x348)), lVar1 != 0)) {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x340);
    uVar3 = FUN_14178ac60(plVar2,*(undefined8 *)(param_1 + 0x348));
    (**(code **)(*plVar2 + 0x208))(plVar2,uVar3,local_18);
  }
  return;
}



// FUNCTION 142ef7ae0 FUN_142ef7ae0 body=149 status=ok
// SIG undefined FUN_142ef7ae0(void)

void FUN_142ef7ae0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_142ebed20();
  if ((param_2 != 0) &&
     (cVar2 = UPrimitiveComponent::GetStaticDepthPriorityGroup(param_2), cVar2 == '\x02')) {
    lVar3 = *(longlong *)(param_1 + 0x278);
    lVar4 = (longlong)*(int *)(param_1 + 0x280) * 0x20 + lVar3;
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x20) {
      lVar1 = *(longlong *)(lVar3 + 0x18);
      if (((lVar1 != 0) && (lVar1 != param_2)) &&
         (cVar2 = UPrimitiveComponent::GetStaticDepthPriorityGroup(lVar1), cVar2 == '\x02')) {
        FUN_142ed2820(lVar1,0,1);
      }
    }
  }
  return;
}



// FUNCTION 142ef7b80 FUN_142ef7b80 body=448 status=ok
// SIG undefined FUN_142ef7b80(void)

void FUN_142ef7b80(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  plVar7 = *(longlong **)(param_1 + 0x40);
  plVar8 = (longlong *)0x0;
  plVar9 = (longlong *)((longlong)*(int *)(param_1 + 0x48) & 0x1fffffffffffffff);
  if (plVar7 + *(int *)(param_1 + 0x48) < plVar7) {
    plVar9 = plVar8;
  }
  plVar6 = plVar8;
  if (plVar9 != (longlong *)0x0) {
    do {
      plVar5 = plVar8;
      if (((longlong *)*plVar7 != (longlong *)0x0) &&
         (lVar3 = (**(code **)(*(longlong *)*plVar7 + 0x278))(), lVar3 != 0)) {
        uVar4 = FUN_142f2b5a0();
        plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
      }
      if (plVar5 != (longlong *)0x0) {
        local_48 = *param_2;
        local_40 = param_2[1];
        local_38 = param_2[2];
        if (local_38 != 0) {
          LOCK();
          *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar5 + 0x178))(plVar5,&local_48);
      }
      plVar7 = plVar7 + 1;
      plVar6 = (longlong *)((longlong)plVar6 + 1);
    } while (plVar6 != plVar9);
  }
  plVar7 = *(longlong **)(param_1 + 0x90);
  plVar9 = (longlong *)((longlong)*(int *)(param_1 + 0x98) & 0x1fffffffffffffff);
  if (plVar7 + *(int *)(param_1 + 0x98) < plVar7) {
    plVar9 = plVar8;
  }
  plVar6 = plVar8;
  if (plVar9 != (longlong *)0x0) {
    do {
      plVar5 = plVar8;
      if (((longlong *)*plVar7 != (longlong *)0x0) &&
         (lVar3 = (**(code **)(*(longlong *)*plVar7 + 0x278))(), lVar3 != 0)) {
        uVar4 = FUN_142f2b5a0();
        plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
      }
      if (plVar5 != (longlong *)0x0) {
        local_30 = *param_2;
        local_28 = param_2[1];
        local_20 = param_2[2];
        if (local_20 != 0) {
          LOCK();
          *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar5 + 0x178))(plVar5,&local_30);
      }
      plVar7 = plVar7 + 1;
      plVar6 = (longlong *)((longlong)plVar6 + 1);
    } while (plVar6 != plVar9);
  }
  plVar7 = (longlong *)param_2[2];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar7 + 1;
    lVar3 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return;
}



// FUNCTION 142ef7db0 FUN_142ef7db0 body=324 status=ok
// SIG undefined FUN_142ef7db0(void)

undefined8
FUN_142ef7db0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong lVar1;
  bool bVar2;
  BOOL BVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar7 = 0;
  if (param_2 != 0) {
    lVar4 = FUN_142f38260();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_142ef7e0e;
  }
  param_2 = lVar7;
LAB_142ef7e0e:
  *(undefined4 *)(param_1 + 0x30) = param_5;
  *(longlong *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  uVar5 = GetTransientPackage();
  FUN_1417846f0(uVar5,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar6 = FUN_142f35520();
  lVar4 = FUN_1417985e0(uVar6,uVar5,0,0,0,0,0,0,0);
  *(longlong *)(param_1 + 0x20) = lVar4;
  if (lVar4 != 0) {
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x68));
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x68));
    }
    lVar1 = param_1 + -0x2b8;
    *(longlong *)(lVar4 + 0x38) = lVar1;
    if (lVar1 != 0) {
      uVar5 = FUN_142f2b5a0();
      lVar7 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar5);
    }
    *(longlong *)(lVar4 + 0x40) = lVar7;
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x68));
  }
  if (((*(longlong *)(param_1 + 8) == 0) || (*(longlong *)(param_1 + 0x10) == 0)) ||
     (*(longlong *)(param_1 + 0x18) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 142ef7f10 FUN_142ef7f10 body=36 status=ok
// SIG undefined FUN_142ef7f10(void)

void FUN_142ef7f10(longlong param_1)

{
  FUN_142f2d110();
  *(undefined1 *)(param_1 + 0x309) = 0;
  FUN_142136910(param_1,2);
  return;
}



// FUNCTION 142ef7f40 FUN_142ef7f40 body=54 status=ok
// SIG undefined FUN_142ef7f40(void)

void FUN_142ef7f40(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x1c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  uVar1 = FUN_14203ca50();
  FUN_140483870(uVar1,param_1);
  return;
}



// FUNCTION 142ef7f80 FUN_142ef7f80 body=1102 status=ok
// SIG undefined FUN_142ef7f80(void)

void FUN_142ef7f80(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  bool bVar14;
  undefined4 local_res10 [2];
  undefined4 local_res18;
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  longlong *local_120;
  longlong local_118;
  longlong *plStack_110;
  longlong local_108;
  longlong *plStack_100;
  longlong *local_f8;
  longlong *local_f0;
  undefined1 *local_e8 [2];
  undefined1 local_d8 [32];
  undefined8 local_b8;
  undefined4 local_a8;
  code *local_98 [2];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  
  bVar14 = false;
  bVar6 = false;
  local_res10[0] = 0;
  plVar12 = *(longlong **)(param_1 + 0x28);
  local_f0 = (longlong *)(param_1 + 0x28);
  local_f8 = plVar12 + *(int *)(param_1 + 0x30);
  if (plVar12 != plVar12 + *(int *)(param_1 + 0x30)) {
    do {
      lVar13 = 0;
      lVar3 = *plVar12;
      if (lVar3 == 0) {
        plVar10 = &local_108;
        local_108 = 0;
        plStack_100 = (longlong *)0x0;
        bVar6 = true;
      }
      else {
        if ((*(longlong *)(lVar3 + 0x158) == 0) || (*(longlong *)(lVar3 + 0x160) == 0)) {
LAB_142ef8091:
          plVar10 = &local_118;
          local_118 = 0;
          plStack_110 = (longlong *)0x0;
          lVar13 = 0;
          bVar5 = false;
          bVar14 = true;
        }
        else {
          piVar1 = (int *)(*(longlong *)(lVar3 + 0x160) + 8);
          LOCK();
          iVar8 = *piVar1;
          if (iVar8 == 0) {
            *piVar1 = 0;
            iVar8 = 0;
          }
          UNLOCK();
          if (iVar8 < 1) goto LAB_142ef8091;
          local_130 = *(longlong **)(lVar3 + 0x160);
          local_138 = 0;
          if (local_130 == (longlong *)0x0) {
LAB_142ef8080:
            plVar10 = &local_138;
            bVar5 = true;
            bVar14 = false;
            lVar13 = local_138;
          }
          else {
            LOCK();
            iVar8 = (int)local_130[1];
            bVar14 = iVar8 == 0;
            if (bVar14) {
              *(int *)(local_130 + 1) = 0;
              iVar8 = 0;
            }
            UNLOCK();
            while (!bVar14) {
              LOCK();
              bVar14 = iVar8 == (int)local_130[1];
              if (bVar14) {
                *(int *)(local_130 + 1) = iVar8 + 1;
              }
              UNLOCK();
              if (bVar14) {
                if (local_130 != (longlong *)0x0) {
                  local_138 = *(longlong *)(lVar3 + 0x158);
                }
                goto LAB_142ef8080;
              }
              LOCK();
              iVar8 = (int)local_130[1];
              bVar14 = iVar8 == 0;
              if (bVar14) {
                *(int *)(local_130 + 1) = 0;
                iVar8 = 0;
              }
              UNLOCK();
            }
            plVar10 = &local_138;
            local_130 = (longlong *)0x0;
            bVar5 = true;
            bVar14 = false;
            lVar13 = 0;
          }
        }
        local_128 = lVar13;
        plVar4 = (longlong *)plVar10[1];
        plVar10[1] = 0;
        local_120 = plVar4;
        *plVar10 = 0;
        plVar10 = plStack_110;
        if ((bVar14) && (plStack_110 != (longlong *)0x0)) {
          LOCK();
          plVar4 = plStack_110 + 1;
          lVar7 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plStack_110)(plStack_110);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plStack_110 + 8))(plStack_110,1);
            }
          }
        }
        plVar10 = local_130;
        if ((bVar5) && (local_130 != (longlong *)0x0)) {
          LOCK();
          plVar4 = local_130 + 1;
          lVar7 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_130)(local_130);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_130 + 8))(local_130,1);
            }
          }
        }
        bVar14 = true;
        plVar10 = &local_128;
      }
      plVar4 = (longlong *)plVar10[1];
      plVar10[1] = 0;
      *plVar10 = 0;
      plVar10 = plStack_100;
      if ((bVar6) && (bVar6 = false, plStack_100 != (longlong *)0x0)) {
        LOCK();
        plVar2 = plStack_100 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_100)(plStack_100);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plStack_100 + 8))(plStack_100,1);
          }
        }
      }
      plVar10 = local_120;
      if ((bVar14) && (bVar14 = false, local_120 != (longlong *)0x0)) {
        LOCK();
        plVar2 = local_120 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_120)(local_120);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_120 + 8))(local_120,1);
          }
        }
      }
      if (lVar13 != 0) {
        local_res10[0] = 0xffffffff;
        uVar9 = 0xffffffff;
        if (lVar3 != 0) {
          FUN_14170c210(local_res10,lVar3);
          uVar9 = local_res10[0];
        }
        local_res10[0] = 0xffffffff;
        local_res18 = uVar9;
        FUN_1416f8340(0xffffffff);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        local_b8 = 0;
        local_a8 = 0;
        puVar11 = (undefined8 *)FUN_140438ef0(0x18,local_d8);
        plVar10 = plVar4;
        if (puVar11 != (undefined8 *)0x0) {
          *puVar11 = &PTR_FUN_14461b758;
          puVar11[1] = lVar13;
          puVar11[2] = plVar4;
          plVar10 = (longlong *)0x0;
        }
        local_68 = 0;
        local_e8[0] = &LAB_140f270e0;
        local_58 = 0;
        puVar11 = (undefined8 *)FUN_140438ef0(0x10,local_88);
        if (puVar11 != (undefined8 *)0x0) {
          *puVar11 = &PTR_FUN_1444f8758;
          *(undefined4 *)(puVar11 + 1) = local_res18;
          local_res18 = 0xffffffff;
        }
        local_98[0] = FUN_142ee3740;
        FUN_14204c730(lVar13,local_98,local_e8);
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar10 + 1;
          lVar3 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        FUN_1416f8340(local_res18);
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar4 + 1;
        lVar3 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
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
      plVar12 = plVar12 + 1;
    } while (plVar12 != local_f8);
  }
  *(undefined4 *)(local_f0 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)local_f0 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(local_f0,0);
  }
  *(undefined1 *)(param_1 + 0x39) = 0;
  return;
}



// FUNCTION 142ef83d0 FUN_142ef83d0 body=66 status=ok
// SIG undefined FUN_142ef83d0(void)

void FUN_142ef83d0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x180) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x180) + 0x288))();
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  FUN_14208af70(param_1);
  return;
}



// FUNCTION 142ef8420 thunk_FUN_14208af70 body=5 status=ok
// SIG undefined thunk_FUN_14208af70(void)

void thunk_FUN_14208af70(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  longlong lStack_68;
  longlong *plStack_60;
  longlong lStack_58;
  longlong *plStack_50;
  
  iVar6 = *(int *)((longlong)param_1 + 0xc);
  lVar13 = 0;
  if (iVar6 < (int)DAT_1469e91c4) {
    uVar11 = iVar6 >> 0x1f & 0xffff;
    uVar5 = iVar6 + uVar11;
    lVar13 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
             (longlong)(int)((uVar5 & 0xffff) - uVar11) * 0x18;
  }
  *(uint *)(lVar13 + 8) = *(uint *)(lVar13 + 8) & 0xfbffffff;
  if ((param_1[5] != 0) && (param_1[6] != 0)) {
    piVar1 = (int *)(param_1[6] + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      plStack_60 = (longlong *)param_1[6];
      lStack_68 = 0;
      if (plStack_60 == (longlong *)0x0) {
LAB_14208b04f:
        plVar7 = &lStack_68;
        bVar4 = true;
        bVar16 = false;
        lVar13 = lStack_68;
      }
      else {
        LOCK();
        iVar6 = (int)plStack_60[1];
        bVar16 = iVar6 == 0;
        if (bVar16) {
          *(int *)(plStack_60 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar16) {
          LOCK();
          bVar16 = iVar6 == (int)plStack_60[1];
          if (bVar16) {
            *(int *)(plStack_60 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar16) {
            if (plStack_60 != (longlong *)0x0) {
              lStack_68 = param_1[5];
            }
            goto LAB_14208b04f;
          }
          LOCK();
          iVar6 = (int)plStack_60[1];
          bVar16 = iVar6 == 0;
          if (bVar16) {
            *(int *)(plStack_60 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        plVar7 = &lStack_68;
        plStack_60 = (longlong *)0x0;
        bVar4 = true;
        bVar16 = false;
        lVar13 = 0;
      }
      goto LAB_14208b076;
    }
  }
  plVar7 = &lStack_58;
  lStack_58 = 0;
  plStack_50 = (longlong *)0x0;
  bVar4 = false;
  bVar16 = true;
  lVar13 = 0;
LAB_14208b076:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_50;
  if ((bVar16) && (plStack_50 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_50 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  plVar7 = plStack_60;
  if ((bVar4) && (plStack_60 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_60 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_60 + 8))(plStack_60,1);
      }
    }
  }
  if (lVar13 != 0) {
    lVar8 = (**(code **)(*param_1 + 0x290))(param_1);
    if (lVar8 != 0) {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 400));
      TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
      ::Remove(lVar8 + 0x198,lVar13 + 0x28);
      lVar9 = (longlong)*(int *)(lVar8 + 0x200);
      if (*(int *)(lVar8 + 0x200) != 0) {
        iVar15 = 0;
        bVar16 = (longlong *)**(undefined8 **)(lVar8 + 0x1f8) != param_1;
        lVar12 = 0;
        iVar6 = 0;
        do {
          lVar12 = lVar12 + 1;
          iVar14 = iVar6 + 1;
          if (lVar12 < lVar9) {
            puVar10 = (undefined8 *)(*(longlong *)(lVar8 + 0x1f8) + lVar12 * 8);
            do {
              if (bVar16 != ((longlong *)*puVar10 != param_1)) break;
              iVar14 = iVar14 + 1;
              lVar12 = lVar12 + 1;
              puVar10 = puVar10 + 1;
            } while (lVar12 < lVar9);
          }
          if (bVar16 != false) {
            if (iVar15 != iVar6) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(lVar8 + 0x1f8) + (longlong)iVar15 * 8),
                         (void *)(*(longlong *)(lVar8 + 0x1f8) + (longlong)iVar6 * 8),
                         (longlong)(iVar14 - iVar6) << 3);
            }
            iVar15 = iVar15 + (iVar14 - iVar6);
          }
          bVar16 = (bool)(bVar16 ^ 1);
          iVar6 = iVar14;
        } while (lVar12 < lVar9);
        *(int *)(lVar8 + 0x200) = iVar15;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar8 + 400));
    }
    FUN_142033200(lVar13);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar13 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  return;
}



// FUNCTION 142ef8430 FUN_142ef8430 body=188 status=ok
// SIG undefined FUN_142ef8430(void)

void FUN_142ef8430(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar2 = *(longlong **)(param_1 + 0x398);
  iVar1 = *(int *)(param_1 + 0x3a0);
  if (plVar2 != plVar2 + (longlong)iVar1 * 6) {
    plVar6 = plVar2 + 3;
    do {
      plVar3 = (longlong *)*plVar6;
      if (plVar3 != (longlong *)0x0) {
        lVar5 = UPlatformInterfaceBase::GetPrivateStaticClass();
        if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          (**(code **)(*plVar3 + 0x288))(plVar3);
        }
        *plVar6 = 0;
      }
      plVar3 = plVar6 + 3;
      plVar6 = plVar6 + 6;
    } while (plVar3 != plVar2 + (longlong)iVar1 * 6);
  }
  FUN_142ec0230(param_1);
  return;
}



// FUNCTION 142ef84f0 FUN_142ef84f0 body=581 status=ok
// SIG undefined FUN_142ef84f0(void)

void FUN_142ef84f0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  FWeakObjectPtr::operator=(param_1 + 0x378,0);
  *(undefined8 *)(param_1 + 0x380) = 0;
  plVar1 = *(longlong **)(param_1 + 0x2d8);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x2e0);
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x2f8);
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x2e8);
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x2f0);
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x300);
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x300) = 0;
  FUN_142ebfc00(param_1);
  return;
}



// FUNCTION 142ef8740 FUN_142ef8740 body=120 status=ok
// SIG undefined FUN_142ef8740(void)

void FUN_142ef8740(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x170);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x170) = 0;
  FUN_14208af70(param_1);
  return;
}



// FUNCTION 142ef87c0 FUN_142ef87c0 body=238 status=ok
// SIG undefined FUN_142ef87c0(void)

void FUN_142ef87c0(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong **local_res8;
  longlong *local_28;
  undefined8 local_20;
  undefined1 *local_18;
  longlong ***ppplStack_10;
  
  FUN_142f28000();
  uVar1 = 0;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  local_20._0_4_ = 0;
  if (param_1[0x34] != 0) {
    local_res8 = &local_28;
    ppplStack_10 = &local_res8;
    local_18 = &LAB_142ee3650;
    FUN_1420f6930(param_1[0x34],&local_18,0);
  }
  uVar2 = (ulonglong)((longlong)(local_28 + (int)local_20) + (7 - (longlong)local_28)) >> 3;
  if (local_28 + (int)local_20 < local_28) {
    uVar2 = uVar1;
  }
  plVar3 = local_28;
  if (uVar2 != 0) {
    do {
      if ((longlong *)*plVar3 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar3 + 0x4a0))();
      }
      uVar1 = uVar1 + 1;
      plVar3 = plVar3 + 1;
    } while (uVar1 != uVar2);
  }
  (**(code **)(*param_1 + 0x298))(param_1);
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ef88d0 FUN_142ef88d0 body=101 status=ok
// SIG undefined FUN_142ef88d0(void)

void FUN_142ef88d0(longlong param_1)

{
  FWeakObjectPtr::operator=(param_1 + 0x310,0);
  *(undefined8 *)(param_1 + 0x318) = 0;
  if (*(longlong **)(param_1 + 0x2f0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x2f0) + 0x288))();
  }
  if (*(longlong **)(param_1 + 0x2f8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x2f8) + 0x288))();
  }
  FUN_142ebfc00(param_1);
  return;
}



// FUNCTION 142ef8940 FUN_142ef8940 body=167 status=ok
// SIG undefined FUN_142ef8940(void)

void FUN_142ef8940(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x170) != &local_18) {
    *(undefined8 *)(param_1 + 0x170) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x178,&local_10);
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
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
  FUN_14208af70(param_1);
  return;
}



// FUNCTION 142ef89f0 FUN_142ef89f0 body=269 status=ok
// SIG undefined FUN_142ef89f0(void)

void FUN_142ef89f0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong **local_res8;
  longlong *local_28;
  int local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  longlong ***ppplStack_10;
  
  uVar4 = 0;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  local_1c = 0;
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    local_res8 = &local_28;
    ppplStack_10 = &local_res8;
    local_18 = &LAB_142ee3650;
    FUN_1420f6930(*(longlong *)(param_1 + 0x1a0),&local_18);
  }
  uVar7 = (ulonglong)((longlong)(local_28 + local_20) + (7 - (longlong)local_28)) >> 3;
  if (local_28 + local_20 < local_28) {
    uVar7 = uVar4;
  }
  plVar5 = local_28;
  uVar6 = uVar4;
  if (uVar7 != 0) {
    do {
      if (*plVar5 != 0) {
        uVar1 = *(uint *)(*plVar5 + 0xc);
        uVar2 = uVar4;
        if ((int)uVar1 < (int)DAT_1469e91c4) {
          uVar3 = uVar1 & 0xffff;
          if ((int)uVar1 < 0) {
            uVar1 = uVar1 + 0xffff;
            uVar3 = uVar3 - 0x10000;
          }
          uVar2 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar1 >> 0x10) * 8) +
                  (longlong)(int)uVar3 * 0x18;
        }
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) | 0x20000000;
      }
      plVar5 = plVar5 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar7);
  }
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 142ef8b00 FUN_142ef8b00 body=282 status=ok
// SIG undefined FUN_142ef8b00(void)

void FUN_142ef8b00(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  BOOL BVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 local_res8 [2];
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  lVar6 = 0;
  if (lVar2 != 0) {
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x68));
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x68));
    }
    local_res8[0] = 0xffffffff;
    if (*(longlong *)(lVar2 + 0x48) != 0) {
      FUN_14170c210(local_res8);
    }
    lVar3 = *(longlong *)(lVar2 + 0x50);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x68));
    if (lVar3 != 0) {
      FUN_142ed3540(lVar3,0,0);
    }
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x68));
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x68));
    }
    *(undefined8 *)(lVar2 + 0x48) = 0;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x68));
    FUN_1416f8340(local_res8[0]);
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar5 = iVar1 + uVar7;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar7) * 0x18;
    }
    *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x20000000;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 142ef8c20 FUN_142ef8c20 body=154 status=ok
// SIG undefined FUN_142ef8c20(void)

void FUN_142ef8c20(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  FUN_142f28040();
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x2c8);
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 0x2d0));
      if (lVar1 != 0) {
        local_res8 = *param_2;
        plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x2c8);
        uVar3 = FUN_14178ac60(plVar2,*(undefined8 *)(param_1 + 0x2d0));
        (**(code **)(*plVar2 + 0x208))(plVar2,uVar3,&local_res8);
      }
    }
  }
  return;
}



// FUNCTION 142ef8cc0 FUN_142ef8cc0 body=154 status=ok
// SIG undefined FUN_142ef8cc0(void)

void FUN_142ef8cc0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  FUN_142f323b0();
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0x340) != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x338);
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 0x340));
      if (lVar1 != 0) {
        local_res8 = *param_2;
        plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x338);
        uVar3 = FUN_14178ac60(plVar2,*(undefined8 *)(param_1 + 0x340));
        (**(code **)(*plVar2 + 0x208))(plVar2,uVar3,&local_res8);
      }
    }
  }
  return;
}



// FUNCTION 142ef8d60 FUN_142ef8d60 body=383 status=ok
// SIG undefined FUN_142ef8d60(void)

void FUN_142ef8d60(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  if (((param_1[0x59] == 0) || (param_1[0x5a] == 0)) ||
     (((longlong *)param_1[0x5a] != (longlong *)0x0 &&
      ((cVar5 = (**(code **)(*(longlong *)param_1[0x5a] + 0x90))(), cVar5 != '\0' &&
       (cVar5 = (**(code **)(param_1[0x41] + 0x40))(), cVar5 != '\0')))))) {
    cVar5 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x2a4);
    if ((cVar5 != '\0') &&
       ((cVar5 = (**(code **)(param_1[0x41] + 0x40))(), cVar5 != '\0' &&
        (cVar5 = FUN_142eed6d0(param_1), cVar5 == '\x02')))) {
      lVar6 = FWeakObjectPtr::Get((longlong)param_1 + 0x2a4);
      if (*(longlong *)(lVar6 + 0x2d8) != 0) {
        FUN_142f0d400(*(longlong *)(lVar6 + 0x2d8),param_1,1);
      }
    }
    cVar5 = (**(code **)(param_1[0x41] + 0x40))();
    if (cVar5 != '\0') {
      FName::FName(local_38,&DAT_143f3eda8,1);
      local_2c = 0;
      local_30 = 0xffffffff;
      FName::FName(local_28,&DAT_143f3eda8,1);
      local_10 = 0;
      local_20 = 0;
      plStack_18 = (longlong *)0x0;
      lVar6 = (**(code **)(*param_1 + 0x2a8))();
      if (lVar6 == 0) {
        local_30 = 0;
      }
      else {
        lVar6 = (**(code **)(*param_1 + 0x2a8))(param_1);
        local_30 = *(undefined4 *)(lVar6 + 0x108);
      }
      (**(code **)(*param_1 + 0x488))(param_1,local_38);
      plVar4 = plStack_18;
      if (plStack_18 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_18 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_18)(plStack_18);
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
    }
  }
  return;
}



// FUNCTION 142ef8ee0 FUN_142ef8ee0 body=308 status=ok
// SIG undefined FUN_142ef8ee0(void)

void FUN_142ef8ee0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  cVar5 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x2a4);
  if (cVar5 != '\0') {
    cVar5 = (**(code **)(param_1[0x41] + 0x40))();
    if (cVar5 != '\0') {
      cVar5 = FUN_142eed6d0(param_1);
      if (cVar5 == '\x02') {
        lVar6 = FWeakObjectPtr::Get((longlong)param_1 + 0x2a4);
        if (*(longlong *)(lVar6 + 0x2d8) != 0) {
          FUN_142f0d400(*(longlong *)(lVar6 + 0x2d8),param_1,1);
        }
      }
    }
  }
  cVar5 = (**(code **)(param_1[0x41] + 0x40))();
  if (cVar5 != '\0') {
    FName::FName(local_38,&DAT_143f3eda8,1);
    local_2c = 0;
    local_30 = 0xffffffff;
    FName::FName(local_28,&DAT_143f3eda8,1);
    local_10 = 0;
    local_20 = 0;
    plStack_18 = (longlong *)0x0;
    lVar6 = (**(code **)(*param_1 + 0x2a8))();
    if (lVar6 == 0) {
      local_30 = 0;
    }
    else {
      lVar6 = (**(code **)(*param_1 + 0x2a8))(param_1);
      local_30 = *(undefined4 *)(lVar6 + 0x108);
    }
    (**(code **)(*param_1 + 0x488))(param_1,local_38);
    plVar4 = plStack_18;
    if (plStack_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_18 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_18)(plStack_18);
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
  }
  return;
}



// FUNCTION 142ef9020 FUN_142ef9020 body=407 status=ok
// SIG undefined FUN_142ef9020(void)

void FUN_142ef9020(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if ((*(longlong *)(param_1 + 0x2c8) != 0) && (*(longlong *)(param_1 + 0x2d0) != 0)) {
    if (*(longlong **)(param_1 + 0x2d0) == (longlong *)0x0) {
      return;
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2d0) + 0x90))();
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = (**(code **)(*(longlong *)(param_1 + 0x208) + 0x40))((longlong *)(param_1 + 0x208));
    if (cVar1 == '\0') {
      return;
    }
  }
  plVar4 = (longlong *)(param_1 + 0x208);
  FUN_142ed3610(plVar4,1);
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x2a4);
  if (((cVar1 != '\0') && (cVar1 = (**(code **)(*plVar4 + 0x40))(plVar4), cVar1 != '\0')) &&
     (cVar1 = FUN_142eed6d0(param_1), cVar1 == '\x01')) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x2a4);
    if (*(longlong *)(lVar2 + 0x2d8) != 0) {
      FUN_142f0d400(*(longlong *)(lVar2 + 0x2d8),param_1,1);
    }
  }
  if ((*(longlong *)(param_1 + 0x2c8) != 0) && (*(longlong *)(param_1 + 0x2d0) != 0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2d0) + 0x80))();
    plVar4 = (longlong *)0x0;
    if (cVar1 == '\0') {
      plVar3 = plVar4;
      if (*(longlong *)(param_1 + 0x2c8) != 0) {
        plVar3 = *(longlong **)(param_1 + 0x2d0);
      }
      (**(code **)(*plVar3 + 0x88))(plVar3,1);
      plVar3 = plVar4;
      if (*(longlong *)(param_1 + 0x2c8) != 0) {
        plVar3 = *(longlong **)(param_1 + 0x2d0);
      }
      cVar1 = (**(code **)(*plVar3 + 0x80))();
      if (cVar1 == '\0') {
        return;
      }
    }
    if (*(char *)(param_1 + 0x231) == '\x01') {
      plVar3 = plVar4;
      if (*(longlong *)(param_1 + 0x2c8) != 0) {
        plVar3 = *(longlong **)(param_1 + 0x2d0);
      }
      cVar1 = (**(code **)(*plVar3 + 0x80))();
      if (cVar1 != '\0') {
        if (*(longlong *)(param_1 + 0x2c8) != 0) {
          plVar4 = *(longlong **)(param_1 + 0x2d0);
        }
        (**(code **)(*plVar4 + 0x18))(plVar4,*(undefined4 *)(param_1 + 0x2e0),0,1);
      }
    }
  }
  return;
}



// FUNCTION 142ef91c0 FUN_142ef91c0 body=132 status=ok
// SIG undefined FUN_142ef91c0(void)

void FUN_142ef91c0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  FUN_142ed3610(param_1 + 0x208,1);
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x2a4);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*(longlong *)(param_1 + 0x208) + 0x40))(param_1 + 0x208);
    if (cVar1 != '\0') {
      cVar1 = FUN_142eed6d0(param_1);
      if (cVar1 == '\x01') {
        lVar2 = FWeakObjectPtr::Get(param_1 + 0x2a4);
        if (*(longlong *)(lVar2 + 0x2d8) != 0) {
          FUN_142f0d400(*(longlong *)(lVar2 + 0x2d8),param_1,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142ef9270 FUN_142ef9270 body=495 status=ok
// SIG undefined FUN_142ef9270(void)

void FUN_142ef9270(longlong param_1,char param_2,undefined8 param_3,char param_4)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  cVar2 = *(char *)(param_1 + 0x9a);
  if (param_2 == '\x05') {
    if (cVar2 == '\x01') {
      if ((param_4 == '\0') && (0 < *(int *)(param_1 + 0x110))) {
        iVar7 = *(int *)(param_1 + 0x100);
        lVar6 = param_1 + -0x170;
        iVar3 = *(int *)(param_1 + 0x110);
        iVar5 = (0 < iVar3) - 1;
        *(int *)(param_1 + 0x100) = iVar5;
        if (iVar7 != iVar5) {
          FUN_142ef0fb0(lVar6);
          iVar3 = *(int *)(param_1 + 0x110);
        }
        if (0 < iVar3) {
          fVar1 = *(float *)(param_1 + 0x210);
          fVar10 = *(float *)(param_1 + 0x160);
          if (fVar10 <= 0.0) {
            fVar9 = (float)FUN_142eedc50(lVar6);
            if (fVar9 + fVar10 < fVar1) {
              fVar10 = (float)FUN_142eedc50(lVar6);
              FUN_142f0adf0(lVar6,fVar1 - fVar10,0);
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x164) = 0;
            *(undefined2 *)(param_1 + 0x178) = 0x101;
            *(undefined1 *)(param_1 + 0x17a) = 0;
            uVar8 = *(uint *)(param_1 + 0x150);
            if (0.0 <= fVar10) {
              uVar8 = uVar8 ^ 0x80000000;
            }
            *(uint *)(param_1 + 0x174) = uVar8;
            FUN_142ee43f0(lVar6,fVar10);
          }
        }
      }
    }
    else if ((cVar2 == '\x02') && (param_4 == '\0')) {
      iVar7 = *(int *)(param_1 + 0x104);
      if ((iVar7 == -1) && (iVar7 = -1, 0 < *(int *)(param_1 + 0x110))) {
        iVar7 = 0;
        *(undefined4 *)(param_1 + 0x104) = 0;
      }
      if (((iVar7 < 0) || (*(int *)(param_1 + 0x110) <= iVar7)) && (iVar7 != -1)) {
        iVar7 = -1;
      }
      iVar3 = *(int *)(param_1 + 0x100);
      *(int *)(param_1 + 0x100) = iVar7;
      if (iVar3 != iVar7) {
        FUN_142ef0fb0(param_1 + -0x170,iVar7);
      }
      FUN_142f0ad60(param_1 + -0x170,*(undefined4 *)(param_1 + 0x104),0);
      return;
    }
  }
  else if ((byte)(cVar2 - 1U) < 2) {
    uVar4 = FUN_142eb7a00(param_1 + -0x170);
    *(undefined4 *)(param_1 + 0x104) = uVar4;
    iVar7 = *(int *)(param_1 + 0x100);
    *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
    if (iVar7 != -1) {
      FUN_142ef0fb0(param_1 + -0x170);
      return;
    }
  }
  return;
}



// FUNCTION 142ef9460 FUN_142ef9460 body=202 status=ok
// SIG undefined FUN_142ef9460(void)

void FUN_142ef9460(longlong param_1,char param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = *(char *)(param_1 + 0x68);
  if (param_2 == '\x05') {
    if (cVar1 == '\x01') {
      if (param_4 == '\0') {
        iVar2 = (**(code **)(*(longlong *)(param_1 + -8) + 0x20))(param_1 + -8);
        if (0 < iVar2) {
                    /* WARNING: Could not recover jumptable at 0x000142ef94ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(longlong *)(param_1 + -8) + 0x18))(param_1 + -8,0,1);
          return;
        }
      }
    }
    else if ((cVar1 == '\x02') && (param_4 == '\0')) {
      if (*(int *)(param_1 + 0x18) == -1) {
        iVar2 = (**(code **)(*(longlong *)(param_1 + -8) + 0x20))(param_1 + -8);
        if (0 < iVar2) {
          *(undefined4 *)(param_1 + 0x18) = 0;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000142ef94bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + -8) + 0x18))
                (param_1 + -8,*(undefined4 *)(param_1 + 0x18),1);
      return;
    }
  }
  else if ((byte)(cVar1 - 1U) < 2) {
    uVar3 = (**(code **)(*(longlong *)(param_1 + -8) + 0x10))(param_1 + -8);
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    (**(code **)(*(longlong *)(param_1 + -8) + 0x18))(param_1 + -8,0xffffffff,0);
  }
  return;
}



// FUNCTION 142ef9530 FUN_142ef9530 body=202 status=ok
// SIG undefined FUN_142ef9530(void)

void FUN_142ef9530(longlong param_1,char param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = *(char *)(param_1 + 0x58);
  if (param_2 == '\x05') {
    if (cVar1 == '\x01') {
      if (param_4 == '\0') {
        iVar2 = (**(code **)(*(longlong *)(param_1 + -8) + 0x20))(param_1 + -8);
        if (0 < iVar2) {
                    /* WARNING: Could not recover jumptable at 0x000142ef95bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(longlong *)(param_1 + -8) + 0x18))(param_1 + -8,0,1);
          return;
        }
      }
    }
    else if ((cVar1 == '\x02') && (param_4 == '\0')) {
      if (*(int *)(param_1 + 0x14) == -1) {
        iVar2 = (**(code **)(*(longlong *)(param_1 + -8) + 0x20))(param_1 + -8);
        if (0 < iVar2) {
          *(undefined4 *)(param_1 + 0x14) = 0;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000142ef958f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + -8) + 0x18))
                (param_1 + -8,*(undefined4 *)(param_1 + 0x14),1);
      return;
    }
  }
  else if ((byte)(cVar1 - 1U) < 2) {
    uVar3 = (**(code **)(*(longlong *)(param_1 + -8) + 0x10))(param_1 + -8);
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    (**(code **)(*(longlong *)(param_1 + -8) + 0x18))(param_1 + -8,0xffffffff,0);
  }
  return;
}



// FUNCTION 142ef9600 FUN_142ef9600 body=666 status=ok
// SIG undefined FUN_142ef9600(void)

void FUN_142ef9600(longlong param_1,char param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  char cVar9;
  undefined4 uVar10;
  longlong local_res8;
  undefined1 local_res10;
  undefined1 local_68 [8];
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_58 [8];
  undefined8 local_50;
  longlong *plStack_48;
  undefined1 local_40;
  
  if (((byte)(param_2 - 5U) < 3) && (2 < (byte)(param_3 - 5U))) {
    cVar9 = '\x01';
  }
  else {
    cVar9 = '\0';
  }
  if (((byte)(param_2 - 5U) < 3) || (local_res10 = 1, 2 < (byte)(param_3 - 5U))) {
    local_res10 = 0;
  }
  if (cVar9 != '\0') {
    FName::FName(local_68,&DAT_143f3eda8,1);
    local_5c = 0;
    uVar10 = 0xffffffff;
    local_60 = 0xffffffff;
    FName::FName(local_58,&DAT_143f3eda8,1);
    local_40 = 0;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    local_res8 = (**(code **)(*(longlong *)(param_1 + -0x208) + 0x2a0))();
    if ((local_res8 != 0) && (DAT_146b17150 != 0)) {
      plVar5 = (longlong *)FUN_142874a50(DAT_146b17150,*(undefined8 *)(DAT_146b17150 + 0x7b0));
      iVar8 = 0;
      if (0 < (int)plVar5[1]) {
        lVar7 = 0;
        do {
          lVar3 = *plVar5;
          lVar6 = FUN_14270bb10(local_res8);
          if (*(longlong *)(lVar7 + lVar3) == lVar6) {
            uVar10 = *(undefined4 *)(*(longlong *)(*plVar5 + (longlong)iVar8 * 8) + 0x108);
            break;
          }
          iVar8 = iVar8 + 1;
          lVar7 = lVar7 + 8;
        } while (iVar8 < (int)plVar5[1]);
      }
    }
    local_60 = uVar10;
    FUN_142eb4390(param_1 + 0x68,param_1 + -0x208,local_68);
    plVar5 = plStack_48;
    if (plStack_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_48 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_48)(plStack_48);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  if ((param_2 == '\x01') && (cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x9c), cVar4 != '\0')) {
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x9c);
    if ((*(longlong *)(lVar7 + 0x2d8) != 0) &&
       ((param_1 != 0x208 &&
        (param_1 + -0x208 == *(longlong *)(*(longlong *)(lVar7 + 0x2d8) + 0x48))))) {
      lVar7 = FWeakObjectPtr::Get(param_1 + 0x9c);
      if (*(longlong *)(lVar7 + 0x2d8) != 0) {
        FUN_142f0d400(*(longlong *)(lVar7 + 0x2d8),0,0);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar7 = FUN_142eb86f0(*(longlong *)(param_1 + 0x30),param_2);
    local_res8 = lVar7;
    FUN_142ede8c0(&local_res8,*(undefined8 *)(param_1 + 0x10));
    FUN_142ede8c0(&local_res8,*(undefined8 *)(param_1 + 0x18));
    if (*(longlong *)(param_1 + 0x20) != 0) {
      UImage::SetBrush(*(longlong *)(param_1 + 0x20),lVar7 + 0x38);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x288))
                (*(longlong **)(param_1 + 0x20),(*(char *)(lVar7 + 3) != '\0') + '\x02');
    }
  }
  FUN_142f38400(param_1 + -0x208,param_2,cVar9,local_res10);
  return;
}



// FUNCTION 142ef98a0 FUN_142ef98a0 body=108 status=ok
// SIG undefined FUN_142ef98a0(void)

void FUN_142ef98a0(longlong param_1)

{
  char cVar1;
  
  if ((*(longlong *)(param_1 + 0x2c8) != 0) && (*(longlong *)(param_1 + 0x2d0) != 0)) {
    if ((*(longlong **)(param_1 + 0x2d0) == (longlong *)0x0) ||
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2d0) + 0x90))(), cVar1 == '\0')) {
      return;
    }
    cVar1 = (**(code **)(*(longlong *)(param_1 + 0x208) + 0x40))((longlong *)(param_1 + 0x208));
    if (cVar1 == '\0') {
      return;
    }
  }
  FUN_142ed3610(param_1 + 0x208,0);
  return;
}


