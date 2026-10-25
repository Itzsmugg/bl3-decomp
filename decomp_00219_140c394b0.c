// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140c394b0 FUN_140c394b0 body=31 status=ok
// SIG undefined FUN_140c394b0(void)

void FUN_140c394b0(void)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get();
  if (lVar1 != 0) {
    FUN_140c524b0(lVar1);
    return;
  }
  return;
}



// FUNCTION 140c394d0 FUN_140c394d0 body=40 status=ok
// SIG undefined FUN_140c394d0(void)

void FUN_140c394d0(void)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1e40) != 0)) {
    FUN_14127c260();
    return;
  }
  return;
}



// FUNCTION 140c39510 FUN_140c39510 body=35 status=ok
// SIG undefined FUN_140c39510(void)

void FUN_140c39510(void)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get();
  if (lVar1 != 0) {
    FUN_140a76ae0(lVar1 + 0xf48);
    return;
  }
  return;
}



// FUNCTION 140c39540 FUN_140c39540 body=239 status=ok
// SIG undefined FUN_140c39540(void)

void FUN_140c39540(longlong param_1)

{
  char cVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = *(undefined1 *)(param_1 + 0x118);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x120,local_res8);
  cVar1 = *(char *)(param_1 + 0x118);
  if (cVar1 == '\0') {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x130,0);
    return;
  }
  if (cVar1 == '\x01') {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x140,0);
    return;
  }
  if (cVar1 == '\x02') {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x150,0);
    return;
  }
  if (cVar1 != '\x03') {
    if (cVar1 == '\x04') {
      FUN_142cd8330(param_1 + -0xda8);
      FUN_140c40780(param_1 + -0xda8,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x170,0)
      ;
      return;
    }
    return;
  }
  FUN_140c40780(param_1 + -0xda8,1,0);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x160,0);
  return;
}



// FUNCTION 140c39630 FUN_140c39630 body=466 status=ok
// SIG undefined FUN_140c39630(void)

undefined8 FUN_140c39630(longlong *param_1,longlong *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  if (param_2 != (longlong *)0x0) {
    uVar5 = FUN_14301f8f0();
    plVar6 = (longlong *)(**(code **)(*param_2 + 0x628))(param_2,uVar5);
    if (plVar6 != (longlong *)0x0) {
      uVar5 = (**(code **)(*param_1 + 0x670))(param_1);
      cVar1 = FUN_143003260(plVar6,uVar5);
      if (cVar1 != '\0') {
        return 0;
      }
    }
    cVar1 = FUN_140ad08c0(plVar6);
    if (cVar1 == '\0') {
      lVar10 = 0;
      lVar11 = lVar10;
      if (plVar6 != (longlong *)0x0) {
        lVar11 = plVar6[0x41];
      }
      if (lVar11 != 0) {
        lVar8 = *(longlong *)(lVar11 + 0x1d8);
        if ((lVar8 != 0) && (lVar7 = FUN_140c428d0(param_1), 0 < *(int *)(lVar7 + 0xb8))) {
          uVar5 = FUN_140c428d0(param_1);
          cVar1 = FUN_140e85c90(uVar5,lVar8);
          if (cVar1 == '\0') {
            return 0;
          }
        }
        lVar8 = UGFriendsPanelAllFriendsWidget::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        lVar8 = lVar10;
        if (bVar2) {
          lVar8 = *(longlong *)(lVar11 + 0x300);
        }
        if (lVar8 != 0) {
          lVar7 = (**(code **)(*param_1 + 0x668))(param_1);
          if (lVar7 != 0) {
            lVar9 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              lVar10 = *(longlong *)(lVar7 + 0xa58);
            }
          }
          if (lVar10 != lVar8) {
            return 0;
          }
        }
        if ((((longlong *)param_1[0x21b] != (longlong *)0x0) &&
            (iVar3 = (**(code **)(*(longlong *)param_1[0x21b] + 0x408))(),
            *(char *)(lVar11 + 0x100) != '\0')) &&
           (iVar4 = (**(code **)(*plVar6 + 0x408))(plVar6), iVar3 < iVar4)) {
          uVar5 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
          lVar10 = (**(code **)(*param_2 + 0x628))(param_2,uVar5);
          if (lVar10 == 0) {
            return 0;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140c39820 FUN_140c39820 body=404 status=ok
// SIG undefined FUN_140c39820(void)

ulonglong FUN_140c39820(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  bool bVar6;
  float fVar7;
  
  lVar2 = param_1[0x120];
  if (((((lVar2 != 0) && (*(char *)(lVar2 + 0x248) == '\x06')) && (*(char *)(lVar2 + 0x249) == '\0')
       ) && ((*(longlong *)(lVar2 + 0x178) != 0 && ((*(uint *)(lVar2 + 0x1c0) >> 1 & 1) != 0)))) &&
     ((*(byte *)(lVar2 + 0x200) & 2) != 0)) {
    return CONCAT71((uint7)(uint3)(*(uint *)(lVar2 + 0x1c0) >> 9),1);
  }
  plVar3 = (longlong *)param_1[0x1cd];
  bVar1 = *(byte *)((longlong)param_1 + 0x56c);
  if ((((plVar3 == (longlong *)0x0) || ((*(uint *)(plVar3 + 0x38) >> 1 & 1) == 0)) ||
      (((*(byte *)(plVar3 + 0x40) & 2) == 0 || ((*(uint *)((longlong)plVar3 + 0x4b4) & 0x800) != 0))
      )) || ((cVar4 = (**(code **)(*plVar3 + 0x560))(), cVar4 == '\0' &&
             (cVar4 = (**(code **)(*(longlong *)param_1[0x1cd] + 0x558))(), cVar4 == '\0')))) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  bVar6 = false;
  if ((~bVar1 & bVar5) != 0) {
    fVar7 = (float)(**(code **)(*param_1 + 0x920))(param_1);
    if ((0.0 < fVar7) && ((*(uint *)((longlong)param_1 + 0x56c) & 0x400) != 0)) {
      cVar4 = (**(code **)(*param_1 + 0x888))(param_1);
      if (cVar4 != '\0') {
        if (*(int *)((longlong)param_1 + 0x584) < (int)param_1[0xb0]) {
          return 1;
        }
        if (((*(uint *)((longlong)param_1 + 0x56c) & 0x400) != 0) &&
           (*(int *)((longlong)param_1 + 0x584) == (int)param_1[0xb0])) {
          return 1;
        }
      }
      return 0;
    }
    if ((char)((longlong *)param_1[0x1cd])[0x578] != '\0') {
      return 1;
    }
    if ((*(int *)((longlong)param_1 + 0x584) == 0) &&
       (cVar4 = (**(code **)(*(longlong *)param_1[0x1cd] + 0x558))(), cVar4 != '\0')) {
      return (ulonglong)(*(int *)((longlong)param_1 + 0x584) + 1 < (int)param_1[0xb0]);
    }
    bVar6 = *(int *)((longlong)param_1 + 0x584) < (int)param_1[0xb0];
  }
  return (ulonglong)bVar6;
}



// FUNCTION 140c399c0 FUN_140c399c0 body=28 status=ok
// SIG undefined FUN_140c399c0(void)

bool FUN_140c399c0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_140e71290(param_1 + 0x1518,0);
  return cVar1 == '\0';
}



// FUNCTION 140c399e0 FUN_140c399e0 body=203 status=ok
// SIG undefined FUN_140c399e0(void)

undefined8 FUN_140c399e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  
  if ((param_2 != 0) &&
     ((*(longlong *)(param_1 + 0xd8) == 0 ||
      (*(char *)(*(longlong *)(param_1 + 0xd8) + 0x950) == '\0')))) {
    plVar1 = (longlong *)(param_1 + -0xda0);
    cVar2 = (**(code **)(*plVar1 + 0x950))(plVar1);
    if (cVar2 == '\0') {
      return 1;
    }
    if ((((*(byte *)(param_1 + -0xd20) & 1) == 0) &&
        ((((cVar2 = (**(code **)(*plVar1 + 0x950))(plVar1), cVar2 == '\0' &&
           ((*(longlong *)(param_1 + -0x490) == 0 ||
            ((*(uint *)(*(longlong *)(param_1 + -0x490) + 0x840) >> 3 & 1) == 0)))) ||
          (*(longlong *)(param_1 + 0xf0) == 0)) ||
         (*(char *)(*(longlong *)(param_1 + 0xf0) + 0x3ae) == '\0')))) &&
       ((*(longlong *)(param_2 + 0xb0) != 0 &&
        (*(char *)(*(longlong *)(param_2 + 0xb0) + 0x44) != '\0')))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140c39ab0 FUN_140c39ab0 body=119 status=ok
// SIG undefined FUN_140c39ab0(void)

void FUN_140c39ab0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0xd88) + 0xf0))(param_1 + 0xd88);
  if ((plVar2 != (longlong *)0x0) && (cVar1 = (**(code **)(*plVar2 + 0x7c8))(plVar2), cVar1 == '\0')
     ) {
    return;
  }
  cVar1 = (**(code **)(*(longlong *)(param_1 + 0xd88) + 0x110))(param_1 + 0xd88,param_3);
  if (cVar1 != '\0') {
    FUN_1413f85f0(param_1,param_3);
  }
  return;
}



// FUNCTION 140c39b30 FUN_140c39b30 body=23 status=ok
// SIG undefined FUN_140c39b30(void)

undefined1 FUN_140c39b30(int param_1,longlong param_2)

{
  if (((0 < param_1) && (param_2 != 0)) && (param_1 < *(int *)(param_2 + 0x158))) {
    return 1;
  }
  return 0;
}



// FUNCTION 140c39b60 FUN_140c39b60 body=164 status=ok
// SIG undefined FUN_140c39b60(void)

undefined8 FUN_140c39b60(longlong param_1,longlong param_2)

{
  char *pcVar1;
  bool bVar2;
  longlong lVar3;
  char *pcVar4;
  
  if (param_2 != 0) {
    lVar3 = FUN_14149b100();
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
      pcVar4 = *(char **)(param_1 + 0x1410);
      pcVar1 = pcVar4 + (longlong)*(int *)(param_1 + 0x1418) * 0x18;
      if (pcVar4 != pcVar1) {
        do {
          if (*pcVar4 == *(char *)(param_2 + 0x906)) {
            if (pcVar4 == (char *)0x0) {
              return 1;
            }
            if (pcVar4[0x10] != '\0') {
              return 1;
            }
            return 0;
          }
          pcVar4 = pcVar4 + 0x18;
        } while (pcVar4 != pcVar1);
      }
    }
  }
  return 1;
}



// FUNCTION 140c39c10 FUN_140c39c10 body=195 status=ok
// SIG undefined FUN_140c39c10(void)

undefined8 FUN_140c39c10(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_140e96340(param_1 + 0x2a3);
  if ((((cVar1 != '\0') && (lVar2 = FUN_140e7eef0(param_1 + 0x2a3,0), lVar2 != 0)) &&
      (lVar2 = FUN_140e83520(param_1 + 0x2a3,lVar2), lVar2 != 0)) &&
     (*(char *)((longlong)param_1 + 0x1122) == '\0')) {
    cVar1 = (**(code **)(*param_1 + 0x778))(param_1);
    if ((cVar1 != '\0') && (cVar1 = FUN_140e83450(param_1 + 0x2a3,0), cVar1 != '\0')) {
      return 1;
    }
    cVar1 = (**(code **)(param_1[0x1b1] + 0x18))(param_1 + 0x1b1,0);
    if (cVar1 != '\0') {
      return 1;
    }
    cVar1 = FUN_140e7fa40(param_1 + 0x2a3,0);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  if ((param_1[0x21c] != 0) && (cVar1 = FUN_140adac80(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 140c39ce0 FUN_140c39ce0 body=49 status=ok
// SIG undefined FUN_140c39ce0(void)

undefined1 FUN_140c39ce0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_140e71290(param_1 + 0x790);
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0xf45) == '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 140c39d20 FUN_140c39d20 body=122 status=ok
// SIG undefined FUN_140c39d20(void)

void FUN_140c39d20(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_40 = *param_3;
  local_24 = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_38 = *(undefined4 *)(param_3 + 1);
  local_34 = *(undefined4 *)((longlong)param_3 + 0xc);
  local_30 = *(undefined4 *)(param_3 + 2);
  local_2c = *(undefined4 *)((longlong)param_3 + 0x14);
  local_28 = *(undefined1 *)(param_3 + 3);
  local_20 = param_3[4];
  local_18 = param_3[5];
  local_10 = *(undefined4 *)(param_3 + 6);
  local_48 = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x550,&local_48);
  return;
}



// FUNCTION 140c39da0 FUN_140c39da0 body=36 status=ok
// SIG undefined FUN_140c39da0(void)

void FUN_140c39da0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 local_18;
  undefined1 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x560,&local_18);
  return;
}



// FUNCTION 140c39dd0 FUN_140c39dd0 body=1512 status=ok
// SIG undefined FUN_140c39dd0(void)

void FUN_140c39dd0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  undefined1 local_res18 [8];
  longlong local_res20;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  longlong *local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  longlong *local_58;
  
  if (param_2 != (longlong *)0x0) {
    FWeakObjectPtr::operator=(&local_e8,0);
    local_e0 = 0;
    puVar6 = (undefined8 *)FName::FName(local_78,L"WeaponPutDown",1);
    FWeakObjectPtr::operator=(&local_e8,param_1);
    local_e0 = *puVar6;
    local_b8 = local_e8;
    local_b4 = local_e4;
    local_b0 = local_e0;
    FUN_143094030(param_2,&local_b8);
    if ((char)param_1[0x25] == '\x03') {
      (**(code **)(*param_2 + 0x310))(param_2,0);
      lVar7 = FUN_14149b100();
      if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_14127d5f0(param_2,0);
      }
    }
  }
  FUN_140c5d600(param_1,param_2,param_3);
  cVar3 = (**(code **)(*param_1 + 0xc08))(param_1);
  cVar4 = -1;
  if (param_3 == (longlong *)0x0) {
    if ((cVar3 == '\0') &&
       (lVar7 = (**(code **)(param_1[0x1b1] + 0x170))(param_1 + 0x1b1), lVar7 != 0)) {
      uVar13 = (**(code **)(param_1[0x1b1] + 0x170))(param_1 + 0x1b1);
      FUN_143057c50(uVar13,local_60,3,0,0x3f800000,0,0,0);
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_58 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar11 = (int *)((longlong)local_58 + 0xc);
          iVar1 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)(*local_58 + 8))(local_58,1);
          }
        }
      }
    }
    lVar7 = (**(code **)(param_1[0x1b0] + 0x18))();
    lVar9 = FUN_140c46b40(param_1);
    if ((lVar9 != 0) && (lVar7 != 0)) {
      FUN_142fea760(lVar7,lVar9);
    }
    goto LAB_140c3a262;
  }
  cVar4 = FUN_140e7ef80(param_1 + 0x2a3,param_3);
  if (cVar4 == -1) {
    cVar4 = '\0';
  }
  FWeakObjectPtr::operator=(&local_d8,0);
  local_d0 = 0;
  puVar6 = (undefined8 *)FName::FName(local_70,L"WeaponPutDown",1);
  FWeakObjectPtr::operator=(&local_d8,param_1);
  local_d0 = *puVar6;
  local_a8 = local_d8;
  local_a4 = local_d4;
  local_a0 = local_d0;
  FUN_1430886d0(param_3,&local_a8);
  if (cVar3 != '\0') {
    uVar5 = 1;
    if ((param_2 != (longlong *)0x0) && (*(char *)((longlong)param_2 + 0x639) != '\x01')) {
      (**(code **)(*param_2 + 0x9a0))(param_2,4);
    }
  }
  else {
    uVar5 = (undefined1)param_3[0xc4];
  }
  (**(code **)(*param_3 + 2000))(param_3,param_1,cVar4,uVar5);
  plVar8 = (longlong *)(**(code **)(*param_1 + 0x670))(param_1);
  if (plVar8 == (longlong *)0x0) {
LAB_140c39fda:
    uVar13 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar8 + 0x768))(plVar8);
    if (cVar3 == '\0') goto LAB_140c39fda;
    uVar13 = 2;
  }
  FUN_143076230(param_3,uVar13);
  uVar5 = UEnemyUnit::GetRoutineManager(param_1 + 0x2a3);
  FUN_14308b9e0(param_3,uVar5);
  if ((char)param_1[0x25] == '\x03') {
    lVar7 = *param_3;
    uVar5 = FUN_140e86100(param_1 + 0x2a3,cVar4);
    (**(code **)(lVar7 + 0x310))(param_3,uVar5);
    if ((((longlong *)param_1[0x396] != (longlong *)0x0) && (param_2 != (longlong *)0x0)) ||
       ((longlong *)param_1[0x396] == param_3)) {
      FUN_140c587c0(param_1);
    }
  }
  cVar3 = UUMGSequencePlayer::GetPlaybackContext(param_1 + 0x2a3);
  if (cVar3 != '\0') {
    FUN_14308b750(param_3,0);
  }
  FUN_140c51df0(param_1);
  lVar7 = (**(code **)(param_1[0x1b0] + 0x18))();
  lVar9 = FUN_140c46b40(param_1);
  if (((lVar9 != 0) && (lVar7 != 0)) &&
     ((lVar10 = FUN_142ffa540(lVar7,lVar9), lVar10 == 0 ||
      (piVar11 = (int *)FUN_142ffe3d0(lVar7,local_res18,lVar10), *piVar11 == -1)))) {
    FUN_1430160e0(lVar7,lVar9,param_3);
  }
  FWeakObjectPtr::operator=(&local_c8,0);
  local_c0 = 0;
  puVar6 = (undefined8 *)FName::FName(local_68,L"WeaponEquipped",1);
  FWeakObjectPtr::operator=(&local_c8,param_1);
  local_c0 = *puVar6;
  local_98 = local_c8;
  local_94 = local_c4;
  local_90 = local_c0;
  FUN_143088610(param_3,&local_98);
  lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar7 != 0) {
    lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar7 + 400) == 0) {
      uVar13 = *(undefined8 *)(lVar7 + 0x3f8);
    }
    else {
      uVar13 = *(undefined8 *)(*(longlong *)(lVar7 + 400) + 0x90);
    }
    local_res20 = param_1[0x3a0];
    uVar12 = FTimerManager::FindTimer(uVar13,&local_res20,local_res10);
    FUN_142880730(uVar13,uVar12,local_res10[0]);
  }
LAB_140c3a262:
  lVar7 = param_1[0x92];
  if (lVar7 != 0) {
    lVar9 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_140d19650(lVar7,param_3);
    }
  }
  if (param_1[0x129] != 0) {
    FUN_140c5bd70(param_1);
  }
  local_88 = param_3;
  local_80 = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x20a,&local_88);
  if ((param_3 != (longlong *)0x0) &&
     (cVar3 = (**(code **)(*param_1 + 0x778))(param_1), cVar3 != '\0')) {
    cVar3 = FUN_140e83450(param_1 + 0x2a3,cVar4);
    if ((cVar3 != '\0') && (cVar3 = FUN_140e969b0(param_1 + 0x2a3,cVar4), cVar3 == '\0')) {
      (**(code **)(param_1[0x1b1] + 0x20))(param_1 + 0x1b1,cVar4,0);
    }
    if ((char)param_1[0x278] != '\0') {
      FUN_140c597f0(param_1);
      return;
    }
    *(undefined1 *)(param_1 + 0x278) = 0;
    plVar8 = (longlong *)(**(code **)(param_1[0x1b1] + 0xf0))(param_1 + 0x1b1,0);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x8c0))(plVar8,0,1);
      local_res8[0] = 2;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x206,local_res8);
    }
  }
  return;
}



// FUNCTION 140c3a3c0 FUN_140c3a3c0 body=223 status=ok
// SIG undefined FUN_140c3a3c0(void)

void FUN_140c3a3c0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 0x7c2) == '\0') {
    if (*(char *)(param_1 + 0x7c1) == '\0') {
      return;
    }
    lVar6 = *(longlong *)(param_1 + 0x118);
    if (lVar6 != 0) {
      lVar5 = USoCharacterMovementComponent::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (lVar6 = UCableComponent::GetAttachedActor(lVar6), lVar6 != 0)) {
        cVar2 = FUN_1407c14c0(lVar6,0,1);
        if (cVar2 == '\0') {
          iVar3 = FUN_1407c9e50(lVar6,0,1);
          iVar4 = FUN_1407c9f60(lVar6);
          if (iVar3 <= iVar4) goto LAB_140c3a487;
        }
        FUN_142f56470(param_1,0);
        return;
      }
    }
  }
LAB_140c3a487:
  FUN_142f542a0(param_1);
  return;
}



// FUNCTION 140c3a4a0 FUN_140c3a4a0 body=501 status=ok
// SIG undefined FUN_140c3a4a0(void)

void FUN_140c3a4a0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong local_28;
  undefined8 local_20;
  
  lVar4 = FUN_142f5cb40();
  if (lVar4 != 0) {
    iVar3 = FUN_140c42190();
    if ((iVar3 < 0) || (*(int *)(param_1 + 400) <= iVar3)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_28 = 0;
      local_20 = 0;
      FUN_142f5dfe0(lVar4,&local_28,0);
      plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x188) + (longlong)iVar3 * 0x18);
      plVar9 = plVar7 + (longlong)
                        *(int *)(*(longlong *)(param_1 + 0x188) + 8 + (longlong)iVar3 * 0x18) * 6;
      for (; plVar7 != plVar9; plVar7 = plVar7 + 6) {
        if ((char)plVar7[1] == '\x02') {
          if (*plVar7 != 0) {
            plVar5 = (longlong *)FUN_142f71d80();
            plVar8 = (longlong *)*plVar7;
            for (plVar1 = plVar8; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[6]) {
              if (plVar1 == plVar5) goto LAB_140c3a570;
            }
          }
          plVar8 = (longlong *)0x0;
LAB_140c3a570:
          lVar4 = plVar8[0x1f];
          if (lVar4 == 0) {
            (**(code **)(*plVar8 + 0x368))(plVar8);
            lVar4 = plVar8[0x1f];
            if (lVar4 != 0) goto LAB_140c3a594;
LAB_140c3a5ca:
            lVar4 = 0;
          }
          else {
LAB_140c3a594:
            lVar6 = FUN_142f71d80();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) goto LAB_140c3a5ca;
          }
          if (*(char *)(lVar4 + 0x177) != '\0') {
            TArray<TSubclassOf<UUGGearCampaignKey>,FDefaultAllocator>::Remove(&local_28,plVar7);
          }
        }
      }
      if ((int)local_20 == 0) {
        if (*(int *)(param_1 + 0x1e4) <= iVar3) {
          lVar4 = *(longlong *)(param_1 + 0x118);
          *(int *)(param_1 + 0x1e4) = iVar3 + 1;
          *(undefined1 *)(param_1 + 0x1e8) = 1;
          if (lVar4 != 0) {
            lVar6 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              FUN_140d05d20(lVar4,iVar3);
            }
          }
        }
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x1b8,0);
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140c3a6a0 FUN_140c3a6a0 body=313 status=ok
// SIG undefined FUN_140c3a6a0(void)

void FUN_140c3a6a0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_res18;
  
  if (*(char *)(param_2 + 0xac) != '\0') {
    local_res18 = param_3;
    iVar2 = FUN_142f5d020(&local_res18);
    lVar3 = FUN_140c450c0(param_1,local_res18,0);
    if ((lVar3 == 0) ||
       ((*(char *)(lVar3 + 8) != '\x02' &&
        (*(int *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar2 * 4) == 0)))) {
      if (local_res18 != (longlong *)0x0) {
        plVar4 = (longlong *)FUN_142f71d80();
        for (plVar6 = local_res18; plVar6 != (longlong *)0x0; plVar6 = (longlong *)plVar6[6]) {
          plVar7 = local_res18;
          if (plVar6 == plVar4) goto LAB_140c3a730;
        }
      }
      plVar7 = (longlong *)0x0;
LAB_140c3a730:
      lVar3 = plVar7[0x1f];
      if (lVar3 == 0) {
        (**(code **)(*plVar7 + 0x368))(plVar7);
        lVar3 = plVar7[0x1f];
        if (lVar3 == 0) {
          return;
        }
      }
      lVar5 = FUN_141437870();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        plVar6 = *(longlong **)(lVar3 + 0x4b0);
        plVar4 = plVar6 + (longlong)*(int *)(lVar3 + 0x4b8) * 0xb;
        for (; plVar6 != plVar4; plVar6 = plVar6 + 0xb) {
          if (*plVar6 == param_2) {
            FUN_14146d830(param_1,param_2,local_res18);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c3a7e0 FUN_140c3a7e0 body=168 status=ok
// SIG undefined FUN_140c3a7e0(void)

void FUN_140c3a7e0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  
  cVar3 = (**(code **)(*param_1 + 0x778))();
  if (((cVar3 != '\0') && (cVar3 = FUN_140e71290(param_1 + 0x2a3,2), cVar3 == '\0')) &&
     (iVar4 = 0, 0 < (int)param_1[0x2a4])) {
    lVar5 = 0;
    do {
      lVar1 = param_1[0x2a3];
      plVar2 = *(longlong **)(lVar1 + 8 + lVar5);
      if ((plVar2 != (longlong *)0x0) && (cVar3 = (**(code **)(*plVar2 + 0x888))(), cVar3 != '\0'))
      {
        FUN_140c540f0(param_1,*(undefined8 *)(lVar1 + lVar5),0);
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0xf8;
    } while (iVar4 < (int)param_1[0x2a4]);
  }
  return;
}



// FUNCTION 140c3a890 FUN_140c3a890 body=1354 status=ok
// SIG undefined FUN_140c3a890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140c3a890(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  char *pcVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  undefined1 auStack_1b8 [32];
  int local_198;
  uint uStack_194;
  uint *puStack_190;
  uint local_188;
  uint uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  longlong *local_178;
  undefined8 uStack_170;
  uint *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  longlong *local_150;
  undefined8 uStack_148;
  uint *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 uStack_120;
  uint *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  char local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8 [2];
  uint local_d8 [4];
  uint *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  char local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  if ((*(longlong *)(param_2 + 0x30) != 0) && (*(longlong *)(param_2 + 0x38) != 0)) {
    iVar12 = 0;
    uStack_194 = 1;
    plVar1 = (longlong *)(param_2 + 0x50);
    uVar3 = *(uint *)(param_2 + 0x78);
    puVar2 = (uint *)(param_2 + 0x60);
    local_198 = 0;
    uStack_184 = 0;
    iStack_180 = 0;
    if (uVar3 != 0) {
      puVar11 = *(uint **)(param_2 + 0x70);
      if (*(uint **)(param_2 + 0x70) == (uint *)0x0) {
        puVar11 = puVar2;
      }
      uVar4 = *puVar11;
      iStack_180 = iVar12;
      local_198 = iVar12;
      while (uVar4 == 0) {
        lVar8 = (longlong)local_198;
        iStack_180 = iStack_180 + 0x20;
        iVar6 = local_198 + 1;
        bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_198;
        local_198 = iVar6;
        if (bVar5) goto LAB_140c3a994;
        uVar4 = puVar11[lVar8 + 1];
      }
      uStack_194 = -uVar4 & uVar4;
      iVar6 = 0x1f;
      if (uStack_194 != 0) {
        for (; uStack_194 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uStack_194 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_184 = (iStack_180 - iVar6) + 0x1f;
      if ((int)uVar3 < (int)uStack_184) {
LAB_140c3a994:
        uStack_184 = uVar3;
      }
    }
    uVar4 = *(uint *)(param_2 + 0x78);
    uStack_160 = CONCAT44(uStack_184,0xffffffff);
    uStack_158 = CONCAT44(uStack_17c,iStack_180);
    uStack_170 = CONCAT44(uStack_194,local_198);
    local_188 = -1 << ((byte)uVar4 & 0x1f);
    uVar10 = uVar4 & 0xffffffe0;
    puStack_190 = puVar2;
    uStack_184 = uVar4;
    local_178 = plVar1;
    puStack_168 = puVar2;
    local_150 = plVar1;
    uStack_148 = uStack_170;
    local_140 = puVar2;
    uStack_138 = uStack_160;
    local_130 = uStack_158;
    if (uVar4 != uVar3) {
      puVar11 = *(uint **)(param_2 + 0x70);
      if (*(uint **)(param_2 + 0x70) == (uint *)0x0) {
        puVar11 = puVar2;
      }
      uVar7 = puVar11[(int)uVar4 >> 5] & local_188;
      iVar6 = (int)uVar4 >> 5;
      while (uVar7 == 0) {
        uVar10 = uVar10 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_140c3aa7b;
        uVar7 = puVar11[(longlong)iVar6 + 1];
        local_188 = 0xffffffff;
        iVar6 = iVar6 + 1;
      }
      uVar7 = -uVar7 & uVar7;
      iVar6 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uVar7 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_184 = (uVar10 - iVar6) + 0x1f;
      uVar4 = uStack_184;
      if ((int)uVar3 < (int)uStack_184) {
LAB_140c3aa7b:
        uStack_184 = uVar3;
        uVar4 = uVar3;
      }
    }
    while( true ) {
      if (((uStack_138._4_4_ == uVar4) && (local_140 == puVar2)) && (local_150 == plVar1)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) {
        return 1;
      }
      pcVar9 = (char *)((longlong)(int)uStack_138._4_4_ * 0x68 + *local_150);
      local_f8 = *pcVar9;
      local_f0 = *(undefined4 *)(pcVar9 + 8);
      local_ec = *(undefined4 *)(pcVar9 + 0xc);
      local_e8[0] = 0;
      local_e8[1] = 0;
      local_c8 = (uint *)0x0;
      local_c0 = 0;
      local_b8 = 0xffffffff;
      local_b4 = 0;
      local_a8 = 0;
      local_a0 = 0;
      TSet<TTuple<FName,FSmartNameMapping>,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>,FDefaultSetAllocator>
      ::operator=(local_e8,pcVar9 + 0x10);
      if (9 < (byte)(local_f8 - 1U)) break;
      uVar3 = (uint)local_c0;
      puStack_190 = local_d8;
      local_198 = 0;
      uStack_194 = 1;
      uStack_184 = 0;
      iStack_180 = 0;
      if ((uint)local_c0 != 0) {
        puVar11 = local_d8;
        if (local_c8 != (uint *)0x0) {
          puVar11 = local_c8;
        }
        uVar10 = *puVar11;
        iStack_180 = iVar12;
        local_198 = iVar12;
        while (uVar10 == 0) {
          iStack_180 = iStack_180 + 0x20;
          if ((int)(((uint)local_c0 - 1) + ((int)((uint)local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 <=
              local_198) {
            uStack_184 = (uint)local_c0;
            local_198 = local_198 + 1;
            goto LAB_140c3abdd;
          }
          uVar10 = puVar11[(longlong)local_198 + 1];
          local_198 = local_198 + 1;
        }
        uStack_194 = -uVar10 & uVar10;
        iVar6 = 0x1f;
        if (uStack_194 != 0) {
          for (; uStack_194 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        if (uStack_194 == 0) {
          iVar6 = 0x20;
        }
        else {
          iVar6 = 0x1f - iVar6;
        }
        uStack_184 = (iStack_180 - iVar6) + 0x1f;
        if ((int)(uint)local_c0 < (int)uStack_184) {
          uStack_184 = (uint)local_c0;
        }
      }
LAB_140c3abdd:
      uStack_160 = CONCAT44(uStack_184,0xffffffff);
      uStack_158 = CONCAT44(uStack_17c,iStack_180);
      local_178 = local_e8;
      uStack_120 = CONCAT44(uStack_194,local_198);
      uStack_184 = (uint)local_c0;
      local_188 = -1 << ((byte)local_c0 & 0x1f);
      uStack_170 = CONCAT44(uStack_194,local_198);
      puStack_168 = puStack_190;
      local_128 = local_178;
      puStack_118 = puStack_190;
      uStack_110 = uStack_160;
      uStack_108 = uStack_158;
      while( true ) {
        if (((uStack_160._4_4_ == uVar3) && (puStack_168 == local_d8)) && (local_178 == local_e8)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) break;
        pcVar9 = (char *)((longlong)(int)uStack_160._4_4_ * 0x70 + *local_178);
        local_98 = *pcVar9;
        local_90 = *(undefined4 *)(pcVar9 + 8);
        local_8c = *(undefined4 *)(pcVar9 + 0xc);
        local_88 = *(undefined4 *)(pcVar9 + 0x10);
        local_80 = 0;
        local_78 = 0;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0xffffffff;
        local_4c = 0;
        local_40 = 0;
        local_38 = 0;
        FUN_140c310a0(&local_80,pcVar9 + 0x18);
        local_38 = 0;
        if (0x14 < (byte)(local_98 - 1U)) {
          if (local_40 != 0) {
            FMemory::Free();
          }
          TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                    (&local_80);
          goto LAB_140c3ad6f;
        }
        if (local_40 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_80);
        uStack_160 = CONCAT44(uStack_160._4_4_,(uint)uStack_160 & ~uStack_170._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_170);
      }
      local_a0 = 0;
      if (local_a8 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FName,FDynamicClassStaticData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(local_e8,0);
      if (local_c8 != (uint *)0x0) {
        FMemory::Free();
      }
      if (local_e8[0] != 0) {
        FMemory::Free();
      }
      uStack_138 = CONCAT44(uStack_138._4_4_,(uint)uStack_138 & ~uStack_148._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_148);
    }
LAB_140c3ad6f:
    local_a0 = 0;
    if (local_a8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FName,FDynamicClassStaticData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(local_e8,0);
    if (local_c8 != (uint *)0x0) {
      FMemory::Free();
    }
    if (local_e8[0] != 0) {
      FMemory::Free();
    }
  }
  return 0;
}



// FUNCTION 140c3ade0 FUN_140c3ade0 body=116 status=ok
// SIG undefined FUN_140c3ade0(void)

void FUN_140c3ade0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  for (iVar2 = *(int *)(param_1 + 0x88); iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*(longlong *)(lVar1 + 0x28) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar1 + 0x18) != 0) {
      FMemory::Free();
    }
    FUN_140b4e2b0(lVar1);
    lVar1 = lVar1 + 0x38;
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              ((longlong *)(param_1 + 0x80),0);
  }
  return;
}



// FUNCTION 140c3ae60 FUN_140c3ae60 body=366 status=ok
// SIG undefined FUN_140c3ae60(void)

void FUN_140c3ae60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (param_2 != 0) {
    lVar4 = FUN_142f71d80();
    lVar9 = param_2;
    while (lVar9 != lVar4) {
      lVar9 = *(longlong *)(lVar9 + 0x30);
      if (lVar9 == 0) {
        return;
      }
    }
    iVar2 = FUN_140c42190(param_1);
    if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 400))) {
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar2 * 0x18);
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x188) + 8 + (longlong)iVar2 * 0x18) + -1;
      lVar9 = (longlong)iVar2;
      if (-1 < iVar2) {
        lVar4 = lVar9 * 0x30;
        do {
          lVar10 = *plVar1;
          if (*(longlong *)(lVar10 + lVar4) != 0) {
            lVar5 = FUN_142f71d80();
            lVar10 = *(longlong *)(lVar10 + lVar4);
            for (lVar8 = lVar10; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
              if (lVar8 == lVar5) goto LAB_140c3af20;
            }
          }
          lVar10 = 0;
LAB_140c3af20:
          lVar5 = FUN_142f71d80();
          lVar8 = param_2;
          do {
            lVar6 = param_2;
            if (lVar8 == lVar5) goto LAB_140c3af3d;
            lVar8 = *(longlong *)(lVar8 + 0x30);
          } while (lVar8 != 0);
          lVar6 = 0;
LAB_140c3af3d:
          if (lVar10 == lVar6) {
            if (*(longlong *)(*plVar1 + 0x10 + (longlong)iVar2 * 0x30) != 0) {
              FMemory::Free();
            }
            iVar7 = (int)plVar1[1];
            iVar3 = (iVar7 - iVar2) + -1;
            if (iVar3 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*plVar1 + (longlong)iVar2 * 0x30),
                         (void *)((longlong)(iVar2 + 1) * 0x30 + *plVar1),(longlong)iVar3 * 0x30);
              iVar7 = (int)plVar1[1];
            }
            *(int *)(plVar1 + 1) = iVar7 + -1;
            TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(plVar1);
            return;
          }
          iVar2 = iVar2 + -1;
          lVar4 = lVar4 + -0x30;
          lVar9 = lVar9 + -1;
        } while (-1 < lVar9);
      }
    }
  }
  return;
}



// FUNCTION 140c3afd0 FUN_140c3afd0 body=118 status=ok
// SIG undefined FUN_140c3afd0(void)

void FUN_140c3afd0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  FUN_140c58b10(param_1,0xffffffff);
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
    lVar3 = (**(code **)(*plVar2 + 0x148))(plVar2);
    if (lVar3 != 0) {
      if (*(longlong *)(lVar3 + 400) == 0) {
        uVar4 = *(undefined8 *)(lVar3 + 0x3f8);
      }
      else {
        uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
      }
      FUN_142880530(uVar4,param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
  }
  return;
}



// FUNCTION 140c3b050 FUN_140c3b050 body=137 status=ok
// SIG undefined FUN_140c3b050(void)

void FUN_140c3b050(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  uVar2 = 0;
  puVar4 = *(undefined8 **)(param_1 + 0x660);
  uVar3 = (longlong)*(int *)(param_1 + 0x668) & 0x1fffffffffffffff;
  if (puVar4 + *(int *)(param_1 + 0x668) < puVar4) {
    uVar3 = uVar2;
  }
  if (uVar3 != 0) {
    do {
      lVar1 = FUN_140e83520(param_1 + 0x790,*puVar4);
      if (lVar1 != 0) {
        FUN_14306e7b0(lVar1);
      }
      puVar4 = puVar4 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar3);
  }
  return;
}



// FUNCTION 140c3b0e0 FUN_140c3b0e0 body=688 status=ok
// SIG undefined FUN_140c3b0e0(void)

