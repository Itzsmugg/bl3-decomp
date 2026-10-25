// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1419c5e00 FUN_1419c5e00 body=43 status=ok
// SIG undefined FUN_1419c5e00(void)

undefined8 * FUN_1419c5e00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9a360;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1419c5e30 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FCullObjectsForVolumeCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1419c5c60();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 1419c5e70 FUN_1419c5e70 body=134 status=ok
// SIG undefined FUN_1419c5e70(void)

undefined8 * FUN_1419c5e70(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[2];
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
  *param_1 = &PTR_FUN_144024f50;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1419c5f00 FUN_1419c5f00 body=73 status=ok
// SIG undefined FUN_1419c5f00(void)

longlong FUN_1419c5f00(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  FUN_1419c5c60(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 1419c5f50 `scalar_deleting_destructor' body=106 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FSocketBSD::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d831c0;
  if (param_1[4] != -1) {
    Ordinal_3();
    param_1[4] = 0xffffffffffffffff;
  }
  *param_1 = &PTR_FUN_143f9d520;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1419c5fc0 FUN_1419c5fc0 body=52 status=ok
// SIG undefined FUN_1419c5fc0(void)

undefined8 FUN_1419c5fc0(undefined8 param_1,ulonglong param_2)

{
  FUN_1419c5d00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 1419c6000 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FRedoutOnlineSessionSettings::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d83440;
  FUN_1419c5d00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 1419c6070 FUN_1419c6070 body=97 status=ok
// SIG undefined FUN_1419c6070(void)

undefined8 FUN_1419c6070(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0x10;
  lVar1 = Ordinal_1(*(undefined8 *)(param_1 + 0x20),param_2 + 8,local_res8);
  if (lVar1 != -1) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 200))
                      (*(longlong **)(param_1 + 0x30),lVar1,*(undefined4 *)(param_1 + 8),param_3);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1419c60e0 FUN_1419c60e0 body=84 status=ok
// SIG undefined FUN_1419c60e0(void)

undefined8 FUN_1419c60e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = Ordinal_1(*(undefined8 *)(param_1 + 0x20),0,0);
  if (lVar1 != -1) {
                    /* WARNING: Could not recover jumptable at 0x0001419c6120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 200))
                      (*(longlong **)(param_1 + 0x30),lVar1,*(undefined4 *)(param_1 + 8),param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1419c6140 FUN_1419c6140 body=299 status=ok
// SIG undefined FUN_1419c6140(void)

void FUN_1419c6140(longlong param_1,char *param_2,longlong param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  BOOL BVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  longlong local_38;
  ulonglong local_30;
  longlong *local_28;
  longlong local_20;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
  BVar5 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar5 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  local_38 = 0;
  local_30 = 0;
  lVar7 = -1;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    do {
      lVar7 = lVar7 + 1;
    } while (param_2[lVar7] != '\0');
    uVar6 = (int)lVar7 + 1;
    local_30 = (ulonglong)uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Convert<char,wchar_t>(local_38,uVar6,param_2,uVar6,0x3f);
  }
  local_28 = &local_38;
  local_20 = param_3;
  FUN_1419c5940(param_1 + 0x40,local_res8,&local_28,0);
  if (local_38 != 0) {
    FMemory::Free();
  }
  LeaveCriticalSection(lpCriticalSection);
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
  return;
}



// FUNCTION 1419c6270 Bind body=34 status=ok
// SIG undefined Bind(void)

bool FSocketBSD::Bind(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = Ordinal_2(*(undefined8 *)(param_1 + 0x20),param_2 + 8,0x10);
  return iVar1 == 0;
}



// FUNCTION 1419c62a0 FUN_1419c62a0 body=163 status=ok
// SIG undefined FUN_1419c62a0(void)

undefined8
FUN_1419c62a0(undefined8 param_1,longlong *param_2,longlong *param_3,int param_4,int param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < param_4) {
    do {
      cVar2 = (**(code **)(*param_2 + 0x10))(param_2,param_3);
      if (cVar2 == '\x01') {
        iVar5 = (**(code **)(*param_3 + 0x38))(param_3);
        if (iVar5 == 0) {
          uVar4 = (**(code **)(*param_2 + 0xe0))(param_2);
          return uVar4;
        }
        uVar4 = (**(code **)(*param_3 + 0x38))(param_3);
        return uVar4;
      }
      iVar3 = (**(code **)(*param_3 + 0x38))();
      if (iVar3 == 0) {
        return 0;
      }
      lVar1 = *param_3;
      iVar3 = (**(code **)(lVar1 + 0x38))(param_3);
      (**(code **)(lVar1 + 0x30))(param_3,param_5 + iVar3);
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_4);
  }
  return 0;
}



// FUNCTION 1419c6350 Close body=52 status=ok
// SIG undefined Close(void)

bool FSocketBSD::Close(longlong param_1)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x20) != -1) {
    iVar1 = Ordinal_3();
    *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
    return iVar1 == 0;
  }
  return false;
}



// FUNCTION 1419c6390 FUN_1419c6390 body=73 status=ok
// SIG undefined FUN_1419c6390(void)

undefined8 FUN_1419c6390(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = Ordinal_4(*(undefined8 *)(param_1 + 0x20),param_2 + 8,0x10);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x90))
                    (*(longlong **)(param_1 + 0x30),uVar1);
  if (iVar2 != 0) {
    if (1 < iVar2 - 7U) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1419c63e0 FUN_1419c63e0 body=190 status=ok
// SIG undefined FUN_1419c63e0(void)

undefined8 *
FUN_1419c63e0(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_144d832b0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined2 *)(puVar1 + 1) = 2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar1;
  }
  *param_2 = puVar1;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar1,puVar1);
  (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,param_3);
  (**(code **)(*(longlong *)*param_2 + 0x30))((longlong *)*param_2,param_4);
  return param_2;
}



// FUNCTION 1419c64a0 FUN_1419c64a0 body=35 status=ok
// SIG undefined FUN_1419c64a0(void)

void FUN_1419c64a0(longlong *param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = 0x119;
  (**(code **)(*param_1 + 0x18))(param_1,local_res8,param_2,0);
  return;
}



// FUNCTION 1419c64d0 FUN_1419c64d0 body=452 status=ok
// SIG undefined FUN_1419c64d0(void)

undefined8 * FUN_1419c64d0(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined4 local_res10 [2];
  undefined8 local_res18 [2];
  undefined8 local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    plVar3 = (longlong *)*param_2;
    *puVar6 = &PTR_FUN_144d83138;
    puVar6[1] = 0;
    puVar6[2] = 0;
    (**(code **)(*plVar3 + 0x28))(plVar3,local_res10);
    local_res18[0] = 0;
    plVar7 = (longlong *)FUN_1419c6b80(local_res18);
    lVar4 = *plVar7;
    uVar5 = (**(code **)(*plVar3 + 0x38))(plVar3);
    puVar8 = (undefined8 *)(**(code **)(lVar4 + 0x70))(plVar7,local_48,local_res10[0],uVar5);
    local_50 = (longlong *)puVar8[1];
    local_58 = *puVar8;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    if (puVar6 + 1 != &local_58) {
      puVar6[1] = local_58;
      local_58 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(puVar6 + 2,&local_50);
    }
    plVar3 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_50 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
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
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
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
  return puVar6;
}



// FUNCTION 1419c66a0 FUN_1419c66a0 body=136 status=ok
// SIG undefined FUN_1419c66a0(void)

undefined8 FUN_1419c66a0(longlong *param_1,int *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*param_2 == 0x118) {
    lVar1 = Ordinal_23(2,2,0x11);
    if (lVar1 != -1) {
      uVar2 = 1;
LAB_1419c66fe:
                    /* WARNING: Could not recover jumptable at 0x0001419c6714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_1 + 200))(param_1,lVar1,uVar2,param_3);
      return uVar2;
    }
  }
  else if (*param_2 == 0x119) {
    lVar1 = Ordinal_23(2,1,6);
    if (lVar1 != -1) {
      uVar2 = 2;
      goto LAB_1419c66fe;
    }
  }
  return 0;
}



// FUNCTION 1419c6730 FUN_1419c6730 body=165 status=ok
// SIG undefined FUN_1419c6730(void)

longlong FUN_1419c6730(longlong *param_1,int *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*param_2 == 0x118) {
    lVar1 = Ordinal_23(2,2,0x11);
    if (lVar1 != -1) {
      uVar2 = 1;
LAB_1419c678e:
      lVar1 = (**(code **)(*param_1 + 200))(param_1,lVar1,uVar2,param_3);
      if (lVar1 != 0) {
        SetHandleInformation(*(HANDLE *)(lVar1 + 0x20),1,0);
      }
      return lVar1;
    }
  }
  else if (*param_2 == 0x119) {
    lVar1 = Ordinal_23(2,1,6);
    if (lVar1 != -1) {
      uVar2 = 2;
      goto LAB_1419c678e;
    }
  }
  return 0;
}



// FUNCTION 1419c6800 FUN_1419c6800 body=50 status=ok
// SIG undefined FUN_1419c6800(void)

void FUN_1419c6800(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  UNLOCK();
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001419c6828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1419c6840 FUN_1419c6840 body=409 status=ok
// SIG undefined FUN_1419c6840(void)

void FUN_1419c6840(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  int iVar10;
  undefined8 local_res8;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  iVar10 = 0;
  local_res8 = 0;
  plVar7 = (longlong *)FUN_1419c6b80(&local_res8);
  puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x70))(plVar7,local_28,0,0);
  local_40 = (longlong *)puVar8[1];
  local_48 = *puVar8;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  puVar8 = (undefined8 *)(param_1 + 8);
  if (puVar8 != &local_48) {
    *puVar8 = local_48;
    local_48 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,&local_40);
  }
  plVar3 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
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
  do {
    uVar9 = (**(code **)(*plVar7 + 0x40))(plVar7,param_1 + 0x18,*puVar8);
    uVar6 = (uint)uVar9;
    *(uint *)(param_1 + 0x118) = uVar6;
    if ((uVar6 < 0x34) && ((0x9000100000000U >> (uVar9 & 0x3f) & 1) != 0)) {
      iVar10 = 3;
    }
    iVar10 = iVar10 + 1;
  } while (((uVar6 != 0) && (iVar10 < 3)) && (*(int *)(param_1 + 0x11c) == 0));
  if (*(int *)(param_1 + 0x118) == 0) {
    local_38 = *puVar8;
    local_30 = *(longlong *)(param_1 + 0x10);
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    FUN_1419c6140(plVar7,param_1 + 0x18,&local_38);
  }
  return;
}



// FUNCTION 1419c69e0 FUN_1419c69e0 body=405 status=ok
// SIG undefined FUN_1419c69e0(void)

void FUN_1419c69e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  iVar9 = 0;
  puVar7 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x128) + 0x70))
                     (*(longlong **)(param_1 + 0x128),local_18,0,0);
  local_30 = (longlong *)puVar7[1];
  local_38 = *puVar7;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  puVar7 = (undefined8 *)(param_1 + 8);
  if (puVar7 != &local_38) {
    *puVar7 = local_38;
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,&local_30);
  }
  plVar3 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
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
  do {
    uVar8 = (**(code **)(**(longlong **)(param_1 + 0x128) + 0x50))
                      (*(longlong **)(param_1 + 0x128),param_1 + 0x130,*puVar7);
    uVar6 = (uint)uVar8;
    *(uint *)(param_1 + 0x118) = uVar6;
    if ((uVar6 < 0x34) && ((0x9000100000000U >> (uVar8 & 0x3f) & 1) != 0)) {
      iVar9 = 3;
    }
    iVar9 = iVar9 + 1;
  } while (((uVar6 != 0) && (iVar9 < 3)) && (*(int *)(param_1 + 0x11c) == 0));
  if (*(int *)(param_1 + 0x118) == 0) {
    local_28 = *puVar7;
    local_20 = *(longlong *)(param_1 + 0x10);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_1419c6140(*(undefined8 *)(param_1 + 0x128),param_1 + 0x18,&local_28);
  }
  return;
}



// FUNCTION 1419c6b80 FUN_1419c6b80 body=172 status=ok
// SIG undefined FUN_1419c6b80(void)

void FUN_1419c6b80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_res10 [24];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469f5978) {
    _Init_thread_header(&DAT_1469f5978);
    if (DAT_1469f5978 == -1) {
      puVar2 = (undefined8 *)FName::FName(local_res10,"Sockets",1);
      uVar1 = *puVar2;
      uVar3 = FUN_14168dc80();
      DAT_1469f5970 = (longlong *)FUN_141690010(uVar3,uVar1);
      atexit(FUN_143e83f70);
      _Init_thread_footer(&DAT_1469f5978);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001419c6bbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1469f5970 + 0x48))(DAT_1469f5970,*param_1);
  return;
}



// FUNCTION 1419c6c30 GetAddress body=36 status=ok
// SIG undefined GetAddress(void)

void FSocketBSD::GetAddress(longlong param_1,longlong param_2)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = 0x10;
  Ordinal_6(*(undefined8 *)(param_1 + 0x20),param_2 + 8,local_res8);
  return;
}



// FUNCTION 1419c6c60 FUN_1419c6c60 body=252 status=ok
// SIG undefined FUN_1419c6c60(void)

undefined8 FUN_1419c6c60(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (**(code **)(*param_1 + 0xe8))(param_1,2);
  if (iVar1 != 1) {
    return 2;
  }
  plVar3 = (longlong *)FDateTime::UtcNow(local_res8);
  if (*plVar3 - param_1[5] < 0x2faf081) {
    return 1;
  }
  puVar4 = (undefined8 *)FUN_14091e0e0(local_res8,0x3ff0000000000000);
  iVar1 = (**(code **)(*param_1 + 0xe8))(param_1,1,*puVar4);
  puVar4 = (undefined8 *)FUN_14091e0e0(local_res8,0x3ff0000000000000);
  iVar2 = (**(code **)(*param_1 + 0xe8))(param_1,0,*puVar4);
  if ((iVar1 == 0) || (iVar2 == 0)) {
    plVar3 = (longlong *)FDateTime::UtcNow(local_res8);
    param_1[5] = *plVar3;
    return 1;
  }
  if ((iVar1 == 1) && (iVar2 == 1)) {
    return 0;
  }
  return 2;
}



// FUNCTION 1419c6d70 FUN_1419c6d70 body=408 status=ok
// SIG undefined FUN_1419c6d70(void)

undefined4 FUN_1419c6d70(longlong param_1,undefined8 param_2,longlong *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong local_res8;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x90);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uVar3 = 0;
  local_38 = 0x200000000;
  local_res8 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  iVar2 = getaddrinfo(param_2,0,&local_38,&local_res8);
  if (iVar2 < 0x276e) {
    if (iVar2 == 0x276d) {
      uVar3 = 0x2f;
      goto LAB_1419c6ee7;
    }
    if (iVar2 == 0) {
      for (; local_res8 != 0; local_res8 = *(longlong *)(local_res8 + 0x28)) {
        if ((*(int *)(local_res8 + 4) == 2) && (*(longlong *)(local_res8 + 0x20) != 0)) {
          uVar4 = Ordinal_14(*(undefined4 *)(*(longlong *)(local_res8 + 0x20) + 4));
          (**(code **)(*param_3 + 0x10))(param_3,uVar4);
          freeaddrinfo(local_res8);
          goto LAB_1419c6ee7;
        }
      }
      freeaddrinfo();
      uVar3 = 0x30;
      goto LAB_1419c6ee7;
    }
    if (iVar2 == 8) {
      uVar3 = 0x1b;
      goto LAB_1419c6ee7;
    }
    if (iVar2 != 0x2726) {
      if (iVar2 == 0x273c) {
        uVar3 = 0x10;
        goto LAB_1419c6ee7;
      }
      if (iVar2 == 0x273f) {
        uVar3 = 0x13;
        goto LAB_1419c6ee7;
      }
    }
  }
  else {
    if (iVar2 == 0x277d) {
      uVar3 = 0x12;
      goto LAB_1419c6ee7;
    }
    if (iVar2 == 0x2af9) {
      uVar3 = 0x30;
      goto LAB_1419c6ee7;
    }
    if (iVar2 == 0x2afa) {
      uVar3 = 0x31;
      goto LAB_1419c6ee7;
    }
    if (iVar2 == 0x2afb) {
      uVar3 = 0x32;
      goto LAB_1419c6ee7;
    }
    if (iVar2 == 0x2afc) {
      uVar3 = 0x33;
      goto LAB_1419c6ee7;
    }
  }
  uVar3 = 5;
LAB_1419c6ee7:
  LeaveCriticalSection(lpCriticalSection);
  return uVar3;
}



// FUNCTION 1419c6f10 FUN_1419c6f10 body=236 status=ok
// SIG undefined FUN_1419c6f10(void)

undefined8 FUN_1419c6f10(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 local_28;
  longlong *plStack_20;
  undefined8 local_18;
  longlong *plStack_10;
  
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  cVar4 = FUN_1419c7000(param_1,param_2,&local_28);
  plVar7 = plStack_20;
  if (cVar4 == '\0') {
    lVar6 = operator_new(0x128);
    if (lVar6 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_1419c5bc0(lVar6,param_2);
    }
    FUN_1419c8be0(uVar5);
    plVar7 = plStack_20;
  }
  else {
    local_18 = local_28;
    plStack_10 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
      UNLOCK();
    }
    uVar5 = (**(code **)(*param_1 + 0x20))(param_1,&local_18);
  }
  plVar3 = plStack_20;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar7 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
    return uVar5;
  }
  return uVar5;
}



// FUNCTION 1419c7000 FUN_1419c7000 body=413 status=ok
// SIG undefined FUN_1419c7000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1419c7000(longlong param_1,char *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  BOOL BVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_a8 [32];
  undefined2 local_88;
  undefined8 local_78;
  longlong *plStack_70;
  int local_68 [2];
  undefined8 *local_60;
  ulonglong local_58;
  undefined8 local_50;
  longlong *plStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if (BVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  puVar11 = (undefined8 *)0x0;
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  lVar10 = -1;
  puVar12 = puVar11;
  if ((param_2 != (char *)0x0) && (puVar12 = (undefined8 *)0x0, *param_2 != '\0')) {
    do {
      lVar10 = lVar10 + 1;
    } while (param_2[lVar10] != '\0');
    uVar9 = (int)lVar10 + 1;
    local_58 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
    }
    puVar12 = local_60;
    local_88 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_60,uVar9,param_2,uVar9);
  }
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x40,local_68,&local_60);
  puVar7 = puVar11;
  if (local_68[0] != -1) {
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + (longlong)local_68[0] * 0x28);
  }
  puVar8 = puVar7 + 2;
  if (puVar7 == (undefined8 *)0x0) {
    puVar8 = puVar11;
  }
  if (puVar12 != (undefined8 *)0x0) {
    FMemory::Free(puVar12);
  }
  if (puVar8 != (undefined8 *)0x0) {
    plVar4 = (longlong *)puVar8[1];
    uVar5 = *puVar8;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_78 = uVar5;
    plStack_70 = plVar4;
    if (&local_78 != param_3) {
      local_78 = *param_3;
      plStack_70 = (longlong *)param_3[1];
      *param_3 = uVar5;
      param_3[1] = plVar4;
      local_50 = uVar5;
      plStack_48 = plVar4;
    }
    plVar4 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_70 + 8))(plStack_70,1);
        }
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return puVar8 != (undefined8 *)0x0;
}



// FUNCTION 1419c71a0 FUN_1419c71a0 body=138 status=ok
// SIG undefined FUN_1419c71a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1419c71a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001419c71f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))
                          (*(longlong **)(param_1 + 8),param_2,param_3);
        return uVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x0001419c7211. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(_DAT_00000000 + 0x38))(0,param_2,param_3);
      return uVar2;
    }
  }
  return 0x32;
}



// FUNCTION 1419c7230 FUN_1419c7230 body=1087 status=ok
// SIG undefined FUN_1419c7230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1419c7230(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  void *_Src;
  char cVar7;
  BOOL BVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  uint uVar12;
  longlong lVar13;
  void *pvVar14;
  longlong lVar15;
  undefined1 auStack_308 [32];
  undefined2 local_2e8;
  void *local_2d8;
  int local_2d0;
  int local_2cc;
  longlong local_2c8;
  ulonglong local_2c0;
  undefined8 local_2b8;
  longlong *plStack_2b0;
  longlong local_2a8 [11];
  void *local_250;
  undefined8 local_248;
  longlong local_240;
  undefined8 local_238;
  undefined1 local_228 [128];
  longlong local_1a8;
  undefined8 local_1a0;
  undefined1 local_188 [128];
  longlong local_108;
  char *local_100;
  undefined1 local_e8 [128];
  longlong local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469f5990) && (_Init_thread_header(&DAT_1469f5990), DAT_1469f5990 == -1))
  {
    atexit((_func_5014 *)&LAB_143e83f50);
    _Init_thread_footer(&DAT_1469f5990);
  }
  lVar15 = 0;
  if (DAT_1469f5988 < 2) {
    local_2a8[0] = 0;
    local_2a8[1] = 0;
    local_2a8[2] = 0;
    local_2a8[3] = 0;
    local_2a8[4] = 0;
    local_2a8[5] = 0;
    local_2a8[6] = 0;
    local_2a8[7] = 0;
    local_2a8[8] = 0;
    local_2a8[9] = 0;
    local_250 = (void *)0x0;
    local_248 = 0;
    local_240 = 0;
    local_238 = 0;
    FUN_14164fd40(local_2a8);
    _Src = local_250;
    lVar13 = (longlong)(int)local_248;
    local_2d8 = (void *)0x0;
    local_2d0 = (int)local_248;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_2d8,(4 - (uint)((int)local_248 != 0)) + (int)local_248,0);
    pvVar14 = local_2d8;
    _guard_xfg_dispatch_icall_nop(local_2d8,_Src,lVar13 * 2);
    iVar4 = local_2d0;
    lVar13 = (longlong)local_2d0;
    local_2d0 = (4 - (uint)(local_2d0 != 0)) + local_2d0;
    if (local_2cc < local_2d0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d8,iVar4);
      pvVar14 = local_2d8;
    }
    iVar5 = local_2d0;
    puVar3 = (undefined4 *)((longlong)pvVar14 + (lVar13 - (ulonglong)(iVar4 != 0)) * 2);
    *puVar3 = 0x2f003a;
    *(undefined2 *)(puVar3 + 1) = 0x2f;
    *(undefined2 *)((longlong)puVar3 + 6) = 0;
    if (DAT_1469f5980 != (void *)0x0) {
      FMemory::Free();
    }
    _DAT_1469f598c = local_2cc;
    DAT_1469f5980 = pvVar14;
    DAT_1469f5988 = iVar5;
    if (local_240 != 0) {
      FMemory::Free();
    }
    if (local_250 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_2a8[8] != 0) {
      FMemory::Free();
    }
    if (local_2a8[6] != 0) {
      FMemory::Free();
    }
    if (local_2a8[4] != 0) {
      FMemory::Free();
    }
    if (local_2a8[2] != 0) {
      FMemory::Free();
    }
    if (local_2a8[0] != 0) {
      FMemory::Free();
    }
  }
  cVar7 = FString::StartsWith(param_2,&DAT_1469f5980,1);
  if (cVar7 == '\0') {
    if (*(int *)(param_3 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*param_3;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_e8,puVar11);
    uVar9 = (**(code **)(*param_1 + 0x38))(param_1,local_60);
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  else {
    puVar11 = &DAT_143f3eda8;
    local_2b8 = 0;
    plStack_2b0 = (longlong *)0x0;
    if (*(int *)(param_2 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*param_2;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_228,puVar10);
    cVar7 = FUN_1419c7000(param_1,local_1a0,&local_2b8);
    if (local_1a8 != 0) {
      FMemory::Free();
    }
    if (cVar7 != '\0') {
      if (*(int *)(param_2 + 1) != 0) {
        puVar11 = (undefined2 *)*param_2;
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_188,puVar11);
      BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      if (BVar8 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      }
      local_2c8 = 0;
      local_2c0 = 0;
      if ((local_100 != (char *)0x0) && (*local_100 != '\0')) {
        lVar15 = -1;
        do {
          lVar15 = lVar15 + 1;
        } while (local_100[lVar15] != '\0');
        uVar12 = (int)lVar15 + 1;
        local_2c0 = (ulonglong)uVar12;
        if (0 < (int)uVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2c8,0);
        }
        lVar15 = local_2c8;
        local_2e8 = 0x3f;
        FGenericPlatformString::Convert<char,wchar_t>(local_2c8,uVar12,local_100,uVar12);
      }
      TSet<TTuple<FString,FICUInternationalization::FICUCachedFileData>,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>,FDefaultSetAllocator>
      ::Remove(param_1 + 8,&local_2c8);
      if (lVar15 != 0) {
        FMemory::Free(lVar15);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
      if (local_108 != 0) {
        FMemory::Free();
      }
    }
    uVar9 = (**(code **)(*param_1 + 0x98))(param_1,param_2);
    FUN_1419c8be0(uVar9);
    plVar6 = plStack_2b0;
    if (plStack_2b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_2b0 + 1;
      lVar15 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plStack_2b0)(plStack_2b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_2b0 + 8))(plStack_2b0,1);
        }
      }
    }
  }
  return uVar9;
}



// FUNCTION 1419c7670 FUN_1419c7670 body=316 status=ok
// SIG undefined FUN_1419c7670(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1419c7670(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar6;
  int iVar7;
  undefined1 auStack_168 [32];
  undefined2 local_148;
  longlong local_138;
  int local_130;
  int local_12c;
  char local_128 [256];
  ulonglong local_28;
  longlong lVar5;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  iVar2 = Ordinal_57(local_128,0x100);
  if (iVar2 == 0) {
    lVar5 = 0;
    iVar6 = 0;
    local_138 = 0;
    local_12c = 0;
    iVar7 = iVar6;
    if (local_128[0] != '\0') {
      lVar5 = -1;
      do {
        lVar4 = lVar5 + 1;
        lVar1 = lVar5 + 1;
        lVar5 = lVar4;
      } while (local_128[lVar1] != '\0');
      iVar3 = (int)lVar4 + 1;
      local_130 = iVar3;
      if (0 < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
      }
      iVar7 = local_12c;
      iVar6 = local_130;
      lVar5 = local_138;
      local_148 = 0x3f;
      FGenericPlatformString::Convert<char,wchar_t>(local_138,iVar3,local_128,iVar3);
    }
    if (param_2 == &local_138) {
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
    }
    else {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      *param_2 = lVar5;
      *(int *)(param_2 + 1) = iVar6;
      *(int *)((longlong)param_2 + 0xc) = iVar7;
    }
  }
  return iVar2 == 0;
}



// FUNCTION 1419c77b0 FUN_1419c77b0 body=194 status=ok
// SIG undefined FUN_1419c77b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1419c77b0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  puVar1 = (undefined8 *)operator_new(0x140);
  if (puVar1 != (undefined8 *)0x0) {
    if (*(int *)(param_2 + 1) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*param_2;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_b8,puVar2);
    FUN_1419c5bc0(puVar1,local_30);
    if (local_38 != 0) {
      FMemory::Free();
    }
    puVar1[0x25] = param_1;
    *puVar1 = &PTR_FUN_144d83198;
    FString::FString(puVar1 + 0x26,param_2);
  }
  return puVar1;
}



// FUNCTION 1419c7880 GetIp body=26 status=ok
// SIG undefined GetIp(void)

void FInternetAddrBSD::GetIp(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = Ordinal_14(*(undefined4 *)(param_1 + 0xc));
  *param_2 = uVar1;
  return;
}



// FUNCTION 1419c78a0 FUN_1419c78a0 body=47 status=ok
// SIG undefined FUN_1419c78a0(void)

void FUN_1419c78a0(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  piVar2 = _errno();
                    /* WARNING: Could not recover jumptable at 0x0001419c78cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x90))(param_1,*piVar2);
  return;
}



// FUNCTION 1419c78d0 FUN_1419c78d0 body=47 status=ok
// SIG undefined FUN_1419c78d0(void)

void FUN_1419c78d0(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *param_1;
  uVar2 = Ordinal_111();
                    /* WARNING: Could not recover jumptable at 0x0001419c78fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x90))(param_1,uVar2);
  return;
}



// FUNCTION 1419c7900 FUN_1419c7900 body=466 status=ok
// SIG undefined FUN_1419c7900(void)

undefined8 FUN_1419c7900(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined4 local_res18 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  
  local_res18[0] = 0;
  iVar8 = GetAdaptersAddresses(2,0x3c,0,0,local_res18);
  if (iVar8 != 0x6f) {
    return 0;
  }
  lVar10 = FMemory::Malloc(local_res18[0],0);
  iVar8 = GetAdaptersAddresses(2,0x3c,0,lVar10,local_res18);
  lVar6 = lVar10;
  if (iVar8 != 0) {
    FMemory::Free(lVar10);
    return 0;
  }
  for (; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 8)) {
    if ((*(int *)(lVar6 + 100) == 6) || (*(int *)(lVar6 + 100) == 0x47)) {
      for (lVar3 = *(longlong *)(lVar6 + 0x18); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 8)) {
        if ((*(byte *)(lVar3 + 4) & 1) != 0) {
          uVar9 = Ordinal_14(*(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 4));
          puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x70))(param_1,local_38,uVar9,0);
          lVar4 = puVar11[1];
          uVar5 = *puVar11;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
          iVar8 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar8 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar8 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar8);
          }
          plVar7 = local_30;
          puVar11 = (undefined8 *)((longlong)iVar8 * 0x10 + *param_2);
          *puVar11 = uVar5;
          puVar11[1] = lVar4;
          if (local_30 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_30 + 1;
            lVar4 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*local_30)(local_30);
              LOCK();
              piVar2 = (int *)((longlong)plVar7 + 0xc);
              iVar8 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
        }
      }
    }
  }
  FMemory::Free(lVar10);
  return 1;
}



// FUNCTION 1419c7ae0 FUN_1419c7ae0 body=48 status=ok
// SIG undefined FUN_1419c7ae0(void)

undefined8 * FUN_1419c7ae0(longlong *param_1,undefined8 *param_2)

{
  undefined1 local_res8;
  
  (**(code **)(*param_1 + 0xb8))();
  if (local_res8 != '\0') {
    (**(code **)(*(longlong *)*param_2 + 0x58))();
  }
  return param_2;
}



// FUNCTION 1419c7b10 FUN_1419c7b10 body=476 status=ok
// SIG undefined FUN_1419c7b10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1419c7b10(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined1 *param_4)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  undefined2 *puVar6;
  undefined *puVar7;
  undefined1 auStack_328 [32];
  undefined1 local_308;
  char local_2f8 [8];
  undefined2 *local_2f0;
  undefined8 local_2e8;
  undefined1 local_2d8 [128];
  longlong local_258;
  undefined8 local_250;
  undefined1 local_238 [512];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  (**(code **)(*param_1 + 0x70))(param_1,param_2,0,0);
  (**(code **)(*(longlong *)*param_2 + 0x58))();
  *param_4 = 0;
  _guard_xfg_dispatch_icall_nop(local_238,0,0x200);
  local_2f0 = (undefined2 *)0x0;
  local_2e8 = 0;
  cVar2 = (**(code **)(*param_1 + 0x68))(param_1,&local_2f0);
  if (cVar2 == '\0') {
    uVar4 = (**(code **)(*param_1 + 0x80))(param_1);
    FOutputDevice::LogfImpl(param_3,L"%s: gethostname failed (%s)",uVar4,&DAT_144d824b4);
  }
  uVar4 = FCommandLine::Get();
  local_308 = 1;
  cVar2 = FParse::Value(uVar4,L"MULTIHOME=",local_238,0x100);
  plVar1 = (longlong *)*param_2;
  if (cVar2 == '\0') {
    puVar6 = &DAT_143f3eda8;
    if ((int)local_2e8 != 0) {
      puVar6 = local_2f0;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_2d8,puVar6);
    uVar3 = (**(code **)(*param_1 + 0x40))(param_1,local_250,plVar1);
    if (local_258 != 0) {
      FMemory::Free();
    }
    if ((uVar3 < 0x32) && ((0x3000000000081U >> ((longlong)(int)uVar3 & 0x3fU) & 1) != 0)) {
      uVar4 = FCommandLine::Get();
      cVar2 = FParse::Param(uVar4,L"PRIMARYNET");
      if (cVar2 == '\0') {
        *param_4 = 1;
      }
      if (DAT_1469f5994 == '\0') {
        DAT_1469f5994 = '\x01';
      }
      goto LAB_1419c7cbc;
    }
    puVar7 = &DAT_144d824b4;
    pwVar5 = L"GetHostByName failed (%s)";
  }
  else {
    local_2f8[0] = '\0';
    (**(code **)(*plVar1 + 8))(plVar1,local_238,local_2f8);
    if (local_2f8[0] != '\0') goto LAB_1419c7cbc;
    puVar7 = local_238;
    pwVar5 = L"Invalid multihome IP address %s";
  }
  FOutputDevice::LogfImpl(param_3,pwVar5,puVar7);
LAB_1419c7cbc:
  if (local_2f0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1419c7cf0 GetPeerAddress body=41 status=ok
// SIG undefined GetPeerAddress(void)

bool FSocketBSD::GetPeerAddress(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 local_res8 [8];
  
  local_res8[0] = 0x10;
  iVar1 = Ordinal_5(*(undefined8 *)(param_1 + 0x20),param_2 + 8,local_res8);
  return iVar1 == 0;
}



// FUNCTION 1419c7d20 GetPort body=22 status=ok
// SIG undefined GetPort(void)

undefined2 FInternetAddrBSD::GetPort(longlong param_1)

{
  undefined2 uVar1;
  
  uVar1 = Ordinal_15(*(undefined2 *)(param_1 + 10));
  return uVar1;
}



// FUNCTION 1419c7d40 GetPort body=30 status=ok
// SIG undefined GetPort(void)

void FInternetAddrBSD::GetPort(longlong param_1,uint *param_2)

{
  ushort uVar1;
  
  uVar1 = Ordinal_15(*(undefined2 *)(param_1 + 10));
  *param_2 = (uint)uVar1;
  return;
}



// FUNCTION 1419c7d60 GetPortNo body=103 status=ok
// SIG undefined GetPortNo(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined2 FSocketBSD::GetPortNo(longlong param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28 [2];
  undefined1 local_20 [2];
  undefined2 local_1e;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  local_28[0] = 0x10;
  iVar2 = Ordinal_6(*(undefined8 *)(param_1 + 0x20),local_20,local_28);
  if (iVar2 != 0) {
    return 0;
  }
  uVar1 = Ordinal_15(local_1e);
  return uVar1;
}



// FUNCTION 1419c7df0 GetSocketError body=8 status=ok
// SIG undefined GetSocketError(void)

undefined * ISocketSubsystem::GetSocketError(void)

{
  return &DAT_144d824b4;
}



// FUNCTION 1419c7e00 GetSocketModuleName body=568 status=ok
// SIG undefined GetSocketModuleName(void)

undefined8 * GetSocketModuleName(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  void *local_res8;
  undefined1 local_res18 [16];
  undefined2 *local_58;
  int local_50;
  int local_4c;
  void *local_48;
  undefined8 local_40;
  
  puVar5 = (undefined2 *)0x0;
  local_40 = 8;
  *param_1 = 0;
  local_48 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"Sockets",0x10);
  cVar1 = FString::StartsWith(param_2,&local_48,0);
  if (cVar1 == '\0') {
    lVar6 = (longlong)(int)local_40;
    local_50 = *(int *)(param_2 + 1);
    lVar8 = (longlong)local_50;
    if ((int)local_40 < 2) {
      _Src = (void *)*param_2;
      local_58 = (undefined2 *)0x0;
      iVar7 = local_50;
      if (local_50 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
        puVar5 = local_58;
        _guard_xfg_dispatch_icall_nop(local_58,_Src,lVar8 * 2);
        iVar7 = local_50;
      }
    }
    else {
      iVar9 = local_50 + -1;
      if (local_50 == 0) {
        iVar9 = 0;
      }
      if (((int)local_40 != 0) || (iVar2 = 1, iVar9 == 0)) {
        iVar2 = 0;
      }
      local_58 = (undefined2 *)0x0;
      local_res8 = local_48;
      local_50 = (int)local_40;
      if (((int)local_40 == 0) && (iVar9 + iVar2 == 0)) {
        local_4c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,(int)local_40 + iVar9 + iVar2,0);
        puVar5 = local_58;
        _guard_xfg_dispatch_icall_nop(local_58,local_res8,lVar6 * 2);
      }
      iVar2 = local_50;
      local_res8 = (void *)*param_2;
      iVar7 = local_50;
      if (iVar9 != 0) {
        lVar6 = (longlong)local_50;
        local_50 = iVar9 + (uint)(local_50 == 0) + local_50;
        if (local_4c < local_50) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar2);
          puVar5 = local_58;
        }
        iVar7 = local_50;
        _guard_xfg_dispatch_icall_nop
                  (puVar5 + (lVar6 - (ulonglong)(iVar2 != 0)),local_res8,(longlong)iVar9 * 2);
        (puVar5 + (lVar6 - (ulonglong)(iVar2 != 0)))[iVar9] = 0;
      }
    }
    puVar4 = &DAT_143f3eda8;
    if (iVar7 != 0) {
      puVar4 = puVar5;
    }
    puVar3 = (undefined8 *)FName::FName(local_res18,puVar4,1);
    *param_1 = *puVar3;
    if (puVar5 != (undefined2 *)0x0) {
      FMemory::Free(puVar5);
    }
  }
  else {
    if (*(int *)(param_2 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*param_2;
    }
    puVar3 = (undefined8 *)FName::FName(&local_res8,puVar5,1);
    *param_1 = *puVar3;
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1419c8040 HasPendingData body=91 status=ok
// SIG undefined HasPendingData(void)

bool FSocketBSD::HasPendingData(longlong *param_1,int *param_2)

{
  int iVar1;
  
  *param_2 = 0;
  iVar1 = (**(code **)(*param_1 + 0xe8))(param_1,0,0);
  if (iVar1 == 0) {
    iVar1 = Ordinal_10(param_1[4],0x4004667f,param_2);
    if (iVar1 == 0) {
      return *param_2 != 0;
    }
  }
  return false;
}



// FUNCTION 1419c80a0 HasState body=263 status=ok
// SIG undefined HasState(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FSocketBSD::HasState(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_268 [32];
  int *local_248;
  int local_238;
  undefined4 local_234;
  undefined4 local_228 [2];
  undefined8 local_220;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_228[0] = 1;
  local_238 = (int)((double)param_3 * 1e-07);
  lVar2 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(param_3),8) + param_3;
  local_234 = (undefined4)((param_3 + ((lVar2 >> 0x17) - (lVar2 >> 0x3f)) * -10000000) / 10);
  local_220 = *(undefined8 *)(param_1 + 0x20);
  iVar1 = 0;
  if (param_2 == 0) {
    puVar5 = (undefined4 *)0x0;
    puVar3 = local_228;
LAB_1419c8169:
    puVar4 = (undefined4 *)0x0;
  }
  else {
    if (param_2 != 1) {
      if (param_2 != 2) goto LAB_1419c8188;
      puVar3 = (undefined4 *)0x0;
      puVar5 = local_228;
      goto LAB_1419c8169;
    }
    puVar5 = (undefined4 *)0x0;
    puVar3 = (undefined4 *)0x0;
    puVar4 = local_228;
  }
  local_248 = &local_238;
  iVar1 = Ordinal_18((int)local_220 + 1,puVar3,puVar4,puVar5);
  if (0 < iVar1) {
    return '\0';
  }
LAB_1419c8188:
  return (iVar1 != 0) + '\x01';
}



// FUNCTION 1419c81b0 FUN_1419c81b0 body=216 status=ok
// SIG undefined FUN_1419c81b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1419c81b0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined1 local_1b8 [416];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  if ((char)param_1[0x17] == '\0') {
    *(undefined1 *)(param_1 + 0x17) = 1;
    iVar1 = Ordinal_115(0x101,local_1b8);
    if (iVar1 == 0) {
      return 1;
    }
    (**(code **)(*param_1 + 0x90))(param_1,iVar1);
    FString::PrintfImpl(&local_1c8,L"WSAStartup failed (%s)",&DAT_144d824b4);
    if (param_2 == &local_1c8) {
      if (local_1c8 != 0) {
        FMemory::Free();
      }
    }
    else {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      *param_2 = local_1c8;
      *(undefined4 *)(param_2 + 1) = local_1c0;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_1bc;
    }
  }
  return 0;
}



// FUNCTION 1419c8290 InitializeModule body=82 status=ok
// SIG undefined InitializeModule(void)

undefined8 * FStaticallyLinkedModuleRegistrant<FSocketSubsystemModule>::InitializeModule(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR__scalar_deleting_destructor__144d82358;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
    puVar1[10] = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1419c82f0 InternalBSDSocketFactory body=137 status=ok
// SIG undefined InternalBSDSocketFactory(void)

undefined8 *
FSocketSubsystemBSD::InternalBSDSocketFactory
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = param_3;
    *puVar1 = &PTR_FUN_143f9d520;
    FString::FString(puVar1 + 2,param_4);
    puVar1[4] = param_2;
    *puVar1 = &PTR__scalar_deleting_destructor__144d831c0;
    puVar1[5] = 0;
    puVar1[6] = param_1;
  }
  return puVar1;
}



// FUNCTION 1419c8380 FUN_1419c8380 body=85 status=ok
// SIG undefined FUN_1419c8380(void)

undefined8 FUN_1419c8380(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  LOCK();
  bVar2 = *(int *)(lVar1 + 0x10) == 0;
  if (bVar2) {
    *(int *)(lVar1 + 0x10) = 0;
  }
  UNLOCK();
  if (bVar2) {
    if (*(longlong *)(lVar1 + 0x20) != 0) {
      (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x20))(*(longlong **)(lVar1 + 0x18),0xffffffff,0)
      ;
      *(undefined8 *)(lVar1 + 0x20) = 0;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1419c83f0 JoinMulticastGroup body=58 status=ok
// SIG undefined JoinMulticastGroup(void)

bool FSocketBSD::JoinMulticastGroup(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res8 = *(undefined4 *)(param_2 + 0xc);
  local_resc = 0;
  iVar1 = Ordinal_21(*(undefined8 *)(param_1 + 0x20),0,0xc,&local_res8,8);
  return iVar1 == 0;
}



// FUNCTION 1419c8430 LeaveMulticastGroup body=58 status=ok
// SIG undefined LeaveMulticastGroup(void)

bool FSocketBSD::LeaveMulticastGroup(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res8 = *(undefined4 *)(param_2 + 0xc);
  local_resc = 0;
  iVar1 = Ordinal_21(*(undefined8 *)(param_1 + 0x20),0,0xd,&local_res8,8);
  return iVar1 == 0;
}



// FUNCTION 1419c8470 Listen body=24 status=ok
// SIG undefined Listen(void)

bool FSocketBSD::Listen(longlong param_1)

{
  int iVar1;
  
  iVar1 = Ordinal_13(*(undefined8 *)(param_1 + 0x20));
  return iVar1 == 0;
}



// FUNCTION 1419c8490 FUN_1419c8490 body=184 status=ok
// SIG undefined FUN_1419c8490(void)

undefined8
FUN_1419c8490(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  iVar3 = *(int *)(param_1 + 8);
  uVar1 = param_5 & 2 | 8;
  if ((param_5 & 0x100) == 0) {
    uVar1 = param_5 & 2;
  }
  iVar2 = Ordinal_16(*(undefined8 *)(param_1 + 0x20),param_2,param_3,uVar1);
  *param_4 = iVar2;
  if (-1 < iVar2) {
    if ((iVar3 == 2) && (iVar2 < 1)) {
      return 0;
    }
LAB_1419c850d:
    puVar4 = (undefined8 *)FDateTime::UtcNow(local_res8);
    *(undefined8 *)(param_1 + 0x28) = *puVar4;
    return 1;
  }
  if (iVar3 == 2) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x90))
                      (*(longlong **)(param_1 + 0x30),iVar2);
    if (iVar3 == 7) {
      *param_4 = 0;
      goto LAB_1419c850d;
    }
  }
  *param_4 = 0;
  return 0;
}



// FUNCTION 1419c8550 FUN_1419c8550 body=219 status=ok
// SIG undefined FUN_1419c8550(void)

undefined8
FUN_1419c8550(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,longlong param_5,
             uint param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  uVar2 = param_6;
  iVar4 = *(int *)(param_1 + 8);
  uVar6 = param_6 & 2;
  param_6 = 0x10;
  uVar1 = uVar6 | 8;
  if ((uVar2 & 0x100) == 0) {
    uVar1 = uVar6;
  }
  iVar3 = Ordinal_17(*(undefined8 *)(param_1 + 0x20),param_2,param_3,uVar1,param_5 + 8,&param_6);
  *param_4 = iVar3;
  if (-1 < iVar3) {
    if ((iVar4 == 2) && (iVar3 < 1)) {
      return 0;
    }
LAB_1419c85f0:
    puVar5 = (undefined8 *)FDateTime::UtcNow(&param_5);
    *(undefined8 *)(param_1 + 0x28) = *puVar5;
    return 1;
  }
  if (iVar4 == 2) {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x90))
                      (*(longlong **)(param_1 + 0x30),iVar3);
    if (iVar4 == 7) {
      *param_4 = 0;
      goto LAB_1419c85f0;
    }
  }
  *param_4 = 0;
  return 0;
}



// FUNCTION 1419c8630 Send body=84 status=ok
// SIG undefined Send(void)

byte FSocketBSD::Send(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined1 local_res8 [8];
  
  uVar1 = Ordinal_19(*(undefined8 *)(param_1 + 0x20),param_2,param_3,0);
  *param_4 = uVar1;
  bVar3 = (byte)((uint)uVar1 >> 0x1f) ^ 1;
  if (bVar3 != 0) {
    puVar2 = (undefined8 *)FDateTime::UtcNow(local_res8);
    *(undefined8 *)(param_1 + 0x28) = *puVar2;
  }
  return bVar3;
}



// FUNCTION 1419c8690 SendTo body=106 status=ok
// SIG undefined SendTo(void)

byte FSocketBSD::SendTo(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                       longlong param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  byte bVar3;
  
  uVar1 = Ordinal_20(*(undefined8 *)(param_1 + 0x20),param_2,param_3,0,param_5 + 8,0x10);
  *param_4 = uVar1;
  bVar3 = (byte)((uint)uVar1 >> 0x1f) ^ 1;
  if (bVar3 != 0) {
    puVar2 = (undefined8 *)FDateTime::UtcNow(&param_5);
    *(undefined8 *)(param_1 + 0x28) = *puVar2;
  }
  return bVar3;
}



// FUNCTION 1419c8700 FUN_1419c8700 body=34 status=ok
// SIG undefined FUN_1419c8700(void)

void FUN_1419c8700(longlong *param_1)

{
  (**(code **)(*param_1 + 0x10))(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0001419c871e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1,0);
  return;
}



// FUNCTION 1419c8730 SetBroadcast body=55 status=ok
// SIG undefined SetBroadcast(void)

bool FSocketBSD::SetBroadcast(longlong param_1,byte param_2)

{
  int iVar1;
  uint local_res10 [6];
  
  local_res10[0] = (uint)param_2;
  iVar1 = Ordinal_21(*(undefined8 *)(param_1 + 0x20),0xffff,0x20,local_res10,4);
  return iVar1 == 0;
}



// FUNCTION 1419c8770 FUN_1419c8770 body=37 status=ok
// SIG undefined FUN_1419c8770(void)

void FUN_1419c8770(longlong *param_1)

{
  (**(code **)(*param_1 + 0x10))(param_1,0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x0001419c8791. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1,0);
  return;
}



// FUNCTION 1419c87a0 SetIp body=26 status=ok
// SIG undefined SetIp(void)

void FInternetAddrBSD::SetIp(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = Ordinal_8(param_2);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}



// FUNCTION 1419c87c0 FUN_1419c87c0 body=465 status=ok
// SIG undefined FUN_1419c87c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419c87c0(longlong *param_1,short *param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  wchar_t *_Str;
  uint uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  undefined1 auStack_128 [32];
  longlong *local_108;
  undefined8 local_100;
  longlong local_f8;
  ulonglong local_f0;
  undefined4 local_e8 [4];
  undefined1 local_d8 [128];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  iVar1 = 0;
  local_f8 = 0;
  local_f0 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_2[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_f0 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    }
    FGenericPlatformString::Memcpy(local_f8,param_2,(longlong)(int)uVar3 * 2);
    if (1 < (int)local_f0) {
      local_108 = (longlong *)0x0;
      local_100 = 0;
      FUN_141594550(&local_f8,&local_108,&DAT_144ca0610,1);
      puVar5 = &DAT_143f3eda8;
      if (1 < (int)local_100) {
        if ((int)local_108[3] == 0) {
          _Str = L"";
        }
        else {
          _Str = (wchar_t *)local_108[2];
        }
        iVar1 = _wtoi(_Str);
      }
      if ((int)local_108[1] != 0) {
        puVar5 = (undefined2 *)*local_108;
      }
      TStringConversion<TStringConvert<wchar_t,char>,128>::
      TStringConversion<TStringConvert<wchar_t,char>,128>(local_d8,puVar5);
      iVar2 = inet_pton(2,local_50,local_e8);
      if (iVar2 == 0) {
        *param_3 = 0;
      }
      else {
        if (iVar1 != 0) {
          (**(code **)(*param_1 + 0x30))(param_1,iVar1);
        }
        *param_3 = 1;
        *(undefined4 *)((longlong)param_1 + 0xc) = local_e8[0];
      }
      if (local_58 != 0) {
        FMemory::Free();
      }
      plVar6 = local_108;
      for (iVar1 = (int)local_100; iVar1 != 0; iVar1 = iVar1 + -1) {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 2;
      }
      if (local_108 != (longlong *)0x0) {
        FMemory::Free(local_108);
      }
      goto LAB_1419c8945;
    }
  }
  *param_3 = 0;
LAB_1419c8945:
  if (local_f8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419c89a0 SetLinger body=62 status=ok
// SIG undefined SetLinger(void)

bool FSocketBSD::SetLinger(longlong param_1,byte param_2,undefined2 param_3)

{
  int iVar1;
  ushort local_res10;
  undefined2 local_res12;
  
  local_res10 = (ushort)param_2;
  local_res12 = param_3;
  iVar1 = Ordinal_21(*(undefined8 *)(param_1 + 0x20),0xffff,0x80,&local_res10,4);
  return iVar1 == 0;
}



// FUNCTION 1419c89e0 SetMulticastLoopback body=47 status=ok
// SIG undefined SetMulticastLoopback(void)

bool FSocketBSD::SetMulticastLoopback(longlong param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = param_2;
  iVar1 = Ordinal_21(*(undefined8 *)(param_1 + 0x20),0,0xb,local_res10,1);
  return iVar1 == 0;
}



// FUNCTION 1419c8a10 SetMulticastTtl body=47 status=ok
// SIG undefined SetMulticastTtl(void)

bool FSocketBSD::SetMulticastTtl(longlong param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = param_2;
  iVar1 = Ordinal_21(*(undefined8 *)(param_1 + 0x20),0,10,local_res10,1);
  return iVar1 == 0;
}



// FUNCTION 1419c8a40 SetNonBlocking body=41 status=ok
// SIG undefined SetNonBlocking(void)

bool FSocketBSD::SetNonBlocking(longlong param_1,byte param_2)

{
  int iVar1;
  uint local_res10 [6];
  
  local_res10[0] = (uint)param_2;
  iVar1 = Ordinal_10(*(undefined8 *)(param_1 + 0x20),0x8004667e,local_res10);
  return iVar1 == 0;
}



// FUNCTION 1419c8a70 SetPort body=28 status=ok
// SIG undefined SetPort(void)

void FInternetAddrBSD::SetPort(longlong param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  uVar1 = Ordinal_9(param_2);
  *(undefined2 *)(param_1 + 10) = uVar1;
  return;
}



// FUNCTION 1419c8a90 SetReceiveBufferSize body=125 status=ok
// SIG undefined SetReceiveBufferSize(void)

bool FSocketBSD::SetReceiveBufferSize(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res8[0] = 4;
  local_res10[0] = param_2;
  iVar1 = Ordinal_21(*(undefined8 *)(param_1 + 0x20),0xffff,0x1002,local_res10,4);
  Ordinal_7(*(undefined8 *)(param_1 + 0x20),0xffff,0x1002,param_3,local_res8);
  return iVar1 == 0;
}



// FUNCTION 1419c8b10 SetReuseAddr body=55 status=ok
// SIG undefined SetReuseAddr(void)

bool FSocketBSD::SetReuseAddr(longlong param_1,byte param_2)

{
  int iVar1;
  uint local_res10 [6];
  
  local_res10[0] = (uint)param_2;
  iVar1 = Ordinal_21(*(undefined8 *)(param_1 + 0x20),0xffff,4,local_res10,4);
  return iVar1 == 0;
}



// FUNCTION 1419c8b50 SetSendBufferSize body=125 status=ok
// SIG undefined SetSendBufferSize(void)

bool FSocketBSD::SetSendBufferSize(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res8[0] = 4;
  local_res10[0] = param_2;
  iVar1 = Ordinal_21(*(undefined8 *)(param_1 + 0x20),0xffff,0x1001,local_res10,4);
  Ordinal_7(*(undefined8 *)(param_1 + 0x20),0xffff,0x1001,param_3,local_res8);
  return iVar1 == 0;
}



// FUNCTION 1419c8bd0 Ordinal_116 body=7 status=ok
// SIG undefined Ordinal_116(void)

void Ordinal_116(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001419c8bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_116();
  return;
}



// FUNCTION 1419c8be0 FUN_1419c8be0 body=117 status=ok
// SIG undefined FUN_1419c8be0(void)

void FUN_1419c8be0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = DAT_1468b5010;
  lVar1 = *(longlong *)(param_1 + 0x120);
  LOCK();
  *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
  UNLOCK();
  plVar3 = *(longlong **)(lVar1 + 0x18);
  *(longlong *)(lVar1 + 0x20) = lVar2;
  if (lVar2 != 0) {
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)FUN_1415ab270(1);
      *(longlong **)(lVar1 + 0x18) = plVar3;
    }
    (**(code **)(*plVar3 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x0001419c8c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x10))(*(longlong **)(lVar1 + 0x20),lVar1);
    return;
  }
  FUN_1415b5910();
  *(undefined8 *)(lVar1 + 0x18) = 0;
  (**(code **)(**(longlong **)(lVar1 + 8) + 0x20))();
  LOCK();
  *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + -1;
  UNLOCK();
  return;
}



// FUNCTION 1419c8c60 FUN_1419c8c60 body=196 status=ok
// SIG undefined FUN_1419c8c60(void)

undefined8 FUN_1419c8c60(longlong *param_1,undefined8 param_2,char param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = Ordinal_14(*(undefined4 *)((longlong)param_1 + 0xc));
  uVar3 = uVar1 >> 0x10 & 0xff;
  uVar4 = uVar1 >> 8 & 0xff;
  if (param_3 == '\0') {
    FString::PrintfImpl(param_2,L"%i.%i.%i.%i",uVar1 >> 0x18,uVar3,uVar4,uVar1 & 0xff);
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x38))(param_1);
    FString::PrintfImpl(param_2,L"%i.%i.%i.%i:%i",uVar1 >> 0x18,uVar3,uVar4,uVar1 & 0xff,uVar2);
  }
  return param_2;
}



// FUNCTION 1419c9000 Wait body=114 status=ok
// SIG undefined Wait(void)

undefined8 FSocketBSD::Wait(longlong *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  
  if (((param_2 & 0xfffffffd) == 0) &&
     (iVar1 = (**(code **)(*param_1 + 0xe8))(param_1,0), iVar1 == 0)) {
    return 1;
  }
  if ((param_2 - 1 < 2) && (iVar1 = (**(code **)(*param_1 + 0xe8))(param_1,1,param_3), iVar1 == 0))
  {
    return 1;
  }
  return 0;
}



// FUNCTION 1419c9080 WaitForPendingConnection body=115 status=ok
// SIG undefined WaitForPendingConnection(void)

ulonglong FSocketBSD::WaitForPendingConnection
                    (longlong *param_1,undefined1 *param_2,undefined8 *param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  *param_2 = 0;
  uVar2 = (**(code **)(*param_1 + 0xe8))(param_1,2);
  if ((int)uVar2 == 1) {
    iVar1 = (**(code **)(*param_1 + 0xe8))(param_1,0,*param_3);
    *param_2 = iVar1 == 0;
    return (ulonglong)(iVar1 != 2);
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1419c9100 StartupModule body=47 status=ok
// SIG undefined StartupModule(void)

void FNetworkingModule::StartupModule(void)

{
  undefined8 uVar1;
  undefined1 local_res10 [24];
  
  uVar1 = FName::FName(local_res10,L"WINDOWS",1);
  DAT_1469f5998 = FUN_1419c6b80(uVar1);
  return;
}



// FUNCTION 1419c9130 FUN_1419c9130 body=39 status=ok
// SIG undefined FUN_1419c9130(void)

void FUN_1419c9130(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144d835c0;
    return;
  }
  return;
}



// FUNCTION 1419c9160 Parse body=255 status=ok
// SIG undefined Parse(void)

undefined8 FIPv4Address::Parse(undefined8 param_1,undefined1 *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *_Str;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *local_18;
  undefined8 local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  iVar1 = FUN_141594550(param_1,&local_18,&DAT_144d83530,0);
  if (iVar1 == 4) {
    _Str = L"";
    if ((int)local_18[1] == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)*local_18;
    }
    iVar1 = _wtoi(pwVar2);
    param_2[3] = (char)iVar1;
    if ((int)local_18[3] == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)local_18[2];
    }
    iVar1 = _wtoi(pwVar2);
    param_2[2] = (char)iVar1;
    if ((int)local_18[5] == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)local_18[4];
    }
    iVar1 = _wtoi(pwVar2);
    param_2[1] = (char)iVar1;
    if ((int)local_18[7] != 0) {
      _Str = (wchar_t *)local_18[6];
    }
    iVar1 = _wtoi(_Str);
    *param_2 = (char)iVar1;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  plVar3 = local_18;
  for (iVar1 = (int)local_10; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return uVar4;
}



// FUNCTION 1419c9260 Parse body=204 status=ok
// SIG undefined Parse(void)

undefined8 FIPv4Endpoint::Parse(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *local_18;
  undefined8 local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  iVar2 = FUN_141594550(param_1,&local_18,&DAT_144d83534,0);
  if ((iVar2 == 2) && (cVar1 = FIPv4Address::Parse(local_18,param_2), cVar1 != '\0')) {
    if ((int)local_18[3] == 0) {
      iVar2 = _wtoi(L"");
      *(short *)(param_2 + 4) = (short)iVar2;
      uVar4 = 1;
    }
    else {
      iVar2 = _wtoi((wchar_t *)local_18[2]);
      *(short *)(param_2 + 4) = (short)iVar2;
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
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
  return uVar4;
}



// FUNCTION 1419c9330 ToString body=60 status=ok
// SIG undefined ToString(void)

undefined8 FIPv4Address::ToString(undefined1 *param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"%i.%i.%i.%i",param_1[3],param_1[2],param_1[1],*param_1);
  return param_2;
}



// FUNCTION 1419c9370 ToString body=127 status=ok
// SIG undefined ToString(void)

undefined8 FIPv4Endpoint::ToString(byte *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 *local_18;
  int local_10;
  
  uVar1 = (uint)*param_1;
  uVar3 = (uint)param_1[1];
  FString::PrintfImpl(&local_18,L"%i.%i.%i.%i",param_1[3],param_1[2],uVar3,uVar1);
  puVar2 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar2 = local_18;
  }
  FString::PrintfImpl(param_2,L"%s:%i",puVar2,*(undefined2 *)(param_1 + 4),uVar3,uVar1);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1419c93f0 FUN_1419c93f0 body=388 status=ok
// SIG undefined FUN_1419c93f0(void)

/* WARNING: Removing unreachable block (ram,0x0001419c9532) */
/* WARNING: Removing unreachable block (ram,0x0001419c954b) */

undefined8 * FUN_1419c93f0(void)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 local_res18 [16];
  
  puVar3 = (undefined8 *)operator_new(0x1a0);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 2;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x114) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x11c) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)puVar3 + 0x124) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)puVar3 + 300) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)puVar3 + 0x134) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)puVar3 + 0x13c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x144) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14c) = 0;
  *(undefined4 *)(puVar3 + 0x2a) = 0xffffffff;
  *(undefined4 *)((longlong)puVar3 + 0x154) = 0;
  puVar3[0x2b] = 0;
  puVar3[0x2c] = 0;
  puVar3[0x2d] = 0;
  puVar3[0x2e] = 0;
  puVar3[0x2f] = 0;
  puVar3[0x30] = 0;
  puVar3[0x31] = 0;
  puVar3[0x32] = 0;
  *(undefined1 *)(puVar3 + 0x33) = 0;
  _guard_xfg_dispatch_icall_nop(puVar3 + 8,0,0x160);
  *puVar3 = &PTR_FUN_144d845f0;
  puVar3[6] = &PTR_StartProfileThreadUsage_144d84d30;
  puVar3[7] = &PTR_StartProfileThreadUsage_144d85030;
  uVar4 = FGenericPlatformMisc::GetNullRHIShaderFormat();
  puVar5 = (undefined8 *)FName::FName(local_res18,uVar4,1);
  DAT_146ab62cc = FUN_141ed7950(*puVar5);
  for (iVar1 = 0x1f; 0x4000U >> iVar1 == 0; iVar1 = iVar1 + -1) {
  }
  DAT_1464c9c64 = 0x4000;
  for (iVar2 = 0x1f; 0x3fffU >> iVar2 == 0; iVar2 = iVar2 + -1) {
  }
  DAT_1464c9c0c = (~((0x1f - iVar1) * 0x4000000 >> 0x1f) & 0x20U - (0x1f - iVar2)) + 1;
  if (0xd < DAT_1464c9c0c) {
    DAT_1464c9c0c = 0xe;
  }
  return puVar3;
}



// FUNCTION 1419c9580 ~TRefCountPtr<FRHIComputeShader> body=112 status=ok
// SIG undefined ~TRefCountPtr<FRHIComputeShader>(void)

void TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar3 + 2) != '\0') ||
         ((DAT_146ab62f5 == '\0' && (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 != '\0')))
         ) {
                    /* WARNING: Could not recover jumptable at 0x0001419c95e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar3)(puVar3,1);
        return;
      }
      LOCK();
      bVar5 = *(int *)((longlong)puVar3 + 0xc) == 0;
      if (bVar5) {
        *(int *)((longlong)puVar3 + 0xc) = 1;
      }
      UNLOCK();
      if (bVar5) {
        TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1419c95f0 operator= body=142 status=ok
// SIG undefined operator=(void)

longlong * TRefCountPtr<FRHITexture>::operator=(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  
  puVar3 = (undefined8 *)*param_1;
  *param_1 = param_2;
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    UNLOCK();
  }
  if (puVar3 != (undefined8 *)0x0) {
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
          return param_1;
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1419c9690 `scalar_deleting_destructor' body=81 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
IMagicLeapARPinFeature::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d83eb0;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1419c96f0 FUN_1419c96f0 body=112 status=ok
// SIG undefined FUN_1419c96f0(void)

undefined8 * FUN_1419c96f0(undefined8 *param_1,ulonglong param_2)

{
  param_1[6] = &PTR_StartProfileThreadUsage_144d83b88;
  param_1[7] = &PTR__purecall_144d83e88;
  FRHIRenderPassInfo::~FRHIRenderPassInfo(param_1 + 8);
  *param_1 = &PTR__scalar_deleting_destructor__144d83eb0;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 1419c9760 FUN_1419c9760 body=43 status=ok
// SIG undefined FUN_1419c9760(void)

undefined8 * FUN_1419c9760(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1419c9790 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FRHIComputePipelineStateFallback::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 3);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1419c97e0 FUN_1419c97e0 body=43 status=ok
// SIG undefined FUN_1419c97e0(void)

undefined8 * FUN_1419c97e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1419c9810 FUN_1419c9810 body=43 status=ok
// SIG undefined FUN_1419c9810(void)

undefined8 * FUN_1419c9810(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1419c9840 FUN_1419c9840 body=43 status=ok
// SIG undefined FUN_1419c9840(void)

undefined8 * FUN_1419c9840(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1419c9870 FUN_1419c9870 body=62 status=ok
// SIG undefined FUN_1419c9870(void)

undefined8 * FUN_1419c9870(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FUN_141eba320();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 1419c98b0 FUN_1419c98b0 body=43 status=ok
// SIG undefined FUN_1419c98b0(void)

undefined8 * FUN_1419c98b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1419c98e0 FUN_1419c98e0 body=43 status=ok
// SIG undefined FUN_1419c98e0(void)

undefined8 * FUN_1419c98e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1419c9910 FUN_1419c9910 body=43 status=ok
// SIG undefined FUN_1419c9910(void)

undefined8 * FUN_1419c9910(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1419c9940 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FRHITextureReference::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0xc);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1419c9990 `scalar_deleting_destructor' body=77 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * IRHICommandContext::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_StartProfileThreadUsage_144d83b88;
  param_1[1] = &PTR__purecall_144d83e88;
  FRHIRenderPassInfo::~FRHIRenderPassInfo(param_1 + 2);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x170);
  }
  return param_1;
}



// FUNCTION 1419c9a50 GetSizeXYZ body=50 status=ok
// SIG undefined GetSizeXYZ(void)

undefined8 * FRHITextureReference::GetSizeXYZ(longlong param_1,undefined8 *param_2)

{
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x30))();
    return param_2;
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 1419c9a90 Init body=111 status=ok
// SIG undefined Init(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FNullDynamicRHI::Init(void)

{
  undefined8 *puVar1;
  
  _DAT_1464c9c48 = 0xe00000007;
  _DAT_1464c9c50 = 5;
  DAT_146ab62d8 = 1;
  puVar1 = (undefined8 *)FRenderResource::GetResourceList();
  for (puVar1 = (undefined8 *)*puVar1; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1)
  {
    (**(code **)(*(longlong *)puVar1[2] + 0x18))();
  }
  puVar1 = (undefined8 *)FRenderResource::GetResourceList();
  for (puVar1 = (undefined8 *)*puVar1; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1)
  {
    (**(code **)(*(longlong *)puVar1[2] + 8))();
  }
  DAT_146ab62c8 = 1;
  return;
}



// FUNCTION 1419c9b00 FUN_1419c9b00 body=39 status=ok
// SIG undefined FUN_1419c9b00(void)

void FUN_1419c9b00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144d83600;
    return;
  }
  return;
}



// FUNCTION 1419c9b30 Lock body=27 status=ok
// SIG undefined Lock(void)

undefined8 FRHIStagingBuffer::Lock(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2);
  return uVar1;
}



// FUNCTION 1419c9b50 RHIAsyncReallocateTexture2D body=205 status=ok
// SIG undefined RHIAsyncReallocateTexture2D(void)

undefined8 *
FNullDynamicRHI::RHIAsyncReallocateTexture2D
          (undefined8 param_1,undefined8 *param_2,longlong param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = (undefined8 *)operator_new(0x68);
  puVar7 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    uVar1 = *(undefined4 *)(param_3 + 0x30);
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    uVar5 = *(undefined8 *)(param_3 + 0x28);
    uVar2 = *(undefined4 *)(param_3 + 0x40);
    uVar3 = *(undefined4 *)(param_3 + 0x3c);
    *puVar6 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar6 + 1) = 0;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *(undefined2 *)(puVar6 + 2) = 0x100;
    puVar6[3] = 0;
    puVar6[9] = puVar6 + 10;
    puVar6[4] = uVar4;
    puVar6[5] = uVar5;
    *(undefined4 *)(puVar6 + 6) = uVar1;
    *(undefined4 *)((longlong)puVar6 + 0x34) = param_4;
    *(undefined4 *)(puVar6 + 7) = 1;
    *(undefined4 *)((longlong)puVar6 + 0x3c) = uVar3;
    *(undefined4 *)(puVar6 + 8) = uVar2;
    puVar6[10] = 0xc7efffffe0000000;
    puVar6[0xb] = 0;
    *puVar6 = &PTR_FUN_144d83940;
    *(undefined4 *)(puVar6 + 0xc) = param_5;
    *(undefined4 *)((longlong)puVar6 + 100) = param_6;
    puVar7 = puVar6;
  }
  *param_2 = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1419c9c20 FUN_1419c9c20 body=217 status=ok
// SIG undefined FUN_1419c9c20(void)

undefined8 *
FUN_1419c9c20(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = (undefined8 *)operator_new(0x70);
  puVar7 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    uVar1 = *(undefined4 *)(param_3 + 0x30);
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    uVar5 = *(undefined8 *)(param_3 + 0x28);
    uVar2 = *(undefined4 *)(param_3 + 0x40);
    uVar3 = *(undefined4 *)(param_3 + 0x3c);
    *puVar6 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar6 + 1) = 0;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *(undefined2 *)(puVar6 + 2) = 0x100;
    puVar6[3] = 0;
    *(undefined4 *)((longlong)puVar6 + 0x34) = param_5;
    puVar6[9] = puVar6 + 10;
    puVar6[4] = uVar4;
    puVar6[5] = uVar5;
    *(undefined4 *)(puVar6 + 6) = uVar1;
    *(undefined4 *)(puVar6 + 7) = 1;
    *(undefined4 *)((longlong)puVar6 + 0x3c) = uVar3;
    *(undefined4 *)(puVar6 + 8) = uVar2;
    puVar6[10] = 0xc7efffffe0000000;
    puVar6[0xb] = 0;
    *puVar6 = &PTR_FUN_144d83998;
    *(undefined4 *)(puVar6 + 0xc) = param_6;
    *(undefined4 *)((longlong)puVar6 + 100) = param_7;
    *(undefined4 *)(puVar6 + 0xd) = param_4;
    puVar7 = puVar6;
  }
  *param_2 = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1419c9d00 FUN_1419c9d00 body=35 status=ok
// SIG undefined FUN_1419c9d00(void)

void FUN_1419c9d00(longlong *param_1)

{
  (**(code **)(*param_1 + 0x250))(param_1,0,0,0,0,0);
  return;
}



// FUNCTION 1419c9d30 RHIBeginDrawIndexedPrimitiveUP body=96 status=ok
// SIG undefined RHIBeginDrawIndexedPrimitiveUP(void)

void FNullDynamicRHI::RHIBeginDrawIndexedPrimitiveUP(void)

{
  longlong lVar1;
  longlong *in_stack_00000030;
  longlong *in_stack_00000050;
  
  if (DAT_1469f59b8 == 0) {
    DAT_1469f59b8 = FMemory::Malloc(0x4000000,0);
  }
  lVar1 = DAT_1469f59b8;
  *in_stack_00000030 = DAT_1469f59b8;
  if (lVar1 == 0) {
    DAT_1469f59b8 = FMemory::Malloc(0x4000000,0);
    *in_stack_00000050 = DAT_1469f59b8;
    return;
  }
  *in_stack_00000050 = lVar1;
  return;
}



// FUNCTION 1419c9d90 RHIBeginDrawPrimitiveUP body=61 status=ok
// SIG undefined RHIBeginDrawPrimitiveUP(void)

void FNullDynamicRHI::RHIBeginDrawPrimitiveUP(void)

{
  longlong *in_stack_00000030;
  
  if (DAT_1469f59b8 == 0) {
    DAT_1469f59b8 = FMemory::Malloc(0x4000000,0);
    *in_stack_00000030 = DAT_1469f59b8;
    return;
  }
  *in_stack_00000030 = DAT_1469f59b8;
  return;
}



// FUNCTION 1419c9dd0 FUN_1419c9dd0 body=364 status=ok
// SIG undefined FUN_1419c9dd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1419c9dd0(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_308 [32];
  undefined1 local_2e8 [656];
  longlong local_58 [8];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  FUN_141ed9160(param_2);
  if (*(char *)((longlong)param_2 + 0x10d) != '\0') {
    plVar6 = local_58;
    iVar9 = 0;
    plVar4 = param_2;
    do {
      if (*plVar4 == 0) break;
      *plVar6 = *plVar4;
      iVar9 = iVar9 + 1;
      plVar6 = plVar6 + 1;
      plVar4 = plVar4 + 3;
    } while (iVar9 < 8);
    uVar7 = (longlong)plVar6 - (longlong)local_58 >> 3;
    if ((int)uVar7 != 0) {
      (**(code **)(*param_1 + 0xd8))(param_1,4,local_58,uVar7 & 0xffffffff);
    }
  }
  FUN_1404999a0(local_2e8);
  FUN_141ebe4d0(param_2,local_2e8);
  (**(code **)(*param_1 + 600))(param_1,local_2e8);
  lVar5 = 2;
  plVar6 = param_1 + 2;
  do {
    plVar8 = param_2;
    plVar4 = plVar6;
    lVar3 = plVar8[1];
    *plVar4 = *plVar8;
    plVar4[1] = lVar3;
    lVar3 = plVar8[3];
    plVar4[2] = plVar8[2];
    plVar4[3] = lVar3;
    lVar3 = plVar8[5];
    plVar4[4] = plVar8[4];
    plVar4[5] = lVar3;
    lVar3 = plVar8[7];
    plVar4[6] = plVar8[6];
    plVar4[7] = lVar3;
    lVar3 = plVar8[9];
    plVar4[8] = plVar8[8];
    plVar4[9] = lVar3;
    lVar3 = plVar8[0xb];
    plVar4[10] = plVar8[10];
    plVar4[0xb] = lVar3;
    lVar3 = plVar8[0xd];
    plVar4[0xc] = plVar8[0xc];
    plVar4[0xd] = lVar3;
    lVar3 = plVar8[0xf];
    plVar4[0xe] = plVar8[0xe];
    plVar4[0xf] = lVar3;
    lVar5 = lVar5 + -1;
    plVar6 = plVar4 + 0x10;
    param_2 = plVar8 + 0x10;
  } while (lVar5 != 0);
  lVar5 = plVar8[0x11];
  plVar4[0x10] = plVar8[0x10];
  plVar4[0x11] = lVar5;
  lVar5 = plVar8[0x13];
  plVar4[0x12] = plVar8[0x12];
  plVar4[0x13] = lVar5;
  lVar5 = plVar8[0x15];
  plVar4[0x14] = plVar8[0x14];
  plVar4[0x15] = lVar5;
  lVar5 = plVar8[0x17];
  plVar4[0x16] = plVar8[0x16];
  plVar4[0x17] = lVar5;
  uVar1 = *(undefined4 *)((longlong)plVar8 + 0xc4);
  lVar5 = plVar8[0x19];
  uVar2 = *(undefined4 *)((longlong)plVar8 + 0xcc);
  *(int *)(plVar4 + 0x18) = (int)plVar8[0x18];
  *(undefined4 *)((longlong)plVar4 + 0xc4) = uVar1;
  *(int *)(plVar4 + 0x19) = (int)lVar5;
  *(undefined4 *)((longlong)plVar4 + 0xcc) = uVar2;
  uVar1 = *(undefined4 *)((longlong)plVar8 + 0xd4);
  lVar5 = plVar8[0x1b];
  uVar2 = *(undefined4 *)((longlong)plVar8 + 0xdc);
  *(int *)(plVar4 + 0x1a) = (int)plVar8[0x1a];
  *(undefined4 *)((longlong)plVar4 + 0xd4) = uVar1;
  *(int *)(plVar4 + 0x1b) = (int)lVar5;
  *(undefined4 *)((longlong)plVar4 + 0xdc) = uVar2;
  FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2e8);
  return;
}



// FUNCTION 1419c9f80 FUN_1419c9f80 body=347 status=ok
// SIG undefined FUN_1419c9f80(void)

void FUN_1419c9f80(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_74;
  int local_68 [10];
  int local_40;
  int local_3c;
  
  lVar4 = (**(code **)(*param_2 + 0x20))();
  if ((lVar4 == 0) ||
     (iVar6 = *(int *)(param_4 + 0x1c),
     iVar6 + (iVar6 / 6 + (iVar6 >> 0x1f) +
             (int)(((longlong)iVar6 / 6 + ((longlong)iVar6 >> 0x3f) & 0xffffffffU) >> 0x1f)) * -6 !=
     0)) {
    iVar6 = *(int *)(param_4 + 0x1c);
    bVar3 = false;
  }
  else {
    bVar3 = true;
    iVar6 = iVar6 / 6;
  }
  iVar7 = 1;
  if (bVar3) {
    iVar7 = 6;
  }
  local_74 = 0;
  if (0 < iVar6) {
    do {
      iVar1 = *(int *)(param_4 + 0x14);
      iVar2 = *(int *)(param_4 + 0x18);
      iVar5 = 0;
      do {
        local_68[0] = 0;
        if (lVar4 != 0) {
          local_68[0] = iVar5;
        }
        local_68[9] = *(undefined4 *)(param_4 + 0xc);
        local_68[1] = -1;
        local_68[2] = -1;
        local_68[3] = -1;
        local_68[4] = -1;
        local_68[5] = -1;
        local_68[6] = -1;
        local_68[7] = -1;
        local_68[8] = -1;
        local_40 = iVar1 + local_74;
        local_3c = iVar2 + local_74;
        (**(code **)(*param_1 + 0xb8))(param_1,0xffffffffffffffff,param_3,local_68);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar7);
      local_74 = local_74 + 1;
    } while (local_74 < iVar6);
  }
  return;
}



// FUNCTION 1419ca0e0 FUN_1419ca0e0 body=92 status=ok
// SIG undefined FUN_1419ca0e0(void)

undefined8 * FUN_1419ca0e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new();
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *puVar1 = &PTR_FUN_144d838c0;
    *(undefined2 *)(puVar1 + 2) = 0x100;
    puVar2 = puVar1;
  }
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1419ca140 FUN_1419ca140 body=92 status=ok
// SIG undefined FUN_1419ca140(void)

undefined8 * FUN_1419ca140(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new();
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *puVar1 = &PTR_FUN_143f3ece8;
    *(undefined2 *)(puVar1 + 2) = 0x100;
    puVar2 = puVar1;
  }
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1419ca1a0 RHICreateComputeFence body=108 status=ok
// SIG undefined RHICreateComputeFence(void)

undefined8 *
FDynamicRHI::RHICreateComputeFence(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    *puVar2 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar2 + 1) = 0;
    *puVar2 = &PTR_FUN_144d83b00;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined2 *)(puVar2 + 2) = 0x100;
    puVar2[3] = uVar1;
    *(undefined1 *)(puVar2 + 4) = 0;
  }
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1419ca210 RHICreateComputePipelineState body=110 status=ok
// SIG undefined RHICreateComputePipelineState(void)

undefined8 *
FDynamicRHI::RHICreateComputePipelineState(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144d83b80;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined2 *)(puVar1 + 2) = 0x100;
    puVar1[3] = param_3;
    if (param_3 != 0) {
      LOCK();
      *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
      UNLOCK();
    }
  }
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1419ca280 RHICreateComputePipelineState body=27 status=ok
// SIG undefined RHICreateComputePipelineState(void)

undefined8 FDynamicRHI::RHICreateComputePipelineState(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x108))();
  return param_2;
}



// FUNCTION 1419ca2a0 RHICreateComputeShader body=102 status=ok
// SIG undefined RHICreateComputeShader(void)

undefined8 * FNullDynamicRHI::RHICreateComputeShader(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined2 *)(puVar1 + 2) = 0x100;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    *puVar1 = &PTR_FUN_144d838d8;
    puVar1[6] = 0;
  }
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1419ca310 RHICreateDomainShader body=115 status=ok
// SIG undefined RHICreateDomainShader(void)

undefined8 * FNullDynamicRHI::RHICreateDomainShader(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new();
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined2 *)(puVar1 + 2) = 0x100;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    *puVar1 = &PTR_FUN_144d838d0;
    puVar2 = puVar1;
  }
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1419ca390 FUN_1419ca390 body=104 status=ok
// SIG undefined FUN_1419ca390(void)

undefined8 * FUN_1419ca390(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x20);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    *puVar2 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar2 + 1) = 0;
    *puVar2 = &PTR_FUN_144d83ad8;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined2 *)(puVar2 + 2) = 0x100;
    puVar2[3] = uVar1;
  }
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1419ca400 RHICreateGraphicsPipelineState body=246 status=ok
// SIG undefined RHICreateGraphicsPipelineState(void)

undefined8 *
FDynamicRHI::RHICreateGraphicsPipelineState
          (undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_141eba310(0xd0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar2 + 1) = 0;
    *puVar2 = &PTR_FUN_144d83b78;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined2 *)(puVar2 + 2) = 0x100;
    uVar1 = param_3[1];
    puVar2[3] = *param_3;
    puVar2[4] = uVar1;
    uVar1 = param_3[3];
    puVar2[5] = param_3[2];
    puVar2[6] = uVar1;
    uVar1 = param_3[5];
    puVar2[7] = param_3[4];
    puVar2[8] = uVar1;
    uVar1 = param_3[7];
    puVar2[9] = param_3[6];
    puVar2[10] = uVar1;
    uVar1 = param_3[9];
    puVar2[0xb] = param_3[8];
    puVar2[0xc] = uVar1;
    uVar1 = param_3[0xb];
    puVar2[0xd] = param_3[10];
    puVar2[0xe] = uVar1;
    uVar1 = param_3[0xd];
    puVar2[0xf] = param_3[0xc];
    puVar2[0x10] = uVar1;
    uVar1 = param_3[0xf];
    puVar2[0x11] = param_3[0xe];
    puVar2[0x12] = uVar1;
    uVar1 = param_3[0x11];
    puVar2[0x13] = param_3[0x10];
    puVar2[0x14] = uVar1;
    uVar1 = param_3[0x13];
    puVar2[0x15] = param_3[0x12];
    puVar2[0x16] = uVar1;
    uVar1 = param_3[0x15];
    puVar2[0x17] = param_3[0x14];
    puVar2[0x18] = uVar1;
    puVar2[0x19] = param_3[0x16];
  }
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1419ca500 FUN_1419ca500 body=27 status=ok
// SIG undefined FUN_1419ca500(void)

undefined8 FUN_1419ca500(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0xf8))();
  return param_2;
}



// FUNCTION 1419ca520 RHICreateIndexBuffer body=150 status=ok
// SIG undefined RHICreateIndexBuffer(void)

undefined8 *
FNullDynamicRHI::RHICreateIndexBuffer
          (undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,longlong param_6)

{
  undefined8 *puVar1;
  
  if (*(longlong **)(param_6 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_6 + 8) + 0x10))();
  }
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR_FUN_144d838e0;
    *(undefined4 *)(puVar1 + 4) = param_5;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined2 *)(puVar1 + 2) = 0x100;
    *(undefined4 *)(puVar1 + 3) = param_3;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = param_4;
  }
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1419ca5c0 FUN_1419ca5c0 body=96 status=ok
// SIG undefined FUN_1419ca5c0(void)

undefined8 * FUN_1419ca5c0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined2 *)(puVar1 + 2) = 0x100;
    *puVar1 = &PTR_FUN_144d83b58;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined1 *)(puVar1 + 5) = 0;
  }
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1419ca620 RHICreateTexture2D body=205 status=ok
// SIG undefined RHICreateTexture2D(void)

undefined8 *
FNullDynamicRHI::RHICreateTexture2D
          (undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,byte param_5
          ,undefined4 param_6,undefined4 param_7,undefined4 param_8,longlong param_9)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)operator_new(0x68);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar2 + 1) = 0;
    *puVar2 = &PTR_FUN_144d838f0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined2 *)(puVar2 + 2) = 0x100;
    puVar2[3] = 0;
    uVar1 = *(undefined8 *)(param_9 + 0x18);
    puVar2[4] = *(undefined8 *)(param_9 + 0x10);
    puVar2[5] = uVar1;
    *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_9 + 0x20);
    *(undefined4 *)((longlong)puVar2 + 0x34) = param_6;
    *(undefined4 *)(puVar2 + 7) = param_7;
    *(uint *)((longlong)puVar2 + 0x3c) = (uint)param_5;
    *(undefined4 *)(puVar2 + 8) = param_8;
    puVar2[9] = puVar2 + 10;
    puVar2[10] = 0xc7efffffe0000000;
    puVar2[0xb] = 0;
    *puVar2 = &PTR_FUN_144d83940;
    *(undefined4 *)(puVar2 + 0xc) = param_3;
    *(undefined4 *)((longlong)puVar2 + 100) = param_4;
    puVar3 = puVar2;
  }
  *param_2 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1419ca6f0 FUN_1419ca6f0 body=216 status=ok
// SIG undefined FUN_1419ca6f0(void)

undefined8 *
FUN_1419ca6f0(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,byte param_6,undefined4 param_7,undefined4 param_8,longlong param_9)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)operator_new(0x70);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar2 + 1) = 0;
    *puVar2 = &PTR_FUN_144d838f0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined2 *)(puVar2 + 2) = 0x100;
    puVar2[3] = 0;
    uVar1 = *(undefined8 *)(param_9 + 0x18);
    puVar2[4] = *(undefined8 *)(param_9 + 0x10);
    puVar2[5] = uVar1;
    *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_9 + 0x20);
    *(undefined4 *)((longlong)puVar2 + 0x34) = param_7;
    *(uint *)((longlong)puVar2 + 0x3c) = (uint)param_6;
    *(undefined4 *)(puVar2 + 8) = param_8;
    puVar2[9] = puVar2 + 10;
    *(undefined4 *)(puVar2 + 7) = 1;
    puVar2[10] = 0xc7efffffe0000000;
    puVar2[0xb] = 0;
    *puVar2 = &PTR_FUN_144d83998;
    *(undefined4 *)(puVar2 + 0xd) = param_5;
    *(undefined4 *)(puVar2 + 0xc) = param_3;
    *(undefined4 *)((longlong)puVar2 + 100) = param_4;
    puVar3 = puVar2;
  }
  *param_2 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1419ca7d0 FUN_1419ca7d0 body=216 status=ok
// SIG undefined FUN_1419ca7d0(void)

undefined8 *
FUN_1419ca7d0(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,byte param_6,undefined4 param_7,undefined4 param_8,longlong param_9)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)operator_new(0x70);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar2 + 1) = 0;
    *puVar2 = &PTR_FUN_144d838f0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined2 *)(puVar2 + 2) = 0x100;
    puVar2[3] = 0;
    uVar1 = *(undefined8 *)(param_9 + 0x18);
    puVar2[4] = *(undefined8 *)(param_9 + 0x10);
    puVar2[5] = uVar1;
    *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_9 + 0x20);
    *(undefined4 *)((longlong)puVar2 + 0x34) = param_7;
    *(uint *)((longlong)puVar2 + 0x3c) = (uint)param_6;
    *(undefined4 *)(puVar2 + 8) = param_8;
    puVar2[9] = puVar2 + 10;
    *(undefined4 *)(puVar2 + 7) = 1;
    puVar2[10] = 0xc7efffffe0000000;
    puVar2[0xb] = 0;
    *puVar2 = &PTR_FUN_144d839e8;
    *(undefined4 *)(puVar2 + 0xd) = param_5;
    *(undefined4 *)(puVar2 + 0xc) = param_3;
    *(undefined4 *)((longlong)puVar2 + 100) = param_4;
    puVar3 = puVar2;
  }
  *param_2 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1419ca8b0 RHICreateTextureCube body=202 status=ok
// SIG undefined RHICreateTextureCube(void)

undefined8 *
FNullDynamicRHI::RHICreateTextureCube
          (undefined8 param_1,undefined8 *param_2,undefined4 param_3,byte param_4,undefined4 param_5
          ,undefined4 param_6,longlong param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)operator_new(0x68);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar2 + 1) = 0;
    *puVar2 = &PTR_FUN_144d838f0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined2 *)(puVar2 + 2) = 0x100;
    puVar2[3] = 0;
    uVar1 = *(undefined8 *)(param_7 + 0x18);
    puVar2[4] = *(undefined8 *)(param_7 + 0x10);
    puVar2[5] = uVar1;
    *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_7 + 0x20);
    *(undefined4 *)((longlong)puVar2 + 0x34) = param_5;
    *(uint *)((longlong)puVar2 + 0x3c) = (uint)param_4;
    *(undefined4 *)(puVar2 + 8) = param_6;
    puVar2[9] = puVar2 + 10;
    *(undefined4 *)(puVar2 + 7) = 1;
    puVar2[10] = 0xc7efffffe0000000;
    puVar2[0xb] = 0;
    *puVar2 = &PTR_FUN_144d83a38;
    *(undefined4 *)(puVar2 + 0xc) = param_3;
    puVar3 = puVar2;
  }
  *param_2 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1419ca980 RHICreateTextureCubeArray body=189 status=ok
// SIG undefined RHICreateTextureCubeArray(void)

undefined8 *
FNullDynamicRHI::RHICreateTextureCubeArray
          (undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,byte param_5
          ,undefined4 param_6,undefined4 param_7,longlong param_8)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)operator_new(0x68);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar2 + 1) = 0;
    *puVar2 = &PTR_FUN_144d838f0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined2 *)(puVar2 + 2) = 0x100;
    puVar2[3] = 0;
    uVar1 = *(undefined8 *)(param_8 + 0x18);
    puVar2[4] = *(undefined8 *)(param_8 + 0x10);
    puVar2[5] = uVar1;
    *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_8 + 0x20);
    *(undefined4 *)((longlong)puVar2 + 0x34) = param_6;
    *(uint *)((longlong)puVar2 + 0x3c) = (uint)param_5;
    *(undefined4 *)(puVar2 + 8) = param_7;
    puVar2[9] = puVar2 + 10;
    *(undefined4 *)(puVar2 + 7) = 1;
    puVar2[10] = 0xc7efffffe0000000;
    puVar2[0xb] = 0;
    *puVar2 = &PTR_FUN_144d83a38;
    *(undefined4 *)(puVar2 + 0xc) = param_3;
    puVar3 = puVar2;
  }
  *param_2 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1419caa40 RHICreateTextureReference body=163 status=ok
// SIG undefined RHICreateTextureReference(void)

undefined8 * FNullDynamicRHI::RHICreateTextureReference(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(0x68);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined2 *)(puVar1 + 2) = 0x100;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[9] = puVar1 + 10;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    puVar1[10] = 0xc7efffffe0000000;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144d83a88;
    puVar2 = puVar1;
  }
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1419caaf0 RHICreateUniformBuffer body=106 status=ok
// SIG undefined RHICreateUniformBuffer(void)

undefined8 *
FNullDynamicRHI::RHICreateUniformBuffer
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR_FUN_144d838e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined2 *)(puVar1 + 2) = 0x100;
    puVar1[3] = param_4;
    *(undefined4 *)(puVar1 + 4) = *param_4;
  }
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1419cab60 RHICreateVertexBuffer body=136 status=ok
// SIG undefined RHICreateVertexBuffer(void)

undefined8 *
FNullDynamicRHI::RHICreateVertexBuffer
          (undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
          longlong param_5)

{
  undefined8 *puVar1;
  
  if (*(longlong **)(param_5 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_5 + 8) + 0x10))();
  }
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR_FUN_144d838e8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined2 *)(puVar1 + 2) = 0x100;
    *(undefined4 *)(puVar1 + 3) = param_3;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = param_4;
  }
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1419cabf0 FUN_1419cabf0 body=92 status=ok
// SIG undefined FUN_1419cabf0(void)

undefined8 * FUN_1419cabf0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new();
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *puVar1 = &PTR_FUN_144d83b18;
    *(undefined2 *)(puVar1 + 2) = 0x100;
    puVar2 = puVar1;
  }
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1419cac50 RHIEndRenderPass body=140 status=ok
// SIG undefined RHIEndRenderPass(void)

void IRHICommandContext::RHIEndRenderPass(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = 0;
  plVar2 = param_1;
  do {
    if (plVar2[2] == 0) break;
    lVar1 = plVar2[3];
    if (lVar1 != 0) {
      (**(code **)(*param_1 + 0xb8))(param_1,plVar2[2],lVar1,param_1 + 0x1d);
    }
    lVar3 = lVar3 + 1;
    plVar2 = plVar2 + 3;
  } while (lVar3 < 8);
  if ((param_1[0x1a] != 0) && (param_1[0x1b] != 0)) {
    (**(code **)(*param_1 + 0xb8))(param_1,param_1[0x1a],param_1[0x1b],param_1 + 0x1d);
  }
  return;
}



// FUNCTION 1419cace0 FUN_1419cace0 body=53 status=ok
// SIG undefined FUN_1419cace0(void)

undefined1 FUN_1419cace0(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x420))();
  if (*param_4 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 1419cad40 RHIGetViewportBackBuffer body=197 status=ok
// SIG undefined RHIGetViewportBackBuffer(void)

undefined8 * FNullDynamicRHI::RHIGetViewportBackBuffer(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(0x68);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined2 *)(puVar1 + 2) = 0x100;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[9] = puVar1 + 10;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 1;
    *(undefined4 *)(puVar1 + 7) = 1;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 2;
    *(undefined4 *)(puVar1 + 8) = 1;
    *(undefined4 *)(puVar1 + 6) = 0;
    puVar1[10] = 0xc7efffffe0000000;
    puVar1[0xb] = 0;
    *puVar1 = &PTR_FUN_144d83940;
    *(undefined4 *)(puVar1 + 0xc) = 1;
    *(undefined4 *)((longlong)puVar1 + 100) = 1;
    puVar2 = puVar1;
  }
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1419cae10 DefaultInputPinProperties body=27 status=ok
// SIG undefined DefaultInputPinProperties(void)

undefined8 UPCGSettings::DefaultInputPinProperties(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x348))();
  return param_2;
}



// FUNCTION 1419cae30 RHILockIndexBuffer body=40 status=ok
// SIG undefined RHILockIndexBuffer(void)

void FNullDynamicRHI::RHILockIndexBuffer(void)

{
  if (DAT_1469f59b8 == 0) {
    DAT_1469f59b8 = FMemory::Malloc(0x4000000,0);
  }
  return;
}



// FUNCTION 1419cae60 RHILockTexture2D body=51 status=ok
// SIG undefined RHILockTexture2D(void)

void FNullDynamicRHI::RHILockTexture2D(void)

{
  undefined4 *in_stack_00000028;
  
  *in_stack_00000028 = 0;
  if (DAT_1469f59b8 == 0) {
    DAT_1469f59b8 = FMemory::Malloc(0x4000000,0);
  }
  return;
}



// FUNCTION 1419caea0 RHILockTexture2DArray body=51 status=ok
// SIG undefined RHILockTexture2DArray(void)

void FNullDynamicRHI::RHILockTexture2DArray(void)

{
  undefined4 *in_stack_00000030;
  
  *in_stack_00000030 = 0;
  if (DAT_1469f59b8 == 0) {
    DAT_1469f59b8 = FMemory::Malloc(0x4000000,0);
  }
  return;
}



// FUNCTION 1419caee0 FUN_1419caee0 body=56 status=ok
// SIG undefined FUN_1419caee0(void)

void FUN_1419caee0(void)

{
  undefined4 *in_stack_00000028;
  undefined4 *in_stack_00000030;
  
  *in_stack_00000028 = 0;
  *in_stack_00000030 = 0;
  if (DAT_1469f59b8 == 0) {
    DAT_1469f59b8 = FMemory::Malloc(0x4000000,0);
  }
  return;
}



// FUNCTION 1419caf20 RHILockTextureCubeFace body=51 status=ok
// SIG undefined RHILockTextureCubeFace(void)

void FNullDynamicRHI::RHILockTextureCubeFace(void)

{
  undefined4 *in_stack_00000038;
  
  *in_stack_00000038 = 0;
  if (DAT_1469f59b8 == 0) {
    DAT_1469f59b8 = FMemory::Malloc(0x4000000,0);
  }
  return;
}



// FUNCTION 1419caf60 RHIReadSurfaceData body=99 status=ok
// SIG undefined RHIReadSurfaceData(void)

void FNullDynamicRHI::RHIReadSurfaceData
               (undefined8 param_1,undefined8 param_2,int *param_3,longlong *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = param_4[1];
  iVar3 = (param_3[3] - param_3[1]) * (param_3[2] - *param_3);
  iVar2 = (int)lVar1 + iVar3;
  *(int *)(param_4 + 1) = iVar2;
  if (*(int *)((longlong)param_4 + 0xc) < iVar2) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_4);
  }
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*param_4 + (longlong)(int)lVar1 * 4),0,(longlong)iVar3 << 2);
  return;
}



// FUNCTION 1419cb010 RHISetGraphicsPipelineState body=291 status=ok
// SIG undefined RHISetGraphicsPipelineState(void)

void IRHICommandContext::RHISetGraphicsPipelineState(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  bool bVar5;
  undefined8 *local_res10;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  (**(code **)(*DAT_146ab6358 + 0xe8))
            (DAT_146ab6358,&local_res10,*(undefined8 *)(param_2 + 0x18),
             *(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),
             *(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38),
             *(undefined8 *)(param_2 + 0x40));
  plVar4 = (longlong *)(param_1 + 8);
  (*(code *)**(undefined8 **)(param_1 + 8))(plVar4,local_res10);
  if (local_res10 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_res10 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(local_res10 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar3 = FOutputDevice::CanBeUsedOnAnyThread(), cVar3 == '\0')))
         ) {
        LOCK();
        bVar5 = *(int *)((longlong)local_res10 + 0xc) == 0;
        if (bVar5) {
          *(int *)((longlong)local_res10 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar5) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,local_res10);
        }
      }
      else {
        (**(code **)*local_res10)(local_res10,1);
      }
    }
  }
  (**(code **)(*plVar4 + 8))(plVar4,*(undefined8 *)(param_2 + 0x58),0);
  (**(code **)(*plVar4 + 0x10))(plVar4,*(undefined8 *)(param_2 + 0x50));
  local_18 = 0x3f800000;
  uStack_14 = 0x3f800000;
  uStack_10 = 0x3f800000;
  uStack_c = 0x3f800000;
  (**(code **)(*plVar4 + 0x18))(plVar4,*(undefined8 *)(param_2 + 0x48),&local_18);
  if (DAT_146ab62ec != '\0') {
    (**(code **)(*plVar4 + 0x20))(plVar4,*(undefined1 *)(param_2 + 0x60));
  }
  return;
}



// FUNCTION 1419cb150 FUN_1419cb150 body=63 status=ok
// SIG undefined FUN_1419cb150(void)

void FUN_1419cb150(longlong *param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_res18 [2];
  
  if (param_2 != 0) {
    if ((((byte)param_2 & 0xf) == 2) || (((byte)param_2 & 0xf0) == 0x20)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    local_res18[0] = param_3;
    (**(code **)(*param_1 + 0xd8))(param_1,uVar1,local_res18,1);
  }
  return;
}



// FUNCTION 1419cb190 FUN_1419cb190 body=23 status=ok
// SIG undefined FUN_1419cb190(void)

void FUN_1419cb190(longlong *param_1)

{
  (**(code **)(*param_1 + 200))();
  return;
}



// FUNCTION 1419cb1c0 RHITransitionResources body=129 status=ok
// SIG undefined RHITransitionResources(void)

void IRHICommandContext::RHITransitionResources
               (longlong *param_1,int param_2,undefined8 *param_3,uint param_4)

{
  ulonglong uVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_2 == 0) {
    local_38 = 0xffffffff00000000;
    uStack_30 = 0xffffffffffffffff;
    local_18 = 0xffffffff;
    uStack_10 = 0;
    local_28 = 0xffffffffffffffff;
    uStack_20 = 0xffffffffffffffff;
    if (0 < (int)param_4) {
      uVar1 = (ulonglong)param_4;
      do {
        (**(code **)(*param_1 + 0xb8))(param_1,*param_3,*param_3,&local_38);
        param_3 = param_3 + 1;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  return;
}



// FUNCTION 1419cb2d0 StartupModule body=342 status=ok
// SIG undefined StartupModule(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FShaderCoreModule::StartupModule(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_128 [32];
  longlong *local_108;
  int local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [208];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  FSHA1::FSHA1(local_e8);
  FSHA1::UpdateWithString(local_e8,L"GlobalShaderMap",0xf);
  FSHA1::Final(local_e8);
  FSHA1::GetHash(local_e8,&DAT_1469f5c20);
  FSHA1::~FSHA1(local_e8);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar1 = DAT_1468b1f88;
  local_108 = (longlong *)0x0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  local_100 = 2;
  local_108 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar2[1] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f3f090;
  }
  (**(code **)(*plVar1 + 0x40))(plVar1,local_f8,&local_108);
  if (local_100 != 0) {
    if (local_108 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_108 + 0x28))(local_108,0);
    if (local_108 != (longlong *)0x0) {
      local_108 = (longlong *)FMemory::Realloc(local_108,0,0);
    }
    local_100 = 0;
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free(local_108);
  }
  return;
}



// FUNCTION 1419cb430 TTuple<unsigned_int,FShaderStreamingCache><unsigned_int_const_&,FShaderStreamingCache,void> body=172 status=ok
// SIG undefined TTuple<unsigned_int,FShaderStreamingCache><unsigned_int_const_&,FShaderStreamingCache,void>(void)

undefined4 *
TTuple<unsigned_int,FShaderStreamingCache>::
TTuple<unsigned_int,FShaderStreamingCache><unsigned_int_const_&,FShaderStreamingCache,void>
          (undefined4 *param_1,undefined4 *param_2,longlong param_3)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  TSparseArray<TSetElement<TTuple<UEDCItem_*,FEDCItemData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::operator=(param_1 + 2,param_3);
  if (*(longlong *)(param_3 + 0x40) == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_1 + 0x10,(void *)(param_3 + 0x38),4);
  }
  if (*(longlong *)(param_1 + 0x12) != 0) {
    FMemory::Free();
  }
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 *)(param_3 + 0x40) = 0;
  param_1[0x14] = *(undefined4 *)(param_3 + 0x48);
  *(undefined4 *)(param_3 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1419cb4e0 operator<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>_TTuple<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_> body=247 status=ok
// SIG undefined operator<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>_TTuple<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
TKeyInitializer<FNetworkGUID_const_&>::
operator<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>_TTuple<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>
          (undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [8];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  *param_2 = *(undefined4 *)*param_1;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  param_2[0xe] = 0xffffffff;
  param_2[0xf] = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  param_2[0x14] = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 2,&local_78);
  lVar1 = local_38;
  if (local_38 == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_2 + 0x10,local_40,4);
  }
  if (*(longlong *)(param_2 + 0x12) != 0) {
    FMemory::Free();
  }
  *(longlong *)(param_2 + 0x12) = lVar1;
  param_2[0x14] = local_30;
  local_38 = 0;
  local_30 = 0;
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_78);
  return param_2;
}



// FUNCTION 1419cb5e0 operator<unsigned_int,FShaderStreamingCache>_TTuple<unsigned_int,FShaderStreamingCache> body=193 status=ok
// SIG undefined operator<unsigned_int,FShaderStreamingCache>_TTuple<unsigned_int,FShaderStreamingCache>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
TKeyInitializer<unsigned_int_const_&>::
operator<unsigned_int,FShaderStreamingCache>_TTuple<unsigned_int,FShaderStreamingCache>
          (undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  longlong local_68 [6];
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_68[2] = 0;
  local_68[3] = 0;
  local_30 = 0;
  local_20 = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[4] = 0;
  local_68[5] = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = 0;
  TTuple<unsigned_int,FShaderStreamingCache>::
  TTuple<unsigned_int,FShaderStreamingCache><unsigned_int_const_&,FShaderStreamingCache,void>
            (param_2,*param_1,local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_68,0);
  if (local_68[4] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1419cb6b0 FUN_1419cb6b0 body=177 status=ok
// SIG undefined FUN_1419cb6b0(void)

undefined8 * FUN_1419cb6b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = param_1[1];
  *param_2 = *(undefined8 *)*param_1;
  iVar2 = *(int *)(lVar3 + 0x100);
  *(int *)(param_2 + 0x21) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x10c) = 0;
  }
  else {
    FUN_141a09aa0(param_2 + 1,iVar2,0);
    puVar1 = (undefined1 *)((longlong)param_2 + 10);
    lVar3 = lVar3 - (longlong)(param_2 + 1);
    do {
      puVar1[-2] = puVar1[lVar3 + -2];
      puVar1[-1] = puVar1[lVar3 + -1];
      *puVar1 = puVar1[lVar3];
      puVar1[1] = puVar1[lVar3 + 1];
      *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(puVar1 + lVar3 + 2);
      *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(puVar1 + lVar3 + 4);
      puVar1 = puVar1 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return param_2;
}



// FUNCTION 1419cb770 operator<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>_TTuple<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_> body=257 status=ok
// SIG undefined operator<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>_TTuple<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
TKeyInitializer<FShaderCacheKey_const_&>::
operator<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>_TTuple<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>
          (longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [8];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  puVar1 = (undefined4 *)*param_1;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  local_50 = 0;
  local_48 = 0xffffffff;
  *param_2 = *puVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  local_44 = 0;
  uVar2 = puVar1[5];
  uVar3 = puVar1[6];
  uVar4 = puVar1[7];
  local_38 = 0;
  local_30 = 0;
  param_2[4] = puVar1[4];
  param_2[5] = uVar2;
  param_2[6] = uVar3;
  param_2[7] = uVar4;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  param_2[0x14] = 0xffffffff;
  param_2[0x15] = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  param_2[0x1a] = 0;
  TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 8,&local_78);
  lVar5 = local_38;
  if (local_38 == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_2 + 0x16,local_40,4);
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
  }
  *(longlong *)(param_2 + 0x18) = lVar5;
  param_2[0x1a] = local_30;
  local_38 = 0;
  local_30 = 0;
  TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_78);
  return param_2;
}



// FUNCTION 1419cb880 Append<FDefaultSetAllocator> body=540 status=ok
// SIG undefined Append<FDefaultSetAllocator>(void)

void TSet<FShaderCodeLibraryPipeline,DefaultKeyFuncs<FShaderCodeLibraryPipeline,0>,FDefaultSetAllocator>
     ::Append<FDefaultSetAllocator>(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 local_res8 [8];
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
  
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34) <
      (((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) - *(int *)(param_1 + 0x34)) +
      *(int *)(param_1 + 8)) {
    FUN_141a09700();
  }
  uVar2 = *(uint *)(param_2 + 5);
  puVar1 = (uint *)(param_2 + 2);
  uStack_94 = 1;
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar3 = *puVar9;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar5 = local_98 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar5;
      if (bVar4) goto LAB_1419cb96d;
      uVar3 = puVar9[lVar7 + 1];
    }
    uStack_94 = -uVar3 & uVar3;
    iVar5 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_84 = (iStack_80 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_1419cb96d:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_2 + 5);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar8 = uVar3 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = param_2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar3;
  if (uVar3 != uVar2) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar6 = puVar9[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar5 = (int)uVar3 >> 5;
    while (uVar6 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1419cba33;
      uVar6 = puVar9[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar6 = -uVar6 & uVar6;
    iVar5 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_84 = (uVar8 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_1419cba33:
      uStack_84 = uVar2;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    Emplace<FShaderCodeLibraryPipeline_const_&>
              (param_1,local_res8,(longlong)(int)uStack_5c * 0x70 + *param_2,0);
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 1419cbaa0 FUN_1419cbaa0 body=543 status=ok
// SIG undefined FUN_1419cbaa0(void)

void FUN_1419cbaa0(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 local_res8 [8];
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
  
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34) <
      (((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) - *(int *)(param_1 + 0x34)) +
      *(int *)(param_1 + 8)) {
    FUN_141a09870();
  }
  uVar2 = *(uint *)(param_2 + 5);
  puVar1 = (uint *)(param_2 + 2);
  uStack_94 = 1;
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar3 = *puVar9;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar5 = local_98 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar5;
      if (bVar4) goto LAB_1419cbb8d;
      uVar3 = puVar9[lVar7 + 1];
    }
    uStack_94 = -uVar3 & uVar3;
    iVar5 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_84 = (iStack_80 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_1419cbb8d:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_2 + 5);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar8 = uVar3 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = param_2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar3;
  if (uVar3 != uVar2) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar6 = puVar9[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar5 = (int)uVar3 >> 5;
    while (uVar6 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1419cbc53;
      uVar6 = puVar9[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar6 = -uVar6 & uVar6;
    iVar5 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_84 = (uVar8 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_1419cbc53:
      uStack_84 = uVar2;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    FUN_1419cc1a0(param_1,local_res8,(longlong)(int)uStack_5c * 0xac + *param_2,0);
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 1419cbcc0 FUN_1419cbcc0 body=169 status=ok
// SIG undefined FUN_1419cbcc0(void)

void FUN_1419cbcc0(longlong param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  
  *(int *)(param_1 + 0x100) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)(param_1 + 0x104) = 0;
    return;
  }
  FUN_141a09aa0(param_1,param_3 + param_5,param_4);
  if (param_3 != 0) {
    puVar1 = (undefined1 *)(param_1 + 2);
    param_2 = param_2 - param_1;
    do {
      puVar1[-2] = puVar1[param_2 + -2];
      puVar1[-1] = puVar1[param_2 + -1];
      *puVar1 = puVar1[param_2];
      puVar1[1] = puVar1[param_2 + 1];
      *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(puVar1 + param_2 + 2);
      *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(puVar1 + param_2 + 4);
      puVar1 = puVar1 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1419cbd70 FUN_1419cbd70 body=493 status=ok
// SIG undefined FUN_1419cbd70(void)

int * FUN_1419cbd70(longlong *param_1,int *param_2,uint *param_3,undefined1 *param_4)

{
  uint *puVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar1 = local_30 + 2;
  *param_2 = local_38[0];
  *local_30 = *param_3;
  puVar1[0] = 0;
  puVar1[1] = 0;
  local_30[4] = 0;
  local_30[5] = 0;
  local_30[10] = 0;
  local_30[0xb] = 0;
  local_30[0xc] = 0;
  local_30[0xd] = 0;
  local_30[0xe] = 0xffffffff;
  local_30[0xf] = 0;
  local_30[0x12] = 0;
  local_30[0x13] = 0;
  local_30[0x14] = 0;
  FUN_1419daec0(puVar1,param_3 + 2);
  local_30[0x16] = 0xffffffff;
  bVar7 = false;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)((longlong)iVar4 * 0x60 + *param_1) == *local_30) goto LAB_1419cbe5f;
          iVar4 = *(int *)((longlong)iVar4 * 0x60 + 0x58 + *param_1);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_1419cbe5f:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      _Dst = (void *)((longlong)iVar4 * 0x60 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x58);
      TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar4;
      goto LAB_1419cbf33;
    }
  }
  cVar2 = TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)param_1[9] - 1U & *local_30;
    local_30[0x17] = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    local_30[0x16] =
         *(uint *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_1419cbf33:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 1419cbf60 Emplace<FShaderCodeLibraryPipeline_const_&> body=572 status=ok
// SIG undefined Emplace<FShaderCodeLibraryPipeline_const_&>(void)

int * TSet<FShaderCodeLibraryPipeline,DefaultKeyFuncs<FShaderCodeLibraryPipeline,0>,FDefaultSetAllocator>
      ::Emplace<FShaderCodeLibraryPipeline_const_&>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  undefined4 uVar17;
  bool bVar18;
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<FShaderCodeLibraryPipeline>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  uVar7 = *param_3;
  uVar8 = param_3[1];
  uVar17 = 0xffffffff;
  bVar18 = false;
  *param_2 = local_38[0];
  *local_30 = uVar7;
  local_30[1] = uVar8;
  uVar7 = param_3[3];
  local_30[2] = param_3[2];
  local_30[3] = uVar7;
  uVar7 = param_3[5];
  local_30[4] = param_3[4];
  local_30[5] = uVar7;
  uVar7 = param_3[7];
  local_30[6] = param_3[6];
  local_30[7] = uVar7;
  uVar7 = param_3[9];
  local_30[8] = param_3[8];
  local_30[9] = uVar7;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x54);
  uVar5 = *(undefined4 *)(param_3 + 0xb);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x5c);
  *(undefined4 *)(local_30 + 10) = *(undefined4 *)(param_3 + 10);
  *(undefined4 *)((longlong)local_30 + 0x54) = uVar4;
  *(undefined4 *)(local_30 + 0xb) = uVar5;
  *(undefined4 *)((longlong)local_30 + 0x5c) = uVar6;
  local_30[0xc] = param_3[0xc];
  *(undefined4 *)(local_30 + 0xd) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar16 = -1;
    iVar14 = iVar16;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar10 = ::GetTypeHash(local_30);
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar10) * 4)
      ;
      if (iVar10 != -1) {
        lVar2 = *param_1;
        do {
          lVar15 = (longlong)iVar10 * 0x70 + lVar2;
          cVar9 = ::operator==(lVar15,local_30);
          iVar14 = iVar10;
          if (cVar9 != '\0') break;
          iVar10 = *(int *)(lVar15 + 0x68);
          iVar14 = iVar16;
        } while (iVar10 != -1);
      }
    }
    bVar18 = iVar14 != -1;
    if (bVar18) {
      ::_guard_xfg_dispatch_icall_nop((void *)((longlong)iVar14 * 0x70 + *param_1),local_30,0x68);
      iVar16 = *param_2;
      bVar3 = (byte)iVar16 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x70 + *param_1) = iVar16;
      }
      puVar13 = (undefined4 *)((longlong)iVar16 * 0x70 + *param_1);
      *puVar13 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar17 = (undefined4)param_1[6];
      }
      puVar13[1] = uVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar16;
      plVar12 = (longlong *)param_1[4];
      *param_2 = iVar14;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar12 +
                       (longlong)((int)(iVar16 + (iVar16 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1419cc16b;
    }
  }
  cVar9 = ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar9 == '\0') {
    iVar14 = *param_2;
    uVar11 = ::GetTypeHash(local_30);
    uVar11 = (int)param_1[9] - 1U & uVar11;
    *(uint *)((longlong)local_30 + 0x6c) = uVar11;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 0xd) =
         *(undefined4 *)
          ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         iVar14;
  }
LAB_1419cc16b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar18;
  }
  return param_2;
}



// FUNCTION 1419cc1a0 FUN_1419cc1a0 body=644 status=ok
// SIG undefined FUN_1419cc1a0(void)

int * FUN_1419cc1a0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  undefined4 uVar17;
  bool bVar18;
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  uVar7 = *param_3;
  uVar8 = param_3[1];
  uVar17 = 0xffffffff;
  bVar18 = false;
  *param_2 = local_38[0];
  *local_30 = uVar7;
  local_30[1] = uVar8;
  uVar7 = param_3[3];
  local_30[2] = param_3[2];
  local_30[3] = uVar7;
  uVar7 = param_3[5];
  local_30[4] = param_3[4];
  local_30[5] = uVar7;
  uVar7 = param_3[7];
  local_30[6] = param_3[6];
  local_30[7] = uVar7;
  uVar7 = param_3[9];
  local_30[8] = param_3[8];
  local_30[9] = uVar7;
  uVar7 = param_3[0xb];
  local_30[10] = param_3[10];
  local_30[0xb] = uVar7;
  uVar7 = param_3[0xd];
  local_30[0xc] = param_3[0xc];
  local_30[0xd] = uVar7;
  uVar7 = param_3[0xf];
  local_30[0xe] = param_3[0xe];
  local_30[0xf] = uVar7;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x84);
  uVar5 = *(undefined4 *)(param_3 + 0x11);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x8c);
  *(undefined4 *)(local_30 + 0x10) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((longlong)local_30 + 0x84) = uVar4;
  *(undefined4 *)(local_30 + 0x11) = uVar5;
  *(undefined4 *)((longlong)local_30 + 0x8c) = uVar6;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x94);
  uVar5 = *(undefined4 *)(param_3 + 0x13);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x9c);
  *(undefined4 *)(local_30 + 0x12) = *(undefined4 *)(param_3 + 0x12);
  *(undefined4 *)((longlong)local_30 + 0x94) = uVar4;
  *(undefined4 *)(local_30 + 0x13) = uVar5;
  *(undefined4 *)((longlong)local_30 + 0x9c) = uVar6;
  *(undefined4 *)(local_30 + 0x14) = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)((longlong)local_30 + 0xa4) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar16 = -1;
    iVar14 = iVar16;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar10 = GetTypeHash(local_30);
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar10) * 4)
      ;
      if (iVar10 != -1) {
        lVar2 = *param_1;
        do {
          lVar15 = (longlong)iVar10 * 0xac + lVar2;
          cVar9 = operator==(lVar15,local_30);
          iVar14 = iVar10;
          if (cVar9 != '\0') break;
          iVar10 = *(int *)(lVar15 + 0xa4);
          iVar14 = iVar16;
        } while (iVar10 != -1);
      }
    }
    bVar18 = iVar14 != -1;
    if (bVar18) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar14 * 0xac + *param_1),local_30,0xa4);
      iVar16 = *param_2;
      bVar3 = (byte)iVar16 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0xac + *param_1) = iVar16;
      }
      puVar13 = (undefined4 *)((longlong)iVar16 * 0xac + *param_1);
      *puVar13 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar17 = (undefined4)param_1[6];
      }
      puVar13[1] = uVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar16;
      plVar12 = (longlong *)param_1[4];
      *param_2 = iVar14;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar12 +
                       (longlong)((int)(iVar16 + (iVar16 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1419cc3f3;
    }
  }
  cVar9 = FUN_1419e6240(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar9 == '\0') {
    iVar14 = *param_2;
    uVar11 = GetTypeHash(local_30);
    uVar11 = (int)param_1[9] - 1U & uVar11;
    *(uint *)(local_30 + 0x15) = uVar11;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)((longlong)local_30 + 0xa4) =
         *(undefined4 *)
          ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         iVar14;
  }
LAB_1419cc3f3:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar18;
  }
  return param_2;
}



// FUNCTION 1419cc430 FUN_1419cc430 body=765 status=ok
// SIG undefined FUN_1419cc430(void)

int * FUN_1419cc430(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  int iVar9;
  void *_Dst;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  bool bVar13;
  
  iVar10 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar5 = *(int *)((longlong)iVar12 * 0x20 + 4 + *param_1);
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar5 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar11 +
                   (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  plVar11 = (longlong *)((longlong)iVar12 * 0x20 + *param_1);
  lVar2 = *param_3;
  *plVar11 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  lVar2 = param_3[1];
  plVar11[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  lVar2 = param_3[2];
  plVar11[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(plVar11 + 3) = 0xffffffff;
  bVar13 = false;
  iVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar12 != 1) {
    iVar9 = iVar10;
    if (iVar12 != 0) {
      plVar7 = (longlong *)param_1[8];
      iVar5 = GetTypeHash(plVar11);
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar7 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar5 != -1) {
        do {
          lVar2 = (longlong)iVar5 * 0x20 + *param_1;
          if (((*(longlong *)((longlong)iVar5 * 0x20 + *param_1) == *plVar11) &&
              (*(longlong *)(lVar2 + 8) == plVar11[1])) &&
             (*(longlong *)(lVar2 + 0x10) == plVar11[2])) {
            bVar13 = true;
          }
          else {
            bVar13 = false;
          }
          iVar9 = iVar5;
        } while ((!bVar13) && (iVar5 = *(int *)(lVar2 + 0x18), iVar9 = iVar10, iVar5 != -1));
      }
    }
    bVar13 = iVar9 != -1;
    if (bVar13) {
      _Dst = (void *)((longlong)iVar9 * 0x20 + *param_1);
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>((longlong)_Dst + 0x10);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>((longlong)_Dst + 8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,plVar11,0x18);
      iVar12 = *param_2;
      bVar3 = (byte)iVar12 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar12;
      }
      puVar8 = (undefined4 *)((longlong)iVar12 * 0x20 + *param_1);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar10 = (int)param_1[6];
      }
      puVar8[1] = iVar10;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar12;
      plVar11 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar11 +
                       (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1419cc700;
    }
  }
  cVar4 = FUN_1419e62f0(param_1,iVar12,0);
  if (cVar4 == '\0') {
    uVar6 = GetTypeHash(plVar11);
    uVar6 = uVar6 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar11 + 0x1c) = uVar6;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(plVar11 + 3) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
LAB_1419cc700:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 1419cc730 FUN_1419cc730 body=879 status=ok
// SIG undefined FUN_1419cc730(void)

int * FUN_1419cc730(longlong *param_1,int *param_2,ulonglong *param_3,longlong param_4)

{
  uint *puVar1;
  ulonglong uVar2;
  byte bVar3;
  char cVar4;
  longlong *plVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  void *_Dst;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulonglong *_Src;
  int iVar13;
  bool local_res8;
  
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar10 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x10);
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar10 * 0x10) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  _Src = (ulonglong *)((longlong)iVar12 * 0x10 + *param_1);
  uVar2 = *param_3;
  *_Src = uVar2;
  if (uVar2 != 0) {
    LOCK();
    *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(_Src + 1) = 0xffffffff;
  iVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (iVar12 != 1) {
    iVar8 = iVar13;
    if (iVar12 != 0) {
      iVar10 = (int)(*_Src >> 4);
      uVar9 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
      uVar6 = -(uVar9 + iVar10) ^ uVar9 >> 0xd;
      uVar11 = (iVar10 - uVar9) - uVar6 ^ uVar6 >> 0xc;
      uVar9 = (uVar9 - uVar11) - uVar6 ^ uVar11 << 0x10;
      uVar6 = (uVar6 - uVar9) - uVar11 ^ uVar9 >> 5;
      uVar11 = (uVar11 - uVar9) - uVar6 ^ uVar6 >> 3;
      uVar9 = (uVar9 - uVar11) - uVar6 ^ uVar11 << 10;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar5 +
                       (((longlong)(int)((uVar6 - uVar9) - uVar11) ^ (ulonglong)(uVar9 >> 0xf)) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar10 != -1) {
        do {
          iVar8 = iVar10;
          if (*(ulonglong *)(*param_1 + (longlong)iVar10 * 0x10) == *_Src) break;
          iVar10 = *(int *)(*param_1 + 8 + (longlong)iVar10 * 0x10);
          iVar8 = iVar13;
        } while (iVar10 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar8 * 0x10 + *param_1);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,8);
      iVar12 = *param_2;
      bVar3 = (byte)iVar12 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = iVar12;
      }
      puVar7 = (undefined4 *)((longlong)iVar12 * 0x10 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      puVar7[1] = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar12;
      plVar5 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar5 +
                       (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1419cca76;
    }
  }
  cVar4 = TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::ConditionalRehash
                    (param_1,iVar12,0);
  if (cVar4 == '\0') {
    iVar13 = (int)(*_Src >> 4);
    uVar9 = 0x9e3779b9U - iVar13 ^ iVar13 << 8;
    uVar11 = -(uVar9 + iVar13) ^ uVar9 >> 0xd;
    uVar6 = (iVar13 - uVar9) - uVar11 ^ uVar11 >> 0xc;
    uVar9 = (uVar9 - uVar6) - uVar11 ^ uVar6 << 0x10;
    uVar11 = (uVar11 - uVar9) - uVar6 ^ uVar9 >> 5;
    uVar6 = (uVar6 - uVar9) - uVar11 ^ uVar11 >> 3;
    uVar9 = (uVar9 - uVar6) - uVar11 ^ uVar6 << 10;
    uVar6 = ((uVar11 - uVar9) - uVar6 ^ uVar9 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0xc) = uVar6;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 1) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
LAB_1419cca76:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1419ccaa0 FUN_1419ccaa0 body=639 status=ok
// SIG undefined FUN_1419ccaa0(void)

int * FUN_1419ccaa0(longlong *param_1,int *param_2,undefined4 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  longlong *plVar17;
  bool bVar18;
  
  uVar16 = 0xffffffff;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar14 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar14);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar14 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)((longlong)iVar14 * 0x1c + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar9 * 0x1c + *param_1) = 0xffffffff;
    }
  }
  plVar17 = (longlong *)param_1[4];
  *param_2 = iVar14;
  if (plVar17 == (longlong *)0x0) {
    plVar17 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar17 +
                   (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar14 & 0x1f);
  plVar17 = (longlong *)((longlong)iVar14 * 0x1c + *param_1);
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined4 *)plVar17 = *param_3;
  *(undefined4 *)((longlong)plVar17 + 4) = uVar4;
  *(undefined4 *)(plVar17 + 1) = uVar5;
  *(undefined4 *)((longlong)plVar17 + 0xc) = uVar6;
  bVar18 = false;
  *(undefined4 *)(plVar17 + 2) = param_3[4];
  *(undefined4 *)((longlong)plVar17 + 0x14) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar14 = iVar15;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar9 = GetTypeHash(plVar17);
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar9) * 4);
      if (iVar9 != -1) {
        lVar2 = *param_1;
        do {
          lVar13 = (longlong)iVar9 * 0x1c;
          if (((*(longlong *)(lVar13 + lVar2) == *plVar17) &&
              (*(longlong *)(lVar13 + 8 + lVar2) == plVar17[1])) &&
             (iVar14 = iVar9, *(int *)(lVar13 + 0x10 + lVar2) == (int)plVar17[2])) break;
          iVar9 = *(int *)(lVar13 + 0x14 + lVar2);
          iVar14 = iVar15;
        } while (iVar9 != -1);
      }
    }
    bVar18 = iVar14 != -1;
    if (bVar18) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar14 * 0x1c + *param_1),plVar17,0x14);
      iVar15 = *param_2;
      bVar3 = (byte)iVar15 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x1c + *param_1) = iVar15;
      }
      puVar12 = (undefined4 *)((longlong)iVar15 * 0x1c + *param_1);
      *puVar12 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar16 = (undefined4)param_1[6];
      }
      puVar12[1] = uVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar15;
      plVar17 = (longlong *)param_1[4];
      *param_2 = iVar14;
      if (plVar17 == (longlong *)0x0) {
        plVar17 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar17 +
                       (longlong)((int)(iVar15 + (iVar15 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1419cccf2;
    }
  }
  cVar7 = TSet<FSHAHash,DefaultKeyFuncs<FSHAHash,0>,FDefaultSetAllocator>::ConditionalRehash
                    (param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar7 == '\0') {
    iVar15 = *param_2;
    uVar10 = GetTypeHash(plVar17);
    uVar10 = (int)param_1[9] - 1U & uVar10;
    *(uint *)(plVar17 + 3) = uVar10;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)((longlong)plVar17 + 0x14) =
         *(undefined4 *)
          ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar17 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar17 = param_1 + 7;
    }
    *(int *)((longlong)plVar17 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         iVar15;
  }
LAB_1419cccf2:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar18;
  }
  return param_2;
}



// FUNCTION 1419ccd20 FUN_1419ccd20 body=825 status=ok
// SIG undefined FUN_1419ccd20(void)

int * FUN_1419ccd20(longlong *param_1,int *param_2,undefined4 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  void *_Dst;
  uint uVar15;
  undefined4 *puVar16;
  int iVar17;
  bool bVar18;
  
  iVar12 = 1;
  iVar17 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar13);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar13 = (int)param_1[6];
    iVar2 = *(int *)((longlong)iVar13 * 0x40 + 4 + *param_1);
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + *param_1) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar13;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar11 +
                   (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar13 & 0x1f);
  puVar16 = (undefined4 *)((longlong)iVar13 * 0x40 + *param_1);
  *puVar16 = *param_3;
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  uVar7 = param_3[4];
  puVar16[1] = param_3[1];
  puVar16[2] = uVar5;
  puVar16[3] = uVar6;
  puVar16[4] = uVar7;
  puVar16[5] = param_3[5];
  *(undefined8 *)(puVar16 + 6) = *(undefined8 *)(param_3 + 6);
  FString::FString(puVar16 + 8,param_3 + 8);
  bVar18 = false;
  puVar16[0xc] = param_3[0xc];
  puVar16[0xe] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar13 = iVar17;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar9 = FCrc::MemCrc_DEPRECATED(puVar16 + 1,0x14,0);
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar9) * 4);
      if (iVar9 != -1) {
        lVar3 = *param_1;
        do {
          lVar14 = (longlong)iVar9 * 0x40 + lVar3;
          cVar8 = operator==(lVar14,puVar16);
          iVar13 = iVar9;
          if (cVar8 != '\0') break;
          iVar9 = *(int *)(lVar14 + 0x38);
          iVar13 = iVar17;
        } while (iVar9 != -1);
      }
    }
    bVar18 = iVar13 != -1;
    if (bVar18) {
      _Dst = (void *)((longlong)iVar13 * 0x40 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x20) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,puVar16,0x38);
      iVar12 = *param_2;
      bVar4 = (byte)iVar12 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x40 + *param_1) = iVar12;
      }
      puVar16 = (undefined4 *)((longlong)iVar12 * 0x40 + *param_1);
      *puVar16 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar17 = (int)param_1[6];
      }
      puVar16[1] = iVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar12;
      plVar11 = (longlong *)param_1[4];
      *param_2 = iVar13;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar11 +
                       (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1419cd034;
    }
  }
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar15) {
    uVar10 = (uVar15 >> 1) + 8;
    iVar17 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    iVar12 = 0x20;
    cVar8 = '\0';
    if (uVar10 != 0) {
      iVar12 = 0x1f - iVar17;
    }
    uVar10 = (uVar15 >> 1) + 7;
    iVar17 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    if (uVar10 != 0) {
      cVar8 = '\x1f' - (char)iVar17;
    }
    iVar12 = 1 << (~(byte)((iVar12 << 0x1a) >> 0x1f) & 0x20U - cVar8 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar12 <= (int)param_1[9])))) {
    iVar17 = *param_2;
    uVar15 = FCrc::MemCrc_DEPRECATED(puVar16 + 1,0x14);
    uVar15 = (int)param_1[9] - 1U & uVar15;
    puVar16[0xf] = uVar15;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    puVar16[0xe] = *(undefined4 *)
                    ((longlong)plVar11 +
                    ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         iVar17;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    FUN_141a081b0(param_1);
  }
LAB_1419cd034:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar18;
  }
  return param_2;
}



// FUNCTION 1419cd060 FUN_1419cd060 body=356 status=ok
// SIG undefined FUN_1419cd060(void)

longlong FUN_1419cd060(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  int local_res8 [2];
  int local_28 [2];
  undefined8 *local_20;
  
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  FString::FString(local_20,param_2);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(local_20 + 2) = *param_3;
  *(undefined4 *)((longlong)local_20 + 0x14) = uVar1;
  *(undefined4 *)(local_20 + 3) = uVar2;
  *(undefined4 *)((longlong)local_20 + 0x1c) = uVar3;
  *(undefined4 *)(local_20 + 4) = param_3[4];
  *(undefined4 *)(local_20 + 5) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,local_20);
    if (local_res8[0] != -1) {
      plVar7 = (longlong *)((longlong)local_res8[0] * 0x30 + *param_1);
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar7,local_20,0x28);
      TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_28[0],1);
      goto LAB_1419cd19b;
    }
  }
  cVar4 = TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  local_res8[0] = local_28[0];
  if (cVar4 == '\0') {
    if (*(int *)(local_20 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*local_20;
    }
    uVar5 = FUN_140438070(puVar6);
    uVar5 = (int)param_1[9] - 1U & uVar5;
    *(uint *)((longlong)local_20 + 0x2c) = uVar5;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_20 + 5) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         local_28[0];
  }
LAB_1419cd19b:
  return *param_1 + 0x10 + (longlong)local_res8[0] * 0x30;
}



// FUNCTION 1419cd1d0 Emplace<int_const_&> body=391 status=ok
// SIG undefined Emplace<int_const_&>(void)

int * TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (longlong *param_1,int *param_2,uint *param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<FVertexID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar6 = false;
  uVar4 = *param_3;
  *param_2 = local_38[0];
  *local_30 = uVar4;
  local_30[1] = 0xffffffff;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 1) {
    if (iVar5 != 0) {
      plVar2 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar2 = param_1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar2 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar3 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar3 * 0xc) == *local_30) goto LAB_1419cd28b;
          iVar3 = *(int *)(*param_1 + 4 + (longlong)iVar3 * 0xc);
        } while (iVar3 != -1);
      }
    }
    iVar3 = -1;
LAB_1419cd28b:
    bVar6 = iVar3 != -1;
    if (bVar6) {
      ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar3 * 0xc),local_30,4);
      TSparseArray<TSetElement<unsigned_char>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar3;
      goto LAB_1419cd32f;
    }
  }
  cVar1 = ConditionalRehash(param_1,iVar5,0);
  if (cVar1 == '\0') {
    uVar4 = (int)param_1[9] - 1U & *local_30;
    local_30[2] = uVar4;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    local_30[1] = *(uint *)((longlong)plVar2 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         *param_2;
  }
LAB_1419cd32f:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 1419cd360 FUN_1419cd360 body=460 status=ok
// SIG undefined FUN_1419cd360(void)

int * FUN_1419cd360(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  *param_2 = local_38[0];
  TKeyInitializer<FNetworkGUID_const_&>::
  operator<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>_TTuple<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>
            (param_3,local_30);
  local_30[0x16] = 0xffffffff;
  bVar6 = false;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 1) {
    if (iVar5 != 0) {
      plVar2 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar2 = param_1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar2 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar3 != -1) {
        do {
          if (*(uint *)((longlong)iVar3 * 0x60 + *param_1) == *local_30) goto LAB_1419cd42f;
          iVar3 = *(int *)((longlong)iVar3 * 0x60 + 0x58 + *param_1);
        } while (iVar3 != -1);
      }
    }
    iVar3 = -1;
LAB_1419cd42f:
    bVar6 = iVar3 != -1;
    if (bVar6) {
      _Dst = (void *)((longlong)iVar3 * 0x60 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x58);
      TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar3;
      goto LAB_1419cd503;
    }
  }
  cVar1 = TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar5,0);
  if (cVar1 == '\0') {
    uVar4 = (int)param_1[9] - 1U & *local_30;
    local_30[0x17] = uVar4;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    local_30[0x16] =
         *(uint *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         *param_2;
  }
LAB_1419cd503:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 1419cd530 Emplace<TKeyInitializer<enum_ECoreRedirectFlags_const_&>_> body=490 status=ok
// SIG undefined Emplace<TKeyInitializer<enum_ECoreRedirectFlags_const_&>_>(void)

int * TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<enum_ECoreRedirectFlags_const_&>_>
                (longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  *param_2 = local_38[0];
  TKeyInitializer<unsigned_int_const_&>::
  operator<unsigned_int,FShaderStreamingCache>_TTuple<unsigned_int,FShaderStreamingCache>
            (param_3,local_30);
  local_30[0x16] = 0xffffffff;
  bVar6 = false;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 1) {
    if (iVar5 != 0) {
      plVar2 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar2 = param_1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar2 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar3 != -1) {
        do {
          if (*(uint *)((longlong)iVar3 * 0x60 + *param_1) == *local_30) goto LAB_1419cd5ff;
          iVar3 = *(int *)((longlong)iVar3 * 0x60 + 0x58 + *param_1);
        } while (iVar3 != -1);
      }
    }
    iVar3 = -1;
LAB_1419cd5ff:
    bVar6 = iVar3 != -1;
    if (bVar6) {
      _Dst = (void *)((longlong)iVar3 * 0x60 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty((longlong)_Dst + 8,0);
      if (*(longlong *)((longlong)_Dst + 0x28) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_30,0x58);
      TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar3;
      goto LAB_1419cd6f1;
    }
  }
  cVar1 = ConditionalRehash(param_1,iVar5,0);
  if (cVar1 == '\0') {
    uVar4 = (int)param_1[9] - 1U & *local_30;
    local_30[0x17] = uVar4;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    local_30[0x16] =
         *(uint *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         *param_2;
  }
LAB_1419cd6f1:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 1419cd720 FUN_1419cd720 body=531 status=ok
// SIG undefined FUN_1419cd720(void)

uint * FUN_1419cd720(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  void *_Dst;
  undefined4 uVar10;
  bool bVar11;
  uint local_res8 [2];
  uint local_48 [2];
  void *local_40;
  
  TSparseArray<TSetElement<TTuple<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_48);
  *param_2 = local_48[0];
  TKeyInitializer<FShaderCacheKey_const_&>::
  operator<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>_TTuple<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>
            (param_3,local_40);
  uVar10 = 0xffffffff;
  local_res8[0] = local_res8[0] & 0xffffff00;
  *(undefined4 *)((longlong)local_40 + 0x70) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,local_40);
    uVar6 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar11 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar11);
    if (bVar11) {
      _Dst = (void *)(lVar9 * 0x78 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x68) = 0;
      if (*(longlong *)((longlong)_Dst + 0x60) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 0x20);
      _guard_xfg_dispatch_icall_nop(_Dst,local_40,0x70);
      uVar2 = *param_2;
      bVar4 = (byte)uVar2 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x78 + *param_1) = uVar2;
      }
      puVar7 = (undefined4 *)((longlong)(int)uVar2 * 0x78 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar10 = (undefined4)param_1[6];
      }
      puVar7[1] = uVar10;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar2;
      plVar8 = (longlong *)param_1[4];
      *param_2 = uVar6;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar8 +
                       (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1419cd8fb;
    }
  }
  cVar5 = FUN_1419e5cc0(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar5 == '\0') {
    uVar6 = *(uint *)((longlong)local_40 + 0x18);
    uVar2 = *param_2;
    if (uVar6 == 0) {
      iVar3 = *(int *)((longlong)local_40 + 0x14);
      bVar4 = *(byte *)((longlong)local_40 + 0x1c);
      uVar6 = FCrc::MemCrc_DEPRECATED(local_40,0x14,0);
      uVar6 = uVar6 ^ iVar3 << 0x10 ^ (uint)bVar4;
      *(uint *)((longlong)local_40 + 0x18) = uVar6;
    }
    uVar6 = (int)param_1[9] - 1U & uVar6;
    *(uint *)((longlong)local_40 + 0x74) = uVar6;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)((longlong)local_40 + 0x70) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(uint *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         uVar2;
  }
LAB_1419cd8fb:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1419cd940 FUN_1419cd940 body=433 status=ok
// SIG undefined FUN_1419cd940(void)

int * FUN_1419cd940(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareResourceDescription_*,ResourceVariation>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  uVar1 = param_3[1];
  *param_2 = local_38[0];
  *local_30 = *(ulonglong *)*param_3;
  FBlendStateInitializerRHI::FBlendStateInitializerRHI(local_30 + 1,uVar1);
  *(undefined4 *)(local_30 + 9) = 0xffffffff;
  bVar8 = false;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    TSet<TTuple<FRHIBlendState_*,FBlendStateInitializerRHI>,TDefaultMapHashableKeyFuncs<FRHIBlendState_*,FBlendStateInitializerRHI,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
    bVar8 = local_res8[0] != -1;
    if (bVar8) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)local_res8[0] * 0x50 + *param_1),local_30,0x48);
      TSparseArray<TSetElement<FCachedLandscapeFoliage::FGrassComp>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1419cdacf;
    }
  }
  cVar2 = TSet<TTuple<USoundMix_*,FSoundMixState>,TDefaultMapHashableKeyFuncs<USoundMix_*,FSoundMixState,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6);
  if (cVar2 == '\0') {
    iVar6 = (int)(*local_30 >> 4);
    uVar5 = 0x9e3779b9U - iVar6 ^ iVar6 << 8;
    uVar7 = -(uVar5 + iVar6) ^ uVar5 >> 0xd;
    uVar4 = (iVar6 - uVar5) - uVar7 ^ uVar7 >> 0xc;
    uVar5 = (uVar5 - uVar4) - uVar7 ^ uVar4 << 0x10;
    uVar7 = (uVar7 - uVar5) - uVar4 ^ uVar5 >> 5;
    uVar4 = (uVar4 - uVar5) - uVar7 ^ uVar7 >> 3;
    uVar5 = (uVar5 - uVar4) - uVar7 ^ uVar4 << 10;
    uVar4 = ((uVar7 - uVar5) - uVar4 ^ uVar5 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x4c) = uVar4;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 9) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         *param_2;
  }
LAB_1419cdacf:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 1419cdb00 FUN_1419cdb00 body=546 status=ok
// SIG undefined FUN_1419cdb00(void)

int * FUN_1419cdb00(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  ulonglong *puVar2;
  char cVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar1 = (undefined1 *)param_3[1];
  bVar9 = false;
  puVar2 = (ulonglong *)*param_3;
  *param_2 = local_38[0];
  *local_30 = *puVar2;
  *(undefined1 *)(local_30 + 1) = *puVar1;
  *(undefined1 *)((longlong)local_30 + 9) = puVar1[1];
  *(undefined1 *)((longlong)local_30 + 10) = puVar1[2];
  *(undefined1 *)((longlong)local_30 + 0xb) = puVar1[3];
  *(undefined1 *)((longlong)local_30 + 0xc) = puVar1[4];
  *(undefined1 *)((longlong)local_30 + 0xd) = puVar1[5];
  *(undefined1 *)((longlong)local_30 + 0xe) = puVar1[6];
  *(undefined1 *)((longlong)local_30 + 0xf) = puVar1[7];
  *(undefined1 *)(local_30 + 2) = puVar1[8];
  *(undefined1 *)((longlong)local_30 + 0x11) = puVar1[9];
  *(undefined1 *)((longlong)local_30 + 0x12) = puVar1[10];
  *(undefined1 *)((longlong)local_30 + 0x13) = puVar1[0xb];
  *(undefined1 *)((longlong)local_30 + 0x14) = puVar1[0xc];
  *(undefined1 *)((longlong)local_30 + 0x15) = puVar1[0xd];
  *(undefined4 *)(local_30 + 3) = 0xffffffff;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 != 1) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
    bVar9 = local_res8[0] != -1;
    if (bVar9) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)local_res8[0] * 0x20 + *param_1),local_30,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = local_res8[0];
      goto LAB_1419cdcfa;
    }
  }
  cVar3 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar7);
  if (cVar3 == '\0') {
    iVar7 = (int)(*local_30 >> 4);
    uVar6 = 0x9e3779b9U - iVar7 ^ iVar7 << 8;
    uVar8 = -(uVar6 + iVar7) ^ uVar6 >> 0xd;
    uVar5 = (iVar7 - uVar6) - uVar8 ^ uVar8 >> 0xc;
    uVar6 = (uVar6 - uVar5) - uVar8 ^ uVar5 << 0x10;
    uVar8 = (uVar8 - uVar6) - uVar5 ^ uVar6 >> 5;
    uVar5 = (uVar5 - uVar6) - uVar8 ^ uVar8 >> 3;
    uVar6 = (uVar6 - uVar5) - uVar8 ^ uVar5 << 10;
    uVar5 = ((uVar8 - uVar6) - uVar5 ^ uVar6 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x1c) = uVar5;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 3) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_1419cdcfa:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 1419cdd30 FUN_1419cdd30 body=441 status=ok
// SIG undefined FUN_1419cdd30(void)

int * FUN_1419cdd30(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  TSparseArray<TSetElement<TTuple<FRHIGraphicsPipelineState_*,FShaderCacheGraphicsPipelineState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  uVar1 = param_3[1];
  *param_2 = local_38[0];
  *local_30 = *(ulonglong *)*param_3;
  FShaderCacheGraphicsPipelineState::FShaderCacheGraphicsPipelineState(local_30 + 1,uVar1);
  *(undefined4 *)(local_30 + 0x1a) = 0xffffffff;
  bVar8 = false;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    TSet<TTuple<FRHIGraphicsPipelineState_*,FShaderCacheGraphicsPipelineState>,TDefaultMapHashableKeyFuncs<FRHIGraphicsPipelineState_*,FShaderCacheGraphicsPipelineState,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
    bVar8 = local_res8[0] != -1;
    if (bVar8) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)local_res8[0] * 0xd8 + *param_1),local_30,0xd0);
      TSparseArray<TSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1419cdec7;
    }
  }
  cVar2 = FUN_1419e5530(param_1,iVar6);
  if (cVar2 == '\0') {
    iVar6 = (int)(*local_30 >> 4);
    uVar5 = 0x9e3779b9U - iVar6 ^ iVar6 << 8;
    uVar7 = -(uVar5 + iVar6) ^ uVar5 >> 0xd;
    uVar4 = (iVar6 - uVar5) - uVar7 ^ uVar7 >> 0xc;
    uVar5 = (uVar5 - uVar4) - uVar7 ^ uVar4 << 0x10;
    uVar7 = (uVar7 - uVar5) - uVar4 ^ uVar5 >> 5;
    uVar4 = (uVar4 - uVar5) - uVar7 ^ uVar7 >> 3;
    uVar5 = (uVar5 - uVar4) - uVar7 ^ uVar4 << 10;
    uVar4 = ((uVar7 - uVar5) - uVar4 ^ uVar5 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0xd4) = uVar4;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 0x1a) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         *param_2;
  }
LAB_1419cdec7:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 1419cdef0 FUN_1419cdef0 body=480 status=ok
// SIG undefined FUN_1419cdef0(void)

int * FUN_1419cdef0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  ulonglong *puVar2;
  char cVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar1 = (undefined1 *)param_3[1];
  bVar9 = false;
  puVar2 = (ulonglong *)*param_3;
  *param_2 = local_38[0];
  *local_30 = *puVar2;
  *(undefined1 *)(local_30 + 1) = *puVar1;
  *(undefined1 *)((longlong)local_30 + 9) = puVar1[1];
  *(undefined4 *)((longlong)local_30 + 0xc) = *(undefined4 *)(puVar1 + 4);
  *(undefined4 *)(local_30 + 2) = *(undefined4 *)(puVar1 + 8);
  *(undefined1 *)((longlong)local_30 + 0x14) = puVar1[0xc];
  *(undefined1 *)((longlong)local_30 + 0x15) = puVar1[0xd];
  *(undefined4 *)(local_30 + 3) = 0xffffffff;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 != 1) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
    bVar9 = local_res8[0] != -1;
    if (bVar9) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)local_res8[0] * 0x20 + *param_1),local_30,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = local_res8[0];
      goto LAB_1419ce0a8;
    }
  }
  cVar3 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar7);
  if (cVar3 == '\0') {
    iVar7 = (int)(*local_30 >> 4);
    uVar6 = 0x9e3779b9U - iVar7 ^ iVar7 << 8;
    uVar8 = -(uVar6 + iVar7) ^ uVar6 >> 0xd;
    uVar5 = (iVar7 - uVar6) - uVar8 ^ uVar8 >> 0xc;
    uVar6 = (uVar6 - uVar5) - uVar8 ^ uVar5 << 0x10;
    uVar8 = (uVar8 - uVar6) - uVar5 ^ uVar6 >> 5;
    uVar5 = (uVar5 - uVar6) - uVar8 ^ uVar8 >> 3;
    uVar6 = (uVar6 - uVar5) - uVar8 ^ uVar5 << 10;
    uVar5 = ((uVar8 - uVar6) - uVar5 ^ uVar6 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x1c) = uVar5;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 3) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_1419ce0a8:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 1419ce0d0 FUN_1419ce0d0 body=430 status=ok
// SIG undefined FUN_1419ce0d0(void)

int * FUN_1419ce0d0(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  FUN_1419e3a70(param_1,local_38);
  *param_2 = local_38[0];
  FUN_1419cb6b0(param_3,local_30);
  *(undefined4 *)(local_30 + 0x22) = 0xffffffff;
  bVar7 = false;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 1) {
    FUN_1419ed010(param_1,local_res8);
    bVar7 = local_res8[0] != -1;
    if (bVar7) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)local_res8[0] * 0x118 + *param_1),local_30,0x110);
      FUN_141a09250(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1419ce25c;
    }
  }
  cVar1 = FUN_1419e55e0(param_1,iVar5);
  if (cVar1 == '\0') {
    iVar5 = (int)(*local_30 >> 4);
    uVar4 = 0x9e3779b9U - iVar5 ^ iVar5 << 8;
    uVar6 = -(uVar4 + iVar5) ^ uVar4 >> 0xd;
    uVar3 = (iVar5 - uVar4) - uVar6 ^ uVar6 >> 0xc;
    uVar4 = (uVar4 - uVar3) - uVar6 ^ uVar3 << 0x10;
    uVar6 = (uVar6 - uVar4) - uVar3 ^ uVar4 >> 5;
    uVar3 = (uVar3 - uVar4) - uVar6 ^ uVar6 >> 3;
    uVar4 = (uVar4 - uVar3) - uVar6 ^ uVar3 << 10;
    uVar3 = ((uVar6 - uVar4) - uVar3 ^ uVar4 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x114) = uVar3;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 0x22) =
         *(undefined4 *)
          ((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4) =
         *param_2;
  }
LAB_1419ce25c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 1419ce280 FUN_1419ce280 body=755 status=ok
// SIG undefined FUN_1419ce280(void)

int * FUN_1419ce280(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined4 *_Src;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  
  iVar15 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar11 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x48);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x48) = 0xffffffff;
    }
  }
  plVar14 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = param_1 + 2;
  }
  bVar17 = false;
  puVar1 = (uint *)((longlong)plVar14 +
                   (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  _Src = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x48);
  puVar4 = (undefined4 *)*param_3;
  puVar5 = (undefined8 *)param_3[1];
  *_Src = *puVar4;
  uVar7 = puVar4[2];
  uVar8 = puVar4[3];
  uVar9 = puVar4[4];
  _Src[1] = puVar4[1];
  _Src[2] = uVar7;
  _Src[3] = uVar8;
  _Src[4] = uVar9;
  _Src[5] = puVar4[5];
  *(undefined8 *)(_Src + 6) = *(undefined8 *)(puVar4 + 6);
  *(undefined8 *)(_Src + 8) = 0;
  *(undefined8 *)(_Src + 8) = *(undefined8 *)(puVar4 + 8);
  *(undefined8 *)(puVar4 + 8) = 0;
  _Src[10] = puVar4[10];
  _Src[0xb] = puVar4[0xb];
  *(undefined8 *)(puVar4 + 10) = 0;
  _Src[0xc] = puVar4[0xc];
  *(undefined8 *)(_Src + 0xe) = *puVar5;
  _Src[0x10] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar12 = FCrc::MemCrc_DEPRECATED(_Src + 1,0x14,0);
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = param_1 + 7;
      }
      iVar12 = *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar12) * 4)
      ;
      if (iVar12 != -1) {
        lVar6 = *param_1;
        do {
          lVar2 = lVar6 + (longlong)iVar12 * 0x48;
          cVar10 = operator==(lVar2,_Src);
          if (cVar10 != '\0') goto LAB_1419ce427;
          iVar12 = *(int *)(lVar2 + 0x40);
        } while (iVar12 != -1);
      }
    }
    iVar12 = -1;
LAB_1419ce427:
    bVar17 = iVar12 != -1;
    if (bVar17) {
      lVar6 = *param_1;
      if (*(longlong *)(lVar6 + 0x20 + (longlong)iVar12 * 0x48) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar6 + (longlong)iVar12 * 0x48),_Src,0x40);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdNull,TSharedRef<FUserOnlineAccountNull,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar12;
      goto LAB_1419ce546;
    }
  }
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar16) {
    uVar13 = (uVar16 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar12 = 0x20;
    cVar10 = '\0';
    if (uVar13 != 0) {
      iVar12 = 0x1f - iVar15;
    }
    uVar13 = (uVar16 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar13 != 0) {
      cVar10 = '\x1f' - (char)iVar15;
    }
    iVar15 = 1 << (~(byte)((iVar12 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar16 < 1) || (((int)param_1[9] != 0 && (iVar15 <= (int)param_1[9])))) {
    iVar15 = *param_2;
    uVar16 = FCrc::MemCrc_DEPRECATED(_Src + 1,0x14);
    uVar16 = (int)param_1[9] - 1U & uVar16;
    _Src[0x11] = uVar16;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    _Src[0x10] = *(undefined4 *)
                  ((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4)
    ;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
         iVar15;
  }
  else {
    *(int *)(param_1 + 9) = iVar15;
    FUN_141a07740(param_1);
  }
LAB_1419ce546:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar17;
  }
  return param_2;
}



// FUNCTION 1419ce580 FUN_1419ce580 body=390 status=ok
// SIG undefined FUN_1419ce580(void)

int * FUN_1419ce580(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  bool bVar11;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined4 *)param_3[1];
  bVar11 = false;
  *param_2 = local_38[0];
  *local_30 = 0;
  *local_30 = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(local_30 + 1) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)((longlong)local_30 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  uVar4 = puVar3[1];
  uVar5 = puVar3[2];
  uVar6 = puVar3[3];
  *(undefined4 *)(local_30 + 2) = *puVar3;
  *(undefined4 *)((longlong)local_30 + 0x14) = uVar4;
  *(undefined4 *)(local_30 + 3) = uVar5;
  *(undefined4 *)((longlong)local_30 + 0x1c) = uVar6;
  *(undefined4 *)(local_30 + 4) = puVar3[4];
  *(undefined4 *)(local_30 + 5) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,local_30);
    bVar11 = local_res8[0] != -1;
    if (bVar11) {
      plVar10 = (longlong *)((longlong)local_res8[0] * 0x30 + *param_1);
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar10,local_30,0x28);
      TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1419ce6e3;
    }
  }
  cVar7 = TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar7 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(local_30 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*local_30;
    }
    uVar8 = FUN_140438070(puVar9);
    uVar8 = (int)param_1[9] - 1U & uVar8;
    *(uint *)((longlong)local_30 + 0x2c) = uVar8;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 5) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         iVar1;
  }
LAB_1419ce6e3:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 1419ce710 Emplace<TPairInitializer<FString_&&,TSharedRef<FBuildPatchAppManifest,1>_&&>_> body=423 status=ok
// SIG undefined Emplace<TPairInitializer<FString_&&,TSharedRef<FBuildPatchAppManifest,1>_&&>_>(void)

int * TSet<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,TSharedRef<FBuildPatchAppManifest,1>_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  void *_Dst;
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  bool bVar9;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined8 *)param_3[1];
  *param_2 = local_38[0];
  *local_30 = 0;
  *local_30 = *puVar2;
  *puVar2 = 0;
  *(int *)(local_30 + 1) = *(int *)(puVar2 + 1);
  *(undefined4 *)((longlong)local_30 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  local_30[2] = *puVar3;
  lVar4 = puVar3[1];
  local_30[3] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_30 + 4) = 0xffffffff;
  bVar9 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,local_30);
    bVar9 = local_res8[0] != -1;
    if (bVar9) {
      _Dst = (void *)(*param_1 + (longlong)local_res8[0] * 0x28);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                (_Dst);
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_30,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1419ce88e;
    }
  }
  cVar5 = TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar5 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(local_30 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*local_30;
    }
    uVar6 = FUN_140438070(puVar8);
    uVar6 = (int)param_1[9] - 1U & uVar6;
    *(uint *)((longlong)local_30 + 0x24) = uVar6;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 4) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) = iVar1
    ;
  }
LAB_1419ce88e:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 1419ce8c0 FUN_1419ce8c0 body=510 status=ok
// SIG undefined FUN_1419ce8c0(void)

int * FUN_1419ce8c0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  uint uVar6;
  int iVar7;
  bool bVar8;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  uVar2 = param_3[1];
  puVar1 = local_30 + 2;
  *param_2 = local_38[0];
  *local_30 = *(uint *)*param_3;
  puVar1[0] = 0;
  puVar1[1] = 0;
  local_30[4] = 0;
  local_30[5] = 0;
  local_30[10] = 0;
  local_30[0xb] = 0;
  local_30[0xc] = 0;
  local_30[0xd] = 0;
  local_30[0xe] = 0xffffffff;
  local_30[0xf] = 0;
  local_30[0x12] = 0;
  local_30[0x13] = 0;
  local_30[0x14] = 0;
  FUN_1419daec0(puVar1,uVar2);
  local_30[0x16] = 0xffffffff;
  bVar8 = false;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 != 1) {
    if (iVar7 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar5 != -1) {
        do {
          if (*(uint *)((longlong)iVar5 * 0x60 + *param_1) == *local_30) goto LAB_1419ce9bf;
          iVar5 = *(int *)((longlong)iVar5 * 0x60 + 0x58 + *param_1);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_1419ce9bf:
    bVar8 = iVar5 != -1;
    if (bVar8) {
      _Dst = (void *)((longlong)iVar5 * 0x60 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x58);
      TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar5;
      goto LAB_1419cea95;
    }
  }
  cVar3 = TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar7,0);
  if (cVar3 == '\0') {
    uVar6 = (int)param_1[9] - 1U & *local_30;
    local_30[0x17] = uVar6;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    local_30[0x16] =
         *(uint *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
LAB_1419cea95:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 1419ceac0 FUN_1419ceac0 body=773 status=ok
// SIG undefined FUN_1419ceac0(void)

uint * FUN_1419ceac0(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  undefined4 uVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  ulonglong *_Src;
  uint uVar14;
  bool bVar15;
  uint local_res8 [2];
  
  iVar11 = 1;
  uVar10 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar14 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar14 + 1)) {
      FUN_141a09ac0(param_1,uVar14);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar14 = *(uint *)(param_1 + 6);
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)((longlong)(int)uVar14 * 0x1c0 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar8 * 0x1c0 + *param_1) = 0xffffffff;
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
  _Src = (ulonglong *)((longlong)(int)uVar14 * 0x1c0 + *param_1);
  uVar2 = param_3[1];
  *_Src = *(ulonglong *)*param_3;
  FUN_1419d7130(_Src + 1,uVar2);
  *(undefined4 *)(_Src + 0x37) = 0xffffffff;
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (uVar14 != 1) {
    FUN_1419ecdd0(param_1,local_res8,*_Src);
    uVar5 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar15 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar15);
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)(lVar9 * 0x1c0 + *param_1),_Src,0x1b8);
      uVar14 = *param_2;
      bVar3 = (byte)uVar14 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x1c0 + *param_1) = uVar14;
      }
      puVar6 = (undefined4 *)((longlong)(int)uVar14 * 0x1c0 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar10 = (undefined4)param_1[6];
      }
      puVar6[1] = uVar10;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar14;
      plVar7 = (longlong *)param_1[4];
      *param_2 = uVar5;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar7 +
                       (longlong)((int)(uVar14 + ((int)uVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1419ced9c;
    }
  }
  if (3 < uVar14) {
    uVar5 = (uVar14 >> 1) + 8;
    iVar11 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar12 = '\0';
    if (uVar5 != 0) {
      iVar8 = 0x1f - iVar11;
    }
    uVar5 = (uVar14 >> 1) + 7;
    iVar11 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar12 = '\x1f' - (char)iVar11;
    }
    iVar11 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    iVar11 = (int)(*_Src >> 4);
    uVar5 = 0x9e3779b9U - iVar11 ^ iVar11 << 8;
    uVar13 = -(iVar11 + uVar5) ^ uVar5 >> 0xd;
    uVar14 = (iVar11 - uVar5) - uVar13 ^ uVar13 >> 0xc;
    uVar5 = (uVar5 - uVar14) - uVar13 ^ uVar14 << 0x10;
    uVar13 = (uVar13 - uVar5) - uVar14 ^ uVar5 >> 5;
    uVar14 = (uVar14 - uVar5) - uVar13 ^ uVar13 >> 3;
    uVar5 = (uVar5 - uVar14) - uVar13 ^ uVar14 << 10;
    uVar14 = ((uVar13 - uVar5) - uVar14 ^ uVar5 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1bc) = uVar14;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x37) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(uint *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    FUN_141a04190(param_1);
  }
LAB_1419ced9c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1419cedd0 FUN_1419cedd0 body=761 status=ok
// SIG undefined FUN_1419cedd0(void)

uint * FUN_1419cedd0(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong *_Src;
  char cVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  uint local_res8 [2];
  
  iVar9 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar12 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar12 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar12 = *(uint *)(param_1 + 6);
    iVar2 = *(int *)((longlong)(int)uVar12 * 0x40 + 4 + *param_1);
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = uVar12;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 +
                   (longlong)((int)(uVar12 + ((int)uVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar12 & 0x1f);
  puVar3 = (undefined4 *)param_3[1];
  _Src = (ulonglong *)((longlong)(int)uVar12 * 0x40 + *param_1);
  uVar4 = *(ulonglong *)*param_3;
  *_Src = uVar4;
  *(undefined4 *)(_Src + 1) = *puVar3;
  *(undefined4 *)((longlong)_Src + 0xc) = puVar3[1];
  *(undefined4 *)(_Src + 2) = puVar3[2];
  *(undefined4 *)((longlong)_Src + 0x14) = puVar3[3];
  *(undefined4 *)(_Src + 3) = puVar3[4];
  *(undefined4 *)((longlong)_Src + 0x1c) = puVar3[5];
  *(undefined4 *)(_Src + 4) = puVar3[6];
  *(undefined1 *)((longlong)_Src + 0x24) = *(undefined1 *)(puVar3 + 7);
  *(undefined1 *)((longlong)_Src + 0x25) = *(undefined1 *)((longlong)puVar3 + 0x1d);
  *(undefined4 *)(_Src + 5) = puVar3[8];
  *(undefined4 *)((longlong)_Src + 0x2c) = puVar3[9];
  *(undefined4 *)(_Src + 6) = puVar3[10];
  *(undefined1 *)((longlong)_Src + 0x34) = *(undefined1 *)(puVar3 + 0xb);
  *(undefined1 *)((longlong)_Src + 0x35) = *(undefined1 *)((longlong)puVar3 + 0x2d);
  *(undefined4 *)(_Src + 7) = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar4);
    uVar5 = local_res8[0];
    lVar8 = (longlong)(int)local_res8[0];
    bVar14 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    if (bVar14) {
      _guard_xfg_dispatch_icall_nop((void *)(lVar8 * 0x40 + *param_1),_Src,0x38);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,uVar12,1);
      *param_2 = uVar5;
      goto LAB_1419cf09b;
    }
  }
  if (3 < uVar13) {
    uVar5 = (uVar13 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar10 = '\0';
    if (uVar5 != 0) {
      iVar7 = 0x1f - iVar9;
    }
    uVar5 = (uVar13 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar10 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    iVar9 = (int)(*_Src >> 4);
    uVar5 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
    uVar11 = -(iVar9 + uVar5) ^ uVar5 >> 0xd;
    uVar13 = (iVar9 - uVar5) - uVar11 ^ uVar11 >> 0xc;
    uVar5 = (uVar5 - uVar13) - uVar11 ^ uVar13 << 0x10;
    uVar11 = (uVar11 - uVar5) - uVar13 ^ uVar5 >> 5;
    uVar13 = (uVar13 - uVar5) - uVar11 ^ uVar11 >> 3;
    uVar5 = (uVar5 - uVar13) - uVar11 ^ uVar13 << 10;
    uVar13 = ((uVar11 - uVar5) - uVar13 ^ uVar5 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x3c) = uVar13;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 7) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(uint *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         uVar12;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1419cf09b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1419cf0d0 FUN_1419cf0d0 body=510 status=ok
// SIG undefined FUN_1419cf0d0(void)

int * FUN_1419cf0d0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  void *_Dst;
  bool bVar10;
  int local_38 [2];
  longlong *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  plVar9 = local_30;
  plVar6 = (longlong *)param_3[1];
  *param_2 = local_38[0];
  *local_30 = *(longlong *)*param_3;
  local_30[1] = *plVar6;
  lVar2 = plVar6[1];
  local_30[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  bVar10 = false;
  *(undefined4 *)(local_30 + 3) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    lVar2 = *local_30;
    iVar8 = -1;
    iVar7 = iVar8;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar4 = FUN_140438070(lVar2);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar4) * 4);
      if (iVar4 != -1) {
        do {
          iVar7 = iVar4;
          if (*(longlong *)((longlong)iVar4 * 0x20 + *param_1) == lVar2) break;
          iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *param_1);
          iVar7 = iVar8;
        } while (iVar4 != -1);
      }
    }
    bVar10 = iVar7 != -1;
    if (bVar10) {
      _Dst = (void *)((longlong)iVar7 * 0x20 + *param_1);
      plVar6 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar6 + 1;
        lVar2 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        plVar9 = local_30;
        if ((int)lVar2 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar9 = local_30;
          if (iVar8 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
            plVar9 = local_30;
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,plVar9,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar7;
      goto LAB_1419cf2a6;
    }
  }
  cVar3 = TSet<TTuple<wchar_t_const_*,FCachedUniformBufferDeclaration>,TDefaultMapHashableKeyFuncs<wchar_t_const_*,FCachedUniformBufferDeclaration,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar3 == '\0') {
    iVar7 = *param_2;
    uVar5 = FUN_140438070(*plVar9);
    uVar5 = (int)param_1[9] - 1U & uVar5;
    *(uint *)((longlong)plVar9 + 0x1c) = uVar5;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar9 + 3) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) = iVar7
    ;
  }
LAB_1419cf2a6:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 1419cf2d0 FUN_1419cf2d0 body=633 status=ok
// SIG undefined FUN_1419cf2d0(void)

uint * FUN_1419cf2d0(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined1 *_Src;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 uVar12;
  bool bVar13;
  uint local_res8 [2];
  
  uVar12 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar10 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar10 + 1)) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,uVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar10 = *(uint *)(param_1 + 6);
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)(int)uVar10 * 0x28);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = uVar10;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar9 +
                   (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar10 & 0x1f);
  _Src = (undefined1 *)(*param_1 + (longlong)(int)uVar10 * 0x28);
  puVar3 = (undefined1 *)*param_3;
  puVar4 = (undefined4 *)param_3[1];
  *_Src = *puVar3;
  _Src[1] = puVar3[1];
  _Src[2] = puVar3[2];
  _Src[3] = puVar3[3];
  *(undefined4 *)(_Src + 4) = *(undefined4 *)(puVar3 + 4);
  *(undefined4 *)(_Src + 8) = *(undefined4 *)(puVar3 + 8);
  *(undefined4 *)(_Src + 0xc) = *(undefined4 *)(puVar3 + 0xc);
  *(undefined4 *)(_Src + 0x10) = *(undefined4 *)(puVar3 + 0x10);
  *(undefined4 *)(_Src + 0x14) = *(undefined4 *)(puVar3 + 0x14);
  _Src[0x18] = puVar3[0x18];
  *(undefined4 *)(_Src + 0x1c) = *puVar4;
  *(undefined4 *)(_Src + 0x20) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FSamplerStateInitializerRHI,int>,FSamplerStateInitializerRHIKeyFuncs,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar10 = local_res8[0];
    lVar11 = (longlong)(int)local_res8[0];
    bVar13 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar13);
    if (bVar13) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar11 * 0x28),_Src,0x20);
      uVar8 = *param_2;
      bVar5 = (byte)uVar8 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = uVar8;
      }
      lVar11 = *param_1;
      *(undefined4 *)(lVar11 + (longlong)(int)uVar8 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar12 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar11 + 4 + (longlong)(int)uVar8 * 0x28) = uVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar8;
      plVar9 = (longlong *)param_1[4];
      *param_2 = uVar10;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar9 +
                       (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_1419cf523;
    }
  }
  cVar6 = TSet<TTuple<FPrimaryAssetId,UGCosmeticIconButton_*>,TDefaultMapHashableKeyFuncs<FPrimaryAssetId,UGCosmeticIconButton_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar6 == '\0') {
    uVar10 = *param_2;
    uVar8 = FSamplerStateInitializerRHIKeyFuncs::GetKeyHash(_Src);
    uVar8 = uVar8 & (int)param_1[9] - 1U;
    *(uint *)(_Src + 0x24) = uVar8;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x20) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(uint *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         uVar10;
  }
LAB_1419cf523:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1419cf550 FUN_1419cf550 body=784 status=ok
// SIG undefined FUN_1419cf550(void)

int * FUN_1419cf550(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  void *_Dst;
  uint uVar14;
  void *_Src;
  int iVar15;
  bool bVar16;
  
  iVar11 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      FUN_141a09ac0(param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)((longlong)iVar12 * 0x1c0 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar7 * 0x1c0 + *param_1) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar10 +
                   (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  puVar2 = (undefined8 *)param_3[1];
  _Src = (void *)((longlong)iVar12 * 0x1c0 + *param_1);
  FUN_1419d7130(_Src,*param_3);
  bVar16 = false;
  *(undefined8 *)((longlong)_Src + 0x1b0) = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)((longlong)_Src + 0x1b8) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar12 = iVar15;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar7 = FUN_1419f0cb0(_Src);
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar7) * 4);
      if (iVar7 != -1) {
        lVar3 = *param_1;
        do {
          lVar13 = (longlong)iVar7 * 0x1c0 + lVar3;
          cVar5 = FUN_1419e0e00(lVar13,_Src);
          iVar12 = iVar7;
          if (cVar5 != '\0') break;
          iVar7 = *(int *)(lVar13 + 0x1b8);
          iVar12 = iVar15;
        } while (iVar7 != -1);
      }
    }
    bVar16 = iVar12 != -1;
    if (bVar16) {
      _Dst = (void *)((longlong)iVar12 * 0x1c0 + *param_1);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>((longlong)_Dst + 0x1b0);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x1b8);
      iVar11 = *param_2;
      bVar4 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x1c0 + *param_1) = iVar11;
      }
      puVar9 = (undefined4 *)((longlong)iVar11 * 0x1c0 + *param_1);
      *puVar9 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      puVar9[1] = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar10 = (longlong *)param_1[4];
      *param_2 = iVar12;
      if (plVar10 == (longlong *)0x0) {
        plVar10 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar10 +
                       (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1419cf83b;
    }
  }
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar14) {
    uVar8 = (uVar14 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar11 = 0x20;
    cVar5 = '\0';
    if (uVar8 != 0) {
      iVar11 = 0x1f - iVar15;
    }
    uVar8 = (uVar14 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar8 != 0) {
      cVar5 = '\x1f' - (char)iVar15;
    }
    iVar11 = 1 << (~(byte)((iVar11 << 0x1a) >> 0x1f) & 0x20U - cVar5 & 0x1f);
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    iVar15 = *param_2;
    uVar14 = FUN_1419f0cb0(_Src);
    uVar14 = (int)param_1[9] - 1U & uVar14;
    *(uint *)((longlong)_Src + 0x1bc) = uVar14;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x1b8) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         iVar15;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<FPipelineCacheFileFormatPSO,DefaultKeyFuncs<FPipelineCacheFileFormatPSO,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1419cf83b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 1419cf860 FUN_1419cf860 body=687 status=ok
// SIG undefined FUN_1419cf860(void)

int * FUN_1419cf860(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  int iVar9;
  void *_Src;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  
  iVar11 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<FPluginStatus,FDefaultAllocator>::ResizeGrow(param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar5 = *(int *)((longlong)iVar9 * 0x1b8 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar5 * 0x1b8 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  puVar7 = (undefined4 *)param_3[1];
  _Src = (void *)((longlong)iVar9 * 0x1b8 + *param_1);
  FUN_1419d7130(_Src,*param_3);
  bVar12 = false;
  *(undefined4 *)((longlong)_Src + 0x1ac) = *puVar7;
  *(undefined4 *)((longlong)_Src + 0x1b0) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar9 = iVar11;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar5 = FUN_1419f0cb0(_Src);
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar5) * 4);
      if (iVar5 != -1) {
        lVar10 = *param_1;
        do {
          lVar10 = (longlong)iVar5 * 0x1b8 + lVar10;
          cVar3 = FUN_1419e0e00(lVar10,_Src);
          iVar9 = iVar5;
          if (cVar3 != '\0') break;
          iVar5 = *(int *)(lVar10 + 0x1b0);
          lVar10 = *param_1;
          iVar9 = iVar11;
        } while (iVar5 != -1);
      }
    }
    bVar12 = iVar9 != -1;
    if (bVar12) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar9 * 0x1b8 + *param_1),_Src,0x1b0);
      iVar5 = *param_2;
      bVar2 = (byte)iVar5 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x1b8 + *param_1) = iVar5;
      }
      puVar7 = (undefined4 *)((longlong)iVar5 * 0x1b8 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar11 = (int)param_1[6];
      }
      puVar7[1] = iVar11;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar5;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar8 +
                       (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_1419cfae2;
    }
  }
  cVar3 = FUN_1419e5950(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar3 == '\0') {
    iVar11 = *param_2;
    uVar6 = FUN_1419f0cb0(_Src);
    uVar6 = (int)param_1[9] - 1U & uVar6;
    *(uint *)((longlong)_Src + 0x1b4) = uVar6;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x1b0) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         iVar11;
  }
LAB_1419cfae2:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 1419cfb10 FUN_1419cfb10 body=687 status=ok
// SIG undefined FUN_1419cfb10(void)

int * FUN_1419cfb10(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  int iVar9;
  void *_Src;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  
  iVar11 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<212,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar5 = *(int *)((longlong)iVar9 * 0xd4 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar5 * 0xd4 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  puVar7 = (undefined4 *)param_3[1];
  _Src = (void *)((longlong)iVar9 * 0xd4 + *param_1);
  FShaderCacheGraphicsPipelineState::FShaderCacheGraphicsPipelineState(_Src,*param_3);
  bVar12 = false;
  *(undefined4 *)((longlong)_Src + 200) = *puVar7;
  *(undefined4 *)((longlong)_Src + 0xcc) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar9 = iVar11;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar5 = FUN_1419f0ed0(_Src);
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar5) * 4);
      if (iVar5 != -1) {
        lVar10 = *param_1;
        do {
          lVar10 = (longlong)iVar5 * 0xd4 + lVar10;
          cVar3 = operator==(lVar10,_Src);
          iVar9 = iVar5;
          if (cVar3 != '\0') break;
          iVar5 = *(int *)(lVar10 + 0xcc);
          lVar10 = *param_1;
          iVar9 = iVar11;
        } while (iVar5 != -1);
      }
    }
    bVar12 = iVar9 != -1;
    if (bVar12) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar9 * 0xd4 + *param_1),_Src,0xcc);
      iVar5 = *param_2;
      bVar2 = (byte)iVar5 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0xd4 + *param_1) = iVar5;
      }
      puVar7 = (undefined4 *)((longlong)iVar5 * 0xd4 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar11 = (int)param_1[6];
      }
      puVar7[1] = iVar11;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar5;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar8 +
                       (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_1419cfd92;
    }
  }
  cVar3 = FUN_1419e5a00(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar3 == '\0') {
    iVar11 = *param_2;
    uVar6 = FUN_1419f0ed0(_Src);
    uVar6 = (int)param_1[9] - 1U & uVar6;
    *(uint *)((longlong)_Src + 0xd0) = uVar6;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0xcc) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         iVar11;
  }
LAB_1419cfd92:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 1419cfdc0 FUN_1419cfdc0 body=474 status=ok
// SIG undefined FUN_1419cfdc0(void)

int * FUN_1419cfdc0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  void *_Src;
  longlong lVar7;
  void *_Dst;
  bool bVar8;
  int local_38 [2];
  void *local_30;
  
  TSparseArray<TSetElement<TTuple<FRHIGraphicsPipelineState_*,FShaderCacheGraphicsPipelineState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  _Src = local_30;
  uVar1 = *param_3;
  plVar6 = (longlong *)param_3[1];
  *param_2 = local_38[0];
  FShaderCacheGraphicsPipelineState::FShaderCacheGraphicsPipelineState(local_30,uVar1);
  lVar2 = *plVar6;
  *(longlong *)((longlong)_Src + 200) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    _Src = local_30;
  }
  *(undefined4 *)((longlong)_Src + 0xd0) = 0xffffffff;
  bVar8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar4 = FUN_1419f0ed0(_Src);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar4) * 4);
      if (iVar4 != -1) {
        lVar2 = *param_1;
        do {
          lVar7 = (longlong)iVar4 * 0xd8 + lVar2;
          cVar3 = operator==(lVar7,_Src);
          if (cVar3 != '\0') goto LAB_1419cfeac;
          iVar4 = *(int *)(lVar7 + 0xd0);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_1419cfeac:
    bVar8 = iVar4 != -1;
    if (bVar8) {
      _Dst = (void *)((longlong)iVar4 * 0xd8 + *param_1);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>((longlong)_Dst + 200);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0xd0);
      TSparseArray<TSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar4;
      goto LAB_1419cff71;
    }
  }
  cVar3 = FUN_1419e5ab0(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar3 == '\0') {
    iVar4 = *param_2;
    uVar5 = FUN_1419f0ed0(_Src);
    uVar5 = (int)param_1[9] - 1U & uVar5;
    *(uint *)((longlong)_Src + 0xd4) = uVar5;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0xd0) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) = iVar4
    ;
  }
LAB_1419cff71:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 1419cffa0 FUN_1419cffa0 body=554 status=ok
// SIG undefined FUN_1419cffa0(void)

uint * FUN_1419cffa0(longlong *param_1,uint *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined4 uVar14;
  void *_Dst;
  bool bVar15;
  uint local_res8 [2];
  uint local_38 [2];
  undefined4 *local_30;
  
  TSparseArray<TSetElement<TTuple<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar12 = (undefined4 *)param_3[1];
  uVar14 = 0xffffffff;
  *param_2 = local_38[0];
  puVar4 = (undefined4 *)*param_3;
  local_res8[0] = local_res8[0] & 0xffffff00;
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  uVar8 = puVar4[3];
  *local_30 = *puVar4;
  local_30[1] = uVar6;
  local_30[2] = uVar7;
  local_30[3] = uVar8;
  uVar6 = puVar4[5];
  uVar7 = puVar4[6];
  uVar8 = puVar4[7];
  local_30[4] = puVar4[4];
  local_30[5] = uVar6;
  local_30[6] = uVar7;
  local_30[7] = uVar8;
  local_30[8] = *puVar12;
  *(undefined8 *)(local_30 + 10) = 0;
  *(undefined8 *)(local_30 + 10) = *(undefined8 *)(puVar12 + 2);
  *(undefined8 *)(puVar12 + 2) = 0;
  local_30[0xc] = puVar12[4];
  local_30[0xd] = puVar12[5];
  *(undefined8 *)(puVar12 + 4) = 0;
  local_30[0xe] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>_>,TDefaultMapHashableKeyFuncs<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,local_30);
    uVar10 = local_res8[0];
    lVar13 = (longlong)(int)local_res8[0];
    bVar15 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar15);
    if (bVar15) {
      _Dst = (void *)(lVar13 * 0x40 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x28) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x38);
      uVar2 = *param_2;
      bVar5 = (byte)uVar2 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x40 + *param_1) = uVar2;
      }
      puVar12 = (undefined4 *)((longlong)(int)uVar2 * 0x40 + *param_1);
      *puVar12 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar14 = (undefined4)param_1[6];
      }
      puVar12[1] = uVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar2;
      plVar11 = (longlong *)param_1[4];
      *param_2 = uVar10;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar11 +
                       (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_1419d0192;
    }
  }
  cVar9 = FUN_1419e5c10(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar9 == '\0') {
    uVar10 = local_30[6];
    uVar2 = *param_2;
    if (uVar10 == 0) {
      iVar3 = local_30[5];
      bVar5 = *(byte *)(local_30 + 7);
      uVar10 = FCrc::MemCrc_DEPRECATED(local_30,0x14,0);
      uVar10 = uVar10 ^ iVar3 << 0x10 ^ (uint)bVar5;
      local_30[6] = uVar10;
    }
    uVar10 = (int)param_1[9] - 1U & uVar10;
    local_30[0xf] = uVar10;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    local_30[0xe] =
         *(undefined4 *)
          ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(uint *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         uVar2;
  }
LAB_1419d0192:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1419d01d0 FUN_1419d01d0 body=591 status=ok
// SIG undefined FUN_1419d01d0(void)

uint * FUN_1419d01d0(longlong *param_1,uint *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 *_Src;
  undefined4 uVar15;
  bool bVar16;
  uint local_res8 [2];
  
  uVar15 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar11 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar11 + 1)) {
      TArray<UTTLCameraModifier::FTTLCameraPostFx,FDefaultAllocator>::ResizeGrow(param_1,uVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar11 = *(uint *)(param_1 + 6);
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)(int)uVar11 * 0x2c + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x2c + *param_1) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = uVar11;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar13 +
                   (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar11 & 0x1f);
  puVar12 = (undefined4 *)*param_3;
  _Src = (undefined4 *)((longlong)(int)uVar11 * 0x2c + *param_1);
  puVar4 = (undefined4 *)param_3[1];
  uVar6 = puVar12[1];
  uVar7 = puVar12[2];
  uVar8 = puVar12[3];
  *_Src = *puVar12;
  _Src[1] = uVar6;
  _Src[2] = uVar7;
  _Src[3] = uVar8;
  uVar6 = puVar12[5];
  uVar7 = puVar12[6];
  uVar8 = puVar12[7];
  _Src[4] = puVar12[4];
  _Src[5] = uVar6;
  _Src[6] = uVar7;
  _Src[7] = uVar8;
  _Src[8] = *puVar4;
  _Src[9] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FShaderCacheKey,int>,TDefaultMapKeyFuncs<FShaderCacheKey,int,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar11 = local_res8[0];
    lVar14 = (longlong)(int)local_res8[0];
    bVar16 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar16);
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)(lVar14 * 0x2c + *param_1),_Src,0x24);
      uVar3 = *param_2;
      bVar5 = (byte)uVar3 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x2c + *param_1) = uVar3;
      }
      puVar12 = (undefined4 *)((longlong)(int)uVar3 * 0x2c + *param_1);
      *puVar12 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar15 = (undefined4)param_1[6];
      }
      puVar12[1] = uVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar3;
      plVar13 = (longlong *)param_1[4];
      *param_2 = uVar11;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar13 +
                       (longlong)((int)(uVar3 + ((int)uVar3 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_1419d03f9;
    }
  }
  cVar9 = TSet<TTuple<FGameplayTag,FPrimaryAssetId>,TDefaultMapHashableKeyFuncs<FGameplayTag,FPrimaryAssetId,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar9 == '\0') {
    uVar11 = _Src[6];
    uVar3 = *param_2;
    if (uVar11 == 0) {
      iVar2 = _Src[5];
      bVar5 = *(byte *)(_Src + 7);
      uVar11 = FCrc::MemCrc_DEPRECATED(_Src,0x14,0);
      uVar11 = uVar11 ^ iVar2 << 0x10 ^ (uint)bVar5;
      _Src[6] = uVar11;
    }
    uVar11 = (int)param_1[9] - 1U & uVar11;
    _Src[10] = uVar11;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    _Src[9] = *(undefined4 *)
               ((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(uint *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         uVar3;
  }
LAB_1419d03f9:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1419d0420 FUN_1419d0420 body=726 status=ok
// SIG undefined FUN_1419d0420(void)

int * FUN_1419d0420(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined4 *_Src;
  int iVar13;
  void *_Dst;
  uint uVar14;
  char cVar15;
  undefined4 uVar16;
  bool local_res8;
  int local_res10 [2];
  
  iVar13 = 1;
  uVar16 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x30);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar12 +
                   (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  puVar10 = (undefined4 *)*param_3;
  plVar12 = (longlong *)param_3[1];
  _Src = (undefined4 *)((longlong)iVar11 * 0x30 + *param_1);
  uVar5 = puVar10[1];
  uVar6 = puVar10[2];
  uVar7 = puVar10[3];
  *_Src = *puVar10;
  _Src[1] = uVar5;
  _Src[2] = uVar6;
  _Src[3] = uVar7;
  uVar5 = puVar10[5];
  uVar6 = puVar10[6];
  uVar7 = puVar10[7];
  _Src[4] = puVar10[4];
  _Src[5] = uVar5;
  _Src[6] = uVar6;
  _Src[7] = uVar7;
  lVar3 = *plVar12;
  *(longlong *)(_Src + 8) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  _Src[10] = 0xffffffff;
  local_res8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FUN_1419ed7a0(param_1,local_res10,_Src);
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)local_res10[0] * 0x30 + *param_1);
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>((longlong)_Dst + 0x20);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x28);
      iVar13 = *param_2;
      bVar4 = (byte)iVar13 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x30) = iVar13;
      }
      puVar10 = (undefined4 *)((longlong)iVar13 * 0x30 + *param_1);
      *puVar10 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar16 = (undefined4)param_1[6];
      }
      puVar10[1] = uVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar13;
      plVar12 = (longlong *)param_1[4];
      *param_2 = local_res10[0];
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar12 +
                       (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1419d06cd;
    }
  }
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar14) {
    uVar9 = (uVar14 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar11 = 0x20;
    cVar15 = '\0';
    if (uVar9 != 0) {
      iVar11 = 0x1f - iVar13;
    }
    uVar9 = (uVar14 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar9 != 0) {
      cVar15 = '\x1f' - (char)iVar13;
    }
    iVar13 = 1 << (~(byte)((iVar11 << 0x1a) >> 0x1f) & 0x20U - cVar15 & 0x1f);
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar13 <= (int)param_1[9])))) {
    uVar14 = _Src[6];
    iVar13 = *param_2;
    if (uVar14 == 0) {
      iVar11 = _Src[5];
      bVar4 = *(byte *)(_Src + 7);
      uVar14 = FCrc::MemCrc_DEPRECATED(_Src,0x14,0);
      uVar14 = uVar14 ^ iVar11 << 0x10 ^ (uint)bVar4;
      _Src[6] = uVar14;
    }
    uVar14 = (int)param_1[9] - 1U & uVar14;
    _Src[0xb] = uVar14;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    _Src[10] = *(undefined4 *)
                ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         iVar13;
  }
  else {
    *(int *)(param_1 + 9) = iVar13;
    FUN_141a05ef0(param_1);
  }
LAB_1419d06cd:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1419d0700 FUN_1419d0700 body=726 status=ok
// SIG undefined FUN_1419d0700(void)

int * FUN_1419d0700(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined4 *_Src;
  int iVar13;
  void *_Dst;
  uint uVar14;
  char cVar15;
  undefined4 uVar16;
  bool local_res8;
  int local_res10 [2];
  
  iVar13 = 1;
  uVar16 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x30);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar12 +
                   (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  puVar10 = (undefined4 *)*param_3;
  plVar12 = (longlong *)param_3[1];
  _Src = (undefined4 *)((longlong)iVar11 * 0x30 + *param_1);
  uVar5 = puVar10[1];
  uVar6 = puVar10[2];
  uVar7 = puVar10[3];
  *_Src = *puVar10;
  _Src[1] = uVar5;
  _Src[2] = uVar6;
  _Src[3] = uVar7;
  uVar5 = puVar10[5];
  uVar6 = puVar10[6];
  uVar7 = puVar10[7];
  _Src[4] = puVar10[4];
  _Src[5] = uVar5;
  _Src[6] = uVar6;
  _Src[7] = uVar7;
  lVar3 = *plVar12;
  *(longlong *)(_Src + 8) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  _Src[10] = 0xffffffff;
  local_res8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FUN_1419ed7a0(param_1,local_res10,_Src);
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)local_res10[0] * 0x30 + *param_1);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>((longlong)_Dst + 0x20);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x28);
      iVar13 = *param_2;
      bVar4 = (byte)iVar13 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x30) = iVar13;
      }
      puVar10 = (undefined4 *)((longlong)iVar13 * 0x30 + *param_1);
      *puVar10 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar16 = (undefined4)param_1[6];
      }
      puVar10[1] = uVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar13;
      plVar12 = (longlong *)param_1[4];
      *param_2 = local_res10[0];
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar12 +
                       (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1419d09ad;
    }
  }
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar14) {
    uVar9 = (uVar14 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar11 = 0x20;
    cVar15 = '\0';
    if (uVar9 != 0) {
      iVar11 = 0x1f - iVar13;
    }
    uVar9 = (uVar14 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar9 != 0) {
      cVar15 = '\x1f' - (char)iVar13;
    }
    iVar13 = 1 << (~(byte)((iVar11 << 0x1a) >> 0x1f) & 0x20U - cVar15 & 0x1f);
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar13 <= (int)param_1[9])))) {
    uVar14 = _Src[6];
    iVar13 = *param_2;
    if (uVar14 == 0) {
      iVar11 = _Src[5];
      bVar4 = *(byte *)(_Src + 7);
      uVar14 = FCrc::MemCrc_DEPRECATED(_Src,0x14,0);
      uVar14 = uVar14 ^ iVar11 << 0x10 ^ (uint)bVar4;
      _Src[6] = uVar14;
    }
    uVar14 = (int)param_1[9] - 1U & uVar14;
    _Src[0xb] = uVar14;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    _Src[10] = *(undefined4 *)
                ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         iVar13;
  }
  else {
    *(int *)(param_1 + 9) = iVar13;
    FUN_141a05ef0(param_1);
  }
LAB_1419d09ad:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1419d09e0 FUN_1419d09e0 body=696 status=ok
// SIG undefined FUN_1419d09e0(void)

int * FUN_1419d09e0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  int iVar9;
  void *_Dst;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  
  iVar11 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<3576,8>_>,FDefaultAllocator>::
      ResizeGrow(param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar5 = *(int *)((longlong)iVar9 * 0xdf8 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar5 * 0xdf8 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  puVar7 = (undefined4 *)param_3[1];
  _Dst = (void *)((longlong)iVar9 * 0xdf8 + *param_1);
  _guard_xfg_dispatch_icall_nop(_Dst,(void *)*param_3,0xde8);
  bVar12 = false;
  *(undefined4 *)((longlong)_Dst + 0xde8) = *puVar7;
  *(undefined4 *)((longlong)_Dst + 0xdf0) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar9 = iVar11;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar5 = GetTypeHash(_Dst);
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar5) * 4);
      if (iVar5 != -1) {
        lVar10 = *param_1;
        do {
          lVar10 = (longlong)iVar5 * 0xdf8 + lVar10;
          cVar3 = operator==(lVar10,_Dst);
          iVar9 = iVar5;
          if (cVar3 != '\0') break;
          iVar5 = *(int *)(lVar10 + 0xdf0);
          lVar10 = *param_1;
          iVar9 = iVar11;
        } while (iVar5 != -1);
      }
    }
    bVar12 = iVar9 != -1;
    if (bVar12) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar9 * 0xdf8 + *param_1),_Dst,0xdf0);
      iVar5 = *param_2;
      bVar2 = (byte)iVar5 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0xdf8 + *param_1) = iVar5;
      }
      puVar7 = (undefined4 *)((longlong)iVar5 * 0xdf8 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar11 = (int)param_1[6];
      }
      puVar7[1] = iVar11;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar5;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar8 +
                       (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_1419d0c6b;
    }
  }
  cVar3 = FUN_1419e5d70(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar3 == '\0') {
    iVar11 = *param_2;
    uVar6 = GetTypeHash(_Dst);
    uVar6 = (int)param_1[9] - 1U & uVar6;
    *(uint *)((longlong)_Dst + 0xdf4) = uVar6;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Dst + 0xdf0) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         iVar11;
  }
LAB_1419d0c6b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 1419d0ca0 FUN_1419d0ca0 body=671 status=ok
// SIG undefined FUN_1419d0ca0(void)

int * FUN_1419d0ca0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  uint *_Src;
  int iVar14;
  bool bVar15;
  
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar13 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar10 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x18);
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar10 * 0x18) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar11;
  lVar5 = (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar12 = (uint *)((longlong)plVar7 + lVar5);
  *puVar12 = *puVar12 | 1 << ((byte)iVar11 & 0x1f);
  lVar1 = (longlong)iVar11 * 0x18;
  puVar12 = (uint *)param_3[1];
  _Src = (uint *)(*param_1 + lVar1);
  param_3 = (undefined8 *)*param_3;
  bVar15 = false;
  *(undefined8 *)_Src = *param_3;
  _Src[2] = *(uint *)(param_3 + 1);
  _Src[3] = *puVar12;
  _Src[4] = 0xffffffff;
  iVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar13 != 1) {
    iVar10 = iVar14;
    if (iVar13 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar7 +
                      ((longlong)(int)(*_Src ^ _Src[1]) & (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar9 != -1) {
        lVar2 = *param_1;
        do {
          lVar6 = (longlong)iVar9;
          if ((*(uint *)(lVar2 + lVar6 * 0x18) == *_Src) &&
             (*(uint *)(lVar2 + 4 + lVar6 * 0x18) == _Src[1])) {
            bVar15 = true;
          }
          else {
            bVar15 = false;
          }
          iVar10 = iVar9;
        } while ((!bVar15) &&
                (iVar9 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18), iVar10 = iVar14, iVar9 != -1));
      }
    }
    bVar15 = iVar10 != -1;
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar10 * 0x18),_Src,0x10);
      bVar3 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar11;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar1 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar2) = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar12 = (uint *)((longlong)plVar7 + lVar5);
      *puVar12 = *puVar12 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1419d0f15;
    }
  }
  cVar4 = TSet<TTuple<ULandscapeLayerInfoObject_*,float>,TDefaultMapHashableKeyFuncs<ULandscapeLayerInfoObject_*,float,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar13,0);
  if (cVar4 == '\0') {
    uVar8 = (_Src[1] ^ *_Src) & (int)param_1[9] - 1U;
    _Src[5] = uVar8;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    _Src[4] = *(uint *)((longlong)plVar7 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_1419d0f15:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 1419d0f40 FUN_1419d0f40 body=729 status=ok
// SIG undefined FUN_1419d0f40(void)

int * FUN_1419d0f40(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  byte bVar5;
  char cVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined1 uVar9;
  int iVar10;
  longlong lVar11;
  uint *_Src;
  uint uVar12;
  undefined4 uVar13;
  bool bVar14;
  int local_res8 [2];
  
  uVar13 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar2 = *(int *)((longlong)iVar10 * 0x40 + 4 + *param_1);
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + *param_1) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  puVar1 = (uint *)*param_3;
  _Src = (uint *)((longlong)iVar10 * 0x40 + *param_1);
  puVar4 = (undefined8 *)param_3[1];
  *_Src = *puVar1;
  _Src[1] = puVar1[1];
  _Src[2] = puVar1[2];
  _Src[3] = puVar1[3];
  _Src[4] = puVar1[4];
  _Src[5] = puVar1[5];
  _Src[6] = puVar1[6];
  *(char *)(_Src + 7) = (char)puVar1[7];
  *(undefined1 *)((longlong)_Src + 0x1d) = *(undefined1 *)((longlong)puVar1 + 0x1d);
  _Src[8] = puVar1[8];
  _Src[9] = puVar1[9];
  _Src[10] = puVar1[10];
  *(undefined8 *)(_Src + 0xc) = *puVar4;
  _Src[0xe] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FShaderRenderTargetKey,FRHITexture_*>,TDefaultMapHashableKeyFuncs<FShaderRenderTargetKey,FRHITexture_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    iVar10 = local_res8[0];
    lVar11 = (longlong)local_res8[0];
    bVar14 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    if (bVar14) {
      _guard_xfg_dispatch_icall_nop((void *)(lVar11 * 0x40 + *param_1),_Src,0x38);
      iVar3 = *param_2;
      bVar5 = (byte)iVar3 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x40 + *param_1) = iVar3;
      }
      puVar8 = (undefined4 *)((longlong)iVar3 * 0x40 + *param_1);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar13 = (undefined4)param_1[6];
      }
      puVar8[1] = uVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar3;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar7 +
                       (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      uVar9 = (undefined1)local_res8[0];
      goto LAB_1419d11f8;
    }
  }
  uVar9 = 0;
  cVar6 = TSet<TTuple<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*>,TDefaultMapHashableKeyFuncs<FBoundShaderStateLookupKey,FCachedBoundShaderStateLink_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar6 == '\0') {
    uVar12 = _Src[8];
    iVar10 = *param_2;
    if (uVar12 == 0) {
      uVar12 = *_Src;
      if (uVar12 == 0) {
        uVar12 = (_Src[5] << 8 ^ _Src[6]) << 8 ^ (uint)(byte)_Src[7] << 0x18 ^ _Src[2] * 2 ^
                 _Src[1] * 3 ^ (uint)*(byte *)((longlong)_Src + 0x1d) ^ _Src[4] ^ _Src[3];
        *_Src = uVar12;
      }
      uVar12 = _Src[9] << 8 ^ _Src[10] ^ uVar12;
      _Src[8] = uVar12;
    }
    uVar12 = (int)param_1[9] - 1U & uVar12;
    _Src[0xf] = uVar12;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    _Src[0xe] = *(uint *)((longlong)plVar7 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar10;
  }
LAB_1419d11f8:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar9;
  }
  return param_2;
}



// FUNCTION 1419d1220 FUN_1419d1220 body=712 status=ok
// SIG undefined FUN_1419d1220(void)

int * FUN_1419d1220(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  undefined1 uVar9;
  int iVar10;
  longlong lVar11;
  uint *_Src;
  uint uVar12;
  undefined4 uVar13;
  bool bVar14;
  int local_res8 [2];
  
  uVar13 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar10 * 0x38 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  puVar1 = (uint *)*param_3;
  _Src = (uint *)((longlong)iVar10 * 0x38 + *param_1);
  puVar3 = (uint *)param_3[1];
  *_Src = *puVar1;
  _Src[1] = puVar1[1];
  _Src[2] = puVar1[2];
  _Src[3] = puVar1[3];
  _Src[4] = puVar1[4];
  _Src[5] = puVar1[5];
  _Src[6] = puVar1[6];
  *(char *)(_Src + 7) = (char)puVar1[7];
  *(undefined1 *)((longlong)_Src + 0x1d) = *(undefined1 *)((longlong)puVar1 + 0x1d);
  _Src[8] = puVar1[8];
  _Src[9] = puVar1[9];
  _Src[10] = puVar1[10];
  _Src[0xb] = *puVar3;
  _Src[0xc] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FShaderRenderTargetKey,int>,TDefaultMapKeyFuncs<FShaderRenderTargetKey,int,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    iVar10 = local_res8[0];
    lVar11 = (longlong)local_res8[0];
    bVar14 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    if (bVar14) {
      _guard_xfg_dispatch_icall_nop((void *)(lVar11 * 0x38 + *param_1),_Src,0x30);
      iVar2 = *param_2;
      bVar4 = (byte)iVar2 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x38 + *param_1) = iVar2;
      }
      puVar7 = (undefined4 *)((longlong)iVar2 * 0x38 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar13 = (undefined4)param_1[6];
      }
      puVar7[1] = uVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar2;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar8 +
                       (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      uVar9 = (undefined1)local_res8[0];
      goto LAB_1419d14c7;
    }
  }
  uVar9 = 0;
  cVar5 = FUN_1419e5ed0(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar5 == '\0') {
    uVar12 = _Src[8];
    iVar10 = *param_2;
    if (uVar12 == 0) {
      uVar12 = *_Src;
      if (uVar12 == 0) {
        uVar12 = (_Src[5] << 8 ^ _Src[6]) << 8 ^ (uint)(byte)_Src[7] << 0x18 ^ _Src[2] * 2 ^
                 _Src[1] * 3 ^ (uint)*(byte *)((longlong)_Src + 0x1d) ^ _Src[4] ^ _Src[3];
        *_Src = uVar12;
      }
      uVar12 = _Src[9] << 8 ^ _Src[10] ^ uVar12;
      _Src[8] = uVar12;
    }
    uVar12 = (int)param_1[9] - 1U & uVar12;
    _Src[0xd] = uVar12;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    _Src[0xc] = *(uint *)((longlong)plVar8 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar10;
  }
LAB_1419d14c7:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar9;
  }
  return param_2;
}



// FUNCTION 1419d14f0 FUN_1419d14f0 body=671 status=ok
// SIG undefined FUN_1419d14f0(void)

int * FUN_1419d14f0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  char cVar14;
  undefined4 *_Src;
  bool bVar15;
  int local_res8 [2];
  
  iVar12 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x50);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x50) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar10 +
                   (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  puVar3 = (undefined4 *)*param_3;
  puVar4 = (undefined4 *)param_3[1];
  bVar15 = false;
  _Src = (undefined4 *)((longlong)iVar11 * 0x50 + *param_1);
  *_Src = *puVar3;
  _Src[1] = puVar3[1];
  _Src[2] = puVar3[2];
  _Src[3] = puVar3[3];
  _Src[4] = puVar3[4];
  _Src[5] = puVar3[5];
  _Src[6] = puVar3[6];
  *(undefined1 *)(_Src + 7) = *(undefined1 *)(puVar3 + 7);
  *(undefined1 *)((longlong)_Src + 0x1d) = *(undefined1 *)((longlong)puVar3 + 0x1d);
  _Src[8] = puVar3[8];
  _Src[9] = puVar3[9];
  _Src[10] = puVar3[10];
  *(undefined1 *)(_Src + 0xb) = *(undefined1 *)(puVar3 + 0xb);
  *(undefined1 *)((longlong)_Src + 0x2d) = *(undefined1 *)((longlong)puVar3 + 0x2d);
  uVar5 = puVar4[1];
  uVar6 = puVar4[2];
  uVar7 = puVar4[3];
  _Src[0xc] = *puVar4;
  _Src[0xd] = uVar5;
  _Src[0xe] = uVar6;
  _Src[0xf] = uVar7;
  *(undefined8 *)(_Src + 0x10) = *(undefined8 *)(puVar4 + 4);
  _Src[0x12] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FShaderResourceKey,FShaderResourceViewBinding>,TDefaultMapHashableKeyFuncs<FShaderResourceKey,FShaderResourceViewBinding,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    bVar15 = local_res8[0] != -1;
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)local_res8[0] * 0x50 + *param_1),_Src,0x48);
      TSparseArray<TSetElement<FCachedLandscapeFoliage::FGrassComp>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1419d1766;
    }
  }
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar13) {
    uVar9 = (uVar13 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar11 = 0x20;
    cVar14 = '\0';
    if (uVar9 != 0) {
      iVar11 = 0x1f - iVar12;
    }
    uVar9 = (uVar13 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar9 != 0) {
      cVar14 = '\x1f' - (char)iVar12;
    }
    iVar12 = 1 << (~(byte)((iVar11 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar12 <= (int)param_1[9])))) {
    iVar12 = *param_2;
    uVar13 = GetTypeHash(_Src);
    uVar13 = (int)param_1[9] - 1U & uVar13;
    _Src[0x13] = uVar13;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    _Src[0x12] = *(undefined4 *)
                  ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4)
    ;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar12;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    FUN_141a06e90(param_1);
  }
LAB_1419d1766:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 1419d1790 FUN_1419d1790 body=640 status=ok
// SIG undefined FUN_1419d1790(void)

uint * FUN_1419d1790(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 *_Src;
  bool bVar13;
  uint local_res8 [2];
  
  uVar12 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar10 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar10 + 1)) {
      FUN_141a09b60(param_1,uVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar10 = *(uint *)(param_1 + 6);
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)(int)uVar10 * 0x3c + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x3c + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = uVar10;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar9 +
                   (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar10 & 0x1f);
  puVar8 = (undefined4 *)*param_3;
  _Src = (undefined4 *)((longlong)(int)uVar10 * 0x3c + *param_1);
  puVar3 = (undefined4 *)param_3[1];
  *_Src = *puVar8;
  _Src[1] = puVar8[1];
  _Src[2] = puVar8[2];
  _Src[3] = puVar8[3];
  _Src[4] = puVar8[4];
  _Src[5] = puVar8[5];
  _Src[6] = puVar8[6];
  *(undefined1 *)(_Src + 7) = *(undefined1 *)(puVar8 + 7);
  *(undefined1 *)((longlong)_Src + 0x1d) = *(undefined1 *)((longlong)puVar8 + 0x1d);
  _Src[8] = puVar8[8];
  _Src[9] = puVar8[9];
  _Src[10] = puVar8[10];
  *(undefined1 *)(_Src + 0xb) = *(undefined1 *)(puVar8 + 0xb);
  *(undefined1 *)((longlong)_Src + 0x2d) = *(undefined1 *)((longlong)puVar8 + 0x2d);
  _Src[0xc] = *puVar3;
  _Src[0xd] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FShaderResourceKey,int>,TDefaultMapKeyFuncs<FShaderResourceKey,int,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar10 = local_res8[0];
    lVar11 = (longlong)(int)local_res8[0];
    bVar13 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar13);
    if (bVar13) {
      _guard_xfg_dispatch_icall_nop((void *)(lVar11 * 0x3c + *param_1),_Src,0x34);
      uVar7 = *param_2;
      bVar4 = (byte)uVar7 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x3c + *param_1) = uVar7;
      }
      puVar8 = (undefined4 *)((longlong)(int)uVar7 * 0x3c + *param_1);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar12 = (undefined4)param_1[6];
      }
      puVar8[1] = uVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar7;
      plVar9 = (longlong *)param_1[4];
      *param_2 = uVar10;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar9 +
                       (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1419d19ea;
    }
  }
  cVar5 = FUN_1419e6030(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar5 == '\0') {
    uVar10 = *param_2;
    uVar7 = GetTypeHash(_Src);
    uVar7 = (int)param_1[9] - 1U & uVar7;
    _Src[0xe] = uVar7;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    _Src[0xd] = *(undefined4 *)
                 ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(uint *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         uVar10;
  }
LAB_1419d19ea:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1419d1a10 FUN_1419d1a10 body=681 status=ok
// SIG undefined FUN_1419d1a10(void)

int * FUN_1419d1a10(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  uint *_Src;
  uint uVar9;
  char cVar10;
  bool bVar11;
  int local_res8 [2];
  
  iVar8 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar6 * 0x30);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  puVar1 = (uint *)*param_3;
  puVar3 = (undefined8 *)param_3[1];
  bVar11 = false;
  _Src = (uint *)((longlong)iVar6 * 0x30 + *param_1);
  *_Src = *puVar1;
  _Src[1] = puVar1[1];
  _Src[2] = puVar1[2];
  _Src[3] = puVar1[3];
  _Src[4] = puVar1[4];
  _Src[5] = puVar1[5];
  _Src[6] = puVar1[6];
  *(char *)(_Src + 7) = (char)puVar1[7];
  *(undefined1 *)((longlong)_Src + 0x1d) = *(undefined1 *)((longlong)puVar1 + 0x1d);
  *(undefined8 *)(_Src + 8) = *puVar3;
  _Src[10] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FShaderTextureKey,FRHITexture_*>,TDefaultMapHashableKeyFuncs<FShaderTextureKey,FRHITexture_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    bVar11 = local_res8[0] != -1;
    if (bVar11) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)local_res8[0] * 0x30 + *param_1),_Src,0x28);
      TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1419d1c90;
    }
  }
  uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar9) {
    uVar5 = (uVar9 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar10 = '\0';
    if (uVar5 != 0) {
      iVar6 = 0x1f - iVar8;
    }
    uVar5 = (uVar9 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar10 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar9 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar9 = *_Src;
    iVar8 = *param_2;
    if (uVar9 == 0) {
      uVar9 = (_Src[5] << 8 ^ _Src[6]) << 8 ^ (uint)(byte)_Src[7] << 0x18 ^ _Src[1] * 3 ^
              _Src[2] * 2 ^ (uint)*(byte *)((longlong)_Src + 0x1d) ^ _Src[4] ^ _Src[3];
      *_Src = uVar9;
    }
    uVar9 = (int)param_1[9] - 1U & uVar9;
    _Src[0xb] = uVar9;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    _Src[10] = *(uint *)((longlong)plVar7 +
                        ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) = iVar8
    ;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    FUN_141a070b0(param_1);
  }
LAB_1419d1c90:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 1419d1cc0 FUN_1419d1cc0 body=768 status=ok
// SIG undefined FUN_1419d1cc0(void)

int * FUN_1419d1cc0(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  undefined8 *_Src;
  bool bVar18;
  
  iVar15 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar11 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar12 * 0x88 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x88 + *param_1) = 0xffffffff;
    }
  }
  plVar14 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar14 +
                   (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  puVar3 = (undefined8 *)*param_3;
  puVar4 = (undefined8 *)param_3[1];
  bVar18 = false;
  _Src = (undefined8 *)((longlong)iVar12 * 0x88 + *param_1);
  uVar9 = puVar3[1];
  *_Src = *puVar3;
  _Src[1] = uVar9;
  uVar9 = puVar3[3];
  _Src[2] = puVar3[2];
  _Src[3] = uVar9;
  uVar9 = puVar3[5];
  _Src[4] = puVar3[4];
  _Src[5] = uVar9;
  uVar9 = puVar3[7];
  _Src[6] = puVar3[6];
  _Src[7] = uVar9;
  uVar9 = puVar3[9];
  _Src[8] = puVar3[8];
  _Src[9] = uVar9;
  uVar9 = puVar3[0xb];
  _Src[10] = puVar3[10];
  _Src[0xb] = uVar9;
  uVar6 = *(undefined4 *)((longlong)puVar3 + 100);
  uVar7 = *(undefined4 *)(puVar3 + 0xd);
  uVar8 = *(undefined4 *)((longlong)puVar3 + 0x6c);
  *(undefined4 *)(_Src + 0xc) = *(undefined4 *)(puVar3 + 0xc);
  *(undefined4 *)((longlong)_Src + 100) = uVar6;
  *(undefined4 *)(_Src + 0xd) = uVar7;
  *(undefined4 *)((longlong)_Src + 0x6c) = uVar8;
  _Src[0xe] = puVar3[0xe];
  _Src[0xf] = *puVar4;
  *(undefined4 *)(_Src + 0x10) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar12 = FCrc::MemCrc_DEPRECATED(_Src,0x14,0);
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = param_1 + 7;
      }
      iVar12 = *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar12) * 4)
      ;
      if (iVar12 != -1) {
        lVar5 = *param_1;
        do {
          lVar16 = (longlong)iVar12 * 0x88 + lVar5;
          cVar10 = operator==(lVar16,_Src);
          if (cVar10 != '\0') goto LAB_1419d1e7c;
          iVar12 = *(int *)(lVar16 + 0x80);
        } while (iVar12 != -1);
      }
    }
    iVar12 = -1;
LAB_1419d1e7c:
    bVar18 = iVar12 != -1;
    if (bVar18) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar12 * 0x88 + *param_1),_Src,0x80);
      TSparseArray<TSetElement<TTuple<wchar_t,FCharacterList::FCharacterListEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar12;
      goto LAB_1419d1f8f;
    }
  }
  uVar17 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar17) {
    uVar13 = (uVar17 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar12 = 0x20;
    cVar10 = '\0';
    if (uVar13 != 0) {
      iVar12 = 0x1f - iVar15;
    }
    uVar13 = (uVar17 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar13 != 0) {
      cVar10 = '\x1f' - (char)iVar15;
    }
    iVar15 = 1 << (~(byte)((iVar12 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar17 < 1) || (((int)param_1[9] != 0 && (iVar15 <= (int)param_1[9])))) {
    iVar15 = *param_2;
    uVar17 = FCrc::MemCrc_DEPRECATED(_Src,0x14);
    uVar17 = (int)param_1[9] - 1U & uVar17;
    *(uint *)((longlong)_Src + 0x84) = uVar17;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x10) =
         *(undefined4 *)
          ((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4);
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4) =
         iVar15;
  }
  else {
    *(int *)(param_1 + 9) = iVar15;
    FUN_141a07520(param_1);
  }
LAB_1419d1f8f:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar18;
  }
  return param_2;
}



// FUNCTION 1419d1fc0 HeapSortInternal<FShaderPipeline_*,FIdentityFunctor,TDereferenceWrapper<FShaderPipeline_*,TLess<FShaderPipeline>_>_> body=746 status=ok
// SIG undefined HeapSortInternal<FShaderPipeline_*,FIdentityFunctor,TDereferenceWrapper<FShaderPipeline_*,TLess<FShaderPipeline>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FShaderPipeline_*,FIdentityFunctor,TDereferenceWrapper<FShaderPipeline_*,TLess<FShaderPipeline>_>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  bool bVar16;
  
  iVar4 = (param_2 + -2) / 2;
  if (-1 < iVar4) {
    iVar7 = iVar4 * 2 + 1;
    iVar9 = iVar7;
    iVar8 = iVar4;
joined_r0x0001419d2006:
    do {
      if (iVar7 < param_2) {
        iVar7 = iVar4 * 2;
        iVar11 = iVar7 + 1;
        if (iVar7 + 2 < param_2) {
          puVar1 = *(undefined8 **)param_1[iVar11];
          if (*(undefined8 **)param_1[(longlong)iVar7 + 2] == (undefined8 *)0x0) {
            bVar15 = puVar1 != (undefined8 *)0x0;
          }
          else if (puVar1 == (undefined8 *)0x0) {
            bVar15 = false;
          }
          else {
            pwVar3 = (wchar_t *)**(undefined8 **)param_1[(longlong)iVar7 + 2];
            lVar14 = -1;
            do {
              lVar14 = lVar14 + 1;
            } while (pwVar3[lVar14] != L'\0');
            lVar10 = -1;
            do {
              lVar10 = lVar10 + 1;
            } while (((wchar_t *)*puVar1)[lVar10] != L'\0');
            iVar12 = (int)lVar10;
            iVar5 = (int)lVar14;
            iVar6 = iVar5 - iVar12;
            bVar16 = iVar5 == iVar12;
            bVar15 = !bVar16;
            if (!bVar15) {
              iVar6 = wcsncmp(pwVar3,(wchar_t *)*puVar1,(longlong)iVar5);
              bVar16 = iVar6 == 0;
            }
            bVar15 = !bVar16 && (bVar15 && SBORROW4(iVar5,iVar12)) == iVar6 < 0;
          }
          if (bVar15) {
            iVar11 = iVar7;
          }
          iVar11 = iVar11 + 1;
        }
        puVar1 = *(undefined8 **)param_1[iVar11];
        if (*(undefined8 **)param_1[iVar4] == (undefined8 *)0x0) {
          bVar16 = puVar1 == (undefined8 *)0x0;
        }
        else {
          if (puVar1 == (undefined8 *)0x0) goto LAB_1419d2123;
          pwVar3 = (wchar_t *)**(undefined8 **)param_1[iVar4];
          lVar14 = -1;
          do {
            lVar14 = lVar14 + 1;
          } while (pwVar3[lVar14] != L'\0');
          lVar10 = -1;
          do {
            lVar10 = lVar10 + 1;
          } while (((wchar_t *)*puVar1)[lVar10] != L'\0');
          iVar5 = (int)lVar10;
          iVar6 = (int)lVar14;
          iVar7 = iVar6 - iVar5;
          bVar16 = iVar6 == iVar5;
          bVar15 = !bVar16;
          if (!bVar15) {
            iVar7 = wcsncmp(pwVar3,(wchar_t *)*puVar1,(longlong)iVar6);
            bVar16 = iVar7 == 0;
          }
          bVar16 = bVar16 || (bVar15 && SBORROW4(iVar6,iVar5)) != iVar7 < 0;
        }
        if (!bVar16) {
          uVar2 = param_1[iVar4];
          param_1[iVar4] = param_1[iVar11];
          iVar7 = iVar11 * 2 + 1;
          param_1[iVar11] = uVar2;
          iVar4 = iVar11;
          goto joined_r0x0001419d2006;
        }
      }
LAB_1419d2123:
      iVar7 = iVar9 + -2;
      iVar4 = iVar8 + -1;
      iVar9 = iVar7;
      iVar8 = iVar4;
    } while (-1 < iVar4);
  }
  param_2 = param_2 + -1;
  lVar14 = (longlong)param_2;
  if (0 < param_2) {
    do {
      iVar4 = 0;
      uVar2 = *param_1;
      *param_1 = param_1[lVar14];
      param_1[lVar14] = uVar2;
      if (1 < param_2) {
        do {
          iVar9 = iVar4 * 2;
          iVar7 = iVar9 + 1;
          if (iVar9 + 2 < param_2) {
            puVar1 = *(undefined8 **)param_1[iVar7];
            if (*(undefined8 **)param_1[(longlong)iVar9 + 2] == (undefined8 *)0x0) {
              bVar15 = puVar1 != (undefined8 *)0x0;
            }
            else if (puVar1 == (undefined8 *)0x0) {
              bVar15 = false;
            }
            else {
              pwVar3 = (wchar_t *)**(undefined8 **)param_1[(longlong)iVar9 + 2];
              lVar10 = -1;
              do {
                lVar10 = lVar10 + 1;
              } while (pwVar3[lVar10] != L'\0');
              lVar13 = -1;
              do {
                lVar13 = lVar13 + 1;
              } while (((wchar_t *)*puVar1)[lVar13] != L'\0');
              iVar6 = (int)lVar13;
              iVar11 = (int)lVar10;
              iVar8 = iVar11 - iVar6;
              bVar16 = iVar11 == iVar6;
              bVar15 = !bVar16;
              if (!bVar15) {
                iVar8 = wcsncmp(pwVar3,(wchar_t *)*puVar1,(longlong)iVar11);
                bVar16 = iVar8 == 0;
              }
              bVar15 = !bVar16 && (bVar15 && SBORROW4(iVar11,iVar6)) == iVar8 < 0;
            }
            if (bVar15) {
              iVar7 = iVar9;
            }
            iVar7 = iVar7 + 1;
          }
          puVar1 = *(undefined8 **)param_1[iVar7];
          if (*(undefined8 **)param_1[iVar4] == (undefined8 *)0x0) {
            bVar16 = puVar1 == (undefined8 *)0x0;
          }
          else {
            if (puVar1 == (undefined8 *)0x0) break;
            pwVar3 = (wchar_t *)**(undefined8 **)param_1[iVar4];
            lVar10 = -1;
            do {
              lVar10 = lVar10 + 1;
            } while (pwVar3[lVar10] != L'\0');
            lVar13 = -1;
            do {
              lVar13 = lVar13 + 1;
            } while (((wchar_t *)*puVar1)[lVar13] != L'\0');
            iVar11 = (int)lVar13;
            iVar8 = (int)lVar10;
            iVar9 = iVar8 - iVar11;
            bVar16 = iVar8 == iVar11;
            bVar15 = !bVar16;
            if (!bVar15) {
              iVar9 = wcsncmp(pwVar3,(wchar_t *)*puVar1,(longlong)iVar8);
              bVar16 = iVar9 == 0;
            }
            bVar16 = bVar16 || (bVar15 && SBORROW4(iVar8,iVar11)) != iVar9 < 0;
          }
          if (bVar16) break;
          uVar2 = param_1[iVar4];
          param_1[iVar4] = param_1[iVar7];
          param_1[iVar7] = uVar2;
          iVar4 = iVar7;
        } while (iVar7 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar14 = lVar14 + -1;
    } while (0 < lVar14);
  }
  return;
}



// FUNCTION 1419d22b0 HeapSortInternal<FShaderType_*,FIdentityFunctor,TDereferenceWrapper<FShaderType_*,FCompareShaderTypes>_> body=634 status=ok
// SIG undefined HeapSortInternal<FShaderType_*,FIdentityFunctor,TDereferenceWrapper<FShaderType_*,FCompareShaderTypes>_>(void)

void AlgoImpl::
     HeapSortInternal<FShaderType_*,FIdentityFunctor,TDereferenceWrapper<FShaderType_*,FCompareShaderTypes>_>
               (undefined8 *param_1,int param_2)

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
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  
  iVar3 = (param_2 + -2) / 2;
  if (-1 < iVar3) {
    iVar6 = iVar3 * 2 + 1;
    iVar8 = iVar6;
    iVar7 = iVar3;
joined_r0x0001419d22f6:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar3 * 2;
        iVar11 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          lVar13 = -1;
          do {
            lVar13 = lVar13 + 1;
          } while ((*(wchar_t **)(param_1[(longlong)iVar6 + 2] + 0x10))[lVar13] != L'\0');
          lVar9 = -1;
          do {
            lVar9 = lVar9 + 1;
          } while ((*(wchar_t **)(param_1[iVar11] + 0x10))[lVar9] != L'\0');
          iVar4 = (int)lVar9;
          iVar12 = (int)lVar13;
          iVar5 = iVar12 - iVar4;
          bVar14 = iVar12 == iVar4;
          bVar2 = !bVar14;
          if (!bVar2) {
            iVar5 = wcsncmp(*(wchar_t **)(param_1[(longlong)iVar6 + 2] + 0x10),
                            *(wchar_t **)(param_1[iVar11] + 0x10),(longlong)iVar12);
            bVar14 = iVar5 == 0;
          }
          if (!bVar14 && (bVar2 && SBORROW4(iVar12,iVar4)) == iVar5 < 0) {
            iVar11 = iVar6;
          }
          iVar11 = iVar11 + 1;
        }
        lVar13 = -1;
        do {
          lVar13 = lVar13 + 1;
        } while ((*(wchar_t **)(param_1[iVar3] + 0x10))[lVar13] != L'\0');
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while ((*(wchar_t **)(param_1[iVar11] + 0x10))[lVar9] != L'\0');
        iVar5 = (int)lVar9;
        iVar4 = (int)lVar13;
        iVar6 = iVar4 - iVar5;
        bVar14 = iVar4 == iVar5;
        bVar2 = !bVar14;
        if (!bVar2) {
          iVar6 = wcsncmp(*(wchar_t **)(param_1[iVar3] + 0x10),*(wchar_t **)(param_1[iVar11] + 0x10)
                          ,(longlong)iVar4);
          bVar14 = iVar6 == 0;
        }
        if (!bVar14 && (bVar2 && SBORROW4(iVar4,iVar5)) == iVar6 < 0) {
          uVar1 = param_1[iVar3];
          param_1[iVar3] = param_1[iVar11];
          iVar6 = iVar11 * 2 + 1;
          param_1[iVar11] = uVar1;
          iVar3 = iVar11;
          goto joined_r0x0001419d22f6;
        }
      }
      iVar6 = iVar8 + -2;
      iVar3 = iVar7 + -1;
      iVar8 = iVar6;
      iVar7 = iVar3;
    } while (-1 < iVar3);
  }
  param_2 = param_2 + -1;
  lVar13 = (longlong)param_2;
  if (0 < param_2) {
    do {
      uVar1 = *param_1;
      *param_1 = param_1[lVar13];
      param_1[lVar13] = uVar1;
      iVar3 = 0;
      if (1 < param_2) {
        do {
          iVar8 = iVar3 * 2;
          iVar6 = iVar8 + 1;
          if (iVar8 + 2 < param_2) {
            lVar9 = -1;
            do {
              lVar9 = lVar9 + 1;
            } while ((*(wchar_t **)(param_1[(longlong)iVar8 + 2] + 0x10))[lVar9] != L'\0');
            lVar10 = -1;
            do {
              lVar10 = lVar10 + 1;
            } while ((*(wchar_t **)(param_1[iVar6] + 0x10))[lVar10] != L'\0');
            iVar11 = (int)lVar10;
            iVar5 = (int)lVar9;
            iVar7 = iVar5 - iVar11;
            bVar14 = iVar5 == iVar11;
            bVar2 = !bVar14;
            if (!bVar2) {
              iVar7 = wcsncmp(*(wchar_t **)(param_1[(longlong)iVar8 + 2] + 0x10),
                              *(wchar_t **)(param_1[iVar6] + 0x10),(longlong)iVar5);
              bVar14 = iVar7 == 0;
            }
            if (!bVar14 && (bVar2 && SBORROW4(iVar5,iVar11)) == iVar7 < 0) {
              iVar6 = iVar8;
            }
            iVar6 = iVar6 + 1;
          }
          lVar9 = -1;
          do {
            lVar9 = lVar9 + 1;
          } while ((*(wchar_t **)(param_1[iVar3] + 0x10))[lVar9] != L'\0');
          lVar10 = -1;
          do {
            lVar10 = lVar10 + 1;
          } while ((*(wchar_t **)(param_1[iVar6] + 0x10))[lVar10] != L'\0');
          iVar11 = (int)lVar10;
          iVar7 = (int)lVar9;
          iVar8 = iVar7 - iVar11;
          bVar14 = iVar7 == iVar11;
          bVar2 = !bVar14;
          if (!bVar2) {
            iVar8 = wcsncmp(*(wchar_t **)(param_1[iVar3] + 0x10),
                            *(wchar_t **)(param_1[iVar6] + 0x10),(longlong)iVar7);
            bVar14 = iVar8 == 0;
          }
          if (bVar14 || (bVar2 && SBORROW4(iVar7,iVar11)) != iVar8 < 0) break;
          uVar1 = param_1[iVar3];
          param_1[iVar3] = param_1[iVar6];
          param_1[iVar6] = uVar1;
          iVar3 = iVar6;
        } while (iVar6 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar13 = lVar13 + -1;
    } while (0 < lVar13);
  }
  return;
}



// FUNCTION 1419d2530 HeapSortInternal<FShaderPipelineType_const_*,FIdentityFunctor,TDereferenceWrapper<FShaderPipelineType_const_*,FCompareShaderPipelineNameTypes>_> body=714 status=ok
// SIG undefined HeapSortInternal<FShaderPipelineType_const_*,FIdentityFunctor,TDereferenceWrapper<FShaderPipelineType_const_*,FCompareShaderPipelineNameTypes>_>(void)

void AlgoImpl::
     HeapSortInternal<FShaderPipelineType_const_*,FIdentityFunctor,TDereferenceWrapper<FShaderPipelineType_const_*,FCompareShaderPipelineNameTypes>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  bool bVar16;
  
  iVar4 = (param_2 + -2) / 2;
  if (-1 < iVar4) {
    iVar7 = iVar4 * 2 + 1;
    iVar9 = iVar7;
    iVar8 = iVar4;
joined_r0x0001419d2576:
    do {
      if (iVar7 < param_2) {
        iVar7 = iVar4 * 2;
        iVar11 = iVar7 + 1;
        if (iVar7 + 2 < param_2) {
          puVar1 = (undefined8 *)param_1[iVar11];
          if ((undefined8 *)param_1[(longlong)iVar7 + 2] == (undefined8 *)0x0) {
            bVar15 = puVar1 != (undefined8 *)0x0;
          }
          else if (puVar1 == (undefined8 *)0x0) {
            bVar15 = false;
          }
          else {
            pwVar3 = *(wchar_t **)param_1[(longlong)iVar7 + 2];
            lVar14 = -1;
            do {
              lVar14 = lVar14 + 1;
            } while (pwVar3[lVar14] != L'\0');
            lVar10 = -1;
            do {
              lVar10 = lVar10 + 1;
            } while (((wchar_t *)*puVar1)[lVar10] != L'\0');
            iVar12 = (int)lVar10;
            iVar5 = (int)lVar14;
            iVar6 = iVar5 - iVar12;
            bVar16 = iVar5 == iVar12;
            bVar15 = !bVar16;
            if (!bVar15) {
              iVar6 = wcsncmp(pwVar3,(wchar_t *)*puVar1,(longlong)iVar5);
              bVar16 = iVar6 == 0;
            }
            bVar15 = !bVar16 && (bVar15 && SBORROW4(iVar5,iVar12)) == iVar6 < 0;
          }
          if (bVar15) {
            iVar11 = iVar7;
          }
          iVar11 = iVar11 + 1;
        }
        puVar1 = (undefined8 *)param_1[iVar11];
        if ((undefined8 *)param_1[iVar4] == (undefined8 *)0x0) {
          bVar16 = puVar1 == (undefined8 *)0x0;
        }
        else {
          if (puVar1 == (undefined8 *)0x0) goto LAB_1419d2683;
          pwVar3 = *(wchar_t **)param_1[iVar4];
          lVar14 = -1;
          do {
            lVar14 = lVar14 + 1;
          } while (pwVar3[lVar14] != L'\0');
          lVar10 = -1;
          do {
            lVar10 = lVar10 + 1;
          } while (((wchar_t *)*puVar1)[lVar10] != L'\0');
          iVar5 = (int)lVar10;
          iVar6 = (int)lVar14;
          iVar7 = iVar6 - iVar5;
          bVar16 = iVar6 == iVar5;
          bVar15 = !bVar16;
          if (!bVar15) {
            iVar7 = wcsncmp(pwVar3,(wchar_t *)*puVar1,(longlong)iVar6);
            bVar16 = iVar7 == 0;
          }
          bVar16 = bVar16 || (bVar15 && SBORROW4(iVar6,iVar5)) != iVar7 < 0;
        }
        if (!bVar16) {
          uVar2 = param_1[iVar4];
          param_1[iVar4] = param_1[iVar11];
          iVar7 = iVar11 * 2 + 1;
          param_1[iVar11] = uVar2;
          iVar4 = iVar11;
          goto joined_r0x0001419d2576;
        }
      }
LAB_1419d2683:
      iVar7 = iVar9 + -2;
      iVar4 = iVar8 + -1;
      iVar9 = iVar7;
      iVar8 = iVar4;
    } while (-1 < iVar4);
  }
  param_2 = param_2 + -1;
  lVar14 = (longlong)param_2;
  if (0 < param_2) {
    do {
      iVar4 = 0;
      uVar2 = *param_1;
      *param_1 = param_1[lVar14];
      param_1[lVar14] = uVar2;
      if (1 < param_2) {
        do {
          iVar9 = iVar4 * 2;
          iVar7 = iVar9 + 1;
          if (iVar9 + 2 < param_2) {
            puVar1 = (undefined8 *)param_1[iVar7];
            if ((undefined8 *)param_1[(longlong)iVar9 + 2] == (undefined8 *)0x0) {
              bVar15 = puVar1 != (undefined8 *)0x0;
            }
            else if (puVar1 == (undefined8 *)0x0) {
              bVar15 = false;
            }
            else {
              pwVar3 = *(wchar_t **)param_1[(longlong)iVar9 + 2];
              lVar10 = -1;
              do {
                lVar10 = lVar10 + 1;
              } while (pwVar3[lVar10] != L'\0');
              lVar13 = -1;
              do {
                lVar13 = lVar13 + 1;
              } while (((wchar_t *)*puVar1)[lVar13] != L'\0');
              iVar6 = (int)lVar13;
              iVar11 = (int)lVar10;
              iVar8 = iVar11 - iVar6;
              bVar16 = iVar11 == iVar6;
              bVar15 = !bVar16;
              if (!bVar15) {
                iVar8 = wcsncmp(pwVar3,(wchar_t *)*puVar1,(longlong)iVar11);
                bVar16 = iVar8 == 0;
              }
              bVar15 = !bVar16 && (bVar15 && SBORROW4(iVar11,iVar6)) == iVar8 < 0;
            }
            if (bVar15) {
              iVar7 = iVar9;
            }
            iVar7 = iVar7 + 1;
          }
          puVar1 = (undefined8 *)param_1[iVar7];
          if ((undefined8 *)param_1[iVar4] == (undefined8 *)0x0) {
            bVar16 = puVar1 == (undefined8 *)0x0;
          }
          else {
            if (puVar1 == (undefined8 *)0x0) break;
            pwVar3 = *(wchar_t **)param_1[iVar4];
            lVar10 = -1;
            do {
              lVar10 = lVar10 + 1;
            } while (pwVar3[lVar10] != L'\0');
            lVar13 = -1;
            do {
              lVar13 = lVar13 + 1;
            } while (((wchar_t *)*puVar1)[lVar13] != L'\0');
            iVar11 = (int)lVar13;
            iVar8 = (int)lVar10;
            iVar9 = iVar8 - iVar11;
            bVar16 = iVar8 == iVar11;
            bVar15 = !bVar16;
            if (!bVar15) {
              iVar9 = wcsncmp(pwVar3,(wchar_t *)*puVar1,(longlong)iVar8);
              bVar16 = iVar9 == 0;
            }
            bVar16 = bVar16 || (bVar15 && SBORROW4(iVar8,iVar11)) != iVar9 < 0;
          }
          if (bVar16) break;
          uVar2 = param_1[iVar4];
          param_1[iVar4] = param_1[iVar7];
          param_1[iVar7] = uVar2;
          iVar4 = iVar7;
        } while (iVar7 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar14 = lVar14 + -1;
    } while (0 < lVar14);
  }
  return;
}



// FUNCTION 1419d2800 HeapSortInternal<TShaderTypePermutation<FShaderType>,FIdentityFunctor,TDereferenceWrapper<TShaderTypePermutation<FShaderType>,TShaderMap<FGlobalShaderType>::FCompareShaderPrimaryKey>_> body=837 status=ok
// SIG undefined HeapSortInternal<TShaderTypePermutation<FShaderType>,FIdentityFunctor,TDereferenceWrapper<TShaderTypePermutation<FShaderType>,TShaderMap<FGlobalShaderType>::FCompareShaderPrimaryKey>_>(void)

void AlgoImpl::
     HeapSortInternal<TShaderTypePermutation<FShaderType>,FIdentityFunctor,TDereferenceWrapper<TShaderTypePermutation<FShaderType>,TShaderMap<FGlobalShaderType>::FCompareShaderPrimaryKey>_>
               (undefined8 *param_1,int param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined8 *puVar19;
  bool bVar20;
  bool bVar21;
  
  iVar9 = (param_2 + -2) / 2;
  if (-1 < iVar9) {
    iVar11 = iVar9 * 2 + 1;
    iVar13 = iVar11;
    iVar12 = iVar9;
joined_r0x0001419d2846:
    do {
      if (iVar11 < param_2) {
        iVar11 = iVar9 * 2;
        iVar15 = iVar11 + 1;
        if (iVar11 + 2 < param_2) {
          lVar18 = -1;
          pwVar1 = *(wchar_t **)(param_1[((longlong)iVar11 + 2) * 2] + 0x10);
          do {
            lVar18 = lVar18 + 1;
          } while (pwVar1[lVar18] != L'\0');
          pwVar2 = *(wchar_t **)(param_1[(longlong)iVar15 * 2] + 0x10);
          lVar14 = -1;
          do {
            lVar14 = lVar14 + 1;
          } while (pwVar2[lVar14] != L'\0');
          iVar10 = (int)lVar18;
          if (iVar10 == (int)lVar14) {
            iVar10 = wcsncmp(pwVar1,pwVar2,(longlong)iVar10);
            if ((iVar10 < 1) &&
               ((int)(param_1 + ((longlong)iVar11 + 2) * 2)[1] <=
                (int)(param_1 + (longlong)iVar15 * 2)[1])) {
              bVar20 = false;
            }
            else {
              bVar20 = true;
            }
          }
          else {
            bVar20 = (int)lVar14 < iVar10;
          }
          if (bVar20) {
            iVar15 = iVar11;
          }
          iVar15 = iVar15 + 1;
        }
        lVar18 = -1;
        plVar17 = param_1 + (longlong)iVar9 * 2;
        plVar16 = param_1 + (longlong)iVar15 * 2;
        do {
          lVar18 = lVar18 + 1;
        } while ((*(wchar_t **)(*plVar17 + 0x10))[lVar18] != L'\0');
        lVar14 = -1;
        do {
          lVar14 = lVar14 + 1;
        } while ((*(wchar_t **)(*plVar16 + 0x10))[lVar14] != L'\0');
        iVar9 = (int)lVar18;
        if (iVar9 == (int)lVar14) {
          iVar9 = wcsncmp(*(wchar_t **)(*plVar17 + 0x10),*(wchar_t **)(*plVar16 + 0x10),
                          (longlong)iVar9);
          if ((0 < iVar9) || ((int)plVar16[1] < (int)plVar17[1])) {
LAB_1419d295d:
            if (plVar17 != plVar16) {
              uVar3 = *(undefined4 *)((longlong)plVar16 + 4);
              lVar8 = plVar16[1];
              uVar4 = *(undefined4 *)((longlong)plVar16 + 0xc);
              lVar18 = *plVar17;
              lVar14 = plVar17[1];
              *(int *)plVar17 = (int)*plVar16;
              *(undefined4 *)((longlong)plVar17 + 4) = uVar3;
              *(int *)(plVar17 + 1) = (int)lVar8;
              *(undefined4 *)((longlong)plVar17 + 0xc) = uVar4;
              *plVar16 = lVar18;
              plVar16[1] = lVar14;
            }
            iVar11 = iVar15 * 2 + 1;
            iVar9 = iVar15;
            goto joined_r0x0001419d2846;
          }
        }
        else if ((int)lVar14 < iVar9) goto LAB_1419d295d;
      }
      iVar11 = iVar13 + -2;
      iVar9 = iVar12 + -1;
      iVar13 = iVar11;
      iVar12 = iVar9;
    } while (-1 < iVar9);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar19 = param_1 + (longlong)param_2 * 2;
    do {
      if (param_1 != puVar19) {
        uVar3 = *(undefined4 *)((longlong)puVar19 + 4);
        uVar4 = *(undefined4 *)(puVar19 + 1);
        uVar5 = *(undefined4 *)((longlong)puVar19 + 0xc);
        uVar6 = *param_1;
        uVar7 = param_1[1];
        *(undefined4 *)param_1 = *(undefined4 *)puVar19;
        *(undefined4 *)((longlong)param_1 + 4) = uVar3;
        *(undefined4 *)(param_1 + 1) = uVar4;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
        *puVar19 = uVar6;
        puVar19[1] = uVar7;
      }
      iVar9 = 0;
      if (1 < param_2) {
        do {
          iVar13 = iVar9 * 2;
          iVar11 = iVar13 + 1;
          if (iVar13 + 2 < param_2) {
            lVar18 = -1;
            pwVar1 = *(wchar_t **)(param_1[((longlong)iVar13 + 2) * 2] + 0x10);
            do {
              lVar18 = lVar18 + 1;
            } while (pwVar1[lVar18] != L'\0');
            pwVar2 = *(wchar_t **)(param_1[(longlong)iVar11 * 2] + 0x10);
            lVar14 = -1;
            do {
              lVar14 = lVar14 + 1;
            } while (pwVar2[lVar14] != L'\0');
            iVar12 = (int)lVar18;
            if (iVar12 == (int)lVar14) {
              iVar12 = wcsncmp(pwVar1,pwVar2,(longlong)iVar12);
              if ((iVar12 < 1) &&
                 ((int)(param_1 + ((longlong)iVar13 + 2) * 2)[1] <=
                  (int)(param_1 + (longlong)iVar11 * 2)[1])) {
                bVar20 = false;
              }
              else {
                bVar20 = true;
              }
            }
            else {
              bVar20 = (int)lVar14 < iVar12;
            }
            if (bVar20) {
              iVar11 = iVar13;
            }
            iVar11 = iVar11 + 1;
          }
          plVar17 = param_1 + (longlong)iVar9 * 2;
          plVar16 = param_1 + (longlong)iVar11 * 2;
          lVar18 = -1;
          do {
            lVar18 = lVar18 + 1;
          } while ((*(wchar_t **)(*plVar17 + 0x10))[lVar18] != L'\0');
          lVar14 = -1;
          do {
            lVar14 = lVar14 + 1;
          } while ((*(wchar_t **)(*plVar16 + 0x10))[lVar14] != L'\0');
          iVar12 = (int)lVar14;
          iVar13 = (int)lVar18;
          bVar21 = SBORROW4(iVar13,iVar12);
          iVar9 = iVar13 - iVar12;
          bVar20 = iVar13 == iVar12;
          if (bVar20) {
            iVar9 = wcsncmp(*(wchar_t **)(*plVar17 + 0x10),*(wchar_t **)(*plVar16 + 0x10),
                            (longlong)iVar13);
            if (iVar9 < 1) {
              iVar13 = (int)plVar16[1];
              iVar12 = (int)plVar17[1];
              bVar21 = SBORROW4(iVar12,iVar13);
              iVar9 = iVar12 - iVar13;
              bVar20 = iVar12 == iVar13;
              goto LAB_1419d2af6;
            }
          }
          else {
LAB_1419d2af6:
            if (bVar20 || bVar21 != iVar9 < 0) break;
          }
          if (plVar17 != plVar16) {
            uVar3 = *(undefined4 *)((longlong)plVar16 + 4);
            lVar8 = plVar16[1];
            uVar4 = *(undefined4 *)((longlong)plVar16 + 0xc);
            lVar18 = *plVar17;
            lVar14 = plVar17[1];
            *(int *)plVar17 = (int)*plVar16;
            *(undefined4 *)((longlong)plVar17 + 4) = uVar3;
            *(int *)(plVar17 + 1) = (int)lVar8;
            *(undefined4 *)((longlong)plVar17 + 0xc) = uVar4;
            *plVar16 = lVar18;
            plVar16[1] = lVar14;
          }
          iVar9 = iVar11;
        } while (iVar11 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar19 = puVar19 + -2;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1419d2b50 FUN_1419d2b50 body=1490 status=ok
// SIG undefined FUN_1419d2b50(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1419d2b50(longlong param_1,longlong param_2,longlong param_3,int param_4,undefined8 param_5
                  ,char param_6)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  bool bVar15;
  longlong local_d8 [4];
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  char local_73;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  char local_63;
  undefined1 local_60 [8];
  undefined8 *local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  
  uVar14 = 0;
  if (DAT_1464c0adc != 0) {
    do {
      iVar2 = *(int *)(param_3 + (uVar14 + (longlong)param_4 * 0x10) * 4);
      if (iVar2 != -1) {
        puVar10 = (undefined1 *)((longlong)iVar2 * 0x1c + *(longlong *)(param_1 + 0x4f0));
        local_b8 = *puVar10;
        local_b7 = puVar10[1];
        local_b6 = puVar10[2];
        local_b5 = puVar10[3];
        local_b4 = *(undefined4 *)(puVar10 + 4);
        local_b0 = *(undefined4 *)(puVar10 + 8);
        local_ac = *(undefined4 *)(puVar10 + 0xc);
        local_a8 = *(undefined4 *)(puVar10 + 0x10);
        local_a4 = *(undefined4 *)(puVar10 + 0x14);
        local_a0 = puVar10[0x18];
        (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,&local_98,&local_b8);
        puVar13 = local_98;
        puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar11 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar11 + 5;
        }
        puVar3 = local_98;
        *(undefined8 **)(param_2 + 0x30) = puVar7;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar11;
        *(undefined8 **)(param_2 + 8) = puVar11 + 1;
        puVar11[1] = 0;
        *puVar11 = &PTR_LAB_144d8e670;
        puVar11[2] = param_5;
        *(int *)(puVar11 + 3) = (int)uVar14;
        puVar11[4] = puVar13;
        if (local_98 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_98 + 1);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            if ((*(char *)(local_98 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
              LOCK();
              bVar15 = *(int *)((longlong)puVar3 + 0xc) == 0;
              if (bVar15) {
                *(int *)((longlong)puVar3 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar15) {
                uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar5 == 0) {
                  lVar8 = 0;
                }
                else {
                  lVar8 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar8 + 8) = puVar3;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar3)(puVar3,1);
            }
          }
        }
      }
      uVar5 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar5;
    } while (uVar5 < DAT_1464c0adc);
  }
  uVar14 = 0;
  if (DAT_1464c0ae0 != 0) {
    do {
      local_d8[2] = 0;
      local_d8[0] = 0;
      local_d8[1] = 0;
      iVar2 = *(int *)(param_3 + 0x180 + (uVar14 + (longlong)param_4 * 0x80) * 4);
      if (iVar2 == -1) {
LAB_1419d3041:
        puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar13 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar13 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar7;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar13;
        *(undefined8 **)(param_2 + 8) = puVar13 + 1;
        puVar13[4] = 0;
        puVar13[1] = 0;
LAB_1419d3092:
        ppuVar9 = &PTR_LAB_144d8e680;
      }
      else {
        puVar12 = (undefined4 *)((longlong)iVar2 * 0x30 + *(longlong *)(param_1 + 0x490));
        local_90 = *puVar12;
        local_73 = *(char *)((longlong)puVar12 + 0x1d);
        local_8c = puVar12[1];
        local_88 = puVar12[2];
        local_84 = puVar12[3];
        local_80 = puVar12[4];
        local_7c = puVar12[5];
        local_78 = puVar12[6];
        local_74 = *(undefined1 *)(puVar12 + 7);
        local_70 = puVar12[8];
        local_6c = puVar12[9];
        local_68 = puVar12[10];
        local_64 = *(undefined1 *)(puVar12 + 0xb);
        local_63 = *(char *)((longlong)puVar12 + 0x2d);
        if (local_63 == '\0') {
          if ((param_6 != '\0') || (local_73 == '\0')) goto LAB_1419d3041;
          plVar6 = (longlong *)FUN_1419f3f30(param_1,&local_58,&local_90,1);
          puVar7 = local_58;
          if (local_d8 + 2 != plVar6) {
            local_d8[2] = *plVar6;
            *plVar6 = 0;
          }
          if (local_58 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_58 + 1);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              if ((*(char *)(local_58 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
                LOCK();
                bVar15 = *(int *)((longlong)puVar7 + 0xc) == 0;
                if (bVar15) {
                  *(int *)((longlong)puVar7 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar15) {
                  uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
                  if (uVar5 == 0) {
                    lVar8 = 0;
                  }
                  else {
                    lVar8 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
                  }
                  *(undefined8 **)(lVar8 + 8) = puVar7;
                  FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                }
              }
              else {
                (**(code **)*puVar7)(puVar7,1);
              }
            }
          }
          lVar8 = local_d8[2];
          puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar13 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
            puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar13 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar7;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar13;
          *(undefined8 **)(param_2 + 8) = puVar13 + 1;
          puVar13[4] = lVar8;
          puVar13[1] = 0;
          goto LAB_1419d3092;
        }
        if (param_6 == '\0') {
          lVar8 = FUN_1419f3cc0(param_1,local_50,&local_90);
          TRefCountPtr<FRHIIndexBuffer>::operator=(local_d8,lVar8);
          TRefCountPtr<FRHIIndexBuffer>::operator=(local_d8 + 1,lVar8 + 8);
          TRefCountPtr<FRHIIndexBuffer>::operator=(local_d8 + 2,lVar8 + 0x10);
          TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_40);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_48);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_50);
          lVar8 = local_d8[0];
          puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar13 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
            puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar13 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar7;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar13;
          *(undefined8 **)(param_2 + 8) = puVar13 + 1;
          puVar13[1] = 0;
          ppuVar9 = &PTR_LAB_144d8e690;
          puVar13[4] = lVar8;
        }
        else {
          puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar13 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
            puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar13 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar7;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar13;
          *(undefined8 **)(param_2 + 8) = puVar13 + 1;
          puVar13[1] = 0;
          ppuVar9 = &PTR_LAB_144d8e690;
          puVar13[4] = 0;
        }
      }
      *(int *)(puVar13 + 3) = (int)uVar14;
      puVar13[2] = param_5;
      *puVar13 = ppuVar9;
      if ((local_d8[2] != 0) || (local_d8[0] != 0)) {
        FUN_1419cc430(param_1 + 0x1a0,local_60,local_d8,0);
      }
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_d8 + 2);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_d8 + 1);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_d8);
      uVar5 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar5;
    } while (uVar5 < DAT_1464c0ae0);
  }
  return;
}



// FUNCTION 1419d3130 FUN_1419d3130 body=1490 status=ok
// SIG undefined FUN_1419d3130(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1419d3130(longlong param_1,longlong param_2,longlong param_3,int param_4,undefined8 param_5
                  ,char param_6)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  bool bVar15;
  longlong local_d8 [4];
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  char local_73;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  char local_63;
  undefined1 local_60 [8];
  undefined8 *local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  
  uVar14 = 0;
  if (DAT_1464c0adc != 0) {
    do {
      iVar2 = *(int *)(param_3 + (uVar14 + (longlong)param_4 * 0x10) * 4);
      if (iVar2 != -1) {
        puVar10 = (undefined1 *)((longlong)iVar2 * 0x1c + *(longlong *)(param_1 + 0x4f0));
        local_b8 = *puVar10;
        local_b7 = puVar10[1];
        local_b6 = puVar10[2];
        local_b5 = puVar10[3];
        local_b4 = *(undefined4 *)(puVar10 + 4);
        local_b0 = *(undefined4 *)(puVar10 + 8);
        local_ac = *(undefined4 *)(puVar10 + 0xc);
        local_a8 = *(undefined4 *)(puVar10 + 0x10);
        local_a4 = *(undefined4 *)(puVar10 + 0x14);
        local_a0 = puVar10[0x18];
        (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,&local_98,&local_b8);
        puVar13 = local_98;
        puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar11 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar11 + 5;
        }
        puVar3 = local_98;
        *(undefined8 **)(param_2 + 0x30) = puVar7;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar11;
        *(undefined8 **)(param_2 + 8) = puVar11 + 1;
        puVar11[1] = 0;
        *puVar11 = &PTR_LAB_144d8e610;
        puVar11[2] = param_5;
        *(int *)(puVar11 + 3) = (int)uVar14;
        puVar11[4] = puVar13;
        if (local_98 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_98 + 1);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            if ((*(char *)(local_98 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
              LOCK();
              bVar15 = *(int *)((longlong)puVar3 + 0xc) == 0;
              if (bVar15) {
                *(int *)((longlong)puVar3 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar15) {
                uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar5 == 0) {
                  lVar8 = 0;
                }
                else {
                  lVar8 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar8 + 8) = puVar3;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar3)(puVar3,1);
            }
          }
        }
      }
      uVar5 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar5;
    } while (uVar5 < DAT_1464c0adc);
  }
  uVar14 = 0;
  if (DAT_1464c0ae0 != 0) {
    do {
      local_d8[2] = 0;
      local_d8[0] = 0;
      local_d8[1] = 0;
      iVar2 = *(int *)(param_3 + 0x180 + (uVar14 + (longlong)param_4 * 0x80) * 4);
      if (iVar2 == -1) {
LAB_1419d3621:
        puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar13 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar13 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar7;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar13;
        *(undefined8 **)(param_2 + 8) = puVar13 + 1;
        puVar13[4] = 0;
        puVar13[1] = 0;
LAB_1419d3672:
        ppuVar9 = &PTR_LAB_144d8e620;
      }
      else {
        puVar12 = (undefined4 *)((longlong)iVar2 * 0x30 + *(longlong *)(param_1 + 0x490));
        local_90 = *puVar12;
        local_73 = *(char *)((longlong)puVar12 + 0x1d);
        local_8c = puVar12[1];
        local_88 = puVar12[2];
        local_84 = puVar12[3];
        local_80 = puVar12[4];
        local_7c = puVar12[5];
        local_78 = puVar12[6];
        local_74 = *(undefined1 *)(puVar12 + 7);
        local_70 = puVar12[8];
        local_6c = puVar12[9];
        local_68 = puVar12[10];
        local_64 = *(undefined1 *)(puVar12 + 0xb);
        local_63 = *(char *)((longlong)puVar12 + 0x2d);
        if (local_63 == '\0') {
          if ((param_6 != '\0') || (local_73 == '\0')) goto LAB_1419d3621;
          plVar6 = (longlong *)FUN_1419f3f30(param_1,&local_58,&local_90,1);
          puVar7 = local_58;
          if (local_d8 + 2 != plVar6) {
            local_d8[2] = *plVar6;
            *plVar6 = 0;
          }
          if (local_58 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_58 + 1);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              if ((*(char *)(local_58 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
                LOCK();
                bVar15 = *(int *)((longlong)puVar7 + 0xc) == 0;
                if (bVar15) {
                  *(int *)((longlong)puVar7 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar15) {
                  uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
                  if (uVar5 == 0) {
                    lVar8 = 0;
                  }
                  else {
                    lVar8 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
                  }
                  *(undefined8 **)(lVar8 + 8) = puVar7;
                  FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                }
              }
              else {
                (**(code **)*puVar7)(puVar7,1);
              }
            }
          }
          lVar8 = local_d8[2];
          puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar13 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
            puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar13 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar7;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar13;
          *(undefined8 **)(param_2 + 8) = puVar13 + 1;
          puVar13[4] = lVar8;
          puVar13[1] = 0;
          goto LAB_1419d3672;
        }
        if (param_6 == '\0') {
          lVar8 = FUN_1419f3cc0(param_1,local_50,&local_90);
          TRefCountPtr<FRHIIndexBuffer>::operator=(local_d8,lVar8);
          TRefCountPtr<FRHIIndexBuffer>::operator=(local_d8 + 1,lVar8 + 8);
          TRefCountPtr<FRHIIndexBuffer>::operator=(local_d8 + 2,lVar8 + 0x10);
          TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_40);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_48);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_50);
          lVar8 = local_d8[0];
          puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar13 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
            puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar13 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar7;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar13;
          *(undefined8 **)(param_2 + 8) = puVar13 + 1;
          puVar13[1] = 0;
          ppuVar9 = &PTR_LAB_144d8e630;
          puVar13[4] = lVar8;
        }
        else {
          puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar13 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
            puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar13 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar7;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar13;
          *(undefined8 **)(param_2 + 8) = puVar13 + 1;
          puVar13[1] = 0;
          ppuVar9 = &PTR_LAB_144d8e630;
          puVar13[4] = 0;
        }
      }
      *(int *)(puVar13 + 3) = (int)uVar14;
      puVar13[2] = param_5;
      *puVar13 = ppuVar9;
      if ((local_d8[2] != 0) || (local_d8[0] != 0)) {
        FUN_1419cc430(param_1 + 0x1a0,local_60,local_d8,0);
      }
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_d8 + 2);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_d8 + 1);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_d8);
      uVar5 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar5;
    } while (uVar5 < DAT_1464c0ae0);
  }
  return;
}



// FUNCTION 1419d3710 FUN_1419d3710 body=1490 status=ok
// SIG undefined FUN_1419d3710(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1419d3710(longlong param_1,longlong param_2,longlong param_3,int param_4,undefined8 param_5
                  ,char param_6)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  bool bVar15;
  longlong local_d8 [4];
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  char local_73;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  char local_63;
  undefined1 local_60 [8];
  undefined8 *local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  
  uVar14 = 0;
  if (DAT_1464c0adc != 0) {
    do {
      iVar2 = *(int *)(param_3 + (uVar14 + (longlong)param_4 * 0x10) * 4);
      if (iVar2 != -1) {
        puVar10 = (undefined1 *)((longlong)iVar2 * 0x1c + *(longlong *)(param_1 + 0x4f0));
        local_b8 = *puVar10;
        local_b7 = puVar10[1];
        local_b6 = puVar10[2];
        local_b5 = puVar10[3];
        local_b4 = *(undefined4 *)(puVar10 + 4);
        local_b0 = *(undefined4 *)(puVar10 + 8);
        local_ac = *(undefined4 *)(puVar10 + 0xc);
        local_a8 = *(undefined4 *)(puVar10 + 0x10);
        local_a4 = *(undefined4 *)(puVar10 + 0x14);
        local_a0 = puVar10[0x18];
        (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,&local_98,&local_b8);
        puVar13 = local_98;
        puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar11 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar11 + 5;
        }
        puVar3 = local_98;
        *(undefined8 **)(param_2 + 0x30) = puVar7;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar11;
        *(undefined8 **)(param_2 + 8) = puVar11 + 1;
        puVar11[1] = 0;
        *puVar11 = &PTR_LAB_144d8e640;
        puVar11[2] = param_5;
        *(int *)(puVar11 + 3) = (int)uVar14;
        puVar11[4] = puVar13;
        if (local_98 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_98 + 1);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            if ((*(char *)(local_98 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
              LOCK();
              bVar15 = *(int *)((longlong)puVar3 + 0xc) == 0;
              if (bVar15) {
                *(int *)((longlong)puVar3 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar15) {
                uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar5 == 0) {
                  lVar8 = 0;
                }
                else {
                  lVar8 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar8 + 8) = puVar3;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar3)(puVar3,1);
            }
          }
        }
      }
      uVar5 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar5;
    } while (uVar5 < DAT_1464c0adc);
  }
  uVar14 = 0;
  if (DAT_1464c0ae0 != 0) {
    do {
      local_d8[2] = 0;
      local_d8[0] = 0;
      local_d8[1] = 0;
      iVar2 = *(int *)(param_3 + 0x180 + (uVar14 + (longlong)param_4 * 0x80) * 4);
      if (iVar2 == -1) {
LAB_1419d3c01:
        puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar13 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar13 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar7;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar13;
        *(undefined8 **)(param_2 + 8) = puVar13 + 1;
        puVar13[4] = 0;
        puVar13[1] = 0;
LAB_1419d3c52:
        ppuVar9 = &PTR_LAB_144d8e650;
      }
      else {
        puVar12 = (undefined4 *)((longlong)iVar2 * 0x30 + *(longlong *)(param_1 + 0x490));
        local_90 = *puVar12;
        local_73 = *(char *)((longlong)puVar12 + 0x1d);
        local_8c = puVar12[1];
        local_88 = puVar12[2];
        local_84 = puVar12[3];
        local_80 = puVar12[4];
        local_7c = puVar12[5];
        local_78 = puVar12[6];
        local_74 = *(undefined1 *)(puVar12 + 7);
        local_70 = puVar12[8];
        local_6c = puVar12[9];
        local_68 = puVar12[10];
        local_64 = *(undefined1 *)(puVar12 + 0xb);
        local_63 = *(char *)((longlong)puVar12 + 0x2d);
        if (local_63 == '\0') {
          if ((param_6 != '\0') || (local_73 == '\0')) goto LAB_1419d3c01;
          plVar6 = (longlong *)FUN_1419f3f30(param_1,&local_58,&local_90,1);
          puVar7 = local_58;
          if (local_d8 + 2 != plVar6) {
            local_d8[2] = *plVar6;
            *plVar6 = 0;
          }
          if (local_58 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_58 + 1);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              if ((*(char *)(local_58 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
                LOCK();
                bVar15 = *(int *)((longlong)puVar7 + 0xc) == 0;
                if (bVar15) {
                  *(int *)((longlong)puVar7 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar15) {
                  uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
                  if (uVar5 == 0) {
                    lVar8 = 0;
                  }
                  else {
                    lVar8 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
                  }
                  *(undefined8 **)(lVar8 + 8) = puVar7;
                  FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                }
              }
              else {
                (**(code **)*puVar7)(puVar7,1);
              }
            }
          }
          lVar8 = local_d8[2];
          puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar13 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
            puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar13 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar7;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar13;
          *(undefined8 **)(param_2 + 8) = puVar13 + 1;
          puVar13[4] = lVar8;
          puVar13[1] = 0;
          goto LAB_1419d3c52;
        }
        if (param_6 == '\0') {
          lVar8 = FUN_1419f3cc0(param_1,local_50,&local_90);
          TRefCountPtr<FRHIIndexBuffer>::operator=(local_d8,lVar8);
          TRefCountPtr<FRHIIndexBuffer>::operator=(local_d8 + 1,lVar8 + 8);
          TRefCountPtr<FRHIIndexBuffer>::operator=(local_d8 + 2,lVar8 + 0x10);
          TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_40);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_48);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_50);
          lVar8 = local_d8[0];
          puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar13 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
            puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar13 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar7;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar13;
          *(undefined8 **)(param_2 + 8) = puVar13 + 1;
          puVar13[1] = 0;
          ppuVar9 = &PTR_LAB_144d8e660;
          puVar13[4] = lVar8;
        }
        else {
          puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar13 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
            puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar13 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar7;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar13;
          *(undefined8 **)(param_2 + 8) = puVar13 + 1;
          puVar13[1] = 0;
          ppuVar9 = &PTR_LAB_144d8e660;
          puVar13[4] = 0;
        }
      }
      *(int *)(puVar13 + 3) = (int)uVar14;
      puVar13[2] = param_5;
      *puVar13 = ppuVar9;
      if ((local_d8[2] != 0) || (local_d8[0] != 0)) {
        FUN_1419cc430(param_1 + 0x1a0,local_60,local_d8,0);
      }
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_d8 + 2);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_d8 + 1);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_d8);
      uVar5 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar5;
    } while (uVar5 < DAT_1464c0ae0);
  }
  return;
}



// FUNCTION 1419d3cf0 FUN_1419d3cf0 body=1490 status=ok
// SIG undefined FUN_1419d3cf0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1419d3cf0(longlong param_1,longlong param_2,longlong param_3,int param_4,undefined8 param_5
                  ,char param_6)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  bool bVar15;
  longlong local_d8 [4];
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  char local_73;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  char local_63;
  undefined1 local_60 [8];
  undefined8 *local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  
  uVar14 = 0;
  if (DAT_1464c0adc != 0) {
    do {
      iVar2 = *(int *)(param_3 + (uVar14 + (longlong)param_4 * 0x10) * 4);
      if (iVar2 != -1) {
        puVar10 = (undefined1 *)((longlong)iVar2 * 0x1c + *(longlong *)(param_1 + 0x4f0));
        local_b8 = *puVar10;
        local_b7 = puVar10[1];
        local_b6 = puVar10[2];
        local_b5 = puVar10[3];
        local_b4 = *(undefined4 *)(puVar10 + 4);
        local_b0 = *(undefined4 *)(puVar10 + 8);
        local_ac = *(undefined4 *)(puVar10 + 0xc);
        local_a8 = *(undefined4 *)(puVar10 + 0x10);
        local_a4 = *(undefined4 *)(puVar10 + 0x14);
        local_a0 = puVar10[0x18];
        (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,&local_98,&local_b8);
        puVar13 = local_98;
        puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar11 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar11 + 5;
        }
        puVar3 = local_98;
        *(undefined8 **)(param_2 + 0x30) = puVar7;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar11;
        *(undefined8 **)(param_2 + 8) = puVar11 + 1;
        puVar11[1] = 0;
        *puVar11 = &PTR_LAB_143f59c70;
        puVar11[2] = param_5;
        *(int *)(puVar11 + 3) = (int)uVar14;
        puVar11[4] = puVar13;
        if (local_98 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_98 + 1);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            if ((*(char *)(local_98 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
              LOCK();
              bVar15 = *(int *)((longlong)puVar3 + 0xc) == 0;
              if (bVar15) {
                *(int *)((longlong)puVar3 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar15) {
                uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar5 == 0) {
                  lVar8 = 0;
                }
                else {
                  lVar8 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar8 + 8) = puVar3;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar3)(puVar3,1);
            }
          }
        }
      }
      uVar5 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar5;
    } while (uVar5 < DAT_1464c0adc);
  }
  uVar14 = 0;
  if (DAT_1464c0ae0 != 0) {
    do {
      local_d8[2] = 0;
      local_d8[0] = 0;
      local_d8[1] = 0;
      iVar2 = *(int *)(param_3 + 0x180 + (uVar14 + (longlong)param_4 * 0x80) * 4);
      if (iVar2 == -1) {
LAB_1419d41e1:
        puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar13 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar13 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar7;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar13;
        *(undefined8 **)(param_2 + 8) = puVar13 + 1;
        puVar13[4] = 0;
        puVar13[1] = 0;
LAB_1419d4232:
        ppuVar9 = &PTR_LAB_143f59c80;
      }
      else {
        puVar12 = (undefined4 *)((longlong)iVar2 * 0x30 + *(longlong *)(param_1 + 0x490));
        local_90 = *puVar12;
        local_73 = *(char *)((longlong)puVar12 + 0x1d);
        local_8c = puVar12[1];
        local_88 = puVar12[2];
        local_84 = puVar12[3];
        local_80 = puVar12[4];
        local_7c = puVar12[5];
        local_78 = puVar12[6];
        local_74 = *(undefined1 *)(puVar12 + 7);
        local_70 = puVar12[8];
        local_6c = puVar12[9];
        local_68 = puVar12[10];
        local_64 = *(undefined1 *)(puVar12 + 0xb);
        local_63 = *(char *)((longlong)puVar12 + 0x2d);
        if (local_63 == '\0') {
          if ((param_6 != '\0') || (local_73 == '\0')) goto LAB_1419d41e1;
          plVar6 = (longlong *)FUN_1419f3f30(param_1,&local_58,&local_90,1);
          puVar7 = local_58;
          if (local_d8 + 2 != plVar6) {
            local_d8[2] = *plVar6;
            *plVar6 = 0;
          }
          if (local_58 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_58 + 1);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              if ((*(char *)(local_58 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
                LOCK();
                bVar15 = *(int *)((longlong)puVar7 + 0xc) == 0;
                if (bVar15) {
                  *(int *)((longlong)puVar7 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar15) {
                  uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
                  if (uVar5 == 0) {
                    lVar8 = 0;
                  }
                  else {
                    lVar8 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
                  }
                  *(undefined8 **)(lVar8 + 8) = puVar7;
                  FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                }
              }
              else {
                (**(code **)*puVar7)(puVar7,1);
              }
            }
          }
          lVar8 = local_d8[2];
          puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar13 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
            puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar13 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar7;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar13;
          *(undefined8 **)(param_2 + 8) = puVar13 + 1;
          puVar13[4] = lVar8;
          puVar13[1] = 0;
          goto LAB_1419d4232;
        }
        if (param_6 == '\0') {
          lVar8 = FUN_1419f3cc0(param_1,local_50,&local_90);
          TRefCountPtr<FRHIIndexBuffer>::operator=(local_d8,lVar8);
          TRefCountPtr<FRHIIndexBuffer>::operator=(local_d8 + 1,lVar8 + 8);
          TRefCountPtr<FRHIIndexBuffer>::operator=(local_d8 + 2,lVar8 + 0x10);
          TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_40);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_48);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_50);
          lVar8 = local_d8[0];
          puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar13 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
            puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar13 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar7;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar13;
          *(undefined8 **)(param_2 + 8) = puVar13 + 1;
          puVar13[1] = 0;
          ppuVar9 = &PTR_LAB_144d8e600;
          puVar13[4] = lVar8;
        }
        else {
          puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar13 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
            puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar13 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar7;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar13;
          *(undefined8 **)(param_2 + 8) = puVar13 + 1;
          puVar13[1] = 0;
          ppuVar9 = &PTR_LAB_144d8e600;
          puVar13[4] = 0;
        }
      }
      *(int *)(puVar13 + 3) = (int)uVar14;
      puVar13[2] = param_5;
      *puVar13 = ppuVar9;
      if ((local_d8[2] != 0) || (local_d8[0] != 0)) {
        FUN_1419cc430(param_1 + 0x1a0,local_60,local_d8,0);
      }
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_d8 + 2);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_d8 + 1);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_d8);
      uVar5 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar5;
    } while (uVar5 < DAT_1464c0ae0);
  }
  return;
}



// FUNCTION 1419d42d0 FUN_1419d42d0 body=1490 status=ok
// SIG undefined FUN_1419d42d0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1419d42d0(longlong param_1,longlong param_2,longlong param_3,int param_4,undefined8 param_5
                  ,char param_6)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  bool bVar15;
  longlong local_d8 [4];
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  char local_73;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  char local_63;
  undefined1 local_60 [8];
  undefined8 *local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  
  uVar14 = 0;
  if (DAT_1464c0adc != 0) {
    do {
      iVar2 = *(int *)(param_3 + (uVar14 + (longlong)param_4 * 0x10) * 4);
      if (iVar2 != -1) {
        puVar10 = (undefined1 *)((longlong)iVar2 * 0x1c + *(longlong *)(param_1 + 0x4f0));
        local_b8 = *puVar10;
        local_b7 = puVar10[1];
        local_b6 = puVar10[2];
        local_b5 = puVar10[3];
        local_b4 = *(undefined4 *)(puVar10 + 4);
        local_b0 = *(undefined4 *)(puVar10 + 8);
        local_ac = *(undefined4 *)(puVar10 + 0xc);
        local_a8 = *(undefined4 *)(puVar10 + 0x10);
        local_a4 = *(undefined4 *)(puVar10 + 0x14);
        local_a0 = puVar10[0x18];
        (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,&local_98,&local_b8);
        puVar13 = local_98;
        puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar11 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar11 + 5;
        }
        puVar3 = local_98;
        *(undefined8 **)(param_2 + 0x30) = puVar7;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar11;
        *(undefined8 **)(param_2 + 8) = puVar11 + 1;
        puVar11[1] = 0;
        *puVar11 = &PTR_LAB_143f59c60;
        puVar11[2] = param_5;
        *(int *)(puVar11 + 3) = (int)uVar14;
        puVar11[4] = puVar13;
        if (local_98 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_98 + 1);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            if ((*(char *)(local_98 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
              LOCK();
              bVar15 = *(int *)((longlong)puVar3 + 0xc) == 0;
              if (bVar15) {
                *(int *)((longlong)puVar3 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar15) {
                uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar5 == 0) {
                  lVar8 = 0;
                }
                else {
                  lVar8 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar8 + 8) = puVar3;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar3)(puVar3,1);
            }
          }
        }
      }
      uVar5 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar5;
    } while (uVar5 < DAT_1464c0adc);
  }
  uVar14 = 0;
  if (DAT_1464c0ae0 != 0) {
    do {
      local_d8[2] = 0;
      local_d8[0] = 0;
      local_d8[1] = 0;
      iVar2 = *(int *)(param_3 + 0x180 + (uVar14 + (longlong)param_4 * 0x80) * 4);
      if (iVar2 == -1) {
LAB_1419d47c1:
        puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar7 = puVar13 + 5;
        if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
          FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
          puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar13 + 5;
        }
        *(undefined8 **)(param_2 + 0x30) = puVar7;
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        **(undefined8 **)(param_2 + 8) = puVar13;
        *(undefined8 **)(param_2 + 8) = puVar13 + 1;
        puVar13[4] = 0;
        puVar13[1] = 0;
LAB_1419d4812:
        ppuVar9 = &PTR_LAB_143f59c50;
      }
      else {
        puVar12 = (undefined4 *)((longlong)iVar2 * 0x30 + *(longlong *)(param_1 + 0x490));
        local_90 = *puVar12;
        local_73 = *(char *)((longlong)puVar12 + 0x1d);
        local_8c = puVar12[1];
        local_88 = puVar12[2];
        local_84 = puVar12[3];
        local_80 = puVar12[4];
        local_7c = puVar12[5];
        local_78 = puVar12[6];
        local_74 = *(undefined1 *)(puVar12 + 7);
        local_70 = puVar12[8];
        local_6c = puVar12[9];
        local_68 = puVar12[10];
        local_64 = *(undefined1 *)(puVar12 + 0xb);
        local_63 = *(char *)((longlong)puVar12 + 0x2d);
        if (local_63 == '\0') {
          if ((param_6 != '\0') || (local_73 == '\0')) goto LAB_1419d47c1;
          plVar6 = (longlong *)FUN_1419f3f30(param_1,&local_58,&local_90,1);
          puVar7 = local_58;
          if (local_d8 + 2 != plVar6) {
            local_d8[2] = *plVar6;
            *plVar6 = 0;
          }
          if (local_58 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_58 + 1);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              if ((*(char *)(local_58 + 2) == '\0') &&
                 ((DAT_146ab62f5 != '\0' ||
                  (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
                LOCK();
                bVar15 = *(int *)((longlong)puVar7 + 0xc) == 0;
                if (bVar15) {
                  *(int *)((longlong)puVar7 + 0xc) = 1;
                }
                UNLOCK();
                if (bVar15) {
                  uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
                  if (uVar5 == 0) {
                    lVar8 = 0;
                  }
                  else {
                    lVar8 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
                  }
                  *(undefined8 **)(lVar8 + 8) = puVar7;
                  FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
                }
              }
              else {
                (**(code **)*puVar7)(puVar7,1);
              }
            }
          }
          lVar8 = local_d8[2];
          puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar13 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
            puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar13 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar7;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar13;
          *(undefined8 **)(param_2 + 8) = puVar13 + 1;
          puVar13[4] = lVar8;
          puVar13[1] = 0;
          goto LAB_1419d4812;
        }
        if (param_6 == '\0') {
          lVar8 = FUN_1419f3cc0(param_1,local_50,&local_90);
          TRefCountPtr<FRHIIndexBuffer>::operator=(local_d8,lVar8);
          TRefCountPtr<FRHIIndexBuffer>::operator=(local_d8 + 1,lVar8 + 8);
          TRefCountPtr<FRHIIndexBuffer>::operator=(local_d8 + 2,lVar8 + 0x10);
          TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_40);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_48);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_50);
          lVar8 = local_d8[0];
          puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar13 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
            puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar13 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar7;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar13;
          *(undefined8 **)(param_2 + 8) = puVar13 + 1;
          puVar13[1] = 0;
          ppuVar9 = &PTR_LAB_144165218;
          puVar13[4] = lVar8;
        }
        else {
          puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar7 = puVar13 + 5;
          if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
            FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
            puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar7 = puVar13 + 5;
          }
          *(undefined8 **)(param_2 + 0x30) = puVar7;
          *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
          **(undefined8 **)(param_2 + 8) = puVar13;
          *(undefined8 **)(param_2 + 8) = puVar13 + 1;
          puVar13[1] = 0;
          ppuVar9 = &PTR_LAB_144165218;
          puVar13[4] = 0;
        }
      }
      *(int *)(puVar13 + 3) = (int)uVar14;
      puVar13[2] = param_5;
      *puVar13 = ppuVar9;
      if ((local_d8[2] != 0) || (local_d8[0] != 0)) {
        FUN_1419cc430(param_1 + 0x1a0,local_60,local_d8,0);
      }
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(local_d8 + 2);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_d8 + 1);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_d8);
      uVar5 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar5;
    } while (uVar5 < DAT_1464c0ae0);
  }
  return;
}



// FUNCTION 1419d48b0 IntroSortInternal<FShaderPipeline_*,FIdentityFunctor,TDereferenceWrapper<FShaderPipeline_*,TLess<FShaderPipeline>_>_> body=919 status=ok
// SIG undefined IntroSortInternal<FShaderPipeline_*,FIdentityFunctor,TDereferenceWrapper<FShaderPipeline_*,TLess<FShaderPipeline>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FShaderPipeline_*,FIdentityFunctor,TDereferenceWrapper<FShaderPipeline_*,TLess<FShaderPipeline>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  bool bVar16;
  bool bVar17;
  float fVar18;
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
    fVar18 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar18 = fVar18 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar18 = ::_guard_xfg_dispatch_icall_nop(fVar18);
    local_338 = (undefined4)(longlong)(fVar18 + fVar18);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar13 = &local_348;
    do {
      puVar14 = (undefined8 *)*plVar13;
      puVar12 = (undefined8 *)plVar13[1];
      local_358 = plVar13[2];
      lVar6 = ((longlong)puVar12 - (longlong)puVar14 >> 3) + 1;
      puVar15 = puVar14;
      iVar7 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1419d4990:
        if (8 < lVar6) {
          if (lVar6 < 0) {
            lVar6 = lVar6 + 1;
          }
          puVar8 = puVar12 + 1;
          uVar1 = puVar15[lVar6 >> 1];
          puVar15[lVar6 >> 1] = *puVar15;
          *puVar15 = uVar1;
          puVar14 = puVar15;
LAB_1419d49c0:
          puVar14 = puVar14 + 1;
          if (puVar14 <= puVar12) {
            puVar9 = *(undefined8 **)*puVar14;
            if (*(undefined8 **)*puVar15 != (undefined8 *)0x0) goto LAB_1419d49df;
            bVar16 = puVar9 == (undefined8 *)0x0;
            goto LAB_1419d4a24;
          }
          goto LAB_1419d4a26;
        }
        for (; puVar8 = puVar15, puVar14 = puVar15, puVar15 < puVar12; puVar12 = puVar12 + -1) {
          while (puVar9 = puVar8, puVar14 = puVar14 + 1, puVar14 <= puVar12) {
            puVar8 = *(undefined8 **)*puVar14;
            if (*(undefined8 **)*puVar9 == (undefined8 *)0x0) {
              bVar17 = puVar8 != (undefined8 *)0x0;
            }
            else if (puVar8 == (undefined8 *)0x0) {
              bVar17 = false;
            }
            else {
              pwVar3 = (wchar_t *)**(undefined8 **)*puVar9;
              lVar6 = -1;
              do {
                lVar6 = lVar6 + 1;
              } while (pwVar3[lVar6] != L'\0');
              lVar11 = -1;
              do {
                lVar11 = lVar11 + 1;
              } while (((wchar_t *)*puVar8)[lVar11] != L'\0');
              iVar4 = (int)lVar11;
              iVar5 = (int)lVar6;
              iVar7 = iVar5 - iVar4;
              bVar16 = iVar5 == iVar4;
              bVar17 = !bVar16;
              if (!bVar17) {
                iVar7 = wcsncmp(pwVar3,(wchar_t *)*puVar8,(longlong)iVar5);
                bVar16 = iVar7 == 0;
              }
              bVar17 = !bVar16 && (bVar17 && SBORROW4(iVar5,iVar4)) == iVar7 < 0;
            }
            puVar8 = puVar14;
            if (!bVar17) {
              puVar8 = puVar9;
            }
          }
          uVar1 = *puVar9;
          *puVar9 = *puVar12;
          *puVar12 = uVar1;
        }
        goto LAB_1419d4b3d;
      }
LAB_1419d4b2e:
      HeapSortInternal<FShaderPipeline_*,FIdentityFunctor,TDereferenceWrapper<FShaderPipeline_*,TLess<FShaderPipeline>_>_>
                (puVar14,lVar6,param_3,param_4);
LAB_1419d4b3d:
      plVar13 = plVar13 + -3;
    } while (&local_348 <= plVar13);
  }
  return;
LAB_1419d49df:
  if (puVar9 == (undefined8 *)0x0) goto LAB_1419d49c0;
  pwVar3 = (wchar_t *)**(undefined8 **)*puVar15;
  lVar6 = -1;
  do {
    lVar6 = lVar6 + 1;
  } while (pwVar3[lVar6] != L'\0');
  lVar11 = -1;
  do {
    lVar11 = lVar11 + 1;
  } while (((wchar_t *)*puVar9)[lVar11] != L'\0');
  iVar10 = (int)lVar11;
  iVar4 = (int)lVar6;
  iVar5 = iVar4 - iVar10;
  bVar16 = iVar4 == iVar10;
  bVar17 = !bVar16;
  if (!bVar17) {
    iVar5 = wcsncmp(pwVar3,(wchar_t *)*puVar9,(longlong)iVar4);
    bVar16 = iVar5 == 0;
  }
  bVar16 = bVar16 || (bVar17 && SBORROW4(iVar4,iVar10)) != iVar5 < 0;
LAB_1419d4a24:
  if (bVar16) goto LAB_1419d49c0;
LAB_1419d4a26:
  do {
    puVar9 = puVar8;
    puVar8 = puVar9 + -1;
    if (puVar8 <= puVar15) break;
    puVar2 = *(undefined8 **)*puVar15;
    if (*(undefined8 **)*puVar8 == (undefined8 *)0x0) {
      bVar16 = puVar2 == (undefined8 *)0x0;
    }
    else {
      if (puVar2 == (undefined8 *)0x0) goto LAB_1419d4a26;
      pwVar3 = (wchar_t *)**(undefined8 **)*puVar8;
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (pwVar3[lVar6] != L'\0');
      lVar11 = -1;
      do {
        lVar11 = lVar11 + 1;
      } while (((wchar_t *)*puVar2)[lVar11] != L'\0');
      iVar10 = (int)lVar11;
      iVar4 = (int)lVar6;
      iVar5 = iVar4 - iVar10;
      bVar16 = iVar4 == iVar10;
      bVar17 = !bVar16;
      if (!bVar17) {
        iVar5 = wcsncmp(pwVar3,(wchar_t *)*puVar2,(longlong)iVar4);
        bVar16 = iVar5 == 0;
      }
      bVar16 = bVar16 || (bVar17 && SBORROW4(iVar4,iVar10)) != iVar5 < 0;
    }
  } while (bVar16);
  if (puVar14 <= puVar8) {
    uVar1 = *puVar14;
    *puVar14 = *puVar8;
    *puVar8 = uVar1;
    goto LAB_1419d49c0;
  }
  uVar1 = *puVar15;
  iVar7 = iVar7 + -1;
  *puVar15 = *puVar8;
  *puVar8 = uVar1;
  if ((longlong)((longlong)puVar8 + (-8 - (longlong)puVar15) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar12 - (longlong)puVar14 & 0xfffffffffffffff8U)) {
    if (puVar14 < puVar12) {
      *plVar13 = (longlong)puVar14;
      plVar13[1] = (longlong)puVar12;
      *(int *)(plVar13 + 2) = iVar7;
      plVar13 = plVar13 + 3;
    }
    if (puVar8 <= puVar15 + 1) goto LAB_1419d4b3d;
    puVar12 = puVar9 + -2;
    puVar14 = puVar15;
  }
  else {
    if (puVar15 + 1 < puVar8) {
      *plVar13 = (longlong)puVar15;
      plVar13[1] = (longlong)(puVar9 + -2);
      *(int *)(plVar13 + 2) = iVar7;
      plVar13 = plVar13 + 3;
    }
    if (puVar12 <= puVar14) goto LAB_1419d4b3d;
  }
  lVar6 = ((longlong)puVar12 - (longlong)puVar14 >> 3) + 1;
  puVar15 = puVar14;
  if (iVar7 == 0) goto LAB_1419d4b2e;
  goto LAB_1419d4990;
}



// FUNCTION 1419d4c50 IntroSortInternal<FShaderType_*,FIdentityFunctor,TDereferenceWrapper<FShaderType_*,FCompareShaderTypes>_> body=882 status=ok
// SIG undefined IntroSortInternal<FShaderType_*,FIdentityFunctor,TDereferenceWrapper<FShaderType_*,FCompareShaderTypes>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FShaderType_*,FIdentityFunctor,TDereferenceWrapper<FShaderType_*,FCompareShaderTypes>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  float fVar16;
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
    fVar16 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar16 = fVar16 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar16 = ::_guard_xfg_dispatch_icall_nop(fVar16);
    local_338 = (undefined4)(longlong)(fVar16 + fVar16);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar11 = &local_348;
    do {
      plVar8 = (longlong *)*plVar11;
      plVar10 = (longlong *)plVar11[1];
      local_358 = plVar11[2];
      lVar6 = ((longlong)plVar10 - (longlong)plVar8 >> 3) + 1;
      plVar14 = plVar8;
      iVar7 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1419d4d30:
        if (8 < lVar6) {
          if (lVar6 < 0) {
            lVar6 = lVar6 + 1;
          }
          plVar12 = plVar10 + 1;
          lVar4 = plVar14[lVar6 >> 1];
          plVar14[lVar6 >> 1] = *plVar14;
          *plVar14 = lVar4;
          plVar8 = plVar14;
LAB_1419d4d60:
          plVar8 = plVar8 + 1;
          if (plVar8 <= plVar10) goto code_r0x0001419d4d69;
          goto LAB_1419d4dc1;
        }
        for (; plVar12 = plVar14, plVar8 = plVar14, plVar14 < plVar10; plVar10 = plVar10 + -1) {
          while (plVar13 = plVar12, plVar8 = plVar8 + 1, plVar8 <= plVar10) {
            lVar6 = -1;
            do {
              lVar6 = lVar6 + 1;
            } while ((*(wchar_t **)(*plVar13 + 0x10))[lVar6] != L'\0');
            lVar4 = -1;
            do {
              lVar4 = lVar4 + 1;
            } while ((*(wchar_t **)(*plVar8 + 0x10))[lVar4] != L'\0');
            iVar3 = (int)lVar4;
            iVar2 = (int)lVar6;
            iVar7 = iVar2 - iVar3;
            bVar15 = iVar2 == iVar3;
            bVar1 = !bVar15;
            if (!bVar1) {
              iVar7 = wcsncmp(*(wchar_t **)(*plVar13 + 0x10),*(wchar_t **)(*plVar8 + 0x10),
                              (longlong)iVar2);
              bVar15 = iVar7 == 0;
            }
            plVar12 = plVar8;
            if (bVar15 || (bVar1 && SBORROW4(iVar2,iVar3)) != iVar7 < 0) {
              plVar12 = plVar13;
            }
          }
          lVar6 = *plVar13;
          *plVar13 = *plVar10;
          *plVar10 = lVar6;
        }
        goto LAB_1419d4ecf;
      }
LAB_1419d4ec0:
      HeapSortInternal<FShaderType_*,FIdentityFunctor,TDereferenceWrapper<FShaderType_*,FCompareShaderTypes>_>
                (plVar8,lVar6,param_3,param_4);
LAB_1419d4ecf:
      plVar11 = plVar11 + -3;
    } while (&local_348 <= plVar11);
  }
  return;
code_r0x0001419d4d69:
  lVar6 = -1;
  do {
    lVar6 = lVar6 + 1;
  } while ((*(wchar_t **)(*plVar14 + 0x10))[lVar6] != L'\0');
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while ((*(wchar_t **)(*plVar8 + 0x10))[lVar4] != L'\0');
  iVar2 = (int)lVar4;
  iVar9 = (int)lVar6;
  iVar3 = iVar9 - iVar2;
  bVar15 = iVar9 == iVar2;
  bVar1 = !bVar15;
  if (!bVar1) {
    iVar3 = wcsncmp(*(wchar_t **)(*plVar14 + 0x10),*(wchar_t **)(*plVar8 + 0x10),(longlong)iVar9);
    bVar15 = iVar3 == 0;
  }
  if (bVar15 || (bVar1 && SBORROW4(iVar9,iVar2)) != iVar3 < 0) goto LAB_1419d4d60;
LAB_1419d4dc1:
  do {
    plVar13 = plVar12;
    lVar6 = plVar13[-1];
    plVar12 = plVar13 + -1;
    if (plVar12 <= plVar14) break;
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while ((*(wchar_t **)(lVar6 + 0x10))[lVar4] != L'\0');
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while ((*(wchar_t **)(*plVar14 + 0x10))[lVar5] != L'\0');
    iVar2 = (int)lVar5;
    iVar9 = (int)lVar4;
    iVar3 = iVar9 - iVar2;
    bVar15 = iVar9 == iVar2;
    bVar1 = !bVar15;
    if (!bVar1) {
      iVar3 = wcsncmp(*(wchar_t **)(lVar6 + 0x10),*(wchar_t **)(*plVar14 + 0x10),(longlong)iVar9);
      lVar6 = *plVar12;
      bVar15 = iVar3 == 0;
    }
  } while (bVar15 || (bVar1 && SBORROW4(iVar9,iVar2)) != iVar3 < 0);
  if (plVar8 <= plVar12) {
    lVar6 = *plVar8;
    *plVar8 = *plVar12;
    *plVar12 = lVar6;
    goto LAB_1419d4d60;
  }
  lVar4 = *plVar14;
  *plVar14 = lVar6;
  *plVar12 = lVar4;
  iVar7 = iVar7 + -1;
  if ((longlong)((longlong)plVar12 + (-8 - (longlong)plVar14) & 0xfffffffffffffff8U) <
      (longlong)((longlong)plVar10 - (longlong)plVar8 & 0xfffffffffffffff8U)) {
    if (plVar8 < plVar10) {
      *plVar11 = (longlong)plVar8;
      plVar11[1] = (longlong)plVar10;
      *(int *)(plVar11 + 2) = iVar7;
      plVar11 = plVar11 + 3;
    }
    if (plVar12 <= plVar14 + 1) goto LAB_1419d4ecf;
    plVar10 = plVar13 + -2;
    plVar8 = plVar14;
  }
  else {
    if (plVar14 + 1 < plVar12) {
      *plVar11 = (longlong)plVar14;
      plVar11[1] = (longlong)(plVar13 + -2);
      *(int *)(plVar11 + 2) = iVar7;
      plVar11 = plVar11 + 3;
    }
    if (plVar10 <= plVar8) goto LAB_1419d4ecf;
  }
  lVar6 = ((longlong)plVar10 - (longlong)plVar8 >> 3) + 1;
  plVar14 = plVar8;
  if (iVar7 == 0) goto LAB_1419d4ec0;
  goto LAB_1419d4d30;
}



// FUNCTION 1419d4fd0 IntroSortInternal<FShaderPipelineType_const_*,FIdentityFunctor,TDereferenceWrapper<FShaderPipelineType_const_*,FCompareShaderPipelineNameTypes>_> body=915 status=ok
// SIG undefined IntroSortInternal<FShaderPipelineType_const_*,FIdentityFunctor,TDereferenceWrapper<FShaderPipelineType_const_*,FCompareShaderPipelineNameTypes>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FShaderPipelineType_const_*,FIdentityFunctor,TDereferenceWrapper<FShaderPipelineType_const_*,FCompareShaderPipelineNameTypes>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  wchar_t *pwVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  bool bVar16;
  float fVar17;
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
    fVar17 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar17 = fVar17 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar17 = ::_guard_xfg_dispatch_icall_nop(fVar17);
    local_338 = (undefined4)(longlong)(fVar17 + fVar17);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar12 = &local_348;
    do {
      plVar13 = (longlong *)*plVar12;
      plVar11 = (longlong *)plVar12[1];
      local_358 = plVar12[2];
      lVar5 = ((longlong)plVar11 - (longlong)plVar13 >> 3) + 1;
      plVar14 = plVar13;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1419d50b0:
        if (8 < lVar5) {
          if (lVar5 < 0) {
            lVar5 = lVar5 + 1;
          }
          plVar7 = plVar11 + 1;
          lVar10 = plVar14[lVar5 >> 1];
          plVar14[lVar5 >> 1] = *plVar14;
          *plVar14 = lVar10;
          plVar13 = plVar14;
LAB_1419d50e0:
          plVar13 = plVar13 + 1;
          if (plVar13 <= plVar11) {
            puVar1 = (undefined8 *)*plVar13;
            if ((undefined8 *)*plVar14 != (undefined8 *)0x0) goto LAB_1419d50f9;
            bVar15 = puVar1 == (undefined8 *)0x0;
            goto LAB_1419d5144;
          }
          goto LAB_1419d5146;
        }
        for (; plVar7 = plVar14, plVar13 = plVar14, plVar14 < plVar11; plVar11 = plVar11 + -1) {
          while (plVar8 = plVar7, plVar13 = plVar13 + 1, plVar13 <= plVar11) {
            puVar1 = (undefined8 *)*plVar13;
            if ((undefined8 *)*plVar8 == (undefined8 *)0x0) {
              bVar16 = puVar1 != (undefined8 *)0x0;
            }
            else if (puVar1 == (undefined8 *)0x0) {
              bVar16 = false;
            }
            else {
              pwVar2 = *(wchar_t **)*plVar8;
              lVar5 = -1;
              do {
                lVar5 = lVar5 + 1;
              } while (pwVar2[lVar5] != L'\0');
              lVar10 = -1;
              do {
                lVar10 = lVar10 + 1;
              } while (((wchar_t *)*puVar1)[lVar10] != L'\0');
              iVar3 = (int)lVar10;
              iVar4 = (int)lVar5;
              iVar6 = iVar4 - iVar3;
              bVar15 = iVar4 == iVar3;
              bVar16 = !bVar15;
              if (!bVar16) {
                iVar6 = wcsncmp(pwVar2,(wchar_t *)*puVar1,(longlong)iVar4);
                bVar15 = iVar6 == 0;
              }
              bVar16 = !bVar15 && (bVar16 && SBORROW4(iVar4,iVar3)) == iVar6 < 0;
            }
            plVar7 = plVar13;
            if (!bVar16) {
              plVar7 = plVar8;
            }
          }
          lVar5 = *plVar8;
          *plVar8 = *plVar11;
          *plVar11 = lVar5;
        }
        goto LAB_1419d5251;
      }
LAB_1419d5242:
      HeapSortInternal<FShaderPipelineType_const_*,FIdentityFunctor,TDereferenceWrapper<FShaderPipelineType_const_*,FCompareShaderPipelineNameTypes>_>
                (plVar13,lVar5,param_3,param_4);
LAB_1419d5251:
      plVar12 = plVar12 + -3;
    } while (&local_348 <= plVar12);
  }
  return;
LAB_1419d50f9:
  if (puVar1 == (undefined8 *)0x0) goto LAB_1419d50e0;
  pwVar2 = *(wchar_t **)*plVar14;
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (pwVar2[lVar5] != L'\0');
  lVar10 = -1;
  do {
    lVar10 = lVar10 + 1;
  } while (((wchar_t *)*puVar1)[lVar10] != L'\0');
  iVar9 = (int)lVar10;
  iVar3 = (int)lVar5;
  iVar4 = iVar3 - iVar9;
  bVar15 = iVar3 == iVar9;
  bVar16 = !bVar15;
  if (!bVar16) {
    iVar4 = wcsncmp(pwVar2,(wchar_t *)*puVar1,(longlong)iVar3);
    bVar15 = iVar4 == 0;
  }
  bVar15 = bVar15 || (bVar16 && SBORROW4(iVar3,iVar9)) != iVar4 < 0;
LAB_1419d5144:
  if (bVar15) goto LAB_1419d50e0;
LAB_1419d5146:
  do {
    plVar8 = plVar7;
    plVar7 = plVar8 + -1;
    if (plVar7 <= plVar14) break;
    puVar1 = (undefined8 *)*plVar14;
    if ((undefined8 *)*plVar7 == (undefined8 *)0x0) {
      bVar15 = puVar1 == (undefined8 *)0x0;
    }
    else {
      if (puVar1 == (undefined8 *)0x0) goto LAB_1419d5146;
      pwVar2 = *(wchar_t **)*plVar7;
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (pwVar2[lVar5] != L'\0');
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (((wchar_t *)*puVar1)[lVar10] != L'\0');
      iVar9 = (int)lVar10;
      iVar3 = (int)lVar5;
      iVar4 = iVar3 - iVar9;
      bVar15 = iVar3 == iVar9;
      bVar16 = !bVar15;
      if (!bVar16) {
        iVar4 = wcsncmp(pwVar2,(wchar_t *)*puVar1,(longlong)iVar3);
        bVar15 = iVar4 == 0;
      }
      bVar15 = bVar15 || (bVar16 && SBORROW4(iVar3,iVar9)) != iVar4 < 0;
    }
  } while (bVar15);
  if (plVar13 <= plVar7) {
    lVar5 = *plVar13;
    *plVar13 = *plVar7;
    *plVar7 = lVar5;
    goto LAB_1419d50e0;
  }
  lVar5 = *plVar14;
  iVar6 = iVar6 + -1;
  *plVar14 = *plVar7;
  *plVar7 = lVar5;
  if ((longlong)((longlong)plVar7 + (-8 - (longlong)plVar14) & 0xfffffffffffffff8U) <
      (longlong)((longlong)plVar11 - (longlong)plVar13 & 0xfffffffffffffff8U)) {
    if (plVar13 < plVar11) {
      *plVar12 = (longlong)plVar13;
      plVar12[1] = (longlong)plVar11;
      *(int *)(plVar12 + 2) = iVar6;
      plVar12 = plVar12 + 3;
    }
    if (plVar7 <= plVar14 + 1) goto LAB_1419d5251;
    plVar11 = plVar8 + -2;
    plVar13 = plVar14;
  }
  else {
    if (plVar14 + 1 < plVar7) {
      *plVar12 = (longlong)plVar14;
      plVar12[1] = (longlong)(plVar8 + -2);
      *(int *)(plVar12 + 2) = iVar6;
      plVar12 = plVar12 + 3;
    }
    if (plVar11 <= plVar13) goto LAB_1419d5251;
  }
  lVar5 = ((longlong)plVar11 - (longlong)plVar13 >> 3) + 1;
  plVar14 = plVar13;
  if (iVar6 == 0) goto LAB_1419d5242;
  goto LAB_1419d50b0;
}



// FUNCTION 1419d5370 IntroSortInternal<TShaderTypePermutation<FShaderType>,FIdentityFunctor,TDereferenceWrapper<TShaderTypePermutation<FShaderType>,TShaderMap<FGlobalShaderType>::FCompareShaderPrimaryKey>_> body=942 status=ok
// SIG undefined IntroSortInternal<TShaderTypePermutation<FShaderType>,FIdentityFunctor,TDereferenceWrapper<TShaderTypePermutation<FShaderType>,TShaderMap<FGlobalShaderType>::FCompareShaderPrimaryKey>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void AlgoImpl::
     IntroSortInternal<TShaderTypePermutation<FShaderType>,FIdentityFunctor,TDereferenceWrapper<TShaderTypePermutation<FShaderType>,TShaderMap<FGlobalShaderType>::FCompareShaderPrimaryKey>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  bool bVar17;
  bool bVar18;
  float fVar19;
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
  lStack_340 = param_2 * 0x10 + -0x10 + param_1;
  fVar19 = (float)(longlong)param_2;
  if ((longlong)param_2 < 0) {
    fVar19 = fVar19 + 1.8446744e+19;
  }
  local_348 = param_1;
  fVar19 = ::_guard_xfg_dispatch_icall_nop(fVar19);
  local_338 = (undefined4)(longlong)(fVar19 + fVar19);
  ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
  plVar13 = &local_348;
LAB_1419d5410:
  plVar14 = (longlong *)plVar13[1];
  local_358 = plVar13[2];
  lVar8 = (longlong)plVar14 - *plVar13;
  plVar3 = (longlong *)*plVar13;
  iVar9 = (int)local_358;
  while (lVar8 = (lVar8 >> 4) + 1, iVar9 != 0) {
    if (lVar8 < 9) goto joined_r0x0001419d5665;
    plVar10 = plVar3 + (lVar8 / 2) * 2;
    if (plVar10 != plVar3) {
      uVar1 = *(undefined4 *)((longlong)plVar3 + 4);
      lVar4 = plVar3[1];
      uVar2 = *(undefined4 *)((longlong)plVar3 + 0xc);
      lVar8 = *plVar10;
      lVar7 = plVar10[1];
      *(int *)plVar10 = (int)*plVar3;
      *(undefined4 *)((longlong)plVar10 + 4) = uVar1;
      *(int *)(plVar10 + 1) = (int)lVar4;
      *(undefined4 *)((longlong)plVar10 + 0xc) = uVar2;
      *plVar3 = lVar8;
      plVar3[1] = lVar7;
    }
    plVar10 = plVar14 + 2;
    plVar16 = plVar3;
LAB_1419d5486:
    do {
      plVar15 = plVar16;
      plVar16 = plVar15 + 2;
      if (plVar14 < plVar16) break;
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while ((*(wchar_t **)(*plVar3 + 0x10))[lVar8] != L'\0');
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while ((*(wchar_t **)(*plVar16 + 0x10))[lVar7] != L'\0');
      iVar5 = (int)lVar7;
      iVar12 = (int)lVar8;
      bVar18 = SBORROW4(iVar12,iVar5);
      iVar6 = iVar12 - iVar5;
      bVar17 = false;
      if (iVar12 == iVar5) {
        iVar6 = wcsncmp(*(wchar_t **)(*plVar3 + 0x10),*(wchar_t **)(*plVar16 + 0x10),
                        (longlong)iVar12);
        if (0 < iVar6) break;
        iVar5 = (int)plVar15[3];
        iVar12 = (int)plVar3[1];
        bVar18 = SBORROW4(iVar12,iVar5);
        iVar6 = iVar12 - iVar5;
        bVar17 = iVar12 == iVar5;
      }
    } while (bVar17 || bVar18 != iVar6 < 0);
    do {
      plVar11 = plVar10;
      plVar10 = plVar11 + -2;
      if (plVar10 <= plVar3) break;
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while ((*(wchar_t **)(*plVar10 + 0x10))[lVar8] != L'\0');
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while ((*(wchar_t **)(*plVar3 + 0x10))[lVar7] != L'\0');
      iVar5 = (int)lVar7;
      iVar12 = (int)lVar8;
      bVar18 = SBORROW4(iVar12,iVar5);
      iVar6 = iVar12 - iVar5;
      bVar17 = false;
      if (iVar12 == iVar5) {
        iVar6 = wcsncmp(*(wchar_t **)(*plVar10 + 0x10),*(wchar_t **)(*plVar3 + 0x10),
                        (longlong)iVar12);
        if (0 < iVar6) break;
        iVar5 = (int)plVar3[1];
        iVar12 = (int)plVar11[-1];
        bVar18 = SBORROW4(iVar12,iVar5);
        iVar6 = iVar12 - iVar5;
        bVar17 = iVar12 == iVar5;
      }
    } while (bVar17 || bVar18 != iVar6 < 0);
    if (plVar16 <= plVar10) {
      if (plVar16 != plVar10) {
        uVar1 = *(undefined4 *)((longlong)plVar11 + -0xc);
        lVar4 = plVar11[-1];
        uVar2 = *(undefined4 *)((longlong)plVar11 + -4);
        lVar8 = *plVar16;
        lVar7 = plVar15[3];
        *(int *)plVar16 = (int)*plVar10;
        *(undefined4 *)((longlong)plVar15 + 0x14) = uVar1;
        *(int *)(plVar15 + 3) = (int)lVar4;
        *(undefined4 *)((longlong)plVar15 + 0x1c) = uVar2;
        *plVar10 = lVar8;
        plVar11[-1] = lVar7;
      }
      goto LAB_1419d5486;
    }
    if (plVar3 != plVar10) {
      uVar1 = *(undefined4 *)((longlong)plVar11 + -0xc);
      lVar4 = plVar11[-1];
      uVar2 = *(undefined4 *)((longlong)plVar11 + -4);
      lVar8 = *plVar3;
      lVar7 = plVar3[1];
      *(int *)plVar3 = (int)*plVar10;
      *(undefined4 *)((longlong)plVar3 + 4) = uVar1;
      *(int *)(plVar3 + 1) = (int)lVar4;
      *(undefined4 *)((longlong)plVar3 + 0xc) = uVar2;
      *plVar10 = lVar8;
      plVar11[-1] = lVar7;
    }
    iVar9 = iVar9 + -1;
    if ((longlong)((longlong)plVar10 + (-0x10 - (longlong)plVar3) & 0xfffffffffffffff0U) <
        (longlong)((longlong)plVar14 - (longlong)plVar16 & 0xfffffffffffffff0U)) {
      if (plVar16 < plVar14) {
        *plVar13 = (longlong)plVar16;
        plVar13[1] = (longlong)plVar14;
        *(int *)(plVar13 + 2) = iVar9;
        plVar13 = plVar13 + 3;
      }
      if (plVar10 <= plVar3 + 2) goto LAB_1419d5606;
      plVar14 = plVar11 + -4;
      plVar16 = plVar3;
    }
    else {
      if (plVar3 + 2 < plVar10) {
        *plVar13 = (longlong)plVar3;
        plVar13[1] = (longlong)(plVar11 + -4);
        *(int *)(plVar13 + 2) = iVar9;
        plVar13 = plVar13 + 3;
      }
      if (plVar14 <= plVar16) goto LAB_1419d5606;
    }
    lVar8 = (longlong)plVar14 - (longlong)plVar16;
    plVar3 = plVar16;
  }
  HeapSortInternal<TShaderTypePermutation<FShaderType>,FIdentityFunctor,TDereferenceWrapper<TShaderTypePermutation<FShaderType>,TShaderMap<FGlobalShaderType>::FCompareShaderPrimaryKey>_>
            (plVar3,lVar8,param_3,param_4);
  goto LAB_1419d5606;
joined_r0x0001419d5665:
  for (; plVar16 = plVar3, plVar10 = plVar3, plVar3 < plVar14; plVar14 = plVar14 + -2) {
    while (plVar15 = plVar16, plVar10 = plVar10 + 2, plVar10 <= plVar14) {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while ((*(wchar_t **)(*plVar15 + 0x10))[lVar8] != L'\0');
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while ((*(wchar_t **)(*plVar10 + 0x10))[lVar7] != L'\0');
      iVar9 = (int)lVar8;
      if (iVar9 == (int)lVar7) {
        iVar9 = wcsncmp(*(wchar_t **)(*plVar15 + 0x10),*(wchar_t **)(*plVar10 + 0x10),
                        (longlong)iVar9);
        if ((iVar9 < 1) && ((int)plVar15[1] <= (int)plVar10[1])) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
      }
      else {
        bVar17 = (int)lVar7 < iVar9;
      }
      plVar16 = plVar10;
      if (!bVar17) {
        plVar16 = plVar15;
      }
    }
    if (plVar15 != plVar14) {
      uVar1 = *(undefined4 *)((longlong)plVar14 + 4);
      lVar4 = plVar14[1];
      uVar2 = *(undefined4 *)((longlong)plVar14 + 0xc);
      lVar8 = *plVar15;
      lVar7 = plVar15[1];
      *(int *)plVar15 = (int)*plVar14;
      *(undefined4 *)((longlong)plVar15 + 4) = uVar1;
      *(int *)(plVar15 + 1) = (int)lVar4;
      *(undefined4 *)((longlong)plVar15 + 0xc) = uVar2;
      *plVar14 = lVar8;
      plVar14[1] = lVar7;
    }
  }
LAB_1419d5606:
  plVar13 = plVar13 + -3;
  if (plVar13 < &local_348) {
    return;
  }
  goto LAB_1419d5410;
}



// FUNCTION 1419d5720 FBlendStateInitializerRHI body=401 status=ok
// SIG undefined FBlendStateInitializerRHI(void)

undefined1 *
FBlendStateInitializerRHI::FBlendStateInitializerRHI(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = param_2[0x2b];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = param_2[0x31];
  param_1[0x32] = param_2[0x32];
  param_1[0x33] = param_2[0x33];
  param_1[0x34] = param_2[0x34];
  param_1[0x35] = param_2[0x35];
  param_1[0x36] = param_2[0x36];
  param_1[0x37] = param_2[0x37];
  param_1[0x38] = param_2[0x38];
  return param_1;
}



// FUNCTION 1419d58c0 FGlobalShader body=33 status=ok
// SIG undefined FGlobalShader(void)

undefined8 * FGlobalShader::FGlobalShader(undefined8 *param_1)

{
  FUN_1419d6310();
  *param_1 = &PTR__scalar_deleting_destructor__143f592a0;
  return param_1;
}



// FUNCTION 1419d58f0 FUN_1419d58f0 body=1290 status=ok
// SIG undefined FUN_1419d58f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1419d58f0(longlong *param_1,uint param_2)

{
  short *psVar1;
  ulonglong uVar2;
  char cVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong *local_c8;
  ulonglong local_c0;
  longlong *local_b8;
  uint local_b0;
  int local_ac;
  longlong *local_a8;
  uint local_a0;
  int local_9c;
  longlong *local_98;
  uint local_90;
  int local_8c;
  longlong *local_88;
  ulonglong local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  *param_1 = 0;
  param_1[1] = 0;
  uVar17 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar18 = 0;
  local_78 = param_1 + 2;
  local_98 = (longlong *)0x0;
  local_d0 = local_d0 & 0xffffffff00000000;
  local_8c = 0;
  local_a8 = (longlong *)0x0;
  local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffff00000000);
  local_9c = 0;
  uVar14 = 0;
  local_88 = param_1;
  if (DAT_1469f5dd8 != (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
    plVar8 = DAT_1469f5dd8;
    uVar17 = 0;
    do {
      lVar5 = 0;
      if (*(int *)(plVar8[2] + 8) == 0) {
        lVar5 = plVar8[2];
      }
      if ((lVar5 != 0) && (iVar13 = 0, 0 < *(int *)(lVar5 + 0x34))) {
        do {
          local_d0 = CONCAT44(iVar13,param_2);
          cVar3 = (**(code **)(lVar5 + 0x138))();
          if (cVar3 != '\0') {
            local_90 = uVar17 + 1;
            if (iVar18 < (int)local_90) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow();
              plVar9 = local_98;
              iVar18 = local_8c;
            }
            plVar9[(int)uVar17] = lVar5;
            uVar17 = local_90;
            break;
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < *(int *)(lVar5 + 0x34));
      }
      plVar8 = (longlong *)*plVar8;
    } while (plVar8 != (longlong *)0x0);
    local_d0 = CONCAT44(local_d0._4_4_,uVar17);
    uVar14 = (uint)local_c8;
  }
  plVar9 = DAT_1469f5de0;
  iVar18 = local_9c;
  if (DAT_1469f5de0 != (longlong *)0x0) {
    do {
      lVar5 = plVar9[2];
      plVar8 = *(longlong **)(lVar5 + 0x10);
      lVar15 = 0;
      if (*(int *)(*plVar8 + 8) == 0) {
        lVar15 = *plVar8;
      }
      if (lVar15 != 0) {
        iVar13 = 0;
        plVar10 = plVar8 + *(int *)(lVar5 + 0x18);
        for (; plVar8 != plVar10; plVar8 = plVar8 + 1) {
          local_c0 = (ulonglong)param_2;
          lVar15 = 0;
          if (*(int *)(*plVar8 + 8) == 0) {
            lVar15 = *plVar8;
          }
          cVar3 = (**(code **)(lVar15 + 0x138))();
          if (cVar3 == '\0') break;
          iVar13 = iVar13 + 1;
        }
        uVar14 = (uint)local_c8;
        if (iVar13 == *(int *)(lVar5 + 0x18)) {
          lVar15 = (longlong)(int)(uint)local_c8;
          local_a0 = (uint)local_c8 + 1;
          local_c8 = (longlong *)CONCAT44(local_c8._4_4_,local_a0);
          if (iVar18 < (int)local_a0) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_a8);
            local_c8 = (longlong *)CONCAT44(local_c8._4_4_,local_a0);
            iVar18 = local_9c;
          }
          local_a8[lVar15] = lVar5;
          uVar14 = local_a0;
        }
      }
      plVar9 = (longlong *)*plVar9;
    } while (plVar9 != (longlong *)0x0);
    uVar17 = (uint)local_d0;
  }
  plVar9 = local_98;
  AlgoImpl::
  IntroSortInternal<FShaderType_*,FIdentityFunctor,TDereferenceWrapper<FShaderType_*,FCompareShaderTypes>_>
            (local_98,(longlong)(int)uVar17,local_d8[0],local_d8);
  plVar8 = local_88;
  if (0 < (int)uVar17) {
    uVar11 = (ulonglong)uVar17;
    plVar10 = plVar9;
    do {
      local_70 = *plVar10;
      uStack_68 = 0;
      uStack_58 = 0;
      puVar4 = (undefined4 *)FUN_1419f03e0(*(undefined8 *)(local_70 + 0x20));
      iVar18 = (int)plVar8[1];
      uStack_60 = puVar4[1];
      uStack_5c = puVar4[2];
      uStack_58 = *(undefined8 *)(puVar4 + 3);
      uStack_68 = CONCAT44(*puVar4,(uint)uStack_68);
      *(int *)(plVar8 + 1) = iVar18 + 1;
      if (*(int *)((longlong)plVar8 + 0xc) < iVar18 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(plVar8,iVar18);
      }
      lVar5 = *plVar8;
      plVar10 = plVar10 + 1;
      puVar4 = (undefined4 *)((longlong)iVar18 * 0x20 + lVar5);
      *puVar4 = (undefined4)local_70;
      puVar4[1] = local_70._4_4_;
      puVar4[2] = (uint)uStack_68;
      puVar4[3] = uStack_68._4_4_;
      puVar7 = (undefined8 *)((longlong)iVar18 * 0x20 + 0x10 + lVar5);
      *puVar7 = CONCAT44(uStack_5c,uStack_60);
      puVar7[1] = uStack_58;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  plVar8 = local_a8;
  AlgoImpl::
  IntroSortInternal<FShaderPipelineType_const_*,FIdentityFunctor,TDereferenceWrapper<FShaderPipelineType_const_*,FCompareShaderPipelineNameTypes>_>
            (local_a8,(longlong)(int)uVar14,local_d8[0],local_d8);
  plVar10 = plVar8;
  if (0 < (int)uVar14) {
    local_80 = (ulonglong)uVar14;
    do {
      local_50 = *plVar8;
      uVar16 = 0;
      iVar18 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      plVar9 = *(longlong **)(local_50 + 0x10);
      uStack_38 = 0;
      local_b8 = (longlong *)0x0;
      local_b0 = 0;
      local_ac = 0;
      local_d0 = 0;
      uVar11 = (longlong)*(int *)(local_50 + 0x18) & 0x1fffffffffffffff;
      if (plVar9 + *(int *)(local_50 + 0x18) < plVar9) {
        uVar11 = uVar16;
      }
      local_c8 = plVar8;
      local_c0 = uVar11;
      if (uVar11 != 0) {
        do {
          uVar12 = 0;
          local_70 = 0;
          uVar17 = 0;
          uStack_68 = uStack_68 & 0xffffffff;
          psVar1 = *(short **)(*plVar9 + 0x20);
          uVar14 = 0;
          if ((psVar1 != (short *)0x0) && (uVar14 = uVar17, *psVar1 != 0)) {
            lVar5 = -1;
            do {
              lVar15 = lVar5 + 1;
              lVar5 = lVar5 + 1;
            } while (psVar1[lVar15] != 0);
            uVar14 = (int)lVar5 + 1;
            uStack_68 = (ulonglong)uVar14;
            uVar11 = uVar12;
            if (0 < (int)uVar14) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,0);
              uVar11 = uStack_68 >> 0x20;
              uVar14 = (uint)uStack_68;
            }
            uVar12 = local_70;
            uVar17 = (uint)uVar11;
            FGenericPlatformString::Memcpy(local_70,psVar1);
            uVar11 = local_c0;
            iVar18 = local_ac;
          }
          uVar2 = local_d0;
          iVar13 = (int)uVar16;
          local_b0 = iVar13 + 1;
          if (iVar18 < (int)local_b0) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_b8,uVar16);
            uVar11 = local_c0;
            iVar18 = local_ac;
          }
          uVar16 = (ulonglong)local_b0;
          local_d0 = uVar2 + 1;
          local_70 = 0;
          uStack_68 = 0;
          plVar9 = plVar9 + 1;
          puVar6 = (ulonglong *)(local_b8 + (longlong)iVar13 * 2);
          *puVar6 = uVar12;
          *(uint *)(puVar6 + 1) = uVar14;
          *(uint *)((longlong)puVar6 + 0xc) = uVar17;
        } while (local_d0 != uVar11);
      }
      plVar8 = local_c8;
      puVar7 = (undefined8 *)FUN_1419f05e0(&local_b8);
      plVar10 = local_b8;
      plVar9 = local_b8;
      for (uVar14 = local_b0; uVar14 != 0; uVar14 = uVar14 - 1) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 2;
      }
      if (plVar10 != (longlong *)0x0) {
        FMemory::Free(plVar10);
      }
      plVar9 = local_78;
      uStack_38 = *(undefined4 *)(puVar7 + 2);
      uStack_48 = *puVar7;
      uStack_40 = puVar7[1];
      iVar18 = (int)local_78[1];
      *(int *)(local_78 + 1) = iVar18 + 1;
      if (*(int *)((longlong)local_78 + 0xc) < iVar18 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(local_78,iVar18);
      }
      lVar5 = *plVar9;
      plVar8 = plVar8 + 1;
      local_80 = local_80 - 1;
      puVar4 = (undefined4 *)((longlong)iVar18 * 0x20 + lVar5);
      *puVar4 = (undefined4)local_50;
      puVar4[1] = local_50._4_4_;
      puVar4[2] = (undefined4)uStack_48;
      puVar4[3] = uStack_48._4_4_;
      puVar7 = (undefined8 *)((longlong)iVar18 * 0x20 + 0x10 + lVar5);
      *puVar7 = uStack_40;
      puVar7[1] = CONCAT44(uStack_34,uStack_38);
    } while (local_80 != 0);
    local_80 = 0;
    plVar10 = local_a8;
    plVar9 = local_98;
    local_c8 = plVar8;
  }
  if (plVar10 != (longlong *)0x0) {
    FMemory::Free(plVar10);
  }
  if (plVar9 != (longlong *)0x0) {
    FMemory::Free(plVar9);
  }
  return local_88;
}



// FUNCTION 1419d5e00 FUN_1419d5e00 body=124 status=ok
// SIG undefined FUN_1419d5e00(void)

undefined8 * FUN_1419d5e00(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x26;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  return param_1;
}



// FUNCTION 1419d5e80 FUN_1419d5e80 body=993 status=ok
// SIG undefined FUN_1419d5e80(void)

undefined8 * FUN_1419d5e80(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  void **ppvVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  short *psVar16;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48;
  undefined8 local_40;
  
  iVar12 = 0;
  puVar3 = param_1 + 3;
  *param_1 = 0;
  puVar1 = param_1 + 5;
  param_1[1] = 0;
  puVar2 = param_1 + 0xf;
  *(undefined4 *)(param_1 + 2) = 0;
  *puVar3 = 0;
  param_1[4] = 0;
  *puVar1 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *puVar2 = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *(undefined4 *)param_1 = *param_2;
  *(undefined4 *)((longlong)param_1 + 4) = uVar5;
  *(undefined4 *)(param_1 + 1) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar7;
  *(undefined4 *)(param_1 + 2) = param_2[4];
  if (*(longlong *)(param_2 + 8) == 0) {
    psVar16 = &DAT_144d8523c;
  }
  else {
    psVar16 = *(short **)(*(longlong *)(param_2 + 8) + 0x10);
  }
  lVar15 = -1;
  if ((short *)*puVar3 != psVar16) {
    iVar13 = iVar12;
    if ((psVar16 != (short *)0x0) && (*psVar16 != 0)) {
      lVar14 = -1;
      do {
        lVar14 = lVar14 + 1;
      } while (psVar16[lVar14] != 0);
      iVar13 = (int)lVar14 + 1;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    iVar10 = iVar12;
    if (*(int *)((longlong)param_1 + 0x24) != iVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar3,iVar13);
      iVar10 = *(int *)(param_1 + 4);
    }
    *(int *)(param_1 + 4) = iVar13 + iVar10;
    if (*(int *)((longlong)param_1 + 0x24) < iVar13 + iVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar3);
    }
    if (iVar13 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)*puVar3,psVar16,(longlong)iVar13 * 2);
    }
  }
  if (*(undefined8 **)(param_2 + 6) == (undefined8 *)0x0) {
    psVar16 = &DAT_144d852dc;
  }
  else {
    psVar16 = (short *)**(undefined8 **)(param_2 + 6);
  }
  if ((short *)*puVar1 != psVar16) {
    iVar13 = iVar12;
    if ((psVar16 != (short *)0x0) && (*psVar16 != 0)) {
      lVar14 = -1;
      do {
        lVar14 = lVar14 + 1;
      } while (psVar16[lVar14] != 0);
      iVar13 = (int)lVar14 + 1;
    }
    *(undefined4 *)(param_1 + 6) = 0;
    iVar10 = iVar12;
    if (*(int *)((longlong)param_1 + 0x34) != iVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1,iVar13);
      iVar10 = *(int *)(param_1 + 6);
    }
    *(int *)(param_1 + 6) = iVar13 + iVar10;
    if (*(int *)((longlong)param_1 + 0x34) < iVar13 + iVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1);
    }
    if (iVar13 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,psVar16,(longlong)iVar13 * 2);
    }
  }
  uVar5 = param_2[0xb];
  uVar6 = param_2[0xc];
  uVar7 = param_2[0xd];
  *(undefined4 *)(param_1 + 7) = param_2[10];
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar5;
  *(undefined4 *)(param_1 + 8) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar7;
  *(undefined4 *)(param_1 + 9) = param_2[0xe];
  puVar3 = *(undefined8 **)(param_2 + 0x10);
  if (puVar3 == (undefined8 *)0x0) {
    local_60 = (void *)0x0;
    ppvVar11 = &local_60;
    local_58 = 0;
    bVar9 = false;
    bVar8 = true;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
  }
  else {
    local_80 = *(int *)(puVar3 + 1);
    lVar14 = (longlong)local_80;
    pvVar4 = (void *)*puVar3;
    local_88 = (void *)0x0;
    if (local_80 == 0) {
      local_7c = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(&local_88,local_80,0);
      _guard_xfg_dispatch_icall_nop(local_88,pvVar4,lVar14 << 2);
    }
    local_68 = *(int *)(puVar3 + 4);
    lVar14 = (longlong)local_68;
    local_78 = *(undefined4 *)(puVar3 + 2);
    pvVar4 = (void *)puVar3[3];
    local_70 = (void *)0x0;
    if (local_68 == 0) {
      local_64 = 0;
      ppvVar11 = &local_88;
      bVar9 = true;
      bVar8 = false;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(&local_70,local_68,0);
      _guard_xfg_dispatch_icall_nop(local_70,pvVar4,lVar14 << 2);
      ppvVar11 = &local_88;
      bVar9 = true;
      bVar8 = false;
    }
  }
  FSerializationHistory::operator=(param_1 + 10,ppvVar11);
  if (bVar8) {
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (local_60 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if (bVar9) {
    if (local_70 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_88 != (void *)0x0) {
      FMemory::Free();
    }
  }
  psVar16 = *(short **)(*(longlong *)(param_2 + 0x12) + 0x10);
  if ((short *)*puVar2 != psVar16) {
    iVar13 = iVar12;
    if ((psVar16 != (short *)0x0) && (*psVar16 != 0)) {
      do {
        lVar15 = lVar15 + 1;
      } while (psVar16[lVar15] != 0);
      iVar13 = (int)lVar15 + 1;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (*(int *)((longlong)param_1 + 0x84) != iVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,iVar13);
      iVar12 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar13 + iVar12;
    if (*(int *)((longlong)param_1 + 0x84) < iVar13 + iVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2,iVar12);
    }
    if (iVar13 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)*puVar2,psVar16,(longlong)iVar13 * 2);
    }
  }
  *(undefined4 *)(param_1 + 0x11) = param_2[0x14];
  uVar5 = param_2[0x16];
  uVar6 = param_2[0x17];
  uVar7 = param_2[0x18];
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_2[0x15];
  *(undefined4 *)(param_1 + 0x12) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar6;
  *(undefined4 *)(param_1 + 0x13) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x9c) = param_2[0x19];
  lVar15 = *(longlong *)(param_2 + 0x1a);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x14,lVar15);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(lVar15 + 0x10);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x17,lVar15 + 0x18);
  *(undefined4 *)(param_1 + 0x19) = param_2[0x1c];
  return param_1;
}



// FUNCTION 1419d6270 FUN_1419d6270 body=149 status=ok
// SIG undefined FUN_1419d6270(void)

undefined8 * FUN_1419d6270(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(uint *)(param_1 + 0x19) = *(uint *)(param_1 + 0x19) & 0xffffff06 | 6;
  return param_1;
}



// FUNCTION 1419d6310 FUN_1419d6310 body=992 status=ok
// SIG undefined FUN_1419d6310(void)

undefined8 * FUN_1419d6310(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  short *psVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 uVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  longlong lVar19;
  undefined2 *puVar20;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined8 *local_60;
  undefined2 *local_58;
  uint local_50;
  undefined4 local_4c;
  undefined8 *local_48;
  
  plVar1 = param_1 + 1;
  *param_1 = &PTR__scalar_deleting_destructor__143f592a0;
  plVar2 = param_1 + 3;
  *plVar1 = 0;
  param_1[2] = 0;
  *plVar2 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar16 = param_2[7];
  param_1[10] = param_2[6];
  param_1[0xb] = uVar16;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 8);
  param_1[0xd] = param_2[9];
  param_1[0xe] = param_2[10];
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = *param_2;
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0xb);
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x335b43ab;
  puVar12 = (undefined4 *)param_2[4];
  uVar5 = puVar12[1];
  uVar6 = puVar12[2];
  uVar7 = puVar12[3];
  *(undefined4 *)(param_1 + 5) = *puVar12;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 6) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar7;
  *(undefined4 *)(param_1 + 7) = puVar12[4];
  local_60 = param_2;
  local_48 = param_1;
  puVar12 = (undefined4 *)FUN_1419f03e0(*(undefined8 *)(param_1[0x12] + 0x20));
  uVar5 = puVar12[1];
  uVar6 = puVar12[2];
  uVar7 = puVar12[3];
  *(undefined4 *)((longlong)param_1 + 0x9c) = *puVar12;
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar6;
  *(undefined4 *)(param_1 + 0x15) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0xac) = puVar12[4];
  if (param_1[0xe] != 0) {
    puVar12 = (undefined4 *)FUN_1419f03e0(*(undefined8 *)(param_1[0xe] + 0x18));
    uVar5 = puVar12[1];
    uVar6 = puVar12[2];
    uVar7 = puVar12[3];
    *(undefined4 *)(param_1 + 0xf) = *puVar12;
    *(undefined4 *)((longlong)param_1 + 0x7c) = uVar5;
    *(undefined4 *)(param_1 + 0x10) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0x84) = uVar7;
    *(undefined4 *)(param_1 + 0x11) = puVar12[4];
  }
  puVar13 = (undefined8 *)FUniformBufferStruct::GetStructList();
  puVar13 = (undefined8 *)*puVar13;
  puVar8 = param_1;
  do {
    if (puVar13 == (undefined8 *)0x0) {
      lVar14 = param_2[5];
      lVar19 = puVar8[9];
      puVar8[9] = lVar14;
      if (lVar14 != 0) {
        *(int *)(lVar14 + 0xac) = *(int *)(lVar14 + 0xac) + 1;
      }
      if (lVar19 != 0) {
        FShaderResource::Release();
      }
      FShader::Register(puVar8);
      return puVar8;
    }
    puVar18 = (undefined2 *)0x0;
    plVar3 = (longlong *)param_2[3];
    local_58 = (undefined2 *)0x0;
    local_4c = 0;
    psVar4 = *(short **)(puVar13[2] + 0x10);
    puVar20 = puVar18;
    if ((psVar4 != (short *)0x0) && (*psVar4 != 0)) {
      lVar14 = -1;
      do {
        lVar19 = lVar14 + 1;
        lVar14 = lVar14 + 1;
      } while (psVar4[lVar19] != 0);
      local_50 = (int)lVar14 + 1;
      lVar14 = (longlong)(int)local_50;
      if (0 < (int)local_50) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      }
      puVar20 = local_58;
      puVar18 = (undefined2 *)(ulonglong)local_50;
      FGenericPlatformString::Memcpy(local_58,psVar4,lVar14 * 2);
    }
    if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
      puVar17 = &DAT_143f3eda8;
      if ((int)puVar18 != 0) {
        puVar17 = puVar20;
      }
      iVar10 = FUN_140438070(puVar17);
      plVar15 = (longlong *)plVar3[8];
      if ((longlong *)plVar3[8] == (longlong *)0x0) {
        plVar15 = plVar3 + 7;
      }
      iVar10 = *(int *)((longlong)plVar15 + ((longlong)(int)plVar3[9] - 1U & (longlong)iVar10) * 4);
      if (iVar10 != -1) {
        lVar14 = *plVar3;
        do {
          lVar19 = (longlong)iVar10 * 0x20;
          if (*(int *)(lVar19 + 8 + lVar14) == 0) {
            puVar18 = &DAT_143f3eda8;
          }
          else {
            puVar18 = *(undefined2 **)(lVar19 + lVar14);
          }
          iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar18);
          if (iVar11 == 0) {
            if (iVar10 != -1) {
              lVar19 = *plVar3 + lVar19;
              goto LAB_1419d6565;
            }
            break;
          }
          lVar14 = *plVar3;
          iVar10 = *(int *)(lVar19 + 0x18 + lVar14);
        } while (iVar10 != -1);
      }
    }
    lVar19 = 0;
LAB_1419d6565:
    lVar14 = lVar19 + 0x10;
    if (lVar19 == 0) {
      lVar14 = 0;
    }
    if (puVar20 != (undefined2 *)0x0) {
      FMemory::Free(puVar20);
    }
    if (lVar14 != 0) {
      iVar10 = *(int *)(param_1 + 2);
      *(int *)(param_1 + 2) = iVar10 + 1;
      if (*(int *)((longlong)param_1 + 0x14) < iVar10 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar10);
      }
      *(undefined8 *)(*plVar1 + (longlong)iVar10 * 8) = puVar13[2];
      uVar16 = (**(code **)(puVar13[2] + 0x18))();
      iVar10 = *(int *)(param_1 + 4);
      *(int *)(param_1 + 4) = iVar10 + 1;
      if (*(int *)((longlong)param_1 + 0x24) < iVar10 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar10);
      }
      *(undefined8 *)(*plVar2 + (longlong)iVar10 * 8) = uVar16;
      lVar14 = *(longlong *)(*plVar2 + -8 + (longlong)*(int *)(param_1 + 4) * 8);
      uVar16 = *(undefined8 *)(puVar13[2] + 0x10);
      cVar9 = FShaderParameterMap::FindParameterAllocation
                        (local_60[3],uVar16,lVar14 + 4,local_64,local_68);
      if (cVar9 == '\0') {
        *(undefined1 *)(lVar14 + 6) = 0;
        LowLevelFatalErrorHandler
                  ("Unknown",0x75,
                   L"Failure to bind non-optional shader resource parameter %s!  The parameter is either not present in the shader, or the shader compiler optimized it out."
                   ,uVar16);
        FDebug::AssertFailed
                  (&DAT_144d85ad7,"Unknown",0x75,
                   L"Failure to bind non-optional shader resource parameter %s!  The parameter is either not present in the shader, or the shader compiler optimized it out."
                   ,uVar16);
      }
      else {
        *(undefined1 *)(lVar14 + 6) = 1;
      }
    }
    puVar13 = (undefined8 *)*puVar13;
    puVar8 = local_48;
    param_2 = local_60;
  } while( true );
}



// FUNCTION 1419d66f0 FShader body=200 status=ok
// SIG undefined FShader(void)

undefined8 * FShader::FShader(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__143f592a0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) & 0xfffffff8;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0xbd9922df;
  *(uint *)(param_1 + 0x16) =
       ((&DAT_1464c9c48)[DAT_1464c9c14] << 3 ^ *(uint *)(param_1 + 0x16)) & 0xf8 ^
       *(uint *)(param_1 + 0x16);
  return param_1;
}



// FUNCTION 1419d67c0 FUN_1419d67c0 body=2412 status=ok
// SIG undefined FUN_1419d67c0(void)

undefined8 * FUN_1419d67c0(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  longlong local_48;
  undefined4 local_40;
  longlong local_38 [2];
  
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1444d8080;
  iVar2 = DAT_146ac3b38;
  lVar6 = (longlong)DAT_146ac3b38;
  DAT_146ac3b38 = DAT_146ac3b38 + 1;
  if (DAT_146ac3b3c < DAT_146ac3b38) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146ac3b30,iVar2);
  }
  *(undefined8 **)(DAT_146ac3b30 + lVar6 * 8) = param_1;
  *param_1 = &PTR__scalar_deleting_destructor__144d8e238;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = param_3;
  FShaderPlatformCache::FShaderPlatformCache(param_1 + 0x57);
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  *(undefined4 *)(param_1 + 0xd3) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x69c) = 0;
  param_1[0xd5] = 0;
  *(undefined4 *)(param_1 + 0xd6) = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  *(undefined4 *)(param_1 + 0xdd) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6ec) = 0;
  param_1[0xdf] = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  *(undefined4 *)(param_1 + 0xe7) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x73c) = 0;
  param_1[0xe9] = 0;
  *(undefined4 *)(param_1 + 0xea) = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  *(undefined4 *)(param_1 + 0xf1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x78c) = 0;
  param_1[0xf3] = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0xf7,0,0);
  *(undefined4 *)(param_1 + 0xfb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7dc) = 0;
  param_1[0xfd] = 0;
  *(undefined4 *)(param_1 + 0xfe) = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0x101,0,0);
  *(undefined4 *)(param_1 + 0x105) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x82c) = 0;
  param_1[0x107] = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0x10b,0,0);
  *(undefined4 *)(param_1 + 0x10f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x87c) = 0;
  param_1[0x111] = 0;
  *(undefined4 *)(param_1 + 0x112) = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0x115,0,0);
  *(undefined4 *)(param_1 + 0x119) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8cc) = 0;
  param_1[0x11b] = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0x11f,0,0);
  *(undefined4 *)(param_1 + 0x123) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x91c) = 0;
  param_1[0x125] = 0;
  *(undefined4 *)(param_1 + 0x126) = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0x129,0,0);
  *(undefined4 *)(param_1 + 0x12d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x96c) = 0;
  param_1[0x12f] = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0x133,0,0);
  *(undefined4 *)(param_1 + 0x137) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x9bc) = 0;
  param_1[0x139] = 0;
  *(undefined4 *)(param_1 + 0x13a) = 0;
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0x13d,0,0);
  *(undefined4 *)(param_1 + 0x141) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa0c) = 0;
  param_1[0x143] = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  param_1[0x145] = 0;
  param_1[0x146] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0x147,0,0);
  *(undefined4 *)(param_1 + 0x14b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa5c) = 0;
  param_1[0x14d] = 0;
  *(undefined4 *)(param_1 + 0x14e) = 0;
  param_1[0x14f] = 0;
  param_1[0x150] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0x151,0,0);
  *(undefined4 *)(param_1 + 0x155) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xaac) = 0;
  param_1[0x157] = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0x15b,0,0);
  *(undefined4 *)(param_1 + 0x15f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xafc) = 0;
  param_1[0x161] = 0;
  *(undefined4 *)(param_1 + 0x162) = 0;
  param_1[0x163] = 0;
  param_1[0x164] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0x165,0,0);
  *(undefined4 *)(param_1 + 0x169) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4c) = 0;
  param_1[0x16b] = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x16d) = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0x172,0,0);
  *(undefined4 *)(param_1 + 0x176) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbb4) = 0;
  param_1[0x178] = 0;
  *(undefined4 *)(param_1 + 0x179) = 0;
  *(undefined4 *)(param_1 + 0x17a) = param_2;
  FUN_1419d5e00(param_1 + 0x17b);
  param_1[0x192] = 0;
  *(undefined1 *)(param_1 + 0x193) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x194));
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x195));
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x196));
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x197));
  param_1[0x198] = 0;
  param_1[0x199] = 0;
  param_1[0x19a] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(param_1 + 0x19b,0,0);
  *(undefined4 *)(param_1 + 0x19f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xcfc) = 0;
  param_1[0x1a1] = 0;
  *(undefined4 *)(param_1 + 0x1a2) = 0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar1 = DAT_1468b1f88;
  local_48 = 0;
  local_40 = 0;
  puVar4 = (undefined8 *)operator_new(0x28,&local_48);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &DAT_143f3ed00;
    puVar4[1] = param_1;
    puVar4[2] = FShaderCache::SaveAll;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[4] = uVar5;
    *puVar4 = &PTR_GetPoolName_143f3ed48;
  }
  uVar5 = (**(code **)(*plVar1 + 0x88))
                    (plVar1,L"r.SaveShaderCache",L"Save shader cache.",&local_48,0);
  param_1[0x1a3] = uVar5;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
  local_48 = 0;
  local_40 = 0;
  puVar4 = (undefined8 *)operator_new(0x28,&local_48);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &DAT_143f3ed00;
    puVar4[1] = param_1;
    puVar4[2] = &LAB_141a00900;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[4] = uVar5;
    *puVar4 = &PTR_GetPoolName_143f3ed48;
  }
  TBaseMulticastDelegate<void>::Add(&DAT_1464af370,local_res8,&local_48);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
  DAT_1464c0adc = 0x10;
  if (DAT_1464c9c2c < 0x11) {
    DAT_1464c0adc = DAT_1464c9c2c;
  }
  *(undefined4 *)(param_1 + 0x57) = *(undefined4 *)(param_1 + 0x56);
  uVar5 = FCommandLine::Get();
  cVar3 = FParse::Param(uVar5,L"UseShaderDrawLog");
  if (cVar3 != '\0') {
    DAT_1469f59ec = 1;
  }
  uVar5 = (**(code **)(*DAT_146ab6358 + 0x468))();
  uVar5 = FUN_1419f3990(param_1,uVar5);
  param_1[0x198] = uVar5;
  if (DAT_1469f59e4 != 0) {
    uVar5 = FUN_14167d0d0(local_38);
    FUN_1419f00b0(&local_48,uVar5,*(undefined4 *)(param_1 + 0x56));
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    uVar5 = FString::FString(local_38,&local_48);
    cVar3 = FUN_141a00220(uVar5,param_1 + 0x57);
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (cVar3 != '\0') {
      return param_1;
    }
  }
  uVar5 = FPaths::ProjectContentDir(local_38);
  FUN_1419f00b0(&local_48,uVar5,*(undefined4 *)(param_1 + 0x56));
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  uVar5 = FString::FString(local_38,&local_48);
  FUN_141a00220(uVar5,param_1 + 0x57);
  if (local_48 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1419d7130 FUN_1419d7130 body=308 status=ok
// SIG undefined FUN_1419d7130(void)

longlong FUN_1419d7130(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 0x100);
  *(int *)(param_1 + 0x100) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  else {
    FUN_141a09aa0(param_1,iVar4,0);
    puVar2 = (undefined1 *)(param_1 + 2);
    lVar3 = param_2 - param_1;
    do {
      puVar2[-2] = puVar2[lVar3 + -2];
      puVar2[-1] = puVar2[lVar3 + -1];
      *puVar2 = puVar2[lVar3];
      puVar2[1] = puVar2[lVar3 + 1];
      *(undefined2 *)(puVar2 + 2) = *(undefined2 *)(puVar2 + lVar3 + 2);
      *(undefined2 *)(puVar2 + 4) = *(undefined2 *)(puVar2 + lVar3 + 4);
      puVar2 = puVar2 + 8;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x110) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x120) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x130) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x140) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x150) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x160) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x170);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x180);
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 0x178);
  *(undefined8 *)(param_1 + 0x180) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 400);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_2 + 0x188);
  *(undefined8 *)(param_1 + 400) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  *(undefined8 *)(param_1 + 0x1a0) = uVar1;
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x1a8);
  return param_1;
}



// FUNCTION 1419d7270 FUN_1419d7270 body=206 status=ok
// SIG undefined FUN_1419d7270(void)

longlong FUN_1419d7270(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 0x124) = 0;
  *(undefined8 *)(param_1 + 0x11c) = 6;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined1 *)(param_1 + 0x144) = 0;
  *(undefined8 *)(param_1 + 0x13c) = 6;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined1 *)(param_1 + 0x164) = 0;
  *(undefined8 *)(param_1 + 0x15c) = 6;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined1 *)(param_1 + 0x184) = 0;
  *(undefined8 *)(param_1 + 0x17c) = 6;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined1 *)(param_1 + 0x1a4) = 0;
  *(undefined8 *)(param_1 + 0x19c) = 6;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  return param_1;
}



// FUNCTION 1419d7340 FShaderCacheGraphicsPipelineState body=389 status=ok
// SIG undefined FShaderCacheGraphicsPipelineState(void)

undefined4 *
FShaderCacheGraphicsPipelineState::FShaderCacheGraphicsPipelineState
          (undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  FBlendStateInitializerRHI::FBlendStateInitializerRHI(param_1 + 2,param_2 + 2);
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  *(undefined1 *)((longlong)param_1 + 0x4d) = *(undefined1 *)((longlong)param_2 + 0x4d);
  *(undefined1 *)((longlong)param_1 + 0x4e) = *(undefined1 *)((longlong)param_2 + 0x4e);
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x4f);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)((longlong)param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x52);
  *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x53);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x55);
  *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x56);
  *(undefined1 *)((longlong)param_1 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x57);
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  *(undefined1 *)((longlong)param_1 + 0x59) = *(undefined1 *)((longlong)param_2 + 0x59);
  *(undefined1 *)((longlong)param_1 + 0x5a) = *(undefined1 *)((longlong)param_2 + 0x5a);
  *(undefined1 *)((longlong)param_1 + 0x5b) = *(undefined1 *)((longlong)param_2 + 0x5b);
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  *(undefined1 *)((longlong)param_1 + 0x5d) = *(undefined1 *)((longlong)param_2 + 0x5d);
  uVar1 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1a) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x22) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x26) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(param_2 + 0x2e);
  *(undefined1 *)((longlong)param_1 + 0xb9) = *(undefined1 *)((longlong)param_2 + 0xb9);
  *(undefined1 *)((longlong)param_1 + 0xba) = *(undefined1 *)((longlong)param_2 + 0xba);
  *(undefined1 *)((longlong)param_1 + 0xbb) = *(undefined1 *)((longlong)param_2 + 0xbb);
  *(undefined1 *)(param_1 + 0x2f) = *(undefined1 *)(param_2 + 0x2f);
  *(undefined1 *)((longlong)param_1 + 0xbd) = *(undefined1 *)((longlong)param_2 + 0xbd);
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = param_2[0x31];
  return param_1;
}



// FUNCTION 1419d74d0 FUN_1419d74d0 body=293 status=ok
// SIG undefined FUN_1419d74d0(void)

undefined4 * FUN_1419d74d0(undefined4 *param_1)

{
  *param_1 = 0x26;
  param_1[1] = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 9) = 0x1000001;
  *(undefined4 *)((longlong)param_1 + 0xd) = 0x1000f00;
  *(undefined4 *)((longlong)param_1 + 0x11) = 0x10000;
  *(undefined4 *)((longlong)param_1 + 0x15) = 0x1000f;
  *(undefined4 *)((longlong)param_1 + 0x19) = 0xf000100;
  *(undefined4 *)((longlong)param_1 + 0x1d) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x21) = 0xf0001;
  *(undefined4 *)((longlong)param_1 + 0x25) = 0x1000001;
  *(undefined4 *)((longlong)param_1 + 0x29) = 0x1000f00;
  *(undefined4 *)((longlong)param_1 + 0x2d) = 0x10000;
  *(undefined4 *)((longlong)param_1 + 0x31) = 0x1000f;
  *(undefined4 *)((longlong)param_1 + 0x35) = 0xf000100;
  *(undefined4 *)((longlong)param_1 + 0x39) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x3d) = 0xf0001;
  *(undefined4 *)((longlong)param_1 + 0x51) = 0x70001;
  *(undefined4 *)((longlong)param_1 + 0x55) = 0x7000000;
  *(undefined4 *)((longlong)param_1 + 0x59) = 0xff000000;
  *(undefined1 *)((longlong)param_1 + 0x5d) = 0xff;
  *(undefined8 *)(param_1 + 0x2d) = 0;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  param_1[0x2c] = 0xffffffff;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x11) = 0;
  param_1[0x13] = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1a) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1e) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  return param_1;
}



// FUNCTION 1419d7600 FUN_1419d7600 body=569 status=ok
// SIG undefined FUN_1419d7600(void)

undefined8 *
FUN_1419d7600(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  int local_res8 [2];
  undefined8 local_38;
  undefined2 *local_30;
  int local_28;
  
  FShaderFactoryInterface::FShaderFactoryInterface(param_1,param_2,param_4);
  *param_1 = &PTR__scalar_deleting_destructor__144d8e338;
  FString::FString(param_1 + 7,param_3);
  param_1[9] = 0;
  param_1[10] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xb),4000);
  puVar1 = param_1 + 0x10;
  *puVar1 = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  FUN_141eca160(&local_38,param_2 & 0xffffffff);
  FUN_1419ee8f0(&local_30,param_1 + 7,param_1 + 4,local_38);
  plVar3 = (longlong *)FUN_1415c3d50();
  puVar5 = &DAT_143f3eda8;
  if (local_28 != 0) {
    puVar5 = local_30;
  }
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,puVar5,0);
  if (plVar3 != (longlong *)0x0) {
    plVar2 = (longlong *)plVar3[1];
    local_res8[0] = 0;
    if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_res8,4);
      if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(plVar3,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    if (local_res8[0] == DAT_1464c0d00) {
      FUN_1419dfbd0(plVar3,puVar1);
      if ((*(byte *)(plVar3 + 5) & 1) != 0) {
        if (param_1[0x18] != 0) {
          uVar4 = FMemory::Realloc(param_1[0x18],0,0);
          param_1[0x18] = uVar4;
        }
        *(undefined4 *)(param_1 + 0x19) = 0;
        TSet<TTuple<FSHAHash,FShaderCodeEntry>,TDefaultMapHashableKeyFuncs<FSHAHash,FShaderCodeEntry,0>,FDefaultSetAllocator>
        ::ConditionalRehash(puVar1,*(int *)(param_1 + 0x11) - *(int *)((longlong)param_1 + 0xb4),0);
      }
      uVar4 = (**(code **)(*plVar3 + 0x90))(plVar3);
      param_1[9] = uVar4;
    }
    (**(code **)(*plVar3 + 0xe8))(plVar3);
    (**(code **)*plVar3)(plVar3,1);
    uVar4 = FPlatformFileManager::Get();
    plVar3 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar4);
    puVar5 = &DAT_143f3eda8;
    if (local_28 != 0) {
      puVar5 = local_30;
    }
    uVar4 = (**(code **)(*plVar3 + 0x100))(plVar3,puVar5);
    param_1[10] = uVar4;
  }
  if (local_30 != (undefined2 *)0x0) {
    FMemory::Free(local_30);
  }
  return param_1;
}



// FUNCTION 1419d7840 FShaderFactoryInterface body=115 status=ok
// SIG undefined FShaderFactoryInterface(void)

undefined8 *
FShaderFactoryInterface::FShaderFactoryInterface
          (undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 3) = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__144d8df20;
  *(undefined2 *)(param_1 + 2) = 0x100;
  FString::FString(param_1 + 4,param_3);
  if (*(int *)(param_3 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_3;
  }
  uVar1 = FUN_140438070(puVar2);
  *(undefined4 *)(param_1 + 6) = uVar1;
  *param_1 = &PTR__scalar_deleting_destructor__144d8e1d0;
  return param_1;
}



// FUNCTION 1419d78c0 FUN_1419d78c0 body=206 status=ok
// SIG undefined FUN_1419d78c0(void)

undefined4 *
FUN_1419d78c0(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,longlong param_4,
             longlong param_5,undefined4 param_6,uint param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = param_2[4];
  *(undefined8 *)(param_1 + 6) = param_3;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  param_1[0x14] = param_6;
  *(longlong *)(param_1 + 0x12) = param_5;
  puVar5 = (undefined4 *)FUN_1419f03e0(*(undefined8 *)(param_5 + 0x20));
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  param_1[0x15] = *puVar5;
  param_1[0x16] = uVar1;
  param_1[0x17] = uVar2;
  param_1[0x18] = uVar3;
  param_1[0x19] = puVar5[4];
  *(longlong *)(param_1 + 0x1a) = param_5 + 0xb0;
  param_1[0x1c] = param_7;
  if (param_4 != 0) {
    *(longlong *)(param_1 + 8) = param_4;
    *(ulonglong *)(param_1 + 0x10) = param_4 + (ulonglong)(param_7 & 7) * 0x28 + 0xc0;
    puVar6 = (undefined8 *)FUN_1419f03e0(*(undefined8 *)(param_4 + 0x18));
    uVar4 = puVar6[1];
    *(undefined8 *)(param_1 + 10) = *puVar6;
    *(undefined8 *)(param_1 + 0xc) = uVar4;
    param_1[0xe] = *(undefined4 *)(puVar6 + 2);
    return param_1;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 1419d7990 FShaderPipeline body=204 status=ok
// SIG undefined FShaderPipeline(void)

undefined8 *
FShaderPipeline::FShaderPipeline(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  plVar5 = (longlong *)*param_3;
  plVar1 = plVar5 + (int)param_3[1];
  do {
    if (plVar5 == plVar1) {
      return param_1;
    }
    lVar3 = *plVar5;
    if (lVar3 != 0) {
      iVar2 = *(int *)(*(longlong *)(lVar3 + 0x90) + 0x30);
      if (iVar2 == 0) {
        lVar4 = param_1[1];
        param_1[1] = lVar3;
      }
      else if (iVar2 == 1) {
        lVar4 = param_1[2];
        param_1[2] = lVar3;
      }
      else if (iVar2 == 2) {
        lVar4 = param_1[3];
        param_1[3] = lVar3;
      }
      else if (iVar2 == 3) {
        lVar4 = param_1[5];
        param_1[5] = lVar3;
      }
      else {
        if (iVar2 != 4) goto LAB_1419d7a40;
        lVar4 = param_1[4];
        param_1[4] = lVar3;
      }
      *(int *)(lVar3 + 0xb4) = *(int *)(lVar3 + 0xb4) + 1;
      if (lVar4 != 0) {
        FShader::Release();
      }
    }
LAB_1419d7a40:
    plVar5 = plVar5 + 1;
  } while( true );
}



// FUNCTION 1419d7a60 FUN_1419d7a60 body=1211 status=ok
// SIG undefined FUN_1419d7a60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1419d7a60(undefined8 *param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  DWORD DVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  short *psVar14;
  undefined4 local_res8 [2];
  undefined4 local_res10;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_res8[0] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1444d8080;
  *(undefined2 *)(param_1 + 1) = 0;
  iVar3 = DAT_146ac3b38;
  lVar12 = (longlong)DAT_146ac3b38;
  DAT_146ac3b38 = DAT_146ac3b38 + 1;
  local_res10 = param_2;
  if (DAT_146ac3b3c < DAT_146ac3b38) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146ac3b30,iVar3);
  }
  lVar13 = -1;
  *(undefined8 **)(DAT_146ac3b30 + lVar12 * 8) = param_1;
  *param_1 = &PTR_FUN_144d8e2f0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1e),4000);
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0xffffffff;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  lVar12 = DAT_1469f5ca0;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar4 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), lVar7 = 4, DVar6 == DAT_1468c21c0)) {
    lVar7 = 0;
  }
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)(lVar12 + lVar7);
  plVar8 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar8[1] = (longlong)PipelineStateCacheOnAppDeactivate;
    lVar12 = FDelegateHandle::GenerateNewID();
    plVar8[3] = lVar12;
    *plVar8 = (longlong)&PTR_GetPoolName_143f3f090;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af370,1);
    (**(code **)(*plVar8 + 0x20))(plVar8,local_res8);
    iVar3 = DAT_1464af378;
    lVar12 = (longlong)DAT_1464af378;
    DAT_1464af378 = DAT_1464af378 + 1;
    if (DAT_1464af37c < DAT_1464af378) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af370,iVar3);
    }
    puVar9 = (undefined8 *)(lVar12 * 0x10 + _DAT_1464af370);
    *puVar9 = plVar8;
    *(undefined4 *)(puVar9 + 1) = 2;
  }
  lVar12 = DAT_1469f5d18;
  cVar5 = '\0';
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar4 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar6 = GetCurrentThreadId(), lVar7 = 4, DVar6 == DAT_1468c21c0)) {
    lVar7 = 0;
  }
  if (*(int *)(lVar7 + lVar12) == 0) {
    return param_1;
  }
  uVar11 = local_res10;
  if (DAT_1468b6148 == 0) goto LAB_1419d7e99;
  local_58 = 0;
  psVar14 = &DAT_143f3eda8;
  if (DAT_1468e2428 != 0) {
    psVar14 = DAT_1468e2420;
  }
  local_50 = 0;
  local_68 = 0;
  local_60 = 0;
  if ((psVar14 != (short *)0x0) && (*psVar14 != 0)) {
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (psVar14[lVar12] != 0);
    uVar10 = (int)lVar12 + 1;
    local_60 = (ulonglong)uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    }
    FGenericPlatformString::Memcpy(local_68,psVar14,(longlong)(int)uVar10 * 2);
  }
  bVar1 = false;
  cVar4 = FConfigCacheIni::GetString
                    (DAT_1468b6148,PTR_u_ShaderPipelineCache_CacheFile_1464c0d38,
                     PTR_u_LastOpened_1464c0de0,&local_58,&local_68);
  if (cVar4 == '\0') {
    local_78 = 0;
    psVar14 = &DAT_143f3eda8;
    if (DAT_1468e2418 != 0) {
      psVar14 = DAT_1468e2410;
    }
    local_70 = 0;
    if ((psVar14 != (short *)0x0) && (*psVar14 != 0)) {
      lVar12 = -1;
      do {
        lVar12 = lVar12 + 1;
      } while (psVar14[lVar12] != 0);
      uVar10 = (int)lVar12 + 1;
      local_70 = (ulonglong)uVar10;
      if (0 < (int)uVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
      }
      FGenericPlatformString::Memcpy(local_78,psVar14,(longlong)(int)uVar10 * 2);
    }
    bVar1 = true;
    cVar4 = FConfigCacheIni::GetString
                      (DAT_1468b6148,PTR_u_ShaderPipelineCache_CacheFile_1464c0d38,
                       PTR_u_LastOpened_1464c0de0,&local_58,&local_78);
    if (cVar4 != '\0') goto LAB_1419d7e33;
LAB_1419d7e43:
    bVar2 = false;
  }
  else {
LAB_1419d7e33:
    if (((int)local_50 == 0) || ((int)local_50 == 1)) goto LAB_1419d7e43;
    bVar2 = true;
  }
  if ((bVar1) && (local_78 != 0)) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  uVar11 = local_res10;
  if (bVar2) {
    cVar5 = FUN_141a00de0(param_1,&local_58,local_res10);
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (cVar5 != '\0') {
    return param_1;
  }
LAB_1419d7e99:
  local_48 = 0;
  local_40 = 0;
  if (DAT_146299580 != 0) {
    do {
      lVar13 = lVar13 + 1;
    } while ((&DAT_146299580)[lVar13] != 0);
    uVar10 = (int)lVar13 + 1;
    local_40 = (ulonglong)uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    FGenericPlatformString::Memcpy(local_48,&DAT_146299580,(longlong)(int)uVar10 * 2);
  }
  FUN_141a00de0(param_1,&local_48,uVar11);
  if (local_48 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1419d7f20 FUN_1419d7f20 body=522 status=ok
// SIG undefined FUN_1419d7f20(void)

undefined8 *
FUN_1419d7f20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,longlong param_6,undefined8 *param_7,undefined1 param_8)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_38;
  undefined8 *local_30;
  
  *param_1 = param_2;
  FName::FName(param_1 + 1,param_2,1);
  lVar3 = (longlong)param_7;
  plVar1 = param_1 + 10;
  param_1[2] = 0;
  param_1[3] = 0;
  *plVar1 = 0;
  param_1[0xb] = 0;
  param_1[0xc] = param_1;
  *(undefined1 *)((longlong)param_1 + 0x6c) = param_8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (param_7 != (undefined8 *)0x0) {
    iVar2 = *(int *)(param_1 + 3);
    *(int *)(param_1 + 3) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0x1c) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar2);
    }
    *(longlong *)(param_1[2] + (longlong)iVar2 * 8) = lVar3;
    param_1[7] = lVar3;
  }
  lVar3 = param_6;
  if (param_6 != 0) {
    iVar2 = *(int *)(param_1 + 3);
    *(int *)(param_1 + 3) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0x1c) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar2);
    }
    *(longlong *)(param_1[2] + (longlong)iVar2 * 8) = lVar3;
    param_1[8] = lVar3;
  }
  if (param_5 != 0) {
    iVar2 = *(int *)(param_1 + 3);
    *(int *)(param_1 + 3) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0x1c) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar2);
    }
    *(longlong *)(param_1[2] + (longlong)iVar2 * 8) = param_5;
    param_1[6] = param_5;
    iVar2 = *(int *)(param_1 + 3);
    *(int *)(param_1 + 3) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0x1c) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar2);
    }
    *(undefined8 *)(param_1[2] + (longlong)iVar2 * 8) = param_4;
    param_1[5] = param_4;
  }
  iVar2 = *(int *)(param_1 + 3);
  *(int *)(param_1 + 3) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar2);
  }
  *(undefined8 *)(param_1[2] + (longlong)iVar2 * 8) = param_3;
  DAT_1469f5e08 = DAT_1469f5e08 + 1;
  param_1[4] = param_3;
  *(int *)(param_1 + 0xd) = DAT_1469f5e08;
  if (DAT_1469f5de0 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_1469f5de0 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_1469f5de0;
  param_1[0xb] = &DAT_1469f5de0;
  DAT_1469f5de0 = plVar1;
  param_7 = param_1;
  uVar4 = FName::FName(&param_6,param_2,1);
  uVar5 = FShaderPipelineType::GetNameToTypeMap();
  local_30 = &param_7;
  local_38 = uVar4;
  FUN_1416e1690(uVar5,&param_8,&local_38,0);
  return param_1;
}



// FUNCTION 1419d8130 FShaderPlatformCache body=658 status=ok
// SIG undefined FShaderPlatformCache(void)

undefined4 * FShaderPlatformCache::FShaderPlatformCache(undefined4 *param_1)

{
  *param_1 = 0x20;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  param_1[0x2c] = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  param_1[0x3e] = 0xffffffff;
  param_1[0x3f] = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  param_1[0x44] = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  param_1[0x56] = 0xffffffff;
  param_1[0x57] = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  param_1[0x5c] = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x6a) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  param_1[0x6e] = 0xffffffff;
  param_1[0x6f] = 0;
  *(undefined8 *)(param_1 + 0x72) = 0;
  param_1[0x74] = 0;
  *(undefined8 *)(param_1 + 0x76) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x7a) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x82) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  param_1[0x86] = 0xffffffff;
  param_1[0x87] = 0;
  *(undefined8 *)(param_1 + 0x8a) = 0;
  param_1[0x8c] = 0;
  *(undefined8 *)(param_1 + 0x8e) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x92) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x9a) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  param_1[0x9e] = 0xffffffff;
  param_1[0x9f] = 0;
  *(undefined8 *)(param_1 + 0xa2) = 0;
  param_1[0xa4] = 0;
  *(undefined8 *)(param_1 + 0xa6) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xaa) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xb2) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  param_1[0xb6] = 0xffffffff;
  param_1[0xb7] = 0;
  *(undefined8 *)(param_1 + 0xba) = 0;
  param_1[0xbc] = 0;
  *(undefined8 *)(param_1 + 0xbe) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xc2) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xca) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  param_1[0xcf] = 0;
  param_1[0xce] = 0xffffffff;
  *(undefined8 *)(param_1 + 0xd2) = 0;
  param_1[0xd4] = 0;
  *(undefined8 *)(param_1 + 0xd6) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xde) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  param_1[0xe3] = 0;
  param_1[0xe2] = 0xffffffff;
  *(undefined8 *)(param_1 + 0xe6) = 0;
  param_1[0xe8] = 0;
  return param_1;
}



// FUNCTION 1419d83d0 FUN_1419d83d0 body=699 status=ok
// SIG undefined FUN_1419d83d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1419d83d0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  int local_88 [2];
  undefined8 *local_80;
  undefined4 *local_78;
  undefined8 **local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  *(undefined4 *)(param_1 + 1) = 4;
  plVar1 = param_1 + 0xe;
  uVar6 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144d8df80;
  param_1[6] = &PTR_LAB_144d8dfc0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *plVar1 = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x13] = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x335b43ab;
  *(undefined1 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x70);
  plVar5 = (longlong *)FShaderCode::GetReadAccess(param_2 + 0x78);
  *(int *)(param_1 + 0x10) = (int)plVar5[1];
  if (plVar1 != plVar5) {
    iVar2 = (int)plVar5[1];
    _Src = (void *)*plVar5;
    *(int *)(param_1 + 0xf) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0x7c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(plVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*plVar1,_Src,(longlong)iVar2);
    }
  }
  local_88[0] = *(int *)(param_1 + 0xf);
  local_98 = (undefined4)plVar5[1];
  local_90 = 0xf;
  cVar4 = FUN_141645020(1,*plVar1,local_88,*plVar5);
  if (cVar4 != '\0') {
    iVar2 = *(int *)(param_1 + 0xf);
    if (iVar2 < local_88[0]) {
      *(int *)(param_1 + 0xf) = local_88[0];
      iVar7 = local_88[0] - iVar2;
      if (*(int *)((longlong)param_1 + 0x7c) < local_88[0]) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar2 + *plVar1),0,(longlong)iVar7);
    }
    else if ((local_88[0] < iVar2) && (iVar2 - local_88[0] != 0)) {
      *(int *)(param_1 + 0xf) = iVar2 - (iVar2 - local_88[0]);
      TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(plVar1);
    }
  }
  if (*(int *)((longlong)param_1 + 0x7c) != *(int *)(param_1 + 0xf)) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar1);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)((longlong)param_1 + 0x84) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)((longlong)param_1 + 0x8c) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)(param_2 + 0xa0);
  if (param_1[0x13] != 0) {
    uVar6 = *(undefined8 *)(param_1[0x13] + 0x10);
  }
  local_68 = *(undefined4 *)(param_1 + 0xd);
  local_64 = *(undefined4 *)(param_2 + 0x90);
  uStack_60 = *(undefined4 *)(param_2 + 0x94);
  uStack_5c = *(undefined4 *)(param_2 + 0x98);
  uStack_58 = *(undefined4 *)(param_2 + 0x9c);
  local_54 = *(undefined4 *)(param_2 + 0xa0);
  local_38 = *(undefined4 *)(param_1 + 0x14);
  local_78 = &local_68;
  local_70 = &local_80;
  local_48 = 0;
  local_40 = 0;
  local_80 = param_1;
  local_50 = uVar6;
  FUN_1419ce280(&DAT_1464c0af0,local_88,&local_78,0);
  if (local_48 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1419d8690 FShaderType body=392 status=ok
// SIG undefined FShaderType(void)

undefined8 *
FShaderType::FShaderType
          (undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 *param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
          undefined8 param_9)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *local_18;
  undefined8 *local_10;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d8dfd0;
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[2] = param_3;
  FName::FName(param_1 + 3,param_3,1);
  param_1[5] = param_5;
  *(undefined4 *)(param_1 + 6) = param_6;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_7;
  param_1[7] = param_8;
  param_1[8] = param_9;
  plVar1 = param_1 + 0x13;
  param_1[4] = param_4;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *plVar1 = 0;
  param_1[0x14] = 0;
  param_1[0x15] = param_1;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  if (DAT_1469f5dd8 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_1469f5dd8 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_1469f5dd8;
  param_1[0x14] = &DAT_1469f5dd8;
  DAT_1469f5dd8 = plVar1;
  param_5 = param_1;
  uVar2 = GetNameToTypeMap();
  local_10 = &param_5;
  local_18 = param_1 + 3;
  FUN_1416e1690(uVar2,&param_6,&local_18,0);
  *(int *)((longlong)param_1 + 0xc) = DAT_1469f5dfc;
  DAT_1469f5dfc = DAT_1469f5dfc + 1;
  return param_1;
}



// FUNCTION 1419d8820 FVertexFactoryParameterRef body=114 status=ok
// SIG undefined FVertexFactoryParameterRef(void)

longlong *
FVertexFactoryParameterRef::FVertexFactoryParameterRef
          (longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  
  param_1[1] = param_2;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = param_4;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  lVar5 = (**(code **)(param_1[1] + 0x30))(param_4);
  *param_1 = lVar5;
  puVar6 = (undefined4 *)FUN_1419f03e0(*(undefined8 *)(param_1[1] + 0x18));
  plVar1 = (longlong *)*param_1;
  uVar2 = puVar6[1];
  uVar3 = puVar6[2];
  uVar4 = puVar6[3];
  *(undefined4 *)((longlong)param_1 + 0x14) = *puVar6;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x24) = puVar6[4];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,param_3);
  }
  return param_1;
}



// FUNCTION 1419d88a0 FVertexFactoryType body=503 status=ok
// SIG undefined FVertexFactoryType(void)

undefined8 *
FVertexFactoryType::FVertexFactoryType
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte param_4,byte param_5,
          byte param_6,byte param_7,byte param_8,undefined8 param_9,undefined8 param_10,
          undefined8 param_11,undefined8 param_12)

{
  longlong *plVar1;
  
  param_1[3] = param_3;
  *param_1 = &PTR__scalar_deleting_destructor__144d8e1c8;
  param_1[2] = param_2;
  FName::FName(param_1 + 4,param_2,1);
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffe;
  param_1[6] = param_9;
  *(uint *)(param_1 + 5) =
       (((param_7 & 0xfffffffd | (uint)param_8 * 2) * 2 | param_6 & 0xfffffff9) * 2 |
       param_5 & 0xfffffff1) * 2 | ((uint)param_4 | *(uint *)(param_1 + 5)) & 0xffffffe1;
  param_1[7] = param_10;
  param_1[8] = param_11;
  param_1[9] = param_12;
  plVar1 = param_1 + 10;
  *plVar1 = 0;
  param_1[0xb] = 0;
  param_1[0xc] = param_1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  if (DAT_1469f60a0 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_1469f60a0 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_1469f60a0;
  param_1[0xb] = &DAT_1469f60a0;
  DAT_1469f60a0 = plVar1;
  *(int *)(param_1 + 1) = DAT_1469f59d0;
  DAT_1469f59d0 = DAT_1469f59d0 + 1;
  return param_1;
}



// FUNCTION 1419d8aa0 ~TArray<FPipelineCachePSOHeader,FDefaultAllocator> body=112 status=ok
// SIG undefined ~TArray<FPipelineCachePSOHeader,FDefaultAllocator>(void)

void TArray<FPipelineCachePSOHeader,FDefaultAllocator>::
     ~TArray<FPipelineCachePSOHeader,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    do {
      *(undefined4 *)(lVar1 + 0x48) = 0;
      if (*(longlong *)(lVar1 + 0x40) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar1);
      lVar1 = lVar1 + 0x58;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 == 0) {
    return;
  }
  FMemory::Free(lVar1);
  return;
}



// FUNCTION 1419d8b10 FUN_1419d8b10 body=141 status=ok
// SIG undefined FUN_1419d8b10(void)

void FUN_1419d8b10(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar2 = *(longlong *)(param_1 + 0xa0);
  iVar5 = *(int *)(param_1 + 0xb0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = param_1;
  }
  if (iVar5 != 0) {
    plVar4 = (longlong *)(lVar3 + 0x30);
    do {
      if ((int)plVar4[2] != 0) {
        plVar1 = (longlong *)*plVar4;
        if ((longlong *)*plVar4 == (longlong *)0x0) {
          plVar1 = plVar4 + -4;
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))(plVar1,0);
        }
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 10;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar2 = *(longlong *)(param_1 + 0xa0);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419d8ba0 ~TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_> body=254 status=ok
// SIG undefined ~TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>(void)

void TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>::
     ~TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar8 = (longlong *)*param_1;
  iVar7 = *(int *)(param_1 + 1);
  if (iVar7 != 0) {
    do {
      puVar3 = (undefined8 *)*plVar8;
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          if ((*(char *)(puVar3 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
            LOCK();
            bVar9 = *(int *)((longlong)puVar3 + 0xc) == 0;
            if (bVar9) {
              *(int *)((longlong)puVar3 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar9) {
              uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar5 == 0) {
                lVar6 = 0;
              }
              else {
                lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar6 + 8) = puVar3;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
      }
      plVar8 = plVar8 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    plVar8 = (longlong *)*param_1;
  }
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar8);
  return;
}



// FUNCTION 1419d8ca0 ~TSparseArray<TSetElement<TTuple<FIntVector,FBlockUpdateInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FIntVector,FBlockUpdateInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FIntVector,FBlockUpdateInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FIntVector,FBlockUpdateInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419d8d10 ~TSparseArray<TSetElement<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> body=384 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  int local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_1419d8dd6;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
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
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_1419d8dd6:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_141a0a230(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419d8e90 ~TSparseArray<TSetElement<TTuple<FRHIGraphicsPipelineState_*,FShaderCacheGraphicsPipelineState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FRHIGraphicsPipelineState_*,FShaderCacheGraphicsPipelineState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FRHIGraphicsPipelineState_*,FShaderCacheGraphicsPipelineState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FRHIGraphicsPipelineState_*,FShaderCacheGraphicsPipelineState>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<216,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419d8f00 ~TSparseArray<TSetElement<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> body=384 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FMaterialShaderMapId,FMaterialShaderMap_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  int local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_1419d8fc6;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
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
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_1419d8fc6:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<280,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419d9080 FUN_1419d9080 body=398 status=ok
// SIG undefined FUN_1419d9080(void)

void FUN_1419d9080(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  int local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_1419d9141;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
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
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_1419d9141:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>
                ((longlong)iStack_1c * 0x1c0 + 0x1b0 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_141a0a230(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419d9210 ~TSparseArray<TSetElement<TTuple<FShaderCacheGraphicsPipelineState,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FShaderCacheGraphicsPipelineState,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FShaderCacheGraphicsPipelineState,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FShaderCacheGraphicsPipelineState,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<212,4>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419d9280 FUN_1419d9280 body=398 status=ok
// SIG undefined FUN_1419d9280(void)

void FUN_1419d9280(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  int local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_1419d9341;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
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
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_1419d9341:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>
                ((longlong)iStack_1c * 0xd8 + 200 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<216,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419d9410 FUN_1419d9410 body=396 status=ok
// SIG undefined FUN_1419d9410(void)

void FUN_1419d9410(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  int local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_1419d94d1;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
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
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_1419d94d1:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>
                ((longlong)iStack_1c * 0x30 + 0x20 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419d95a0 FUN_1419d95a0 body=396 status=ok
// SIG undefined FUN_1419d95a0(void)

void FUN_1419d95a0(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  int local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_1419d9661;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
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
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_1419d9661:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>
                ((longlong)iStack_1c * 0x30 + 0x20 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419d9730 ~TSparseArray<TSetElement<TTuple<FShaderDrawKey,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FShaderDrawKey,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FShaderDrawKey,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FShaderDrawKey,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<3576,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419d97a0 ~TSparseArray<TSetElement<TTuple<FShaderResourceKey,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FShaderResourceKey,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FShaderResourceKey,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FShaderResourceKey,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<60,4>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419d9810 FUN_1419d9810 body=100 status=ok
// SIG undefined FUN_1419d9810(void)

void FUN_1419d9810(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419d9880 FUN_1419d9880 body=398 status=ok
// SIG undefined FUN_1419d9880(void)

void FUN_1419d9880(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  int local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_1419d9941;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
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
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_1419d9941:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      if (*(longlong *)(*param_1 + 0x20 + (longlong)iStack_1c * 0x48) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419d9a10 ~TSparseArray<TSetElement<FShaderCodeLibraryPipeline>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<FShaderCodeLibraryPipeline>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<FShaderCodeLibraryPipeline>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<FShaderCodeLibraryPipeline>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419d9a80 ~TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=100 status=ok
// SIG undefined ~TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<172,4>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419d9af0 ~TSparseArray<TSetElement<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=397 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  int local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_1419d9bb1;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
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
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_1419d9bb1:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      if (*(longlong *)((longlong)iStack_1c * 0x40 + *param_1 + 0x20) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1419d9c80 ~FShader body=145 status=ok
// SIG undefined ~FShader(void)

void FShader::~FShader(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__143f592a0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar1 = 0;
    do {
      FMemory::operator_delete(*(undefined8 *)(lVar1 + param_1[3]),8);
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 8;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  if (param_1[9] != 0) {
    FShaderResource::Release();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440780a8;
  return;
}


