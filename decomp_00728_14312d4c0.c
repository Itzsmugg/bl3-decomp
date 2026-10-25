// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14312d4c0 AddStateGroupMember body=96 status=ok
// SIG undefined AddStateGroupMember(void)

undefined8 CAkStateMgr::AddStateGroupMember(undefined8 *param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  longlong *plVar4;
  
  piVar2 = (int *)*param_1;
  piVar3 = piVar2 + (ulonglong)*(uint *)(param_1 + 1) * 4;
  for (; (piVar2 != piVar3 && (*piVar2 != param_2)); piVar2 = piVar2 + 4) {
  }
  plVar4 = (longlong *)(piVar2 + 2);
  if (piVar2 == piVar3) {
    plVar4 = (longlong *)0x0;
  }
  if (plVar4 == (longlong *)0x0) {
    return 0x14;
  }
  lVar1 = *plVar4;
  if (*(longlong *)(lVar1 + 0x10) != 0) {
    *(longlong *)(param_3 + 8) = *(longlong *)(lVar1 + 0x10);
    *(longlong *)(lVar1 + 0x10) = param_3;
    return 1;
  }
  *(longlong *)(lVar1 + 0x10) = param_3;
  *(undefined8 *)(param_3 + 8) = 0;
  return 1;
}



// FUNCTION 14312d520 AddStateTransition body=210 status=ok
// SIG undefined AddStateTransition(void)

undefined8
CAkStateMgr::AddStateTransition
          (undefined8 *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5,
          char param_6)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  longlong *plVar4;
  
  piVar1 = (int *)*param_1;
  piVar3 = piVar1 + (ulonglong)*(uint *)(param_1 + 1) * 4;
  for (; (piVar1 != piVar3 && (*piVar1 != param_2)); piVar1 = piVar1 + 4) {
  }
  plVar4 = (longlong *)(piVar1 + 2);
  if (piVar1 == piVar3) {
    plVar4 = (longlong *)0x0;
  }
  if (plVar4 != (longlong *)0x0) {
    lVar2 = FUN_14312e0e0(*plVar4 + 0x18,CONCAT44(param_4,param_3),&param_5);
    if ((lVar2 != 0) &&
       ((param_6 == '\0' ||
        (lVar2 = FUN_14312e0e0(*plVar4 + 0x18,CONCAT44(param_3,param_4),&param_5), lVar2 != 0)))) {
      return 1;
    }
    return 2;
  }
  return 0x14;
}



// FUNCTION 14312d600 Exists body=66 status=ok
// SIG undefined Exists(void)

int * CAkKeyArray<AkStateTransition,long,AkArrayAllocatorNoAlign<0>,AkGrowByPolicy_Proportional,AkAssignmentMovePolicy<MapStruct<AkStateTransition,long>_>_>
      ::Exists(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iStackX_14;
  
  piVar3 = (int *)*param_1;
  piVar1 = piVar3 + (ulonglong)*(uint *)(param_1 + 1) * 3;
  if (piVar3 != piVar1) {
    iStackX_14 = (int)((ulonglong)param_2 >> 0x20);
    do {
      if ((*piVar3 == (int)param_2) && (piVar3[1] == iStackX_14)) break;
      piVar3 = piVar3 + 3;
    } while (piVar3 != piVar1);
  }
  piVar2 = piVar3 + 2;
  if (piVar3 == piVar1) {
    piVar2 = (int *)0x0;
  }
  return piVar2;
}



// FUNCTION 14312d650 FUN_14312d650 body=199 status=ok
// SIG undefined FUN_14312d650(void)

longlong * FUN_14312d650(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  lVar1 = 0x90;
  if (param_3 != 1) {
    lVar1 = 0xa0;
  }
  puVar3 = (undefined8 *)(param_1 + lVar1);
  for (plVar2 = (longlong *)puVar3[1]; plVar2 != (longlong *)0x0; plVar2 = (longlong *)*plVar2) {
    if (param_2 == (int)plVar2[3]) goto LAB_14312d6f6;
  }
  plVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x40);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2[2] = 0;
    *(int *)(plVar2 + 3) = param_2;
    plVar2[4] = 0;
    plVar2[5] = 0;
    plVar2[6] = 0;
    plVar2[7] = 0;
    if (puVar3[1] == 0) {
      puVar3[1] = plVar2;
      *puVar3 = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = puVar3[1];
      puVar3[1] = plVar2;
    }
  }
LAB_14312d6f6:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  return plVar2;
}



// FUNCTION 14312d720 FUN_14312d720 body=372 status=ok
// SIG undefined FUN_14312d720(void)

longlong * FUN_14312d720(longlong param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  int *piVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  piVar2 = *(int **)(param_1 + 0xb0);
  piVar1 = piVar2 + (ulonglong)*(uint *)(param_1 + 0xb8) * 10;
  for (; (piVar2 != piVar1 && (*piVar2 != param_2)); piVar2 = piVar2 + 10) {
  }
  piVar4 = piVar2 + 2;
  if (piVar2 == piVar1) {
    piVar4 = (int *)0x0;
  }
  if (piVar4 == (int *)0x0) {
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    FUN_14312df20(param_1 + 0xb0,param_2,&local_38);
    piVar2 = *(int **)(param_1 + 0xb0);
    piVar1 = piVar2 + (ulonglong)*(uint *)(param_1 + 0xb8) * 10;
    if (piVar2 == piVar1) {
LAB_14312d7e6:
      piVar4 = (int *)0x0;
    }
    else {
      do {
        if (*piVar2 == param_2) break;
        piVar2 = piVar2 + 10;
      } while (piVar2 != piVar1);
      piVar4 = piVar2 + 2;
      if (piVar2 == piVar1) goto LAB_14312d7e6;
    }
    if (piVar4 == (int *)0x0) {
      plVar3 = (longlong *)0x0;
      goto LAB_14312d869;
    }
  }
  if (param_4 != 1) {
    piVar4 = piVar4 + 4;
  }
  for (plVar3 = *(longlong **)(piVar4 + 2); plVar3 != (longlong *)0x0; plVar3 = (longlong *)*plVar3)
  {
    if (param_3 == (int)plVar3[3]) goto LAB_14312d869;
  }
  plVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x40);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[2] = 0;
    *(int *)(plVar3 + 3) = param_3;
    plVar3[4] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar3[7] = 0;
    if (*(longlong *)(piVar4 + 2) == 0) {
      *(longlong **)(piVar4 + 2) = plVar3;
      *(longlong **)piVar4 = plVar3;
      *plVar3 = 0;
    }
    else {
      *plVar3 = *(longlong *)(piVar4 + 2);
      *(longlong **)(piVar4 + 2) = plVar3;
    }
  }
LAB_14312d869:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  return plVar3;
}



// FUNCTION 14312d8a0 GetState body=60 status=ok
// SIG undefined GetState(void)

undefined4 CAkStateMgr::GetState(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  
  piVar1 = (int *)*param_1;
  piVar2 = piVar1 + (ulonglong)*(uint *)(param_1 + 1) * 4;
  for (; (piVar1 != piVar2 && (*piVar1 != param_2)); piVar1 = piVar1 + 4) {
  }
  plVar3 = (longlong *)(piVar1 + 2);
  if (piVar1 == piVar2) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  return *(undefined4 *)(*plVar3 + 4);
}



// FUNCTION 14312d8e0 Init body=180 status=ok
// SIG undefined Init(void)

undefined8 CAkStateMgr::Init(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0xc0);
  *(undefined8 **)(param_1 + 0x28) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x30) = 8;
    uVar3 = 0;
    *(undefined8 **)(param_1 + 0x20) = puVar1;
    do {
      puVar2 = puVar1;
      uVar3 = uVar3 + 1;
      *puVar2 = puVar2 + 3;
      puVar1 = puVar2 + 3;
    } while (uVar3 < *(uint *)(param_1 + 0x30));
    *puVar2 = 0;
    puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x100);
    *(undefined8 **)(param_1 + 0x58) = puVar1;
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined4 *)(param_1 + 0x60) = 8;
      uVar3 = 0;
      *(undefined8 **)(param_1 + 0x50) = puVar1;
      do {
        puVar2 = puVar1;
        uVar3 = uVar3 + 1;
        *puVar2 = puVar2 + 4;
        puVar1 = puVar2 + 4;
      } while (uVar3 < *(uint *)(param_1 + 0x60));
      *puVar2 = 0;
      return 1;
    }
  }
  return 0x34;
}



// FUNCTION 14312d9a0 FUN_14312d9a0 body=710 status=ok
// SIG undefined FUN_14312d9a0(void)

int FUN_14312d9a0(longlong param_1,int param_2,undefined8 param_3,int param_4,char param_5,
                 int param_6)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  void *pvVar9;
  void *pvVar10;
  ulonglong uVar11;
  int *piVar12;
  longlong lVar13;
  undefined8 *puVar14;
  
  uVar11 = 0;
  if (param_6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
    lVar13 = 0x90;
    if (param_2 != 1) {
      lVar13 = 0xa0;
    }
    puVar14 = (undefined8 *)(lVar13 + param_1);
    for (plVar8 = (longlong *)puVar14[1]; plVar8 != (longlong *)0x0; plVar8 = (longlong *)*plVar8) {
      if ((int)param_3 == (int)plVar8[3]) goto LAB_14312da6e;
    }
    plVar8 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x40);
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = 0;
      plVar8[1] = 0;
      plVar8[2] = 0;
      *(int *)(plVar8 + 3) = (int)param_3;
      plVar8[4] = 0;
      plVar8[5] = 0;
      plVar8[6] = 0;
      plVar8[7] = 0;
      if (puVar14[1] == 0) {
        puVar14[1] = plVar8;
        *puVar14 = plVar8;
        *plVar8 = 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
        goto LAB_14312da88;
      }
      *plVar8 = puVar14[1];
      puVar14[1] = plVar8;
    }
LAB_14312da6e:
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  }
  else {
    plVar8 = (longlong *)FUN_14312d720(param_1,param_6,param_3,param_2);
  }
LAB_14312da88:
  if (plVar8 == (longlong *)0x0) {
    if (param_5 == '\0') {
      return 1;
    }
    return 0x34;
  }
  piVar12 = (int *)plVar8[1];
  uVar7 = *(uint *)(plVar8 + 2);
  piVar2 = piVar12 + uVar7;
  for (; (piVar12 != piVar2 && (*piVar12 != param_4)); piVar12 = piVar12 + 1) {
  }
  bVar5 = false;
  if (piVar12 != piVar2) {
    if (param_5 != '\0') {
      return 1;
    }
    bVar5 = true;
    goto LAB_14312db8d;
  }
  if (param_5 == '\0') {
    return 1;
  }
  if (*(uint *)((longlong)plVar8 + 0x14) <= uVar7) {
    uVar1 = *(uint *)((longlong)plVar8 + 0x14) + 4;
    pvVar9 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 2);
    if (pvVar9 == (void *)0x0) goto LAB_14312db8d;
    pvVar10 = (void *)plVar8[1];
    if ((pvVar10 != (void *)0x0) && (pvVar10 != pvVar9)) {
      uVar3 = *(uint *)(plVar8 + 2);
      if ((ulonglong)uVar3 != 0) {
        do {
          *(undefined4 *)((longlong)pvVar9 + uVar11 * 4) = *(undefined4 *)(plVar8[1] + uVar11 * 4);
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar3);
        pvVar10 = (void *)plVar8[1];
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar10);
    }
    plVar8[1] = (longlong)pvVar9;
    *(uint *)((longlong)plVar8 + 0x14) = uVar1;
    if (uVar1 <= uVar7) goto LAB_14312db8d;
  }
  uVar7 = *(uint *)(plVar8 + 2);
  *(uint *)(plVar8 + 2) = uVar7 + 1;
  piVar2 = (int *)(plVar8[1] + (ulonglong)uVar7 * 4);
  if (piVar2 != (int *)0x0) {
    *piVar2 = param_4;
  }
LAB_14312db8d:
  puVar14 = (undefined8 *)plVar8[7];
  iVar6 = 1;
  do {
    if (puVar14 == (undefined8 *)0x0) {
LAB_14312dbfa:
      if (bVar5) {
        uVar7 = *(uint *)(plVar8 + 2);
        if (1 < uVar7) {
          *piVar12 = *(int *)(plVar8[1] + -4 + (ulonglong)uVar7 * 4);
          uVar7 = *(uint *)(plVar8 + 2);
        }
        *(uint *)(plVar8 + 2) = uVar7 - 1;
      }
      if (iVar6 != 1) {
        uVar7 = *(uint *)(plVar8 + 2);
        if (1 < uVar7) {
          *piVar12 = *(int *)(plVar8[1] + -4 + (ulonglong)uVar7 * 4);
          uVar7 = *(uint *)(plVar8 + 2);
        }
        *(uint *)(plVar8 + 2) = uVar7 - 1;
        return iVar6;
      }
      return 1;
    }
    iVar6 = (*(code *)**(undefined8 **)*puVar14)((undefined8 *)*puVar14,param_4,param_5,param_6);
    if (iVar6 != 1) {
      if (param_5 != '\0') {
        for (puVar4 = (undefined8 *)plVar8[7]; puVar14 != puVar4; puVar4 = (undefined8 *)puVar4[1])
        {
          (*(code *)**(undefined8 **)*puVar4)((undefined8 *)*puVar4,param_4,0,param_6);
        }
      }
      goto LAB_14312dbfa;
    }
    puVar14 = (undefined8 *)puVar14[1];
  } while( true );
}



// FUNCTION 14312dc70 RegisterSwitch body=168 status=ok
// SIG undefined RegisterSwitch(void)

int CAkStateMgr::RegisterSwitch(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined4 uStack_c;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x18);
    if (puVar2 == (undefined8 *)0x0) {
      return 2;
    }
    *puVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 **)(param_1 + 0x20) = puVar2;
  }
  if (*(undefined8 **)(param_1 + 0x18) == (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x10) = puVar2;
  }
  else {
    **(undefined8 **)(param_1 + 0x18) = puVar2;
    puVar2 = *(undefined8 **)(param_1 + 0x20);
  }
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  *(undefined8 *)(param_1 + 0x20) = *puVar2;
  *puVar2 = 0;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  lVar1 = *(longlong *)(param_1 + 0x18);
  plVar3 = (longlong *)(lVar1 + 8);
  *plVar3 = param_2;
  *(ulonglong *)(lVar1 + 0x10) = CONCAT44(uStack_c,param_3);
  return 2 - (uint)(plVar3 != (longlong *)0x0);
}



// FUNCTION 14312dd20 RegisterTrigger body=160 status=ok
// SIG undefined RegisterTrigger(void)

undefined8 CAkStateMgr::RegisterTrigger(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uStack_1c;
  
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x20);
    if (puVar2 == (undefined8 *)0x0) {
      return 2;
    }
    *puVar2 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 **)(param_1 + 0x50) = puVar2;
  }
  if (*(undefined8 **)(param_1 + 0x48) == (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x40) = puVar2;
  }
  else {
    **(undefined8 **)(param_1 + 0x48) = puVar2;
    puVar2 = *(undefined8 **)(param_1 + 0x50);
  }
  *(undefined8 **)(param_1 + 0x48) = puVar2;
  *(undefined8 *)(param_1 + 0x50) = *puVar2;
  *puVar2 = 0;
  lVar1 = *(longlong *)(param_1 + 0x48);
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  *(undefined8 *)(lVar1 + 8) = param_2;
  *(ulonglong *)(lVar1 + 0x10) = (ulonglong)uStack_1c << 0x20;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  return 1;
}



// FUNCTION 14312ddc0 RemoveAllStateGroups body=219 status=ok
// SIG undefined RemoveAllStateGroups(void)

undefined8 CAkStateMgr::RemoveAllStateGroups(longlong *param_1,char param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)*param_1;
  uVar3 = *(uint *)(param_1 + 1);
  puVar5 = puVar4;
  if (puVar4 != puVar4 + (ulonglong)uVar3 * 2) {
    do {
      pvVar1 = (void *)puVar5[1];
      if ((param_2 == '\0') || (*(longlong *)((longlong)pvVar1 + 0x10) == 0)) {
        if (*(void **)((longlong)pvVar1 + 0x18) != (void *)0x0) {
          *(undefined4 *)((longlong)pvVar1 + 0x20) = 0;
          AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)((longlong)pvVar1 + 0x18));
          *(undefined8 *)((longlong)pvVar1 + 0x18) = 0;
          *(undefined4 *)((longlong)pvVar1 + 0x24) = 0;
        }
        *(undefined8 *)((longlong)pvVar1 + 0x10) = 0;
        AK::MemoryMgr::Free(g_DefaultPoolId,pvVar1);
        uVar3 = *(uint *)(param_1 + 1);
        if (1 < uVar3) {
          puVar4 = (undefined8 *)(*param_1 + -0x10 + (ulonglong)uVar3 * 0x10);
          uVar2 = puVar4[1];
          *puVar5 = *puVar4;
          puVar5[1] = uVar2;
          uVar3 = *(uint *)(param_1 + 1);
        }
        uVar3 = uVar3 - 1;
        *(uint *)(param_1 + 1) = uVar3;
        puVar4 = (undefined8 *)*param_1;
      }
      else {
        puVar5 = puVar5 + 2;
      }
    } while (puVar5 != puVar4 + (ulonglong)uVar3 * 2);
  }
  return 1;
}



// FUNCTION 14312dea0 RemoveStateGroupMember body=127 status=ok
// SIG undefined RemoveStateGroupMember(void)

undefined8 CAkStateMgr::RemoveStateGroupMember(undefined8 *param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int *piVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  piVar3 = (int *)*param_1;
  piVar5 = piVar3 + (ulonglong)*(uint *)(param_1 + 1) * 4;
  for (; (piVar3 != piVar5 && (*piVar3 != param_2)); piVar3 = piVar3 + 4) {
  }
  plVar6 = (longlong *)0x0;
  plVar7 = (longlong *)(piVar3 + 2);
  if (piVar3 == piVar5) {
    plVar7 = plVar6;
  }
  if (plVar7 == (longlong *)0x0) {
    return 0x14;
  }
  plVar1 = *(longlong **)(*plVar7 + 0x10);
  plVar2 = plVar1;
  plVar4 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    while (plVar4 = plVar2, plVar4 != param_3) {
      plVar2 = (longlong *)plVar4[1];
      plVar6 = plVar4;
      if ((longlong *)plVar4[1] == (longlong *)0x0) {
        return 1;
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    if (plVar4 == plVar1) {
      *(longlong *)(*plVar7 + 0x10) = plVar4[1];
      return 1;
    }
    plVar6[1] = plVar4[1];
  }
  return 1;
}



// FUNCTION 14312df20 FUN_14312df20 body=440 status=ok
// SIG undefined FUN_14312df20(void)

int * FUN_14312df20(longlong *param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int *piVar7;
  void *pvVar8;
  undefined8 *puVar9;
  void *pvVar10;
  int *piVar11;
  int *piVar12;
  ulonglong uVar13;
  
  piVar7 = (int *)*param_1;
  uVar3 = *(uint *)(param_1 + 1);
  piVar12 = piVar7 + (ulonglong)uVar3 * 10;
  for (; (piVar7 != piVar12 && (*piVar7 != param_2)); piVar7 = piVar7 + 10) {
  }
  piVar11 = piVar7 + 2;
  if (piVar7 == piVar12) {
    piVar11 = (int *)0x0;
  }
  if (piVar11 != (int *)0x0) {
    uVar6 = param_3[1];
    *(undefined8 *)piVar11 = *param_3;
    *(undefined8 *)(piVar11 + 2) = uVar6;
    uVar6 = param_3[3];
    *(undefined8 *)(piVar11 + 4) = param_3[2];
    *(undefined8 *)(piVar11 + 6) = uVar6;
    return piVar11;
  }
  if (*(uint *)((longlong)param_1 + 0xc) <= uVar3) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc) + 1;
    pvVar8 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 * 0x28);
    if (pvVar8 == (void *)0x0) {
      return (int *)0x0;
    }
    pvVar10 = (void *)*param_1;
    if ((pvVar10 != (void *)0x0) && (pvVar10 != pvVar8)) {
      uVar13 = (ulonglong)*(uint *)(param_1 + 1);
      if (uVar13 != 0) {
        lVar5 = -(longlong)pvVar8;
        puVar9 = (undefined8 *)((longlong)pvVar8 + 0x10);
        do {
          if (puVar9 + -2 != (undefined8 *)0x0) {
            puVar9[-1] = 0;
            *puVar9 = 0;
            puVar9[1] = 0;
            puVar9[2] = 0;
          }
          lVar4 = *param_1;
          puVar2 = (undefined8 *)((longlong)puVar9 + lVar4 + lVar5 + -0x10);
          uVar6 = puVar2[1];
          puVar9[-2] = *puVar2;
          puVar9[-1] = uVar6;
          puVar2 = (undefined8 *)((longlong)puVar9 + lVar4 + lVar5);
          uVar6 = puVar2[1];
          *puVar9 = *puVar2;
          puVar9[1] = uVar6;
          puVar9[2] = *(undefined8 *)((longlong)puVar9 + lVar4 + lVar5 + 0x10);
          uVar13 = uVar13 - 1;
          puVar9 = puVar9 + 5;
        } while (uVar13 != 0);
        pvVar10 = (void *)*param_1;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar10);
    }
    piVar12 = (int *)0x0;
    *param_1 = (longlong)pvVar8;
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    if (uVar1 <= uVar3) goto LAB_14312e09c;
  }
  piVar12 = (int *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x28);
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
  if (piVar12 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar12[2] = 0;
  piVar12[3] = 0;
  piVar12[4] = 0;
  piVar12[5] = 0;
  piVar12[6] = 0;
  piVar12[7] = 0;
  piVar12[8] = 0;
  piVar12[9] = 0;
LAB_14312e09c:
  if (piVar12 == (int *)0x0) {
    return (int *)0x0;
  }
  *piVar12 = param_2;
  uVar6 = param_3[1];
  *(undefined8 *)(piVar12 + 2) = *param_3;
  *(undefined8 *)(piVar12 + 4) = uVar6;
  uVar6 = param_3[3];
  *(undefined8 *)(piVar12 + 6) = param_3[2];
  *(undefined8 *)(piVar12 + 8) = uVar6;
  return piVar12 + 2;
}



// FUNCTION 14312e0e0 FUN_14312e0e0 body=335 status=ok
// SIG undefined FUN_14312e0e0(void)

int * FUN_14312e0e0(longlong *param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int *piVar4;
  void *pvVar5;
  undefined8 *puVar6;
  int *piVar7;
  longlong lVar8;
  void *pvVar9;
  int *piVar10;
  ulonglong uVar11;
  int iStackX_14;
  
  piVar4 = (int *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  piVar7 = piVar4 + (ulonglong)uVar2 * 3;
  if (piVar4 != piVar7) {
    iStackX_14 = (int)((ulonglong)param_2 >> 0x20);
    do {
      if ((*piVar4 == (int)param_2) && (piVar4[1] == iStackX_14)) break;
      piVar4 = piVar4 + 3;
    } while (piVar4 != piVar7);
  }
  piVar10 = piVar4 + 2;
  if (piVar4 == piVar7) {
    piVar10 = (int *)0x0;
  }
  if (piVar10 != (int *)0x0) {
    *piVar10 = *param_3;
    return piVar10;
  }
  if (*(uint *)((longlong)param_1 + 0xc) <= uVar2) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc) + 1;
    pvVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 * 0xc);
    if (pvVar5 == (void *)0x0) {
      return (int *)0x0;
    }
    pvVar9 = (void *)*param_1;
    if ((pvVar9 != (void *)0x0) && (pvVar9 != pvVar5)) {
      uVar11 = (ulonglong)*(uint *)(param_1 + 1);
      if (uVar11 != 0) {
        lVar8 = 0;
        do {
          lVar3 = *param_1;
          *(undefined8 *)(lVar8 + (longlong)pvVar5) = *(undefined8 *)(lVar8 + lVar3);
          *(undefined4 *)(lVar8 + 8 + (longlong)pvVar5) = *(undefined4 *)(lVar8 + 8 + lVar3);
          uVar11 = uVar11 - 1;
          lVar8 = lVar8 + 0xc;
        } while (uVar11 != 0);
        pvVar9 = (void *)*param_1;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar9);
    }
    puVar6 = (undefined8 *)0x0;
    *param_1 = (longlong)pvVar5;
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    if (uVar1 <= uVar2) goto LAB_14312e1fd;
  }
  uVar2 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar2 + 1;
  puVar6 = (undefined8 *)(*param_1 + (ulonglong)uVar2 * 0xc);
LAB_14312e1fd:
  piVar7 = (int *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = param_2;
    piVar7 = (int *)(puVar6 + 1);
    *piVar7 = *param_3;
  }
  return piVar7;
}



// FUNCTION 14312e230 FUN_14312e230 body=1452 status=ok
// SIG undefined FUN_14312e230(void)

void FUN_14312e230(undefined8 *param_1,int param_2,uint param_3,char param_4,char param_5)

{
  float *pfVar1;
  byte bVar2;
  ushort uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ushort *puVar7;
  int iVar8;
  char cVar9;
  int *piVar10;
  uint *puVar11;
  longlong lVar12;
  short *psVar13;
  int *piVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  float *pfVar18;
  int iVar19;
  int *piVar20;
  ulonglong uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  uint local_e8;
  uint local_e4;
  undefined8 *local_d0;
  longlong local_c0;
  ulonglong local_b8;
  float local_b0;
  float local_ac;
  int local_a8;
  undefined4 local_a4;
  byte local_a0;
  undefined2 local_9f;
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  
  piVar10 = (int *)*param_1;
  piVar20 = piVar10 + (ulonglong)*(uint *)(param_1 + 1) * 4;
  for (; (piVar10 != piVar20 && (*piVar10 != param_2)); piVar10 = piVar10 + 4) {
  }
  piVar14 = piVar10 + 2;
  if (piVar10 == piVar20) {
    piVar14 = (int *)0x0;
  }
  if (piVar14 != (int *)0x0) {
    puVar4 = *(uint **)piVar14;
    if (param_5 == '\0') {
      if (puVar4[1] != param_3) {
        puVar5 = (undefined8 *)param_1[2];
        *(undefined1 *)(param_1 + 7) = 1;
        for (; puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)*puVar5) {
          if ((*(int *)(puVar5 + 2) == param_2) &&
             (plVar6 = (longlong *)puVar5[1], plVar6 != (longlong *)0x0)) {
            local_c0 = 0;
            local_b8 = local_b8 & 0xffffffff00000000;
            local_b0 = 0.0;
            uVar22 = (uint)local_a8 >> 8;
            local_a8 = CONCAT31((int3)uVar22,0xff);
            local_a0 = 0xff;
            local_98 = 0;
            (**(code **)(*plVar6 + 8))(plVar6,param_3,&local_c0);
          }
        }
        if (*(char *)((longlong)param_1 + 0x39) != '\0') {
          piVar10 = (int *)param_1[2];
          piVar20 = (int *)0x0;
          while (piVar14 = piVar20, piVar20 = piVar10, piVar20 != (int *)0x0) {
            piVar10 = *(int **)piVar20;
            if (*(longlong *)(piVar20 + 2) == 0) {
              if (piVar20 == (int *)param_1[2]) {
                param_1[2] = piVar10;
              }
              else {
                *(int **)piVar14 = piVar10;
              }
              if (piVar20 == (int *)param_1[3]) {
                param_1[3] = piVar14;
              }
              if ((piVar20 < (int *)param_1[5]) ||
                 ((int *)param_1[5] + (ulonglong)*(uint *)(param_1 + 6) * 6 <= piVar20)) {
                AK::MemoryMgr::Free(g_DefaultPoolId,piVar20);
                *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
                piVar20 = piVar14;
              }
              else {
                *(undefined8 *)piVar20 = param_1[4];
                *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
                param_1[4] = piVar20;
                piVar20 = piVar14;
              }
            }
          }
          *(undefined1 *)((longlong)param_1 + 0x39) = 0;
        }
        *(undefined1 *)(param_1 + 7) = 0;
      }
      if (((DAT_146b50b28 != (code *)0x0) && (param_4 == '\0')) &&
         (cVar9 = (*DAT_146b50b28)(param_2,param_3), cVar9 != '\0')) {
        return;
      }
    }
    local_e4 = 0;
    if (param_4 == '\0') {
      if (puVar4[1] == param_3) {
        return;
      }
      puVar11 = (uint *)CAkKeyArray<AkStateTransition,long,AkArrayAllocatorNoAlign<0>,AkGrowByPolicy_Proportional,AkAssignmentMovePolicy<MapStruct<AkStateTransition,long>_>_>
                        ::Exists(puVar4 + 6,CONCAT44(param_3,puVar4[1]));
      if (puVar11 == (uint *)0x0) {
        local_e4 = *puVar4;
      }
      else {
        local_e4 = *puVar11;
      }
    }
    lVar17 = *(longlong *)(puVar4 + 4);
    if (lVar17 != 0) {
      local_90 = 0;
      do {
        plVar6 = *(longlong **)(lVar17 + 0x18);
        *(uint *)(lVar17 + 0x3c) = param_3;
        lVar12 = AkStateGroupChunk::GetState(lVar17,param_3);
        if (lVar12 == 0) {
          local_d0 = &local_90;
        }
        else {
          local_d0 = (undefined8 *)(lVar12 + 0x18);
        }
        local_88 = (longlong *)(**(code **)(*plVar6 + 0x30))(plVar6);
        if (local_88 != (longlong *)0x0) {
          uVar15 = 0;
          local_e8 = 0;
          if ((int)local_88[1] != 0) {
            do {
              lVar12 = *local_88;
              puVar7 = *(ushort **)(lVar17 + 0x20);
              uVar22 = (uint)uVar15;
              bVar2 = *(byte *)(lVar12 + 3 + uVar15 * 4);
              cVar9 = *(char *)(lVar12 + 2 + uVar15 * 4);
              uVar3 = *(ushort *)(lVar12 + uVar15 * 4);
              uVar21 = (ulonglong)((uint7)CONCAT22(CONCAT11(bVar2,cVar9),uVar3) & 0x1ffffff);
              uVar15 = (ulonglong)local_e4;
              if (cVar9 == '\x04') {
                uVar15 = 0;
              }
              iVar19 = (int)uVar15;
              if (puVar7 != (ushort *)0x0) {
                uVar15 = 0;
                do {
                  uVar16 = (int)uVar15 + 1;
                  if (puVar7[uVar16] == uVar3) {
                    pfVar18 = (float *)((longlong)puVar7 +
                                       uVar15 * 0x10 +
                                       ((ulonglong)((uint)*puVar7 * 2 + 5) & 0xfffffffc));
                    goto LAB_14312e50c;
                  }
                  uVar15 = (ulonglong)uVar16;
                } while (uVar16 < *puVar7);
              }
              pfVar18 = (float *)0x0;
LAB_14312e50c:
              if (cVar9 == '\x03') {
                fVar24 = 1.0;
              }
              else {
                fVar24 = 0.0;
              }
              puVar7 = (ushort *)*local_d0;
              fVar23 = fVar24;
              if (puVar7 != (ushort *)0x0) {
                uVar15 = 0;
                do {
                  uVar16 = (int)uVar15 + 1;
                  if (puVar7[uVar16] == uVar3) {
                    pfVar1 = (float *)((longlong)puVar7 +
                                      uVar15 * 4 + ((ulonglong)((uint)*puVar7 * 2 + 5) & 0xfffffffc)
                                      );
                    if (pfVar1 != (float *)0x0) {
                      fVar23 = *pfVar1;
                    }
                    break;
                  }
                  uVar15 = (ulonglong)uVar16;
                } while (uVar16 < *puVar7);
              }
              if (pfVar18 == (float *)0x0) {
LAB_14312e5ca:
                if (fVar24 != fVar23) {
                  if (pfVar18 == (float *)0x0) {
                    if (*(ushort **)(lVar17 + 0x20) == (ushort *)0x0) {
                      uVar15 = 0;
                    }
                    else {
                      uVar15 = (ulonglong)**(ushort **)(lVar17 + 0x20);
                    }
                    iVar8 = (int)uVar15;
                    uVar16 = iVar8 * 2 + 7;
                    psVar13 = AK::MemoryMgr::Malloc
                                        (g_DefaultPoolId,
                                         (ulonglong)((iVar8 + 1) * 0x10 + (uVar16 & 0xfffffffc)));
                    uVar22 = local_e8;
                    if (psVar13 == (short *)0x0) {
                      pfVar18 = (float *)0x0;
                    }
                    else {
                      if (*(longlong *)(lVar17 + 0x20) != 0) {
                        _guard_xfg_dispatch_icall_nop
                                  (psVar13 + 1,(void *)(*(longlong *)(lVar17 + 0x20) + 2),uVar15 * 2
                                  );
                        _guard_xfg_dispatch_icall_nop
                                  ((void *)(((ulonglong)uVar16 & 0xfffffffc) + (longlong)psVar13),
                                   (void *)(((ulonglong)(iVar8 * 2 + 5) & 0xfffffffc) +
                                           *(longlong *)(lVar17 + 0x20)),uVar15 << 4);
                        AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar17 + 0x20));
                      }
                      psVar13[iVar8 + 1] = uVar3;
                      *psVar13 = (short)uVar15 + 1;
                      *(short **)(lVar17 + 0x20) = psVar13;
                      pfVar18 = (float *)((longlong)psVar13 +
                                         ((ulonglong)uVar16 & 0xfffffffc) + uVar15 * 0x10);
                      if (pfVar18 != (float *)0x0) {
                        *pfVar18 = 0.0;
                        pfVar18[2] = 0.0;
                        pfVar18[3] = 0.0;
                      }
                    }
                  }
                  if ((float)iVar19 == 0.0) {
LAB_14312e73c:
                    AkStateGroupChunk::TransUpdateValue(lVar17,uVar21,fVar23,1);
                  }
                  else {
                    local_a4 = 4;
                    local_9f = 1;
                    local_c0 = lVar17;
                    local_b8 = uVar21;
                    local_b0 = fVar24;
                    local_ac = fVar23;
                    local_a8 = iVar19;
                    local_a0 = bVar2 & 1;
                    lVar12 = FUN_14314fa00(DAT_146b50af0,&local_c0,1);
                    if (pfVar18 == (float *)0x0) {
                      if (lVar12 != 0) {
LAB_14312e754:
                        FUN_1431501b0(DAT_146b50af0,lVar12,lVar17);
                      }
                    }
                    else {
                      *(longlong *)(pfVar18 + 2) = lVar12;
                      if (lVar12 == 0) {
                        *pfVar18 = fVar23;
                        goto LAB_14312e73c;
                      }
                      cVar9 = (**(code **)(*plVar6 + 8))(plVar6);
                      if (cVar9 == '\0') {
                        AkStateGroupChunk::TransUpdateValue(lVar17,uVar21,fVar23,1);
                        goto LAB_14312e754;
                      }
                    }
                  }
                }
              }
              else {
                if (*(longlong *)(pfVar18 + 2) == 0) {
                  fVar24 = *pfVar18;
                  goto LAB_14312e5ca;
                }
                CAkTransitionManager::ChangeParameter
                          (DAT_146b50af0,*(longlong *)(pfVar18 + 2),uVar21,fVar23,iVar19,4,0);
              }
              local_e8 = uVar22 + 1;
              uVar15 = (ulonglong)local_e8;
            } while (local_e8 < *(uint *)(local_88 + 1));
          }
        }
        lVar17 = *(longlong *)(lVar17 + 8);
      } while (lVar17 != 0);
    }
    puVar4[1] = param_3;
  }
  return;
}



// FUNCTION 14312e7e0 SetdefaultTransitionTime body=67 status=ok
// SIG undefined SetdefaultTransitionTime(void)

undefined8 CAkStateMgr::SetdefaultTransitionTime(undefined8 *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = (int *)*param_1;
  piVar2 = piVar1 + (ulonglong)*(uint *)(param_1 + 1) * 4;
  for (; (piVar1 != piVar2 && (*piVar1 != param_2)); piVar1 = piVar1 + 4) {
  }
  piVar3 = piVar1 + 2;
  if (piVar1 == piVar2) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 == (int *)0x0) {
    return 0x14;
  }
  **(undefined4 **)piVar3 = param_3;
  return 1;
}



// FUNCTION 14312e830 Term body=75 status=ok
// SIG undefined Term(void)

void AkStateGroupInfo::Term(longlong param_1)

{
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 14312e880 FUN_14312e880 body=745 status=ok
// SIG undefined FUN_14312e880(void)

void FUN_14312e880(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  void *pvVar8;
  
  puVar2 = (undefined8 *)*param_1;
  puVar6 = puVar2 + (ulonglong)*(uint *)(param_1 + 1) * 2;
  puVar1 = puVar2;
  while (puVar2 != puVar6) {
    pvVar7 = (void *)puVar2[1];
    if (*(void **)((longlong)pvVar7 + 0x18) != (void *)0x0) {
      *(undefined4 *)((longlong)pvVar7 + 0x20) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)((longlong)pvVar7 + 0x18));
      *(undefined8 *)((longlong)pvVar7 + 0x18) = 0;
      *(undefined4 *)((longlong)pvVar7 + 0x24) = 0;
    }
    *(undefined8 *)((longlong)pvVar7 + 0x10) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar7);
    uVar5 = *(uint *)(param_1 + 1);
    if (1 < uVar5) {
      puVar1 = (undefined8 *)(*param_1 + -0x10 + (ulonglong)uVar5 * 0x10);
      uVar4 = puVar1[1];
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      uVar5 = *(uint *)(param_1 + 1);
    }
    *(uint *)(param_1 + 1) = uVar5 - 1;
    puVar1 = (undefined8 *)*param_1;
    puVar6 = puVar1 + (ulonglong)(uVar5 - 1) * 2;
  }
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,puVar1);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  while (plVar3 = (longlong *)param_1[2], plVar3 != (longlong *)0x0) {
    param_1[2] = *plVar3;
    if (plVar3 == (longlong *)param_1[3]) {
      param_1[3] = 0;
    }
    if ((plVar3 < (longlong *)param_1[5]) ||
       ((longlong *)param_1[5] + (ulonglong)*(uint *)(param_1 + 6) * 3 <= plVar3)) {
      AK::MemoryMgr::Free(g_DefaultPoolId,plVar3);
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
    }
    else {
      *plVar3 = param_1[4];
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
      param_1[4] = (longlong)plVar3;
    }
  }
  puVar2 = (undefined8 *)param_1[4];
  while (puVar1 = puVar2, puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    if ((puVar1 < (undefined8 *)param_1[5]) ||
       ((undefined8 *)param_1[5] + (ulonglong)*(uint *)(param_1 + 6) * 3 <= puVar1)) {
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar1);
    }
  }
  if ((void *)param_1[5] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[5]);
    param_1[5] = 0;
  }
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  while (plVar3 = (longlong *)param_1[8], plVar3 != (longlong *)0x0) {
    param_1[8] = *plVar3;
    if (plVar3 == (longlong *)param_1[9]) {
      param_1[9] = 0;
    }
    if ((plVar3 < (longlong *)param_1[0xb]) ||
       ((longlong *)param_1[0xb] + (ulonglong)*(uint *)(param_1 + 0xc) * 4 <= plVar3)) {
      AK::MemoryMgr::Free(g_DefaultPoolId,plVar3);
      *(int *)((longlong)param_1 + 100) = *(int *)((longlong)param_1 + 100) + -1;
    }
    else {
      *plVar3 = param_1[10];
      *(int *)((longlong)param_1 + 100) = *(int *)((longlong)param_1 + 100) + -1;
      param_1[10] = (longlong)plVar3;
    }
  }
  puVar2 = (undefined8 *)param_1[10];
  while (puVar1 = puVar2, puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    if ((puVar1 < (undefined8 *)param_1[0xb]) ||
       ((undefined8 *)param_1[0xb] + (ulonglong)*(uint *)(param_1 + 0xc) * 4 <= puVar1)) {
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar1);
    }
  }
  if ((void *)param_1[0xb] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[0xb]);
    param_1[0xb] = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_14312eb70(param_1,param_1 + 0x12);
  FUN_14312eb70(param_1,param_1 + 0x14);
  pvVar7 = (void *)param_1[0x16];
  pvVar8 = pvVar7;
  if (pvVar7 != (void *)((longlong)pvVar7 + (ulonglong)*(uint *)(param_1 + 0x17) * 0x28)) {
    do {
      if (pvVar7 != (void *)0x0) {
        FUN_14312eb70(param_1,(longlong)pvVar7 + 8);
        FUN_14312eb70(param_1,(longlong)pvVar7 + 0x18);
      }
      pvVar7 = (void *)((longlong)pvVar7 + 0x28);
      pvVar8 = (void *)param_1[0x16];
    } while (pvVar7 != (void *)((longlong)pvVar8 + (ulonglong)*(uint *)(param_1 + 0x17) * 0x28));
  }
  if (pvVar8 != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x17) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar8);
    param_1[0x16] = 0;
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  }
  return;
}



// FUNCTION 14312eb70 FUN_14312eb70 body=158 status=ok
// SIG undefined FUN_14312eb70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14312eb70(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  long lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    param_2[1] = 0;
    *param_2 = 0;
    return;
  }
  do {
    plVar1 = (longlong *)*plVar4;
    plVar3 = plVar1;
    if (plVar4 == (longlong *)param_2[1]) {
      param_2[1] = plVar1;
      plVar3 = (longlong *)_DAT_00000000;
    }
    _DAT_00000000 = (longlong)plVar3;
    if (plVar4 == (longlong *)*param_2) {
      *param_2 = 0;
    }
    lVar2 = g_DefaultPoolId;
    FUN_14312d230(plVar4,0);
    AK::MemoryMgr::Free(lVar2,plVar4);
    plVar4 = plVar1;
  } while (plVar1 != (longlong *)0x0);
  param_2[1] = 0;
  *param_2 = 0;
  return;
}



// FUNCTION 14312ec10 Trigger body=89 status=ok
// SIG undefined Trigger(void)

void CAkStateMgr::Trigger(longlong param_1,int param_2,longlong param_3)

{
  undefined8 *puVar1;
  
  for (puVar1 = *(undefined8 **)(param_1 + 0x40); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    if (((*(int *)(puVar1 + 2) == 0) || (*(int *)(puVar1 + 2) == param_2)) &&
       ((param_3 == 0 || (puVar1[3] == param_3)))) {
      (*(code *)**(undefined8 **)puVar1[1])((undefined8 *)puVar1[1],param_2);
    }
  }
  return;
}



// FUNCTION 14312ec70 UnregisterSwitch body=220 status=ok
// SIG undefined UnregisterSwitch(void)

undefined8 CAkStateMgr::UnregisterSwitch(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  puVar3 = (undefined8 *)0x0;
  while (puVar2 = puVar1, puVar2 != (undefined8 *)0x0) {
    if (puVar2[1] == param_2) {
      puVar1 = (undefined8 *)*puVar2;
      if (*(char *)(param_1 + 0x38) == '\0') {
        if (puVar2 == *(undefined8 **)(param_1 + 0x10)) {
          *(undefined8 **)(param_1 + 0x10) = puVar1;
        }
        else {
          *puVar3 = puVar1;
        }
        if (puVar2 == *(undefined8 **)(param_1 + 0x18)) {
          *(undefined8 **)(param_1 + 0x18) = puVar3;
        }
        if ((puVar2 < *(undefined8 **)(param_1 + 0x28)) ||
           (*(undefined8 **)(param_1 + 0x28) + (ulonglong)*(uint *)(param_1 + 0x30) * 3 <= puVar2))
        {
          AK::MemoryMgr::Free(g_DefaultPoolId,puVar2);
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
        }
        else {
          *puVar2 = *(undefined8 *)(param_1 + 0x20);
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
          *(undefined8 **)(param_1 + 0x20) = puVar2;
        }
      }
      else {
        puVar2[1] = 0;
        *(undefined1 *)(param_1 + 0x39) = 1;
        puVar3 = puVar2;
      }
    }
    else {
      puVar1 = (undefined8 *)*puVar2;
      puVar3 = puVar2;
    }
  }
  return 1;
}



// FUNCTION 14312ed50 UnregisterTrigger body=167 status=ok
// SIG undefined UnregisterTrigger(void)

undefined8 CAkStateMgr::UnregisterTrigger(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  puVar3 = (undefined8 *)0x0;
  while (puVar2 = puVar3, puVar3 = puVar1, puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    if (puVar3[1] == param_2) {
      if (puVar3 == *(undefined8 **)(param_1 + 0x40)) {
        *(undefined8 **)(param_1 + 0x40) = puVar1;
      }
      else {
        *puVar2 = puVar1;
      }
      if (puVar3 == *(undefined8 **)(param_1 + 0x48)) {
        *(undefined8 **)(param_1 + 0x48) = puVar2;
      }
      if ((puVar3 < *(undefined8 **)(param_1 + 0x58)) ||
         (*(undefined8 **)(param_1 + 0x58) + (ulonglong)*(uint *)(param_1 + 0x60) * 4 <= puVar3)) {
        AK::MemoryMgr::Free(g_DefaultPoolId,puVar3);
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
        puVar3 = puVar2;
      }
      else {
        *puVar3 = *(undefined8 *)(param_1 + 0x50);
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
        *(undefined8 **)(param_1 + 0x50) = puVar3;
        puVar3 = puVar2;
      }
    }
  }
  return 1;
}



// FUNCTION 14312ee00 CAkListener body=395 status=ok
// SIG undefined CAkListener(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * CAkListener::CAkListener(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_145ac6d10;
  param_1[3] = DAT_146b50860;
  param_1[2] = 0;
  puVar1 = param_1;
  if (DAT_146b50868 != (undefined8 *)0x0) {
    *(undefined8 **)((longlong)DAT_146b50860 + 0x10) = param_1;
    puVar1 = DAT_146b50868;
  }
  DAT_146b50868 = puVar1;
  _DAT_146b50858 = _DAT_146b50858 + 1;
  DAT_146b50860 = param_1;
  *param_1 = &PTR__scalar_deleting_destructor__145ac6d20;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) & 0xff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3f800000;
  param_1[0xe] = 0x3f800000;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)((longlong)param_1 + 0x6c);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(param_1 + 0xe);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)((longlong)param_1 + 0x74);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)((longlong)param_1 + 100);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_1 + 0xd);
  return param_1;
}



// FUNCTION 14312ef90 operator!= body=65 status=ok
// SIG undefined operator!=(void)

undefined8 BaseGenParams::operator!=(float *param_1,float *param_2)

{
  if (((*param_2 == *param_1) && (param_2[1] == param_1[1])) && (param_2[2] == param_1[2])) {
    if ((((*(byte *)(param_2 + 3) ^ *(byte *)(param_1 + 3)) & 7) == 0) &&
       (((*(byte *)(param_2 + 3) ^ *(byte *)(param_1 + 3)) & 8) == 0)) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14312efe0 FUN_14312efe0 body=215 status=ok
// SIG undefined FUN_14312efe0(void)

void FUN_14312efe0(int *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_res8 [8];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 local_40;
  int local_38;
  uint local_34;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  local_40 = *(undefined8 *)(param_2 + 0x30);
  local_34 = (local_34 >> 8 & 0xfffff0) << 8;
  local_30 = param_2 + 0x14;
  local_28 = param_2 + 0x1c;
  local_38 = param_1[1];
  puVar2 = (undefined4 *)FUN_143182420(param_2,local_res8);
  local_34 = *puVar2;
  local_20 = param_2;
  local_18 = FARSupportInterface::GetXRTrackingSystem(param_2);
  if (local_18 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = local_18 + 0xd0;
  }
  local_50 = (**(code **)(**(longlong **)(param_2 + 0x50) + 8))();
  if (*param_1 != 0) {
    CAkPlayingMgr::NotifySpeakerVolumeMatrix(DAT_146b50b00,*param_1,local_58);
    return;
  }
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x50) + 0x68))();
  CAkBusCallbackMgr::DoVolumeCallback(DAT_146b50b08,uVar1,local_58);
  return;
}



// FUNCTION 14312f0c0 FUN_14312f0c0 body=134 status=ok
// SIG undefined FUN_14312f0c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14312f0c0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_145ac6d10;
  puVar2 = (undefined8 *)0x0;
  if (param_1[2] != 0) {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
    puVar2 = (undefined8 *)param_1[2];
  }
  puVar1 = (undefined8 *)param_1[3];
  if (param_1 != DAT_146b50868) {
    puVar1[2] = puVar2;
    puVar2 = DAT_146b50868;
  }
  DAT_146b50868 = puVar2;
  if (param_1 == DAT_146b50860) {
    DAT_146b50860 = puVar1;
  }
  _DAT_146b50858 = _DAT_146b50858 + -1;
  *param_1 = &PTR_FUN_145ac68a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14312f150 `scalar_deleting_destructor' body=180 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * CAkListener::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__145ac6d20;
  if ((void *)param_1[4] != (void *)0x0) {
    AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)param_1[4]);
    param_1[4] = 0;
  }
  *param_1 = &PTR_FUN_145ac6d10;
  puVar2 = (undefined8 *)0x0;
  if (param_1[2] != 0) {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
    puVar2 = (undefined8 *)param_1[2];
  }
  puVar1 = (undefined8 *)param_1[3];
  if (param_1 != DAT_146b50868) {
    puVar1[2] = puVar2;
    puVar2 = DAT_146b50868;
  }
  DAT_146b50868 = puVar2;
  if (param_1 == DAT_146b50860) {
    DAT_146b50860 = puVar1;
  }
  _DAT_146b50858 = _DAT_146b50858 + -1;
  *param_1 = &PTR_FUN_145ac68a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 14312f210 FUN_14312f210 body=586 status=ok
// SIG undefined FUN_14312f210(void)

ulonglong FUN_14312f210(longlong param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = (float)param_2;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 2) {
    if (0.0 <= fVar3) {
      if (fVar3 < 1.0) {
        fVar4 = (float)(((uint)(1.0 - fVar3) & 0x7fffff) + 0x3f800000);
        fVar5 = fVar4 + 1.0;
        return (ulonglong)
               (uint)((((fVar4 * fVar4 * fVar4 - 1.0) * 1.1581186) / (fVar5 * fVar5 * fVar5)) *
                      -20.0 - ((float)((uint)(1.0 - fVar3) >> 0x17 & 0xff) - 127.0) * 6.0206);
      }
      return 0x45800000;
    }
    if (-1.0 < fVar3) {
      fVar4 = (float)(((uint)(fVar3 + 1.0) & 0x7fffff) + 0x3f800000);
      fVar5 = fVar4 + 1.0;
      return (ulonglong)
             (uint)((((fVar4 * fVar4 * fVar4 - 1.0) * 1.1581186) / (fVar5 * fVar5 * fVar5)) * 20.0 +
                   ((float)((uint)(fVar3 + 1.0) >> 0x17 & 0xff) - 127.0) * 6.0206);
    }
    return 0xc5800000;
  }
  if (iVar1 == 3) {
    if (fVar3 < -37.0) {
      return 0;
    }
    uVar2 = (uint)(longlong)(fVar3 * 27866352.0 + 1.0653532e+09);
    fVar3 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
    return (ulonglong)
           (uint)(((fVar3 * 0.32518977 + 0.020805772) * fVar3 + 0.65304345) *
                 (float)(uVar2 & 0xff800000));
  }
  if (iVar1 == 4) {
    if (fVar3 * 0.05 < -37.0) {
      return 0;
    }
    uVar2 = (uint)(longlong)(fVar3 * 0.05 * 27866352.0 + 1.0653532e+09);
    fVar3 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
    return (ulonglong)
           (uint)(((fVar3 * 0.32518977 + 0.020805772) * fVar3 + 0.65304345) *
                 (float)(uVar2 & 0xff800000));
  }
  return param_2;
}



// FUNCTION 14312f460 FUN_14312f460 body=178 status=ok
// SIG undefined FUN_14312f460(void)

float FUN_14312f460(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (0.0 < *(float *)(param_2 + 0x60)) {
    fVar5 = *(float *)(param_2 + 0x1c) - *(float *)(param_1 + 0x7c);
    fVar3 = *(float *)(param_2 + 0x18) - *(float *)(param_1 + 0x78);
    fVar2 = *(float *)(param_2 + 0x20) - *(float *)(param_1 + 0x80);
    fVar1 = *(float *)(param_2 + 100);
    fVar4 = fVar5 * *(float *)(param_1 + 0x40) + fVar3 * *(float *)(param_1 + 0x3c) +
            fVar2 * *(float *)(param_1 + 0x44);
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    fVar2 = fVar5 * *(float *)(param_1 + 0x58) + fVar3 * *(float *)(param_1 + 0x54) +
            fVar2 * *(float *)(param_1 + 0x5c);
    fVar1 = SQRT(fVar2 * fVar2 + fVar4 * fVar4) - fVar1;
    fVar2 = 0.0;
    if (0.0 <= fVar1) {
      fVar2 = fVar1;
    }
    return fVar2 / *(float *)(param_2 + 0x58);
  }
  return 0.0;
}



// FUNCTION 14312f520 FUN_14312f520 body=727 status=ok
// SIG undefined FUN_14312f520(void)

void FUN_14312f520(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 local_res8 [8];
  
  lVar4 = AkPositioningParams::GetRawAttenuation(param_1 + 0x138);
  lVar3 = DAT_146b50b68;
  plVar6 = (longlong *)0x0;
  fVar14 = 0.0;
  fVar16 = 0.0;
  plVar8 = plVar6;
  if (lVar4 != 0) {
    if ((*(byte *)(lVar4 + 0xa3) == 0xff) ||
       (plVar8 = (longlong *)(((ulonglong)*(byte *)(lVar4 + 0xa3) + 3) * 0x10 + lVar4), *plVar8 == 0
       )) {
      plVar8 = plVar6;
    }
    if ((*(byte *)(lVar4 + 0xa4) != 0xff) &&
       (plVar5 = (longlong *)(((ulonglong)*(byte *)(lVar4 + 0xa4) + 3) * 0x10 + lVar4), *plVar5 != 0
       )) {
      plVar6 = plVar5;
    }
    if ((*(byte *)(lVar4 + 0xa7) & 1) != 0) {
      fVar14 = *(float *)(param_1 + 0x144);
      fVar16 = *(float *)(param_1 + 0x148);
    }
  }
  lVar4 = *param_2;
  lVar2 = *(longlong *)(param_4 + 0xd0);
  lVar7 = (ulonglong)*(uint *)(param_2 + 1) * 0x68 + lVar4;
  fVar13 = 100.0;
  fVar15 = 100.0;
  do {
    fVar11 = fVar13;
    fVar12 = fVar15;
    if (lVar2 == *(longlong *)(lVar4 + 0x50)) {
      uVar1 = *(undefined4 *)(lVar4 + 0x60);
      fVar12 = *(float *)(lVar4 + 0x5c) * fVar14;
      fVar11 = *(float *)(lVar4 + 0x5c) * fVar16;
      if ((plVar8 != (longlong *)0x0) &&
         (fVar9 = (float)FUN_143131860(plVar8,uVar1,0,local_res8), fVar12 <= fVar9)) {
        fVar12 = fVar9;
      }
      if ((plVar6 != (longlong *)0x0) &&
         (fVar9 = (float)FUN_143131860(plVar6,uVar1,0,local_res8), fVar11 <= fVar9)) {
        fVar11 = fVar9;
      }
      fVar9 = *(float *)(lVar4 + 0x3c) * 100.0;
      if (((*(char *)(lVar3 + 4) != '\0') && (*(longlong *)(lVar3 + 0x48) != 0)) &&
         (fVar10 = (float)FUN_143131860(lVar3 + 0x48,fVar9,0,local_res8), fVar12 <= fVar10)) {
        fVar12 = fVar10;
      }
      if (((*(char *)(lVar3 + 5) != '\0') && (*(longlong *)(lVar3 + 0x58) != 0)) &&
         (fVar9 = (float)FUN_143131860(lVar3 + 0x58,fVar9,0,local_res8), fVar11 <= fVar9)) {
        fVar11 = fVar9;
      }
      if (*(int *)(param_4 + 0x164) == 0) {
        fVar9 = *(float *)(lVar4 + 0x40) * 100.0;
        if (((*(char *)(lVar3 + 1) != '\0') && (*(longlong *)(lVar3 + 0x18) != 0)) &&
           (fVar10 = (float)FUN_143131860(lVar3 + 0x18,fVar9,0,local_res8), fVar12 <= fVar10)) {
          fVar12 = fVar10;
        }
        if (((*(char *)(lVar3 + 2) != '\0') && (*(longlong *)(lVar3 + 0x28) != 0)) &&
           (fVar9 = (float)FUN_143131860(lVar3 + 0x28,fVar9,0,local_res8), fVar11 <= fVar9)) {
          fVar11 = fVar9;
        }
      }
      if (fVar15 <= fVar12) {
        fVar12 = fVar15;
      }
      if (fVar13 <= fVar11) {
        fVar11 = fVar13;
      }
    }
    lVar4 = lVar4 + 0x68;
    fVar13 = fVar11;
    fVar15 = fVar12;
  } while (lVar4 != lVar7);
  if (fVar11 <= *(float *)(param_4 + 0xdc)) {
    fVar11 = *(float *)(param_4 + 0xdc);
  }
  fVar14 = *(float *)(param_4 + 0xd8);
  if (*(float *)(param_4 + 0xd8) <= fVar12) {
    fVar14 = fVar12;
  }
  *(float *)(param_4 + 0xdc) = fVar11;
  *(float *)(param_4 + 0xd8) = fVar14;
  return;
}



// FUNCTION 14312f800 FUN_14312f800 body=643 status=ok
// SIG undefined FUN_14312f800(void)

float FUN_14312f800(longlong param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = param_3[7] - *(float *)(param_1 + 0x7c);
  param_2 = param_2 * *(float *)(param_1 + 0x84);
  fVar4 = param_3[8] - *(float *)(param_1 + 0x80);
  fVar5 = param_3[6] - *(float *)(param_1 + 0x78);
  param_3[0x16] = param_2;
  fVar1 = param_3[0x19];
  fVar6 = SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4);
  param_2 = fVar6 / param_2;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar1 = param_2 - fVar1;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  param_3[0x18] = fVar1;
  fVar1 = 0.0;
  param_3[9] = param_2;
  if (0.0 < fVar6) {
    fVar2 = (fVar3 * param_3[1] + fVar5 * *param_3 + fVar4 * param_3[2]) * (-1.0 / fVar6);
    if (fVar2 < 1.0) {
      if (fVar2 <= -1.0) {
        fVar2 = -1.0;
      }
    }
    else {
      fVar2 = 1.0;
    }
    fVar1 = ABS(fVar2);
    fVar1 = 1.5379527 -
            (((((fVar1 * 84.31466 - 242.71996) * fVar1 + 262.81305) * fVar1 - 131.11235) * fVar1 +
             29.66154) * fVar1 - 1.4518384) * fVar1;
    if (fVar2 < 0.0) {
      fVar1 = 3.1415927 - fVar1;
    }
  }
  param_3[10] = fVar1;
  if (fVar6 <= 0.0) {
    param_3[0xb] = 0.0;
  }
  else {
    fVar6 = (fVar3 * *(float *)(param_1 + 100) + fVar5 * *(float *)(param_1 + 0x60) +
            fVar4 * *(float *)(param_1 + 0x68)) / fVar6;
    if (fVar6 < 1.0) {
      if (fVar6 <= -1.0) {
        fVar6 = -1.0;
      }
    }
    else {
      fVar6 = 1.0;
    }
    fVar1 = ABS(fVar6);
    fVar1 = 1.5379527 -
            (((((fVar1 * 84.31466 - 242.71996) * fVar1 + 262.81305) * fVar1 - 131.11235) * fVar1 +
             29.66154) * fVar1 - 1.4518384) * fVar1;
    if (fVar6 < 0.0) {
      param_3[0xb] = 3.1415927 - fVar1;
    }
    else {
      param_3[0xb] = fVar1;
    }
  }
  return param_2;
}



// FUNCTION 14312fa90 FUN_14312fa90 body=457 status=ok
// SIG undefined FUN_14312fa90(void)

void FUN_14312fa90(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined8 uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 local_res8 [8];
  
  if (((*(float *)(param_1 + 0x118) == *(float *)(param_1 + 0x128)) &&
      (*(float *)(param_1 + 0x11c) == *(float *)(param_1 + 300))) &&
     (*(float *)(param_1 + 0x120) == *(float *)(param_1 + 0x130))) {
    if (((((*(byte *)(param_1 + 0x124) ^ *(byte *)(param_1 + 0x134)) & 7) == 0) &&
        (((*(byte *)(param_1 + 0x124) ^ *(byte *)(param_1 + 0x134)) & 8) == 0)) &&
       ((*(uint *)(param_3 + 0x168) >> 1 & 1) == 0)) {
      uVar5 = *(uint *)(param_3 + 0x150);
      pbVar2 = (byte *)FUN_143182420(param_3,local_res8);
      uVar5 = (*pbVar2 + 3 & 0xfffffffc) * (uVar5 & 0xff);
      if (uVar5 == 0) {
        return;
      }
      _guard_xfg_dispatch_icall_nop
                (*(void **)(param_3 + 0x30),*(void **)(param_3 + 0x38),(ulonglong)uVar5 << 2);
      return;
    }
  }
  uVar3 = AkMixConnection::GetOutputBusCtx(param_3);
  uVar3 = CAkOutputMgr::FindDevice(uVar3);
  fVar8 = *(float *)(param_1 + 0x118) * 0.005 + 0.5;
  if (0.0 <= fVar8) {
    if (1.0 <= fVar8) {
      fVar8 = 1.0;
    }
  }
  else {
    fVar8 = 0.0;
  }
  fVar6 = *(float *)(param_1 + 0x11c) * 0.005 + 0.5;
  fVar7 = 0.0;
  if ((0.0 <= fVar6) && (fVar7 = fVar6, 1.0 <= fVar6)) {
    fVar7 = 1.0;
  }
  fVar6 = *(float *)(param_1 + 0x120);
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  puVar4 = (undefined4 *)FUN_143182420(param_3,local_res8);
  FUN_143165e50(fVar8,fVar7,fVar6 * 0.01,*(byte *)(param_1 + 0x124) & 7,param_2,*puVar4,uVar1,uVar3)
  ;
  return;
}



// FUNCTION 14312fc60 FUN_14312fc60 body=6537 status=ok
// SIG undefined FUN_14312fc60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 * FUN_14312fc60(longlong param_1,longlong *param_2,ulonglong param_3,longlong param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 *puVar3;
  float *pfVar4;
  float fVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined1 auVar8 [16];
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  char cVar17;
  uint uVar18;
  undefined1 *puVar19;
  longlong lVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  byte *pbVar23;
  ulonglong uVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong lVar29;
  float *pfVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  float *pfVar34;
  byte bVar35;
  longlong lVar36;
  undefined1 *puVar37;
  uint uVar38;
  float fVar39;
  float *pfVar40;
  uint uVar41;
  uint uVar42;
  ulonglong uVar43;
  longlong *plVar44;
  void *pvVar45;
  int iVar46;
  uint uVar47;
  longlong *plVar48;
  float fVar49;
  undefined4 uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  float fVar55;
  uint local_res18;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [32];
  uint local_1b8 [4];
  undefined8 local_1a8;
  uint auStack_1a0 [2];
  longlong local_198 [3];
  float fStack_17c;
  float local_178 [4];
  void *local_168;
  float local_160;
  uint uStack_15c;
  longlong local_158;
  uint local_150;
  float local_14c;
  longlong local_148;
  float *local_140;
  float *local_138;
  float fStack_130;
  float *local_128;
  float *pfStack_120;
  float *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined4 local_f8;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  uVar18 = (uint)param_3;
  uVar47 = uVar18 & 0xf00;
  uVar24 = param_3 & 0xffffffff;
  uVar31 = param_3 & 0xffffffff;
  if (uVar47 == 0x100) {
    bVar35 = 0;
    uVar38 = (uint)(param_3 >> 0xc) & 0x637;
    uVar27 = uVar38;
    if ((param_3 >> 0xc & 0x637) != 0) {
      do {
        bVar35 = bVar35 + 1;
        uVar27 = uVar27 & uVar27 - 1;
      } while (uVar27 != 0);
    }
    uVar31 = (ulonglong)(uVar38 << 0xc | (uint)bVar35 | 0x100);
  }
  fVar55 = *(float *)(param_1 + 0x120) * 0.01;
  uStack_1e0 = 0x14312fd51;
  uStack_15c = uVar47;
  local_150 = uVar18;
  local_14c = fVar55;
  puVar19 = (undefined1 *)FUN_143182420(param_4);
  if (*(uint *)(g_pRegistryMgr + 0x30) != 0) {
    puVar19 = *(undefined1 **)(g_pRegistryMgr + 0x28);
    for (puVar6 = *(undefined8 **)
                   (puVar19 +
                   ((*(ulonglong *)(param_4 + 0xd0) & 0xffffffff) %
                   (ulonglong)*(uint *)(g_pRegistryMgr + 0x30)) * 8); puVar6 != (undefined8 *)0x0;
        puVar6 = (undefined8 *)*puVar6) {
      if (puVar6[1] == *(ulonglong *)(param_4 + 0xd0)) {
        if (puVar6 + 2 == (longlong *)0x0) {
          return puVar19;
        }
        puVar19 = (undefined1 *)puVar6[2];
        local_158 = 0;
        if (2 < *(uint *)(puVar19 + 0x40)) {
          puVar19 = *(undefined1 **)(puVar19 + 0x38);
          local_158 = *(longlong *)(puVar19 + 0x10);
        }
        if (local_158 == 0) {
          return puVar19;
        }
        uVar43 = 0;
        uVar22 = (ulonglong)*(uint *)(param_2 + 1) * 8;
        uVar28 = uVar22 + 0xf;
        if (uVar28 <= uVar22) {
          uVar28 = 0xffffffffffffff0;
        }
        uStack_1e0 = 0x14312fdf4;
        lVar33 = -(uVar28 & 0xfffffffffffffff0);
        uVar22 = (ulonglong)*(uint *)(param_2 + 1) * 4;
        uVar28 = uVar22 + 0xf;
        if (uVar28 <= uVar22) {
          uVar28 = 0xffffffffffffff0;
        }
        local_148 = (longlong)local_178 + lVar33;
        *(undefined8 *)(auStack_1d8 + lVar33 + -8) = 0x14312fe20;
        lVar32 = -(uVar28 & 0xfffffffffffffff0);
        lVar36 = lVar32 + lVar33 + -0x1d8;
        pfVar30 = (float *)((longlong)local_178 + lVar32 + lVar33);
        fVar54 = 1.0;
        if (DAT_1467be0f0 < *(float *)(param_4 + 0x1c)) {
          fVar54 = 1.0 / *(float *)(param_4 + 0x1c);
        }
        puVar19 = (undefined1 *)*param_2;
        local_128 = pfVar30;
        do {
          if (*(longlong *)(param_4 + 0xd0) == *(longlong *)(puVar19 + 0x50)) {
            *(undefined1 **)((longlong)local_178 + lVar33 + uVar43 * 8) = puVar19;
            if (*(int *)(param_4 + 0x164) == 0) {
              fVar39 = *(float *)(puVar19 + 0x30);
            }
            else if (*(int *)(param_4 + 0x164) == 1) {
              fVar39 = *(float *)(puVar19 + 0x34);
            }
            else {
              fVar39 = *(float *)(puVar19 + 0x38);
            }
            pfVar30[uVar43] = fVar39 * fVar54;
            uVar43 = (ulonglong)((int)uVar43 + 1);
          }
          puVar19 = puVar19 + 0x68;
        } while (puVar19 != (undefined1 *)((ulonglong)*(uint *)(param_2 + 1) * 0x68 + *param_2));
        local_178[1] = (float)uVar43;
        if (local_178[1] == 0.0) {
          return puVar19;
        }
        local_178[0] = (float)(uVar18 & 0xff);
        iVar46 = ((local_res18 & 0xff) + 3 >> 2) * (int)local_178[0];
        local_160 = (float)(iVar46 * 0x10);
        local_178[2] = (float)(iVar46 * 4);
        uVar27 = (int)local_160 * (int)local_178[1];
        uVar28 = (ulonglong)uVar27 + 0xf;
        if (uVar28 <= uVar27) {
          uVar28 = 0xffffffffffffff0;
        }
        *(undefined8 *)(auStack_1d8 + lVar32 + lVar33 + -8) = 0x14312ff02;
        lVar9 = -(uVar28 & 0xfffffffffffffff0);
        pvVar45 = (void *)((longlong)local_178 + lVar9 + lVar32 + lVar33);
        local_168 = pvVar45;
        *(undefined8 *)(auStack_1d8 + lVar9 + lVar32 + lVar33 + -8) = 0x14312ff18;
        puVar19 = _guard_xfg_dispatch_icall_nop(pvVar45,0,(ulonglong)uVar27);
        lVar29 = local_158;
        fVar54 = local_178[1];
        fStack_130 = *(float *)(param_1 + 0x138) * 0.01;
        local_e8 = fStack_130;
        fStack_e4 = fStack_130;
        fStack_e0 = fStack_130;
        fStack_dc = fStack_130;
        puVar37 = auStack_1d8 + lVar9 + lVar36 + 0x1d8;
        if ((char)uVar31 == '\0') goto LAB_1431308d3;
        if (*(char *)(local_158 + 0x88) == '\0') {
          uVar47 = 0;
          fVar55 = 1.0 / SQRT((float)(uVar31 & 0xff));
          do {
            pfVar30 = (float *)((longlong)local_168 + (ulonglong)(uVar47 * (int)local_178[2]) * 4);
            puVar19 = (undefined1 *)(ulonglong)(local_res18 & 0xf00);
            uVar18 = (uint)(uVar31 & 0xff);
            if ((local_res18 & 0xf00) < 0x200) {
              uVar27 = local_res18 - (local_res18 >> 0xf & 1);
              puVar19 = (undefined1 *)(ulonglong)uVar27;
              bVar35 = (byte)uVar27;
              uVar24 = (ulonglong)bVar35;
              local_160 = fVar55 / (float)uVar24;
              if (bVar35 != 0) {
                puVar19 = (undefined1 *)(longlong)(int)local_160;
                pfVar40 = pfVar30;
                for (; uVar24 != 0; uVar24 = uVar24 - 1) {
                  *pfVar40 = local_160;
                  pfVar40 = pfVar40 + 1;
                }
              }
              uVar27 = 1;
              if (1 < uVar18) {
                do {
                  puVar19 = (undefined1 *)(ulonglong)(byte)local_res18;
                  if ((byte)local_res18 != 0) {
                    uVar38 = (local_res18 & 0xff) + 3;
                    *(undefined8 *)(auStack_1d8 + lVar9 + lVar32 + lVar33 + -8) = 0x1431308a7;
                    puVar19 = _guard_xfg_dispatch_icall_nop
                                        (pfVar30 + (uVar38 & 0xfffffffc) * uVar27,
                                         pfVar30 + (uVar27 * 4 + -4) * (uVar38 >> 2),
                                         (ulonglong)(byte)local_res18 << 2);
                  }
                  uVar27 = uVar27 + 1;
                } while (uVar27 < uVar18);
              }
            }
            else {
              uVar27 = 0;
              if (uVar18 != 0) {
                do {
                  puVar19 = (undefined1 *)
                            (ulonglong)(((local_res18 & 0xff) + 3 & 0xfffffffc) * uVar27);
                  uVar27 = uVar27 + 1;
                  pfVar30[(longlong)puVar19] = fVar55;
                } while (uVar27 < uVar18);
              }
            }
            uVar47 = uVar47 + 1;
          } while (uVar47 < (uint)fVar54);
        }
        else {
          *(undefined8 *)(auStack_1d8 + lVar9 + lVar32 + lVar33 + -8) = 0x14312ff65;
          lVar20 = AkPositioningParams::GetRawAttenuation();
          plVar44 = (longlong *)0x0;
          plVar48 = (longlong *)0x0;
          if (lVar20 != 0) {
            if ((*(byte *)(lVar20 + 0xa5) == 0xff) ||
               (plVar44 = (longlong *)(((ulonglong)*(byte *)(lVar20 + 0xa5) + 3) * 0x10 + lVar20),
               *plVar44 == 0)) {
              plVar44 = (longlong *)0x0;
            }
            if ((*(byte *)(lVar20 + 0xa6) == 0xff) ||
               (plVar48 = (longlong *)(((ulonglong)*(byte *)(lVar20 + 0xa6) + 3) * 0x10 + lVar20),
               *plVar48 == 0)) {
              plVar48 = (longlong *)0x0;
            }
          }
          if ((*(byte *)(param_1 + 0x14c) & 0x38) == 0) {
            *(undefined8 *)(auStack_1d8 + lVar9 + lVar32 + lVar33 + -8) = 0x14312ffe3;
            cVar17 = BaseGenParams::operator!=(param_1 + 0x128,param_1 + 0x118);
            pvVar45 = local_168;
            fVar54 = local_178[1];
            if (((cVar17 == '\0') && ((*(uint *)(param_4 + 0x168) >> 1 & 1) == 0)) &&
               ((uint)local_178[1] < 2)) {
              uVar18 = ((local_res18 & 0xff) + 3 & 0xfffffffc) * (int)local_178[0];
              puVar19 = (undefined1 *)(ulonglong)uVar18;
              if (uVar18 != 0) {
                pvVar7 = *(void **)(param_4 + 0x38);
                *(undefined8 *)(auStack_1d8 + lVar9 + lVar32 + lVar33 + -8) = 0x143130036;
                puVar19 = _guard_xfg_dispatch_icall_nop(pvVar45,pvVar7,(ulonglong)uVar18 << 2);
              }
            }
            else {
              *(undefined8 *)(auStack_1d8 + lVar9 + lVar32 + lVar33 + -8) = 0x143130043;
              uVar21 = AkMixConnection::GetOutputBusCtx(param_4);
              *(undefined8 *)(auStack_1d8 + lVar9 + lVar32 + lVar33 + -8) = 0x14313004b;
              uVar21 = CAkOutputMgr::FindDevice(uVar21);
              pvVar45 = local_168;
              *(undefined8 *)((longlong)auStack_1a0 + lVar9 + lVar32 + lVar33) = uVar21;
              *(void **)((longlong)&local_1a8 + lVar9 + lVar32 + lVar33) = pvVar45;
              *(uint *)((longlong)local_1b8 + lVar9 + lVar32 + lVar33 + 8) = local_res18;
              *(uint *)((longlong)local_1b8 + lVar9 + lVar32 + lVar33) = uVar18;
              *(undefined8 *)(auStack_1d8 + lVar9 + lVar32 + lVar33 + -8) = 0x1431300db;
              puVar19 = (undefined1 *)FUN_143165e50();
            }
            fVar55 = local_178[2];
            uVar18 = 1;
            puVar37 = auStack_1d8 + lVar9 + lVar36 + 0x1d8;
            fVar39 = local_178[0];
            if (1 < (uint)fVar54) {
              do {
                uVar47 = ((local_res18 & 0xff) + 3 & 0xfffffffc) * (int)fVar39;
                puVar19 = (undefined1 *)(ulonglong)uVar47;
                if (uVar47 != 0) {
                  *(undefined8 *)(auStack_1d8 + lVar9 + lVar32 + lVar33 + -8) = 0x14313011d;
                  puVar19 = _guard_xfg_dispatch_icall_nop
                                      ((void *)((longlong)pvVar45 +
                                               (ulonglong)(uVar18 * (int)fVar55) * 4),pvVar45,
                                       (ulonglong)uVar47 << 2);
                  fVar39 = local_178[0];
                }
                uVar18 = uVar18 + 1;
                puVar37 = auStack_1d8 + lVar9 + lVar36 + 0x1d8;
                uVar47 = uStack_15c;
              } while (uVar18 < (uint)fVar54);
            }
            goto LAB_1431308d3;
          }
          *(undefined8 *)(auStack_1d8 + lVar9 + lVar32 + lVar33 + -8) = 0x14313013c;
          uVar21 = AkMixConnection::GetOutputBusCtx(param_4);
          *(undefined8 *)(auStack_1d8 + lVar9 + lVar32 + lVar33 + -8) = 0x143130144;
          local_138 = (float *)CAkOutputMgr::FindDevice(uVar21);
          lVar20 = local_148;
          local_140 = (float *)(lVar29 + 0x78);
          uVar47 = 0;
          do {
            puVar6 = *(undefined8 **)(lVar20 + (ulonglong)uVar47 * 8);
            fVar54 = *(float *)((longlong)puVar6 + 100);
            fVar39 = *(float *)((longlong)puVar6 + 0x44);
            uVar50 = *(undefined4 *)(puVar6 + 9);
            fVar49 = ABS(fVar54);
            pfStack_120 = (float *)((longlong)local_168 +
                                   (ulonglong)(uVar47 * (int)local_178[2]) * 4);
            if (1.0 <= fVar49) {
              fVar39 = *(float *)((longlong)puVar6 + 0x24);
              if (fVar49 <= fVar39) {
                *(undefined8 *)(auStack_1d8 + lVar9 + lVar32 + lVar33 + -8) = 0x14313021f;
                fVar39 = _guard_xfg_dispatch_icall_nop(fVar49 / fVar39);
                fVar39 = (1.5707964 - fVar39) * 31.830988;
              }
              else {
                fVar39 = 1.0 - fVar39 / fVar49;
                fVar39 = fVar39 * fVar39 * 9.869605;
                fVar39 = ((fVar39 * 0.024241699 - 0.98069197) * fVar39 + 12.383739) * fVar39 +
                         50.034836;
              }
            }
            if ((plVar44 != (longlong *)0x0) || (plVar48 != (longlong *)0x0)) {
              fVar49 = 0.0;
              if (0.0 < *(float *)(puVar6 + 0xc)) {
                if (fVar54 <= 0.0) {
                  fVar54 = 0.0;
                }
                fVar49 = *(float *)((longlong)puVar6 + 0x1c) - local_140[1];
                fVar55 = fVar49 * *(float *)(lVar29 + 0x40) +
                         (*(float *)(puVar6 + 3) - *local_140) * *(float *)(lVar29 + 0x3c) +
                         (*(float *)(puVar6 + 4) - local_140[2]) * *(float *)(lVar29 + 0x44);
                fVar49 = fVar49 * *(float *)(lVar29 + 0x58) +
                         (*(float *)(puVar6 + 3) - *local_140) * *(float *)(lVar29 + 0x54) +
                         (*(float *)(puVar6 + 4) - local_140[2]) * *(float *)(lVar29 + 0x5c);
                fVar54 = SQRT(fVar49 * fVar49 + fVar55 * fVar55) - fVar54;
                if (fVar54 < 0.0) {
                  fVar54 = 0.0;
                }
                fVar49 = fVar54 / *(float *)(puVar6 + 0xb);
              }
              if (plVar44 != (longlong *)0x0) {
                *(undefined8 *)(auStack_1d8 + lVar9 + lVar32 + lVar33 + -8) = 0x1431302ed;
                fVar55 = (float)FUN_143131860(plVar44,fVar49,0,&local_148);
                fVar39 = fVar39 + fVar55;
              }
              fVar55 = local_14c;
              if (plVar48 != (longlong *)0x0) {
                *(undefined8 *)(auStack_1d8 + lVar9 + lVar32 + lVar33 + -8) = 0x143130309;
                uVar50 = FUN_143131860(plVar48,fVar49,0,&local_148);
                fVar55 = local_14c;
              }
            }
            if (10.0 <= fVar39) {
              if (fVar39 <= 20.0) {
                fVar39 = ((fVar39 - 10.0) + fVar39) - 10.0;
              }
              else if (100.0 <= fVar39) {
                fVar39 = 100.0;
              }
            }
            else {
              fVar39 = 0.0;
            }
            local_118 = (float *)*puVar6;
            uStack_110 = (undefined4)puVar6[1];
            uStack_10c = (undefined4)((ulonglong)puVar6[1] >> 0x20);
            uStack_100 = puVar6[3];
            uStack_108 = (undefined4)puVar6[2];
            uStack_104 = (undefined4)((ulonglong)puVar6[2] >> 0x20);
            local_f8 = *(undefined4 *)(puVar6 + 4);
            if ((*(byte *)(param_1 + 0x14c) & 0x38) == 8) {
              local_118 = *(float **)(local_158 + 0x60);
              uStack_110 = *(undefined4 *)(local_158 + 0x68);
              uStack_104 = *(undefined4 *)(local_158 + 0x74);
              uStack_10c = (undefined4)*(undefined8 *)(local_158 + 0x6c);
              uStack_108 = (undefined4)((ulonglong)*(undefined8 *)(local_158 + 0x6c) >> 0x20);
            }
            *(float **)((longlong)local_198 + lVar9 + lVar32 + lVar33 + 0x10) = local_138;
            pfVar30 = local_140;
            *(float **)((longlong)local_198 + lVar9 + lVar32 + lVar33 + 8) =
                 (float *)(lVar29 + 0x3c);
            *(float **)((longlong)local_198 + lVar9 + lVar32 + lVar33) = pfVar30;
            *(uint *)((longlong)auStack_1a0 + lVar9 + lVar32 + lVar33) = local_res18;
            *(undefined4 *)((longlong)&local_1a8 + lVar9 + lVar32 + lVar33) =
                 *(undefined4 *)((longlong)puVar6 + 0x4c);
            pfVar30 = pfStack_120;
            *(int *)((longlong)local_1b8 + lVar9 + lVar32 + lVar33 + 8) = (int)uVar31;
            *(float **)((longlong)local_1b8 + lVar9 + lVar32 + lVar33) = pfVar30;
            *(undefined8 *)(auStack_1d8 + lVar9 + lVar32 + lVar33 + -8) = 0x1431303d8;
            puVar19 = (undefined1 *)
                      CAkSpeakerPan::GetSpeakerVolumes(&local_118,fVar55,fVar39,uVar50);
            fVar16 = fStack_dc;
            fVar15 = fStack_e0;
            fVar49 = fStack_e4;
            fVar39 = local_e8;
            fVar54 = fStack_130;
            uVar18 = local_150;
            uVar47 = uVar47 + 1;
          } while (uVar47 < (uint)local_178[1]);
          if (fStack_130 < 1.0) {
            uVar24 = (ulonglong)(uint)local_160 + 0xf;
            if (uVar24 <= (uint)local_160) {
              uVar24 = 0xffffffffffffff0;
            }
            *(undefined8 *)(auStack_1d8 + lVar9 + lVar32 + lVar33 + -8) = 0x14313042f;
            lVar36 = -(uVar24 & 0xfffffffffffffff0);
            puVar37 = (undefined1 *)((longlong)local_178 + lVar36 + lVar9 + lVar32 + lVar33);
            fVar55 = *(float *)(param_1 + 0x11c) * 0.005 + 0.5;
            if (0.0 <= fVar55) {
              if (1.0 <= fVar55) {
                fVar55 = 1.0;
              }
            }
            else {
              fVar55 = 0.0;
            }
            fVar5 = *(float *)(param_1 + 0x120);
            *(float **)((longlong)auStack_1a0 + lVar36 + lVar9 + lVar32 + lVar33) = local_138;
            *(undefined1 **)((longlong)&local_1a8 + lVar36 + lVar9 + lVar32 + lVar33) = puVar37;
            *(uint *)((longlong)local_1b8 + lVar36 + lVar9 + lVar32 + lVar33 + 8) = local_res18;
            *(uint *)((longlong)local_1b8 + lVar36 + lVar9 + lVar32 + lVar33) = uVar18;
            *(undefined8 *)(auStack_1d8 + lVar36 + lVar9 + lVar32 + lVar33 + -8) = 0x1431304d6;
            FUN_143165e50(uVar24 & 0xfffffffffffffff0,fVar55,fVar5 * 0.01);
            fVar55 = 1.0 - fVar54;
            uVar47 = 0;
            do {
              puVar19 = (undefined1 *)(ulonglong)(uVar47 * (int)local_178[2]);
              uVar24 = 0;
              uVar18 = ((local_res18 & 0xff) + 3 & 0xfffffffc) * (int)local_178[0];
              puVar25 = (undefined1 *)((longlong)local_168 + (longlong)puVar19 * 4);
              if (uVar18 != 0) {
                if (0xf < uVar18) {
                  uVar27 = 8;
                  do {
                    pfVar30 = (float *)(puVar25 + uVar24 * 4);
                    fVar5 = pfVar30[1];
                    fVar10 = pfVar30[2];
                    fVar11 = pfVar30[3];
                    pfVar40 = (float *)(puVar25 + uVar24 * 4);
                    *pfVar40 = fVar39 * *pfVar30;
                    pfVar40[1] = fVar49 * fVar5;
                    pfVar40[2] = fVar15 * fVar10;
                    pfVar40[3] = fVar16 * fVar11;
                    uVar38 = (int)uVar24 + 0x10;
                    uVar24 = (ulonglong)uVar38;
                    pfVar30 = (float *)(puVar25 + (ulonglong)(uVar27 - 4) * 4);
                    fVar5 = pfVar30[1];
                    fVar10 = pfVar30[2];
                    fVar11 = pfVar30[3];
                    pfVar40 = (float *)(puVar25 + (ulonglong)(uVar27 - 4) * 4);
                    *pfVar40 = fVar39 * *pfVar30;
                    pfVar40[1] = fVar49 * fVar5;
                    pfVar40[2] = fVar15 * fVar10;
                    pfVar40[3] = fVar16 * fVar11;
                    pfVar30 = (float *)(puVar25 + (ulonglong)uVar27 * 4);
                    fVar5 = pfVar30[1];
                    fVar10 = pfVar30[2];
                    fVar11 = pfVar30[3];
                    pfVar40 = (float *)(puVar25 + (ulonglong)uVar27 * 4);
                    *pfVar40 = fVar39 * *pfVar30;
                    pfVar40[1] = fVar49 * fVar5;
                    pfVar40[2] = fVar15 * fVar10;
                    pfVar40[3] = fVar16 * fVar11;
                    puVar19 = (undefined1 *)(ulonglong)(uVar27 + 4);
                    uVar27 = uVar27 + 0x10;
                    auVar52 = *(undefined1 (*) [16])(puVar25 + (longlong)puVar19 * 4);
                    pfVar30 = (float *)(puVar25 + (longlong)puVar19 * 4);
                    *pfVar30 = fVar39 * auVar52._0_4_;
                    pfVar30[1] = fVar49 * auVar52._4_4_;
                    pfVar30[2] = fVar15 * auVar52._8_4_;
                    pfVar30[3] = fVar16 * auVar52._12_4_;
                  } while (uVar38 < (uVar18 & 0xfffffff0));
                }
                uVar27 = (uint)uVar24;
                if (uVar27 < uVar18) {
                  uVar38 = uVar18 - uVar27;
                  if (3 < uVar38) {
                    lVar29 = uVar24 + 2;
                    uVar38 = ((uVar18 - uVar27) - 4 >> 2) + 1;
                    uVar31 = (ulonglong)uVar38;
                    uVar24 = (ulonglong)(uVar27 + uVar38 * 4);
                    pfVar30 = (float *)(puVar25 + lVar29 * 4);
                    do {
                      pfVar30[-2] = fVar54 * pfVar30[-2];
                      pfVar30[-1] = fVar54 * pfVar30[-1];
                      *pfVar30 = fVar54 * *pfVar30;
                      pfVar30[1] = fVar54 * pfVar30[1];
                      uVar31 = uVar31 - 1;
                      pfVar30 = pfVar30 + 4;
                    } while (uVar31 != 0);
                  }
                  puVar19 = (undefined1 *)(ulonglong)uVar38;
                  if ((uint)uVar24 < uVar18) {
                    uVar31 = (ulonglong)(uVar18 - (uint)uVar24);
                    pfVar30 = (float *)(puVar25 + uVar24 * 4);
                    do {
                      *pfVar30 = fVar54 * *pfVar30;
                      uVar31 = uVar31 - 1;
                      puVar19 = (undefined1 *)0x0;
                      pfVar30 = pfVar30 + 1;
                    } while (uVar31 != 0);
                  }
                }
              }
              uVar24 = 0;
              uVar18 = ((local_res18 & 0xff) + 3 & 0xfffffffc) * (int)local_178[0];
              if (uVar18 != 0) {
                if (0xf < uVar18) {
                  puVar19 = puVar37 + (ulonglong)(uVar18 - 1) * 4;
                  if ((puVar19 < puVar25) || (puVar25 + (ulonglong)(uVar18 - 1) * 4 < puVar37)) {
                    uVar31 = 8;
                    do {
                      pfVar30 = (float *)(puVar25 + uVar24 * 4);
                      fVar5 = pfVar30[1];
                      fVar10 = pfVar30[2];
                      fVar11 = pfVar30[3];
                      iVar46 = (int)uVar31;
                      uVar28 = (ulonglong)(iVar46 - 4);
                      pfVar40 = (float *)(puVar37 + uVar24 * 4);
                      fVar12 = pfVar40[1];
                      fVar13 = pfVar40[2];
                      fVar14 = pfVar40[3];
                      pfVar34 = (float *)(puVar25 + uVar24 * 4);
                      *pfVar34 = *pfVar40 * fVar55 + *pfVar30;
                      pfVar34[1] = fVar12 * fVar55 + fVar5;
                      pfVar34[2] = fVar13 * fVar55 + fVar10;
                      pfVar34[3] = fVar14 * fVar55 + fVar11;
                      uVar27 = (int)uVar24 + 0x10;
                      uVar24 = (ulonglong)uVar27;
                      pfVar30 = (float *)(puVar25 + uVar28 * 4);
                      fVar5 = pfVar30[1];
                      fVar10 = pfVar30[2];
                      fVar11 = pfVar30[3];
                      pfVar40 = (float *)(puVar37 + uVar28 * 4);
                      fVar12 = pfVar40[1];
                      fVar13 = pfVar40[2];
                      fVar14 = pfVar40[3];
                      pfVar34 = (float *)(puVar25 + uVar28 * 4);
                      *pfVar34 = *pfVar40 * fVar55 + *pfVar30;
                      pfVar34[1] = fVar12 * fVar55 + fVar5;
                      pfVar34[2] = fVar13 * fVar55 + fVar10;
                      pfVar34[3] = fVar14 * fVar55 + fVar11;
                      pfVar30 = (float *)(puVar25 + uVar31 * 4);
                      fVar5 = pfVar30[1];
                      fVar10 = pfVar30[2];
                      fVar11 = pfVar30[3];
                      pfVar40 = (float *)(puVar37 + uVar31 * 4);
                      fVar12 = pfVar40[1];
                      fVar13 = pfVar40[2];
                      fVar14 = pfVar40[3];
                      pfVar34 = (float *)(puVar25 + uVar31 * 4);
                      *pfVar34 = *pfVar40 * fVar55 + *pfVar30;
                      pfVar34[1] = fVar12 * fVar55 + fVar5;
                      pfVar34[2] = fVar13 * fVar55 + fVar10;
                      pfVar34[3] = fVar14 * fVar55 + fVar11;
                      puVar19 = (undefined1 *)(ulonglong)(iVar46 + 4);
                      uVar31 = (ulonglong)(iVar46 + 0x10);
                      auVar52 = *(undefined1 (*) [16])(puVar25 + (longlong)puVar19 * 4);
                      pfVar30 = (float *)(puVar37 + (longlong)puVar19 * 4);
                      fVar5 = pfVar30[1];
                      fVar10 = pfVar30[2];
                      fVar11 = pfVar30[3];
                      pfVar40 = (float *)(puVar25 + (longlong)puVar19 * 4);
                      *pfVar40 = *pfVar30 * fVar55 + auVar52._0_4_;
                      pfVar40[1] = fVar5 * fVar55 + auVar52._4_4_;
                      pfVar40[2] = fVar10 * fVar55 + auVar52._8_4_;
                      pfVar40[3] = fVar11 * fVar55 + auVar52._12_4_;
                    } while (uVar27 < (uVar18 & 0xfffffff0));
                  }
                }
                uVar27 = (uint)uVar24;
                if (uVar27 < uVar18) {
                  uVar38 = uVar18 - uVar27;
                  if (3 < uVar38) {
                    lVar29 = (longlong)puVar37 - (longlong)puVar25;
                    uVar38 = ((uVar18 - uVar27) - 4 >> 2) + 1;
                    pfVar30 = (float *)(puVar25 + (uVar24 + 1) * 4);
                    uVar31 = (ulonglong)uVar38;
                    uVar24 = (ulonglong)(uVar27 + uVar38 * 4);
                    do {
                      pfVar30[-1] = fVar55 * *(float *)(lVar29 + -4 + (longlong)pfVar30) +
                                    pfVar30[-1];
                      *pfVar30 = fVar55 * *(float *)(lVar29 + (longlong)pfVar30) + *pfVar30;
                      pfVar30[1] = fVar55 * *(float *)(lVar29 + 4 + (longlong)pfVar30) + pfVar30[1];
                      pfVar30[2] = fVar55 * *(float *)(lVar29 + 8 + (longlong)pfVar30) + pfVar30[2];
                      pfVar30 = pfVar30 + 4;
                      uVar31 = uVar31 - 1;
                    } while (uVar31 != 0);
                  }
                  puVar19 = (undefined1 *)(ulonglong)uVar38;
                  if ((uint)uVar24 < uVar18) {
                    pfVar30 = (float *)(puVar25 + uVar24 * 4);
                    uVar24 = (ulonglong)(uVar18 - (uint)uVar24);
                    do {
                      *pfVar30 = fVar55 * *(float *)(((longlong)puVar37 - (longlong)puVar25) +
                                                    (longlong)pfVar30) + *pfVar30;
                      pfVar30 = pfVar30 + 1;
                      uVar24 = uVar24 - 1;
                      puVar19 = (undefined1 *)0x0;
                    } while (uVar24 != 0);
                  }
                }
              }
              uVar47 = uVar47 + 1;
            } while (uVar47 < (uint)local_178[1]);
            uVar24 = (ulonglong)local_150;
            puVar37 = auStack_1d8 + lVar36 + lVar9 + lVar32 + lVar33;
            lVar29 = local_158;
            uVar47 = uStack_15c;
            fVar54 = local_178[1];
            goto LAB_1431308d3;
          }
        }
        uVar24 = (ulonglong)local_150;
        puVar37 = auStack_1d8 + lVar9 + lVar36 + 0x1d8;
        lVar29 = local_158;
        uVar47 = uStack_15c;
        fVar54 = local_178[1];
LAB_1431308d3:
        pvVar45 = local_168;
        if (((uVar24 & 0x8000) != 0) && ((local_res18 & 0x8000) != 0)) {
          uVar18 = 0;
          do {
            puVar19 = (undefined1 *)(ulonglong)(uVar18 * (int)local_178[2]);
            uVar18 = uVar18 + 1;
            *(undefined4 *)
             ((longlong)local_168 +
             (longlong)
             (puVar19 +
             (ulonglong)((local_res18 & 0xff) - 1) +
             (ulonglong)(((local_res18 & 0xff) + 3 & 0xfffffffc) * ((int)local_178[0] - 1U))) * 4) =
                 0x3f800000;
          } while (uVar18 < (uint)fVar54);
        }
        if (((*(longlong *)(lVar29 + 0x30) != 0) && (uVar47 == 0x100)) &&
           (puVar19 = (undefined1 *)(ulonglong)(local_res18 & 0xf00), (local_res18 & 0xf00) == 0x100
           )) {
          uVar47 = 0;
          puVar25 = puVar37;
          do {
            uVar18 = uVar47 * (int)local_178[2];
            uVar28 = (ulonglong)(((local_res18 & 0xff) + 3 >> 2) << 4);
            uVar31 = uVar28 + 0xf;
            if (uVar31 <= uVar28) {
              uVar31 = 0xffffffffffffff0;
            }
            puVar19 = (undefined1 *)(uVar31 & 0xfffffffffffffff0);
            *(undefined8 *)(puVar25 + -8) = 0x1431309b3;
            lVar33 = -(longlong)puVar19;
            puVar37 = puVar25 + lVar33;
            uVar28 = 0;
            uVar31 = 0;
            puVar26 = puVar25 + lVar33 + 0x60;
            uVar27 = 1;
            if ((byte)local_res18 != 0) {
              do {
                uVar38 = *(uint *)(lVar29 + 0x38) >> 0xc & uVar27;
                if ((uVar27 & local_res18 >> 0xc) == 0) {
                  if (uVar38 != 0) {
                    uVar31 = (ulonglong)((int)uVar31 + 1);
                  }
                }
                else if (uVar38 == 0) {
                  *(undefined4 *)(puVar26 + uVar28 * 4) = 0x3f800000;
                  uVar28 = (ulonglong)((int)uVar28 + 1);
                }
                else {
                  *(undefined4 *)(puVar26 + uVar28 * 4) =
                       *(undefined4 *)(*(longlong *)(lVar29 + 0x30) + uVar31 * 4);
                  uVar28 = (ulonglong)((int)uVar28 + 1);
                  uVar31 = (ulonglong)((int)uVar31 + 1);
                }
                puVar19 = (undefined1 *)(ulonglong)(byte)local_res18;
                uVar27 = uVar27 * 2;
              } while ((uint)uVar28 < (local_res18 & 0xff));
            }
            uVar27 = 0;
            if ((char)uVar24 != '\0') {
              do {
                uVar31 = 0;
                puVar19 = (undefined1 *)
                          (ulonglong)(((local_res18 & 0xff) + 3 & 0xfffffffc) * uVar27);
                puVar3 = (undefined1 *)
                         ((longlong)pvVar45 + (longlong)puVar19 * 4 + (ulonglong)uVar18 * 4);
                if ((byte)local_res18 != 0) {
                  uVar38 = local_res18 & 0xff;
                  if (0xf < uVar38) {
                    uVar28 = (ulonglong)((local_res18 & 0xff) - 1);
                    puVar19 = puVar26 + uVar28 * 4;
                    if ((puVar19 < puVar3) || (puVar3 + uVar28 * 4 < puVar26)) {
                      uVar28 = 8;
                      do {
                        pfVar30 = (float *)(puVar3 + uVar31 * 4);
                        fVar55 = pfVar30[1];
                        fVar54 = pfVar30[2];
                        fVar39 = pfVar30[3];
                        iVar46 = (int)uVar28;
                        uVar22 = (ulonglong)(iVar46 - 4);
                        pfVar40 = (float *)(puVar26 + uVar31 * 4);
                        fVar49 = pfVar40[1];
                        fVar15 = pfVar40[2];
                        fVar16 = pfVar40[3];
                        pfVar34 = (float *)(puVar3 + uVar31 * 4);
                        *pfVar34 = *pfVar40 * *pfVar30;
                        pfVar34[1] = fVar49 * fVar55;
                        pfVar34[2] = fVar15 * fVar54;
                        pfVar34[3] = fVar16 * fVar39;
                        uVar41 = (int)uVar31 + 0x10;
                        uVar31 = (ulonglong)uVar41;
                        pfVar30 = (float *)(puVar3 + uVar22 * 4);
                        fVar55 = pfVar30[1];
                        fVar54 = pfVar30[2];
                        fVar39 = pfVar30[3];
                        pfVar40 = (float *)(puVar26 + uVar22 * 4);
                        fVar49 = pfVar40[1];
                        fVar15 = pfVar40[2];
                        fVar16 = pfVar40[3];
                        pfVar34 = (float *)(puVar3 + uVar22 * 4);
                        *pfVar34 = *pfVar40 * *pfVar30;
                        pfVar34[1] = fVar49 * fVar55;
                        pfVar34[2] = fVar15 * fVar54;
                        pfVar34[3] = fVar16 * fVar39;
                        pfVar30 = (float *)(puVar3 + uVar28 * 4);
                        fVar55 = pfVar30[1];
                        fVar54 = pfVar30[2];
                        fVar39 = pfVar30[3];
                        pfVar40 = (float *)(puVar26 + uVar28 * 4);
                        fVar49 = pfVar40[1];
                        fVar15 = pfVar40[2];
                        fVar16 = pfVar40[3];
                        pfVar34 = (float *)(puVar3 + uVar28 * 4);
                        *pfVar34 = *pfVar40 * *pfVar30;
                        pfVar34[1] = fVar49 * fVar55;
                        pfVar34[2] = fVar15 * fVar54;
                        pfVar34[3] = fVar16 * fVar39;
                        puVar19 = (undefined1 *)(ulonglong)(iVar46 + 4);
                        uVar28 = (ulonglong)(iVar46 + 0x10);
                        auVar52 = *(undefined1 (*) [16])(puVar3 + (longlong)puVar19 * 4);
                        pfVar30 = (float *)(puVar26 + (longlong)puVar19 * 4);
                        fVar55 = pfVar30[1];
                        fVar54 = pfVar30[2];
                        fVar39 = pfVar30[3];
                        pfVar40 = (float *)(puVar3 + (longlong)puVar19 * 4);
                        *pfVar40 = *pfVar30 * auVar52._0_4_;
                        pfVar40[1] = fVar55 * auVar52._4_4_;
                        pfVar40[2] = fVar54 * auVar52._8_4_;
                        pfVar40[3] = fVar39 * auVar52._12_4_;
                      } while (uVar41 < (local_res18 & 0xf0));
                    }
                  }
                  uVar41 = (uint)uVar31;
                  if (uVar41 < uVar38) {
                    uVar38 = uVar38 - uVar41;
                    uVar42 = local_res18 & 0xff;
                    if (3 < uVar38) {
                      lVar32 = uVar31 + 1;
                      lVar36 = (longlong)puVar26 - (longlong)puVar3;
                      uVar38 = ((uVar42 - uVar41) - 4 >> 2) + 1;
                      uVar28 = (ulonglong)uVar38;
                      uVar31 = (ulonglong)(uVar41 + uVar38 * 4);
                      pfVar30 = (float *)(puVar3 + lVar32 * 4);
                      do {
                        pfVar30[-1] = *(float *)((longlong)pfVar30 + lVar36 + -4) * pfVar30[-1];
                        *pfVar30 = *(float *)((longlong)pfVar30 + lVar36) * *pfVar30;
                        pfVar30[1] = *(float *)((longlong)pfVar30 + lVar36 + 4) * pfVar30[1];
                        pfVar30[2] = *(float *)((longlong)pfVar30 + lVar36 + 8) * pfVar30[2];
                        uVar28 = uVar28 - 1;
                        pfVar30 = pfVar30 + 4;
                      } while (uVar28 != 0);
                    }
                    puVar19 = (undefined1 *)(ulonglong)uVar38;
                    if ((uint)uVar31 < uVar42) {
                      uVar28 = (ulonglong)(uVar42 - (uint)uVar31);
                      pfVar30 = (float *)(puVar3 + uVar31 * 4);
                      do {
                        *pfVar30 = *(float *)(((longlong)puVar26 - (longlong)puVar3) +
                                             (longlong)pfVar30) * *pfVar30;
                        uVar28 = uVar28 - 1;
                        puVar19 = (undefined1 *)0x0;
                        pfVar30 = pfVar30 + 1;
                      } while (uVar28 != 0);
                    }
                  }
                }
                uVar27 = uVar27 + 1;
              } while (uVar27 < ((uint)uVar24 & 0xff));
            }
            uVar47 = uVar47 + 1;
            puVar25 = puVar25 + lVar33;
            lVar29 = local_158;
            fVar54 = local_178[1];
          } while (uVar47 < (uint)local_178[1]);
        }
        pvVar45 = local_168;
        if (fVar54 == 1.4013e-45) {
          uVar47 = ((local_res18 & 0xff) + 3 & 0xfffffffc) * (int)local_178[0];
          if (uVar47 == 0) {
            return puVar19;
          }
          pvVar7 = *(void **)(param_4 + 0x30);
          *(undefined8 *)(puVar37 + -8) = 0x143130bf8;
          puVar19 = _guard_xfg_dispatch_icall_nop(pvVar7,pvVar45,(ulonglong)uVar47 << 2);
          return puVar19;
        }
        uVar47 = *(uint *)(param_4 + 0x150);
        *(undefined8 *)(puVar37 + -8) = 0x143130c17;
        pbVar23 = (byte *)FUN_143182420(param_4);
        uVar47 = (*pbVar23 + 3 & 0xfffffffc) * (uVar47 & 0xff);
        if (uVar47 != 0) {
          pvVar45 = *(void **)(param_4 + 0x30);
          *(undefined8 *)(puVar37 + -8) = 0x143130c3d;
          _guard_xfg_dispatch_icall_nop(pvVar45,0,(ulonglong)uVar47 << 2);
        }
        fVar55 = (float)((local_res18 & 0xff) + 3 >> 2);
        local_160 = fVar55;
        *(undefined8 *)(puVar37 + -8) = 0x143130c55;
        cVar17 = FUN_14317c220(param_1);
        uVar24 = 0;
        if (cVar17 != '\0') {
          uVar47 = (int)local_178[0] * (int)fVar55 * 0x10;
          uVar31 = (ulonglong)uVar47 + 0xf;
          if (uVar31 <= uVar47) {
            uVar31 = 0xffffffffffffff0;
          }
          *(undefined8 *)(puVar37 + -8) = 0x143130c89;
          uVar47 = (int)local_178[0] * (int)fVar55 * 4;
          puVar19 = puVar37 + (0x60 - (uVar31 & 0xfffffffffffffff0));
          do {
            puVar25 = (undefined1 *)(ulonglong)(uint)((int)uVar24 * (int)local_178[2]);
            uVar31 = 0;
            fVar55 = local_128[uVar24];
            puVar37 = (undefined1 *)((longlong)local_168 + (longlong)puVar25 * 4);
            if (uVar47 != 0) {
              if (0xf < uVar47) {
                puVar25 = puVar37 + (ulonglong)(uVar47 - 1) * 4;
                if ((puVar25 < puVar19) || (puVar19 + (ulonglong)(uVar47 - 1) * 4 < puVar37)) {
                  uVar18 = 8;
                  do {
                    pfVar30 = (float *)(puVar37 + uVar31 * 4);
                    fVar39 = pfVar30[1];
                    fVar49 = pfVar30[2];
                    fVar15 = pfVar30[3];
                    pfVar40 = (float *)(puVar19 + uVar31 * 4);
                    *pfVar40 = *pfVar30 * fVar55;
                    pfVar40[1] = fVar39 * fVar55;
                    pfVar40[2] = fVar49 * fVar55;
                    pfVar40[3] = fVar15 * fVar55;
                    uVar27 = (int)uVar31 + 0x10;
                    uVar31 = (ulonglong)uVar27;
                    pfVar30 = (float *)(puVar37 + (ulonglong)(uVar18 - 4) * 4);
                    fVar39 = pfVar30[1];
                    fVar49 = pfVar30[2];
                    fVar15 = pfVar30[3];
                    pfVar40 = (float *)(puVar19 + (ulonglong)(uVar18 - 4) * 4);
                    *pfVar40 = *pfVar30 * fVar55;
                    pfVar40[1] = fVar39 * fVar55;
                    pfVar40[2] = fVar49 * fVar55;
                    pfVar40[3] = fVar15 * fVar55;
                    pfVar30 = (float *)(puVar37 + (ulonglong)uVar18 * 4);
                    fVar39 = pfVar30[1];
                    fVar49 = pfVar30[2];
                    fVar15 = pfVar30[3];
                    pfVar40 = (float *)(puVar19 + (ulonglong)uVar18 * 4);
                    *pfVar40 = *pfVar30 * fVar55;
                    pfVar40[1] = fVar39 * fVar55;
                    pfVar40[2] = fVar49 * fVar55;
                    pfVar40[3] = fVar15 * fVar55;
                    puVar25 = (undefined1 *)(ulonglong)(uVar18 + 4);
                    uVar18 = uVar18 + 0x10;
                    pfVar30 = (float *)(puVar37 + (longlong)puVar25 * 4);
                    auVar51._0_4_ = *pfVar30 * fVar55;
                    auVar51._4_4_ = pfVar30[1] * fVar55;
                    auVar51._8_4_ = pfVar30[2] * fVar55;
                    auVar51._12_4_ = pfVar30[3] * fVar55;
                    *(undefined1 (*) [16])(puVar19 + (longlong)puVar25 * 4) = auVar51;
                  } while (uVar27 < (uVar47 & 0xfffffff0));
                }
              }
              uVar18 = (uint)uVar31;
              if (uVar18 < uVar47) {
                uVar27 = uVar47 - uVar18;
                if (3 < uVar27) {
                  lVar33 = uVar31 + 1;
                  uVar27 = ((uVar47 - uVar18) - 4 >> 2) + 1;
                  uVar28 = (ulonglong)uVar27;
                  uVar31 = (ulonglong)(uVar18 + uVar27 * 4);
                  pfVar30 = (float *)(puVar19 + lVar33 * 4);
                  do {
                    pfVar40 = pfVar30 + 4;
                    pfVar30[-1] = fVar55 * *(float *)(puVar37 + (-0x14 - (longlong)puVar19) +
                                                     (longlong)pfVar40);
                    *pfVar30 = fVar55 * *(float *)(puVar37 + (-0x10 - (longlong)puVar19) +
                                                  (longlong)pfVar40);
                    pfVar30[1] = fVar55 * *(float *)(puVar37 + (-0xc - (longlong)puVar19) +
                                                    (longlong)pfVar40);
                    pfVar30[2] = fVar55 * *(float *)(puVar37 + (-8 - (longlong)puVar19) +
                                                    (longlong)pfVar40);
                    uVar28 = uVar28 - 1;
                    pfVar30 = pfVar40;
                  } while (uVar28 != 0);
                }
                puVar25 = (undefined1 *)(ulonglong)uVar27;
                if ((uint)uVar31 < uVar47) {
                  uVar28 = (ulonglong)(uVar47 - (uint)uVar31);
                  pfVar30 = (float *)(puVar19 + uVar31 * 4);
                  do {
                    *pfVar30 = fVar55 * *(float *)((longlong)pfVar30 +
                                                  ((longlong)puVar37 - (longlong)puVar19));
                    uVar28 = uVar28 - 1;
                    puVar25 = (undefined1 *)0x0;
                    pfVar30 = pfVar30 + 1;
                  } while (uVar28 != 0);
                }
              }
            }
            puVar37 = *(undefined1 **)(param_4 + 0x30);
            uVar31 = 0;
            if (uVar47 != 0) {
              if (0xf < uVar47) {
                puVar25 = puVar19 + (ulonglong)(uVar47 - 1) * 4;
                if ((puVar25 < puVar37) || (puVar37 + (ulonglong)(uVar47 - 1) * 4 < puVar19)) {
                  uVar18 = 8;
                  do {
                    pfVar30 = (float *)(puVar37 + uVar31 * 4);
                    fVar55 = pfVar30[1];
                    fVar39 = pfVar30[2];
                    fVar49 = pfVar30[3];
                    uVar28 = (ulonglong)(uVar18 - 4);
                    pfVar40 = (float *)(puVar19 + uVar31 * 4);
                    fVar15 = pfVar40[1];
                    fVar16 = pfVar40[2];
                    fVar5 = pfVar40[3];
                    pfVar34 = (float *)(puVar37 + uVar31 * 4);
                    *pfVar34 = *pfVar40 + *pfVar30;
                    pfVar34[1] = fVar15 + fVar55;
                    pfVar34[2] = fVar16 + fVar39;
                    pfVar34[3] = fVar5 + fVar49;
                    uVar27 = (int)uVar31 + 0x10;
                    uVar31 = (ulonglong)uVar27;
                    pfVar30 = (float *)(puVar37 + uVar28 * 4);
                    fVar55 = pfVar30[1];
                    fVar39 = pfVar30[2];
                    fVar49 = pfVar30[3];
                    pfVar40 = (float *)(puVar19 + uVar28 * 4);
                    fVar15 = pfVar40[1];
                    fVar16 = pfVar40[2];
                    fVar5 = pfVar40[3];
                    pfVar34 = (float *)(puVar37 + uVar28 * 4);
                    *pfVar34 = *pfVar40 + *pfVar30;
                    pfVar34[1] = fVar15 + fVar55;
                    pfVar34[2] = fVar16 + fVar39;
                    pfVar34[3] = fVar5 + fVar49;
                    uVar28 = (ulonglong)uVar18;
                    pfVar30 = (float *)(puVar37 + uVar28 * 4);
                    fVar55 = pfVar30[1];
                    fVar39 = pfVar30[2];
                    fVar49 = pfVar30[3];
                    pfVar40 = (float *)(puVar19 + uVar28 * 4);
                    fVar15 = pfVar40[1];
                    fVar16 = pfVar40[2];
                    fVar5 = pfVar40[3];
                    pfVar34 = (float *)(puVar37 + uVar28 * 4);
                    *pfVar34 = *pfVar40 + *pfVar30;
                    pfVar34[1] = fVar15 + fVar55;
                    pfVar34[2] = fVar16 + fVar39;
                    pfVar34[3] = fVar5 + fVar49;
                    puVar25 = (undefined1 *)(ulonglong)(uVar18 + 4);
                    uVar18 = uVar18 + 0x10;
                    auVar52 = *(undefined1 (*) [16])(puVar37 + (longlong)puVar25 * 4);
                    pfVar30 = (float *)(puVar19 + (longlong)puVar25 * 4);
                    fVar55 = pfVar30[1];
                    fVar39 = pfVar30[2];
                    fVar49 = pfVar30[3];
                    pfVar40 = (float *)(puVar37 + (longlong)puVar25 * 4);
                    *pfVar40 = *pfVar30 + auVar52._0_4_;
                    pfVar40[1] = fVar55 + auVar52._4_4_;
                    pfVar40[2] = fVar39 + auVar52._8_4_;
                    pfVar40[3] = fVar49 + auVar52._12_4_;
                  } while (uVar27 < (uVar47 & 0xfffffff0));
                }
              }
              uVar18 = (uint)uVar31;
              if (uVar18 < uVar47) {
                uVar27 = uVar47 - uVar18;
                if (3 < uVar27) {
                  lVar33 = (longlong)puVar19 - (longlong)puVar37;
                  uVar27 = ((uVar47 - uVar18) - 4 >> 2) + 1;
                  pfVar30 = (float *)(puVar37 + (uVar31 + 1) * 4);
                  uVar28 = (ulonglong)uVar27;
                  uVar31 = (ulonglong)(uVar18 + uVar27 * 4);
                  do {
                    pfVar30[-1] = *(float *)((longlong)pfVar30 + lVar33 + -4) + pfVar30[-1];
                    *pfVar30 = *(float *)((longlong)pfVar30 + lVar33) + *pfVar30;
                    pfVar30[1] = *(float *)(lVar33 + 4 + (longlong)pfVar30) + pfVar30[1];
                    pfVar30[2] = *(float *)(lVar33 + 8 + (longlong)pfVar30) + pfVar30[2];
                    pfVar30 = pfVar30 + 4;
                    uVar28 = uVar28 - 1;
                  } while (uVar28 != 0);
                }
                puVar25 = (undefined1 *)(ulonglong)uVar27;
                if ((uint)uVar31 < uVar47) {
                  pfVar30 = (float *)(puVar37 + uVar31 * 4);
                  uVar31 = (ulonglong)(uVar47 - (uint)uVar31);
                  do {
                    *pfVar30 = *(float *)(((longlong)puVar19 - (longlong)puVar37) +
                                         (longlong)pfVar30) + *pfVar30;
                    pfVar30 = pfVar30 + 1;
                    uVar31 = uVar31 - 1;
                    puVar25 = (undefined1 *)0x0;
                  } while (uVar31 != 0);
                }
              }
            }
            uVar18 = (int)uVar24 + 1;
            uVar24 = (ulonglong)uVar18;
          } while (uVar18 < (uint)fVar54);
          return puVar25;
        }
        if ((local_res18 & 0xf00) != 0x200) {
          uVar47 = (int)fVar55 * (int)local_178[0] * 0x10;
          uVar31 = (ulonglong)uVar47 + 0xf;
          if (uVar31 <= uVar47) {
            uVar31 = 0xffffffffffffff0;
          }
          *(undefined8 *)(puVar37 + -8) = 0x14313129d;
          uVar47 = (int)fVar55 * (int)local_178[0] * 4;
          puVar19 = puVar37 + (0x60 - (uVar31 & 0xfffffffffffffff0));
          do {
            puVar25 = (undefined1 *)(ulonglong)(uint)((int)uVar24 * (int)local_178[2]);
            uVar31 = 0;
            fVar55 = local_128[uVar24];
            puVar37 = (undefined1 *)((longlong)local_168 + (longlong)puVar25 * 4);
            if (uVar47 != 0) {
              if (0xf < uVar47) {
                puVar25 = puVar37 + (ulonglong)(uVar47 - 1) * 4;
                if ((puVar25 < puVar19) || (puVar19 + (ulonglong)(uVar47 - 1) * 4 < puVar37)) {
                  uVar18 = 8;
                  do {
                    pfVar30 = (float *)(puVar37 + uVar31 * 4);
                    fVar39 = pfVar30[1];
                    fVar49 = pfVar30[2];
                    fVar15 = pfVar30[3];
                    pfVar40 = (float *)(puVar19 + uVar31 * 4);
                    *pfVar40 = *pfVar30 * fVar55;
                    pfVar40[1] = fVar39 * fVar55;
                    pfVar40[2] = fVar49 * fVar55;
                    pfVar40[3] = fVar15 * fVar55;
                    uVar27 = (int)uVar31 + 0x10;
                    uVar31 = (ulonglong)uVar27;
                    pfVar30 = (float *)(puVar37 + (ulonglong)(uVar18 - 4) * 4);
                    fVar39 = pfVar30[1];
                    fVar49 = pfVar30[2];
                    fVar15 = pfVar30[3];
                    pfVar40 = (float *)(puVar19 + (ulonglong)(uVar18 - 4) * 4);
                    *pfVar40 = *pfVar30 * fVar55;
                    pfVar40[1] = fVar39 * fVar55;
                    pfVar40[2] = fVar49 * fVar55;
                    pfVar40[3] = fVar15 * fVar55;
                    pfVar30 = (float *)(puVar37 + (ulonglong)uVar18 * 4);
                    fVar39 = pfVar30[1];
                    fVar49 = pfVar30[2];
                    fVar15 = pfVar30[3];
                    pfVar40 = (float *)(puVar19 + (ulonglong)uVar18 * 4);
                    *pfVar40 = *pfVar30 * fVar55;
                    pfVar40[1] = fVar39 * fVar55;
                    pfVar40[2] = fVar49 * fVar55;
                    pfVar40[3] = fVar15 * fVar55;
                    puVar25 = (undefined1 *)(ulonglong)(uVar18 + 4);
                    uVar18 = uVar18 + 0x10;
                    pfVar30 = (float *)(puVar37 + (longlong)puVar25 * 4);
                    auVar52._0_4_ = *pfVar30 * fVar55;
                    auVar52._4_4_ = pfVar30[1] * fVar55;
                    auVar52._8_4_ = pfVar30[2] * fVar55;
                    auVar52._12_4_ = pfVar30[3] * fVar55;
                    *(undefined1 (*) [16])(puVar19 + (longlong)puVar25 * 4) = auVar52;
                  } while (uVar27 < (uVar47 & 0xfffffff0));
                }
              }
              uVar18 = (uint)uVar31;
              if (uVar18 < uVar47) {
                uVar27 = uVar47 - uVar18;
                if (3 < uVar27) {
                  lVar33 = uVar31 + 1;
                  uVar27 = ((uVar47 - uVar18) - 4 >> 2) + 1;
                  uVar28 = (ulonglong)uVar27;
                  uVar31 = (ulonglong)(uVar18 + uVar27 * 4);
                  pfVar30 = (float *)(puVar19 + lVar33 * 4);
                  do {
                    pfVar40 = pfVar30 + 4;
                    pfVar30[-1] = fVar55 * *(float *)(puVar37 + (-0x14 - (longlong)puVar19) +
                                                     (longlong)pfVar40);
                    *pfVar30 = fVar55 * *(float *)(puVar37 + (-0x10 - (longlong)puVar19) +
                                                  (longlong)pfVar40);
                    pfVar30[1] = fVar55 * *(float *)(puVar37 + (-0xc - (longlong)puVar19) +
                                                    (longlong)pfVar40);
                    pfVar30[2] = fVar55 * *(float *)(puVar37 + (-8 - (longlong)puVar19) +
                                                    (longlong)pfVar40);
                    uVar28 = uVar28 - 1;
                    pfVar30 = pfVar40;
                  } while (uVar28 != 0);
                }
                puVar25 = (undefined1 *)(ulonglong)uVar27;
                if ((uint)uVar31 < uVar47) {
                  uVar18 = uVar47 - (uint)uVar31;
                  puVar25 = (undefined1 *)(ulonglong)uVar18;
                  uVar28 = (ulonglong)uVar18;
                  pfVar30 = (float *)(puVar19 + uVar31 * 4);
                  do {
                    *pfVar30 = fVar55 * *(float *)((longlong)pfVar30 +
                                                  ((longlong)puVar37 - (longlong)puVar19));
                    uVar28 = uVar28 - 1;
                    pfVar30 = pfVar30 + 1;
                  } while (uVar28 != 0);
                }
              }
            }
            puVar37 = *(undefined1 **)(param_4 + 0x30);
            uVar31 = 0;
            if (uVar47 != 0) {
              if (3 < uVar47) {
                puVar25 = puVar19 + (ulonglong)(uVar47 - 1) * 4;
                if ((puVar25 < puVar37) || (puVar37 + (ulonglong)(uVar47 - 1) * 4 < puVar19)) {
                  do {
                    pfVar30 = (float *)(puVar37 + uVar31 * 4);
                    fVar55 = *pfVar30;
                    fVar39 = pfVar30[1];
                    fVar49 = pfVar30[2];
                    fVar15 = pfVar30[3];
                    pfVar30 = (float *)(puVar19 + uVar31 * 4);
                    fVar16 = *pfVar30;
                    fVar5 = pfVar30[1];
                    fVar10 = pfVar30[2];
                    fVar11 = pfVar30[3];
                    uVar18 = -(uint)(fVar16 * fVar16 < fVar55 * fVar55);
                    uVar27 = -(uint)(fVar5 * fVar5 < fVar39 * fVar39);
                    uVar38 = -(uint)(fVar10 * fVar10 < fVar49 * fVar49);
                    uVar41 = -(uint)(fVar11 * fVar11 < fVar15 * fVar15);
                    auVar53._0_4_ = uVar18 & (uint)fVar55;
                    auVar53._4_4_ = uVar27 & (uint)fVar39;
                    auVar53._8_4_ = uVar38 & (uint)fVar49;
                    auVar53._12_4_ = uVar41 & (uint)fVar15;
                    auVar8._4_4_ = ~uVar27 & (uint)fVar5;
                    auVar8._0_4_ = ~uVar18 & (uint)fVar16;
                    auVar8._8_4_ = ~uVar38 & (uint)fVar10;
                    auVar8._12_4_ = ~uVar41 & (uint)fVar11;
                    *(undefined1 (*) [16])(puVar37 + uVar31 * 4) = auVar53 | auVar8;
                    uVar18 = (int)uVar31 + 4;
                    uVar31 = (ulonglong)uVar18;
                  } while (uVar18 < uVar47);
                }
              }
              uVar18 = (uint)uVar31;
              if (uVar18 < uVar47) {
                uVar27 = uVar47 - uVar18;
                if (3 < uVar27) {
                  lVar33 = (longlong)puVar19 - (longlong)puVar37;
                  uVar27 = ((uVar47 - uVar18) - 4 >> 2) + 1;
                  pfVar30 = (float *)(puVar37 + (uVar31 + 1) * 4);
                  uVar28 = (ulonglong)uVar27;
                  uVar31 = (ulonglong)(uVar18 + uVar27 * 4);
                  do {
                    fVar55 = pfVar30[-1];
                    fVar39 = *(float *)(lVar33 + -4 + (longlong)pfVar30);
                    if (fVar55 * fVar55 <= fVar39 * fVar39) {
                      fVar55 = fVar39;
                    }
                    fVar39 = *pfVar30;
                    pfVar30[-1] = fVar55;
                    fVar55 = *(float *)(lVar33 + (longlong)pfVar30);
                    if (fVar39 * fVar39 <= fVar55 * fVar55) {
                      fVar39 = fVar55;
                    }
                    fVar55 = pfVar30[1];
                    *pfVar30 = fVar39;
                    fVar39 = *(float *)(lVar33 + 4 + (longlong)pfVar30);
                    if (fVar55 * fVar55 <= fVar39 * fVar39) {
                      fVar55 = fVar39;
                    }
                    pfVar30[1] = fVar55;
                    fVar55 = pfVar30[2];
                    fVar39 = *(float *)(lVar33 + 8 + (longlong)pfVar30);
                    if (fVar55 * fVar55 <= fVar39 * fVar39) {
                      fVar55 = fVar39;
                    }
                    pfVar30[2] = fVar55;
                    pfVar30 = pfVar30 + 4;
                    uVar28 = uVar28 - 1;
                  } while (uVar28 != 0);
                }
                puVar25 = (undefined1 *)(ulonglong)uVar27;
                if ((uint)uVar31 < uVar47) {
                  pfVar30 = (float *)(puVar37 + uVar31 * 4);
                  uVar18 = uVar47 - (uint)uVar31;
                  puVar25 = (undefined1 *)(ulonglong)uVar18;
                  uVar31 = (ulonglong)uVar18;
                  do {
                    fVar55 = *pfVar30;
                    fVar39 = *(float *)(((longlong)puVar19 - (longlong)puVar37) + (longlong)pfVar30)
                    ;
                    if (fVar55 * fVar55 <= fVar39 * fVar39) {
                      fVar55 = fVar39;
                    }
                    *pfVar30 = fVar55;
                    pfVar30 = pfVar30 + 1;
                    uVar31 = uVar31 - 1;
                  } while (uVar31 != 0);
                }
              }
            }
            uVar18 = (int)uVar24 + 1;
            uVar24 = (ulonglong)uVar18;
          } while (uVar18 < (uint)fVar54);
          return puVar25;
        }
        pfVar30 = (float *)(puVar37 + -0x20);
        uVar24 = (ulonglong)(uint)((int)fVar55 << 4) + 0xf;
        if (uVar24 <= (uint)((int)fVar55 << 4)) {
          uVar24 = 0xffffffffffffff0;
        }
        local_138 = pfVar30;
        *(undefined8 *)(puVar37 + -0x88) = 0x143130f88;
        lVar33 = -(uVar24 & 0xfffffffffffffff0);
        puVar19 = puVar37 + lVar33 + -0x20;
        *(undefined8 *)(puVar37 + lVar33 + -0x88) = 0x143130fa2;
        puVar25 = (undefined1 *)
                  CAkSpeakerPan::GetSampledHarmonics((byte)local_res18,&local_148,&pfStack_120,0);
        fVar39 = 0.0;
        fVar54 = *pfStack_120;
        if (local_178[0] == 0.0) {
          return puVar25;
        }
        do {
          *(undefined8 *)(puVar37 + lVar33 + -0x88) = 0x143130fe0;
          _guard_xfg_dispatch_icall_nop(pfVar30,0,0x80);
          uVar18 = 0;
          uVar47 = local_res18 & 0xff;
          if (local_178[1] != 0.0) {
            local_140 = (float *)(ulonglong)(uint)((int)fVar55 * (int)fVar39 * 4);
            pfVar40 = local_128;
            do {
              fVar55 = *pfVar40;
              uVar24 = 0;
              puVar26 = (undefined1 *)
                        ((longlong)local_168 +
                        ((ulonglong)(uVar18 * (int)local_178[2]) + (longlong)local_140) * 4);
              if ((local_res18 & 0xff) != 0) {
                if ((0xf < (local_res18 & 0xff)) &&
                   ((uVar31 = (ulonglong)((local_res18 & 0xff) - 1), puVar26 + uVar31 * 4 < puVar19
                    || (puVar19 + uVar31 * 4 < puVar26)))) {
                  uVar31 = 8;
                  do {
                    pfVar34 = (float *)(puVar26 + uVar24 * 4);
                    fVar49 = pfVar34[1];
                    fVar15 = pfVar34[2];
                    fVar16 = pfVar34[3];
                    iVar46 = (int)uVar31;
                    pfVar4 = (float *)(puVar19 + uVar24 * 4);
                    *pfVar4 = *pfVar34 * fVar55;
                    pfVar4[1] = fVar49 * fVar55;
                    pfVar4[2] = fVar15 * fVar55;
                    pfVar4[3] = fVar16 * fVar55;
                    uVar27 = (int)uVar24 + 0x10;
                    uVar24 = (ulonglong)uVar27;
                    pfVar34 = (float *)(puVar26 + (ulonglong)(iVar46 - 4) * 4);
                    fVar49 = pfVar34[1];
                    fVar15 = pfVar34[2];
                    fVar16 = pfVar34[3];
                    pfVar4 = (float *)(puVar19 + (ulonglong)(iVar46 - 4) * 4);
                    *pfVar4 = *pfVar34 * fVar55;
                    pfVar4[1] = fVar49 * fVar55;
                    pfVar4[2] = fVar15 * fVar55;
                    pfVar4[3] = fVar16 * fVar55;
                    pfVar34 = (float *)(puVar26 + uVar31 * 4);
                    fVar49 = pfVar34[1];
                    fVar15 = pfVar34[2];
                    fVar16 = pfVar34[3];
                    pfVar4 = (float *)(puVar19 + uVar31 * 4);
                    *pfVar4 = *pfVar34 * fVar55;
                    pfVar4[1] = fVar49 * fVar55;
                    pfVar4[2] = fVar15 * fVar55;
                    pfVar4[3] = fVar16 * fVar55;
                    uVar31 = (ulonglong)(iVar46 + 0x10);
                    pfVar34 = (float *)(puVar26 + (ulonglong)(iVar46 + 4) * 4);
                    fVar49 = pfVar34[1];
                    fVar15 = pfVar34[2];
                    fVar16 = pfVar34[3];
                    pfVar4 = (float *)(puVar19 + (ulonglong)(iVar46 + 4) * 4);
                    *pfVar4 = *pfVar34 * fVar55;
                    pfVar4[1] = fVar49 * fVar55;
                    pfVar4[2] = fVar15 * fVar55;
                    pfVar4[3] = fVar16 * fVar55;
                  } while (uVar27 < (local_res18 & 0xf0));
                }
                uVar27 = (uint)uVar24;
                if (uVar27 < uVar47) {
                  if (3 < uVar47 - uVar27) {
                    lVar32 = uVar24 + 1;
                    uVar38 = ((uVar47 - uVar27) - 4 >> 2) + 1;
                    uVar31 = (ulonglong)uVar38;
                    uVar24 = (ulonglong)(uVar27 + uVar38 * 4);
                    pfVar34 = (float *)(puVar19 + lVar32 * 4);
                    do {
                      pfVar4 = pfVar34 + 4;
                      pfVar34[-1] = fVar55 * *(float *)(puVar26 + (-0x14 - (longlong)puVar19) +
                                                       (longlong)pfVar4);
                      *pfVar34 = fVar55 * *(float *)(puVar26 + (-0x10 - (longlong)puVar19) +
                                                    (longlong)pfVar4);
                      pfVar34[1] = fVar55 * *(float *)(puVar26 + (-0xc - (longlong)puVar19) +
                                                      (longlong)pfVar4);
                      pfVar34[2] = fVar55 * *(float *)(puVar26 + (-8 - (longlong)puVar19) +
                                                      (longlong)pfVar4);
                      uVar31 = uVar31 - 1;
                      pfVar34 = pfVar4;
                    } while (uVar31 != 0);
                  }
                  if ((uint)uVar24 < uVar47) {
                    uVar31 = (ulonglong)(uVar47 - (uint)uVar24);
                    pfVar34 = (float *)(puVar19 + uVar24 * 4);
                    do {
                      *pfVar34 = fVar55 * *(float *)((longlong)pfVar34 +
                                                    ((longlong)puVar26 - (longlong)puVar19));
                      uVar31 = uVar31 - 1;
                      pfVar34 = pfVar34 + 1;
                    } while (uVar31 != 0);
                  }
                }
              }
              uVar27 = 0;
              do {
                uVar24 = 0;
                fVar55 = 0.0;
                if (3 < uVar47) {
                  pfVar34 = (float *)(puVar37 + lVar33 + -0x18);
                  do {
                    iVar46 = (int)uVar24;
                    uVar24 = (ulonglong)(iVar46 + 4U);
                    uVar38 = iVar46 * 0x20 + uVar27;
                    pfVar4 = pfVar34 + -2;
                    pfVar1 = pfVar34 + -1;
                    fVar49 = *pfVar34;
                    pfVar2 = pfVar34 + 1;
                    pfVar34 = pfVar34 + 4;
                    fVar55 = fVar55 + (*(float *)(puVar25 + (ulonglong)(uVar38 + 0x20) * 4) *
                                       *pfVar1 + *(float *)(puVar25 + (ulonglong)uVar38 * 4) *
                                                 *pfVar4 +
                                       *(float *)(puVar25 +
                                                 (ulonglong)((iVar46 + 2) * 0x20 + uVar27) * 4) *
                                       fVar49 + *(float *)(puVar25 +
                                                          (ulonglong)((iVar46 + 3) * 0x20 + uVar27)
                                                          * 4) * *pfVar2) * (0.07957747 / fVar54);
                  } while (iVar46 + 4U < (local_res18 & 0xff) - 3);
                }
                if ((uint)uVar24 < uVar47) {
                  pfVar34 = (float *)(puVar19 + uVar24 * 4);
                  do {
                    iVar46 = (int)uVar24;
                    uVar38 = iVar46 + 1;
                    uVar24 = (ulonglong)uVar38;
                    fVar49 = *pfVar34;
                    pfVar34 = pfVar34 + 1;
                    fVar55 = fVar55 + *(float *)(puVar25 + (ulonglong)(iVar46 * 0x20 + uVar27) * 4)
                                      * fVar49 * (0.07957747 / fVar54);
                  } while (uVar38 < uVar47);
                }
                uVar27 = uVar27 + 1;
                fVar49 = *pfVar30;
                if (*pfVar30 <= fVar55) {
                  fVar49 = fVar55;
                }
                *pfVar30 = fVar49;
                pfVar30 = pfVar30 + 1;
              } while (uVar27 < 0x20);
              uVar18 = uVar18 + 1;
              pfVar40 = pfVar40 + 1;
              pfVar30 = local_138;
              fVar55 = local_160;
            } while (uVar18 < (uint)local_178[1]);
          }
          lVar32 = *(longlong *)(param_4 + 0x30);
          *(undefined8 *)(puVar37 + lVar33 + -0x88) = 0x14313125e;
          puVar26 = (undefined1 *)
                    CAkSpeakerPan::EncodeVector
                              (pfVar30,uVar47,
                               lVar32 + (ulonglong)(uint)((int)fVar55 * (int)fVar39 * 4) * 4);
          fVar39 = (float)((int)fVar39 + 1);
        } while ((uint)fVar39 < (uint)local_178[0]);
        return puVar26;
      }
    }
  }
  return puVar19;
}



// FUNCTION 1431315f0 ComputeSphericalCoordinates body=615 status=ok
// SIG undefined ComputeSphericalCoordinates(void)

void CAkListener::ComputeSphericalCoordinates
               (longlong param_1,longlong param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  *param_3 = 0.0;
  *param_4 = 0.0;
  fVar2 = *(float *)(param_2 + 0x24);
  if (fVar2 <= 0.0) {
    return;
  }
  fVar3 = *(float *)(param_2 + 0x18) - *(float *)(param_1 + 0x78);
  fVar1 = *(float *)(param_2 + 0x20) - *(float *)(param_1 + 0x80);
  fVar5 = *(float *)(param_2 + 0x1c) - *(float *)(param_1 + 0x7c);
  fVar4 = fVar5 * *(float *)(param_1 + 0x40) + fVar3 * *(float *)(param_1 + 0x3c) +
          fVar1 * *(float *)(param_1 + 0x44);
  fVar6 = fVar5 * *(float *)(param_1 + 0x58) + fVar3 * *(float *)(param_1 + 0x54) +
          fVar1 * *(float *)(param_1 + 0x5c);
  fVar1 = fVar5 * *(float *)(param_1 + 0x4c) + fVar3 * *(float *)(param_1 + 0x48) +
          fVar1 * *(float *)(param_1 + 0x50);
  if (fVar6 == 0.0) {
    if (fVar4 == 0.0) {
      *param_3 = 0.0;
      if (fVar1 == 0.0) {
        *param_4 = 0.0;
        return;
      }
      if (0.0 < fVar1) {
        *param_4 = 1.5707964;
        return;
      }
      *param_4 = -1.5707964;
      return;
    }
    if (fVar4 <= 0.0) {
      fVar3 = -1.5707964;
    }
    else {
      fVar3 = 1.5707964;
    }
    fVar1 = fVar1 / fVar2;
    *param_3 = fVar3;
    fVar2 = -1.0;
    if ((-1.0 <= fVar1) && (fVar2 = fVar1, 1.0 <= fVar1)) {
      fVar2 = 1.0;
    }
    goto LAB_1431317d9;
  }
  fVar3 = fVar4 / fVar6;
  if (1.0 <= ABS(fVar3)) {
    fVar3 = 1.5707964 - fVar3 / (fVar3 * fVar3 + 0.28);
    if (fVar4 < 0.0) {
LAB_1431317b4:
      fVar3 = fVar3 - 3.1415927;
    }
  }
  else {
    fVar3 = fVar3 / (fVar3 * 0.28 * fVar3 + 1.0);
    if (fVar6 < 0.0) {
      if (fVar4 < 0.0) goto LAB_1431317b4;
      fVar3 = fVar3 + 3.1415927;
    }
  }
  fVar1 = fVar1 / fVar2;
  *param_3 = fVar3;
  fVar2 = -1.0;
  if ((-1.0 <= fVar1) && (fVar2 = fVar1, 1.0 <= fVar1)) {
    fVar2 = 1.0;
  }
LAB_1431317d9:
  fVar1 = ABS(fVar2);
  fVar1 = (((((fVar1 * 84.31466 - 242.71996) * fVar1 + 262.81305) * fVar1 - 131.11235) * fVar1 +
           29.66154) * fVar1 - 1.4518384) * fVar1 + 0.0328437;
  if (fVar2 < 0.0) {
    fVar1 = -fVar1;
  }
  *param_4 = fVar1;
  return;
}



// FUNCTION 143131860 FUN_143131860 body=257 status=ok
// SIG undefined FUN_143131860(void)

void FUN_143131860(longlong *param_1,float param_2,uint param_3,uint *param_4)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  
  uVar7 = (int)param_1[1] - 1;
  if (param_3 < uVar7) {
    lVar3 = *param_1;
    uVar6 = param_3;
    do {
      uVar5 = (ulonglong)uVar6;
      fVar8 = *(float *)(lVar3 + uVar5 * 0xc);
      if (param_2 <= fVar8) {
LAB_143131955:
        fVar8 = *(float *)(lVar3 + 4 + uVar5 * 0xc);
        goto LAB_1431318cb;
      }
      param_3 = uVar6 + 1;
      uVar4 = (ulonglong)param_3;
      fVar1 = *(float *)(lVar3 + uVar4 * 0xc);
      if (param_2 < fVar1) {
        iVar2 = *(int *)(lVar3 + 8 + uVar5 * 0xc);
        if (iVar2 == 4) {
          fVar8 = ((param_2 - fVar8) / (fVar1 - fVar8)) *
                  (*(float *)(lVar3 + 4 + uVar4 * 0xc) - *(float *)(lVar3 + 4 + uVar5 * 0xc)) +
                  *(float *)(lVar3 + 4 + uVar5 * 0xc);
        }
        else {
          if (iVar2 == 9) goto LAB_143131955;
          fVar8 = (float)FUN_143131e70((param_2 - fVar8) / (fVar1 - fVar8),
                                       *(undefined4 *)(lVar3 + 4 + uVar5 * 0xc),
                                       *(undefined4 *)(lVar3 + 4 + uVar4 * 0xc));
        }
        goto LAB_1431318cb;
      }
      uVar6 = param_3;
    } while (param_3 < uVar7);
  }
  fVar8 = *(float *)(*param_1 + 4 + (ulonglong)uVar7 * 0xc);
  uVar6 = param_3;
LAB_1431318cb:
  *param_4 = uVar6;
  FUN_14312f210(param_1,fVar8);
  return;
}



// FUNCTION 143131970 GetRawAttenuation body=182 status=ok
// SIG undefined GetRawAttenuation(void)

longlong AkPositioningParams::GetRawAttenuation(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lVar3 = DAT_146b50af8;
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar1 = *(uint *)(param_1 + 4);
    if (uVar1 != 0) {
      lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x180);
      EnterCriticalSection(lpCriticalSection);
      uVar2 = *(uint *)(lVar3 + 0x1b0);
      if (uVar2 != 0) {
        for (lVar4 = *(longlong *)
                      (*(longlong *)(lVar3 + 0x1a8) + ((ulonglong)uVar1 % (ulonglong)uVar2) * 8);
            lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 8)) {
          if (*(uint *)(lVar4 + 0x10) == uVar1) {
            if (lVar4 != 0) {
              *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
              LeaveCriticalSection(lpCriticalSection);
              goto LAB_1431319ea;
            }
            break;
          }
        }
      }
      LeaveCriticalSection(lpCriticalSection);
      lVar4 = 0;
LAB_1431319ea:
      *(longlong *)(param_1 + 0x18) = lVar4;
      return lVar4;
    }
    lVar4 = 0;
  }
  return lVar4;
}



// FUNCTION 143131a30 FUN_143131a30 body=501 status=ok
// SIG undefined FUN_143131a30(void)

void FUN_143131a30(longlong param_1,float param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 local_res8 [8];
  
  if ((*(byte *)(param_1 + 0xa0) == 0xff) ||
     (lVar1 = ((ulonglong)*(byte *)(param_1 + 0xa0) + 3) * 0x10,
     plVar4 = (longlong *)(lVar1 + param_1), *(longlong *)(lVar1 + param_1) == 0)) {
    plVar4 = (longlong *)0x0;
LAB_143131a96:
    fVar5 = 1.0;
  }
  else {
    if (plVar4 == (longlong *)0x0) goto LAB_143131a96;
    fVar5 = (float)FUN_143131860(plVar4,*(undefined4 *)(param_3 + 0x60),0,local_res8);
  }
  fVar6 = fVar5 * *(float *)(param_3 + 0x30);
  *(float *)(param_3 + 0x30) = fVar6;
  if ((*(byte *)(param_1 + 0xa1) == 0xff) ||
     (lVar1 = ((ulonglong)*(byte *)(param_1 + 0xa1) + 3) * 0x10,
     plVar3 = (longlong *)(lVar1 + param_1), *(longlong *)(lVar1 + param_1) == 0)) {
    plVar3 = (longlong *)0x0;
  }
  fVar7 = fVar5;
  if (plVar3 != plVar4) {
    if (plVar3 == (longlong *)0x0) goto LAB_143131af9;
    fVar7 = (float)FUN_143131860(fVar6,*(undefined4 *)(param_3 + 0x60),0,local_res8);
  }
  *(float *)(param_3 + 0x34) = fVar7 * *(float *)(param_3 + 0x34);
LAB_143131af9:
  if ((*(byte *)(param_1 + 0xa2) == 0xff) ||
     (plVar3 = (longlong *)(((ulonglong)*(byte *)(param_1 + 0xa2) + 3) * 0x10 + param_1),
     *plVar3 == 0)) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 == plVar4) {
    *(float *)(param_3 + 0x38) = fVar5 * *(float *)(param_3 + 0x38);
  }
  else if (plVar3 != (longlong *)0x0) {
    fVar5 = (float)FUN_143131860(plVar3,*(undefined4 *)(param_3 + 0x60),0,local_res8);
    *(float *)(param_3 + 0x38) = fVar5 * *(float *)(param_3 + 0x38);
  }
  if ((*(byte *)(param_1 + 0xa7) & 1) == 0) {
    *(undefined4 *)(param_3 + 0x5c) = 0x3f800000;
  }
  else {
    fVar6 = 0.0;
    fVar5 = (float)AkMath::Interpolate(*(undefined4 *)(param_1 + 0x18),0,
                                       *(undefined4 *)(param_1 + 0x1c),0x3f800000,
                                       *(undefined4 *)(param_3 + 0x28));
    *(float *)(param_3 + 0x5c) = fVar5;
    fVar5 = fVar5 * param_2 * 0.05;
    if (-37.0 <= fVar5) {
      uVar2 = (uint)(longlong)(fVar5 * 27866352.0 + 1.0653532e+09);
      fVar5 = (float)((uVar2 & 0x7fffff) + 0x3f800000);
      fVar6 = ((fVar5 * 0.32518977 + 0.020805772) * fVar5 + 0.65304345) *
              (float)(uVar2 & 0xff800000);
    }
    *(float *)(param_3 + 0x30) = fVar6 * *(float *)(param_3 + 0x30);
  }
  return;
}



// FUNCTION 143131c30 GetListenerData body=79 status=ok
// SIG undefined GetListenerData(void)

undefined8 CAkListener::GetListenerData(ulonglong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (*(uint *)(g_pRegistryMgr + 0x30) != 0) {
    for (puVar1 = *(undefined8 **)
                   (*(longlong *)(g_pRegistryMgr + 0x28) +
                   ((param_1 & 0xffffffff) % (ulonglong)*(uint *)(g_pRegistryMgr + 0x30)) * 8);
        puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
      if (puVar1[1] == param_1) {
        if (puVar1 + 2 == (longlong *)0x0) {
          return 0;
        }
        lVar2 = puVar1[2];
        if (*(uint *)(lVar2 + 0x40) < 3) {
          return 0;
        }
        return *(undefined8 *)(*(longlong *)(lVar2 + 0x38) + 0x10);
      }
    }
  }
  return 0;
}



// FUNCTION 143131c80 GetListenerMatrix body=86 status=ok
// SIG undefined GetListenerMatrix(void)

longlong CAkListener::GetListenerMatrix(ulonglong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (*(uint *)(g_pRegistryMgr + 0x30) != 0) {
    for (puVar1 = *(undefined8 **)
                   (*(longlong *)(g_pRegistryMgr + 0x28) +
                   ((param_1 & 0xffffffff) % (ulonglong)*(uint *)(g_pRegistryMgr + 0x30)) * 8);
        puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
      if (puVar1[1] == param_1) {
        if (puVar1 + 2 == (longlong *)0x0) {
          return 0;
        }
        lVar2 = puVar1[2];
        if (*(uint *)(lVar2 + 0x40) < 3) {
          return 0;
        }
        lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x10);
        if (lVar2 == 0) {
          return 0;
        }
        return lVar2 + 0x3c;
      }
    }
  }
  return 0;
}



// FUNCTION 143131ce0 GetListenerSpatialization body=134 status=ok
// SIG undefined GetListenerSpatialization(void)

undefined8
CAkListener::GetListenerSpatialization
          (ulonglong param_1,undefined1 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (*(uint *)(g_pRegistryMgr + 0x30) != 0) {
    for (puVar1 = *(undefined8 **)
                   (*(longlong *)(g_pRegistryMgr + 0x28) +
                   ((param_1 & 0xffffffff) % (ulonglong)*(uint *)(g_pRegistryMgr + 0x30)) * 8);
        puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
      if (puVar1[1] == param_1) {
        if (puVar1 + 2 == (longlong *)0x0) {
          return 0x1f;
        }
        lVar2 = puVar1[2];
        if (*(uint *)(lVar2 + 0x40) < 3) {
          return 0x1f;
        }
        lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x10);
        if (lVar2 == 0) {
          return 0x1f;
        }
        *param_2 = *(undefined1 *)(lVar2 + 0x88);
        *param_3 = *(undefined8 *)(lVar2 + 0x28);
        *param_4 = *(undefined4 *)(lVar2 + 0x38);
        return 1;
      }
    }
  }
  return 0x1f;
}



// FUNCTION 143131d70 FUN_143131d70 body=180 status=ok
// SIG undefined FUN_143131d70(void)

ulonglong FUN_143131d70(void *param_1,int param_2)

{
  uint uVar1;
  AKRESULT AVar2;
  void *pvVar3;
  undefined4 extraout_var;
  __uint64 _Var4;
  ulonglong uVar5;
  uint uVar6;
  void *pvVar7;
  
  pvVar3 = (void *)(ulonglong)*(uint *)((longlong)param_1 + 0x14);
  uVar6 = param_2 + *(uint *)((longlong)param_1 + 0x14);
  _Var4 = (ulonglong)uVar6 << 3;
  pvVar7 = param_1;
  if (8 < _Var4) {
    pvVar3 = AK::MemoryMgr::Malign(g_DefaultPoolId,_Var4,8);
    pvVar7 = pvVar3;
  }
  if (pvVar7 != (void *)0x0) {
    pvVar3 = *(void **)((longlong)param_1 + 8);
    if ((pvVar3 != (void *)0x0) && (pvVar3 != pvVar7)) {
      uVar1 = *(uint *)((longlong)param_1 + 0x10);
      uVar5 = 0;
      if ((ulonglong)uVar1 != 0) {
        do {
          *(undefined8 *)((longlong)pvVar7 + uVar5 * 8) =
               *(undefined8 *)(*(longlong *)((longlong)param_1 + 8) + uVar5 * 8);
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
        pvVar3 = *(void **)((longlong)param_1 + 8);
      }
      if (param_1 != pvVar3) {
        AVar2 = AK::MemoryMgr::Falign(g_DefaultPoolId,pvVar3);
        pvVar3 = (void *)CONCAT44(extraout_var,AVar2);
      }
    }
    *(uint *)((longlong)param_1 + 0x14) = uVar6;
    *(void **)((longlong)param_1 + 8) = pvVar7;
    return CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
  }
  return (ulonglong)pvVar3 & 0xffffffffffffff00;
}



// FUNCTION 143131e30 Init body=52 status=ok
// SIG undefined Init(void)

undefined8 CAkListener::Init(longlong param_1)

{
  longlong lVar1;
  
  if (((*(int *)(*(longlong *)(param_1 + 8) + 0x40) != 0) &&
      (lVar1 = **(longlong **)(*(longlong *)(param_1 + 8) + 0x38), lVar1 != 0)) &&
     (*(short *)(lVar1 + 0x38) != 0)) {
    SetPosition(param_1,*(undefined8 *)(lVar1 + 0x20));
  }
  return 1;
}



// FUNCTION 143131e70 FUN_143131e70 body=663 status=ok
// SIG undefined FUN_143131e70(void)

float FUN_143131e70(float param_1,float param_2,float param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  
  switch(param_4) {
  case 0:
    param_1 = 1.0 - param_1;
    return param_1 * param_1 * param_1 * (param_2 - param_3) + param_3;
  case 1:
    fVar1 = param_1 * param_1 * 2.4674013;
    return (((0.008306325 - fVar1 * 0.00018363654) * fVar1 - 0.16664828) * fVar1 + 0.9999966) *
           param_1 * 1.5707964 * (param_3 - param_2) + param_2;
  case 2:
    return (param_1 - 3.0) * param_1 * 0.5 * (param_2 - param_3) + param_2;
  case 3:
    break;
  case 4:
    return (param_3 - param_2) * param_1 + param_2;
  case 5:
    fVar1 = param_1 * param_1 * 9.869605;
    return (((fVar1 * 0.000484834 - 0.01961384) * fVar1 + 0.2476748) * fVar1 + 0.00069670216) *
           (param_3 - param_2) + param_2;
  case 6:
    return (param_1 + 1.0) * param_1 * 0.5 * (param_3 - param_2) + param_2;
  case 7:
    fVar1 = param_1 * param_1 * 2.4674013;
    return (((0.04148775 - fVar1 * 0.0012712094) * fVar1 - 0.49991244) * fVar1 + 0.9999933) *
           (param_2 - param_3) + param_3;
  case 8:
    return param_1 * param_1 * param_1 * (param_3 - param_2) + param_2;
  default:
    return 0.0;
  }
  if (0.5 < param_1) {
    fVar2 = 3.1415927 - param_1 * 3.1415927;
    fVar1 = fVar2 * fVar2;
    return (1.0 - (((0.0041531627 - fVar1 * 9.181827e-05) * fVar1 - 0.08332414) * fVar1 + 0.4999983)
                  * fVar2) * (param_3 - param_2) + param_2;
  }
  fVar1 = param_1 * param_1 * 9.869605;
  return (((0.0041531627 - fVar1 * 9.181827e-05) * fVar1 - 0.08332414) * fVar1 + 0.4999983) *
         param_1 * 3.1415927 * (param_3 - param_2) + param_2;
}



// FUNCTION 143132130 OnBeginFrame body=47 status=ok
// SIG undefined OnBeginFrame(void)

void CAkListener::OnBeginFrame(void)

{
  if (DAT_146b50ea0 != 0) {
    FUN_14314c080(g_pRegistryMgr,&DAT_146b50e90);
    DAT_146b50ea0 = 0;
  }
  return;
}



// FUNCTION 143132160 ResetListenerData body=226 status=ok
// SIG undefined ResetListenerData(void)

void CAkListener::ResetListenerData(void)

{
  longlong lVar1;
  
  for (lVar1 = DAT_146b50868; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x10)) {
    *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(lVar1 + 0x60);
    *(undefined8 *)(lVar1 + 0x68) = *(undefined8 *)(lVar1 + 0x68);
    *(undefined4 *)(lVar1 + 0x70) = *(undefined4 *)(lVar1 + 0x70);
    *(undefined4 *)(lVar1 + 0x74) = *(undefined4 *)(lVar1 + 0x74);
    *(undefined4 *)(lVar1 + 0x78) = *(undefined4 *)(lVar1 + 0x78);
    *(undefined4 *)(lVar1 + 0x7c) = *(undefined4 *)(lVar1 + 0x7c);
    *(undefined4 *)(lVar1 + 0x80) = *(undefined4 *)(lVar1 + 0x80);
    *(float *)(lVar1 + 0x3c) =
         *(float *)(lVar1 + 0x68) * *(float *)(lVar1 + 0x70) -
         *(float *)(lVar1 + 100) * *(float *)(lVar1 + 0x74);
    *(float *)(lVar1 + 0x40) =
         *(float *)(lVar1 + 0x60) * *(float *)(lVar1 + 0x74) -
         *(float *)(lVar1 + 0x68) * *(float *)(lVar1 + 0x6c);
    *(float *)(lVar1 + 0x44) =
         *(float *)(lVar1 + 100) * *(float *)(lVar1 + 0x6c) -
         *(float *)(lVar1 + 0x60) * *(float *)(lVar1 + 0x70);
    *(undefined4 *)(lVar1 + 0x48) = *(undefined4 *)(lVar1 + 0x6c);
    *(undefined4 *)(lVar1 + 0x4c) = *(undefined4 *)(lVar1 + 0x70);
    *(undefined4 *)(lVar1 + 0x50) = *(undefined4 *)(lVar1 + 0x74);
    *(undefined4 *)(lVar1 + 0x54) = *(undefined4 *)(lVar1 + 0x60);
    *(undefined4 *)(lVar1 + 0x58) = *(undefined4 *)(lVar1 + 100);
    *(undefined4 *)(lVar1 + 0x5c) = *(undefined4 *)(lVar1 + 0x68);
    FUN_143132250(&DAT_146b50e90,*(undefined8 *)(*(longlong *)(lVar1 + 8) + 0x48));
  }
  return;
}



// FUNCTION 143132250 FUN_143132250 body=333 status=ok
// SIG undefined FUN_143132250(void)

ulonglong * FUN_143132250(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  iVar10 = 0;
  iVar12 = uVar2 - 1;
  if (-1 < iVar12) {
    do {
      iVar6 = (iVar12 - iVar10) / 2 + iVar10;
      uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 8) + (longlong)iVar6 * 8);
      if (param_2 < uVar3) {
        iVar12 = iVar6 + -1;
      }
      else {
        if (param_2 <= uVar3) {
          return (ulonglong *)(*(longlong *)(param_1 + 8) + (longlong)iVar6 * 8);
        }
        iVar10 = iVar6 + 1;
      }
    } while (iVar10 <= iVar12);
  }
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = lVar4 + (longlong)iVar10 * 8;
  }
  if (lVar9 == 0) {
    if ((*(uint *)(param_1 + 0x14) <= uVar2) && (cVar5 = FUN_143131d70(param_1,1), cVar5 == '\0')) {
      return (ulonglong *)0x0;
    }
    if (*(uint *)(param_1 + 0x14) <= uVar2) {
      return (ulonglong *)0x0;
    }
    uVar2 = *(uint *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = uVar2 + 1;
    puVar7 = (ulonglong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar2 * 8);
  }
  else {
    if (((*(uint *)(param_1 + 0x14) <= uVar2) && (cVar5 = FUN_143131d70(param_1,1), cVar5 == '\0'))
       || (*(uint *)(param_1 + 0x14) <= uVar2)) {
      return (ulonglong *)0x0;
    }
    uVar2 = *(uint *)(param_1 + 0x10);
    lVar11 = *(longlong *)(param_1 + 8);
    *(uint *)(param_1 + 0x10) = uVar2 + 1;
    puVar8 = (undefined8 *)(lVar11 + (ulonglong)uVar2 * 8);
    lVar4 = (lVar9 - lVar4 >> 3 & 0xffffffffU) * 8;
    if ((undefined8 *)(lVar4 + lVar11) < puVar8) {
      do {
        puVar1 = puVar8 + -1;
        *puVar8 = puVar8[-1];
        lVar11 = *(longlong *)(param_1 + 8);
        puVar8 = puVar1;
      } while ((undefined8 *)(lVar11 + lVar4) < puVar1);
    }
    puVar7 = (ulonglong *)(lVar4 + lVar11);
  }
  if (puVar7 != (ulonglong *)0x0) {
    *puVar7 = param_2;
  }
  return puVar7;
}



// FUNCTION 1431323a0 SetListenerSpatialization body=992 status=ok
// SIG undefined SetListenerSpatialization(void)

undefined4
CAkListener::SetListenerSpatialization
          (ulonglong param_1,undefined1 param_2,uint param_3,void *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  void *_Dst;
  float *pfVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  float fVar9;
  
  if (*(uint *)(g_pRegistryMgr + 0x30) != 0) {
    for (puVar1 = *(undefined8 **)
                   (*(longlong *)(g_pRegistryMgr + 0x28) +
                   ((param_1 & 0xffffffff) % (ulonglong)*(uint *)(g_pRegistryMgr + 0x30)) * 8);
        puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
      if (puVar1[1] == param_1) {
        if (puVar1 + 2 == (longlong *)0x0) {
          return 0x1f;
        }
        lVar2 = puVar1[2];
        if (*(uint *)(lVar2 + 0x40) < 3) {
          return 0x1f;
        }
        lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x10);
        if (lVar2 == 0) {
          return 0x1f;
        }
        uVar8 = 0;
        *(undefined1 *)(lVar2 + 0x88) = param_2;
        if (*(void **)(lVar2 + 0x20) != (void *)0x0) {
          AK::MemoryMgr::Falign(g_DefaultPoolId,*(void **)(lVar2 + 0x20));
          *(undefined8 *)(lVar2 + 0x20) = 0;
          *(undefined8 *)(lVar2 + 0x28) = 0;
          *(undefined8 *)(lVar2 + 0x30) = 0;
        }
        if (param_4 == (void *)0x0) goto LAB_143132776;
        uVar7 = param_3 & 0xff;
        if ((char)param_3 == '\0') {
          uVar3 = 0x4e;
        }
        else {
          uVar5 = uVar7 + 3 >> 2;
          _Dst = AK::MemoryMgr::Malign(g_DefaultPoolId,(ulonglong)(uVar5 * 0x20),0x10);
          *(void **)(lVar2 + 0x20) = _Dst;
          if (_Dst == (void *)0x0) {
            uVar3 = 2;
          }
          else {
            *(uint *)(lVar2 + 0x38) = param_3;
            *(void **)(lVar2 + 0x28) = _Dst;
            *(ulonglong *)(lVar2 + 0x30) = (ulonglong)(uVar5 << 4) + (longlong)_Dst;
            ::_guard_xfg_dispatch_icall_nop(_Dst,param_4,(ulonglong)uVar7 << 2);
            ::_guard_xfg_dispatch_icall_nop
                      (*(void **)(lVar2 + 0x30),*(void **)(lVar2 + 0x28),(ulonglong)uVar7 << 2);
            lVar2 = *(longlong *)(lVar2 + 0x30);
            if (3 < uVar7) {
              pfVar4 = (float *)(lVar2 + 8);
              uVar5 = (uVar7 - 4 >> 2) + 1;
              uVar6 = (ulonglong)uVar5;
              uVar8 = (ulonglong)(uVar5 * 4);
              do {
                if (-37.0 <= pfVar4[-2] * 0.05) {
                  uVar5 = (uint)(longlong)(pfVar4[-2] * 0.05 * 27866352.0 + 1.0653532e+09);
                  fVar9 = (float)((uVar5 & 0x7fffff) + 0x3f800000);
                  fVar9 = ((fVar9 * 0.32518977 + 0.020805772) * fVar9 + 0.65304345) *
                          (float)(uVar5 & 0xff800000);
                }
                else {
                  fVar9 = 0.0;
                }
                pfVar4[-2] = fVar9;
                if (-37.0 <= pfVar4[-1] * 0.05) {
                  uVar5 = (uint)(longlong)(pfVar4[-1] * 0.05 * 27866352.0 + 1.0653532e+09);
                  fVar9 = (float)((uVar5 & 0x7fffff) + 0x3f800000);
                  fVar9 = ((fVar9 * 0.32518977 + 0.020805772) * fVar9 + 0.65304345) *
                          (float)(uVar5 & 0xff800000);
                }
                else {
                  fVar9 = 0.0;
                }
                pfVar4[-1] = fVar9;
                if (-37.0 <= *pfVar4 * 0.05) {
                  uVar5 = (uint)(longlong)(*pfVar4 * 0.05 * 27866352.0 + 1.0653532e+09);
                  fVar9 = (float)((uVar5 & 0x7fffff) + 0x3f800000);
                  fVar9 = ((fVar9 * 0.32518977 + 0.020805772) * fVar9 + 0.65304345) *
                          (float)(uVar5 & 0xff800000);
                }
                else {
                  fVar9 = 0.0;
                }
                *pfVar4 = fVar9;
                if (-37.0 <= pfVar4[1] * 0.05) {
                  uVar5 = (uint)(longlong)(pfVar4[1] * 0.05 * 27866352.0 + 1.0653532e+09);
                  fVar9 = (float)((uVar5 & 0x7fffff) + 0x3f800000);
                  fVar9 = ((fVar9 * 0.32518977 + 0.020805772) * fVar9 + 0.65304345) *
                          (float)(uVar5 & 0xff800000);
                }
                else {
                  fVar9 = 0.0;
                }
                pfVar4[1] = fVar9;
                pfVar4 = pfVar4 + 4;
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
            }
            if ((uint)uVar8 < uVar7) {
              uVar6 = (ulonglong)(uVar7 - (uint)uVar8);
              pfVar4 = (float *)(lVar2 + uVar8 * 4);
              do {
                if (-37.0 <= *pfVar4 * 0.05) {
                  uVar7 = (uint)(longlong)(*pfVar4 * 0.05 * 27866352.0 + 1.0653532e+09);
                  fVar9 = (float)((uVar7 & 0x7fffff) + 0x3f800000);
                  fVar9 = ((fVar9 * 0.32518977 + 0.020805772) * fVar9 + 0.65304345) *
                          (float)(uVar7 & 0xff800000);
                }
                else {
                  fVar9 = 0.0;
                }
                *pfVar4 = fVar9;
                pfVar4 = pfVar4 + 1;
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
            }
LAB_143132776:
            uVar3 = 1;
          }
        }
        return uVar3;
      }
    }
  }
  return 0x1f;
}



// FUNCTION 143132780 SetPosition body=194 status=ok
// SIG undefined SetPosition(void)

undefined8 CAkListener::SetPosition(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 0x68) = uVar8;
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  *(float *)(param_1 + 0x70) = param_2[4];
  *(float *)(param_1 + 0x74) = fVar1;
  *(float *)(param_1 + 0x78) = fVar2;
  *(float *)(param_1 + 0x7c) = fVar3;
  *(float *)(param_1 + 0x80) = param_2[8];
  fVar1 = param_2[2];
  fVar2 = param_2[1];
  fVar3 = *param_2;
  fVar4 = param_2[5];
  fVar5 = param_2[3];
  fVar6 = param_2[3];
  fVar7 = param_2[4];
  *(float *)(param_1 + 0x3c) = fVar1 * param_2[4] - fVar2 * param_2[5];
  *(float *)(param_1 + 0x40) = fVar3 * fVar4 - fVar1 * fVar5;
  *(float *)(param_1 + 0x44) = fVar2 * fVar6 - fVar3 * fVar7;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x68);
  FUN_143132250(&DAT_146b50e90,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x48));
  return 1;
}



// FUNCTION 143132850 SetScalingFactor body=42 status=ok
// SIG undefined SetScalingFactor(void)

undefined8 CAkListener::SetScalingFactor(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x84) = param_2;
  FUN_143132250(&DAT_146b50e90,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x48));
  return 1;
}



// FUNCTION 143132880 Term body=132 status=ok
// SIG undefined Term(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CAkListener::Term(void)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_146b50e98 != (undefined *)0x0) {
    DAT_146b50ea0 = 0;
    if (DAT_146b50e98 != &DAT_146b50e90) {
      AK::MemoryMgr::Falign(g_DefaultPoolId,DAT_146b50e98);
    }
    DAT_146b50e98 = (undefined *)0x0;
    _DAT_146b50ea4 = 0;
  }
  puVar2 = DAT_146b51f28;
  lVar1 = g_DefaultPoolId;
  if (DAT_146b51f28 != (undefined8 *)0x0) {
    (**(code **)*DAT_146b51f28)(DAT_146b51f28,0);
    AK::MemoryMgr::Free(lVar1,puVar2);
    DAT_146b51f28 = (undefined8 *)0x0;
  }
  return;
}



// FUNCTION 143132910 FUN_143132910 body=332 status=ok
// SIG undefined FUN_143132910(void)

float FUN_143132910(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  uint *puVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  char local_res10 [16];
  uint local_res20 [2];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  lVar3 = *(longlong *)(param_2 + 0x50);
  fVar5 = 0.0;
  if (lVar3 == lVar3 + (ulonglong)*(uint *)(param_2 + 0x58) * 0x18) {
    fVar5 = 0.0;
  }
  else {
    do {
      local_60 = *param_3;
      uStack_58 = param_3[1];
      local_50 = *(undefined4 *)(param_3 + 2);
      uStack_4c = *(undefined4 *)((longlong)param_3 + 0x14);
      uStack_48 = *(undefined4 *)(param_3 + 3);
      uStack_44 = *(undefined4 *)((longlong)param_3 + 0x1c);
      local_40 = *(undefined4 *)(param_3 + 4);
      uStack_3c = *(undefined4 *)((longlong)param_3 + 0x24);
      uStack_38 = *(undefined4 *)(param_3 + 5);
      uStack_34 = *(undefined4 *)((longlong)param_3 + 0x2c);
      cVar2 = FUN_143121c20(param_1,*(undefined4 *)(lVar3 + 4),*(undefined4 *)(param_2 + 8),
                            *(undefined4 *)(param_2 + 0x48),&local_60,local_res20,local_res10);
      if (cVar2 == '\0') {
        if (*(uint *)(param_1 + 1) != 0) {
          for (puVar1 = *(uint **)(*param_1 +
                                  ((ulonglong)*(uint *)(lVar3 + 4) %
                                  (ulonglong)*(uint *)(param_1 + 1)) * 8); puVar1 != (uint *)0x0;
              puVar1 = *(uint **)(puVar1 + 2)) {
            if (*puVar1 == *(uint *)(lVar3 + 4)) {
              if (puVar1 != (uint *)0x0) {
                local_res20[0] = puVar1[4];
                goto LAB_1431329fe;
              }
              break;
            }
          }
        }
        local_res20[0] = 0;
      }
LAB_1431329fe:
      if (local_res10[0] == '\0') {
        fVar4 = (float)FUN_143131860(lVar3 + 8,local_res20[0],0,local_68);
        fVar5 = fVar5 + fVar4;
      }
      lVar3 = lVar3 + 0x18;
    } while (lVar3 != *(longlong *)(param_2 + 0x50) + (ulonglong)*(uint *)(param_2 + 0x58) * 0x18);
  }
  return fVar5;
}



// FUNCTION 143132a60 CAkRTPCMgr body=123 status=ok
// SIG undefined CAkRTPCMgr(void)

undefined8 * CAkRTPCMgr::CAkRTPCMgr(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
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
  return param_1;
}



// FUNCTION 143132ae0 `scalar_deleting_destructor' body=181 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong CAkRTPCMgr::AkRTPCEntry::_scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_20 = 0xff;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0xff;
  RemoveValue(param_1,&local_38);
  AkRTPCNestedSearchTree<AkRTPCKey,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidPlayingID,AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>_>_>_>
  ::Term(param_1 + 0x20);
  if (*(void **)(param_1 + 0x50) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 143132ba0 FUN_143132ba0 body=351 status=ok
// SIG undefined FUN_143132ba0(void)

void FUN_143132ba0(longlong *param_1,longlong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  
  if (param_3 != 0) {
    uVar7 = 0;
    do {
      iVar6 = (int)uVar7;
      if ((param_3 >> (uVar7 & 0x3f) & 1) != 0) {
        if (*(uint *)(param_1 + 4) != 0) {
          for (plVar2 = *(longlong **)
                         (param_1[3] +
                         ((ulonglong)(uint)((int)param_2 + iVar6) %
                         (ulonglong)*(uint *)(param_1 + 4)) * 8); plVar2 != (longlong *)0x0;
              plVar2 = (longlong *)plVar2[2]) {
            if ((*plVar2 == param_2) && ((int)plVar2[1] == iVar6)) {
              lVar5 = plVar2[10];
              if (lVar5 != lVar5 + (ulonglong)*(uint *)(plVar2 + 0xb) * 0x18) goto LAB_143132c44;
              break;
            }
          }
        }
LAB_143132ccf:
        param_3 = param_3 & ~(1L << (uVar7 & 0x3f));
      }
      uVar7 = (ulonglong)(iVar6 + 1);
    } while (param_3 != 0);
  }
  return;
LAB_143132c44:
  if (*(uint *)(param_1 + 1) != 0) {
    for (puVar3 = *(uint **)(*param_1 +
                            ((ulonglong)*(uint *)(lVar5 + 4) % (ulonglong)*(uint *)(param_1 + 1)) *
                            8); puVar3 != (uint *)0x0; puVar3 = *(uint **)(puVar3 + 2)) {
      if (*puVar3 == *(uint *)(lVar5 + 4)) {
        if (puVar3 != (uint *)0x0) {
          puVar4 = *(undefined8 **)(puVar3 + 0x18);
          puVar1 = puVar4 + puVar3[0x1a];
          if (puVar4 != puVar1) goto LAB_143132c88;
        }
        break;
      }
    }
  }
  goto LAB_143132cb3;
  while (puVar4 = puVar4 + 1, puVar4 != puVar1) {
LAB_143132c88:
    if ((longlong *)*puVar4 == plVar2) break;
  }
  if (puVar4 != puVar1) {
    FUN_143139750(puVar3 + 0x18,plVar2);
    FUN_143132d00(puVar3 + 0x14);
  }
LAB_143132cb3:
  lVar5 = lVar5 + 0x18;
  if (lVar5 == plVar2[10] + (ulonglong)*(uint *)(plVar2 + 0xb) * 0x18) goto LAB_143132ccf;
  goto LAB_143132c44;
}



// FUNCTION 143132d00 FUN_143132d00 body=282 status=ok
// SIG undefined FUN_143132d00(void)

undefined8 * FUN_143132d00(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res10 [8];
  
  lVar4 = FUN_143133110(param_1,param_2,local_res10);
  uVar1 = *(uint *)(param_1 + 1);
  if (lVar4 == 0) {
    if ((*(uint *)((longlong)param_1 + 0xc) <= uVar1) &&
       (cVar3 = FUN_1431344e0(param_1,2), cVar3 == '\0')) {
      return (undefined8 *)0x0;
    }
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar1) {
      return (undefined8 *)0x0;
    }
    puVar6 = (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 8);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
    if (puVar6 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *puVar6 = 0;
  }
  else {
    lVar2 = *param_1;
    if (((*(uint *)((longlong)param_1 + 0xc) <= uVar1) &&
        (cVar3 = FUN_1431344e0(param_1,2), cVar3 == '\0')) ||
       (*(uint *)((longlong)param_1 + 0xc) <= uVar1)) {
      return (undefined8 *)0x0;
    }
    lVar5 = *param_1;
    puVar6 = (undefined8 *)(lVar5 + (ulonglong)*(uint *)(param_1 + 1) * 8);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = 0;
      lVar5 = *param_1;
    }
    lVar4 = (lVar4 - lVar2 >> 3 & 0xffffffffU) * 8;
    if ((undefined8 *)(lVar4 + lVar5) < puVar6) {
      do {
        *puVar6 = puVar6[-1];
        puVar6 = puVar6 + -1;
        lVar5 = *param_1;
      } while ((undefined8 *)(lVar5 + lVar4) < puVar6);
    }
    if ((undefined8 *)(lVar4 + lVar5) != (undefined8 *)0x0) {
      *(undefined8 *)(lVar4 + lVar5) = 0;
      lVar5 = *param_1;
    }
    puVar6 = (undefined8 *)(lVar4 + lVar5);
  }
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = param_2;
  }
  return puVar6;
}



// FUNCTION 143132e20 FUN_143132e20 body=222 status=ok
// SIG undefined FUN_143132e20(void)

void FUN_143132e20(longlong param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  void *pvVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)(((longlong)param_2 + 3) * 0x10 + param_1);
  CAkRTPCMgr::RemoveBuiltInParamBindings(param_1,param_3);
  uVar3 = *(uint *)(plVar8 + 1);
  if (*(uint *)((longlong)plVar8 + 0xc) <= uVar3) {
    uVar1 = *(uint *)((longlong)plVar8 + 0xc) + 1;
    pvVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 2);
    if (pvVar5 == (void *)0x0) {
      return;
    }
    pvVar6 = (void *)*plVar8;
    if ((pvVar6 != (void *)0x0) && (pvVar6 != pvVar5)) {
      uVar4 = *(uint *)(plVar8 + 1);
      uVar7 = 0;
      if ((ulonglong)uVar4 != 0) {
        do {
          *(undefined4 *)((longlong)pvVar5 + uVar7 * 4) = *(undefined4 *)(*plVar8 + uVar7 * 4);
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar4);
        pvVar6 = (void *)*plVar8;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar6);
    }
    *plVar8 = (longlong)pvVar5;
    *(uint *)((longlong)plVar8 + 0xc) = uVar1;
    if (uVar1 <= uVar3) {
      return;
    }
  }
  uVar3 = *(uint *)(plVar8 + 1);
  *(uint *)(plVar8 + 1) = uVar3 + 1;
  puVar2 = (undefined4 *)(*plVar8 + (ulonglong)uVar3 * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_3;
  }
  return;
}



// FUNCTION 143132f00 FUN_143132f00 body=358 status=ok
// SIG undefined FUN_143132f00(void)

undefined8
FUN_143132f00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
             longlong *param_5,char param_6,undefined1 param_7)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined1 local_res10 [24];
  
  puVar4 = param_2;
  if ((param_2 == (undefined4 *)0x0) && (puVar4 = param_3, param_3 == (undefined4 *)0x0)) {
    puVar4 = param_1 + 4;
  }
  uVar1 = *puVar4;
  if (param_2 == (undefined4 *)0x0) {
    if (param_6 != '\0') {
      return 1;
    }
    iVar2 = CAkScopedRtpcObj::AddedNewRtpcValue(*param_1,param_5);
    if (iVar2 != 1) {
      return 1;
    }
    if (((((*param_5 == 0) && ((int)param_5[1] == 0)) && ((int)param_5[2] == 0)) &&
        (((char)param_5[3] == -1 && ((char)param_5[4] == -1)))) && (param_5[5] == 0)) {
      param_2 = param_1 + 10;
      if (*(char *)(param_1 + 0xb) == '\0') {
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = 0;
        }
        *(undefined1 *)(param_1 + 0xb) = 1;
      }
    }
    else {
      lVar3 = FUN_143137150(param_1 + 0xc,*param_5,local_res10);
      if (lVar3 == 0) {
LAB_14313300c:
        param_2 = (undefined4 *)0x0;
      }
      else if ((((int)param_5[1] == 0) && ((int)param_5[2] == 0)) &&
              (((char)param_5[3] == -1 && (((char)param_5[4] == -1 && (param_5[5] == 0)))))) {
        param_2 = (undefined4 *)(lVar3 + 8);
        if (*(char *)(lVar3 + 0xc) == '\0') {
          if (param_2 != (undefined4 *)0x0) {
            *param_2 = 0;
          }
          *(undefined1 *)(lVar3 + 0xc) = 1;
        }
      }
      else {
        lVar3 = FUN_143136e30(lVar3 + 0x10,(int)param_5[1],local_res10);
        if (lVar3 == 0) goto LAB_14313300c;
        param_2 = (undefined4 *)FUN_1431369b0(lVar3,param_5 + 2);
      }
    }
    if (param_2 == (undefined4 *)0x0) {
      return 1;
    }
  }
  else if (param_6 != '\0') {
    FUN_143139490(param_1 + 8,param_5);
    goto LAB_143133017;
  }
  *param_2 = param_4;
LAB_143133017:
  CAkRTPCMgr::AkRTPCEntry::NotifyRTPCChange(param_1,uVar1,param_4,param_5,param_7);
  return 1;
}



// FUNCTION 143133070 FUN_143133070 body=148 status=ok
// SIG undefined FUN_143133070(void)

ulonglong FUN_143133070(longlong *param_1,ulonglong param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  iVar4 = (int)param_1[1] + -1;
  iVar2 = 0;
  if (-1 < iVar4) {
    uVar3 = uVar5;
    do {
      iVar2 = (iVar4 - (int)uVar3) / 2 + (int)uVar3;
      uVar1 = *(ulonglong *)((longlong)iVar2 * 0x10 + 8 + *param_1);
      if (param_2 < uVar1) {
        iVar4 = iVar2 + -1;
      }
      else {
        if (param_2 <= uVar1) {
          *param_3 = 1;
          return *param_1 + (longlong)iVar2 * 0x10;
        }
        uVar3 = (ulonglong)(iVar2 + 1);
      }
      iVar2 = (int)uVar3;
    } while (iVar2 <= iVar4);
  }
  *param_3 = 0;
  if (*param_1 != 0) {
    uVar5 = (longlong)iVar2 * 0x10 + *param_1;
  }
  return uVar5;
}



// FUNCTION 143133110 FUN_143133110 body=176 status=ok
// SIG undefined FUN_143133110(void)

ulonglong FUN_143133110(longlong *param_1,ulonglong param_2,undefined1 *param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar4 = 0;
  iVar5 = (int)param_1[1] + -1;
  iVar6 = 0;
  if (-1 < iVar5) {
    iVar1 = *(int *)(param_2 + 0x48);
    uVar7 = uVar4;
    do {
      iVar3 = (iVar5 - (int)uVar7) / 2 + (int)uVar7;
      uVar2 = *(ulonglong *)((longlong)iVar3 * 8 + *param_1);
      iVar6 = *(int *)(uVar2 + 0x48);
      if ((iVar1 < iVar6) || ((iVar1 == iVar6 && (param_2 < uVar2)))) {
        iVar5 = iVar3 + -1;
      }
      else {
        if ((iVar1 <= iVar6) && ((iVar1 != iVar6 || (param_2 <= uVar2)))) {
          *param_3 = 1;
          return *param_1 + (longlong)iVar3 * 8;
        }
        uVar7 = (ulonglong)(iVar3 + 1);
      }
      iVar6 = (int)uVar7;
    } while (iVar6 <= iVar5);
  }
  *param_3 = 0;
  if (*param_1 != 0) {
    uVar4 = *param_1 + (longlong)iVar6 * 8;
  }
  return uVar4;
}



// FUNCTION 1431331c0 FUN_1431331c0 body=330 status=ok
// SIG undefined FUN_1431331c0(void)

undefined8 FUN_1431331c0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  char local_res10 [8];
  
  if ((((param_3[5] == 0) || (param_2[5] != 0)) &&
      (((char)param_3[4] == -1 || ((char)param_2[4] != -1)))) &&
     (((((char)param_3[3] == -1 || ((char)param_2[3] != -1)) &&
       (((int)param_3[2] == 0 || ((int)param_2[2] != 0)))) &&
      (((int)param_3[1] == 0 || ((int)param_2[1] != 0)))))) {
    lVar5 = *param_3;
    if (lVar5 == 0) {
      return 0;
    }
    if (*param_2 != 0) {
      return 0;
    }
  }
  else {
    lVar5 = *param_3;
  }
  if (lVar5 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    lVar4 = FUN_1431220c0(plVar1,lVar5,local_res10);
    lVar5 = 0;
    if (local_res10[0] != '\0') {
      lVar5 = lVar4;
    }
    if (lVar5 == 0) {
      iVar3 = *(int *)(param_1 + 0x18) + -1;
      if (-1 < iVar3) {
        do {
          iVar3 = iVar3 / 2;
          lVar4 = *plVar1 + (longlong)iVar3 * 0x28;
          if (*(longlong *)(*plVar1 + 0x20 + (longlong)iVar3 * 0x28) == 0) {
            bVar2 = true;
            goto LAB_143133292;
          }
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      lVar4 = *plVar1;
      bVar2 = false;
LAB_143133292:
      lVar5 = 0;
      if (bVar2) {
        lVar5 = lVar4;
      }
    }
    if ((((*param_2 == 0) && ((int)param_2[1] == 0)) && ((int)param_2[2] == 0)) &&
       ((((char)param_2[3] == -1 && ((char)param_2[4] == -1)) && (param_2[5] == 0)))) {
      cVar6 = lVar5 != 0;
    }
    else {
      if (lVar5 == 0) {
        return 0;
      }
      cVar6 = FUN_143139cf0(lVar5,param_2 + 1,param_3 + 1);
    }
    if (cVar6 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143133310 FUN_143133310 body=358 status=ok
// SIG undefined FUN_143133310(void)

bool FUN_143133310(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  uint *puVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar9 = (ulonglong)uVar1;
  if ((uVar1 == 0) || (0.9 < (float)*(uint *)(param_1 + 2) / (float)uVar9)) {
    puVar8 = &DAT_145ac6de0;
    uVar7 = 0;
    do {
      uVar2 = *puVar8;
      uVar10 = (ulonglong)uVar2;
      if (uVar1 < uVar2) {
        if (uVar2 != 0) {
          uVar3 = *(undefined4 *)((longlong)param_1 + 0xc);
          puVar4 = (undefined8 *)*param_1;
          *param_1 = 0;
          param_1[1] = 0;
          cVar6 = FUN_143134440(param_1);
          if (cVar6 == '\0') {
            if ((void *)*param_1 != (void *)0x0) {
              *(undefined4 *)(param_1 + 1) = 0;
              AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
            }
            *param_1 = (longlong)puVar4;
            *(uint *)(param_1 + 1) = uVar1;
            *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
          }
          else {
            if (uVar2 != 0) {
              do {
                uVar7 = *(uint *)(param_1 + 1);
                if (uVar7 < *(uint *)((longlong)param_1 + 0xc)) {
                  *(uint *)(param_1 + 1) = uVar7 + 1;
                  puVar11 = (undefined8 *)(*param_1 + (ulonglong)uVar7 * 8);
                  if (puVar11 != (undefined8 *)0x0) {
                    *puVar11 = 0;
                  }
                }
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
            puVar11 = puVar4;
            if (uVar1 != 0) {
              do {
                puVar8 = (uint *)*puVar11;
                while (puVar8 != (uint *)0x0) {
                  puVar5 = *(uint **)(puVar8 + 2);
                  *(undefined8 *)(puVar8 + 2) =
                       *(undefined8 *)(*param_1 + ((ulonglong)*puVar8 % (ulonglong)uVar2) * 8);
                  *(uint **)(*param_1 + ((ulonglong)*puVar8 % (ulonglong)uVar2) * 8) = puVar8;
                  puVar8 = puVar5;
                }
                uVar9 = uVar9 - 1;
                puVar11 = puVar11 + 1;
              } while (uVar9 != 0);
            }
            if (puVar4 != (undefined8 *)0x0) {
              AK::MemoryMgr::Free(g_DefaultPoolId,puVar4);
            }
          }
        }
        break;
      }
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar7 < 0x1b);
  }
  return (int)param_1[1] != 0;
}



// FUNCTION 143133480 FUN_143133480 body=375 status=ok
// SIG undefined FUN_143133480(void)

bool FUN_143133480(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *piVar6;
  char cVar7;
  uint uVar8;
  uint *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar10 = (ulonglong)uVar1;
  if ((uVar1 == 0) || (0.9 < (float)*(uint *)(param_1 + 2) / (float)uVar10)) {
    puVar9 = &DAT_145ac6de0;
    uVar8 = 0;
    do {
      uVar2 = *puVar9;
      uVar11 = (ulonglong)uVar2;
      if (uVar1 < uVar2) {
        if (uVar2 != 0) {
          uVar3 = *(undefined4 *)((longlong)param_1 + 0xc);
          puVar4 = (undefined8 *)*param_1;
          *param_1 = 0;
          param_1[1] = 0;
          cVar7 = FUN_143134440(param_1);
          if (cVar7 == '\0') {
            if ((void *)*param_1 != (void *)0x0) {
              *(undefined4 *)(param_1 + 1) = 0;
              AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
            }
            *param_1 = (longlong)puVar4;
            *(uint *)(param_1 + 1) = uVar1;
            *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
          }
          else {
            if (uVar2 != 0) {
              do {
                uVar8 = *(uint *)(param_1 + 1);
                if (uVar8 < *(uint *)((longlong)param_1 + 0xc)) {
                  *(uint *)(param_1 + 1) = uVar8 + 1;
                  puVar12 = (undefined8 *)(*param_1 + (ulonglong)uVar8 * 8);
                  if (puVar12 != (undefined8 *)0x0) {
                    *puVar12 = 0;
                  }
                }
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            puVar12 = puVar4;
            if (uVar1 != 0) {
              do {
                piVar6 = (int *)*puVar12;
                while (piVar6 != (int *)0x0) {
                  piVar5 = *(int **)(piVar6 + 4);
                  uVar11 = (ulonglong)(uint)(piVar6[2] + *piVar6) % (ulonglong)uVar2;
                  *(undefined8 *)(piVar6 + 4) = *(undefined8 *)(*param_1 + uVar11 * 8);
                  *(int **)(*param_1 + uVar11 * 8) = piVar6;
                  piVar6 = piVar5;
                }
                uVar10 = uVar10 - 1;
                puVar12 = puVar12 + 1;
              } while (uVar10 != 0);
            }
            if (puVar4 != (undefined8 *)0x0) {
              AK::MemoryMgr::Free(g_DefaultPoolId,puVar4);
            }
          }
        }
        break;
      }
      uVar8 = uVar8 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar8 < 0x1b);
  }
  return (int)param_1[1] != 0;
}



// FUNCTION 143133600 FUN_143133600 body=136 status=ok
// SIG undefined FUN_143133600(void)

float FUN_143133600(longlong param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined1 local_res8 [8];
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  fVar4 = 0.0;
  if (lVar2 == lVar2 + (ulonglong)*(uint *)(param_1 + 0x58) * 0x18) {
    fVar4 = 0.0;
  }
  else {
    lVar1 = lVar2 + (ulonglong)*(uint *)(param_1 + 0x58) * 0x18;
    do {
      if (*(int *)(lVar2 + 4) == param_2) {
        fVar3 = (float)FUN_143131860(lVar2 + 8,param_3,0,local_res8);
        fVar4 = fVar4 + fVar3;
      }
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != lVar1);
  }
  return fVar4;
}



// FUNCTION 143133690 FUN_143133690 body=597 status=ok
// SIG undefined FUN_143133690(void)

ulonglong FUN_143133690(longlong param_1,longlong *param_2,float param_3,float param_4,int *param_5,
                       undefined1 param_6)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  long lVar5;
  AKRESULT AVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined4 extraout_var;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  float fVar12;
  undefined8 *local_58;
  undefined8 local_50;
  float local_48;
  float local_44;
  int local_40;
  int local_3c;
  undefined2 local_38;
  undefined1 local_36;
  
  puVar8 = *(undefined8 **)(param_1 + 0x48);
  puVar7 = (undefined1 *)register0x00000020;
  if (puVar8 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
    puVar11 = puVar8;
    do {
      if (((((puVar11[4] == *param_2) &&
            (puVar7 = (undefined1 *)(ulonglong)*(uint *)(param_2 + 1),
            *(uint *)(puVar11 + 5) == *(uint *)(param_2 + 1))) &&
           (puVar7 = (undefined1 *)(ulonglong)*(uint *)(param_2 + 2),
           *(uint *)(puVar11 + 6) == *(uint *)(param_2 + 2))) &&
          ((puVar7 = (undefined1 *)0x0, *(char *)(puVar11 + 7) == (char)param_2[3] &&
           (puVar7 = (undefined1 *)0x0, *(char *)(puVar11 + 8) == (char)param_2[4])))) &&
         (puVar7 = (undefined1 *)param_2[5], (undefined1 *)puVar11[9] == puVar7)) {
        if (puVar11 != (undefined8 *)0x0) {
          if (param_3 != param_4) {
            CAkTransitionManager::ChangeParameter
                      (DAT_146b50af0,puVar11[2],0x10000000,puVar8,*param_5,param_5[1],0);
            *(undefined1 *)(puVar11 + 10) = param_6;
            return 1;
          }
          if (puVar11 == puVar8) {
            *(undefined8 *)(param_1 + 0x48) = puVar11[1];
          }
          else {
            puVar10[1] = puVar11[1];
          }
          lVar5 = g_DefaultPoolId;
          *puVar11 = &PTR_FUN_145ac6e50;
          if (puVar11[2] != 0) {
            FUN_1431501b0(DAT_146b50af0,puVar11[2],puVar11);
          }
          AVar6 = AK::MemoryMgr::Free(lVar5,puVar11);
          puVar7 = (undefined1 *)CONCAT44(extraout_var,AVar6);
          goto LAB_143133865;
        }
        break;
      }
      plVar1 = puVar11 + 1;
      puVar10 = puVar11;
      puVar11 = (undefined8 *)*plVar1;
    } while ((undefined8 *)*plVar1 != (undefined8 *)0x0);
  }
  if (param_3 != param_4) {
    puVar8 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x58);
    puVar7 = (undefined1 *)0x0;
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_FUN_145ac6e50;
      puVar8[2] = 0;
      puVar8[3] = param_1;
      lVar9 = param_2[1];
      puVar8[4] = *param_2;
      puVar8[5] = lVar9;
      local_50 = 0x10000000;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar9 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      local_38 = 0;
      *(int *)(puVar8 + 6) = (int)param_2[2];
      *(undefined4 *)((longlong)puVar8 + 0x34) = uVar2;
      *(int *)(puVar8 + 7) = (int)lVar9;
      *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar3;
      local_36 = 0;
      lVar9 = param_2[4];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
      lVar4 = param_2[5];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
      *(undefined1 *)(puVar8 + 10) = 0;
      *(int *)(puVar8 + 8) = (int)lVar9;
      *(undefined4 *)((longlong)puVar8 + 0x44) = uVar2;
      *(int *)(puVar8 + 9) = (int)lVar4;
      *(undefined4 *)((longlong)puVar8 + 0x4c) = uVar3;
      local_40 = *param_5;
      local_3c = param_5[1];
      if ((*(int *)(param_1 + 0x14) == 2) && ((char)param_5[2] == '\0')) {
        local_36 = 1;
        if (param_3 <= param_4) {
          fVar12 = *(float *)(param_1 + 0x18);
        }
        else {
          fVar12 = *(float *)(param_1 + 0x1c);
        }
        *param_5 = (int)(fVar12 * 1000.0);
      }
      *(undefined1 *)(puVar8 + 10) = param_6;
      local_58 = puVar8;
      local_48 = param_3;
      local_44 = param_4;
      lVar9 = FUN_14314fa00(DAT_146b50af0,&local_58,1,0);
      puVar8[2] = lVar9;
      puVar7 = (undefined1 *)0x0;
      if (lVar9 != 0) {
        lVar9 = *(longlong *)(param_1 + 0x48);
        if (lVar9 == 0) {
          *(undefined8 **)(param_1 + 0x48) = puVar8;
          puVar8[1] = 0;
          return 1;
        }
        puVar8[1] = lVar9;
        *(undefined8 **)(param_1 + 0x48) = puVar8;
        return CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
      }
    }
  }
LAB_143133865:
  return (ulonglong)puVar7 & 0xffffffffffffff00;
}



// FUNCTION 1431338f0 FUN_1431338f0 body=351 status=ok
// SIG undefined FUN_1431338f0(void)

void FUN_1431338f0(longlong *param_1,longlong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  
  if (param_3 != 0) {
    uVar7 = 0;
    do {
      iVar6 = (int)uVar7;
      if ((param_3 >> (uVar7 & 0x3f) & 1) != 0) {
        if (*(uint *)(param_1 + 4) != 0) {
          for (plVar2 = *(longlong **)
                         (param_1[3] +
                         ((ulonglong)(uint)((int)param_2 + iVar6) %
                         (ulonglong)*(uint *)(param_1 + 4)) * 8); plVar2 != (longlong *)0x0;
              plVar2 = (longlong *)plVar2[2]) {
            if ((*plVar2 == param_2) && ((int)plVar2[1] == iVar6)) {
              lVar5 = plVar2[10];
              if (lVar5 != lVar5 + (ulonglong)*(uint *)(plVar2 + 0xb) * 0x18) goto LAB_143133994;
              break;
            }
          }
        }
LAB_143133a1f:
        param_3 = param_3 & ~(1L << (uVar7 & 0x3f));
      }
      uVar7 = (ulonglong)(iVar6 + 1);
    } while (param_3 != 0);
  }
  return;
LAB_143133994:
  if (*(uint *)(param_1 + 1) != 0) {
    for (puVar3 = *(uint **)(*param_1 +
                            ((ulonglong)*(uint *)(lVar5 + 4) % (ulonglong)*(uint *)(param_1 + 1)) *
                            8); puVar3 != (uint *)0x0; puVar3 = *(uint **)(puVar3 + 2)) {
      if (*puVar3 == *(uint *)(lVar5 + 4)) {
        if (puVar3 != (uint *)0x0) {
          puVar4 = *(undefined8 **)(puVar3 + 0x14);
          puVar1 = puVar4 + puVar3[0x16];
          if (puVar4 != puVar1) goto LAB_1431339d8;
        }
        break;
      }
    }
  }
  goto LAB_143133a03;
  while (puVar4 = puVar4 + 1, puVar4 != puVar1) {
LAB_1431339d8:
    if ((longlong *)*puVar4 == plVar2) break;
  }
  if (puVar4 != puVar1) {
    FUN_143139750(puVar3 + 0x14,plVar2);
    FUN_143132d00(puVar3 + 0x18);
  }
LAB_143133a03:
  lVar5 = lVar5 + 0x18;
  if (lVar5 == plVar2[10] + (ulonglong)*(uint *)(plVar2 + 0xb) * 0x18) goto LAB_143133a1f;
  goto LAB_143133994;
}



// FUNCTION 143133a50 Erase body=234 status=ok
// SIG undefined Erase(void)

ulonglong *
AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType_const_&___ptr64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType>_>
::Erase(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar1 = (undefined8 *)(*param_1 + ((ulonglong)*(uint *)(param_1 + 1) * 5 + -5) * 8);
  puVar2 = (undefined8 *)*param_3;
  if (puVar2 < puVar1) {
    puVar3 = puVar2 + 8;
    lVar4 = (ulonglong)((longlong)puVar1 + (-1 - (longlong)puVar2)) / 0x28 + 1;
    do {
      *(undefined1 *)(puVar3 + -4) = *(undefined1 *)(puVar3 + 1);
      *(undefined4 *)(puVar3 + -7) = *(undefined4 *)(puVar3 + -2);
      *(undefined1 *)((longlong)puVar3 + -0x34) = *(undefined1 *)((longlong)puVar3 + -0xc);
      Term(puVar3 + -6);
      puVar3[-6] = puVar3[-1];
      *(undefined4 *)(puVar3 + -5) = *(undefined4 *)puVar3;
      *(undefined4 *)((longlong)puVar3 + -0x24) = *(undefined4 *)((longlong)puVar3 + 4);
      puVar3[-1] = 0;
      *puVar3 = 0;
      puVar3 = puVar3 + 5;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  (**(code **)*puVar1)(puVar1,0);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  *param_2 = *param_3;
  return param_2;
}



// FUNCTION 143133b40 FUN_143133b40 body=233 status=ok
// SIG undefined FUN_143133b40(void)

ulonglong * FUN_143133b40(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar1 = (undefined8 *)(*param_1 + ((ulonglong)*(uint *)(param_1 + 1) * 5 + -5) * 8);
  puVar2 = (undefined8 *)*param_3;
  if (puVar2 < puVar1) {
    puVar3 = puVar2 + 8;
    lVar4 = (ulonglong)((longlong)puVar1 + (-1 - (longlong)puVar2)) / 0x28 + 1;
    do {
      *(undefined4 *)(puVar3 + -4) = *(undefined4 *)(puVar3 + 1);
      *(undefined4 *)(puVar3 + -7) = *(undefined4 *)(puVar3 + -2);
      *(undefined1 *)((longlong)puVar3 + -0x34) = *(undefined1 *)((longlong)puVar3 + -0xc);
      AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType_const_&___ptr64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType>_>
      ::Term(puVar3 + -6);
      puVar3[-6] = puVar3[-1];
      *(undefined4 *)(puVar3 + -5) = *(undefined4 *)puVar3;
      *(undefined4 *)((longlong)puVar3 + -0x24) = *(undefined4 *)((longlong)puVar3 + 4);
      puVar3[-1] = 0;
      *puVar3 = 0;
      puVar3 = puVar3 + 5;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  (**(code **)*puVar1)(puVar1,0);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  *param_2 = *param_3;
  return param_2;
}



// FUNCTION 143133c30 FUN_143133c30 body=235 status=ok
// SIG undefined FUN_143133c30(void)

ulonglong * FUN_143133c30(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar1 = (undefined8 *)(*param_1 + ((ulonglong)*(uint *)(param_1 + 1) * 5 + -5) * 8);
  puVar2 = (undefined8 *)*param_3;
  if (puVar2 < puVar1) {
    puVar3 = puVar2 + 8;
    lVar4 = (ulonglong)((longlong)puVar1 + (-1 - (longlong)puVar2)) / 0x28 + 1;
    do {
      puVar3[-4] = puVar3[1];
      *(undefined4 *)(puVar3 + -7) = *(undefined4 *)(puVar3 + -2);
      *(undefined1 *)((longlong)puVar3 + -0x34) = *(undefined1 *)((longlong)puVar3 + -0xc);
      AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType_const_&___ptr64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType>_>
      ::Term(puVar3 + -6);
      puVar3[-6] = puVar3[-1];
      *(undefined4 *)(puVar3 + -5) = *(undefined4 *)puVar3;
      *(undefined4 *)((longlong)puVar3 + -0x24) = *(undefined4 *)((longlong)puVar3 + 4);
      puVar3[-1] = 0;
      *puVar3 = 0;
      puVar3 = puVar3 + 5;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  (**(code **)*puVar1)(puVar1,0);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  *param_2 = *param_3;
  return param_2;
}



// FUNCTION 143133d20 FUN_143133d20 body=308 status=ok
// SIG undefined FUN_143133d20(void)

longlong FUN_143133d20(longlong param_1,char *param_2,longlong *param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  char local_res10 [8];
  
  cVar3 = *param_2;
  if (((cVar3 == -1) && (param_2[8] == -1)) && (*(longlong *)(param_2 + 0x10) == 0)) {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = *(int *)(param_1 + 0x18) != 0;
    }
    lVar1 = param_1 + 8;
    if (*(char *)(param_1 + 0xc) == '\0') {
      lVar1 = 0;
    }
  }
  else {
    if ((param_3 != (longlong *)0x0) && (*(char *)(param_1 + 0xc) != '\0')) {
      *param_3 = param_1 + 8;
      cVar3 = *param_2;
    }
    lVar1 = FUN_143121f60(param_1 + 0x10,cVar3,local_res10);
    lVar4 = 0;
    lVar2 = lVar4;
    if (local_res10[0] != '\0') {
      lVar2 = lVar1;
    }
    if (lVar2 == 0) {
      lVar1 = 0;
    }
    else {
      cVar3 = param_2[8];
      if ((cVar3 != -1) || (*(longlong *)(param_2 + 0x10) != 0)) {
        if ((param_3 != (longlong *)0x0) && (*(char *)(lVar2 + 0xc) != '\0')) {
          *param_3 = lVar2 + 8;
          cVar3 = param_2[8];
        }
        lVar1 = FUN_143121f60(lVar2 + 0x10,cVar3,local_res10);
        lVar2 = lVar4;
        if (local_res10[0] != '\0') {
          lVar2 = lVar1;
        }
        if (lVar2 == 0) {
          return 0;
        }
        if (*(longlong *)(param_2 + 0x10) != 0) {
          if ((param_3 != (longlong *)0x0) && (*(char *)(lVar2 + 0xc) != '\0')) {
            *param_3 = lVar2 + 8;
          }
          if (param_4 != (undefined1 *)0x0) {
            *param_4 = 0;
          }
          lVar2 = FUN_143122170(lVar2 + 0x10,*(undefined8 *)(param_2 + 0x10));
          return lVar2;
        }
      }
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = *(int *)(lVar2 + 0x18) != 0;
      }
      lVar1 = lVar2 + 8;
      if (*(char *)(lVar2 + 0xc) == '\0') {
        lVar1 = lVar4;
      }
    }
  }
  return lVar1;
}



// FUNCTION 143133e60 FUN_143133e60 body=293 status=ok
// SIG undefined FUN_143133e60(void)

longlong FUN_143133e60(longlong param_1,int *param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  char local_res10 [8];
  
  iVar3 = *param_2;
  if ((((iVar3 == 0) && (param_2[2] == 0)) && ((char)param_2[4] == -1)) &&
     (((char)param_2[6] == -1 && (*(longlong *)(param_2 + 8) == 0)))) {
    if (param_4 != 0) {
      *(bool *)param_4 = *(int *)(param_1 + 0x18) != 0;
    }
    lVar1 = param_1 + 8;
    if (*(char *)(param_1 + 0xc) == '\0') {
      lVar1 = 0;
    }
  }
  else {
    if ((param_3 != (longlong *)0x0) && (*(char *)(param_1 + 0xc) != '\0')) {
      *param_3 = param_1 + 8;
      iVar3 = *param_2;
    }
    lVar1 = FUN_143122010(param_1 + 0x10,iVar3,local_res10);
    lVar4 = 0;
    lVar2 = lVar4;
    if (local_res10[0] != '\0') {
      lVar2 = lVar1;
    }
    if (lVar2 == 0) {
      lVar1 = 0;
    }
    else {
      iVar3 = param_2[2];
      if (((iVar3 == 0) && ((char)param_2[4] == -1)) &&
         (((char)param_2[6] == -1 && (*(longlong *)(param_2 + 8) == 0)))) {
        if (param_4 != 0) {
          *(bool *)param_4 = *(int *)(lVar2 + 0x18) != 0;
        }
        lVar1 = lVar2 + 8;
        if (*(char *)(lVar2 + 0xc) == '\0') {
          lVar1 = lVar4;
        }
      }
      else {
        if ((param_3 != (longlong *)0x0) && (*(char *)(lVar2 + 0xc) != '\0')) {
          *param_3 = lVar2 + 8;
          iVar3 = param_2[2];
        }
        lVar1 = FUN_143122010(lVar2 + 0x10,iVar3,local_res10);
        lVar2 = lVar4;
        if (local_res10[0] != '\0') {
          lVar2 = lVar1;
        }
        lVar1 = lVar4;
        if (lVar2 != 0) {
          lVar1 = FUN_143133d20(lVar2,param_2 + 4,param_3,param_4);
        }
      }
    }
  }
  return lVar1;
}



// FUNCTION 143133f90 GetDefaultValue body=77 status=ok
// SIG undefined GetDefaultValue(void)

uint CAkRTPCMgr::GetDefaultValue(longlong *param_1,uint param_2,longlong param_3)

{
  uint *puVar1;
  
  if (*(uint *)(param_1 + 1) != 0) {
    for (puVar1 = *(uint **)(*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8
                            ); puVar1 != (uint *)0x0; puVar1 = *(uint **)(puVar1 + 2)) {
      if (*puVar1 == param_2) goto LAB_143133fc0;
    }
  }
  puVar1 = (uint *)0x0;
LAB_143133fc0:
  if (param_3 != 0) {
    *(bool *)param_3 = puVar1 != (uint *)0x0;
  }
  if (puVar1 == (uint *)0x0) {
    return 0;
  }
  return puVar1[4];
}



// FUNCTION 143133fe0 GetModulatorValue body=20 status=ok
// SIG undefined GetModulatorValue(void)

void CurrentValue::GetModulatorValue(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14313a3e0(DAT_146b50ae0,param_1,param_2,param_3);
  return;
}



// FUNCTION 143134000 GetNumberOfRTPC body=7 status=ok
// SIG undefined GetNumberOfRTPC(void)

undefined2 GetNumberOfRTPC(undefined8 *param_1)

{
  return *(undefined2 *)*param_1;
}



// FUNCTION 143134010 FUN_143134010 body=322 status=ok
// SIG undefined FUN_143134010(void)

undefined8 FUN_143134010(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint *puVar3;
  char cVar4;
  undefined8 uVar5;
  char local_res8 [8];
  uint local_res10 [2];
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
  
  if (*(uint *)(param_1 + 4) == 0) {
    return 0;
  }
  plVar1 = *(longlong **)
            (param_1[3] + ((ulonglong)((int)param_2 + 0x39) % (ulonglong)*(uint *)(param_1 + 4)) * 8
            );
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      return 0;
    }
    if ((*plVar1 == param_2) && ((int)plVar1[1] == 0x39)) break;
    plVar1 = (longlong *)plVar1[2];
  }
  if ((int)plVar1[0xb] == 0) {
    return 0;
  }
  local_38 = *param_3;
  uStack_30 = param_3[1];
  lVar2 = plVar1[10];
  local_28 = *(undefined4 *)(param_3 + 2);
  uStack_24 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_20 = *(undefined4 *)(param_3 + 3);
  uStack_1c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_18 = *(undefined4 *)(param_3 + 4);
  uStack_14 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_10 = *(undefined4 *)(param_3 + 5);
  uStack_c = *(undefined4 *)((longlong)param_3 + 0x2c);
  cVar4 = FUN_143121c20(param_1,*(undefined4 *)(lVar2 + 4),0x39,(int)plVar1[9],&local_38,local_res10
                        ,local_res8);
  if (cVar4 == '\0') {
    if (*(uint *)(param_1 + 1) != 0) {
      for (puVar3 = *(uint **)(*param_1 +
                              ((ulonglong)*(uint *)(lVar2 + 4) % (ulonglong)*(uint *)(param_1 + 1))
                              * 8); puVar3 != (uint *)0x0; puVar3 = *(uint **)(puVar3 + 2)) {
        if (*puVar3 == *(uint *)(lVar2 + 4)) {
          if (puVar3 != (uint *)0x0) {
            local_res10[0] = puVar3[4];
            goto LAB_143134122;
          }
          break;
        }
      }
    }
    local_res10[0] = 0;
  }
LAB_143134122:
  if (local_res8[0] != '\0') {
    return 0;
  }
  uVar5 = FUN_143131860(lVar2 + 8,local_res10[0],0,local_res8);
  return uVar5;
}



// FUNCTION 143134160 FUN_143134160 body=431 status=ok
// SIG undefined FUN_143134160(void)

ulonglong FUN_143134160(longlong *param_1,longlong param_2,int param_3,undefined8 *param_4)

{
  longlong *plVar1;
  uint *puVar2;
  char cVar3;
  longlong lVar4;
  float fVar5;
  ulonglong uVar6;
  float fVar7;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  char local_res18 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(uint *)(param_1 + 4) != 0) {
    for (plVar1 = *(longlong **)
                   (param_1[3] +
                   ((ulonglong)(uint)((int)param_2 + param_3) % (ulonglong)*(uint *)(param_1 + 4)) *
                   8); plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[2]) {
      if ((*plVar1 == param_2) && ((int)plVar1[1] == param_3)) {
        if (*(int *)((longlong)plVar1 + 0x4c) != 3) {
          uVar6 = FUN_143132910(param_1,plVar1,param_4);
          return uVar6;
        }
        lVar4 = plVar1[10];
        fVar7 = 1.0;
        if (lVar4 != lVar4 + (ulonglong)*(uint *)(plVar1 + 0xb) * 0x18) {
          do {
            local_58 = *param_4;
            uStack_50 = param_4[1];
            local_48 = *(undefined4 *)(param_4 + 2);
            uStack_44 = *(undefined4 *)((longlong)param_4 + 0x14);
            uStack_40 = *(undefined4 *)(param_4 + 3);
            uStack_3c = *(undefined4 *)((longlong)param_4 + 0x1c);
            local_38 = *(undefined4 *)(param_4 + 4);
            uStack_34 = *(undefined4 *)((longlong)param_4 + 0x24);
            uStack_30 = *(undefined4 *)(param_4 + 5);
            uStack_2c = *(undefined4 *)((longlong)param_4 + 0x2c);
            cVar3 = FUN_143121c20(param_1,*(undefined4 *)(lVar4 + 4),(int)plVar1[1],(int)plVar1[9],
                                  &local_58,local_res8,local_res18);
            if (cVar3 == '\0') {
              if (*(uint *)(param_1 + 1) != 0) {
                for (puVar2 = *(uint **)(*param_1 +
                                        ((ulonglong)*(uint *)(lVar4 + 4) %
                                        (ulonglong)*(uint *)(param_1 + 1)) * 8);
                    puVar2 != (uint *)0x0; puVar2 = *(uint **)(puVar2 + 2)) {
                  if (*puVar2 == *(uint *)(lVar4 + 4)) {
                    if (puVar2 != (uint *)0x0) {
                      local_res8[0] = puVar2[4];
                      goto LAB_14313429e;
                    }
                    break;
                  }
                }
              }
              local_res8[0] = 0;
            }
LAB_14313429e:
            if (local_res18[0] == '\0') {
              fVar5 = (float)FUN_143131860(lVar4 + 8,local_res8[0],0,local_res10);
              fVar7 = fVar7 * fVar5;
            }
            lVar4 = lVar4 + 0x18;
          } while (lVar4 != plVar1[10] + (ulonglong)*(uint *)(plVar1 + 0xb) * 0x18);
        }
        return (ulonglong)(uint)fVar7;
      }
    }
  }
  return 0;
}



// FUNCTION 143134310 GetRTPCEntry body=225 status=ok
// SIG undefined GetRTPCEntry(void)

uint * CAkRTPCMgr::GetRTPCEntry(longlong *param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  
  if (*(uint *)(param_1 + 1) != 0) {
    for (puVar3 = *(uint **)(*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8
                            ); puVar3 != (uint *)0x0; puVar3 = *(uint **)(puVar3 + 2)) {
      if (*puVar3 == param_2) {
        if (puVar3 != (uint *)0x0) {
          return puVar3;
        }
        break;
      }
    }
  }
  puVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x70);
  if (puVar3 == (uint *)0x0) {
    return (uint *)0x0;
  }
  *puVar3 = param_2;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[10] = 0;
  *(undefined1 *)(puVar3 + 0xb) = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  *(undefined ***)(puVar3 + 8) = &PTR_FUN_144ca0248;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  puVar3[0x19] = 0;
  puVar3[0x1a] = 0;
  puVar3[0x1b] = 0;
  cVar2 = FUN_143133310(param_1);
  if (cVar2 != '\0') {
    uVar1 = *(uint *)(param_1 + 1);
    *(undefined8 *)(puVar3 + 2) =
         *(undefined8 *)(*param_1 + ((ulonglong)*puVar3 % (ulonglong)uVar1) * 8);
    *(uint **)(*param_1 + ((ulonglong)*puVar3 % (ulonglong)uVar1) * 8) = puVar3;
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return puVar3;
}



// FUNCTION 143134400 GetSubscription body=57 status=ok
// SIG undefined GetSubscription(void)

longlong * CAkRTPCMgr::GetSubscription(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  
  if (*(uint *)(param_1 + 0x20) != 0) {
    for (plVar1 = *(longlong **)
                   (*(longlong *)(param_1 + 0x18) +
                   ((ulonglong)(uint)((int)param_2 + param_3) % (ulonglong)*(uint *)(param_1 + 0x20)
                   ) * 8); plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[2]) {
      if ((*plVar1 == param_2) && ((int)plVar1[1] == param_3)) {
        return plVar1;
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 143134440 FUN_143134440 body=156 status=ok
// SIG undefined FUN_143134440(void)

undefined8 FUN_143134440(longlong *param_1,int param_2)

{
  uint uVar1;
  AKRESULT AVar2;
  void *pvVar3;
  undefined4 extraout_var;
  ulonglong uVar5;
  uint uVar6;
  void *pvVar4;
  
  uVar6 = *(int *)((longlong)param_1 + 0xc) + param_2;
  pvVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar6 << 3);
  if (pvVar3 != (void *)0x0) {
    pvVar4 = (void *)*param_1;
    if ((pvVar4 != (void *)0x0) && (pvVar4 != pvVar3)) {
      uVar1 = *(uint *)(param_1 + 1);
      uVar5 = 0;
      if ((ulonglong)uVar1 != 0) {
        do {
          *(undefined8 *)((longlong)pvVar3 + uVar5 * 8) = *(undefined8 *)(*param_1 + uVar5 * 8);
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
        pvVar4 = (void *)*param_1;
      }
      AVar2 = AK::MemoryMgr::Free(g_DefaultPoolId,pvVar4);
      pvVar4 = (void *)CONCAT44(extraout_var,AVar2);
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar6;
    *param_1 = (longlong)pvVar3;
    return CONCAT71((int7)((ulonglong)pvVar4 >> 8),1);
  }
  return 0;
}



// FUNCTION 1431344e0 FUN_1431344e0 body=168 status=ok
// SIG undefined FUN_1431344e0(void)

undefined8 FUN_1431344e0(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar4 = *(int *)((longlong)param_1 + 0xc) + param_2;
  puVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar4 << 3);
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*param_1;
    if ((puVar3 != (undefined8 *)0x0) && (puVar3 != puVar1)) {
      uVar5 = (ulonglong)*(uint *)(param_1 + 1);
      puVar2 = puVar1;
      if (uVar5 != 0) {
        do {
          if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = 0;
          }
          *puVar2 = *(undefined8 *)((longlong)puVar2 + (*param_1 - (longlong)puVar1));
          uVar5 = uVar5 - 1;
          puVar2 = puVar2 + 1;
        } while (uVar5 != 0);
        puVar3 = (undefined8 *)*param_1;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar3);
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar4;
    *param_1 = (longlong)puVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 143134590 FUN_143134590 body=168 status=ok
// SIG undefined FUN_143134590(void)

undefined8 FUN_143134590(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar5 = *(int *)((longlong)param_1 + 0xc) + param_2;
  puVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar5 << 4);
  if (puVar2 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*param_1;
    if ((puVar4 != (undefined8 *)0x0) && (puVar4 != puVar2)) {
      uVar6 = (ulonglong)*(uint *)(param_1 + 1);
      puVar3 = puVar2;
      if (uVar6 != 0) {
        do {
          if (puVar3 != (undefined8 *)0x0) {
            *(undefined4 *)puVar3 = 0;
          }
          puVar4 = (undefined8 *)((longlong)puVar3 + (*param_1 - (longlong)puVar2));
          uVar1 = puVar4[1];
          *puVar3 = *puVar4;
          puVar3[1] = uVar1;
          uVar6 = uVar6 - 1;
          puVar3 = puVar3 + 2;
        } while (uVar6 != 0);
        puVar4 = (undefined8 *)*param_1;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar4);
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar5;
    *param_1 = (longlong)puVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 143134640 FUN_143134640 body=332 status=ok
// SIG undefined FUN_143134640(void)

undefined8 FUN_143134640(longlong *param_1,int param_2)

{
  longlong lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  uVar5 = *(int *)((longlong)param_1 + 0xc) + param_2;
  pvVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar5 * 0x28);
  if (pvVar2 == (void *)0x0) {
    return 0;
  }
  pvVar4 = (void *)*param_1;
  if ((pvVar4 != (void *)0x0) && (pvVar4 != pvVar2)) {
    uVar7 = (ulonglong)*(uint *)(param_1 + 1);
    if (uVar7 != 0) {
      puVar6 = (undefined4 *)((longlong)pvVar2 + 0x1c);
      do {
        if ((undefined8 *)(puVar6 + -7) != (undefined8 *)0x0) {
          puVar6[-5] = 0;
          *(undefined1 *)(puVar6 + -4) = 0;
          *(undefined8 *)(puVar6 + -3) = 0;
          *(undefined8 *)(puVar6 + -1) = 0;
          *(undefined ***)(puVar6 + -7) = &PTR_FUN_144732cb0;
        }
        lVar1 = *param_1 + (-0x1c - (longlong)pvVar2);
        *(undefined1 *)(puVar6 + 1) = *(undefined1 *)((longlong)puVar6 + lVar1 + 0x20);
        puVar6[-5] = *(undefined4 *)((longlong)puVar6 + lVar1 + 8);
        *(undefined1 *)(puVar6 + -4) = *(undefined1 *)((longlong)puVar6 + lVar1 + 0xc);
        AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType_const_&___ptr64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType>_>
        ::Term(puVar6 + -3);
        *(undefined8 *)(puVar6 + -3) = *(undefined8 *)((longlong)puVar6 + lVar1 + 0x10);
        puVar6[-1] = *(undefined4 *)((longlong)puVar6 + lVar1 + 0x18);
        *puVar6 = *(undefined4 *)((longlong)puVar6 + lVar1 + 0x1c);
        *(undefined8 *)((longlong)puVar6 + lVar1 + 0x10) = 0;
        *(undefined8 *)((longlong)puVar6 + lVar1 + 0x18) = 0;
        puVar3 = (undefined8 *)((longlong)puVar6 + *param_1 + (-0x1c - (longlong)pvVar2));
        (**(code **)*puVar3)(puVar3,0);
        puVar6 = puVar6 + 10;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      pvVar4 = (void *)*param_1;
    }
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar4);
  }
  *param_1 = (longlong)pvVar2;
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  return 1;
}



// FUNCTION 143134790 FUN_143134790 body=272 status=ok
// SIG undefined FUN_143134790(void)

undefined8 FUN_143134790(longlong *param_1,int param_2)

{
  longlong lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar6 = *(int *)((longlong)param_1 + 0xc) + param_2;
  pvVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar6 * 0x28);
  if (pvVar2 == (void *)0x0) {
    return 0;
  }
  pvVar4 = (void *)*param_1;
  if ((pvVar4 != (void *)0x0) && (pvVar4 != pvVar2)) {
    uVar7 = (ulonglong)*(uint *)(param_1 + 1);
    if (uVar7 != 0) {
      lVar5 = (longlong)pvVar2 + 0x1c;
      do {
        puVar3 = (undefined8 *)(lVar5 + -0x1c);
        if (puVar3 != (undefined8 *)0x0) {
          *(undefined4 *)(lVar5 + -0x14) = 0;
          *(undefined1 *)(lVar5 + -0x10) = 0;
          *(undefined8 *)(lVar5 + -0xc) = 0;
          *(undefined8 *)(lVar5 + -4) = 0;
          *puVar3 = &PTR_FUN_144732cb0;
        }
        lVar1 = (-0x1c - (longlong)pvVar2) + lVar5;
        FUN_143138d90(puVar3,*param_1 + lVar1);
        puVar3 = (undefined8 *)(*param_1 + lVar1);
        (**(code **)*puVar3)(puVar3,0);
        lVar5 = lVar5 + 0x28;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      pvVar4 = (void *)*param_1;
    }
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar4);
  }
  *param_1 = (longlong)pvVar2;
  *(uint *)((longlong)param_1 + 0xc) = uVar6;
  return 1;
}



// FUNCTION 1431348a0 FUN_1431348a0 body=331 status=ok
// SIG undefined FUN_1431348a0(void)

undefined8 FUN_1431348a0(longlong *param_1,int param_2)

{
  longlong lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  uVar5 = *(int *)((longlong)param_1 + 0xc) + param_2;
  pvVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar5 * 0x28);
  if (pvVar2 == (void *)0x0) {
    return 0;
  }
  pvVar4 = (void *)*param_1;
  if ((pvVar4 != (void *)0x0) && (pvVar4 != pvVar2)) {
    uVar7 = (ulonglong)*(uint *)(param_1 + 1);
    if (uVar7 != 0) {
      puVar6 = (undefined4 *)((longlong)pvVar2 + 0x1c);
      do {
        if ((undefined8 *)(puVar6 + -7) != (undefined8 *)0x0) {
          puVar6[-5] = 0;
          *(undefined1 *)(puVar6 + -4) = 0;
          *(undefined8 *)(puVar6 + -3) = 0;
          *(undefined8 *)(puVar6 + -1) = 0;
          *(undefined ***)(puVar6 + -7) = &PTR_FUN_144732cb0;
        }
        lVar1 = *param_1 + (-0x1c - (longlong)pvVar2);
        puVar6[1] = *(undefined4 *)((longlong)puVar6 + lVar1 + 0x20);
        puVar6[-5] = *(undefined4 *)((longlong)puVar6 + lVar1 + 8);
        *(undefined1 *)(puVar6 + -4) = *(undefined1 *)((longlong)puVar6 + lVar1 + 0xc);
        AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType_const_&___ptr64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType>_>
        ::Term(puVar6 + -3);
        *(undefined8 *)(puVar6 + -3) = *(undefined8 *)((longlong)puVar6 + lVar1 + 0x10);
        puVar6[-1] = *(undefined4 *)((longlong)puVar6 + lVar1 + 0x18);
        *puVar6 = *(undefined4 *)((longlong)puVar6 + lVar1 + 0x1c);
        *(undefined8 *)((longlong)puVar6 + lVar1 + 0x10) = 0;
        *(undefined8 *)((longlong)puVar6 + lVar1 + 0x18) = 0;
        puVar3 = (undefined8 *)((longlong)puVar6 + *param_1 + (-0x1c - (longlong)pvVar2));
        (**(code **)*puVar3)(puVar3,0);
        puVar6 = puVar6 + 10;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      pvVar4 = (void *)*param_1;
    }
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar4);
  }
  *param_1 = (longlong)pvVar2;
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  return 1;
}



// FUNCTION 1431349f0 FUN_1431349f0 body=333 status=ok
// SIG undefined FUN_1431349f0(void)

undefined8 FUN_1431349f0(longlong *param_1,int param_2)

{
  longlong lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  uVar5 = *(int *)((longlong)param_1 + 0xc) + param_2;
  pvVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar5 * 0x28);
  if (pvVar2 == (void *)0x0) {
    return 0;
  }
  pvVar4 = (void *)*param_1;
  if ((pvVar4 != (void *)0x0) && (pvVar4 != pvVar2)) {
    uVar7 = (ulonglong)*(uint *)(param_1 + 1);
    if (uVar7 != 0) {
      puVar6 = (undefined4 *)((longlong)pvVar2 + 0x1c);
      do {
        if ((undefined8 *)(puVar6 + -7) != (undefined8 *)0x0) {
          puVar6[-5] = 0;
          *(undefined1 *)(puVar6 + -4) = 0;
          *(undefined8 *)(puVar6 + -3) = 0;
          *(undefined8 *)(puVar6 + -1) = 0;
          *(undefined ***)(puVar6 + -7) = &PTR_FUN_144732cb0;
        }
        lVar1 = *param_1 + (-0x1c - (longlong)pvVar2);
        *(undefined8 *)(puVar6 + 1) = *(undefined8 *)((longlong)puVar6 + lVar1 + 0x20);
        puVar6[-5] = *(undefined4 *)((longlong)puVar6 + lVar1 + 8);
        *(undefined1 *)(puVar6 + -4) = *(undefined1 *)((longlong)puVar6 + lVar1 + 0xc);
        AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType_const_&___ptr64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType>_>
        ::Term(puVar6 + -3);
        *(undefined8 *)(puVar6 + -3) = *(undefined8 *)((longlong)puVar6 + lVar1 + 0x10);
        puVar6[-1] = *(undefined4 *)((longlong)puVar6 + lVar1 + 0x18);
        *puVar6 = *(undefined4 *)((longlong)puVar6 + lVar1 + 0x1c);
        *(undefined8 *)((longlong)puVar6 + lVar1 + 0x10) = 0;
        *(undefined8 *)((longlong)puVar6 + lVar1 + 0x18) = 0;
        puVar3 = (undefined8 *)((longlong)puVar6 + *param_1 + (-0x1c - (longlong)pvVar2));
        (**(code **)*puVar3)(puVar3,0);
        puVar6 = puVar6 + 10;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      pvVar4 = (void *)*param_1;
    }
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar4);
  }
  *param_1 = (longlong)pvVar2;
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  return 1;
}



// FUNCTION 143134b40 FUN_143134b40 body=223 status=ok
// SIG undefined FUN_143134b40(void)

undefined8 FUN_143134b40(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  *(undefined4 *)(param_1 + 2) = 0;
  if (((*(uint *)(param_1 + 1) < 0xc) && (*(uint *)((longlong)param_1 + 0xc) < 0xb)) &&
     (cVar1 = FUN_143134440(param_1,0xb - *(uint *)(param_1 + 1)), cVar1 == '\0')) {
    return 0x34;
  }
  *(undefined4 *)(param_1 + 1) = 0xb;
  uVar4 = 0;
  do {
    uVar3 = (int)uVar4 + 1;
    *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
    uVar4 = (ulonglong)uVar3;
  } while (uVar3 < *(uint *)(param_1 + 1));
  *(undefined4 *)(param_1 + 5) = 0;
  if (((*(uint *)(param_1 + 4) < 0xc) && (*(uint *)((longlong)param_1 + 0x24) < 0xb)) &&
     (cVar1 = FUN_143134440(param_1 + 3,0xb - *(uint *)(param_1 + 4)), cVar1 == '\0')) {
    return 0x34;
  }
  *(undefined4 *)(param_1 + 4) = 0xb;
  uVar4 = 0;
  do {
    uVar3 = (int)uVar4 + 1;
    *(undefined8 *)(param_1[3] + uVar4 * 8) = 0;
    uVar4 = (ulonglong)uVar3;
  } while (uVar3 < *(uint *)(param_1 + 4));
  lVar2 = CAkRTPCMgr::GetRTPCEntry(param_1,0x83);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x10) = 0x42800000;
  }
  return 1;
}



// FUNCTION 143134c30 MatchValidFields body=84 status=ok
// SIG undefined MatchValidFields(void)

ulonglong AkNestedKey<CAkRegisteredObj_*,GetNullGameObjPtr,AkNestedKey<unsigned_long,GetInvalidPlayingID,AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>_>_>
          ::MatchValidFields(ulonglong *param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = *param_2;
  if ((uVar2 == 0) || (*param_1 == uVar2)) {
    uVar1 = (uint)param_2[1];
    uVar2 = (ulonglong)uVar1;
    if ((uVar1 == 0) || ((uint)param_1[1] == uVar1)) {
      uVar1 = (uint)param_2[2];
      uVar2 = (ulonglong)uVar1;
      if ((uVar1 == 0) || ((uint)param_1[2] == uVar1)) {
        uVar2 = 0;
        if (((char)param_2[3] == -1) || ((char)param_1[3] == (char)param_2[3])) {
          uVar2 = 0;
          if ((((char)param_2[4] == -1) || ((char)param_1[4] == (char)param_2[4])) &&
             ((uVar2 = param_2[5], uVar2 == 0 || (param_1[5] == uVar2)))) {
            return CONCAT71((int7)(uVar2 >> 8),1);
          }
        }
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 143134c90 FUN_143134c90 body=14 status=ok
// SIG undefined FUN_143134c90(void)

void FUN_143134c90(undefined4 param_1)

{
  FUN_14313adb0(DAT_146b50ae0,param_1);
  return;
}



// FUNCTION 143134ca0 NotifyRTPCChange body=273 status=ok
// SIG undefined NotifyRTPCChange(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CAkRTPCMgr::AkRTPCEntry::NotifyRTPCChange
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
               char param_5)

{
  size_t _Size;
  undefined4 uVar1;
  uint uVar2;
  void *_Src;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined8 *_Dst;
  undefined ***pppuVar8;
  undefined8 auStack_b0 [5];
  longlong alStack_88 [4];
  undefined **local_68 [8];
  
  uVar1 = *param_1;
  pppuVar6 = (undefined ***)0x0;
  pppuVar8 = local_68;
  if (param_5 == '\0') {
    pppuVar8 = pppuVar6;
  }
  local_68[0] = &PTR_LAB_145ac6e58;
  uVar2 = param_1[0x16];
  if (uVar2 != 0) {
    _Size = (ulonglong)uVar2 * 8;
    uVar5 = _Size + 0xf;
    if (uVar5 <= _Size) {
      uVar5 = 0xffffffffffffff0;
    }
    auStack_b0[0] = 0x143134d31;
    lVar4 = -(uVar5 & 0xfffffffffffffff0);
    _Src = *(void **)(param_1 + 0x14);
    _Dst = (undefined8 *)((longlong)local_68 + lVar4);
    local_68[1] = (undefined **)param_4;
    local_68[2] = (undefined **)(param_1 + 8);
    *(undefined8 *)((longlong)auStack_b0 + lVar4) = 0x143134d48;
    ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,_Size);
    pppuVar7 = (undefined ***)(ulonglong)uVar2;
    if (_Dst + (longlong)(ulonglong)uVar2 < _Dst) {
      pppuVar7 = pppuVar6;
    }
    if (pppuVar7 != (undefined ***)0x0) {
      do {
        uVar3 = *_Dst;
        *(undefined4 **)((longlong)alStack_88 + lVar4 + 0x10) = param_1 + 8;
        *(undefined ****)((longlong)alStack_88 + lVar4 + 8) = pppuVar8;
        *(undefined8 *)((longlong)alStack_88 + lVar4) = param_4;
        *(undefined8 *)((longlong)auStack_b0 + lVar4) = 0x143134d80;
        FUN_143134dc0(uVar3,uVar1,param_2,param_3);
        pppuVar6 = (undefined ***)((longlong)pppuVar6 + 1);
        _Dst = _Dst + 1;
      } while (pppuVar6 != pppuVar7);
    }
  }
  return;
}



// FUNCTION 143134dc0 FUN_143134dc0 body=1130 status=ok
// SIG undefined FUN_143134dc0(void)

void FUN_143134dc0(longlong *param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 in_R8;
  undefined8 in_R9;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 local_res8 [2];
  undefined8 in_stack_ffffffffffffff78;
  undefined8 in_stack_ffffffffffffff80;
  undefined4 uVar15;
  undefined1 local_68 [80];
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  puVar3 = (undefined8 *)*param_1;
  uVar8 = param_2 & 0xffffffff;
  if (puVar3 != (undefined8 *)0x0) {
    iVar2 = (int)param_1[9];
    iVar7 = (int)param_2;
    if (iVar2 == 2) {
      lVar5 = param_1[10];
      lVar6 = lVar5 + (ulonglong)*(uint *)(param_1 + 0xb) * 0x18;
      if (*(int *)((longlong)param_1 + 0x4c) == 3) {
        fVar13 = 1.0;
        fVar14 = 1.0;
        if (lVar5 != lVar6) {
          lVar6 = lVar5 + 8;
          lVar1 = lVar5 + (ulonglong)*(uint *)(param_1 + 0xb) * 0x18;
          do {
            if (*(int *)(lVar6 + -4) == iVar7) {
              fVar9 = (float)FUN_143131860(lVar6,param_3,0,local_res8);
              fVar14 = fVar14 * fVar9;
              fVar9 = (float)FUN_143131860(lVar6,param_4,0,local_68);
              fVar13 = fVar13 * fVar9;
            }
            uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
            lVar5 = lVar5 + 0x18;
            lVar6 = lVar6 + 0x18;
          } while (lVar5 != lVar1);
        }
      }
      else {
        fVar13 = 0.0;
        fVar14 = 0.0;
        if (lVar5 != lVar6) {
          lVar6 = lVar5 + 8;
          lVar1 = lVar5 + (ulonglong)*(uint *)(param_1 + 0xb) * 0x18;
          do {
            if (*(int *)(lVar6 + -4) == iVar7) {
              fVar9 = (float)FUN_143131860(lVar6,param_3,0,local_res8);
              fVar14 = fVar14 + fVar9;
              fVar9 = (float)FUN_143131860(lVar6,param_4,0,local_68);
              fVar13 = fVar13 + fVar9;
            }
            uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
            lVar5 = lVar5 + 0x18;
            lVar6 = lVar6 + 0x18;
          } while (lVar5 != lVar1);
        }
      }
      (**(code **)*puVar3)
                (puVar3,(int)param_1[1],param_5,fVar13,CONCAT44(uVar10,fVar13 - fVar14),param_6);
    }
    else if (iVar2 == 1) {
      cVar4 = AkNestedKey<CAkRegisteredObj_*,GetNullGameObjPtr,AkNestedKey<unsigned_long,GetInvalidPlayingID,AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>_>_>
              ::MatchValidFields(param_1 + 3,param_5);
      if ((cVar4 != '\0') &&
         ((param_6 == (undefined8 *)0x0 ||
          (cVar4 = (**(code **)*param_6)(param_6,param_1 + 3), cVar4 == '\0')))) {
        uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
        lVar5 = param_1[10];
        iVar2 = *(int *)((longlong)param_1 + 0x4c);
        lVar6 = lVar5 + (ulonglong)*(uint *)(param_1 + 0xb) * 0x18;
        if (iVar2 == 3) {
          fVar13 = 1.0;
          if (lVar5 != lVar6) {
            lVar6 = lVar5 + (ulonglong)*(uint *)(param_1 + 0xb) * 0x18;
            do {
              if (*(int *)(lVar5 + 4) == iVar7) {
                fVar14 = (float)FUN_143131860(lVar5 + 8,param_4,0,local_res8);
                fVar13 = fVar13 * fVar14;
              }
              uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
              lVar5 = lVar5 + 0x18;
            } while (lVar5 != lVar6);
          }
        }
        else {
          fVar13 = 0.0;
          if (lVar5 != lVar6) {
            lVar6 = lVar5 + (ulonglong)*(uint *)(param_1 + 0xb) * 0x18;
            do {
              if (*(int *)(lVar5 + 4) == iVar7) {
                fVar14 = (float)FUN_143131860(lVar5 + 8,param_4,0,local_res8);
                fVar13 = fVar13 + fVar14;
              }
              uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
              lVar5 = lVar5 + 0x18;
            } while (lVar5 != lVar6);
          }
        }
        (**(code **)(*(longlong *)*param_1 + 0x10))
                  ((longlong *)*param_1,(int)param_1[1],uVar8,iVar2,CONCAT44(uVar10,fVar13));
      }
    }
    else if (iVar2 == 0) {
      cVar4 = AkNestedKey<CAkRegisteredObj_*,GetNullGameObjPtr,AkNestedKey<unsigned_long,GetInvalidPlayingID,AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*,GetNullPbiPtr>_>_>_>_>_>
              ::MatchValidFields(param_1 + 3,param_5);
      if ((cVar4 != '\0') &&
         ((param_6 == (undefined8 *)0x0 ||
          (cVar4 = (**(code **)*param_6)(param_6,param_1 + 3), cVar4 == '\0')))) {
        local_res8[0] = FUN_143133600(param_1,uVar8,param_4);
        FUN_14317c840(*param_1,(short)param_1[1],local_res8,4);
      }
    }
    else if (iVar2 == 3) {
      uVar10 = FUN_143133600(param_1,param_2,param_4);
      FUN_14319ae20(*param_1,(int)param_1[1],uVar10,param_5);
    }
    else if (iVar2 == 6) {
      lVar6 = param_1[10];
      fVar13 = (float)FUN_143131860(lVar6 + 8,param_4,0,local_res8);
      fVar14 = (float)FUN_143131860(lVar6 + 8,param_3,0,local_res8);
      if (fVar13 != fVar14) {
        CAkSwitchMgr::SetSwitchFromRTPCMgr(g_pSwitchMgr,puVar3,param_5,fVar13,param_6);
      }
    }
    else {
      lVar6 = puVar3[6];
      if (((lVar6 != 0) && (lVar5 = *(longlong *)(lVar6 + 0x78), lVar5 != 0)) &&
         ((0 < *(short *)(lVar5 + 0x50) ||
          ((0 < *(short *)(lVar5 + 0x54) && (*(char *)(lVar6 + 0x108) != '\0')))))) {
        if ((int)param_1[1] == 0x39) {
          FUN_1431932f0(puVar3,param_5,in_R8,in_R9,param_6);
        }
        else {
          cVar4 = FUN_1431932b0(puVar3);
          if (cVar4 != '\0') {
            uVar11 = FUN_143133600(param_1,uVar8,param_3);
            uVar12 = FUN_143133600(param_1,uVar8,param_4);
            FUN_143193fd0(puVar3,param_1,(int)param_1[1],uVar8,CONCAT44(uVar10,uVar12),
                          CONCAT44(uVar15,uVar11),param_5,param_6);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 143135230 RegisterLayer body=105 status=ok
// SIG undefined RegisterLayer(void)

void CAkRTPCMgr::RegisterLayer(void)

{
  FUN_143137d00();
  return;
}



// FUNCTION 1431352a0 RegisterSwitchGroup body=120 status=ok
// SIG undefined RegisterSwitchGroup(void)

void CAkRTPCMgr::RegisterSwitchGroup(void)

{
  FUN_143137d00();
  return;
}



// FUNCTION 143135320 FUN_143135320 body=801 status=ok
// SIG undefined FUN_143135320(void)

void FUN_143135320(longlong param_1,char *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int *piVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  char *local_res10;
  char local_res18 [8];
  longlong *local_res20;
  longlong local_50;
  longlong *local_48;
  undefined1 local_40 [8];
  
  cVar2 = *param_2;
  local_res10 = param_2;
  if (((cVar2 == -1) && (param_2[8] == -1)) && (*(longlong *)(param_2 + 0x10) == 0)) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
    AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>
    ::Term();
    return;
  }
  plVar9 = (longlong *)(param_1 + 0x10);
  local_res20 = plVar9;
  if (cVar2 == -1) {
    lVar10 = *plVar9;
    if (lVar10 != lVar10 + (ulonglong)*(uint *)(param_1 + 0x18) * 0x28) {
      do {
        cVar2 = param_2[8];
        local_50 = lVar10;
        if ((cVar2 == -1) && (*(longlong *)(param_2 + 0x10) == 0)) {
          if (*(char *)(lVar10 + 0xc) != '\0') {
            *(undefined1 *)(lVar10 + 0xc) = 0;
          }
          FUN_143138450(lVar10);
        }
        else {
          plVar5 = (longlong *)(param_2 + 0x10);
          local_48 = plVar5;
          if (cVar2 == -1) {
            puVar7 = *(undefined8 **)(lVar10 + 0x10);
            plVar9 = local_res20;
            if (puVar7 != puVar7 + (ulonglong)*(uint *)(lVar10 + 0x18) * 5) {
              piVar8 = (int *)(puVar7 + 3);
              do {
                if (*plVar5 == 0) {
                  if ((char)piVar8[-3] != '\0') {
                    *(undefined1 *)(piVar8 + -3) = 0;
                  }
                  if (*(void **)(piVar8 + -2) != (void *)0x0) {
                    *piVar8 = 0;
                    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(piVar8 + -2));
                    piVar8[-2] = 0;
                    piVar8[-1] = 0;
                    piVar8[1] = 0;
                  }
                }
                else {
                  FUN_143139660(piVar8 + -2);
                }
                piVar11 = piVar8 + -2;
                if (((char)piVar8[-3] == '\0') && (*piVar8 == 0)) {
                  if (*(void **)piVar11 != (void *)0x0) {
                    *piVar8 = 0;
                    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)piVar11);
                    piVar11[0] = 0;
                    piVar11[1] = 0;
                    piVar8[1] = 0;
                  }
                  puVar1 = (undefined8 *)
                           (*(longlong *)(lVar10 + 0x10) +
                           ((ulonglong)*(uint *)(lVar10 + 0x18) * 5 + -5) * 8);
                  puVar3 = puVar7;
                  while (puVar3 < puVar1) {
                    FUN_143138d90(puVar3,puVar3 + 5);
                    puVar3 = puVar3 + 5;
                  }
                  (**(code **)*puVar1)(puVar1,0);
                  *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + -1;
                }
                else {
                  puVar7 = puVar7 + 5;
                  piVar8 = piVar8 + 10;
                }
                plVar9 = local_res20;
                param_2 = local_res10;
              } while (puVar7 != (undefined8 *)
                                 (*(longlong *)(lVar10 + 0x10) +
                                 (ulonglong)*(uint *)(lVar10 + 0x18) * 0x28));
            }
          }
          else {
            lVar4 = FUN_143121f60(lVar10 + 0x10,cVar2,local_res18);
            lVar6 = 0;
            if (local_res18[0] != '\0') {
              lVar6 = lVar4;
            }
            plVar9 = local_res20;
            if (((lVar6 != 0) &&
                (AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>::
                 RemoveAll(lVar6,plVar5), plVar9 = local_res20, *(char *)(lVar6 + 0xc) == '\0')) &&
               (*(int *)(lVar6 + 0x18) == 0)) {
              AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>::Term
                        (lVar6);
              FUN_1431395a0(lVar10 + 0x10,param_2[8]);
              plVar9 = local_res20;
            }
          }
        }
        if ((*(char *)(lVar10 + 0xc) == '\0') && (*(int *)(lVar10 + 0x18) == 0)) {
          FUN_143138450(lVar10);
          plVar5 = (longlong *)
                   AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType_const_&___ptr64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType>_>
                   ::Erase(plVar9,local_40,&local_50);
          lVar10 = *plVar5;
        }
        else {
          lVar10 = lVar10 + 0x28;
        }
      } while (lVar10 != *plVar9 + (ulonglong)*(uint *)(plVar9 + 1) * 0x28);
    }
  }
  else {
    lVar6 = FUN_143121f60(plVar9,cVar2,&local_res10);
    lVar10 = 0;
    if ((char)local_res10 != '\0') {
      lVar10 = lVar6;
    }
    if (((lVar10 != 0) && (FUN_143135650(lVar10,param_2 + 8), *(char *)(lVar10 + 0xc) == '\0')) &&
       (*(int *)(lVar10 + 0x18) == 0)) {
      FUN_143138450(lVar10);
      FUN_143139560(plVar9,*param_2);
      return;
    }
  }
  return;
}



// FUNCTION 143135650 FUN_143135650 body=454 status=ok
// SIG undefined FUN_143135650(void)

void FUN_143135650(longlong param_1,char *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  char local_res10 [8];
  
  cVar3 = *param_2;
  plVar1 = (longlong *)(param_2 + 8);
  if ((cVar3 == -1) && (*plVar1 == 0)) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
    FUN_143138450();
    return;
  }
  if (cVar3 == -1) {
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    if (puVar6 != puVar6 + (ulonglong)*(uint *)(param_1 + 0x18) * 5) {
      piVar8 = (int *)(puVar6 + 3);
      do {
        if (*plVar1 == 0) {
          if ((char)piVar8[-3] != '\0') {
            *(undefined1 *)(piVar8 + -3) = 0;
          }
          if (*(void **)(piVar8 + -2) != (void *)0x0) {
            *piVar8 = 0;
            AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(piVar8 + -2));
            piVar8[-2] = 0;
            piVar8[-1] = 0;
            piVar8[1] = 0;
          }
        }
        else {
          FUN_143139660(piVar8 + -2);
        }
        piVar9 = piVar8 + -2;
        if (((char)piVar8[-3] == '\0') && (*piVar8 == 0)) {
          if (*(void **)piVar9 != (void *)0x0) {
            *piVar8 = 0;
            AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)piVar9);
            piVar9[0] = 0;
            piVar9[1] = 0;
            piVar8[1] = 0;
          }
          puVar2 = (undefined8 *)
                   (*(longlong *)(param_1 + 0x10) +
                   ((ulonglong)*(uint *)(param_1 + 0x18) * 5 + -5) * 8);
          puVar4 = puVar6;
          while (puVar4 < puVar2) {
            FUN_143138d90(puVar4,puVar4 + 5);
            puVar4 = puVar4 + 5;
          }
          (**(code **)*puVar2)(puVar2,0);
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
        }
        else {
          puVar6 = puVar6 + 5;
          piVar8 = piVar8 + 10;
        }
      } while (puVar6 != (undefined8 *)
                         (*(longlong *)(param_1 + 0x10) +
                         (ulonglong)*(uint *)(param_1 + 0x18) * 0x28));
    }
  }
  else {
    lVar5 = FUN_143121f60(param_1 + 0x10,cVar3,local_res10);
    lVar7 = 0;
    if (local_res10[0] != '\0') {
      lVar7 = lVar5;
    }
    if (((lVar7 != 0) &&
        (AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>::RemoveAll
                   (lVar7,plVar1), *(char *)(lVar7 + 0xc) == '\0')) && (*(int *)(lVar7 + 0x18) == 0)
       ) {
      AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>::Term(lVar7);
      FUN_1431395a0(param_1 + 0x10,*param_2);
    }
  }
  return;
}



// FUNCTION 143135820 FUN_143135820 body=651 status=ok
// SIG undefined FUN_143135820(void)

void FUN_143135820(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  char local_res10 [8];
  longlong local_res18;
  longlong local_res20;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  
  iVar2 = *param_2;
  if ((((iVar2 == 0) && (param_2[2] == 0)) && ((char)param_2[4] == -1)) &&
     (((char)param_2[6] == -1 && (*(longlong *)(param_2 + 8) == 0)))) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
    AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidPlayingID,AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>_>_>
    ::Term();
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  if (iVar2 == 0) {
    lVar5 = *plVar1;
    if (lVar5 != lVar5 + (ulonglong)*(uint *)(param_1 + 0x18) * 0x28) {
      do {
        local_res20 = lVar5;
        if (param_2[2] == 0) {
          if ((((char)param_2[4] == -1) && ((char)param_2[6] == -1)) &&
             (*(longlong *)(param_2 + 8) == 0)) {
            if (*(char *)(lVar5 + 0xc) != '\0') {
              *(undefined1 *)(lVar5 + 0xc) = 0;
            }
            AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>_>
            ::Term(lVar5);
          }
          else {
            lVar6 = *(longlong *)(lVar5 + 0x10);
            local_res18 = lVar6;
            if (lVar6 != lVar6 + (ulonglong)*(uint *)(lVar5 + 0x18) * 0x28) {
              do {
                local_res18 = lVar6;
                FUN_143135320(lVar6,param_2 + 4);
                if ((*(char *)(lVar6 + 0xc) == '\0') && (*(int *)(lVar6 + 0x18) == 0)) {
                  AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>
                  ::Term(lVar6);
                  plVar4 = (longlong *)FUN_143133b40(lVar5 + 0x10,local_48,&local_res18);
                  lVar6 = *plVar4;
                }
                else {
                  lVar6 = lVar6 + 0x28;
                }
                local_res18 = lVar6;
              } while (lVar6 != *(longlong *)(lVar5 + 0x10) +
                                (ulonglong)*(uint *)(lVar5 + 0x18) * 0x28);
            }
          }
        }
        else {
          lVar3 = FUN_143122010(lVar5 + 0x10,param_2[2],local_res10);
          lVar6 = 0;
          if (local_res10[0] != '\0') {
            lVar6 = lVar3;
          }
          if (((lVar6 != 0) && (FUN_143135320(lVar6,param_2 + 4), *(char *)(lVar6 + 0xc) == '\0'))
             && (*(int *)(lVar6 + 0x18) == 0)) {
            AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>
            ::Term(lVar6);
            FUN_143139620(lVar5 + 0x10,param_2[2]);
          }
        }
        if ((*(char *)(lVar5 + 0xc) == '\0') && (*(int *)(lVar5 + 0x18) == 0)) {
          AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>_>
          ::Term(lVar5);
          plVar4 = (longlong *)FUN_143133b40(plVar1,local_40,&local_res20);
          lVar5 = *plVar4;
        }
        else {
          lVar5 = lVar5 + 0x28;
        }
      } while (lVar5 != *plVar1 + (ulonglong)*(uint *)(param_1 + 0x18) * 0x28);
    }
  }
  else {
    lVar6 = FUN_143122010(plVar1,iVar2,local_res10);
    lVar5 = 0;
    if (local_res10[0] != '\0') {
      lVar5 = lVar6;
    }
    if (((lVar5 != 0) && (FUN_143135ab0(lVar5,param_2 + 2), *(char *)(lVar5 + 0xc) == '\0')) &&
       (*(int *)(lVar5 + 0x18) == 0)) {
      AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>_>
      ::Term(lVar5);
      FUN_143139620(plVar1,*param_2);
      return;
    }
  }
  return;
}



// FUNCTION 143135ab0 FUN_143135ab0 body=305 status=ok
// SIG undefined FUN_143135ab0(void)

longlong FUN_143135ab0(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_res10;
  undefined1 local_res18 [16];
  
  iVar2 = *param_2;
  if ((((iVar2 == 0) && ((char)param_2[2] == -1)) && ((char)param_2[4] == -1)) &&
     (*(longlong *)(param_2 + 6) == 0)) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
    lVar3 = AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>_>
            ::Term();
    return lVar3;
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  if (iVar2 == 0) {
    lVar5 = *plVar1;
    lVar3 = lVar5 + (ulonglong)*(uint *)(param_1 + 0x18) * 0x28;
    if (lVar5 != lVar3) {
      do {
        local_res10 = lVar5;
        FUN_143135320(lVar5,param_2 + 2);
        if ((*(char *)(lVar5 + 0xc) == '\0') && (*(int *)(lVar5 + 0x18) == 0)) {
          AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>
          ::Term(lVar5);
          plVar4 = (longlong *)FUN_143133b40(plVar1,local_res18,&local_res10);
          lVar5 = *plVar4;
        }
        else {
          lVar5 = lVar5 + 0x28;
        }
      } while (lVar5 != *plVar1 + (ulonglong)*(uint *)(param_1 + 0x18) * 0x28);
      return lVar5;
    }
  }
  else {
    lVar3 = FUN_143122010(plVar1,iVar2,&local_res10);
    lVar5 = 0;
    if ((char)local_res10 != '\0') {
      lVar5 = lVar3;
    }
    if (((lVar5 != 0) && (lVar3 = FUN_143135320(lVar5,param_2 + 2), *(char *)(lVar5 + 0xc) == '\0'))
       && (*(int *)(lVar5 + 0x18) == 0)) {
      AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>
      ::Term(lVar5);
      lVar3 = FUN_143139620(plVar1,*param_2);
    }
  }
  return lVar3;
}



// FUNCTION 143135bf0 FUN_143135bf0 body=309 status=ok
// SIG undefined FUN_143135bf0(void)

longlong FUN_143135bf0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_res10;
  undefined1 local_res18 [16];
  
  lVar2 = *param_2;
  if (((((lVar2 == 0) && ((int)param_2[1] == 0)) && ((int)param_2[2] == 0)) &&
      (((char)param_2[3] == -1 && ((char)param_2[4] == -1)))) && (param_2[5] == 0)) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
    lVar2 = AkRTPCNestedSearchTree<AkRTPCKey,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidPlayingID,AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>_>_>_>
            ::Term();
    return lVar2;
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  if (lVar2 == 0) {
    lVar4 = *plVar1;
    lVar2 = lVar4 + (ulonglong)*(uint *)(param_1 + 0x18) * 0x28;
    if (lVar4 != lVar2) {
      do {
        local_res10 = lVar4;
        FUN_143135820(lVar4,param_2 + 1);
        if ((*(char *)(lVar4 + 0xc) == '\0') && (*(int *)(lVar4 + 0x18) == 0)) {
          AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidPlayingID,AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>_>_>
          ::Term(lVar4);
          plVar3 = (longlong *)FUN_143133c30(plVar1,local_res18,&local_res10);
          lVar4 = *plVar3;
        }
        else {
          lVar4 = lVar4 + 0x28;
        }
      } while (lVar4 != *plVar1 + (ulonglong)*(uint *)(param_1 + 0x18) * 0x28);
      return lVar4;
    }
  }
  else {
    lVar2 = FUN_1431220c0(plVar1,lVar2,&local_res10);
    lVar4 = 0;
    if ((char)local_res10 != '\0') {
      lVar4 = lVar2;
    }
    if (((lVar4 != 0) && (lVar2 = FUN_143135820(lVar4,param_2 + 1), *(char *)(lVar4 + 0xc) == '\0'))
       && (*(int *)(lVar4 + 0x18) == 0)) {
      AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidPlayingID,AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>_>_>
      ::Term(lVar4);
      lVar2 = FUN_143139710(plVar1,*param_2);
    }
  }
  return lVar2;
}



// FUNCTION 143135d30 RemoveAll body=93 status=ok
// SIG undefined RemoveAll(void)

void AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>::RemoveAll
               (longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_143139660(param_1 + 0x10);
    return;
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return;
  }
  return;
}



// FUNCTION 143135d90 RemoveBuiltInParamBindings body=508 status=ok
// SIG undefined RemoveBuiltInParamBindings(void)

void CAkRTPCMgr::RemoveBuiltInParamBindings(longlong param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = *(int **)(param_1 + 0x40);
  uVar3 = *(uint *)(param_1 + 0x48);
  piVar1 = piVar2 + uVar3;
  for (; piVar2 != piVar1; piVar2 = piVar2 + 1) {
    if (*piVar2 == param_2) {
      if (1 < uVar3) {
        *piVar2 = piVar1[-1];
        uVar3 = *(uint *)(param_1 + 0x48);
      }
      *(uint *)(param_1 + 0x48) = uVar3 - 1;
      break;
    }
  }
  piVar2 = *(int **)(param_1 + 0x50);
  uVar3 = *(uint *)(param_1 + 0x58);
  piVar1 = piVar2 + uVar3;
  for (; piVar2 != piVar1; piVar2 = piVar2 + 1) {
    if (*piVar2 == param_2) {
      if (1 < uVar3) {
        *piVar2 = piVar1[-1];
        uVar3 = *(uint *)(param_1 + 0x58);
      }
      *(uint *)(param_1 + 0x58) = uVar3 - 1;
      break;
    }
  }
  piVar2 = *(int **)(param_1 + 0x60);
  uVar3 = *(uint *)(param_1 + 0x68);
  piVar1 = piVar2 + uVar3;
  for (; piVar2 != piVar1; piVar2 = piVar2 + 1) {
    if (*piVar2 == param_2) {
      if (1 < uVar3) {
        *piVar2 = piVar1[-1];
        uVar3 = *(uint *)(param_1 + 0x68);
      }
      *(uint *)(param_1 + 0x68) = uVar3 - 1;
      break;
    }
  }
  piVar2 = *(int **)(param_1 + 0x70);
  uVar3 = *(uint *)(param_1 + 0x78);
  piVar1 = piVar2 + uVar3;
  for (; piVar2 != piVar1; piVar2 = piVar2 + 1) {
    if (*piVar2 == param_2) {
      if (1 < uVar3) {
        *piVar2 = piVar1[-1];
        uVar3 = *(uint *)(param_1 + 0x78);
      }
      *(uint *)(param_1 + 0x78) = uVar3 - 1;
      break;
    }
  }
  piVar2 = *(int **)(param_1 + 0x80);
  uVar3 = *(uint *)(param_1 + 0x88);
  piVar1 = piVar2 + uVar3;
  for (; piVar2 != piVar1; piVar2 = piVar2 + 1) {
    if (*piVar2 == param_2) {
      if (1 < uVar3) {
        *piVar2 = piVar1[-1];
        uVar3 = *(uint *)(param_1 + 0x88);
      }
      *(uint *)(param_1 + 0x88) = uVar3 - 1;
      break;
    }
  }
  piVar2 = *(int **)(param_1 + 0x90);
  uVar3 = *(uint *)(param_1 + 0x98);
  piVar1 = piVar2 + uVar3;
  for (; piVar2 != piVar1; piVar2 = piVar2 + 1) {
    if (*piVar2 == param_2) {
      if (1 < uVar3) {
        *piVar2 = piVar1[-1];
        uVar3 = *(uint *)(param_1 + 0x98);
      }
      *(uint *)(param_1 + 0x98) = uVar3 - 1;
      break;
    }
  }
  piVar2 = *(int **)(param_1 + 0xa0);
  uVar3 = *(uint *)(param_1 + 0xa8);
  piVar1 = piVar2 + uVar3;
  do {
    if (piVar2 == piVar1) {
LAB_143135f42:
      piVar2 = *(int **)(param_1 + 0xb0);
      uVar3 = *(uint *)(param_1 + 0xb8);
      piVar1 = piVar2 + uVar3;
      if (piVar2 != piVar1) {
        while (*piVar2 != param_2) {
          piVar2 = piVar2 + 1;
          if (piVar2 == piVar1) {
            return;
          }
        }
        if (1 < uVar3) {
          *piVar2 = piVar1[-1];
          uVar3 = *(uint *)(param_1 + 0xb8);
        }
        *(uint *)(param_1 + 0xb8) = uVar3 - 1;
      }
      return;
    }
    if (*piVar2 == param_2) {
      if (1 < uVar3) {
        *piVar2 = piVar1[-1];
        uVar3 = *(uint *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0xa8) = uVar3 - 1;
      goto LAB_143135f42;
    }
    piVar2 = piVar2 + 1;
  } while( true );
}



// FUNCTION 143135f90 FUN_143135f90 body=502 status=ok
// SIG undefined FUN_143135f90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143135f90(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar1 = *param_2;
  if (((((lVar1 == 0) && ((int)param_2[1] == 0)) && ((int)param_2[2] == 0)) &&
      (((char)param_2[3] == -1 && ((char)param_2[4] == -1)))) && (param_2[5] == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x48);
  if (bVar3) {
    puVar7 = (undefined8 *)0x0;
    while (puVar6 = puVar2, puVar6 != (undefined8 *)0x0) {
      if ((((lVar1 == 0) || (puVar6[4] == lVar1)) &&
          (((int)param_2[1] == 0 || (*(int *)(puVar6 + 5) == (int)param_2[1])))) &&
         (((((int)param_2[2] == 0 || (*(int *)(puVar6 + 6) == (int)param_2[2])) &&
           (((char)param_2[3] == -1 || (*(char *)(puVar6 + 7) == (char)param_2[3])))) &&
          ((((char)param_2[4] == -1 || (*(char *)(puVar6 + 8) == (char)param_2[4])) &&
           ((param_2[5] == 0 || (puVar6[9] == param_2[5])))))))) {
        if (puVar6 != (undefined8 *)0x0) {
          while( true ) {
            if (puVar6 == *(undefined8 **)(param_1 + 0x48)) {
              *(undefined8 *)(param_1 + 0x48) = puVar6[1];
            }
            else {
              puVar7[1] = puVar6[1];
            }
            lVar4 = g_DefaultPoolId;
            *puVar6 = &PTR_FUN_145ac6e50;
            if (puVar6[2] != 0) {
              FUN_1431501b0(DAT_146b50af0);
            }
            AK::MemoryMgr::Free(lVar4,puVar6);
            if (*(undefined8 **)(param_1 + 0x48) == (undefined8 *)0x0) break;
            puVar2 = *(undefined8 **)(param_1 + 0x48);
            puVar7 = (undefined8 *)0x0;
            while (((puVar6 = puVar2, *param_2 != 0 && (puVar6[4] != *param_2)) ||
                   ((((((int)param_2[1] != 0 && (*(int *)(puVar6 + 5) != (int)param_2[1])) ||
                      (((int)param_2[2] != 0 && (*(int *)(puVar6 + 6) != (int)param_2[2])))) ||
                     (((char)param_2[3] != -1 && (*(char *)(puVar6 + 7) != (char)param_2[3])))) ||
                    ((((char)param_2[4] != -1 && (*(char *)(puVar6 + 8) != (char)param_2[4])) ||
                     ((param_2[5] != 0 && (puVar6[9] != param_2[5]))))))))) {
              puVar2 = (undefined8 *)puVar6[1];
              puVar7 = puVar6;
              if ((undefined8 *)puVar6[1] == (undefined8 *)0x0) goto LAB_143136166;
            }
          }
        }
        break;
      }
      puVar7 = puVar6;
      puVar2 = (undefined8 *)puVar6[1];
    }
  }
  else if (puVar2 != (undefined8 *)0x0) {
    do {
      uVar5 = puVar2[1];
      if (puVar2 == *(undefined8 **)(param_1 + 0x48)) {
        *(undefined8 *)(param_1 + 0x48) = puVar2[1];
        uVar5 = _DAT_00000008;
      }
      _DAT_00000008 = uVar5;
      lVar4 = g_DefaultPoolId;
      *puVar2 = &PTR_FUN_145ac6e50;
      if (puVar2[2] != 0) {
        FUN_1431501b0(DAT_146b50af0,puVar2[2],puVar2);
      }
      AK::MemoryMgr::Free(lVar4,puVar2);
    } while( true );
  }
LAB_143136166:
  FUN_143135bf0(param_1 + 0x20,param_2);
  return;
}



// FUNCTION 143136190 FUN_143136190 body=397 status=ok
// SIG undefined FUN_143136190(void)

void FUN_143136190(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = 0;
  lVar4 = *(longlong *)(param_2 + 0x50);
  bVar2 = false;
  if (lVar4 != lVar4 + (ulonglong)*(uint *)(param_2 + 0x58) * 0x18) {
    lVar5 = lVar4 + 0x14;
    bVar2 = false;
    do {
      if (*(uint *)(param_1 + 1) != 0) {
        for (puVar1 = *(uint **)(*param_1 +
                                ((ulonglong)*(uint *)(lVar5 + -0x10) %
                                (ulonglong)*(uint *)(param_1 + 1)) * 8); puVar1 != (uint *)0x0;
            puVar1 = *(uint **)(puVar1 + 2)) {
          if (*puVar1 == *(uint *)(lVar5 + -0x10)) {
            if (puVar1 != (uint *)0x0) {
              FUN_143139750(puVar1 + 0x14,param_2);
              FUN_143139750(puVar1 + 0x18,param_2);
              bVar2 = true;
            }
            break;
          }
        }
      }
      if (*(void **)(lVar5 + -0xc) != (void *)0x0) {
        AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar5 + -0xc));
        *(undefined8 *)(lVar5 + -0xc) = 0;
      }
      *(undefined8 *)(lVar5 + -4) = 0;
      lVar4 = lVar4 + 0x18;
      lVar5 = lVar5 + 0x18;
    } while (lVar4 != *(longlong *)(param_2 + 0x50) + (ulonglong)*(uint *)(param_2 + 0x58) * 0x18);
  }
  *(undefined4 *)(param_2 + 0x58) = 0;
  if ((!bVar2) && (*(uint *)(param_1 + 1) != 0)) {
    lVar4 = *(longlong *)*param_1;
    while (lVar4 == 0) {
      uVar3 = uVar3 + 1;
      if (*(uint *)(param_1 + 1) <= uVar3) goto joined_r0x0001431362a7;
      lVar4 = ((longlong *)*param_1)[uVar3];
    }
    do {
      while( true ) {
        FUN_143139750(lVar4 + 0x50,param_2);
        FUN_143139750(lVar4 + 0x60,param_2);
        lVar4 = *(longlong *)(lVar4 + 8);
        if (lVar4 != 0) break;
        do {
          uVar3 = uVar3 + 1;
          if (*(uint *)(param_1 + 1) <= uVar3) goto joined_r0x0001431362a7;
          lVar4 = *(longlong *)(*param_1 + (ulonglong)uVar3 * 8);
        } while (lVar4 == 0);
      }
joined_r0x0001431362a7:
    } while (lVar4 != 0);
  }
  FUN_14313ab10(DAT_146b50ae0,param_2,0);
  return;
}



// FUNCTION 143136320 FUN_143136320 body=102 status=ok
// SIG undefined FUN_143136320(void)

undefined8 FUN_143136320(int *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x50);
  lVar1 = lVar2 + (ulonglong)*(uint *)(param_2 + 0x58) * 0x18;
  if (lVar2 != lVar1) {
    do {
      if (*(int *)(lVar2 + 4) == *param_1) {
        return 0;
      }
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != lVar1);
  }
  FUN_143139750(param_1 + 0x14);
  FUN_143139750(param_1 + 0x18,param_2);
  return 1;
}



// FUNCTION 143136390 RemoveValue body=355 status=ok
// SIG undefined RemoveValue(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CAkRTPCMgr::AkRTPCEntry::RemoveValue(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if ((((*param_2 == 0) && ((int)param_2[1] == 0)) && ((int)param_2[2] == 0)) &&
     ((((char)param_2[3] == -1 && ((char)param_2[4] == -1)) && (param_2[5] == 0)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  if (bVar2) {
    puVar7 = puVar1;
    puVar4 = (undefined8 *)0x0;
    while (puVar3 = puVar7, puVar3 != (undefined8 *)0x0) {
      if (((puVar3[4] == *param_2) && (*(int *)(puVar3 + 5) == (int)param_2[1])) &&
         ((*(int *)(puVar3 + 6) == (int)param_2[2] &&
          (((*(char *)(puVar3 + 7) == (char)param_2[3] &&
            (*(char *)(puVar3 + 8) == (char)param_2[4])) && (puVar3[9] == param_2[5])))))) {
        if (puVar3 != (undefined8 *)0x0) {
          if (puVar3 == puVar1) {
            *(undefined8 *)(param_1 + 0x48) = puVar3[1];
          }
          else {
            puVar4[1] = puVar3[1];
          }
          lVar5 = g_DefaultPoolId;
          *puVar3 = &PTR_FUN_145ac6e50;
          if (puVar3[2] != 0) {
            FUN_1431501b0(DAT_146b50af0,puVar3[2],puVar3);
          }
          AK::MemoryMgr::Free(lVar5,puVar3);
        }
        break;
      }
      puVar4 = puVar3;
      puVar7 = (undefined8 *)puVar3[1];
    }
  }
  else if (puVar1 != (undefined8 *)0x0) {
    do {
      uVar6 = puVar1[1];
      if (puVar1 == *(undefined8 **)(param_1 + 0x48)) {
        *(undefined8 *)(param_1 + 0x48) = puVar1[1];
        uVar6 = _DAT_00000008;
      }
      _DAT_00000008 = uVar6;
      lVar5 = g_DefaultPoolId;
      *puVar1 = &PTR_FUN_145ac6e50;
      if (puVar1[2] != 0) {
        FUN_1431501b0(DAT_146b50af0,puVar1[2],puVar1);
      }
      AK::MemoryMgr::Free(lVar5,puVar1);
    } while( true );
  }
  FUN_143139490(param_1 + 0x20,param_2);
  return;
}



// FUNCTION 143136500 RemovedScopedRtpcObj body=683 status=ok
// SIG undefined RemovedScopedRtpcObj(void)

void CAkRTPCMgr::RemovedScopedRtpcObj(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  uint *puVar2;
  long lVar3;
  undefined8 *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint *puVar13;
  
  puVar10 = (uint *)0x0;
  if (*(uint *)(param_1 + 1) != 0) {
    for (puVar9 = *(uint **)(*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8
                            );
        (puVar13 = puVar10, puVar9 != (uint *)0x0 && (puVar13 = puVar9, *puVar9 != param_2));
        puVar9 = *(uint **)(puVar9 + 2)) {
    }
    if (puVar13 != (uint *)0x0) {
      puVar4 = *(undefined8 **)(puVar13 + 0x14);
      puVar9 = puVar10;
      if (puVar4 != puVar4 + puVar13[0x16]) {
        do {
          puVar2 = (uint *)*puVar4;
          if ((((*(longlong *)(puVar2 + 6) == *param_3) && (puVar2[8] == *(uint *)(param_3 + 1))) &&
              (puVar2[10] == *(uint *)(param_3 + 2))) &&
             ((((char)puVar2[0xc] == (char)param_3[3] && ((char)puVar2[0xe] == (char)param_3[4])) &&
              (*(longlong *)(puVar2 + 0x10) == param_3[5])))) {
            uVar11 = puVar13[0x16];
            puVar6 = (undefined8 *)(*(longlong *)(puVar13 + 0x14) + (ulonglong)uVar11 * 8 + -8);
            if (puVar4 < puVar6) {
              lVar7 = ((ulonglong)((longlong)puVar6 + (-1 - (longlong)puVar4)) >> 3) + 1;
              puVar12 = puVar4;
              puVar6 = puVar4;
              for (; puVar6 = puVar6 + 1, lVar7 != 0; lVar7 = lVar7 + -1) {
                *puVar12 = *puVar6;
                puVar12 = puVar12 + 1;
              }
              uVar11 = puVar13[0x16];
            }
            puVar13[0x16] = uVar11 - 1;
            *(uint **)(puVar2 + 4) = puVar9;
            puVar9 = puVar2;
          }
          else {
            puVar4 = puVar4 + 1;
          }
        } while (puVar4 != (undefined8 *)
                           (*(longlong *)(puVar13 + 0x14) + (ulonglong)puVar13[0x16] * 8));
      }
      puVar4 = *(undefined8 **)(puVar13 + 0x18);
      if (puVar4 != puVar4 + puVar13[0x1a]) {
        do {
          puVar2 = (uint *)*puVar4;
          if (((*(longlong *)(puVar2 + 6) == *param_3) && (puVar2[8] == *(uint *)(param_3 + 1))) &&
             ((puVar2[10] == *(uint *)(param_3 + 2) &&
              ((((char)puVar2[0xc] == (char)param_3[3] && ((char)puVar2[0xe] == (char)param_3[4]))
               && (*(longlong *)(puVar2 + 0x10) == param_3[5])))))) {
            uVar11 = puVar13[0x1a];
            puVar6 = (undefined8 *)(*(longlong *)(puVar13 + 0x18) + (ulonglong)uVar11 * 8 + -8);
            if (puVar4 < puVar6) {
              lVar7 = ((ulonglong)((longlong)puVar6 + (-1 - (longlong)puVar4)) >> 3) + 1;
              puVar12 = puVar4;
              puVar6 = puVar4;
              for (; puVar6 = puVar6 + 1, lVar7 != 0; lVar7 = lVar7 + -1) {
                *puVar12 = *puVar6;
                puVar12 = puVar12 + 1;
              }
              uVar11 = puVar13[0x1a];
            }
            puVar13[0x1a] = uVar11 - 1;
            *(uint **)(puVar2 + 4) = puVar9;
            puVar9 = puVar2;
          }
          else {
            puVar4 = puVar4 + 1;
          }
        } while (puVar4 != (undefined8 *)
                           (*(longlong *)(puVar13 + 0x18) + (ulonglong)puVar13[0x1a] * 8));
      }
      FUN_143135f90(puVar13);
      while (puVar13 = puVar9, puVar13 != (uint *)0x0) {
        puVar9 = (uint *)0x0;
        if (puVar13 != (uint *)0x0) {
          puVar9 = *(uint **)(puVar13 + 4);
        }
        if (*(uint *)(param_1 + 4) != 0) {
          plVar1 = (longlong *)
                   (param_1[3] +
                   ((ulonglong)(puVar13[2] + *puVar13) % (ulonglong)*(uint *)(param_1 + 4)) * 8);
          puVar2 = (uint *)*plVar1;
          if (puVar2 != (uint *)0x0) {
            puVar8 = puVar10;
            do {
              puVar5 = puVar2;
              if ((*(longlong *)puVar5 == *(longlong *)puVar13) && (puVar5[2] == puVar13[2])) {
                if (puVar8 == (uint *)0x0) {
                  *plVar1 = *(longlong *)(puVar5 + 4);
                }
                else {
                  *(longlong *)(puVar8 + 4) = *(longlong *)(puVar5 + 4);
                }
                *(int *)(param_1 + 5) = (int)param_1[5] + -1;
                break;
              }
              puVar2 = *(uint **)(puVar5 + 4);
              puVar8 = puVar5;
            } while (*(uint **)(puVar5 + 4) != (uint *)0x0);
          }
        }
        FUN_14313ab10(DAT_146b50ae0,puVar13,0);
        lVar3 = g_DefaultPoolId;
        if (puVar13 != (uint *)0x0) {
          if (*(void **)(puVar13 + 0x14) != (void *)0x0) {
            puVar13[0x16] = 0;
            AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(puVar13 + 0x14));
            puVar13[0x14] = 0;
            puVar13[0x15] = 0;
            puVar13[0x17] = 0;
          }
          AK::MemoryMgr::Free(lVar3,puVar13);
        }
      }
    }
  }
  return;
}



// FUNCTION 1431367b0 FUN_1431367b0 body=437 status=ok
// SIG undefined FUN_1431367b0(void)

void FUN_1431367b0(longlong *param_1,uint param_2,longlong *param_3,undefined8 param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  longlong lVar4;
  uint *puVar5;
  uint *puVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  char local_38 [8];
  uint *local_30;
  
  uVar7 = 1;
  local_res8[0] = 1;
  if (*(uint *)(param_1 + 1) == 0) {
    return;
  }
  puVar2 = (uint *)0x0;
  for (puVar5 = *(uint **)(*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
      (puVar6 = puVar2, puVar5 != (uint *)0x0 && (puVar6 = puVar5, *puVar5 != param_2));
      puVar5 = *(uint **)(puVar5 + 2)) {
  }
  if (puVar6 == (uint *)0x0) {
    return;
  }
  lVar4 = *(longlong *)(puVar6 + 0x12);
  if (lVar4 != 0) {
    do {
      if ((((*(longlong *)(lVar4 + 0x20) == *param_3) && (*(int *)(lVar4 + 0x28) == (int)param_3[1])
           ) && (*(int *)(lVar4 + 0x30) == (int)param_3[2])) &&
         (((*(char *)(lVar4 + 0x38) == (char)param_3[3] &&
           (*(char *)(lVar4 + 0x40) == (char)param_3[4])) &&
          (*(longlong *)(lVar4 + 0x48) == param_3[5])))) break;
      lVar4 = *(longlong *)(lVar4 + 8);
    } while (lVar4 != 0);
  }
  local_30 = (uint *)0x0;
  if (((*param_3 == 0) && ((int)param_3[1] == 0)) &&
     (((int)param_3[2] == 0 &&
      ((((char)param_3[3] == -1 && ((char)param_3[4] == -1)) && (param_3[5] == 0)))))) {
    uVar7 = puVar6[0xe] != 0;
    puVar5 = puVar2;
    if ((char)puVar6[0xb] != '\0') {
      puVar2 = puVar6 + 10;
LAB_143136904:
      puVar5 = local_30;
      if (puVar2 != (uint *)0x0) goto LAB_14313690e;
    }
  }
  else {
    if ((char)puVar6[0xb] != '\0') {
      local_30 = puVar6 + 10;
    }
    puVar5 = local_30;
    puVar1 = (uint *)FUN_1431220c0(puVar6 + 0xc,*param_3,local_38);
    puVar3 = puVar2;
    if (local_38[0] != '\0') {
      puVar3 = puVar1;
    }
    if (puVar3 != (uint *)0x0) {
      puVar2 = (uint *)FUN_143133e60(puVar3,param_3 + 1,&local_30,local_res8);
      uVar7 = local_res8[0];
      goto LAB_143136904;
    }
  }
  if (lVar4 == 0) {
    return;
  }
LAB_14313690e:
  if (puVar5 == (uint *)0x0) {
    uVar8 = puVar6[4];
  }
  else {
    uVar8 = *puVar5;
  }
  FUN_1431376a0(puVar6,puVar2,puVar5,uVar8,param_3,param_4,1,uVar7);
  return;
}



// FUNCTION 143136970 ResetRTPCValue body=58 status=ok
// SIG undefined ResetRTPCValue(void)

void CAkRTPCMgr::ResetRTPCValue
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5)

{
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_10 = 0;
  local_20 = 0xff;
  local_18 = 0xff;
  local_38 = param_3;
  local_30 = param_4;
  FUN_1431367b0(param_1,param_2,&local_38,param_5);
  return;
}



// FUNCTION 1431369b0 FUN_1431369b0 body=215 status=ok
// SIG undefined FUN_1431369b0(void)

undefined4 * FUN_1431369b0(longlong param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined1 local_res10 [24];
  
  if ((((*param_2 != 0) || ((char)param_2[2] != -1)) || ((char)param_2[4] != -1)) ||
     (*(longlong *)(param_2 + 6) != 0)) {
    param_1 = FUN_143136e30(param_1 + 0x10,*param_2,local_res10);
    if (param_1 == 0) {
      return (undefined4 *)0x0;
    }
    if ((((char)param_2[2] != -1) || ((char)param_2[4] != -1)) || (*(longlong *)(param_2 + 6) != 0))
    {
      param_1 = FUN_143136a90(param_1 + 0x10,(char)param_2[2],local_res10);
      if (param_1 == 0) {
        return (undefined4 *)0x0;
      }
      if (((char)param_2[4] != -1) || (*(longlong *)(param_2 + 6) != 0)) {
        param_1 = FUN_143136c80(param_1 + 0x10,(char)param_2[4],local_res10);
        if (param_1 == 0) {
          return (undefined4 *)0x0;
        }
        if (*(longlong *)(param_2 + 6) != 0) {
          puVar1 = (undefined4 *)
                   FUN_143137020(param_1 + 0x10,*(longlong *)(param_2 + 6),local_res10);
          return puVar1;
        }
      }
    }
  }
  puVar1 = (undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 0xc) == '\0') {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0xc) = 1;
    return puVar1;
  }
  return puVar1;
}



// FUNCTION 143136a90 FUN_143136a90 body=496 status=ok
// SIG undefined FUN_143136a90(void)

undefined8 * FUN_143136a90(longlong *param_1,undefined1 param_2,char *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  puVar5 = (undefined8 *)FUN_143121f60();
  if (*param_3 != '\0') {
    return puVar5;
  }
  uVar2 = *(uint *)(param_1 + 1);
  if (puVar5 == (undefined8 *)0x0) {
    if (((uVar2 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar4 = FUN_143134640(param_1,1), cVar4 != '\0')) &&
       (uVar2 < *(uint *)((longlong)param_1 + 0xc))) {
      puVar5 = (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x28);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
      if (puVar5 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined1 *)((longlong)puVar5 + 0xc) = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      *puVar5 = &PTR_FUN_144732cb0;
      goto LAB_143136c54;
    }
  }
  else {
    lVar3 = *param_1;
    if (((uVar2 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar4 = FUN_143134640(param_1,1), cVar4 != '\0')) &&
       (uVar2 < *(uint *)((longlong)param_1 + 0xc))) {
      lVar6 = *param_1;
      puVar1 = (undefined8 *)(lVar6 + (ulonglong)*(uint *)(param_1 + 1) * 0x28);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
      if (puVar1 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar1 + 1) = 0;
        *(undefined1 *)((longlong)puVar1 + 0xc) = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        *puVar1 = &PTR_FUN_144732cb0;
        lVar6 = *param_1;
      }
      lVar3 = (((longlong)puVar5 - lVar3) / 0x28 & 0xffffffffU) * 0x28;
      if ((undefined8 *)(lVar3 + lVar6) < puVar1) {
        puVar5 = puVar1 + -2;
        do {
          *(undefined1 *)(puVar5 + 6) = *(undefined1 *)(puVar5 + 1);
          *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(puVar5 + -2);
          *(undefined1 *)((longlong)puVar5 + 0x1c) = *(undefined1 *)((longlong)puVar5 + -0xc);
          AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType_const_&___ptr64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType>_>
          ::Term(puVar5 + 4);
          puVar5[4] = puVar5[-1];
          *(undefined4 *)(puVar5 + 5) = *(undefined4 *)puVar5;
          *(undefined4 *)((longlong)puVar5 + 0x2c) = *(undefined4 *)((longlong)puVar5 + 4);
          puVar5[-1] = 0;
          *puVar5 = 0;
          lVar6 = *param_1;
          puVar1 = puVar5 + -3;
          puVar5 = puVar5 + -5;
        } while ((undefined8 *)(lVar6 + lVar3) < puVar1);
      }
      (*(code *)**(undefined8 **)(lVar3 + lVar6))(lVar3 + lVar6,0);
      lVar6 = *param_1;
      puVar5 = (undefined8 *)(lVar3 + lVar6);
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar5 + 1) = 0;
        *(undefined1 *)((longlong)puVar5 + 0xc) = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        *puVar5 = &PTR_FUN_144732cb0;
        lVar6 = *param_1;
      }
      puVar5 = (undefined8 *)(lVar6 + lVar3);
LAB_143136c54:
      if (puVar5 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      *(undefined1 *)(puVar5 + 4) = param_2;
      return puVar5;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143136c80 FUN_143136c80 body=426 status=ok
// SIG undefined FUN_143136c80(void)

undefined8 * FUN_143136c80(longlong *param_1,undefined1 param_2,char *param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  puVar4 = (undefined8 *)FUN_143121f60();
  if (*param_3 != '\0') {
    return puVar4;
  }
  uVar1 = *(uint *)(param_1 + 1);
  if (puVar4 == (undefined8 *)0x0) {
    if (((uVar1 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar3 = FUN_143134790(param_1,1), cVar3 != '\0')) &&
       (uVar1 < *(uint *)((longlong)param_1 + 0xc))) {
      puVar4 = (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x28);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
      if (puVar4 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined1 *)((longlong)puVar4 + 0xc) = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *puVar4 = &PTR_FUN_144732cb0;
      goto LAB_143136dff;
    }
  }
  else {
    lVar2 = *param_1;
    if (((uVar1 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar3 = FUN_143134790(param_1,1), cVar3 != '\0')) &&
       (uVar1 < *(uint *)((longlong)param_1 + 0xc))) {
      lVar5 = *param_1;
      puVar6 = (undefined8 *)(lVar5 + (ulonglong)*(uint *)(param_1 + 1) * 0x28);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar6 + 1) = 0;
        *(undefined1 *)((longlong)puVar6 + 0xc) = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        *puVar6 = &PTR_FUN_144732cb0;
        lVar5 = *param_1;
      }
      lVar2 = (((longlong)puVar4 - lVar2) / 0x28 & 0xffffffffU) * 0x28;
      if ((undefined8 *)(lVar2 + lVar5) < puVar6) {
        do {
          puVar4 = puVar6 + -5;
          FUN_143138d90(puVar6,puVar4);
          lVar5 = *param_1;
          puVar6 = puVar4;
        } while ((undefined8 *)(lVar5 + lVar2) < puVar4);
      }
      (*(code *)**(undefined8 **)(lVar2 + lVar5))(lVar2 + lVar5,0);
      lVar5 = *param_1;
      puVar4 = (undefined8 *)(lVar2 + lVar5);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar4 + 1) = 0;
        *(undefined1 *)((longlong)puVar4 + 0xc) = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        *puVar4 = &PTR_FUN_144732cb0;
        lVar5 = *param_1;
      }
      puVar4 = (undefined8 *)(lVar5 + lVar2);
LAB_143136dff:
      if (puVar4 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      *(undefined1 *)(puVar4 + 4) = param_2;
      return puVar4;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143136e30 FUN_143136e30 body=495 status=ok
// SIG undefined FUN_143136e30(void)

undefined8 * FUN_143136e30(longlong *param_1,undefined4 param_2,char *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  puVar5 = (undefined8 *)FUN_143122010();
  if (*param_3 != '\0') {
    return puVar5;
  }
  uVar2 = *(uint *)(param_1 + 1);
  if (puVar5 == (undefined8 *)0x0) {
    if (((uVar2 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar4 = FUN_1431348a0(param_1,1), cVar4 != '\0')) &&
       (uVar2 < *(uint *)((longlong)param_1 + 0xc))) {
      puVar5 = (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x28);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
      if (puVar5 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined1 *)((longlong)puVar5 + 0xc) = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      *puVar5 = &PTR_FUN_144732cb0;
      goto LAB_143136ff3;
    }
  }
  else {
    lVar3 = *param_1;
    if (((uVar2 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar4 = FUN_1431348a0(param_1,1), cVar4 != '\0')) &&
       (uVar2 < *(uint *)((longlong)param_1 + 0xc))) {
      lVar6 = *param_1;
      puVar1 = (undefined8 *)(lVar6 + (ulonglong)*(uint *)(param_1 + 1) * 0x28);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
      if (puVar1 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar1 + 1) = 0;
        *(undefined1 *)((longlong)puVar1 + 0xc) = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        *puVar1 = &PTR_FUN_144732cb0;
        lVar6 = *param_1;
      }
      lVar3 = (((longlong)puVar5 - lVar3) / 0x28 & 0xffffffffU) * 0x28;
      if ((undefined8 *)(lVar3 + lVar6) < puVar1) {
        puVar5 = puVar1 + -2;
        do {
          *(undefined4 *)(puVar5 + 6) = *(undefined4 *)(puVar5 + 1);
          *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(puVar5 + -2);
          *(undefined1 *)((longlong)puVar5 + 0x1c) = *(undefined1 *)((longlong)puVar5 + -0xc);
          AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType_const_&___ptr64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType>_>
          ::Term(puVar5 + 4);
          puVar5[4] = puVar5[-1];
          *(undefined4 *)(puVar5 + 5) = *(undefined4 *)puVar5;
          *(undefined4 *)((longlong)puVar5 + 0x2c) = *(undefined4 *)((longlong)puVar5 + 4);
          puVar5[-1] = 0;
          *puVar5 = 0;
          lVar6 = *param_1;
          puVar1 = puVar5 + -3;
          puVar5 = puVar5 + -5;
        } while ((undefined8 *)(lVar6 + lVar3) < puVar1);
      }
      (*(code *)**(undefined8 **)(lVar3 + lVar6))(lVar3 + lVar6,0);
      lVar6 = *param_1;
      puVar5 = (undefined8 *)(lVar3 + lVar6);
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar5 + 1) = 0;
        *(undefined1 *)((longlong)puVar5 + 0xc) = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        *puVar5 = &PTR_FUN_144732cb0;
        lVar6 = *param_1;
      }
      puVar5 = (undefined8 *)(lVar6 + lVar3);
LAB_143136ff3:
      if (puVar5 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      *(undefined4 *)(puVar5 + 4) = param_2;
      return puVar5;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143137020 FUN_143137020 body=295 status=ok
// SIG undefined FUN_143137020(void)

undefined4 * FUN_143137020(longlong *param_1,undefined8 param_2,char *param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  puVar3 = (undefined4 *)FUN_143133070();
  if (*param_3 != '\0') {
    return puVar3;
  }
  uVar1 = *(uint *)(param_1 + 1);
  if (puVar3 == (undefined4 *)0x0) {
    if ((*(uint *)((longlong)param_1 + 0xc) <= uVar1) &&
       (cVar2 = FUN_143134590(param_1,1), cVar2 == '\0')) {
      return (undefined4 *)0x0;
    }
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar1) {
      return (undefined4 *)0x0;
    }
    uVar1 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar1 + 1;
    puVar3 = (undefined4 *)((ulonglong)uVar1 * 0x10 + *param_1);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    lVar6 = *param_1;
    if (((*(uint *)((longlong)param_1 + 0xc) <= uVar1) &&
        (cVar2 = FUN_143134590(param_1,1), cVar2 == '\0')) ||
       (*(uint *)((longlong)param_1 + 0xc) <= uVar1)) {
      return (undefined4 *)0x0;
    }
    uVar1 = *(uint *)(param_1 + 1);
    lVar5 = *param_1;
    *(uint *)(param_1 + 1) = uVar1 + 1;
    puVar4 = (undefined8 *)((ulonglong)uVar1 * 0x10 + lVar5);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined4 *)puVar4 = 0;
      lVar5 = *param_1;
    }
    lVar6 = ((longlong)puVar3 - lVar6 >> 4 & 0xffffffffU) * 0x10;
    if ((undefined8 *)(lVar6 + lVar5) < puVar4) {
      do {
        *puVar4 = puVar4[-2];
        puVar4[1] = puVar4[-1];
        lVar5 = *param_1;
        puVar4 = puVar4 + -2;
      } while ((undefined8 *)(lVar5 + lVar6) < puVar4);
    }
    if ((undefined4 *)(lVar6 + lVar5) != (undefined4 *)0x0) {
      *(undefined4 *)(lVar6 + lVar5) = 0;
      lVar5 = *param_1;
    }
    puVar3 = (undefined4 *)(lVar5 + lVar6);
  }
  if (puVar3 != (undefined4 *)0x0) {
    *(undefined8 *)(puVar3 + 2) = param_2;
  }
  return puVar3;
}



// FUNCTION 143137150 FUN_143137150 body=497 status=ok
// SIG undefined FUN_143137150(void)

undefined8 * FUN_143137150(longlong *param_1,undefined8 param_2,char *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  puVar5 = (undefined8 *)FUN_1431220c0();
  if (*param_3 != '\0') {
    return puVar5;
  }
  uVar2 = *(uint *)(param_1 + 1);
  if (puVar5 == (undefined8 *)0x0) {
    if (((uVar2 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar4 = FUN_1431349f0(param_1,1), cVar4 != '\0')) &&
       (uVar2 < *(uint *)((longlong)param_1 + 0xc))) {
      puVar5 = (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x28);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
      if (puVar5 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined1 *)((longlong)puVar5 + 0xc) = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      *puVar5 = &PTR_FUN_144732cb0;
      goto LAB_143137315;
    }
  }
  else {
    lVar3 = *param_1;
    if (((uVar2 < *(uint *)((longlong)param_1 + 0xc)) ||
        (cVar4 = FUN_1431349f0(param_1,1), cVar4 != '\0')) &&
       (uVar2 < *(uint *)((longlong)param_1 + 0xc))) {
      lVar6 = *param_1;
      puVar1 = (undefined8 *)(lVar6 + (ulonglong)*(uint *)(param_1 + 1) * 0x28);
      *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
      if (puVar1 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar1 + 1) = 0;
        *(undefined1 *)((longlong)puVar1 + 0xc) = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        *puVar1 = &PTR_FUN_144732cb0;
        lVar6 = *param_1;
      }
      lVar3 = (((longlong)puVar5 - lVar3) / 0x28 & 0xffffffffU) * 0x28;
      if ((undefined8 *)(lVar3 + lVar6) < puVar1) {
        puVar5 = puVar1 + -2;
        do {
          puVar5[6] = puVar5[1];
          *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(puVar5 + -2);
          *(undefined1 *)((longlong)puVar5 + 0x1c) = *(undefined1 *)((longlong)puVar5 + -0xc);
          AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType_const_&___ptr64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType>_>
          ::Term(puVar5 + 4);
          puVar5[4] = puVar5[-1];
          *(undefined4 *)(puVar5 + 5) = *(undefined4 *)puVar5;
          *(undefined4 *)((longlong)puVar5 + 0x2c) = *(undefined4 *)((longlong)puVar5 + 4);
          puVar5[-1] = 0;
          *puVar5 = 0;
          lVar6 = *param_1;
          puVar1 = puVar5 + -3;
          puVar5 = puVar5 + -5;
        } while ((undefined8 *)(lVar6 + lVar3) < puVar1);
      }
      (*(code *)**(undefined8 **)(lVar3 + lVar6))(lVar3 + lVar6,0);
      lVar6 = *param_1;
      puVar5 = (undefined8 *)(lVar3 + lVar6);
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar5 + 1) = 0;
        *(undefined1 *)((longlong)puVar5 + 0xc) = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        *puVar5 = &PTR_FUN_144732cb0;
        lVar6 = *param_1;
      }
      puVar5 = (undefined8 *)(lVar6 + lVar3);
LAB_143137315:
      if (puVar5 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      puVar5[4] = param_2;
      return puVar5;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143137350 FUN_143137350 body=733 status=ok
// SIG undefined FUN_143137350(void)

void FUN_143137350(longlong *param_1,int param_2,longlong *param_3,undefined4 param_4)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  uint *puVar4;
  uint *puVar5;
  longlong lVar6;
  uint *puVar7;
  longlong *plVar8;
  undefined1 uVar9;
  char local_res8 [8];
  undefined1 local_res10 [8];
  char local_68 [8];
  uint *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  
  plVar8 = param_1 + ((longlong)param_2 + 3) * 2;
  puVar7 = (uint *)*plVar8;
  if (puVar7 != puVar7 + *(uint *)(plVar8 + 1)) {
    do {
      uVar9 = false;
      local_58 = 0;
      uVar1 = *puVar7;
      local_54 = 4;
      local_50 = 0;
      local_60 = (uint *)0x0;
      local_res10[0] = 0;
      if (*(uint *)(param_1 + 1) == 0) {
LAB_1431374b7:
        puVar4 = (uint *)0x0;
        puVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x70);
        if (puVar5 != (uint *)0x0) {
          *puVar5 = uVar1;
          puVar5[4] = 0;
          puVar5[5] = 0;
          puVar5[6] = 0;
          puVar5[7] = 0;
          puVar5[10] = 0;
          *(undefined1 *)(puVar5 + 0xb) = 0;
          puVar5[0xc] = 0;
          puVar5[0xd] = 0;
          puVar5[0xe] = 0;
          puVar5[0xf] = 0;
          *(undefined ***)(puVar5 + 8) = &PTR_FUN_144ca0248;
          puVar5[0x12] = 0;
          puVar5[0x13] = 0;
          puVar5[0x14] = 0;
          puVar5[0x15] = 0;
          puVar5[0x16] = 0;
          puVar5[0x17] = 0;
          puVar5[0x18] = 0;
          puVar5[0x19] = 0;
          puVar5[0x1a] = 0;
          puVar5[0x1b] = 0;
          cVar2 = FUN_143133310(param_1);
          if (cVar2 != '\0') {
            uVar1 = *(uint *)(param_1 + 1);
            *(undefined8 *)(puVar5 + 2) =
                 *(undefined8 *)(*param_1 + ((ulonglong)*puVar5 % (ulonglong)uVar1) * 8);
            *(uint **)(*param_1 + ((ulonglong)*puVar5 % (ulonglong)uVar1) * 8) = puVar5;
            *(int *)(param_1 + 2) = (int)param_1[2] + 1;
          }
          if ((((*param_3 == 0) && ((int)param_3[1] == 0)) && ((int)param_3[2] == 0)) &&
             ((((char)param_3[3] == -1 && ((char)param_3[4] == -1)) && (param_3[5] == 0)))) {
            uVar9 = puVar5[0xe] != 0;
          }
          else {
            if ((char)puVar5[0xb] != '\0') {
              local_60 = puVar5 + 10;
            }
            lVar3 = FUN_1431220c0(puVar5 + 0xc,*param_3,local_68);
            lVar6 = 0;
            if (local_68[0] != '\0') {
              lVar6 = lVar3;
            }
            if (lVar6 != 0) {
              FUN_143133e60(lVar6,param_3 + 1,&local_60,local_res10);
              uVar9 = local_res10[0];
            }
          }
          goto LAB_1431375b7;
        }
      }
      else {
        for (puVar5 = *(uint **)(*param_1 +
                                ((ulonglong)uVar1 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
            puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 2)) {
          if (*puVar5 == uVar1) goto LAB_143137406;
        }
        puVar5 = (uint *)0x0;
LAB_143137406:
        if (puVar5 == (uint *)0x0) goto LAB_1431374b7;
        if (((*param_3 == 0) && ((int)param_3[1] == 0)) &&
           (((int)param_3[2] == 0 &&
            ((((char)param_3[3] == -1 && ((char)param_3[4] == -1)) && (param_3[5] == 0)))))) {
          uVar9 = puVar5[0xe] != 0;
          if ((char)puVar5[0xb] == '\0') {
LAB_1431374a1:
            puVar4 = (uint *)0x0;
          }
          else {
            puVar4 = puVar5 + 10;
          }
        }
        else {
          if ((char)puVar5[0xb] != '\0') {
            local_60 = puVar5 + 10;
          }
          lVar3 = FUN_1431220c0(puVar5 + 0xc,*param_3,local_res8);
          lVar6 = 0;
          if (local_res8[0] != '\0') {
            lVar6 = lVar3;
          }
          if (lVar6 == 0) goto LAB_1431374a1;
          puVar4 = (uint *)FUN_143133e60(lVar6,param_3 + 1,&local_60,local_res10);
          uVar9 = local_res10[0];
        }
        if (puVar4 == (uint *)0x0) {
          local_50 = 1;
        }
LAB_1431375b7:
        FUN_1431376a0(puVar5,puVar4,local_60,param_4,param_3,&local_58,0,uVar9);
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != (uint *)(*plVar8 + (ulonglong)*(uint *)(plVar8 + 1) * 4));
  }
  return;
}



// FUNCTION 143137630 SetDefaultParamValue body=37 status=ok
// SIG undefined SetDefaultParamValue(void)

void CAkRTPCMgr::SetDefaultParamValue(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = GetRTPCEntry();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = param_3;
  }
  return;
}



// FUNCTION 143137660 SetMidiParameterValue body=58 status=ok
// SIG undefined SetMidiParameterValue(void)

void CAkRTPCMgr::SetMidiParameterValue
               (CAkRTPCMgr *param_1,ulong param_2,float param_3,AkRTPCKey *param_4)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  
  local_14 = 4;
  local_10 = 0;
  local_18 = 0;
  SetRTPCInternal(param_1,param_2,param_3,param_4,(TransParamsBase *)&local_18,1,false);
  return;
}



// FUNCTION 1431376a0 FUN_1431376a0 body=598 status=ok
// SIG undefined FUN_1431376a0(void)

undefined8
FUN_1431376a0(undefined4 *param_1,float *param_2,float *param_3,float param_4,longlong *param_5,
             int *param_6,char param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  float *pfVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  
  if ((param_2 != (float *)0x0) && (param_4 == *param_2)) {
    bVar2 = false;
    fVar13 = 0.0;
    goto LAB_143137786;
  }
  bVar2 = true;
  pfVar7 = param_2;
  if ((param_2 == (float *)0x0) && (pfVar7 = param_3, param_3 == (float *)0x0)) {
    pfVar7 = (float *)(param_1 + 4);
  }
  fVar13 = *pfVar7;
  iVar6 = param_1[5];
  if ((iVar6 == 0) || ((char)param_6[2] != '\0')) goto LAB_143137786;
  iVar9 = 0;
  if (iVar6 == 1) {
    if (param_4 <= fVar13) {
      if ((float)param_1[7] != 0.0) {
        fVar12 = (fVar13 - param_4) / (float)param_1[7];
        goto LAB_14313776e;
      }
    }
    else {
      iVar9 = 0;
      if ((float)param_1[6] != 0.0) {
        fVar12 = (param_4 - fVar13) / (float)param_1[6];
LAB_14313776e:
        iVar9 = (int)(fVar12 * 1000.0);
      }
    }
  }
  else if (iVar6 == 2) {
    if (param_4 <= fVar13) {
      fVar12 = (float)param_1[7];
    }
    else {
      fVar12 = (float)param_1[6];
    }
    goto LAB_14313776e;
  }
  iVar6 = *param_6;
  if (*param_6 <= iVar9) {
    iVar6 = iVar9;
  }
  *param_6 = iVar6;
LAB_143137786:
  if ((*param_6 < 1) || (!bVar2)) {
    puVar1 = *(undefined8 **)(param_1 + 0x12);
    if (puVar1 != (undefined8 *)0x0) {
      puVar4 = puVar1;
      puVar11 = (undefined8 *)0x0;
      do {
        puVar10 = puVar4;
        if (((((puVar10[4] == *param_5) && (*(int *)(puVar10 + 5) == (int)param_5[1])) &&
             (*(int *)(puVar10 + 6) == (int)param_5[2])) &&
            ((*(char *)(puVar10 + 7) == (char)param_5[3] &&
             (*(char *)(puVar10 + 8) == (char)param_5[4])))) && (puVar10[9] == param_5[5])) {
          if (puVar10 != (undefined8 *)0x0) {
            if (puVar10 == puVar1) {
              *(undefined8 *)(param_1 + 0x12) = puVar10[1];
            }
            else {
              puVar11[1] = puVar10[1];
            }
            lVar3 = g_DefaultPoolId;
            *puVar10 = &PTR_FUN_145ac6e50;
            if (puVar10[2] != 0) {
              FUN_1431501b0(DAT_146b50af0,puVar10[2],puVar10);
            }
            AK::MemoryMgr::Free(lVar3,puVar10);
          }
          break;
        }
        puVar4 = (undefined8 *)puVar10[1];
        puVar11 = puVar10;
      } while ((undefined8 *)puVar10[1] != (undefined8 *)0x0);
    }
  }
  else if (((param_2 != (float *)0x0) ||
           (iVar6 = CAkScopedRtpcObj::AddedNewRtpcValue(*param_1,param_5), iVar6 == 1)) &&
          (cVar5 = FUN_143133690(param_1,param_5,fVar13,param_4,param_6,param_7), cVar5 != '\0')) {
    return 1;
  }
  if ((bVar2) || (param_7 != '\0')) {
    uVar8 = FUN_143132f00(param_1,param_2,param_3,param_4,param_5,param_7,param_8);
  }
  else {
    uVar8 = 1;
  }
  return uVar8;
}



// FUNCTION 143137900 SetRTPCInternal body=762 status=ok
// SIG AKRESULT SetRTPCInternal(CAkRTPCMgr * this, ulong param_1, float param_2, AkRTPCKey * param_3, TransParamsBase * param_4, AkValueMeaning param_5, bool param_6)

/* public: enum AKRESULT __cdecl CAkRTPCMgr::SetRTPCInternal(unsigned long,float,class AkRTPCKey
   const & __ptr64,struct TransParamsBase & __ptr64,enum AkValueMeaning,bool) __ptr64 */

AKRESULT __thiscall
CAkRTPCMgr::SetRTPCInternal
          (CAkRTPCMgr *this,ulong param_1,float param_2,AkRTPCKey *param_3,TransParamsBase *param_4,
          AkValueMeaning param_5,bool param_6)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  AKRESULT AVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  undefined1 uVar9;
  float *pfVar10;
  float fVar11;
  undefined1 local_res8 [8];
  char local_48 [8];
  float *local_40 [3];
  
                    /* 0x3137900  439
                       ?SetRTPCInternal@CAkRTPCMgr@@QEAA?AW4AKRESULT@@KMAEBVAkRTPCKey@@AEAUTransParamsBase@@W4AkValueMeaning@@_N@Z
                        */
  pfVar6 = (float *)0x0;
  local_40[0] = (float *)0x0;
  local_res8[0] = 0;
  pfVar10 = pfVar6;
  uVar9 = 0;
  if (*(uint *)(this + 8) != 0) {
    for (pfVar8 = *(float **)
                   (*(longlong *)this + ((ulonglong)param_1 % (ulonglong)*(uint *)(this + 8)) * 8);
        (pfVar7 = pfVar6, pfVar8 != (float *)0x0 && (pfVar7 = pfVar8, *pfVar8 != (float)param_1));
        pfVar8 = *(float **)(pfVar8 + 2)) {
    }
    if (pfVar7 != (float *)0x0) {
      if (((*(longlong *)param_3 == 0) && (*(int *)(param_3 + 8) == 0)) &&
         ((*(int *)(param_3 + 0x10) == 0 &&
          (((param_3[0x18] == (AkRTPCKey)0xff && (param_3[0x20] == (AkRTPCKey)0xff)) &&
           (*(longlong *)(param_3 + 0x28) == 0)))))) {
        uVar9 = pfVar7[0xe] != 0.0;
        if (*(char *)(pfVar7 + 0xb) != '\0') {
          pfVar6 = pfVar7 + 10;
          pfVar10 = (float *)0x0;
        }
      }
      else {
        if (*(char *)(pfVar7 + 0xb) != '\0') {
          local_40[0] = pfVar7 + 10;
        }
        pfVar10 = local_40[0];
        pfVar5 = (float *)FUN_1431220c0(pfVar7 + 0xc,*(longlong *)param_3,local_48);
        pfVar8 = pfVar6;
        if (local_48[0] != '\0') {
          pfVar8 = pfVar5;
        }
        if (pfVar8 != (float *)0x0) {
          pfVar6 = (float *)FUN_143133e60(pfVar8,param_3 + 8,local_40,local_res8);
          pfVar10 = local_40[0];
          uVar9 = local_res8[0];
        }
      }
      pfVar8 = pfVar6;
      if ((pfVar6 == (float *)0x0) && (param_6)) {
        param_4[8] = (TransParamsBase)0x1;
      }
      goto LAB_143137b34;
    }
  }
  pfVar8 = (float *)0x0;
  pfVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x70);
  if (pfVar7 == (float *)0x0) {
    return 2;
  }
  *pfVar7 = (float)param_1;
  pfVar7[4] = 0.0;
  pfVar7[5] = 0.0;
  pfVar7[6] = 0.0;
  pfVar7[7] = 0.0;
  pfVar7[10] = 0.0;
  *(undefined1 *)(pfVar7 + 0xb) = 0;
  pfVar7[0xc] = 0.0;
  pfVar7[0xd] = 0.0;
  pfVar7[0xe] = 0.0;
  pfVar7[0xf] = 0.0;
  *(undefined ***)(pfVar7 + 8) = &PTR_FUN_144ca0248;
  pfVar7[0x12] = 0.0;
  pfVar7[0x13] = 0.0;
  pfVar7[0x14] = 0.0;
  pfVar7[0x15] = 0.0;
  pfVar7[0x16] = 0.0;
  pfVar7[0x17] = 0.0;
  pfVar7[0x18] = 0.0;
  pfVar7[0x19] = 0.0;
  pfVar7[0x1a] = 0.0;
  pfVar7[0x1b] = 0.0;
  cVar3 = FUN_143133310(this);
  if (cVar3 != '\0') {
    uVar1 = *(uint *)(this + 8);
    *(undefined8 *)(pfVar7 + 2) =
         *(undefined8 *)(*(longlong *)this + ((ulonglong)(uint)*pfVar7 % (ulonglong)uVar1) * 8);
    *(float **)(*(longlong *)this + ((ulonglong)(uint)*pfVar7 % (ulonglong)uVar1) * 8) = pfVar7;
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
  }
  if ((((*(longlong *)param_3 == 0) && (*(int *)(param_3 + 8) == 0)) &&
      (*(int *)(param_3 + 0x10) == 0)) &&
     (((param_3[0x18] == (AkRTPCKey)0xff && (param_3[0x20] == (AkRTPCKey)0xff)) &&
      (*(longlong *)(param_3 + 0x28) == 0)))) {
    uVar9 = pfVar7[0xe] != 0.0;
  }
  else {
    if (*(char *)(pfVar7 + 0xb) != '\0') {
      pfVar10 = pfVar7 + 10;
      local_40[0] = pfVar10;
    }
    pfVar5 = (float *)FUN_1431220c0(pfVar7 + 0xc,*(longlong *)param_3,local_48);
    if (local_48[0] != '\0') {
      pfVar6 = pfVar5;
    }
    if (pfVar6 != (float *)0x0) {
      FUN_143133e60(pfVar6,param_3 + 8,local_40,local_res8);
      pfVar10 = local_40[0];
      uVar9 = local_res8[0];
    }
  }
LAB_143137b34:
  if (param_5 == 2) {
    if (pfVar8 == (float *)0x0) {
      if (pfVar10 == (float *)0x0) {
        fVar11 = pfVar7[4];
      }
      else {
        fVar11 = *pfVar10;
      }
    }
    else {
      for (lVar2 = *(longlong *)(pfVar7 + 0x12); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 8)) {
        if (((*(longlong *)(lVar2 + 0x20) == *(longlong *)param_3) && (*(int *)(lVar2 + 0x28) == 0))
           && ((*(int *)(lVar2 + 0x30) == 0 &&
               (((*(char *)(lVar2 + 0x38) == -1 && (*(char *)(lVar2 + 0x40) == -1)) &&
                (*(longlong *)(lVar2 + 0x48) == 0)))))) {
          if (lVar2 != 0) {
            fVar11 = *(float *)(*(longlong *)(lVar2 + 0x10) + 0xc);
            goto LAB_143137ba7;
          }
          break;
        }
      }
      fVar11 = *pfVar8;
    }
LAB_143137ba7:
    param_2 = param_2 + fVar11;
  }
  AVar4 = FUN_1431376a0(pfVar7,pfVar8,pfVar10,param_2,param_3,param_4,0,uVar9);
  return AVar4;
}



// FUNCTION 143137c00 SetRTPCInternal body=85 status=ok
// SIG AKRESULT SetRTPCInternal(CAkRTPCMgr * this, ulong param_1, float param_2, CAkRegisteredObj * param_3, ulong param_4, TransParamsBase * param_5, AkValueMeaning param_6)

/* public: enum AKRESULT __cdecl CAkRTPCMgr::SetRTPCInternal(unsigned long,float,class
   CAkRegisteredObj * __ptr64,unsigned long,struct TransParamsBase & __ptr64,enum AkValueMeaning)
   __ptr64 */

AKRESULT __thiscall
CAkRTPCMgr::SetRTPCInternal
          (CAkRTPCMgr *this,ulong param_1,float param_2,CAkRegisteredObj *param_3,ulong param_4,
          TransParamsBase *param_5,AkValueMeaning param_6)

{
  AKRESULT AVar1;
  CAkRegisteredObj *local_38;
  ulong local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
                    /* 0x3137c00  440
                       ?SetRTPCInternal@CAkRTPCMgr@@QEAA?AW4AKRESULT@@KMPEAVCAkRegisteredObj@@KAEAUTransParamsBase@@W4AkValueMeaning@@@Z
                        */
  local_28 = 0;
  local_10 = 0;
  local_30 = param_4;
  local_20 = 0xff;
  local_18 = 0xff;
  local_38 = param_3;
  AVar1 = SetRTPCInternal(this,param_1,param_2,(AkRTPCKey *)&local_38,param_5,param_6,false);
  return AVar1;
}



// FUNCTION 143137c60 SetRTPCRamping body=57 status=ok
// SIG undefined SetRTPCRamping(void)

void CAkRTPCMgr::SetRTPCRamping
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  longlong lVar1;
  
  lVar1 = GetRTPCEntry();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x1c) = param_5;
    *(undefined4 *)(lVar1 + 0x18) = param_4;
    *(undefined4 *)(lVar1 + 0x14) = param_3;
  }
  return;
}



// FUNCTION 143137ca0 SetSwitchFromRTPCMgr body=86 status=ok
// SIG undefined SetSwitchFromRTPCMgr(void)

void CAkSwitchMgr::SetSwitchFromRTPCMgr
               (undefined8 param_1,longlong param_2,undefined8 param_3,float param_4,
               undefined8 param_5)

{
  undefined1 local_res10 [24];
  
  SwitchingInThisScope::SwitchingInThisScope(local_res10);
  if (param_2 != 0) {
    AkSwitchEntry::SetSwitchFromRTPCMgr(param_2,param_3,(longlong)param_4,param_5);
  }
  SwitchingInThisScope::~SwitchingInThisScope(local_res10);
  return;
}



// FUNCTION 143137d00 FUN_143137d00 body=1558 status=ok
// SIG undefined FUN_143137d00(void)

int FUN_143137d00(longlong *param_1,longlong param_2,int param_3,int param_4,undefined4 param_5,
                 int param_6,int param_7,int param_8,void *param_9,uint param_10,longlong *param_11,
                 int param_12,byte param_13)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  long lVar9;
  char cVar10;
  int iVar11;
  longlong *_Dst;
  void *pvVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  void *pvVar17;
  int iVar18;
  int *piVar19;
  ulonglong uVar20;
  int *piVar21;
  uint uVar22;
  char local_res10 [8];
  int local_res18;
  int local_res20;
  
  iVar11 = 0x1f;
  if (param_2 == 0) {
    return 0x1f;
  }
  plVar1 = param_1 + 3;
  local_res18 = param_3;
  local_res20 = param_4;
  if (*(uint *)(param_1 + 4) == 0) {
LAB_143137e9f:
    _Dst = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x60);
    if (_Dst == (longlong *)0x0) {
      return 0x34;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,0,0x60);
    *(undefined4 *)(_Dst + 4) = 0;
    *(undefined4 *)(_Dst + 5) = 0;
    *(undefined1 *)(_Dst + 6) = 0xff;
    *(undefined1 *)(_Dst + 7) = 0xff;
    _Dst[8] = 0;
    _Dst[10] = 0;
    _Dst[0xb] = 0;
    *(undefined4 *)((longlong)_Dst + 0x4c) = param_5;
    *_Dst = param_2;
    *(int *)(_Dst + 1) = param_6;
    *(int *)(_Dst + 9) = param_12;
    lVar13 = param_11[1];
    _Dst[3] = *param_11;
    _Dst[4] = lVar13;
    uVar5 = *(undefined4 *)((longlong)param_11 + 0x14);
    lVar13 = param_11[3];
    uVar6 = *(undefined4 *)((longlong)param_11 + 0x1c);
    *(int *)(_Dst + 5) = (int)param_11[2];
    *(undefined4 *)((longlong)_Dst + 0x2c) = uVar5;
    *(int *)(_Dst + 6) = (int)lVar13;
    *(undefined4 *)((longlong)_Dst + 0x34) = uVar6;
    lVar13 = param_11[5];
    _Dst[7] = param_11[4];
    _Dst[8] = lVar13;
    cVar10 = FUN_143133480(plVar1);
    if (cVar10 != '\0') {
      uVar20 = (ulonglong)(uint)((int)_Dst[1] + (int)*_Dst) % (ulonglong)*(uint *)(param_1 + 4);
      _Dst[2] = *(longlong *)(*plVar1 + uVar20 * 8);
      *(longlong **)(*plVar1 + uVar20 * 8) = _Dst;
      *(int *)(param_1 + 5) = (int)param_1[5] + 1;
    }
  }
  else {
    for (plVar3 = *(longlong **)
                   (*plVar1 +
                   ((ulonglong)(uint)((int)param_2 + param_6) % (ulonglong)*(uint *)(param_1 + 4)) *
                   8);
        (_Dst = (longlong *)0x0, plVar3 != (longlong *)0x0 &&
        ((*plVar3 != param_2 || (_Dst = plVar3, (int)plVar3[1] != param_6))));
        plVar3 = (longlong *)plVar3[2]) {
    }
    if (_Dst == (longlong *)0x0) goto LAB_143137e9f;
    piVar21 = (int *)_Dst[10];
    piVar19 = piVar21 + (ulonglong)*(uint *)(_Dst + 0xb) * 6;
    if (piVar21 != piVar19) {
LAB_143137db7:
      if (*piVar21 != param_7) goto code_r0x000143137dbb;
      uVar22 = piVar21[1];
      if (*(void **)(piVar21 + 2) != (void *)0x0) {
        AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(piVar21 + 2));
        piVar21[2] = 0;
        piVar21[3] = 0;
      }
      piVar21[4] = 0;
      piVar21[5] = 0;
      uVar16 = *(uint *)(_Dst + 0xb);
      piVar19 = (int *)(_Dst[10] + ((ulonglong)uVar16 - 1) * 0x18);
      if (piVar21 < piVar19) {
        uVar20 = ((ulonglong)((longlong)piVar19 + (-1 - (longlong)piVar21)) / 0x18 + 1) * 3 &
                 0x1fffffffffffffff;
        piVar19 = piVar21 + 6;
        for (; uVar20 != 0; uVar20 = uVar20 - 1) {
          *(undefined8 *)piVar21 = *(undefined8 *)piVar19;
          piVar19 = piVar19 + 2;
          piVar21 = piVar21 + 2;
        }
        uVar16 = *(uint *)(_Dst + 0xb);
      }
      *(uint *)(_Dst + 0xb) = uVar16 - 1;
      if (*(uint *)(param_1 + 1) != 0) {
        for (puVar4 = *(uint **)(*param_1 +
                                ((ulonglong)uVar22 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
            puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 2)) {
          if (*puVar4 == uVar22) {
            if (puVar4 != (uint *)0x0) {
              FUN_143136320();
            }
            break;
          }
        }
      }
      if (uVar22 != 0) {
        FUN_14313ab10(DAT_146b50ae0,_Dst,uVar22);
      }
    }
  }
LAB_143137f52:
  if ((param_9 == (void *)0x0) || (param_10 == 0)) {
    if ((param_12 != 5) || (iVar18 = local_res18, param_6 != 0x39)) goto LAB_1431380e2;
LAB_14313815d:
    if (local_res20 == 2) {
      iVar11 = FUN_14313a060(DAT_146b50ae0,iVar18,_Dst);
    }
    else {
      lVar13 = CAkRTPCMgr::GetRTPCEntry(param_1);
      if (lVar13 == 0) {
        iVar11 = 0x34;
        goto LAB_1431380e2;
      }
      iVar11 = 1;
      lVar14 = FUN_143133110(lVar13 + 0x60,_Dst,local_res10);
      lVar15 = 0;
      if (local_res10[0] != '\0') {
        lVar15 = lVar14;
      }
      iVar18 = local_res18;
      if (lVar15 == 0) {
        lVar14 = FUN_143133110(lVar13 + 0x50,_Dst,local_res10);
        lVar15 = 0;
        if (local_res10[0] != '\0') {
          lVar15 = lVar14;
        }
        iVar18 = local_res18;
        if (lVar15 == 0) {
          uVar22 = *(int *)(lVar13 + 0x58) + 1 + *(int *)(lVar13 + 0x68);
          if (((*(uint *)(lVar13 + 0x5c) < uVar22) &&
              (cVar10 = FUN_1431344e0(lVar13 + 0x50), cVar10 == '\0')) ||
             ((*(uint *)(lVar13 + 0x6c) < uVar22 &&
              (cVar10 = FUN_1431344e0(lVar13 + 0x60), cVar10 == '\0')))) {
            iVar11 = 0x34;
            iVar18 = local_res18;
          }
          else {
            FUN_143132d00((((ulonglong)param_13 ^ 1) + 5) * 0x10 + lVar13);
            iVar18 = local_res18;
          }
        }
      }
    }
    if (iVar11 == 1) {
      FUN_1431397c0(param_1,_Dst,iVar18);
      return 1;
    }
  }
  else {
    uVar22 = *(uint *)(_Dst + 0xb);
    if (uVar22 < *(uint *)((longlong)_Dst + 0x5c)) {
LAB_14313802f:
      iVar18 = local_res18;
      piVar19 = (int *)(_Dst[10] + (ulonglong)*(uint *)(_Dst + 0xb) * 0x18);
      *(uint *)(_Dst + 0xb) = *(uint *)(_Dst + 0xb) + 1;
      if (piVar19 != (int *)0x0) {
        piVar19[2] = 0;
        piVar19[3] = 0;
        piVar19[4] = 0;
        piVar19[5] = 0;
        piVar19[1] = local_res18;
        *piVar19 = param_7;
        if (*(void **)(piVar19 + 2) != (void *)0x0) {
          AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(piVar19 + 2));
          piVar19[2] = 0;
          piVar19[3] = 0;
        }
        piVar19[4] = 0;
        piVar19[5] = 0;
        pvVar12 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)param_10 * 0xc);
        *(void **)(piVar19 + 2) = pvVar12;
        if (pvVar12 == (void *)0x0) {
          piVar19[4] = 0;
          iVar11 = 0x34;
          *(int *)(_Dst + 0xb) = (int)_Dst[0xb] + -1;
          goto LAB_1431380e2;
        }
        _guard_xfg_dispatch_icall_nop(pvVar12,param_9,(ulonglong)(param_10 * 0xc));
        piVar19[5] = param_8;
        piVar19[4] = param_10;
        goto LAB_14313815d;
      }
    }
    else {
      uVar16 = *(uint *)((longlong)_Dst + 0x5c) + 1;
      pvVar12 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar16 * 0x18);
      if (pvVar12 != (void *)0x0) {
        pvVar17 = (void *)_Dst[10];
        if ((pvVar17 != (void *)0x0) && (pvVar17 != pvVar12)) {
          uVar20 = (ulonglong)*(uint *)(_Dst + 0xb);
          if (uVar20 != 0) {
            lVar13 = (longlong)pvVar12 + 0x14;
            do {
              if ((undefined8 *)(lVar13 + -0x14) != (undefined8 *)0x0) {
                *(undefined8 *)(lVar13 + -0xc) = 0;
                *(undefined8 *)(lVar13 + -4) = 0;
              }
              lVar14 = _Dst[10];
              lVar15 = (-0x14 - (longlong)pvVar12) + lVar13;
              puVar2 = (undefined8 *)(lVar15 + lVar14);
              uVar7 = puVar2[1];
              *(undefined8 *)(lVar13 + -0x14) = *puVar2;
              *(undefined8 *)(lVar13 + -0xc) = uVar7;
              *(undefined8 *)(lVar13 + -4) = *(undefined8 *)(lVar15 + 0x10 + lVar14);
              uVar20 = uVar20 - 1;
              lVar13 = lVar13 + 0x18;
            } while (uVar20 != 0);
            pvVar17 = (void *)_Dst[10];
          }
          AK::MemoryMgr::Free(g_DefaultPoolId,pvVar17);
        }
        _Dst[10] = (longlong)pvVar12;
        *(uint *)((longlong)_Dst + 0x5c) = uVar16;
        if (uVar22 < uVar16) goto LAB_14313802f;
      }
    }
    iVar11 = 0x34;
  }
LAB_1431380e2:
  if ((int)_Dst[0xb] == 0) {
    if (*(uint *)(param_1 + 4) != 0) {
      uVar20 = (ulonglong)(uint)((int)param_2 + param_6) % (ulonglong)*(uint *)(param_1 + 4);
      plVar3 = *(longlong **)(param_1[3] + uVar20 * 8);
      plVar1 = (longlong *)0x0;
      while (plVar8 = plVar3, plVar8 != (longlong *)0x0) {
        if ((*plVar8 == param_2) && ((int)plVar8[1] == param_6)) {
          if (plVar1 == (longlong *)0x0) {
            *(longlong *)(param_1[3] + uVar20 * 8) = plVar8[2];
          }
          else {
            plVar1[2] = plVar8[2];
          }
          *(int *)(param_1 + 5) = (int)param_1[5] + -1;
          break;
        }
        plVar1 = plVar8;
        plVar3 = (longlong *)plVar8[2];
      }
    }
    FUN_143136190(param_1,_Dst);
    lVar9 = g_DefaultPoolId;
    if ((void *)_Dst[10] != (void *)0x0) {
      *(undefined4 *)(_Dst + 0xb) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)_Dst[10]);
      _Dst[10] = 0;
      *(undefined4 *)((longlong)_Dst + 0x5c) = 0;
    }
    AK::MemoryMgr::Free(lVar9,_Dst);
  }
  return iVar11;
code_r0x000143137dbb:
  piVar21 = piVar21 + 6;
  if (piVar21 == piVar19) goto LAB_143137f52;
  goto LAB_143137db7;
}



// FUNCTION 143138320 Term body=111 status=ok
// SIG undefined Term(void)

void AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType_const_&___ptr64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType>_>
     ::Term(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2 + (ulonglong)*(uint *)(param_1 + 1) * 5;
    if (puVar2 != puVar1) {
      do {
        (**(code **)*puVar2)(puVar2,0);
        puVar2 = puVar2 + 5;
      } while (puVar2 != puVar1);
      puVar2 = (undefined8 *)*param_1;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,puVar2);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 143138390 Term body=179 status=ok
// SIG undefined Term(void)

void AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>
     ::Term(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  lVar1 = lVar4 + (ulonglong)*(uint *)(param_1 + 0x18) * 0x28;
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x28) {
    lVar3 = *(longlong *)(lVar4 + 0x10);
    lVar2 = lVar3 + (ulonglong)*(uint *)(lVar4 + 0x18) * 0x28;
    for (; lVar3 != lVar2; lVar3 = lVar3 + 0x28) {
      if (*(void **)(lVar3 + 0x10) != (void *)0x0) {
        *(undefined4 *)(lVar3 + 0x18) = 0;
        AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar3 + 0x10));
        *(undefined8 *)(lVar3 + 0x10) = 0;
        *(undefined4 *)(lVar3 + 0x1c) = 0;
      }
    }
    AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType_const_&___ptr64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType>_>
    ::Term(lVar4 + 0x10);
  }
  AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType_const_&___ptr64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType>_>
  ::Term(param_1 + 0x10);
  return;
}



// FUNCTION 143138450 FUN_143138450 body=115 status=ok
// SIG undefined FUN_143138450(void)

void FUN_143138450(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar1 = lVar2 + (ulonglong)*(uint *)(param_1 + 0x18) * 0x28;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    if (*(void **)(lVar2 + 0x10) != (void *)0x0) {
      *(undefined4 *)(lVar2 + 0x18) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar2 + 0x10));
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(undefined4 *)(lVar2 + 0x1c) = 0;
    }
  }
  AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType_const_&___ptr64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType>_>
  ::Term(param_1 + 0x10);
  return;
}



// FUNCTION 1431384d0 Term body=336 status=ok
// SIG undefined Term(void)

void AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidPlayingID,AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>_>_>
     ::Term(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = *(longlong *)(param_1 + 0x10);
  lVar1 = lVar8 + (ulonglong)*(uint *)(param_1 + 0x18) * 0x28;
  for (; lVar8 != lVar1; lVar8 = lVar8 + 0x28) {
    lVar7 = *(longlong *)(lVar8 + 0x10);
    lVar2 = lVar7 + (ulonglong)*(uint *)(lVar8 + 0x18) * 0x28;
    for (; lVar7 != lVar2; lVar7 = lVar7 + 0x28) {
      lVar6 = *(longlong *)(lVar7 + 0x10);
      lVar3 = lVar6 + (ulonglong)*(uint *)(lVar7 + 0x18) * 0x28;
      for (; lVar6 != lVar3; lVar6 = lVar6 + 0x28) {
        lVar5 = *(longlong *)(lVar6 + 0x10);
        lVar4 = lVar5 + (ulonglong)*(uint *)(lVar6 + 0x18) * 0x28;
        for (; lVar5 != lVar4; lVar5 = lVar5 + 0x28) {
          if (*(void **)(lVar5 + 0x10) != (void *)0x0) {
            *(undefined4 *)(lVar5 + 0x18) = 0;
            AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar5 + 0x10));
            *(undefined8 *)(lVar5 + 0x10) = 0;
            *(undefined4 *)(lVar5 + 0x1c) = 0;
          }
        }
        AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType_const_&___ptr64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType>_>
        ::Term(lVar6 + 0x10);
      }
      AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType_const_&___ptr64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType>_>
      ::Term(lVar7 + 0x10);
    }
    AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType_const_&___ptr64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType>_>
    ::Term(lVar8 + 0x10);
  }
  AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType_const_&___ptr64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType>_>
  ::Term(param_1 + 0x10);
  return;
}



// FUNCTION 143138620 Term body=276 status=ok
// SIG undefined Term(void)

void AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>_>
     ::Term(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 0x10);
  lVar1 = lVar6 + (ulonglong)*(uint *)(param_1 + 0x18) * 0x28;
  for (; lVar6 != lVar1; lVar6 = lVar6 + 0x28) {
    lVar5 = *(longlong *)(lVar6 + 0x10);
    lVar2 = lVar5 + (ulonglong)*(uint *)(lVar6 + 0x18) * 0x28;
    for (; lVar5 != lVar2; lVar5 = lVar5 + 0x28) {
      lVar4 = *(longlong *)(lVar5 + 0x10);
      lVar3 = lVar4 + (ulonglong)*(uint *)(lVar5 + 0x18) * 0x28;
      for (; lVar4 != lVar3; lVar4 = lVar4 + 0x28) {
        if (*(void **)(lVar4 + 0x10) != (void *)0x0) {
          *(undefined4 *)(lVar4 + 0x18) = 0;
          AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar4 + 0x10));
          *(undefined8 *)(lVar4 + 0x10) = 0;
          *(undefined4 *)(lVar4 + 0x1c) = 0;
        }
      }
      AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType_const_&___ptr64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType>_>
      ::Term(lVar5 + 0x10);
    }
    AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType_const_&___ptr64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType>_>
    ::Term(lVar6 + 0x10);
  }
  AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType_const_&___ptr64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType>_>
  ::Term(param_1 + 0x10);
  return;
}



// FUNCTION 143138740 Term body=495 status=ok
// SIG undefined Term(void)

void AkRTPCNestedSearchTree<AkRTPCKey,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidPlayingID,AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>_>_>_>
     ::Term(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  
  lVar7 = *(longlong *)(param_1 + 0x10);
  lVar1 = lVar7 + (ulonglong)*(uint *)(param_1 + 0x18) * 0x28;
  for (; lVar7 != lVar1; lVar7 = lVar7 + 0x28) {
    lVar12 = *(longlong *)(lVar7 + 0x10);
    lVar2 = lVar12 + (ulonglong)*(uint *)(lVar7 + 0x18) * 0x28;
    for (; lVar12 != lVar2; lVar12 = lVar12 + 0x28) {
      lVar11 = *(longlong *)(lVar12 + 0x10);
      lVar3 = lVar11 + (ulonglong)*(uint *)(lVar12 + 0x18) * 0x28;
      for (; lVar11 != lVar3; lVar11 = lVar11 + 0x28) {
        lVar9 = *(longlong *)(lVar11 + 0x10);
        lVar4 = lVar9 + (ulonglong)*(uint *)(lVar11 + 0x18) * 0x28;
        for (; lVar9 != lVar4; lVar9 = lVar9 + 0x28) {
          lVar8 = *(longlong *)(lVar9 + 0x10);
          lVar5 = lVar8 + (ulonglong)*(uint *)(lVar9 + 0x18) * 0x28;
          for (; lVar8 != lVar5; lVar8 = lVar8 + 0x28) {
            if (*(void **)(lVar8 + 0x10) != (void *)0x0) {
              *(undefined4 *)(lVar8 + 0x18) = 0;
              AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar8 + 0x10));
              *(undefined8 *)(lVar8 + 0x10) = 0;
              *(undefined4 *)(lVar8 + 0x1c) = 0;
            }
          }
          AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType_const_&___ptr64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType>_>
          ::Term(lVar9 + 0x10);
        }
        AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType_const_&___ptr64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType>_>
        ::Term(lVar11 + 0x10);
      }
      AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType_const_&___ptr64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType>_>
      ::Term(lVar12 + 0x10);
    }
    AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType_const_&___ptr64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType>_>
    ::Term(lVar7 + 0x10);
  }
  puVar10 = *(undefined8 **)(param_1 + 0x10);
  if (puVar10 != (undefined8 *)0x0) {
    puVar6 = puVar10 + (ulonglong)*(uint *)(param_1 + 0x18) * 5;
    if (puVar10 != puVar6) {
      do {
        (**(code **)*puVar10)(puVar10,0);
        puVar10 = puVar10 + 5;
      } while (puVar10 != puVar6);
      puVar10 = *(undefined8 **)(param_1 + 0x10);
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,puVar10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}



// FUNCTION 143138930 Term body=57 status=ok
// SIG undefined Term(void)

void AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>::Term
               (longlong param_1)

{
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}



// FUNCTION 143138970 Term body=668 status=ok
// SIG undefined Term(void)

/* WARNING: Removing unreachable block (ram,0x000143138a14) */
/* WARNING: Removing unreachable block (ram,0x000143138af4) */

undefined4 CAkRTPCMgr::Term(longlong *param_1)

{
  void *pvVar1;
  long lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  void *pvVar5;
  void *pvVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uStack_50;
  
  uVar9 = 0;
  if (*(uint *)(param_1 + 1) != 0) {
    pvVar5 = *(void **)*param_1;
    uVar4 = uVar9;
    while (pvVar5 == (void *)0x0) {
      uVar8 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar8;
      if (*(uint *)(param_1 + 1) <= uVar8) goto LAB_143138a6c;
      pvVar5 = (void *)((longlong *)*param_1)[uVar4];
    }
    do {
      pvVar1 = *(void **)((longlong)pvVar5 + 8);
      uStack_50 = (uint)uVar4;
      pvVar6 = pvVar1;
      if (pvVar1 == (void *)0x0) {
        uVar3 = uVar4;
        do {
          uStack_50 = (int)uVar3 + 1;
          uVar3 = (ulonglong)uStack_50;
          if (*(uint *)(param_1 + 1) <= uStack_50) break;
          pvVar6 = *(void **)(*param_1 + uVar3 * 8);
        } while (pvVar6 == (void *)0x0);
      }
      *(void **)(*param_1 + uVar4 * 8) = pvVar1;
      *(int *)(param_1 + 2) = (int)param_1[2] + -1;
      lVar2 = g_DefaultPoolId;
      AkRTPCEntry::_scalar_deleting_destructor_(pvVar5,0);
      AK::MemoryMgr::Free(lVar2,pvVar5);
      if (pvVar6 == (void *)0x0) break;
      uVar4 = (ulonglong)uStack_50;
      pvVar5 = pvVar6;
    } while( true );
  }
LAB_143138a6c:
  if (*(uint *)(param_1 + 4) == 0) {
LAB_143138b6e:
    if ((void *)*param_1 != (void *)0x0) {
      *(undefined4 *)(param_1 + 1) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
      *param_1 = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    if ((void *)param_1[3] != (void *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[3]);
      param_1[3] = 0;
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    }
    param_1 = param_1 + 6;
    lVar7 = 9;
    do {
      if ((void *)*param_1 != (void *)0x0) {
        *(undefined4 *)(param_1 + 1) = 0;
        AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
        *param_1 = 0;
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      param_1 = param_1 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    return 1;
  }
  pvVar5 = *(void **)param_1[3];
  while (pvVar5 == (void *)0x0) {
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar8;
    if (*(uint *)(param_1 + 4) <= uVar8) goto LAB_143138b6e;
    pvVar5 = (void *)((longlong *)param_1[3])[uVar9];
  }
  do {
    pvVar1 = *(void **)((longlong)pvVar5 + 0x10);
    uStack_50 = (uint)uVar9;
    pvVar6 = pvVar1;
    if (pvVar1 == (void *)0x0) {
      uVar4 = uVar9;
      do {
        uStack_50 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uStack_50;
        if (*(uint *)(param_1 + 4) <= uStack_50) break;
        pvVar6 = *(void **)(param_1[3] + uVar4 * 8);
      } while (pvVar6 == (void *)0x0);
    }
    *(void **)(param_1[3] + uVar9 * 8) = pvVar1;
    *(int *)(param_1 + 5) = (int)param_1[5] + -1;
    FUN_143136190(param_1,pvVar5);
    lVar2 = g_DefaultPoolId;
    if (*(void **)((longlong)pvVar5 + 0x50) != (void *)0x0) {
      *(undefined4 *)((longlong)pvVar5 + 0x58) = 0;
      AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)((longlong)pvVar5 + 0x50));
      *(undefined8 *)((longlong)pvVar5 + 0x50) = 0;
      *(undefined4 *)((longlong)pvVar5 + 0x5c) = 0;
    }
    AK::MemoryMgr::Free(lVar2,pvVar5);
    if (pvVar6 == (void *)0x0) goto LAB_143138b6e;
    uVar9 = (ulonglong)uStack_50;
    pvVar5 = pvVar6;
  } while( true );
}



// FUNCTION 143138c10 FUN_143138c10 body=377 status=ok
// SIG undefined FUN_143138c10(void)

void FUN_143138c10(undefined8 *param_1,undefined8 param_2,undefined4 param_3,char param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  char local_res8 [8];
  undefined1 local_res20 [8];
  longlong local_48 [4];
  
  if ((*(char *)(param_1 + 10) == '\0') || (param_4 == '\0')) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  lVar5 = param_1[3];
  uVar10 = false;
  lVar8 = 0;
  local_res20[0] = 0;
  local_48[0] = 0;
  if ((((param_1[4] == 0) && (*(int *)(param_1 + 5) == 0)) && (*(int *)(param_1 + 6) == 0)) &&
     (((*(char *)(param_1 + 7) == -1 && (*(char *)(param_1 + 8) == -1)) && (param_1[9] == 0)))) {
    uVar10 = *(int *)(lVar5 + 0x38) != 0;
    if (*(char *)(lVar5 + 0x2c) != '\0') {
      lVar5 = lVar5 + 0x28;
      goto LAB_143138ced;
    }
  }
  else {
    if (*(char *)(lVar5 + 0x2c) != '\0') {
      local_48[0] = lVar5 + 0x28;
    }
    lVar8 = local_48[0];
    lVar4 = FUN_1431220c0(lVar5 + 0x30,param_1[4],local_res8);
    lVar5 = 0;
    if (local_res8[0] != '\0') {
      lVar5 = lVar4;
    }
    if (lVar5 != 0) {
      lVar5 = FUN_143133e60(lVar5,param_1 + 5,local_48,local_res20);
      lVar8 = local_48[0];
      uVar10 = local_res20[0];
      goto LAB_143138ced;
    }
  }
  lVar5 = 0;
LAB_143138ced:
  FUN_143132f00(param_1[3],lVar5,lVar8,param_3,param_1 + 4,uVar9,uVar10);
  if (param_4 != '\0') {
    puVar7 = (undefined8 *)0x0;
    puVar1 = *(undefined8 **)(param_1[3] + 0x48);
    puVar3 = puVar1;
    puVar6 = puVar1;
    if (puVar1 == (undefined8 *)0x0) {
LAB_143138d38:
      if (puVar6 != (undefined8 *)0x0) {
        if (puVar6 == puVar1) {
          *(undefined8 *)(param_1[3] + 0x48) = puVar6[1];
        }
        else {
          puVar7[1] = puVar6[1];
        }
      }
    }
    else {
      do {
        puVar6 = puVar3;
        if (puVar6 == param_1) goto LAB_143138d38;
        puVar3 = (undefined8 *)puVar6[1];
        puVar7 = puVar6;
      } while ((undefined8 *)puVar6[1] != (undefined8 *)0x0);
    }
    param_1[2] = 0;
    lVar2 = g_DefaultPoolId;
    *param_1 = &PTR_FUN_145ac6e50;
    AK::MemoryMgr::Free(lVar2,param_1);
  }
  return;
}



// FUNCTION 143138d90 FUN_143138d90 body=117 status=ok
// SIG undefined FUN_143138d90(void)

void FUN_143138d90(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}



// FUNCTION 143138e10 UnSubscribeRTPC body=244 status=ok
// SIG undefined UnSubscribeRTPC(void)

void CAkRTPCMgr::UnSubscribeRTPC(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  long lVar5;
  longlong *plVar6;
  
  if (*(uint *)(param_1 + 0x20) != 0) {
    uVar2 = (ulonglong)(uint)((int)param_2 + param_3) % (ulonglong)*(uint *)(param_1 + 0x20);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + uVar2 * 8);
    plVar6 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      while ((*plVar6 != param_2 || ((int)plVar6[1] != param_3))) {
        plVar6 = (longlong *)plVar6[2];
        if (plVar6 == (longlong *)0x0) {
          return;
        }
      }
      plVar4 = (longlong *)0x0;
      while (plVar3 = plVar1, plVar3 != (longlong *)0x0) {
        if ((*plVar3 == param_2) && ((int)plVar3[1] == param_3)) {
          if (plVar4 == (longlong *)0x0) {
            *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar2 * 8) = plVar3[2];
          }
          else {
            plVar4[2] = plVar3[2];
          }
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
          break;
        }
        plVar4 = plVar3;
        plVar1 = (longlong *)plVar3[2];
      }
      FUN_143136190(param_1,plVar6);
      lVar5 = g_DefaultPoolId;
      if ((void *)plVar6[10] != (void *)0x0) {
        *(undefined4 *)(plVar6 + 0xb) = 0;
        AK::MemoryMgr::Free(g_DefaultPoolId,(void *)plVar6[10]);
        plVar6[10] = 0;
        *(undefined4 *)((longlong)plVar6 + 0x5c) = 0;
      }
      AK::MemoryMgr::Free(lVar5,plVar6);
    }
  }
  return;
}



// FUNCTION 143138f10 FUN_143138f10 body=584 status=ok
// SIG undefined FUN_143138f10(void)

void FUN_143138f10(longlong *param_1,longlong param_2,int param_3,int param_4,undefined1 *param_5)

{
  uint uVar1;
  longlong *plVar2;
  uint *puVar3;
  longlong *plVar4;
  long lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  
  if (*(uint *)(param_1 + 4) != 0) {
    uVar10 = (int)param_2 + param_3;
    for (plVar2 = *(longlong **)
                   (param_1[3] + ((ulonglong)uVar10 % (ulonglong)*(uint *)(param_1 + 4)) * 8);
        (plVar9 = (longlong *)0x0, plVar2 != (longlong *)0x0 &&
        ((*plVar2 != param_2 || (plVar9 = plVar2, (int)plVar2[1] != param_3))));
        plVar2 = (longlong *)plVar2[2]) {
    }
    if (plVar9 != (longlong *)0x0) {
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = (int)plVar9[0xb] != 0;
      }
      piVar12 = (int *)plVar9[10];
      piVar11 = piVar12 + (ulonglong)*(uint *)(plVar9 + 0xb) * 6;
      if (piVar12 == piVar11) {
        return;
      }
      while (*piVar12 != param_4) {
        piVar12 = piVar12 + 6;
        if (piVar12 == piVar11) {
          return;
        }
      }
      uVar1 = piVar12[1];
      if (*(void **)(piVar12 + 2) != (void *)0x0) {
        AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(piVar12 + 2));
        piVar12[2] = 0;
        piVar12[3] = 0;
      }
      piVar12[4] = 0;
      piVar12[5] = 0;
      uVar8 = *(uint *)(plVar9 + 0xb);
      piVar11 = (int *)(plVar9[10] + ((ulonglong)uVar8 - 1) * 0x18);
      if (piVar12 < piVar11) {
        uVar7 = ((ulonglong)((longlong)piVar11 + (-1 - (longlong)piVar12)) / 0x18 + 1) * 3 &
                0x1fffffffffffffff;
        piVar11 = piVar12 + 6;
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined8 *)piVar12 = *(undefined8 *)piVar11;
          piVar11 = piVar11 + 2;
          piVar12 = piVar12 + 2;
        }
        uVar8 = *(uint *)(plVar9 + 0xb);
      }
      *(uint *)(plVar9 + 0xb) = uVar8 - 1;
      if (*(uint *)(param_1 + 1) != 0) {
        for (puVar3 = *(uint **)(*param_1 +
                                ((ulonglong)uVar1 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
            puVar3 != (uint *)0x0; puVar3 = *(uint **)(puVar3 + 2)) {
          if (*puVar3 == uVar1) {
            if (puVar3 != (uint *)0x0) {
              FUN_143136320(puVar3,plVar9);
            }
            break;
          }
        }
      }
      FUN_14313ab10(DAT_146b50ae0,plVar9,uVar1);
      if ((int)plVar9[0xb] != 0) {
        return;
      }
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = 0;
      }
      if (*(uint *)(param_1 + 4) != 0) {
        uVar7 = (ulonglong)uVar10 % (ulonglong)*(uint *)(param_1 + 4);
        plVar6 = *(longlong **)(param_1[3] + uVar7 * 8);
        plVar2 = (longlong *)0x0;
        while (plVar4 = plVar6, plVar4 != (longlong *)0x0) {
          if ((*plVar4 == param_2) && ((int)plVar4[1] == param_3)) {
            if (plVar2 == (longlong *)0x0) {
              *(longlong *)(param_1[3] + uVar7 * 8) = plVar4[2];
              *(int *)(param_1 + 5) = (int)param_1[5] + -1;
            }
            else {
              plVar2[2] = plVar4[2];
              *(int *)(param_1 + 5) = (int)param_1[5] + -1;
            }
            break;
          }
          plVar2 = plVar4;
          plVar6 = (longlong *)plVar4[2];
        }
      }
      lVar5 = g_DefaultPoolId;
      if ((void *)plVar9[10] != (void *)0x0) {
        *(undefined4 *)(plVar9 + 0xb) = 0;
        AK::MemoryMgr::Free(g_DefaultPoolId,(void *)plVar9[10]);
        plVar9[10] = 0;
        *(undefined4 *)((longlong)plVar9 + 0x5c) = 0;
      }
      AK::MemoryMgr::Free(lVar5,plVar9);
      return;
    }
  }
  if (param_5 == (undefined1 *)0x0) {
    return;
  }
  *param_5 = 0;
  return;
}



// FUNCTION 143139160 FUN_143139160 body=11 status=ok
// SIG undefined FUN_143139160(void)

void FUN_143139160(undefined8 param_1,undefined8 param_2)

{
  CAkRTPCMgr::UnSubscribeRTPC(param_1,param_2,0x39);
  return;
}



// FUNCTION 143139170 FUN_143139170 body=403 status=ok
// SIG undefined FUN_143139170(void)

void FUN_143139170(longlong param_1,char *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res10;
  undefined1 local_res18 [16];
  
  if (((*param_2 == -1) && (param_2[8] == -1)) && (*(longlong *)(param_2 + 0x10) == 0)) {
    if (*(char *)(param_1 + 0xc) == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
    return;
  }
  param_1 = param_1 + 0x10;
  lVar1 = FUN_143121f60(param_1,*param_2,&local_res10);
  lVar4 = 0;
  if ((char)local_res10 != '\0') {
    lVar4 = lVar1;
  }
  if (lVar4 == 0) {
    return;
  }
  if ((param_2[8] == -1) && (*(longlong *)(param_2 + 0x10) == 0)) {
    if (*(char *)(lVar4 + 0xc) != '\0') {
      *(undefined1 *)(lVar4 + 0xc) = 0;
    }
    goto LAB_1431392a2;
  }
  lVar2 = FUN_143121f60(lVar4 + 0x10,param_2[8],&local_res10);
  lVar1 = 0;
  if ((char)local_res10 != '\0') {
    lVar1 = lVar2;
  }
  if (lVar1 != 0) {
    if (*(longlong *)(param_2 + 0x10) == 0) {
      if (*(char *)(lVar1 + 0xc) != '\0') {
        *(undefined1 *)(lVar1 + 0xc) = 0;
      }
    }
    else {
      FUN_143139660(lVar1 + 0x10);
      if ((*(int *)(lVar1 + 0x18) == 0) && (*(void **)(lVar1 + 0x10) != (void *)0x0)) {
        *(undefined4 *)(lVar1 + 0x18) = 0;
        AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(lVar1 + 0x10));
        *(undefined8 *)(lVar1 + 0x10) = 0;
        *(undefined4 *)(lVar1 + 0x1c) = 0;
      }
      if (*(char *)(lVar1 + 0xc) != '\0') goto LAB_143139290;
    }
    if (*(int *)(lVar1 + 0x18) == 0) {
      AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>::Term(lVar1);
      FUN_1431395a0(lVar4 + 0x10,param_2[8]);
    }
  }
LAB_143139290:
  if (*(char *)(lVar4 + 0xc) != '\0') {
    return;
  }
LAB_1431392a2:
  if (*(int *)(lVar4 + 0x18) == 0) {
    FUN_143138450(lVar4);
    uVar3 = FUN_143121f60(param_1,*param_2,&local_res10);
    if ((char)local_res10 != '\0') {
      local_res10 = uVar3;
      AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType_const_&___ptr64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType>_>
      ::Erase(param_1,local_res18,&local_res10);
    }
  }
  return;
}



// FUNCTION 143139310 FUN_143139310 body=370 status=ok
// SIG undefined FUN_143139310(void)

void FUN_143139310(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res10;
  undefined1 local_res18 [16];
  
  if ((((*param_2 == 0) && (param_2[2] == 0)) && ((char)param_2[4] == -1)) &&
     (((char)param_2[6] == -1 && (*(longlong *)(param_2 + 8) == 0)))) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      *(undefined1 *)(param_1 + 0xc) = 0;
      return;
    }
  }
  else {
    param_1 = param_1 + 0x10;
    lVar1 = FUN_143122010(param_1,*param_2,&local_res10);
    lVar4 = 0;
    if ((char)local_res10 != '\0') {
      lVar4 = lVar1;
    }
    if (lVar4 != 0) {
      if (((param_2[2] == 0) && ((char)param_2[4] == -1)) &&
         (((char)param_2[6] == -1 && (*(longlong *)(param_2 + 8) == 0)))) {
        if (*(char *)(lVar4 + 0xc) != '\0') {
          *(undefined1 *)(lVar4 + 0xc) = 0;
        }
      }
      else {
        lVar2 = FUN_143122010(lVar4 + 0x10,param_2[2],&local_res10);
        lVar1 = 0;
        if ((char)local_res10 != '\0') {
          lVar1 = lVar2;
        }
        if (((lVar1 != 0) && (FUN_143139170(lVar1,param_2 + 4), *(char *)(lVar1 + 0xc) == '\0')) &&
           (*(int *)(lVar1 + 0x18) == 0)) {
          AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>
          ::Term(lVar1);
          uVar3 = FUN_143122010(lVar4 + 0x10,param_2[2],&local_res10);
          if ((char)local_res10 != '\0') {
            local_res10 = uVar3;
            FUN_143133b40(lVar4 + 0x10,local_res18,&local_res10);
          }
        }
        if (*(char *)(lVar4 + 0xc) != '\0') {
          return;
        }
      }
      if (*(int *)(lVar4 + 0x18) == 0) {
        AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>_>
        ::Term(lVar4);
        uVar3 = FUN_143122010(param_1,*param_2,&local_res10);
        if ((char)local_res10 != '\0') {
          local_res10 = uVar3;
          FUN_143133b40(param_1,local_res18,&local_res10);
        }
      }
    }
  }
  return;
}



// FUNCTION 143139490 FUN_143139490 body=200 status=ok
// SIG undefined FUN_143139490(void)

void FUN_143139490(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  
  if (((((*param_2 == 0) && ((int)param_2[1] == 0)) && ((int)param_2[2] == 0)) &&
      (((char)param_2[3] == -1 && ((char)param_2[4] == -1)))) && (param_2[5] == 0)) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      *(undefined1 *)(param_1 + 0xc) = 0;
      return;
    }
  }
  else {
    param_1 = param_1 + 0x10;
    lVar1 = FUN_1431220c0(param_1,*param_2,&local_res10);
    lVar3 = 0;
    if ((char)local_res10 != '\0') {
      lVar3 = lVar1;
    }
    if (((lVar3 != 0) && (FUN_143139310(lVar3,param_2 + 1), *(char *)(lVar3 + 0xc) == '\0')) &&
       (*(int *)(lVar3 + 0x18) == 0)) {
      AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidPlayingID,AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_long,GetInvalidUniqueID,AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>_>_>
      ::Term(lVar3);
      uVar2 = FUN_1431220c0(param_1,*param_2,&local_res10);
      if ((char)local_res10 != '\0') {
        local_res10 = uVar2;
        FUN_143133c30(param_1,local_res18,&local_res10);
      }
    }
  }
  return;
}



// FUNCTION 143139560 FUN_143139560 body=60 status=ok
// SIG undefined FUN_143139560(void)

char FUN_143139560(undefined8 param_1,undefined8 param_2)

{
  char local_res18 [8];
  undefined8 local_res20;
  undefined1 local_18 [16];
  
  local_res20 = FUN_143121f60(param_1,param_2,local_res18);
  if (local_res18[0] != '\0') {
    AkArray<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType_const_&___ptr64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,1,AkTransferMovePolicy<AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiCh,AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>_>,AkRTPCValue,AkRTPCNestedSearchTree<AkNestedKey<unsigned_char,GetInvalidMidiNote,AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>_>,AkRTPCValue,AkRTPCRootSearchTree<AkRootKey<CAkPBI_*___ptr64,GetNullPbiPtr>,AkRTPCValue>_>_>::ChildTreeType>_>
    ::Erase(param_1,local_18,&local_res20);
  }
  return local_res18[0];
}



// FUNCTION 1431395a0 FUN_1431395a0 body=119 status=ok
// SIG undefined FUN_1431395a0(void)

char FUN_1431395a0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char local_res18 [16];
  
  puVar2 = (undefined8 *)FUN_143121f60(param_1,param_2,local_res18);
  if (local_res18[0] != '\0') {
    puVar1 = (undefined8 *)(*param_1 + ((ulonglong)*(uint *)(param_1 + 1) * 5 + -5) * 8);
    while (puVar2 < puVar1) {
      FUN_143138d90(puVar2,puVar2 + 5);
      puVar2 = puVar2 + 5;
    }
    (**(code **)*puVar1)(puVar1,0);
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  }
  return local_res18[0];
}



// FUNCTION 143139620 FUN_143139620 body=60 status=ok
// SIG undefined FUN_143139620(void)

char FUN_143139620(undefined8 param_1,undefined8 param_2)

{
  char local_res18 [8];
  undefined8 local_res20;
  undefined1 local_18 [16];
  
  local_res20 = FUN_143122010(param_1,param_2,local_res18);
  if (local_res18[0] != '\0') {
    FUN_143133b40(param_1,local_18,&local_res20);
  }
  return local_res18[0];
}



// FUNCTION 143139660 FUN_143139660 body=172 status=ok
// SIG undefined FUN_143139660(void)

ulonglong FUN_143139660(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar7 = *(uint *)(param_1 + 1);
  uVar8 = (ulonglong)uVar7;
  iVar6 = 0;
  iVar5 = uVar7 - 1;
  if (-1 < iVar5) {
    do {
      uVar1 = (iVar5 - iVar6) / 2 + iVar6;
      in_RAX = (ulonglong)uVar1;
      puVar4 = (undefined8 *)((longlong)(int)uVar1 * 0x10 + *param_1);
      if (param_2 < (ulonglong)puVar4[1]) {
        iVar5 = uVar1 - 1;
      }
      else {
        if (param_2 <= (ulonglong)puVar4[1]) {
          puVar2 = (undefined8 *)(*param_1 + -0x10 + uVar8 * 0x10);
          if (puVar4 < puVar2) {
            uVar3 = ((ulonglong)((longlong)puVar2 + (-1 - (longlong)puVar4)) >> 3 &
                    0xfffffffffffffffe) + 2 & 0x1ffffffffffffffe;
            puVar2 = puVar4 + 2;
            for (; uVar3 != 0; uVar3 = uVar3 - 1) {
              *puVar4 = *puVar2;
              puVar2 = puVar2 + 1;
              puVar4 = puVar4 + 1;
            }
            uVar7 = *(uint *)(param_1 + 1);
          }
          *(uint *)(param_1 + 1) = uVar7 - 1;
          return CONCAT71((int7)(uVar8 * 0x10 >> 8),1);
        }
        iVar6 = uVar1 + 1;
      }
    } while (iVar6 <= iVar5);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143139710 FUN_143139710 body=60 status=ok
// SIG undefined FUN_143139710(void)

char FUN_143139710(undefined8 param_1,undefined8 param_2)

{
  char local_res18 [8];
  undefined8 local_res20;
  undefined1 local_18 [16];
  
  local_res20 = FUN_1431220c0(param_1,param_2,local_res18);
  if (local_res18[0] != '\0') {
    FUN_143133c30(param_1,local_18,&local_res20);
  }
  return local_res18[0];
}



// FUNCTION 143139750 FUN_143139750 body=108 status=ok
// SIG undefined FUN_143139750(void)

void FUN_143139750(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 *puVar4;
  char local_res18 [16];
  
  puVar1 = (undefined8 *)FUN_143133110(param_1,param_2,local_res18);
  if (local_res18[0] != '\0') {
    uVar3 = *(uint *)(param_1 + 1);
    puVar4 = (undefined8 *)(*param_1 + ((ulonglong)uVar3 - 1) * 8);
    if (puVar1 < puVar4) {
      lVar2 = ((ulonglong)((longlong)puVar4 + (-1 - (longlong)puVar1)) >> 3) + 1;
      puVar4 = puVar1;
      for (; puVar1 = puVar1 + 1, lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar1;
        puVar4 = puVar4 + 1;
      }
      uVar3 = *(uint *)(param_1 + 1);
    }
    *(uint *)(param_1 + 1) = uVar3 - 1;
  }
  return;
}



// FUNCTION 1431397c0 FUN_1431397c0 body=803 status=ok
// SIG undefined FUN_1431397c0(void)

void FUN_1431397c0(longlong *param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  uint *puVar4;
  uint uVar5;
  char cVar6;
  longlong lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  uint local_res10 [2];
  undefined4 local_res18 [4];
  undefined8 *puVar11;
  uint *puVar12;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  iVar2 = *(int *)(param_2 + 9);
  if (iVar2 == 2) {
                    /* WARNING: Could not recover jumptable at 0x0001431397ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_2 + 8))
              ((longlong *)*param_2,param_3 != 0,*(undefined4 *)(param_2 + 1));
    return;
  }
  if (iVar2 == 1) {
    iVar2 = *(int *)((longlong)param_2 + 0x4c);
    plVar3 = (longlong *)*param_2;
    if (param_3 == 0) {
      if (iVar2 == 3) {
        uVar8 = 0x3f800000;
      }
      else {
        uVar8 = 0;
      }
      (**(code **)(*plVar3 + 0x18))(plVar3,*(undefined4 *)(param_2 + 1),0,iVar2,uVar8,1);
    }
    else {
      local_78 = param_2[3];
      uStack_70 = param_2[4];
      local_68 = *(undefined4 *)(param_2 + 5);
      uStack_64 = *(undefined4 *)((longlong)param_2 + 0x2c);
      uStack_60 = *(undefined4 *)(param_2 + 6);
      uStack_5c = *(undefined4 *)((longlong)param_2 + 0x34);
      puVar12 = local_res10;
      puVar11 = &local_78;
      local_58 = *(undefined4 *)(param_2 + 7);
      uStack_54 = *(undefined4 *)((longlong)param_2 + 0x3c);
      uStack_50 = *(undefined4 *)(param_2 + 8);
      uStack_4c = *(undefined4 *)((longlong)param_2 + 0x44);
      if (iVar2 == 3) {
        cVar6 = FUN_143121c20(param_1,param_3,*(undefined4 *)(param_2 + 1),1,puVar11,puVar12,
                              local_res18);
        uVar8 = (undefined4)((ulonglong)puVar11 >> 0x20);
        if (cVar6 == '\0') {
          if (*(uint *)(param_1 + 1) != 0) {
            for (puVar4 = *(uint **)(*param_1 +
                                    ((ulonglong)param_3 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
                puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 2)) {
              if (*puVar4 == param_3) {
                if (puVar4 != (uint *)0x0) {
                  local_res10[0] = puVar4[4];
                  goto LAB_14313991d;
                }
                break;
              }
            }
          }
          local_res10[0] = 0;
        }
LAB_14313991d:
        uVar5 = local_res10[0];
        fVar10 = 1.0;
        if (((char)local_res18[0] == '\0') &&
           (lVar7 = param_2[10], lVar7 != lVar7 + (ulonglong)*(uint *)(param_2 + 0xb) * 0x18)) {
          lVar1 = lVar7 + (ulonglong)*(uint *)(param_2 + 0xb) * 0x18;
          do {
            if (*(uint *)(lVar7 + 4) == param_3) {
              fVar9 = (float)FUN_143131860(lVar7 + 8,uVar5,0,local_res18);
              fVar10 = fVar10 * fVar9;
            }
            uVar8 = (undefined4)((ulonglong)puVar11 >> 0x20);
            lVar7 = lVar7 + 0x18;
          } while (lVar7 != lVar1);
        }
      }
      else {
        cVar6 = FUN_143121c20(param_1,param_3,*(undefined4 *)(param_2 + 1),1,puVar11,puVar12,
                              local_res18);
        uVar8 = (undefined4)((ulonglong)puVar11 >> 0x20);
        fVar10 = 0.0;
        if (cVar6 == '\0') {
          if (*(uint *)(param_1 + 1) != 0) {
            for (puVar4 = *(uint **)(*param_1 +
                                    ((ulonglong)param_3 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
                puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 2)) {
              if (*puVar4 == param_3) {
                if (puVar4 != (uint *)0x0) {
                  local_res10[0] = puVar4[4];
                  goto LAB_1431399cf;
                }
                break;
              }
            }
          }
          local_res10[0] = 0;
        }
LAB_1431399cf:
        uVar5 = local_res10[0];
        if (((char)local_res18[0] == '\0') &&
           (lVar7 = param_2[10], lVar7 != lVar7 + (ulonglong)*(uint *)(param_2 + 0xb) * 0x18)) {
          lVar1 = lVar7 + (ulonglong)*(uint *)(param_2 + 0xb) * 0x18;
          do {
            if (*(uint *)(lVar7 + 4) == param_3) {
              fVar9 = (float)FUN_143131860(lVar7 + 8,uVar5,0,local_res18);
              fVar10 = fVar10 + fVar9;
            }
            uVar8 = (undefined4)((ulonglong)puVar11 >> 0x20);
            lVar7 = lVar7 + 0x18;
          } while (lVar7 != lVar1);
        }
      }
      (**(code **)(*plVar3 + 0x18))
                (plVar3,*(undefined4 *)(param_2 + 1),param_3,
                 *(undefined4 *)((longlong)param_2 + 0x4c),CONCAT44(uVar8,fVar10),
                 (ulonglong)puVar12 & 0xffffffffffffff00);
    }
  }
  else if (iVar2 == 0) {
    local_res18[0] = FUN_143132910(param_1,param_2,param_2 + 3);
    FUN_14317c840(*param_2,*(undefined2 *)(param_2 + 1),local_res18,4);
  }
  else if (iVar2 == 3) {
    uVar8 = FUN_143132910(param_1,param_2,param_2 + 3);
    FUN_14319ae20(*param_2,*(undefined4 *)(param_2 + 1),uVar8,param_2 + 3);
  }
  else if (iVar2 == 6) {
    uVar8 = FUN_143132910(param_1,param_2,param_2 + 3);
    CAkSwitchMgr::SetSwitchFromRTPCMgr(g_pSwitchMgr,*param_2,param_2 + 3,uVar8,0);
  }
  else {
    FUN_1431937b0(*param_2,param_3 != 0);
  }
  return;
}



// FUNCTION 143139af0 FUN_143139af0 body=512 status=ok
// SIG undefined FUN_143139af0(void)

bool FUN_143139af0(longlong param_1,char *param_2,char *param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  char local_res18 [8];
  
  if (*param_3 == -1) {
    return false;
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  lVar3 = FUN_143121f60(plVar1,*param_3,local_res18);
  lVar5 = 0;
  if (local_res18[0] != '\0') {
    lVar5 = lVar3;
  }
  if (lVar5 == 0) {
    iVar7 = *(int *)(param_1 + 0x18) + -1;
    iVar6 = 0;
    if (-1 < iVar7) {
      iVar6 = 0;
      do {
        iVar6 = iVar6 + (iVar7 - iVar6) / 2;
        lVar3 = *plVar1 + (longlong)iVar6 * 0x28;
        if (*(char *)(*plVar1 + 0x20 + (longlong)iVar6 * 0x28) == -1) {
          bVar2 = true;
          goto LAB_143139b85;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 <= iVar7);
    }
    bVar2 = false;
    if (*plVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *plVar1 + (longlong)iVar6 * 0x28;
    }
LAB_143139b85:
    lVar5 = 0;
    if (bVar2) {
      lVar5 = lVar3;
    }
  }
  if (((*param_2 == -1) && (param_2[8] == -1)) && (*(longlong *)(param_2 + 0x10) == 0)) {
    return lVar5 != 0;
  }
  if (lVar5 == 0) {
    return false;
  }
  if (param_3[8] != -1) {
    plVar1 = (longlong *)(lVar5 + 0x10);
    lVar4 = FUN_143121f60(plVar1,param_3[8],local_res18);
    lVar3 = 0;
    if (local_res18[0] != '\0') {
      lVar3 = lVar4;
    }
    if (lVar3 == 0) {
      iVar7 = *(int *)(lVar5 + 0x18) + -1;
      iVar6 = 0;
      if (-1 < iVar7) {
        iVar6 = 0;
        do {
          iVar6 = iVar6 + (iVar7 - iVar6) / 2;
          lVar5 = *plVar1 + (longlong)iVar6 * 0x28;
          if (*(char *)(*plVar1 + 0x20 + (longlong)iVar6 * 0x28) == -1) {
            bVar2 = true;
            goto LAB_143139c47;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 <= iVar7);
      }
      bVar2 = false;
      if (*plVar1 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *plVar1 + (longlong)iVar6 * 0x28;
      }
LAB_143139c47:
      lVar3 = 0;
      if (bVar2) {
        lVar3 = lVar5;
      }
    }
    if ((param_2[8] == -1) && (*(longlong *)(param_2 + 0x10) == 0)) {
      return lVar3 != 0;
    }
    if (((lVar3 != 0) && (*(longlong *)(param_2 + 0x10) == 0)) &&
       (*(longlong *)(param_3 + 0x10) != 0)) {
      lVar5 = FUN_143122170(lVar3 + 0x10);
      return lVar5 != 0;
    }
  }
  return false;
}



// FUNCTION 143139cf0 FUN_143139cf0 body=437 status=ok
// SIG undefined FUN_143139cf0(void)

bool FUN_143139cf0(longlong param_1,int *param_2,int *param_3)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char local_res18 [8];
  
  if (*param_3 == 0) {
    return false;
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  lVar5 = FUN_143122010(plVar1,*param_3,local_res18);
  lVar7 = 0;
  if (local_res18[0] != '\0') {
    lVar7 = lVar5;
  }
  if (lVar7 == 0) {
    iVar4 = *(int *)(param_1 + 0x18) + -1;
    if (-1 < iVar4) {
      do {
        iVar4 = iVar4 / 2;
        lVar5 = *plVar1 + (longlong)iVar4 * 0x28;
        if (*(int *)(*plVar1 + 0x20 + (longlong)iVar4 * 0x28) == 0) {
          bVar2 = true;
          goto LAB_143139d64;
        }
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
    lVar5 = *plVar1;
    bVar2 = false;
LAB_143139d64:
    lVar7 = 0;
    if (bVar2) {
      lVar7 = lVar5;
    }
  }
  if ((((*param_2 == 0) && (param_2[2] == 0)) && ((char)param_2[4] == -1)) &&
     (((char)param_2[6] == -1 && (*(longlong *)(param_2 + 8) == 0)))) {
    return lVar7 != 0;
  }
  if (lVar7 == 0) {
    return false;
  }
  uVar3 = 0;
  if (param_3[2] != 0) {
    plVar1 = (longlong *)(lVar7 + 0x10);
    lVar6 = FUN_143122010(plVar1,param_3[2],local_res18);
    lVar5 = 0;
    if (local_res18[0] != '\0') {
      lVar5 = lVar6;
    }
    if (lVar5 == 0) {
      iVar4 = *(int *)(lVar7 + 0x18) + -1;
      if (-1 < iVar4) {
        do {
          iVar4 = iVar4 / 2;
          lVar7 = *plVar1 + (longlong)iVar4 * 0x28;
          if (*(int *)(*plVar1 + 0x20 + (longlong)iVar4 * 0x28) == 0) {
            bVar2 = true;
            goto LAB_143139e14;
          }
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
      }
      lVar7 = *plVar1;
      bVar2 = false;
LAB_143139e14:
      lVar5 = 0;
      if (bVar2) {
        lVar5 = lVar7;
      }
    }
    if (((param_2[2] == 0) && ((char)param_2[4] == -1)) &&
       (((char)param_2[6] == -1 && (*(longlong *)(param_2 + 8) == 0)))) {
      return lVar5 != 0;
    }
    if (lVar5 != 0) {
      uVar3 = FUN_143139af0(lVar5,param_2 + 4,param_3 + 4);
    }
  }
  return (bool)uVar3;
}



// FUNCTION 143139eb0 CAkModulatorMgr body=20 status=ok
// SIG undefined CAkModulatorMgr(void)

undefined8 * CAkModulatorMgr::CAkModulatorMgr(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 143139ed0 FUN_143139ed0 body=389 status=ok
// SIG undefined FUN_143139ed0(void)

undefined8 FUN_143139ed0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  char local_res8 [8];
  
  lVar4 = FUN_143133110(param_1 + 0xc,param_2,local_res8);
  lVar5 = 0;
  if (local_res8[0] != '\0') {
    lVar5 = lVar4;
  }
  if (lVar5 != 0) {
    return 1;
  }
  lVar5 = FUN_143133110(param_1 + 0xc,param_2,local_res8);
  uVar1 = *(uint *)(param_1 + 0xd);
  if (lVar5 == 0) {
    if ((*(uint *)((longlong)param_1 + 0x6c) <= uVar1) &&
       (cVar2 = FUN_1431344e0(param_1 + 0xc,2), cVar2 == '\0')) {
      return 0x34;
    }
    if (*(uint *)((longlong)param_1 + 0x6c) <= uVar1) {
      return 0x34;
    }
    plVar8 = (longlong *)(param_1[0xc] + (ulonglong)*(uint *)(param_1 + 0xd) * 8);
    *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) + 1;
    if (plVar8 == (longlong *)0x0) {
      return 0x34;
    }
    *plVar8 = 0;
  }
  else {
    lVar4 = param_1[0xc];
    if ((*(uint *)((longlong)param_1 + 0x6c) <= uVar1) &&
       (cVar2 = FUN_1431344e0(param_1 + 0xc,2), cVar2 == '\0')) {
      return 0x34;
    }
    if (*(uint *)((longlong)param_1 + 0x6c) <= uVar1) {
      return 0x34;
    }
    lVar6 = param_1[0xc];
    puVar7 = (undefined8 *)(lVar6 + (ulonglong)*(uint *)(param_1 + 0xd) * 8);
    *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) + 1;
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      lVar6 = param_1[0xc];
    }
    lVar5 = (lVar5 - lVar4 >> 3 & 0xffffffffU) * 8;
    if ((undefined8 *)(lVar5 + lVar6) < puVar7) {
      do {
        *puVar7 = puVar7[-1];
        puVar7 = puVar7 + -1;
        lVar6 = param_1[0xc];
      } while ((undefined8 *)(lVar6 + lVar5) < puVar7);
    }
    if ((undefined8 *)(lVar5 + lVar6) != (undefined8 *)0x0) {
      *(undefined8 *)(lVar5 + lVar6) = 0;
      lVar6 = param_1[0xc];
    }
    plVar8 = (longlong *)(lVar5 + lVar6);
  }
  if (plVar8 == (longlong *)0x0) {
    return 0x34;
  }
  *plVar8 = param_2;
  if ((*(int *)(param_2 + 0x48) == 1) ||
     (((*(int *)(param_2 + 8) != 0 && (*(int *)(param_2 + 8) != 7)) ||
      (cVar2 = (**(code **)(*param_1 + 0x30))(param_1), cVar2 == '\0')))) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) | bVar3;
  return 1;
}



// FUNCTION 14313a060 FUN_14313a060 body=509 status=ok
// SIG undefined FUN_14313a060(void)

undefined4 FUN_14313a060(longlong *param_1,undefined8 param_2,ulonglong *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  char cVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  void *pvVar11;
  void *pvVar12;
  longlong *plVar13;
  
  uVar7 = 2;
  plVar8 = (longlong *)
           CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(DAT_146b50af8 + 0x1c0);
  if (plVar8 == (longlong *)0x0) {
    return 2;
  }
  plVar13 = (longlong *)0x0;
  if (*(uint *)(param_1 + 1) == 0) {
LAB_14313a0e7:
    plVar9 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x20);
    if (plVar9 == (longlong *)0x0) goto LAB_14313a231;
    plVar9[2] = 0;
    plVar9[3] = 0;
    *plVar9 = 0;
    plVar9[1] = 0;
    plVar9[2] = *param_3;
    cVar6 = FUN_14313a260(param_1);
    if (cVar6 == '\0') {
      AK::MemoryMgr::Free(g_DefaultPoolId,plVar9);
      goto LAB_14313a231;
    }
    uVar3 = *(uint *)(param_1 + 1);
    plVar9[3] = *(longlong *)(*param_1 + ((ulonglong)*(uint *)(plVar9 + 2) % (ulonglong)uVar3) * 8);
    *(longlong **)(*param_1 + ((ulonglong)*(uint *)(plVar9 + 2) % (ulonglong)uVar3) * 8) = plVar9;
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  else {
    for (plVar5 = *(longlong **)
                   (*param_1 + ((*param_3 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        (plVar9 = plVar13, plVar5 != (longlong *)0x0 && (plVar9 = plVar5, plVar5[2] != *param_3));
        plVar5 = (longlong *)plVar5[3]) {
    }
    if (plVar9 == (longlong *)0x0) goto LAB_14313a0e7;
  }
  plVar10 = (longlong *)*plVar9;
  uVar3 = *(uint *)(plVar9 + 1);
  plVar5 = plVar10 + uVar3;
  for (; plVar10 != plVar5; plVar10 = plVar10 + 1) {
    if ((longlong *)*plVar10 == plVar8) goto LAB_14313a213;
  }
  if (*(uint *)((longlong)plVar9 + 0xc) <= uVar3) {
    uVar1 = *(uint *)((longlong)plVar9 + 0xc) + 1;
    pvVar11 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 3);
    if (pvVar11 == (void *)0x0) goto LAB_14313a231;
    pvVar12 = (void *)*plVar9;
    if ((pvVar12 != (void *)0x0) && (pvVar12 != pvVar11)) {
      uVar4 = *(uint *)(plVar9 + 1);
      if ((longlong *)(ulonglong)uVar4 != (longlong *)0x0) {
        do {
          *(undefined8 *)((longlong)pvVar11 + (longlong)plVar13 * 8) =
               *(undefined8 *)(*plVar9 + (longlong)plVar13 * 8);
          plVar13 = (longlong *)((longlong)plVar13 + 1);
        } while (plVar13 < (longlong *)(ulonglong)uVar4);
        pvVar12 = (void *)*plVar9;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar12);
    }
    *(uint *)((longlong)plVar9 + 0xc) = uVar1;
    *plVar9 = (longlong)pvVar11;
    if (uVar1 <= uVar3) goto LAB_14313a231;
  }
  uVar3 = *(uint *)(plVar9 + 1);
  *(uint *)(plVar9 + 1) = uVar3 + 1;
  puVar2 = (undefined8 *)(*plVar9 + (ulonglong)uVar3 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = plVar8;
    (**(code **)(*plVar8 + 8))(plVar8);
LAB_14313a213:
    uVar7 = FUN_143139ed0(plVar8,param_3);
  }
LAB_14313a231:
  (**(code **)(*plVar8 + 0x10))(plVar8);
  return uVar7;
}



// FUNCTION 14313a260 FUN_14313a260 body=359 status=ok
// SIG undefined FUN_14313a260(void)

bool FUN_14313a260(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  uint *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar11 = (ulonglong)uVar2;
  if ((uVar2 == 0) || (0.9 < (float)*(uint *)(param_1 + 2) / (float)uVar11)) {
    puVar10 = &DAT_145ac6e60;
    uVar9 = 0;
    do {
      uVar3 = *puVar10;
      uVar12 = (ulonglong)uVar3;
      if (uVar2 < uVar3) {
        if (uVar3 != 0) {
          uVar4 = *(undefined4 *)((longlong)param_1 + 0xc);
          plVar5 = (longlong *)*param_1;
          *param_1 = 0;
          param_1[1] = 0;
          cVar8 = FUN_143134440(param_1);
          if (cVar8 == '\0') {
            if ((void *)*param_1 != (void *)0x0) {
              *(undefined4 *)(param_1 + 1) = 0;
              AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
            }
            *param_1 = (longlong)plVar5;
            *(uint *)(param_1 + 1) = uVar2;
            *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
          }
          else {
            if (uVar3 != 0) {
              do {
                uVar9 = *(uint *)(param_1 + 1);
                if (uVar9 < *(uint *)((longlong)param_1 + 0xc)) {
                  *(uint *)(param_1 + 1) = uVar9 + 1;
                  puVar1 = (undefined8 *)(*param_1 + (ulonglong)uVar9 * 8);
                  if (puVar1 != (undefined8 *)0x0) {
                    *puVar1 = 0;
                  }
                }
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            plVar13 = plVar5;
            if (uVar2 != 0) {
              do {
                lVar7 = *plVar13;
                while (lVar7 != 0) {
                  lVar6 = *(longlong *)(lVar7 + 0x18);
                  uVar12 = (ulonglong)*(uint *)(lVar7 + 0x10) % (ulonglong)uVar3;
                  *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(*param_1 + uVar12 * 8);
                  *(longlong *)(*param_1 + uVar12 * 8) = lVar7;
                  lVar7 = lVar6;
                }
                uVar11 = uVar11 - 1;
                plVar13 = plVar13 + 1;
              } while (uVar11 != 0);
            }
            if (plVar5 != (longlong *)0x0) {
              AK::MemoryMgr::Free(g_DefaultPoolId,plVar5);
            }
          }
        }
        break;
      }
      uVar9 = uVar9 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar9 < 0x1b);
  }
  return (int)param_1[1] != 0;
}



// FUNCTION 14313a3d0 FUN_14313a3d0 body=14 status=ok
// SIG undefined FUN_14313a3d0(void)

void FUN_14313a3d0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  char cVar7;
  undefined8 *puVar8;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    puVar2 = *(undefined8 **)(piVar1 + 4);
    puVar8 = (undefined8 *)0x0;
    puVar3 = (undefined8 *)0x0;
    while (puVar5 = puVar8, puVar4 = puVar2, puVar4 != (undefined8 *)0x0) {
      cVar7 = CAkModulatorCtx::IsFinished(puVar4);
      puVar2 = (undefined8 *)puVar4[1];
      puVar8 = puVar4;
      if (cVar7 != '\0') {
        if (puVar4 == *(undefined8 **)(piVar1 + 4)) {
          *(undefined8 **)(piVar1 + 4) = puVar2;
        }
        else {
          puVar5[1] = puVar2;
        }
        if (puVar4 == *(undefined8 **)(piVar1 + 2)) {
          *(undefined8 **)(piVar1 + 2) = puVar5;
        }
        *piVar1 = *piVar1 + -1;
        puVar8 = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          puVar8 = puVar3;
        }
        puVar4[1] = puVar8;
        puVar8 = puVar5;
        puVar3 = puVar4;
      }
    }
    while (puVar2 = puVar3, puVar2 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)puVar2[1];
      FUN_1431c1760(puVar2);
      piVar1 = (int *)((longlong)puVar2 + 0x74);
      *piVar1 = *piVar1 + -1;
      lVar6 = g_DefaultPoolId;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,0);
        AK::MemoryMgr::Free(lVar6,puVar2);
      }
    }
    return;
  }
  return;
}



// FUNCTION 14313a3e0 FUN_14313a3e0 body=109 status=ok
// SIG undefined FUN_14313a3e0(void)

undefined1
FUN_14313a3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)
           CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(DAT_146b50af8 + 0x1c0);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = FUN_1431980c0(plVar2,param_3,param_4);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14313a450 FUN_14313a450 body=374 status=ok
// SIG undefined FUN_14313a450(void)

void FUN_14313a450(longlong *param_1,ulonglong *param_2,longlong *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  void *pvVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  void *pvVar16;
  ulonglong uVar17;
  
  if (*(uint *)(param_1 + 1) != 0) {
    lVar12 = *(longlong *)
              (*param_1 + ((*param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 1)) * 8);
    if (lVar12 != 0) {
      while (*(ulonglong *)(lVar12 + 0x10) != *param_2) {
        lVar12 = *(longlong *)(lVar12 + 0x18);
        if (lVar12 == 0) {
          return;
        }
      }
      if (lVar12 != 0) {
        uVar10 = *param_2;
        uVar7 = *(undefined4 *)((longlong)param_2 + 4);
        uVar11 = param_2[1];
        uVar8 = *(undefined4 *)((longlong)param_2 + 0xc);
        uVar4 = param_2[2];
        uVar5 = *(uint *)(param_3 + 1);
        if (*(uint *)((longlong)param_3 + 0xc) <= uVar5) {
          uVar1 = *(uint *)((longlong)param_3 + 0xc) + 8;
          pvVar13 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 5);
          if (pvVar13 == (void *)0x0) {
            return;
          }
          pvVar16 = (void *)*param_3;
          if ((pvVar16 != (void *)0x0) && (pvVar16 != pvVar13)) {
            uVar17 = (ulonglong)*(uint *)(param_3 + 1);
            if (uVar17 != 0) {
              puVar15 = (undefined8 *)((longlong)pvVar13 + 0x10);
              do {
                puVar3 = puVar15 + -2;
                if (puVar3 != (undefined8 *)0x0) {
                  *puVar3 = 0;
                  puVar15[-1] = 0;
                  *puVar15 = 1;
                  puVar15[1] = 0;
                }
                lVar6 = *param_3;
                puVar2 = (undefined8 *)((longlong)puVar15 + lVar6 + -(longlong)pvVar13 + -0x10);
                uVar9 = puVar2[1];
                *puVar3 = *puVar2;
                puVar15[-1] = uVar9;
                puVar3 = (undefined8 *)((longlong)puVar15 + lVar6 + -(longlong)pvVar13);
                uVar9 = puVar3[1];
                *puVar15 = *puVar3;
                puVar15[1] = uVar9;
                uVar17 = uVar17 - 1;
                puVar15 = puVar15 + 4;
              } while (uVar17 != 0);
              pvVar16 = (void *)*param_3;
            }
            AK::MemoryMgr::Free(g_DefaultPoolId,pvVar16);
          }
          *param_3 = (longlong)pvVar13;
          *(uint *)((longlong)param_3 + 0xc) = uVar1;
          if (uVar1 <= uVar5) {
            return;
          }
        }
        uVar5 = *(uint *)(param_3 + 1);
        *(uint *)(param_3 + 1) = uVar5 + 1;
        puVar14 = (undefined4 *)((ulonglong)uVar5 * 0x20 + *param_3);
        if (puVar14 != (undefined4 *)0x0) {
          *puVar14 = (int)uVar10;
          puVar14[1] = uVar7;
          puVar14[2] = (int)uVar11;
          puVar14[3] = uVar8;
          *(ulonglong *)(puVar14 + 4) = uVar4;
          *(longlong *)(puVar14 + 6) = lVar12;
        }
      }
    }
  }
  return;
}



// FUNCTION 14313a5d0 FUN_14313a5d0 body=868 status=ok
// SIG undefined FUN_14313a5d0(void)

undefined8
FUN_14313a5d0(undefined8 param_1,undefined8 param_2,float param_3,int param_4,undefined8 param_5,
             float *param_6)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_e0;
  float local_d0;
  
  uVar5 = 0;
  lVar3 = CAkRTPCMgr::GetSubscription(g_pRTPCMgr);
  if ((((lVar3 != 0) && (*(int *)(lVar3 + 0x48) != 1)) &&
      ((param_3 == 0.0 || (param_3 == 9.80909e-45)))) &&
     (plVar4 = (longlong *)
               CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef
                         (DAT_146b50af8 + 0x1c0,param_4), plVar4 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar4 + 0x30))(plVar4);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((cVar2 != '\0') &&
       (lVar7 = *(longlong *)(lVar3 + 0x50),
       lVar7 != lVar7 + (ulonglong)*(uint *)(lVar3 + 0x58) * 0x18)) {
      puVar8 = (undefined8 *)(lVar7 + 8);
      do {
        if (*(int *)((longlong)puVar8 + -4) == param_4) {
          param_6[2] = param_3;
          uVar5 = *(undefined8 *)((longlong)*puVar8 + 0xc);
          uVar1 = *(undefined8 *)*puVar8;
          fVar9 = (float)FUN_14312f210(puVar8,(int)((ulonglong)uVar5 >> 0x20));
          fVar10 = (float)FUN_14312f210(puVar8,(int)((ulonglong)uVar1 >> 0x20));
          if (-37.0 <= fVar10 * 0.05) {
            uVar6 = (uint)(longlong)(fVar10 * 0.05 * 27866352.0 + 1.0653532e+09);
            fVar10 = (float)((uVar6 & 0x7fffff) + 0x3f800000);
            fVar10 = ((fVar10 * 0.32518977 + 0.020805772) * fVar10 + 0.65304345) *
                     (float)(uVar6 & 0xff800000);
          }
          else {
            fVar10 = 0.0;
          }
          if (-37.0 <= fVar9 * 0.05) {
            uVar6 = (uint)(longlong)(fVar9 * 0.05 * 27866352.0 + 1.0653532e+09);
            fVar9 = (float)((uVar6 & 0x7fffff) + 0x3f800000);
            fVar9 = ((fVar9 * 0.32518977 + 0.020805772) * fVar9 + 0.65304345) *
                    (float)(uVar6 & 0xff800000);
          }
          else {
            fVar9 = 0.0;
          }
          local_d0 = (float)uVar1;
          local_e0 = (float)uVar5;
          uVar5 = 1;
          fVar11 = fVar10 - (local_d0 / (local_e0 - local_d0)) * (fVar9 - fVar10);
          *param_6 = fVar11;
          param_6[1] = (((1.0 - local_d0) / (local_e0 - local_d0)) * (fVar9 - fVar10) + fVar10) -
                       fVar11;
        }
        lVar7 = lVar7 + 0x18;
        puVar8 = puVar8 + 3;
      } while (lVar7 != *(longlong *)(lVar3 + 0x50) + (ulonglong)*(uint *)(lVar3 + 0x58) * 0x18);
    }
  }
  return uVar5;
}



// FUNCTION 14313a940 GetRTPCKey body=93 status=ok
// SIG undefined GetRTPCKey(void)

undefined8 * AkModulatorTriggerParams::GetRTPCKey(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined1 *)(param_2 + 3) = 0xff;
  *(undefined1 *)(param_2 + 4) = 0xff;
  param_2[5] = 0;
  *param_2 = *param_1;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)((longlong)param_1 + 9);
  if (((*(char *)(param_1 + 1) + 0x80U & 0xcf) == 0) && (*(char *)(param_1 + 1) != -0x50)) {
    uVar1 = *(undefined1 *)((longlong)param_1 + 10);
  }
  else {
    uVar1 = 0xff;
  }
  *(undefined1 *)(param_2 + 4) = uVar1;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 3);
  param_2[5] = param_1[5];
  return param_2;
}



// FUNCTION 14313a9a0 Init body=126 status=ok
// SIG undefined Init(void)

undefined8 CAkModulatorMgr::Init(longlong param_1)

{
  void *_Dst;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  _Dst = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x60);
  *(void **)(param_1 + 0x18) = _Dst;
  if (_Dst != (void *)0x0) {
    ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x60);
    *(undefined8 *)((longlong)_Dst + 0x20) = 0;
    *(undefined8 *)((longlong)_Dst + 0x28) = 0;
    *(undefined4 *)((longlong)_Dst + 0x30) = 0;
    *(undefined8 *)((longlong)_Dst + 0x38) = 0;
    *(undefined8 *)((longlong)_Dst + 0x40) = 0;
    *(undefined4 *)((longlong)_Dst + 0x48) = 0;
    *(undefined8 *)((longlong)_Dst + 0x50) = 0;
    *(undefined8 *)((longlong)_Dst + 0x58) = 0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      return 1;
    }
  }
  return 0x34;
}



// FUNCTION 14313aa20 ProcessModulators body=237 status=ok
// SIG undefined ProcessModulators(void)

void CAkModulatorMgr::ProcessModulators(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  FUN_14319e660(*(undefined8 *)(param_1 + 0x18),DAT_1467bdcb8);
  lVar1 = DAT_146b50af8;
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b50af8 + 0x1c0));
  lVar2 = DAT_146b50af8;
  if (*(uint *)(DAT_146b50af8 + 0x1f0) != 0) {
    uVar5 = 0;
    lVar3 = **(longlong **)(DAT_146b50af8 + 0x1e8);
    while (lVar3 == 0) {
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      if (*(uint *)(DAT_146b50af8 + 0x1f0) <= uVar4) goto joined_r0x00014313aa97;
      lVar3 = (*(longlong **)(DAT_146b50af8 + 0x1e8))[uVar5];
    }
    do {
      while( true ) {
        CAkModulator::NotifySubscribers(lVar3);
        lVar3 = *(longlong *)(lVar3 + 8);
        if (lVar3 != 0) break;
        do {
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
          if (*(uint *)(lVar2 + 0x1f0) <= uVar4) goto joined_r0x00014313aa97;
          lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x1e8) + uVar5 * 8);
        } while (lVar3 == 0);
      }
joined_r0x00014313aa97:
    } while (lVar3 != 0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x1c0));
  CAkModulatorEngine::CleanUpFinishedCtxs(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 14313ab10 FUN_14313ab10 body=591 status=ok
// SIG undefined FUN_14313ab10(void)

void FUN_14313ab10(longlong *param_1,ulonglong *param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  char local_res10 [8];
  int local_res18;
  
  if (*(uint *)(param_1 + 1) != 0) {
    for (plVar13 = *(longlong **)
                    (*param_1 + ((*param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 1)) * 8);
        (plVar9 = (longlong *)0x0, plVar13 != (longlong *)0x0 &&
        (plVar9 = plVar13, plVar13[2] != *param_2)); plVar13 = (longlong *)plVar13[3]) {
    }
    if (plVar9 != (longlong *)0x0) {
      uVar8 = *(uint *)(plVar9 + 1);
      plVar13 = (longlong *)*plVar9;
      plVar12 = plVar13;
      local_res18 = param_3;
      if (plVar13 != plVar13 + uVar8) {
        do {
          plVar13 = (longlong *)*plVar12;
          if ((param_3 == 0) || ((int)plVar13[2] == param_3)) {
            uVar4 = param_2[10];
            uVar1 = uVar4 + (ulonglong)(uint)param_2[0xb] * 0x18;
            if (uVar4 != uVar1) {
              do {
                if (*(int *)(uVar4 + 4) == (int)plVar13[2]) goto LAB_14313ad14;
                uVar4 = uVar4 + 0x18;
              } while (uVar4 != uVar1);
            }
            puVar5 = (undefined8 *)FUN_143133110(plVar13 + 0xc,param_2,local_res10);
            if (local_res10[0] != '\0') {
              uVar8 = *(uint *)(plVar13 + 0xd);
              puVar6 = (undefined8 *)(plVar13[0xc] + (ulonglong)uVar8 * 8 + -8);
              if (puVar5 < puVar6) {
                lVar7 = ((ulonglong)((longlong)puVar6 + (-1 - (longlong)puVar5)) >> 3) + 1;
                puVar6 = puVar5;
                for (; puVar5 = puVar5 + 1, lVar7 != 0; lVar7 = lVar7 + -1) {
                  *puVar6 = *puVar5;
                  puVar6 = puVar6 + 1;
                }
                uVar8 = *(uint *)(plVar13 + 0xd);
              }
              *(uint *)(plVar13 + 0xd) = uVar8 - 1;
            }
            puVar6 = (undefined8 *)plVar13[0xc];
            puVar5 = puVar6 + *(uint *)(plVar13 + 0xd);
            for (; puVar6 != puVar5; puVar6 = puVar6 + 1) {
              if (*(ulonglong *)*puVar6 == *param_2) goto LAB_14313ad14;
            }
            uVar8 = *(uint *)(plVar9 + 1);
            plVar10 = (longlong *)(*plVar9 + ((ulonglong)uVar8 - 1) * 8);
            if (plVar12 < plVar10) {
              lVar7 = ((ulonglong)((longlong)plVar10 + (-1 - (longlong)plVar12)) >> 3) + 1;
              plVar11 = plVar12;
              plVar10 = plVar12;
              for (; plVar10 = plVar10 + 1, lVar7 != 0; lVar7 = lVar7 + -1) {
                *plVar11 = *plVar10;
                plVar11 = plVar11 + 1;
              }
              uVar8 = *(uint *)(plVar9 + 1);
            }
            *(uint *)(plVar9 + 1) = uVar8 - 1;
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
          else {
LAB_14313ad14:
            plVar12 = plVar12 + 1;
          }
          uVar8 = *(uint *)(plVar9 + 1);
          plVar13 = (longlong *)*plVar9;
        } while (plVar12 != plVar13 + uVar8);
      }
      if (uVar8 == 0) {
        if (plVar13 != (longlong *)0x0) {
          *(undefined4 *)(plVar9 + 1) = 0;
          AK::MemoryMgr::Free(g_DefaultPoolId,plVar13);
          *plVar9 = 0;
          *(undefined4 *)((longlong)plVar9 + 0xc) = 0;
        }
        if (*(uint *)(param_1 + 1) != 0) {
          plVar13 = (longlong *)
                    (*param_1 + ((*param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 1)) * 8);
          lVar3 = *plVar13;
          lVar7 = 0;
          while (lVar2 = lVar3, lVar2 != 0) {
            if (*(ulonglong *)(lVar2 + 0x10) == *param_2) {
              if (lVar7 == 0) {
                *plVar13 = *(longlong *)(lVar2 + 0x18);
              }
              else {
                *(longlong *)(lVar7 + 0x18) = *(longlong *)(lVar2 + 0x18);
              }
              *(int *)(param_1 + 2) = (int)param_1[2] + -1;
              break;
            }
            lVar7 = lVar2;
            lVar3 = *(longlong *)(lVar2 + 0x18);
          }
        }
        AK::MemoryMgr::Free(g_DefaultPoolId,plVar9);
      }
    }
  }
  return;
}



// FUNCTION 14313ad60 FUN_14313ad60 body=71 status=ok
// SIG undefined FUN_14313ad60(void)

void FUN_14313ad60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(DAT_146b50af8 + 0x1c0);
  if (plVar1 != (longlong *)0x0) {
    CAkModulator::RemoveCtxsMatchingKey(plVar1,param_3);
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}



// FUNCTION 14313adb0 FUN_14313adb0 body=79 status=ok
// SIG undefined FUN_14313adb0(void)

undefined1 FUN_14313adb0(void)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)
           CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(DAT_146b50af8 + 0x1c0);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14313ae00 Term body=111 status=ok
// SIG undefined Term(void)

void CAkModulatorMgr::Term(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  
  if ((void *)*param_1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  lVar2 = g_DefaultPoolId;
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    CAkModulatorEngine::~CAkModulatorEngine(pvVar1);
    AK::MemoryMgr::Free(lVar2,pvVar1);
    param_1[3] = 0;
  }
  return;
}



// FUNCTION 14313ae70 TermModulatorEngine body=75 status=ok
// SIG undefined TermModulatorEngine(void)

void CAkModulatorMgr::TermModulatorEngine(longlong param_1)

{
  void *pvVar1;
  long lVar2;
  
  lVar2 = g_DefaultPoolId;
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    CAkModulatorEngine::~CAkModulatorEngine(pvVar1);
    AK::MemoryMgr::Free(lVar2,pvVar1);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14313aec0 Trigger body=330 status=ok
// SIG undefined Trigger(void)

int CAkModulatorMgr::Trigger
              (longlong *param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  iVar6 = 1;
  if (*(uint *)(param_1 + 1) != 0) {
    puVar3 = *(ulonglong **)
              (*param_1 + ((*param_2 & 0xffffffff) % (ulonglong)*(uint *)(param_1 + 1)) * 8);
    if (puVar3 != (ulonglong *)0x0) {
      while (puVar3[2] != *param_2) {
        puVar3 = (ulonglong *)puVar3[3];
        if (puVar3 == (ulonglong *)0x0) {
          return 1;
        }
      }
      if (puVar3 != (ulonglong *)0x0) {
        puVar4 = (undefined8 *)*puVar3;
        uVar5 = 0;
        uVar7 = (ulonglong)(uint)puVar3[1];
        if (puVar4 + uVar7 < puVar4) {
          uVar7 = 0;
        }
        if (uVar7 != 0) {
          do {
            uVar1 = *puVar4;
            iVar2 = FUN_14319b8d0(uVar1,param_2,param_3,param_1[3],param_4);
            if ((iVar6 != 1) || (iVar2 != 1)) {
              iVar6 = 2;
            }
            local_34 = *(undefined4 *)((longlong)param_2 + 0x14);
            local_40 = 0;
            local_38 = 3;
            local_48 = uVar1;
            Trigger(param_1,&local_48,param_3,param_4);
            puVar4 = puVar4 + 1;
            uVar5 = uVar5 + 1;
          } while (uVar5 != uVar7);
        }
      }
    }
  }
  return iVar6;
}



// FUNCTION 14313b010 Trigger body=299 status=ok
// SIG undefined Trigger(void)

int CAkModulatorMgr::Trigger
              (longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  
  lVar3 = *param_2;
  iVar4 = 1;
  lVar5 = (ulonglong)*(uint *)(param_2 + 1) * 0x20 + lVar3;
  for (; lVar3 != lVar5; lVar3 = lVar3 + 0x20) {
    uVar8 = 0;
    puVar6 = (undefined8 *)**(ulonglong **)(lVar3 + 0x18);
    uVar7 = (ulonglong)(uint)(*(ulonglong **)(lVar3 + 0x18))[1];
    if (puVar6 + uVar7 < puVar6) {
      uVar7 = uVar8;
    }
    if (uVar7 != 0) {
      do {
        uVar1 = *puVar6;
        iVar2 = FUN_14319b8d0(uVar1,lVar3,param_3,*(undefined8 *)(param_1 + 0x18),param_4);
        if ((iVar4 != 1) || (iVar2 != 1)) {
          iVar4 = 2;
        }
        local_50 = *(undefined8 *)(lVar3 + 8);
        local_44 = *(undefined4 *)(lVar3 + 0x14);
        local_48 = 3;
        local_58 = uVar1;
        Trigger(param_1,&local_58,param_3,param_4);
        puVar6 = puVar6 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar7);
    }
  }
  return iVar4;
}



// FUNCTION 14313b140 FUN_14313b140 body=359 status=ok
// SIG undefined FUN_14313b140(void)

bool FUN_14313b140(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  uint *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar11 = (ulonglong)uVar2;
  if ((uVar2 == 0) || (0.9 < (float)*(uint *)(param_1 + 2) / (float)uVar11)) {
    puVar10 = &DAT_145ac6ed0;
    uVar9 = 0;
    do {
      uVar3 = *puVar10;
      uVar12 = (ulonglong)uVar3;
      if (uVar2 < uVar3) {
        if (uVar3 != 0) {
          uVar4 = *(undefined4 *)((longlong)param_1 + 0xc);
          plVar5 = (longlong *)*param_1;
          *param_1 = 0;
          param_1[1] = 0;
          cVar8 = FUN_143134440(param_1);
          if (cVar8 == '\0') {
            if ((void *)*param_1 != (void *)0x0) {
              *(undefined4 *)(param_1 + 1) = 0;
              AK::MemoryMgr::Free(g_DefaultPoolId,(void *)*param_1);
            }
            *param_1 = (longlong)plVar5;
            *(uint *)(param_1 + 1) = uVar2;
            *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
          }
          else {
            if (uVar3 != 0) {
              do {
                uVar9 = *(uint *)(param_1 + 1);
                if (uVar9 < *(uint *)((longlong)param_1 + 0xc)) {
                  *(uint *)(param_1 + 1) = uVar9 + 1;
                  puVar1 = (undefined8 *)(*param_1 + (ulonglong)uVar9 * 8);
                  if (puVar1 != (undefined8 *)0x0) {
                    *puVar1 = 0;
                  }
                }
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            plVar13 = plVar5;
            if (uVar2 != 0) {
              do {
                lVar7 = *plVar13;
                while (lVar7 != 0) {
                  lVar6 = *(longlong *)(lVar7 + 8);
                  uVar12 = (ulonglong)*(uint *)(lVar7 + 0x10) % (ulonglong)uVar3;
                  *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(*param_1 + uVar12 * 8);
                  *(longlong *)(*param_1 + uVar12 * 8) = lVar7;
                  lVar7 = lVar6;
                }
                uVar11 = uVar11 - 1;
                plVar13 = plVar13 + 1;
              } while (uVar11 != 0);
            }
            if (plVar5 != (longlong *)0x0) {
              AK::MemoryMgr::Free(g_DefaultPoolId,plVar5);
            }
          }
        }
        break;
      }
      uVar9 = uVar9 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar9 < 0x1b);
  }
  return (int)param_1[1] != 0;
}



// FUNCTION 14313b2b0 GetNodeIndex body=12 status=ok
// SIG undefined GetNodeIndex(void)

longlong CAkAudioLibIndex::GetNodeIndex(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x40;
  }
  return param_1;
}



// FUNCTION 14313b2c0 FUN_14313b2c0 body=19 status=ok
// SIG undefined FUN_14313b2c0(void)

void FUN_14313b2c0(longlong param_1,undefined4 *param_2)

{
  if (*(char *)(param_2 + 1) != '\0') {
    param_1 = param_1 + 0x40;
  }
  CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(param_1,*param_2);
  return;
}



// FUNCTION 14313b2e0 GetNodePtrAndAddRef body=14 status=ok
// SIG undefined GetNodePtrAndAddRef(void)

void CAkAudioLibIndex::GetNodePtrAndAddRef(longlong param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 0x40;
  }
  CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(param_1);
  return;
}



// FUNCTION 14313b2f0 FUN_14313b2f0 body=109 status=ok
// SIG undefined FUN_14313b2f0(void)

undefined8 FUN_14313b2f0(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((*(uint *)(param_1 + 0x30) < 0xc) && (*(uint *)(param_1 + 0x34) < 0xb)) {
    uVar2 = FUN_143134440((longlong *)(param_1 + 0x28),0xb - *(uint *)(param_1 + 0x30));
    if ((char)uVar2 == '\0') {
      return uVar2;
    }
  }
  *(undefined4 *)(param_1 + 0x30) = 0xb;
  uVar3 = 0;
  do {
    uVar1 = (int)uVar3 + 1;
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + uVar3 * 8) = 0;
    uVar3 = (ulonglong)uVar1;
  } while (uVar1 < *(uint *)(param_1 + 0x30));
  return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
}



// FUNCTION 14313b360 FUN_14313b360 body=980 status=ok
// SIG undefined FUN_14313b360(void)

ulonglong FUN_14313b360(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_14313b2f0();
  if ((char)uVar2 != '\0') {
    uVar2 = FUN_14313b2f0(param_1 + 0x40);
    if ((char)uVar2 != '\0') {
      uVar2 = FUN_14313b2f0(param_1 + 0x80);
      if ((char)uVar2 != '\0') {
        uVar4 = 0;
        *(undefined4 *)(param_1 + 0xf8) = 0;
        if ((*(uint *)(param_1 + 0xf0) < 0xc) && (*(uint *)(param_1 + 0xf4) < 0xb)) {
          uVar2 = FUN_143134440((longlong *)(param_1 + 0xe8),0xb - *(uint *)(param_1 + 0xf0));
          if ((char)uVar2 == '\0') goto LAB_14313b722;
        }
        *(undefined4 *)(param_1 + 0xf0) = 0xb;
        uVar2 = uVar4;
        do {
          uVar3 = (int)uVar2 + 1;
          *(undefined8 *)(*(longlong *)(param_1 + 0xe8) + uVar2 * 8) = 0;
          uVar2 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0xf0));
        *(undefined4 *)(param_1 + 0x138) = 0;
        if ((*(uint *)(param_1 + 0x130) < 0xc) && (*(uint *)(param_1 + 0x134) < 0xb)) {
          uVar2 = FUN_143134440((longlong *)(param_1 + 0x128),0xb - *(uint *)(param_1 + 0x130));
          if ((char)uVar2 == '\0') goto LAB_14313b722;
        }
        *(undefined4 *)(param_1 + 0x130) = 0xb;
        uVar2 = uVar4;
        do {
          uVar3 = (int)uVar2 + 1;
          *(undefined8 *)(*(longlong *)(param_1 + 0x128) + uVar2 * 8) = 0;
          uVar2 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0x130));
        *(undefined4 *)(param_1 + 0x178) = 0;
        if ((*(uint *)(param_1 + 0x170) < 0xc) && (*(uint *)(param_1 + 0x174) < 0xb)) {
          uVar2 = FUN_143134440((longlong *)(param_1 + 0x168),0xb - *(uint *)(param_1 + 0x170));
          if ((char)uVar2 == '\0') goto LAB_14313b722;
        }
        *(undefined4 *)(param_1 + 0x170) = 0xb;
        uVar2 = uVar4;
        do {
          uVar3 = (int)uVar2 + 1;
          *(undefined8 *)(*(longlong *)(param_1 + 0x168) + uVar2 * 8) = 0;
          uVar2 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0x170));
        *(undefined4 *)(param_1 + 0x1b8) = 0;
        if ((*(uint *)(param_1 + 0x1b0) < 0xc) && (*(uint *)(param_1 + 0x1b4) < 0xb)) {
          uVar2 = FUN_143134440((longlong *)(param_1 + 0x1a8),0xb - *(uint *)(param_1 + 0x1b0));
          if ((char)uVar2 == '\0') goto LAB_14313b722;
        }
        *(undefined4 *)(param_1 + 0x1b0) = 0xb;
        uVar2 = uVar4;
        do {
          uVar3 = (int)uVar2 + 1;
          *(undefined8 *)(*(longlong *)(param_1 + 0x1a8) + uVar2 * 8) = 0;
          uVar2 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0x1b0));
        *(undefined4 *)(param_1 + 0x1f8) = 0;
        if ((*(uint *)(param_1 + 0x1f0) < 0xc) && (*(uint *)(param_1 + 500) < 0xb)) {
          uVar2 = FUN_143134440((longlong *)(param_1 + 0x1e8),0xb - *(uint *)(param_1 + 0x1f0));
          if ((char)uVar2 == '\0') goto LAB_14313b722;
        }
        *(undefined4 *)(param_1 + 0x1f0) = 0xb;
        uVar2 = uVar4;
        do {
          uVar3 = (int)uVar2 + 1;
          *(undefined8 *)(*(longlong *)(param_1 + 0x1e8) + uVar2 * 8) = 0;
          uVar2 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0x1f0));
        *(undefined4 *)(param_1 + 0x238) = 0;
        if ((*(uint *)(param_1 + 0x230) < 0xc) && (*(uint *)(param_1 + 0x234) < 0xb)) {
          uVar2 = FUN_143134440((longlong *)(param_1 + 0x228),0xb - *(uint *)(param_1 + 0x230));
          if ((char)uVar2 == '\0') goto LAB_14313b722;
        }
        *(undefined4 *)(param_1 + 0x230) = 0xb;
        uVar2 = uVar4;
        do {
          uVar3 = (int)uVar2 + 1;
          *(undefined8 *)(*(longlong *)(param_1 + 0x228) + uVar2 * 8) = 0;
          uVar2 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0x230));
        *(undefined4 *)(param_1 + 0x278) = 0;
        if ((*(uint *)(param_1 + 0x270) < 0xc) && (*(uint *)(param_1 + 0x274) < 0xb)) {
          uVar2 = FUN_143134440((longlong *)(param_1 + 0x268),0xb - *(uint *)(param_1 + 0x270));
          if ((char)uVar2 == '\0') goto LAB_14313b722;
        }
        *(undefined4 *)(param_1 + 0x270) = 0xb;
        uVar2 = uVar4;
        do {
          uVar3 = (int)uVar2 + 1;
          *(undefined8 *)(*(longlong *)(param_1 + 0x268) + uVar2 * 8) = 0;
          uVar2 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0x270));
        *(undefined4 *)(param_1 + 0x2b8) = 0;
        if ((*(uint *)(param_1 + 0x2b0) < 0xc) && (*(uint *)(param_1 + 0x2b4) < 0xb)) {
          uVar2 = FUN_143134440((longlong *)(param_1 + 0x2a8),0xb - *(uint *)(param_1 + 0x2b0));
          if ((char)uVar2 == '\0') goto LAB_14313b722;
        }
        *(undefined4 *)(param_1 + 0x2b0) = 0xb;
        uVar2 = uVar4;
        do {
          uVar3 = (int)uVar2 + 1;
          *(undefined8 *)(*(longlong *)(param_1 + 0x2a8) + uVar2 * 8) = 0;
          uVar2 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0x2b0));
        *(undefined4 *)(param_1 + 0x2f8) = 0;
        if ((*(uint *)(param_1 + 0x2f0) < 0xc) && (*(uint *)(param_1 + 0x2f4) < 0xb)) {
          uVar2 = FUN_143134440((longlong *)(param_1 + 0x2e8),0xb - *(uint *)(param_1 + 0x2f0));
          if ((char)uVar2 == '\0') goto LAB_14313b722;
        }
        *(undefined4 *)(param_1 + 0x2f0) = 0xb;
        uVar2 = uVar4;
        do {
          uVar3 = (int)uVar2 + 1;
          *(undefined8 *)(*(longlong *)(param_1 + 0x2e8) + uVar2 * 8) = 0;
          uVar2 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0x2f0));
        *(undefined4 *)(param_1 + 0x338) = 0;
        if ((*(uint *)(param_1 + 0x330) < 0xc) && (*(uint *)(param_1 + 0x334) < 0xb)) {
          uVar2 = FUN_143134440((longlong *)(param_1 + 0x328),0xb - *(uint *)(param_1 + 0x330));
          if ((char)uVar2 == '\0') goto LAB_14313b722;
        }
        *(undefined4 *)(param_1 + 0x330) = 0xb;
        uVar2 = uVar4;
        do {
          uVar3 = (int)uVar2 + 1;
          *(undefined8 *)(*(longlong *)(param_1 + 0x328) + uVar2 * 8) = 0;
          uVar2 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0x330));
        *(undefined4 *)(param_1 + 0x378) = 0;
        if ((*(uint *)(param_1 + 0x370) < 0xc) && (*(uint *)(param_1 + 0x374) < 0xb)) {
          uVar2 = FUN_143134440((longlong *)(param_1 + 0x368),0xb - *(uint *)(param_1 + 0x370));
          if ((char)uVar2 == '\0') goto LAB_14313b722;
        }
        *(undefined4 *)(param_1 + 0x370) = 0xb;
        do {
          lVar1 = *(longlong *)(param_1 + 0x368);
          uVar3 = (int)uVar4 + 1;
          *(undefined8 *)(lVar1 + uVar4 * 8) = 0;
          uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0x370));
        return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      }
    }
  }
LAB_14313b722:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 14313b740 ReleaseDynamicSequences body=195 status=ok
// SIG undefined ReleaseDynamicSequences(void)

void CAkAudioLibIndex::ReleaseDynamicSequences(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x200));
  if (*(uint *)(param_1 + 0x230) != 0) {
    uVar2 = 0;
    plVar3 = (longlong *)**(undefined8 **)(param_1 + 0x228);
    while (plVar3 == (longlong *)0x0) {
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      if (*(uint *)(param_1 + 0x230) <= uVar1) goto LAB_14313b7f4;
      plVar3 = (longlong *)(*(undefined8 **)(param_1 + 0x228))[uVar2];
    }
    do {
      plVar4 = (longlong *)plVar3[1];
      if (plVar4 == (longlong *)0x0) {
        do {
          uVar1 = (int)uVar2 + 1;
          uVar2 = (ulonglong)uVar1;
          if (*(uint *)(param_1 + 0x230) <= uVar1) break;
          plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x228) + uVar2 * 8);
        } while (plVar4 == (longlong *)0x0);
      }
      CAkPlayingMgr::RemoveItemActiveCount(DAT_146b50b00,*(undefined4 *)((longlong)plVar3 + 0x74));
      (**(code **)(*plVar3 + 0x10))(plVar3);
      plVar3 = plVar4;
    } while (plVar4 != (longlong *)0x0);
  }
LAB_14313b7f4:
                    /* WARNING: Could not recover jumptable at 0x00014313b7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x200));
  return;
}



// FUNCTION 14313b810 ReleaseTempObjects body=286 status=ok
// SIG undefined ReleaseTempObjects(void)

void CAkAudioLibIndex::ReleaseTempObjects(LPCRITICAL_SECTION param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  
  EnterCriticalSection(param_1);
  uVar2 = 0;
  if (param_1[1].LockCount != 0) {
    plVar3 = *(longlong **)param_1[1].DebugInfo;
    uVar6 = uVar2;
    while (plVar3 == (longlong *)0x0) {
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      if ((uint)param_1[1].LockCount <= uVar5) goto LAB_14313b89c;
      plVar3 = *(longlong **)(&(param_1[1].DebugInfo)->Type + uVar6 * 4);
    }
    do {
      plVar4 = (longlong *)plVar3[1];
      if (plVar4 == (longlong *)0x0) {
        do {
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
          if ((uint)param_1[1].LockCount <= uVar5) break;
          plVar4 = *(longlong **)(&(param_1[1].DebugInfo)->Type + uVar6 * 4);
        } while (plVar4 == (longlong *)0x0);
      }
      if ((int)plVar3[2] < 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      plVar3 = plVar4;
    } while (plVar4 != (longlong *)0x0);
  }
LAB_14313b89c:
  LeaveCriticalSection(param_1);
  uVar5 = (uint)param_1[0x12].SpinCount;
  if (uVar5 != 0) {
    plVar3 = *(longlong **)param_1[0x12].LockSemaphore;
    while (plVar3 == (longlong *)0x0) {
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      if (uVar5 <= uVar1) {
        return;
      }
      plVar3 = *(longlong **)((longlong)param_1[0x12].LockSemaphore + uVar2 * 8);
    }
    do {
      plVar4 = (longlong *)plVar3[1];
      if (plVar4 == (longlong *)0x0) {
        do {
          uVar5 = (int)uVar2 + 1;
          uVar2 = (ulonglong)uVar5;
          if ((uint)param_1[0x12].SpinCount <= uVar5) break;
          plVar4 = *(longlong **)((longlong)param_1[0x12].LockSemaphore + uVar2 * 8);
        } while (plVar4 == (longlong *)0x0);
      }
      if ((int)plVar3[2] < 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      plVar3 = plVar4;
    } while (plVar4 != (longlong *)0x0);
  }
  return;
}



// FUNCTION 14313b930 Term body=667 status=ok
// SIG undefined Term(void)

void CAkAudioLibIndex::Term(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar4;
  ulonglong uVar3;
  
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(void **)(param_1 + 0x68) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x68));
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  if (*(void **)(param_1 + 0xa8) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0xa8));
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  if (*(void **)(param_1 + 0xe8) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xf0) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  if (*(void **)(param_1 + 0x128) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x130) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x128));
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  if (*(void **)(param_1 + 0x168) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x170) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x168));
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  if (*(void **)(param_1 + 0x1a8) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x1a8));
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined4 *)(param_1 + 0x1b4) = 0;
  }
  if (*(void **)(param_1 + 0x1e8) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x1e8));
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined4 *)(param_1 + 500) = 0;
  }
  if (*(void **)(param_1 + 0x228) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x230) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x228));
    *(undefined8 *)(param_1 + 0x228) = 0;
    *(undefined4 *)(param_1 + 0x234) = 0;
  }
  if (*(void **)(param_1 + 0x268) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x270) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x268));
    *(undefined8 *)(param_1 + 0x268) = 0;
    *(undefined4 *)(param_1 + 0x274) = 0;
  }
  if (*(void **)(param_1 + 0x2a8) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x2b0) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x2a8));
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    *(undefined4 *)(param_1 + 0x2b4) = 0;
  }
  if (*(void **)(param_1 + 0x2e8) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x2f0) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x2e8));
    *(undefined8 *)(param_1 + 0x2e8) = 0;
    *(undefined4 *)(param_1 + 0x2f4) = 0;
  }
  if (*(void **)(param_1 + 0x328) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x330) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x328));
    *(undefined8 *)(param_1 + 0x328) = 0;
    *(undefined4 *)(param_1 + 0x334) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x378);
  while (iVar1 != 0) {
    if (*(uint *)(param_1 + 0x370) == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)**(undefined8 **)(param_1 + 0x368);
      uVar3 = 0;
      while ((plVar4 == (longlong *)0x0 &&
             (uVar2 = (int)uVar3 + 1, uVar3 = (ulonglong)uVar2, uVar2 < *(uint *)(param_1 + 0x370)))
            ) {
        plVar4 = (longlong *)(*(undefined8 **)(param_1 + 0x368))[uVar3];
      }
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
    iVar1 = *(int *)(param_1 + 0x378);
  }
  if (*(void **)(param_1 + 0x368) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x370) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x368));
    *(undefined8 *)(param_1 + 0x368) = 0;
    *(undefined4 *)(param_1 + 0x374) = 0;
  }
  return;
}



// FUNCTION 14313bbd0 HasComponent<CAkEmitter> body=22 status=ok
// SIG undefined HasComponent<CAkEmitter>(void)

ulonglong CAkGameObject::HasComponent<CAkEmitter>(longlong param_1)

{
  longlong *in_RAX;
  
  if ((*(int *)(param_1 + 0x40) != 0) && (in_RAX = *(longlong **)(param_1 + 0x38), *in_RAX != 0)) {
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14313bbf0 FUN_14313bbf0 body=352 status=ok
// SIG undefined FUN_14313bbf0(void)

longlong FUN_14313bbf0(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined2 *)(param_1 + 0x98) = 0xff00;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0xfc;
  *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0xcc) & 0xfc;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) & 0xfd;
  *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0xcc) & 0xfe;
  *(undefined8 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x12a) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(byte *)(param_1 + 0x184) = *(byte *)(param_1 + 0x184) & 0xfe;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(byte *)(param_1 + 0x188) = *(byte *)(param_1 + 0x188) & 0xf3 | 3;
  return param_1;
}



// FUNCTION 14313bd50 AkPendingAction body=43 status=ok
// SIG undefined AkPendingAction(void)

undefined8 * AkPendingAction::AkPendingAction(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR_TransUpdateValue_145ac6f40;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = param_2;
  if (param_2 != 0) {
    *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
  }
  return param_1;
}



// FUNCTION 14313bd80 CAkAudioMgr body=125 status=ok
// SIG undefined CAkAudioMgr(void)

longlong CAkAudioMgr::CAkAudioMgr(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  CAkAudioThread::CAkAudioThread(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return param_1;
}



// FUNCTION 14313be00 DoTerm body=110 status=ok
// SIG undefined DoTerm(void)

void AkInitialSoundParams::DoTerm(longlong param_1)

{
  if (*(void **)(param_1 + 0x88) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  if (*(void **)(param_1 + 0xb0) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0xb0));
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  return;
}



// FUNCTION 14313be70 ~AkPendingAction body=111 status=ok
// SIG undefined ~AkPendingAction(void)

void AkPendingAction::~AkPendingAction(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)param_1[8];
  *param_1 = &PTR_TransUpdateValue_145ac6f40;
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 10);
    *piVar1 = *piVar1 + -1;
    lVar3 = g_DefaultPoolId;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,0);
      AK::MemoryMgr::Free(lVar3,puVar2);
    }
  }
  if (*(longlong *)((longlong)param_1 + 0x1c) != 0) {
    AkExternalSourceArray::Release();
    return;
  }
  return;
}



// FUNCTION 14313bee0 ~CAkAudioMgr body=69 status=ok
// SIG undefined ~CAkAudioMgr(void)

void CAkAudioMgr::~CAkAudioMgr(longlong param_1)

{
  if (*(void **)(param_1 + 0xa8) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0xa8));
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  return;
}



// FUNCTION 14313bf30 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 AkPendingAction::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~AkPendingAction();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14313bf70 FUN_14313bf70 body=882 status=ok
// SIG undefined FUN_14313bf70(void)

undefined8 FUN_14313bf70(longlong param_1,longlong *param_2,longlong param_3,int param_4)

{
  short sVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  long lVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 local_78 [20];
  
  puVar11 = (undefined8 *)0x0;
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  while (puVar4 != (undefined8 *)0x0) {
    plVar2 = (longlong *)puVar4[2];
    lVar3 = plVar2[1];
    plVar7 = (longlong *)CAkAction::GetAndRefTarget(lVar3);
    if (param_2 == (longlong *)0x0) {
LAB_14313c02e:
      if ((param_3 == 0) || (param_3 == plVar2[8])) {
        if ((param_4 != 0) && (param_4 != (int)plVar2[6])) {
          puVar10 = (undefined8 *)*puVar4;
          puVar11 = puVar4;
          goto LAB_14313c126;
        }
        sVar1 = *(short *)(lVar3 + 0x34);
        if ((sVar1 != 0x403) &&
           ((sVar1 != 0x503 ||
            (cVar6 = CAkActionPlayAndContinue::BreakToNode(plVar2[1],param_2,plVar2[8],plVar2),
            cVar6 == '\0')))) goto LAB_14313c086;
        plVar9 = (longlong *)plVar2[1];
        local_78[0] = 0;
        if (*(short *)((longlong)plVar9 + 0x34) == 0x403) {
LAB_14313c0b9:
          (**(code **)(*plVar9 + 0x50))(plVar9,local_78);
        }
        else if (*(short *)((longlong)plVar9 + 0x34) == 0x503) {
          FUN_1431a5b70();
          plVar9 = (longlong *)plVar2[1];
          goto LAB_14313c0b9;
        }
        CAkPlayingMgr::RemoveItemActiveCount(DAT_146b50b00,(int)plVar2[6]);
        puVar10 = (undefined8 *)*puVar4;
        if (puVar4 == *(undefined8 **)(param_1 + 0x28)) {
          *(undefined8 **)(param_1 + 0x28) = puVar10;
        }
        else {
          *puVar11 = puVar10;
        }
        if (puVar4 == *(undefined8 **)(param_1 + 0x30)) {
          *(undefined8 **)(param_1 + 0x30) = puVar11;
        }
        *puVar4 = *(undefined8 *)(param_1 + 0x38);
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
        *(undefined8 **)(param_1 + 0x38) = puVar4;
        (**(code **)(*(longlong *)plVar2[1] + 0x10))();
        lVar5 = g_DefaultPoolId;
        (**(code **)(*plVar2 + 8))(plVar2,0);
        AK::MemoryMgr::Free(lVar5,plVar2);
      }
      else {
LAB_14313c086:
        puVar10 = (undefined8 *)*puVar4;
        puVar11 = puVar4;
      }
    }
    else {
      if (plVar7 == (longlong *)0x0) goto LAB_14313c086;
      if (param_2 == plVar7) goto LAB_14313c02e;
      plVar8 = (longlong *)plVar7[0x11];
      for (plVar9 = (longlong *)plVar7[0x10]; plVar9 != (longlong *)0x0;
          plVar9 = (longlong *)plVar9[0x10]) {
        if (param_2 == plVar9) goto LAB_14313c02e;
        if (plVar8 == (longlong *)0x0) {
          plVar8 = (longlong *)plVar9[0x11];
        }
      }
      if (plVar8 == (longlong *)0x0) goto LAB_14313c086;
      do {
        if (param_2 == plVar8) goto LAB_14313c02e;
        plVar8 = (longlong *)plVar8[0x11];
      } while (plVar8 != (longlong *)0x0);
      puVar10 = (undefined8 *)*puVar4;
      puVar11 = puVar4;
    }
LAB_14313c126:
    puVar4 = puVar10;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  puVar11 = (undefined8 *)0x0;
  puVar4 = *(undefined8 **)(param_1 + 0x50);
  do {
    if (puVar4 == (undefined8 *)0x0) {
      return 1;
    }
    plVar2 = (longlong *)puVar4[2];
    lVar3 = plVar2[1];
    plVar7 = (longlong *)CAkAction::GetAndRefTarget(lVar3);
    if (param_2 == (longlong *)0x0) {
LAB_14313c203:
      if ((((param_3 != 0) && (param_3 != plVar2[8])) ||
          ((param_4 != 0 && (param_4 != (int)plVar2[6])))) ||
         ((*(short *)(lVar3 + 0x34) != 0x503 ||
          (cVar6 = CAkActionPlayAndContinue::BreakToNode(plVar2[1],param_2,plVar2[8],plVar2),
          cVar6 == '\0')))) goto LAB_14313c1c3;
      plVar9 = (longlong *)plVar2[1];
      local_78[0] = 0;
      if (*(short *)((longlong)plVar9 + 0x34) == 0x403) {
LAB_14313c270:
        (**(code **)(*plVar9 + 0x50))(plVar9,local_78);
      }
      else if (*(short *)((longlong)plVar9 + 0x34) == 0x503) {
        FUN_1431a5b70();
        plVar9 = (longlong *)plVar2[1];
        goto LAB_14313c270;
      }
      CAkPlayingMgr::RemoveItemActiveCount(DAT_146b50b00,(int)plVar2[6]);
      puVar10 = (undefined8 *)*puVar4;
      if (puVar4 == *(undefined8 **)(param_1 + 0x50)) {
        *(undefined8 **)(param_1 + 0x50) = puVar10;
      }
      else {
        *puVar11 = puVar10;
      }
      if (puVar4 == *(undefined8 **)(param_1 + 0x58)) {
        *(undefined8 **)(param_1 + 0x58) = puVar11;
      }
      *puVar4 = *(undefined8 *)(param_1 + 0x60);
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
      *(undefined8 **)(param_1 + 0x60) = puVar4;
      (**(code **)(*(longlong *)plVar2[1] + 0x10))();
      lVar5 = g_DefaultPoolId;
      (**(code **)(*plVar2 + 8))(plVar2,0);
      AK::MemoryMgr::Free(lVar5,plVar2);
    }
    else {
      if (plVar7 != (longlong *)0x0) {
        if (param_2 == plVar7) goto LAB_14313c203;
        plVar8 = (longlong *)plVar7[0x11];
        for (plVar9 = (longlong *)plVar7[0x10]; plVar9 != (longlong *)0x0;
            plVar9 = (longlong *)plVar9[0x10]) {
          if (param_2 == plVar9) goto LAB_14313c203;
          if (plVar8 == (longlong *)0x0) {
            plVar8 = (longlong *)plVar9[0x11];
          }
        }
        for (; plVar8 != (longlong *)0x0; plVar8 = (longlong *)plVar8[0x11]) {
          if (param_2 == plVar8) goto LAB_14313c203;
        }
      }
LAB_14313c1c3:
      puVar10 = (undefined8 *)*puVar4;
      puVar11 = puVar4;
    }
    puVar4 = puVar10;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  } while( true );
}



// FUNCTION 14313c2f0 ClearCrossFadeOccurence body=147 status=ok
// SIG undefined ClearCrossFadeOccurence(void)

void CAkAudioMgr::ClearCrossFadeOccurence(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  for (puVar1 = *(undefined8 **)(param_1 + 0x28); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    if (*(short *)(*(longlong *)(puVar1[2] + 8) + 0x34) == 0x503) {
      CAkActionPlayAndContinue::UnsetFadeBack(*(longlong *)(puVar1[2] + 8),param_2);
    }
  }
  for (puVar1 = *(undefined8 **)(param_1 + 0x50); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    if (*(short *)(*(longlong *)(puVar1[2] + 8) + 0x34) == 0x503) {
      CAkActionPlayAndContinue::UnsetFadeBack(*(longlong *)(puVar1[2] + 8),param_2);
    }
  }
  return;
}



// FUNCTION 14313c390 FUN_14313c390 body=464 status=ok
// SIG undefined FUN_14313c390(void)

void FUN_14313c390(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  longlong *plVar6;
  undefined4 local_78 [20];
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  puVar4 = (undefined8 *)0x0;
  while (puVar3 = puVar2, puVar3 != (undefined8 *)0x0) {
    plVar1 = (longlong *)puVar3[2];
    if ((int)plVar1[6] == param_2) {
      plVar6 = (longlong *)plVar1[1];
      local_78[0] = 0;
      if (*(short *)((longlong)plVar6 + 0x34) == 0x403) {
LAB_14313c3ff:
        (**(code **)(*plVar6 + 0x50))(plVar6,local_78);
      }
      else if (*(short *)((longlong)plVar6 + 0x34) == 0x503) {
        FUN_1431a5b70();
        plVar6 = (longlong *)plVar1[1];
        goto LAB_14313c3ff;
      }
      CAkPlayingMgr::RemoveItemActiveCount(DAT_146b50b00,(int)plVar1[6]);
      puVar2 = (undefined8 *)*puVar3;
      if (puVar3 == *(undefined8 **)(param_1 + 0x28)) {
        *(undefined8 **)(param_1 + 0x28) = puVar2;
      }
      else {
        *puVar4 = puVar2;
      }
      if (puVar3 == *(undefined8 **)(param_1 + 0x30)) {
        *(undefined8 **)(param_1 + 0x30) = puVar4;
      }
      *puVar3 = *(undefined8 *)(param_1 + 0x38);
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
      *(undefined8 **)(param_1 + 0x38) = puVar3;
      (**(code **)(*(longlong *)plVar1[1] + 0x10))();
      lVar5 = g_DefaultPoolId;
      (**(code **)(*plVar1 + 8))(plVar1,0);
      AK::MemoryMgr::Free(lVar5,plVar1);
    }
    else {
      puVar2 = (undefined8 *)*puVar3;
      puVar4 = puVar3;
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  puVar4 = (undefined8 *)0x0;
  do {
    while( true ) {
      puVar3 = puVar2;
      if (puVar3 == (undefined8 *)0x0) {
        return;
      }
      plVar1 = (longlong *)puVar3[2];
      if ((int)plVar1[6] == param_2) break;
      puVar2 = (undefined8 *)*puVar3;
      puVar4 = puVar3;
    }
    plVar6 = (longlong *)plVar1[1];
    local_78[0] = 0;
    if (*(short *)((longlong)plVar6 + 0x34) == 0x403) {
LAB_14313c4c0:
      (**(code **)(*plVar6 + 0x50))(plVar6,local_78);
    }
    else if (*(short *)((longlong)plVar6 + 0x34) == 0x503) {
      FUN_1431a5b70();
      plVar6 = (longlong *)plVar1[1];
      goto LAB_14313c4c0;
    }
    CAkPlayingMgr::RemoveItemActiveCount(DAT_146b50b00,(int)plVar1[6]);
    puVar2 = (undefined8 *)*puVar3;
    if (puVar3 == *(undefined8 **)(param_1 + 0x50)) {
      *(undefined8 **)(param_1 + 0x50) = puVar2;
    }
    else {
      *puVar4 = puVar2;
    }
    if (puVar3 == *(undefined8 **)(param_1 + 0x58)) {
      *(undefined8 **)(param_1 + 0x58) = puVar4;
    }
    *puVar3 = *(undefined8 *)(param_1 + 0x60);
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
    *(undefined8 **)(param_1 + 0x60) = puVar3;
    (**(code **)(*(longlong *)plVar1[1] + 0x10))();
    lVar5 = g_DefaultPoolId;
    (**(code **)(*plVar1 + 8))(plVar1,0);
    AK::MemoryMgr::Free(lVar5,plVar1);
  } while( true );
}



// FUNCTION 14313c560 FUN_14313c560 body=248 status=ok
// SIG undefined FUN_14313c560(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14313c560(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  float fVar4;
  
  uVar1 = thunk_FUN_14312a950();
  uVar2 = (ulonglong)uVar1;
  if (DAT_146b50e1d != '\0') {
    if ((DAT_146b50e1e == '\0') || (DAT_1467bdcd0 != '\0')) {
      if (DAT_146b51f20 < *(longlong *)(param_1 + 0x90)) {
        return 0;
      }
      uVar3 = (ulonglong)DAT_1467bdcac;
      fVar4 = ((float)(DAT_146b51f20 - *(longlong *)(param_1 + 0x90)) / _DAT_146b51f08) *
              ((float)uVar3 / (float)(_DAT_1467bdcb8 & 0xffff)) * 0.001 + *(float *)(param_1 + 0xa0)
      ;
      uVar2 = (ulonglong)fVar4;
      if ((uint)uVar2 != 0) {
        *(float *)(param_1 + 0xa0) = fVar4 - (float)(uVar2 & 0xffffffff);
        uVar3 = (ulonglong)DAT_1467bdcac;
      }
      if ((uint)uVar2 <= (uint)(uVar3 / (_DAT_1467bdcb8 & 0xffff))) goto LAB_14313c64f;
    }
    return 1;
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
LAB_14313c64f:
  return uVar2 & 0xffffffff;
}



// FUNCTION 14313c660 FUN_14313c660 body=430 status=ok
// SIG undefined FUN_14313c660(void)

void FUN_14313c660(longlong param_1,longlong *param_2)

{
  short sVar1;
  longlong lVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong *local_res10;
  undefined4 local_58 [20];
  
  local_res10 = param_2;
  CAkPlayingMgr::AddItemActiveCount(DAT_146b50b00);
  (**(code **)(*(longlong *)param_2[1] + 8))();
  uVar5 = CAkAction::GetDelayTime(param_2[1]);
  uVar6 = uVar5 / DAT_1467bdcb8;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x78);
  *(uint *)((longlong)param_2 + 0x14) = uVar5 - DAT_1467bdcb8 * uVar6;
  if (uVar6 == 0) {
    lVar2 = param_2[8];
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x40) != 0)) && (**(longlong **)(lVar2 + 0x38) != 0)) {
      FUN_143172a90();
    }
    (**(code **)(*(longlong *)param_2[1] + 0x38))((longlong *)param_2[1],param_2);
    if ((int)param_2[6] != 0) {
      CAkPlayingMgr::RemoveItemActiveCount(DAT_146b50b00);
    }
    (**(code **)(*(longlong *)param_2[1] + 0x10))();
    lVar3 = g_DefaultPoolId;
    (**(code **)(*param_2 + 8))(param_2,0);
    AK::MemoryMgr::Free(lVar3,param_2);
    return;
  }
  if (*(short *)(param_2[1] + 0x34) == 0x503) {
    uVar7 = DAT_146b50bd0;
    if (uVar6 < DAT_146b50bd0) {
      uVar7 = uVar6;
    }
    uVar6 = uVar6 - uVar7;
    *(uint *)((longlong)param_2 + 0x14) = uVar5 - DAT_1467bdcb8 * uVar6;
    if (uVar6 == 0) {
      CAkAudioMgr::ProcessAction(param_1,param_2);
      return;
    }
  }
  *(uint *)(param_2 + 2) = (int)param_2[2] + uVar6;
  iVar8 = FUN_14313ccd0(param_1 + 0x28,(int)param_2[2],&local_res10);
  if (iVar8 != 1) {
    (**(code **)(*(longlong *)param_2[1] + 0x10))();
    lVar3 = g_DefaultPoolId;
    (**(code **)(*param_2 + 8))(param_2,0);
    AK::MemoryMgr::Free(lVar3,param_2);
    return;
  }
  local_58[0] = 0;
  sVar1 = *(short *)(param_2[1] + 0x34);
  if (sVar1 != 0x403) {
    if (sVar1 != 0x503) {
      return;
    }
    cVar4 = FUN_1431a5b70();
    if (cVar4 == '\0') {
      return;
    }
  }
  (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_58);
  return;
}



// FUNCTION 14313c810 ExecuteEvent body=343 status=ok
// SIG undefined ExecuteEvent(void)

void CAkAudioMgr::ExecuteEvent
               (longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 *param_6)

{
  longlong lVar1;
  int *piVar2;
  char cVar3;
  undefined8 *puVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  do {
    if (lVar1 == 0) {
      return;
    }
    if ((*(byte *)(lVar1 + 0x34) & 1) == 0) {
      puVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x48);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR_TransUpdateValue_145ac6f40;
        *(undefined8 *)((longlong)puVar4 + 0x2c) = 0;
        *(undefined8 *)((longlong)puVar4 + 0x24) = 0;
        *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
        *(undefined4 *)(puVar4 + 7) = 0;
        puVar4[8] = 0;
        goto LAB_14313c8e6;
      }
    }
    else if (((param_2 != 0) &&
             (cVar3 = CAkGameObject::HasComponent<CAkEmitter>(param_2), cVar3 != '\0')) &&
            (puVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x48), puVar4 != (undefined8 *)0x0)) {
      *puVar4 = &PTR_TransUpdateValue_145ac6f40;
      *(undefined8 *)((longlong)puVar4 + 0x2c) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x24) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
      *(undefined4 *)(puVar4 + 7) = 0;
      puVar4[8] = param_2;
      *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
LAB_14313c8e6:
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar4 + 7) = param_5;
        puVar4[1] = lVar1;
        *(undefined4 *)(puVar4 + 6) = param_4;
        *(undefined8 *)((longlong)puVar4 + 0x24) = param_6[1];
        *(undefined4 *)((longlong)puVar4 + 0x2c) = *(undefined4 *)(param_6 + 2);
        piVar2 = (int *)*param_6;
        if (*(longlong *)((longlong)puVar4 + 0x1c) != 0) {
          AkExternalSourceArray::Release();
        }
        if (piVar2 != (int *)0x0) {
          *piVar2 = *piVar2 + 1;
        }
        *(int **)((longlong)puVar4 + 0x1c) = piVar2;
        FUN_14313c660(DAT_146b50b78,puVar4);
      }
    }
    lVar1 = *(longlong *)(lVar1 + 0x18);
  } while( true );
}



// FUNCTION 14313c970 FUN_14313c970 body=47 status=ok
// SIG undefined FUN_14313c970(void)

int * FUN_14313c970(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  piVar1 = piVar3 + (ulonglong)*(uint *)(param_1 + 1) * 6;
  for (; (piVar3 != piVar1 && (*piVar3 != param_2)); piVar3 = piVar3 + 6) {
  }
  piVar2 = piVar3 + 2;
  if (piVar3 == piVar1) {
    piVar2 = (int *)0x0;
  }
  return piVar2;
}



// FUNCTION 14313c9a0 GameObjID body=22 status=ok
// SIG undefined GameObjID(void)

undefined8 AkPendingAction::GameObjID(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x48);
  }
  return 0xffffffffffffffff;
}



// FUNCTION 14313c9c0 FUN_14313c9c0 body=421 status=ok
// SIG undefined FUN_14313c9c0(void)

undefined8 FUN_14313c9c0(longlong param_1,void *param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  ushort uVar16;
  
  uVar2 = *(uint *)(param_1 + 4);
  if (uVar2 != 0) {
    pvVar7 = param_2;
    if (8 < (ulonglong)uVar2 << 3) {
      pvVar7 = AK::MemoryMgr::Malign(g_DefaultPoolId,(ulonglong)uVar2 << 3,8);
    }
    *(void **)((longlong)param_2 + 8) = pvVar7;
    if (pvVar7 != (void *)0x0) {
      *(uint *)((longlong)param_2 + 0x14) = uVar2;
    }
  }
  uVar15 = 0;
  uVar16 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      uVar2 = *(uint *)((longlong)param_2 + 0x10);
      iVar14 = uVar2 - 1;
      uVar3 = *(ulonglong *)(param_1 + 8 + (ulonglong)uVar16 * 8);
      uVar13 = uVar15;
      if (-1 < iVar14) {
        do {
          iVar6 = (iVar14 - (int)uVar13) / 2 + (int)uVar13;
          uVar4 = *(ulonglong *)(*(longlong *)((longlong)param_2 + 8) + (longlong)iVar6 * 8);
          if (uVar3 < uVar4) {
            iVar14 = iVar6 + -1;
          }
          else {
            if (uVar3 <= uVar4) goto LAB_14313cb32;
            uVar13 = (ulonglong)(iVar6 + 1);
          }
        } while ((int)uVar13 <= iVar14);
      }
      uVar4 = *(ulonglong *)((longlong)param_2 + 8);
      uVar10 = uVar15;
      uVar12 = uVar15;
      if (uVar4 != 0) {
        uVar10 = uVar4;
        uVar12 = uVar4 + (longlong)(int)uVar13 * 8;
      }
      if (uVar12 == 0) {
        if (((uVar2 < *(uint *)((longlong)param_2 + 0x14)) ||
            (cVar5 = FUN_143131d70(param_2,1), cVar5 != '\0')) &&
           (uVar2 < *(uint *)((longlong)param_2 + 0x14))) {
          uVar2 = *(uint *)((longlong)param_2 + 0x10);
          *(uint *)((longlong)param_2 + 0x10) = uVar2 + 1;
          puVar9 = (ulonglong *)(*(longlong *)((longlong)param_2 + 8) + (ulonglong)uVar2 * 8);
          goto LAB_14313cb2a;
        }
      }
      else if (((uVar2 < *(uint *)((longlong)param_2 + 0x14)) ||
               (cVar5 = FUN_143131d70(param_2,1), cVar5 != '\0')) &&
              (uVar2 < *(uint *)((longlong)param_2 + 0x14))) {
        uVar2 = *(uint *)((longlong)param_2 + 0x10);
        lVar11 = *(longlong *)((longlong)param_2 + 8);
        *(uint *)((longlong)param_2 + 0x10) = uVar2 + 1;
        puVar8 = (undefined8 *)(lVar11 + (ulonglong)uVar2 * 8);
        lVar1 = ((longlong)(uVar12 - uVar10) >> 3 & 0xffffffffU) * 8;
        if ((undefined8 *)(lVar1 + lVar11) < puVar8) {
          do {
            *puVar8 = puVar8[-1];
            puVar8 = puVar8 + -1;
            lVar11 = *(longlong *)((longlong)param_2 + 8);
          } while ((undefined8 *)(lVar11 + lVar1) < puVar8);
        }
        puVar9 = (ulonglong *)(lVar1 + lVar11);
LAB_14313cb2a:
        if (puVar9 != (ulonglong *)0x0) {
          *puVar9 = uVar3;
        }
      }
LAB_14313cb32:
      uVar16 = uVar16 + 1;
    } while ((uint)uVar16 < *(uint *)(param_1 + 4));
  }
  return 1;
}



// FUNCTION 14313cb70 FUN_14313cb70 body=281 status=ok
// SIG undefined FUN_14313cb70(void)

undefined4 FUN_14313cb70(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  
  uVar5 = DAT_146b50bc4;
  uVar7 = (ulonglong)DAT_146b50bc4;
  pvVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,uVar7);
  param_1[2] = pvVar1;
  *param_1 = param_1[2];
  param_1[1] = param_1[2];
  *(uint *)(param_1 + 4) = uVar5;
  param_1[3] = param_1[2] + uVar7;
  uVar5 = 0;
  if (param_1[2] == 0) {
    uVar6 = 2;
  }
  else {
    puVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x300);
    param_1[8] = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined4 *)(param_1 + 9) = 0x20;
      param_1[7] = puVar2;
      uVar4 = uVar5;
      do {
        puVar3 = puVar2;
        uVar4 = uVar4 + 1;
        *puVar3 = puVar3 + 3;
        puVar2 = puVar3 + 3;
      } while (uVar4 < *(uint *)(param_1 + 9));
      *puVar3 = 0;
      puVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x300);
      param_1[0xd] = puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined4 *)(param_1 + 0xe) = 0x20;
        param_1[0xc] = puVar2;
        do {
          puVar3 = puVar2;
          uVar5 = uVar5 + 1;
          *puVar3 = puVar3 + 3;
          puVar2 = puVar3 + 3;
        } while (uVar5 < *(uint *)(param_1 + 0xe));
        *puVar3 = 0;
        uVar6 = 1;
        goto LAB_14313cc6a;
      }
    }
    uVar6 = 0x34;
  }
LAB_14313cc6a:
  QueryPerformanceCounter((LARGE_INTEGER *)(param_1 + 0x12));
  return uVar6;
}



// FUNCTION 14313cc90 InitSinkPlugin body=62 status=ok
// SIG undefined InitSinkPlugin(void)

void CAkAudioMgr::InitSinkPlugin(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1431400f0(DAT_146b50b78,0x35,0x14);
  uVar1 = param_2[1];
  *(undefined8 *)(lVar2 + 4) = *param_2;
  *(undefined8 *)(lVar2 + 0xc) = uVar1;
  LOCK();
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
  UNLOCK();
  return;
}



// FUNCTION 14313ccd0 FUN_14313ccd0 body=248 status=ok
// SIG undefined FUN_14313ccd0(void)

undefined8 FUN_14313ccd0(longlong *param_1,uint param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)param_1[2];
  if (plVar1 == (longlong *)0x0) {
    plVar1 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x18);
    if (plVar1 == (longlong *)0x0) {
      return 2;
    }
    *plVar1 = param_1[2];
    param_1[2] = (longlong)plVar1;
  }
  *(uint *)(plVar1 + 1) = param_2;
  *(undefined8 *)(param_1[2] + 0x10) = *param_3;
  if ((longlong *)*param_1 == (longlong *)0x0) {
    plVar1 = (longlong *)param_1[2];
    param_1[1] = (longlong)plVar1;
    param_1[2] = *plVar1;
    *plVar1 = 0;
    *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
    *param_1 = param_1[1];
    return 1;
  }
  plVar1 = (longlong *)0x0;
  plVar2 = (longlong *)*param_1;
  do {
    plVar3 = plVar2;
    if (param_2 < *(uint *)(plVar2 + 1)) break;
    plVar3 = (longlong *)*plVar2;
    plVar1 = plVar2;
    plVar2 = plVar3;
  } while (plVar3 != (longlong *)0x0);
  plVar2 = (longlong *)param_1[2];
  if (plVar3 == (longlong *)0x0) {
    param_1[1] = (longlong)plVar2;
  }
  if (plVar1 == (longlong *)0x0) {
    *param_1 = (longlong)plVar2;
    plVar1 = plVar2;
  }
  else {
    *plVar1 = (longlong)plVar2;
    plVar1 = (longlong *)param_1[2];
  }
  param_1[2] = *plVar1;
  *plVar2 = (longlong)plVar3;
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
  return 1;
}



// FUNCTION 14313cdd0 FUN_14313cdd0 body=176 status=ok
// SIG undefined FUN_14313cdd0(void)

void FUN_14313cdd0(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  long lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_res18 [2];
  undefined4 local_58 [20];
  
  *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)((longlong)param_3 + 0x34) = param_4;
  local_res18[0] = param_3;
  iVar2 = FUN_14313ccd0(param_1 + 0x50,param_2,local_res18);
  if (iVar2 == 1) {
    return;
  }
  plVar3 = (longlong *)param_3[1];
  local_58[0] = 0;
  if (*(short *)((longlong)plVar3 + 0x34) != 0x403) {
    if (*(short *)((longlong)plVar3 + 0x34) != 0x503) goto LAB_14313ce3e;
    FUN_1431a5b70();
    plVar3 = (longlong *)param_3[1];
  }
  (**(code **)(*plVar3 + 0x50))(plVar3,local_58);
LAB_14313ce3e:
  CAkPlayingMgr::RemoveItemActiveCount(DAT_146b50b00,(int)param_3[6]);
  (**(code **)(*(longlong *)param_3[1] + 0x10))();
  lVar1 = g_DefaultPoolId;
  (**(code **)(*param_3 + 8))(param_3,0);
  AK::MemoryMgr::Free(lVar1,param_3);
  return;
}



// FUNCTION 14313ce80 IsAnException body=279 status=ok
// SIG undefined IsAnException(void)

ulonglong CAkAudioMgr::IsAnException(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  ulonglong in_RAX;
  longlong *plVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  
  if (param_3 != (undefined8 *)0x0) {
    bVar3 = false;
    lVar7 = 0;
    if (*(int *)(param_2 + 0x30) != 0) {
      plVar4 = (longlong *)CAkAction::GetAndRefTarget(param_2);
      in_RAX = 0;
      if (plVar4 != (longlong *)0x0) {
        piVar2 = (int *)*param_3;
        piVar1 = piVar2 + (ulonglong)*(uint *)(param_3 + 1) * 2;
        plVar5 = plVar4;
        do {
          if (piVar2 != piVar1) {
            piVar6 = piVar2;
            do {
              if (((int)plVar5[2] == *piVar6) &&
                 (*(byte *)(plVar5 + 0x15) >> 7 == *(byte *)(piVar6 + 1))) goto LAB_14313cf7a;
              piVar6 = piVar6 + 2;
            } while (piVar6 != piVar1);
          }
          if ((!bVar3) && (lVar7 = plVar5[0x11], lVar7 != 0)) {
            bVar3 = true;
          }
          plVar5 = (longlong *)plVar5[0x10];
        } while (plVar5 != (longlong *)0x0);
        for (; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x88)) {
          if (piVar2 != piVar1) {
            piVar6 = piVar2;
            do {
              if ((*(int *)(lVar7 + 0x10) == *piVar6) &&
                 (*(byte *)(lVar7 + 0xa8) >> 7 == *(byte *)(piVar6 + 1))) {
LAB_14313cf7a:
                (**(code **)(*plVar4 + 0x10))(plVar4);
                return 1;
              }
              piVar6 = piVar6 + 2;
            } while (piVar6 != piVar1);
          }
        }
        in_RAX = (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14313cfa0 FUN_14313cfa0 body=593 status=ok
// SIG undefined FUN_14313cfa0(void)

undefined8 FUN_14313cfa0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  char cVar6;
  longlong *plVar7;
  undefined4 local_78 [20];
  
  if (1 < param_4 - 2U) {
    return 1;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  puVar4 = (undefined8 *)0x0;
  while (puVar3 = puVar2, puVar3 != (undefined8 *)0x0) {
    plVar1 = (longlong *)puVar3[2];
    if ((plVar1[1] == param_2) &&
       ((param_4 != 2 ||
        (cVar6 = CAkActionPlayAndContinue::BreakToNode(plVar1[1],param_3,plVar1[8],plVar1),
        cVar6 != '\0')))) {
      plVar7 = (longlong *)plVar1[1];
      local_78[0] = 0;
      if (*(short *)((longlong)plVar7 + 0x34) == 0x403) {
LAB_14313d046:
        (**(code **)(*plVar7 + 0x50))(plVar7,local_78);
      }
      else if (*(short *)((longlong)plVar7 + 0x34) == 0x503) {
        FUN_1431a5b70();
        plVar7 = (longlong *)plVar1[1];
        goto LAB_14313d046;
      }
      CAkPlayingMgr::RemoveItemActiveCount(DAT_146b50b00,(int)plVar1[6]);
      puVar2 = (undefined8 *)*puVar3;
      if (puVar3 == *(undefined8 **)(param_1 + 0x28)) {
        *(undefined8 **)(param_1 + 0x28) = puVar2;
      }
      else {
        *puVar4 = puVar2;
      }
      if (puVar3 == *(undefined8 **)(param_1 + 0x30)) {
        *(undefined8 **)(param_1 + 0x30) = puVar4;
      }
      *puVar3 = *(undefined8 *)(param_1 + 0x38);
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
      *(undefined8 **)(param_1 + 0x38) = puVar3;
      (**(code **)(*(longlong *)plVar1[1] + 0x10))();
      lVar5 = g_DefaultPoolId;
      (**(code **)(*plVar1 + 8))(plVar1,0);
      AK::MemoryMgr::Free(lVar5,plVar1);
    }
    else {
      puVar2 = (undefined8 *)*puVar3;
      puVar4 = puVar3;
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  puVar4 = (undefined8 *)0x0;
  do {
    while( true ) {
      puVar3 = puVar2;
      if (puVar3 == (undefined8 *)0x0) {
        return 1;
      }
      plVar1 = (longlong *)puVar3[2];
      if ((plVar1[1] == param_2) &&
         (cVar6 = CAkActionPlayAndContinue::BreakToNode(plVar1[1],param_3,plVar1[8],plVar1),
         cVar6 != '\0')) break;
      puVar2 = (undefined8 *)*puVar3;
      puVar4 = puVar3;
    }
    plVar7 = (longlong *)plVar1[1];
    local_78[0] = 0;
    if (*(short *)((longlong)plVar7 + 0x34) == 0x403) {
LAB_14313d130:
      (**(code **)(*plVar7 + 0x50))(plVar7,local_78);
    }
    else if (*(short *)((longlong)plVar7 + 0x34) == 0x503) {
      FUN_1431a5b70();
      plVar7 = (longlong *)plVar1[1];
      goto LAB_14313d130;
    }
    CAkPlayingMgr::RemoveItemActiveCount(DAT_146b50b00,(int)plVar1[6]);
    puVar2 = (undefined8 *)*puVar3;
    if (puVar3 == *(undefined8 **)(param_1 + 0x50)) {
      *(undefined8 **)(param_1 + 0x50) = puVar2;
    }
    else {
      *puVar4 = puVar2;
    }
    if (puVar3 == *(undefined8 **)(param_1 + 0x58)) {
      *(undefined8 **)(param_1 + 0x58) = puVar4;
    }
    *puVar3 = *(undefined8 *)(param_1 + 0x60);
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
    *(undefined8 **)(param_1 + 0x60) = puVar3;
    (**(code **)(*(longlong *)plVar1[1] + 0x10))();
    lVar5 = g_DefaultPoolId;
    (**(code **)(*plVar1 + 8))(plVar1,0);
    AK::MemoryMgr::Free(lVar5,plVar1);
  } while( true );
}



// FUNCTION 14313d200 PausePending body=257 status=ok
// SIG undefined PausePending(void)

undefined8 CAkAudioMgr::PausePending(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if (param_2 != 0) {
    if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0x28);
      plVar7 = (longlong *)0x0;
      do {
        plVar6 = plVar4;
        lVar1 = plVar6[2];
        lVar2 = *(longlong *)(lVar1 + 8);
        if (lVar1 == param_2) {
          iVar5 = 0;
          if (*(short *)(lVar2 + 0x34) == 0x503) {
            iVar5 = *(int *)(lVar2 + 0xe8) + -1;
            *(undefined4 *)(lVar2 + 0xe8) = 0;
          }
          FUN_14313cdd0(param_1,*(undefined4 *)(lVar2 + 0x30),lVar1,iVar5);
          if (plVar6 == *(longlong **)(param_1 + 0x28)) {
            *(longlong *)(param_1 + 0x28) = *plVar6;
          }
          else {
            *plVar7 = *plVar6;
          }
          if (plVar6 == *(longlong **)(param_1 + 0x30)) {
            *(longlong **)(param_1 + 0x30) = plVar7;
          }
          *plVar6 = *(longlong *)(param_1 + 0x38);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
          *(longlong **)(param_1 + 0x38) = plVar6;
          return 1;
        }
        plVar4 = (longlong *)*plVar6;
        plVar7 = plVar6;
      } while ((longlong *)*plVar6 != (longlong *)0x0);
    }
    for (puVar3 = *(undefined8 **)(param_1 + 0x50); puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)*puVar3) {
      lVar1 = puVar3[2];
      if (lVar1 == param_2) {
        if (*(short *)(*(longlong *)(lVar1 + 8) + 0x34) == 0x503) {
          *(int *)(lVar1 + 0x34) =
               *(int *)(lVar1 + 0x34) + *(int *)(*(longlong *)(lVar1 + 8) + 0xe8);
          return 1;
        }
        *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + 1;
        return 1;
      }
    }
  }
  return 1;
}



// FUNCTION 14313d310 PausePendingAction body=255 status=ok
// SIG undefined PausePendingAction(void)

void CAkAudioMgr::PausePendingAction(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = *(undefined8 **)(param_1 + 0x50);
  while (puVar6 != (undefined8 *)0x0) {
    lVar2 = puVar6[2];
    lVar3 = *(longlong *)(lVar2 + 8);
    plVar5 = (longlong *)CAkAction::GetAndRefTarget(lVar3);
    if (lVar3 == param_2) {
      piVar1 = (int *)(lVar2 + 0x34);
      *piVar1 = *piVar1 + 1;
    }
    puVar6 = (undefined8 *)*puVar6;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  puVar6 = *(undefined8 **)(param_1 + 0x28);
  puVar4 = (undefined8 *)0x0;
  while (puVar7 = puVar6, puVar7 != (undefined8 *)0x0) {
    lVar2 = puVar7[2];
    lVar3 = *(longlong *)(lVar2 + 8);
    plVar5 = (longlong *)CAkAction::GetAndRefTarget(lVar3);
    if (lVar3 == param_2) {
      FUN_14313cdd0(param_1,*(undefined4 *)(lVar3 + 0x30),lVar2,0);
      puVar6 = (undefined8 *)*puVar7;
      if (puVar7 == *(undefined8 **)(param_1 + 0x28)) {
        *(undefined8 **)(param_1 + 0x28) = puVar6;
      }
      else {
        *puVar4 = puVar6;
      }
      if (puVar7 == *(undefined8 **)(param_1 + 0x30)) {
        *(undefined8 **)(param_1 + 0x30) = puVar4;
      }
      *puVar7 = *(undefined8 *)(param_1 + 0x38);
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
      *(undefined8 **)(param_1 + 0x38) = puVar7;
      puVar7 = puVar4;
    }
    else {
      puVar6 = (undefined8 *)*puVar7;
    }
    puVar4 = puVar7;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return;
}



// FUNCTION 14313d410 PausePendingAction body=624 status=ok
// SIG undefined PausePendingAction(void)

void CAkAudioMgr::PausePendingAction
               (longlong param_1,longlong *param_2,longlong param_3,char param_4,int param_5)

{
  ushort uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  while (puVar2 != (undefined8 *)0x0) {
    lVar3 = puVar2[2];
    lVar4 = *(longlong *)(lVar3 + 8);
    plVar6 = (longlong *)CAkAction::GetAndRefTarget(lVar4);
    if (param_2 == (longlong *)0x0) {
LAB_14313d4d5:
      uVar1 = *(ushort *)(lVar4 + 0x34);
      if (((((uVar1 & 0xff00) != 0x300) || (param_4 != '\0')) &&
          ((param_3 == 0 || (param_3 == *(longlong *)(lVar3 + 0x40))))) &&
         (((param_5 == 0 || (param_5 == *(int *)(lVar3 + 0x30))) && (uVar1 != 0x1820)))) {
        *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + 1;
      }
    }
    else if (plVar6 != (longlong *)0x0) {
      if (param_2 == plVar6) goto LAB_14313d4d5;
      plVar7 = (longlong *)plVar6[0x11];
      for (plVar5 = (longlong *)plVar6[0x10]; plVar5 != (longlong *)0x0;
          plVar5 = (longlong *)plVar5[0x10]) {
        if (param_2 == plVar5) goto LAB_14313d4d5;
        if (plVar7 == (longlong *)0x0) {
          plVar7 = (longlong *)plVar5[0x11];
        }
      }
      for (; plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[0x11]) {
        if (param_2 == plVar7) goto LAB_14313d4d5;
      }
    }
    puVar2 = (undefined8 *)*puVar2;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  puVar9 = (undefined8 *)0x0;
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  do {
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    lVar3 = puVar2[2];
    lVar4 = *(longlong *)(lVar3 + 8);
    plVar6 = (longlong *)CAkAction::GetAndRefTarget(lVar4);
    if (param_2 == (longlong *)0x0) {
LAB_14313d5f5:
      if (((((*(ushort *)(lVar4 + 0x34) & 0xff00) == 0x300) && (param_4 == '\0')) ||
          ((param_3 != 0 && (param_3 != *(longlong *)(lVar3 + 0x40))))) ||
         (((param_5 != 0 && (param_5 != *(int *)(lVar3 + 0x30))) ||
          (*(ushort *)(lVar4 + 0x34) == 0x1820)))) goto LAB_14313d5c3;
      FUN_14313cdd0(param_1,*(undefined4 *)(lVar4 + 0x30),lVar3,0);
      puVar8 = (undefined8 *)*puVar2;
      if (puVar2 == *(undefined8 **)(param_1 + 0x28)) {
        *(undefined8 **)(param_1 + 0x28) = puVar8;
      }
      else {
        *puVar9 = puVar8;
      }
      if (puVar2 == *(undefined8 **)(param_1 + 0x30)) {
        *(undefined8 **)(param_1 + 0x30) = puVar9;
      }
      *puVar2 = *(undefined8 *)(param_1 + 0x38);
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
      *(undefined8 **)(param_1 + 0x38) = puVar2;
    }
    else {
      if (plVar6 != (longlong *)0x0) {
        if (param_2 == plVar6) goto LAB_14313d5f5;
        plVar7 = (longlong *)plVar6[0x11];
        for (plVar5 = (longlong *)plVar6[0x10]; plVar5 != (longlong *)0x0;
            plVar5 = (longlong *)plVar5[0x10]) {
          if (param_2 == plVar5) goto LAB_14313d5f5;
          if (plVar7 == (longlong *)0x0) {
            plVar7 = (longlong *)plVar5[0x11];
          }
        }
        for (; plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[0x11]) {
          if (param_2 == plVar7) goto LAB_14313d5f5;
        }
      }
LAB_14313d5c3:
      puVar8 = (undefined8 *)*puVar2;
      puVar9 = puVar2;
    }
    puVar2 = puVar8;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  } while( true );
}



// FUNCTION 14313d680 PausePendingActionAllExcept body=388 status=ok
// SIG undefined PausePendingActionAllExcept(void)

void CAkAudioMgr::PausePendingActionAllExcept
               (longlong param_1,longlong param_2,undefined8 param_3,char param_4,int param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char cVar6;
  
  for (puVar1 = *(undefined8 **)(param_1 + 0x50); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    lVar2 = puVar1[2];
    lVar3 = *(longlong *)(lVar2 + 8);
    if (((((*(ushort *)(lVar3 + 0x34) & 0xff00) != 0x300) || (param_4 != '\0')) &&
        ((param_2 == 0 || (param_2 == *(longlong *)(lVar2 + 0x40))))) &&
       ((((param_5 == 0 || (param_5 == *(int *)(lVar2 + 0x30))) &&
         (cVar6 = IsAnException(param_1,lVar3,param_3), cVar6 == '\0')) &&
        (*(short *)(lVar3 + 0x34) != 0x1820)))) {
      *(int *)(lVar2 + 0x34) = *(int *)(lVar2 + 0x34) + 1;
    }
  }
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  puVar5 = (undefined8 *)0x0;
  while (puVar4 = puVar1, puVar4 != (undefined8 *)0x0) {
    lVar2 = puVar4[2];
    lVar3 = *(longlong *)(lVar2 + 8);
    if ((((((*(ushort *)(lVar3 + 0x34) & 0xff00) == 0x300) && (param_4 == '\0')) ||
         ((param_2 != 0 && (param_2 != *(longlong *)(lVar2 + 0x40))))) ||
        (((param_5 != 0 && (param_5 != *(int *)(lVar2 + 0x30))) ||
         (cVar6 = IsAnException(param_1,lVar3,param_3), cVar6 != '\0')))) ||
       (*(short *)(lVar3 + 0x34) == 0x1820)) {
      puVar1 = (undefined8 *)*puVar4;
      puVar5 = puVar4;
    }
    else {
      FUN_14313cdd0(param_1,*(undefined4 *)(lVar3 + 0x30),lVar2,0);
      puVar1 = (undefined8 *)*puVar4;
      if (puVar4 == *(undefined8 **)(param_1 + 0x28)) {
        *(undefined8 **)(param_1 + 0x28) = puVar1;
      }
      else {
        *puVar5 = puVar1;
      }
      if (puVar4 == *(undefined8 **)(param_1 + 0x30)) {
        *(undefined8 **)(param_1 + 0x30) = puVar5;
      }
      *puVar4 = *(undefined8 *)(param_1 + 0x38);
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
      *(undefined8 **)(param_1 + 0x38) = puVar4;
    }
  }
  return;
}



// FUNCTION 14313d810 PausePendingItems body=216 status=ok
// SIG undefined PausePendingItems(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CAkAudioMgr::PausePendingItems(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  for (puVar2 = *(undefined8 **)(param_1 + 0x50); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    if ((*(int *)(puVar2[2] + 0x30) == param_2) && (_DAT_00000034 != 0x1820)) {
      piVar1 = (int *)(puVar2[2] + 0x34);
      *piVar1 = *piVar1 + 1;
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  puVar5 = (undefined8 *)0x0;
  while (puVar4 = puVar2, puVar4 != (undefined8 *)0x0) {
    lVar3 = puVar4[2];
    if ((*(int *)(lVar3 + 0x30) == param_2) &&
       (*(short *)(*(longlong *)(lVar3 + 8) + 0x34) != 0x1820)) {
      FUN_14313cdd0(param_1,*(undefined4 *)(*(longlong *)(lVar3 + 8) + 0x30),lVar3,0);
      puVar2 = (undefined8 *)*puVar4;
      if (puVar4 == *(undefined8 **)(param_1 + 0x28)) {
        *(undefined8 **)(param_1 + 0x28) = puVar2;
      }
      else {
        *puVar5 = puVar2;
      }
      if (puVar4 == *(undefined8 **)(param_1 + 0x30)) {
        *(undefined8 **)(param_1 + 0x30) = puVar5;
      }
      *puVar4 = *(undefined8 *)(param_1 + 0x38);
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
      *(undefined8 **)(param_1 + 0x38) = puVar4;
    }
    else {
      puVar2 = (undefined8 *)*puVar4;
      puVar5 = puVar4;
    }
  }
  return;
}



// FUNCTION 14313d8f0 FUN_14313d8f0 body=758 status=ok
// SIG undefined FUN_14313d8f0(void)

/* WARNING: Removing unreachable block (ram,0x00014313da5e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14313d8f0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  char local_res8 [8];
  undefined4 local_78 [20];
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  QueryPerformanceCounter((LARGE_INTEGER *)&DAT_146b51f20);
  FUN_143121760(2);
  iVar7 = FUN_14313c560(param_1);
  if (iVar7 == 0) {
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
    if ((*(uint *)(param_1 + 0x98) <= DAT_146b50bf0 / DAT_1467bdca8) ||
       (((DAT_146b50e1e != '\0' && (DAT_1467bdcd0 == '\0')) ||
        ((float)(DAT_146b51f20 - *(longlong *)(param_1 + 0x90)) / _DAT_146b51f08 <=
         (float)DAT_146b50bf0)))) goto LAB_14313d9e2;
    FUN_14312bac0(1);
    QueryPerformanceCounter((LARGE_INTEGER *)(param_1 + 0x90));
  }
  else if (*(longlong *)(param_1 + 0x90) < DAT_146b51f20) {
    *(longlong *)(param_1 + 0x90) = DAT_146b51f20;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
LAB_14313d9e2:
  do {
    if (iVar7 != 0) {
      FUN_143121760(4);
    }
    local_res8[0] = '\0';
    cVar5 = FUN_14313e2c0(param_1,0,local_res8);
    if ((local_res8[0] != '\0') || (DAT_146b50e1c != '\0')) {
      iVar7 = FUN_14313c560(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    while ((puVar1 != (undefined8 *)0x0 && (*(uint *)(puVar1 + 1) <= *(uint *)(param_1 + 0x78)))) {
      plVar2 = (longlong *)puVar1[2];
      *(undefined8 *)(param_1 + 0x28) = *puVar1;
      if (puVar1 == *(undefined8 **)(param_1 + 0x30)) {
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
      *puVar1 = *(undefined8 *)(param_1 + 0x38);
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
      *(undefined8 **)(param_1 + 0x38) = puVar1;
      plVar8 = (longlong *)plVar2[1];
      local_78[0] = 0;
      if (*(short *)((longlong)plVar8 + 0x34) == 0x403) {
LAB_14313da9f:
        (**(code **)(*plVar8 + 0x50))(plVar8,local_78);
      }
      else if ((*(short *)((longlong)plVar8 + 0x34) == 0x503) &&
              (cVar6 = FUN_1431a5b70(), cVar6 != '\0')) {
        plVar8 = (longlong *)plVar2[1];
        goto LAB_14313da9f;
      }
      lVar3 = plVar2[8];
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x40) != 0)) && (**(longlong **)(lVar3 + 0x38) != 0)) {
        FUN_143172a90();
      }
      (**(code **)(*(longlong *)plVar2[1] + 0x38))((longlong *)plVar2[1],plVar2);
      if ((int)plVar2[6] != 0) {
        CAkPlayingMgr::RemoveItemActiveCount(DAT_146b50b00);
      }
      (**(code **)(*(longlong *)plVar2[1] + 0x10))();
      lVar4 = g_DefaultPoolId;
      (**(code **)(*plVar2 + 8))(plVar2,0);
      AK::MemoryMgr::Free(lVar4,plVar2);
      DAT_146b51f48 = DAT_146b51f48 + 1;
      puVar1 = *(undefined8 **)(param_1 + 0x28);
    }
    if (cVar5 != '\0') {
      FUN_143121760(8);
      CAkListener::OnBeginFrame();
      CAkRegistryMgr::UpdateGameObjectPositions(g_pRegistryMgr);
    }
    if (DAT_146b51f4c != '\0') {
      FUN_14318a020();
    }
    if (iVar7 == 0) {
      FUN_143121760(0x40);
                    /* WARNING: Could not recover jumptable at 0x00014313dbdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
      return;
    }
    FUN_143121760(0x10);
    CAkTransitionManager::ProcessTransitionsList(DAT_146b50af0,*(int *)(param_1 + 0x78) + 1);
    CAkPathManager::ProcessPathsList(DAT_146b50b10);
    FUN_143189940();
    CAkModulatorMgr::ProcessModulators(DAT_146b50ae0);
    CAkLEngine::Perform();
    FUN_143160c90();
    FUN_143121760(0x20);
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    iVar7 = iVar7 + -1;
  } while( true );
}



// FUNCTION 14313dbf0 ProcessAction body=124 status=ok
// SIG undefined ProcessAction(void)

void CAkAudioMgr::ProcessAction(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  long lVar2;
  
  lVar1 = param_2[8];
  if (((lVar1 != 0) && (*(int *)(lVar1 + 0x40) != 0)) && (**(longlong **)(lVar1 + 0x38) != 0)) {
    FUN_143172a90();
  }
  (**(code **)(*(longlong *)param_2[1] + 0x38))((longlong *)param_2[1],param_2);
  if ((int)param_2[6] != 0) {
    CAkPlayingMgr::RemoveItemActiveCount(DAT_146b50b00);
  }
  (**(code **)(*(longlong *)param_2[1] + 0x10))();
  lVar2 = g_DefaultPoolId;
  (**(code **)(*param_2 + 8))(param_2,0);
  AK::MemoryMgr::Free(lVar2,param_2);
  return;
}



// FUNCTION 14313dc70 ProcessAllActions body=932 status=ok
// SIG undefined ProcessAllActions(void)

void CAkAudioMgr::ProcessAllActions
               (undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined2 local_38;
  undefined1 local_36;
  undefined2 local_35;
  longlong *local_30;
  
  lVar4 = *(longlong *)(param_2 + 0x20);
  lVar9 = DAT_146b50af8;
  do {
    if (lVar4 == 0) {
      DAT_146b50af8 = lVar9;
      return;
    }
    DAT_146b50af8 = lVar9;
    if (*(short *)(lVar4 + 0x34) == 0x403) {
      plVar10 = (longlong *)CAkAction::GetAndRefTarget(lVar4);
      if (plVar10 == (longlong *)0x0) goto LAB_14313de00;
      local_40 = *(undefined4 *)(param_3 + 0x1c);
      local_48 = *(undefined4 *)(param_3 + 0x20);
      local_44 = *(undefined4 *)(param_3 + 0x18);
      iVar2 = *(int *)(param_3 + 0x14);
      local_3c = 0;
      local_35 = 0;
      local_38 = 0;
      local_36 = 0;
      local_50 = param_4;
      local_30 = plVar10;
      if (iVar2 == 0) {
        FUN_143140ce0(DAT_146b50b78,plVar10,param_4);
        local_58[0] = 0;
LAB_14313dff5:
        (**(code **)(*plVar10 + 0x90))(plVar10,local_58);
      }
      else {
        if (iVar2 == 1) {
          PausePendingAction(DAT_146b50b78,plVar10,param_4,
                             CONCAT71((uint7)(uint3)((uint)local_48 >> 8),1),local_48);
          local_58[0] = 1;
          goto LAB_14313dff5;
        }
        if (iVar2 == 2) {
          ResumePausedPendingAction(DAT_146b50b78,plVar10,param_4,0,local_48);
          local_58[0] = 2;
          goto LAB_14313dff5;
        }
        if (iVar2 == 3) {
          FUN_14313bf70(DAT_146b50b78,plVar10,param_4);
          local_58[0] = 3;
          goto LAB_14313dff5;
        }
        if (iVar2 == 4) {
          local_58[0] = 5;
          goto LAB_14313dff5;
        }
      }
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else {
      if (*(short *)(lVar4 + 0x34) == 0x2103) {
        uVar1 = *(uint *)(lVar4 + 0x30);
        lpCriticalSection = (LPCRITICAL_SECTION)(lVar9 + 0xc0);
        EnterCriticalSection(lpCriticalSection);
        if (*(uint *)(lVar9 + 0xf0) != 0) {
          for (plVar10 = *(longlong **)
                          (*(longlong *)(lVar9 + 0xe8) +
                          ((ulonglong)uVar1 % (ulonglong)*(uint *)(lVar9 + 0xf0)) * 8);
              plVar10 != (longlong *)0x0; plVar10 = (longlong *)plVar10[1]) {
            if (*(uint *)(plVar10 + 2) == uVar1) {
              if (plVar10 != (longlong *)0x0) {
                *(int *)((longlong)plVar10 + 0x14) = *(int *)((longlong)plVar10 + 0x14) + 1;
                LeaveCriticalSection(lpCriticalSection);
                ProcessAllActions(param_1,plVar10,param_3,param_4);
                (**(code **)(*plVar10 + 0x10))(plVar10);
                goto LAB_14313dd0f;
              }
              break;
            }
          }
        }
        LeaveCriticalSection(lpCriticalSection);
      }
LAB_14313dd0f:
      lVar9 = DAT_146b50b78;
      iVar2 = *(int *)(param_3 + 0x14);
      if (iVar2 == 0) {
LAB_14313dd2e:
        FUN_143140900(DAT_146b50b78,*(undefined4 *)(lVar4 + 0x10),*(undefined4 *)(param_3 + 0x20));
      }
      else if (iVar2 == 1) {
        iVar2 = *(int *)(lVar4 + 0x10);
        iVar3 = *(int *)(param_3 + 0x20);
        for (puVar6 = *(undefined8 **)(DAT_146b50b78 + 0x50); puVar6 != (undefined8 *)0x0;
            puVar6 = (undefined8 *)*puVar6) {
          lVar5 = puVar6[2];
          if ((iVar2 == *(int *)(*(longlong *)(lVar5 + 8) + 0x10)) &&
             ((iVar3 == 0 || (*(int *)(lVar5 + 0x30) == iVar3)))) {
            *(int *)(lVar5 + 0x34) = *(int *)(lVar5 + 0x34) + 1;
          }
        }
        puVar6 = *(undefined8 **)(lVar9 + 0x28);
        puVar8 = (undefined8 *)0x0;
        while (puVar7 = puVar6, puVar7 != (undefined8 *)0x0) {
          lVar5 = puVar7[2];
          if ((iVar2 == *(int *)(*(longlong *)(lVar5 + 8) + 0x10)) &&
             ((iVar3 == 0 || (*(int *)(lVar5 + 0x30) == iVar3)))) {
            FUN_14313cdd0(lVar9,*(undefined4 *)(*(longlong *)(lVar5 + 8) + 0x30),lVar5,0);
            puVar6 = (undefined8 *)*puVar7;
            if (puVar7 == *(undefined8 **)(lVar9 + 0x28)) {
              *(undefined8 **)(lVar9 + 0x28) = puVar6;
            }
            else {
              *puVar8 = puVar6;
            }
            if (puVar7 == *(undefined8 **)(lVar9 + 0x30)) {
              *(undefined8 **)(lVar9 + 0x30) = puVar8;
            }
            *puVar7 = *(undefined8 *)(lVar9 + 0x38);
            *(int *)(lVar9 + 0x4c) = *(int *)(lVar9 + 0x4c) + -1;
            *(undefined8 **)(lVar9 + 0x38) = puVar7;
          }
          else {
            puVar6 = (undefined8 *)*puVar7;
            puVar8 = puVar7;
          }
        }
      }
      else {
        if (iVar2 == 2) {
          iVar2 = *(int *)(lVar4 + 0x10);
          iVar3 = *(int *)(param_3 + 0x20);
          puVar6 = *(undefined8 **)(DAT_146b50b78 + 0x50);
          puVar8 = (undefined8 *)0x0;
joined_r0x00014313dd8c:
          do {
            puVar7 = puVar6;
            if (puVar7 == (undefined8 *)0x0) goto LAB_14313de00;
            lVar5 = puVar7[2];
            if ((*(int *)(*(longlong *)(lVar5 + 8) + 0x10) == iVar2) &&
               ((iVar3 == 0 || (*(int *)(lVar5 + 0x30) == iVar3)))) {
              if (*(int *)(lVar5 + 0x34) == 0) {
                FUN_143141770(lVar9,lVar5);
                puVar6 = (undefined8 *)*puVar7;
                if (puVar7 == *(undefined8 **)(lVar9 + 0x50)) {
                  *(undefined8 **)(lVar9 + 0x50) = puVar6;
                }
                else {
                  *puVar8 = puVar6;
                }
                if (puVar7 == *(undefined8 **)(lVar9 + 0x58)) {
                  *(undefined8 **)(lVar9 + 0x58) = puVar8;
                }
                *puVar7 = *(undefined8 *)(lVar9 + 0x60);
                *(int *)(lVar9 + 0x74) = *(int *)(lVar9 + 0x74) + -1;
                *(undefined8 **)(lVar9 + 0x60) = puVar7;
                goto joined_r0x00014313dd8c;
              }
              *(int *)(lVar5 + 0x34) = *(int *)(lVar5 + 0x34) + -1;
            }
            puVar6 = (undefined8 *)*puVar7;
            puVar8 = puVar7;
          } while( true );
        }
        if (iVar2 == 3) goto LAB_14313dd2e;
      }
    }
LAB_14313de00:
    lVar4 = *(longlong *)(lVar4 + 0x18);
    lVar9 = DAT_146b50af8;
  } while( true );
}



// FUNCTION 14313e020 ProcessAllActions body=333 status=ok
// SIG undefined ProcessAllActions(void)

void CAkAudioMgr::ProcessAllActions
               (undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  
  lVar2 = *(longlong *)(param_2 + 0x20);
  lVar3 = DAT_146b50af8;
  do {
    if (lVar2 == 0) {
      DAT_146b50af8 = lVar3;
      return;
    }
    DAT_146b50af8 = lVar3;
    if (*(short *)(lVar2 + 0x34) == 0x403) {
      plVar5 = (longlong *)CAkAction::GetAndRefTarget(lVar2);
      if (plVar5 != (longlong *)0x0) {
        iVar4 = (**(code **)(*plVar5 + 0x80))(plVar5);
        if (((iVar4 - 2U < 4) && (param_4 != 0)) && (DAT_146b51f00 != 0)) {
          CAkMidiDeviceMgr::PostEvents
                    (DAT_146b51f00,(int)plVar5[2],*(undefined8 *)(param_4 + 0x48),param_3 + 0x18,
                     *(undefined4 *)(param_3 + 0x14));
        }
LAB_14313e132:
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    else if (*(short *)(lVar2 + 0x34) == 0x2103) {
      uVar1 = *(uint *)(lVar2 + 0x30);
      lpCriticalSection = (LPCRITICAL_SECTION)(lVar3 + 0xc0);
      EnterCriticalSection(lpCriticalSection);
      if (*(uint *)(lVar3 + 0xf0) != 0) {
        for (plVar5 = *(longlong **)
                       (*(longlong *)(lVar3 + 0xe8) +
                       ((ulonglong)uVar1 % (ulonglong)*(uint *)(lVar3 + 0xf0)) * 8);
            plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[1]) {
          if (*(uint *)(plVar5 + 2) == uVar1) {
            if (plVar5 != (longlong *)0x0) {
              *(int *)((longlong)plVar5 + 0x14) = *(int *)((longlong)plVar5 + 0x14) + 1;
              LeaveCriticalSection(lpCriticalSection);
              ProcessAllActions(param_1,plVar5,param_3,param_4);
              goto LAB_14313e132;
            }
            break;
          }
        }
      }
      LeaveCriticalSection(lpCriticalSection);
    }
    lVar2 = *(longlong *)(lVar2 + 0x18);
    lVar3 = DAT_146b50af8;
  } while( true );
}



// FUNCTION 14313e170 FUN_14313e170 body=324 status=ok
// SIG undefined FUN_14313e170(void)

void FUN_14313e170(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    if (DAT_146b51f00 != 0) {
      if (param_4 != 0) {
        CAkMidiDeviceMgr::StopAll(DAT_146b51f00,0,*(undefined8 *)(param_4 + 0x48));
        return;
      }
      CAkMidiDeviceMgr::StopAll(DAT_146b51f00,0,0xffffffffffffffff);
      return;
    }
  }
  else {
    for (lVar1 = *(longlong *)(param_2 + 0x20); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x18)) {
      if (*(short *)(lVar1 + 0x34) == 0x403) {
        plVar2 = (longlong *)CAkAction::GetAndRefTarget(lVar1);
        if (plVar2 != (longlong *)0x0) {
          if (DAT_146b51f00 != 0) {
            if (param_4 == 0) {
              uVar3 = 0xffffffffffffffff;
            }
            else {
              uVar3 = *(undefined8 *)(param_4 + 0x48);
            }
            CAkMidiDeviceMgr::StopAll(DAT_146b51f00,(int)plVar2[2],uVar3);
          }
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      else if ((*(short *)(lVar1 + 0x34) == 0x2103) &&
              (plVar2 = (longlong *)
                        CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef
                                  (DAT_146b50af8 + 0xc0,*(undefined4 *)(lVar1 + 0x30)),
              plVar2 != (longlong *)0x0)) {
        FUN_14313e170(param_1,plVar2,param_3,param_4);
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  return;
}



// FUNCTION 14313e2c0 FUN_14313e2c0 body=5778 status=ok
// SIG undefined FUN_14313e2c0(void)

ulonglong FUN_14313e2c0(ulonglong *param_1,char param_2,undefined1 *param_3)

{
  CAkRegisteredObj *pCVar1;
  ushort uVar2;
  ushort *puVar3;
  int *piVar4;
  __uint64 _Var5;
  undefined8 uVar6;
  long lVar7;
  CAkSwitchMgr *pCVar8;
  byte bVar9;
  char cVar10;
  undefined4 uVar11;
  int iVar12;
  CAkRegisteredObj *pCVar13;
  longlong *plVar14;
  ushort *puVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined ***pppuVar20;
  ulonglong uVar21;
  uint uVar22;
  bool bVar23;
  uint uVar24;
  undefined4 uVar25;
  ulonglong uVar26;
  undefined7 uVar27;
  uint uVar28;
  LPCRITICAL_SECTION p_Var29;
  bool bVar30;
  TransParamsBase *in_stack_fffffffffffffb70;
  undefined4 uVar31;
  uint local_478;
  byte local_468;
  undefined1 local_467 [7];
  undefined4 local_460;
  undefined4 local_45c;
  undefined1 local_458;
  undefined1 local_450 [8];
  undefined1 *local_448;
  ulonglong local_440;
  undefined1 local_438 [8];
  undefined1 *local_430;
  ulonglong local_428;
  undefined1 local_420 [8];
  undefined1 *local_418;
  ulonglong local_410;
  undefined4 local_408;
  undefined4 local_404;
  undefined1 local_400;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined1 local_3f0;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined1 local_3e0;
  undefined4 local_3d8 [2];
  undefined8 local_3d0;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined1 local_3bc;
  undefined2 local_3b8;
  undefined1 local_3b6;
  undefined2 local_3b5;
  undefined8 local_3b0;
  undefined4 local_3a8 [2];
  undefined8 local_3a0;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  undefined1 local_38c;
  undefined2 local_388;
  undefined1 local_386;
  undefined2 local_385;
  undefined8 local_380;
  undefined4 local_378 [2];
  CAkRegisteredObj *local_370;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined1 local_35c;
  undefined2 local_358;
  undefined1 local_356;
  undefined2 local_355;
  undefined8 local_350;
  undefined8 local_348;
  undefined4 local_340;
  byte local_33c;
  undefined8 local_338;
  undefined8 local_330;
  undefined4 local_328;
  undefined4 local_324;
  undefined8 local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 local_30c;
  undefined8 local_308;
  undefined4 local_300;
  undefined4 local_2f8;
  undefined1 local_2f0;
  undefined1 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 local_2c8;
  undefined1 local_2c0;
  undefined1 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined4 local_284;
  undefined8 local_280;
  undefined **local_278 [3];
  undefined8 local_25c;
  undefined8 local_254;
  undefined8 local_24c;
  undefined4 local_240;
  CAkRegisteredObj *local_238;
  undefined **local_228 [3];
  undefined8 local_20c;
  undefined8 local_204;
  undefined8 local_1fc;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1d8 [2];
  longlong *local_1d0;
  CAkRegisteredObj *local_1c8;
  undefined4 *local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  char local_140 [3];
  char local_13d;
  undefined1 local_130 [224];
  byte local_50;
  
  *param_3 = 0;
  uVar26 = *param_1;
  uVar19 = *param_1;
  if (param_1[1] < uVar26) {
    uVar24 = (int)param_1[4] - (int)uVar19;
    uVar26 = (ulonglong)uVar24;
  }
  else {
    uVar24 = -(int)uVar19;
  }
  uVar24 = (int)param_1[1] + uVar24;
  if (uVar24 != 0) {
    if (param_2 == '\0') {
      if (*(int *)((longlong)param_1 + 0x7c) != 0) {
LAB_14313e337:
        uVar26 = uVar26 & 0xffffffffffffff00;
        bVar23 = false;
        uVar28 = 0;
        bVar30 = false;
        local_478 = 0;
        do {
          pCVar13 = (CAkRegisteredObj *)0x0;
          while (puVar3 = (ushort *)*param_1, param_1[3] < *param_1 + 4) {
switchD_14313e3ba_caseD_37:
            uVar19 = (ulonglong)((int)param_1[4] + 3U & 0xfffffffc) + *param_1;
            if (uVar19 < param_1[3]) {
              *param_1 = uVar19;
            }
            else {
              *param_1 = param_1[2];
            }
          }
          uVar19 = (ulonglong)puVar3[1];
          if (0x37 < puVar3[1]) goto switchD_14313e3ba_caseD_4;
          uVar27 = (undefined7)(uVar26 >> 8);
          uVar31 = (undefined4)((ulonglong)in_stack_fffffffffffffb70 >> 0x20);
          switch(uVar19) {
          case 0:
            if (*(int *)((longlong)param_1 + 0x7c) != 0) {
              LOCK();
              piVar4 = (int *)((longlong)param_1 + 0x7c);
              *piVar4 = *piVar4 + -1;
              bVar30 = *piVar4 == 0;
              UNLOCK();
              uVar26 = CONCAT71(uVar27,bVar30);
              bVar23 = bVar30;
              goto switchD_14313e3ba_caseD_4;
            }
            goto LAB_14313f91d;
          case 1:
            pCVar13 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,*(__uint64 *)(puVar3 + 2));
            uVar31 = *(undefined4 *)(puVar3 + 8);
            uVar25 = *(undefined4 *)(puVar3 + 6);
            for (lVar17 = *(longlong *)(*(longlong *)(puVar3 + 0x14) + 0x20); lVar17 != 0;
                lVar17 = *(longlong *)(lVar17 + 0x18)) {
              if ((*(byte *)(lVar17 + 0x34) & 1) == 0) {
                puVar18 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x48);
                if (puVar18 != (undefined8 *)0x0) {
                  *puVar18 = &PTR_TransUpdateValue_145ac6f40;
                  *(undefined8 *)((longlong)puVar18 + 0x2c) = 0;
                  *(undefined8 *)((longlong)puVar18 + 0x24) = 0;
                  *(undefined8 *)((longlong)puVar18 + 0x1c) = 0;
                  *(undefined4 *)(puVar18 + 7) = 0;
                  puVar18[8] = 0;
                  goto LAB_14313e4cd;
                }
              }
              else if (((pCVar13 != (CAkRegisteredObj *)0x0) &&
                       (cVar10 = CAkGameObject::HasComponent<CAkEmitter>(pCVar13), cVar10 != '\0'))
                      && (puVar18 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x48),
                         puVar18 != (undefined8 *)0x0)) {
                *puVar18 = &PTR_TransUpdateValue_145ac6f40;
                *(undefined8 *)((longlong)puVar18 + 0x2c) = 0;
                *(undefined8 *)((longlong)puVar18 + 0x24) = 0;
                *(undefined8 *)((longlong)puVar18 + 0x1c) = 0;
                *(undefined4 *)(puVar18 + 7) = 0;
                puVar18[8] = pCVar13;
                *(int *)(pCVar13 + 0x50) = *(int *)(pCVar13 + 0x50) + 1;
LAB_14313e4cd:
                if (puVar18 != (undefined8 *)0x0) {
                  *(undefined4 *)(puVar18 + 7) = uVar31;
                  puVar18[1] = lVar17;
                  *(undefined4 *)(puVar18 + 6) = uVar25;
                  *(undefined8 *)((longlong)puVar18 + 0x24) = *(undefined8 *)(puVar3 + 0xe);
                  *(undefined4 *)((longlong)puVar18 + 0x2c) = *(undefined4 *)(puVar3 + 0x12);
                  piVar4 = *(int **)(puVar3 + 10);
                  if (*(longlong *)((longlong)puVar18 + 0x1c) != 0) {
                    AkExternalSourceArray::Release();
                  }
                  if (piVar4 != (int *)0x0) {
                    *piVar4 = *piVar4 + 1;
                  }
                  *(int **)((longlong)puVar18 + 0x1c) = piVar4;
                  FUN_14313c660(DAT_146b50b78,puVar18);
                }
              }
            }
            if (pCVar13 != (CAkRegisteredObj *)0x0) {
              pCVar1 = pCVar13 + 0x50;
              *(int *)pCVar1 = *(int *)pCVar1 + -1;
              lVar7 = g_DefaultPoolId;
              if (*(int *)pCVar1 == 0) {
                (*(code *)**(undefined8 **)pCVar13)(pCVar13,0);
                AK::MemoryMgr::Free(lVar7,pCVar13);
              }
            }
            CAkPlayingMgr::RemoveItemActiveCount(DAT_146b50b00,*(undefined4 *)(puVar3 + 6));
            (**(code **)(**(longlong **)(puVar3 + 0x14) + 0x10))();
            if (*(longlong *)(puVar3 + 10) != 0) {
              AkExternalSourceArray::Release();
            }
LAB_14313e576:
            uVar26 = 0;
            uVar28 = local_478;
            bVar23 = bVar30;
            goto switchD_14313e3ba_caseD_4;
          case 2:
            local_460 = 0;
            local_45c = 4;
            local_458 = 0;
            if (*(__uint64 *)(puVar3 + 2) == 0xffffffffffffffff) {
              in_stack_fffffffffffffb70 = (TransParamsBase *)CONCAT44(uVar31,1);
              local_308 = 0;
              local_300 = 0;
              local_2f8 = 0;
              local_2f0 = 0xff;
              local_2e8 = 0xff;
              local_2e0 = 0;
              CAkRTPCMgr::SetRTPCInternal
                        (g_pRTPCMgr,*(ulong *)(puVar3 + 6),*(float *)(puVar3 + 8),
                         (AkRTPCKey *)&local_308,(TransParamsBase *)&local_460,1,false);
            }
            else {
              pCVar13 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,*(__uint64 *)(puVar3 + 2));
              if (pCVar13 != (CAkRegisteredObj *)0x0) {
                in_stack_fffffffffffffb70 = (TransParamsBase *)&local_460;
LAB_14313ed1a:
                CAkRTPCMgr::SetRTPCInternal
                          (g_pRTPCMgr,*(ulong *)(puVar3 + 6),*(float *)(puVar3 + 8),pCVar13,
                           *(ulong *)(puVar3 + 10),in_stack_fffffffffffffb70,1);
LAB_14313eb03:
                pCVar1 = pCVar13 + 0x50;
                *(int *)pCVar1 = *(int *)pCVar1 + -1;
                lVar7 = g_DefaultPoolId;
                if (*(int *)pCVar1 == 0) {
                  (*(code *)**(undefined8 **)pCVar13)(pCVar13,0);
                  AK::MemoryMgr::Free(lVar7,pCVar13);
                  uVar26 = 0;
                  uVar28 = local_478;
                  bVar23 = bVar30;
                  goto switchD_14313e3ba_caseD_4;
                }
              }
            }
            break;
          case 3:
            if (*(__uint64 *)(puVar3 + 2) == 0xffffffffffffffff) {
              in_stack_fffffffffffffb70 = (TransParamsBase *)CONCAT44(uVar31,1);
              local_2d8 = 0;
              local_2d0 = 0;
              local_2c8 = 0;
              local_2c0 = 0xff;
              local_2b8 = 0xff;
              local_2b0 = 0;
              CAkRTPCMgr::SetRTPCInternal
                        (g_pRTPCMgr,*(ulong *)(puVar3 + 6),*(float *)(puVar3 + 8),
                         (AkRTPCKey *)&local_2d8,(TransParamsBase *)(puVar3 + 0xc),1,false);
            }
            else {
              pCVar13 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,*(__uint64 *)(puVar3 + 2));
              if (pCVar13 != (CAkRegisteredObj *)0x0) {
                in_stack_fffffffffffffb70 = (TransParamsBase *)(puVar3 + 0xc);
                goto LAB_14313ed1a;
              }
            }
            break;
          default:
            goto switchD_14313e3ba_caseD_4;
          case 5:
            if (*(__uint64 *)(puVar3 + 2) == 0xffffffffffffffff) {
              local_3f8 = 0;
              puVar15 = (ushort *)&local_3f8;
              local_3f4 = 4;
              local_3f0 = 0;
LAB_14313f1ce:
              CAkRTPCMgr::ResetRTPCValue(g_pRTPCMgr,*(undefined4 *)(puVar3 + 6),0,0,puVar15);
            }
            else {
              pCVar13 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,*(__uint64 *)(puVar3 + 2));
              if (pCVar13 != (CAkRegisteredObj *)0x0) {
                puVar15 = (ushort *)&local_3e8;
                local_3e8 = 0;
                local_3e4 = 4;
                local_3e0 = 0;
LAB_14313f21d:
                CAkRTPCMgr::ResetRTPCValue
                          (g_pRTPCMgr,*(undefined4 *)(puVar3 + 6),pCVar13,
                           *(undefined4 *)(puVar3 + 8),puVar15);
                pCVar1 = pCVar13 + 0x50;
                *(int *)pCVar1 = *(int *)pCVar1 + -1;
                lVar7 = g_DefaultPoolId;
                if (*(int *)pCVar1 == 0) {
                  (*(code *)**(undefined8 **)pCVar13)(pCVar13,0);
                  AK::MemoryMgr::Free(lVar7,pCVar13);
                }
              }
            }
            break;
          case 6:
            if (*(__uint64 *)(puVar3 + 2) == 0xffffffffffffffff) {
              puVar15 = puVar3 + 10;
              goto LAB_14313f1ce;
            }
            pCVar13 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,*(__uint64 *)(puVar3 + 2));
            if (pCVar13 != (CAkRegisteredObj *)0x0) {
              puVar15 = puVar3 + 10;
              goto LAB_14313f21d;
            }
            break;
          case 7:
            FUN_14312e230(DAT_146b50ae8,*(undefined4 *)(puVar3 + 2),*(undefined4 *)(puVar3 + 4),
                          CONCAT71(uVar27,puVar3[6] != 0),puVar3[7] != 0);
            break;
          case 8:
            pCVar13 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,*(__uint64 *)(puVar3 + 2));
            pCVar8 = g_pSwitchMgr;
            if (pCVar13 != (CAkRegisteredObj *)0x0) {
              uVar31 = *(undefined4 *)(puVar3 + 8);
              uVar25 = *(undefined4 *)(puVar3 + 6);
              CAkSwitchMgr::SwitchingInThisScope::SwitchingInThisScope(local_467);
              lVar17 = CAkSwitchMgr::GetSwitchEntry(pCVar8,uVar25);
              if (lVar17 != 0) {
                CAkSwitchMgr::AkSwitchEntry::SetSwitchInternal(lVar17,uVar31,pCVar13);
              }
              CAkSwitchMgr::SwitchingInThisScope::~SwitchingInThisScope(local_467);
              pCVar1 = pCVar13 + 0x50;
              *(int *)pCVar1 = *(int *)pCVar1 + -1;
              lVar7 = g_DefaultPoolId;
              if (*(int *)pCVar1 == 0) {
                (*(code *)**(undefined8 **)pCVar13)(pCVar13,0);
                AK::MemoryMgr::Free(lVar7,pCVar13);
              }
            }
            goto LAB_14313f8a8;
          case 10:
            if (*(__uint64 *)(puVar3 + 2) == 0xffffffffffffffff) {
              CAkStateMgr::Trigger(DAT_146b50ae8,*(undefined4 *)(puVar3 + 6),0);
            }
            else {
              pCVar13 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,*(__uint64 *)(puVar3 + 2));
              if (pCVar13 != (CAkRegisteredObj *)0x0) {
                CAkStateMgr::Trigger(DAT_146b50ae8,*(undefined4 *)(puVar3 + 6),pCVar13);
                goto LAB_14313eed9;
              }
            }
            break;
          case 0xb:
            FUN_14314c170(g_pRegistryMgr,*(undefined8 *)(puVar3 + 2),*(undefined8 *)(puVar3 + 6));
            break;
          case 0xc:
            if (*(longlong *)(puVar3 + 2) == -1) {
              FUN_14314d2c0(g_pRegistryMgr,0);
            }
            else {
              FUN_14314d480(g_pRegistryMgr);
            }
            break;
          case 0xd:
            local_2a8 = *(undefined4 *)(puVar3 + 6);
            uStack_2a4 = *(undefined4 *)(puVar3 + 8);
            uStack_2a0 = *(undefined4 *)(puVar3 + 10);
            uStack_29c = *(undefined4 *)(puVar3 + 0xc);
            local_288 = *(undefined4 *)(puVar3 + 0x16);
            uVar25 = 1;
            local_298 = *(undefined8 *)(puVar3 + 0xe);
            uStack_290 = *(undefined8 *)(puVar3 + 0x12);
            puVar15 = (ushort *)&local_2a8;
            local_284 = 0x3ff3f;
            local_280 = 0x3f800000;
            uVar31 = 0;
            goto LAB_14313ef89;
          case 0xe:
            local_448 = (undefined1 *)0x0;
            local_440 = 0;
            FUN_14313c9c0(puVar3 + 6,local_450);
            CAkRegistryMgr::UpdateListeners
                      (g_pRegistryMgr,*(undefined8 *)(puVar3 + 2),local_450,
                       *(undefined4 *)(puVar3 + 6));
            if (local_448 != (undefined1 *)0x0) {
              local_440 = local_440 & 0xffffffff00000000;
              if (local_450 != local_448) {
                AK::MemoryMgr::Falign(g_DefaultPoolId,local_448);
              }
              local_448 = (undefined1 *)0x0;
              local_440 = local_440 & 0xffffffff;
            }
            break;
          case 0x10:
            local_430 = (undefined1 *)0x0;
            local_428 = 0;
            FUN_14313c9c0(puVar3 + 2,local_438);
            FUN_14314d5d0(g_pRegistryMgr,local_438,*(undefined4 *)(puVar3 + 2));
            if (local_430 != (undefined1 *)0x0) {
              local_428 = local_428 & 0xffffffff00000000;
              if (local_438 != local_430) {
                AK::MemoryMgr::Falign(g_DefaultPoolId,local_430);
              }
              local_430 = (undefined1 *)0x0;
              local_428 = local_428 & 0xffffffff;
            }
            break;
          case 0x11:
            CAkRegistryMgr::ResetListenersToDefault(g_pRegistryMgr,*(undefined8 *)(puVar3 + 2));
            break;
          case 0x12:
            if (puVar3[0xd] != 0) {
              pCVar13 = *(CAkRegisteredObj **)(puVar3 + 6);
            }
            CAkListener::SetListenerSpatialization
                      (*(undefined8 *)(puVar3 + 2),CONCAT71(0x1400000,puVar3[0xc] != 0),
                       *(undefined4 *)(puVar3 + 10),pCVar13);
            if (*(void **)(puVar3 + 6) != (void *)0x0) {
              AK::MemoryMgr::Falign(g_DefaultPoolId,*(void **)(puVar3 + 6));
              puVar3[6] = 0;
              puVar3[7] = 0;
              puVar3[8] = 0;
              puVar3[9] = 0;
            }
            break;
          case 0x13:
            FUN_14314c800(g_pRegistryMgr,*(undefined8 *)(puVar3 + 2),puVar3 + 8,
                          *(undefined4 *)(puVar3 + 6));
            break;
          case 0x14:
            CAkRegistryMgr::SetGameObjectOutputBusVolume
                      (g_pRegistryMgr,*(undefined8 *)(puVar3 + 2),*(undefined8 *)(puVar3 + 6),
                       *(undefined4 *)(puVar3 + 10));
            break;
          case 0x15:
            CAkRegistryMgr::SetObjectObstructionAndOcclusion
                      (g_pRegistryMgr,*(undefined8 *)(puVar3 + 2),*(undefined8 *)(puVar3 + 6),
                       *(undefined4 *)(puVar3 + 10),*(undefined4 *)(puVar3 + 0xc));
            break;
          case 0x16:
            CAkRegistryMgr::SetMultipleObstructionAndOcclusion
                      (g_pRegistryMgr,*(undefined8 *)(puVar3 + 2),*(undefined8 *)(puVar3 + 6),
                       puVar3 + 0xc,*(undefined4 *)(puVar3 + 10));
            break;
          case 0x17:
            lVar17 = CAkOutputMgr::GetDevice(*(undefined8 *)(puVar3 + 2));
            uVar26 = 0;
            uVar28 = local_478;
            bVar23 = bVar30;
            if (lVar17 != 0) {
              *(undefined4 *)(lVar17 + 0x154) = *(undefined4 *)(puVar3 + 6);
            }
            goto switchD_14313e3ba_caseD_4;
          case 0x18:
            pCVar13 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,*(__uint64 *)(puVar3 + 2));
            if (pCVar13 != (CAkRegisteredObj *)0x0) {
              FUN_14314e550(*(undefined8 *)(puVar3 + 0x14),pCVar13);
LAB_14313eed9:
              pCVar1 = pCVar13 + 0x50;
              *(int *)pCVar1 = *(int *)pCVar1 + -1;
              lVar7 = g_DefaultPoolId;
              if (*(int *)pCVar1 == 0) {
                (*(code *)**(undefined8 **)pCVar13)(pCVar13,0);
                AK::MemoryMgr::Free(lVar7,pCVar13);
              }
            }
            break;
          case 0x19:
            switch(*(undefined4 *)(puVar3 + 6)) {
            case 0:
              CAkDynamicSequence::Play
                        (*(undefined8 *)(puVar3 + 2),*(undefined4 *)(puVar3 + 8),
                         *(undefined4 *)(puVar3 + 10));
              (**(code **)(**(longlong **)(puVar3 + 2) + 0x10))();
              break;
            case 1:
              CAkDynamicSequence::Pause
                        (*(undefined8 *)(puVar3 + 2),*(undefined4 *)(puVar3 + 8),
                         *(undefined4 *)(puVar3 + 10));
              (**(code **)(**(longlong **)(puVar3 + 2) + 0x10))();
              break;
            case 2:
              CAkDynamicSequence::Resume
                        (*(undefined8 *)(puVar3 + 2),*(undefined4 *)(puVar3 + 8),
                         *(undefined4 *)(puVar3 + 10));
              (**(code **)(**(longlong **)(puVar3 + 2) + 0x10))();
              break;
            case 3:
              *(undefined1 *)(*(longlong *)(puVar3 + 2) + 0x78) = 1;
              CAkPlayingMgr::RemoveItemActiveCount
                        (DAT_146b50b00,*(undefined4 *)(*(longlong *)(puVar3 + 2) + 0x74));
              (**(code **)(**(longlong **)(puVar3 + 2) + 0x10))();
            default:
              (**(code **)(**(longlong **)(puVar3 + 2) + 0x10))();
              break;
            case 4:
              FUN_14314e560(*(undefined8 *)(puVar3 + 2),*(undefined4 *)(puVar3 + 8),
                            *(undefined4 *)(puVar3 + 10));
              (**(code **)(**(longlong **)(puVar3 + 2) + 0x10))();
              break;
            case 5:
              CAkDynamicSequence::Break(*(undefined8 *)(puVar3 + 2));
              (**(code **)(**(longlong **)(puVar3 + 2) + 0x10))();
              break;
            case 6:
              FUN_14314e530(*(undefined8 *)(puVar3 + 2));
              (**(code **)(**(longlong **)(puVar3 + 2) + 0x10))();
            }
            break;
          case 0x1a:
            uVar6 = *(undefined8 *)(puVar3 + 2);
            if (DAT_146b50b38 != (code *)0x0) {
              (*DAT_146b50b38)(uVar6);
            }
            FUN_1431615c0(uVar6);
            FUN_143159990(uVar6,0);
            break;
          case 0x1b:
            _Var5 = *(__uint64 *)(puVar3 + 2);
            plVar16 = (longlong *)CAkActionStop::Create((_Var5 != 0xffffffffffffffff) + 0x104,0);
            if (plVar16 != (longlong *)0x0) {
              if (_Var5 == 0xffffffffffffffff) {
                local_228[0] = &PTR_TransUpdateValue_145ac6f40;
                local_1fc = 0;
                local_204 = 0;
                local_20c = 0;
                local_1f0 = 0;
                local_1e8 = 0;
                (**(code **)(*plVar16 + 0x38))(plVar16,local_228);
                pppuVar20 = local_228;
LAB_14313f4b2:
                AkPendingAction::~AkPendingAction(pppuVar20);
              }
              else {
                pCVar13 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,_Var5);
                if (pCVar13 != (CAkRegisteredObj *)0x0) {
                  local_278[0] = &PTR_TransUpdateValue_145ac6f40;
                  local_24c = 0;
                  local_254 = 0;
                  local_25c = 0;
                  local_240 = 0;
                  *(int *)(pCVar13 + 0x50) = *(int *)(pCVar13 + 0x50) + 1;
                  local_238 = pCVar13;
                  (**(code **)(*plVar16 + 0x38))(plVar16,local_278);
                  pCVar1 = pCVar13 + 0x50;
                  *(int *)pCVar1 = *(int *)pCVar1 + -1;
                  lVar7 = g_DefaultPoolId;
                  if (*(int *)pCVar1 == 0) {
                    (*(code *)**(undefined8 **)pCVar13)(pCVar13,0);
                    AK::MemoryMgr::Free(lVar7,pCVar13);
                  }
                  pppuVar20 = local_278;
                  goto LAB_14313f4b2;
                }
              }
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
            goto LAB_14313f8a8;
          case 0x1c:
            local_418 = (undefined1 *)0x0;
            local_410 = 0;
            FUN_14313c9c0(puVar3 + 2,local_420);
            CAkOutputMgr::AddOutputDevice(puVar3 + 10,local_420);
            if (local_418 != (undefined1 *)0x0) {
              local_410 = local_410 & 0xffffffff00000000;
              if (local_420 != local_418) {
                AK::MemoryMgr::Falign(g_DefaultPoolId,local_418);
              }
              local_418 = (undefined1 *)0x0;
              local_410 = local_410 & 0xffffffff;
            }
            break;
          case 0x1d:
            CAkOutputMgr::RemoveOutputDevice(*(undefined8 *)(puVar3 + 2),0x140000001);
            break;
          case 0x1e:
            uVar28 = *(uint *)(puVar3 + 2);
            p_Var29 = (LPCRITICAL_SECTION)CAkAudioLibIndex::GetNodeIndex(DAT_146b50af8);
            EnterCriticalSection(p_Var29);
            if (p_Var29[1].LockCount != 0) {
              for (plVar16 = *(longlong **)
                              (&(p_Var29[1].DebugInfo)->Type +
                              ((ulonglong)uVar28 % (ulonglong)(uint)p_Var29[1].LockCount) * 4);
                  plVar16 != (longlong *)0x0; plVar16 = (longlong *)plVar16[1]) {
                if (*(uint *)(plVar16 + 2) == uVar28) {
                  if (plVar16 != (longlong *)0x0) {
                    *(int *)((longlong)plVar16 + 0x14) = *(int *)((longlong)plVar16 + 0x14) + 1;
                    LeaveCriticalSection(p_Var29);
                    CAkBus::SetBusDevice(plVar16,*(undefined4 *)(puVar3 + 4));
                    (**(code **)(*plVar16 + 0x10))(plVar16);
                    goto LAB_14313f8a8;
                  }
                  break;
                }
              }
            }
            LeaveCriticalSection(p_Var29);
            goto LAB_14313f8a8;
          case 0x1f:
            FUN_14313c390(param_1,*(undefined4 *)(puVar3 + 2));
            local_390 = *(undefined4 *)(puVar3 + 6);
            local_398 = *(undefined4 *)(puVar3 + 2);
            local_394 = *(undefined4 *)(puVar3 + 4);
            local_38c = 0;
            local_385 = 0;
            local_380 = 0;
            local_388 = 0;
            local_386 = 0;
            local_3a8[0] = 0;
            local_3a0 = 0;
            FUN_143144f70(local_3a8);
            break;
          case 0x20:
            pCVar13 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,*(__uint64 *)(puVar3 + 2));
            if ((((pCVar13 != (CAkRegisteredObj *)0x0) && (*(int *)(pCVar13 + 0x40) != 0)) &&
                (**(longlong **)(pCVar13 + 0x38) != 0)) || (*(longlong *)(puVar3 + 2) == -1)) {
              CAkAudioMgr::ProcessAllActions(param_1,*(undefined8 *)(puVar3 + 6),puVar3 + 2,pCVar13)
              ;
            }
            if (pCVar13 != (CAkRegisteredObj *)0x0) {
              pCVar1 = pCVar13 + 0x50;
              *(int *)pCVar1 = *(int *)pCVar1 + -1;
              lVar7 = g_DefaultPoolId;
              if (*(int *)pCVar1 == 0) {
                (*(code *)**(undefined8 **)pCVar13)(pCVar13,0);
                AK::MemoryMgr::Free(lVar7,pCVar13);
              }
            }
            plVar16 = *(longlong **)(puVar3 + 6);
            lVar17 = *plVar16;
LAB_14313e97b:
            (**(code **)(lVar17 + 0x10))(plVar16);
            break;
          case 0x21:
            pCVar13 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,*(__uint64 *)(puVar3 + 2));
            if ((((pCVar13 != (CAkRegisteredObj *)0x0) && (*(int *)(pCVar13 + 0x40) != 0)) &&
                (**(longlong **)(pCVar13 + 0x38) != 0)) || (*(longlong *)(puVar3 + 2) == -1)) {
              CAkAudioMgr::ProcessAllActions(param_1,*(undefined8 *)(puVar3 + 6),puVar3 + 2,pCVar13)
              ;
            }
            if (pCVar13 != (CAkRegisteredObj *)0x0) {
              pCVar1 = pCVar13 + 0x50;
              *(int *)pCVar1 = *(int *)pCVar1 + -1;
              lVar7 = g_DefaultPoolId;
              if (*(int *)pCVar1 == 0) {
                (*(code *)**(undefined8 **)pCVar13)(pCVar13,0);
                AK::MemoryMgr::Free(lVar7,pCVar13);
              }
            }
            (**(code **)(**(longlong **)(puVar3 + 6) + 0x10))();
            goto LAB_14313f8a8;
          case 0x22:
            pCVar13 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,*(__uint64 *)(puVar3 + 2));
            if ((((pCVar13 != (CAkRegisteredObj *)0x0) && (*(int *)(pCVar13 + 0x40) != 0)) &&
                (**(longlong **)(pCVar13 + 0x38) != 0)) || (*(longlong *)(puVar3 + 2) == -1)) {
              FUN_14313e170(param_1,*(undefined8 *)(puVar3 + 6),puVar3 + 2,pCVar13);
            }
            if (pCVar13 != (CAkRegisteredObj *)0x0) {
              pCVar1 = pCVar13 + 0x50;
              *(int *)pCVar1 = *(int *)pCVar1 + -1;
              lVar7 = g_DefaultPoolId;
              if (*(int *)pCVar1 == 0) {
                (*(code *)**(undefined8 **)pCVar13)(pCVar13,0);
                AK::MemoryMgr::Free(lVar7,pCVar13);
              }
            }
            if (*(longlong **)(puVar3 + 6) != (longlong *)0x0) {
              (**(code **)(**(longlong **)(puVar3 + 6) + 0x10))();
            }
            goto LAB_14313f8a8;
          case 0x23:
            if ((*(__uint64 *)(puVar3 + 2) == 0xffffffffffffffff) ||
               (pCVar13 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,*(__uint64 *)(puVar3 + 2)),
               pCVar13 != (CAkRegisteredObj *)0x0)) {
              if (puVar3[0xd] == 0) {
                FUN_14316ce40(*(undefined8 *)(puVar3 + 6),pCVar13);
              }
              else {
                FUN_14316c560(*(undefined8 *)(puVar3 + 6),pCVar13,(char)puVar3[0xc],
                              *(undefined1 *)((longlong)puVar3 + 0x19));
              }
              (**(code **)(**(longlong **)(puVar3 + 6) + 0x10))();
              if (pCVar13 != (CAkRegisteredObj *)0x0) goto LAB_14313eb03;
            }
            break;
          case 0x24:
            FUN_14314ca70(g_pRegistryMgr,*(undefined8 *)(puVar3 + 2),*(undefined4 *)(puVar3 + 6));
            break;
          case 0x25:
            uVar31 = *(undefined4 *)(puVar3 + 8);
            puVar15 = puVar3 + 10;
            uVar25 = *(undefined4 *)(puVar3 + 6);
LAB_14313ef89:
            CAkRegistryMgr::SetPosition
                      (g_pRegistryMgr,*(undefined8 *)(puVar3 + 2),puVar15,uVar25,uVar31);
            break;
          case 0x26:
            pCVar13 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,*(__uint64 *)(puVar3 + 2));
            if ((((pCVar13 != (CAkRegisteredObj *)0x0) && (*(int *)(pCVar13 + 0x40) != 0)) &&
                (**(longlong **)(pCVar13 + 0x38) != 0)) || (*(longlong *)(puVar3 + 2) == -1)) {
              for (lVar17 = *(longlong *)(*(longlong *)(puVar3 + 6) + 0x20); lVar17 != 0;
                  lVar17 = *(longlong *)(lVar17 + 0x18)) {
                if ((*(short *)(lVar17 + 0x34) == 0x403) &&
                   (plVar16 = (longlong *)
                              CAkAudioLibIndex::GetNodePtrAndAddRef
                                        (DAT_146b50af8,*(undefined4 *)(lVar17 + 0x30),0),
                   plVar16 != (longlong *)0x0)) {
                  local_368 = *(undefined4 *)(puVar3 + 0xe);
                  local_35c = 0;
                  local_355 = 0;
                  local_350 = 0;
                  local_348 = 0;
                  local_33c = ((byte)puVar3[0x11] & 1) * '\x02' | (byte)puVar3[0x10] & 1 |
                              local_33c & 0xfc;
                  local_358 = 0;
                  local_340 = *(undefined4 *)(puVar3 + 0xc);
                  local_356 = 0;
                  local_360 = 4;
                  local_364 = 0;
                  local_378[0] = 4;
                  local_370 = pCVar13;
                  (**(code **)(*plVar16 + 0x90))(plVar16,local_378);
                  (**(code **)(*plVar16 + 0x10))(plVar16);
                }
              }
            }
            if (pCVar13 != (CAkRegisteredObj *)0x0) {
              pCVar1 = pCVar13 + 0x50;
              *(int *)pCVar1 = *(int *)pCVar1 + -1;
              lVar7 = g_DefaultPoolId;
              if (*(int *)pCVar1 == 0) {
                (*(code *)**(undefined8 **)pCVar13)(pCVar13,0);
                AK::MemoryMgr::Free(lVar7,pCVar13);
              }
            }
            (**(code **)(**(longlong **)(puVar3 + 6) + 0x10))();
LAB_14313f8a8:
            uVar26 = 0;
            uVar28 = local_478;
            bVar23 = bVar30;
            goto switchD_14313e3ba_caseD_4;
          case 0x27:
            uVar31 = *(undefined4 *)(puVar3 + 6);
            local_330 = 0;
            local_328 = 0;
            local_338 = 0;
            iVar12 = (*(int *)(puVar3 + 0x14) * 0x1000 + *(int *)(puVar3 + 0x16)) * 0x10;
            uVar22 = iVar12 + 2U | 0x80000000;
            local_324 = uVar31;
            if (*(int *)(puVar3 + 0x18) == 0) {
              pCVar13 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,*(__uint64 *)(puVar3 + 2));
              lVar17 = DAT_146b50af8;
              if (pCVar13 == (CAkRegisteredObj *)0x0) goto LAB_14313f8a8;
              p_Var29 = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x2c0);
              EnterCriticalSection(p_Var29);
              uVar28 = *(uint *)(lVar17 + 0x2f0);
              if (uVar28 != 0) {
                for (plVar16 = *(longlong **)
                                (*(longlong *)(lVar17 + 0x2e8) +
                                ((ulonglong)uVar22 % (ulonglong)uVar28) * 8);
                    plVar16 != (longlong *)0x0; plVar16 = (longlong *)plVar16[1]) {
                  if (*(uint *)(plVar16 + 2) == uVar22) {
                    if (plVar16 != (longlong *)0x0) {
                      *(int *)((longlong)plVar16 + 0x14) = *(int *)((longlong)plVar16 + 0x14) + 1;
                      LeaveCriticalSection(p_Var29);
                      (**(code **)(*plVar16 + 0x10))(plVar16);
                      goto LAB_14313e6da;
                    }
                    break;
                  }
                }
              }
              LeaveCriticalSection(p_Var29);
              plVar16 = (longlong *)CAkFxCustom::Create(uVar22);
              if (plVar16 != (longlong *)0x0) {
                CAkFxBase::SetFX(plVar16,iVar12 + 2,0,0);
              }
LAB_14313e6da:
              plVar14 = (longlong *)CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,uVar22,0);
              if ((plVar14 == (longlong *)0x0) && (plVar16 != (longlong *)0x0)) {
                lVar17 = FUN_1431a46e0(uVar22);
                if (lVar17 != 0) {
                  CAkSource::SetSource(lVar17 + 200,(int)plVar16[2]);
                }
              }
              else {
                (**(code **)(*plVar14 + 0x10))(plVar14);
              }
              local_318 = 0;
              local_310 = 0;
              local_320 = 0;
              local_30c = uVar31;
              plVar16 = (longlong *)CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,uVar22,0);
              if (plVar16 != (longlong *)0x0) {
                local_400 = 0;
                local_408 = 0;
                local_404 = 4;
                FUN_14313bbf0(local_1d8);
                local_1d8[0] = 0;
                local_1b0 = 0;
                local_1a8 = 0;
                local_1d0 = plVar16;
                local_1a4 = uVar31;
                if (local_1b8 != 0) {
                  AkExternalSourceArray::Release();
                }
                uVar31 = local_1a4;
                uVar25 = (undefined4)((ulonglong)in_stack_fffffffffffffb70 >> 0x20);
                local_1c0 = &local_408;
                bVar9 = local_50 | 2;
                local_1b8 = 0;
                local_158 = 0;
                local_150 = 0;
                local_148 = 0;
                local_1c8 = pCVar13;
                if ((local_140[0] == -0x70) && (local_13d != '\0')) {
                  local_468 = local_50 & 1;
                  local_50 = bVar9;
                  uVar11 = AkPBIParams::GetMidiTargetID(local_1d8);
                  in_stack_fffffffffffffb70 = (TransParamsBase *)CONCAT44(uVar25,uVar31);
                  iVar12 = CAkParameterNode::FilterAndTransformMidiEvent
                                     (plVar16,local_140,uVar11,&local_468,pCVar13,
                                      in_stack_fffffffffffffb70);
                  if (iVar12 == 1) {
                    bVar9 = local_50 ^ (local_468 ^ local_50) & 1;
                    goto LAB_14313e869;
                  }
                }
                else {
LAB_14313e869:
                  local_50 = bVar9;
                  iVar12 = FUN_1431a35f0(plVar16,local_1d8);
                  if (iVar12 == 1) {
                    (**(code **)(*plVar16 + 0x238))(plVar16,local_1d8);
                  }
                }
                (**(code **)(*plVar16 + 0x10))(plVar16);
                AkInitialSoundParams::DoTerm(local_130);
                if (local_1b8 != 0) {
                  AkExternalSourceArray::Release();
                }
              }
              pCVar1 = pCVar13 + 0x50;
              *(int *)pCVar1 = *(int *)pCVar1 + -1;
              lVar7 = g_DefaultPoolId;
              if (*(int *)pCVar1 != 0) goto LAB_14313e576;
              (*(code *)**(undefined8 **)pCVar13)(pCVar13,0);
              AK::MemoryMgr::Free(lVar7,pCVar13);
              uVar26 = 0;
              uVar28 = local_478;
              bVar23 = bVar30;
            }
            else if (*(int *)(puVar3 + 0x18) == 1) {
              plVar16 = (longlong *)CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,uVar22,0);
              if (plVar16 != (longlong *)0x0) {
                local_3c8 = *(undefined4 *)(puVar3 + 6);
                local_3bc = 0;
                local_3b5 = 0;
                local_3b0 = 0;
                local_3b8 = 0;
                local_3b6 = 0;
                local_3c0 = 4;
                local_3d0 = 0;
                local_3c4 = 0;
                local_3d8[0] = 0;
                (**(code **)(*plVar16 + 0x90))(plVar16,local_3d8);
                lVar17 = *plVar16;
                goto LAB_14313e97b;
              }
              break;
            }
            goto switchD_14313e3ba_caseD_4;
          case 0x28:
            if (*(longlong *)(puVar3 + 2) == 0) {
              CAkOutputMgr::StopOutputCapture();
            }
            else {
              CAkOutputMgr::StartOutputCapture();
              AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(puVar3 + 2));
            }
            break;
          case 0x29:
            CAkOutputMgr::AddOutputCaptureMarker(*(undefined8 *)(puVar3 + 2));
            AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(puVar3 + 2));
            break;
          case 0x2a:
            plVar16 = (longlong *)
                      CAkAudioLibIndex::GetNodePtrAndAddRef
                                (DAT_146b50af8,*(undefined4 *)(puVar3 + 2),
                                 *(undefined4 *)(puVar3 + 8));
            if (plVar16 != (longlong *)0x0) {
              uVar28 = (**(code **)(*plVar16 + 0x80))(plVar16);
              if (uVar28 < 0xb) {
                FUN_143178960(plVar16,*(undefined4 *)(puVar3 + 4),*(undefined4 *)(puVar3 + 6),1,2);
              }
LAB_14313f5f5:
              lVar17 = *plVar16;
              goto LAB_14313e97b;
            }
            break;
          case 0x2b:
            plVar16 = (longlong *)
                      CAkAudioLibIndex::GetNodePtrAndAddRef
                                (DAT_146b50af8,*(undefined4 *)(puVar3 + 2),
                                 *(undefined4 *)(puVar3 + 8));
            if (plVar16 != (longlong *)0x0) {
              iVar12 = (**(code **)(*plVar16 + 0x80))(plVar16);
              if ((iVar12 != 0) && (iVar12 != 10)) goto LAB_14313f5f5;
              (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined4 *)(puVar3 + 6),1,2);
              lVar17 = *plVar16;
              goto LAB_14313e97b;
            }
            break;
          case 0x2c:
            plVar16 = (longlong *)
                      CAkAudioLibIndex::GetNodePtrAndAddRef
                                (DAT_146b50af8,*(undefined4 *)(puVar3 + 2),1);
            if (plVar16 != (longlong *)0x0) {
              uVar31 = *(undefined4 *)(puVar3 + 4);
              cVar10 = FUN_143147860(plVar16);
              if (cVar10 == '\0') {
                FUN_1431443d0(plVar16,uVar31);
              }
              lVar17 = *plVar16;
              goto LAB_14313e97b;
            }
            break;
          case 0x2d:
            CAkLEngine::SetPanningRule(*(undefined8 *)(puVar3 + 2),*(undefined4 *)(puVar3 + 6));
            break;
          case 0x2e:
            lVar17 = CAkOutputMgr::GetDevice(*(undefined8 *)(puVar3 + 10));
            if (lVar17 != 0) {
              AkDevice::SetSpeakerAngles
                        (lVar17,*(undefined8 *)(puVar3 + 2),*(undefined4 *)(puVar3 + 6),
                         *(undefined4 *)(puVar3 + 8));
            }
            AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(puVar3 + 2));
            break;
          case 0x31:
            AKRANDOM::AkRandomInit(*(undefined4 *)(puVar3 + 2));
            break;
          case 0x32:
            if (puVar3[2] == 0) {
              CAkBus::UnmuteBackgroundMusic();
            }
            else {
              CAkBus::MuteBackgroundMusic();
            }
            break;
          case 0x33:
            in_stack_fffffffffffffb70 = *(TransParamsBase **)(puVar3 + 0xe);
            FUN_143123c00(*(undefined4 *)(puVar3 + 2),*(undefined8 *)(puVar3 + 4),
                          *(undefined4 *)(puVar3 + 8),*(undefined4 *)(puVar3 + 10),
                          *(undefined4 *)(puVar3 + 0xc),in_stack_fffffffffffffb70,
                          *(undefined4 *)(puVar3 + 0x12),1);
            break;
          case 0x34:
            iVar12 = CAkOutputMgr::SetDeviceSuspended
                               (CONCAT71((int7)((ulonglong)
                                                (IMAGE_DOS_HEADER_140000000.e_magic +
                                                (&switchD_14313e3ba::switchdataD_14313f954)[uVar19])
                                               >> 8),puVar3[4] != 0),
                                CONCAT71(0x1400000,puVar3[5] != 0),*(undefined4 *)(puVar3 + 2));
            uVar26 = 0;
            uVar28 = local_478;
            bVar23 = bVar30;
            if (iVar12 == 1) {
              *param_3 = 1;
            }
            goto switchD_14313e3ba_caseD_4;
          case 0x35:
            iVar12 = CAkOutputMgr::InitMainDevice(puVar3 + 2);
            if (iVar12 == 1) {
              QueryPerformanceCounter((LARGE_INTEGER *)(param_1 + 0x12));
            }
            *param_3 = 1;
            break;
          case 0x36:
            puVar18 = (undefined8 *)FUN_14313c970(param_1 + 0x15,*(undefined4 *)(puVar3 + 2));
            if (puVar18 != (undefined8 *)0x0) {
              (*(code *)*puVar18)(puVar3 + 4,*puVar3 - 4);
            }
            break;
          case 0x37:
            goto switchD_14313e3ba_caseD_37;
          }
          uVar26 = 0;
          uVar28 = local_478;
          bVar23 = bVar30;
switchD_14313e3ba_caseD_4:
          uVar2 = *puVar3;
          uVar21 = (ulonglong)(uVar2 + 3 & 0xfffffffc) + *param_1;
          uVar19 = param_1[3];
          if (uVar21 < uVar19) {
            *param_1 = uVar21;
          }
          else {
            uVar19 = param_1[2];
            *param_1 = uVar19;
          }
          if (param_2 != '\0') {
            uVar28 = uVar28 + uVar2;
            bVar30 = uVar24 >> 1 <= uVar28;
            uVar19 = CONCAT71((int7)(uVar19 >> 8),bVar30);
            bVar23 = (bool)(bVar23 | bVar30);
            uVar26 = uVar26 & 0xffffffffffffff00;
            local_478 = uVar28;
            bVar30 = bVar23;
          }
          DAT_146b51f48 = DAT_146b51f48 + 1;
        } while (!bVar23);
LAB_14313f91d:
        return CONCAT71((int7)(uVar19 >> 8),1);
      }
    }
    else {
      uVar28 = (uint)param_1[4] >> 1;
      uVar19 = (ulonglong)uVar28;
      if (uVar28 < uVar24) goto LAB_14313e337;
    }
  }
  return uVar19 & 0xffffffffffffff00;
}



// FUNCTION 14313fa50 FUN_14313fa50 body=390 status=ok
// SIG undefined FUN_14313fa50(void)

void FUN_14313fa50(ulonglong *param_1)

{
  int *piVar1;
  ushort *puVar2;
  int *piVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int *piVar7;
  
  if (*param_1 != param_1[1]) {
    do {
      puVar2 = (ushort *)*param_1;
      switch(puVar2[1]) {
      case 1:
        CAkPlayingMgr::RemoveItemActiveCount(DAT_146b50b00,*(undefined4 *)(puVar2 + 6));
        (**(code **)(**(longlong **)(puVar2 + 0x14) + 0x10))();
        if (*(longlong *)(puVar2 + 10) != 0) {
          AkExternalSourceArray::Release();
        }
        break;
      case 0x19:
        if (*(int *)(puVar2 + 6) == 3) {
          CAkPlayingMgr::RemoveItemActiveCount
                    (DAT_146b50b00,*(undefined4 *)(*(longlong *)(puVar2 + 2) + 0x74));
          (**(code **)(**(longlong **)(puVar2 + 2) + 0x10))();
        }
        plVar5 = *(longlong **)(puVar2 + 2);
        goto LAB_14313fae1;
      case 0x20:
      case 0x21:
      case 0x26:
        plVar5 = *(longlong **)(puVar2 + 6);
LAB_14313fae1:
        (**(code **)(*plVar5 + 0x10))();
        break;
      case 0x22:
        plVar5 = *(longlong **)(puVar2 + 6);
        if (plVar5 != (longlong *)0x0) goto LAB_14313fae1;
        break;
      case 0x36:
        piVar3 = (int *)param_1[0x15];
        piVar1 = piVar3 + (ulonglong)(uint)param_1[0x16] * 6;
        for (; (piVar3 != piVar1 && (*piVar3 != *(int *)(puVar2 + 2))); piVar3 = piVar3 + 6) {
        }
        piVar7 = piVar3 + 2;
        if (piVar3 == piVar1) {
          piVar7 = (int *)0x0;
        }
        if (piVar7 != (int *)0x0) {
          (**(code **)(piVar7 + 2))(puVar2 + 4,*puVar2 - 4);
        }
        break;
      case 0x37:
        uVar6 = *param_1;
        uVar4 = (ulonglong)((int)param_1[4] + 3U & 0xfffffffc);
        goto LAB_14313faf4;
      }
      uVar4 = *param_1;
      uVar6 = (ulonglong)*puVar2 + 3 & 0xfffffffc;
LAB_14313faf4:
      if (uVar6 + uVar4 < param_1[3]) {
        *param_1 = uVar6 + uVar4;
      }
      else {
        *param_1 = param_1[2];
      }
    } while (*param_1 != param_1[1]);
  }
  return;
}



// FUNCTION 14313fc30 FUN_14313fc30 body=393 status=ok
// SIG undefined FUN_14313fc30(void)

void FUN_14313fc30(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  long lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 local_78 [20];
  
  puVar8 = (undefined8 *)0x0;
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  do {
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    plVar1 = (longlong *)puVar2[2];
    plVar4 = (longlong *)CAkAction::GetAndRefTarget(plVar1[1]);
    if ((param_2 == (longlong *)0x0) || (plVar4 == (longlong *)0x0)) {
LAB_14313fcd9:
      puVar7 = (undefined8 *)*puVar2;
      puVar8 = puVar2;
    }
    else {
      if (param_2 != plVar4) {
        plVar5 = (longlong *)plVar4[0x11];
        for (plVar6 = (longlong *)plVar4[0x10]; plVar6 != (longlong *)0x0;
            plVar6 = (longlong *)plVar6[0x10]) {
          if (param_2 == plVar6) goto LAB_14313fd1b;
          if (plVar5 == (longlong *)0x0) {
            plVar5 = (longlong *)plVar6[0x11];
          }
        }
        for (; plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[0x11]) {
          if (param_2 == plVar5) goto LAB_14313fd1b;
        }
        goto LAB_14313fcd9;
      }
LAB_14313fd1b:
      plVar6 = (longlong *)plVar1[1];
      local_78[0] = 0;
      if (*(short *)((longlong)plVar6 + 0x34) == 0x403) {
LAB_14313fd40:
        (**(code **)(*plVar6 + 0x50))(plVar6,local_78);
      }
      else if (*(short *)((longlong)plVar6 + 0x34) == 0x503) {
        FUN_1431a5b70();
        plVar6 = (longlong *)plVar1[1];
        goto LAB_14313fd40;
      }
      CAkPlayingMgr::RemoveItemActiveCount(DAT_146b50b00,(int)plVar1[6]);
      puVar7 = (undefined8 *)*puVar2;
      if (puVar2 == *(undefined8 **)(param_1 + 0x50)) {
        *(undefined8 **)(param_1 + 0x50) = puVar7;
      }
      else {
        *puVar8 = puVar7;
      }
      if (puVar2 == *(undefined8 **)(param_1 + 0x58)) {
        *(undefined8 **)(param_1 + 0x58) = puVar8;
      }
      *puVar2 = *(undefined8 *)(param_1 + 0x60);
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
      *(undefined8 **)(param_1 + 0x60) = puVar2;
      (**(code **)(*(longlong *)plVar1[1] + 0x10))();
      lVar3 = g_DefaultPoolId;
      (**(code **)(*plVar1 + 8))(plVar1,0);
      AK::MemoryMgr::Free(lVar3,plVar1);
    }
    puVar2 = puVar7;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  } while( true );
}



// FUNCTION 14313fdc0 FUN_14313fdc0 body=414 status=ok
// SIG undefined FUN_14313fdc0(void)

void FUN_14313fdc0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  long lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 local_78 [20];
  
  puVar9 = (undefined8 *)0x0;
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  do {
    if (puVar3 == (undefined8 *)0x0) {
      return;
    }
    plVar1 = (longlong *)puVar3[2];
    lVar2 = plVar1[1];
    plVar5 = (longlong *)CAkAction::GetAndRefTarget(lVar2);
    if ((param_2 == (longlong *)0x0) || (plVar5 == (longlong *)0x0)) {
LAB_14313fe73:
      puVar8 = (undefined8 *)*puVar3;
      puVar9 = puVar3;
    }
    else {
      if (param_2 != plVar5) {
        plVar6 = (longlong *)plVar5[0x11];
        for (plVar7 = (longlong *)plVar5[0x10]; plVar7 != (longlong *)0x0;
            plVar7 = (longlong *)plVar7[0x10]) {
          if (param_2 == plVar7) goto LAB_14313feb5;
          if (plVar6 == (longlong *)0x0) {
            plVar6 = (longlong *)plVar7[0x11];
          }
        }
        for (; plVar6 != (longlong *)0x0; plVar6 = (longlong *)plVar6[0x11]) {
          if (param_2 == plVar6) goto LAB_14313feb5;
        }
        goto LAB_14313fe73;
      }
LAB_14313feb5:
      if (*(short *)(lVar2 + 0x34) == 0x1820) goto LAB_14313fe73;
      plVar7 = (longlong *)plVar1[1];
      local_78[0] = 0;
      if (*(short *)((longlong)plVar7 + 0x34) == 0x403) {
LAB_14313feea:
        (**(code **)(*plVar7 + 0x50))(plVar7,local_78);
      }
      else if (*(short *)((longlong)plVar7 + 0x34) == 0x503) {
        FUN_1431a5b70();
        plVar7 = (longlong *)plVar1[1];
        goto LAB_14313feea;
      }
      CAkPlayingMgr::RemoveItemActiveCount(DAT_146b50b00,(int)plVar1[6]);
      puVar8 = (undefined8 *)*puVar3;
      if (puVar3 == *(undefined8 **)(param_1 + 0x28)) {
        *(undefined8 **)(param_1 + 0x28) = puVar8;
      }
      else {
        *puVar9 = puVar8;
      }
      if (puVar3 == *(undefined8 **)(param_1 + 0x30)) {
        *(undefined8 **)(param_1 + 0x30) = puVar9;
      }
      *puVar3 = *(undefined8 *)(param_1 + 0x38);
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
      *(undefined8 **)(param_1 + 0x38) = puVar3;
      (**(code **)(*(longlong *)plVar1[1] + 0x10))();
      lVar4 = g_DefaultPoolId;
      (**(code **)(*plVar1 + 8))(plVar1,0);
      AK::MemoryMgr::Free(lVar4,plVar1);
    }
    puVar3 = puVar8;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  } while( true );
}



// FUNCTION 14313ff60 FUN_14313ff60 body=174 status=ok
// SIG undefined FUN_14313ff60(void)

undefined8 FUN_14313ff60(longlong *param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar2 = param_1[1];
  lVar3 = *param_1;
  if (lVar3 != lVar2) {
    FUN_1431400f0(param_1,0,4);
    LOCK();
    *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + -1;
    UNLOCK();
    uVar4 = 0;
    iVar1 = *(int *)((longlong)param_1 + 0x9c);
    while (0 < iVar1) {
      Sleep(uVar4 >> 7);
      uVar4 = uVar4 + 1;
      iVar1 = *(int *)((longlong)param_1 + 0x9c);
    }
    LOCK();
    *(int *)((longlong)param_1 + 0x7c) = *(int *)((longlong)param_1 + 0x7c) + 1;
    UNLOCK();
  }
  if ((DAT_146b50bf5 == '\0') && (param_2 != '\0')) {
    FUN_14313d8f0(param_1);
  }
  else if (lVar3 != lVar2) {
    CAkAudioThread::WakeupEventsConsumer(param_1 + 0x10);
  }
  return 1;
}



// FUNCTION 143140010 FUN_143140010 body=216 status=ok
// SIG undefined FUN_143140010(void)

undefined4 * FUN_143140010(undefined8 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  LOCK();
  *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + 1;
  UNLOCK();
  *param_2 = *param_2 + 3 & 0xfffffffc;
  do {
    while( true ) {
      while( true ) {
        puVar2 = (undefined4 *)param_1[1];
        puVar1 = (undefined4 *)*param_1;
        if (puVar1 <= puVar2) break;
        if ((ulonglong)((longlong)puVar1 - (longlong)puVar2) <= (ulonglong)(*param_2 + 4))
        goto LAB_1431400d4;
        LOCK();
        bVar3 = puVar2 == (undefined4 *)param_1[1];
        if (bVar3) {
          param_1[1] = (longlong)puVar2 + (ulonglong)*param_2;
        }
        UNLOCK();
        if (bVar3) goto LAB_1431400c1;
      }
      if ((ulonglong)(*param_2 + 4) < (ulonglong)(param_1[3] - (longlong)puVar2)) break;
      if ((ulonglong)((longlong)puVar1 - param_1[2]) <= (ulonglong)(*param_2 + 4))
      goto LAB_1431400d4;
      LOCK();
      bVar3 = puVar2 == (undefined4 *)param_1[1];
      if (bVar3) {
        param_1[1] = param_1[2] + (ulonglong)*param_2;
      }
      UNLOCK();
      if (bVar3) {
        if (puVar2 + 1 <= (undefined4 *)param_1[3]) {
          *puVar2 = 0x370004;
        }
        puVar2 = (undefined4 *)param_1[2];
        goto LAB_1431400c1;
      }
    }
    LOCK();
    bVar3 = puVar2 == (undefined4 *)param_1[1];
    if (bVar3) {
      param_1[1] = (longlong)puVar2 + (ulonglong)*param_2;
    }
    UNLOCK();
  } while (!bVar3);
LAB_1431400c1:
  if (puVar2 != (undefined4 *)0x0) {
    return puVar2;
  }
LAB_1431400d4:
  LOCK();
  *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + -1;
  UNLOCK();
  return (undefined4 *)0x0;
}



// FUNCTION 1431400f0 FUN_1431400f0 body=569 status=ok
// SIG undefined FUN_1431400f0(void)

undefined4 * FUN_1431400f0(undefined8 *param_1,undefined2 param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  bool bVar4;
  uint local_res18 [2];
  undefined1 local_res20 [8];
  
  local_res18[0] = param_3;
  puVar2 = (undefined4 *)FUN_143140010(param_1,local_res18);
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined2 *)puVar2 = (undefined2)local_res18[0];
      *(undefined2 *)((longlong)puVar2 + 2) = param_2;
      return puVar2;
    }
    if (*(uint *)(param_1 + 4) < local_res18[0]) {
      return (undefined4 *)0x0;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
    LOCK();
    *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + 1;
    UNLOCK();
    local_res18[0] = local_res18[0] + 3 & 0xfffffffc;
    do {
      while( true ) {
        puVar2 = (undefined4 *)param_1[1];
        puVar1 = (undefined4 *)*param_1;
        if (puVar1 <= puVar2) break;
        if ((ulonglong)((longlong)puVar1 - (longlong)puVar2) <= (ulonglong)(local_res18[0] + 4)) {
LAB_1431401ea:
          puVar2 = (undefined4 *)0x0;
          goto LAB_1431401ec;
        }
        LOCK();
        bVar4 = puVar2 == (undefined4 *)param_1[1];
        if (bVar4) {
          param_1[1] = (longlong)puVar2 + (ulonglong)local_res18[0];
        }
        UNLOCK();
joined_r0x0001431401a2:
        if (bVar4) goto LAB_1431401df;
      }
      if ((ulonglong)(local_res18[0] + 4) < (ulonglong)(param_1[3] - (longlong)puVar2)) {
        LOCK();
        bVar4 = puVar2 == (undefined4 *)param_1[1];
        if (bVar4) {
          param_1[1] = (longlong)puVar2 + (ulonglong)local_res18[0];
        }
        UNLOCK();
        goto joined_r0x0001431401a2;
      }
      if ((ulonglong)((longlong)puVar1 - param_1[2]) <= (ulonglong)(local_res18[0] + 4))
      goto LAB_1431401ea;
      LOCK();
      bVar4 = puVar2 == (undefined4 *)param_1[1];
      if (bVar4) {
        param_1[1] = param_1[2] + (ulonglong)local_res18[0];
      }
      UNLOCK();
    } while (!bVar4);
    if (puVar2 + 1 <= (undefined4 *)param_1[3]) {
      *puVar2 = 0x370004;
    }
    puVar2 = (undefined4 *)param_1[2];
LAB_1431401df:
    if (puVar2 == (undefined4 *)0x0) {
LAB_1431401ec:
      LOCK();
      *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + -1;
      UNLOCK();
      if (puVar2 == (undefined4 *)0x0) {
        if (0 < *(int *)((longlong)param_1 + 0x9c)) {
          uVar3 = 0;
          do {
            Sleep((DWORD)(uVar3 >> 7));
            uVar3 = (ulonglong)((int)uVar3 + 1);
          } while (0 < *(int *)((longlong)param_1 + 0x9c));
        }
        FUN_14313e2c0(param_1,1,local_res20);
        LOCK();
        *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + 1;
        UNLOCK();
        local_res18[0] = local_res18[0] + 3 & 0xfffffffc;
        do {
          while( true ) {
            puVar2 = (undefined4 *)param_1[1];
            puVar1 = (undefined4 *)*param_1;
            if (puVar1 <= puVar2) break;
            if ((ulonglong)((longlong)puVar1 - (longlong)puVar2) <= (ulonglong)(local_res18[0] + 4))
            {
LAB_1431402e4:
              puVar2 = (undefined4 *)0x0;
              goto LAB_1431402e6;
            }
            LOCK();
            bVar4 = puVar2 == (undefined4 *)param_1[1];
            if (bVar4) {
              param_1[1] = (longlong)puVar2 + (ulonglong)local_res18[0];
            }
            UNLOCK();
joined_r0x0001431402a0:
            if (bVar4) goto LAB_1431402dd;
          }
          if ((ulonglong)(local_res18[0] + 4) < (ulonglong)(param_1[3] - (longlong)puVar2)) {
            LOCK();
            bVar4 = puVar2 == (undefined4 *)param_1[1];
            if (bVar4) {
              param_1[1] = (longlong)puVar2 + (ulonglong)local_res18[0];
            }
            UNLOCK();
            goto joined_r0x0001431402a0;
          }
          if ((ulonglong)((longlong)puVar1 - param_1[2]) <= (ulonglong)(local_res18[0] + 4))
          goto LAB_1431402e4;
          LOCK();
          bVar4 = puVar2 == (undefined4 *)param_1[1];
          if (bVar4) {
            param_1[1] = param_1[2] + (ulonglong)local_res18[0];
          }
          UNLOCK();
        } while (!bVar4);
        if (puVar2 + 1 <= (undefined4 *)param_1[3]) {
          *puVar2 = 0x370004;
        }
        puVar2 = (undefined4 *)param_1[2];
LAB_1431402dd:
        if (puVar2 == (undefined4 *)0x0) {
LAB_1431402e6:
          LOCK();
          *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + -1;
          UNLOCK();
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  } while( true );
}



// FUNCTION 143140330 ResumePausedPendingAction body=272 status=ok
// SIG undefined ResumePausedPendingAction(void)

void CAkAudioMgr::ResumePausedPendingAction(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = *(undefined8 **)(param_1 + 0x50);
  puVar2 = (undefined8 *)0x0;
  do {
    puVar5 = puVar4;
    if (puVar5 == (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x28);
      while (puVar4 != (undefined8 *)0x0) {
        lVar1 = *(longlong *)(puVar4[2] + 8);
        plVar3 = (longlong *)CAkAction::GetAndRefTarget(lVar1);
        if ((lVar1 == param_2) && (*(short *)(lVar1 + 0x34) == 0x503)) {
          CAkActionPlayAndContinue::Resume(lVar1);
        }
        puVar4 = (undefined8 *)*puVar4;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      return;
    }
    lVar1 = puVar5[2];
    plVar3 = (longlong *)CAkAction::GetAndRefTarget(*(undefined8 *)(lVar1 + 8));
    if (*(longlong *)(lVar1 + 8) == param_2) {
      if (*(int *)(lVar1 + 0x34) != 0) {
        *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + -1;
        goto LAB_1431403bc;
      }
      FUN_143141770(param_1,lVar1);
      puVar4 = (undefined8 *)*puVar5;
      if (puVar5 == *(undefined8 **)(param_1 + 0x50)) {
        *(undefined8 **)(param_1 + 0x50) = puVar4;
      }
      else {
        *puVar2 = puVar4;
      }
      if (puVar5 == *(undefined8 **)(param_1 + 0x58)) {
        *(undefined8 **)(param_1 + 0x58) = puVar2;
      }
      *puVar5 = *(undefined8 *)(param_1 + 0x60);
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
      *(undefined8 **)(param_1 + 0x60) = puVar5;
      puVar5 = puVar2;
    }
    else {
LAB_1431403bc:
      puVar4 = (undefined8 *)*puVar5;
    }
    puVar2 = puVar5;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  } while( true );
}



// FUNCTION 143140440 ResumePausedPendingAction body=530 status=ok
// SIG undefined ResumePausedPendingAction(void)

void CAkAudioMgr::ResumePausedPendingAction
               (longlong param_1,longlong *param_2,longlong param_3,char param_4,int param_5)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)0x0;
  puVar3 = *(undefined8 **)(param_1 + 0x50);
  while (puVar3 != (undefined8 *)0x0) {
    lVar1 = puVar3[2];
    plVar5 = (longlong *)CAkAction::GetAndRefTarget(*(undefined8 *)(lVar1 + 8));
    if (param_2 == (longlong *)0x0) {
LAB_1431404ed:
      if (((param_3 == 0) || (param_3 == *(longlong *)(lVar1 + 0x40))) &&
         ((param_5 == 0 || (param_5 == *(int *)(lVar1 + 0x30))))) {
        if ((param_4 == '\0') && (*(int *)(lVar1 + 0x34) != 0)) {
          *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + -1;
          puVar7 = (undefined8 *)*puVar3;
          puVar8 = puVar3;
        }
        else {
          FUN_143141770(param_1,lVar1);
          puVar7 = (undefined8 *)*puVar3;
          if (puVar3 == *(undefined8 **)(param_1 + 0x50)) {
            *(undefined8 **)(param_1 + 0x50) = puVar7;
          }
          else {
            *puVar8 = puVar7;
          }
          if (puVar3 == *(undefined8 **)(param_1 + 0x58)) {
            *(undefined8 **)(param_1 + 0x58) = puVar8;
          }
          *puVar3 = *(undefined8 *)(param_1 + 0x60);
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
          *(undefined8 **)(param_1 + 0x60) = puVar3;
        }
      }
      else {
LAB_143140505:
        puVar7 = (undefined8 *)*puVar3;
        puVar8 = puVar3;
      }
    }
    else {
      if (plVar5 == (longlong *)0x0) goto LAB_143140505;
      if (param_2 == plVar5) goto LAB_1431404ed;
      plVar6 = (longlong *)plVar5[0x11];
      for (plVar2 = (longlong *)plVar5[0x10]; plVar2 != (longlong *)0x0;
          plVar2 = (longlong *)plVar2[0x10]) {
        if (param_2 == plVar2) goto LAB_1431404ed;
        if (plVar6 == (longlong *)0x0) {
          plVar6 = (longlong *)plVar2[0x11];
        }
      }
      if (plVar6 == (longlong *)0x0) goto LAB_143140505;
      do {
        if (param_2 == plVar6) goto LAB_1431404ed;
        plVar6 = (longlong *)plVar6[0x11];
      } while (plVar6 != (longlong *)0x0);
      puVar7 = (undefined8 *)*puVar3;
      puVar8 = puVar3;
    }
    puVar3 = puVar7;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  do {
    if (puVar3 == (undefined8 *)0x0) {
      return;
    }
    lVar1 = puVar3[2];
    lVar4 = *(longlong *)(lVar1 + 8);
    plVar5 = (longlong *)CAkAction::GetAndRefTarget(lVar4);
    if (param_2 == (longlong *)0x0) {
LAB_1431405fa:
      if ((((param_3 == 0) || (param_3 == *(longlong *)(lVar1 + 0x40))) &&
          ((param_5 == 0 || (param_5 == *(int *)(lVar1 + 0x30))))) &&
         (*(short *)(lVar4 + 0x34) == 0x503)) {
        CAkActionPlayAndContinue::Resume(lVar4);
      }
    }
    else if (plVar5 != (longlong *)0x0) {
      if (param_2 == plVar5) goto LAB_1431405fa;
      plVar6 = (longlong *)plVar5[0x11];
      for (plVar2 = (longlong *)plVar5[0x10]; plVar2 != (longlong *)0x0;
          plVar2 = (longlong *)plVar2[0x10]) {
        if (param_2 == plVar2) goto LAB_1431405fa;
        if (plVar6 == (longlong *)0x0) {
          plVar6 = (longlong *)plVar2[0x11];
        }
      }
      for (; plVar6 != (longlong *)0x0; plVar6 = (longlong *)plVar6[0x11]) {
        if (param_2 == plVar6) goto LAB_1431405fa;
      }
    }
    puVar3 = (undefined8 *)*puVar3;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  } while( true );
}



// FUNCTION 143140660 ResumePausedPendingActionAllExcept body=331 status=ok
// SIG undefined ResumePausedPendingActionAllExcept(void)

void CAkAudioMgr::ResumePausedPendingActionAllExcept
               (longlong param_1,longlong param_2,undefined8 param_3,char param_4,int param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  puVar6 = (undefined8 *)0x0;
  lVar1 = DAT_146b50b78;
  do {
    while( true ) {
      puVar5 = puVar2;
      DAT_146b50b78 = lVar1;
      if (puVar5 == (undefined8 *)0x0) {
        for (puVar2 = *(undefined8 **)(lVar1 + 0x28); puVar2 != (undefined8 *)0x0;
            puVar2 = (undefined8 *)*puVar2) {
          lVar3 = puVar2[2];
          lVar4 = *(longlong *)(lVar3 + 8);
          if ((((param_2 == 0) || (param_2 == *(longlong *)(lVar3 + 0x40))) &&
              ((param_5 == 0 || (param_5 == *(int *)(lVar3 + 0x30))))) &&
             ((cVar7 = IsAnException(lVar1,lVar4,param_3), cVar7 == '\0' &&
              (*(short *)(lVar4 + 0x34) == 0x503)))) {
            CAkActionPlayAndContinue::Resume(lVar4);
          }
        }
        return;
      }
      lVar1 = puVar5[2];
      if ((((param_2 == 0) || (param_2 == *(longlong *)(lVar1 + 0x40))) &&
          ((param_5 == 0 || (param_5 == *(int *)(lVar1 + 0x30))))) &&
         (cVar7 = IsAnException(param_1,*(undefined8 *)(lVar1 + 8),param_3), cVar7 == '\0')) break;
LAB_1431406e6:
      puVar2 = (undefined8 *)*puVar5;
      puVar6 = puVar5;
      lVar1 = DAT_146b50b78;
    }
    if ((param_4 == '\0') && (*(int *)(lVar1 + 0x34) != 0)) {
      *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + -1;
      goto LAB_1431406e6;
    }
    FUN_143141770(param_1,lVar1);
    puVar2 = (undefined8 *)*puVar5;
    if (puVar5 == *(undefined8 **)(param_1 + 0x50)) {
      *(undefined8 **)(param_1 + 0x50) = puVar2;
    }
    else {
      *puVar6 = puVar2;
    }
    if (puVar5 == *(undefined8 **)(param_1 + 0x58)) {
      *(undefined8 **)(param_1 + 0x58) = puVar6;
    }
    *puVar5 = *(undefined8 *)(param_1 + 0x60);
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
    *(undefined8 **)(param_1 + 0x60) = puVar5;
    lVar1 = DAT_146b50b78;
  } while( true );
}



// FUNCTION 1431407b0 ResumePausedPendingItems body=147 status=ok
// SIG undefined ResumePausedPendingItems(void)

void CAkAudioMgr::ResumePausedPendingItems(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  puVar4 = (undefined8 *)0x0;
joined_r0x0001431407d2:
  do {
    puVar3 = puVar2;
    if (puVar3 == (undefined8 *)0x0) {
      return;
    }
    lVar1 = puVar3[2];
    if (*(int *)(lVar1 + 0x30) == param_2) {
      if (*(int *)(lVar1 + 0x34) == 0) {
        FUN_143141770(param_1,lVar1);
        puVar2 = (undefined8 *)*puVar3;
        if (puVar3 == *(undefined8 **)(param_1 + 0x50)) {
          *(undefined8 **)(param_1 + 0x50) = puVar2;
        }
        else {
          *puVar4 = puVar2;
        }
        if (puVar3 == *(undefined8 **)(param_1 + 0x58)) {
          *(undefined8 **)(param_1 + 0x58) = puVar4;
        }
        *puVar3 = *(undefined8 *)(param_1 + 0x60);
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        *(undefined8 **)(param_1 + 0x60) = puVar3;
        goto joined_r0x0001431407d2;
      }
      *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + -1;
    }
    puVar2 = (undefined8 *)*puVar3;
    puVar4 = puVar3;
  } while( true );
}



// FUNCTION 143140850 Sizeof_Event body=6 status=ok
// SIG undefined Sizeof_Event(void)

undefined8 AkQueuedMsg::Sizeof_Event(void)

{
  return 0x34;
}



// FUNCTION 143140860 FUN_143140860 body=6 status=ok
// SIG undefined FUN_143140860(void)

undefined8 FUN_143140860(void)

{
  return 0x1c;
}



// FUNCTION 143140870 FUN_143140870 body=6 status=ok
// SIG undefined FUN_143140870(void)

undefined8 FUN_143140870(void)

{
  return 0x24;
}



// FUNCTION 143140880 StampTimeLastBuffer body=14 status=ok
// SIG undefined StampTimeLastBuffer(void)

void CAkAudioMgr::StampTimeLastBuffer(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143140887. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QueryPerformanceCounter((LARGE_INTEGER *)(param_1 + 0x90));
  return;
}



// FUNCTION 143140890 FUN_143140890 body=78 status=ok
// SIG undefined FUN_143140890(void)

undefined4 FUN_143140890(longlong param_1)

{
  undefined4 uVar1;
  
  AKRANDOM::AkRandomInit(0);
  if (DAT_146b50bf5 == '\0') {
    CAkLEngine::OnThreadStart();
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_14312cba0(param_1 + 0x80);
  }
  FUN_14313ff60(param_1,0);
  return uVar1;
}



// FUNCTION 1431408e0 Stop body=23 status=ok
// SIG undefined Stop(void)

void CAkAudioMgr::Stop(longlong param_1)

{
  if (DAT_146b50bf5 != '\0') {
    CAkAudioThread::Stop(param_1 + 0x80);
    return;
  }
  CAkLEngine::OnThreadEnd();
  return;
}



// FUNCTION 143140900 FUN_143140900 body=521 status=ok
// SIG undefined FUN_143140900(void)

undefined8 FUN_143140900(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  longlong *plVar6;
  undefined4 local_78 [20];
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  puVar4 = (undefined8 *)0x0;
  while (puVar3 = puVar2, puVar3 != (undefined8 *)0x0) {
    plVar1 = (longlong *)puVar3[2];
    plVar6 = (longlong *)plVar1[1];
    if (((int)plVar6[2] == param_2) && ((param_3 == 0 || ((int)plVar1[6] == param_3)))) {
      local_78[0] = 0;
      if (*(short *)((longlong)plVar6 + 0x34) == 0x403) {
LAB_143140981:
        (**(code **)(*plVar6 + 0x50))(plVar6,local_78);
      }
      else if (*(short *)((longlong)plVar6 + 0x34) == 0x503) {
        FUN_1431a5b70();
        plVar6 = (longlong *)plVar1[1];
        goto LAB_143140981;
      }
      CAkPlayingMgr::RemoveItemActiveCount(DAT_146b50b00,(int)plVar1[6]);
      puVar2 = (undefined8 *)*puVar3;
      if (puVar3 == *(undefined8 **)(param_1 + 0x28)) {
        *(undefined8 **)(param_1 + 0x28) = puVar2;
      }
      else {
        *puVar4 = puVar2;
      }
      if (puVar3 == *(undefined8 **)(param_1 + 0x30)) {
        *(undefined8 **)(param_1 + 0x30) = puVar4;
      }
      *puVar3 = *(undefined8 *)(param_1 + 0x38);
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
      *(undefined8 **)(param_1 + 0x38) = puVar3;
      (**(code **)(*(longlong *)plVar1[1] + 0x10))();
      lVar5 = g_DefaultPoolId;
      (**(code **)(*plVar1 + 8))(plVar1,0);
      AK::MemoryMgr::Free(lVar5,plVar1);
    }
    else {
      puVar2 = (undefined8 *)*puVar3;
      puVar4 = puVar3;
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  puVar4 = (undefined8 *)0x0;
  do {
    while( true ) {
      puVar3 = puVar2;
      if (puVar3 == (undefined8 *)0x0) {
        return 1;
      }
      plVar1 = (longlong *)puVar3[2];
      plVar6 = (longlong *)plVar1[1];
      if (((int)plVar6[2] == param_2) && ((param_3 == 0 || ((int)plVar1[6] == param_3)))) break;
      puVar2 = (undefined8 *)*puVar3;
      puVar4 = puVar3;
    }
    local_78[0] = 0;
    if (*(short *)((longlong)plVar6 + 0x34) == 0x403) {
LAB_143140a5e:
      (**(code **)(*plVar6 + 0x50))(plVar6,local_78);
    }
    else if (*(short *)((longlong)plVar6 + 0x34) == 0x503) {
      FUN_1431a5b70();
      plVar6 = (longlong *)plVar1[1];
      goto LAB_143140a5e;
    }
    CAkPlayingMgr::RemoveItemActiveCount(DAT_146b50b00,(int)plVar1[6]);
    puVar2 = (undefined8 *)*puVar3;
    if (puVar3 == *(undefined8 **)(param_1 + 0x50)) {
      *(undefined8 **)(param_1 + 0x50) = puVar2;
    }
    else {
      *puVar4 = puVar2;
    }
    if (puVar3 == *(undefined8 **)(param_1 + 0x58)) {
      *(undefined8 **)(param_1 + 0x58) = puVar4;
    }
    *puVar3 = *(undefined8 *)(param_1 + 0x60);
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
    *(undefined8 **)(param_1 + 0x60) = puVar3;
    (**(code **)(*(longlong *)plVar1[1] + 0x10))();
    lVar5 = g_DefaultPoolId;
    (**(code **)(*plVar1 + 8))(plVar1,0);
    AK::MemoryMgr::Free(lVar5,plVar1);
  } while( true );
}



// FUNCTION 143140b10 FUN_143140b10 body=453 status=ok
// SIG undefined FUN_143140b10(void)

undefined8 FUN_143140b10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 local_68 [20];
  
  if (param_2 != (longlong *)0x0) {
    puVar4 = *(undefined8 **)(param_1 + 0x50);
    puVar2 = (undefined8 *)0x0;
    while (puVar1 = puVar4, puVar1 != (undefined8 *)0x0) {
      if (param_2 == (longlong *)puVar1[2]) {
        plVar5 = (longlong *)param_2[1];
        local_68[0] = 0;
        if (*(short *)((longlong)plVar5 + 0x34) == 0x403) {
LAB_143140b8f:
          (**(code **)(*plVar5 + 0x50))(plVar5,local_68);
        }
        else if (*(short *)((longlong)plVar5 + 0x34) == 0x503) {
          FUN_1431a5b70();
          plVar5 = (longlong *)param_2[1];
          goto LAB_143140b8f;
        }
        CAkPlayingMgr::RemoveItemActiveCount(DAT_146b50b00,(int)param_2[6]);
        if (puVar1 == *(undefined8 **)(param_1 + 0x50)) {
          *(undefined8 *)(param_1 + 0x50) = *puVar1;
        }
        else {
          *puVar2 = *puVar1;
        }
        if (puVar1 == *(undefined8 **)(param_1 + 0x58)) {
          *(undefined8 **)(param_1 + 0x58) = puVar2;
        }
        *puVar1 = *(undefined8 *)(param_1 + 0x60);
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        *(undefined8 **)(param_1 + 0x60) = puVar1;
        (**(code **)(*(longlong *)param_2[1] + 0x10))();
        lVar3 = g_DefaultPoolId;
        (**(code **)(*param_2 + 8))(param_2,0);
        AK::MemoryMgr::Free(lVar3,param_2);
        break;
      }
      puVar2 = puVar1;
      puVar4 = (undefined8 *)*puVar1;
    }
    puVar4 = *(undefined8 **)(param_1 + 0x28);
    puVar2 = (undefined8 *)0x0;
    while (puVar1 = puVar4, puVar1 != (undefined8 *)0x0) {
      if (param_2 == (longlong *)puVar1[2]) {
        plVar5 = (longlong *)param_2[1];
        local_68[0] = 0;
        if (*(short *)((longlong)plVar5 + 0x34) != 0x403) {
          if (*(short *)((longlong)plVar5 + 0x34) != 0x503) goto LAB_143140c4e;
          FUN_1431a5b70();
          plVar5 = (longlong *)param_2[1];
        }
        (**(code **)(*plVar5 + 0x50))(plVar5,local_68);
LAB_143140c4e:
        CAkPlayingMgr::RemoveItemActiveCount(DAT_146b50b00,(int)param_2[6]);
        if (puVar1 == *(undefined8 **)(param_1 + 0x28)) {
          *(undefined8 *)(param_1 + 0x28) = *puVar1;
        }
        else {
          *puVar2 = *puVar1;
        }
        if (puVar1 == *(undefined8 **)(param_1 + 0x30)) {
          *(undefined8 **)(param_1 + 0x30) = puVar2;
        }
        *puVar1 = *(undefined8 *)(param_1 + 0x38);
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
        *(undefined8 **)(param_1 + 0x38) = puVar1;
        (**(code **)(*(longlong *)param_2[1] + 0x10))();
        lVar3 = g_DefaultPoolId;
        (**(code **)(*param_2 + 8))(param_2,0);
        AK::MemoryMgr::Free(lVar3,param_2);
        return 1;
      }
      puVar2 = puVar1;
      puVar4 = (undefined8 *)*puVar1;
    }
  }
  return 1;
}



// FUNCTION 143140ce0 FUN_143140ce0 body=853 status=ok
// SIG undefined FUN_143140ce0(void)

undefined8 FUN_143140ce0(longlong param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  long lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 local_78 [20];
  
  puVar9 = (undefined8 *)0x0;
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  while (puVar3 != (undefined8 *)0x0) {
    plVar1 = (longlong *)puVar3[2];
    lVar2 = plVar1[1];
    plVar5 = (longlong *)CAkAction::GetAndRefTarget(lVar2);
    if (param_2 == (longlong *)0x0) {
LAB_143140e8b:
      if ((((param_3 != 0) && (param_3 != plVar1[8])) ||
          ((param_4 != 0 && (param_4 != (int)plVar1[6])))) || (*(short *)(lVar2 + 0x34) == 0x1820))
      goto LAB_143140d9b;
      plVar7 = (longlong *)plVar1[1];
      local_78[0] = 0;
      if (*(short *)((longlong)plVar7 + 0x34) == 0x403) {
LAB_143140eed:
        (**(code **)(*plVar7 + 0x50))(plVar7,local_78);
      }
      else if (*(short *)((longlong)plVar7 + 0x34) == 0x503) {
        FUN_1431a5b70();
        plVar7 = (longlong *)plVar1[1];
        goto LAB_143140eed;
      }
      CAkPlayingMgr::RemoveItemActiveCount(DAT_146b50b00,(int)plVar1[6]);
      puVar8 = (undefined8 *)*puVar3;
      if (puVar3 == *(undefined8 **)(param_1 + 0x28)) {
        *(undefined8 **)(param_1 + 0x28) = puVar8;
      }
      else {
        *puVar9 = puVar8;
      }
      if (puVar3 == *(undefined8 **)(param_1 + 0x30)) {
        *(undefined8 **)(param_1 + 0x30) = puVar9;
      }
      *puVar3 = *(undefined8 *)(param_1 + 0x38);
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
      *(undefined8 **)(param_1 + 0x38) = puVar3;
      (**(code **)(*(longlong *)plVar1[1] + 0x10))();
      lVar4 = g_DefaultPoolId;
      (**(code **)(*plVar1 + 8))(plVar1,0);
      AK::MemoryMgr::Free(lVar4,plVar1);
    }
    else {
      if (plVar5 != (longlong *)0x0) {
        if (param_2 == plVar5) goto LAB_143140e8b;
        plVar6 = (longlong *)plVar5[0x11];
        for (plVar7 = (longlong *)plVar5[0x10]; plVar7 != (longlong *)0x0;
            plVar7 = (longlong *)plVar7[0x10]) {
          if (param_2 == plVar7) goto LAB_143140e8b;
          if (plVar6 == (longlong *)0x0) {
            plVar6 = (longlong *)plVar7[0x11];
          }
        }
        for (; plVar6 != (longlong *)0x0; plVar6 = (longlong *)plVar6[0x11]) {
          if (param_2 == plVar6) goto LAB_143140e8b;
        }
      }
LAB_143140d9b:
      puVar8 = (undefined8 *)*puVar3;
      puVar9 = puVar3;
    }
    puVar3 = puVar8;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  puVar9 = (undefined8 *)0x0;
  puVar3 = *(undefined8 **)(param_1 + 0x50);
  do {
    if (puVar3 == (undefined8 *)0x0) {
      return 1;
    }
    plVar1 = (longlong *)puVar3[2];
    lVar2 = plVar1[1];
    plVar5 = (longlong *)CAkAction::GetAndRefTarget(lVar2);
    if (param_2 == (longlong *)0x0) {
LAB_143140f60:
      if (((param_3 != 0) && (param_3 != plVar1[8])) ||
         (((param_4 != 0 && (param_4 != (int)plVar1[6])) || (*(short *)(lVar2 + 0x34) == 0x1820))))
      goto LAB_143140e4b;
      plVar7 = (longlong *)plVar1[1];
      local_78[0] = 0;
      if (*(short *)((longlong)plVar7 + 0x34) == 0x403) {
LAB_143140fc2:
        (**(code **)(*plVar7 + 0x50))(plVar7,local_78);
      }
      else if (*(short *)((longlong)plVar7 + 0x34) == 0x503) {
        FUN_1431a5b70();
        plVar7 = (longlong *)plVar1[1];
        goto LAB_143140fc2;
      }
      CAkPlayingMgr::RemoveItemActiveCount(DAT_146b50b00,(int)plVar1[6]);
      puVar8 = (undefined8 *)*puVar3;
      if (puVar3 == *(undefined8 **)(param_1 + 0x50)) {
        *(undefined8 **)(param_1 + 0x50) = puVar8;
      }
      else {
        *puVar9 = puVar8;
      }
      if (puVar3 == *(undefined8 **)(param_1 + 0x58)) {
        *(undefined8 **)(param_1 + 0x58) = puVar9;
      }
      *puVar3 = *(undefined8 *)(param_1 + 0x60);
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
      *(undefined8 **)(param_1 + 0x60) = puVar3;
      (**(code **)(*(longlong *)plVar1[1] + 0x10))();
      lVar4 = g_DefaultPoolId;
      (**(code **)(*plVar1 + 8))(plVar1,0);
      AK::MemoryMgr::Free(lVar4,plVar1);
    }
    else {
      if (plVar5 != (longlong *)0x0) {
        if (param_2 == plVar5) goto LAB_143140f60;
        plVar6 = (longlong *)plVar5[0x11];
        for (plVar7 = (longlong *)plVar5[0x10]; plVar7 != (longlong *)0x0;
            plVar7 = (longlong *)plVar7[0x10]) {
          if (param_2 == plVar7) goto LAB_143140f60;
          if (plVar6 == (longlong *)0x0) {
            plVar6 = (longlong *)plVar7[0x11];
          }
        }
        for (; plVar6 != (longlong *)0x0; plVar6 = (longlong *)plVar6[0x11]) {
          if (param_2 == plVar6) goto LAB_143140f60;
        }
      }
LAB_143140e4b:
      puVar8 = (undefined8 *)*puVar3;
      puVar9 = puVar3;
    }
    puVar3 = puVar8;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  } while( true );
}



// FUNCTION 143141040 FUN_143141040 body=597 status=ok
// SIG undefined FUN_143141040(void)

undefined8 FUN_143141040(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  short sVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  char cVar7;
  longlong *plVar8;
  undefined4 local_78 [20];
  
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  puVar5 = (undefined8 *)0x0;
joined_r0x000143141077:
  do {
    puVar4 = puVar3;
    if (puVar4 == (undefined8 *)0x0) break;
    plVar2 = (longlong *)puVar4[2];
    if ((((param_2 == 0) || (param_2 == plVar2[8])) &&
        ((param_4 == 0 || (param_4 == (int)plVar2[6])))) &&
       (cVar7 = CAkAudioMgr::IsAnException(param_1,plVar2[1],param_3), cVar7 == '\0')) {
      plVar8 = (longlong *)plVar2[1];
      sVar1 = *(short *)((longlong)plVar8 + 0x34);
      if (sVar1 != 0x1820) {
        local_78[0] = 0;
        if (sVar1 == 0x403) {
LAB_1431410ef:
          (**(code **)(*plVar8 + 0x50))(plVar8,local_78);
        }
        else if (sVar1 == 0x503) {
          FUN_1431a5b70();
          plVar8 = (longlong *)plVar2[1];
          goto LAB_1431410ef;
        }
        CAkPlayingMgr::RemoveItemActiveCount(DAT_146b50b00,(int)plVar2[6]);
        puVar3 = (undefined8 *)*puVar4;
        if (puVar4 == *(undefined8 **)(param_1 + 0x28)) {
          *(undefined8 **)(param_1 + 0x28) = puVar3;
        }
        else {
          *puVar5 = puVar3;
        }
        if (puVar4 == *(undefined8 **)(param_1 + 0x30)) {
          *(undefined8 **)(param_1 + 0x30) = puVar5;
        }
        *puVar4 = *(undefined8 *)(param_1 + 0x38);
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
        *(undefined8 **)(param_1 + 0x38) = puVar4;
        (**(code **)(*(longlong *)plVar2[1] + 0x10))();
        lVar6 = g_DefaultPoolId;
        (**(code **)(*plVar2 + 8))(plVar2,0);
        AK::MemoryMgr::Free(lVar6,plVar2);
        goto joined_r0x000143141077;
      }
    }
    puVar3 = (undefined8 *)*puVar4;
    puVar5 = puVar4;
  } while( true );
  puVar3 = *(undefined8 **)(param_1 + 0x50);
  puVar5 = (undefined8 *)0x0;
joined_r0x00014314117b:
  do {
    puVar4 = puVar3;
    if (puVar4 == (undefined8 *)0x0) {
      return 1;
    }
    plVar2 = (longlong *)puVar4[2];
    if (((param_2 == 0) || (param_2 == plVar2[8])) &&
       (((param_4 == 0 || (param_4 == (int)plVar2[6])) &&
        (cVar7 = CAkAudioMgr::IsAnException(param_1,plVar2[1],param_3), cVar7 == '\0')))) {
      plVar8 = (longlong *)plVar2[1];
      sVar1 = *(short *)((longlong)plVar8 + 0x34);
      if (sVar1 != 0x1820) {
        local_78[0] = 0;
        if (sVar1 == 0x403) {
LAB_1431411f0:
          (**(code **)(*plVar8 + 0x50))(plVar8,local_78);
        }
        else if (sVar1 == 0x503) {
          FUN_1431a5b70();
          plVar8 = (longlong *)plVar2[1];
          goto LAB_1431411f0;
        }
        CAkPlayingMgr::RemoveItemActiveCount(DAT_146b50b00,(int)plVar2[6]);
        puVar3 = (undefined8 *)*puVar4;
        if (puVar4 == *(undefined8 **)(param_1 + 0x50)) {
          *(undefined8 **)(param_1 + 0x50) = puVar3;
        }
        else {
          *puVar5 = puVar3;
        }
        if (puVar4 == *(undefined8 **)(param_1 + 0x58)) {
          *(undefined8 **)(param_1 + 0x58) = puVar5;
        }
        *puVar4 = *(undefined8 *)(param_1 + 0x60);
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        *(undefined8 **)(param_1 + 0x60) = puVar4;
        (**(code **)(*(longlong *)plVar2[1] + 0x10))();
        lVar6 = g_DefaultPoolId;
        (**(code **)(*plVar2 + 8))(plVar2,0);
        AK::MemoryMgr::Free(lVar6,plVar2);
        goto joined_r0x00014314117b;
      }
    }
    puVar3 = (undefined8 *)*puVar4;
    puVar5 = puVar4;
  } while( true );
}



// FUNCTION 1431412a0 FUN_1431412a0 body=102 status=ok
// SIG undefined FUN_1431412a0(void)

void FUN_1431412a0(longlong param_1,byte param_2,byte param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_1431400f0(DAT_146b50b78,0x34,0xc);
  *(ushort *)(lVar1 + 8) = (ushort)param_2;
  *(ushort *)(lVar1 + 10) = (ushort)param_3;
  *(undefined4 *)(lVar1 + 4) = param_4;
  LOCK();
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
  UNLOCK();
  FUN_14313ff60(param_1,0);
  return;
}



// FUNCTION 143141310 FUN_143141310 body=181 status=ok
// SIG undefined FUN_143141310(void)

void FUN_143141310(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  plVar3 = (undefined8 *)param_1[2];
  while (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0) {
    *param_1 = *plVar1;
    if (plVar1 == (longlong *)param_1[1]) {
      param_1[1] = 0;
    }
    *plVar1 = param_1[2];
    *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
    param_1[2] = (longlong)plVar1;
    plVar3 = plVar1;
  }
  while (puVar2 = plVar3, puVar2 != (undefined8 *)0x0) {
    plVar3 = (longlong *)*puVar2;
    if ((puVar2 < (undefined8 *)param_1[3]) ||
       ((undefined8 *)param_1[3] + (ulonglong)*(uint *)(param_1 + 4) * 3 <= puVar2)) {
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar2);
    }
  }
  if ((void *)param_1[3] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[3]);
    param_1[3] = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 1431413d0 FUN_1431413d0 body=523 status=ok
// SIG undefined FUN_1431413d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431413d0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined4 local_c8 [20];
  undefined4 local_78 [20];
  
  FUN_14313fa50();
  puVar3 = *(undefined8 **)(param_1 + 0x50);
  while (puVar3 != (undefined8 *)0x0) {
    plVar1 = (longlong *)puVar3[2];
    local_c8[0] = 0;
    plVar6 = (longlong *)plVar1[1];
    if (*(short *)((longlong)plVar6 + 0x34) == 0x403) {
LAB_143141446:
      (**(code **)(*plVar6 + 0x50))(plVar6,local_c8);
    }
    else if (*(short *)((longlong)plVar6 + 0x34) == 0x503) {
      FUN_1431a5b70();
      plVar6 = (longlong *)plVar1[1];
      goto LAB_143141446;
    }
    CAkPlayingMgr::RemoveItemActiveCount(DAT_146b50b00,(int)plVar1[6]);
    puVar2 = (undefined8 *)*puVar3;
    puVar5 = puVar2;
    if (puVar3 == *(undefined8 **)(param_1 + 0x50)) {
      *(undefined8 **)(param_1 + 0x50) = puVar2;
      puVar5 = (undefined8 *)_DAT_00000000;
    }
    _DAT_00000000 = puVar5;
    if (puVar3 == *(undefined8 **)(param_1 + 0x58)) {
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    *puVar3 = *(undefined8 *)(param_1 + 0x60);
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
    *(undefined8 **)(param_1 + 0x60) = puVar3;
    (**(code **)(*(longlong *)plVar1[1] + 0x10))();
    lVar4 = g_DefaultPoolId;
    (**(code **)(*plVar1 + 8))(plVar1,0);
    AK::MemoryMgr::Free(lVar4,plVar1);
    puVar3 = puVar2;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  do {
    if (puVar3 == (undefined8 *)0x0) {
      if (*(longlong *)(param_1 + 0x10) != 0) {
        AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 0x10));
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
      FUN_143141310(param_1 + 0x28);
      FUN_143141310(param_1 + 0x50);
      return;
    }
    plVar1 = (longlong *)puVar3[2];
    local_78[0] = 0;
    plVar6 = (longlong *)plVar1[1];
    if (*(short *)((longlong)plVar6 + 0x34) == 0x403) {
LAB_143141505:
      (**(code **)(*plVar6 + 0x50))(plVar6,local_78);
    }
    else if (*(short *)((longlong)plVar6 + 0x34) == 0x503) {
      FUN_1431a5b70();
      plVar6 = (longlong *)plVar1[1];
      goto LAB_143141505;
    }
    CAkPlayingMgr::RemoveItemActiveCount(DAT_146b50b00,(int)plVar1[6]);
    puVar2 = (undefined8 *)*puVar3;
    puVar5 = puVar2;
    if (puVar3 == *(undefined8 **)(param_1 + 0x28)) {
      *(undefined8 **)(param_1 + 0x28) = puVar2;
      puVar5 = (undefined8 *)_DAT_00000000;
    }
    _DAT_00000000 = puVar5;
    if (puVar3 == *(undefined8 **)(param_1 + 0x30)) {
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    *puVar3 = *(undefined8 *)(param_1 + 0x38);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
    *(undefined8 **)(param_1 + 0x38) = puVar3;
    (**(code **)(*(longlong *)plVar1[1] + 0x10))();
    lVar4 = g_DefaultPoolId;
    (**(code **)(*plVar1 + 8))(plVar1,0);
    AK::MemoryMgr::Free(lVar4,plVar1);
    puVar3 = puVar2;
  } while( true );
}



// FUNCTION 1431415e0 TransUpdateValue body=400 status=ok
// SIG undefined TransUpdateValue(void)

void AkPendingAction::TransUpdateValue(longlong param_1,int param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(short *)(lVar1 + 0x34) == 0x503) {
    if ((param_2 - 0x1000000U & 0xfeffffff) == 0) {
      if ((param_4 != '\0') && (*(undefined8 *)(lVar1 + 0x40) = 0, param_2 == 0x2000000)) {
        FUN_143140b10(DAT_146b50b78);
        return;
      }
    }
    else if (((param_2 + 0xfc000000U & 0xfbffffff) == 0) && (param_4 != '\0')) {
      *(undefined8 *)(lVar1 + 0x48) = 0;
      lVar5 = DAT_146b50b78;
      if (param_2 == 0x4000000) {
        if (*(longlong **)(DAT_146b50b78 + 0x28) != (longlong *)0x0) {
          plVar6 = *(longlong **)(DAT_146b50b78 + 0x28);
          plVar9 = (longlong *)0x0;
          do {
            plVar8 = plVar6;
            lVar2 = plVar8[2];
            lVar3 = *(longlong *)(lVar2 + 8);
            if (lVar2 == param_1) {
              iVar7 = 0;
              if (*(short *)(lVar3 + 0x34) == 0x503) {
                iVar7 = *(int *)(lVar3 + 0xe8) + -1;
                *(undefined4 *)(lVar3 + 0xe8) = 0;
              }
              FUN_14313cdd0(lVar5,*(undefined4 *)(lVar3 + 0x30),lVar2,iVar7);
              if (plVar8 == *(longlong **)(lVar5 + 0x28)) {
                *(longlong *)(lVar5 + 0x28) = *plVar8;
              }
              else {
                *plVar9 = *plVar8;
              }
              if (plVar8 == *(longlong **)(lVar5 + 0x30)) {
                *(longlong **)(lVar5 + 0x30) = plVar9;
              }
              *plVar8 = *(longlong *)(lVar5 + 0x38);
              *(int *)(lVar5 + 0x4c) = *(int *)(lVar5 + 0x4c) + -1;
              *(longlong **)(lVar5 + 0x38) = plVar8;
              goto LAB_143141733;
            }
            plVar6 = (longlong *)*plVar8;
            plVar9 = plVar8;
          } while ((longlong *)*plVar8 != (longlong *)0x0);
        }
        for (puVar4 = *(undefined8 **)(DAT_146b50b78 + 0x50); puVar4 != (undefined8 *)0x0;
            puVar4 = (undefined8 *)*puVar4) {
          lVar5 = puVar4[2];
          if (lVar5 == param_1) {
            if (*(short *)(*(longlong *)(lVar5 + 8) + 0x34) == 0x503) {
              *(int *)(lVar5 + 0x34) =
                   *(int *)(lVar5 + 0x34) + *(int *)(*(longlong *)(lVar5 + 8) + 0xe8);
            }
            else {
              *(int *)(lVar5 + 0x34) = *(int *)(lVar5 + 0x34) + 1;
            }
            break;
          }
        }
      }
LAB_143141733:
      *(undefined4 *)(lVar1 + 0xe8) = 0;
      return;
    }
  }
  return;
}



// FUNCTION 143141770 FUN_143141770 body=177 status=ok
// SIG undefined FUN_143141770(void)

void FUN_143141770(longlong param_1,longlong *param_2)

{
  long lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_res10 [3];
  undefined4 local_58 [20];
  
  *(int *)(param_2 + 2) = (int)param_2[2] + (*(int *)(param_1 + 0x78) - (int)param_2[3]);
  local_res10[0] = param_2;
  iVar2 = FUN_14313ccd0(param_1 + 0x28,(int)param_2[2],local_res10);
  if (iVar2 == 1) {
    return;
  }
  plVar3 = (longlong *)param_2[1];
  local_58[0] = 0;
  if (*(short *)((longlong)plVar3 + 0x34) != 0x403) {
    if (*(short *)((longlong)plVar3 + 0x34) != 0x503) goto LAB_1431417df;
    FUN_1431a5b70();
    plVar3 = (longlong *)param_2[1];
  }
  (**(code **)(*plVar3 + 0x50))(plVar3,local_58);
LAB_1431417df:
  CAkPlayingMgr::RemoveItemActiveCount(DAT_146b50b00,(int)param_2[6]);
  (**(code **)(*(longlong *)param_2[1] + 0x10))();
  lVar1 = g_DefaultPoolId;
  (**(code **)(*param_2 + 8))(param_2,0);
  AK::MemoryMgr::Free(lVar1,param_2);
  return;
}



// FUNCTION 143141830 Parse body=889 status=ok
// SIG undefined Parse(void)

undefined8
AkFileParser::Parse(int *param_1,uint param_2,uint *param_3,uint *param_4,undefined4 *param_5,
                   undefined4 *param_6,uint *param_7,int *param_8,uint *param_9,uint *param_10,
                   char param_11)

{
  ulonglong *puVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  byte bVar12;
  int *piVar13;
  uint uVar14;
  ulonglong local_res8;
  
  bVar4 = false;
  bVar3 = false;
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
    return 0x1f;
  }
  puVar11 = (ulonglong *)((ulonglong)param_2 + (longlong)param_1);
  *param_5 = 0;
  *param_6 = 0;
  if (param_1 + 3 <= puVar11) {
    if (*param_1 == 0x5367674f) {
      return 1;
    }
    if ((*param_1 == 0x46464952) && ((param_1[2] == 0x45564157 || (param_1[2] == 0x414d5758)))) {
      puVar7 = (ulonglong *)(param_1 + 3);
      iVar5 = (int)puVar7;
      do {
        do {
          uVar14 = (int)puVar11 - iVar5;
          if (uVar14 < 8) {
            return 8;
          }
          uVar10 = 0;
          local_res8 = *puVar7;
          puVar1 = puVar7 + 1;
          uVar8 = (uint)(local_res8 >> 0x20);
          uVar9 = (uint)local_res8;
          if ((uVar14 - 8 < uVar8) && (uVar9 != 0x61746164)) {
            return 8;
          }
          if (uVar9 < 0x61746165) {
            if (uVar9 == 0x61746164) {
              if (!bVar3) {
                return 7;
              }
              *param_7 = uVar8;
              *param_8 = (int)puVar1 - (int)param_1;
              return 1;
            }
            if (uVar9 == 0x20646b61) {
              if (param_9 != (uint *)0x0) {
                *param_9 = uVar8;
                *(ulonglong **)(param_9 + 2) = puVar1;
              }
            }
            else if (uVar9 == 0x20657563) {
              if (!bVar3) {
                return 7;
              }
              if ((!bVar4) && (param_4 != (uint *)0x0)) {
                if ((int)*puVar1 != 0) {
                  uVar6 = CAkMarkers::Allocate(param_4);
                  if ((int)uVar6 != 1) {
                    return uVar6;
                  }
                  uVar10 = 0;
                  piVar13 = (int *)((longlong)puVar7 + 0xc);
                  if (*param_4 != 0) {
                    do {
                      iVar5 = *piVar13;
                      iVar2 = piVar13[1];
                      piVar13 = piVar13 + 6;
                      uVar14 = (int)uVar10 + 1;
                      *(int *)(*(longlong *)(param_4 + 2) + uVar10 * 0x10) = iVar5;
                      *(int *)(*(longlong *)(param_4 + 2) + 4 + uVar10 * 0x10) = iVar2;
                      *(undefined8 *)(*(longlong *)(param_4 + 2) + 8 + uVar10 * 0x10) = 0;
                      uVar10 = (ulonglong)uVar14;
                    } while (uVar14 < *param_4);
                  }
                }
                bVar4 = true;
              }
            }
            else if (uVar9 == 0x20746d66) {
              if (!bVar3) {
                *param_3 = uVar8;
                *(ulonglong **)(param_3 + 2) = puVar1;
                uVar14 = *(uint *)((longlong)puVar7 + 0x1c);
                if ((param_11 == '\0') &&
                   ((((ushort)uVar14 & 0xff) != *(ushort *)((longlong)puVar7 + 10) ||
                    (0x200 < (uVar14 & 0xf00))))) {
                  bVar12 = 0;
                  for (uVar8 = uVar14; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
                    bVar12 = bVar12 + 1;
                  }
                  *(uint *)((longlong)puVar7 + 0x1c) = uVar14 << 0xc | (uint)bVar12 | 0x100;
                }
                bVar4 = false;
                bVar3 = true;
              }
            }
            else if (uVar9 == 0x5453494c) {
              local_res8 = 0x400000000;
            }
          }
          else if (uVar9 == 0x6b656573) {
            if (param_10 != (uint *)0x0) {
              *param_10 = uVar8;
              *(ulonglong **)(param_10 + 2) = puVar1;
            }
          }
          else if (uVar9 == 0x6c62616c) {
            if ((bVar4) && (param_4 != (uint *)0x0)) {
              if (*param_4 != 0) {
                do {
                  if (*(int *)(*(longlong *)(param_4 + 2) + uVar10 * 0x10) == (int)*puVar1) {
                    CAkMarkers::SetLabel(param_4,uVar10,(int *)((longlong)puVar7 + 0xc),uVar8 - 4);
                    break;
                  }
                  uVar14 = (int)uVar10 + 1;
                  uVar10 = (ulonglong)uVar14;
                } while (uVar14 < *param_4);
              }
            }
          }
          else if ((uVar9 == 0x6c706d73) && (*(int *)((longlong)puVar7 + 0x24) != 0)) {
            uVar10 = puVar7[5];
            *param_5 = *(undefined4 *)((ulonglong)(uint)uVar10 + 0x2c + (longlong)puVar1);
            *param_6 = *(undefined4 *)((ulonglong)(uint)uVar10 + 0x30 + (longlong)puVar1);
          }
          puVar7 = (ulonglong *)((longlong)puVar1 + (local_res8 >> 0x20));
          iVar5 = (int)puVar7;
        } while (((local_res8 & 0x100000000) == 0) || ((char)*puVar7 != '\0'));
        puVar7 = (ulonglong *)((longlong)puVar7 + 1);
        iVar5 = (int)puVar7;
      } while (puVar7 <= puVar11);
    }
  }
  return 7;
}



// FUNCTION 143141bb0 CAkMixer body=12 status=ok
// SIG undefined CAkMixer(void)

undefined2 * CAkMixer::CAkMixer(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 143141bc0 ApplyGainSIMD body=273 status=ok
// SIG undefined ApplyGainSIMD(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CAkMixer::ApplyGainSIMD
               (longlong param_1,longlong param_2,float param_3,float param_4,uint param_5)

{
  ulonglong uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  pfVar4 = (float *)(param_2 + 0x10);
  uVar1 = param_1 + (ulonglong)param_5 * 4;
  param_1 = param_1 - param_2;
  _DAT_146b50eb0 = param_3;
  _DAT_146b50eb4 = param_3;
  _DAT_146b50eb8 = param_3;
  _DAT_146b50ebc = param_3;
  if (param_4 != 0.0) {
    fVar5 = param_4 * 4.0;
    fVar11 = param_4 + param_4 + param_3;
    fVar6 = param_3 + param_4;
    fVar20 = param_4 * 3.0 + param_3;
    fVar16 = param_3 + fVar5;
    fVar17 = fVar6 + fVar5;
    fVar18 = fVar11 + fVar5;
    fVar19 = fVar20 + fVar5;
    _DAT_146b50eb4 = fVar6;
    _DAT_146b50eb8 = fVar11;
    _DAT_146b50ebc = fVar20;
    do {
      pfVar3 = (float *)(param_1 + -0x10 + (longlong)pfVar4);
      pfVar2 = (float *)(param_1 + (longlong)pfVar4);
      fVar7 = *pfVar3 * param_3;
      fVar8 = pfVar3[1] * fVar6;
      fVar9 = pfVar3[2] * fVar11;
      fVar10 = pfVar3[3] * fVar20;
      param_3 = param_3 + fVar5 + fVar5;
      fVar6 = fVar6 + fVar5 + fVar5;
      fVar11 = fVar11 + fVar5 + fVar5;
      fVar20 = fVar20 + fVar5 + fVar5;
      fVar12 = *pfVar2 * fVar16;
      fVar13 = pfVar2[1] * fVar17;
      fVar14 = pfVar2[2] * fVar18;
      fVar15 = pfVar2[3] * fVar19;
      fVar16 = fVar16 + fVar5 + fVar5;
      fVar17 = fVar17 + fVar5 + fVar5;
      fVar18 = fVar18 + fVar5 + fVar5;
      fVar19 = fVar19 + fVar5 + fVar5;
      pfVar4[-4] = fVar7;
      pfVar4[-3] = fVar8;
      pfVar4[-2] = fVar9;
      pfVar4[-1] = fVar10;
      *pfVar4 = fVar12;
      pfVar4[1] = fVar13;
      pfVar4[2] = fVar14;
      pfVar4[3] = fVar15;
      pfVar4 = pfVar4 + 8;
    } while ((ulonglong)(param_1 + -0x10 + (longlong)pfVar4) < uVar1);
    return;
  }
  do {
    pfVar3 = (float *)(param_1 + -0x10 + (longlong)pfVar4);
    fVar5 = pfVar3[1];
    fVar6 = pfVar3[2];
    fVar11 = pfVar3[3];
    pfVar2 = (float *)(param_1 + (longlong)pfVar4);
    fVar16 = *pfVar2;
    fVar17 = pfVar2[1];
    fVar18 = pfVar2[2];
    fVar19 = pfVar2[3];
    pfVar4[-4] = *pfVar3 * param_3;
    pfVar4[-3] = fVar5 * param_3;
    pfVar4[-2] = fVar6 * param_3;
    pfVar4[-1] = fVar11 * param_3;
    *pfVar4 = fVar16 * param_3;
    pfVar4[1] = fVar17 * param_3;
    pfVar4[2] = fVar18 * param_3;
    pfVar4[3] = fVar19 * param_3;
    pfVar4 = pfVar4 + 8;
  } while ((ulonglong)(param_1 + -0x10 + (longlong)pfVar4) < uVar1);
  return;
}



// FUNCTION 143141ce0 InterleaveAndConvertToInt16 body=468 status=ok
// SIG undefined InterleaveAndConvertToInt16(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CAkMixer::InterleaveAndConvertToInt16
               (longlong param_1,undefined2 *param_2,uint param_3,ulonglong param_4,
               undefined8 param_5)

{
  longlong lVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  undefined8 auStack_40 [5];
  
  param_4 = param_4 & 0xff;
  uVar5 = (ulonglong)param_3;
  uVar3 = param_4 * 8 + 0xf;
  if (uVar3 <= param_4 * 8) {
    uVar3 = 0xffffffffffffff0;
  }
  auStack_40[0] = 0x143141d2f;
  lVar1 = -(uVar3 & 0xfffffffffffffff0);
  *(undefined8 *)((longlong)auStack_40 + lVar1) = 0x143141d44;
  PipelineToStandardOffsets(uVar5);
  uVar3 = 0;
  param_5._4_4_ = param_5._4_4_ - (float)param_5;
  if (param_3 != 0) {
    do {
      uVar4 = 0;
      if (3 < param_4) {
        puVar2 = (uint *)(&stack0xfffffffffffffff0 + lVar1);
        lVar6 = (param_4 - 4 >> 2) + 1;
        uVar4 = lVar6 * 4;
        do {
          fVar7 = (float)param_5 * *(float *)(param_1 + (puVar2[-2] + uVar3) * 4) * 32767.0;
          if (32767.0 <= fVar7) {
            fVar7 = 32767.0;
          }
          if (fVar7 <= -32768.0) {
            fVar7 = -32768.0;
          }
          *param_2 = (short)(int)fVar7;
          fVar7 = (float)param_5 * *(float *)(param_1 + (puVar2[-1] + uVar3) * 4) * 32767.0;
          if (32767.0 <= fVar7) {
            fVar7 = 32767.0;
          }
          if (fVar7 <= -32768.0) {
            fVar7 = -32768.0;
          }
          param_2[1] = (short)(int)fVar7;
          fVar7 = (float)param_5 * *(float *)(param_1 + (*puVar2 + uVar3) * 4) * 32767.0;
          if (32767.0 <= fVar7) {
            fVar7 = 32767.0;
          }
          if (fVar7 <= -32768.0) {
            fVar7 = -32768.0;
          }
          param_2[2] = (short)(int)fVar7;
          fVar7 = (float)param_5 * *(float *)(param_1 + (puVar2[1] + uVar3) * 4) * 32767.0;
          if (32767.0 <= fVar7) {
            fVar7 = 32767.0;
          }
          if (fVar7 <= -32768.0) {
            fVar7 = -32768.0;
          }
          puVar2 = puVar2 + 4;
          param_2[3] = (short)(int)fVar7;
          param_2 = param_2 + 4;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      for (; uVar4 < param_4; uVar4 = uVar4 + 1) {
        fVar7 = (float)param_5 *
                *(float *)(param_1 +
                          (*(uint *)(&stack0xffffffffffffffe8 + uVar4 * 4 + lVar1) + uVar3) * 4) *
                32767.0;
        if (32767.0 <= fVar7) {
          fVar7 = 32767.0;
        }
        if (fVar7 <= -32768.0) {
          fVar7 = -32768.0;
        }
        *param_2 = (short)(int)fVar7;
        param_2 = param_2 + 1;
      }
      uVar3 = uVar3 + 1;
      param_5._0_4_ = (float)param_5 + param_5._4_4_ / (float)uVar5;
    } while (uVar3 < uVar5);
  }
  return;
}



// FUNCTION 143141ec0 InterleaveFloat body=342 status=ok
// SIG undefined InterleaveFloat(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CAkMixer::InterleaveFloat
               (longlong param_1,float *param_2,uint param_3,ulonglong param_4,undefined8 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 auStack_40 [5];
  
  uVar4 = param_4 & 0xff;
  uVar7 = (ulonglong)param_3;
  uVar2 = uVar4 * 8 + 0xf;
  if (uVar2 <= uVar4 * 8) {
    uVar2 = 0xffffffffffffff0;
  }
  auStack_40[0] = 0x143141f0f;
  lVar1 = -(uVar2 & 0xfffffffffffffff0);
  *(undefined8 *)((longlong)auStack_40 + lVar1) = 0x143141f25;
  PipelineToStandardOffsets(uVar7,param_4 & 0xffffffff,&stack0xffffffffffffffe8 + lVar1);
  uVar2 = 0;
  param_5._4_4_ = param_5._4_4_ - (float)param_5;
  if (param_3 != 0) {
    do {
      uVar3 = 0;
      if (3 < uVar4) {
        lVar6 = (uVar4 - 4 >> 2) + 1;
        uVar3 = lVar6 * 4;
        puVar5 = (uint *)(&stack0xfffffffffffffff0 + lVar1);
        do {
          *param_2 = (float)param_5 * *(float *)(param_1 + (puVar5[-2] + uVar2) * 4);
          param_2[1] = (float)param_5 * *(float *)(param_1 + (puVar5[-1] + uVar2) * 4);
          param_2[2] = (float)param_5 * *(float *)(param_1 + (*puVar5 + uVar2) * 4);
          param_2[3] = (float)param_5 * *(float *)(param_1 + (puVar5[1] + uVar2) * 4);
          param_2 = param_2 + 4;
          lVar6 = lVar6 + -1;
          puVar5 = puVar5 + 4;
        } while (lVar6 != 0);
      }
      for (; uVar3 < uVar4; uVar3 = uVar3 + 1) {
        *param_2 = (float)param_5 *
                   *(float *)(param_1 +
                             (*(uint *)(&stack0xffffffffffffffe8 + lVar1 + uVar3 * 4) + uVar2) * 4);
        param_2 = param_2 + 1;
      }
      uVar2 = uVar2 + 1;
      param_5._0_4_ = (float)param_5 + param_5._4_4_ / (float)uVar7;
    } while (uVar2 < uVar7);
  }
  return;
}



// FUNCTION 143142020 InterleaveFloatXY body=372 status=ok
// SIG undefined InterleaveFloatXY(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CAkMixer::InterleaveFloatXY
               (longlong param_1,float *param_2,uint param_3,ulonglong param_4,byte param_5,
               undefined8 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  float *pfVar8;
  ulonglong uVar9;
  undefined8 auStack_40 [5];
  
  uVar9 = param_4 & 0xff;
  uVar6 = (ulonglong)param_3;
  uVar2 = uVar9 * 8 + 0xf;
  if (uVar2 <= uVar9 * 8) {
    uVar2 = 0xffffffffffffff0;
  }
  auStack_40[0] = 0x14314206f;
  lVar1 = -(uVar2 & 0xfffffffffffffff0);
  *(undefined8 *)((longlong)auStack_40 + lVar1) = 0x143142084;
  PipelineToStandardOffsets(uVar6,param_4 & 0xffffffff);
  uVar2 = 0;
  param_6._4_4_ = param_6._4_4_ - (float)param_6;
  if (param_3 != 0) {
    do {
      uVar3 = 0;
      if (3 < uVar9) {
        lVar7 = (uVar9 - 4 >> 2) + 1;
        uVar3 = lVar7 * 4;
        puVar5 = (uint *)(&stack0xfffffffffffffff0 + lVar1);
        do {
          *param_2 = (float)param_6 * *(float *)(param_1 + (puVar5[-2] + uVar2) * 4);
          param_2[1] = (float)param_6 * *(float *)(param_1 + (puVar5[-1] + uVar2) * 4);
          param_2[2] = (float)param_6 * *(float *)(param_1 + (*puVar5 + uVar2) * 4);
          param_2[3] = (float)param_6 * *(float *)(param_1 + (puVar5[1] + uVar2) * 4);
          param_2 = param_2 + 4;
          lVar7 = lVar7 + -1;
          puVar5 = puVar5 + 4;
        } while (lVar7 != 0);
      }
      for (; uVar3 < uVar9; uVar3 = uVar3 + 1) {
        *param_2 = (float)param_6 *
                   *(float *)(param_1 +
                             (*(uint *)(&stack0xffffffffffffffe8 + uVar3 * 4 + lVar1) + uVar2) * 4);
        param_2 = param_2 + 1;
      }
      if (uVar3 < param_5) {
        uVar3 = param_5 - uVar3;
        pfVar8 = param_2;
        for (uVar4 = uVar3 & 0x3fffffffffffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pfVar8 = 0.0;
          pfVar8 = pfVar8 + 1;
        }
        param_2 = param_2 + uVar3;
      }
      uVar2 = uVar2 + 1;
      param_6._0_4_ = (float)param_6 + param_6._4_4_ / (float)uVar6;
    } while (uVar2 < uVar6);
  }
  return;
}



// FUNCTION 1431421a0 FUN_1431421a0 body=558 status=ok
// SIG undefined FUN_1431421a0(void)

void FUN_1431421a0(undefined2 *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  float fVar4;
  float local_48;
  float fStack_44;
  
  uVar1 = *(uint *)(param_2 + 1);
  uVar2 = uVar1 >> 0xc;
  fStack_44 = (float)((ulonglong)param_4 >> 0x20);
  local_48 = (float)param_4;
  if (uVar2 == 3) {
    uVar2 = *(uint *)(param_3 + 1) >> 0xc;
    if (uVar2 == 0x63f) {
      fVar4 = (fStack_44 - local_48) * *(float *)(param_1 + 2);
      CAkMixer::VolumeInterleaved71FromStereo(param_1,fVar4,*param_3,CONCAT44(fVar4,local_48));
      return;
    }
    if (uVar2 == 0x60f) {
      fVar4 = (fStack_44 - local_48) * *(float *)(param_1 + 2);
      CAkMixer::VolumeInterleaved51FromStereo(param_1,fVar4,*param_3,CONCAT44(fVar4,local_48));
      return;
    }
    if (uVar2 == 3) {
      fVar4 = (fStack_44 - local_48) * *(float *)(param_1 + 2);
      CAkMixer::VolumeInterleavedStereo(param_1,fVar4,*param_3,CONCAT44(fVar4,local_48));
      return;
    }
    CAkMixer::InterleaveFloatXY(*param_2,*param_3,*param_1,uVar1,*(uint *)(param_3 + 1),param_4);
    return;
  }
  if (uVar2 == 4) {
    uVar2 = 0;
    fVar4 = *(float *)(param_1 + 2);
    do {
      CAkMixer::ApplyGainSIMD
                (*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * (ulonglong)uVar2 * 4,
                 *param_3 + (ulonglong)*(ushort *)(param_3 + 2) * (ulonglong)uVar2 * 4,local_48,
                 (fStack_44 - local_48) * fVar4,*param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uVar1 & 0xff));
    return;
  }
  if (uVar2 != 0x60f) {
    if (uVar2 != 0x63f) {
      CAkMixer::InterleaveFloat(*param_2,*param_3,*param_1,(int)param_3[1],param_4);
      return;
    }
    fVar4 = (fStack_44 - local_48) * *(float *)(param_1 + 2);
    uVar3 = CONCAT44(fVar4,local_48);
    CAkMixer::VolumeInterleaved71(uVar3,fVar4,*param_3,uVar3);
    return;
  }
  fVar4 = (fStack_44 - local_48) * *(float *)(param_1 + 2);
  uVar3 = CONCAT44(fVar4,local_48);
  CAkMixer::VolumeInterleaved51(uVar3,fVar4,*param_3,uVar3);
  return;
}



// FUNCTION 1431423d0 MixBypassNinNChannels body=629 status=ok
// SIG void MixBypassNinNChannels(AkAudioBuffer * param_1, AkAudioBuffer * param_2, AkRamp * param_3, float * param_4, float * param_5, float param_6, ushort param_7, CAkSrcLpHpFilter * param_8)

/* public: static void __cdecl CAkMixer::MixBypassNinNChannels(class AkAudioBuffer * __ptr64,class
   AkAudioBuffer * __ptr64,struct AkRamp & __ptr64,float const * __ptr64,float const *
   __ptr64,float,unsigned short,class CAkSrcLpHpFilter * __ptr64) */

void __cdecl
CAkMixer::MixBypassNinNChannels
          (AkAudioBuffer *param_1,AkAudioBuffer *param_2,AkRamp *param_3,float *param_4,
          float *param_5,float param_6,ushort param_7,CAkSrcLpHpFilter *param_8)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  float *pfVar5;
  uint uVar6;
  longlong lVar7;
  float *pfVar8;
  uint uVar9;
  ulonglong uVar10;
  float fVar11;
  uint local_res10;
  longlong local_68;
  
                    /* 0x31423d0  268
                       ?MixBypassNinNChannels@CAkMixer@@SAXPEAVAkAudioBuffer@@0AEAUAkRamp@@PEBM2MGPEAVCAkSrcLpHpFilter@@@Z
                        */
  uVar2 = *(uint *)(param_2 + 8);
  uVar9 = *(uint *)(param_1 + 8);
  uVar3 = uVar9 - (uVar9 >> 0xf & 1) & 0xff;
  uVar6 = 0;
  local_res10 = 0;
  if (uVar3 != 0) {
    uVar9 = uVar2 - (uVar2 >> 0xf & 1) & 0xff;
    local_68 = 0;
    do {
      uVar10 = (ulonglong)uVar9;
      lVar7 = 0;
      CAkSrcLpHpFilter::BypassMono(param_8,param_1,local_res10);
      uVar1 = *(ushort *)(param_1 + 0x10);
      lVar4 = *(longlong *)param_1;
      if (uVar9 != 0) {
        pfVar8 = param_5 + ((uVar2 & 0xff) + 3 & 0xfffffffc) * local_res10;
        do {
          fVar11 = *(float *)(((longlong)param_4 - (longlong)param_5) + (longlong)pfVar8) *
                   *(float *)param_3;
          MixChannelSIMD((float *)(lVar4 + (ulonglong)uVar1 * local_68 * 4),
                         (float *)(*(longlong *)param_2 +
                                  (ulonglong)*(ushort *)(param_2 + 0x10) * lVar7 * 4),fVar11,
                         (*pfVar8 * *(float *)(param_3 + 4) - fVar11) * param_6,(uint)param_7);
          lVar7 = lVar7 + 1;
          pfVar8 = pfVar8 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      uVar6 = local_res10 + 1;
      local_68 = local_68 + 1;
      local_res10 = uVar6;
    } while (uVar6 < uVar3);
    uVar9 = *(uint *)(param_1 + 8);
  }
  pfVar8 = (float *)0x0;
  if (((uVar9 & 0x8000) == 0) || ((*(uint *)(param_2 + 8) & 0x8000) == 0)) {
    *(ushort *)(param_2 + 0x12) = param_7;
  }
  else {
    CAkSrcLpHpFilter::BypassMono(param_8,param_1,uVar6);
    uVar10 = (ulonglong)((*(uint *)(param_2 + 8) & 0xff) - 1);
    lVar4 = ((uVar2 & 0xff) + 3 & 0xfffffffc) * uVar6 + uVar10;
    pfVar5 = pfVar8;
    if ((*(uint *)(param_2 + 8) >> 0xf & 1) != 0) {
      pfVar5 = (float *)(*(longlong *)param_2 + *(ushort *)(param_2 + 0x10) * uVar10 * 4);
    }
    if ((*(uint *)(param_1 + 8) >> 0xf & 1) != 0) {
      pfVar8 = (float *)(*(longlong *)param_1 +
                        (ulonglong)((*(uint *)(param_1 + 8) & 0xff) - 1) *
                        (ulonglong)*(ushort *)(param_1 + 0x10) * 4);
    }
    MixChannelSIMD(pfVar8,pfVar5,param_4[lVar4] * *(float *)param_3,
                   (param_5[lVar4] * *(float *)(param_3 + 4) - param_4[lVar4] * *(float *)param_3) *
                   param_6,(uint)param_7);
    *(ushort *)(param_2 + 0x12) = param_7;
  }
  return;
}



// FUNCTION 143142650 MixFilterNinNChannels body=813 status=ok
// SIG void MixFilterNinNChannels(AkAudioBuffer * param_1, AkAudioBuffer * param_2, AkRamp * param_3, float * param_4, float * param_5, float param_6, ushort param_7, CAkSrcLpHpFilter * param_8)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* public: static void __cdecl CAkMixer::MixFilterNinNChannels(class AkAudioBuffer * __ptr64,class
   AkAudioBuffer * __ptr64,struct AkRamp & __ptr64,float const * __ptr64,float const *
   __ptr64,float,unsigned short,class CAkSrcLpHpFilter * __ptr64) */

void __cdecl
CAkMixer::MixFilterNinNChannels
          (AkAudioBuffer *param_1,AkAudioBuffer *param_2,AkRamp *param_3,float *param_4,
          float *param_5,float param_6,ushort param_7,CAkSrcLpHpFilter *param_8)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  CAkSrcLpHpFilter CVar7;
  ushort uVar8;
  uint uVar9;
  byte bVar10;
  float *pfVar11;
  float fVar12;
  ulonglong uVar13;
  float *pfVar14;
  longlong lVar15;
  float fVar16;
  undefined8 auStack_d0 [5];
  uint auStack_a8 [4];
  float local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  float local_88;
  float *local_80;
  float *local_78;
  uint local_70;
  undefined4 local_6c;
  ushort local_68;
  ushort local_66;
  
                    /* 0x3142650  270
                       ?MixFilterNinNChannels@CAkMixer@@SAXPEAVAkAudioBuffer@@0AEAUAkRamp@@PEBM2MGPEAVCAkSrcLpHpFilter@@@Z
                        */
  local_6c = 0x2b;
  uVar13 = (ulonglong)param_7 * 4 + 0xf;
  if (uVar13 <= (ulonglong)param_7 * 4) {
    uVar13 = 0xffffffffffffff0;
  }
  auStack_d0[0] = 0x1431426b6;
  lVar6 = -(uVar13 & 0xfffffffffffffff0);
  uVar9 = 4;
  bVar10 = 0;
  local_78 = (float *)((longlong)&local_98 + lVar6);
  do {
    bVar10 = bVar10 + 1;
    uVar9 = uVar9 & uVar9 - 1;
  } while (uVar9 != 0);
  uVar8 = 0;
  uVar9 = *(uint *)(param_1 + 8);
  local_70 = bVar10 | 0x4100;
  uVar4 = *(uint *)(param_2 + 8);
  local_68 = param_7;
  local_66 = param_7;
  local_98 = 0.0;
  local_94 = uVar4 & 0xff;
  local_88 = (float)(uVar9 - (uVar9 >> 0xf & 1) & 0xff);
  if (local_88 != 0.0) {
    local_8c = uVar4 - (uVar4 >> 0xf & 1) & 0xff;
    uVar13 = (ulonglong)local_8c;
    do {
      fVar12 = local_98;
      *(undefined8 *)((longlong)auStack_d0 + lVar6) = 0x143142762;
      uVar8 = CAkSrcLpHpFilter::ExecuteMono(param_8,param_1,&local_78,fVar12);
      pfVar14 = local_78;
      local_80 = local_78;
      if ((int)uVar13 != 0) {
        lVar15 = 0;
        local_90 = (uint)param_7;
        pfVar11 = param_5 + (local_94 + 3 & 0xfffffffc) * (int)fVar12;
        do {
          uVar3 = *(ushort *)(param_2 + 0x10);
          fVar12 = *(float *)(param_3 + 4);
          fVar1 = *pfVar11;
          fVar16 = *(float *)(((longlong)param_4 - (longlong)param_5) + (longlong)pfVar11) *
                   *(float *)param_3;
          lVar5 = *(longlong *)param_2;
          *(uint *)((longlong)auStack_a8 + lVar6) = (uint)param_7;
          *(undefined8 *)((longlong)auStack_d0 + lVar6) = 0x1431427ee;
          MixChannelSIMD(pfVar14,(float *)(lVar5 + (ulonglong)uVar3 * lVar15 * 4),fVar16,
                         (fVar12 * fVar1 - fVar16) * param_6,
                         *(ulong *)((longlong)auStack_a8 + lVar6));
          lVar15 = lVar15 + 1;
          pfVar11 = pfVar11 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
        uVar13 = (ulonglong)local_8c;
        fVar12 = local_98;
      }
      local_98 = (float)((int)fVar12 + 1);
    } while ((uint)local_98 < (uint)local_88);
    uVar9 = *(uint *)(param_1 + 8);
  }
  fVar12 = local_98;
  pfVar14 = (float *)0x0;
  if (((uVar9 & 0x8000) != 0) && ((*(uint *)(param_2 + 8) & 0x8000) != 0)) {
    *(undefined8 *)((longlong)auStack_d0 + lVar6) = 0x143142869;
    uVar8 = CAkSrcLpHpFilter::ExecuteMono(param_8,param_1,&local_78,fVar12);
    pfVar11 = local_78;
    uVar13 = (ulonglong)((*(uint *)(param_2 + 8) & 0xff) - 1);
    lVar15 = (local_94 + 3 & 0xfffffffc) * (int)fVar12 + uVar13;
    fVar12 = param_4[lVar15];
    fVar1 = *(float *)param_3;
    fVar16 = param_5[lVar15];
    fVar2 = *(float *)(param_3 + 4);
    if ((*(uint *)(param_2 + 8) >> 0xf & 1) != 0) {
      pfVar14 = (float *)(*(longlong *)param_2 + *(ushort *)(param_2 + 0x10) * uVar13 * 4);
    }
    *(uint *)((longlong)auStack_a8 + lVar6) = (uint)param_7;
    *(undefined8 *)((longlong)auStack_d0 + lVar6) = 0x1431428da;
    MixChannelSIMD(pfVar11,pfVar14,fVar12 * fVar1,(fVar16 * fVar2 - fVar12 * fVar1) * param_6,
                   *(ulong *)((longlong)auStack_a8 + lVar6));
  }
  *(ushort *)(param_2 + 0x12) = param_7;
  *(ushort *)(param_8 + 0x58) = uVar8;
  *(ushort *)(param_8 + 0x68) = uVar8;
  if ((param_8[0x5d] == (CAkSrcLpHpFilter)0x0) && (DAT_1467bdcbc <= uVar8)) {
    *(float *)(param_8 + 0x50) = *(float *)(param_8 + 0x54);
    if ((char)param_8[0x5a] < '\x01') {
      if (*(float *)(param_8 + 0x54) <= 0.1) {
        param_8[0x5a] = (CAkSrcLpHpFilter)0x4;
      }
    }
    else {
      CVar7 = (CAkSrcLpHpFilter)((char)param_8[0x5a] + -1);
      param_8[0x5a] = CVar7;
      if (CVar7 == (CAkSrcLpHpFilter)0x0) {
        *(undefined2 *)(param_8 + 0x5d) = 1;
      }
    }
  }
  if ((param_8[0x6d] == (CAkSrcLpHpFilter)0x0) && (DAT_1467bdcbc <= uVar8)) {
    *(float *)(param_8 + 0x60) = *(float *)(param_8 + 100);
    if ((char)param_8[0x6a] < '\x01') {
      if (*(float *)(param_8 + 100) <= 0.1) {
        param_8[0x6a] = (CAkSrcLpHpFilter)0x4;
      }
    }
    else {
      CVar7 = (CAkSrcLpHpFilter)((char)param_8[0x6a] + -1);
      param_8[0x6a] = CVar7;
      if (CVar7 == (CAkSrcLpHpFilter)0x0) {
        *(undefined2 *)(param_8 + 0x6d) = 1;
      }
    }
  }
  return;
}



// FUNCTION 143142980 MixNinNChannels body=585 status=ok
// SIG void MixNinNChannels(AkAudioBuffer * param_1, AkAudioBuffer * param_2, AkRamp * param_3, float * param_4, float * param_5, float param_6, ushort param_7)

/* public: static void __cdecl CAkMixer::MixNinNChannels(class AkAudioBuffer * __ptr64,class
   AkAudioBuffer * __ptr64,struct AkRamp & __ptr64,float const * __ptr64,float const *
   __ptr64,float,unsigned short) */

void __cdecl
CAkMixer::MixNinNChannels
          (AkAudioBuffer *param_1,AkAudioBuffer *param_2,AkRamp *param_3,float *param_4,
          float *param_5,float param_6,ushort param_7)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  float *pfVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  uint local_res10;
  longlong local_58;
  
                    /* 0x3142980  271
                       ?MixNinNChannels@CAkMixer@@SAXPEAVAkAudioBuffer@@0AEAUAkRamp@@PEBM2MG@Z */
  uVar2 = *(uint *)(param_2 + 8);
  uVar6 = 0;
  uVar8 = *(uint *)(param_1 + 8);
  local_res10 = 0;
  uVar3 = uVar8 - (uVar8 >> 0xf & 1) & 0xff;
  if (uVar3 != 0) {
    uVar8 = uVar2 - (uVar2 >> 0xf & 1) & 0xff;
    local_58 = 0;
    do {
      uVar1 = *(ushort *)(param_1 + 0x10);
      lVar4 = *(longlong *)param_1;
      if (uVar8 != 0) {
        lVar7 = 0;
        uVar9 = (ulonglong)uVar8;
        pfVar5 = param_5 + ((uVar2 & 0xff) + 3 & 0xfffffffc) * local_res10;
        do {
          fVar10 = *(float *)(((longlong)param_4 - (longlong)param_5) + (longlong)pfVar5) *
                   *(float *)param_3;
          MixChannelSIMD((float *)(lVar4 + (ulonglong)uVar1 * local_58 * 4),
                         (float *)(*(longlong *)param_2 +
                                  (ulonglong)*(ushort *)(param_2 + 0x10) * lVar7 * 4),fVar10,
                         (*pfVar5 * *(float *)(param_3 + 4) - fVar10) * param_6,(uint)param_7);
          lVar7 = lVar7 + 1;
          pfVar5 = pfVar5 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      uVar6 = local_res10 + 1;
      local_58 = local_58 + 1;
      local_res10 = uVar6;
    } while (uVar6 < uVar3);
    uVar8 = *(uint *)(param_1 + 8);
  }
  if (((uVar8 & 0x8000) != 0) && ((*(uint *)(param_2 + 8) & 0x8000) != 0)) {
    uVar9 = (ulonglong)((*(uint *)(param_2 + 8) & 0xff) - 1);
    lVar4 = ((uVar2 & 0xff) + 3 & 0xfffffffc) * uVar6 + uVar9;
    MixChannelSIMD((float *)(*(longlong *)param_1 +
                            (ulonglong)((uVar8 & 0xff) - 1) * (ulonglong)*(ushort *)(param_1 + 0x10)
                            * 4),
                   (float *)(*(longlong *)param_2 + *(ushort *)(param_2 + 0x10) * uVar9 * 4),
                   param_4[lVar4] * *(float *)param_3,
                   (param_5[lVar4] * *(float *)(param_3 + 4) - param_4[lVar4] * *(float *)param_3) *
                   param_6,(uint)param_7);
    *(ushort *)(param_2 + 0x12) = param_7;
    return;
  }
  *(ushort *)(param_2 + 0x12) = param_7;
  return;
}



// FUNCTION 143142bd0 MixOneInNChannels body=224 status=ok
// SIG void MixOneInNChannels(float * param_1, AkAudioBuffer * param_2, AkChannelConfig param_3, AkRamp * param_4, float * param_5, float * param_6, float param_7, ushort param_8)

/* public: static void __cdecl CAkMixer::MixOneInNChannels(float * __ptr64 __restrict,class
   AkAudioBuffer * __ptr64,struct AkChannelConfig,struct AkRamp & __ptr64,float const *
   __ptr64,float const * __ptr64,float,unsigned short) */

void __cdecl
CAkMixer::MixOneInNChannels
          (float *param_1,longlong *param_2,byte param_3,float *param_4,longlong param_5,
          float *param_6,float param_7,ushort param_8)

{
  longlong lVar1;
  ulonglong uVar2;
  float fVar3;
  
                    /* 0x3142bd0  272
                       ?MixOneInNChannels@CAkMixer@@SAXPEIAMPEAVAkAudioBuffer@@UAkChannelConfig@@AEAUAkRamp@@PEBM4MG@Z
                        */
  if (param_3 != 0) {
    lVar1 = 0;
    param_5 = param_5 - (longlong)param_6;
    uVar2 = (ulonglong)param_3;
    do {
      fVar3 = *(float *)(param_5 + (longlong)param_6) * *param_4;
      MixChannelSIMD(param_1,(float *)(*param_2 + (ulonglong)*(ushort *)(param_2 + 2) * lVar1 * 4),
                     fVar3,(param_4[1] * *param_6 - fVar3) * param_7,(uint)param_8);
      lVar1 = lVar1 + 1;
      param_6 = param_6 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 143142cb0 PipelineToStandardOffsets body=598 status=ok
// SIG undefined PipelineToStandardOffsets(void)

void PipelineToStandardOffsets(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  auVar17._4_4_ = param_1;
  auVar17._0_4_ = param_1;
  auVar17._8_4_ = param_1;
  auVar17._12_4_ = param_1;
  if ((param_2 >> 0xc & 8) == 0) {
    uVar6 = param_2 & 0xff;
    if ((char)param_2 != '\0') {
      uVar2 = 0;
      if ((0xf < uVar6) && (uVar2 = 0, 1 < DAT_1468387b0)) {
        uVar5 = 8;
        uVar1 = 0;
        do {
          uVar2 = uVar1 + 0x10;
          auVar10._4_4_ = uVar1 + 1;
          auVar10._0_4_ = uVar1;
          auVar10._8_4_ = uVar1 + 2;
          auVar10._12_4_ = uVar1 + 3;
          auVar10 = pmulld(auVar10,auVar17);
          *(undefined1 (*) [16])(param_3 + uVar1) = auVar10;
          auVar15._4_4_ = uVar5 - 3;
          auVar15._0_4_ = uVar5 - 4;
          auVar15._8_4_ = uVar5 - 2;
          auVar15._12_4_ = uVar5 - 1;
          auVar10 = pmulld(auVar15,auVar17);
          *(undefined1 (*) [16])(param_3 + (uVar5 - 4)) = auVar10;
          auVar12._4_4_ = uVar5 + 1;
          auVar12._0_4_ = uVar5;
          auVar12._8_4_ = uVar5 + 2;
          auVar12._12_4_ = uVar5 + 3;
          auVar10 = pmulld(auVar12,auVar17);
          *(undefined1 (*) [16])(param_3 + uVar5) = auVar10;
          auVar16._4_4_ = uVar5 + 5;
          auVar16._0_4_ = uVar5 + 4;
          auVar16._8_4_ = uVar5 + 6;
          auVar16._12_4_ = uVar5 + 7;
          auVar10 = pmulld(auVar16,auVar17);
          *(undefined1 (*) [16])(param_3 + (uVar5 + 4)) = auVar10;
          uVar5 = uVar5 + 0x10;
          uVar1 = uVar2;
        } while (uVar2 < (param_2 & 0xf0));
      }
      if (uVar2 < uVar6) {
        iVar4 = uVar2 * param_1;
        uVar3 = (ulonglong)(uVar6 - uVar2);
        param_3 = param_3 + uVar2;
        do {
          *param_3 = iVar4;
          param_3 = param_3 + 1;
          iVar4 = iVar4 + param_1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
  }
  else {
    uVar6 = param_2 >> 0xc & 4;
    iVar4 = 0;
    lVar8 = (ulonglong)(uVar6 != 0) + 2;
    piVar7 = param_3;
    do {
      *piVar7 = iVar4;
      piVar7 = piVar7 + 1;
      iVar4 = iVar4 + param_1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    param_2 = param_2 & 0xff;
    lVar8 = 8;
    if (uVar6 != 0) {
      lVar8 = 0xc;
    }
    uVar2 = (uint)(uVar6 != 0);
    uVar6 = uVar2 + 3;
    uVar3 = (ulonglong)uVar6;
    *(uint *)(lVar8 + (longlong)param_3) = (param_2 - 1) * param_1;
    if (uVar6 < param_2) {
      if ((0xf < param_2 - uVar6) && (1 < DAT_1468387b0)) {
        uVar2 = uVar2 + 0xb;
        do {
          iVar4 = (int)uVar3;
          auVar9._0_4_ = iVar4 + -1;
          auVar9._4_4_ = iVar4;
          auVar9._8_4_ = iVar4 + 1;
          auVar9._12_4_ = iVar4 + 2;
          auVar10 = pmulld(auVar9,auVar17);
          *(undefined1 (*) [16])(param_3 + uVar3) = auVar10;
          uVar3 = (ulonglong)(iVar4 + 0x10U);
          auVar13._0_4_ = uVar2 - 5;
          auVar13._4_4_ = uVar2 - 4;
          auVar13._8_4_ = uVar2 - 3;
          auVar13._12_4_ = uVar2 - 2;
          auVar10 = pmulld(auVar13,auVar17);
          *(undefined1 (*) [16])(param_3 + (uVar2 - 4)) = auVar10;
          auVar11._0_4_ = uVar2 - 1;
          auVar11._4_4_ = uVar2;
          auVar11._8_4_ = uVar2 + 1;
          auVar11._12_4_ = uVar2 + 2;
          auVar10 = pmulld(auVar11,auVar17);
          *(undefined1 (*) [16])(param_3 + uVar2) = auVar10;
          auVar14._0_4_ = uVar2 + 3;
          auVar14._4_4_ = uVar2 + 4;
          auVar14._8_4_ = uVar2 + 5;
          auVar14._12_4_ = uVar2 + 6;
          auVar10 = pmulld(auVar14,auVar17);
          *(undefined1 (*) [16])(param_3 + (uVar2 + 4)) = auVar10;
          uVar2 = uVar2 + 0x10;
        } while (iVar4 + 0x10U < param_2 - (param_2 - uVar6 & 0xf));
      }
      uVar6 = (uint)uVar3;
      if (uVar6 < param_2) {
        iVar4 = (uVar6 - 1) * param_1;
        param_3 = param_3 + uVar3;
        uVar3 = (ulonglong)(param_2 - uVar6);
        do {
          *param_3 = iVar4;
          param_3 = param_3 + 1;
          iVar4 = iVar4 + param_1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143142f10 MixChannelSIMD body=298 status=ok
// SIG void MixChannelSIMD(float * param_1, float * param_2, float param_3, float param_4, ulong param_5)

/* public: static void __cdecl CAkMixer::MixChannelSIMD(float * __ptr64,float *
   __ptr64,float,float,unsigned long) */

void __cdecl
CAkMixer::MixChannelSIMD(float *param_1,float *param_2,float param_3,float param_4,ulong param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
                    /* 0x3142f10  269  ?MixChannelSIMD@CAkMixer@@SAXPEAM0MMK@Z */
  if (param_4 == 0.0) {
    if (param_3 != 0.0) {
      pfVar3 = param_2 + 4;
      lVar4 = (longlong)param_1 - (longlong)param_2;
      do {
        pfVar2 = (float *)(lVar4 + -0x10 + (longlong)pfVar3);
        fVar5 = pfVar2[1];
        fVar6 = pfVar2[2];
        fVar7 = pfVar2[3];
        pfVar1 = (float *)((longlong)pfVar3 + lVar4);
        fVar16 = *pfVar1;
        fVar17 = pfVar1[1];
        fVar18 = pfVar1[2];
        fVar19 = pfVar1[3];
        pfVar3[-4] = *pfVar2 * param_3 + pfVar3[-4];
        pfVar3[-3] = fVar5 * param_3 + pfVar3[-3];
        pfVar3[-2] = fVar6 * param_3 + pfVar3[-2];
        pfVar3[-1] = fVar7 * param_3 + pfVar3[-1];
        *pfVar3 = fVar16 * param_3 + *pfVar3;
        pfVar3[1] = fVar17 * param_3 + pfVar3[1];
        pfVar3[2] = fVar18 * param_3 + pfVar3[2];
        pfVar3[3] = fVar19 * param_3 + pfVar3[3];
        pfVar3 = pfVar3 + 8;
      } while ((float *)(lVar4 + -0x10 + (longlong)pfVar3) < param_1 + param_5);
      return;
    }
  }
  else {
    pfVar3 = param_2 + 4;
    fVar5 = param_4 * 4.0;
    lVar4 = (longlong)param_1 - (longlong)param_2;
    fVar6 = param_3 + param_4;
    fVar7 = param_4 + param_4 + param_3;
    fVar16 = param_4 * 3.0 + param_3;
    fVar17 = param_3 + fVar5;
    fVar18 = fVar6 + fVar5;
    fVar19 = fVar7 + fVar5;
    fVar20 = fVar16 + fVar5;
    do {
      pfVar2 = (float *)((longlong)pfVar3 + lVar4 + -0x10);
      pfVar1 = (float *)((longlong)pfVar3 + lVar4);
      fVar8 = *pfVar2 * param_3;
      fVar9 = pfVar2[1] * fVar6;
      fVar10 = pfVar2[2] * fVar7;
      fVar11 = pfVar2[3] * fVar16;
      param_3 = param_3 + fVar5 + fVar5;
      fVar6 = fVar6 + fVar5 + fVar5;
      fVar7 = fVar7 + fVar5 + fVar5;
      fVar16 = fVar16 + fVar5 + fVar5;
      fVar12 = *pfVar1 * fVar17;
      fVar13 = pfVar1[1] * fVar18;
      fVar14 = pfVar1[2] * fVar19;
      fVar15 = pfVar1[3] * fVar20;
      fVar17 = fVar17 + fVar5 + fVar5;
      fVar18 = fVar18 + fVar5 + fVar5;
      fVar19 = fVar19 + fVar5 + fVar5;
      fVar20 = fVar20 + fVar5 + fVar5;
      pfVar3[-4] = fVar8 + pfVar3[-4];
      pfVar3[-3] = fVar9 + pfVar3[-3];
      pfVar3[-2] = fVar10 + pfVar3[-2];
      pfVar3[-1] = fVar11 + pfVar3[-1];
      *pfVar3 = fVar12 + *pfVar3;
      pfVar3[1] = fVar13 + pfVar3[1];
      pfVar3[2] = fVar14 + pfVar3[2];
      pfVar3[3] = fVar15 + pfVar3[3];
      pfVar3 = pfVar3 + 8;
    } while ((float *)(lVar4 + -0x10 + (longlong)pfVar3) < param_1 + param_5);
  }
  return;
}



// FUNCTION 143143040 VolumeInterleaved51 body=493 status=ok
// SIG undefined VolumeInterleaved51(void)

void CAkMixer::VolumeInterleaved51
               (ushort *param_1,longlong *param_2,float *param_3,undefined8 param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  uint uVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  ulonglong uVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float local_res8;
  float fStackX_c;
  
  uVar23 = (ulonglong)*(ushort *)(param_2 + 2);
  fStackX_c = (float)((ulonglong)param_4 >> 0x20);
  local_res8 = (float)param_4;
  pfVar25 = (float *)*param_2;
  fVar27 = fStackX_c + local_res8;
  pfVar20 = pfVar25 + uVar23;
  fVar30 = fStackX_c * 4.0;
  fVar28 = fStackX_c * 2.0 + local_res8;
  pfVar26 = pfVar25 + uVar23 * 2;
  fVar29 = fStackX_c * 3.0 + local_res8;
  pfVar21 = pfVar25 + uVar23 * 5;
  pfVar22 = pfVar25 + uVar23 * 3;
  pfVar24 = pfVar25 + uVar23 * 4;
  uVar19 = (uint)(*param_1 >> 2);
  if (*param_1 >> 2 != 0) {
    do {
      fVar51 = *pfVar25;
      pfVar1 = pfVar25 + 1;
      pfVar2 = pfVar25 + 2;
      pfVar3 = pfVar25 + 3;
      pfVar25 = pfVar25 + 4;
      fVar43 = *pfVar22;
      pfVar4 = pfVar22 + 1;
      pfVar5 = pfVar22 + 2;
      pfVar6 = pfVar22 + 3;
      pfVar22 = pfVar22 + 4;
      fVar39 = *pfVar20;
      pfVar7 = pfVar20 + 1;
      pfVar8 = pfVar20 + 2;
      pfVar9 = pfVar20 + 3;
      pfVar20 = pfVar20 + 4;
      fVar47 = *pfVar26;
      pfVar10 = pfVar26 + 1;
      pfVar11 = pfVar26 + 2;
      pfVar12 = pfVar26 + 3;
      pfVar26 = pfVar26 + 4;
      fVar31 = *pfVar24;
      pfVar13 = pfVar24 + 1;
      pfVar14 = pfVar24 + 2;
      pfVar15 = pfVar24 + 3;
      pfVar24 = pfVar24 + 4;
      fVar35 = *pfVar21;
      pfVar16 = pfVar21 + 1;
      pfVar17 = pfVar21 + 2;
      pfVar18 = pfVar21 + 3;
      pfVar21 = pfVar21 + 4;
      fVar47 = fVar47 * local_res8;
      fVar48 = *pfVar10 * fVar27;
      fVar49 = *pfVar11 * fVar28;
      fVar50 = *pfVar12 * fVar29;
      fVar51 = fVar51 * local_res8;
      fVar52 = *pfVar1 * fVar27;
      fVar53 = *pfVar2 * fVar28;
      fVar54 = *pfVar3 * fVar29;
      fVar43 = fVar43 * local_res8;
      fVar44 = *pfVar4 * fVar27;
      fVar45 = *pfVar5 * fVar28;
      fVar46 = *pfVar6 * fVar29;
      fVar39 = fVar39 * local_res8;
      fVar40 = *pfVar7 * fVar27;
      fVar41 = *pfVar8 * fVar28;
      fVar42 = *pfVar9 * fVar29;
      fVar31 = fVar31 * local_res8;
      fVar32 = *pfVar13 * fVar27;
      fVar33 = *pfVar14 * fVar28;
      fVar34 = *pfVar15 * fVar29;
      fVar35 = fVar35 * local_res8;
      fVar36 = *pfVar16 * fVar27;
      fVar37 = *pfVar17 * fVar28;
      fVar38 = *pfVar18 * fVar29;
      local_res8 = local_res8 + fVar30;
      fVar27 = fVar27 + fVar30;
      fVar28 = fVar28 + fVar30;
      fVar29 = fVar29 + fVar30;
      *param_3 = fVar51;
      param_3[1] = fVar39;
      param_3[2] = fVar47;
      param_3[3] = fVar35;
      param_3[4] = fVar43;
      param_3[5] = fVar31;
      param_3[6] = fVar52;
      param_3[7] = fVar40;
      param_3[8] = fVar48;
      param_3[9] = fVar36;
      param_3[10] = fVar44;
      param_3[0xb] = fVar32;
      param_3[0xc] = fVar53;
      param_3[0xd] = fVar41;
      param_3[0xe] = fVar49;
      param_3[0xf] = fVar37;
      param_3[0x10] = fVar45;
      param_3[0x11] = fVar33;
      param_3[0x12] = fVar54;
      param_3[0x13] = fVar42;
      param_3[0x14] = fVar50;
      param_3[0x15] = fVar38;
      param_3[0x16] = fVar46;
      param_3[0x17] = fVar34;
      param_3 = param_3 + 0x18;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  return;
}



// FUNCTION 143143230 VolumeInterleaved51FromStereo body=260 status=ok
// SIG undefined VolumeInterleaved51FromStereo(void)

void CAkMixer::VolumeInterleaved51FromStereo
               (ushort *param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_res8;
  float fStackX_c;
  
  local_res8 = (float)param_4;
  fStackX_c = (float)((ulonglong)param_4 >> 0x20);
  pfVar9 = (float *)*param_2;
  pfVar8 = pfVar9 + *(ushort *)(param_2 + 2);
  fVar13 = fStackX_c * 4.0;
  fVar10 = fStackX_c + local_res8;
  uVar7 = (uint)(*param_1 >> 2);
  fVar11 = fStackX_c * 2.0 + local_res8;
  fVar12 = fStackX_c * 3.0 + local_res8;
  if (*param_1 >> 2 != 0) {
    do {
      fVar18 = *pfVar9;
      pfVar1 = pfVar9 + 1;
      pfVar2 = pfVar9 + 2;
      pfVar3 = pfVar9 + 3;
      fVar14 = *pfVar8;
      pfVar4 = pfVar8 + 1;
      pfVar5 = pfVar8 + 2;
      pfVar6 = pfVar8 + 3;
      pfVar9 = pfVar9 + 4;
      fVar18 = fVar18 * local_res8;
      fVar19 = *pfVar1 * fVar10;
      fVar20 = *pfVar2 * fVar11;
      fVar21 = *pfVar3 * fVar12;
      pfVar8 = pfVar8 + 4;
      fVar14 = fVar14 * local_res8;
      fVar15 = *pfVar4 * fVar10;
      fVar16 = *pfVar5 * fVar11;
      fVar17 = *pfVar6 * fVar12;
      local_res8 = local_res8 + fVar13;
      fVar10 = fVar10 + fVar13;
      fVar11 = fVar11 + fVar13;
      fVar12 = fVar12 + fVar13;
      *param_3 = CONCAT44(fVar14,fVar18);
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = CONCAT44(fVar15,fVar19);
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[6] = CONCAT44(fVar16,fVar20);
      param_3[7] = 0;
      param_3[8] = 0;
      param_3[9] = CONCAT44(fVar17,fVar21);
      param_3[10] = 0;
      param_3[0xb] = 0;
      param_3 = param_3 + 0xc;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 143143340 VolumeInterleaved71 body=629 status=ok
// SIG undefined VolumeInterleaved71(void)

void CAkMixer::VolumeInterleaved71
               (ushort *param_1,longlong *param_2,float *param_3,undefined8 param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  uint uVar25;
  ulonglong uVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  float *pfVar31;
  float *pfVar32;
  float *pfVar33;
  float *pfVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float local_res8;
  float fStackX_c;
  
  uVar26 = (ulonglong)*(ushort *)(param_2 + 2);
  pfVar33 = (float *)*param_2;
  fStackX_c = (float)((ulonglong)param_4 >> 0x20);
  local_res8 = (float)param_4;
  fVar35 = fStackX_c + local_res8;
  fVar38 = fStackX_c * 4.0;
  pfVar29 = pfVar33 + uVar26;
  pfVar32 = pfVar33 + uVar26 * 2;
  pfVar34 = pfVar33 + uVar26 * 7;
  pfVar28 = pfVar33 + (ulonglong)*(ushort *)(param_2 + 2) * 4;
  fVar36 = fStackX_c * 2.0 + local_res8;
  fVar37 = fStackX_c * 3.0 + local_res8;
  pfVar31 = pfVar33 + uVar26 * 3;
  pfVar30 = pfVar33 + uVar26 * 5;
  pfVar27 = pfVar33 + uVar26 * 6;
  uVar25 = (uint)(*param_1 >> 2);
  if (*param_1 >> 2 != 0) {
    do {
      fVar67 = *pfVar33;
      pfVar1 = pfVar33 + 1;
      pfVar2 = pfVar33 + 2;
      pfVar3 = pfVar33 + 3;
      pfVar33 = pfVar33 + 4;
      fVar59 = *pfVar31;
      pfVar4 = pfVar31 + 1;
      pfVar5 = pfVar31 + 2;
      pfVar6 = pfVar31 + 3;
      pfVar31 = pfVar31 + 4;
      fVar55 = *pfVar29;
      pfVar7 = pfVar29 + 1;
      pfVar8 = pfVar29 + 2;
      pfVar9 = pfVar29 + 3;
      pfVar29 = pfVar29 + 4;
      fVar63 = *pfVar32;
      pfVar10 = pfVar32 + 1;
      pfVar11 = pfVar32 + 2;
      pfVar12 = pfVar32 + 3;
      pfVar32 = pfVar32 + 4;
      fVar43 = *pfVar28;
      pfVar13 = pfVar28 + 1;
      pfVar14 = pfVar28 + 2;
      pfVar15 = pfVar28 + 3;
      pfVar28 = pfVar28 + 4;
      fVar51 = *pfVar30;
      pfVar16 = pfVar30 + 1;
      pfVar17 = pfVar30 + 2;
      pfVar18 = pfVar30 + 3;
      pfVar30 = pfVar30 + 4;
      fVar47 = *pfVar34;
      pfVar19 = pfVar34 + 1;
      pfVar20 = pfVar34 + 2;
      pfVar21 = pfVar34 + 3;
      pfVar34 = pfVar34 + 4;
      fVar39 = *pfVar27;
      pfVar22 = pfVar27 + 1;
      pfVar23 = pfVar27 + 2;
      pfVar24 = pfVar27 + 3;
      pfVar27 = pfVar27 + 4;
      fVar67 = fVar67 * local_res8;
      fVar68 = *pfVar1 * fVar35;
      fVar69 = *pfVar2 * fVar36;
      fVar70 = *pfVar3 * fVar37;
      fVar59 = fVar59 * local_res8;
      fVar60 = *pfVar4 * fVar35;
      fVar61 = *pfVar5 * fVar36;
      fVar62 = *pfVar6 * fVar37;
      fVar55 = fVar55 * local_res8;
      fVar56 = *pfVar7 * fVar35;
      fVar57 = *pfVar8 * fVar36;
      fVar58 = *pfVar9 * fVar37;
      fVar63 = fVar63 * local_res8;
      fVar64 = *pfVar10 * fVar35;
      fVar65 = *pfVar11 * fVar36;
      fVar66 = *pfVar12 * fVar37;
      fVar43 = fVar43 * local_res8;
      fVar44 = *pfVar13 * fVar35;
      fVar45 = *pfVar14 * fVar36;
      fVar46 = *pfVar15 * fVar37;
      fVar51 = fVar51 * local_res8;
      fVar52 = *pfVar16 * fVar35;
      fVar53 = *pfVar17 * fVar36;
      fVar54 = *pfVar18 * fVar37;
      fVar47 = fVar47 * local_res8;
      fVar48 = *pfVar19 * fVar35;
      fVar49 = *pfVar20 * fVar36;
      fVar50 = *pfVar21 * fVar37;
      fVar39 = fVar39 * local_res8;
      fVar40 = *pfVar22 * fVar35;
      fVar41 = *pfVar23 * fVar36;
      fVar42 = *pfVar24 * fVar37;
      local_res8 = local_res8 + fVar38;
      fVar35 = fVar35 + fVar38;
      fVar36 = fVar36 + fVar38;
      fVar37 = fVar37 + fVar38;
      *param_3 = fVar67;
      param_3[1] = fVar55;
      param_3[2] = fVar63;
      param_3[3] = fVar47;
      param_3[4] = fVar59;
      param_3[5] = fVar43;
      param_3[6] = fVar51;
      param_3[7] = fVar39;
      param_3[8] = fVar68;
      param_3[9] = fVar56;
      param_3[10] = fVar64;
      param_3[0xb] = fVar48;
      param_3[0xc] = fVar60;
      param_3[0xd] = fVar44;
      param_3[0xe] = fVar52;
      param_3[0xf] = fVar40;
      param_3[0x10] = fVar69;
      param_3[0x11] = fVar57;
      param_3[0x12] = fVar65;
      param_3[0x13] = fVar49;
      param_3[0x14] = fVar61;
      param_3[0x15] = fVar45;
      param_3[0x16] = fVar53;
      param_3[0x17] = fVar41;
      param_3[0x18] = fVar70;
      param_3[0x19] = fVar58;
      param_3[0x1a] = fVar66;
      param_3[0x1b] = fVar50;
      param_3[0x1c] = fVar62;
      param_3[0x1d] = fVar46;
      param_3[0x1e] = fVar54;
      param_3[0x1f] = fVar42;
      param_3 = param_3 + 0x20;
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
  }
  return;
}



// FUNCTION 1431435c0 VolumeInterleaved71FromStereo body=259 status=ok
// SIG undefined VolumeInterleaved71FromStereo(void)

void CAkMixer::VolumeInterleaved71FromStereo
               (ushort *param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_res8;
  float fStackX_c;
  
  local_res8 = (float)param_4;
  fStackX_c = (float)((ulonglong)param_4 >> 0x20);
  pfVar9 = (float *)*param_2;
  pfVar8 = pfVar9 + *(ushort *)(param_2 + 2);
  fVar17 = fStackX_c * 4.0;
  fVar10 = fStackX_c + local_res8;
  uVar7 = (uint)(*param_1 >> 2);
  fVar11 = fStackX_c * 2.0 + local_res8;
  fVar12 = fStackX_c * 3.0 + local_res8;
  if (*param_1 >> 2 != 0) {
    do {
      fVar18 = *pfVar9;
      pfVar1 = pfVar9 + 1;
      pfVar2 = pfVar9 + 2;
      pfVar3 = pfVar9 + 3;
      pfVar9 = pfVar9 + 4;
      fVar13 = *pfVar8;
      pfVar4 = pfVar8 + 1;
      pfVar5 = pfVar8 + 2;
      pfVar6 = pfVar8 + 3;
      pfVar8 = pfVar8 + 4;
      fVar18 = fVar18 * local_res8;
      fVar19 = *pfVar1 * fVar10;
      fVar20 = *pfVar2 * fVar11;
      fVar21 = *pfVar3 * fVar12;
      fVar13 = fVar13 * local_res8;
      fVar14 = *pfVar4 * fVar10;
      fVar15 = *pfVar5 * fVar11;
      fVar16 = *pfVar6 * fVar12;
      local_res8 = local_res8 + fVar17;
      fVar10 = fVar10 + fVar17;
      fVar11 = fVar11 + fVar17;
      fVar12 = fVar12 + fVar17;
      *param_3 = CONCAT44(fVar13,fVar18);
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[4] = CONCAT44(fVar14,fVar19);
      param_3[5] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
      param_3[8] = CONCAT44(fVar15,fVar20);
      param_3[9] = 0;
      param_3[10] = 0;
      param_3[0xb] = 0;
      param_3[0xc] = CONCAT44(fVar16,fVar21);
      param_3[0xd] = 0;
      param_3[0xe] = 0;
      param_3[0xf] = 0;
      param_3 = param_3 + 0x10;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 1431436d0 VolumeInterleavedStereo body=200 status=ok
// SIG undefined VolumeInterleavedStereo(void)

void CAkMixer::VolumeInterleavedStereo
               (ushort *param_1,longlong *param_2,float *param_3,undefined8 param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_res8;
  float fStackX_c;
  
  local_res8 = (float)param_4;
  fStackX_c = (float)((ulonglong)param_4 >> 0x20);
  pfVar9 = (float *)*param_2;
  pfVar8 = pfVar9 + *(ushort *)(param_2 + 2);
  fVar21 = fStackX_c * 4.0;
  fVar10 = fStackX_c + local_res8;
  uVar7 = (uint)(*param_1 >> 2);
  fVar11 = fStackX_c * 2.0 + local_res8;
  fVar16 = fStackX_c * 3.0 + local_res8;
  if (*param_1 >> 2 != 0) {
    do {
      fVar17 = *pfVar9;
      pfVar1 = pfVar9 + 1;
      pfVar2 = pfVar9 + 2;
      pfVar3 = pfVar9 + 3;
      pfVar9 = pfVar9 + 4;
      fVar12 = *pfVar8;
      pfVar4 = pfVar8 + 1;
      pfVar5 = pfVar8 + 2;
      pfVar6 = pfVar8 + 3;
      pfVar8 = pfVar8 + 4;
      fVar17 = fVar17 * local_res8;
      fVar18 = *pfVar1 * fVar10;
      fVar19 = *pfVar2 * fVar11;
      fVar20 = *pfVar3 * fVar16;
      fVar12 = fVar12 * local_res8;
      fVar13 = *pfVar4 * fVar10;
      fVar14 = *pfVar5 * fVar11;
      fVar15 = *pfVar6 * fVar16;
      local_res8 = local_res8 + fVar21;
      fVar10 = fVar10 + fVar21;
      fVar11 = fVar11 + fVar21;
      fVar16 = fVar16 + fVar21;
      *param_3 = fVar17;
      param_3[1] = fVar12;
      param_3[2] = fVar18;
      param_3[3] = fVar13;
      param_3[4] = fVar19;
      param_3[5] = fVar14;
      param_3[6] = fVar20;
      param_3[7] = fVar15;
      param_3 = param_3 + 8;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 1431437a0 FUN_1431437a0 body=198 status=ok
// SIG undefined FUN_1431437a0(void)

float FUN_1431437a0(longlong *param_1,ushort param_2)

{
  ushort *puVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  float *pfVar6;
  float fVar7;
  
  fVar7 = 0.0;
  cVar2 = CAkStateAware::UseState();
  if ((((cVar2 == '\0') || (cVar2 = (**(code **)(*param_1 + 0x20))(param_1), cVar2 == '\0')) ||
      (lVar3 = (**(code **)(*param_1 + 0x78))(param_1), lVar3 == 0)) ||
     (lVar3 = *(longlong *)(lVar3 + 8), lVar3 == 0)) {
    return 0.0;
  }
  do {
    puVar1 = *(ushort **)(lVar3 + 0x20);
    if (puVar1 != (ushort *)0x0) {
      uVar4 = 0;
      do {
        uVar5 = (int)uVar4 + 1;
        if (puVar1[uVar5] == param_2) {
          pfVar6 = (float *)((longlong)puVar1 +
                            uVar4 * 0x10 + ((ulonglong)((uint)*puVar1 * 2 + 5) & 0xfffffffc));
          if (pfVar6 != (float *)0x0) {
            fVar7 = fVar7 + *pfVar6;
          }
          break;
        }
        uVar4 = (ulonglong)uVar5;
      } while (uVar5 < *puVar1);
    }
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      return fVar7;
    }
  } while( true );
}