void FUN_140c3b0e0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  longlong *plVar3;
  bool bVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  undefined8 *puVar13;
  longlong local_res18;
  
  if ((int)param_1[0x3a] != 0) {
    FUN_140c4d910(param_1,0,1,0,param_1[0x3b]);
  }
  plVar8 = (longlong *)FUN_142f5cb40(param_1);
  if (plVar8 != (longlong *)0x0) {
    puVar13 = (undefined8 *)*param_2;
    puVar1 = puVar13 + (int)param_2[1];
    for (; puVar13 != puVar1; puVar13 = puVar13 + 1) {
      cVar7 = (**(code **)(*plVar8 + 0x728))(plVar8,*puVar13);
      if (cVar7 == '\0') {
        return;
      }
    }
    plVar3 = param_1 + 0x39;
    if (plVar3 != param_2) {
      iVar2 = (int)param_2[1];
      _Src = (void *)*param_2;
      *(int *)(param_1 + 0x3a) = iVar2;
      if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0x1d4) == 0)) {
        *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar3,iVar2);
        _guard_xfg_dispatch_icall_nop((void *)*plVar3,_Src,(longlong)iVar2 << 3);
      }
    }
    param_1[0x3b] = param_2[2];
    plVar3 = (longlong *)param_1[0x23];
    if (plVar3 != (longlong *)0x0) {
      lVar9 = FUN_14145f370();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (((bVar4) && (lVar9 = (**(code **)(*plVar3 + 0xfa8))(plVar3), lVar9 != 0)) &&
         (lVar9 = plVar3[0x1bf], lVar9 != 0)) {
        uVar10 = (**(code **)(*plVar3 + 0xfa8))(plVar3);
        lVar9 = FUN_142f02280(uVar10,lVar9);
        if (lVar9 != 0) {
          lVar11 = AMobActorKuroko::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            pwVar12 = _guard_xfg_dispatch_icall_nop
                                (L"&UOakPlayerMissionComponent::OnMissionDeliveryChoice",L"::");
            pwVar6 = (wchar_t *)0x0;
            while (pwVar5 = pwVar12, pwVar5 != (wchar_t *)0x0) {
              pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
              pwVar6 = pwVar5;
            }
            FName::FName(&local_res18,pwVar6 + 2,1);
            FWeakObjectPtr::operator=(lVar9 + 0x680,param_1);
            *(longlong *)(lVar9 + 0x688) = local_res18;
            if ((local_res18 != 0) && (lVar11 = FWeakObjectPtr::Get(lVar9 + 0x680), lVar11 != 0)) {
              UObject::FindFunction(lVar11,*(undefined8 *)(lVar9 + 0x688));
            }
            FUN_140fd6de0(lVar9,param_2,plVar8,param_2[2]);
            lVar9 = FUN_140c45020(param_1);
            if (lVar9 != 0) {
              FUN_140e5f8f0(lVar9 + 0x26f0);
            }
            FUN_140d13500(plVar3,1,DAT_14686c138);
            FUN_140d13830(plVar3,1,DAT_14686c138);
            (**(code **)(*param_1 + 0x358))(param_1,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c3b390 FUN_140c3b390 body=1208 status=ok
// SIG undefined FUN_140c3b390(void)

void FUN_140c3b390(longlong *param_1,float param_2)

{
  float *pfVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  float *pfVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong local_78;
  int local_70;
  
  if ((((char)param_1[0x8f] == '\0') && (param_1[0x8d] != 0)) &&
     (*(longlong *)(param_1[0x8d] + 0x30) != 0)) {
    fVar18 = 0.0;
    lVar4 = (**(code **)(*param_1 + 0x148))();
    if (lVar4 != 0) {
      UWorld::GetPlayerControllerIterator(lVar4,&local_78);
      while( true ) {
        if ((local_70 < 0) || (*(int *)(local_78 + 8) <= local_70)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) break;
        plVar5 = (longlong *)FWeakObjectPtr::Get();
        if (plVar5 != (longlong *)0x0) {
          if (((*(uint *)((longlong)plVar5 + 0x4cc) >> 1 & 1) == 0) ||
             (cVar3 = (**(code **)(*plVar5 + 0x768))(), cVar3 == '\0')) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) && (lVar4 = (**(code **)(*plVar5 + 0x680))(), lVar4 != 0)) {
            lVar6 = UInputKeySelector::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if ((bVar2) && (fVar18 < *(float *)(lVar4 + 0x5d0))) {
              fVar18 = *(float *)(lVar4 + 0x5d0);
            }
          }
        }
        local_70 = local_70 + 1;
      }
    }
    fVar14 = *(float *)(param_1 + 0x8c);
    fVar16 = fVar18 - fVar14;
    fVar15 = fVar18;
    if (0.0001 <= ABS(fVar16)) {
      if (fVar16 <= 0.0) {
        fVar15 = fVar14;
        if ((fVar16 < 0.0) &&
           (fVar15 = param_2 * *(float *)(*(longlong *)(param_1[0x8d] + 0x30) + 0x134) * fVar16 +
                     fVar14, fVar15 <= fVar18)) {
          fVar15 = fVar18;
        }
      }
      else {
        fVar15 = param_2 * *(float *)(*(longlong *)(param_1[0x8d] + 0x30) + 0x130) * fVar16 + fVar14
        ;
        if (fVar18 <= fVar15) {
          fVar15 = fVar18;
        }
      }
    }
    if (0.0 <= fVar15) {
      if (9.99 <= fVar15) {
        fVar15 = 9.99;
      }
    }
    else {
      fVar15 = 0.0;
    }
    plVar5 = param_1 + 0x92;
    *(float *)(param_1 + 0x8c) = fVar15;
    fVar18 = 0.0;
    pfVar8 = (float *)*plVar5;
    uVar13 = (ulonglong)(int)param_1[0x93];
    pfVar1 = pfVar8 + uVar13 * 5;
    if (pfVar8 != pfVar1) {
      do {
        fVar14 = pfVar8[4];
        fVar16 = 0.0;
        fVar15 = pfVar8[1];
        if (fVar15 <= fVar14) {
          fVar17 = pfVar8[2] + fVar15;
          if (fVar17 <= fVar14) {
            if (fVar14 < pfVar8[3] + fVar17) {
              fVar15 = 1.0 - ((fVar14 - pfVar8[2]) - fVar15) / pfVar8[3];
              goto LAB_140c3b60a;
            }
          }
          else {
            fVar16 = *pfVar8;
          }
        }
        else {
          fVar15 = fVar14 / fVar15;
LAB_140c3b60a:
          fVar16 = fVar15 * *pfVar8;
        }
        fVar18 = fVar18 + fVar16;
        pfVar8[4] = fVar14 + param_2;
        pfVar8 = pfVar8 + 5;
      } while (pfVar8 != pfVar1);
      uVar13 = (ulonglong)*(uint *)(param_1 + 0x93);
    }
    uVar9 = 0;
    if (0 < (int)uVar13) {
      uVar11 = uVar9;
      do {
        iVar12 = (int)uVar13;
        lVar4 = *plVar5;
        fVar14 = *(float *)(lVar4 + 8 + uVar9) + *(float *)(lVar4 + 4 + uVar9) +
                 *(float *)(lVar4 + 0xc + uVar9);
        pfVar1 = (float *)(lVar4 + 0x10 + uVar9);
        iVar10 = (int)uVar11;
        if (*pfVar1 <= fVar14 && fVar14 != *pfVar1) {
          uVar11 = (ulonglong)(iVar10 + 1);
          uVar9 = uVar9 + 0x14;
        }
        else {
          iVar7 = (iVar12 - iVar10) + -1;
          if (0 < iVar7) {
            iVar7 = 1;
          }
          if (iVar7 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar4 + (longlong)iVar10 * 0x14),
                       (void *)(lVar4 + (longlong)(iVar12 - iVar7) * 0x14),(longlong)iVar7 * 0x14);
            iVar12 = (int)param_1[0x93];
          }
          *(int *)(param_1 + 0x93) = iVar12 + -1;
          TArray<FInterpCurvePoint<float>,FDefaultAllocator>::ResizeShrink(plVar5);
        }
        uVar13 = (ulonglong)*(uint *)(param_1 + 0x93);
      } while ((int)uVar11 < (int)*(uint *)(param_1 + 0x93));
    }
    fVar14 = *(float *)(param_1 + 0x94);
    fVar16 = fVar18 - fVar14;
    fVar15 = fVar18;
    if (0.0001 <= ABS(fVar16)) {
      if (fVar16 <= 0.0) {
        fVar15 = fVar14;
        if ((fVar16 < 0.0) &&
           (fVar15 = param_2 * *(float *)(*(longlong *)(param_1[0x8d] + 0x30) + 0x134) * fVar16 +
                     fVar14, fVar15 <= fVar18)) {
          fVar15 = fVar18;
        }
      }
      else {
        fVar15 = param_2 * *(float *)(*(longlong *)(param_1[0x8d] + 0x30) + 0x130) * fVar16 + fVar14
        ;
        if (fVar18 <= fVar15) {
          fVar15 = fVar18;
        }
      }
    }
    *(float *)(param_1 + 0x94) = fVar15;
    fVar18 = *(float *)((longlong)param_1 + 0x4a4);
    if (0.5 <= fVar18) {
      fVar14 = 1.0 - (((fVar18 - 0.5) + fVar18) - 0.5);
    }
    else {
      fVar14 = fVar18 + fVar18;
    }
    fVar18 = param_2 * *(float *)(param_1 + 0x95) + fVar18;
    fVar15 = (float)(int)fVar18;
    if (ABS(fVar18) < ABS((float)(int)fVar18)) {
      fVar15 = fVar18;
    }
    *(float *)((longlong)param_1 + 0x4a4) = fVar18 - fVar15;
    fVar14 = fVar14 * *(float *)(*(longlong *)(param_1[0x8d] + 0x30) + 0x1c4) +
             *(float *)(param_1 + 0x94);
    fVar18 = 0.0;
    if ((0.0 <= fVar14) && (fVar18 = fVar14, 9.99 <= fVar14)) {
      fVar18 = 9.99;
    }
    *(float *)((longlong)param_1 + 0x464) = fVar18;
  }
  return;
}



// FUNCTION 140c3b850 FUN_140c3b850 body=49 status=ok
// SIG undefined FUN_140c3b850(void)

void FUN_140c3b850(longlong param_1)

{
  if (*(char *)(param_1 + 0x128) != '\x03') {
    (**(code **)(*(longlong *)(param_1 + 0xd88) + 0x100))();
  }
  return;
}



// FUNCTION 140c3b890 FUN_140c3b890 body=26 status=ok
// SIG undefined FUN_140c3b890(void)

void FUN_140c3b890(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140c450c0(param_1,param_2,0);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x29) = 1;
  }
  return;
}



// FUNCTION 140c3b8b0 FUN_140c3b8b0 body=63 status=ok
// SIG undefined FUN_140c3b8b0(void)

void FUN_140c3b8b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_142f5cb40(param_1 + -0x1a0);
  if (lVar1 != 0) {
    FUN_142f696e0(lVar1,param_2);
    FUN_140c3a4a0(param_1 + -0x1a0);
  }
  return;
}



// FUNCTION 140c3b8f0 FUN_140c3b8f0 body=28 status=ok
// SIG undefined FUN_140c3b8f0(void)

void FUN_140c3b8f0(longlong param_1)

{
  if (*(char *)(param_1 + 0x128) != '\x03') {
    FUN_140c59fc0();
  }
  return;
}



// FUNCTION 140c3b930 FUN_140c3b930 body=45 status=ok
// SIG undefined FUN_140c3b930(void)

void FUN_140c3b930(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142d80d40();
  FUN_142d94090(uVar1,param_2,param_3);
  return;
}



// FUNCTION 140c3b960 FUN_140c3b960 body=9 status=ok
// SIG undefined FUN_140c3b960(void)

void FUN_140c3b960(longlong param_1)

{
  FUN_140c30ef0(param_1 + 0x80);
  return;
}



// FUNCTION 140c3b970 FUN_140c3b970 body=266 status=ok
// SIG undefined FUN_140c3b970(void)

void FUN_140c3b970(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x240) != 0)) {
    lVar2 = FUN_142dfdfe0();
    lVar5 = *(longlong *)(param_2 + 0x240);
    lVar6 = lVar5;
    if (lVar5 != 0) {
      while (lVar6 != lVar2) {
        lVar6 = *(longlong *)(lVar6 + 0x30);
        if (lVar6 == 0) {
          return;
        }
      }
      if ((lVar5 != 0) && (lVar5 = *(longlong *)(param_1 + 0x118), lVar5 != 0)) {
        uVar3 = FUN_142e035e0();
        plVar4 = (longlong *)AGameStateBase::OnRep_GameModeClass(lVar5,uVar3);
        if (plVar4 != (longlong *)0x0) {
          lVar5 = FUN_142e035e0();
          if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            if (*(longlong *)(param_2 + 0x240) != 0) {
              lVar2 = FUN_142dfdfe0();
              lVar5 = *(longlong *)(param_2 + 0x240);
              for (lVar6 = lVar5; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
                if (lVar6 == lVar2) goto LAB_140c3ba60;
              }
            }
            lVar5 = 0;
LAB_140c3ba60:
            (**(code **)(*plVar4 + 0x410))(plVar4,lVar5,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c3ba80 FUN_140c3ba80 body=161 status=ok
// SIG undefined FUN_140c3ba80(void)

undefined8 FUN_140c3ba80(longlong param_1,uint param_2,char param_3)

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
      FUN_140c538a0(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140c3bb30 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<enum_EGPlatformType,UMediaSource_*>,TDefaultMapHashableKeyFuncs<enum_EGPlatformType,UMediaSource_*,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

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
      TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140c3bbe0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FName,FSmartNameMapping>,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

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
      FUN_140c53ee0(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140c3bc90 FUN_140c3bc90 body=144 status=ok
// SIG undefined FUN_140c3bc90(void)

void FUN_140c3bc90(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
LAB_140c3bcfd:
    if (*(char *)(param_1 + 0x3b8) != '\x01') {
      *(undefined1 *)(param_1 + 0x3b8) = 1;
      FUN_142f545a0(param_1);
    }
  }
  else {
    cVar1 = FUN_1407c14c0(param_2,0,1);
    if (cVar1 == '\0') {
      iVar2 = FUN_1407c9e50(param_2,0,1);
      iVar3 = FUN_1407c9f60(param_2);
      if (iVar2 <= iVar3) goto LAB_140c3bcfd;
    }
    if (*(char *)(param_1 + 0x3b8) != '\0') {
      *(undefined1 *)(param_1 + 0x3b8) = 0;
      FUN_142f545a0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140c3bd20 FUN_140c3bd20 body=17 status=ok
// SIG undefined FUN_140c3bd20(void)

void FUN_140c3bd20(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x128) == '\x03') {
    *(undefined8 *)(param_1 + 0x1d18) = param_2;
  }
  return;
}



// FUNCTION 140c3bd60 FUN_140c3bd60 body=105 status=ok
// SIG undefined FUN_140c3bd60(void)

void FUN_140c3bd60(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144358830;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    puVar1[6] = *(undefined8 *)(param_1 + 0x30);
    *puVar1 = &PTR_GetPoolName_144358878;
  }
  return;
}



// FUNCTION 140c3bdd0 FUN_140c3bdd0 body=103 status=ok
// SIG undefined FUN_140c3bdd0(void)

void FUN_140c3bdd0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1443587a0;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar1 = &PTR_GetPoolName_1443587e8;
  }
  return;
}



// FUNCTION 140c3be40 FUN_140c3be40 body=921 status=ok
// SIG undefined FUN_140c3be40(void)

void FUN_140c3be40(longlong *param_1)

{
  undefined4 *puVar1;
  void *_Src;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  char local_res8 [8];
  undefined1 local_res10 [8];
  uint in_stack_ffffffffffffff08;
  longlong local_c8;
  undefined8 local_c0;
  undefined4 *local_b8;
  ulonglong local_b0;
  undefined1 *local_a8;
  longlong *local_a0;
  undefined1 local_98;
  undefined8 local_90 [2];
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined1 *local_58;
  undefined1 **ppuStack_50;
  code *local_48;
  undefined1 **ppuStack_40;
  
  if (2 < *(byte *)(param_1 + 0x25)) {
    uVar4 = ALevelScriptActor::GetPrivateStaticClass();
    lVar5 = (**(code **)(*param_1 + 0x628))(param_1,uVar4);
    if (lVar5 != 0) {
      if (((*(byte *)((longlong)param_1 + 0x13fc) & 1) == 0) &&
         (cVar3 = FUN_140a10340(lVar5), cVar3 != '\0')) {
        local_b8 = (undefined4 *)0x0;
        local_b0 = 0;
        local_res8[0] = '\0';
        FUN_140a06bb0(lVar5,&local_b8,local_res8);
        uVar11 = (ulonglong)(int)(uint)local_b0;
        puVar13 = local_b8;
        uVar10 = (uint)local_b0;
        if (0 < (int)(uint)local_b0) {
          uVar12 = 1;
          puVar13 = local_b8 + uVar11 * 8;
          if (local_b8 != puVar13) {
            puVar14 = local_b8 + 2;
            do {
              local_90[0] = 0;
              FUN_1409f0400(local_90,*(undefined8 *)(puVar14 + -2),*puVar14,0,0);
              local_78 = puVar14[4];
              lVar5 = (longlong)local_78;
              _Src = *(void **)(puVar14 + 2);
              local_80 = (void *)0x0;
              if (local_78 == 0) {
                local_74 = 0;
              }
              else {
                TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                          (&local_80,local_78,0);
                _guard_xfg_dispatch_icall_nop(local_80,_Src,lVar5 << 3);
              }
              local_c8 = 0;
              local_c0 = 0;
              FUN_142ffa740(local_90,&local_c8);
              if (0 < (int)local_c0) {
                local_a8 = local_res10;
                uStack_60 = &local_a8;
                local_98 = 1;
                local_res10[0] = uVar12;
                local_a0 = param_1;
                if (local_res8[0] == '\0') {
                  local_48 = FUN_140c39460;
                  local_68 = 0x40c39460;
                  uStack_64 = 1;
                  ppuStack_40 = uStack_60;
                  FUN_142ff36a0(&local_c8,param_1,&local_68);
                }
                else {
                  local_58 = &LAB_140c39490;
                  local_68 = 0x40c39490;
                  uStack_64 = 1;
                  ppuStack_50 = uStack_60;
                  FUN_142ff3860();
                }
                uVar12 = 0;
              }
              if ((int)local_c0 != 0) {
                plVar8 = (longlong *)(local_c8 + 0x78);
                iVar9 = (int)local_c0;
                do {
                  if (*plVar8 != 0) {
                    FMemory::Free();
                  }
                  plVar8 = plVar8 + 0x11;
                  iVar9 = iVar9 + -1;
                } while (iVar9 != 0);
              }
              if (local_c8 != 0) {
                FMemory::Free();
              }
              if (local_80 != (void *)0x0) {
                FMemory::Free();
              }
              TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>::
              ~TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>(local_90);
              puVar1 = puVar14 + 6;
              puVar14 = puVar14 + 8;
            } while (puVar1 != puVar13);
            uVar11 = local_b0 & 0xffffffff;
          }
          uVar10 = (uint)uVar11;
          puVar13 = local_b8;
        }
        while (uVar10 != 0) {
          if (*(longlong *)(puVar13 + 4) != 0) {
            FMemory::Free();
          }
          TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>::
          ~TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>(puVar13);
          uVar10 = (int)uVar11 - 1;
          uVar11 = (ulonglong)uVar10;
          puVar13 = puVar13 + 8;
        }
        if (local_b8 != (undefined4 *)0x0) {
          FMemory::Free(local_b8);
        }
      }
      else {
        iVar9 = 0;
        if (0 < (int)param_1[0x2a4]) {
          lVar5 = 0;
          do {
            lVar2 = param_1[0x2a3];
            lVar6 = *(longlong *)(lVar2 + lVar5);
            if ((lVar6 != 0) &&
               (((cVar3 = FUN_140e96340(param_1 + 0x2a3), cVar3 == '\0' ||
                 (((lVar6 == 0 && (lVar6 = FUN_140e7eef0(param_1 + 0x2a3,0), lVar6 == 0)) ||
                  (lVar6 = FUN_140e83520(param_1 + 0x2a3), lVar6 == 0)))) &&
                (lVar6 = FUN_1413f8b80(param_1), lVar6 != 0)))) {
              lVar7 = (**(code **)(param_1[0x1b0] + 0x18))();
              if (lVar7 == 0) {
                in_stack_ffffffffffffff08 = in_stack_ffffffffffffff08 & 0xffffff00;
                FUN_140c57820(param_1,lVar6,*(undefined8 *)(lVar2 + lVar5),0,
                              in_stack_ffffffffffffff08);
              }
              else {
                uVar4 = FUN_140c46b40();
                in_stack_ffffffffffffff08 = 0;
                FUN_142fe3d60(lVar7,local_res8,uVar4,lVar6,1,0,0,1,iVar9,0);
              }
            }
            iVar9 = iVar9 + 1;
            lVar5 = lVar5 + 0xf8;
          } while (iVar9 < (int)param_1[0x2a4]);
        }
      }
    }
  }
  return;
}



// FUNCTION 140c3c1e0 FUN_140c3c1e0 body=52 status=ok
// SIG undefined FUN_140c3c1e0(void)

undefined8 FUN_140c3c1e0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142cbe080();
  if (*(longlong *)(param_1 + 0xe88) != 0) {
    FUN_1409bc2f0();
  }
  return uVar1;
}



// FUNCTION 140c3c220 FUN_140c3c220 body=55 status=ok
// SIG undefined FUN_140c3c220(void)

void FUN_140c3c220(longlong param_1)

{
  uint *puVar1;
  char cVar2;
  
  FUN_14230a330();
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    cVar2 = FUN_140a78c40();
    if (cVar2 != '\0') {
      puVar1 = (uint *)(*(longlong *)(param_1 + 0xe68) + 0x2ac0);
      *puVar1 = *puVar1 | 8;
    }
  }
  return;
}



// FUNCTION 140c3c260 FUN_140c3c260 body=585 status=ok
// SIG undefined FUN_140c3c260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c3c260(longlong param_1,undefined8 param_2,float param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined1 local_1e8 [64];
  undefined8 local_1a8;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  if (*(char *)(param_1 + 0x1d80) == '\0') {
    return;
  }
  iVar2 = (**(code **)(*(longlong *)(param_1 + 0x8b0) + 0x20))();
  if (iVar2 != 2) {
    return;
  }
  FUN_142d0aa70(local_1e8,param_2,param_1,0);
  local_1f0 = 0xbf800000;
  local_dc = 0;
  local_d4 = 0xbf800000;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar4 = DAT_146b33f38;
  lVar6 = DAT_146b33f38 + 0x30;
  lVar3 = FWeakObjectPtr::Get(lVar6);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar4 + 0x38)) ||
       (local_1f8 = 0, *(longlong *)(lVar4 + 0x40) == 0)) goto LAB_140c3c40b;
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar6,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar4 + 0x38) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(lVar6);
    if (lVar3 == 0) goto LAB_140c3c40b;
  }
  lVar4 = FUN_142e0ceb0();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar4 = FUN_1414150f0();
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
      puVar5 = (undefined8 *)FUN_140a8bc70(lVar3);
      local_1a8 = *puVar5;
    }
  }
LAB_140c3c40b:
  FUN_142d32ae0(local_1e8,param_3 / *(float *)(param_1 + 0x1d84),0);
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    plVar7 = local_98;
    if (local_78 != (longlong *)0x0) {
      plVar7 = local_78;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140c3c4b0 FUN_140c3c4b0 body=26 status=ok
// SIG undefined FUN_140c3c4b0(void)

void FUN_140c3c4b0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140c44470();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0xf8) = 1;
  }
  return;
}



// FUNCTION 140c3c4d0 FUN_140c3c4d0 body=105 status=ok
// SIG undefined FUN_140c3c4d0(void)

void FUN_140c3c4d0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_18;
  undefined8 local_10;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
  }
  lVar1 = FUN_142f6c9f0(lVar1);
  if (lVar1 != 0) {
    local_10 = 0;
    local_18 = param_1;
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar2);
    FUN_142f65080(lVar1,&local_18);
  }
  return;
}



// FUNCTION 140c3c540 FUN_140c3c540 body=331 status=ok
// SIG undefined FUN_140c3c540(void)

void FUN_140c3c540(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  if (param_2 != 0) {
    FWeakObjectPtr::operator=(&local_58,0);
    local_50 = 0;
    puVar1 = (undefined8 *)FName::FName(local_res10,L"WeaponReloadStarted",1);
    param_1 = param_1 + -0xd88;
    FWeakObjectPtr::operator=(&local_58,param_1);
    local_50 = *puVar1;
    local_28 = local_58;
    local_24 = local_54;
    local_20 = local_50;
    FUN_143094060(param_2,&local_28,0);
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    puVar1 = (undefined8 *)FName::FName(local_res10,L"WeaponReloadEnded",1);
    FWeakObjectPtr::operator=(&local_48,param_1);
    local_40 = *puVar1;
    local_28 = local_48;
    local_24 = local_44;
    local_20 = local_40;
    FUN_143094060(param_2,&local_28,1);
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    puVar1 = (undefined8 *)FName::FName(local_res10,L"WeaponPutDown",1);
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_30 = *puVar1;
    local_28 = local_38;
    local_24 = local_34;
    local_20 = local_30;
    FUN_143094030(param_2,&local_28);
  }
  return;
}



// FUNCTION 140c3c690 FUN_140c3c690 body=74 status=ok
// SIG undefined FUN_140c3c690(void)

void FUN_140c3c690(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  char cVar1;
  
  cVar1 = FUN_140e96340(param_1 + 0x1518);
  if (cVar1 != '\0') {
    FUN_140e78770(param_1 + 0x1518,0,param_2,param_3);
  }
  return;
}



// FUNCTION 140c3c6e0 FUN_140c3c6e0 body=58 status=ok
// SIG undefined FUN_140c3c6e0(void)

void FUN_140c3c6e0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x910) != 0) {
    cVar1 = FUN_142d1f310();
    if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140c3c70d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x910) + 0x420))();
      return;
    }
  }
  return;
}



// FUNCTION 140c3c720 FUN_140c3c720 body=149 status=ok
// SIG undefined FUN_140c3c720(void)

void FUN_140c3c720(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  plVar1 = *(longlong **)(param_1 + 0x1ad0);
  uVar2 = (longlong)*(int *)(param_1 + 0x1ad8) & 0x1fffffffffffffff;
  if (plVar1 + *(int *)(param_1 + 0x1ad8) < plVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FUN_142227350(*plVar1,0,1);
      }
      plVar1 = plVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  *(undefined4 *)(param_1 + 0x1ad8) = 0;
  if (*(int *)(param_1 + 0x1adc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo((ulonglong *)(param_1 + 0x1ad0),0);
  }
  return;
}



// FUNCTION 140c3c7c0 FUN_140c3c7c0 body=390 status=ok
// SIG undefined FUN_140c3c7c0(void)

void FUN_140c3c7c0(longlong *param_1)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *local_18;
  undefined8 local_10;
  
  *(undefined1 *)(param_1 + 0x39c) = 0;
  FUN_142cbe480();
  if ((char)param_1[0x25] == '\x03') {
    if (param_1[0x39a] != 0) {
      FUN_140c54bb0(param_1);
    }
    plVar2 = (longlong *)(**(code **)(param_1[0x1b0] + 0x18))();
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x4a8))(plVar2,1);
    }
    FUN_140e75b80(param_1 + 0x286,1);
    FUN_140e75d40(param_1 + 0x2a3,1);
  }
  FUN_140e8b380(param_1 + 0x2a3);
  FUN_140c3c720(param_1);
  uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar4 = FUN_140b5b810(uVar3);
  if (lVar4 != 0) {
    FUN_140b75f70(lVar4,param_1);
  }
  uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar4 = FUN_140e4ba40(uVar3);
  if (lVar4 != 0) {
    FUN_140e61e50(lVar4,param_1);
  }
  lVar4 = FUN_1422312c0(param_1);
  if (lVar4 != 0) {
    lVar5 = FUN_14141f270();
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
      local_10 = 0;
      local_18 = param_1;
      uVar3 = UGameplayTagAssetInterface::GetPrivateStaticClass();
      local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar3);
      FUN_140bf3530(lVar4,&local_18);
    }
  }
  FUN_140c24c70(param_1 + 0x1c7,param_1);
  if (param_1[0x3a3] != 0) {
    FUN_142227350(param_1[0x3a3],0,1);
    param_1[0x3a3] = 0;
  }
  return;
}



// FUNCTION 140c3c950 FUN_140c3c950 body=347 status=ok
// SIG undefined FUN_140c3c950(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c3c950(longlong param_1,undefined1 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int *piVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar5 < DAT_146866ca8) {
    _Init_thread_header(&DAT_146866ca8);
    if (DAT_146866ca8 == -1) {
      DAT_146866c90 = 0xff;
      _DAT_146866c98 = 0;
      DAT_146866ca0._0_4_ = 0;
      _Init_thread_footer(&DAT_146866ca8);
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x910);
  if (lVar4 == 0) {
    puVar2 = (undefined4 *)&DAT_146866c90;
  }
  else {
    if (*piVar5 < DAT_146866c88) {
      _Init_thread_header(&DAT_146866c88);
      if (DAT_146866c88 == -1) {
        DAT_146866c70 = 0xff;
        _DAT_146866c78 = 0;
        DAT_146866c80._0_4_ = 0;
        _Init_thread_footer(&DAT_146866c88);
      }
    }
    if (*(int *)(lVar4 + 0x680) < 1) {
      puVar2 = (undefined4 *)&DAT_146866c70;
    }
    else {
      puVar2 = (undefined4 *)(*(longlong *)(lVar4 + 0x678) + 0x60);
    }
  }
  local_28 = *puVar2;
  uStack_24 = puVar2[1];
  uStack_20 = puVar2[2];
  uStack_1c = puVar2[3];
  local_18 = *(undefined8 *)(puVar2 + 4);
  cVar1 = FUN_142d52a00(&local_28);
  if (cVar1 != '\0') {
    uVar3 = FUN_142d52a20(&local_28);
    lVar4 = FArchive::operator<<(uVar3);
    FUN_14246fd70(lVar4 + 0x94,param_2);
  }
  return;
}



// FUNCTION 140c3cab0 FUN_140c3cab0 body=158 status=ok
// SIG undefined FUN_140c3cab0(void)

void FUN_140c3cab0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  cVar2 = FUN_1407cde20();
  FUN_140c0df30(param_1);
  cVar3 = FUN_1407cde20(param_1);
  if ((cVar2 != '\0') && (cVar3 == '\0')) {
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    FUN_140e913c0(uVar4,0);
    lVar5 = FUN_142f6c9f0(uVar4);
    if (lVar5 != 0) {
      lVar6 = UWebSocketNetDriver::StaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_140c0a810(lVar5,param_1);
      }
    }
  }
  return;
}



// FUNCTION 140c3cb50 FUN_140c3cb50 body=75 status=ok
// SIG undefined FUN_140c3cb50(void)

void FUN_140c3cb50(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0xd80) + 0x18))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x4a8))(plVar1,1);
  }
  FUN_140e75b80(param_1 + 0x1430,1);
  FUN_140e75d40(param_1 + 0x1518,1);
  return;
}



// FUNCTION 140c3cba0 FUN_140c3cba0 body=4193 status=ok
// SIG undefined FUN_140c3cba0(void)

