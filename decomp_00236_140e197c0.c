// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140e197c0 FUN_140e197c0 body=604 status=ok
// SIG undefined FUN_140e197c0(void)

void FUN_140e197c0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  char cVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int *piVar11;
  longlong *plVar12;
  bool bVar13;
  undefined8 local_res8;
  ulonglong local_res10;
  undefined8 local_38;
  ulonglong uStack_30;
  
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPetDestroyed",L"::");
    pwVar5 = (wchar_t *)0x0;
    while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar5 = pwVar4;
    }
    FName::FName(&local_res10,pwVar5 + 2,1);
    lVar2 = *(longlong *)(param_1 + 0x3c8);
    plVar12 = (longlong *)(lVar2 + 0x290);
    FWeakObjectPtr::operator=(&local_38,0);
    uStack_30 = 0;
    FWeakObjectPtr::operator=(&local_38,param_1);
    uStack_30 = local_res10;
    local_res8 = 0;
    if ((local_res10 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_38), lVar9 != 0)) {
      UObject::FindFunction(lVar9,uStack_30);
    }
    piVar3 = (int *)*plVar12;
    iVar1 = *(int *)(lVar2 + 0x298);
    uVar6 = local_38;
    for (piVar11 = piVar3; local_38 = (undefined1 *)uVar6, piVar11 != piVar3 + (longlong)iVar1 * 4;
        piVar11 = piVar11 + 4) {
      local_38._0_4_ = (int)uVar6;
      if ((((*piVar11 == (int)local_38) &&
           (local_38._4_4_ = (int)((ulonglong)uVar6 >> 0x20), bVar13 = piVar11[1] == local_38._4_4_,
           bVar13)) ||
          ((cVar7 = FWeakObjectPtr::IsValid(piVar11), cVar7 == '\0' &&
           (cVar7 = FWeakObjectPtr::IsValid(&local_38), cVar7 == '\0')))) &&
         (*(ulonglong *)(piVar11 + 2) == uStack_30)) {
        if ((int)((longlong)piVar11 - (longlong)piVar3 >> 4) != -1) goto LAB_140e19936;
        break;
      }
      uVar6 = local_38;
    }
    iVar1 = *(int *)(lVar2 + 0x298);
    *(int *)(lVar2 + 0x298) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x29c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar1);
    }
    puVar10 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar12);
    *puVar10 = (int)local_38;
    puVar10[1] = local_38._4_4_;
    *(ulonglong *)(puVar10 + 2) = uStack_30;
LAB_140e19936:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar12);
    uStack_30 = uStack_30 & 0xffffffff00000000;
    local_38 = &LAB_140e2d200;
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPetDied",L"::");
    pwVar5 = (wchar_t *)0x0;
    while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar5 = pwVar4;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x3c8) + 0xf18,param_1,&local_38,local_res8);
    FUN_1409a6ac0(*(undefined8 *)(param_1 + 0x3d0),*(undefined8 *)(param_1 + 0x3c8));
    if (*(longlong *)(param_1 + 0x3d0) != 0) {
      FUN_140e16190(*(longlong *)(param_1 + 0x3d0),*(undefined8 *)(param_1 + 0x3c8),3);
      return;
    }
  }
  return;
}



// FUNCTION 140e19a20 FUN_140e19a20 body=42 status=ok
// SIG undefined FUN_140e19a20(void)

longlong FUN_140e19a20(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x108))(param_2,*(undefined4 *)(*(int *)(param_1 + 0x18) + param_3));
  return param_3;
}



// FUNCTION 140e19a50 FUN_140e19a50 body=31 status=ok
// SIG undefined FUN_140e19a50(void)

void FUN_140e19a50(longlong param_1,undefined1 *param_2,undefined1 *param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    *param_2 = *(undefined1 *)(param_1 + 0x70);
    *param_3 = *(undefined1 *)(param_1 + 0x71);
    FString::operator=(param_4,param_1 + 0x78);
    return;
  }
  return;
}



// FUNCTION 140e19a70 FUN_140e19a70 body=190 status=ok
// SIG undefined FUN_140e19a70(void)

void FUN_140e19a70(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined8 local_10;
  
  FText::FText(local_28);
  FText::operator=(local_28,param_2);
  local_10 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1,local_28);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
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
  return;
}



// FUNCTION 140e19b30 FUN_140e19b30 body=890 status=ok
// SIG undefined FUN_140e19b30(void)

void FUN_140e19b30(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined4 uVar14;
  longlong lVar15;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong *plStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar10 = *(longlong *)(param_1 + 0x118);
  lVar15 = 0;
  uVar14 = 0;
  if (lVar10 == 0) {
LAB_140e19c0a:
    plVar9 = &local_58;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    bVar5 = false;
    bVar4 = true;
    lVar10 = lVar15;
    lVar7 = lVar15;
  }
  else {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140e19c0a;
    lVar7 = FUN_1422312c0(lVar10);
    if (lVar7 == 0) {
LAB_140e19bed:
      lVar7 = lVar15;
    }
    else {
      lVar8 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_140e19bed;
    }
    bVar5 = true;
    bVar4 = false;
    plVar9 = (longlong *)FUN_142dcf3a0(lVar10,local_38);
    lVar10 = *plVar9;
  }
  plVar3 = (longlong *)plVar9[1];
  plVar9[1] = 0;
  *plVar9 = 0;
  plVar9 = plStack_50;
  if ((bVar4) && (plStack_50 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar9 = local_30 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (((lVar7 != 0) && (lVar10 != 0)) && (param_3 != 0)) {
    lVar11 = FUN_142dfdfe0();
    lVar8 = param_3;
    do {
      if (lVar8 == lVar11) {
        lVar11 = FUN_142dfdfe0();
        lVar8 = param_3;
        goto LAB_140e19d01;
      }
      lVar8 = *(longlong *)(lVar8 + 0x30);
    } while (lVar8 != 0);
  }
LAB_140e19e52:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    lVar10 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  return;
  while (lVar8 = *(longlong *)(lVar8 + 0x30), lVar13 = lVar15, lVar8 != 0) {
LAB_140e19d01:
    lVar13 = param_3;
    if (lVar8 == lVar11) break;
  }
  lVar8 = FUN_142dcdc10(param_2,lVar13);
  if (lVar8 != 0) {
    lVar11 = FUN_1413f2350();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
        != lVar11 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (iVar6 = FUN_140c12880(param_3), iVar6 != 0)) {
      lVar11 = FUN_142dcea70(param_2,lVar8);
      if (lVar11 != 0) {
        uVar14 = *(undefined4 *)(lVar11 + 0x3c);
      }
      if (*(int *)(lVar8 + 0xf0) == 0) {
        local_68 = (undefined4)lVar10;
        uStack_64 = (undefined4)((ulonglong)lVar10 >> 0x20);
        uStack_60 = SUB84(plVar3,0);
        uStack_5c = (undefined4)((ulonglong)plVar3 >> 0x20);
        local_48 = local_68;
        uStack_44 = uStack_64;
        uStack_40 = uStack_60;
        uStack_3c = uStack_5c;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        uVar12 = FUN_140bb7220(lVar7);
        FUN_140d6a5a0(uVar12,&local_48,iVar6,uVar14);
        plVar9 = (longlong *)CONCAT44(uStack_3c,uStack_40);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar9 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
      }
      if (*(longlong *)(lVar8 + 0xd8) != 0) {
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
        if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
          lVar15 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x5e0);
        }
        if ((lVar15 != 0) &&
           (iVar6 = FUN_140e7f650(lVar15,*(undefined8 *)(lVar8 + 0xd8)), iVar6 != -1)) {
          FUN_140e391f0(param_1,lVar7);
        }
      }
    }
  }
  goto LAB_140e19e52;
}



// FUNCTION 140e19eb0 FUN_140e19eb0 body=856 status=ok
// SIG undefined FUN_140e19eb0(void)

void FUN_140e19eb0(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                  char param_5,char param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong *plStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar12 = 0;
  uVar15 = 0;
  if (param_5 == '\0') {
    return;
  }
  if (param_6 != '\0') {
    return;
  }
  lVar10 = *(longlong *)(param_1 + 0x118);
  if (lVar10 == 0) {
LAB_140e19fa7:
    plVar9 = &local_58;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    bVar5 = false;
    bVar4 = true;
    lVar10 = lVar12;
    lVar7 = lVar12;
  }
  else {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140e19fa7;
    lVar7 = FUN_1422312c0(lVar10);
    if (lVar7 == 0) {
LAB_140e19f8a:
      lVar7 = lVar12;
    }
    else {
      lVar8 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_140e19f8a;
    }
    bVar5 = true;
    bVar4 = false;
    plVar9 = (longlong *)FUN_142dcf3a0(lVar10,local_38);
    lVar10 = *plVar9;
  }
  plVar3 = (longlong *)plVar9[1];
  plVar9[1] = 0;
  *plVar9 = 0;
  plVar9 = plStack_50;
  if ((bVar4) && (plStack_50 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar9 = local_30 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (((lVar7 != 0) && (lVar10 != 0)) && (param_3 != 0)) {
    lVar11 = FUN_142dfdfe0();
    lVar8 = param_3;
    do {
      if (lVar8 == lVar11) {
        lVar11 = FUN_142dfdfe0();
        lVar8 = param_3;
        goto LAB_140e1a0b0;
      }
      lVar8 = *(longlong *)(lVar8 + 0x30);
    } while (lVar8 != 0);
  }
LAB_140e1a1a7:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    lVar12 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
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
  return;
  while (lVar8 = *(longlong *)(lVar8 + 0x30), lVar14 = lVar12, lVar8 != 0) {
LAB_140e1a0b0:
    lVar14 = param_3;
    if (lVar8 == lVar11) break;
  }
  lVar12 = FUN_142dcdc10(param_2,lVar14);
  if (lVar12 != 0) {
    lVar8 = FUN_1413f2350();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (iVar6 = FUN_140c12880(param_3), iVar6 != 0)) {
      lVar12 = FUN_142dcea70(param_2,lVar12);
      if (lVar12 != 0) {
        uVar15 = *(undefined4 *)(lVar12 + 0x3c);
      }
      local_68 = (undefined4)lVar10;
      uStack_64 = (undefined4)((ulonglong)lVar10 >> 0x20);
      uStack_60 = SUB84(plVar3,0);
      uStack_5c = (undefined4)((ulonglong)plVar3 >> 0x20);
      local_48 = local_68;
      uStack_44 = uStack_64;
      uStack_40 = uStack_60;
      uStack_3c = uStack_5c;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      uVar13 = FUN_140bb7220(lVar7);
      FUN_140d6a740(uVar13,&local_48,iVar6,param_4,uVar15);
      plVar9 = (longlong *)CONCAT44(uStack_3c,uStack_40);
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
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
  }
  goto LAB_140e1a1a7;
}



// FUNCTION 140e1a210 FUN_140e1a210 body=108 status=ok
// SIG undefined FUN_140e1a210(void)

undefined8 FUN_140e1a210(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  float fVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar1 = FUN_140cff230(param_2);
  if ((lVar1 == 0) || (*(longlong **)(param_2 + 0x528) == (longlong *)0x0)) {
    fVar2 = 0.0;
    uVar4 = 0;
  }
  else {
    fVar2 = *(float *)(lVar1 + 0x6c);
    uVar3 = (**(code **)(**(longlong **)(param_2 + 0x528) + 0x778))();
    uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    fVar2 = (float)uVar3 / fVar2;
    if (fVar2 == 0.0) {
      return 0x3f800000;
    }
  }
  return CONCAT44(uVar4,fVar2);
}



// FUNCTION 140e1a280 FUN_140e1a280 body=1615 status=ok
// SIG undefined FUN_140e1a280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_140e1a280(longlong param_1,longlong param_2,longlong param_3,float *param_4,float *param_5
                   ,longlong *param_6,float param_7,longlong param_8,undefined8 *param_9)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined8 local_178;
  float local_170;
  float local_168;
  float local_164;
  float local_160;
  float local_150;
  float local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  float local_d0;
  
  if ((((param_6 == (longlong *)0x0) ||
       (lVar3 = (**(code **)(*param_6 + 0x148))(param_6), lVar3 == 0)) || (param_3 == 0)) ||
     ((param_2 == 0 || (lVar2 = param_6[0x240], lVar2 == 0)))) {
    return 0.0;
  }
  lVar5 = 0;
  fVar13 = 1.0;
  lVar4 = *(longlong *)(param_8 + 0x100);
  if (*(longlong *)(param_8 + 0x100) == 0) {
    lVar4 = param_8;
  }
  lVar6 = (longlong)*(int *)(param_8 + 0x108) * 0x20 + lVar4;
  fVar14 = 0.0;
  fVar16 = -1.0;
  param_6._0_4_ = 0;
  local_178 = 0;
  local_170 = 0.0;
  uVar15 = 0;
  if (lVar4 != lVar6) {
    fVar9 = *param_4;
    fVar8 = param_4[1];
    local_f0 = param_4[2];
    do {
      local_f0 = local_f0 + param_5[2];
      local_118 = *(undefined8 *)(lVar4 + 0xc);
      local_150 = *(float *)(lVar4 + 0x1c) - *(float *)(lVar4 + 0x18);
      if (local_150 <= 0.1) {
        local_150 = 0.1;
      }
      local_140 = *(float *)(lVar4 + 0x14) + local_150;
      local_150 = *(float *)(lVar4 + 0x14) - local_150;
      local_f8 = CONCAT44(fVar8 + param_5[1],fVar9 + *param_5);
      local_e0 = param_4[2];
      local_e8 = *(undefined8 *)param_4;
      local_110 = local_150;
      local_108 = local_118;
      local_100 = local_140;
      local_d0 = local_f0;
      FMath::SegmentDistToSegmentSafe
                (&local_e8,&local_f8,&local_108,&local_118,&local_128,&local_138);
      fVar9 = *param_4;
      fVar8 = param_4[1];
      local_f0 = param_4[2];
      fVar10 = *(float *)(lVar2 + 0x3c);
      fVar17 = SQRT((local_124 - fVar8) * (local_124 - fVar8) +
                    (local_128 - fVar9) * (local_128 - fVar9) +
                    (local_120 - local_f0) * (local_120 - local_f0));
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
LAB_140e1a54b:
        if (1.0 <= fVar10) {
          fVar10 = 1.0;
        }
      }
      else {
        fVar10 = (fVar17 - fVar10) / fVar10;
        if (0.0 <= fVar10) goto LAB_140e1a54b;
        fVar10 = 0.0;
      }
      fVar11 = *(float *)(lVar2 + 0x40);
      fVar1 = *(float *)(lVar4 + 0x18);
      fVar12 = fVar10 * *(float *)(lVar2 + 0x48);
      fVar7 = *(float *)(lVar2 + 0x44) - fVar11;
      if (fVar7 <= fVar11) {
        fVar7 = fVar11;
      }
      fVar10 = (SQRT((local_134 - local_124) * (local_134 - local_124) +
                     (local_138 - local_128) * (local_138 - local_128) +
                     (local_130 - local_120) * (local_130 - local_120)) - fVar1) /
               ((fVar7 * fVar10 + fVar11) * fVar1 - fVar1);
      if (0.0 <= fVar10) {
        if (1.0 <= fVar10) {
          fVar10 = 1.0;
        }
      }
      else {
        fVar10 = 0.0;
      }
      if (fVar12 <= fVar10) {
        fVar10 = (fVar10 - fVar12) / (1.0 - fVar12);
      }
      else {
        fVar10 = 0.0;
      }
      if (fVar16 < 1.0 - fVar10) {
        param_6._0_4_ = *(undefined4 *)(lVar4 + 0x1c);
        local_178 = CONCAT44(local_124,local_128);
        local_170 = local_120;
        lVar5 = lVar4;
        fVar14 = fVar17;
        fVar16 = 1.0 - fVar10;
      }
      lVar4 = lVar4 + 0x20;
      uVar15 = param_6._0_4_;
      local_168 = fVar9;
      local_164 = fVar8;
      local_160 = local_f0;
    } while (lVar4 != lVar6);
  }
  if (param_9 == (undefined8 *)0x0) {
    return fVar16;
  }
  if (lVar5 == 0) {
    *param_9 = _DAT_1468b5d90;
    *(undefined4 *)(param_9 + 1) = DAT_1468b5d98;
    if ((undefined8 *)((longlong)param_9 + 0xc) != (undefined8 *)&DAT_1468b5d90) {
      if (*(char *)(param_9 + 3) != '\0') {
        *(undefined1 *)(param_9 + 3) = 0;
      }
      *(undefined8 *)((longlong)param_9 + 0xc) = _DAT_1468b5d90;
      *(undefined4 *)((longlong)param_9 + 0x14) = DAT_1468b5d98;
      *(undefined1 *)(param_9 + 3) = 1;
    }
    *(undefined8 *)((longlong)param_9 + 0x1c) = 0;
    return fVar16;
  }
  fVar9 = *(float *)(lVar2 + 0x50);
  fVar8 = *(float *)(lVar2 + 0x58);
  fVar10 = fVar9 * (1.0 / param_7);
  if (*(float *)(lVar2 + 0x4c) <= fVar10) {
    fVar10 = *(float *)(lVar2 + 0x4c);
  }
  fVar17 = ((*(float *)(lVar2 + 0x60) * (1.0 / param_7) + 1.0) - *(float *)(lVar2 + 0x60)) * fVar8;
  if (fVar10 - fVar17 < fVar9 - fVar8) {
    fVar17 = fVar10 - (fVar9 - fVar8);
  }
  fVar11 = 0.0;
  fVar8 = (*(float *)(lVar2 + 0x5c) - fVar8) + fVar17;
  if (fVar14 <= fVar10) {
    if (fVar17 < fVar14) goto LAB_140e1a73e;
    fVar17 = fVar17 - fVar8;
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    else {
      fVar17 = (fVar14 - fVar8) / fVar17;
    }
    fVar11 = 1.0 - fVar17;
LAB_140e1a72c:
    if (0.0 <= fVar11) {
      if (1.0 <= fVar11) {
        fVar11 = 1.0;
      }
      goto LAB_140e1a73e;
    }
  }
  else {
    fVar11 = ((*(float *)(lVar2 + 0x54) - fVar9) + fVar10) - fVar10;
    if (0.0 < fVar11) {
      fVar11 = (fVar14 - fVar10) / fVar11;
      goto LAB_140e1a72c;
    }
  }
  fVar11 = 0.0;
LAB_140e1a73e:
  fVar14 = 1.0;
  if (*(char *)(param_1 + 0x4d) != '\0') {
    fVar9 = *(float *)(lVar3 + 0x7b0) + *(float *)(param_1 + 0x48);
    *(float *)(param_1 + 0x48) = fVar9;
    fVar14 = 1.0 - fVar9 / *(float *)(lVar2 + 100);
    if (0.0 <= fVar14) {
      if (1.0 <= fVar14) {
        fVar14 = 1.0;
      }
    }
    else {
      fVar14 = 0.0;
    }
    if (*(float *)(lVar2 + 100) < fVar9) {
      *(undefined1 *)(param_1 + 0x4d) = 0;
    }
  }
  if (*(char *)(param_1 + 100) != '\0') {
    fVar8 = *(float *)(lVar3 + 0x7b0) + *(float *)(param_1 + 0x60);
    *(float *)(param_1 + 0x60) = fVar8;
    fVar9 = fVar8 / *(float *)(lVar2 + 0x68);
    fVar13 = 0.0;
    if ((0.0 <= fVar9) && (fVar13 = fVar9, 1.0 <= fVar9)) {
      fVar13 = 1.0;
    }
    fVar13 = 1.0 - fVar13;
    if (*(float *)(lVar2 + 0x68) <= fVar8) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined1 *)(param_1 + 100) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
  }
  *param_9 = *(undefined8 *)(lVar5 + 0xc);
  *(undefined4 *)(param_9 + 1) = *(undefined4 *)(lVar5 + 0x14);
  if (&local_178 != (undefined8 *)((longlong)param_9 + 0xc)) {
    *(undefined8 *)((longlong)param_9 + 0xc) = local_178;
    *(float *)((longlong)param_9 + 0x14) = local_170;
    *(undefined1 *)(param_9 + 3) = 1;
  }
  *(undefined4 *)(param_9 + 4) = uVar15;
  *(float *)((longlong)param_9 + 0x1c) = (1.0 - fVar11) * fVar16 * fVar14 * fVar13;
  return fVar16;
}



// FUNCTION 140e1a8e0 FUN_140e1a8e0 body=184 status=ok
// SIG undefined FUN_140e1a8e0(void)

undefined1 FUN_140e1a8e0(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  float extraout_XMM0_Da;
  undefined1 local_28 [32];
  
  *param_2 = 0;
  if ((2 < *(byte *)(param_1 + 0xec0)) && (cVar1 = FUN_1407c3030(param_1 + 0x2b00), cVar1 == '\0'))
  {
    *param_2 = 2;
    return 0;
  }
  cVar1 = (**(code **)(*(longlong *)(param_1 + 0xd88) + 0x178))();
  if (cVar1 != '\0') {
    return 1;
  }
  if (*(longlong *)(param_1 + 0xe70) != 0) {
    FUN_142d62190(*(longlong *)(param_1 + 0xe70),local_28,*(undefined8 *)(param_1 + 0x26c8));
    cVar1 = FUN_142d52a00(local_28);
    if (cVar1 != '\0') {
      uVar2 = FUN_142d52a20(local_28);
      uVar2 = FArchive::operator<<(uVar2);
      FUN_142d5fed0(uVar2);
      if (0.0 < extraout_XMM0_Da) {
        return 1;
      }
    }
  }
  *param_2 = 4;
  return 0;
}



// FUNCTION 140e1a9a0 FUN_140e1a9a0 body=19 status=ok
// SIG undefined FUN_140e1a9a0(void)

void FUN_140e1a9a0(undefined8 param_1)

{
  undefined1 local_res10 [24];
  
  FUN_140e1a8e0(param_1,local_res10);
  return;
}



// FUNCTION 140e1a9c0 FUN_140e1a9c0 body=61 status=ok
// SIG undefined FUN_140e1a9c0(void)

bool FUN_140e1a9c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    lVar2 = FUN_1430f1090();
    lVar3 = *(longlong *)(param_1 + 0x78);
    for (lVar1 = lVar3; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) goto LAB_140e1a9f1;
    }
  }
  lVar3 = 0;
LAB_140e1a9f1:
  return lVar3 != 0;
}



// FUNCTION 140e1aa00 FUN_140e1aa00 body=289 status=ok
// SIG undefined FUN_140e1aa00(void)

undefined8 FUN_140e1aa00(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  cVar5 = (**(code **)(*(longlong *)(param_1 + 0xd98) + 0x48))();
  if (cVar5 == '\0') {
    cVar5 = FUN_140e27b70(param_1);
    if (cVar5 == '\0') {
      cVar5 = FUN_1407c3030(param_1 + 0x2428);
      if (cVar5 == '\0') {
        return 1;
      }
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_28,L"Can\'t open Photo Mode",L"PhotoModeErrorMessages",
                         L"PhotoModeAccessIsLockedText");
      FText::operator=(param_2,uVar6);
    }
    else {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_40,L"Can\'t open Photo Mode",L"PhotoModeErrorMessages",
                         L"AlreadyInPhotoModeText");
      FText::operator=(param_2,uVar6);
      local_20 = local_38;
    }
  }
  else {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"Can\'t open Photo Mode",L"PhotoModeErrorMessages",
                       L"LockedByFFYLText");
    FText::operator=(param_2,uVar6);
    local_20 = local_50;
  }
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
  return 0;
}



// FUNCTION 140e1ab50 FUN_140e1ab50 body=47 status=ok
// SIG undefined FUN_140e1ab50(void)

undefined1 FUN_140e1ab50(longlong param_1,int param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  
  if ((param_2 == 1) && (param_4 == '\x02')) {
    cVar1 = FUN_140e71290(param_1 + 0x790,0);
    if (cVar1 != '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140e1aba0 FUN_140e1aba0 body=309 status=ok
// SIG undefined FUN_140e1aba0(void)

ulonglong FUN_140e1aba0(longlong param_1,char param_2)

{
  longlong *plVar1;
  ulonglong in_RAX;
  longlong lVar2;
  longlong lVar3;
  uint7 uVar4;
  longlong *plVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  if (param_2 == '\0') {
    local_28 = *(undefined4 *)(param_1 + 0x390);
    uStack_24 = *(undefined4 *)(param_1 + 0x394);
    uStack_20 = *(undefined4 *)(param_1 + 0x398);
    uStack_1c = *(undefined4 *)(param_1 + 0x39c);
    local_18 = *(undefined8 *)(param_1 + 0x3a0);
    in_RAX = FUN_142d63aa0(&local_28,2);
    if ((char)in_RAX == '\0') goto LAB_140e1accd;
  }
  if (*(longlong *)(param_1 + 0x3d8) != 0) {
    plVar5 = *(longlong **)(param_1 + 1000);
    in_RAX = (ulonglong)*(int *)(param_1 + 0x3f0);
    plVar1 = plVar5 + in_RAX;
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      if (*plVar5 == *(longlong *)(param_1 + 0x3d8)) goto LAB_140e1accd;
    }
    plVar1 = *(longlong **)(param_1 + 0x3d0);
    if (((plVar1 != (longlong *)0x0) && ((*(byte *)(plVar1 + 0x83) & 1) == 0)) &&
       (in_RAX = (**(code **)(*plVar1 + 0x950))(), (char)in_RAX == '\0')) {
      lVar2 = *(longlong *)(param_1 + 0x120);
      if (lVar2 == 0) {
        lVar2 = FUN_1423407b0(param_1);
      }
      in_RAX = FUN_140adac00(lVar2);
      if ((char)in_RAX == '\0') {
        lVar2 = FUN_142ceefa0(*(undefined8 *)(param_1 + 0x3d0));
        in_RAX = 0;
        if (lVar2 == 0) {
LAB_140e1acc5:
          return CONCAT71((int7)(in_RAX >> 8),1);
        }
        lVar2 = FUN_142ceefa0(*(undefined8 *)(param_1 + 0x3d0));
        in_RAX = 0;
        if (lVar2 != 0) {
          lVar3 = FUN_141448000();
          uVar4 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
            in_RAX = (ulonglong)uVar4 << 8;
          }
          else {
            in_RAX = CONCAT71(uVar4,1);
          }
          if (((char)in_RAX != '\0') && ((*(uint *)(lVar2 + 0x620) & 0x400) != 0))
          goto LAB_140e1acc5;
        }
      }
    }
  }
LAB_140e1accd:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140e1ace0 FUN_140e1ace0 body=165 status=ok
// SIG undefined FUN_140e1ace0(void)

undefined8 FUN_140e1ace0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_1 + 0x1d8) < 3) && (lVar3 = FUN_14222e280(), lVar3 != 0)) {
    lVar4 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(char *)(lVar3 + 0x5d4) != '\0')) {
      uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar3 = FUN_140aab5e0(uVar5);
      if ((lVar3 != 0) && (cVar2 = FUN_140aaed30(lVar3,param_1), cVar2 != '\0')) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140e1ad90 FUN_140e1ad90 body=186 status=ok
// SIG undefined FUN_140e1ad90(void)

bool FUN_140e1ad90(longlong *param_1,undefined1 *param_2)

{
  char cVar1;
  longlong lVar2;
  
  *param_2 = 0;
  cVar1 = FUN_140e71290(param_1 + 0x2a3,0);
  if (cVar1 == '\0') {
    cVar1 = FUN_1407c3030(param_1 + 0x4a6);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0x778))(param_1);
      if (cVar1 != '\0') {
        lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
        if (lVar2 != 0) {
          lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
          if (*(float *)(lVar2 + 0x790) - *(float *)((longlong)param_1 + 0x2c84) <
              *(float *)(param_1 + 0x4d8)) {
            *param_2 = 3;
            return false;
          }
        }
      }
      cVar1 = FUN_140e1a8e0(param_1,param_2);
      return cVar1 != '\0';
    }
  }
  *param_2 = 1;
  return false;
}



// FUNCTION 140e1ae50 FUN_140e1ae50 body=19 status=ok
// SIG undefined FUN_140e1ae50(void)

void FUN_140e1ae50(undefined8 param_1)

{
  undefined1 local_res10 [24];
  
  FUN_140e1ad90(param_1,local_res10);
  return;
}



// FUNCTION 140e1ae70 FUN_140e1ae70 body=117 status=ok
// SIG undefined FUN_140e1ae70(void)

void FUN_140e1ae70(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x118);
  if (lVar1 != 0) {
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
      FUN_140e338d0(param_1,lVar1,param_3);
    }
  }
  return;
}



// FUNCTION 140e1aef0 FUN_140e1aef0 body=414 status=ok
// SIG undefined FUN_140e1aef0(void)

void FUN_140e1aef0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *local_38;
  undefined8 local_30;
  
  lVar2 = *(longlong *)(param_2 + 0x118);
  if (lVar2 != 0) {
    lVar5 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar9 = 0;
      local_38 = (longlong *)0x0;
      local_30 = 0;
      uVar6 = FUN_142dcee70(param_1);
      TMultiMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
      ::MultiFind<FDefaultAllocator>(uVar6,param_3,&local_38,0);
      plVar4 = local_38;
      uVar10 = (ulonglong)((longlong)(local_38 + (int)local_30) + (7 - (longlong)local_38)) >> 3;
      if (local_38 + (int)local_30 < local_38) {
        uVar10 = uVar9;
      }
      plVar11 = local_38;
      if (uVar10 != 0) {
        do {
          lVar5 = *plVar11;
          lVar7 = FUN_140e21c10(param_1,lVar2);
          if (lVar7 != 0) {
            plVar8 = *(longlong **)(param_1 + 0x538);
            plVar1 = plVar8 + (longlong)*(int *)(param_1 + 0x540) * 3;
            for (; plVar8 != plVar1; plVar8 = plVar8 + 3) {
              if ((*plVar8 == lVar5) && (plVar8[1] == lVar7)) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              if (bVar3) {
                if (plVar8 != (longlong *)0x0) {
                  FUN_140f8bd80(lVar7,plVar8[2]);
                  FUN_140e33f90(param_1,lVar5,lVar7);
                }
                break;
              }
            }
          }
          uVar9 = uVar9 + 1;
          plVar11 = plVar11 + 1;
        } while (uVar9 != uVar10);
      }
      FUN_140e338d0(param_1,lVar2,param_3);
      if (plVar4 != (longlong *)0x0) {
        FMemory::Free(plVar4);
      }
    }
  }
  return;
}



// FUNCTION 140e1b090 FUN_140e1b090 body=622 status=ok
// SIG undefined FUN_140e1b090(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140e1b090(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  float local_50;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar9 = iVar1 >> 0x1f & 0xffff;
    uVar5 = iVar1 + uVar9;
    lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
            (longlong)(int)((uVar5 & 0xffff) - uVar9) * 0x18;
  }
  else {
    lVar6 = 0;
  }
  if (((*(uint *)(lVar6 + 8) >> 0x1d & 1) != 0) ||
     (lVar6 = (**(code **)(*param_1 + 0x148))(param_1), lVar6 == 0)) {
    return 0;
  }
  lVar6 = UWorld::GetWorldSettings(lVar6,1);
  if ((*(byte *)(lVar6 + 0x460) & 1) == 0) {
    return 1;
  }
  lVar2 = param_1[0x2d];
  if (lVar2 == 0) {
    local_50 = DAT_1468b5d98;
  }
  else {
    local_50 = *(float *)(lVar2 + 0x228);
  }
  if (*(float *)(lVar6 + 0x470) <= local_50) {
    if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0xb8) & 1) == 0)) {
      return 1;
    }
    if ((((-1048576.0 <= *(float *)(lVar2 + 0x1d0) - *(float *)(lVar2 + 0x1dc)) &&
         (*(float *)(lVar2 + 0x1d0) + *(float *)(lVar2 + 0x1dc) <= 1048576.0)) &&
        (-1048576.0 <= *(float *)(lVar2 + 0x1d4) - *(float *)(lVar2 + 0x1e0))) &&
       (((*(float *)(lVar2 + 0x1d4) + *(float *)(lVar2 + 0x1e0) <= 1048576.0 &&
         (-1048576.0 <= *(float *)(lVar2 + 0x1d8) - *(float *)(lVar2 + 0x1e4))) &&
        (*(float *)(lVar2 + 0x1d8) + *(float *)(lVar2 + 0x1e4) <= 1048576.0)))) {
      return 1;
    }
    (**(code **)(*param_1 + 0x558))(param_1);
    return 0;
  }
  if (*(longlong *)(lVar6 + 0x478) != 0) {
    lVar7 = UDamageType::GetPrivateStaticClass();
    lVar2 = *(longlong *)(lVar6 + 0x478);
    for (lVar3 = lVar2; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar7) {
        if (lVar2 != 0) {
          if (lVar2 == 0) goto LAB_140e1b223;
          plVar8 = (longlong *)UDamageType::GetPrivateStaticClass();
          plVar10 = *(longlong **)(lVar6 + 0x478);
          plVar4 = plVar10;
          goto joined_r0x000140e1b213;
        }
        break;
      }
    }
  }
  lVar6 = GetDefault<UDamageType>();
  goto LAB_140e1b1c6;
joined_r0x000140e1b213:
  if (plVar4 == (longlong *)0x0) goto LAB_140e1b223;
  if (plVar4 == plVar8) goto LAB_140e1b225;
  plVar4 = (longlong *)plVar4[6];
  goto joined_r0x000140e1b213;
LAB_140e1b223:
  plVar10 = (longlong *)0x0;
LAB_140e1b225:
  lVar6 = plVar10[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar10 + 0x368))(plVar10);
    lVar6 = plVar10[0x1f];
  }
LAB_140e1b1c6:
  (**(code **)(*param_1 + 0x550))(param_1,lVar6);
  return 0;
}



// FUNCTION 140e1b300 FUN_140e1b300 body=127 status=ok
// SIG undefined FUN_140e1b300(void)

void FUN_140e1b300(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < *(int *)(param_1 + 0x26d8)) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x26d0);
      if ((*(longlong *)(uVar2 + lVar1) != 0) && (*(longlong *)(param_1 + 0x2a60) != 0)) {
        FUN_142d26ae0();
        lVar1 = *(longlong *)(param_1 + 0x26d0);
      }
      *(undefined8 *)(uVar2 + lVar1) = 0;
      uVar3 = (int)uVar4 + 1;
      uVar2 = uVar2 + 8;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < *(int *)(param_1 + 0x26d8));
  }
  return;
}



// FUNCTION 140e1b380 FUN_140e1b380 body=158 status=ok
// SIG undefined FUN_140e1b380(void)

void FUN_140e1b380(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  *(undefined1 *)(param_1 + 0x2f0) = 0;
  if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar1 = FUN_1423407b0(), lVar1 == 0)) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_1);
  }
  if ((*(longlong *)(lVar1 + 400) != 0) && (*(longlong *)(*(longlong *)(lVar1 + 400) + 0xa0) != 0))
  {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
    uVar2 = 0;
    if (*(longlong *)(lVar1 + 400) != 0) {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0xa0);
    }
    FUN_142880530(uVar2,param_1 + 0x2e8);
    *(undefined8 *)(param_1 + 0x2e8) = 0;
  }
  return;
}



// FUNCTION 140e1b430 FUN_140e1b430 body=644 status=ok
// SIG undefined FUN_140e1b430(void)

void FUN_140e1b430(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [48];
  
  plVar10 = (longlong *)param_1[0x138];
  if (plVar10 == (longlong *)0x0) {
LAB_140e1b4a5:
    plVar10 = (longlong *)0x0;
  }
  else {
    lVar3 = FUN_14145f370();
    if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140e1b4a5;
    cVar2 = (**(code **)(plVar10[0x130] + 0x20))();
    if (cVar2 != '\0') {
      FUN_141400a20(param_1);
      return;
    }
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar3 = 0;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x548);
  }
  if (param_1[0x483] == 0) {
    if ((lVar3 != 0) && (lVar7 = *(longlong *)(lVar3 + 0x38), lVar7 != 0)) {
      lVar4 = FUN_1414a4df0();
      lVar9 = lVar7;
      do {
        if (lVar9 == lVar4) {
          lVar4 = FUN_1414a4df0();
          lVar9 = lVar7;
          goto LAB_140e1b528;
        }
        lVar9 = *(longlong *)(lVar9 + 0x30);
      } while (lVar9 != 0);
    }
    goto LAB_140e1b588;
  }
  goto LAB_140e1b596;
  while (lVar9 = *(longlong *)(lVar9 + 0x30), lVar9 != 0) {
LAB_140e1b528:
    if (lVar9 == lVar4) goto LAB_140e1b539;
  }
  lVar7 = 0;
LAB_140e1b539:
  uVar8 = FActorSpawnParameters::FActorSpawnParameters(local_38);
  uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  plVar6 = (longlong *)UWorld::SpawnActor(uVar5,lVar7,0,0,uVar8);
  param_1[0x483] = (longlong)plVar6;
  (**(code **)(*plVar6 + 0x448))(plVar6,param_1);
LAB_140e1b588:
  if (param_1[0x483] == 0) goto LAB_140e1b671;
LAB_140e1b596:
  if (((lVar3 == 0) || (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 == 0)) ||
     (plVar10 == (longlong *)0x0)) goto LAB_140e1b671;
  param_1[0x484] = 0;
  lVar7 = (**(code **)(*plVar10 + 0xfa8))(plVar10);
  if (lVar7 == 0) {
    lVar3 = param_1[0x484];
  }
  else {
    uVar8 = (**(code **)(*plVar10 + 0xfa8))(plVar10);
    lVar3 = FUN_142f02280(uVar8,lVar3);
    if (lVar3 == 0) {
LAB_140e1b626:
      lVar3 = 0;
    }
    else {
      lVar7 = AUGWeapon_Hook::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_140e1b626;
    }
    param_1[0x484] = lVar3;
  }
  if (lVar3 != 0) {
    local_40 = 0;
    local_48 = lVar3;
    uVar8 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    local_40 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar8);
    FUN_140e915e0(param_1[0x483],&local_48);
  }
LAB_140e1b671:
  if ((param_1[0x483] != 0) && (param_1[0x484] != 0)) {
    FUN_140e7aea0(param_1[0x483],param_1,param_1[0x2d]);
  }
  return;
}



// FUNCTION 140e1b6e0 FUN_140e1b6e0 body=113 status=ok
// SIG undefined FUN_140e1b6e0(void)

void FUN_140e1b6e0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    FUN_140e36f00(param_1,*(undefined8 *)(param_2 + 0x10),param_3,1);
    lVar1 = *(longlong *)(param_1 + 0x118);
    if (lVar1 != 0) {
      lVar3 = FUN_14145f370();
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
        FUN_140d04be0(lVar1);
        Z_Construct_UClass_ACharacterGunfire_Statics::NewProp_bSkipWallChecks_SetBit(lVar1);
      }
    }
  }
  return;
}



// FUNCTION 140e1b770 FUN_140e1b770 body=30 status=ok
// SIG undefined FUN_140e1b770(void)

void FUN_140e1b770(longlong param_1,undefined1 param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x24d8,local_res10);
  return;
}



// FUNCTION 140e1b7a0 FUN_140e1b7a0 body=78 status=ok
// SIG undefined FUN_140e1b7a0(void)

void FUN_140e1b7a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f47bd8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
    *puVar1 = &PTR_FUN_144599758;
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    return;
  }
  return;
}



// FUNCTION 140e1b7f0 FUN_140e1b7f0 body=303 status=ok
// SIG undefined FUN_140e1b7f0(void)

void FUN_140e1b7f0(longlong *param_1,undefined8 param_2)

{
  longlong *local_98;
  undefined8 local_90;
  undefined **local_88;
  undefined *local_80;
  undefined1 local_78;
  undefined4 local_70;
  undefined **local_68;
  char *local_60;
  undefined1 local_58;
  undefined4 local_50;
  undefined **local_48;
  undefined *local_40;
  undefined1 local_38;
  undefined4 local_30;
  undefined **local_28;
  char *local_20;
  undefined1 local_18;
  undefined4 local_10;
  
  (**(code **)(*param_1 + 0x10))(param_1,&local_98,"reward",param_2);
  if (local_98 != (longlong *)0x0) {
    local_80 = &DAT_144577204;
    local_78 = 1;
    local_88 = &PTR_FUN_144599758;
    local_70 = 0;
    (**(code **)(*local_98 + 0x18))(local_98,local_90,&local_88);
    local_88 = &PTR_FUN_143f47bd8;
    local_60 = "title";
    local_58 = 1;
    local_68 = &PTR_FUN_144576140;
    local_50 = 8;
    (**(code **)(*local_98 + 0x18))(local_98,local_90,&local_68);
    local_68 = &PTR_FUN_143f47bd8;
    local_40 = &DAT_14458a480;
    local_38 = 1;
    local_48 = &PTR_FUN_144576140;
    local_30 = 0x18;
    (**(code **)(*local_98 + 0x18))(local_98,local_90,&local_48);
    local_48 = &PTR_FUN_143f47bd8;
    local_20 = "description";
    local_18 = 1;
    local_28 = &PTR_FUN_144576140;
    local_10 = 0x28;
    (**(code **)(*local_98 + 0x18))(local_98,local_90,&local_28);
  }
  cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_98);
  return;
}



// FUNCTION 140e1b920 FUN_140e1b920 body=20 status=ok
// SIG undefined FUN_140e1b920(void)

void FUN_140e1b920(longlong param_1,float param_2)

{
  if (*(char *)(param_1 + 0x78) != '\0') {
    _guard_xfg_dispatch_icall_nop(param_2,*(float *)(param_1 + 0x7c));
    return;
  }
  return;
}



// FUNCTION 140e1b940 FUN_140e1b940 body=172 status=ok
// SIG undefined FUN_140e1b940(void)

void FUN_140e1b940(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*(longlong *)(param_1 + 0x608) != 0) {
    uVar1 = FUN_140e35040(param_1,1,param_2);
    (**(code **)(**(longlong **)(param_1 + 0x608) + 0x930))(*(longlong **)(param_1 + 0x608),uVar1,1)
    ;
    if (*(longlong *)(param_1 + 0x460) != 0) {
      FUN_142d27460(*(longlong *)(param_1 + 0x460),*(undefined8 *)(param_1 + 0x608));
    }
  }
  if (*(longlong *)(param_1 + 0x610) != 0) {
    uVar1 = FUN_140e35040(param_1,0,param_2);
    (**(code **)(**(longlong **)(param_1 + 0x610) + 0x930))(*(longlong **)(param_1 + 0x610),uVar1,1)
    ;
    if (*(longlong *)(param_1 + 0x460) != 0) {
      FUN_142d27460(*(longlong *)(param_1 + 0x460),*(undefined8 *)(param_1 + 0x610));
    }
  }
  return;
}



// FUNCTION 140e1b9f0 FUN_140e1b9f0 body=290 status=ok
// SIG undefined FUN_140e1b9f0(void)

void FUN_140e1b9f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong local_20;
  longlong *local_18;
  longlong *plStack_10;
  
  local_28 = *(undefined8 *)(param_1 + 0xb0);
  local_20 = *(longlong *)(param_1 + 0xb8);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar6 = FWeakObjectPtr::Get(param_1 + 0x38);
  lVar7 = FUN_14244c070(uVar6,&local_28);
  if (lVar7 != 0) {
    lVar8 = FUN_141432660();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_140e1ba79;
  }
  lVar7 = 0;
LAB_140e1ba79:
  plStack_30 = (longlong *)FUN_140e107f0(param_1 + 0x38,(undefined8 *)(param_1 + 0xb0));
  local_38 = plStack_30 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_38,local_38,local_38);
  local_18 = local_38;
  plStack_10 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  FUN_140e57f40(lVar7,&local_18);
  plVar5 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_30)(plStack_30);
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
  return;
}



// FUNCTION 140e1bb20 FUN_140e1bb20 body=84 status=ok
// SIG undefined FUN_140e1bb20(void)

CVSToolsListBox * FUN_140e1bb20(CMFCToolBarsToolsPropertyPage *param_1)

{
  CVSToolsListBox *this;
  
  this = (CVSToolsListBox *)operator_new(0x6e0);
  if (this != (CVSToolsListBox *)0x0) {
    CVSToolsListBox::CVSToolsListBox(this,param_1);
    *(CMFCToolBarsToolsPropertyPage **)(this + 0x6d8) = param_1;
    *(undefined ***)this = &PTR_FUN_144597160;
    return this;
  }
  return (CVSToolsListBox *)0x0;
}



// FUNCTION 140e1bb80 FUN_140e1bb80 body=66 status=ok
// SIG undefined FUN_140e1bb80(void)

void FUN_140e1bb80(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1445999c8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144599a10;
  }
  return;
}



// FUNCTION 140e1bbd0 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144599a58;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144599aa0;
  }
  return;
}



// FUNCTION 140e1bc20 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144599c08;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144599c50;
  }
  return;
}



// FUNCTION 140e1bc70 FUN_140e1bc70 body=102 status=ok
// SIG undefined FUN_140e1bc70(void)

void FUN_140e1bc70(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144599888;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(param_1 + 0x10);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    lVar1 = *(longlong *)(param_1 + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    *puVar2 = &PTR_GetPoolName_1445998d0;
  }
  return;
}



// FUNCTION 140e1bce0 FUN_140e1bce0 body=66 status=ok
// SIG undefined FUN_140e1bce0(void)

void FUN_140e1bce0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144599918;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144599960;
  }
  return;
}



// FUNCTION 140e1bd30 FUN_140e1bd30 body=91 status=ok
// SIG undefined FUN_140e1bd30(void)

void FUN_140e1bd30(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1445997d8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar1 = &PTR_GetPoolName_144599820;
  }
  return;
}



// FUNCTION 140e1bd90 FUN_140e1bd90 body=91 status=ok
// SIG undefined FUN_140e1bd90(void)

void FUN_140e1bd90(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144599b78;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_144599bc0;
  }
  return;
}



// FUNCTION 140e1bdf0 FUN_140e1bdf0 body=106 status=ok
// SIG undefined FUN_140e1bdf0(void)

void FUN_140e1bdf0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144599ae8;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined1 *)(puVar2 + 5) = *(undefined1 *)(param_1 + 0x28);
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    *puVar2 = &PTR_FUN_144599b30;
  }
  return;
}



// FUNCTION 140e1be60 FUN_140e1be60 body=577 status=ok
// SIG undefined FUN_140e1be60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e1be60(longlong param_1,char param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 auVar12 [16];
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    FUN_140e8e810();
    *(undefined8 *)(param_1 + 0x2d8) = 0;
  }
  plVar11 = (longlong *)(param_1 + 0x2a0);
  if (param_2 == '\0') {
    plVar11 = (longlong *)(param_1 + 600);
  }
  if (*plVar11 != 0) {
    lVar7 = UGCharacterAnimInstance::GetPrivateStaticClass();
    lVar8 = *plVar11;
    for (lVar9 = lVar8; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
      if (lVar9 == lVar7) goto LAB_140e1bed0;
    }
  }
  lVar8 = 0;
LAB_140e1bed0:
  lVar8 = FUN_140e6f140(param_1,lVar8);
  if (lVar8 != 0) {
    lVar9 = UGCharacterAnimInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_140e1bf14;
  }
  lVar8 = 0;
LAB_140e1bf14:
  *(longlong *)(param_1 + 0x2d8) = lVar8;
  if (lVar8 != 0) {
    lVar8 = *(longlong *)(lVar8 + 0x168);
    if (lVar8 != 0) {
      lVar9 = 0x2a8;
      if (param_2 == '\0') {
        lVar9 = 0x260;
      }
      pfVar1 = (float *)(lVar8 + 0x280);
      local_28 = *(undefined8 *)(lVar9 + param_1);
      local_20 = *(undefined4 *)(lVar9 + 8 + param_1);
      if (((*(float *)(lVar8 + 0x1f8) == *pfVar1) &&
          (*(float *)(lVar8 + 0x1fc) == *(float *)(lVar8 + 0x284))) &&
         (*(float *)(lVar8 + 0x200) == *(float *)(lVar8 + 0x288))) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        local_38 = *(undefined8 *)*(undefined1 (*) [12])(lVar8 + 0x1f8);
        auVar12._12_4_ = 0;
        auVar12._0_12_ = *(undefined1 (*) [12])(lVar8 + 0x1f8);
        fVar2 = (float)DAT_14686fd30;
        fVar3 = DAT_14686fd30._4_4_;
        fVar4 = DAT_14686fd30._8_4_;
        auVar12 = divps(auVar12,_DAT_14686fd30);
        fVar14 = (float)local_38 - (float)(int)auVar12._0_4_ * fVar2;
        fVar15 = (float)((ulonglong)local_38 >> 0x20) - (float)(int)auVar12._4_4_ * fVar3;
        fVar16 = *(float *)(lVar8 + 0x200) - (float)(int)auVar12._8_4_ * fVar4;
        fVar14 = (float)(((uint)(fVar14 + fVar2) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                        (uint)(fVar14 + fVar2));
        fVar15 = (float)(((uint)(fVar15 + fVar3) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                        (uint)(fVar15 + fVar3));
        fVar16 = (float)(((uint)(fVar16 + fVar4) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                        (uint)(fVar16 + fVar4));
        uVar13 = ((uint)(fVar16 - fVar4) ^ (uint)fVar16) & -(uint)(fRam000000014686fd28 < fVar16) ^
                 (uint)fVar16;
        uStack_30 = CONCAT44(uStack_30._4_4_,uVar13);
        *(ulonglong *)pfVar1 =
             CONCAT44(((uint)(fVar15 - fVar3) ^ (uint)fVar15) &
                      -(uint)(fRam000000014686fd24 < fVar15) ^ (uint)fVar15,
                      ((uint)(fVar14 - fVar2) ^ (uint)fVar14) & -(uint)(_DAT_14686fd20 < fVar14) ^
                      (uint)fVar14);
        *(uint *)(lVar8 + 0x288) = uVar13;
        puVar10 = (undefined8 *)FRotator::Quaternion(pfVar1,local_18);
        uVar5 = puVar10[1];
        *(undefined8 *)(lVar8 + 0x270) = *puVar10;
        *(undefined8 *)(lVar8 + 0x278) = uVar5;
      }
      local_38 = *(undefined8 *)(lVar8 + 0x270);
      uStack_30 = *(undefined8 *)(lVar8 + 0x278);
      FUN_142397be0(lVar8,&local_28,&local_38,0,0,0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x6f0))();
  }
  return;
}



// FUNCTION 140e1c0b0 FUN_140e1c0b0 body=90 status=ok
// SIG undefined FUN_140e1c0b0(void)

void FUN_140e1c0b0(longlong param_1)

{
  undefined8 uVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  uVar1 = FWeakObjectPtr::Get(param_1 + 0x2c8);
  FUN_140e8e810(param_1,uVar1);
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x2c8) = local_res8;
  *(undefined4 *)(param_1 + 0x2cc) = local_resc;
  return;
}



// FUNCTION 140e1c110 FUN_140e1c110 body=9 status=ok
// SIG undefined FUN_140e1c110(void)

void FUN_140e1c110(longlong param_1)

{
  FUN_140e14aa0(param_1 + 0x10);
  return;
}



// FUNCTION 140e1c120 FUN_140e1c120 body=343 status=ok
// SIG undefined FUN_140e1c120(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e1c120(longlong param_1)

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
  
  FUN_142701db0();
  uVar6 = 0;
  lVar3 = *(longlong *)(param_1 + 0x528);
  uVar8 = uVar6;
  uVar10 = uVar6;
  iVar4 = DAT_1465327f8;
  if (0 < DAT_1465327f8) {
    do {
      plVar9 = (longlong *)(DAT_1465327f0 + uVar10);
      if ((((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) &&
         (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8),
         iVar4 = DAT_1465327f8, *plVar2 == lVar3)) {
        if (((int)plVar9[1] != 0) && (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar9 != 0) {
            lVar3 = FMemory::Realloc(*plVar9,0,0);
            *plVar9 = lVar3;
          }
          *(undefined4 *)(plVar9 + 1) = 0;
          iVar4 = DAT_1465327f8;
        }
        break;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar10 = uVar10 + 0x10;
    } while ((int)uVar7 < iVar4);
  }
  if (DAT_146532804 < 1) {
    uVar8 = uVar6;
    iVar5 = iVar4;
    if (0 < iVar4) {
      do {
        if (((*(int *)(uVar6 + 8 + DAT_1465327f0) == 0) ||
            (*(longlong **)(uVar6 + DAT_1465327f0) == (longlong *)0x0)) ||
           (cVar1 = (**(code **)(**(longlong **)(uVar6 + DAT_1465327f0) + 0x10))(), cVar1 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1465327f0,uVar8,1,1);
        }
        else {
          uVar8 = (ulonglong)((int)uVar8 + 1);
          uVar6 = uVar6 + 0x10;
        }
        iVar5 = DAT_1465327f8;
      } while ((int)uVar8 < DAT_1465327f8);
    }
    _DAT_146532800 = iVar5 * 2;
    if (_DAT_146532800 < 3) {
      _DAT_146532800 = 2;
    }
    if ((_DAT_146532800 < iVar4) && (DAT_1465327fc != iVar5)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1465327f0);
      return;
    }
  }
  return;
}



// FUNCTION 140e1c280 FUN_140e1c280 body=31 status=ok
// SIG undefined FUN_140e1c280(void)

void FUN_140e1c280(longlong param_1)

{
  FUN_140c3c7c0();
  FUN_140e58320(param_1 + 0x26f0);
  return;
}



// FUNCTION 140e1c2a0 FUN_140e1c2a0 body=56 status=ok
// SIG undefined FUN_140e1c2a0(void)

void FUN_140e1c2a0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x2ce9) = 0;
  *(undefined4 *)(param_1 + 0x2d00) = 0;
  if (*(int *)(param_1 + 0x2d04) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x2cf8,0);
  }
  FUN_140e16ef0(param_1);
  return;
}



// FUNCTION 140e1c2e0 FUN_140e1c2e0 body=874 status=ok
// SIG undefined FUN_140e1c2e0(void)

undefined8
FUN_140e1c2e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  longlong local_res8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_8c;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [24];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  
  FUN_14129ef50(param_2,&local_res8);
  lVar11 = *(longlong *)(param_1 + 0x198);
  *(longlong *)(param_1 + 0x198) = param_2;
  if (param_4 != 0) {
    uVar7 = (**(code **)(*(longlong *)(param_4 + 0x30) + 0x10))(param_4 + 0x30,local_88);
    FText::operator=(param_3,uVar7);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_80 + 1;
      lVar9 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  }
  uVar7 = 0;
  lVar8 = FUN_140e21430(param_1);
  lVar9 = *(longlong *)(param_1 + 0x120);
  if (lVar9 == 0) {
    lVar9 = FUN_1423407b0(param_1);
  }
  lVar9 = FUN_140e7e6f0(lVar9);
  if (lVar9 == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = FUN_140e81420(lVar9);
  }
  if (lVar8 != 0) {
    plVar13 = *(longlong **)(lVar8 + 8);
    plVar12 = plVar13 + (longlong)*(int *)(lVar8 + 0x10) * 2;
    for (; plVar13 != plVar12; plVar13 = plVar13 + 2) {
      if (*plVar13 == local_res8) goto LAB_140e1c3f0;
    }
  }
  plVar13 = (longlong *)0x0;
LAB_140e1c3f0:
  if (lVar8 != 0) {
    uVar14 = 1 << (bVar5 & 0x1f);
    if (plVar13 == (longlong *)0x0) {
      plVar13 = *(longlong **)(lVar8 + 8);
      iVar3 = *(int *)(lVar8 + 0x10);
      for (plVar12 = plVar13; plVar12 != plVar13 + (longlong)iVar3 * 2; plVar12 = plVar12 + 2) {
        if (*plVar12 == local_res8) {
          if ((int)((longlong)plVar12 - (longlong)plVar13 >> 4) != -1) goto LAB_140e1c4b9;
          break;
        }
      }
      *(int *)(lVar8 + 0x10) = iVar3 + 1;
      if (*(int *)(lVar8 + 0x14) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar8 + 8,iVar3);
      }
      local_98 = (undefined4)local_res8;
      uStack_94 = (undefined4)((ulonglong)local_res8 >> 0x20);
      puVar2 = (undefined4 *)(*(longlong *)(lVar8 + 8) + (longlong)iVar3 * 0x10);
      *puVar2 = local_98;
      puVar2[1] = uStack_94;
      puVar2[2] = uVar14;
      puVar2[3] = uStack_8c;
LAB_140e1c4b9:
      plVar13 = *(longlong **)(param_1 + 0x118);
      if (plVar13 != (longlong *)0x0) {
        lVar11 = FUN_14145f370();
        if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
            != lVar11 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if ((bVar4) && (cVar6 = (**(code **)(*plVar13 + 0x768))(plVar13), cVar6 != '\0')) {
          FUN_1413063c0(param_1,param_2);
        }
      }
    }
    else {
      if ((uVar14 & *(uint *)(plVar13 + 1)) != 0) {
        if (lVar11 != param_2) {
          uVar10 = FText::FText(local_58,param_3);
          FUN_140e19a70(param_1 + 0x1b0,uVar10,param_5);
        }
        goto LAB_140e1c5f6;
      }
      *(uint *)(plVar13 + 1) = *(uint *)(plVar13 + 1) | uVar14;
    }
  }
  uVar7 = FText::FText(local_40,param_3);
  FUN_140e19a70(param_1 + 0x1a0,uVar7,param_5);
  if ((param_5 != 0) && (lVar11 = *(longlong *)(param_1 + 0x118), lVar11 != 0)) {
    lVar8 = FUN_14145f370();
    lVar9 = *(longlong *)(lVar11 + 0x10);
    if ((*(int *)(lVar9 + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar9 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar11 = *(longlong *)(lVar11 + 0x488);
    }
    if (((lVar11 != 0) &&
        (lVar11 = FUN_14059b7e0(lVar11,CONCAT71((int7)((ulonglong)lVar9 >> 8),1)), lVar11 != 0)) &&
       (cVar6 = FUN_14059ef30(lVar11,param_5,0x3f800000), cVar6 != '\0')) {
      FUN_1405a3150(lVar11,local_70,param_5,0);
      FUN_140591060(local_70);
    }
  }
  lVar11 = FUN_140c44ae0(param_1);
  if (lVar11 != 0) {
    FUN_140c4b760(lVar11);
  }
  uVar7 = 1;
LAB_140e1c5f6:
  plVar13 = *(longlong **)(param_3 + 8);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar13 + 1;
    lVar11 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  return uVar7;
}



// FUNCTION 140e1c650 FUN_140e1c650 body=276 status=ok
// SIG undefined FUN_140e1c650(void)

void FUN_140e1c650(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_38;
  int local_30;
  undefined1 local_28 [32];
  
  if (((param_1 != (longlong *)0x0) && (lVar4 = (**(code **)(*param_1 + 0x148))(), lVar4 != 0)) &&
     (iVar3 = FUN_1428cf800(lVar4), iVar3 != 3)) {
    UWorld::GetPlayerControllerIterator(lVar4,&local_38);
    while( true ) {
      if ((local_30 < 0) || (*(int *)(local_38 + 8) <= local_30)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      lVar4 = FWeakObjectPtr::Get();
      if (lVar4 != 0) {
        lVar5 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (lVar4 = *(longlong *)(lVar4 + 0xc68), lVar4 != 0)) {
          cVar2 = FUN_140e26d60(lVar4,param_2,1);
          if (cVar2 == '\0') {
            uVar6 = FText::FText(local_28);
            FUN_140e1c2e0(lVar4,0,uVar6,0,0);
          }
        }
      }
      local_30 = local_30 + 1;
    }
  }
  return;
}



// FUNCTION 140e1c770 FUN_140e1c770 body=478 status=ok
// SIG undefined FUN_140e1c770(void)

void FUN_140e1c770(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  longlong local_40;
  
  lVar4 = *(longlong *)(param_1 + 0x120);
  local_res10 = param_2;
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0();
  }
  uVar5 = FName::ToString(&local_res10,local_68);
  lVar4 = FUN_1412c3780(uVar5,lVar4);
  if (lVar4 != 0) {
    if (param_3 != '\0') {
      uVar5 = FUN_14129f920(lVar4);
      plVar13 = (longlong *)(param_1 + 0x188);
      local_res8 = uVar5;
      lVar6 = FUN_140e0f460(plVar13,&local_res8);
      if (lVar6 == 0) {
        iVar2 = FUN_14233f450(param_1);
        if (iVar2 == 3) {
          uVar7 = FUN_140e13310(local_58,uVar5,0);
          iVar2 = FUN_140e1f530(plVar13,uVar7);
          if (iVar2 == -1) {
            iVar2 = *(int *)(param_1 + 400);
            *(int *)(param_1 + 400) = iVar2 + 1;
            if (*(int *)(param_1 + 0x194) < iVar2 + 1) {
              TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar13,iVar2);
            }
            FUN_140e13260((longlong)iVar2 * 0x30 + *plVar13,uVar7);
          }
          if (local_40 != 0) {
            FMemory::Free();
          }
          FUN_140e16390(param_1,uVar5);
        }
      }
      else {
        *(undefined1 *)(lVar6 + 0x28) = 0;
      }
    }
    lVar6 = *(longlong *)(param_1 + 0x120);
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(param_1);
    }
    lVar6 = FUN_140e7e6f0(lVar6);
    plVar11 = (longlong *)0x0;
    plVar13 = plVar11;
    if (lVar6 != 0) {
      uVar3 = FUN_140e81420(lVar6);
      plVar13 = (longlong *)(ulonglong)uVar3;
    }
    plVar1 = (longlong *)(param_1 + 0x178);
    iVar2 = *(int *)(param_1 + 0x180);
    plVar8 = (longlong *)*plVar1;
    plVar10 = plVar8 + (longlong)iVar2 * 4;
    plVar9 = plVar11;
    if (plVar8 != plVar10) {
      do {
        plVar9 = plVar8;
        if (*plVar8 == *(longlong *)(lVar4 + 0x78)) break;
        plVar8 = plVar8 + 4;
        plVar9 = plVar11;
      } while (plVar8 != plVar10);
    }
    uVar3 = 1 << ((byte)plVar13 & 0x1f);
    if (plVar9 == (longlong *)0x0) {
      uVar5 = *(undefined8 *)(lVar4 + 0x78);
      *(int *)(param_1 + 0x180) = iVar2 + 1;
      if (*(int *)(param_1 + 0x184) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(plVar1,iVar2);
      }
      puVar12 = (undefined8 *)((longlong)iVar2 * 0x20 + *plVar1);
      *puVar12 = uVar5;
      puVar12[1] = 0;
      puVar12[2] = 0;
      *(uint *)(puVar12 + 3) = uVar3;
    }
    else {
      *(uint *)(plVar9 + 3) = *(uint *)(plVar9 + 3) | uVar3;
    }
  }
  return;
}



// FUNCTION 140e1c950 FUN_140e1c950 body=283 status=ok
// SIG undefined FUN_140e1c950(void)

void FUN_140e1c950(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *local_18;
  int local_10;
  
  if (((param_1 != (longlong *)0x0) && (lVar3 = (**(code **)(*param_1 + 0x148))(), lVar3 != 0)) &&
     (iVar2 = FUN_1428cf800(lVar3), iVar2 != 3)) {
    UWorld::GetPlayerControllerIterator(lVar3,&local_18);
    while( true ) {
      if ((local_10 < 0) || ((int)local_18[1] <= local_10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      lVar4 = FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
      if (lVar4 != 0) {
        lVar5 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (lVar4 = *(longlong *)(lVar4 + 0xc68), lVar4 != 0)) {
          FUN_140e1c770(lVar4,param_2,param_3);
          iVar2 = FUN_1428cf800(lVar3);
          if (iVar2 != 0) {
            FUN_141305e20(lVar4,param_2);
          }
        }
      }
      local_10 = local_10 + 1;
    }
  }
  return;
}



// FUNCTION 140e1ca70 FUN_140e1ca70 body=1142 status=ok
// SIG undefined FUN_140e1ca70(void)

void FUN_140e1ca70(longlong param_1,char param_2)

{
  int *piVar1;
  char *pcVar2;
  byte bVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  DWORD DVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  longlong lVar18;
  ulonglong uVar19;
  int iVar20;
  float fVar21;
  undefined8 local_68;
  longlong local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  lVar4 = DAT_1468701f0;
  if (param_2 != '\0') {
    iVar20 = 0;
    goto LAB_140e1caca;
  }
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar7 = GetCurrentThreadId();
    lVar10 = 1;
    if (DVar7 == DAT_1468c21c0) goto LAB_140e1cac3;
  }
  else {
LAB_140e1cac3:
    lVar10 = 0;
  }
  iVar20 = *(int *)(lVar4 + lVar10 * 4);
LAB_140e1caca:
  uVar16 = 0;
  lVar4 = *(longlong *)(param_1 + 0x118);
  if (lVar4 != 0) {
    lVar10 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (plVar11 = (longlong *)FUN_1422312c0(lVar4), plVar11 != (longlong *)0x0)) {
      lVar10 = FUN_14141f270();
      if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
          lVar10 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        lVar10 = (**(code **)(*plVar11 + 0x148))(plVar11);
        if (*(longlong *)(lVar10 + 400) == 0) {
          uVar17 = *(undefined8 *)(lVar10 + 0x3f8);
        }
        else {
          uVar17 = *(undefined8 *)(*(longlong *)(lVar10 + 400) + 0x90);
        }
        plVar12 = (longlong *)FUN_142dcf390(param_1);
        if ((int)plVar12[1] == 0) {
          FUN_142880530(uVar17,param_1 + 0x290);
          *(undefined8 *)(param_1 + 0x290) = 0;
          *(undefined4 *)(param_1 + 0x288) = 0xffffffff;
        }
        else {
          iVar9 = *(int *)(param_1 + 0x288);
          iVar8 = (int)plVar12[1] + -1;
          if (iVar9 < 0) {
            iVar8 = 0;
          }
          else if (iVar9 < iVar8) {
            iVar8 = iVar9;
          }
          *(int *)(param_1 + 0x288) = iVar8;
          if (DAT_146b33f38 == 0) {
            FUN_142d7ebe0();
          }
          uVar19 = uVar16;
          if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
            uVar19 = *(ulonglong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x5e0);
          }
          if (uVar19 == 0) {
            FUN_142880530(uVar17,param_1 + 0x290);
            *(undefined8 *)(param_1 + 0x290) = 0;
            *(undefined4 *)(param_1 + 0x288) = 0xffffffff;
          }
          else {
            iVar9 = *(int *)(param_1 + 0x288);
            iVar8 = (int)plVar12[1];
            if (iVar9 < iVar8) {
              do {
                if ((param_2 == '\0') && (iVar20 <= (int)uVar16)) break;
                lVar15 = (longlong)iVar9 * 0x80 + *plVar12;
                lVar10 = FUN_142dcdb70(lVar15);
                if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0xd8) != 0)) {
                  iVar9 = FUN_140e7f650(uVar19);
                  lVar18 = (longlong)iVar9;
                  if (iVar9 != -1) {
                    if (*(int *)(lVar15 + 0x3c) < 1) {
                      if (0 < *(int *)(lVar15 + 0x38)) {
                        pcVar2 = (char *)(*(longlong *)(param_1 + 0x2c8) + lVar18);
                        *pcVar2 = *pcVar2 + '\x01';
                      }
                    }
                    else {
                      pcVar2 = (char *)(*(longlong *)(param_1 + 0x2c8) + lVar18);
                      *pcVar2 = *pcVar2 + (char)*(int *)(lVar15 + 0x3c);
                    }
                    if (*(int *)(lVar10 + 0xa8) < 1) {
                      lVar15 = *(longlong *)(param_1 + 0x2b8);
                      if (*(int *)(lVar10 + 0xc0) < 1) {
                        *(char *)(lVar18 + lVar15) = *(char *)(lVar18 + lVar15) + '\x01';
                      }
                      else {
                        *(char *)(lVar18 + lVar15) =
                             (char)*(int *)(lVar10 + 0xc0) + *(char *)(lVar18 + lVar15);
                      }
                    }
                    else {
                      pcVar2 = (char *)(*(longlong *)(param_1 + 0x2b8) + lVar18);
                      *pcVar2 = *pcVar2 + (char)*(int *)(lVar10 + 0xa8);
                    }
                  }
                }
                uVar16 = (ulonglong)((int)uVar16 + 1);
                iVar9 = *(int *)(param_1 + 0x288) + 1;
                *(int *)(param_1 + 0x288) = iVar9;
                iVar8 = (int)plVar12[1];
              } while (iVar9 < iVar8);
              if (iVar9 < iVar8) {
                return;
              }
            }
            lVar15 = 0;
            lVar10 = 8;
            if (*(int *)(param_1 + 0x2b0) != 8) {
              *(undefined4 *)(param_1 + 0x2b0) = 0;
              if (*(int *)(param_1 + 0x2b4) < 8) {
                TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x2a8,8);
              }
              TArray<unsigned_char,TSizedDefaultAllocator<32>_>::AddZeroed(param_1 + 0x2a8,8);
            }
            do {
              bVar3 = *(byte *)(lVar15 + *(longlong *)(param_1 + 0x2b8));
              if (bVar3 != 0) {
                fVar21 = ((float)*(byte *)(*(longlong *)(param_1 + 0x2c8) + lVar15) / (float)bVar3)
                         * 100.0;
                if (0.0 <= fVar21) {
                  if (100.0 <= fVar21) {
                    fVar21 = 100.0;
                  }
                }
                else {
                  fVar21 = 0.0;
                }
                *(char *)(lVar15 + *(longlong *)(param_1 + 0x2a8)) = (char)(int)fVar21;
              }
              lVar15 = lVar15 + 1;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
            puVar13 = (undefined8 *)FUN_142dcf3a0(lVar4,local_58);
            local_68 = *puVar13;
            local_60 = puVar13[1];
            if (local_60 != 0) {
              LOCK();
              *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
              UNLOCK();
            }
            uVar14 = FUN_140bb7440(plVar11);
            FUN_140d9f870(uVar14,&local_68,6);
            if (local_50 != (longlong *)0x0) {
              LOCK();
              plVar12 = local_50 + 1;
              lVar4 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*local_50)(local_50);
                LOCK();
                piVar1 = (int *)((longlong)local_50 + 0xc);
                iVar20 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar20 == 1) {
                  (**(code **)(*local_50 + 8))(local_50,1);
                }
              }
            }
            FUN_142880530(uVar17,param_1 + 0x290);
            *(undefined8 *)(param_1 + 0x290) = 0;
            *(undefined4 *)(param_1 + 0x288) = 0xffffffff;
            if (*(char *)(param_1 + 0x2d8) != '\0') {
              *(undefined1 *)(param_1 + 0x2d8) = 0;
              FUN_140e391f0(param_1,plVar11);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e1cef0 FUN_140e1cef0 body=1104 status=ok
// SIG undefined FUN_140e1cef0(void)

undefined8 FUN_140e1cef0(char *param_1,longlong param_2)

{
  longlong *plVar1;
  char *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  char *pcVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar22;
  ulonglong local_res18;
  undefined1 local_res20 [8];
  undefined1 local_b8 [32];
  longlong local_98;
  longlong local_88;
  longlong local_78;
  longlong local_68;
  ulonglong uVar21;
  
  if (*param_1 == '\0') {
    return 1;
  }
  plVar1 = *(longlong **)(param_2 + 0x848);
  if (plVar1 != (longlong *)0x0) {
    lVar6 = FUN_1413f82e0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar7 = FUN_1414aa4c0();
      lVar6 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar7);
      uVar21 = 0;
      iVar20 = 0;
      uVar8 = uVar21;
      if (lVar6 != 0) {
        uVar8 = (ulonglong)*(uint *)(lVar6 + 0x1d8);
      }
      if ((*(int *)(param_1 + 4) <= (int)uVar8) && (lVar6 = FUN_140c453a0(plVar1), lVar6 != 0)) {
        lVar18 = *(longlong *)(param_1 + 8);
        lVar22 = (longlong)*(int *)(param_1 + 0x10) * 0x38 + lVar18;
        for (; lVar18 != lVar22; lVar18 = lVar18 + 0x38) {
          lVar9 = FUN_140d3b810(lVar18);
          if (((lVar9 != 0) && (*(longlong *)(lVar9 + 0x50) != 0)) &&
             (*(char *)(*(longlong *)(lVar9 + 0x50) + 0xad) != '\0')) {
            plVar10 = (longlong *)FUN_1418fce90(lVar6);
            lVar17 = *plVar10;
            lVar19 = (longlong)(int)plVar10[1] * 0xf8 + lVar17;
            if (lVar17 == lVar19) {
              return 0;
            }
            while ((*(longlong *)(lVar17 + 8) == 0 ||
                   (lVar11 = FArchive::operator<<(lVar17),
                   *(longlong *)(*(longlong *)(lVar11 + 8) + 0x30) != lVar9))) {
              lVar17 = lVar17 + 0xf8;
              if (lVar17 == lVar19) {
                return 0;
              }
            }
          }
        }
        AGFireballProjectile::GetPrivateStaticClass();
        lVar6 = (**(code **)(*plVar1 + 0x628))(plVar1);
        if (lVar6 != 0) {
          lVar18 = *(longlong *)(param_1 + 0x30);
          lVar22 = (longlong)*(int *)(param_1 + 0x38) * 0x50 + lVar18;
          for (; lVar18 != lVar22; lVar18 = lVar18 + 0x50) {
            lVar9 = FUN_140d3bb40(lVar18);
            FUN_140d3a450(lVar18);
            if (((lVar9 != 0) && (local_res18 != 0)) &&
               (uVar12 = FUN_14144bcb0(), uVar8 = local_res18, local_res18 != 0)) {
LAB_140e1d0d8:
              if (uVar8 != uVar12) goto code_r0x000140e1d0dd;
              puVar13 = (ulonglong *)FUN_1409ab4d0(lVar6,local_res20,lVar9);
              uVar8 = uVar21;
              if (*puVar13 != 0) {
                uVar14 = FUN_14144bcb0();
                for (uVar12 = *puVar13;
                    (uVar8 = uVar21, uVar12 != 0 && (uVar8 = *puVar13, uVar12 != uVar14));
                    uVar12 = *(ulonglong *)(uVar12 + 0x30)) {
                }
              }
              uVar12 = uVar21;
              if (local_res18 != 0) {
                uVar15 = FUN_14144bcb0();
                for (uVar14 = local_res18;
                    (uVar12 = uVar21, uVar14 != 0 && (uVar12 = local_res18, uVar14 != uVar15));
                    uVar14 = *(ulonglong *)(uVar14 + 0x30)) {
                }
              }
              if (uVar8 != uVar12) {
                return 0;
              }
            }
LAB_140e1d15d:
          }
          lVar18 = *(longlong *)(param_1 + 0x40);
          lVar22 = (longlong)*(int *)(param_1 + 0x48) * 0x78 + lVar18;
          for (; lVar18 != lVar22; lVar18 = lVar18 + 0x78) {
            FUN_140d3a4e0(lVar18);
            lVar9 = FUN_140d3ba80(lVar18);
            lVar17 = FUN_140d3a610(lVar18);
            if (param_1 != (char *)0x0) {
              pcVar16 = (char *)UUGLoadoutBarUW::GetPrivateStaticClass();
              for (pcVar2 = param_1; pcVar2 != (char *)0x0; pcVar2 = *(char **)(pcVar2 + 0x30)) {
                if (pcVar2 == pcVar16) {
                  if (((lVar17 != 0) && (lVar9 != 0)) &&
                     (cVar4 = FUN_1409ae0e0(lVar6,param_1,lVar17,lVar9), cVar4 == '\0')) {
                    return 0;
                  }
                  break;
                }
              }
            }
          }
          lVar6 = FUN_140c430a0(plVar1);
          if (lVar6 != 0) {
            lVar18 = *(longlong *)(param_1 + 0x60);
            lVar22 = (longlong)*(int *)(param_1 + 0x68) * 0x80 + lVar18;
            for (; lVar18 != lVar22; lVar18 = lVar18 + 0x80) {
              _guard_xfg_dispatch_icall_nop(local_b8,0,0x68);
              FUN_142ff9df0(lVar18);
              cVar4 = FUN_143003610(local_b8);
              if (cVar4 != '\0') {
                uVar21 = (ulonglong)((int)uVar21 + 1);
              }
              iVar20 = (int)uVar21;
              if (local_68 != 0) {
                FMemory::Free();
              }
              if (local_78 != 0) {
                FMemory::Free();
              }
              if (local_88 != 0) {
                FMemory::Free();
              }
              if (local_98 != 0) {
                FMemory::Free();
              }
            }
            iVar5 = FUN_142ffcbe0(lVar6);
            if (iVar20 <= iVar5) {
              lVar6 = *(longlong *)(param_2 + 0x848);
              if (lVar6 != 0) {
                lVar18 = FUN_1413ffe00();
                if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar18 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar18 + 0x90) * 8) != lVar18 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if ((bVar3) && (*(int *)(lVar6 + 0x2a08) < *(int *)(param_1 + 0x78))) {
                  return 0;
                }
              }
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
code_r0x000140e1d0dd:
  uVar8 = *(ulonglong *)(uVar8 + 0x30);
  if (uVar8 == 0) goto LAB_140e1d15d;
  goto LAB_140e1d0d8;
}



// FUNCTION 140e1d340 FUN_140e1d340 body=1524 status=ok
// SIG undefined FUN_140e1d340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e1d340(longlong param_1)

{
  int *piVar1;
  float fVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  int *piVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  longlong *plVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_338 [32];
  float *local_318;
  longlong local_310;
  undefined *local_308;
  undefined1 *local_300;
  undefined8 local_2f8;
  longlong *local_2e8;
  undefined1 local_2e0;
  longlong local_2d8;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  undefined8 local_29c;
  undefined4 local_294;
  float local_288;
  byte local_278 [12];
  undefined4 local_26c;
  undefined1 local_20c [36];
  undefined1 local_1e8 [256];
  undefined1 *local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  local_2e0 = *(undefined1 *)(param_1 + 0x90);
  *(undefined1 *)(param_1 + 0x90) = 1;
  FRotator::Vector(param_1 + 0xac,&local_2d0);
  fVar2 = *(float *)(param_1 + 0x9c);
  lVar8 = 0;
  plVar14 = *(longlong **)(param_1 + 0x140);
  fVar24 = 1.1754944e-38;
  local_2b0 = local_2d0 * fVar2;
  local_2ac = local_2cc * fVar2;
  plVar10 = plVar14 + (longlong)*(int *)(param_1 + 0x148) * 2;
  local_2d8 = 0;
  local_2a8 = local_2c8 * fVar2;
  local_2e8 = plVar10;
  if (plVar14 != plVar10) {
    do {
      plVar9 = (longlong *)0x0;
      if ((*plVar14 == 0) || (plVar10 = local_2e8, (longlong *)plVar14[1] == (longlong *)0x0)) {
        *(undefined1 *)(param_1 + 0x150) = 1;
      }
      else {
        lVar5 = (**(code **)(*(longlong *)plVar14[1] + 0x98))();
        plVar10 = local_2e8;
        if ((((lVar5 != 0) && ((*(uint *)(lVar5 + 0x840) >> 3 & 1) == 0)) &&
            (lVar5 = *(longlong *)(lVar5 + 0x118), lVar5 != 0)) &&
           ((*(byte *)(lVar5 + 0x90) & 0x20) == 0)) {
          if (*plVar14 != 0) {
            plVar9 = (longlong *)plVar14[1];
          }
          lVar6 = (**(code **)(*plVar9 + 0xa0))();
          plVar10 = local_2e8;
          lVar8 = local_2d8;
          if (((lVar6 != 0) && (*(char *)(lVar6 + 0x26a) != '\0')) &&
             ((*(char *)(lVar6 + 0x269) != '\0' &&
              (cVar4 = FUN_1407c3030(lVar6 + 0x3a0), plVar10 = local_2e8, lVar8 = local_2d8,
              cVar4 == '\0')))) {
            lVar3 = *(longlong *)(lVar5 + 0x168);
            if (lVar3 == 0) {
              local_294 = DAT_1468b5d98;
              puVar7 = &local_29c;
              local_29c = _DAT_1468b5d90;
            }
            else {
              puVar7 = (undefined8 *)&local_2c0;
              local_2c0 = *(undefined4 *)(lVar3 + 0x220);
              local_2b8 = *(undefined4 *)(lVar3 + 0x228);
              uStack_2bc = *(undefined4 *)(lVar3 + 0x224);
            }
            local_288 = *(float *)(puVar7 + 1);
            fVar20 = (float)((ulonglong)*puVar7 >> 0x20) - *(float *)(param_1 + 0xa4);
            fVar22 = (float)*puVar7 - *(float *)(param_1 + 0xa0);
            fVar23 = local_288 - *(float *)(param_1 + 0xa8);
            fVar21 = fVar20 * fVar20 + fVar22 * fVar22;
            fVar17 = fVar23 * fVar23 + fVar21;
            fVar16 = fVar17 / (fVar2 * fVar2);
            if (fVar16 <= 0.0) {
              fVar16 = 0.0;
            }
            if (0.0 < 1.0 - fVar16) {
              auVar19 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
              fVar18 = auVar19._0_4_;
              fVar18 = fVar18 + fVar18 * (0.5 - fVar17 * 0.5 * fVar18 * fVar18);
              fVar18 = fVar18 + fVar18 * (0.5 - fVar17 * 0.5 * fVar18 * fVar18);
              fVar17 = local_2d0 * fVar22 * fVar18 + local_2cc * fVar20 * fVar18 +
                       local_2c8 * fVar23 * fVar18;
              if (10000.0 <= fVar21) {
                bVar15 = fVar17 < 0.707;
              }
              else {
                bVar15 = fVar17 < 0.0;
              }
              if (!bVar15) {
                piVar11 = *(int **)(param_1 + 0x130);
                if (*(int **)(param_1 + 0x130) == (int *)0x0) {
                  piVar11 = (int *)(param_1 + 0x120);
                }
                piVar1 = piVar11 + *(int *)(param_1 + 0x138);
                for (; piVar11 != piVar1; piVar11 = piVar11 + 1) {
                  if (*piVar11 == *(int *)(lVar5 + 0xc)) goto LAB_140e1d833;
                }
                local_e8 = (undefined1 *)0x0;
                local_e0 = 0;
                FUN_140e10660(lVar6,local_1e8);
                local_300 = local_1e8;
                local_2f8 = 0;
                local_310 = *(longlong *)(param_1 + 0xb8);
                local_308 = (undefined *)CONCAT44(local_308._4_4_,*(undefined4 *)(param_1 + 0x98));
                local_318 = &local_2b0;
                fVar17 = (float)FUN_140e1a280(param_1,lVar5,lVar6,param_1 + 0xa0);
                if (0.0 < fVar17) {
                  puVar12 = local_1e8;
                  if (local_e8 != (undefined1 *)0x0) {
                    puVar12 = local_e8;
                  }
                  puVar13 = puVar12 + (longlong)(int)local_e0 * 0x20;
                  if (puVar12 != puVar13) {
                    do {
                      _guard_xfg_dispatch_icall_nop(local_278,0,0x90);
                      local_308 = &DAT_146aefe68;
                      local_318 = (float *)CONCAT44(local_318._4_4_,3);
                      local_26c = 0x3f800000;
                      local_310 = param_1 + 200;
                      UWorld::LineTraceSingleByChannel
                                (*(undefined8 *)(param_1 + 0xc0),local_278,param_1 + 0xa0,puVar12);
                      if (((local_278[0] & 1) == 0) ||
                         ((lVar8 = FWeakObjectPtr::Get(local_20c), lVar8 != 0 && (lVar8 == lVar5))))
                      {
                        fVar17 = fVar17 + (1.0 - fVar16);
                        if (fVar17 <= fVar24) {
                          lVar5 = local_2d8;
                          fVar17 = fVar24;
                        }
                        fVar24 = fVar17;
                        plVar10 = local_2e8;
                        lVar8 = lVar5;
                        local_2d8 = lVar5;
                        if (local_e8 != (undefined1 *)0x0) {
                          FMemory::Free();
                          plVar10 = local_2e8;
                          local_2d8 = lVar5;
                        }
                        goto LAB_140e1d833;
                      }
                      puVar12 = puVar12 + 0x20;
                    } while (puVar12 != puVar13);
                  }
                  plVar10 = local_2e8;
                  lVar8 = local_2d8;
                  if (local_e8 != (undefined1 *)0x0) {
                    FMemory::Free();
                    plVar10 = local_2e8;
                    lVar8 = local_2d8;
                  }
                }
                else {
                  plVar10 = local_2e8;
                  lVar8 = local_2d8;
                  if (local_e8 != (undefined1 *)0x0) {
                    FMemory::Free();
                    plVar10 = local_2e8;
                    lVar8 = local_2d8;
                  }
                }
              }
            }
          }
        }
      }
LAB_140e1d833:
      plVar14 = plVar14 + 2;
    } while (plVar14 != plVar10);
  }
  FWeakObjectPtr::operator=(param_1 + 0x88,lVar8);
  *(undefined1 *)(param_1 + 0x90) = local_2e0;
  return;
}



// FUNCTION 140e1d940 FUN_140e1d940 body=12 status=ok
// SIG undefined FUN_140e1d940(void)

void FUN_140e1d940(longlong param_1)

{
  FUN_140e66930(param_1 + 0x26f0);
  return;
}



// FUNCTION 140e1d950 FUN_140e1d950 body=148 status=ok
// SIG undefined FUN_140e1d950(void)

undefined8 FUN_140e1d950(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  char *pcVar3;
  undefined1 local_res10 [24];
  
  if (param_2 != 0) {
    lVar2 = FUN_1413f2810();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(char *)(param_2 + 0x60) != '\0')) {
      lVar2 = *(longlong *)(param_1 + 0x120);
      if (lVar2 == 0) {
        lVar2 = FUN_1423407b0(param_1);
      }
      pcVar3 = (char *)FUN_140cb6000(local_res10,lVar2);
      if (*(char *)(param_2 + 0x60) != *pcVar3) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140e1d9f0 FUN_140e1d9f0 body=156 status=ok
// SIG undefined FUN_140e1d9f0(void)

void FUN_140e1d9f0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)*param_1;
  for (iVar2 = *(int *)(param_1 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
    if (plVar1[0xc] != 0) {
      FMemory::Free();
    }
    if (plVar1[10] != 0) {
      FMemory::Free();
    }
    if (plVar1[8] != 0) {
      FMemory::Free();
    }
    if (plVar1[6] != 0) {
      FMemory::Free();
    }
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 0x10;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 140e1da90 FUN_140e1da90 body=31 status=ok
// SIG undefined FUN_140e1da90(void)

void FUN_140e1da90(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x2cec) = param_2;
  *(undefined4 *)(param_1 + 0x2cf0) = param_3;
  *(undefined4 *)(param_1 + 0x2cf4) = param_4;
  *(undefined1 *)(param_1 + 0x2ce9) = 1;
  return;
}



// FUNCTION 140e1dab0 FUN_140e1dab0 body=149 status=ok
// SIG undefined FUN_140e1dab0(void)

void FUN_140e1dab0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if ((*(longlong *)(lVar1 + 400) != 0) && (*(longlong *)(*(longlong *)(lVar1 + 400) + 0xa0) != 0)
       ) {
      lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
      uVar2 = 0;
      if (*(longlong *)(lVar1 + 400) != 0) {
        uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0xa0);
      }
      FUN_142880530(uVar2,param_1 + 0xca);
      param_1[0xca] = 0;
    }
  }
  FUN_1430716e0(param_1,param_2);
  return;
}



// FUNCTION 140e1db50 FUN_140e1db50 body=372 status=ok
// SIG undefined FUN_140e1db50(void)

void FUN_140e1db50(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  longlong local_28 [2];
  
  FUN_140c3f320();
  plVar3 = param_1 + 0x54f;
  if ((*plVar3 != 0) && (param_1[0x550] != 0)) {
    piVar1 = (int *)(param_1[0x550] + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      plVar2 = (longlong *)param_1[0x550];
      plVar7 = (longlong *)0x0;
      plVar8 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar4 = (int)plVar2[1];
        bVar9 = iVar4 == 0;
        if (bVar9) {
          *(int *)(plVar2 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (plVar7 = (longlong *)0x0, plVar8 = (longlong *)0x0, !bVar9) {
          LOCK();
          bVar9 = iVar4 == (int)plVar2[1];
          if (bVar9) {
            *(int *)(plVar2 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar9) {
            plVar8 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar7 = (longlong *)*plVar3;
            }
            break;
          }
          LOCK();
          iVar4 = (int)plVar2[1];
          bVar9 = iVar4 == 0;
          if (bVar9) {
            *(int *)(plVar2 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
      }
      FUN_140483870(plVar7 + 0xb,param_1);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar8 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      if (plVar3 != local_28) {
        *plVar3 = 0;
        plVar3 = (longlong *)param_1[0x550];
        param_1[0x550] = 0;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
  }
  FUN_140e58320(param_1 + 0x4de);
  if (param_1[0x58e] != 0) {
    FUN_140a77c90(param_1,0,*(undefined4 *)(param_1[0x58e] + 0x1918));
  }
  if ((char)param_1[0x25] == '\x03') {
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar6 = FUN_140aab5e0(uVar5);
    if (lVar6 != 0) {
      FUN_140ab5240(lVar6,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140e1dcd0 FUN_140e1dcd0 body=49 status=ok
// SIG undefined FUN_140e1dcd0(void)

void FUN_140e1dcd0(longlong param_1)

{
  longlong *plVar1;
  
  FUN_14233a670();
  plVar1 = *(longlong **)(param_1 + 0x3c8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140e1dcf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x6d0))(plVar1,0);
    return;
  }
  return;
}



// FUNCTION 140e1dd10 FUN_140e1dd10 body=254 status=ok
// SIG undefined FUN_140e1dd10(void)

void FUN_140e1dd10(longlong param_1,undefined4 param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 local_res8;
  
  pwVar3 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::BroadcastChallengeUpdateFriendEvent",L"::");
  pwVar2 = (wchar_t *)0x0;
  while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
    pwVar2 = pwVar1;
  }
  FName::FName(&local_res8,pwVar2 + 2,1);
  TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_1 + 0x198,param_1,local_res8);
  pwVar3 = _guard_xfg_dispatch_icall_nop
                     (L"&ThisClass::BroadcastChallengeCompletedToFriendSystems",L"::");
  pwVar2 = (wchar_t *)0x0;
  while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
    pwVar2 = pwVar1;
  }
  FName::FName(&local_res8,pwVar2 + 2,1);
  TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_1 + 0x1a8,param_1,local_res8);
  FUN_14233a670(param_1,param_2);
  return;
}



// FUNCTION 140e1de10 FUN_140e1de10 body=8 status=ok
// SIG undefined FUN_140e1de10(void)

void FUN_140e1de10(longlong param_1)

{
  *(byte *)(param_1 + 0x24d1) = *(byte *)(param_1 + 0x24d1) | 4;
  return;
}



// FUNCTION 140e1de20 FUN_140e1de20 body=289 status=ok
// SIG undefined FUN_140e1de20(void)

void FUN_140e1de20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [24];
  
  FText::FText(local_38);
  cVar6 = FUN_140e1aa00(param_1,local_38);
  if (cVar6 == '\0') {
    cVar6 = FText::IsEmpty(local_38);
    if ((cVar6 == '\0') && (lVar5 = *(longlong *)(param_1 + 0x9c0), lVar5 != 0)) {
      lVar7 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        lVar7 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          uVar8 = FText::FText(local_20,local_38);
          FUN_140cf8780(lVar5,uVar8);
        }
      }
    }
  }
  else {
    FUN_141400b70(param_1);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return;
}



// FUNCTION 140e1df50 FUN_140e1df50 body=340 status=ok
// SIG undefined FUN_140e1df50(void)

void FUN_140e1df50(longlong *param_1,undefined1 param_2,longlong param_3,undefined1 param_4,
                  char param_5)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_3 == 0) {
    param_3 = DAT_146870860;
  }
  if (param_3 != DAT_146870218) {
    cVar3 = FUN_140e53910(param_1 + 0x4de);
    if (cVar3 != '\0') {
      FUN_140e1f5c0(param_1);
    }
  }
  if ((param_1[0x4e3] != 0) && (*(longlong *)(param_1[0x4e3] + 0x7f8) == DAT_146b479b0)) {
    FUN_140e5ac50(param_1 + 0x4de);
  }
  FUN_140e49a70(param_1 + 0x4de,param_2,param_4,param_3);
  lVar4 = (**(code **)(*param_1 + 0x670))(param_1);
  if (lVar4 != 0) {
    lVar5 = FUN_14145f370();
    iVar1 = *(int *)(lVar5 + 0x90);
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < iVar1) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)iVar1 * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_1414602d0(lVar4,CONCAT71((int7)(int3)((uint)iVar1 >> 8),2));
    }
  }
  if (param_5 != '\0') {
    cVar3 = FUN_140e66930(param_1 + 0x4de);
    if (cVar3 != '\0') {
      cVar3 = FUN_1406589c0(param_1 + 0x4de);
      if (cVar3 != '\0') {
        if ((char)param_1[0x25] == '\x03') {
          *(undefined1 *)(param_1 + 0x556) = 1;
          *(undefined1 *)((longlong)param_1 + 0x2ab1) = param_2;
        }
        else {
          lVar4 = (**(code **)(*param_1 + 0x4a8))(param_1);
          if (lVar4 != 0) {
            FUN_1414009a0(param_1,param_2);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e1e0b0 FUN_140e1e0b0 body=1208 status=ok
// SIG undefined FUN_140e1e0b0(void)

void FUN_140e1e0b0(longlong *param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int local_res8 [2];
  ulonglong in_stack_ffffffffffffff58;
  undefined4 uVar14;
  ulonglong uVar15;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68 [32];
  longlong local_48;
  
  if (param_2 != 0) {
    piVar13 = *(int **)(param_2 + 0xd8);
    piVar9 = piVar13 + (longlong)*(int *)(param_2 + 0xe0) * 0x16;
    for (; piVar13 != piVar9; piVar13 = piVar13 + 0x16) {
      lVar3 = FUN_140d3bae0(piVar13);
      if ((lVar3 != 0) && (lVar3 = FUN_140d3bae0(piVar13), lVar3 != 0)) {
        uVar10 = 1;
        if (*(char *)(lVar3 + 0x39) == '\0') {
          uVar10 = (undefined1)piVar13[1];
        }
        uVar4 = FUN_140c428a0(param_1);
        FUN_140e7ac10(uVar4,lVar3,uVar10);
        iVar12 = *piVar13;
        if ((iVar12 < 0) || ((int)param_4[1] <= iVar12)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (lVar3 = *param_4, *(int *)(lVar3 + (longlong)iVar12 * 4) != -1)) {
          uVar4 = FUN_140d3bae0(piVar13);
          FUN_1413f8950(param_1,uVar4,lVar3 + (longlong)iVar12 * 4,0);
          plVar5 = (longlong *)FUN_140d3bda0(piVar13);
          if ((plVar5 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar5 + 0x2a8))(plVar5,param_3), cVar2 == '\0')) {
            uVar4 = FUN_140d3bda0(piVar13);
            uVar6 = FUN_140d3bae0(piVar13);
            FUN_1413f8a40(param_1,uVar6,uVar4);
          }
        }
      }
    }
    lVar3 = (**(code **)(param_1[0x1b0] + 0x18))();
    if (lVar3 != 0) {
      uVar11 = 0;
      if (0 < *(int *)(param_2 + 0xf0)) {
        do {
          iVar12 = *(int *)(*(longlong *)(param_2 + 0xe8) + (longlong)(int)uVar11 * 4);
          if ((iVar12 < 0) || ((int)param_4[1] <= iVar12)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (*(int *)((longlong)iVar12 * 4 + *param_4) != -1)) {
            if (((int)uVar11 < 0) || ((int)param_1[0x2a4] <= (int)uVar11)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              FUN_142fde510(local_68);
              FUN_142ffa4f0(lVar3,*param_4 + (longlong)iVar12 * 4,local_68);
              lVar8 = local_48;
              if (local_48 != 0) {
                lVar7 = FUN_1430b3b80();
                if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if ((bVar1) && (cVar2 = FUN_140ab3a60(lVar8,param_3), cVar2 == '\0')) {
                  uVar4 = FUN_140c415c0(param_1,uVar11 & 0xff);
                  in_stack_ffffffffffffff58 = in_stack_ffffffffffffff58 & 0xffffffffffffff00;
                  FUN_140c57820(param_1,lVar8,uVar4,0,in_stack_ffffffffffffff58);
                }
              }
            }
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < *(int *)(param_2 + 0xf0));
      }
      cVar2 = FWebMMovieStreamer::IsLastMovieInPlaylist(param_2);
      if (cVar2 != '\0') {
        lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar8 = *(longlong *)(lVar8 + 0x140);
        if (lVar8 != 0) {
          lVar7 = FUN_141425c60();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (*(longlong *)(lVar8 + 0x5e0) != 0)) {
            uVar15 = 0;
            uVar14 = 0;
            local_78 = 0;
            local_70 = 0;
            FUN_143013fe0(&local_78,*(longlong *)(lVar8 + 0x5e0),1,param_1,0,0,0,0);
            lVar8 = local_78;
            if (0 < (int)local_70) {
              uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
              lVar8 = FUN_14301a0d0(uVar4,lVar8,0);
              if (lVar8 != 0) {
                lVar7 = FUN_1430b3b80();
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
                  uVar4 = FUN_140c46b40(param_1);
                  FUN_142fe3d60(lVar3,local_res8,uVar4,lVar8,CONCAT44(uVar14,1),0,
                                uVar15 & 0xffffffffffffff00,1,0,0);
                  if (local_res8[0] != -1) {
                    uVar4 = FUN_140c46b40(param_1);
                    uVar6 = FUN_140c428a0(param_1);
                    FUN_140e7b630(uVar6,uVar4,lVar8,1,1);
                  }
                }
              }
            }
            if ((int)local_70 != 0) {
              plVar5 = (longlong *)(local_78 + 0x38);
              iVar12 = (int)local_70;
              do {
                if (plVar5[2] != 0) {
                  FMemory::Free();
                }
                if (*plVar5 != 0) {
                  FMemory::Free();
                }
                TArray<FNamedInterfaceDef,FDefaultAllocator>::
                ~TArray<FNamedInterfaceDef,FDefaultAllocator>(plVar5 + -3);
                plVar5 = plVar5 + 0xc;
                iVar12 = iVar12 + -1;
              } while (iVar12 != 0);
            }
            if (local_78 != 0) {
              FMemory::Free();
            }
          }
        }
      }
    }
  }
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x140), lVar3 != 0)) {
    lVar8 = FUN_14131eaa0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_140acf4d0(lVar3,param_1);
    }
  }
  return;
}



// FUNCTION 140e1e570 FUN_140e1e570 body=215 status=ok
// SIG undefined FUN_140e1e570(void)

ulonglong FUN_140e1e570(longlong param_1,longlong *param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint7 uVar6;
  ulonglong uVar5;
  undefined4 extraout_var;
  
  if (param_2 != (longlong *)0x0) {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar3 = (**(code **)(*param_2 + 0x670))(param_2);
      if (lVar3 != 0) {
        lVar4 = FUN_14145f370();
        uVar6 = (uint7)((ulonglong)(lVar4 + 0x88) >> 8);
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          uVar5 = (ulonglong)uVar6 << 8;
        }
        else {
          uVar5 = CONCAT71(uVar6,1);
        }
        if (((char)uVar5 != '\0') && (*(char *)(lVar3 + 0x1910) == '\0')) goto LAB_140e1e62d;
      }
    }
  }
  iVar2 = rand();
  uVar5 = CONCAT44(extraout_var,iVar2);
  if (*(float *)(param_1 + 0x88) <= (float)iVar2 * 3.051851e-05 &&
      (float)iVar2 * 3.051851e-05 != *(float *)(param_1 + 0x88)) {
    return uVar5 & 0xffffffffffffff00;
  }
LAB_140e1e62d:
  return CONCAT71((int7)(uVar5 >> 8),1);
}



// FUNCTION 140e1e650 FUN_140e1e650 body=118 status=ok
// SIG undefined FUN_140e1e650(void)

undefined8 FUN_140e1e650(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = FUN_141499e60();
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
      cVar2 = FUN_14126f800(param_2);
      if (cVar2 == *(char *)(param_1 + 0x88)) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140e1e6d0 FUN_140e1e6d0 body=205 status=ok
// SIG undefined FUN_140e1e6d0(void)

ulonglong FUN_140e1e6d0(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint7 uVar5;
  
  if ((*(longlong *)(param_1 + 0x88) != 0) && (param_2 != (longlong *)0x0)) {
    lVar2 = FUN_1428dfc70();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(param_2[2] + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(param_2[2] + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar3 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      lVar2 = (**(code **)(*param_2 + 0x670))(param_2);
      in_RAX = 0;
      if (lVar2 != 0) {
        lVar4 = FUN_14145f370();
        uVar5 = (uint7)((ulonglong)(lVar4 + 0x88) >> 8);
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          in_RAX = (ulonglong)uVar5 << 8;
        }
        else {
          in_RAX = CONCAT71(uVar5,1);
        }
        if (((char)in_RAX != '\0') &&
           (in_RAX = *(ulonglong *)(param_1 + 0x88), *(ulonglong *)(lVar2 + 0xa58) == in_RAX)) {
          return CONCAT71((int7)(in_RAX >> 8),1);
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140e1e7a0 FUN_140e1e7a0 body=227 status=ok
// SIG undefined FUN_140e1e7a0(void)

void FUN_140e1e7a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  plVar1 = *(longlong **)(param_2 + 0x858);
  if (plVar1 != (longlong *)0x0) {
    lVar4 = FUN_1430b3b80();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar3 = (**(code **)(*plVar1 + 0x858))(plVar1);
      lVar4 = FUN_14309b5c0(plVar1,uVar3);
      if (lVar4 != 0) {
        lVar5 = FUN_1414193b0();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (*(char *)(lVar4 + 0x131) != '\0')) {
          local_18 = *(undefined4 *)(lVar4 + 0x90);
          uStack_14 = *(undefined4 *)(lVar4 + 0x94);
          uStack_10 = *(undefined4 *)(lVar4 + 0x98);
          uStack_c = *(undefined4 *)(lVar4 + 0x9c);
          FUN_14260ee50(param_2,*(undefined8 *)(param_1 + 0x28),&local_18);
        }
      }
    }
  }
  return;
}



// FUNCTION 140e1e8a0 FUN_140e1e8a0 body=259 status=ok
// SIG undefined FUN_140e1e8a0(void)

void FUN_140e1e8a0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar5 = FWeakObjectPtr::Get(param_1 + 8);
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x240) == '\0')) {
    lVar6 = FUN_140e814c0(lVar5);
    if ((lVar6 != 0) &&
       (plVar7 = (longlong *)FUN_1409ab480(lVar6,local_res8,*(undefined8 *)(lVar5 + 0x288)),
       *plVar7 != 0)) {
      lVar8 = FUN_14144bcb0();
      lVar6 = *plVar7;
      for (lVar3 = lVar6; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
        if (lVar3 == lVar8) goto LAB_140e1e917;
      }
    }
    lVar6 = 0;
LAB_140e1e917:
    lVar6 = FUN_140e20840(lVar5,lVar6);
    if ((((lVar6 != 0) && (*(longlong *)(lVar5 + 0x218) != 0)) &&
        (lVar3 = *(longlong *)(*(longlong *)(lVar5 + 0x218) + 0x920), lVar3 != 0)) &&
       ((cVar4 = FUN_142c736c0(lVar3,*(undefined8 *)(lVar6 + 0x40)), cVar4 == '\0' &&
        (FUN_140e8b4b0(lVar5,local_18,*(undefined8 *)(lVar6 + 0x40),0), local_10 != (longlong *)0x0)
        ))) {
      LOCK();
      plVar7 = local_10 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  }
  return;
}



// FUNCTION 140e1e9b0 FUN_140e1e9b0 body=43 status=ok
// SIG undefined FUN_140e1e9b0(void)

void FUN_140e1e9b0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1 + 8);
    *(undefined1 *)(lVar1 + 0x2670) = 0;
  }
  return;
}



// FUNCTION 140e1ea00 FUN_140e1ea00 body=181 status=ok
// SIG undefined FUN_140e1ea00(void)

void FUN_140e1ea00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar5 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)FName::FName(local_res8,L"DelayIronCubFall",1);
    FUN_140e91300(*(undefined8 *)(lVar5 + 0x2d8),0,*puVar6);
    FUN_142c7bae0(*(undefined8 *)(param_1 + 0x18),local_18,*(undefined8 *)(param_1 + 0x10));
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
    FUN_1411e02b0(*(undefined8 *)(lVar5 + 0x2d8));
  }
  return;
}



// FUNCTION 140e1eac0 Execute body=42 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UGunfireTechRequirementsImpl,TTypeWrapper<void>___cdecl(void),enum_ETechReqStatusChange,float>
     ::Execute(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140e1eae7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            (uVar1,*(undefined1 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  return;
}



// FUNCTION 140e1eaf0 FUN_140e1eaf0 body=78 status=ok
// SIG undefined FUN_140e1eaf0(void)

void FUN_140e1eaf0(longlong param_1)

{
  longlong lVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  local_res8 = *(undefined4 *)(param_1 + 0x20);
  local_resc = *(undefined4 *)(param_1 + 0x24);
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,&local_res8,
             *(undefined1 *)(param_1 + 0x28));
  return;
}



// FUNCTION 140e1eb40 FUN_140e1eb40 body=20 status=ok
// SIG undefined FUN_140e1eb40(void)

undefined1 FUN_140e1eb40(longlong param_1)

{
  FUN_140e28490(*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 140e1eb60 FUN_140e1eb60 body=261 status=ok
// SIG undefined FUN_140e1eb60(void)

undefined8 FUN_140e1eb60(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar5 = FWeakObjectPtr::Get(param_1 + 8);
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x240) == '\0')) {
    lVar6 = FUN_140e814c0(lVar5);
    if ((lVar6 != 0) &&
       (plVar7 = (longlong *)FUN_1409ab480(lVar6,local_res8,*(undefined8 *)(lVar5 + 0x288)),
       *plVar7 != 0)) {
      lVar8 = FUN_14144bcb0();
      lVar6 = *plVar7;
      for (lVar3 = lVar6; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
        if (lVar3 == lVar8) goto LAB_140e1ebd7;
      }
    }
    lVar6 = 0;
LAB_140e1ebd7:
    lVar6 = FUN_140e20840(lVar5,lVar6);
    if ((((lVar6 != 0) && (*(longlong *)(lVar5 + 0x218) != 0)) &&
        (lVar3 = *(longlong *)(*(longlong *)(lVar5 + 0x218) + 0x920), lVar3 != 0)) &&
       ((cVar4 = FUN_142c736c0(lVar3,*(undefined8 *)(lVar6 + 0x40)), cVar4 == '\0' &&
        (FUN_140e8b4b0(lVar5,local_18,*(undefined8 *)(lVar6 + 0x40),0), local_10 != (longlong *)0x0)
        ))) {
      LOCK();
      plVar7 = local_10 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  }
  return 1;
}



// FUNCTION 140e1ec70 FUN_140e1ec70 body=45 status=ok
// SIG undefined FUN_140e1ec70(void)

undefined1 FUN_140e1ec70(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1 + 8);
    *(undefined1 *)(lVar1 + 0x2670) = 0;
  }
  return 1;
}



// FUNCTION 140e1eca0 FUN_140e1eca0 body=27 status=ok
// SIG undefined FUN_140e1eca0(void)

undefined1 FUN_140e1eca0(longlong param_1,undefined4 param_2)

{
  FUN_140e37ec0(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x10),param_2);
  return 1;
}



// FUNCTION 140e1ecc0 FUN_140e1ecc0 body=20 status=ok
// SIG undefined FUN_140e1ecc0(void)

undefined1 FUN_140e1ecc0(longlong param_1)

{
  FUN_140e38640(*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 140e1ece0 FUN_140e1ece0 body=183 status=ok
// SIG undefined FUN_140e1ece0(void)

undefined8 FUN_140e1ece0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar5 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)FName::FName(local_res8,L"DelayIronCubFall",1);
    FUN_140e91300(*(undefined8 *)(lVar5 + 0x2d8),0,*puVar6);
    FUN_142c7bae0(*(undefined8 *)(param_1 + 0x18),local_18,*(undefined8 *)(param_1 + 0x10));
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
    FUN_1411e02b0(*(undefined8 *)(lVar5 + 0x2d8));
  }
  return 1;
}



// FUNCTION 140e1eda0 ExecuteIfSafe body=79 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1
TBaseUObjectMethodDelegateInstance<0,UGunfireTechRequirementsImpl,void___cdecl(void),enum_ETechReqStatusChange,float>
::ExecuteIfSafe(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar2 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              (uVar1,*(undefined1 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    return 1;
  }
  return 0;
}



// FUNCTION 140e1edf0 FUN_140e1edf0 body=114 status=ok
// SIG undefined FUN_140e1edf0(void)

undefined8 FUN_140e1edf0(longlong param_1)

{
  longlong lVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 8);
    local_res8 = *(undefined4 *)(param_1 + 0x20);
    local_resc = *(undefined4 *)(param_1 + 0x24);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,&local_res8,
               *(undefined1 *)(param_1 + 0x28));
    return 1;
  }
  return 0;
}



// FUNCTION 140e1ee70 FUN_140e1ee70 body=40 status=ok
// SIG undefined FUN_140e1ee70(void)

void FUN_140e1ee70(longlong *param_1)

{
  (**(code **)(*param_1 + 0x500))(param_1,param_1 + 0x598,(longlong)param_1 + 0x2ccc,0,0);
  return;
}



// FUNCTION 140e1eea0 FUN_140e1eea0 body=8 status=ok
// SIG undefined FUN_140e1eea0(void)

void FUN_140e1eea0(longlong param_1)

{
  *(byte *)(param_1 + 0x24d1) = *(byte *)(param_1 + 0x24d1) & 0xfb;
  return;
}



// FUNCTION 140e1eeb0 thunk_FUN_141400bb0 body=5 status=ok
// SIG undefined thunk_FUN_141400bb0(void)

void thunk_FUN_141400bb0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688eef8);
                    /* WARNING: Could not recover jumptable at 0x000141400be6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 140e1eec0 FUN_140e1eec0 body=1634 status=ok
// SIG undefined FUN_140e1eec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e1eec0(longlong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  uint local_180;
  longlong local_178;
  float local_170;
  float fStack_16c;
  float local_168;
  float local_160;
  float local_15c;
  float local_158;
  undefined8 local_150;
  float local_148;
  float local_13c;
  float local_130;
  longlong *local_128;
  undefined8 local_120;
  float local_118;
  longlong local_110 [4];
  longlong *local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  
  if (param_2 != 0) {
    local_e0 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
    plVar15 = *(longlong **)(param_2 + 0x18);
    if (plVar15 != (longlong *)0x0) {
      uVar19 = 0;
      local_178 = 0;
      local_188 = 0;
      local_180 = param_3;
      if (*(longlong *)(param_1 + 0x38) == 0) {
        local_178 = plVar15[0x23];
      }
      else {
        (**(code **)(*plVar15 + 0x980))(plVar15,*(undefined8 *)(param_1 + 0x38),&local_178);
      }
      if (local_178 != 0) {
        local_f0 = (longlong *)0x0;
        local_e8 = 0;
        FUN_140e0fd40(local_178,local_110,0);
        plVar15 = local_110;
        if (local_f0 != (longlong *)0x0) {
          plVar15 = local_f0;
        }
        plVar1 = plVar15 + (int)local_e8;
        if (plVar15 != plVar1) {
          local_188 = 0;
          do {
            plVar6 = (longlong *)*plVar15;
            if ((*(longlong *)(param_1 + 0x40) == 0) || (plVar6[3] == *(longlong *)(param_1 + 0x40))
               ) {
              if (local_f0 != (longlong *)0x0) {
                FMemory::Free(local_f0);
              }
              if (plVar6 == (longlong *)0x0) {
                return;
              }
              iVar12 = (**(code **)(*plVar6 + 0x6c8))(plVar6);
              if (iVar12 < 1) {
                return;
              }
              if (1 < iVar12) {
                iVar13 = rand();
                uVar19 = (longlong)iVar13 % (longlong)iVar12 & 0xffffffff;
              }
              local_128 = (longlong *)FUN_140975c20(plVar6,uVar19);
              local_188 = CONCAT44(local_188._4_4_,(int)local_128[3]);
              if ((int)local_128[3] < 3) {
                return;
              }
              iVar13 = *(int *)(param_2 + 0x128) + -1;
              iVar12 = *(int *)(param_2 + 0x124);
              lVar7 = *(longlong *)(param_2 + 0x108);
              lVar8 = *(longlong *)(param_2 + 0x100);
              lVar21 = (longlong)iVar13;
              if (iVar13 < 0) {
                return;
              }
              do {
                lVar20 = (ulonglong)((uint)*(ushort *)(lVar7 + lVar21 * 2) * iVar12) + lVar8;
                if (((*(uint *)(lVar20 + 0x68) & 0x4000000) == 0) &&
                   (*(char *)((ulonglong)local_180 + lVar20) != '\0')) {
                  iVar13 = rand();
                  lVar9 = *local_128;
                  lVar17 = local_128[2];
                  lVar18 = (longlong)((iVar13 % ((int)local_188 / 3)) * 3);
                  lVar16 = (longlong)*(int *)(lVar17 + lVar18 * 4) * 0x4c;
                  local_148 = *(float *)(lVar16 + 8 + lVar9);
                  uVar2 = *(undefined8 *)(lVar16 + lVar9);
                  fVar29 = (float)uVar2;
                  lVar16 = (longlong)*(int *)(lVar17 + 4 + lVar18 * 4) * 0x4c;
                  local_13c = *(float *)(lVar16 + 8 + lVar9);
                  uVar3 = *(undefined8 *)(lVar16 + lVar9);
                  lVar17 = (longlong)*(int *)(lVar17 + 8 + lVar18 * 4) * 0x4c;
                  local_130 = *(float *)(lVar17 + 8 + lVar9);
                  uVar4 = *(undefined8 *)(lVar17 + lVar9);
                  iVar13 = rand();
                  fVar27 = local_148;
                  local_150._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
                  fVar26 = local_150._4_4_;
                  fVar24 = (float)iVar13 * 3.051851e-05;
                  fVar35 = fVar29 + ((float)uVar3 - fVar29) * fVar24;
                  fVar36 = local_150._4_4_ +
                           ((float)((ulonglong)uVar3 >> 0x20) - local_150._4_4_) * fVar24;
                  fVar37 = local_148 + (local_13c - local_148) * fVar24;
                  local_150 = uVar2;
                  iVar13 = rand();
                  fVar30 = local_130 - fVar27;
                  fVar22 = (float)iVar13 * 3.051851e-05;
                  iVar13 = rand();
                  fVar23 = (float)iVar13 * 3.051851e-05;
                  fVar24 = *(float *)(plVar6 + 0x42);
                  fVar25 = *(float *)((longlong)plVar6 + 0x214);
                  fVar32 = *(float *)(plVar6 + 0x43);
                  fVar10 = *(float *)((longlong)plVar6 + 0x21c);
                  auVar28._0_4_ =
                       (((fVar29 + ((float)uVar4 - fVar29) * fVar22) - fVar35) * fVar23 + fVar35) *
                       *(float *)(plVar6 + 0x46);
                  auVar28._4_4_ =
                       (((fVar26 + ((float)((ulonglong)uVar4 >> 0x20) - fVar26) * fVar22) - fVar36)
                        * fVar23 + fVar36) * *(float *)((longlong)plVar6 + 0x234);
                  auVar28._8_4_ =
                       (((fVar27 + fVar30 * fVar22) - fVar37) * fVar23 + fVar37) *
                       *(float *)(plVar6 + 0x47);
                  auVar28._12_4_ = *(float *)((longlong)plVar6 + 0x23c) * 0.0;
                  fVar26 = auVar28._8_4_ * fVar25 - auVar28._4_4_ * fVar32;
                  fVar27 = auVar28._0_4_ * fVar32 - auVar28._8_4_ * fVar24;
                  fVar22 = auVar28._4_4_ * fVar24 - auVar28._0_4_ * fVar25;
                  fVar26 = fVar26 + fVar26;
                  fVar27 = fVar27 + fVar27;
                  fVar22 = fVar22 + fVar22;
                  fVar23 = (fVar22 * fVar25 - fVar27 * fVar32) + fVar10 * fVar26 + auVar28._0_4_ +
                           *(float *)(plVar6 + 0x44);
                  fVar32 = (fVar26 * fVar32 - fVar22 * fVar24) + fVar10 * fVar27 + auVar28._4_4_ +
                           *(float *)((longlong)plVar6 + 0x224);
                  fVar24 = (fVar27 * fVar24 - fVar26 * fVar25) + fVar10 * fVar22 + auVar28._8_4_ +
                           *(float *)(plVar6 + 0x45);
                  local_170 = fVar23;
                  fStack_16c = fVar32;
                  local_168 = fVar24;
                  cVar11 = FUN_14263b0c0(param_2);
                  if (cVar11 == '\0') {
                    local_118 = local_168;
                    pfVar14 = (float *)&local_120;
                    local_120 = CONCAT44(fStack_16c,local_170);
                  }
                  else {
                    lVar9 = *(longlong *)(param_2 + 0x18);
                    auVar5 = *(undefined1 (*) [16])(lVar9 + 0x230);
                    fVar25 = auVar5._0_4_;
                    fVar10 = auVar5._4_4_;
                    fVar26 = auVar5._8_4_;
                    pfVar14 = &local_160;
                    fVar35 = *(float *)(lVar9 + 0x210) * _DAT_146870090;
                    fVar36 = *(float *)(lVar9 + 0x214) * fRam0000000146870094;
                    fVar37 = *(float *)(lVar9 + 0x218) * fRam0000000146870098;
                    fVar29 = *(float *)(lVar9 + 0x21c) * fRam000000014687009c;
                    auVar28 = rcpps(auVar28,auVar5);
                    fVar31 = (float)((uint)(fVar23 - *(float *)(lVar9 + 0x220)) & _DAT_14686fd70);
                    fVar33 = (float)((uint)(fVar32 - *(float *)(lVar9 + 0x224)) &
                                    uRam000000014686fd74);
                    fVar34 = (float)((uint)(fVar24 - *(float *)(lVar9 + 0x228)) &
                                    uRam000000014686fd78);
                    fVar24 = fVar34 * fVar36 - fVar33 * fVar37;
                    fVar32 = fVar31 * fVar37 - fVar34 * fVar35;
                    fVar27 = fVar33 * fVar35 - fVar31 * fVar36;
                    fVar22 = auVar28._0_4_;
                    fVar23 = auVar28._4_4_;
                    fVar30 = auVar28._8_4_;
                    fVar24 = fVar24 + fVar24;
                    fVar32 = fVar32 + fVar32;
                    fVar27 = fVar27 + fVar27;
                    fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * fVar25;
                    fVar23 = (fVar23 + fVar23) - fVar23 * fVar23 * fVar10;
                    fVar30 = (fVar30 + fVar30) - fVar30 * fVar30 * fVar26;
                    fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * fVar25;
                    fVar23 = (fVar23 + fVar23) - fVar23 * fVar23 * fVar10;
                    fVar30 = (fVar30 + fVar30) - fVar30 * fVar30 * fVar26;
                    local_160 = ((fVar27 * fVar36 - fVar32 * fVar37) + fVar29 * fVar24 + fVar31) *
                                (float)(-(uint)((float)((uint)fVar25 & _DAT_14686fdf0) <=
                                               _DAT_146870080) & (uint)fVar22 ^ (uint)fVar22);
                    local_158 = ((fVar32 * fVar35 - fVar24 * fVar36) + fVar29 * fVar27 + fVar34) *
                                (float)(-(uint)((float)((uint)fVar26 & uRam000000014686fdf8) <=
                                               fRam0000000146870088) & (uint)fVar30 ^ (uint)fVar30);
                    local_15c = ((fVar24 * fVar37 - fVar27 * fVar35) + fVar29 * fVar32 + fVar33) *
                                (float)(-(uint)((float)((uint)fVar10 & uRam000000014686fdf4) <=
                                               fRam0000000146870084) & (uint)fVar23 ^ (uint)fVar23);
                  }
                  fVar25 = *(float *)(lVar20 + 0x10) + *pfVar14;
                  fVar24 = pfVar14[2];
                  *(float *)(lVar20 + 0x14) = pfVar14[1] + *(float *)(lVar20 + 0x14);
                  *(float *)(lVar20 + 0x10) = fVar25;
                  *(float *)(lVar20 + 0x18) = fVar24 + *(float *)(lVar20 + 0x18);
                  iVar13 = _finite((double)fVar25);
                  if ((iVar13 != 0) &&
                     (iVar13 = _finite((double)*(float *)(lVar20 + 0x14)), iVar13 != 0)) {
                    _finite((double)*(float *)(lVar20 + 0x18));
                  }
                  *(undefined8 *)(lVar20 + 0x20) = *(undefined8 *)(lVar20 + 0x10);
                  *(undefined4 *)(lVar20 + 0x28) = *(undefined4 *)(lVar20 + 0x18);
                }
                lVar21 = lVar21 + -1;
              } while (-1 < lVar21);
              return;
            }
            plVar15 = plVar15 + 1;
          } while (plVar15 != plVar1);
        }
        if (local_f0 != (longlong *)0x0) {
          FMemory::Free(local_f0);
        }
      }
    }
  }
  return;
}



// FUNCTION 140e1f530 FUN_140e1f530 body=133 status=ok
// SIG undefined FUN_140e1f530(void)

longlong FUN_140e1f530(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  lVar4 = (longlong)(int)param_1[1] * 0x30 + lVar1;
  if (lVar1 != lVar4) {
    lVar3 = lVar1;
    do {
      cVar2 = FSoftObjectPath::operator==(lVar3 + 0x10,param_2 + 0x10);
      if (cVar2 != '\0') {
        return (lVar3 - lVar1) / 0x30;
      }
      lVar3 = lVar3 + 0x30;
    } while (lVar3 != lVar4);
  }
  return 0xffffffff;
}



// FUNCTION 140e1f5c0 FUN_140e1f5c0 body=236 status=ok
// SIG undefined FUN_140e1f5c0(void)

void FUN_140e1f5c0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar2,param_1 + 0x559);
    param_1[0x559] = 0;
  }
  if (((char)param_1[0x25] == '\x03') && (lVar1 = param_1[0x558], lVar1 != 0)) {
    if (param_1[0x92] != 0) {
      FUN_14145f370();
    }
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    FUN_140b93ca0(uVar2,lVar1);
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    FUN_140b88460(uVar2,lVar1,0);
  }
  param_1[0x558] = 0;
  lVar1 = DAT_146870218;
  if (DAT_146870218 == 0) {
    lVar1 = DAT_146870860;
  }
  FUN_140e61570(param_1 + 0x4de,1,lVar1);
  return;
}



// FUNCTION 140e1f6b0 FUN_140e1f6b0 body=562 status=ok
// SIG undefined FUN_140e1f6b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e1f6b0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
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
  lVar6 = *(longlong *)(param_1 + 0x118);
  lVar3 = 0;
  if (lVar6 != 0) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar3 = *(longlong *)(lVar6 + 0xc98);
    }
  }
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0x200) == '\0')) {
    local_a0 = FUN_140e1f6b0;
    local_a8 = 0;
    uStack_98 = 0;
    uVar4 = AActor::GetWorldTimerManager(*(undefined8 *)(param_1 + 0x118));
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      *(undefined4 *)(plVar5 + 2) = (undefined4)local_a0;
      *(undefined4 *)((longlong)plVar5 + 0x14) = local_a0._4_4_;
      *(undefined4 *)(plVar5 + 3) = uStack_98;
      *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_94;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar5[5] = lVar6;
      *plVar5 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_88 = 0;
    local_80 = 0;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x30))(plVar5,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_b0 = 0xbf800000;
    local_b8 = 0;
    local_70 = 0;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar4,&local_a8,&local_88,0x3f000000);
    if (local_28 != 0) {
      plVar7 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar7 = local_38;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      lVar6 = FMemory::Realloc(plVar5,0,0);
      if (lVar6 != 0) {
        FMemory::Free(lVar6);
      }
    }
  }
  else {
    uVar4 = FText::FText(&local_a0);
    FUN_140e19a70(param_1 + 0x1a0,uVar4,0);
  }
  return;
}



// FUNCTION 140e1f8f0 FUN_140e1f8f0 body=113 status=ok
// SIG undefined FUN_140e1f8f0(void)

void FUN_140e1f8f0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_14222e280();
  if (lVar2 != 0) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (*(char *)(lVar2 + 0x5e0) != '\0')) && (*(longlong *)(param_1 + 0x2420) != 0)) {
      FUN_142eb3990();
    }
  }
  return;
}



// FUNCTION 140e1f970 FUN_140e1f970 body=83 status=ok
// SIG undefined FUN_140e1f970(void)

bool FUN_140e1f970(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x3c8) == 0) {
    cVar1 = FUN_140e1aba0(param_1,1);
    if (cVar1 != '\0') {
      FUN_140e268e0(param_1,param_2);
      return *(longlong *)(param_1 + 0x3c8) != 0;
    }
  }
  return false;
}



// FUNCTION 140e1f9d0 FUN_140e1f9d0 body=273 status=ok
// SIG undefined FUN_140e1f9d0(void)

void FUN_140e1f9d0(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 *local_28;
  int local_20;
  int local_1c;
  longlong local_18;
  
  puVar3 = (undefined8 *)FUN_140e25340();
  iVar1 = *(int *)(puVar3 + 1);
  local_28 = (undefined2 *)*puVar3;
  *puVar3 = 0;
  local_20 = *(int *)(puVar3 + 1);
  local_1c = *(int *)((longlong)puVar3 + 0xc);
  puVar3[1] = 0;
  iVar5 = local_20;
  if (local_1c < (int)((0xe - (uint)(iVar1 != 0)) + local_20)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    iVar5 = local_20;
  }
  local_20 = (0xe - (uint)(iVar5 != 0)) + iVar5;
  if (local_1c < local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar5);
  }
  iVar1 = local_20;
  puVar2 = local_28;
  builtin_wcsncpy(local_28 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)),L"/password/new",0xe);
  if (local_18 != 0) {
    FMemory::Free();
  }
  puVar4 = &DAT_143f3eda8;
  if (iVar1 != 0) {
    puVar4 = puVar2;
  }
  FUN_1416af6e0(puVar4,0,0);
  if (puVar2 != (undefined2 *)0x0) {
    FMemory::Free(puVar2);
  }
  return;
}



// FUNCTION 140e1faf0 FUN_140e1faf0 body=220 status=ok
// SIG undefined FUN_140e1faf0(void)

void FUN_140e1faf0(longlong param_1)

{
  undefined2 *puVar1;
  undefined8 local_res8 [4];
  undefined2 *local_28;
  undefined8 local_20;
  longlong local_18 [3];
  
  if (param_1 == 0) {
    local_20 = 5;
    local_28 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,&DAT_143f3edc8,10);
  }
  else {
    local_res8[0] = *(undefined8 *)(param_1 + 0x18);
    FName::ToString(local_res8,&local_28);
  }
  puVar1 = &DAT_143f3eda8;
  if ((int)local_20 != 0) {
    puVar1 = local_28;
  }
  FString::PrintfImpl(local_18,
                      L"AOakCharacter_Player::GbxDestroyActor - Blueprint is trying to destroy Player Character \'%s\'."
                      ,puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (DAT_146b17150 != 0) {
    AK::MemoryMgr::StartProfileThreadUsage((long)DAT_146b17150);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e1fbd0 FUN_140e1fbd0 body=1036 status=ok
// SIG undefined FUN_140e1fbd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e1fbd0(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  uint uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  float fVar18;
  undefined1 auStack_258 [32];
  float local_238;
  ulonglong *local_230;
  ulonglong local_228;
  undefined4 local_220;
  longlong local_218;
  undefined4 local_210;
  longlong *local_208;
  ulonglong local_200;
  undefined4 local_1f8;
  undefined1 local_1f0 [400];
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  local_218 = param_1;
  local_208 = param_2;
  lVar7 = FWeakObjectPtr::Get((longlong)param_2 + 0x34);
  if (lVar7 != 0) {
    lVar8 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    lVar8 = lVar7;
    if (!bVar4) {
      lVar8 = FUN_1428e7a40();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) {
        return;
      }
      lVar8 = *(longlong *)(lVar7 + 0x118);
      if (*(longlong *)(lVar7 + 0x118) == 0) {
        return;
      }
    }
    lVar9 = FUN_1422312c0(lVar8);
    if (lVar9 != 0) {
      lVar10 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        FUN_142d34560(param_1);
        FAIDataProviderValue::BindData(param_1 + 0x60,lVar7,(int)param_2[6]);
        fVar18 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x60);
        lVar7 = *(longlong *)(lVar8 + 0x168);
        if (lVar7 == 0) {
          local_228 = _DAT_1468b5d90;
          local_220 = DAT_1468b5d98;
        }
        else {
          local_228 = *(ulonglong *)(lVar7 + 0x220);
          local_220 = *(undefined4 *)(lVar7 + 0x228);
        }
        local_200 = local_228;
        local_1f8 = local_220;
        uVar11 = FUN_142df3580(lVar8);
        uVar17 = 0;
        local_60 = (undefined1 *)0x0;
        local_58 = 0;
        plVar13 = *(longlong **)(lVar9 + 0xb88);
        plVar15 = plVar13 + (longlong)*(int *)(lVar9 + 0xb90) * 2;
        for (; plVar13 != plVar15; plVar13 = plVar13 + 2) {
          if (((*plVar13 != 0) && ((longlong *)plVar13[1] != (longlong *)0x0)) &&
             (lVar7 = (**(code **)(*(longlong *)plVar13[1] + 0xa0))(), lVar7 != 0)) {
            local_230 = &local_200;
            local_238 = fVar18 * fVar18;
            cVar5 = FUN_142d3e5e0(param_1,lVar7,lVar8,uVar11);
            uVar16 = local_58;
            if (cVar5 != '\0') {
              uVar3 = *(undefined8 *)(lVar7 + 0x118);
              lVar7 = (longlong)(int)local_58;
              iVar6 = (int)local_58 + 1;
              local_58 = CONCAT44(local_58._4_4_,iVar6);
              if (local_58._4_4_ < iVar6) {
                FUN_1407413c0(local_1f0,uVar16 & 0xffffffff);
              }
              puVar12 = local_1f0;
              if (local_60 != (undefined1 *)0x0) {
                puVar12 = local_60;
              }
              *(undefined8 *)(puVar12 + lVar7 * 8) = uVar3;
              param_1 = local_218;
            }
          }
          param_2 = local_208;
        }
        FUN_142bef1a0(param_2,local_58 & 0xffffffff);
        puVar12 = local_1f0;
        if (local_60 != (undefined1 *)0x0) {
          puVar12 = local_60;
        }
        uVar16 = (longlong)(int)local_58 & 0x1fffffffffffffff;
        if (puVar12 + (longlong)(int)local_58 * 8 < puVar12) {
          uVar16 = uVar17;
        }
        if (uVar16 != 0) {
          local_228 = CONCAT44(local_228._4_4_,local_210);
          do {
            FWeakObjectPtr::operator=(&local_208);
            uVar1 = *(ushort *)((longlong)param_2 + 0x154);
            uVar2 = *(uint *)(param_2 + 4);
            iVar6 = uVar2 + uVar1;
            *(int *)(param_2 + 4) = iVar6;
            if (*(int *)((longlong)param_2 + 0x24) < iVar6) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2 + 3);
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(param_2[3] + (longlong)(int)uVar2),0,(ulonglong)uVar1);
            UEnvQueryItemType_Actor::SetValue(param_2[3] + (longlong)(int)uVar2,&local_208);
            iVar6 = (int)param_2[1];
            uVar14 = (uint)local_228 & 0xfffffffe;
            local_218 = (ulonglong)(uVar2 & 0x7fffffff) << 0x20;
            local_228 = local_228 & 0xfffffffffffffffe;
            *(int *)(param_2 + 1) = iVar6 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
              TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
            }
            lVar7 = *param_2;
            uVar17 = uVar17 + 1;
            *(longlong *)(lVar7 + (longlong)iVar6 * 0xc) = local_218;
            *(uint *)(lVar7 + 8 + (longlong)iVar6 * 0xc) = uVar14;
          } while (uVar17 != uVar16);
        }
        if (local_60 != (undefined1 *)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 140e1ffe0 FUN_140e1ffe0 body=803 status=ok
// SIG undefined FUN_140e1ffe0(void)

longlong FUN_140e1ffe0(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint local_88;
  uint uStack_84;
  uint uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  uint uStack_60;
  uint uStack_5c;
  uint *local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  uVar9 = 0;
  if (*(longlong *)(param_1 + 0x970) != 0) {
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x970) + 0xc);
    uVar7 = uVar9;
    if (iVar6 < (int)DAT_1469e91c4) {
      uVar10 = iVar6 >> 0x1f & 0xffff;
      uVar5 = iVar6 + uVar10;
      uVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18;
    }
    if ((*(uint *)(uVar7 + 8) >> 0x1d & 1) == 0) {
      return *(longlong *)(param_1 + 0x970);
    }
  }
  plVar2 = (longlong *)(param_1 + 0x2b0);
  uVar5 = *(uint *)(param_1 + 0x2d8);
  puVar1 = (uint *)(param_1 + 0x2c0);
  local_88 = 0;
  uStack_84 = 1;
  uStack_74 = 0;
  uStack_70 = 0;
  if (uVar5 != 0) {
    puVar13 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = *puVar13;
    uVar7 = uVar9;
    while (uVar10 == 0) {
      iVar6 = (int)uVar9;
      uStack_70 = (int)uVar7 + 0x20;
      uVar7 = (ulonglong)uStack_70;
      local_88 = iVar6 + 1;
      uVar9 = (ulonglong)local_88;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_140e2012d;
      uVar10 = puVar13[(longlong)iVar6 + 1];
    }
    uStack_84 = uVar10 - 1 & uVar10 ^ uVar10;
    iVar6 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (uStack_70 - iVar6) + 0x1f;
    if ((int)uVar5 < (int)uStack_74) {
LAB_140e2012d:
      uStack_74 = uVar5;
    }
  }
  uVar10 = *(uint *)(param_1 + 0x2d8);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,uStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar12 = uVar10 & 0xffffffe0;
  uStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar10;
  if (uVar10 != uVar5) {
    puVar13 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = puVar13[(int)uVar10 >> 5] & -1 << ((byte)uVar10 & 0x1f);
    iVar6 = (int)uVar10 >> 5;
    while (uVar11 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_140e20205;
      uVar11 = puVar13[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar11 = uVar11 - 1 & uVar11 ^ uVar11;
    iVar6 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (uVar12 - iVar6) + 0x1f;
    if ((int)uVar5 < (int)uStack_74) {
LAB_140e20205:
      uStack_74 = uVar5;
    }
  }
  do {
    if ((uStack_4c == uStack_74) && (local_58 == puVar1)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      return *(longlong *)(param_1 + 0x970);
    }
    lVar3 = *(longlong *)(*plVar2 + (longlong)(int)uStack_4c * 0x10);
    if (lVar3 != 0) {
      lVar8 = AGFreezeCharacterCue::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (((bVar4) && (*(longlong *)(lVar3 + 0x6f0) == *(longlong *)(param_1 + 0xa80))) &&
         ((*(byte *)(lVar3 + 0x398) & 1) != 0)) {
        *(longlong *)(param_1 + 0x970) = lVar3;
        return lVar3;
      }
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
  } while( true );
}



// FUNCTION 140e20310 FUN_140e20310 body=803 status=ok
// SIG undefined FUN_140e20310(void)

longlong FUN_140e20310(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint local_88;
  uint uStack_84;
  uint uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  uint uStack_60;
  uint uStack_5c;
  uint *local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  uVar9 = 0;
  if (*(longlong *)(param_1 + 0x978) != 0) {
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x978) + 0xc);
    uVar7 = uVar9;
    if (iVar6 < (int)DAT_1469e91c4) {
      uVar10 = iVar6 >> 0x1f & 0xffff;
      uVar5 = iVar6 + uVar10;
      uVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18;
    }
    if ((*(uint *)(uVar7 + 8) >> 0x1d & 1) == 0) {
      return *(longlong *)(param_1 + 0x978);
    }
  }
  plVar2 = (longlong *)(param_1 + 0x2b0);
  uVar5 = *(uint *)(param_1 + 0x2d8);
  puVar1 = (uint *)(param_1 + 0x2c0);
  local_88 = 0;
  uStack_84 = 1;
  uStack_74 = 0;
  uStack_70 = 0;
  if (uVar5 != 0) {
    puVar13 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = *puVar13;
    uVar7 = uVar9;
    while (uVar10 == 0) {
      iVar6 = (int)uVar9;
      uStack_70 = (int)uVar7 + 0x20;
      uVar7 = (ulonglong)uStack_70;
      local_88 = iVar6 + 1;
      uVar9 = (ulonglong)local_88;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_140e2045d;
      uVar10 = puVar13[(longlong)iVar6 + 1];
    }
    uStack_84 = uVar10 - 1 & uVar10 ^ uVar10;
    iVar6 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (uStack_70 - iVar6) + 0x1f;
    if ((int)uVar5 < (int)uStack_74) {
LAB_140e2045d:
      uStack_74 = uVar5;
    }
  }
  uVar10 = *(uint *)(param_1 + 0x2d8);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,uStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar12 = uVar10 & 0xffffffe0;
  uStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar10;
  if (uVar10 != uVar5) {
    puVar13 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = puVar13[(int)uVar10 >> 5] & -1 << ((byte)uVar10 & 0x1f);
    iVar6 = (int)uVar10 >> 5;
    while (uVar11 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_140e20535;
      uVar11 = puVar13[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar11 = uVar11 - 1 & uVar11 ^ uVar11;
    iVar6 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (uVar12 - iVar6) + 0x1f;
    if ((int)uVar5 < (int)uStack_74) {
LAB_140e20535:
      uStack_74 = uVar5;
    }
  }
  do {
    if ((uStack_4c == uStack_74) && (local_58 == puVar1)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      return *(longlong *)(param_1 + 0x978);
    }
    lVar3 = *(longlong *)(*plVar2 + (longlong)(int)uStack_4c * 0x10);
    if (lVar3 != 0) {
      lVar8 = AGFreezeCharacterCue::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (((bVar4) && (*(longlong *)(lVar3 + 0x6f0) == *(longlong *)(param_1 + 0xae0))) &&
         ((*(byte *)(lVar3 + 0x398) & 1) == 0)) {
        *(longlong *)(param_1 + 0x978) = lVar3;
        return lVar3;
      }
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
  } while( true );
}



// FUNCTION 140e20640 Get body=220 status=ok
// SIG undefined Get(void)

longlong ConstructorHelpers::FObjectFinderOptional<UStaticMesh>::Get(longlong *param_1)

{
  short *psVar1;
  uint uVar2;
  longlong lVar3;
  longlong local_18;
  ulonglong local_10;
  
  if (*param_1 == 0) {
    if (param_1[1] != 0) {
      FUN_141785db0();
      psVar1 = (short *)param_1[1];
      local_18 = 0;
      local_10 = 0;
      if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
        lVar3 = -1;
        do {
          lVar3 = lVar3 + 1;
        } while (psVar1[lVar3] != 0);
        uVar2 = (int)lVar3 + 1;
        local_10 = (ulonglong)uVar2;
        if (0 < (int)uVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
        }
        FGenericPlatformString::Memcpy(local_18,psVar1,(longlong)(int)uVar2 * 2);
      }
      FUN_14179acf0(&local_18,1);
      lVar3 = FUN_140e0faa0(&local_18);
      *param_1 = lVar3;
      if (lVar3 == 0) {
        FUN_14178ab20(param_1[1]);
      }
      param_1[1] = 0;
      if (local_18 != 0) {
        FMemory::Free();
      }
    }
    return *param_1;
  }
  return *param_1;
}



// FUNCTION 140e20720 Get body=220 status=ok
// SIG undefined Get(void)

longlong ConstructorHelpers::FObjectFinderOptional<UStaticMesh>::Get(longlong *param_1)

{
  short *psVar1;
  uint uVar2;
  longlong lVar3;
  longlong local_18;
  ulonglong local_10;
  
  if (*param_1 == 0) {
    if (param_1[1] != 0) {
      FUN_141785db0();
      psVar1 = (short *)param_1[1];
      local_18 = 0;
      local_10 = 0;
      if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
        lVar3 = -1;
        do {
          lVar3 = lVar3 + 1;
        } while (psVar1[lVar3] != 0);
        uVar2 = (int)lVar3 + 1;
        local_10 = (ulonglong)uVar2;
        if (0 < (int)uVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
        }
        FGenericPlatformString::Memcpy(local_18,psVar1,(longlong)(int)uVar2 * 2);
      }
      FUN_14179acf0(&local_18,1);
      lVar3 = FUN_14095c6b0(&local_18);
      *param_1 = lVar3;
      if (lVar3 == 0) {
        FUN_14178ab20(param_1[1]);
      }
      param_1[1] = 0;
      if (local_18 != 0) {
        FMemory::Free();
      }
    }
    return *param_1;
  }
  return *param_1;
}



// FUNCTION 140e20800 FUN_140e20800 body=54 status=ok
// SIG undefined FUN_140e20800(void)

undefined8 FUN_140e20800(void)

{
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    return *(undefined8 *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x548);
  }
  return 0;
}



// FUNCTION 140e20840 FUN_140e20840 body=346 status=ok
// SIG undefined FUN_140e20840(void)

longlong FUN_140e20840(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar6 = *(longlong *)(param_1 + 0x2a8);
  lVar5 = (longlong)*(int *)(param_1 + 0x2b0) * 0xd8 + lVar6;
  if (lVar6 != lVar5) {
    lVar8 = 0;
    do {
      lVar2 = FWeakObjectPtr::Get(lVar6);
      lVar7 = lVar8;
      if (lVar2 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(lVar6 + 8)) && (*(longlong *)(lVar6 + 0x10) != 0)) {
          lVar2 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar6,lVar2);
          if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(lVar6 + 8) = DAT_1464b56f4;
          }
          lVar2 = FWeakObjectPtr::Get(lVar6);
          if (lVar2 != 0) goto LAB_140e208f6;
        }
      }
      else {
LAB_140e208f6:
        lVar3 = FUN_14171bfe0();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          lVar4 = UUGLoadoutBarUW::GetPrivateStaticClass();
          lVar3 = lVar2;
          do {
            lVar7 = lVar2;
            if (lVar3 == lVar4) break;
            lVar3 = *(longlong *)(lVar3 + 0x30);
            lVar7 = lVar8;
          } while (lVar3 != 0);
        }
      }
      lVar2 = lVar8;
      if (param_2 != 0) {
        lVar4 = UUGLoadoutBarUW::GetPrivateStaticClass();
        lVar3 = param_2;
        do {
          lVar2 = param_2;
          if (lVar3 == lVar4) break;
          lVar3 = *(longlong *)(lVar3 + 0x30);
          lVar2 = lVar8;
        } while (lVar3 != 0);
      }
      if (lVar7 == lVar2) {
        return lVar6;
      }
      lVar6 = lVar6 + 0xd8;
    } while (lVar6 != lVar5);
  }
  return 0;
}



// FUNCTION 140e209a0 AddToCentralStorageSubsystem body=53 status=ok
// SIG undefined AddToCentralStorageSubsystem(void)

void AFGCentralStorageContainer::AddToCentralStorageSubsystem(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x148))();
  lVar2 = FUN_140aab5e0(uVar1);
  if (lVar2 != 0) {
    FUN_140aab8f0(lVar2,param_1);
    return;
  }
  return;
}



// FUNCTION 140e20a70 FUN_140e20a70 body=102 status=ok
// SIG undefined FUN_140e20a70(void)

longlong FUN_140e20a70(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_142695b40();
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x9c0);
    if (lVar2 != 0) {
      lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return lVar2;
      }
    }
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 140e20ae0 FUN_140e20ae0 body=111 status=ok
// SIG undefined FUN_140e20ae0(void)

longlong FUN_140e20ae0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x478);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x9c0);
    if (lVar3 != 0) {
      lVar2 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (*(longlong *)(lVar3 + 0x460) != 0)) {
        return *(longlong *)(lVar3 + 0x460);
      }
    }
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 140e20b50 FUN_140e20b50 body=62 status=ok
// SIG undefined FUN_140e20b50(void)

undefined8 * FUN_140e20b50(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x2a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"coui://UX/experience/Account/Account.html",0x54);
  return param_2;
}



// FUNCTION 140e20b90 FUN_140e20b90 body=62 status=ok
// SIG undefined FUN_140e20b90(void)

undefined8 * FUN_140e20b90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x37;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy
            (*param_2,L"coui://UX/experience/Signed Account/SignedAccount.html",0x6e);
  return param_2;
}



// FUNCTION 140e20bd0 FUN_140e20bd0 body=93 status=ok
// SIG undefined FUN_140e20bd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140e20bd0(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0xc28))();
  if (cVar1 != '\0') {
    FUN_140e4ccd0(param_1 + 0x4de,param_2);
    return param_2;
  }
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
  return param_2;
}



// FUNCTION 140e20c30 GetTeleportDistanceThreshold body=9 status=ok
// SIG undefined GetTeleportDistanceThreshold(void)

undefined4 USkeletalMeshComponent::GetTeleportDistanceThreshold(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xa48);
}



// FUNCTION 140e20c40 FUN_140e20c40 body=751 status=ok
// SIG undefined FUN_140e20c40(void)

undefined8 * FUN_140e20c40(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  void *_Src;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar10 = *(longlong *)(param_1 + 0x118);
  if (lVar10 != 0) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (lVar7 = FUN_1422312c0(lVar10), lVar7 != 0)) {
      lVar8 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) &&
         ((iVar11 = *(int *)(param_1 + 0x2b0), cVar6 = FUN_140bca8a0(lVar7), iVar11 == 0 ||
          (cVar6 != '\0')))) {
        iVar11 = 0;
        plVar3 = (longlong *)(param_1 + 0x2a8);
        if (*(int *)(param_1 + 0x2b4) < 8) {
          *(undefined4 *)(param_1 + 0x2b0) = 0;
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar3,8);
          iVar11 = *(int *)(param_1 + 0x2b0);
        }
        *(int *)(param_1 + 0x2b0) = iVar11 + 8;
        if (*(int *)(param_1 + 0x2b4) < iVar11 + 8) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar3,iVar11);
        }
        *(undefined8 *)((longlong)iVar11 + *plVar3) = 0;
        plVar9 = (longlong *)FUN_142dcf3a0(lVar10,local_38);
        plVar4 = (longlong *)plVar9[1];
        lVar10 = *plVar9;
        plVar9[1] = 0;
        *plVar9 = 0;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_30 + 1;
          lVar8 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar1 = (int *)((longlong)local_30 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_30 + 8))(local_30,1);
            }
          }
        }
        if (lVar10 != 0) {
          lVar8 = FUN_140bba5e0(lVar7);
          if (lVar8 == 0) {
            lVar10 = 0;
            bVar5 = false;
          }
          else {
            bVar5 = true;
            local_58 = (undefined4)lVar10;
            uStack_54 = (undefined4)((ulonglong)lVar10 >> 0x20);
            uStack_50 = SUB84(plVar4,0);
            uStack_4c = (undefined4)((ulonglong)plVar4 >> 0x20);
            local_48 = local_58;
            uStack_44 = uStack_54;
            uStack_40 = uStack_50;
            uStack_3c = uStack_4c;
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
            }
            lVar10 = FUN_140d3a960(lVar8,&local_48);
          }
          if ((bVar5) &&
             (plVar9 = (longlong *)CONCAT44(uStack_3c,uStack_40), plVar9 != (longlong *)0x0)) {
            LOCK();
            plVar2 = plVar9 + 1;
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          if (lVar10 == 0) {
            if (cVar6 == '\0') {
              FUN_140e391f0(param_1,lVar7);
            }
          }
          else {
            TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                      (plVar3,lVar10 + 0x2c8);
          }
        }
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar4 + 1;
          lVar10 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
      }
    }
  }
  *param_2 = 0;
  iVar11 = *(int *)(param_1 + 0x2b0);
  _Src = *(void **)(param_1 + 0x2a8);
  *(int *)(param_2 + 1) = iVar11;
  if (iVar11 != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_2,iVar11,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar11);
    return param_2;
  }
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  return param_2;
}



// FUNCTION 140e20f30 FUN_140e20f30 body=116 status=ok
// SIG undefined FUN_140e20f30(void)

longlong FUN_140e20f30(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = FUN_1405ec200(param_1 + 0x30);
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
      lVar4 = FUN_142dfdfe0();
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



// FUNCTION 140e20fb0 FUN_140e20fb0 body=198 status=ok
// SIG undefined FUN_140e20fb0(void)

ulonglong FUN_140e20fb0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong in_RAX;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  if (param_2 != 0) {
    in_RAX = FUN_140c43380(param_2);
    iVar2 = (int)in_RAX;
    if ((iVar2 != 0) &&
       (uVar3 = *(int *)(param_1 + 0x210) - *(int *)(param_1 + 0x23c), in_RAX = (ulonglong)uVar3,
       uVar3 != 0)) {
      in_RAX = *(ulonglong *)(param_1 + 0x248);
      if (*(ulonglong *)(param_1 + 0x248) == 0) {
        in_RAX = param_1 + 0x240;
      }
      iVar4 = *(int *)(in_RAX + ((longlong)*(int *)(param_1 + 0x250) - 1U & (longlong)iVar2) * 4);
      if (iVar4 != -1) {
        lVar1 = *(longlong *)(param_1 + 0x208);
        iVar5 = iVar4;
        do {
          if (*(int *)(lVar1 + (longlong)iVar5 * 0x10) == iVar2) {
            if (iVar5 != -1) {
              if (iVar4 != -1) goto LAB_140e21040;
              goto LAB_140e2106a;
            }
            break;
          }
          iVar5 = *(int *)(lVar1 + 8 + (longlong)iVar5 * 0x10);
        } while (iVar5 != -1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
LAB_140e21040:
  while (lVar6 = (longlong)iVar4 * 0x10 + lVar1, *(int *)((longlong)iVar4 * 0x10 + lVar1) != iVar2)
  {
    iVar4 = *(int *)(lVar6 + 8);
    if (iVar4 == -1) {
      return (ulonglong)DAT_00000004;
    }
  }
  if (iVar4 == -1) {
LAB_140e2106a:
    lVar6 = 0;
  }
  return (ulonglong)*(byte *)(lVar6 + 4);
}



// FUNCTION 140e21080 FUN_140e21080 body=803 status=ok
// SIG undefined FUN_140e21080(void)

longlong FUN_140e21080(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint local_88;
  uint uStack_84;
  uint uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  uint uStack_60;
  uint uStack_5c;
  uint *local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  uVar9 = 0;
  if (*(longlong *)(param_1 + 0x988) != 0) {
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x988) + 0xc);
    uVar7 = uVar9;
    if (iVar6 < (int)DAT_1469e91c4) {
      uVar10 = iVar6 >> 0x1f & 0xffff;
      uVar5 = iVar6 + uVar10;
      uVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18;
    }
    if ((*(uint *)(uVar7 + 8) >> 0x1d & 1) == 0) {
      return *(longlong *)(param_1 + 0x988);
    }
  }
  plVar2 = (longlong *)(param_1 + 0x2b0);
  uVar5 = *(uint *)(param_1 + 0x2d8);
  puVar1 = (uint *)(param_1 + 0x2c0);
  local_88 = 0;
  uStack_84 = 1;
  uStack_74 = 0;
  uStack_70 = 0;
  if (uVar5 != 0) {
    puVar13 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = *puVar13;
    uVar7 = uVar9;
    while (uVar10 == 0) {
      iVar6 = (int)uVar9;
      uStack_70 = (int)uVar7 + 0x20;
      uVar7 = (ulonglong)uStack_70;
      local_88 = iVar6 + 1;
      uVar9 = (ulonglong)local_88;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_140e211cd;
      uVar10 = puVar13[(longlong)iVar6 + 1];
    }
    uStack_84 = uVar10 - 1 & uVar10 ^ uVar10;
    iVar6 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (uStack_70 - iVar6) + 0x1f;
    if ((int)uVar5 < (int)uStack_74) {
LAB_140e211cd:
      uStack_74 = uVar5;
    }
  }
  uVar10 = *(uint *)(param_1 + 0x2d8);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,uStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar12 = uVar10 & 0xffffffe0;
  uStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar10;
  if (uVar10 != uVar5) {
    puVar13 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = puVar13[(int)uVar10 >> 5] & -1 << ((byte)uVar10 & 0x1f);
    iVar6 = (int)uVar10 >> 5;
    while (uVar11 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_140e212a5;
      uVar11 = puVar13[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar11 = uVar11 - 1 & uVar11 ^ uVar11;
    iVar6 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (uVar12 - iVar6) + 0x1f;
    if ((int)uVar5 < (int)uStack_74) {
LAB_140e212a5:
      uStack_74 = uVar5;
    }
  }
  do {
    if ((uStack_4c == uStack_74) && (local_58 == puVar1)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      return *(longlong *)(param_1 + 0x988);
    }
    lVar3 = *(longlong *)(*plVar2 + (longlong)(int)uStack_4c * 0x10);
    if (lVar3 != 0) {
      lVar8 = AGFreezeCharacterCue::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (((bVar4) && (*(longlong *)(lVar3 + 0x6f0) == *(longlong *)(param_1 + 0xba0))) &&
         ((*(byte *)(lVar3 + 0x398) & 1) == 0)) {
        *(longlong *)(param_1 + 0x988) = lVar3;
        return lVar3;
      }
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
  } while( true );
}



// FUNCTION 140e21430 FUN_140e21430 body=358 status=ok
// SIG undefined FUN_140e21430(void)

longlong * FUN_140e21430(longlong param_1,char param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  longlong local_res8;
  longlong local_18 [2];
  
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0();
  }
  if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x30) != 0)) &&
     (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0xc0), lVar3 != 0)) {
    puVar4 = (undefined8 *)FUN_1428cc750(lVar3,local_18);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar4;
    }
    FName::FName(&local_res8,puVar6,1);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    plVar7 = *(longlong **)(param_1 + 0x178);
    plVar5 = plVar7 + (longlong)*(int *)(param_1 + 0x180) * 4;
    for (; plVar7 != plVar5; plVar7 = plVar7 + 4) {
      if (*plVar7 == local_res8) {
        lVar3 = *(longlong *)(param_1 + 0x120);
        if (lVar3 == 0) {
          lVar3 = FUN_1423407b0(param_1);
        }
        lVar3 = FUN_140e7e6f0(lVar3);
        if (lVar3 == 0) {
          return plVar7;
        }
        uVar2 = FUN_140e81420(lVar3);
        if ((*(uint *)(plVar7 + 3) >> (uVar2 & 0x1f) & 1) != 0) {
          return plVar7;
        }
        if (param_2 == '\0') {
          return (longlong *)0x0;
        }
        bVar1 = FUN_140e81420(lVar3);
        *(uint *)(plVar7 + 3) = *(uint *)(plVar7 + 3) | 1 << (bVar1 & 0x1f);
        return plVar7;
      }
    }
    if (param_2 != '\0') {
      FUN_140e1c770(param_1,local_res8,0);
      plVar7 = *(longlong **)(param_1 + 0x178);
      plVar5 = plVar7 + (longlong)*(int *)(param_1 + 0x180) * 4;
      for (; plVar7 != plVar5; plVar7 = plVar7 + 4) {
        if (*plVar7 == local_res8) {
          return plVar7;
        }
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 140e215b0 FUN_140e215b0 body=88 status=ok
// SIG undefined FUN_140e215b0(void)

undefined8 * FUN_140e215b0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = 0;
  *param_2 = 0;
  lVar1 = *(longlong *)(param_1 + 0x9a8);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    iVar2 = *(int *)(lVar1 + 8);
    bVar4 = iVar2 == 0;
    if (bVar4) {
      *(int *)(lVar1 + 8) = 0;
      iVar2 = 0;
    }
    UNLOCK();
    while (!bVar4) {
      LOCK();
      bVar4 = iVar2 == *(int *)(lVar1 + 8);
      if (bVar4) {
        *(int *)(lVar1 + 8) = iVar2 + 1;
      }
      UNLOCK();
      if (bVar4) {
        lVar3 = param_2[1];
        goto LAB_140e215ef;
      }
      LOCK();
      iVar2 = *(int *)(lVar1 + 8);
      bVar4 = iVar2 == 0;
      if (bVar4) {
        *(int *)(lVar1 + 8) = 0;
        iVar2 = 0;
      }
      UNLOCK();
    }
    param_2[1] = 0;
LAB_140e215ef:
    if (lVar3 != 0) {
      *param_2 = *(undefined8 *)(param_1 + 0x9a0);
    }
  }
  return param_2;
}



// FUNCTION 140e21620 FUN_140e21620 body=151 status=ok
// SIG undefined FUN_140e21620(void)

undefined8 FUN_140e21620(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2[0x1f];
  if (lVar1 == 0) {
    (**(code **)(*param_2 + 0x368))(param_2);
    lVar1 = param_2[0x1f];
    if (lVar1 == 0) {
      return 0;
    }
  }
  if (*(char *)(lVar1 + 0x249) == '\0') {
    return 0;
  }
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar2 = FUN_1413f1920();
  uVar2 = FUN_1417985e0(uVar2,param_1,0,0,0,0,0,0,0);
  return uVar2;
}



// FUNCTION 140e216c0 GetStartRoll body=9 status=ok
// SIG undefined GetStartRoll(void)

undefined4 USplineMeshComponent::GetStartRoll(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xa28);
}



// FUNCTION 140e216d0 FUN_140e216d0 body=97 status=ok
// SIG undefined FUN_140e216d0(void)

undefined8 FUN_140e216d0(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x4b;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy
            (local_18[0],
             L"Targeting strategy that generates actors that can be targeted by a player.",0x96);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140e21740 GetDescriptionTitle body=97 status=ok
// SIG undefined GetDescriptionTitle(void)

undefined8 UEnvQueryTest_AITacticalPoint::GetDescriptionTitle(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0xf;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Player Targets",0x1e);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140e217b0 FUN_140e217b0 body=562 status=ok
// SIG undefined FUN_140e217b0(void)

void FUN_140e217b0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  bool bVar8;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38;
  
  puVar4 = *(undefined4 **)(param_1 + 0x188);
  iVar2 = *(int *)(param_1 + 400);
  local_88 = 0;
  local_80 = 0;
  if (puVar4 != puVar4 + (longlong)iVar2 * 0xc) {
    puVar7 = puVar4 + 1;
    do {
      local_60 = puVar7[-1];
      local_5c = *puVar7;
      local_58 = puVar7[1];
      local_78 = *(undefined8 *)(puVar7 + 3);
      local_48 = 0;
      local_40 = 0;
      local_50 = 0;
      FString::FString(local_70,puVar7 + 5);
      FSoftObjectPath::operator=(&local_50,&local_78);
      local_38 = *(undefined1 *)(puVar7 + 9);
      lVar5 = FWeakObjectPtr::Get(&local_60);
      if (lVar5 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != local_58) && (local_50 != 0)) {
          lVar5 = FUN_141796df0(&local_50);
          FWeakObjectPtr::operator=(&local_60,lVar5);
          if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            local_58 = DAT_1464b56f4;
          }
          lVar5 = FWeakObjectPtr::Get(&local_60);
          if (lVar5 != 0) goto LAB_140e218ec;
        }
      }
      else {
LAB_140e218ec:
        lVar6 = FUN_1414a9b90();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          bVar8 = local_80._4_4_ != 0;
          local_80 = (ulonglong)local_80._4_4_ << 0x20;
          if (bVar8) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(&local_88,0);
          }
          FUN_14129bdc0(param_2,lVar5,&local_88,0,1);
          if (0 < (int)local_80) {
            iVar3 = (int)param_3[1];
            *(int *)(param_3 + 1) = iVar3 + 1;
            if (*(int *)((longlong)param_3 + 0xc) < iVar3 + 1) {
              TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_3,iVar3);
            }
            FUN_140e13310((longlong)iVar3 * 0x30 + *param_3,lVar5,local_38);
          }
        }
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
      puVar1 = puVar7 + 0xb;
      puVar7 = puVar7 + 0xc;
    } while (puVar1 != puVar4 + (longlong)iVar2 * 0xc);
    if (local_88 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140e219f0 FUN_140e219f0 body=86 status=ok
// SIG undefined FUN_140e219f0(void)

longlong FUN_140e219f0(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1405ec200();
  if (lVar2 != 0) {
    lVar3 = FUN_1414a9b90();
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



// FUNCTION 140e21a50 FUN_140e21a50 body=383 status=ok
// SIG undefined FUN_140e21a50(void)

void FUN_140e21a50(longlong *param_1,longlong param_2,longlong *param_3,char param_4)

{
  int iVar1;
  void *_Src;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 local_58 [16];
  undefined8 local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  puVar4 = (undefined8 *)param_1[0x2f];
  puVar5 = puVar4 + (longlong)(int)param_1[0x30] * 4;
  for (; puVar4 != puVar5; puVar4 = puVar4 + 4) {
    local_38 = *(int *)(puVar4 + 2);
    lVar6 = (longlong)local_38;
    local_48 = *puVar4;
    _Src = (void *)puVar4[1];
    local_40 = (void *)0x0;
    if (local_38 == 0) {
      local_34 = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_40,local_38,0);
      _guard_xfg_dispatch_icall_nop(local_40,_Src,lVar6 << 4);
    }
    local_30 = *(undefined4 *)(puVar4 + 3);
    if ((param_1 != (longlong *)0x0) &&
       (lVar6 = (**(code **)(*param_1 + 0x148))(param_1), lVar6 != 0)) {
      uVar3 = FName::ToString(&local_48,local_58);
      lVar6 = FUN_1412c3780(uVar3,lVar6);
      if ((lVar6 != 0) &&
         ((((param_2 == 0 || (param_4 == '\0')) || (*(longlong **)(lVar6 + 0xb8) == (longlong *)0x0)
           ) || ((cVar2 = (**(code **)(**(longlong **)(lVar6 + 0xb8) + 0x288))(), cVar2 != '\0' &&
                 (cVar2 = (**(code **)(**(longlong **)(lVar6 + 0xb8) + 0x280))
                                    (*(longlong **)(lVar6 + 0xb8),param_2), cVar2 != '\0')))))) {
        iVar1 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
        }
        *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar6;
      }
    }
    if (local_40 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140e21bd0 FUN_140e21bd0 body=8 status=ok
// SIG undefined FUN_140e21bd0(void)

undefined8 FUN_140e21bd0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x2718);
}



// FUNCTION 140e21c10 FUN_140e21c10 body=180 status=ok
// SIG undefined FUN_140e21c10(void)

longlong FUN_140e21c10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0x518);
  plVar1 = plVar5 + *(int *)(param_1 + 0x520);
  do {
    if (plVar5 == plVar1) {
      return 0;
    }
    if (*plVar5 == 0) {
LAB_140e21c99:
      bVar2 = false;
    }
    else {
      lVar3 = FWeakObjectPtr::Get(*plVar5 + 0x5d8);
      if (lVar3 == 0) {
LAB_140e21c8e:
        lVar3 = 0;
      }
      else {
        lVar4 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_140e21c8e;
      }
      if (param_2 != lVar3) goto LAB_140e21c99;
      bVar2 = true;
    }
    if (bVar2) {
      return *plVar5;
    }
    plVar5 = plVar5 + 1;
  } while( true );
}



// FUNCTION 140e21cd0 FUN_140e21cd0 body=405 status=ok
// SIG undefined FUN_140e21cd0(void)

undefined8 * FUN_140e21cd0(undefined8 *param_1,undefined8 param_2)

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
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x50))(plVar6,local_18);
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



// FUNCTION 140e21e70 FUN_140e21e70 body=803 status=ok
// SIG undefined FUN_140e21e70(void)

longlong FUN_140e21e70(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint local_88;
  uint uStack_84;
  uint uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  uint uStack_60;
  uint uStack_5c;
  uint *local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  uVar9 = 0;
  if (*(longlong *)(param_1 + 0x980) != 0) {
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x980) + 0xc);
    uVar7 = uVar9;
    if (iVar6 < (int)DAT_1469e91c4) {
      uVar10 = iVar6 >> 0x1f & 0xffff;
      uVar5 = iVar6 + uVar10;
      uVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18;
    }
    if ((*(uint *)(uVar7 + 8) >> 0x1d & 1) == 0) {
      return *(longlong *)(param_1 + 0x980);
    }
  }
  plVar2 = (longlong *)(param_1 + 0x2b0);
  uVar5 = *(uint *)(param_1 + 0x2d8);
  puVar1 = (uint *)(param_1 + 0x2c0);
  local_88 = 0;
  uStack_84 = 1;
  uStack_74 = 0;
  uStack_70 = 0;
  if (uVar5 != 0) {
    puVar13 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = *puVar13;
    uVar7 = uVar9;
    while (uVar10 == 0) {
      iVar6 = (int)uVar9;
      uStack_70 = (int)uVar7 + 0x20;
      uVar7 = (ulonglong)uStack_70;
      local_88 = iVar6 + 1;
      uVar9 = (ulonglong)local_88;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_140e21fbd;
      uVar10 = puVar13[(longlong)iVar6 + 1];
    }
    uStack_84 = uVar10 - 1 & uVar10 ^ uVar10;
    iVar6 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (uStack_70 - iVar6) + 0x1f;
    if ((int)uVar5 < (int)uStack_74) {
LAB_140e21fbd:
      uStack_74 = uVar5;
    }
  }
  uVar10 = *(uint *)(param_1 + 0x2d8);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,uStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar12 = uVar10 & 0xffffffe0;
  uStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar10;
  if (uVar10 != uVar5) {
    puVar13 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = puVar13[(int)uVar10 >> 5] & -1 << ((byte)uVar10 & 0x1f);
    iVar6 = (int)uVar10 >> 5;
    while (uVar11 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_140e22095;
      uVar11 = puVar13[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar11 = uVar11 - 1 & uVar11 ^ uVar11;
    iVar6 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (uVar12 - iVar6) + 0x1f;
    if ((int)uVar5 < (int)uStack_74) {
LAB_140e22095:
      uStack_74 = uVar5;
    }
  }
  do {
    if ((uStack_4c == uStack_74) && (local_58 == puVar1)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      return *(longlong *)(param_1 + 0x980);
    }
    lVar3 = *(longlong *)(*plVar2 + (longlong)(int)uStack_4c * 0x10);
    if (lVar3 != 0) {
      lVar8 = AGFreezeCharacterCue::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (((bVar4) && (*(longlong *)(lVar3 + 0x6f0) == *(longlong *)(param_1 + 0xb40))) &&
         ((*(byte *)(lVar3 + 0x398) & 1) == 0)) {
        *(longlong *)(param_1 + 0x980) = lVar3;
        return lVar3;
      }
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
  } while( true );
}



// FUNCTION 140e221a0 FUN_140e221a0 body=47 status=ok
// SIG undefined FUN_140e221a0(void)

longlong * FUN_140e221a0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x538);
  plVar1 = plVar2 + (longlong)*(int *)(param_1 + 0x540) * 3;
  while( true ) {
    if (plVar2 == plVar1) {
      return (longlong *)0x0;
    }
    if ((*plVar2 == param_2) && (plVar2[1] == param_3)) break;
    plVar2 = plVar2 + 3;
  }
  return plVar2;
}



// FUNCTION 140e221d0 FUN_140e221d0 body=83 status=ok
// SIG undefined FUN_140e221d0(void)

void FUN_140e221d0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = (**(code **)(*(longlong *)(param_1 + -0xd80) + 0x148))(param_1 + -0xd80);
  cVar1 = FUN_140adac00(uVar2);
  if ((cVar1 != '\0') && (lVar3 = FUN_140c430a0(param_1 + -0xd80,3), lVar3 != 0)) {
    return;
  }
  FUN_140c42f50(param_1);
  return;
}



// FUNCTION 140e22230 FUN_140e22230 body=183 status=ok
// SIG undefined FUN_140e22230(void)

longlong * FUN_140e22230(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if ((*(longlong *)(param_1 + 0x120) != 0) ||
     (lVar2 = FUN_1423407b0(), plVar5 = (longlong *)0x0, lVar2 != 0)) {
    plVar3 = *(longlong **)(param_1 + 0x178);
    plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x180) * 4;
    for (; (plVar5 = (longlong *)0x0, plVar3 != plVar4 && (plVar5 = plVar3, *plVar3 != param_2));
        plVar3 = plVar3 + 4) {
    }
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    lVar2 = FUN_140e7e6f0(lVar2);
    if (((lVar2 != 0) && (plVar5 != (longlong *)0x0)) &&
       (uVar1 = FUN_140e81420(lVar2), (*(uint *)(plVar5 + 3) >> (uVar1 & 0x1f) & 1) == 0)) {
      return (longlong *)0x0;
    }
  }
  return plVar5;
}



// FUNCTION 140e222f0 FUN_140e222f0 body=1798 status=ok
// SIG undefined FUN_140e222f0(void)

void FUN_140e222f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_140c433e0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_1468702f8) && (_Init_thread_header(&DAT_1468702f8), DAT_1468702f8 == -1)) {
    uVar1 = FUN_1413ffe00();
    FUN_1413ffe00();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"EchoDeviceRepState",1);
    DAT_1468702f0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468702f8);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468702f0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468702f0 + 0x40) + (short)iVar3;
      local_24 = 3;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468702f0 + 0x30));
  }
  if ((*piVar5 < DAT_146870308) && (_Init_thread_header(&DAT_146870308), DAT_146870308 == -1)) {
    uVar1 = FUN_1413ffe00();
    FUN_1413ffe00();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PlayerSDUs",1);
    DAT_146870300 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870308);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870300 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870300 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870300 + 0x30));
  }
  if ((*piVar5 < DAT_146870318) && (_Init_thread_header(&DAT_146870318), DAT_146870318 == -1)) {
    uVar1 = FUN_1413ffe00();
    FUN_1413ffe00();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"GrenadeFFYLRestrictionLock",1);
    DAT_146870310 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870318);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870310 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870310 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870310 + 0x30));
  }
  if ((*piVar5 < DAT_146870328) && (_Init_thread_header(&DAT_146870328), DAT_146870328 == -1)) {
    uVar1 = FUN_1413ffe00();
    FUN_1413ffe00();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bIsWeaponLowered",1);
    DAT_146870320 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870328);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870320 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870320 + 0x40) + (short)iVar3;
      local_24 = 3;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870320 + 0x30));
  }
  if ((*piVar5 < DAT_146870338) && (_Init_thread_header(&DAT_146870338), DAT_146870338 == -1)) {
    uVar1 = FUN_1413ffe00();
    FUN_1413ffe00();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bHasMenuOpen_Replicated",1);
    DAT_146870330 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870338);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870330 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870330 + 0x40) + (short)iVar3;
      local_24 = 3;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870330 + 0x30));
  }
  if ((*piVar5 < DAT_146870348) && (_Init_thread_header(&DAT_146870348), DAT_146870348 == -1)) {
    uVar1 = FUN_1413ffe00();
    FUN_1413ffe00();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bSanctuaryZeroGravity",1);
    DAT_146870340 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870348);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870340 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870340 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870340 + 0x30));
  }
  if ((*piVar5 < DAT_146870358) && (_Init_thread_header(&DAT_146870358), DAT_146870358 == -1)) {
    uVar1 = FUN_1413ffe00();
    FUN_1413ffe00();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bCanWeaponZoomWhileInjured",1);
    DAT_146870350 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870358);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870350 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870350 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870350 + 0x30));
  }
  if ((*piVar5 < DAT_146870368) && (_Init_thread_header(&DAT_146870368), DAT_146870368 == -1)) {
    uVar1 = FUN_1413ffe00();
    FUN_1413ffe00();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ClientWeaponsRestrictedRestoreSlots",1);
    DAT_146870360 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870368);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870360 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870360 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870360 + 0x30));
  }
  if ((*piVar5 < DAT_146870378) && (_Init_thread_header(&DAT_146870378), DAT_146870378 == -1)) {
    uVar1 = FUN_1413ffe00();
    FUN_1413ffe00();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"EquippedInventoryForSaveGame",1);
    DAT_146870370 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870378);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870370 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870370 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870370 + 0x30));
  }
  if ((*piVar5 < DAT_146870388) && (_Init_thread_header(&DAT_146870388), DAT_146870388 == -1)) {
    uVar1 = FUN_1413ffe00();
    FUN_1413ffe00();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ActiveWeaponsForSaveGame",1);
    DAT_146870380 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870388);
  }
  if (0 < *(int *)(DAT_146870380 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870380 + 0x40) + (short)iVar4;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146870380 + 0x30));
  }
  return;
}



// FUNCTION 140e22a00 FUN_140e22a00 body=797 status=ok
// SIG undefined FUN_140e22a00(void)

void FUN_140e22a00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146870268) && (_Init_thread_header(&DAT_146870268), DAT_146870268 == -1)) {
    uVar1 = FUN_1412e9ee0();
    FUN_1412e9ee0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PetActor",1);
    DAT_146870260 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870268);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870260 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870260 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870260 + 0x30));
  }
  if ((*piVar5 < DAT_146870278) && (_Init_thread_header(&DAT_146870278), DAT_146870278 == -1)) {
    uVar1 = FUN_1412e9ee0();
    FUN_1412e9ee0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PetCooldownPoolRef",1);
    DAT_146870270 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870278);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870270 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870270 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870270 + 0x30));
  }
  if ((*piVar5 < DAT_146870288) && (_Init_thread_header(&DAT_146870288), DAT_146870288 == -1)) {
    uVar1 = FUN_1412e9ee0();
    FUN_1412e9ee0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PetAttackCooldownPoolRef",1);
    DAT_146870280 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870288);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146870280 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870280 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146870280 + 0x30));
  }
  if ((*piVar5 < DAT_146870298) && (_Init_thread_header(&DAT_146870298), DAT_146870298 == -1)) {
    uVar1 = FUN_1412e9ee0();
    FUN_1412e9ee0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ActivePetAugment",1);
    DAT_146870290 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146870298);
  }
  if (0 < *(int *)(DAT_146870290 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146870290 + 0x40) + (short)iVar4;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146870290 + 0x30));
  }
  FUN_140e4f2c0(param_1,param_2);
  return;
}



// FUNCTION 140e22d20 FUN_140e22d20 body=686 status=ok
// SIG undefined FUN_140e22d20(void)

undefined8 FUN_140e22d20(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  switch(param_2) {
  case 0:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_e8,L"The friend operation was successful.",L"Overlay",
                       L"FriendsCallResultSuccess");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_20 = local_e0;
    break;
  case 1:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_d0,L"This operation is already in progress.",L"Overlay",
                       L"FriendsCallResultAsyncOperationStarted");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_20 = local_c8;
    break;
  case 2:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_b8,L"This operation is not necessary.",L"Overlay",
                       L"EFriendsCallResultFailureOperationRedundant");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_20 = local_b0;
    break;
  case 3:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a0,L"This operation is already in progress.",L"Overlay",
                       L"EFriendsCallResultFailureOperationAlreadyPending");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_20 = local_98;
    break;
  case 4:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_88,L"This local user is invalid.",L"Overlay",
                       L"EFriendsCallResultFailureInvalidLocalUser");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_20 = local_80;
    break;
  case 5:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_70,L"This target user is invalid.",L"Overlay",
                       L"EFriendsCallResultFailureInvalidTargetUser");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_20 = local_68;
    break;
  case 6:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"There was a server error. Please try the operation again.",
                       L"Overlay",L"EFriendsCallResultFailureMissingBackendService");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_20 = local_50;
    break;
  case 7:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,L"Please sign in before attempting this operation.",L"Overlay",
                       L"EFriendsCallResultFailureNotSignedIn");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_20 = local_38;
    break;
  default:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"Something went wrong. Please try this operation again.",L"Overlay"
                       ,L"EFriendsCallResultFailureUnknown");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
  }
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
  return param_1;
}



// FUNCTION 140e22ff0 FUN_140e22ff0 body=686 status=ok
// SIG undefined FUN_140e22ff0(void)

undefined8 FUN_140e22ff0(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  switch(param_2) {
  case 0:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_e8,L"Congratulations! You have new SHiFT rewards!",L"Overlay",
                       L"CodeRedeemSuccessMessage");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_38 = local_e0;
    break;
  case 1:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_b8,
                       L"Sorry, but the code you have entered is expired and can no longer be redeemed."
                       ,L"Overlay",L"CodeRedeemErrorExpired");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_38 = local_b0;
    break;
  case 2:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a0,
                       L"Sorry, but the code you have entered is not valid. Please ensure all 25 characters of the code are entered correctly."
                       ,L"Overlay",L"CodeRedeemErrorInvalid");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_38 = local_98;
    break;
  case 3:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_d0,L"Sorry, but the code you have entered has already been redeemed.",
                       L"Overlay",L"CodeRedeemErrorTaken");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_38 = local_c8;
    break;
  default:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"Sorry, but the code you have entered cannot be redeemed.",
                       L"Overlay",L"CodeRedeemErrorGeneralFailure");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_38 = local_20;
    break;
  case 5:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_88,
                       L"Unable to communicate with SHiFT. Please check your network connection and try again."
                       ,L"Overlay",L"CodeRedeemErrorNetworkFailure");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_38 = local_80;
    break;
  case 6:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_70,
                       L"Your SHiFT session has timed out. You will be automatically reconnected. Please try again later."
                       ,L"Overlay",L"CodeRedeemErrorTimeout");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_38 = local_68;
    break;
  case 7:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,
                       L"You have already redeemed this one-time offer. Feel free to share this code with a friend!"
                       ,L"Overlay",L"CodeRedeemErrorDuplicate");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_38 = local_50;
    break;
  case 8:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,L"You already have this item.",L"Overlay",
                       L"CodeRedeemErrorAtCapacity");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return param_1;
}



// FUNCTION 140e232d0 FUN_140e232d0 body=686 status=ok
// SIG undefined FUN_140e232d0(void)

undefined8 FUN_140e232d0(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  switch(param_2) {
  case 0:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_d0,L"Name changed successfully.",L"Overlay",L"DisplayNameError_Success"
                      );
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_20 = local_c8;
    break;
  case 1:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_b8,L"Name is blank, please choose a different name.",L"Overlay",
                       L"DisplayNameError_Blank");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_20 = local_b0;
    break;
  case 2:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_70,L"Name is taken, please choose a different name.",L"Overlay",
                       L"DisplayNameError_Taken");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_20 = local_68;
    break;
  case 3:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"Name is too short, please choose a different name.",L"Overlay",
                       L"DisplayNameError_TooShort");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_20 = local_50;
    break;
  case 4:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,L"Name is too long, please choose a different name.",L"Overlay",
                       L"DisplayNameError_TooLong");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_20 = local_38;
    break;
  case 5:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_88,L"Name is invalid, please choose a different name.",L"Overlay",
                       L"DisplayNameError_Invalid");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_20 = local_80;
    break;
  case 6:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_e8,L"Name is abusive, please choose a different name.",L"Overlay",
                       L"DisplayNameError_Abusive");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_20 = local_e0;
    break;
  case 7:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a0,L"Name is disallowed, please choose a different name.",L"Overlay",
                       L"DisplayNameError_Disallowed");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_20 = local_98;
    break;
  default:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"There was an internal error, please try again.",L"Overlay",
                       L"DisplayNameError_InternalError");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
  }
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
  return param_1;
}



// FUNCTION 140e235a0 FUN_140e235a0 body=700 status=ok
// SIG undefined FUN_140e235a0(void)

undefined8 * FUN_140e235a0(undefined8 *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  switch(param_2) {
  case 0:
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  case 1:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,
                       L"The SHiFT account you are signing into requires Two-Factor Authentication."
                       ,L"Overlay",L"SignInErrorMfaRequired");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_50 = local_38;
    break;
  case 2:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_e8,
                       L"This profile is already associated with a different SHiFT account.",
                       L"Overlay",L"SignInErrorTakenByOther_PC");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_50 = local_e0;
    break;
  case 3:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_d0,
                       L"You already have a profile associated with this SHiFT account and you cannot be associated with more than one."
                       ,L"Overlay",L"SignInErrorTakenBySelf_PC");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_50 = local_c8;
    break;
  case 4:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_b8,
                       L"You have a profile from a different platform associated with this SHiFT account that doesn\'t match the account you are signing into."
                       ,L"Overlay",L"SignInErrorOtherTakenBySelf");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_50 = local_b0;
    break;
  case 5:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a0,
                       L"Your E-mail and password combination do not match a SHiFT account. Please check E-mail address and password and try again."
                       ,L"Overlay",L"SignInErrorLoginFailure");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_50 = local_98;
    break;
  case 6:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_88,
                       L"Unable to communicate with SHiFT. Please check your network connection and try again."
                       ,L"Overlay",L"SignInErrorNetworkFailure");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_50 = local_80;
    break;
  default:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"Unable to sign in to SHiFT. Please try again later.",L"Overlay",
                       L"SignInErrorGeneralFailure");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_50 = local_20;
    break;
  case 8:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_70,
                       L"Your SHiFT session has timed out. You will be automatically reconnected. Please try again later."
                       ,L"Overlay",L"SignInErrorTimeout");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_50 = local_68;
    break;
  case 9:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,
                       L"Your Display Name does not match the Display Name for the SHiFT account you are signing into."
                       ,L"Overlay",L"SignInErrorNameConflict");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return param_1;
}



// FUNCTION 140e23890 FUN_140e23890 body=832 status=ok
// SIG undefined FUN_140e23890(void)

undefined8 * FUN_140e23890(undefined8 *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
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
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  switch(param_2) {
  case 0:
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  case 1:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_118,L"This e-mail already has a SHiFT account.",L"Overlay",
                       L"SignUpErrorEmailTakenText");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_38 = local_110;
    break;
  case 2:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_100,L"You are already associated with a SHiFT account.",L"Overlay",
                       L"SignUpErrorPlatformTakenText");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_38 = local_f8;
    break;
  default:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"Unable to create SHiFT account. Please try again later.",
                       L"Overlay",L"SignUpErrorGeneralFailureText");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_38 = local_20;
    break;
  case 4:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_e8,L"You must specify a password.",L"Overlay",
                       L"SignUpErrorPasswordBlankText");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_38 = local_e0;
    break;
  case 5:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_d0,
                       L"The password you have specified is too short. A valid password contains a minimum of 8 characters."
                       ,L"Overlay",L"SignUpErrorPasswordTooShortText");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_38 = local_c8;
    break;
  case 6:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_b8,L"The password you have specified is too long.",L"Overlay",
                       L"SignUpErrorPasswordTooLongText");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_38 = local_b0;
    break;
  case 7:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a0,
                       L"The password you have specified contains invalid characters. It must be 8+ characters long, with at least one uppercase character, one lowercase character, and one number or special character."
                       ,L"Overlay",L"SignUpErrorPasswordInvalidText");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_38 = local_98;
    break;
  case 8:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_88,L"You must specify an e-mail.",L"Overlay",
                       L"SignUpErrorEmailBlankText");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_38 = local_80;
    break;
  case 9:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_70,L"The e-mail address you have specified is not valid.",L"Overlay",
                       L"SignUpErrorEmailInvalidText");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_38 = local_68;
    break;
  case 10:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,
                       L"Unable to communicate with SHiFT. Please check your network connection and try again."
                       ,L"Overlay",L"SignUpErrorNetworkFailureText");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
    local_38 = local_50;
    break;
  case 0xb:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,
                       L"Your SHiFT session has timed out. You will be automatically reconnected. Please try again later."
                       ,L"Overlay",L"SignUpErrorTimeoutText");
    uVar5 = FText::ToString(uVar5);
    FString::FString(param_1,uVar5);
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return param_1;
}



// FUNCTION 140e23c00 FUN_140e23c00 body=343 status=ok
// SIG undefined FUN_140e23c00(void)

undefined8 * FUN_140e23c00(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong local_38;
  longlong *plStack_30;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *plStack_10;
  
  local_28 = *(longlong *)(param_1 + 0xb0);
  if (local_28 != 0) {
    local_20 = *(longlong **)(param_1 + 0xb8);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    lVar5 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar5 + 0x18),&local_38,&local_28);
    plVar3 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_20)(local_20);
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
    if (local_38 != 0) {
      local_18 = local_38;
      plStack_10 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
        UNLOCK();
      }
      FUN_140e23ec0(param_2,&local_18);
      if (plStack_30 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      plVar3 = plStack_30 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 != 1) {
        return param_2;
      }
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plStack_30 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 != 1) {
        return param_2;
      }
      (**(code **)(*plStack_30 + 8))(plStack_30,1);
      return param_2;
    }
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_30 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plStack_30 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_30 + 8))(plStack_30,1);
        }
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140e23d60 FUN_140e23d60 body=337 status=ok
// SIG undefined FUN_140e23d60(void)

undefined8 * FUN_140e23d60(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong local_38;
  longlong *plStack_30;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *plStack_10;
  
  local_28 = *(longlong *)(param_1 + 0x38);
  if (local_28 != 0) {
    local_20 = *(longlong **)(param_1 + 0x40);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    lVar5 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar5 + 0x18),&local_38,&local_28);
    plVar3 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_20)(local_20);
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
    if (local_38 != 0) {
      local_18 = local_38;
      plStack_10 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
        UNLOCK();
      }
      FUN_140e23ec0(param_2,&local_18);
      if (plStack_30 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      plVar3 = plStack_30 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 != 1) {
        return param_2;
      }
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plStack_30 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 != 1) {
        return param_2;
      }
      (**(code **)(*plStack_30 + 8))(plStack_30,1);
      return param_2;
    }
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_30 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plStack_30 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_30 + 8))(plStack_30,1);
        }
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140e23ec0 FUN_140e23ec0 body=531 status=ok
// SIG undefined FUN_140e23ec0(void)

undefined8 * FUN_140e23ec0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong local_88;
  undefined8 local_80;
  undefined2 *local_78;
  int local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [16];
  longlong local_30;
  
  if (*param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    plVar8 = (longlong *)param_2[1];
  }
  else {
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,
                       L"Your SHiFT Support ID is {0}. Contact support.gearboxsoftware.com for help with SHiFT."
                       ,L"Overlay",L"SHiFTSupportText");
    puVar5 = (undefined8 *)FText::ToString(uVar4);
    puVar10 = (undefined2 *)0x0;
    local_78 = (undefined2 *)0x0;
    local_70 = *(int *)(puVar5 + 1);
    lVar9 = (longlong)local_70;
    _Src = (void *)*puVar5;
    if (local_70 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,local_70,0);
      puVar10 = local_78;
      _guard_xfg_dispatch_icall_nop(local_78,_Src,lVar9 * 2);
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_50 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      puVar10 = local_78;
      if ((int)lVar9 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        puVar10 = local_78;
        if (iVar6 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
          puVar10 = local_78;
        }
      }
    }
    local_88 = 0;
    local_80 = 0;
    uVar4 = FUN_142b4b180(*param_2);
    uVar4 = FString::FString(local_68,uVar4);
    uVar4 = FStringFormatArg::FStringFormatArg(local_40,uVar4);
    uVar3 = local_80;
    lVar9 = (longlong)(int)local_80;
    iVar6 = (int)local_80 + 1;
    local_80 = CONCAT44(local_80._4_4_,iVar6);
    if (local_80._4_4_ < iVar6) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(&local_88,uVar3 & 0xffffffff);
    }
    FStringFormatArg::FStringFormatArg(lVar9 * 0x20 + local_88,uVar4);
    if (local_30 != 0) {
      FMemory::Free();
    }
    puVar7 = &DAT_143f3eda8;
    if (local_70 != 0) {
      puVar7 = puVar10;
    }
    FString::Format(param_1,puVar7,&local_88);
    if ((int)local_80 != 0) {
      plVar8 = (longlong *)(local_88 + 0x10);
      iVar6 = (int)local_80;
      do {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
    if (puVar10 != (undefined2 *)0x0) {
      FMemory::Free(puVar10);
    }
    plVar8 = (longlong *)param_2[1];
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140e240e0 FUN_140e240e0 body=226 status=ok
// SIG undefined FUN_140e240e0(void)

undefined8
FUN_140e240e0(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,undefined8 param_5,
             undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_58 [16];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  
  if (param_2 != 0) {
    iVar2 = FUN_140e50ca0(param_1 + 0x2950);
    iVar2 = iVar2 + 1;
    *param_3 = iVar2;
    if ((0 < iVar2) && (iVar3 = FUN_140e4fee0(param_2), iVar2 <= iVar3)) {
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      local_48[0] = 0;
      local_18 = 0x3f800000;
      local_28 = 0;
      uStack_20 = 0;
      cVar1 = FUN_140e50ce0(param_2,iVar2,param_4,param_5,local_58);
      if (cVar1 != '\0') {
        uVar4 = FUN_142c98860(local_48,param_1);
        *param_6 = uVar4;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140e241d0 GetSwingActor body=8 status=ok
// SIG undefined GetSwingActor(void)

undefined8 AUGCharacter::GetSwingActor(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xa68);
}



// FUNCTION 140e241e0 FUN_140e241e0 body=678 status=ok
// SIG undefined FUN_140e241e0(void)

longlong * FUN_140e241e0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((char)param_1[0x1b] != '\0') {
    *(undefined4 *)(param_2 + 1) = 1;
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2,0);
    puVar3 = (undefined8 *)*param_2;
    *puVar3 = DAT_1469e9958;
    puVar3[1] = DAT_1469e9960;
    lVar4 = DAT_1469e9968;
    puVar3[2] = DAT_1469e9968;
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar2);
    }
    puVar3 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x18);
    *puVar3 = DAT_1469e98f8;
    puVar3[1] = DAT_1469e9900;
    lVar4 = DAT_1469e9908;
    puVar3[2] = DAT_1469e9908;
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar2);
    }
    puVar3 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x18);
    *puVar3 = DAT_1469ea510;
    puVar3[1] = DAT_1469ea518;
    lVar4 = DAT_1469ea520;
    puVar3[2] = DAT_1469ea520;
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  cVar5 = (**(code **)(*param_1 + 0x28))(param_1);
  if (cVar5 == '\0') {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar2);
    }
    puVar3 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x18);
    *puVar3 = DAT_1469e9b98;
    puVar3[1] = DAT_1469e9ba0;
    lVar4 = DAT_1469e9ba8;
    puVar3[2] = DAT_1469e9ba8;
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar2);
    }
    puVar3 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x18);
    *puVar3 = DAT_1469e9dc0;
    puVar3[1] = DAT_1469e9dc8;
    lVar4 = DAT_1469e9dd0;
    puVar3[2] = DAT_1469e9dd0;
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar2);
    }
    puVar3 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x18);
    *puVar3 = DAT_1469ea030;
    puVar3[1] = DAT_1469ea038;
    lVar4 = DAT_1469ea040;
    puVar3[2] = DAT_1469ea040;
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2,iVar2);
  }
  puVar3 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x18);
  *puVar3 = DAT_1469ea558;
  puVar3[1] = DAT_1469ea560;
  lVar4 = DAT_1469ea568;
  puVar3[2] = DAT_1469ea568;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2,iVar2);
  }
  puVar3 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x18);
  *puVar3 = DAT_1469ea570;
  puVar3[1] = DAT_1469ea578;
  lVar4 = DAT_1469ea580;
  puVar3[2] = DAT_1469ea580;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 140e24490 FUN_140e24490 body=675 status=ok
// SIG undefined FUN_140e24490(void)

longlong * FUN_140e24490(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((char)param_1[0xc] != '\0') {
    *(undefined4 *)(param_2 + 1) = 1;
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2,0);
    puVar3 = (undefined8 *)*param_2;
    *puVar3 = DAT_1469e9958;
    puVar3[1] = DAT_1469e9960;
    lVar4 = DAT_1469e9968;
    puVar3[2] = DAT_1469e9968;
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar2);
    }
    puVar3 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x18);
    *puVar3 = DAT_1469e98f8;
    puVar3[1] = DAT_1469e9900;
    lVar4 = DAT_1469e9908;
    puVar3[2] = DAT_1469e9908;
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar2);
    }
    puVar3 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x18);
    *puVar3 = DAT_1469ea510;
    puVar3[1] = DAT_1469ea518;
    lVar4 = DAT_1469ea520;
    puVar3[2] = DAT_1469ea520;
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  cVar5 = (**(code **)(*param_1 + 0x28))(param_1);
  if (cVar5 == '\0') {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar2);
    }
    puVar3 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x18);
    *puVar3 = DAT_1469e9b98;
    puVar3[1] = DAT_1469e9ba0;
    lVar4 = DAT_1469e9ba8;
    puVar3[2] = DAT_1469e9ba8;
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar2);
    }
    puVar3 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x18);
    *puVar3 = DAT_1469e9dc0;
    puVar3[1] = DAT_1469e9dc8;
    lVar4 = DAT_1469e9dd0;
    puVar3[2] = DAT_1469e9dd0;
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar2);
    }
    puVar3 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x18);
    *puVar3 = DAT_1469ea030;
    puVar3[1] = DAT_1469ea038;
    lVar4 = DAT_1469ea040;
    puVar3[2] = DAT_1469ea040;
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2,iVar2);
  }
  puVar3 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x18);
  *puVar3 = DAT_1469ea558;
  puVar3[1] = DAT_1469ea560;
  lVar4 = DAT_1469ea568;
  puVar3[2] = DAT_1469ea568;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2,iVar2);
  }
  puVar3 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0x18);
  *puVar3 = DAT_1469ea570;
  puVar3[1] = DAT_1469ea578;
  lVar4 = DAT_1469ea580;
  puVar3[2] = DAT_1469ea580;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 140e24740 FUN_140e24740 body=63 status=ok
// SIG undefined FUN_140e24740(void)

undefined8 FUN_140e24740(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_142d52a00(param_1 + 0x3b0);
  if (cVar1 != '\0') {
    uVar2 = FUN_142d52a20(param_1 + 0x3b0);
    uVar2 = FArchive::operator<<(uVar2);
    uVar2 = FUN_142d5fea0(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140e24780 FUN_140e24780 body=27 status=ok
// SIG undefined FUN_140e24780(void)

undefined8 * FUN_140e24780(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x3b8);
  uVar1 = *(undefined8 *)(param_1 + 0x3c0);
  *param_2 = *(undefined8 *)(param_1 + 0x3b0);
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  return param_2;
}



// FUNCTION 140e247a0 FUN_140e247a0 body=269 status=ok
// SIG undefined FUN_140e247a0(void)

longlong FUN_140e247a0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x298);
  lVar5 = (longlong)*(int *)(param_1 + 0x2a0) * 0x58 + lVar4;
  if (lVar4 != lVar5) {
    do {
      lVar2 = FWeakObjectPtr::Get(lVar4);
      if (lVar2 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(lVar4 + 8)) && (*(longlong *)(lVar4 + 0x10) != 0)) {
          lVar2 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar4,lVar2);
          if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(lVar4 + 8) = DAT_1464b56f4;
          }
          lVar2 = FWeakObjectPtr::Get(lVar4);
          if (lVar2 != 0) goto LAB_140e24848;
        }
LAB_140e2487e:
        lVar2 = 0;
      }
      else {
LAB_140e24848:
        lVar3 = FUN_1413e0560();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_140e2487e;
      }
      if (lVar2 == param_2) {
        return lVar4;
      }
      lVar4 = lVar4 + 0x58;
    } while (lVar4 != lVar5);
  }
  return 0;
}



// FUNCTION 140e248b0 FUN_140e248b0 body=223 status=ok
// SIG undefined FUN_140e248b0(void)

ulonglong FUN_140e248b0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  float fVar4;
  undefined8 uVar5;
  
  param_1 = param_1 + 0x390;
  cVar3 = FUN_142d52a00(param_1);
  if (cVar3 != '\0') {
    uVar1 = FUN_142d52a20(param_1);
    uVar1 = FArchive::operator<<(uVar1);
    uVar5 = FUN_142d61c30(uVar1);
    uVar1 = FUN_142d52a20(param_1);
    uVar1 = FArchive::operator<<(uVar1);
    fVar4 = (float)FUN_142d5fed0(uVar1);
    uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),(float)uVar5 - fVar4);
    uVar1 = FUN_142d52a20(param_1);
    uVar1 = FArchive::operator<<(uVar1);
    fVar4 = (float)FUN_142d628b0(uVar1);
    if (fVar4 == 0.0) {
      uVar1 = FUN_142d52a20(param_1);
      lVar2 = FArchive::operator<<(uVar1);
      fVar4 = *(float *)(lVar2 + 0x38);
      uVar1 = FUN_142d52a20(param_1);
      uVar1 = FArchive::operator<<(uVar1);
      uVar5 = FUN_142d5fed0(uVar1);
    }
    return CONCAT44((int)((ulonglong)uVar5 >> 0x20),ABS((float)uVar5) / fVar4) & 0x7fffffffffffffff;
  }
  return 0;
}



// FUNCTION 140e24990 FUN_140e24990 body=175 status=ok
// SIG undefined FUN_140e24990(void)

longlong FUN_140e24990(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  plVar8 = *(longlong **)(DAT_146b33f38 + 0xf0);
  plVar1 = plVar8 + *(int *)(DAT_146b33f38 + 0xf8);
  do {
    if (plVar8 == plVar1) {
      return 0;
    }
    lVar3 = *plVar8;
    if (lVar3 != 0) {
      plVar5 = (longlong *)FUN_140e61420(lVar3);
      if (*plVar5 != 0) {
        lVar6 = FUN_1413f82e0();
        lVar7 = *plVar5;
        for (lVar4 = lVar7; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
          if (lVar4 == lVar6) goto LAB_140e24a17;
        }
      }
      lVar7 = 0;
LAB_140e24a17:
      if (lVar7 == lVar2) {
        return lVar3;
      }
    }
    plVar8 = plVar8 + 1;
  } while( true );
}



// FUNCTION 140e24a40 FUN_140e24a40 body=54 status=ok
// SIG undefined FUN_140e24a40(void)

undefined8 * FUN_140e24a40(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  *param_2 = 0;
  cVar1 = FUN_140e27720();
  if (cVar1 != '\0') {
    *param_2 = *(undefined8 *)(param_1 + 0x2d0);
  }
  return param_2;
}



// FUNCTION 140e24a80 FUN_140e24a80 body=120 status=ok
// SIG undefined FUN_140e24a80(void)

longlong FUN_140e24a80(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0x3d0) == (longlong *)0x0) {
    return 0;
  }
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x670))();
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
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



// FUNCTION 140e24b00 FUN_140e24b00 body=42 status=ok
// SIG undefined FUN_140e24b00(void)

undefined8 FUN_140e24b00(longlong *param_1,undefined8 param_2)

{
  undefined1 local_18 [16];
  
  (**(code **)(*param_1 + 0x938))(param_1,param_1[0x14c],param_2,local_18);
  return param_2;
}



// FUNCTION 140e24b30 FUN_140e24b30 body=1304 status=ok
// SIG undefined FUN_140e24b30(void)

int FUN_140e24b30(longlong param_1,undefined8 param_2,longlong param_3,uint param_4,
                 longlong *param_5)

{
  longlong lVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int local_98;
  int local_94;
  int *local_88;
  int *local_78;
  int local_70;
  int local_6c;
  longlong local_68;
  int local_60;
  int local_5c;
  longlong *local_58;
  int local_50;
  
  local_94 = 0;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar1 == 0) {
    return 0;
  }
  local_50 = *(int *)(lVar1 + 0x1100);
  lVar8 = (longlong)local_50;
  _Src = *(void **)(lVar1 + 0x10f8);
  local_58 = (longlong *)0x0;
  if (local_50 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_58,local_50,0);
    _guard_xfg_dispatch_icall_nop(local_58,_Src,lVar8 << 3);
  }
  piVar14 = (int *)0x0;
  iVar19 = 0;
  local_68 = 0;
  iVar3 = 0;
  iVar20 = 0;
  local_5c = 0;
  local_78 = (int *)0x0;
  local_6c = 0;
  local_98 = 0;
  local_88 = (int *)0x0;
  iVar13 = 0;
  iVar21 = 0;
  iVar2 = 0;
  piVar5 = (int *)((ulonglong)((longlong)(local_58 + local_50) + (7 - (longlong)local_58)) >> 3);
  if (local_58 + local_50 < local_58) {
    piVar5 = piVar14;
  }
  plVar11 = local_58;
  if (piVar5 != (int *)0x0) {
    do {
      lVar1 = *plVar11;
      iVar2 = iVar21;
      if (*(longlong *)(lVar1 + 0x30) == param_1) {
        lVar8 = (longlong)iVar3;
        local_60 = iVar3 + 1;
        if (iVar20 < local_60) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_68,iVar3);
          iVar19 = local_6c;
        }
        iVar3 = local_60;
        *(longlong *)(local_68 + lVar8 * 8) = lVar1;
        plVar9 = *(longlong **)(param_3 + 0x188);
        plVar4 = plVar9 + (longlong)*(int *)(param_3 + 400) * 4;
        for (; plVar9 != plVar4; plVar9 = plVar9 + 4) {
          if (*plVar9 == lVar1) {
            lVar1 = plVar9[1];
            local_70 = iVar13 + 1;
            if (iVar19 < local_70) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_78,iVar13);
              piVar14 = local_78;
              iVar19 = local_6c;
            }
            piVar14[iVar13] = (int)lVar1 + 1;
            iVar2 = (int)plVar9[1] + 1;
            iVar20 = local_5c;
            iVar13 = local_70;
            if (iVar2 <= iVar21) {
              iVar2 = iVar21;
            }
            goto LAB_140e24d14;
          }
        }
        local_70 = iVar13 + 1;
        if (iVar19 < local_70) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_78,iVar13);
          piVar14 = local_78;
          iVar19 = local_6c;
        }
        piVar14[iVar13] = 1;
        iVar20 = local_5c;
        iVar13 = local_70;
        if (iVar21 == 0) {
          iVar2 = 1;
        }
      }
LAB_140e24d14:
      local_88 = (int *)((longlong)local_88 + 1);
      plVar11 = plVar11 + 1;
      iVar21 = iVar2;
    } while (local_88 != piVar5);
  }
  uVar6 = 0;
  uVar10 = (ulonglong)((longlong)(piVar14 + iVar13) + (3 - (longlong)piVar14)) >> 2;
  if (piVar14 + iVar13 < piVar14) {
    uVar10 = uVar6;
  }
  if (uVar10 != 0) {
    piVar5 = piVar14;
    if (7 < uVar10) {
      iVar19 = 0;
      iVar20 = 0;
      iVar21 = 0;
      iVar22 = 0;
      iVar23 = 0;
      iVar24 = 0;
      iVar25 = 0;
      iVar26 = 0;
      do {
        uVar6 = uVar6 + 8;
        iVar15 = (iVar2 - *piVar5) + 1;
        iVar16 = (iVar2 - piVar5[1]) + 1;
        iVar17 = (iVar2 - piVar5[2]) + 1;
        iVar18 = (iVar2 - piVar5[3]) + 1;
        *piVar5 = iVar15;
        piVar5[1] = iVar16;
        piVar5[2] = iVar17;
        piVar5[3] = iVar18;
        iVar19 = iVar19 + iVar15;
        iVar20 = iVar20 + iVar16;
        iVar21 = iVar21 + iVar17;
        iVar22 = iVar22 + iVar18;
        iVar15 = (iVar2 - piVar5[4]) + 1;
        iVar16 = (iVar2 - piVar5[5]) + 1;
        iVar17 = (iVar2 - piVar5[6]) + 1;
        iVar18 = (iVar2 - piVar5[7]) + 1;
        piVar5[4] = iVar15;
        piVar5[5] = iVar16;
        piVar5[6] = iVar17;
        piVar5[7] = iVar18;
        piVar5 = piVar5 + 8;
        iVar23 = iVar23 + iVar15;
        iVar24 = iVar24 + iVar16;
        iVar25 = iVar25 + iVar17;
        iVar26 = iVar26 + iVar18;
      } while (uVar6 != (uVar10 & 0xfffffffffffffff8));
      local_98 = iVar19 + iVar23 + iVar21 + iVar25 + iVar20 + iVar24 + iVar22 + iVar26;
    }
    for (; uVar6 != uVar10; uVar6 = uVar6 + 1) {
      iVar19 = (iVar2 - *piVar5) + 1;
      local_98 = local_98 + iVar19;
      *piVar5 = iVar19;
      piVar5 = piVar5 + 1;
    }
  }
  uVar6 = (ulonglong)param_4;
  iVar19 = local_98;
  if (0 < (int)param_4) {
    do {
      iVar20 = 0;
      if (0 < iVar19) {
        iVar20 = rand();
        iVar21 = (int)((float)iVar20 * 3.051851e-05 * (float)iVar19);
        iVar20 = iVar19 + -1;
        if (iVar21 <= iVar19 + -1) {
          iVar20 = iVar21;
        }
      }
      uVar7 = 0;
      uVar10 = uVar7;
      uVar12 = uVar7;
      if (0 < iVar13) {
        do {
          iVar21 = (int)uVar7;
          iVar2 = (int)uVar10;
          if (((iVar21 <= iVar20) && (iVar20 < piVar14[uVar12] + iVar21)) || (iVar13 + -1 <= iVar2))
          {
            iVar19 = (int)param_5[1];
            *(int *)(param_5 + 1) = iVar19 + 1;
            if (*(int *)((longlong)param_5 + 0xc) < iVar19 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_5,iVar19);
            }
            local_94 = local_94 + 1;
            *(undefined8 *)(*param_5 + (longlong)iVar19 * 8) =
                 *(undefined8 *)(local_68 + uVar12 * 8);
            iVar19 = local_98 - piVar14[uVar12];
            iVar20 = (iVar3 - iVar2) + -1;
            if (iVar20 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(local_68 + (longlong)iVar2 * 8),
                         (void *)(local_68 + (longlong)(iVar2 + 1) * 8),(longlong)iVar20 << 3);
            }
            local_60 = iVar3 + -1;
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&local_68);
            iVar3 = (iVar13 - iVar2) + -1;
            if (iVar3 != 0) {
              _guard_xfg_dispatch_icall_nop
                        (piVar14 + iVar2,piVar14 + (iVar2 + 1),(longlong)iVar3 << 2);
            }
            local_70 = iVar13 + -1;
            TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&local_78);
            piVar14 = local_78;
            local_98 = iVar19;
            iVar3 = local_60;
            iVar13 = local_70;
            break;
          }
          uVar7 = (ulonglong)(uint)(iVar21 + piVar14[uVar12]);
          uVar10 = (ulonglong)(iVar2 + 1U);
          uVar12 = uVar12 + 1;
        } while ((int)(iVar2 + 1U) < iVar13);
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (piVar14 != (int *)0x0) {
    FMemory::Free(piVar14);
  }
  if (local_68 != 0) {
    FMemory::Free(local_68);
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  return local_94;
}



// FUNCTION 140e25050 FUN_140e25050 body=130 status=ok
// SIG undefined FUN_140e25050(void)

undefined8 * FUN_140e25050(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_28 [32];
  
  uVar1 = *(undefined4 *)(param_1 + 0xb8c);
  puVar6 = (undefined8 *)FRotator::Quaternion(param_1 + 0xb80,local_28);
  uVar4 = *(undefined8 *)(param_1 + 0xb74);
  uVar5 = puVar6[1];
  *param_2 = *puVar6;
  param_2[1] = uVar5;
  auVar2._8_4_ = *(undefined4 *)(param_1 + 0xb7c);
  auVar2._0_8_ = uVar4;
  auVar2._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 2) = auVar2;
  auVar3._4_4_ = uVar1;
  auVar3._0_4_ = uVar1;
  auVar3._8_4_ = uVar1;
  auVar3._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 4) = auVar3;
  return param_2;
}



// FUNCTION 140e250e0 FUN_140e250e0 body=131 status=ok
// SIG undefined FUN_140e250e0(void)

ulonglong FUN_140e250e0(longlong *param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  uint7 uVar5;
  ulonglong uVar4;
  
  lVar2 = (**(code **)(*param_1 + 0x440))();
  uVar4 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_1413f1920();
    uVar5 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      uVar4 = (ulonglong)uVar5 << 8;
      bVar1 = false;
    }
    else {
      uVar4 = CONCAT71(uVar5,1);
      bVar1 = true;
    }
    if (bVar1) {
      uVar5 = (uint7)(uVar4 >> 8);
      if ((param_3 < 0) || (*(int *)(lVar2 + 0x30) <= param_3)) {
        uVar4 = (ulonglong)uVar5 << 8;
        bVar1 = false;
      }
      else {
        uVar4 = CONCAT71(uVar5,1);
        bVar1 = true;
      }
      if (bVar1) {
        return (ulonglong)*(byte *)((longlong)param_3 + *(longlong *)(lVar2 + 0x28));
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 140e25170 FUN_140e25170 body=205 status=ok
// SIG undefined FUN_140e25170(void)

undefined8 * FUN_140e25170(longlong param_1,undefined8 *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  
  switch(param_3) {
  default:
    uVar1 = *(undefined4 *)(param_1 + 0x34);
    *param_2 = *(undefined8 *)(param_1 + 0x2c);
    *(undefined4 *)(param_2 + 1) = uVar1;
    return param_2;
  case 1:
    uVar1 = *(undefined4 *)(param_1 + 0x40);
    *param_2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(param_2 + 1) = uVar1;
    return param_2;
  case 2:
    uVar1 = *(undefined4 *)(param_1 + 0x4c);
    *param_2 = *(undefined8 *)(param_1 + 0x44);
    *(undefined4 *)(param_2 + 1) = uVar1;
    return param_2;
  case 3:
    lVar2 = 0x2c;
    break;
  case 4:
    lVar2 = 0x2c;
    if (param_4 != 2) {
      lVar2 = 0x50;
    }
    uVar1 = *(undefined4 *)(lVar2 + 8 + param_1);
    *param_2 = *(undefined8 *)(lVar2 + param_1);
    *(undefined4 *)(param_2 + 1) = uVar1;
    return param_2;
  case 5:
    lVar2 = 0x44;
    break;
  case 6:
    lVar2 = 0x44;
    param_4 = param_4 + -2;
    break;
  case 7:
    uVar1 = *(undefined4 *)(param_1 + 0x58);
    *param_2 = *(undefined8 *)(param_1 + 0x50);
    *(undefined4 *)(param_2 + 1) = uVar1;
    return param_2;
  }
  if (param_4 != 0) {
    lVar2 = 0x50;
  }
  uVar1 = *(undefined4 *)(lVar2 + 8 + param_1);
  *param_2 = *(undefined8 *)(lVar2 + param_1);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 140e25260 FUN_140e25260 body=12 status=ok
// SIG undefined FUN_140e25260(void)

void FUN_140e25260(longlong param_1)

{
  FUN_140e50ca0(param_1 + 0x2950);
  return;
}



// FUNCTION 140e25270 FUN_140e25270 body=167 status=ok
// SIG undefined FUN_140e25270(void)

undefined8 * FUN_140e25270(longlong param_1,undefined8 *param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  
  switch(param_3) {
  default:
    *param_2 = *(undefined8 *)(param_1 + 0xc);
    return param_2;
  case 1:
    *param_2 = *(undefined8 *)(param_1 + 0x14);
    return param_2;
  case 2:
    *param_2 = *(undefined8 *)(param_1 + 0x1c);
    return param_2;
  case 3:
    lVar1 = 0xc;
    break;
  case 4:
    lVar1 = 0xc;
    if (param_4 != 2) {
      lVar1 = 0x24;
    }
    *param_2 = *(undefined8 *)(lVar1 + param_1);
    return param_2;
  case 5:
    lVar1 = 0x1c;
    break;
  case 6:
    lVar1 = 0x1c;
    param_4 = param_4 + -2;
    break;
  case 7:
    *param_2 = *(undefined8 *)(param_1 + 0x24);
    return param_2;
  }
  if (param_4 != 0) {
    lVar1 = 0x24;
  }
  *param_2 = *(undefined8 *)(lVar1 + param_1);
  return param_2;
}



// FUNCTION 140e25340 FUN_140e25340 body=451 status=ok
// SIG undefined FUN_140e25340(void)

undefined8 * FUN_140e25340(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_res8 [8];
  longlong local_48 [3];
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  local_18 = *(longlong *)(param_1 + 0xb0);
  if (local_18 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  local_10 = *(longlong **)(param_1 + 0xb8);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  lVar5 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar5 + 0x18),&local_28,&local_18);
  plVar3 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
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
  if (local_28 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    uVar6 = FName::FName(local_res8,L"Account",1);
    FUN_142b4a0e0(local_28,local_48 + 2,uVar6);
    if (local_48[2] == 0) {
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      local_48[0] = 0;
      local_48[1] = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
      FGenericPlatformString::Memcpy(local_48[0],L"ShiftUrl",0x12);
      FUN_142afb430(local_48[2],param_2,local_48);
      if (local_48[0] != 0) {
        FMemory::Free();
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_30 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 140e25510 FUN_140e25510 body=445 status=ok
// SIG undefined FUN_140e25510(void)

undefined8 * FUN_140e25510(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_res8 [8];
  longlong local_48 [3];
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  local_18 = *(longlong *)(param_1 + 0x38);
  if (local_18 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  local_10 = *(longlong **)(param_1 + 0x40);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  lVar5 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar5 + 0x18),&local_28,&local_18);
  plVar3 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
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
  if (local_28 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    uVar6 = FName::FName(local_res8,L"Account",1);
    FUN_142b4a0e0(local_28,local_48 + 2,uVar6);
    if (local_48[2] == 0) {
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      local_48[0] = 0;
      local_48[1] = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
      FGenericPlatformString::Memcpy(local_48[0],L"ShiftUrl",0x12);
      FUN_142afb430(local_48[2],param_2,local_48);
      if (local_48[0] != 0) {
        FMemory::Free();
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_30 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 140e256d0 FUN_140e256d0 body=646 status=ok
// SIG undefined FUN_140e256d0(void)

undefined8 * FUN_140e256d0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_48 [3];
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  local_28 = *(longlong *)(param_1 + 0xb0);
  if (local_28 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  local_20 = *(longlong **)(param_1 + 0xb8);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  lVar5 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar5 + 0x18),local_48 + 2,&local_28);
  plVar4 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
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
  if (local_48[2] == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    if (local_30 == (longlong *)0x0) {
      return param_2;
    }
    LOCK();
    plVar4 = local_30 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 != 1) {
      return param_2;
    }
    (**(code **)*local_30)(local_30);
    LOCK();
    piVar2 = (int *)((longlong)local_30 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return param_2;
    }
    (**(code **)(*local_30 + 8))(local_30,1);
    return param_2;
  }
  FUN_142b45fe0(local_48[2],&local_18);
  if (local_18 != 0) {
    lVar5 = *(longlong *)(local_18 + 8);
    plVar4 = *(longlong **)(local_18 + 0x10);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (lVar5 != 0) {
      local_48[1] = 0xc;
      local_48[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
      FGenericPlatformString::Memcpy(local_48[0],L"LinkCodeUrl",0x18);
      FUN_142afb430(lVar5,param_2,local_48);
      if (local_48[0] != 0) {
        FMemory::Free();
      }
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
      goto LAB_140e258c8;
    }
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
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_140e258c8:
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
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 140e25960 FUN_140e25960 body=170 status=ok
// SIG undefined FUN_140e25960(void)

undefined8 * FUN_140e25960(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_18;
  longlong *local_10;
  
  local_18 = *(longlong *)(param_1 + 0xb0);
  if (local_18 != 0) {
    local_10 = *(longlong **)(param_1 + 0xb8);
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10 + 1) = (int)local_10[1] + 1;
      UNLOCK();
    }
    lVar5 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar5 + 0x18),param_2,&local_18);
    plVar4 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_10)(local_10);
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
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140e25a10 FUN_140e25a10 body=369 status=ok
// SIG undefined FUN_140e25a10(void)

float * FUN_140e25a10(longlong param_1,float *param_2,longlong *param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (param_3 == (longlong *)0x0) goto LAB_140e25b36;
  lVar2 = FUN_1414b0d60();
  if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    lVar2 = FUN_1413f82e0();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      param_3 = (longlong *)(**(code **)(*param_3 + 0x668))(param_3);
    }
    else {
      lVar2 = FUN_14291fb80();
      if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
          lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_140e25b36;
    }
    if (param_3 == (longlong *)0x0) goto LAB_140e25b36;
    uVar3 = FUN_1414b0d60();
    param_3 = (longlong *)(**(code **)(*param_3 + 0x628))(param_3,uVar3);
    if (param_3 == (longlong *)0x0) goto LAB_140e25b36;
  }
  plVar4 = (longlong *)param_3[0x31];
  plVar5 = plVar4 + (longlong)(int)param_3[0x32] * 4;
  if (plVar4 != plVar5) {
    do {
      if (*plVar4 == *(longlong *)(param_1 + 0x28)) {
        if (plVar4 != (longlong *)0x0) {
          *(undefined1 *)(param_2 + 2) = 0xff;
          *param_2 = (float)(int)plVar4[1];
          *(undefined1 *)(param_2 + 2) = 0;
          return param_2;
        }
        break;
      }
      plVar4 = plVar4 + 4;
    } while (plVar4 != plVar5);
  }
LAB_140e25b36:
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  *(undefined1 *)(param_2 + 2) = 0xff;
  return param_2;
}



// FUNCTION 140e25b90 FUN_140e25b90 body=242 status=ok
// SIG undefined FUN_140e25b90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_140e25b90(longlong param_1,float *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  float fVar2;
  float _Y;
  float fVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  uVar1 = FUN_142caac20(param_1 + 0x28,local_78);
  fVar2 = (float)FUN_142cc4350(uVar1,0);
  uVar1 = FUN_142caac20(param_1 + 0x60,local_78,param_3);
  _Y = (float)FUN_142cc4350(uVar1,0);
  uVar1 = FUN_142caac20(param_1 + 0x98,local_78,param_3);
  fVar3 = (float)FUN_142cc4350(uVar1,0);
  fVar2 = _guard_xfg_dispatch_icall_nop(1.0 - fVar2,_Y);
  *param_2 = (1.0 - fVar2) * fVar3;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 140e25cb0 FUN_140e25cb0 body=86 status=ok
// SIG undefined FUN_140e25cb0(void)

undefined8 FUN_140e25cb0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_18 [16];
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 0x148))(param_2);
    if (lVar1 != 0) {
      uVar2 = FName::ToString(param_1,local_18);
      uVar2 = FUN_1412c3780(uVar2,lVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 140e25d10 FUN_140e25d10 body=140 status=ok
// SIG undefined FUN_140e25d10(void)

undefined8 * FUN_140e25d10(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_18;
  longlong *local_10;
  
  FUN_140e25960(param_1,&local_18);
  if (local_18 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    uVar5 = FUN_14057c410();
    FString::FString(param_2,uVar5);
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
  return param_2;
}



// FUNCTION 140e25da0 FUN_140e25da0 body=252 status=ok
// SIG undefined FUN_140e25da0(void)

undefined8 * FUN_140e25da0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  *param_2 = 0;
  param_2[1] = 0;
  local_28 = *(longlong *)(param_1 + 0x38);
  if (local_28 != 0) {
    local_20 = *(longlong **)(param_1 + 0x40);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    lVar5 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar5 + 0x18),&local_18,&local_28);
    plVar3 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_20)(local_20);
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
    if (local_18 != 0) {
      uVar6 = FUN_14057c410();
      FString::operator=(param_2,uVar6);
    }
    if (local_10 != (longlong *)0x0) {
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
  return param_2;
}



// FUNCTION 140e25ea0 FUN_140e25ea0 body=327 status=ok
// SIG undefined FUN_140e25ea0(void)

undefined4 FUN_140e25ea0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong *local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_140e21cd0(&local_28,0);
    plVar5 = local_20;
    if (local_28 != (longlong *)0x0) {
      local_18 = *(undefined8 *)(param_1 + 0xb0);
      local_10 = *(longlong **)(param_1 + 0xb8);
      if (local_10 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_10 + 1) = (int)local_10[1] + 1;
        UNLOCK();
      }
      uVar6 = (**(code **)(*local_28 + 0x68))(local_28,&local_18);
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
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      plVar5 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
      return uVar6;
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140e25ff0 FUN_140e25ff0 body=318 status=ok
// SIG undefined FUN_140e25ff0(void)

undefined4 FUN_140e25ff0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong *local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_140e21cd0(&local_28,0);
    plVar5 = local_20;
    if (local_28 != (longlong *)0x0) {
      local_18 = *(undefined8 *)(param_1 + 0x38);
      local_10 = *(longlong **)(param_1 + 0x40);
      if (local_10 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_10 + 1) = (int)local_10[1] + 1;
        UNLOCK();
      }
      uVar6 = (**(code **)(*local_28 + 0x68))(local_28,&local_18);
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
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      plVar5 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
      return uVar6;
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140e26140 FUN_140e26140 body=196 status=ok
// SIG undefined FUN_140e26140(void)

void FUN_140e26140(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((*(longlong *)(param_1 + 0x3c8) != 0) &&
     (*(byte *)(*(longlong *)(param_1 + 0x3c8) + 0xec0) < 3)) {
    bVar3 = false;
    *(int *)(param_1 + 0x29c) = *(int *)(param_1 + 0x29c) + 1;
    iVar6 = *(int *)(param_1 + 0x29c);
    iVar5 = *(int *)(param_1 + 0x290) + -1;
    lVar7 = (longlong)iVar5;
    if (-1 < iVar5) {
      lVar8 = lVar7 << 4;
      bVar3 = false;
      do {
        lVar1 = *(longlong *)(param_1 + 0x288);
        if (((*(int *)(lVar8 + 8 + lVar1) == 0) ||
            (plVar2 = *(longlong **)(lVar8 + lVar1), plVar2 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*plVar2 + 0x40))(), cVar4 == '\0')) {
          bVar3 = true;
        }
        lVar8 = lVar8 + -0x10;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
      iVar6 = *(int *)(param_1 + 0x29c);
    }
    *(int *)(param_1 + 0x29c) = iVar6 + -1;
    if (bVar3) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x288),0)
      ;
      return;
    }
  }
  return;
}



// FUNCTION 140e26210 AddToCentralStorageSubsystem body=53 status=ok
// SIG undefined AddToCentralStorageSubsystem(void)

void AFGCentralStorageContainer::AddToCentralStorageSubsystem(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x148))();
  lVar2 = FUN_140aab5e0(uVar1);
  if (lVar2 != 0) {
    FUN_140aaed30(lVar2,param_1);
    return;
  }
  return;
}



// FUNCTION 140e26250 FUN_140e26250 body=129 status=ok
// SIG undefined FUN_140e26250(void)

bool FUN_140e26250(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  float extraout_XMM0_Da;
  undefined1 local_28 [32];
  
  cVar1 = (**(code **)(*(longlong *)(param_1 + 0xd88) + 0x178))();
  if (cVar1 != '\0') {
    return true;
  }
  if (*(longlong *)(param_1 + 0xe70) != 0) {
    FUN_142d62190(*(longlong *)(param_1 + 0xe70),local_28,*(undefined8 *)(param_1 + 0x26c8));
    cVar1 = FUN_142d52a00(local_28);
    if (cVar1 != '\0') {
      uVar2 = FUN_142d52a20(local_28);
      uVar2 = FArchive::operator<<(uVar2);
      FUN_142d5fed0(uVar2);
      return 0.0 < extraout_XMM0_Da;
    }
  }
  return false;
}



// FUNCTION 140e262e0 FUN_140e262e0 body=66 status=ok
// SIG undefined FUN_140e262e0(void)

byte FUN_140e262e0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x9c0) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x9c0) + 0x768))();
    if (cVar1 != '\0') {
      return *(byte *)(param_1 + 0x24d1) >> 1 & 1;
    }
  }
  return *(byte *)(param_1 + 0x24d1) & 1;
}



// FUNCTION 140e26330 FUN_140e26330 body=302 status=ok
// SIG undefined FUN_140e26330(void)

ulonglong FUN_140e26330(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  uint7 uVar8;
  longlong *plVar9;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar6 = *(longlong *)(DAT_146b33f38 + 0x58);
  uVar3 = FUN_140c428a0(param_1);
  uVar4 = uVar3;
  if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x328) != 0)) {
    uVar4 = FUN_1413c0f50();
    uVar2 = *(ulonglong *)(lVar6 + 0x328);
    for (uVar5 = uVar2; uVar5 != 0; uVar5 = *(ulonglong *)(uVar5 + 0x30)) {
      if (uVar5 == uVar4) {
        if (uVar2 != 0) {
          plVar9 = *(longlong **)(param_1 + 0x13d8);
          uVar4 = (ulonglong)*(int *)(param_1 + 0x13e0);
          plVar1 = plVar9 + uVar4;
          for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
            if (*plVar9 != 0) {
              uVar5 = *(ulonglong *)(*plVar9 + 0x10);
              uVar4 = 0;
              if (uVar5 != 0) {
                do {
                  if (uVar5 == uVar2) {
                    lVar6 = FUN_140e7fd70(uVar3);
                    uVar4 = 0;
                    if (lVar6 != 0) {
                      lVar7 = FUN_1414ba680();
                      uVar8 = (uint7)((ulonglong)(lVar7 + 0x88) >> 8);
                      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                         (*(longlong *)
                           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                        uVar4 = (ulonglong)uVar8 << 8;
                      }
                      else {
                        uVar4 = CONCAT71(uVar8,1);
                      }
                      if ((char)uVar4 != '\0') {
                        uVar4 = FUN_140b31d50(lVar6);
                        return uVar4;
                      }
                    }
                    goto LAB_140e26443;
                  }
                  uVar5 = *(ulonglong *)(uVar5 + 0x30);
                } while (uVar5 != 0);
                uVar4 = 0;
              }
            }
LAB_140e26443:
          }
        }
        break;
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 140e26460 FUN_140e26460 body=132 status=ok
// SIG undefined FUN_140e26460(void)

void FUN_140e26460(longlong param_1)

{
  int iVar1;
  
  if (((*(char *)(param_1 + 0x2ce9) != '\0') && (0.0 < *(float *)(param_1 + 0x2cec))) &&
     (*(int *)(param_1 + 0x2d00) < *(int *)(param_1 + 0x2cf4))) {
    iVar1 = *(int *)(param_1 + 0x2d00);
    *(int *)(param_1 + 0x2d00) = iVar1 + 1;
    if (*(int *)(param_1 + 0x2d04) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x2cf8,iVar1);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x2cf8) + (longlong)iVar1 * 4) =
         *(undefined4 *)(param_1 + 0x2cf0);
    FUN_140e16ef0(param_1);
  }
  return;
}



// FUNCTION 140e264f0 FUN_140e264f0 body=37 status=ok
// SIG undefined FUN_140e264f0(void)

void FUN_140e264f0(undefined8 param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  FUN_140e3d6d0(param_1,1,0);
  return;
}



// FUNCTION 140e26520 FUN_140e26520 body=43 status=ok
// SIG undefined FUN_140e26520(void)

void FUN_140e26520(longlong param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  FUN_140e32cc0(param_1);
  FUN_140e2eec0(param_1,*(undefined4 *)(param_1 + 0x280));
  return;
}



// FUNCTION 140e26550 FUN_140e26550 body=44 status=ok
// SIG undefined FUN_140e26550(void)

void FUN_140e26550(longlong param_1)

{
  undefined1 uVar1;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  uVar1 = FUN_140e27720(param_1);
  *(undefined1 *)(param_1 + 0x2e0) = uVar1;
  FUN_140e1be60(param_1,uVar1);
  return;
}



// FUNCTION 140e26580 FUN_140e26580 body=481 status=ok
// SIG undefined FUN_140e26580(void)

void FUN_140e26580(undefined4 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 local_48;
  undefined1 local_40 [24];
  
  param_1[0xc] = *(undefined4 *)(param_2 + 8);
  param_1[0xd] = *(undefined4 *)(param_2 + 0xc);
  param_1[0xe] = *(undefined4 *)(param_2 + 0x10);
  local_48 = *(undefined8 *)(param_2 + 0x18);
  FString::FString(local_40,param_2 + 0x20);
  FSoftObjectPath::operator=(param_1 + 0x10,&local_48);
  *param_1 = *(undefined4 *)(param_2 + 0x30);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 0x48);
  *(undefined1 *)((longlong)param_1 + 5) = *(undefined1 *)(param_2 + 0x49);
  param_1[2] = *(undefined4 *)(param_2 + 0x34);
  param_1[3] = *(undefined4 *)(param_2 + 0x4c);
  plVar6 = *(longlong **)(param_2 + 0x38);
  plVar7 = plVar6 + (longlong)*(int *)(param_2 + 0x40) * 7;
  do {
    if (plVar6 == plVar7) {
      lVar2 = *(longlong *)(param_2 + 0x50);
      if (lVar2 != 0) {
        lVar5 = FUN_1413f1920();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                    (param_1 + 8,lVar2 + 0x28);
        }
      }
      return;
    }
    if (*plVar6 != 0) {
      lVar2 = *(longlong *)(param_1 + 4);
      iVar1 = param_1[6];
      for (lVar5 = lVar2; lVar5 != (longlong)iVar1 * 0x30 + lVar2; lVar5 = lVar5 + 0x30) {
        cVar4 = FSoftObjectPath::operator==(lVar5 + 0x18,plVar6 + 3);
        if (cVar4 != '\0') {
          iVar1 = (int)((lVar5 - lVar2) / 0x30);
          if (iVar1 != -1) {
            *(int *)(*(longlong *)(param_1 + 4) + (longlong)iVar1 * 0x30) = (int)plVar6[6];
            goto LAB_140e266a1;
          }
          break;
        }
      }
      iVar1 = param_1[6];
      param_1[6] = iVar1 + 1;
      if ((int)param_1[7] < iVar1 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 4,iVar1);
      }
      FUN_140e13690((longlong)iVar1 * 0x30 + *(longlong *)(param_1 + 4),plVar6);
    }
LAB_140e266a1:
    plVar6 = plVar6 + 7;
  } while( true );
}



// FUNCTION 140e26770 FUN_140e26770 body=107 status=ok
// SIG undefined FUN_140e26770(void)

void FUN_140e26770(longlong param_1,char param_2)

{
  FUN_140e840d0(param_1,param_2);
  if (param_2 == '\0') {
    if (*(longlong *)(param_1 + 0x2b8) != 0) {
      FUN_142397540(*(longlong *)(param_1 + 0x2b8),1);
    }
  }
  else if (((param_2 == '\x01') || (param_2 == '\x02')) && (*(longlong *)(param_1 + 0x2b8) != 0)) {
    FUN_142397540(*(longlong *)(param_1 + 0x2b8),0,1);
    return;
  }
  return;
}



// FUNCTION 140e267e0 OnSettingChanged body=31 status=ok
// SIG undefined OnSettingChanged(void)

void ULOTF2SettingListEntry_SubHeader::OnSettingChanged(longlong param_1)

{
  FUN_140e840d0();
  FUN_1411e02b0(*(undefined8 *)(param_1 + 0x2d8));
  return;
}



// FUNCTION 140e26800 FUN_140e26800 body=217 status=ok
// SIG undefined FUN_140e26800(void)

void FUN_140e26800(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) &&
     (lVar4 = *(longlong *)(param_1 + 0x20), lVar4 != 0)) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140e26858;
  }
  lVar4 = 0;
LAB_140e26858:
  *(longlong *)(param_1 + 0x28) = lVar4;
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x910);
  }
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  if (lVar4 != 0) {
    lVar4 = FUN_1422312c0(lVar4);
    if (lVar4 != 0) {
      lVar2 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *(longlong *)(param_1 + 0x38) = lVar4;
        return;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 140e268e0 FUN_140e268e0 body=315 status=ok
// SIG undefined FUN_140e268e0(void)

void FUN_140e268e0(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  
  local_28 = *param_2;
  uStack_20 = (undefined4)param_2[1];
  lVar2 = FUN_1412ed570((int)local_28,param_1[0x7b],&local_28);
  if (param_1[0x79] != lVar2) {
    param_1[0x79] = lVar2;
    FUN_140e29f10(param_1);
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  local_18 = param_1[0x74];
  local_28 = param_1[0x72];
  uStack_20 = (undefined4)param_1[0x73];
  uStack_1c = *(undefined4 *)((longlong)param_1 + 0x39c);
  FUN_142d6c7b0(&local_28,0x3f800000,0x3f800000);
  FUN_140e374b0(param_1);
  FUN_140e197c0(param_1);
  if ((longlong *)param_1[0x79] != (longlong *)0x0) {
    lVar2 = (**(code **)(*(longlong *)param_1[0x79] + 0x148))();
    lVar2 = *(longlong *)(lVar2 + 400);
    if (lVar2 != 0) {
      lVar3 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (((bVar1) && (*(longlong *)(lVar2 + 0x198) != 0)) &&
         (*(char *)(*(longlong *)(lVar2 + 0x198) + 0x33) != '\0')) {
        (**(code **)(*(longlong *)(param_1[0x79] + 0xd88) + 0x78))
                  ((longlong *)(param_1[0x79] + 0xd88),DAT_146b34868,
                   CONCAT71((int7)((ulonglong)(lVar3 + 0x88) >> 8),1));
        (**(code **)(*(longlong *)param_1[0x79] + 0x310))((longlong *)param_1[0x79],1);
      }
    }
  }
  return;
}



// FUNCTION 140e26a20 FUN_140e26a20 body=161 status=ok
// SIG undefined FUN_140e26a20(void)

void FUN_140e26a20(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d8 [208];
  
  FUN_140e26ad0();
  cVar5 = (**(code **)(*param_2 + 0x290))(param_2,0);
  if (cVar5 != '\0') {
    FUN_142c62180(local_d8);
    FUN_142d22270(param_2,local_e8,param_1,local_d8,0);
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar2 = (int *)((longlong)local_e0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_e0 + 8))(local_e0,1);
        }
      }
    }
    FUN_142c63c50(local_d8);
  }
  return;
}



// FUNCTION 140e26ad0 FUN_140e26ad0 body=113 status=ok
// SIG undefined FUN_140e26ad0(void)

void FUN_140e26ad0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x920);
  if (lVar1 != 0) {
    uVar2 = UTextBlock::GetPrivateStaticClass();
    cVar3 = FUN_142c736c0(lVar1,uVar2);
    if (cVar3 != '\0') {
      if (*(byte *)(param_1 + 0x128) < 3) {
        FUN_1414009e0(param_1);
        return;
      }
      if (*(longlong *)(param_1 + 0x920) != 0) {
        uVar2 = UTextBlock::GetPrivateStaticClass();
        FUN_142c84570(*(undefined8 *)(param_1 + 0x920),uVar2);
      }
    }
  }
  return;
}



// FUNCTION 140e26b70 FUN_140e26b70 body=177 status=ok
// SIG undefined FUN_140e26b70(void)

void FUN_140e26b70(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong local_28 [4];
  
  local_28[2] = 0;
  local_28[3] = 0;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,0);
  FUN_140de5ab0(uVar2,local_28 + 2);
  local_28[0] = 0;
  local_28[1] = 0;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,1);
  FUN_140de5ab0(uVar2,local_28);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),local_28 + 2,local_28);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e26c30 FUN_140e26c30 body=175 status=ok
// SIG undefined FUN_140e26c30(void)

void FUN_140e26c30(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong local_30;
  longlong local_20;
  
  local_48[0] = 0;
  local_48[1] = 0;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,0);
  FUN_140de5ab0(uVar2,local_48);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    uVar2 = (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),local_38,local_48);
    lVar3 = (**(code **)(*param_2 + 0x10))(param_2);
    if (lVar3 != 0) {
      FUN_140e0f240(lVar3,uVar2);
      (**(code **)(*param_2 + 0x18))(param_2);
    }
    if (local_20 != 0) {
      FMemory::Free();
    }
    if (local_30 != 0) {
      FMemory::Free();
    }
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e26ce0 FUN_140e26ce0 body=116 status=ok
// SIG undefined FUN_140e26ce0(void)

undefined8 FUN_140e26ce0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  undefined1 local_res8 [8];
  
  if ((((*(char *)(param_1 + 0x60) != '\0') && (param_2 != (longlong *)0x0)) &&
      (lVar2 = (**(code **)(*param_2 + 0x148))(param_2), lVar2 != 0)) &&
     (cVar1 = *(char *)(param_1 + 0x60), pcVar3 = (char *)FUN_140cb6000(local_res8,lVar2),
     *pcVar3 != cVar1)) {
    return 0;
  }
  cVar1 = FUN_142dd2ee0(param_1,param_2);
  if (cVar1 == '\0') {
    return 0;
  }
  return 1;
}



// FUNCTION 140e26d60 FUN_140e26d60 body=440 status=ok
// SIG undefined FUN_140e26d60(void)

bool FUN_140e26d60(longlong param_1,longlong param_2,char param_3,undefined8 param_4)

{
  void *_Src;
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  longlong *local_30;
  int local_28;
  
  if (param_3 == '\0') {
    puVar6 = *(undefined8 **)(param_1 + 0x178);
    puVar7 = puVar6 + (longlong)*(int *)(param_1 + 0x180) * 4;
    for (; puVar6 != puVar7; puVar6 = puVar6 + 4) {
      local_28 = *(int *)(puVar6 + 2);
      lVar2 = (longlong)local_28;
      plVar5 = (longlong *)0x0;
      _Src = (void *)puVar6[1];
      local_30 = (longlong *)0x0;
      if (local_28 != 0) {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_30,local_28,0,param_4,*puVar6);
        plVar5 = local_30;
        _guard_xfg_dispatch_icall_nop(local_30,_Src,lVar2 << 4);
      }
      for (plVar4 = plVar5; plVar4 != plVar5 + (longlong)local_28 * 2; plVar4 = plVar4 + 2) {
        if (*plVar4 == param_2) {
          lVar2 = *(longlong *)(param_1 + 0x120);
          if (lVar2 == 0) {
            lVar2 = FUN_1423407b0(param_1);
          }
          lVar2 = FUN_140e7e6f0(lVar2);
          if (lVar2 == 0) {
            bVar8 = true;
          }
          else {
            uVar1 = FUN_140e81420(lVar2);
            bVar8 = (*(uint *)(plVar4 + 1) >> (uVar1 & 0x1f) & 1) != 0;
          }
          if (plVar5 == (longlong *)0x0) {
            return bVar8;
          }
          FMemory::Free(plVar5);
          return bVar8;
        }
      }
      if (plVar5 != (longlong *)0x0) {
        FMemory::Free(plVar5);
      }
    }
  }
  else {
    lVar2 = FUN_140e21430(param_1,0);
    if (lVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x120);
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(param_1);
      }
      lVar3 = FUN_140e7e6f0(lVar3);
      plVar5 = *(longlong **)(lVar2 + 8);
      plVar4 = plVar5 + (longlong)*(int *)(lVar2 + 0x10) * 2;
      for (; plVar5 != plVar4; plVar5 = plVar5 + 2) {
        if (*plVar5 == param_2) {
          if (lVar3 != 0) {
            uVar1 = FUN_140e81420(lVar3);
            return (*(uint *)(plVar5 + 1) >> (uVar1 & 0x1f) & 1) != 0;
          }
          return true;
        }
      }
    }
  }
  return false;
}



// FUNCTION 140e26f20 FUN_140e26f20 body=170 status=ok
// SIG undefined FUN_140e26f20(void)

ulonglong FUN_140e26f20(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (*(longlong *)(param_1 + 0xcf0) == 0) {
    lVar2 = FUN_142269f40();
    in_RAX = 0;
    if (lVar2 != 0) {
      lVar2 = FUN_140a63ba0(lVar2);
      in_RAX = 0;
      if (lVar2 != 0) {
        lVar3 = FUN_1413ffe00();
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
          in_RAX = FUN_141400340(lVar2);
          *(ulonglong *)(param_1 + 0xcf0) = in_RAX;
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0xcf0) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar4 = FUN_1409ae6f0(*(longlong *)(param_1 + 0xcf0),param_2);
  return uVar4;
}



// FUNCTION 140e26fd0 FUN_140e26fd0 body=395 status=ok
// SIG undefined FUN_140e26fd0(void)

undefined8 FUN_140e26fd0(longlong *param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar4 = FUN_14222e280();
  if (lVar4 != 0) {
    lVar5 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(char *)(lVar4 + 0x5e0) != '\0')) {
      return 8;
    }
  }
  if (param_2 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0xc28))(param_1);
    if (cVar1 != '\0') {
      return 2;
    }
    if (((longlong *)param_1[0x138] == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*(longlong *)param_1[0x138] + 0x768))(), cVar1 == '\0')) {
      bVar2 = *(byte *)((longlong)param_1 + 0x24d1);
    }
    else {
      bVar2 = *(byte *)((longlong)param_1 + 0x24d1) >> 1;
    }
    if ((bVar2 & 1) != 0) {
      return 2;
    }
  }
  cVar1 = (**(code **)(*param_1 + 0x950))(param_1);
  if ((cVar1 == '\0') && ((char)param_1[0x1d8] != '\x03')) {
LAB_140e270fd:
    uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar4 = FUN_140aab5e0(uVar6);
    if ((lVar4 != 0) && (cVar1 = FUN_140aaed30(lVar4,param_1), cVar1 != '\0')) {
      return 7;
    }
    return 0;
  }
  lVar4 = param_1[0x8f];
  if (lVar4 != 0) {
    lVar5 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(char *)(lVar4 + 0x599) != '\0')) goto LAB_140e270fd;
  }
  return 3;
}



// FUNCTION 140e27160 FUN_140e27160 body=8 status=ok
// SIG undefined FUN_140e27160(void)

undefined1 FUN_140e27160(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x96f);
}



// FUNCTION 140e27170 FUN_140e27170 body=1285 status=ok
// SIG undefined FUN_140e27170(void)

ulonglong FUN_140e27170(longlong param_1)

{
  void *_Src;
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  short *_Src_00;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong lVar10;
  short *psVar11;
  int iVar12;
  undefined2 *puVar13;
  int iVar14;
  undefined2 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  bool bVar18;
  undefined8 local_res20;
  undefined2 *local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined2 *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined2 *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  uint local_a0;
  short *local_98;
  int local_90;
  undefined8 *local_88;
  short *local_80;
  int local_78;
  short *local_70;
  int local_68;
  longlong local_60 [4];
  
  puVar5 = *(undefined8 **)(param_1 + 0x120);
  bVar1 = false;
  bVar18 = false;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)FUN_1423407b0();
  }
  if (((puVar5 != (undefined8 *)0x0) && (lVar6 = puVar5[6], lVar6 != 0)) &&
     (*(longlong *)(lVar6 + 0xc0) != 0)) {
    puVar17 = *(undefined8 **)(param_1 + 0x178);
    puVar5 = puVar17 + (longlong)*(int *)(param_1 + 0x180) * 4;
    local_88 = puVar5;
    if (puVar17 != puVar5) {
      do {
        puVar15 = (undefined2 *)0x0;
        local_a8 = *(int *)(puVar17 + 2);
        lVar10 = (longlong)local_a8;
        local_b8 = *puVar17;
        _Src = (void *)puVar17[1];
        local_b0 = (void *)0x0;
        iVar14 = 0;
        if (local_a8 == 0) {
          local_a4 = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_b0,local_a8,0);
          _guard_xfg_dispatch_icall_nop(local_b0,_Src,lVar10 << 4);
        }
        local_a0 = *(uint *)(puVar17 + 3);
        FName::ToString(&local_b8,&local_98);
        _Src_00 = local_98;
        lVar10 = (longlong)local_90;
        local_e8 = (undefined2 *)0x0;
        local_dc = 0;
        psVar11 = local_98 + lVar10;
        puVar13 = puVar15;
        if (psVar11 != local_98) {
LAB_140e27292:
          psVar11 = psVar11 + -1;
          if (*psVar11 != 0x2f) goto code_r0x000140e2729c;
          iVar16 = (int)((longlong)psVar11 - (longlong)local_98 >> 1);
          if (iVar16 != -1) {
            if (local_90 == 0) {
              psVar11 = &DAT_143f3eda8;
              iVar12 = iVar14;
            }
            else {
              psVar11 = local_98;
              iVar12 = local_90 + -1;
            }
            iVar16 = iVar12 - (iVar16 + 1);
            if ((-1 < iVar16) && (iVar14 = iVar12, iVar16 < iVar12)) {
              iVar14 = iVar16;
            }
            local_f8 = (undefined2 *)0x0;
            psVar11 = psVar11 + ((longlong)iVar12 - (longlong)iVar14);
            puVar9 = puVar15;
            puVar7 = puVar15;
            if ((psVar11 != (short *)0x0) &&
               (puVar9 = (undefined2 *)0x0, puVar7 = (undefined2 *)0x0, *psVar11 != 0)) {
              lVar10 = -1;
              do {
                lVar3 = lVar10 + 1;
                lVar10 = lVar10 + 1;
              } while (psVar11[lVar3] != 0);
              local_f0._0_4_ = (int)lVar10 + 1;
              local_f0._4_4_ = 0;
              puVar7 = puVar15;
              if (0 < (int)(uint)local_f0) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
                puVar7 = (undefined2 *)(ulonglong)local_f0._4_4_;
              }
              puVar13 = local_f8;
              puVar9 = (undefined2 *)(ulonglong)(uint)local_f0;
              FGenericPlatformString::Memcpy(local_f8,psVar11);
            }
            iVar14 = (int)puVar9;
            local_f8 = (undefined2 *)0x0;
            local_dc = SUB84(puVar7,0);
            local_f0 = 0;
            goto LAB_140e273a6;
          }
        }
LAB_140e272a1:
        local_e0 = local_90;
        if (local_90 == 0) {
          local_dc = 0;
          iVar14 = local_90;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,local_90,0);
          puVar13 = local_e8;
          _guard_xfg_dispatch_icall_nop(local_e8,_Src_00,lVar10 * 2);
          iVar14 = local_e0;
        }
LAB_140e273a6:
        local_res20 = *(undefined8 *)(*(longlong *)(lVar6 + 0xc0) + 0x18);
        FName::ToString(&local_res20,&local_70);
        local_c8 = (undefined2 *)0x0;
        psVar11 = &DAT_143f3eda8;
        if (local_68 != 0) {
          psVar11 = local_70;
        }
        local_bc = 0;
        iVar16 = 0;
        if ((psVar11 != (short *)0x0) && (iVar16 = 0, *psVar11 != 0)) {
          lVar10 = -1;
          do {
            lVar3 = lVar10 + 1;
            lVar10 = lVar10 + 1;
          } while (psVar11[lVar3] != 0);
          local_c0 = (int)lVar10 + 1;
          if (0 < local_c0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
          }
          iVar16 = local_c0;
          puVar15 = local_c8;
          FGenericPlatformString::Memcpy(local_c8,psVar11);
        }
        puVar5 = (undefined8 *)FName::ToString(&local_b8,local_60);
        puVar9 = &DAT_143f3eda8;
        if (iVar16 != 0) {
          puVar9 = puVar15;
        }
        if (*(int *)(puVar5 + 1) == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = (undefined2 *)*puVar5;
        }
        puVar5 = (undefined8 *)FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar9);
        puVar9 = local_d8;
        if ((int)puVar5 == 0) {
LAB_140e2752f:
          bVar2 = true;
        }
        else {
          local_res20 = *(undefined8 *)(*(longlong *)(lVar6 + 0xc0) + 0x18);
          FName::ToString(&local_res20,&local_80);
          psVar11 = &DAT_143f3eda8;
          if (local_78 != 0) {
            psVar11 = local_80;
          }
          puVar9 = (undefined2 *)0x0;
          iVar16 = 0;
          local_d8 = (undefined2 *)0x0;
          local_cc = 0;
          if ((psVar11 != (short *)0x0) && (*psVar11 != 0)) {
            lVar10 = -1;
            do {
              lVar3 = lVar10 + 1;
              lVar10 = lVar10 + 1;
            } while (psVar11[lVar3] != 0);
            local_d0 = (int)lVar10 + 1;
            if (0 < local_d0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
            }
            iVar16 = local_d0;
            puVar9 = local_d8;
            FGenericPlatformString::Memcpy(local_d8,psVar11);
          }
          bVar1 = true;
          bVar18 = true;
          puVar7 = &DAT_143f3eda8;
          if (iVar16 != 0) {
            puVar7 = puVar9;
          }
          puVar8 = &DAT_143f3eda8;
          if (iVar14 != 0) {
            puVar8 = puVar13;
          }
          puVar5 = (undefined8 *)FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar7);
          if ((int)puVar5 == 0) goto LAB_140e2752f;
          bVar2 = false;
        }
        if ((bVar18) && (bVar18 = false, puVar9 != (undefined2 *)0x0)) {
          puVar5 = (undefined8 *)FMemory::Free(puVar9);
        }
        if ((bVar1) && (bVar1 = false, local_80 != (short *)0x0)) {
          puVar5 = (undefined8 *)FMemory::Free();
        }
        if (local_60[0] != 0) {
          puVar5 = (undefined8 *)FMemory::Free();
        }
        if (puVar15 != (undefined2 *)0x0) {
          puVar5 = (undefined8 *)FMemory::Free(puVar15);
        }
        if (local_70 != (short *)0x0) {
          puVar5 = (undefined8 *)FMemory::Free();
        }
        if (bVar2) {
          lVar6 = *(longlong *)(param_1 + 0x120);
          if (lVar6 == 0) {
            lVar6 = FUN_1423407b0();
          }
          lVar6 = FUN_140e7e6f0(lVar6);
          if (lVar6 == 0) {
            bVar18 = true;
          }
          else {
            uVar4 = FUN_140e81420(lVar6);
            bVar18 = (local_a0 >> (uVar4 & 0x1f) & 1) != 0;
          }
          if (puVar13 != (undefined2 *)0x0) {
            FMemory::Free(puVar13);
          }
          if (local_98 != (short *)0x0) {
            FMemory::Free();
          }
          if (local_b0 != (void *)0x0) {
            FMemory::Free();
          }
          return (ulonglong)bVar18;
        }
        if (puVar13 != (undefined2 *)0x0) {
          puVar5 = (undefined8 *)FMemory::Free(puVar13);
        }
        if (local_98 != (short *)0x0) {
          puVar5 = (undefined8 *)FMemory::Free();
        }
        if (local_b0 != (void *)0x0) {
          puVar5 = (undefined8 *)FMemory::Free();
        }
        puVar17 = puVar17 + 4;
      } while (puVar17 != local_88);
    }
  }
  return (ulonglong)puVar5 & 0xffffffffffffff00;
code_r0x000140e2729c:
  if (psVar11 == local_98) goto LAB_140e272a1;
  goto LAB_140e27292;
}



// FUNCTION 140e27690 FUN_140e27690 body=114 status=ok
// SIG undefined FUN_140e27690(void)

undefined8 FUN_140e27690(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x148), lVar3 != 0)) {
    lVar4 = FUN_141424d10();
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
      cVar2 = UMediaSoundComponent::GetMediaPlayer(lVar3);
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140e27710 FUN_140e27710 body=8 status=ok
// SIG undefined FUN_140e27710(void)

undefined1 FUN_140e27710(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x96e);
}



// FUNCTION 140e27720 FUN_140e27720 body=367 status=ok
// SIG undefined FUN_140e27720(void)

ulonglong FUN_140e27720(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *local_18;
  int local_10;
  
  lVar5 = param_1 + 0x278;
  lVar4 = FWeakObjectPtr::Get(lVar5);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
      uVar7 = 0;
    }
    else {
      uVar7 = (ulonglong)DAT_1464b56f4;
    }
    UNLOCK();
    if (((int)uVar7 == *(int *)(param_1 + 0x280)) ||
       (uVar7 = 0, *(longlong *)(param_1 + 0x288) == 0)) goto LAB_140e27853;
    lVar4 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar5,lVar4);
    if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(uint *)(param_1 + 0x280) = DAT_1464b56f4;
    }
    lVar4 = FWeakObjectPtr::Get(lVar5);
    uVar7 = 0;
    if (lVar4 == 0) goto LAB_140e27853;
  }
  lVar5 = UUGJournalKey::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar5 + 0x90);
  uVar7 = (longlong)iVar1;
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < iVar1) ||
     (uVar7 = *(ulonglong *)(*(longlong *)(lVar4 + 0x10) + 0x88),
     *(longlong *)(uVar7 + (longlong)iVar1 * 8) != lVar5 + 0x88)) {
    uVar7 = uVar7 & 0xffffffffffffff00;
  }
  else {
    uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
  }
  if ((char)uVar7 != '\0') {
    lVar5 = FUN_140e81500(param_1);
    uVar7 = 0;
    if (lVar5 != 0) {
      lVar6 = FUN_140e814c0(param_1);
      uVar7 = 0;
      if (lVar6 != 0) {
        uVar7 = FUN_1409a7860(lVar5,&local_18);
        if ((local_10 != 0) && (uVar2 = *local_18, uVar2 != 0)) {
          uVar7 = UUGLoadoutBarUW::GetPrivateStaticClass();
          uVar8 = uVar2;
          do {
            if (uVar8 == uVar7) {
              bVar3 = FUN_1409ae120(lVar6,uVar2,lVar4);
              if (local_18 != (ulonglong *)0x0) {
                FMemory::Free();
              }
              return (ulonglong)bVar3;
            }
            uVar8 = *(ulonglong *)(uVar8 + 0x30);
          } while (uVar8 != 0);
        }
        if (local_18 != (ulonglong *)0x0) {
          uVar7 = FMemory::Free();
        }
      }
    }
  }
LAB_140e27853:
  return uVar7 & 0xffffffffffffff00;
}



// FUNCTION 140e27890 FUN_140e27890 body=20 status=ok
// SIG undefined FUN_140e27890(void)

undefined1 FUN_140e27890(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0xc48) == param_1)) {
    return 1;
  }
  return 0;
}



// FUNCTION 140e278b0 FUN_140e278b0 body=115 status=ok
// SIG undefined FUN_140e278b0(void)

bool FUN_140e278b0(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x178);
  plVar2 = plVar4 + (longlong)*(int *)(param_1 + 0x180) * 4;
  while( true ) {
    if (plVar4 == plVar2) {
      return false;
    }
    if (*plVar4 == param_2) break;
    plVar4 = plVar4 + 4;
  }
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0();
  }
  lVar3 = FUN_140e7e6f0(lVar3);
  if (lVar3 == 0) {
    return true;
  }
  uVar1 = FUN_140e81420(lVar3);
  return (*(uint *)(plVar4 + 3) >> (uVar1 & 0x1f) & 1) != 0;
}



// FUNCTION 140e27930 FUN_140e27930 body=142 status=ok
// SIG undefined FUN_140e27930(void)

undefined8 FUN_140e27930(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      uVar4 = uVar4 & 0xffffffffffffff00;
      bVar2 = false;
    }
    else {
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
      bVar2 = true;
    }
    if ((bVar2) && (*(longlong *)(param_2 + 0x848) == param_1)) {
      return CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
  uVar5 = FUN_142cc75f0(param_1,param_2,param_3,param_4);
  return uVar5;
}



// FUNCTION 140e279c0 FUN_140e279c0 body=242 status=ok
// SIG undefined FUN_140e279c0(void)

undefined8 FUN_140e279c0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *local_18;
  int local_10;
  
  if (param_2 != (longlong *)0x0) {
    uVar2 = (**(code **)(*param_1 + 0x148))();
    lVar3 = FUN_140aab5e0(uVar2);
    if ((lVar3 != 0) && (cVar1 = FUN_140aaed30(lVar3,param_1), cVar1 != '\0')) {
      uVar2 = (**(code **)(*param_2 + 0x148))(param_2);
      lVar3 = FUN_140aab5e0(uVar2);
      if ((lVar3 != 0) && (cVar1 = FUN_140aaed30(lVar3,param_2), cVar1 != '\0')) {
        uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar3 = FUN_140aab5e0(uVar2);
        if (lVar3 != 0) {
          FUN_140aae190(lVar3,&local_18,param_2);
          for (puVar4 = local_18; puVar4 != local_18 + local_10; puVar4 = puVar4 + 1) {
            if ((longlong *)*puVar4 == param_1) {
              if (local_18 != (undefined8 *)0x0) {
                FMemory::Free(local_18);
              }
              return 1;
            }
          }
          if (local_18 != (undefined8 *)0x0) {
            FMemory::Free(local_18);
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140e27ac0 FUN_140e27ac0 body=129 status=ok
// SIG undefined FUN_140e27ac0(void)

undefined8 FUN_140e27ac0(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x148))();
    lVar2 = FUN_140aab5e0(uVar1);
    if (lVar2 != 0) {
      lVar2 = FUN_140aab8f0(lVar2,param_1);
      if (lVar2 != 0) {
        uVar1 = (**(code **)(*param_2 + 0x148))(param_2);
        lVar3 = FUN_140aab5e0(uVar1);
        lVar4 = 0;
        if (lVar3 != 0) {
          lVar4 = FUN_140aab8f0(lVar3,param_2);
        }
        if (lVar4 == lVar2) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140e27b50 FUN_140e27b50 body=27 status=ok
// SIG undefined FUN_140e27b50(void)

longlong FUN_140e27b50(longlong param_1)

{
  longlong lVar1;
  uint7 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x3c8);
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if ((lVar1 != 0) && (*(byte *)(lVar1 + 0xec0) < 3)) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 140e27b70 FUN_140e27b70 body=90 status=ok
// SIG undefined FUN_140e27b70(void)

ulonglong FUN_140e27b70(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  uint7 uVar5;
  ulonglong uVar4;
  
  lVar2 = FUN_14222e280();
  uVar4 = 0;
  if (lVar2 != 0) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
    uVar5 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      uVar4 = (ulonglong)uVar5 << 8;
      bVar1 = false;
    }
    else {
      uVar4 = CONCAT71(uVar5,1);
      bVar1 = true;
    }
    if (bVar1) {
      return (ulonglong)*(byte *)(lVar2 + 0x5e0);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 140e27bd0 FUN_140e27bd0 body=270 status=ok
// SIG undefined FUN_140e27bd0(void)

bool FUN_140e27bd0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_58 [24];
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  lVar4 = *(longlong *)(param_1 + 0x188);
  lVar3 = (longlong)*(int *)(param_1 + 400) * 0x30 + lVar4;
  for (; lVar5 = 0, lVar4 != lVar3; lVar4 = lVar4 + 0x30) {
    local_28 = 0;
    local_20 = 0;
    local_40 = 0xffffffff;
    local_3c = 0;
    local_30 = 0;
    if (param_2 == 0) {
      local_30 = 0;
    }
    else {
      uVar2 = FSoftObjectPath::FSoftObjectPath(local_58,param_2);
      FSoftObjectPath::operator=(&local_30,uVar2);
      FWeakObjectPtr::operator=(&local_40,param_2);
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      local_3c = CONCAT44(DAT_1464b56f4,(undefined4)local_3c);
    }
    cVar1 = FSoftObjectPath::operator==(lVar4 + 0x10,&local_30);
    if (local_28 != 0) {
      FMemory::Free();
    }
    lVar5 = lVar4;
    if (cVar1 != '\0') break;
  }
  return lVar5 != 0;
}



// FUNCTION 140e27ce0 FUN_140e27ce0 body=274 status=ok
// SIG undefined FUN_140e27ce0(void)

ulonglong FUN_140e27ce0(longlong param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_58 [24];
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  lVar5 = *(longlong *)(param_1 + 0x188);
  uVar2 = (ulonglong)*(int *)(param_1 + 400);
  lVar4 = uVar2 * 0x30 + lVar5;
  do {
    if (lVar5 == lVar4) {
LAB_140e27dcb:
      return uVar2 & 0xffffffffffffff00;
    }
    local_28 = 0;
    local_20 = 0;
    local_40 = 0xffffffff;
    local_3c = 0;
    local_30 = 0;
    if (param_2 == 0) {
      local_30 = 0;
    }
    else {
      uVar3 = FSoftObjectPath::FSoftObjectPath(local_58,param_2);
      FSoftObjectPath::operator=(&local_30,uVar3);
      FWeakObjectPtr::operator=(&local_40,param_2);
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      local_3c = CONCAT44(DAT_1464b56f4,(undefined4)local_3c);
    }
    uVar2 = FSoftObjectPath::operator==(lVar5 + 0x10,&local_30);
    cVar1 = (char)uVar2;
    if (local_28 != 0) {
      uVar2 = FMemory::Free();
    }
    if (cVar1 != '\0') {
      if (lVar5 != 0) {
        return (ulonglong)*(byte *)(lVar5 + 0x28);
      }
      goto LAB_140e27dcb;
    }
    lVar5 = lVar5 + 0x30;
  } while( true );
}



// FUNCTION 140e27e00 FUN_140e27e00 body=54 status=ok
// SIG undefined FUN_140e27e00(void)

undefined1 FUN_140e27e00(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x920);
  if (lVar1 != 0) {
    uVar2 = UTextBlock::GetPrivateStaticClass();
    cVar3 = FUN_142c736c0(lVar1,uVar2);
    if (cVar3 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140e27e60 FUN_140e27e60 body=862 status=ok
// SIG undefined FUN_140e27e60(void)

void FUN_140e27e60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  FUN_142dd3da0();
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x758) != 0)) {
    lVar4 = FUN_142dfdfe0();
    lVar10 = *(longlong *)(param_2 + 0x758);
    lVar8 = lVar10;
    if (lVar10 != 0) {
      while (lVar8 != lVar4) {
        lVar8 = *(longlong *)(lVar8 + 0x30);
        if (lVar8 == 0) {
          return;
        }
      }
      if (lVar10 != 0) {
        if (lVar10 != 0) {
          lVar4 = FUN_142dfdfe0();
          lVar10 = *(longlong *)(param_2 + 0x758);
          for (lVar8 = lVar10; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
            if (lVar8 == lVar4) goto LAB_140e27ef1;
          }
        }
        lVar10 = 0;
LAB_140e27ef1:
        FUN_140e3c450(param_1,0,lVar10);
        if (*(longlong *)(param_2 + 0x758) != 0) {
          lVar4 = FUN_142dfdfe0();
          lVar10 = *(longlong *)(param_2 + 0x758);
          for (lVar8 = lVar10; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
            if (lVar8 == lVar4) goto LAB_140e27f31;
          }
        }
        lVar10 = 0;
LAB_140e27f31:
        FUN_140e338d0(param_1,0,lVar10);
        if (*(char *)(param_2 + 0x762) != '\0') {
          plVar9 = *(longlong **)(param_1 + 0x518);
          plVar11 = plVar9 + *(int *)(param_1 + 0x520);
          if (plVar9 != plVar11) {
LAB_140e27f90:
            lVar10 = *plVar9;
            if (lVar10 != 0) {
              plVar1 = (longlong *)(param_1 + 0x538);
              plVar7 = (longlong *)*plVar1;
              plVar6 = plVar7 + (longlong)*(int *)(param_1 + 0x540) * 3;
              for (; plVar7 != plVar6; plVar7 = plVar7 + 3) {
                if ((*plVar7 == param_2) && (plVar7[1] == lVar10)) {
                  bVar2 = true;
                }
                else {
                  bVar2 = false;
                }
                if (bVar2) {
                  if (plVar7 != (longlong *)0x0) {
                    FUN_140f8bd80(lVar10,plVar7[2]);
                    FUN_140e33f90(param_1,param_2,lVar10);
                    if (*(longlong *)(param_2 + 400) != 0) {
                      if (*(longlong *)(param_2 + 0x758) == 0) goto LAB_140e28040;
                      plVar5 = (longlong *)FUN_142dfdfe0();
                      plVar6 = *(longlong **)(param_2 + 0x758);
                      plVar7 = plVar6;
                      goto joined_r0x000140e28030;
                    }
                  }
                  break;
                }
              }
            }
            goto LAB_140e2818b;
          }
        }
      }
    }
  }
  return;
joined_r0x000140e28030:
  if (plVar7 == (longlong *)0x0) goto LAB_140e28040;
  if (plVar7 == plVar5) goto LAB_140e28042;
  plVar7 = (longlong *)plVar7[6];
  goto joined_r0x000140e28030;
LAB_140e28040:
  plVar6 = (longlong *)0x0;
LAB_140e28042:
  lVar8 = plVar6[0x1f];
  if (lVar8 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar8 = plVar6[0x1f];
    if (lVar8 == 0) goto LAB_140e2818b;
  }
  lVar8 = *(longlong *)(lVar8 + 0xd8);
  if (lVar8 != 0) {
    lVar4 = UARGetCandidateObjectAsyncTaskBlueprintProxy::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (*(longlong *)(lVar8 + 0x50) != 0)) &&
       (plVar6 = (longlong *)FUN_140f61b20(lVar10), plVar6 != (longlong *)0x0)) {
      (**(code **)(*plVar6 + 0x2a8))(plVar6,*(undefined8 *)(param_2 + 0x118));
      FUN_140f8ef30(plVar6,param_2);
      FUN_140f8d9f0(plVar6,*(undefined8 *)(lVar8 + 0x50));
      local_38 = *(undefined4 *)(param_2 + 0x220);
      local_34 = *(undefined4 *)(param_2 + 0x224);
      local_30 = *(undefined4 *)(param_2 + 0x228);
      FUN_140f8ef10(plVar6,&local_38);
      FUN_140f61690(lVar10,plVar6);
      lVar8 = (longlong)*(int *)(param_1 + 0x540);
      plVar5 = (longlong *)*plVar1;
      plVar7 = plVar5 + lVar8 * 3;
      for (; plVar5 != plVar7; plVar5 = plVar5 + 3) {
        if (*plVar5 == param_2) goto LAB_140e2818b;
      }
      iVar3 = *(int *)(param_1 + 0x540) + 1;
      *(int *)(param_1 + 0x540) = iVar3;
      if (*(int *)(param_1 + 0x544) < iVar3) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar1);
      }
      lVar4 = *plVar1;
      *(longlong *)(lVar4 + lVar8 * 0x18) = param_2;
      *(longlong *)(lVar4 + 8 + lVar8 * 0x18) = lVar10;
      *(longlong **)(lVar4 + 0x10 + lVar8 * 0x18) = plVar6;
    }
  }
LAB_140e2818b:
  plVar9 = plVar9 + 1;
  if (plVar9 == plVar11) {
    return;
  }
  goto LAB_140e27f90;
}



// FUNCTION 140e281c0 FUN_140e281c0 body=118 status=ok
// SIG undefined FUN_140e281c0(void)

void FUN_140e281c0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (((char)param_1[0x25] == '\x03') && (param_2 != 0)) {
    if (param_1[0x92] != 0) {
      FUN_14145f370();
    }
    uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    FUN_140b93ca0(uVar1,param_2);
    uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    FUN_140b88460(uVar1,param_2,param_3);
  }
  return;
}



// FUNCTION 140e28240 FUN_140e28240 body=125 status=ok
// SIG undefined FUN_140e28240(void)

void FUN_140e28240(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (((*(char *)(param_1 + 0x128) == '\x03') && (*(longlong *)(param_1 + 0x2a60) != 0)) &&
     (iVar3 = 0, 0 < *(int *)(param_1 + 0x26d8))) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(lVar2 + *(longlong *)(param_1 + 0x26d0));
      if (lVar1 != 0) {
        FUN_142e438a0(*(undefined8 *)(param_1 + 0x2a60),lVar1,0);
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x26d8));
  }
  return;
}



// FUNCTION 140e282c0 FUN_140e282c0 body=459 status=ok
// SIG undefined FUN_140e282c0(void)

void FUN_140e282c0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  longlong *local_28;
  
  local_38 = *(longlong *)(param_1 + 0x38);
  if (local_38 != 0) {
    local_30 = *(longlong **)(param_1 + 0x40);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    lVar4 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar4 + 0x18),&local_48,&local_38);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_30 + 1;
      lVar4 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_30)(local_30);
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
    if (local_48 != 0) {
      cVar3 = FUN_142b40fe0();
      lVar4 = local_48;
      if (cVar3 == '\0') {
        FUN_140e28490(param_1);
      }
      else if (*(longlong *)(param_1 + 0x50) == 0) {
        plVar9 = (longlong *)(local_48 + 0xd8);
        plVar5 = (longlong *)FMemory::Realloc(0,0x20);
        local_28 = plVar5;
        if (plVar5 != (longlong *)0x0) {
          plVar5[1] = param_1;
          *plVar5 = (longlong)&PTR_GetPoolName_1445999c8;
          lVar6 = FDelegateHandle::GenerateNewID();
          plVar5[3] = lVar6;
          *plVar5 = (longlong)&PTR_GetPoolName_144599a10;
        }
        uVar8 = 0;
        if (plVar5 != (longlong *)0x0) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar9,1);
          puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
          iVar2 = *(int *)(lVar4 + 0xe0);
          uVar8 = *puVar7;
          *(int *)(lVar4 + 0xe0) = iVar2 + 1;
          if (*(int *)(lVar4 + 0xe4) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar2);
          }
          puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar9);
          *puVar7 = plVar5;
          *(undefined4 *)(puVar7 + 1) = 2;
        }
        *(undefined8 *)(param_1 + 0x50) = uVar8;
        FUN_142b65bf0(local_48);
      }
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 140e28490 FUN_140e28490 body=1520 status=ok
// SIG undefined FUN_140e28490(void)

void FUN_140e28490(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  void *pvVar5;
  bool bVar6;
  ulonglong uVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  void **ppvVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 local_res8 [8];
  longlong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  void *local_f0;
  undefined8 local_e8;
  void *local_e0;
  undefined8 local_d8;
  void *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  uint local_b8;
  undefined4 local_b4;
  longlong local_b0 [3];
  longlong *local_98;
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong *plStack_78;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  iVar17 = 0;
  lVar10 = *(longlong *)(param_1 + 0x38);
  local_108 = 0;
  local_100 = 0;
  if (lVar10 != 0) {
    local_98 = *(longlong **)(param_1 + 0x40);
    if (local_98 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_98 + 1) = (int)local_98[1] + 1;
      UNLOCK();
    }
    local_b0[2] = lVar10;
    lVar10 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar10 + 0x18),&local_90,local_b0 + 2);
    plVar13 = local_98;
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_98 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    if (local_90 != 0) {
      TBaseMulticastDelegate<void>::Remove(local_90 + 0xd8,*(undefined8 *)(param_1 + 0x50));
      local_c0 = (longlong *)0x0;
      uVar15 = *(uint *)(local_90 + 0x2d8);
      lVar10 = *(longlong *)(local_90 + 0x2d0);
      local_b8 = uVar15;
      if (uVar15 == 0) {
        local_b4 = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_c0,uVar15,0);
        lVar10 = lVar10 - (longlong)local_c0;
        plVar13 = local_c0;
        do {
          *plVar13 = *(longlong *)(lVar10 + (longlong)plVar13);
          lVar4 = *(longlong *)(lVar10 + 8 + (longlong)plVar13);
          plVar13[1] = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
          plVar13 = plVar13 + 2;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      if (0 < (int)local_b8) {
        uVar18 = (ulonglong)local_b8;
        plVar13 = local_c0;
        do {
          if (*(int *)(*plVar13 + 0x28) == 0) {
            puVar14 = &DAT_143f3eda8;
          }
          else {
            puVar14 = *(undefined2 **)(*plVar13 + 0x20);
          }
          cVar8 = FDateTime::ParseIso8601(puVar14,local_res8);
          if (cVar8 != '\0') {
            local_f0 = (void *)0x0;
            local_e8 = 0;
            local_e0 = (void *)0x0;
            local_d8 = 0;
            local_d0 = (void *)0x0;
            local_80 = 0;
            plStack_78 = (longlong *)0x0;
            local_c8 = 0;
            local_b0[0] = 0;
            local_b0[1] = 0;
            uVar11 = FUN_1415fc6d0(local_70,local_res8,0,local_b0,&local_80);
            ppvVar12 = (void **)FText::ToString(uVar11);
            if (&local_e0 != ppvVar12) {
              iVar9 = *(int *)(ppvVar12 + 1);
              pvVar5 = *ppvVar12;
              local_d8 = CONCAT44(local_d8._4_4_,iVar9);
              if (iVar9 != 0) {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e0,iVar9,0);
                _guard_xfg_dispatch_icall_nop(local_e0,pvVar5,(longlong)iVar9 * 2);
              }
            }
            plVar1 = local_68;
            if (local_68 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_68 + 1;
              lVar10 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*local_68)(local_68);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                iVar9 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*plVar1 + 8))(plVar1,1);
                }
              }
            }
            if (local_b0[0] != 0) {
              FMemory::Free();
            }
            plVar1 = plStack_78;
            if (plStack_78 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_78 + 1;
              lVar10 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*plStack_78)(plStack_78);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                iVar9 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*plVar1 + 8))(plVar1,1);
                }
              }
            }
            uVar11 = FText::FromString(local_58,*plVar13);
            ppvVar12 = (void **)FText::ToString(uVar11);
            if (&local_f0 != ppvVar12) {
              iVar9 = *(int *)(ppvVar12 + 1);
              pvVar5 = *ppvVar12;
              local_e8 = CONCAT44(local_e8._4_4_,iVar9);
              if ((iVar9 == 0) && (local_e8._4_4_ == 0)) {
                local_e8 = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f0,iVar9,local_e8._4_4_);
                _guard_xfg_dispatch_icall_nop(local_f0,pvVar5,(longlong)iVar9 * 2);
              }
            }
            plVar1 = local_50;
            if (local_50 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_50 + 1;
              lVar10 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*local_50)(local_50);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                iVar9 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*plVar1 + 8))(plVar1,1);
                }
              }
            }
            uVar11 = FText::FromString(local_40,*plVar13 + 0x10);
            ppvVar12 = (void **)FText::ToString(uVar11);
            if (&local_d0 != ppvVar12) {
              iVar9 = *(int *)(ppvVar12 + 1);
              pvVar5 = *ppvVar12;
              local_c8 = CONCAT44(local_c8._4_4_,iVar9);
              if ((iVar9 == 0) && (local_c8._4_4_ == 0)) {
                local_c8 = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d0,iVar9,local_c8._4_4_);
                _guard_xfg_dispatch_icall_nop(local_d0,pvVar5,(longlong)iVar9 * 2);
              }
            }
            plVar1 = local_38;
            if (local_38 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_38 + 1;
              lVar10 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*local_38)(local_38);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                iVar9 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*plVar1 + 8))(plVar1,1);
                }
              }
            }
            uVar7 = local_100;
            lVar10 = (longlong)(int)local_100;
            iVar9 = (int)local_100 + 1;
            local_100 = CONCAT44(local_100._4_4_,iVar9);
            if (local_100._4_4_ < iVar9) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_108,uVar7 & 0xffffffff);
            }
            puVar16 = (undefined4 *)(lVar10 * 0x38 + local_108);
            *puVar16 = local_f8;
            FString::FString(puVar16 + 2,&local_f0);
            FString::FString(puVar16 + 6,&local_e0);
            FString::FString(puVar16 + 10,&local_d0);
            if (local_d0 != (void *)0x0) {
              FMemory::Free();
            }
            if (local_e0 != (void *)0x0) {
              FMemory::Free();
            }
            if (local_f0 != (void *)0x0) {
              FMemory::Free();
            }
          }
          plVar13 = plVar13 + 2;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_c0);
    }
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_88 + 1;
      lVar10 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar2 = (int *)((longlong)local_88 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
  }
  plVar13 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
  plVar13 = (longlong *)(**(code **)(*plVar13 + 0x198))(plVar13);
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x50))(plVar13,"Load_Reward_History_Notify_Response",1);
    lVar10 = (longlong)(int)local_100;
    cVar8 = (**(code **)(*plVar13 + 0x138))(plVar13,local_108,lVar10,FUN_140e0f380,FUN_140e0f3d0);
    if (cVar8 == '\0') {
      (**(code **)(*plVar13 + 0x140))(plVar13,lVar10);
      while( true ) {
        if ((iVar17 < 0) || ((int)local_100 <= iVar17)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) break;
        lVar10 = (longlong)iVar17 * 0x38 + local_108;
        (**(code **)(*plVar13 + 0x28))();
        FUN_140e1b7f0(plVar13,lVar10);
        (**(code **)(*plVar13 + 0x48))(plVar13,lVar10);
        iVar17 = iVar17 + 1;
      }
      (**(code **)(*plVar13 + 0x148))(plVar13);
    }
    (**(code **)(*plVar13 + 0x58))(plVar13);
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  if ((int)local_100 != 0) {
    plVar13 = (longlong *)(local_108 + 0x18);
    iVar17 = (int)local_100;
    do {
      if (plVar13[2] != 0) {
        FMemory::Free();
      }
      if (*plVar13 != 0) {
        FMemory::Free();
      }
      if (plVar13[-2] != 0) {
        FMemory::Free();
      }
      plVar13 = plVar13 + 7;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e28a80 FUN_140e28a80 body=188 status=ok
// SIG undefined FUN_140e28a80(void)

undefined8 FUN_140e28a80(longlong param_1,longlong param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x118);
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
    if (bVar1) goto LAB_140e28ae1;
  }
  lVar4 = 0;
LAB_140e28ae1:
  if ((((param_2 != 0) && (*(char *)(param_2 + 0x249) != '\0')) &&
      (cVar2 = FUN_140c47970(param_2,param_3,lVar4), cVar2 != '\0')) &&
     (cVar2 = FUN_140e250e0(param_1,*(undefined8 *)(param_2 + 0x10),param_3), cVar2 == '\0')) {
    FUN_1413f5010(param_1,param_2,param_3);
    return 1;
  }
  return 0;
}



// FUNCTION 140e28b40 FUN_140e28b40 body=936 status=ok
// SIG undefined FUN_140e28b40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e28b40(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong **pplVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 uVar12;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined4 local_100;
  longlong *local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [8];
  longlong *local_d0;
  longlong *local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  if (param_2 != 0) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
    lVar4 = FUN_142e20fc0();
    lVar9 = param_2;
    do {
      if (lVar9 == lVar4) {
        if (*(longlong *)(param_1 + 0x2718) == 0) {
          return;
        }
        local_108 = 0;
        FUN_140e1df50(param_1,1,DAT_146870218);
        lVar9 = *(longlong *)(param_1 + 0x2718);
        local_f8 = (longlong *)0x0;
        plStack_f0 = (longlong *)0x0;
        lVar4 = *(longlong *)(lVar9 + 0x118);
        if (lVar4 == 0) {
          return;
        }
        lVar5 = FUN_1413f82e0();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) {
          return;
        }
        if (*(longlong *)(lVar4 + 0x920) == 0) {
          return;
        }
        pplVar6 = (longlong **)FUN_142c7bc00(*(longlong *)(lVar4 + 0x920),local_d8,param_2,2);
        if (&local_f8 != pplVar6) {
          local_f8 = *pplVar6;
          *pplVar6 = (longlong *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_f0,pplVar6 + 1);
        }
        *(longlong **)(lVar9 + 0x9a0) = local_f8;
        plVar10 = *(longlong **)(lVar9 + 0x9a8);
        if (plStack_f0 != plVar10) {
          if (plStack_f0 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plStack_f0 + 0xc) = *(int *)((longlong)plStack_f0 + 0xc) + 1;
            UNLOCK();
            plVar10 = *(longlong **)(lVar9 + 0x9a8);
          }
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar2 == 1) && (plVar10 != (longlong *)0x0)) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
          *(longlong **)(lVar9 + 0x9a8) = plStack_f0;
        }
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_d0 + 1;
          lVar9 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
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
        plVar10 = plStack_f0;
        if (local_f8 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x2ac0) = param_3;
          local_e8 = FUN_140e1f5c0;
          uStack_e0 = 0;
          uVar12 = (**(code **)(*local_f8 + 0x58))();
          uVar7 = AActor::GetWorldTimerManager(param_1);
          plVar8 = (longlong *)FMemory::Realloc(0,0x30);
          local_c8 = plVar8;
          if (plVar8 != (longlong *)0x0) {
            *plVar8 = (longlong)&PTR_FUN_143f77b88;
            FWeakObjectPtr::operator=(plVar8 + 1,param_1);
            *(undefined4 *)(plVar8 + 2) = (undefined4)local_e8;
            *(undefined4 *)((longlong)plVar8 + 0x14) = local_e8._4_4_;
            *(undefined4 *)(plVar8 + 3) = uStack_e0;
            *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_dc;
            lVar9 = FDelegateHandle::GenerateNewID();
            plVar8[5] = lVar9;
            *plVar8 = (longlong)&PTR_FUN_143f77bd0;
          }
          local_b8 = 0;
          local_b0 = 0;
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x30))(plVar8,&local_b8);
          }
          FWeakObjectPtr::operator=(local_a8,0);
          local_100 = 0xbf800000;
          local_108 = 0;
          local_a0 = 0;
          local_68 = (longlong *)0x0;
          local_58 = 0;
          local_98 = AK::MemoryMgr::StartProfileThreadUsage;
          FUN_142880850(uVar7,param_1 + 0x2ac8,&local_b8,uVar12);
          if (local_58 != 0) {
            plVar11 = local_88;
            if (local_68 != (longlong *)0x0) {
              plVar11 = local_68;
            }
            if (plVar11 != (longlong *)0x0) {
              (**(code **)(*plVar11 + 0x10))(plVar11,0);
            }
          }
          if (local_68 != (longlong *)0x0) {
            FMemory::Free();
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x28))(plVar8,0);
            local_c8 = (longlong *)FMemory::Realloc(plVar8,0,0);
            if (local_c8 != (longlong *)0x0) {
              FMemory::Free(local_c8);
            }
          }
        }
        plVar8 = plStack_f0;
        if (plVar10 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar10 = plVar10 + 1;
        lVar9 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar9 != 1) {
          return;
        }
        (**(code **)*plStack_f0)(plStack_f0);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 != 1) {
          return;
        }
        (**(code **)(*plStack_f0 + 8))(plStack_f0,1);
        return;
      }
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 140e28ef0 FUN_140e28ef0 body=124 status=ok
// SIG undefined FUN_140e28ef0(void)

void FUN_140e28ef0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142ca61c0();
  lVar2 = FUN_142269f40(param_1);
  if (lVar2 != 0) {
    lVar3 = FUN_141307c20();
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
      *(longlong *)(param_1 + 0x538) = lVar2;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x538) = 0;
  return;
}



// FUNCTION 140e28f70 FUN_140e28f70 body=298 status=ok
// SIG undefined FUN_140e28f70(void)

void FUN_140e28f70(longlong param_1)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_142ca61c0();
  lVar3 = FUN_142269f40(param_1);
  if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x118), lVar3 != 0)) {
    lVar4 = FUN_1414b4c90();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140e28fd3;
  }
  lVar3 = 0;
LAB_140e28fd3:
  *(longlong *)(param_1 + 0x560) = lVar3;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
    lVar3 = *(longlong *)(param_1 + 0x560);
  }
  *(undefined8 *)(param_1 + 0x550) = *(undefined8 *)(DAT_146b33f38 + 0xd0);
  *(undefined4 *)(param_1 + 0x544) = 0xc47a0000;
  *(undefined4 *)(param_1 + 0x548) = 0xc47a0000;
  if (lVar3 != 0) {
    *(undefined4 *)(param_1 + 0x53c) = *(undefined4 *)(lVar3 + 0x708);
    *(bool *)(param_1 + 0x538) = *(char *)(lVar3 + 0x4a8) == '\x02';
    cVar1 = *(char *)(lVar3 + 0x4a8);
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        *(undefined1 *)(param_1 + 0x539) = 2;
        return;
      }
      if (cVar1 != '\x05') {
        *(undefined1 *)(param_1 + 0x539) = 0;
        return;
      }
      *(undefined1 *)(param_1 + 0x539) = 3;
      return;
    }
    *(undefined1 *)(param_1 + 0x539) = 1;
  }
  return;
}



// FUNCTION 140e290a0 FUN_140e290a0 body=1001 status=ok
// SIG undefined FUN_140e290a0(void)

void FUN_140e290a0(longlong param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int *piVar8;
  int *piVar9;
  undefined1 local_res8 [8];
  int local_58;
  int local_54;
  longlong local_50;
  int local_48;
  int local_44;
  longlong local_40;
  int local_38;
  int local_34;
  longlong local_30;
  
  FUN_142279500();
  lVar4 = FUN_142269f40(param_1);
  if (lVar4 != 0) {
    lVar5 = FUN_141499e60();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140e29102;
  }
  lVar4 = 0;
LAB_140e29102:
  *(longlong *)(param_1 + 0x468) = lVar4;
  if (lVar4 != 0) {
    uVar6 = FUN_1430bf300();
    lVar4 = AGameStateBase::OnRep_GameModeClass(*(undefined8 *)(param_1 + 0x468),uVar6);
    if (lVar4 != 0) {
      lVar5 = FUN_1430bf300();
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
        FWeakObjectPtr::operator=(&local_58,0);
        local_50 = 0;
        plVar7 = (longlong *)FName::FName(local_res8,L"OnRailgunStartFiring",1);
        FWeakObjectPtr::operator=(&local_58,param_1);
        local_50 = *plVar7;
        plVar7 = (longlong *)(lVar4 + 0x1c0);
        piVar8 = (int *)*plVar7;
        iVar1 = *(int *)(lVar4 + 0x1c8);
        for (piVar9 = piVar8; piVar9 != piVar8 + (longlong)iVar1 * 4; piVar9 = piVar9 + 4) {
          if (((*piVar9 == local_58) && (piVar9[1] == local_54)) ||
             ((cVar3 = FWeakObjectPtr::IsValid(piVar9), cVar3 == '\0' &&
              (cVar3 = FWeakObjectPtr::IsValid(&local_58), cVar3 == '\0')))) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if ((bVar2) && (*(longlong *)(piVar9 + 2) == local_50)) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (bVar2) {
            if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140e29273;
            break;
          }
        }
        iVar1 = *(int *)(lVar4 + 0x1c8);
        *(int *)(lVar4 + 0x1c8) = iVar1 + 1;
        if (*(int *)(lVar4 + 0x1cc) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
        }
        piVar8 = (int *)((longlong)iVar1 * 0x10 + *plVar7);
        *piVar8 = local_58;
        piVar8[1] = local_54;
        *(longlong *)(piVar8 + 2) = local_50;
LAB_140e29273:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar7);
        FWeakObjectPtr::operator=(&local_48,0);
        local_40 = 0;
        plVar7 = (longlong *)FName::FName(local_res8,L"OnRailgunFinishFiring",1);
        FWeakObjectPtr::operator=(&local_48,param_1);
        local_40 = *plVar7;
        plVar7 = (longlong *)(lVar4 + 0x1d0);
        piVar8 = (int *)*plVar7;
        iVar1 = *(int *)(lVar4 + 0x1d8);
        for (piVar9 = piVar8; piVar9 != piVar8 + (longlong)iVar1 * 4; piVar9 = piVar9 + 4) {
          if (((*piVar9 == local_48) && (piVar9[1] == local_44)) ||
             ((cVar3 = FWeakObjectPtr::IsValid(piVar9), cVar3 == '\0' &&
              (cVar3 = FWeakObjectPtr::IsValid(&local_48), cVar3 == '\0')))) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if ((bVar2) && (*(longlong *)(piVar9 + 2) == local_40)) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (bVar2) {
            if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140e29366;
            break;
          }
        }
        iVar1 = *(int *)(lVar4 + 0x1d8);
        *(int *)(lVar4 + 0x1d8) = iVar1 + 1;
        if (*(int *)(lVar4 + 0x1dc) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
        }
        piVar8 = (int *)((longlong)iVar1 * 0x10 + *plVar7);
        *piVar8 = local_48;
        piVar8[1] = local_44;
        *(longlong *)(piVar8 + 2) = local_40;
LAB_140e29366:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar7);
        FWeakObjectPtr::operator=(&local_38,0);
        local_30 = 0;
        plVar7 = (longlong *)FName::FName(local_res8,L"OnRailgunFired_Default",1);
        FWeakObjectPtr::operator=(&local_38,param_1);
        local_30 = *plVar7;
        plVar7 = (longlong *)(lVar4 + 0x1e0);
        piVar8 = (int *)*plVar7;
        iVar1 = *(int *)(lVar4 + 0x1e8);
        for (piVar9 = piVar8; piVar9 != piVar8 + (longlong)iVar1 * 4; piVar9 = piVar9 + 4) {
          if (((*piVar9 == local_38) && (piVar9[1] == local_34)) ||
             ((cVar3 = FWeakObjectPtr::IsValid(piVar9), cVar3 == '\0' &&
              (cVar3 = FWeakObjectPtr::IsValid(&local_38), cVar3 == '\0')))) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if ((bVar2) && (*(longlong *)(piVar9 + 2) == local_30)) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (bVar2) {
            if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140e29459;
            break;
          }
        }
        iVar1 = *(int *)(lVar4 + 0x1e8);
        *(int *)(lVar4 + 0x1e8) = iVar1 + 1;
        if (*(int *)(lVar4 + 0x1ec) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
        }
        piVar8 = (int *)((longlong)iVar1 * 0x10 + *plVar7);
        *piVar8 = local_38;
        piVar8[1] = local_34;
        *(longlong *)(piVar8 + 2) = local_30;
LAB_140e29459:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar7);
      }
    }
  }
  return;
}



// FUNCTION 140e29490 FUN_140e29490 body=128 status=ok
// SIG undefined FUN_140e29490(void)

void FUN_140e29490(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142279500();
  lVar2 = (**(code **)(*param_1 + 0x278))(param_1);
  if (lVar2 != 0) {
    lVar3 = FUN_1414bbb50();
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
      param_1[0x8a] = lVar2;
      return;
    }
  }
  param_1[0x8a] = 0;
  return;
}



// FUNCTION 140e29510 FUN_140e29510 body=124 status=ok
// SIG undefined FUN_140e29510(void)

void FUN_140e29510(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142279500();
  lVar2 = FUN_142269f40(param_1);
  if (lVar2 != 0) {
    lVar3 = FUN_141499e60();
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
      *(longlong *)(param_1 + 0x470) = lVar2;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x470) = 0;
  return;
}



// FUNCTION 140e29590 FUN_140e29590 body=124 status=ok
// SIG undefined FUN_140e29590(void)

void FUN_140e29590(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142ca61c0();
  lVar2 = FUN_142269f40(param_1);
  if (lVar2 != 0) {
    lVar3 = UGCharacterAnimInstance::GetPrivateStaticClass();
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
      *(longlong *)(param_1 + 0x538) = lVar2;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x538) = 0;
  return;
}



// FUNCTION 140e29610 FUN_140e29610 body=258 status=ok
// SIG undefined FUN_140e29610(void)

void FUN_140e29610(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if ((*(longlong *)(param_1 + 0x538) != 0) && (lVar3 = FUN_140a63ba0(), lVar3 != 0)) {
    lVar4 = FUN_1413ffe00();
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
      lVar4 = lVar3 + 0x26f0;
      *(byte *)(param_1 + 0x540) =
           *(byte *)(param_1 + 0x540) ^ (*(byte *)(lVar3 + 0x2721) ^ *(byte *)(param_1 + 0x540)) & 1
      ;
      cVar2 = FUN_140e536b0(lVar4,0);
      *(byte *)(param_1 + 0x540) = *(byte *)(param_1 + 0x540) & 0xfd;
      *(byte *)(param_1 + 0x540) = *(byte *)(param_1 + 0x540) | cVar2 * '\x02';
      cVar2 = FUN_140e536b0(lVar4,1);
      *(byte *)(param_1 + 0x540) = *(byte *)(param_1 + 0x540) & 0xfb;
      *(byte *)(param_1 + 0x540) = *(byte *)(param_1 + 0x540) | cVar2 << 2;
      cVar2 = FUN_140e536b0(lVar4,2);
      *(byte *)(param_1 + 0x540) = *(byte *)(param_1 + 0x540) & 0xf7;
      *(byte *)(param_1 + 0x540) = *(byte *)(param_1 + 0x540) | cVar2 << 3;
      FUN_140e4ca00(lVar4,&local_res8);
      *(undefined4 *)(param_1 + 0x544) = local_res8;
      *(undefined4 *)(param_1 + 0x548) = local_resc;
    }
  }
  return;
}



// FUNCTION 140e29720 FUN_140e29720 body=346 status=ok
// SIG undefined FUN_140e29720(void)

void FUN_140e29720(longlong *param_1)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  if (((lVar7 != 0) && (param_1[0xac] != 0)) && (param_1[0xaa] != 0)) {
    if (*(char *)((longlong)param_1 + 0x539) == '\0') {
      fVar1 = *(float *)(lVar7 + 0x790);
      cVar4 = FUN_140e53d80(param_1[0xac]);
      cVar5 = FUN_140e536a0(param_1[0xac]);
      *(undefined1 *)(param_1 + 0xa8) = 0;
      cVar6 = FUN_140e536a0(param_1[0xac]);
      if (((cVar6 != '\0') ||
          (fVar1 <= *(float *)(param_1[0xaa] + 0x438) + *(float *)(param_1 + 0xa9))) ||
         (lVar7 = param_1[0xac], *(char *)(lVar7 + 0x49c) != '\0')) {
        lVar7 = param_1[0xac];
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      cVar6 = FUN_140e53d80(lVar7);
      if ((cVar6 != '\0') ||
         (fVar1 <= *(float *)(param_1[0xaa] + 0x434) + *(float *)((longlong)param_1 + 0x544))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((bVar2) || (bVar3)) {
        *(undefined1 *)(param_1 + 0xa8) = 1;
      }
      if (cVar4 != '\0') {
        *(float *)((longlong)param_1 + 0x544) = fVar1;
      }
      if (cVar5 != '\0') {
        *(float *)(param_1 + 0xa9) = fVar1;
      }
    }
    else if ((byte)(*(char *)((longlong)param_1 + 0x539) - 1U) < 3) {
      *(undefined1 *)(param_1 + 0xa8) = 1;
      return;
    }
  }
  return;
}



// FUNCTION 140e29890 FUN_140e29890 body=136 status=ok
// SIG undefined FUN_140e29890(void)

void FUN_140e29890(longlong param_1,undefined4 param_2)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if ((*(longlong *)(param_1 + 0x468) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x468) + 0x720) != '\0')) {
    if (*(char *)(param_1 + 0x470) == '\0') {
      cVar1 = FUN_14307ebb0();
      if (cVar1 != '\0') {
        return;
      }
      fVar2 = *(float *)(param_1 + 0x474) * *(float *)(param_1 + 0x460);
      fVar3 = 0.0;
      if ((0.0 <= fVar2) && (fVar3 = fVar2, 1.0 <= fVar2)) {
        fVar3 = 1.0;
      }
    }
    else {
      fVar3 = *(float *)(param_1 + 0x474) * *(float *)(param_1 + 0x45c);
    }
    FUN_140e370c0(param_1,fVar3,param_2);
  }
  return;
}



// FUNCTION 140e29920 FUN_140e29920 body=167 status=ok
// SIG undefined FUN_140e29920(void)

void FUN_140e29920(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_18 [16];
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*(longlong *)(param_1 + 0x450) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x450) + 0x4d8);
    cVar1 = *(char *)(lVar2 + 0x418);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x458) = 0;
    }
    else {
      if (cVar1 == '\x02') {
        puVar3 = (undefined8 *)FUN_140a66600(lVar2,local_18,0);
        *(undefined8 *)(param_1 + 0x440) = *puVar3;
        *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(puVar3 + 1);
        return;
      }
      if ((cVar1 == '\x03') && (*(char *)(param_1 + 0x458) == '\0')) {
        *(undefined8 *)(param_1 + 0x440) = 0;
        *(undefined4 *)(param_1 + 0x448) = 0;
        *(undefined1 *)(param_1 + 0x458) = 1;
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e299d0 FUN_140e299d0 body=388 status=ok
// SIG undefined FUN_140e299d0(void)

void FUN_140e299d0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  undefined4 uVar6;
  ulonglong local_58;
  uint local_50;
  undefined1 local_48 [8];
  uint local_40;
  undefined1 local_3c [52];
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  plVar1 = *(longlong **)(param_1 + 0x470);
  if ((plVar1 != (longlong *)0x0) && ((char)plVar1[0xe4] != '\0')) {
    uVar2 = (**(code **)(*plVar1 + 0x858))();
    uVar6 = FUN_14309cc20(*(undefined8 *)(param_1 + 0x470),uVar2);
    cVar3 = FUN_141271160(*(undefined8 *)(param_1 + 0x470),3);
    puVar5 = (ulonglong *)(param_1 + 0x458);
    if (cVar3 != '\0') {
      puVar5 = (ulonglong *)(param_1 + 0x464);
    }
    local_58 = *puVar5;
    local_50 = (uint)puVar5[1];
    puVar4 = (undefined8 *)FUN_142db9160(local_48,param_1 + 0x440,uVar6,&local_58,param_2);
    *(undefined8 *)(param_1 + 0x440) = *puVar4;
    *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(puVar4 + 1);
    cVar3 = FUN_141271160(*(undefined8 *)(param_1 + 0x470),3);
    puVar5 = (ulonglong *)(param_1 + 0x458);
    if (cVar3 != '\0') {
      puVar5 = (ulonglong *)(param_1 + 0x464);
    }
    local_50 = (uint)puVar5[1] ^ 0x80000000;
    local_58 = *puVar5 ^ 0x8000000080000000;
    local_40 = local_50;
    puVar4 = (undefined8 *)FUN_142db9160(local_3c,param_1 + 0x44c,uVar6,&local_58,param_2);
    *(undefined8 *)(param_1 + 0x44c) = *puVar4;
    *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(puVar4 + 1);
  }
  return;
}



// FUNCTION 140e29b60 FUN_140e29b60 body=429 status=ok
// SIG undefined FUN_140e29b60(void)

void FUN_140e29b60(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*(longlong *)(param_1 + 0x538) != 0) {
    lVar2 = FUN_140e80eb0();
    if (lVar2 != 0) {
      uVar1 = FUN_140e539d0(lVar2);
      goto LAB_140e29b9e;
    }
  }
  uVar1 = 1;
LAB_140e29b9e:
  uVar3 = (ulonglong)_tls_index;
  *(undefined1 *)(param_1 + 0x540) = uVar1;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar3 * 8);
  if (*(int *)(lVar2 + 0x38) < DAT_1468702d8) {
    _Init_thread_header(&DAT_1468702d8);
    if (DAT_1468702d8 == -1) {
      FName::FName(&DAT_1468702d0,L"HP_Left",1);
      _Init_thread_footer(&DAT_1468702d8);
    }
  }
  if (*(int *)(lVar2 + 0x38) < DAT_1468702e8) {
    _Init_thread_header(&DAT_1468702e8);
    if (DAT_1468702e8 == -1) {
      FName::FName(&DAT_1468702e0,L"HP_Right",1);
      _Init_thread_footer(&DAT_1468702e8);
    }
  }
  fVar4 = (float)FUN_14225e8a0(param_1,DAT_1468702d0);
  fVar5 = (float)FUN_14225e8a0(param_1,DAT_1468702e0);
  *(bool *)(param_1 + 0x541) = 0.0 < fVar4;
  *(float *)(param_1 + 0x54c) = 1.0 - *(float *)(param_1 + 0x548);
  *(float *)(param_1 + 0x550) = 1.0 - *(float *)(param_1 + 0x544);
  *(bool *)(param_1 + 0x542) = 0.0 < fVar5;
  fVar4 = ((1.0 - fVar5) + fVar4) * 0.5;
  if (0.0 <= fVar4) {
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    *(float *)(param_1 + 0x554) = fVar4;
  }
  else {
    *(undefined4 *)(param_1 + 0x554) = 0;
  }
  return;
}



// FUNCTION 140e29d30 FUN_140e29d30 body=286 status=ok
// SIG undefined FUN_140e29d30(void)

void FUN_140e29d30(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)*param_2;
  if (plVar7 != (longlong *)0x0) {
    lVar4 = FUN_1413ffe00();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140e29d86;
  }
  plVar7 = (longlong *)0x0;
LAB_140e29d86:
  if (((longlong *)param_2[1] == param_1) && (plVar7 != (longlong *)0x0)) {
    uVar5 = (**(code **)(*plVar7 + 0x148))(plVar7);
    lVar4 = FUN_140aab5e0(uVar5);
    if ((lVar4 != 0) && (cVar3 = FUN_140aaed30(lVar4,plVar7), cVar3 != '\0')) {
      return;
    }
    lVar6 = FUN_140aab880();
    lVar4 = param_2[2];
    if ((lVar4 != 0) && (lVar6 != 0)) {
      plVar1 = *(longlong **)(lVar6 + 0x88);
      if (plVar1 == (longlong *)0x0) {
        lVar6 = 0;
      }
      else {
        lVar6 = plVar1[0x1f];
        if (lVar6 == 0) {
          (**(code **)(*plVar1 + 0x368))(plVar1);
          lVar6 = plVar1[0x1f];
          lVar4 = param_2[2];
        }
      }
      if (lVar6 == lVar4) {
        uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar4 = FUN_140aab5e0(uVar5);
        if (lVar4 != 0) {
          FUN_140ac16e0(lVar4,param_1,plVar7);
        }
      }
    }
  }
  return;
}



// FUNCTION 140e29e50 FUN_140e29e50 body=191 status=ok
// SIG undefined FUN_140e29e50(void)

void FUN_140e29e50(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  cVar3 = (**(code **)(*param_1 + 0x778))(param_1);
  if (((cVar3 != '\0') && (param_1[0x1cd] != 0)) && (lVar1 = param_1[0x92], lVar1 != 0)) {
    lVar4 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (param_1[0x4d5] != 0)) && (cVar3 = FUN_140a67930(param_1[0x1cd]), cVar3 != '\0')
       ) {
      FUN_142d408e0(param_1[0x4d5],lVar1,0x3f800000,0,0);
    }
  }
  return;
}



// FUNCTION 140e29f10 FUN_140e29f10 body=183 status=ok
// SIG undefined FUN_140e29f10(void)

void FUN_140e29f10(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar1 = *(longlong *)(param_1 + 0x3d0);
  if (lVar1 != 0) {
    bVar5 = false;
    uVar2 = *(undefined8 *)(param_1 + 0x3c8);
    *(int *)(lVar1 + 0x2c64) = *(int *)(lVar1 + 0x2c64) + 1;
    iVar8 = *(int *)(lVar1 + 0x2c64);
    iVar7 = *(int *)(lVar1 + 0x2c58) + -1;
    lVar10 = (longlong)iVar7;
    if (-1 < iVar7) {
      lVar9 = lVar10 << 4;
      bVar5 = false;
      do {
        lVar3 = *(longlong *)(lVar1 + 0x2c50);
        if ((*(int *)(lVar9 + 8 + lVar3) == 0) ||
           (plVar4 = *(longlong **)(lVar9 + lVar3), plVar4 == (longlong *)0x0)) {
LAB_140e29f83:
          bVar5 = true;
        }
        else {
          cVar6 = (**(code **)(*plVar4 + 0x40))(plVar4,uVar2);
          if (cVar6 == '\0') goto LAB_140e29f83;
        }
        lVar9 = lVar9 + -0x10;
        lVar10 = lVar10 + -1;
      } while (-1 < lVar10);
      iVar8 = *(int *)(lVar1 + 0x2c64);
    }
    *(int *)(lVar1 + 0x2c64) = iVar8 + -1;
    if (bVar5) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(lVar1 + 0x2c50),0);
      return;
    }
  }
  return;
}



// FUNCTION 140e29fd0 FUN_140e29fd0 body=301 status=ok
// SIG undefined FUN_140e29fd0(void)

void FUN_140e29fd0(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  longlong local_res18 [2];
  
  if (((char)param_1[0x25] == '\x03') && (param_2 != (longlong *)0x0)) {
    uVar2 = FUN_14301f8f0();
    lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar2);
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x208), lVar3 != 0)) {
      lVar4 = AInteractiveFoliageActor::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && ((char)param_1[0x25] == '\x03')) {
        if ((param_1[0x4e3] != 0) &&
           ((param_1[0x1d6] != 0 &&
            (FUN_14304ad10(param_1[0x1d6],local_res18,0x11,param_1[0x4e3],0,local_res8),
            local_res18[0] != 0)))) {
          lVar5 = FUN_142e20fc0();
          for (lVar4 = local_res18[0]; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
            if (lVar4 == lVar5) {
              FUN_141400590(param_1,local_res18[0],lVar3);
              break;
            }
          }
        }
        uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
        FUN_140b93ca0(uVar2,lVar3);
      }
    }
  }
  return;
}



// FUNCTION 140e2a100 FUN_140e2a100 body=180 status=ok
// SIG undefined FUN_140e2a100(void)

void FUN_140e2a100(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  longlong local_res18 [2];
  
  if (((char)param_1[0x25] == '\x03') && (param_2 != 0)) {
    if ((param_1[0x4e3] != 0) &&
       ((param_1[0x1d6] != 0 &&
        (FUN_14304ad10(param_1[0x1d6],local_res18,0x11,param_1[0x4e3],0,local_res8),
        local_res18[0] != 0)))) {
      lVar2 = FUN_142e20fc0();
      for (lVar1 = local_res18[0]; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
        if (lVar1 == lVar2) {
          FUN_141400590(param_1,local_res18[0],param_2);
          break;
        }
      }
    }
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    FUN_140b93ca0(uVar3,param_2);
  }
  return;
}



// FUNCTION 140e2a1c0 thunk_FUN_1414000b0 body=5 status=ok
// SIG undefined thunk_FUN_1414000b0(void)

void thunk_FUN_1414000b0(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStackX_10 [24];
  
  lVar1 = *param_1;
  auStackX_10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14688ee78);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,auStackX_10);
  return;
}



// FUNCTION 140e2a1d0 FUN_140e2a1d0 body=144 status=ok
// SIG undefined FUN_140e2a1d0(void)

void FUN_140e2a1d0(longlong param_1)

{
  int iVar1;
  
  FUN_140c4b830();
  if (((*(char *)(param_1 + 0x1f61) != '\0') && (0.0 < *(float *)(param_1 + 0x1f64))) &&
     (*(int *)(param_1 + 0x1f78) < *(int *)(param_1 + 0x1f6c))) {
    iVar1 = *(int *)(param_1 + 0x1f78);
    *(int *)(param_1 + 0x1f78) = iVar1 + 1;
    if (*(int *)(param_1 + 0x1f7c) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x1f70,iVar1);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x1f70) + (longlong)iVar1 * 4) =
         *(undefined4 *)(param_1 + 0x1f68);
    FUN_140e16ef0(param_1 + -0xd88);
  }
  return;
}



// FUNCTION 140e2a260 FUN_140e2a260 body=456 status=ok
// SIG undefined FUN_140e2a260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e2a260(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48 [4];
  undefined8 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  FUN_142cc8600();
  (**(code **)(param_1[0x1b1] + 0xf8))(param_1 + 0x1b1,1,1);
  if ((char)param_1[0x25] == '\x03') {
    plVar4 = (longlong *)param_1[0x55c];
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x450))(plVar4,param_2);
    }
    if (param_1[0x1d2] != 0) {
      FUN_140eb3b90(param_1[0x1d2],param_2);
    }
    uVar3 = FUN_1414add30();
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar3);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x408))(plVar4,param_2);
    }
  }
  lVar1 = param_1[0x138];
  if (lVar1 != 0) {
    lVar5 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
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
      lVar5 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_140cf7d20(lVar1);
      }
    }
  }
  uVar8 = 0;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_140e10180(param_1,local_48,0);
  puVar6 = local_48;
  if (local_28 != (undefined8 *)0x0) {
    puVar6 = local_28;
  }
  uVar7 = (longlong)(int)local_20 & 0x1fffffffffffffff;
  if (puVar6 + (int)local_20 < puVar6) {
    uVar7 = uVar8;
  }
  if (uVar7 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar6 + 0x3b0))((longlong *)*puVar6,0);
      uVar8 = uVar8 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar8 != uVar7);
  }
  if (local_28 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e2a440 FUN_140e2a440 body=31 status=ok
// SIG undefined FUN_140e2a440(void)

void FUN_140e2a440(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x2378,local_res8);
  return;
}



// FUNCTION 140e2a490 FUN_140e2a490 body=581 status=ok
// SIG undefined FUN_140e2a490(void)

void FUN_140e2a490(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  float fVar11;
  longlong local_68;
  longlong lStack_60;
  undefined6 uStack_46;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  lVar4 = FUN_140a96040(param_2[7]);
  if (lVar4 != 0) {
    lVar5 = FUN_14149b100();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_140e2a505;
  }
  lVar4 = 0;
LAB_140e2a505:
  bVar10 = (int)param_2[0x65] == 2;
  bVar3 = *(byte *)((longlong)param_2 + 0x214);
  fVar11 = (float)(**(code **)(*param_2 + 0x18))(param_2,0);
  if (lVar4 == 0) {
    local_68 = 0;
    lStack_60 = 0;
  }
  else {
    local_68 = *(longlong *)(lVar4 + 0x480);
    lStack_60 = FUN_14126f7e0(lVar4);
  }
  lVar4 = param_2[0xb];
  plVar1 = (longlong *)(param_1 + 0x268);
  plVar9 = (longlong *)*plVar1;
  iVar7 = *(int *)(param_1 + 0x270);
  plVar2 = plVar9 + (longlong)iVar7 * 5;
  if (plVar9 != plVar2) {
    do {
      if ((local_68 == *plVar9) && (lStack_60 == plVar9[1])) {
        if (lVar4 != 0) {
          lVar6 = FUN_142e49950();
          lVar5 = lVar4;
          do {
            lVar8 = lVar4;
            if (lVar5 == lVar6) goto LAB_140e2a5e4;
            lVar5 = *(longlong *)(lVar5 + 0x30);
          } while (lVar5 != 0);
        }
        lVar8 = 0;
LAB_140e2a5e4:
        if (plVar9[2] != 0) {
          lVar6 = FUN_142e49950();
          for (lVar5 = plVar9[2]; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
            if (lVar5 == lVar6) {
              lVar5 = plVar9[2];
              goto LAB_140e2a614;
            }
          }
        }
        lVar5 = 0;
LAB_140e2a614:
        if (((lVar8 == lVar5) && ((bVar3 & 1) == *(byte *)(plVar9 + 4))) &&
           (bVar10 == (bool)*(char *)((longlong)plVar9 + 0x21))) {
          *(int *)((longlong)plVar9 + 0x1c) = *(int *)((longlong)plVar9 + 0x1c) + 1;
          *(float *)(plVar9 + 3) = fVar11 + *(float *)(plVar9 + 3);
          return;
        }
      }
      plVar9 = plVar9 + 5;
    } while (plVar9 != plVar2);
    iVar7 = *(int *)(param_1 + 0x270);
  }
  *(int *)(param_1 + 0x270) = iVar7 + 1;
  if (*(int *)(param_1 + 0x274) < iVar7 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar1,iVar7);
  }
  lVar6 = (longlong)iVar7;
  lVar5 = *plVar1;
  plVar1 = (longlong *)(lVar5 + lVar6 * 0x28);
  *plVar1 = local_68;
  plVar1[1] = lStack_60;
  plVar1 = (longlong *)(lVar5 + 0x10 + lVar6 * 0x28);
  *plVar1 = lVar4;
  plVar1[1] = CONCAT44(1,fVar11);
  *(ulonglong *)(lVar5 + 0x20 + lVar6 * 0x28) =
       CONCAT62(uStack_46,CONCAT11(bVar10,bVar3)) & 0xffffffffffffff01;
  return;
}



// FUNCTION 140e2a6e0 FUN_140e2a6e0 body=185 status=ok
// SIG undefined FUN_140e2a6e0(void)

void FUN_140e2a6e0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if ((*(longlong *)(param_1 + 0x10e0) != 0) && (param_2 != 0)) {
    plVar4 = (longlong *)0x0;
    plVar5 = plVar4;
    if (*(longlong *)(param_2 + 0x2b0) != 0) {
      plVar5 = *(longlong **)(*(longlong *)(param_2 + 0x2b0) + 0x118);
    }
    if (plVar5 != (longlong *)0x0) {
      uVar2 = UCircularThrobber::GetPrivateStaticClass();
      lVar3 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar2);
      if ((lVar3 != 0) && (cVar1 = FUN_142dee910(lVar3,param_1), cVar1 != '\0')) {
        FUN_1414008e0(param_1);
      }
    }
    if (*(longlong *)(param_1 + 0x2c70) != 0) {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x2c70) + 0xc98);
    }
    if (plVar4 != (longlong *)0x0) {
      FUN_140e2a7a0(plVar4,param_2);
    }
  }
  return;
}



// FUNCTION 140e2a7a0 FUN_140e2a7a0 body=1701 status=ok
// SIG undefined FUN_140e2a7a0(void)

void FUN_140e2a7a0(longlong param_1,longlong param_2)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  char cVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong *plVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  byte local_res18;
  char local_b8;
  longlong local_b0;
  longlong local_a0;
  float fStack_94;
  float fStack_84;
  
  if (param_2 == 0) {
    return;
  }
  lVar12 = FUN_140a96040(*(undefined8 *)(param_2 + 0x38));
  if (lVar12 == 0) {
LAB_140e2a82a:
    lVar13 = *(longlong *)(param_2 + 0x38);
    lVar18 = 0;
    lVar12 = lVar18;
    if (lVar13 == 0) goto LAB_140e2a86e;
    lVar12 = FUN_1413ac760();
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
         ) != lVar12 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    lVar12 = 0;
    if (!bVar6) goto LAB_140e2a86e;
  }
  else {
    lVar13 = FUN_14149b100();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8
         ) != lVar13 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140e2a82a;
LAB_140e2a86e:
    lVar13 = 0;
    lVar18 = lVar12;
  }
  lVar15 = 0;
  lVar12 = *(longlong *)(param_2 + 0x28);
  if (lVar12 == 0) {
LAB_140e2a8b0:
    lVar12 = lVar15;
  }
  else {
    lVar14 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8
         ) != lVar14 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140e2a8b0;
  }
  iVar5 = *(int *)(param_2 + 0x328);
  bVar2 = *(byte *)(param_2 + 0x214);
  if (lVar18 == 0) {
    local_a0 = 0;
    local_b0 = 0;
LAB_140e2a8f9:
    if (lVar13 != 0) {
      lVar14 = FUN_140b2a6f0(lVar13);
      if ((lVar14 == 0) || (lVar14 = SThrobber::GetPieceBrush(lVar14), lVar14 == 0)) {
        local_b0 = 0;
      }
      else {
        local_b0 = *(longlong *)(lVar14 + 0x218);
      }
    }
  }
  else {
    local_a0 = *(longlong *)(lVar18 + 0x480);
    local_b0 = FUN_14126f7e0(lVar18);
    if (local_b0 == 0) goto LAB_140e2a8f9;
  }
  if (lVar18 == 0) {
    cVar10 = '\0';
  }
  else {
    cVar10 = FUN_14307ede0(lVar18);
  }
  fVar23 = 0.0;
  if (lVar12 == 0) {
    fVar21 = 0.0;
    local_res18 = 0;
  }
  else {
    lVar14 = lVar15;
    if (*(longlong *)(param_2 + 0x2b0) != 0) {
      lVar14 = *(longlong *)(*(longlong *)(param_2 + 0x2b0) + 0x118);
    }
    fVar21 = (float)FUN_142230c20(lVar12,lVar14);
    local_res18 = *(byte *)(lVar12 + 0x56c) & 1;
  }
  bVar3 = *(byte *)(param_2 + 0x214);
  bVar6 = false;
  if (lVar12 == 0) {
    local_b8 = '\0';
  }
  else {
    lVar14 = *(longlong *)(lVar12 + 0xe68);
    if (lVar14 != 0) {
      bVar6 = *(float *)(lVar14 + 0x278) - 10.0 <=
              SQRT(*(float *)(lVar14 + 0x18c) * *(float *)(lVar14 + 0x18c) +
                   *(float *)(lVar14 + 400) * *(float *)(lVar14 + 400) +
                   *(float *)(lVar14 + 0x194) * *(float *)(lVar14 + 0x194));
    }
    local_b8 = FUN_140c48c60(lVar12);
  }
  bVar9 = true;
  if (*(char *)(param_2 + 0x2f0) == '\x01' || *(char *)(param_2 + 0x2f0) == '\x02') {
    if (ABS((float)*(undefined8 *)(param_2 + 0x110) - (float)*(undefined8 *)(param_2 + 0x2f8)) <=
        10.0) {
      fStack_94 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x110) >> 0x20);
      fStack_84 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x2f8) >> 0x20);
      if ((ABS(fStack_94 - fStack_84) <= 10.0) &&
         (ABS(*(float *)(param_2 + 0x118) - *(float *)(param_2 + 0x300)) <= 10.0))
      goto LAB_140e2aaa3;
    }
    bVar9 = false;
  }
LAB_140e2aaa3:
  bVar4 = *(byte *)(param_2 + 0x214);
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    lVar15 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x30);
  }
  plVar20 = *(longlong **)(param_2 + 600);
  bVar7 = false;
  plVar17 = plVar20 + (longlong)*(int *)(param_2 + 0x260) * 2;
  while( true ) {
    if (plVar20 == plVar17) goto LAB_140e2ab02;
    if (*plVar20 == lVar15) break;
    plVar20 = plVar20 + 2;
  }
  fVar1 = *(float *)(plVar20 + 1);
  lVar12 = *(longlong *)(param_2 + 0x2b0);
  if (lVar12 == 0) goto LAB_140e2ab02;
  plVar20 = *(longlong **)(lVar12 + 0x678);
  plVar17 = plVar20 + (longlong)*(int *)(lVar12 + 0x680) * 0xf;
  if (plVar20 == plVar17) goto LAB_140e2ab02;
  plVar19 = plVar20 + 0xc;
  do {
    if ((*plVar20 == lVar15) && (cVar11 = FUN_142d52a00(plVar19), cVar11 != '\0')) {
      bVar7 = true;
      uVar16 = FUN_142d52a20(plVar19);
      uVar16 = FArchive::operator<<(uVar16);
      fVar22 = (float)FUN_142d61c60(uVar16);
      fVar23 = fVar23 + fVar22;
    }
    plVar20 = plVar20 + 0xf;
    plVar19 = plVar19 + 0xf;
  } while (plVar20 != plVar17);
  if ((!bVar7) || (fVar1 < fVar23)) {
LAB_140e2ab02:
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  plVar17 = *(longlong **)(param_1 + 0x278);
  plVar20 = plVar17 + *(int *)(param_1 + 0x280);
  do {
    if (plVar17 == plVar20) {
      return;
    }
    if ((*plVar17 != 0) && (lVar12 = FUN_142dcdc10(param_1), lVar12 != 0)) {
      lVar15 = FUN_1414329c0();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (((((bVar8) && ((*(char *)(lVar12 + 0x28c) == '\0' || (lVar18 != 0)))) &&
           ((*(char *)(lVar12 + 0x28d) == '\0' || (lVar13 != 0)))) &&
          (((((*(longlong *)(lVar12 + 0x260) == 0 || (*(longlong *)(lVar12 + 0x260) == local_a0)) &&
             ((*(longlong *)(lVar12 + 0x268) == 0 || (*(longlong *)(lVar12 + 0x268) == local_b0))))
            && ((*(char *)(lVar12 + 0x270) == '\0' || (iVar5 == 2)))) &&
           ((*(char *)(lVar12 + 0x271) == '\0' || ((bVar2 & 1) != 0)))))) &&
         ((((((((*(char *)(lVar12 + 0x272) == '\0' || (cVar10 != '\0')) &&
               ((*(char *)(lVar12 + 0x273) == '\0' || (cVar10 == '\0')))) &&
              (((*(char *)(lVar12 + 0x274) == '\0' ||
                (fVar21 < *(float *)(lVar12 + 0x278) || fVar21 == *(float *)(lVar12 + 0x278))) &&
               ((*(char *)(lVar12 + 0x27c) == '\0' || (*(float *)(lVar12 + 0x280) <= fVar21)))))) &&
             (((*(char *)(lVar12 + 0x284) == '\0' || (local_res18 != 0)) &&
              ((*(char *)(lVar12 + 0x285) == '\0' || ((bVar3 & 4) == 0)))))) &&
            ((*(char *)(lVar12 + 0x286) == '\0' || (bVar6)))) &&
           ((*(char *)(lVar12 + 0x287) == '\0' || (local_b8 != '\0')))) &&
          (((((*(char *)(lVar12 + 0x288) == '\0' || (bVar9)) &&
             ((*(char *)(lVar12 + 0x289) == '\0' || (!bVar9)))) &&
            ((*(char *)(lVar12 + 0x28a) == '\0' || ((bVar4 & 8) != 0)))) &&
           ((*(char *)(lVar12 + 0x28b) == '\0' || (bVar7)))))))) {
        if (*(longlong *)(lVar12 + 0x290) != 0) {
          lVar14 = UXPrimaryDataAsset::GetPrivateStaticClass();
          for (lVar15 = *(longlong *)(lVar12 + 0x290); lVar15 != 0;
              lVar15 = *(longlong *)(lVar15 + 0x30)) {
            if (lVar15 == lVar14) {
              if ((*(longlong *)(lVar12 + 0x290) != 0) &&
                 ((lVar13 == 0 || (cVar11 = FUN_140b2eca0(lVar13), cVar11 == '\0'))))
              goto LAB_140e2adf1;
              break;
            }
          }
        }
        FUN_142dd1560(param_1,lVar12);
      }
    }
LAB_140e2adf1:
    plVar17 = plVar17 + 1;
  } while( true );
}



// FUNCTION 140e2ae50 FUN_140e2ae50 body=208 status=ok
// SIG undefined FUN_140e2ae50(void)

void FUN_140e2ae50(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10;
  
  local_res10 = param_2;
  lVar2 = FUN_142dcdc10();
  if (lVar2 != 0) {
    lVar3 = FUN_141410430();
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
      param_1 = param_1 + 600;
      goto LAB_140e2af06;
    }
  }
  lVar2 = FUN_142dcdc10(param_1,param_2);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = FUN_1414329c0();
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
    return;
  }
  param_1 = param_1 + 0x278;
LAB_140e2af06:
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1,&local_res10);
  return;
}



// FUNCTION 140e2af20 FUN_140e2af20 body=242 status=ok
// SIG undefined FUN_140e2af20(void)

void FUN_140e2af20(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  lVar3 = FUN_142dcdc10();
  if (lVar3 != 0) {
    lVar4 = FUN_141410430();
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
      iVar6 = 0;
      iVar2 = *(int *)(param_1 + 0x260);
      if (0 < iVar2) {
        lVar3 = 0;
        do {
          lVar4 = *(longlong *)(param_1 + 600);
          if (*(longlong *)(lVar3 + lVar4) == param_2) {
            iVar5 = (iVar2 - iVar6) + -1;
            if (0 < iVar5) {
              iVar5 = 1;
            }
            if (iVar5 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar4 + (longlong)iVar6 * 8),
                         (void *)(lVar4 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
              iVar2 = *(int *)(param_1 + 0x260);
            }
            *(int *)(param_1 + 0x260) = iVar2 + -1;
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 600));
            iVar6 = iVar6 + -1;
            lVar3 = lVar3 + -8;
          }
          iVar2 = *(int *)(param_1 + 0x260);
          iVar6 = iVar6 + 1;
          lVar3 = lVar3 + 8;
        } while (iVar6 < iVar2);
      }
    }
  }
  return;
}



// FUNCTION 140e2b020 FUN_140e2b020 body=59 status=ok
// SIG undefined FUN_140e2b020(void)

void FUN_140e2b020(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = UUGHUDGearBarUW::GetPrivateStaticClass();
  FUN_140c328a0(param_1,param_1,uVar1,0);
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 140e2b060 FUN_140e2b060 body=75 status=ok
// SIG undefined FUN_140e2b060(void)

void FUN_140e2b060(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = UUGHUDGearBarUW::GetPrivateStaticClass();
  FUN_140c328a0(param_1,param_1,uVar1,1);
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 140e2b0b0 FUN_140e2b0b0 body=17 status=ok
// SIG undefined FUN_140e2b0b0(void)

void FUN_140e2b0b0(longlong param_1)

{
  if (*(char *)(param_1 + 0x408) != '\x01') {
    *(undefined1 *)(param_1 + 0x408) = 1;
  }
  return;
}



// FUNCTION 140e2b0d0 FUN_140e2b0d0 body=157 status=ok
// SIG undefined FUN_140e2b0d0(void)

void FUN_140e2b0d0(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  FUN_140c4cbd0();
  if (*(char *)(param_1 + 0x128) != '\x03') {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x908);
  if (lVar2 == 0) {
    return;
  }
  if (param_2 == '\0') {
    lVar4 = FUN_1422312c0(param_1);
    if (lVar4 == 0) {
      return;
    }
    lVar5 = FUN_14141f270();
    iVar1 = *(int *)(lVar5 + 0x90);
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < iVar1) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)iVar1 * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      return;
    }
    if (*(char *)(lVar4 + 0xb98) == '\0') {
      return;
    }
    uVar6 = CONCAT71((int7)(int3)((uint)iVar1 >> 8),1);
  }
  else {
    uVar6 = 0;
  }
  FUN_142df2730(lVar2,uVar6);
  return;
}



// FUNCTION 140e2b170 FUN_140e2b170 body=150 status=ok
// SIG undefined FUN_140e2b170(void)

void FUN_140e2b170(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 local_res8;
  
  if (*(longlong *)(param_1 + 0x2cb8) != 0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop
                       (L"&AOakCharacter_Player::OnCinematicStopped_RetryTeleportEffects",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(param_1 + 0x2cb8) + 0x398,param_1,local_res8);
    *(undefined8 *)(param_1 + 0x2cb8) = 0;
  }
  FUN_141400aa0(param_1);
  return;
}



// FUNCTION 140e2b210 FUN_140e2b210 body=725 status=ok
// SIG undefined FUN_140e2b210(void)

void FUN_140e2b210(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  
  lVar3 = *(longlong *)(param_1 + 0xb0);
  if (lVar3 != 0) {
    local_30 = *(longlong **)(param_1 + 0xb8);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    local_38 = lVar3;
    lVar3 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar3 + 0x18),&local_48,&local_38);
    plVar8 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_30)(local_30);
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
    if (local_48 != 0) {
      TBaseMulticastDelegate<void>::Remove(local_48 + 0x120,*(undefined8 *)(param_1 + 0xd0));
      TBaseMulticastDelegate<void>::Remove(local_48 + 0x108,*(undefined8 *)(param_1 + 0x78));
      lVar2 = local_48;
      iVar6 = 0;
      lVar3 = *(longlong *)(param_1 + 0xc0);
      if (0 < *(int *)(local_48 + 0x140)) {
        lVar7 = 0;
        do {
          plVar8 = (longlong *)(*(longlong *)(lVar2 + 0x138) + lVar7);
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
          iVar6 = iVar6 + 1;
          lVar7 = lVar7 + 0x10;
        } while (iVar6 < *(int *)(lVar2 + 0x140));
      }
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar2 + 0x138,0);
      lVar2 = local_48;
      iVar6 = 0;
      lVar3 = *(longlong *)(param_1 + 200);
      if (0 < *(int *)(local_48 + 0x158)) {
        lVar7 = 0;
        do {
          plVar8 = (longlong *)(*(longlong *)(lVar2 + 0x150) + lVar7);
          if ((((int)plVar8[1] != 0) && (plVar4 = (longlong *)*plVar8, plVar4 != (longlong *)0x0))
             && (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res10),
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
          iVar6 = iVar6 + 1;
          lVar7 = lVar7 + 0x10;
        } while (iVar6 < *(int *)(lVar2 + 0x158));
      }
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar2 + 0x150,0);
      FUN_142b6fa90(local_48);
      if ((*(int *)(local_48 + 0x90) != 0) &&
         (plVar8 = *(longlong **)(local_48 + 0x88), plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        if (*(longlong *)(local_48 + 0x88) != 0) {
          uVar5 = FMemory::Realloc(*(longlong *)(local_48 + 0x88),0,0);
          *(undefined8 *)(local_48 + 0x88) = uVar5;
        }
        *(undefined4 *)(local_48 + 0x90) = 0;
      }
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_40 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  FUN_140804c50(param_1);
  return;
}



// FUNCTION 140e2b4f0 FUN_140e2b4f0 body=332 status=ok
// SIG undefined FUN_140e2b4f0(void)

void FUN_140e2b4f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  lVar5 = *(longlong *)(param_1 + 0x38);
  if (lVar5 != 0) {
    local_10 = *(longlong **)(param_1 + 0x40);
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10 + 1) = (int)local_10[1] + 1;
      UNLOCK();
    }
    local_18 = lVar5;
    lVar5 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar5 + 0x18),&local_28,&local_18);
    plVar4 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_10)(local_10);
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
    if (local_28 != 0) {
      TBaseMulticastDelegate<void>::Remove(local_28 + 0xd8,*(undefined8 *)(param_1 + 0x50));
      TBaseMulticastDelegate<void>::Remove(local_28 + 0x1b0,*(undefined8 *)(param_1 + 0x58));
      if ((*(int *)(local_28 + 0x90) != 0) &&
         (plVar4 = *(longlong **)(local_28 + 0x88), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        if (*(longlong *)(local_28 + 0x88) != 0) {
          uVar6 = FMemory::Realloc(*(longlong *)(local_28 + 0x88),0,0);
          *(undefined8 *)(local_28 + 0x88) = uVar6;
        }
        *(undefined4 *)(local_28 + 0x90) = 0;
      }
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_20 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  FUN_140804c50(param_1);
  return;
}



// FUNCTION 140e2b640 FUN_140e2b640 body=623 status=ok
// SIG undefined FUN_140e2b640(void)

void FUN_140e2b640(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  void *_Src;
  longlong lVar4;
  void **ppvVar5;
  int iVar6;
  longlong local_c0 [2];
  void *local_b0;
  undefined8 local_a8;
  longlong local_a0 [5];
  longlong local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [24];
  
  if (param_2 == '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146870258) &&
       (_Init_thread_header(&DAT_146870258), DAT_146870258 == -1)) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146870240,L"Operation cancelled by user.",L"Overlay",
                 L"OperationCancelledByUser");
      atexit(FUN_143e55c40);
      _Init_thread_footer(&DAT_146870258);
    }
    local_c0[0] = 0;
    local_c0[1] = 0;
    local_b0 = (void *)0x0;
    local_a8 = 0;
    local_a0[0] = 0;
    local_a0[1] = 0;
    local_a0[2] = 0;
    local_a0[3] = 0;
    ppvVar5 = (void **)FText::ToString(&DAT_146870240);
    if (&local_b0 != ppvVar5) {
      iVar6 = *(int *)(ppvVar5 + 1);
      _Src = *ppvVar5;
      local_a8 = CONCAT44(local_a8._4_4_,iVar6);
      if (iVar6 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b0,iVar6,0);
        _guard_xfg_dispatch_icall_nop(local_b0,_Src,(longlong)iVar6 * 2);
      }
    }
    local_68[0] = 0;
    FString::FString(local_60,local_c0);
    FString::FString(local_50,&local_b0);
    FString::FString(local_40,local_a0);
    FString::FString(local_30,local_a0 + 2);
    FUN_140e38c40(param_1,local_68);
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (local_a0[2] != 0) {
      FMemory::Free();
    }
    if (local_a0[0] != 0) {
      FMemory::Free();
    }
    if (local_b0 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_c0[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    FUN_140e25960(param_1,&local_78);
    if (local_78 != 0) {
      puVar3 = (undefined8 *)(param_1 + 0xf0);
      FUN_142b6e600(local_78,param_1 + 0xe0,puVar3,param_1 + 0x100);
      if ((undefined *)*puVar3 != &DAT_144576a7c) {
        iVar6 = 0;
        *(undefined4 *)(param_1 + 0xf8) = 0;
        if (*(int *)(param_1 + 0xfc) != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar3,0);
          iVar6 = *(int *)(param_1 + 0xf8);
        }
        *(int *)(param_1 + 0xf8) = iVar6;
        if (*(int *)(param_1 + 0xfc) < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar3,iVar6);
        }
      }
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140e2b8b0 FUN_140e2b8b0 body=109 status=ok
// SIG undefined FUN_140e2b8b0(void)

void FUN_140e2b8b0(longlong param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if ((*(longlong *)(param_1 + 0x608) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x608) + 0x718) != 0)) {
    FUN_140e30390(param_1,1,0);
  }
  if (((*(char *)(param_1 + 0x678) == '\0') && (*(longlong *)(param_1 + 0x610) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x610) + 0x718) != 0)) {
    FUN_140e30390(param_1,0,*(undefined4 *)(param_1 + 0x67c));
    return;
  }
  return;
}



// FUNCTION 140e2b920 FUN_140e2b920 body=47 status=ok
// SIG undefined FUN_140e2b920(void)

void FUN_140e2b920(longlong param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*(longlong **)(param_1 + 0x2d8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140e2b942. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x700))();
    return;
  }
  return;
}



// FUNCTION 140e2b950 FUN_140e2b950 body=241 status=ok
// SIG undefined FUN_140e2b950(void)

void FUN_140e2b950(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) && (param_2 != 0)) {
    lVar2 = UCircularThrobber::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (*(longlong *)(param_2 + 0x180) != 0) {
        *(longlong *)(param_1 + 0xa00) = *(longlong *)(param_2 + 0x180);
      }
      if (*(longlong *)(param_2 + 0x188) != 0) {
        *(longlong *)(param_1 + 0xa08) = *(longlong *)(param_2 + 0x188);
      }
      if (*(longlong *)(param_2 + 400) != 0) {
        *(longlong *)(param_1 + 0xa10) = *(longlong *)(param_2 + 400);
      }
      if (*(longlong *)(param_2 + 0x1a0) != 0) {
        *(longlong *)(param_1 + 0xa30) = *(longlong *)(param_2 + 0x1a0);
      }
      if (*(longlong *)(param_2 + 0x198) != 0) {
        *(longlong *)(param_1 + 0xa18) = *(longlong *)(param_2 + 0x198);
      }
      if (*(longlong *)(param_2 + 0x1a8) != 0) {
        *(longlong *)(param_1 + 0xa38) = *(longlong *)(param_2 + 0x1a8);
      }
      if (*(longlong *)(param_2 + 0x1b0) != 0) {
        *(longlong *)(param_1 + 0xa40) = *(longlong *)(param_2 + 0x1b0);
      }
    }
  }
  return;
}



// FUNCTION 140e2ba50 FUN_140e2ba50 body=241 status=ok
// SIG undefined FUN_140e2ba50(void)

void FUN_140e2ba50(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) && (param_2 != 0)) {
    lVar3 = UCircularThrobber::GetPrivateStaticClass();
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
      plVar1 = *(longlong **)(param_1 + 0x10);
      lVar3 = plVar1[0x1f];
      if (lVar3 == 0) {
        (**(code **)(*plVar1 + 0x368))(plVar1);
        lVar3 = plVar1[0x1f];
      }
      *(undefined8 *)(param_1 + 0xa00) = *(undefined8 *)(lVar3 + 0xa00);
      *(undefined8 *)(param_1 + 0xa08) = *(undefined8 *)(lVar3 + 0xa08);
      *(undefined8 *)(param_1 + 0xa10) = *(undefined8 *)(lVar3 + 0xa10);
      *(undefined8 *)(param_1 + 0xa30) = *(undefined8 *)(lVar3 + 0xa30);
      *(undefined8 *)(param_1 + 0xa18) = *(undefined8 *)(lVar3 + 0xa18);
      *(undefined8 *)(param_1 + 0xa38) = *(undefined8 *)(lVar3 + 0xa38);
      *(undefined8 *)(param_1 + 0xa40) = *(undefined8 *)(lVar3 + 0xa40);
    }
  }
  return;
}



// FUNCTION 140e2bb60 FUN_140e2bb60 body=68 status=ok
// SIG undefined FUN_140e2bb60(void)

void FUN_140e2bb60(longlong param_1,longlong param_2)

{
  longlong local_res8;
  
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x2348,0);
  if (param_2 != 0) {
    local_res8 = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x2368,&local_res8);
  }
  return;
}



// FUNCTION 140e2bbb0 FUN_140e2bbb0 body=35 status=ok
// SIG undefined FUN_140e2bbb0(void)

void FUN_140e2bbb0(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  undefined1 local_res10;
  undefined1 local_res11;
  
  local_res10 = param_2;
  local_res11 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x23d8,&local_res10);
  return;
}



// FUNCTION 140e2bbf0 FUN_140e2bbf0 body=14 status=ok
// SIG undefined FUN_140e2bbf0(void)

void FUN_140e2bbf0(longlong param_1)

{
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x23f8,0);
  return;
}


