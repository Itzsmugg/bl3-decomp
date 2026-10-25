// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14200e1c0 NewIntrusiveReferenceController<SVirtualWindow> body=138 status=ok
// SIG undefined NewIntrusiveReferenceController<SVirtualWindow>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SVirtualWindow>(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x618);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144f65c50;
    if (_Dst != (undefined8 *)0x0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x608);
      FUN_1417f4890(_Dst);
      *_Dst = &PTR__scalar_deleting_destructor__144f65648;
      puVar1[0xc0] = 0;
      puVar1[0xc1] = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14200e250 FUN_14200e250 body=332 status=ok
// SIG undefined FUN_14200e250(void)

longlong FUN_14200e250(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 local_20;
  undefined4 local_18;
  
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
  *(undefined4 *)(param_1 + 0x108) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x10c) = 1;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = DAT_1469eb218;
  lVar3 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x128) = DAT_1469eb220;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar2 = DAT_1464b9eec;
  local_20 = 0;
  local_18 = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9eec;
  *(undefined1 *)(param_1 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=
            ((undefined8 *)(param_1 + 0x80),&local_20,param_3,param_4,uVar2);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  return param_1;
}



// FUNCTION 14200e3a0 FUN_14200e3a0 body=276 status=ok
// SIG undefined FUN_14200e3a0(void)

longlong FUN_14200e3a0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
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
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = DAT_1469eb218;
  lVar2 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x130) = DAT_1469eb220;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 14200e4c0 FUN_14200e4c0 body=359 status=ok
// SIG undefined FUN_14200e4c0(void)

longlong FUN_14200e4c0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
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
  *(undefined8 *)(param_1 + 0x108) = DAT_1469eb218;
  lVar2 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x110) = DAT_1469eb220;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined2 *)(param_1 + 0x118) = 0x101;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0x100;
  *(undefined2 *)(param_1 + 0x134) = 0x100;
  *(undefined1 *)(param_1 + 0x136) = 1;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0x43a00000;
  *(undefined4 *)(param_1 + 0x14c) = 0x43700000;
  *(undefined1 *)(param_1 + 0x150) = 1;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined1 *)(param_1 + 0xf1) = 3;
  return param_1;
}



// FUNCTION 14200e630 FArguments body=233 status=ok
// SIG undefined FArguments(void)

longlong SVirtualWindow::FArguments::FArguments(longlong param_1)

{
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
  *(undefined4 *)(param_1 + 0x108) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x10c) = 0x42c80000;
  return param_1;
}



// FUNCTION 14200e720 FUN_14200e720 body=801 status=ok
// SIG undefined FUN_14200e720(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14200e720(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uStack_c;
  
  *(undefined2 *)(param_1 + 1) = 0x100;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144f652b8;
  param_1[2] = &PTR_FUN_144f652e0;
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
  *(undefined4 *)(param_1 + 0x15) = 1;
  *(undefined4 *)((longlong)param_1 + 0xac) = 1;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0xbf800000;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 2;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 2;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 2;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 2;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x2b),4000);
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 2;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar2 == (longlong *)0x0) {
    if ((DAT_1468e22c0 != 0) && (DAT_1468e22b8 != (longlong *)0x0)) {
      (**(code **)(*DAT_1468e22b8 + 0x28))(DAT_1468e22b8,0);
      if (DAT_1468e22b8 != (longlong *)0x0) {
        DAT_1468e22b8 = (longlong *)FMemory::Realloc(DAT_1468e22b8,0,0);
      }
      DAT_1468e22c0 = 0;
    }
  }
  else {
    plVar2[1] = (longlong)param_1;
    *plVar2 = (longlong)&PTR_GetPoolName_1440f9090;
    *(undefined4 *)(plVar2 + 2) = 0x4200f62c;
    *(undefined4 *)((longlong)plVar2 + 0x14) = 1;
    *(undefined4 *)(plVar2 + 3) = 0x10;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    (**(code **)(*plVar2 + 0x30))(plVar2,&DAT_1468e22b8);
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  uVar4 = FCommandLine::Get();
  cVar1 = FParse::Param(uVar4,L"NoMovies");
  DAT_146af29c0 = (uint)(cVar1 != '\0');
  uVar4 = FCommandLine::Get();
  cVar1 = FParse::Param(uVar4,L"NoStartupMovies");
  DAT_146af29c4 = (uint)(cVar1 != '\0');
  uVar4 = FCommandLine::Get();
  cVar1 = FParse::Param(uVar4,L"NoLoadingMovies");
  DAT_146af29c8 = (uint)(cVar1 != '\0');
  uVar4 = FCommandLine::Get();
  cVar1 = FParse::Param(uVar4,L"NoInGameMovies");
  _DAT_146af29cc = (uint)(cVar1 != '\0');
  uVar4 = FCommandLine::Get();
  cVar1 = FParse::Param(uVar4,L"FakeMovies");
  DAT_146af29d0 = (uint)(cVar1 != '\0');
  return param_1;
}



// FUNCTION 14200ea50 FUN_14200ea50 body=425 status=ok
// SIG undefined FUN_14200ea50(void)

undefined8 *
FUN_14200ea50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong **pplVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_38;
  longlong *local_30;
  
  *param_1 = *param_2;
  param_1[1] = *param_3;
  lVar4 = param_3[1];
  param_1[2] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  pplVar1 = (longlong **)(param_1 + 3);
  plVar7 = (longlong *)0x0;
  *pplVar1 = (longlong *)0x0;
  param_1[4] = 0;
  param_1[5] = param_4;
  param_1[6] = 0;
  lVar4 = operator_new(0x50);
  plVar5 = plVar7;
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_1417ebee0(lVar4);
  }
  plVar6 = (longlong *)operator_new(0x18);
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_144d50308;
    plVar6[2] = (longlong)plVar5;
    plVar7 = plVar6;
  }
  local_38 = plVar5;
  local_30 = plVar7;
  SharedPointerInternals::EnableSharedFromThis(&local_38,plVar5,plVar5);
  if (pplVar1 != &local_38) {
    *pplVar1 = plVar5;
    local_38 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 4,&local_30);
    plVar7 = local_30;
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar7)(plVar7);
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
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar7)(plVar7);
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
  plVar7 = (longlong *)param_3[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar7)(plVar7);
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
  return param_1;
}



// FUNCTION 14200ec00 FUN_14200ec00 body=43 status=ok
// SIG undefined FUN_14200ec00(void)

undefined8 * FUN_14200ec00(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_144f653d0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 14200ec30 FUN_14200ec30 body=1263 status=ok
// SIG undefined FUN_14200ec30(void)

void FUN_14200ec30(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  
  *param_1 = &PTR__scalar_deleting_destructor__144f652b8;
  plVar9 = (longlong *)0x0;
  param_1[2] = &PTR_FUN_144f652e0;
  if (*(char *)(param_1 + 0x2a) == '\0') {
    if (DAT_146ab62c8 != '\0') {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
        FBaseGraphTask::GetSmallTaskAllocator();
        QueryPerformanceCounter(&local_res20);
        FTickableObjectRenderThread::Unregister(param_1);
        QueryPerformanceCounter(&local_res18);
        DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_res20._0_4_);
      }
      else {
        pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar6 = TlsGetValue(*pDVar5);
        if (plVar6 == (longlong *)0x0) {
          plVar6 = (longlong *)operator_new(0x18);
          if (plVar6 != (longlong *)0x0) {
            *plVar6 = 0;
            plVar6[1] = 0;
            *(undefined4 *)(plVar6 + 2) = 0;
            plVar9 = plVar6;
          }
          TlsSetValue(*pDVar5,plVar9);
          plVar6 = plVar9;
        }
        plVar9 = (longlong *)plVar6[1];
        if (plVar9 == (longlong *)0x0) {
          plVar9 = (longlong *)*plVar6;
          if (plVar9 == (longlong *)0x0) {
            lVar7 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar5 + 2);
            plVar6[1] = lVar7;
            if (lVar7 == 0) {
              puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar6[1] = (longlong)puVar8;
              lVar7 = 0x1f;
              do {
                puVar2 = puVar8 + 0x20;
                *puVar8 = puVar2;
                lVar7 = lVar7 + -1;
                puVar8 = puVar2;
              } while (lVar7 != 0);
              *puVar2 = 0;
            }
            plVar9 = (longlong *)plVar6[1];
            iVar10 = 0x20;
            *(undefined4 *)(plVar6 + 2) = 0x20;
          }
          else {
            iVar10 = 0x20;
            plVar6[1] = (longlong)plVar9;
            *(undefined4 *)(plVar6 + 2) = 0x20;
            *plVar6 = 0;
          }
        }
        else {
          iVar10 = (int)plVar6[2];
        }
        plVar6[1] = *plVar9;
        *(int *)(plVar6 + 2) = iVar10 + -1;
        *plVar9 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar9 + 1) = 0xff;
        *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
        *plVar9 = (longlong)&PTR_FUN_144f65a90;
        *(undefined1 *)(plVar9 + 3) = 0;
        plVar9[4] = 0;
        plVar9[2] = (longlong)param_1;
        lVar7 = plVar9[4];
        piVar1 = (int *)(lVar7 + 0x48);
        if (lVar7 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        FUN_140445100(plVar9,0,0xff,1,0,0);
        if (lVar7 != 0) {
          LOCK();
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            FGraphEvent::Recycle(lVar7);
          }
        }
      }
    }
  }
  else {
    FUN_142014ac0(param_1 + 2);
  }
  if ((DAT_1468e22c0 != 0) && (DAT_1468e22b8 != (longlong *)0x0)) {
    (**(code **)(*DAT_1468e22b8 + 0x28))(DAT_1468e22b8,0);
    if (DAT_1468e22b8 != (longlong *)0x0) {
      DAT_1468e22b8 = (longlong *)FMemory::Realloc(DAT_1468e22b8,0,0);
    }
    DAT_1468e22c0 = 0;
  }
  FUN_141ee24f0(0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x35);
  plVar9 = (longlong *)param_1[0x33];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  plVar9 = (longlong *)param_1[0x31];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b));
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x26);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x23);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x20);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1d);
  FLoadingScreenAttributes::~FLoadingScreenAttributes(param_1 + 0x17);
  plVar9 = (longlong *)param_1[0x13];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar10 == 1) && (plVar9 != (longlong *)0x0)) {
      (**(code **)(*plVar9 + 8))(plVar9,1);
    }
  }
  plVar9 = (longlong *)param_1[0x11];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  plVar9 = (longlong *)param_1[0xf];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  plVar9 = (longlong *)param_1[0xd];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  plVar9 = (longlong *)param_1[0xb];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar10 == 1) && (plVar9 != (longlong *)0x0)) {
      (**(code **)(*plVar9 + 8))(plVar9,1);
    }
  }
  plVar9 = (longlong *)param_1[9];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  plVar9 = (longlong *)param_1[7];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  plVar9 = (longlong *)param_1[5];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar10 == 1) && (plVar9 != (longlong *)0x0)) {
      (**(code **)(*plVar9 + 8))(plVar9,1);
    }
  }
  param_1[2] = &PTR__purecall_144f651c8;
  *param_1 = &PTR__scalar_deleting_destructor__1444d8080;
  FTickableObjectRenderThread::Unregister(param_1);
  return;
}



// FUNCTION 14200f120 ~FPreLoadSlateWidgetRenderer body=151 status=ok
// SIG undefined ~FPreLoadSlateWidgetRenderer(void)

void FPreLoadSlateWidgetRenderer::~FPreLoadSlateWidgetRenderer(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x30);
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



// FUNCTION 14200f1c0 FUN_14200f1c0 body=201 status=ok
// SIG undefined FUN_14200f1c0(void)

void FUN_14200f1c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x350);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x338);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x318);
  plVar4 = *(longlong **)(param_1 + 0x308);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x2f8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  FUN_140458b70(param_1);
  return;
}



// FUNCTION 14200f290 FUN_14200f290 body=99 status=ok
// SIG undefined FUN_14200f290(void)

void FUN_14200f290(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x5f8);
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
  FUN_1417f87d0(param_1);
  return;
}



// FUNCTION 14200f300 FUN_14200f300 body=273 status=ok
// SIG undefined FUN_14200f300(void)

undefined8 * FUN_14200f300(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 1,param_2 + 1);
  }
  puVar1 = param_2 + 2;
  puVar2 = param_1 + 2;
  if (puVar2 != puVar1) {
    plVar3 = (longlong *)*puVar2;
    iVar4 = *(int *)(param_1 + 3);
    if (iVar4 != 0) {
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 2;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      plVar3 = (longlong *)*puVar2;
    }
    if (plVar3 != (longlong *)0x0) {
      FMemory::Free(plVar3);
    }
    *puVar2 = *puVar1;
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)((longlong)param_1 + 0x24) = *(undefined1 *)((longlong)param_2 + 0x24);
  *(undefined1 *)((longlong)param_1 + 0x25) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x26);
  *(undefined1 *)((longlong)param_1 + 0x27) = *(undefined1 *)((longlong)param_2 + 0x27);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)((longlong)param_2 + 0x29);
  *(undefined1 *)((longlong)param_1 + 0x2a) = *(undefined1 *)((longlong)param_2 + 0x2a);
  *(undefined1 *)((longlong)param_1 + 0x2b) = *(undefined1 *)((longlong)param_2 + 0x2b);
  *(undefined1 *)((longlong)param_1 + 0x2c) = *(undefined1 *)((longlong)param_2 + 0x2c);
  *(undefined1 *)((longlong)param_1 + 0x2d) = *(undefined1 *)((longlong)param_2 + 0x2d);
  return param_1;
}



// FUNCTION 14200f420 FUN_14200f420 body=514 status=ok
// SIG undefined FUN_14200f420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14200f420(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_68 = *param_2;
  uStack_60 = (longlong *)param_2[1];
  if (uStack_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_60 + 1) = (int)uStack_60[1] + 1;
    UNLOCK();
  }
  if (&local_68 != param_1) {
    local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uVar4 = *param_1;
    plVar6 = (longlong *)param_1[1];
    local_58 = (undefined4)local_68;
    uStack_54 = local_68._4_4_;
    uStack_50 = (undefined4)uStack_60;
    uStack_4c = uStack_60._4_4_;
    *(undefined4 *)param_1 = (undefined4)local_68;
    *(undefined4 *)((longlong)param_1 + 4) = local_68._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_60._4_4_;
    local_68 = uVar4;
    uStack_60 = plVar6;
  }
  plVar6 = uStack_60;
  if (uStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_60 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*uStack_60)(uStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*uStack_60 + 8))(uStack_60,1);
      }
    }
  }
  puVar7 = param_1 + 2;
  if (puVar7 != param_2 + 2) {
    plVar6 = (longlong *)*puVar7;
    for (iVar8 = *(int *)(param_1 + 3); iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    iVar8 = *(int *)(param_2 + 3);
    puVar9 = (undefined8 *)param_2[2];
    *(int *)(param_1 + 3) = iVar8;
    if ((iVar8 == 0) && (*(int *)((longlong)param_1 + 0x1c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar7,iVar8);
      puVar7 = (undefined8 *)*puVar7;
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar7 = 0;
        iVar3 = *(int *)(puVar9 + 1);
        _Src = (void *)*puVar9;
        *(int *)(puVar7 + 1) = iVar3;
        if (iVar3 == 0) {
          *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar7,iVar3,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar7,_Src,(longlong)iVar3 * 2);
        }
        puVar7 = puVar7 + 2;
        puVar9 = puVar9 + 2;
      }
    }
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)((longlong)param_1 + 0x24) = *(undefined1 *)((longlong)param_2 + 0x24);
  *(undefined1 *)((longlong)param_1 + 0x25) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x26);
  *(undefined1 *)((longlong)param_1 + 0x27) = *(undefined1 *)((longlong)param_2 + 0x27);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)((longlong)param_2 + 0x29);
  *(undefined1 *)((longlong)param_1 + 0x2a) = *(undefined1 *)((longlong)param_2 + 0x2a);
  *(undefined1 *)((longlong)param_1 + 0x2b) = *(undefined1 *)((longlong)param_2 + 0x2b);
  *(undefined1 *)((longlong)param_1 + 0x2c) = *(undefined1 *)((longlong)param_2 + 0x2c);
  *(undefined1 *)((longlong)param_1 + 0x2d) = *(undefined1 *)((longlong)param_2 + 0x2d);
  return param_1;
}



// FUNCTION 14200f640 FUN_14200f640 body=97 status=ok
// SIG undefined FUN_14200f640(void)

undefined8 * FUN_14200f640(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f65c30;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14200f6b0 FUN_14200f6b0 body=97 status=ok
// SIG undefined FUN_14200f6b0(void)

undefined8 * FUN_14200f6b0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f65af0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14200f720 FUN_14200f720 body=97 status=ok
// SIG undefined FUN_14200f720(void)

undefined8 * FUN_14200f720(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f65aa0;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14200f790 FUN_14200f790 body=97 status=ok
// SIG undefined FUN_14200f790(void)

undefined8 * FUN_14200f790(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f65a90;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14200f800 FUN_14200f800 body=43 status=ok
// SIG undefined FUN_14200f800(void)

undefined8 * FUN_14200f800(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x290);
  }
  return param_1;
}



// FUNCTION 14200f830 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SDockingTarget>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3a8);
  }
  return param_1;
}



// FUNCTION 14200f860 FUN_14200f860 body=43 status=ok
// SIG undefined FUN_14200f860(void)

undefined8 * FUN_14200f860(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x618);
  }
  return param_1;
}



// FUNCTION 14200f890 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessPassThroughPS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14200ec30();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c0);
  }
  return param_1;
}



// FUNCTION 14200f8d0 FUN_14200f8d0 body=143 status=ok
// SIG undefined FUN_14200f8d0(void)

undefined8 * FUN_14200f8d0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x10);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xd);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 10);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 7);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 4);
  plVar3 = (longlong *)param_1[3];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *param_1 = &PTR__purecall_144f651c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 14200f960 FUN_14200f960 body=166 status=ok
// SIG undefined FUN_14200f960(void)

undefined4 * FUN_14200f960(undefined4 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_142010740();
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 10) + 0x28);
  if ((plVar4 != (longlong *)0x0) && (*(char *)((longlong)plVar4 + 0xb9) == '\0')) {
    (**(code **)(*plVar4 + 0x1a8))(plVar4,0);
  }
  plVar4 = *(longlong **)(param_1 + 0xc);
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
  LOCK();
  *param_1 = 0;
  UNLOCK();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14200fa10 FUN_14200fa10 body=43 status=ok
// SIG undefined FUN_14200fa10(void)

undefined8 * FUN_14200fa10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_144f651c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14200fa40 `scalar_deleting_destructor' body=93 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong SDefaultMovieBorder::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x388);
  FUN_140691710(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    ~SDefaultMovieBorder(param_1,0x398);
  }
  return param_1;
}



// FUNCTION 14200faa0 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
STileView<TSharedPtr<SWidget,0>_>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_14200f290();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x608);
  }
  return param_1;
}



// FUNCTION 14200faf0 FUN_14200faf0 body=126 status=ok
// SIG undefined FUN_14200faf0(void)

longlong FUN_14200faf0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x38);
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x30);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14200fb90 BroadcastMovieClipFinished body=168 status=ok
// SIG undefined BroadcastMovieClipFinished(void)

void IGameMoviePlayer::BroadcastMovieClipFinished(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x98))();
  bVar2 = false;
  *(int *)((longlong)plVar5 + 0x14) = *(int *)((longlong)plVar5 + 0x14) + 1;
  iVar6 = *(int *)((longlong)plVar5 + 0x14);
  iVar4 = (int)plVar5[1] + -1;
  lVar8 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar7 = lVar8 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar7 + 8 + *plVar5) == 0) ||
         (plVar1 = *(longlong **)(lVar7 + *plVar5), plVar1 == (longlong *)0x0)) {
LAB_14200fbf4:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
        if (cVar3 == '\0') goto LAB_14200fbf4;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)((longlong)plVar5 + 0x14);
  }
  *(int *)((longlong)plVar5 + 0x14) = iVar6 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar5,0);
    return;
  }
  return;
}



// FUNCTION 14200fc60 FUN_14200fc60 body=807 status=ok
// SIG undefined FUN_14200fc60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14200fc60(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_398 [32];
  undefined8 local_378;
  longlong *plStack_370;
  undefined8 local_368;
  undefined1 local_360;
  longlong local_358;
  undefined4 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined1 local_338;
  longlong local_330;
  undefined4 local_328;
  undefined1 local_320 [8];
  undefined8 local_318;
  longlong *plStack_310;
  undefined1 local_308 [688];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_398;
  plVar2 = (longlong *)(param_1 + 0x388);
  if ((longlong *)(param_2 + 0x118) != plVar2) {
    if ((*(int *)(param_2 + 0x120) == 0) ||
       (plVar4 = *(longlong **)(param_2 + 0x118), plVar4 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x390) != 0) &&
         (plVar4 = (longlong *)*plVar2, plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        if (*plVar2 != 0) {
          lVar9 = FMemory::Realloc(*plVar2,0,0);
          *plVar2 = lVar9;
        }
        *(undefined4 *)(param_1 + 0x390) = 0;
      }
    }
    else {
      (**(code **)(*plVar4 + 0x30))(plVar4,plVar2);
    }
  }
  plVar2 = DAT_1469eb140;
  local_338 = 1;
  local_330 = 0;
  local_328 = 0;
  lVar9 = *DAT_1469eb140;
  local_348 = 0;
  uStack_340 = 0;
  puVar7 = (undefined8 *)FName::FName(local_320,L"BlackBrush",1);
  uVar8 = (**(code **)(lVar9 + 0x40))(plVar2,*puVar7,0);
  plVar2 = *(longlong **)(param_2 + 0x130);
  uVar5 = *(undefined8 *)(param_2 + 0x128);
  local_360 = 1;
  local_358 = 0;
  local_350 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    uVar11 = (undefined4)local_348;
    uVar12 = local_348._4_4_;
    uVar13 = (undefined4)uStack_340;
    uVar14 = uStack_340._4_4_;
  }
  local_368 = uVar8;
  lVar9 = FUN_141886d30(local_308);
  *(undefined8 *)(lVar9 + 0x188) = uVar8;
  plVar4 = (longlong *)(lVar9 + 0x198);
  *(undefined1 *)(lVar9 + 400) = 1;
  if (((&local_358 != plVar4) && (*(int *)(lVar9 + 0x1a0) != 0)) &&
     (plVar6 = (longlong *)*plVar4, plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    if (*plVar4 != 0) {
      lVar10 = FMemory::Realloc(*plVar4,0,0);
      *plVar4 = lVar10;
    }
    *(undefined4 *)(lVar9 + 0x1a0) = 0;
  }
  plVar4 = (longlong *)(lVar9 + 0x148);
  if ((longlong *)(param_2 + 0x108) != plVar4) {
    if ((*(int *)(param_2 + 0x110) == 0) ||
       (plVar6 = *(longlong **)(param_2 + 0x108), plVar6 == (longlong *)0x0)) {
      if ((*(int *)(lVar9 + 0x150) != 0) &&
         (plVar6 = (longlong *)*plVar4, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*plVar4 != 0) {
          lVar10 = FMemory::Realloc(*plVar4,0,0);
          *plVar4 = lVar10;
        }
        *(undefined4 *)(lVar9 + 0x150) = 0;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x30))(plVar6,plVar4);
    }
  }
  plVar4 = (longlong *)(lVar9 + 0x138);
  *(undefined1 *)(lVar9 + 0x130) = 1;
  *(undefined4 *)(lVar9 + 0x120) = uVar11;
  *(undefined4 *)(lVar9 + 0x124) = uVar12;
  *(undefined4 *)(lVar9 + 0x128) = uVar13;
  *(undefined4 *)(lVar9 + 300) = uVar14;
  if (((&local_330 != plVar4) && (*(int *)(lVar9 + 0x140) != 0)) &&
     (plVar6 = (longlong *)*plVar4, plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    if (*plVar4 != 0) {
      lVar10 = FMemory::Realloc(*plVar4,0,0);
      *plVar4 = lVar10;
    }
    *(undefined4 *)(lVar9 + 0x140) = 0;
  }
  puVar7 = (undefined8 *)(lVar9 + 0x108);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  local_378 = uVar5;
  plStack_370 = plVar2;
  if (&local_378 != puVar7) {
    local_378 = *puVar7;
    plStack_370 = *(longlong **)(lVar9 + 0x110);
    *puVar7 = uVar5;
    *(longlong **)(lVar9 + 0x110) = plVar2;
    local_318 = uVar5;
    plStack_310 = plVar2;
  }
  plVar4 = plStack_370;
  if (plStack_370 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_370 + 1;
    lVar10 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_370)(plStack_370);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_370 + 8))(plStack_370,1);
      }
    }
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar2)(plVar2);
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
  FUN_141971ea0(param_1,lVar9);
  FUN_14188af70(local_308);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_358);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_330);
  return;
}



// FUNCTION 14200ff90 FUN_14200ff90 body=398 status=ok
// SIG undefined FUN_14200ff90(void)

void FUN_14200ff90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_10;
  
  lVar3 = operator_new(0x1c0);
  plVar6 = (longlong *)0x0;
  plVar4 = plVar6;
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_14200e720(lVar3);
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar7 = plVar6;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar4;
    plVar7 = plVar5;
  }
  plVar5 = plVar4 + 4;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = plVar6;
  }
  local_10 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    if ((*plVar5 != 0) && (plVar5[1] != 0)) {
      piVar1 = (int *)(plVar5[1] + 8);
      LOCK();
      iVar2 = *piVar1;
      if (iVar2 == 0) {
        *piVar1 = 0;
        iVar2 = 0;
      }
      UNLOCK();
      if (0 < iVar2) goto LAB_1420100ac;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar4;
    plVar6 = (longlong *)plVar5[1];
    if (plVar7 != plVar6) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
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
      plVar5[1] = (longlong)plVar7;
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
  }
LAB_1420100ac:
  DAT_146acc600 = plVar4;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&DAT_146acc608,&local_10,param_3,param_4,0);
  plVar4 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_10 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return;
}



// FUNCTION 142010120 FUN_142010120 body=500 status=ok
// SIG undefined FUN_142010120(void)

void FUN_142010120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_10;
  
  plVar4 = (longlong *)operator_new(0x98);
  plVar6 = (longlong *)0x0;
  plVar7 = plVar6;
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = 0;
    *plVar4 = (longlong)&PTR_OnMatchFound_144f65b00;
    plVar4[4] = 0;
    plVar4[5] = 0;
    plVar4[6] = 2;
    plVar4[7] = 0;
    plVar4[8] = 0;
    plVar4[9] = 2;
    plVar4[10] = 0;
    plVar4[0xb] = 0;
    plVar4[0xc] = 2;
    plVar4[0xd] = 0;
    plVar4[0xe] = 0;
    plVar4[0xf] = 2;
    plVar4[0x10] = 0;
    plVar4[0x11] = 0;
    plVar4[0x12] = 2;
    plVar7 = plVar4;
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar4 = plVar6;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_144f65c40;
    plVar5[2] = (longlong)plVar7;
    plVar4 = plVar5;
  }
  plVar5 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar5 = plVar6;
  }
  local_10 = plVar4;
  if (plVar5 != (longlong *)0x0) {
    if ((*plVar5 != 0) && (plVar5[1] != 0)) {
      piVar1 = (int *)(plVar5[1] + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) goto LAB_1420102a2;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar7;
    plVar6 = (longlong *)plVar5[1];
    if (plVar4 != plVar6) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar4;
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
  }
LAB_1420102a2:
  DAT_146acc618 = plVar7;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&DAT_146acc620,&local_10,param_3,param_4,0);
  plVar7 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar2 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 142010320 CreateCopy body=85 status=ok
// SIG undefined CreateCopy(void)

void TBaseSPMethodDelegateInstance<0,FOnlineExternalUITwitch,1,FLoginFlowResult___cdecl(FString_const_&)>
     ::CreateCopy(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_144f65ab0;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar3[3] = *(undefined8 *)(param_1 + 0x18);
    puVar3[4] = uVar2;
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
  }
  return;
}



// FUNCTION 142010380 FUN_142010380 body=96 status=ok
// SIG undefined FUN_142010380(void)

void FUN_142010380(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plStack_10;
  
  lVar3 = DAT_146acc618;
  if (((DAT_1468b616c == '\0') && (DAT_146ac3ac6 != '\0')) && (DAT_146ab62f7 == '\0')) {
    lVar3 = (longlong)DAT_146acc600 + 0x10;
    if (DAT_146acc600 == (longlong *)0x0) {
      lVar3 = 0;
    }
  }
  if (lVar3 != 0) {
    return;
  }
  if (((DAT_1468b616c != '\0') || (DAT_146ac3ac6 == '\0')) || (DAT_146ab62f7 != '\0')) {
    FUN_142010120();
    return;
  }
  lVar3 = operator_new(0x1c0);
  plVar6 = (longlong *)0x0;
  plVar4 = plVar6;
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_14200e720(lVar3);
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar7 = plVar6;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar4;
    plVar7 = plVar5;
  }
  plVar5 = plVar4 + 4;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = plVar6;
  }
  plStack_10 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    if ((*plVar5 != 0) && (plVar5[1] != 0)) {
      piVar1 = (int *)(plVar5[1] + 8);
      LOCK();
      iVar2 = *piVar1;
      if (iVar2 == 0) {
        *piVar1 = 0;
        iVar2 = 0;
      }
      UNLOCK();
      if (0 < iVar2) goto LAB_1420100ac;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar4;
    plVar6 = (longlong *)plVar5[1];
    if (plVar7 != plVar6) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
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
      plVar5[1] = (longlong)plVar7;
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
  }
LAB_1420100ac:
  DAT_146acc600 = plVar4;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&DAT_146acc608,&plStack_10);
  plVar4 = plStack_10;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_10 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_10)(plStack_10);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_10 + 8))(plStack_10,1);
      }
    }
  }
  return;
}



// FUNCTION 1420103e0 FUN_1420103e0 body=332 status=ok
// SIG undefined FUN_1420103e0(void)

undefined8 * FUN_1420103e0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_144f65c30;
  *(undefined1 *)((longlong)plVar6 + 0x11) = 0;
  plVar6[3] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 142010530 FUN_142010530 body=318 status=ok
// SIG undefined FUN_142010530(void)

void FUN_142010530(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  lVar5 = DAT_146acc618;
  if ((((DAT_1468b616c == '\0') && (DAT_146ac3ac6 != '\0')) && (DAT_146ab62f7 == '\0')) &&
     (lVar5 = DAT_146acc600 + 0x10, DAT_146acc600 == 0)) {
    lVar5 = 0;
  }
  if (lVar5 == 0) {
    return;
  }
  if (((DAT_1468b616c == '\0') && (DAT_146ac3ac6 != '\0')) && (DAT_146ab62f7 == '\0')) {
    local_20 = (longlong *)0x0;
    DAT_146acc600 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&DAT_146acc608,&local_20,DAT_146ac3ac6,0,0);
    plVar4 = local_20;
    if (local_20 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 != 1) {
      return;
    }
    (**(code **)*local_20)(local_20);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    plVar4 = local_20;
  }
  else {
    local_10 = (longlong *)0x0;
    DAT_146acc618 = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&DAT_146acc620,&local_10);
    plVar4 = local_10;
    if (local_10 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 != 1) {
      return;
    }
    (**(code **)*local_10)(local_10);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    plVar4 = local_10;
  }
  if (iVar3 == 1) {
    (**(code **)(*plVar4 + 8))(plVar4,1);
  }
  return;
}



// FUNCTION 142010670 FUN_142010670 body=9 status=ok
// SIG undefined FUN_142010670(void)

void FUN_142010670(longlong param_1)

{
  FPreLoadSlateWidgetRenderer::~FPreLoadSlateWidgetRenderer(param_1 + 0x10);
  return;
}



// FUNCTION 142010680 DestroyObject body=73 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::TIntrusiveReferenceController<SDPIScaler>::DestroyObject
               (longlong param_1)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x280);
  FSlotBase::~FSlotBase(param_1 + 0x240);
  *(undefined ***)(param_1 + 0x230) = &PTR__purecall_143f48980;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x220);
  FUN_1417f85e0(param_1 + 0x10);
  return;
}



// FUNCTION 1420106d0 DestroyObject body=35 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::TIntrusiveReferenceController<SDefaultMovieBorder>::DestroyObject
               (longlong param_1)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x398);
  FUN_140691710(param_1 + 0x10);
  return;
}



// FUNCTION 142010700 FUN_142010700 body=9 status=ok
// SIG undefined FUN_142010700(void)

void FUN_142010700(longlong param_1)

{
  FUN_14200f1c0(param_1 + 0x10);
  return;
}



// FUNCTION 142010720 FUN_142010720 body=25 status=ok
// SIG undefined FUN_142010720(void)

void FUN_142010720(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142010731. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xb0))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 142010740 FUN_142010740 body=154 status=ok
// SIG undefined FUN_142010740(void)

void FUN_142010740(int *param_1)

{
  int iVar1;
  longlong *plVar2;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10 [3];
  
  if (*(longlong *)(param_1 + 6) != 0) {
    LOCK();
    param_1[2] = 0;
    UNLOCK();
    QueryPerformanceCounter(&local_res8);
    iVar1 = *param_1;
    while (iVar1 != 0) {
      FWindowsPlatformApplicationMisc::PumpMessages(0);
      FUN_1416b1760(0x3dcccccd);
      QueryPerformanceCounter(local_res10);
      iVar1 = *param_1;
    }
    plVar2 = *(longlong **)(param_1 + 6);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,1);
    }
    plVar2 = *(longlong **)(param_1 + 8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,1);
    }
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  return;
}



// FUNCTION 1420107e0 FUN_1420107e0 body=934 status=ok
// SIG undefined FUN_1420107e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420107e0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  float local_180;
  float *local_178;
  undefined1 local_170;
  undefined4 local_168;
  undefined4 local_164;
  float local_160;
  undefined8 local_15c;
  float local_154;
  undefined8 local_150;
  undefined8 local_148;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  undefined8 local_110;
  longlong local_108;
  undefined1 local_100 [16];
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8 [56];
  longlong *local_90;
  undefined8 local_78;
  float local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined8 local_4c;
  byte local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  if ((DAT_146ab6358 == (longlong *)0x0) ||
     (cVar8 = (**(code **)(*DAT_146ab6358 + 0x3f8))(), cVar8 == '\0')) {
    uVar5 = param_1[1];
    puVar10 = (undefined8 *)SWindow::GetClientSizeInScreen(*param_1,local_f0);
    FUN_141857b30(uVar5,*puVar10);
    SWindow::GetClientSizeInScreen(param_1[1],&local_150);
    FUN_1418c5190(DAT_1469f4590,0,1);
    local_44 = local_44 & 0xfe;
    local_e0 = 0x3f800000;
    uStack_d8 = 0x3f80000000000000;
    local_4c = 0;
    local_5c = 0x3f800000;
    uStack_54 = 0x3f80000000000000;
    local_6c = 0;
    local_78 = local_150;
    local_70 = 1.0;
    local_64 = 0;
    FUN_14185c5d0(param_1[1],0x3f800000);
    local_154 = local_78._4_4_ * local_70;
    local_15c = 0;
    local_160 = (float)local_78 * local_70;
    local_168 = (undefined4)local_6c;
    local_164 = local_6c._4_4_;
    FSlateRotatedRect::ToBoundingRect(&local_168,local_100);
    FUN_141804f90(param_1[3],local_100);
    plVar12 = (longlong *)param_1[5];
    if ((plVar12 != (longlong *)0x0) && (*(char *)((longlong)plVar12 + 0xb9) == '\0')) {
      lVar11 = (**(code **)(*plVar12 + 8))();
      local_110 = param_1[1];
      local_108 = param_1[2];
      if (local_108 != 0) {
        LOCK();
        *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
        UNLOCK();
      }
      local_148 = FUN_141801fe0(lVar11,&local_110);
      FUN_14185b2b0(local_148,*param_1);
      plVar12 = DAT_1469f4590;
      uVar5 = param_1[3];
      uVar6 = param_1[1];
      dVar3 = (double)DAT_1469f4590[0x90];
      dVar4 = (double)DAT_1469f4590[0x91];
      lVar7 = *DAT_1469f4590;
      puVar10 = (undefined8 *)FUN_14183b310(*param_1,local_e8);
      local_188 = (**(code **)(lVar7 + 0x40))(plVar12);
      local_180 = (float)(dVar3 - dVar4);
      FPaintArgs::FPaintArgs(local_c8,uVar6,uVar5,*puVar10);
      lVar7 = param_1[1];
      if (((*(int *)(lVar7 + 0xa8) != 0) && (*(longlong **)(lVar7 + 0xa0) != (longlong *)0x0)) &&
         (cVar8 = (**(code **)(**(longlong **)(lVar7 + 0xa0) + 0x18))(), cVar8 != '\0')) {
        if (*(int *)(lVar7 + 0xa8) == 0) {
          plVar12 = (longlong *)0x0;
        }
        else {
          plVar12 = *(longlong **)(lVar7 + 0xa0);
        }
        uVar9 = (**(code **)(*plVar12 + 0x38))();
        *(undefined1 *)(lVar7 + 0x98) = uVar9;
      }
      local_170 = *(undefined1 *)(lVar7 + 0x98);
      local_130 = CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
      uStack_128 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
      local_178 = &local_140;
      local_120 = DAT_1464aa6c0 * 0.6;
      local_180 = 0.0;
      local_11c = DAT_1464aa6c4 * 0.6;
      local_188 = local_148;
      local_118 = DAT_1464aa6c8 * 0.6;
      local_114 = DAT_1464aa6cc * 0.6;
      local_140 = DAT_1464aa6c0;
      local_13c = DAT_1464aa6c4;
      local_138 = DAT_1464aa6c8;
      local_134 = DAT_1464aa6cc;
      FUN_14184f6c0(param_1[1],local_c8,&local_78,local_100);
      if (local_90 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (local_90 != (longlong *)0x0)) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
      (**(code **)(*(longlong *)param_1[5] + 0x68))((longlong *)param_1[5],lVar11);
      *(undefined4 *)(lVar11 + 0x28) = (undefined4)DAT_1468b5d88;
      *(undefined4 *)(lVar11 + 0x2c) = DAT_1468b5d88._4_4_;
    }
  }
  return;
}



// FUNCTION 142010b90 FUN_142010b90 body=209 status=ok
// SIG undefined FUN_142010b90(void)

undefined4 * FUN_142010b90(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 local_res10 [8];
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar8 = iVar4 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar6 = plVar7, !bVar8) {
      LOCK();
      bVar8 = iVar4 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar7 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  puVar5 = (undefined4 *)
           (**(code **)(param_1 + 0x18))
                     ((longlong)(int)*(undefined8 *)(param_1 + 0x20) + (longlong)plVar7,local_res10)
  ;
  *param_2 = *puVar5;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 142010c70 ExecuteTask body=316 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`FDefaultGameMoviePlayer::WaitForMovieToFinish'::`28'::FinishLoadingMovieFrameName,<lambda_c0ba039fcf66917ab683e9d684f41565>_>_>
     ::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  FRHICommandList::EndFrame(&DAT_146ab6e78);
  if (DAT_146ab6e8c != 0) {
    FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
  }
  FUN_141ed93a0(&DAT_146ab6e78);
  FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
  FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
  FUN_141ec65b0();
  FUN_141ec6070(0);
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_144f65c30;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142010db0 FUN_142010db0 body=278 status=ok
// SIG undefined FUN_142010db0(void)

void FUN_142010db0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  DAT_1464aaa90 = DAT_1464aaa90 + 1;
  FRHICommandList::BeginFrame(&DAT_146ab6e78);
  FUN_142015440(param_1[2],*(undefined4 *)(param_1 + 3));
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144f65af0;
  *(undefined1 *)(param_1 + 4) = 0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142010ed0 FUN_142010ed0 body=257 status=ok
// SIG undefined FUN_142010ed0(void)

void FUN_142010ed0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FTickableObjectRenderThread::Register(param_1[2],0);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144f65aa0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142010fe0 FUN_142010fe0 body=255 status=ok
// SIG undefined FUN_142010fe0(void)

void FUN_142010fe0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FTickableObjectRenderThread::Unregister(param_1[2]);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_144f65a90;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 1420110e0 FUN_1420110e0 body=1171 status=ok
// SIG undefined FUN_1420110e0(void)

void FUN_1420110e0(undefined8 param_1,longlong *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  void *_Dst;
  float *pfVar10;
  int iVar11;
  int iVar12;
  size_t _Size;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  float fVar18;
  int local_res18 [2];
  undefined4 local_res20 [2];
  uint uVar19;
  undefined4 local_68 [2];
  LARGE_INTEGER local_60;
  float local_58 [8];
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  iVar6 = (**(code **)(*param_2 + 8))(param_2);
  iVar7 = (**(code **)*param_2)(param_2);
  lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar16 + 0x38) < DAT_146acc640) &&
     (_Init_thread_header(&DAT_146acc640), DAT_146acc640 == -1)) {
    atexit((_func_5014 *)&LAB_143ea3170);
    _Init_thread_footer(&DAT_146acc640);
  }
  if ((*(int *)(lVar16 + 0x38) < DAT_146acc658) &&
     (_Init_thread_header(&DAT_146acc658), DAT_146acc658 == -1)) {
    atexit((_func_5014 *)&LAB_143ea3190);
    _Init_thread_footer(&DAT_146acc658);
  }
  if (((int)param_2[0xe] - 2U & 0xffffffef) == 0) {
    bVar4 = false;
    DAT_146acc650 = 0;
    if (DAT_146acc654 != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146acc648);
    }
    iVar12 = iVar7 * iVar6;
    if (DAT_146acc638 == iVar12) goto LAB_1420112af;
    DAT_146acc638 = 0;
    iVar11 = 0;
    if (DAT_146acc63c != iVar12) {
      TArray<float,FDefaultAllocator>::ResizeTo(&DAT_146acc630);
      iVar11 = DAT_146acc638;
    }
    DAT_146acc638 = iVar11 + iVar12;
    if (DAT_146acc63c < DAT_146acc638) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146acc630);
    }
    _Size = (longlong)iVar12 << 2;
    _Dst = (void *)(DAT_146acc630 + (longlong)iVar11 * 4);
    bVar4 = false;
  }
  else {
    if ((int)param_2[0xe] != 0x13) {
      return;
    }
    bVar4 = true;
    DAT_146acc638 = 0;
    if (DAT_146acc63c != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo(&DAT_146acc630);
    }
    iVar12 = iVar7 * iVar6;
    if (DAT_146acc650 == iVar12) goto LAB_1420112af;
    DAT_146acc650 = 0;
    iVar11 = 0;
    if (DAT_146acc654 != iVar12) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146acc648);
      iVar11 = DAT_146acc650;
    }
    DAT_146acc650 = iVar11 + iVar12;
    if (DAT_146acc654 < DAT_146acc650) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146acc648);
    }
    _Size = (longlong)iVar12 << 4;
    _Dst = (void *)((longlong)iVar11 * 0x10 + DAT_146acc648);
    bVar4 = true;
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,_Size);
LAB_1420112af:
  uVar13 = 0;
  QueryPerformanceCounter(&local_60);
  fVar18 = _guard_xfg_dispatch_icall_nop
                     ((float)((((double)local_60.QuadPart * DAT_1468b02f8 + 16777216.0) -
                              DAT_1468e2430) * 0.1));
  local_58[1] = 0.0;
  local_58[2] = 0.0;
  local_58[3] = 1.0;
  local_58[0] = (fVar18 + 1.0) * 0.5;
  FLinearColor::ToFColor(local_58,local_res20,0);
  local_58[4] = 0.0;
  local_58[5] = 1.0;
  local_58[6] = 0.0;
  local_58[7] = 1.0;
  FLinearColor::ToFColor(local_58 + 4,local_68,0);
  uVar15 = uVar13;
  uVar17 = uVar13;
  if (0 < iVar7) {
    do {
      iVar12 = 0;
      iVar11 = (int)uVar13;
      if (0 < iVar6) {
        uVar13 = uVar15;
        uVar14 = uVar17;
        do {
          if ((((iVar6 + -0x14 < iVar12) || (iVar12 < 0x14)) || (iVar7 + -0x14 < iVar11)) ||
             (iVar11 < 0x14)) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if (bVar4) {
            pfVar10 = local_58 + 4;
            if (!bVar5) {
              pfVar10 = local_58;
            }
            fVar18 = pfVar10[1];
            fVar2 = pfVar10[2];
            fVar3 = pfVar10[3];
            pfVar1 = (float *)(uVar14 + DAT_146acc648);
            *pfVar1 = *pfVar10;
            pfVar1[1] = fVar18;
            pfVar1[2] = fVar2;
            pfVar1[3] = fVar3;
          }
          else {
            uVar9 = local_res20[0];
            if (bVar5) {
              uVar9 = local_68[0];
            }
            *(undefined4 *)(uVar13 + DAT_146acc630) = uVar9;
          }
          iVar12 = iVar12 + 1;
          uVar14 = uVar14 + (longlong)iVar7 * 0x10;
          uVar13 = uVar13 + (longlong)iVar7 * 4;
        } while (iVar12 < iVar6);
      }
      uVar13 = (ulonglong)(iVar11 + 1U);
      uVar15 = uVar15 + 4;
      uVar17 = uVar17 + 0x10;
    } while ((int)(iVar11 + 1U) < iVar7);
  }
  iVar11 = 0;
  local_res18[0] = 0;
  iVar12 = (&DAT_1464ca1c4)[(longlong)(int)param_2[0xe] * 10];
  uVar19 = 0;
  lVar8 = (**(code **)(*DAT_146ab6358 + 0x580))
                    (DAT_146ab6358,&DAT_146ab6e78,param_2[1],0,1,local_res18,0,1);
  lVar16 = DAT_146acc630;
  if (bVar4) {
    lVar16 = DAT_146acc648;
  }
  if (0 < iVar6) {
    do {
      _guard_xfg_dispatch_icall_nop
                ((void *)((ulonglong)(uint)(iVar11 * local_res18[0]) + lVar8),
                 (void *)((ulonglong)(uint)(iVar11 * iVar12 * iVar7) + lVar16),
                 (ulonglong)(uint)(iVar12 * iVar7));
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar6);
  }
  (**(code **)(*DAT_146ab6358 + 0x588))
            (DAT_146ab6358,&DAT_146ab6e78,param_2[1],0,uVar19 & 0xffffff00,1);
  return;
}



// FUNCTION 1420115b0 GetMovieHeight body=33 status=ok
// SIG undefined GetMovieHeight(void)

undefined4 * FDefaultGameMoviePlayer::GetMovieHeight(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 local_res10 [24];
  
  lVar1 = FUN_1420116d0(param_1,local_res10);
  *param_2 = *(undefined4 *)(lVar1 + 4);
  return param_2;
}



// FUNCTION 1420115e0 FUN_1420115e0 body=164 status=ok
// SIG undefined FUN_1420115e0(void)

longlong * FUN_1420115e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong local_28 [4];
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  bVar2 = plVar1 == (longlong *)0x0;
  if (bVar2) {
    local_28[0] = 0;
    plVar1 = local_28;
    local_28[1] = 0;
  }
  else {
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x28))(plVar1,local_28 + 2);
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



// FUNCTION 142011690 GetMoviePlayer body=56 status=ok
// SIG undefined GetMoviePlayer(void)

longlong GetMoviePlayer(void)

{
  longlong lVar1;
  
  if (((DAT_1468b616c == '\0') && (DAT_146ac3ac6 != '\0')) && (DAT_146ab62f7 == '\0')) {
    lVar1 = DAT_146acc600 + 0x10;
    if (DAT_146acc600 == 0) {
      lVar1 = 0;
    }
    return lVar1;
  }
  return DAT_146acc618;
}



// FUNCTION 1420116d0 FUN_1420116d0 body=404 status=ok
// SIG undefined FUN_1420116d0(void)

float * FUN_1420116d0(longlong param_1,float *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  float fVar9;
  float local_res18;
  float fStackX_1c;
  
  plVar2 = *(longlong **)(param_1 + 0x58);
  plVar6 = (longlong *)0x0;
  plVar5 = plVar2;
  plVar7 = plVar6;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar8 = iVar4 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar5 = plVar6, plVar7 = (longlong *)0x0, !bVar8) {
      LOCK();
      bVar8 = iVar4 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar5 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar7 = *(longlong **)(param_1 + 0x50);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  if (plVar7 == (longlong *)0x0) {
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    return param_2;
  }
  plVar2 = *(longlong **)(param_1 + 0x58);
  plVar5 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar8 = iVar4 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar5 = plVar6, !bVar8) {
      LOCK();
      bVar8 = iVar4 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar5 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar6 = *(longlong **)(param_1 + 0x50);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  SWindow::GetClientSizeInScreen(plVar6,&local_res18);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  if (((*(longlong **)(param_1 + 0x30) != (longlong *)0x0) && (0 < *(int *)(param_1 + 0xd0))) &&
     (0.0 < fStackX_1c)) {
    fVar9 = (float)(**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))();
    if (fVar9 < local_res18 / fStackX_1c) {
      param_2[1] = fStackX_1c;
      *param_2 = fVar9 * fStackX_1c;
      return param_2;
    }
    if (0.0 < fVar9) {
      *param_2 = local_res18;
      param_2[1] = local_res18 / fVar9;
      return param_2;
    }
  }
  *(ulonglong *)param_2 = CONCAT44(fStackX_1c,local_res18);
  return param_2;
}



// FUNCTION 142011870 GetMovieWidth body=32 status=ok
// SIG undefined GetMovieWidth(void)

undefined4 * FDefaultGameMoviePlayer::GetMovieWidth(undefined8 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 local_res10 [24];
  
  puVar1 = (undefined4 *)FUN_1420116d0(param_1,local_res10);
  *param_2 = *puVar1;
  return param_2;
}



// FUNCTION 1420118e0 FUN_1420118e0 body=33 status=ok
// SIG undefined FUN_1420118e0(void)

undefined4 FUN_1420118e0(void)

{
  DAT_1468c21c8 = GetCurrentThreadId();
  FUN_1424aafa0(2);
  return 1;
}



// FUNCTION 142011910 FUN_142011910 body=7154 status=ok
// SIG undefined FUN_142011910(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142011910(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  code *pcVar7;
  char cVar8;
  byte bVar9;
  DWORD DVar10;
  DWORD *pDVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  longlong *plVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong **pplVar19;
  longlong *plVar20;
  longlong *plVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  longlong *plVar24;
  int iVar25;
  longlong *plVar26;
  undefined1 auStack_fa8 [32];
  longlong local_f88;
  undefined1 *local_f80;
  undefined4 local_f78;
  longlong local_f70;
  longlong local_f68;
  longlong local_f60;
  undefined1 local_f58;
  undefined1 local_f50;
  longlong local_f48;
  longlong *local_f38;
  undefined1 local_f30;
  undefined1 local_f2f;
  undefined1 local_f2e;
  undefined1 local_f2d;
  undefined1 local_f2c;
  undefined1 local_f2b [3];
  code *local_f28;
  undefined4 uStack_f20;
  undefined4 uStack_f1c;
  longlong *local_f18;
  code *local_f08;
  undefined4 uStack_f00;
  undefined4 uStack_efc;
  longlong *local_ef8;
  longlong *plStack_ef0;
  longlong *local_ee8;
  longlong *plStack_ee0;
  longlong *local_ed8;
  longlong *local_ed0;
  longlong *local_ec8;
  longlong *plStack_ec0;
  longlong *local_eb8;
  longlong *local_eb0;
  longlong *local_ea8;
  longlong *local_ea0;
  longlong *local_e98;
  longlong *local_e90;
  longlong *local_e88;
  longlong *local_e80;
  longlong local_e78;
  longlong *local_e68;
  longlong *plStack_e60;
  longlong *local_e58;
  longlong *plStack_e50;
  longlong *local_e48;
  int local_e40;
  undefined2 local_e38;
  longlong local_e30;
  undefined4 local_e28;
  undefined4 local_e20;
  undefined1 local_e1c;
  longlong local_e18;
  undefined4 local_e10;
  undefined4 local_e08;
  undefined1 local_e04;
  longlong local_e00;
  undefined4 local_df8;
  longlong local_df0;
  undefined8 local_de8;
  longlong *local_de0;
  undefined8 local_dd8;
  longlong *plStack_dd0;
  code *local_dc8;
  undefined4 uStack_dc0;
  undefined4 uStack_dbc;
  LARGE_INTEGER local_db8;
  LARGE_INTEGER local_db0;
  longlong *local_da8;
  longlong *local_da0;
  undefined1 *local_d98;
  longlong *local_d90;
  longlong *local_d88;
  undefined1 *local_d80;
  longlong *local_d78;
  longlong *local_d70;
  undefined1 *local_d68;
  longlong *local_d60;
  longlong *local_d58;
  undefined1 *local_d50;
  longlong *local_d48;
  longlong *local_d40;
  undefined1 *local_d38;
  longlong *local_d30;
  longlong *local_d28;
  undefined1 *local_d20;
  longlong *local_d18;
  longlong *local_d10;
  code *local_d08;
  undefined4 uStack_d00;
  undefined4 uStack_cfc;
  longlong *local_cf8;
  longlong *local_cf0;
  longlong local_ce8;
  longlong local_ce0;
  longlong *local_cd8;
  longlong local_cd0;
  longlong *local_cc8;
  longlong *local_cc0;
  longlong *local_cb8;
  longlong *local_cb0;
  undefined8 local_ca8;
  undefined1 local_ca0;
  longlong local_c98;
  undefined4 local_c90;
  undefined8 local_c88;
  undefined8 uStack_c80;
  undefined1 local_c78;
  longlong local_c70;
  undefined4 local_c68;
  code *local_c58;
  undefined8 uStack_c50;
  undefined1 local_c48 [16];
  code *local_c38;
  undefined8 uStack_c30;
  undefined1 local_c28 [16];
  code *local_c18;
  undefined8 uStack_c10;
  undefined1 local_c08 [16];
  undefined1 local_bf8 [16];
  undefined1 local_be8 [8];
  undefined1 local_be0 [8];
  undefined1 local_bd8 [8];
  undefined1 local_bd0 [8];
  undefined8 local_bc8;
  undefined8 local_bc0;
  undefined8 local_bb8;
  longlong *plStack_bb0;
  undefined1 *local_ba8;
  undefined8 uStack_ba0;
  code *local_b98;
  undefined8 uStack_b90;
  longlong *local_b88;
  longlong *local_b80;
  undefined1 local_b70 [16];
  longlong *local_b60;
  longlong *local_b50;
  longlong *local_b40;
  longlong *plStack_b38;
  longlong *local_b30;
  longlong *plStack_b28;
  longlong *local_b20;
  longlong *plStack_b18;
  undefined1 local_b08 [296];
  undefined1 local_9e0 [16];
  undefined1 local_9d0 [24];
  undefined1 local_9b8 [24];
  undefined1 local_9a0 [24];
  undefined1 local_988 [24];
  undefined1 local_970 [24];
  undefined1 local_958 [24];
  undefined1 local_940 [24];
  undefined1 local_928 [16];
  undefined1 local_918 [264];
  undefined1 local_810 [16];
  undefined1 local_800 [16];
  undefined1 local_7f0 [24];
  undefined1 local_7d8 [264];
  undefined1 local_6d0 [24];
  undefined1 local_6b8 [24];
  undefined1 local_6a0 [32];
  undefined1 local_680 [24];
  undefined1 local_668 [272];
  undefined1 local_558 [16];
  undefined1 local_548 [16];
  undefined1 local_538 [264];
  longlong local_430;
  undefined1 local_418 [272];
  undefined1 local_308 [688];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_fa8;
  if (*(char *)(param_1 + 0x140) != '\0') {
    return;
  }
  plVar12 = (longlong *)0x0;
  local_f18 = (longlong *)param_2;
  local_e78 = param_1;
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar8 = FUN_1415ad720(&DAT_1468e2448), cVar8 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar10 = GetCurrentThreadId(), DVar10 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_db8);
    local_f38 = (longlong *)(param_1 + -0x10);
    FTickableObjectRenderThread::Register(local_f38,0);
    QueryPerformanceCounter(&local_db0);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_db0.s.LowPart - local_db8._0_4_);
  }
  else {
    local_f38 = (longlong *)(param_1 + -0x10);
    pDVar11 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar16 = TlsGetValue(*pDVar11);
    if (plVar16 == (longlong *)0x0) {
      plVar16 = (longlong *)operator_new(0x18);
      if (plVar16 != (longlong *)0x0) {
        *plVar16 = 0;
        plVar16[1] = 0;
        *(undefined4 *)(plVar16 + 2) = 0;
        plVar12 = plVar16;
      }
      TlsSetValue(*pDVar11,plVar12);
      plVar16 = plVar12;
    }
    plVar12 = (longlong *)plVar16[1];
    if (plVar12 == (longlong *)0x0) {
      plVar12 = (longlong *)*plVar16;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar11 + 2);
        plVar16[1] = (longlong)plVar12;
        if (plVar12 == (longlong *)0x0) {
          puVar14 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar16[1] = (longlong)puVar14;
          lVar13 = 0x1f;
          do {
            puVar3 = puVar14 + 0x20;
            *puVar14 = puVar3;
            lVar13 = lVar13 + -1;
            puVar14 = puVar3;
          } while (lVar13 != 0);
          *puVar3 = 0;
          plVar12 = (longlong *)plVar16[1];
        }
        iVar25 = 0x20;
        *(undefined4 *)(plVar16 + 2) = 0x20;
      }
      else {
        iVar25 = 0x20;
        plVar16[1] = (longlong)plVar12;
        *(undefined4 *)(plVar16 + 2) = 0x20;
        *plVar16 = 0;
      }
    }
    else {
      iVar25 = (int)plVar16[2];
    }
    plVar16[1] = *plVar12;
    *(int *)(plVar16 + 2) = iVar25 + -1;
    *plVar12 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar12 + 1) = 0xff;
    local_bc0 = 0;
    local_bc8 = 0;
    *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
    *plVar12 = (longlong)&PTR_FUN_144f65aa0;
    *(undefined1 *)(plVar12 + 3) = 0;
    plVar12[4] = 0;
    plVar12[2] = param_1 + -0x10;
    lVar13 = plVar12[4];
    piVar1 = (int *)(lVar13 + 0x48);
    if (lVar13 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_df0 = lVar13;
    FUN_140445100(plVar12,0,0xff,1);
    if (lVar13 != 0) {
      LOCK();
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar25 == 1) {
        FGraphEvent::Recycle(local_df0);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x140) = 1;
  uStack_f00 = 0;
  local_f08 = FUN_1420137b0;
  plVar12 = (longlong *)FMemory::Realloc(0,0x30);
  local_b60 = plVar12;
  if (plVar12 != (longlong *)0x0) {
    plVar12[1] = param_1 + -0x10;
    *plVar12 = (longlong)&PTR_GetPoolName_143fc2050;
    plVar12[2] = (longlong)local_f08;
    plVar12[3] = CONCAT44(uStack_efc,uStack_f00);
    lVar13 = FDelegateHandle::GenerateNewID();
    plVar12[5] = lVar13;
    *plVar12 = (longlong)&PTR_GetPoolName_143fc2098;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464b57b8,1);
    (**(code **)(*plVar12 + 0x20))(plVar12,local_bd0);
    iVar25 = DAT_1464b57c0;
    lVar13 = (longlong)DAT_1464b57c0;
    DAT_1464b57c0 = DAT_1464b57c0 + 1;
    if (DAT_1464b57c4 < DAT_1464b57c0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464b57b8,iVar25);
    }
    puVar14 = (undefined8 *)(lVar13 * 0x10 + DAT_1464b57b8);
    *puVar14 = plVar12;
    *(undefined4 *)(puVar14 + 1) = 3;
  }
  uStack_f00 = 0x10;
  local_f08 = (code *)&LAB_14200f624;
  plVar12 = (longlong *)FMemory::Realloc(0,0x30);
  local_b50 = plVar12;
  if (plVar12 != (longlong *)0x0) {
    plVar12[1] = param_1 + -0x10;
    *plVar12 = (longlong)&PTR_GetPoolName_143f77a38;
    plVar12[2] = (longlong)local_f08;
    plVar12[3] = CONCAT44(uStack_efc,uStack_f00);
    lVar13 = FDelegateHandle::GenerateNewID();
    plVar12[5] = lVar13;
    *plVar12 = (longlong)&PTR_GetPoolName_143f77a80;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af190,1);
    (**(code **)(*plVar12 + 0x20))(plVar12,local_bd8);
    iVar25 = DAT_1464af198;
    lVar13 = (longlong)DAT_1464af198;
    DAT_1464af198 = DAT_1464af198 + 1;
    if (DAT_1464af19c < DAT_1464af198) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af190,iVar25);
    }
    puVar14 = (undefined8 *)(lVar13 * 0x10 + _DAT_1464af190);
    *puVar14 = plVar12;
    *(undefined4 *)(puVar14 + 1) = 3;
  }
  FWindowsPlatformSplash::Hide();
  FUN_142447ed0(&local_dd8);
  local_e80 = (longlong *)0x0;
  puVar15 = (undefined4 *)SWindow::GetClientSizeInScreen(local_dd8,local_be0);
  uVar4 = *puVar15;
  uVar5 = puVar15[1];
  lVar13 = SVirtualWindow::FArguments::FArguments(local_418);
  *(undefined4 *)(lVar13 + 0x108) = uVar4;
  *(undefined4 *)(lVar13 + 0x10c) = uVar5;
  plVar16 = (longlong *)SharedPointerInternals::NewIntrusiveReferenceController<SVirtualWindow>();
  plVar12 = plVar16 + 2;
  local_b88 = plVar12;
  local_b80 = plVar16;
  FUN_14044f790(&local_b88,plVar12);
  local_f88 = 0x608;
  SWidget::SetDebugInfo
            (plVar12,"SVirtualWindow",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\DefaultGameMoviePlayer.cpp"
             ,0xed);
  local_f78 = *(undefined4 *)(lVar13 + 0x90);
  local_f48 = lVar13 + 0xf8;
  local_f60 = lVar13 + 0xe8;
  local_f50 = *(undefined1 *)(lVar13 + 0xf1);
  local_f68 = lVar13 + 200;
  local_f70 = lVar13 + 0x98;
  local_f58 = *(undefined1 *)(lVar13 + 0xf0);
  local_f80 = (undefined1 *)(lVar13 + 0x78);
  local_f88 = lVar13 + 0x60;
  SWidget::SWidgetConstruct(plVar12,lVar13,lVar13 + 0x30,lVar13 + 0x40);
  FUN_141979060(plVar12,lVar13);
  if (((char)plVar16[5] < '\0') || (cVar8 = (**(code **)(*plVar12 + 0x1e8))(plVar12), cVar8 != '\0')
     ) {
    bVar9 = 1;
  }
  else {
    bVar9 = 0;
  }
  *(byte *)((longlong)plVar16 + 0x29) = *(byte *)((longlong)plVar16 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar16 + 0x29) = *(byte *)((longlong)plVar16 + 0x29) | bVar9;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  pplVar19 = (longlong **)(param_1 + 0x70);
  local_ea8 = plVar12;
  local_ea0 = plVar16;
  if (pplVar19 != &local_ea8) {
    *pplVar19 = plVar12;
    local_ea8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x78,&local_ea0);
  }
  plVar12 = local_ea0;
  plVar20 = (longlong *)0x0;
  if (local_ea0 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_ea0 + 1;
    lVar13 = *plVar21;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_ea0)(local_ea0);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar25 == 1) {
        (**(code **)(*local_ea0 + 8))(local_ea0,1);
      }
    }
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar16 + 1;
    lVar13 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar25 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
    LOCK();
    plVar12 = plVar16 + 1;
    lVar13 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar25 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  FUN_140456c70(local_418);
  plVar12 = (longlong *)operator_new(0x48);
  if (plVar12 != (longlong *)0x0) {
    *(undefined4 *)(plVar12 + 1) = 1;
    *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
    *plVar12 = (longlong)&PTR_FUN_144f65c20;
    local_cd0 = *(longlong *)(param_1 + 0x78);
    local_cd8 = *pplVar19;
    if (local_cd0 != 0) {
      LOCK();
      *(int *)(local_cd0 + 8) = *(int *)(local_cd0 + 8) + 1;
      UNLOCK();
    }
    local_bb8 = local_dd8;
    plStack_bb0 = plStack_dd0;
    if (plStack_dd0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_dd0 + 1) = (int)plStack_dd0[1] + 1;
      UNLOCK();
    }
    FUN_14200ea50(plVar12 + 2,&local_bb8,&local_cd8,local_f18);
    plVar20 = plVar12;
  }
  local_e58 = plVar20 + 2;
  plStack_e50 = plVar20;
  SharedPointerInternals::EnableSharedFromThis(&local_e58,local_e58,local_e58);
  local_e68 = local_e58;
  plStack_e60 = plStack_e50;
  if (plStack_e50 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_e50 + 1) = (int)plStack_e50[1] + 1;
    UNLOCK();
  }
  if ((longlong **)(param_1 + 0x170) != &local_e68) {
    *(longlong **)(param_1 + 0x170) = local_e58;
    local_e68 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x178,&plStack_e60);
  }
  plVar12 = plStack_e60;
  if (plStack_e60 != (longlong *)0x0) {
    LOCK();
    plVar16 = plStack_e60 + 1;
    lVar13 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_e60)(plStack_e60);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar25 == 1) {
        (**(code **)(*plStack_e60 + 8))(plStack_e60,1);
      }
    }
  }
  plVar12 = plStack_e50;
  if (plStack_e50 != (longlong *)0x0) {
    LOCK();
    plVar16 = plStack_e50 + 1;
    lVar13 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_e50)(plStack_e50);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar25 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  plVar12 = DAT_1469eb140;
  local_c78 = 1;
  local_c70 = 0;
  local_c68 = 0;
  lVar13 = *DAT_1469eb140;
  local_c88 = 0;
  uStack_c80 = 0;
  puVar14 = (undefined8 *)FName::FName(local_be8,L"NoBorder",1);
  uVar17 = (**(code **)(lVar13 + 0x40))(plVar12,*puVar14,0);
  local_ca0 = 1;
  local_c98 = 0;
  local_c90 = 0;
  local_ca8 = uVar17;
  lVar13 = FUN_141886d30(local_308);
  *(undefined8 *)(lVar13 + 0x188) = uVar17;
  plVar12 = (longlong *)(lVar13 + 0x198);
  *(undefined1 *)(lVar13 + 400) = 1;
  if (((&local_c98 != plVar12) && (*(int *)(lVar13 + 0x1a0) != 0)) &&
     (plVar16 = (longlong *)*plVar12, plVar16 != (longlong *)0x0)) {
    (**(code **)(*plVar16 + 0x28))(plVar16,0);
    if (*plVar12 != 0) {
      lVar18 = FMemory::Realloc(*plVar12,0,0);
      *plVar12 = lVar18;
    }
    *(undefined4 *)(lVar13 + 0x1a0) = 0;
  }
  plVar12 = (longlong *)(lVar13 + 0x138);
  *(undefined1 *)(lVar13 + 0x130) = 1;
  *(undefined8 *)(lVar13 + 0x120) = 0;
  *(undefined8 *)(lVar13 + 0x128) = 0;
  if (((&local_c70 != plVar12) && (*(int *)(lVar13 + 0x140) != 0)) &&
     (plVar16 = (longlong *)*plVar12, plVar16 != (longlong *)0x0)) {
    (**(code **)(*plVar16 + 0x28))(plVar16,0);
    if (*plVar12 != 0) {
      lVar18 = FMemory::Realloc(*plVar12,0,0);
      *plVar12 = lVar18;
    }
    *(undefined4 *)(lVar13 + 0x140) = 0;
  }
  plVar12 = (longlong *)operator_new(0x398);
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar12 + 1) = 1;
    *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
    *plVar12 = (longlong)&PTR_FUN_144d61068;
    if (plVar12 != (longlong *)0xfffffffffffffff0) {
      SBorder::SBorder();
    }
  }
  plVar16 = plVar12 + 2;
  local_d30 = plVar16;
  local_d28 = plVar12;
  FUN_14044f790(&local_d30,plVar16);
  local_d20 = &local_f30;
  local_f88 = 0x388;
  SWidget::SetDebugInfo
            (plVar16,"SBorder",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\DefaultGameMoviePlayer.cpp"
             ,0x128);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_eb8 = plVar16;
  local_eb0 = plVar12;
  if ((longlong **)(param_1 + 0x60) != &local_eb8) {
    *(longlong **)(param_1 + 0x60) = plVar16;
    local_eb8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x68,&local_eb0);
  }
  plVar20 = local_eb0;
  if (local_eb0 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_eb0 + 1;
    lVar18 = *plVar21;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_eb0)(local_eb0);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar25 == 1) {
        (**(code **)(*local_eb0 + 8))(local_eb0,1);
      }
    }
  }
  local_f78 = *(undefined4 *)(lVar13 + 0x90);
  local_f48 = lVar13 + 0xf8;
  local_f60 = lVar13 + 0xe8;
  local_f50 = *(undefined1 *)(lVar13 + 0xf1);
  local_f68 = lVar13 + 200;
  local_f70 = lVar13 + 0x98;
  local_f58 = *(undefined1 *)(lVar13 + 0xf0);
  local_f80 = (undefined1 *)(lVar13 + 0x78);
  local_f88 = lVar13 + 0x60;
  SWidget::SWidgetConstruct(plVar16,lVar13,lVar13 + 0x30,lVar13 + 0x40);
  FUN_141971ea0(plVar16,lVar13);
  if (((char)plVar12[5] < '\0') || (cVar8 = (**(code **)(*plVar16 + 0x1e8))(plVar16), cVar8 != '\0')
     ) {
    bVar9 = 1;
  }
  else {
    bVar9 = 0;
  }
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) | bVar9;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  lVar13 = FUN_14200e250(local_668);
  pplVar19 = (longlong **)(lVar13 + 0x120);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_ec8 = plVar16;
  plStack_ec0 = plVar12;
  if (&local_ec8 != pplVar19) {
    local_ec8 = *pplVar19;
    plStack_ec0 = *(longlong **)(lVar13 + 0x128);
    *pplVar19 = plVar16;
    *(longlong **)(lVar13 + 0x128) = plVar12;
    local_b40 = plVar16;
    plStack_b38 = plVar12;
  }
  plVar16 = plStack_ec0;
  if (plStack_ec0 != (longlong *)0x0) {
    LOCK();
    plVar20 = plStack_ec0 + 1;
    lVar18 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plStack_ec0)(plStack_ec0);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar25 == 1) {
        (**(code **)(*plStack_ec0 + 8))(plStack_ec0,1);
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar12 + 1;
    lVar18 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar25 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  plVar16 = (longlong *)operator_new(0x290);
  if (plVar16 == (longlong *)0x0) {
    plVar16 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar16 + 1) = 1;
    *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
    *plVar16 = (longlong)&PTR_DestroyObject_144f65c80;
    if (plVar16 != (longlong *)0xfffffffffffffff0) {
      FUN_141961b00();
    }
  }
  plVar20 = plVar16 + 2;
  local_d48 = plVar20;
  local_d40 = plVar16;
  FUN_14044f790(&local_d48,plVar20);
  local_d38 = &local_f2f;
  local_f88 = 0x280;
  SWidget::SetDebugInfo
            (plVar20,"SDPIScaler",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\DefaultGameMoviePlayer.cpp"
             ,0x126);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  local_ed8 = plVar20;
  local_ed0 = plVar16;
  if ((longlong **)(local_e78 + 0x180) != &local_ed8) {
    *(longlong **)(local_e78 + 0x180) = plVar20;
    local_ed8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_e78 + 0x188,&local_ed0);
  }
  plVar21 = local_ed0;
  if (local_ed0 != (longlong *)0x0) {
    LOCK();
    plVar24 = local_ed0 + 1;
    lVar18 = *plVar24;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_ed0)(local_ed0);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar25 == 1) {
        (**(code **)(*local_ed0 + 8))(local_ed0,1);
      }
    }
  }
  local_f78 = *(undefined4 *)(lVar13 + 0x90);
  local_f48 = lVar13 + 0xf8;
  local_f60 = lVar13 + 0xe8;
  local_f50 = *(undefined1 *)(lVar13 + 0xf1);
  local_f68 = lVar13 + 200;
  local_f70 = lVar13 + 0x98;
  local_f58 = *(undefined1 *)(lVar13 + 0xf0);
  local_f80 = (undefined1 *)(lVar13 + 0x78);
  local_f88 = lVar13 + 0x60;
  SWidget::SWidgetConstruct(plVar20,lVar13,lVar13 + 0x30,lVar13 + 0x40);
  SDPIScaler::Construct(plVar20,lVar13);
  if (((char)plVar16[5] < '\0') || (cVar8 = (**(code **)(*plVar20 + 0x1e8))(plVar20), cVar8 != '\0')
     ) {
    bVar9 = 1;
  }
  else {
    bVar9 = 0;
  }
  *(byte *)((longlong)plVar16 + 0x29) = *(byte *)((longlong)plVar16 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar16 + 0x29) = *(byte *)((longlong)plVar16 + 0x29) | bVar9;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  local_f08 = (code *)&LAB_142011890;
  uStack_f00 = 0;
  local_dc8 = FDefaultGameMoviePlayer::GetMovieHeight;
  local_f28 = FDefaultGameMoviePlayer::GetMovieWidth;
  uStack_dc0 = 0;
  uStack_f20 = 0;
  local_cb8 = plVar20;
  local_cb0 = plVar16;
  lVar13 = FUN_14200e4c0(local_7d8);
  uStack_ba0 = CONCAT44(uStack_efc,uStack_f00);
  local_ba8 = local_f08;
  *(undefined1 *)(lVar13 + 0x131) = 0;
  plVar20 = (longlong *)FUN_14200dcc0(&local_e48,local_f38,&local_ba8);
  local_e38 = 0x119;
  local_e30 = 0;
  local_e38._0_1_ = 0x19;
  local_e28 = 0;
  local_e38._1_1_ = 1;
  if (((plVar20 != &local_e30) && ((int)plVar20[1] != 0)) &&
     (plVar20 = (longlong *)*plVar20, plVar20 != (longlong *)0x0)) {
    (**(code **)(*plVar20 + 0x30))(plVar20,&local_e30);
  }
  *(undefined1 *)(lVar13 + 0x78) = (undefined1)local_e38;
  *(undefined1 *)(lVar13 + 0x79) = local_e38._1_1_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar13 + 0x80,&local_e30);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_e30);
  if (local_e40 != 0) {
    if (local_e48 == (longlong *)0x0) goto LAB_14201270d;
    (**(code **)(*local_e48 + 0x28))(local_e48,0);
    if (local_e48 != (longlong *)0x0) {
      local_e48 = (longlong *)FMemory::Realloc(local_e48,0,0);
    }
    local_e40 = 0;
  }
  if (local_e48 != (longlong *)0x0) {
    FMemory::Free(local_e48);
  }
LAB_14201270d:
  plVar21 = (longlong *)FUN_14200e170();
  plVar20 = plVar21 + 2;
  local_f18 = plVar21;
  local_d60 = plVar20;
  local_d58 = plVar21;
  FUN_14044f790(&local_d60,plVar20);
  local_d50 = &local_f2e;
  local_f88 = 0x360;
  SWidget::SetDebugInfo
            (plVar20,"SViewport",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\DefaultGameMoviePlayer.cpp"
             ,0xff);
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
    UNLOCK();
  }
  local_de8 = 0;
  local_e88 = plVar20;
  local_de0 = plVar21;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_e80,&local_de0);
  plVar24 = local_de0;
  plVar26 = plVar21;
  if (local_de0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_de0 + 1;
    lVar18 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_de0)(local_de0);
      LOCK();
      piVar1 = (int *)((longlong)plVar24 + 0xc);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar26 = local_f18;
      if (iVar25 == 1) {
        (**(code **)(*local_de0 + 8))(local_de0,1);
        plVar26 = local_f18;
      }
    }
  }
  local_f78 = *(undefined4 *)(lVar13 + 0x90);
  local_f48 = lVar13 + 0xf8;
  local_f60 = lVar13 + 0xe8;
  local_f50 = *(undefined1 *)(lVar13 + 0xf1);
  local_f68 = lVar13 + 200;
  local_f70 = lVar13 + 0x98;
  local_f58 = *(undefined1 *)(lVar13 + 0xf0);
  local_f88 = lVar13 + 0x60;
  local_f80 = (undefined1 *)(lVar13 + 0x78);
  SWidget::SWidgetConstruct(plVar20,lVar13,lVar13 + 0x30,lVar13 + 0x40);
  FUN_141978d50(plVar20,lVar13);
  if (((char)plVar21[5] < '\0') || (cVar8 = (**(code **)(*plVar20 + 0x1e8))(plVar20), cVar8 != '\0')
     ) {
    bVar9 = 1;
  }
  else {
    bVar9 = 0;
  }
  *(byte *)((longlong)plVar21 + 0x29) = *(byte *)((longlong)plVar21 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar21 + 0x29) = *(byte *)((longlong)plVar21 + 0x29) | bVar9;
  if (plVar26 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
    UNLOCK();
  }
  local_cc8 = plVar20;
  local_cc0 = plVar26;
  lVar13 = FUN_14068f180(local_b08);
  uStack_b90 = CONCAT44(uStack_f1c,uStack_f20);
  local_b98 = local_f28;
  plVar21 = (longlong *)FUN_14200de20(local_b70,local_f38,&local_b98);
  local_e00 = 0;
  local_df8 = 0;
  local_e08 = 0xbf800000;
  local_e04 = 1;
  if (((plVar21 != &local_e00) && ((int)plVar21[1] != 0)) &&
     (plVar21 = (longlong *)*plVar21, plVar21 != (longlong *)0x0)) {
    (**(code **)(*plVar21 + 0x30))(plVar21,&local_e00);
  }
  *(undefined1 *)(lVar13 + 0x14c) = local_e04;
  *(undefined4 *)(lVar13 + 0x148) = local_e08;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar13 + 0x150,&local_e00);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_e00);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_b70);
  uStack_c50 = CONCAT44(uStack_dbc,uStack_dc0);
  local_c58 = local_dc8;
  plVar21 = (longlong *)FUN_14200de20(local_c48,local_f38,&local_c58);
  local_e18 = 0;
  local_e10 = 0;
  local_e20 = 0xbf800000;
  local_e1c = 1;
  if (((plVar21 != &local_e18) && ((int)plVar21[1] != 0)) &&
     (plVar21 = (longlong *)*plVar21, plVar21 != (longlong *)0x0)) {
    (**(code **)(*plVar21 + 0x30))(plVar21,&local_e18);
  }
  *(undefined1 *)(lVar13 + 0x164) = local_e1c;
  *(undefined4 *)(lVar13 + 0x160) = local_e20;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar13 + 0x168,&local_e18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_e18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_c48);
  pplVar19 = (longlong **)(lVar13 + 0x138);
  if (plVar26 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
    UNLOCK();
  }
  local_ee8 = plVar20;
  plStack_ee0 = plVar26;
  if (&local_ee8 != pplVar19) {
    local_ee8 = *pplVar19;
    plStack_ee0 = *(longlong **)(lVar13 + 0x140);
    *pplVar19 = plVar20;
    *(longlong **)(lVar13 + 0x140) = plVar26;
    local_b30 = plVar20;
    plStack_b28 = plVar26;
  }
  plVar20 = plStack_ee0;
  if (plStack_ee0 != (longlong *)0x0) {
    LOCK();
    plVar21 = plStack_ee0 + 1;
    lVar18 = *plVar21;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plStack_ee0)(plStack_ee0);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar25 == 1) {
        (**(code **)(*plStack_ee0 + 8))(plStack_ee0,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_cc8);
  plVar21 = (longlong *)FUN_1418cc2a0();
  plVar20 = plVar21 + 2;
  local_d78 = plVar20;
  local_d70 = plVar21;
  FUN_14044f790(&local_d78,plVar20);
  local_d68 = &local_f2d;
  local_f88 = 0x310;
  SWidget::SetDebugInfo
            (plVar20,&DAT_144f64f34,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\DefaultGameMoviePlayer.cpp"
             ,0xfb);
  local_f78 = *(undefined4 *)(lVar13 + 0x90);
  local_f48 = lVar13 + 0xf8;
  local_f60 = lVar13 + 0xe8;
  local_f50 = *(undefined1 *)(lVar13 + 0xf1);
  local_f68 = lVar13 + 200;
  local_f70 = lVar13 + 0x98;
  local_f58 = *(undefined1 *)(lVar13 + 0xf0);
  local_f80 = (undefined1 *)(lVar13 + 0x78);
  local_f88 = lVar13 + 0x60;
  SWidget::SWidgetConstruct(plVar20,lVar13,lVar13 + 0x30,lVar13 + 0x40);
  FUN_141972160(plVar20,lVar13);
  if (((char)plVar21[5] < '\0') || (cVar8 = (**(code **)(*plVar20 + 0x1e8))(), cVar8 != '\0')) {
    bVar9 = 1;
  }
  else {
    bVar9 = 0;
  }
  *(byte *)((longlong)plVar21 + 0x29) = *(byte *)((longlong)plVar21 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar21 + 0x29) = *(byte *)((longlong)plVar21 + 0x29) | bVar9;
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
    UNLOCK();
  }
  local_d08 = FUN_142013740;
  local_dc8 = FUN_142013740;
  uStack_d00 = 0;
  uStack_dc0 = 0;
  local_d18 = plVar20;
  local_d10 = plVar21;
  lVar13 = FUN_14185c7c0();
  *(undefined2 *)(lVar13 + 0x24) = 0x202;
  local_f08 = (code *)FUN_1417e5b60();
  plVar20 = (longlong *)((longlong)local_f08 + 0x10);
  local_f28 = (code *)plVar20;
  local_d90 = plVar20;
  local_d88 = (longlong *)local_f08;
  FUN_14044f790(&local_d90,plVar20);
  local_d80 = &local_f2c;
  local_f88 = 0x230;
  SWidget::SetDebugInfo
            (plVar20,"SOverlay",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\DefaultGameMoviePlayer.cpp"
             ,0xf6);
  uVar17 = FUN_14185c7c0();
  uVar17 = FUN_140801a00(uVar17,&local_cb8);
  uVar22 = FUN_140801a00(lVar13,&local_d18);
  uVar23 = SOverlay::FArguments::FArguments(local_538);
  uVar22 = SOverlay::FArguments::operator+(uVar23,uVar22);
  lVar13 = SOverlay::FArguments::operator+(uVar22,uVar17);
  pcVar6 = local_f28;
  local_f78 = *(undefined4 *)(lVar13 + 0x90);
  local_f48 = lVar13 + 0xf8;
  local_f60 = lVar13 + 0xe8;
  local_f50 = *(undefined1 *)(lVar13 + 0xf1);
  local_f80 = (undefined1 *)(lVar13 + 0x78);
  local_f68 = lVar13 + 200;
  local_f58 = *(undefined1 *)(lVar13 + 0xf0);
  local_f70 = lVar13 + 0x98;
  local_f88 = lVar13 + 0x60;
  SWidget::SWidgetConstruct(local_f28,lVar13,lVar13 + 0x30,lVar13 + 0x40);
  SOverlay::Construct(pcVar6,lVar13);
  if (((char)*(longlong *)((longlong)pcVar6 + 0x18) < '\0') ||
     (cVar8 = (**(code **)(*(longlong *)pcVar6 + 0x1e8))(pcVar6), cVar8 != '\0')) {
    bVar9 = 1;
  }
  else {
    bVar9 = 0;
  }
  pcVar7 = local_f08;
  *(byte *)((longlong)pcVar6 + 0x19) = *(byte *)((longlong)pcVar6 + 0x19) & 0xfe;
  *(byte *)((longlong)pcVar6 + 0x19) = *(byte *)((longlong)pcVar6 + 0x19) | bVar9;
  if (local_f08 != (code *)0x0) {
    LOCK();
    *(int *)((longlong)local_f08 + 8) = (int)*(longlong *)((longlong)local_f08 + 8) + 1;
    UNLOCK();
  }
  local_cf0 = (longlong *)local_f08;
  local_cf8 = (longlong *)((longlong)local_f08 + 0x10);
  if (local_f08 != (code *)0x0) {
    LOCK();
    *(int *)((longlong)local_f08 + 8) = (int)*(longlong *)((longlong)local_f08 + 8) + 1;
    UNLOCK();
  }
  lVar13 = FUN_14200e3a0(local_918);
  uStack_c30 = CONCAT44(uStack_dbc,uStack_dc0);
  local_c38 = local_dc8;
  local_f28 = (code *)lVar13;
  uVar17 = FUN_14200df80(local_c28,local_f38,&local_c38);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar13 + 0x118,uVar17);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_c28);
  uStack_c10 = CONCAT44(uStack_cfc,uStack_d00);
  local_c18 = local_d08;
  uVar17 = FUN_14200df80(local_c08,local_f38,&local_c18);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar13 + 0x108,uVar17);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_c08);
  pplVar19 = (longlong **)(lVar13 + 0x128);
  plVar20 = (longlong *)((longlong)pcVar7 + 0x10);
  plStack_ef0 = (longlong *)pcVar7;
  if (pcVar7 != (code *)0x0) {
    LOCK();
    *(int *)((longlong)pcVar7 + 8) = (int)*(longlong *)((longlong)pcVar7 + 8) + 1;
    UNLOCK();
  }
  local_ef8 = plVar20;
  if (&local_ef8 != pplVar19) {
    local_ef8 = *pplVar19;
    plStack_ef0 = *(longlong **)(lVar13 + 0x130);
    plStack_b18 = (longlong *)pcVar7;
    *pplVar19 = plVar20;
    *(code **)(lVar13 + 0x130) = pcVar7;
    local_b20 = plVar20;
  }
  plVar20 = plStack_ef0;
  if (plStack_ef0 != (longlong *)0x0) {
    LOCK();
    plVar24 = plStack_ef0 + 1;
    lVar13 = *plVar24;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_ef0)(plStack_ef0);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar25 == 1) {
        (**(code **)(*plStack_ef0 + 8))(plStack_ef0,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_cf8);
  plVar24 = (longlong *)
            SharedPointerInternals::NewIntrusiveReferenceController<SDefaultMovieBorder>();
  plVar20 = plVar24 + 2;
  local_da8 = plVar20;
  local_da0 = plVar24;
  FUN_14044f790(&local_da8,plVar20);
  local_d98 = local_f2b;
  local_f88 = 0x398;
  SWidget::SetDebugInfo
            (plVar20,"SDefaultMovieBorder",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\DefaultGameMoviePlayer.cpp"
             ,0xf2);
  local_f48 = (longlong)local_f28 + 0xf8;
  local_f60 = (longlong)local_f28 + 0xe8;
  local_f68 = (longlong)local_f28 + 200;
  local_f88 = (longlong)local_f28 + 0x60;
  local_f70 = (longlong)local_f28 + 0x98;
  local_f80 = (undefined1 *)((longlong)local_f28 + 0x78);
  local_f50 = *(undefined1 *)((longlong)local_f28 + 0xf1);
  local_f58 = *(undefined1 *)((longlong)local_f28 + 0xf0);
  local_f78 = *(undefined4 *)((longlong)local_f28 + 0x90);
  plVar20 = plVar24 + 2;
  SWidget::SWidgetConstruct(plVar20,local_f28,(longlong)local_f28 + 0x30,(longlong)local_f28 + 0x40)
  ;
  FUN_14200fc60(plVar20,local_f28);
  if (((char)plVar24[5] < '\0') || (cVar8 = (**(code **)(*plVar20 + 0x1e8))(plVar20), cVar8 != '\0')
     ) {
    bVar9 = 1;
  }
  else {
    bVar9 = 0;
  }
  *(byte *)((longlong)plVar24 + 0x29) = *(byte *)((longlong)plVar24 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar24 + 0x29) = *(byte *)((longlong)plVar24 + 0x29) | bVar9;
  local_f38 = plVar24 + 1;
  if (plVar24 != (longlong *)0x0) {
    LOCK();
    *(int *)local_f38 = (int)*local_f38 + 1;
    UNLOCK();
    LOCK();
    *(int *)local_f38 = (int)*local_f38 + 1;
    UNLOCK();
  }
  local_e98 = plVar20;
  local_e90 = plVar24;
  if ((longlong **)(local_e78 + 0x50) != &local_e98) {
    *(longlong **)(local_e78 + 0x50) = plVar20;
    local_e98 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_e78 + 0x58,&local_e90);
  }
  plVar20 = local_e90;
  if (local_e90 != (longlong *)0x0) {
    LOCK();
    plVar26 = local_e90 + 1;
    lVar13 = *plVar26;
    *(int *)plVar26 = (int)*plVar26 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_e90)(local_e90);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar25 == 1) {
        (**(code **)(*local_e90 + 8))(local_e90,1);
      }
    }
  }
  if (plVar24 != (longlong *)0x0) {
    LOCK();
    lVar13 = *local_f38;
    *(int *)local_f38 = (int)*local_f38 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar24)(plVar24);
      LOCK();
      piVar1 = (int *)((longlong)plVar24 + 0xc);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar25 == 1) {
        (**(code **)(*plVar24 + 8))(plVar24,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_da8);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_7f0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_800);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_810);
  FUN_140456c70(local_918);
  if (pcVar7 != (code *)0x0) {
    LOCK();
    plVar20 = (longlong *)((longlong)pcVar7 + 8);
    lVar13 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (*(code *)**(undefined8 **)pcVar7)(pcVar7);
      LOCK();
      piVar1 = (int *)((longlong)pcVar7 + 0xc);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar25 == 1) {
        (**(code **)(*(longlong *)pcVar7 + 8))(pcVar7,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_d90);
  if (local_430 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_538);
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    plVar20 = plVar21 + 1;
    lVar13 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar25 == 1) {
        (**(code **)(*plVar21 + 8))(plVar21,1);
      }
    }
    LOCK();
    plVar20 = plVar21 + 1;
    lVar13 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar25 == 1) {
        (**(code **)(*plVar21 + 8))(plVar21,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_d78);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_928);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_940);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_958);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_970);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_988);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_9a0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_9b8);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_9d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_9e0);
  FUN_140456c70(local_b08);
  plVar20 = local_f18;
  if (local_f18 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_f18 + 1;
    lVar13 = *plVar21;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_f18)(local_f18);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar25 == 1) {
        (**(code **)(*plVar20 + 8))(plVar20,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_d60);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_680);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_6a0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_6b8);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_6d0);
  FUN_140456c70(local_7d8);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar20 = plVar16 + 1;
    lVar13 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar25 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
    LOCK();
    plVar20 = plVar16 + 1;
    lVar13 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar25 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_d48);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_548);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_558);
  FUN_140456c70(local_668);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar12 + 1;
    lVar13 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar25 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_d30);
  FUN_14188af70(local_308);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c98);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c70);
  lVar13 = local_e78;
  plVar12 = local_e80;
  plVar20 = local_e88;
  *(longlong **)(local_e78 + 0x80) = local_e88;
  SharedPointerInternals::FWeakReferencer<1>::AssignReferenceController(local_e78 + 0x88,local_e80);
  plVar16 = *(longlong **)(lVar13 + 0x20);
  if (plVar16 != (longlong *)0x0) {
    plVar16 = (longlong *)(**(code **)(*plVar16 + 0x18))(plVar16,local_bf8);
    local_ce8 = *plVar16;
    local_ce0 = plVar16[1];
    if (local_ce0 != 0) {
      LOCK();
      *(int *)(local_ce0 + 8) = *(int *)(local_ce0 + 8) + 1;
      UNLOCK();
      plVar12 = local_e80;
      plVar20 = local_e88;
    }
    FUN_1418c26d0(plVar20,&local_ce8);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_bf8);
  }
  FUN_14199ffc0(plVar20,1);
  *(undefined8 *)(lVar13 + 0x40) = local_dd8;
  SharedPointerInternals::FWeakReferencer<1>::AssignReferenceController(lVar13 + 0x48,plStack_dd0);
  plVar16 = local_e80;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar12 + 1;
    lVar13 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_e80)(local_e80);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar25 == 1) {
        (**(code **)(*local_e80 + 8))(local_e80,1);
      }
    }
  }
  if (plStack_dd0 != (longlong *)0x0) {
    LOCK();
    plVar12 = plStack_dd0 + 1;
    lVar13 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_dd0)(plStack_dd0);
      LOCK();
      piVar1 = (int *)((longlong)plStack_dd0 + 0xc);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar25 == 1) {
        (**(code **)(*plStack_dd0 + 8))(plStack_dd0,1);
      }
    }
  }
  return;
}



// FUNCTION 142013550 ArePreLoadScreensEnabled body=24 status=ok
// SIG undefined ArePreLoadScreensEnabled(void)

undefined1 FPreLoadScreenManager::ArePreLoadScreensEnabled(void)

{
  if ((DAT_1468b616c == '\0') && (DAT_146ac3ac6 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1420135b0 FUN_1420135b0 body=232 status=ok
// SIG undefined FUN_1420135b0(void)

undefined1 * FUN_1420135b0(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(*(longlong *)(param_1 + 0x10) + 0x58))(param_1 + 0x10);
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 0xdd) != '\0') {
      LOCK();
      *(undefined4 *)(param_1 + 0xa8) = 1;
      UNLOCK();
      if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x30) + 8))();
      }
    }
    LOCK();
    bVar2 = *(int *)(param_1 + 0xa8) == 0;
    if (bVar2) {
      *(int *)(param_1 + 0xa8) = 0;
    }
    UNLOCK();
    if (!bVar2) {
      *(undefined1 *)(param_1 + 0xb1) = 1;
    }
  }
  *param_2 = 1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 1420136a0 FUN_1420136a0 body=156 status=ok
// SIG undefined FUN_1420136a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1420136a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  if (((*(int *)(param_1 + 0x390) != 0) && (*(longlong **)(param_1 + 0x388) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x388) + 0x18))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x390) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x388) + 0x38))
                (*(longlong **)(param_1 + 0x388),param_2,param_3,param_4);
      return param_2;
    }
    (**(code **)(_DAT_00000000 + 0x38))(0,param_2,param_3,param_4);
    return param_2;
  }
  FUN_1417c9760(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 142013740 FUN_142013740 body=23 status=ok
// SIG undefined FUN_142013740(void)

undefined8 FUN_142013740(undefined8 param_1,undefined8 param_2)

{
  FUN_1420135b0();
  return param_2;
}



// FUNCTION 1420137b0 FUN_1420137b0 body=238 status=ok
// SIG undefined FUN_1420137b0(void)

void FUN_1420137b0(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  undefined4 uStack_c;
  
  FUN_140483870(&DAT_1464b57d0,param_1);
  cVar2 = (**(code **)(*(longlong *)(param_1 + 0x10) + 0x40))(param_1 + 0x10);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = param_1;
      *plVar3 = (longlong)&PTR_GetPoolName_143fc2050;
      *(undefined4 *)(plVar3 + 2) = 0x42013790;
      *(undefined4 *)((longlong)plVar3 + 0x14) = 1;
      *(undefined4 *)(plVar3 + 3) = 0;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_143fc2098;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464b57d0,1);
      (**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
      iVar1 = DAT_1464b57d8;
      lVar4 = (longlong)DAT_1464b57d8;
      DAT_1464b57d8 = DAT_1464b57d8 + 1;
      if (DAT_1464b57dc < DAT_1464b57d8) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464b57d0,iVar1);
      }
      puVar5 = (undefined8 *)(lVar4 * 0x10 + DAT_1464b57d0);
      *puVar5 = plVar3;
      *(undefined4 *)(puVar5 + 1) = 3;
    }
  }
  return;
}



// FUNCTION 1420138b0 FUN_1420138b0 body=279 status=ok
// SIG undefined FUN_1420138b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420138b0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  lVar8 = DAT_146b17150;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if (DAT_146b17150 != 0) {
    lVar7 = FUN_142937670();
    lVar2 = *(longlong *)(lVar8 + 0x10);
    if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_142013918;
  }
  lVar8 = 0;
LAB_142013918:
  if ((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong *)(param_1 + 0x48) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x48) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if ((0 < iVar6) && (lVar8 != 0)) {
      plVar3 = *(longlong **)(param_1 + 0x48);
      puVar9 = (undefined8 *)(lVar8 + 0x11e0);
      uVar4 = *(undefined8 *)(param_1 + 0x40);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
      }
      local_38 = uVar4;
      plStack_30 = plVar3;
      if (&local_38 != puVar9) {
        local_38 = *puVar9;
        plStack_30 = *(longlong **)(lVar8 + 0x11e8);
        *puVar9 = uVar4;
        *(longlong **)(lVar8 + 0x11e8) = plVar3;
        local_28 = uVar4;
        plStack_20 = plVar3;
      }
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plStack_30 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plStack_30 + 8))(plStack_30,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1420139f0 PlayEarlyStartupMovies body=42 status=ok
// SIG undefined PlayEarlyStartupMovies(void)

ulonglong FDefaultGameMoviePlayer::PlayEarlyStartupMovies(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x30))();
  if ((char)uVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142013a0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x40))(param_1);
    return uVar1;
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 142013a20 FUN_142013a20 body=1306 status=ok
// SIG undefined FUN_142013a20(void)

ulonglong FUN_142013a20(longlong *param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  BOOL BVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined4 uVar17;
  bool bVar18;
  undefined4 local_res8;
  undefined4 uStackX_c;
  LARGE_INTEGER local_res18;
  undefined1 local_res20 [8];
  undefined2 *local_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined4 local_48;
  
  plVar10 = (longlong *)0x0;
  uVar14 = 0;
  uVar17 = 0;
  local_res8 = 0;
  uVar12 = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  if (((DAT_146af29c0 != 0) ||
      ((DAT_146af29c8 != 0 && (*(char *)((longlong)param_1 + 0xd2) == '\0')))) ||
     ((DAT_146af29c4 != 0 && (*(char *)((longlong)param_1 + 0xd2) != '\0')))) {
    plVar10 = (longlong *)param_1[0x17];
    for (iVar5 = (int)param_1[0x18]; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar10 != 0) {
        uVar12 = FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)((longlong)param_1 + 0xc4) != 0) {
      uVar12 = TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x17,0);
    }
    return uVar12 & 0xffffffffffffff00;
  }
  cVar4 = (**(code **)(*param_1 + 0x68))();
  if (cVar4 == '\0') {
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x1b);
  }
  cVar4 = (**(code **)(*param_1 + 0x68))(param_1);
  if (((cVar4 != '\0') && (cVar4 = (**(code **)(*param_1 + 0x60))(param_1), cVar4 == '\0')) &&
     (iVar5 = FUN_1416a5660(), 1 < iVar5)) {
    *(undefined1 *)((longlong)param_1 + 0xa1) = 0;
    QueryPerformanceCounter(&local_res18);
    param_1[0x27] = (longlong)((double)local_res18.QuadPart * DAT_1468b02f8 + 16777216.0);
    puVar7 = (undefined8 *)param_1[4];
    if ((puVar7 != (undefined8 *)0x0) && (0 < (int)param_1[0x18])) {
      local_res8 = CONCAT31(local_res8._1_3_,*(undefined1 *)((longlong)param_1 + 0xd1));
      cVar4 = (**(code **)*puVar7)(puVar7,param_1 + 0x17,&local_res8);
      if (cVar4 == '\0') {
        return 0;
      }
    }
    if ((param_1[4] == 0) || ((int)param_1[0x18] < 1)) {
      uVar17 = 1;
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x13) = uVar17;
    UNLOCK();
    LOCK();
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
    UNLOCK();
    local_58 = 0x3f800000;
    *(undefined1 *)(param_1 + 0x14) = 1;
    local_54 = 1;
    local_50 = 0;
    local_48 = 0;
    FUN_1419a1b40(param_1[0x30],&local_58);
    local_70 = DAT_1469eb220;
    local_78 = DAT_1469eb218;
    lVar2 = param_1[0x15];
    if (lVar2 == 0) {
      if (DAT_1469eb220 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_1469eb220 + 1) = (int)DAT_1469eb220[1] + 1;
        UNLOCK();
      }
      plVar9 = (longlong *)CONCAT44(uStackX_c,local_res8);
      bVar3 = false;
      bVar18 = true;
      plVar15 = local_70;
    }
    else {
      local_70 = (longlong *)param_1[0x16];
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
      }
      bVar3 = true;
      bVar18 = false;
      local_78 = lVar2;
      plVar9 = local_70;
      plVar15 = (longlong *)CONCAT44(uStackX_c,local_res8);
    }
    plVar16 = (longlong *)param_1[0xc];
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar16 + 0x208))(plVar16,&local_78);
    if ((bVar18) && (plVar15 != (longlong *)0x0)) {
      LOCK();
      plVar16 = plVar15 + 1;
      lVar2 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
    if ((bVar3) && (plVar9 != (longlong *)0x0)) {
      LOCK();
      plVar15 = plVar9 + 1;
      lVar2 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
    plVar9 = (longlong *)param_1[9];
    plVar15 = plVar9;
    plVar16 = plVar10;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar9[1];
      bVar18 = iVar5 == 0;
      if (bVar18) {
        *(int *)(plVar9 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (plVar15 = plVar10, !bVar18) {
        LOCK();
        bVar18 = iVar5 == (int)plVar9[1];
        if (bVar18) {
          *(int *)(plVar9 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar18) {
          plVar15 = plVar9;
          plVar16 = (longlong *)0x0;
          if (plVar9 != (longlong *)0x0) {
            plVar16 = (longlong *)param_1[8];
          }
          break;
        }
        LOCK();
        iVar5 = (int)plVar9[1];
        bVar18 = iVar5 == 0;
        if (bVar18) {
          *(int *)(plVar9 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
    }
    lVar2 = param_1[0xe];
    puVar7 = (undefined8 *)SWindow::GetClientSizeInScreen(plVar16,local_res20);
    FUN_141857b30(lVar2,*puVar7);
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar15 + 1;
      lVar2 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15,1);
        }
      }
    }
    local_68 = param_1[10];
    local_60 = param_1[0xb];
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    FUN_14185a760(param_1[0xe],&local_68);
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x29);
    BVar6 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar6 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    if ((code *)param_1[1] != (code *)0x0) {
      (*(code *)param_1[1])();
    }
    puVar8 = (undefined4 *)operator_new(0x38);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      plVar9 = (longlong *)param_1[0x2f];
      lVar2 = param_1[0x2e];
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      *puVar8 = 0;
      puVar8[1] = 0x3dcccccd;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      *(longlong *)(puVar8 + 10) = lVar2;
      *(longlong **)(puVar8 + 0xc) = plVar9;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar15 = plVar9 + 1;
        lVar2 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
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
    }
    param_1[0x12] = (longlong)puVar8;
    LOCK();
    puVar8[3] = 0;
    UNLOCK();
    LOCK();
    puVar8[2] = 1;
    UNLOCK();
    LOCK();
    *puVar8 = 1;
    UNLOCK();
    local_88 = (undefined2 *)0x0;
    local_80 = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    FGenericPlatformString::Memcpy(local_88,L"SlateLoadingThread",0x26);
    LOCK();
    UNLOCK();
    iVar5 = DAT_146acc610 + 1;
    DAT_146acc610 = DAT_146acc610 + 1;
    FString::AppendInt(&local_88,iVar5);
    LOCK();
    puVar8[4] = 1;
    UNLOCK();
    plVar9 = (longlong *)operator_new(0x10);
    if (plVar9 != (longlong *)0x0) {
      plVar9[1] = (longlong)puVar8;
      *plVar9 = (longlong)&PTR_FUN_144f65bf0;
      plVar10 = plVar9;
    }
    *(longlong **)(puVar8 + 8) = plVar10;
    puVar13 = &DAT_143f3eda8;
    if ((int)local_80 != 0) {
      puVar13 = local_88;
    }
    uVar11 = FUN_1415d42a0(plVar10,puVar13,0,0xffffffff,0xffffffffffffffff);
    *(undefined8 *)(puVar8 + 6) = uVar11;
    if (local_88 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    LeaveCriticalSection(lpCriticalSection);
    uVar14 = 1;
    uVar11 = (**(code **)(*param_1 + 0x88))(param_1);
    TBaseMulticastDelegate<void>::Broadcast(uVar11);
  }
  return uVar14;
}



// FUNCTION 142013f40 FUN_142013f40 body=1171 status=ok
// SIG undefined FUN_142013f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142013f40(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  longlong local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  longlong local_b8;
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  longlong *local_a0;
  longlong *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  longlong *plStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  lVar3 = local_118;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar7 = *param_2;
  plVar9 = (longlong *)(param_1 + 0x30);
  lVar2 = *plVar9;
  local_118._0_4_ = (undefined4)lVar7;
  local_118._4_4_ = (undefined4)((ulonglong)lVar7 >> 0x20);
  local_118 = lVar3;
  if (lVar2 == 0) {
    if (lVar7 == 0) {
LAB_142014116:
      uStack_e0 = (longlong *)param_2[1];
      plVar9 = (longlong *)(param_1 + 0x20);
      if (uStack_e0 != (longlong *)0x0) {
        LOCK();
        *(int *)(uStack_e0 + 1) = (int)uStack_e0[1] + 1;
        UNLOCK();
      }
      local_e8 = lVar7;
      if (&local_e8 != plVar9) {
        uStack_e0._4_4_ = (undefined4)((ulonglong)uStack_e0 >> 0x20);
        local_e8 = *plVar9;
        plVar5 = *(longlong **)(param_1 + 0x28);
        local_58 = (undefined4)local_118;
        uStack_54 = local_118._4_4_;
        uStack_50 = (undefined4)uStack_e0;
        uStack_4c = uStack_e0._4_4_;
        *(undefined4 *)plVar9 = (undefined4)local_118;
        *(undefined4 *)(param_1 + 0x24) = local_118._4_4_;
        *(undefined4 *)(param_1 + 0x28) = (undefined4)uStack_e0;
        *(undefined4 *)(param_1 + 0x2c) = uStack_e0._4_4_;
        uStack_e0 = plVar5;
      }
      plVar9 = uStack_e0;
      if (uStack_e0 == (longlong *)0x0) goto LAB_142014193;
      LOCK();
      plVar5 = uStack_e0 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 != 1) goto LAB_142014193;
      (**(code **)*uStack_e0)(uStack_e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar9 = uStack_e0;
    }
    else {
      uStack_110 = (longlong *)param_2[1];
      if (uStack_110 != (longlong *)0x0) {
        LOCK();
        *(int *)(uStack_110 + 1) = (int)uStack_110[1] + 1;
        UNLOCK();
      }
      if (&local_118 != plVar9) {
        uStack_110._4_4_ = (undefined4)((ulonglong)uStack_110 >> 0x20);
        lVar7 = *plVar9;
        plVar5 = *(longlong **)(param_1 + 0x38);
        local_88 = (undefined4)local_118;
        uStack_84 = local_118._4_4_;
        uStack_80 = (undefined4)uStack_110;
        uStack_7c = uStack_110._4_4_;
        *(undefined4 *)plVar9 = (undefined4)local_118;
        *(undefined4 *)(param_1 + 0x34) = local_118._4_4_;
        *(undefined4 *)(param_1 + 0x38) = (undefined4)uStack_110;
        *(undefined4 *)(param_1 + 0x3c) = uStack_110._4_4_;
        uStack_110 = plVar5;
      }
      local_118 = lVar7;
      plVar9 = uStack_110;
      if (uStack_110 != (longlong *)0x0) {
        LOCK();
        plVar5 = uStack_110 + 1;
        lVar7 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*uStack_110)(uStack_110);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*uStack_110 + 8))(uStack_110,1);
          }
        }
      }
      plVar5 = (longlong *)param_2[1];
      plVar9 = (longlong *)(param_1 + 0x20);
      lVar7 = *param_2;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_108 = lVar7;
      plStack_100 = plVar5;
      if (&local_108 != plVar9) {
        local_108 = *plVar9;
        plStack_100 = *(longlong **)(param_1 + 0x28);
        *plVar9 = lVar7;
        *(longlong **)(param_1 + 0x28) = plVar5;
        local_78 = lVar7;
        plStack_70 = plVar5;
      }
      plVar9 = plStack_100;
      if (plStack_100 == (longlong *)0x0) goto LAB_142014193;
      LOCK();
      plVar5 = plStack_100 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 != 1) goto LAB_142014193;
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar9 = plStack_100;
    }
  }
  else {
    if (lVar7 != 0) goto LAB_142014116;
    plVar9 = (longlong *)(param_1 + 0x20);
    uStack_f0 = *(longlong **)(param_1 + 0x38);
    if (uStack_f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_f0 + 1) = (int)uStack_f0[1] + 1;
      UNLOCK();
    }
    local_f8 = lVar2;
    if (&local_f8 != plVar9) {
      local_f8._0_4_ = (undefined4)lVar2;
      local_f8._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
      uStack_f0._4_4_ = (undefined4)((ulonglong)uStack_f0 >> 0x20);
      lVar7 = *plVar9;
      plVar5 = *(longlong **)(param_1 + 0x28);
      local_68 = (undefined4)local_f8;
      uStack_64 = local_f8._4_4_;
      uStack_60 = (undefined4)uStack_f0;
      uStack_5c = uStack_f0._4_4_;
      *(undefined4 *)plVar9 = (undefined4)local_f8;
      *(undefined4 *)(param_1 + 0x24) = local_f8._4_4_;
      *(undefined4 *)(param_1 + 0x28) = (undefined4)uStack_f0;
      *(undefined4 *)(param_1 + 0x2c) = uStack_f0._4_4_;
      local_f8 = lVar7;
      uStack_f0 = plVar5;
    }
    plVar9 = uStack_f0;
    if (uStack_f0 == (longlong *)0x0) goto LAB_142014193;
    LOCK();
    plVar5 = uStack_f0 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 != 1) goto LAB_142014193;
    (**(code **)*uStack_f0)(uStack_f0);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    plVar9 = uStack_f0;
  }
  if (iVar4 == 1) {
    (**(code **)(*plVar9 + 8))(plVar9,1);
  }
LAB_142014193:
  plVar9 = (longlong *)(param_1 + 0x20);
  if ((longlong *)*plVar9 != (longlong *)0x0) {
    local_d0 = IGameMoviePlayer::BroadcastMovieClipFinished;
    uStack_c8 = 0x10;
    plVar5 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x50))();
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    local_98 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)&PTR_GetPoolName_143fc2050;
      *(undefined4 *)(plVar6 + 2) = (undefined4)local_d0;
      *(undefined4 *)((longlong)plVar6 + 0x14) = local_d0._4_4_;
      *(undefined4 *)(plVar6 + 3) = uStack_c8;
      *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_c4;
      plVar6[1] = param_1 + -0x10;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar6[5] = lVar7;
      *plVar6 = (longlong)&PTR_GetPoolName_143fc2098;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar5,1);
      (**(code **)(*plVar6 + 0x20))(plVar6,local_b0);
      iVar4 = (int)plVar5[1];
      *(int *)(plVar5 + 1) = iVar4 + 1;
      if (*(int *)((longlong)plVar5 + 0xc) < iVar4 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar5,iVar4);
      }
      puVar8 = (undefined8 *)((longlong)iVar4 * 0x10 + *plVar5);
      *puVar8 = plVar6;
      *(undefined4 *)(puVar8 + 1) = 3;
    }
    if (((*plVar9 != 0) && (*(longlong *)(param_1 + 0x80) != 0)) &&
       (*(longlong *)(param_1 + 0x88) != 0)) {
      plVar5 = (longlong *)0x0;
      piVar1 = (int *)(*(longlong *)(param_1 + 0x88) + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) {
        puVar8 = (undefined8 *)
                 (**(code **)(*(longlong *)*plVar9 + 0x18))((longlong *)*plVar9,local_a8);
        local_c0 = *puVar8;
        local_b8 = puVar8[1];
        if (local_b8 != 0) {
          LOCK();
          *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
          UNLOCK();
        }
        plVar9 = *(longlong **)(param_1 + 0x88);
        plVar6 = plVar9;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          iVar4 = (int)plVar9[1];
          bVar10 = iVar4 == 0;
          if (bVar10) {
            *(int *)(plVar9 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
          while (plVar6 = plVar5, !bVar10) {
            LOCK();
            bVar10 = iVar4 == (int)plVar9[1];
            if (bVar10) {
              *(int *)(plVar9 + 1) = iVar4 + 1;
            }
            UNLOCK();
            if (bVar10) {
              plVar6 = plVar9;
              if (plVar9 != (longlong *)0x0) {
                plVar5 = *(longlong **)(param_1 + 0x80);
              }
              break;
            }
            LOCK();
            iVar4 = (int)plVar9[1];
            bVar10 = iVar4 == 0;
            if (bVar10) {
              *(int *)(plVar9 + 1) = 0;
              iVar4 = 0;
            }
            UNLOCK();
          }
        }
        FUN_1418c26d0(plVar5,&local_c0);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar6 + 1;
          lVar7 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
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
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_a0 + 1;
          lVar7 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar1 = (int *)((longlong)local_a0 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_a0 + 8))(local_a0,1);
            }
          }
        }
      }
    }
  }
  plVar9 = (longlong *)param_2[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar9 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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



// FUNCTION 142014400 FUN_142014400 body=28 status=ok
// SIG undefined FUN_142014400(void)

undefined8 FUN_142014400(longlong param_1)

{
  FUN_142015000(*(undefined8 *)(param_1 + 8));
  LOCK();
  DAT_1468c21c8 = 0;
  UNLOCK();
  return 0;
}



// FUNCTION 142014420 FUN_142014420 body=136 status=ok
// SIG undefined FUN_142014420(void)

void FUN_142014420(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_18;
  longlong local_10;
  
  if ((*(longlong *)(param_1 + 0x20) != 0) &&
     (plVar4 = *(longlong **)(param_1 + 0x60), plVar4 != (longlong *)0x0)) {
    local_18 = *param_2;
    local_10 = param_2[1];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar4 + 0x208))(plVar4,&local_18);
  }
  plVar4 = (longlong *)param_2[1];
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



// FUNCTION 1420144b0 SetSplashScreenMovie body=90 status=ok
// SIG undefined SetSplashScreenMovie(void)

void IStereoLayers::SetSplashScreenMovie(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 3,0);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*(longlong *)*param_2 + 8))();
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 3,uVar1);
  }
  (**(code **)(*param_1 + 0x30))(param_1);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_2);
  return;
}



// FUNCTION 142014510 FUN_142014510 body=332 status=ok
// SIG undefined FUN_142014510(void)

void FUN_142014510(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 local_38;
  longlong *plStack_30;
  longlong *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_14;
  undefined1 local_c;
  
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar6 = (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))
                     (DAT_1468b1f88,L"r.AndroidDisableThreadedRenderingFirstLoad");
  if (((plVar6 == (longlong *)0x0) || (iVar5 = (**(code **)(*plVar6 + 0x68))(plVar6), iVar5 == 0))
     || ((DAT_146b17150 != (longlong *)0x0 &&
         (cVar4 = (**(code **)(*DAT_146b17150 + 0x288))(), cVar4 != '\0')))) {
    FUN_14200f420(param_1 + 0xa8,param_2);
  }
  else {
    local_14 = 0x101;
    local_28 = (longlong *)0x0;
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    local_20 = 0;
    local_18 = 0xbf800000;
    local_c = 0;
    FUN_14200f300(param_1 + 0xa8,&local_38);
    plVar6 = local_28;
    for (iVar5 = (int)local_20; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    plVar6 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014201463e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plStack_30 + 8))(plStack_30,1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 142014660 FUN_142014660 body=1111 status=ok
// SIG undefined FUN_142014660(void)

void FUN_142014660(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  longlong *plVar15;
  char local_res8 [8];
  char local_res10 [8];
  longlong *local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  int local_a0;
  int local_9c;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78 [2];
  undefined8 local_68;
  longlong *plStack_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined1 local_3e;
  undefined2 local_3d;
  
  if ((param_1[0x15] == 0) && ((int)param_1[0x18] < 1)) {
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    local_58 = (longlong *)0x0;
    local_50 = 0;
    local_40 = 0;
    local_3d = 0;
    local_res8[0] = '\0';
    local_48 = 0xbf800000;
    local_44 = 0x101;
    local_3e = 1;
    FConfigCacheIni::GetBool
              (DAT_1468b6148,L"/Script/MoviePlayer.MoviePlayerSettings",L"bWaitForMoviesToComplete",
               local_res8,&DAT_1468e2410);
    FConfigCacheIni::GetBool
              (DAT_1468b6148,L"/Script/MoviePlayer.MoviePlayerSettings",L"bMoviesAreSkippable",
               (longlong)&local_44 + 1,&DAT_1468e2410);
    local_res10[0] = '\0';
    local_44 = CONCAT31(local_44._1_3_,local_res8[0] == '\0');
    FConfigCacheIni::GetBool
              (DAT_1468b6148,L"/Script/MoviePlayer.MoviePlayerSettings",L"bLoopLastStartupMovie",
               local_res10,&DAT_1468e2410);
    local_3d = CONCAT11(local_3d._1_1_,1);
    uVar4 = local_40._1_1_;
    if (local_res10[0] != '\0') {
      uVar4 = 2;
    }
    local_b8 = (longlong *)0x0;
    local_40 = CONCAT11(uVar4,(undefined1)local_40);
    local_b0 = 0;
    FConfigCacheIni::GetArray
              (DAT_1468b6148,L"/Script/MoviePlayer.MoviePlayerSettings",L"StartupMovies",&local_b8,
               &DAT_1468e2410);
    if ((int)local_b0 == 0) {
      local_88 = 0;
      local_80 = 0x10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
      lVar8 = local_88;
      FGenericPlatformString::Memcpy(local_88,L"Default_Startup",0x20);
      lVar11 = (longlong)(int)local_b0;
      iVar5 = (int)local_b0 + 1;
      local_b0 = CONCAT44(local_b0._4_4_,iVar5);
      if (local_b0._4_4_ < iVar5) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_b8);
      }
      plVar6 = local_b8 + lVar11 * 2;
      *plVar6 = lVar8;
      *(undefined4 *)(plVar6 + 1) = (undefined4)local_80;
      *(undefined4 *)((longlong)plVar6 + 0xc) = local_80._4_4_;
    }
    local_98 = (longlong *)0x0;
    local_90 = 0;
    plVar6 = (longlong *)FUN_1415c3d50();
    puVar7 = (undefined8 *)FPaths::ProjectContentDir(local_78);
    iVar5 = *(int *)(puVar7 + 1);
    local_a8 = (undefined2 *)*puVar7;
    *puVar7 = 0;
    local_a0 = *(int *)(puVar7 + 1);
    local_9c = *(int *)((longlong)puVar7 + 0xc);
    puVar7[1] = 0;
    iVar10 = local_a0;
    if (local_9c < (int)((7 - (uint)(iVar5 != 0)) + local_a0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a8);
      iVar10 = local_a0;
    }
    local_a0 = (7 - (uint)(iVar10 != 0)) + iVar10;
    if (local_9c < local_a0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,iVar10);
    }
    puVar9 = local_a8;
    lVar8 = (longlong)iVar10 - (ulonglong)(iVar10 != 0);
    puVar14 = &DAT_143f3eda8;
    if (local_a0 != 0) {
      puVar14 = local_a8;
    }
    *(undefined8 *)(local_a8 + lVar8) = 0x690076006f004d;
    *(undefined4 *)(local_a8 + lVar8 + 4) = 0x730065;
    local_a8[lVar8 + 6] = 0;
    (**(code **)(*plVar6 + 0x70))(plVar6,&local_98,puVar14,0);
    if (puVar9 != (undefined2 *)0x0) {
      FMemory::Free(puVar9);
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    bVar2 = false;
    plVar15 = local_b8 + (longlong)(int)local_b0 * 2;
    plVar6 = local_b8;
    if (local_b8 != plVar15) {
      do {
        plVar13 = local_98 + (longlong)(int)local_90 * 2;
        for (plVar12 = local_98; plVar12 != plVar13; plVar12 = plVar12 + 2) {
          if ((int)plVar6[1] == 0) {
            puVar9 = &DAT_143f3eda8;
          }
          else {
            puVar9 = (undefined2 *)*plVar6;
          }
          iVar5 = FUN_141592950(plVar12,puVar9,1,0,0xffffffff);
          uVar3 = local_50;
          if (iVar5 != -1) {
            if (plVar12 != (longlong *)0x0) {
              lVar8 = (longlong)(int)local_50;
              bVar2 = true;
              iVar5 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar5);
              if (local_50._4_4_ < iVar5) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_58,uVar3 & 0xffffffff);
              }
              FString::FString(local_58 + lVar8 * 2,plVar6);
            }
            break;
          }
        }
        plVar6 = plVar6 + 2;
      } while (plVar6 != plVar15);
      if (bVar2) {
        local_44 = CONCAT13(1,(undefined3)local_44);
        (**(code **)(*param_1 + 0x20))(param_1,&local_68);
      }
    }
    plVar6 = local_98;
    for (iVar5 = (int)local_90; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar6 = local_b8;
    for (iVar5 = (int)local_b0; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free(local_b8);
    }
    plVar6 = local_58;
    for (iVar5 = (int)local_50; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
    plVar6 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar15 = plStack_60 + 1;
      lVar8 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142014ac0 FUN_142014ac0 body=1339 status=ok
// SIG undefined FUN_142014ac0(void)

void FUN_142014ac0(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  BOOL BVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *plStack_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined1 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48 [2];
  
  (**(code **)(*param_1 + 0x48))();
  (**(code **)(*param_1 + 0x50))(param_1,0);
  plVar10 = (longlong *)0x0;
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_res20);
    FTickableObjectRenderThread::Unregister(param_1 + -2);
    QueryPerformanceCounter(&local_res18);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_res20._0_4_);
  }
  else {
    pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar7 = TlsGetValue(*pDVar6);
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)operator_new(0x18);
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = 0;
        plVar7[1] = 0;
        *(undefined4 *)(plVar7 + 2) = 0;
        plVar10 = plVar7;
      }
      TlsSetValue(*pDVar6,plVar10);
      plVar7 = plVar10;
    }
    plVar10 = (longlong *)plVar7[1];
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)*plVar7;
      if (plVar10 == (longlong *)0x0) {
        lVar8 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar6 + 2);
        plVar7[1] = lVar8;
        if (lVar8 == 0) {
          puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar7[1] = (longlong)puVar9;
          lVar8 = 0x1f;
          do {
            puVar2 = puVar9 + 0x20;
            *puVar9 = puVar2;
            lVar8 = lVar8 + -1;
            puVar9 = puVar2;
          } while (lVar8 != 0);
          *puVar2 = 0;
        }
        plVar10 = (longlong *)plVar7[1];
        iVar11 = 0x20;
        *(undefined4 *)(plVar7 + 2) = 0x20;
      }
      else {
        iVar11 = 0x20;
        plVar7[1] = (longlong)plVar10;
        *(undefined4 *)(plVar7 + 2) = 0x20;
        *plVar7 = 0;
      }
    }
    else {
      iVar11 = (int)plVar7[2];
    }
    plVar7[1] = *plVar10;
    *(int *)(plVar7 + 2) = iVar11 + -1;
    *plVar10 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar10 + 1) = 0xff;
    local_58 = 0;
    local_50 = 0;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    *plVar10 = (longlong)&PTR_FUN_144f65a90;
    *(undefined1 *)(plVar10 + 3) = 0;
    plVar10[4] = 0;
    plVar10[2] = (longlong)(param_1 + -2);
    lVar8 = plVar10[4];
    piVar1 = (int *)(lVar8 + 0x48);
    if (lVar8 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_140445100(plVar10,0,0xff,1);
    if (lVar8 != 0) {
      LOCK();
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        FGraphEvent::Recycle(lVar8);
      }
    }
  }
  plVar10 = param_1 + -2;
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_140483870(&DAT_1464af190,plVar10);
  FUN_140483870(&DAT_1464b57b8,plVar10);
  FUN_140483870(&DAT_1464b57d0,plVar10);
  local_d0 = (longlong *)0x0;
  if (param_1 + 10 != &local_d8) {
    param_1[10] = 0;
    local_d8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb,&local_d0);
    plVar10 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_d0 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
  }
  local_c0 = (longlong *)0x0;
  if (param_1 + 0xc != &local_c8) {
    param_1[0xc] = 0;
    local_c8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xd,&local_c0);
    plVar10 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_c0 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
  }
  if (param_1 + 8 != local_48) {
    param_1[8] = 0;
    plVar10 = (longlong *)param_1[9];
    param_1[9] = 0;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  local_b0 = (longlong *)0x0;
  if (param_1 + 0xe != &local_b8) {
    param_1[0xe] = 0;
    local_b8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xf,&local_b0);
    plVar10 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_b0 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
  }
  local_a0 = (longlong *)0x0;
  if (param_1 + 4 != &local_a8) {
    param_1[4] = 0;
    local_a8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 5,&local_a0);
    plVar10 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_a0 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
  }
  local_90 = (longlong *)0x0;
  if (param_1 + 6 != &local_98) {
    param_1[6] = 0;
    local_98 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 7,&local_90);
    plVar10 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_90 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
  }
  local_78 = (longlong *)0x0;
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  local_70 = 0;
  local_68 = 0xbf800000;
  local_64 = 0x101;
  local_5c = 0;
  FUN_14200f300(param_1 + 0x15,&local_88);
  plVar7 = local_78;
  plVar10 = local_78;
  for (iVar11 = (int)local_70; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (plVar7 != (longlong *)0x0) {
    FMemory::Free(plVar7);
  }
  plVar10 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_80 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plStack_80 + 8))(plStack_80,1);
      }
    }
  }
  if (param_1[0x12] != 0) {
    FUN_142010740();
    BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x29));
    if (BVar5 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x29));
    }
    if (param_1[0x12] != 0) {
      FUN_14200f960(param_1[0x12],1);
    }
    param_1[0x12] = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x29));
  }
  return;
}



// FUNCTION 142015000 FUN_142015000 body=675 status=ok
// SIG undefined FUN_142015000(void)

void FUN_142015000(undefined4 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  BOOL BVar9;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar10;
  double dVar11;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18;
  
  QueryPerformanceCounter(&local_res8);
  dVar5 = (double)local_res8.QuadPart * DAT_1468b02f8;
  LOCK();
  if (param_1[4] == 0) {
    param_1[4] = 0;
  }
  UNLOCK();
  LOCK();
  bVar10 = param_1[2] == 0;
  if (bVar10) {
    param_1[2] = 0;
  }
  UNLOCK();
  dVar5 = dVar5 + 16777216.0;
  while (!bVar10) {
    LOCK();
    iVar8 = param_1[4];
    if (iVar8 == 0) {
      param_1[4] = 0;
      iVar8 = 0;
    }
    UNLOCK();
    QueryPerformanceCounter(&local_res10);
    plVar7 = DAT_1469eaf50;
    plVar2 = DAT_1469eaf48;
    dVar3 = (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0;
    dVar4 = dVar3 - dVar5;
    if (DAT_1469eaf50 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469eaf50 + 1) = (int)DAT_1469eaf50[1] + 1;
      UNLOCK();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,(float)dVar4);
    }
    dVar11 = 0.016666666666666666 - dVar4;
    if (0.0 < dVar11) {
      FUN_1416b1760(CONCAT44((int)((ulonglong)dVar11 >> 0x20),(float)dVar11));
      QueryPerformanceCounter(&local_res18);
      dVar3 = (double)local_res18.QuadPart * DAT_1468b02f8 + 16777216.0;
      dVar4 = dVar3 - dVar5;
    }
    if (DAT_1469f4590 != 0) {
      LOCK();
      bVar10 = param_1[3] == 0;
      if (bVar10) {
        param_1[3] = 0;
      }
      UNLOCK();
      if ((bVar10) && (iVar8 == 1)) {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 10) + 0x28);
        if ((plVar2 != (longlong *)0x0) && (*(char *)((longlong)plVar2 + 0xb9) == '\0')) {
          (**(code **)(*plVar2 + 0x1a8))(plVar2,1);
        }
        plVar2 = *(longlong **)(DAT_1469f4590 + 0x18);
        if ((plVar2 != (longlong *)0x0) && (*(char *)((longlong)plVar2 + 0xb9) == '\0')) {
          lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*plVar2 + 0x160))();
          BVar9 = TryEnterCriticalSection(lpCriticalSection);
          if (BVar9 == 0) {
            EnterCriticalSection(lpCriticalSection);
          }
          LeaveCriticalSection(lpCriticalSection);
        }
        FUN_1420107e0(*(undefined8 *)(param_1 + 10),(float)dVar4);
        LOCK();
        param_1[3] = 1;
        UNLOCK();
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    LOCK();
    bVar10 = param_1[2] == 0;
    if (bVar10) {
      param_1[2] = 0;
    }
    UNLOCK();
    dVar5 = dVar3;
  }
  LOCK();
  bVar10 = param_1[3] == 0;
  if (bVar10) {
    param_1[3] = 0;
  }
  UNLOCK();
  while (!bVar10) {
    FUN_1416b1760(0x3dcccccd);
    LOCK();
    bVar10 = param_1[3] == 0;
    if (bVar10) {
      param_1[3] = 0;
    }
    UNLOCK();
  }
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 10) + 0x28);
  if ((plVar2 != (longlong *)0x0) && (*(char *)((longlong)plVar2 + 0xb9) == '\0')) {
    (**(code **)(*plVar2 + 0x1a8))(plVar2,0);
  }
  LOCK();
  *param_1 = 0;
  UNLOCK();
  return;
}



// FUNCTION 1420152d0 FUN_1420152d0 body=124 status=ok
// SIG undefined FUN_1420152d0(void)

void FUN_1420152d0(longlong param_1)

{
  int *piVar1;
  BOOL BVar2;
  bool bVar3;
  
  *(undefined1 *)(param_1 + 0xa1) = 1;
  *(undefined8 *)(param_1 + 0x138) = 0;
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x148));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x148));
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x90) + 0xc);
    LOCK();
    bVar3 = *piVar1 == 0;
    if (bVar3) {
      *piVar1 = 0;
    }
    UNLOCK();
    if (!bVar3) {
      LOCK();
      *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0xc) = 0;
      UNLOCK();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142015345. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x148));
  return;
}



// FUNCTION 142015350 FUN_142015350 body=226 status=ok
// SIG undefined FUN_142015350(void)

void FUN_142015350(longlong param_1,float param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  BOOL BVar4;
  bool bVar5;
  
  if ((*(longlong *)(param_1 + 0x50) != 0) && (*(longlong *)(param_1 + 0x58) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x58) + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (((0 < iVar3) && (*(longlong *)(param_1 + 0x80) != 0)) &&
       (cVar2 = (**(code **)(*(longlong *)(param_1 + 0x10) + 0x58))(param_1 + 0x10), cVar2 == '\0'))
    {
      BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x158));
      if (BVar4 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x158));
      }
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0xa0) + 0xc);
        LOCK();
        bVar5 = *piVar1 == 0;
        if (bVar5) {
          *piVar1 = 0;
        }
        UNLOCK();
        param_2 = param_2 + *(float *)(param_1 + 0x1a0);
        if (bVar5) {
          *(float *)(param_1 + 0x1a0) = param_2;
        }
        else {
          FUN_142015440(param_1,param_2);
          *(undefined4 *)(param_1 + 0x1a0) = 0;
          LOCK();
          *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0xc) = 0;
          UNLOCK();
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x158));
    }
  }
  return;
}



// FUNCTION 142015440 FUN_142015440 body=1339 status=ok
// SIG undefined FUN_142015440(void)

void FUN_142015440(longlong param_1,undefined4 param_2)

{
  double dVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
  float fVar16;
  longlong local_res18;
  longlong local_res20;
  longlong local_a0;
  LARGE_INTEGER local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68 [6];
  
  if ((*(longlong *)(param_1 + 0x30) != 0) && (0 < *(int *)(param_1 + 0xd0))) {
    puVar11 = (undefined8 *)0x0;
    LOCK();
    bVar15 = *(int *)(param_1 + 0xa8) == 0;
    if (bVar15) {
      *(int *)(param_1 + 0xa8) = 0;
    }
    UNLOCK();
    if (bVar15) {
      cVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
      if (cVar3 != '\0') {
        LOCK();
        *(undefined4 *)(param_1 + 0xa8) = 1;
        UNLOCK();
      }
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x40))
                (*(longlong **)(param_1 + 0x30),&local_res18);
      if (local_res18 != 0) {
        plVar8 = (longlong *)(param_1 + 0x10);
        plVar6 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x10) + 0xe8))(plVar8);
        plVar14 = (longlong *)*plVar6;
        plVar6 = plVar14 + (longlong)(int)plVar6[1] * 2;
        for (; plVar14 != plVar6; plVar14 = plVar14 + 2) {
          if (((int)plVar14[1] != 0) && (*plVar14 != 0)) {
            QueryPerformanceCounter(&local_98);
            dVar1 = ((double)local_98.QuadPart * DAT_1468b02f8 + 16777216.0) - DAT_1468e2430;
            puVar7 = (undefined8 *)operator_new(0x20);
            if (puVar7 != (undefined8 *)0x0) {
              local_90 = local_res18;
              uVar2 = *(undefined8 *)(local_res18 + 0x60);
              LOCK();
              *(int *)(local_res18 + 8) = *(int *)(local_res18 + 8) + 1;
              UNLOCK();
              puVar7[1] = 0;
              *puVar7 = &PTR__scalar_deleting_destructor__144dd54c8;
              puVar7[2] = local_res18;
              if (local_res18 != 0) {
                LOCK();
                *(int *)(local_res18 + 8) = *(int *)(local_res18 + 8) + 1;
                UNLOCK();
              }
              puVar7[3] = uVar2;
              TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_90);
              puVar11 = puVar7;
            }
            lVar9 = operator_new(0x1b0);
            if ((lVar9 != 0) &&
               (fVar16 = (float)dVar1,
               lVar9 = FCanvas::FCanvas(lVar9,puVar11,0,fVar16,fVar16,param_2,DAT_1464c9c14,
                                        0x3f800000), lVar9 != 0)) {
              plVar6 = (longlong *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
              local_88 = local_res18;
              plVar14 = plVar6 + 1;
              if (DAT_146ab6eb0 < plVar6 + 1) {
                FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x10);
                plVar6 = (longlong *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
                plVar14 = plVar6 + 1;
              }
              DAT_146ab6ea8 = plVar14;
              *plVar6 = local_88;
              puVar11 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
              plVar14 = puVar11 + 5;
              if (DAT_146ab6eb0 < plVar14) {
                FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x30);
                puVar11 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
                plVar14 = puVar11 + 5;
              }
              DAT_146ab6e8c = DAT_146ab6e8c + 1;
              DAT_146ab6ea8 = plVar14;
              *DAT_146ab6e80 = puVar11;
              DAT_146ab6e80 = puVar11 + 1;
              *DAT_146ab6e80 = 0;
              *puVar11 = &PTR_LAB_143f59470;
              *(undefined4 *)(puVar11 + 2) = 1;
              puVar11[3] = plVar6;
              *(undefined4 *)(puVar11 + 4) = 1;
              *(undefined1 *)((longlong)puVar11 + 0x24) = 0;
              plVar8 = (longlong *)(**(code **)(*plVar8 + 0xe8))(plVar8);
              bVar15 = false;
              *(int *)((longlong)plVar8 + 0x14) = *(int *)((longlong)plVar8 + 0x14) + 1;
              iVar10 = *(int *)((longlong)plVar8 + 0x14);
              iVar5 = (int)plVar8[1] + -1;
              lVar12 = (longlong)iVar5;
              if (-1 < iVar5) {
                lVar13 = lVar12 << 4;
                bVar15 = false;
                do {
                  if (((*(int *)(lVar13 + 8 + *plVar8) == 0) ||
                      (plVar14 = *(longlong **)(lVar13 + *plVar8), plVar14 == (longlong *)0x0)) ||
                     (cVar4 = (**(code **)(*plVar14 + 0x40))(plVar14,param_2,lVar9), cVar4 == '\0'))
                  {
                    bVar15 = true;
                  }
                  lVar13 = lVar13 + -0x10;
                  lVar12 = lVar12 + -1;
                } while (-1 < lVar12);
                iVar10 = *(int *)((longlong)plVar8 + 0x14);
              }
              *(int *)((longlong)plVar8 + 0x14) = iVar10 + -1;
              if (bVar15) {
                FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,0);
              }
              FUN_1428aaa90(lVar9,&DAT_146ab6e78,0);
              local_78 = 0;
              local_80 = 0;
              FUN_141a19150(&DAT_146ab6e78,0,0,0);
              TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_80);
              TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_78);
              puVar11 = *(undefined8 **)(lVar9 + 0x58);
              FUN_14289d030(lVar9);
              FMemory::operator_delete(lVar9,0x1b0);
              if (puVar11 != (undefined8 *)0x0) {
                (**(code **)*puVar11)(puVar11,1);
              }
              plVar14 = (longlong *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
              local_70 = local_res18;
              plVar8 = plVar14 + 1;
              if (DAT_146ab6eb0 < plVar8) {
                FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x10);
                plVar14 = (longlong *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
                plVar8 = plVar14 + 1;
              }
              DAT_146ab6ea8 = plVar8;
              *plVar14 = local_70;
              puVar11 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
              plVar8 = puVar11 + 5;
              if (DAT_146ab6eb0 < plVar8) {
                FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x30);
                puVar11 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
                plVar8 = puVar11 + 5;
              }
              DAT_146ab6e8c = DAT_146ab6e8c + 1;
              DAT_146ab6ea8 = plVar8;
              *DAT_146ab6e80 = puVar11;
              DAT_146ab6e80 = puVar11 + 1;
              *DAT_146ab6e80 = 0;
              *puVar11 = &PTR_LAB_143f59470;
              *(undefined4 *)(puVar11 + 2) = 1;
              puVar11[3] = plVar14;
              *(undefined4 *)(puVar11 + 4) = 0;
              *(undefined1 *)((longlong)puVar11 + 0x24) = 0;
            }
            break;
          }
        }
      }
      if (((DAT_146b17150 != 0) && (*(longlong **)(DAT_146b17150 + 0xab8) != (longlong *)0x0)) &&
         (lVar9 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xab8) + 0x80))(), lVar9 != 0)) {
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x40))
                  (*(longlong **)(param_1 + 0x30),&local_a0);
        local_res20 = 0;
        if ((local_a0 != 0) && (cVar3 == '\0')) {
          TRefCountPtr<FRHITexture>::operator=(&local_res20);
        }
        if (local_res20 != 0) {
          LOCK();
          *(int *)(local_res20 + 8) = *(int *)(local_res20 + 8) + 1;
          UNLOCK();
        }
        local_68[0] = local_res20;
        IStereoLayers::SetSplashScreenMovie(lVar9,local_68);
        TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res20);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_a0);
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res18);
    }
  }
  return;
}



// FUNCTION 142015980 FUN_142015980 body=2533 status=ok
// SIG undefined FUN_142015980(void)

/* WARNING: Removing unreachable block (ram,0x000142015f18) */
/* WARNING: Removing unreachable block (ram,0x000142015f25) */
/* WARNING: Removing unreachable block (ram,0x000142015f32) */

void FUN_142015980(longlong *param_1,char param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  char cVar9;
  BOOL BVar10;
  DWORD DVar11;
  DWORD *pDVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 uVar17;
  int iVar18;
  longlong *plVar19;
  bool bVar20;
  float fVar21;
  longlong *local_160;
  undefined8 local_158;
  longlong *plStack_150;
  longlong *local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined1 local_12c;
  longlong local_128;
  longlong local_120;
  LARGE_INTEGER local_118;
  LARGE_INTEGER local_110;
  LARGE_INTEGER local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong *local_d0;
  undefined1 *local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined1 local_88 [72];
  
  lVar16 = 0;
  bVar6 = 0.0 <= *(float *)(param_1 + 0x19);
  cVar8 = (**(code **)(*param_1 + 0x68))();
  if ((cVar8 == '\0') ||
     ((cVar8 = (**(code **)(*param_1 + 0x60))(param_1), cVar8 == '\0' && (bVar6)))) {
    plVar15 = DAT_146b17150;
    if (DAT_146b17150 != (longlong *)0x0) {
      lVar16 = FUN_142937670();
      if ((*(int *)(plVar15[2] + 0x90) < *(int *)(lVar16 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar15[2] + 0x88) + (longlong)*(int *)(lVar16 + 0x90) * 8) !=
          lVar16 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (((bVar6) && (DAT_1468c217e == '\0')) && (plVar15[0xf6] != 0)) {
        FUN_142463010(plVar15);
      }
    }
  }
  else {
    if (param_1[0x12] != 0) {
      FUN_142010740();
      BVar10 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x29));
      if (BVar10 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x29));
      }
      if (param_1[0x12] != 0) {
        FUN_14200f960(param_1[0x12],1);
      }
      param_1[0x12] = 0;
      plVar15 = *(longlong **)(param_1[0x2e] + 0x28);
      if ((plVar15 != (longlong *)0x0) && (*(char *)((longlong)plVar15 + 0xb9) == '\0')) {
        (**(code **)(*plVar15 + 0x1a8))(plVar15,0);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x29));
    }
    if (!bVar6) {
      LOCK();
      *(undefined4 *)((longlong)param_1 + 0x9c) = 1;
      UNLOCK();
    }
    if ((param_1[8] != 0) && (param_1[9] != 0)) {
      piVar1 = (int *)(param_1[9] + 8);
      LOCK();
      iVar18 = *piVar1;
      if (iVar18 == 0) {
        *piVar1 = 0;
        iVar18 = 0;
      }
      UNLOCK();
      if (0 < iVar18) {
        local_f8 = param_1[10];
        local_f0 = param_1[0xb];
        if (local_f0 != 0) {
          LOCK();
          *(int *)(local_f0 + 8) = *(int *)(local_f0 + 8) + 1;
          UNLOCK();
        }
        local_160 = (longlong *)param_1[9];
        if (local_160 != (longlong *)0x0) {
          LOCK();
          iVar18 = (int)local_160[1];
          bVar20 = iVar18 == 0;
          if (bVar20) {
            *(int *)(local_160 + 1) = 0;
            iVar18 = 0;
          }
          UNLOCK();
          while (!bVar20) {
            LOCK();
            bVar20 = iVar18 == (int)local_160[1];
            if (bVar20) {
              *(int *)(local_160 + 1) = iVar18 + 1;
            }
            UNLOCK();
            if (bVar20) {
              lVar16 = param_1[8];
              goto LAB_142015b06;
            }
            LOCK();
            iVar18 = (int)local_160[1];
            bVar20 = iVar18 == 0;
            if (bVar20) {
              *(int *)(local_160 + 1) = 0;
              iVar18 = 0;
            }
            UNLOCK();
          }
          lVar16 = 0;
          local_160 = (longlong *)0x0;
        }
LAB_142015b06:
        FUN_14185a760(lVar16,&local_f8);
        if (local_160 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_160 + 1;
          lVar16 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
            (**(code **)*local_160)(local_160);
            LOCK();
            piVar1 = (int *)((longlong)local_160 + 0xc);
            iVar18 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar18 == 1) {
              (**(code **)(*local_160 + 8))(local_160,1);
            }
          }
        }
      }
    }
    local_e8 = DAT_1469eb218;
    local_e0 = DAT_1469eb220;
    if (DAT_1469eb220 != 0) {
      LOCK();
      *(int *)(DAT_1469eb220 + 8) = *(int *)(DAT_1469eb220 + 8) + 1;
      UNLOCK();
    }
    FUN_14185a760(param_1[0xe],&local_e8);
    lVar16 = DAT_1469f4590;
    cVar8 = *(char *)((longlong)param_1 + 0xcc);
    cVar3 = *(char *)((longlong)param_1 + 0xce);
    if (param_1[10] != 0) {
      cVar9 = (**(code **)(*param_1 + 0x60))(param_1);
      if (cVar9 != '\0') {
        local_d0 = param_1 + -2;
        local_d8 = lVar16;
        plStack_c0 = &local_d8;
        local_c8 = &LAB_14200fc40;
        local_98 = 0x4200fc40;
        uStack_94 = 1;
        uStack_90 = plStack_c0;
        FUN_14189a880(lVar16,&local_98,0);
      }
    }
    while (DAT_1468c217e == '\0') {
      if ((cVar3 == '\0') || (*(char *)((longlong)param_1 + 0xa1) != '\0')) {
        if (*(char *)((longlong)param_1 + 0xa1) == '\0') {
          if (!bVar6) {
            LOCK();
            bVar20 = (int)param_1[0x13] == 0;
            if (bVar20) {
              *(int *)(param_1 + 0x13) = 0;
            }
            UNLOCK();
            if ((bVar20) && (cVar8 == '\0')) goto LAB_142015cb5;
            break;
          }
        }
        else if (!bVar6) break;
        QueryPerformanceCounter(&local_118);
        if ((double)*(float *)(param_1 + 0x19) <=
            ((double)local_118.QuadPart * DAT_1468b02f8 + 16777216.0) - (double)param_1[0x27])
        break;
      }
LAB_142015cb5:
      if (((longlong *)param_1[4] != (longlong *)0x0) &&
         (*(char *)((longlong)param_1 + 0xd1) == '\x02')) {
        cVar9 = (**(code **)(*(longlong *)param_1[4] + 0x30))();
        if (cVar9 != '\0') break;
      }
      if (DAT_1469f4590 != 0) {
        if ((param_1[8] == 0) || (lVar13 = param_1[9], lVar13 == 0)) break;
        LOCK();
        iVar18 = *(int *)(lVar13 + 8);
        if (iVar18 == 0) {
          *(int *)(lVar13 + 8) = 0;
          iVar18 = 0;
        }
        UNLOCK();
        if (iVar18 < 1) break;
        FWindowsPlatformApplicationMisc::PumpMessages(CONCAT71((int7)((ulonglong)lVar13 >> 8),1));
        FSlateApplication::PollGameDeviceState(lVar16);
        FUN_14189a240(lVar16);
        fVar21 = (float)(*(double *)(lVar16 + 0x480) - *(double *)(lVar16 + 0x488));
        if (((DAT_146b17150 != (longlong *)0x0) && (param_2 != '\0')) &&
           ((char)param_1[0x1a] != '\0')) {
          (**(code **)(*DAT_146b17150 + 0x2b0))(DAT_146b17150,fVar21,0);
        }
        cVar9 = FUN_1424a3f80();
        if (cVar9 == '\0') {
          if (DAT_146ac3ac5 == '\0') {
            cVar9 = FUN_1415ad720(&DAT_1468e2448);
            if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
              DVar11 = GetCurrentThreadId();
              bVar20 = false;
              if (DVar11 == DAT_1468c21c0) goto LAB_142015dbe;
            }
            else {
LAB_142015dbe:
              bVar20 = true;
            }
            if (bVar20) {
              FBaseGraphTask::GetSmallTaskAllocator();
              QueryPerformanceCounter(&local_108);
              DAT_1464aaa90 = DAT_1464aaa90 + 1;
              FRHICommandList::BeginFrame(&DAT_146ab6e78);
              FUN_142015440(param_1 + -2,fVar21);
              QueryPerformanceCounter(&local_110);
              DAT_146ac3af4 = DAT_146ac3af4 + (local_110.s.LowPart - local_108._0_4_);
              goto LAB_142015faa;
            }
          }
          pDVar12 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
          plVar15 = TlsGetValue(*pDVar12);
          if (plVar15 == (longlong *)0x0) {
            plVar15 = (longlong *)operator_new(0x18);
            if (plVar15 == (longlong *)0x0) {
              plVar15 = (longlong *)0x0;
            }
            else {
              *plVar15 = 0;
              plVar15[1] = 0;
              *(undefined4 *)(plVar15 + 2) = 0;
            }
            TlsSetValue(*pDVar12,plVar15);
          }
          plVar19 = (longlong *)plVar15[1];
          if (plVar19 == (longlong *)0x0) {
            if (*plVar15 == 0) {
              lVar13 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar12 + 2);
              plVar15[1] = lVar13;
              if (lVar13 == 0) {
                puVar14 = (undefined8 *)FMemory::Malloc(0x2000,0);
                plVar15[1] = (longlong)puVar14;
                lVar13 = 0x1f;
                do {
                  puVar2 = puVar14 + 0x20;
                  *puVar14 = puVar2;
                  lVar13 = lVar13 + -1;
                  puVar14 = puVar2;
                } while (lVar13 != 0);
                *puVar2 = 0;
              }
            }
            else {
              plVar15[1] = *plVar15;
              *plVar15 = 0;
            }
            plVar19 = (longlong *)plVar15[1];
            iVar18 = 0x20;
            *(undefined4 *)(plVar15 + 2) = 0x20;
          }
          else {
            iVar18 = (int)plVar15[2];
          }
          plVar15[1] = *plVar19;
          *(int *)(plVar15 + 2) = iVar18 + -1;
          *plVar19 = (longlong)&PTR_FUN_143f3edd8;
          *(undefined4 *)(plVar19 + 1) = 0xff;
          *(undefined4 *)((longlong)plVar19 + 0xc) = 1;
          *plVar19 = (longlong)&PTR_FUN_144f65af0;
          *(undefined1 *)(plVar19 + 4) = 0;
          plVar19[5] = 0;
          local_b0 = 0;
          local_b8 = 0;
          *(float *)(plVar19 + 3) = fVar21;
          plVar19[2] = (longlong)(param_1 + -2);
          lVar13 = plVar19[5];
          piVar1 = (int *)(lVar13 + 0x48);
          if (lVar13 != 0) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          local_128 = lVar13;
          FUN_1409421c0(plVar19,0,0xff,1);
          if (lVar13 != 0) {
            LOCK();
            iVar18 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar18 == 1) {
              FGraphEvent::Recycle(local_128);
            }
          }
        }
        else {
          FUN_1415e1500();
          FUN_142498030(2);
          FUN_142015440(DAT_146acc600,fVar21);
        }
LAB_142015faa:
        FUN_1418c5190(lVar16);
        (**(code **)(**(longlong **)(lVar16 + 0x18) + 200))();
        cVar9 = FUN_1424a3f80();
        if (cVar9 == '\0') {
          if (DAT_146ac3ac6 == '\0') {
LAB_142016052:
            if (DAT_146ac3ac5 == '\0') {
              cVar9 = FUN_1415ad720(&DAT_1468e2448);
              if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
                DVar11 = GetCurrentThreadId();
                bVar20 = false;
                if (DVar11 == DAT_1468c21c0) goto LAB_142016086;
              }
              else {
LAB_142016086:
                bVar20 = true;
              }
              if (bVar20) goto LAB_142015fee;
            }
            plVar15 = (longlong *)FUN_1420103e0(local_88,0,0xff);
            lVar13 = *plVar15;
            lVar7 = plVar15[2];
            lVar4 = plVar15[1];
            lVar5 = *(longlong *)(lVar13 + 0x18);
            piVar1 = (int *)(lVar5 + 0x48);
            if (lVar5 != 0) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            local_120 = lVar5;
            FUN_140445370(lVar13,lVar4,(int)lVar7,1);
            if (lVar5 != 0) {
              LOCK();
              iVar18 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar18 == 1) {
                FGraphEvent::Recycle(local_120);
              }
            }
          }
          else {
            cVar9 = IsInRenderingThread();
            if (cVar9 == '\0') goto LAB_142016052;
LAB_142015fee:
            FBaseGraphTask::GetSmallTaskAllocator();
            FRHICommandList::EndFrame(&DAT_146ab6e78);
            if (DAT_146ab6e8c != 0) {
              FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
            }
            FUN_141ed93a0(&DAT_146ab6e78);
            FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
            FRHICommandListBase::WaitForTasks(&DAT_146ab6e78);
            FUN_141ec65b0();
            FUN_141ec6070(0);
          }
        }
        else {
          FUN_14249c9f0(2);
        }
        FUN_141ee24f0(0);
      }
    }
    LOCK();
    *(undefined4 *)((longlong)param_1 + 0x9c) = 1;
    UNLOCK();
    *(undefined1 *)(param_1 + 0x14) = 0;
    if ((DAT_146b17150 != (longlong *)0x0) && ((longlong *)DAT_146b17150[0x157] != (longlong *)0x0))
    {
      lVar16 = (**(code **)(*(longlong *)DAT_146b17150[0x157] + 0x80))();
      if ((lVar16 != 0) && (param_1[0x12] == 0)) {
        local_100 = 0;
        IStereoLayers::SetSplashScreenMovie(lVar16,&local_100);
      }
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x13) = 1;
    UNLOCK();
    AK::MemoryMgr::StartProfileThreadUsage(5);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146acc62c) {
      _Init_thread_header(&DAT_146acc62c);
      if (DAT_146acc62c == -1) {
        uVar17 = FCommandLine::Get();
        DAT_146acc628 = FParse::Param(uVar17,L"RTFlushMax");
        _Init_thread_footer(&DAT_146acc62c);
      }
    }
    FUN_141ee24f0(DAT_146acc628);
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[4] + 8))();
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[4] + 0x38))();
      }
    }
    local_148 = (longlong *)0x0;
    local_158 = 0;
    plStack_150 = (longlong *)0x0;
    local_140 = 0;
    local_138 = 0xbf800000;
    local_134 = 0x101;
    local_12c = 0;
    FUN_14200f300(param_1 + 0x15,&local_158);
    plVar19 = local_148;
    plVar15 = local_148;
    for (iVar18 = (int)local_140; iVar18 != 0; iVar18 = iVar18 + -1) {
      if (*plVar15 != 0) {
        FMemory::Free();
      }
      plVar15 = plVar15 + 2;
    }
    if (plVar19 != (longlong *)0x0) {
      FMemory::Free(plVar19);
    }
    plVar15 = plStack_150;
    if (plStack_150 != (longlong *)0x0) {
      LOCK();
      plVar19 = plStack_150 + 1;
      lVar16 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*plStack_150)(plStack_150);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*plStack_150 + 8))(plStack_150,1);
        }
      }
    }
    uVar17 = (**(code **)(*param_1 + 0x90))(param_1);
    TBaseMulticastDelegate<void>::Broadcast(uVar17);
  }
  return;
}



// FUNCTION 142016370 FUN_142016370 body=55 status=ok
// SIG undefined FUN_142016370(void)

undefined8 FUN_142016370(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0xcc) != '\0') {
    return 1;
  }
  if (((*(char *)(param_1 + 0xd1) == '\x02') && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0))
     && (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1420163b0 FUN_1420163b0 body=47 status=ok
// SIG undefined FUN_1420163b0(void)

longlong FUN_1420163b0(void)

{
  if (DAT_146acc6c0 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146acc6c0,&PTR_s__Script_MoviePlayer_144f65fa0);
  }
  return DAT_146acc6c0;
}



// FUNCTION 1420163e0 FUN_1420163e0 body=151 status=ok
// SIG undefined FUN_1420163e0(void)

longlong FUN_1420163e0(void)

{
  if (DAT_146acc6d0 == 0) {
    FUN_14171ccd0(L"/Script/MoviePlayer",L"MoviePlayerSettings",&DAT_146acc6d0,FUN_140447710,0x48,
                  0x10000006,0,L"Game",&LAB_1420164a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146acc6d0;
}



// FUNCTION 1420164c0 EMoviePlaybackType_StaticEnum body=85 status=ok
// SIG undefined EMoviePlaybackType_StaticEnum(void)

void EMoviePlaybackType_StaticEnum(void)

{
  if (DAT_146acc660 == 0) {
    if (DAT_146acc6c0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146acc6c0,&PTR_s__Script_MoviePlayer_144f65fa0);
    }
    DAT_146acc660 = GetStaticEnum(FUN_142016550,DAT_146acc6c0,L"EMoviePlaybackType");
  }
  return;
}



// FUNCTION 142016520 FUN_142016520 body=47 status=ok
// SIG undefined FUN_142016520(void)

longlong FUN_142016520(void)

{
  if (DAT_146acc6c8 == 0) {
    FUN_141786440(&DAT_146acc6c8,&PTR_FUN_144f65dc0);
  }
  return DAT_146acc6c8;
}



// FUNCTION 142016550 FUN_142016550 body=47 status=ok
// SIG undefined FUN_142016550(void)

longlong FUN_142016550(void)

{
  if (DAT_146acc6b8 == 0) {
    FUN_1417866a0(&DAT_146acc6b8,&PTR_FUN_1464efa50);
  }
  return DAT_146acc6b8;
}



// FUNCTION 142016580 GetFactory body=707 status=ok
// SIG undefined GetFactory(void)

undefined8 FNetworkReplayStreaming::GetFactory(undefined8 param_1,wchar_t *param_2)

{
  void *_Src;
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  int iVar10;
  undefined1 local_res10 [8];
  wchar_t *local_28;
  undefined8 local_20;
  void *local_18;
  ulonglong local_10;
  
  local_20 = 0x1b;
  local_28 = (wchar_t *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"NullNetworkReplayStreaming",0x36);
  if (param_2 == (wchar_t *)0x0) {
    FConfigCacheIni::GetString
              (DAT_1468b6148,L"NetworkReplayStreaming",L"DefaultFactoryName",&local_28,
               &DAT_1468e2360);
  }
  else if (local_28 != param_2) {
    uVar6 = 0;
    if (*param_2 != L'\0') {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (param_2[lVar9] != L'\0');
      uVar6 = (int)lVar9 + 1;
    }
    uVar5 = local_20._4_4_;
    local_20 = (ulonglong)local_20._4_4_ << 0x20;
    uVar7 = 0;
    if (uVar5 != uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28,uVar6);
      uVar5 = local_20._4_4_;
      uVar7 = (uint)local_20;
    }
    local_20 = CONCAT44(local_20._4_4_,uVar6 + uVar7);
    if ((int)uVar5 < (int)(uVar6 + uVar7)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28);
    }
    if (uVar6 != 0) {
      ::_guard_xfg_dispatch_icall_nop(local_28,param_2,(longlong)(int)uVar6 * 2);
    }
  }
  local_18 = (void *)0x0;
  local_10 = 0;
  uVar2 = FCommandLine::Get();
  cVar1 = FParse::Value(uVar2,L"-REPLAYSTREAMER=",&local_18,1);
  _Src = local_18;
  if (cVar1 != '\0') {
    lVar9 = (longlong)(int)local_10;
    local_20 = CONCAT44(local_20._4_4_,(int)local_10);
    if (((int)local_10 == 0) && (local_20._4_4_ == 0)) {
      local_20 = local_10 & 0xffffffff;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_10 & 0xffffffff);
      ::_guard_xfg_dispatch_icall_nop(local_28,_Src,lVar9 * 2);
    }
  }
  pwVar8 = L"";
  if ((uint)local_20 != 0) {
    pwVar8 = local_28;
  }
  puVar3 = (undefined8 *)FName::FName(local_res10,pwVar8,1);
  uVar2 = FUN_14168dc80();
  cVar1 = FModuleManager::IsModuleLoaded(uVar2,*puVar3);
  if (cVar1 == '\0') {
    pwVar8 = L"";
    if ((uint)local_20 != 0) {
      pwVar8 = local_28;
    }
    puVar3 = (undefined8 *)FName::FName(local_res10,pwVar8,1);
    uVar2 = FUN_14168dc80();
    FUN_141690010(uVar2,*puVar3);
    pwVar8 = L"";
    if ((uint)local_20 != 0) {
      pwVar8 = local_28;
    }
    puVar3 = (undefined8 *)FName::FName(local_res10,pwVar8,1);
    uVar2 = FUN_14168dc80();
    cVar1 = FModuleManager::IsModuleLoaded(uVar2,*puVar3);
    if ((cVar1 == '\0') && (local_28 != L"NullNetworkReplayStreaming")) {
      uVar6 = local_20._4_4_;
      local_20 = (ulonglong)local_20._4_4_ << 0x20;
      iVar10 = 0;
      if (uVar6 != 0x1b) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28,0x1b);
        uVar6 = local_20._4_4_;
        iVar10 = (uint)local_20;
      }
      local_20 = CONCAT44(local_20._4_4_,iVar10 + 0x1b);
      if ((int)uVar6 < iVar10 + 0x1b) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar10);
      }
      builtin_wcsncpy(local_28,L"NullNetworkReplayStreaming",0x1b);
    }
  }
  FUN_14168dc80();
  pwVar8 = L"";
  if ((uint)local_20 != 0) {
    pwVar8 = local_28;
  }
  puVar3 = (undefined8 *)FName::FName(local_res10,pwVar8,1);
  uVar2 = *puVar3;
  uVar4 = FUN_14168dc80();
  uVar2 = FUN_141690010(uVar4,uVar2);
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_28 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 142016850 FUN_142016850 body=98 status=ok
// SIG undefined FUN_142016850(void)

undefined8 FUN_142016850(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  
  lVar1 = DAT_146acc6f0;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      lVar4 = 0x10;
      goto LAB_142016898;
    }
  }
  lVar4 = 0;
LAB_142016898:
  FString::FString(param_2,lVar4 + lVar1);
  return param_2;
}



// FUNCTION 1420168c0 GetMaxNumberOfAutomaticReplaysExtern body=73 status=ok
// SIG undefined GetMaxNumberOfAutomaticReplaysExtern(void)

int FNetworkReplayStreaming::GetMaxNumberOfAutomaticReplaysExtern(void)

{
  int local_res10 [6];
  
  local_res10[0] = 10;
  FConfigCacheIni::GetInt
            (DAT_1468b6148,L"NetworkReplayStreaming",L"MaxNumberAutomaticReplays",local_res10,
             &DAT_1468e2360);
  if (local_res10[0] < 0) {
    local_res10[0] = 10;
  }
  return local_res10[0];
}



// FUNCTION 142016910 GetMaxNumberOfAutomaticReplays body=73 status=ok
// SIG undefined GetMaxNumberOfAutomaticReplays(void)

int FNetworkReplayStreaming::GetMaxNumberOfAutomaticReplays(void)

{
  int local_res8 [8];
  
  local_res8[0] = 10;
  FConfigCacheIni::GetInt
            (DAT_1468b6148,L"NetworkReplayStreaming",L"MaxNumberAutomaticReplays",local_res8,
             &DAT_1468e2360);
  if (local_res8[0] < 0) {
    local_res8[0] = 10;
  }
  return local_res8[0];
}



// FUNCTION 142016960 FUN_142016960 body=39 status=ok
// SIG undefined FUN_142016960(void)

void FUN_142016960(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144f65ff0;
    return;
  }
  return;
}



// FUNCTION 142016990 FUN_142016990 body=52 status=ok
// SIG undefined FUN_142016990(void)

undefined8 FUN_142016990(undefined8 param_1,ulonglong param_2)

{
  FUN_142062b30();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1420169d0 FUN_1420169d0 body=58 status=ok
// SIG undefined FUN_1420169d0(void)

void FUN_1420169d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144f709c0;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_144f70a08;
  }
  return;
}



// FUNCTION 142016a20 FUN_142016a20 body=20 status=ok
// SIG undefined FUN_142016a20(void)

undefined1 FUN_142016a20(longlong param_1)

{
  FUN_14201f1a0(param_1 + 8);
  return 1;
}



// FUNCTION 142016a40 FUN_142016a40 body=88 status=ok
// SIG undefined FUN_142016a40(void)

undefined8 * FUN_142016a40(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x60,param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_1444f81f0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_2);
  }
  *param_1 = UE4Function_Private::
             TFunctionRefCaller<<lambda_50573a4081bc06268289253819177437>,void___cdecl(void)>::Call;
  return param_1;
}



// FUNCTION 142016aa0 FUN_142016aa0 body=166 status=ok
// SIG undefined FUN_142016aa0(void)

undefined8 * FUN_142016aa0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x30,param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144f71c60;
    puVar1[1] = *param_2;
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)((longlong)param_2 + 0xc) = 0xffffffff;
    puVar1[3] = param_2[2];
    puVar1[4] = 0;
    puVar1[4] = param_2[3];
    param_2[3] = 0;
    *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)puVar1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x24);
    param_2[4] = 0;
  }
  *param_1 = &LAB_14202c8a0;
  return param_1;
}



// FUNCTION 142016b50 FUN_142016b50 body=147 status=ok
// SIG undefined FUN_142016b50(void)

undefined8 * FUN_142016b50(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x38,param_1 + 2);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144f71b40;
    puVar2[1] = *param_2;
    FString::FString(puVar2 + 2,param_2 + 1);
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)(param_2 + 3) = 0xffffffff;
    puVar2[5] = param_2[4];
    lVar1 = param_2[5];
    puVar2[6] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  *param_1 = &LAB_14202c910;
  return param_1;
}



// FUNCTION 142016bf0 FUN_142016bf0 body=69 status=ok
// SIG undefined FUN_142016bf0(void)

undefined8 * FUN_142016bf0(undefined8 *param_1,undefined8 *param_2)

{
  if ((RefCountImpl *)*param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef((RefCountImpl *)*param_2);
    *param_1 = *param_2;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 142016c40 FUN_142016c40 body=270 status=ok
// SIG undefined FUN_142016c40(void)

undefined8 * FUN_142016c40(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x81);
  puVar6 = (undefined8 *)param_1[0x80];
  if ((undefined8 *)param_1[0x80] == (undefined8 *)0x0) {
    puVar6 = param_1;
  }
  if (iVar9 != 0) {
    plVar7 = puVar6 + 1;
    do {
      plVar4 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 2;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar9 = (int)param_2[1];
  lVar8 = *param_2;
  *(int *)(param_1 + 0x81) = iVar9;
  if ((iVar9 == 0) && (*(int *)((longlong)param_1 + 0x40c) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0x40c) = 0;
  }
  else {
    FUN_14204f9f0(param_1,iVar9);
    puVar6 = (undefined8 *)param_1[0x80];
    if ((undefined8 *)param_1[0x80] == (undefined8 *)0x0) {
      puVar6 = param_1;
    }
    if (iVar9 != 0) {
      lVar8 = lVar8 - (longlong)puVar6;
      do {
        *puVar6 = *(undefined8 *)(lVar8 + (longlong)puVar6);
        lVar5 = *(longlong *)(lVar8 + 8 + (longlong)puVar6);
        puVar6[1] = lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
        puVar6 = puVar6 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  return param_1;
}



// FUNCTION 142016d50 FUN_142016d50 body=192 status=ok
// SIG undefined FUN_142016d50(void)

undefined8 * FUN_142016d50(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res10 [8];
  
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = param_3;
    *plVar3 = (longlong)&PTR_GetPoolName_144f711f0;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_144f71238;
  }
  *param_2 = 0;
  if (plVar3 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,1);
    puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
    iVar1 = (int)param_1[1];
    uVar2 = *puVar5;
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    *param_2 = uVar2;
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 2;
  }
  return param_2;
}



// FUNCTION 142016e10 FUN_142016e10 body=722 status=ok
// SIG undefined FUN_142016e10(void)

int * FUN_142016e10(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  longlong *_Src;
  int iVar13;
  void *_Dst;
  bool local_res8;
  
  iVar10 = 1;
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar4 = *(int *)((longlong)iVar8 * 0x20 + 4 + *param_1);
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar4 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar8 & 0x1f);
  plVar7 = (longlong *)param_3[1];
  _Src = (longlong *)((longlong)iVar8 * 0x20 + *param_1);
  *_Src = *(longlong *)*param_3;
  _Src[1] = *plVar7;
  lVar5 = plVar7[1];
  _Src[2] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar12 != 1) {
    lVar5 = *_Src;
    iVar8 = iVar13;
    if (uVar12 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar7 +
                      ((longlong)((int)((ulonglong)lVar5 >> 0x20) * 0x17 + (int)lVar5) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar9 != -1) {
        do {
          iVar8 = iVar9;
          if (*(longlong *)((longlong)iVar9 * 0x20 + *param_1) == lVar5) break;
          iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + *param_1);
          iVar8 = iVar13;
        } while (iVar9 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar8 * 0x20 + *param_1);
      plVar7 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar8;
      goto LAB_1420170be;
    }
  }
  if (3 < uVar12) {
    uVar6 = (uVar12 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar13 = 0x20;
    if (uVar6 != 0) {
      iVar13 = 0x1f - iVar10;
    }
    uVar6 = (uVar12 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar6 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x1f' - (char)iVar10;
    }
    iVar10 = 1 << (~(byte)((iVar13 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    uVar12 = (int)((ulonglong)*_Src >> 0x20) * 0x17 + (int)*_Src & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar12;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    FUN_1407f8e20(param_1);
  }
LAB_1420170be:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1420170f0 FUN_1420170f0 body=652 status=ok
// SIG undefined FUN_1420170f0(void)

int * FUN_1420170f0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong *_Src;
  void *_Dst;
  bool bVar12;
  
  iVar9 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar7 = *(int *)((longlong)iVar11 * 0x20 + 4 + *param_1);
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar7 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar3 = *puVar3 | 1 << ((byte)iVar11 & 0x1f);
  plVar6 = (longlong *)param_3[1];
  _Src = (longlong *)((longlong)iVar11 * 0x20 + *param_1);
  *_Src = *(longlong *)*param_3;
  _Src[1] = *plVar6;
  lVar4 = plVar6[1];
  _Src[2] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  bVar12 = false;
  iVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar11 != 1) {
    lVar4 = *_Src;
    iVar8 = iVar9;
    if (iVar11 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar4 >> 0x20) * 0x17 + (int)lVar4) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar7 != -1) {
        do {
          iVar8 = iVar7;
          if (*(longlong *)((longlong)iVar7 * 0x20 + *param_1) == lVar4) break;
          iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + *param_1);
          iVar8 = iVar9;
        } while (iVar7 != -1);
      }
    }
    bVar12 = iVar8 != -1;
    if (bVar12) {
      _Dst = (void *)((longlong)iVar8 * 0x20 + *param_1);
      plVar6 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar8;
      goto LAB_142017354;
    }
  }
  cVar5 = FUN_1407f5a80(param_1,iVar11,0);
  if (cVar5 == '\0') {
    uVar10 = (int)((ulonglong)*_Src >> 0x20) * 0x17 + (int)*_Src & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar10;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_142017354:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 142017380 FUN_142017380 body=811 status=ok
// SIG undefined FUN_142017380(void)

int * FUN_142017380(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  uint uVar16;
  bool local_res8;
  
  iVar14 = 1;
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar12 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar15 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar15 == (longlong *)0x0) {
    plVar15 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar15 +
                   (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar11 & 0x1f);
  plVar15 = (longlong *)(*param_1 + (longlong)iVar11 * 0x28);
  plVar9 = (longlong *)*param_3;
  plVar4 = (longlong *)param_3[1];
  *plVar15 = *plVar9;
  plVar15[1] = plVar9[1];
  lVar5 = plVar9[2];
  plVar15[2] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar15[3] = *plVar4;
  *(undefined4 *)(plVar15 + 4) = 0xffffffff;
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar16 != 1) {
    iVar11 = iVar13;
    if (uVar16 != 0) {
      lVar5 = *plVar15;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar12 = *(int *)((longlong)plVar9 +
                       ((longlong)((int)((ulonglong)lVar5 >> 0x20) + (int)lVar5) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar12 != -1) {
        do {
          iVar11 = iVar12;
          if (*(longlong *)(*param_1 + (longlong)iVar12 * 0x28) == lVar5) break;
          iVar12 = *(int *)(*param_1 + 0x20 + (longlong)iVar12 * 0x28);
          iVar11 = iVar13;
        } while (iVar12 != -1);
      }
    }
    local_res8 = iVar11 != -1;
    if (local_res8) {
      lVar5 = *param_1;
      plVar9 = *(longlong **)(lVar5 + 0x10 + (longlong)iVar11 * 0x28);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar9 + 1;
        lVar7 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar5 + (longlong)iVar11 * 0x28),plVar15,0x20);
      iVar14 = *param_2;
      bVar6 = (byte)iVar14 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar14;
      }
      lVar5 = *param_1;
      *(undefined4 *)(lVar5 + (longlong)iVar14 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      *(int *)(lVar5 + 4 + (longlong)iVar14 * 0x28) = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar14;
      plVar15 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar15 == (longlong *)0x0) {
        plVar15 = param_1 + 2;
      }
      puVar2 = (uint *)((longlong)plVar15 +
                       (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << bVar6 | 1U >> 0x20 - bVar6);
      goto LAB_142017682;
    }
  }
  if (3 < uVar16) {
    uVar8 = (uVar16 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar14 = 0x20;
    cVar10 = '\0';
    if (uVar8 != 0) {
      iVar14 = 0x1f - iVar13;
    }
    uVar8 = (uVar16 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar8 != 0) {
      cVar10 = '\x1f' - (char)iVar13;
    }
    iVar14 = 1 << (~(byte)((iVar14 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar16 < 1) || (((int)param_1[9] != 0 && (iVar14 <= (int)param_1[9])))) {
    uVar16 = (int)((ulonglong)*plVar15 >> 0x20) + (int)*plVar15 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar15 + 0x24) = uVar16;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(plVar15 + 4) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4);
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(int *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar14;
    TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142017682:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1420176b0 GenerateValueArray<FDefaultAllocator> body=424 status=ok
// SIG undefined GenerateValueArray<FDefaultAllocator>(void)

void TMapBase<unsigned_int,TSharedPtr<OculusHMD::FLayer,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<OculusHMD::FLayer,1>,0>_>
     ::GenerateValueArray<FDefaultAllocator>(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  undefined8 uStack_50;
  uint *local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  longlong *local_30;
  undefined8 uStack_28;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  
  TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty
            (param_2,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  iVar1 = (int)param_1[5];
  local_48 = (uint *)(param_1 + 2);
  uStack_74 = 1;
  local_78 = 0;
  iStack_60 = 0;
  iStack_64 = 0;
  if (iVar1 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = local_48;
    }
    uVar2 = *puVar7;
    local_78 = 0;
    iStack_60 = 0;
    while (uVar2 == 0) {
      lVar5 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar6 = local_78 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar6;
      if (bVar3) goto LAB_142017780;
      uVar2 = puVar7[lVar5 + 1];
    }
    uStack_74 = -uVar2 & uVar2;
    iVar6 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_64 = (iStack_60 - iVar6) + 0x1f;
    if (iVar1 < iStack_64) {
LAB_142017780:
      iStack_64 = iVar1;
    }
  }
  uStack_50 = CONCAT44(uStack_74,local_78);
  uStack_18 = 0xffffffff;
  iStack_14 = iStack_64;
  iStack_10 = iStack_60;
  uStack_40 = 0xffffffff;
  iStack_3c = iStack_64;
  local_38 = iStack_60;
  local_30 = param_1;
  uStack_28 = uStack_50;
  puStack_20 = local_48;
  if (iStack_64 < iVar1) {
    do {
      iVar6 = iStack_3c;
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
      }
      puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
      if (puVar4 != (undefined8 *)0x0) {
        lVar5 = *param_1;
        *puVar4 = *(undefined8 *)((longlong)iVar6 * 0x20 + 8 + lVar5);
        lVar5 = *(longlong *)((longlong)iVar6 * 0x20 + 0x10 + lVar5);
        puVar4[1] = lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
      }
      uStack_40 = uStack_40 & ~uStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  return;
}



// FUNCTION 142017860 FUN_142017860 body=107 status=ok
// SIG undefined FUN_142017860(void)

undefined8 * FUN_142017860(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144f71a40;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    InitializeSRWLock((PSRWLOCK)(puVar1 + 2));
    puVar1[3] = 0;
    puVar1[4] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420178d0 FUN_1420178d0 body=100 status=ok
// SIG undefined FUN_1420178d0(void)

undefined8 * FUN_1420178d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_144f71a50;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142017940 FUN_142017940 body=271 status=ok
// SIG undefined FUN_142017940(void)

undefined8 * FUN_142017940(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_38;
  undefined1 local_30 [24];
  
  puVar1 = (undefined8 *)operator_new(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144f71978;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[2] = &PTR_FUN_144f70cf8;
    puVar1[5] = 0;
    puVar1[5] = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar1 + 0x34) = *(undefined4 *)(param_1 + 0x24);
    *(undefined8 *)(param_1 + 0x20) = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0;
    if (0x7fffffff < *(uint *)((longlong)puVar1 + 0x5c)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 10,0);
    }
    if ((undefined2 *)puVar1[10] != (undefined2 *)0x0) {
      *(undefined2 *)puVar1[10] = 0;
    }
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)((longlong)puVar1 + 0x3c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(param_1 + 0x30);
    local_38 = *(undefined8 *)(param_1 + 0x38);
    FString::FString(local_30,param_1 + 0x40);
    FSoftObjectPath::operator=(puVar1 + 9,&local_38);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142017a50 FUN_142017a50 body=713 status=ok
// SIG undefined FUN_142017a50(void)

int FUN_142017a50(longlong *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  int local_res20;
  
  iVar1 = (int)param_1[1];
  lVar6 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar13 = 0;
  local_res20 = 0;
  cVar2 = FUN_142020440(param_2,*param_1);
  bVar16 = cVar2 == '\0';
  lVar15 = 0;
  iVar11 = 0;
  do {
    iVar12 = iVar11 + 1;
    lVar15 = lVar15 + 1;
    if (lVar15 < lVar6) {
      lVar14 = lVar15 * 0xa0;
      do {
        uVar4 = 0;
        lVar9 = *param_1 + lVar14;
        if (*(int *)(lVar9 + 0x90) != 0) {
          plVar8 = *(longlong **)(lVar9 + 0x80);
          if (*(longlong **)(lVar9 + 0x80) == (longlong *)0x0) {
            plVar8 = (longlong *)(lVar9 + 0x60);
          }
          if (plVar8 != (longlong *)0x0) {
            uVar4 = (**(code **)(*plVar8 + 8))();
          }
        }
        cVar2 = (**(code **)(lVar9 + 0x50))(uVar4);
        if (cVar2 == '\0') {
          LOCK();
          cVar2 = *(char *)(*param_2 + 0x30);
          if (cVar2 == '\0') {
            *(char *)(*param_2 + 0x30) = '\0';
            cVar2 = '\0';
          }
          UNLOCK();
          if ('\x05' < cVar2) goto LAB_142017b52;
          bVar3 = true;
        }
        else {
LAB_142017b52:
          plVar8 = (longlong *)param_2[1];
          iVar13 = (int)plVar8[1];
          *(int *)(plVar8 + 1) = iVar13 + 1;
          if (*(int *)((longlong)plVar8 + 0xc) < iVar13 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::
            ResizeGrow(plVar8,iVar13);
          }
          lVar7 = (longlong)iVar13 * 0xa0 + *plVar8;
          TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(lVar7,lVar9);
          TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
                    (lVar7 + 0x50,(undefined8 *)(lVar9 + 0x50));
          bVar3 = false;
        }
        iVar13 = local_res20;
        if (bVar16 != bVar3) break;
        iVar12 = iVar12 + 1;
        lVar15 = lVar15 + 1;
        lVar14 = lVar14 + 0xa0;
      } while (lVar15 < lVar6);
    }
    iVar10 = iVar12 - iVar11;
    if (bVar16 == false) {
      if (iVar10 != 0) {
        plVar8 = (longlong *)((longlong)iVar11 * 0xa0 + 0x80 + *param_1);
        do {
          if ((int)plVar8[2] != 0) {
            plVar5 = (longlong *)*plVar8;
            if ((longlong *)*plVar8 == (longlong *)0x0) {
              plVar5 = plVar8 + -4;
            }
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x10))(plVar5,0);
            }
          }
          if (*plVar8 != 0) {
            FMemory::Free();
          }
          if ((int)plVar8[-8] != 0) {
            plVar5 = (longlong *)plVar8[-10];
            if ((longlong *)plVar8[-10] == (longlong *)0x0) {
              plVar5 = plVar8 + -0xe;
            }
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x10))(plVar5,0);
            }
          }
          if (plVar8[-10] != 0) {
            FMemory::Free();
          }
          plVar8 = plVar8 + 0x14;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
    else {
      if (iVar13 != iVar11) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar13 * 0xa0 + *param_1),
                   (void *)((longlong)iVar11 * 0xa0 + *param_1),(longlong)iVar10 * 0xa0);
      }
      iVar13 = iVar13 + iVar10;
      local_res20 = iVar13;
    }
    bVar16 = (bool)(bVar16 ^ 1);
    iVar11 = iVar12;
    if (lVar6 <= lVar15) {
      *(int *)(param_1 + 1) = iVar13;
      return iVar1 - iVar13;
    }
  } while( true );
}



// FUNCTION 142017d20 FUN_142017d20 body=591 status=ok
// SIG undefined FUN_142017d20(void)

int FUN_142017d20(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  DWORD DVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  bool bVar20;
  bool bVar21;
  uint local_res18;
  
  iVar4 = (int)param_1[1];
  lVar14 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  uVar12 = 0;
  local_res18 = 0;
  cVar8 = FUN_1420239d0(param_2,*param_1);
  bVar20 = cVar8 == '\0';
  uVar17 = uVar12;
  uVar19 = uVar12;
  do {
    uVar18 = (uint)uVar19;
    uVar19 = (ulonglong)(uVar18 + 1);
    uVar12 = uVar12 + 1;
    uVar16 = (uint)uVar17;
    if ((longlong)uVar12 < lVar14) {
      lVar15 = uVar12 * 0x10;
      do {
        lVar7 = DAT_146acca98;
        lVar5 = *(longlong *)(lVar15 + *param_1);
        if (DAT_1468c217e == '\0') {
          cVar8 = FUN_1415ad720(&DAT_1468e2448);
          if (((cVar8 == '\0') && (DAT_1468c21ae != '\0')) &&
             (DVar9 = GetCurrentThreadId(), DVar9 != DAT_1468c21c0)) {
            lVar10 = 4;
          }
          else {
            lVar10 = 0;
          }
          if (((*(int *)(lVar10 + lVar7) == 0) ||
              (cVar8 = FWeakObjectPtr::IsValid(lVar5 + 0x70,0,1), cVar8 == '\0')) ||
             ((plVar11 = (longlong *)FWeakObjectPtr::Get(lVar5 + 0x70), plVar11 == (longlong *)0x0
              || (cVar8 = (**(code **)(*plVar11 + 0x488))(plVar11), cVar8 != '\0'))))
          goto LAB_142017e35;
          bVar21 = true;
        }
        else {
LAB_142017e35:
          LOCK();
          bVar21 = *(int *)(lVar5 + 0x1d8) == 0;
          if (bVar21) {
            *(int *)(lVar5 + 0x1d8) = 0;
          }
          UNLOCK();
          if (bVar21) {
            cVar8 = FRenderCommandFence::IsFenceComplete(lVar5 + 0xb0);
            if (cVar8 == '\0') {
              bVar21 = true;
            }
            else {
              LOCK();
              cVar8 = *(char *)(lVar5 + 0x30);
              if (cVar8 == '\0') {
                *(char *)(lVar5 + 0x30) = '\0';
                cVar8 = '\0';
              }
              UNLOCK();
              bVar21 = cVar8 != '\t';
            }
          }
          else {
            bVar21 = true;
          }
        }
        uVar16 = local_res18;
        if (bVar20 != bVar21) break;
        uVar19 = (ulonglong)((int)uVar19 + 1);
        uVar12 = uVar12 + 1;
        lVar15 = lVar15 + 0x10;
      } while ((longlong)uVar12 < lVar14);
    }
    iVar13 = (int)uVar19 - uVar18;
    if (bVar20 == false) {
      if (iVar13 != 0) {
        plVar11 = (longlong *)((longlong)(int)uVar18 * 0x10 + 8 + *param_1);
        do {
          plVar6 = (longlong *)*plVar11;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar6 + 1;
            lVar15 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6);
              }
            }
          }
          plVar11 = plVar11 + 2;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
    }
    else {
      if (uVar16 != uVar18) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)(int)uVar16 * 0x10 + *param_1),
                   (void *)((longlong)(int)uVar18 * 0x10 + *param_1),(longlong)iVar13 << 4);
      }
      local_res18 = uVar16 + iVar13;
    }
    uVar17 = (ulonglong)local_res18;
    bVar20 = (bool)(bVar20 ^ 1);
    if (lVar14 <= (longlong)uVar12) {
      *(uint *)(param_1 + 1) = local_res18;
      return iVar4 - local_res18;
    }
  } while( true );
}



// FUNCTION 142017f70 TFunction<void___cdecl(void)> body=185 status=ok
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
      goto LAB_142018005;
    }
  }
  puVar1 = &LAB_14202bde0;
LAB_142018005:
  *param_1 = puVar1;
  *param_2 = &LAB_14202bde0;
  return param_1;
}



// FUNCTION 142018030 TFunction<void___cdecl(void)> body=185 status=ok
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
      goto LAB_1420180c5;
    }
  }
  pcVar1 = USlateBlueprintLibrary::GetLocalSize;
LAB_1420180c5:
  *param_1 = pcVar1;
  *param_2 = USlateBlueprintLibrary::GetLocalSize;
  return param_1;
}



// FUNCTION 1420180f0 TFunction<void___cdecl(void)> body=112 status=ok
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
  *param_1 = USlateBlueprintLibrary::GetLocalSize;
  return param_1;
}



// FUNCTION 142018160 TFunction<void___cdecl(void)> body=185 status=ok
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
      goto LAB_1420181f5;
    }
  }
  puVar1 = &LAB_14202be00;
LAB_1420181f5:
  *param_1 = puVar1;
  *param_2 = &LAB_14202be00;
  return param_1;
}



// FUNCTION 142018220 TFunction<void___cdecl(void)> body=185 status=ok
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
      goto LAB_1420182b5;
    }
  }
  puVar1 = &LAB_14202be10;
LAB_1420182b5:
  *param_1 = puVar1;
  *param_2 = &LAB_14202be10;
  return param_1;
}



// FUNCTION 1420182e0 FUN_1420182e0 body=98 status=ok
// SIG undefined FUN_1420182e0(void)

undefined8 * FUN_1420182e0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_CopyToEmptyStorage_144f71a60;
  param_1[2] = *param_2;
  FString::FString(param_1 + 3,param_2 + 1);
  param_1[5] = param_2[3];
  lVar1 = param_2[4];
  param_1[6] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(param_1 + 8,param_2 + 6);
  return param_1;
}



// FUNCTION 142018350 FUN_142018350 body=212 status=ok
// SIG undefined FUN_142018350(void)

undefined8 * FUN_142018350(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = 0;
  FString::FString(param_1 + 1);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x60,param_1 + 6);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_144f71d40;
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



// FUNCTION 142018430 FUN_142018430 body=212 status=ok
// SIG undefined FUN_142018430(void)

undefined8 * FUN_142018430(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = 0;
  FString::FString(param_1 + 1);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x60,param_1 + 6);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_144f71d58;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_3);
  }
  param_1[4] = FUN_14202cdc0;
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



// FUNCTION 142018510 FUN_142018510 body=212 status=ok
// SIG undefined FUN_142018510(void)

undefined8 * FUN_142018510(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = 0;
  FString::FString(param_1 + 1);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x60,param_1 + 6);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_144f71d70;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_3);
  }
  param_1[4] = FUN_14202ce20;
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



// FUNCTION 1420185f0 FUN_1420185f0 body=212 status=ok
// SIG undefined FUN_1420185f0(void)

undefined8 * FUN_1420185f0(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = 0;
  FString::FString(param_1 + 1);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x60,param_1 + 6);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_144f71d88;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_3);
  }
  param_1[4] = FUN_14202ce80;
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



// FUNCTION 1420186d0 TFunction<void___cdecl(void)> body=112 status=ok
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
  *param_1 = &LAB_14202be10;
  return param_1;
}



// FUNCTION 142018740 TFunction<void___cdecl(void)> body=112 status=ok
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
  *param_1 = &LAB_14202bde0;
  return param_1;
}



// FUNCTION 1420187b0 TFunction<void___cdecl(void)> body=112 status=ok
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
  *param_1 = &LAB_14202be00;
  return param_1;
}



// FUNCTION 142018820 FUN_142018820 body=215 status=ok
// SIG undefined FUN_142018820(void)

undefined8 * FUN_142018820(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
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
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  uVar1 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  uVar1 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  uVar1 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar1;
  uVar1 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar1;
  uVar1 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar1;
  uVar1 = param_2[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar1;
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  *(undefined2 *)((longlong)param_1 + 0xd4) = *(undefined2 *)((longlong)param_2 + 0xd4);
  *(undefined1 *)((longlong)param_1 + 0xd6) = *(undefined1 *)((longlong)param_2 + 0xd6);
  return param_1;
}



// FUNCTION 142018900 FUN_142018900 body=75 status=ok
// SIG undefined FUN_142018900(void)

undefined8 * FUN_142018900(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_144f70cf8;
  FSoftObjectPath::ToString(param_2 + 0x10,param_1 + 3);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(param_1 + 5,param_2);
  return param_1;
}



// FUNCTION 142018950 FUN_142018950 body=362 status=ok
// SIG undefined FUN_142018950(void)

undefined8 * FUN_142018950(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [32];
  
  param_1[1] = 0;
  plVar1 = param_1 + 3;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_144f70cf8;
  param_1[4] = 0;
  *plVar1 = 0;
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
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 9) = 0;
    if ((*(int *)((longlong)param_1 + 0x4c) < 0) && (*(int *)((longlong)param_1 + 0x4c) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
    }
    if ((undefined2 *)param_1[8] != (undefined2 *)0x0) {
      *(undefined2 *)param_1[8] = 0;
    }
    *(undefined4 *)(param_1 + 6) = 0;
  }
  else {
    uVar2 = FSoftObjectPath::FSoftObjectPath(local_48,param_2);
    FSoftObjectPath::operator=(param_1 + 7,uVar2);
    FWeakObjectPtr::operator=(param_1 + 5,param_2);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    *(int *)(param_1 + 6) = DAT_1464b56f4;
  }
  FSoftObjectPath::ToString(param_1 + 7,&local_58);
  if (plVar1 == &local_58) {
    if (local_58 != 0) {
      FMemory::Free();
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = local_58;
    *(undefined4 *)(param_1 + 4) = local_50;
    *(undefined4 *)((longlong)param_1 + 0x24) = local_4c;
  }
  return param_1;
}



// FUNCTION 142018ac0 FUN_142018ac0 body=1896 status=ok
// SIG undefined FUN_142018ac0(void)

undefined8 * FUN_142018ac0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  RefCountImpl *pRVar6;
  RefCountImpl *pRVar7;
  RefCountImpl *pRVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  RefCountImpl *pRVar12;
  RefCountImpl *this;
  RefCountImpl *local_res8;
  RefCountImpl *local_res10;
  longlong *local_88;
  int local_80;
  longlong *local_78;
  int local_70;
  longlong *local_68;
  int local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_40;
  
  this = (RefCountImpl *)0x0;
  local_res8 = (RefCountImpl *)((ulonglong)local_res8 & 0xffffffff00000000);
  FUN_14201a5e0();
  *param_1 = &PTR_FUN_144f70e98;
  param_1[2] = &PTR_LAB_144f70ea0;
  cVar4 = IsInRenderingThread();
  if (cVar4 == '\0') {
    FUN_141edf270(param_1 + 2);
  }
  else {
    (**(code **)(param_1[2] + 0x28))();
  }
  *param_1 = &PTR__scalar_deleting_destructor__144f70ee0;
  param_1[2] = &PTR_LAB_144f70ee8;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x1e));
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x21));
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x24));
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x27));
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x2b),4000);
  lVar5 = operator_new(0x20);
  pRVar6 = this;
  pRVar12 = this;
  if (lVar5 != 0) {
    pRVar6 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x18);
    local_res10 = this;
    if (pRVar6 != (RefCountImpl *)0x0) {
      *(undefined8 *)(pRVar6 + 8) = 0;
      *(undefined ***)pRVar6 = &PTR_FUN_144f70a50;
      *(undefined4 *)(pRVar6 + 8) = 1;
      *(undefined ***)pRVar6 = &PTR_FUN_144f70cb8;
      *(undefined4 *)(pRVar6 + 0x10) = 0x1d;
      local_res10 = pRVar6;
    }
    pRVar6 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x18);
    local_res8 = this;
    if (pRVar6 != (RefCountImpl *)0x0) {
      *(undefined8 *)(pRVar6 + 8) = 0;
      *(undefined ***)pRVar6 = &PTR_FUN_144f70a50;
      *(undefined4 *)(pRVar6 + 8) = 1;
      *(undefined ***)pRVar6 = &PTR_FUN_144f70c90;
      *(undefined4 *)(pRVar6 + 0x10) = 0xc;
      local_res8 = pRVar6;
    }
    pRVar6 = (RefCountImpl *)FUN_1432bb6f0(lVar5,&local_res8,&local_res10);
    pRVar12 = (RefCountImpl *)0x3;
  }
  puVar1 = param_1 + 0x30;
  *puVar1 = pRVar6;
  pRVar7 = (RefCountImpl *)operator_new(0x18);
  pRVar8 = this;
  if (pRVar7 != (RefCountImpl *)0x0) {
    *(undefined4 *)(pRVar7 + 8) = 1;
    *(undefined ***)pRVar7 = &PTR_FUN_143f3f2d0;
    *(undefined4 *)(pRVar7 + 0xc) = 1;
    *(RefCountImpl **)(pRVar7 + 0x10) = pRVar6;
    pRVar8 = pRVar7;
  }
  param_1[0x31] = pRVar8;
  SharedPointerInternals::EnableSharedFromThis(puVar1,pRVar6,pRVar6);
  if ((((ulonglong)pRVar12 & 2) != 0) &&
     (pRVar12 = (RefCountImpl *)(ulonglong)((uint)pRVar12 & 0xfffffffd),
     local_res8 != (RefCountImpl *)0x0)) {
    Scaleform::RefCountImpl::Release(local_res8);
  }
  if ((((ulonglong)pRVar12 & 1) != 0) && (local_res10 != (RefCountImpl *)0x0)) {
    Scaleform::RefCountImpl::Release(local_res10);
  }
  *(undefined1 *)(param_1 + 0x32) = 0;
  plVar2 = param_1 + 0x35;
  *plVar2 = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0x3f733333;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x5a));
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  local_58 = FUN_142055b00;
  uStack_50 = 0;
  local_88 = (longlong *)0x0;
  plVar9 = (longlong *)FMemory::Realloc(0,0x30);
  local_80 = 3;
  local_88 = plVar9;
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_GetPoolName_143fc2050;
    plVar9[1] = (longlong)param_1;
    *(undefined4 *)(plVar9 + 2) = (undefined4)local_58;
    *(undefined4 *)((longlong)plVar9 + 0x14) = local_58._4_4_;
    *(undefined4 *)(plVar9 + 3) = uStack_50;
    *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_4c;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar9[5] = lVar5;
    *plVar9 = (longlong)&PTR_GetPoolName_143fc2098;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  uVar10 = (**(code **)(*DAT_1468b1f88 + 0x80))
                     (DAT_1468b1f88,L"Scaleform.GFxSetTimeBudget",
                      L"Adjusts the timeslice given to GFx each frame.",&local_88,0);
  param_1[0x5e] = uVar10;
  param_1[0x5d] = &PTR_FUN_143f3ecf0;
  if (local_80 == 0) {
LAB_142018f03:
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
  }
  else if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x28))(local_88,0);
    if (local_88 != (longlong *)0x0) {
      local_88 = (longlong *)FMemory::Realloc(local_88,0,0);
    }
    local_80 = 0;
    goto LAB_142018f03;
  }
  uStack_50 = 0;
  local_78 = (longlong *)0x0;
  local_58 = FUN_142055d20;
  plVar9 = (longlong *)FMemory::Realloc(0,0x30);
  local_70 = 3;
  local_78 = plVar9;
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)IDelegateInstance::vftable;
    *plVar9 = (longlong)&PTR_GetPoolName_143fc2050;
    *(undefined4 *)(plVar9 + 2) = (undefined4)local_58;
    *(undefined4 *)((longlong)plVar9 + 0x14) = local_58._4_4_;
    *(undefined4 *)(plVar9 + 3) = uStack_50;
    *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_4c;
    plVar9[1] = (longlong)param_1;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar9[5] = lVar5;
    *plVar9 = (longlong)&PTR_GetPoolName_143fc2098;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  uVar10 = (**(code **)(*DAT_1468b1f88 + 0x80))
                     (DAT_1468b1f88,L"Scaleform.SetUseHighResolutionAssets",
                      L"Globally sets whether to use high resolution assets when available.",
                      &local_78,0);
  param_1[0x60] = uVar10;
  param_1[0x5f] = &PTR_FUN_143f3ecf0;
  if (local_70 == 0) {
LAB_142018ff1:
    if (local_78 != (longlong *)0x0) {
      FMemory::Free(local_78);
    }
  }
  else if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x28))(local_78,0);
    if (local_78 != (longlong *)0x0) {
      local_78 = (longlong *)FMemory::Realloc(local_78,0,0);
    }
    local_70 = 0;
    goto LAB_142018ff1;
  }
  uStack_50 = 0;
  local_68 = (longlong *)0x0;
  local_58 = FUN_142051eb0;
  plVar9 = (longlong *)FMemory::Realloc(0,0x30);
  local_60 = 3;
  local_68 = plVar9;
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)IDelegateInstance::vftable;
    *plVar9 = (longlong)&PTR_GetPoolName_143fc2050;
    *(undefined4 *)(plVar9 + 2) = (undefined4)local_58;
    *(undefined4 *)((longlong)plVar9 + 0x14) = local_58._4_4_;
    *(undefined4 *)(plVar9 + 3) = uStack_50;
    *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_4c;
    plVar9[1] = (longlong)param_1;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar9[5] = lVar5;
    *plVar9 = (longlong)&PTR_GetPoolName_143fc2098;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  uVar10 = (**(code **)(*DAT_1468b1f88 + 0x80))
                     (DAT_1468b1f88,L"GFxEngine.SetForceGameThreadExecution",
                      L"Set whether GFxAsync operations should be forced to execute on the game thread."
                      ,&local_68,1);
  param_1[0x62] = uVar10;
  param_1[0x61] = &PTR_FUN_143f3ecf0;
  if (local_60 != 0) {
    if (local_68 == (longlong *)0x0) goto LAB_1420190ef;
    (**(code **)(*local_68 + 0x28))(local_68,0);
    if (local_68 != (longlong *)0x0) {
      local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
    }
    local_60 = 0;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
LAB_1420190ef:
  param_1[99] = 0;
  FUN_142028380(param_1);
  local_48 = *puVar1;
  local_40 = param_1[0x31];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  FUN_14203f4f0();
  iVar3 = *(int *)(param_1 + 0x36);
  *(int *)(param_1 + 0x36) = iVar3 + 2;
  if (*(int *)((longlong)param_1 + 0x1b4) < iVar3 + 2) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar3);
  }
  puVar11 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar2);
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  param_1[0x33] = 0;
  param_1[0xb] = 0;
  FUN_14203fa30(param_1);
  FUN_1420891d0(param_1);
  lVar5 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x28);
  pRVar6 = this;
  if (lVar5 != 0) {
    pRVar6 = (RefCountImpl *)FUN_14207f210(lVar5);
  }
  (**(code **)(*(longlong *)*puVar1 + 0x10))((longlong *)*puVar1,0x16,pRVar6);
  pRVar12 = (RefCountImpl *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x20);
  if (pRVar12 != (RefCountImpl *)0x0) {
    FUN_1432e0e80(pRVar12,param_1[10]);
    *(undefined ***)pRVar12 = &PTR_FUN_144f70cc8;
    this = pRVar12;
  }
  (**(code **)(*(longlong *)*puVar1 + 0x10))((longlong *)*puVar1,0xe,this);
  if (this != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(this);
  }
  if (pRVar6 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(pRVar6);
  }
  return param_1;
}



// FUNCTION 142019230 FUN_142019230 body=680 status=ok
// SIG undefined FUN_142019230(void)

undefined8 * FUN_142019230(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 2,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[2],8,"BadPath",8,0x3f);
  param_1[4] = 0;
  param_1[5] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 4,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[4],0xd,"UnknownMovie",0xd,0x3f);
  *(undefined1 *)(param_1 + 6) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 7));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0xb));
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x13) = 1;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x17,0);
  param_1[0x18] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x19));
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x28),4000);
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x2e) = DAT_1468b5d88._4_4_;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x33) = 1;
  *(undefined4 *)((longlong)param_1 + 0x194) = 1;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x36) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x37) = 0;
  FWeakObjectPtr::operator=((longlong)param_1 + 0x1bc,0);
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 2;
  *(undefined1 *)(param_1 + 0x42) = 0;
  return param_1;
}



// FUNCTION 1420194e0 FUN_1420194e0 body=429 status=ok
// SIG undefined FUN_1420194e0(void)

undefined8 * FUN_1420194e0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_144f70e00;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 7,0);
  FGenericPlatformString::Memcpy(param_1[7],&DAT_144f66c3c,4);
  param_1[9] = 0;
  param_1[10] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 9,0);
  FGenericPlatformString::Memcpy(param_1[9],&DAT_144f66c6c,4);
  param_1[0xb] = 0;
  param_1[0xc] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,0);
  FGenericPlatformString::Memcpy(param_1[0xb],&DAT_144f66c84,4);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = *param_2;
  lVar4 = param_2[1];
  param_1[0x10] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  param_1[0x13] = 0;
  param_1[0x11] = 0xffffffffffffffff;
  param_1[0x12] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x17,0);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  plVar5 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 142019690 FUN_142019690 body=615 status=ok
// SIG undefined FUN_142019690(void)

undefined8 * FUN_142019690(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *local_38;
  uint local_30;
  undefined2 *local_28;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_144f70e00;
  FString::FString(param_1 + 3,param_3);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 7,0);
  FGenericPlatformString::Memcpy(param_1[7],&DAT_144f6688c,4);
  param_1[9] = 0;
  param_1[10] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 9,0);
  FGenericPlatformString::Memcpy(param_1[9],&DAT_144f668a4,4);
  param_1[0xb] = 0;
  param_1[0xc] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,0);
  FGenericPlatformString::Memcpy(param_1[0xb],&DAT_144f668ec,4);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = *param_2;
  lVar5 = param_2[1];
  param_1[0x10] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  puVar3 = param_1 + 0x11;
  *puVar3 = 0xffffffffffffffff;
  param_1[0x12] = 0xffffffffffffffff;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x17,0);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 4) == 0) {
    local_28 = &DAT_143f3eda8;
  }
  else {
    local_28 = (undefined2 *)param_1[3];
  }
  local_38 = (longlong *)0x0;
  local_48 = 0xffffffffffffffff;
  uStack_40 = 0xffffffffffffffff;
  local_30 = 7;
  FString::operator=(param_1 + 5,param_1 + 3);
  if (*(longlong *)(param_1[0xf] + 0x78) != 0) {
    cVar7 = Scaleform::GFx::Movie::Invoke
                      (*(longlong *)(param_1[0xf] + 0x78),
                       PTR_s_flash_utils_getDefinitionByName_1464f0660,puVar3,&local_48,1);
    if (cVar7 != '\0') goto LAB_142019883;
  }
  if ((*(uint *)(param_1 + 0x14) >> 6 & 1) != 0) {
    (**(code **)(*(longlong *)param_1[0x13] + 0x10))((longlong *)param_1[0x13],puVar3,param_1[0x15])
    ;
    param_1[0x13] = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
LAB_142019883:
  if ((local_30 >> 6 & 1) != 0) {
    (**(code **)(*local_38 + 0x10))(local_38,&local_48,local_28);
  }
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_1;
}



// FUNCTION 142019900 FUN_142019900 body=471 status=ok
// SIG undefined FUN_142019900(void)

undefined8 *
FUN_142019900(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_144f70e00;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 7,0);
  FGenericPlatformString::Memcpy(param_1[7],&DAT_144f66aac,4);
  param_1[9] = 0;
  param_1[10] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 9,0);
  FGenericPlatformString::Memcpy(param_1[9],&DAT_144f66ac4,4);
  param_1[0xb] = 0;
  param_1[0xc] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,0);
  FGenericPlatformString::Memcpy(param_1[0xb],&DAT_144f66b0c,4);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = *param_2;
  lVar4 = param_2[1];
  param_1[0x10] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  param_1[0x13] = 0;
  param_1[0x11] = 0xffffffffffffffff;
  param_1[0x12] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x17,0);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_1410b5e10(param_1 + 0x11,param_3);
  FString::operator=(param_1 + 3,param_4);
  FString::operator=(param_1 + 5,param_1 + 3);
  plVar5 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 142019ae0 FUN_142019ae0 body=669 status=ok
// SIG undefined FUN_142019ae0(void)

undefined8 * FUN_142019ae0(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined *puVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong local_38;
  undefined8 local_30;
  
  lVar8 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_144f70e00;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 2;
  plVar4 = param_1 + 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 7,0);
  FGenericPlatformString::Memcpy(param_1[7],&DAT_144f669b4,4);
  param_1[9] = 0;
  param_1[10] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 9,0);
  FGenericPlatformString::Memcpy(param_1[9],&DAT_144f669cc,4);
  param_1[0xb] = 0;
  param_1[0xc] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,0);
  FGenericPlatformString::Memcpy(param_1[0xb],&DAT_144f66a0c,4);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = *param_2;
  lVar10 = param_2[1];
  param_1[0x10] = lVar10;
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  param_1[0x11] = 0xffffffffffffffff;
  param_1[0x12] = 0xffffffffffffffff;
  param_1[0x13] = 0;
  uVar7 = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x17,0);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_3 != 0) {
    cVar6 = Scaleform::GFx::Movie::GetVariable(param_3,param_1 + 0x11,PTR_DAT_1464f07a0);
    puVar5 = PTR_DAT_1464f07a0;
    if (cVar6 != '\0') {
      local_38 = 0;
      local_30 = 0;
      uVar11 = uVar7;
      if ((PTR_DAT_1464f07a0 != (undefined *)0x0) && (*PTR_DAT_1464f07a0 != '\0')) {
        lVar10 = -1;
        do {
          lVar10 = lVar10 + 1;
        } while (PTR_DAT_1464f07a0[lVar10] != '\0');
        uVar9 = (int)lVar10 + 1;
        local_30 = (ulonglong)uVar9;
        uVar7 = uVar9;
        uVar11 = 0;
        if (0 < (int)uVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
          uVar7 = (uint)local_30;
          uVar11 = local_30._4_4_;
        }
        lVar8 = local_38;
        FGenericPlatformString::Convert<char,wchar_t>(local_38,uVar9,puVar5,uVar9,0x3f);
      }
      if (plVar4 == &local_38) {
        if (lVar8 != 0) {
          FMemory::Free(lVar8);
        }
      }
      else {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        *plVar4 = lVar8;
        *(uint *)(param_1 + 4) = uVar7;
        *(uint *)((longlong)param_1 + 0x24) = uVar11;
      }
      FString::operator=(param_1 + 5,plVar4);
    }
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
  return param_1;
}



// FUNCTION 142019d80 FUN_142019d80 body=1049 status=ok
// SIG undefined FUN_142019d80(void)

undefined8 *
FUN_142019d80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void **ppvVar1;
  longlong *plVar2;
  int *piVar3;
  undefined2 *puVar4;
  void *pvVar5;
  longlong *plVar6;
  int iVar7;
  void *pvVar8;
  void *pvVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int local_res8;
  void *local_80;
  int local_78;
  int local_74;
  void *local_70;
  int local_68;
  int local_64;
  void *local_60;
  int local_58;
  int local_54;
  void *local_50;
  
  pvVar9 = (void *)0x0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_144f70e00;
  FString::FString(param_1 + 3,param_4);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 7,0);
  FGenericPlatformString::Memcpy(param_1[7],&DAT_144f66d04,4);
  param_1[9] = 0;
  param_1[10] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 9,0);
  FGenericPlatformString::Memcpy(param_1[9],&DAT_144f66d1c,4);
  param_1[0xb] = 0;
  param_1[0xc] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,0);
  FGenericPlatformString::Memcpy(param_1[0xb],&DAT_144f66d6c,4);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = *param_2;
  lVar11 = param_2[1];
  param_1[0x10] = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  param_1[0x13] = 0;
  param_1[0x11] = 0xffffffffffffffff;
  param_1[0x12] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x17,0);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = *param_3;
  lVar11 = param_3[1];
  param_1[0x1b] = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  local_70 = (void *)0x0;
  local_68 = *(int *)(param_1[0x1a] + 0x30);
  lVar11 = (longlong)local_68;
  pvVar5 = *(void **)(param_1[0x1a] + 0x28);
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_70,(2 - (uint)(local_68 != 0)) + local_68,0);
  pvVar8 = local_70;
  _guard_xfg_dispatch_icall_nop(local_70,pvVar5,lVar11 * 2);
  iVar10 = local_68;
  lVar11 = (longlong)local_68;
  local_68 = (2 - (uint)(local_68 != 0)) + local_68;
  local_74 = local_64;
  if (local_64 < local_68) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,iVar10);
    pvVar8 = local_70;
    local_74 = local_64;
  }
  puVar4 = (undefined2 *)((longlong)pvVar8 + (lVar11 - (ulonglong)(iVar10 != 0)) * 2);
  *puVar4 = 0x2e;
  puVar4[1] = 0;
  local_58 = *(int *)(param_1 + 4);
  lVar11 = (longlong)local_58;
  if (local_68 < 2) {
    pvVar5 = (void *)param_1[3];
    local_60 = (void *)0x0;
    iVar10 = 0;
    local_50 = pvVar8;
    if (local_58 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_60,local_58,0);
      pvVar9 = local_60;
      _guard_xfg_dispatch_icall_nop(local_60,pvVar5,lVar11 * 2);
      iVar10 = local_54;
    }
  }
  else {
    iVar10 = local_58 + -1;
    if (local_58 == 0) {
      iVar10 = 0;
    }
    if ((local_68 != 0) || (iVar7 = 1, iVar10 == 0)) {
      iVar7 = 0;
    }
    local_50 = (void *)0x0;
    local_80 = pvVar8;
    local_78 = local_68;
    if (local_74 < local_68 + iVar7 + iVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_80);
    }
    iVar7 = local_78;
    pvVar5 = (void *)param_1[3];
    pvVar9 = local_80;
    iVar12 = local_78;
    local_res8 = local_74;
    if (iVar10 != 0) {
      lVar11 = (longlong)local_78;
      local_78 = local_78 + (uint)(local_78 == 0) + iVar10;
      if (local_74 < local_78) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,iVar7);
      }
      iVar12 = local_78;
      pvVar9 = local_80;
      pvVar8 = (void *)((longlong)local_80 + (lVar11 - (ulonglong)(iVar7 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar8,pvVar5,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar8) = 0;
      local_res8 = local_74;
    }
    pvVar8 = (void *)0x0;
    local_58 = iVar12;
    iVar10 = local_res8;
  }
  local_54 = iVar10;
  iVar7 = local_54;
  iVar10 = local_58;
  ppvVar1 = (void **)(param_1 + 5);
  if (ppvVar1 == &local_60) {
    if (pvVar9 != (void *)0x0) {
      FMemory::Free(pvVar9);
    }
  }
  else {
    if (*ppvVar1 != (void *)0x0) {
      FMemory::Free();
    }
    *ppvVar1 = pvVar9;
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
  }
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      iVar10 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  plVar6 = (longlong *)param_3[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      iVar10 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 14201a1a0 FUN_14201a1a0 body=1076 status=ok
// SIG undefined FUN_14201a1a0(void)

undefined8 *
FUN_14201a1a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             longlong param_5)

{
  void **ppvVar1;
  longlong *plVar2;
  int *piVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  void *pvVar6;
  int iVar7;
  void *pvVar8;
  void *pvVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  void *local_78;
  int local_70;
  int local_6c;
  void *local_68;
  int local_60;
  int local_5c;
  void *local_58;
  int local_50;
  int local_4c;
  void *local_48;
  
  pvVar9 = (void *)0x0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_144f70e00;
  FString::FString(param_1 + 3,param_4);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 7,0);
  FGenericPlatformString::Memcpy(param_1[7],&DAT_144f66ecc,4);
  param_1[9] = 0;
  param_1[10] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 9,0);
  FGenericPlatformString::Memcpy(param_1[9],&DAT_144f66ee4,4);
  param_1[0xb] = 0;
  param_1[0xc] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,0);
  FGenericPlatformString::Memcpy(param_1[0xb],&DAT_144f67154,4);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = *param_2;
  lVar11 = param_2[1];
  param_1[0x10] = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  param_1[0x13] = 0;
  param_1[0x11] = 0xffffffffffffffff;
  param_1[0x12] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_5 + 0x18);
  param_1[0x15] = *(undefined8 *)(param_5 + 0x20);
  param_1[0x16] = *(undefined8 *)(param_5 + 0x28);
  if ((*(uint *)(param_5 + 0x18) >> 6 & 1) != 0) {
    plVar5 = *(longlong **)(param_5 + 0x10);
    param_1[0x13] = plVar5;
    (**(code **)(*plVar5 + 8))();
  }
  FWeakObjectPtr::operator=(param_1 + 0x17,0);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = *param_3;
  lVar11 = param_3[1];
  param_1[0x1b] = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  local_68 = (void *)0x0;
  local_60 = *(int *)(param_1[0x1a] + 0x30);
  lVar11 = (longlong)local_60;
  pvVar6 = *(void **)(param_1[0x1a] + 0x28);
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_68,(2 - (uint)(local_60 != 0)) + local_60,0);
  pvVar8 = local_68;
  _guard_xfg_dispatch_icall_nop(local_68,pvVar6,lVar11 * 2);
  iVar10 = local_60;
  lVar11 = (longlong)local_60;
  local_60 = (2 - (uint)(local_60 != 0)) + local_60;
  local_6c = local_5c;
  if (local_5c < local_60) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar10);
    pvVar8 = local_68;
    local_6c = local_5c;
  }
  puVar4 = (undefined2 *)((longlong)pvVar8 + (lVar11 - (ulonglong)(iVar10 != 0)) * 2);
  *puVar4 = 0x2e;
  puVar4[1] = 0;
  local_50 = *(int *)(param_1 + 4);
  lVar11 = (longlong)local_50;
  if (local_60 < 2) {
    pvVar6 = (void *)param_1[3];
    local_58 = (void *)0x0;
    iVar10 = 0;
    local_48 = pvVar8;
    if (local_50 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
      pvVar9 = local_58;
      _guard_xfg_dispatch_icall_nop(local_58,pvVar6,lVar11 * 2);
      iVar10 = local_4c;
    }
  }
  else {
    iVar10 = local_50 + -1;
    if (local_50 == 0) {
      iVar10 = 0;
    }
    if ((local_60 != 0) || (iVar7 = 1, iVar10 == 0)) {
      iVar7 = 0;
    }
    local_48 = (void *)0x0;
    local_78 = pvVar8;
    local_70 = local_60;
    if (local_6c < local_60 + iVar7 + iVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
    }
    iVar7 = local_70;
    pvVar6 = (void *)param_1[3];
    pvVar9 = local_78;
    iVar12 = local_70;
    param_5._0_4_ = local_6c;
    if (iVar10 != 0) {
      lVar11 = (longlong)local_70;
      local_70 = local_70 + (uint)(local_70 == 0) + iVar10;
      if (local_6c < local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar7);
      }
      iVar12 = local_70;
      pvVar9 = local_78;
      pvVar8 = (void *)((longlong)local_78 + (lVar11 - (ulonglong)(iVar7 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar8,pvVar6,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar8) = 0;
      param_5._0_4_ = local_6c;
    }
    pvVar8 = (void *)0x0;
    local_50 = iVar12;
    iVar10 = (int)param_5;
  }
  local_4c = iVar10;
  iVar7 = local_4c;
  iVar10 = local_50;
  ppvVar1 = (void **)(param_1 + 5);
  if (ppvVar1 == &local_58) {
    if (pvVar9 != (void *)0x0) {
      FMemory::Free(pvVar9);
    }
  }
  else {
    if (*ppvVar1 != (void *)0x0) {
      FMemory::Free();
    }
    *ppvVar1 = pvVar9;
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
  }
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar10 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar10 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 14201a5e0 FUN_14201a5e0 body=1989 status=ok
// SIG undefined FUN_14201a5e0(void)

undefined8 * FUN_14201a5e0(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *local_58;
  int local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  puVar6 = (undefined8 *)0x0;
  *param_1 = &PTR_FUN_144f70e20;
  if (DAT_146acd040 == (longlong *)0x0) {
    DAT_146acd040 = (longlong *)FUN_14208adb0(0,0);
  }
  uVar1 = (**(code **)(*DAT_146acd040 + 8))(DAT_146acd040);
  FUN_1432bbb50(param_1 + 1,uVar1);
  *(undefined4 *)(param_1 + 3) = 4;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_144f70e28;
  param_1[2] = &PTR_LAB_144f70e30;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  local_48 = FUN_1420540d0;
  uStack_40 = 0;
  local_58 = (longlong *)0x0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  local_50 = 3;
  local_58 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143fc2050;
    plVar2[1] = (longlong)param_1;
    *(undefined4 *)(plVar2 + 2) = (undefined4)local_48;
    *(undefined4 *)((longlong)plVar2 + 0x14) = local_48._4_4_;
    *(undefined4 *)(plVar2 + 3) = uStack_40;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_3c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143fc2098;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  uVar1 = (**(code **)(*DAT_1468b1f88 + 0x80))
                    (DAT_1468b1f88,L"Scaleform.SetRasterMode",
                     L"Set rasteriazation mode for Scaleform rendering (solid or wireframe).",
                     &local_58,1);
  param_1[0xe] = uVar1;
  param_1[0xd] = &PTR_FUN_143f3ecf0;
  if (local_50 == 0) {
LAB_14201a75d:
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
    goto LAB_14201a75d;
  }
  uStack_40 = 0;
  local_58 = (longlong *)0x0;
  local_48 = FUN_142053da0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  local_50 = 3;
  local_58 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143fc2050;
    plVar2[1] = (longlong)param_1;
    *(undefined4 *)(plVar2 + 2) = (undefined4)local_48;
    *(undefined4 *)((longlong)plVar2 + 0x14) = local_48._4_4_;
    *(undefined4 *)(plVar2 + 3) = uStack_40;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_3c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143fc2098;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  uVar1 = (**(code **)(*DAT_1468b1f88 + 0x80))
                    (DAT_1468b1f88,L"Scaleform.SetProfileMode",
                     L"Sets graphics profile mode for Scaleform rendering.\nParameter determines mode (None, Overdraw, Batch, Blending or TextureDensity). If not provided, None is used."
                     ,&local_58,1);
  param_1[0x10] = uVar1;
  param_1[0xf] = &PTR_FUN_143f3ecf0;
  if (local_50 == 0) {
LAB_14201a837:
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
    goto LAB_14201a837;
  }
  uStack_40 = 0;
  local_58 = (longlong *)0x0;
  local_48 = FUN_142053a50;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  local_50 = 3;
  local_58 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143fc2050;
    plVar2[1] = (longlong)param_1;
    *(undefined4 *)(plVar2 + 2) = (undefined4)local_48;
    *(undefined4 *)((longlong)plVar2 + 0x14) = local_48._4_4_;
    *(undefined4 *)(plVar2 + 3) = uStack_40;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_3c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143fc2098;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  uVar1 = (**(code **)(*DAT_1468b1f88 + 0x80))
                    (DAT_1468b1f88,L"Scaleform.SetProfileFlag",
                     L"Enables or disables a Scaleform profile flag.\nFirst parameter is one of: NoFilterCaching, NoBlendCaching, NoBatching, NoInstancing)\nSecond parameter (bool, optional) enables or disables the flag (default: 0)"
                     ,&local_58,1);
  param_1[0x12] = uVar1;
  param_1[0x11] = &PTR_FUN_143f3ecf0;
  if (local_50 == 0) {
LAB_14201a914:
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
    goto LAB_14201a914;
  }
  uStack_40 = 0;
  local_58 = (longlong *)0x0;
  local_48 = FUN_142051f50;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  local_50 = 3;
  local_58 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143fc2050;
    plVar2[1] = (longlong)param_1;
    *(undefined4 *)(plVar2 + 2) = (undefined4)local_48;
    *(undefined4 *)((longlong)plVar2 + 0x14) = local_48._4_4_;
    *(undefined4 *)(plVar2 + 3) = uStack_40;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_3c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143fc2098;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  uVar1 = (**(code **)(*DAT_1468b1f88 + 0x80))
                    (DAT_1468b1f88,L"Scaleform.SetHighlightedBatch",
                     L"Highlights a specific batch index, when Scaleform.SetProfileMode = Batch.\nThis is best used when playback is paused, otherwise batches can change. Also,\nnote that there is no checking that the index corresponds to an actual batch.\nSet to -1 to disable highlighting (parameter defaults to -1)."
                     ,&local_58,1);
  param_1[0x14] = uVar1;
  param_1[0x13] = &PTR_FUN_143f3ecf0;
  if (local_50 == 0) {
LAB_14201a9f1:
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
    goto LAB_14201a9f1;
  }
  uStack_40 = 0;
  local_58 = (longlong *)0x0;
  local_48 = FUN_142050d00;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  local_50 = 3;
  local_58 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143fc2050;
    plVar2[1] = (longlong)param_1;
    *(undefined4 *)(plVar2 + 2) = (undefined4)local_48;
    *(undefined4 *)((longlong)plVar2 + 0x14) = local_48._4_4_;
    *(undefined4 *)(plVar2 + 3) = uStack_40;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_3c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143fc2098;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  uVar1 = (**(code **)(*DAT_1468b1f88 + 0x80))
                    (DAT_1468b1f88,L"Scaleform.SetCurveTolerance",
                     L"Sets the global scalar for determining Scaleform tessellator accuracy.\nHigher values produce meshes with less vertices, however, quality may be reduced.\nAlso note this command regenerates all meshes, which may cause a temporary performance spike.\nParameter useful range is (0..50), default 1.0."
                     ,&local_58,1);
  param_1[0x16] = uVar1;
  param_1[0x15] = &PTR_FUN_143f3ecf0;
  if (local_50 == 0) {
LAB_14201aace:
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
    goto LAB_14201aace;
  }
  uStack_40 = 0;
  local_58 = (longlong *)0x0;
  local_48 = FUN_142054ab0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  local_50 = 3;
  local_58 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143fc2050;
    plVar2[1] = (longlong)param_1;
    *(undefined4 *)(plVar2 + 2) = (undefined4)local_48;
    *(undefined4 *)((longlong)plVar2 + 0x14) = local_48._4_4_;
    *(undefined4 *)(plVar2 + 3) = uStack_40;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_3c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143fc2098;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  uVar1 = (**(code **)(*DAT_1468b1f88 + 0x80))
                    (DAT_1468b1f88,L"Scaleform.RenderingEnable",
                     L"Sets whether Scaleform rendering is enabled.\nParameter is whether to enable or disable rendering (defaults to 1).\n"
                     ,&local_58,1);
  param_1[0x18] = uVar1;
  param_1[0x17] = &PTR_FUN_143f3ecf0;
  if (local_50 == 0) {
LAB_14201abab:
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
    goto LAB_14201abab;
  }
  uStack_40 = 0;
  local_58 = (longlong *)0x0;
  local_48 = FUN_142054240;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  local_50 = 3;
  local_58 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143fc2050;
    plVar2[1] = (longlong)param_1;
    *(undefined4 *)(plVar2 + 2) = (undefined4)local_48;
    *(undefined4 *)((longlong)plVar2 + 0x14) = local_48._4_4_;
    *(undefined4 *)(plVar2 + 3) = uStack_40;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_3c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143fc2098;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  uVar1 = (**(code **)(*DAT_1468b1f88 + 0x80))
                    (DAT_1468b1f88,L"Scaleform.SetRenderConfigFlag",
                     L"Enables or disables a render config flag (see Render::HALConfigFlags).\nFirst parameter is one of: DisableFilterScaling, FlipRendering, DisableFilters or DisableAdvancedBlends)\nSecond parameter (bool) enables or disables the flag."
                     ,&local_58,1);
  param_1[0x1a] = uVar1;
  param_1[0x19] = &PTR_FUN_143f3ecf0;
  if (local_50 != 0) {
    if (local_58 == (longlong *)0x0) goto LAB_14201ac95;
    (**(code **)(*local_58 + 0x28))(local_58,0);
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
    }
    local_50 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
LAB_14201ac95:
  puVar4 = (undefined8 *)operator_new(0x10);
  puVar5 = puVar6;
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_144f712d0;
    puVar4[1] = 0;
    puVar5 = puVar4;
  }
  param_1[9] = puVar5;
  lVar3 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x1d0,0);
  puVar5 = puVar6;
  if (lVar3 != 0) {
    puVar5 = (undefined8 *)FUN_14207f3b0(lVar3,DAT_1468c21c4,param_1[9],0);
  }
  if ((RefCountImpl *)param_1[10] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[10]);
  }
  param_1[10] = puVar5;
  puVar5 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,0x3700,0);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_142061950(puVar5,param_1[9]);
    *puVar5 = &PTR_FUN_144f712f8;
    puVar5[2] = &PTR_LAB_144f71690;
    puVar6 = puVar5;
  }
  if ((RefCountImpl *)param_1[8] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[8]);
  }
  param_1[8] = puVar6;
  lVar3 = (**(code **)(puVar6[2] + 0x20))();
  if ((RefCountImpl *)param_1[8] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef((RefCountImpl *)param_1[8]);
  }
  if (*(RefCountImpl **)(lVar3 + 8) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release(*(RefCountImpl **)(lVar3 + 8));
  }
  *(undefined8 *)(lVar3 + 8) = param_1[8];
  return param_1;
}



// FUNCTION 14201adb0 FUN_14201adb0 body=1139 status=ok
// SIG undefined FUN_14201adb0(void)

undefined8 * FUN_14201adb0(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_144f70c20;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[7] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  param_1[9] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xb] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  param_1[0xd] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x78);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  param_1[0xf] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x88);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  param_1[0x11] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x98);
  param_1[0x12] = *(undefined8 *)(param_2 + 0x90);
  param_1[0x13] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xa8);
  param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
  param_1[0x15] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xb8);
  param_1[0x16] = *(undefined8 *)(param_2 + 0xb0);
  param_1[0x17] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 200);
  param_1[0x18] = *(undefined8 *)(param_2 + 0xc0);
  param_1[0x19] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xd8);
  param_1[0x1a] = *(undefined8 *)(param_2 + 0xd0);
  param_1[0x1b] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xe8);
  param_1[0x1c] = *(undefined8 *)(param_2 + 0xe0);
  param_1[0x1d] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xf8);
  param_1[0x1e] = *(undefined8 *)(param_2 + 0xf0);
  param_1[0x1f] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x108);
  param_1[0x20] = *(undefined8 *)(param_2 + 0x100);
  param_1[0x21] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x118);
  param_1[0x22] = *(undefined8 *)(param_2 + 0x110);
  param_1[0x23] = uVar4;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x120);
  *(undefined4 *)((longlong)param_1 + 0x124) = *(undefined4 *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)((longlong)param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x140);
  *(undefined4 *)((longlong)param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
  *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_2 + 0x148);
  *(undefined4 *)((longlong)param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_2 + 0x150);
  *(undefined4 *)((longlong)param_1 + 0x154) = *(undefined4 *)(param_2 + 0x154);
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x158);
  *(undefined4 *)((longlong)param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x15c);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x160);
  *(undefined4 *)((longlong)param_1 + 0x164) = *(undefined4 *)(param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(param_2 + 0x168);
  *(undefined4 *)((longlong)param_1 + 0x16c) = *(undefined4 *)(param_2 + 0x16c);
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x170);
  *(undefined4 *)((longlong)param_1 + 0x174) = *(undefined4 *)(param_2 + 0x174);
  *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(param_2 + 0x178);
  *(undefined4 *)((longlong)param_1 + 0x17c) = *(undefined4 *)(param_2 + 0x17c);
  uVar4 = *(undefined8 *)(param_2 + 0x188);
  param_1[0x30] = *(undefined8 *)(param_2 + 0x180);
  param_1[0x31] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x198);
  param_1[0x32] = *(undefined8 *)(param_2 + 400);
  param_1[0x33] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x1a8);
  param_1[0x34] = *(undefined8 *)(param_2 + 0x1a0);
  param_1[0x35] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x1b8);
  param_1[0x36] = *(undefined8 *)(param_2 + 0x1b0);
  param_1[0x37] = uVar4;
  uVar3 = *(undefined4 *)(param_2 + 0x1c0);
  uVar1 = *(undefined4 *)(param_2 + 0x1cc);
  uVar2 = *(undefined4 *)(param_2 + 0x1c8);
  *(undefined4 *)((longlong)param_1 + 0x1c4) = *(undefined4 *)(param_2 + 0x1c4);
  *(undefined4 *)(param_1 + 0x39) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0x1d8);
  uVar3 = *(undefined4 *)(param_2 + 0x1d0);
  uVar2 = *(undefined4 *)(param_2 + 0x1dc);
  *(undefined4 *)((longlong)param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x1d4);
  *(undefined4 *)(param_1 + 0x3b) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = uVar2;
  *(undefined4 *)(param_1 + 0x3a) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined4 *)((longlong)param_1 + 0x1e4) = *(undefined4 *)(param_2 + 0x1e4);
  *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)(param_2 + 0x1e8);
  *(undefined4 *)((longlong)param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0x1ec);
  *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_2 + 0x1f0);
  *(undefined4 *)((longlong)param_1 + 500) = *(undefined4 *)(param_2 + 500);
  *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)(param_2 + 0x1f8);
  *(undefined4 *)((longlong)param_1 + 0x1fc) = *(undefined4 *)(param_2 + 0x1fc);
  uVar4 = *(undefined8 *)(param_2 + 0x208);
  param_1[0x40] = *(undefined8 *)(param_2 + 0x200);
  param_1[0x41] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x218);
  param_1[0x42] = *(undefined8 *)(param_2 + 0x210);
  param_1[0x43] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x228);
  param_1[0x44] = *(undefined8 *)(param_2 + 0x220);
  param_1[0x45] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x238);
  param_1[0x46] = *(undefined8 *)(param_2 + 0x230);
  param_1[0x47] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x248);
  param_1[0x48] = *(undefined8 *)(param_2 + 0x240);
  param_1[0x49] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 600);
  param_1[0x4a] = *(undefined8 *)(param_2 + 0x250);
  param_1[0x4b] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x268);
  param_1[0x4c] = *(undefined8 *)(param_2 + 0x260);
  param_1[0x4d] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x278);
  param_1[0x4e] = *(undefined8 *)(param_2 + 0x270);
  param_1[0x4f] = uVar4;
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x280);
  *(undefined1 *)((longlong)param_1 + 0x281) = *(undefined1 *)(param_2 + 0x281);
  *(undefined4 *)((longlong)param_1 + 0x284) = *(undefined4 *)(param_2 + 0x284);
  uVar4 = 0;
  if (*(RefCountImpl **)(param_2 + 0x288) != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(param_2 + 0x288));
    uVar4 = *(undefined8 *)(param_2 + 0x288);
  }
  param_1[0x51] = uVar4;
  param_1[0x52] = *(undefined8 *)(param_2 + 0x290);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x2a0);
  *(undefined4 *)((longlong)param_1 + 0x2a4) = *(undefined4 *)(param_2 + 0x2a4);
  *(undefined4 *)(param_1 + 0x55) = *(undefined4 *)(param_2 + 0x2a8);
  *(undefined4 *)((longlong)param_1 + 0x2ac) = *(undefined4 *)(param_2 + 0x2ac);
  *(undefined4 *)(param_1 + 0x56) = *(undefined4 *)(param_2 + 0x2b0);
  *(undefined4 *)((longlong)param_1 + 0x2b4) = *(undefined4 *)(param_2 + 0x2b4);
  *(undefined4 *)(param_1 + 0x57) = *(undefined4 *)(param_2 + 0x2b8);
  *(undefined4 *)((longlong)param_1 + 700) = *(undefined4 *)(param_2 + 700);
  return param_1;
}



// FUNCTION 14201b230 FUN_14201b230 body=715 status=ok
// SIG undefined FUN_14201b230(void)

longlong * FUN_14201b230(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  
  lVar12 = 0;
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 8))();
    lVar12 = *param_2;
  }
  *param_1 = lVar12;
  FUN_14201adb0(param_1 + 2,param_2 + 2);
  plVar3 = param_1 + 99;
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x2dc);
  lVar12 = param_2[0x5b];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x2d4);
  *(int *)(param_1 + 0x5a) = (int)param_2[0x5a];
  *(undefined4 *)((longlong)param_1 + 0x2d4) = uVar5;
  *(int *)(param_1 + 0x5b) = (int)lVar12;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = uVar4;
  *(int *)(param_1 + 0x5c) = (int)param_2[0x5c];
  *(undefined4 *)((longlong)param_1 + 0x2e4) = *(undefined4 *)((longlong)param_2 + 0x2e4);
  *(int *)(param_1 + 0x5d) = (int)param_2[0x5d];
  *(undefined4 *)((longlong)param_1 + 0x2ec) = *(undefined4 *)((longlong)param_2 + 0x2ec);
  *(int *)(param_1 + 0x5e) = (int)param_2[0x5e];
  *(undefined4 *)((longlong)param_1 + 0x2f4) = *(undefined4 *)((longlong)param_2 + 0x2f4);
  *(int *)(param_1 + 0x61) = (int)param_2[0x61];
  *(int *)(param_1 + 0x5f) = (int)param_2[0x5f];
  *(undefined4 *)((longlong)param_1 + 0x2fc) = *(undefined4 *)((longlong)param_2 + 0x2fc);
  *(int *)(param_1 + 0x60) = (int)param_2[0x60];
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_2 + 0x304);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_2 + 0x30c);
  *(int *)(param_1 + 0x62) = (int)param_2[0x62];
  *(undefined4 *)((longlong)param_1 + 0x314) = *(undefined4 *)((longlong)param_2 + 0x314);
  *plVar3 = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  lVar12 = param_2[100];
  lVar7 = param_2[99];
  if (lVar12 == 0) goto LAB_14201b4ac;
  uVar8 = param_1[100];
  uVar2 = uVar8 + lVar12;
  if (uVar2 < uVar8) {
    puVar10 = (undefined8 *)(*plVar3 + -0x20 + uVar8 * 0x20);
    for (lVar13 = uVar8 - uVar2; lVar13 != 0; lVar13 = lVar13 + -1) {
      if ((RefCountImpl *)*puVar10 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar10);
      }
      puVar10 = puVar10 + -4;
    }
    uVar15 = uVar2;
    if (uVar2 < (ulonglong)param_1[0x65] >> 1) {
LAB_14201b427:
      FUN_14204f750(plVar3,plVar3,uVar15);
    }
  }
  else if (uVar2 != 0) {
    uVar15 = (uVar2 >> 2) + uVar2;
    goto LAB_14201b427;
  }
  puVar10 = (undefined8 *)(uVar8 * 0x20 + *plVar3);
  param_1[100] = uVar2;
  if (lVar12 != 0) {
    puVar14 = (undefined4 *)((longlong)puVar10 + 0x14);
    puVar11 = (undefined4 *)(lVar7 + 0x14);
    do {
      uVar9 = 0;
      if (*(RefCountImpl **)(puVar11 + -5) != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::AddRef(*(RefCountImpl **)(puVar11 + -5));
        uVar9 = *(undefined8 *)(puVar11 + -5);
      }
      *puVar10 = uVar9;
      puVar10 = puVar10 + 4;
      *(undefined1 *)(puVar14 + -3) = *(undefined1 *)(puVar11 + -3);
      uVar4 = puVar11[1];
      uVar5 = *puVar11;
      uVar6 = puVar11[-1];
      puVar1 = puVar11 + -2;
      puVar11 = puVar11 + 8;
      puVar14[-2] = *puVar1;
      puVar14[-1] = uVar6;
      *puVar14 = uVar5;
      puVar14[1] = uVar4;
      puVar14 = puVar14 + 8;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
LAB_14201b4ac:
  *(char *)(param_1 + 0x66) = (char)param_2[0x66];
  *(undefined1 *)((longlong)param_1 + 0x331) = *(undefined1 *)((longlong)param_2 + 0x331);
  *(undefined1 *)((longlong)param_1 + 0x332) = *(undefined1 *)((longlong)param_2 + 0x332);
  *(undefined1 *)((longlong)param_1 + 0x333) = *(undefined1 *)((longlong)param_2 + 0x333);
  return param_1;
}



// FUNCTION 14201b500 ShaderPair body=84 status=ok
// SIG undefined ShaderPair(void)

undefined8 * Scaleform::Render::RHI::ShaderPair::ShaderPair(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  lVar1 = param_2[7];
  param_1[7] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 14201b560 FUN_14201b560 body=114 status=ok
// SIG undefined FUN_14201b560(void)

void FUN_14201b560(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x28);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 14201b5e0 FUN_14201b5e0 body=142 status=ok
// SIG undefined FUN_14201b5e0(void)

void FUN_14201b5e0(longlong param_1)

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



// FUNCTION 14201b670 FUN_14201b670 body=114 status=ok
// SIG undefined FUN_14201b670(void)

void FUN_14201b670(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x20);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
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



// FUNCTION 14201b6f0 FUN_14201b6f0 body=153 status=ok
// SIG undefined FUN_14201b6f0(void)

void FUN_14201b6f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1432de450();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1432e1f50();
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



// FUNCTION 14201b790 FUN_14201b790 body=98 status=ok
// SIG undefined FUN_14201b790(void)

void FUN_14201b790(longlong param_1)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x60) == (longlong *)0x0) {
      plVar1 = (longlong *)(param_1 + 0x40);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14201b800 FUN_14201b800 body=146 status=ok
// SIG undefined FUN_14201b800(void)

void FUN_14201b800(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x60) == (longlong *)0x0) {
      plVar5 = (longlong *)(param_1 + 0x40);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  plVar5 = *(longlong **)(param_1 + 0x20);
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
  FUN_1416f8340(*(undefined4 *)(param_1 + 0x10));
  return;
}



// FUNCTION 14201b8a0 FUN_14201b8a0 body=123 status=ok
// SIG undefined FUN_14201b8a0(void)

void FUN_14201b8a0(longlong param_1)

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
  FUN_1416f8340(*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 14201b920 FUN_14201b920 body=165 status=ok
// SIG undefined FUN_14201b920(void)

void FUN_14201b920(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x60) == (longlong *)0x0) {
      plVar5 = (longlong *)(param_1 + 0x40);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  plVar5 = *(longlong **)(param_1 + 0x20);
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
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 14201b9d0 FUN_14201b9d0 body=192 status=ok
// SIG undefined FUN_14201b9d0(void)

void FUN_14201b9d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)();
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
  if (*(int *)(param_1 + 0x60) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x50);
    if (*(longlong **)(param_1 + 0x50) == (longlong *)0x0) {
      plVar5 = (longlong *)(param_1 + 0x30);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  plVar5 = *(longlong **)(param_1 + 0x10);
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
  return;
}



// FUNCTION 14201ba90 FUN_14201ba90 body=124 status=ok
// SIG undefined FUN_14201ba90(void)

void FUN_14201ba90(longlong param_1)

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
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}



// FUNCTION 14201bb10 FUN_14201bb10 body=139 status=ok
// SIG undefined FUN_14201bb10(void)

void FUN_14201bb10(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1432de450();
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



// FUNCTION 14201bba0 FUN_14201bba0 body=107 status=ok
// SIG undefined FUN_14201bba0(void)

void FUN_14201bba0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((*(uint *)(param_1 + 0x38) >> 6 & 1) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))
              (*(longlong **)(param_1 + 0x30),param_1 + 0x20,*(undefined8 *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}



// FUNCTION 14201bc10 FUN_14201bc10 body=103 status=ok
// SIG undefined FUN_14201bc10(void)

void FUN_14201bc10(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = param_1[1];
  lVar1 = *param_1;
  puVar2 = (undefined8 *)(lVar1 + -0x20 + lVar3 * 0x20);
  if (lVar3 != 0) {
    do {
      if ((RefCountImpl *)*puVar2 != (RefCountImpl *)0x0) {
        Scaleform::RefCountImpl::Release((RefCountImpl *)*puVar2);
      }
      puVar2 = puVar2 + -4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    lVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014201bc73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar1);
  return;
}



// FUNCTION 14201bc80 FUN_14201bc80 body=195 status=ok
// SIG undefined FUN_14201bc80(void)

void FUN_14201bc80(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar2 = *param_1;
  iVar4 = (int)param_1[1];
  if (iVar4 != 0) {
    plVar3 = (longlong *)(lVar2 + 0x80);
    do {
      if ((int)plVar3[2] != 0) {
        plVar1 = (longlong *)*plVar3;
        if ((longlong *)*plVar3 == (longlong *)0x0) {
          plVar1 = plVar3 + -4;
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))(plVar1,0);
        }
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      if ((int)plVar3[-8] != 0) {
        plVar1 = (longlong *)plVar3[-10];
        if ((longlong *)plVar3[-10] == (longlong *)0x0) {
          plVar1 = plVar3 + -0xe;
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))(plVar1,0);
        }
      }
      if (plVar3[-10] != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 0x14;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar2 = *param_1;
  }
  if (lVar2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14201bd50 FUN_14201bd50 body=130 status=ok
// SIG undefined FUN_14201bd50(void)

void FUN_14201bd50(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar2 = *param_1;
  iVar4 = (int)param_1[1];
  if (iVar4 != 0) {
    plVar3 = (longlong *)(lVar2 + 0x30);
    do {
      if ((int)plVar3[2] != 0) {
        plVar1 = (longlong *)*plVar3;
        if ((longlong *)*plVar3 == (longlong *)0x0) {
          plVar1 = plVar3 + -4;
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))(plVar1,0);
        }
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 0xc;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar2 = *param_1;
  }
  if (lVar2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14201bde0 FUN_14201bde0 body=179 status=ok
// SIG undefined FUN_14201bde0(void)

void FUN_14201bde0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x400);
  iVar6 = *(int *)(param_1 + 0x408);
  lVar7 = lVar5;
  if (lVar5 == 0) {
    lVar7 = param_1;
  }
  if (iVar6 != 0) {
    plVar8 = (longlong *)(lVar7 + 8);
    do {
      plVar4 = (longlong *)*plVar8;
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
      plVar8 = plVar8 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *(longlong *)(param_1 + 0x400);
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14201bea0 FUN_14201bea0 body=392 status=ok
// SIG undefined FUN_14201bea0(void)

void FUN_14201bea0(longlong *param_1)

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
      if (bVar4) goto LAB_14201bf61;
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
LAB_14201bf61:
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
      TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
      ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>
                ((longlong)iStack_1c * 0x20 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 14201c030 FUN_14201c030 body=99 status=ok
// SIG undefined FUN_14201c030(void)

void FUN_14201c030(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_144f70cf8;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014201c089. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 14201c0a0 FUN_14201c0a0 body=1073 status=ok
// SIG undefined FUN_14201c0a0(void)

void FUN_14201c0a0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  
  *param_1 = &PTR__scalar_deleting_destructor__144f70ee0;
  param_1[2] = &PTR_LAB_144f70ee8;
  lVar8 = DAT_146accd98;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    if (DVar4 != DAT_1468c21c0) {
      lVar5 = 4;
      goto LAB_14201c108;
    }
  }
  lVar5 = 0;
LAB_14201c108:
  if (*(int *)(lVar5 + lVar8) != 0) {
    FUN_14204e110(param_1);
    FUN_14202d990(param_1);
  }
  (**(code **)(*(longlong *)param_1[0x30] + 0x10))((longlong *)param_1[0x30],0xe);
  (**(code **)(*(longlong *)param_1[0x30] + 0x10))((longlong *)param_1[0x30],1);
  (**(code **)(*(longlong *)param_1[0x30] + 0x10))((longlong *)param_1[0x30],0x17);
  (**(code **)(*(longlong *)param_1[0x30] + 0x10))((longlong *)param_1[0x30],0x14);
  (**(code **)(*(longlong *)param_1[0x30] + 0x10))((longlong *)param_1[0x30],0x16);
  (**(code **)(*(longlong *)param_1[0x30] + 0x10))((longlong *)param_1[0x30],0x1a);
  (**(code **)(*(longlong *)param_1[0x30] + 0x10))((longlong *)param_1[0x30],6);
  FUN_1432e06c0(param_1[0x30],0);
  (**(code **)(*(longlong *)param_1[0x30] + 0x10))((longlong *)param_1[0x30],0x28);
  (**(code **)(*(longlong *)param_1[0x30] + 0x10))((longlong *)param_1[0x30],0x29);
  (**(code **)(*(longlong *)param_1[0x30] + 0x10))((longlong *)param_1[0x30],5);
  (**(code **)(*(longlong *)param_1[0x30] + 0x10))((longlong *)param_1[0x30],0xf);
  (**(code **)(*(longlong *)param_1[0x30] + 0x10))((longlong *)param_1[0x30],0x18);
  (**(code **)(*(longlong *)param_1[0x30] + 0x10))((longlong *)param_1[0x30],0xc);
  (**(code **)(*(longlong *)param_1[0x30] + 0x10))((longlong *)param_1[0x30],0xd);
  param_1[0x61] = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,param_1[0x62],1);
  param_1[0x5f] = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,param_1[0x60],1);
  param_1[0x5d] = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,param_1[0x5e],1);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x5b);
  if ((RefCountImpl *)param_1[0x59] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x59]);
  }
  if ((RefCountImpl *)param_1[0x58] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x58]);
  }
  iVar6 = *(int *)(param_1 + 0x57);
  plVar7 = (longlong *)param_1[0x56];
  if (iVar6 != 0) {
    do {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar7 = (longlong *)param_1[0x56];
  }
  if (plVar7 != (longlong *)0x0) {
    FMemory::Free(plVar7);
  }
  *(undefined4 *)(param_1 + 0x4a) = 0;
  if (param_1[0x49] != 0) {
    FMemory::Free();
  }
  FUN_14201bea0(param_1 + 0x41);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (param_1[0x3f] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FText>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x37,0);
  if (param_1[0x3b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x37] != 0) {
    FMemory::Free();
  }
  iVar6 = *(int *)(param_1 + 0x36);
  lVar8 = param_1[0x35];
  if (iVar6 != 0) {
    do {
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(lVar8);
      lVar8 = lVar8 + 0x10;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar8 = param_1[0x35];
  }
  if (lVar8 != 0) {
    FMemory::Free(lVar8);
  }
  plVar7 = (longlong *)param_1[0x31];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b));
  if (param_1[0x2a] != 0) {
    LOCK();
    piVar2 = (int *)(param_1[0x2a] + 0x48);
    iVar6 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      FGraphEvent::Recycle();
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x28);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x25);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x22);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x1f);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x1c);
  *param_1 = &PTR_FUN_144f70e98;
  param_1[2] = &PTR_LAB_144f70ea0;
  FScaleformRenderer::ReleaseResource(param_1 + 2);
  FUN_14201c750(param_1);
  return;
}



// FUNCTION 14201c4e0 FUN_14201c4e0 body=464 status=ok
// SIG undefined FUN_14201c4e0(void)

void FUN_14201c4e0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  *param_1 = &PTR_FUN_144f70e00;
  if ((*(uint *)(param_1 + 0x14) >> 6 & 1) != 0) {
    (**(code **)(*(longlong *)param_1[0x13] + 0x10))
              ((longlong *)param_1[0x13],param_1 + 0x11,param_1[0x15]);
    param_1[0x13] = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar5 = *(int *)(param_1 + 0x1f);
  plVar4 = (longlong *)param_1[0x1e];
  if (iVar5 != 0) {
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar4 = (longlong *)param_1[0x1e];
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x1c);
  plVar4 = (longlong *)param_1[0x1b];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x18);
  if ((*(uint *)(param_1 + 0x14) >> 6 & 1) != 0) {
    (**(code **)(*(longlong *)param_1[0x13] + 0x10))
              ((longlong *)param_1[0x13],param_1 + 0x11,param_1[0x15]);
    param_1[0x13] = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  plVar4 = (longlong *)param_1[0x10];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}



// FUNCTION 14201c6b0 ~FAkAudioEventEvaluationData body=146 status=ok
// SIG undefined ~FAkAudioEventEvaluationData(void)

void FAkAudioEventEvaluationData::~FAkAudioEventEvaluationData(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[2];
  if (plVar4 == (longlong *)0x0) {
    *param_1 = &PTR_FUN_144f70d00;
    return;
  }
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
    *param_1 = &PTR_FUN_144f70d00;
    return;
  }
  *param_1 = &PTR_FUN_144f70d00;
  return;
}



// FUNCTION 14201c750 FUN_14201c750 body=489 status=ok
// SIG undefined FUN_14201c750(void)

void FUN_14201c750(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_144f70e28;
  param_1[2] = &PTR_LAB_144f70e30;
  FUN_141ee24f0(0);
  puVar1 = (undefined8 *)param_1[9];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0x19] = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,param_1[0x1a],1);
  param_1[0x17] = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,param_1[0x18],1);
  param_1[0x15] = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,param_1[0x16],1);
  param_1[0x13] = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,param_1[0x14],1);
  param_1[0x11] = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,param_1[0x12],1);
  param_1[0xf] = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,param_1[0x10],1);
  param_1[0xd] = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,param_1[0xe],1);
  if ((RefCountImpl *)param_1[10] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[10]);
  }
  if ((RefCountImpl *)param_1[8] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[8]);
  }
  FUN_141edd2d0(param_1 + 2);
  *param_1 = &PTR_FUN_144f70e20;
  Scaleform::GFx::System::Destroy();
  Scaleform::System::Destroy();
  return;
}



// FUNCTION 14201c940 FUN_14201c940 body=47 status=ok
// SIG undefined FUN_14201c940(void)

longlong * FUN_14201c940(longlong *param_1,longlong param_2)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
  }
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 14201c970 FUN_14201c970 body=248 status=ok
// SIG undefined FUN_14201c970(void)

float * FUN_14201c970(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar1 = *param_2;
  fVar2 = param_3[4];
  fVar3 = param_3[5];
  fVar4 = param_2[5];
  fVar5 = *param_3;
  fVar6 = param_2[1];
  fVar7 = param_2[4];
  fVar8 = param_3[7];
  fVar9 = param_3[7];
  fVar10 = param_3[1];
  fVar11 = param_3[3];
  *param_1 = fVar5 * fVar1 + fVar2 * fVar6;
  fVar12 = param_3[3];
  fVar13 = param_3[1];
  param_1[1] = fVar3 * fVar6 + fVar1 * fVar10;
  param_1[2] = 0.0;
  fVar10 = param_2[7];
  param_1[3] = fVar6 * fVar8 + fVar1 * fVar11 + param_2[3];
  param_1[4] = fVar5 * fVar7 + fVar2 * fVar4;
  param_1[5] = fVar3 * fVar4 + fVar7 * fVar13;
  param_1[6] = 0.0;
  param_1[7] = fVar7 * fVar12 + fVar4 * fVar9 + fVar10;
  return param_1;
}



// FUNCTION 14201ca70 FUN_14201ca70 body=171 status=ok
// SIG undefined FUN_14201ca70(void)

undefined8 FUN_14201ca70(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  char cVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 local_18 [8];
  longlong *local_10;
  
  bVar8 = false;
  lVar4 = *(longlong *)(*param_1 + 0xd0);
  if (lVar4 != 0) {
    puVar5 = (undefined1 *)param_1[1];
    bVar8 = true;
    uVar7 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(*param_1 + 8,local_18);
    cVar6 = FUN_14204de30(lVar4,uVar7,*puVar5);
    if (cVar6 != '\0') {
      uVar7 = 1;
      goto LAB_14201cac7;
    }
  }
  uVar7 = 0;
LAB_14201cac7:
  if ((bVar8) && (local_10 != (longlong *)0x0)) {
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
  return uVar7;
}



// FUNCTION 14201cb20 FUN_14201cb20 body=408 status=ok
// SIG undefined FUN_14201cb20(void)

void FUN_14201cb20(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  bool bVar12;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  lVar9 = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar12 = iVar5 == 0;
    if (bVar12) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (!bVar12) {
      while( true ) {
        LOCK();
        bVar12 = iVar5 == (int)plVar2[1];
        if (bVar12) {
          *(int *)(plVar2 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar12) break;
        LOCK();
        iVar5 = (int)plVar2[1];
        bVar12 = iVar5 == 0;
        if (bVar12) {
          *(int *)(plVar2 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar12) {
          return;
        }
      }
      if (plVar2 != (longlong *)0x0) {
        lVar3 = *(longlong *)(param_1 + 0x10);
        if (lVar3 != 0) {
          LOCK();
          bVar12 = *(int *)(lVar3 + 0x1e0) == 0;
          if (bVar12) {
            *(int *)(lVar3 + 0x1e0) = 0;
          }
          UNLOCK();
          if (bVar12) {
            LOCK();
            cVar4 = *(char *)(lVar3 + 0x30);
            if (cVar4 == '\0') {
              *(char *)(lVar3 + 0x30) = '\0';
              cVar4 = '\0';
            }
            UNLOCK();
            if ((cVar4 < '\x06') &&
               (lVar7 = FUN_1416f8720(*(undefined4 *)(param_1 + 8)), lVar7 != 0)) {
              lVar7 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
              iVar5 = *(int *)(lVar7 + 0xc);
              if (iVar5 < (int)DAT_1469e91c4) {
                uVar11 = iVar5 >> 0x1f & 0xffff;
                uVar6 = iVar5 + uVar11;
                lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                        (longlong)(int)((uVar6 & 0xffff) - uVar11) * 0x18;
              }
              if ((*(uint *)(lVar9 + 8) & 0x30000000) == 0) {
                plVar8 = (longlong *)FUN_1416f8720(*(undefined4 *)(param_1 + 8));
                lVar9 = (**(code **)(*plVar8 + 0x408))(plVar8);
                if (lVar9 != 0) {
                  uVar10 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
                  FUN_14208c130(uVar10);
                  plVar8 = (longlong *)FUN_1416f8720(*(undefined4 *)(param_1 + 8));
                  (**(code **)(*plVar8 + 0x3c8))(plVar8);
                  uVar10 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
                  FUN_14208c020(uVar10);
                  FUN_142055370(lVar3,5);
                }
              }
            }
          }
          LOCK();
          cVar4 = *(char *)(lVar3 + 0x30);
          if (cVar4 == '\0') {
            *(char *)(lVar3 + 0x30) = '\0';
            cVar4 = '\0';
          }
          UNLOCK();
          if (cVar4 != '\x05') {
            FUN_142055370(lVar3,6);
          }
        }
        LOCK();
        plVar8 = plVar2 + 1;
        lVar9 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
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



// FUNCTION 14201ccc0 FUN_14201ccc0 body=204 status=ok
// SIG undefined FUN_14201ccc0(void)

undefined8 FUN_14201ccc0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  lVar1 = *param_1;
  uVar5 = *(uint *)(lVar1 + 0xa0) & 0x8f;
  if ((uVar5 - 8 < 4) &&
     (cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x98) + 0x30))
                        (*(longlong **)(lVar1 + 0x98),*(undefined8 *)(lVar1 + 0xa8),0,
                         "removeChildren",0,0,uVar5 == 10), cVar2 != '\0')) {
    if (*(char *)param_1[1] != '\0') {
      puVar3 = *(undefined8 **)(*param_1 + 0xe0);
      puVar4 = puVar3 + (longlong)*(int *)(*param_1 + 0xe8) * 2;
      for (; puVar3 != puVar4; puVar3 = puVar3 + 2) {
        (*(code *)**(undefined8 **)*puVar3)();
      }
    }
    TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(*param_1 + 0xe0,0);
    return 1;
  }
  return 0;
}



// FUNCTION 14201cd90 FUN_14201cd90 body=1123 status=ok
// SIG undefined FUN_14201cd90(void)

undefined8 FUN_14201cd90(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  void *pvVar5;
  int iVar6;
  char cVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  void **ppvVar11;
  undefined1 *puVar12;
  longlong lVar13;
  longlong lVar14;
  void *pvVar15;
  undefined8 uVar16;
  uint uVar17;
  int iVar18;
  void *pvVar19;
  longlong lVar20;
  void *local_e8;
  int local_e0;
  int local_dc;
  void *local_d8;
  int local_d0;
  int local_cc;
  undefined8 local_c8;
  longlong *local_c0;
  void *local_b8;
  int local_b0;
  int local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  lVar14 = *(longlong *)*param_1;
  local_a8 = 0xffffffffffffffff;
  uStack_a0 = 0xffffffffffffffff;
  local_98 = (longlong *)0x0;
  local_90 = *(undefined4 *)(lVar14 + 0xa0);
  local_88 = *(undefined8 *)(lVar14 + 0xa8);
  local_80 = *(undefined8 *)(lVar14 + 0xb0);
  if ((*(uint *)(lVar14 + 0xa0) >> 6 & 1) != 0) {
    local_98 = *(longlong **)(lVar14 + 0x98);
    (**(code **)(*local_98 + 8))(local_98,&local_a8);
  }
  lVar20 = 2;
  lVar14 = param_1[2];
  local_78 = 0xffffffffffffffff;
  uStack_70 = 0xffffffffffffffff;
  local_68 = 0;
  local_60 = 3;
  local_58 = *(undefined4 *)param_1[1];
  uVar17 = *(uint *)(lVar14 + 0xa0) & 0x8f;
  if ((uVar17 - 8 < 4) &&
     (cVar7 = (**(code **)(**(longlong **)(lVar14 + 0x98) + 0x30))
                        (*(longlong **)(lVar14 + 0x98),*(undefined8 *)(lVar14 + 0xa8),0,"addChildAt"
                         ,&local_a8,2,uVar17 == 10), cVar7 != '\0')) {
    puVar8 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1[2] + 8,local_48);
    local_c0 = (longlong *)puVar8[1];
    local_c8 = *puVar8;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
      UNLOCK();
    }
    lVar14 = *(longlong *)*param_1;
    puVar8 = (undefined8 *)(lVar14 + 0xd0);
    if (puVar8 != &local_c8) {
      *puVar8 = local_c8;
      local_c8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(lVar14 + 0xd8,&local_c0);
    }
    plVar3 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c0 + 1;
      lVar14 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      lVar14 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    TArray<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,TSizedDefaultAllocator<32>_>
    ::AddUniqueImpl<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>_const_&>
              (param_1[2] + 0xe0,*param_1);
    local_d8 = (void *)0x0;
    local_d0 = *(int *)(param_1[2] + 0x30);
    lVar13 = (longlong)local_d0;
    lVar14 = *(longlong *)*param_1;
    pvVar19 = *(void **)(param_1[2] + 0x28);
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_d8,(2 - (uint)(local_d0 != 0)) + local_d0,0);
    pvVar15 = local_d8;
    _guard_xfg_dispatch_icall_nop(local_d8,pvVar19,lVar13 * 2);
    iVar9 = local_d0;
    lVar13 = (longlong)local_d0;
    local_d0 = (2 - (uint)(local_d0 != 0)) + local_d0;
    if (local_cc < local_d0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,iVar9);
      pvVar15 = local_d8;
    }
    pvVar19 = (void *)0x0;
    iVar18 = 0;
    puVar4 = (undefined2 *)((longlong)pvVar15 + (lVar13 - (ulonglong)(iVar9 != 0)) * 2);
    *puVar4 = 0x2e;
    puVar4[1] = 0;
    iVar9 = *(int *)(lVar14 + 0x20);
    if (local_d0 < 2) {
      pvVar5 = *(void **)(lVar14 + 0x18);
      local_b8 = (void *)0x0;
      local_b0 = iVar9;
      if (iVar9 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,iVar9);
        pvVar19 = local_b8;
        _guard_xfg_dispatch_icall_nop(local_b8,pvVar5,(longlong)iVar9 * 2);
        iVar18 = local_ac;
        iVar9 = local_b0;
      }
    }
    else {
      iVar10 = iVar9 + -1;
      if (iVar9 == 0) {
        iVar10 = iVar18;
      }
      if ((local_d0 != 0) || (iVar9 = 1, iVar10 == 0)) {
        iVar9 = iVar18;
      }
      iVar9 = iVar10 + iVar9 + local_d0;
      local_e8 = pvVar15;
      local_e0 = local_d0;
      local_dc = local_cc;
      if (local_cc < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_e8,iVar9);
      }
      iVar6 = local_e0;
      pvVar5 = *(void **)(lVar14 + 0x18);
      pvVar15 = pvVar19;
      pvVar19 = local_e8;
      iVar18 = local_dc;
      iVar9 = local_e0;
      if (iVar10 != 0) {
        lVar14 = (longlong)local_e0;
        local_e0 = iVar10 + (uint)(local_e0 == 0) + local_e0;
        if (local_dc < local_e0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,iVar6,0);
        }
        iVar9 = local_e0;
        pvVar19 = local_e8;
        pvVar15 = (void *)((longlong)local_e8 + (lVar14 - (ulonglong)(iVar6 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar15,pvVar5,(longlong)iVar10 * 2);
        *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar15) = 0;
        pvVar15 = (void *)0x0;
        iVar18 = local_dc;
      }
    }
    lVar14 = *(longlong *)*param_1;
    ppvVar11 = (void **)(lVar14 + 0x28);
    if (ppvVar11 == &local_b8) {
      if (pvVar19 != (void *)0x0) {
        FMemory::Free(pvVar19);
      }
    }
    else {
      if (*ppvVar11 != (void *)0x0) {
        FMemory::Free();
      }
      *ppvVar11 = pvVar19;
      *(int *)(lVar14 + 0x30) = iVar9;
      *(int *)(lVar14 + 0x34) = iVar18;
    }
    if (pvVar15 != (void *)0x0) {
      FMemory::Free(pvVar15);
    }
    uVar16 = 1;
  }
  else {
    uVar16 = 0;
  }
  puVar12 = local_48;
  do {
    lVar20 = lVar20 + -1;
    if ((*(uint *)(puVar12 + -0x18) >> 6 & 1) != 0) {
      (**(code **)(**(longlong **)(puVar12 + -0x20) + 0x10))
                (*(longlong **)(puVar12 + -0x20),puVar12 + -0x30,*(undefined8 *)(puVar12 + -0x10));
      *(undefined8 *)(puVar12 + -0x20) = 0;
    }
    *(undefined4 *)(puVar12 + -0x18) = 0;
    puVar12 = puVar12 + -0x30;
  } while (lVar20 != 0);
  return uVar16;
}



// FUNCTION 14201d200 FUN_14201d200 body=760 status=ok
// SIG undefined FUN_14201d200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14201d200(longlong *param_1)

{
  char *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  code *local_258 [2];
  undefined1 local_248 [32];
  undefined8 local_228;
  undefined4 local_218;
  code *local_208 [2];
  undefined1 local_1f8 [32];
  undefined8 local_1d8;
  undefined4 local_1c8;
  undefined1 local_1b8 [80];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_118 [192];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  FUN_1432bfaf0(&local_168);
  lVar2 = *param_1;
  pcVar1 = (char *)(*(longlong *)(lVar2 + 0x78) + 0x30);
  LOCK();
  cVar10 = *pcVar1;
  if (cVar10 == '\0') {
    *pcVar1 = '\0';
    cVar10 = '\0';
  }
  UNLOCK();
  if (cVar10 < '\x06') {
    cVar10 = FUN_142045c10(*(undefined8 *)(lVar2 + 0x78));
    if (cVar10 == '\0') {
      uStack_260 = &local_168;
      local_228 = 0;
      local_218 = 0;
      local_268 = lVar2;
      puVar12 = (undefined8 *)FUN_140438ef0(0x18,local_248);
      if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar12 + 1) = (undefined4)local_268;
        *(undefined4 *)((longlong)puVar12 + 0xc) = local_268._4_4_;
        *(undefined4 *)(puVar12 + 2) = (undefined4)uStack_260;
        *(undefined4 *)((longlong)puVar12 + 0x14) = uStack_260._4_4_;
      }
      local_278 = 0;
      local_258[0] = FUN_14202c850;
      local_270 = 0x1e;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_278,0);
      FGenericPlatformString::Memcpy(local_278,L"FGFxObject::GetColorTransform",0x3c);
      FUN_1410b2c00(local_118,&local_278,local_258);
      uVar11 = FUN_1410ca7e0(local_118,local_1b8);
      FUN_1420326d0(lVar2,uVar11);
      FUN_140d1b3a0(local_118);
      cVar10 = *(char *)(local_58 + 0x58);
      while (cVar10 == '\0') {
        (**(code **)(**(longlong **)(local_58 + 0x50) + 0x20))
                  (*(longlong **)(local_58 + 0x50),0x5d638865,0);
        cVar10 = *(char *)(local_58 + 0x58);
      }
      cVar10 = *(char *)(local_58 + 0x60);
      FUN_140ce1dc0(local_118);
    }
    else {
      if (((byte)*(undefined4 *)(lVar2 + 0xa0) & 0x8f) != 10) {
        return;
      }
      cVar10 = (**(code **)(**(longlong **)(lVar2 + 0x98) + 0x110))
                         (*(longlong **)(lVar2 + 0x98),*(undefined8 *)(lVar2 + 0xa8),&local_168);
    }
    if (cVar10 != '\0') {
      uVar6 = (int)param_1[1];
      uVar7 = *(undefined4 *)((longlong)param_1 + 0xc);
      uVar8 = (int)param_1[2];
      uVar9 = *(undefined4 *)((longlong)param_1 + 0x14);
      if ((char)param_1[3] != '\0') {
        local_168 = (int)param_1[1];
        uStack_164 = *(undefined4 *)((longlong)param_1 + 0xc);
        uStack_160 = (int)param_1[2];
        uStack_15c = *(undefined4 *)((longlong)param_1 + 0x14);
        uVar6 = local_158;
        uVar7 = uStack_154;
        uVar8 = uStack_150;
        uVar9 = uStack_14c;
      }
      uStack_14c = uVar9;
      uStack_150 = uVar8;
      uStack_154 = uVar7;
      local_158 = uVar6;
      lVar2 = *param_1;
      pcVar1 = (char *)(*(longlong *)(lVar2 + 0x78) + 0x30);
      LOCK();
      cVar10 = *pcVar1;
      if (cVar10 == '\0') {
        *pcVar1 = '\0';
        cVar10 = '\0';
      }
      UNLOCK();
      if (cVar10 < '\x06') {
        cVar10 = FUN_142045c10(*(undefined8 *)(lVar2 + 0x78));
        if (cVar10 == '\0') {
          uVar11 = CONCAT44(uStack_164,local_168);
          uVar3 = CONCAT44(uStack_15c,uStack_160);
          uVar4 = CONCAT44(uStack_154,local_158);
          uVar5 = CONCAT44(uStack_14c,uStack_150);
          local_1d8 = 0;
          local_1c8 = 0;
          local_148 = lVar2;
          puVar12 = (undefined8 *)FUN_140438ef0(0x40,local_1f8);
          if (puVar12 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar12 + 2) = (undefined4)local_148;
            *(undefined4 *)((longlong)puVar12 + 0x14) = local_148._4_4_;
            *(undefined4 *)(puVar12 + 3) = uStack_140;
            *(undefined4 *)((longlong)puVar12 + 0x1c) = uStack_13c;
            *puVar12 = &PTR_FUN_144f71be8;
            puVar12[4] = uVar11;
            puVar12[5] = uVar3;
            puVar12[6] = uVar4;
            puVar12[7] = uVar5;
          }
          local_208[0] = FUN_14202c7e0;
          FUN_14204c6c0(lVar2,local_208);
        }
        else if (((byte)*(undefined4 *)(lVar2 + 0xa0) & 0x8f) == 10) {
          local_148 = CONCAT44(uStack_164,local_168);
          uStack_140 = uStack_160;
          uStack_13c = uStack_15c;
          local_138 = local_158;
          uStack_134 = uStack_154;
          uStack_130 = uStack_150;
          uStack_12c = uStack_14c;
          (**(code **)(**(longlong **)(lVar2 + 0x98) + 0x118))
                    (*(longlong **)(lVar2 + 0x98),*(undefined8 *)(lVar2 + 0xa8),&local_148);
        }
      }
    }
  }
  return;
}



// FUNCTION 14201d500 FUN_14201d500 body=271 status=ok
// SIG undefined FUN_14201d500(void)

undefined8 FUN_14201d500(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  
  lVar1 = *param_1;
  uVar7 = *(uint *)(lVar1 + 0xa0) & 0x8f;
  if (uVar7 - 8 < 4) {
    cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x98) + 0x30))
                      (*(longlong **)(lVar1 + 0x98),*(undefined8 *)(lVar1 + 0xa8),0,"removeChild",
                       *(longlong *)param_1[1] + 0x88,1,uVar7 == 10);
    if (cVar3 != '\0') {
      plVar2 = *(longlong **)(*param_1 + 0xe0);
      if (plVar2 != plVar2 + (longlong)*(int *)(*param_1 + 0xe8) * 2) {
        plVar5 = plVar2;
        while (*plVar5 != *(longlong *)param_1[1]) {
          plVar5 = plVar5 + 2;
          if (plVar5 == plVar2 + (longlong)*(int *)(*param_1 + 0xe8) * 2) {
            return 1;
          }
        }
        uVar6 = (longlong)plVar5 - (longlong)plVar2 >> 4;
        iVar4 = (int)uVar6;
        if (iVar4 != -1) {
          if (*(char *)param_1[2] != '\0') {
            (*(code *)**(undefined8 **)plVar2[(longlong)iVar4 * 2])();
          }
          TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                    (*param_1 + 0xe0,uVar6 & 0xffffffff,1,1);
        }
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14201d610 FUN_14201d610 body=320 status=ok
// SIG undefined FUN_14201d610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14201d610(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [24];
  double local_e0;
  double local_d8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ushort local_24;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  lVar1 = *param_1;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_24 = 0;
  local_98 = 0x3f800000;
  local_88 = 0x3f80000000000000;
  local_70 = 0x3f800000;
  local_68 = 0x3f800000;
  local_58 = 0x3f80000000000000;
  local_40 = 0x3f800000;
  local_30 = 0x3f80000000000000;
  if (((byte)*(undefined4 *)(lVar1 + 0xa0) & 0x8f) == 10) {
    cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x98) + 0xd8))
                      (*(longlong **)(lVar1 + 0x98),*(undefined8 *)(lVar1 + 0xa8),local_f8);
    if (cVar3 != '\0') {
      if ((*(float *)(param_1 + 1) != (float)local_e0) ||
         ((float)local_d8 != *(float *)((longlong)param_1 + 0xc))) {
        local_24 = local_24 | 0x18;
        local_e0 = (double)*(float *)(param_1 + 1);
        local_d8 = (double)*(float *)((longlong)param_1 + 0xc);
        plVar2 = *(longlong **)(*param_1 + 0x98);
        (**(code **)(*plVar2 + 0xe0))(plVar2,*(undefined8 *)(*param_1 + 0xa8),local_f8);
      }
    }
  }
  return;
}



// FUNCTION 14201d750 FUN_14201d750 body=479 status=ok
// SIG undefined FUN_14201d750(void)

bool FUN_14201d750(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  
  plVar5 = (longlong *)param_1[2];
  local_60 = *param_1;
  local_58 = param_1[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  iVar7 = 0;
  local_50 = plVar5;
  if ((local_60 == DAT_1469ea3d8) || (local_60 == DAT_1469ea3f0)) {
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
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    uVar8 = 0xff1c;
  }
  else if ((local_60 == DAT_1469ea408) || (local_60 == DAT_1469ea420)) {
    FKey::~FKey(&local_60);
    uVar8 = 0xff1b;
  }
  else {
    FKey::~FKey(&local_60);
    uVar8 = 0;
  }
  plVar5 = (longlong *)param_1[2];
  local_48 = *param_1;
  local_40 = param_1[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  uVar3 = (undefined4)param_1[3];
  local_38 = plVar5;
  if ((local_48 == DAT_1469ea3d8) || (local_48 == DAT_1469ea408)) {
    uVar9 = 0;
    local_68 = uVar3;
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
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  else if ((local_48 == DAT_1469ea3f0) || (local_48 == DAT_1469ea420)) {
    FKey::~FKey(&local_48);
    local_68 = 0;
    uVar9 = uVar3;
  }
  else {
    FKey::~FKey(&local_48);
    local_68 = 0;
    uVar9 = 0;
  }
  local_6c = (undefined1)param_1[6];
  local_74 = 0;
  local_78 = 0x12;
  plVar5 = *(longlong **)(param_1[4] + 0x78);
  if (plVar5 != (longlong *)0x0) {
    local_70 = uVar8;
    local_64 = uVar9;
    iVar7 = (**(code **)(*plVar5 + 0x118))(plVar5,&local_78);
  }
  return iVar7 == 1;
}



// FUNCTION 14201d930 FUN_14201d930 body=158 status=ok
// SIG undefined FUN_14201d930(void)

bool FUN_14201d930(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  
  puVar7 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 1) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*param_1;
  }
  if (*(int *)(*param_2 + 0x20) != 0) {
    puVar7 = *(undefined2 **)(*param_2 + 0x18);
  }
  iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
  plVar4 = (longlong *)param_2[1];
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
    return iVar6 == 0;
  }
  return iVar6 == 0;
}



// FUNCTION 14201d9d0 FUN_14201d9d0 body=418 status=ok
// SIG undefined FUN_14201d9d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14201d9d0(undefined8 *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 auStack_238 [32];
  undefined4 local_218;
  undefined8 local_210;
  undefined8 local_208;
  longlong local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  undefined1 local_1d8 [128];
  longlong local_158;
  undefined1 local_138 [256];
  longlong local_38;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  if (*(int *)((undefined8 *)param_1[3] + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = *(undefined2 **)param_1[3];
  }
  lVar2 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_1d8,puVar5);
  uVar4 = *(undefined8 *)(lVar2 + 0x88);
  local_208 = *(undefined8 *)param_1[1];
  local_200 = ((undefined8 *)param_1[1])[1];
  if (local_200 != 0) {
    LOCK();
    *(int *)(local_200 + 8) = *(int *)(local_200 + 8) + 1;
    UNLOCK();
  }
  uVar3 = 0;
  local_210 = 0;
  local_218 = 0xffffffff;
  cVar1 = FUN_14202abd0(*(undefined8 *)*param_1,&local_208,*(undefined8 *)param_1[2],uVar4);
  if (local_158 != 0) {
    FMemory::Free();
  }
  if (cVar1 == '\0') {
    TStringConversion<TStringConvert<char,wchar_t>,128>::
    TStringConversion<TStringConvert<char,wchar_t>,128>(local_138,*(undefined8 *)param_1[2]);
    if (local_38 != 0) {
      FMemory::Free();
    }
    uVar4 = 0;
  }
  else {
    FUN_14204d040(*(undefined8 *)param_1[1]);
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              (*(longlong *)param_1[1] + 0xf0,param_1[4]);
    local_1f8 = *(undefined8 *)param_1[1];
    local_1f0 = ((undefined8 *)param_1[1])[1];
    if (local_1f0 != 0) {
      LOCK();
      *(int *)(local_1f0 + 8) = *(int *)(local_1f0 + 8) + 1;
      UNLOCK();
    }
    FUN_14202bd00(param_1[5],&local_1f8);
    local_1e8 = *(undefined8 *)param_1[1];
    local_1e0 = ((undefined8 *)param_1[1])[1];
    if (local_1e0 != 0) {
      LOCK();
      *(int *)(local_1e0 + 8) = *(int *)(local_1e0 + 8) + 1;
      UNLOCK();
    }
    lVar2 = param_1[5];
    cVar1 = FWeakObjectPtr::IsValid(lVar2 + 0x70,0,1);
    if (cVar1 != '\0') {
      uVar3 = FWeakObjectPtr::Get(lVar2 + 0x70);
    }
    uVar4 = FUN_142030610(uVar3,*(undefined8 *)param_1[6],&local_1e8);
  }
  return uVar4;
}



// FUNCTION 14201db80 FUN_14201db80 body=273 status=ok
// SIG undefined FUN_14201db80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14201db80(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [96];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ushort local_24;
  char local_22;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  lVar1 = *param_1;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_24 = 0;
  local_98 = 0x3f800000;
  local_88 = 0x3f80000000000000;
  local_70 = 0x3f800000;
  local_68 = 0x3f800000;
  local_58 = 0x3f80000000000000;
  local_40 = 0x3f800000;
  local_30 = 0x3f80000000000000;
  if (((byte)*(undefined4 *)(lVar1 + 0xa0) & 0x8f) == 10) {
    cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x98) + 0xd8))
                      (*(longlong **)(lVar1 + 0x98),*(undefined8 *)(lVar1 + 0xa8),local_f8);
    if ((cVar3 != '\0') && ((char)param_1[1] != local_22)) {
      local_24 = local_24 | 0x40;
      plVar2 = *(longlong **)(*param_1 + 0x98);
      local_22 = (char)param_1[1];
      (**(code **)(*plVar2 + 0xe0))(plVar2,*(undefined8 *)(*param_1 + 0xa8),local_f8);
    }
  }
  return;
}



// FUNCTION 14201dca0 FUN_14201dca0 body=976 status=ok
// SIG undefined FUN_14201dca0(void)

undefined8 FUN_14201dca0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  void *_Dst;
  void *pvVar5;
  int iVar6;
  char cVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  void **ppvVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  void *pvVar16;
  void *pvVar17;
  void *local_88;
  int local_80;
  int local_7c;
  void *local_78;
  int local_70;
  int local_6c;
  undefined8 local_68;
  longlong *local_60;
  void *local_58;
  int local_50;
  int local_4c;
  undefined1 local_48 [8];
  longlong *local_40;
  
  if ((param_1[3] != 0) && (param_1[4] != 0)) {
    pvVar17 = (void *)0x0;
    piVar1 = (int *)(param_1[4] + 8);
    LOCK();
    iVar12 = *piVar1;
    iVar9 = 0;
    if (iVar12 == 0) {
      *piVar1 = 0;
      iVar12 = 0;
    }
    UNLOCK();
    if (0 < iVar12) {
      lVar14 = *param_1;
      uVar15 = *(uint *)(lVar14 + 0xa0) & 0x8f;
      if (uVar15 - 8 < 4) {
        plVar2 = param_1 + 1;
        cVar7 = (**(code **)(**(longlong **)(lVar14 + 0x98) + 0x30))
                          (*(longlong **)(lVar14 + 0x98),*(undefined8 *)(lVar14 + 0xa8),0,"addChild"
                           ,*plVar2 + 0x88,1,uVar15 == 10);
        if (cVar7 != '\0') {
          puVar8 = (undefined8 *)
                   TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(*param_1 + 8,local_48);
          local_60 = (longlong *)puVar8[1];
          local_68 = *puVar8;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
          }
          lVar14 = *plVar2;
          puVar8 = (undefined8 *)(lVar14 + 0xd0);
          if (puVar8 != &local_68) {
            *puVar8 = local_68;
            local_68 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(lVar14 + 0xd8,&local_60);
          }
          plVar4 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_60 + 1;
            lVar14 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              iVar12 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*local_60 + 8))(local_60,1);
              }
            }
          }
          if (local_40 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_40 + 1;
            lVar14 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*local_40)(local_40);
              LOCK();
              piVar1 = (int *)((longlong)local_40 + 0xc);
              iVar12 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*local_40 + 8))(local_40,1);
              }
            }
          }
          TArray<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,TSizedDefaultAllocator<32>_>
          ::AddUniqueImpl<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>_const_&>
                    (*param_1 + 0xe0,plVar2);
          lVar14 = *plVar2;
          local_78 = (void *)0x0;
          local_70 = *(int *)(*param_1 + 0x30);
          lVar13 = (longlong)local_70;
          pvVar5 = *(void **)(*param_1 + 0x28);
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                    (&local_78,(2 - (uint)(local_70 != 0)) + local_70,0);
          pvVar16 = local_78;
          _guard_xfg_dispatch_icall_nop(local_78,pvVar5,lVar13 * 2);
          iVar12 = local_70;
          lVar13 = (longlong)local_70;
          local_70 = (2 - (uint)(local_70 != 0)) + local_70;
          if (local_6c < local_70) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar12);
            pvVar16 = local_78;
          }
          lVar13 = (lVar13 - (ulonglong)(iVar12 != 0)) * 2;
          *(undefined2 *)(lVar13 + (longlong)pvVar16) = 0x2e;
          *(undefined2 *)(lVar13 + 2 + (longlong)pvVar16) = 0;
          iVar12 = *(int *)(lVar14 + 0x20);
          if (local_70 < 2) {
            pvVar5 = *(void **)(lVar14 + 0x18);
            local_58 = (void *)0x0;
            local_50 = iVar12;
            if (iVar12 != 0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,iVar12,0);
              pvVar17 = local_58;
              _guard_xfg_dispatch_icall_nop(local_58,pvVar5,(longlong)iVar12 * 2);
              iVar12 = local_50;
              iVar9 = local_4c;
            }
          }
          else {
            iVar10 = iVar12 + -1;
            if (iVar12 == 0) {
              iVar10 = iVar9;
            }
            if ((local_70 == 0) && (iVar10 != 0)) {
              iVar9 = 1;
            }
            iVar9 = iVar10 + iVar9 + local_70;
            local_88 = pvVar16;
            local_80 = local_70;
            local_7c = local_6c;
            if (local_6c < iVar9) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_88,iVar9);
            }
            iVar6 = local_80;
            pvVar5 = *(void **)(lVar14 + 0x18);
            pvVar16 = pvVar17;
            pvVar17 = local_88;
            iVar12 = local_80;
            iVar9 = local_7c;
            if (iVar10 != 0) {
              lVar14 = (longlong)local_80;
              local_80 = local_80 + (uint)(local_80 == 0) + iVar10;
              if (local_7c < local_80) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar6);
              }
              iVar12 = local_80;
              pvVar17 = local_88;
              _Dst = (void *)((longlong)local_88 + (lVar14 - (ulonglong)(iVar6 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(_Dst,pvVar5,(longlong)iVar10 * 2);
              *(undefined2 *)((longlong)_Dst + (longlong)iVar10 * 2) = 0;
              iVar9 = local_7c;
            }
          }
          lVar14 = *plVar2;
          ppvVar11 = (void **)(lVar14 + 0x28);
          if (ppvVar11 == &local_58) {
            if (pvVar17 != (void *)0x0) {
              FMemory::Free(pvVar17);
            }
          }
          else {
            if (*ppvVar11 != (void *)0x0) {
              FMemory::Free();
            }
            *ppvVar11 = pvVar17;
            *(int *)(lVar14 + 0x30) = iVar12;
            *(int *)(lVar14 + 0x34) = iVar9;
          }
          if (pvVar16 != (void *)0x0) {
            FMemory::Free(pvVar16);
          }
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14201e070 FUN_14201e070 body=481 status=ok
// SIG undefined FUN_14201e070(void)

void FUN_14201e070(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  lVar9 = *param_1;
  if ((*(uint *)(lVar9 + 0xa0) & 0x8f) - 8 < 4) {
    iVar10 = *(int *)(lVar9 + 200);
    puVar8 = *(undefined8 **)(lVar9 + 0xc0);
    lVar3 = param_1[3];
    puVar11 = puVar8;
    if (puVar8 != puVar8 + (longlong)iVar10 * 2) {
      do {
        plVar4 = (longlong *)puVar11[1];
        plVar5 = (longlong *)*puVar11;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        lVar9 = *plVar5;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar4 + 1;
          lVar7 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        if (lVar3 == lVar9) {
          lVar9 = *param_1;
          iVar10 = (int)((longlong)puVar11 - (longlong)puVar8 >> 4);
          goto LAB_14201e15f;
        }
        puVar11 = puVar11 + 2;
      } while (puVar11 != puVar8 + (longlong)iVar10 * 2);
      lVar9 = *param_1;
    }
    iVar10 = -1;
  }
  else {
    iVar10 = -1;
  }
LAB_14201e15f:
  if ((iVar10 < 0) || (*(int *)(lVar9 + 200) <= iVar10)) {
    puVar8 = *(undefined8 **)(lVar9 + 0xe0);
    puVar11 = puVar8 + (longlong)*(int *)(lVar9 + 0xe8) * 2;
    for (; puVar8 != puVar11; puVar8 = puVar8 + 2) {
      plVar4 = (longlong *)puVar8[1];
      uVar6 = *puVar8;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      FUN_14204e6f0(uVar6,param_1 + 3);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar4 + 1;
        lVar9 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
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
  }
  else {
    puVar8 = (undefined8 *)((longlong)iVar10 * 0x10 + *(longlong *)(lVar9 + 0xc0));
    local_38 = *puVar8;
    local_30 = puVar8[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    local_28 = param_1[1];
    local_20 = param_1[2];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_14204e310(*(undefined8 *)(*param_1 + 0x78),&local_28,&local_38);
  }
  return;
}



// FUNCTION 14201e260 FUN_14201e260 body=326 status=ok
// SIG undefined FUN_14201e260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_14201e260(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [80];
  undefined1 *local_78 [2];
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
  local_78[0] = &LAB_14202be10;
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



// FUNCTION 14201e3b0 FUN_14201e3b0 body=362 status=ok
// SIG undefined FUN_14201e3b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14201e3b0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [24];
  double local_e0;
  double local_d8;
  double local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ushort local_24;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  lVar1 = *param_1;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_24 = 0;
  local_98 = 0x3f800000;
  local_88 = 0x3f80000000000000;
  local_70 = 0x3f800000;
  local_68 = 0x3f800000;
  local_58 = 0x3f80000000000000;
  local_40 = 0x3f800000;
  local_30 = 0x3f80000000000000;
  if (((byte)*(undefined4 *)(lVar1 + 0xa0) & 0x8f) == 10) {
    cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x98) + 0xd8))
                      (*(longlong **)(lVar1 + 0x98),*(undefined8 *)(lVar1 + 0xa8),local_f8);
    if (cVar3 != '\0') {
      if (((*(float *)(param_1 + 1) != (float)local_e0) ||
          ((float)local_d8 != *(float *)((longlong)param_1 + 0xc))) ||
         ((float)local_b0 != *(float *)(param_1 + 2))) {
        local_e0 = (double)*(float *)(param_1 + 1);
        local_24 = local_24 | 0x418;
        local_b0 = (double)*(float *)(param_1 + 2);
        local_d8 = (double)*(float *)((longlong)param_1 + 0xc);
        plVar2 = *(longlong **)(*param_1 + 0x98);
        (**(code **)(*plVar2 + 0xe0))(plVar2,*(undefined8 *)(*param_1 + 0xa8),local_f8);
      }
    }
  }
  return;
}



// FUNCTION 14201e520 FUN_14201e520 body=620 status=ok
// SIG undefined FUN_14201e520(void)

void FUN_14201e520(ulonglong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  int iVar13;
  uint local_98;
  uint uStack_94;
  int iStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  uint uStack_48;
  uint uStack_44;
  undefined *local_40;
  uint uStack_38;
  int iStack_34;
  undefined8 local_30;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_146accc70);
  uVar10 = 0;
  uStack_94 = 1;
  local_98 = 0;
  uStack_80 = 0;
  iStack_84 = 0;
  iVar13 = (int)DAT_1464f0718;
  if (iVar13 != 0) {
    puVar12 = DAT_1464f0710;
    if (DAT_1464f0710 == (uint *)0x0) {
      puVar12 = (uint *)&DAT_1464f0700;
    }
    uVar2 = *puVar12;
    uVar7 = uVar10;
    uVar11 = uVar10;
    while (uVar2 == 0) {
      iVar6 = (int)uVar11;
      uStack_80 = (int)uVar7 + 0x20;
      uVar7 = (ulonglong)uStack_80;
      local_98 = iVar6 + 1;
      uVar11 = (ulonglong)local_98;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_14201e60d;
      uVar2 = puVar12[(longlong)iVar6 + 1];
    }
    uStack_94 = -uVar2 & uVar2;
    iVar6 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_84 = (uStack_80 - iVar6) + 0x1f;
    if (iVar13 < iStack_84) {
LAB_14201e60d:
      iStack_84 = iVar13;
    }
  }
  uStack_38 = 0xffffffff;
  iStack_34 = iStack_84;
  local_30 = CONCAT44(uStack_7c,uStack_80);
  uStack_48 = local_98;
  uStack_44 = uStack_94;
  local_40 = &DAT_1464f0700;
  while( true ) {
    if ((iStack_34 == iVar13) && (local_40 == &DAT_1464f0700)) goto LAB_14201e75e;
    plVar3 = *(longlong **)((longlong)iStack_34 * 0x20 + 0x10 + DAT_1464f06f0);
    plVar4 = *(longlong **)((longlong)iStack_34 * 0x20 + 8 + DAT_1464f06f0);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    uVar7 = uVar10;
    if (*plVar4 != 0) {
      uVar7 = *(ulonglong *)(*plVar4 + 0x10);
    }
    if (*param_1 == uVar7) break;
    if (plVar3 != (longlong *)0x0) {
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
    uStack_38 = uStack_38 & ~uStack_44;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_48);
  }
  if ((int)plVar4[5] == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    uVar10 = (ulonglong)((int)plVar4[5] * 2 - 2);
    puVar9 = (undefined2 *)plVar4[4];
  }
  uVar8 = FFnv::MemFnv64(puVar9,uVar10,1);
  FUN_1407f9040(&DAT_1464f06f0,uVar8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
LAB_14201e75e:
                    /* WARNING: Could not recover jumptable at 0x00014201e785. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_146accc70);
  return;
}



// FUNCTION 14201e790 FUN_14201e790 body=299 status=ok
// SIG undefined FUN_14201e790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14201e790(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  puVar6 = *(undefined8 **)(*param_1 + 0x140);
  puVar7 = puVar6 + (longlong)*(int *)(*param_1 + 0x148) * 2;
  for (; puVar6 != puVar7; puVar6 = puVar6 + 2) {
    local_38 = *puVar6;
    plVar4 = (longlong *)puVar6[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_28 = 0;
    uStack_20 = 0;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    plStack_30 = plVar4;
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
          (**(code **)(*plStack_30 + 8))(plStack_30,1);
        }
      }
    }
    plVar4 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_40 + 8))(plStack_40,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14201e8c0 FUN_14201e8c0 body=953 status=ok
// SIG undefined FUN_14201e8c0(void)

undefined8 FUN_14201e8c0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *plStack_a0;
  longlong local_98;
  longlong *plStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  
  lVar12 = 0;
  uVar13 = 2;
  lVar3 = *(longlong *)*param_1;
  if (lVar3 == 0) {
    plVar7 = &local_98;
    local_98 = 0;
    plStack_90 = (longlong *)0x0;
    uVar10 = uVar13;
    goto LAB_14201ea57;
  }
  if ((*(longlong *)(lVar3 + 0x28) == 0) || (*(longlong *)(lVar3 + 0x30) == 0)) {
LAB_14201e987:
    plVar7 = &local_a8;
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    uVar10 = 9;
    lVar12 = 0;
  }
  else {
    piVar1 = (int *)(*(longlong *)(lVar3 + 0x30) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (iVar6 < 1) goto LAB_14201e987;
    local_c0 = *(longlong **)(lVar3 + 0x30);
    local_c8 = 0;
    if (local_c0 == (longlong *)0x0) {
LAB_14201e978:
      plVar7 = &local_c8;
      uVar10 = 5;
      lVar12 = local_c8;
    }
    else {
      LOCK();
      iVar6 = (int)local_c0[1];
      bVar14 = iVar6 == 0;
      if (bVar14) {
        *(int *)(local_c0 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      while (!bVar14) {
        LOCK();
        bVar14 = iVar6 == (int)local_c0[1];
        if (bVar14) {
          *(int *)(local_c0 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar14) {
          if (local_c0 != (longlong *)0x0) {
            local_c8 = *(longlong *)(lVar3 + 0x28);
          }
          goto LAB_14201e978;
        }
        LOCK();
        iVar6 = (int)local_c0[1];
        bVar14 = iVar6 == 0;
        if (bVar14) {
          *(int *)(local_c0 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
      }
      plVar7 = &local_c8;
      local_c0 = (longlong *)0x0;
      uVar10 = 5;
      lVar12 = 0;
    }
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  local_b0 = plVar4;
  *plVar7 = 0;
  plVar7 = plStack_a0;
  local_b8 = lVar12;
  if (((uVar10 & 8) != 0) &&
     (uVar10 = (ulonglong)((uint)uVar10 & 0xfffffff7), plStack_a0 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_a0 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
      }
    }
  }
  plVar7 = local_c0;
  if (((uVar10 & 4) != 0) &&
     (uVar10 = (ulonglong)((uint)uVar10 & 0xfffffffb), local_c0 != (longlong *)0x0)) {
    LOCK();
    plVar4 = local_c0 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  plVar7 = &local_b8;
LAB_14201ea57:
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_90;
  if (((uVar10 & 2) != 0) &&
     (uVar10 = (ulonglong)((uint)uVar10 & 0xfffffffd), plStack_90 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_90 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  plVar7 = local_b0;
  if (((uVar10 & 1) != 0) && (local_b0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_b0 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  if (lVar12 == 0) {
    uVar11 = 0;
  }
  else {
    local_88 = 0xffffffffffffffff;
    uStack_80 = 0xffffffffffffffff;
    local_78 = (longlong *)0x0;
    local_70 = *(undefined4 *)(lVar12 + 0xa0);
    local_68 = *(undefined8 *)(lVar12 + 0xa8);
    local_60 = *(undefined8 *)(lVar12 + 0xb0);
    if ((*(uint *)(lVar12 + 0xa0) >> 6 & 1) != 0) {
      local_78 = *(longlong **)(lVar12 + 0x98);
      (**(code **)(*local_78 + 8))(local_78,&local_88);
    }
    lVar3 = param_1[2];
    local_58 = 0xffffffffffffffff;
    uStack_50 = 0xffffffffffffffff;
    local_48 = 0;
    local_40 = 3;
    local_38 = *(undefined4 *)param_1[1];
    uVar8 = *(uint *)(lVar3 + 0xa0) & 0x8f;
    if ((uVar8 - 8 < 4) &&
       (cVar5 = (**(code **)(**(longlong **)(lVar3 + 0x98) + 0x30))
                          (*(longlong **)(lVar3 + 0x98),*(undefined8 *)(lVar3 + 0xa8),0,
                           "setChildIndex",&local_88,2,uVar8 == 10), cVar5 != '\0')) {
      uVar11 = 1;
    }
    else {
      uVar11 = 0;
    }
    puVar9 = &stack0xffffffffffffffd8;
    do {
      uVar13 = uVar13 - 1;
      if ((*(uint *)(puVar9 + -0x18) >> 6 & 1) != 0) {
        (**(code **)(**(longlong **)(puVar9 + -0x20) + 0x10))
                  (*(longlong **)(puVar9 + -0x20),puVar9 + -0x30,*(undefined8 *)(puVar9 + -0x10));
        *(undefined8 *)(puVar9 + -0x20) = 0;
      }
      *(undefined4 *)(puVar9 + -0x18) = 0;
      puVar9 = puVar9 + -0x30;
    } while (uVar13 != 0);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return uVar11;
}



// FUNCTION 14201ec80 FUN_14201ec80 body=194 status=ok
// SIG undefined FUN_14201ec80(void)

void FUN_14201ec80(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 local_res8 [2];
  
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
  puVar4 = (undefined4 *)(*(code *)param_1[2])(local_res8,uVar3);
  uVar1 = *puVar4;
  *puVar4 = 0xffffffff;
  FUN_1416f8340(local_res8[0]);
  puVar2 = *(undefined8 **)*param_1;
  uVar3 = FUN_1416f8720(uVar1);
  FUN_14170c210(puVar2 + 0xc,uVar3);
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
  FUN_1416f8340(uVar1);
  return;
}



// FUNCTION 14201ed50 FUN_14201ed50 body=191 status=ok
// SIG undefined FUN_14201ed50(void)

void FUN_14201ed50(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  longlong lVar6;
  bool bVar7;
  
  if (*(longlong *)(*param_1 + 0x78) == 0) {
    return;
  }
  piVar1 = (int *)(*param_1 + 0xa0);
  LOCK();
  bVar7 = *piVar1 == 0;
  if (bVar7) {
    *piVar1 = 0;
  }
  UNLOCK();
  (**(code **)(**(longlong **)(*param_1 + 0x78) + 0xf0))(*(longlong **)(*param_1 + 0x78),!bVar7);
  lVar3 = DAT_146acca50;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    lVar6 = 4;
    if (DVar5 != DAT_1468c21c0) goto LAB_14201edc9;
  }
  lVar6 = 0;
LAB_14201edc9:
  if (*(int *)(lVar6 + lVar3) != 0) {
    LOCK();
    bVar7 = *(int *)(*param_1 + 0xa0) == 0;
    if (bVar7) {
      *(int *)(*param_1 + 0xa0) = 0;
    }
    UNLOCK();
    plVar2 = *(longlong **)(*param_1 + 0x78);
    if (!bVar7) {
                    /* WARNING: Could not recover jumptable at 0x00014201edfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x30))(plVar2,1);
      return;
    }
    (**(code **)(*plVar2 + 0x30))(plVar2,0);
  }
  return;
}



// FUNCTION 14201ee10 FUN_14201ee10 body=280 status=ok
// SIG undefined FUN_14201ee10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14201ee10(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  double local_e8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ushort local_24;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  lVar1 = *param_1;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_24 = 0;
  local_98 = 0x3f800000;
  local_88 = 0x3f80000000000000;
  local_70 = 0x3f800000;
  local_68 = 0x3f800000;
  local_58 = 0x3f80000000000000;
  local_40 = 0x3f800000;
  local_30 = 0x3f80000000000000;
  if (((byte)*(undefined4 *)(lVar1 + 0xa0) & 0x8f) == 10) {
    cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x98) + 0xd8))
                      (*(longlong **)(lVar1 + 0x98),*(undefined8 *)(lVar1 + 0xa8),local_f8);
    if ((cVar3 != '\0') && ((double)param_1[1] != local_e8)) {
      local_24 = local_24 | 4;
      plVar2 = *(longlong **)(*param_1 + 0x98);
      local_e8 = (double)param_1[1];
      (**(code **)(*plVar2 + 0xe0))(plVar2,*(undefined8 *)(*param_1 + 0xa8),local_f8);
    }
  }
  return;
}



// FUNCTION 14201ef30 FUN_14201ef30 body=622 status=ok
// SIG undefined FUN_14201ef30(void)

void FUN_14201ef30(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  code *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  lVar3 = param_1[4];
  plVar4 = (longlong *)param_1[6];
  plVar5 = *(longlong **)(lVar3 + 0x18);
  if ((plVar5 != (longlong *)0x0) && (plVar5 != (longlong *)(lVar3 + 0x20))) {
    (**(code **)(*plVar5 + 0x10))();
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  if (*(longlong **)(lVar3 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar3 + 0x48) + 0x10))();
  }
  *(longlong **)(lVar3 + 0x48) = plVar4;
  *(longlong *)(lVar3 + 0x18) = lVar3 + 0x20;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x208))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014201efae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  plVar4 = (longlong *)param_1[2];
  lVar3 = param_1[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = 0;
  if (param_1[4] != 0) {
    Scaleform::GFx::Resource::AddRef(param_1[4]);
    lVar7 = param_1[4];
  }
  plVar5 = (longlong *)param_1[5];
  plVar10 = (longlong *)0x0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5);
    plVar10 = (longlong *)param_1[5];
  }
  plVar5 = (longlong *)param_1[6];
  plVar9 = (longlong *)0x0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5);
    plVar9 = (longlong *)param_1[6];
  }
  plVar5 = (longlong *)param_1[7];
  plVar8 = (longlong *)0x0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5);
    plVar8 = (longlong *)param_1[7];
  }
  local_48 = 0;
  local_38 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x38,local_68);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_144f71b28;
    puVar6[1] = lVar3;
    puVar6[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (lVar7 != 0) {
      Scaleform::GFx::Resource::AddRef(lVar7);
    }
    puVar6[3] = lVar7;
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
    puVar6[4] = plVar10;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
    puVar6[5] = plVar9;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
    puVar6[6] = plVar8;
  }
  local_78[0] = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_14204c370(param_1[1],local_78);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  if (lVar7 != 0) {
    FUN_1432de450(lVar7);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 14201f1a0 FUN_14201f1a0 body=192 status=ok
// SIG undefined FUN_14201f1a0(void)

ulonglong FUN_14201f1a0(undefined8 param_1,undefined8 param_2)

{
  double dVar1;
  ulonglong uVar2;
  undefined2 *puVar3;
  bool bVar4;
  float local_res18 [4];
  undefined2 *local_28;
  int local_20;
  
  FString::Join<TArray<FString,FDefaultAllocator>_>(&local_28,param_2,&DAT_144740598);
  puVar3 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar3 = local_28;
  }
  local_res18[0] = 0.0;
  FParse::Value(puVar3,L"Budget=",local_res18);
  dVar1 = (double)local_res18[0];
  FUN_14207ba70(&PTR_PTR_1464f05c0,SUB84(dVar1,0));
  if (DAT_146acd048 == '\0') {
    LOCK();
    DAT_146accf28 = (uint)(*DAT_146accf68 != 0);
    UNLOCK();
    DAT_146acd048 = '\x01';
  }
  uVar2 = 0;
  LOCK();
  bVar4 = DAT_146accf28 == 0;
  if (bVar4) {
    DAT_146accf28 = 0;
  }
  else {
    uVar2 = (ulonglong)DAT_146accf28;
  }
  UNLOCK();
  if (!bVar4) {
    uVar2 = FUN_142059d40();
    if ((char)uVar2 != '\0') {
      uVar2 = FUN_14207ba70(DAT_146accf38,SUB84(dVar1,0));
    }
  }
  if (local_28 != (undefined2 *)0x0) {
    uVar2 = FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 14201f260 FUN_14201f260 body=377 status=ok
// SIG undefined FUN_14201f260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14201f260(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_228 [32];
  undefined4 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  undefined1 local_1d8 [128];
  longlong local_158;
  undefined1 local_138 [256];
  longlong local_38;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  if (*(int *)((undefined8 *)param_1[3] + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = *(undefined2 **)param_1[3];
  }
  lVar4 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_1d8,puVar5);
  uVar1 = *(undefined8 *)(lVar4 + 0x88);
  local_1f8 = *(undefined8 *)param_1[1];
  local_1f0 = ((undefined8 *)param_1[1])[1];
  if (local_1f0 != 0) {
    LOCK();
    *(int *)(local_1f0 + 8) = *(int *)(local_1f0 + 8) + 1;
    UNLOCK();
  }
  local_200 = *(undefined8 *)param_1[5];
  local_208 = *(undefined4 *)param_1[4];
  cVar3 = FUN_14202abd0(*(undefined8 *)*param_1,&local_1f8,*(undefined8 *)param_1[2],uVar1);
  if (local_158 != 0) {
    FMemory::Free();
  }
  if (cVar3 == '\0') {
    TStringConversion<TStringConvert<char,wchar_t>,128>::
    TStringConversion<TStringConvert<char,wchar_t>,128>(local_138,*(undefined8 *)param_1[2]);
    if (local_38 != 0) {
      FMemory::Free();
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_14204d040(*(undefined8 *)param_1[1]);
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              (*(longlong *)param_1[1] + 0xf0,param_1[6]);
    local_1e8 = *(undefined8 *)param_1[1];
    local_1e0 = ((undefined8 *)param_1[1])[1];
    if (local_1e0 != 0) {
      LOCK();
      *(int *)(local_1e0 + 8) = *(int *)(local_1e0 + 8) + 1;
      UNLOCK();
    }
    FUN_14202bd00(param_1[7],&local_1e8);
    puVar2 = (undefined8 *)param_1[1];
    *param_2 = *puVar2;
    lVar4 = puVar2[1];
    param_2[1] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
  }
  return param_2;
}



// FUNCTION 14201f3e0 FUN_14201f3e0 body=221 status=ok
// SIG undefined FUN_14201f3e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14201f3e0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined2 local_24;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  lVar1 = *param_1;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_24 = 0;
  local_98 = 0x3f800000;
  local_88 = 0x3f80000000000000;
  local_70 = 0x3f800000;
  local_68 = 0x3f800000;
  local_58 = 0x3f80000000000000;
  local_40 = 0x3f800000;
  local_30 = 0x3f80000000000000;
  if ((((byte)*(undefined4 *)(lVar1 + 0xa0) & 0x8f) != 10) ||
     (cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x98) + 0xd8))
                        (*(longlong **)(lVar1 + 0x98),*(undefined8 *)(lVar1 + 0xa8),local_f8),
     cVar2 == '\0')) {
    local_e8 = 0;
  }
  return local_e8;
}



// FUNCTION 14201f4c0 FUN_14201f4c0 body=341 status=ok
// SIG undefined FUN_14201f4c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_14201f4c0(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_f8 [32];
  undefined4 local_d8 [4];
  undefined1 local_c8 [80];
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  lVar1 = *param_1;
  uVar2 = 0;
  if (*(int *)(lVar1 + 0x60) != 0) {
    plVar5 = *(longlong **)(lVar1 + 0x50);
    if (*(longlong **)(lVar1 + 0x50) == (longlong *)0x0) {
      plVar5 = (longlong *)(lVar1 + 0x30);
    }
    if (plVar5 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar5 + 8))();
    }
  }
  puVar3 = (undefined4 *)(**(code **)(lVar1 + 0x20))(local_d8,uVar2);
  *param_2 = *puVar3;
  *puVar3 = 0xffffffff;
  FUN_1416f8340(local_d8[0]);
  lVar1 = *param_1;
  local_78[0] = &LAB_14202be00;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  lVar4 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_c8,local_78);
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
  return param_2;
}



// FUNCTION 14201f620 FUN_14201f620 body=216 status=ok
// SIG undefined FUN_14201f620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14201f620(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  longlong local_38;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (((byte)*(undefined4 *)(*param_1 + 0xa0) & 0x8f) == 10) {
    if ((int)param_1[2] == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)param_1[1];
    }
    lVar2 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                      (local_b8,puVar3);
    plVar1 = *(longlong **)(*param_1 + 0x98);
    (**(code **)(*plVar1 + 0x150))
              (plVar1,*(undefined8 *)(*param_1 + 0xa8),*(undefined8 *)(lVar2 + 0x88),0);
    if (local_38 != 0) {
      FMemory::Free();
    }
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x70) = 0;
    if (0x7fffffff < *(uint *)(lVar2 + 0x74)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar2 + 0x68,0);
    }
    if (*(undefined2 **)(lVar2 + 0x68) != (undefined2 *)0x0) {
      **(undefined2 **)(lVar2 + 0x68) = 0;
    }
  }
  return;
}



// FUNCTION 14201f700 FUN_14201f700 body=331 status=ok
// SIG undefined FUN_14201f700(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_14201f700(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [80];
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar1 = *param_1;
  uVar5 = 0;
  if (*(int *)(lVar1 + 0x60) != 0) {
    plVar8 = *(longlong **)(lVar1 + 0x50);
    if (*(longlong **)(lVar1 + 0x50) == (longlong *)0x0) {
      plVar8 = (longlong *)(lVar1 + 0x30);
    }
    if (plVar8 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar8 + 8))();
    }
  }
  puVar6 = (undefined4 *)(**(code **)(lVar1 + 0x20))(local_e8,uVar5);
  local_48 = (longlong *)0x0;
  local_38 = 0;
  uVar2 = puVar6[1];
  uVar3 = puVar6[2];
  uVar4 = puVar6[3];
  *param_2 = *puVar6;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  param_2[4] = puVar6[4];
  lVar1 = *param_1;
  local_78[0] = &LAB_14202bde0;
  lVar7 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_c8,local_78);
  FGenericPlatformMemory::MemswapGreaterThan8(lVar7,lVar1 + 0x20,0x50);
  if (*(int *)(lVar7 + 0x40) != 0) {
    plVar8 = *(longlong **)(lVar7 + 0x30);
    if (*(longlong **)(lVar7 + 0x30) == (longlong *)0x0) {
      plVar8 = (longlong *)(lVar7 + 0x10);
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (*(longlong *)(lVar7 + 0x30) != 0) {
    FMemory::Free();
  }
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
  return param_2;
}



// FUNCTION 14201f850 FUN_14201f850 body=142 status=ok
// SIG undefined FUN_14201f850(void)

void FUN_14201f850(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
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
  uVar2 = (*(code *)param_1[2])(uVar2);
  puVar1 = *(undefined8 **)*param_1;
  puVar1[0xc] = uVar2;
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



// FUNCTION 14201f8e0 FUN_14201f8e0 body=320 status=ok
// SIG undefined FUN_14201f8e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14201f8e0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 auStack_118 [32];
  double local_f8;
  double local_f0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ushort local_24;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  lVar1 = *param_1;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_24 = 0;
  local_98 = 0x3f800000;
  local_88 = 0x3f80000000000000;
  local_70 = 0x3f800000;
  local_68 = 0x3f800000;
  local_58 = 0x3f80000000000000;
  local_40 = 0x3f800000;
  local_30 = 0x3f80000000000000;
  if (((byte)*(undefined4 *)(lVar1 + 0xa0) & 0x8f) == 10) {
    cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x98) + 0xd8))
                      (*(longlong **)(lVar1 + 0x98),*(undefined8 *)(lVar1 + 0xa8),&local_f8);
    if (cVar3 != '\0') {
      if ((*(float *)(param_1 + 1) != (float)local_f8) ||
         ((float)local_f0 != *(float *)((longlong)param_1 + 0xc))) {
        local_24 = local_24 | 3;
        local_f8 = (double)*(float *)(param_1 + 1);
        local_f0 = (double)*(float *)((longlong)param_1 + 0xc);
        plVar2 = *(longlong **)(*param_1 + 0x98);
        (**(code **)(*plVar2 + 0xe0))(plVar2,*(undefined8 *)(*param_1 + 0xa8),&local_f8);
      }
    }
  }
  return;
}



// FUNCTION 14201fa20 FUN_14201fa20 body=353 status=ok
// SIG undefined FUN_14201fa20(void)

void FUN_14201fa20(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined1 local_res8 [8];
  
  if (*(longlong *)(*param_1 + 0x78) == 0) {
    return;
  }
  cVar2 = FWeakObjectPtr::IsValid(*param_1 + 0x1bc);
  if (cVar2 != '\0') {
    lVar3 = *param_1;
    cVar2 = FWeakObjectPtr::IsValid(lVar3 + 0x70,0,1);
    plVar4 = (longlong *)0x0;
    if ((cVar2 == '\0') || (lVar3 = FWeakObjectPtr::Get(lVar3 + 0x70), lVar3 == 0)) {
      cVar2 = '\0';
    }
    else {
      cVar2 = *(char *)(lVar3 + 0x154);
    }
    lVar3 = FWeakObjectPtr::Get(*param_1 + 0x1bc);
    if (cVar2 == '\x01') {
      fVar7 = *(float *)(lVar3 + 0x798);
    }
    else {
      fVar7 = *(float *)(lVar3 + 0x790);
    }
    TBaseMulticastDelegate<void>::Broadcast(*param_1 + 0x1f8);
    fVar6 = fVar7 - *(float *)(*param_1 + 0x1c4);
    plVar1 = *(longlong **)(*param_1 + 0x78);
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    uVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1,fVar6,0,1);
    *(undefined4 *)(*param_1 + 0x1b8) = uVar5;
    FUN_14172a070(local_res8,0x3dcccccd);
    lVar3 = *param_1;
    cVar2 = FWeakObjectPtr::IsValid(lVar3 + 0x70,0,1);
    if (cVar2 != '\0') {
      plVar4 = (longlong *)FWeakObjectPtr::Get(lVar3 + 0x70);
    }
    FUN_14172a400(local_res8);
    if (plVar4 != (longlong *)0x0) {
      lVar3 = *param_1;
      fVar6 = (float)(**(code **)(*plVar4 + 0x420))(plVar4);
      *(float *)(lVar3 + 0x1b8) = fVar6 * *(float *)(lVar3 + 0x1b8);
    }
    *(float *)(*param_1 + 0x1c4) = fVar7;
    LOCK();
    *(undefined4 *)(*param_1 + 0xa8) = 1;
    UNLOCK();
    return;
  }
  return;
}



// FUNCTION 14201fb90 FUN_14201fb90 body=992 status=ok
// SIG undefined FUN_14201fb90(void)

longlong *
FUN_14201fb90(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  void *_Src;
  bool bVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  longlong *local_48;
  int local_40;
  undefined4 local_3c;
  
  FUN_14204f800(param_5,0);
  iVar11 = (int)param_5[0x81];
  *(int *)(param_5 + 0x81) = iVar11 + 1;
  if (*(int *)((longlong)param_5 + 0x40c) < iVar11 + 1) {
    TArray<FLinearColor,TInlineAllocator<64,TSizedDefaultAllocator<32>_>_>::ResizeGrow
              (param_5,iVar11);
  }
  plVar7 = (longlong *)param_5[0x80];
  if ((longlong *)param_5[0x80] == (longlong *)0x0) {
    plVar7 = param_5;
  }
  plVar7[(longlong)iVar11 * 2] = *param_3;
  lVar2 = param_3[1];
  (plVar7 + (longlong)iVar11 * 2)[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  iVar11 = (int)param_5[0x81];
  do {
    if (iVar11 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
LAB_14201fec6:
      plVar7 = (longlong *)param_3[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar7 + 1;
        lVar2 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      return param_2;
    }
    plVar7 = (longlong *)param_5[0x80];
    if ((longlong *)param_5[0x80] == (longlong *)0x0) {
      plVar7 = param_5;
    }
    plVar3 = (longlong *)plVar7[1];
    lVar2 = *plVar7;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    FUN_14204dd00(param_5,0,1);
    iVar11 = *(int *)(lVar2 + 0xf8);
    puVar9 = *(undefined8 **)(lVar2 + 0xf0);
    local_48 = (longlong *)0x0;
    local_40 = iVar11;
    if (iVar11 == 0) {
      local_3c = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_48,iVar11,0);
      lVar12 = (longlong)local_48 - (longlong)puVar9;
      do {
        *(undefined8 *)(lVar12 + (longlong)puVar9) = 0;
        iVar6 = *(int *)(puVar9 + 1);
        _Src = (void *)*puVar9;
        *(int *)(lVar12 + 8 + (longlong)puVar9) = iVar6;
        if (iVar6 == 0) {
          *(undefined4 *)(lVar12 + 0xc + (longlong)puVar9) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                    ((undefined8 *)(lVar12 + (longlong)puVar9),iVar6,0);
          _guard_xfg_dispatch_icall_nop
                    (*(void **)(lVar12 + (longlong)puVar9),_Src,(longlong)iVar6 * 2);
        }
        puVar9 = puVar9 + 2;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    iVar11 = local_40;
    plVar8 = local_48;
    plVar10 = local_48 + (longlong)local_40 * 2;
    for (plVar7 = local_48; plVar5 = plVar8, plVar7 != plVar10; plVar7 = plVar7 + 2) {
      iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>();
      if (iVar6 == 0) {
        bVar4 = false;
        goto joined_r0x00014201fd74;
      }
    }
    bVar4 = true;
joined_r0x00014201fd74:
    for (; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (plVar8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (bVar4) {
      iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>();
      if (iVar11 == 0) {
        *param_2 = lVar2;
        param_2[1] = (longlong)plVar3;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          LOCK();
          plVar7 = plVar3 + 1;
          lVar2 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
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
        goto LAB_14201fec6;
      }
      iVar11 = *(int *)(lVar2 + 0xe8);
      if (iVar11 != 0) {
        iVar6 = (int)param_5[0x81];
        if (*(int *)((longlong)param_5 + 0x40c) < iVar6 + iVar11) {
          TArray<FLinearColor,TInlineAllocator<64,TSizedDefaultAllocator<32>_>_>::ResizeTo();
          iVar6 = (int)param_5[0x81];
        }
        plVar7 = *(longlong **)(lVar2 + 0xe0);
        plVar8 = (longlong *)param_5[0x80];
        if ((longlong *)param_5[0x80] == (longlong *)0x0) {
          plVar8 = param_5;
        }
        plVar8 = plVar8 + (longlong)iVar6 * 2;
        iVar6 = iVar11;
        do {
          *plVar8 = *plVar7;
          lVar2 = plVar7[1];
          plVar8[1] = lVar2;
          if (lVar2 != 0) {
            LOCK();
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            UNLOCK();
          }
          plVar8 = plVar8 + 2;
          plVar7 = plVar7 + 2;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        *(int *)(param_5 + 0x81) = (int)param_5[0x81] + iVar11;
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar3 + 1;
      lVar2 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plVar3)();
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar3 + 8))();
        }
      }
    }
    iVar11 = (int)param_5[0x81];
  } while( true );
}



// FUNCTION 14201ff70 FUN_14201ff70 body=160 status=ok
// SIG undefined FUN_14201ff70(void)

undefined8 FUN_14201ff70(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  
  if ((param_1[5] != 0) && (param_1[6] != 0)) {
    piVar1 = (int *)(param_1[6] + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      lVar2 = *param_1;
      uVar5 = *(uint *)(lVar2 + 0xa0) & 0x8f;
      if ((uVar5 - 8 < 4) &&
         (cVar3 = (**(code **)(**(longlong **)(lVar2 + 0x98) + 0x30))
                            (*(longlong **)(lVar2 + 0x98),*(undefined8 *)(lVar2 + 0xa8),param_1[2],
                             param_1[1],param_1[3],param_1[4],uVar5 == 10), cVar3 != '\0')) {
        return 1;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 142020010 FUN_142020010 body=362 status=ok
// SIG undefined FUN_142020010(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142020010(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 auStack_118 [32];
  double local_f8;
  double local_f0;
  double local_c8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ushort local_24;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  lVar1 = *param_1;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_24 = 0;
  local_98 = 0x3f800000;
  local_88 = 0x3f80000000000000;
  local_70 = 0x3f800000;
  local_68 = 0x3f800000;
  local_58 = 0x3f80000000000000;
  local_40 = 0x3f800000;
  local_30 = 0x3f80000000000000;
  if (((byte)*(undefined4 *)(lVar1 + 0xa0) & 0x8f) == 10) {
    cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x98) + 0xd8))
                      (*(longlong **)(lVar1 + 0x98),*(undefined8 *)(lVar1 + 0xa8),&local_f8);
    if (cVar3 != '\0') {
      if (((*(float *)(param_1 + 1) != (float)local_f8) ||
          ((float)local_f0 != *(float *)((longlong)param_1 + 0xc))) ||
         ((float)local_c8 != *(float *)(param_1 + 2))) {
        local_f8 = (double)*(float *)(param_1 + 1);
        local_24 = local_24 | 0x83;
        local_c8 = (double)*(float *)(param_1 + 2);
        local_f0 = (double)*(float *)((longlong)param_1 + 0xc);
        plVar2 = *(longlong **)(*param_1 + 0x98);
        (**(code **)(*plVar2 + 0xe0))(plVar2,*(undefined8 *)(*param_1 + 0xa8),&local_f8);
      }
    }
  }
  return;
}



// FUNCTION 142020180 FUN_142020180 body=693 status=ok
// SIG undefined FUN_142020180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142020180(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined1 local_170;
  undefined1 local_168;
  longlong *local_160;
  undefined8 local_158;
  longlong *local_150;
  longlong local_148 [3];
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 *local_118 [2];
  longlong local_108 [4];
  longlong *local_e8;
  int local_d8;
  longlong local_c8;
  undefined1 local_c0 [16];
  undefined8 local_b0;
  longlong *local_a8;
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  *param_2 = 0;
  param_2[1] = 0;
  cVar4 = FUN_142045f90(param_1 + 3);
  if ((cVar4 != '\0') && (cVar4 = FUN_142057ba0(), cVar4 != '\0')) {
    FUN_14203d100(&local_158,param_1 + 3);
    local_c8 = *param_1;
    FString::FString(local_c0,param_1 + 1);
    plVar6 = local_150;
    local_b0 = local_158;
    local_a8 = local_150;
    if (local_150 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_150 + 1) = (int)local_150[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_98,param_1 + 6);
    local_148[2] = 0;
    if (*param_1 != 0) {
      local_148[0] = 0;
      local_148[1] = 0x1e;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_148,0);
      FGenericPlatformString::Memcpy(local_148[0],L"RequestAsyncLoad SingleLambda",0x3c);
      local_e8 = (longlong *)0x0;
      local_d8 = 0;
      puVar5 = (undefined8 *)FUN_140438ef0(0x90,local_108);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_CopyToEmptyStorage_144f71a60;
        puVar5[2] = local_c8;
        FString::FString(puVar5 + 3,local_c0);
        puVar5[5] = local_b0;
        puVar5[6] = local_a8;
        if (local_a8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
          UNLOCK();
          plVar6 = local_150;
        }
        TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar5 + 8,local_98);
      }
      local_118[0] = &LAB_14202ca30;
      local_160 = local_148;
      local_168 = 0;
      local_170 = 0;
      local_178 = 0x32;
      puVar5 = (undefined8 *)
               FStreamableManager::RequestAsyncLoad(DAT_146accf98,local_130,param_1,local_118);
      if (param_2 != puVar5) {
        *param_2 = *puVar5;
        *puVar5 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,puVar5 + 1);
      }
      if (local_128 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_128 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        plVar6 = local_150;
        if ((int)lVar3 == 1) {
          (**(code **)*local_128)(local_128);
          LOCK();
          piVar1 = (int *)((longlong)local_128 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar6 = local_150;
          if (iVar2 == 1) {
            (**(code **)(*local_128 + 8))(local_128,1);
            plVar6 = local_150;
          }
        }
      }
      if (local_d8 != 0) {
        plVar7 = local_108;
        if (local_e8 != (longlong *)0x0) {
          plVar7 = local_e8;
        }
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x10))(plVar7,0);
        }
      }
      if (local_e8 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_148[0] != 0) {
        FMemory::Free();
      }
    }
    FUN_14201b920(&local_c8);
    plVar7 = local_150;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar6 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_150 + 8))(local_150,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 142020440 FUN_142020440 body=190 status=ok
// SIG undefined FUN_142020440(void)

undefined8 FUN_142020440(longlong *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  uVar3 = 0;
  if (*(int *)(param_2 + 0x90) != 0) {
    plVar4 = *(longlong **)(param_2 + 0x80);
    if (*(longlong **)(param_2 + 0x80) == (longlong *)0x0) {
      plVar4 = (longlong *)(param_2 + 0x60);
    }
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 8))();
    }
  }
  cVar2 = (**(code **)(param_2 + 0x50))(uVar3);
  if (cVar2 == '\0') {
    LOCK();
    cVar2 = *(char *)(*param_1 + 0x30);
    if (cVar2 == '\0') {
      *(char *)(*param_1 + 0x30) = '\0';
      cVar2 = '\0';
    }
    UNLOCK();
    if (cVar2 < '\x06') {
      return 0;
    }
  }
  plVar4 = (longlong *)param_1[1];
  iVar1 = (int)plVar4[1];
  *(int *)(plVar4 + 1) = iVar1 + 1;
  if (*(int *)((longlong)plVar4 + 0xc) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar4,iVar1);
  }
  lVar5 = (longlong)iVar1 * 0xa0 + *plVar4;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(lVar5,param_2);
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(lVar5 + 0x50,param_2 + 0x50);
  return 1;
}



// FUNCTION 142020500 FUN_142020500 body=814 status=ok
// SIG undefined FUN_142020500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_142020500(undefined8 *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 *puVar13;
  void *_Dst;
  ulonglong _Size;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_98 [48];
  longlong local_68;
  longlong *plStack_60;
  longlong *local_58;
  uint local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)&local_68;
  lVar7 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
  puVar13 = auStack_98;
  if (lVar7 != 0) {
    lVar7 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
    iVar2 = *(int *)(lVar7 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar12 = iVar2 >> 0x1f & 0xffff;
      uVar6 = iVar2 + uVar12;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
              (longlong)(int)((uVar6 & 0xffff) - uVar12) * 0x18;
    }
    else {
      lVar7 = 0;
    }
    puVar13 = auStack_98;
    if (((*(uint *)(lVar7 + 8) & 0x30000000) == 0) &&
       (lVar7 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc)), puVar13 = auStack_98,
       lVar7 != 0)) {
      lVar7 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
      iVar2 = *(int *)(lVar7 + 0xc);
      if (iVar2 < (int)DAT_1469e91c4) {
        uVar12 = iVar2 >> 0x1f & 0xffff;
        uVar6 = iVar2 + uVar12;
        lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                (longlong)(int)((uVar6 & 0xffff) - uVar12) * 0x18;
      }
      else {
        lVar7 = 0;
      }
      puVar13 = auStack_98;
      if ((*(uint *)(lVar7 + 8) & 0x30000000) == 0) {
        iVar2 = *(int *)(param_1 + 4);
        uVar8 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
        lVar7 = UObject::FindFunction(uVar8);
        puVar13 = auStack_98;
        if (lVar7 != 0) {
          _Size = (ulonglong)*(ushort *)(lVar7 + 0x8e);
          if (*(ushort *)(lVar7 + 0x8e) == 0) {
            _Dst = (void *)0x0;
            puVar13 = auStack_98;
          }
          else {
            uVar11 = _Size + 0x1e;
            if (uVar11 <= _Size + 0xf) {
              uVar11 = 0xffffffffffffff0;
            }
            puVar13 = auStack_98 + -(uVar11 & 0xfffffffffffffff0);
            _Dst = (void *)((longlong)&plStack_60 + -(uVar11 & 0xfffffffffffffff0));
          }
          *(undefined8 *)(puVar13 + -8) = 0x142020660;
          _guard_xfg_dispatch_icall_nop(_Dst,0,_Size);
          plStack_60 = *(longlong **)(lVar7 + 0x38);
          local_58 = (longlong *)CONCAT17(local_58._7_1_,0x101ffffffff);
          local_68 = lVar7;
          *(undefined8 *)(puVar13 + -8) = 0x142020686;
          FUN_140472e10(&local_68);
          if (iVar2 != 0) {
            lVar15 = 0;
            lVar14 = 0;
            do {
              plVar10 = plStack_60;
              if ((plStack_60 == (longlong *)0x0) || ((*(uint *)(plStack_60 + 7) & 0x480) != 0x80))
              break;
              uVar3 = *(undefined4 *)(param_1 + 1);
              *(undefined8 *)(puVar13 + -8) = 0x1420206b4;
              uVar9 = FUN_1416f8720(uVar3);
              iVar4 = *(int *)((longlong)plVar10 + 0x44);
              uVar8 = *(undefined8 *)(param_1[3] + lVar14);
              *(undefined8 *)(puVar13 + -8) = 0x1420206ce;
              FUN_14202e180(plVar10,(longlong)iVar4 + (longlong)_Dst,uVar8,uVar9);
              plStack_60 = (longlong *)plVar10[5];
              *(undefined8 *)(puVar13 + -8) = 0x1420206df;
              FUN_140472e10(&local_68);
              lVar15 = lVar15 + 1;
              lVar14 = lVar14 + 0x10;
            } while (lVar15 != iVar2);
          }
          uVar3 = *(undefined4 *)((longlong)param_1 + 0xc);
          *(undefined8 *)(puVar13 + -8) = 0x1420206f3;
          plVar10 = (longlong *)FUN_1416f8720(uVar3);
          pcVar5 = *(code **)(*plVar10 + 0x208);
          *(undefined8 *)(puVar13 + -8) = 0x142020706;
          (*pcVar5)(plVar10,lVar7,_Dst);
          *(undefined8 *)(puVar13 + -8) = 0x14202070e;
          lVar14 = UFunction::GetReturnProperty(lVar7);
          if (lVar14 != 0) {
            uVar1 = *(ushort *)(lVar7 + 0x90);
            uVar8 = *param_1;
            puVar13[0x28] = 1;
            local_68 = -1;
            plStack_60 = (longlong *)0xffffffffffffffff;
            local_58 = (longlong *)0x0;
            local_50 = 0;
            puVar13[0x20] = 0;
            *(undefined8 *)(puVar13 + -8) = 0x142020753;
            FUN_14202ed60(lVar14,(ulonglong)uVar1 + (longlong)_Dst,&local_68,uVar8);
            if ((local_50 & 0x8f) != 0) {
              uVar8 = *param_1;
              *(undefined8 *)(puVar13 + -8) = 0x142020766;
              FUN_1432e1f30(uVar8,&local_68);
            }
            plVar10 = local_58;
            if ((local_50 >> 6 & 1) != 0) {
              pcVar5 = *(code **)(*local_58 + 0x10);
              *(undefined8 *)(puVar13 + -8) = 0x142020782;
              (*pcVar5)(plVar10,&local_68,local_48);
            }
          }
          plStack_60 = *(longlong **)(lVar7 + 0x38);
          local_58 = (longlong *)CONCAT17(local_58._7_1_,0x101ffffffff);
          local_68 = lVar7;
          *(undefined8 *)(puVar13 + -8) = 0x1420207a8;
          FUN_140472e10(&local_68);
          plVar10 = plStack_60;
          while ((plStack_60 = plVar10, plVar10 != (longlong *)0x0 &&
                 (((uint)plVar10[7] & 0x480) == 0x80))) {
            if ((~(byte)((ulonglong)plVar10[7] >> 0x24) & 1) != 0) {
              iVar2 = *(int *)((longlong)plVar10 + 0x44);
              pcVar5 = *(code **)(*plVar10 + 0x328);
              *(undefined8 *)(puVar13 + -8) = 0x1420207e3;
              (*pcVar5)(plVar10,(longlong)iVar2 + (longlong)_Dst);
            }
            plStack_60 = (longlong *)plVar10[5];
            *(undefined8 *)(puVar13 + -8) = 0x1420207f4;
            FUN_140472e10(&local_68);
            plVar10 = plStack_60;
          }
        }
      }
    }
  }
  uVar8 = *param_1;
  *(undefined8 *)(puVar13 + -8) = 0x142020805;
  FUN_1432e1f50(uVar8);
  *(undefined8 *)(puVar13 + -8) = 0x142020811;
  return;
}



// FUNCTION 142020830 FUN_142020830 body=206 status=ok
// SIG undefined FUN_142020830(void)

void FUN_142020830(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar3[1];
    bVar8 = iVar7 == 0;
    if (bVar8) {
      *(int *)(plVar3 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (!bVar8) {
      while( true ) {
        LOCK();
        bVar8 = iVar7 == (int)plVar3[1];
        if (bVar8) {
          *(int *)(plVar3 + 1) = iVar7 + 1;
        }
        UNLOCK();
        if (bVar8) break;
        LOCK();
        iVar7 = (int)plVar3[1];
        bVar8 = iVar7 == 0;
        if (bVar8) {
          *(int *)(plVar3 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar8) {
          return;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        lVar4 = param_1[1];
        if (lVar4 != 0) {
          lVar5 = *param_1;
          LOCK();
          bVar8 = *(int *)(lVar5 + 0x1e0) == 0;
          if (bVar8) {
            *(int *)(lVar5 + 0x1e0) = 0;
          }
          UNLOCK();
          if (bVar8) {
            LOCK();
            cVar6 = *(char *)(lVar5 + 0x30);
            if (cVar6 == '\0') {
              *(char *)(lVar5 + 0x30) = '\0';
              cVar6 = '\0';
            }
            UNLOCK();
            if (((cVar6 < '\x06') && (*(longlong *)(*param_1 + 0x78) != 0)) &&
               (cVar6 = FUN_142055370(lVar4,CONCAT71((int7)((ulonglong)lVar5 >> 8),4)),
               cVar6 != '\0')) {
              FUN_14204b000(*param_1);
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
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142020900 FUN_142020900 body=181 status=ok
// SIG undefined FUN_142020900(void)

void FUN_142020900(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar3[1];
    bVar7 = iVar6 == 0;
    if (bVar7) {
      *(int *)(plVar3 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (!bVar7) {
      while( true ) {
        LOCK();
        bVar7 = iVar6 == (int)plVar3[1];
        if (bVar7) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar7) break;
        LOCK();
        iVar6 = (int)plVar3[1];
        bVar7 = iVar6 == 0;
        if (bVar7) {
          *(int *)(plVar3 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar7) {
          return;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        lVar4 = *param_1;
        if (lVar4 != 0) {
          LOCK();
          bVar7 = *(int *)(lVar4 + 0x1e0) == 0;
          if (bVar7) {
            *(int *)(lVar4 + 0x1e0) = 0;
          }
          UNLOCK();
          if (bVar7) {
            LOCK();
            cVar5 = *(char *)(lVar4 + 0x30);
            if (cVar5 == '\0') {
              *(char *)(lVar4 + 0x30) = '\0';
              cVar5 = '\0';
            }
            UNLOCK();
            if (cVar5 < '\x06') {
              FUN_1420573b0(lVar4,0);
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



// FUNCTION 1420209c0 FUN_1420209c0 body=160 status=ok
// SIG undefined FUN_1420209c0(void)

ulonglong FUN_1420209c0(longlong *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  bool bVar3;
  longlong local_68;
  longlong local_60;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  LOCK();
  *(undefined4 *)(*param_1 + 0x9c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(*param_1 + 0x98) = 0;
  UNLOCK();
  local_68 = param_1[1];
  local_60 = param_1[2];
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  FUN_14204f110(&local_68);
  uVar2 = 0;
  LOCK();
  bVar3 = DAT_146accd48 == 0;
  if (bVar3) {
    DAT_146accd48 = 0;
  }
  else {
    uVar2 = (ulonglong)DAT_146accd48;
  }
  UNLOCK();
  if ((bVar3) && (DAT_1468c217e == '\0')) {
    local_28 = 0;
    local_18 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR_FUN_143f3f130;
    }
    local_58[0] = FUN_14202c210;
    uVar2 = FUN_14204c280(local_58);
  }
  return uVar2;
}



// FUNCTION 142020a60 FUN_142020a60 body=299 status=ok
// SIG undefined FUN_142020a60(void)

void FUN_142020a60(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_38;
  longlong local_30;
  undefined **local_28;
  longlong local_20;
  longlong *local_18;
  
  lVar5 = *param_1;
  if ((*(uint *)(lVar5 + 0xa0) & 0x8f) - 8 < 4) {
    local_38 = param_1[1];
    local_30 = param_1[2];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
      lVar5 = *param_1;
    }
    FUN_14202bd00(*(undefined8 *)(lVar5 + 0x78),&local_38);
    plVar4 = (longlong *)param_1[2];
    local_20 = param_1[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_28 = &PTR__scalar_deleting_destructor__144f70fa8;
    local_18 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
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
    lVar5 = *param_1;
    (**(code **)(**(longlong **)(lVar5 + 0x98) + 0x48))
              (*(longlong **)(lVar5 + 0x98),*(undefined8 *)(lVar5 + 0xa8),&local_28,
               ((byte)*(undefined4 *)(lVar5 + 0xa0) & 0x8f) == 10);
    plVar4 = local_18;
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_18)(local_18);
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



// FUNCTION 142020b90 FUN_142020b90 body=3547 status=ok
// SIG undefined FUN_142020b90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_142020b90(longlong *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined2 *puVar2;
  void *_Src;
  int iVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  void *pvVar18;
  longlong lVar19;
  void *pvVar20;
  void **ppvVar21;
  undefined1 auStack_338 [32];
  undefined8 local_318;
  longlong *local_308;
  longlong *plStack_300;
  undefined4 local_2f8 [2];
  longlong *local_2f0;
  void *local_2e8;
  int local_2e0;
  int local_2dc;
  void *local_2d8;
  int local_2d0;
  int local_2cc;
  longlong local_2c8;
  void *local_2c0;
  int local_2b8;
  int local_2b4;
  longlong *local_2b0;
  int local_2a8;
  void *local_2a0;
  void *local_298;
  undefined4 *local_290;
  longlong *local_288;
  longlong *plStack_280;
  wchar_t *local_278;
  int local_270;
  undefined4 local_26c;
  longlong local_268 [3];
  longlong *local_250;
  uint local_248;
  wchar_t *local_240;
  undefined8 local_230;
  undefined8 uStack_228;
  longlong *local_220;
  uint local_218;
  undefined8 local_210;
  void *local_200;
  longlong local_1f8;
  longlong *local_1f0;
  longlong local_1e8 [2];
  longlong *local_1d8;
  longlong *plStack_1d0;
  longlong local_1c8 [2];
  void *local_1b8;
  longlong *local_1a8;
  longlong *plStack_1a0;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  code *local_178;
  longlong local_168 [4];
  longlong *local_148;
  int local_138;
  code *local_128 [2];
  longlong local_118 [4];
  longlong *local_f8;
  int local_e8;
  longlong local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 local_b8 [80];
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  local_2f0 = param_1;
  local_290 = param_2;
  lVar10 = FUN_1416f8720((int)param_1[2]);
  if (lVar10 == 0) goto LAB_14202193a;
  uVar11 = FUN_1416f8720((int)param_1[2]);
  plVar15 = (longlong *)0x0;
  local_148 = (longlong *)0x0;
  local_138 = 0;
  puVar12 = (undefined8 *)FUN_140438ef0(0x10,local_168);
  plVar13 = local_148;
  if (puVar12 != (undefined8 *)0x0) {
    puVar12[1] = uVar11;
    *puVar12 = &PTR_FUN_143f77b70;
  }
  local_178 = FUN_14202c1c0;
  local_f8 = (longlong *)0x0;
  local_e8 = 0;
  if ((local_148 == (longlong *)0x0) &&
     (_guard_xfg_dispatch_icall_nop(local_118,local_168,0x20), local_f8 != (longlong *)0x0)) {
    FMemory::Free();
    plVar13 = local_148;
  }
  iVar7 = local_138;
  local_f8 = plVar13;
  local_148 = (longlong *)0x0;
  local_e8 = local_138;
  local_138 = 0;
  if (iVar7 == 0) {
LAB_142020cd2:
    local_128[0] = AK::MemoryMgr::StartProfileThreadUsage;
  }
  else {
    plVar16 = local_118;
    if (plVar13 != (longlong *)0x0) {
      plVar16 = plVar13;
    }
    if (plVar16 == (longlong *)0x0) goto LAB_142020cd2;
    (**(code **)(*plVar16 + 8))();
    local_128[0] = local_178;
  }
  local_178 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_14204c130(*param_1,local_128);
  if (local_e8 != 0) {
    plVar13 = local_118;
    if (local_f8 != (longlong *)0x0) {
      plVar13 = local_f8;
    }
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x10))(plVar13,0);
    }
  }
  if (local_f8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_138 != 0) {
    plVar13 = local_168;
    if (local_148 != (longlong *)0x0) {
      plVar13 = local_148;
    }
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x10))(plVar13,0);
    }
  }
  if (local_148 != (longlong *)0x0) {
    FMemory::Free();
  }
  lVar10 = FMemory::Malloc(0x108,0);
  plVar13 = plVar15;
  if (lVar10 != 0) {
    uVar11 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(*param_1,local_198);
    plVar13 = (longlong *)FUN_1420194e0(lVar10,uVar11);
  }
  plVar14 = (longlong *)operator_new(0x18);
  plVar16 = plVar15;
  if (plVar14 != (longlong *)0x0) {
    *(undefined4 *)(plVar14 + 1) = 1;
    *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
    *plVar14 = (longlong)&PTR_FUN_143f3f2d0;
    plVar14[2] = (longlong)plVar13;
    plVar16 = plVar14;
  }
  plVar14 = plVar13 + 1;
  if (plVar13 == (longlong *)0x0) {
    plVar14 = plVar15;
  }
  local_308 = plVar13;
  plStack_300 = plVar16;
  if (plVar14 != (longlong *)0x0) {
    if ((*plVar14 != 0) && (plVar14[1] != 0)) {
      piVar1 = (int *)(plVar14[1] + 8);
      LOCK();
      iVar7 = *piVar1;
      if (iVar7 == 0) {
        *piVar1 = 0;
        iVar7 = 0;
      }
      UNLOCK();
      if (0 < iVar7) goto LAB_142020e8b;
    }
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
    }
    *plVar14 = (longlong)plVar13;
    plVar13 = (longlong *)plVar14[1];
    if (plVar16 != plVar13) {
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
        UNLOCK();
        plVar13 = (longlong *)plVar14[1];
      }
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
      plVar14[1] = (longlong)plVar16;
    }
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar16 + 1;
      lVar10 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar16 + 8))(plVar16,1);
        }
      }
    }
  }
LAB_142020e8b:
  local_318 = (ulonglong)local_318._4_4_ << 0x20;
  FUN_142031710(*param_1,local_308 + 0x11,PTR_s_flash_display_Loader_1464f0678,0);
  lVar10 = FMemory::Malloc(0x108,0);
  plVar13 = plVar15;
  if (lVar10 != 0) {
    uVar11 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(*param_1,local_188);
    plVar13 = (longlong *)FUN_1420194e0(lVar10,uVar11);
  }
  plVar14 = (longlong *)operator_new(0x18);
  plVar16 = plVar15;
  if (plVar14 != (longlong *)0x0) {
    *(undefined4 *)(plVar14 + 1) = 1;
    *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
    *plVar14 = (longlong)&PTR_FUN_143f3f2d0;
    plVar14[2] = (longlong)plVar13;
    plVar16 = plVar14;
  }
  plVar14 = plVar13 + 1;
  if (plVar13 == (longlong *)0x0) {
    plVar14 = plVar15;
  }
  if (plVar14 != (longlong *)0x0) {
    if ((*plVar14 != 0) && (plVar14[1] != 0)) {
      piVar1 = (int *)(plVar14[1] + 8);
      LOCK();
      iVar7 = *piVar1;
      if (iVar7 == 0) {
        *piVar1 = 0;
        iVar7 = 0;
      }
      UNLOCK();
      if (0 < iVar7) goto LAB_142020fbd;
    }
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
    }
    *plVar14 = (longlong)plVar13;
    plVar17 = (longlong *)plVar14[1];
    if (plVar16 != plVar17) {
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
        UNLOCK();
        plVar17 = (longlong *)plVar14[1];
      }
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar17 + 8))(plVar17,1);
        }
      }
      plVar14[1] = (longlong)plVar16;
    }
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar16 + 1;
      lVar10 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar16 + 8))(plVar16,1);
        }
      }
    }
  }
LAB_142020fbd:
  cVar6 = FUN_14203acd0(local_308,"contentLoaderInfo",plVar13 + 0x11);
  if (cVar6 != '\0') {
    if ((wchar_t *)plVar13[3] != L"contentLoaderInfo") {
      *(undefined4 *)(plVar13 + 4) = 0;
      if (*(int *)((longlong)plVar13 + 0x24) != 0x12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar13 + 3,0x12);
        plVar15 = (longlong *)(ulonglong)*(uint *)(plVar13 + 4);
      }
      iVar7 = (int)plVar15 + 0x12;
      *(int *)(plVar13 + 4) = iVar7;
      if (*(int *)((longlong)plVar13 + 0x24) < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar13 + 3);
      }
      builtin_wcsncpy((wchar_t *)plVar13[3],L"contentLoaderInfo",0x12);
    }
    plVar15 = local_308;
    iVar7 = (int)local_308[0x1d];
    *(int *)(local_308 + 0x1d) = iVar7 + 1;
    if (*(int *)((longlong)local_308 + 0xec) < iVar7 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(local_308 + 0x1c,iVar7);
    }
    puVar12 = (undefined8 *)((longlong)iVar7 * 0x10 + plVar15[0x1c]);
    *puVar12 = plVar13;
    puVar12[1] = plVar16;
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
    }
    local_d8 = *param_1;
    local_d0 = local_308;
    local_268[0] = 0;
    local_c8 = plStack_300;
    if (plStack_300 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_300 + 1) = (int)plStack_300[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8,param_1 + 6);
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
    }
    local_58 = local_268[0];
    local_68 = plVar13;
    local_60 = plVar16;
    plVar15 = (longlong *)FMemory::Realloc(0,0xb0,0);
    local_2a8 = 0xb;
    local_2b0 = plVar15;
    if (plVar15 != (longlong *)0x0) {
      *plVar15 = (longlong)&PTR_GetPoolName_144f719a0;
      plVar15[2] = local_d8;
      plVar15[3] = (longlong)local_d0;
      plVar15[4] = (longlong)local_c8;
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
        UNLOCK();
      }
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(plVar15 + 6,local_b8);
      plVar15[0x10] = (longlong)local_68;
      plVar15[0x11] = (longlong)local_60;
      plVar14 = plVar15;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
        plVar14 = local_2b0;
      }
      plVar15[0x12] = local_58;
      lVar10 = FDelegateHandle::GenerateNewID();
      plVar14[0x15] = lVar10;
      *plVar14 = (longlong)&PTR_GetPoolName_144f719e8;
      param_1 = local_2f0;
    }
    FUN_142029190(plVar13,PTR_s_complete_1464f0628,local_268,&local_2b0);
    plVar13 = local_2b0;
    if (local_2a8 == 0) {
LAB_1420211f2:
      if (local_2b0 != (longlong *)0x0) {
        FMemory::Free(local_2b0);
      }
    }
    else if (local_2b0 != (longlong *)0x0) {
      (**(code **)(*local_2b0 + 0x28))(local_2b0,0);
      local_2b0 = (longlong *)FMemory::Realloc(plVar13,0,0);
      goto LAB_1420211f2;
    }
    FUN_14201b9d0(&local_d8);
    plVar13 = local_308;
    plVar15 = (longlong *)FUN_14203af90(local_308,local_1e8,&DAT_144044654);
    plVar14 = plVar13 + 3;
    if (plVar14 != plVar15) {
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      *plVar14 = *plVar15;
      *plVar15 = 0;
      *(int *)(plVar13 + 4) = (int)plVar15[1];
      *(undefined4 *)((longlong)plVar13 + 0x24) = *(undefined4 *)((longlong)plVar15 + 0xc);
      plVar15[1] = 0;
    }
    if (local_1e8[0] != 0) {
      FMemory::Free();
    }
    cVar6 = FUN_142027d30(param_1[3],&local_308,(int)param_1[0x10]);
    if (cVar6 != '\0') {
      local_1d8 = local_308;
      plStack_1d0 = plStack_300;
      if (plStack_300 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_300 + 1) = (int)plStack_300[1] + 1;
        UNLOCK();
      }
      FUN_14202bd00(*param_1,&local_1d8);
      uVar11 = FUN_1416f8720((int)param_1[2]);
      puVar12 = (undefined8 *)UObjectBaseUtility::GetPathName(uVar11,local_1c8,0);
      local_278 = (wchar_t *)0x0;
      local_26c = 0;
      iVar7 = *(int *)(puVar12 + 1) + -1;
      if (*(int *)(puVar12 + 1) == 0) {
        iVar7 = 0;
      }
      local_270 = iVar7 + 0xb;
      if (0 < local_270) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_278,0);
      }
      iVar8 = local_270;
      pwVar5 = local_278;
      builtin_wcsncpy(local_278,L"/ package/",10);
      _guard_xfg_dispatch_icall_nop(local_278 + 10,(void *)*puVar12,(longlong)iVar7 * 2);
      pwVar5[(longlong)iVar7 + 10] = L'\0';
      if (local_1c8[0] != 0) {
        FMemory::Free();
      }
      pwVar5 = local_278;
      local_220 = (longlong *)0x0;
      local_230 = 0xffffffffffffffff;
      uStack_228 = 0xffffffffffffffff;
      local_240 = L"";
      if (iVar8 != 0) {
        local_240 = local_278;
      }
      local_218 = 0;
      local_268[1] = 0xffffffffffffffff;
      local_268[2] = 0xffffffffffffffff;
      local_250 = (longlong *)0x0;
      local_248 = 7;
      local_318 = CONCAT44(local_318._4_4_,1);
      FUN_142031710(*param_1,&local_230,PTR_s_flash_net_URLRequest_1464f0680,local_268 + 1);
      local_318 = 1;
      cVar6 = FUN_1420458d0(local_308,&DAT_144f70fa0,0);
      if (cVar6 != '\0') {
        if (0 < (int)local_308[0x1d]) {
          plVar13 = (longlong *)((longlong *)local_308[0x1c])[1];
          lVar10 = *(longlong *)local_308[0x1c];
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
          }
          local_288 = local_308;
          plStack_280 = plStack_300;
          if (plStack_300 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_300 + 1) = (int)plStack_300[1] + 1;
            UNLOCK();
          }
          local_2c8 = lVar10;
          if ((longlong **)(lVar10 + 0xd0) != &local_288) {
            *(longlong **)(lVar10 + 0xd0) = local_308;
            local_288 = (longlong *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(lVar10 + 0xd8,&plStack_280);
          }
          plVar15 = plStack_280;
          if (plStack_280 != (longlong *)0x0) {
            LOCK();
            plVar14 = plStack_280 + 1;
            lVar19 = *plVar14;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)lVar19 == 1) {
              (**(code **)*plStack_280)(plStack_280);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plStack_280 + 8))(plStack_280,1);
              }
            }
          }
          local_2d0 = (int)local_308[6];
          lVar19 = (longlong)local_2d0;
          pvVar18 = (void *)local_308[5];
          local_2d8 = (void *)0x0;
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                    (&local_2d8,(2 - (uint)(local_2d0 != 0)) + local_2d0,0);
          pvVar20 = local_2d8;
          local_298 = local_2d8;
          _guard_xfg_dispatch_icall_nop(local_2d8,pvVar18,lVar19 * 2);
          iVar7 = local_2d0;
          lVar19 = (longlong)local_2d0;
          local_2d0 = (2 - (uint)(local_2d0 != 0)) + local_2d0;
          if (local_2cc < local_2d0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d8,iVar7);
            local_298 = local_2d8;
            pvVar20 = local_2d8;
          }
          puVar2 = (undefined2 *)((longlong)pvVar20 + (lVar19 - (ulonglong)(iVar7 != 0)) * 2);
          *puVar2 = 0x2e;
          puVar2[1] = 0;
          local_2b8 = *(int *)(lVar10 + 0x20);
          lVar10 = (longlong)local_2b8;
          if (local_2d0 < 2) {
            local_2c0 = (void *)0x0;
            _Src = *(void **)(local_2c8 + 0x18);
            local_1b8 = pvVar20;
            if (local_2b8 == 0) {
              local_2b4 = 0;
              pvVar18 = (void *)0x0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_2c0,local_2b8,0);
              pvVar18 = local_2c0;
              _guard_xfg_dispatch_icall_nop(local_2c0,_Src,lVar10 * 2);
            }
          }
          else {
            iVar7 = local_2b8 + -1;
            if (local_2b8 == 0) {
              iVar7 = 0;
            }
            if ((local_2d0 != 0) || (iVar8 = 1, iVar7 == 0)) {
              iVar8 = 0;
            }
            local_298 = (void *)0x0;
            local_1b8 = (void *)0x0;
            iVar8 = iVar7 + local_2d0 + iVar8;
            local_2e8 = pvVar20;
            local_2e0 = local_2d0;
            local_2dc = local_2cc;
            if (local_2cc < iVar8) {
              local_2a0 = pvVar20;
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2e8,iVar8);
            }
            iVar8 = local_2e0;
            local_200 = *(void **)(local_2c8 + 0x18);
            pvVar18 = local_2e8;
            local_2b8 = local_2e0;
            local_2b4 = local_2dc;
            local_2a0 = local_2e8;
            if (iVar7 != 0) {
              lVar10 = (longlong)local_2e0;
              local_2e0 = iVar7 + (uint)(local_2e0 == 0) + local_2e0;
              if (local_2dc < local_2e0) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2e8,iVar8);
                local_2a0 = local_2e8;
              }
              iVar3 = local_2e0;
              pvVar18 = (void *)((longlong)local_2a0 + (lVar10 - (ulonglong)(iVar8 != 0)) * 2);
              local_2e8 = local_2a0;
              _guard_xfg_dispatch_icall_nop(pvVar18,local_200,(longlong)iVar7 * 2);
              *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar18) = 0;
              pvVar18 = local_2a0;
              local_2b8 = iVar3;
              local_2b4 = local_2dc;
            }
          }
          iVar8 = local_2b4;
          iVar7 = local_2b8;
          lVar10 = local_2c8;
          ppvVar21 = (void **)(local_2c8 + 0x28);
          if (ppvVar21 == &local_2c0) {
            if (pvVar18 != (void *)0x0) {
              FMemory::Free(pvVar18);
            }
          }
          else {
            if (*ppvVar21 != (void *)0x0) {
              FMemory::Free();
            }
            *ppvVar21 = pvVar18;
            *(int *)(lVar10 + 0x30) = iVar7;
            *(int *)(lVar10 + 0x34) = iVar8;
          }
          if (local_298 != (void *)0x0) {
            FMemory::Free();
          }
          local_1f8 = local_2c8;
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
          }
          local_1f0 = plVar13;
          FUN_14202bd00(*local_2f0,&local_1f8);
          param_1 = local_2f0;
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar15 = plVar13 + 1;
            lVar10 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              param_1 = local_2f0;
              if (iVar7 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
                param_1 = local_2f0;
              }
            }
          }
        }
        local_1a8 = local_308;
        plStack_1a0 = plStack_300;
        if (plStack_300 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_300 + 1) = (int)plStack_300[1] + 1;
          UNLOCK();
        }
        uVar11 = FUN_14203bcd0(*param_1);
        lVar10 = FUN_142031ef0(uVar11,param_1[1],&local_1a8);
        local_2f8[0] = 0xffffffff;
        uVar9 = 0xffffffff;
        if (lVar10 != 0) {
          FUN_14170c210(local_2f8);
          uVar9 = local_2f8[0];
        }
        puVar4 = local_290;
        local_2f8[0] = 0xffffffff;
        *local_290 = uVar9;
        FUN_1416f8340(0xffffffff);
        if ((local_248 >> 6 & 1) != 0) {
          (**(code **)(*local_250 + 0x10))(local_250,local_268 + 1,local_240);
          local_250 = (longlong *)0x0;
        }
        local_248 = 0;
        if ((local_218 >> 6 & 1) != 0) {
          (**(code **)(*local_220 + 0x10))(local_220,&local_230,local_210);
          local_220 = (longlong *)0x0;
        }
        local_218 = 0;
        if (local_278 != (wchar_t *)0x0) {
          FMemory::Free(local_278);
        }
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar16 + 1;
          lVar10 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar16 + 8))(plVar16,1);
            }
          }
        }
        plVar13 = plStack_300;
        if (plStack_300 == (longlong *)0x0) {
          return puVar4;
        }
        LOCK();
        plVar15 = plStack_300 + 1;
        lVar10 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar10 != 1) {
          return puVar4;
        }
        (**(code **)*plStack_300)(plStack_300);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 != 1) {
          return puVar4;
        }
        (**(code **)(*plVar13 + 8))(plVar13,1);
        return puVar4;
      }
      if ((local_248 >> 6 & 1) != 0) {
        (**(code **)(*local_250 + 0x10))(local_250,local_268 + 1,local_240);
        local_250 = (longlong *)0x0;
      }
      local_248 = 0;
      if ((local_218 >> 6 & 1) != 0) {
        (**(code **)(*local_220 + 0x10))(local_220,&local_230,local_210);
        local_220 = (longlong *)0x0;
      }
      local_218 = 0;
      param_2 = local_290;
      if (pwVar5 != (wchar_t *)0x0) {
        FMemory::Free(pwVar5);
        param_2 = local_290;
      }
    }
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar16 + 1;
    lVar10 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  plVar13 = plStack_300;
  if (plStack_300 != (longlong *)0x0) {
    LOCK();
    plVar15 = plStack_300 + 1;
    lVar10 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_300)(plStack_300);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
LAB_14202193a:
  *param_2 = 0xffffffff;
  return param_2;
}



// FUNCTION 142021970 FUN_142021970 body=1616 status=ok
// SIG undefined FUN_142021970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142021970(longlong *param_1)

{
  int iVar1;
  RefCountImpl *this;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  char cVar6;
  uint uVar7;
  DWORD DVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined2 *puVar17;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  ulonglong local_1e0;
  int *local_1d8;
  uint local_1d0;
  uint local_1cc;
  uint local_1c8;
  uint local_1c4;
  longlong *local_1c0;
  longlong *local_1b8;
  ulonglong local_1b0;
  longlong local_1a8;
  RefCountImpl *local_1a0;
  longlong *local_198;
  longlong *local_190;
  longlong *local_188;
  longlong *local_180;
  longlong *local_178;
  ulonglong local_170;
  longlong local_168;
  RefCountImpl *local_160;
  longlong *local_158;
  longlong *local_150;
  longlong *local_148;
  longlong *local_140;
  undefined1 local_138 [32];
  float local_118 [8];
  undefined1 local_f8 [128];
  longlong local_78;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  plVar15 = (longlong *)0x0;
  local_1e0 = local_1e0 & 0xffffffff00000000;
  plVar16 = plVar15;
  plVar10 = plVar15;
  if (*(longlong *)(*param_1 + 0x80) != 0) {
    if ((int)param_1[2] == 0) {
      puVar17 = &DAT_143f3eda8;
    }
    else {
      puVar17 = (undefined2 *)param_1[1];
    }
    lVar9 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                      (local_f8,puVar17);
    plVar10 = (longlong *)
              (**(code **)(**(longlong **)(*param_1 + 0x80) + 0xd8))
                        (*(longlong **)(*param_1 + 0x80),*(undefined8 *)(lVar9 + 0x88));
    plVar16 = (longlong *)0x1;
  }
  if ((plVar16 != (longlong *)0x0) && (local_78 != 0)) {
    FMemory::Free();
  }
  if (plVar10 == (longlong *)0x0) {
    return;
  }
  uVar7 = (**(code **)(*plVar10 + 0x10))(plVar10);
  if ((uVar7 & 0xff00) != 0x100) {
    return;
  }
  plVar16 = (longlong *)plVar10[3];
  if (plVar16 == (longlong *)0x0) {
    return;
  }
  FUN_142039c70();
  uVar11 = FUN_1416f8720((int)param_1[3]);
  plVar12 = (longlong *)FUN_142031c30(uVar11);
  lVar9 = DAT_146acc8e8;
  if (plVar12 == (longlong *)0x0) {
    return;
  }
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar8 = GetCurrentThreadId();
    plVar14 = (longlong *)&DAT_00000004;
    if (DVar8 == DAT_1468c21c0) goto LAB_142021ac5;
  }
  else {
LAB_142021ac5:
    plVar14 = plVar15;
  }
  if (*(int *)(lVar9 + (longlong)plVar14) == 0) {
    (**(code **)(*plVar12 + 8))(plVar12);
  }
  local_1e8 = DAT_146acc900;
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar8 = GetCurrentThreadId();
    plVar14 = (longlong *)&DAT_00000004;
    if (DVar8 != DAT_1468c21c0) goto LAB_142021b17;
  }
  plVar14 = plVar15;
LAB_142021b17:
  plVar13 = plVar15;
  if ((*(int *)(local_1e8 + (longlong)plVar14) != 0) &&
     (plVar13 = (longlong *)(**(code **)(*plVar16 + 0x48))(plVar16), plVar13 != (longlong *)0x0)) {
    (**(code **)(*plVar13 + 8))(plVar13);
  }
  (**(code **)(*plVar16 + 0x28))(plVar16,&local_1d0);
  (**(code **)(*plVar12 + 0x28))(plVar12,&local_1c8);
  local_118[0] = 1.0;
  local_118[1] = 0.0;
  local_118[2] = 0.0;
  local_118[3] = 0.0;
  local_118[4] = 0.0;
  local_118[5] = 1.0;
  local_118[6] = 0.0;
  local_118[7] = 0.0;
  (**(code **)(*plVar16 + 0x70))(plVar16,local_118);
  local_118[0] = local_118[0] * ((float)local_1d0 / (float)local_1c8);
  local_118[5] = local_118[5] * ((float)local_1cc / (float)local_1c4);
  (**(code **)(*plVar12 + 0x68))(plVar12,local_118,0);
  plVar14 = (longlong *)FUN_14203bcd0(param_1[4]);
  if ((plVar14 != (longlong *)0x0) &&
     (local_1e8 = (**(code **)(*plVar14 + 0x468))(plVar14), local_1e8 != 0)) {
    uVar11 = FUN_1416f8720((int)param_1[3]);
    FUN_1420812f0(local_1e8,param_1 + 1,uVar11);
  }
  local_1e8 = DAT_146acc918;
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar6 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar8 = GetCurrentThreadId(), plVar14 = (longlong *)&DAT_00000004, DVar8 == DAT_1468c21c0)) {
    plVar14 = plVar15;
  }
  if (*(int *)((longlong)plVar14 + local_1e8) == 0) {
    FUN_142052220(plVar10,plVar12);
    if (*(longlong **)(*param_1 + 0x78) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(*param_1 + 0x78) + 0x208))();
    }
  }
  else {
    if (*(int *)((longlong)plVar14 + local_1e8) == 1) {
      plVar15 = (longlong *)FUN_1415ab270(0);
    }
    Scaleform::GFx::Resource::AddRef(plVar10);
    (**(code **)(*plVar16 + 8))(plVar16);
    this = *(RefCountImpl **)(*param_1 + 0x78);
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(this);
    }
    local_1e0 = param_1[4];
    lVar9 = param_1[5];
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    local_1b8 = plVar15;
    local_1b0 = local_1e0;
    local_1a8 = lVar9;
    if (this != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::AddRef(this);
    }
    local_1a0 = this;
    Scaleform::GFx::Resource::AddRef(plVar10);
    local_198 = plVar10;
    (**(code **)(*plVar16 + 8))(plVar16);
    local_190 = plVar16;
    (**(code **)(*plVar12 + 8))(plVar12);
    local_188 = plVar12;
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 8))(plVar13);
    }
    local_180 = plVar13;
    if ((DAT_146ac3ac6 == '\0') || (cVar6 = IsInRenderingThread(), cVar6 == '\0')) {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))) {
        local_170 = local_1e0;
        if (lVar9 != 0) {
          LOCK();
          *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
          UNLOCK();
        }
        local_178 = plVar15;
        local_168 = lVar9;
        if (this != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::AddRef(this);
        }
        local_160 = this;
        Scaleform::GFx::Resource::AddRef(plVar10);
        local_158 = plVar10;
        (**(code **)(*plVar16 + 8))(plVar16);
        local_150 = plVar16;
        (**(code **)(*plVar12 + 8))(plVar12);
        local_148 = plVar12;
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 8))(plVar13);
        }
        local_140 = plVar13;
        uVar11 = FBaseGraphTask::GetSmallTaskAllocator();
        FUN_14201ef30(&local_178,uVar11);
        FUN_14201b6f0(&local_178);
      }
      else {
        local_1c0 = (longlong *)FUN_142031ae0(local_138,0,0xff);
        lVar2 = *local_1c0;
        local_1d8 = (int *)(lVar2 + 0x10);
        *(longlong **)local_1d8 = plVar15;
        *(ulonglong *)(lVar2 + 0x18) = local_1e0;
        *(longlong *)(lVar2 + 0x20) = lVar9;
        if (lVar9 != 0) {
          LOCK();
          *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
          UNLOCK();
        }
        if (this != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::AddRef(this);
        }
        *(RefCountImpl **)((longlong)local_1d8 + 0x18) = this;
        Scaleform::GFx::Resource::AddRef(plVar10);
        piVar5 = local_1d8;
        *(longlong **)((longlong)local_1d8 + 0x20) = plVar10;
        (**(code **)(*plVar16 + 8))(plVar16);
        *(longlong **)((longlong)piVar5 + 0x28) = plVar16;
        (**(code **)(*plVar12 + 8))(plVar12);
        *(longlong **)((longlong)piVar5 + 0x30) = plVar12;
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 8))(plVar13);
        }
        *(longlong **)((longlong)piVar5 + 0x38) = plVar13;
        lVar9 = *local_1c0;
        lVar4 = local_1c0[2];
        lVar2 = local_1c0[1];
        lVar3 = *(longlong *)(lVar9 + 0x58);
        local_1d8 = (int *)(lVar3 + 0x48);
        if (lVar3 != 0) {
          LOCK();
          *local_1d8 = *local_1d8 + 1;
          UNLOCK();
        }
        local_1e8 = lVar3;
        FUN_141a0d200(lVar9,lVar2,(int)lVar4,1);
        if (lVar3 != 0) {
          LOCK();
          iVar1 = *local_1d8;
          *local_1d8 = *local_1d8 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            FGraphEvent::Recycle(local_1e8);
          }
        }
      }
    }
    else {
      uVar11 = FBaseGraphTask::GetSmallTaskAllocator();
      FUN_14201ef30(&local_1b8,uVar11);
    }
    FUN_14201b6f0(&local_1b8);
    if (plVar15 != (longlong *)0x0) {
      (**(code **)(*plVar15 + 0x20))(plVar15,0xffffffff,0);
      FUN_1415b5910(plVar15);
    }
    if (this != (RefCountImpl *)0x0) {
      FUN_1432e1f50(this);
    }
    (**(code **)(*plVar16 + 0x10))(plVar16);
    FUN_1432de450(plVar10);
  }
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  (**(code **)(*plVar12 + 0x10))(plVar12);
  return;
}



// FUNCTION 142021fc0 FUN_142021fc0 body=276 status=ok
// SIG undefined FUN_142021fc0(void)

void FUN_142021fc0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  
  plVar3 = (longlong *)param_1[3];
  lVar9 = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar10 = iVar5 == 0;
    if (bVar10) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (!bVar10) {
      while( true ) {
        LOCK();
        bVar10 = iVar5 == (int)plVar3[1];
        if (bVar10) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar10) break;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar10 = iVar5 == 0;
        if (bVar10) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar10) {
          return;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        lVar7 = param_1[2];
        if (lVar7 != 0) {
          LOCK();
          bVar10 = *(int *)(lVar7 + 0x1e0) == 0;
          if (bVar10) {
            *(int *)(lVar7 + 0x1e0) = 0;
          }
          UNLOCK();
          if (bVar10) {
            LOCK();
            cVar4 = *(char *)(lVar7 + 0x30);
            if (cVar4 == '\0') {
              *(char *)(lVar7 + 0x30) = '\0';
              cVar4 = '\0';
            }
            UNLOCK();
            if ((cVar4 < '\x06') &&
               (lVar7 = FUN_1416f8720(*(undefined4 *)(param_1 + 1)), lVar7 != 0)) {
              lVar7 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
              iVar5 = *(int *)(lVar7 + 0xc);
              if (iVar5 < (int)DAT_1469e91c4) {
                uVar8 = iVar5 >> 0x1f & 0xffff;
                uVar6 = iVar5 + uVar8;
                lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                        (longlong)(int)((uVar6 & 0xffff) - uVar8) * 0x18;
              }
              if ((*(uint *)(lVar9 + 8) & 0x30000000) == 0) {
                FUN_142030e20(*param_1);
              }
            }
          }
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
  return;
}



// FUNCTION 1420220e0 FUN_1420220e0 body=3865 status=ok
// SIG undefined FUN_1420220e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420220e0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  longlong *plVar14;
  uint uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  int iVar22;
  longlong lVar23;
  undefined8 uVar24;
  int iVar25;
  uint7 uVar26;
  longlong *plVar27;
  longlong lVar28;
  bool bVar29;
  undefined1 auStack_158 [32];
  uint local_138;
  ulonglong local_130;
  longlong *local_128;
  longlong *local_120;
  longlong local_118;
  longlong *local_110;
  int local_108;
  undefined4 local_104;
  longlong local_100;
  longlong *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  longlong *plStack_d8;
  undefined4 *local_d0;
  uint local_c8;
  undefined4 local_c4;
  longlong *local_c0;
  int local_b8;
  undefined4 local_b4;
  int local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined4 *local_98;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_138 = 0;
  if (*(int *)(*param_1 + 0x148) < 1) {
    return;
  }
  puVar17 = *(undefined8 **)(*param_1 + 0x140);
  plVar18 = (longlong *)puVar17[1];
  local_128 = (longlong *)*puVar17;
  local_120 = param_1;
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar18 + 1;
      lVar23 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        iVar22 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar22 == 1) {
          (**(code **)(*plVar18 + 8))(plVar18);
        }
      }
    }
  }
  local_c0 = (longlong *)0x0;
  local_b4 = 0;
  iVar22 = *(int *)(*param_1 + 0x148);
  lVar23 = (longlong)iVar22;
  local_b8 = iVar22;
  if (0 < iVar22) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_c0);
  }
  plVar18 = local_c0;
  _guard_xfg_dispatch_icall_nop(local_c0,0,lVar23 << 4);
  plVar14 = plVar18;
  uVar8 = 0;
  if (iVar22 != 0) {
    do {
      lVar16 = *(longlong *)(*param_1 + 0x140) - (longlong)plVar18;
      local_f8 = *(longlong **)(lVar16 + 8 + (longlong)plVar14);
      local_100 = *(longlong *)(lVar16 + (longlong)plVar14);
      if (local_f8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
        UNLOCK();
      }
      if (plVar14 != &local_100) {
        *plVar14 = local_100;
        local_100 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(plVar14 + 1,&local_f8);
      }
      plVar27 = local_f8;
      if (local_f8 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_f8 + 1;
        lVar16 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*local_f8)(local_f8);
          LOCK();
          piVar1 = (int *)((longlong)plVar27 + 0xc);
          iVar22 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar22 == 1) {
            (**(code **)(*local_f8 + 8))(local_f8,1);
          }
        }
      }
      local_a8 = 0;
      plStack_a0 = (longlong *)0x0;
      puVar17 = (undefined8 *)((longlong)(int)uVar8 * 0x10 + *(longlong *)(*param_1 + 0x140));
      if (&local_a8 != puVar17) {
        local_a8 = *puVar17;
        plVar27 = (longlong *)puVar17[1];
        *puVar17 = 0;
        puVar17[1] = 0;
        local_68 = 0;
        uStack_60 = 0;
        plStack_a0 = plVar27;
        if (plVar27 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar27 + 1;
          lVar16 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
            (**(code **)*plVar27)(plVar27);
            LOCK();
            piVar1 = (int *)((longlong)plVar27 + 0xc);
            iVar22 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar22 == 1) {
              (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
            }
          }
        }
      }
      lVar23 = lVar23 + -1;
      plVar14 = plVar14 + 2;
      uVar8 = uVar8 + 1;
    } while (lVar23 != 0);
  }
  AcquireSRWLockShared((PSRWLOCK)(*param_1 + 0xf0));
  lVar23 = *param_1;
  local_110 = (longlong *)0x0;
  iVar22 = *(int *)(lVar23 + 0xe8);
  lVar16 = *(longlong *)(lVar23 + 0xe0);
  local_108 = iVar22;
  if (iVar22 == 0) {
    local_104 = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_110,iVar22,0);
    lVar16 = lVar16 - (longlong)local_110;
    plVar18 = local_110;
    do {
      *plVar18 = *(longlong *)(lVar16 + (longlong)plVar18);
      lVar23 = *(longlong *)(lVar16 + 8 + (longlong)plVar18);
      plVar18[1] = lVar23;
      if (lVar23 != 0) {
        LOCK();
        *(int *)(lVar23 + 8) = *(int *)(lVar23 + 8) + 1;
        UNLOCK();
      }
      plVar18 = plVar18 + 2;
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
    lVar23 = *param_1;
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar23 + 0xf0));
  local_b0 = local_108 + -1;
  lVar23 = (longlong)local_b0;
  uVar8 = 0;
  if (-1 < local_b0) {
    plVar14 = local_110 + lVar23 * 2;
    plVar18 = local_128;
    do {
      plVar27 = (longlong *)plVar14[1];
      local_118 = *plVar14;
      if (plVar27 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar27 + 1) = (int)plVar27[1] + 1;
        UNLOCK();
      }
      LOCK();
      bVar29 = *(int *)(local_118 + 0x98) == 0;
      if (bVar29) {
        *(int *)(local_118 + 0x98) = 0;
      }
      UNLOCK();
      if (bVar29) {
LAB_142022613:
        if (plVar27 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar27 + 1;
          lVar16 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
            (**(code **)*plVar27)(plVar27);
            LOCK();
            piVar1 = (int *)((longlong)plVar27 + 0xc);
            iVar22 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar22 == 1) {
              (**(code **)(*plVar27 + 8))(plVar27);
            }
          }
        }
      }
      else {
        lVar16 = local_118 + 0x70;
        cVar7 = FWeakObjectPtr::IsValid(lVar16,0,1);
        if ((cVar7 == '\0') ||
           (local_130 = FWeakObjectPtr::Get(lVar16), plVar10 = uStack_e8, local_130 == 0))
        goto LAB_142022613;
        lVar16 = *local_120;
        uStack_e8._0_4_ = SUB84(plVar27,0);
        uVar3 = (undefined4)uStack_e8;
        uStack_e8._4_4_ = (undefined4)((ulonglong)plVar27 >> 0x20);
        uVar4 = uStack_e8._4_4_;
        uStack_e8 = plVar10;
        if ((*(byte *)(local_130 + 0x40) & 0x20) == 0) {
          plVar18 = *(longlong **)(lVar16 + 0x140);
          plVar10 = plVar18 + (longlong)*(int *)(lVar16 + 0x148) * 2;
          uVar8 = local_138;
          plVar14 = local_128;
          goto joined_r0x00014202267a;
        }
        lVar28 = (longlong)*(int *)(local_130 + 0x150) * 0x10;
        plVar10 = *(longlong **)(lVar28 + 8 + *(longlong *)(lVar16 + 0x140));
        lVar19 = *(longlong *)(lVar28 + *(longlong *)(lVar16 + 0x140));
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          lVar16 = *local_120;
        }
        if (lVar19 == 0) {
LAB_142022497:
          lVar16 = 0;
        }
        else {
          local_138 = local_138 | 2;
          plVar18 = *(longlong **)(lVar28 + 8 + *(longlong *)(lVar16 + 0x140));
          lVar16 = *(longlong *)(lVar28 + *(longlong *)(lVar16 + 0x140));
          if (plVar18 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
            UNLOCK();
          }
          cVar7 = FWeakObjectPtr::IsValid(lVar16 + 0x70,0,1);
          if (cVar7 == '\0') goto LAB_142022497;
          lVar16 = FWeakObjectPtr::Get(lVar16 + 0x70);
        }
        if (((local_138 & 2) != 0) &&
           (local_138 = local_138 & 0xfffffffd, plVar18 != (longlong *)0x0)) {
          LOCK();
          plVar12 = plVar18 + 1;
          lVar19 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar19 == 1) {
            (**(code **)*plVar18)(plVar18);
            LOCK();
            piVar1 = (int *)((longlong)plVar18 + 0xc);
            iVar22 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar22 == 1) {
              (**(code **)(*plVar18 + 8))(plVar18);
            }
          }
        }
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar10 + 1;
          lVar19 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar19 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar22 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar22 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10);
            }
          }
        }
        if ((lVar16 != 0) && (*(byte *)(local_130 + 0x89) <= *(byte *)(lVar16 + 0x89)))
        goto LAB_142022613;
        if (plVar27 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar27 + 1) = (int)plVar27[1] + 1;
          UNLOCK();
        }
        local_f0 = local_118;
        plVar10 = (longlong *)(*(longlong *)(*local_120 + 0x140) + lVar28);
        if (plVar27 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar27 + 1) = (int)plVar27[1] + 1;
          UNLOCK();
        }
        uStack_e8 = plVar27;
        if (&local_f0 != plVar10) {
          local_f0._0_4_ = (undefined4)local_118;
          local_f0._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
          lVar16 = *plVar10;
          uStack_e8 = (longlong *)plVar10[1];
          local_58 = (undefined4)local_f0;
          uStack_54 = local_f0._4_4_;
          uStack_50 = uVar3;
          uStack_4c = uVar4;
          *(undefined4 *)plVar10 = (undefined4)local_f0;
          *(undefined4 *)((longlong)plVar10 + 4) = local_f0._4_4_;
          *(undefined4 *)(plVar10 + 1) = uVar3;
          *(undefined4 *)((longlong)plVar10 + 0xc) = uVar4;
          local_f0 = lVar16;
        }
        plVar10 = uStack_e8;
        if (uStack_e8 != (longlong *)0x0) {
          LOCK();
          plVar12 = uStack_e8 + 1;
          lVar16 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
            (**(code **)*uStack_e8)(uStack_e8);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar22 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar22 == 1) {
              (**(code **)(*uStack_e8 + 8))();
            }
          }
        }
        if (plVar27 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar27 + 1;
          lVar16 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
            (**(code **)*plVar27)(plVar27);
            LOCK();
            piVar1 = (int *)((longlong)plVar27 + 0xc);
            iVar22 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar22 == 1) {
              (**(code **)(*plVar27 + 8))(plVar27);
            }
          }
          goto LAB_142022613;
        }
      }
      plVar14 = plVar14 + -2;
      lVar23 = lVar23 + -1;
      uVar8 = local_138;
    } while (-1 < lVar23);
  }
LAB_142022891:
  plVar14 = local_120;
  plVar18 = local_128;
  if ((local_128 != (longlong *)0x0) && (0 < *(int *)(*local_120 + 0x148))) {
    plVar27 = *(longlong **)(*local_120 + 0x140);
    local_138 = uVar8 | 4;
    plVar18 = (longlong *)plVar27[1];
    lVar23 = *plVar27;
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
    }
    uVar8 = local_138;
    if (lVar23 == 0) {
      bVar29 = true;
      goto LAB_1420228da;
    }
  }
  bVar29 = false;
LAB_1420228da:
  if (((uVar8 & 4) != 0) && (local_138 = uVar8 & 0xfffffffb, plVar18 != (longlong *)0x0)) {
    LOCK();
    plVar27 = plVar18 + 1;
    lVar23 = *plVar27;
    *(int *)plVar27 = (int)*plVar27 + -1;
    UNLOCK();
    if ((int)lVar23 == 1) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar22 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar22 == 1) {
        (**(code **)(*plVar18 + 8))(plVar18,1);
      }
    }
  }
  if (bVar29) {
    plVar27 = local_110 + (longlong)local_108 * 2;
    local_78 = 0;
    local_84 = 0;
    local_88 = 1;
    local_74 = 0;
    local_80 = 0xc3800000;
    local_7c = 0xc3800000;
    for (plVar18 = local_110; plVar18 != plVar27; plVar18 = plVar18 + 2) {
      LOCK();
      bVar29 = *(int *)(*plVar18 + 0xa4) == 0;
      if (bVar29) {
        *(int *)(*plVar18 + 0xa4) = 0;
      }
      UNLOCK();
      if (!bVar29) {
        LOCK();
        bVar29 = *(int *)(*plVar18 + 0x98) == 0;
        if (bVar29) {
          *(int *)(*plVar18 + 0x98) = 0;
        }
        UNLOCK();
        if (!bVar29) {
          FUN_14203e820(*plVar18,&local_88);
        }
      }
    }
  }
  lVar23 = *plVar14;
  local_130 = local_130 & 0xffffffff00000000;
  local_118 = (longlong)*(int *)(lVar23 + 0x148);
  if (local_118 != 0) {
    local_128 = local_c0;
    plVar18 = local_c0;
    plVar27 = local_c0;
    do {
      plVar12 = local_128;
      plVar11 = (longlong *)0x0;
      plVar10 = (longlong *)plVar27[1];
      lVar23 = *plVar27;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      if (lVar23 != 0) {
        lVar23 = lVar23 + 0x70;
        cVar7 = FWeakObjectPtr::IsValid(lVar23,0,1);
        if (cVar7 != '\0') {
          plVar11 = (longlong *)FWeakObjectPtr::Get(lVar23);
        }
      }
      lVar23 = *(longlong *)(*plVar14 + 0x140) - (longlong)plVar12;
      plVar14 = *(longlong **)(lVar23 + 8 + (longlong)plVar27);
      lVar23 = *(longlong *)(lVar23 + (longlong)plVar27);
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      if (lVar23 == 0) {
LAB_142022a65:
        plVar12 = (longlong *)0x0;
      }
      else {
        local_138 = local_138 | 8;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
        }
        cVar7 = FWeakObjectPtr::IsValid(lVar23 + 0x70,0,1);
        plVar18 = plVar14;
        if (cVar7 == '\0') goto LAB_142022a65;
        plVar12 = (longlong *)FWeakObjectPtr::Get(lVar23 + 0x70);
      }
      if (((local_138 & 8) != 0) && (local_138 = local_138 & 0xfffffff7, plVar18 != (longlong *)0x0)
         ) {
        LOCK();
        plVar2 = plVar18 + 1;
        lVar23 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar23 == 1) {
          (**(code **)*plVar18)(plVar18);
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          iVar22 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar22 == 1) {
            (**(code **)(*plVar18 + 8))(plVar18);
          }
        }
      }
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar14 + 1;
        lVar23 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar23 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar22 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar22 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14);
          }
        }
      }
      if (plVar11 == plVar12) {
LAB_142022bb8:
        iVar22 = (uint)local_130;
      }
      else {
        if (plVar11 != (longlong *)0x0) {
          uVar8 = *(uint *)((longlong)plVar11 + 0xc);
          if ((int)uVar8 < (int)DAT_1469e91c4) {
            uVar20 = uVar8 & 0xffff;
            if ((int)uVar8 < 0) {
              uVar8 = uVar8 + 0xffff;
              uVar20 = uVar20 - 0x10000;
            }
            lVar23 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                     (longlong)(int)uVar20 * 0x18;
          }
          else {
            lVar23 = 0;
          }
          if ((*(uint *)(lVar23 + 8) & 0x30000000) == 0) {
            (**(code **)(*plVar11 + 0x3f0))(plVar11);
          }
        }
        if (plVar12 == (longlong *)0x0) goto LAB_142022bb8;
        uVar8 = *(uint *)((longlong)plVar12 + 0xc);
        if ((int)uVar8 < (int)DAT_1469e91c4) {
          uVar20 = uVar8 & 0xffff;
          if ((int)uVar8 < 0) {
            uVar8 = uVar8 + 0xffff;
            uVar20 = uVar20 - 0x10000;
          }
          lVar23 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                   (longlong)(int)uVar20 * 0x18;
        }
        else {
          lVar23 = 0;
        }
        iVar22 = (uint)local_130;
        if ((*(uint *)(lVar23 + 8) & 0x30000000) == 0) {
          (**(code **)(*plVar12 + 1000))(plVar12);
        }
      }
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar14 + 1;
        lVar23 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar23 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar25 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar25 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14);
          }
        }
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar10 + 1;
        lVar23 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar23 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar25 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar25 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10);
          }
        }
      }
      plVar27 = plVar27 + 2;
      local_118 = local_118 + -1;
      local_130 = CONCAT44(local_130._4_4_,iVar22 + 1);
      plVar14 = local_120;
    } while (local_118 != 0);
    lVar23 = *local_120;
    local_118 = 0;
  }
  uVar8 = *(uint *)(lVar23 + 0x148);
  uVar20 = 0xffffffff;
  local_130 = CONCAT44(local_130._4_4_,0xffffffff);
  local_d0 = (undefined4 *)0x0;
  local_c4 = 0;
  local_c8 = uVar8;
  if (0 < (int)uVar8) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_d0,0);
  }
  puVar5 = local_d0;
  local_98 = (undefined4 *)0x0;
  local_8c = 0;
  local_90 = uVar8;
  if (0 < (int)uVar8) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_98,0);
  }
  puVar6 = local_98;
  iVar25 = 0;
  iVar22 = iVar25;
  if (((uVar8 != 0) && (iVar22 = 0, 3 < uVar8)) &&
     ((puVar5 + (int)(uVar8 - 1) < local_98 || (iVar22 = 0, local_98 + (int)(uVar8 - 1) < puVar5))))
  {
    uVar9 = uVar8 & 0x80000003;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
    }
    do {
      iVar25 = iVar25 + 4;
    } while (iVar25 != uVar8 - uVar9);
    iVar22 = (uVar8 - uVar9) + 3;
    uVar21 = (ulonglong)((int)(iVar22 + (iVar22 >> 0x1f & 3U)) >> 2);
    puVar13 = puVar5;
    for (lVar23 = (uVar21 & 0xfffffffffffffff) << 2; lVar23 != 0; lVar23 = lVar23 + -1) {
      *puVar13 = 0xffffffff;
      puVar13 = puVar13 + 1;
    }
    puVar13 = local_98;
    for (lVar23 = (uVar21 & 0xfffffffffffffff) << 2; iVar22 = iVar25, lVar23 != 0;
        lVar23 = lVar23 + -1) {
      *puVar13 = 0xffffffff;
      puVar13 = puVar13 + 1;
    }
  }
  lVar23 = (longlong)iVar22;
  if (lVar23 != (int)uVar8) {
    puVar13 = local_98 + lVar23;
    lVar23 = (int)uVar8 - lVar23;
    do {
      *(undefined4 *)(((longlong)puVar5 - (longlong)local_98) + (longlong)puVar13) = 0xffffffff;
      *puVar13 = 0xffffffff;
      puVar13 = puVar13 + 1;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
  }
  lVar23 = (longlong)local_b0;
  if (-1 < lVar23) {
    plVar18 = local_110 + lVar23 * 2;
    do {
      cVar7 = FWeakObjectPtr::IsValid(*plVar18 + 0x70,0,1);
      if ((cVar7 != '\0') &&
         (plVar14 = (longlong *)FWeakObjectPtr::Get(), plVar14 != (longlong *)0x0)) {
        uVar8 = *(uint *)((longlong)plVar14 + 0xc);
        if ((int)uVar8 < (int)DAT_1469e91c4) {
          uVar15 = uVar8 & 0xffff;
          uVar9 = uVar8;
          if ((int)uVar8 < 0) {
            uVar9 = uVar8 + 0xffff;
            uVar15 = uVar15 - 0x10000;
          }
          lVar16 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                   (longlong)(int)uVar15 * 0x18;
        }
        else {
          lVar16 = 0;
        }
        lVar19 = 0;
        if ((*(uint *)(lVar16 + 8) >> 0x1d & 1) == 0) {
          if ((int)uVar8 < (int)DAT_1469e91c4) {
            uVar9 = uVar8 & 0xffff;
            if ((int)uVar8 < 0) {
              uVar8 = uVar8 + 0xffff;
              uVar9 = uVar9 - 0x10000;
            }
            lVar19 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                     (longlong)(int)uVar9 * 0x18;
          }
          if ((*(uint *)(lVar19 + 8) >> 0x1c & 1) == 0) {
            iVar22 = (int)plVar14[0x2a];
            uVar8 = (uint)*(byte *)((longlong)plVar14 + 0x89);
            if (((int)(uint)local_130 < (int)(uint)*(byte *)((longlong)plVar14 + 0x89)) &&
               (((iVar22 < 0 || ((int)local_c8 <= iVar22)) || ((int)puVar5[iVar22] < (int)uVar8))))
            {
              uVar24 = 0;
            }
            else {
              uVar24 = 1;
            }
            uVar26 = (uint7)(uint3)(local_c8 >> 8);
            if (((int)uVar20 < (int)uVar8) &&
               (((iVar22 < 0 || ((int)local_c8 <= iVar22)) || ((int)puVar6[iVar22] < (int)uVar8))))
            {
              lVar16 = (ulonglong)uVar26 << 8;
            }
            else {
              lVar16 = CONCAT71(uVar26,1);
            }
            (**(code **)(*plVar14 + 0x440))(plVar14,uVar24,lVar16);
            uVar8 = *(uint *)(plVar14 + 8);
            if ((uVar8 & 0x2000) != 0) {
              if ((int)(uint)local_130 < (int)(uint)*(byte *)((longlong)plVar14 + 0x89)) {
                uVar9 = (uint)local_130;
                if ((uVar8 & 0x20) == 0) {
                  uVar9 = (uint)*(byte *)((longlong)plVar14 + 0x89);
                }
                local_130 = CONCAT44(local_130._4_4_,uVar9);
              }
            }
            iVar22 = (int)plVar14[0x2a];
            if (((-1 < iVar22) && (iVar22 < (int)local_c8)) &&
               (((uVar8 & 0x2000) != 0 &&
                ((int)puVar5[iVar22] < (int)(uint)*(byte *)((longlong)plVar14 + 0x89))))) {
              puVar5[iVar22] = (uint)*(byte *)((longlong)plVar14 + 0x89);
              uVar8 = *(uint *)(plVar14 + 8);
            }
            if ((((uVar8 & 0x4000) != 0) &&
                ((int)uVar20 < (int)(uint)*(byte *)((longlong)plVar14 + 0x89))) &&
               ((uVar8 & 0x20) == 0)) {
              uVar20 = (uint)*(byte *)((longlong)plVar14 + 0x89);
            }
            if ((uVar8 & 0x4000) != 0) {
              if ((int)puVar6[(int)plVar14[0x2a]] < (int)(uint)*(byte *)((longlong)plVar14 + 0x89))
              {
                puVar6[(int)plVar14[0x2a]] = (uint)*(byte *)((longlong)plVar14 + 0x89);
              }
            }
          }
        }
      }
      plVar18 = plVar18 + -2;
      lVar23 = lVar23 + -1;
    } while (-1 < lVar23);
  }
  if (puVar6 != (undefined4 *)0x0) {
    FMemory::Free(puVar6);
  }
  if (puVar5 != (undefined4 *)0x0) {
    FMemory::Free(puVar5);
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_110);
  if (local_b8 != 0) {
    plVar18 = local_c0 + 1;
    iVar22 = local_b8;
    do {
      plVar14 = (longlong *)*plVar18;
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar27 = plVar14 + 1;
        lVar23 = *plVar27;
        *(int *)plVar27 = (int)*plVar27 + -1;
        UNLOCK();
        if ((int)lVar23 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar25 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar25 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      plVar18 = plVar18 + 2;
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
  }
  if (local_c0 != (longlong *)0x0) {
    FMemory::Free(local_c0);
  }
  return;
joined_r0x00014202267a:
  if (plVar18 == plVar10) goto LAB_142022850;
  plVar12 = (longlong *)plVar18[1];
  lVar23 = *plVar18;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  if (lVar23 == 0) {
LAB_1420226d7:
    lVar23 = 0;
  }
  else {
    plVar14 = (longlong *)plVar18[1];
    uVar8 = uVar8 | 1;
    lVar23 = *plVar18;
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
    }
    cVar7 = FWeakObjectPtr::IsValid(lVar23 + 0x70,0,1);
    if (cVar7 == '\0') goto LAB_1420226d7;
    lVar23 = FWeakObjectPtr::Get(lVar23 + 0x70);
  }
  if (((uVar8 & 1) != 0) && (uVar8 = uVar8 & 0xfffffffe, plVar14 != (longlong *)0x0)) {
    LOCK();
    plVar11 = plVar14 + 1;
    lVar16 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar22 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar22 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14);
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar12 + 1;
    lVar16 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar22 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar22 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12);
      }
    }
  }
  if ((lVar23 == 0) || (*(byte *)(lVar23 + 0x89) < *(byte *)(local_130 + 0x89))) {
    if (plVar27 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar27 + 1) = (int)plVar27[1] + 1;
      UNLOCK();
    }
    local_e0 = local_118;
    if (plVar27 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar27 + 1) = (int)plVar27[1] + 1;
      UNLOCK();
    }
    plStack_d8 = plVar27;
    if (&local_e0 != plVar18) {
      local_e0._0_4_ = (undefined4)local_118;
      local_e0._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
      lVar23 = *plVar18;
      plStack_d8 = (longlong *)plVar18[1];
      local_48 = (undefined4)local_e0;
      uStack_44 = local_e0._4_4_;
      uStack_40 = uVar3;
      uStack_3c = uVar4;
      *(undefined4 *)plVar18 = (undefined4)local_e0;
      *(undefined4 *)((longlong)plVar18 + 4) = local_e0._4_4_;
      *(undefined4 *)(plVar18 + 1) = uVar3;
      *(undefined4 *)((longlong)plVar18 + 0xc) = uVar4;
      local_e0 = lVar23;
    }
    plVar12 = plStack_d8;
    if (plStack_d8 != (longlong *)0x0) {
      LOCK();
      plVar11 = plStack_d8 + 1;
      lVar23 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*plStack_d8)(plStack_d8);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar22 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar22 == 1) {
          (**(code **)(*plStack_d8 + 8))();
        }
      }
    }
    if (plVar27 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar27 + 1;
      lVar23 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar23 == 1) {
        (**(code **)*plVar27)(plVar27);
        LOCK();
        piVar1 = (int *)((longlong)plVar27 + 0xc);
        iVar22 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar22 == 1) {
          (**(code **)(*plVar27 + 8))(plVar27);
        }
      }
    }
  }
  plVar18 = plVar18 + 2;
  goto joined_r0x00014202267a;
LAB_142022850:
  local_138 = uVar8;
  if (plVar27 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar27 + 1;
    lVar23 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar23 == 1) {
      (**(code **)*plVar27)(plVar27);
      LOCK();
      piVar1 = (int *)((longlong)plVar27 + 0xc);
      iVar22 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      uVar8 = local_138;
      if (iVar22 == 1) {
        (**(code **)(*plVar27 + 8))(plVar27,1);
        uVar8 = local_138;
      }
    }
  }
  goto LAB_142022891;
}



// FUNCTION 142023000 FUN_142023000 body=155 status=ok
// SIG undefined FUN_142023000(void)

void FUN_142023000(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 local_28 [32];
  
  uVar7 = 0;
  uVar5 = uVar7;
  if (*(int *)(param_1 + 10) != 0) {
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 4;
    }
    if (plVar8 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar8 + 8))();
    }
  }
  puVar6 = (undefined4 *)(*(code *)param_1[2])(local_28,uVar5);
  uVar2 = puVar6[1];
  uVar3 = puVar6[2];
  uVar4 = puVar6[3];
  puVar1 = *(undefined8 **)*param_1;
  *(undefined4 *)(puVar1 + 0xc) = *puVar6;
  *(undefined4 *)((longlong)puVar1 + 100) = uVar2;
  *(undefined4 *)(puVar1 + 0xd) = uVar3;
  *(undefined4 *)((longlong)puVar1 + 0x6c) = uVar4;
  *(undefined4 *)(puVar1 + 0xe) = puVar6[4];
  *(undefined1 *)(puVar1 + 0xb) = 1;
  (**(code **)(*(longlong *)puVar1[10] + 0x10))();
  if (*(int *)(puVar1 + 8) != 0) {
    plVar8 = (longlong *)puVar1[6];
    if ((longlong *)puVar1[6] == (longlong *)0x0) {
      plVar8 = puVar1 + 2;
    }
    if (plVar8 != (longlong *)0x0) {
      if (plVar8 != (longlong *)0x0) {
        uVar7 = (**(code **)(*plVar8 + 8))();
      }
      (*(code *)*puVar1)(uVar7);
    }
  }
  return;
}



// FUNCTION 1420230a0 FUN_1420230a0 body=246 status=ok
// SIG undefined FUN_1420230a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_1420230a0(undefined8 *param_1,float *param_2)

{
  char cVar1;
  float fVar2;
  undefined1 auStack_118 [32];
  double local_f8;
  double local_f0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined2 local_24;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_98 = 0x3f800000;
  local_88 = 0x3f80000000000000;
  local_70 = 0x3f800000;
  local_68 = 0x3f800000;
  local_58 = 0x3f80000000000000;
  local_40 = 0x3f800000;
  local_30 = 0x3f80000000000000;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_24 = 0;
  cVar1 = FUN_142039630(*param_1,&local_f8);
  if (cVar1 == '\0') {
    *param_2 = (float)DAT_1468b5d88;
    fVar2 = DAT_1468b5d88._4_4_;
  }
  else {
    *param_2 = (float)local_f8;
    fVar2 = (float)local_f0;
  }
  param_2[1] = fVar2;
  return param_2;
}



// FUNCTION 1420231a0 FUN_1420231a0 body=150 status=ok
// SIG undefined FUN_1420231a0(void)

void FUN_1420231a0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar6 = iVar5 == 0;
    if (bVar6) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (!bVar6) {
      while( true ) {
        LOCK();
        bVar6 = iVar5 == (int)plVar3[1];
        if (bVar6) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar6) break;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar6 = iVar5 == 0;
        if (bVar6) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar6) {
          return;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        if (param_1[3] != 0) {
          FUN_142035d70(*(undefined8 *)(*param_1 + 0x88),param_1 + 1);
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
  return;
}



// FUNCTION 142023240 FUN_142023240 body=363 status=ok
// SIG undefined FUN_142023240(void)

void FUN_142023240(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  DWORD DVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  
  plVar3 = (longlong *)param_1[3];
  lVar9 = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar11 = iVar5 == 0;
    if (bVar11) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (!bVar11) {
      while( true ) {
        LOCK();
        bVar11 = iVar5 == (int)plVar3[1];
        if (bVar11) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar11) break;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar11 = iVar5 == 0;
        if (bVar11) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar11) {
          return;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        lVar8 = param_1[2];
        if (lVar8 != 0) {
          LOCK();
          bVar11 = *(int *)(lVar8 + 0x1e0) == 0;
          if (bVar11) {
            *(int *)(lVar8 + 0x1e0) = 0;
          }
          UNLOCK();
          if (bVar11) {
            LOCK();
            cVar4 = *(char *)(lVar8 + 0x30);
            if (cVar4 == '\0') {
              *(char *)(lVar8 + 0x30) = '\0';
              cVar4 = '\0';
            }
            UNLOCK();
            if ((cVar4 < '\x06') && (lVar8 = FUN_1416f8720((int)param_1[1]), lVar8 != 0)) {
              lVar8 = FUN_1416f8720((int)param_1[1]);
              iVar5 = *(int *)(lVar8 + 0xc);
              if (iVar5 < (int)DAT_1469e91c4) {
                uVar10 = iVar5 >> 0x1f & 0xffff;
                uVar6 = iVar5 + uVar10;
                lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                        (longlong)(int)((uVar6 & 0xffff) - uVar10) * 0x18;
              }
              if ((*(uint *)(lVar9 + 8) & 0x30000000) == 0) {
                FUN_142031300(*param_1);
                lVar9 = *param_1;
                LOCK();
                bVar11 = *(int *)(lVar9 + 0x1e0) == 0;
                if (bVar11) {
                  *(int *)(lVar9 + 0x1e0) = 0;
                }
                UNLOCK();
                if (bVar11) {
                  LOCK();
                  cVar4 = *(char *)(lVar9 + 0x30);
                  if (cVar4 == '\0') {
                    *(char *)(lVar9 + 0x30) = '\0';
                    cVar4 = '\0';
                  }
                  UNLOCK();
                  if ((cVar4 < '\x06') && (*(longlong *)(lVar9 + 0x78) != 0)) {
                    LOCK();
                    cVar4 = *(char *)(lVar9 + 0x30);
                    if (cVar4 == '\0') {
                      *(char *)(lVar9 + 0x30) = '\0';
                      cVar4 = '\0';
                    }
                    UNLOCK();
                    if (cVar4 < '\x05') {
                      lVar8 = **(longlong **)(lVar9 + 0x78);
                      DVar7 = GetCurrentThreadId();
                      (**(code **)(lVar8 + 0xd8))(*(undefined8 *)(lVar9 + 0x78),DVar7);
                    }
                  }
                }
              }
            }
          }
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
  return;
}



// FUNCTION 1420233b0 FUN_1420233b0 body=129 status=ok
// SIG undefined FUN_1420233b0(void)

void FUN_1420233b0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined2 *puVar4;
  
  if ((param_1[1] != 0) && (param_1[2] != 0)) {
    piVar1 = (int *)(param_1[2] + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if ((0 < iVar3) && (lVar2 = *param_1, ((byte)*(undefined4 *)(lVar2 + 0xa0) & 0x8f) == 10)) {
      FString::operator=(lVar2 + 0x38,lVar2 + 0x48);
      lVar2 = *param_1;
      if (*(int *)(lVar2 + 0x40) == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = *(undefined2 **)(lVar2 + 0x38);
      }
                    /* WARNING: Could not recover jumptable at 0x000142023424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(lVar2 + 0x98) + 0x128))
                (*(longlong **)(lVar2 + 0x98),*(undefined8 *)(lVar2 + 0xa8),puVar4,1);
      return;
    }
  }
  return;
}



// FUNCTION 142023440 FUN_142023440 body=225 status=ok
// SIG undefined FUN_142023440(void)

void FUN_142023440(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong local_res8;
  
  lVar2 = FUN_141796df0();
  puVar6 = (undefined8 *)0x0;
  if (lVar2 != 0) {
    plVar7 = *(longlong **)(param_1 + 0x18);
    if (*plVar7 == 0) {
      lVar3 = operator_new(0x18);
      puVar4 = puVar6;
      if (lVar3 != 0) {
        puVar4 = (undefined8 *)
                 TStrongObjectPtr<UMaterialInterface>::FInternalReferenceCollector::
                 FInternalReferenceCollector(lVar3,lVar2);
      }
      if (plVar7 == &local_res8) {
        if (puVar4 == (undefined8 *)0x0) goto LAB_1420234cb;
        puVar5 = (undefined8 *)*puVar4;
      }
      else {
        puVar1 = (undefined8 *)*plVar7;
        *plVar7 = (longlong)puVar4;
        if (puVar1 == (undefined8 *)0x0) goto LAB_1420234cb;
        puVar5 = (undefined8 *)*puVar1;
        puVar4 = puVar1;
      }
      (*(code *)*puVar5)(puVar4,1);
    }
    else {
      *(longlong *)(*plVar7 + 0x10) = lVar2;
    }
  }
LAB_1420234cb:
  if (*(int *)(param_1 + 0x70) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x60);
    puVar4 = puVar6;
    if (plVar7 == (longlong *)0x0) {
      puVar4 = (undefined8 *)(param_1 + 0x40);
    }
    if (puVar4 != (undefined8 *)0x0 || plVar7 != (longlong *)0x0) {
      if (*(int *)(param_1 + 0x70) != 0) {
        if (plVar7 == (longlong *)0x0) {
          plVar7 = (longlong *)(param_1 + 0x40);
        }
        if (plVar7 != (longlong *)0x0) {
          puVar6 = (undefined8 *)(**(code **)(*plVar7 + 8))();
        }
      }
      (**(code **)(param_1 + 0x30))(puVar6);
    }
  }
  return;
}



// FUNCTION 142023530 FUN_142023530 body=1178 status=ok
// SIG undefined FUN_142023530(void)

undefined4 FUN_142023530(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int *piVar9;
  undefined8 *puVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  int local_res8;
  int iStackX_c;
  undefined1 local_res18 [8];
  int local_118;
  int local_114;
  undefined8 local_110;
  int local_108;
  int local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [24];
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  LOCK();
  *(int *)(*param_1 + 0x94) = *(int *)(*param_1 + 0x94) + 1;
  UNLOCK();
  lVar6 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
  puVar10 = (undefined8 *)0x0;
  uVar14 = 0;
  if ((lVar6 != 0) && (*(longlong *)(*param_1 + 0x78) != 0)) {
    lVar6 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
    if (*(longlong *)(lVar6 + 0x48) != 0) {
      puVar7 = (undefined8 *)operator_new(8);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = 0;
        puVar10 = puVar7;
      }
      *(undefined8 **)(*param_1 + 0xc0) = puVar10;
    }
    lVar6 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
    uVar11 = *(uint *)(lVar6 + 0x40) & 2;
    if (uVar11 == 0) {
      uVar14 = 0x400;
    }
    lVar6 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
    if (((*(longlong *)(lVar6 + 0x48) != 0) &&
        (lVar6 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc)),
        *(char *)(lVar6 + 0x88) == '\x02')) && (uVar14 = 0x402, uVar11 != 0)) {
      uVar14 = 2;
    }
    lVar6 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
    if (*(longlong *)(lVar6 + 0x48) == 0) {
      iStackX_c = 0;
      local_res8 = 0;
      lVar6 = FUN_142039c70();
      local_118 = 0;
      local_114 = 0;
      if (lVar6 != 0) {
        cVar3 = FUN_1415ad720(&DAT_1468e2448);
        if (((cVar3 == '\0') && (DAT_1468c21ae != '\0')) &&
           (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
          LOCK();
          lVar8 = *(longlong *)(lVar6 + 0x1a0);
          if (lVar8 == 0) {
            *(longlong *)(lVar6 + 0x1a0) = 0;
            lVar8 = 0;
          }
          UNLOCK();
          local_118 = (int)lVar8;
          local_114 = (int)((ulonglong)lVar8 >> 0x20);
        }
        else {
          plVar2 = *(longlong **)(lVar6 + 0x198);
          if (plVar2 != (longlong *)0x0) {
            piVar9 = (int *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res18);
            local_res8 = *piVar9;
            iStackX_c = piVar9[1];
          }
          LOCK();
          *(ulonglong *)(lVar6 + 0x1a0) = CONCAT44(iStackX_c,local_res8);
          UNLOCK();
          local_118 = local_res8;
          local_114 = iStackX_c;
        }
      }
    }
    else {
      lVar6 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
      fVar12 = (float)(**(code **)(**(longlong **)(lVar6 + 0x48) + 0x2b0))();
      lVar6 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
      fVar13 = (float)(**(code **)(**(longlong **)(lVar6 + 0x48) + 0x2b8))();
      local_118 = (int)fVar12;
      local_114 = (int)fVar13;
    }
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = 0;
    local_ec = 0x3f800000;
    local_e8 = 0x3f800000;
    local_108 = local_118;
    local_104 = local_114;
    local_f0 = uVar14;
    FUN_142056420(*param_1,&local_118);
    lVar6 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
    if (((*(longlong *)(lVar6 + 0x48) == 0) ||
        (lVar6 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc)),
        *(char *)(lVar6 + 0x88) == '\x01')) ||
       (lVar6 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc)),
       *(char *)(lVar6 + 0x88) == '\x02')) {
      (**(code **)(**(longlong **)(*param_1 + 0x78) + 0x108))(*(longlong **)(*param_1 + 0x78),0);
    }
    cVar3 = FWeakObjectPtr::IsValid(*param_1 + 0x1bc);
    if (cVar3 != '\0') {
      iVar5 = FUN_14203ce50(*param_1);
      lVar6 = FWeakObjectPtr::Get(*param_1 + 0x1bc);
      if (iVar5 == 1) {
        uVar14 = *(undefined4 *)(lVar6 + 0x798);
      }
      else {
        uVar14 = *(undefined4 *)(lVar6 + 0x790);
      }
      *(undefined4 *)(*param_1 + 0x1c4) = uVar14;
    }
    (**(code **)(**(longlong **)(*param_1 + 0x78) + 0xc0))(*(longlong **)(*param_1 + 0x78),0,1,1);
    LOCK();
    *(undefined4 *)(*param_1 + 0xa8) = 1;
    UNLOCK();
  }
  cVar3 = FWeakObjectPtr::IsValid(*param_1 + 0xb8);
  if (cVar3 == '\0') {
    puVar10 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(*param_1,local_a0);
    local_e0 = *puVar10;
    local_d8 = puVar10[1];
    if (local_d8 != 0) {
      LOCK();
      *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
      UNLOCK();
    }
    FUN_142029a60(&local_e0);
    lVar6 = FUN_142039c70();
    if (lVar6 != 0) {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0xf0));
      local_c8 = puVar10[1];
      local_d0 = *puVar10;
      if (local_c8 != 0) {
        LOCK();
        *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
        UNLOCK();
      }
      FUN_142045660(lVar6,&local_d0,lVar6 + 0xe0);
      local_c0 = *puVar10;
      lVar8 = *(longlong *)(lVar6 + 0x1a8);
      local_b8 = puVar10[1];
      if (local_b8 != 0) {
        LOCK();
        *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
        UNLOCK();
      }
      FUN_142045660(lVar6,&local_c0,lVar8 + 0x10);
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0xf0));
      local_58 = 0;
      local_48 = 0;
      puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_78);
      if (puVar7 != (undefined8 *)0x0) {
        puVar7[1] = lVar6;
        *puVar7 = &PTR_FUN_143f77b70;
      }
      local_88[0] = &LAB_14202c930;
      FUN_14204c280(local_88);
    }
  }
  else {
    puVar10 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(*param_1,local_b0);
    lVar6 = FUN_142039c70();
    if (lVar6 != 0) {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x108));
      iVar5 = *(int *)(lVar6 + 0x100);
      *(int *)(lVar6 + 0x100) = iVar5 + 1;
      if (*(int *)(lVar6 + 0x104) < iVar5 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar6 + 0xf8,iVar5);
      }
      puVar7 = (undefined8 *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar6 + 0xf8));
      *puVar7 = *puVar10;
      lVar8 = puVar10[1];
      puVar7[1] = lVar8;
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0x108));
    }
  }
  plVar2 = (longlong *)puVar10[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar9 = (int *)((longlong)plVar2 + 0xc);
      iVar5 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  FUN_142052c50(*param_1,(char)param_1[1]);
  LOCK();
  uVar14 = *(undefined4 *)(*param_1 + 0x9c);
  *(undefined4 *)(*param_1 + 0x9c) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(*param_1 + 0x98) = 1;
  UNLOCK();
  return uVar14;
}



// FUNCTION 1420239d0 FUN_1420239d0 body=137 status=ok
// SIG undefined FUN_1420239d0(void)

ulonglong FUN_1420239d0(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  lVar2 = *param_2;
  cVar3 = FUN_142056a00();
  if ((((cVar3 == '\0') || (cVar3 = FWeakObjectPtr::IsValid(lVar2 + 0x70,0,1), cVar3 == '\0')) ||
      (plVar4 = (longlong *)FWeakObjectPtr::Get(lVar2 + 0x70), plVar4 == (longlong *)0x0)) ||
     (uVar5 = (**(code **)(*plVar4 + 0x488))(plVar4), (char)uVar5 != '\0')) {
    uVar5 = 0;
    LOCK();
    uVar1 = *(uint *)(lVar2 + 0x1d8);
    if (uVar1 == 0) {
      *(uint *)(lVar2 + 0x1d8) = 0;
    }
    else {
      uVar5 = (ulonglong)uVar1;
    }
    UNLOCK();
    if ((uVar1 == 0) &&
       (uVar5 = FRenderCommandFence::IsFenceComplete(lVar2 + 0xb0), (char)uVar5 != '\0')) {
      LOCK();
      cVar3 = *(char *)(lVar2 + 0x30);
      if (cVar3 == '\0') {
        *(char *)(lVar2 + 0x30) = '\0';
        cVar3 = '\0';
      }
      UNLOCK();
      return (ulonglong)(cVar3 == '\t');
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 142023a60 FUN_142023a60 body=500 status=ok
// SIG undefined FUN_142023a60(void)

void FUN_142023a60(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  
  if ((param_1[1] != 0) && (param_1[2] != 0)) {
    piVar1 = (int *)(param_1[2] + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_30 = (longlong *)param_1[2];
      local_38 = 0;
      if (local_30 == (longlong *)0x0) {
LAB_142023af3:
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
              local_38 = param_1[1];
            }
            goto LAB_142023af3;
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
      goto LAB_142023b1a;
    }
  }
  plVar7 = &local_28;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  bVar4 = false;
  bVar10 = true;
  lVar9 = 0;
LAB_142023b1a:
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
  if (lVar9 != 0) {
    lVar9 = *param_1;
    uVar8 = *(uint *)(lVar9 + 0xa0) & 0x8f;
    if (uVar8 - 8 < 4) {
      (**(code **)(**(longlong **)(lVar9 + 0x98) + 0x28))
                (*(longlong **)(lVar9 + 0x98),*(undefined8 *)(lVar9 + 0xa8),param_1[3],
                 param_1[4] + 0x88,uVar8 == 10);
    }
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



// FUNCTION 142023c60 FUN_142023c60 body=493 status=ok
// SIG undefined FUN_142023c60(void)

void FUN_142023c60(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  
  if ((param_1[1] != 0) && (param_1[2] != 0)) {
    piVar1 = (int *)(param_1[2] + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_30 = (longlong *)param_1[2];
      local_38 = 0;
      if (local_30 == (longlong *)0x0) {
LAB_142023cf3:
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
              local_38 = param_1[1];
            }
            goto LAB_142023cf3;
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
      goto LAB_142023d1a;
    }
  }
  plVar7 = &local_28;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  bVar4 = false;
  bVar10 = true;
  lVar9 = 0;
LAB_142023d1a:
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
  if (lVar9 != 0) {
    lVar9 = *param_1;
    uVar8 = *(uint *)(lVar9 + 0xa0) & 0x8f;
    if (uVar8 - 8 < 4) {
      (**(code **)(**(longlong **)(lVar9 + 0x98) + 0x28))
                (*(longlong **)(lVar9 + 0x98),*(undefined8 *)(lVar9 + 0xa8),param_1[3],param_1 + 4,
                 uVar8 == 10);
    }
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



// FUNCTION 142023e50 FUN_142023e50 body=283 status=ok
// SIG undefined FUN_142023e50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142023e50(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [40];
  double local_d0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ushort local_24;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  lVar1 = *param_1;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_24 = 0;
  local_98 = 0x3f800000;
  local_88 = 0x3f80000000000000;
  local_70 = 0x3f800000;
  local_68 = 0x3f800000;
  local_58 = 0x3f80000000000000;
  local_40 = 0x3f800000;
  local_30 = 0x3f80000000000000;
  if (((byte)*(undefined4 *)(lVar1 + 0xa0) & 0x8f) == 10) {
    cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x98) + 0xd8))
                      (*(longlong **)(lVar1 + 0x98),*(undefined8 *)(lVar1 + 0xa8),local_f8);
    if ((cVar3 != '\0') && ((double)*(float *)(param_1 + 1) != local_d0)) {
      local_24 = local_24 | 0x20;
      plVar2 = *(longlong **)(*param_1 + 0x98);
      local_d0 = (double)*(float *)(param_1 + 1);
      (**(code **)(*plVar2 + 0xe0))(plVar2,*(undefined8 *)(*param_1 + 0xa8),local_f8);
    }
  }
  return;
}



// FUNCTION 142023f70 FUN_142023f70 body=442 status=ok
// SIG undefined FUN_142023f70(void)

undefined4 * FUN_142023f70(uint *param_1,undefined4 *param_2)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  
  *(ulonglong *)(param_2 + 0xe) = (ulonglong)*param_1;
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0x10;
  *(undefined8 *)(param_2 + 4) = 0x2000;
  *(undefined8 *)(param_2 + 6) = 0x2000;
  *(undefined8 *)(param_2 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  param_2[0x10] = 0x3e800000;
  *(undefined8 *)(param_2 + 0x11) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x13) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x15) = 0xffffffffffffffff;
  lVar1 = DAT_146acca20;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  lVar5 = 4;
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 == DAT_1468c21c0) goto LAB_142024018;
    lVar4 = 4;
  }
  else {
LAB_142024018:
    lVar4 = 0;
  }
  param_2[0x11] = *(undefined4 *)(lVar4 + lVar1);
  lVar1 = DAT_146acca08;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 == DAT_1468c21c0) goto LAB_142024057;
    lVar4 = 4;
  }
  else {
LAB_142024057:
    lVar4 = 0;
  }
  param_2[0x12] = *(undefined4 *)(lVar4 + lVar1);
  lVar1 = DAT_146acc9c0;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 == DAT_1468c21c0) goto LAB_142024096;
    lVar4 = 4;
  }
  else {
LAB_142024096:
    lVar4 = 0;
  }
  param_2[0x14] = *(undefined4 *)(lVar4 + lVar1);
  lVar1 = DAT_146acc9f0;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 == DAT_1468c21c0) goto LAB_1420240d5;
    lVar4 = 4;
  }
  else {
LAB_1420240d5:
    lVar4 = 0;
  }
  param_2[0x16] = *(undefined4 *)(lVar1 + lVar4);
  lVar1 = DAT_146acc9d8;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) goto LAB_142024111;
  }
  lVar5 = 0;
LAB_142024111:
  param_2[0x15] = *(undefined4 *)(lVar1 + lVar5);
  return param_2;
}



// FUNCTION 142024130 FUN_142024130 body=262 status=ok
// SIG undefined FUN_142024130(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142024130(longlong *param_1)

{
  short sVar1;
  short sVar2;
  longlong *plVar3;
  short *psVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  longlong local_38;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar6 = *param_1;
  if (((byte)*(undefined4 *)(lVar6 + 0xa0) & 0x8f) == 10) {
    puVar7 = &DAT_143f3eda8;
    if ((int)param_1[2] == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)param_1[1];
    }
    if (*(int *)(lVar6 + 0x70) == 0) {
      psVar4 = &DAT_143f3eda8;
    }
    else {
      psVar4 = *(short **)(lVar6 + 0x68);
    }
    lVar6 = (longlong)puVar5 - (longlong)psVar4;
    do {
      sVar1 = *psVar4;
      sVar2 = *(short *)((longlong)psVar4 + lVar6);
      if (sVar1 != sVar2) break;
      psVar4 = psVar4 + 1;
    } while (sVar2 != 0);
    if (sVar1 != sVar2) {
      if ((int)param_1[2] != 0) {
        puVar7 = (undefined2 *)param_1[1];
      }
      lVar6 = TStringConversion<FTCHARToUTF8_Convert,128>::
              TStringConversion<FTCHARToUTF8_Convert,128>(local_b8,puVar7);
      plVar3 = *(longlong **)(*param_1 + 0x98);
      (**(code **)(*plVar3 + 0x150))
                (plVar3,*(undefined8 *)(*param_1 + 0xa8),*(undefined8 *)(lVar6 + 0x88),1);
      if (local_38 != 0) {
        FMemory::Free();
      }
      FString::operator=(*param_1 + 0x68,param_1 + 1);
    }
  }
  return;
}



// FUNCTION 142024240 FUN_142024240 body=327 status=ok
// SIG undefined FUN_142024240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142024240(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  undefined1 local_c8 [80];
  code *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  lVar1 = *param_1;
  uVar2 = 0;
  if (*(int *)(lVar1 + 0x60) != 0) {
    plVar5 = *(longlong **)(lVar1 + 0x50);
    if (*(longlong **)(lVar1 + 0x50) == (longlong *)0x0) {
      plVar5 = (longlong *)(lVar1 + 0x30);
    }
    if (plVar5 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar5 + 8))();
    }
  }
  puVar3 = (undefined8 *)(**(code **)(lVar1 + 0x20))(local_d8,uVar2);
  local_48 = (longlong *)0x0;
  local_38 = 0;
  *param_2 = *puVar3;
  lVar1 = *param_1;
  local_78[0] = USlateBlueprintLibrary::GetLocalSize;
  lVar4 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_c8,local_78);
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
  return param_2;
}



// FUNCTION 142024390 FUN_142024390 body=161 status=ok
// SIG undefined FUN_142024390(void)

void FUN_142024390(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  
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
  puVar4 = (undefined4 *)(*(code *)param_1[2])(local_res8,uVar3);
  uVar1 = puVar4[1];
  puVar2 = *(undefined8 **)*param_1;
  *(undefined4 *)(puVar2 + 0xc) = *puVar4;
  *(undefined4 *)((longlong)puVar2 + 100) = uVar1;
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
  return;
}



// FUNCTION 142024440 FUN_142024440 body=394 status=ok
// SIG undefined FUN_142024440(void)

ulonglong FUN_142024440(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  ulonglong in_RAX;
  uint uVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  uint local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint local_20;
  byte local_18;
  undefined7 uStack_17;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    local_38 = 0xffffffffffffffff;
    uStack_30 = 0xffffffffffffffff;
    local_28 = (longlong *)0x0;
    local_20 = 0;
    local_68 = 0xffffffffffffffff;
    uStack_60 = 0xffffffffffffffff;
    local_58 = (longlong *)0x0;
    local_50 = *(uint *)(lVar1 + 0xa0);
    local_48 = *(undefined8 *)(lVar1 + 0xa8);
    local_40 = *(undefined8 *)(lVar1 + 0xb0);
    if ((*(uint *)(lVar1 + 0xa0) >> 6 & 1) != 0) {
      local_58 = *(longlong **)(lVar1 + 0x98);
      (**(code **)(*local_58 + 8))(local_58,&local_68);
    }
    lVar1 = *param_1;
    uVar4 = *(uint *)(lVar1 + 0xa0) & 0x8f;
    if ((uVar4 - 8 < 4) &&
       (cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x98) + 0x30))
                          (*(longlong **)(lVar1 + 0x98),*(undefined8 *)(lVar1 + 0xa8),&local_38,
                           "hitTestObject",&local_68,1,uVar4 == 10), bVar2 = local_18, cVar3 != '\0'
       )) {
      if ((local_50 >> 6 & 1) != 0) {
        (**(code **)(*local_58 + 0x10))(local_58,&local_68,local_48);
        local_58 = (longlong *)0x0;
      }
      local_50 = 0;
      if ((local_20 >> 6 & 1) != 0) {
        (**(code **)(*local_28 + 0x10))(local_28,&local_38,CONCAT71(uStack_17,local_18));
      }
      return (ulonglong)bVar2;
    }
    if ((local_50 >> 6 & 1) != 0) {
      (**(code **)(*local_58 + 0x10))(local_58,&local_68,local_48);
      local_58 = (longlong *)0x0;
    }
    in_RAX = (ulonglong)(local_20 >> 6);
    local_50 = 0;
    if ((local_20 >> 6 & 1) != 0) {
      in_RAX = (**(code **)(*local_28 + 0x10))(local_28,&local_38,CONCAT71(uStack_17,local_18));
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142024600 FUN_142024600 body=177 status=ok
// SIG undefined FUN_142024600(void)

RefCountImplCore * FUN_142024600(RefCountImplCore *param_1,uint param_2)

{
  RefCountImplCore *this;
  longlong lVar1;
  
  if ((param_2 & 2) != 0) {
    lVar1 = *(longlong *)(param_1 + -8);
    this = param_1 + lVar1 * 0x10;
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      this = this + -0x10;
      Scaleform::RefCountImplCore::~RefCountImplCore(this);
    }
    if ((param_2 & 1) != 0) {
      FMemory::operator_delete(param_1 + -8,*(longlong *)(param_1 + -8) * 0x10 + 8);
    }
    return param_1 + -8;
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1420246d0 FUN_1420246d0 body=110 status=ok
// SIG undefined FUN_1420246d0(void)

undefined8 * FUN_1420246d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f712f8;
  param_1[2] = &PTR_LAB_144f71690;
  FUN_1420627b0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x3700);
  }
  return param_1;
}



// FUNCTION 142024740 FUN_142024740 body=66 status=ok
// SIG undefined FUN_142024740(void)

undefined8 * FUN_142024740(undefined8 *param_1,ulonglong param_2)

{
  FUN_14201b9d0(param_1 + 2);
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 142024790 `scalar_deleting_destructor' body=108 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_9227c6ebd131d307861678b9f3313372>_>::
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
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 142024800 FUN_142024800 body=106 status=ok
// SIG undefined FUN_142024800(void)

undefined8 * FUN_142024800(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  FUN_1416f8340(*(undefined4 *)(param_1 + 2));
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142024870 FUN_142024870 body=143 status=ok
// SIG undefined FUN_142024870(void)

undefined8 * FUN_142024870(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 5);
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
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142024900 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE::Core::Private::Function::
TFunction_CopyableOwnedObject<``FOnlineSessionEOS::OnLobbyInviteReceived'::`2'::<lambda_1>::operator()'::`15'::<lambda_1>,1>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_14201b560(param_1 + 1);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142024950 `scalar_deleting_destructor' body=108 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_14e6f5c2fd87bb4b2fa9737f56c88017>_>::
_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    plVar1 = (longlong *)param_1[10];
    if ((longlong *)param_1[10] == (longlong *)0x0) {
      plVar1 = param_1 + 6;
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1420249c0 FUN_1420249c0 body=66 status=ok
// SIG undefined FUN_1420249c0(void)

undefined8 * FUN_1420249c0(undefined8 *param_1,ulonglong param_2)

{
  FUN_14201b5e0(param_1 + 1);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142024a10 FUN_142024a10 body=66 status=ok
// SIG undefined FUN_142024a10(void)

undefined8 * FUN_142024a10(undefined8 *param_1,ulonglong param_2)

{
  FUN_14201b670(param_1 + 1);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142024a60 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<FPackageLocalizationCultureCache>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 142024a90 FUN_142024a90 body=98 status=ok
// SIG undefined FUN_142024a90(void)

undefined8 * FUN_142024a90(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[7];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142024b00 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_CopyableOwnedObject<<lambda_3f2517dffc0b804e24ec4e3017be6389>,1>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_14201b790(param_1 + 2);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 142024b50 FUN_142024b50 body=82 status=ok
// SIG undefined FUN_142024b50(void)

undefined8 * FUN_142024b50(undefined8 *param_1,ulonglong param_2)

{
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 4);
  FUN_1416f8340(*(undefined4 *)((longlong)param_1 + 0x14));
  FUN_1416f8340(*(undefined4 *)(param_1 + 2));
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142024bb0 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_CopyableOwnedObject<<lambda_5192e767e8f3717b0989d51deb824a50>,0>::
_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[3];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142024c20 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_b7fc12ad66327ae541cf85ed7eeb197b>,1>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_14201b800(param_1 + 2);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 142024c70 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE::Core::Private::Function::
TFunction_CopyableOwnedObject<``FOnlineSessionEOS::OnLobbyInviteReceived'::`2'::<lambda_1>::operator()'::`15'::<lambda_1>,1>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_14201b8a0(param_1 + 1);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142024cc0 `scalar_deleting_destructor' body=134 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FNarrativeDataTable::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

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
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142024d50 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_CopyableOwnedObject<<lambda_3f2517dffc0b804e24ec4e3017be6389>,1>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_14201b920(param_1 + 2);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 142024da0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE::Core::Private::Function::
TFunction_CopyableOwnedObject<``FOnlineSessionEOS::OnLobbyInviteReceived'::`2'::<lambda_1>::operator()'::`15'::<lambda_1>,1>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_14201ba90(param_1 + 1);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142024df0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE::Core::Private::Function::
TFunction_CopyableOwnedObject<``FOnlineSessionEOS::OnLobbyInviteReceived'::`2'::<lambda_1>::operator()'::`15'::<lambda_1>,1>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_14201bb10(param_1 + 1);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142024e40 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_CopyableOwnedObject<<lambda_8746b16a95b0745c8dc8ffea64f52ff9>_>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_14201bba0(param_1 + 1);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 142024e90 FUN_142024e90 body=72 status=ok
// SIG undefined FUN_142024e90(void)

undefined8 * FUN_142024e90(undefined8 *param_1,uint param_2)

{
  if ((RefCountImpl *)param_1[2] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[2]);
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142024ee0 FUN_142024ee0 body=84 status=ok
// SIG undefined FUN_142024ee0(void)

undefined8 * FUN_142024ee0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f70e98;
  param_1[2] = &PTR_LAB_144f70ea0;
  FScaleformRenderer::ReleaseResource();
  FUN_14201c750(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 142024f40 FUN_142024f40 body=97 status=ok
// SIG undefined FUN_142024f40(void)

undefined8 * FUN_142024f40(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f71a30;
  if (param_1[0xb] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xb] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142024fb0 FUN_142024fb0 body=97 status=ok
// SIG undefined FUN_142024fb0(void)

undefined8 * FUN_142024fb0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f70f38;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142025020 FUN_142025020 body=97 status=ok
// SIG undefined FUN_142025020(void)

undefined8 * FUN_142025020(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f712e8;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142025090 FUN_142025090 body=97 status=ok
// SIG undefined FUN_142025090(void)

undefined8 * FUN_142025090(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f716d0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142025100 FUN_142025100 body=97 status=ok
// SIG undefined FUN_142025100(void)

undefined8 * FUN_142025100(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f712b0;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142025170 FUN_142025170 body=97 status=ok
// SIG undefined FUN_142025170(void)

undefined8 * FUN_142025170(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f716e0;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1420251e0 FUN_1420251e0 body=97 status=ok
// SIG undefined FUN_1420251e0(void)

undefined8 * FUN_1420251e0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f712c0;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142025250 FUN_142025250 body=97 status=ok
// SIG undefined FUN_142025250(void)

undefined8 * FUN_142025250(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144f71110;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}