/* WARNING: Removing unreachable block (ram,0x000140c3d3ce) */
/* WARNING: Removing unreachable block (ram,0x000140c3d3dd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c3cba0(ulonglong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  float fVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  float *pfVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  void **ppvVar12;
  void *pvVar13;
  longlong *plVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  void *pvVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  ulonglong local_res8;
  longlong local_res10;
  longlong *local_res18;
  undefined8 local_res20;
  void *local_138;
  undefined8 local_130;
  int local_128 [2];
  void *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  void *local_f0;
  int local_e8;
  ulonglong local_e0;
  longlong local_d8 [2];
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8 [2];
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  longlong local_88 [9];
  
  local_128[0] = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_142cbe640(param_1,param_2,param_3,param_4,param_5);
  local_e0 = 1;
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar10 + 0x38) < DAT_14686c470) &&
     (_Init_thread_header(&DAT_14686c470), DAT_14686c470 == -1)) {
    FName::FName(&DAT_14686c468,L"Currency",1);
    _Init_thread_footer(&DAT_14686c470);
  }
  plVar9 = (longlong *)(param_2 + 0x98);
  local_a8 = plVar9;
  if ((*(int *)(lVar10 + 0x38) < DAT_146866ca8) &&
     (_Init_thread_header(&DAT_146866ca8), DAT_146866ca8 == -1)) {
    DAT_146866c90 = 0xff;
    _DAT_146866c98 = 0;
    DAT_146866ca0._0_4_ = 0;
    _Init_thread_footer(&DAT_146866ca8);
  }
  lVar18 = *(longlong *)(param_1 + 0x910);
  if (lVar18 == 0) {
    puVar6 = (undefined8 *)&DAT_146866c90;
  }
  else {
    if ((*(int *)(lVar10 + 0x38) < DAT_146866c88) &&
       (_Init_thread_header(&DAT_146866c88), DAT_146866c88 == -1)) {
      DAT_146866c70 = 0xff;
      _DAT_146866c78 = 0;
      DAT_146866c80._0_4_ = 0;
      _Init_thread_footer(&DAT_146866c88);
    }
    if (*(int *)(lVar18 + 0x680) < 1) {
      puVar6 = (undefined8 *)&DAT_146866c70;
    }
    else {
      puVar6 = (undefined8 *)(*(longlong *)(lVar18 + 0x678) + 0x60);
    }
  }
  local_a0 = *puVar6;
  uStack_98 = puVar6[1];
  plVar11 = (longlong *)*param_3;
  local_90 = puVar6[2];
  plVar14 = plVar11 + (int)param_3[1];
  if (plVar11 != plVar14) {
LAB_140c3ccb8:
    if (*plVar11 != DAT_14686c298) goto code_r0x000140c3ccbd;
    local_110 = (void *)CONCAT44((float)DAT_1464aa730._1_1_ * 0.003921569,
                                 (float)DAT_1464aa730._2_1_ * 0.003921569);
    local_108 = CONCAT44((float)DAT_1464aa730._3_1_ * 0.003921569,
                         (float)(byte)DAT_1464aa730 * 0.003921569);
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_110);
    local_128[0] = 0;
    local_138 = (void *)0x0;
    local_130 = 0x13;
    fVar23 = 0.0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
    FGenericPlatformString::Memcpy(local_138,L"<<<< CHARACTER >>>",0x26);
    FUN_1428a6fb0(plVar9,&local_138,local_128);
    if (local_138 != (void *)0x0) {
      FMemory::Free();
    }
    local_100 = 0;
    local_f8 = 0;
    local_138 = (void *)0x0;
    local_130 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
    FGenericPlatformString::Memcpy(local_138,L"Name",10);
    local_120 = *(void **)(param_1 + 0x18);
    FName::ToString(&local_120,&local_f0);
    FUN_140c334b0(&local_100,&local_138,&local_f0);
    if (local_f0 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_138 != (void *)0x0) {
      FMemory::Free();
    }
    bVar21 = *(longlong *)(param_1 + 0x10) == 0;
    if (bVar21) {
      local_120 = (void *)0x0;
      local_118 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_120,0);
      FGenericPlatformString::Memcpy(local_120,L"None",10);
      ppvVar12 = &local_120;
    }
    else {
      local_120 = *(void **)(*(longlong *)(param_1 + 0x10) + 0x18);
      FName::ToString(&local_120,&local_f0);
      ppvVar12 = &local_f0;
    }
    local_138 = (void *)0x0;
    local_130 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
    FGenericPlatformString::Memcpy(local_138,L"Class",0xc);
    FUN_140c334b0(&local_100,&local_138,ppvVar12);
    if (local_138 != (void *)0x0) {
      FMemory::Free();
    }
    if ((bVar21) && (local_120 != (void *)0x0)) {
      FMemory::Free();
    }
    if ((!bVar21) && (local_f0 != (void *)0x0)) {
      FMemory::Free();
    }
    lVar10 = FUN_14178ca30(param_1);
    bVar21 = lVar10 == 0;
    if (bVar21) {
      local_120 = (void *)0x0;
      local_118 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_120,0);
      FGenericPlatformString::Memcpy(local_120,L"None",10);
      ppvVar12 = &local_120;
    }
    else {
      lVar10 = FUN_14178ca30(param_1);
      local_120 = *(void **)(lVar10 + 0x18);
      FName::ToString(&local_120,&local_f0);
      ppvVar12 = &local_f0;
    }
    local_138 = (void *)0x0;
    local_130 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
    FGenericPlatformString::Memcpy(local_138,L"Archetype",0x14);
    FUN_140c334b0(&local_100,&local_138,ppvVar12);
    if (local_138 != (void *)0x0) {
      FMemory::Free();
    }
    if ((bVar21) && (local_120 != (void *)0x0)) {
      FMemory::Free();
    }
    if ((!bVar21) && (local_f0 != (void *)0x0)) {
      FMemory::Free();
    }
    cVar4 = FUN_142d52a00(&local_a0);
    bVar21 = cVar4 == '\0';
    if (bVar21) {
      local_120 = (void *)0x0;
      local_118 = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_120,0);
      FGenericPlatformString::Memcpy(local_120,&DAT_144350c90,8);
      ppvVar12 = &local_120;
    }
    else {
      uVar7 = FUN_142d52a20(&local_a0);
      lVar10 = FArchive::operator<<(uVar7);
      fVar1 = *(float *)(lVar10 + 0x20);
      fVar22 = (float)FUN_142d5fee0(&local_a0);
      FString::PrintfImpl(&local_f0,L"%d / %d",(int)ROUND(fVar22 * 2.0 - 0.5) >> 1,
                          (int)ROUND((fVar1 + fVar1) - 0.5) >> 1);
      ppvVar12 = &local_f0;
    }
    local_130 = 7;
    local_138 = (void *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
    FGenericPlatformString::Memcpy(local_138,L"Health",0xe);
    FUN_140c334b0(&local_100,&local_138,ppvVar12);
    if (local_138 != (void *)0x0) {
      FMemory::Free();
    }
    if ((bVar21) && (local_120 != (void *)0x0)) {
      FMemory::Free();
    }
    if ((!bVar21) && (local_f0 != (void *)0x0)) {
      FMemory::Free();
    }
    uVar19 = local_res8;
    lVar10 = *(longlong *)(param_1 + 0xe78);
    if ((lVar10 != 0) && (local_128[0] = 1, 1 < *(int *)(lVar10 + 0x680))) {
      local_120 = (void *)0x78;
      do {
        pvVar20 = local_120;
        iVar17 = local_128[0];
        plVar9 = (longlong *)((longlong)local_120 + *(longlong *)(lVar10 + 0x678) + 0x60);
        local_c8 = *plVar9;
        lStack_c0 = plVar9[1];
        local_b8[0] = *(longlong *)((longlong)local_120 + *(longlong *)(lVar10 + 0x678) + 0x70);
        cVar4 = FUN_142d52a00(&local_c8);
        if (cVar4 == '\0') {
          local_110 = (void *)0x0;
          local_108 = 4;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_110,0);
          FGenericPlatformString::Memcpy(local_110,&DAT_144350cb8,8);
          plVar9 = &local_110;
        }
        else {
          uVar7 = FUN_142d52a20(&local_c8);
          lVar10 = FArchive::operator<<(uVar7);
          fVar1 = *(float *)(lVar10 + 0x20);
          fVar22 = (float)FUN_142d5fee0(&local_c8);
          FString::PrintfImpl(local_d8,L"%d / %d",(int)ROUND(fVar22 * 2.0 - 0.5) >> 1,
                              (int)ROUND((fVar1 + fVar1) - 0.5) >> 1);
          plVar9 = local_d8;
        }
        FString::PrintfImpl(&local_f0,L"Secondary Health (%d)",iVar17);
        lVar10 = (longlong)(int)local_f8;
        iVar5 = (int)local_f8 + 1;
        local_f8 = CONCAT44(local_f8._4_4_,iVar5);
        if (local_f8._4_4_ < iVar5) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(&local_100);
        }
        pvVar13 = local_f0;
        plVar14 = (longlong *)(lVar10 * 0x20 + local_100);
        if (plVar14 != (longlong *)0x0) {
          *plVar14 = 0;
          lVar10 = (longlong)local_e8;
          *(int *)(plVar14 + 1) = local_e8;
          if (local_e8 == 0) {
            *(undefined4 *)((longlong)plVar14 + 0xc) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar14,local_e8,0);
            _guard_xfg_dispatch_icall_nop((void *)*plVar14,pvVar13,lVar10 * 2);
          }
          FString::FString(plVar14 + 2,plVar9);
          iVar17 = (int)plVar14[1];
          pvVar20 = (void *)*plVar14;
          local_138 = (void *)0x0;
          local_130._0_4_ = iVar17;
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                    (&local_138,(3 - (uint)(iVar17 != 0)) + iVar17,0);
          pvVar13 = local_138;
          _guard_xfg_dispatch_icall_nop(local_138,pvVar20,(longlong)iVar17 * 2);
          iVar17 = (int)local_130;
          lVar10 = (longlong)(int)local_130;
          local_130._0_4_ = (3 - (uint)((int)local_130 != 0)) + (int)local_130;
          iVar5 = local_130._4_4_;
          iVar16 = (int)local_130;
          if (local_130._4_4_ < (int)local_130) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138);
            pvVar13 = local_138;
            iVar5 = local_130._4_4_;
            iVar16 = (int)local_130;
          }
          local_138 = (void *)0x0;
          local_130 = 0;
          lVar10 = lVar10 - (ulonglong)(iVar17 != 0);
          *(undefined4 *)((longlong)pvVar13 + lVar10 * 2) = 0x20003a;
          *(undefined2 *)((longlong)pvVar13 + lVar10 * 2 + 4) = 0;
          if (plVar14 == local_88) {
            pvVar20 = local_120;
            iVar17 = local_128[0];
            if (pvVar13 != (void *)0x0) {
              FMemory::Free(pvVar13);
              pvVar20 = local_120;
              iVar17 = local_128[0];
            }
          }
          else {
            if (*plVar14 != 0) {
              FMemory::Free();
            }
            *plVar14 = (longlong)pvVar13;
            *(int *)(plVar14 + 1) = iVar16;
            *(int *)((longlong)plVar14 + 0xc) = iVar5;
            pvVar20 = local_120;
            iVar17 = local_128[0];
          }
        }
        if (local_f0 != (void *)0x0) {
          FMemory::Free();
        }
        if ((cVar4 != '\0') && (local_d8[0] != 0)) {
          FMemory::Free();
        }
        lVar10 = *(longlong *)(uVar19 + 0xe78);
        local_128[0] = iVar17 + 1;
        local_120 = (void *)((longlong)pvVar20 + 0x78);
        plVar9 = local_a8;
        param_1 = local_res8;
      } while (local_128[0] < *(int *)(lVar10 + 0x680));
    }
    local_110 = (void *)0x0;
    local_108 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_110,0);
    FGenericPlatformString::Memcpy(local_110,L"HealthState",0x18);
    uVar3 = *(undefined1 *)(param_1 + 0xec0);
    uVar7 = UEnum::GetPrivateStaticClass();
    lVar10 = FUN_141799410(uVar7,0,L"OakGame.EHealthState",0);
    if (lVar10 == 0) {
      LowLevelFatalErrorHandler
                ("Unknown",0x75d,L"Couldn\'t find enum \'%s\'",L"OakGame.EHealthState");
      FDebug::AssertFailed
                (&DAT_143f3f584,"Unknown",0x75d,L"Couldn\'t find enum \'%s\'",
                 L"OakGame.EHealthState");
    }
    UEnum::GetNameStringByValue(lVar10,local_d8,uVar3);
    FUN_140c334b0(&local_100,&local_110,local_d8);
    if (local_d8[0] != 0) {
      FMemory::Free();
    }
    if (local_110 != (void *)0x0) {
      FMemory::Free();
    }
    lVar10 = *(longlong *)(param_1 + 0xe78);
    if ((lVar10 != 0) && (1 < *(int *)(lVar10 + 0x880))) {
      uVar19 = 1;
      lVar18 = 1;
      do {
        iVar17 = (int)uVar19;
        uVar3 = *(undefined1 *)(*(longlong *)(lVar10 + 0x878) + lVar18);
        uVar7 = UEnum::GetPrivateStaticClass();
        lVar10 = FUN_141799410(uVar7,0,L"OakGame.EHealthTypeState",0);
        if (lVar10 == 0) {
          LowLevelFatalErrorHandler
                    ("Unknown",0x75d,L"Couldn\'t find enum \'%s\'",L"OakGame.EHealthTypeState");
          FDebug::AssertFailed
                    (&DAT_143f3f584,"Unknown",0x75d,L"Couldn\'t find enum \'%s\'",
                     L"OakGame.EHealthTypeState");
        }
        UEnum::GetNameStringByValue(lVar10,&local_110,uVar3);
        FString::PrintfImpl(&local_f0,L"HealthTypeState(%d)",uVar19);
        lVar10 = (longlong)(int)local_f8;
        iVar5 = (int)local_f8 + 1;
        local_f8 = CONCAT44(local_f8._4_4_,iVar5);
        if (local_f8._4_4_ < iVar5) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(&local_100);
        }
        pvVar20 = local_f0;
        plVar9 = (longlong *)(lVar10 * 0x20 + local_100);
        if (plVar9 != (longlong *)0x0) {
          *plVar9 = 0;
          lVar10 = (longlong)local_e8;
          *(int *)(plVar9 + 1) = local_e8;
          if (local_e8 == 0) {
            *(undefined4 *)((longlong)plVar9 + 0xc) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar9,local_e8,0);
            _guard_xfg_dispatch_icall_nop((void *)*plVar9,pvVar20,lVar10 * 2);
          }
          pvVar20 = local_110;
          plVar9[2] = 0;
          lVar10 = (longlong)(int)local_108;
          *(int *)(plVar9 + 3) = (int)local_108;
          if ((int)local_108 == 0) {
            *(undefined4 *)((longlong)plVar9 + 0x1c) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar9 + 2,local_108 & 0xffffffff,0);
            _guard_xfg_dispatch_icall_nop((void *)plVar9[2],pvVar20,lVar10 * 2);
          }
          iVar17 = (int)plVar9[1];
          pvVar20 = (void *)*plVar9;
          local_138 = (void *)0x0;
          local_130._0_4_ = iVar17;
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                    (&local_138,(3 - (uint)(iVar17 != 0)) + iVar17,0);
          pvVar13 = local_138;
          _guard_xfg_dispatch_icall_nop(local_138,pvVar20,(longlong)iVar17 * 2);
          iVar17 = (int)local_130;
          lVar10 = (longlong)(int)local_130;
          local_130._0_4_ = (3 - (uint)((int)local_130 != 0)) + (int)local_130;
          iVar5 = local_130._4_4_;
          iVar16 = (int)local_130;
          if (local_130._4_4_ < (int)local_130) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138);
            pvVar13 = local_138;
            iVar5 = local_130._4_4_;
            iVar16 = (int)local_130;
          }
          local_138 = (void *)0x0;
          local_130 = 0;
          lVar10 = lVar10 - (ulonglong)(iVar17 != 0);
          *(undefined4 *)((longlong)pvVar13 + lVar10 * 2) = 0x20003a;
          *(undefined2 *)((longlong)pvVar13 + lVar10 * 2 + 4) = 0;
          if (plVar9 == local_88) {
            if (pvVar13 != (void *)0x0) {
              FMemory::Free(pvVar13);
            }
          }
          else {
            if (*plVar9 != 0) {
              FMemory::Free();
            }
            *plVar9 = (longlong)pvVar13;
            *(int *)(plVar9 + 1) = iVar16;
            *(int *)((longlong)plVar9 + 0xc) = iVar5;
          }
          iVar17 = (int)local_e0;
          param_1 = local_res8;
        }
        if (local_f0 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_110 != (void *)0x0) {
          FMemory::Free();
        }
        lVar10 = *(longlong *)(param_1 + 0xe78);
        uVar19 = (ulonglong)(iVar17 + 1U);
        lVar18 = lVar18 + 1;
        plVar9 = local_a8;
        local_e0 = uVar19;
      } while ((int)(iVar17 + 1U) < *(int *)(lVar10 + 0x880));
    }
    local_110 = (void *)0x0;
    local_108 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_110,0);
    FGenericPlatformString::Memcpy(local_110,L"DeathState",0x16);
    uVar3 = *(undefined1 *)(param_1 + 0xec1);
    uVar7 = UEnum::GetPrivateStaticClass();
    lVar10 = FUN_141799410(uVar7,0,L"OakGame.EDeathType",0);
    if (lVar10 == 0) {
      LowLevelFatalErrorHandler("Unknown",0x75d,L"Couldn\'t find enum \'%s\'",L"OakGame.EDeathType")
      ;
      FDebug::AssertFailed
                (&DAT_143f3f584,"Unknown",0x75d,L"Couldn\'t find enum \'%s\'",L"OakGame.EDeathType")
      ;
    }
    UEnum::GetNameStringByValue(lVar10,local_d8,uVar3);
    FUN_140c334b0(&local_100,&local_110,local_d8);
    if (local_d8[0] != 0) {
      FMemory::Free();
    }
    if (local_110 != (void *)0x0) {
      FMemory::Free();
    }
    lVar10 = local_100;
    lVar15 = (longlong)(int)local_f8 * 0x20 + local_100;
    lVar18 = local_100;
    if (local_100 != lVar15) {
      do {
        FString::FString(&local_c8,lVar18);
        FString::FString(local_b8,lVar18 + 0x10);
        pfVar8 = (float *)FUN_1428adeb0(plVar9,&local_res8,&local_c8);
        fVar1 = *pfVar8;
        if (*pfVar8 <= fVar23) {
          fVar1 = fVar23;
        }
        fVar23 = fVar1;
        if (local_b8[0] != 0) {
          FMemory::Free();
        }
        if (local_c8 != 0) {
          FMemory::Free();
        }
        lVar18 = lVar18 + 0x20;
      } while (lVar18 != lVar15);
      for (; lVar10 != lVar15; lVar10 = lVar10 + 0x20) {
        FString::FString(&local_c8,lVar10);
        FString::FString(local_b8,lVar10 + 0x10);
        fVar1 = *(float *)(plVar9 + 0x35);
        uVar2 = *(undefined4 *)((longlong)plVar9 + 0x1ac);
        FUN_1428adeb0(plVar9,&local_a8,&local_c8);
        local_res8 = local_res8 & 0xffffffff00000000;
        FUN_1428a6fb0(plVar9,&local_c8,&local_res8);
        *(undefined4 *)((longlong)plVar9 + 0x1ac) = uVar2;
        local_res8 = local_res8 & 0xffffffff00000000;
        *(float *)(plVar9 + 0x35) = fVar1 + fVar23;
        FUN_1428a6fb0(plVar9,local_b8,&local_res8);
        *(float *)(plVar9 + 0x35) = fVar1;
        if (local_b8[0] != 0) {
          FMemory::Free();
        }
        if (local_c8 != 0) {
          FMemory::Free();
        }
      }
    }
    TArray<FSaveGameUserSetting,FDefaultAllocator>::~TArray<FSaveGameUserSetting,FDefaultAllocator>
              (&local_100);
    param_3 = local_res18;
    param_2 = local_res10;
  }
LAB_140c3d9dc:
  plVar14 = (longlong *)*param_3;
  plVar9 = plVar14 + (int)param_3[1];
  do {
    uVar7 = local_res20;
    if (plVar14 == plVar9) {
LAB_140c3da20:
      plVar9 = *(longlong **)(param_1 + 0xe88);
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x3f8))(plVar9,param_2,param_3,uVar7,param_5);
      }
      plVar9 = *(longlong **)(param_1 + 0xe90);
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x3f8))(plVar9,param_2,param_3,uVar7,param_5);
      }
      if (*(longlong *)(param_1 + 0x10d8) != 0) {
        FUN_142cbe750(*(longlong *)(param_1 + 0x10d8),param_2,param_3,uVar7,param_5);
      }
      plVar9 = *(longlong **)(param_1 + 0xe70);
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x3f8))(plVar9,param_2,param_3,uVar7,param_5);
      }
      return;
    }
    if (*plVar14 == DAT_14686c468) {
      plVar9 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0xd80) + 0x18))();
      uVar7 = local_res20;
      if (plVar9 != (longlong *)0x0) {
        lVar10 = ANavLinkProxy::GetPrivateStaticClass();
        uVar7 = local_res20;
        if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
            != lVar10 + 0x88)) {
          bVar21 = false;
        }
        else {
          bVar21 = true;
        }
        if (bVar21) {
          (**(code **)(*plVar9 + 0x510))(plVar9,param_2,param_3,local_res20,param_5);
        }
      }
      goto LAB_140c3da20;
    }
    plVar14 = plVar14 + 1;
  } while( true );
code_r0x000140c3ccbd:
  plVar11 = plVar11 + 1;
  if (plVar11 == plVar14) goto LAB_140c3d9dc;
  goto LAB_140c3ccb8;
}



// FUNCTION 140c3dc20 FUN_140c3dc20 body=1382 status=ok
// SIG undefined FUN_140c3dc20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c3dc20(longlong *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  float *pfVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong *plVar19;
  ulonglong uVar20;
  uint uVar21;
  undefined8 unaff_R15;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float local_res8 [2];
  undefined1 local_res10 [8];
  int local_res18 [2];
  uint local_res20;
  ulonglong in_stack_fffffffffffffef8;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [12];
  undefined1 local_cc [20];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  longlong local_98;
  
  lVar10 = (**(code **)(param_1[0x1b0] + 0x18))();
  if (*param_2 == -1) {
    return;
  }
  if (lVar10 == 0) {
    return;
  }
  plVar19 = (longlong *)param_1[0x3a3];
  if ((plVar19 == (longlong *)0x0) || ((longlong *)plVar19[0x39a] != param_1)) {
    plVar19 = param_1;
  }
  FUN_142fde510(local_b8);
  cVar7 = FUN_142ffa4f0(lVar10,param_2,local_b8);
  if (cVar7 == '\0') {
    return;
  }
  uVar21 = (uint)unaff_R15 & 0xffffff00;
  local_res18[0] = -1;
  local_res20 = uVar21;
  lVar11 = FUN_142ffa540(lVar10,local_a8);
  if ((lVar11 != 0) &&
     (piVar12 = (int *)FUN_142ffe3d0(lVar10,local_res8,lVar11), *piVar12 == *param_2)) {
    piVar12 = (int *)FUN_143004da0(lVar10,local_res8,lVar11);
    uVar21 = (uint)CONCAT71((int7)((ulonglong)unaff_R15 >> 8),1);
    local_res18[0] = *piVar12;
    local_res20 = uVar21;
  }
  lVar11 = param_1[0x9a];
  if (lVar11 == 0) {
    fVar22 = 0.0;
  }
  else {
    auVar23._0_4_ = *(uint *)(lVar11 + 0x230) & _DAT_14686bda0;
    auVar23._4_4_ = *(uint *)(lVar11 + 0x234) & uRam000000014686bda4;
    auVar23._8_4_ = *(uint *)(lVar11 + 0x238) & uRam000000014686bda8;
    auVar23._12_4_ = *(uint *)(lVar11 + 0x23c) & uRam000000014686bdac;
    auVar24._4_4_ = auVar23._8_4_;
    auVar24._0_4_ = auVar23._4_4_;
    auVar24._8_4_ = auVar23._0_4_;
    auVar24._12_4_ = auVar23._12_4_;
    auVar24 = minps(auVar23,auVar24);
    auVar5._4_4_ = auVar23._0_4_;
    auVar5._0_4_ = auVar23._8_4_;
    auVar5._8_4_ = auVar23._4_4_;
    auVar5._12_4_ = auVar23._12_4_;
    auVar24 = minps(auVar24,auVar5);
    local_res8[0] = auVar24._0_4_;
    fVar22 = local_res8[0] * *(float *)(lVar11 + 0x714);
  }
  (**(code **)(*plVar19 + 0x788))(plVar19,local_e8);
  lVar11 = param_1[0x9a];
  if (lVar11 == 0) {
    pfVar13 = (float *)FRotator::Vector(local_e8,local_d8);
    fVar1 = pfVar13[2];
    fVar2 = pfVar13[1];
    fVar3 = *pfVar13;
    pfVar13 = (float *)(**(code **)(*plVar19 + 0x790))(plVar19,local_cc);
    local_f0 = fVar22 * fVar1 + pfVar13[2];
    local_f4 = fVar22 * fVar2 + pfVar13[1];
    local_f8 = fVar22 * fVar3 + *pfVar13;
  }
  else {
    local_f8 = *(float *)(lVar11 + 0x220);
    local_f4 = *(float *)(lVar11 + 0x224);
    lVar11 = (**(code **)(*plVar19 + 0x790))(plVar19);
    local_f0 = *(float *)(lVar11 + 8);
    pfVar13 = (float *)FRotator::Vector(local_e8,local_d8);
    local_f8 = local_f8 + fVar22 * *pfVar13;
    local_f4 = local_f4 + fVar22 * pfVar13[1];
    local_f0 = local_f0 + fVar22 * pfVar13[2];
  }
  uVar14 = 0;
  uVar20 = (ulonglong)(local_res18[0] != -1);
  if ((local_res18[0] != -1) &&
     (uVar20 = (ulonglong)(local_res18[0] != -1), *param_2 == local_res18[0])) {
    uVar20 = uVar14;
  }
  cVar7 = (char)uVar20;
  lVar11 = FUN_140c46b40(param_1);
  if ((lVar11 != 0) && (cVar8 = FUN_1404724a0(lVar11,local_a8), cVar8 != '\0')) {
    uVar14 = FUN_140e7ef10(plVar19 + 0x2a3,local_98);
    local_res20 = uVar21 & 0xff;
    if (uVar14 != 0) {
      local_res20 = 1;
    }
    uVar9 = (**(code **)(*param_1 + 0xa68))(param_1,uVar14);
    local_res8[0] = (float)CONCAT31(local_res8[0]._1_3_,uVar9);
    plVar15 = (longlong *)(**(code **)(plVar19[0x1b1] + 0xf0))(plVar19 + 0x1b1,uVar9);
    if (plVar15 != (longlong *)0x0) {
      if (*(char *)((longlong)plVar15 + 0x62c) == '\0') {
        *(undefined1 *)(plVar19 + 0x278) = 0;
        (**(code **)(*plVar15 + 0x8c0))(plVar15,0,1);
        local_res10[0] = 2;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (plVar19 + 0x206,local_res10);
      }
      FUN_140e91030(plVar19 + 0x2a3,local_res8[0]._0_1_,0);
      FUN_140e91ca0(plVar19 + 0x2a3,local_res8[0]._0_1_,0,0);
      (**(code **)(*plVar15 + 0x820))(plVar15,0,1);
      (**(code **)(*plVar15 + 0x8a8))(plVar15);
      (**(code **)(*plVar15 + 0x8e8))(plVar15);
    }
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar11 = *(longlong *)(DAT_146b33f38 + 0x58);
    if ((lVar11 != 0) && (*(longlong *)(lVar11 + 800) != 0)) {
      lVar16 = FUN_1413c0f50();
      lVar4 = *(longlong *)(lVar11 + 800);
      for (lVar17 = lVar4; lVar17 != 0; lVar17 = *(longlong *)(lVar17 + 0x30)) {
        if (lVar17 == lVar16) {
          if (lVar4 != 0) {
            if (lVar4 == 0) goto LAB_140c3e0d2;
            lVar17 = FUN_1413c0f50();
            lVar11 = *(longlong *)(lVar11 + 800);
            lVar4 = lVar11;
            goto joined_r0x000140c3e0c2;
          }
          break;
        }
      }
    }
    goto LAB_140c3e002;
  }
  bVar6 = false;
  goto LAB_140c3e005;
joined_r0x000140c3e0c2:
  if (lVar4 == 0) goto LAB_140c3e0d2;
  if (lVar4 == lVar17) goto LAB_140c3e0d4;
  lVar4 = *(longlong *)(lVar4 + 0x30);
  goto joined_r0x000140c3e0c2;
LAB_140c3e0d2:
  lVar11 = 0;
LAB_140c3e0d4:
  uVar18 = FUN_140c428a0(param_1);
  in_stack_fffffffffffffef8 = 0;
  lVar11 = FUN_140e80ad0(uVar18,lVar11,local_98,0,0);
  if ((lVar11 == 0) || (lVar11 == local_98)) {
    local_res18[0] = -1;
    cVar7 = '\0';
LAB_140c3e002:
    bVar6 = true;
  }
  else {
    piVar12 = (int *)FUN_142ffa6f0(lVar10,local_res8,lVar11);
    cVar7 = '\x01';
    bVar6 = true;
    local_res18[0] = *piVar12;
  }
LAB_140c3e005:
  FUN_143025940(lVar10,param_2,&local_f8,local_e8);
  if ((char)local_res20 == '\0') {
    return;
  }
  if ((cVar7 == '\0') || (local_res18[0] == -1)) {
    if (!bVar6) {
      return;
    }
    local_98 = 0;
  }
  else {
    FUN_142ffa4f0(lVar10,local_res18,local_b8);
    if (!bVar6) {
      return;
    }
    if (local_98 != 0) {
      lVar10 = FUN_1430b3b80();
      if ((*(int *)(*(longlong *)(local_98 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(local_98 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) goto LAB_140c3e14d;
    }
    local_98 = 0;
  }
LAB_140c3e14d:
  FUN_140c57820(plVar19,local_98,uVar14,0,in_stack_fffffffffffffef8 & 0xffffffffffffff00);
  return;
}



// FUNCTION 140c3e190 FUN_140c3e190 body=47 status=ok
// SIG undefined FUN_140c3e190(void)

void FUN_140c3e190(longlong param_1)

{
  if (*(longlong **)(param_1 + 0xe68) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xe68) + 0xc28))();
  }
  AK::MemoryMgr::StartProfileThreadUsage((int)param_1 + 0x1518);
  return;
}



// FUNCTION 140c3e1c0 FUN_140c3e1c0 body=1960 status=ok
// SIG undefined FUN_140c3e1c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c3e1c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  longlong *plVar12;
  longlong local_208;
  longlong *plStack_200;
  undefined8 local_1f8;
  longlong local_1e8;
  longlong *plStack_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  longlong *local_1b0;
  undefined4 local_1a8 [8];
  longlong *local_188;
  undefined1 local_180 [32];
  longlong *local_160;
  undefined1 local_158 [32];
  longlong local_138 [4];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_f8 [8];
  longlong local_d8 [4];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [16];
  
  if ((param_3 != 0) && (uVar4 = (undefined1)param_4, param_2 != 0)) {
    if ((DAT_14686c178 == '\0') &&
       (puVar7 = (undefined8 *)FUN_140c41340(), puVar7 != &DAT_14686c140)) {
      DAT_14686c140 = *puVar7;
      _DAT_14686c148 = puVar7[1];
      DAT_14686c150 = (longlong *)puVar7[2];
      DAT_14686c158 = (longlong *)puVar7[3];
      _DAT_14686c160 = puVar7[4];
      DAT_14686c168 = (longlong *)puVar7[5];
      DAT_14686c170 = (longlong *)puVar7[6];
      DAT_14686c178 = '\x01';
    }
    cVar5 = FUN_142190080(DAT_14686c140);
    if ((cVar5 != '\0') && (cVar5 = FUN_142194620(DAT_14686c140), cVar5 != '\0')) {
      FUN_142190c10(&local_1e8,DAT_14686c140);
      lVar9 = *(longlong *)(local_1e8 + 0xc0);
      if (*(longlong *)(local_1e8 + 0xc0) == 0) {
        lVar9 = local_1e8 + 0x20;
      }
      plVar8 = (longlong *)FUN_140aa2bd0(lVar9);
      FUN_14217e740(local_138);
      FUN_142194380(local_138,0x28,0,0,0);
      local_138[0] = param_2;
      FUN_1421923f0(local_78,DAT_14686c108,local_138);
      FUN_140bfb300(plVar8,&DAT_14686c148,local_78);
      FUN_14217f430(local_78);
      FUN_14217f430(local_138);
      puVar7 = (undefined8 *)FUN_140cfc220(param_2,local_38);
      local_1f8 = 0;
      if ((*DAT_14686c150 != 0) && (cVar5 = FUN_1407ce010(DAT_14686c150 + 1), cVar5 != '\0')) {
        plVar12 = (longlong *)*plVar8;
        plVar2 = plVar12 + (longlong)(int)plVar8[1] * 5;
        if (plVar12 != plVar2) {
          do {
            if ((*(longlong *)*plVar12 == *DAT_14686c150) &&
               (*(longlong *)(((longlong *)*plVar12)[1] + 0x28) ==
                *(longlong *)(DAT_14686c150[1] + 0x28))) {
              FUN_14217e740(&local_118);
              FUN_142194380(&local_118,0xb,0,0,0);
              local_118 = *puVar7;
              uStack_110 = puVar7[1];
              FUN_14217f450(plVar12 + 1,&local_118);
              puVar7 = &local_118;
              goto LAB_140c3e42b;
            }
            plVar12 = plVar12 + 5;
          } while (plVar12 != plVar2);
        }
        local_1d8 = DAT_14686c150;
        FUN_14217e740(&local_1d0);
        FUN_142194380(&local_1d0,0xb,0,0,0);
        iVar3 = (int)plVar8[1];
        local_1d0 = *puVar7;
        uStack_1c8 = puVar7[1];
        *(int *)(plVar8 + 1) = iVar3 + 1;
        if (*(int *)((longlong)plVar8 + 0xc) < iVar3 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar8,iVar3);
        }
        puVar7 = (undefined8 *)(*plVar8 + (longlong)iVar3 * 0x28);
        *puVar7 = local_1d8;
        FUN_14217e5b0(puVar7 + 1,&local_1d0);
        puVar7 = &local_1d0;
LAB_140c3e42b:
        FUN_14217f430(puVar7);
      }
      uVar6 = FUN_140d00180(param_2);
      local_1f8 = CONCAT44(local_1f8._4_4_,uVar6);
      local_208 = 0;
      if ((*DAT_14686c158 != 0) && (cVar5 = FUN_1407ce010(DAT_14686c158 + 1), cVar5 != '\0')) {
        plVar12 = (longlong *)*plVar8;
        plVar2 = plVar12 + (longlong)(int)plVar8[1] * 5;
        if (plVar12 != plVar2) {
          do {
            if ((*(longlong *)*plVar12 == *DAT_14686c158) &&
               (*(longlong *)(((longlong *)*plVar12)[1] + 0x28) ==
                *(longlong *)(DAT_14686c158[1] + 0x28))) {
              FUN_14217e740(local_f8);
              FUN_142194380(local_f8,0x1f,0,1,0);
              local_f8[0] = uVar6;
              FUN_14217f450(plVar12 + 1,local_f8);
              puVar10 = local_f8;
              goto LAB_140c3e51c;
            }
            plVar12 = plVar12 + 5;
          } while (plVar12 != plVar2);
        }
        local_1b0 = DAT_14686c158;
        FUN_14217e740(local_1a8);
        FUN_142194380(local_1a8,0x1f,0,1,0);
        iVar3 = (int)plVar8[1];
        *(int *)(plVar8 + 1) = iVar3 + 1;
        local_1a8[0] = uVar6;
        if (*(int *)((longlong)plVar8 + 0xc) < iVar3 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar8,iVar3);
        }
        puVar7 = (undefined8 *)(*plVar8 + (longlong)iVar3 * 0x28);
        *puVar7 = local_1b0;
        FUN_14217e5b0(puVar7 + 1,local_1a8);
        puVar10 = local_1a8;
LAB_140c3e51c:
        FUN_14217f430(puVar10);
      }
      FUN_14217e740(local_d8);
      FUN_142194380(local_d8,0x28,0,0,0);
      local_d8[0] = param_3;
      FUN_1421923f0(local_58,DAT_14686c0f0,local_d8);
      FUN_140bfb300(plVar8,&DAT_14686c160,local_58);
      FUN_14217f430(local_58);
      FUN_14217f430(local_d8);
      local_208 = 0;
      if ((*DAT_14686c168 != 0) && (cVar5 = FUN_1407ce010(DAT_14686c168 + 1), cVar5 != '\0')) {
        plVar12 = (longlong *)*plVar8;
        plVar2 = plVar12 + (longlong)(int)plVar8[1] * 5;
        if (plVar12 != plVar2) {
          do {
            if ((*(longlong *)*plVar12 == *DAT_14686c168) &&
               (*(longlong *)(((longlong *)*plVar12)[1] + 0x28) ==
                *(longlong *)(DAT_14686c168[1] + 0x28))) {
              FUN_14217e740(local_b8);
              FUN_142194380(local_b8,2,0,1,0);
              local_b8[0] = *(undefined1 *)(param_3 + 0x177);
              FUN_14217f450(plVar12 + 1,local_b8);
              puVar11 = local_b8;
              goto LAB_140c3e673;
            }
            plVar12 = plVar12 + 5;
          } while (plVar12 != plVar2);
        }
        local_188 = DAT_14686c168;
        FUN_14217e740(local_180);
        FUN_142194380(local_180,2,0,1,0);
        local_180[0] = *(undefined1 *)(param_3 + 0x177);
        iVar3 = (int)plVar8[1];
        *(int *)(plVar8 + 1) = iVar3 + 1;
        if (*(int *)((longlong)plVar8 + 0xc) < iVar3 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar8,iVar3);
        }
        puVar7 = (undefined8 *)(*plVar8 + (longlong)iVar3 * 0x28);
        *puVar7 = local_188;
        FUN_14217e5b0(puVar7 + 1,local_180);
        puVar11 = local_180;
LAB_140c3e673:
        FUN_14217f430(puVar11);
      }
      local_208 = 0;
      if ((*DAT_14686c170 != 0) && (cVar5 = FUN_1407ce010(DAT_14686c170 + 1), cVar5 != '\0')) {
        plVar12 = (longlong *)*plVar8;
        plVar2 = plVar12 + (longlong)(int)plVar8[1] * 5;
        if (plVar12 != plVar2) {
          do {
            if ((*(longlong *)*plVar12 == *DAT_14686c170) &&
               (*(longlong *)(((longlong *)*plVar12)[1] + 0x28) ==
                *(longlong *)(DAT_14686c170[1] + 0x28))) {
              FUN_14217e740(local_98);
              FUN_142194380(local_98,0x1d,0,1,0);
              local_98[0] = uVar4;
              FUN_14217f450(plVar12 + 1,local_98);
              puVar11 = local_98;
              goto LAB_140c3e761;
            }
            plVar12 = plVar12 + 5;
          } while (plVar12 != plVar2);
        }
        local_160 = DAT_14686c170;
        FUN_14217e740(local_158);
        FUN_142194380(local_158,0x1d,0,1,0);
        iVar3 = (int)plVar8[1];
        *(int *)(plVar8 + 1) = iVar3 + 1;
        local_158[0] = uVar4;
        if (*(int *)((longlong)plVar8 + 0xc) < iVar3 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar8,iVar3);
        }
        puVar7 = (undefined8 *)(*plVar8 + (longlong)iVar3 * 0x28);
        *puVar7 = local_160;
        FUN_14217e5b0(puVar7 + 1,local_158);
        puVar11 = local_158;
LAB_140c3e761:
        FUN_14217f430(puVar11);
      }
      cVar5 = FUN_14218a740(&local_1e8,1);
      if (cVar5 != '\0') {
        local_208 = local_1e8;
        plStack_200 = plStack_1e0;
        if (plStack_1e0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_1e0 + 1) = (int)plStack_1e0[1] + 1;
          UNLOCK();
        }
        FUN_142194040(&local_208);
        plVar8 = plStack_200;
        if (plStack_200 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_200 + 1;
          lVar9 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plStack_200)(plStack_200);
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
      }
      if (plStack_1e0 != (longlong *)0x0) {
        LOCK();
        plVar8 = plStack_1e0 + 1;
        lVar9 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plStack_1e0)(plStack_1e0);
          LOCK();
          piVar1 = (int *)((longlong)plStack_1e0 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_1e0 + 8))(plStack_1e0,1);
          }
        }
      }
    }
    if ((*(char *)(param_3 + 0x177) != '\0') && (param_4 == 2)) {
      FUN_142dca8a0(param_2,L"PlotMissionComplete");
    }
  }
  return;
}



// FUNCTION 140c3e970 FUN_140c3e970 body=117 status=ok
// SIG undefined FUN_140c3e970(void)

void FUN_140c3e970(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_140c3e9f0();
  cVar1 = FUN_140c3ba80(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 140c3e9f0 FUN_140c3e9f0 body=461 status=ok
// SIG undefined FUN_140c3e9f0(void)

void FUN_140c3e9f0(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_140c3eac1;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_140c3eac1:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      lVar5 = *param_1 + (longlong)iStack_2c * 0x48;
      if (*(longlong *)(*param_1 + 0x28 + (longlong)iStack_2c * 0x48) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 0x18) != 0) {
        FMemory::Free();
      }
      FUN_140b4e2b0(lVar5);
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 140c3ebc0 FUN_140c3ebc0 body=71 status=ok
// SIG undefined FUN_140c3ebc0(void)

void FUN_140c3ebc0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  if (*(longlong *)(param_1 + 0x1cd0) == 0) {
    param_1 = param_1 + 0x1430;
  }
  else {
    param_1 = FUN_140c428a0(*(longlong *)(param_1 + 0x1cd0));
  }
  FUN_140e7ac10(param_1,param_2,param_3);
  return;
}



// FUNCTION 140c3ec10 FUN_140c3ec10 body=159 status=ok
// SIG undefined FUN_140c3ec10(void)

void FUN_140c3ec10(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  cVar2 = FUN_1407cde20();
  FUN_140c0f560(param_1);
  cVar3 = FUN_1407cde20(param_1);
  if ((cVar2 == '\0') && (cVar3 != '\0')) {
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    FUN_140e913c0(uVar4,param_1);
    lVar5 = FUN_142f6c9f0(uVar4);
    if (lVar5 != 0) {
      lVar6 = UWebSocketNetDriver::StaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_140c26950(lVar5,param_1);
      }
    }
  }
  return;
}



// FUNCTION 140c3ecb0 FUN_140c3ecb0 body=1636 status=ok
// SIG undefined FUN_140c3ecb0(void)

void FUN_140c3ecb0(longlong *param_1,undefined4 param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_38;
  undefined8 local_30;
  
  plVar3 = (longlong *)GetMoviePlayer();
  uVar4 = (**(code **)(*plVar3 + 0x90))(plVar3);
  TBaseMulticastDelegate<void>::Remove(uVar4,param_1[0x8b]);
  plVar3 = param_1 + 0x8e;
  lVar5 = FWeakObjectPtr::Get(plVar3);
  pwVar9 = (wchar_t *)0x0;
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != (int)param_1[0x8f]) && (param_1[0x90] != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(plVar3,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x8f) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(plVar3);
      if (lVar5 != 0) goto LAB_140c3ed65;
    }
  }
  else {
LAB_140c3ed65:
    lVar6 = UScrollBar::GetPrivateStaticClass();
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
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ANewGameFlow::OnRockNRollStarted",L"::");
      pwVar8 = pwVar9;
      while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar8 = pwVar2;
      }
      FName::FName(&local_res18,pwVar8 + 2,1);
      pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar3);
      if (pwVar8 == (wchar_t *)0x0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != (int)param_1[0x8f]) && (param_1[0x90] != 0)) {
          lVar5 = FUN_141796df0();
          FWeakObjectPtr::operator=(plVar3,lVar5);
          if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 0x8f) = DAT_1464b56f4;
          }
          pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar3);
          if (pwVar8 != (wchar_t *)0x0) goto LAB_140c3ee5e;
        }
LAB_140c3ee94:
        pwVar8 = pwVar9;
      }
      else {
LAB_140c3ee5e:
        lVar5 = UScrollBar::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
             ) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_140c3ee94;
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(pwVar8 + 0x2a8,param_1,local_res18);
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ANewGameFlow::OnRockNRollFinished",L"::");
      pwVar8 = pwVar9;
      while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar8 = pwVar2;
      }
      FName::FName(&local_res20,pwVar8 + 2,1);
      pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar3);
      if (pwVar8 == (wchar_t *)0x0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != (int)param_1[0x8f]) && (param_1[0x90] != 0)) {
          lVar5 = FUN_141796df0();
          FWeakObjectPtr::operator=(plVar3,lVar5);
          if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 0x8f) = DAT_1464b56f4;
          }
          pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar3);
          if (pwVar8 != (wchar_t *)0x0) goto LAB_140c3ef6e;
        }
LAB_140c3efa4:
        pwVar8 = pwVar9;
      }
      else {
LAB_140c3ef6e:
        lVar5 = UScrollBar::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
             ) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_140c3efa4;
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(pwVar8 + 0x2c0,param_1,local_res20);
    }
  }
  plVar3 = param_1 + 0x98;
  lVar5 = FWeakObjectPtr::Get(plVar3);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == (int)param_1[0x99]) || (param_1[0x9a] == 0)) goto LAB_140c3f28b;
    lVar5 = FUN_141796df0();
    FWeakObjectPtr::operator=(plVar3,lVar5);
    if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x99) = DAT_1464b56f4;
    }
    lVar5 = FWeakObjectPtr::Get(plVar3);
    if (lVar5 == 0) goto LAB_140c3f28b;
  }
  lVar6 = UScrollBar::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_140c3f28b;
  pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ANewGameFlow::OnBusRideStarted",L"::");
  pwVar8 = pwVar9;
  while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar8 = pwVar2;
  }
  FName::FName(&local_38,pwVar8 + 2,1);
  pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar3);
  if (pwVar8 == (wchar_t *)0x0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != (int)param_1[0x99]) && (param_1[0x9a] != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(plVar3,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x99) = DAT_1464b56f4;
      }
      pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar3);
      if (pwVar8 != (wchar_t *)0x0) goto LAB_140c3f12f;
    }
LAB_140c3f165:
    pwVar8 = pwVar9;
  }
  else {
LAB_140c3f12f:
    lVar5 = UScrollBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140c3f165;
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::Remove(pwVar8 + 0x2a8,param_1,local_38);
  pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ANewGameFlow::OnBusRideFinished",L"::");
  pwVar8 = pwVar9;
  while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar8 = pwVar2;
  }
  FName::FName(&local_30,pwVar8 + 2,1);
  pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar3);
  if (pwVar8 == (wchar_t *)0x0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != (int)param_1[0x99]) && (param_1[0x9a] != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(plVar3,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x99) = DAT_1464b56f4;
      }
      pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar3);
      if (pwVar8 != (wchar_t *)0x0) goto LAB_140c3f23e;
    }
LAB_140c3f274:
    pwVar8 = pwVar9;
  }
  else {
LAB_140c3f23e:
    lVar5 = UScrollBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140c3f274;
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::Remove(pwVar8 + 0x2c0,param_1,local_30);
LAB_140c3f28b:
  lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar5 != 0) && (lVar5 = UWorld::GetGameState<APVPGameState>(lVar5), lVar5 != 0)) {
    TBaseMulticastDelegate<void>::Remove(lVar5 + 0x620,param_1[0x8d]);
  }
  if (param_1[0xd4] != 0) {
    lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar5 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar5 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
    }
    FUN_142880530(uVar4,param_1 + 0xd4);
    param_1[0xd4] = 0;
  }
  FUN_14222a250(param_1,param_2);
  return;
}



// FUNCTION 140c3f320 FUN_140c3f320 body=222 status=ok
// SIG undefined FUN_140c3f320(void)

void FUN_140c3f320(longlong *param_1,int param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *local_18;
  undefined8 local_10;
  
  *(undefined1 *)(param_1 + 0x39c) = 0;
  FUN_142693630();
  FUN_140e8b380(param_1 + 0x2a3);
  FUN_140c3c720(param_1);
  if ((param_2 - 2U & 0xfffffffd) != 0) {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar3 = FUN_140e4ba40(uVar2);
    if (lVar3 != 0) {
      FUN_140e61e50(lVar3,param_1);
    }
    lVar3 = FUN_1422312c0(param_1);
    if (lVar3 != 0) {
      lVar4 = FUN_14141f270();
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
        local_10 = 0;
        local_18 = param_1;
        uVar2 = UGameplayTagAssetInterface::GetPrivateStaticClass();
        local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar2);
        FUN_140bf3530(lVar3,&local_18);
      }
    }
  }
  return;
}



// FUNCTION 140c3f400 FUN_140c3f400 body=224 status=ok
// SIG undefined FUN_140c3f400(void)

void FUN_140c3f400(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 local_res8;
  
  pwVar3 = _guard_xfg_dispatch_icall_nop(L"&AOakMissionVehicleSpawner::OnActorDiedEvent",L"::");
  pwVar2 = (wchar_t *)0x0;
  while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
    pwVar2 = pwVar1;
  }
  FName::FName(&local_res8,pwVar2 + 2,1);
  TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_1 + 0x548,param_1,local_res8);
  pwVar3 = _guard_xfg_dispatch_icall_nop(L"&AOakMissionVehicleSpawner::OnActorDiedEvent",L"::");
  pwVar2 = (wchar_t *)0x0;
  while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
    pwVar2 = pwVar1;
  }
  FName::FName(&local_res8,pwVar2 + 2,1);
  TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_1 + 0x558,param_1,local_res8);
  return;
}



// FUNCTION 140c3f4e0 FUN_140c3f4e0 body=86 status=ok
// SIG undefined FUN_140c3f4e0(void)

void FUN_140c3f4e0(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1[0x97] != 0) {
    uVar1 = (**(code **)(*param_1 + 0x148))();
    lVar2 = FUN_142f6c9f0(uVar1);
    if (lVar2 != 0) {
      TBaseMulticastDelegate<void>::Remove(lVar2 + 0x510,param_1[0x97]);
    }
  }
  FUN_140ea8800(param_1,param_2);
  return;
}



// FUNCTION 140c3f540 FUN_140c3f540 body=94 status=ok
// SIG undefined FUN_140c3f540(void)

void FUN_140c3f540(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar1 = UWorld::GetGameState<APVPGameState>(uVar2);
    if ((lVar1 != 0) && (*(longlong **)(lVar1 + 0x608) == param_1)) {
      *(undefined8 *)(lVar1 + 0x608) = 0;
    }
  }
  FUN_14222a250(param_1,param_2);
  return;
}



// FUNCTION 140c3f5a0 FUN_140c3f5a0 body=576 status=ok
// SIG undefined FUN_140c3f5a0(void)

void FUN_140c3f5a0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  wchar_t *pwVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  undefined8 local_res8;
  longlong local_18;
  wchar_t *local_10;
  
  FUN_142f56af0();
  lVar5 = FUN_142f5cb40(param_1);
  pwVar10 = (wchar_t *)0x0;
  if (lVar5 != 0) {
    local_10 = pwVar10;
    local_18 = param_1;
    if (param_1 != 0) {
      uVar6 = FUN_142f768a0();
      local_10 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(param_1,uVar6);
    }
    FUN_142f6e000(lVar5,&local_18);
    if (((((param_1 != 0) && (*(int *)(lVar5 + 0x530) != 0)) &&
         (plVar1 = *(longlong **)(lVar5 + 0x528), plVar1 != (longlong *)0x0)) &&
        ((cVar4 = (**(code **)(*plVar1 + 8))(plVar1,param_1), cVar4 != '\0' &&
         (*(int *)(lVar5 + 0x530) != 0)))) &&
       (plVar1 = *(longlong **)(lVar5 + 0x528), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      if (*(longlong *)(lVar5 + 0x528) != 0) {
        uVar6 = FMemory::Realloc(*(longlong *)(lVar5 + 0x528),0,0);
        *(undefined8 *)(lVar5 + 0x528) = uVar6;
      }
      *(undefined4 *)(lVar5 + 0x530) = 0;
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x118);
  if (lVar5 != 0) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(char *)(lVar5 + 0x128) == '\x03')) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UOakPlayerMissionComponent::OnPawnChanged",L"::");
      pwVar9 = pwVar10;
      while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar9 = pwVar3;
      }
      FName::FName(&local_res8,pwVar9 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar5 + 0xb38,param_1,local_res8);
      lVar5 = *(longlong *)(lVar5 + 0x848);
      if (lVar5 != 0) {
        lVar7 = FUN_1413ffe00();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          pwVar9 = _guard_xfg_dispatch_icall_nop
                             (L"&UOakPlayerMissionComponent::OnWeaponChanged",L"::");
          while (pwVar8 = pwVar9, pwVar8 != (wchar_t *)0x0) {
            pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar8 + 1,L"::");
            pwVar10 = pwVar8;
          }
          FName::FName(&local_res8,pwVar10 + 2,1);
          TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar5 + 0x1050,param_1,local_res8);
        }
      }
    }
  }
  return;
}



// FUNCTION 140c3f7e0 FUN_140c3f7e0 body=173 status=ok
// SIG undefined FUN_140c3f7e0(void)

void FUN_140c3f7e0(longlong param_1,undefined4 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x118);
  if (lVar3 != 0) {
    lVar2 = FUN_1407e2730();
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
      lVar3 = UCableComponent::GetAttachedActor(lVar3);
      if (lVar3 != 0) {
        FUN_1407665e0(lVar3 + 0x788,param_1);
        FUN_1407665e0(lVar3 + 0x798,param_1);
        FUN_1407665e0(lVar3 + 0x7a8,param_1);
      }
    }
  }
  FUN_142f56980(param_1,param_2);
  return;
}



// FUNCTION 140c3f890 FUN_140c3f890 body=216 status=ok
// SIG undefined FUN_140c3f890(void)

void FUN_140c3f890(longlong param_1,undefined4 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x118);
  if (lVar3 != 0) {
    lVar2 = USoCharacterMovementComponent::GetPrivateStaticClass();
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
      TBaseMulticastDelegate<void>::Remove(lVar3 + 0x7b0,*(undefined8 *)(param_1 + 0x3c0));
      TBaseMulticastDelegate<void>::Remove(lVar3 + 0x7c8,*(undefined8 *)(param_1 + 0x3c8));
      lVar3 = UCableComponent::GetAttachedActor(lVar3);
      if (lVar3 != 0) {
        FUN_1407665e0(lVar3 + 0x788,param_1);
        FUN_1407665e0(lVar3 + 0x798,param_1);
        FUN_1407665e0(lVar3 + 0x7a8,param_1);
      }
      FUN_142f568f0(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 140c3f970 FUN_140c3f970 body=113 status=ok
// SIG undefined FUN_140c3f970(void)

void FUN_140c3f970(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_18;
  undefined8 local_10;
  
  FUN_142f56980();
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_1);
  }
  lVar1 = FUN_142f6c9f0(lVar1);
  if (lVar1 != 0) {
    local_10 = 0;
    local_18 = param_1;
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar2);
    FUN_142f65080(lVar1,&local_18);
  }
  return;
}



// FUNCTION 140c3f9f0 FUN_140c3f9f0 body=101 status=ok
// SIG undefined FUN_140c3f9f0(void)

void FUN_140c3f9f0(longlong *param_1,ulonglong param_2,undefined1 param_3)

{
  longlong *plVar1;
  
  FUN_140e91ca0(param_1 + 0xf2,param_2,0,0);
  plVar1 = (longlong *)(**(code **)(*param_1 + 0xf0))(param_1,param_2 & 0xff);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x8e0))(plVar1,0,param_3,1);
  }
  return;
}



// FUNCTION 140c3fa60 FUN_140c3fa60 body=829 status=ok
// SIG undefined FUN_140c3fa60(void)

void FUN_140c3fa60(longlong param_1,longlong param_2,int *param_3,char param_4)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int local_res8 [2];
  int local_68 [4];
  undefined1 local_58 [12];
  int local_4c;
  undefined8 local_48;
  longlong local_38;
  
  if (((*(char *)(param_1 + 0x128) == '\x03') && (*param_3 != -1)) &&
     (lVar3 = (**(code **)(*(longlong *)(param_1 + 0xd80) + 0x18))(), lVar3 != 0)) {
    FUN_142fde510(local_58);
    FUN_142ffa4f0(lVar3,param_3,local_58);
    cVar2 = FUN_140c39630(param_1,local_38);
    if (((cVar2 != '\0') && (local_4c != -1)) &&
       (cVar2 = FUN_140e85c60(param_2,local_48), cVar2 != '\0')) {
      uVar4 = FUN_140c428a0(param_1);
      lVar5 = FUN_140e7fd70(uVar4,param_2);
      FUN_142ffe3d0(lVar3,local_res8,*(undefined8 *)(param_2 + 0x70));
      FUN_142ffa6f0(lVar3,local_68,lVar5);
      if ((local_res8[0] == -1) || (local_res8[0] == local_68[0])) {
        FUN_143016230(lVar3,*(undefined8 *)(param_2 + 0x70),param_3);
      }
      lVar3 = local_38;
      if (local_38 != 0) {
        uVar4 = FUN_140c428a0(param_1);
        FUN_140e7b7b0(uVar4,param_2,lVar3,1,param_4);
      }
      lVar3 = *(longlong *)(param_1 + 0x1d18);
      if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x1cd0) != param_1)) {
        lVar3 = param_1;
      }
      if ((((*(char *)(lVar3 + 0x1123) != '\0') && (lVar3 = FUN_140c46b40(param_1), lVar3 != 0)) &&
          (cVar2 = FUN_140e85c60(param_2,lVar3), cVar2 != '\0')) && (local_38 != 0)) {
        lVar3 = FUN_1430b3b80();
        if ((*(int *)(*(longlong *)(local_38 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(local_38 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          lVar3 = *(longlong *)(param_1 + 0x1d18);
          if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x1cd0) != param_1)) {
            lVar3 = param_1;
          }
          lVar6 = FUN_140e7ef10(lVar3 + 0x1518,lVar5);
          lVar3 = *(longlong *)(param_1 + 0x1d18);
          if (lVar6 == 0) {
            if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x1cd0) != param_1)) {
              lVar3 = param_1;
            }
            lVar3 = (**(code **)(*(longlong *)(lVar3 + 0xd88) + 0xf0))
                              ((longlong *)(lVar3 + 0xd88),0);
            if (lVar3 == 0) {
              lVar3 = *(longlong *)(param_1 + 0x1d18);
              if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x1cd0) != param_1)) {
                lVar3 = param_1;
              }
              if (*(byte *)(lVar3 + 0x128) < 3) {
                FUN_1413f89f0();
                return;
              }
              FUN_140c578a0(lVar3,local_38,0,0,0);
              return;
            }
            if (param_4 == '\0') {
              return;
            }
            if (lVar5 == 0) {
              return;
            }
            lVar3 = *(longlong *)(param_1 + 0x1d18);
            if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x1cd0) != param_1)) {
              lVar3 = param_1;
            }
            lVar6 = FUN_140e7ef10(lVar3 + 0x1518,local_38);
            if (lVar6 == 0) {
              return;
            }
            lVar3 = FUN_1430b3b80();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            lVar3 = *(longlong *)(param_1 + 0x1d18);
            local_38 = 0;
            if (bVar1) {
              local_38 = lVar5;
            }
            if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x1cd0) != param_1)) {
              lVar3 = param_1;
            }
          }
          else if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x1cd0) != param_1)) {
            lVar3 = param_1;
          }
          FUN_140c57820(lVar3,local_38,lVar6,0,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 140c3fda0 FUN_140c3fda0 body=435 status=ok
// SIG undefined FUN_140c3fda0(void)

void FUN_140c3fda0(longlong param_1,undefined8 param_2,longlong *param_3,undefined1 param_4)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (((*(char *)(param_1 + 0x128) == '\x03') && (param_3 != (longlong *)0x0)) &&
     (cVar2 = FUN_140c39630(param_1,param_3), cVar2 != '\0')) {
    uVar5 = 0;
    uVar3 = FUN_14301f8f0();
    lVar4 = (**(code **)(*param_3 + 0x628))(param_3,uVar3);
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x208) != 0)) {
      uVar5 = *(undefined8 *)(*(longlong *)(lVar4 + 0x208) + 0x1d8);
    }
    cVar2 = FUN_140e85c60(param_2,uVar5);
    if (cVar2 != '\0') {
      uVar5 = FUN_140c428a0(param_1);
      uVar5 = FUN_140e7fd70(uVar5,param_2);
      uVar3 = FUN_140c428a0(param_1);
      FUN_140e7b7b0(uVar3,param_2,param_3,1,param_4);
      lVar4 = *(longlong *)(param_1 + 0x1d18);
      if ((lVar4 == 0) || (*(longlong *)(lVar4 + 0x1cd0) != param_1)) {
        lVar4 = param_1;
      }
      if (((*(char *)(lVar4 + 0x1123) != '\0') && (lVar4 = FUN_140c46b40(param_1), lVar4 != 0)) &&
         (cVar2 = FUN_140e85c60(param_2,lVar4), cVar2 != '\0')) {
        lVar4 = *(longlong *)(param_1 + 0x1d18);
        if ((lVar4 == 0) || (*(longlong *)(lVar4 + 0x1cd0) != param_1)) {
          lVar4 = param_1;
        }
        lVar4 = FUN_140e7ef10(lVar4 + 0x1518,uVar5);
        if (lVar4 != 0) {
          lVar6 = FUN_1430b3b80();
          if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            lVar6 = *(longlong *)(param_1 + 0x1d18);
            if ((lVar6 == 0) || (*(longlong *)(lVar6 + 0x1cd0) != param_1)) {
              lVar6 = param_1;
            }
            FUN_140c57820(lVar6,param_3,lVar4,0,0);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c3ff60 FUN_140c3ff60 body=203 status=ok
// SIG undefined FUN_140c3ff60(void)

void FUN_140c3ff60(longlong *param_1,longlong param_2,undefined1 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  
  if (((char)param_1[-0x18c] != '\x03') &&
     (cVar1 = FUN_140e96350(param_1 + 0xf2,param_3,param_4), cVar1 == '\0')) {
    return;
  }
  lVar2 = FUN_140e939e0(param_1 + 0xf2,param_3,param_2,param_4);
  if ((((char)param_1[-0x18c] == '\x03') && (lVar2 != 0)) && (lVar2 != param_2)) {
    FUN_143083420(lVar2,1);
  }
  lVar2 = (**(code **)(*param_1 + 0xf0))(param_1,param_3);
  if (((lVar2 != 0) && (lVar2 != param_2)) && (cVar1 = FUN_1407cd900(lVar2), cVar1 == '\0')) {
    return;
  }
  FUN_140c5e0a0(param_1 + -0x1b1,param_3);
  return;
}



// FUNCTION 140c40030 FUN_140c40030 body=585 status=ok
// SIG undefined FUN_140c40030(void)

undefined8 FUN_140c40030(longlong param_1,undefined1 param_2)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  cVar1 = FUN_140b7bff0();
  if (cVar1 == '\0') {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar6 = *(longlong *)(DAT_146b33f38 + 0x58);
    if ((lVar6 != 0) && (*(longlong *)(lVar6 + 800) != 0)) {
      lVar3 = FUN_1413c0f50();
      for (lVar4 = *(longlong *)(lVar6 + 800); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
        if (lVar4 == lVar3) {
          if (*(longlong *)(lVar6 + 800) == 0) {
            return 0;
          }
          if (*(char *)(param_1 + 0x128) == '\x03') {
            lVar4 = FUN_140e810a0();
          }
          else {
            lVar4 = FUN_140e7f7d0(param_1 + 0x1518,0);
          }
          if (lVar4 == 0) {
            lVar4 = (**(code **)(*(longlong *)(param_1 + 0xd88) + 0xf0))
                              ((longlong *)(param_1 + 0xd88),0);
          }
          if (*(longlong *)(lVar6 + 800) == 0) goto LAB_140c4012e;
          lVar5 = FUN_1413c0f50();
          lVar6 = *(longlong *)(lVar6 + 800);
          lVar3 = lVar6;
          goto joined_r0x000140c40117;
        }
      }
    }
  }
  return 0;
joined_r0x000140c40117:
  if (lVar3 == 0) {
LAB_140c4012e:
    lVar6 = 0;
LAB_140c40130:
    if (*(longlong *)(param_1 + 0x1cd0) == 0) {
      lVar3 = param_1 + 0x1430;
    }
    else {
      lVar3 = FUN_140c428a0();
    }
    uVar7 = 0;
    lVar6 = FUN_140e80ad0(lVar3,lVar6,lVar4,0,0);
    if (lVar6 == 0) {
      if (*(char *)(param_1 + 0x128) != '\x03') {
        FUN_140e90a00(param_1 + 0x1518,0,0);
      }
    }
    else if (lVar6 != lVar4) {
      lVar4 = FUN_1430b3b80();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if ((*(char *)(param_1 + 0x128) != '\x03') &&
           (FUN_140e90a00(param_1 + 0x1518,0,lVar6), *(byte *)(param_1 + 0x128) < 3)) {
          FUN_1413f89f0(param_1,lVar6,0,param_2,uVar7 & 0xffffffffffffff00);
          return 1;
        }
        FUN_140c578a0(param_1,lVar6,0,param_2,uVar7 & 0xffffffffffffff00);
        return 1;
      }
    }
    return 1;
  }
  if (lVar3 == lVar5) goto LAB_140c40130;
  lVar3 = *(longlong *)(lVar3 + 0x30);
  goto joined_r0x000140c40117;
}



// FUNCTION 140c40280 FUN_140c40280 body=585 status=ok
// SIG undefined FUN_140c40280(void)

undefined8 FUN_140c40280(longlong param_1,undefined1 param_2)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  cVar1 = FUN_140b7bff0();
  if (cVar1 == '\0') {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar6 = *(longlong *)(DAT_146b33f38 + 0x58);
    if ((lVar6 != 0) && (*(longlong *)(lVar6 + 800) != 0)) {
      lVar3 = FUN_1413c0f50();
      for (lVar4 = *(longlong *)(lVar6 + 800); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
        if (lVar4 == lVar3) {
          if (*(longlong *)(lVar6 + 800) == 0) {
            return 0;
          }
          if (*(char *)(param_1 + 0x128) == '\x03') {
            lVar4 = FUN_140e810a0();
          }
          else {
            lVar4 = FUN_140e7f7d0(param_1 + 0x1518,0);
          }
          if (lVar4 == 0) {
            lVar4 = (**(code **)(*(longlong *)(param_1 + 0xd88) + 0xf0))
                              ((longlong *)(param_1 + 0xd88),0);
          }
          if (*(longlong *)(lVar6 + 800) == 0) goto LAB_140c4037e;
          lVar5 = FUN_1413c0f50();
          lVar6 = *(longlong *)(lVar6 + 800);
          lVar3 = lVar6;
          goto joined_r0x000140c40367;
        }
      }
    }
  }
  return 0;
joined_r0x000140c40367:
  if (lVar3 == 0) {
LAB_140c4037e:
    lVar6 = 0;
LAB_140c40380:
    if (*(longlong *)(param_1 + 0x1cd0) == 0) {
      lVar3 = param_1 + 0x1430;
    }
    else {
      lVar3 = FUN_140c428a0();
    }
    uVar7 = 0;
    lVar6 = FUN_140e81590(lVar3,lVar6,lVar4,0,0);
    if (lVar6 == 0) {
      if (*(char *)(param_1 + 0x128) != '\x03') {
        FUN_140e90a00(param_1 + 0x1518,0,0);
      }
    }
    else if (lVar6 != lVar4) {
      lVar4 = FUN_1430b3b80();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if ((*(char *)(param_1 + 0x128) != '\x03') &&
           (FUN_140e90a00(param_1 + 0x1518,0,lVar6), *(byte *)(param_1 + 0x128) < 3)) {
          FUN_1413f89f0(param_1,lVar6,0,param_2,uVar7 & 0xffffffffffffff00);
          return 1;
        }
        FUN_140c578a0(param_1,lVar6,0,param_2,uVar7 & 0xffffffffffffff00);
        return 1;
      }
    }
    return 1;
  }
  if (lVar3 == lVar5) goto LAB_140c40380;
  lVar3 = *(longlong *)(lVar3 + 0x30);
  goto joined_r0x000140c40367;
}



// FUNCTION 140c404d0 FUN_140c404d0 body=73 status=ok
// SIG undefined FUN_140c404d0(void)

void FUN_140c404d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
    if (lVar1 != 0) {
      FUN_142dac4d0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),0,1,0);
    }
  }
  return;
}



// FUNCTION 140c40520 FUN_140c40520 body=235 status=ok
// SIG undefined FUN_140c40520(void)

void FUN_140c40520(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_28 [32];
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if ((((lVar1 != 0) && (lVar1 = FWeakObjectPtr::Get(param_1 + 0x10), lVar1 != 0)) &&
      (lVar1 = FWeakObjectPtr::Get(param_1 + 0x18), lVar1 != 0)) &&
     (lVar1 = FWeakObjectPtr::Get(param_1 + 0x10), *(longlong *)(lVar1 + 0xf50) != 0)) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x18);
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x10);
    uVar4 = FWeakObjectPtr::Get(param_1 + 8);
    lVar1 = *(longlong *)(lVar1 + 0xf50);
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"Crew Challenge Complete!",L"OakChallenges",
                       L"CrewChallengeComplete");
    FUN_140c70250(uVar4,*(undefined8 *)(lVar3 + 0xf50),uVar5,*(undefined4 *)(lVar1 + 0x48),uVar2,0);
  }
  return;
}



// FUNCTION 140c40610 FUN_140c40610 body=75 status=ok
// SIG undefined FUN_140c40610(void)

undefined8 FUN_140c40610(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
    if (lVar1 != 0) {
      FUN_142dac4d0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),0,1,0);
    }
  }
  return 1;
}



// FUNCTION 140c40660 FUN_140c40660 body=280 status=ok
// SIG undefined FUN_140c40660(void)

undefined1 FUN_140c40660(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_28 [32];
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 == 0) {
    return 1;
  }
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x18);
    if (lVar1 != 0) {
      lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
      if (*(longlong *)(lVar1 + 0xf50) != 0) {
        uVar2 = FWeakObjectPtr::Get(param_1 + 0x18);
        lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
        lVar3 = FWeakObjectPtr::Get(param_1 + 0x10);
        uVar4 = FWeakObjectPtr::Get(param_1 + 8);
        lVar1 = *(longlong *)(lVar1 + 0xf50);
        uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_28,L"Crew Challenge Complete!",L"OakChallenges",
                           L"CrewChallengeComplete");
        FUN_140c70250(uVar4,*(undefined8 *)(lVar3 + 0xf50),uVar5,*(undefined4 *)(lVar1 + 0x48),uVar2
                      ,0);
        return 1;
      }
    }
    return 1;
  }
  return 1;
}



// FUNCTION 140c40780 FUN_140c40780 body=143 status=ok
// SIG undefined FUN_140c40780(void)

void FUN_140c40780(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_142ceefa0();
  if ((lVar3 != 0) && (lVar1 = *(longlong *)(lVar3 + 0x118), lVar1 != 0)) {
    lVar4 = FUN_1414d8e60();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_142ce8a30(lVar3,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 140c40810 FUN_140c40810 body=9 status=ok
// SIG undefined FUN_140c40810(void)

void FUN_140c40810(undefined8 param_1,undefined1 param_2)

{
  FUN_140c40780(param_1,param_2,param_2);
  return;
}



// FUNCTION 140c40820 FUN_140c40820 body=103 status=ok
// SIG undefined FUN_140c40820(void)

void FUN_140c40820(undefined8 param_1,undefined1 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_142ceefa0();
  if (lVar2 != 0) {
    lVar3 = FUN_1414e0f70();
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
      FUN_142ce8a30(lVar2,param_2,param_2);
    }
  }
  return;
}



// FUNCTION 140c40890 FUN_140c40890 body=330 status=ok
// SIG undefined FUN_140c40890(void)

void FUN_140c40890(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  bVar3 = false;
  *(int *)((longlong)param_1 + 0x44c) = *(int *)((longlong)param_1 + 0x44c) + 1;
  iVar6 = *(int *)((longlong)param_1 + 0x44c);
  iVar5 = (int)param_1[0x88] + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = param_1[0x87];
      if (((*(int *)(lVar7 + 8 + lVar1) == 0) ||
          (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_1), cVar4 == '\0')) {
        bVar3 = true;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)((longlong)param_1 + 0x44c);
  }
  *(int *)((longlong)param_1 + 0x44c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x87,0);
  }
  if (((param_1[0x21c] != 0) && (cVar4 = (**(code **)(*param_1 + 0x780))(param_1), cVar4 == '\0'))
     && ((param_1[0x122] != 0 && ((*(byte *)(param_1[0x122] + 0x660) & 0x10) == 0)))) {
    return;
  }
  lVar8 = FUN_142ceefa0(param_1);
  if (lVar8 != 0) {
    lVar7 = FUN_1414e0f70();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(longlong *)(lVar8 + 0x6d8) != 0)) {
      return;
    }
  }
  if ((param_1[0x3a3] == 0) &&
     ((param_1[0x21c] == 0 || (*(char *)(param_1[0x21c] + 0x10e5) != '\x03')))) {
    (**(code **)(*param_1 + 0xbc8))(param_1,4);
  }
  return;
}



// FUNCTION 140c409e0 FUN_140c409e0 body=223 status=ok
// SIG undefined FUN_140c409e0(void)

void FUN_140c409e0(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 0xe78);
  if ((lVar4 != 0) && (iVar5 = 0, 0 < *(int *)(lVar4 + 0x680))) {
    do {
      lVar6 = (longlong)iVar5 * 0x78;
      cVar2 = FUN_142d52a00(*(longlong *)(lVar4 + 0x678) + 0x60 + lVar6);
      if (cVar2 != '\0') {
        uVar3 = FUN_142d52a20(*(longlong *)(*(longlong *)(param_1 + 0xe78) + 0x678) + 0x60 + lVar6);
        lVar4 = FArchive::operator<<(uVar3);
        uVar1 = *(undefined4 *)(lVar4 + 0x20);
        uVar3 = FUN_142d52a20(*(longlong *)(*(longlong *)(param_1 + 0xe78) + 0x678) + 0x60 + lVar6);
        uVar3 = FArchive::operator<<(uVar3);
        FUN_142d6f560(uVar3,uVar1,1);
      }
      lVar4 = *(longlong *)(param_1 + 0xe78);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(lVar4 + 0x680));
  }
  return;
}



// FUNCTION 140c40ac0 FUN_140c40ac0 body=618 status=ok
// SIG undefined FUN_140c40ac0(void)

longlong * FUN_140c40ac0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  
  if (*(longlong *)(param_1 + 0x1cb8) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x14e0);
    lVar10 = (longlong)*(int *)(param_1 + 0x14e8) * 0x40 + lVar6;
    for (; lVar6 != lVar10; lVar6 = lVar6 + 0x40) {
      if (*(longlong *)(lVar6 + 0x20) == *(longlong *)(param_1 + 0x1cb8)) {
        if ((lVar6 != 0) && (plVar2 = *(longlong **)(lVar6 + 0x10), plVar2 != (longlong *)0x0)) {
          lVar6 = FUN_1430b3b80();
          if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            uVar8 = FUN_14301f8f0();
            lVar10 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar8);
            lVar6 = 0;
            if (lVar10 != 0) {
              lVar6 = *(longlong *)(lVar10 + 0x208);
            }
            if (((lVar6 != 0) && ((*(byte *)(lVar6 + 0x1c8) & 1) != 0)) &&
               (plVar7 = (longlong *)
                         (**(code **)(*(longlong *)(param_1 + 0xd88) + 0xf0))
                                   ((longlong *)(param_1 + 0xd88),0), plVar2 != plVar7)) {
              return plVar2;
            }
          }
        }
        break;
      }
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x14e0);
  iVar1 = *(int *)(param_1 + 0x14e8);
  if (plVar2 != plVar2 + (longlong)iVar1 * 8) {
    plVar7 = plVar2 + 4;
    do {
      if ((*plVar7 != 0) && (*(char *)(*plVar7 + 0x38) != '\0')) {
        lVar6 = *(longlong *)(param_1 + 0x1420);
        if (lVar6 == 0) {
          if (DAT_146b33f38 == 0) {
            FUN_142d7ebe0();
            lVar6 = *(longlong *)(param_1 + 0x1420);
          }
          if ((*(longlong *)(DAT_146b33f38 + 0x58) != 0) &&
             (lVar10 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2a8), lVar10 != 0)) {
            *(longlong *)(param_1 + 0x1420) = lVar10;
            lVar6 = lVar10;
          }
        }
        cVar5 = FUN_140e85c60(*plVar7,lVar6);
        if ((cVar5 != '\0') && (plVar3 = (longlong *)plVar7[-2], plVar3 != (longlong *)0x0)) {
          lVar6 = FUN_1430b3b80();
          if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            uVar8 = FUN_14301f8f0();
            lVar10 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar8);
            lVar6 = 0;
            if (lVar10 != 0) {
              lVar6 = *(longlong *)(lVar10 + 0x208);
            }
            if (((lVar6 != 0) && ((*(byte *)(lVar6 + 0x1c8) & 1) != 0)) &&
               (plVar9 = (longlong *)
                         (**(code **)(*(longlong *)(param_1 + 0xd88) + 0xf0))
                                   ((longlong *)(param_1 + 0xd88),0), plVar3 != plVar9)) {
              return plVar3;
            }
          }
        }
      }
      plVar3 = plVar7 + 4;
      plVar7 = plVar7 + 8;
    } while (plVar3 != plVar2 + (longlong)iVar1 * 8);
  }
  return (longlong *)0x0;
}



// FUNCTION 140c40d30 FUN_140c40d30 body=196 status=ok
// SIG undefined FUN_140c40d30(void)

undefined8 FUN_140c40d30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar1 = FUN_1428e7a40();
    lVar2 = param_2;
    do {
      lVar4 = param_2;
      if (lVar2 == lVar1) goto LAB_140c40d62;
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  lVar4 = 0;
LAB_140c40d62:
  lVar2 = UScrollBox::GetPrivateStaticClass();
  if (lVar4 == lVar2) {
    return *(undefined8 *)(param_1 + 0x910);
  }
  lVar2 = FUN_142e1a5a0();
  if (lVar4 != lVar2) {
    lVar2 = FUN_1430255d0();
    if ((lVar4 != lVar2) && (lVar2 = ANavLinkProxy::GetPrivateStaticClass(), lVar4 != lVar2)) {
      uVar3 = FUN_14230da50(param_1,param_2);
      return uVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x000140c40df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*(longlong *)(param_1 + 0xd80) + 0x18))();
    return uVar3;
  }
  return *(undefined8 *)(param_1 + 0xe70);
}



// FUNCTION 140c40e00 FUN_140c40e00 body=189 status=ok
// SIG undefined FUN_140c40e00(void)

int * FUN_140c40e00(longlong *param_1,int *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FCrc::MemCrc32(*param_3,*(int *)(param_3 + 1) * 0x30,0);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      lVar4 = *param_1;
      do {
        cVar1 = FUN_140c315a0(lVar4 + (longlong)iVar2 * 0x48,param_3);
        if (cVar1 != '\0') {
          *param_2 = iVar2;
          return param_2;
        }
        lVar4 = *param_1;
        iVar2 = *(int *)(lVar4 + 0x40 + (longlong)iVar2 * 0x48);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140c40ec0 FUN_140c40ec0 body=116 status=ok
// SIG undefined FUN_140c40ec0(void)

int * FUN_140c40ec0(longlong *param_1,int *param_2,byte param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (ulonglong)param_3) * 4);
    if (iVar1 != -1) {
      do {
        if (*(byte *)(*param_1 + (longlong)iVar1 * 0x30) == param_3) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = *(int *)(*param_1 + 0x28 + (longlong)iVar1 * 0x30);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140c40f40 FUN_140c40f40 body=914 status=ok
// SIG undefined FUN_140c40f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_140c40f40(longlong param_1,float param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint *puVar14;
  undefined1 auStack_158 [32];
  longlong *local_138;
  int local_130;
  uint uStack_12c;
  uint *puStack_128;
  uint local_120;
  uint uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  longlong local_110;
  int local_108;
  int local_104;
  longlong *local_100;
  undefined8 uStack_f8;
  uint *local_f0;
  uint uStack_e8;
  uint uStack_e4;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  uint *puStack_c8;
  uint uStack_c0;
  uint uStack_bc;
  undefined8 uStack_b8;
  undefined1 local_a8;
  float local_a0;
  float local_9c;
  longlong local_98 [4];
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_138 = (longlong *)(param_1 + 0x50);
  uStack_12c = 1;
  uVar2 = *(uint *)(param_1 + 0x78);
  puVar1 = (uint *)(param_1 + 0x60);
  lVar12 = 0;
  local_110 = 0;
  iVar5 = 0;
  local_130 = 0;
  iVar11 = 0;
  local_104 = 0;
  uStack_11c = 0;
  iStack_118 = 0;
  if (uVar2 != 0) {
    puVar14 = *(uint **)(param_1 + 0x70);
    if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar3 = *puVar14;
    iStack_118 = 0;
    local_130 = 0;
    while (uVar3 == 0) {
      lVar8 = (longlong)local_130;
      iStack_118 = iStack_118 + 0x20;
      iVar6 = local_130 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_130;
      local_130 = iVar6;
      if (bVar4) goto LAB_140c41041;
      uVar3 = puVar14[lVar8 + 1];
    }
    uStack_12c = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_12c != 0) {
      for (; uStack_12c >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_12c == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_11c = (iStack_118 - iVar6) + 0x1f;
    if ((int)uVar2 < (int)uStack_11c) {
LAB_140c41041:
      uStack_11c = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x78);
  uStack_e8 = 0xffffffff;
  uStack_e4 = uStack_11c;
  local_e0 = CONCAT44(uStack_114,iStack_118);
  uStack_f8 = CONCAT44(uStack_12c,local_130);
  local_120 = -1 << ((byte)uVar3 & 0x1f);
  uVar13 = uVar3 & 0xffffffe0;
  puStack_128 = puVar1;
  uStack_11c = uVar3;
  local_100 = local_138;
  local_f0 = puVar1;
  local_d8 = local_138;
  uStack_d0 = uStack_f8;
  puStack_c8 = puVar1;
  uStack_b8 = local_e0;
  uStack_c0 = uStack_e8;
  uStack_bc = uStack_e4;
  if (uVar3 != uVar2) {
    puVar14 = *(uint **)(param_1 + 0x70);
    if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar7 = puVar14[(int)uVar3 >> 5] & local_120;
    iVar6 = (int)uVar3 >> 5;
    while (uVar7 == 0) {
      uVar13 = uVar13 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_140c41127;
      uVar7 = puVar14[(longlong)iVar6 + 1];
      local_120 = 0xffffffff;
      iVar6 = iVar6 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar6 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_11c = (uVar13 - iVar6) + 0x1f;
    uVar3 = uStack_11c;
    if ((int)uVar2 < (int)uStack_11c) {
LAB_140c41127:
      uStack_11c = uVar2;
      uVar3 = uVar2;
    }
  }
  while( true ) {
    if (((uStack_e4 == uVar3) && (local_f0 == puVar1)) && (local_100 == local_138)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) break;
    puVar9 = (undefined1 *)((longlong)(int)uStack_e4 * 0x68 + *local_100);
    local_a8 = *puVar9;
    local_a0 = *(float *)(puVar9 + 8);
    local_9c = *(float *)(puVar9 + 0xc);
    local_98[0] = 0;
    local_98[1] = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    TSet<TTuple<FName,FSmartNameMapping>,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>,FDefaultSetAllocator>
    ::operator=(local_98,puVar9 + 0x10);
    if ((local_a0 <= param_2) && (param_2 < local_9c)) {
      local_108 = iVar11 + 1;
      if (iVar5 < local_108) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_110,iVar11);
        lVar12 = local_110;
        iVar5 = local_104;
      }
      *(undefined1 *)(iVar11 + lVar12) = local_a8;
      iVar11 = local_108;
    }
    local_50 = 0;
    if (local_58 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FName,FDynamicClassStaticData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(local_98,0);
    if (local_78 != 0) {
      FMemory::Free();
    }
    if (local_98[0] != 0) {
      FMemory::Free();
    }
    uStack_e8 = uStack_e8 & ~uStack_f8._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_f8);
  }
  if (iVar11 < 1) {
    uVar10 = 0;
  }
  else {
    iVar5 = rand();
    iVar6 = (int)((float)iVar5 * 3.051851e-05 * (float)iVar11);
    iVar5 = iVar11 + -1;
    if (iVar6 <= iVar11 + -1) {
      iVar5 = iVar6;
    }
    uVar10 = *(undefined1 *)(iVar5 + lVar12);
  }
  if (lVar12 != 0) {
    FMemory::Free(lVar12);
  }
  return uVar10;
}



// FUNCTION 140c412e0 FUN_140c412e0 body=94 status=ok
// SIG undefined FUN_140c412e0(void)

void FUN_140c412e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  plVar1 = *(longlong **)(param_1 + 0x1930);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = plVar1[0x1f];
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar2 = plVar1[0x1f];
      if (lVar2 == 0) {
        return;
      }
    }
    (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x10))(lVar2 + 0x28,param_2);
  }
  return;
}



// FUNCTION 140c41340 FUN_140c41340 body=111 status=ok
// SIG undefined FUN_140c41340(void)

undefined * FUN_140c41340(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686c350) {
    _Init_thread_header(&DAT_14686c350);
    if (DAT_14686c350 == -1) {
      FUN_140c2f5c0(&DAT_14686c318);
      _Init_thread_footer(&DAT_14686c350);
      return &DAT_14686c318;
    }
  }
  return &DAT_14686c318;
}



// FUNCTION 140c413b0 FUN_140c413b0 body=98 status=ok
// SIG undefined FUN_140c413b0(void)

undefined8 FUN_140c413b0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 400), lVar1 != 0)) {
    lVar3 = FUN_14141f270();
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
      uVar4 = FUN_140bba1e0(lVar1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 140c41420 FUN_140c41420 body=82 status=ok
// SIG undefined FUN_140c41420(void)

ulonglong FUN_140c41420(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if (*(longlong *)(param_1 + 0x130) != 0) {
    return (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x130) + 0x8a8);
  }
  lVar1 = FUN_140e7e760(param_1 + 0x790);
  if (lVar1 != 0) {
    uVar2 = FUN_142d52a20(lVar1);
    uVar2 = FArchive::operator<<(uVar2);
    uVar3 = FUN_142d5fed0(uVar2);
    return uVar3;
  }
  return 0;
}



// FUNCTION 140c41480 FUN_140c41480 body=196 status=ok
// SIG undefined FUN_140c41480(void)

void FUN_140c41480(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  *param_5 = 0;
  *param_4 = 0;
  *param_3 = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_140778c50(*(longlong *)(param_1 + 0x130),param_3,param_4,param_5);
    return;
  }
  lVar1 = FUN_140e7e760(param_1 + 0x790);
  if (lVar1 != 0) {
    uVar2 = FUN_142d52a20(lVar1);
    lVar3 = FArchive::operator<<(uVar2);
    *param_3 = *(undefined4 *)(lVar3 + 0x14);
    uVar2 = FUN_142d52a20(lVar1);
    lVar3 = FArchive::operator<<(uVar2);
    *param_4 = *(undefined4 *)(lVar3 + 0x20);
    uVar2 = FUN_142d52a20(lVar1);
    uVar2 = FArchive::operator<<(uVar2);
    uVar4 = FUN_142d5fed0(uVar2);
    *param_5 = uVar4;
  }
  return;
}



// FUNCTION 140c415c0 FUN_140c415c0 body=12 status=ok
// SIG undefined FUN_140c415c0(void)

void FUN_140c415c0(longlong param_1)

{
  FUN_140e7eef0(param_1 + 0x1518);
  return;
}



// FUNCTION 140c415e0 FUN_140c415e0 body=403 status=ok
// SIG undefined FUN_140c415e0(void)

undefined8 * FUN_140c415e0(longlong *param_1,undefined8 *param_2,float *param_3,undefined1 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  undefined1 local_2c [36];
  
  plVar1 = (longlong *)param_1[0x92];
  if (plVar1 == (longlong *)0x0) {
    cVar2 = (**(code **)(*param_1 + 0x780))(param_1);
    if ((cVar2 == '\0') && (param_1[0x1cd] != 0)) {
      FUN_142ced030(param_1[0x1cd],&local_48,1);
      local_38 = local_48 - *param_3;
      local_34 = local_44 - param_3[1];
      local_30 = local_40 - param_3[2];
      puVar3 = (undefined8 *)FVector::Rotation(&local_38,local_2c);
    }
    else {
      puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x798))(param_1,local_2c);
    }
  }
  else {
    puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x828))(plVar1,&local_38);
  }
  *param_2 = *puVar3;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar3 + 1);
  fVar6 = (float)(**(code **)(param_1[0x1b1] + 0x138))(param_1 + 0x1b1,param_4);
  lVar4 = (**(code **)(param_1[0x1b1] + 0xf0))(param_1 + 0x1b1,param_4);
  if (lVar4 != 0) {
    fVar7 = (float)FUN_143079090(lVar4);
    fVar6 = fVar6 * fVar7;
  }
  if (0.0 < fVar6) {
    cVar2 = (**(code **)(*param_1 + 0x780))(param_1);
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    puVar3 = (undefined8 *)
             FUN_141262700(local_2c,uVar5,lVar4,param_2,fVar6,
                           *(undefined1 *)((longlong)param_1 + 0x1ccc),cVar2 == '\0');
    *param_2 = *puVar3;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar3 + 1);
  }
  return param_2;
}



// FUNCTION 140c41780 FUN_140c41780 body=102 status=ok
// SIG undefined FUN_140c41780(void)

longlong FUN_140c41780(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((*(longlong *)(param_1 + 0xf48) != 0) && (lVar3 = FUN_140e7eef0(param_1 + 0x790), lVar3 != 0))
  {
    lVar2 = *(longlong *)(param_1 + 0xf48);
    plVar4 = *(longlong **)(lVar2 + 0x13e8);
    plVar1 = plVar4 + *(int *)(lVar2 + 0x13f0);
    for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
      if (*plVar4 == lVar3) {
        return lVar2;
      }
    }
  }
  return param_1 + -0xd88;
}



// FUNCTION 140c41820 FUN_140c41820 body=90 status=ok
// SIG undefined FUN_140c41820(void)

undefined8 FUN_140c41820(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_142ceefa0();
  if (lVar2 != 0) {
    lVar3 = FUN_1414e0f70();
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
      return *(undefined8 *)(lVar2 + 0x6d8);
    }
  }
  return 0;
}



// FUNCTION 140c41880 FUN_140c41880 body=242 status=ok
// SIG undefined FUN_140c41880(void)

float FUN_140c41880(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = 0.0;
  cVar1 = FUN_140c39080();
  if (cVar1 != '\0') {
    plVar3 = param_1;
    lVar2 = (**(code **)(*param_1 + 0x148))();
    fVar5 = *(float *)((longlong)param_1 + 0x4dc);
    fVar4 = (*(float *)(lVar2 + 0x79c) - *(float *)(param_1 + 0x9d)) / *(float *)(param_1 + 0x9b) +
            *(float *)((longlong)param_1 + 0x4d4);
    if (1e-08 < ABS(fVar5)) {
      fVar6 = (float)(int)(fVar4 / fVar5) * fVar5;
      if (ABS(fVar4) < ABS(fVar6)) {
        fVar6 = fVar4;
      }
      fVar6 = fVar4 - fVar6;
    }
    else {
      AK::MemoryMgr::StartProfileThreadUsage((long)plVar3);
      fVar5 = *(float *)((longlong)param_1 + 0x4dc);
    }
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    return (fVar5 - fVar6) * *(float *)(param_1 + 0x9b) + *(float *)(lVar2 + 0x79c);
  }
  return 0.0;
}



// FUNCTION 140c41980 FUN_140c41980 body=174 status=ok
// SIG undefined FUN_140c41980(void)

float FUN_140c41980(longlong *param_1)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  
  cVar2 = FUN_140c39080();
  if (cVar2 != '\0') {
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    fVar4 = (*(float *)(lVar3 + 0x79c) - *(float *)(param_1 + 0x9d)) / *(float *)(param_1 + 0x9b) +
            *(float *)((longlong)param_1 + 0x4d4);
    fVar1 = (float)(int)fVar4;
    if (ABS(fVar4) < ABS((float)(int)fVar4)) {
      fVar1 = fVar4;
    }
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    return (1.0 - (fVar4 - fVar1)) * *(float *)(param_1 + 0x9b) + *(float *)(lVar3 + 0x79c);
  }
  return 0.0;
}



// FUNCTION 140c41a30 FUN_140c41a30 body=41 status=ok
// SIG undefined FUN_140c41a30(void)

void FUN_140c41a30(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xea0) == 0) {
    uVar1 = FUN_140c430a0(param_1,1);
    *(undefined8 *)(param_1 + 0xea0) = uVar1;
  }
  return;
}



// FUNCTION 140c41a60 FUN_140c41a60 body=166 status=ok
// SIG undefined FUN_140c41a60(void)

longlong * FUN_140c41a60(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong local_28 [4];
  
  bVar2 = *(longlong *)(param_1 + 0xe0) == 0;
  if (bVar2) {
    local_28[0] = 0;
    plVar1 = local_28;
    local_28[1] = 0;
  }
  else {
    plVar1 = (longlong *)FUN_142d1a8a0(*(longlong *)(param_1 + 0xe0),local_28 + 2);
  }
  *param_2 = 0;
  *param_2 = *plVar1;
  *plVar1 = 0;
  *(int *)(param_2 + 1) = (int)plVar1[1];
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  if (bVar2) {
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  if ((!bVar2) && (local_28[2] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140c41b10 FUN_140c41b10 body=100 status=ok
// SIG undefined FUN_140c41b10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140c41b10(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28 [2];
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    local_18 = 0;
    puVar2 = local_28;
  }
  else {
    puVar2 = (undefined8 *)FUN_142d1a9e0(*(longlong *)(param_1 + 0xe0),local_28);
  }
  *(undefined1 *)(param_2 + 2) = 0;
  if (*(char *)(puVar2 + 2) != '\0') {
    uVar1 = puVar2[1];
    *param_2 = *puVar2;
    param_2[1] = uVar1;
    *(undefined1 *)(param_2 + 2) = 1;
  }
  return param_2;
}



// FUNCTION 140c41bc0 FUN_140c41bc0 body=102 status=ok
// SIG undefined FUN_140c41bc0(void)

ulonglong FUN_140c41bc0(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong in_RAX;
  
  if (*(longlong **)(param_1 + 0xd0) != (longlong *)0x0) {
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x908))();
    if ((char)in_RAX != '\0') {
      lVar1 = *(longlong *)(param_1 + 0xd0);
      *param_2 = *(undefined4 *)(lVar1 + 0x698);
      param_2[1] = *(undefined4 *)(lVar1 + 0x69c);
      uVar2 = *(undefined8 *)(lVar1 + 0x6a0);
      *(undefined8 *)(param_2 + 2) = uVar2;
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140c41c30 FUN_140c41c30 body=179 status=ok
// SIG undefined FUN_140c41c30(void)

undefined8 FUN_140c41c30(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0xe58) != 0) {
    uVar3 = FUN_14075c620(*(longlong *)(param_1 + 0xe58));
    return uVar3;
  }
  plVar1 = *(longlong **)(param_1 + 0x470);
  if (plVar1 != (longlong *)0x0) {
    lVar5 = plVar1[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar5 = plVar1[0x1f];
      if (lVar5 == 0) {
        return 0;
      }
    }
    lVar4 = ARemnantWeaponMod::GetPrivateStaticClass();
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
      uVar3 = FUN_14075c620(lVar5);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 140c41cf0 FUN_140c41cf0 body=179 status=ok
// SIG undefined FUN_140c41cf0(void)

undefined8 FUN_140c41cf0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0xe58) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0xe58) + 0x568);
  }
  plVar1 = *(longlong **)(param_1 + 0x470);
  if (plVar1 != (longlong *)0x0) {
    lVar4 = plVar1[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar4 = plVar1[0x1f];
      if (lVar4 == 0) {
        return 0;
      }
    }
    lVar3 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return *(undefined8 *)(lVar4 + 0x568);
    }
  }
  return 0;
}



// FUNCTION 140c41db0 FUN_140c41db0 body=8 status=ok
// SIG undefined FUN_140c41db0(void)

undefined8 FUN_140c41db0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x1e58);
}



// FUNCTION 140c41dc0 FUN_140c41dc0 body=87 status=ok
// SIG undefined FUN_140c41dc0(void)

undefined8 FUN_140c41dc0(undefined8 param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140c46840(param_1,param_3);
  if (((lVar1 != 0) && (-1 < param_2)) && (param_2 < *(int *)(lVar1 + 0x10))) {
    uVar2 = FUN_140c39110(param_1,*(longlong *)(lVar1 + 8) + (longlong)param_2 * 0xe0 + 0x38);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140c41e20 FUN_140c41e20 body=311 status=ok
// SIG undefined FUN_140c41e20(void)

int FUN_140c41e20(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 uVar9;
  
  iVar4 = 0;
  lVar5 = FUN_1405ec200(param_1 + 0x23);
  if (lVar5 != 0) {
    lVar6 = FUN_1414ba190();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar6 = FUN_140e7e6f0(uVar7);
      if (lVar6 != 0) {
        uVar9 = 0;
        if ((param_1[0x1b] != 0) &&
           ((lVar1 = *(longlong *)(param_1[0x1b] + 0x18), lVar1 == DAT_14686c1f8 ||
            (lVar1 == DAT_14686c200)))) {
          uVar9 = 1;
        }
        iVar4 = FUN_140e818f0(lVar6,lVar5,1,uVar9);
        if (iVar4 != 0) goto LAB_140c41f3d;
      }
    }
  }
  if ((param_1[5] != 0) && (lVar5 = *(longlong *)(param_1[5] + 0x118), lVar5 != 0)) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      plVar8 = (longlong *)FUN_140cffa10(lVar5);
      if (plVar8 != (longlong *)0x0) {
        iVar4 = (**(code **)(*plVar8 + 0x408))(plVar8);
      }
    }
  }
LAB_140c41f3d:
  iVar2 = 1;
  if (0 < iVar4) {
    iVar2 = iVar4;
  }
  return iVar2;
}



// FUNCTION 140c41f60 GetPlaybackDirection body=9 status=ok
// SIG undefined GetPlaybackDirection(void)

undefined4 UGeometryCacheComponent::GetPlaybackDirection(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x460);
}



// FUNCTION 140c41f70 FUN_140c41f70 body=89 status=ok
// SIG undefined FUN_140c41f70(void)

longlong FUN_140c41f70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x1428);
  if (lVar2 == 0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
      lVar2 = *(longlong *)(param_1 + 0x1428);
    }
    if ((*(longlong *)(DAT_146b33f38 + 0x58) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2c0), lVar1 != 0)) {
      *(longlong *)(param_1 + 0x1428) = lVar1;
      lVar2 = lVar1;
    }
  }
  return lVar2;
}



// FUNCTION 140c41fd0 FUN_140c41fd0 body=131 status=ok
// SIG undefined FUN_140c41fd0(void)

undefined8 * FUN_140c41fd0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  plVar1 = *(longlong **)(param_1 + -0x8f8);
  *(undefined4 *)param_2 = 0x3f000000;
  *(undefined4 *)((longlong)param_2 + 4) = 0x3f000000;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x1058))(plVar1,local_res8);
      *param_2 = *puVar4;
    }
  }
  return param_2;
}



// FUNCTION 140c42060 FUN_140c42060 body=41 status=ok
// SIG undefined FUN_140c42060(void)

undefined4 FUN_140c42060(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_140c39080();
  if (cVar1 != '\0') {
    return *(undefined4 *)(param_1 + 0x4d8);
  }
  return 0;
}



// FUNCTION 140c420e0 FUN_140c420e0 body=170 status=ok
// SIG undefined FUN_140c420e0(void)

byte * FUN_140c420e0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  lVar2 = FUN_140c421f0();
  if (lVar2 == 0) {
    return (byte *)0x0;
  }
  if (*(int *)(lVar2 + 0x10) != *(int *)(lVar2 + 0x3c)) {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    if (*(longlong *)(lVar2 + 0x48) == 0) {
      lVar3 = lVar2 + 0x40;
    }
    iVar1 = *(int *)(lVar3 + ((longlong)*(int *)(lVar2 + 0x50) - 1U &
                             (ulonglong)*(byte *)(param_1 + 0x4c9)) * 4);
    if (iVar1 != -1) {
      while (pbVar5 = (byte *)((longlong)iVar1 * 0x70 + *(longlong *)(lVar2 + 8)),
            *pbVar5 != *(byte *)(param_1 + 0x4c9)) {
        iVar1 = *(int *)(pbVar5 + 0x68);
        if (iVar1 == -1) {
          return (byte *)0x0;
        }
      }
      if (iVar1 != -1) goto LAB_140c42173;
    }
  }
  pbVar5 = (byte *)0x0;
LAB_140c42173:
  pbVar4 = pbVar5 + 8;
  if (pbVar5 == (byte *)0x0) {
    pbVar4 = (byte *)0x0;
  }
  return pbVar4;
}



// FUNCTION 140c42190 FUN_140c42190 body=94 status=ok
// SIG undefined FUN_140c42190(void)

void FUN_140c42190(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x1e0) != -1) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (((lVar2 != 0) || (lVar2 = FUN_1423407b0(), lVar2 != 0)) &&
     (lVar2 = UWorld::GetGameState<APVPGameState>(lVar2), lVar2 != 0)) {
    iVar1 = FUN_140cb6340(lVar2);
    *(int *)(param_1 + 0x1e0) = iVar1 + -1;
    return;
  }
  *(undefined4 *)(param_1 + 0x1e0) = 0xffffffff;
  return;
}



// FUNCTION 140c421f0 FUN_140c421f0 body=157 status=ok
// SIG undefined FUN_140c421f0(void)

byte * FUN_140c421f0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x468);
  if (lVar1 == 0) {
    return (byte *)0x0;
  }
  if (*(int *)(lVar1 + 0x58) != *(int *)(lVar1 + 0x84)) {
    lVar3 = *(longlong *)(lVar1 + 0x90);
    if (*(longlong *)(lVar1 + 0x90) == 0) {
      lVar3 = lVar1 + 0x88;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(lVar1 + 0x98) - 1U &
                             (ulonglong)*(byte *)(param_1 + 0x4c8)) * 4);
    if (iVar2 != -1) {
      while (pbVar5 = (byte *)((longlong)iVar2 * 0x68 + *(longlong *)(lVar1 + 0x50)),
            *pbVar5 != *(byte *)(param_1 + 0x4c8)) {
        iVar2 = *(int *)(pbVar5 + 0x60);
        if (iVar2 == -1) {
          return (byte *)0x0;
        }
      }
      if (iVar2 != -1) goto LAB_140c4227e;
    }
  }
  pbVar5 = (byte *)0x0;
LAB_140c4227e:
  pbVar4 = pbVar5 + 8;
  if (pbVar5 == (byte *)0x0) {
    pbVar4 = (byte *)0x0;
  }
  return pbVar4;
}



// FUNCTION 140c42290 FUN_140c42290 body=158 status=ok
// SIG undefined FUN_140c42290(void)

ulonglong FUN_140c42290(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  uVar2 = (ulonglong)uVar1;
  if ((int)uVar1 < DAT_14686c4b0) {
    uVar2 = _Init_thread_header(&DAT_14686c4b0);
    if (DAT_14686c4b0 == -1) {
      FName::FName(&DAT_14686c4a8,L"IsDead",1);
      uVar2 = _Init_thread_footer(&DAT_14686c4b0);
    }
  }
  if ((*(char *)(param_1 + 0x128) == '\x03') && (*(longlong *)(param_1 + 0x908) != 0)) {
    uVar2 = FUN_142dafb10(*(longlong *)(param_1 + 0x908) + 0x3a0,&DAT_14686c4a8);
    return uVar2;
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 140c42330 FUN_140c42330 body=995 status=ok
// SIG undefined FUN_140c42330(void)

longlong FUN_140c42330(longlong param_1,char param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  float fVar6;
  longlong lVar7;
  undefined8 uVar8;
  float *pfVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint *puVar14;
  float fVar15;
  undefined8 local_res8;
  undefined1 local_res18 [16];
  int local_c8;
  uint uStack_c4;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [8];
  float local_a0;
  longlong *local_98;
  int iStack_90;
  uint uStack_8c;
  uint *local_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  longlong *local_70;
  undefined8 uStack_68;
  uint *puStack_60;
  uint uStack_58;
  uint uStack_54;
  undefined8 uStack_50;
  
  lVar12 = *(longlong *)(param_1 + 0xee8);
  if (lVar12 == 0) {
    plVar2 = (longlong *)(param_1 + -0xba0);
    uVar3 = *(uint *)(param_1 + -0xb78);
    puVar1 = (uint *)(param_1 + -0xb90);
    uStack_c4 = 1;
    local_c8 = 0;
    uStack_b4 = 0;
    iStack_b0 = 0;
    if (uVar3 != 0) {
      puVar14 = *(uint **)(param_1 + -0xb80);
      if (*(uint **)(param_1 + -0xb80) == (uint *)0x0) {
        puVar14 = puVar1;
      }
      uVar4 = *puVar14;
      iStack_b0 = 0;
      local_c8 = 0;
      while (uVar4 == 0) {
        lVar12 = (longlong)local_c8;
        iStack_b0 = iStack_b0 + 0x20;
        iVar10 = local_c8 + 1;
        bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_c8;
        local_c8 = iVar10;
        if (bVar5) goto LAB_140c4241d;
        uVar4 = puVar14[lVar12 + 1];
      }
      uStack_c4 = uVar4 - 1 & uVar4 ^ uVar4;
      iVar10 = 0x1f;
      if (uStack_c4 != 0) {
        for (; uStack_c4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (uStack_c4 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      uStack_b4 = (iStack_b0 - iVar10) + 0x1f;
      if ((int)uVar3 < (int)uStack_b4) {
LAB_140c4241d:
        uStack_b4 = uVar3;
      }
    }
    uVar4 = *(uint *)(param_1 + -0xb78);
    uStack_80 = 0xffffffff;
    uStack_7c = uStack_b4;
    local_78 = CONCAT44(uStack_ac,iStack_b0);
    uStack_68 = CONCAT44(uStack_c4,local_c8);
    uVar13 = uVar4 & 0xffffffe0;
    iStack_90 = local_c8;
    uStack_8c = uStack_c4;
    local_88 = puVar1;
    local_70 = plVar2;
    puStack_60 = puVar1;
    uStack_50 = local_78;
    local_98 = plVar2;
    uStack_58 = uStack_80;
    uStack_54 = uStack_7c;
    uStack_b4 = uVar4;
    if (uVar4 != uVar3) {
      puVar14 = *(uint **)(param_1 + -0xb80);
      if (*(uint **)(param_1 + -0xb80) == (uint *)0x0) {
        puVar14 = puVar1;
      }
      uVar11 = puVar14[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
      iVar10 = (int)uVar4 >> 5;
      while (uVar11 == 0) {
        uVar13 = uVar13 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
        goto LAB_140c424f5;
        uVar11 = puVar14[(longlong)iVar10 + 1];
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
      uStack_b4 = (uVar13 - iVar10) + 0x1f;
      if ((int)uVar3 < (int)uStack_b4) {
LAB_140c424f5:
        uStack_b4 = uVar3;
      }
    }
    while( true ) {
      if ((uStack_7c == uStack_b4) && (local_88 == puVar1)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if ((bVar5) && (local_98 == plVar2)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) break;
      lVar12 = *(longlong *)(*local_98 + (longlong)(int)uStack_7c * 0x10);
      if (lVar12 != 0) {
        lVar7 = AUGDoor::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if ((bVar5) && (*(char *)(lVar12 + 0x2e0) == '\x01')) {
          *(longlong *)(param_1 + 0xee8) = lVar12;
        }
      }
      uStack_80 = uStack_80 & ~uStack_8c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
    }
    lVar12 = *(longlong *)(param_1 + 0xee8);
    if ((lVar12 == 0) && (param_2 != '\0')) {
      plVar2 = (longlong *)(param_1 + -0xe50);
      FUN_1417846f0(plVar2,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      local_res8 = 0;
      uVar8 = AUGDoor::GetPrivateStaticClass();
      lVar12 = FUN_1417985e0(uVar8,plVar2,0,0,0,0,0,0,0);
      if (lVar12 != 0) {
        UUGCampaign::SetExitArrowEnabled(lVar12,1);
        (**(code **)(*plVar2 + 0x578))(plVar2,&local_res8,local_res18);
        fVar6 = (float)local_res8;
        pfVar9 = (float *)FUN_14222dc50(plVar2,local_a8);
        fVar15 = ABS(pfVar9[1]);
        if (ABS(pfVar9[1]) <= ABS(*pfVar9)) {
          fVar15 = ABS(*pfVar9);
        }
        local_res8 = 0;
        if (fVar15 <= ABS(pfVar9[2])) {
          fVar15 = ABS(pfVar9[2]);
        }
        local_a0 = (fVar6 / fVar15) * 0.02;
        if (local_a0 <= 0.01) {
          local_a0 = 0.01;
        }
        *(ulonglong *)(lVar12 + 0x204) = CONCAT44(local_a0,local_a0);
        *(float *)(lVar12 + 0x20c) = local_a0;
        FUN_142399e30(lVar12,*(undefined8 *)(param_1 + -0xce8),0);
        uVar8 = (**(code **)(*plVar2 + 0x148))(plVar2);
        FUN_14234b270(lVar12,uVar8);
      }
      *(longlong *)(param_1 + 0xee8) = lVar12;
    }
  }
  return lVar12;
}



// FUNCTION 140c42740 FUN_140c42740 body=285 status=ok
// SIG undefined FUN_140c42740(void)

longlong FUN_140c42740(longlong param_1,longlong *param_2,longlong *param_3,char *param_4)

{
  char *pcVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint7 uVar5;
  char *pcVar6;
  
  if (param_2 != (longlong *)0x0) {
    lVar3 = FUN_14149b100();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pcVar6 = *(char **)(param_1 + 0x1410);
      pcVar1 = pcVar6 + (longlong)*(int *)(param_1 + 0x1418) * 0x18;
      if (pcVar6 != pcVar1) {
        do {
          if (*pcVar6 == *(char *)((longlong)param_2 + 0x906)) {
            if (pcVar6 != (char *)0x0) {
              *param_3 = *(longlong *)(pcVar6 + 8);
              *param_4 = pcVar6[1];
              return 1;
            }
            break;
          }
          pcVar6 = pcVar6 + 0x18;
        } while (pcVar6 != pcVar1);
      }
    }
  }
  if (param_2 != (longlong *)0x0) {
    uVar4 = FUN_14301f8f0();
    lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar4);
    if (lVar3 != 0) {
      lVar3 = *(longlong *)(lVar3 + 0x208);
      goto LAB_140c4281f;
    }
  }
  lVar3 = 0;
LAB_140c4281f:
  uVar5 = (uint7)((ulonglong)lVar3 >> 8);
  if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x1d0) == 0)) {
    lVar3 = (ulonglong)uVar5 << 8;
  }
  else {
    *param_3 = *(longlong *)(lVar3 + 0x1d0);
    lVar3 = CONCAT71(uVar5,1);
    *param_4 = '\x04';
  }
  return lVar3;
}



// FUNCTION 140c428a0 FUN_140c428a0 body=39 status=ok
// SIG undefined FUN_140c428a0(void)

longlong FUN_140c428a0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x1cd0);
  while (lVar1 = lVar2, lVar1 != 0) {
    param_1 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 0x1cd0);
  }
  return param_1 + 0x1430;
}



// FUNCTION 140c428d0 FUN_140c428d0 body=43 status=ok
// SIG undefined FUN_140c428d0(void)

longlong FUN_140c428d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x1cd0);
  if (lVar1 == 0) {
    return param_1 + 0x1430;
  }
  lVar2 = *(longlong *)(lVar1 + 0x1cd0);
  if (lVar2 != 0) {
    for (lVar1 = *(longlong *)(lVar2 + 0x1cd0); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x1cd0)) {
      lVar2 = lVar1;
    }
    return lVar2 + 0x1430;
  }
  return lVar1 + 0x1430;
}



// FUNCTION 140c42900 FUN_140c42900 body=68 status=ok
// SIG undefined FUN_140c42900(void)

void FUN_140c42900(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x1cd0) != 0) {
    uVar1 = FUN_140c428a0(*(longlong *)(param_1 + 0x1cd0));
    FUN_140e7fd70(uVar1,param_2);
    return;
  }
  FUN_140e7fd70(param_1 + 0x1430,param_2);
  return;
}



// FUNCTION 140c42950 FUN_140c42950 body=391 status=ok
// SIG undefined FUN_140c42950(void)

longlong FUN_140c42950(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar3 = DAT_146b33f38;
  lVar5 = DAT_146b33f38 + 0xa0;
  lVar2 = FWeakObjectPtr::Get(lVar5);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar3 + 0xa8)) {
      return 0;
    }
    if (*(longlong *)(lVar3 + 0xb0) == 0) {
      return 0;
    }
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar5,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar3 + 0xa8) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(lVar5);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar3 = FUN_1413bd170();
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
  lVar3 = *(longlong *)(param_1 + 0x1cd0);
  if (lVar3 == 0) {
    lVar3 = param_1 + 0x1430;
  }
  else if (*(longlong *)(lVar3 + 0x1cd0) == 0) {
    lVar3 = lVar3 + 0x1430;
  }
  else {
    lVar3 = FUN_140c428a0();
  }
  uVar4 = UWeapon::GetStatusEffectOriginStats(lVar2);
  lVar3 = FUN_140e7fd70(lVar3,uVar4);
  if (lVar3 != 0) {
    lVar2 = FUN_1414ba680();
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
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 140c42ae0 FUN_140c42ae0 body=87 status=ok
// SIG undefined FUN_140c42ae0(void)

undefined8 FUN_140c42ae0(undefined8 param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140c46840(param_1,param_3);
  if (((lVar1 != 0) && (-1 < param_2)) && (param_2 < *(int *)(lVar1 + 0x10))) {
    uVar2 = FUN_140c391d0(param_1,*(longlong *)(lVar1 + 8) + (longlong)param_2 * 0xe0 + 0x70);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140c42b40 FUN_140c42b40 body=80 status=ok
// SIG undefined FUN_140c42b40(void)

undefined8 FUN_140c42b40(undefined8 param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140c46840(param_1,param_3);
  if (((lVar1 != 0) && (-1 < param_2)) && (param_2 < *(int *)(lVar1 + 0x10))) {
    uVar2 = FUN_140c39290(param_1,(longlong)param_2 * 0xe0 + *(longlong *)(lVar1 + 8));
    return uVar2;
  }
  return 0;
}



// FUNCTION 140c42b90 FUN_140c42b90 body=133 status=ok
// SIG undefined FUN_140c42b90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140c42b90(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x948) == 0) {
    puVar2 = &local_48;
    local_48 = _DAT_1468b5b70;
    uStack_40 = uRam00000001468b5b78;
    local_28 = _DAT_1468b5b90;
    uStack_20 = uRam00000001468b5b98;
    local_38 = _DAT_1468b5b80;
    uStack_30 = uRam00000001468b5b88;
  }
  else {
    puVar2 = (undefined8 *)FUN_142cc1550(*(longlong *)(param_1 + 0x948),&local_48);
  }
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



// FUNCTION 140c42c20 FUN_140c42c20 body=41 status=ok
// SIG undefined FUN_140c42c20(void)

undefined8 FUN_140c42c20(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    param_4 = *(longlong *)(param_1 + 0x4c0);
  }
  if ((*(longlong *)(param_1 + 0x1d78) != 0) && (param_4 != 0)) {
    uVar1 = FUN_140611570(*(longlong *)(param_1 + 0x1d78),param_4);
    return uVar1;
  }
  return 0;
}



// FUNCTION 140c42c50 StopLerpCameraHeight body=12 status=ok
// SIG undefined StopLerpCameraHeight(void)

void URTC_MobileInputComponent::StopLerpCameraHeight(longlong param_1)

{
  FUN_140c39110(param_1,param_1 + 0x178);
  return;
}



// FUNCTION 140c42c60 FUN_140c42c60 body=12 status=ok
// SIG undefined FUN_140c42c60(void)

void FUN_140c42c60(longlong param_1)

{
  FUN_140c391d0(param_1,param_1 + 0x1b0);
  return;
}



// FUNCTION 140c42c70 FUN_140c42c70 body=12 status=ok
// SIG undefined FUN_140c42c70(void)

void FUN_140c42c70(longlong param_1)

{
  FUN_140c39290(param_1,param_1 + 0x140);
  return;
}



// FUNCTION 140c42c80 FUN_140c42c80 body=24 status=ok
// SIG undefined FUN_140c42c80(void)

ulonglong FUN_140c42c80(longlong param_1,ulonglong param_2,ulonglong *param_3)

{
  longlong lVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_1 + 0xe78), lVar1 != 0)) {
    puVar4 = *(ulonglong **)(lVar1 + 0x678);
    uVar2 = (ulonglong)*(int *)(lVar1 + 0x680);
    puVar3 = puVar4 + uVar2 * 0xf;
    while( true ) {
      if (puVar4 == puVar3) {
        return uVar2 & 0xffffffffffffff00;
      }
      uVar2 = *puVar4;
      if (uVar2 == param_2) break;
      puVar4 = puVar4 + 0xf;
    }
    *param_3 = uVar2;
    param_3[1] = puVar4[1];
    TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_3 + 2,puVar4 + 2);
    *(byte *)(param_3 + 4) = (byte)param_3[4] ^ ((byte)puVar4[4] ^ (byte)param_3[4]) & 1;
    *(byte *)(param_3 + 4) = (byte)param_3[4] ^ ((byte)puVar4[4] ^ (byte)param_3[4]) & 2;
    uVar2 = puVar4[6];
    param_3[5] = puVar4[5];
    param_3[6] = uVar2;
    uVar2 = puVar4[8];
    param_3[7] = puVar4[7];
    param_3[8] = uVar2;
    uVar2 = puVar4[10];
    param_3[9] = puVar4[9];
    param_3[10] = uVar2;
    param_3[0xb] = puVar4[0xb];
    uVar2 = puVar4[0xd];
    param_3[0xc] = puVar4[0xc];
    param_3[0xd] = uVar2;
    param_3[0xe] = puVar4[0xe];
    return 1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140c42cb0 FUN_140c42cb0 body=174 status=ok
// SIG undefined FUN_140c42cb0(void)

undefined8 * FUN_140c42cb0(longlong param_1,undefined8 *param_2,int param_3,undefined1 *param_4)

{
  longlong lVar1;
  
  *param_4 = 1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfd | 1;
  FUN_142c8c260(param_2 + 5,0x3f800000);
  *(undefined1 *)(param_2 + 0xc) = 0xff;
  param_2[0xd] = 0;
  *(undefined4 *)(param_2 + 0xe) = 0;
  lVar1 = *(longlong *)(param_1 + 0xe78);
  if (((lVar1 != 0) && (-1 < param_3)) && (param_3 < *(int *)(lVar1 + 0x680))) {
    FUN_140a7d5a0(param_2,(longlong)param_3 * 0x78 + *(longlong *)(lVar1 + 0x678));
    *param_4 = 0;
  }
  return param_2;
}



// FUNCTION 140c42d60 FUN_140c42d60 body=289 status=ok
// SIG undefined FUN_140c42d60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140c42d60(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int *piVar5;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar5 < DAT_146866ca8) {
    _Init_thread_header(&DAT_146866ca8);
    if (DAT_146866ca8 == -1) {
      DAT_146866c90 = 0xff;
      _DAT_146866c98 = 0;
      DAT_146866ca0._0_4_ = 0;
      _Init_thread_footer(&DAT_146866ca8);
    }
  }
  lVar2 = *(longlong *)(param_1 + -0x498);
  if (lVar2 == 0) {
    puVar4 = (undefined8 *)&DAT_146866c90;
  }
  else {
    if (*piVar5 < DAT_146866c88) {
      _Init_thread_header(&DAT_146866c88);
      if (DAT_146866c88 == -1) {
        DAT_146866c70 = 0xff;
        _DAT_146866c78 = 0;
        DAT_146866c80._0_4_ = 0;
        _Init_thread_footer(&DAT_146866c88);
      }
    }
    if (*(int *)(lVar2 + 0x680) < 1) {
      puVar4 = (undefined8 *)&DAT_146866c70;
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x678) + 0x60);
    }
  }
  uVar3 = puVar4[1];
  uVar1 = puVar4[2];
  *param_2 = *puVar4;
  param_2[1] = uVar3;
  param_2[2] = uVar1;
  return param_2;
}



// FUNCTION 140c42e90 FUN_140c42e90 body=109 status=ok
// SIG undefined FUN_140c42e90(void)

longlong FUN_140c42e90(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + -0x5e8);
  if (lVar1 != 0) {
    lVar3 = USoCharacterMovementComponent::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(longlong *)(lVar1 + 0x7a8) != 0)) {
      return *(longlong *)(lVar1 + 0x7a8);
    }
  }
  return param_1 + -0x700;
}



// FUNCTION 140c42f00 FUN_140c42f00 body=72 status=ok
// SIG undefined FUN_140c42f00(void)

undefined8 FUN_140c42f00(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    cVar2 = FUN_140a67e10();
    if (((cVar2 != '\0') && (*(longlong *)(param_1 + 0xe68) != 0)) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xe68) + 0x2978), lVar1 != 0)) {
      return *(undefined8 *)(lVar1 + 0x40);
    }
  }
  return 0;
}



// FUNCTION 140c42f50 FUN_140c42f50 body=323 status=ok
// SIG undefined FUN_140c42f50(void)

undefined8 FUN_140c42f50(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *local_18;
  int local_10;
  
  if (*(longlong *)(param_1 + 0x118) != 0) {
    return *(undefined8 *)(param_1 + 0x118);
  }
  uVar3 = FUN_1430255d0();
  AActor::GetComponentsByClass(param_1 + -0xd80,&local_18,uVar3);
  plVar1 = local_18 + local_10;
  if (local_18 != plVar1) {
    plVar6 = local_18;
    do {
      lVar5 = *plVar6;
      if (lVar5 != 0) {
        lVar4 = ANavLinkProxy::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          if (*(char *)(lVar5 + 0x370) == '\0') {
            *(longlong *)(param_1 + 0x118) = lVar5;
            break;
          }
        }
        else {
          lVar4 = FUN_1430255d0();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) {
            lVar5 = 0;
          }
          *(longlong *)(param_1 + 0x118) = lVar5;
        }
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return *(undefined8 *)(param_1 + 0x118);
}



// FUNCTION 140c430a0 FUN_140c430a0 body=207 status=ok
// SIG undefined FUN_140c430a0(void)

longlong FUN_140c430a0(undefined8 param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *local_18;
  int local_10;
  
  uVar4 = FUN_1430255d0();
  AActor::GetComponentsByClass(param_1,&local_18,uVar4);
  plVar1 = local_18 + local_10;
  plVar6 = local_18;
  do {
    if (plVar6 == plVar1) {
      if (local_18 != (longlong *)0x0) {
        FMemory::Free(local_18);
      }
      return 0;
    }
    lVar2 = *plVar6;
    if (lVar2 != 0) {
      lVar5 = ANavLinkProxy::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (*(char *)(lVar2 + 0x370) == param_2)) {
        if (local_18 == (longlong *)0x0) {
          return lVar2;
        }
        FMemory::Free();
        return lVar2;
      }
    }
    plVar6 = plVar6 + 1;
  } while( true );
}



// FUNCTION 140c43170 FUN_140c43170 body=93 status=ok
// SIG undefined FUN_140c43170(void)

ulonglong FUN_140c43170(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar2 = *(longlong *)(param_1 + -0x920);
  if (lVar2 != 0) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      in_RAX = uVar4 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      return (ulonglong)*(byte *)(lVar2 + 0x599);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140c431d0 FUN_140c431d0 body=431 status=ok
// SIG undefined FUN_140c431d0(void)

longlong * FUN_140c431d0(longlong param_1,longlong *param_2)

{
  void *_Dst;
  undefined2 *puVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong local_38 [2];
  
  lVar8 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  puVar7 = *(undefined1 **)(param_1 + 0x4f0);
  lVar6 = (longlong)*(int *)(param_1 + 0x4f8);
  if (puVar7 + *(int *)(param_1 + 0x4f8) < puVar7) {
    lVar6 = lVar8;
  }
  if (lVar6 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_140c496b0(local_38,*puVar7);
      iVar5 = *(int *)(puVar4 + 1) + -1;
      if (*(int *)(puVar4 + 1) == 0) {
        iVar5 = 0;
      }
      _Src = (void *)*puVar4;
      if (iVar5 != 0) {
        iVar3 = (int)param_2[1];
        iVar2 = (uint)(iVar3 == 0) + iVar5 + iVar3;
        *(int *)(param_2 + 1) = iVar2;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        _Dst = (void *)(*param_2 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar5 * 2);
        *(undefined2 *)((longlong)iVar5 * 2 + (longlong)_Dst) = 0;
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      if (*(char *)(param_1 + 0x4d1) != '\0') {
        iVar5 = (int)param_2[1];
        iVar3 = (2 - (uint)(iVar5 != 0)) + iVar5;
        *(int *)(param_2 + 1) = iVar3;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
        }
        puVar1 = (undefined2 *)(*param_2 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
        *puVar1 = 0x2a;
        puVar1[1] = 0;
      }
      iVar5 = (int)param_2[1];
      iVar3 = (2 - (uint)(iVar5 != 0)) + iVar5;
      *(int *)(param_2 + 1) = iVar3;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
      }
      puVar7 = puVar7 + 1;
      lVar8 = lVar8 + 1;
      puVar1 = (undefined2 *)(*param_2 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
      *puVar1 = 10;
      puVar1[1] = 0;
    } while (lVar8 != lVar6);
  }
  return param_2;
}



// FUNCTION 140c43380 FUN_140c43380 body=64 status=ok
// SIG undefined FUN_140c43380(void)

undefined8 FUN_140c43380(longlong param_1)

{
  undefined8 uVar1;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    uVar1 = FUN_140b81380(*(longlong *)(DAT_146b33f38 + 0x58),*(undefined8 *)(param_1 + 0x10));
    return uVar1;
  }
  return 0;
}



// FUNCTION 140c433e0 FUN_140c433e0 body=2669 status=ok
// SIG undefined FUN_140c433e0(void)

void FUN_140c433e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_142cc1ec0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_14686c380) && (_Init_thread_header(&DAT_14686c380), DAT_14686c380 == -1)) {
    uVar1 = FUN_1413f82e0();
    FUN_1413f82e0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"HealthState",1);
    DAT_14686c378 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14686c380);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14686c378 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14686c378 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14686c378 + 0x30));
  }
  if ((*piVar5 < DAT_14686c390) && (_Init_thread_header(&DAT_14686c390), DAT_14686c390 == -1)) {
    uVar1 = FUN_1413f82e0();
    FUN_1413f82e0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"DeathType",1);
    DAT_14686c388 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14686c390);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14686c388 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14686c388 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14686c388 + 0x30));
  }
  if ((*piVar5 < DAT_14686c3a0) && (_Init_thread_header(&DAT_14686c3a0), DAT_14686c3a0 == -1)) {
    uVar1 = FUN_1413f82e0();
    FUN_1413f82e0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bCanUseWeaponWhileSprinting",1);
    DAT_14686c398 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14686c3a0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14686c398 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14686c398 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14686c398 + 0x30));
  }
  if ((*piVar5 < DAT_14686c3b0) && (_Init_thread_header(&DAT_14686c3b0), DAT_14686c3b0 == -1)) {
    uVar1 = FUN_1413f82e0();
    FUN_1413f82e0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"InventoryProxy",1);
    DAT_14686c3a8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14686c3b0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14686c3a8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14686c3a8 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14686c3a8 + 0x30));
  }
  if ((*piVar5 < DAT_14686c3c0) && (_Init_thread_header(&DAT_14686c3c0), DAT_14686c3c0 == -1)) {
    uVar1 = FUN_1413f82e0();
    FUN_1413f82e0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"WeaponSwapTimeScale",1);
    DAT_14686c3b8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14686c3c0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14686c3b8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14686c3b8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14686c3b8 + 0x30));
  }
  if ((*piVar5 < DAT_14686c3d0) && (_Init_thread_header(&DAT_14686c3d0), DAT_14686c3d0 == -1)) {
    uVar1 = FUN_1413f82e0();
    FUN_1413f82e0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"EquippedInventory",1);
    DAT_14686c3c8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14686c3d0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14686c3c8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14686c3c8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14686c3c8 + 0x30));
  }
  if ((*piVar5 < DAT_14686c3e0) && (_Init_thread_header(&DAT_14686c3e0), DAT_14686c3e0 == -1)) {
    uVar1 = FUN_1413f82e0();
    FUN_1413f82e0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"HolsteredWeapon",1);
    DAT_14686c3d8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14686c3e0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14686c3d8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14686c3d8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14686c3d8 + 0x30));
  }
  if ((*piVar5 < DAT_14686c3f0) && (_Init_thread_header(&DAT_14686c3f0), DAT_14686c3f0 == -1)) {
    uVar1 = FUN_1413f82e0();
    FUN_1413f82e0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bWeaponsRestricted",1);
    DAT_14686c3e8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14686c3f0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14686c3e8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14686c3e8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14686c3e8 + 0x30));
  }
  if ((*piVar5 < DAT_14686c400) && (_Init_thread_header(&DAT_14686c400), DAT_14686c400 == -1)) {
    uVar1 = FUN_1413f82e0();
    FUN_1413f82e0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"Mech",1);
    DAT_14686c3f8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14686c400);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14686c3f8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14686c3f8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14686c3f8 + 0x30));
  }
  if ((*piVar5 < DAT_14686c410) && (_Init_thread_header(&DAT_14686c410), DAT_14686c410 == -1)) {
    uVar1 = FUN_1413f82e0();
    FUN_1413f82e0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CustomizationSeed",1);
    DAT_14686c408 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14686c410);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14686c408 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14686c408 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14686c408 + 0x30));
  }
  if ((*piVar5 < DAT_14686c420) && (_Init_thread_header(&DAT_14686c420), DAT_14686c420 == -1)) {
    uVar1 = FUN_1413f82e0();
    FUN_1413f82e0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"DeadRagdollReplicationData",1);
    DAT_14686c418 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14686c420);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14686c418 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14686c418 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14686c418 + 0x30));
  }
  if ((*piVar5 < DAT_14686c430) && (_Init_thread_header(&DAT_14686c430), DAT_14686c430 == -1)) {
    uVar1 = FUN_1413f82e0();
    FUN_1413f82e0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CoordinatedEffectSwitch",1);
    DAT_14686c428 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14686c430);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14686c428 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14686c428 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14686c428 + 0x30));
  }
  if ((*piVar5 < DAT_14686c440) && (_Init_thread_header(&DAT_14686c440), DAT_14686c440 == -1)) {
    uVar1 = FUN_1413f82e0();
    FUN_1413f82e0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"AnimStyleCurrent",1);
    DAT_14686c438 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14686c440);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14686c438 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14686c438 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14686c438 + 0x30));
  }
  if ((*piVar5 < DAT_14686c450) && (_Init_thread_header(&DAT_14686c450), DAT_14686c450 == -1)) {
    uVar1 = FUN_1413f82e0();
    FUN_1413f82e0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"OverrideVisibleCorpseRemovalTime",1);
    DAT_14686c448 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14686c450);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14686c448 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14686c448 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14686c448 + 0x30));
  }
  if ((*piVar5 < DAT_14686c460) && (_Init_thread_header(&DAT_14686c460), DAT_14686c460 == -1)) {
    uVar1 = FUN_1413f82e0();
    FUN_1413f82e0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CorpseRemovalActionOverride",1);
    DAT_14686c458 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14686c460);
  }
  if (0 < *(int *)(DAT_14686c458 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14686c458 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_14686c458 + 0x30));
  }
  return;
}



// FUNCTION 140c43e50 FUN_140c43e50 body=421 status=ok
// SIG undefined FUN_140c43e50(void)

void FUN_140c43e50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar4 < DAT_14686c300) {
    _Init_thread_header(&DAT_14686c300);
    if (DAT_14686c300 == -1) {
      uVar1 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
      UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"MissionClass",1);
      DAT_14686c2f8 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_14686c300);
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_14686c2f8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_14686c2f8 + 0x40) + (short)iVar3;
      local_14 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14686c2f8 + 0x30));
  }
  if (*piVar4 < DAT_14686c310) {
    _Init_thread_header(&DAT_14686c310);
    if (DAT_14686c310 == -1) {
      uVar1 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
      UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"Objectives",1);
      DAT_14686c308 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_14686c310);
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_14686c308 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_14686c308 + 0x40) + (short)iVar3;
      local_14 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14686c308 + 0x30));
  }
  return;
}



// FUNCTION 140c44030 FUN_140c44030 body=157 status=ok
// SIG undefined FUN_140c44030(void)

undefined4 FUN_140c44030(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_142ceefa0();
  if (lVar2 != 0) {
    lVar3 = FUN_1414e0f70();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong *)(lVar2 + 0x6d8) != 0)) {
      return *(undefined4 *)(*(longlong *)(lVar2 + 0x6d8) + 0xd94);
    }
  }
  if (*(longlong *)(param_1 + 0x900) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x900) + 0x278);
  }
  return 0x44160000;
}



// FUNCTION 140c440f0 FUN_140c440f0 body=139 status=ok
// SIG undefined FUN_140c440f0(void)

longlong FUN_140c440f0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_142ceefa0();
  if (lVar2 != 0) {
    lVar3 = FUN_1414e0f70();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong *)(lVar2 + 0x6d8) != 0)) {
      return *(longlong *)(lVar2 + 0x6d8) + 0xd9c;
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x900) + 0x274;
  if (*(longlong *)(param_1 + 0x900) == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 140c44180 FUN_140c44180 body=750 status=ok
// SIG undefined FUN_140c44180(void)

void FUN_140c44180(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *local_78;
  int local_70;
  longlong local_68 [2];
  longlong local_58;
  longlong local_50 [3];
  
  plVar3 = (longlong *)USequenceRenderSettings::GetPrivateStaticClass();
  lVar6 = plVar3[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar6 = plVar3[0x1f];
  }
  iVar10 = *(int *)(lVar6 + 0x30);
  plVar12 = (longlong *)0x0;
  lVar6 = *(longlong *)(lVar6 + 0x28);
  local_78 = (longlong *)0x0;
  plVar3 = plVar12;
  local_70 = iVar10;
  if (iVar10 != 0) {
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_78,iVar10,0);
    plVar3 = local_78;
    lVar9 = lVar6 + 8;
    do {
      *(undefined8 *)((longlong)plVar3 + lVar9 + (-8 - lVar6)) = *(undefined8 *)(lVar9 + -8);
      FString::FString((longlong)plVar3 + (lVar9 - lVar6),lVar9);
      lVar9 = lVar9 + 0x18;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  iVar10 = local_70;
  plVar13 = plVar3 + (longlong)local_70 * 3;
  plVar2 = plVar3;
  for (; plVar3 != plVar13; plVar3 = plVar3 + 3) {
    local_58 = *plVar3;
    FString::FString(local_50,plVar3 + 1);
    if (local_58 != 0) {
      puVar4 = (undefined8 *)FSoftObjectPath::ToString(&local_58,local_68);
      if (*(int *)(puVar4 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*puVar4;
      }
      uVar5 = UUGJournalKey::GetPrivateStaticClass();
      lVar6 = FUN_141799c90(uVar5,0,puVar11,0,0,0,1);
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      if (lVar6 != 0) {
        plVar2 = (longlong *)*param_1;
        iVar1 = (int)param_1[1];
        for (plVar8 = plVar2; plVar8 != plVar2 + iVar1; plVar8 = plVar8 + 1) {
          if (*plVar8 == lVar6) {
            if ((int)((longlong)plVar8 - (longlong)plVar2 >> 3) != -1) goto LAB_140c44328;
            break;
          }
        }
        *(int *)(param_1 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1);
        }
        *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar6;
LAB_140c44328:
        if (*(longlong *)(lVar6 + 0x88) != 0) {
          TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
          AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2);
        }
      }
    }
    if (local_50[0] != 0) {
      FMemory::Free();
    }
    plVar2 = local_78;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar6 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar6 != 0) {
    plVar3 = *(longlong **)(lVar6 + 0x1078);
    plVar13 = (longlong *)((longlong)*(int *)(lVar6 + 0x1080) & 0x1fffffffffffffff);
    if (plVar3 + *(int *)(lVar6 + 0x1080) < plVar3) {
      plVar13 = plVar12;
    }
    if (plVar13 != (longlong *)0x0) {
      do {
        plVar8 = (longlong *)*param_2;
        iVar1 = (int)param_2[1];
        lVar6 = *plVar3;
        for (plVar7 = plVar8; plVar7 != plVar8 + iVar1; plVar7 = plVar7 + 1) {
          if (*plVar7 == lVar6) {
            if ((int)((longlong)plVar7 - (longlong)plVar8 >> 3) != -1) goto LAB_140c4441c;
            break;
          }
        }
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
        }
        *(longlong *)((longlong)iVar1 * 8 + *param_2) = lVar6;
LAB_140c4441c:
        plVar3 = plVar3 + 1;
        plVar12 = (longlong *)((longlong)plVar12 + 1);
      } while (plVar12 != plVar13);
    }
  }
  if (iVar10 != 0) {
    plVar3 = plVar2 + 1;
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 3;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  return;
}



// FUNCTION 140c44470 FUN_140c44470 body=501 status=ok
// SIG undefined FUN_140c44470(void)

/* WARNING: Removing unreachable block (ram,0x000140c445a8) */

