// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142ebe1b0 FUN_142ebe1b0 body=29 status=ok
// SIG undefined FUN_142ebe1b0(void)

longlong FUN_142ebe1b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint7 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x5a8);
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if (((lVar1 != 0) && (param_2 != 0)) && (param_2 == *(longlong *)(lVar1 + 0x48))) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 142ebe1d0 FUN_142ebe1d0 body=19 status=ok
// SIG undefined FUN_142ebe1d0(void)

bool FUN_142ebe1d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x590);
  if (lVar1 == 0) {
    return false;
  }
  AcquireSRWLockShared((PSRWLOCK)(lVar1 + 0x20));
  if (*(int *)(lVar1 + 0x18) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + -8 + (longlong)*(int *)(lVar1 + 0x18) * 8);
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar1 + 0x20));
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



// FUNCTION 142ebe1f0 FUN_142ebe1f0 body=67 status=ok
// SIG undefined FUN_142ebe1f0(void)

undefined1 FUN_142ebe1f0(longlong param_1)

{
  char cVar1;
  
  if ((*(longlong *)(param_1 + 0x590) == 0) || (cVar1 = FUN_142ef5df0(), cVar1 == '\0')) {
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x2b8) != 0) && (cVar1 = FUN_142088620(), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 142ebe240 FUN_142ebe240 body=69 status=ok
// SIG undefined FUN_142ebe240(void)

void FUN_142ebe240(longlong *param_1,int param_2)

{
  if (((0 < (int)param_1[100]) &&
      (param_2 = *(int *)((longlong)param_1 + 0x1e4) * (int)param_1[100] * param_2, -1 < param_2))
     && (param_2 < (int)param_1[0x50])) {
                    /* WARNING: Could not recover jumptable at 0x000142ebe27d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2e8))
              (param_1,*(undefined8 *)((longlong)param_2 * 0x20 + 0x18 + param_1[0x4f]),0);
    return;
  }
  return;
}



// FUNCTION 142ebe290 FUN_142ebe290 body=88 status=ok
// SIG undefined FUN_142ebe290(void)

bool FUN_142ebe290(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146b3dd78;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] != 0;
    }
  }
  return *piVar1 != 0;
}



// FUNCTION 142ebe2f0 FUN_142ebe2f0 body=276 status=ok
// SIG undefined FUN_142ebe2f0(void)

void FUN_142ebe2f0(longlong param_1,byte param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x680);
  if ((cVar2 != '\0') && (cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x59c), cVar2 != '\0')) {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x59c);
    if (*(char *)(lVar3 + 0xaf) != '\0') {
      lVar3 = FWeakObjectPtr::Get(param_1 + 0x59c);
      if ((*(int *)(lVar3 + 0x48) < 1) ||
         (plVar1 = *(longlong **)
                    (*(longlong *)(lVar3 + 0x40) + -8 + (longlong)*(int *)(lVar3 + 0x48) * 8),
         plVar1 == (longlong *)0x0)) {
        lVar3 = 0;
      }
      else {
        lVar3 = (**(code **)(*plVar1 + 0x278))();
      }
      if (lVar3 == param_1) {
        return;
      }
    }
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x680);
    *(uint *)(lVar3 + 0x40) = *(uint *)(lVar3 + 0x40) & 0xfffffeff;
    *(uint *)(lVar3 + 0x40) = *(uint *)(lVar3 + 0x40) | (uint)param_2 << 8;
    *(byte *)(lVar3 + 0x5df) = param_2;
    cVar2 = FWeakObjectPtr::IsValid(lVar3 + 0x59c);
    if (cVar2 != '\0') {
      lVar4 = FWeakObjectPtr::Get(lVar3 + 0x59c);
      (**(code **)(*(longlong *)(lVar3 + 0x4d8) + 0xd8))
                ((longlong *)(lVar3 + 0x4d8),*(undefined1 *)(lVar4 + 0xb8));
    }
    (**(code **)(*(longlong *)(lVar3 + 0x4d8) + 0xe0))
              ((longlong *)(lVar3 + 0x4d8),*(undefined1 *)(lVar3 + 0x5de));
  }
  return;
}



// FUNCTION 142ebe410 FUN_142ebe410 body=52 status=ok
// SIG undefined FUN_142ebe410(void)

void FUN_142ebe410(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x59c);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x59c);
    FUN_142ee3990(uVar1);
    return;
  }
  return;
}



// FUNCTION 142ebe450 FUN_142ebe450 body=70 status=ok
// SIG undefined FUN_142ebe450(void)

void FUN_142ebe450(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_res8 [32];
  
  (**(code **)(*param_1 + 0x4b8))(param_1,local_res8);
  cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x59c);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x59c);
    FUN_142ee3cb0(uVar2);
    return;
  }
  return;
}



// FUNCTION 142ebe4a0 FUN_142ebe4a0 body=70 status=ok
// SIG undefined FUN_142ebe4a0(void)

void FUN_142ebe4a0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_res8 [32];
  
  (**(code **)(*param_1 + 0x4b8))(param_1,local_res8);
  cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x59c);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x59c);
    FUN_142f001d0(uVar2);
    return;
  }
  return;
}



// FUNCTION 142ebe4f0 FUN_142ebe4f0 body=80 status=ok
// SIG undefined FUN_142ebe4f0(void)

void FUN_142ebe4f0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  
  (**(code **)(*param_1 + 0x4b8))(param_1,local_res8);
  cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x59c);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x59c);
    FUN_142f005e0(uVar2,param_2);
  }
  return;
}



// FUNCTION 142ebe540 FUN_142ebe540 body=92 status=ok
// SIG undefined FUN_142ebe540(void)

undefined8 FUN_142ebe540(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  
  (**(code **)(*param_1 + 0x4b8))(param_1,local_res8);
  cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x59c);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0x59c);
    uVar2 = FUN_142f02280(uVar2,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 142ebe5a0 FUN_142ebe5a0 body=264 status=ok
// SIG undefined FUN_142ebe5a0(void)

void FUN_142ebe5a0(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  if (*(int *)(param_1 + 0x5c) == -1) {
    iVar2 = *(int *)(param_1 + 0xa0);
    if (((iVar2 != -1) && (-1 < iVar2)) && (iVar2 < *(int *)(param_1 + 0x88))) {
      iVar1 = FUN_142eb0de0();
      iVar2 = *(int *)(param_1 + 0x9c);
      if ((iVar2 != -1) && (iVar2 < iVar1)) {
        iVar1 = iVar2;
      }
      FUN_142ed2f20(param_1,iVar1);
      FUN_142ed1b40(param_1,iVar1,0);
      *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
      return;
    }
    param_2 = 0;
    if (*(int *)(param_1 + 0x9c) < -1) {
      param_2 = *(int *)(param_1 + 0x9c);
    }
  }
  else {
    if ((*(int *)(param_1 + 0x58) < 1) || (*(int *)(param_1 + 0x54) < 1)) {
      iVar2 = 1;
    }
    else {
      fVar3 = (float)(*(int *)(param_1 + 0x58) / *(int *)(param_1 + 0x54));
      iVar2 = -((int)ROUND(-0.5 - (fVar3 + fVar3)) >> 1);
    }
    param_2 = *(int *)(param_1 + 0x5c) + param_2;
    if (param_2 < 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0xa4);
    if (*(int *)(param_1 + 0xa4) <= iVar2) {
      iVar1 = iVar2;
    }
    if (iVar1 * *(int *)(param_1 + 0x54) <= param_2) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x9c);
    if ((iVar2 != -1) && (iVar2 < param_2)) {
      param_2 = iVar2;
    }
  }
  FUN_142ed2f20(param_1,param_2);
  FUN_142ed1b40(param_1,param_2,0);
  return;
}



// FUNCTION 142ebe6b0 FUN_142ebe6b0 body=207 status=ok
// SIG undefined FUN_142ebe6b0(void)

void FUN_142ebe6b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if (param_1 != 0) {
    plVar1 = (longlong *)(param_1 + 0x148);
    (**(code **)(*plVar1 + 0x38))(plVar1);
    if (param_2 != 0) {
      plVar5 = (longlong *)(param_2 + 0x148);
      uVar2 = (**(code **)(*plVar5 + 0x10))(plVar5);
      iVar3 = (**(code **)(*plVar5 + 0x20))(plVar5);
      while (0 < iVar3) {
        uVar4 = (**(code **)(*plVar5 + 0x40))(plVar5,0);
        (**(code **)(*plVar5 + 0x30))(plVar5,uVar4);
        (**(code **)(*plVar1 + 0x28))(plVar1);
        iVar3 = (**(code **)(*plVar5 + 0x20))(plVar5);
      }
      (**(code **)(*plVar5 + 0x18))(plVar5,0xffffffff,0);
      (**(code **)(*plVar1 + 0x18))(plVar1,uVar2,1,0);
    }
  }
  return;
}



// FUNCTION 142ebe780 FUN_142ebe780 body=107 status=ok
// SIG undefined FUN_142ebe780(void)

void FUN_142ebe780(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = FUN_142eed730();
    FUN_142f0bc30(param_1,param_2,iVar1 + -1);
  }
  if (((*(char *)(param_1 + 0x300) != '\0') && (*(char *)(param_1 + 0x24e) != '\0')) &&
     (*(longlong *)(param_1 + 0x2f8) != 0)) {
    iVar1 = FUN_142eed730(param_1);
    FUN_142f0bc30(param_1,*(undefined8 *)(param_1 + 0x2f8),iVar1 + -1);
  }
  return;
}



// FUNCTION 142ebe7f0 FUN_142ebe7f0 body=306 status=ok
// SIG undefined FUN_142ebe7f0(void)

bool FUN_142ebe7f0(longlong *param_1,char param_2,undefined1 param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  
  do {
    iVar6 = FUN_142eb7360(param_1);
    uVar1 = *(uint *)(param_1 + 0x4e);
    bVar4 = false;
    bVar3 = false;
    iVar10 = 0;
    uVar9 = (ulonglong)uVar1;
    uVar7 = uVar1;
    if (iVar6 < 1) {
LAB_142ebe8ff:
      return uVar7 != uVar1;
    }
    do {
      uVar7 = FUN_142eb5490(param_1,param_2,uVar9 & 0xffffffff,param_3);
      uVar9 = (ulonglong)(int)uVar7;
      if (uVar7 == uVar1) {
LAB_142ebe8e3:
        if ((!bVar3) || (bVar4)) goto LAB_142ebe8ff;
        break;
      }
      if (((int)uVar7 < 0) || ((int)param_1[0x50] <= (int)uVar7)) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(longlong *)(uVar9 * 0x20 + 0x18 + param_1[0x4f]);
      }
      if (((char)param_1[0x4d] == '\0') && (*(char *)(lVar8 + 0x198) == '\0')) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if ((lVar8 == 0) ||
         ((!bVar2 && (cVar5 = (**(code **)(*(longlong *)(lVar8 + 0x170) + 0x40))(), cVar5 != '\0')))
         ) {
        bVar4 = true;
        (**(code **)(*param_1 + 0x2b8))
                  (param_1,uVar7,*(undefined1 *)((longlong)param_1 + 0x24c),
                   *(undefined1 *)((longlong)param_1 + 0x24d));
        goto LAB_142ebe8e3;
      }
      iVar10 = iVar10 + 1;
      bVar3 = true;
    } while (iVar10 < iVar6);
    if (param_2 == '\x02') {
      return false;
    }
    param_2 = '\x02';
  } while( true );
}



// FUNCTION 142ebe930 FUN_142ebe930 body=10 status=ok
// SIG undefined FUN_142ebe930(void)

void FUN_142ebe930(undefined8 param_1)

{
  FUN_142ebe7f0(param_1,0,1);
  return;
}



// FUNCTION 142ebe940 InputPadDown_Released body=10 status=ok
// SIG undefined InputPadDown_Released(void)

void ATTLPlayerController::InputPadDown_Released(undefined8 param_1)

{
  FUN_142ebe7f0(param_1,1,0);
  return;
}



// FUNCTION 142ebe950 FUN_142ebe950 body=12 status=ok
// SIG undefined FUN_142ebe950(void)

void FUN_142ebe950(undefined8 param_1)

{
  FUN_142ebe7f0(param_1,1);
  return;
}



// FUNCTION 142ebe960 FUN_142ebe960 body=10 status=ok
// SIG undefined FUN_142ebe960(void)

void FUN_142ebe960(undefined8 param_1)

{
  FUN_142ebe7f0(param_1,0,0);
  return;
}



// FUNCTION 142ebe970 FUN_142ebe970 body=468 status=ok
// SIG undefined FUN_142ebe970(void)

void FUN_142ebe970(longlong param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  longlong local_res18;
  longlong local_res20;
  
  FUN_142ef7550();
  pwVar8 = (wchar_t *)0x0;
  plVar9 = *(longlong **)(param_1 + 0x2c0);
  pwVar7 = (wchar_t *)((longlong)*(int *)(param_1 + 0x2c8) & 0x1fffffffffffffff);
  if (plVar9 + *(int *)(param_1 + 0x2c8) < plVar9) {
    pwVar7 = pwVar8;
  }
  pwVar6 = pwVar8;
  if (pwVar7 != (wchar_t *)0x0) {
    do {
      lVar1 = *plVar9;
      if (lVar1 != 0) {
        pwVar4 = _guard_xfg_dispatch_icall_nop(L"&UGbxCascadingList::OnItemSelected_Internal",L"::")
        ;
        pwVar3 = pwVar8;
        while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
          pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar3 = pwVar2;
        }
        FName::FName(&local_res18,pwVar3 + 2,1);
        lVar5 = local_res18;
        FWeakObjectPtr::operator=(lVar1 + 0x180,param_1);
        *(longlong *)(lVar1 + 0x188) = lVar5;
        if ((lVar5 != 0) && (lVar5 = FWeakObjectPtr::Get(lVar1 + 0x180), lVar5 != 0)) {
          UObject::FindFunction(lVar5,*(undefined8 *)(lVar1 + 0x188));
        }
        pwVar4 = _guard_xfg_dispatch_icall_nop(L"&UGbxCascadingList::OnItemClicked_Internal",L"::");
        pwVar3 = pwVar8;
        while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
          pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar3 = pwVar2;
        }
        FName::FName(&local_res20,pwVar3 + 2,1);
        lVar5 = local_res20;
        FWeakObjectPtr::operator=(lVar1 + 400,param_1);
        *(longlong *)(lVar1 + 0x198) = lVar5;
        if ((lVar5 != 0) && (lVar5 = FWeakObjectPtr::Get(lVar1 + 400), lVar5 != 0)) {
          UObject::FindFunction(lVar5,*(undefined8 *)(lVar1 + 0x198));
        }
        *(undefined8 *)(lVar1 + 0x1b0) = *(undefined8 *)(param_1 + 0x2b8);
      }
      plVar9 = plVar9 + 1;
      pwVar6 = (wchar_t *)((longlong)pwVar6 + 1);
    } while (pwVar6 != pwVar7);
  }
  return;
}



// FUNCTION 142ebeb70 FUN_142ebeb70 body=383 status=ok
// SIG undefined FUN_142ebeb70(void)

void FUN_142ebeb70(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  plVar3 = *(longlong **)(param_1 + 0x2c0);
  uVar6 = (longlong)*(int *)(param_1 + 0x2c8) & 0x1fffffffffffffff;
  if (plVar3 + *(int *)(param_1 + 0x2c8) < plVar3) {
    uVar6 = uVar7;
  }
  uVar4 = uVar7;
  if (uVar6 != 0) {
    do {
      lVar2 = *plVar3;
      if (lVar2 != 0) {
        FWeakObjectPtr::operator=(lVar2 + 0x180,0);
        *(undefined8 *)(lVar2 + 0x188) = 0;
        FWeakObjectPtr::operator=(lVar2 + 400);
        *(undefined8 *)(lVar2 + 0x198) = 0;
      }
      plVar3 = plVar3 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar6);
  }
  iVar1 = *(int *)(param_1 + 0x314);
  lVar2 = *(longlong *)(param_1 + 0x308);
  iVar5 = *(int *)(param_1 + 0x310);
  if (iVar1 < 0) {
    if (iVar5 != 0) {
      lVar2 = lVar2 + 8;
      do {
        FUN_142ea9b10(lVar2 + 0x20);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(lVar2);
        lVar2 = lVar2 + 0x38;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar1 = *(int *)(param_1 + 0x314);
    }
    *(undefined4 *)(param_1 + 0x310) = 0;
    if (iVar1 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
                ((longlong *)(param_1 + 0x308),0);
    }
  }
  else {
    if (iVar5 != 0) {
      lVar2 = lVar2 + 8;
      do {
        FUN_142ea9b10(lVar2 + 0x20);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(lVar2);
        lVar2 = lVar2 + 0x38;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined4 *)(param_1 + 0x310) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x2c0);
  uVar6 = (longlong)*(int *)(param_1 + 0x2c8) & 0x1fffffffffffffff;
  if (plVar3 + *(int *)(param_1 + 0x2c8) < plVar3) {
    uVar6 = uVar7;
  }
  if (uVar6 != 0) {
    do {
      if (*plVar3 != 0) {
        (**(code **)(*(longlong *)(*plVar3 + 0x148) + 0x38))();
      }
      plVar3 = plVar3 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar6);
  }
  FUN_142107600(param_1);
  return;
}



// FUNCTION 142ebecf0 FUN_142ebecf0 body=46 status=ok
// SIG undefined FUN_142ebecf0(void)

void FUN_142ebecf0(longlong param_1,undefined8 param_2)

{
  UUserWidget::NativeTick();
  FGeometry::operator=(param_1 + 0x31c,param_2);
  return;
}



// FUNCTION 142ebed20 FUN_142ebed20 body=37 status=ok
// SIG undefined FUN_142ebed20(void)

void FUN_142ebed20(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  
  if ((*(char *)((longlong)param_3 + 0xc) != '\0') || (lVar1 = 0x1b8, DAT_146b3d9b0 != *param_3)) {
    lVar1 = 0x1a8;
  }
  FUN_142eb0610(param_1 + lVar1);
  return;
}



// FUNCTION 142ebed60 FUN_142ebed60 body=268 status=ok
// SIG undefined FUN_142ebed60(void)

void FUN_142ebed60(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  if ((*param_2 == DAT_1469e9868) &&
     (cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x134), cVar5 != '\0')) {
    FUN_142ed3dc0(param_1 + -0x4d8,0,0);
  }
  if (*(char *)(param_1 + 0x13c) != '\0') {
    param_1 = param_1 + 0xc4;
    cVar5 = FWeakObjectPtr::IsValid(param_1);
    if (cVar5 != '\0') {
      lVar7 = FWeakObjectPtr::Get(param_1);
      lVar7 = FWeakObjectPtr::Get(lVar7 + 0x38);
      if (lVar7 != 0) {
        lVar8 = FWeakObjectPtr::Get(param_1);
        local_28 = *param_2;
        local_20 = param_2[1];
        local_18 = param_2[2];
        if (local_18 != 0) {
          LOCK();
          *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
          UNLOCK();
        }
        uVar6 = FUN_142eed430(lVar8 + 0x28);
        FUN_142ef09f0(lVar7,&local_28,1,uVar6);
      }
    }
  }
  plVar4 = (longlong *)param_2[2];
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



// FUNCTION 142ebee70 FUN_142ebee70 body=354 status=ok
// SIG undefined FUN_142ebee70(void)

void FUN_142ebee70(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 local_res8 [16];
  
  LOCK();
  iVar1 = *(int *)((longlong)param_1 + 0x61c);
  *(int *)((longlong)param_1 + 0x61c) = 1;
  UNLOCK();
  if (iVar1 != 0) {
    return;
  }
  bVar8 = true;
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0xb9);
  bVar2 = true;
  if ((cVar4 == '\0') ||
     (lVar5 = FWeakObjectPtr::Get(param_1 + 0xb9), (*(byte *)(lVar5 + 0x460) & 2) != 0)) {
    bVar2 = false;
  }
  cVar4 = FWeakObjectPtr::IsValid();
  if (cVar4 == '\0') {
LAB_142ebef02:
    bVar3 = false;
  }
  else {
    lVar5 = FWeakObjectPtr::Get(param_1 + 0xba);
    if ((*(longlong *)(lVar5 + 0x590) != 0) &&
       (cVar4 = FUN_142ef5df0(*(longlong *)(lVar5 + 0x590),param_1), cVar4 != '\0'))
    goto LAB_142ebef02;
    bVar3 = true;
  }
  if ((bVar2) || (bVar3)) {
    bVar8 = false;
  }
  if (param_1[0x57] == 0) goto LAB_142ebef47;
  if (bVar8) {
    LOCK();
    bVar8 = *(int *)((longlong)param_1 + 0x61c) == 0;
    if (bVar8) {
      *(int *)((longlong)param_1 + 0x61c) = 0;
    }
    UNLOCK();
    if (bVar8) goto LAB_142ebef35;
    uVar6 = 1;
  }
  else {
LAB_142ebef35:
    uVar6 = 0;
  }
  (**(code **)(*(longlong *)param_1[0x57] + 0x278))((longlong *)param_1[0x57],uVar6);
LAB_142ebef47:
  cVar4 = FUN_14202a080();
  if ((cVar4 == '\0') || ((*(byte *)((longlong)param_1 + 0x624) & 1) == 0)) {
    FUN_14172a070(local_res8,0);
    uVar6 = FWeakObjectPtr::Get(param_1 + 0xbc);
    uVar7 = FWeakObjectPtr::Get(param_1 + 0xbc);
    (**(code **)(*param_1 + 0x538))(param_1,uVar7,uVar6);
    FUN_14172a400(local_res8);
  }
  (**(code **)(*param_1 + 0x5b8))(param_1,(longlong)param_1 + 0x21c);
  *(undefined1 *)((longlong)param_1 + 0x21a) = 1;
  FUN_142ecf3f0(param_1);
  return;
}



// FUNCTION 142ebeff0 FUN_142ebeff0 body=221 status=ok
// SIG undefined FUN_142ebeff0(void)

void FUN_142ebeff0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (param_2 != 0) {
    lVar2 = FUN_142f2ce20();
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
      iVar4 = *(int *)(param_2 + 0x2e0);
      goto LAB_142ebf04e;
    }
  }
  iVar4 = -1;
LAB_142ebf04e:
  lVar2 = *(longlong *)(param_1 + 0x2c0);
  if (lVar2 != 0) {
    lVar3 = FUN_142f16d60();
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
      if ((iVar4 < 0) || (*(int *)(lVar2 + 0x60) <= iVar4)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        thunk_FUN_142f12a10(param_1,*(undefined8 *)
                                     (*(longlong *)(lVar2 + 0x58) + (longlong)iVar4 * 0x30));
      }
    }
  }
  return;
}



// FUNCTION 142ebf0d0 FUN_142ebf0d0 body=234 status=ok
// SIG undefined FUN_142ebf0d0(void)

void FUN_142ebf0d0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_18;
  int local_10;
  
  plVar5 = (longlong *)0x0;
  iVar2 = 0;
  if (((*(int *)(param_1 + 0x380) != 0) && (*(longlong **)(param_1 + 0x378) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x378) + 0x18))(), cVar1 != '\0')) {
    uVar3 = FUN_142eb8af0(param_1,&local_18);
    plVar4 = plVar5;
    if (*(int *)(param_1 + 0x380) != 0) {
      plVar4 = *(longlong **)(param_1 + 0x378);
    }
    (**(code **)(*plVar4 + 0x38))(plVar4,param_1,uVar3);
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  if (((*(int *)(param_1 + 0x3a0) != 0) && (*(longlong **)(param_1 + 0x398) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x18))(), cVar1 != '\0')) {
    FUN_142eb8af0(param_1,&local_18);
    if (0 < *(int *)(param_1 + 0x32c)) {
      if (local_10 != 0) {
        iVar2 = local_10 + -1;
      }
      if (*(int *)(param_1 + 0x32c) <= iVar2) {
        if (*(int *)(param_1 + 0x3a0) != 0) {
          plVar5 = *(longlong **)(param_1 + 0x398);
        }
        (**(code **)(*plVar5 + 0x38))(plVar5,param_1,&local_18);
      }
    }
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142ebf1c0 FUN_142ebf1c0 body=273 status=ok
// SIG undefined FUN_142ebf1c0(void)

void FUN_142ebf1c0(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 local_res8;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x310);
  if ((cVar2 != '\0') && (param_2 != 0)) {
    iVar1 = *(int *)(param_2 + 0x2e0);
    if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x2f8))) {
      lVar4 = *(longlong *)(param_1 + 0x2f0);
      lVar3 = FWeakObjectPtr::Get(param_1 + 0x310);
      iVar1 = *(int *)((longlong)iVar1 * 0x20 + 0x18 + lVar4);
      if (*(int *)(lVar3 + 0x318) != iVar1) {
        *(int *)(lVar3 + 0x318) = iVar1;
        FUN_142edc050(lVar3);
        local_res8 = 0;
        if (((*(longlong *)(lVar3 + 0x300) != 0) &&
            (lVar4 = FWeakObjectPtr::Get(lVar3 + 0x2f8), lVar4 != 0)) &&
           (lVar4 = UObject::FindFunction(lVar4,*(undefined8 *)(lVar3 + 0x300)), lVar4 != 0)) {
          local_res8 = CONCAT44(local_res8._4_4_,iVar1);
          plVar5 = (longlong *)FWeakObjectPtr::Get(lVar3 + 0x2f8);
          uVar6 = FUN_14178ac60(plVar5,*(undefined8 *)(lVar3 + 0x300));
          (**(code **)(*plVar5 + 0x208))(plVar5,uVar6,&local_res8);
        }
      }
    }
  }
  FUN_142ef6530(param_1);
  return;
}



// FUNCTION 142ebf2e0 FUN_142ebf2e0 body=261 status=ok
// SIG undefined FUN_142ebf2e0(void)

void FUN_142ebf2e0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar2 = UGPasswordResetPage::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar2 = *(longlong *)(param_1 + 0x2c0), lVar2 != 0)) {
      lVar3 = FUN_142f16620();
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
        lVar4 = *(longlong *)(lVar2 + 0x88);
        lVar3 = lVar4 + (longlong)*(int *)(lVar2 + 0x90) * 0x28;
        if (lVar4 != lVar3) {
          do {
            if (*(longlong *)(lVar4 + 0x18) == *(longlong *)(param_2 + 0x2e8)) {
              if (*(char *)(lVar4 + 0x20) != '\0') {
                FUN_142ef6530(param_1);
              }
              break;
            }
            lVar4 = lVar4 + 0x28;
          } while (lVar4 != lVar3);
        }
        FUN_142eb42f0(lVar2 + 0xa0,param_1,*(undefined8 *)(param_2 + 0x2e8));
      }
    }
  }
  return;
}



// FUNCTION 142ebf3f0 FUN_142ebf3f0 body=56 status=ok
// SIG undefined FUN_142ebf3f0(void)

void FUN_142ebf3f0(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x6a9) == '\0') {
    lVar1 = FUN_142eb6240();
    if (lVar1 != 0) {
      TBaseDelegate<void>::ExecuteIfBound(lVar1 + 0x70);
    }
    FUN_142eb3990(param_1);
    return;
  }
  return;
}



// FUNCTION 142ebf440 FUN_142ebf440 body=34 status=ok
// SIG undefined FUN_142ebf440(void)

void FUN_142ebf440(longlong param_1)

{
  FUN_142ef6550(param_1,*(undefined8 *)(param_1 + 0x2f0));
  FUN_142ef6530(param_1);
  return;
}



// FUNCTION 142ebf470 FUN_142ebf470 body=366 status=ok
// SIG undefined FUN_142ebf470(void)

void FUN_142ebf470(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res8;
  undefined1 local_res20 [8];
  
  lVar2 = (**(code **)(*param_1 + 0x2a0))();
  if (lVar2 != 0) {
    lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142ebf4c2;
  }
  lVar2 = 0;
LAB_142ebf4c2:
  lVar2 = FUN_142ed8c10(lVar2,param_1 + 0x5d,param_1 + 0x61,(int)param_1[99]);
  if (lVar2 != 0) {
    FWeakObjectPtr::operator=(lVar2 + 0x310,param_1);
    if ((*(longlong *)(lVar2 + 0x300) != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x300) + 0x28), lVar3 != 0)) {
      lVar4 = UCanvasPanelSlot::GetPrivateStaticClass();
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
        FUN_1420de980(*(undefined8 *)(lVar2 + 0x2c8),
                      CONCAT44(*(float *)((longlong)param_1 + 0x2f4) *
                               *(float *)((longlong)param_1 + 0x344) +
                               *(float *)(param_1 + 0x5e) * *(float *)((longlong)param_1 + 0x33c) +
                               *(float *)((longlong)param_1 + 0x34c),
                               *(float *)((longlong)param_1 + 0x2f4) * *(float *)(param_1 + 0x68) +
                               *(float *)(param_1 + 0x5e) * *(float *)(param_1 + 0x67) +
                               *(float *)(param_1 + 0x69)),local_res20,&local_res8);
        UCanvasPanelSlot::SetPosition(lVar3,local_res8);
      }
    }
  }
  return;
}



// FUNCTION 142ebf5e0 FUN_142ebf5e0 body=147 status=ok
// SIG undefined FUN_142ebf5e0(void)

void FUN_142ebf5e0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = URemnantGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar2 = FUN_142eb6170(param_1,*(undefined4 *)(param_2 + 0x2d8)), lVar2 != 0)) {
      FUN_142eb3990(param_1);
      FUN_142eb06e0(param_1,lVar2,param_3);
    }
  }
  return;
}



// FUNCTION 142ebf680 FUN_142ebf680 body=718 status=ok
// SIG undefined FUN_142ebf680(void)

undefined8
FUN_142ebf680(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  undefined8 local_res8;
  longlong *local_38;
  longlong local_30;
  
  plVar1 = (longlong *)(param_1 + -0x4d8);
  (**(code **)(*plVar1 + 0x4b8))(plVar1,&local_res8);
  lVar10 = 0;
  if (param_2 == 0) {
LAB_142ebf6fa:
    param_2 = lVar10;
  }
  else {
    lVar4 = UPawnAction_Sequence::StaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142ebf6fa;
  }
  lVar4 = param_1 + 0xb4;
  *(longlong *)(param_1 + 0x10) = param_2;
  FWeakObjectPtr::operator=(lVar4,param_3);
  FWeakObjectPtr::operator=(param_1 + 0xc4,param_4);
  iVar11 = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    iVar11 = *(int *)(*(longlong *)(param_1 + 0x10) + 0xa8);
  }
  *(int *)(param_1 + 0xcc) = iVar11 + param_5;
  cVar3 = FWeakObjectPtr::IsValid(lVar4);
  if (cVar3 != '\0') {
    uVar5 = FWeakObjectPtr::Get(lVar4);
    lVar6 = FUN_1422312c0(uVar5);
    if (lVar6 != 0) {
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
      if (bVar2) goto LAB_142ebf79f;
    }
  }
  lVar6 = lVar10;
LAB_142ebf79f:
  FWeakObjectPtr::operator=(param_1 + 0xf4,lVar6);
  cVar3 = FWeakObjectPtr::IsValid(lVar4);
  lVar6 = lVar10;
  if (cVar3 != '\0') {
    lVar6 = FWeakObjectPtr::Get(lVar4);
    lVar6 = *(longlong *)(lVar6 + 0x848);
  }
  FWeakObjectPtr::operator=(param_1 + 0xbc,lVar6);
  lVar7 = FWeakObjectPtr::Get(lVar4);
  lVar6 = lVar10;
  if (lVar7 != 0) {
    uVar5 = FUN_142f30760();
    plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar7,uVar5);
    if (plVar8 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  FWeakObjectPtr::operator=(param_1 + 0xfc,lVar6);
  uVar5 = GetTransientPackage();
  FUN_1417846f0(uVar5,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_res8 = 0;
  uVar9 = FUN_142f35520();
  lVar6 = FUN_1417985e0(uVar9,uVar5,0,0,0,0,0,0,0);
  *(longlong *)(param_1 + 0xd0) = lVar6;
  if (lVar6 != 0) {
    FUN_142ef1b80(lVar6,plVar1);
  }
  uVar5 = GetTransientPackage();
  FUN_1417846f0(uVar5,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_res8 = 0;
  uVar9 = FUN_142f25af0();
  lVar6 = FUN_1417985e0(uVar9,uVar5,0,0,0,0,0,0,0);
  *(longlong *)(param_1 + 0xd8) = lVar6;
  if (lVar6 != 0) {
    local_38 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      uVar5 = FUN_142f2b5a0();
      lVar10 = UObjectBaseUtility::GetInterfaceAddress(plVar1,uVar5);
    }
    local_30 = lVar10;
    FTimeline::SetTimelinePostUpdateFunc(*(undefined8 *)(param_1 + 0xd8),&local_38);
  }
  if (((*(longlong *)(param_1 + 0x10) == 0) ||
      (cVar3 = FWeakObjectPtr::IsValid(lVar4), cVar3 == '\0')) ||
     (cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xc4), cVar3 == '\0')) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 142ebf950 FUN_142ebf950 body=629 status=ok
// SIG undefined FUN_142ebf950(void)

void FUN_142ebf950(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 local_res8 [16];
  
  plVar6 = param_1 + 0xba;
  FWeakObjectPtr::operator=(plVar6);
  cVar2 = FWeakObjectPtr::IsValid(plVar6);
  lVar7 = 0;
  if (cVar2 == '\0') {
LAB_142ebf9d4:
    lVar3 = lVar7;
  }
  else {
    lVar3 = FWeakObjectPtr::Get(plVar6);
    lVar3 = FWeakObjectPtr::Get(lVar3 + 0x598);
    if (lVar3 == 0) goto LAB_142ebf9d4;
    lVar4 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_142ebf9d4;
  }
  FWeakObjectPtr::operator=(param_1 + 0xbb,lVar3);
  cVar2 = FWeakObjectPtr::IsValid(plVar6);
  if (cVar2 == '\0') {
LAB_142ebfa44:
    lVar3 = lVar7;
  }
  else {
    lVar3 = FWeakObjectPtr::Get(plVar6);
    lVar3 = FWeakObjectPtr::Get(lVar3 + 0x5a0);
    if (lVar3 == 0) goto LAB_142ebfa44;
    lVar4 = FUN_142f27b90();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_142ebfa44;
  }
  FWeakObjectPtr::operator=(param_1 + 0xb9,lVar3);
  cVar2 = FWeakObjectPtr::IsValid(plVar6);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(plVar6);
    lVar3 = FWeakObjectPtr::Get(lVar3 + 0x5a8);
    if (lVar3 != 0) {
      lVar4 = FUN_1429d7ab0();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_142ebfab7;
    }
  }
  lVar3 = lVar7;
LAB_142ebfab7:
  FWeakObjectPtr::operator=(param_1 + 0xbc,lVar3);
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xbb);
  lVar3 = lVar7;
  if (cVar2 != '\0') {
    uVar5 = FWeakObjectPtr::Get(param_1 + 0xbb);
    lVar3 = FUN_1422312c0(uVar5);
  }
  FWeakObjectPtr::operator=((longlong)param_1 + 0x60c,lVar3);
  lVar3 = FWeakObjectPtr::Get(param_1 + 0xbb);
  if (lVar3 != 0) {
    uVar5 = FUN_142f30760();
    plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar5);
    if (plVar6 != (longlong *)0x0) {
      lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  FWeakObjectPtr::operator=((longlong)param_1 + 0x614,lVar7);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffff872;
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x61c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0xc0) = 0;
  UNLOCK();
  cVar2 = FUN_14202a080();
  if ((cVar2 != '\0') && ((*(byte *)((longlong)param_1 + 0x624) & 1) != 0)) {
    FUN_14172a070(local_res8,0);
    uVar5 = FWeakObjectPtr::Get(param_1 + 0xbc);
    uVar8 = FWeakObjectPtr::Get(param_1 + 0xbc);
    (**(code **)(*param_1 + 0x538))(param_1,uVar8,uVar5);
    FUN_14172a400(local_res8);
  }
  return;
}



// FUNCTION 142ebfbd0 FUN_142ebfbd0 body=37 status=ok
// SIG undefined FUN_142ebfbd0(void)

ulonglong FUN_142ebfbd0(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  LOCK();
  uVar1 = *(uint *)((longlong)param_1 + 0x61c);
  *(uint *)((longlong)param_1 + 0x61c) = 0;
  uVar2 = (ulonglong)uVar1;
  UNLOCK();
  if (uVar1 != 0) {
    uVar2 = 0;
    LOCK();
    uVar1 = *(uint *)(param_1 + 0xc0);
    if (uVar1 == 0) {
      *(uint *)(param_1 + 0xc0) = 0;
    }
    else {
      uVar2 = (ulonglong)uVar1;
    }
    UNLOCK();
    if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000142ebfbed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_1 + 0x580))();
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 142ebfc00 FUN_142ebfc00 body=357 status=ok
// SIG undefined FUN_142ebfc00(void)

void FUN_142ebfc00(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  FUN_142f06340(param_1,param_1 + 0x298);
  FUN_142f06340(param_1,param_1 + 0x2a0);
  FUN_142f06340(param_1,param_1 + 0x2a8);
  FUN_142f06340(param_1,param_1 + 0x2b0);
  FUN_142f06340(param_1,param_1 + 0x2b8);
  plVar1 = *(longlong **)(param_1 + 0x248);
  *(undefined4 *)(param_1 + 0x2c0) = 2;
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
  *(undefined8 *)(param_1 + 0x248) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x1d0,0);
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x1b0,0);
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x1e0,0);
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  if ((*(int *)(param_1 + 400) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x188), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x188) != 0) {
      uVar4 = FMemory::Realloc(*(longlong *)(param_1 + 0x188),0,0);
      *(undefined8 *)(param_1 + 0x188) = uVar4;
    }
    *(undefined4 *)(param_1 + 400) = 0;
  }
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 142ebfd70 FUN_142ebfd70 body=553 status=ok
// SIG undefined FUN_142ebfd70(void)

void FUN_142ebfd70(longlong param_1)

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
  plVar1 = *(longlong **)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x170) = 0;
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
  plVar1 = *(longlong **)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x178) = 0;
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
  plVar1 = *(longlong **)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x180) = 0;
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
  plVar1 = *(longlong **)(param_1 + 400);
  *(undefined8 *)(param_1 + 0x188) = 0;
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
  plVar1 = *(longlong **)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 400) = 0;
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
  *(undefined8 *)(param_1 + 0x198) = 0;
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 142ebffa0 FUN_142ebffa0 body=648 status=ok
// SIG undefined FUN_142ebffa0(void)

void FUN_142ebffa0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_18;
  longlong *local_10;
  
  FUN_142f06340(param_1,param_1 + 0x338);
  FUN_142f06340(param_1,param_1 + 0x340);
  FUN_142f06340(param_1,param_1 + 0x348);
  FUN_142f06340(param_1,param_1 + 0x350);
  if ((*(int *)(param_1 + 0x370) != 0) &&
     (plVar4 = *(longlong **)(param_1 + 0x368), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    if (*(longlong *)(param_1 + 0x368) != 0) {
      uVar6 = FMemory::Realloc(*(longlong *)(param_1 + 0x368),0,0);
      *(undefined8 *)(param_1 + 0x368) = uVar6;
    }
    *(undefined4 *)(param_1 + 0x370) = 0;
  }
  if ((*(int *)(param_1 + 0x380) != 0) &&
     (plVar4 = *(longlong **)(param_1 + 0x378), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    if (*(longlong *)(param_1 + 0x378) != 0) {
      uVar6 = FMemory::Realloc(*(longlong *)(param_1 + 0x378),0,0);
      *(undefined8 *)(param_1 + 0x378) = uVar6;
    }
    *(undefined4 *)(param_1 + 0x380) = 0;
  }
  if ((*(int *)(param_1 + 0x390) != 0) &&
     (plVar4 = *(longlong **)(param_1 + 0x388), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    if (*(longlong *)(param_1 + 0x388) != 0) {
      uVar6 = FMemory::Realloc(*(longlong *)(param_1 + 0x388),0,0);
      *(undefined8 *)(param_1 + 0x388) = uVar6;
    }
    *(undefined4 *)(param_1 + 0x390) = 0;
  }
  if ((*(int *)(param_1 + 0x3b0) != 0) &&
     (plVar4 = *(longlong **)(param_1 + 0x3a8), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    if (*(longlong *)(param_1 + 0x3a8) != 0) {
      uVar6 = FMemory::Realloc(*(longlong *)(param_1 + 0x3a8),0,0);
      *(undefined8 *)(param_1 + 0x3a8) = uVar6;
    }
    *(undefined4 *)(param_1 + 0x3b0) = 0;
  }
  if ((*(int *)(param_1 + 0x3a0) != 0) &&
     (plVar4 = *(longlong **)(param_1 + 0x398), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    if (*(longlong *)(param_1 + 0x398) != 0) {
      uVar6 = FMemory::Realloc(*(longlong *)(param_1 + 0x398),0,0);
      *(undefined8 *)(param_1 + 0x398) = uVar6;
    }
    *(undefined4 *)(param_1 + 0x3a0) = 0;
  }
  if ((*(int *)(param_1 + 0x3d0) != 0) &&
     (plVar4 = *(longlong **)(param_1 + 0x3c8), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    if (*(longlong *)(param_1 + 0x3c8) != 0) {
      uVar6 = FMemory::Realloc(*(longlong *)(param_1 + 0x3c8),0,0);
      *(undefined8 *)(param_1 + 0x3c8) = uVar6;
    }
    *(undefined4 *)(param_1 + 0x3d0) = 0;
  }
  if ((*(int *)(param_1 + 0x3c0) != 0) &&
     (plVar4 = *(longlong **)(param_1 + 0x3b8), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    if (*(longlong *)(param_1 + 0x3b8) != 0) {
      uVar6 = FMemory::Realloc(*(longlong *)(param_1 + 0x3b8),0,0);
      *(undefined8 *)(param_1 + 0x3b8) = uVar6;
    }
    *(undefined4 *)(param_1 + 0x3c0) = 0;
  }
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x358) != &local_18) {
    *(undefined8 *)(param_1 + 0x358) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x360,&local_10);
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
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  FUN_142ec05c0(param_1);
  return;
}



// FUNCTION 142ec0230 FUN_142ec0230 body=218 status=ok
// SIG undefined FUN_142ec0230(void)

void FUN_142ec0230(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    lVar1 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x2f8) + 0x378);
    if (param_1 == lVar1) {
      lVar1 = *(longlong *)(param_1 + 0x2f8);
      FWeakObjectPtr::operator=(lVar1 + 0x378,0);
      *(undefined8 *)(lVar1 + 0x380) = 0;
    }
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar1 = FUN_142eb7f00();
    if (lVar1 != 0) {
      FUN_142f06340(param_1,param_1 + 0x1d0);
    }
  }
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FUN_142f06340(param_1,param_1 + 0x1d8);
    *(undefined8 *)(param_1 + 0x1d8) = 0;
  }
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  if (*(int *)(param_1 + 0x1b4) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x1a8,0);
  }
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(int *)(param_1 + 0x18c) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x180,0);
  }
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 142ec0310 FUN_142ec0310 body=450 status=ok
// SIG undefined FUN_142ec0310(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ec0310(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
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
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = FUN_142eb0ac0;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
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
  local_88 = (longlong *)0x0;
  local_b8[0] = AK::MemoryMgr::StartProfileThreadUsage;
  local_78 = 0;
  lVar3 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_68,local_b8);
  FGenericPlatformMemory::MemswapGreaterThan8(lVar3,param_1 + 0x4f0,0x50);
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
  *(undefined1 *)(param_1 + 0x4c0) = 0;
  *(undefined1 *)(param_1 + 0x5f8) = 0;
  *(undefined1 *)(param_1 + 0x608) = 1;
  FUN_142eb3c10(param_1 + 0x4e0,0);
  return;
}



// FUNCTION 142ec04e0 FUN_142ec04e0 body=209 status=ok
// SIG undefined FUN_142ec04e0(void)

void FUN_142ec04e0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x378);
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
  plVar1 = *(longlong **)(param_1 + 0x380);
  *(undefined8 *)(param_1 + 0x378) = 0;
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
  *(undefined8 *)(param_1 + 0x380) = 0;
  FUN_142ec05c0(param_1);
  return;
}



// FUNCTION 142ec05c0 FUN_142ec05c0 body=580 status=ok
// SIG undefined FUN_142ec05c0(void)

void FUN_142ec05c0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x2d0);
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
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  if ((*(int *)(param_1 + 0x300) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x2f8), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x2f8) != 0) {
      uVar4 = FMemory::Realloc(*(longlong *)(param_1 + 0x2f8),0,0);
      *(undefined8 *)(param_1 + 0x2f8) = uVar4;
    }
    *(undefined4 *)(param_1 + 0x300) = 0;
  }
  FWeakObjectPtr::operator=(param_1 + 0x1b0,0);
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x1d0,0);
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  FUN_142f06340(param_1,param_1 + 0x298);
  FUN_142f06340(param_1,param_1 + 0x2a0);
  FUN_142f06340(param_1,param_1 + 0x2a8);
  FUN_142f06340(param_1,param_1 + 0x2b0);
  FUN_142f06340(param_1,param_1 + 0x2b8);
  plVar1 = *(longlong **)(param_1 + 0x248);
  *(undefined4 *)(param_1 + 0x2c0) = 2;
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
  *(undefined8 *)(param_1 + 0x248) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x1d0,0);
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x1b0,0);
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x1e0,0);
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  if ((*(int *)(param_1 + 400) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x188), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x188) != 0) {
      uVar4 = FMemory::Realloc(*(longlong *)(param_1 + 0x188),0,0);
      *(undefined8 *)(param_1 + 0x188) = uVar4;
    }
    *(undefined4 *)(param_1 + 400) = 0;
  }
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 142ec0810 FUN_142ec0810 body=181 status=ok
// SIG undefined FUN_142ec0810(void)

void FUN_142ec0810(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x318);
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
  *(undefined8 *)(param_1 + 0x318) = 0;
  if ((*(int *)(param_1 + 0x348) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x340), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x340) != 0) {
      uVar4 = FMemory::Realloc(*(longlong *)(param_1 + 0x340),0,0);
      *(undefined8 *)(param_1 + 0x340) = uVar4;
    }
    *(undefined4 *)(param_1 + 0x348) = 0;
  }
  FUN_142ec05c0(param_1);
  return;
}



// FUNCTION 142ec08d0 FUN_142ec08d0 body=386 status=ok
// SIG undefined FUN_142ec08d0(void)

void FUN_142ec08d0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x370) != 0) {
    FUN_142f06340(*(longlong *)(param_1 + 0x370),param_1 + 0x380);
    FUN_142f06340(*(undefined8 *)(param_1 + 0x370),param_1 + 0x388);
  }
  if (*(longlong *)(param_1 + 0x378) != 0) {
    FUN_142f06340(*(longlong *)(param_1 + 0x378),param_1 + 0x390);
  }
  plVar1 = *(longlong **)(param_1 + 0x360);
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
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
  plVar1 = *(longlong **)(param_1 + 0x370);
  *(undefined8 *)(param_1 + 0x360) = 0;
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
  plVar1 = *(longlong **)(param_1 + 0x378);
  *(undefined8 *)(param_1 + 0x370) = 0;
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
  *(undefined8 *)(param_1 + 0x378) = 0;
  FUN_142ec05c0(param_1);
  return;
}



// FUNCTION 142ec0a60 FUN_142ec0a60 body=242 status=ok
// SIG undefined FUN_142ec0a60(void)

void FUN_142ec0a60(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x340);
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
  plVar1 = *(longlong **)(param_1 + 0x348);
  *(undefined8 *)(param_1 + 0x340) = 0;
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
  *(undefined8 *)(param_1 + 0x348) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x328,0);
  *(undefined8 *)(param_1 + 0x330) = 0;
  FUN_142ec05c0(param_1);
  return;
}



// FUNCTION 142ec0b60 FUN_142ec0b60 body=181 status=ok
// SIG undefined FUN_142ec0b60(void)

void FUN_142ec0b60(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar1 = *(longlong **)(param_1 + 800);
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
  *(undefined8 *)(param_1 + 800) = 0;
  if ((*(int *)(param_1 + 0x330) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x328), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x328) != 0) {
      uVar4 = FMemory::Realloc(*(longlong *)(param_1 + 0x328),0,0);
      *(undefined8 *)(param_1 + 0x328) = uVar4;
    }
    *(undefined4 *)(param_1 + 0x330) = 0;
  }
  FUN_142ec05c0(param_1);
  return;
}



// FUNCTION 142ec0c20 FUN_142ec0c20 body=298 status=ok
// SIG undefined FUN_142ec0c20(void)

void FUN_142ec0c20(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 400);
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
  plVar1 = *(longlong **)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 400) = 0;
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
  plVar1 = *(longlong **)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x180) = 0;
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
  *(undefined8 *)(param_1 + 0x188) = 0;
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 142ec0d50 FUN_142ec0d50 body=60 status=ok
// SIG undefined FUN_142ec0d50(void)

void FUN_142ec0d50(longlong param_1)

{
  FUN_142f06340(param_1,param_1 + 0x1e8);
  FUN_142f06340(param_1,param_1 + 0x1e0);
  *(undefined8 *)(param_1 + 0x198) = 0;
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 142ec0d90 FUN_142ec0d90 body=167 status=ok
// SIG undefined FUN_142ec0d90(void)

void FUN_142ec0d90(longlong param_1)

{
  longlong lVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  
  (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x4b8))((longlong *)(param_1 + -0x4d8),&local_res8)
  ;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0xe0) + 0x38) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x50) = 0;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0xd8) + 0x28) = 0;
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0xb4) = local_res8;
  *(undefined4 *)(param_1 + 0xb8) = local_resc;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0xc4) = local_res8;
  *(undefined4 *)(param_1 + 200) = local_resc;
  return;
}



// FUNCTION 142ec0e40 FUN_142ec0e40 body=765 status=ok
// SIG undefined FUN_142ec0e40(void)

void FUN_142ec0e40(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  bool bVar13;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *local_30;
  
  if (param_2 == 0) {
    return;
  }
  uVar12 = 0;
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  LOCK();
  iVar7 = (int)plVar3[1];
  bVar13 = iVar7 == 0;
  if (bVar13) {
    *(int *)(plVar3 + 1) = 0;
    iVar7 = 0;
  }
  UNLOCK();
  if (bVar13) {
    return;
  }
  while( true ) {
    LOCK();
    bVar13 = iVar7 == (int)plVar3[1];
    if (bVar13) {
      *(int *)(plVar3 + 1) = iVar7 + 1;
    }
    UNLOCK();
    if (bVar13) break;
    LOCK();
    iVar7 = (int)plVar3[1];
    bVar13 = iVar7 == 0;
    if (bVar13) {
      *(int *)(plVar3 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (bVar13) {
      return;
    }
  }
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x28) == 0) ||
     (lVar8 = FWeakObjectPtr::Get(param_1 + 0x38), lVar8 == 0)) goto LAB_142ec10fa;
  uVar9 = FUN_142f16320();
  plVar10 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar9);
  if (plVar10 == (longlong *)0x0) goto LAB_142ec10fa;
  if ((*(longlong *)(param_2 + 0x28) == 0) || (*(longlong *)(param_2 + 0x30) == 0)) {
LAB_142ec0fa0:
    puVar11 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar13 = true;
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
    if (iVar7 < 1) goto LAB_142ec0fa0;
    local_50 = *(longlong **)(param_2 + 0x30);
    local_58 = 0;
    if (local_50 == (longlong *)0x0) {
LAB_142ec0f8e:
      puVar11 = &local_58;
      bVar5 = true;
      bVar13 = false;
      uVar12 = local_58;
    }
    else {
      LOCK();
      iVar7 = (int)local_50[1];
      bVar13 = iVar7 == 0;
      if (bVar13) {
        *(int *)(local_50 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
      while (!bVar13) {
        LOCK();
        bVar13 = iVar7 == (int)local_50[1];
        if (bVar13) {
          *(int *)(local_50 + 1) = iVar7 + 1;
        }
        UNLOCK();
        if (bVar13) {
          if (local_50 != (longlong *)0x0) {
            local_58 = *(undefined8 *)(param_2 + 0x28);
          }
          goto LAB_142ec0f8e;
        }
        LOCK();
        iVar7 = (int)local_50[1];
        bVar13 = iVar7 == 0;
        if (bVar13) {
          *(int *)(local_50 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
      }
      local_50 = (longlong *)0x0;
      puVar11 = &local_58;
      bVar5 = true;
      bVar13 = false;
      uVar12 = 0;
    }
  }
  plVar4 = (longlong *)puVar11[1];
  puVar11[1] = 0;
  *puVar11 = 0;
  plVar6 = plStack_40;
  if ((bVar13) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_40 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar6 = local_50;
  if ((bVar5) && (local_50 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_50 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if (*(char *)(param_1 + 0x80) != '\0') {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_38 = uVar12;
    local_30 = plVar4;
    (**(code **)(*plVar10 + 0x18))(plVar10,&local_38);
  }
  *(undefined8 *)(param_1 + 0x40) = uVar12;
  plVar10 = *(longlong **)(param_1 + 0x48);
  if (plVar4 != plVar10) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar10 = *(longlong **)(param_1 + 0x48);
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
    *(longlong **)(param_1 + 0x48) = plVar4;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar4 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
LAB_142ec10fa:
  LOCK();
  plVar10 = plVar3 + 1;
  lVar8 = *plVar10;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)lVar8 == 1) {
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
  return;
}



// FUNCTION 142ec1140 FUN_142ec1140 body=762 status=ok
// SIG undefined FUN_142ec1140(void)

void FUN_142ec1140(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38 [2];
  
  if (param_2 == 0) {
    return;
  }
  uVar11 = 0;
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  LOCK();
  iVar7 = (int)plVar3[1];
  bVar12 = iVar7 == 0;
  if (bVar12) {
    *(int *)(plVar3 + 1) = 0;
    iVar7 = 0;
  }
  UNLOCK();
  if (bVar12) {
    return;
  }
  while( true ) {
    LOCK();
    bVar12 = iVar7 == (int)plVar3[1];
    if (bVar12) {
      *(int *)(plVar3 + 1) = iVar7 + 1;
    }
    UNLOCK();
    if (bVar12) break;
    LOCK();
    iVar7 = (int)plVar3[1];
    bVar12 = iVar7 == 0;
    if (bVar12) {
      *(int *)(plVar3 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (bVar12) {
      return;
    }
  }
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x28) == 0) ||
     (lVar8 = FWeakObjectPtr::Get(param_1 + 0x38), lVar8 == 0)) goto LAB_142ec13f7;
  FUN_142f16320();
  plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress();
  if (plVar9 == (longlong *)0x0) goto LAB_142ec13f7;
  if ((*(longlong *)(param_2 + 0x28) == 0) || (*(longlong *)(param_2 + 0x30) == 0)) {
LAB_142ec12a0:
    puVar10 = &local_58;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    bVar5 = false;
    bVar12 = true;
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
    if (iVar7 < 1) goto LAB_142ec12a0;
    local_60 = *(longlong **)(param_2 + 0x30);
    local_68 = 0;
    if (local_60 == (longlong *)0x0) {
LAB_142ec128e:
      puVar10 = &local_68;
      bVar5 = true;
      bVar12 = false;
      uVar11 = local_68;
    }
    else {
      LOCK();
      iVar7 = (int)local_60[1];
      bVar12 = iVar7 == 0;
      if (bVar12) {
        *(int *)(local_60 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
      while (!bVar12) {
        LOCK();
        bVar12 = iVar7 == (int)local_60[1];
        if (bVar12) {
          *(int *)(local_60 + 1) = iVar7 + 1;
        }
        UNLOCK();
        if (bVar12) {
          if (local_60 != (longlong *)0x0) {
            local_68 = *(undefined8 *)(param_2 + 0x28);
          }
          goto LAB_142ec128e;
        }
        LOCK();
        iVar7 = (int)local_60[1];
        bVar12 = iVar7 == 0;
        if (bVar12) {
          *(int *)(local_60 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
      }
      local_60 = (longlong *)0x0;
      puVar10 = &local_68;
      bVar5 = true;
      bVar12 = false;
      uVar11 = 0;
    }
  }
  plVar4 = (longlong *)puVar10[1];
  puVar10[1] = 0;
  *puVar10 = 0;
  plVar6 = plStack_50;
  if ((bVar12) && (plStack_50 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_50 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_50 + 8))();
      }
    }
  }
  plVar6 = local_60;
  if ((bVar5) && (local_60 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_60 + 8))();
      }
    }
  }
  if (*(char *)(param_1 + 0x80) != '\0') {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_48 = uVar11;
    local_40 = plVar4;
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if ((undefined8 *)(param_1 + 0x40) != local_38) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    plVar9 = *(longlong **)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (plVar9 != (longlong *)0x0) {
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar4 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
LAB_142ec13f7:
  LOCK();
  plVar9 = plVar3 + 1;
  lVar8 = *plVar9;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)lVar8 == 1) {
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
  return;
}



// FUNCTION 142ec1440 FUN_142ec1440 body=147 status=ok
// SIG undefined FUN_142ec1440(void)

void FUN_142ec1440(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x1a1) != '\0') {
    if (*(char *)(param_1 + 0x1a0) == '\0') {
      FUN_142eb4520();
    }
    else {
      FUN_142eb15b0();
    }
    if (((*(longlong *)(param_1 + 0x1e8) != 0) &&
        (lVar1 = FWeakObjectPtr::Get(param_1 + 0x1e0), lVar1 != 0)) &&
       (lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 0x1e8)), lVar1 != 0)) {
      plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x1e0);
      uVar3 = FUN_14178ac60(plVar2,*(undefined8 *)(param_1 + 0x1e8));
      (**(code **)(*plVar2 + 0x208))(plVar2,uVar3,0);
    }
  }
  return;
}



// FUNCTION 142ec14e0 FUN_142ec14e0 body=282 status=ok
// SIG undefined FUN_142ec14e0(void)

void FUN_142ec14e0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [16];
  
  if (*(longlong *)(param_1 + 0x318) != 0) {
    cVar2 = (**(code **)(*(longlong *)(param_1 + 0x170) + 0x40))();
    if (cVar2 != '\0') {
      cVar2 = *(char *)(*(longlong *)(param_1 + 0x318) + 0x1a0);
      cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x240);
      if (cVar2 != '\0') {
        if (cVar3 != '\0') {
          uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x318) + 0x198);
          lVar4 = FWeakObjectPtr::Get(param_1 + 0x240);
          puVar5 = (undefined8 *)
                   TScriptInterface<IBlendableInterface>::
                   TScriptInterface<IBlendableInterface><UMaterialInterface>(local_18,uVar1);
          if (*(longlong *)(lVar4 + 0x5a8) != 0) {
            FUN_142f0d400(*(longlong *)(lVar4 + 0x5a8),*puVar5,0);
          }
        }
        FUN_142ed43c0(*(undefined8 *)(param_1 + 0x318),*(undefined4 *)(param_1 + 800));
        *(undefined1 *)(param_1 + 0x198) = 0;
        return;
      }
      if (cVar3 != '\0') {
        lVar4 = FWeakObjectPtr::Get(param_1 + 0x240);
        puVar5 = (undefined8 *)
                 TScriptInterface<IBlendableInterface>::
                 TScriptInterface<IBlendableInterface><UMaterialInterface>
                           (local_18,*(undefined8 *)(param_1 + 0x2c8));
        if (*(longlong *)(lVar4 + 0x5a8) != 0) {
          FUN_142f0d400(*(longlong *)(lVar4 + 0x5a8),*puVar5,0);
        }
      }
      *(undefined1 *)(param_1 + 0x198) = *(undefined1 *)(param_1 + 0x324);
    }
  }
  return;
}



// FUNCTION 142ec1600 FUN_142ec1600 body=205 status=ok
// SIG undefined FUN_142ec1600(void)

void FUN_142ec1600(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 local_res8;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x248) != 0)) {
    FUN_142eee450(*(longlong *)(param_2 + 0x248),local_28);
    plVar3 = *(longlong **)(param_1 + 0x170);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x2b0))(plVar3,local_28,1,0);
    }
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
  FUN_142eb15b0(param_1);
  if (*(longlong **)(param_1 + 0x198) != (longlong *)0x0) {
    local_res8 = (**(code **)(**(longlong **)(param_1 + 0x198) + 0x2b0))();
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x1d0,&local_res8);
  }
  return;
}



// FUNCTION 142ec16d0 FUN_142ec16d0 body=160 status=ok
// SIG undefined FUN_142ec16d0(void)

void FUN_142ec16d0(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if ((*(char *)(param_1 + 0x310) != '\0') && (*(char *)(param_1 + 0x400) != '\0')) {
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
    local_58[0] = &LAB_142eb0c80;
    FUN_14204c280(local_58);
  }
  return;
}



// FUNCTION 142ec1770 FUN_142ec1770 body=275 status=ok
// SIG undefined FUN_142ec1770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ec1770(longlong param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_94;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  param_1 = param_1 + -0x170;
  FWeakObjectPtr::operator=(&local_98,param_1);
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_78);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144631668;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_98;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_94;
    *(undefined1 *)(puVar1 + 3) = param_2;
    *(undefined1 *)((longlong)puVar1 + 0x19) = param_3;
    *(undefined1 *)((longlong)puVar1 + 0x1a) = param_4;
  }
  local_88[0] = &LAB_142eb0d90;
  FUN_14208c300(param_1,local_88);
  if (local_48 != 0) {
    plVar2 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar2 = local_58;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ec1890 FUN_142ec1890 body=124 status=ok
// SIG undefined FUN_142ec1890(void)

void FUN_142ec1890(longlong param_1,char param_2,char param_3,undefined1 param_4)

{
  bool bVar1;
  
  if (((byte)(param_3 - 5U) < 3) && (2 < (byte)(param_2 - 5U))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((*(char *)(param_1 + 0x290) != '\0') && (bVar1)) {
    FUN_142eda580(param_1 + -0x170);
  }
  FUN_142ec19b0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 142ec1910 FUN_142ec1910 body=160 status=ok
// SIG undefined FUN_142ec1910(void)

void FUN_142ec1910(longlong param_1,char param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_1 + 0x9a);
  if (param_2 != '\x05') {
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0x100);
    if (1 < (byte)(cVar1 - 1U)) {
      return;
    }
    uVar3 = 0;
    iVar2 = -1;
LAB_142ec199e:
                    /* WARNING: Could not recover jumptable at 0x000142ec19a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + -0x170) + 0x2b8))
              ((longlong *)(param_1 + -0x170),iVar2,uVar3);
    return;
  }
  if (cVar1 == '\x01') {
    if (param_4 != '\0') {
      return;
    }
    if (*(int *)(param_1 + 0x110) < 1) {
      return;
    }
  }
  else {
    if (cVar1 != '\x02') {
      return;
    }
    if (param_4 != '\0') {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x104);
    if ((iVar2 != -1) || (*(int *)(param_1 + 0x110) < 1)) {
      uVar3 = 1;
      goto LAB_142ec199e;
    }
    *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x000142ec1978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + -0x170) + 0x2c8))((longlong *)(param_1 + -0x170),1);
  return;
}



// FUNCTION 142ec19b0 FUN_142ec19b0 body=478 status=ok
// SIG undefined FUN_142ec19b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ec19b0(longlong param_1,char param_2,undefined1 param_3,undefined1 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x184) == '\0') {
    lVar1 = param_1 + -0x170;
    FWeakObjectPtr::operator=(&local_a8,lVar1);
    local_68 = (longlong *)0x0;
    local_58 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_88);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_144631668;
      puVar3[1] = lVar1;
      *(undefined4 *)(puVar3 + 2) = local_a8;
      *(undefined4 *)((longlong)puVar3 + 0x14) = local_a4;
      *(char *)(puVar3 + 3) = param_2;
      *(undefined1 *)((longlong)puVar3 + 0x19) = param_3;
      *(undefined1 *)((longlong)puVar3 + 0x1a) = param_4;
    }
    local_98[0] = &LAB_142eb0d90;
    FUN_14208c300(lVar1,local_98);
    if (local_58 != 0) {
      plVar5 = local_88;
      if (local_68 != (longlong *)0x0) {
        plVar5 = local_68;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (((((byte)(param_2 - 5U) < 3) && (*(longlong *)(param_1 + 0x158) != 0)) &&
        (cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xd0), cVar2 != '\0')) &&
       (*(char *)(*(longlong *)(param_1 + 0x158) + 0x269) != '\0')) {
      *(undefined1 *)(param_1 + 0x184) = 1;
      lVar4 = FWeakObjectPtr::Get(param_1 + 0xd0);
      puVar3 = (undefined8 *)
               TScriptInterface<IBlendableInterface>::
               TScriptInterface<IBlendableInterface><UMaterialInterface>
                         (&local_a8,*(undefined8 *)(param_1 + 0x158));
      if (*(longlong *)(lVar4 + 0x5a8) != 0) {
        FUN_142f0d400(*(longlong *)(lVar4 + 0x5a8),*puVar3,param_4);
      }
      (**(code **)(**(longlong **)(param_1 + 0x158) + 0x2b8))
                (*(longlong **)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x168),0,0);
      FUN_142ecf920(lVar1,0);
      *(undefined1 *)(param_1 + 0x184) = 0;
    }
  }
  return;
}



// FUNCTION 142ec1b90 FUN_142ec1b90 body=31 status=ok
// SIG undefined FUN_142ec1b90(void)

void FUN_142ec1b90(longlong param_1)

{
  FUN_142ec19b0();
  FUN_142ecf550(param_1 + -0x170);
  return;
}



// FUNCTION 142ec1bb0 FUN_142ec1bb0 body=88 status=ok
// SIG undefined FUN_142ec1bb0(void)

void FUN_142ec1bb0(longlong param_1,byte param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  FUN_142ec19b0();
  plVar1 = *(longlong **)(param_1 + 0x1b0);
  if ((plVar1 != (longlong *)0x0) && (param_2 < 8)) {
    switch(param_2) {
    case 0:
    case 1:
    case 2:
      uVar2 = CONCAT71((int7)((ulonglong)
                              (IMAGE_DOS_HEADER_140000000.e_magic +
                              (&switchD_142ec1bec::switchdataD_142ec1c08)[param_2]) >> 8),1);
      break;
    default:
      uVar2 = 0;
    }
    (**(code **)(*plVar1 + 800))(plVar1,uVar2);
  }
  return;
}



// FUNCTION 142ec1c30 FUN_142ec1c30 body=849 status=ok
// SIG undefined FUN_142ec1c30(void)

void FUN_142ec1c30(longlong *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  char *pcVar8;
  float fVar9;
  float fVar10;
  float local_res8;
  undefined4 uStackX_c;
  undefined4 uStackX_14;
  undefined1 local_res18 [16];
  longlong *local_58;
  undefined8 local_50;
  
  FUN_142ecf740();
  if (((int)param_1[0xa8] == 0) && (*(int *)((longlong)param_1 + 0x544) == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  pcVar8 = (char *)0x0;
  if (!bVar2) {
    local_58 = (longlong *)0x0;
    local_50 = 0;
    (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0xa8],&local_58);
  }
  FWeakObjectPtr::operator=(&local_res8,param_1);
  fVar9 = local_res8;
  uStackX_14 = uStackX_c;
  local_58 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x20);
  local_50 = CONCAT44(local_50._4_4_,2);
  local_58 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_14598ae08;
    *(float *)(plVar4 + 1) = fVar9;
    *(undefined4 *)((longlong)plVar4 + 0xc) = uStackX_14;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[3] = lVar5;
  }
  uVar6 = FUN_14164ab60();
  FUN_14158f860(uVar6,local_res18,&local_58,L"UGbxGFxMenu::OnGFxMenuIsInitedAndStartedBegin",
                0x3dcccccd);
  if ((int)local_50 == 0) {
LAB_142ec1d47:
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
  }
  else if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x28))(local_58,0);
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
    }
    local_50 = local_50 & 0xffffffff00000000;
    goto LAB_142ec1d47;
  }
  FUN_142eb21e0(param_1);
  lVar5 = param_1[0x9d];
  if (lVar5 == 0) goto LAB_142ec1e87;
  lVar7 = FUN_142f1bdf0();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((!bVar2) || (pcVar8 = (char *)(lVar5 + 0xc0), pcVar8 == (char *)0x0)) || (param_1[0x57] == 0)
     ) goto LAB_142ec1e87;
  cVar1 = *pcVar8;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  if (cVar1 == '\0') {
LAB_142ec1dd9:
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,7);
    iVar3 = (int)local_50 + 7;
    local_50 = CONCAT44(local_50._4_4_,iVar3);
    if (local_50._4_4_ < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
    }
    *local_58 = 0x740073006f0072;
    *(undefined4 *)(local_58 + 1) = 0x720065;
    *(undefined2 *)((longlong)local_58 + 0xc) = 0;
  }
  else if (cVar1 == '\x01') {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,5);
    iVar3 = (int)local_50 + 5;
    local_50 = CONCAT44(local_50._4_4_,iVar3);
    if (local_50._4_4_ < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
    }
    *local_58 = 0x6c00690061006d;
    *(undefined2 *)(local_58 + 1) = 0;
  }
  else if (cVar1 == '\x02') goto LAB_142ec1dd9;
  FUN_142088cf0(param_1[0x57],&local_58);
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_142ec1e87:
  lVar5 = param_1[0xd2];
  if ((lVar5 != 0) && (pcVar8 != (char *)0x0)) {
    if ((char)param_1[0xd5] == '\x01') {
      fVar9 = *(float *)(pcVar8 + 8);
      fVar10 = *(float *)(pcVar8 + 4);
    }
    else {
      fVar9 = local_res8;
      fVar10 = local_res8;
      if ((char)param_1[0xd5] == '\x02') {
        fVar9 = *(float *)(pcVar8 + 0x14) -
                (float)*(int *)(param_1[0xd3] + 0x280) * *(float *)(param_1[0xd3] + 0x2f4);
        fVar10 = *(float *)(pcVar8 + 0x10);
      }
    }
    if (pcVar8[0x24] != '\0') {
      FUN_1420904e0(lVar5,*(undefined8 *)(pcVar8 + 0x1c));
      lVar5 = param_1[0xd2];
    }
    FUN_14208ff10(lVar5,fVar10,fVar9);
    local_58 = (longlong *)0x0;
    local_50 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"show",10);
    FUN_142088910(param_1[0xd2],&local_58);
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142ec1f90 FUN_142ec1f90 body=291 status=ok
// SIG undefined FUN_142ec1f90(void)

void FUN_142ec1f90(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_res10 [8];
  longlong *local_28;
  ulonglong local_20;
  
  FUN_142ecf740();
  if (((int)param_1[0xa8] != 0) || (*(int *)((longlong)param_1 + 0x544) != 0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0xa8],&local_28);
  }
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_20 = CONCAT44(local_20._4_4_,2);
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_14598ae08;
    *(undefined4 *)(plVar1 + 1) = local_res8;
    *(undefined4 *)((longlong)plVar1 + 0xc) = local_resc;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
  }
  uVar3 = FUN_14164ab60();
  FUN_14158f860(uVar3,local_res10,&local_28,L"UGbxGFxMenu::OnGFxMenuIsInitedAndStartedBegin",
                0x3dcccccd);
  if ((int)local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = local_20 & 0xffffffff00000000;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 142ec20c0 FUN_142ec20c0 body=60 status=ok
// SIG undefined FUN_142ec20c0(void)

void FUN_142ec20c0(longlong *param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  if (((int)param_1[0xa9] != 0) || (*(int *)((longlong)param_1 + 0x54c) != 0)) {
    local_18 = 0;
    local_10 = 0;
    (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0xa9],&local_18);
  }
  return;
}



// FUNCTION 142ec2100 FUN_142ec2100 body=699 status=ok
// SIG undefined FUN_142ec2100(void)

void FUN_142ec2100(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *local_58;
  int local_50;
  undefined8 local_48;
  int iStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    return;
  }
  local_48 = (longlong *)&LAB_142ec9d00;
  iStack_40 = 0;
  local_58 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_50 = 3;
  local_58 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar1 + 1,param_1);
    *(undefined4 *)(plVar1 + 2) = (undefined4)local_48;
    *(undefined4 *)((longlong)plVar1 + 0x14) = local_48._4_4_;
    *(int *)(plVar1 + 3) = iStack_40;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_3c;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[5] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_143fcff08;
  }
  FUN_142ee1c00(*(undefined8 *)(param_1 + 0x2b8),PTR_s_rollOver_14673ca28,param_1 + 0x6b0,&local_58)
  ;
  if (local_50 == 0) {
LAB_142ec21f6:
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
  }
  else if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x28))(local_58,0);
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
    }
    local_50 = 0;
    goto LAB_142ec21f6;
  }
  uStack_30 = 0;
  local_48 = (longlong *)0x0;
  local_38 = (code *)&LAB_142ec9cf0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  iStack_40 = 3;
  local_48 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar1 + 1,param_1);
    *(undefined4 *)(plVar1 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar1 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar1 + 3) = uStack_30;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_2c;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[5] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_143fcff08;
  }
  FUN_142ee1c00(*(undefined8 *)(param_1 + 0x2b8),PTR_s_rollOut_14673ca20,param_1 + 0x6b8,&local_48);
  if (iStack_40 != 0) {
    if (local_48 == (longlong *)0x0) goto LAB_142ec22c0;
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    iStack_40 = 0;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
LAB_142ec22c0:
  lVar2 = FUN_142eb7f00(param_1);
  if (lVar2 != 0) {
    uStack_30 = 0;
    local_48 = (longlong *)0x0;
    local_38 = FUN_142ebf3f0;
    plVar1 = (longlong *)FMemory::Realloc(0,0x30);
    iStack_40 = 3;
    local_48 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar1 + 1,param_1);
      *(undefined4 *)(plVar1 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)plVar1 + 0x14) = local_38._4_4_;
      *(undefined4 *)(plVar1 + 3) = uStack_30;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_2c;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar1[5] = lVar3;
      *plVar1 = (longlong)&PTR_FUN_143fcff08;
    }
    FUN_142ee1c00(lVar2,PTR_s_click_14673c9f0,param_1 + 0x6c0,&local_48);
    if (iStack_40 != 0) {
      if (local_48 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_48 + 0x28))(local_48,0);
      if (local_48 != (longlong *)0x0) {
        local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
      }
      iStack_40 = 0;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  return;
}



// FUNCTION 142ec23c0 FUN_142ec23c0 body=1205 status=ok
// SIG undefined FUN_142ec23c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ec23c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_128 [32];
  longlong *local_108;
  undefined1 local_100;
  undefined4 *local_f8;
  float local_e8;
  float local_e4;
  float local_e0;
  float fStack_dc;
  longlong local_d8 [5];
  float local_b0;
  float local_ac;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    uVar10 = 0;
    if (*(char *)(param_1 + 400) == '\0') {
      uVar5 = 0;
    }
    else {
      local_d8[0] = 0;
      local_d8[1] = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8,0);
      FGenericPlatformString::Memcpy(local_d8[0],L"Left Pressed",0x1a);
      local_108 = local_d8;
      local_f8 = &DAT_1464aa770;
      local_100 = 1;
      AK::MemoryMgr::StartProfileThreadUsage((long)DAT_146b17150);
      if (local_d8[0] != 0) {
        FMemory::Free();
      }
      uVar6 = FUN_142eed9a0(param_1);
      uVar5 = FUN_142ef58f0(*(undefined8 *)(param_1 + 0x198),&DAT_1469e9868,uVar6);
      *(undefined1 *)(param_1 + 400) = uVar5;
      uVar5 = 1;
    }
    *(undefined1 *)(param_1 + 0x191) = uVar5;
    if (*(char *)(param_1 + 0x192) != '\0') {
      local_d8[2] = 0;
      local_d8[3] = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d8 + 2,0);
      FGenericPlatformString::Memcpy(local_d8[2],L"Right Pressed",0x1c);
      local_108 = local_d8 + 2;
      local_f8 = &DAT_1464aa770;
      local_100 = 1;
      AK::MemoryMgr::StartProfileThreadUsage((long)DAT_146b17150);
      if (local_d8[2] != 0) {
        FMemory::Free();
      }
      uVar6 = FUN_142eed9a0(param_1);
      uVar5 = FUN_142ef58f0(*(undefined8 *)(param_1 + 0x198),&DAT_1469e9880,uVar6);
      *(undefined1 *)(param_1 + 0x192) = uVar5;
    }
    local_e8 = 1.0;
    local_e4 = 1.0;
    FGeometry::FGeometry(&local_b0);
    if ((DAT_146b17150 != 0) && (*(longlong *)(DAT_146b17150 + 0x7b0) != 0)) {
      FUN_142481d50(*(longlong *)(DAT_146b17150 + 0x7b0),&local_e8);
      lVar9 = *(longlong *)(DAT_146b17150 + 0x7b0);
      plVar3 = *(longlong **)(lVar9 + 0xe8);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        iVar7 = (int)plVar3[1];
        bVar11 = iVar7 == 0;
        if (bVar11) {
          *(int *)(plVar3 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        while (!bVar11) {
          LOCK();
          bVar11 = iVar7 == (int)plVar3[1];
          if (bVar11) {
            *(int *)(plVar3 + 1) = iVar7 + 1;
          }
          UNLOCK();
          if (bVar11) {
            if (plVar3 != (longlong *)0x0) {
              puVar4 = *(undefined8 **)(lVar9 + 0xe0);
              if (puVar4 != (undefined8 *)0x0) {
                uVar8 = (**(code **)*puVar4)();
                FGeometry::operator=(&local_b0,uVar8);
              }
              LOCK();
              plVar1 = plVar3 + 1;
              lVar9 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar7 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            break;
          }
          LOCK();
          iVar7 = (int)plVar3[1];
          bVar11 = iVar7 == 0;
          if (bVar11) {
            *(int *)(plVar3 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
        }
      }
    }
    (**(code **)(*DAT_1469f4590 + 0x48))(DAT_1469f4590,&local_e0);
    lVar9 = *(longlong *)(param_1 + 0x1a8);
    fVar14 = 1.0 / (local_94 * local_88 - local_90 * local_8c);
    fVar13 = fStack_dc - *(float *)(param_1 + 0x184);
    fVar12 = local_e0 - *(float *)(param_1 + 0x180);
    *(float *)(param_1 + 0x174) = fVar13;
    *(float *)(param_1 + 0x170) = fVar12;
    *(float *)(param_1 + 0x17c) = fVar13 / local_e4;
    *(float *)(param_1 + 0x178) = fVar12 / local_e8;
    if (((*(byte *)(lVar9 + 0x6a8) & 1) == 0) &&
       (((*(char *)(param_1 + 400) != '\0' && (*(char *)(param_1 + 0x193) != '\0')) ||
        ((*(char *)(param_1 + 0x192) != '\0' && (*(char *)(param_1 + 0x194) != '\0')))))) {
      FSlateApplication::SetCursorPos((int)DAT_1469f4590,(int)param_1 + 0x180);
      lVar9 = *(longlong *)(param_1 + 0x1a8);
    }
    else {
      *(ulonglong *)(param_1 + 0x180) = CONCAT44(fStack_dc,local_e0);
      *(float *)(param_1 + 0x188) =
           ((-(local_8c * fVar14) * fStack_dc + local_88 * fVar14 * local_e0 +
            -local_80 * -(local_8c * fVar14) + -local_84 * local_88 * fVar14) * local_e8) / local_b0
      ;
      *(float *)(param_1 + 0x18c) =
           ((local_94 * fVar14 * fStack_dc + -(local_90 * fVar14) * local_e0 +
            -local_80 * local_94 * fVar14 + -local_84 * -(local_90 * fVar14)) * local_e4) / local_ac
      ;
    }
    if (lVar9 != 0) {
      if (((*(char *)(param_1 + 0x195) == '\0') || (*(char *)(param_1 + 400) == '\0')) &&
         ((*(char *)(param_1 + 0x196) == '\0' || (*(char *)(param_1 + 0x192) == '\0')))) {
        uVar10 = 1;
      }
      *(uint *)(lVar9 + 0x6a8) = *(uint *)(lVar9 + 0x6a8) & 0xfffffffe;
      *(uint *)(lVar9 + 0x6a8) = *(uint *)(lVar9 + 0x6a8) | uVar10;
    }
  }
  return;
}



// FUNCTION 142ec2880 FUN_142ec2880 body=230 status=ok
// SIG undefined FUN_142ec2880(void)

void FUN_142ec2880(longlong *param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if ((*(char *)((longlong)param_1 + 0x1c9) != '\0') &&
     (cVar2 = (**(code **)(param_1[0x2e] + 0x48))(), cVar2 != '\0')) {
    iVar1 = (int)param_1[0x4e];
    if ((-1 < iVar1) &&
       (((iVar1 < (int)param_1[0x50] &&
         (lVar4 = *(longlong *)((longlong)iVar1 * 0x20 + 0x18 + param_1[0x4f]), lVar4 != 0)) &&
        (cVar2 = FWeakObjectPtr::IsValid(lVar4 + 0x240), cVar2 != '\0')))) {
      uVar3 = FWeakObjectPtr::Get(lVar4 + 0x240);
      cVar2 = FUN_142eb62a0(uVar3);
      if (cVar2 == '\x02') {
        FUN_142ed3610(lVar4 + 0x170,0);
        lVar4 = FWeakObjectPtr::Get(lVar4 + 0x240);
        if (*(longlong *)(lVar4 + 0x5a8) != 0) {
          FUN_142f0d400(*(longlong *)(lVar4 + 0x5a8),0,0);
        }
        (**(code **)(*param_1 + 0x2b8))(param_1,0xffffffff,0);
      }
    }
  }
  return;
}



// FUNCTION 142ec2970 FUN_142ec2970 body=429 status=ok
// SIG undefined FUN_142ec2970(void)

void FUN_142ec2970(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_18 [2];
  
  local_18[1] = 0xe;
  local_18[0] = 0;
  if (*(char *)(param_1 + -0x13e) == '\x01') {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"HintBarItemMC",0x1c);
    uVar2 = AGameModeTitleScene::GetPrivateStaticClass();
    lVar3 = FUN_142ebd220(param_1 + -800,0,local_18,uVar2);
    if (lVar3 != 0) {
      lVar4 = AGameModeTitleScene::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
LAB_142ec2a8d:
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
LAB_142ec2a8f:
      if (bVar1) goto LAB_142ec2a96;
    }
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"HintBarItemMC",0x1c);
    uVar2 = AGameModeTitleScene::GetPrivateStaticClass();
    lVar3 = FUN_142ebcee0(param_1 + -800,local_18,uVar2,0);
    if (lVar3 != 0) {
      lVar4 = AGameModeTitleScene::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) goto LAB_142ec2a8d;
      bVar1 = true;
      goto LAB_142ec2a8f;
    }
  }
  lVar3 = 0;
LAB_142ec2a96:
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (lVar3 != 0) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x10);
    uVar5 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(*(longlong *)(lVar3 + 0x308) + 0x10))(lVar3 + 0x308,uVar5,uVar2);
    (**(code **)(*(longlong *)(lVar3 + 0x308) + 0x20))(lVar3 + 0x308,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x000142ec2b16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + -800) + 0x338))(param_1 + -800);
  return;
}



// FUNCTION 142ec2b30 FUN_142ec2b30 body=318 status=ok
// SIG undefined FUN_142ec2b30(void)

void FUN_142ec2b30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  FWeakObjectPtr::operator=(param_1 + 8);
  FWeakObjectPtr::operator=(param_1 + 0x10,param_3);
  lVar4 = *(longlong *)(param_1 + -0xa8);
  lVar5 = (longlong)*(int *)(param_1 + -0xa0) * 0x20 + lVar4;
  for (; lVar4 != lVar5; lVar4 = lVar4 + 0x20) {
    lVar1 = *(longlong *)(lVar4 + 0x18);
    if (lVar1 != 0) {
      lVar3 = AGameModeTitleScene::GetPrivateStaticClass();
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
        (**(code **)(*(longlong *)(lVar1 + 0x308) + 0x10))
                  ((longlong *)(lVar1 + 0x308),param_2,param_3);
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + -0x98);
  lVar5 = (longlong)*(int *)(param_1 + -0x90) * 0x20 + lVar4;
  for (; lVar4 != lVar5; lVar4 = lVar4 + 0x20) {
    lVar1 = *(longlong *)(lVar4 + 0x18);
    if (lVar1 != 0) {
      lVar3 = AGameModeTitleScene::GetPrivateStaticClass();
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
        (**(code **)(*(longlong *)(lVar1 + 0x308) + 0x10))
                  ((longlong *)(lVar1 + 0x308),param_2,param_3);
      }
    }
  }
  return;
}



// FUNCTION 142ec2c90 FUN_142ec2c90 body=47 status=ok
// SIG undefined FUN_142ec2c90(void)

void FUN_142ec2c90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FWeakObjectPtr::operator=(param_1 + 8);
  FWeakObjectPtr::operator=(param_1 + 0x10,param_3);
  return;
}



// FUNCTION 142ec2cc0 FUN_142ec2cc0 body=2303 status=ok
// SIG undefined FUN_142ec2cc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ec2cc0(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  char cVar4;
  void *_Src;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined1 uVar8;
  int iVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  char *pcVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_298 [32];
  float local_278;
  undefined4 local_270;
  char local_268;
  wchar_t *local_260;
  undefined8 local_258;
  undefined4 local_250;
  ulonglong local_248;
  longlong local_240;
  undefined8 local_238;
  longlong local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 *local_218;
  ulonglong *puStack_210;
  longlong local_208;
  longlong local_200;
  undefined8 *local_1f8;
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined4 *local_1c8;
  ulonglong *puStack_1c0;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_190 [8];
  longlong *local_188;
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_160 [24];
  undefined1 *local_148 [2];
  undefined1 local_138 [32];
  undefined8 local_118;
  undefined4 local_108;
  undefined1 local_f8 [24];
  undefined1 local_e0 [24];
  undefined4 local_c8 [4];
  undefined1 local_b8 [24];
  undefined1 local_a0;
  undefined4 local_98;
  undefined1 local_88 [24];
  undefined1 local_70;
  ulonglong local_68 [5];
  char acStack_40 [8];
  
  local_68[0] = DAT_1468387a8 ^ (ulonglong)auStack_298;
  plVar1 = (longlong *)(param_1 + 0x18);
  local_268 = param_3;
  if (plVar1 != param_2) {
    iVar9 = (int)param_2[1];
    _Src = (void *)*param_2;
    *(int *)(param_1 + 0x20) = iVar9;
    if ((iVar9 == 0) && (*(int *)(param_1 + 0x24) == 0)) {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar1,iVar9);
      _guard_xfg_dispatch_icall_nop((void *)*plVar1,_Src,(longlong)iVar9 << 3);
    }
  }
  FText::operator=(param_1 + 0x28,param_2 + 2);
  *(char *)(param_1 + 0x40) = (char)param_2[5];
  *(longlong *)(param_1 + 0x48) = param_2[6];
  *(char *)(param_1 + 0x50) = (char)param_2[7];
  *(undefined1 *)(param_1 + 0x51) = *(undefined1 *)((longlong)param_2 + 0x39);
  if (*(char *)(param_1 + 0x50) != '\0') {
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnThisHintClicked",L"::");
    pwVar6 = (wchar_t *)0x0;
    while (pwVar5 = pwVar10, pwVar5 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar6 = pwVar5;
    }
    FName::FName(&local_208,pwVar6 + 2,1);
    FWeakObjectPtr::operator=(param_1 + -0x158,param_1 + -0x308);
    *(longlong *)(param_1 + -0x150) = local_208;
    local_248 = 0;
    if ((local_208 != 0) && (lVar11 = FWeakObjectPtr::Get(param_1 + -0x158), lVar11 != 0)) {
      UObject::FindFunction(lVar11,*(undefined8 *)(param_1 + -0x150));
    }
  }
  local_248._0_4_ = 0xffffffff;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_14170c210(&local_248);
  }
  FWeakObjectPtr::operator=(&local_220,param_1 + -0x308);
  uVar18 = (undefined4)local_248;
  local_248 = CONCAT44(local_248._4_4_,0xffffffff);
  local_118 = 0;
  local_108 = 0;
  puVar12 = (undefined8 *)FUN_140438ef0(0x20,local_138);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &PTR_FUN_144605c50;
    puVar12[1] = param_1 + -0x308;
    *(undefined4 *)(puVar12 + 2) = local_220;
    *(undefined4 *)((longlong)puVar12 + 0x14) = local_21c;
    *(undefined4 *)(puVar12 + 3) = uVar18;
    uVar18 = 0xffffffff;
  }
  local_148[0] = &LAB_142eb08f0;
  FUN_14208c5d0(param_1 + -0x308,local_148);
  FUN_1416f8340(uVar18);
  FUN_1416f8340(local_248 & 0xffffffff);
  uVar18 = 0;
  local_240 = 0;
  local_238 = 0;
  FUN_142eb6890(param_1 + -0x308,&local_240);
  *(undefined1 *)(param_1 + 0xb0) = 0;
  lVar11 = local_240;
  do {
    if (lVar11 == local_240 + (longlong)(int)local_238 * 0xc) {
LAB_142ec2f19:
      if ((*(longlong *)(param_1 + 0x60) != 0) && (*(longlong *)(param_1 + 0x68) != 0)) {
        piVar2 = (int *)(*(longlong *)(param_1 + 0x68) + 8);
        LOCK();
        iVar9 = *piVar2;
        if (iVar9 == 0) {
          *piVar2 = 0;
          iVar9 = 0;
        }
        UNLOCK();
        if (0 < iVar9) {
          fVar19 = (float)FUN_142eec5f0(param_1 + 0x58);
          uVar13 = FUN_1404b03b0();
          FText::FText(local_1f0,uVar13);
          fVar20 = 1.0;
          if (0 < *(int *)(param_1 + 0x20)) {
            fVar20 = 1.0 / (float)*(int *)(param_1 + 0x20);
          }
          local_250 = 0;
          lVar11 = FWeakObjectPtr::Get(param_1 + 0x10);
          if (lVar11 != 0) {
            uVar13 = FUN_142f30760();
            plVar14 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar11,uVar13);
            if ((plVar14 != (longlong *)0x0) &&
               (lVar11 = (**(code **)(*plVar14 + 0x10))(plVar14), lVar11 != 0)) {
              uVar18 = *(undefined4 *)(lVar11 + 400);
              local_250 = uVar18;
            }
          }
          puVar12 = (undefined8 *)*plVar1;
          local_1f8 = puVar12 + *(int *)(param_1 + 0x20);
          if (puVar12 != local_1f8) {
            local_218 = local_c8;
            puStack_210 = local_68;
            do {
              local_228 = 7;
              local_230 = 0;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_230,0);
              FGenericPlatformString::Memcpy(local_230,L"{0}{1}",0xe);
              uVar13 = FWeakObjectPtr::Get(param_1 + 0x10);
              local_278 = fVar19 * fVar20;
              local_270 = uVar18;
              puVar15 = (undefined4 *)FUN_142ef30e0(local_f8,*puVar12,uVar13,0);
              local_218 = puVar15;
              lVar11 = FText::FText(local_e0,local_1f0);
              local_200 = lVar11;
              uVar13 = FText::FromString(local_178,&local_230);
              puVar16 = (undefined8 *)FTextFormat::FTextFormat(local_160,uVar13);
              local_c8[0] = 4;
              FText::FText(local_b8,lVar11);
              local_a0 = 1;
              local_98 = 4;
              FText::FText(local_88,puVar15);
              local_1d8 = *puVar16;
              local_1d0 = puVar16[1];
              local_70 = 1;
              if (local_1d0 != 0) {
                LOCK();
                *(int *)(local_1d0 + 8) = *(int *)(local_1d0 + 8) + 1;
                UNLOCK();
              }
              local_1c8 = local_c8;
              puStack_1c0 = local_68;
              uVar13 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                       TArray<FFormatArgumentValue,FDefaultAllocator>(local_1b8,&local_1c8);
              uVar13 = FText::Format(local_190,&local_1d8,uVar13);
              FText::FText(local_1a8,uVar13);
              plVar1 = local_188;
              if (local_188 != (longlong *)0x0) {
                LOCK();
                plVar14 = local_188 + 1;
                lVar11 = *plVar14;
                *(int *)plVar14 = (int)*plVar14 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
                  (**(code **)*local_188)(local_188);
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
              TArray<FFormatArgumentValue,FDefaultAllocator>::
              ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_1b8);
              lVar11 = 2;
              pcVar17 = acStack_40;
              do {
                lVar11 = lVar11 + -1;
                pcVar3 = pcVar17 + -0x30;
                if (*pcVar3 != '\0') {
                  *pcVar3 = '\0';
                  plVar1 = *(longlong **)(pcVar17 + -0x40);
                  if (plVar1 != (longlong *)0x0) {
                    LOCK();
                    plVar14 = plVar1 + 1;
                    lVar7 = *plVar14;
                    *(int *)plVar14 = (int)*plVar14 + -1;
                    UNLOCK();
                    if ((int)lVar7 == 1) {
                      (**(code **)*plVar1)(plVar1);
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
                }
                pcVar17 = pcVar3;
              } while (lVar11 != 0);
              plVar1 = (longlong *)puVar16[1];
              if (plVar1 != (longlong *)0x0) {
                LOCK();
                plVar14 = plVar1 + 1;
                lVar11 = *plVar14;
                *(int *)plVar14 = (int)*plVar14 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
                  (**(code **)*plVar1)(plVar1);
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
              plVar1 = *(longlong **)(local_200 + 8);
              if (plVar1 != (longlong *)0x0) {
                LOCK();
                plVar14 = plVar1 + 1;
                lVar11 = *plVar14;
                *(int *)plVar14 = (int)*plVar14 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
                  (**(code **)*plVar1)(plVar1);
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
              plVar1 = *(longlong **)(local_218 + 2);
              if (plVar1 != (longlong *)0x0) {
                LOCK();
                plVar14 = plVar1 + 1;
                lVar11 = *plVar14;
                *(int *)plVar14 = (int)*plVar14 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
                  (**(code **)*plVar1)(plVar1);
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
              FText::operator=(local_1f0);
              plVar1 = local_1a0;
              if (local_1a0 != (longlong *)0x0) {
                LOCK();
                plVar14 = local_1a0 + 1;
                lVar11 = *plVar14;
                *(int *)plVar14 = (int)*plVar14 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
                  (**(code **)*local_1a0)(local_1a0);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar1 + 0xc);
                  iVar9 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar9 == 1) {
                    (**(code **)(*plVar1 + 8))(plVar1);
                  }
                }
              }
              plVar1 = local_170;
              if (local_170 != (longlong *)0x0) {
                LOCK();
                plVar14 = local_170 + 1;
                lVar11 = *plVar14;
                *(int *)plVar14 = (int)*plVar14 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
                  (**(code **)*local_170)(local_170);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar1 + 0xc);
                  iVar9 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar9 == 1) {
                    (**(code **)(*plVar1 + 8))(plVar1);
                  }
                }
              }
              if (local_230 != 0) {
                FMemory::Free();
              }
              param_3 = local_268;
              if (local_268 != '\0') {
                uVar13 = FWeakObjectPtr::Get(param_1 + 0x10);
                uVar8 = FUN_142eecc50(*puVar12,uVar13,0);
                *(undefined1 *)(param_1 + 0xb0) = uVar8;
              }
              puVar12 = puVar12 + 1;
              uVar18 = local_250;
            } while (puVar12 != local_1f8);
          }
          UMistDebugEntityScreen::InspectEntity
                    (param_1 + 0x58,local_1f0,1,*(undefined1 *)(param_1 + 0x51));
          if (local_1e8 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_1e8 + 1;
            lVar11 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_1e8)(local_1e8);
              LOCK();
              piVar2 = (int *)((longlong)local_1e8 + 0xc);
              iVar9 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_1e8 + 8))(local_1e8,1);
              }
            }
          }
        }
      }
      lVar11 = local_240;
      FUN_142f10940(param_1 + -0x308,param_3);
      cVar4 = *(char *)(param_1 + 0xb0);
      local_260 = (wchar_t *)0x0;
      local_258 = 0;
      if (cVar4 == '\x01') {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_260,8);
        iVar9 = (int)local_258 + 8;
        local_258 = CONCAT44(local_258._4_4_,iVar9);
        if (local_258._4_4_ < iVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_260);
        }
        builtin_wcsncpy(local_260,L"gamepad",8);
      }
      else if (cVar4 == '\x02') {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_260,9);
        iVar9 = (int)local_258 + 9;
        local_258 = CONCAT44(local_258._4_4_,iVar9);
        if (local_258._4_4_ < iVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_260);
        }
        builtin_wcsncpy(local_260,L"keyboard",9);
      }
      else if (cVar4 == '\x03') {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_260,0xd);
        iVar9 = (int)local_258 + 0xd;
        local_258 = CONCAT44(local_258._4_4_,iVar9);
        if (local_258._4_4_ < iVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_260);
        }
        builtin_wcsncpy(local_260,L"keyboardWide",0xd);
      }
      else if (cVar4 == '\x04') {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_260,0xe);
        iVar9 = (int)local_258 + 0xe;
        local_258 = CONCAT44(local_258._4_4_,iVar9);
        if (local_258._4_4_ < iVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_260);
        }
        builtin_wcsncpy(local_260,L"keyboardXWide",0xe);
      }
      plVar1 = *(longlong **)(param_1 + 0x78);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x278))(plVar1,param_3);
        FUN_142088cf0(*(undefined8 *)(param_1 + 0x78),&local_260);
      }
      plVar1 = *(longlong **)(param_1 + 0xa0);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x278))(plVar1,param_3);
        FUN_142088cf0(*(undefined8 *)(param_1 + 0xa0),&local_260);
      }
      *(undefined1 *)(param_1 + 0xbb) = 1;
      if (local_260 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      if (lVar11 != 0) {
        FMemory::Free(lVar11);
      }
      return;
    }
    if (*(char *)(lVar11 + 1) != '\0') {
      param_3 = '\x01';
      local_268 = '\x01';
      goto LAB_142ec2f19;
    }
    lVar11 = lVar11 + 0xc;
  } while( true );
}



// FUNCTION 142ec3600 FUN_142ec3600 body=992 status=ok
// SIG undefined FUN_142ec3600(void)

void FUN_142ec3600(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  longlong local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  longlong *plStack_a0;
  longlong local_98;
  longlong *plStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_78;
  uint local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong local_48;
  longlong *plStack_40;
  
  lVar8 = 0;
  FUN_142ef9e70();
  *(longlong *)(param_1 + 0x268) = param_1;
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar9 = *piVar1;
    if (iVar9 == 0) {
      *piVar1 = 0;
      iVar9 = 0;
    }
    UNLOCK();
    if (0 < iVar9) {
      local_d0 = *(longlong **)(param_1 + 0x30);
      local_d8 = 0;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        iVar9 = (int)local_d0[1];
        bVar10 = iVar9 == 0;
        if (bVar10) {
          *(int *)(local_d0 + 1) = 0;
          iVar9 = 0;
        }
        UNLOCK();
        while (!bVar10) {
          LOCK();
          bVar10 = iVar9 == (int)local_d0[1];
          if (bVar10) {
            *(int *)(local_d0 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar10) {
            lVar8 = *(longlong *)(param_1 + 0x28);
            plVar5 = &local_d8;
            bVar3 = true;
            bVar10 = false;
            local_d8 = lVar8;
            goto LAB_142ec36c0;
          }
          LOCK();
          iVar9 = (int)local_d0[1];
          bVar10 = iVar9 == 0;
          if (bVar10) {
            *(int *)(local_d0 + 1) = 0;
            iVar9 = 0;
          }
          UNLOCK();
        }
        local_d0 = (longlong *)0x0;
      }
      lVar8 = 0;
      plVar5 = &local_d8;
      bVar3 = true;
      bVar10 = false;
      goto LAB_142ec36c0;
    }
  }
  plVar5 = &local_a8;
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  bVar3 = false;
  bVar10 = true;
LAB_142ec36c0:
  plVar2 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  plVar7 = plStack_a0;
  *plVar5 = 0;
  if ((bVar10) && (plStack_a0 != (longlong *)0x0)) {
    LOCK();
    plVar5 = plStack_a0 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
      }
    }
  }
  plVar5 = local_d0;
  if ((bVar3) && (local_d0 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_d0 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  if (lVar8 != 0) {
    local_78 = (longlong *)0x0;
    local_88 = 0xffffffffffffffff;
    uStack_80 = 0xffffffffffffffff;
    local_70 = 2;
    local_68 = 1;
    FUN_142055740(lVar8,PTR_s_scaleform_gfx_Extensions_14673ca50,"enabled",&local_88);
    if ((local_70 >> 6 & 1) != 0) {
      (**(code **)(*local_78 + 0x10))(local_78,&local_88,CONCAT71(uStack_67,local_68));
    }
    local_b8 = 0;
    local_b0 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    FGenericPlatformString::Memcpy(local_b8,L"label",0xc);
    local_c8 = (longlong *)0x0;
    local_c0 = 0;
    FUN_140e99270(param_1,param_1 + 0x248,&local_b8,0,6,&local_c8);
    plVar5 = local_c8;
    for (iVar9 = (int)local_c0; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
    if (local_b8 != 0) {
      FMemory::Free();
    }
    puVar6 = (undefined8 *)FUN_142085870(param_1,local_58,L"newIndicator");
    *(undefined8 *)(param_1 + 600) = *puVar6;
    plVar5 = (longlong *)puVar6[1];
    plVar7 = *(longlong **)(param_1 + 0x260);
    if (plVar5 != plVar7) {
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar7 = *(longlong **)(param_1 + 0x260);
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      *(longlong **)(param_1 + 0x260) = plVar5;
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_50 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    FUN_142085870(param_1,&local_98,L"buttonHitArea");
    if (local_98 != 0) {
      local_48 = local_98;
      plStack_40 = plStack_90;
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
        UNLOCK();
      }
      FUN_142052630(lVar8,"hitArea",&local_48);
    }
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_90 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_90)(plStack_90);
        LOCK();
        piVar1 = (int *)((longlong)plStack_90 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_90 + 8))(plStack_90,1);
        }
      }
    }
    FUN_142eafb40(param_1);
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar2 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return;
}



// FUNCTION 142ec39e0 FUN_142ec39e0 body=1273 status=ok
// SIG undefined FUN_142ec39e0(void)

void FUN_142ec39e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b3de30) && (_Init_thread_header(&DAT_146b3de30), DAT_146b3de30 == -1))
  {
    FName::FName(&DAT_146b3de28,L"OnDropDownButtonClicked",1);
    _Init_thread_footer(&DAT_146b3de30);
  }
  local_10 = 7;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"topBar",0xe);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar2 = FUN_140f9a360(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x188) = uVar2;
  plVar3 = local_28;
  for (iVar4 = (int)local_20; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    local_28 = (longlong *)0x0;
    local_20 = 0x15;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"currentSelectionText",0x2a);
    local_18 = (longlong *)0x0;
    local_10 = 0;
    uVar2 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x188),&local_28,0,6,&local_18);
    *(undefined8 *)(param_1 + 0x170) = uVar2;
    plVar3 = local_18;
    for (iVar4 = (int)local_10; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_28 = (longlong *)0x0;
    local_20 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"dropDownButton",0x1e);
    local_18 = (longlong *)0x0;
    local_10 = 0;
    uVar2 = FUN_140f9a360(*(undefined8 *)(param_1 + 0x188),&local_28,0,6,&local_18);
    *(undefined8 *)(param_1 + 0x180) = uVar2;
    plVar3 = local_18;
    for (iVar4 = (int)local_10; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free();
    }
    lVar1 = *(longlong *)(param_1 + 0x188);
    FWeakObjectPtr::operator=(lVar1 + 0x1b0,param_1);
    *(undefined8 *)(lVar1 + 0x1b8) = DAT_146b3de28;
  }
  local_28 = (longlong *)0x0;
  local_20 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"dropList",0x12);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar2 = FUN_140ecbdf0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 400) = uVar2;
  plVar3 = local_18;
  for (iVar4 = (int)local_10; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    local_28 = (longlong *)0x0;
    local_20 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"listScrollBar",0x1c);
    local_18 = (longlong *)0x0;
    local_10 = 0;
    uVar2 = FUN_141021f30(*(undefined8 *)(param_1 + 400),&local_28,0,6,&local_18);
    *(undefined8 *)(param_1 + 0x178) = uVar2;
    plVar3 = local_18;
    for (iVar4 = (int)local_10; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_28 = (longlong *)0x0;
    local_20 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"entries",0x10);
    local_18 = (longlong *)0x0;
    local_10 = 0;
    uVar2 = FUN_142ea7ce0(*(undefined8 *)(param_1 + 400),&local_28,0,6,&local_18);
    *(undefined8 *)(param_1 + 0x198) = uVar2;
    plVar3 = local_18;
    for (iVar4 = (int)local_10; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x198) != 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x198) + 0x24d) = 0;
      *(longlong *)(*(longlong *)(param_1 + 0x198) + 800) = param_1;
      if ((*(longlong *)(param_1 + 0x198) != 0) && (*(longlong *)(param_1 + 0x178) != 0)) {
        FUN_142ed4250();
        (**(code **)(**(longlong **)(param_1 + 0x178) + 0x278))(*(longlong **)(param_1 + 0x178),0);
      }
    }
  }
  FUN_142eb15b0(param_1);
  return;
}



// FUNCTION 142ec3ee0 FUN_142ec3ee0 body=1143 status=ok
// SIG undefined FUN_142ec3ee0(void)

void FUN_142ec3ee0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *local_48;
  ulonglong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_142ec5080();
  if (*(longlong *)(param_1 + 0x248) == 0) {
    local_48 = (longlong *)0x0;
    local_40 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"textField",0x14);
    local_38 = (longlong *)0x0;
    uStack_30 = 0;
    uVar2 = FUN_140ecc7d0(param_1,&local_48,0,6,&local_38);
    *(undefined8 *)(param_1 + 0x248) = uVar2;
    plVar4 = local_38;
    for (iVar6 = (int)uStack_30; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  uVar2 = FUN_1404b03b0();
  if ((*(char *)(param_1 + 0x401) != '\0') || (cVar1 = FText::IsEmpty(uVar2), cVar1 == '\0')) {
    uVar3 = FText::ToString(uVar2);
    FString::operator=(param_1 + 0x318,uVar3);
    plVar4 = *(longlong **)(param_1 + 0x248);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x2b0))(plVar4,uVar2,1,0);
      if (*(longlong *)(param_1 + 0x248) != 0) {
        FUN_142f10ae0(*(longlong *)(param_1 + 0x248),0);
        FUN_142f0de70(*(undefined8 *)(param_1 + 0x248),PTR_DAT_14673ca48);
      }
    }
  }
  uStack_30 = uStack_30 & 0xffffffff00000000;
  local_48 = (longlong *)0x0;
  local_38 = (longlong *)&LAB_1424704cc;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_40 = CONCAT44(local_40._4_4_,3);
  local_48 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_38._4_4_;
    *(int *)(plVar4 + 3) = (int)uStack_30;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_30._4_4_;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_143fcff08;
  }
  FUN_142ee1c00(param_1,PTR_s_keyDown_14673ca30,param_1 + 0x348,&local_48);
  if ((int)local_40 == 0) {
LAB_142ec40e4:
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  else if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = local_40 & 0xffffffff00000000;
    goto LAB_142ec40e4;
  }
  uStack_20 = 0;
  local_38 = (longlong *)0x0;
  local_28 = (code *)&LAB_142eaf288;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  uStack_30 = CONCAT44(uStack_30._4_4_,3);
  local_38 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_28._4_4_;
    *(undefined4 *)(plVar4 + 3) = uStack_20;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_1c;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_143fcff08;
  }
  FUN_142ee1c00(param_1,PTR_s_textInput_14673ca38,param_1 + 0x340,&local_38);
  if ((int)uStack_30 == 0) {
LAB_142ec419a:
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    uStack_30 = uStack_30 & 0xffffffff00000000;
    goto LAB_142ec419a;
  }
  uStack_20 = 0;
  local_48 = (longlong *)0x0;
  local_28 = (code *)&LAB_140dafae0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_40 = CONCAT44(local_40._4_4_,3);
  local_48 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_28._4_4_;
    *(undefined4 *)(plVar4 + 3) = uStack_20;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_1c;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_143fcff08;
  }
  FUN_142ee1c00(param_1,PTR_s_change_14673c968,param_1 + 0x338,&local_48);
  if ((int)local_40 == 0) {
LAB_142ec4250:
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  else if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = local_40 & 0xffffffff00000000;
    goto LAB_142ec4250;
  }
  uStack_20 = 0;
  local_38 = (longlong *)0x0;
  local_28 = FUN_142ec16d0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  uStack_30 = CONCAT44(uStack_30._4_4_,3);
  local_38 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_28;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_28._4_4_;
    *(undefined4 *)(plVar4 + 3) = uStack_20;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_1c;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_143fcff08;
  }
  FUN_142ee1c00(param_1,PTR_s_focusOut_14673ca40,param_1 + 0x350,&local_38);
  if ((int)uStack_30 != 0) {
    if (local_38 == (longlong *)0x0) goto LAB_142ec4313;
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    uStack_30 = uStack_30 & 0xffffffff00000000;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
LAB_142ec4313:
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FUN_142f10ae0(*(longlong *)(param_1 + 0x248),0);
    FUN_142f0de70(*(undefined8 *)(param_1 + 0x248),PTR_DAT_14673ca48);
  }
  return;
}



// FUNCTION 142ec4360 FUN_142ec4360 body=606 status=ok
// SIG undefined FUN_142ec4360(void)

void FUN_142ec4360(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *local_48;
  int local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_142ef9e70();
  (**(code **)(*param_1 + 800))(param_1);
  (**(code **)(*param_1 + 0x328))(param_1);
  (**(code **)(*param_1 + 0x318))(param_1);
  FUN_142f10940(param_1,1);
  if (((param_1[0x3a] == 0) && (param_1[7] != 0)) && (lVar1 = FUN_142eb7f00(), lVar1 != 0)) {
    uStack_30 = 0;
    local_38 = (code *)&LAB_140edead0;
    local_48 = (longlong *)0x0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_40 = 3;
    local_48 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)plVar2 + 0x14) = local_38._4_4_;
      *(undefined4 *)(plVar2 + 3) = uStack_30;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_2c;
      lVar1 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar1;
      *plVar2 = (longlong)&PTR_FUN_143fcff08;
    }
    uVar3 = FUN_142eb7f00(param_1[7]);
    FUN_142ee1c00(uVar3,PTR_s_mouseMove_14673ca00,param_1 + 0x3a,&local_48);
    if (local_40 != 0) {
      if (local_48 == (longlong *)0x0) goto LAB_142ec44b0;
      (**(code **)(*local_48 + 0x28))(local_48,0);
      if (local_48 != (longlong *)0x0) {
        local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
      }
      local_40 = 0;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
LAB_142ec44b0:
  if (((param_1[0x53] != 0) && (param_1[0x3b] == 0)) && (lVar1 = FUN_142eee1b0(), lVar1 != 0)) {
    uStack_30 = 0;
    local_48 = (longlong *)0x0;
    local_38 = FUN_142ec2880;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    local_40 = 3;
    local_48 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = (undefined4)local_38;
      *(undefined4 *)((longlong)plVar2 + 0x14) = local_38._4_4_;
      *(undefined4 *)(plVar2 + 3) = uStack_30;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_2c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar4;
      *plVar2 = (longlong)&PTR_FUN_143fcff08;
    }
    FUN_142ee1c00(lVar1,PTR_s_rollOut_14673ca08,param_1 + 0x3b,&local_48);
    if (local_40 != 0) {
      if (local_48 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_48 + 0x28))(local_48,0);
      if (local_48 != (longlong *)0x0) {
        local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
      }
      local_40 = 0;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  return;
}



// FUNCTION 142ec45c0 thunk_FUN_142ec4360 body=5 status=ok
// SIG undefined thunk_FUN_142ec4360(void)

void thunk_FUN_142ec4360(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plStack_48;
  int iStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_142ef9e70();
  (**(code **)(*param_1 + 800))(param_1);
  (**(code **)(*param_1 + 0x328))(param_1);
  (**(code **)(*param_1 + 0x318))(param_1);
  FUN_142f10940(param_1,1);
  if (((param_1[0x3a] == 0) && (param_1[7] != 0)) && (lVar1 = FUN_142eb7f00(), lVar1 != 0)) {
    uStack_30 = 0;
    uStack_38 = (code *)&LAB_140edead0;
    plStack_48 = (longlong *)0x0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
    iStack_40 = 3;
    plStack_48 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = (undefined4)uStack_38;
      *(undefined4 *)((longlong)plVar2 + 0x14) = uStack_38._4_4_;
      *(undefined4 *)(plVar2 + 3) = uStack_30;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_2c;
      lVar1 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar1;
      *plVar2 = (longlong)&PTR_FUN_143fcff08;
    }
    uVar3 = FUN_142eb7f00(param_1[7]);
    FUN_142ee1c00(uVar3,PTR_s_mouseMove_14673ca00,param_1 + 0x3a,&plStack_48);
    if (iStack_40 != 0) {
      if (plStack_48 == (longlong *)0x0) goto LAB_142ec44b0;
      (**(code **)(*plStack_48 + 0x28))(plStack_48,0);
      if (plStack_48 != (longlong *)0x0) {
        plStack_48 = (longlong *)FMemory::Realloc(plStack_48,0,0);
      }
      iStack_40 = 0;
    }
    if (plStack_48 != (longlong *)0x0) {
      FMemory::Free(plStack_48);
    }
  }
LAB_142ec44b0:
  if (((param_1[0x53] != 0) && (param_1[0x3b] == 0)) && (lVar1 = FUN_142eee1b0(), lVar1 != 0)) {
    uStack_30 = 0;
    plStack_48 = (longlong *)0x0;
    uStack_38 = FUN_142ec2880;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    iStack_40 = 3;
    plStack_48 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = (undefined4)uStack_38;
      *(undefined4 *)((longlong)plVar2 + 0x14) = uStack_38._4_4_;
      *(undefined4 *)(plVar2 + 3) = uStack_30;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_2c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar4;
      *plVar2 = (longlong)&PTR_FUN_143fcff08;
    }
    FUN_142ee1c00(lVar1,PTR_s_rollOut_14673ca08,param_1 + 0x3b,&plStack_48);
    if (iStack_40 != 0) {
      if (plStack_48 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*plStack_48 + 0x28))(plStack_48,0);
      if (plStack_48 != (longlong *)0x0) {
        plStack_48 = (longlong *)FMemory::Realloc(plStack_48,0,0);
      }
      iStack_40 = 0;
    }
    if (plStack_48 != (longlong *)0x0) {
      FMemory::Free(plStack_48);
    }
  }
  return;
}



// FUNCTION 142ec45d0 FUN_142ec45d0 body=1347 status=ok
// SIG undefined FUN_142ec45d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ec45d0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  void *pvVar4;
  bool bVar5;
  char cVar6;
  undefined8 *puVar7;
  void **ppvVar8;
  void *pvVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  void *pvVar15;
  bool bVar16;
  undefined1 auStack_178 [32];
  longlong **local_158;
  void *local_148;
  longlong *local_140;
  undefined4 local_138;
  void *local_130;
  int local_128;
  undefined4 local_124;
  longlong *local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  void *local_108;
  longlong *local_100;
  void *local_f8;
  int local_f0;
  void *local_e8;
  longlong *plStack_e0;
  void *local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  uint local_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined8 local_98;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  pvVar9 = (void *)0x0;
  local_138 = 0;
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0xbb);
  if (cVar6 != '\0') {
    lVar10 = 0x5b8;
    lVar14 = 0x5b8;
    local_f8 = (void *)0x0;
    if (1 < (int)param_1[0xaa]) {
      lVar14 = 0x548;
    }
    local_f0 = *(int *)(lVar14 + 8 + (longlong)param_1);
    lVar13 = (longlong)local_f0;
    pvVar4 = *(void **)(lVar14 + (longlong)param_1);
    pvVar15 = pvVar9;
    if (local_f0 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f8,local_f0,0);
      pvVar15 = local_f8;
      _guard_xfg_dispatch_icall_nop(local_f8,pvVar4,lVar13 * 2);
    }
    iVar12 = local_f0;
    if (pvVar15 != (void *)0x0) {
      FMemory::Free(pvVar15);
    }
    if (1 < iVar12) {
      local_120 = (longlong *)0x0;
      if (1 < (int)param_1[0xaa]) {
        lVar10 = 0x548;
      }
      local_118 = 0;
      local_98 = 0;
      local_130 = (void *)0x0;
      local_128 = *(int *)(lVar10 + 8 + (longlong)param_1);
      lVar14 = (longlong)local_128;
      pvVar4 = *(void **)(lVar10 + (longlong)param_1);
      if (local_128 == 0) {
        local_124 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_130,local_128,0);
        _guard_xfg_dispatch_icall_nop(local_130,pvVar4,lVar14 * 2);
      }
      local_158 = &local_120;
      lVar14 = FUN_140e96f30(param_1,&local_130,0,6);
      if (local_130 != (void *)0x0) {
        FMemory::Free();
      }
      plVar11 = local_120;
      for (iVar12 = (int)local_118; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (*plVar11 != 0) {
          FMemory::Free();
        }
        plVar11 = plVar11 + 2;
      }
      if (local_120 != (longlong *)0x0) {
        FMemory::Free(local_120);
      }
      if (lVar14 != 0) {
        param_1[0x57] = lVar14;
      }
    }
    if ((char)param_1[0xa8] == '\x01') {
      FWeakObjectPtr::operator=(&local_110,param_1);
      local_58 = (longlong *)0x0;
      local_48 = 0;
      puVar7 = (undefined8 *)FUN_140438ef0(0x18,local_78);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_FUN_1444f8920;
        puVar7[1] = param_1;
        *(undefined4 *)(puVar7 + 2) = local_110;
        *(undefined4 *)((longlong)puVar7 + 0x14) = local_10c;
      }
      local_88[0] = &LAB_142eb0930;
      FUN_14208c260(param_1,local_88);
      if (local_48 != 0) {
        plVar11 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar11 = local_58;
        }
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x10))(plVar11,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  plVar11 = (longlong *)param_1[0x57];
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x278))(plVar11,0);
  }
  *(undefined1 *)(param_1 + 0x98) = 1;
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0xba);
  if (cVar6 != '\0') {
    lVar14 = FWeakObjectPtr::Get(param_1 + 0xba);
    if ((*(longlong *)(lVar14 + 0x590) == 0) ||
       (cVar6 = FUN_142ef5df0(*(longlong *)(lVar14 + 0x590),param_1), cVar6 == '\0')) {
      (**(code **)(*param_1 + 0x580))(param_1,1);
    }
  }
  lVar14 = param_1[0x57];
  if (lVar14 == 0) {
    ppvVar8 = &local_d8;
    local_d8 = (void *)0x0;
    plStack_d0 = (longlong *)0x0;
    bVar5 = false;
    bVar16 = true;
    goto LAB_142ec49c3;
  }
  if ((*(longlong *)(lVar14 + 0x28) == 0) || (*(longlong *)(lVar14 + 0x30) == 0)) {
LAB_142ec48ee:
    ppvVar8 = &local_e8;
    local_e8 = (void *)0x0;
    plStack_e0 = (longlong *)0x0;
    bVar5 = false;
    bVar16 = true;
  }
  else {
    piVar1 = (int *)(*(longlong *)(lVar14 + 0x30) + 8);
    LOCK();
    iVar12 = *piVar1;
    if (iVar12 == 0) {
      *piVar1 = 0;
      iVar12 = 0;
    }
    UNLOCK();
    if (iVar12 < 1) goto LAB_142ec48ee;
    local_140 = *(longlong **)(lVar14 + 0x30);
    local_148 = (void *)0x0;
    if (local_140 != (longlong *)0x0) {
      LOCK();
      iVar12 = (int)local_140[1];
      bVar16 = iVar12 == 0;
      if (bVar16) {
        *(int *)(local_140 + 1) = 0;
        iVar12 = 0;
      }
      UNLOCK();
      while (!bVar16) {
        LOCK();
        bVar16 = iVar12 == (int)local_140[1];
        if (bVar16) {
          *(int *)(local_140 + 1) = iVar12 + 1;
        }
        UNLOCK();
        if (bVar16) {
          pvVar9 = *(void **)(lVar14 + 0x28);
          ppvVar8 = &local_148;
          bVar5 = true;
          bVar16 = false;
          local_148 = pvVar9;
          goto LAB_142ec4902;
        }
        LOCK();
        iVar12 = (int)local_140[1];
        bVar16 = iVar12 == 0;
        if (bVar16) {
          *(int *)(local_140 + 1) = 0;
          iVar12 = 0;
        }
        UNLOCK();
      }
      local_140 = (longlong *)0x0;
    }
    pvVar9 = (void *)0x0;
    ppvVar8 = &local_148;
    bVar5 = true;
    bVar16 = false;
  }
LAB_142ec4902:
  plVar11 = ppvVar8[1];
  ppvVar8[1] = (void *)0x0;
  plVar2 = plStack_e0;
  local_100 = plVar11;
  *ppvVar8 = (void *)0x0;
  local_108 = pvVar9;
  if ((bVar16) && (plStack_e0 != (longlong *)0x0)) {
    LOCK();
    plVar11 = plStack_e0 + 1;
    lVar14 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plStack_e0)(plStack_e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plStack_e0 + 8))(plStack_e0,1);
      }
    }
  }
  plVar11 = local_140;
  if ((bVar5) && (local_140 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_140 + 1;
    lVar14 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_140 + 8))(local_140,1);
      }
    }
  }
  bVar5 = true;
  bVar16 = false;
  ppvVar8 = &local_108;
LAB_142ec49c3:
  plVar11 = ppvVar8[1];
  ppvVar8[1] = (void *)0x0;
  plVar2 = plStack_d0;
  *ppvVar8 = (void *)0x0;
  if ((bVar16) && (plStack_d0 != (longlong *)0x0)) {
    LOCK();
    plVar3 = plStack_d0 + 1;
    lVar14 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plStack_d0)(plStack_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
      }
    }
  }
  plVar2 = local_100;
  if ((bVar5) && (local_100 != (longlong *)0x0)) {
    LOCK();
    plVar3 = local_100 + 1;
    lVar14 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
  if ((pvVar9 != (void *)0x0) && (cVar6 = FUN_142045cb0(pvVar9), cVar6 != '\0')) {
    local_c8 = 0xffffffffffffffff;
    uStack_c0 = 0xffffffffffffffff;
    local_b8 = (longlong *)0x0;
    local_b0 = 2;
    local_a8 = 1;
    FUN_1420523e0(pvVar9,PTR_s_noInvisibleAdvance_14673c930,&local_c8);
    if ((local_b0 >> 6 & 1) != 0) {
      (**(code **)(*local_b8 + 0x10))(local_b8,&local_c8,CONCAT71(uStack_a7,local_a8));
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar11 + 1;
    lVar14 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  return;
}



// FUNCTION 142ec4b30 FUN_142ec4b30 body=1360 status=ok
// SIG undefined FUN_142ec4b30(void)

void FUN_142ec4b30(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_142ec5080();
  uVar3 = FUN_142085870(param_1,local_18,L"buttonText");
  FUN_142ede260(param_1 + 0x360,uVar3);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_10 + 1;
    lVar2 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  local_e0 = 9;
  local_e8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  FGenericPlatformString::Memcpy(local_e8,L"hintText",0x12);
  local_f8 = (longlong *)0x0;
  local_f0 = 0;
  uVar3 = FUN_140ecc7d0(param_1,&local_e8,0,6,&local_f8);
  *(undefined8 *)(param_1 + 0x378) = uVar3;
  plVar5 = local_f8;
  for (iVar4 = (int)local_f0; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_f8 != (longlong *)0x0) {
    FMemory::Free(local_f8);
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x378) != 0) {
    FUN_142f0de70(*(longlong *)(param_1 + 0x378),PTR_DAT_14673ca48);
    FUN_142f10ae0(*(undefined8 *)(param_1 + 0x378),0);
  }
  local_c8 = 0;
  local_c0 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
  FGenericPlatformString::Memcpy(local_c8,L"holdToPressBar",0x1e);
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  uVar3 = FUN_140ecbdf0(param_1,&local_c8,0,6,&local_d8);
  *(undefined8 *)(param_1 + 0x380) = uVar3;
  plVar5 = local_d8;
  for (iVar4 = (int)local_d0; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x380) != 0) {
    local_a8 = 0;
    local_a0 = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
    FGenericPlatformString::Memcpy(local_a8,L"holdToPressGamepad",0x26);
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    uVar3 = FUN_140ecc430(*(undefined8 *)(param_1 + 0x380),&local_a8,0,6,&local_b8);
    *(undefined8 *)(param_1 + 0x388) = uVar3;
    plVar5 = local_b8;
    for (iVar4 = (int)local_b0; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free(local_b8);
    }
    if (local_a8 != 0) {
      FMemory::Free();
    }
    local_88 = 0;
    local_80 = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    FGenericPlatformString::Memcpy(local_88,L"holdToPressKeyboard",0x28);
    local_98 = (longlong *)0x0;
    local_90 = 0;
    uVar3 = FUN_140ecc430(*(undefined8 *)(param_1 + 0x380),&local_88,0,6,&local_98);
    *(undefined8 *)(param_1 + 0x390) = uVar3;
    plVar5 = local_98;
    for (iVar4 = (int)local_90; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free(local_98);
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
    local_68 = 0;
    local_60 = 0x18;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    FGenericPlatformString::Memcpy(local_68,L"holdToPressKeyboardWide",0x30);
    local_78 = (longlong *)0x0;
    local_70 = 0;
    uVar3 = FUN_140ecc430(*(undefined8 *)(param_1 + 0x380),&local_68,0,6,&local_78);
    *(undefined8 *)(param_1 + 0x398) = uVar3;
    plVar5 = local_78;
    for (iVar4 = (int)local_70; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free(local_78);
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
    local_48 = 0;
    local_40 = 0x19;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"holdToPressKeyboardXWide",0x32);
    local_58 = (longlong *)0x0;
    local_50 = 0;
    uVar3 = FUN_140ecc430(*(undefined8 *)(param_1 + 0x380),&local_48,0,6,&local_58);
    *(undefined8 *)(param_1 + 0x3a0) = uVar3;
    plVar5 = local_58;
    for (iVar4 = (int)local_50; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
  local_28 = 0;
  local_20 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"hintCaret",0x14);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  uVar3 = FUN_140ecbdf0(param_1,&local_28,0,6,&local_38);
  *(undefined8 *)(param_1 + 0x3a8) = uVar3;
  plVar5 = local_38;
  for (iVar4 = (int)local_30; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  plVar5 = *(longlong **)(param_1 + 0x3a8);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x278))(plVar5,0);
  }
  return;
}



// FUNCTION 142ec5080 FUN_142ec5080 body=194 status=ok
// SIG undefined FUN_142ec5080(void)

void FUN_142ec5080(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  FUN_142ec3600();
  local_10 = 0xb;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"cellBounds",0x16);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecbdf0(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x2d0) = uVar1;
  plVar2 = local_28;
  for (iVar3 = (int)local_20; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ec5150 FUN_142ec5150 body=715 status=ok
// SIG undefined FUN_142ec5150(void)

void FUN_142ec5150(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  char cVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  wchar_t *pwVar11;
  undefined8 local_res8;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  code *local_28;
  wchar_t *pwStack_20;
  
  FUN_142ec5080();
  pwVar11 = (wchar_t *)0x0;
  pwStack_20 = (wchar_t *)0xd;
  local_28 = (code *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"dropDownList",0x1a);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  uVar5 = FUN_142ea8080(param_1,&local_28,0,6,&local_48);
  *(undefined8 *)(param_1 + 0x318) = uVar5;
  plVar9 = local_48;
  for (iVar10 = (int)local_40; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_28 != (code *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x318) != 0) {
    cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x240);
    if (cVar4 != '\0') {
      local_48 = (longlong *)0x0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      FWeakObjectPtr::operator=(&local_48,0);
      FWeakObjectPtr::operator=(&local_40,0);
      FWeakObjectPtr::operator=(&local_38,0);
      FWeakObjectPtr::operator=(&local_30,0);
      pcVar1 = *(code **)(*(longlong *)(param_1 + 0x318) + 0x198);
      pwVar6 = pwVar11;
      local_28 = pcVar1;
      if (pcVar1 != (code *)0x0) {
        uVar5 = UBlendableInterface::GetPrivateStaticClass();
        pwVar6 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(pcVar1,uVar5);
      }
      pwStack_20 = pwVar6;
      uVar5 = FWeakObjectPtr::Get(param_1 + 0x240);
      FUN_142ecfd10(uVar5,&local_28,&local_48);
    }
    pwStack_20 = (wchar_t *)((ulonglong)pwStack_20 & 0xffffffff00000000);
    local_28 = FUN_142ecb650;
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UGbxGFxListItemComboBox::OnSelectionUpdated",L"::");
    pwVar6 = pwVar11;
    while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar6 = pwVar3;
    }
    FName::FName(&local_res8,pwVar6 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x318) + 0x1d0,param_1,&local_28,local_res8);
    puVar8 = (undefined8 *)FName::FName(&local_res8,L"OnDropDownButtonClicked",1);
    lVar2 = *(longlong *)(param_1 + 0x318);
    FWeakObjectPtr::operator=(lVar2 + 0x1e0,param_1);
    *(undefined8 *)(lVar2 + 0x1e8) = *puVar8;
  }
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    pwStack_20 = (wchar_t *)((ulonglong)pwStack_20 & 0xffffffff00000000);
    local_28 = FUN_142ecb010;
    pwVar6 = _guard_xfg_dispatch_icall_nop
                       (L"&UGbxGFxListItemComboBox::OnOwningListSelectionChanged",L"::");
    while (pwVar7 = pwVar6, pwVar7 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
      pwVar11 = pwVar7;
    }
    FName::FName(&local_res8,pwVar11 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x2c8) + 0x180,param_1,&local_28,local_res8);
  }
  *(undefined1 *)(param_1 + 0x324) = *(undefined1 *)(param_1 + 0x198);
  return;
}



// FUNCTION 142ec5420 FUN_142ec5420 body=390 status=ok
// SIG undefined FUN_142ec5420(void)

void FUN_142ec5420(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ec5080();
  local_10 = 6;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"label",0xc);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x360) = uVar1;
  plVar3 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"badBindingIcon",0x1e);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x368) = uVar1;
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
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar3 = *(longlong **)(param_1 + 0x368);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x278))(plVar3,0);
  }
  return;
}



// FUNCTION 142ec55b0 FUN_142ec55b0 body=456 status=ok
// SIG undefined FUN_142ec55b0(void)

void FUN_142ec55b0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  FUN_142ec5080();
  local_20 = 7;
  local_28 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_28,7,"slider",7,0x3f);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  uVar2 = FUN_141021f30(param_1,&local_28,0,6,&local_38);
  *(undefined8 *)(param_1 + 0x340) = uVar2;
  plVar5 = local_38;
  for (iVar4 = (int)local_30; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_38,0x14,"numberListItemValue",0x14,0x3f);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar2 = FUN_140ecc7d0(param_1,&local_38,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x348) = uVar2;
  plVar5 = local_28;
  for (iVar4 = (int)local_20; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x340) != 0) {
    puVar3 = (undefined8 *)FName::FName(local_res8,L"OnSliderUpdated",1);
    lVar1 = *(longlong *)(param_1 + 0x340);
    FWeakObjectPtr::operator=(lVar1 + 0x378,param_1);
    *(undefined8 *)(lVar1 + 0x380) = *puVar3;
  }
  return;
}



// FUNCTION 142ec5780 FUN_142ec5780 body=270 status=ok
// SIG undefined FUN_142ec5780(void)

void FUN_142ec5780(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 local_res8 [8];
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  FUN_142ec5080();
  local_10 = 0xb;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"gbxSpinner",0x16);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar2 = FUN_142ea87c0(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 800) = uVar2;
  plVar4 = local_28;
  for (iVar5 = (int)local_20; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 800) != 0) {
    puVar3 = (undefined8 *)FName::FName(local_res8,L"OnSpinnerValueUpdated",1);
    lVar1 = *(longlong *)(param_1 + 800);
    FWeakObjectPtr::operator=(lVar1 + 0x310,param_1);
    *(undefined8 *)(lVar1 + 0x318) = *puVar3;
  }
  return;
}



// FUNCTION 142ec5890 FUN_142ec5890 body=1060 status=ok
// SIG undefined FUN_142ec5890(void)

void FUN_142ec5890(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  FUN_142ef9e70();
  local_c0 = 0x12;
  local_c8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
  FGenericPlatformString::Memcpy(local_c8,L"hintWrapperL.hint",0x24);
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  FUN_140e98630(param_1,param_1 + 0x180,&local_c8,0,6,&local_d8);
  plVar7 = local_d8;
  for (iVar6 = (int)local_d0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  local_a8 = 0;
  local_a0 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  FGenericPlatformString::Memcpy(local_a8,L"hintWrapperR.hint",0x24);
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  FUN_140e98630(param_1,param_1 + 0x188,&local_a8,0,6,&local_b8);
  plVar7 = local_b8;
  for (iVar6 = (int)local_b0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free(local_b8);
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  local_88 = 0;
  local_80 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  FGenericPlatformString::Memcpy(local_88,L"navigationButtons",0x24);
  local_98 = (longlong *)0x0;
  local_90 = 0;
  FUN_140f15e80(param_1,param_1 + 400,&local_88,0,6,&local_98);
  plVar7 = local_98;
  for (iVar6 = (int)local_90; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 400) + 0x1c8) = 0;
  }
  FUN_142085870(param_1,&local_78,L"menuTitle");
  if (local_78 != 0) {
    uVar4 = FUN_1420392d0(local_78,local_48,L"menuTitleShadow");
    FUN_142ede260(param_1 + 0x1b0,uVar4);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_40 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
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
    FUN_142ede330(param_1 + 0x198,&local_78);
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_70 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (lVar3 != 0) {
    lVar5 = UInputKeySelector::GetPrivateStaticClass();
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
      lVar5 = *(longlong *)(param_1 + 0x180);
      if (lVar5 != 0) {
        local_68 = lVar5;
        uVar4 = UBlendableInterface::GetPrivateStaticClass();
        local_60 = UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar4);
        if (*(longlong *)(lVar3 + 0x5b0) != 0) {
          FUN_142f05530(*(longlong *)(lVar3 + 0x5b0),&local_68,DAT_146b3d990);
        }
      }
      lVar5 = *(longlong *)(param_1 + 0x188);
      if (lVar5 != 0) {
        local_58 = lVar5;
        uVar4 = UBlendableInterface::GetPrivateStaticClass();
        local_50 = UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar4);
        if (*(longlong *)(lVar3 + 0x5b0) != 0) {
          FUN_142f05530(*(longlong *)(lVar3 + 0x5b0),&local_58,DAT_146b3d988);
        }
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x1a0) != 0) && (*(longlong *)(param_1 + 0x1a8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1a8) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      uVar4 = FUN_1404b03b0();
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x198,uVar4,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x1b8) != 0) && (*(longlong *)(param_1 + 0x1c0) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1c0) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      uVar4 = FUN_1404b03b0();
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x1b0,uVar4,1,0);
    }
  }
  return;
}



// FUNCTION 142ec5cc0 FUN_142ec5cc0 body=34 status=ok
// SIG undefined FUN_142ec5cc0(void)

void FUN_142ec5cc0(longlong param_1)

{
  FUN_142efb650();
  *(undefined1 *)(param_1 + 0x178) = 1;
  FUN_142eaff80(param_1);
  return;
}



// FUNCTION 142ec5cf0 FUN_142ec5cf0 body=201 status=ok
// SIG undefined FUN_142ec5cf0(void)

void FUN_142ec5cf0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142ef9e70();
  (**(code **)(*param_1 + 0x278))(param_1,1);
  FUN_142ed5d00(param_1,1);
  lVar3 = param_1[7];
  if (lVar3 != 0) {
    lVar2 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142ec5d5b;
  }
  lVar3 = 0;
LAB_142ec5d5b:
  param_1[0x34] = lVar3;
  if (lVar3 != 0) {
    lVar3 = FWeakObjectPtr::Get(lVar3 + 0x59c);
    if (lVar3 != 0) {
      lVar3 = FUN_140f141d0(param_1[0x34]);
      param_1[0x35] = lVar3;
      lVar3 = FWeakObjectPtr::Get(param_1[0x34] + 0x59c);
      lVar3 = FWeakObjectPtr::Get(lVar3 + 0x38);
      param_1[0x33] = lVar3;
    }
  }
  return;
}



// FUNCTION 142ec5dc0 FUN_142ec5dc0 body=219 status=ok
// SIG undefined FUN_142ec5dc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142ec5dc0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_142efbf70();
  if (cVar1 == '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146b3de20) {
      _Init_thread_header(&DAT_146b3de20);
      if (DAT_146b3de20 == -1) {
        DAT_146b3de08 = DAT_146b3e2b8;
        DAT_146b3de10 = DAT_146b3d9a8;
        _DAT_146b3de18 = DAT_146b3d9b0;
        _Init_thread_footer(&DAT_146b3de20);
      }
    }
    plVar2 = &DAT_146b3de08;
    while ((*(char *)((longlong)param_2 + 0xc) != '\0' || (*plVar2 != *param_2))) {
      plVar2 = plVar2 + 1;
      if (plVar2 == (longlong *)&DAT_146b3de20) {
        return 0;
      }
    }
    FUN_142ef6530(param_1 + -0x2b8);
  }
  return 1;
}



// FUNCTION 142ec5ea0 FUN_142ec5ea0 body=298 status=ok
// SIG undefined FUN_142ec5ea0(void)

undefined1 FUN_142ec5ea0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char *pcVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  uVar2 = FUN_142efbf70();
  lVar6 = *(longlong *)(param_1 + 8);
  if (lVar6 != 0) {
    lVar3 = FUN_142f16620();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142ec5f03;
  }
  lVar6 = 0;
LAB_142ec5f03:
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2b8 == *param_2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (((bVar1) && (lVar6 != 0)) && (*(char *)(lVar6 + 0x98) != '\0')) {
    FUN_142ef6530(param_1 + -0x2b8);
    pcVar5 = "Cancel";
  }
  else {
    if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2a0 == *param_2)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (((!bVar1) || (lVar6 == 0)) ||
       ((*(int *)(lVar6 + 0x90) != 0 || (*(char *)(lVar6 + 0x98) == '\0')))) {
      return uVar2;
    }
    FUN_142ef6530(param_1 + -0x2b8);
    pcVar5 = "Closed";
  }
  puVar4 = (undefined8 *)FName::FName(local_res8,pcVar5,1);
  FUN_142eb42f0(lVar6 + 0xa0,param_1 + -0x2b8,*puVar4);
  return 1;
}



// FUNCTION 142ec5fd0 FUN_142ec5fd0 body=91 status=ok
// SIG undefined FUN_142ec5fd0(void)

undefined1 FUN_142ec5fd0(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 local_res8 [8];
  
  uVar1 = FUN_142ec6030();
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2b8 == *param_2)) {
    local_res8[0] = 0x18;
    FUN_142eb06e0(param_1 + -0x4d8,local_res8,param_2);
  }
  return uVar1;
}



// FUNCTION 142ec6030 FUN_142ec6030 body=771 status=ok
// SIG undefined FUN_142ec6030(void)

undefined8 FUN_142ec6030(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 local_20;
  
  plVar7 = (longlong *)(param_1 + -0x4d8);
  (**(code **)(*plVar7 + 0x4b8))(plVar7);
  if ((*(longlong *)(param_1 + 0xd0) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x48) == 0)) {
    cVar2 = *(char *)((longlong)param_2 + 0xc);
    if ((cVar2 == '\0') && (DAT_146b3d900 == *param_2)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      if ((cVar2 == '\0') && (DAT_146b3d908 == *param_2)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        if ((cVar2 == '\0') && (DAT_146b3d910 == *param_2)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) {
          if ((cVar2 == '\0') && (DAT_146b3d918 == *param_2)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (!bVar1) goto LAB_142ec619f;
        }
      }
    }
    lVar6 = *(longlong *)(param_1 + 0x150);
    if (lVar6 != 0) {
      lVar4 = URemnantGameInstance::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (*(longlong *)(lVar6 + 0x2c8) != 0)) {
        puVar5 = (undefined8 *)
                 TScriptInterface<IBlendableInterface>::
                 TScriptInterface<IBlendableInterface><UMaterialInterface>(&local_28);
        if (*(longlong *)(param_1 + 0xd0) != 0) {
          FUN_142f0d400(*(longlong *)(param_1 + 0xd0),*puVar5,0);
        }
        (**(code **)(**(longlong **)(lVar6 + 0x2c8) + 0x2c0))
                  (*(longlong **)(lVar6 + 0x2c8),lVar6,1,0);
        goto LAB_142ec619f;
      }
    }
    lVar6 = *(longlong *)(param_1 + 0x150);
    if (lVar6 != 0) {
      UBlendableInterface::GetPrivateStaticClass();
      UObjectBaseUtility::GetInterfaceAddress(lVar6);
    }
    if (*(longlong *)(param_1 + 0xd0) != 0) {
      FUN_142f0d400(*(longlong *)(param_1 + 0xd0),lVar6,0);
    }
  }
LAB_142ec619f:
  if ((*(longlong *)(param_1 + 0xd0) == 0) || (cVar2 = FUN_142ef0210(), cVar2 == '\0')) {
    cVar2 = *(char *)((longlong)param_2 + 0xc);
    if ((cVar2 == '\0') && (DAT_146b3e2b8 == *param_2)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      if ((cVar2 == '\0') && (DAT_146b3daf0 == *param_2)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        return 0;
      }
    }
    if ((*(longlong *)(param_1 + 0x10) == 0) ||
       (*(char *)(*(longlong *)(param_1 + 0x10) + 0x34) == '\0')) {
      return 0;
    }
    if (1 < *(int *)(param_1 + 0x60)) {
      local_28 = 0;
      local_20 = 0;
      if (*(int *)(param_1 + 0x60) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = *(undefined2 **)(param_1 + 0x58);
      }
      lVar6 = *plVar7;
      puVar5 = (undefined8 *)FName::FName(local_res8,puVar8,1);
      (**(code **)(lVar6 + 0x4e8))(plVar7,*puVar5,&local_28);
      cVar2 = *(char *)((longlong)param_2 + 0xc);
    }
    if ((cVar2 == '\0') && (DAT_146b3daf0 == *param_2)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((bVar1) && (cVar2 = (**(code **)(*plVar7 + 0x530))(plVar7), cVar2 == '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    lVar6 = FWeakObjectPtr::Get(param_1 + 0xc4);
    if ((bVar1) && (lVar6 != 0)) {
      *(byte *)(lVar6 + 0xcc) = *(byte *)(lVar6 + 0xcc) | 8;
    }
    if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2b8 == *param_2)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (((bVar3) || (bVar1)) && (FUN_142eb3990(plVar7), bVar1)) {
      if (lVar6 != 0) {
        FUN_142ee3cb0(lVar6);
        *(byte *)(lVar6 + 0xcc) = *(byte *)(lVar6 + 0xcc) & 0xf7;
      }
      plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xb4);
      (**(code **)(*plVar7 + 0xf90))(plVar7,1);
    }
  }
  return 1;
}



// FUNCTION 142ec6340 FUN_142ec6340 body=187 status=ok
// SIG undefined FUN_142ec6340(void)

char FUN_142ec6340(longlong param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  
  cVar1 = FUN_142ec6030();
  if (cVar1 == '\0') {
    param_1 = param_1 + 0x1a8;
    cVar2 = FWeakObjectPtr::IsValid(param_1);
    if ((cVar2 != '\0') && (*(char *)((longlong)param_2 + 0xc) == '\0')) {
      if (DAT_146b3d988 == *param_2) {
        plVar3 = (longlong *)FWeakObjectPtr::Get(param_1);
        (**(code **)(*plVar3 + 0x570))(plVar3);
        return '\x01';
      }
      if (DAT_146b3d990 == *param_2) {
        plVar3 = (longlong *)FWeakObjectPtr::Get(param_1);
        (**(code **)(*plVar3 + 0x578))(plVar3);
        return '\x01';
      }
    }
  }
  return cVar1;
}



// FUNCTION 142ec6400 FUN_142ec6400 body=98 status=ok
// SIG undefined FUN_142ec6400(void)

undefined4 FUN_142ec6400(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x105) != '\0') {
    (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x3a8))
              ((longlong *)(param_1 + -0x4d8),*(undefined1 *)(param_1 + 0x104));
    if (*(char *)(param_1 + 0x105) != '\0') {
      *(undefined1 *)(param_1 + 0x105) = 0;
    }
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_142f0dee0(*(longlong *)(param_1 + 0xd8),0);
  }
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xb0) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 142ec6470 FUN_142ec6470 body=97 status=ok
// SIG undefined FUN_142ec6470(void)

undefined4 FUN_142ec6470(longlong param_1)

{
  undefined4 uVar1;
  byte local_res8 [32];
  
  if (local_res8 != (byte *)(param_1 + 0x104)) {
    *(byte *)(param_1 + 0x104) = (byte)(*(uint *)(param_1 + -0x498) >> 2) & 1;
    *(undefined1 *)(param_1 + 0x105) = 1;
  }
  (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x3a8))((longlong *)(param_1 + -0x4d8),0);
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_142f0dee0(*(longlong *)(param_1 + 0xd8),1);
  }
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xb0) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 142ec64e0 FUN_142ec64e0 body=608 status=ok
// SIG undefined FUN_142ec64e0(void)

void FUN_142ec64e0(longlong param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  char local_res10 [8];
  undefined **local_68;
  undefined1 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined **local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined2 local_20;
  
  plVar6 = (longlong *)(param_1 + -0x4d8);
  (**(code **)(*plVar6 + 0x4b8))(plVar6);
  LOCK();
  *(undefined4 *)(param_1 + 0xb0) = 1;
  UNLOCK();
  cVar2 = FUN_142ebd930(plVar6);
  if (((cVar2 != '\0') && (cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xb4), cVar2 != '\0')) &&
     (*(longlong *)(param_1 + 0x10) != 0)) {
    if (((*(uint *)(param_1 + -0x498) & 0x100) == 0) || (param_2 != '\x02')) {
      lVar4 = FWeakObjectPtr::Get(param_1 + 0xb4);
      *(uint *)(lVar4 + 0x6a8) = *(uint *)(lVar4 + 0x6a8) & 0xfffffffe;
      local_68 = &PTR_FUN_1445c4dd0;
      local_60 = 1;
      plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xb4);
      (**(code **)(*plVar6 + 0xcc0))(plVar6,&local_68);
      if ((param_2 == '\x01') &&
         ((*(longlong *)(param_1 + 0xd0) == 0 ||
          (*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x48) == 0)))) {
        lVar4 = *(longlong *)(param_1 + 0x150);
        if (lVar4 != 0) {
          lVar7 = URemnantGameInstance::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (*(longlong *)(lVar4 + 0x2c8) != 0)) {
            puVar8 = (undefined8 *)
                     TScriptInterface<IBlendableInterface>::
                     TScriptInterface<IBlendableInterface><UMaterialInterface>(local_58);
            if (*(longlong *)(param_1 + 0xd0) != 0) {
              FUN_142f0d400(*(longlong *)(param_1 + 0xd0),*puVar8,0);
            }
            (**(code **)(**(longlong **)(lVar4 + 0x2c8) + 0x2c0))
                      (*(longlong **)(lVar4 + 0x2c8),lVar4,1,0);
            goto LAB_142ec671c;
          }
        }
        puVar8 = (undefined8 *)
                 TScriptInterface<IBlendableInterface>::
                 TScriptInterface<IBlendableInterface><UMaterialInterface>
                           (local_48,*(undefined8 *)(param_1 + 0x150));
        if (*(longlong *)(param_1 + 0xd0) != 0) {
          FUN_142f0d400(*(longlong *)(param_1 + 0xd0),*puVar8,0);
        }
      }
    }
    else {
      lVar4 = FWeakObjectPtr::Get(param_1 + 0xb4);
      *(uint *)(lVar4 + 0x6a8) = *(uint *)(lVar4 + 0x6a8) | 1;
      local_38 = &PTR_FUN_1445c4dc0;
      local_30 = 0;
      uStack_28 = 0;
      local_20 = 0;
      uVar5 = (**(code **)(*plVar6 + 0x148))(plVar6);
      lVar4 = UWorld::GetGameViewport(uVar5);
      if ((lVar4 != 0) && (*(longlong **)(lVar4 + 0xb0) != (longlong *)0x0)) {
        iVar3 = (**(code **)(**(longlong **)(lVar4 + 0xb0) + 0xf8))();
        uVar9 = 0;
        if (iVar3 == 0) {
          uVar9 = 2;
        }
        local_20 = CONCAT11(local_20._1_1_,uVar9);
      }
      plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xb4);
      (**(code **)(*plVar6 + 0xcc0))(plVar6,&local_38);
      FUN_140e6b990(&local_38);
    }
  }
LAB_142ec671c:
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x88,local_res10);
  return;
}



// FUNCTION 142ec6740 FUN_142ec6740 body=615 status=ok
// SIG undefined FUN_142ec6740(void)

void FUN_142ec6740(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((0 < *(int *)(param_1 + 0x310)) && (param_2 != 0)) {
    iVar4 = *(int *)(param_2 + 0x2e0);
    if (-1 < iVar4) {
      plVar3 = (longlong *)(param_1 + 0x308);
      lVar9 = (longlong)*(int *)(param_1 + 0x310) * 0x38;
      if (iVar4 < *(int *)(lVar9 + -8 + *plVar3)) {
        *(int *)(lVar9 + -0x14 + *plVar3) = iVar4;
        iVar7 = *(int *)(param_1 + 0x310);
        puVar11 = (undefined8 *)((longlong)iVar4 * 0x38 + *(longlong *)(lVar9 + -0x10 + *plVar3));
        *(int *)(param_1 + 0x310) = iVar7 + 1;
        if (*(int *)(param_1 + 0x314) < iVar7 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar3,iVar7);
        }
        puVar8 = (undefined8 *)((longlong)iVar7 * 0x38 + *plVar3);
        *puVar8 = *puVar11;
        FText::FText(puVar8 + 1,puVar11 + 1);
        *(undefined1 *)(puVar8 + 4) = *(undefined1 *)(puVar11 + 4);
        *(undefined4 *)((longlong)puVar8 + 0x24) = *(undefined4 *)((longlong)puVar11 + 0x24);
        puVar8[5] = 0;
        FUN_142ea7950(puVar8 + 5,puVar11[5],*(undefined4 *)(puVar11 + 6),0,0);
        FUN_142eb4190(param_1 + 0x2e0,(longlong)(*(int *)(param_1 + 0x310) + -1) * 0x38 + *plVar3,
                      param_2,lVar9 + -0x38 + *plVar3);
        if ((*(int *)(param_1 + 0x310) != 0) &&
           (lVar9 = (longlong)*(int *)(param_1 + 0x310) * 0x38 + *plVar3,
           *(char *)(lVar9 + -0x18) == '\0')) {
          FText::FText(local_50,lVar9 + -0x30);
          local_38 = *(undefined1 *)(lVar9 + -0x18);
          local_34 = *(undefined4 *)(lVar9 + -0x14);
          local_30 = *(undefined8 *)(lVar9 + -0x10);
          *(undefined8 *)(lVar9 + -0x10) = 0;
          local_28 = *(undefined4 *)(lVar9 + -8);
          local_24 = *(undefined4 *)(lVar9 + -4);
          *(undefined8 *)(lVar9 + -8) = 0;
          iVar4 = *(int *)(param_1 + 0x310);
          lVar9 = *plVar3;
          lVar10 = (longlong)iVar4 * 0x38 + -0x38;
          FUN_142ea9b10(lVar9 + 0x28 + lVar10);
          plVar5 = *(longlong **)(lVar9 + 0x10 + lVar10);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            lVar9 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              iVar7 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          iVar7 = *(int *)(param_1 + 0x310);
          iVar6 = (iVar7 - (iVar4 + -1)) + -1;
          if (iVar6 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar3 + lVar10),(void *)((longlong)iVar4 * 0x38 + *plVar3),
                       (longlong)iVar6 * 0x38);
            iVar7 = *(int *)(param_1 + 0x310);
          }
          *(int *)(param_1 + 0x310) = iVar7 + -1;
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeShrink(plVar3);
          FUN_142ea9b10(&local_30);
          if (local_48 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_48 + 1;
            lVar9 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_48)(local_48);
              LOCK();
              piVar2 = (int *)((longlong)local_48 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*local_48 + 8))(local_48,1);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142ec69b0 FUN_142ec69b0 body=83 status=ok
// SIG undefined FUN_142ec69b0(void)

void FUN_142ec69b0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if ((0 < *(int *)(param_1 + 0x310)) && (param_2 != 0)) {
    iVar1 = *(int *)(param_2 + 0x2e0);
    lVar2 = *(longlong *)(param_1 + 0x308) + -0x38 + (longlong)*(int *)(param_1 + 0x310) * 0x38;
    if ((-1 < iVar1) && (iVar1 < *(int *)(lVar2 + 0x30))) {
      FUN_142eb4190(param_1 + 0x2d0,(longlong)iVar1 * 0x38 + *(longlong *)(lVar2 + 0x28),param_2);
      return;
    }
  }
  return;
}



// FUNCTION 142ec6a10 FUN_142ec6a10 body=1057 status=ok
// SIG undefined FUN_142ec6a10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ec6a10(longlong *param_1,longlong param_2)

{
  void **ppvVar1;
  void *_Src;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 local_res10;
  undefined4 local_res14;
  void *local_138;
  ulonglong local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong *local_118;
  uint local_110;
  char local_108;
  undefined7 uStack_107;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  uint local_e0;
  undefined1 local_d8;
  undefined7 uStack_d7;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  uint local_b0;
  int local_a8;
  undefined4 uStack_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_88;
  uint local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  plVar4 = (longlong *)0x0;
  local_b8 = (longlong *)0x0;
  local_c8 = 0xffffffffffffffff;
  uStack_c0 = 0xffffffffffffffff;
  local_b0 = 0;
  (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))
            (*(longlong **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),"keyCode",&local_c8,
             ((byte)*(undefined4 *)(param_2 + 0x18) & 0x8f) == 10);
  if (local_a8 == 0xd) {
    FUN_142eda580(param_1);
  }
  else if (local_a8 == 0x1b) {
    FUN_142eaf600(param_1);
  }
  else if (local_a8 == 0x2e) {
    (**(code **)(*param_1 + 0x338))(param_1,param_2);
  }
  else {
    local_98 = 0xffffffffffffffff;
    uStack_90 = 0xffffffffffffffff;
    local_88 = (longlong *)0x0;
    local_80 = 0;
    (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))
              (*(longlong **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),"charCode",&local_98,
               ((byte)*(undefined4 *)(param_2 + 0x18) & 0x8f) == 10);
    local_128 = 0xffffffffffffffff;
    uStack_120 = 0xffffffffffffffff;
    local_118 = (longlong *)0x0;
    local_110 = 0;
    (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))
              (*(longlong **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),"ctrlKey",&local_128,
               ((byte)*(undefined4 *)(param_2 + 0x18) & 0x8f) == 10);
    local_f8 = 0xffffffffffffffff;
    uStack_f0 = 0xffffffffffffffff;
    local_e8 = (longlong *)0x0;
    local_e0 = 0;
    (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))
              (*(longlong **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),"shiftKey",&local_f8,
               ((byte)*(undefined4 *)(param_2 + 0x18) & 0x8f) == 10);
    if ((((int)param_1[0x6e] != 0) && ((longlong *)param_1[0x6d] != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(*(longlong *)param_1[0x6d] + 0x18))(), cVar2 != '\0')) {
      if ((int)param_1[0x6e] != 0) {
        plVar4 = (longlong *)param_1[0x6d];
      }
      (**(code **)(*plVar4 + 0x38))(plVar4,param_1,local_a8,local_78,local_108,local_d8);
    }
    if ((((char)param_1[0x66] != '\0') && (local_108 != '\0')) && (local_a8 == 0x56)) {
      local_138 = (void *)0x0;
      local_130 = 0;
      FWindowsPlatformApplicationMisc::ClipboardPaste(&local_138);
      FString::TrimStartAndEndInline(&local_138);
      if (1 < (int)local_130) {
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
        local_68[0] = &LAB_142eb0b60;
        FUN_14204c280(local_68);
        if ((((int)param_1[0x76] == 0) || ((longlong *)param_1[0x75] == (longlong *)0x0)) ||
           (cVar2 = (**(code **)(*(longlong *)param_1[0x75] + 0x18))(), cVar2 == '\0')) {
          _Src = local_138;
          ppvVar1 = (void **)(param_1 + 99);
          if (ppvVar1 != &local_138) {
            lVar5 = (longlong)(int)local_130;
            *(int *)(param_1 + 100) = (int)local_130;
            if (((int)local_130 == 0) && (*(int *)((longlong)param_1 + 0x324) == 0)) {
              *(undefined4 *)((longlong)param_1 + 0x324) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar1,local_130 & 0xffffffff);
              _guard_xfg_dispatch_icall_nop(*ppvVar1,_Src,lVar5 * 2);
            }
          }
          plVar4 = (longlong *)param_1[0x49];
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x2a8))(plVar4,&local_138,1);
            FUN_142f10ae0(param_1[0x49],0);
            FUN_142f0de70(param_1[0x49],PTR_DAT_14673ca48);
          }
        }
        else if ((int)param_1[0x76] == 0) {
          (**(code **)(_DAT_00000000 + 0x38))(0,param_1,&local_138);
        }
        else {
          (**(code **)(*(longlong *)param_1[0x75] + 0x38))
                    ((longlong *)param_1[0x75],param_1,&local_138);
        }
      }
      if (local_138 != (void *)0x0) {
        FMemory::Free();
      }
    }
    if ((local_e0 >> 6 & 1) != 0) {
      (**(code **)(*local_e8 + 0x10))(local_e8,&local_f8,CONCAT71(uStack_d7,local_d8));
      local_e8 = (longlong *)0x0;
    }
    local_e0 = 0;
    if ((local_110 >> 6 & 1) != 0) {
      (**(code **)(*local_118 + 0x10))(local_118,&local_128,CONCAT71(uStack_107,local_108));
      local_118 = (longlong *)0x0;
    }
    local_110 = 0;
    if ((local_80 >> 6 & 1) != 0) {
      (**(code **)(*local_88 + 0x10))(local_88,&local_98,CONCAT44(uStack_74,local_78));
    }
  }
  if ((local_b0 >> 6 & 1) != 0) {
    (**(code **)(*local_b8 + 0x10))(local_b8,&local_c8,CONCAT44(uStack_a4,local_a8));
  }
  return;
}



// FUNCTION 142ec6e40 FUN_142ec6e40 body=272 status=ok
// SIG undefined FUN_142ec6e40(void)

void FUN_142ec6e40(longlong param_1,byte param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_58 [80];
  
  if (((((*(longlong *)(param_1 + 0x10) != 0) &&
        (cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xb4), cVar1 != '\0')) &&
       ((cVar1 = FUN_142ebd930(param_1 + -0x4d8), cVar1 != '\0' ||
        (*(char *)(param_1 + 0x107) != '\0')))) &&
      (*(char *)(*(longlong *)(param_1 + 0x10) + 0x31) != '\0')) &&
     (((cVar1 = FUN_142ebd930(param_1 + -0x4d8), cVar1 != '\0' ||
       (*(char *)(param_1 + 0x107) != '\0')) && (*(longlong *)(param_1 + 0xe8) != 0)))) {
    FUN_142ed2250(*(longlong *)(param_1 + 0xe8),param_2 ^ 1);
  }
  *(byte *)(param_1 + 0x106) = param_2;
  if (*(longlong *)(param_1 + 0x110) == 0) {
    puVar2 = (undefined8 *)FUN_142ed6760(param_1 + -0x4d8,local_58);
    uVar3 = 0;
    if (*(int *)(puVar2 + 8) != 0) {
      plVar4 = (longlong *)puVar2[6];
      if ((longlong *)puVar2[6] == (longlong *)0x0) {
        plVar4 = puVar2 + 2;
      }
      if (plVar4 != (longlong *)0x0) {
        uVar3 = (**(code **)(*plVar4 + 8))();
      }
    }
    (*(code *)*puVar2)(uVar3);
    if (*(int *)(puVar2 + 8) != 0) {
      plVar4 = (longlong *)puVar2[6];
      if ((longlong *)puVar2[6] == (longlong *)0x0) {
        plVar4 = puVar2 + 2;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (puVar2[6] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142ec6f60 FUN_142ec6f60 body=43 status=ok
// SIG undefined FUN_142ec6f60(void)

void FUN_142ec6f60(longlong param_1)

{
  FUN_142efc310();
  if (*(char *)(param_1 + 0x38) != '\0') {
    FUN_142ef6530(param_1 + -0x2b8);
    return;
  }
  return;
}



// FUNCTION 142ec6f90 FUN_142ec6f90 body=613 status=ok
// SIG undefined FUN_142ec6f90(void)

ulonglong FUN_142ec6f90(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 *local_108 [2];
  undefined1 local_f8 [32];
  undefined8 local_d8;
  undefined4 local_c8;
  code *local_b8 [2];
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined4 local_78;
  undefined1 local_68 [80];
  
  lVar2 = param_1 + -0x4d8;
  puVar8 = (undefined8 *)FUN_142ed6760(lVar2,local_68);
  plVar12 = (longlong *)0x0;
  plVar9 = plVar12;
  if (*(int *)(puVar8 + 8) != 0) {
    plVar11 = (longlong *)puVar8[6];
    if ((longlong *)puVar8[6] == (longlong *)0x0) {
      plVar11 = puVar8 + 2;
    }
    if (plVar11 != (longlong *)0x0) {
      plVar9 = (longlong *)(**(code **)(*plVar11 + 8))();
    }
  }
  (*(code *)*puVar8)(plVar9);
  if (*(int *)(puVar8 + 8) != 0) {
    plVar9 = (longlong *)puVar8[6];
    if ((longlong *)puVar8[6] == (longlong *)0x0) {
      plVar9 = puVar8 + 2;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (puVar8[6] != 0) {
    FMemory::Free();
  }
  cVar7 = FWeakObjectPtr::IsValid(param_1 + 0xb4);
  if (((cVar7 != '\0') && (*(longlong *)(param_1 + 0x10) != 0)) &&
     (cVar7 = FUN_142eb6ef0(param_1), (byte)(cVar7 - 1U) < 4)) {
    FUN_142eaf7c0(lVar2,*(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x31));
  }
  LOCK();
  uVar3 = *(uint *)(param_1 + 0x15c);
  *(uint *)(param_1 + 0x15c) = 1;
  uVar10 = (ulonglong)uVar3;
  UNLOCK();
  if ((*(longlong *)(param_1 + 0xd8) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0xd8) + 0xa2) != '\0')) {
    local_128 = 0xffffffff;
    FUN_14170c210(&local_128);
    local_124 = local_128;
    local_128 = 0xffffffff;
    FUN_1416f8340(0xffffffff);
    puVar8 = (undefined8 *)FUN_140ad4c90(lVar2,local_120);
    uVar5 = *puVar8;
    plVar9 = (longlong *)puVar8[1];
    puVar8[1] = 0;
    *puVar8 = 0;
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_118 + 1;
      lVar6 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar1 = (int *)((longlong)local_118 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_118 + 8))(local_118,1);
        }
      }
    }
    local_d8 = 0;
    local_c8 = 0;
    puVar8 = (undefined8 *)FUN_140438ef0(0x18,local_f8);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_FUN_14461b758;
      puVar8[1] = uVar5;
      puVar8[2] = plVar9;
      plVar9 = plVar12;
    }
    local_88 = 0;
    local_108[0] = &LAB_140f26c30;
    local_78 = 0;
    puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_FUN_1444f8758;
      *(undefined4 *)(puVar8 + 1) = local_124;
      local_124 = 0xffffffff;
    }
    local_b8[0] = FUN_142eb0b70;
    FUN_14208c800(lVar2,local_b8,local_108);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar9 + 1;
      lVar2 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    uVar10 = FUN_1416f8340(local_124);
  }
  return uVar10;
}



// FUNCTION 142ec7200 FUN_142ec7200 body=276 status=ok
// SIG undefined FUN_142ec7200(void)

void FUN_142ec7200(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  FUN_142ec6f90();
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x1a8);
  if (((cVar4 != '\0') || (cVar4 = FWeakObjectPtr::IsValid(param_1 + 0xc4), cVar4 == '\0')) ||
     (lVar5 = FWeakObjectPtr::Get(param_1 + 0xc4), *(int *)(lVar5 + 0x48) < 2)) goto LAB_142ec72fc;
  lVar5 = FWeakObjectPtr::Get(param_1 + 0xc4);
  iVar1 = *(int *)(lVar5 + 0x48);
  lVar5 = FWeakObjectPtr::Get(param_1 + 0xc4);
  iVar7 = iVar1 + -2;
  if ((iVar7 < 0) || (*(int *)(lVar5 + 0x48) <= iVar7)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((bVar3) &&
      (plVar2 = *(longlong **)(*(longlong *)(lVar5 + 0x40) + -0x10 + (longlong)iVar1 * 8),
      plVar2 != (longlong *)0x0)) && (lVar5 = (**(code **)(*plVar2 + 0x278))(), lVar5 != 0)) {
    lVar6 = USoUIInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_142ec72e1;
  }
  else {
LAB_142ec72e1:
    lVar5 = 0;
  }
  FWeakObjectPtr::operator=(param_1 + 0x1a8,lVar5);
LAB_142ec72fc:
  FUN_142ebe2f0(param_1 + -0x4d8,1);
  return;
}



// FUNCTION 142ec7320 FUN_142ec7320 body=100 status=ok
// SIG undefined FUN_142ec7320(void)

void FUN_142ec7320(longlong param_1)

{
  longlong lVar1;
  
  FUN_142ec7390();
  if (*(longlong *)(param_1 + -0x220) != 0) {
    FUN_142f06340(*(longlong *)(param_1 + -0x220),param_1 + 0x1d8);
    FUN_142f06340(*(undefined8 *)(param_1 + -0x220),param_1 + 0x1e0);
  }
  lVar1 = FUN_142eb7f00(param_1 + -0x4d8);
  if (lVar1 != 0) {
    FUN_142f06340(lVar1,param_1 + 0x1e8);
    return;
  }
  return;
}



// FUNCTION 142ec7390 FUN_142ec7390 body=486 status=ok
// SIG undefined FUN_142ec7390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ec7390(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined1 auStack_108 [32];
  undefined4 local_e8 [2];
  undefined **local_e0;
  undefined1 local_d8;
  undefined1 local_c8 [80];
  code *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  *(uint *)(param_1 + -0x498) = *(uint *)(param_1 + -0x498) & 0xfffffeff;
  lVar1 = param_1 + -0x4d8;
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xb4);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0xb4);
    *(uint *)(lVar3 + 0x6a8) = *(uint *)(lVar3 + 0x6a8) & 0xfffffffe;
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
  if (cVar2 != '\0') {
    uVar4 = FWeakObjectPtr::Get(param_1 + 0xc4);
    FUN_142f0b330(uVar4,0);
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xb4);
  if (cVar2 != '\0') {
    local_d8 = 1;
    local_e0 = &PTR_FUN_1445c4dd0;
    plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xb4);
    (**(code **)(*plVar5 + 0xcc0))(plVar5,&local_e0);
  }
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = lVar1;
    *puVar6 = &PTR_FUN_143f77b70;
  }
  local_78[0] = FUN_142eb0850;
  FUN_1420849a0(lVar1,local_c8,local_78);
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
  FUN_14208c4f0(lVar1,local_c8);
  local_e8[0] = 0xffffffff;
  uVar7 = 0xffffffff;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_14170c210(local_e8);
    uVar7 = local_e8[0];
  }
  local_e8[0] = 0xffffffff;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_1444f8758;
    *(undefined4 *)(puVar6 + 1) = uVar7;
    uVar7 = 0xffffffff;
  }
  local_78[0] = FUN_142eb0d40;
  FUN_1416f8340(uVar7);
  FUN_1416f8340(local_e8[0]);
  FUN_14208c4f0(lVar1,local_78);
  return;
}



// FUNCTION 142ec7580 FUN_142ec7580 body=33 status=ok
// SIG undefined FUN_142ec7580(void)

void FUN_142ec7580(longlong param_1)

{
  FUN_142ec7390();
  FUN_142ebe2f0(param_1 + -0x4d8,0);
  return;
}



// FUNCTION 142ec75b0 FUN_142ec75b0 body=60 status=ok
// SIG undefined FUN_142ec75b0(void)

void FUN_142ec75b0(longlong param_1)

{
  longlong lVar1;
  
  FUN_142efc5d0();
  lVar1 = *(longlong *)(param_1 + 0x110);
  if (lVar1 != 0) {
    FWeakObjectPtr::operator=(lVar1 + 0x898,0);
    *(undefined8 *)(lVar1 + 0x8a0) = 0;
  }
  return;
}



// FUNCTION 142ec75f0 FUN_142ec75f0 body=218 status=ok
// SIG undefined FUN_142ec75f0(void)

void FUN_142ec75f0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if ((param_1[2] != 0) && (*(longlong *)(param_1[2] + 0x98) != 0)) {
    uVar2 = FWeakObjectPtr::Get((longlong)param_1 + 0xb4);
    FUN_142f00490(uVar2,*(undefined8 *)(param_1[2] + 0x98));
  }
  *(undefined1 *)(param_1 + -3) = 0;
  cVar1 = (**(code **)(*param_1 + 0x98))(param_1);
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142ec764a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xa0))(param_1);
    return;
  }
  if (param_1[0x1b] != 0) {
    FUN_142ee3e70();
    local_18 = 0;
    uStack_10 = 0;
    FUN_142f0dc90(param_1[0x1b],&local_18);
  }
  param_1[0x1b] = 0;
  if (param_1[0x1a] != 0) {
    FUN_142f0d400(param_1[0x1a],0,0);
    FUN_142ee8600(param_1[0x1a]);
  }
  param_1[0x1a] = 0;
                    /* WARNING: Could not recover jumptable at 0x000142ec76c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[-0x9b] + 0x280))();
  return;
}



// FUNCTION 142ec76d0 FUN_142ec76d0 body=425 status=ok
// SIG undefined FUN_142ec76d0(void)

void FUN_142ec76d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  lVar1 = (longlong)*(int *)(param_1 + 0xb8);
  iVar5 = 0;
  if (*(int *)(param_1 + 0xb8) != 0) {
    iVar5 = 0;
    bVar7 = **(longlong **)(param_1 + 0xb0) != param_2;
    lVar3 = 0;
    iVar6 = 0;
    do {
      lVar3 = lVar3 + 1;
      iVar4 = iVar6 + 1;
      if (lVar3 < lVar1) {
        plVar2 = (longlong *)(*(longlong *)(param_1 + 0xb0) + lVar3 * 8);
        do {
          if (bVar7 != (*plVar2 != param_2)) break;
          iVar4 = iVar4 + 1;
          lVar3 = lVar3 + 1;
          plVar2 = plVar2 + 1;
        } while (lVar3 < lVar1);
      }
      if (bVar7 != false) {
        if (iVar5 != iVar6) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar5 * 8),
                     (void *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar6 * 8),
                     (longlong)(iVar4 - iVar6) << 3);
        }
        iVar5 = iVar5 + (iVar4 - iVar6);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar6 = iVar4;
    } while (lVar3 < lVar1);
    *(int *)(param_1 + 0xb8) = iVar5;
  }
  if (iVar5 != 0) {
    iVar6 = 0;
    lVar3 = (longlong)iVar5;
    bVar7 = **(longlong **)(param_1 + 0xb0) != 0;
    lVar1 = 0;
    iVar5 = 0;
    do {
      lVar1 = lVar1 + 1;
      iVar4 = iVar5 + 1;
      if (lVar1 < lVar3) {
        plVar2 = (longlong *)(*(longlong *)(param_1 + 0xb0) + lVar1 * 8);
        do {
          if (bVar7 != (*plVar2 != 0)) break;
          iVar4 = iVar4 + 1;
          lVar1 = lVar1 + 1;
          plVar2 = plVar2 + 1;
        } while (lVar1 < lVar3);
      }
      if (bVar7 != false) {
        if (iVar6 != iVar5) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar6 * 8),
                     (void *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar5 * 8),
                     (longlong)(iVar4 - iVar5) << 3);
        }
        iVar6 = iVar6 + (iVar4 - iVar5);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar5 = iVar4;
    } while (lVar1 < lVar3);
    *(int *)(param_1 + 0xb8) = iVar6;
  }
  if (*(int *)(param_1 + 0xb8) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x4c) = 0;
  }
  return;
}



// FUNCTION 142ec7880 FUN_142ec7880 body=207 status=ok
// SIG undefined FUN_142ec7880(void)

void FUN_142ec7880(longlong param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  longlong local_res10;
  
  FUN_142efc880();
  if (*(longlong *)(param_1 + 0x50) != 0) {
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnChoiceClicked",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res10,pwVar3 + 2,1);
    lVar1 = *(longlong *)(param_1 + 0x50);
    FWeakObjectPtr::operator=(lVar1 + 400,param_1 + -0x2b8);
    *(longlong *)(lVar1 + 0x198) = local_res10;
    if ((local_res10 != 0) && (lVar5 = FWeakObjectPtr::Get(lVar1 + 400), lVar5 != 0)) {
      UObject::FindFunction(lVar5,*(undefined8 *)(lVar1 + 0x198));
    }
  }
  return;
}



// FUNCTION 142ec7950 FUN_142ec7950 body=1114 status=ok
// SIG undefined FUN_142ec7950(void)

void FUN_142ec7950(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong *plVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  undefined8 uVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  wchar_t *pwVar14;
  uint uVar15;
  longlong local_res10;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  longlong local_68;
  wchar_t *local_60;
  undefined1 local_58 [32];
  
  pwVar14 = (wchar_t *)0x0;
  if ((0 < *(int *)(param_1 + 0x70)) && (*(longlong *)(param_1 + 8) != 0)) {
    pwVar3 = (wchar_t *)
             FUN_1417987a0(*(longlong *)(param_1 + 8),param_1 + -0x2b8,0,0xefffffff,0,0,0xff800000);
    if (pwVar3 == (wchar_t *)0x0) {
LAB_142ec79ed:
      pwVar3 = pwVar14;
    }
    else {
      lVar4 = FUN_142f38260();
      if ((*(int *)(*(longlong *)(pwVar3 + 8) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(pwVar3 + 8) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
          != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_142ec79ed;
    }
    *(wchar_t **)(param_1 + 8) = pwVar3;
    if (pwVar3 == (wchar_t *)0x0) {
LAB_142ec7a2f:
      pwVar3 = pwVar14;
    }
    else {
      lVar4 = FUN_142f16d60();
      if ((*(int *)(*(longlong *)(pwVar3 + 8) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(pwVar3 + 8) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
          != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_142ec7a2f;
    }
    iVar12 = *(int *)(pwVar3 + 0x30) + -1;
    if (-1 < iVar12) {
      lVar4 = (longlong)iVar12 * 0x30;
      do {
        plVar5 = *(longlong **)(param_1 + 0x68);
        plVar13 = plVar5 + *(int *)(param_1 + 0x70);
        if (plVar5 != plVar13) {
          do {
            if (*plVar5 == *(longlong *)(lVar4 + *(longlong *)(pwVar3 + 0x2c))) {
              FUN_142ed0aa0(pwVar3 + 0x2c,iVar12,1,1);
              break;
            }
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar13);
        }
        lVar4 = lVar4 + -0x30;
        iVar12 = iVar12 + -1;
      } while (-1 < iVar12);
    }
  }
  FUN_142efc680(param_1);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGbxDebugMenu::OnCloseClicked",L"::");
    pwVar3 = pwVar14;
    while (pwVar8 = pwVar6, pwVar8 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar8 + 1,L"::");
      pwVar3 = pwVar8;
    }
    FName::FName(&local_res10,pwVar3 + 2,1);
    lVar7 = local_res10;
    lVar4 = *(longlong *)(param_1 + 0x58);
    plVar13 = (longlong *)(lVar4 + 0x3c0);
    FWeakObjectPtr::operator=(&local_a8,0);
    local_a0 = 0;
    FWeakObjectPtr::operator=(&local_a8,param_1 + -0x2b8);
    local_a0 = lVar7;
    if ((lVar7 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_a8), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_a0);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar13);
    iVar12 = *(int *)(lVar4 + 0x3c8);
    lVar7 = (longlong)iVar12;
    *(int *)(lVar4 + 0x3c8) = iVar12 + 1;
    if (*(int *)(lVar4 + 0x3cc) < iVar12 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar12);
    }
    lVar4 = *plVar13;
    *(undefined4 *)(lVar4 + lVar7 * 0x10) = local_a8;
    *(undefined4 *)(lVar4 + 4 + lVar7 * 0x10) = local_a4;
    *(longlong *)(lVar4 + 8 + lVar7 * 0x10) = local_a0;
  }
  pwVar3 = *(wchar_t **)(param_1 + 8);
  if (pwVar3 != (wchar_t *)0x0) {
    lVar4 = FUN_142f16d60();
    if ((*(int *)(*(longlong *)(pwVar3 + 8) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar3 + 8) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_142ec7bc3;
  }
  pwVar3 = pwVar14;
LAB_142ec7bc3:
  if (((*(longlong *)(param_1 + 0x50) != 0) && (pwVar3 != (wchar_t *)0x0)) &&
     (0 < *(int *)(pwVar3 + 0x30))) {
    FWeakObjectPtr::operator=(&local_a8,0);
    local_a0 = 0;
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UGbxDebugMenu::OnCategorySelected",L"::");
    pwVar6 = pwVar14;
    while (pwVar10 = pwVar8, pwVar10 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar10 + 1,L"::");
      pwVar6 = pwVar10;
    }
    FName::FName(&local_res10,pwVar6 + 2,1);
    FWeakObjectPtr::operator=(&local_a8,param_1 + -0x2b8);
    local_a0 = local_res10;
    if ((local_res10 != 0) && (lVar4 = FWeakObjectPtr::Get(&local_a8), lVar4 != 0)) {
      UObject::FindFunction(lVar4,local_a0);
    }
    FWeakObjectPtr::operator=(&local_98,0);
    local_90 = 0;
    pwVar6 = pwVar14;
    pwVar8 = pwVar14;
    if (0 < *(int *)(pwVar3 + 0x30)) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x50);
        lVar7 = *(longlong *)(pwVar3 + 0x2c);
        local_88 = local_a8;
        local_84 = local_a4;
        local_80 = local_a0;
        local_78 = local_98;
        local_74 = local_94;
        local_70 = local_90;
        local_60 = (wchar_t *)0x0;
        pwVar10 = pwVar14;
        local_68 = lVar4;
        if (lVar4 != 0) {
          uVar9 = FUN_142f2b0d0();
          pwVar10 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar9);
        }
        local_60 = pwVar10;
        uVar9 = FText::FText(local_58,(longlong)pwVar6 + lVar7 + 8);
        lVar4 = FUN_142ee7ec0(&local_68,*(undefined8 *)(param_1 + 0x10),uVar9,&local_78,&local_88);
        if ((lVar4 != 0) &&
           (*(undefined1 *)(lVar4 + 0x231) = 2, *(longlong *)((longlong)pwVar6 + lVar7 + 0x20) == 0)
           ) {
          if (*(longlong *)((longlong)pwVar6 + lVar7 + 0x28) != 0) {
            lVar11 = FUN_142f32150();
            lVar7 = *(longlong *)((longlong)pwVar6 + lVar7 + 0x28);
            for (lVar1 = lVar7; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
              if (lVar1 == lVar11) {
                if (lVar7 != 0) goto LAB_142ec7d74;
                break;
              }
            }
          }
          (**(code **)(*(longlong *)(lVar4 + 0x208) + 0x38))((longlong *)(lVar4 + 0x208),0);
        }
LAB_142ec7d74:
        uVar15 = (int)pwVar8 + 1;
        pwVar6 = pwVar6 + 0x18;
        pwVar8 = (wchar_t *)(ulonglong)uVar15;
      } while ((int)uVar15 < *(int *)(pwVar3 + 0x30));
    }
  }
  FUN_142ed5130(param_1 + -0x2b8);
  return;
}



// FUNCTION 142ec7db0 FUN_142ec7db0 body=314 status=ok
// SIG undefined FUN_142ec7db0(void)

void FUN_142ec7db0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x48);
    if (1 < iVar1) {
      if ((iVar1 + -2 < 0) || (iVar1 <= iVar1 + -2)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (((bVar3) &&
          (plVar2 = *(longlong **)(*(longlong *)(lVar4 + 0x40) + -0x10 + (longlong)iVar1 * 8),
          plVar2 != (longlong *)0x0)) && (lVar4 = (**(code **)(*plVar2 + 0x278))(), lVar4 != 0)) {
        lVar5 = URemnantMapGenComponent::StaticClass();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (((bVar3) && (*(longlong *)(lVar4 + 0x318) != 0)) &&
           (lVar4 = FUN_1420def40(*(longlong *)(lVar4 + 0x318),param_1 + -0x2b8), lVar4 != 0)) {
          lVar5 = UCanvasPanelSlot::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            local_18 = 0;
            uStack_10 = 0x3f8000003f800000;
            UCanvasPanelSlot::SetAnchors(lVar4,&local_18);
            local_18 = 0;
            uStack_10 = 0;
            UCanvasPanelSlot::SetOffsets(lVar4,&local_18);
          }
        }
      }
    }
  }
  FUN_142efc7c0(param_1);
  return;
}



// FUNCTION 142ec7ef0 FUN_142ec7ef0 body=1358 status=ok
// SIG undefined FUN_142ec7ef0(void)

void FUN_142ec7ef0(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  longlong *plVar7;
  longlong local_res10;
  longlong local_c8 [2];
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  longlong local_78;
  wchar_t *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [48];
  
  FUN_142ec7db0();
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FWeakObjectPtr::operator=(&local_88,0);
    pwVar6 = (wchar_t *)0x0;
    local_80 = 0;
    FWeakObjectPtr::operator=(&local_b8,0);
    local_b0 = 0;
    pwVar2 = _guard_xfg_dispatch_icall_nop(L"&UGbxDebugRumbleMenu::OnSliderValueChanged",L"::");
    pwVar5 = pwVar6;
    while (pwVar1 = pwVar2, pwVar1 != (wchar_t *)0x0) {
      pwVar2 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar5 = pwVar1;
    }
    FName::FName(&local_res10,pwVar5 + 2,1);
    FWeakObjectPtr::operator=(&local_b8,param_1 + -0x2b8);
    local_b0 = local_res10;
    if ((local_res10 != 0) && (lVar3 = FWeakObjectPtr::Get(&local_b8), lVar3 != 0)) {
      UObject::FindFunction(lVar3,local_b0);
    }
    local_c8[0] = 0;
    local_c8[1] = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8,0);
    FGenericPlatformString::Memcpy(local_c8[0],L"Left Large",0x16);
    lVar3 = *(longlong *)(param_1 + 0x48);
    local_a8 = local_88;
    local_a4 = local_84;
    local_a0 = local_80;
    local_98 = local_b8;
    local_94 = local_b4;
    local_90 = local_b0;
    local_70 = pwVar6;
    local_78 = lVar3;
    if (lVar3 != 0) {
      uVar4 = FUN_142f2b0d0();
      local_70 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
    }
    uVar4 = FText::FromString(&local_68,local_c8);
    uVar4 = FUN_142ee7a90(&local_78,*(undefined8 *)(param_1 + 0x10),uVar4,
                          *(undefined4 *)(param_1 + 0x70),0,0x3f800000,
                          *(undefined4 *)(param_1 + 0x40),&local_98,&local_a8);
    *(undefined8 *)(param_1 + 0x50) = uVar4;
    if (local_c8[0] != 0) {
      FMemory::Free();
    }
    local_c8[0] = 0;
    local_c8[1] = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8,0);
    FGenericPlatformString::Memcpy(local_c8[0],L"Left Small",0x16);
    lVar3 = *(longlong *)(param_1 + 0x48);
    local_98 = local_88;
    local_94 = local_84;
    local_90 = local_80;
    local_a8 = local_b8;
    local_a4 = local_b4;
    local_a0 = local_b0;
    pwVar5 = pwVar6;
    local_78 = lVar3;
    if (lVar3 != 0) {
      uVar4 = FUN_142f2b0d0();
      pwVar5 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
    }
    local_70 = pwVar5;
    uVar4 = FText::FromString(&local_68,local_c8);
    uVar4 = FUN_142ee7a90(&local_78,*(undefined8 *)(param_1 + 0x10),uVar4,
                          *(undefined4 *)(param_1 + 0x74),0,0x3f800000,
                          *(undefined4 *)(param_1 + 0x40),&local_a8,&local_98);
    *(undefined8 *)(param_1 + 0x58) = uVar4;
    if (local_c8[0] != 0) {
      FMemory::Free();
    }
    local_c8[0] = 0;
    local_c8[1] = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8,0);
    FGenericPlatformString::Memcpy(local_c8[0],L"Right Large",0x18);
    lVar3 = *(longlong *)(param_1 + 0x48);
    local_98 = local_88;
    local_94 = local_84;
    local_90 = local_80;
    local_a8 = local_b8;
    local_a4 = local_b4;
    local_a0 = local_b0;
    pwVar5 = pwVar6;
    local_78 = lVar3;
    if (lVar3 != 0) {
      uVar4 = FUN_142f2b0d0();
      pwVar5 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
    }
    local_70 = pwVar5;
    uVar4 = FText::FromString(&local_68,local_c8);
    uVar4 = FUN_142ee7a90(&local_78,*(undefined8 *)(param_1 + 0x10),uVar4,
                          *(undefined4 *)(param_1 + 0x78),0,0x3f800000,
                          *(undefined4 *)(param_1 + 0x40),&local_a8,&local_98);
    *(undefined8 *)(param_1 + 0x60) = uVar4;
    if (local_c8[0] != 0) {
      FMemory::Free();
    }
    local_c8[0] = 0;
    local_c8[1] = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8,0);
    FGenericPlatformString::Memcpy(local_c8[0],L"Right Small",0x18);
    lVar3 = *(longlong *)(param_1 + 0x48);
    local_98 = local_88;
    local_94 = local_84;
    local_90 = local_80;
    local_a8 = local_b8;
    local_a4 = local_b4;
    local_a0 = local_b0;
    local_78 = lVar3;
    if (lVar3 != 0) {
      uVar4 = FUN_142f2b0d0();
      pwVar6 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
    }
    local_70 = pwVar6;
    uVar4 = FText::FromString(&local_68,local_c8);
    uVar4 = FUN_142ee7a90(&local_78,*(undefined8 *)(param_1 + 0x10),uVar4,
                          *(undefined4 *)(param_1 + 0x7c),0,0x3f800000,
                          *(undefined4 *)(param_1 + 0x40),&local_a8,&local_98);
    *(undefined8 *)(param_1 + 0x68) = uVar4;
    if (local_c8[0] != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      local_68 = 0xffffffff;
      local_64 = 0;
      FWeakObjectPtr::operator=(local_60,0);
      FWeakObjectPtr::operator=(local_58,0);
      FWeakObjectPtr::operator=(local_50,0);
      FWeakObjectPtr::operator=(local_48,0);
      FWeakObjectPtr::operator=(&local_68,*(undefined8 *)(param_1 + 0x48));
      FUN_142f0d310(*(undefined8 *)(param_1 + 0x20),&local_68);
      FUN_142f0d3e0(param_1 + -0x2b8,*(undefined8 *)(param_1 + 0x48),0);
    }
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x48) + 0x860);
    (**(code **)(*plVar7 + 0x18))(plVar7,0,0,0);
  }
  return;
}



// FUNCTION 142ec8440 FUN_142ec8440 body=338 status=ok
// SIG undefined FUN_142ec8440(void)

void FUN_142ec8440(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  longlong local_res10;
  
  FUN_142efc880();
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    lVar5 = FUN_142f16620();
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
      FText::operator=(param_1 + 0x40,lVar1 + 0x58);
      FText::operator=(param_1 + 0x58,lVar1 + 0x70);
      FUN_142f18f50(param_1 + -0x2b8,lVar1 + 0x58);
      FUN_142ecf300(param_1 + -0x2b8);
    }
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGbxDialogBox::OnChoiceClicked",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    lVar1 = *(longlong *)(param_1 + 0x110);
    FWeakObjectPtr::operator=(lVar1 + 0x898,param_1 + -0x2b8);
    *(longlong *)(lVar1 + 0x8a0) = local_res10;
    if ((local_res10 != 0) && (lVar5 = FWeakObjectPtr::Get(lVar1 + 0x898), lVar5 != 0)) {
      UObject::FindFunction(lVar5,*(undefined8 *)(lVar1 + 0x8a0));
    }
  }
  return;
}



// FUNCTION 142ec85a0 FUN_142ec85a0 body=176 status=ok
// SIG undefined FUN_142ec85a0(void)

void FUN_142ec85a0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  FUN_142eb7010();
  *(undefined1 *)(param_1 + -0x44f) = *(undefined1 *)(param_1 + 0xcc);
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x98) != 0)) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0xb4);
    FUN_142f02570(uVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x98),0);
  }
  if (*(char *)(param_1 + 0x108) == '\0') {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xb4);
    if (cVar1 != '\0') {
      uVar2 = FWeakObjectPtr::Get(param_1 + 0xb4);
      FUN_142ed95f0(param_1 + -0x4d8,uVar2,0);
    }
    *(uint *)(param_1 + -0x498) = *(uint *)(param_1 + -0x498) & 0xffffe87f;
  }
  *(undefined1 *)(param_1 + -0x18) = 1;
  FUN_142eb9770(param_1 + -0x4d8);
  return;
}



// FUNCTION 142ec8650 FUN_142ec8650 body=812 status=ok
// SIG undefined FUN_142ec8650(void)

void FUN_142ec8650(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 local_res8;
  longlong local_res10;
  
  FUN_142ec85a0();
  plVar1 = (longlong *)(param_1 + -0x4d8);
  (**(code **)(*plVar1 + 0x568))(plVar1);
  lVar8 = *(longlong *)(param_1 + 0x10);
  if (lVar8 != 0) {
    lVar4 = FUN_142f227c0();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(lVar8 + 200);
      (**(code **)(*plVar1 + 0x588))(plVar1,&local_res10);
      lVar4 = *(longlong *)(param_1 + 0x10);
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
          plVar10 = *(longlong **)(lVar4 + 0xc0);
          plVar6 = plVar10 + (longlong)*(int *)(lVar4 + 200) * 0xb;
          for (; plVar10 != plVar6; plVar10 = plVar10 + 0xb) {
            if (*plVar10 == local_res10) {
              if (plVar10 == (longlong *)0x0) {
                return;
              }
              cVar3 = (**(code **)(*plVar1 + 0x580))(plVar1,plVar10);
              if (cVar3 == '\0') {
                plVar6 = *(longlong **)(lVar8 + 0xc0);
                plVar10 = (longlong *)0x0;
                lVar4 = 0;
                plVar9 = plVar6 + (longlong)*(int *)(lVar8 + 200) * 0xb;
                local_res8 = 0;
                for (; plVar6 != plVar9; plVar6 = plVar6 + 0xb) {
                  if (((int)lVar4 == 0) &&
                     (local_res8._4_4_ = (int)((ulonglong)local_res8 >> 0x20), local_res8._4_4_ == 0
                     )) {
                    bVar2 = true;
                  }
                  else {
                    bVar2 = false;
                  }
                  if ((bVar2) &&
                     (cVar3 = (**(code **)(*plVar1 + 0x580))(plVar1,plVar6), cVar3 != '\0')) {
                    lVar4 = *plVar6;
                    plVar10 = plVar6;
                    local_res8 = lVar4;
                  }
                }
              }
              else {
                plVar6 = (longlong *)(**(code **)(*plVar1 + 0x5a0))(plVar1,&local_res8,plVar10);
                lVar4 = *plVar6;
              }
              if (lVar4 != local_res10) {
                lVar8 = *(longlong *)(param_1 + 0x10);
                if (lVar8 == 0) {
                  return;
                }
                lVar5 = FUN_142f227c0();
                if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (!bVar2) {
                  return;
                }
                plVar10 = *(longlong **)(lVar8 + 0xc0);
                plVar6 = plVar10 + (longlong)*(int *)(lVar8 + 200) * 0xb;
                while( true ) {
                  if (plVar10 == plVar6) {
                    return;
                  }
                  if (*plVar10 == lVar4) break;
                  plVar10 = plVar10 + 0xb;
                }
              }
              if (plVar10 == (longlong *)0x0) {
                return;
              }
              lVar8 = plVar10[7];
              if (lVar8 == 0) {
                return;
              }
              *(longlong *)(param_1 + 0x1b0) = *plVar10;
              (**(code **)(*plVar1 + 0x4b8))(plVar1,&local_res8);
              cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
              if (cVar3 != '\0') {
                uVar7 = FWeakObjectPtr::Get(param_1 + 0xc4);
                lVar8 = FUN_142f02280(uVar7,lVar8);
                if (lVar8 != 0) {
                  lVar4 = AGShrineUsable::GetPrivateStaticClass();
                  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  if (bVar2) goto LAB_142ec8922;
                }
              }
              lVar8 = 0;
LAB_142ec8922:
              FWeakObjectPtr::operator=(param_1 + 0x1a8,lVar8);
              cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x1a8);
              if (cVar3 == '\0') {
                return;
              }
              uVar7 = FWeakObjectPtr::Get(param_1 + 0x1a8);
              (**(code **)(*plVar1 + 0x590))(plVar1,plVar10,uVar7,1);
              return;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142ec8980 FUN_142ec8980 body=235 status=ok
// SIG undefined FUN_142ec8980(void)

void FUN_142ec8980(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
  if (cVar4 == '\0') goto LAB_142ec8a59;
  lVar5 = FWeakObjectPtr::Get(param_1 + 0xc4);
  if (*(int *)(lVar5 + 0x48) < 2) goto LAB_142ec8a59;
  lVar5 = FWeakObjectPtr::Get(param_1 + 0xc4);
  iVar1 = *(int *)(lVar5 + 0x48);
  lVar5 = FWeakObjectPtr::Get(param_1 + 0xc4);
  iVar7 = iVar1 + -2;
  if ((iVar7 < 0) || (*(int *)(lVar5 + 0x48) <= iVar7)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((bVar3) &&
     (plVar2 = *(longlong **)(*(longlong *)(lVar5 + 0x40) + -0x10 + (longlong)iVar1 * 8),
     plVar2 != (longlong *)0x0)) {
    lVar5 = (**(code **)(*plVar2 + 0x278))();
    if (lVar5 == 0) goto LAB_142ec8a43;
    lVar6 = USoUIInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_142ec8a43;
  }
  else {
LAB_142ec8a43:
    lVar5 = 0;
  }
  FWeakObjectPtr::operator=(param_1 + 0x1a8,lVar5);
LAB_142ec8a59:
  FUN_142ec85a0(param_1);
  return;
}



// FUNCTION 142ec8ac0 FUN_142ec8ac0 body=421 status=ok
// SIG undefined FUN_142ec8ac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ec8ac0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [80];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  plVar6 = (longlong *)(param_1 + -0x4d8);
  (**(code **)(*plVar6 + 0x4b8))(plVar6,local_d8);
  puVar4 = (undefined8 *)FUN_140ad4c90(plVar6,local_d0);
  uVar5 = *puVar4;
  plVar7 = (longlong *)puVar4[1];
  puVar4[1] = 0;
  *puVar4 = 0;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x20,local_58);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_14467a5d8;
    puVar4[1] = plVar6;
    puVar4[2] = uVar5;
    puVar4[3] = plVar7;
    plVar7 = (longlong *)0x0;
  }
  local_68[0] = &LAB_142eb0b30;
  uVar5 = FUN_1420849a0(plVar6,local_b8,local_68);
  FUN_14208c4f0(plVar6,uVar5);
  plVar6 = (longlong *)0x0;
  if ((local_28 != 0) && (plVar6 = local_58, local_38 != (longlong *)0x0)) {
    plVar6 = local_38;
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x10))(plVar6,0);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar7 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
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
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_c8 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return;
}



// FUNCTION 142ec8c70 FUN_142ec8c70 body=236 status=ok
// SIG undefined FUN_142ec8c70(void)

ulonglong FUN_142ec8c70(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  plVar1 = param_1 + -0x9b;
  (**(code **)(*plVar1 + 0x4b8))(plVar1,local_res8);
  uVar3 = 0;
  LOCK();
  uVar2 = *(uint *)((longlong)param_1 + 0x15c);
  if (uVar2 == 0) {
    *(uint *)((longlong)param_1 + 0x15c) = 0;
  }
  else {
    uVar3 = (ulonglong)uVar2;
  }
  UNLOCK();
  if (uVar2 != 0) {
    uVar3 = FWeakObjectPtr::IsValid((longlong)param_1 + 0xc4);
    if ((char)uVar3 != '\0') {
      uVar4 = FWeakObjectPtr::Get((longlong)param_1 + 0xc4);
      FUN_142f04290(uVar4);
      lVar5 = FWeakObjectPtr::Get((longlong)param_1 + 0xc4);
      uVar3 = (**(code **)(*param_1 + 0xd8))(param_1,*(undefined1 *)(lVar5 + 0xb8));
    }
    LOCK();
    *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
    UNLOCK();
  }
  if ((char)param_1[0x1e] != '\0') {
    uVar3 = FUN_142ebd930(plVar1);
    if ((char)uVar3 != '\0') {
      *(undefined1 *)(param_1 + 0x1e) = 0;
      (**(code **)(*plVar1 + 0x4b8))(plVar1,local_res18);
      uVar3 = FWeakObjectPtr::IsValid((longlong)param_1 + 0xc4);
      if ((char)uVar3 != '\0') {
        uVar4 = FWeakObjectPtr::Get((longlong)param_1 + 0xc4);
        uVar3 = FUN_142f001d0(uVar4);
        return uVar3;
      }
    }
  }
  return uVar3;
}



// FUNCTION 142ec8d60 FUN_142ec8d60 body=885 status=ok
// SIG undefined FUN_142ec8d60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142ec8d60(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_138 [32];
  undefined1 local_118 [4];
  int local_114;
  longlong local_110;
  longlong *local_108;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [80];
  code *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  plVar9 = (longlong *)(param_1 + -0x4d8);
  (**(code **)(*plVar9 + 0x4b8))(plVar9,local_118);
  *(undefined8 *)(param_1 + -0xa8) = param_3;
  FWeakObjectPtr::operator=(param_1 + 0xb4,param_3);
  if ((*(longlong *)(param_1 + 0xe0) != 0) && (*(longlong *)(param_1 + 0xd8) != 0)) {
    plVar8 = (longlong *)(*(longlong *)(param_1 + 0xe0) + 800);
    (**(code **)(*plVar8 + 0x10))(plVar8,*(longlong *)(param_1 + 0xd8),param_3);
    FUN_142f045b0(*(undefined8 *)(param_1 + 0xd8),param_3);
  }
  FWeakObjectPtr::operator=(param_1 + 0xc4,param_4);
  FUN_140ad4c90(plVar9,&local_110);
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xb4);
  if ((cVar3 != '\0') && (local_110 != 0)) {
    plVar8 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xb4);
    uVar5 = (**(code **)(*plVar8 + 0x148))(plVar8);
    FWeakObjectPtr::operator=(local_110 + 0x1bc,uVar5);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_142eaf7c0(plVar9,*(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x31));
  }
  iVar4 = (**(code **)(*plVar9 + 0x558))(plVar9);
  plVar8 = (longlong *)0x0;
  if (*(int *)(param_1 + 0x140) == iVar4) {
    iVar4 = 0;
    if (*(char *)(param_1 + 0x130) != '\0') {
      lVar6 = FUN_140f141d0(plVar9);
      local_114 = -1;
      iVar4 = 0;
      if (lVar6 != 0) {
        cVar3 = FUN_142710360(lVar6,&local_114);
        iVar4 = 0;
        if (cVar3 != '\0') {
          iVar4 = local_114;
        }
      }
    }
    if (*(int *)(param_1 + 0x144) == iVar4) {
      bVar2 = false;
      goto LAB_142ec8ec1;
    }
  }
  bVar2 = true;
LAB_142ec8ec1:
  if ((param_2 == -1) || (bVar2)) {
    (**(code **)(*plVar9 + 0x280))(plVar9);
    uVar5 = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0xd0) != 0) {
      FUN_142ef1b80(*(longlong *)(param_1 + 0xd0),plVar9);
    }
    *(undefined1 *)(param_1 + 0x108) = 1;
    puVar7 = (undefined8 *)FUN_140ad4c90(plVar9,local_100);
    uVar5 = *puVar7;
    plVar10 = (longlong *)puVar7[1];
    puVar7[1] = 0;
    *puVar7 = 0;
    local_68 = (longlong *)0x0;
    local_58 = 0;
    puVar7 = (undefined8 *)FUN_140438ef0(0x20,local_88);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_FUN_14467a5d8;
      puVar7[1] = plVar9;
      puVar7[2] = uVar5;
      puVar7[3] = plVar10;
      plVar10 = plVar8;
    }
    local_98[0] = FUN_142eb0cc0;
    uVar5 = FUN_1420849a0(plVar9,local_e8,local_98);
    FUN_14208c4f0(plVar9,uVar5);
    plVar9 = plVar8;
    if ((local_58 != 0) && (plVar9 = local_88, local_68 != (longlong *)0x0)) {
      plVar9 = local_68;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar10 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_f8 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)local_f8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_f8 + 8))(local_f8,1);
        }
      }
    }
    cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xb4);
    if (cVar3 != '\0') {
      lVar6 = FWeakObjectPtr::Get(param_1 + 0xb4);
      plVar8 = *(longlong **)(lVar6 + 0x848);
    }
    FWeakObjectPtr::operator=(param_1 + 0xbc,plVar8);
    uVar5 = 1;
  }
  plVar9 = local_108;
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_108 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_108 + 8))(local_108,1);
      }
    }
  }
  return uVar5;
}



// FUNCTION 142ec90e0 FUN_142ec90e0 body=344 status=ok
// SIG undefined FUN_142ec90e0(void)

void FUN_142ec90e0(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x48);
  if (((cVar5 != '\0') && (cVar5 = (**(code **)(param_1[0x2e] + 0x40))(), cVar5 != '\0')) &&
     (cVar5 = (**(code **)(*param_1 + 0x310))(param_1), (byte)(cVar5 - 1U) < 2)) {
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x48);
    puVar7 = (undefined8 *)
             TScriptInterface<IBlendableInterface>::
             TScriptInterface<IBlendableInterface><UMaterialInterface>(local_48,param_1);
    if (*(longlong *)(lVar6 + 0x5a8) != 0) {
      FUN_142f0d400(*(longlong *)(lVar6 + 0x5a8),*puVar7,1);
    }
  }
  cVar5 = (**(code **)(param_1[0x2e] + 0x40))();
  if (cVar5 != '\0') {
    FName::FName(&local_38,&DAT_143f3eda8,1);
    local_2c = 0;
    local_30 = 0xffffffff;
    FName::FName(local_28,&DAT_143f3eda8,1);
    local_10 = 0;
    local_30 = 0;
    local_38 = DAT_146b3d9b0;
    if (param_2 != '\0') {
      local_38 = DAT_146b3d9a8;
    }
    local_20 = 0;
    plStack_18 = (longlong *)0x0;
    (**(code **)(*param_1 + 0x300))(param_1,&local_38);
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



// FUNCTION 142ec9240 FUN_142ec9240 body=453 status=ok
// SIG undefined FUN_142ec9240(void)

void FUN_142ec9240(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x48);
  if (cVar5 != '\0') {
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x48);
    if (*(char *)(lVar6 + 0x5e1) == '\0') {
      return;
    }
    if (*(char *)(lVar6 + 0x63c) == '\0') {
      return;
    }
  }
  if (param_1[0x59] != 0) {
    cVar5 = (**(code **)(param_1[0x2e] + 0x40))();
    if (cVar5 == '\0') {
      return;
    }
    cVar5 = (**(code **)(*(longlong *)(param_1[0x59] + 0x170) + 0x40))();
    if (cVar5 == '\0') {
      return;
    }
    cVar5 = (**(code **)(*param_1 + 0x310))(param_1);
    if ((byte)(cVar5 - 1U) < 2) {
      cVar5 = FUN_142ebdf20(param_1[0x59]);
      if (cVar5 == '\0') {
        FUN_142edb850(param_1[0x59],1);
        cVar5 = FUN_142ebdf20(param_1[0x59]);
        if (cVar5 == '\0') goto LAB_142ec93e9;
      }
      (**(code **)(*(longlong *)param_1[0x59] + 0x2b8))
                ((longlong *)param_1[0x59],(int)param_1[0x5b],0,0);
      FName::FName(&local_38,&DAT_143f3eda8,1);
      local_2c = 0;
      local_30 = 0xffffffff;
      FName::FName(local_28,&DAT_143f3eda8,1);
      local_10 = 0;
      local_30 = 0;
      local_38 = DAT_146b3d9b0;
      if (param_2 != '\0') {
        local_38 = DAT_146b3d9a8;
      }
      local_20 = 0;
      plStack_18 = (longlong *)0x0;
      (**(code **)(*param_1 + 0x300))(param_1,&local_38);
      plVar4 = plStack_18;
      if (plStack_18 == (longlong *)0x0) {
        return;
      }
      LOCK();
      plVar1 = plStack_18 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 != 1) {
        return;
      }
      (**(code **)*plStack_18)(plStack_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 != 1) {
        return;
      }
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
LAB_142ec93e9:
  FUN_142ec90e0(param_1,param_2);
  return;
}



// FUNCTION 142ec9410 FUN_142ec9410 body=143 status=ok
// SIG undefined FUN_142ec9410(void)

void FUN_142ec9410(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint local_20;
  char local_18;
  undefined7 uStack_17;
  
  local_28 = (longlong *)0x0;
  local_20 = 0;
  local_38 = 0xffffffffffffffff;
  uStack_30 = 0xffffffffffffffff;
  cVar1 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))
                    (*(longlong **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),"buttonDown",
                     &local_38,((byte)*(undefined4 *)(param_2 + 0x18) & 0x8f) == 10);
  if ((cVar1 == '\0') || (local_18 != '\0')) {
    *(undefined1 *)(param_1 + 400) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x192) = 1;
  }
  if ((local_20 >> 6 & 1) != 0) {
    (**(code **)(*local_28 + 0x10))(local_28,&local_38,CONCAT71(uStack_17,local_18));
  }
  return;
}



// FUNCTION 142ec94a0 FUN_142ec94a0 body=405 status=ok
// SIG undefined FUN_142ec94a0(void)

void FUN_142ec94a0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 local_48 [16];
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x48);
  if (((cVar5 == '\0') ||
      (lVar7 = FWeakObjectPtr::Get(param_1 + 0x48), *(char *)(lVar7 + 0x630) != '\0')) &&
     (*(char *)((longlong)param_1 + 0x179) == '\0')) {
    plVar3 = param_1 + 0x2e;
    cVar5 = (**(code **)(*plVar3 + 0x10))(plVar3);
    *(undefined1 *)((longlong)param_1 + 0x179) = 1;
    cVar6 = (**(code **)(*plVar3 + 0x10))(plVar3);
    if (cVar5 != cVar6) {
      (**(code **)(*plVar3 + 0x30))(plVar3,cVar6,cVar5,1);
    }
    FName::FName(local_38,&DAT_143f3eda8,1);
    local_2c = 0;
    local_30 = 0xffffffff;
    FName::FName(local_28,&DAT_143f3eda8,1);
    local_10 = 0;
    local_30 = 0;
    local_20 = 0;
    plStack_18 = (longlong *)0x0;
    FUN_142eb4390(param_1 + 0x42,param_1,local_38);
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x48);
    if (((cVar5 != '\0') && (cVar5 = (**(code **)(*plVar3 + 0x40))(plVar3), cVar5 != '\0')) &&
       (cVar5 = (**(code **)(*param_1 + 0x310))(param_1), cVar5 == '\x01')) {
      lVar7 = FWeakObjectPtr::Get(param_1 + 0x48);
      puVar8 = (undefined8 *)
               TScriptInterface<IBlendableInterface>::
               TScriptInterface<IBlendableInterface><UMaterialInterface>(local_48,param_1);
      if (*(longlong *)(lVar7 + 0x5a8) != 0) {
        FUN_142f0d400(*(longlong *)(lVar7 + 0x5a8),*puVar8,1);
      }
    }
    plVar3 = plStack_18;
    if (plStack_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_18 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_18)(plStack_18);
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
  return;
}



// FUNCTION 142ec9640 FUN_142ec9640 body=791 status=ok
// SIG undefined FUN_142ec9640(void)

void FUN_142ec9640(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_58 [8];
  undefined8 local_50;
  longlong *plStack_48;
  undefined1 local_40;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  plVar2 = param_1 + 0x48;
  cVar5 = FWeakObjectPtr::IsValid(plVar2);
  if (cVar5 != '\0') {
    lVar7 = FWeakObjectPtr::Get(plVar2);
    if (*(char *)(lVar7 + 0x5e1) == '\0') {
      return;
    }
    if (*(char *)(lVar7 + 0x63c) == '\0') {
      return;
    }
  }
  cVar5 = FWeakObjectPtr::IsValid(plVar2);
  if ((cVar5 != '\0') && (lVar7 = FWeakObjectPtr::Get(plVar2), *(char *)(lVar7 + 0x630) == '\0')) {
    return;
  }
  if (param_1[0x59] == 0) {
    cVar5 = FWeakObjectPtr::IsValid(plVar2);
    if ((cVar5 != '\0') && (lVar7 = FWeakObjectPtr::Get(plVar2), *(char *)(lVar7 + 0x630) == '\0'))
    {
      return;
    }
    if (*(char *)((longlong)param_1 + 0x179) != '\0') {
      return;
    }
    plVar3 = param_1 + 0x2e;
    cVar5 = (**(code **)(*plVar3 + 0x10))(plVar3);
    *(undefined1 *)((longlong)param_1 + 0x179) = 1;
    cVar6 = (**(code **)(*plVar3 + 0x10))(plVar3);
    if (cVar5 != cVar6) {
      (**(code **)(*plVar3 + 0x30))(plVar3,cVar6,cVar5,1);
    }
    FName::FName(local_38,&DAT_143f3eda8,1);
    local_2c = 0;
    local_30 = 0xffffffff;
    FName::FName(local_28,&DAT_143f3eda8,1);
    local_10 = 0;
    local_30 = 0;
    local_20 = 0;
    plStack_18 = (longlong *)0x0;
    FUN_142eb4390(param_1 + 0x42,param_1,local_38);
    cVar5 = FWeakObjectPtr::IsValid(plVar2);
    plVar9 = plStack_18;
    if (((cVar5 != '\0') &&
        (cVar5 = (**(code **)(*plVar3 + 0x40))(plVar3), plVar9 = plStack_18, cVar5 != '\0')) &&
       (cVar5 = (**(code **)(*param_1 + 0x310))(param_1), plVar9 = plStack_18, cVar5 == '\x01')) {
      lVar7 = FWeakObjectPtr::Get(plVar2);
      puVar8 = (undefined8 *)
               TScriptInterface<IBlendableInterface>::
               TScriptInterface<IBlendableInterface><UMaterialInterface>(local_78,param_1);
      plVar9 = plStack_18;
      if (*(longlong *)(lVar7 + 0x5a8) != 0) {
        FUN_142f0d400(*(longlong *)(lVar7 + 0x5a8),*puVar8,1);
        plVar9 = plStack_18;
      }
    }
  }
  else {
    cVar5 = (**(code **)(param_1[0x2e] + 0x40))(param_1 + 0x2e);
    if (cVar5 == '\0') {
      return;
    }
    cVar5 = (**(code **)(*(longlong *)(param_1[0x59] + 0x170) + 0x40))();
    if (cVar5 == '\0') {
      return;
    }
    FUN_142ed3610(param_1 + 0x2e,1);
    FName::FName(local_68,&DAT_143f3eda8,1);
    local_5c = 0;
    local_60 = 0xffffffff;
    FName::FName(local_58,&DAT_143f3eda8,1);
    local_40 = 0;
    local_60 = 0;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    FUN_142eb4390(param_1 + 0x42,param_1,local_68);
    cVar5 = (**(code **)(*param_1 + 0x310))(param_1);
    plVar9 = plStack_48;
    if (cVar5 == '\x01') {
      cVar5 = FUN_142ebdf20(param_1[0x59]);
      if (cVar5 == '\0') {
        FUN_142edb850(param_1[0x59],1);
        cVar5 = FUN_142ebdf20(param_1[0x59]);
        plVar9 = plStack_48;
        if (cVar5 == '\0') goto LAB_142ec9910;
      }
      (**(code **)(*(longlong *)param_1[0x59] + 0x2b8))
                ((longlong *)param_1[0x59],(int)param_1[0x5b],0,0);
      plVar9 = plStack_48;
    }
  }
LAB_142ec9910:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return;
}



// FUNCTION 142ec9960 FUN_142ec9960 body=588 status=ok
// SIG undefined FUN_142ec9960(void)

void FUN_142ec9960(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  uint local_d0;
  double local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  uint local_a0;
  double local_98;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar3[1];
    bVar9 = iVar6 == 0;
    if (bVar9) {
      *(int *)(plVar3 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (!bVar9) {
      LOCK();
      bVar9 = iVar6 == (int)plVar3[1];
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar9) {
        if (plVar3 == (longlong *)0x0) {
          return;
        }
        lVar4 = *(longlong *)(param_1 + 0x28);
        if (lVar4 != 0) {
          local_b8 = 0xffffffffffffffff;
          uStack_b0 = 0xffffffffffffffff;
          local_a8 = (longlong *)0x0;
          local_a0 = 0;
          local_e8 = 0xffffffffffffffff;
          uStack_e0 = 0xffffffffffffffff;
          local_d8 = (longlong *)0x0;
          local_d0 = 0;
          cVar5 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))
                            (*(longlong **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),"stageX"
                             ,&local_b8,((byte)*(undefined4 *)(param_2 + 0x18) & 0x8f) == 10);
          if ((cVar5 != '\0') &&
             (cVar5 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))
                                (*(longlong **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),
                                 "stageY",&local_e8,
                                 ((byte)*(undefined4 *)(param_2 + 0x18) & 0x8f) == 10),
             cVar5 != '\0')) {
            fVar11 = (float)local_c8;
            fVar10 = (float)local_98;
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
            local_58 = 0;
            local_48 = 0;
            puVar7 = (undefined8 *)FUN_140438ef0(0x20,local_78);
            plVar8 = plVar3;
            if (puVar7 != (undefined8 *)0x0) {
              *puVar7 = &PTR_FUN_14598ae60;
              puVar7[1] = lVar4;
              puVar7[2] = plVar3;
              *(float *)(puVar7 + 3) = fVar10;
              *(float *)((longlong)puVar7 + 0x1c) = fVar11;
              plVar8 = (longlong *)0x0;
            }
            local_88[0] = &LAB_142eb0d00;
            FUN_1420326d0(lVar4,local_88);
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar8 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
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
          }
          if ((local_d0 >> 6 & 1) != 0) {
            (**(code **)(*local_d8 + 0x10))(local_d8,&local_e8,local_c8);
            local_d8 = (longlong *)0x0;
          }
          local_d0 = 0;
          if ((local_a0 >> 6 & 1) != 0) {
            (**(code **)(*local_a8 + 0x10))(local_a8,&local_b8,local_98);
          }
        }
        LOCK();
        plVar8 = plVar3 + 1;
        lVar4 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar4 != 1) {
          return;
        }
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 != 1) {
          return;
        }
        (**(code **)(*plVar3 + 8))(plVar3,1);
        return;
      }
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar9 = iVar6 == 0;
      if (bVar9) {
        *(int *)(plVar3 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 142ec9bb0 FUN_142ec9bb0 body=313 status=ok
// SIG undefined FUN_142ec9bb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ec9bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  local_d8 = param_1;
  uStack_d0 = param_2;
  local_c8 = param_3;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = (undefined4)local_d8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = local_d8._4_4_;
    *(undefined4 *)(puVar1 + 2) = (undefined4)uStack_d0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_d0._4_4_;
    *puVar1 = &PTR_FUN_143f4d0b0;
    puVar1[3] = local_c8;
  }
  local_b8[0] = &LAB_142eb0a30;
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



// FUNCTION 142ec9d10 FUN_142ec9d10 body=206 status=ok
// SIG undefined FUN_142ec9d10(void)

void FUN_142ec9d10(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  *(undefined1 *)(param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined1 *)(param_1 + 0x276) = 0;
  FUN_142ed3cf0(param_1,1);
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  local_30 = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  FUN_142eb4390(param_1 + 0x1f0,param_1,local_38);
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
  return;
}



// FUNCTION 142ec9de0 FUN_142ec9de0 body=116 status=ok
// SIG undefined FUN_142ec9de0(void)

void FUN_142ec9de0(undefined8 param_1)

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
  local_58[0] = &LAB_142eb08e0;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 142ec9e60 FUN_142ec9e60 body=189 status=ok
// SIG undefined FUN_142ec9e60(void)

void FUN_142ec9e60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  *(undefined1 *)(param_1 + 0x274) = 0;
  FUN_142ed3cf0(param_1,0);
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  local_30 = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  FUN_142eb4390(param_1 + 0x200,param_1,local_38);
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
  return;
}



// FUNCTION 142ec9f50 FUN_142ec9f50 body=372 status=ok
// SIG undefined FUN_142ec9f50(void)

void FUN_142ec9f50(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  if (*(char *)((longlong)param_1 + 0x179) != '\0') {
    plVar2 = param_1 + 0x2e;
    cVar4 = (**(code **)(*plVar2 + 0x10))(plVar2);
    *(undefined1 *)((longlong)param_1 + 0x179) = 0;
    cVar5 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (cVar4 != cVar5) {
      (**(code **)(*plVar2 + 0x30))(plVar2,cVar5,cVar4,1);
    }
    cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x48);
    if (cVar4 != '\0') {
      plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x48);
      cVar4 = (**(code **)(*plVar6 + 0x548))(plVar6);
      if ((((cVar4 != '\0') && (cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2), cVar4 != '\0')) &&
          ((char)param_1[0x4a] != '\0')) &&
         (cVar4 = (**(code **)(*param_1 + 0x310))(param_1), cVar4 == '\x01')) {
        lVar7 = FWeakObjectPtr::Get(param_1 + 0x48);
        if (*(longlong *)(lVar7 + 0x5a8) != 0) {
          FUN_142f0d400(*(longlong *)(lVar7 + 0x5a8),0,1);
        }
      }
    }
    FName::FName(local_38,&DAT_143f3eda8,1);
    local_2c = 0;
    local_30 = 0xffffffff;
    FName::FName(local_28,&DAT_143f3eda8,1);
    local_10 = 0;
    local_30 = 0;
    local_20 = 0;
    plStack_18 = (longlong *)0x0;
    FUN_142eb4390(param_1 + 0x44,param_1,local_38);
    plVar2 = plStack_18;
    if (plStack_18 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_18 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_18)(plStack_18);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142eca0d0 FUN_142eca0d0 body=552 status=ok
// SIG undefined FUN_142eca0d0(void)

void FUN_142eca0d0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 local_68 [8];
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_58 [8];
  undefined8 local_50;
  longlong *plStack_48;
  undefined1 local_40;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  if (*(char *)((longlong)param_1 + 0x179) != '\0') {
    plVar7 = param_1 + 0x2e;
    if (param_1[0x59] == 0) {
      cVar3 = (**(code **)(*plVar7 + 0x10))();
      *(undefined1 *)((longlong)param_1 + 0x179) = 0;
      cVar4 = (**(code **)(*plVar7 + 0x10))(plVar7);
      if (cVar3 != cVar4) {
        (**(code **)(*plVar7 + 0x30))(plVar7,cVar4,cVar3,1);
      }
      cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x48);
      if (cVar3 != '\0') {
        plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x48);
        cVar3 = (**(code **)(*plVar5 + 0x548))(plVar5);
        if ((((cVar3 != '\0') && (cVar3 = (**(code **)(*plVar7 + 0x40))(plVar7), cVar3 != '\0')) &&
            ((char)param_1[0x4a] != '\0')) &&
           (cVar3 = (**(code **)(*param_1 + 0x310))(param_1), cVar3 == '\x01')) {
          lVar6 = FWeakObjectPtr::Get(param_1 + 0x48);
          if (*(longlong *)(lVar6 + 0x5a8) != 0) {
            FUN_142f0d400(*(longlong *)(lVar6 + 0x5a8),0,1);
          }
        }
      }
      FName::FName(local_68,&DAT_143f3eda8,1);
      local_5c = 0;
      local_60 = 0xffffffff;
      FName::FName(local_58,&DAT_143f3eda8,1);
      local_40 = 0;
      local_60 = 0;
      local_50 = 0;
      plStack_48 = (longlong *)0x0;
      FUN_142eb4390(param_1 + 0x44,param_1,local_68);
      plVar7 = plStack_48;
    }
    else {
      cVar3 = (**(code **)(*plVar7 + 0x10))(plVar7);
      *(undefined1 *)((longlong)param_1 + 0x179) = 0;
      cVar4 = (**(code **)(*plVar7 + 0x10))(plVar7);
      if (cVar3 != cVar4) {
        (**(code **)(*plVar7 + 0x30))(plVar7,cVar4,cVar3,1);
      }
      FName::FName(local_38,&DAT_143f3eda8,1);
      local_2c = 0;
      local_30 = 0xffffffff;
      FName::FName(local_28,&DAT_143f3eda8,1);
      local_10 = 0;
      local_30 = 0;
      local_20 = 0;
      plStack_18 = (longlong *)0x0;
      FUN_142eb4390(param_1 + 0x44,param_1,local_38);
      plVar7 = plStack_18;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar7 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  }
  return;
}



// FUNCTION 142eca300 FUN_142eca300 body=143 status=ok
// SIG undefined FUN_142eca300(void)

void FUN_142eca300(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint local_20;
  char local_18;
  undefined7 uStack_17;
  
  local_28 = (longlong *)0x0;
  local_20 = 0;
  local_38 = 0xffffffffffffffff;
  uStack_30 = 0xffffffffffffffff;
  cVar1 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))
                    (*(longlong **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),"buttonDown",
                     &local_38,((byte)*(undefined4 *)(param_2 + 0x18) & 0x8f) == 10);
  if ((cVar1 == '\0') || (local_18 != '\0')) {
    *(undefined1 *)(param_1 + 400) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x192) = 0;
  }
  if ((local_20 >> 6 & 1) != 0) {
    (**(code **)(*local_28 + 0x10))(local_28,&local_38,CONCAT71(uStack_17,local_18));
  }
  return;
}



// FUNCTION 142eca390 FUN_142eca390 body=52 status=ok
// SIG undefined FUN_142eca390(void)

void FUN_142eca390(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    cVar1 = FUN_142aaac30();
    if (cVar1 == '\0') {
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x38,0);
      return;
    }
  }
  return;
}



// FUNCTION 142eca3d0 FUN_142eca3d0 body=94 status=ok
// SIG undefined FUN_142eca3d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142eca3d0(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  (**(code **)(*param_1 + 0x298))();
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  if (iVar2 < (int)DAT_1469e91c4) {
    uVar4 = iVar2 >> 0x1f & 0xffff;
    uVar3 = iVar2 + uVar4;
    puVar1 = (uint *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) + 8 +
                     (longlong)(int)((uVar3 & 0xffff) - uVar4) * 0x18);
    *puVar1 = *puVar1 | 0x20000000;
    return;
  }
  _DAT_00000008 = _DAT_00000008 | 0x20000000;
  return;
}



// FUNCTION 142eca440 FUN_142eca440 body=416 status=ok
// SIG undefined FUN_142eca440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142eca440(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong *local_a0;
  uint local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_c8 = ((byte)*(undefined4 *)(param_2 + 0x18) & 0x8f) == 10;
  local_b0 = 0xffffffffffffffff;
  uStack_a8 = 0xffffffffffffffff;
  local_a0 = (longlong *)0x0;
  local_98 = 0;
  cVar2 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))
                    (*(longlong **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),"buttonIdx",
                     &local_b0);
  uVar1 = local_90;
  if (cVar2 != '\0') {
    FWeakObjectPtr::operator=(&local_b8,param_1);
    local_48 = (longlong *)0x0;
    local_38 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_68);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_144213c48;
      puVar3[1] = param_1;
      *(undefined4 *)(puVar3 + 2) = local_b8;
      *(undefined4 *)((longlong)puVar3 + 0x14) = local_b4;
      *(undefined4 *)(puVar3 + 3) = uVar1;
    }
    local_78[0] = &LAB_142eb0c50;
    FUN_14208c300(param_1,local_78);
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
  }
  if ((local_98 >> 6 & 1) != 0) {
    (**(code **)(*local_a0 + 0x10))(local_a0,&local_b0,CONCAT44(uStack_8c,local_90));
  }
  return;
}



// FUNCTION 142eca5e0 FUN_142eca5e0 body=234 status=ok
// SIG undefined FUN_142eca5e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142eca5e0(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_74;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FWeakObjectPtr::operator=(&local_78,param_1);
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_78;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_74;
  }
  local_68[0] = &LAB_142eb0900;
  FUN_14208c300(param_1,local_68);
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
  return;
}



// FUNCTION 142eca6d0 FUN_142eca6d0 body=98 status=ok
// SIG undefined FUN_142eca6d0(void)

void FUN_142eca6d0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  
  *(undefined1 *)(param_1 + 0x328) = 2;
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x240);
  if (cVar3 != '\0') {
    uVar1 = UBlendableInterface::GetPrivateStaticClass();
    UObjectBaseUtility::GetInterfaceAddress(param_1,uVar1);
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x240);
    if (*(longlong *)(lVar2 + 0x5a8) != 0) {
      FUN_142f0d400(*(longlong *)(lVar2 + 0x5a8),param_1,0);
    }
  }
  return;
}



// FUNCTION 142eca740 FUN_142eca740 body=98 status=ok
// SIG undefined FUN_142eca740(void)

void FUN_142eca740(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  
  *(undefined1 *)(param_1 + 0x328) = 0;
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x240);
  if (cVar3 != '\0') {
    uVar1 = UBlendableInterface::GetPrivateStaticClass();
    UObjectBaseUtility::GetInterfaceAddress(param_1,uVar1);
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x240);
    if (*(longlong *)(lVar2 + 0x5a8) != 0) {
      FUN_142f0d400(*(longlong *)(lVar2 + 0x5a8),param_1,0);
    }
  }
  return;
}



// FUNCTION 142eca7b0 FUN_142eca7b0 body=760 status=ok
// SIG undefined FUN_142eca7b0(void)

void FUN_142eca7b0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float local_b8;
  float local_b4;
  undefined1 local_a8 [8];
  float local_a0;
  float local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_88;
  uint local_80;
  double local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  uint local_50;
  double local_48;
  
  lVar5 = 0;
  local_58 = (longlong *)0x0;
  local_68 = 0xffffffffffffffff;
  uStack_60 = 0xffffffffffffffff;
  local_50 = 0;
  local_98 = 0xffffffffffffffff;
  uStack_90 = 0xffffffffffffffff;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  if (((((char)param_1[0x39] != '\0') &&
       (cVar2 = (**(code **)(param_1[0x2e] + 0x48))(), cVar2 != '\0')) &&
      (cVar2 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))
                         (*(longlong **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),"stageX",
                          &local_68,((byte)*(undefined4 *)(param_2 + 0x18) & 0x8f) == 10),
      cVar2 != '\0')) &&
     (cVar2 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))
                        (*(longlong **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),"stageY",
                         &local_98,((byte)*(undefined4 *)(param_2 + 0x18) & 0x8f) == 10),
     cVar2 != '\0')) {
    iVar3 = (int)param_1[0x4e];
    fVar8 = (float)local_48;
    fVar7 = (float)local_78;
    if (((-1 < iVar3) && (iVar3 < (int)param_1[0x50])) &&
       ((lVar1 = *(longlong *)((longlong)iVar3 * 0x20 + 0x18 + param_1[0x4f]), lVar1 != 0 &&
        (cVar2 = FWeakObjectPtr::IsValid(lVar1 + 0x240), cVar2 != '\0')))) {
      uVar4 = FWeakObjectPtr::Get(lVar1 + 0x240);
      cVar2 = FUN_142eb62a0(uVar4);
      if (cVar2 == '\x02') {
        iVar3 = (**(code **)(*param_1 + 0x2d8))(param_1);
        lVar6 = lVar5;
        if ((-1 < iVar3) && (iVar3 < (int)param_1[0x50])) {
          lVar6 = *(longlong *)((longlong)iVar3 * 0x20 + 0x18 + param_1[0x4f]);
        }
        iVar3 = (**(code **)(*param_1 + 0x2e0))(param_1);
        if ((-1 < iVar3) && (iVar3 < (int)param_1[0x50])) {
          lVar5 = *(longlong *)((longlong)iVar3 * 0x20 + 0x18 + param_1[0x4f]);
        }
        if (((lVar6 != 0) && (lVar5 != 0)) &&
           (cVar2 = FWeakObjectPtr::IsValid(lVar1 + 0x240), cVar2 != '\0')) {
          uVar4 = FUN_142eee1b0(param_1);
          FUN_142eeb1f0(lVar6,&local_b8,uVar4);
          uVar4 = FUN_142eee1b0(param_1);
          FUN_142eeb1f0(lVar5,local_a8,uVar4);
          if (((fVar8 < local_b4) || (local_9c < fVar8)) ||
             ((fVar7 < local_b8 || (local_a0 < fVar7)))) {
            FUN_142ed3610(lVar1 + 0x170,0);
            lVar5 = FWeakObjectPtr::Get(lVar1 + 0x240);
            if (*(longlong *)(lVar5 + 0x5a8) != 0) {
              FUN_142f0d400(*(longlong *)(lVar5 + 0x5a8),0,0);
            }
            (**(code **)(*param_1 + 0x2b8))(param_1,0xffffffff,0);
          }
        }
      }
    }
  }
  if ((local_80 >> 6 & 1) != 0) {
    (**(code **)(*local_88 + 0x10))(local_88,&local_98,local_78);
    local_88 = (longlong *)0x0;
  }
  local_80 = 0;
  if ((local_50 >> 6 & 1) != 0) {
    (**(code **)(*local_58 + 0x10))(local_58,&local_68,local_48);
  }
  return;
}



// FUNCTION 142ecaab0 FUN_142ecaab0 body=315 status=ok
// SIG undefined FUN_142ecaab0(void)

void FUN_142ecaab0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_res8 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  uint local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint local_20;
  undefined8 local_18;
  
  (**(code **)(*param_1 + 0x4c0))(param_1,local_res8);
  local_28 = (longlong *)0x0;
  local_38 = 0xffffffffffffffff;
  uStack_30 = 0xffffffffffffffff;
  local_20 = 0;
  local_68 = 0xffffffffffffffff;
  uStack_60 = 0xffffffffffffffff;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  if (((*(char *)((longlong)param_1 + 0x63c) != '\0') &&
      (cVar1 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))
                         (*(longlong **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),"stageX",
                          &local_38,((byte)*(undefined4 *)(param_2 + 0x18) & 0x8f) == 10),
      cVar1 != '\0')) &&
     (cVar1 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))
                        (*(longlong **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),"stageY",
                         &local_68,((byte)*(undefined4 *)(param_2 + 0x18) & 0x8f) == 10),
     cVar1 != '\0')) {
    (**(code **)(*param_1 + 0x510))(param_1,local_18,local_48);
  }
  if ((local_50 >> 6 & 1) != 0) {
    (**(code **)(*local_58 + 0x10))(local_58,&local_68,local_48);
    local_58 = (longlong *)0x0;
  }
  local_50 = 0;
  if ((local_20 >> 6 & 1) != 0) {
    (**(code **)(*local_28 + 0x10))(local_28,&local_38,local_18);
  }
  return;
}



// FUNCTION 142ecabf0 FUN_142ecabf0 body=398 status=ok
// SIG undefined FUN_142ecabf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ecabf0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong *local_a0;
  uint local_98;
  int local_90;
  undefined4 uStack_8c;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_c8 = ((byte)*(undefined4 *)(param_2 + 0x18) & 0x8f) == 10;
  local_b0 = 0xffffffffffffffff;
  uStack_a8 = 0xffffffffffffffff;
  local_a0 = (longlong *)0x0;
  local_98 = 0;
  cVar1 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))
                    (*(longlong **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),"buttonIdx",
                     &local_b0);
  if ((cVar1 != '\0') && (local_90 == 0)) {
    FWeakObjectPtr::operator=(&local_b8,param_1);
    local_48 = (longlong *)0x0;
    local_38 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_68);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_1444f8920;
      puVar2[1] = param_1;
      *(undefined4 *)(puVar2 + 2) = local_b8;
      *(undefined4 *)((longlong)puVar2 + 0x14) = local_b4;
    }
    local_78[0] = &LAB_142eb0980;
    FUN_14208c300(param_1,local_78);
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
  }
  if ((local_98 >> 6 & 1) != 0) {
    (**(code **)(*local_a0 + 0x10))(local_a0,&local_b0,CONCAT44(uStack_8c,local_90));
  }
  return;
}



// FUNCTION 142ecad80 FUN_142ecad80 body=398 status=ok
// SIG undefined FUN_142ecad80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ecad80(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong *local_a0;
  uint local_98;
  int local_90;
  undefined4 uStack_8c;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_c8 = ((byte)*(undefined4 *)(param_2 + 0x18) & 0x8f) == 10;
  local_b0 = 0xffffffffffffffff;
  uStack_a8 = 0xffffffffffffffff;
  local_a0 = (longlong *)0x0;
  local_98 = 0;
  cVar1 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))
                    (*(longlong **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),"buttonIdx",
                     &local_b0);
  if ((cVar1 != '\0') && (local_90 == 0)) {
    FWeakObjectPtr::operator=(&local_b8,param_1);
    local_48 = (longlong *)0x0;
    local_38 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_68);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_1444f8920;
      puVar2[1] = param_1;
      *(undefined4 *)(puVar2 + 2) = local_b8;
      *(undefined4 *)((longlong)puVar2 + 0x14) = local_b4;
    }
    local_78[0] = &LAB_142eb0b50;
    FUN_14208c300(param_1,local_78);
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
  }
  if ((local_98 >> 6 & 1) != 0) {
    (**(code **)(*local_a0 + 0x10))(local_a0,&local_b0,CONCAT44(uStack_8c,local_90));
  }
  return;
}



// FUNCTION 142ecaf10 FUN_142ecaf10 body=234 status=ok
// SIG undefined FUN_142ecaf10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ecaf10(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_74;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FWeakObjectPtr::operator=(&local_78,param_1);
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_78;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_74;
  }
  local_68[0] = &LAB_142eb0be0;
  FUN_14208c300(param_1,local_68);
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
  return;
}



// FUNCTION 142ecb010 FUN_142ecb010 body=54 status=ok
// SIG undefined FUN_142ecb010(void)

void FUN_142ecb010(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x318) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x318) + 0x1a0) != '\0')) {
    FUN_142eb15b0();
  }
  *(undefined1 *)(param_1 + 0x198) = *(undefined1 *)(param_1 + 0x324);
  return;
}



// FUNCTION 142ecb050 FUN_142ecb050 body=12 status=ok
// SIG undefined FUN_142ecb050(void)

void FUN_142ecb050(longlong param_1)

{
  FWeakObjectPtr::operator=(param_1 + 0x5e0);
  return;
}



// FUNCTION 142ecb060 FUN_142ecb060 body=196 status=ok
// SIG undefined FUN_142ecb060(void)

void FUN_142ecb060(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(param_1[0x2e] + 0x38))(param_1 + 0x2e,1);
  (**(code **)(*param_1 + 0x278))(param_1,1);
  FUN_142f10940(param_1,0);
  if (((int)param_1[0x60] != 0) && (plVar1 = (longlong *)param_1[0x5f], plVar1 != (longlong *)0x0))
  {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (param_1[0x5f] != 0) {
      lVar2 = FMemory::Realloc(param_1[0x5f],0,0);
      param_1[0x5f] = lVar2;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  FWeakObjectPtr::operator=(param_1 + 0x36,0);
  param_1[0x37] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x3a,0);
  param_1[0x3b] = 0;
  return;
}



// FUNCTION 142ecb130 FUN_142ecb130 body=945 status=ok
// SIG undefined FUN_142ecb130(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ecb130(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_2b8 [32];
  undefined2 local_298;
  longlong *local_288;
  longlong *local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  longlong *local_260;
  LARGE_INTEGER local_258 [2];
  undefined1 *local_248 [2];
  undefined1 local_238 [32];
  undefined8 local_218;
  undefined4 local_208;
  undefined1 *local_1f8 [2];
  undefined1 local_1e8 [32];
  undefined8 local_1c8;
  undefined4 local_1b8;
  longlong *local_1a8;
  longlong *local_1a0;
  undefined1 local_198 [16];
  longlong local_188 [4];
  longlong *local_168;
  int local_158;
  undefined1 *local_148 [2];
  longlong local_138 [4];
  longlong *local_118;
  int local_108;
  LARGE_INTEGER local_f8 [24];
  longlong local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  plVar7 = (longlong *)0x0;
  local_218 = 0;
  local_208 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_238);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = param_1;
    *puVar3 = &PTR_FUN_143f77b70;
  }
  local_278 = 0;
  local_248[0] = &LAB_142eb0b40;
  local_270 = 0x22;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_278,0);
  local_298 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>(local_278,0x22,"UGbxGFxListItemControls::OnRemove");
  FUN_140cdf730(local_f8,&local_278,local_248);
  QueryPerformanceCounter(local_258);
  local_f8[0] = local_258[0];
  lVar4 = operator_new(0x18);
  plVar5 = plVar7;
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_140cdf810(lVar4);
  }
  plVar6 = (longlong *)operator_new(0x18);
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *plVar6 = (longlong)&PTR_DestroyObject_1444f8938;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    plVar6[2] = (longlong)plVar5;
    plVar7 = plVar6;
  }
  local_288 = plVar5;
  local_280 = plVar7;
  SharedPointerInternals::EnableSharedFromThis(&local_288,plVar5,plVar5);
  *(undefined1 *)(local_288 + 2) = 1;
  local_260 = (longlong *)local_288[1];
  local_38 = *local_288;
  if (local_260 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_260 + 1) = (int)local_260[1] + 1;
    UNLOCK();
  }
  local_268 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_30,&local_260);
  plVar7 = local_260;
  if (local_260 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_260 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_260)(local_260);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_260 + 8))(local_260,1);
      }
    }
  }
  local_118 = (longlong *)0x0;
  local_108 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_138);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1444f8620;
    puVar3[1] = local_f8;
  }
  local_148[0] = &LAB_140cee980;
  local_1a8 = local_288;
  local_1a0 = local_280;
  if (local_280 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_280 + 1) = (int)local_280[1] + 1;
    UNLOCK();
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_198,local_148);
  local_1c8 = 0;
  local_1b8 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x70,local_1e8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_CopyToEmptyStorage_1444f8578;
    puVar3[2] = local_1a8;
    puVar3[3] = local_1a0;
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1a0 + 1) = (int)local_1a0[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar3 + 4,local_198);
  }
  local_1f8[0] = &LAB_140cee8d0;
  if (local_158 != 0) {
    plVar7 = local_188;
    if (local_168 != (longlong *)0x0) {
      plVar7 = local_168;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_168 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar7 = local_1a0;
  if (local_1a0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1a0 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_1a0)(local_1a0);
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
  if (local_108 != 0) {
    plVar7 = local_138;
    if (local_118 != (longlong *)0x0) {
      plVar7 = local_118;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar7 = local_280;
  if (local_280 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_280 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_280)(local_280);
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
  FUN_14208c5d0(param_1,local_1f8);
  FUN_140d1b3a0(local_f8);
  FUN_142ecb060(param_1);
  FUN_140ce1dc0(local_f8);
  return;
}



// FUNCTION 142ecb4f0 FUN_142ecb4f0 body=48 status=ok
// SIG undefined FUN_142ecb4f0(void)

void FUN_142ecb4f0(longlong param_1)

{
  FUN_142ecb060();
  FWeakObjectPtr::operator=(param_1 + 0x328,0);
  *(undefined8 *)(param_1 + 0x330) = 0;
  return;
}



// FUNCTION 142ecb520 FUN_142ecb520 body=88 status=ok
// SIG undefined FUN_142ecb520(void)

void FUN_142ecb520(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  FUN_142ecb060();
  if ((*(int *)(param_1 + 0x330) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x328), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (*(longlong *)(param_1 + 0x328) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x328),0,0);
      *(undefined8 *)(param_1 + 0x328) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x330) = 0;
  }
  return;
}



// FUNCTION 142ecb580 FUN_142ecb580 body=60 status=ok
// SIG undefined FUN_142ecb580(void)

void FUN_142ecb580(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x2dc) - *(float *)(param_1 + 0x2d8);
  fVar1 = 0.0;
  if (1e-08 < ABS(fVar2)) {
    fVar1 = fVar2 * param_2;
  }
  FUN_142f0ee50(param_1 + 0x2b8,fVar1);
  return;
}



// FUNCTION 142ecb5c0 FUN_142ecb5c0 body=139 status=ok
// SIG undefined FUN_142ecb5c0(void)

void FUN_142ecb5c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0x6a0) != 0)) &&
     (lVar3 = FUN_142eb6170(param_1,*(undefined4 *)(param_2 + 0x2d8)), lVar3 != 0)) {
    cVar2 = FText::IsEmpty(lVar3 + 8);
    plVar1 = *(longlong **)(param_1 + 0x6a0);
    if (cVar2 == '\0') {
      (**(code **)(*plVar1 + 0x2b0))(plVar1,lVar3 + 8,1,0);
                    /* WARNING: Could not recover jumptable at 0x000142ecb630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x6a0) + 0x278))(*(longlong **)(param_1 + 0x6a0),1);
      return;
    }
    (**(code **)(*plVar1 + 0x278))(plVar1,0);
  }
  return;
}



// FUNCTION 142ecb650 FUN_142ecb650 body=266 status=ok
// SIG undefined FUN_142ecb650(void)

void FUN_142ecb650(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x240);
  plVar5 = (longlong *)0x0;
  if (cVar2 != '\0') {
    plVar1 = *(longlong **)(param_1 + 0x2c8);
    plVar6 = plVar5;
    if (plVar1 != (longlong *)0x0) {
      uVar3 = UBlendableInterface::GetPrivateStaticClass();
      UObjectBaseUtility::GetInterfaceAddress(plVar1,uVar3);
      plVar6 = plVar1;
    }
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x240);
    if (*(longlong *)(lVar4 + 0x5a8) != 0) {
      FUN_142f0d400(*(longlong *)(lVar4 + 0x5a8),plVar6,0);
    }
  }
  if (param_2 == 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x318) + 0x198);
    (**(code **)(*plVar1 + 0x2b8))(plVar1,*(undefined4 *)(param_1 + 800),0,0);
  }
  else {
    *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_2 + 0x2d8);
  }
  *(undefined1 *)(param_1 + 0x198) = *(undefined1 *)(param_1 + 0x324);
  if (((*(int *)(param_1 + 0x348) != 0) && (*(longlong **)(param_1 + 0x340) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x340) + 0x18))(), cVar2 != '\0')) {
    if (*(int *)(param_1 + 0x348) != 0) {
      plVar5 = *(longlong **)(param_1 + 0x340);
    }
    (**(code **)(*plVar5 + 0x40))(plVar5,param_1);
  }
  return;
}



// FUNCTION 142ecb760 FUN_142ecb760 body=517 status=ok
// SIG undefined FUN_142ecb760(void)

void FUN_142ecb760(longlong *param_1,float param_2)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  float *pfVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  undefined1 local_48 [8];
  longlong *local_40;
  
  iVar3 = (int)param_1[0x6f];
  fVar10 = param_2;
  if (0 < iVar3) {
    pfVar8 = (float *)param_1[0x6e];
    fVar11 = *pfVar8;
    iVar7 = 1;
    do {
      fVar10 = param_2;
      if ((((ABS(param_2 - fVar11) < 0.0001) || (fVar10 = fVar11, param_2 < fVar11)) || (iVar7 < 0))
         || ((iVar3 <= iVar7 || (pfVar1 = pfVar8 + 1, param_2 < (*pfVar1 - fVar11) * 0.5 + fVar11)))
         ) break;
      pfVar8 = pfVar8 + 1;
      bVar5 = iVar7 < iVar3;
      fVar10 = param_2;
      fVar11 = *pfVar1;
      iVar7 = iVar7 + 1;
    } while (bVar5);
  }
  fVar11 = 0.0;
  if ((0.0 <= fVar10) && (fVar11 = fVar10, 1.0 <= fVar10)) {
    fVar11 = 1.0;
  }
  fVar11 = (1.0 - fVar11) * *(float *)((longlong)param_1 + 0x354) +
           fVar11 * *(float *)(param_1 + 0x6b);
  if (*(char *)((longlong)param_1 + 0x35c) != '\0') {
    fVar11 = (float)((int)ROUND(fVar11 + fVar11 + 0.5) >> 1);
  }
  if (1e-08 < ABS(fVar11 - *(float *)((longlong)param_1 + 0x364))) {
    *(float *)((longlong)param_1 + 0x364) = fVar11;
    *(float *)(param_1 + 0x6c) = fVar10;
    if ((longlong *)param_1[0x69] != (longlong *)0x0) {
      lVar4 = *(longlong *)param_1[0x69];
      uVar6 = (**(code **)(*param_1 + 0x330))(param_1,local_48,fVar11);
      (**(code **)(lVar4 + 0x2b0))(param_1[0x69],uVar6,1,0);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_40 + 1;
        lVar4 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
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
      *(float *)(param_1 + 0x6d) = fVar11;
    }
    FUN_140757f80(param_1 + 0x65,param_1);
  }
  if ((*(char *)((longlong)param_1 + 900) != '\0') && (param_1[0x69] != 0)) {
    plVar9 = (longlong *)&DAT_1464aa6c0;
    if (0.001 < ABS(*(float *)(param_1 + 0x70) - *(float *)(param_1 + 0x6d))) {
      plVar9 = param_1 + 0x71;
    }
    FUN_142f0c220(param_1[0x69],plVar9,1);
  }
  return;
}



// FUNCTION 142ecb970 FUN_142ecb970 body=127 status=ok
// SIG undefined FUN_142ecb970(void)

void FUN_142ecb970(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (param_2 == *(longlong *)(param_1 + 0x308)) {
    uVar1 = FUN_142eebb80();
    *(undefined4 *)(param_1 + 0x328) = uVar1;
  }
  if (param_2 == *(longlong *)(param_1 + 0x310)) {
    uVar1 = FUN_142eebb80();
    *(undefined4 *)(param_1 + 0x32c) = uVar1;
  }
  if (param_2 == *(longlong *)(param_1 + 0x318)) {
    uVar1 = FUN_142eebb80();
    *(undefined4 *)(param_1 + 0x330) = uVar1;
  }
  if (param_2 == *(longlong *)(param_1 + 800)) {
    uVar1 = FUN_142eebb80();
    *(undefined4 *)(param_1 + 0x334) = uVar1;
  }
  return;
}



// FUNCTION 142ecb9f0 FUN_142ecb9f0 body=87 status=ok
// SIG undefined FUN_142ecb9f0(void)

void FUN_142ecb9f0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  
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
                    /* WARNING: Could not recover jumptable at 0x000142ecba40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x330))(param_1);
  return;
}



// FUNCTION 142ecba50 FUN_142ecba50 body=470 status=ok
// SIG undefined FUN_142ecba50(void)

void FUN_142ecba50(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  uVar2 = 0;
  FUN_142ecbc80();
  local_38 = (longlong *)0x0;
  local_30 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"contextualMenu",0x1e);
  uVar1 = FUN_1420876d0(param_1,&local_38);
  *(undefined8 *)(param_1 + 0x690) = uVar1;
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x1c;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"contextualMenu.contentPanel",0x38);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  uVar1 = FUN_140ecb410(param_1,&local_28,0,6,&local_38);
  *(undefined8 *)(param_1 + 0x698) = uVar1;
  plVar5 = local_38;
  for (iVar4 = (int)local_30; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  uVar3 = uVar2;
  if (*(longlong *)(param_1 + 0x698) != 0) {
    local_38 = (longlong *)0x0;
    local_30 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"toolTips",0x12);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    uVar2 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x698),&local_38,0,6,&local_28);
    uVar3 = 3;
  }
  *(ulonglong *)(param_1 + 0x6a0) = uVar2;
  if ((uVar3 & 2) != 0) {
    uVar3 = (ulonglong)((uint)uVar3 & 0xfffffffd);
    plVar5 = local_28;
    for (iVar4 = (int)local_20; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  if (((uVar3 & 1) != 0) && (local_38 != (longlong *)0x0)) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ecbc30 FUN_142ecbc30 body=77 status=ok
// SIG undefined FUN_142ecbc30(void)

void FUN_142ecbc30(longlong *param_1)

{
  FUN_14073dc00();
  (**(code **)(*param_1 + 0x2b0))(param_1,(char)param_1[0x43]);
  (**(code **)(*param_1 + 0x2b8))(param_1,*(undefined1 *)((longlong)param_1 + 0x219));
  *(undefined1 *)((longlong)param_1 + 0x4c1) = 1;
                    /* WARNING: Could not recover jumptable at 0x000142ecbc76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x510))(param_1);
  return;
}



// FUNCTION 142ecbc80 FUN_142ecbc80 body=884 status=ok
// SIG undefined FUN_142ecbc80(void)

void FUN_142ecbc80(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 local_res8 [2];
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong local_20;
  
  lVar5 = 0;
  local_res8[0] = 0;
  (**(code **)(*param_1 + 0x4b8))(param_1,local_res8);
  cVar1 = (**(code **)(*param_1 + 0x560))(param_1);
  if (cVar1 != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x21a) = 0;
    *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  }
  FUN_14073dc00(param_1);
  (**(code **)(*param_1 + 0x2b0))(param_1,(char)param_1[0x43]);
  (**(code **)(*param_1 + 0x2b8))(param_1,*(undefined1 *)((longlong)param_1 + 0x219));
  *(undefined1 *)((longlong)param_1 + 0x4c1) = 1;
  FUN_142ecf740(param_1);
  (**(code **)(*param_1 + 0x550))(param_1);
  TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>
            (param_1 + 0xd,&DAT_1469e9850);
  TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>
            (param_1 + 0xd,&DAT_1469e9820);
  TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>
            (param_1 + 0xd,&DAT_1469e9838);
  local_28 = (longlong *)0x0;
  local_20 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"hintBar",0x10);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  lVar3 = FUN_141021c90(param_1,&local_28,0,6,&local_38);
  param_1[0xb7] = lVar3;
  plVar6 = local_38;
  for (iVar7 = (int)local_30; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (param_1[0xb7] == 0) {
    local_38 = (longlong *)0x0;
    local_30 = 0x17;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"hintBarWrapper.hintBar",0x2e);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    lVar3 = FUN_141021c90(param_1,&local_38,0,6,&local_28);
    param_1[0xb7] = lVar3;
    plVar6 = local_28;
    for (iVar7 = (int)local_20; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  if ((param_1[0xb7] != 0) && (param_1[0xb6] != 0)) {
    *(char *)(param_1[0xb7] + 0x1e2) = (char)param_1[0xae];
    plVar6 = (longlong *)param_1[0xb7];
    lVar3 = lVar5;
    local_28 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      uVar4 = FUN_142f25a40();
      lVar3 = UObjectBaseUtility::GetInterfaceAddress(plVar6,uVar4);
    }
    local_20 = lVar3;
    FUN_142f0dc90(param_1[0xb6],&local_28);
  }
  lVar3 = param_1[0x57];
  if (lVar3 != 0) {
    local_28 = (longlong *)0x0;
    local_20 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"MouseBlockerClip",0x22);
    uVar4 = FUN_142f206d0();
    lVar5 = FUN_142ea7570(param_1[0x57],PTR_s_flash_display_Sprite_14673ca58,&local_28,uVar4);
  }
  param_1[0xb8] = lVar5;
  if ((lVar3 != 0) && (local_28 != (longlong *)0x0)) {
    FMemory::Free();
    lVar5 = param_1[0xb8];
  }
  if (lVar5 == 0) {
    *(undefined1 *)((longlong)param_1 + 0x5e1) = 1;
  }
  if ((param_1[0xb6] != 0) && (*(char *)(param_1[0xb6] + 0xa2) != '\0')) {
    uVar2 = FUN_142ebd930(param_1);
    FUN_142f11000(param_1[0xb6],uVar2);
  }
  cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x59c);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    lVar5 = FWeakObjectPtr::Get((longlong)param_1 + 0x59c);
    uVar2 = *(undefined1 *)(lVar5 + 0xb9);
  }
  (**(code **)(param_1[0x9b] + 0xe0))(param_1 + 0x9b,uVar2);
  *(undefined1 *)((longlong)param_1 + 0x621) = 1;
  FUN_142eb9770(param_1);
  return;
}



// FUNCTION 142ecc000 FUN_142ecc000 body=65 status=ok
// SIG undefined FUN_142ecc000(void)

void FUN_142ecc000(longlong *param_1)

{
  FUN_14073dc00();
  (**(code **)(*param_1 + 0x2b0))(param_1,(char)param_1[0x43]);
  (**(code **)(*param_1 + 0x2b8))(param_1,*(undefined1 *)((longlong)param_1 + 0x219));
  *(undefined1 *)((longlong)param_1 + 0x4c1) = 1;
  return;
}



// FUNCTION 142ecc060 FUN_142ecc060 body=677 status=ok
// SIG undefined FUN_142ecc060(void)

void FUN_142ecc060(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  undefined8 local_res8;
  longlong local_res10;
  
  if (param_2 != 0) {
    lVar6 = URemnantGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      iVar13 = *(int *)(param_2 + 0x2d8);
      goto LAB_142ecc0b6;
    }
  }
  iVar13 = -1;
LAB_142ecc0b6:
  if (*(int *)(param_1 + 0x1c8) == 1) {
    if ((iVar13 < 0) || (*(int *)(param_1 + 0x1d8) <= iVar13)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (lVar6 = *(longlong *)(param_1 + 0x38), lVar6 != 0)) {
      lVar7 = USoUIInputKeySelector::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        local_res8 = 0;
        if (((*(longlong *)(param_1 + 0x1f0) != 0) &&
            (*(longlong *)(lVar6 + 0x688) == *(longlong *)(param_1 + 0x1f0))) ||
           (*(longlong *)(lVar6 + 0x688) !=
            *(longlong *)((longlong)iVar13 * 0x58 + *(longlong *)(param_1 + 0x1d0)))) {
          iVar12 = 0;
          iVar2 = *(int *)(lVar6 + 0x698);
          if (0 < iVar2) {
            do {
              iVar11 = (iVar12 + iVar13) % iVar2;
              lVar14 = (longlong)iVar11 * 0x58;
              local_res8 = CONCAT44(local_res8._4_4_,iVar11);
              lVar7 = *(longlong *)(param_1 + 0x1d0) + lVar14;
              local_res10 = *(longlong *)(lVar7 + 0x38);
              if (*(longlong *)(lVar7 + 0x48) != 0) {
                lVar8 = AGShrineUsable::GetPrivateStaticClass();
                lVar7 = *(longlong *)(lVar7 + 0x48);
                for (lVar3 = lVar7; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
                  if (lVar3 == lVar8) goto LAB_142ecc1e1;
                }
              }
              lVar7 = 0;
LAB_142ecc1e1:
              cVar1 = *(char *)(lVar14 + 0x50 + *(longlong *)(param_1 + 0x1d0));
              if (local_res10 == 0) {
                cVar5 = '\0';
                if (lVar7 != 0) goto LAB_142ecc20d;
              }
              else {
                cVar5 = (**(code **)(**(longlong **)(lVar14 + 0x38 + *(longlong *)(param_1 + 0x1d0))
                                    + 0x290))();
LAB_142ecc20d:
                if ((cVar1 != '\0') && (cVar5 == '\0')) {
                  iVar13 = (int)local_res8;
                  break;
                }
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 < iVar2);
          }
          FUN_142eda790(lVar6,(longlong)iVar13 * 0x58 + *(longlong *)(param_1 + 0x1d0),4);
        }
      }
    }
  }
  else if (*(int *)(param_1 + 0x1c8) == 2) {
    if ((iVar13 < 0) || (*(int *)(param_1 + 0x1e8) <= iVar13)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      local_res8 = 0;
      uVar10 = *(undefined8 *)((longlong)iVar13 * 0x38 + *(longlong *)(param_1 + 0x1e0));
      if (((*(longlong *)(param_1 + 0x178) != 0) &&
          (lVar6 = FWeakObjectPtr::Get(param_1 + 0x170), lVar6 != 0)) &&
         (lVar6 = UObject::FindFunction(lVar6,*(undefined8 *)(param_1 + 0x178)), lVar6 != 0)) {
        local_res8 = uVar10;
        plVar9 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x170);
        uVar10 = FUN_14178ac60(plVar9,*(undefined8 *)(param_1 + 0x178));
        (**(code **)(*plVar9 + 0x208))(plVar9,uVar10,&local_res8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142ecc310 FUN_142ecc310 body=402 status=ok
// SIG undefined FUN_142ecc310(void)

void FUN_142ecc310(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_88;
  uint local_80;
  int local_78;
  undefined4 uStack_74;
  longlong local_68 [2];
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  plVar4 = (longlong *)0x0;
  if ((*(int *)(param_1 + 0x3f8) != 0) || (*(int *)(param_1 + 0x3fc) != 0)) {
    local_98 = 0xffffffffffffffff;
    uStack_90 = 0xffffffffffffffff;
    local_88 = (longlong *)0x0;
    local_80 = 0;
    (**(code **)(**(longlong **)(param_2 + 0x10) + 0x20))
              (*(longlong **)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x20),"keyCode",&local_98,
               ((byte)*(undefined4 *)(param_2 + 0x18) & 0x8f) == 10);
    if ((local_78 - 0xdU & 0xfffffffb) != 0) {
      FWeakObjectPtr::operator=(&local_res8,param_1);
      local_28 = 0;
      local_18 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_48);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_1444f8920;
        puVar2[1] = param_1;
        *(undefined4 *)(puVar2 + 2) = local_res8;
        *(undefined4 *)((longlong)puVar2 + 0x14) = local_resc;
      }
      local_58[0] = &LAB_142eb0bb0;
      FUN_14204c280(local_58);
    }
    if ((local_80 >> 6 & 1) != 0) {
      (**(code **)(*local_88 + 0x10))(local_88,&local_98,CONCAT44(uStack_74,local_78));
    }
  }
  if ((*(int *)(param_1 + 0x390) != 0) && (*(longlong **)(param_1 + 0x388) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x388) + 0x18))();
    if (cVar1 != '\0') {
      uVar3 = FUN_142eb8af0(param_1,local_68);
      if (*(int *)(param_1 + 0x390) != 0) {
        plVar4 = *(longlong **)(param_1 + 0x388);
      }
      (**(code **)(*plVar4 + 0x38))(plVar4,param_1,uVar3);
      if (local_68[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 142ecc4b0 FUN_142ecc4b0 body=90 status=ok
// SIG undefined FUN_142ecc4b0(void)

void FUN_142ecc4b0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x310);
  if (((cVar3 != '\0') && (*(char *)(param_1 + 0x3b8) == '\0')) && (*(int *)(param_1 + 0x328) == 1))
  {
    uVar1 = *(undefined8 *)(param_1 + 800);
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x310);
    FUN_142ef9920(uVar2,uVar1,0);
  }
  return;
}



// FUNCTION 142ecc510 FUN_142ecc510 body=394 status=ok
// SIG undefined FUN_142ecc510(void)

void FUN_142ecc510(longlong param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  float fVar8;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_38 [8];
  undefined8 local_30;
  longlong *plStack_28;
  undefined1 local_20;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  cVar5 = (**(code **)(*(longlong *)(param_1 + 0x170) + 0x10))();
  if ((cVar5 == '\a') || (cVar5 == '\x04')) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((*(char *)(param_1 + 0x275) == '\0') || (!bVar4)) {
    *(undefined4 *)(param_1 + 0x270) = 0;
    return;
  }
  plVar6 = (longlong *)UTwitchInteractivitySettings::GetPrivateStaticClass();
  lVar7 = plVar6[0x1f];
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar7 = plVar6[0x1f];
    if (lVar7 == 0) {
      fVar8 = 1.0;
      goto LAB_142ecc596;
    }
  }
  fVar8 = *(float *)(lVar7 + 0x38);
LAB_142ecc596:
  param_2 = param_2 + *(float *)(param_1 + 0x270);
  *(float *)(param_1 + 0x270) = param_2;
  if ((fVar8 <= param_2) &&
     (*(float *)(param_1 + 0x270) = fVar8, *(char *)(param_1 + 0x274) == '\0')) {
    *(undefined1 *)(param_1 + 0x274) = 1;
    FName::FName(&local_48,&DAT_143f3eda8,1);
    local_3c = 0;
    local_40 = 0xffffffff;
    FName::FName(local_38,&DAT_143f3eda8,1);
    local_48 = DAT_146b3d9a8;
    local_20 = 0;
    local_40 = 0;
    local_30 = 0;
    plStack_28 = (longlong *)0x0;
    FUN_142eb4390(param_1 + 0x230,param_1,&local_48);
    plVar6 = plStack_28;
    *(undefined1 *)(param_1 + 0x276) = 1;
    if (plStack_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_28 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_28)(plStack_28);
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
  return;
}



// FUNCTION 142ecc6c0 FUN_142ecc6c0 body=852 status=ok
// SIG undefined FUN_142ecc6c0(void)

void FUN_142ecc6c0(longlong *param_1,undefined4 param_2)

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
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  LOCK();
  iVar7 = *(int *)((longlong)param_1 + 0x304);
  *(int *)((longlong)param_1 + 0x304) = 0;
  UNLOCK();
  if (iVar7 != 0) {
    FUN_142eb4a70(param_1);
  }
  bVar10 = false;
  cVar6 = FUN_142f13060(param_1 + 0x57,param_2);
  if ((cVar6 != '\0') || (*(char *)((longlong)param_1 + 0x2ec) != '\0')) {
    if (*(char *)((longlong)param_1 + 0x2ec) == '\0') {
      cVar6 = FUN_142eb3410();
      if (cVar6 == '\0') {
        (**(code **)(*param_1 + 0x340))(param_1);
        goto LAB_142ecc753;
      }
      LOCK();
      *(undefined4 *)(param_1 + 0x62) = 1;
      UNLOCK();
    }
    else {
      (**(code **)(*param_1 + 0x300))(param_1);
LAB_142ecc753:
      bVar10 = true;
    }
    LOCK();
    *(undefined4 *)((longlong)param_1 + 0x314) = 1;
    UNLOCK();
    *(undefined1 *)((longlong)param_1 + 0x2ec) = 0;
  }
  LOCK();
  iVar7 = *(int *)((longlong)param_1 + 0x30c);
  *(int *)((longlong)param_1 + 0x30c) = 0;
  UNLOCK();
  if (iVar7 != 0) {
    (**(code **)(*param_1 + 0x338))(param_1);
    bVar10 = true;
  }
  LOCK();
  lVar9 = param_1[0x62];
  *(int *)(param_1 + 0x62) = 0;
  UNLOCK();
  if ((int)lVar9 != 0) {
    (**(code **)(*param_1 + 0x340))(param_1);
    bVar10 = true;
  }
  LOCK();
  iVar7 = *(int *)((longlong)param_1 + 0x314);
  *(int *)((longlong)param_1 + 0x314) = 0;
  UNLOCK();
  if (iVar7 != 0) {
    FUN_142edbed0(param_1);
    bVar10 = true;
  }
  LOCK();
  iVar7 = *(int *)((longlong)param_1 + 0x304);
  *(int *)((longlong)param_1 + 0x304) = 0;
  UNLOCK();
  if (iVar7 == 0) {
    if (!bVar10) {
      return;
    }
  }
  else {
    FUN_142eb4a70(param_1);
  }
  if ((param_1[5] != 0) && (param_1[6] != 0)) {
    piVar1 = (int *)(param_1[6] + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      local_40 = (longlong *)param_1[6];
      local_48 = 0;
      if (local_40 == (longlong *)0x0) {
LAB_142ecc86d:
        plVar8 = &local_48;
        bVar4 = true;
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
              local_48 = param_1[5];
            }
            goto LAB_142ecc86d;
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
        bVar4 = true;
        bVar10 = false;
        lVar9 = 0;
      }
      goto LAB_142ecc894;
    }
  }
  plVar8 = &local_38;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  bVar4 = false;
  bVar10 = true;
  lVar9 = 0;
LAB_142ecc894:
  plVar3 = (longlong *)plVar8[1];
  plVar8[1] = 0;
  *plVar8 = 0;
  plVar8 = plStack_30;
  if ((bVar10) && (plStack_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_30 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if ((bVar4) && (local_40 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
    plVar8 = *(longlong **)(lVar9 + 0x80);
    lVar9 = *(longlong *)(lVar9 + 0x78);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar8 + 1;
          lVar5 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
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
    }
    if (lVar9 != 0) {
      FUN_142033230(lVar9);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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



// FUNCTION 142ecca20 FUN_142ecca20 body=169 status=ok
// SIG undefined FUN_142ecca20(void)

void FUN_142ecca20(longlong *param_1,float param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  LOCK();
  bVar3 = *(int *)((longlong)param_1 + 0x61c) == 0;
  if (bVar3) {
    *(int *)((longlong)param_1 + 0x61c) = 0;
  }
  UNLOCK();
  if ((!bVar3) && (cVar1 = FUN_14208a080(param_1), cVar1 == '\0')) {
    FUN_142eccf30(param_1,param_2);
    (**(code **)(*param_1 + 0x568))(param_1,param_2);
    if ((1e-08 < *(float *)((longlong)param_1 + 0x5fc)) && (param_1[0xb6] != 0)) {
      param_2 = *(float *)((longlong)param_1 + 0x5fc) - param_2;
      *(float *)((longlong)param_1 + 0x5fc) = param_2;
      FUN_142ed2e60(param_1[0xb6],param_2 / *(float *)(param_1 + 0xac));
    }
  }
  if ((0 < (int)param_1[0xad]) &&
     (iVar2 = (int)param_1[0xad] + -1, *(int *)(param_1 + 0xad) = iVar2, iVar2 < 1)) {
    FUN_142ed4f30(param_1,0,0);
  }
  return;
}



// FUNCTION 142eccad0 FUN_142eccad0 body=1035 status=ok
// SIG undefined FUN_142eccad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142eccad0(longlong param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  char *pcVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_168 [32];
  char *local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined1 local_124;
  undefined1 local_120 [8];
  undefined8 local_118;
  longlong *plStack_110;
  undefined1 local_108;
  undefined1 *local_f8 [2];
  longlong local_e8 [4];
  longlong *local_c8;
  int local_b8;
  undefined1 local_a8 [16];
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  cVar6 = (**(code **)(*(longlong *)(param_1 + 0x170) + 0x10))(param_1 + 0x170);
  if ((cVar6 == '\a') || (cVar6 == '\x04')) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((*(char *)(param_1 + 0x275) == '\0') || (!bVar4)) {
    *(undefined4 *)(param_1 + 0x270) = 0;
  }
  else {
    plVar7 = (longlong *)UTwitchInteractivitySettings::GetPrivateStaticClass();
    lVar10 = plVar7[0x1f];
    if (lVar10 == 0) {
      (**(code **)(*plVar7 + 0x368))(plVar7);
      lVar10 = plVar7[0x1f];
      if (lVar10 != 0) goto LAB_142eccb80;
      fVar13 = 1.0;
    }
    else {
LAB_142eccb80:
      fVar13 = *(float *)(lVar10 + 0x38);
    }
    fVar12 = param_2 + *(float *)(param_1 + 0x270);
    *(float *)(param_1 + 0x270) = fVar12;
    if ((fVar13 <= fVar12) &&
       (*(float *)(param_1 + 0x270) = fVar13, *(char *)(param_1 + 0x274) == '\0')) {
      *(undefined1 *)(param_1 + 0x274) = 1;
      FName::FName(&local_130,&DAT_143f3eda8,1);
      local_124 = 0;
      local_128 = 0xffffffff;
      FName::FName(local_120,&DAT_143f3eda8,1);
      local_130 = DAT_146b3d9a8;
      local_108 = 0;
      local_128 = 0;
      local_118 = 0;
      plStack_110 = (longlong *)0x0;
      FUN_142eb4390(param_1 + 0x230,param_1,&local_130);
      plVar7 = plStack_110;
      *(undefined1 *)(param_1 + 0x276) = 1;
      if (plStack_110 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_110 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plStack_110)(plStack_110);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x328) != 1) {
    return;
  }
  if (*(char *)(param_1 + 0x3b8) == '\0') {
    return;
  }
  local_148 = (char *)0x0;
  local_140 = 0;
  FUN_142eb6890(param_1,&local_148);
  if ((int)local_140 == 0) {
    pcVar11 = local_148;
    if (local_148 == (char *)0x0) {
      return;
    }
    goto LAB_142ecce9c;
  }
  cVar6 = (**(code **)(*(longlong *)(param_1 + 0x170) + 0x10))(param_1 + 0x170);
  pcVar11 = local_148;
  fVar13 = 0.0;
  if ((cVar6 == '\a') || (cVar6 == '\x04')) {
    param_2 = param_2 + *(float *)(param_1 + 0x3bc);
    *(float *)(param_1 + 0x3bc) = param_2;
  }
  else {
    *(undefined4 *)(param_1 + 0x3bc) = 0;
    param_2 = 0.0;
    *(undefined1 *)(param_1 + 0x3c0) = 0;
  }
  fVar12 = *(float *)(local_148 + 4);
  if (1e-08 < ABS(fVar12)) {
    fVar14 = *(float *)(local_148 + 8) / fVar12;
    if (0.0 <= fVar14) goto LAB_142eccd2e;
    fVar14 = 0.0;
  }
  else {
    if (*(float *)(local_148 + 8) < fVar12) {
      fVar14 = 0.0;
    }
    else {
      fVar14 = 1.0;
    }
LAB_142eccd2e:
    if (1.0 <= fVar14) {
      fVar14 = 1.0;
    }
  }
  if ((*(char *)(param_1 + 0x3c3) != '\0') && (fVar14 = 0.0, *local_148 == '\0')) {
    *(undefined1 *)(param_1 + 0x3c3) = 0;
    fVar12 = *(float *)(local_148 + 4);
  }
  if (1e-08 < ABS(fVar12)) {
    fVar5 = param_2 / fVar12;
    if (0.0 <= param_2 / fVar12) goto LAB_142eccd85;
  }
  else {
    if (param_2 < fVar12) {
      fVar5 = 0.0;
    }
    else {
      fVar5 = 1.0;
    }
LAB_142eccd85:
    fVar13 = fVar5;
    if (1.0 <= fVar13) {
      fVar13 = 1.0;
    }
  }
  if (fVar13 <= fVar14) {
    fVar13 = fVar14;
  }
  FUN_142ed2e60(param_1,1.0 - fVar13);
  if ((*(char *)(param_1 + 0x3c0) == '\0') &&
     (*(float *)(pcVar11 + 4) < *(float *)(param_1 + 0x3bc) ||
      *(float *)(pcVar11 + 4) == *(float *)(param_1 + 0x3bc))) {
    *(undefined1 *)(param_1 + 0x3c0) = 1;
    FWeakObjectPtr::operator=(&local_138,param_1);
    local_c8 = (longlong *)0x0;
    local_b8 = 0;
    puVar8 = (undefined8 *)FUN_140438ef0(0x18,local_e8);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_FUN_1444f8920;
      puVar8[1] = param_1;
      *(undefined4 *)(puVar8 + 2) = local_138;
      *(undefined4 *)((longlong)puVar8 + 0x14) = local_134;
    }
    local_f8[0] = &LAB_142eb0940;
    uVar9 = FUN_1420849a0(param_1,local_a8,local_f8);
    FUN_14208c300(param_1,uVar9);
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
    if (local_b8 != 0) {
      plVar7 = local_e8;
      if (local_c8 != (longlong *)0x0) {
        plVar7 = local_c8;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
LAB_142ecce9c:
  FMemory::Free(pcVar11);
  return;
}



// FUNCTION 142eccee0 FUN_142eccee0 body=77 status=ok
// SIG undefined FUN_142eccee0(void)

void FUN_142eccee0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 local_res8 [32];
  
  (**(code **)(*param_1 + 0x4b8))(param_1,local_res8);
  FUN_142eccf30(param_1,param_2);
  LOCK();
  lVar1 = param_1[0xb1];
  *(int *)(param_1 + 0xb1) = 0;
  UNLOCK();
  if ((int)lVar1 != 0) {
    (**(code **)(*param_1 + 0x540))(param_1);
  }
  return;
}



// FUNCTION 142eccf30 FUN_142eccf30 body=390 status=ok
// SIG undefined FUN_142eccf30(void)

void FUN_142eccf30(longlong param_1,float param_2)

{
  void *_Src;
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *local_88;
  int local_80;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  FUN_14208b4b0();
  FUN_1428909d0(param_1 + 0x340,param_2);
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x4b0));
  LOCK();
  *(int *)(param_1 + 0x4bc) = *(int *)(param_1 + 0x4bc) + 1;
  UNLOCK();
  local_80 = *(int *)(param_1 + 0x4a8);
  lVar4 = (longlong)local_80;
  uVar5 = 0;
  _Src = *(void **)(param_1 + 0x4a0);
  local_88 = (longlong *)0x0;
  if (local_80 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_88,local_80,0);
    _guard_xfg_dispatch_icall_nop(local_88,_Src,lVar4 << 3);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x4b0));
  plVar2 = local_88;
  LOCK();
  *(int *)(param_1 + 0x4bc) = *(int *)(param_1 + 0x4bc) + -1;
  UNLOCK();
  uVar6 = (ulonglong)((longlong)(local_88 + local_80) + (7 - (longlong)local_88)) >> 3;
  if (local_88 + local_80 < local_88) {
    uVar6 = uVar5;
  }
  plVar7 = local_88;
  if (uVar6 != 0) {
    do {
      plVar1 = (longlong *)*plVar7;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x2a0))(plVar1,param_2);
      }
      plVar7 = plVar7 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar6);
  }
  if (*(char *)(param_1 + 0x2e8) != '\0') {
    param_2 = *(float *)(param_1 + 0x2ec) - param_2;
    *(float *)(param_1 + 0x2ec) = param_2;
    if (param_2 <= 0.0) {
      local_48 = 0;
      local_38 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_68);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3[1] = param_1;
        *puVar3 = &PTR_FUN_143f77b70;
      }
      local_78[0] = &LAB_142eb07e0;
      FUN_14204c280(local_78);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  return;
}



// FUNCTION 142ecd0c0 FUN_142ecd0c0 body=259 status=ok
// SIG undefined FUN_142ecd0c0(void)

void FUN_142ecd0c0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  
  cVar3 = *(char *)(param_1 + 0x4d8);
  if (cVar3 == '\0') {
    cVar3 = FUN_142eba8c0(param_1);
    if (cVar3 == '\0') {
      FUN_142ed9700(param_1);
      return;
    }
    *(undefined1 *)(param_1 + 0x4d8) = 1;
    return;
  }
  if (cVar3 == '\x01') {
    iVar1 = *(int *)(param_1 + 0x518);
    plVar2 = *(longlong **)(param_1 + 0x510);
    for (plVar4 = plVar2; plVar4 != plVar2 + iVar1; plVar4 = plVar4 + 1) {
      if (((longlong *)*plVar4 != (longlong *)0x0) &&
         (cVar3 = (**(code **)(*(longlong *)*plVar4 + 0x480))(), cVar3 == '\0')) {
        if ((plVar4 != plVar2 + iVar1) && ((int)((longlong)plVar4 - (longlong)plVar2 >> 3) != -1)) {
          return;
        }
        break;
      }
    }
    *(undefined1 *)(param_1 + 0x4d8) = 2;
  }
  else {
    if (cVar3 == '\x02') {
      if (*(char *)(param_1 + 0x5b1) == '\0') {
        FUN_142ecde00(param_1);
        return;
      }
      *(undefined1 *)(param_1 + 0x4d8) = 3;
      TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x4f8);
      return;
    }
    if (cVar3 == '\x03') {
      FUN_142eba380(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 142ecd1d0 FUN_142ecd1d0 body=310 status=ok
// SIG undefined FUN_142ecd1d0(void)

void FUN_142ecd1d0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_18 [16];
  
  if ((*(int *)(param_1 + 0x558) == 0) && (*(int *)(param_1 + 0x55c) == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    if ((*(int *)(param_1 + 0x558) == 0) && (*(int *)(param_1 + 0x55c) == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if ((((!bVar1) && (cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x5e0), cVar2 != '\0')) &&
        (*(longlong *)(param_1 + 0x2b8) != 0)) &&
       (plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x5e0), plVar3 != (longlong *)0x0)) {
      lVar4 = AHeoCon::GetPrivateStaticClass();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (((bVar1) &&
          (plVar3 = (longlong *)(**(code **)(*plVar3 + 0xa58))(plVar3), plVar3 != (longlong *)0x0))
         && (cVar2 = (**(code **)(*plVar3 + 0x440))(plVar3,*(undefined8 *)(param_1 + 0x558)),
            cVar2 != '\0')) {
        (**(code **)(*plVar3 + 0x428))(plVar3,local_18,*(undefined8 *)(param_1 + 0x558));
        FUN_142edb1a0(param_1,local_18,&local_res8,1,1);
        FUN_14208ff10(*(undefined8 *)(param_1 + 0x2b8),local_res8,local_resc);
      }
    }
  }
  return;
}



// FUNCTION 142ecd310 FUN_142ecd310 body=53 status=ok
// SIG undefined FUN_142ecd310(void)

void FUN_142ecd310(longlong *param_1)

{
  undefined8 uVar1;
  
  (**(code **)(*param_1 + 0x5b8))(param_1,(longlong)param_1 + 0x21c);
  uVar1 = FWeakObjectPtr::Get(param_1 + 0xbb);
  FUN_142ed56a0(param_1,uVar1);
  return;
}



// FUNCTION 142ecd360 FUN_142ecd360 body=17 status=ok
// SIG undefined FUN_142ecd360(void)

ulonglong FUN_142ecd360(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong in_RAX;
  
  lVar1 = *(longlong *)(param_1 + 0x90);
  if (lVar1 == 0) {
    return in_RAX;
  }
  uVar2 = FUN_142aa72a0();
  if (param_2 != (longlong *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0x280))(param_2);
    if ((char)uVar2 != '\0') {
      UMediaPlaylist::Add(*(undefined8 *)(lVar1 + 200),param_2);
      uVar2 = FUN_142aaac80(lVar1);
      return uVar2;
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 142ecd380 FUN_142ecd380 body=7 status=ok
// SIG undefined FUN_142ecd380(void)

void FUN_142ecd380(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x620) = param_2;
  return;
}



// FUNCTION 142ecd390 FUN_142ecd390 body=53 status=ok
// SIG undefined FUN_142ecd390(void)

void FUN_142ecd390(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    cVar1 = FUN_142aa6d20();
    if (cVar1 != '\0') {
      FUN_142aab510(*(undefined8 *)(param_1 + 0x90));
      return;
    }
  }
  return;
}



// FUNCTION 142ecd3d0 FUN_142ecd3d0 body=17 status=ok
// SIG undefined FUN_142ecd3d0(void)

void FUN_142ecd3d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x90) == 0) {
    return;
  }
  FMediaPlayerFacade::SetRate(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x120),0x3f800000);
  return;
}



// FUNCTION 142ecd3f0 FUN_142ecd3f0 body=108 status=ok
// SIG undefined FUN_142ecd3f0(void)

void FUN_142ecd3f0(longlong param_1)

{
  longlong local_18 [2];
  
  if (*(longlong *)(param_1 + 0x5f0) != 0) {
    local_18[1] = 5;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"hide",10);
    FUN_142088910(*(undefined8 *)(param_1 + 0x5f0),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142ecd460 FUN_142ecd460 body=108 status=ok
// SIG undefined FUN_142ecd460(void)

void FUN_142ecd460(longlong param_1)

{
  longlong local_18 [2];
  
  if (*(longlong *)(param_1 + 0x5f0) != 0) {
    local_18[1] = 4;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],&DAT_145986788,8);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x5f0),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142ecd4d0 FUN_142ecd4d0 body=138 status=ok
// SIG undefined FUN_142ecd4d0(void)

void FUN_142ecd4d0(longlong param_1)

{
  char cVar1;
  longlong local_18 [2];
  
  cVar1 = (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x170))();
  if (cVar1 == '\0') {
    FUN_142090ed0(param_1,1);
  }
  if (*(longlong *)(param_1 + 0x5f0) != 0) {
    local_18[1] = 5;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"show",10);
    FUN_142088910(*(undefined8 *)(param_1 + 0x5f0),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142ecd560 FUN_142ecd560 body=277 status=ok
// SIG undefined FUN_142ecd560(void)

void FUN_142ecd560(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x2e8) != '\0') {
    local_48 = 0;
    local_38 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_68);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = param_1;
      *puVar1 = &PTR_FUN_143f77b70;
    }
    local_78[0] = &LAB_142eb07e0;
    FUN_14204c280(local_78);
  }
  if (param_2 == 0) {
    if (*(int *)(param_4 + 8) != 0) {
      plVar3 = (longlong *)param_4[6];
      if ((longlong *)param_4[6] == (longlong *)0x0) {
        plVar3 = param_4 + 2;
      }
      if (plVar3 != (longlong *)0x0) {
        if (plVar3 != (longlong *)0x0) {
          uVar2 = (**(code **)(*plVar3 + 8))();
        }
        (*(code *)*param_4)(uVar2);
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x2ec) = param_5;
    *(undefined1 *)(param_1 + 0x2e8) = 1;
    uVar2 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,param_4);
    TFunction<void___cdecl(int)>::operator=(param_1 + 0x2f0,uVar2);
    FUN_142088910(param_2,param_3);
  }
  if (*(int *)(param_4 + 8) != 0) {
    plVar3 = (longlong *)param_4[6];
    if ((longlong *)param_4[6] == (longlong *)0x0) {
      plVar3 = param_4 + 2;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (param_4[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ecd680 FUN_142ecd680 body=724 status=ok
// SIG undefined FUN_142ecd680(void)

void FUN_142ecd680(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  if (0 < *(int *)(param_1 + 0x310)) {
    plVar3 = (longlong *)(param_1 + 0x308);
    lVar9 = (longlong)*(int *)(param_1 + 0x310) * 0x38 + *plVar3;
    FText::FText(local_60,lVar9 + -0x30);
    local_48 = *(undefined1 *)(lVar9 + -0x18);
    uVar11 = 0;
    local_44 = *(undefined4 *)(lVar9 + -0x14);
    local_40 = *(undefined8 *)(lVar9 + -0x10);
    *(undefined8 *)(lVar9 + -0x10) = 0;
    local_38 = *(undefined4 *)(lVar9 + -8);
    local_34 = *(undefined4 *)(lVar9 + -4);
    *(undefined8 *)(lVar9 + -8) = 0;
    iVar12 = *(int *)(param_1 + 0x310);
    lVar9 = *plVar3;
    lVar10 = (longlong)iVar12 * 0x38 + -0x38;
    FUN_142ea9b10(lVar9 + 0x28 + lVar10);
    plVar4 = *(longlong **)(lVar9 + 0x10 + lVar10);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    iVar8 = *(int *)(param_1 + 0x310);
    iVar5 = (iVar8 - (iVar12 + -1)) + -1;
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar3 + lVar10),(void *)((longlong)iVar12 * 0x38 + *plVar3),
                 (longlong)iVar5 * 0x38);
      iVar8 = *(int *)(param_1 + 0x310);
    }
    *(int *)(param_1 + 0x310) = iVar8 + -1;
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeShrink
              (plVar3);
    FUN_142ea9b10(&local_40);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_58 + 1;
      lVar9 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)local_58 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
    iVar12 = *(int *)(param_1 + 0x310);
    if ((iVar12 < 1) || (*(int *)((longlong)*(int *)(param_1 + 0x310) * 0x38 + -8 + *plVar3) != 0))
    {
      iVar8 = *(int *)(param_1 + 0x2c8);
      if (iVar12 < iVar8) {
        iVar8 = iVar12 + -1;
        if ((-1 < iVar12) &&
           (lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x2c0) + (longlong)iVar12 * 8), lVar9 != 0
           )) {
          (**(code **)(*(longlong *)(lVar9 + 0x148) + 0x38))();
        }
      }
      else {
        iVar5 = iVar8 + -1;
        if (-1 < iVar5) {
          iVar8 = iVar8 + -2;
          lVar9 = (longlong)iVar5;
          do {
            lVar10 = lVar9 + -1;
            uVar7 = uVar11;
            if ((-1 < lVar10) && (iVar8 < *(int *)(param_1 + 0x2c8))) {
              uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x2c0) + -8 + lVar9 * 8);
            }
            uVar6 = uVar11;
            if ((-1 < lVar9) && (iVar5 < *(int *)(param_1 + 0x2c8))) {
              uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x2c0) + lVar9 * 8);
            }
            FUN_142ebe6b0(uVar6,uVar7);
            iVar5 = iVar5 + -1;
            iVar8 = iVar8 + -1;
            lVar9 = lVar10;
          } while (-1 < lVar10);
        }
        FUN_142f18f10(param_1);
        iVar5 = *(int *)(param_1 + 0x2c8);
        iVar12 = iVar12 - iVar5;
        iVar8 = iVar5 + -1;
        if ((-1 < iVar12) && (iVar12 < *(int *)(param_1 + 0x310))) {
          lVar9 = (longlong)iVar12 * 0x38 + *plVar3;
          uVar7 = uVar11;
          if (0 < iVar5) {
            uVar7 = **(undefined8 **)(param_1 + 0x2c0);
          }
          FUN_142ecdb20(param_1,uVar7,lVar9 + 0x28,*(undefined4 *)(lVar9 + 0x24),lVar9);
        }
      }
      if ((-1 < iVar8) && (iVar8 < *(int *)(param_1 + 0x2c8))) {
        uVar11 = *(undefined8 *)(*(longlong *)(param_1 + 0x2c0) + (longlong)iVar8 * 8);
      }
      FUN_142ed2060(param_1,uVar11);
    }
  }
  return;
}



// FUNCTION 142ecd960 FUN_142ecd960 body=340 status=ok
// SIG undefined FUN_142ecd960(void)

void FUN_142ecd960(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar4 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  FUN_142eedeb0(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(int *)(param_1 + 0x58) = param_2;
  if ((param_2 < 1) || (*(int *)(param_1 + 0x54) < 1)) {
    iVar2 = 1;
  }
  else {
    fVar5 = (float)(param_2 / *(int *)(param_1 + 0x54));
    iVar2 = -((int)ROUND(-0.5 - (fVar5 + fVar5)) >> 1);
  }
  iVar3 = *(int *)(param_1 + 0xa4);
  iVar1 = iVar3;
  if (iVar3 <= iVar2) {
    iVar1 = iVar2;
  }
  FUN_142f11a80(param_1 + 0x20,(float)iVar3 * *(float *)(param_1 + 0x90),
                (float)iVar1 * *(float *)(param_1 + 0x90));
  FUN_142f0ee50(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  if ((param_3 == '\0') || (iVar4 == -1)) {
    iVar4 = -1;
    if (*(int *)(param_1 + 0x9c) < -1) {
      iVar4 = *(int *)(param_1 + 0x9c);
    }
    FUN_142ed2f20(param_1,iVar4);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x58) + -1;
    if (iVar4 <= iVar2) {
      iVar2 = iVar4;
    }
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    iVar4 = *(int *)(param_1 + 0x9c);
    iVar3 = iVar2;
    if ((iVar4 != -1) && (iVar4 < iVar2)) {
      iVar3 = iVar4;
    }
    FUN_142ed2f20(param_1,iVar3);
    FUN_142ed1b40(param_1,iVar3,1);
    FUN_142f0ee50(param_1 + 0x20);
    FUN_142ed1b40(param_1,iVar2,0);
  }
  return;
}



// FUNCTION 142ecdac0 FUN_142ecdac0 body=86 status=ok
// SIG undefined FUN_142ecdac0(void)

void FUN_142ecdac0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x5b0);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0xc);
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
      FUN_142ee3e70(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 142ecdb20 FUN_142ecdb20 body=572 status=ok
// SIG undefined FUN_142ecdb20(void)

void FUN_142ecdb20(longlong *param_1,longlong param_2,longlong *param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  longlong local_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  longlong *local_68;
  longlong local_60;
  undefined8 local_58;
  undefined1 local_50 [24];
  
  if (param_2 != 0) {
    plVar7 = (longlong *)(param_2 + 0x148);
    local_68 = plVar7;
    (**(code **)(*plVar7 + 0x38))(plVar7);
    plVar8 = (longlong *)*param_3;
    plVar9 = plVar8 + (longlong)(int)param_3[1] * 7;
    if (plVar8 != plVar9) {
      plVar10 = plVar8 + 1;
      do {
        local_58 = 0;
        local_60 = param_2;
        uVar4 = FUN_142f2b0d0();
        local_58 = UObjectBaseUtility::GetInterfaceAddress(param_2,uVar4);
        uVar4 = (**(code **)(*param_1 + 0x2a0))(param_1);
        lVar5 = FUN_142ee6de0(&local_60,uVar4);
        if (lVar5 != 0) {
          uVar4 = FText::FText(local_50,plVar10);
          FUN_142f0e010(lVar5,uVar4);
        }
        if ((param_1[0x5f] == 0) || (lVar6 = FWeakObjectPtr::Get(param_1 + 0x5e), lVar6 == 0)) {
          bVar11 = false;
        }
        else {
          lVar6 = UObject::FindFunction(lVar6,param_1[0x5f]);
          bVar11 = lVar6 != 0;
        }
        if (bVar11) {
          local_b8 = 0;
          uVar4 = FUN_1404b03b0();
          FText::FText(local_b0,uVar4);
          local_98 = 0;
          local_94 = 0;
          local_90 = 0;
          local_88 = 0;
          local_78 = 0;
          local_b8 = *plVar8;
          FText::operator=(local_b0,plVar10);
          local_98 = (undefined1)plVar10[3];
          local_94 = *(undefined4 *)((longlong)plVar10 + 0x1c);
          FUN_142ea9c20(&local_90,plVar10 + 4);
          local_78 = *param_5;
          local_80 = lVar5;
          plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x5e);
          uVar4 = FUN_14178ac60(plVar7,param_1[0x5f]);
          (**(code **)(*plVar7 + 0x208))(plVar7,uVar4,&local_b8);
          FUN_142ea9b10(&local_90);
          plVar7 = local_a8;
          if (local_a8 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_a8 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_a8)(local_a8);
              LOCK();
              piVar2 = (int *)((longlong)plVar7 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
        }
        plVar8 = plVar8 + 7;
        plVar10 = plVar10 + 7;
        plVar7 = local_68;
      } while (plVar8 != plVar9);
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,param_4,1,0);
  }
  return;
}



// FUNCTION 142ecdd60 FUN_142ecdd60 body=146 status=ok
// SIG undefined FUN_142ecdd60(void)

void FUN_142ecdd60(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 0x4e0);
  puVar3 = puVar2 + (longlong)*(int *)(param_1 + 0x4e8) * 10;
  if (puVar2 != puVar3) {
    plVar4 = puVar2 + 6;
    do {
      if ((int)plVar4[2] != 0) {
        plVar1 = (longlong *)*plVar4;
        if ((longlong *)*plVar4 == (longlong *)0x0) {
          plVar1 = plVar4 + -4;
        }
        if (plVar1 != (longlong *)0x0) {
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          (*(code *)*puVar2)();
        }
      }
      puVar2 = puVar2 + 10;
      plVar4 = plVar4 + 10;
    } while (puVar2 != puVar3);
  }
  FUN_142eb3c10((longlong *)(param_1 + 0x4e0),0);
  return;
}



// FUNCTION 142ecde00 FUN_142ecde00 body=1628 status=ok
// SIG undefined FUN_142ecde00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ecde00(longlong *param_1)

{
  void *_Src;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_168 [32];
  void *local_148;
  uint local_140;
  uint local_13c;
  longlong *local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  float local_108;
  float fStack_104;
  longlong local_100;
  longlong local_f8 [2];
  undefined1 *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0xb3);
  if ((cVar4 != '\0') && (lVar5 = FWeakObjectPtr::Get(param_1 + 0xb3), lVar5 != 0)) {
    uVar6 = FUN_142f30760();
    plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar6);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  plVar8 = (longlong *)FUN_142eb6c70(param_1,*(undefined4 *)((longlong)param_1 + 0x5b4));
  plVar7 = (longlong *)param_1[0xa2];
  local_130 = plVar7 + (int)param_1[0xa3];
  if (plVar7 != local_130) {
    do {
      lVar5 = *plVar7;
      if (lVar5 == 0) {
        return;
      }
      if (*(char *)(lVar5 + 0x4c0) == '\0') {
        cVar4 = FUN_14202a080();
        if (cVar4 == '\0') {
          return;
        }
        if ((*(byte *)(lVar5 + 0x624) & 1) == 0) {
          return;
        }
        if (*(int *)(lVar5 + 0x530) != 0) {
          lVar14 = 0;
          if (*(longlong *)(lVar5 + 0x520) == 0) {
            lVar14 = lVar5 + 0x500;
          }
          if (lVar14 != 0 || *(longlong *)(lVar5 + 0x520) != 0) goto LAB_142ece166;
        }
        if ((plVar8 != (longlong *)0x0) && (*plVar8 != 0)) {
          local_100 = param_1[3];
          FName::ToString(&local_100,local_f8);
          if (*(int *)(lVar5 + 0x5c0) == 0) {
            puVar13 = &DAT_143f3eda8;
          }
          else {
            puVar13 = *(undefined2 **)(lVar5 + 0x5b8);
          }
          puVar10 = (undefined8 *)FName::FName(&local_148,puVar13,1);
          lVar14 = FUN_142ea7b20(*plVar8,*puVar10,local_f8,0);
          if (local_f8[0] != 0) {
            FMemory::Free();
          }
          if (lVar14 != 0) {
            local_118 = *(undefined8 *)(lVar14 + 8);
            uStack_110 = *(undefined8 *)(lVar14 + 0x10);
            fStack_104 = *(float *)(lVar14 + 0x1c) * 0.01 * *(float *)(plVar8 + 1);
            local_108 = *(float *)(lVar14 + 0x18) * 0.01 * *(float *)(plVar8 + 1);
            FWeakObjectPtr::operator=(&local_120,lVar5);
            uVar3 = local_11c;
            uVar2 = local_120;
            local_68 = (longlong *)0x0;
            local_58 = 0;
            puVar10 = (undefined8 *)FUN_140438ef0(0x28,local_88);
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = &PTR_FUN_144c7e538;
              *(undefined4 *)(puVar10 + 1) = (undefined4)local_118;
              *(undefined4 *)((longlong)puVar10 + 0xc) = local_118._4_4_;
              *(undefined4 *)(puVar10 + 2) = (undefined4)uStack_110;
              *(undefined4 *)((longlong)puVar10 + 0x14) = uStack_110._4_4_;
              puVar10[3] = CONCAT44(fStack_104,local_108);
              *(undefined4 *)(puVar10 + 4) = uVar2;
              *(undefined4 *)((longlong)puVar10 + 0x24) = uVar3;
            }
            local_98[0] = &LAB_142eb0b20;
            lVar14 = 0;
            if ((*(int *)(lVar5 + 0x530) != 0) &&
               (lVar14 = *(longlong *)(lVar5 + 0x520), *(longlong *)(lVar5 + 0x520) == 0)) {
              lVar14 = lVar5 + 0x500;
            }
            lVar9 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_e8,local_98);
            FGenericPlatformMemory::MemswapGreaterThan8(lVar9,lVar5 + 0x4f0,0x50);
            if (*(int *)(lVar9 + 0x40) != 0) {
              plVar11 = *(longlong **)(lVar9 + 0x30);
              if (*(longlong **)(lVar9 + 0x30) == (longlong *)0x0) {
                plVar11 = (longlong *)(lVar9 + 0x10);
              }
              if (plVar11 != (longlong *)0x0) {
                (**(code **)(*plVar11 + 0x10))(plVar11,0);
              }
            }
            if (*(longlong *)(lVar9 + 0x30) != 0) {
              FMemory::Free();
            }
            if (lVar14 == 0) {
              local_b8 = (longlong *)0x0;
              local_a8 = 0;
              puVar10 = (undefined8 *)FUN_140438ef0(0x10,local_d8);
              if (puVar10 != (undefined8 *)0x0) {
                puVar10[1] = lVar5;
                *puVar10 = &PTR_FUN_143f77b70;
              }
              local_e8[0] = &LAB_142eb0c90;
              FUN_14208d480(lVar5,local_e8);
              if (local_a8 != 0) {
                plVar11 = local_d8;
                if (local_b8 != (longlong *)0x0) {
                  plVar11 = local_b8;
                }
                if (plVar11 != (longlong *)0x0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11,0);
                }
              }
              if (local_b8 != (longlong *)0x0) {
                FMemory::Free();
              }
            }
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
          }
        }
      }
      else {
        FUN_142ecfb30(param_1,lVar5,plVar8);
      }
LAB_142ece166:
      plVar7 = plVar7 + 1;
    } while (plVar7 != local_130);
  }
  lVar5 = 0;
  plVar7 = param_1 + 0xb3;
  if ((param_1[0xb2] == 0) || (*(char *)(param_1[0xb2] + 0x39) != '\0')) {
    cVar4 = FWeakObjectPtr::IsValid(plVar7);
    if (cVar4 != '\0') {
      uVar6 = FWeakObjectPtr::Get(plVar7);
      lVar5 = FUN_14270bb10(uVar6);
      if ((((lVar5 != 0) && (*(longlong *)(lVar5 + 0x70) != 0)) &&
          (*(longlong *)(*(longlong *)(lVar5 + 0x70) + 0xb0) != 0)) &&
         (plVar7 = (longlong *)FMemory::Realloc(0,0x30), plVar7 != (longlong *)0x0)) {
        *plVar7 = (longlong)&PTR_FUN_143f4d200;
        FWeakObjectPtr::operator=(plVar7 + 1,param_1);
        plVar7[2] = (longlong)&LAB_142ecd350;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar7[4] = lVar5;
        *plVar7 = (longlong)&PTR_FUN_143f4d248;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1465351a8,1);
        (**(code **)(*plVar7 + 0x20))(plVar7,&local_148);
        iVar1 = DAT_1465351b0;
        lVar5 = (longlong)DAT_1465351b0;
        DAT_1465351b0 = DAT_1465351b0 + 1;
        if (DAT_1465351b4 < DAT_1465351b0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1465351a8,iVar1);
        }
        puVar10 = (undefined8 *)(lVar5 * 0x10 + DAT_1465351a8);
        *puVar10 = plVar7;
        *(undefined4 *)(puVar10 + 1) = 3;
      }
    }
    *(undefined2 *)(param_1 + 0xb6) = 0x101;
  }
  else {
    local_140 = (uint)param_1[0xa3];
    lVar14 = (longlong)(int)local_140;
    _Src = (void *)param_1[0xa2];
    local_148 = (void *)0x0;
    if (local_140 == 0) {
      local_13c = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_148,local_140,0);
      _guard_xfg_dispatch_icall_nop(local_148,_Src,lVar14 << 3);
    }
    uVar6 = (**(code **)(*param_1 + 0x510))(param_1);
    FUN_142ef9c10(param_1[0xb2],&local_148,uVar6);
    if (param_1[0xa4] != 0) {
      lVar5 = *(longlong *)(param_1[0xa4] + 200);
    }
    plVar8 = param_1 + 0xa5;
    *plVar8 = lVar5;
    FUN_142ef9b30(plVar8);
    uVar6 = FWeakObjectPtr::Get(plVar7);
    FUN_142f0e9f0(plVar8,uVar6);
    uVar6 = FWeakObjectPtr::Get(param_1 + 0xb5);
    FUN_140c480b0(plVar8,uVar6);
    uVar12 = 0;
    puVar10 = (undefined8 *)param_1[0xa2];
    local_148 = (void *)0x0;
    local_140 = 0;
    local_13c = 0;
    uVar17 = (longlong)(int)param_1[0xa3] & 0x1fffffffffffffff;
    if (puVar10 + (int)param_1[0xa3] < puVar10) {
      uVar17 = uVar12;
    }
    uVar15 = uVar12;
    uVar16 = uVar12;
    if (uVar17 != 0) {
      while( true ) {
        uVar6 = *puVar10;
        local_140 = (int)uVar15 + 1;
        if ((int)uVar12 < (int)local_140) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_148,uVar15);
        }
        puVar10 = puVar10 + 1;
        *(undefined8 *)((longlong)local_148 + (longlong)(int)uVar15 * 8) = uVar6;
        if (uVar16 + 1 == uVar17) break;
        uVar12 = (ulonglong)local_13c;
        uVar15 = (ulonglong)local_140;
        uVar16 = uVar16 + 1;
      }
    }
    local_130 = (longlong *)0x0;
    local_128 = 0;
    FUN_142ee9f30(plVar8,&local_148,&local_130);
    FUN_142f11350(plVar8,&local_130);
    if (local_130 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_148 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142ece460 FUN_142ece460 body=375 status=ok
// SIG undefined FUN_142ece460(void)

void FUN_142ece460(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  
  UObject::PostLoad();
  plVar4 = (longlong *)(param_1 + 0xc0);
  FUN_142eb3b20(plVar4,0);
  if (plVar4 != (longlong *)(param_1 + 0xd0)) {
    iVar8 = *(int *)(param_1 + 200);
    if (iVar8 != 0) {
      plVar9 = (longlong *)(*plVar4 + 0x10);
      do {
        plVar6 = (longlong *)plVar9[3];
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar6 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
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
        plVar6 = (longlong *)*plVar9;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar6 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
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
        plVar9 = plVar9 + 0xb;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar8 = *(int *)(param_1 + 0xd8);
    lVar7 = *(longlong *)(param_1 + 0xd0);
    *(int *)(param_1 + 200) = iVar8;
    if ((iVar8 == 0) && (*(int *)(param_1 + 0xcc) == 0)) {
      *(undefined4 *)(param_1 + 0xcc) = 0;
    }
    else {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeForCopy(plVar4,iVar8);
      if (iVar8 != 0) {
        lVar7 = lVar7 + 0x20;
        puVar10 = (undefined8 *)*plVar4;
        do {
          *puVar10 = *(undefined8 *)(lVar7 + -0x20);
          FText::FText(puVar10 + 1,lVar7 + -0x18);
          FText::FText(puVar10 + 4,lVar7);
          puVar10[7] = *(undefined8 *)(lVar7 + 0x18);
          puVar10[8] = *(undefined8 *)(lVar7 + 0x20);
          puVar10[9] = *(undefined8 *)(lVar7 + 0x28);
          puVar3 = (undefined1 *)(lVar7 + 0x30);
          lVar7 = lVar7 + 0x58;
          *(undefined1 *)(puVar10 + 10) = *puVar3;
          iVar8 = iVar8 + -1;
          puVar10 = puVar10 + 0xb;
        } while (iVar8 != 0);
      }
    }
  }
  return;
}



// FUNCTION 142ece5e0 FUN_142ece5e0 body=310 status=ok
// SIG undefined FUN_142ece5e0(void)

longlong FUN_142ece5e0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38 [8];
  undefined4 local_30;
  
  FUN_140590080(param_2);
  if (param_3 != 0) {
    lVar1 = 0;
    if (param_1[0x86] != 0) {
      lVar1 = *(longlong *)(param_1[0x86] + 0x848);
    }
    if (lVar1 == 0) {
      local_50 = 0;
      local_30 = 0;
      local_40 = 0;
      local_58 = 0;
      local_48 = 0;
      uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar1 = FUN_1405a1e30(local_38,uVar2,param_3,&local_48,0,&local_58);
      FUN_1405913a0(param_2,lVar1);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar1 + 0x10);
      FUN_140591060(local_38);
    }
    else {
      lVar1 = FUN_14059b7e0(lVar1,1);
      if (lVar1 != 0) {
        lVar1 = FUN_1405a3150(lVar1,local_38,param_3,0);
        FUN_1405913a0(param_2,lVar1);
        *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar1 + 0x10);
        FUN_140591060(local_38);
      }
    }
  }
  return param_2;
}



// FUNCTION 142ece720 FUN_142ece720 body=387 status=ok
// SIG undefined FUN_142ece720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ece720(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_e8 [48];
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
  cVar2 = FUN_14202a080();
  if ((cVar2 == '\0') || ((*(byte *)(param_1 + 0x624) & 1) == 0)) {
    local_88 = (longlong *)0x0;
    local_78 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[1] = param_1;
      *puVar3 = &PTR_FUN_143f77b70;
    }
    local_b8[0] = FUN_142eb0a50;
    uVar4 = FUN_1420849a0(param_1,local_68,local_b8);
    iVar1 = *(int *)(param_1 + 0x4e8);
    *(int *)(param_1 + 0x4e8) = iVar1 + 1;
    if (*(int *)(param_1 + 0x4ec) < iVar1 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 0x4e0,iVar1);
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
              ((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x4e0),uVar4);
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
    if (local_78 != 0) {
      plVar5 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar5 = local_88;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142ece8b0 FUN_142ece8b0 body=435 status=ok
// SIG undefined FUN_142ece8b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_142ece8b0(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
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
  plVar6 = (longlong *)(param_1 + -0x4d8);
  if (*(char *)(param_1 + 0x164) == '\0') {
    LOCK();
    bVar7 = *(int *)(param_1 + 0x160) == 0;
    if (bVar7) {
      *(int *)(param_1 + 0x160) = 0;
    }
    UNLOCK();
    if (!bVar7) {
      LOCK();
      bVar7 = *(int *)(param_1 + -0x430) == 0;
      if (bVar7) {
        *(int *)(param_1 + -0x430) = 0;
      }
      UNLOCK();
      if ((!bVar7) && (cVar2 = (**(code **)(*plVar6 + 0x518))(plVar6), cVar2 != '\0')) {
        *(undefined1 *)(param_1 + 0x164) = 1;
        (**(code **)(*plVar6 + 0x520))(plVar6);
        cVar2 = (**(code **)(*plVar6 + 0x508))(plVar6);
        if (cVar2 != '\0') {
          LOCK();
          iVar1 = *(int *)(param_1 + 0x168);
          *(int *)(param_1 + 0x168) = 1;
          UNLOCK();
          if (iVar1 == 0) {
            local_88 = (longlong *)0x0;
            local_78 = 0;
            puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
            if (puVar4 != (undefined8 *)0x0) {
              puVar4[1] = plVar6;
              *puVar4 = &PTR_FUN_143f77b70;
            }
            local_b8[0] = FUN_142eb08b0;
            uVar5 = FUN_1420849a0(plVar6,local_68,local_b8);
            FUN_14208c260(plVar6,uVar5);
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
            if (local_78 != 0) {
              plVar6 = local_a8;
              if (local_88 != (longlong *)0x0) {
                plVar6 = local_88;
              }
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 0x10))(plVar6,0);
              }
            }
            if (local_88 != (longlong *)0x0) {
              FMemory::Free();
            }
          }
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x99) == '\0') {
    uVar3 = 1;
  }
  else {
    uVar3 = *(undefined1 *)(param_1 + 0x164);
  }
  return uVar3;
}



// FUNCTION 142ecea70 FUN_142ecea70 body=717 status=ok
// SIG undefined FUN_142ecea70(void)

void FUN_142ecea70(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong in_stack_ffffffffffffff98;
  uint uVar15;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  uVar15 = (uint)(in_stack_ffffffffffffff98 >> 0x20);
  uVar12 = 0;
  if (*(int *)(param_1 + 0x310) == 0) {
    uVar5 = FUN_1404b03b0();
    FText::FText(local_50,uVar5);
    iVar11 = *(int *)(param_1 + 0x310);
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_28 = 0;
    *(int *)(param_1 + 0x310) = iVar11 + 1;
    if (*(int *)(param_1 + 0x314) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x308,iVar11);
    }
    puVar9 = (undefined8 *)((longlong)iVar11 * 0x38 + *(longlong *)(param_1 + 0x308));
    *puVar9 = 0;
    FText::FText(puVar9 + 1,local_50);
    *(undefined1 *)(puVar9 + 4) = local_38;
    *(undefined4 *)((longlong)puVar9 + 0x24) = local_34;
    puVar9[5] = 0;
    in_stack_ffffffffffffff98 = (ulonglong)uVar15 << 0x20;
    FUN_142ea7950(puVar9 + 5,local_30,local_28 & 0xffffffff,0,in_stack_ffffffffffffff98);
    FUN_142ea9b10(&local_30);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_48 + 1;
      lVar4 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
  }
  plVar14 = (longlong *)
            (*(longlong *)(param_1 + 0x308) + -0x10 + (longlong)*(int *)(param_1 + 0x310) * 0x38);
  if (plVar14 != param_2) {
    iVar11 = (int)plVar14[1];
    if (iVar11 != 0) {
      plVar13 = (longlong *)(*plVar14 + 0x10);
      do {
        FUN_142ea9b10(plVar13 + 3);
        plVar3 = (longlong *)*plVar13;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar3 + 1;
          lVar4 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
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
        plVar13 = plVar13 + 7;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    FUN_142ea7950(plVar14,*param_2,(int)param_2[1],*(undefined4 *)((longlong)plVar14 + 0xc),
                  in_stack_ffffffffffffff98 & 0xffffffff00000000);
  }
  *(bool *)((longlong)*(int *)(param_1 + 0x310) * 0x38 + -0x18 + *(longlong *)(param_1 + 0x308)) =
       0 < (int)param_2[1];
  iVar11 = *(int *)(param_1 + 0x310);
  iVar8 = *(int *)(param_1 + 0x2c8);
  if (iVar8 < iVar11) {
    uVar6 = uVar12;
    uVar10 = uVar12;
    if (0 < iVar8 + -1) {
      do {
        iVar11 = (int)uVar10;
        uVar10 = uVar12;
        if ((-1 < (longlong)(uVar6 + 1)) && (iVar11 + 1 < iVar8)) {
          uVar10 = *(ulonglong *)(*(longlong *)(param_1 + 0x2c0) + 8 + uVar6 * 8);
        }
        uVar7 = uVar12;
        if ((-1 < (longlong)uVar6) && (iVar11 < iVar8)) {
          uVar7 = *(ulonglong *)(*(longlong *)(param_1 + 0x2c0) + uVar6 * 8);
        }
        FUN_142ebe6b0(uVar7,uVar10);
        iVar8 = *(int *)(param_1 + 0x2c8);
        uVar6 = uVar6 + 1;
        uVar10 = (ulonglong)(iVar11 + 1U);
      } while ((int)(iVar11 + 1U) < iVar8 + -1);
    }
    FUN_142f18ed0(param_1);
    iVar11 = *(int *)(param_1 + 0x2c8);
    iVar8 = iVar11;
  }
  if ((-1 < iVar11 + -1) && (iVar11 + -1 < iVar8)) {
    uVar12 = *(ulonglong *)(*(longlong *)(param_1 + 0x2c0) + -8 + (longlong)iVar11 * 8);
  }
  FUN_142ecdb20(param_1,uVar12,param_2,0,
                (longlong)(*(int *)(param_1 + 0x310) + -1) * 0x38 + *(longlong *)(param_1 + 0x308));
  FUN_142ed2060(param_1,uVar12);
  return;
}



// FUNCTION 142eced80 FUN_142eced80 body=1396 status=ok
// SIG undefined FUN_142eced80(void)

void FUN_142eced80(longlong *param_1)

{
  float fVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int local_res8;
  undefined1 local_b8 [144];
  
  iVar2 = *(int *)((longlong)param_1 + 0x1e4);
  bVar4 = false;
  fVar16 = 0.0;
  fVar17 = 0.0;
  fVar18 = 0.0;
  fVar19 = 0.0;
  fVar20 = 0.0;
  fVar15 = *(float *)(param_1 + 0x55);
  fVar1 = *(float *)((longlong)param_1 + 0x2ac);
  local_res8 = 0;
  if ((param_1[0x53] != 0) && (*(char *)((longlong)param_1 + 0x1e2) == '\x01')) {
    fVar15 = *(float *)((longlong)param_1 + 0x2b4);
  }
  iVar8 = 0;
  if (0 < (int)param_1[0x50]) {
    lVar9 = 0;
    local_res8 = 0;
    do {
      plVar3 = *(longlong **)(param_1[0x4f] + 0x18 + lVar9);
      if ((plVar3 != (longlong *)0x0) && (cVar5 = FUN_142088620(plVar3), cVar5 != '\0')) {
        if (*(char *)((longlong)param_1 + 0x242) == '\0') {
          pfVar7 = (float *)(**(code **)(*plVar3 + 0x328))(plVar3,local_b8,param_1);
          fVar10 = *pfVar7;
          fVar12 = pfVar7[1];
          fVar14 = pfVar7[2];
          fVar13 = pfVar7[3];
        }
        else {
          fVar14 = *(float *)(param_1 + 0x49);
          fVar10 = 0.0;
          fVar13 = *(float *)((longlong)param_1 + 0x244);
          fVar12 = 0.0;
        }
        fVar13 = fVar13 - fVar12;
        fVar14 = fVar14 - fVar10;
        if ((1 < iVar2) && (!bVar4)) {
          bVar4 = true;
          fVar19 = fVar14;
          fVar20 = fVar13;
        }
        if (*(char *)((longlong)param_1 + 0x1e2) == '\x01') {
          fVar12 = fVar13 + fVar16 + *(float *)((longlong)param_1 + 0x1ec);
          *(float *)((longlong)plVar3 + 0x2ec) = fVar12;
          fVar12 = fVar15 - fVar12;
          fVar10 = fVar16;
        }
        else {
          *(float *)((longlong)plVar3 + 0x2ec) = fVar16;
          fVar12 = fVar15 + fVar16;
          fVar10 = fVar13 + fVar16 + *(float *)((longlong)param_1 + 0x1ec);
        }
        *(float *)(plVar3 + 0x5e) = fVar10;
        local_res8 = local_res8 + 1;
        *(ulonglong *)((longlong)plVar3 + 0x2dc) = CONCAT44(fVar17 + fVar1,fVar12);
        *(float *)((longlong)plVar3 + 0x2e4) = fVar17;
        *(float *)(plVar3 + 0x5d) = fVar14 + fVar17 + *(float *)(param_1 + 0x3d);
        if (*(char *)((longlong)param_1 + 0x1e1) == '\0') {
          fVar10 = *(float *)((longlong)param_1 + 0x1ec) + fVar13;
          fVar14 = *(float *)(param_1 + 0x3d) + fVar14;
          if ((1 < iVar2) && (bVar4)) {
            fVar10 = *(float *)((longlong)param_1 + 0x1ec) + fVar20;
            fVar14 = *(float *)(param_1 + 0x3d) + fVar19;
          }
          if (local_res8 < *(int *)((longlong)param_1 + 0x1e4)) {
LAB_142ecefe5:
            fVar16 = fVar16 + fVar10;
          }
          else {
            fVar17 = fVar17 + fVar14;
            local_res8 = 0;
            fVar16 = 0.0;
          }
        }
        else if (*(char *)((longlong)param_1 + 0x1e1) == '\x01') {
          fVar14 = *(float *)(param_1 + 0x3d) + fVar14;
          fVar10 = *(float *)((longlong)param_1 + 0x1ec) + fVar13;
          if ((1 < iVar2) && (bVar4)) {
            fVar14 = *(float *)(param_1 + 0x3d) + fVar19;
            fVar10 = fVar20 + *(float *)((longlong)param_1 + 0x1ec);
          }
          if (*(int *)((longlong)param_1 + 0x1e4) <= local_res8) {
            fVar17 = 0.0;
            local_res8 = 0;
            goto LAB_142ecefe5;
          }
          fVar17 = fVar17 + fVar14;
        }
        fVar18 = fVar18 + fVar13 + *(float *)((longlong)param_1 + 0x1ec);
      }
      iVar8 = iVar8 + 1;
      lVar9 = lVar9 + 0x20;
    } while (iVar8 < (int)param_1[0x50]);
  }
  cVar5 = *(char *)((longlong)param_1 + 0x1e1);
  if (((cVar5 == '\x01') && (*(char *)((longlong)param_1 + 0x1e2) == '\x02')) &&
     (fVar15 = *(float *)((longlong)param_1 + 0x1ec), param_1[0x53] != 0)) {
    dVar11 = (double)FUN_142eeea40();
    cVar5 = *(char *)((longlong)param_1 + 0x1e1);
    *(float *)(param_1 + 99) = ((float)dVar11 - (fVar18 - fVar15)) * 0.5;
  }
  if (((iVar2 < 2) || (!bVar4)) || (local_res8 == 0)) {
LAB_142ecf131:
    if (cVar5 == '\0') goto LAB_142ecf135;
    if (cVar5 != '\x01') goto LAB_142ecf23d;
LAB_142ecf1bb:
    iVar8 = *(int *)((longlong)param_1 + 0x1e4);
    if ((iVar8 < 1) || (iVar6 = FUN_142eb7360(param_1), 0 < (iVar6 + -1 + iVar8) / iVar8)) {
      iVar6 = iVar8;
      if ((*(char *)((longlong)param_1 + 0x1e1) != '\0') &&
         ((iVar6 = 1, *(char *)((longlong)param_1 + 0x1e1) == '\x01' && (0 < iVar8)))) {
        iVar8 = *(int *)((longlong)param_1 + 0x1e4);
        iVar6 = FUN_142eb7360(param_1);
        iVar6 = (iVar6 + -1 + iVar8) / iVar8;
      }
      fVar15 = fVar16 / (float)iVar6;
    }
    else {
      fVar15 = 1.0;
    }
    *(float *)(param_1 + 0x5e) = fVar15;
  }
  else {
    if (cVar5 != '\0') {
      if (cVar5 != '\x01') goto LAB_142ecf131;
      fVar16 = fVar16 + fVar20 + *(float *)((longlong)param_1 + 0x1ec);
      goto LAB_142ecf1bb;
    }
    fVar17 = fVar17 + fVar19 + *(float *)(param_1 + 0x3d);
LAB_142ecf135:
    fVar16 = fVar17;
    iVar8 = *(int *)((longlong)param_1 + 0x1e4);
    if ((iVar8 < 1) || (iVar6 = FUN_142eb7360(param_1), 0 < (iVar6 + -1 + iVar8) / iVar8)) {
      if (*(char *)((longlong)param_1 + 0x1e1) == '\0') {
        iVar6 = 1;
        if (0 < iVar8) {
          iVar8 = *(int *)((longlong)param_1 + 0x1e4);
          iVar6 = FUN_142eb7360(param_1);
          iVar6 = (iVar6 + -1 + iVar8) / iVar8;
        }
      }
      else {
        iVar6 = 1;
        if (*(char *)((longlong)param_1 + 0x1e1) == '\x01') {
          iVar6 = iVar8;
        }
      }
      *(float *)((longlong)param_1 + 0x2f4) = fVar16 / (float)iVar6;
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x2f4) = 0x3f800000;
    }
  }
  FUN_142f11a80(param_1 + 0x57,*(undefined4 *)((longlong)param_1 + 0x2b4),fVar16);
LAB_142ecf23d:
  if (((1 < iVar2) && (bVar4)) && (local_res8 != 0)) {
    *(float *)(param_1 + 0x5e) = fVar20 + *(float *)((longlong)param_1 + 0x1ec);
    *(float *)((longlong)param_1 + 0x2f4) = fVar19 + *(float *)(param_1 + 0x3d);
  }
  cVar5 = FUN_142eb3410();
  if (cVar5 == '\0') {
    (**(code **)(*param_1 + 0x340))(param_1);
  }
  else {
    LOCK();
    *(undefined4 *)(param_1 + 0x62) = 1;
    UNLOCK();
  }
  cVar5 = FUN_142eb34c0();
  if (cVar5 == '\0') {
    FUN_142edbed0(param_1);
    return;
  }
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x314) = 1;
  UNLOCK();
  return;
}



// FUNCTION 142ecf300 FUN_142ecf300 body=229 status=ok
// SIG undefined FUN_142ecf300(void)

void FUN_142ecf300(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  uVar5 = FTextFormat::FTextFormat(local_58,param_1 + 0x2f8);
  FText::Format(local_20,uVar5,param_1 + 0x328);
  uVar5 = FTextFormat::FTextFormat(local_48,param_1 + 0x310);
  FText::Format(local_38,uVar5,param_1 + 0x378);
  FUN_142f194d0(param_1,local_20,local_38);
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
  if (local_18 != (longlong *)0x0) {
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
  return;
}



// FUNCTION 142ecf3f0 FUN_142ecf3f0 body=269 status=ok
// SIG undefined FUN_142ecf3f0(void)

void FUN_142ecf3f0(longlong param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 *local_a8 [2];
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined4 local_68;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0x21a) != '\0') {
    LOCK();
    bVar2 = *(int *)(param_1 + 0xa4) == 0;
    if (bVar2) {
      *(int *)(param_1 + 0xa4) = 0;
    }
    UNLOCK();
    if (!bVar2) {
      FWeakObjectPtr::operator=(&local_res10,param_1);
      FWeakObjectPtr::operator=(&local_res8,param_1);
      local_78 = 0;
      local_68 = 0;
      puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_98);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1444f8920;
        puVar1[1] = param_1;
        *(undefined4 *)(puVar1 + 2) = local_res8;
        *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
      }
      local_28 = 0;
      local_a8[0] = &LAB_142eb0840;
      local_18 = 0;
      puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_1444f8920;
        puVar1[1] = param_1;
        *(undefined4 *)(puVar1 + 2) = local_res10;
        *(undefined4 *)((longlong)puVar1 + 0x14) = local_res14;
      }
      local_58[0] = &LAB_142eb0c20;
      FUN_14208c800(param_1,local_58,local_a8);
    }
  }
  return;
}



// FUNCTION 142ecf500 FUN_142ecf500 body=76 status=ok
// SIG undefined FUN_142ecf500(void)

ulonglong FUN_142ecf500(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  
  (**(code **)(*param_1 + 0x330))();
  cVar2 = FUN_142eb3360();
  if (cVar2 != '\0') {
    LOCK();
    uVar1 = *(uint *)((longlong)param_1 + 0x30c);
    *(uint *)((longlong)param_1 + 0x30c) = 1;
    UNLOCK();
    *(undefined1 *)((longlong)param_1 + 0x2ec) = 0;
    return (ulonglong)uVar1;
  }
  uVar3 = (**(code **)(*param_1 + 0x338))(param_1);
  *(undefined1 *)((longlong)param_1 + 0x2ec) = 0;
  return uVar3;
}



// FUNCTION 142ecf550 FUN_142ecf550 body=307 status=ok
// SIG undefined FUN_142ecf550(void)

void FUN_142ecf550(longlong *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_18 [2];
  
  if (param_1[0x6e] == 0) {
    return;
  }
  if ((param_1[0x6f] == 0) || (*(char *)((longlong)param_1 + 0x329) == '\0')) {
    lVar3 = *param_1;
    uVar1 = (**(code **)(param_1[0x2e] + 0x10))();
    uVar2 = (**(code **)(lVar3 + 0x308))(param_1,local_18,uVar1);
  }
  else {
    lVar3 = *param_1;
    if ((char)param_1[0x65] != '\x02') {
      uVar1 = (**(code **)(param_1[0x2e] + 0x10))();
      uVar2 = (**(code **)(lVar3 + 0x308))(param_1,local_18,uVar1);
      FUN_142088cf0(param_1[0x6e],uVar2);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      uVar2 = (**(code **)(*param_1 + 0x308))(param_1,local_18,2);
      lVar3 = param_1[0x6f];
      goto LAB_142ecf661;
    }
    uVar1 = (**(code **)(param_1[0x2e] + 0x10))();
    uVar2 = (**(code **)(lVar3 + 0x308))(param_1,local_18,uVar1);
    FUN_142088cf0(param_1[0x6f],uVar2);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    uVar2 = (**(code **)(*param_1 + 0x308))(param_1,local_18,2);
  }
  lVar3 = param_1[0x6e];
LAB_142ecf661:
  FUN_142088cf0(lVar3,uVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ecf690 FUN_142ecf690 body=166 status=ok
// SIG undefined FUN_142ecf690(void)

void FUN_142ecf690(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong local_18;
  longlong *local_10;
  
  lVar5 = (**(code **)(*param_1 + 0x148))();
  if (lVar5 != 0) {
    FUN_140ad4c90(param_1,&local_18);
    if (local_18 != 0) {
      iVar4 = FUN_14203ce50(local_18);
      if (iVar4 == 1) {
        uVar6 = *(undefined4 *)(lVar5 + 0x798);
      }
      else {
        uVar6 = *(undefined4 *)(lVar5 + 0x790);
      }
      *(undefined4 *)(local_18 + 0x1c4) = uVar6;
    }
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
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142ecf740 FUN_142ecf740 body=217 status=ok
// SIG undefined FUN_142ecf740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ecf740(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [80];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_68[0] = &LAB_142eb0990;
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
  return;
}



// FUNCTION 142ecf820 FUN_142ecf820 body=74 status=ok
// SIG undefined FUN_142ecf820(void)

void FUN_142ecf820(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_142eb6c70(param_1,*(undefined4 *)(param_1 + 0x5b4));
  if ((param_2 != (longlong *)0x0) && (lVar1 != 0)) {
    FUN_142ecfb30(param_1,param_2,lVar1);
    (**(code **)(*param_2 + 0x530))(param_2);
  }
  return;
}



// FUNCTION 142ecf870 FUN_142ecf870 body=166 status=ok
// SIG undefined FUN_142ecf870(void)

void FUN_142ecf870(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float local_res8;
  float local_resc;
  
  lVar1 = thunk_FUN_142039c70();
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar2 = *(longlong *)(lVar2 + 400);
  }
  if (((lVar1 != 0) && (DAT_146b17150 != 0)) && (lVar2 != 0)) {
    fVar3 = (float)FUN_14203ca10(lVar1);
    FUN_142eb8d60(param_1,&local_res8);
    (**(code **)(*param_1 + 0x2c8))(param_1,CONCAT44(local_resc * fVar3,local_res8 * fVar3));
  }
  return;
}



// FUNCTION 142ecf920 FUN_142ecf920 body=152 status=ok
// SIG undefined FUN_142ecf920(void)

void FUN_142ecf920(undefined8 param_1,undefined1 param_2)

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
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605cc8;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
    *(undefined1 *)(puVar1 + 3) = param_2;
  }
  local_58[0] = &LAB_142eb0c70;
  FUN_14208c5d0(param_1,local_58);
  return;
}



// FUNCTION 142ecf9c0 FUN_142ecf9c0 body=116 status=ok
// SIG undefined FUN_142ecf9c0(void)

void FUN_142ecf9c0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x280);
  iVar3 = 0;
  if (0 < iVar1) {
    lVar5 = 0;
    lVar4 = 0;
    do {
      if ((lVar5 < 0) || (iVar1 <= iVar3)) {
        lVar2 = 0;
      }
      else {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x278) + 0x18 + lVar4);
      }
      if (lVar2 != 0) {
        FUN_142ecf920(lVar2,0);
        iVar1 = *(int *)(param_1 + 0x280);
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x20;
    } while (iVar3 < iVar1);
  }
  return;
}



// FUNCTION 142ecfa40 FUN_142ecfa40 body=229 status=ok
// SIG undefined FUN_142ecfa40(void)

void FUN_142ecfa40(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if ((*(longlong *)(param_1 + 0x368) != 0) && (*(longlong *)(param_1 + 0x370) != 0)) {
    uVar5 = 0;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x370) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if ((0 < iVar4) && (0 < *(int *)(param_1 + 0x328))) {
      if (*(longlong *)(param_1 + 0x38) != 0) {
        uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x430);
      }
      uVar5 = FUN_142ef30e0(local_28,**(undefined8 **)(param_1 + 800),uVar5,0,0xbf800000,0);
      UMistDebugEntityScreen::InspectEntity
                (param_1 + 0x360,uVar5,1,*(undefined1 *)(param_1 + 0x359));
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_20 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar1 = (int *)((longlong)local_20 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142ecfb30 FUN_142ecfb30 body=323 status=ok
// SIG undefined FUN_142ecfb30(void)

void FUN_142ecfb30(longlong param_1,longlong param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined8 local_res10 [2];
  undefined1 local_res20 [8];
  longlong local_48 [8];
  
  if (((param_2 != 0) && (param_3 != (longlong *)0x0)) && (*param_3 != 0)) {
    local_res10[0] = *(undefined8 *)(param_1 + 0x18);
    fVar1 = *(float *)(param_3 + 1);
    FName::ToString(local_res10,local_48);
    if (*(int *)(param_2 + 0x5c0) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = *(undefined2 **)(param_2 + 0x5b8);
    }
    puVar8 = (undefined8 *)FName::FName(local_res20,puVar10,1);
    lVar9 = FUN_142ea7b20(*param_3,*puVar8,local_48,0);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (lVar9 != 0) {
      fVar2 = *(float *)(lVar9 + 0x18);
      uVar3 = *(undefined4 *)(lVar9 + 0xc);
      fVar4 = *(float *)(lVar9 + 0x1c);
      uVar5 = *(undefined4 *)(lVar9 + 0x10);
      uVar6 = *(undefined4 *)(lVar9 + 0x14);
      uVar7 = *(undefined4 *)(lVar9 + 8);
      *(undefined1 *)(param_2 + 0x21a) = 1;
      *(undefined4 *)(param_2 + 0x21c) = uVar7;
      *(undefined4 *)(param_2 + 0x220) = uVar3;
      *(undefined4 *)(param_2 + 0x224) = uVar5;
      *(undefined4 *)(param_2 + 0x228) = uVar6;
      *(ulonglong *)(param_2 + 0x22c) = CONCAT44(fVar4 * 0.01 * fVar1,fVar2 * 0.01 * fVar1);
      FUN_142ecf3f0(param_2);
    }
    if (*(char *)(param_2 + 0x540) == '\x01') {
      FUN_142ebd8f0(param_2);
    }
  }
  return;
}



// FUNCTION 142ecfc80 FUN_142ecfc80 body=140 status=ok
// SIG undefined FUN_142ecfc80(void)

void FUN_142ecfc80(longlong *param_1,longlong param_2)

{
  bool bVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142ecfccd;
  }
  param_2 = 0;
LAB_142ecfccd:
  FWeakObjectPtr::operator=(param_1 + 0x1a,param_2);
  lVar3 = *param_1;
  *(undefined2 *)((longlong)param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  uVar2 = (**(code **)(lVar3 + 0x10))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000142ecfd09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x30))(param_1,uVar2,0,0);
  return;
}



// FUNCTION 142ecfd10 FUN_142ecfd10 body=180 status=ok
// SIG undefined FUN_142ecfd10(void)

void FUN_142ecfd10(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 local_res8 [8];
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  (**(code **)(*param_1 + 0x4b8))(param_1,local_res8);
  local_28 = *param_2;
  if ((local_28 != 0) && (local_20 = param_2[1], local_20 != 0)) {
    FUN_142ed5c20(param_1,&local_28,param_3);
    if (*param_2 == 0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      plVar1 = (longlong *)param_2[1];
    }
    local_28 = *param_3;
    local_20 = param_3[1];
    local_18 = (undefined4)param_3[2];
    local_14 = *(undefined4 *)((longlong)param_3 + 0x14);
    local_10 = (undefined4)param_3[3];
    local_c = *(undefined4 *)((longlong)param_3 + 0x1c);
    (**(code **)(*plVar1 + 0x18))(plVar1,param_1,&local_28);
  }
  return;
}



// FUNCTION 142ecfdd0 FUN_142ecfdd0 body=203 status=ok
// SIG undefined FUN_142ecfdd0(void)

void FUN_142ecfdd0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_142ecfd10(param_1,&local_38,local_28);
  return;
}



// FUNCTION 142ecfea0 FUN_142ecfea0 body=84 status=ok
// SIG undefined FUN_142ecfea0(void)

void FUN_142ecfea0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4e8);
  *(int *)(param_1 + 0x4e8) = iVar1 + 1;
  if (*(int *)(param_1 + 0x4ec) < iVar1 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x4e0),iVar1);
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            ((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x4e0),param_2);
  return;
}



// FUNCTION 142ecff00 FUN_142ecff00 body=17 status=ok
// SIG undefined FUN_142ecff00(void)

void FUN_142ecff00(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puStack_18;
  undefined8 uStack_10;
  
  lVar1 = *(longlong *)(param_1 + 0x5b0);
  if (lVar1 == 0) {
    return;
  }
  uStack_10 = 1;
  puStack_18 = (undefined8 *)0x0;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&puStack_18,0);
  puVar2 = puStack_18;
  *puStack_18 = param_3;
  FUN_142f05630(lVar1,param_2,&puStack_18);
  if (puVar2 != (undefined8 *)0x0) {
    FMemory::Free(puVar2);
  }
  return;
}



// FUNCTION 142ecff20 FUN_142ecff20 body=187 status=ok
// SIG undefined FUN_142ecff20(void)

void FUN_142ecff20(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  *(undefined1 *)(param_1 + 0x5b1) = 0;
  *(undefined1 *)(param_1 + 0x4d8) = 0;
  FUN_142ef7f40(param_1 + 0x528);
  if (*(longlong *)(param_1 + 0x590) != 0) {
    FUN_142ef7f80();
  }
  *(undefined8 *)(param_1 + 0x590) = 0;
  FUN_142eb1500(param_1);
  *(undefined8 *)(param_1 + 0x520) = param_2;
  *(undefined4 *)(param_1 + 0x5a0) = *param_3;
  *(undefined4 *)(param_1 + 0x5a4) = param_3[1];
  *(undefined4 *)(param_1 + 0x598) = *param_4;
  *(undefined4 *)(param_1 + 0x59c) = param_4[1];
  *(undefined4 *)(param_1 + 0x5a8) = *param_5;
  *(undefined4 *)(param_1 + 0x5ac) = param_5[1];
  FUN_142ed1510(param_1,0);
  return;
}



// FUNCTION 142ecffe0 FUN_142ecffe0 body=1367 status=ok
// SIG undefined FUN_142ecffe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ecffe0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_2e8 [32];
  undefined2 local_2c8;
  longlong local_2b8;
  longlong *local_2b0;
  undefined4 local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  longlong *local_278;
  longlong local_270;
  longlong *plStack_268;
  LARGE_INTEGER local_260;
  undefined1 *local_258 [2];
  undefined1 local_248 [32];
  undefined8 local_228;
  undefined4 local_218;
  undefined1 *local_208 [2];
  undefined1 local_1f8 [32];
  undefined8 local_1d8;
  undefined4 local_1c8;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8 [16];
  longlong local_198 [4];
  longlong *local_178;
  int local_168;
  undefined1 *local_158 [2];
  longlong local_148 [4];
  longlong *local_128;
  int local_118;
  LARGE_INTEGER local_108 [24];
  longlong local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  plVar9 = (longlong *)0x0;
  local_2a8 = 0;
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      local_2b0 = *(longlong **)(param_1 + 0x30);
      local_2b8 = 0;
      if (local_2b0 == (longlong *)0x0) {
LAB_142ed009e:
        plVar7 = &local_2b8;
        bVar3 = true;
        bVar11 = false;
        lVar10 = local_2b8;
      }
      else {
        LOCK();
        iVar4 = (int)local_2b0[1];
        bVar11 = iVar4 == 0;
        if (bVar11) {
          *(int *)(local_2b0 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (!bVar11) {
          LOCK();
          bVar11 = iVar4 == (int)local_2b0[1];
          if (bVar11) {
            *(int *)(local_2b0 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar11) {
            if (local_2b0 != (longlong *)0x0) {
              local_2b8 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_142ed009e;
          }
          LOCK();
          iVar4 = (int)local_2b0[1];
          bVar11 = iVar4 == 0;
          if (bVar11) {
            *(int *)(local_2b0 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_2b8;
        local_2b0 = (longlong *)0x0;
        bVar3 = true;
        bVar11 = false;
        lVar10 = 0;
      }
      goto LAB_142ed00c7;
    }
  }
  plVar7 = &local_270;
  local_270 = 0;
  plStack_268 = (longlong *)0x0;
  bVar3 = false;
  bVar11 = true;
  lVar10 = 0;
LAB_142ed00c7:
  plVar2 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  plVar8 = plStack_268;
  *plVar7 = 0;
  if ((bVar11) && (plStack_268 != (longlong *)0x0)) {
    LOCK();
    plVar7 = plStack_268 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_268)(plStack_268);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_268 + 8))(plStack_268,1);
      }
    }
  }
  plVar7 = local_2b0;
  if ((bVar3) && (local_2b0 != (longlong *)0x0)) {
    LOCK();
    plVar8 = local_2b0 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_2b0)(local_2b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_2b0 + 8))(local_2b0,1);
      }
    }
  }
  if (lVar10 != 0) {
    local_228 = 0;
    local_218 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_248);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = param_1;
      *puVar5 = &PTR_FUN_143f77b70;
    }
    local_290 = 0;
    local_258[0] = &LAB_142eb0a00;
    local_288 = 0x2d;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_290,0);
    local_2c8 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_290,0x2d,"UGbxGFxGridScrollingList::RemoveAllListItems");
    FUN_140cdf730(local_108,&local_290,local_258);
    QueryPerformanceCounter(&local_260);
    local_108[0] = local_260;
    lVar6 = operator_new(0x18);
    plVar7 = plVar9;
    if (lVar6 != 0) {
      plVar7 = (longlong *)FUN_140cdf810(lVar6);
    }
    plVar8 = (longlong *)operator_new(0x18);
    if (plVar8 != (longlong *)0x0) {
      *(undefined4 *)(plVar8 + 1) = 1;
      *plVar8 = (longlong)&PTR_DestroyObject_1444f8938;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      plVar8[2] = (longlong)plVar7;
      plVar9 = plVar8;
    }
    local_2a0 = plVar7;
    local_298 = plVar9;
    SharedPointerInternals::EnableSharedFromThis(&local_2a0,plVar7,plVar7);
    *(undefined1 *)(local_2a0 + 2) = 1;
    local_278 = (longlong *)local_2a0[1];
    local_48 = *local_2a0;
    if (local_278 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_278 + 1) = (int)local_278[1] + 1;
      UNLOCK();
    }
    local_280 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_40,&local_278);
    plVar9 = local_278;
    if (local_278 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_278 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_278)(local_278);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_278 + 8))(local_278,1);
        }
      }
    }
    local_128 = (longlong *)0x0;
    local_118 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_148);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_1444f8620;
      puVar5[1] = local_108;
    }
    local_158[0] = &LAB_140cee980;
    local_1b8 = local_2a0;
    local_1b0 = local_298;
    if (local_298 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_298 + 1) = (int)local_298[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_1a8,local_158);
    local_1d8 = 0;
    local_1c8 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x70,local_1f8);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_CopyToEmptyStorage_1444f8578;
      puVar5[2] = local_1b8;
      puVar5[3] = local_1b0;
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
        UNLOCK();
      }
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar5 + 4,local_1a8);
    }
    local_208[0] = &LAB_140cee8d0;
    if (local_168 != 0) {
      plVar9 = local_198;
      if (local_178 != (longlong *)0x0) {
        plVar9 = local_178;
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,0);
      }
    }
    if (local_178 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar9 = local_1b0;
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_1b0 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_1b0)(local_1b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    if (local_118 != 0) {
      plVar9 = local_148;
      if (local_128 != (longlong *)0x0) {
        plVar9 = local_128;
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,0);
      }
    }
    if (local_128 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar9 = local_298;
    if (local_298 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_298 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_298)(local_298);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    FUN_1420326d0(lVar10,local_208);
    FUN_140d1b3a0(local_108);
    FUN_140ce1dc0(local_108);
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar2 + 1;
    lVar10 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return;
}



// FUNCTION 142ed0540 FUN_142ed0540 body=1367 status=ok
// SIG undefined FUN_142ed0540(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ed0540(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_2e8 [32];
  undefined2 local_2c8;
  longlong local_2b8;
  longlong *local_2b0;
  undefined4 local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  longlong *local_278;
  longlong local_270;
  longlong *plStack_268;
  LARGE_INTEGER local_260;
  undefined1 *local_258 [2];
  undefined1 local_248 [32];
  undefined8 local_228;
  undefined4 local_218;
  undefined1 *local_208 [2];
  undefined1 local_1f8 [32];
  undefined8 local_1d8;
  undefined4 local_1c8;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8 [16];
  longlong local_198 [4];
  longlong *local_178;
  int local_168;
  undefined1 *local_158 [2];
  longlong local_148 [4];
  longlong *local_128;
  int local_118;
  LARGE_INTEGER local_108 [24];
  longlong local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  plVar9 = (longlong *)0x0;
  local_2a8 = 0;
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      local_2b0 = *(longlong **)(param_1 + 0x30);
      local_2b8 = 0;
      if (local_2b0 == (longlong *)0x0) {
LAB_142ed05fe:
        plVar7 = &local_2b8;
        bVar3 = true;
        bVar11 = false;
        lVar10 = local_2b8;
      }
      else {
        LOCK();
        iVar4 = (int)local_2b0[1];
        bVar11 = iVar4 == 0;
        if (bVar11) {
          *(int *)(local_2b0 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (!bVar11) {
          LOCK();
          bVar11 = iVar4 == (int)local_2b0[1];
          if (bVar11) {
            *(int *)(local_2b0 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar11) {
            if (local_2b0 != (longlong *)0x0) {
              local_2b8 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_142ed05fe;
          }
          LOCK();
          iVar4 = (int)local_2b0[1];
          bVar11 = iVar4 == 0;
          if (bVar11) {
            *(int *)(local_2b0 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
        plVar7 = &local_2b8;
        local_2b0 = (longlong *)0x0;
        bVar3 = true;
        bVar11 = false;
        lVar10 = 0;
      }
      goto LAB_142ed0627;
    }
  }
  plVar7 = &local_270;
  local_270 = 0;
  plStack_268 = (longlong *)0x0;
  bVar3 = false;
  bVar11 = true;
  lVar10 = 0;
LAB_142ed0627:
  plVar2 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  plVar8 = plStack_268;
  *plVar7 = 0;
  if ((bVar11) && (plStack_268 != (longlong *)0x0)) {
    LOCK();
    plVar7 = plStack_268 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_268)(plStack_268);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_268 + 8))(plStack_268,1);
      }
    }
  }
  plVar7 = local_2b0;
  if ((bVar3) && (local_2b0 != (longlong *)0x0)) {
    LOCK();
    plVar8 = local_2b0 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_2b0)(local_2b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_2b0 + 8))(local_2b0,1);
      }
    }
  }
  if (lVar10 != 0) {
    local_228 = 0;
    local_218 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_248);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = param_1;
      *puVar5 = &PTR_FUN_143f77b70;
    }
    local_290 = 0;
    local_258[0] = &LAB_142eb0810;
    local_288 = 0x31;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_290,0);
    local_2c8 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_290,0x31,"UGbxGFxGridScrollingList::RemoveAllListItemsFast");
    FUN_140cdf730(local_108,&local_290,local_258);
    QueryPerformanceCounter(&local_260);
    local_108[0] = local_260;
    lVar6 = operator_new(0x18);
    plVar7 = plVar9;
    if (lVar6 != 0) {
      plVar7 = (longlong *)FUN_140cdf810(lVar6);
    }
    plVar8 = (longlong *)operator_new(0x18);
    if (plVar8 != (longlong *)0x0) {
      *(undefined4 *)(plVar8 + 1) = 1;
      *plVar8 = (longlong)&PTR_DestroyObject_1444f8938;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      plVar8[2] = (longlong)plVar7;
      plVar9 = plVar8;
    }
    local_2a0 = plVar7;
    local_298 = plVar9;
    SharedPointerInternals::EnableSharedFromThis(&local_2a0,plVar7,plVar7);
    *(undefined1 *)(local_2a0 + 2) = 1;
    local_278 = (longlong *)local_2a0[1];
    local_48 = *local_2a0;
    if (local_278 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_278 + 1) = (int)local_278[1] + 1;
      UNLOCK();
    }
    local_280 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_40,&local_278);
    plVar9 = local_278;
    if (local_278 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_278 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_278)(local_278);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_278 + 8))(local_278,1);
        }
      }
    }
    local_128 = (longlong *)0x0;
    local_118 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_148);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_1444f8620;
      puVar5[1] = local_108;
    }
    local_158[0] = &LAB_140cee980;
    local_1b8 = local_2a0;
    local_1b0 = local_298;
    if (local_298 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_298 + 1) = (int)local_298[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_1a8,local_158);
    local_1d8 = 0;
    local_1c8 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x70,local_1f8);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_CopyToEmptyStorage_1444f8578;
      puVar5[2] = local_1b8;
      puVar5[3] = local_1b0;
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
        UNLOCK();
      }
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar5 + 4,local_1a8);
    }
    local_208[0] = &LAB_140cee8d0;
    if (local_168 != 0) {
      plVar9 = local_198;
      if (local_178 != (longlong *)0x0) {
        plVar9 = local_178;
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,0);
      }
    }
    if (local_178 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar9 = local_1b0;
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_1b0 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_1b0)(local_1b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    if (local_118 != 0) {
      plVar9 = local_148;
      if (local_128 != (longlong *)0x0) {
        plVar9 = local_128;
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,0);
      }
    }
    if (local_128 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar9 = local_298;
    if (local_298 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_298 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_298)(local_298);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    FUN_1420326d0(lVar10,local_208);
    FUN_140d1b3a0(local_108);
    FUN_140ce1dc0(local_108);
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar2 + 1;
    lVar10 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return;
}



// FUNCTION 142ed0aa0 FUN_142ed0aa0 body=258 status=ok
// SIG undefined FUN_142ed0aa0(void)

void FUN_142ed0aa0(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)(*param_1 + 0x10 + (longlong)param_2 * 0x30);
    iVar6 = param_3;
    do {
      plVar3 = (longlong *)*plVar7;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
      plVar7 = plVar7 + 6;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x30),
                 (void *)((longlong)(param_2 + param_3) * 0x30 + *param_1),(longlong)iVar5 * 0x30);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 142ed0bb0 FUN_142ed0bb0 body=417 status=ok
// SIG undefined FUN_142ed0bb0(void)

void FUN_142ed0bb0(longlong *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_38 [2];
  undefined8 local_28;
  longlong *local_20;
  
  if (param_2 != 0) {
    iVar5 = 0;
    if (0 < (int)param_1[0x50]) {
      plVar1 = param_1 + 0x4f;
      lVar6 = 0;
      plVar3 = (longlong *)(*plVar1 + 0x18);
      do {
        if (*plVar3 == param_2) {
          lVar7 = (longlong)iVar5 * 0x20;
          lVar6 = *plVar1 + lVar7;
          FString::FString(local_38,lVar6);
          local_28 = *(undefined8 *)(lVar6 + 0x10);
          plVar3 = *(longlong **)(lVar6 + 0x18);
          local_20 = plVar3;
          if (*(longlong *)(lVar7 + *plVar1) != 0) {
            FMemory::Free();
          }
          iVar4 = (int)param_1[0x50];
          iVar2 = (iVar4 - iVar5) + -1;
          if (iVar2 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar1 + lVar7),(void *)((longlong)(iVar5 + 1) * 0x20 + *plVar1),
                       (longlong)iVar2 << 5);
            iVar4 = (int)param_1[0x50];
          }
          *(int *)(param_1 + 0x50) = iVar4 + -1;
          TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(plVar1);
          if (plVar3 != (longlong *)0x0) {
            FUN_142f05ef0(param_1,plVar3,0);
            (**(code **)(*plVar3 + 800))(plVar3);
          }
          iVar5 = (int)param_1[0x52];
          *(int *)(param_1 + 0x52) = iVar5 + 1;
          if (*(int *)((longlong)param_1 + 0x294) < iVar5 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow(param_1 + 0x51,iVar5);
          }
          lVar6 = (longlong)iVar5 * 0x20 + param_1[0x51];
          FString::FString(lVar6,local_38);
          *(undefined8 *)(lVar6 + 0x10) = local_28;
          *(longlong **)(lVar6 + 0x18) = local_20;
          if (local_38[0] != 0) {
            FMemory::Free();
          }
          break;
        }
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 1;
        plVar3 = plVar3 + 4;
      } while (lVar6 < (int)param_1[0x50]);
    }
  }
  if (param_3 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142ed0d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x300))(param_1);
  return;
}



// FUNCTION 142ed0d60 FUN_142ed0d60 body=201 status=ok
// SIG undefined FUN_142ed0d60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142ed0d60(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  code *local_68 [2];
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
  local_68[0] = FUN_142eb0850;
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



// FUNCTION 142ed0e30 FUN_142ed0e30 body=312 status=ok
// SIG undefined FUN_142ed0e30(void)

void FUN_142ed0e30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  bool bVar9;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x4b0));
  LOCK();
  *(undefined4 *)(param_1 + 0x4b8) = 1;
  UNLOCK();
  uVar3 = 0;
  lVar2 = (longlong)*(int *)(param_1 + 0x4a8);
  if (*(int *)(param_1 + 0x4a8) != 0) {
    bVar9 = **(longlong **)(param_1 + 0x4a0) != param_2;
    uVar6 = uVar3;
    uVar8 = uVar3;
    do {
      iVar5 = (int)uVar6;
      uVar3 = uVar3 + 1;
      uVar6 = (ulonglong)(iVar5 + 1);
      if ((longlong)uVar3 < lVar2) {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x4a0) + uVar3 * 8);
        do {
          if (bVar9 != (*plVar1 != param_2)) break;
          uVar6 = (ulonglong)((int)uVar6 + 1);
          uVar3 = uVar3 + 1;
          plVar1 = plVar1 + 1;
        } while ((longlong)uVar3 < lVar2);
      }
      iVar4 = (int)uVar6 - iVar5;
      if (bVar9 != false) {
        iVar7 = (int)uVar8;
        if (iVar7 != iVar5) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x4a0) + (longlong)iVar7 * 8),
                     (void *)(*(longlong *)(param_1 + 0x4a0) + (longlong)iVar5 * 8),
                     (longlong)iVar4 << 3);
        }
        uVar8 = (ulonglong)(uint)(iVar7 + iVar4);
      }
      bVar9 = (bool)(bVar9 ^ 1);
    } while ((longlong)uVar3 < lVar2);
    *(int *)(param_1 + 0x4a8) = (int)uVar8;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x4b0));
  LOCK();
  *(undefined4 *)(param_1 + 0x4b8) = 0;
  UNLOCK();
  return;
}



// FUNCTION 142ed0f70 FUN_142ed0f70 body=1406 status=ok
// SIG undefined FUN_142ed0f70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ed0f70(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  void **ppvVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  char cVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 uVar15;
  longlong lVar16;
  int iVar17;
  longlong *plVar18;
  bool bVar19;
  undefined1 auStack_158 [32];
  char local_138;
  undefined4 local_134;
  void *local_130;
  undefined8 local_128;
  undefined4 local_120;
  longlong local_118;
  longlong *local_110;
  longlong *local_108;
  int local_100;
  longlong local_f8;
  longlong *plStack_f0;
  undefined1 local_d8 [80];
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  bVar6 = false;
  bVar5 = false;
  local_120 = 0;
  local_138 = param_2;
  cVar8 = FWeakObjectPtr::IsValid(param_1 + 0x598);
  if ((cVar8 != '\0') && (lVar9 = FWeakObjectPtr::Get(param_1 + 0x598), lVar9 != 0)) {
    uVar10 = FUN_142f30760();
    plVar11 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar9,uVar10);
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  FUN_142eb75f0(param_1,&local_108);
  local_130 = (void *)0x0;
  local_128 = 0;
  iVar17 = *(int *)(param_1 + 0x518);
  do {
    if (iVar17 < 1) {
      ppvVar3 = (void **)(param_1 + 0x510);
      if (ppvVar3 != &local_130) {
        *(int *)(param_1 + 0x518) = (int)local_128;
        if (((int)local_128 == 0) && (*(int *)(param_1 + 0x51c) == 0)) {
          *(undefined4 *)(param_1 + 0x51c) = 0;
        }
        else {
          lVar9 = (longlong)(int)local_128;
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                    (ppvVar3,local_128 & 0xffffffff);
          _guard_xfg_dispatch_icall_nop(*ppvVar3,local_130,lVar9 << 3);
        }
      }
      if (local_130 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_100 != 0) {
        plVar11 = local_108 + 1;
        iVar17 = local_100;
        do {
          if (*plVar11 != 0) {
            FMemory::Free();
          }
          plVar11 = plVar11 + 4;
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
      }
      if (local_108 != (longlong *)0x0) {
        FMemory::Free();
      }
      return;
    }
    lVar16 = 0;
    lVar9 = *(longlong *)
             (*(longlong *)(param_1 + 0x510) + -8 + (longlong)*(int *)(param_1 + 0x518) * 8);
    *(int *)(param_1 + 0x518) = *(int *)(param_1 + 0x518) + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x510);
    if (lVar9 != 0) {
      local_134 = 0xffffffff;
      FUN_14170c210(&local_134,lVar9);
      uVar15 = local_134;
      local_120 = local_134;
      local_134 = 0xffffffff;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      puVar12 = (undefined8 *)FUN_140438ef0(0x10,local_78);
      if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_FUN_1444f8758;
        *(undefined4 *)(puVar12 + 1) = uVar15;
        uVar15 = 0xffffffff;
        local_120 = 0xffffffff;
      }
      local_88[0] = thunk_FUN_142eab6b0;
      FUN_1416f8340(uVar15);
      FUN_1416f8340();
      if (param_2 == '\0') {
        plVar18 = local_108 + (longlong)local_100 * 4;
        for (plVar11 = local_108; plVar11 != plVar18; plVar11 = plVar11 + 4) {
          if (*(longlong *)(lVar9 + 0x10) != 0) {
            lVar14 = lVar16;
            if (*plVar11 != 0) {
              lVar13 = UGSquadMemberWidget::GetPrivateStaticClass();
              for (lVar4 = *plVar11;
                  (lVar14 = lVar16, lVar4 != 0 && (lVar14 = *plVar11, lVar4 != lVar13));
                  lVar4 = *(longlong *)(lVar4 + 0x30)) {
              }
            }
            uVar7 = local_128;
            for (lVar4 = *(longlong *)(lVar9 + 0x10); lVar4 != 0;
                lVar4 = *(longlong *)(lVar4 + 0x30)) {
              if (lVar4 == lVar14) {
                lVar16 = (longlong)(int)local_128;
                iVar17 = (int)local_128 + 1;
                local_128 = CONCAT44(local_128._4_4_,iVar17);
                if (local_128._4_4_ < iVar17) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (&local_130,uVar7 & 0xffffffff);
                }
                *(longlong *)((longlong)local_130 + lVar16 * 8) = lVar9;
                goto LAB_142ed1338;
              }
            }
          }
        }
      }
      if ((*(longlong *)(lVar9 + 0x158) == 0) || (*(longlong *)(lVar9 + 0x160) == 0)) {
LAB_142ed1212:
        plVar11 = &local_f8;
        local_f8 = 0;
        plStack_f0 = (longlong *)0x0;
        bVar5 = true;
      }
      else {
        piVar1 = (int *)(*(longlong *)(lVar9 + 0x160) + 8);
        LOCK();
        iVar17 = *piVar1;
        if (iVar17 == 0) {
          *piVar1 = 0;
          iVar17 = 0;
        }
        UNLOCK();
        if (iVar17 < 1) goto LAB_142ed1212;
        local_110 = *(longlong **)(lVar9 + 0x160);
        bVar6 = true;
        local_118 = 0;
        if (local_110 == (longlong *)0x0) {
LAB_142ed1206:
          plVar11 = &local_118;
          lVar16 = local_118;
        }
        else {
          LOCK();
          iVar17 = (int)local_110[1];
          bVar19 = iVar17 == 0;
          if (bVar19) {
            *(int *)(local_110 + 1) = 0;
            iVar17 = 0;
          }
          UNLOCK();
          while (!bVar19) {
            LOCK();
            bVar19 = iVar17 == (int)local_110[1];
            if (bVar19) {
              *(int *)(local_110 + 1) = iVar17 + 1;
            }
            UNLOCK();
            if (bVar19) {
              if (local_110 != (longlong *)0x0) {
                local_118 = *(longlong *)(lVar9 + 0x158);
              }
              goto LAB_142ed1206;
            }
            LOCK();
            iVar17 = (int)local_110[1];
            bVar19 = iVar17 == 0;
            if (bVar19) {
              *(int *)(local_110 + 1) = 0;
              iVar17 = 0;
            }
            UNLOCK();
          }
          local_110 = (longlong *)0x0;
          plVar11 = &local_118;
          lVar16 = 0;
        }
      }
      plVar18 = (longlong *)plVar11[1];
      plVar11[1] = 0;
      *plVar11 = 0;
      plVar11 = plStack_f0;
      if ((bVar5) && (bVar5 = false, plStack_f0 != (longlong *)0x0)) {
        LOCK();
        plVar2 = plStack_f0 + 1;
        lVar14 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plStack_f0)(plStack_f0);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*plStack_f0 + 8))(plStack_f0,1);
          }
        }
      }
      plVar11 = local_110;
      if ((bVar6) && (bVar6 = false, local_110 != (longlong *)0x0)) {
        LOCK();
        plVar2 = local_110 + 1;
        lVar14 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*local_110 + 8))(local_110,1);
          }
        }
      }
      if (lVar16 == 0) {
        cVar8 = FUN_14202a080();
        if ((cVar8 != '\0') && ((*(byte *)(lVar9 + 0x624) & 1) != 0)) {
          cVar8 = FUN_14202a080();
          if ((cVar8 != '\0') && ((*(byte *)(lVar9 + 0x624) & 1) != 0)) {
            LOCK();
            bVar19 = *(int *)(lVar9 + 0x628) == 0;
            if (bVar19) {
              *(int *)(lVar9 + 0x628) = 0;
            }
            UNLOCK();
            if (!bVar19) goto LAB_142ed12ff;
          }
          if (local_48 != 0) {
            plVar11 = local_78;
            if (local_58 != (longlong *)0x0) {
              plVar11 = local_58;
            }
            if (plVar11 != (longlong *)0x0) {
              uVar10 = (**(code **)(*plVar11 + 8))();
              (*local_88[0])(uVar10);
              goto LAB_142ed12ff;
            }
          }
          (*local_88[0])(0);
        }
      }
      else {
        cVar8 = FUN_142045f50(lVar16);
        if (cVar8 == '\0') {
          TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8,local_88);
          FUN_14204c370(lVar16,local_d8);
        }
      }
LAB_142ed12ff:
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar18 + 1;
        lVar9 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar18)(plVar18);
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*plVar18 + 8))(plVar18,1);
          }
        }
      }
LAB_142ed1338:
      if (local_48 != 0) {
        plVar11 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar11 = local_58;
        }
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x10))(plVar11,0);
        }
      }
      param_2 = local_138;
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
        param_2 = local_138;
      }
    }
    iVar17 = *(int *)(param_1 + 0x518);
  } while( true );
}



// FUNCTION 142ed14f0 FUN_142ed14f0 body=15 status=ok
// SIG undefined FUN_142ed14f0(void)

void FUN_142ed14f0(longlong param_1)

{
  *(undefined1 *)(param_1 + 400) = 0;
  *(undefined1 *)(param_1 + 0x192) = 0;
  return;
}



// FUNCTION 142ed1500 FUN_142ed1500 body=12 status=ok
// SIG undefined FUN_142ed1500(void)

void FUN_142ed1500(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x628) = 0;
  return;
}



// FUNCTION 142ed1510 FUN_142ed1510 body=209 status=ok
// SIG undefined FUN_142ed1510(void)

void FUN_142ed1510(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 local_res8 [8];
  
  FUN_142ed0f70();
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x5a8);
  if (cVar2 != '\0') {
    plVar4 = *(longlong **)(param_1 + 0x510);
    uVar5 = 0;
    uVar6 = (longlong)*(int *)(param_1 + 0x518) & 0x1fffffffffffffff;
    if (plVar4 + *(int *)(param_1 + 0x518) < plVar4) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      do {
        plVar1 = (longlong *)*plVar4;
        if (plVar1 != (longlong *)0x0) {
          FUN_14172a070(local_res8,0);
          uVar3 = FWeakObjectPtr::Get(param_1 + 0x5a8);
          (**(code **)(*plVar1 + 0x538))(plVar1,uVar3,0);
          FUN_14172a400(local_res8);
        }
        plVar4 = plVar4 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar6);
    }
  }
  FUN_142ed9700(param_1);
  return;
}



// FUNCTION 142ed15f0 FUN_142ed15f0 body=36 status=ok
// SIG undefined FUN_142ed15f0(void)

void FUN_142ed15f0(longlong param_1)

{
  if ((*(char *)(param_1 + 0x32c) != '\0') && (*(longlong *)(param_1 + 0x318) != 0)) {
    FUN_142ed43c0(*(longlong *)(param_1 + 0x318),*(undefined4 *)(param_1 + 0x328));
    return;
  }
  return;
}



// FUNCTION 142ed1620 FUN_142ed1620 body=185 status=ok
// SIG undefined FUN_142ed1620(void)

void FUN_142ed1620(longlong param_1)

{
  undefined4 *puVar1;
  
  if (*(char *)(param_1 + 900) == '\0') {
    return;
  }
  FUN_142ebcb80(*(undefined4 *)(param_1 + 0x350),*(undefined4 *)(param_1 + 0x380),
                *(undefined4 *)(param_1 + 0x354),*(undefined4 *)(param_1 + 0x358),
                *(undefined4 *)(param_1 + 0x350),*(undefined1 *)(param_1 + 0x35c));
  FUN_140757f80(param_1 + 0x328,param_1);
  *(float *)(param_1 + 0x364) = *(float *)(param_1 + 0x380);
  if (*(longlong *)(param_1 + 0x348) != 0) {
    if ((*(char *)(param_1 + 900) == '\0') ||
       (puVar1 = &DAT_1464aa6c0,
       0.001 < ABS(*(float *)(param_1 + 0x380) - *(float *)(param_1 + 0x368)))) {
      puVar1 = (undefined4 *)(param_1 + 0x388);
    }
    FUN_142f0c220(*(longlong *)(param_1 + 0x348),puVar1,1);
    return;
  }
  return;
}



// FUNCTION 142ed16e0 FUN_142ed16e0 body=72 status=ok
// SIG undefined FUN_142ed16e0(void)

void FUN_142ed16e0(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x33c) != '\0') {
    iVar1 = *(int *)(param_1 + 0x338);
    iVar2 = FUN_142eeb880(*(undefined8 *)(param_1 + 800));
    FUN_142f0c980(*(undefined8 *)(param_1 + 800),iVar1,iVar1 < iVar2);
  }
  return;
}



// FUNCTION 142ed1730 FUN_142ed1730 body=166 status=ok
// SIG undefined FUN_142ed1730(void)

void FUN_142ed1730(longlong param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x5c) == -1) {
    iVar2 = *(int *)(param_1 + 0xa0);
    if (((iVar2 != -1) && (-1 < iVar2)) && (iVar2 < *(int *)(param_1 + 0x88))) {
      iVar1 = FUN_142eb0de0();
      iVar2 = *(int *)(param_1 + 0x9c);
      if ((iVar2 != -1) && (iVar2 < iVar1)) {
        iVar1 = iVar2;
      }
      FUN_142ed2f20(param_1,iVar1);
      FUN_142ed1b40(param_1,iVar1,0);
      *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
      return;
    }
    if (param_2 != '\0') {
      iVar2 = 0;
      if (*(int *)(param_1 + 0x9c) < -1) {
        iVar2 = *(int *)(param_1 + 0x9c);
      }
      FUN_142ed2f20(param_1,iVar2);
      FUN_142ed1b40(param_1,iVar2,0);
    }
  }
  return;
}



// FUNCTION 142ed17e0 FUN_142ed17e0 body=126 status=ok
// SIG undefined FUN_142ed17e0(void)

int FUN_142ed17e0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 == -1) || (param_3 == -1)) {
    return -1;
  }
  if (*(char *)(param_1 + 0x1e1) == '\0') {
    if (*(int *)(param_1 + 0x1e4) < 1) {
      return -1;
    }
    param_3 = *(int *)(param_1 + 0x1e4) * param_2 + param_3;
  }
  else {
    if (*(char *)(param_1 + 0x1e1) != '\x01') {
      return -1;
    }
    if (*(int *)(param_1 + 0x1e4) < 1) {
      return -1;
    }
    param_3 = *(int *)(param_1 + 0x1e4) * param_3 + param_2;
  }
  if ((-1 < param_3) && (iVar1 = FUN_142eb7360(), param_3 < iVar1)) {
    return param_3;
  }
  if (param_3 != -1) {
    param_3 = -1;
  }
  return param_3;
}



// FUNCTION 142ed1860 FUN_142ed1860 body=168 status=ok
// SIG undefined FUN_142ed1860(void)

char FUN_142ed1860(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_18 [16];
  
  uVar4 = FString::FString(local_18,param_3);
  cVar2 = FUN_142ed1910(param_1,param_2,uVar4);
  if (cVar2 == '\0') {
    cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x5d0);
    if (cVar3 != '\0') {
      plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x5d0);
      lVar1 = *plVar5;
      uVar4 = FString::FString(local_18,param_3);
      cVar2 = (**(code **)(lVar1 + 0x4e8))(plVar5,param_2,uVar4);
    }
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return cVar2;
}



// FUNCTION 142ed1910 FUN_142ed1910 body=551 status=ok
// SIG undefined FUN_142ed1910(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142ed1910(longlong param_1,longlong param_2,longlong *param_3)

{
  PSRWLOCK SRWLock;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  LOCK();
  iVar1 = *(int *)(param_1 + 0x498);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x498) = 0;
    iVar1 = 0;
  }
  UNLOCK();
  if (iVar1 < 1) {
    SRWLock = (PSRWLOCK)(param_1 + 0x488);
    AcquireSRWLockShared(SRWLock);
    LOCK();
    *(int *)(param_1 + 0x494) = *(int *)(param_1 + 0x494) + 1;
    UNLOCK();
    if (0 < *(int *)(param_1 + 0x440) - *(int *)(param_1 + 0x46c)) {
      lVar2 = *(longlong *)(param_1 + 0x478);
      if (*(longlong *)(param_1 + 0x478) == 0) {
        lVar2 = param_1 + 0x470;
      }
      iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                               (longlong)*(int *)(param_1 + 0x480) - 1U) * 4);
      if (iVar1 != -1) {
        do {
          lVar2 = *(longlong *)(param_1 + 0x438) + (longlong)iVar1 * 0x18;
          if (*(longlong *)(*(longlong *)(param_1 + 0x438) + (longlong)iVar1 * 0x18) == param_2) {
            if (iVar1 != -1) goto LAB_142ed19e3;
            break;
          }
          iVar1 = *(int *)(lVar2 + 0x10);
        } while (iVar1 != -1);
      }
      lVar2 = 0;
LAB_142ed19e3:
      lVar3 = lVar2 + 8;
      if (lVar2 == 0) {
        lVar3 = 0;
      }
      if (lVar3 != 0) {
        ReleaseSRWLockShared(SRWLock);
        LOCK();
        *(int *)(param_1 + 0x494) = *(int *)(param_1 + 0x494) + -1;
        UNLOCK();
        local_98 = (longlong *)0x0;
        local_88 = 0;
        local_d8 = param_1;
        uStack_d0 = param_2;
        puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_b8);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = &PTR_FUN_143f77c18;
          *(undefined4 *)(puVar4 + 1) = (undefined4)local_d8;
          *(undefined4 *)((longlong)puVar4 + 0xc) = local_d8._4_4_;
          *(undefined4 *)(puVar4 + 2) = (undefined4)uStack_d0;
          *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_d0._4_4_;
        }
        local_c8[0] = &LAB_142eb0ab0;
        uVar5 = FUN_1420849a0(param_1,local_78,local_c8);
        FUN_14208c260(param_1,uVar5);
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
        if (local_88 != 0) {
          plVar6 = local_b8;
          if (local_98 != (longlong *)0x0) {
            plVar6 = local_98;
          }
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x10))(plVar6,0);
          }
        }
        if (local_98 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (*param_3 != 0) {
          FMemory::Free();
        }
        return 1;
      }
    }
    ReleaseSRWLockShared(SRWLock);
    LOCK();
    *(int *)(param_1 + 0x494) = *(int *)(param_1 + 0x494) + -1;
    UNLOCK();
    lVar2 = *param_3;
  }
  else {
    lVar2 = *param_3;
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  return 0;
}



// FUNCTION 142ed1b40 FUN_142ed1b40 body=203 status=ok
// SIG undefined FUN_142ed1b40(void)

void FUN_142ed1b40(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((-1 < param_2) && (iVar1 = FUN_142eb6360(), param_2 < iVar1)) {
    if (*(int *)(param_1 + 0x54) < 1) {
      param_2 = 1;
    }
    else {
      param_2 = param_2 / *(int *)(param_1 + 0x54);
    }
    fVar4 = (float)param_2 * *(float *)(param_1 + 0x90);
    fVar3 = *(float *)(param_1 + 0x90) + fVar4;
    fVar2 = (float)FUN_142eedeb0(param_1 + 0x20);
    if ((fVar2 <= fVar4) && (fVar4 = fVar2, *(float *)(param_1 + 0x40) + fVar2 < fVar3)) {
      fVar4 = fVar3 - *(float *)(param_1 + 0x40);
    }
    if (param_3 != '\0') {
      FUN_142f0ee50();
      return;
    }
    FUN_142f0ced0(param_1 + 0x20,fVar4);
  }
  return;
}



// FUNCTION 142ed1c40 FUN_142ed1c40 body=92 status=ok
// SIG undefined FUN_142ed1c40(void)

ulonglong FUN_142ed1c40(longlong *param_1,undefined8 param_2,char param_3)

{
  uint uVar1;
  char cVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  
  if ((char)param_1[0x4a] == '\0') {
    return in_RAX;
  }
  if (param_3 == '\0') {
    FUN_142f0ee50(param_1 + 0x57);
  }
  else {
    FUN_142f0ced0();
  }
  cVar2 = FUN_142eb3410();
  if (cVar2 != '\0') {
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x62);
    *(uint *)(param_1 + 0x62) = 1;
    UNLOCK();
    return (ulonglong)uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000142ed1c8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*param_1 + 0x340))(param_1);
  return uVar3;
}



// FUNCTION 142ed1ca0 FUN_142ed1ca0 body=53 status=ok
// SIG undefined FUN_142ed1ca0(void)

ulonglong FUN_142ed1ca0(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  
  cVar2 = FUN_142eb3410();
  if (cVar2 != '\0') {
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x62);
    *(uint *)(param_1 + 0x62) = 1;
    UNLOCK();
    return (ulonglong)uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000142ed1cce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*param_1 + 0x340))(param_1);
  return uVar3;
}



// FUNCTION 142ed1ce0 FUN_142ed1ce0 body=158 status=ok
// SIG undefined FUN_142ed1ce0(void)

void FUN_142ed1ce0(longlong *param_1,longlong param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x2d8);
    iVar2 = (**(code **)(*param_1 + 0x2d0))();
    if (iVar1 == iVar2) {
      uVar3 = 0;
    }
    else {
      if (*(char *)((longlong)param_1 + 0x1e1) == '\0') {
        uVar3 = *(undefined4 *)(param_2 + 0x2e8);
        uVar4 = *(undefined4 *)(param_2 + 0x2e4);
      }
      else {
        uVar3 = *(undefined4 *)(param_2 + 0x2f0);
        uVar4 = *(undefined4 *)(param_2 + 0x2ec);
      }
      uVar3 = FUN_142eebcd0(param_1 + 0x57,uVar4,uVar3);
    }
    (**(code **)(*param_1 + 0x2f8))(param_1,uVar3,param_3);
  }
  return;
}



// FUNCTION 142ed1d80 FUN_142ed1d80 body=303 status=ok
// SIG undefined FUN_142ed1d80(void)

void FUN_142ed1d80(longlong *param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (param_2 != 0) {
    if ((int)param_1[100] < 1) {
      iVar3 = *(int *)(param_2 + 0x2d8);
      iVar2 = (**(code **)(*param_1 + 0x2d0))();
      if (iVar3 == iVar2) {
        uVar5 = 0;
      }
      else if (*(char *)((longlong)param_1 + 0x1e1) == '\0') {
        uVar5 = FUN_142eebcd0(param_1 + 0x57,*(undefined4 *)(param_2 + 0x2e4),
                              *(undefined4 *)(param_2 + 0x2e8));
      }
      else {
        uVar5 = FUN_142eebcd0(param_1 + 0x57,*(undefined4 *)(param_2 + 0x2ec),
                              *(undefined4 *)(param_2 + 0x2f0));
      }
    }
    else {
      iVar4 = *(int *)((longlong)param_1 + 0x1e4) * (int)param_1[100];
      iVar3 = *(int *)(param_2 + 0x2d8);
      iVar2 = iVar3 / iVar4;
      *(int *)((longlong)param_1 + 0x324) = iVar2;
      lVar1 = *(longlong *)((longlong)(iVar2 * iVar4) * 0x20 + 0x18 + param_1[0x4f]);
      if (lVar1 == 0) {
        return;
      }
      iVar2 = *(int *)(lVar1 + 0x2d8);
      iVar3 = (**(code **)(*param_1 + 0x2d0))
                        (param_1,(longlong)iVar3 % (longlong)iVar4 & 0xffffffff);
      if (iVar2 == iVar3) {
        uVar5 = 0;
      }
      else if (*(char *)((longlong)param_1 + 0x1e1) == '\0') {
        uVar5 = *(undefined4 *)(lVar1 + 0x2e4);
      }
      else {
        uVar5 = *(undefined4 *)(lVar1 + 0x2ec);
      }
      param_3 = 0;
    }
    (**(code **)(*param_1 + 0x2f8))(param_1,uVar5,param_3);
  }
  return;
}



// FUNCTION 142ed1eb0 FUN_142ed1eb0 body=84 status=ok
// SIG undefined FUN_142ed1eb0(void)

void FUN_142ed1eb0(longlong *param_1,undefined1 param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *param_1;
  uVar2 = (**(code **)(lVar1 + 0x2d0))();
                    /* WARNING: Could not recover jumptable at 0x000142ed1f01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x2b8))(param_1,uVar2,param_2,param_3);
  return;
}



// FUNCTION 142ed1f10 FUN_142ed1f10 body=330 status=ok
// SIG undefined FUN_142ed1f10(void)

void FUN_142ed1f10(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  
  iVar1 = (int)param_1[0x50];
  if (iVar1 < 1) {
LAB_142ed203f:
                    /* WARNING: Could not recover jumptable at 0x000142ed2053. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2b8))(param_1,0xffffffff,0);
    return;
  }
  if (param_2 < 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = iVar1 + -1;
    if (param_2 < iVar1 + -1) {
      iVar8 = param_2;
    }
    if (iVar8 == -1) goto LAB_142ed203f;
  }
  lVar6 = (longlong)iVar8;
  if (lVar6 < iVar1) {
    lVar4 = lVar6 << 5;
    iVar5 = iVar8;
    do {
      if (((-1 < lVar6) && (iVar5 < (int)param_1[0x50])) &&
         (lVar2 = *(longlong *)(param_1[0x4f] + 0x18 + lVar4), lVar2 != 0)) {
        cVar3 = (**(code **)(*(longlong *)(lVar2 + 0x170) + 0x40))();
        if (cVar3 != '\0') goto LAB_142ed2031;
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0x20;
    } while (lVar6 < iVar1);
  }
  iVar5 = iVar8 + -1;
  lVar6 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar4 = lVar6 << 5;
    do {
      if (((-1 < lVar6) && (iVar5 < (int)param_1[0x50])) &&
         (lVar2 = *(longlong *)(param_1[0x4f] + 0x18 + lVar4), lVar2 != 0)) {
        cVar3 = (**(code **)(*(longlong *)(lVar2 + 0x170) + 0x40))();
        if (cVar3 != '\0') goto LAB_142ed2031;
      }
      iVar5 = iVar5 + -1;
      lVar4 = lVar4 + -0x20;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  lVar6 = *param_1;
  uVar7 = 0;
  iVar5 = -1;
  goto LAB_142ed200c;
LAB_142ed2031:
  lVar6 = *param_1;
  uVar7 = 1;
LAB_142ed200c:
                    /* WARNING: Could not recover jumptable at 0x000142ed202a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x2b8))(param_1,iVar5,uVar7);
  return;
}



// FUNCTION 142ed2060 FUN_142ed2060 body=184 status=ok
// SIG undefined FUN_142ed2060(void)

void FUN_142ed2060(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x2c0);
    uVar3 = 0;
    uVar4 = (longlong)*(int *)(param_1 + 0x2c8) & 0x1fffffffffffffff;
    if (plVar2 + *(int *)(param_1 + 0x2c8) < plVar2) {
      uVar4 = uVar3;
    }
    if (uVar4 == 0) {
      *(longlong *)(param_1 + 0x300) = param_2;
    }
    else {
      do {
        lVar1 = *plVar2;
        if (lVar1 != 0) {
          (**(code **)(*(longlong *)(lVar1 + 0x150) + 0x38))
                    ((longlong *)(lVar1 + 0x150),lVar1 == param_2);
        }
        plVar2 = plVar2 + 1;
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar4);
      *(longlong *)(param_1 + 0x300) = param_2;
    }
    return;
  }
  *(undefined8 *)(param_1 + 0x300) = 0;
  return;
}



// FUNCTION 142ed2120 FUN_142ed2120 body=7 status=ok
// SIG undefined FUN_142ed2120(void)

void FUN_142ed2120(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1e2) = param_2;
  return;
}



// FUNCTION 142ed2130 bpf__SetVirtualHeadphoneEnabled__pf body=7 status=ok
// SIG undefined bpf__SetVirtualHeadphoneEnabled__pf(void)

void ATribePawnBP_C__pf2348183285::bpf__SetVirtualHeadphoneEnabled__pf
               (longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x401) = param_2;
  return;
}



// FUNCTION 142ed2140 FUN_142ed2140 body=121 status=ok
// SIG undefined FUN_142ed2140(void)

void FUN_142ed2140(longlong param_1,byte param_2)

{
  char cVar1;
  longlong lVar2;
  
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfffffeff;
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | (uint)param_2 << 8;
  *(byte *)(param_1 + 0x5df) = param_2;
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x59c);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x59c);
    (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0xd8))
              ((longlong *)(param_1 + 0x4d8),*(undefined1 *)(lVar2 + 0xb8));
  }
                    /* WARNING: Could not recover jumptable at 0x000142ed21b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0xe0))
            ((longlong *)(param_1 + 0x4d8),*(undefined1 *)(param_1 + 0x5de));
  return;
}



// FUNCTION 142ed21c0 FUN_142ed21c0 body=35 status=ok
// SIG undefined FUN_142ed21c0(void)

void FUN_142ed21c0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined1 *)(param_1 + 0x21a) = 1;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x21c) = *param_2;
  *(undefined4 *)(param_1 + 0x220) = uVar1;
  *(undefined4 *)(param_1 + 0x224) = uVar2;
  *(undefined4 *)(param_1 + 0x228) = uVar3;
  *(undefined8 *)(param_1 + 0x22c) = *(undefined8 *)(param_2 + 4);
  FUN_142ecf3f0();
  return;
}



// FUNCTION 142ed21f0 FUN_142ed21f0 body=32 status=ok
// SIG undefined FUN_142ed21f0(void)

ulonglong FUN_142ed21f0(longlong param_1,char param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  
  if (param_2 != '\0') {
    LOCK();
    *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + -1;
    UNLOCK();
    uVar2 = 0;
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x498);
    if (uVar1 == 0) {
      *(uint *)(param_1 + 0x498) = 0;
    }
    else {
      uVar2 = (ulonglong)uVar1;
    }
    UNLOCK();
    return uVar2;
  }
  LOCK();
  *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + 1;
  UNLOCK();
  return in_RAX;
}



// FUNCTION 142ed2210 FUN_142ed2210 body=23 status=ok
// SIG undefined FUN_142ed2210(void)

void FUN_142ed2210(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x368) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142ed221f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x368) + 0x278))();
    return;
  }
  return;
}



// FUNCTION 142ed2230 FUN_142ed2230 body=17 status=ok
// SIG undefined FUN_142ed2230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ed2230(longlong param_1,float *param_2)

{
  int *piVar1;
  uint *puVar2;
  LARGE_INTEGER *pLVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  float fVar33;
  undefined1 auStack_228 [32];
  undefined2 uStack_208;
  longlong lStack_1f8;
  longlong *plStack_1f0;
  undefined4 uStack_1e8;
  longlong lStack_1e0;
  longlong *plStack_1d8;
  longlong *plStack_1d0;
  longlong *plStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  longlong lStack_1b0;
  longlong *plStack_1a8;
  LARGE_INTEGER LStack_1a0;
  undefined1 *apuStack_198 [2];
  undefined1 auStack_188 [32];
  undefined8 uStack_168;
  undefined4 uStack_158;
  undefined1 *apuStack_148 [2];
  undefined1 auStack_138 [32];
  undefined8 uStack_118;
  undefined4 uStack_108;
  longlong *plStack_f8;
  longlong *plStack_f0;
  undefined1 auStack_e8 [16];
  longlong alStack_d8 [4];
  longlong *plStack_b8;
  int iStack_a8;
  undefined1 *apuStack_98 [2];
  longlong alStack_88 [4];
  longlong *plStack_68;
  int iStack_58;
  ulonglong uStack_48;
  
  lVar4 = *(longlong *)(param_1 + 0x2b8);
  if (lVar4 == 0) {
    return;
  }
  uStack_48 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  uStack_1e8 = 0;
  if ((*(longlong *)(lVar4 + 0x28) != 0) && (*(longlong *)(lVar4 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(lVar4 + 0x30) + 8);
    LOCK();
    iVar13 = *piVar1;
    if (iVar13 == 0) {
      *piVar1 = 0;
      iVar13 = 0;
    }
    UNLOCK();
    if (0 < iVar13) {
      plStack_1f0 = *(longlong **)(lVar4 + 0x30);
      lStack_1f8 = 0;
      if (plStack_1f0 == (longlong *)0x0) {
LAB_142f0b56e:
        plVar14 = &lStack_1f8;
        bVar12 = true;
        bVar20 = false;
        lVar19 = lStack_1f8;
      }
      else {
        LOCK();
        iVar13 = (int)plStack_1f0[1];
        bVar20 = iVar13 == 0;
        if (bVar20) {
          *(int *)(plStack_1f0 + 1) = 0;
          iVar13 = 0;
        }
        UNLOCK();
        while (!bVar20) {
          LOCK();
          bVar20 = iVar13 == (int)plStack_1f0[1];
          if (bVar20) {
            *(int *)(plStack_1f0 + 1) = iVar13 + 1;
          }
          UNLOCK();
          if (bVar20) {
            if (plStack_1f0 != (longlong *)0x0) {
              lStack_1f8 = *(longlong *)(lVar4 + 0x28);
            }
            goto LAB_142f0b56e;
          }
          LOCK();
          iVar13 = (int)plStack_1f0[1];
          bVar20 = iVar13 == 0;
          if (bVar20) {
            *(int *)(plStack_1f0 + 1) = 0;
            iVar13 = 0;
          }
          UNLOCK();
        }
        plVar14 = &lStack_1f8;
        plStack_1f0 = (longlong *)0x0;
        bVar12 = true;
        bVar20 = false;
        lVar19 = 0;
      }
      goto LAB_142f0b597;
    }
  }
  plVar14 = &lStack_1b0;
  lStack_1b0 = 0;
  plStack_1a8 = (longlong *)0x0;
  bVar12 = false;
  bVar20 = true;
  lVar19 = 0;
LAB_142f0b597:
  plVar5 = (longlong *)plVar14[1];
  plVar14[1] = 0;
  plVar17 = plStack_1a8;
  *plVar14 = 0;
  if ((bVar20) && (plStack_1a8 != (longlong *)0x0)) {
    LOCK();
    puVar2 = (uint *)(plStack_1a8 + 1);
    uVar30 = *puVar2;
    plVar14 = (longlong *)(ulonglong)uVar30;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if (uVar30 == 1) {
      (**(code **)*plStack_1a8)(plStack_1a8);
      LOCK();
      puVar2 = (uint *)((longlong)plVar17 + 0xc);
      uVar30 = *puVar2;
      plVar14 = (longlong *)(ulonglong)uVar30;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if (uVar30 == 1) {
        plVar14 = (longlong *)(**(code **)(*plStack_1a8 + 8))(plStack_1a8,1);
      }
    }
  }
  plVar17 = plStack_1f0;
  iVar13 = (int)plVar14;
  if ((bVar12) && (plStack_1f0 != (longlong *)0x0)) {
    LOCK();
    plVar14 = plStack_1f0 + 1;
    iVar13 = (int)*plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if (iVar13 == 1) {
      (**(code **)*plStack_1f0)(plStack_1f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        iVar13 = (**(code **)(*plStack_1f0 + 8))(plStack_1f0,1);
      }
    }
  }
  if (lVar19 != 0) {
    fVar7 = *param_2;
    fVar8 = param_2[1];
    fVar9 = param_2[2];
    fVar10 = param_2[3];
    *(float *)(lVar4 + 0x40) = fVar7;
    *(float *)(lVar4 + 0x44) = fVar8;
    *(float *)(lVar4 + 0x48) = fVar9;
    *(float *)(lVar4 + 0x4c) = fVar10;
    uVar11 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(lVar4 + 0x58) = uVar11;
    uVar11 = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(lVar4 + 0x60) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(lVar4 + 0x68) = uVar11;
    fVar23 = fVar7 * fVar7 + fVar9 * fVar9;
    fVar24 = fVar8 * fVar8 + fVar10 * fVar10;
    fVar26 = fVar9 * fVar9 + fVar7 * fVar7;
    fVar28 = fVar10 * fVar10 + fVar8 * fVar8;
    fVar33 = fVar24 + fVar23;
    fVar24 = fVar26 + fVar24;
    fVar26 = fVar28 + fVar26;
    fVar23 = fVar23 + fVar28;
    auVar21._0_4_ = (float)((uint)(_DAT_146b3dea0 - fVar33) & _DAT_146b3df40);
    auVar21._4_4_ = (float)((uint)(fRam0000000146b3dea4 - fVar24) & uRam0000000146b3df44);
    auVar21._8_4_ = (float)((uint)(fRam0000000146b3dea8 - fVar26) & uRam0000000146b3df48);
    auVar21._12_4_ = (float)((uint)(fRam0000000146b3deac - fVar23) & uRam0000000146b3df4c);
    auVar22._4_4_ = -(uint)(fRam0000000146b3df54 < auVar21._4_4_);
    auVar22._0_4_ = -(uint)(_DAT_146b3df50 < auVar21._0_4_);
    auVar22._8_4_ = -(uint)(fRam0000000146b3df58 < auVar21._8_4_);
    auVar22._12_4_ = -(uint)(fRam0000000146b3df5c < auVar21._12_4_);
    iVar13 = movmskps(iVar13,auVar22);
    if (iVar13 != 0) {
      auVar6._4_4_ = fVar24;
      auVar6._0_4_ = fVar33;
      auVar6._8_4_ = fVar26;
      auVar6._12_4_ = fVar23;
      auVar22 = rsqrtps(auVar21,auVar6);
      fVar28 = auVar22._0_4_;
      fVar25 = auVar22._4_4_;
      fVar27 = auVar22._8_4_;
      fVar29 = auVar22._12_4_;
      fVar28 = (_DAT_146b3de90 - fVar28 * fVar28 * fVar33 * _DAT_146b3de90) * fVar28 + fVar28;
      fVar25 = (fRam0000000146b3de94 - fVar25 * fVar25 * fVar24 * fRam0000000146b3de94) * fVar25 +
               fVar25;
      fVar27 = (fRam0000000146b3de98 - fVar27 * fVar27 * fVar26 * fRam0000000146b3de98) * fVar27 +
               fVar27;
      fVar29 = (fRam0000000146b3de9c - fVar29 * fVar29 * fVar23 * fRam0000000146b3de9c) * fVar29 +
               fVar29;
      uVar30 = ((uint)(((fRam0000000146b3de94 - fVar25 * fVar25 * fVar24 * fRam0000000146b3de94) *
                        fVar25 + fVar25) * fVar8) ^ uRam0000000146b3de84) &
               -(uint)(fRam0000000146b3df14 <= fVar24) ^ uRam0000000146b3de84;
      uVar31 = ((uint)(((fRam0000000146b3de98 - fVar27 * fVar27 * fVar26 * fRam0000000146b3de98) *
                        fVar27 + fVar27) * fVar9) ^ uRam0000000146b3de88) &
               -(uint)(fRam0000000146b3df18 <= fVar26) ^ uRam0000000146b3de88;
      uVar32 = ((uint)(((fRam0000000146b3de9c - fVar29 * fVar29 * fVar23 * fRam0000000146b3de9c) *
                        fVar29 + fVar29) * fVar10) ^ uRam0000000146b3de8c) &
               -(uint)(fRam0000000146b3df1c <= fVar23) ^ uRam0000000146b3de8c;
      *(uint *)(lVar4 + 0x40) =
           ((uint)(((_DAT_146b3de90 - fVar28 * fVar28 * fVar33 * _DAT_146b3de90) * fVar28 + fVar28)
                  * fVar7) ^ _DAT_146b3de80) & -(uint)(_DAT_146b3df10 <= fVar33) ^ _DAT_146b3de80;
      *(uint *)(lVar4 + 0x44) = uVar30;
      *(uint *)(lVar4 + 0x48) = uVar31;
      *(uint *)(lVar4 + 0x4c) = uVar32;
    }
    pLVar3 = (LARGE_INTEGER *)(lVar4 + 0xa0);
    if ((*(longlong *)(lVar4 + 0x160) == 0) ||
       (*(char *)(*(longlong *)(lVar4 + 0x160) + 0x58) != '\0')) {
      plVar14 = (longlong *)0x0;
      uStack_168 = 0;
      uStack_158 = 0;
      puVar15 = (undefined8 *)FUN_140438ef0(0x10,auStack_188);
      if (puVar15 != (undefined8 *)0x0) {
        puVar15[1] = lVar4;
        *puVar15 = &PTR_FUN_143f77b70;
      }
      uStack_1c0 = 0;
      apuStack_198[0] = &LAB_142ee3660;
      uStack_1b8 = 0x27;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&uStack_1c0,0);
      uStack_208 = 0x3f;
      FGenericPlatformString::Convert<char,wchar_t>
                (uStack_1c0,0x27,"UGbxGFxObject::SetBaseDisplayTransform");
      FUN_142f0e4d0(pLVar3,&uStack_1c0,apuStack_198);
      QueryPerformanceCounter(&LStack_1a0);
      *pLVar3 = LStack_1a0;
      lVar16 = operator_new(0x18);
      plVar17 = plVar14;
      if (lVar16 != 0) {
        plVar17 = (longlong *)FUN_140cdf810(lVar16);
      }
      plVar18 = (longlong *)operator_new(0x18);
      if (plVar18 != (longlong *)0x0) {
        *(undefined4 *)(plVar18 + 1) = 1;
        *plVar18 = (longlong)&PTR_DestroyObject_1444f8938;
        *(undefined4 *)((longlong)plVar18 + 0xc) = 1;
        plVar18[2] = (longlong)plVar17;
        plVar14 = plVar18;
      }
      plStack_1d0 = plVar17;
      plStack_1c8 = plVar14;
      SharedPointerInternals::EnableSharedFromThis(&plStack_1d0,plVar17,plVar17);
      *(undefined1 *)(plStack_1d0 + 2) = 1;
      plStack_1d8 = (longlong *)plStack_1d0[1];
      lStack_1e0 = *plStack_1d0;
      if (plStack_1d8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_1d8 + 1) = (int)plStack_1d8[1] + 1;
        UNLOCK();
      }
      if ((longlong *)(lVar4 + 0x160) != &lStack_1e0) {
        *(longlong *)(lVar4 + 0x160) = lStack_1e0;
        lStack_1e0 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(lVar4 + 0x168,&plStack_1d8);
      }
      plVar14 = plStack_1d8;
      if (plStack_1d8 != (longlong *)0x0) {
        LOCK();
        plVar17 = plStack_1d8 + 1;
        lVar4 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_1d8)(plStack_1d8);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plStack_1d8 + 8))(plStack_1d8,1);
          }
        }
      }
      plStack_68 = (longlong *)0x0;
      iStack_58 = 0;
      puVar15 = (undefined8 *)FUN_140438ef0(0x10,alStack_88);
      if (puVar15 != (undefined8 *)0x0) {
        puVar15[1] = pLVar3;
        *puVar15 = &PTR_FUN_1444f8620;
      }
      apuStack_98[0] = &LAB_140cee980;
      plStack_f8 = plStack_1d0;
      plStack_f0 = plStack_1c8;
      if (plStack_1c8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_1c8 + 1) = (int)plStack_1c8[1] + 1;
        UNLOCK();
      }
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(auStack_e8,apuStack_98);
      uStack_118 = 0;
      uStack_108 = 0;
      puVar15 = (undefined8 *)FUN_140438ef0(0x70,auStack_138);
      if (puVar15 != (undefined8 *)0x0) {
        *puVar15 = &PTR_CopyToEmptyStorage_1444f8578;
        puVar15[2] = plStack_f8;
        puVar15[3] = plStack_f0;
        if (plStack_f0 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
          UNLOCK();
        }
        TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar15 + 4,auStack_e8);
      }
      apuStack_148[0] = &LAB_140cee8d0;
      if (iStack_a8 != 0) {
        plVar14 = alStack_d8;
        if (plStack_b8 != (longlong *)0x0) {
          plVar14 = plStack_b8;
        }
        if (plVar14 != (longlong *)0x0) {
          (**(code **)(*plVar14 + 0x10))(plVar14,0);
        }
      }
      if (plStack_b8 != (longlong *)0x0) {
        FMemory::Free();
      }
      plVar14 = plStack_f0;
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        plVar17 = plStack_f0 + 1;
        lVar4 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_f0)(plStack_f0);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      if (iStack_58 != 0) {
        plVar14 = alStack_88;
        if (plStack_68 != (longlong *)0x0) {
          plVar14 = plStack_68;
        }
        if (plVar14 != (longlong *)0x0) {
          (**(code **)(*plVar14 + 0x10))(plVar14,0);
        }
      }
      if (plStack_68 != (longlong *)0x0) {
        FMemory::Free();
      }
      plVar14 = plStack_1c8;
      if (plStack_1c8 != (longlong *)0x0) {
        LOCK();
        plVar17 = plStack_1c8 + 1;
        lVar4 = *plVar17;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_1c8)(plStack_1c8);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      FUN_1420326d0(lVar19,apuStack_148);
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar5 + 1;
    lVar4 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 142ed2250 FUN_142ed2250 body=563 status=ok
// SIG undefined FUN_142ed2250(void)

void FUN_142ed2250(longlong param_1,undefined1 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *plStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  lVar9 = 0;
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
      local_a0 = *(longlong **)(param_1 + 0x30);
      local_a8 = 0;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        iVar6 = (int)local_a0[1];
        bVar10 = iVar6 == 0;
        if (bVar10) {
          *(int *)(local_a0 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar10) {
          LOCK();
          bVar10 = iVar6 == (int)local_a0[1];
          if (bVar10) {
            *(int *)(local_a0 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar10) {
            lVar9 = *(longlong *)(param_1 + 0x28);
            plVar7 = &local_a8;
            bVar4 = true;
            bVar10 = false;
            local_a8 = lVar9;
            goto LAB_142ed2318;
          }
          LOCK();
          iVar6 = (int)local_a0[1];
          bVar10 = iVar6 == 0;
          if (bVar10) {
            *(int *)(local_a0 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        local_a0 = (longlong *)0x0;
      }
      lVar9 = 0;
      plVar7 = &local_a8;
      bVar4 = true;
      bVar10 = false;
      goto LAB_142ed2318;
    }
  }
  plVar7 = &local_98;
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  bVar4 = false;
  bVar10 = true;
LAB_142ed2318:
  plVar3 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_90;
  if ((bVar10) && (plStack_90 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_90 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
  plVar7 = local_a0;
  if ((bVar4) && (local_a0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_a0 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  if (lVar9 != 0) {
    uStack_80 = CONCAT31(uStack_80._1_3_,param_2);
    local_48 = 0;
    local_38 = 0;
    local_88 = param_1;
    puVar8 = (undefined8 *)FUN_140438ef0(0x18,local_68);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar8 + 1) = (undefined4)local_88;
      *(undefined4 *)((longlong)puVar8 + 0xc) = local_88._4_4_;
      *(undefined4 *)(puVar8 + 2) = uStack_80;
      *(undefined4 *)((longlong)puVar8 + 0x14) = uStack_7c;
    }
    local_78[0] = &LAB_142eb0db0;
    FUN_14208c5d0(param_1,local_78);
  }
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
  return;
}



// FUNCTION 142ed2490 FUN_142ed2490 body=65 status=ok
// SIG undefined FUN_142ed2490(void)

void FUN_142ed2490(longlong param_1,undefined8 param_2,char param_3)

{
  FText::operator=(param_1 + 0x310);
  if (param_3 != '\0') {
    TSet<TTuple<AccountId,TSharedPtr<ILoginSession,0>_>,TDefaultMapHashableKeyFuncs<AccountId,TSharedPtr<ILoginSession,0>,0>,FDefaultSetAllocator>
    ::Empty(param_1 + 0x378,0);
  }
  FUN_142ecf300(param_1);
  return;
}



// FUNCTION 142ed24e0 FUN_142ed24e0 body=247 status=ok
// SIG undefined FUN_142ed24e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ed24e0(longlong param_1,undefined8 param_2,undefined8 param_3)

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
                  ::FindId(param_1 + 0x378,local_68,param_2);
  if (*piVar4 != -1) {
    FUN_1410ea8b0(param_1 + 0x378,param_2);
  }
  local_50[0] = 4;
  FText::FText(local_40,param_3);
  local_58 = local_50;
  local_28 = '\x01';
  local_60 = param_2;
  FUN_1405df450(param_1 + 0x378,local_64,&local_60,0);
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



// FUNCTION 142ed25e0 FUN_142ed25e0 body=26 status=ok
// SIG undefined FUN_142ed25e0(void)

void FUN_142ed25e0(longlong *param_1,byte param_2)

{
  *(uint *)(param_1 + 0x67) = (uint)param_2;
  *(undefined1 *)((longlong)param_1 + 0x33c) = 1;
                    /* WARNING: Could not recover jumptable at 0x000142ed25f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x330))();
  return;
}



// FUNCTION 142ed2600 FUN_142ed2600 body=22 status=ok
// SIG undefined FUN_142ed2600(void)

void FUN_142ed2600(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x2c4)) {
    *(char *)(param_1 + 0x2c4) = param_2;
    FUN_142ecf920(param_1,0);
    return;
  }
  return;
}



// FUNCTION 142ed2620 FUN_142ed2620 body=497 status=ok
// SIG undefined FUN_142ed2620(void)

void FUN_142ed2620(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  longlong *plVar8;
  longlong lVar9;
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
  
  if ((-1 < param_2) && (lVar9 = 0, param_2 != *(int *)(param_1 + 0x32c))) {
    lVar4 = *(longlong *)(param_1 + 0x248);
    *(int *)(param_1 + 0x32c) = param_2;
    if (lVar4 == 0) {
      plVar8 = &local_68;
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      lVar9 = *(longlong *)(lVar4 + 0x170);
      local_70 = *(longlong **)(lVar4 + 0x178);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
      }
      plVar8 = &local_78;
      bVar7 = true;
      bVar6 = false;
      local_78 = lVar9;
    }
    plVar5 = (longlong *)plVar8[1];
    plVar8[1] = 0;
    *plVar8 = 0;
    plVar8 = plStack_60;
    if ((bVar6) && (plStack_60 != (longlong *)0x0)) {
      LOCK();
      plVar1 = plStack_60 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_60 + 8))(plStack_60,1);
        }
      }
    }
    plVar8 = local_70;
    if ((bVar7) && (local_70 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    if (lVar9 != 0) {
      local_38 = *(undefined4 *)(param_1 + 0x32c);
      local_48 = (longlong *)0x0;
      local_58 = 0xffffffffffffffff;
      uStack_50 = 0xffffffffffffffff;
      local_40 = 3;
      FUN_1420523e0(lVar9,"maxChars",&local_58);
      if ((local_40 >> 6 & 1) != 0) {
        (**(code **)(*local_48 + 0x10))(local_48,&local_58,CONCAT44(uStack_34,local_38));
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar5 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  }
  return;
}



// FUNCTION 142ed2820 FUN_142ed2820 body=32 status=ok
// SIG undefined FUN_142ed2820(void)

void FUN_142ed2820(longlong param_1,undefined1 param_2,char param_3)

{
  if (((byte)(*(char *)(param_1 + 0x2c4) - 1U) < 3) &&
     (*(undefined1 *)(param_1 + 0x2c6) = param_2, param_3 != '\0')) {
    FUN_142ecf920(param_1,0);
    return;
  }
  return;
}



// FUNCTION 142ed2840 FUN_142ed2840 body=582 status=ok
// SIG undefined FUN_142ed2840(void)

void FUN_142ed2840(longlong *param_1,char *param_2)

{
  char cVar1;
  
  if (*param_2 == '\x01') {
    *(undefined1 *)(param_1 + 0x3c) = 1;
    *(char *)((longlong)param_1 + 0x1e1) = param_2[1];
    *(char *)((longlong)param_1 + 0x1e2) = param_2[2];
    if (param_2[0x62] != '\0') {
      *(char *)((longlong)param_1 + 0x242) = param_2[0x62];
      *(undefined8 *)((longlong)param_1 + 0x244) = *(undefined8 *)(param_2 + 100);
    }
    *(char *)(param_1 + 0x3e) = param_2[0x10];
    FString::operator=(param_1 + 0x3f,param_2 + 0x18);
    *(char *)(param_1 + 0x41) = param_2[0x28];
    *(char *)((longlong)param_1 + 0x209) = param_2[0x29];
    *(char *)((longlong)param_1 + 0x20a) = param_2[0x2a];
    *(char *)((longlong)param_1 + 0x20b) = param_2[0x2b];
    *(char *)(param_1 + 0x48) = param_2[0x60];
    *(char *)((longlong)param_1 + 0x241) = param_2[0x61];
    *(char *)((longlong)param_1 + 0x24e) = param_2[0x6e];
  }
  else {
    *(char *)(param_1 + 0x3c) = *param_2;
    *(char *)((longlong)param_1 + 0x1e1) = param_2[1];
    *(char *)((longlong)param_1 + 0x1e2) = param_2[2];
    *(undefined4 *)((longlong)param_1 + 0x1e4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((longlong)param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0xc);
    *(char *)(param_1 + 0x3e) = param_2[0x10];
    FString::operator=(param_1 + 0x3f,param_2 + 0x18);
    *(char *)(param_1 + 0x41) = param_2[0x28];
    *(char *)((longlong)param_1 + 0x209) = param_2[0x29];
    *(char *)((longlong)param_1 + 0x20a) = param_2[0x2a];
    *(char *)((longlong)param_1 + 0x20b) = param_2[0x2b];
    FString::operator=(param_1 + 0x42,param_2 + 0x30);
    FString::operator=(param_1 + 0x44,param_2 + 0x40);
    FString::operator=(param_1 + 0x46,param_2 + 0x50);
    *(char *)(param_1 + 0x48) = param_2[0x60];
    *(char *)((longlong)param_1 + 0x241) = param_2[0x61];
    *(char *)((longlong)param_1 + 0x242) = param_2[0x62];
    *(undefined8 *)((longlong)param_1 + 0x244) = *(undefined8 *)(param_2 + 100);
    *(char *)((longlong)param_1 + 0x24c) = param_2[0x6c];
    *(char *)((longlong)param_1 + 0x24d) = param_2[0x6d];
    *(char *)((longlong)param_1 + 0x24e) = param_2[0x6e];
    *(char *)((longlong)param_1 + 0x24f) = param_2[0x6f];
    *(char *)(param_1 + 0x4a) = param_2[0x70];
    *(char *)((longlong)param_1 + 0x251) = param_2[0x71];
    param_1[0x4b] = *(longlong *)(param_2 + 0x78);
    param_1[0x4c] = *(longlong *)(param_2 + 0x80);
    *(char *)(param_1 + 0x4d) = param_2[0x88];
    *(char *)((longlong)param_1 + 0x269) = param_2[0x89];
  }
  if (*(int *)((longlong)param_1 + 0x1e4) < 1) {
    *(undefined4 *)((longlong)param_1 + 0x1e4) = 1;
  }
  (**(code **)(*param_1 + 0x328))(param_1);
  cVar1 = FUN_142eb3360();
  if (cVar1 != '\0') {
    LOCK();
    *(undefined4 *)((longlong)param_1 + 0x30c) = 1;
    UNLOCK();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142ed2a7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x338))(param_1);
  return;
}



// FUNCTION 142ed2a90 FUN_142ed2a90 body=8 status=ok
// SIG undefined FUN_142ed2a90(void)

void FUN_142ed2a90(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x310) = param_2;
  return;
}