longlong FUN_140c44470(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_res8;
  longlong local_18;
  undefined1 local_10;
  undefined4 local_c;
  
  lVar9 = 0;
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 5);
  if (cVar3 != '\0') {
    plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 5);
    uVar5 = (**(code **)(*plVar4 + 0x148))(plVar4);
    lVar6 = FUN_140c447b0(uVar5);
    if (lVar6 != 0) {
      uVar5 = UTDMCommanderArtilleryWidget::GetPrivateStaticClass();
      lVar6 = AGameStateBase::OnRep_GameModeClass(lVar6,uVar5);
      if (lVar6 != 0) {
        lVar7 = UTDMCommanderArtilleryWidget::GetPrivateStaticClass();
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
          (**(code **)(*param_1 + 0x280))(param_1,&local_res8);
          lVar7 = lVar9;
          if (local_res8 != 0) {
            lVar8 = UWidget::GetPrivateStaticClass();
            for (lVar1 = local_res8;
                (lVar7 = lVar9, lVar1 != 0 && (lVar7 = local_res8, lVar1 != lVar8));
                lVar1 = *(longlong *)(lVar1 + 0x30)) {
            }
          }
          lVar7 = FUN_1430ec580(lVar6,lVar7);
          if (lVar7 != 0) {
            lVar9 = UWidget::GetPrivateStaticClass();
            if ((*(int *)(lVar9 + 0x90) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x90)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) == lVar9 + 0x88)) {
              return lVar7;
            }
            return 0;
          }
          local_18 = 0;
          lVar7 = lVar9;
          if (local_res8 != 0) {
            lVar8 = UWidget::GetPrivateStaticClass();
            for (lVar1 = local_res8;
                (lVar7 = lVar9, lVar1 != 0 && (lVar7 = local_res8, lVar1 != lVar8));
                lVar1 = *(longlong *)(lVar1 + 0x30)) {
            }
          }
          local_c = 0;
          local_10 = 2;
          local_18 = lVar7;
          lVar9 = FUN_1430ea410(lVar6,&local_18);
          if (lVar9 != 0) {
            lVar6 = UWidget::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              return lVar9;
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140c44670 FUN_140c44670 body=26 status=ok
// SIG undefined FUN_140c44670(void)

undefined8 * FUN_140c44670(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14143d2a0();
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 140c44690 FUN_140c44690 body=26 status=ok
// SIG undefined FUN_140c44690(void)

undefined8 * FUN_140c44690(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14143d400();
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 140c446b0 FUN_140c446b0 body=255 status=ok
// SIG undefined FUN_140c446b0(void)

undefined1 FUN_140c446b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = *param_2;
  if (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 100)) {
    return DAT_146b4ae20;
  }
  lVar5 = *(longlong *)(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x70) == 0) {
    lVar5 = param_1 + 0x68;
  }
  iVar3 = (int)((ulonglong)lVar1 >> 0x20);
  iVar4 = *(int *)(lVar5 + ((longlong)(iVar3 + (int)lVar1) & (longlong)*(int *)(param_1 + 0x78) - 1U
                           ) * 4);
  if (iVar4 != -1) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    do {
      if (*(longlong *)(lVar2 + (longlong)iVar4 * 0x18) == lVar1) {
        if (iVar4 == -1) {
          return DAT_146b4ae20;
        }
        iVar4 = *(int *)(lVar5 + ((longlong)(iVar3 + (int)lVar1) &
                                 (longlong)*(int *)(param_1 + 0x78) - 1U) * 4);
        if (iVar4 == -1) goto LAB_140c44792;
        while (lVar5 = lVar2 + (longlong)iVar4 * 0x18,
              *(longlong *)(lVar2 + (longlong)iVar4 * 0x18) != lVar1) {
          iVar4 = *(int *)(lVar5 + 0x10);
          if (iVar4 == -1) {
            return DAT_00000008;
          }
        }
        if (iVar4 == -1) {
LAB_140c44792:
          lVar5 = 0;
        }
        return *(undefined1 *)(lVar5 + 8);
      }
      iVar4 = *(int *)(lVar2 + 0x10 + (longlong)iVar4 * 0x18);
    } while (iVar4 != -1);
  }
  return DAT_146b4ae20;
}



// FUNCTION 140c447b0 FUN_140c447b0 body=445 status=ok
// SIG undefined FUN_140c447b0(void)

longlong FUN_140c447b0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_28;
  longlong *local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if ((param_1 != 0) && (lVar3 = *(longlong *)(param_1 + 0x148), lVar3 != 0)) {
    lVar2 = ARemnantQuest::GetPrivateStaticClass();
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
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_14686c360) &&
         (_Init_thread_header(&DAT_14686c360), DAT_14686c360 == -1)) {
        FName::FName(&DAT_14686c358,L"ModifierManager",1);
        _Init_thread_footer(&DAT_14686c360);
      }
      lVar2 = DAT_14686c358;
      local_28 = *(longlong *)(lVar3 + 0x10);
      if (((int)DAT_14686c358 == 0) && ((int)((ulonglong)DAT_14686c358 >> 0x20) == 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        if (local_28 == 0) {
          local_20 = (longlong *)0x0;
        }
        else {
          local_20 = *(longlong **)(local_28 + 0x38);
        }
        local_18 = 0xffffffff;
        local_14 = 0x101;
        local_12 = 0;
        FUN_140c49360(&local_28);
        while (local_20 != (longlong *)0x0) {
          if (local_20[3] == lVar2) {
            lVar3 = (**(code **)(*local_20 + 0x378))
                              (local_20,*(int *)((longlong)local_20 + 0x44) + lVar3);
            if (lVar3 != 0) {
              lVar2 = FUN_14143c580();
              if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
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
          local_20 = (longlong *)local_20[5];
          FUN_140c49360(&local_28);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140c44970 FUN_140c44970 body=18 status=ok
// SIG undefined FUN_140c44970(void)

void FUN_140c44970(longlong param_1,undefined8 param_2)

{
  FUN_140c30ef0(param_2,param_1 + 0x80);
  return;
}



// FUNCTION 140c44990 FUN_140c44990 body=93 status=ok
// SIG undefined FUN_140c44990(void)

undefined8 FUN_140c44990(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_1407e2730();
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
      uVar4 = UCableComponent::GetAttachedActor(lVar1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 140c44a30 FUN_140c44a30 body=80 status=ok
// SIG undefined FUN_140c44a30(void)

undefined4 FUN_140c44a30(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
    lVar3 = (**(code **)(*plVar2 + 0x148))(plVar2);
    if (lVar3 != 0) {
      lVar3 = UWorld::GetGameState<APVPGameState>(lVar3);
      if (lVar3 != 0) {
        return *(undefined4 *)(lVar3 + 0x478);
      }
    }
  }
  return 0;
}



// FUNCTION 140c44a80 FUN_140c44a80 body=89 status=ok
// SIG undefined FUN_140c44a80(void)

longlong FUN_140c44a80(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x9c8);
  if (lVar1 != 0) {
    lVar3 = FUN_1413e48b0();
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



// FUNCTION 140c44ae0 FUN_140c44ae0 body=50 status=ok
// SIG undefined FUN_140c44ae0(void)

undefined8 FUN_140c44ae0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    lVar1 = UWorld::GetGameState<APVPGameState>(lVar1);
    if (lVar1 != 0) {
      return *(undefined8 *)(lVar1 + 0x608);
    }
  }
  return 0;
}



// FUNCTION 140c44b20 GetDefaultTextStyle body=8 status=ok
// SIG undefined GetDefaultTextStyle(void)

longlong FSlateTextLayout::GetDefaultTextStyle(longlong param_1)

{
  return param_1 + 0x130;
}



// FUNCTION 140c44b30 GetAllEntries body=8 status=ok
// SIG undefined GetAllEntries(void)

longlong UDynamicEntryBox::GetAllEntries(longlong param_1)

{
  return param_1 + 0x160;
}



// FUNCTION 140c44b40 FUN_140c44b40 body=302 status=ok
// SIG undefined FUN_140c44b40(void)

longlong FUN_140c44b40(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong local_48;
  byte local_40;
  undefined1 local_38 [16];
  longlong *local_28;
  longlong *local_20;
  ushort local_e;
  
  if ((param_2 == 0) || (lVar4 = (**(code **)(*param_1 + 0x148))(), lVar4 == 0)) {
    return 0;
  }
  plVar1 = param_1 + 0x35a;
  plVar5 = (longlong *)*plVar1;
  plVar2 = plVar5 + (int)param_1[0x35b];
  for (; plVar5 != plVar2; plVar5 = plVar5 + 1) {
    lVar4 = *plVar5;
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x458) == param_2)) goto LAB_140c44baf;
  }
  lVar4 = 0;
LAB_140c44baf:
  if (lVar4 == 0) {
    FActorSpawnParameters::FActorSpawnParameters(local_38);
    local_e = local_e | 2;
    local_28 = param_1;
    local_20 = param_1;
    uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    uVar7 = FUN_1413b8580();
    lVar4 = UWorld::SpawnActor(uVar6,uVar7,0,0,local_38);
    local_40 = local_40 & 0xfe;
    local_48 = param_2;
    FUN_140b31890(lVar4,&local_48);
    iVar3 = (int)param_1[0x35b];
    *(int *)(param_1 + 0x35b) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x1adc) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
    }
    *(longlong *)(*plVar1 + (longlong)iVar3 * 8) = lVar4;
  }
  return lVar4;
}



// FUNCTION 140c44c70 FUN_140c44c70 body=8 status=ok
// SIG undefined FUN_140c44c70(void)

undefined8 FUN_140c44c70(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x1e50);
}



// FUNCTION 140c44c80 FUN_140c44c80 body=33 status=ok
// SIG undefined FUN_140c44c80(void)

undefined8 FUN_140c44c80(longlong param_1,undefined8 param_2)

{
  FUN_140c4f4e0(param_2,*(undefined1 *)(param_1 + 0x4c9));
  return param_2;
}



// FUNCTION 140c44cb0 FUN_140c44cb0 body=177 status=ok
// SIG undefined FUN_140c44cb0(void)

undefined8 * FUN_140c44cb0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_18 [16];
  
  lVar2 = *(longlong *)(param_1 + 0x490);
  if (lVar2 != 0) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(longlong **)(lVar2 + 0x528) != (longlong *)0x0)) {
      cVar4 = (**(code **)(**(longlong **)(lVar2 + 0x528) + 0x8a8))();
      if (cVar4 != '\0') {
        puVar6 = (undefined8 *)FUN_1426e1ca0(*(undefined8 *)(lVar2 + 0x528),local_18);
        goto LAB_140c44d40;
      }
    }
  }
  puVar6 = (undefined8 *)FUN_142cc29c0(param_1,local_18);
LAB_140c44d40:
  uVar1 = *(undefined4 *)(puVar6 + 1);
  *param_2 = *puVar6;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 140c44d70 FUN_140c44d70 body=683 status=ok
// SIG undefined FUN_140c44d70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_140c44d70(longlong param_1,undefined4 *param_2,longlong param_3,undefined4 *param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar9 = *(longlong *)(param_1 + 0xf58);
  if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0x1cd0) == param_1 + -0xdc0)) {
    (**(code **)(*(longlong *)(lVar9 + 0xdc0) + 0x10))((longlong *)(lVar9 + 0xdc0),param_2);
    return param_2;
  }
  lVar9 = *(longlong *)(param_1 + -0xc58);
  if (lVar9 == 0) {
    local_88._0_4_ = 0;
    local_88._4_4_ = 0;
    local_88._8_4_ = 0;
    local_88._12_4_ = 0;
    local_78 = _DAT_14686bd10 & _DAT_14686bd20;
    uStack_74 = uRam000000014686bd14 & uRam000000014686bd24;
    uStack_70 = uRam000000014686bd18 & uRam000000014686bd28;
    uStack_6c = uRam000000014686bd1c & uRam000000014686bd2c;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = uRam000000014686bd1c;
  }
  else {
    local_88._0_4_ = *(undefined4 *)(lVar9 + 0x220);
    local_88._4_4_ = *(undefined4 *)(lVar9 + 0x224);
    local_88._8_4_ = *(undefined4 *)(lVar9 + 0x228);
    local_88._12_4_ = *(undefined4 *)(lVar9 + 0x22c);
    local_78 = *(uint *)(lVar9 + 0x230);
    uStack_74 = *(uint *)(lVar9 + 0x234);
    uStack_70 = *(uint *)(lVar9 + 0x238);
    uStack_6c = *(uint *)(lVar9 + 0x23c);
    uVar10 = *(undefined4 *)(lVar9 + 0x210);
    uVar11 = *(undefined4 *)(lVar9 + 0x214);
    uVar12 = *(undefined4 *)(lVar9 + 0x218);
    uVar13 = *(uint *)(lVar9 + 0x21c);
  }
  plVar1 = (longlong *)(param_1 + -0xdc0);
  local_98 = CONCAT44(uVar11,uVar10);
  uStack_90 = CONCAT44(uVar13,uVar12);
  cVar3 = (**(code **)(*plVar1 + 0x818))(plVar1);
  if ((cVar3 == '\0') || (cVar3 = (**(code **)(*plVar1 + 0x778))(plVar1), cVar3 == '\0')) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  plVar4 = (longlong *)(**(code **)(*(longlong *)(param_1 + -0x38) + 0xb8))(param_1 + -0x38,uVar6);
  if (plVar4 == (longlong *)0x0) {
LAB_140c44f80:
  }
  else {
    local_c8 = 0x65;
    if (param_3 != 0x65) {
      local_c8 = 0;
      uStack_c4 = 0;
      if (param_3 != 0) {
        cVar3 = (**(code **)(*plVar4 + 0x440))(plVar4,param_3);
        if (cVar3 == '\0') {
          lVar9 = *(longlong *)(param_1 + -0x930);
          if (lVar9 != 0) {
            lVar8 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (((bVar2) && (lVar9 = FUN_140cff1b0(lVar9), lVar9 != 0)) &&
               (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(lVar9,param_3,&local_98), cVar3 != '\0')
               ) {
              *param_4 = 0x3f800000;
            }
          }
        }
        else {
          puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x420))(plVar4,local_68,param_3,0);
          local_98 = *puVar5;
          uStack_90 = puVar5[1];
          local_88 = *(undefined1 (*) [16])(puVar5 + 2);
          local_78 = *(uint *)(puVar5 + 4);
          uStack_74 = *(uint *)((longlong)puVar5 + 0x24);
          uStack_70 = *(uint *)(puVar5 + 5);
          uStack_6c = *(uint *)((longlong)puVar5 + 0x2c);
          cVar3 = (**(code **)(*plVar1 + 0x780))(plVar1);
          if (cVar3 != '\0') {
            uVar6 = (**(code **)(*plVar1 + 0x788))(plVar1,local_b8);
            puVar7 = (undefined4 *)FRotator::Quaternion(uVar6,&local_c8);
            local_98._0_4_ = *puVar7;
            local_98._4_4_ = puVar7[1];
            uStack_90._0_4_ = puVar7[2];
            uStack_90._4_4_ = puVar7[3];
            goto LAB_140c44f85;
          }
        }
        goto LAB_140c44f80;
      }
    }
    uStack_c4 = 0;
    (**(code **)(*plVar1 + 0x648))(plVar1,&local_c8,local_b8);
    local_88._4_4_ = uStack_c4;
    local_88._0_4_ = local_c8;
    local_88._8_4_ = local_c0;
    local_88._12_4_ = 0;
    puVar7 = (undefined4 *)FRotator::Quaternion(local_b8,local_a8);
    local_98._0_4_ = *puVar7;
    local_98._4_4_ = puVar7[1];
    uStack_90._0_4_ = puVar7[2];
    uStack_90._4_4_ = puVar7[3];
  }
LAB_140c44f85:
  *param_2 = (undefined4)local_98;
  param_2[1] = local_98._4_4_;
  param_2[2] = (undefined4)uStack_90;
  param_2[3] = uStack_90._4_4_;
  *(undefined8 *)(param_2 + 4) = local_88._0_8_;
  *(undefined8 *)(param_2 + 6) = local_88._8_8_;
  *(ulonglong *)(param_2 + 8) = CONCAT44(uStack_74,local_78);
  *(ulonglong *)(param_2 + 10) = CONCAT44(uStack_6c,uStack_70);
  return param_2;
}



// FUNCTION 140c45020 FUN_140c45020 body=159 status=ok
// SIG undefined FUN_140c45020(void)

longlong FUN_140c45020(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
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
    if ((bVar2) && (lVar1 = *(longlong *)(lVar1 + 0x848), lVar1 != 0)) {
      lVar3 = FUN_1413ffe00();
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
        return lVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 140c450c0 FUN_140c450c0 body=704 status=ok
// SIG undefined FUN_140c450c0(void)

longlong * FUN_140c450c0(longlong param_1,longlong *param_2,char param_3)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  byte *pbVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  char local_res10 [8];
  char local_res18;
  uint local_res20;
  
  if (param_2 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  local_res18 = param_3;
  plVar5 = (longlong *)FUN_142f71d80();
  plVar13 = param_2;
  while (plVar13 != plVar5) {
    plVar13 = (longlong *)plVar13[6];
    if (plVar13 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  }
  iVar4 = FUN_140c42190();
  if ((iVar4 < 0) || (*(int *)(param_1 + 400) <= iVar4)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return (longlong *)0x0;
  }
  plVar5 = (longlong *)FUN_142f71d80();
  plVar13 = param_2;
  do {
    plVar12 = param_2;
    if (plVar13 == plVar5) goto LAB_140c45157;
    plVar13 = (longlong *)plVar13[6];
  } while (plVar13 != (longlong *)0x0);
  plVar12 = (longlong *)0x0;
LAB_140c45157:
  lVar10 = plVar12[0x1f];
  if (lVar10 == 0) {
    (**(code **)(*plVar12 + 0x368))(plVar12);
    lVar10 = plVar12[0x1f];
    if (lVar10 == 0) {
      return (longlong *)0x0;
    }
  }
  lVar6 = FUN_141437870();
  if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
      != lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return (longlong *)0x0;
  }
  bVar1 = *(byte *)(lVar10 + 0x4a8);
  local_res20 = (uint)bVar1;
  local_res10[0] = '\0';
  if (local_res20 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x120);
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(param_1);
    }
    pbVar7 = (byte *)FUN_140cb6000(local_res10,lVar6);
    if (bVar1 != *pbVar7) {
      return (longlong *)0x0;
    }
    local_res10[0] = FUN_140596bf0(lVar6);
    if (local_res10[0] == '\0') {
      return (longlong *)0x0;
    }
  }
  plVar13 = (longlong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar4 * 0x18);
  iVar4 = 0;
  if (0 < (int)plVar13[1]) {
    lVar6 = 0;
    do {
      plVar5 = (longlong *)(*plVar13 + lVar6);
      if (*plVar5 != 0) {
        plVar8 = (longlong *)FUN_142f71d80();
        plVar12 = (longlong *)*plVar5;
        for (plVar11 = plVar12; plVar11 != (longlong *)0x0; plVar11 = (longlong *)plVar11[6]) {
          if (plVar11 == plVar8) goto LAB_140c45260;
        }
      }
      plVar12 = (longlong *)0x0;
LAB_140c45260:
      plVar8 = (longlong *)FUN_142f71d80();
      plVar11 = param_2;
      do {
        plVar9 = param_2;
        if (plVar11 == plVar8) goto LAB_140c4527d;
        plVar11 = (longlong *)plVar11[6];
      } while (plVar11 != (longlong *)0x0);
      plVar9 = (longlong *)0x0;
LAB_140c4527d:
      if (plVar12 == plVar9) {
        if ((char)local_res20 == '\0') {
          return plVar5;
        }
        if (*(char *)((longlong)plVar5 + 0x2a) == local_res10[0]) {
          return plVar5;
        }
      }
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 0x30;
    } while (iVar4 < (int)plVar13[1]);
  }
  if (local_res18 == '\0') {
    return (longlong *)0x0;
  }
  plVar5 = (longlong *)FUN_142f5a280(lVar10);
  if (plVar5 == (longlong *)0x0) goto LAB_140c4532c;
  lVar10 = *(longlong *)(param_1 + 0x118);
  if (lVar10 == 0) {
LAB_140c45313:
    lVar10 = 0;
  }
  else {
    lVar6 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140c45313;
  }
  cVar3 = (**(code **)(*plVar5 + 0x280))(plVar5,lVar10);
  if (cVar3 == '\0') {
    return (longlong *)0x0;
  }
LAB_140c4532c:
  lVar10 = FUN_142f5cb40(param_1);
  if (lVar10 == 0) {
    return (longlong *)0x0;
  }
  lVar10 = FUN_142f5c680(lVar10,param_2);
  if (lVar10 != 0) {
    iVar4 = FUN_140c330c0(plVar13,1);
    plVar13 = (longlong *)((longlong)iVar4 * 0x30 + *plVar13);
    *plVar13 = *(longlong *)(lVar10 + 8);
    *(char *)((longlong)plVar13 + 0x2a) = local_res10[0];
    return plVar13;
  }
  return (longlong *)0x0;
}



// FUNCTION 140c453a0 FUN_140c453a0 body=8 status=ok
// SIG undefined FUN_140c453a0(void)

undefined8 FUN_140c453a0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xe70);
}



// FUNCTION 140c453f0 FUN_140c453f0 body=177 status=ok
// SIG undefined FUN_140c453f0(void)

undefined8 * FUN_140c453f0(undefined8 param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  lVar2 = FUN_140c46840(param_1,param_4);
  if (((lVar2 != 0) && (-1 < param_3)) && (param_3 < *(int *)(lVar2 + 0x10))) {
    lVar2 = *(longlong *)(lVar2 + 8);
    *param_2 = 0;
    iVar1 = *(int *)((longlong)param_3 * 0xe0 + 0xb8 + lVar2);
    _Src = *(void **)((longlong)param_3 * 0xe0 + 0xb0 + lVar2);
    *(int *)(param_2 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      return param_2;
    }
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 << 3);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140c454b0 FUN_140c454b0 body=64 status=ok
// SIG undefined FUN_140c454b0(void)

undefined8 FUN_140c454b0(undefined8 param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140c46840(param_1,param_3);
  if (((lVar1 != 0) && (-1 < param_2)) && (param_2 < *(int *)(lVar1 + 0x10))) {
    return *(undefined8 *)((longlong)param_2 * 0xe0 + 0xa8 + *(longlong *)(lVar1 + 8));
  }
  return 0;
}



// FUNCTION 140c454f0 FUN_140c454f0 body=2991 status=ok
// SIG undefined FUN_140c454f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c454f0(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_3e8 [32];
  undefined8 local_3c8;
  undefined1 local_3c0;
  undefined8 local_3b8;
  undefined1 local_3b0;
  int local_3a8;
  int local_3a4;
  undefined4 local_3a0 [2];
  undefined8 local_398;
  longlong local_390;
  undefined8 local_388;
  undefined4 *local_378;
  ulonglong *puStack_370;
  undefined4 local_368 [2];
  longlong local_360;
  undefined8 *local_358;
  undefined8 *local_350;
  undefined1 local_348;
  undefined1 local_340 [8];
  longlong *local_338;
  undefined1 local_328;
  undefined1 local_320 [8];
  longlong *local_318;
  undefined1 local_308;
  undefined1 local_300 [8];
  longlong *local_2f8;
  undefined8 local_2e8;
  longlong local_2e0;
  undefined8 local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined1 local_2a8 [16];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288 [16];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268 [16];
  undefined1 local_258 [8];
  longlong *local_250;
  undefined1 local_240 [8];
  longlong *local_238;
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
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [24];
  longlong local_148;
  longlong local_140;
  undefined1 local_128 [24];
  longlong local_110;
  longlong local_100;
  undefined4 local_e8 [2];
  longlong local_e0;
  longlong *local_d0;
  char local_c0;
  ulonglong local_b8;
  longlong local_b0;
  longlong *local_a0;
  char local_90;
  ulonglong local_88;
  longlong local_80;
  longlong *local_70;
  char local_60;
  ulonglong local_58 [3];
  
  local_58[0] = DAT_1468387a8 ^ (ulonglong)auStack_3e8;
  iVar13 = (int)param_3[1];
  local_350 = param_5;
  local_398 = param_2;
  local_358 = param_4;
  if (iVar13 != 0) {
    plVar11 = (longlong *)(*param_3 + 0x10);
    do {
      plVar3 = (longlong *)*plVar11;
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
      plVar11 = plVar11 + 4;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  iVar13 = 0;
  iVar5 = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_3,0);
  }
  puVar9 = local_358;
  if ((undefined *)*local_358 != &DAT_14433ac88) {
    *(undefined4 *)(local_358 + 1) = 0;
    iVar6 = iVar13;
    if (*(int *)((longlong)local_358 + 0xc) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(local_358);
      iVar6 = *(int *)(puVar9 + 1);
    }
    *(int *)(puVar9 + 1) = iVar6;
    if (*(int *)((longlong)puVar9 + 0xc) < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar9);
    }
  }
  if ((undefined *)*param_5 != &DAT_14433ac8c) {
    *(undefined4 *)(param_5 + 1) = 0;
    if (*(int *)((longlong)param_5 + 0xc) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_5);
      iVar13 = *(int *)(param_5 + 1);
    }
    *(int *)(param_5 + 1) = iVar13;
    if (*(int *)((longlong)param_5 + 0xc) < iVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5);
    }
  }
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (cVar4 = FUN_142dd3360(*(longlong *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x10)),
     cVar4 == '\0')) {
    iVar13 = FUN_142dce8d0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x10));
    uVar8 = local_398;
    lVar12 = (longlong)iVar13;
    lVar7 = FUN_140c46840(param_1,local_398);
    if (lVar7 == 0) {
      iVar5 = FUN_140c39290(param_1,param_1 + 0x140);
      iVar6 = FUN_140c39110(param_1,param_1 + 0x178);
      local_3a4 = FUN_140c391d0(param_1,param_1 + 0x1b0);
      local_360 = *(longlong *)(param_1 + 0x1e8);
    }
    else {
      lVar7 = FUN_140c46840(param_1,uVar8);
      if (((lVar7 != 0) && (-1 < iVar13)) && (iVar13 < *(int *)(lVar7 + 0x10))) {
        iVar5 = FUN_140c39290(param_1,lVar12 * 0xe0 + *(longlong *)(lVar7 + 8));
      }
      lVar7 = FUN_140c46840(param_1,local_398);
      if (((lVar7 == 0) || (iVar13 < 0)) || (*(int *)(lVar7 + 0x10) <= iVar13)) {
        local_3a8 = 0;
      }
      else {
        local_3a8 = FUN_140c39110(param_1,*(longlong *)(lVar7 + 8) + 0x38 + lVar12 * 0xe0);
      }
      lVar7 = FUN_140c46840(param_1,local_398);
      if (((lVar7 == 0) || (iVar13 < 0)) || (*(int *)(lVar7 + 0x10) <= iVar13)) {
        local_3a4 = 0;
      }
      else {
        local_3a4 = FUN_140c391d0(param_1,*(longlong *)(lVar7 + 8) + 0x70 + lVar12 * 0xe0);
      }
      lVar7 = FUN_140c46840(param_1,local_398);
      iVar6 = local_3a8;
      if (((lVar7 == 0) || (iVar13 < 0)) || (*(int *)(lVar7 + 0x10) <= iVar13)) {
        local_360 = 0;
      }
      else {
        local_360 = *(longlong *)(*(longlong *)(lVar7 + 8) + 0xa8 + lVar12 * 0xe0);
      }
    }
    if (0 < iVar5) {
      local_328 = 2;
      uVar8 = FUN_1404b03b0();
      FText::FText(local_320,uVar8);
      local_328 = 2;
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_1f8,L"{0} XP",L"OakChallenges",L"ExperienceReward");
      puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_180,uVar8);
      local_80 = (longlong)iVar5;
      local_378 = (undefined4 *)&local_88;
      puStack_370 = local_58;
      local_2e8 = *puVar9;
      local_2e0 = puVar9[1];
      local_88._0_4_ = 0;
      local_60 = '\0';
      if (local_2e0 != 0) {
        LOCK();
        *(int *)(local_2e0 + 8) = *(int *)(local_2e0 + 8) + 1;
        UNLOCK();
      }
      local_2b8 = (ulonglong *)local_378;
      uStack_2b0 = puStack_370;
      uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_2a8,&local_2b8);
      uVar8 = FText::Format(local_210,&local_2e8,uVar8);
      FText::FText(local_258,uVar8);
      if (local_208 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_208 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_208)(local_208);
          LOCK();
          piVar2 = (int *)((longlong)local_208 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_208 + 8))(local_208,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_2a8);
      if ((local_60 != '\0') && (local_60 = '\0', local_70 != (longlong *)0x0)) {
        LOCK();
        plVar11 = local_70 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar2 = (int *)((longlong)local_70 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
      plVar11 = (longlong *)puVar9[1];
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar11 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      FText::operator=(local_320,local_258);
      if (local_250 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_250 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_250)(local_250);
          LOCK();
          piVar2 = (int *)((longlong)local_250 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_250 + 8))(local_250,1);
          }
        }
      }
      if (local_1f0 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_1f0 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_1f0)(local_1f0);
          LOCK();
          piVar2 = (int *)((longlong)local_1f0 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_1f0 + 8))(local_1f0,1);
          }
        }
      }
      iVar13 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar13 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar13 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_3,iVar13);
      }
      puVar10 = (undefined1 *)((longlong)iVar13 * 0x20 + *param_3);
      *puVar10 = local_328;
      FText::FText(puVar10 + 8,local_320);
      if (local_318 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_318 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_318)(local_318);
          LOCK();
          piVar2 = (int *)((longlong)local_318 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_318 + 8))(local_318,1);
          }
        }
      }
    }
    if (0 < iVar6) {
      local_308 = 2;
      uVar8 = FUN_1404b03b0();
      FText::FText(local_300,uVar8);
      local_308 = 0;
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_1c8,&DAT_14433af58,L"OakChallenges",L"CashReward");
      puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_170,uVar8);
      local_e0 = (longlong)iVar6;
      local_378 = local_e8;
      puStack_370 = &local_b8;
      local_2d8 = *puVar9;
      local_2d0 = puVar9[1];
      local_e8[0] = 0;
      local_c0 = '\0';
      if (local_2d0 != 0) {
        LOCK();
        *(int *)(local_2d0 + 8) = *(int *)(local_2d0 + 8) + 1;
        UNLOCK();
      }
      local_298 = (ulonglong *)local_378;
      uStack_290 = puStack_370;
      uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_288,&local_298);
      uVar8 = FText::Format(local_1e0,&local_2d8,uVar8);
      FText::FText(local_240,uVar8);
      if (local_1d8 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_1d8 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_1d8)(local_1d8);
          LOCK();
          piVar2 = (int *)((longlong)local_1d8 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_1d8 + 8))(local_1d8,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_288);
      if ((local_c0 != '\0') && (local_c0 = '\0', local_d0 != (longlong *)0x0)) {
        LOCK();
        plVar11 = local_d0 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar2 = (int *)((longlong)local_d0 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_d0 + 8))(local_d0,1);
          }
        }
      }
      plVar11 = (longlong *)puVar9[1];
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar11 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      FText::operator=(local_300,local_240);
      if (local_238 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_238 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_238)(local_238);
          LOCK();
          piVar2 = (int *)((longlong)local_238 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_238 + 8))(local_238,1);
          }
        }
      }
      if (local_1c0 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_1c0 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_1c0)(local_1c0);
          LOCK();
          piVar2 = (int *)((longlong)local_1c0 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_1c0 + 8))(local_1c0,1);
          }
        }
      }
      iVar13 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar13 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar13 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_3,iVar13);
      }
      puVar10 = (undefined1 *)((longlong)iVar13 * 0x20 + *param_3);
      *puVar10 = local_308;
      FText::FText(puVar10 + 8,local_300);
      if (local_2f8 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_2f8 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_2f8)(local_2f8);
          LOCK();
          piVar2 = (int *)((longlong)local_2f8 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_2f8 + 8))(local_2f8,1);
          }
        }
      }
    }
    lVar7 = (longlong)local_3a4;
    if (local_3a4 != 0) {
      local_348 = 2;
      uVar8 = FUN_1404b03b0();
      FText::FText(local_340,uVar8);
      local_348 = 1;
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_198,&DAT_14433afa0,L"OakChallenges",L"EridiumReward");
      puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_160,uVar8);
      local_b8._0_4_ = 0;
      local_378 = (undefined4 *)&local_b8;
      local_90 = '\0';
      puStack_370 = &local_88;
      local_2c8 = *puVar9;
      local_2c0 = puVar9[1];
      if (local_2c0 != 0) {
        LOCK();
        *(int *)(local_2c0 + 8) = *(int *)(local_2c0 + 8) + 1;
        UNLOCK();
      }
      local_b0 = lVar7;
      local_278 = (ulonglong *)local_378;
      uStack_270 = puStack_370;
      uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_268,&local_278);
      uVar8 = FText::Format(local_1b0,&local_2c8,uVar8);
      FText::FText(local_228,uVar8);
      if (local_1a8 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_1a8 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_1a8)(local_1a8);
          LOCK();
          piVar2 = (int *)((longlong)local_1a8 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_1a8 + 8))(local_1a8,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_268);
      if ((local_90 != '\0') && (local_90 = '\0', local_a0 != (longlong *)0x0)) {
        LOCK();
        plVar11 = local_a0 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar2 = (int *)((longlong)local_a0 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
      plVar11 = (longlong *)puVar9[1];
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar11 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      FText::operator=(local_340,local_228);
      if (local_220 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_220 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_220)(local_220);
          LOCK();
          piVar2 = (int *)((longlong)local_220 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_220 + 8))(local_220,1);
          }
        }
      }
      if (local_190 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_190 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_190)(local_190);
          LOCK();
          piVar2 = (int *)((longlong)local_190 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_190 + 8))(local_190,1);
          }
        }
      }
      cVar4 = FText::IsEmpty(local_340);
      if (cVar4 == '\0') {
        iVar13 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar13 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar13 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(param_3,iVar13);
        }
        puVar10 = (undefined1 *)((longlong)iVar13 * 0x20 + *param_3);
        *puVar10 = local_348;
        FText::FText(puVar10 + 8,local_340);
      }
      if (local_338 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_338 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_338)(local_338);
          LOCK();
          piVar2 = (int *)((longlong)local_338 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*local_338 + 8))(local_338,1);
          }
        }
      }
    }
    lVar7 = local_360;
    if (local_360 != 0) {
      local_368[0] = 0;
      local_3a0[0] = 0;
      FUN_142ffe0f0(local_360,local_398,local_368,local_3a0);
      local_3b0 = 0;
      local_3b8 = 0;
      local_3c0 = 0;
      local_3c8 = 0;
      local_390 = 0;
      local_388 = 0;
      FUN_143013fe0(&local_390,lVar7,local_3a0[0],local_398);
      if (0 < (int)local_388) {
        FUN_1409f3dd0(&local_148,local_390);
        if (((local_148 != 0) && (local_140 != 0)) && (*(longlong *)(local_140 + 0xb8) != 0)) {
          FString::operator=(local_358,local_148 + 0xe0);
          FString::operator=(local_350,*(longlong *)(local_140 + 0xb8) + 0x58);
        }
        if (local_100 != 0) {
          FMemory::Free();
        }
        if (local_110 != 0) {
          FMemory::Free();
        }
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (local_128);
      }
      if ((int)local_388 != 0) {
        plVar11 = (longlong *)(local_390 + 0x38);
        iVar13 = (int)local_388;
        do {
          if (plVar11[2] != 0) {
            FMemory::Free();
          }
          if (*plVar11 != 0) {
            FMemory::Free();
          }
          TArray<FNamedInterfaceDef,FDefaultAllocator>::
          ~TArray<FNamedInterfaceDef,FDefaultAllocator>(plVar11 + -3);
          plVar11 = plVar11 + 0xc;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
      if (local_390 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140c460a0 FUN_140c460a0 body=177 status=ok
// SIG undefined FUN_140c460a0(void)

undefined8 * FUN_140c460a0(undefined8 param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  lVar2 = FUN_140c46840(param_1,param_4);
  if (((lVar2 != 0) && (-1 < param_3)) && (param_3 < *(int *)(lVar2 + 0x10))) {
    lVar2 = *(longlong *)(lVar2 + 8);
    *param_2 = 0;
    iVar1 = *(int *)((longlong)param_3 * 0xe0 + 200 + lVar2);
    _Src = *(void **)((longlong)param_3 * 0xe0 + 0xc0 + lVar2);
    *(int *)(param_2 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      return param_2;
    }
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 << 3);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140c46160 FUN_140c46160 body=177 status=ok
// SIG undefined FUN_140c46160(void)

undefined8 * FUN_140c46160(undefined8 param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  lVar2 = FUN_140c46840(param_1,param_4);
  if (((lVar2 != 0) && (-1 < param_3)) && (param_3 < *(int *)(lVar2 + 0x10))) {
    lVar2 = *(longlong *)(lVar2 + 8);
    *param_2 = 0;
    iVar1 = *(int *)((longlong)param_3 * 0xe0 + 0xd8 + lVar2);
    _Src = *(void **)((longlong)param_3 * 0xe0 + 0xd0 + lVar2);
    *(int *)(param_2 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      return param_2;
    }
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 << 3);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140c46220 FUN_140c46220 body=282 status=ok
// SIG undefined FUN_140c46220(void)

void FUN_140c46220(undefined8 param_1,undefined1 param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  FUN_142233820();
  lVar6 = FUN_140c430a0(param_1,0);
  if (lVar6 != 0) {
    FUN_142ffe1a0(lVar6,param_2,param_3);
  }
  lVar6 = FUN_142ceefa0(param_1);
  if (lVar6 != 0) {
    lVar7 = FUN_1414e0f70();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((bVar4) && (plVar2 = *(longlong **)(lVar6 + 0x6d8), plVar2 != (longlong *)0x0)) &&
       (cVar5 = FUN_14122f2b0(plVar2), cVar5 == '\0')) {
      plVar3 = (longlong *)*param_3;
      iVar1 = (int)param_3[1];
      for (plVar8 = plVar3; plVar8 != plVar3 + iVar1; plVar8 = plVar8 + 1) {
        if ((longlong *)*plVar8 == plVar2) {
          if ((int)((longlong)plVar8 - (longlong)plVar3 >> 3) != -1) goto LAB_140c46312;
          break;
        }
      }
      *(int *)(param_3 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
      }
      *(longlong **)(*param_3 + (longlong)iVar1 * 8) = plVar2;
LAB_140c46312:
      (**(code **)(*plVar2 + 0x650))(plVar2,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 140c46340 FUN_140c46340 body=98 status=ok
// SIG undefined FUN_140c46340(void)

undefined8 * FUN_140c46340(longlong param_1,undefined8 *param_2)

{
  if ((*(char *)(param_1 + 0x4c8) == '\0') && (*(char *)(param_1 + 0x4d0) != '\0')) {
    *param_2 = 0;
    param_2[1] = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,L"(Ambient Music)",0x20);
    return param_2;
  }
  FUN_140c55cb0(param_2);
  return param_2;
}



// FUNCTION 140c463b0 FUN_140c463b0 body=77 status=ok
// SIG undefined FUN_140c463b0(void)

undefined8 * FUN_140c463b0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + -0x4b8) != 0) {
    FUN_142d1bf20(*(longlong *)(param_1 + -0x4b8),param_1 + 0x508);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x510);
  uVar1 = *(undefined8 *)(param_1 + 0x518);
  *param_2 = *(undefined8 *)(param_1 + 0x508);
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  return param_2;
}



// FUNCTION 140c46400 FUN_140c46400 body=149 status=ok
// SIG undefined FUN_140c46400(void)

undefined8 FUN_140c46400(longlong param_1,byte param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
    lVar2 = *(longlong *)(param_1 + 0xc0);
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      lVar2 = param_1 + 0xb8;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 200) - 1U & (ulonglong)param_2) * 4);
    if (iVar1 != -1) {
      do {
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar1 * 0x18);
        if (*(byte *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar1 * 0x18) == param_2) {
          if (iVar1 != -1) goto LAB_140c46473;
          break;
        }
        iVar1 = *(int *)(puVar4 + 2);
      } while (iVar1 != -1);
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_140c46473:
  puVar3 = puVar4 + 1;
  if (puVar4 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
  return *puVar3;
}



// FUNCTION 140c464a0 FUN_140c464a0 body=134 status=ok
// SIG undefined FUN_140c464a0(void)

undefined8 FUN_140c464a0(longlong param_1,byte param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    if (*(longlong *)(param_1 + 0x70) == 0) {
      lVar2 = param_1 + 0x68;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0x78) - 1U & (ulonglong)param_2) * 4);
    if (iVar1 != -1) {
      do {
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 0x18);
        if (*(byte *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 0x18) == param_2) {
          if (iVar1 != -1) goto LAB_140c46504;
          break;
        }
        iVar1 = *(int *)(puVar4 + 2);
      } while (iVar1 != -1);
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_140c46504:
  puVar3 = puVar4 + 1;
  if (puVar4 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
  return *puVar3;
}



// FUNCTION 140c46530 FUN_140c46530 body=102 status=ok
// SIG undefined FUN_140c46530(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140c46530(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = *(longlong *)(param_1 + -0xc30);
  if (lVar1 == 0) {
    local_18 = _DAT_1468b5d90;
    local_10 = DAT_1468b5d98;
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x220);
    local_10 = *(undefined4 *)(lVar1 + 0x228);
  }
  *param_2 = local_18;
  *(undefined4 *)(param_2 + 1) = local_10;
  return param_2;
}



// FUNCTION 140c465b0 FUN_140c465b0 body=312 status=ok
// SIG undefined FUN_140c465b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140c465b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  uint local_28;
  char local_24;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if ((*(longlong *)(param_1 + 0x340) == 0) ||
     (lVar4 = (**(code **)(*(longlong *)(param_1 + -0xd98) + 0x148))(param_1 + -0xd98), lVar4 == 0))
  {
    return 0xffffffff;
  }
  uVar5 = (**(code **)(*(longlong *)(param_1 + -0xd98) + 0x148))(param_1 + -0xd98);
  lVar4 = UWorld::GetGameState<APVPGameState>(uVar5);
  if (lVar4 == 0) {
    return 0xffffffff;
  }
  if (param_2 == 0) {
    return 0xffffffff;
  }
  lVar1 = *(longlong *)(param_2 + 0x118);
  if (lVar1 != 0) {
    lVar6 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) &&
       (iVar3 = (**(code **)(*(longlong *)(lVar1 + 0x8b0) + 0x20))
                          ((longlong *)(lVar1 + 0x8b0),param_1 + -0xd98), iVar3 == 0))
    goto LAB_140c466cf;
  }
  FUN_140cd8d10(lVar4,&local_28,param_2,*(undefined8 *)(param_1 + 0x340));
  if (local_24 != '\0') {
    return (ulonglong)local_28;
  }
LAB_140c466cf:
  uVar7 = (**(code **)(**(longlong **)(param_1 + 0x340) + 0x408))();
  return uVar7;
}



// FUNCTION 140c466f0 FUN_140c466f0 body=295 status=ok
// SIG undefined FUN_140c466f0(void)

undefined8 FUN_140c466f0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  bVar6 = *(longlong *)(param_1 + -0x490) == 0;
  if (bVar6) {
    uVar5 = (**(code **)(*(longlong *)(param_1 + -0xd98) + 0x5e0))
                      ((longlong *)(param_1 + -0xd98),local_48);
    uVar5 = FText::FromString(local_38,uVar5);
  }
  else {
    uVar5 = FUN_142dd0500(*(longlong *)(param_1 + -0x490),local_20);
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
  if (bVar6) {
    if (local_48[0] != 0) {
      FMemory::Free();
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



// FUNCTION 140c46840 FUN_140c46840 body=362 status=ok
// SIG undefined FUN_140c46840(void)

byte * FUN_140c46840(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  byte *pbVar8;
  ulonglong uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined1 local_res8 [8];
  
  pbVar11 = (byte *)0x0;
  if ((param_2 == (longlong *)0x0) || (lVar6 = (**(code **)(*param_2 + 0x148))(param_2), lVar6 == 0)
     ) {
    bVar3 = 0;
    goto LAB_140c4693c;
  }
  lVar1 = param_2[0x193];
  if (lVar1 == 0) {
LAB_140c468cf:
    bVar3 = 0;
  }
  else {
    lVar7 = UBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140c468cf;
    bVar3 = FUN_140e20fb0(lVar1,param_1);
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 0x58) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_140b81380(*(longlong *)(DAT_146b33f38 + 0x58),*(undefined8 *)(param_1 + 0x10));
  }
  pbVar8 = (byte *)FUN_140cb6000(local_res8,lVar6);
  if ((uVar5 == *pbVar8) && (bVar4 = FUN_140596bf0(lVar6), bVar3 <= bVar4)) {
    bVar3 = bVar4;
  }
LAB_140c4693c:
  uVar5 = *(uint *)(param_1 + 0x238);
  uVar10 = 0xffffffff;
  if (0 < (int)uVar5) {
    pbVar8 = *(byte **)(param_1 + 0x230);
    uVar9 = (ulonglong)uVar5;
    pbVar12 = pbVar8;
    do {
      bVar4 = *pbVar8;
      if (((int)uVar10 < (int)(uint)bVar4) && (bVar4 <= bVar3)) {
        uVar10 = (uint)bVar4;
        pbVar11 = pbVar12;
      }
      pbVar12 = pbVar12 + 0x18;
      pbVar8 = pbVar8 + 0x18;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    if ((pbVar11 == (byte *)0x0) && (0 < (int)uVar5)) {
      return *(byte **)(param_1 + 0x230);
    }
  }
  return pbVar11;
}



// FUNCTION 140c469b0 FUN_140c469b0 body=12 status=ok
// SIG undefined FUN_140c469b0(void)

void FUN_140c469b0(longlong param_1)

{
  FUN_140e7f970(param_1 + 0x1430);
  return;
}



// FUNCTION 140c469d0 FUN_140c469d0 body=30 status=ok
// SIG undefined FUN_140c469d0(void)

longlong FUN_140c469d0(longlong param_1)

{
  longlong lVar1;
  uint7 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xe68);
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x4b4) & 0x800) != 0)) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 140c469f0 FUN_140c469f0 body=27 status=ok
// SIG undefined FUN_140c469f0(void)

longlong FUN_140c469f0(longlong param_1)

{
  longlong lVar1;
  uint7 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xe68);
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x2ac0) & 1) != 0)) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 140c46a10 FUN_140c46a10 body=89 status=ok
// SIG undefined FUN_140c46a10(void)

undefined8 FUN_140c46a10(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x1518;
  cVar1 = FUN_140e96340(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  if ((param_2 == 0) && (param_2 = FUN_140e7eef0(param_1,0), param_2 == 0)) {
    return 0;
  }
  uVar2 = FUN_140e83520(param_1,param_2);
  return uVar2;
}



// FUNCTION 140c46a90 FUN_140c46a90 body=58 status=ok
// SIG undefined FUN_140c46a90(void)

undefined8 * FUN_140c46a90(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140e7eef0(param_1 + 0x790,param_3);
  if (lVar1 != 0) {
    *param_2 = *(undefined8 *)(lVar1 + 0x30);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 140c46ad0 FUN_140c46ad0 body=111 status=ok
// SIG undefined FUN_140c46ad0(void)

undefined8 * FUN_140c46ad0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  plVar1 = (longlong *)(param_1 + -0xd88);
  cVar2 = (**(code **)(*plVar1 + 0x780))(plVar1);
  if (cVar2 != '\0') {
    (**(code **)(*plVar1 + 0x648))(plVar1,&local_28,local_18);
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined1 *)((longlong)param_2 + 0xc) = 1;
    return param_2;
  }
  *(undefined1 *)((longlong)param_2 + 0xc) = 0;
  return param_2;
}



// FUNCTION 140c46b40 FUN_140c46b40 body=89 status=ok
// SIG undefined FUN_140c46b40(void)

longlong FUN_140c46b40(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x1420);
  if (lVar2 == 0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
      lVar2 = *(longlong *)(param_1 + 0x1420);
    }
    if ((*(longlong *)(DAT_146b33f38 + 0x58) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2a8), lVar1 != 0)) {
      *(longlong *)(param_1 + 0x1420) = lVar1;
      lVar2 = lVar1;
    }
  }
  return lVar2;
}



// FUNCTION 140c46ba0 FUN_140c46ba0 body=61 status=ok
// SIG undefined FUN_140c46ba0(void)

void FUN_140c46ba0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0xd88) + 0xf0))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140c46bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x900))(plVar1,param_3,0);
    return;
  }
  return;
}



// FUNCTION 140c46be0 FUN_140c46be0 body=150 status=ok
// SIG undefined FUN_140c46be0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140c46be0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [16];
  
  uVar1 = DAT_1468b5d98;
  lVar2 = *(longlong *)(param_1 + 0x490);
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = uVar1;
  if (lVar2 != 0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(longlong *)(lVar2 + 0x1430) != 0)) {
      puVar5 = (undefined8 *)FUN_142fcb530(*(longlong *)(lVar2 + 0x1430),local_18);
      uVar1 = *(undefined4 *)(puVar5 + 1);
      *param_2 = *puVar5;
      *(undefined4 *)(param_2 + 1) = uVar1;
    }
  }
  return param_2;
}



// FUNCTION 140c46c80 FUN_140c46c80 body=150 status=ok
// SIG undefined FUN_140c46c80(void)

undefined8 * FUN_140c46c80(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [16];
  
  uVar1 = DAT_1468b5da8;
  lVar2 = *(longlong *)(param_1 + 0x490);
  *param_2 = DAT_1468b5da0;
  *(undefined4 *)(param_2 + 1) = uVar1;
  if (lVar2 != 0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(longlong *)(lVar2 + 0x1430) != 0)) {
      puVar5 = (undefined8 *)FUN_142fcb590(*(longlong *)(lVar2 + 0x1430),local_18);
      uVar1 = *(undefined4 *)(puVar5 + 1);
      *param_2 = *puVar5;
      *(undefined4 *)(param_2 + 1) = uVar1;
    }
  }
  return param_2;
}



// FUNCTION 140c46d30 FUN_140c46d30 body=224 status=ok
// SIG undefined FUN_140c46d30(void)

void FUN_140c46d30(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  uVar6 = 0;
  plVar7 = *(longlong **)(param_1 + 0x13e8);
  uVar5 = (longlong)*(int *)(param_1 + 0x13f0) & 0x1fffffffffffffff;
  if (plVar7 + *(int *)(param_1 + 0x13f0) < plVar7) {
    uVar5 = uVar6;
  }
  if (uVar5 != 0) {
    param_1 = param_1 + 0x1518;
    uVar8 = uVar6;
    do {
      lVar2 = *plVar7;
      cVar1 = FUN_140e96340(param_1);
      uVar3 = uVar6;
      if ((cVar1 != '\0') && ((lVar2 != 0 || (lVar2 = FUN_140e7eef0(param_1,0), lVar2 != 0)))) {
        uVar3 = FUN_140e83520(param_1);
      }
      lVar2 = param_2[1];
      iVar4 = (int)lVar2 + 1;
      *(int *)(param_2 + 1) = iVar4;
      if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2);
      }
      plVar7 = plVar7 + 1;
      uVar8 = uVar8 + 1;
      *(ulonglong *)(*param_2 + (longlong)(int)lVar2 * 8) = uVar3;
    } while (uVar8 != uVar5);
  }
  return;
}



// FUNCTION 140c46e10 FUN_140c46e10 body=93 status=ok
// SIG undefined FUN_140c46e10(void)

ulonglong FUN_140c46e10(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x490);
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      in_RAX = uVar4 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      uVar4 = FUN_140d00470(lVar2);
      return uVar4;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140c46e70 FUN_140c46e70 body=711 status=ok
// SIG undefined FUN_140c46e70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c46e70(longlong param_1)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
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
  if ((*(char *)(param_1 + 0x128) == '\x03') && (lVar8 = *(longlong *)(param_1 + 0x490), lVar8 != 0)
     ) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      cVar3 = FUN_140d14f90(lVar8);
      if (cVar3 == '\0') {
        FUN_140d086a0(lVar8);
        lVar8 = (**(code **)(*(longlong *)(param_1 + 0xd80) + 0x18))();
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
        lVar5 = *(longlong *)(DAT_146b33f38 + 0x58);
        if ((lVar5 != 0) && (lVar8 != 0)) {
          fVar1 = *(float *)(lVar5 + 0x220);
          iVar4 = FUN_142ff7c90(lVar8,*(undefined8 *)(lVar5 + 0x2c0));
          iVar4 = (int)((float)iVar4 * fVar1);
          if (*(char *)(lVar8 + 0x369) == '\0') {
            FUN_143011ec0(lVar8,iVar4,*(undefined8 *)(lVar5 + 0x2c0));
          }
          FUN_1413f8ce0(param_1,iVar4);
        }
      }
      else {
        local_b8 = 0;
        local_b0 = FUN_140d16520;
        uStack_a8 = 0;
        uVar6 = AActor::GetWorldTimerManager(param_1);
        plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar7 + 1,lVar8);
          plVar7[2] = (longlong)local_b0;
          plVar7[3] = CONCAT44(uStack_a4,uStack_a8);
          lVar8 = FDelegateHandle::GenerateNewID();
          plVar7[5] = lVar8;
          *plVar7 = (longlong)&PTR_FUN_143f77bd0;
        }
        local_98 = 0;
        local_90 = 0;
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x30))(plVar7,&local_98);
        }
        FWeakObjectPtr::operator=(local_88,0);
        local_c0 = 0xbf800000;
        local_c8 = 0;
        local_80 = 0;
        local_48 = (longlong *)0x0;
        local_38 = 0;
        local_78 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar6,&local_b8,&local_98,0x3c23d70a);
        if (local_38 != 0) {
          plVar9 = local_68;
          if (local_48 != (longlong *)0x0) {
            plVar9 = local_48;
          }
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x10))(plVar9,0);
          }
        }
        if (local_48 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x28))(plVar7,0);
          lVar8 = FMemory::Realloc(plVar7,0,0);
          if (lVar8 != 0) {
            FMemory::Free(lVar8);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c47160 FUN_140c47160 body=126 status=ok
// SIG undefined FUN_140c47160(void)

void FUN_140c47160(longlong param_1)

{
  float fVar1;
  
  if ((*(char *)(param_1 + 0x128) == '\x03') && (2 < *(byte *)(param_1 + 0xec0))) {
    *(undefined1 *)(param_1 + 0xec1) = 0;
    if (*(longlong *)(param_1 + 0x910) != 0) {
      fVar1 = (float)FUN_142d19870();
      if (fVar1 < 1.0) {
        FUN_142d28970(*(undefined8 *)(param_1 + 0x910));
      }
    }
    if (*(char *)(param_1 + 0xec0) != '\0') {
      *(undefined1 *)(param_1 + 0xec0) = 0;
      (**(code **)(*(longlong *)(param_1 + 0xda8) + 0x48))();
    }
    FUN_140c57f20(param_1,0);
    return;
  }
  return;
}



// FUNCTION 140c471e0 FUN_140c471e0 body=256 status=ok
// SIG undefined FUN_140c471e0(void)

void FUN_140c471e0(longlong param_1,char param_2,longlong *param_3)

{
  undefined8 local_res8;
  longlong *local_res18;
  
  if ((((*(char *)(param_1 + 0x128) == '\x03') && (param_3 != (longlong *)0x0)) &&
      ((*(byte *)((longlong)param_3 + 0x4fe) & 4) != 0)) && ((char)param_3[0x25] == '\x03')) {
    local_res18 = param_3;
    if (param_2 == '\0') {
      if (((*(byte *)(param_1 + 0x80) & 1) != 0) && ((*(byte *)(param_3 + 0x10) & 1) != 0)) {
        (**(code **)(*param_3 + 0x600))(param_3);
        (**(code **)(*param_3 + 0x310))(param_3,0);
      }
      TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x13b0,&local_res18);
    }
    else {
      local_res8 = 0;
      TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x13b0,&local_res8);
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x13b0,&local_res18);
      if (((*(byte *)(param_1 + 0x80) & 1) != 0) && ((*(byte *)(param_3 + 0x10) & 1) == 0)) {
        (**(code **)(*param_3 + 0x600))(param_3);
                    /* WARNING: Could not recover jumptable at 0x000140c47290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_3 + 0x310))(param_3,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140c472e0 FUN_140c472e0 body=773 status=ok
// SIG undefined FUN_140c472e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c472e0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_104;
  code *local_f8 [2];
  longlong local_e8 [4];
  longlong *local_c8;
  int local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  plVar4 = (longlong *)param_1[0x9a];
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x838))(plVar4,0);
    (**(code **)(*plVar4 + 0x830))(plVar4,0,2);
    (**(code **)(*plVar4 + 0x830))(plVar4,1,2);
  }
  if (param_1[0x120] != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_14686c4c0) {
      _Init_thread_header(&DAT_14686c4c0);
      if (DAT_14686c4c0 == -1) {
        FName::FName(&DAT_14686c4b8,L"CharacterIsDead",1);
        _Init_thread_footer(&DAT_14686c4c0);
      }
    }
    FUN_142dafbc0(param_1[0x120] + 0x8b0,&DAT_14686c4b8);
    FUN_142dafbc0(param_1[0x120] + 0x948,&DAT_14686c4b8);
  }
  uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar2 = FUN_142c1f5b0(uVar1);
  if (lVar2 != 0) {
    FUN_142c28cb0(lVar2,param_1,0);
  }
  if ((char)param_1[0x25] == '\x03') {
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar2 != 0) {
      FWeakObjectPtr::operator=(&local_108,param_1);
      local_c8 = (longlong *)0x0;
      local_b8 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_e8);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_CopyToEmptyStorage_143fcfe50;
        *(undefined4 *)(puVar3 + 1) = local_108;
        *(undefined4 *)((longlong)puVar3 + 0xc) = local_104;
      }
      local_f8[0] = FUN_140c39510;
      if (*(longlong *)(lVar2 + 400) == 0) {
        uVar1 = *(undefined8 *)(lVar2 + 0x3f8);
      }
      else {
        uVar1 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
      }
      local_a8 = 0;
      local_a0 = 0;
      FWeakObjectPtr::operator=(local_98,0);
      local_90 = 0;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_88,local_f8);
      FUN_142880af0(uVar1,&local_a8);
      if (local_48 != 0) {
        plVar4 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar4 = local_58;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
      if (local_b8 != 0) {
        plVar4 = local_e8;
        if (local_c8 != (longlong *)0x0) {
          plVar4 = local_c8;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_c8 != (longlong *)0x0) {
        FMemory::Free();
      }
      if ((*(byte *)((longlong)param_1 + 0x13fc) & 0x10) != 0) {
        FUN_140c38eb0(param_1,lVar2);
      }
    }
    if (param_2 == 0) {
      param_1[0x3ad] = 0;
      param_1[0x3ae] = 0;
    }
    else {
      param_1[0x3ad] = *(longlong *)(param_2 + 0x50);
      param_1[0x3ae] = *(longlong *)(param_2 + 0x270);
    }
  }
  else {
    FUN_140a5af40(param_1 + 0x1e9);
  }
  return;
}



// FUNCTION 140c475f0 FUN_140c475f0 body=129 status=ok
// SIG undefined FUN_140c475f0(void)

void FUN_140c475f0(longlong param_1,longlong *param_2,char param_3)

{
  if ((param_2 != (longlong *)0x0) &&
     (FUN_14307df60(param_2,param_1), *(char *)(param_1 + 0x128) == '\x03')) {
    if (param_2[0xff] == DAT_146b47938) {
      (**(code **)(*param_2 + 0x310))(param_2,0);
    }
    if (param_3 != '\0') {
      FUN_14307dd20();
      return;
    }
    FUN_14306e700(param_2);
  }
  return;
}



// FUNCTION 140c47680 FUN_140c47680 body=231 status=ok
// SIG undefined FUN_140c47680(void)

bool FUN_140c47680(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  float fVar4;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 local_70;
  byte local_68;
  undefined1 local_60 [56];
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined4 local_18;
  
  local_68 = local_68 & 0xfd | 1;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_142c8c260(local_60,0x3f800000);
  local_28[0] = 0xff;
  local_20 = 0;
  local_18 = 0;
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xe78) != 0)) {
    cVar1 = FUN_142d1a700(*(longlong *)(param_1 + 0xe78),param_2,&local_88);
    if (cVar1 != '\0') {
      cVar1 = FUN_142d52a00(local_28);
      if (cVar1 != '\0') {
        uVar2 = FUN_142d52a20(local_28);
        uVar2 = FArchive::operator<<(uVar2);
        fVar4 = (float)FUN_142d5fea0(uVar2);
        bVar3 = 0.0 < fVar4;
        goto LAB_140c47740;
      }
    }
  }
  bVar3 = false;
LAB_140c47740:
  if (local_78 != 0) {
    FMemory::Free();
  }
  return bVar3;
}



// FUNCTION 140c47770 FUN_140c47770 body=43 status=ok
// SIG undefined FUN_140c47770(void)

undefined8 FUN_140c47770(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + -0x8f8) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + -0x8f8) + 0x848))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140c477a0 FUN_140c477a0 body=319 status=ok
// SIG undefined FUN_140c477a0(void)

ulonglong FUN_140c477a0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x1e0);
  if (*(uint *)(param_1 + 0x1e0) == 0xffffffff) {
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (((lVar2 == 0) && (lVar2 = FUN_1423407b0(), lVar2 == 0)) ||
       (lVar2 = UWorld::GetGameState<APVPGameState>(lVar2), lVar2 == 0)) {
      uVar3 = 0xffffffff;
    }
    else {
      iVar1 = FUN_140cb6340(lVar2);
      uVar3 = (ulonglong)(iVar1 - 1);
    }
    *(int *)(param_1 + 0x1e0) = (int)uVar3;
  }
  iVar1 = (int)uVar3;
  if ((iVar1 < 0) || (*(int *)(param_1 + 400) <= iVar1)) {
    return uVar3 & 0xffffffffffffff00;
  }
  puVar8 = *(ulonglong **)(*(longlong *)(param_1 + 0x188) + (longlong)iVar1 * 0x18);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x188) + 8 + (longlong)iVar1 * 0x18);
  puVar7 = puVar8 + (longlong)iVar1 * 6;
  if (puVar8 == puVar7) {
    return (ulonglong)(uint7)(int7)(int3)((uint)iVar1 >> 8) << 8;
  }
  do {
    if (*puVar8 != 0) {
      uVar4 = FUN_142f71d80();
      uVar3 = *puVar8;
      for (uVar5 = uVar3; uVar5 != 0; uVar5 = *(ulonglong *)(uVar5 + 0x30)) {
        if (uVar5 == uVar4) goto LAB_140c47870;
      }
    }
    uVar3 = 0;
LAB_140c47870:
    if (param_2 != 0) {
      uVar4 = FUN_142f71d80();
      uVar5 = param_2;
      do {
        uVar6 = param_2;
        if (uVar5 == uVar4) goto LAB_140c47890;
        uVar5 = *(ulonglong *)(uVar5 + 0x30);
      } while (uVar5 != 0);
    }
    uVar6 = 0;
LAB_140c47890:
    if (uVar3 == uVar6) {
      return (ulonglong)(byte)puVar8[5];
    }
    puVar8 = puVar8 + 6;
    if (puVar8 == puVar7) {
      return uVar6 & 0xffffffffffffff00;
    }
  } while( true );
}



// FUNCTION 140c478e0 FUN_140c478e0 body=134 status=ok
// SIG undefined FUN_140c478e0(void)

ulonglong FUN_140c478e0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  uVar3 = FWeakObjectPtr::IsValid(param_1 + 8);
  if ((char)uVar3 != '\0') {
    plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
    uVar3 = (**(code **)(*plVar4 + 0x148))(plVar4);
    if ((uVar3 != 0) && (lVar2 = *(longlong *)(uVar3 + 400), lVar2 != 0)) {
      lVar5 = FUN_14141f270();
      iVar1 = *(int *)(lVar5 + 0x90);
      uVar3 = (longlong)iVar1;
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < iVar1) ||
         (uVar3 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + 0x88),
         *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar5 + 0x88)) {
        uVar3 = uVar3 & 0xffffffffffffff00;
      }
      else {
        uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
      }
      if ((char)uVar3 != '\0') {
        uVar3 = FUN_140bc2c90(lVar2);
        return uVar3;
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140c47970 FUN_140c47970 body=23 status=ok
// SIG undefined FUN_140c47970(void)

bool FUN_140c47970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140c46840(param_1,param_3);
  return lVar1 != 0;
}



// FUNCTION 140c47990 FUN_140c47990 body=27 status=ok
// SIG undefined FUN_140c47990(void)

bool FUN_140c47990(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140c42950(param_1 + -0xd98);
  return lVar1 != 0;
}



// FUNCTION 140c479f0 FUN_140c479f0 body=304 status=ok
// SIG undefined FUN_140c479f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c479f0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_2c8 [32];
  undefined4 local_2a8;
  undefined8 *local_2a0;
  undefined8 local_298;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 *local_278;
  undefined1 *puStack_270;
  undefined8 *local_268;
  undefined1 *puStack_260;
  undefined8 local_258;
  longlong *local_250;
  undefined8 local_240;
  undefined8 local_238;
  undefined1 local_228 [520];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  uVar1 = (**(code **)(*param_1 + 0x148))();
  lVar2 = FUN_140a05e30(uVar1);
  if (lVar2 != 0) {
    local_258 = *(undefined8 *)(lVar2 + 0xc0);
    local_240 = *(undefined8 *)(lVar2 + 200);
    local_288 = 0;
    local_280 = 0;
    local_278 = &local_258;
    puStack_270 = local_228;
    local_250 = param_1;
    local_238 = param_2;
    local_268 = local_278;
    puStack_260 = puStack_270;
    FUN_1405e1200(local_228,&local_268);
    local_288 = CONCAT44(0xffffffff,(undefined4)local_288);
    local_280 = 0;
    uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    local_298 = 0;
    local_2a0 = &local_288;
    local_2a8 = 0;
    FUN_1405f8040(&local_278,uVar1,*(undefined8 *)(lVar2 + 0x30),local_228);
    if (local_20 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140c47b20 FUN_140c47b20 body=305 status=ok
// SIG undefined FUN_140c47b20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c47b20(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_2c8 [32];
  undefined4 local_2a8;
  undefined8 *local_2a0;
  undefined8 local_298;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 *local_278;
  undefined1 *puStack_270;
  undefined8 *local_268;
  undefined1 *puStack_260;
  undefined8 local_258;
  longlong *local_250;
  undefined8 local_240;
  longlong local_238;
  undefined1 local_228 [520];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  uVar1 = (**(code **)(*param_1 + 0x148))();
  lVar2 = FUN_140a05e30(uVar1);
  if (lVar2 != 0) {
    local_258 = *(undefined8 *)(lVar2 + 0xc0);
    local_238 = param_1[0x3ae];
    local_288 = 0;
    local_280 = 0;
    local_278 = &local_258;
    puStack_270 = local_228;
    local_240 = *(undefined8 *)(lVar2 + 200);
    local_250 = param_1;
    local_268 = local_278;
    puStack_260 = puStack_270;
    FUN_1405e1200(local_228,&local_268);
    local_288 = CONCAT44(0xffffffff,(undefined4)local_288);
    local_280 = 0;
    uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    local_298 = 0;
    local_2a0 = &local_288;
    local_2a8 = 0;
    FUN_1405f8040(&local_278,uVar1,*(undefined8 *)(lVar2 + 0x48),local_228);
    if (local_20 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140c47c60 FUN_140c47c60 body=278 status=ok
// SIG undefined FUN_140c47c60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c47c60(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  undefined8 *local_290;
  undefined8 local_288;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 *local_268;
  undefined1 *puStack_260;
  undefined8 local_258;
  longlong *local_250;
  undefined1 local_240 [8];
  undefined8 *local_238;
  undefined1 *puStack_230;
  undefined1 local_228 [520];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  uVar1 = (**(code **)(*param_1 + 0x148))();
  lVar2 = FUN_140a05e30(uVar1);
  if (lVar2 != 0) {
    local_258 = *(undefined8 *)(lVar2 + 0xc0);
    local_278 = 0;
    local_270 = 0;
    local_268 = &local_258;
    puStack_260 = local_240;
    local_250 = param_1;
    local_238 = local_268;
    puStack_230 = puStack_260;
    FUN_1405e1200(local_228,&local_238);
    local_278 = CONCAT44(0xffffffff,(undefined4)local_278);
    local_270 = 0;
    uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    local_288 = 0;
    local_290 = &local_278;
    local_298 = 0;
    FUN_1405f8040(&local_268,uVar1,*(undefined8 *)(lVar2 + 0x38),local_228);
    if (local_20 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140c47d80 FUN_140c47d80 body=802 status=ok
// SIG undefined FUN_140c47d80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c47d80(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_308 [32];
  undefined4 local_2e8;
  undefined8 *local_2e0;
  undefined8 local_2d8;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 *local_2b8;
  undefined1 *puStack_2b0;
  undefined8 *local_2a8;
  undefined1 *puStack_2a0;
  undefined8 local_298;
  longlong *local_290;
  undefined8 local_280;
  longlong *local_278;
  undefined8 local_268;
  undefined8 local_260;
  undefined1 local_250 [8];
  undefined1 local_248 [520];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  uVar3 = (**(code **)(*param_1 + 0x148))();
  lVar4 = FUN_140a05e30(uVar3);
  if (lVar4 != 0) {
    uVar3 = *(undefined8 *)(lVar4 + 0xe0);
    lVar10 = 0;
    if (param_1[0x3ad] != 0) {
      lVar5 = FUN_142e0d0b0();
      lVar9 = param_1[0x3ad];
      lVar8 = lVar9;
      if (lVar9 != 0) {
LAB_140c47e10:
        if (lVar8 != lVar5) goto code_r0x000140c47e15;
        if (lVar9 == 0) goto LAB_140c47eb5;
        lVar9 = lVar10;
        if (*(longlong *)(lVar4 + 0xd8) != 0) {
          lVar5 = FUN_142e0d0b0();
          for (lVar8 = *(longlong *)(lVar4 + 0xd8);
              (lVar9 = lVar10, lVar8 != 0 && (lVar9 = *(longlong *)(lVar4 + 0xd8), lVar8 != lVar5));
              lVar8 = *(longlong *)(lVar8 + 0x30)) {
          }
        }
        lVar8 = lVar10;
        if (param_1[0x3ad] != 0) {
          lVar6 = FUN_142e0d0b0();
          for (lVar5 = param_1[0x3ad];
              (lVar8 = lVar10, lVar5 != 0 && (lVar8 = param_1[0x3ad], lVar5 != lVar6));
              lVar5 = *(longlong *)(lVar5 + 0x30)) {
          }
        }
        if (lVar8 == 0) goto LAB_140c47eb5;
        do {
          if (lVar8 == lVar9) {
            uVar3 = *(undefined8 *)(lVar4 + 0xf0);
            break;
          }
          lVar8 = *(longlong *)(lVar8 + 0x30);
        } while (lVar8 != 0);
      }
    }
LAB_140c47eb5:
    if ((char)param_1[0x3ac] != '\0') {
      uVar3 = *(undefined8 *)(lVar4 + 0xe8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_298 = *(undefined8 *)(lVar4 + 0xc0);
    local_280 = *(undefined8 *)(lVar4 + 200);
    local_278 = (longlong *)param_1[0x3ae];
    local_268 = *(undefined8 *)(lVar4 + 0xd0);
    local_2b8 = &local_298;
    puStack_2b0 = local_250;
    local_290 = param_1;
    local_260 = uVar3;
    local_2a8 = local_2b8;
    puStack_2a0 = puStack_2b0;
    FUN_1405e1200(local_248,&local_2a8);
    local_2c8 = CONCAT44(0xffffffff,(undefined4)local_2c8);
    local_2c0 = 0;
    uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    local_2d8 = 0;
    local_2e0 = &local_2c8;
    local_2e8 = 0;
    FUN_1405f8040(&local_2b8,uVar7,*(undefined8 *)(lVar4 + 0x50),local_248);
    if (local_40 != 0) {
      FMemory::Free();
    }
    if (param_1[0x3ae] != 0) {
      iVar2 = (**(code **)(param_1[0x116] + 0x20))();
      if (iVar2 == 2) {
        local_2c8 = 0;
        local_2c0 = 0;
        local_298 = *(undefined8 *)(lVar4 + 0xc0);
        local_290 = (longlong *)param_1[0x3ae];
        local_280 = *(undefined8 *)(lVar4 + 200);
        local_268 = *(undefined8 *)(lVar4 + 0xd0);
        local_2b8 = &local_298;
        puStack_2b0 = local_250;
        local_278 = param_1;
        local_260 = uVar3;
        local_2a8 = local_2b8;
        puStack_2a0 = puStack_2b0;
        FUN_1405e1200(local_248,&local_2a8);
        local_2c8 = CONCAT44(0xffffffff,(undefined4)local_2c8);
        local_2c0 = 0;
        uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
        local_2d8 = 0;
        local_2e0 = &local_2c8;
        local_2e8 = 0;
        FUN_1405f8040(&local_2b8,uVar3,*(undefined8 *)(lVar4 + 0x40),local_248);
        if (local_40 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
code_r0x000140c47e15:
  plVar1 = (longlong *)(lVar8 + 0x30);
  lVar8 = *plVar1;
  if (*plVar1 == 0) goto LAB_140c47eb5;
  goto LAB_140c47e10;
}



// FUNCTION 140c480b0 FUN_140c480b0 body=9 status=ok
// SIG undefined FUN_140c480b0(void)

void FUN_140c480b0(longlong param_1)

{
  FWeakObjectPtr::operator=(param_1 + 0x28);
  return;
}



// FUNCTION 140c480c0 FUN_140c480c0 body=601 status=ok
// SIG undefined FUN_140c480c0(void)

void FUN_140c480c0(longlong *param_1)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined8 local_res8;
  code *local_18;
  undefined8 uStack_10;
  
  uVar2 = UBorder::GetPrivateStaticClass();
  lVar3 = (**(code **)(*param_1 + 0x628))(param_1,uVar2);
  param_1[0x452] = lVar3;
  if ((lVar3 != 0) && (param_1[0x1d2] != 0)) {
    pwVar6 = (wchar_t *)0x0;
    uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
    local_18 = FUN_140c4b8b0;
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&AOakCharacter::OnAICloaked",L"::");
    pwVar5 = pwVar6;
    while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar5 = pwVar1;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    FUN_1407260e0(param_1[0x452] + 0x178,param_1,&local_18,local_res8);
    uStack_10 = uStack_10 & 0xffffffff00000000;
    local_18 = FUN_140c4b950;
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&AOakCharacter::OnAIUncloaked",L"::");
    pwVar5 = pwVar6;
    while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar5 = pwVar1;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    FUN_1407260e0(param_1[0x452] + 0x188,param_1,&local_18,local_res8);
    uStack_10 = uStack_10 & 0xffffffff00000000;
    local_18 = FUN_140c4cda0;
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&AOakCharacter::OnCryoFreezing",L"::");
    pwVar5 = pwVar6;
    while (pwVar1 = pwVar4, pwVar1 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar5 = pwVar1;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    FUN_1407260e0(param_1[0x1d2] + 0x2d0,param_1,&local_18,local_res8);
    uStack_10 = uStack_10 & 0xffffffff00000000;
    local_18 = (code *)&LAB_140c4cde0;
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&AOakCharacter::OnCryoThawing",L"::");
    while (pwVar4 = pwVar5, pwVar4 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar6 = pwVar4;
    }
    FName::FName(&local_res8,pwVar6 + 2,1);
    FUN_1407260e0(param_1[0x1d2] + 0x2f0,param_1,&local_18,local_res8);
  }
  return;
}



// FUNCTION 140c48320 FUN_140c48320 body=477 status=ok
// SIG undefined FUN_140c48320(void)

void FUN_140c48320(longlong param_1,undefined8 param_2,longlong *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  plVar12 = (longlong *)0x0;
  plVar8 = plVar12;
  if (param_3 != (longlong *)0x0) {
    plVar4 = (longlong *)FUN_142f71d80();
    plVar10 = param_3;
    do {
      plVar8 = param_3;
      if (plVar10 == plVar4) break;
      plVar10 = (longlong *)plVar10[6];
      plVar8 = plVar12;
    } while (plVar10 != (longlong *)0x0);
  }
  lVar9 = plVar8[0x1f];
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar9 = plVar8[0x1f];
    if (lVar9 == 0) {
      return;
    }
  }
  lVar5 = FUN_141437870();
  if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar5 = FUN_140c14790(lVar9);
    if (((lVar5 != 0) && (iVar3 = FUN_142f5c9d0(param_2,param_3), iVar3 == 1)) &&
       ((*(longlong *)(lVar9 + 0x4c8) == 0 ||
        (cVar2 = FUN_142f637d0(param_2,*(longlong *)(lVar9 + 0x4c8),*(undefined8 *)(lVar9 + 0x10),
                               param_1 + -0x1a0), cVar2 != '\0')))) {
      FUN_14146d7f0(param_1 + -0x1a0,param_3);
    }
    lVar5 = *(longlong *)(param_1 + -0x80);
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_1 + -0x1a0);
    }
    cVar2 = FUN_140adac00(lVar5);
    if (cVar2 == '\0') {
      plVar8 = *(longlong **)(lVar9 + 0x210);
      plVar10 = (longlong *)((longlong)*(int *)(lVar9 + 0x218) & 0x1fffffffffffffff);
      if (plVar8 + *(int *)(lVar9 + 0x218) < plVar8) {
        plVar10 = plVar12;
      }
      plVar4 = plVar12;
      if (plVar10 != (longlong *)0x0) {
        do {
          lVar9 = *plVar8;
          if (*(char *)(lVar9 + 0xac) != '\0') {
            plVar11 = plVar12;
            if (param_3 != (longlong *)0x0) {
              plVar6 = (longlong *)FUN_142f71d80();
              plVar7 = param_3;
              do {
                plVar11 = param_3;
                if (plVar7 == plVar6) break;
                plVar7 = (longlong *)plVar7[6];
                plVar11 = plVar12;
              } while (plVar7 != (longlong *)0x0);
            }
            cVar2 = FUN_142f637d0(param_2,lVar9,param_3,plVar11);
            if (cVar2 != '\0') {
              FUN_140c3a6a0(param_1 + -0x1a0,lVar9,param_3);
            }
          }
          plVar8 = plVar8 + 1;
          plVar4 = (longlong *)((longlong)plVar4 + 1);
        } while (plVar4 != plVar10);
      }
    }
  }
  return;
}



// FUNCTION 140c48500 FUN_140c48500 body=716 status=ok
// SIG undefined FUN_140c48500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c48500(longlong param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
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
  lVar7 = *(longlong *)(param_1 + 0x118);
  if (lVar7 != 0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar4 = *(longlong *)(param_1 + 0x120);
      if (lVar4 == 0) {
        lVar4 = FUN_1423407b0(param_1);
      }
      if (((lVar4 == 0) || (lVar4 = UWorld::GetGameState<APVPGameState>(lVar4), lVar4 == 0)) ||
         (iVar2 = FUN_140cb6340(lVar4), iVar2 < 1)) {
        local_a8 = FUN_140c48500;
        uStack_a0 = 0;
        uVar5 = AActor::GetWorldTimerManager(lVar7);
        plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
        if (plVar6 != (longlong *)0x0) {
          *plVar6 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar6 + 1,param_1);
          *(undefined4 *)(plVar6 + 2) = (undefined4)local_a8;
          *(undefined4 *)((longlong)plVar6 + 0x14) = local_a8._4_4_;
          *(undefined4 *)(plVar6 + 3) = uStack_a0;
          *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_9c;
          lVar7 = FDelegateHandle::GenerateNewID();
          plVar6[5] = lVar7;
          *plVar6 = (longlong)&PTR_FUN_143f77bd0;
        }
        local_98 = 0;
        local_90 = 0;
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x30))(plVar6,&local_98);
        }
        FWeakObjectPtr::operator=(local_88,0);
        local_b0 = 0xbf800000;
        local_b8 = 0;
        local_80 = 0;
        local_48 = (longlong *)0x0;
        local_38 = 0;
        local_78 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar5,param_1 + 0x200,&local_98,0x3dcccccd);
        if (local_38 != 0) {
          plVar8 = local_68;
          if (local_48 != (longlong *)0x0) {
            plVar8 = local_48;
          }
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x10))(plVar8,0);
          }
        }
        if (local_48 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x28))(plVar6,0);
          lVar7 = FMemory::Realloc(plVar6,0,0);
          if (lVar7 != 0) {
            FMemory::Free(lVar7);
          }
        }
      }
      else {
        iVar3 = FUN_140c42190();
        if ((iVar3 < 0) || (*(int *)(param_1 + 400) <= iVar3)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          iVar3 = *(int *)(param_1 + 400);
          while (iVar3 < iVar2) {
            iVar3 = *(int *)(param_1 + 400);
            lVar7 = (longlong)iVar3;
            *(int *)(param_1 + 400) = iVar3 + 1;
            if (*(int *)(param_1 + 0x194) < iVar3 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(param_1 + 0x188,iVar3);
            }
            lVar4 = *(longlong *)(param_1 + 0x188);
            *(undefined8 *)(lVar4 + lVar7 * 0x18) = 0;
            *(undefined8 *)(lVar4 + 8 + lVar7 * 0x18) = 0;
            *(undefined8 *)(lVar4 + 0x10 + lVar7 * 0x18) = 0;
            iVar3 = *(int *)(param_1 + 400);
          }
        }
        FUN_140c487d0(param_1);
      }
    }
  }
  return;
}



// FUNCTION 140c487d0 FUN_140c487d0 body=910 status=ok
// SIG undefined FUN_140c487d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c487d0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  plVar9 = *(longlong **)(param_1 + 0x118);
  if (plVar9 != (longlong *)0x0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar7 = (longlong *)FUN_142f5cb40(param_1);
      uStack_b0._0_4_ = 0;
      uVar3 = (undefined4)uStack_b0;
      uStack_b0._0_4_ = 0;
      if (plVar7 == (longlong *)0x0) {
        local_b8 = FUN_140c487d0;
        uVar8 = AActor::GetWorldTimerManager(plVar9);
        plVar9 = (longlong *)FMemory::Realloc(0,0x30,0);
        if (plVar9 != (longlong *)0x0) {
          *plVar9 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar9 + 1,param_1);
          *(undefined4 *)(plVar9 + 2) = (undefined4)local_b8;
          *(undefined4 *)((longlong)plVar9 + 0x14) = local_b8._4_4_;
          *(undefined4 *)(plVar9 + 3) = (undefined4)uStack_b0;
          *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_b0._4_4_;
          lVar6 = FDelegateHandle::GenerateNewID();
          plVar9[5] = lVar6;
          *plVar9 = (longlong)&PTR_FUN_143f77bd0;
        }
        local_a8 = 0;
        local_a0 = 0;
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x30))(plVar9,&local_a8);
        }
        FWeakObjectPtr::operator=(local_98,0);
        local_c0 = 0xbf800000;
        local_c8 = 0;
        local_90 = 0;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        local_88 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar8,param_1 + 0x1f8,&local_a8,0x3dcccccd);
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
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x28))(plVar9,0);
          lVar6 = FMemory::Realloc(plVar9,0,0);
          if (lVar6 != 0) {
            FMemory::Free(lVar6);
          }
        }
      }
      else {
        local_b8 = (code *)&LAB_140c4dd10;
        plVar1 = plVar7 + 0x96;
        uStack_b0._0_4_ = uVar3;
        plVar10 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar10 != (longlong *)0x0) {
          *plVar10 = (longlong)&PTR_FUN_144318a70;
          FWeakObjectPtr::operator=(plVar10 + 1,param_1);
          *(undefined4 *)(plVar10 + 2) = (undefined4)local_b8;
          *(undefined4 *)((longlong)plVar10 + 0x14) = local_b8._4_4_;
          *(undefined4 *)(plVar10 + 3) = (undefined4)uStack_b0;
          *(undefined4 *)((longlong)plVar10 + 0x1c) = uStack_b0._4_4_;
          lVar6 = FDelegateHandle::GenerateNewID();
          plVar10[5] = lVar6;
          *plVar10 = (longlong)&PTR_FUN_144318ab8;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
          (**(code **)(*plVar10 + 0x20))(plVar10,&local_b8);
          iVar5 = (int)plVar7[0x97];
          *(int *)(plVar7 + 0x97) = iVar5 + 1;
          if (*(int *)((longlong)plVar7 + 0x4bc) < iVar5 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar5);
          }
          puVar11 = (undefined8 *)((longlong)iVar5 * 0x10 + *plVar1);
          *puVar11 = plVar10;
          *(undefined4 *)(puVar11 + 1) = 3;
        }
        if (((*(uint *)((longlong)plVar9 + 0x4cc) >> 1 & 1) == 0) ||
           (cVar4 = (**(code **)(*plVar9 + 0x768))(plVar9), cVar4 == '\0')) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          uStack_b0 = 0;
          local_b8 = (code *)param_1;
          uVar8 = FUN_142f768a0();
          uStack_b0 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar8);
          FUN_142f690f0(plVar7,&local_b8,1);
          cVar4 = APlayerController::IsPrimaryPlayer(plVar9);
          if (cVar4 != '\0') {
            if ((char)plVar9[0x25] == '\x03') {
              iVar5 = FUN_140c42190();
              if ((iVar5 < 0) || (*(int *)(param_1 + 400) <= iVar5)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                (**(code **)(*plVar7 + 0x760))
                          (plVar7,*(longlong *)(param_1 + 0x188) + (longlong)iVar5 * 0x18,
                           *(undefined8 *)
                            (*(longlong *)(param_1 + 0x188) + 0x10 + (longlong)iVar5 * 0x18),param_1
                          );
                FUN_140c3a4a0(param_1);
              }
            }
            else if ((char)plVar9[0x25] == '\x02') {
              FUN_14146d950(param_1);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c48b60 FUN_140c48b60 body=158 status=ok
// SIG undefined FUN_140c48b60(void)

void FUN_140c48b60(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *local_18;
  undefined4 local_10;
  
  lVar4 = *(longlong *)(param_1 + 0xf50);
  if (lVar4 == 0) {
    lVar4 = param_1 + -0xd80;
  }
  if (param_2 != (longlong *)0x0) {
    uVar2 = FUN_14301f8f0();
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x628))(param_2,uVar2);
    if (((plVar3 != (longlong *)0x0) && (plVar3[0x41] != 0)) &&
       ((lVar1 = *(longlong *)(plVar3[0x41] + 0x1d8), lVar1 == 0 ||
        (*(char *)(lVar1 + 0x38) != '\0')))) {
      (**(code **)(*plVar3 + 0x4f0))(plVar3,lVar4);
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (lVar4 + 0x1328,&local_18);
  return;
}



// FUNCTION 140c48c00 GetDisplayNameVisibility_Implementation body=20 status=ok
// SIG undefined GetDisplayNameVisibility_Implementation(void)

bool UKeyLabel::GetDisplayNameVisibility_Implementation(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142ceefa0();
  return lVar1 != 0;
}



// FUNCTION 140c48c20 FUN_140c48c20 body=37 status=ok
// SIG undefined FUN_140c48c20(void)

undefined1 FUN_140c48c20(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142ceefa0();
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x418) != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 140c48c50 FUN_140c48c50 body=12 status=ok
// SIG undefined FUN_140c48c50(void)

void FUN_140c48c50(longlong param_1)

{
  FUN_1407c3030(param_1 + 0x1158);
  return;
}



// FUNCTION 140c48c60 FUN_140c48c60 body=25 status=ok
// SIG undefined FUN_140c48c60(void)

ulonglong FUN_140c48c60(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (*(longlong **)(param_1 + 0xe68) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140c48c6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xe68) + 0xbf0))();
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140c48c80 FUN_140c48c80 body=36 status=ok
// SIG undefined FUN_140c48c80(void)

undefined1 FUN_140c48c80(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x3b8) != '\0') {
    cVar1 = FUN_142f62ee0();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140c48cb0 FUN_140c48cb0 body=102 status=ok
// SIG undefined FUN_140c48cb0(void)

undefined1 FUN_140c48cb0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  param_1 = param_1 + 0x1518;
  cVar1 = FUN_140e96340(param_1);
  if (cVar1 != '\0') {
    if ((param_2 == 0) && (param_2 = FUN_140e7eef0(param_1,0), param_2 == 0)) {
      return 0;
    }
    lVar3 = FUN_140e83520(param_1,param_2);
    if (lVar3 != 0) {
      uVar2 = FUN_14307eaf0(lVar3);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 140c48d20 FUN_140c48d20 body=125 status=ok
// SIG undefined FUN_140c48d20(void)

undefined8 FUN_140c48d20(undefined8 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_142ceefa0();
  if (lVar2 != 0) {
    lVar3 = FUN_1414e0f70();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (*(char *)(lVar2 + 0x6e6) != '\0')) && (*(char *)(lVar2 + 0x418) != '\x03')) {
      return CONCAT71((int7)((ulonglong)(lVar3 + 0x88) >> 8),1);
    }
  }
  uVar4 = FUN_142cc74e0(param_1);
  return uVar4;
}



// FUNCTION 140c48da0 FUN_140c48da0 body=84 status=ok
// SIG undefined FUN_140c48da0(void)

ulonglong FUN_140c48da0(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x950))();
  if ((((cVar1 != '\0') ||
       ((uVar3 = 0, param_1[0x122] != 0 &&
        (uVar2 = *(uint *)(param_1[0x122] + 0x840) >> 3, uVar3 = (ulonglong)uVar2, (uVar2 & 1) != 0)
        ))) && (uVar3 = param_1[0x1d2], uVar3 != 0)) && (*(char *)(uVar3 + 0x3ae) != '\0')) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140c48e10 FUN_140c48e10 body=79 status=ok
// SIG undefined FUN_140c48e10(void)

ulonglong FUN_140c48e10(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar2 = FUN_142ceef80();
  uVar4 = 0;
  if (lVar2 != 0) {
    lVar3 = AGBlizzard::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x90)) &&
       (uVar4 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) == lVar3 + 0x88)) {
      return CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 140c48e60 FUN_140c48e60 body=61 status=ok
// SIG undefined FUN_140c48e60(void)

bool FUN_140c48e60(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x1cd0) == 0) {
    param_1 = param_1 + 0x1430;
  }
  else {
    param_1 = FUN_140c428a0(*(longlong *)(param_1 + 0x1cd0));
  }
  lVar1 = FUN_140e81f30(param_1,param_2);
  return lVar1 != 0;
}



// FUNCTION 140c48ea0 FUN_140c48ea0 body=99 status=ok
// SIG undefined FUN_140c48ea0(void)

void FUN_140c48ea0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x1cd0);
  if (lVar1 == 0) {
    FUN_140e85cd0(param_1 + 0x1430,param_2);
    return;
  }
  if (*(longlong *)(lVar1 + 0x1cd0) != 0) {
    uVar2 = FUN_140c428a0();
    FUN_140e85cd0(uVar2,param_2);
    return;
  }
  FUN_140e85cd0(lVar1 + 0x1430,param_2);
  return;
}



// FUNCTION 140c48f10 FUN_140c48f10 body=25 status=ok
// SIG undefined FUN_140c48f10(void)

bool FUN_140c48f10(longlong param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    bVar1 = *(char *)(*(longlong *)(param_1 + 0xe68) + 0x4b2) == '\x05';
  }
  return bVar1;
}



// FUNCTION 140c48f40 FUN_140c48f40 body=63 status=ok
// SIG undefined FUN_140c48f40(void)

ulonglong FUN_140c48f40(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = BuildSettings::IsPromotedBuild();
  if ((char)uVar1 != '\0') {
    uVar1 = (**(code **)(*param_1 + 0xa60))(param_1);
    if (((char)uVar1 == '\0') && (uVar1 = 0, 1 < (byte)((char)param_1[0x1d8] - 3U))) {
      return 1;
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 140c48f80 FUN_140c48f80 body=48 status=ok
// SIG undefined FUN_140c48f80(void)

undefined1 FUN_140c48f80(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x950))();
  if (cVar1 == '\0') {
    cVar1 = FUN_14269ca50(param_1);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140c48fb0 FUN_140c48fb0 body=19 status=ok
// SIG undefined FUN_140c48fb0(void)

bool FUN_140c48fb0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xe68) == 0) {
    return false;
  }
  return *(int *)(*(longlong *)(param_1 + 0xe68) + 0x2ac4) != -1;
}



// FUNCTION 140c48fd0 FUN_140c48fd0 body=140 status=ok
// SIG undefined FUN_140c48fd0(void)

undefined8 FUN_140c48fd0(undefined8 param_1)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  cVar2 = FUN_14269cc90();
  if (cVar2 != '\0') {
    return 1;
  }
  lVar4 = FUN_142ceefa0(param_1);
  if (((lVar4 != 0) && (*(char *)(lVar4 + 0x540) == '\0')) &&
     (plVar1 = *(longlong **)(lVar4 + 0x118), plVar1 != (longlong *)0x0)) {
    lVar4 = FUN_1429d7ab0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
                    /* WARNING: Could not recover jumptable at 0x000140c4904d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(*plVar1 + 0x780))(plVar1);
      return uVar5;
    }
  }
  return 0;
}



// FUNCTION 140c49060 FUN_140c49060 body=115 status=ok
// SIG undefined FUN_140c49060(void)

ulonglong FUN_140c49060(longlong param_1,undefined1 param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar2 = *(longlong *)(param_1 + -0x8f8);
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      in_RAX = uVar4 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      uVar4 = FUN_140d022a0(lVar2,param_2);
      return uVar4;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140c490e0 FUN_140c490e0 body=99 status=ok
// SIG undefined FUN_140c490e0(void)

ulonglong FUN_140c490e0(longlong *param_1,undefined1 param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x110))(param_1,0);
  if ((char)uVar1 == '\0') {
    return uVar1 & 0xffffffffffffff00;
  }
  plVar2 = (longlong *)(**(code **)(*param_1 + 0xf0))(param_1,param_2);
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140c49124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*plVar2 + 0x830))(plVar2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 140c49150 FUN_140c49150 body=68 status=ok
// SIG undefined FUN_140c49150(void)

void FUN_140c49150(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x1cd0) != 0) {
    uVar1 = FUN_140c428a0(*(longlong *)(param_1 + 0x1cd0));
    FUN_140e85c90(uVar1,param_2);
    return;
  }
  FUN_140e85c90(param_1 + 0x1430,param_2);
  return;
}



// FUNCTION 140c491a0 FUN_140c491a0 body=61 status=ok
// SIG undefined FUN_140c491a0(void)

bool FUN_140c491a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x1cd0) == 0) {
    param_1 = param_1 + 0x1430;
  }
  else {
    param_1 = FUN_140c428a0(*(longlong *)(param_1 + 0x1cd0));
  }
  lVar1 = FUN_140e80e00(param_1,param_2);
  return lVar1 != 0;
}



// FUNCTION 140c491e0 FUN_140c491e0 body=25 status=ok
// SIG undefined FUN_140c491e0(void)

uint FUN_140c491e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    return *(uint *)(*(longlong *)(param_1 + 0xe68) + 0x2ac0) >> 2 & 0xffffff01;
  }
  return 0;
}



// FUNCTION 140c49200 FUN_140c49200 body=139 status=ok
// SIG undefined FUN_140c49200(void)

undefined8 FUN_140c49200(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
    lVar3 = (**(code **)(*plVar2 + 0x148))(plVar2);
    if (lVar3 != 0) {
      if (*(longlong *)(lVar3 + 400) == 0) {
        uVar4 = *(undefined8 *)(lVar3 + 0x3f8);
      }
      else {
        uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
      }
      local_res8 = *(undefined8 *)(param_1 + 0x18);
      lVar3 = FTimerManager::FindTimer(uVar4,&local_res8,0);
      if ((lVar3 != 0) && (*(char *)(lVar3 + 1) != '\x02')) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140c49290 FUN_140c49290 body=64 status=ok
// SIG undefined FUN_140c49290(void)

void FUN_140c49290(longlong *param_1,longlong param_2)

{
  undefined1 uVar1;
  
  if (param_2 != 0) {
    uVar1 = (**(code **)(*param_1 + 0xa68))();
                    /* WARNING: Could not recover jumptable at 0x000140c492b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[0x1b1] + 0x18))(param_1 + 0x1b1,uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140c492cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[0x1b1] + 0x18))();
  return;
}



// FUNCTION 140c492d0 FUN_140c492d0 body=35 status=ok
// SIG undefined FUN_140c492d0(void)

void FUN_140c492d0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xf0))();
  if (lVar1 != 0) {
    FUN_14307ecd0(lVar1);
    return;
  }
  return;
}



// FUNCTION 140c49330 FUN_140c49330 body=46 status=ok
// SIG undefined FUN_140c49330(void)

void FUN_140c49330(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0xd88) + 0xf0))((longlong *)(param_1 + 0xd88),0);
  if (lVar1 != 0) {
    FUN_14307ee20(lVar1,1);
    return;
  }
  return;
}



// FUNCTION 140c49360 FUN_140c49360 body=219 status=ok
// SIG undefined FUN_140c49360(void)

void FUN_140c49360(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)*param_1;
  lVar5 = param_1[1];
  if (plVar4 == (longlong *)0x0) {
LAB_140c49429:
    *param_1 = (longlong)plVar4;
    param_1[1] = lVar5;
    return;
  }
joined_r0x000140c49383:
  for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)) {
    uVar1 = *(ulonglong *)(*(longlong *)(lVar5 + 0x10) + 0xb8);
    if (((uVar1 >> 0x1a & 1) != 0) &&
       (((*(char *)((longlong)param_1 + 0x15) != '\0' || ((uVar1 >> 0xf & 1) == 0)) ||
        ((*(uint *)(lVar5 + 0x38) >> 0x1d & 1) == 0)))) goto LAB_140c49429;
  }
  if (*(char *)((longlong)param_1 + 0x16) != '\0') {
    lVar2 = param_1[2];
    iVar3 = (int)lVar2 + 1;
    *(int *)(param_1 + 2) = iVar3;
    if (iVar3 < (int)plVar4[0x35]) {
      lVar5 = *(longlong *)(plVar4[0x34] + ((longlong)(int)lVar2 + 1) * 0x10);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(lVar5 + 0x38);
      }
      goto joined_r0x000140c49383;
    }
  }
  if ((*(char *)((longlong)param_1 + 0x14) == '\0') ||
     (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4), plVar4 == (longlong *)0x0))
  goto LAB_140c49429;
  lVar5 = plVar4[7];
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  goto joined_r0x000140c49383;
}



// FUNCTION 140c49440 FUN_140c49440 body=101 status=ok
// SIG undefined FUN_140c49440(void)

void FUN_140c49440(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  FUN_142314700();
  if (param_1[0x1cd] != 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
      uVar2 = *(undefined4 *)(lVar1 + 0x790);
    }
    *(undefined4 *)(param_1[0x1cd] + 0x28c8) = uVar2;
    *(uint *)(param_1[0x1cd] + 0x2ac0) = *(uint *)(param_1[0x1cd] + 0x2ac0) & 0xfffffff7;
  }
  return;
}



// FUNCTION 140c494b0 FUN_140c494b0 body=509 status=ok
// SIG undefined FUN_140c494b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c494b0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
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
      uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar2 = FUN_140c4b080(uVar4);
      if (lVar2 == 0) {
        lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
        if (lVar2 != 0) {
          if (*(longlong *)(lVar2 + 400) == 0) {
            uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
          }
          else {
            uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
          }
          plVar5 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar5 != (longlong *)0x0) {
            *plVar5 = (longlong)&PTR_FUN_143f4d170;
            FWeakObjectPtr::operator=(plVar5 + 1,param_1);
            plVar5[2] = (longlong)FUN_140c494b0;
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
          local_70 = 0;
          local_68 = AK::MemoryMgr::StartProfileThreadUsage;
          local_38 = (longlong *)0x0;
          local_28 = 0;
          FUN_142880af0(uVar4,&local_88);
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
      }
      else {
        FUN_140c4e440();
      }
    }
  }
  return;
}



// FUNCTION 140c496b0 FUN_140c496b0 body=375 status=ok
// SIG undefined FUN_140c496b0(void)

undefined8 FUN_140c496b0(undefined8 param_1,undefined1 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar4 = UEnum::GetPrivateStaticClass();
  plVar5 = (longlong *)FUN_141799410(uVar4,0xffffffffffffffff,L"EOakMusicLayer",1);
  bVar6 = plVar5 == (longlong *)0x0;
  if (bVar6) {
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,L"Invalid",L"OakMusicLogging",L"InvalidText");
  }
  else {
    uVar4 = (**(code **)(*plVar5 + 0x288))(plVar5,local_28,param_2);
  }
  FText::FText(local_58,uVar4);
  if (bVar6) {
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_38 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
  }
  if ((!bVar6) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_20 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  uVar4 = FText::ToString(local_58);
  FString::FString(param_1,uVar4);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_50 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140c49830 FUN_140c49830 body=120 status=ok
// SIG undefined FUN_140c49830(void)

void FUN_140c49830(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = FUN_142235230();
  if (iVar2 != 3) {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar4 = FUN_140c4b080(uVar3);
    if (lVar4 != 0) {
      lVar5 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *(longlong **)(lVar4 + 0xac8) = param_1;
      }
    }
  }
  return;
}



// FUNCTION 140c498b0 FUN_140c498b0 body=111 status=ok
// SIG undefined FUN_140c498b0(void)

longlong FUN_140c498b0(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = FUN_1405ec200();
  if (lVar2 != 0) {
    lVar3 = FUN_14171bfe0();
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
      lVar4 = FUN_142f71d80();
      lVar3 = lVar2;
      do {
        if (lVar3 == lVar4) {
          return lVar2;
        }
        lVar3 = *(longlong *)(lVar3 + 0x30);
      } while (lVar3 != 0);
    }
  }
  return 0;
}



// FUNCTION 140c49920 FUN_140c49920 body=86 status=ok
// SIG undefined FUN_140c49920(void)

longlong FUN_140c49920(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405ec200();
  if (lVar2 != 0) {
    lVar3 = UScrollBar::GetPrivateStaticClass();
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



// FUNCTION 140c49980 FUN_140c49980 body=86 status=ok
// SIG undefined FUN_140c49980(void)

longlong FUN_140c49980(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405ec200();
  if (lVar2 != 0) {
    lVar3 = FUN_1430228e0();
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



// FUNCTION 140c499e0 FUN_140c499e0 body=86 status=ok
// SIG undefined FUN_140c499e0(void)

longlong FUN_140c499e0(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405ec200();
  if (lVar2 != 0) {
    lVar3 = FUN_14302b3d0();
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



// FUNCTION 140c49a40 FUN_140c49a40 body=86 status=ok
// SIG undefined FUN_140c49a40(void)

longlong FUN_140c49a40(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405ec200();
  if (lVar2 != 0) {
    lVar3 = FUN_141410f00();
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


